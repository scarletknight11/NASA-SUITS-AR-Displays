#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


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
template <typename T1, typename T2>
struct GenericVirtualActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1>
struct InterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R>
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct GenericInterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};

// System.Action`1<System.Runtime.InteropServices.WindowsRuntime.EventRegistrationToken>
struct Action_1_t2F6697C5DA7073FCAE212D3900E184AF5BA9E722;
// System.Comparison`1<UnityEngine.EventSystems.RaycastResult>
struct Comparison_1_t9FCAC8C8CE160A96C5AAD2DE1D353DCE8A2FEEFC;
// System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.BaseEventSystem/EventHandlerEntry>>
struct Dictionary_2_t18E076B12814DFAAD91B5BC1B163AAFAC0CADEFD;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Diagnostics.IMixedRealityDiagnosticsHandler>
struct EventFunction_1_t503E94AA3FF5ABC81854E3CA5ACC551D4F43C4FE;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<System.Object>
struct EventFunction_1_t297B5C47242D1B98BEC955E2804FA142B43E7927;
// System.Func`2<Windows.Foundation.TypedEventHandler`2<Windows.Media.Capture.AppCapture,System.Object>,System.Runtime.InteropServices.WindowsRuntime.EventRegistrationToken>
struct Func_2_t75F41BC3985F61E6BFABDD39D82A26CDD4031436;
// System.Func`2<System.Object,System.Runtime.InteropServices.WindowsRuntime.EventRegistrationToken>
struct Func_2_t1C28D2BFD837EC81FF3046F74030179155D5F3BE;
// System.Collections.Generic.List`1<System.Tuple`2<Microsoft.MixedReality.Toolkit.BaseEventSystem/Action,UnityEngine.GameObject>>
struct List_1_tADF7F1C5FADE0AE6D00BC928B20C4B63DDC8A3AD;
// System.Collections.Generic.List`1<System.Tuple`3<Microsoft.MixedReality.Toolkit.BaseEventSystem/Action,System.Type,UnityEngine.EventSystems.IEventSystemHandler>>
struct List_1_t51E625EDA46926814063BAC38407B110D9C48805;
// System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>
struct List_1_tA5BDE435C735A082941CD33D212F97F4AE9FA55F;
// System.Collections.Generic.List`1<UnityEngine.EventSystems.EventSystem>
struct List_1_tF2FE88545EFEC788CAAE6C74EC2F78E937FCCAC3;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B;
// Windows.Foundation.TypedEventHandler`2<Windows.Media.Capture.AppCapture,System.Object>
struct TypedEventHandler_2_t9B118434C59C99BDDD7ADFCC4DCAA528A1A4123F;
// Windows.Foundation.TypedEventHandler`2<System.Object,System.Object>
struct TypedEventHandler_2_t6B82D27B2ED38E7ADDA1ADD5B208073B69D39B83;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// UnityEngine.FrameTiming[]
struct FrameTimingU5BU5D_t32DDC21D000DE3127D5DF845AFEC7B02A0AE390E;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// UnityEngine.Matrix4x4[]
struct Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
// UnityEngine.Vector4[]
struct Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD;
// Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler/FrameRateColor[]
struct FrameRateColorU5BU5D_tE020E288145C85DE15325F4E79AAA8FD9905E91E;
// Windows.Media.Capture.AppCapture
struct AppCapture_t053EACB2089D0B11989E1C6810A8B63855CCD518;
// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C;
// Microsoft.MixedReality.Toolkit.BaseCoreSystem
struct BaseCoreSystem_t9D02F9BBC05DAD6F987F647B666B37A062ACFAA6;
// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F;
// Microsoft.MixedReality.Toolkit.BaseEventSystem
struct BaseEventSystem_tB9BD9711D545EEEF00D3162ED9A13EBDE4B1DEA1;
// UnityEngine.EventSystems.BaseInputModule
struct BaseInputModule_tF3B7C22AF1419B2AC9ECE6589357DC1B88ED96B1;
// Microsoft.MixedReality.Toolkit.BaseMixedRealityProfile
struct BaseMixedRealityProfile_tB4FDEF58FFD17796C0DB7241630B71CDF38FA1D4;
// Microsoft.MixedReality.Toolkit.BaseService
struct BaseService_tB7EC5C0F60DC5EE2DA122A608226D3887B6421D0;
// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184;
// UnityEngine.Collider
struct Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// Microsoft.MixedReality.Toolkit.Diagnostics.DiagnosticsEventData
struct DiagnosticsEventData_t567062EB8FA13779F27424928C704B00DC3CBCE7;
// Microsoft.MixedReality.Toolkit.Diagnostics.DiagnosticsSystemVoiceControls
struct DiagnosticsSystemVoiceControls_t1997FD3471800D442B69DBD6D9D1FCF7CD521237;
// UnityEngine.EventSystems.EventSystem
struct EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// Windows.Media.Capture.IAppCaptureStatics
struct IAppCaptureStatics_t9BC8ABA580F16484E3D5F80A66152C5AC5696F10;
// Windows.Media.Capture.IAppCaptureStatics2
struct IAppCaptureStatics2_t06B63A1548281B88A98D808A5523AC634F99CA87;
// System.IAsyncResult
struct IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5;
// Microsoft.MixedReality.Toolkit.Diagnostics.IMixedRealityDiagnosticsHandler
struct IMixedRealityDiagnosticsHandler_tC7F528443EE424F58E5FA17312F1719942247B17;
// Microsoft.MixedReality.Toolkit.Diagnostics.IMixedRealityDiagnosticsSystem
struct IMixedRealityDiagnosticsSystem_t3A9CABAFA816AECA574E6D6479A2923557B7E678;
// Microsoft.MixedReality.Toolkit.IMixedRealityEventSource
struct IMixedRealityEventSource_t9E9DFD08DEE578702833FF502590A1E0476E59E1;
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource
struct IMixedRealityInputSource_t9926A91DEC380AA837347E82976F5A6A9F9226C2;
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem
struct IMixedRealityInputSystem_t73D9E8D52E761DF1CC230411D0EFD51104FF68B2;
// Microsoft.MixedReality.Toolkit.IMixedRealityServiceRegistrar
struct IMixedRealityServiceRegistrar_t4B893B7CDAAC977211D826D02C8522ECA327D715;
// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
// UnityEngine.MaterialPropertyBlock
struct MaterialPropertyBlock_t2308669579033A857EFE6E4831909F638B27411D;
// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4;
// UnityEngine.MeshFilter
struct MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5;
// UnityEngine.MeshRenderer
struct MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsProfile
struct MixedRealityDiagnosticsProfile_tF0C607D340096A8CF0E72C813EE76A9CBE288EFC;
// Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem
struct MixedRealityDiagnosticsSystem_t04B619C4E0301FBBC152B0BFA6CE2DB37DB20D3E;
// Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler
struct MixedRealityToolkitVisualProfiler_t7EC6FCE39C4246F2C6D408EF28AE145F66EE0CB1;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// UnityEngine.Renderer
struct Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF;
// UnityEngine.Shader
struct Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692;
// Microsoft.MixedReality.Toolkit.Input.SpeechEventData
struct SpeechEventData_t4424832821FEC4163B9CFCD3A9F457DF930A95BD;
// System.Diagnostics.Stopwatch
struct Stopwatch_tA188A210449E22C07053A7D3014DD182C7369043;
// System.String
struct String_t;
// System.Text.StringBuilder
struct StringBuilder_t;
// UnityEngine.TextMesh
struct TextMesh_t7E1981C7B03E50D5CA5A3AD5B0D9BB0AB6EE91F8;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// System.Type
struct Type_t;
// Microsoft.MixedReality.Toolkit.Diagnostics.VisualProfilerControl
struct VisualProfilerControl_tAB0446AFDBA39EF58FEC3CAF667A8B3AD706357C;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD;
// Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem/<>c
struct U3CU3Ec_t6122B532248D673B289A7F458ACB1853ED34F671;

IL2CPP_EXTERN_C RuntimeClass* Action_1_t2F6697C5DA7073FCAE212D3900E184AF5BA9E722_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CoreServices_tCB1FB80E338B89BCA07C52C15B876BC6D4B3439B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DiagnosticsEventData_t567062EB8FA13779F27424928C704B00DC3CBCE7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventFunction_1_t503E94AA3FF5ABC81854E3CA5ACC551D4F43C4FE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ExecuteEvents_t74DCF8B83743EE2773ACF182344612A048E2CC59_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FrameRateColorU5BU5D_tE020E288145C85DE15325F4E79AAA8FD9905E91E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FrameTimingU5BU5D_t32DDC21D000DE3127D5DF845AFEC7B02A0AE390E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_t75F41BC3985F61E6BFABDD39D82A26CDD4031436_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IMixedRealityDiagnosticsHandler_tC7F528443EE424F58E5FA17312F1719942247B17_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IMixedRealityDiagnosticsSystem_t3A9CABAFA816AECA574E6D6479A2923557B7E678_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MaterialPropertyBlock_t2308669579033A857EFE6E4831909F638B27411D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Mathf_tE284D016E3B297B72311AAD9EB8F0E643F6A4682_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MixedRealityDiagnosticsProfile_tF0C607D340096A8CF0E72C813EE76A9CBE288EFC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MixedRealityDiagnosticsSystem_t04B619C4E0301FBBC152B0BFA6CE2DB37DB20D3E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MixedRealityToolkitVisualProfiler_t7EC6FCE39C4246F2C6D408EF28AE145F66EE0CB1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Stopwatch_tA188A210449E22C07053A7D3014DD182C7369043_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringBuilder_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TypedEventHandler_2_t9B118434C59C99BDDD7ADFCC4DCAA528A1A4123F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t6122B532248D673B289A7F458ACB1853ED34F671_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WindowsRuntimeMarshal_t2E440B8ECBDEA6D789E5D53780B0D5446578C9D0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral0A0F778C0E661B78B1B6AD2138BA091D3D91561A;
IL2CPP_EXTERN_C String_t* _stringLiteral0D18A0AC35B03549F77B8A582B6AD5EA3ACA01C3;
IL2CPP_EXTERN_C String_t* _stringLiteral10FFF93EF949F2334F4C415406155881D8A23640;
IL2CPP_EXTERN_C String_t* _stringLiteral11C6A78DFF7F1AD65B32D4BFAA7E9E99490CF2C3;
IL2CPP_EXTERN_C String_t* _stringLiteral13DEC32CBB5161D1725B092A6C5860B0FC2ACEC4;
IL2CPP_EXTERN_C String_t* _stringLiteral155D513E52CA71A25F673EE4D5AD6D564656F5FB;
IL2CPP_EXTERN_C String_t* _stringLiteral1665DB987C5901E42B248E6D1128B9B20A1583AE;
IL2CPP_EXTERN_C String_t* _stringLiteral1EE2FC1E941A5930213C8E0F3A238E9A18A8F1C4;
IL2CPP_EXTERN_C String_t* _stringLiteral2A4FA5F9A66DEEA10B9329AC6B6C4542BCEC1AB2;
IL2CPP_EXTERN_C String_t* _stringLiteral2F5DDA9EF7410C3C37C840965AC892E3803E4957;
IL2CPP_EXTERN_C String_t* _stringLiteral3C73394BEFC13A1F539275C77FA59F83301065F5;
IL2CPP_EXTERN_C String_t* _stringLiteral44710FB5A26187014377E8E1544F56B125E6F4A1;
IL2CPP_EXTERN_C String_t* _stringLiteral47A3FAF17D89549FD0F0ECA7370B81F7C80DFCDE;
IL2CPP_EXTERN_C String_t* _stringLiteral4A6703A3F9CC9C88FFCA9574A1C64091DEAF03F7;
IL2CPP_EXTERN_C String_t* _stringLiteral4E8A8460777BA546EF33027F63BAAF6396716FBE;
IL2CPP_EXTERN_C String_t* _stringLiteral5230F5FD1E0998B73530AA850D3A5872D61228EC;
IL2CPP_EXTERN_C String_t* _stringLiteral584F25676660FEECE7691A51DFE6DCAE69EF135A;
IL2CPP_EXTERN_C String_t* _stringLiteral5AF01B63568D803A05C906F1C9342492BA1EDDB7;
IL2CPP_EXTERN_C String_t* _stringLiteral7406124BE72D090590042AFF1000B9BB5A1827E8;
IL2CPP_EXTERN_C String_t* _stringLiteral88C0A409384124B23F80517191AAD25B944B47B9;
IL2CPP_EXTERN_C String_t* _stringLiteral8ADCA5E5D734CB4272E0674CADBC8A574F28212C;
IL2CPP_EXTERN_C String_t* _stringLiteral91EFB368757A86BC9A88975F715DAF8641FEA56D;
IL2CPP_EXTERN_C String_t* _stringLiteral9344B1909CA0FB9AF4A07D363E622D12B38FA32D;
IL2CPP_EXTERN_C String_t* _stringLiteral99BD7B441BEF843E8525E112D8268BEFC467D067;
IL2CPP_EXTERN_C String_t* _stringLiteralAA7A279255A8F579DC8A660F4DB73CED7446E934;
IL2CPP_EXTERN_C String_t* _stringLiteralAE4AFE18D2E7C6893B503506A2B19780C8F7E0C7;
IL2CPP_EXTERN_C String_t* _stringLiteralB25CF1C6B74339FBFCE846454A70688CE58C094C;
IL2CPP_EXTERN_C String_t* _stringLiteralB2BCF9F7BF608571B66B4874A29AA5A9A5815F73;
IL2CPP_EXTERN_C String_t* _stringLiteralB3052192431D4C5D44F2510B1AFD2632B627701B;
IL2CPP_EXTERN_C String_t* _stringLiteralBAABD0AA623F4F0C79BE8B249C24DC7764281437;
IL2CPP_EXTERN_C String_t* _stringLiteralBDDC80DB00CCB0ED669D1DC7E87019825A1F10BE;
IL2CPP_EXTERN_C String_t* _stringLiteralBDE0E17908169C9D71086DA3C3CE1626CDA9F5B8;
IL2CPP_EXTERN_C String_t* _stringLiteralC77FC609B79CF029CE1FAF8089DE5ABE43EBB168;
IL2CPP_EXTERN_C String_t* _stringLiteralC9FD3CD68D89191C7A02CDC20BD0BF0E52B2EEA3;
IL2CPP_EXTERN_C String_t* _stringLiteralCCF6F6A4EBB06FD4DD8996FD9E3735B3D9F97BEF;
IL2CPP_EXTERN_C String_t* _stringLiteralD4A3FE6E27265CF0EF686C9A884EA90AF8543380;
IL2CPP_EXTERN_C String_t* _stringLiteralD9955BD188DDF92C3BA106435ECA8C6ED74340BE;
IL2CPP_EXTERN_C String_t* _stringLiteralDE22FF12133F1B7AE98C2C860D576E4AB10754C4;
IL2CPP_EXTERN_C String_t* _stringLiteralE73E556B63D0D9AA9CA37DDA8CB42B123F187DEC;
IL2CPP_EXTERN_C String_t* _stringLiteralE742EA1C34A6165D061B136B6C1DC96EC4815E5A;
IL2CPP_EXTERN_C String_t* _stringLiteralE893292347C9DB12C81CB6C10FA271B45FA1DCD0;
IL2CPP_EXTERN_C String_t* _stringLiteralE91C8ADB3D2112AFBA5148B01F876064B6022CDC;
IL2CPP_EXTERN_C String_t* _stringLiteralE9F27BF4412297971361960DC3B04D57C4E019A6;
IL2CPP_EXTERN_C String_t* _stringLiteralF55841B26B9D578A89C6E499D4DE8BF3DFB4C8D9;
IL2CPP_EXTERN_C const RuntimeMethod* BaseEventSystem_HandleEvent_TisIMixedRealityDiagnosticsHandler_tC7F528443EE424F58E5FA17312F1719942247B17_mA91B2F011F62F383AEB4F3B7EFDD3E1FDD208BC4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m0EDA0079FA3617687C4A28623B79A37D618D9CFB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ExecuteEvents_ValidateEventData_TisDiagnosticsEventData_t567062EB8FA13779F27424928C704B00DC3CBCE7_m1C36E7FB349B6D7F065D22F383191195E497DDAB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisDiagnosticsSystemVoiceControls_t1997FD3471800D442B69DBD6D9D1FCF7CD521237_m10E071FD3F2B0C9801B53B6C8CF622BD61B1B02E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisMixedRealityToolkitVisualProfiler_t7EC6FCE39C4246F2C6D408EF28AE145F66EE0CB1_mC9D89951AF59C99E152A8DF0C3922D1481D6E145_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisTextMesh_t7E1981C7B03E50D5CA5A3AD5B0D9BB0AB6EE91F8_mFAD74D91BCACF9C3FAE6960EB58D5C346DDBD9C2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisCollider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_m4CB0FC4E59CE6C91F1106739EF364208A63E2597_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisMeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5_mDF6525BCE37B444313BE0AA2305BDF4EB8B92FE8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_m026EB44DB6238F13E2AFBECF1FBBE924CB1B040A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IMixedRealityEventSystem_RegisterHandler_TisIMixedRealitySpeechHandler_tF57481E35DD5D8C0EC2D82DA0E72CDE0058C12B5_m02DD2BB27CFB3B352F1D771B1EB3DDF1A7EB9547_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IMixedRealityEventSystem_UnregisterHandler_TisIMixedRealitySpeechHandler_tF57481E35DD5D8C0EC2D82DA0E72CDE0058C12B5_m00DB1183F954B0E4F7D51E2D771A39E88F2C2661_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MixedRealityToolkitVisualProfiler_AppCapture_CapturingChanged_m3302E90EA36DB4775DDE32B59F0E0469C7935539_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3C_cctorU3Eb__64_0_m18389BBDA7D7A0ADF7427094F002C24E981787AB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WindowsRuntimeMarshal_AddEventHandler_TisTypedEventHandler_2_t9B118434C59C99BDDD7ADFCC4DCAA528A1A4123F_m55FC3180743C4F0A5419F3AADE845DFA8E0447CE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WindowsRuntimeMarshal_RemoveEventHandler_TisTypedEventHandler_2_t9B118434C59C99BDDD7ADFCC4DCAA528A1A4123F_mD5720753EC4ED83CBC4D77D986DD31AC38FFEC19_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct IAppCapture_t8F6DC5C58F8A3768617B430364EF1DE652227BAD;

struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
struct FrameTimingU5BU5D_t32DDC21D000DE3127D5DF845AFEC7B02A0AE390E;
struct Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
struct Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD;
struct FrameRateColorU5BU5D_tE020E288145C85DE15325F4E79AAA8FD9905E91E;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tF19312C51F6B2656B6C520F135525A3FA7B7E9E3 
{
};
// Windows.Media.Capture.IAppCaptureStatics
struct NOVTABLE IAppCaptureStatics_t9BC8ABA580F16484E3D5F80A66152C5AC5696F10 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IAppCaptureStatics_GetForCurrentView_m68C26806F50AB61919F50B47E6A6B6C52F9F1713(IAppCapture_t8F6DC5C58F8A3768617B430364EF1DE652227BAD** comReturnValue) = 0;
};
// Windows.Media.Capture.IAppCaptureStatics2
struct NOVTABLE IAppCaptureStatics2_t06B63A1548281B88A98D808A5523AC634F99CA87 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IAppCaptureStatics2_U24__Stripped0_SetAllowedAsync_mACD53A434072BA32F7CFF07D1F2600002E4AD1B3() = 0;
};

// UnityEngine.EventSystems.AbstractEventData
struct AbstractEventData_tAE1A127ED657117548181D29FFE4B1B14D8E67F7  : public RuntimeObject
{
	// System.Boolean UnityEngine.EventSystems.AbstractEventData::m_Used
	bool ___m_Used_0;
};
struct Il2CppArrayBounds;

// System.Diagnostics.Stopwatch
struct Stopwatch_tA188A210449E22C07053A7D3014DD182C7369043  : public RuntimeObject
{
	// System.Int64 System.Diagnostics.Stopwatch::elapsed
	int64_t ___elapsed_2;
	// System.Int64 System.Diagnostics.Stopwatch::started
	int64_t ___started_3;
	// System.Boolean System.Diagnostics.Stopwatch::is_running
	bool ___is_running_4;
};

struct Stopwatch_tA188A210449E22C07053A7D3014DD182C7369043_StaticFields
{
	// System.Int64 System.Diagnostics.Stopwatch::Frequency
	int64_t ___Frequency_0;
	// System.Boolean System.Diagnostics.Stopwatch::IsHighResolution
	bool ___IsHighResolution_1;
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

// System.Text.StringBuilder
struct StringBuilder_t  : public RuntimeObject
{
	// System.Char[] System.Text.StringBuilder::m_ChunkChars
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___m_ChunkChars_0;
	// System.Text.StringBuilder System.Text.StringBuilder::m_ChunkPrevious
	StringBuilder_t* ___m_ChunkPrevious_1;
	// System.Int32 System.Text.StringBuilder::m_ChunkLength
	int32_t ___m_ChunkLength_2;
	// System.Int32 System.Text.StringBuilder::m_ChunkOffset
	int32_t ___m_ChunkOffset_3;
	// System.Int32 System.Text.StringBuilder::m_MaxCapacity
	int32_t ___m_MaxCapacity_4;
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

// Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem/<>c
struct U3CU3Ec_t6122B532248D673B289A7F458ACB1853ED34F671  : public RuntimeObject
{
};

struct U3CU3Ec_t6122B532248D673B289A7F458ACB1853ED34F671_StaticFields
{
	// Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem/<>c Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem/<>c::<>9
	U3CU3Ec_t6122B532248D673B289A7F458ACB1853ED34F671* ___U3CU3E9_0;
};

// System.Nullable`1<System.Boolean>
struct Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	bool ___value_1;
};

// Windows.Media.Capture.AppCapture
struct AppCapture_t053EACB2089D0B11989E1C6810A8B63855CCD518  : public Il2CppComObject
{
};

struct AppCapture_t053EACB2089D0B11989E1C6810A8B63855CCD518_StaticFields
{
	// Cached pointer to IActivationFactory
	Il2CppIActivationFactory* activationFactory;
	// Cached pointer to Windows.Media.Capture.IAppCaptureStatics
	IAppCaptureStatics_t9BC8ABA580F16484E3D5F80A66152C5AC5696F10* ____iappCaptureStatics_t9BC8ABA580F16484E3D5F80A66152C5AC5696F10;
	// Cached pointer to Windows.Media.Capture.IAppCaptureStatics2
	IAppCaptureStatics2_t06B63A1548281B88A98D808A5523AC634F99CA87* ____iappCaptureStatics2_t06B63A1548281B88A98D808A5523AC634F99CA87;
	inline Il2CppIActivationFactory* get_activationFactory()
	{
		Il2CppIActivationFactory* returnValue = activationFactory;
		if (returnValue == NULL)
		{
			il2cpp::utils::StringView<Il2CppNativeChar> className(IL2CPP_NATIVE_STRING("Windows.Media.Capture.AppCapture"));
			returnValue = il2cpp_codegen_windows_runtime_get_activation_factory(className);

			if (il2cpp_codegen_atomic_compare_exchange_pointer((void**)(&activationFactory), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = activationFactory;
			}
		}
		return returnValue;
	}

	inline IAppCaptureStatics_t9BC8ABA580F16484E3D5F80A66152C5AC5696F10* get_____iappCaptureStatics_t9BC8ABA580F16484E3D5F80A66152C5AC5696F10()
	{
		IAppCaptureStatics_t9BC8ABA580F16484E3D5F80A66152C5AC5696F10* returnValue = ____iappCaptureStatics_t9BC8ABA580F16484E3D5F80A66152C5AC5696F10;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = get_activationFactory()->QueryInterface(IAppCaptureStatics_t9BC8ABA580F16484E3D5F80A66152C5AC5696F10::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer((void**)(&____iappCaptureStatics_t9BC8ABA580F16484E3D5F80A66152C5AC5696F10), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____iappCaptureStatics_t9BC8ABA580F16484E3D5F80A66152C5AC5696F10;
			}
		}
		return returnValue;
	}

	inline IAppCaptureStatics2_t06B63A1548281B88A98D808A5523AC634F99CA87* get_____iappCaptureStatics2_t06B63A1548281B88A98D808A5523AC634F99CA87()
	{
		IAppCaptureStatics2_t06B63A1548281B88A98D808A5523AC634F99CA87* returnValue = ____iappCaptureStatics2_t06B63A1548281B88A98D808A5523AC634F99CA87;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = get_activationFactory()->QueryInterface(IAppCaptureStatics2_t06B63A1548281B88A98D808A5523AC634F99CA87::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer((void**)(&____iappCaptureStatics2_t06B63A1548281B88A98D808A5523AC634F99CA87), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____iappCaptureStatics2_t06B63A1548281B88A98D808A5523AC634F99CA87;
			}
		}
		return returnValue;
	}
};

// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F  : public AbstractEventData_tAE1A127ED657117548181D29FFE4B1B14D8E67F7
{
	// UnityEngine.EventSystems.EventSystem UnityEngine.EventSystems.BaseEventData::m_EventSystem
	EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* ___m_EventSystem_1;
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Char
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17 
{
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_0;
};

struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17_StaticFields
{
	// System.Byte[] System.Char::s_categoryForLatin1
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___s_categoryForLatin1_3;
};

// UnityEngine.Color
struct Color_tD001788D726C3A7F1379BEED0260B9591F440C1F 
{
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;
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

// System.Double
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	// System.Double System.Double::m_value
	double ___m_value_0;
};

// System.Runtime.InteropServices.WindowsRuntime.EventRegistrationToken
struct EventRegistrationToken_tFEB6E75BA7C6603DB3207E3ABA9156228EB87F1B 
{
	// System.UInt64 System.Runtime.InteropServices.WindowsRuntime.EventRegistrationToken::m_value
	uint64_t ___m_value_0;
};

// UnityEngine.FrameTiming
struct FrameTiming_tD5EE8535CF7DB0D391A5E9E0DB0CBEEA0D8600AD 
{
	// System.UInt64 UnityEngine.FrameTiming::cpuTimePresentCalled
	uint64_t ___cpuTimePresentCalled_0;
	// System.Double UnityEngine.FrameTiming::cpuFrameTime
	double ___cpuFrameTime_1;
	// System.UInt64 UnityEngine.FrameTiming::cpuTimeFrameComplete
	uint64_t ___cpuTimeFrameComplete_2;
	// System.Double UnityEngine.FrameTiming::gpuFrameTime
	double ___gpuFrameTime_3;
	// System.Single UnityEngine.FrameTiming::heightScale
	float ___heightScale_4;
	// System.Single UnityEngine.FrameTiming::widthScale
	float ___widthScale_5;
	// System.UInt32 UnityEngine.FrameTiming::syncInterval
	uint32_t ___syncInterval_6;
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.Int64
struct Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3 
{
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_0;
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

// UnityEngine.Mathf
struct Mathf_tE284D016E3B297B72311AAD9EB8F0E643F6A4682 
{
	union
	{
		struct
		{
		};
		uint8_t Mathf_tE284D016E3B297B72311AAD9EB8F0E643F6A4682__padding[1];
	};
};

struct Mathf_tE284D016E3B297B72311AAD9EB8F0E643F6A4682_StaticFields
{
	// System.Single UnityEngine.Mathf::Epsilon
	float ___Epsilon_0;
};

// UnityEngine.Matrix4x4
struct Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 
{
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
};

struct Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_StaticFields
{
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::zeroMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___zeroMatrix_16;
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::identityMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___identityMatrix_17;
};

// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction
struct MixedRealityInputAction_tD3B6E9CE7F20EFC9D066C519FAB848679FC62486 
{
	// System.UInt32 Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction::id
	uint32_t ___id_1;
	// System.String Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction::description
	String_t* ___description_2;
	// Microsoft.MixedReality.Toolkit.Utilities.AxisType Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction::axisConstraint
	int32_t ___axisConstraint_3;
};

struct MixedRealityInputAction_tD3B6E9CE7F20EFC9D066C519FAB848679FC62486_StaticFields
{
	// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction::<None>k__BackingField
	MixedRealityInputAction_tD3B6E9CE7F20EFC9D066C519FAB848679FC62486 ___U3CNoneU3Ek__BackingField_0;
};
// Native definition for P/Invoke marshalling of Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction
struct MixedRealityInputAction_tD3B6E9CE7F20EFC9D066C519FAB848679FC62486_marshaled_pinvoke
{
	uint32_t ___id_1;
	char* ___description_2;
	int32_t ___axisConstraint_3;
};
// Native definition for COM marshalling of Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction
struct MixedRealityInputAction_tD3B6E9CE7F20EFC9D066C519FAB848679FC62486_marshaled_com
{
	uint32_t ___id_1;
	Il2CppChar* ___description_2;
	int32_t ___axisConstraint_3;
};

// UnityEngine.Quaternion
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 
{
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;
};

struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields
{
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___identityQuaternion_4;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
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

// System.UInt16
struct UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455 
{
	// System.UInt16 System.UInt16::m_value
	uint16_t ___m_value_0;
};

// System.UInt32
struct UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B 
{
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;
};

// System.UInt64
struct UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF 
{
	// System.UInt64 System.UInt64::m_value
	uint64_t ___m_value_0;
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

// UnityEngine.Vector4
struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 
{
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;
};

struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_StaticFields
{
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___negativeInfinityVector_8;
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

// UnityEngine.EventSystems.EventSystem/UIToolkitOverrideConfig
struct UIToolkitOverrideConfig_t4E6B4528E38BCA7DA72C45424634806200A50182 
{
	// UnityEngine.EventSystems.EventSystem UnityEngine.EventSystems.EventSystem/UIToolkitOverrideConfig::activeEventSystem
	EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* ___activeEventSystem_0;
	// System.Boolean UnityEngine.EventSystems.EventSystem/UIToolkitOverrideConfig::sendEvents
	bool ___sendEvents_1;
	// System.Boolean UnityEngine.EventSystems.EventSystem/UIToolkitOverrideConfig::createPanelGameObjectsOnStart
	bool ___createPanelGameObjectsOnStart_2;
};
// Native definition for P/Invoke marshalling of UnityEngine.EventSystems.EventSystem/UIToolkitOverrideConfig
struct UIToolkitOverrideConfig_t4E6B4528E38BCA7DA72C45424634806200A50182_marshaled_pinvoke
{
	EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* ___activeEventSystem_0;
	int32_t ___sendEvents_1;
	int32_t ___createPanelGameObjectsOnStart_2;
};
// Native definition for COM marshalling of UnityEngine.EventSystems.EventSystem/UIToolkitOverrideConfig
struct UIToolkitOverrideConfig_t4E6B4528E38BCA7DA72C45424634806200A50182_marshaled_com
{
	EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* ___activeEventSystem_0;
	int32_t ___sendEvents_1;
	int32_t ___createPanelGameObjectsOnStart_2;
};

// Microsoft.MixedReality.Toolkit.Input.BaseInputEventData
struct BaseInputEventData_tE30935633FC3413040017EC7BB3F4D54958E5399  : public BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F
{
	// System.DateTime Microsoft.MixedReality.Toolkit.Input.BaseInputEventData::<EventTime>k__BackingField
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___U3CEventTimeU3Ek__BackingField_2;
	// Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource Microsoft.MixedReality.Toolkit.Input.BaseInputEventData::<InputSource>k__BackingField
	RuntimeObject* ___U3CInputSourceU3Ek__BackingField_3;
	// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction Microsoft.MixedReality.Toolkit.Input.BaseInputEventData::<MixedRealityInputAction>k__BackingField
	MixedRealityInputAction_tD3B6E9CE7F20EFC9D066C519FAB848679FC62486 ___U3CMixedRealityInputActionU3Ek__BackingField_4;
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

// UnityEngine.Bounds
struct Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 
{
	// UnityEngine.Vector3 UnityEngine.Bounds::m_Center
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Center_0;
	// UnityEngine.Vector3 UnityEngine.Bounds::m_Extents
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Extents_1;
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

// Microsoft.MixedReality.Toolkit.GenericBaseEventData
struct GenericBaseEventData_tA3C45766BDAC0A70B553C855E65F215F2E881687  : public BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F
{
	// Microsoft.MixedReality.Toolkit.IMixedRealityEventSource Microsoft.MixedReality.Toolkit.GenericBaseEventData::<EventSource>k__BackingField
	RuntimeObject* ___U3CEventSourceU3Ek__BackingField_2;
	// System.DateTime Microsoft.MixedReality.Toolkit.GenericBaseEventData::<EventTime>k__BackingField
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___U3CEventTimeU3Ek__BackingField_3;
	// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.GenericBaseEventData::<selectedObject>k__BackingField
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___U3CselectedObjectU3Ek__BackingField_4;
};

// UnityEngine.MaterialPropertyBlock
struct MaterialPropertyBlock_t2308669579033A857EFE6E4831909F638B27411D  : public RuntimeObject
{
	// System.IntPtr UnityEngine.MaterialPropertyBlock::m_Ptr
	intptr_t ___m_Ptr_0;
};

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;
};

struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// Unity.Profiling.ProfilerMarker
struct ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD 
{
	// System.IntPtr Unity.Profiling.ProfilerMarker::m_Ptr
	intptr_t ___m_Ptr_0;
};

// Microsoft.MixedReality.Toolkit.Input.SpeechCommands
struct SpeechCommands_t871604E2D92EE8168CBFA26F430CA2584DCF02CC 
{
	// System.String Microsoft.MixedReality.Toolkit.Input.SpeechCommands::localizationKey
	String_t* ___localizationKey_0;
	// System.String Microsoft.MixedReality.Toolkit.Input.SpeechCommands::localizedKeyword
	String_t* ___localizedKeyword_1;
	// System.String Microsoft.MixedReality.Toolkit.Input.SpeechCommands::keyword
	String_t* ___keyword_2;
	// UnityEngine.KeyCode Microsoft.MixedReality.Toolkit.Input.SpeechCommands::keyCode
	int32_t ___keyCode_3;
	// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction Microsoft.MixedReality.Toolkit.Input.SpeechCommands::action
	MixedRealityInputAction_tD3B6E9CE7F20EFC9D066C519FAB848679FC62486 ___action_4;
};
// Native definition for P/Invoke marshalling of Microsoft.MixedReality.Toolkit.Input.SpeechCommands
struct SpeechCommands_t871604E2D92EE8168CBFA26F430CA2584DCF02CC_marshaled_pinvoke
{
	char* ___localizationKey_0;
	char* ___localizedKeyword_1;
	char* ___keyword_2;
	int32_t ___keyCode_3;
	MixedRealityInputAction_tD3B6E9CE7F20EFC9D066C519FAB848679FC62486_marshaled_pinvoke ___action_4;
};
// Native definition for COM marshalling of Microsoft.MixedReality.Toolkit.Input.SpeechCommands
struct SpeechCommands_t871604E2D92EE8168CBFA26F430CA2584DCF02CC_marshaled_com
{
	Il2CppChar* ___localizationKey_0;
	Il2CppChar* ___localizedKeyword_1;
	Il2CppChar* ___keyword_2;
	int32_t ___keyCode_3;
	MixedRealityInputAction_tD3B6E9CE7F20EFC9D066C519FAB848679FC62486_marshaled_com ___action_4;
};

// Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler/FrameRateColor
struct FrameRateColor_tB9F29A6B870B2C8FC9647CBE7572FC0FEFAE6389 
{
	// System.Single Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler/FrameRateColor::percentageOfTarget
	float ___percentageOfTarget_0;
	// UnityEngine.Color Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler/FrameRateColor::color
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___color_1;
};

// Unity.Profiling.ProfilerMarker/AutoScope
struct AutoScope_tFB983697E28885CB10FFDB92D7EFD0615AEF3139 
{
	// System.IntPtr Unity.Profiling.ProfilerMarker/AutoScope::m_Ptr
	intptr_t ___m_Ptr_0;
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

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// Microsoft.MixedReality.Toolkit.Diagnostics.DiagnosticsEventData
struct DiagnosticsEventData_t567062EB8FA13779F27424928C704B00DC3CBCE7  : public GenericBaseEventData_tA3C45766BDAC0A70B553C855E65F215F2E881687
{
};

// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
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

// UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};
// Native definition for P/Invoke marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_marshaled_pinvoke : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_marshaled_com : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
};

// UnityEngine.Shader
struct Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// Microsoft.MixedReality.Toolkit.Input.SpeechEventData
struct SpeechEventData_t4424832821FEC4163B9CFCD3A9F457DF930A95BD  : public BaseInputEventData_tE30935633FC3413040017EC7BB3F4D54958E5399
{
	// System.TimeSpan Microsoft.MixedReality.Toolkit.Input.SpeechEventData::<PhraseDuration>k__BackingField
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___U3CPhraseDurationU3Ek__BackingField_5;
	// System.DateTime Microsoft.MixedReality.Toolkit.Input.SpeechEventData::<PhraseStartTime>k__BackingField
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___U3CPhraseStartTimeU3Ek__BackingField_6;
	// Microsoft.MixedReality.Toolkit.Input.SpeechCommands Microsoft.MixedReality.Toolkit.Input.SpeechEventData::<Command>k__BackingField
	SpeechCommands_t871604E2D92EE8168CBFA26F430CA2584DCF02CC ___U3CCommandU3Ek__BackingField_7;
	// Microsoft.MixedReality.Toolkit.Utilities.RecognitionConfidenceLevel Microsoft.MixedReality.Toolkit.Input.SpeechEventData::<Confidence>k__BackingField
	int32_t ___U3CConfidenceU3Ek__BackingField_8;
};

// System.Action`1<System.Runtime.InteropServices.WindowsRuntime.EventRegistrationToken>
struct Action_1_t2F6697C5DA7073FCAE212D3900E184AF5BA9E722  : public MulticastDelegate_t
{
};

// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Diagnostics.IMixedRealityDiagnosticsHandler>
struct EventFunction_1_t503E94AA3FF5ABC81854E3CA5ACC551D4F43C4FE  : public MulticastDelegate_t
{
};

// System.Func`2<Windows.Foundation.TypedEventHandler`2<Windows.Media.Capture.AppCapture,System.Object>,System.Runtime.InteropServices.WindowsRuntime.EventRegistrationToken>
struct Func_2_t75F41BC3985F61E6BFABDD39D82A26CDD4031436  : public MulticastDelegate_t
{
};

// Windows.Foundation.TypedEventHandler`2<Windows.Media.Capture.AppCapture,System.Object>
struct TypedEventHandler_2_t9B118434C59C99BDDD7ADFCC4DCAA528A1A4123F  : public MulticastDelegate_t
{
};
// COM Callable Wrapper interface definition for Windows.Foundation.TypedEventHandler`2<Windows.Media.Capture.AppCapture,System.Object>
struct ITypedEventHandler_2_t9B118434C59C99BDDD7ADFCC4DCAA528A1A4123F_ComCallableWrapper : Il2CppIUnknown
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL Invoke(IAppCapture_t8F6DC5C58F8A3768617B430364EF1DE652227BAD* ___sender0, Il2CppIInspectable* ___args1) = 0;
};


// Microsoft.MixedReality.Toolkit.BaseCoreSystem
struct BaseCoreSystem_t9D02F9BBC05DAD6F987F647B666B37A062ACFAA6  : public BaseEventSystem_tB9BD9711D545EEEF00D3162ED9A13EBDE4B1DEA1
{
	// Microsoft.MixedReality.Toolkit.IMixedRealityServiceRegistrar Microsoft.MixedReality.Toolkit.BaseCoreSystem::<Registrar>k__BackingField
	RuntimeObject* ___U3CRegistrarU3Ek__BackingField_20;
};

// Microsoft.MixedReality.Toolkit.BaseMixedRealityProfile
struct BaseMixedRealityProfile_tB4FDEF58FFD17796C0DB7241630B71CDF38FA1D4  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
	// System.Boolean Microsoft.MixedReality.Toolkit.BaseMixedRealityProfile::isCustomProfile
	bool ___isCustomProfile_4;
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Collider
struct Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.MeshFilter
struct MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Renderer
struct Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.TextMesh
struct TextMesh_t7E1981C7B03E50D5CA5A3AD5B0D9BB0AB6EE91F8  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_StaticFields
{
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreCull
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPreCull_4;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreRender
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPreRender_5;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPostRender
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPostRender_6;
};

// UnityEngine.MeshRenderer
struct MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE  : public Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF
{
};

// Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsProfile
struct MixedRealityDiagnosticsProfile_tF0C607D340096A8CF0E72C813EE76A9CBE288EFC  : public BaseMixedRealityProfile_tB4FDEF58FFD17796C0DB7241630B71CDF38FA1D4
{
	// System.Boolean Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsProfile::showDiagnostics
	bool ___showDiagnostics_5;
	// System.Boolean Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsProfile::showProfiler
	bool ___showProfiler_6;
	// System.Boolean Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsProfile::showFrameInfo
	bool ___showFrameInfo_7;
	// System.Boolean Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsProfile::showMemoryStats
	bool ___showMemoryStats_8;
	// System.Single Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsProfile::frameSampleRate
	float ___frameSampleRate_9;
	// UnityEngine.TextAnchor Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsProfile::windowAnchor
	int32_t ___windowAnchor_10;
	// UnityEngine.Vector2 Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsProfile::windowOffset
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___windowOffset_11;
	// System.Single Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsProfile::windowScale
	float ___windowScale_12;
	// System.Single Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsProfile::windowFollowSpeed
	float ___windowFollowSpeed_13;
	// UnityEngine.Material Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsProfile::defaultInstancedMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___defaultInstancedMaterial_14;
	// System.Boolean Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsProfile::showProfilerDuringMRC
	bool ___showProfilerDuringMRC_15;
};

// Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem
struct MixedRealityDiagnosticsSystem_t04B619C4E0301FBBC152B0BFA6CE2DB37DB20D3E  : public BaseCoreSystem_t9D02F9BBC05DAD6F987F647B666B37A062ACFAA6
{
	// System.String Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem::<Name>k__BackingField
	String_t* ___U3CNameU3Ek__BackingField_21;
	// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem::diagnosticVisualizationParent
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___diagnosticVisualizationParent_22;
	// Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem::visualProfiler
	MixedRealityToolkitVisualProfiler_t7EC6FCE39C4246F2C6D408EF28AE145F66EE0CB1* ___visualProfiler_23;
	// Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsProfile Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem::diagnosticsSystemProfile
	MixedRealityDiagnosticsProfile_tF0C607D340096A8CF0E72C813EE76A9CBE288EFC* ___diagnosticsSystemProfile_24;
	// System.Boolean Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem::showDiagnostics
	bool ___showDiagnostics_25;
	// System.Boolean Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem::showProfiler
	bool ___showProfiler_26;
	// System.Boolean Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem::showFrameInfo
	bool ___showFrameInfo_27;
	// System.Boolean Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem::showMemoryStats
	bool ___showMemoryStats_28;
	// System.Single Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem::frameSampleRate
	float ___frameSampleRate_29;
	// Microsoft.MixedReality.Toolkit.Diagnostics.DiagnosticsEventData Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem::eventData
	DiagnosticsEventData_t567062EB8FA13779F27424928C704B00DC3CBCE7* ___eventData_30;
	// UnityEngine.TextAnchor Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem::windowAnchor
	int32_t ___windowAnchor_33;
	// UnityEngine.Vector2 Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem::windowOffset
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___windowOffset_34;
	// System.Single Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem::windowScale
	float ___windowScale_35;
	// System.Single Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem::windowFollowSpeed
	float ___windowFollowSpeed_36;
	// System.Boolean Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem::showProfilerDuringMRC
	bool ___showProfilerDuringMRC_37;
};

struct MixedRealityDiagnosticsSystem_t04B619C4E0301FBBC152B0BFA6CE2DB37DB20D3E_StaticFields
{
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem::OnDiagnosticsChangedPerfMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___OnDiagnosticsChangedPerfMarker_31;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Diagnostics.IMixedRealityDiagnosticsHandler> Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem::OnDiagnosticsChanged
	EventFunction_1_t503E94AA3FF5ABC81854E3CA5ACC551D4F43C4FE* ___OnDiagnosticsChanged_32;
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// Microsoft.MixedReality.Toolkit.Diagnostics.DiagnosticsSystemVoiceControls
struct DiagnosticsSystemVoiceControls_t1997FD3471800D442B69DBD6D9D1FCF7CD521237  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Boolean Microsoft.MixedReality.Toolkit.Diagnostics.DiagnosticsSystemVoiceControls::registeredForInput
	bool ___registeredForInput_4;
};

// Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler
struct MixedRealityToolkitVisualProfiler_t7EC6FCE39C4246F2C6D408EF28AE145F66EE0CB1  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Transform Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::<WindowParent>k__BackingField
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___U3CWindowParentU3Ek__BackingField_17;
	// System.Boolean Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::isVisible
	bool ___isVisible_18;
	// System.Boolean Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::frameInfoVisible
	bool ___frameInfoVisible_19;
	// System.Boolean Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::memoryStatsVisible
	bool ___memoryStatsVisible_20;
	// System.Single Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::frameSampleRate
	float ___frameSampleRate_21;
	// UnityEngine.TextAnchor Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::windowAnchor
	int32_t ___windowAnchor_22;
	// UnityEngine.Vector2 Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::windowOffset
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___windowOffset_23;
	// System.Single Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::windowScale
	float ___windowScale_24;
	// System.Single Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::windowFollowSpeed
	float ___windowFollowSpeed_25;
	// System.Boolean Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::showProfilerDuringMRC
	bool ___showProfilerDuringMRC_26;
	// System.Int32 Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::displayedDecimalDigits
	int32_t ___displayedDecimalDigits_27;
	// Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler/FrameRateColor[] Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::frameRateColors
	FrameRateColorU5BU5D_tE020E288145C85DE15325F4E79AAA8FD9905E91E* ___frameRateColors_28;
	// UnityEngine.Color Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::baseColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___baseColor_29;
	// UnityEngine.Color Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::memoryUsedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___memoryUsedColor_30;
	// UnityEngine.Color Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::memoryPeakColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___memoryPeakColor_31;
	// UnityEngine.Color Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::memoryLimitColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___memoryLimitColor_32;
	// UnityEngine.Transform Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::window
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___window_33;
	// UnityEngine.Transform Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::background
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___background_34;
	// UnityEngine.TextMesh Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::cpuFrameRateText
	TextMesh_t7E1981C7B03E50D5CA5A3AD5B0D9BB0AB6EE91F8* ___cpuFrameRateText_35;
	// UnityEngine.TextMesh Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::gpuFrameRateText
	TextMesh_t7E1981C7B03E50D5CA5A3AD5B0D9BB0AB6EE91F8* ___gpuFrameRateText_36;
	// UnityEngine.Transform Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::memoryStats
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___memoryStats_37;
	// UnityEngine.TextMesh Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::usedMemoryText
	TextMesh_t7E1981C7B03E50D5CA5A3AD5B0D9BB0AB6EE91F8* ___usedMemoryText_38;
	// UnityEngine.TextMesh Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::peakMemoryText
	TextMesh_t7E1981C7B03E50D5CA5A3AD5B0D9BB0AB6EE91F8* ___peakMemoryText_39;
	// UnityEngine.TextMesh Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::limitMemoryText
	TextMesh_t7E1981C7B03E50D5CA5A3AD5B0D9BB0AB6EE91F8* ___limitMemoryText_40;
	// UnityEngine.TextMesh Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::voiceCommandText
	TextMesh_t7E1981C7B03E50D5CA5A3AD5B0D9BB0AB6EE91F8* ___voiceCommandText_41;
	// UnityEngine.TextMesh Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::mrtkText
	TextMesh_t7E1981C7B03E50D5CA5A3AD5B0D9BB0AB6EE91F8* ___mrtkText_42;
	// UnityEngine.Transform Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::usedAnchor
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___usedAnchor_43;
	// UnityEngine.Transform Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::peakAnchor
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___peakAnchor_44;
	// UnityEngine.Quaternion Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::windowHorizontalRotation
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___windowHorizontalRotation_45;
	// UnityEngine.Quaternion Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::windowHorizontalRotationInverse
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___windowHorizontalRotationInverse_46;
	// UnityEngine.Quaternion Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::windowVerticalRotation
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___windowVerticalRotation_47;
	// UnityEngine.Quaternion Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::windowVerticalRotationInverse
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___windowVerticalRotationInverse_48;
	// UnityEngine.Matrix4x4[] Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::frameInfoMatrices
	Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D* ___frameInfoMatrices_49;
	// UnityEngine.Vector4[] Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::frameInfoColors
	Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* ___frameInfoColors_50;
	// UnityEngine.MaterialPropertyBlock Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::frameInfoPropertyBlock
	MaterialPropertyBlock_t2308669579033A857EFE6E4831909F638B27411D* ___frameInfoPropertyBlock_51;
	// System.Int32 Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::colorID
	int32_t ___colorID_52;
	// System.Int32 Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::parentMatrixID
	int32_t ___parentMatrixID_53;
	// System.Int32 Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::frameCount
	int32_t ___frameCount_54;
	// System.Diagnostics.Stopwatch Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::stopwatch
	Stopwatch_tA188A210449E22C07053A7D3014DD182C7369043* ___stopwatch_55;
	// UnityEngine.FrameTiming[] Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::frameTimings
	FrameTimingU5BU5D_t32DDC21D000DE3127D5DF845AFEC7B02A0AE390E* ___frameTimings_56;
	// System.String[] Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::cpuFrameRateStrings
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___cpuFrameRateStrings_57;
	// System.String[] Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::gpuFrameRateStrings
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___gpuFrameRateStrings_58;
	// System.Char[] Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::stringBuffer
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___stringBuffer_59;
	// System.UInt64 Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::memoryUsage
	uint64_t ___memoryUsage_60;
	// System.UInt64 Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::peakMemoryUsage
	uint64_t ___peakMemoryUsage_61;
	// System.UInt64 Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::limitMemoryUsage
	uint64_t ___limitMemoryUsage_62;
	// UnityEngine.Material Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::defaultMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___defaultMaterial_63;
	// UnityEngine.Material Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::defaultInstancedMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___defaultInstancedMaterial_64;
	// UnityEngine.Material Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::backgroundMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___backgroundMaterial_65;
	// UnityEngine.Material Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::foregroundMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___foregroundMaterial_66;
	// UnityEngine.Material Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::textMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___textMaterial_67;
	// UnityEngine.Mesh Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::quadMesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___quadMesh_68;
	// System.Boolean Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::appCaptureIsCapturingVideo
	bool ___appCaptureIsCapturingVideo_69;
	// Windows.Media.Capture.AppCapture Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::appCapture
	AppCapture_t053EACB2089D0B11989E1C6810A8B63855CCD518* ___appCapture_70;
	// System.Single Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::previousFieldOfView
	float ___previousFieldOfView_72;
};

struct MixedRealityToolkitVisualProfiler_t7EC6FCE39C4246F2C6D408EF28AE145F66EE0CB1_StaticFields
{
	// System.Int32 Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::maxStringLength
	int32_t ___maxStringLength_4;
	// System.Int32 Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::maxTargetFrameRate
	int32_t ___maxTargetFrameRate_5;
	// System.Int32 Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::maxFrameTimings
	int32_t ___maxFrameTimings_6;
	// System.Int32 Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::frameRange
	int32_t ___frameRange_7;
	// UnityEngine.Vector2 Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::defaultWindowRotation
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___defaultWindowRotation_8;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::defaultWindowScale
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___defaultWindowScale_9;
	// UnityEngine.Vector3[] Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::backgroundScales
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___backgroundScales_10;
	// UnityEngine.Vector3[] Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::backgroundOffsets
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___backgroundOffsets_11;
	// System.String Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::usedMemoryString
	String_t* ___usedMemoryString_12;
	// System.String Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::peakMemoryString
	String_t* ___peakMemoryString_13;
	// System.String Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::limitMemoryString
	String_t* ___limitMemoryString_14;
	// System.String Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::voiceCommandString
	String_t* ___voiceCommandString_15;
	// System.String Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::visualProfilerTitleString
	String_t* ___visualProfilerTitleString_16;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::LateUpdatePerfMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___LateUpdatePerfMarker_71;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::CalculateWindowPositionPerfMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___CalculateWindowPositionPerfMarker_73;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::CalculateWindowRotationPerfMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___CalculateWindowRotationPerfMarker_74;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::CalculateFrameColorPerfMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___CalculateFrameColorPerfMarker_75;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::CalculateBackgroundSizePerfMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___CalculateBackgroundSizePerfMarker_76;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::MemoryUsageToStringPerfMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___MemoryUsageToStringPerfMarker_77;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::MemoryItoAPerfMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___MemoryItoAPerfMarker_78;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::AverageFrameTimingPerfMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___AverageFrameTimingPerfMarker_79;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::WillDisplayedMemoryUsageDifferPerfMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___WillDisplayedMemoryUsageDifferPerfMarker_80;
};

// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// Microsoft.MixedReality.Toolkit.Diagnostics.VisualProfilerControl
struct VisualProfilerControl_tAB0446AFDBA39EF58FEC3CAF667A8B3AD706357C  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// UnityEngine.EventSystems.EventSystem
struct EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule> UnityEngine.EventSystems.EventSystem::m_SystemInputModules
	List_1_tA5BDE435C735A082941CD33D212F97F4AE9FA55F* ___m_SystemInputModules_4;
	// UnityEngine.EventSystems.BaseInputModule UnityEngine.EventSystems.EventSystem::m_CurrentInputModule
	BaseInputModule_tF3B7C22AF1419B2AC9ECE6589357DC1B88ED96B1* ___m_CurrentInputModule_5;
	// UnityEngine.GameObject UnityEngine.EventSystems.EventSystem::m_FirstSelected
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_FirstSelected_7;
	// System.Boolean UnityEngine.EventSystems.EventSystem::m_sendNavigationEvents
	bool ___m_sendNavigationEvents_8;
	// System.Int32 UnityEngine.EventSystems.EventSystem::m_DragThreshold
	int32_t ___m_DragThreshold_9;
	// UnityEngine.GameObject UnityEngine.EventSystems.EventSystem::m_CurrentSelected
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_CurrentSelected_10;
	// System.Boolean UnityEngine.EventSystems.EventSystem::m_HasFocus
	bool ___m_HasFocus_11;
	// System.Boolean UnityEngine.EventSystems.EventSystem::m_SelectionGuard
	bool ___m_SelectionGuard_12;
	// UnityEngine.EventSystems.BaseEventData UnityEngine.EventSystems.EventSystem::m_DummyData
	BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F* ___m_DummyData_13;
};

struct EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707_StaticFields
{
	// System.Collections.Generic.List`1<UnityEngine.EventSystems.EventSystem> UnityEngine.EventSystems.EventSystem::m_EventSystems
	List_1_tF2FE88545EFEC788CAAE6C74EC2F78E937FCCAC3* ___m_EventSystems_6;
	// System.Comparison`1<UnityEngine.EventSystems.RaycastResult> UnityEngine.EventSystems.EventSystem::s_RaycastComparer
	Comparison_1_t9FCAC8C8CE160A96C5AAD2DE1D353DCE8A2FEEFC* ___s_RaycastComparer_14;
	// UnityEngine.EventSystems.EventSystem/UIToolkitOverrideConfig UnityEngine.EventSystems.EventSystem::s_UIToolkitOverride
	UIToolkitOverrideConfig_t4E6B4528E38BCA7DA72C45424634806200A50182 ___s_UIToolkitOverride_15;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// UnityEngine.FrameTiming[]
struct FrameTimingU5BU5D_t32DDC21D000DE3127D5DF845AFEC7B02A0AE390E  : public RuntimeArray
{
	ALIGN_FIELD (8) FrameTiming_tD5EE8535CF7DB0D391A5E9E0DB0CBEEA0D8600AD m_Items[1];

	inline FrameTiming_tD5EE8535CF7DB0D391A5E9E0DB0CBEEA0D8600AD GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline FrameTiming_tD5EE8535CF7DB0D391A5E9E0DB0CBEEA0D8600AD* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, FrameTiming_tD5EE8535CF7DB0D391A5E9E0DB0CBEEA0D8600AD value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline FrameTiming_tD5EE8535CF7DB0D391A5E9E0DB0CBEEA0D8600AD GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline FrameTiming_tD5EE8535CF7DB0D391A5E9E0DB0CBEEA0D8600AD* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, FrameTiming_tD5EE8535CF7DB0D391A5E9E0DB0CBEEA0D8600AD value)
	{
		m_Items[index] = value;
	}
};
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248  : public RuntimeArray
{
	ALIGN_FIELD (8) String_t* m_Items[1];

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
// UnityEngine.Vector4[]
struct Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD  : public RuntimeArray
{
	ALIGN_FIELD (8) Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 m_Items[1];

	inline Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.Matrix4x4[]
struct Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D  : public RuntimeArray
{
	ALIGN_FIELD (8) Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 m_Items[1];

	inline Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 value)
	{
		m_Items[index] = value;
	}
};
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB  : public RuntimeArray
{
	ALIGN_FIELD (8) Il2CppChar m_Items[1];

	inline Il2CppChar GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Il2CppChar value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Il2CppChar GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Il2CppChar value)
	{
		m_Items[index] = value;
	}
};
// Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler/FrameRateColor[]
struct FrameRateColorU5BU5D_tE020E288145C85DE15325F4E79AAA8FD9905E91E  : public RuntimeArray
{
	ALIGN_FIELD (8) FrameRateColor_tB9F29A6B870B2C8FC9647CBE7572FC0FEFAE6389 m_Items[1];

	inline FrameRateColor_tB9F29A6B870B2C8FC9647CBE7572FC0FEFAE6389 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline FrameRateColor_tB9F29A6B870B2C8FC9647CBE7572FC0FEFAE6389* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, FrameRateColor_tB9F29A6B870B2C8FC9647CBE7572FC0FEFAE6389 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline FrameRateColor_tB9F29A6B870B2C8FC9647CBE7572FC0FEFAE6389 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline FrameRateColor_tB9F29A6B870B2C8FC9647CBE7572FC0FEFAE6389* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, FrameRateColor_tB9F29A6B870B2C8FC9647CBE7572FC0FEFAE6389 value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C  : public RuntimeArray
{
	ALIGN_FIELD (8) Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 m_Items[1];

	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 value)
	{
		m_Items[index] = value;
	}
};


// T UnityEngine.GameObject::AddComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventFunction_1__ctor_m8527E59AE02A1117319F24ADABBF52E2FE8EA368_gshared (EventFunction_1_t297B5C47242D1B98BEC955E2804FA142B43E7927* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// T UnityEngine.EventSystems.ExecuteEvents::ValidateEventData<System.Object>(UnityEngine.EventSystems.BaseEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ExecuteEvents_ValidateEventData_TisRuntimeObject_m4EA334E32315EE93D32E13F6122F5B8382D247DD_gshared (BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F* ___data0, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Void System.Func`2<System.Object,System.Runtime.InteropServices.WindowsRuntime.EventRegistrationToken>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_m90B7EA3C338F6A61C7F47898E913088053DA56DF_gshared (Func_2_t1C28D2BFD837EC81FF3046F74030179155D5F3BE* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void System.Action`1<System.Runtime.InteropServices.WindowsRuntime.EventRegistrationToken>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_mE59785557489C8127A4B1AF2A7281F701BA8152B_gshared (Action_1_t2F6697C5DA7073FCAE212D3900E184AF5BA9E722* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void Windows.Foundation.TypedEventHandler`2<System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypedEventHandler_2__ctor_m8EC7F2496EAAC789C299600170EBE8F84E96DC7F_gshared (TypedEventHandler_2_t6B82D27B2ED38E7ADDA1ADD5B208073B69D39B83* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeMarshal::AddEventHandler<System.Object>(System.Func`2<T,System.Runtime.InteropServices.WindowsRuntime.EventRegistrationToken>,System.Action`1<System.Runtime.InteropServices.WindowsRuntime.EventRegistrationToken>,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsRuntimeMarshal_AddEventHandler_TisRuntimeObject_mBB91B5D4609386C1BF68DC9942AC20F8C1C4398F_gshared (Func_2_t1C28D2BFD837EC81FF3046F74030179155D5F3BE* ___addMethod0, Action_1_t2F6697C5DA7073FCAE212D3900E184AF5BA9E722* ___removeMethod1, RuntimeObject* ___handler2, const RuntimeMethod* method) ;
// System.Void System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeMarshal::RemoveEventHandler<System.Object>(System.Action`1<System.Runtime.InteropServices.WindowsRuntime.EventRegistrationToken>,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsRuntimeMarshal_RemoveEventHandler_TisRuntimeObject_mF5ED2E12D7CC90EFB9203D539DDEF34BA6AAC25F_gshared (Action_1_t2F6697C5DA7073FCAE212D3900E184AF5BA9E722* ___removeMethod0, RuntimeObject* ___handler1, const RuntimeMethod* method) ;

// Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem Microsoft.MixedReality.Toolkit.CoreServices::get_InputSystem()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CoreServices_get_InputSystem_m47147418643299159BF4DF408F768844FDC33943 (const RuntimeMethod* method) ;
// Microsoft.MixedReality.Toolkit.Input.SpeechCommands Microsoft.MixedReality.Toolkit.Input.SpeechEventData::get_Command()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR SpeechCommands_t871604E2D92EE8168CBFA26F430CA2584DCF02CC SpeechEventData_get_Command_m55D611C557104EC236CE8D929CFBFA2D37216636_inline (SpeechEventData_t4424832821FEC4163B9CFCD3A9F457DF930A95BD* __this, const RuntimeMethod* method) ;
// System.String Microsoft.MixedReality.Toolkit.Input.SpeechCommands::get_Keyword()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SpeechCommands_get_Keyword_m381228670D38A858F9AE14CBA8D101E7085BA94C (SpeechCommands_t871604E2D92EE8168CBFA26F430CA2584DCF02CC* __this, const RuntimeMethod* method) ;
// System.String System.String::ToLower()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_ToLower_m6191ABA3DC514ED47C10BDA23FD0DDCEAE7ACFBD (String_t* __this, const RuntimeMethod* method) ;
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0 (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.Diagnostics.DiagnosticsSystemVoiceControls::ToggleDiagnostics()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DiagnosticsSystemVoiceControls_ToggleDiagnostics_m1176C0E44179ED1882CE82C73966303927735984 (DiagnosticsSystemVoiceControls_t1997FD3471800D442B69DBD6D9D1FCF7CD521237* __this, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.Diagnostics.DiagnosticsSystemVoiceControls::ToggleProfiler()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DiagnosticsSystemVoiceControls_ToggleProfiler_mD55AECAA10642A8A360D94ACD21C7FFA06790C20 (DiagnosticsSystemVoiceControls_t1997FD3471800D442B69DBD6D9D1FCF7CD521237* __this, const RuntimeMethod* method) ;
// Microsoft.MixedReality.Toolkit.Diagnostics.IMixedRealityDiagnosticsSystem Microsoft.MixedReality.Toolkit.CoreServices::get_DiagnosticsSystem()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CoreServices_get_DiagnosticsSystem_mF195F9C99857B54C8593E143CA604D8D0A4E936C (const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem::.ctor(Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsProfile)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityDiagnosticsSystem__ctor_mE176B133872DFC4B5C6DF36E77C56D85A80663F8 (MixedRealityDiagnosticsSystem_t04B619C4E0301FBBC152B0BFA6CE2DB37DB20D3E* __this, MixedRealityDiagnosticsProfile_tF0C607D340096A8CF0E72C813EE76A9CBE288EFC* ___profile0, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.BaseCoreSystem::set_Registrar(Microsoft.MixedReality.Toolkit.IMixedRealityServiceRegistrar)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BaseCoreSystem_set_Registrar_m5E2AD3BA5AD91A736E0A23357E3720E5D94665A8_inline (BaseCoreSystem_t9D02F9BBC05DAD6F987F647B666B37A062ACFAA6* __this, RuntimeObject* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___x0, float ___y1, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.BaseCoreSystem::.ctor(Microsoft.MixedReality.Toolkit.BaseMixedRealityProfile)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseCoreSystem__ctor_mEDDF3036583E0F0C9557443661AAA0D8D316B0CE (BaseCoreSystem_t9D02F9BBC05DAD6F987F647B666B37A062ACFAA6* __this, BaseMixedRealityProfile_tB4FDEF58FFD17796C0DB7241630B71CDF38FA1D4* ___profile0, const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject__ctor_m37D512B05D292F954792225E6C6EEE95293A9B88 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, String_t* ___name0, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::AddComponent<Microsoft.MixedReality.Toolkit.Diagnostics.DiagnosticsSystemVoiceControls>()
inline DiagnosticsSystemVoiceControls_t1997FD3471800D442B69DBD6D9D1FCF7CD521237* GameObject_AddComponent_TisDiagnosticsSystemVoiceControls_t1997FD3471800D442B69DBD6D9D1FCF7CD521237_m10E071FD3F2B0C9801B53B6C8CF622BD61B1B02E (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  DiagnosticsSystemVoiceControls_t1997FD3471800D442B69DBD6D9D1FCF7CD521237* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared)(__this, method);
}
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.MixedRealityPlayspace::AddChild(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityPlayspace_AddChild_m9CAFA8F0BE6D0765168CD219A69C945A13AB2D09 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___transform0, const RuntimeMethod* method) ;
// System.Boolean Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem::get_ShowDiagnostics()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool MixedRealityDiagnosticsSystem_get_ShowDiagnostics_mB3491B44811943E1CC389B41FB9F07A8CA2441C8_inline (MixedRealityDiagnosticsSystem_t04B619C4E0301FBBC152B0BFA6CE2DB37DB20D3E* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, bool ___value0, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::AddComponent<Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler>()
inline MixedRealityToolkitVisualProfiler_t7EC6FCE39C4246F2C6D408EF28AE145F66EE0CB1* GameObject_AddComponent_TisMixedRealityToolkitVisualProfiler_t7EC6FCE39C4246F2C6D408EF28AE145F66EE0CB1_mC9D89951AF59C99E152A8DF0C3922D1481D6E145 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  MixedRealityToolkitVisualProfiler_t7EC6FCE39C4246F2C6D408EF28AE145F66EE0CB1* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared)(__this, method);
}
// System.Void Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::set_WindowParent(UnityEngine.Transform)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MixedRealityToolkitVisualProfiler_set_WindowParent_m8C2A383EAE0DAAA01C674D06D274156671480169_inline (MixedRealityToolkitVisualProfiler_t7EC6FCE39C4246F2C6D408EF28AE145F66EE0CB1* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___value0, const RuntimeMethod* method) ;
// System.Boolean Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem::get_ShowProfiler()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool MixedRealityDiagnosticsSystem_get_ShowProfiler_m1C883793022C60F7F6782263A0C0FBF28096B4D6_inline (MixedRealityDiagnosticsSystem_t04B619C4E0301FBBC152B0BFA6CE2DB37DB20D3E* __this, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::set_IsVisible(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MixedRealityToolkitVisualProfiler_set_IsVisible_mD12EBD00C00A703C3E59E7E80F86F7A8256E833E_inline (MixedRealityToolkitVisualProfiler_t7EC6FCE39C4246F2C6D408EF28AE145F66EE0CB1* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Boolean Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem::get_ShowFrameInfo()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool MixedRealityDiagnosticsSystem_get_ShowFrameInfo_mA1805B6839B7B93A77440A68859B4D4ADD556B7C_inline (MixedRealityDiagnosticsSystem_t04B619C4E0301FBBC152B0BFA6CE2DB37DB20D3E* __this, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::set_FrameInfoVisible(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MixedRealityToolkitVisualProfiler_set_FrameInfoVisible_m349E44503361166137F93098D2E097058558A6C0_inline (MixedRealityToolkitVisualProfiler_t7EC6FCE39C4246F2C6D408EF28AE145F66EE0CB1* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Boolean Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem::get_ShowMemoryStats()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool MixedRealityDiagnosticsSystem_get_ShowMemoryStats_mC1FDF7701A8AFCF0D1266F45FFB3AA21855F170C_inline (MixedRealityDiagnosticsSystem_t04B619C4E0301FBBC152B0BFA6CE2DB37DB20D3E* __this, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::set_MemoryStatsVisible(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MixedRealityToolkitVisualProfiler_set_MemoryStatsVisible_m0DC3CF9BCE86C9E4B21FF7DF5D36FC945686E0D3_inline (MixedRealityToolkitVisualProfiler_t7EC6FCE39C4246F2C6D408EF28AE145F66EE0CB1* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Single Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem::get_FrameSampleRate()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float MixedRealityDiagnosticsSystem_get_FrameSampleRate_m8AA25308619FD532C0214BF8AF9ED00CFE7F5A12_inline (MixedRealityDiagnosticsSystem_t04B619C4E0301FBBC152B0BFA6CE2DB37DB20D3E* __this, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::set_FrameSampleRate(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MixedRealityToolkitVisualProfiler_set_FrameSampleRate_mE9DDDAC9EAF28FFE63B467205125B1DD9082CD18_inline (MixedRealityToolkitVisualProfiler_t7EC6FCE39C4246F2C6D408EF28AE145F66EE0CB1* __this, float ___value0, const RuntimeMethod* method) ;
// UnityEngine.TextAnchor Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem::get_WindowAnchor()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t MixedRealityDiagnosticsSystem_get_WindowAnchor_mB96730CB17FE9BBD05EE53857E014241B3CB7D46_inline (MixedRealityDiagnosticsSystem_t04B619C4E0301FBBC152B0BFA6CE2DB37DB20D3E* __this, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::set_WindowAnchor(UnityEngine.TextAnchor)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MixedRealityToolkitVisualProfiler_set_WindowAnchor_m86208661CE1734612528C595D195AAF600C5561D_inline (MixedRealityToolkitVisualProfiler_t7EC6FCE39C4246F2C6D408EF28AE145F66EE0CB1* __this, int32_t ___value0, const RuntimeMethod* method) ;
// UnityEngine.Vector2 Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem::get_WindowOffset()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 MixedRealityDiagnosticsSystem_get_WindowOffset_m22D553B3102C444590259B57DF4A565C97B0A551_inline (MixedRealityDiagnosticsSystem_t04B619C4E0301FBBC152B0BFA6CE2DB37DB20D3E* __this, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::set_WindowOffset(UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MixedRealityToolkitVisualProfiler_set_WindowOffset_m37BDE4220F8F35163ABFB18BC4A9856FDDEEDD46_inline (MixedRealityToolkitVisualProfiler_t7EC6FCE39C4246F2C6D408EF28AE145F66EE0CB1* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___value0, const RuntimeMethod* method) ;
// System.Single Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem::get_WindowScale()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float MixedRealityDiagnosticsSystem_get_WindowScale_m50AE35DD3A2E06A826FCCA364C5FE727513FD827_inline (MixedRealityDiagnosticsSystem_t04B619C4E0301FBBC152B0BFA6CE2DB37DB20D3E* __this, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::set_WindowScale(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityToolkitVisualProfiler_set_WindowScale_mFD260895F3171603D38B7EB691DD696DF846EF77 (MixedRealityToolkitVisualProfiler_t7EC6FCE39C4246F2C6D408EF28AE145F66EE0CB1* __this, float ___value0, const RuntimeMethod* method) ;
// System.Single Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem::get_WindowFollowSpeed()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float MixedRealityDiagnosticsSystem_get_WindowFollowSpeed_m6EEB483549E7177215D495F3212CB6F3FA11B8D9_inline (MixedRealityDiagnosticsSystem_t04B619C4E0301FBBC152B0BFA6CE2DB37DB20D3E* __this, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::set_WindowFollowSpeed(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityToolkitVisualProfiler_set_WindowFollowSpeed_m86941DA1E80182D0F0AF08BD902BA630B85DD3E9 (MixedRealityToolkitVisualProfiler_t7EC6FCE39C4246F2C6D408EF28AE145F66EE0CB1* __this, float ___value0, const RuntimeMethod* method) ;
// System.Boolean Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem::get_ShowProfilerDuringMRC()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool MixedRealityDiagnosticsSystem_get_ShowProfilerDuringMRC_m187A8E65D9D317AB74C8772005788345C302AC8C_inline (MixedRealityDiagnosticsSystem_t04B619C4E0301FBBC152B0BFA6CE2DB37DB20D3E* __this, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::set_ShowProfilerDuringMRC(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MixedRealityToolkitVisualProfiler_set_ShowProfilerDuringMRC_m98B8FBC4E937810D460B02A257744B12ED0185A2_inline (MixedRealityToolkitVisualProfiler_t7EC6FCE39C4246F2C6D408EF28AE145F66EE0CB1* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Application::get_isPlaying()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Application_get_isPlaying_m0B3B501E1093739F8887A0DAC5F61D9CB49CC337 (const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.BaseService::Initialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseService_Initialize_m750DCABB0D54C519B59BADDB050699C41BBC4EFA (BaseService_tB7EC5C0F60DC5EE2DA122A608226D3887B6421D0* __this, const RuntimeMethod* method) ;
// UnityEngine.EventSystems.EventSystem UnityEngine.EventSystems.EventSystem::get_current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* EventSystem_get_current_mD15EA86304E070D175EF359A051A7DB807CA26C0 (const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.Diagnostics.DiagnosticsEventData::.ctor(UnityEngine.EventSystems.EventSystem)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DiagnosticsEventData__ctor_mCB5C79C1F3EDDD6632298D94FD525BDD08C3C650 (DiagnosticsEventData_t567062EB8FA13779F27424928C704B00DC3CBCE7* __this, EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* ___eventSystem0, const RuntimeMethod* method) ;
// System.Boolean Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsProfile::get_ShowDiagnostics()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool MixedRealityDiagnosticsProfile_get_ShowDiagnostics_m944B868C34A40702F44660700DE8E0E4CB692E68_inline (MixedRealityDiagnosticsProfile_tF0C607D340096A8CF0E72C813EE76A9CBE288EFC* __this, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem::set_ShowDiagnostics(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityDiagnosticsSystem_set_ShowDiagnostics_mF961184EC7AE86510D56FC4792B2D6503C3F29A2 (MixedRealityDiagnosticsSystem_t04B619C4E0301FBBC152B0BFA6CE2DB37DB20D3E* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Boolean Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsProfile::get_ShowProfiler()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool MixedRealityDiagnosticsProfile_get_ShowProfiler_m68156CE4E09E128238BC12DA7923DF359589C06E_inline (MixedRealityDiagnosticsProfile_tF0C607D340096A8CF0E72C813EE76A9CBE288EFC* __this, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem::set_ShowProfiler(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityDiagnosticsSystem_set_ShowProfiler_m51716174B1B1F979F2D587385BBB8FB9A0A6FE27 (MixedRealityDiagnosticsSystem_t04B619C4E0301FBBC152B0BFA6CE2DB37DB20D3E* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Boolean Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsProfile::get_ShowFrameInfo()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool MixedRealityDiagnosticsProfile_get_ShowFrameInfo_m1A89AF5B209ADD75AC99497FF65EF1FB777F844F_inline (MixedRealityDiagnosticsProfile_tF0C607D340096A8CF0E72C813EE76A9CBE288EFC* __this, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem::set_ShowFrameInfo(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityDiagnosticsSystem_set_ShowFrameInfo_mBFD55E3FD8739470E3F39C8868B66699F11513FB (MixedRealityDiagnosticsSystem_t04B619C4E0301FBBC152B0BFA6CE2DB37DB20D3E* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Boolean Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsProfile::get_ShowMemoryStats()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool MixedRealityDiagnosticsProfile_get_ShowMemoryStats_m3BE6E158316BC6F50C74BBCC27C0DAF6D3411D8A_inline (MixedRealityDiagnosticsProfile_tF0C607D340096A8CF0E72C813EE76A9CBE288EFC* __this, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem::set_ShowMemoryStats(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityDiagnosticsSystem_set_ShowMemoryStats_m741D6F1C2DB6C68A81BBAA2A1E2298D85EB46615 (MixedRealityDiagnosticsSystem_t04B619C4E0301FBBC152B0BFA6CE2DB37DB20D3E* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Single Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsProfile::get_FrameSampleRate()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float MixedRealityDiagnosticsProfile_get_FrameSampleRate_mE0E9680CE13E7A763A2F2F655ABE71EEB6258248_inline (MixedRealityDiagnosticsProfile_tF0C607D340096A8CF0E72C813EE76A9CBE288EFC* __this, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem::set_FrameSampleRate(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityDiagnosticsSystem_set_FrameSampleRate_m81A9838404CA9575F824CC27AAB37DF875BEE9ED (MixedRealityDiagnosticsSystem_t04B619C4E0301FBBC152B0BFA6CE2DB37DB20D3E* __this, float ___value0, const RuntimeMethod* method) ;
// UnityEngine.TextAnchor Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsProfile::get_WindowAnchor()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t MixedRealityDiagnosticsProfile_get_WindowAnchor_m77A96A92EB7B4F57ED373982FE7BFEF849832C3D_inline (MixedRealityDiagnosticsProfile_tF0C607D340096A8CF0E72C813EE76A9CBE288EFC* __this, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem::set_WindowAnchor(UnityEngine.TextAnchor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityDiagnosticsSystem_set_WindowAnchor_mA672A4F8BD62ABC29A97154DE163F5F8F4EF2B9C (MixedRealityDiagnosticsSystem_t04B619C4E0301FBBC152B0BFA6CE2DB37DB20D3E* __this, int32_t ___value0, const RuntimeMethod* method) ;
// UnityEngine.Vector2 Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsProfile::get_WindowOffset()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 MixedRealityDiagnosticsProfile_get_WindowOffset_mFF121E71A3FFD1F474DFBA4997FDA77113475A39_inline (MixedRealityDiagnosticsProfile_tF0C607D340096A8CF0E72C813EE76A9CBE288EFC* __this, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem::set_WindowOffset(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityDiagnosticsSystem_set_WindowOffset_m7B74795B7C7BAC896EA603278FF23E2708DBD94D (MixedRealityDiagnosticsSystem_t04B619C4E0301FBBC152B0BFA6CE2DB37DB20D3E* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___value0, const RuntimeMethod* method) ;
// System.Single Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsProfile::get_WindowScale()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float MixedRealityDiagnosticsProfile_get_WindowScale_m87142F5F3E6ED242E153857CD40CED9C2F5BF94B_inline (MixedRealityDiagnosticsProfile_tF0C607D340096A8CF0E72C813EE76A9CBE288EFC* __this, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem::set_WindowScale(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityDiagnosticsSystem_set_WindowScale_mC52F734698761A5E7357098709C328202FB0B7BB (MixedRealityDiagnosticsSystem_t04B619C4E0301FBBC152B0BFA6CE2DB37DB20D3E* __this, float ___value0, const RuntimeMethod* method) ;
// System.Single Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsProfile::get_WindowFollowSpeed()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float MixedRealityDiagnosticsProfile_get_WindowFollowSpeed_m1E07ED22FB7DC35B391825AF1D169BA645D97370_inline (MixedRealityDiagnosticsProfile_tF0C607D340096A8CF0E72C813EE76A9CBE288EFC* __this, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem::set_WindowFollowSpeed(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityDiagnosticsSystem_set_WindowFollowSpeed_m0D4DB1E28437FBF40E82D8F3C9C5EFD6D5A6C80D (MixedRealityDiagnosticsSystem_t04B619C4E0301FBBC152B0BFA6CE2DB37DB20D3E* __this, float ___value0, const RuntimeMethod* method) ;
// System.Boolean Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsProfile::get_ShowProfilerDuringMRC()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool MixedRealityDiagnosticsProfile_get_ShowProfilerDuringMRC_m00802FE9C46E506B6FA42358218737A043EBACE6_inline (MixedRealityDiagnosticsProfile_tF0C607D340096A8CF0E72C813EE76A9CBE288EFC* __this, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem::set_ShowProfilerDuringMRC(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityDiagnosticsSystem_set_ShowProfilerDuringMRC_m2134CC0F4973441A059983240A6E9914405B04DA (MixedRealityDiagnosticsSystem_t04B619C4E0301FBBC152B0BFA6CE2DB37DB20D3E* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem::CreateVisualizations()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityDiagnosticsSystem_CreateVisualizations_m29183B9953BEEED01ADA26888F49CED42996B1C5 (MixedRealityDiagnosticsSystem_t04B619C4E0301FBBC152B0BFA6CE2DB37DB20D3E* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Application::get_isEditor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Application_get_isEditor_m0377DB707B566C8E21DA3CD99963210F6D57D234 (const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::DestroyImmediate(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_DestroyImmediate_m8249CABCDF344BE3A67EE765122EBB415DC2BC57 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___obj0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::DetachChildren()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_DetachChildren_m7E4B3405F2F053B059E76EC1DF0F235EED335D69 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_mFCDAE6333522488F60597AF019EA90BB1207A5AA (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___obj0, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.BaseEventSystem::Destroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseEventSystem_Destroy_m4763A3BA66E9048BD868B9E9632029E94BE9F451 (BaseEventSystem_tB9BD9711D545EEEF00D3162ED9A13EBDE4B1DEA1* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Mathf::Approximately(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Mathf_Approximately_m1C8DD0BB6A2D22A7DCF09AD7F8EE9ABD12D3F620_inline (float ___a0, float ___b1, const RuntimeMethod* method) ;
// System.String Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem::get_SourceName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* MixedRealityDiagnosticsSystem_get_SourceName_m673FA0683DC87170E7EAF3B19BE2D5208D6F14E7 (MixedRealityDiagnosticsSystem_t04B619C4E0301FBBC152B0BFA6CE2DB37DB20D3E* __this, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.Diagnostics.DiagnosticsEventData::Initialize(Microsoft.MixedReality.Toolkit.Diagnostics.IMixedRealityDiagnosticsSystem)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DiagnosticsEventData_Initialize_m014EE5987904B0838A36AB4AB7B156D731C6C36E (DiagnosticsEventData_t567062EB8FA13779F27424928C704B00DC3CBCE7* __this, RuntimeObject* ___diagnosticsSystem0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Vector2::op_Inequality(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector2_op_Inequality_mCF3935E28AC7B30B279F07F9321CC56718E1311A_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___lhs0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rhs1, const RuntimeMethod* method) ;
// System.Void Unity.Profiling.ProfilerMarker::.ctor(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ProfilerMarker__ctor_mDD68B0A8B71E0301F592AF8891560150E55699C8_inline (ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD* __this, String_t* ___name0, const RuntimeMethod* method) ;
// System.Void UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Diagnostics.IMixedRealityDiagnosticsHandler>::.ctor(System.Object,System.IntPtr)
inline void EventFunction_1__ctor_m4EE5E96FC3C815241DFDF351A24C553A71298D83 (EventFunction_1_t503E94AA3FF5ABC81854E3CA5ACC551D4F43C4FE* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (EventFunction_1_t503E94AA3FF5ABC81854E3CA5ACC551D4F43C4FE*, RuntimeObject*, intptr_t, const RuntimeMethod*))EventFunction_1__ctor_m8527E59AE02A1117319F24ADABBF52E2FE8EA368_gshared)(__this, ___object0, ___method1, method);
}
// System.Void Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m18E934270CFF2505D8159855533689270D283593 (U3CU3Ec_t6122B532248D673B289A7F458ACB1853ED34F671* __this, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// Unity.Profiling.ProfilerMarker/AutoScope Unity.Profiling.ProfilerMarker::Auto()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR AutoScope_tFB983697E28885CB10FFDB92D7EFD0615AEF3139 ProfilerMarker_Auto_m133FA724EB95D16187B37D2C8A501D7E989B1F8D_inline (ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD* __this, const RuntimeMethod* method) ;
// System.Void Unity.Profiling.ProfilerMarker/AutoScope::Dispose()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AutoScope_Dispose_mED763F3F51261EF8FB79DB32CD06E0A3F6C40481_inline (AutoScope_tFB983697E28885CB10FFDB92D7EFD0615AEF3139* __this, const RuntimeMethod* method) ;
// T UnityEngine.EventSystems.ExecuteEvents::ValidateEventData<Microsoft.MixedReality.Toolkit.Diagnostics.DiagnosticsEventData>(UnityEngine.EventSystems.BaseEventData)
inline DiagnosticsEventData_t567062EB8FA13779F27424928C704B00DC3CBCE7* ExecuteEvents_ValidateEventData_TisDiagnosticsEventData_t567062EB8FA13779F27424928C704B00DC3CBCE7_m1C36E7FB349B6D7F065D22F383191195E497DDAB (BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F* ___data0, const RuntimeMethod* method)
{
	return ((  DiagnosticsEventData_t567062EB8FA13779F27424928C704B00DC3CBCE7* (*) (BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F*, const RuntimeMethod*))ExecuteEvents_ValidateEventData_TisRuntimeObject_m4EA334E32315EE93D32E13F6122F5B8382D247DD_gshared)(___data0, method);
}
// System.Single UnityEngine.Mathf::Clamp(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp_m154E404AF275A3B2EC99ECAA3879B4CB9F0606DC_inline (float ___value0, float ___min1, float ___max2, const RuntimeMethod* method) ;
// UnityEngine.Shader UnityEngine.Shader::Find(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* Shader_Find_mFF2A8FC042B9CFAA9800679CA674D52859BF3A72 (String_t* ___name0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Material::.ctor(UnityEngine.Shader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material__ctor_m7FDF47105D66D19591BE505A0C42B0F90D88C9BF (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* ___shader0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Material::SetFloat(System.String,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836 (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, String_t* ___name0, float ___value1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Material::set_renderQueue(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_set_renderQueue_mFBB72A781DCCF0D4B85670B597788EC2D02D1C14 (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Material::set_enableInstancing(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_set_enableInstancing_m84BA72A28BCFE94B50535BDE410A539A7CD7AF80 (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogWarning(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogWarning_mEF15C6B17CE4E1FA7E379CDB82CE40FCD89A3F28 (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Material::.ctor(UnityEngine.Material)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material__ctor_mFCC42FB90257F1E8F7516A8640A79C465A39961C (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___source0, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Material::get_renderQueue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Material_get_renderQueue_mC427C54D2667620CBB845559DA4DA31BE166C757 (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject__ctor_m7D0340DE160786E6EFA8DABD39EC3B694DA30AAD (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::AddComponent<UnityEngine.TextMesh>()
inline TextMesh_t7E1981C7B03E50D5CA5A3AD5B0D9BB0AB6EE91F8* GameObject_AddComponent_TisTextMesh_t7E1981C7B03E50D5CA5A3AD5B0D9BB0AB6EE91F8_mFAD74D91BCACF9C3FAE6960EB58D5C346DDBD9C2 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  TextMesh_t7E1981C7B03E50D5CA5A3AD5B0D9BB0AB6EE91F8* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared)(__this, method);
}
// T UnityEngine.Component::GetComponent<UnityEngine.MeshRenderer>()
inline MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* Component_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m0EDA0079FA3617687C4A28623B79A37D618D9CFB (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// UnityEngine.Material UnityEngine.Renderer::get_sharedMaterial()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81 (Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* __this, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.GameObject::CreatePrimitive(UnityEngine.PrimitiveType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GameObject_CreatePrimitive_mE2F848626FE928B6E3810ABFB81867E619BB2507 (int32_t ___type0, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<UnityEngine.MeshFilter>()
inline MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* GameObject_GetComponent_TisMeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5_mDF6525BCE37B444313BE0AA2305BDF4EB8B92FE8 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// UnityEngine.Mesh UnityEngine.MeshFilter::get_mesh()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* MeshFilter_get_mesh_m13172D7EF6682861971817D0A47EE2BE49FBCB1C (MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_one()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_one_mE6A2D5C6578E94268024613B596BF09F990B1260_inline (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Bounds::.ctor(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Bounds__ctor_mAF7B238B9FBF90C495E5D7951760085A93119C5A (Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___center0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___size1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Mesh::set_bounds(UnityEngine.Bounds)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_set_bounds_m2E526E9B61ACA77D644C22A9D8EB49583012B54E (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 ___value0, const RuntimeMethod* method) ;
// UnityEngine.Mesh UnityEngine.MeshFilter::get_sharedMesh()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* MeshFilter_get_sharedMesh_mE4ED3E7E31C1DE5097E4980DA996E620F7D7CB8C (MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* __this, const RuntimeMethod* method) ;
// System.Void System.Diagnostics.Stopwatch::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stopwatch_Reset_mF22DE61FDE7FF5825C750D2F6482B591BDC715FA (Stopwatch_tA188A210449E22C07053A7D3014DD182C7369043* __this, const RuntimeMethod* method) ;
// System.Void System.Diagnostics.Stopwatch::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stopwatch_Start_m35906A38C7D336CF9DD35854C7E170D762A55915 (Stopwatch_tA188A210449E22C07053A7D3014DD182C7369043* __this, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityToolkitVisualProfiler_Reset_m4CBBA7F093094F1626E61E74CC81DCD4FCA8C719 (MixedRealityToolkitVisualProfiler_t7EC6FCE39C4246F2C6D408EF28AE145F66EE0CB1* __this, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::BuildWindow()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityToolkitVisualProfiler_BuildWindow_mE5AE22B28F867AF56E64C0CF922BA1F09FD84094 (MixedRealityToolkitVisualProfiler_t7EC6FCE39C4246F2C6D408EF28AE145F66EE0CB1* __this, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::BuildFrameRateStrings()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityToolkitVisualProfiler_BuildFrameRateStrings_mE63481C87E093E2A21C7694B6F7D23F7BEFBD478 (MixedRealityToolkitVisualProfiler_t7EC6FCE39C4246F2C6D408EF28AE145F66EE0CB1* __this, const RuntimeMethod* method) ;
// Windows.Media.Capture.AppCapture Windows.Media.Capture.AppCapture::GetForCurrentView()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AppCapture_t053EACB2089D0B11989E1C6810A8B63855CCD518* AppCapture_GetForCurrentView_m2CBE83F566727DBF22FD1D0638445979974726B9 (const RuntimeMethod* method) ;
// System.Boolean Windows.Media.Capture.AppCapture::get_IsCapturingVideo()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AppCapture_get_IsCapturingVideo_mFF83D8F3D091E4EF84D0844D7FA8CAB5E695EA59 (AppCapture_t053EACB2089D0B11989E1C6810A8B63855CCD518* __this, const RuntimeMethod* method) ;
// System.Void System.Func`2<Windows.Foundation.TypedEventHandler`2<Windows.Media.Capture.AppCapture,System.Object>,System.Runtime.InteropServices.WindowsRuntime.EventRegistrationToken>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_mE0D1AFD14BF6864BA8DC74C5DDA7B1322342B794 (Func_2_t75F41BC3985F61E6BFABDD39D82A26CDD4031436* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_t75F41BC3985F61E6BFABDD39D82A26CDD4031436*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_2__ctor_m90B7EA3C338F6A61C7F47898E913088053DA56DF_gshared)(__this, ___object0, ___method1, method);
}
// System.Void System.Action`1<System.Runtime.InteropServices.WindowsRuntime.EventRegistrationToken>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_mE59785557489C8127A4B1AF2A7281F701BA8152B (Action_1_t2F6697C5DA7073FCAE212D3900E184AF5BA9E722* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t2F6697C5DA7073FCAE212D3900E184AF5BA9E722*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_1__ctor_mE59785557489C8127A4B1AF2A7281F701BA8152B_gshared)(__this, ___object0, ___method1, method);
}
// System.Void Windows.Foundation.TypedEventHandler`2<Windows.Media.Capture.AppCapture,System.Object>::.ctor(System.Object,System.IntPtr)
inline void TypedEventHandler_2__ctor_mBF8E3C92BBD44B931BBBFC41B7953BFD84DCB918 (TypedEventHandler_2_t9B118434C59C99BDDD7ADFCC4DCAA528A1A4123F* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (TypedEventHandler_2_t9B118434C59C99BDDD7ADFCC4DCAA528A1A4123F*, RuntimeObject*, intptr_t, const RuntimeMethod*))TypedEventHandler_2__ctor_m8EC7F2496EAAC789C299600170EBE8F84E96DC7F_gshared)(__this, ___object0, ___method1, method);
}
// System.Void System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeMarshal::AddEventHandler<Windows.Foundation.TypedEventHandler`2<Windows.Media.Capture.AppCapture,System.Object>>(System.Func`2<T,System.Runtime.InteropServices.WindowsRuntime.EventRegistrationToken>,System.Action`1<System.Runtime.InteropServices.WindowsRuntime.EventRegistrationToken>,T)
inline void WindowsRuntimeMarshal_AddEventHandler_TisTypedEventHandler_2_t9B118434C59C99BDDD7ADFCC4DCAA528A1A4123F_m55FC3180743C4F0A5419F3AADE845DFA8E0447CE (Func_2_t75F41BC3985F61E6BFABDD39D82A26CDD4031436* ___addMethod0, Action_1_t2F6697C5DA7073FCAE212D3900E184AF5BA9E722* ___removeMethod1, TypedEventHandler_2_t9B118434C59C99BDDD7ADFCC4DCAA528A1A4123F* ___handler2, const RuntimeMethod* method)
{
	((  void (*) (Func_2_t75F41BC3985F61E6BFABDD39D82A26CDD4031436*, Action_1_t2F6697C5DA7073FCAE212D3900E184AF5BA9E722*, TypedEventHandler_2_t9B118434C59C99BDDD7ADFCC4DCAA528A1A4123F*, const RuntimeMethod*))WindowsRuntimeMarshal_AddEventHandler_TisRuntimeObject_mBB91B5D4609386C1BF68DC9942AC20F8C1C4398F_gshared)(___addMethod0, ___removeMethod1, ___handler2, method);
}
// System.Void System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeMarshal::RemoveEventHandler<Windows.Foundation.TypedEventHandler`2<Windows.Media.Capture.AppCapture,System.Object>>(System.Action`1<System.Runtime.InteropServices.WindowsRuntime.EventRegistrationToken>,T)
inline void WindowsRuntimeMarshal_RemoveEventHandler_TisTypedEventHandler_2_t9B118434C59C99BDDD7ADFCC4DCAA528A1A4123F_mD5720753EC4ED83CBC4D77D986DD31AC38FFEC19 (Action_1_t2F6697C5DA7073FCAE212D3900E184AF5BA9E722* ___removeMethod0, TypedEventHandler_2_t9B118434C59C99BDDD7ADFCC4DCAA528A1A4123F* ___handler1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t2F6697C5DA7073FCAE212D3900E184AF5BA9E722*, TypedEventHandler_2_t9B118434C59C99BDDD7ADFCC4DCAA528A1A4123F*, const RuntimeMethod*))WindowsRuntimeMarshal_RemoveEventHandler_TisRuntimeObject_mF5ED2E12D7CC90EFB9203D539DDEF34BA6AAC25F_gshared)(___removeMethod0, ___handler1, method);
}
// UnityEngine.Camera Microsoft.MixedReality.Toolkit.Utilities.CameraCache::get_Main()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* CameraCache_get_Main_m631CABB7F5A697F4C1D76F7CB02D6791C0DDCB9E (const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Implicit(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___exists0, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Boolean Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::get_ShouldShowProfiler()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MixedRealityToolkitVisualProfiler_get_ShouldShowProfiler_m0F070874EFE4889B9C6EF81ACBEC16E2A182E11A (MixedRealityToolkitVisualProfiler_t7EC6FCE39C4246F2C6D408EF28AE145F66EE0CB1* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::CalculateWindowPosition(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 MixedRealityToolkitVisualProfiler_CalculateWindowPosition_m255B612B878664B02B136651EDBB7AF5B0EA70B2 (MixedRealityToolkitVisualProfiler_t7EC6FCE39C4246F2C6D408EF28AE145F66EE0CB1* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___cameraTransform0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::Lerp(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Lerp_m57EE8D709A93B2B0FF8D499FA2947B1D61CB1FD6_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, float ___t2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Transform::get_rotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Quaternion Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::CalculateWindowRotation(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 MixedRealityToolkitVisualProfiler_CalculateWindowRotation_m8F0A11C23874611D3A7420943F8F0819F594EDC2 (MixedRealityToolkitVisualProfiler_t7EC6FCE39C4246F2C6D408EF28AE145F66EE0CB1* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___cameraTransform0, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::Slerp(UnityEngine.Quaternion,UnityEngine.Quaternion,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Slerp_m5FDA8C178E7EB209B43845F73263AFE9C02F3949 (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___a0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___b1, float ___t2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_rotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_localScale(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::CalculateBackgroundSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityToolkitVisualProfiler_CalculateBackgroundSize_m3CC8C0146BF429F0BBBBF9A55C348AC08BD730AE (MixedRealityToolkitVisualProfiler_t7EC6FCE39C4246F2C6D408EF28AE145F66EE0CB1* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.FrameTimingManager::CaptureFrameTimings()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FrameTimingManager_CaptureFrameTimings_m6EF9F1C3E975FFAC5388857436E134DDDF014ECE (const RuntimeMethod* method) ;
// System.Int64 System.Diagnostics.Stopwatch::get_ElapsedMilliseconds()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t Stopwatch_get_ElapsedMilliseconds_m8D8E60ADEB47D008C06D8E57D28D41EAE07AECBF (Stopwatch_tA188A210449E22C07053A7D3014DD182C7369043* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Mathf::Min(System.Int32,System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_Min_mFEAD72DF4C4708B86BF464AB4F5F1468FAD8E784_inline (int32_t ___a0, int32_t ___b1, const RuntimeMethod* method) ;
// System.UInt32 UnityEngine.FrameTimingManager::GetLatestTimings(System.UInt32,UnityEngine.FrameTiming[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t FrameTimingManager_GetLatestTimings_m60604DC8F0EEE290FA300D2FE4E62351EE90FAA2 (uint32_t ___numFrames0, FrameTimingU5BU5D_t32DDC21D000DE3127D5DF845AFEC7B02A0AE390E* ___timings1, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::AverageFrameTiming(UnityEngine.FrameTiming[],System.UInt32,System.Single&,System.Single&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityToolkitVisualProfiler_AverageFrameTiming_mA4485AC71E1782351ED9A48C629B525C4190D318 (FrameTimingU5BU5D_t32DDC21D000DE3127D5DF845AFEC7B02A0AE390E* ___frameTimings0, uint32_t ___frameTimingsCount1, float* ___cpuFrameTime2, float* ___gpuFrameTime3, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Mathf::Clamp(System.Int32,System.Int32,System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_Clamp_mA48718D9A20D8972EDD41714CEF6BBF864F442EA_inline (int32_t ___value0, int32_t ___min1, int32_t ___max2, const RuntimeMethod* method) ;
// System.Void UnityEngine.TextMesh::set_text(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextMesh_set_text_mDF79D39638ED82797D0B0B3BB9E6B10712F8EA9E (TextMesh_t7E1981C7B03E50D5CA5A3AD5B0D9BB0AB6EE91F8* __this, String_t* ___value0, const RuntimeMethod* method) ;
// UnityEngine.Color Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::CalculateFrameColor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F MixedRealityToolkitVisualProfiler_CalculateFrameColor_mDF0F4B8533688C09CD4C96D8F7082865831FD41F (MixedRealityToolkitVisualProfiler_t7EC6FCE39C4246F2C6D408EF28AE145F66EE0CB1* __this, int32_t ___frameRate0, const RuntimeMethod* method) ;
// UnityEngine.Vector4 UnityEngine.Color::op_Implicit(UnityEngine.Color)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 Color_op_Implicit_m6D1353534AD23E43DFD104850D55C469CFCEF340_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___c0, const RuntimeMethod* method) ;
// System.Void UnityEngine.MaterialPropertyBlock::SetVectorArray(System.Int32,UnityEngine.Vector4[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MaterialPropertyBlock_SetVectorArray_m5C0A3017A7EA9EE5F01295E346EA72D70A8BD682 (MaterialPropertyBlock_t2308669579033A857EFE6E4831909F638B27411D* __this, int32_t ___nameID0, Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* ___values1, const RuntimeMethod* method) ;
// UnityEngine.Matrix4x4 UnityEngine.Transform::get_localToWorldMatrix()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 Transform_get_localToWorldMatrix_m5D35188766856338DD21DE756F42277C21719E6D (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.SystemInfo::get_supportsInstancing()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SystemInfo_get_supportsInstancing_m1EAB72F7149F96B5B2F6DCE89A489C26FDBB5A75 (const RuntimeMethod* method) ;
// System.Void UnityEngine.MaterialPropertyBlock::SetMatrix(System.Int32,UnityEngine.Matrix4x4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MaterialPropertyBlock_SetMatrix_mA86792A03023DC1F6B46B06C72D61F3CCE4177AC (MaterialPropertyBlock_t2308669579033A857EFE6E4831909F638B27411D* __this, int32_t ___nameID0, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___value1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Graphics::DrawMeshInstanced(UnityEngine.Mesh,System.Int32,UnityEngine.Material,UnityEngine.Matrix4x4[],System.Int32,UnityEngine.MaterialPropertyBlock,UnityEngine.Rendering.ShadowCastingMode,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Graphics_DrawMeshInstanced_mD70F82A6A14D80B0A41D1C0604D99F3319F909D5 (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___mesh0, int32_t ___submeshIndex1, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material2, Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D* ___matrices3, int32_t ___count4, MaterialPropertyBlock_t2308669579033A857EFE6E4831909F638B27411D* ___properties5, int32_t ___castShadows6, bool ___receiveShadows7, const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::op_Implicit(UnityEngine.Vector4)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_op_Implicit_m04FFC6EBCB0576CD59529546F8FA10F4F71E9005_inline (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___v0, const RuntimeMethod* method) ;
// System.Void UnityEngine.MaterialPropertyBlock::SetColor(System.Int32,UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MaterialPropertyBlock_SetColor_m2E7CA761D98625E3B3CF380D3EBB2C99908FDFF6 (MaterialPropertyBlock_t2308669579033A857EFE6E4831909F638B27411D* __this, int32_t ___nameID0, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___value1, const RuntimeMethod* method) ;
// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::op_Multiply(UnityEngine.Matrix4x4,UnityEngine.Matrix4x4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 Matrix4x4_op_Multiply_m7649669D493400913FF60AFB04B1C19F14E0FDB0 (Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___lhs0, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___rhs1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Graphics::DrawMesh(UnityEngine.Mesh,UnityEngine.Matrix4x4,UnityEngine.Material,System.Int32,UnityEngine.Camera,System.Int32,UnityEngine.MaterialPropertyBlock,System.Boolean,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Graphics_DrawMesh_m88CEF846CECBA000030024B80F94D9D2DE789C5E (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___mesh0, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___matrix1, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material2, int32_t ___layer3, Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___camera4, int32_t ___submeshIndex5, MaterialPropertyBlock_t2308669579033A857EFE6E4831909F638B27411D* ___properties6, bool ___castShadows7, bool ___receiveShadows8, bool ___useLightProbes9, const RuntimeMethod* method) ;
// System.UInt64 Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::get_AppMemoryUsageLimit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t MixedRealityToolkitVisualProfiler_get_AppMemoryUsageLimit_m4CE3F459245209FCBF9B09FF20240E19839E811C (const RuntimeMethod* method) ;
// System.Boolean Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::WillDisplayedMemoryUsageDiffer(System.UInt64,System.UInt64,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MixedRealityToolkitVisualProfiler_WillDisplayedMemoryUsageDiffer_m8D02EDA4B096158CD38E7C795768EC3C04486031 (uint64_t ___oldUsage0, uint64_t ___newUsage1, int32_t ___displayedDecimalDigits2, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::MemoryUsageToString(System.Char[],System.Int32,UnityEngine.TextMesh,System.String,System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityToolkitVisualProfiler_MemoryUsageToString_m2D656475404316C58FA457222F9543FB685BEEF7 (CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___stringBuffer0, int32_t ___displayedDecimalDigits1, TextMesh_t7E1981C7B03E50D5CA5A3AD5B0D9BB0AB6EE91F8* ___textMesh2, String_t* ___prefixString3, uint64_t ___memoryUsage4, const RuntimeMethod* method) ;
// System.UInt64 Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::get_AppMemoryUsage()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t MixedRealityToolkitVisualProfiler_get_AppMemoryUsage_m487A0C9142CB799301FC402469E1D8814E88DFED (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_localScale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.GameObject::get_activeSelf()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GameObject_get_activeSelf_m4F3E5240E138B66AAA080EA30759A3D0517DA368 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Camera::get_fieldOfView()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Camera_get_fieldOfView_m9A93F17BBF89F496AE231C21817AFD1C1E833FBB (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Camera::get_nearClipPlane()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Camera_get_nearClipPlane_m5E8FAF84326E3192CB036BD29DCCDAF6A9861013 (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Max(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Max_mA9DCA91E87D6D27034F56ABA52606A9090406016_inline (float ___a0, float ___b1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_forward()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_right()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_right_mC6DC057C23313802E2186A9E0DB760D795A758A4 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_up()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_up_mE47A9D9D96422224DD0539AA5524DA5440145BB2 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Subtraction(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Subtraction_m1690F44F6DC92B770A940B6CF8AE0535625A9824_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::op_Multiply(UnityEngine.Quaternion,UnityEngine.Quaternion)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_op_Multiply_m5AC8B39C55015059BDD09122E04E47D4BFAB2276_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___lhs0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rhs1, const RuntimeMethod* method) ;
// System.Single Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::get_AppTargetFrameRate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float MixedRealityToolkitVisualProfiler_get_AppTargetFrameRate_mBF51B4DE13383FCE806243AE7D92728DDE8E61AD (const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_localPosition(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Shader::PropertyToID(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Shader_PropertyToID_mF5F7BA2EFF23D83482ECDE4C34227145D817B1EB (String_t* ___name0, const RuntimeMethod* method) ;
// UnityEngine.Transform Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::get_WindowParent()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* MixedRealityToolkitVisualProfiler_get_WindowParent_mE0FDF64D85504EEFA54D140CB047E2466FE8A429_inline (MixedRealityToolkitVisualProfiler_t7EC6FCE39C4246F2C6D408EF28AE145F66EE0CB1* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_parent(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_parent_m9BD5E563B539DD5BEC342736B03F97B38A243234 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___value0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_right()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_right_m13B7C3EAA64DC921EC23346C56A5A597B5481FF5_inline (const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::AngleAxis(System.Single,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_AngleAxis_m01A869DC10F976FAF493B66F15D6D6977BB61DA8 (float ___angle0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___axis1, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::Inverse(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Inverse_m7597DECDAD37194FAC86D1A11DCE3F0C7747F817 (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_up()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_up_mAB5269BFCBCB1BD241450C9BF2F156303D30E0C3_inline (const RuntimeMethod* method) ;
// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::CreateQuad(System.String,UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* MixedRealityToolkitVisualProfiler_CreateQuad_mAE94A1A2BF7B270E53738BC38DCBC177EDB22FAB (String_t* ___name0, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___parent1, const RuntimeMethod* method) ;
// UnityEngine.Renderer Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::InitializeRenderer(UnityEngine.GameObject,UnityEngine.Material,System.Int32,UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* MixedRealityToolkitVisualProfiler_InitializeRenderer_m2E1FC0C4AF9A74A942A15C93BD52B3AFC04FC88F (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___obj0, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material1, int32_t ___colorID2, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___color3, const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::get_white()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_white_m28BB6E19F27D4EE6858D3021A44F62BC74E20C43_inline (const RuntimeMethod* method) ;
// UnityEngine.TextMesh Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::CreateText(System.String,UnityEngine.Vector3,UnityEngine.Transform,UnityEngine.TextAnchor,UnityEngine.Material,UnityEngine.Color,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TextMesh_t7E1981C7B03E50D5CA5A3AD5B0D9BB0AB6EE91F8* MixedRealityToolkitVisualProfiler_CreateText_mE4D0118EC0F55A9D00AA786BBF606DADBBF79E7F (String_t* ___name0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position1, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___parent2, int32_t ___anchor3, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material4, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___color5, String_t* ___text6, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::get_identity()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_get_identity_mB9CAEEB21BC81352CBF32DB9664BFC06FA7EA27B_inline (const RuntimeMethod* method) ;
// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::TRS(UnityEngine.Vector3,UnityEngine.Quaternion,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 Matrix4x4_TRS_mFEBA6926DB0044B96EF0CE98F30FEE7596820680 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___pos0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___q1, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___s2, const RuntimeMethod* method) ;
// System.Void UnityEngine.MaterialPropertyBlock::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MaterialPropertyBlock__ctor_m14C3432585F7BB65028BCD64A0FD6607A1B490FB (MaterialPropertyBlock_t2308669579033A857EFE6E4831909F638B27411D* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.TextMesh::set_fontSize(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextMesh_set_fontSize_mAB9F7FFC0E4DB759B786F6A9357B18C86015498B (TextMesh_t7E1981C7B03E50D5CA5A3AD5B0D9BB0AB6EE91F8* __this, int32_t ___value0, const RuntimeMethod* method) ;
// UnityEngine.Transform Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::CreateAnchor(System.String,UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* MixedRealityToolkitVisualProfiler_CreateAnchor_mFF35C931C94179AA5F28776616CBFEE640EAFD4E (String_t* ___name0, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___parent1, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m8C122B26BC5AA10E2550AECA16E57DAE10F07E30 (String_t* ___format0, RuntimeObject* ___arg01, const RuntimeMethod* method) ;
// System.Void System.Text.StringBuilder::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringBuilder__ctor_m2619CA8D2C3476DF1A302D9D941498BB1C6164C5 (StringBuilder_t* __this, int32_t ___capacity0, const RuntimeMethod* method) ;
// System.Text.StringBuilder System.Text.StringBuilder::AppendFormat(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_AppendFormat_mFA88863E4018C2912D1A783E0EA6DAE4F594124F (StringBuilder_t* __this, String_t* ___format0, RuntimeObject* ___arg01, const RuntimeMethod* method) ;
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5 (int32_t* __this, const RuntimeMethod* method) ;
// System.Text.StringBuilder System.Text.StringBuilder::AppendFormat(System.String,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_AppendFormat_mAB076D92DC92723B2224D75987BE463AF1CE7132 (StringBuilder_t* __this, String_t* ___format0, RuntimeObject* ___arg01, RuntimeObject* ___arg12, const RuntimeMethod* method) ;
// System.Void System.Text.StringBuilder::set_Length(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringBuilder_set_Length_mE2427BDAEF91C4E4A6C80F3BDF1F6E01DBCC2414 (StringBuilder_t* __this, int32_t ___value0, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<UnityEngine.Collider>()
inline Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* GameObject_GetComponent_TisCollider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_m4CB0FC4E59CE6C91F1106739EF364208A63E2597 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Void UnityEngine.Object::set_name(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_set_name_mC79E6DC8FFD72479C90F0C4CC7F42A0FEAF5AE47 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.TextMesh::set_anchor(UnityEngine.TextAnchor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextMesh_set_anchor_m3FCB7C4B1FF66CE189B56076C0306AFE984FCD32 (TextMesh_t7E1981C7B03E50D5CA5A3AD5B0D9BB0AB6EE91F8* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.TextMesh::set_color(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextMesh_set_color_mF08F30C3CD797C16289225B567724B9F07DC641E (TextMesh_t7E1981C7B03E50D5CA5A3AD5B0D9BB0AB6EE91F8* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.TextMesh::set_richText(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextMesh_set_richText_m26D52770D73A6B142A153B913F2D005E895F2EE2 (TextMesh_t7E1981C7B03E50D5CA5A3AD5B0D9BB0AB6EE91F8* __this, bool ___value0, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<UnityEngine.Renderer>()
inline Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* GameObject_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_m026EB44DB6238F13E2AFBECF1FBBE924CB1B040A (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Void UnityEngine.Renderer::set_sharedMaterial(UnityEngine.Material)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Renderer_set_sharedMaterial_m5E842F9A06CFB7B77656EB319881CB4B3E8E4288 (Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* __this, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___value0, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::OptimizeRenderer(UnityEngine.Renderer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityToolkitVisualProfiler_OptimizeRenderer_mD436C9BFDBBE4598B8FC3C82E6F5ECD648DAFDD3 (Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* ___renderer0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Renderer::GetPropertyBlock(UnityEngine.MaterialPropertyBlock)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Renderer_GetPropertyBlock_mD062F90343D70151CA060AE7EBEF2E85146A9FBA (Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* __this, MaterialPropertyBlock_t2308669579033A857EFE6E4831909F638B27411D* ___properties0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Renderer::SetPropertyBlock(UnityEngine.MaterialPropertyBlock)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Renderer_SetPropertyBlock_mF565698782FE54580B17CC0BFF9B0C4F0D68DF50 (Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* __this, MaterialPropertyBlock_t2308669579033A857EFE6E4831909F638B27411D* ___properties0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Renderer::set_shadowCastingMode(UnityEngine.Rendering.ShadowCastingMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Renderer_set_shadowCastingMode_mB0CD3D153E43044388AEFF7AEFDA93E80EB36D11 (Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Renderer::set_receiveShadows(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Renderer_set_receiveShadows_mABEB4C72E96E65117B7FFFD4180247565D0C1A09 (Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Renderer::set_motionVectorGenerationMode(UnityEngine.MotionVectorGenerationMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Renderer_set_motionVectorGenerationMode_m5768AC38CBBAD505E34281889682CA464ED3A32F (Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Renderer::set_lightProbeUsage(UnityEngine.Rendering.LightProbeUsage)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Renderer_set_lightProbeUsage_mDCCD970DAC3546B32EF58876BABBD3353624F703 (Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Renderer::set_reflectionProbeUsage(UnityEngine.Rendering.ReflectionProbeUsage)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Renderer_set_reflectionProbeUsage_m54A268EACA655AC3C66C4CD7F8C1EF3B41F3E008 (Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Renderer::set_allowOcclusionWhenDynamic(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Renderer_set_allowOcclusionWhenDynamic_mFAF8360D5AEEAE69443738AA7D764CF1E52EFFE7 (Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Single Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::ConvertBytesToMegabytes(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float MixedRealityToolkitVisualProfiler_ConvertBytesToMegabytes_m0F1E1AAAB9462A53BF2886BFF937CACB4B791EF9 (uint64_t ___bytes0, const RuntimeMethod* method) ;
// System.Char System.String::get_Chars(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3 (String_t* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Int32 System.String::get_Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) ;
// System.Int32 Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::MemoryItoA(System.Int32,System.Char[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MixedRealityToolkitVisualProfiler_MemoryItoA_m0829D112818D5CD5427216B433B6312B1BFF9AB9 (int32_t ___value0, CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___stringBuffer1, int32_t ___bufferIndex2, const RuntimeMethod* method) ;
// System.String System.String::CreateString(System.Char[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_CreateString_mB7B3AC2AF28010538650051A9000369B1CD6BAB6 (String_t* __this, CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___val0, int32_t ___startIndex1, int32_t ___length2, const RuntimeMethod* method) ;
// System.Single UnityEngine.XR.XRDevice::get_refreshRate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float XRDevice_get_refreshRate_m5F492E6198C73E6DC60B5B81E3FE7B78ED84A555 (const RuntimeMethod* method) ;
// System.UInt64 Windows.System.MemoryManager::get_AppMemoryUsage()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t MemoryManager_get_AppMemoryUsage_m05C0A97F9ABF71B186DB9A03B8A6204B9D780130 (const RuntimeMethod* method) ;
// System.UInt64 Windows.System.MemoryManager::get_AppMemoryUsageLimit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t MemoryManager_get_AppMemoryUsageLimit_m313F28AC8331A94F0CFADADBC2A6FF96EB4DF0FB (const RuntimeMethod* method) ;
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___r0, float ___g1, float ___b2, float ___a3, const RuntimeMethod* method) ;
// System.Void System.Diagnostics.Stopwatch::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stopwatch__ctor_mAFE6B2F45CF1C3469EF6D5307972BC098B473D0A (Stopwatch_tA188A210449E22C07053A7D3014DD182C7369043* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Vector2::op_Equality(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector2_op_Equality_m5447BF12C18339431AB8AF02FA463C543D88D463_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___lhs0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rhs1, const RuntimeMethod* method) ;
// System.IntPtr Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility::CreateMarker(System.String,System.UInt16,Unity.Profiling.LowLevel.MarkerFlags,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t ProfilerUnsafeUtility_CreateMarker_m27DDE00D41B95677982DBFCE074D45B79E50C7CC (String_t* ___name0, uint16_t ___categoryId1, uint16_t ___flags2, int32_t ___metadataCount3, const RuntimeMethod* method) ;
// System.Void Unity.Profiling.ProfilerMarker/AutoScope::.ctor(System.IntPtr)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AutoScope__ctor_m7F63A273E382CB6328736B6E7F321DDFA40EA9E3_inline (AutoScope_tFB983697E28885CB10FFDB92D7EFD0615AEF3139* __this, intptr_t ___markerPtr0, const RuntimeMethod* method) ;
// System.Void Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility::EndSample(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProfilerUnsafeUtility_EndSample_mE2F7A0DB4C52105F7CD135ED8816A2BB98E663CC (intptr_t ___markerPtr0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Clamp01(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp01_mD921B23F47F5347996C56DC789D1DE16EE27D9B1_inline (float ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector4::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* __this, float ___x0, float ___y1, float ___z2, float ___w3, const RuntimeMethod* method) ;
// System.Void UnityEngine.Quaternion::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Quaternion__ctor_m868FD60AA65DD5A8AC0C5DEB0608381A8D85FCD8_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* __this, float ___x0, float ___y1, float ___z2, float ___w3, const RuntimeMethod* method) ;
// System.Void Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility::BeginSample(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProfilerUnsafeUtility_BeginSample_m1C6D6ED1C8E0CB2FD0934EB6EA333276F67C14F6 (intptr_t ___markerPtr0, const RuntimeMethod* method) ;
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
// System.Void Microsoft.MixedReality.Toolkit.Diagnostics.DiagnosticsSystemVoiceControls::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DiagnosticsSystemVoiceControls_OnEnable_mBDAE23ADFD986D5A86F44F79F17A01D5FBC28730 (DiagnosticsSystemVoiceControls_t1997FD3471800D442B69DBD6D9D1FCF7CD521237* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CoreServices_tCB1FB80E338B89BCA07C52C15B876BC6D4B3439B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealityEventSystem_RegisterHandler_TisIMixedRealitySpeechHandler_tF57481E35DD5D8C0EC2D82DA0E72CDE0058C12B5_m02DD2BB27CFB3B352F1D771B1EB3DDF1A7EB9547_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!registeredForInput)
		bool L_0 = __this->___registeredForInput_4;
		if (L_0)
		{
			goto IL_0021;
		}
	}
	{
		// if (CoreServices.InputSystem != null)
		il2cpp_codegen_runtime_class_init_inline(CoreServices_tCB1FB80E338B89BCA07C52C15B876BC6D4B3439B_il2cpp_TypeInfo_var);
		RuntimeObject* L_1;
		L_1 = CoreServices_get_InputSystem_m47147418643299159BF4DF408F768844FDC33943(NULL);
		if (!L_1)
		{
			goto IL_0021;
		}
	}
	{
		// CoreServices.InputSystem.RegisterHandler<IMixedRealitySpeechHandler>(this);
		il2cpp_codegen_runtime_class_init_inline(CoreServices_tCB1FB80E338B89BCA07C52C15B876BC6D4B3439B_il2cpp_TypeInfo_var);
		RuntimeObject* L_2;
		L_2 = CoreServices_get_InputSystem_m47147418643299159BF4DF408F768844FDC33943(NULL);
		NullCheck(L_2);
		GenericInterfaceActionInvoker1< RuntimeObject* >::Invoke(IMixedRealityEventSystem_RegisterHandler_TisIMixedRealitySpeechHandler_tF57481E35DD5D8C0EC2D82DA0E72CDE0058C12B5_m02DD2BB27CFB3B352F1D771B1EB3DDF1A7EB9547_RuntimeMethod_var, L_2, __this);
		// registeredForInput = true;
		__this->___registeredForInput_4 = (bool)1;
	}

IL_0021:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Diagnostics.DiagnosticsSystemVoiceControls::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DiagnosticsSystemVoiceControls_OnDisable_mBB78EBF7F5E2FDBC33A805FF4774FF6F6EAF3EA7 (DiagnosticsSystemVoiceControls_t1997FD3471800D442B69DBD6D9D1FCF7CD521237* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CoreServices_tCB1FB80E338B89BCA07C52C15B876BC6D4B3439B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealityEventSystem_UnregisterHandler_TisIMixedRealitySpeechHandler_tF57481E35DD5D8C0EC2D82DA0E72CDE0058C12B5_m00DB1183F954B0E4F7D51E2D771A39E88F2C2661_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (registeredForInput)
		bool L_0 = __this->___registeredForInput_4;
		if (!L_0)
		{
			goto IL_001a;
		}
	}
	{
		// CoreServices.InputSystem.UnregisterHandler<IMixedRealitySpeechHandler>(this);
		il2cpp_codegen_runtime_class_init_inline(CoreServices_tCB1FB80E338B89BCA07C52C15B876BC6D4B3439B_il2cpp_TypeInfo_var);
		RuntimeObject* L_1;
		L_1 = CoreServices_get_InputSystem_m47147418643299159BF4DF408F768844FDC33943(NULL);
		NullCheck(L_1);
		GenericInterfaceActionInvoker1< RuntimeObject* >::Invoke(IMixedRealityEventSystem_UnregisterHandler_TisIMixedRealitySpeechHandler_tF57481E35DD5D8C0EC2D82DA0E72CDE0058C12B5_m00DB1183F954B0E4F7D51E2D771A39E88F2C2661_RuntimeMethod_var, L_1, __this);
		// registeredForInput = false;
		__this->___registeredForInput_4 = (bool)0;
	}

IL_001a:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Diagnostics.DiagnosticsSystemVoiceControls::Microsoft.MixedReality.Toolkit.Input.IMixedRealitySpeechHandler.OnSpeechKeywordRecognized(Microsoft.MixedReality.Toolkit.Input.SpeechEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DiagnosticsSystemVoiceControls_Microsoft_MixedReality_Toolkit_Input_IMixedRealitySpeechHandler_OnSpeechKeywordRecognized_m6A5EC02A949847379D1B95922EE4CECBC6FC6BE6 (DiagnosticsSystemVoiceControls_t1997FD3471800D442B69DBD6D9D1FCF7CD521237* __this, SpeechEventData_t4424832821FEC4163B9CFCD3A9F457DF930A95BD* ___eventData0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral13DEC32CBB5161D1725B092A6C5860B0FC2ACEC4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCCF6F6A4EBB06FD4DD8996FD9E3735B3D9F97BEF);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	SpeechCommands_t871604E2D92EE8168CBFA26F430CA2584DCF02CC V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// switch (eventData.Command.Keyword.ToLower())
		SpeechEventData_t4424832821FEC4163B9CFCD3A9F457DF930A95BD* L_0 = ___eventData0;
		NullCheck(L_0);
		SpeechCommands_t871604E2D92EE8168CBFA26F430CA2584DCF02CC L_1;
		L_1 = SpeechEventData_get_Command_m55D611C557104EC236CE8D929CFBFA2D37216636_inline(L_0, NULL);
		V_1 = L_1;
		String_t* L_2;
		L_2 = SpeechCommands_get_Keyword_m381228670D38A858F9AE14CBA8D101E7085BA94C((&V_1), NULL);
		NullCheck(L_2);
		String_t* L_3;
		L_3 = String_ToLower_m6191ABA3DC514ED47C10BDA23FD0DDCEAE7ACFBD(L_2, NULL);
		V_0 = L_3;
		String_t* L_4 = V_0;
		bool L_5;
		L_5 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_4, _stringLiteralCCF6F6A4EBB06FD4DD8996FD9E3735B3D9F97BEF, NULL);
		if (L_5)
		{
			goto IL_002f;
		}
	}
	{
		String_t* L_6 = V_0;
		bool L_7;
		L_7 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_6, _stringLiteral13DEC32CBB5161D1725B092A6C5860B0FC2ACEC4, NULL);
		if (L_7)
		{
			goto IL_0036;
		}
	}
	{
		return;
	}

IL_002f:
	{
		// ToggleDiagnostics();
		DiagnosticsSystemVoiceControls_ToggleDiagnostics_m1176C0E44179ED1882CE82C73966303927735984(__this, NULL);
		// break;
		return;
	}

IL_0036:
	{
		// ToggleProfiler();
		DiagnosticsSystemVoiceControls_ToggleProfiler_mD55AECAA10642A8A360D94ACD21C7FFA06790C20(__this, NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Diagnostics.DiagnosticsSystemVoiceControls::ToggleDiagnostics()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DiagnosticsSystemVoiceControls_ToggleDiagnostics_m1176C0E44179ED1882CE82C73966303927735984 (DiagnosticsSystemVoiceControls_t1997FD3471800D442B69DBD6D9D1FCF7CD521237* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CoreServices_tCB1FB80E338B89BCA07C52C15B876BC6D4B3439B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealityDiagnosticsSystem_t3A9CABAFA816AECA574E6D6479A2923557B7E678_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (CoreServices.DiagnosticsSystem != null)
		il2cpp_codegen_runtime_class_init_inline(CoreServices_tCB1FB80E338B89BCA07C52C15B876BC6D4B3439B_il2cpp_TypeInfo_var);
		RuntimeObject* L_0;
		L_0 = CoreServices_get_DiagnosticsSystem_mF195F9C99857B54C8593E143CA604D8D0A4E936C(NULL);
		if (!L_0)
		{
			goto IL_001e;
		}
	}
	{
		// CoreServices.DiagnosticsSystem.ShowDiagnostics = !CoreServices.DiagnosticsSystem.ShowDiagnostics;
		il2cpp_codegen_runtime_class_init_inline(CoreServices_tCB1FB80E338B89BCA07C52C15B876BC6D4B3439B_il2cpp_TypeInfo_var);
		RuntimeObject* L_1;
		L_1 = CoreServices_get_DiagnosticsSystem_mF195F9C99857B54C8593E143CA604D8D0A4E936C(NULL);
		RuntimeObject* L_2;
		L_2 = CoreServices_get_DiagnosticsSystem_mF195F9C99857B54C8593E143CA604D8D0A4E936C(NULL);
		NullCheck(L_2);
		bool L_3;
		L_3 = InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean Microsoft.MixedReality.Toolkit.Diagnostics.IMixedRealityDiagnosticsSystem::get_ShowDiagnostics() */, IMixedRealityDiagnosticsSystem_t3A9CABAFA816AECA574E6D6479A2923557B7E678_il2cpp_TypeInfo_var, L_2);
		NullCheck(L_1);
		InterfaceActionInvoker1< bool >::Invoke(2 /* System.Void Microsoft.MixedReality.Toolkit.Diagnostics.IMixedRealityDiagnosticsSystem::set_ShowDiagnostics(System.Boolean) */, IMixedRealityDiagnosticsSystem_t3A9CABAFA816AECA574E6D6479A2923557B7E678_il2cpp_TypeInfo_var, L_1, (bool)((((int32_t)L_3) == ((int32_t)0))? 1 : 0));
	}

IL_001e:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Diagnostics.DiagnosticsSystemVoiceControls::ToggleProfiler()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DiagnosticsSystemVoiceControls_ToggleProfiler_mD55AECAA10642A8A360D94ACD21C7FFA06790C20 (DiagnosticsSystemVoiceControls_t1997FD3471800D442B69DBD6D9D1FCF7CD521237* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CoreServices_tCB1FB80E338B89BCA07C52C15B876BC6D4B3439B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealityDiagnosticsSystem_t3A9CABAFA816AECA574E6D6479A2923557B7E678_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (CoreServices.DiagnosticsSystem != null)
		il2cpp_codegen_runtime_class_init_inline(CoreServices_tCB1FB80E338B89BCA07C52C15B876BC6D4B3439B_il2cpp_TypeInfo_var);
		RuntimeObject* L_0;
		L_0 = CoreServices_get_DiagnosticsSystem_mF195F9C99857B54C8593E143CA604D8D0A4E936C(NULL);
		if (!L_0)
		{
			goto IL_001e;
		}
	}
	{
		// CoreServices.DiagnosticsSystem.ShowProfiler = !CoreServices.DiagnosticsSystem.ShowProfiler;
		il2cpp_codegen_runtime_class_init_inline(CoreServices_tCB1FB80E338B89BCA07C52C15B876BC6D4B3439B_il2cpp_TypeInfo_var);
		RuntimeObject* L_1;
		L_1 = CoreServices_get_DiagnosticsSystem_mF195F9C99857B54C8593E143CA604D8D0A4E936C(NULL);
		RuntimeObject* L_2;
		L_2 = CoreServices_get_DiagnosticsSystem_mF195F9C99857B54C8593E143CA604D8D0A4E936C(NULL);
		NullCheck(L_2);
		bool L_3;
		L_3 = InterfaceFuncInvoker0< bool >::Invoke(3 /* System.Boolean Microsoft.MixedReality.Toolkit.Diagnostics.IMixedRealityDiagnosticsSystem::get_ShowProfiler() */, IMixedRealityDiagnosticsSystem_t3A9CABAFA816AECA574E6D6479A2923557B7E678_il2cpp_TypeInfo_var, L_2);
		NullCheck(L_1);
		InterfaceActionInvoker1< bool >::Invoke(4 /* System.Void Microsoft.MixedReality.Toolkit.Diagnostics.IMixedRealityDiagnosticsSystem::set_ShowProfiler(System.Boolean) */, IMixedRealityDiagnosticsSystem_t3A9CABAFA816AECA574E6D6479A2923557B7E678_il2cpp_TypeInfo_var, L_1, (bool)((((int32_t)L_3) == ((int32_t)0))? 1 : 0));
	}

IL_001e:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Diagnostics.DiagnosticsSystemVoiceControls::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DiagnosticsSystemVoiceControls__ctor_mD7B3EF2C4248E734949C109BE0CA9209AC18BE5A (DiagnosticsSystemVoiceControls_t1997FD3471800D442B69DBD6D9D1FCF7CD521237* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem::.ctor(Microsoft.MixedReality.Toolkit.IMixedRealityServiceRegistrar,Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsProfile)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityDiagnosticsSystem__ctor_m3B5BF4F5B66577739F6E6E42390A1B9F87B8DF78 (MixedRealityDiagnosticsSystem_t04B619C4E0301FBBC152B0BFA6CE2DB37DB20D3E* __this, RuntimeObject* ___registrar0, MixedRealityDiagnosticsProfile_tF0C607D340096A8CF0E72C813EE76A9CBE288EFC* ___profile1, const RuntimeMethod* method) 
{
	{
		// MixedRealityDiagnosticsProfile profile) : this(profile)
		MixedRealityDiagnosticsProfile_tF0C607D340096A8CF0E72C813EE76A9CBE288EFC* L_0 = ___profile1;
		MixedRealityDiagnosticsSystem__ctor_mE176B133872DFC4B5C6DF36E77C56D85A80663F8(__this, L_0, NULL);
		// Registrar = registrar;
		RuntimeObject* L_1 = ___registrar0;
		BaseCoreSystem_set_Registrar_m5E2AD3BA5AD91A736E0A23357E3720E5D94665A8_inline(__this, L_1, NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem::.ctor(Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsProfile)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityDiagnosticsSystem__ctor_mE176B133872DFC4B5C6DF36E77C56D85A80663F8 (MixedRealityDiagnosticsSystem_t04B619C4E0301FBBC152B0BFA6CE2DB37DB20D3E* __this, MixedRealityDiagnosticsProfile_tF0C607D340096A8CF0E72C813EE76A9CBE288EFC* ___profile0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1EE2FC1E941A5930213C8E0F3A238E9A18A8F1C4);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public override string Name { get; protected set; } = "Mixed Reality Diagnostics System";
		__this->___U3CNameU3Ek__BackingField_21 = _stringLiteral1EE2FC1E941A5930213C8E0F3A238E9A18A8F1C4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CNameU3Ek__BackingField_21), (void*)_stringLiteral1EE2FC1E941A5930213C8E0F3A238E9A18A8F1C4);
		// private float frameSampleRate = 0.1f;
		__this->___frameSampleRate_29 = (0.100000001f);
		// private TextAnchor windowAnchor = TextAnchor.LowerCenter;
		__this->___windowAnchor_33 = 7;
		// private Vector2 windowOffset = new Vector2(0.1f, 0.1f);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_0), (0.100000001f), (0.100000001f), /*hidden argument*/NULL);
		__this->___windowOffset_34 = L_0;
		// private float windowScale = 1.0f;
		__this->___windowScale_35 = (1.0f);
		// private float windowFollowSpeed = 5.0f;
		__this->___windowFollowSpeed_36 = (5.0f);
		// MixedRealityDiagnosticsProfile profile) : base(profile)
		MixedRealityDiagnosticsProfile_tF0C607D340096A8CF0E72C813EE76A9CBE288EFC* L_1 = ___profile0;
		BaseCoreSystem__ctor_mEDDF3036583E0F0C9557443661AAA0D8D316B0CE(__this, L_1, NULL);
		// { }
		return;
	}
}
// System.String Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem::get_Name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* MixedRealityDiagnosticsSystem_get_Name_mD94300028399D64AFB0AF6433D3AF2080838300D (MixedRealityDiagnosticsSystem_t04B619C4E0301FBBC152B0BFA6CE2DB37DB20D3E* __this, const RuntimeMethod* method) 
{
	{
		// public override string Name { get; protected set; } = "Mixed Reality Diagnostics System";
		String_t* L_0 = __this->___U3CNameU3Ek__BackingField_21;
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem::set_Name(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityDiagnosticsSystem_set_Name_mF2B79A331C859176D96B09287FA9CEA1256E8667 (MixedRealityDiagnosticsSystem_t04B619C4E0301FBBC152B0BFA6CE2DB37DB20D3E* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public override string Name { get; protected set; } = "Mixed Reality Diagnostics System";
		String_t* L_0 = ___value0;
		__this->___U3CNameU3Ek__BackingField_21 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CNameU3Ek__BackingField_21), (void*)L_0);
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem::CreateVisualizations()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityDiagnosticsSystem_CreateVisualizations_m29183B9953BEEED01ADA26888F49CED42996B1C5 (MixedRealityDiagnosticsSystem_t04B619C4E0301FBBC152B0BFA6CE2DB37DB20D3E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisDiagnosticsSystemVoiceControls_t1997FD3471800D442B69DBD6D9D1FCF7CD521237_m10E071FD3F2B0C9801B53B6C8CF622BD61B1B02E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisMixedRealityToolkitVisualProfiler_t7EC6FCE39C4246F2C6D408EF28AE145F66EE0CB1_mC9D89951AF59C99E152A8DF0C3922D1481D6E145_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD9955BD188DDF92C3BA106435ECA8C6ED74340BE);
		s_Il2CppMethodInitialized = true;
	}
	{
		// diagnosticVisualizationParent = new GameObject("Diagnostics");
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)il2cpp_codegen_object_new(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		GameObject__ctor_m37D512B05D292F954792225E6C6EEE95293A9B88(L_0, _stringLiteralD9955BD188DDF92C3BA106435ECA8C6ED74340BE, NULL);
		__this->___diagnosticVisualizationParent_22 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___diagnosticVisualizationParent_22), (void*)L_0);
		// diagnosticVisualizationParent.AddComponent<DiagnosticsSystemVoiceControls>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = __this->___diagnosticVisualizationParent_22;
		NullCheck(L_1);
		DiagnosticsSystemVoiceControls_t1997FD3471800D442B69DBD6D9D1FCF7CD521237* L_2;
		L_2 = GameObject_AddComponent_TisDiagnosticsSystemVoiceControls_t1997FD3471800D442B69DBD6D9D1FCF7CD521237_m10E071FD3F2B0C9801B53B6C8CF622BD61B1B02E(L_1, GameObject_AddComponent_TisDiagnosticsSystemVoiceControls_t1997FD3471800D442B69DBD6D9D1FCF7CD521237_m10E071FD3F2B0C9801B53B6C8CF622BD61B1B02E_RuntimeMethod_var);
		// MixedRealityPlayspace.AddChild(diagnosticVisualizationParent.transform);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = __this->___diagnosticVisualizationParent_22;
		NullCheck(L_3);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_3, NULL);
		MixedRealityPlayspace_AddChild_m9CAFA8F0BE6D0765168CD219A69C945A13AB2D09(L_4, NULL);
		// diagnosticVisualizationParent.SetActive(ShowDiagnostics);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5 = __this->___diagnosticVisualizationParent_22;
		bool L_6;
		L_6 = MixedRealityDiagnosticsSystem_get_ShowDiagnostics_mB3491B44811943E1CC389B41FB9F07A8CA2441C8_inline(__this, NULL);
		NullCheck(L_5);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_5, L_6, NULL);
		// visualProfiler = diagnosticVisualizationParent.AddComponent<MixedRealityToolkitVisualProfiler>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7 = __this->___diagnosticVisualizationParent_22;
		NullCheck(L_7);
		MixedRealityToolkitVisualProfiler_t7EC6FCE39C4246F2C6D408EF28AE145F66EE0CB1* L_8;
		L_8 = GameObject_AddComponent_TisMixedRealityToolkitVisualProfiler_t7EC6FCE39C4246F2C6D408EF28AE145F66EE0CB1_mC9D89951AF59C99E152A8DF0C3922D1481D6E145(L_7, GameObject_AddComponent_TisMixedRealityToolkitVisualProfiler_t7EC6FCE39C4246F2C6D408EF28AE145F66EE0CB1_mC9D89951AF59C99E152A8DF0C3922D1481D6E145_RuntimeMethod_var);
		__this->___visualProfiler_23 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___visualProfiler_23), (void*)L_8);
		// visualProfiler.WindowParent = diagnosticVisualizationParent.transform;
		MixedRealityToolkitVisualProfiler_t7EC6FCE39C4246F2C6D408EF28AE145F66EE0CB1* L_9 = __this->___visualProfiler_23;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10 = __this->___diagnosticVisualizationParent_22;
		NullCheck(L_10);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_11;
		L_11 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_10, NULL);
		NullCheck(L_9);
		MixedRealityToolkitVisualProfiler_set_WindowParent_m8C2A383EAE0DAAA01C674D06D274156671480169_inline(L_9, L_11, NULL);
		// visualProfiler.IsVisible = ShowProfiler;
		MixedRealityToolkitVisualProfiler_t7EC6FCE39C4246F2C6D408EF28AE145F66EE0CB1* L_12 = __this->___visualProfiler_23;
		bool L_13;
		L_13 = MixedRealityDiagnosticsSystem_get_ShowProfiler_m1C883793022C60F7F6782263A0C0FBF28096B4D6_inline(__this, NULL);
		NullCheck(L_12);
		MixedRealityToolkitVisualProfiler_set_IsVisible_mD12EBD00C00A703C3E59E7E80F86F7A8256E833E_inline(L_12, L_13, NULL);
		// visualProfiler.FrameInfoVisible = ShowFrameInfo;
		MixedRealityToolkitVisualProfiler_t7EC6FCE39C4246F2C6D408EF28AE145F66EE0CB1* L_14 = __this->___visualProfiler_23;
		bool L_15;
		L_15 = MixedRealityDiagnosticsSystem_get_ShowFrameInfo_mA1805B6839B7B93A77440A68859B4D4ADD556B7C_inline(__this, NULL);
		NullCheck(L_14);
		MixedRealityToolkitVisualProfiler_set_FrameInfoVisible_m349E44503361166137F93098D2E097058558A6C0_inline(L_14, L_15, NULL);
		// visualProfiler.MemoryStatsVisible = ShowMemoryStats;
		MixedRealityToolkitVisualProfiler_t7EC6FCE39C4246F2C6D408EF28AE145F66EE0CB1* L_16 = __this->___visualProfiler_23;
		bool L_17;
		L_17 = MixedRealityDiagnosticsSystem_get_ShowMemoryStats_mC1FDF7701A8AFCF0D1266F45FFB3AA21855F170C_inline(__this, NULL);
		NullCheck(L_16);
		MixedRealityToolkitVisualProfiler_set_MemoryStatsVisible_m0DC3CF9BCE86C9E4B21FF7DF5D36FC945686E0D3_inline(L_16, L_17, NULL);
		// visualProfiler.FrameSampleRate = FrameSampleRate;
		MixedRealityToolkitVisualProfiler_t7EC6FCE39C4246F2C6D408EF28AE145F66EE0CB1* L_18 = __this->___visualProfiler_23;
		float L_19;
		L_19 = MixedRealityDiagnosticsSystem_get_FrameSampleRate_m8AA25308619FD532C0214BF8AF9ED00CFE7F5A12_inline(__this, NULL);
		NullCheck(L_18);
		MixedRealityToolkitVisualProfiler_set_FrameSampleRate_mE9DDDAC9EAF28FFE63B467205125B1DD9082CD18_inline(L_18, L_19, NULL);
		// visualProfiler.WindowAnchor = WindowAnchor;
		MixedRealityToolkitVisualProfiler_t7EC6FCE39C4246F2C6D408EF28AE145F66EE0CB1* L_20 = __this->___visualProfiler_23;
		int32_t L_21;
		L_21 = MixedRealityDiagnosticsSystem_get_WindowAnchor_mB96730CB17FE9BBD05EE53857E014241B3CB7D46_inline(__this, NULL);
		NullCheck(L_20);
		MixedRealityToolkitVisualProfiler_set_WindowAnchor_m86208661CE1734612528C595D195AAF600C5561D_inline(L_20, L_21, NULL);
		// visualProfiler.WindowOffset = WindowOffset;
		MixedRealityToolkitVisualProfiler_t7EC6FCE39C4246F2C6D408EF28AE145F66EE0CB1* L_22 = __this->___visualProfiler_23;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_23;
		L_23 = MixedRealityDiagnosticsSystem_get_WindowOffset_m22D553B3102C444590259B57DF4A565C97B0A551_inline(__this, NULL);
		NullCheck(L_22);
		MixedRealityToolkitVisualProfiler_set_WindowOffset_m37BDE4220F8F35163ABFB18BC4A9856FDDEEDD46_inline(L_22, L_23, NULL);
		// visualProfiler.WindowScale = WindowScale;
		MixedRealityToolkitVisualProfiler_t7EC6FCE39C4246F2C6D408EF28AE145F66EE0CB1* L_24 = __this->___visualProfiler_23;
		float L_25;
		L_25 = MixedRealityDiagnosticsSystem_get_WindowScale_m50AE35DD3A2E06A826FCCA364C5FE727513FD827_inline(__this, NULL);
		NullCheck(L_24);
		MixedRealityToolkitVisualProfiler_set_WindowScale_mFD260895F3171603D38B7EB691DD696DF846EF77(L_24, L_25, NULL);
		// visualProfiler.WindowFollowSpeed = WindowFollowSpeed;
		MixedRealityToolkitVisualProfiler_t7EC6FCE39C4246F2C6D408EF28AE145F66EE0CB1* L_26 = __this->___visualProfiler_23;
		float L_27;
		L_27 = MixedRealityDiagnosticsSystem_get_WindowFollowSpeed_m6EEB483549E7177215D495F3212CB6F3FA11B8D9_inline(__this, NULL);
		NullCheck(L_26);
		MixedRealityToolkitVisualProfiler_set_WindowFollowSpeed_m86941DA1E80182D0F0AF08BD902BA630B85DD3E9(L_26, L_27, NULL);
		// visualProfiler.ShowProfilerDuringMRC = ShowProfilerDuringMRC;
		MixedRealityToolkitVisualProfiler_t7EC6FCE39C4246F2C6D408EF28AE145F66EE0CB1* L_28 = __this->___visualProfiler_23;
		bool L_29;
		L_29 = MixedRealityDiagnosticsSystem_get_ShowProfilerDuringMRC_m187A8E65D9D317AB74C8772005788345C302AC8C_inline(__this, NULL);
		NullCheck(L_28);
		MixedRealityToolkitVisualProfiler_set_ShowProfilerDuringMRC_m98B8FBC4E937810D460B02A257744B12ED0185A2_inline(L_28, L_29, NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem::Initialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityDiagnosticsSystem_Initialize_m3ADB1C604949A37FABE1F657BA09BD0D2D4AB04D (MixedRealityDiagnosticsSystem_t04B619C4E0301FBBC152B0BFA6CE2DB37DB20D3E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DiagnosticsEventData_t567062EB8FA13779F27424928C704B00DC3CBCE7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MixedRealityDiagnosticsProfile_tF0C607D340096A8CF0E72C813EE76A9CBE288EFC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	MixedRealityDiagnosticsProfile_tF0C607D340096A8CF0E72C813EE76A9CBE288EFC* V_0 = NULL;
	{
		// if (!Application.isPlaying) { return; }
		bool L_0;
		L_0 = Application_get_isPlaying_m0B3B501E1093739F8887A0DAC5F61D9CB49CC337(NULL);
		if (L_0)
		{
			goto IL_0008;
		}
	}
	{
		// if (!Application.isPlaying) { return; }
		return;
	}

IL_0008:
	{
		// MixedRealityDiagnosticsProfile profile = ConfigurationProfile as MixedRealityDiagnosticsProfile;
		BaseMixedRealityProfile_tB4FDEF58FFD17796C0DB7241630B71CDF38FA1D4* L_1;
		L_1 = VirtualFuncInvoker0< BaseMixedRealityProfile_tB4FDEF58FFD17796C0DB7241630B71CDF38FA1D4* >::Invoke(22 /* Microsoft.MixedReality.Toolkit.BaseMixedRealityProfile Microsoft.MixedReality.Toolkit.BaseService::get_ConfigurationProfile() */, __this);
		V_0 = ((MixedRealityDiagnosticsProfile_tF0C607D340096A8CF0E72C813EE76A9CBE288EFC*)IsInstClass((RuntimeObject*)L_1, MixedRealityDiagnosticsProfile_tF0C607D340096A8CF0E72C813EE76A9CBE288EFC_il2cpp_TypeInfo_var));
		// if (profile == null) { return; }
		MixedRealityDiagnosticsProfile_tF0C607D340096A8CF0E72C813EE76A9CBE288EFC* L_2 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_2, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_3)
		{
			goto IL_001e;
		}
	}
	{
		// if (profile == null) { return; }
		return;
	}

IL_001e:
	{
		// base.Initialize();
		BaseService_Initialize_m750DCABB0D54C519B59BADDB050699C41BBC4EFA(__this, NULL);
		// eventData = new DiagnosticsEventData(EventSystem.current);
		il2cpp_codegen_runtime_class_init_inline(EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707_il2cpp_TypeInfo_var);
		EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* L_4;
		L_4 = EventSystem_get_current_mD15EA86304E070D175EF359A051A7DB807CA26C0(NULL);
		DiagnosticsEventData_t567062EB8FA13779F27424928C704B00DC3CBCE7* L_5 = (DiagnosticsEventData_t567062EB8FA13779F27424928C704B00DC3CBCE7*)il2cpp_codegen_object_new(DiagnosticsEventData_t567062EB8FA13779F27424928C704B00DC3CBCE7_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		DiagnosticsEventData__ctor_mCB5C79C1F3EDDD6632298D94FD525BDD08C3C650(L_5, L_4, NULL);
		__this->___eventData_30 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___eventData_30), (void*)L_5);
		// ShowDiagnostics = profile.ShowDiagnostics;
		MixedRealityDiagnosticsProfile_tF0C607D340096A8CF0E72C813EE76A9CBE288EFC* L_6 = V_0;
		NullCheck(L_6);
		bool L_7;
		L_7 = MixedRealityDiagnosticsProfile_get_ShowDiagnostics_m944B868C34A40702F44660700DE8E0E4CB692E68_inline(L_6, NULL);
		MixedRealityDiagnosticsSystem_set_ShowDiagnostics_mF961184EC7AE86510D56FC4792B2D6503C3F29A2(__this, L_7, NULL);
		// ShowProfiler = profile.ShowProfiler;
		MixedRealityDiagnosticsProfile_tF0C607D340096A8CF0E72C813EE76A9CBE288EFC* L_8 = V_0;
		NullCheck(L_8);
		bool L_9;
		L_9 = MixedRealityDiagnosticsProfile_get_ShowProfiler_m68156CE4E09E128238BC12DA7923DF359589C06E_inline(L_8, NULL);
		MixedRealityDiagnosticsSystem_set_ShowProfiler_m51716174B1B1F979F2D587385BBB8FB9A0A6FE27(__this, L_9, NULL);
		// ShowFrameInfo = profile.ShowFrameInfo;
		MixedRealityDiagnosticsProfile_tF0C607D340096A8CF0E72C813EE76A9CBE288EFC* L_10 = V_0;
		NullCheck(L_10);
		bool L_11;
		L_11 = MixedRealityDiagnosticsProfile_get_ShowFrameInfo_m1A89AF5B209ADD75AC99497FF65EF1FB777F844F_inline(L_10, NULL);
		MixedRealityDiagnosticsSystem_set_ShowFrameInfo_mBFD55E3FD8739470E3F39C8868B66699F11513FB(__this, L_11, NULL);
		// ShowMemoryStats = profile.ShowMemoryStats;
		MixedRealityDiagnosticsProfile_tF0C607D340096A8CF0E72C813EE76A9CBE288EFC* L_12 = V_0;
		NullCheck(L_12);
		bool L_13;
		L_13 = MixedRealityDiagnosticsProfile_get_ShowMemoryStats_m3BE6E158316BC6F50C74BBCC27C0DAF6D3411D8A_inline(L_12, NULL);
		MixedRealityDiagnosticsSystem_set_ShowMemoryStats_m741D6F1C2DB6C68A81BBAA2A1E2298D85EB46615(__this, L_13, NULL);
		// FrameSampleRate = profile.FrameSampleRate;
		MixedRealityDiagnosticsProfile_tF0C607D340096A8CF0E72C813EE76A9CBE288EFC* L_14 = V_0;
		NullCheck(L_14);
		float L_15;
		L_15 = MixedRealityDiagnosticsProfile_get_FrameSampleRate_mE0E9680CE13E7A763A2F2F655ABE71EEB6258248_inline(L_14, NULL);
		MixedRealityDiagnosticsSystem_set_FrameSampleRate_m81A9838404CA9575F824CC27AAB37DF875BEE9ED(__this, L_15, NULL);
		// WindowAnchor = profile.WindowAnchor;
		MixedRealityDiagnosticsProfile_tF0C607D340096A8CF0E72C813EE76A9CBE288EFC* L_16 = V_0;
		NullCheck(L_16);
		int32_t L_17;
		L_17 = MixedRealityDiagnosticsProfile_get_WindowAnchor_m77A96A92EB7B4F57ED373982FE7BFEF849832C3D_inline(L_16, NULL);
		MixedRealityDiagnosticsSystem_set_WindowAnchor_mA672A4F8BD62ABC29A97154DE163F5F8F4EF2B9C(__this, L_17, NULL);
		// WindowOffset = profile.WindowOffset;
		MixedRealityDiagnosticsProfile_tF0C607D340096A8CF0E72C813EE76A9CBE288EFC* L_18 = V_0;
		NullCheck(L_18);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_19;
		L_19 = MixedRealityDiagnosticsProfile_get_WindowOffset_mFF121E71A3FFD1F474DFBA4997FDA77113475A39_inline(L_18, NULL);
		MixedRealityDiagnosticsSystem_set_WindowOffset_m7B74795B7C7BAC896EA603278FF23E2708DBD94D(__this, L_19, NULL);
		// WindowScale = profile.WindowScale;
		MixedRealityDiagnosticsProfile_tF0C607D340096A8CF0E72C813EE76A9CBE288EFC* L_20 = V_0;
		NullCheck(L_20);
		float L_21;
		L_21 = MixedRealityDiagnosticsProfile_get_WindowScale_m87142F5F3E6ED242E153857CD40CED9C2F5BF94B_inline(L_20, NULL);
		MixedRealityDiagnosticsSystem_set_WindowScale_mC52F734698761A5E7357098709C328202FB0B7BB(__this, L_21, NULL);
		// WindowFollowSpeed = profile.WindowFollowSpeed;
		MixedRealityDiagnosticsProfile_tF0C607D340096A8CF0E72C813EE76A9CBE288EFC* L_22 = V_0;
		NullCheck(L_22);
		float L_23;
		L_23 = MixedRealityDiagnosticsProfile_get_WindowFollowSpeed_m1E07ED22FB7DC35B391825AF1D169BA645D97370_inline(L_22, NULL);
		MixedRealityDiagnosticsSystem_set_WindowFollowSpeed_m0D4DB1E28437FBF40E82D8F3C9C5EFD6D5A6C80D(__this, L_23, NULL);
		// ShowProfilerDuringMRC = profile.ShowProfilerDuringMRC;
		MixedRealityDiagnosticsProfile_tF0C607D340096A8CF0E72C813EE76A9CBE288EFC* L_24 = V_0;
		NullCheck(L_24);
		bool L_25;
		L_25 = MixedRealityDiagnosticsProfile_get_ShowProfilerDuringMRC_m00802FE9C46E506B6FA42358218737A043EBACE6_inline(L_24, NULL);
		MixedRealityDiagnosticsSystem_set_ShowProfilerDuringMRC_m2134CC0F4973441A059983240A6E9914405B04DA(__this, L_25, NULL);
		// CreateVisualizations();
		MixedRealityDiagnosticsSystem_CreateVisualizations_m29183B9953BEEED01ADA26888F49CED42996B1C5(__this, NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem::Destroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityDiagnosticsSystem_Destroy_m0F24B6FB78E9F919550AD745277E196B04CFEC89 (MixedRealityDiagnosticsSystem_t04B619C4E0301FBBC152B0BFA6CE2DB37DB20D3E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (diagnosticVisualizationParent != null)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___diagnosticVisualizationParent_22;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0044;
		}
	}
	{
		// if (Application.isEditor)
		bool L_2;
		L_2 = Application_get_isEditor_m0377DB707B566C8E21DA3CD99963210F6D57D234(NULL);
		if (!L_2)
		{
			goto IL_0022;
		}
	}
	{
		// Object.DestroyImmediate(diagnosticVisualizationParent);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = __this->___diagnosticVisualizationParent_22;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_DestroyImmediate_m8249CABCDF344BE3A67EE765122EBB415DC2BC57(L_3, NULL);
		goto IL_003d;
	}

IL_0022:
	{
		// diagnosticVisualizationParent.transform.DetachChildren();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = __this->___diagnosticVisualizationParent_22;
		NullCheck(L_4);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_4, NULL);
		NullCheck(L_5);
		Transform_DetachChildren_m7E4B3405F2F053B059E76EC1DF0F235EED335D69(L_5, NULL);
		// Object.Destroy(diagnosticVisualizationParent);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6 = __this->___diagnosticVisualizationParent_22;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mFCDAE6333522488F60597AF019EA90BB1207A5AA(L_6, NULL);
	}

IL_003d:
	{
		// diagnosticVisualizationParent = null;
		__this->___diagnosticVisualizationParent_22 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___diagnosticVisualizationParent_22), (void*)(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)NULL);
	}

IL_0044:
	{
		// base.Destroy();
		BaseEventSystem_Destroy_m4763A3BA66E9048BD868B9E9632029E94BE9F451(__this, NULL);
		// }
		return;
	}
}
// Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsProfile Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem::get_DiagnosticsSystemProfile()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MixedRealityDiagnosticsProfile_tF0C607D340096A8CF0E72C813EE76A9CBE288EFC* MixedRealityDiagnosticsSystem_get_DiagnosticsSystemProfile_m9E5F8A5090008D82436B7926AD1715B1A6F5E15A (MixedRealityDiagnosticsSystem_t04B619C4E0301FBBC152B0BFA6CE2DB37DB20D3E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MixedRealityDiagnosticsProfile_tF0C607D340096A8CF0E72C813EE76A9CBE288EFC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (diagnosticsSystemProfile == null)
		MixedRealityDiagnosticsProfile_tF0C607D340096A8CF0E72C813EE76A9CBE288EFC* L_0 = __this->___diagnosticsSystemProfile_24;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_001f;
		}
	}
	{
		// diagnosticsSystemProfile = ConfigurationProfile as MixedRealityDiagnosticsProfile;
		BaseMixedRealityProfile_tB4FDEF58FFD17796C0DB7241630B71CDF38FA1D4* L_2;
		L_2 = VirtualFuncInvoker0< BaseMixedRealityProfile_tB4FDEF58FFD17796C0DB7241630B71CDF38FA1D4* >::Invoke(22 /* Microsoft.MixedReality.Toolkit.BaseMixedRealityProfile Microsoft.MixedReality.Toolkit.BaseService::get_ConfigurationProfile() */, __this);
		__this->___diagnosticsSystemProfile_24 = ((MixedRealityDiagnosticsProfile_tF0C607D340096A8CF0E72C813EE76A9CBE288EFC*)IsInstClass((RuntimeObject*)L_2, MixedRealityDiagnosticsProfile_tF0C607D340096A8CF0E72C813EE76A9CBE288EFC_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&__this->___diagnosticsSystemProfile_24), (void*)((MixedRealityDiagnosticsProfile_tF0C607D340096A8CF0E72C813EE76A9CBE288EFC*)IsInstClass((RuntimeObject*)L_2, MixedRealityDiagnosticsProfile_tF0C607D340096A8CF0E72C813EE76A9CBE288EFC_il2cpp_TypeInfo_var)));
	}

IL_001f:
	{
		// return diagnosticsSystemProfile;
		MixedRealityDiagnosticsProfile_tF0C607D340096A8CF0E72C813EE76A9CBE288EFC* L_3 = __this->___diagnosticsSystemProfile_24;
		return L_3;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem::get_ShowDiagnostics()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MixedRealityDiagnosticsSystem_get_ShowDiagnostics_mB3491B44811943E1CC389B41FB9F07A8CA2441C8 (MixedRealityDiagnosticsSystem_t04B619C4E0301FBBC152B0BFA6CE2DB37DB20D3E* __this, const RuntimeMethod* method) 
{
	{
		// get { return showDiagnostics; }
		bool L_0 = __this->___showDiagnostics_25;
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem::set_ShowDiagnostics(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityDiagnosticsSystem_set_ShowDiagnostics_mF961184EC7AE86510D56FC4792B2D6503C3F29A2 (MixedRealityDiagnosticsSystem_t04B619C4E0301FBBC152B0BFA6CE2DB37DB20D3E* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// if (value != showDiagnostics)
		bool L_0 = ___value0;
		bool L_1 = __this->___showDiagnostics_25;
		if ((((int32_t)L_0) == ((int32_t)L_1)))
		{
			goto IL_0024;
		}
	}
	{
		// showDiagnostics = value;
		bool L_2 = ___value0;
		__this->___showDiagnostics_25 = L_2;
		// if (ShowProfiler)
		bool L_3;
		L_3 = MixedRealityDiagnosticsSystem_get_ShowProfiler_m1C883793022C60F7F6782263A0C0FBF28096B4D6_inline(__this, NULL);
		if (!L_3)
		{
			goto IL_0024;
		}
	}
	{
		// visualProfiler.IsVisible = value;
		MixedRealityToolkitVisualProfiler_t7EC6FCE39C4246F2C6D408EF28AE145F66EE0CB1* L_4 = __this->___visualProfiler_23;
		bool L_5 = ___value0;
		NullCheck(L_4);
		MixedRealityToolkitVisualProfiler_set_IsVisible_mD12EBD00C00A703C3E59E7E80F86F7A8256E833E_inline(L_4, L_5, NULL);
	}

IL_0024:
	{
		// }
		return;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem::get_ShowProfiler()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MixedRealityDiagnosticsSystem_get_ShowProfiler_m1C883793022C60F7F6782263A0C0FBF28096B4D6 (MixedRealityDiagnosticsSystem_t04B619C4E0301FBBC152B0BFA6CE2DB37DB20D3E* __this, const RuntimeMethod* method) 
{
	{
		// return showProfiler;
		bool L_0 = __this->___showProfiler_26;
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem::set_ShowProfiler(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityDiagnosticsSystem_set_ShowProfiler_m51716174B1B1F979F2D587385BBB8FB9A0A6FE27 (MixedRealityDiagnosticsSystem_t04B619C4E0301FBBC152B0BFA6CE2DB37DB20D3E* __this, bool ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (value != showProfiler)
		bool L_0 = ___value0;
		bool L_1 = __this->___showProfiler_26;
		if ((((int32_t)L_0) == ((int32_t)L_1)))
		{
			goto IL_0032;
		}
	}
	{
		// showProfiler = value;
		bool L_2 = ___value0;
		__this->___showProfiler_26 = L_2;
		// if ((visualProfiler != null) && ShowDiagnostics)
		MixedRealityToolkitVisualProfiler_t7EC6FCE39C4246F2C6D408EF28AE145F66EE0CB1* L_3 = __this->___visualProfiler_23;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_3, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_4)
		{
			goto IL_0032;
		}
	}
	{
		bool L_5;
		L_5 = MixedRealityDiagnosticsSystem_get_ShowDiagnostics_mB3491B44811943E1CC389B41FB9F07A8CA2441C8_inline(__this, NULL);
		if (!L_5)
		{
			goto IL_0032;
		}
	}
	{
		// visualProfiler.IsVisible = value;
		MixedRealityToolkitVisualProfiler_t7EC6FCE39C4246F2C6D408EF28AE145F66EE0CB1* L_6 = __this->___visualProfiler_23;
		bool L_7 = ___value0;
		NullCheck(L_6);
		MixedRealityToolkitVisualProfiler_set_IsVisible_mD12EBD00C00A703C3E59E7E80F86F7A8256E833E_inline(L_6, L_7, NULL);
	}

IL_0032:
	{
		// }
		return;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem::get_ShowFrameInfo()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MixedRealityDiagnosticsSystem_get_ShowFrameInfo_mA1805B6839B7B93A77440A68859B4D4ADD556B7C (MixedRealityDiagnosticsSystem_t04B619C4E0301FBBC152B0BFA6CE2DB37DB20D3E* __this, const RuntimeMethod* method) 
{
	{
		// return showFrameInfo;
		bool L_0 = __this->___showFrameInfo_27;
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem::set_ShowFrameInfo(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityDiagnosticsSystem_set_ShowFrameInfo_mBFD55E3FD8739470E3F39C8868B66699F11513FB (MixedRealityDiagnosticsSystem_t04B619C4E0301FBBC152B0BFA6CE2DB37DB20D3E* __this, bool ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (value != showFrameInfo)
		bool L_0 = ___value0;
		bool L_1 = __this->___showFrameInfo_27;
		if ((((int32_t)L_0) == ((int32_t)L_1)))
		{
			goto IL_002a;
		}
	}
	{
		// showFrameInfo = value;
		bool L_2 = ___value0;
		__this->___showFrameInfo_27 = L_2;
		// if (visualProfiler != null)
		MixedRealityToolkitVisualProfiler_t7EC6FCE39C4246F2C6D408EF28AE145F66EE0CB1* L_3 = __this->___visualProfiler_23;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_3, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_4)
		{
			goto IL_002a;
		}
	}
	{
		// visualProfiler.FrameInfoVisible = value;
		MixedRealityToolkitVisualProfiler_t7EC6FCE39C4246F2C6D408EF28AE145F66EE0CB1* L_5 = __this->___visualProfiler_23;
		bool L_6 = ___value0;
		NullCheck(L_5);
		MixedRealityToolkitVisualProfiler_set_FrameInfoVisible_m349E44503361166137F93098D2E097058558A6C0_inline(L_5, L_6, NULL);
	}

IL_002a:
	{
		// }
		return;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem::get_ShowMemoryStats()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MixedRealityDiagnosticsSystem_get_ShowMemoryStats_mC1FDF7701A8AFCF0D1266F45FFB3AA21855F170C (MixedRealityDiagnosticsSystem_t04B619C4E0301FBBC152B0BFA6CE2DB37DB20D3E* __this, const RuntimeMethod* method) 
{
	{
		// return showMemoryStats;
		bool L_0 = __this->___showMemoryStats_28;
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem::set_ShowMemoryStats(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityDiagnosticsSystem_set_ShowMemoryStats_m741D6F1C2DB6C68A81BBAA2A1E2298D85EB46615 (MixedRealityDiagnosticsSystem_t04B619C4E0301FBBC152B0BFA6CE2DB37DB20D3E* __this, bool ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (value != showMemoryStats)
		bool L_0 = ___value0;
		bool L_1 = __this->___showMemoryStats_28;
		if ((((int32_t)L_0) == ((int32_t)L_1)))
		{
			goto IL_002a;
		}
	}
	{
		// showMemoryStats = value;
		bool L_2 = ___value0;
		__this->___showMemoryStats_28 = L_2;
		// if (visualProfiler != null)
		MixedRealityToolkitVisualProfiler_t7EC6FCE39C4246F2C6D408EF28AE145F66EE0CB1* L_3 = __this->___visualProfiler_23;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_3, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_4)
		{
			goto IL_002a;
		}
	}
	{
		// visualProfiler.MemoryStatsVisible = value;
		MixedRealityToolkitVisualProfiler_t7EC6FCE39C4246F2C6D408EF28AE145F66EE0CB1* L_5 = __this->___visualProfiler_23;
		bool L_6 = ___value0;
		NullCheck(L_5);
		MixedRealityToolkitVisualProfiler_set_MemoryStatsVisible_m0DC3CF9BCE86C9E4B21FF7DF5D36FC945686E0D3_inline(L_5, L_6, NULL);
	}

IL_002a:
	{
		// }
		return;
	}
}
// System.Single Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem::get_FrameSampleRate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float MixedRealityDiagnosticsSystem_get_FrameSampleRate_m8AA25308619FD532C0214BF8AF9ED00CFE7F5A12 (MixedRealityDiagnosticsSystem_t04B619C4E0301FBBC152B0BFA6CE2DB37DB20D3E* __this, const RuntimeMethod* method) 
{
	{
		// return frameSampleRate;
		float L_0 = __this->___frameSampleRate_29;
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem::set_FrameSampleRate(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityDiagnosticsSystem_set_FrameSampleRate_m81A9838404CA9575F824CC27AAB37DF875BEE9ED (MixedRealityDiagnosticsSystem_t04B619C4E0301FBBC152B0BFA6CE2DB37DB20D3E* __this, float ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!Mathf.Approximately(frameSampleRate, value))
		float L_0 = __this->___frameSampleRate_29;
		float L_1 = ___value0;
		bool L_2;
		L_2 = Mathf_Approximately_m1C8DD0BB6A2D22A7DCF09AD7F8EE9ABD12D3F620_inline(L_0, L_1, NULL);
		if (L_2)
		{
			goto IL_0034;
		}
	}
	{
		// frameSampleRate = value;
		float L_3 = ___value0;
		__this->___frameSampleRate_29 = L_3;
		// if (visualProfiler != null)
		MixedRealityToolkitVisualProfiler_t7EC6FCE39C4246F2C6D408EF28AE145F66EE0CB1* L_4 = __this->___visualProfiler_23;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_4, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_5)
		{
			goto IL_0034;
		}
	}
	{
		// visualProfiler.FrameSampleRate = frameSampleRate;
		MixedRealityToolkitVisualProfiler_t7EC6FCE39C4246F2C6D408EF28AE145F66EE0CB1* L_6 = __this->___visualProfiler_23;
		float L_7 = __this->___frameSampleRate_29;
		NullCheck(L_6);
		MixedRealityToolkitVisualProfiler_set_FrameSampleRate_mE9DDDAC9EAF28FFE63B467205125B1DD9082CD18_inline(L_6, L_7, NULL);
	}

IL_0034:
	{
		// }
		return;
	}
}
// System.UInt32 Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem::get_SourceId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t MixedRealityDiagnosticsSystem_get_SourceId_m1D734A40D4E0F083C0ECF7EDCF7A11DFC53B0B9D (MixedRealityDiagnosticsSystem_t04B619C4E0301FBBC152B0BFA6CE2DB37DB20D3E* __this, const RuntimeMethod* method) 
{
	{
		// public uint SourceId => (uint)SourceName.GetHashCode();
		String_t* L_0;
		L_0 = MixedRealityDiagnosticsSystem_get_SourceName_m673FA0683DC87170E7EAF3B19BE2D5208D6F14E7(__this, NULL);
		NullCheck(L_0);
		int32_t L_1;
		L_1 = VirtualFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_0);
		return L_1;
	}
}
// System.String Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem::get_SourceName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* MixedRealityDiagnosticsSystem_get_SourceName_m673FA0683DC87170E7EAF3B19BE2D5208D6F14E7 (MixedRealityDiagnosticsSystem_t04B619C4E0301FBBC152B0BFA6CE2DB37DB20D3E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1EE2FC1E941A5930213C8E0F3A238E9A18A8F1C4);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public string SourceName => "Mixed Reality Diagnostics System";
		return _stringLiteral1EE2FC1E941A5930213C8E0F3A238E9A18A8F1C4;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem::Equals(System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MixedRealityDiagnosticsSystem_Equals_mCE6F8EFC6483782AC8752505F9576DA3B7003156 (MixedRealityDiagnosticsSystem_t04B619C4E0301FBBC152B0BFA6CE2DB37DB20D3E* __this, RuntimeObject* ___x0, RuntimeObject* ___y1, const RuntimeMethod* method) 
{
	{
		// public new bool Equals(object x, object y) => false;
		return (bool)0;
	}
}
// System.Int32 Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem::GetHashCode(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MixedRealityDiagnosticsSystem_GetHashCode_mE5CA5D0AD56E5BFDB263113E73AA2D37B0B69F0E (MixedRealityDiagnosticsSystem_t04B619C4E0301FBBC152B0BFA6CE2DB37DB20D3E* __this, RuntimeObject* ___obj0, const RuntimeMethod* method) 
{
	{
		// public int GetHashCode(object obj) => SourceName.GetHashCode();
		String_t* L_0;
		L_0 = MixedRealityDiagnosticsSystem_get_SourceName_m673FA0683DC87170E7EAF3B19BE2D5208D6F14E7(__this, NULL);
		NullCheck(L_0);
		int32_t L_1;
		L_1 = VirtualFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_0);
		return L_1;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem::RaiseDiagnosticsChanged()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityDiagnosticsSystem_RaiseDiagnosticsChanged_m94D3A29DFC681AF0B3EFBFF615D40C93A9CAFA98 (MixedRealityDiagnosticsSystem_t04B619C4E0301FBBC152B0BFA6CE2DB37DB20D3E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseEventSystem_HandleEvent_TisIMixedRealityDiagnosticsHandler_tC7F528443EE424F58E5FA17312F1719942247B17_mA91B2F011F62F383AEB4F3B7EFDD3E1FDD208BC4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MixedRealityDiagnosticsSystem_t04B619C4E0301FBBC152B0BFA6CE2DB37DB20D3E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// eventData.Initialize(this);
		DiagnosticsEventData_t567062EB8FA13779F27424928C704B00DC3CBCE7* L_0 = __this->___eventData_30;
		NullCheck(L_0);
		DiagnosticsEventData_Initialize_m014EE5987904B0838A36AB4AB7B156D731C6C36E(L_0, __this, NULL);
		// HandleEvent(eventData, OnDiagnosticsChanged);
		DiagnosticsEventData_t567062EB8FA13779F27424928C704B00DC3CBCE7* L_1 = __this->___eventData_30;
		il2cpp_codegen_runtime_class_init_inline(MixedRealityDiagnosticsSystem_t04B619C4E0301FBBC152B0BFA6CE2DB37DB20D3E_il2cpp_TypeInfo_var);
		EventFunction_1_t503E94AA3FF5ABC81854E3CA5ACC551D4F43C4FE* L_2 = ((MixedRealityDiagnosticsSystem_t04B619C4E0301FBBC152B0BFA6CE2DB37DB20D3E_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealityDiagnosticsSystem_t04B619C4E0301FBBC152B0BFA6CE2DB37DB20D3E_il2cpp_TypeInfo_var))->___OnDiagnosticsChanged_32;
		GenericVirtualActionInvoker2< BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F*, EventFunction_1_t503E94AA3FF5ABC81854E3CA5ACC551D4F43C4FE* >::Invoke(BaseEventSystem_HandleEvent_TisIMixedRealityDiagnosticsHandler_tC7F528443EE424F58E5FA17312F1719942247B17_mA91B2F011F62F383AEB4F3B7EFDD3E1FDD208BC4_RuntimeMethod_var, __this, L_1, L_2);
		// }
		return;
	}
}
// UnityEngine.TextAnchor Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem::get_WindowAnchor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MixedRealityDiagnosticsSystem_get_WindowAnchor_mB96730CB17FE9BBD05EE53857E014241B3CB7D46 (MixedRealityDiagnosticsSystem_t04B619C4E0301FBBC152B0BFA6CE2DB37DB20D3E* __this, const RuntimeMethod* method) 
{
	{
		// get { return windowAnchor; }
		int32_t L_0 = __this->___windowAnchor_33;
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem::set_WindowAnchor(UnityEngine.TextAnchor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityDiagnosticsSystem_set_WindowAnchor_mA672A4F8BD62ABC29A97154DE163F5F8F4EF2B9C (MixedRealityDiagnosticsSystem_t04B619C4E0301FBBC152B0BFA6CE2DB37DB20D3E* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (value != windowAnchor)
		int32_t L_0 = ___value0;
		int32_t L_1 = __this->___windowAnchor_33;
		if ((((int32_t)L_0) == ((int32_t)L_1)))
		{
			goto IL_002f;
		}
	}
	{
		// windowAnchor = value;
		int32_t L_2 = ___value0;
		__this->___windowAnchor_33 = L_2;
		// if (visualProfiler != null)
		MixedRealityToolkitVisualProfiler_t7EC6FCE39C4246F2C6D408EF28AE145F66EE0CB1* L_3 = __this->___visualProfiler_23;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_3, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_4)
		{
			goto IL_002f;
		}
	}
	{
		// visualProfiler.WindowAnchor = windowAnchor;
		MixedRealityToolkitVisualProfiler_t7EC6FCE39C4246F2C6D408EF28AE145F66EE0CB1* L_5 = __this->___visualProfiler_23;
		int32_t L_6 = __this->___windowAnchor_33;
		NullCheck(L_5);
		MixedRealityToolkitVisualProfiler_set_WindowAnchor_m86208661CE1734612528C595D195AAF600C5561D_inline(L_5, L_6, NULL);
	}

IL_002f:
	{
		// }
		return;
	}
}
// UnityEngine.Vector2 Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem::get_WindowOffset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 MixedRealityDiagnosticsSystem_get_WindowOffset_m22D553B3102C444590259B57DF4A565C97B0A551 (MixedRealityDiagnosticsSystem_t04B619C4E0301FBBC152B0BFA6CE2DB37DB20D3E* __this, const RuntimeMethod* method) 
{
	{
		// get { return windowOffset; }
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = __this->___windowOffset_34;
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem::set_WindowOffset(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityDiagnosticsSystem_set_WindowOffset_m7B74795B7C7BAC896EA603278FF23E2708DBD94D (MixedRealityDiagnosticsSystem_t04B619C4E0301FBBC152B0BFA6CE2DB37DB20D3E* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (value != windowOffset)
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___value0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = __this->___windowOffset_34;
		bool L_2;
		L_2 = Vector2_op_Inequality_mCF3935E28AC7B30B279F07F9321CC56718E1311A_inline(L_0, L_1, NULL);
		if (!L_2)
		{
			goto IL_0034;
		}
	}
	{
		// windowOffset = value;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3 = ___value0;
		__this->___windowOffset_34 = L_3;
		// if (visualProfiler != null)
		MixedRealityToolkitVisualProfiler_t7EC6FCE39C4246F2C6D408EF28AE145F66EE0CB1* L_4 = __this->___visualProfiler_23;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_4, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_5)
		{
			goto IL_0034;
		}
	}
	{
		// visualProfiler.WindowOffset = windowOffset;
		MixedRealityToolkitVisualProfiler_t7EC6FCE39C4246F2C6D408EF28AE145F66EE0CB1* L_6 = __this->___visualProfiler_23;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7 = __this->___windowOffset_34;
		NullCheck(L_6);
		MixedRealityToolkitVisualProfiler_set_WindowOffset_m37BDE4220F8F35163ABFB18BC4A9856FDDEEDD46_inline(L_6, L_7, NULL);
	}

IL_0034:
	{
		// }
		return;
	}
}
// System.Single Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem::get_WindowScale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float MixedRealityDiagnosticsSystem_get_WindowScale_m50AE35DD3A2E06A826FCCA364C5FE727513FD827 (MixedRealityDiagnosticsSystem_t04B619C4E0301FBBC152B0BFA6CE2DB37DB20D3E* __this, const RuntimeMethod* method) 
{
	{
		// get { return windowScale; }
		float L_0 = __this->___windowScale_35;
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem::set_WindowScale(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityDiagnosticsSystem_set_WindowScale_mC52F734698761A5E7357098709C328202FB0B7BB (MixedRealityDiagnosticsSystem_t04B619C4E0301FBBC152B0BFA6CE2DB37DB20D3E* __this, float ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (value != windowScale)
		float L_0 = ___value0;
		float L_1 = __this->___windowScale_35;
		if ((((float)L_0) == ((float)L_1)))
		{
			goto IL_002f;
		}
	}
	{
		// windowScale = value;
		float L_2 = ___value0;
		__this->___windowScale_35 = L_2;
		// if (visualProfiler != null)
		MixedRealityToolkitVisualProfiler_t7EC6FCE39C4246F2C6D408EF28AE145F66EE0CB1* L_3 = __this->___visualProfiler_23;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_3, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_4)
		{
			goto IL_002f;
		}
	}
	{
		// visualProfiler.WindowScale = windowScale;
		MixedRealityToolkitVisualProfiler_t7EC6FCE39C4246F2C6D408EF28AE145F66EE0CB1* L_5 = __this->___visualProfiler_23;
		float L_6 = __this->___windowScale_35;
		NullCheck(L_5);
		MixedRealityToolkitVisualProfiler_set_WindowScale_mFD260895F3171603D38B7EB691DD696DF846EF77(L_5, L_6, NULL);
	}

IL_002f:
	{
		// }
		return;
	}
}
// System.Single Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem::get_WindowFollowSpeed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float MixedRealityDiagnosticsSystem_get_WindowFollowSpeed_m6EEB483549E7177215D495F3212CB6F3FA11B8D9 (MixedRealityDiagnosticsSystem_t04B619C4E0301FBBC152B0BFA6CE2DB37DB20D3E* __this, const RuntimeMethod* method) 
{
	{
		// get { return windowFollowSpeed; }
		float L_0 = __this->___windowFollowSpeed_36;
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem::set_WindowFollowSpeed(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityDiagnosticsSystem_set_WindowFollowSpeed_m0D4DB1E28437FBF40E82D8F3C9C5EFD6D5A6C80D (MixedRealityDiagnosticsSystem_t04B619C4E0301FBBC152B0BFA6CE2DB37DB20D3E* __this, float ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (value != windowFollowSpeed)
		float L_0 = ___value0;
		float L_1 = __this->___windowFollowSpeed_36;
		if ((((float)L_0) == ((float)L_1)))
		{
			goto IL_002f;
		}
	}
	{
		// windowFollowSpeed = value;
		float L_2 = ___value0;
		__this->___windowFollowSpeed_36 = L_2;
		// if (visualProfiler != null)
		MixedRealityToolkitVisualProfiler_t7EC6FCE39C4246F2C6D408EF28AE145F66EE0CB1* L_3 = __this->___visualProfiler_23;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_3, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_4)
		{
			goto IL_002f;
		}
	}
	{
		// visualProfiler.WindowFollowSpeed = windowFollowSpeed;
		MixedRealityToolkitVisualProfiler_t7EC6FCE39C4246F2C6D408EF28AE145F66EE0CB1* L_5 = __this->___visualProfiler_23;
		float L_6 = __this->___windowFollowSpeed_36;
		NullCheck(L_5);
		MixedRealityToolkitVisualProfiler_set_WindowFollowSpeed_m86941DA1E80182D0F0AF08BD902BA630B85DD3E9(L_5, L_6, NULL);
	}

IL_002f:
	{
		// }
		return;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem::get_ShowProfilerDuringMRC()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MixedRealityDiagnosticsSystem_get_ShowProfilerDuringMRC_m187A8E65D9D317AB74C8772005788345C302AC8C (MixedRealityDiagnosticsSystem_t04B619C4E0301FBBC152B0BFA6CE2DB37DB20D3E* __this, const RuntimeMethod* method) 
{
	{
		// get { return showProfilerDuringMRC; }
		bool L_0 = __this->___showProfilerDuringMRC_37;
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem::set_ShowProfilerDuringMRC(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityDiagnosticsSystem_set_ShowProfilerDuringMRC_m2134CC0F4973441A059983240A6E9914405B04DA (MixedRealityDiagnosticsSystem_t04B619C4E0301FBBC152B0BFA6CE2DB37DB20D3E* __this, bool ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (value != showProfilerDuringMRC)
		bool L_0 = ___value0;
		bool L_1 = __this->___showProfilerDuringMRC_37;
		if ((((int32_t)L_0) == ((int32_t)L_1)))
		{
			goto IL_002f;
		}
	}
	{
		// showProfilerDuringMRC = value;
		bool L_2 = ___value0;
		__this->___showProfilerDuringMRC_37 = L_2;
		// if (visualProfiler != null)
		MixedRealityToolkitVisualProfiler_t7EC6FCE39C4246F2C6D408EF28AE145F66EE0CB1* L_3 = __this->___visualProfiler_23;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_3, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_4)
		{
			goto IL_002f;
		}
	}
	{
		// visualProfiler.ShowProfilerDuringMRC = showProfilerDuringMRC;
		MixedRealityToolkitVisualProfiler_t7EC6FCE39C4246F2C6D408EF28AE145F66EE0CB1* L_5 = __this->___visualProfiler_23;
		bool L_6 = __this->___showProfilerDuringMRC_37;
		NullCheck(L_5);
		MixedRealityToolkitVisualProfiler_set_ShowProfilerDuringMRC_m98B8FBC4E937810D460B02A257744B12ED0185A2_inline(L_5, L_6, NULL);
	}

IL_002f:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityDiagnosticsSystem__cctor_m2EF77D4BE107712E79B8E691AE6EDF3DC9889B1B (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventFunction_1_t503E94AA3FF5ABC81854E3CA5ACC551D4F43C4FE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MixedRealityDiagnosticsSystem_t04B619C4E0301FBBC152B0BFA6CE2DB37DB20D3E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3C_cctorU3Eb__64_0_m18389BBDA7D7A0ADF7427094F002C24E981787AB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t6122B532248D673B289A7F458ACB1853ED34F671_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4A6703A3F9CC9C88FFCA9574A1C64091DEAF03F7);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static readonly ProfilerMarker OnDiagnosticsChangedPerfMarker = new ProfilerMarker("[MRTK] MixedRealityDiagnosticsSystem.OnDiagnosticsChanged - Raise event");
		ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD L_0;
		memset((&L_0), 0, sizeof(L_0));
		ProfilerMarker__ctor_mDD68B0A8B71E0301F592AF8891560150E55699C8_inline((&L_0), _stringLiteral4A6703A3F9CC9C88FFCA9574A1C64091DEAF03F7, /*hidden argument*/NULL);
		((MixedRealityDiagnosticsSystem_t04B619C4E0301FBBC152B0BFA6CE2DB37DB20D3E_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealityDiagnosticsSystem_t04B619C4E0301FBBC152B0BFA6CE2DB37DB20D3E_il2cpp_TypeInfo_var))->___OnDiagnosticsChangedPerfMarker_31 = L_0;
		// private static readonly ExecuteEvents.EventFunction<IMixedRealityDiagnosticsHandler> OnDiagnosticsChanged =
		//     delegate (IMixedRealityDiagnosticsHandler handler, BaseEventData eventData)
		//     {
		//         using (OnDiagnosticsChangedPerfMarker.Auto())
		//         {
		//             var diagnosticsEventsData = ExecuteEvents.ValidateEventData<DiagnosticsEventData>(eventData);
		//             handler.OnDiagnosticSettingsChanged(diagnosticsEventsData);
		//         }
		//     };
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t6122B532248D673B289A7F458ACB1853ED34F671_il2cpp_TypeInfo_var);
		U3CU3Ec_t6122B532248D673B289A7F458ACB1853ED34F671* L_1 = ((U3CU3Ec_t6122B532248D673B289A7F458ACB1853ED34F671_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t6122B532248D673B289A7F458ACB1853ED34F671_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		EventFunction_1_t503E94AA3FF5ABC81854E3CA5ACC551D4F43C4FE* L_2 = (EventFunction_1_t503E94AA3FF5ABC81854E3CA5ACC551D4F43C4FE*)il2cpp_codegen_object_new(EventFunction_1_t503E94AA3FF5ABC81854E3CA5ACC551D4F43C4FE_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		EventFunction_1__ctor_m4EE5E96FC3C815241DFDF351A24C553A71298D83(L_2, L_1, (intptr_t)((void*)U3CU3Ec_U3C_cctorU3Eb__64_0_m18389BBDA7D7A0ADF7427094F002C24E981787AB_RuntimeMethod_var), NULL);
		((MixedRealityDiagnosticsSystem_t04B619C4E0301FBBC152B0BFA6CE2DB37DB20D3E_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealityDiagnosticsSystem_t04B619C4E0301FBBC152B0BFA6CE2DB37DB20D3E_il2cpp_TypeInfo_var))->___OnDiagnosticsChanged_32 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&((MixedRealityDiagnosticsSystem_t04B619C4E0301FBBC152B0BFA6CE2DB37DB20D3E_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealityDiagnosticsSystem_t04B619C4E0301FBBC152B0BFA6CE2DB37DB20D3E_il2cpp_TypeInfo_var))->___OnDiagnosticsChanged_32), (void*)L_2);
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
// System.Void Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m32B27BEB95487A78FE46039696F5716600EE8084 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t6122B532248D673B289A7F458ACB1853ED34F671_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t6122B532248D673B289A7F458ACB1853ED34F671* L_0 = (U3CU3Ec_t6122B532248D673B289A7F458ACB1853ED34F671*)il2cpp_codegen_object_new(U3CU3Ec_t6122B532248D673B289A7F458ACB1853ED34F671_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__ctor_m18E934270CFF2505D8159855533689270D283593(L_0, NULL);
		((U3CU3Ec_t6122B532248D673B289A7F458ACB1853ED34F671_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t6122B532248D673B289A7F458ACB1853ED34F671_il2cpp_TypeInfo_var))->___U3CU3E9_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t6122B532248D673B289A7F458ACB1853ED34F671_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t6122B532248D673B289A7F458ACB1853ED34F671_il2cpp_TypeInfo_var))->___U3CU3E9_0), (void*)L_0);
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m18E934270CFF2505D8159855533689270D283593 (U3CU3Ec_t6122B532248D673B289A7F458ACB1853ED34F671* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem/<>c::<.cctor>b__64_0(Microsoft.MixedReality.Toolkit.Diagnostics.IMixedRealityDiagnosticsHandler,UnityEngine.EventSystems.BaseEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_cctorU3Eb__64_0_m18389BBDA7D7A0ADF7427094F002C24E981787AB (U3CU3Ec_t6122B532248D673B289A7F458ACB1853ED34F671* __this, RuntimeObject* ___handler0, BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F* ___eventData1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_ValidateEventData_TisDiagnosticsEventData_t567062EB8FA13779F27424928C704B00DC3CBCE7_m1C36E7FB349B6D7F065D22F383191195E497DDAB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_t74DCF8B83743EE2773ACF182344612A048E2CC59_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealityDiagnosticsHandler_tC7F528443EE424F58E5FA17312F1719942247B17_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MixedRealityDiagnosticsSystem_t04B619C4E0301FBBC152B0BFA6CE2DB37DB20D3E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	AutoScope_tFB983697E28885CB10FFDB92D7EFD0615AEF3139 V_0;
	memset((&V_0), 0, sizeof(V_0));
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD V_1;
	memset((&V_1), 0, sizeof(V_1));
	DiagnosticsEventData_t567062EB8FA13779F27424928C704B00DC3CBCE7* V_2 = NULL;
	{
		// using (OnDiagnosticsChangedPerfMarker.Auto())
		il2cpp_codegen_runtime_class_init_inline(MixedRealityDiagnosticsSystem_t04B619C4E0301FBBC152B0BFA6CE2DB37DB20D3E_il2cpp_TypeInfo_var);
		ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD L_0 = ((MixedRealityDiagnosticsSystem_t04B619C4E0301FBBC152B0BFA6CE2DB37DB20D3E_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealityDiagnosticsSystem_t04B619C4E0301FBBC152B0BFA6CE2DB37DB20D3E_il2cpp_TypeInfo_var))->___OnDiagnosticsChangedPerfMarker_31;
		V_1 = L_0;
		AutoScope_tFB983697E28885CB10FFDB92D7EFD0615AEF3139 L_1;
		L_1 = ProfilerMarker_Auto_m133FA724EB95D16187B37D2C8A501D7E989B1F8D_inline((&V_1), NULL);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_001e:
			{// begin finally (depth: 1)
				AutoScope_Dispose_mED763F3F51261EF8FB79DB32CD06E0A3F6C40481_inline((&V_0), NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			// var diagnosticsEventsData = ExecuteEvents.ValidateEventData<DiagnosticsEventData>(eventData);
			BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F* L_2 = ___eventData1;
			il2cpp_codegen_runtime_class_init_inline(ExecuteEvents_t74DCF8B83743EE2773ACF182344612A048E2CC59_il2cpp_TypeInfo_var);
			DiagnosticsEventData_t567062EB8FA13779F27424928C704B00DC3CBCE7* L_3;
			L_3 = ExecuteEvents_ValidateEventData_TisDiagnosticsEventData_t567062EB8FA13779F27424928C704B00DC3CBCE7_m1C36E7FB349B6D7F065D22F383191195E497DDAB(L_2, ExecuteEvents_ValidateEventData_TisDiagnosticsEventData_t567062EB8FA13779F27424928C704B00DC3CBCE7_m1C36E7FB349B6D7F065D22F383191195E497DDAB_RuntimeMethod_var);
			V_2 = L_3;
			// handler.OnDiagnosticSettingsChanged(diagnosticsEventsData);
			RuntimeObject* L_4 = ___handler0;
			DiagnosticsEventData_t567062EB8FA13779F27424928C704B00DC3CBCE7* L_5 = V_2;
			NullCheck(L_4);
			InterfaceActionInvoker1< DiagnosticsEventData_t567062EB8FA13779F27424928C704B00DC3CBCE7* >::Invoke(0 /* System.Void Microsoft.MixedReality.Toolkit.Diagnostics.IMixedRealityDiagnosticsHandler::OnDiagnosticSettingsChanged(Microsoft.MixedReality.Toolkit.Diagnostics.DiagnosticsEventData) */, IMixedRealityDiagnosticsHandler_tC7F528443EE424F58E5FA17312F1719942247B17_il2cpp_TypeInfo_var, L_4, L_5);
			// }
			goto IL_002c;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_002c:
	{
		// };
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
// UnityEngine.Transform Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::get_WindowParent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* MixedRealityToolkitVisualProfiler_get_WindowParent_mE0FDF64D85504EEFA54D140CB047E2466FE8A429 (MixedRealityToolkitVisualProfiler_t7EC6FCE39C4246F2C6D408EF28AE145F66EE0CB1* __this, const RuntimeMethod* method) 
{
	{
		// public Transform WindowParent { get; set; } = null;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->___U3CWindowParentU3Ek__BackingField_17;
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::set_WindowParent(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityToolkitVisualProfiler_set_WindowParent_m8C2A383EAE0DAAA01C674D06D274156671480169 (MixedRealityToolkitVisualProfiler_t7EC6FCE39C4246F2C6D408EF28AE145F66EE0CB1* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___value0, const RuntimeMethod* method) 
{
	{
		// public Transform WindowParent { get; set; } = null;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = ___value0;
		__this->___U3CWindowParentU3Ek__BackingField_17 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CWindowParentU3Ek__BackingField_17), (void*)L_0);
		return;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::get_IsVisible()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MixedRealityToolkitVisualProfiler_get_IsVisible_m14D428F64ED9C31417C3FBD77716B191138A313E (MixedRealityToolkitVisualProfiler_t7EC6FCE39C4246F2C6D408EF28AE145F66EE0CB1* __this, const RuntimeMethod* method) 
{
	{
		// get { return isVisible; }
		bool L_0 = __this->___isVisible_18;
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::set_IsVisible(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityToolkitVisualProfiler_set_IsVisible_mD12EBD00C00A703C3E59E7E80F86F7A8256E833E (MixedRealityToolkitVisualProfiler_t7EC6FCE39C4246F2C6D408EF28AE145F66EE0CB1* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// set { isVisible = value; }
		bool L_0 = ___value0;
		__this->___isVisible_18 = L_0;
		// set { isVisible = value; }
		return;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::get_ShouldShowProfiler()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MixedRealityToolkitVisualProfiler_get_ShouldShowProfiler_m0F070874EFE4889B9C6EF81ACBEC16E2A182E11A (MixedRealityToolkitVisualProfiler_t7EC6FCE39C4246F2C6D408EF28AE145F66EE0CB1* __this, const RuntimeMethod* method) 
{
	{
		//             (!appCaptureIsCapturingVideo || showProfilerDuringMRC) &&
		// #endif // WINDOWS_UWP
		//             isVisible;
		bool L_0 = __this->___appCaptureIsCapturingVideo_69;
		if (!L_0)
		{
			goto IL_0010;
		}
	}
	{
		bool L_1 = __this->___showProfilerDuringMRC_26;
		if (!L_1)
		{
			goto IL_0017;
		}
	}

IL_0010:
	{
		bool L_2 = __this->___isVisible_18;
		return L_2;
	}

IL_0017:
	{
		return (bool)0;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::get_FrameInfoVisible()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MixedRealityToolkitVisualProfiler_get_FrameInfoVisible_m0983FD2CA0141218E71F765A74E9CDF7D67C7AD8 (MixedRealityToolkitVisualProfiler_t7EC6FCE39C4246F2C6D408EF28AE145F66EE0CB1* __this, const RuntimeMethod* method) 
{
	{
		// get { return frameInfoVisible; }
		bool L_0 = __this->___frameInfoVisible_19;
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::set_FrameInfoVisible(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityToolkitVisualProfiler_set_FrameInfoVisible_m349E44503361166137F93098D2E097058558A6C0 (MixedRealityToolkitVisualProfiler_t7EC6FCE39C4246F2C6D408EF28AE145F66EE0CB1* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// set { frameInfoVisible = value; }
		bool L_0 = ___value0;
		__this->___frameInfoVisible_19 = L_0;
		// set { frameInfoVisible = value; }
		return;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::get_MemoryStatsVisible()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MixedRealityToolkitVisualProfiler_get_MemoryStatsVisible_m06FCC774C89CA1AC1CFD7A29BF5F979321FE3E42 (MixedRealityToolkitVisualProfiler_t7EC6FCE39C4246F2C6D408EF28AE145F66EE0CB1* __this, const RuntimeMethod* method) 
{
	{
		// get { return memoryStatsVisible; }
		bool L_0 = __this->___memoryStatsVisible_20;
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::set_MemoryStatsVisible(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityToolkitVisualProfiler_set_MemoryStatsVisible_m0DC3CF9BCE86C9E4B21FF7DF5D36FC945686E0D3 (MixedRealityToolkitVisualProfiler_t7EC6FCE39C4246F2C6D408EF28AE145F66EE0CB1* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// set { memoryStatsVisible = value; }
		bool L_0 = ___value0;
		__this->___memoryStatsVisible_20 = L_0;
		// set { memoryStatsVisible = value; }
		return;
	}
}
// System.Single Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::get_FrameSampleRate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float MixedRealityToolkitVisualProfiler_get_FrameSampleRate_m3BD98C359D274D36977E832DEE5C42DBF094DDD3 (MixedRealityToolkitVisualProfiler_t7EC6FCE39C4246F2C6D408EF28AE145F66EE0CB1* __this, const RuntimeMethod* method) 
{
	{
		// get { return frameSampleRate; }
		float L_0 = __this->___frameSampleRate_21;
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::set_FrameSampleRate(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityToolkitVisualProfiler_set_FrameSampleRate_mE9DDDAC9EAF28FFE63B467205125B1DD9082CD18 (MixedRealityToolkitVisualProfiler_t7EC6FCE39C4246F2C6D408EF28AE145F66EE0CB1* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		// set { frameSampleRate = value; }
		float L_0 = ___value0;
		__this->___frameSampleRate_21 = L_0;
		// set { frameSampleRate = value; }
		return;
	}
}
// UnityEngine.TextAnchor Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::get_WindowAnchor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MixedRealityToolkitVisualProfiler_get_WindowAnchor_m182F94E97BD9E33F3E97C423402A08A4B14BC50C (MixedRealityToolkitVisualProfiler_t7EC6FCE39C4246F2C6D408EF28AE145F66EE0CB1* __this, const RuntimeMethod* method) 
{
	{
		// get { return windowAnchor; }
		int32_t L_0 = __this->___windowAnchor_22;
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::set_WindowAnchor(UnityEngine.TextAnchor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityToolkitVisualProfiler_set_WindowAnchor_m86208661CE1734612528C595D195AAF600C5561D (MixedRealityToolkitVisualProfiler_t7EC6FCE39C4246F2C6D408EF28AE145F66EE0CB1* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		// set { windowAnchor = value; }
		int32_t L_0 = ___value0;
		__this->___windowAnchor_22 = L_0;
		// set { windowAnchor = value; }
		return;
	}
}
// UnityEngine.Vector2 Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::get_WindowOffset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 MixedRealityToolkitVisualProfiler_get_WindowOffset_m441C100826DCC61605A4657D92996AD1C040EF93 (MixedRealityToolkitVisualProfiler_t7EC6FCE39C4246F2C6D408EF28AE145F66EE0CB1* __this, const RuntimeMethod* method) 
{
	{
		// get { return windowOffset; }
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = __this->___windowOffset_23;
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::set_WindowOffset(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityToolkitVisualProfiler_set_WindowOffset_m37BDE4220F8F35163ABFB18BC4A9856FDDEEDD46 (MixedRealityToolkitVisualProfiler_t7EC6FCE39C4246F2C6D408EF28AE145F66EE0CB1* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___value0, const RuntimeMethod* method) 
{
	{
		// set { windowOffset = value; }
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___value0;
		__this->___windowOffset_23 = L_0;
		// set { windowOffset = value; }
		return;
	}
}
// System.Single Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::get_WindowScale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float MixedRealityToolkitVisualProfiler_get_WindowScale_m5B3994838625D0498F2C2E14D9E832CE0AEA6A05 (MixedRealityToolkitVisualProfiler_t7EC6FCE39C4246F2C6D408EF28AE145F66EE0CB1* __this, const RuntimeMethod* method) 
{
	{
		// get { return windowScale; }
		float L_0 = __this->___windowScale_24;
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::set_WindowScale(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityToolkitVisualProfiler_set_WindowScale_mFD260895F3171603D38B7EB691DD696DF846EF77 (MixedRealityToolkitVisualProfiler_t7EC6FCE39C4246F2C6D408EF28AE145F66EE0CB1* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		// set { windowScale = Mathf.Clamp(value, 0.5f, 5.0f); }
		float L_0 = ___value0;
		float L_1;
		L_1 = Mathf_Clamp_m154E404AF275A3B2EC99ECAA3879B4CB9F0606DC_inline(L_0, (0.5f), (5.0f), NULL);
		__this->___windowScale_24 = L_1;
		// set { windowScale = Mathf.Clamp(value, 0.5f, 5.0f); }
		return;
	}
}
// System.Single Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::get_WindowFollowSpeed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float MixedRealityToolkitVisualProfiler_get_WindowFollowSpeed_m93A26735EB98ACEA80EFAD68ED2317EAB18A27C0 (MixedRealityToolkitVisualProfiler_t7EC6FCE39C4246F2C6D408EF28AE145F66EE0CB1* __this, const RuntimeMethod* method) 
{
	{
		// get { return windowFollowSpeed; }
		float L_0 = __this->___windowFollowSpeed_25;
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::set_WindowFollowSpeed(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityToolkitVisualProfiler_set_WindowFollowSpeed_m86941DA1E80182D0F0AF08BD902BA630B85DD3E9 (MixedRealityToolkitVisualProfiler_t7EC6FCE39C4246F2C6D408EF28AE145F66EE0CB1* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		// set { windowFollowSpeed = Mathf.Abs(value); }
		float L_0 = ___value0;
		float L_1;
		L_1 = fabsf(L_0);
		__this->___windowFollowSpeed_25 = L_1;
		// set { windowFollowSpeed = Mathf.Abs(value); }
		return;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::get_ShowProfilerDuringMRC()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MixedRealityToolkitVisualProfiler_get_ShowProfilerDuringMRC_m2C98D19BBA1FEE8945970A2C807C168DDAFF5483 (MixedRealityToolkitVisualProfiler_t7EC6FCE39C4246F2C6D408EF28AE145F66EE0CB1* __this, const RuntimeMethod* method) 
{
	{
		// get { return showProfilerDuringMRC; }
		bool L_0 = __this->___showProfilerDuringMRC_26;
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::set_ShowProfilerDuringMRC(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityToolkitVisualProfiler_set_ShowProfilerDuringMRC_m98B8FBC4E937810D460B02A257744B12ED0185A2 (MixedRealityToolkitVisualProfiler_t7EC6FCE39C4246F2C6D408EF28AE145F66EE0CB1* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// set { showProfilerDuringMRC = value; }
		bool L_0 = ___value0;
		__this->___showProfilerDuringMRC_26 = L_0;
		// set { showProfilerDuringMRC = value; }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityToolkitVisualProfiler_Reset_m4CBBA7F093094F1626E61E74CC81DCD4FCA8C719 (MixedRealityToolkitVisualProfiler_t7EC6FCE39C4246F2C6D408EF28AE145F66EE0CB1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m0EDA0079FA3617687C4A28623B79A37D618D9CFB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisTextMesh_t7E1981C7B03E50D5CA5A3AD5B0D9BB0AB6EE91F8_mFAD74D91BCACF9C3FAE6960EB58D5C346DDBD9C2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisMeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5_mDF6525BCE37B444313BE0AA2305BDF4EB8B92FE8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2F5DDA9EF7410C3C37C840965AC892E3803E4957);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3C73394BEFC13A1F539275C77FA59F83301065F5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral44710FB5A26187014377E8E1544F56B125E6F4A1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4E8A8460777BA546EF33027F63BAAF6396716FBE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB25CF1C6B74339FBFCE846454A70688CE58C094C);
		s_Il2CppMethodInitialized = true;
	}
	Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* V_0 = NULL;
	MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* V_1 = NULL;
	MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* V_2 = NULL;
	{
		// if (defaultMaterial == null)
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_0 = __this->___defaultMaterial_63;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_005d;
		}
	}
	{
		// defaultMaterial = new Material(Shader.Find("Hidden/Internal-Colored"));
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_2;
		L_2 = Shader_Find_mFF2A8FC042B9CFAA9800679CA674D52859BF3A72(_stringLiteral4E8A8460777BA546EF33027F63BAAF6396716FBE, NULL);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_3 = (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3*)il2cpp_codegen_object_new(Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		Material__ctor_m7FDF47105D66D19591BE505A0C42B0F90D88C9BF(L_3, L_2, NULL);
		__this->___defaultMaterial_63 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___defaultMaterial_63), (void*)L_3);
		// defaultMaterial.SetFloat("_ZWrite", 1.0f);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_4 = __this->___defaultMaterial_63;
		NullCheck(L_4);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_4, _stringLiteralB25CF1C6B74339FBFCE846454A70688CE58C094C, (1.0f), NULL);
		// defaultMaterial.SetFloat("_ZTest", (float)UnityEngine.Rendering.CompareFunction.Disabled);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_5 = __this->___defaultMaterial_63;
		NullCheck(L_5);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_5, _stringLiteral3C73394BEFC13A1F539275C77FA59F83301065F5, (0.0f), NULL);
		// defaultMaterial.renderQueue = 5000;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_6 = __this->___defaultMaterial_63;
		NullCheck(L_6);
		Material_set_renderQueue_mFBB72A781DCCF0D4B85670B597788EC2D02D1C14(L_6, ((int32_t)5000), NULL);
	}

IL_005d:
	{
		// if (defaultInstancedMaterial == null)
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_7 = __this->___defaultInstancedMaterial_64;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_8;
		L_8 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_7, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_8)
		{
			goto IL_00dd;
		}
	}
	{
		// Shader defaultInstancedShader = Shader.Find("Hidden/Instanced-Colored");
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_9;
		L_9 = Shader_Find_mFF2A8FC042B9CFAA9800679CA674D52859BF3A72(_stringLiteral44710FB5A26187014377E8E1544F56B125E6F4A1, NULL);
		V_0 = L_9;
		// if (defaultInstancedShader != null)
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_10 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_11;
		L_11 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_10, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_11)
		{
			goto IL_00d3;
		}
	}
	{
		// defaultInstancedMaterial = new Material(defaultInstancedShader);
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_12 = V_0;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_13 = (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3*)il2cpp_codegen_object_new(Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_il2cpp_TypeInfo_var);
		NullCheck(L_13);
		Material__ctor_m7FDF47105D66D19591BE505A0C42B0F90D88C9BF(L_13, L_12, NULL);
		__this->___defaultInstancedMaterial_64 = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___defaultInstancedMaterial_64), (void*)L_13);
		// defaultInstancedMaterial.enableInstancing = true;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_14 = __this->___defaultInstancedMaterial_64;
		NullCheck(L_14);
		Material_set_enableInstancing_m84BA72A28BCFE94B50535BDE410A539A7CD7AF80(L_14, (bool)1, NULL);
		// defaultInstancedMaterial.SetFloat("_ZWrite", 1.0f);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_15 = __this->___defaultInstancedMaterial_64;
		NullCheck(L_15);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_15, _stringLiteralB25CF1C6B74339FBFCE846454A70688CE58C094C, (1.0f), NULL);
		// defaultInstancedMaterial.SetFloat("_ZTest", (float)UnityEngine.Rendering.CompareFunction.Disabled);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_16 = __this->___defaultInstancedMaterial_64;
		NullCheck(L_16);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_16, _stringLiteral3C73394BEFC13A1F539275C77FA59F83301065F5, (0.0f), NULL);
		// defaultInstancedMaterial.renderQueue = 5000;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_17 = __this->___defaultInstancedMaterial_64;
		NullCheck(L_17);
		Material_set_renderQueue_mFBB72A781DCCF0D4B85670B597788EC2D02D1C14(L_17, ((int32_t)5000), NULL);
		goto IL_00dd;
	}

IL_00d3:
	{
		// Debug.LogWarning("A shader supporting instancing could not be found for the VisualProfiler, falling back to traditional rendering. This may impact performance.");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_mEF15C6B17CE4E1FA7E379CDB82CE40FCD89A3F28(_stringLiteral2F5DDA9EF7410C3C37C840965AC892E3803E4957, NULL);
	}

IL_00dd:
	{
		// if (Application.isPlaying)
		bool L_18;
		L_18 = Application_get_isPlaying_m0B3B501E1093739F8887A0DAC5F61D9CB49CC337(NULL);
		if (!L_18)
		{
			goto IL_01de;
		}
	}
	{
		// backgroundMaterial = new Material(defaultMaterial);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_19 = __this->___defaultMaterial_63;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_20 = (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3*)il2cpp_codegen_object_new(Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_il2cpp_TypeInfo_var);
		NullCheck(L_20);
		Material__ctor_mFCC42FB90257F1E8F7516A8640A79C465A39961C(L_20, L_19, NULL);
		__this->___backgroundMaterial_65 = L_20;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___backgroundMaterial_65), (void*)L_20);
		// foregroundMaterial = new Material(defaultMaterial);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_21 = __this->___defaultMaterial_63;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_22 = (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3*)il2cpp_codegen_object_new(Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_il2cpp_TypeInfo_var);
		NullCheck(L_22);
		Material__ctor_mFCC42FB90257F1E8F7516A8640A79C465A39961C(L_22, L_21, NULL);
		__this->___foregroundMaterial_66 = L_22;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___foregroundMaterial_66), (void*)L_22);
		// defaultMaterial.renderQueue = foregroundMaterial.renderQueue - 1;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_23 = __this->___defaultMaterial_63;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_24 = __this->___foregroundMaterial_66;
		NullCheck(L_24);
		int32_t L_25;
		L_25 = Material_get_renderQueue_mC427C54D2667620CBB845559DA4DA31BE166C757(L_24, NULL);
		NullCheck(L_23);
		Material_set_renderQueue_mFBB72A781DCCF0D4B85670B597788EC2D02D1C14(L_23, ((int32_t)il2cpp_codegen_subtract(L_25, 1)), NULL);
		// backgroundMaterial.renderQueue = defaultMaterial.renderQueue - 1;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_26 = __this->___backgroundMaterial_65;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_27 = __this->___defaultMaterial_63;
		NullCheck(L_27);
		int32_t L_28;
		L_28 = Material_get_renderQueue_mC427C54D2667620CBB845559DA4DA31BE166C757(L_27, NULL);
		NullCheck(L_26);
		Material_set_renderQueue_mFBB72A781DCCF0D4B85670B597788EC2D02D1C14(L_26, ((int32_t)il2cpp_codegen_subtract(L_28, 1)), NULL);
		// MeshRenderer meshRenderer = new GameObject().AddComponent<TextMesh>().GetComponent<MeshRenderer>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_29 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)il2cpp_codegen_object_new(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		NullCheck(L_29);
		GameObject__ctor_m7D0340DE160786E6EFA8DABD39EC3B694DA30AAD(L_29, NULL);
		NullCheck(L_29);
		TextMesh_t7E1981C7B03E50D5CA5A3AD5B0D9BB0AB6EE91F8* L_30;
		L_30 = GameObject_AddComponent_TisTextMesh_t7E1981C7B03E50D5CA5A3AD5B0D9BB0AB6EE91F8_mFAD74D91BCACF9C3FAE6960EB58D5C346DDBD9C2(L_29, GameObject_AddComponent_TisTextMesh_t7E1981C7B03E50D5CA5A3AD5B0D9BB0AB6EE91F8_mFAD74D91BCACF9C3FAE6960EB58D5C346DDBD9C2_RuntimeMethod_var);
		NullCheck(L_30);
		MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_31;
		L_31 = Component_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m0EDA0079FA3617687C4A28623B79A37D618D9CFB(L_30, Component_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m0EDA0079FA3617687C4A28623B79A37D618D9CFB_RuntimeMethod_var);
		V_1 = L_31;
		// textMaterial = new Material(meshRenderer.sharedMaterial);
		MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_32 = V_1;
		NullCheck(L_32);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_33;
		L_33 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_32, NULL);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_34 = (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3*)il2cpp_codegen_object_new(Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_il2cpp_TypeInfo_var);
		NullCheck(L_34);
		Material__ctor_mFCC42FB90257F1E8F7516A8640A79C465A39961C(L_34, L_33, NULL);
		__this->___textMaterial_67 = L_34;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___textMaterial_67), (void*)L_34);
		// textMaterial.renderQueue = defaultMaterial.renderQueue;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_35 = __this->___textMaterial_67;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_36 = __this->___defaultMaterial_63;
		NullCheck(L_36);
		int32_t L_37;
		L_37 = Material_get_renderQueue_mC427C54D2667620CBB845559DA4DA31BE166C757(L_36, NULL);
		NullCheck(L_35);
		Material_set_renderQueue_mFBB72A781DCCF0D4B85670B597788EC2D02D1C14(L_35, L_37, NULL);
		// Destroy(meshRenderer.gameObject);
		MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_38 = V_1;
		NullCheck(L_38);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_39;
		L_39 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_38, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mFCDAE6333522488F60597AF019EA90BB1207A5AA(L_39, NULL);
		// MeshFilter quadMeshFilter = GameObject.CreatePrimitive(PrimitiveType.Quad).GetComponent<MeshFilter>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_40;
		L_40 = GameObject_CreatePrimitive_mE2F848626FE928B6E3810ABFB81867E619BB2507(5, NULL);
		NullCheck(L_40);
		MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* L_41;
		L_41 = GameObject_GetComponent_TisMeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5_mDF6525BCE37B444313BE0AA2305BDF4EB8B92FE8(L_40, GameObject_GetComponent_TisMeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5_mDF6525BCE37B444313BE0AA2305BDF4EB8B92FE8_RuntimeMethod_var);
		V_2 = L_41;
		// if (defaultInstancedMaterial != null)
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_42 = __this->___defaultInstancedMaterial_64;
		bool L_43;
		L_43 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_42, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_43)
		{
			goto IL_01c7;
		}
	}
	{
		// quadMesh = quadMeshFilter.mesh;
		MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* L_44 = V_2;
		NullCheck(L_44);
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_45;
		L_45 = MeshFilter_get_mesh_m13172D7EF6682861971817D0A47EE2BE49FBCB1C(L_44, NULL);
		__this->___quadMesh_68 = L_45;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___quadMesh_68), (void*)L_45);
		// quadMesh.bounds = new Bounds(Vector3.zero, Vector3.one * float.MaxValue);
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_46 = __this->___quadMesh_68;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_47;
		L_47 = Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_48;
		L_48 = Vector3_get_one_mE6A2D5C6578E94268024613B596BF09F990B1260_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_49;
		L_49 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_48, ((std::numeric_limits<float>::max)()), NULL);
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 L_50;
		memset((&L_50), 0, sizeof(L_50));
		Bounds__ctor_mAF7B238B9FBF90C495E5D7951760085A93119C5A((&L_50), L_47, L_49, /*hidden argument*/NULL);
		NullCheck(L_46);
		Mesh_set_bounds_m2E526E9B61ACA77D644C22A9D8EB49583012B54E(L_46, L_50, NULL);
		goto IL_01d3;
	}

IL_01c7:
	{
		// quadMesh = quadMeshFilter.sharedMesh;
		MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* L_51 = V_2;
		NullCheck(L_51);
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_52;
		L_52 = MeshFilter_get_sharedMesh_mE4ED3E7E31C1DE5097E4980DA996E620F7D7CB8C(L_51, NULL);
		__this->___quadMesh_68 = L_52;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___quadMesh_68), (void*)L_52);
	}

IL_01d3:
	{
		// Destroy(quadMeshFilter.gameObject);
		MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* L_53 = V_2;
		NullCheck(L_53);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_54;
		L_54 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_53, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mFCDAE6333522488F60597AF019EA90BB1207A5AA(L_54, NULL);
	}

IL_01de:
	{
		// stopwatch.Reset();
		Stopwatch_tA188A210449E22C07053A7D3014DD182C7369043* L_55 = __this->___stopwatch_55;
		NullCheck(L_55);
		Stopwatch_Reset_mF22DE61FDE7FF5825C750D2F6482B591BDC715FA(L_55, NULL);
		// stopwatch.Start();
		Stopwatch_tA188A210449E22C07053A7D3014DD182C7369043* L_56 = __this->___stopwatch_55;
		NullCheck(L_56);
		Stopwatch_Start_m35906A38C7D336CF9DD35854C7E170D762A55915(L_56, NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityToolkitVisualProfiler_Start_m89E615E5462C62DE49CA708C0A5B58D7EA42D6A2 (MixedRealityToolkitVisualProfiler_t7EC6FCE39C4246F2C6D408EF28AE145F66EE0CB1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t2F6697C5DA7073FCAE212D3900E184AF5BA9E722_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_t75F41BC3985F61E6BFABDD39D82A26CDD4031436_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MixedRealityToolkitVisualProfiler_AppCapture_CapturingChanged_m3302E90EA36DB4775DDE32B59F0E0469C7935539_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypedEventHandler_2_t9B118434C59C99BDDD7ADFCC4DCAA528A1A4123F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WindowsRuntimeMarshal_AddEventHandler_TisTypedEventHandler_2_t9B118434C59C99BDDD7ADFCC4DCAA528A1A4123F_m55FC3180743C4F0A5419F3AADE845DFA8E0447CE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WindowsRuntimeMarshal_t2E440B8ECBDEA6D789E5D53780B0D5446578C9D0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	AppCapture_t053EACB2089D0B11989E1C6810A8B63855CCD518* V_0 = NULL;
	{
		// Reset();
		MixedRealityToolkitVisualProfiler_Reset_m4CBBA7F093094F1626E61E74CC81DCD4FCA8C719(__this, NULL);
		// BuildWindow();
		MixedRealityToolkitVisualProfiler_BuildWindow_mE5AE22B28F867AF56E64C0CF922BA1F09FD84094(__this, NULL);
		// BuildFrameRateStrings();
		MixedRealityToolkitVisualProfiler_BuildFrameRateStrings_mE63481C87E093E2A21C7694B6F7D23F7BEFBD478(__this, NULL);
		// appCapture = AppCapture.GetForCurrentView();
		AppCapture_t053EACB2089D0B11989E1C6810A8B63855CCD518* L_0;
		L_0 = AppCapture_GetForCurrentView_m2CBE83F566727DBF22FD1D0638445979974726B9(NULL);
		__this->___appCapture_70 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___appCapture_70), (void*)L_0);
		// if (appCapture != null)
		AppCapture_t053EACB2089D0B11989E1C6810A8B63855CCD518* L_1 = __this->___appCapture_70;
		if (!L_1)
		{
			goto IL_0068;
		}
	}
	{
		// appCaptureIsCapturingVideo = appCapture.IsCapturingVideo;
		AppCapture_t053EACB2089D0B11989E1C6810A8B63855CCD518* L_2 = __this->___appCapture_70;
		NullCheck(L_2);
		bool L_3;
		L_3 = AppCapture_get_IsCapturingVideo_mFF83D8F3D091E4EF84D0844D7FA8CAB5E695EA59(L_2, NULL);
		__this->___appCaptureIsCapturingVideo_69 = L_3;
		// appCapture.CapturingChanged += AppCapture_CapturingChanged;
		AppCapture_t053EACB2089D0B11989E1C6810A8B63855CCD518* L_4 = __this->___appCapture_70;
		V_0 = L_4;
		AppCapture_t053EACB2089D0B11989E1C6810A8B63855CCD518* L_5 = V_0;
		AppCapture_t053EACB2089D0B11989E1C6810A8B63855CCD518* L_6 = L_5;
		Func_2_t75F41BC3985F61E6BFABDD39D82A26CDD4031436* L_7 = (Func_2_t75F41BC3985F61E6BFABDD39D82A26CDD4031436*)il2cpp_codegen_object_new(Func_2_t75F41BC3985F61E6BFABDD39D82A26CDD4031436_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		Func_2__ctor_mE0D1AFD14BF6864BA8DC74C5DDA7B1322342B794(L_7, L_6, (intptr_t)((void*)GetVirtualMethodInfo(L_6, 5)), NULL);
		AppCapture_t053EACB2089D0B11989E1C6810A8B63855CCD518* L_8 = V_0;
		AppCapture_t053EACB2089D0B11989E1C6810A8B63855CCD518* L_9 = L_8;
		Action_1_t2F6697C5DA7073FCAE212D3900E184AF5BA9E722* L_10 = (Action_1_t2F6697C5DA7073FCAE212D3900E184AF5BA9E722*)il2cpp_codegen_object_new(Action_1_t2F6697C5DA7073FCAE212D3900E184AF5BA9E722_il2cpp_TypeInfo_var);
		NullCheck(L_10);
		Action_1__ctor_mE59785557489C8127A4B1AF2A7281F701BA8152B(L_10, L_9, (intptr_t)((void*)GetVirtualMethodInfo(L_9, 6)), NULL);
		TypedEventHandler_2_t9B118434C59C99BDDD7ADFCC4DCAA528A1A4123F* L_11 = (TypedEventHandler_2_t9B118434C59C99BDDD7ADFCC4DCAA528A1A4123F*)il2cpp_codegen_object_new(TypedEventHandler_2_t9B118434C59C99BDDD7ADFCC4DCAA528A1A4123F_il2cpp_TypeInfo_var);
		NullCheck(L_11);
		TypedEventHandler_2__ctor_mBF8E3C92BBD44B931BBBFC41B7953BFD84DCB918(L_11, __this, (intptr_t)((void*)MixedRealityToolkitVisualProfiler_AppCapture_CapturingChanged_m3302E90EA36DB4775DDE32B59F0E0469C7935539_RuntimeMethod_var), NULL);
		il2cpp_codegen_runtime_class_init_inline(WindowsRuntimeMarshal_t2E440B8ECBDEA6D789E5D53780B0D5446578C9D0_il2cpp_TypeInfo_var);
		WindowsRuntimeMarshal_AddEventHandler_TisTypedEventHandler_2_t9B118434C59C99BDDD7ADFCC4DCAA528A1A4123F_m55FC3180743C4F0A5419F3AADE845DFA8E0447CE(L_7, L_10, L_11, WindowsRuntimeMarshal_AddEventHandler_TisTypedEventHandler_2_t9B118434C59C99BDDD7ADFCC4DCAA528A1A4123F_m55FC3180743C4F0A5419F3AADE845DFA8E0447CE_RuntimeMethod_var);
	}

IL_0068:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityToolkitVisualProfiler_OnDestroy_mF70150A9432A3E4ADC6F320D11AEFAFFD6A08473 (MixedRealityToolkitVisualProfiler_t7EC6FCE39C4246F2C6D408EF28AE145F66EE0CB1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t2F6697C5DA7073FCAE212D3900E184AF5BA9E722_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MixedRealityToolkitVisualProfiler_AppCapture_CapturingChanged_m3302E90EA36DB4775DDE32B59F0E0469C7935539_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypedEventHandler_2_t9B118434C59C99BDDD7ADFCC4DCAA528A1A4123F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WindowsRuntimeMarshal_RemoveEventHandler_TisTypedEventHandler_2_t9B118434C59C99BDDD7ADFCC4DCAA528A1A4123F_mD5720753EC4ED83CBC4D77D986DD31AC38FFEC19_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WindowsRuntimeMarshal_t2E440B8ECBDEA6D789E5D53780B0D5446578C9D0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (appCapture != null)
		AppCapture_t053EACB2089D0B11989E1C6810A8B63855CCD518* L_0 = __this->___appCapture_70;
		if (!L_0)
		{
			goto IL_002b;
		}
	}
	{
		// appCapture.CapturingChanged -= AppCapture_CapturingChanged;
		AppCapture_t053EACB2089D0B11989E1C6810A8B63855CCD518* L_1 = __this->___appCapture_70;
		AppCapture_t053EACB2089D0B11989E1C6810A8B63855CCD518* L_2 = L_1;
		Action_1_t2F6697C5DA7073FCAE212D3900E184AF5BA9E722* L_3 = (Action_1_t2F6697C5DA7073FCAE212D3900E184AF5BA9E722*)il2cpp_codegen_object_new(Action_1_t2F6697C5DA7073FCAE212D3900E184AF5BA9E722_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		Action_1__ctor_mE59785557489C8127A4B1AF2A7281F701BA8152B(L_3, L_2, (intptr_t)((void*)GetVirtualMethodInfo(L_2, 6)), NULL);
		TypedEventHandler_2_t9B118434C59C99BDDD7ADFCC4DCAA528A1A4123F* L_4 = (TypedEventHandler_2_t9B118434C59C99BDDD7ADFCC4DCAA528A1A4123F*)il2cpp_codegen_object_new(TypedEventHandler_2_t9B118434C59C99BDDD7ADFCC4DCAA528A1A4123F_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		TypedEventHandler_2__ctor_mBF8E3C92BBD44B931BBBFC41B7953BFD84DCB918(L_4, __this, (intptr_t)((void*)MixedRealityToolkitVisualProfiler_AppCapture_CapturingChanged_m3302E90EA36DB4775DDE32B59F0E0469C7935539_RuntimeMethod_var), NULL);
		il2cpp_codegen_runtime_class_init_inline(WindowsRuntimeMarshal_t2E440B8ECBDEA6D789E5D53780B0D5446578C9D0_il2cpp_TypeInfo_var);
		WindowsRuntimeMarshal_RemoveEventHandler_TisTypedEventHandler_2_t9B118434C59C99BDDD7ADFCC4DCAA528A1A4123F_mD5720753EC4ED83CBC4D77D986DD31AC38FFEC19(L_3, L_4, WindowsRuntimeMarshal_RemoveEventHandler_TisTypedEventHandler_2_t9B118434C59C99BDDD7ADFCC4DCAA528A1A4123F_mD5720753EC4ED83CBC4D77D986DD31AC38FFEC19_RuntimeMethod_var);
	}

IL_002b:
	{
		// if (window != null)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5 = __this->___window_33;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_6;
		L_6 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_5, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_6)
		{
			goto IL_0049;
		}
	}
	{
		// Destroy(window.gameObject);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7 = __this->___window_33;
		NullCheck(L_7);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8;
		L_8 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_7, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mFCDAE6333522488F60597AF019EA90BB1207A5AA(L_8, NULL);
	}

IL_0049:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::LateUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityToolkitVisualProfiler_LateUpdate_mFADE85CE2ECB6F28DBD014076A4AD764C426D0DC (MixedRealityToolkitVisualProfiler_t7EC6FCE39C4246F2C6D408EF28AE145F66EE0CB1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MixedRealityToolkitVisualProfiler_t7EC6FCE39C4246F2C6D408EF28AE145F66EE0CB1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	AutoScope_tFB983697E28885CB10FFDB92D7EFD0615AEF3139 V_0;
	memset((&V_0), 0, sizeof(V_0));
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD V_1;
	memset((&V_1), 0, sizeof(V_1));
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* V_2 = NULL;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	uint32_t V_7 = 0;
	float V_8 = 0.0f;
	float V_9 = 0.0f;
	int32_t V_10 = 0;
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 V_11;
	memset((&V_11), 0, sizeof(V_11));
	int32_t V_12 = 0;
	uint64_t V_13 = 0;
	uint64_t V_14 = 0;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* G_B6_0 = NULL;
	{
		// if (window == null)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->___window_33;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_000f;
		}
	}
	{
		// return;
		return;
	}

IL_000f:
	{
		// using (LateUpdatePerfMarker.Auto())
		il2cpp_codegen_runtime_class_init_inline(MixedRealityToolkitVisualProfiler_t7EC6FCE39C4246F2C6D408EF28AE145F66EE0CB1_il2cpp_TypeInfo_var);
		ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD L_2 = ((MixedRealityToolkitVisualProfiler_t7EC6FCE39C4246F2C6D408EF28AE145F66EE0CB1_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealityToolkitVisualProfiler_t7EC6FCE39C4246F2C6D408EF28AE145F66EE0CB1_il2cpp_TypeInfo_var))->___LateUpdatePerfMarker_71;
		V_1 = L_2;
		AutoScope_tFB983697E28885CB10FFDB92D7EFD0615AEF3139 L_3;
		L_3 = ProfilerMarker_Auto_m133FA724EB95D16187B37D2C8A501D7E989B1F8D_inline((&V_1), NULL);
		V_0 = L_3;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_04fd:
			{// begin finally (depth: 1)
				AutoScope_Dispose_mED763F3F51261EF8FB79DB32CD06E0A3F6C40481_inline((&V_0), NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				// Transform cameraTransform = CameraCache.Main ? CameraCache.Main.transform : null;
				Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_4;
				L_4 = CameraCache_get_Main_m631CABB7F5A697F4C1D76F7CB02D6791C0DDCB9E(NULL);
				il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
				bool L_5;
				L_5 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_4, NULL);
				if (L_5)
				{
					goto IL_002c_1;
				}
			}
			{
				G_B6_0 = ((Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)(NULL));
				goto IL_0036_1;
			}

IL_002c_1:
			{
				Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_6;
				L_6 = CameraCache_get_Main_m631CABB7F5A697F4C1D76F7CB02D6791C0DDCB9E(NULL);
				NullCheck(L_6);
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7;
				L_7 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_6, NULL);
				G_B6_0 = L_7;
			}

IL_0036_1:
			{
				V_2 = G_B6_0;
				// if (ShouldShowProfiler && cameraTransform != null)
				bool L_8;
				L_8 = MixedRealityToolkitVisualProfiler_get_ShouldShowProfiler_m0F070874EFE4889B9C6EF81ACBEC16E2A182E11A(__this, NULL);
				if (!L_8)
				{
					goto IL_00c2_1;
				}
			}
			{
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9 = V_2;
				il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
				bool L_10;
				L_10 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_9, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
				if (!L_10)
				{
					goto IL_00c2_1;
				}
			}
			{
				// float t = Time.deltaTime * windowFollowSpeed;
				float L_11;
				L_11 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
				float L_12 = __this->___windowFollowSpeed_25;
				V_4 = ((float)il2cpp_codegen_multiply(L_11, L_12));
				// window.position = Vector3.Lerp(window.position, CalculateWindowPosition(cameraTransform), t);
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_13 = __this->___window_33;
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_14 = __this->___window_33;
				NullCheck(L_14);
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
				L_15 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_14, NULL);
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_16 = V_2;
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17;
				L_17 = MixedRealityToolkitVisualProfiler_CalculateWindowPosition_m255B612B878664B02B136651EDBB7AF5B0EA70B2(__this, L_16, NULL);
				float L_18 = V_4;
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19;
				L_19 = Vector3_Lerp_m57EE8D709A93B2B0FF8D499FA2947B1D61CB1FD6_inline(L_15, L_17, L_18, NULL);
				NullCheck(L_13);
				Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_13, L_19, NULL);
				// window.rotation = Quaternion.Slerp(window.rotation, CalculateWindowRotation(cameraTransform), t);
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_20 = __this->___window_33;
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_21 = __this->___window_33;
				NullCheck(L_21);
				Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_22;
				L_22 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_21, NULL);
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_23 = V_2;
				Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_24;
				L_24 = MixedRealityToolkitVisualProfiler_CalculateWindowRotation_m8F0A11C23874611D3A7420943F8F0819F594EDC2(__this, L_23, NULL);
				float L_25 = V_4;
				Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_26;
				L_26 = Quaternion_Slerp_m5FDA8C178E7EB209B43845F73263AFE9C02F3949(L_22, L_24, L_25, NULL);
				NullCheck(L_20);
				Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_20, L_26, NULL);
				// window.localScale = defaultWindowScale * windowScale;
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_27 = __this->___window_33;
				il2cpp_codegen_runtime_class_init_inline(MixedRealityToolkitVisualProfiler_t7EC6FCE39C4246F2C6D408EF28AE145F66EE0CB1_il2cpp_TypeInfo_var);
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_28 = ((MixedRealityToolkitVisualProfiler_t7EC6FCE39C4246F2C6D408EF28AE145F66EE0CB1_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealityToolkitVisualProfiler_t7EC6FCE39C4246F2C6D408EF28AE145F66EE0CB1_il2cpp_TypeInfo_var))->___defaultWindowScale_9;
				float L_29 = __this->___windowScale_24;
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_30;
				L_30 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_28, L_29, NULL);
				NullCheck(L_27);
				Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_27, L_30, NULL);
				// CalculateBackgroundSize();
				MixedRealityToolkitVisualProfiler_CalculateBackgroundSize_m3CC8C0146BF429F0BBBBF9A55C348AC08BD730AE(__this, NULL);
			}

IL_00c2_1:
			{
				// FrameTimingManager.CaptureFrameTimings();
				FrameTimingManager_CaptureFrameTimings_m6EF9F1C3E975FFAC5388857436E134DDDF014ECE(NULL);
				// ++frameCount;
				int32_t L_31 = __this->___frameCount_54;
				__this->___frameCount_54 = ((int32_t)il2cpp_codegen_add(L_31, 1));
				// float elapsedSeconds = stopwatch.ElapsedMilliseconds * 0.001f;
				Stopwatch_tA188A210449E22C07053A7D3014DD182C7369043* L_32 = __this->___stopwatch_55;
				NullCheck(L_32);
				int64_t L_33;
				L_33 = Stopwatch_get_ElapsedMilliseconds_m8D8E60ADEB47D008C06D8E57D28D41EAE07AECBF(L_32, NULL);
				V_3 = ((float)il2cpp_codegen_multiply(((float)L_33), (0.00100000005f)));
				// if (elapsedSeconds >= frameSampleRate)
				float L_34 = V_3;
				float L_35 = __this->___frameSampleRate_21;
				if ((!(((float)L_34) >= ((float)L_35))))
				{
					goto IL_023b_1;
				}
			}
			{
				// int cpuFrameRate = (int)(1.0f / (elapsedSeconds / frameCount));
				float L_36 = V_3;
				int32_t L_37 = __this->___frameCount_54;
				V_5 = il2cpp_codegen_cast_double_to_int<int32_t>(((float)((1.0f)/((float)(L_36/((float)L_37))))));
				// int gpuFrameRate = 0;
				V_6 = 0;
				// uint frameTimingsCount = FrameTimingManager.GetLatestTimings((uint)Mathf.Min(frameCount, maxFrameTimings), frameTimings);
				int32_t L_38 = __this->___frameCount_54;
				il2cpp_codegen_runtime_class_init_inline(MixedRealityToolkitVisualProfiler_t7EC6FCE39C4246F2C6D408EF28AE145F66EE0CB1_il2cpp_TypeInfo_var);
				int32_t L_39 = ((MixedRealityToolkitVisualProfiler_t7EC6FCE39C4246F2C6D408EF28AE145F66EE0CB1_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealityToolkitVisualProfiler_t7EC6FCE39C4246F2C6D408EF28AE145F66EE0CB1_il2cpp_TypeInfo_var))->___maxFrameTimings_6;
				int32_t L_40;
				L_40 = Mathf_Min_mFEAD72DF4C4708B86BF464AB4F5F1468FAD8E784_inline(L_38, L_39, NULL);
				FrameTimingU5BU5D_t32DDC21D000DE3127D5DF845AFEC7B02A0AE390E* L_41 = __this->___frameTimings_56;
				uint32_t L_42;
				L_42 = FrameTimingManager_GetLatestTimings_m60604DC8F0EEE290FA300D2FE4E62351EE90FAA2(L_40, L_41, NULL);
				V_7 = L_42;
				// if (frameTimingsCount != 0)
				uint32_t L_43 = V_7;
				if (!L_43)
				{
					goto IL_0161_1;
				}
			}
			{
				// AverageFrameTiming(frameTimings, frameTimingsCount, out cpuFrameTime, out gpuFrameTime);
				FrameTimingU5BU5D_t32DDC21D000DE3127D5DF845AFEC7B02A0AE390E* L_44 = __this->___frameTimings_56;
				uint32_t L_45 = V_7;
				il2cpp_codegen_runtime_class_init_inline(MixedRealityToolkitVisualProfiler_t7EC6FCE39C4246F2C6D408EF28AE145F66EE0CB1_il2cpp_TypeInfo_var);
				MixedRealityToolkitVisualProfiler_AverageFrameTiming_mA4485AC71E1782351ED9A48C629B525C4190D318(L_44, L_45, (&V_8), (&V_9), NULL);
				// cpuFrameRate = (int)(1.0f / (cpuFrameTime / frameCount));
				float L_46 = V_8;
				int32_t L_47 = __this->___frameCount_54;
				V_5 = il2cpp_codegen_cast_double_to_int<int32_t>(((float)((1.0f)/((float)(L_46/((float)L_47))))));
				// gpuFrameRate = (int)(1.0f / (gpuFrameTime / frameCount));
				float L_48 = V_9;
				int32_t L_49 = __this->___frameCount_54;
				V_6 = il2cpp_codegen_cast_double_to_int<int32_t>(((float)((1.0f)/((float)(L_48/((float)L_49))))));
			}

IL_0161_1:
			{
				// cpuFrameRateText.text = cpuFrameRateStrings[Mathf.Clamp(cpuFrameRate, 0, maxTargetFrameRate)];
				TextMesh_t7E1981C7B03E50D5CA5A3AD5B0D9BB0AB6EE91F8* L_50 = __this->___cpuFrameRateText_35;
				StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_51 = __this->___cpuFrameRateStrings_57;
				int32_t L_52 = V_5;
				il2cpp_codegen_runtime_class_init_inline(MixedRealityToolkitVisualProfiler_t7EC6FCE39C4246F2C6D408EF28AE145F66EE0CB1_il2cpp_TypeInfo_var);
				int32_t L_53 = ((MixedRealityToolkitVisualProfiler_t7EC6FCE39C4246F2C6D408EF28AE145F66EE0CB1_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealityToolkitVisualProfiler_t7EC6FCE39C4246F2C6D408EF28AE145F66EE0CB1_il2cpp_TypeInfo_var))->___maxTargetFrameRate_5;
				int32_t L_54;
				L_54 = Mathf_Clamp_mA48718D9A20D8972EDD41714CEF6BBF864F442EA_inline(L_52, 0, L_53, NULL);
				NullCheck(L_51);
				int32_t L_55 = L_54;
				String_t* L_56 = (L_51)->GetAt(static_cast<il2cpp_array_size_t>(L_55));
				NullCheck(L_50);
				TextMesh_set_text_mDF79D39638ED82797D0B0B3BB9E6B10712F8EA9E(L_50, L_56, NULL);
				// if (gpuFrameRate != 0)
				int32_t L_57 = V_6;
				if (!L_57)
				{
					goto IL_01b4_1;
				}
			}
			{
				// gpuFrameRateText.gameObject.SetActive(true);
				TextMesh_t7E1981C7B03E50D5CA5A3AD5B0D9BB0AB6EE91F8* L_58 = __this->___gpuFrameRateText_36;
				NullCheck(L_58);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_59;
				L_59 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_58, NULL);
				NullCheck(L_59);
				GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_59, (bool)1, NULL);
				// gpuFrameRateText.text = gpuFrameRateStrings[Mathf.Clamp(gpuFrameRate, 0, maxTargetFrameRate)];
				TextMesh_t7E1981C7B03E50D5CA5A3AD5B0D9BB0AB6EE91F8* L_60 = __this->___gpuFrameRateText_36;
				StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_61 = __this->___gpuFrameRateStrings_58;
				int32_t L_62 = V_6;
				il2cpp_codegen_runtime_class_init_inline(MixedRealityToolkitVisualProfiler_t7EC6FCE39C4246F2C6D408EF28AE145F66EE0CB1_il2cpp_TypeInfo_var);
				int32_t L_63 = ((MixedRealityToolkitVisualProfiler_t7EC6FCE39C4246F2C6D408EF28AE145F66EE0CB1_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealityToolkitVisualProfiler_t7EC6FCE39C4246F2C6D408EF28AE145F66EE0CB1_il2cpp_TypeInfo_var))->___maxTargetFrameRate_5;
				int32_t L_64;
				L_64 = Mathf_Clamp_mA48718D9A20D8972EDD41714CEF6BBF864F442EA_inline(L_62, 0, L_63, NULL);
				NullCheck(L_61);
				int32_t L_65 = L_64;
				String_t* L_66 = (L_61)->GetAt(static_cast<il2cpp_array_size_t>(L_65));
				NullCheck(L_60);
				TextMesh_set_text_mDF79D39638ED82797D0B0B3BB9E6B10712F8EA9E(L_60, L_66, NULL);
			}

IL_01b4_1:
			{
				// if (frameInfoVisible)
				bool L_67 = __this->___frameInfoVisible_19;
				if (!L_67)
				{
					goto IL_021e_1;
				}
			}
			{
				// for (int i = frameRange - 1; i > 0; --i)
				il2cpp_codegen_runtime_class_init_inline(MixedRealityToolkitVisualProfiler_t7EC6FCE39C4246F2C6D408EF28AE145F66EE0CB1_il2cpp_TypeInfo_var);
				int32_t L_68 = ((MixedRealityToolkitVisualProfiler_t7EC6FCE39C4246F2C6D408EF28AE145F66EE0CB1_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealityToolkitVisualProfiler_t7EC6FCE39C4246F2C6D408EF28AE145F66EE0CB1_il2cpp_TypeInfo_var))->___frameRange_7;
				V_10 = ((int32_t)il2cpp_codegen_subtract(L_68, 1));
				goto IL_01e9_1;
			}

IL_01c7_1:
			{
				// frameInfoColors[i] = frameInfoColors[i - 1];
				Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_69 = __this->___frameInfoColors_50;
				int32_t L_70 = V_10;
				Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_71 = __this->___frameInfoColors_50;
				int32_t L_72 = V_10;
				NullCheck(L_71);
				int32_t L_73 = ((int32_t)il2cpp_codegen_subtract(L_72, 1));
				Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_74 = (L_71)->GetAt(static_cast<il2cpp_array_size_t>(L_73));
				NullCheck(L_69);
				(L_69)->SetAt(static_cast<il2cpp_array_size_t>(L_70), (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3)L_74);
				// for (int i = frameRange - 1; i > 0; --i)
				int32_t L_75 = V_10;
				V_10 = ((int32_t)il2cpp_codegen_subtract(L_75, 1));
			}

IL_01e9_1:
			{
				// for (int i = frameRange - 1; i > 0; --i)
				int32_t L_76 = V_10;
				if ((((int32_t)L_76) > ((int32_t)0)))
				{
					goto IL_01c7_1;
				}
			}
			{
				// frameInfoColors[0] = CalculateFrameColor(cpuFrameRate);
				Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_77 = __this->___frameInfoColors_50;
				int32_t L_78 = V_5;
				Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_79;
				L_79 = MixedRealityToolkitVisualProfiler_CalculateFrameColor_mDF0F4B8533688C09CD4C96D8F7082865831FD41F(__this, L_78, NULL);
				Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_80;
				L_80 = Color_op_Implicit_m6D1353534AD23E43DFD104850D55C469CFCEF340_inline(L_79, NULL);
				NullCheck(L_77);
				(L_77)->SetAt(static_cast<il2cpp_array_size_t>(0), (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3)L_80);
				// frameInfoPropertyBlock.SetVectorArray(colorID, frameInfoColors);
				MaterialPropertyBlock_t2308669579033A857EFE6E4831909F638B27411D* L_81 = __this->___frameInfoPropertyBlock_51;
				int32_t L_82 = __this->___colorID_52;
				Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_83 = __this->___frameInfoColors_50;
				NullCheck(L_81);
				MaterialPropertyBlock_SetVectorArray_m5C0A3017A7EA9EE5F01295E346EA72D70A8BD682(L_81, L_82, L_83, NULL);
			}

IL_021e_1:
			{
				// frameCount = 0;
				__this->___frameCount_54 = 0;
				// stopwatch.Reset();
				Stopwatch_tA188A210449E22C07053A7D3014DD182C7369043* L_84 = __this->___stopwatch_55;
				NullCheck(L_84);
				Stopwatch_Reset_mF22DE61FDE7FF5825C750D2F6482B591BDC715FA(L_84, NULL);
				// stopwatch.Start();
				Stopwatch_tA188A210449E22C07053A7D3014DD182C7369043* L_85 = __this->___stopwatch_55;
				NullCheck(L_85);
				Stopwatch_Start_m35906A38C7D336CF9DD35854C7E170D762A55915(L_85, NULL);
			}

IL_023b_1:
			{
				// if (ShouldShowProfiler && frameInfoVisible)
				bool L_86;
				L_86 = MixedRealityToolkitVisualProfiler_get_ShouldShowProfiler_m0F070874EFE4889B9C6EF81ACBEC16E2A182E11A(__this, NULL);
				if (!L_86)
				{
					goto IL_031b_1;
				}
			}
			{
				bool L_87 = __this->___frameInfoVisible_19;
				if (!L_87)
				{
					goto IL_031b_1;
				}
			}
			{
				// Matrix4x4 parentLocalToWorldMatrix = window.localToWorldMatrix;
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_88 = __this->___window_33;
				NullCheck(L_88);
				Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_89;
				L_89 = Transform_get_localToWorldMatrix_m5D35188766856338DD21DE756F42277C21719E6D(L_88, NULL);
				V_11 = L_89;
				// if (defaultInstancedMaterial != null && SystemInfo.supportsInstancing)
				Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_90 = __this->___defaultInstancedMaterial_64;
				il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
				bool L_91;
				L_91 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_90, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
				if (!L_91)
				{
					goto IL_02b0_1;
				}
			}
			{
				bool L_92;
				L_92 = SystemInfo_get_supportsInstancing_m1EAB72F7149F96B5B2F6DCE89A489C26FDBB5A75(NULL);
				if (!L_92)
				{
					goto IL_02b0_1;
				}
			}
			{
				// frameInfoPropertyBlock.SetMatrix(parentMatrixID, parentLocalToWorldMatrix);
				MaterialPropertyBlock_t2308669579033A857EFE6E4831909F638B27411D* L_93 = __this->___frameInfoPropertyBlock_51;
				int32_t L_94 = __this->___parentMatrixID_53;
				Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_95 = V_11;
				NullCheck(L_93);
				MaterialPropertyBlock_SetMatrix_mA86792A03023DC1F6B46B06C72D61F3CCE4177AC(L_93, L_94, L_95, NULL);
				// Graphics.DrawMeshInstanced(quadMesh, 0, defaultInstancedMaterial, frameInfoMatrices, frameInfoMatrices.Length, frameInfoPropertyBlock, UnityEngine.Rendering.ShadowCastingMode.Off, false);
				Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_96 = __this->___quadMesh_68;
				Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_97 = __this->___defaultInstancedMaterial_64;
				Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D* L_98 = __this->___frameInfoMatrices_49;
				Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D* L_99 = __this->___frameInfoMatrices_49;
				NullCheck(L_99);
				MaterialPropertyBlock_t2308669579033A857EFE6E4831909F638B27411D* L_100 = __this->___frameInfoPropertyBlock_51;
				il2cpp_codegen_runtime_class_init_inline(Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var);
				Graphics_DrawMeshInstanced_mD70F82A6A14D80B0A41D1C0604D99F3319F909D5(L_96, 0, L_97, L_98, ((int32_t)(((RuntimeArray*)L_99)->max_length)), L_100, 0, (bool)0, NULL);
				goto IL_031b_1;
			}

IL_02b0_1:
			{
				// for (int i = 0; i < frameInfoMatrices.Length; ++i)
				V_12 = 0;
				goto IL_030f_1;
			}

IL_02b5_1:
			{
				// frameInfoPropertyBlock.SetColor(colorID, frameInfoColors[i]);
				MaterialPropertyBlock_t2308669579033A857EFE6E4831909F638B27411D* L_101 = __this->___frameInfoPropertyBlock_51;
				int32_t L_102 = __this->___colorID_52;
				Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_103 = __this->___frameInfoColors_50;
				int32_t L_104 = V_12;
				NullCheck(L_103);
				int32_t L_105 = L_104;
				Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_106 = (L_103)->GetAt(static_cast<il2cpp_array_size_t>(L_105));
				Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_107;
				L_107 = Color_op_Implicit_m04FFC6EBCB0576CD59529546F8FA10F4F71E9005_inline(L_106, NULL);
				NullCheck(L_101);
				MaterialPropertyBlock_SetColor_m2E7CA761D98625E3B3CF380D3EBB2C99908FDFF6(L_101, L_102, L_107, NULL);
				// Graphics.DrawMesh(quadMesh, parentLocalToWorldMatrix * frameInfoMatrices[i], defaultMaterial, 0, null, 0, frameInfoPropertyBlock, false, false, false);
				Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_108 = __this->___quadMesh_68;
				Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_109 = V_11;
				Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D* L_110 = __this->___frameInfoMatrices_49;
				int32_t L_111 = V_12;
				NullCheck(L_110);
				int32_t L_112 = L_111;
				Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_113 = (L_110)->GetAt(static_cast<il2cpp_array_size_t>(L_112));
				Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_114;
				L_114 = Matrix4x4_op_Multiply_m7649669D493400913FF60AFB04B1C19F14E0FDB0(L_109, L_113, NULL);
				Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_115 = __this->___defaultMaterial_63;
				MaterialPropertyBlock_t2308669579033A857EFE6E4831909F638B27411D* L_116 = __this->___frameInfoPropertyBlock_51;
				il2cpp_codegen_runtime_class_init_inline(Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var);
				Graphics_DrawMesh_m88CEF846CECBA000030024B80F94D9D2DE789C5E(L_108, L_114, L_115, 0, (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184*)NULL, 0, L_116, (bool)0, (bool)0, (bool)0, NULL);
				// for (int i = 0; i < frameInfoMatrices.Length; ++i)
				int32_t L_117 = V_12;
				V_12 = ((int32_t)il2cpp_codegen_add(L_117, 1));
			}

IL_030f_1:
			{
				// for (int i = 0; i < frameInfoMatrices.Length; ++i)
				int32_t L_118 = V_12;
				Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D* L_119 = __this->___frameInfoMatrices_49;
				NullCheck(L_119);
				if ((((int32_t)L_118) < ((int32_t)((int32_t)(((RuntimeArray*)L_119)->max_length)))))
				{
					goto IL_02b5_1;
				}
			}

IL_031b_1:
			{
				// if (ShouldShowProfiler && memoryStatsVisible)
				bool L_120;
				L_120 = MixedRealityToolkitVisualProfiler_get_ShouldShowProfiler_m0F070874EFE4889B9C6EF81ACBEC16E2A182E11A(__this, NULL);
				if (!L_120)
				{
					goto IL_049f_1;
				}
			}
			{
				bool L_121 = __this->___memoryStatsVisible_20;
				if (!L_121)
				{
					goto IL_049f_1;
				}
			}
			{
				// ulong limit = AppMemoryUsageLimit;
				il2cpp_codegen_runtime_class_init_inline(MixedRealityToolkitVisualProfiler_t7EC6FCE39C4246F2C6D408EF28AE145F66EE0CB1_il2cpp_TypeInfo_var);
				uint64_t L_122;
				L_122 = MixedRealityToolkitVisualProfiler_get_AppMemoryUsageLimit_m4CE3F459245209FCBF9B09FF20240E19839E811C(NULL);
				V_13 = L_122;
				// if (limit != limitMemoryUsage)
				uint64_t L_123 = V_13;
				uint64_t L_124 = __this->___limitMemoryUsage_62;
				if ((((int64_t)L_123) == ((int64_t)L_124)))
				{
					goto IL_037d_1;
				}
			}
			{
				// if (WillDisplayedMemoryUsageDiffer(limitMemoryUsage, limit, displayedDecimalDigits))
				uint64_t L_125 = __this->___limitMemoryUsage_62;
				uint64_t L_126 = V_13;
				int32_t L_127 = __this->___displayedDecimalDigits_27;
				il2cpp_codegen_runtime_class_init_inline(MixedRealityToolkitVisualProfiler_t7EC6FCE39C4246F2C6D408EF28AE145F66EE0CB1_il2cpp_TypeInfo_var);
				bool L_128;
				L_128 = MixedRealityToolkitVisualProfiler_WillDisplayedMemoryUsageDiffer_m8D02EDA4B096158CD38E7C795768EC3C04486031(L_125, L_126, L_127, NULL);
				if (!L_128)
				{
					goto IL_0375_1;
				}
			}
			{
				// MemoryUsageToString(stringBuffer, displayedDecimalDigits, limitMemoryText, limitMemoryString, limit);
				CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_129 = __this->___stringBuffer_59;
				int32_t L_130 = __this->___displayedDecimalDigits_27;
				TextMesh_t7E1981C7B03E50D5CA5A3AD5B0D9BB0AB6EE91F8* L_131 = __this->___limitMemoryText_40;
				il2cpp_codegen_runtime_class_init_inline(MixedRealityToolkitVisualProfiler_t7EC6FCE39C4246F2C6D408EF28AE145F66EE0CB1_il2cpp_TypeInfo_var);
				String_t* L_132 = ((MixedRealityToolkitVisualProfiler_t7EC6FCE39C4246F2C6D408EF28AE145F66EE0CB1_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealityToolkitVisualProfiler_t7EC6FCE39C4246F2C6D408EF28AE145F66EE0CB1_il2cpp_TypeInfo_var))->___limitMemoryString_14;
				uint64_t L_133 = V_13;
				MixedRealityToolkitVisualProfiler_MemoryUsageToString_m2D656475404316C58FA457222F9543FB685BEEF7(L_129, L_130, L_131, L_132, L_133, NULL);
			}

IL_0375_1:
			{
				// limitMemoryUsage = limit;
				uint64_t L_134 = V_13;
				__this->___limitMemoryUsage_62 = L_134;
			}

IL_037d_1:
			{
				// ulong usage = AppMemoryUsage;
				il2cpp_codegen_runtime_class_init_inline(MixedRealityToolkitVisualProfiler_t7EC6FCE39C4246F2C6D408EF28AE145F66EE0CB1_il2cpp_TypeInfo_var);
				uint64_t L_135;
				L_135 = MixedRealityToolkitVisualProfiler_get_AppMemoryUsage_m487A0C9142CB799301FC402469E1D8814E88DFED(NULL);
				V_14 = L_135;
				// if (usage != memoryUsage)
				uint64_t L_136 = V_14;
				uint64_t L_137 = __this->___memoryUsage_60;
				if ((((int64_t)L_136) == ((int64_t)L_137)))
				{
					goto IL_0406_1;
				}
			}
			{
				// usedAnchor.localScale = new Vector3((float)usage / limitMemoryUsage, usedAnchor.localScale.y, usedAnchor.localScale.z);
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_138 = __this->___usedAnchor_43;
				uint64_t L_139 = V_14;
				uint64_t L_140 = __this->___limitMemoryUsage_62;
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_141 = __this->___usedAnchor_43;
				NullCheck(L_141);
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_142;
				L_142 = Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F(L_141, NULL);
				float L_143 = L_142.___y_3;
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_144 = __this->___usedAnchor_43;
				NullCheck(L_144);
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_145;
				L_145 = Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F(L_144, NULL);
				float L_146 = L_145.___z_4;
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_147;
				memset((&L_147), 0, sizeof(L_147));
				Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_147), ((float)(((float)((double)(uint64_t)L_139))/((float)((double)(uint64_t)L_140)))), L_143, L_146, /*hidden argument*/NULL);
				NullCheck(L_138);
				Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_138, L_147, NULL);
				// if (WillDisplayedMemoryUsageDiffer(memoryUsage, usage, displayedDecimalDigits))
				uint64_t L_148 = __this->___memoryUsage_60;
				uint64_t L_149 = V_14;
				int32_t L_150 = __this->___displayedDecimalDigits_27;
				il2cpp_codegen_runtime_class_init_inline(MixedRealityToolkitVisualProfiler_t7EC6FCE39C4246F2C6D408EF28AE145F66EE0CB1_il2cpp_TypeInfo_var);
				bool L_151;
				L_151 = MixedRealityToolkitVisualProfiler_WillDisplayedMemoryUsageDiffer_m8D02EDA4B096158CD38E7C795768EC3C04486031(L_148, L_149, L_150, NULL);
				if (!L_151)
				{
					goto IL_03fe_1;
				}
			}
			{
				// MemoryUsageToString(stringBuffer, displayedDecimalDigits, usedMemoryText, usedMemoryString, usage);
				CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_152 = __this->___stringBuffer_59;
				int32_t L_153 = __this->___displayedDecimalDigits_27;
				TextMesh_t7E1981C7B03E50D5CA5A3AD5B0D9BB0AB6EE91F8* L_154 = __this->___usedMemoryText_38;
				il2cpp_codegen_runtime_class_init_inline(MixedRealityToolkitVisualProfiler_t7EC6FCE39C4246F2C6D408EF28AE145F66EE0CB1_il2cpp_TypeInfo_var);
				String_t* L_155 = ((MixedRealityToolkitVisualProfiler_t7EC6FCE39C4246F2C6D408EF28AE145F66EE0CB1_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealityToolkitVisualProfiler_t7EC6FCE39C4246F2C6D408EF28AE145F66EE0CB1_il2cpp_TypeInfo_var))->___usedMemoryString_12;
				uint64_t L_156 = V_14;
				MixedRealityToolkitVisualProfiler_MemoryUsageToString_m2D656475404316C58FA457222F9543FB685BEEF7(L_152, L_153, L_154, L_155, L_156, NULL);
			}

IL_03fe_1:
			{
				// memoryUsage = usage;
				uint64_t L_157 = V_14;
				__this->___memoryUsage_60 = L_157;
			}

IL_0406_1:
			{
				// if (memoryUsage > peakMemoryUsage)
				uint64_t L_158 = __this->___memoryUsage_60;
				uint64_t L_159 = __this->___peakMemoryUsage_61;
				if ((!(((uint64_t)L_158) > ((uint64_t)L_159))))
				{
					goto IL_049f_1;
				}
			}
			{
				// peakAnchor.localScale = new Vector3((float)memoryUsage / limitMemoryUsage, peakAnchor.localScale.y, peakAnchor.localScale.z);
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_160 = __this->___peakAnchor_44;
				uint64_t L_161 = __this->___memoryUsage_60;
				uint64_t L_162 = __this->___limitMemoryUsage_62;
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_163 = __this->___peakAnchor_44;
				NullCheck(L_163);
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_164;
				L_164 = Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F(L_163, NULL);
				float L_165 = L_164.___y_3;
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_166 = __this->___peakAnchor_44;
				NullCheck(L_166);
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_167;
				L_167 = Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F(L_166, NULL);
				float L_168 = L_167.___z_4;
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_169;
				memset((&L_169), 0, sizeof(L_169));
				Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_169), ((float)(((float)((double)(uint64_t)L_161))/((float)((double)(uint64_t)L_162)))), L_165, L_168, /*hidden argument*/NULL);
				NullCheck(L_160);
				Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_160, L_169, NULL);
				// if (WillDisplayedMemoryUsageDiffer(peakMemoryUsage, memoryUsage, displayedDecimalDigits))
				uint64_t L_170 = __this->___peakMemoryUsage_61;
				uint64_t L_171 = __this->___memoryUsage_60;
				int32_t L_172 = __this->___displayedDecimalDigits_27;
				il2cpp_codegen_runtime_class_init_inline(MixedRealityToolkitVisualProfiler_t7EC6FCE39C4246F2C6D408EF28AE145F66EE0CB1_il2cpp_TypeInfo_var);
				bool L_173;
				L_173 = MixedRealityToolkitVisualProfiler_WillDisplayedMemoryUsageDiffer_m8D02EDA4B096158CD38E7C795768EC3C04486031(L_170, L_171, L_172, NULL);
				if (!L_173)
				{
					goto IL_0493_1;
				}
			}
			{
				// MemoryUsageToString(stringBuffer, displayedDecimalDigits, peakMemoryText, peakMemoryString, memoryUsage);
				CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_174 = __this->___stringBuffer_59;
				int32_t L_175 = __this->___displayedDecimalDigits_27;
				TextMesh_t7E1981C7B03E50D5CA5A3AD5B0D9BB0AB6EE91F8* L_176 = __this->___peakMemoryText_39;
				il2cpp_codegen_runtime_class_init_inline(MixedRealityToolkitVisualProfiler_t7EC6FCE39C4246F2C6D408EF28AE145F66EE0CB1_il2cpp_TypeInfo_var);
				String_t* L_177 = ((MixedRealityToolkitVisualProfiler_t7EC6FCE39C4246F2C6D408EF28AE145F66EE0CB1_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealityToolkitVisualProfiler_t7EC6FCE39C4246F2C6D408EF28AE145F66EE0CB1_il2cpp_TypeInfo_var))->___peakMemoryString_13;
				uint64_t L_178 = __this->___memoryUsage_60;
				MixedRealityToolkitVisualProfiler_MemoryUsageToString_m2D656475404316C58FA457222F9543FB685BEEF7(L_174, L_175, L_176, L_177, L_178, NULL);
			}

IL_0493_1:
			{
				// peakMemoryUsage = memoryUsage;
				uint64_t L_179 = __this->___memoryUsage_60;
				__this->___peakMemoryUsage_61 = L_179;
			}

IL_049f_1:
			{
				// if (window.gameObject.activeSelf != ShouldShowProfiler)
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_180 = __this->___window_33;
				NullCheck(L_180);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_181;
				L_181 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_180, NULL);
				NullCheck(L_181);
				bool L_182;
				L_182 = GameObject_get_activeSelf_m4F3E5240E138B66AAA080EA30759A3D0517DA368(L_181, NULL);
				bool L_183;
				L_183 = MixedRealityToolkitVisualProfiler_get_ShouldShowProfiler_m0F070874EFE4889B9C6EF81ACBEC16E2A182E11A(__this, NULL);
				if ((((int32_t)L_182) == ((int32_t)L_183)))
				{
					goto IL_04cd_1;
				}
			}
			{
				// window.gameObject.SetActive(ShouldShowProfiler);
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_184 = __this->___window_33;
				NullCheck(L_184);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_185;
				L_185 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_184, NULL);
				bool L_186;
				L_186 = MixedRealityToolkitVisualProfiler_get_ShouldShowProfiler_m0F070874EFE4889B9C6EF81ACBEC16E2A182E11A(__this, NULL);
				NullCheck(L_185);
				GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_185, L_186, NULL);
			}

IL_04cd_1:
			{
				// if (memoryStats.gameObject.activeSelf != memoryStatsVisible)
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_187 = __this->___memoryStats_37;
				NullCheck(L_187);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_188;
				L_188 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_187, NULL);
				NullCheck(L_188);
				bool L_189;
				L_189 = GameObject_get_activeSelf_m4F3E5240E138B66AAA080EA30759A3D0517DA368(L_188, NULL);
				bool L_190 = __this->___memoryStatsVisible_20;
				if ((((int32_t)L_189) == ((int32_t)L_190)))
				{
					goto IL_04fb_1;
				}
			}
			{
				// memoryStats.gameObject.SetActive(memoryStatsVisible);
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_191 = __this->___memoryStats_37;
				NullCheck(L_191);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_192;
				L_192 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_191, NULL);
				bool L_193 = __this->___memoryStatsVisible_20;
				NullCheck(L_192);
				GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_192, L_193, NULL);
			}

IL_04fb_1:
			{
				// }
				goto IL_050b;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_050b:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::AppCapture_CapturingChanged(Windows.Media.Capture.AppCapture,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityToolkitVisualProfiler_AppCapture_CapturingChanged_m3302E90EA36DB4775DDE32B59F0E0469C7935539 (MixedRealityToolkitVisualProfiler_t7EC6FCE39C4246F2C6D408EF28AE145F66EE0CB1* __this, AppCapture_t053EACB2089D0B11989E1C6810A8B63855CCD518* ___sender0, RuntimeObject* ___args1, const RuntimeMethod* method) 
{
	{
		// private void AppCapture_CapturingChanged(AppCapture sender, object args) => appCaptureIsCapturingVideo = sender.IsCapturingVideo;
		AppCapture_t053EACB2089D0B11989E1C6810A8B63855CCD518* L_0 = ___sender0;
		NullCheck(L_0);
		bool L_1;
		L_1 = AppCapture_get_IsCapturingVideo_mFF83D8F3D091E4EF84D0844D7FA8CAB5E695EA59(L_0, NULL);
		__this->___appCaptureIsCapturingVideo_69 = L_1;
		return;
	}
}
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::CalculateWindowPosition(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 MixedRealityToolkitVisualProfiler_CalculateWindowPosition_m255B612B878664B02B136651EDBB7AF5B0EA70B2 (MixedRealityToolkitVisualProfiler_t7EC6FCE39C4246F2C6D408EF28AE145F66EE0CB1* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___cameraTransform0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MixedRealityToolkitVisualProfiler_t7EC6FCE39C4246F2C6D408EF28AE145F66EE0CB1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	AutoScope_tFB983697E28885CB10FFDB92D7EFD0615AEF3139 V_0;
	memset((&V_0), 0, sizeof(V_0));
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD V_1;
	memset((&V_1), 0, sizeof(V_1));
	float V_2 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_3;
	memset((&V_3), 0, sizeof(V_3));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_4;
	memset((&V_4), 0, sizeof(V_4));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_5;
	memset((&V_5), 0, sizeof(V_5));
	float V_6 = 0.0f;
	int32_t V_7 = 0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_8;
	memset((&V_8), 0, sizeof(V_8));
	float G_B3_0 = 0.0f;
	float G_B2_0 = 0.0f;
	float G_B4_0 = 0.0f;
	float G_B4_1 = 0.0f;
	{
		// using (CalculateWindowPositionPerfMarker.Auto())
		il2cpp_codegen_runtime_class_init_inline(MixedRealityToolkitVisualProfiler_t7EC6FCE39C4246F2C6D408EF28AE145F66EE0CB1_il2cpp_TypeInfo_var);
		ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD L_0 = ((MixedRealityToolkitVisualProfiler_t7EC6FCE39C4246F2C6D408EF28AE145F66EE0CB1_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealityToolkitVisualProfiler_t7EC6FCE39C4246F2C6D408EF28AE145F66EE0CB1_il2cpp_TypeInfo_var))->___CalculateWindowPositionPerfMarker_73;
		V_1 = L_0;
		AutoScope_tFB983697E28885CB10FFDB92D7EFD0615AEF3139 L_1;
		L_1 = ProfilerMarker_Auto_m133FA724EB95D16187B37D2C8A501D7E989B1F8D_inline((&V_1), NULL);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0147:
			{// begin finally (depth: 1)
				AutoScope_Dispose_mED763F3F51261EF8FB79DB32CD06E0A3F6C40481_inline((&V_0), NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				//                 float windowDistance =
				// #if WINDOWS_UWP
				//                     Mathf.Max(16.0f / (appCaptureIsCapturingVideo ? previousFieldOfView : previousFieldOfView = CameraCache.Main.fieldOfView), Mathf.Max(CameraCache.Main.nearClipPlane, 0.5f));
				bool L_2 = __this->___appCaptureIsCapturingVideo_69;
				G_B2_0 = (16.0f);
				if (L_2)
				{
					G_B3_0 = (16.0f);
					goto IL_0032_1;
				}
			}
			{
				Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_3;
				L_3 = CameraCache_get_Main_m631CABB7F5A697F4C1D76F7CB02D6791C0DDCB9E(NULL);
				NullCheck(L_3);
				float L_4;
				L_4 = Camera_get_fieldOfView_m9A93F17BBF89F496AE231C21817AFD1C1E833FBB(L_3, NULL);
				float L_5 = L_4;
				V_6 = L_5;
				__this->___previousFieldOfView_72 = L_5;
				float L_6 = V_6;
				G_B4_0 = L_6;
				G_B4_1 = G_B2_0;
				goto IL_0038_1;
			}

IL_0032_1:
			{
				float L_7 = __this->___previousFieldOfView_72;
				G_B4_0 = L_7;
				G_B4_1 = G_B3_0;
			}

IL_0038_1:
			{
				Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_8;
				L_8 = CameraCache_get_Main_m631CABB7F5A697F4C1D76F7CB02D6791C0DDCB9E(NULL);
				NullCheck(L_8);
				float L_9;
				L_9 = Camera_get_nearClipPlane_m5E8FAF84326E3192CB036BD29DCCDAF6A9861013(L_8, NULL);
				float L_10;
				L_10 = Mathf_Max_mA9DCA91E87D6D27034F56ABA52606A9090406016_inline(L_9, (0.5f), NULL);
				float L_11;
				L_11 = Mathf_Max_mA9DCA91E87D6D27034F56ABA52606A9090406016_inline(((float)(G_B4_1/G_B4_0)), L_10, NULL);
				V_2 = L_11;
				// Vector3 position = cameraTransform.position + (cameraTransform.forward * windowDistance);
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_12 = ___cameraTransform0;
				NullCheck(L_12);
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
				L_13 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_12, NULL);
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_14 = ___cameraTransform0;
				NullCheck(L_14);
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
				L_15 = Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F(L_14, NULL);
				float L_16 = V_2;
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17;
				L_17 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_15, L_16, NULL);
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18;
				L_18 = Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline(L_13, L_17, NULL);
				V_3 = L_18;
				// Vector3 horizontalOffset = cameraTransform.right * windowOffset.x;
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_19 = ___cameraTransform0;
				NullCheck(L_19);
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20;
				L_20 = Transform_get_right_mC6DC057C23313802E2186A9E0DB760D795A758A4(L_19, NULL);
				Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_21 = (&__this->___windowOffset_23);
				float L_22 = L_21->___x_0;
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23;
				L_23 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_20, L_22, NULL);
				V_4 = L_23;
				// Vector3 verticalOffset = cameraTransform.up * windowOffset.y;
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_24 = ___cameraTransform0;
				NullCheck(L_24);
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_25;
				L_25 = Transform_get_up_mE47A9D9D96422224DD0539AA5524DA5440145BB2(L_24, NULL);
				Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_26 = (&__this->___windowOffset_23);
				float L_27 = L_26->___y_1;
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_28;
				L_28 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_25, L_27, NULL);
				V_5 = L_28;
				// switch (windowAnchor)
				int32_t L_29 = __this->___windowAnchor_22;
				V_7 = L_29;
				int32_t L_30 = V_7;
				switch (L_30)
				{
					case 0:
					{
						goto IL_00d0_1;
					}
					case 1:
					{
						goto IL_00e2_1;
					}
					case 2:
					{
						goto IL_00ed_1;
					}
					case 3:
					{
						goto IL_00ff_1;
					}
					case 4:
					{
						goto IL_0142_1;
					}
					case 5:
					{
						goto IL_010a_1;
					}
					case 6:
					{
						goto IL_0115_1;
					}
					case 7:
					{
						goto IL_0127_1;
					}
					case 8:
					{
						goto IL_0132_1;
					}
				}
			}
			{
				goto IL_0142_1;
			}

IL_00d0_1:
			{
				// case TextAnchor.UpperLeft: position += verticalOffset - horizontalOffset; break;
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_31 = V_3;
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_32 = V_5;
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_33 = V_4;
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_34;
				L_34 = Vector3_op_Subtraction_m1690F44F6DC92B770A940B6CF8AE0535625A9824_inline(L_32, L_33, NULL);
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_35;
				L_35 = Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline(L_31, L_34, NULL);
				V_3 = L_35;
				// case TextAnchor.UpperLeft: position += verticalOffset - horizontalOffset; break;
				goto IL_0142_1;
			}

IL_00e2_1:
			{
				// case TextAnchor.UpperCenter: position += verticalOffset; break;
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_36 = V_3;
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_37 = V_5;
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_38;
				L_38 = Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline(L_36, L_37, NULL);
				V_3 = L_38;
				// case TextAnchor.UpperCenter: position += verticalOffset; break;
				goto IL_0142_1;
			}

IL_00ed_1:
			{
				// case TextAnchor.UpperRight: position += verticalOffset + horizontalOffset; break;
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_39 = V_3;
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_40 = V_5;
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_41 = V_4;
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_42;
				L_42 = Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline(L_40, L_41, NULL);
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_43;
				L_43 = Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline(L_39, L_42, NULL);
				V_3 = L_43;
				// case TextAnchor.UpperRight: position += verticalOffset + horizontalOffset; break;
				goto IL_0142_1;
			}

IL_00ff_1:
			{
				// case TextAnchor.MiddleLeft: position -= horizontalOffset; break;
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_44 = V_3;
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_45 = V_4;
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_46;
				L_46 = Vector3_op_Subtraction_m1690F44F6DC92B770A940B6CF8AE0535625A9824_inline(L_44, L_45, NULL);
				V_3 = L_46;
				// case TextAnchor.MiddleLeft: position -= horizontalOffset; break;
				goto IL_0142_1;
			}

IL_010a_1:
			{
				// case TextAnchor.MiddleRight: position += horizontalOffset; break;
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_47 = V_3;
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_48 = V_4;
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_49;
				L_49 = Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline(L_47, L_48, NULL);
				V_3 = L_49;
				// case TextAnchor.MiddleRight: position += horizontalOffset; break;
				goto IL_0142_1;
			}

IL_0115_1:
			{
				// case TextAnchor.LowerLeft: position -= verticalOffset + horizontalOffset; break;
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_50 = V_3;
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_51 = V_5;
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_52 = V_4;
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_53;
				L_53 = Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline(L_51, L_52, NULL);
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_54;
				L_54 = Vector3_op_Subtraction_m1690F44F6DC92B770A940B6CF8AE0535625A9824_inline(L_50, L_53, NULL);
				V_3 = L_54;
				// case TextAnchor.LowerLeft: position -= verticalOffset + horizontalOffset; break;
				goto IL_0142_1;
			}

IL_0127_1:
			{
				// case TextAnchor.LowerCenter: position -= verticalOffset; break;
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_55 = V_3;
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_56 = V_5;
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_57;
				L_57 = Vector3_op_Subtraction_m1690F44F6DC92B770A940B6CF8AE0535625A9824_inline(L_55, L_56, NULL);
				V_3 = L_57;
				// case TextAnchor.LowerCenter: position -= verticalOffset; break;
				goto IL_0142_1;
			}

IL_0132_1:
			{
				// case TextAnchor.LowerRight: position -= verticalOffset - horizontalOffset; break;
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_58 = V_3;
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_59 = V_5;
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_60 = V_4;
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_61;
				L_61 = Vector3_op_Subtraction_m1690F44F6DC92B770A940B6CF8AE0535625A9824_inline(L_59, L_60, NULL);
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_62;
				L_62 = Vector3_op_Subtraction_m1690F44F6DC92B770A940B6CF8AE0535625A9824_inline(L_58, L_61, NULL);
				V_3 = L_62;
			}

IL_0142_1:
			{
				// return position;
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_63 = V_3;
				V_8 = L_63;
				goto IL_0155;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0155:
	{
		// }
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_64 = V_8;
		return L_64;
	}
}
// UnityEngine.Quaternion Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::CalculateWindowRotation(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 MixedRealityToolkitVisualProfiler_CalculateWindowRotation_m8F0A11C23874611D3A7420943F8F0819F594EDC2 (MixedRealityToolkitVisualProfiler_t7EC6FCE39C4246F2C6D408EF28AE145F66EE0CB1* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___cameraTransform0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MixedRealityToolkitVisualProfiler_t7EC6FCE39C4246F2C6D408EF28AE145F66EE0CB1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	AutoScope_tFB983697E28885CB10FFDB92D7EFD0615AEF3139 V_0;
	memset((&V_0), 0, sizeof(V_0));
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD V_1;
	memset((&V_1), 0, sizeof(V_1));
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
		// using (CalculateWindowRotationPerfMarker.Auto())
		il2cpp_codegen_runtime_class_init_inline(MixedRealityToolkitVisualProfiler_t7EC6FCE39C4246F2C6D408EF28AE145F66EE0CB1_il2cpp_TypeInfo_var);
		ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD L_0 = ((MixedRealityToolkitVisualProfiler_t7EC6FCE39C4246F2C6D408EF28AE145F66EE0CB1_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealityToolkitVisualProfiler_t7EC6FCE39C4246F2C6D408EF28AE145F66EE0CB1_il2cpp_TypeInfo_var))->___CalculateWindowRotationPerfMarker_74;
		V_1 = L_0;
		AutoScope_tFB983697E28885CB10FFDB92D7EFD0615AEF3139 L_1;
		L_1 = ProfilerMarker_Auto_m133FA724EB95D16187B37D2C8A501D7E989B1F8D_inline((&V_1), NULL);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00f5:
			{// begin finally (depth: 1)
				AutoScope_Dispose_mED763F3F51261EF8FB79DB32CD06E0A3F6C40481_inline((&V_0), NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				// Quaternion rotation = cameraTransform.rotation;
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2 = ___cameraTransform0;
				NullCheck(L_2);
				Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_3;
				L_3 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_2, NULL);
				V_2 = L_3;
				// switch (windowAnchor)
				int32_t L_4 = __this->___windowAnchor_22;
				V_3 = L_4;
				int32_t L_5 = V_3;
				switch (L_5)
				{
					case 0:
					{
						goto IL_004b_1;
					}
					case 1:
					{
						goto IL_0068_1;
					}
					case 2:
					{
						goto IL_0077_1;
					}
					case 3:
					{
						goto IL_0091_1;
					}
					case 4:
					{
						goto IL_00f0_1;
					}
					case 5:
					{
						goto IL_00a0_1;
					}
					case 6:
					{
						goto IL_00af_1;
					}
					case 7:
					{
						goto IL_00c9_1;
					}
					case 8:
					{
						goto IL_00d8_1;
					}
				}
			}
			{
				goto IL_00f0_1;
			}

IL_004b_1:
			{
				// case TextAnchor.UpperLeft: rotation *= windowHorizontalRotationInverse * windowVerticalRotationInverse; break;
				Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_6 = V_2;
				Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_7 = __this->___windowHorizontalRotationInverse_46;
				Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_8 = __this->___windowVerticalRotationInverse_48;
				Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_9;
				L_9 = Quaternion_op_Multiply_m5AC8B39C55015059BDD09122E04E47D4BFAB2276_inline(L_7, L_8, NULL);
				Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_10;
				L_10 = Quaternion_op_Multiply_m5AC8B39C55015059BDD09122E04E47D4BFAB2276_inline(L_6, L_9, NULL);
				V_2 = L_10;
				// case TextAnchor.UpperLeft: rotation *= windowHorizontalRotationInverse * windowVerticalRotationInverse; break;
				goto IL_00f0_1;
			}

IL_0068_1:
			{
				// case TextAnchor.UpperCenter: rotation *= windowHorizontalRotationInverse; break;
				Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_11 = V_2;
				Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_12 = __this->___windowHorizontalRotationInverse_46;
				Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_13;
				L_13 = Quaternion_op_Multiply_m5AC8B39C55015059BDD09122E04E47D4BFAB2276_inline(L_11, L_12, NULL);
				V_2 = L_13;
				// case TextAnchor.UpperCenter: rotation *= windowHorizontalRotationInverse; break;
				goto IL_00f0_1;
			}

IL_0077_1:
			{
				// case TextAnchor.UpperRight: rotation *= windowHorizontalRotationInverse * windowVerticalRotation; break;
				Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_14 = V_2;
				Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_15 = __this->___windowHorizontalRotationInverse_46;
				Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_16 = __this->___windowVerticalRotation_47;
				Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_17;
				L_17 = Quaternion_op_Multiply_m5AC8B39C55015059BDD09122E04E47D4BFAB2276_inline(L_15, L_16, NULL);
				Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_18;
				L_18 = Quaternion_op_Multiply_m5AC8B39C55015059BDD09122E04E47D4BFAB2276_inline(L_14, L_17, NULL);
				V_2 = L_18;
				// case TextAnchor.UpperRight: rotation *= windowHorizontalRotationInverse * windowVerticalRotation; break;
				goto IL_00f0_1;
			}

IL_0091_1:
			{
				// case TextAnchor.MiddleLeft: rotation *= windowVerticalRotationInverse; break;
				Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_19 = V_2;
				Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_20 = __this->___windowVerticalRotationInverse_48;
				Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_21;
				L_21 = Quaternion_op_Multiply_m5AC8B39C55015059BDD09122E04E47D4BFAB2276_inline(L_19, L_20, NULL);
				V_2 = L_21;
				// case TextAnchor.MiddleLeft: rotation *= windowVerticalRotationInverse; break;
				goto IL_00f0_1;
			}

IL_00a0_1:
			{
				// case TextAnchor.MiddleRight: rotation *= windowVerticalRotation; break;
				Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_22 = V_2;
				Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_23 = __this->___windowVerticalRotation_47;
				Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_24;
				L_24 = Quaternion_op_Multiply_m5AC8B39C55015059BDD09122E04E47D4BFAB2276_inline(L_22, L_23, NULL);
				V_2 = L_24;
				// case TextAnchor.MiddleRight: rotation *= windowVerticalRotation; break;
				goto IL_00f0_1;
			}

IL_00af_1:
			{
				// case TextAnchor.LowerLeft: rotation *= windowHorizontalRotation * windowVerticalRotationInverse; break;
				Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_25 = V_2;
				Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_26 = __this->___windowHorizontalRotation_45;
				Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_27 = __this->___windowVerticalRotationInverse_48;
				Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_28;
				L_28 = Quaternion_op_Multiply_m5AC8B39C55015059BDD09122E04E47D4BFAB2276_inline(L_26, L_27, NULL);
				Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_29;
				L_29 = Quaternion_op_Multiply_m5AC8B39C55015059BDD09122E04E47D4BFAB2276_inline(L_25, L_28, NULL);
				V_2 = L_29;
				// case TextAnchor.LowerLeft: rotation *= windowHorizontalRotation * windowVerticalRotationInverse; break;
				goto IL_00f0_1;
			}

IL_00c9_1:
			{
				// case TextAnchor.LowerCenter: rotation *= windowHorizontalRotation; break;
				Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_30 = V_2;
				Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_31 = __this->___windowHorizontalRotation_45;
				Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_32;
				L_32 = Quaternion_op_Multiply_m5AC8B39C55015059BDD09122E04E47D4BFAB2276_inline(L_30, L_31, NULL);
				V_2 = L_32;
				// case TextAnchor.LowerCenter: rotation *= windowHorizontalRotation; break;
				goto IL_00f0_1;
			}

IL_00d8_1:
			{
				// case TextAnchor.LowerRight: rotation *= windowHorizontalRotation * windowVerticalRotation; break;
				Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_33 = V_2;
				Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_34 = __this->___windowHorizontalRotation_45;
				Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_35 = __this->___windowVerticalRotation_47;
				Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_36;
				L_36 = Quaternion_op_Multiply_m5AC8B39C55015059BDD09122E04E47D4BFAB2276_inline(L_34, L_35, NULL);
				Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_37;
				L_37 = Quaternion_op_Multiply_m5AC8B39C55015059BDD09122E04E47D4BFAB2276_inline(L_33, L_36, NULL);
				V_2 = L_37;
			}

IL_00f0_1:
			{
				// return rotation;
				Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_38 = V_2;
				V_4 = L_38;
				goto IL_0103;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0103:
	{
		// }
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_39 = V_4;
		return L_39;
	}
}
// UnityEngine.Color Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::CalculateFrameColor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F MixedRealityToolkitVisualProfiler_CalculateFrameColor_mDF0F4B8533688C09CD4C96D8F7082865831FD41F (MixedRealityToolkitVisualProfiler_t7EC6FCE39C4246F2C6D408EF28AE145F66EE0CB1* __this, int32_t ___frameRate0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MixedRealityToolkitVisualProfiler_t7EC6FCE39C4246F2C6D408EF28AE145F66EE0CB1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	AutoScope_tFB983697E28885CB10FFDB92D7EFD0615AEF3139 V_0;
	memset((&V_0), 0, sizeof(V_0));
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	float V_3 = 0.0f;
	int32_t V_4 = 0;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_5;
	memset((&V_5), 0, sizeof(V_5));
	int32_t V_6 = 0;
	{
		// using (CalculateFrameColorPerfMarker.Auto())
		il2cpp_codegen_runtime_class_init_inline(MixedRealityToolkitVisualProfiler_t7EC6FCE39C4246F2C6D408EF28AE145F66EE0CB1_il2cpp_TypeInfo_var);
		ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD L_0 = ((MixedRealityToolkitVisualProfiler_t7EC6FCE39C4246F2C6D408EF28AE145F66EE0CB1_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealityToolkitVisualProfiler_t7EC6FCE39C4246F2C6D408EF28AE145F66EE0CB1_il2cpp_TypeInfo_var))->___CalculateFrameColorPerfMarker_75;
		V_1 = L_0;
		AutoScope_tFB983697E28885CB10FFDB92D7EFD0615AEF3139 L_1;
		L_1 = ProfilerMarker_Auto_m133FA724EB95D16187B37D2C8A501D7E989B1F8D_inline((&V_1), NULL);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0084:
			{// begin finally (depth: 1)
				AutoScope_Dispose_mED763F3F51261EF8FB79DB32CD06E0A3F6C40481_inline((&V_0), NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				// int colorCount = frameRateColors.Length;
				FrameRateColorU5BU5D_tE020E288145C85DE15325F4E79AAA8FD9905E91E* L_2 = __this->___frameRateColors_28;
				NullCheck(L_2);
				V_2 = ((int32_t)(((RuntimeArray*)L_2)->max_length));
				// if (colorCount == 0)
				int32_t L_3 = V_2;
				if (L_3)
				{
					goto IL_0024_1;
				}
			}
			{
				// return baseColor;
				Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_4 = __this->___baseColor_29;
				V_5 = L_4;
				goto IL_0092;
			}

IL_0024_1:
			{
				// float percentageOfTarget = frameRate / AppTargetFrameRate;
				int32_t L_5 = ___frameRate0;
				il2cpp_codegen_runtime_class_init_inline(MixedRealityToolkitVisualProfiler_t7EC6FCE39C4246F2C6D408EF28AE145F66EE0CB1_il2cpp_TypeInfo_var);
				float L_6;
				L_6 = MixedRealityToolkitVisualProfiler_get_AppTargetFrameRate_mBF51B4DE13383FCE806243AE7D92728DDE8E61AD(NULL);
				V_3 = ((float)(((float)L_5)/L_6));
				// int lastColor = colorCount - 1;
				int32_t L_7 = V_2;
				V_4 = ((int32_t)il2cpp_codegen_subtract(L_7, 1));
				// for (int i = 0; i < lastColor; ++i)
				V_6 = 0;
				goto IL_0068_1;
			}

IL_0037_1:
			{
				// if (percentageOfTarget >= frameRateColors[i].percentageOfTarget)
				float L_8 = V_3;
				FrameRateColorU5BU5D_tE020E288145C85DE15325F4E79AAA8FD9905E91E* L_9 = __this->___frameRateColors_28;
				int32_t L_10 = V_6;
				NullCheck(L_9);
				float L_11 = ((L_9)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_10)))->___percentageOfTarget_0;
				if ((!(((float)L_8) >= ((float)L_11))))
				{
					goto IL_0062_1;
				}
			}
			{
				// return frameRateColors[i].color;
				FrameRateColorU5BU5D_tE020E288145C85DE15325F4E79AAA8FD9905E91E* L_12 = __this->___frameRateColors_28;
				int32_t L_13 = V_6;
				NullCheck(L_12);
				Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_14 = ((L_12)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_13)))->___color_1;
				V_5 = L_14;
				goto IL_0092;
			}

IL_0062_1:
			{
				// for (int i = 0; i < lastColor; ++i)
				int32_t L_15 = V_6;
				V_6 = ((int32_t)il2cpp_codegen_add(L_15, 1));
			}

IL_0068_1:
			{
				// for (int i = 0; i < lastColor; ++i)
				int32_t L_16 = V_6;
				int32_t L_17 = V_4;
				if ((((int32_t)L_16) < ((int32_t)L_17)))
				{
					goto IL_0037_1;
				}
			}
			{
				// return frameRateColors[lastColor].color;
				FrameRateColorU5BU5D_tE020E288145C85DE15325F4E79AAA8FD9905E91E* L_18 = __this->___frameRateColors_28;
				int32_t L_19 = V_4;
				NullCheck(L_18);
				Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_20 = ((L_18)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_19)))->___color_1;
				V_5 = L_20;
				goto IL_0092;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0092:
	{
		// }
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_21 = V_5;
		return L_21;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::CalculateBackgroundSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityToolkitVisualProfiler_CalculateBackgroundSize_m3CC8C0146BF429F0BBBBF9A55C348AC08BD730AE (MixedRealityToolkitVisualProfiler_t7EC6FCE39C4246F2C6D408EF28AE145F66EE0CB1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MixedRealityToolkitVisualProfiler_t7EC6FCE39C4246F2C6D408EF28AE145F66EE0CB1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	AutoScope_tFB983697E28885CB10FFDB92D7EFD0615AEF3139 V_0;
	memset((&V_0), 0, sizeof(V_0));
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// using (CalculateBackgroundSizePerfMarker.Auto())
		il2cpp_codegen_runtime_class_init_inline(MixedRealityToolkitVisualProfiler_t7EC6FCE39C4246F2C6D408EF28AE145F66EE0CB1_il2cpp_TypeInfo_var);
		ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD L_0 = ((MixedRealityToolkitVisualProfiler_t7EC6FCE39C4246F2C6D408EF28AE145F66EE0CB1_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealityToolkitVisualProfiler_t7EC6FCE39C4246F2C6D408EF28AE145F66EE0CB1_il2cpp_TypeInfo_var))->___CalculateBackgroundSizePerfMarker_76;
		V_1 = L_0;
		AutoScope_tFB983697E28885CB10FFDB92D7EFD0615AEF3139 L_1;
		L_1 = ProfilerMarker_Auto_m133FA724EB95D16187B37D2C8A501D7E989B1F8D_inline((&V_1), NULL);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00a8:
			{// begin finally (depth: 1)
				AutoScope_Dispose_mED763F3F51261EF8FB79DB32CD06E0A3F6C40481_inline((&V_0), NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				// if (memoryStatsVisible)
				bool L_2 = __this->___memoryStatsVisible_20;
				if (!L_2)
				{
					goto IL_0044_1;
				}
			}
			{
				// background.localPosition = backgroundOffsets[0];
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3 = __this->___background_34;
				il2cpp_codegen_runtime_class_init_inline(MixedRealityToolkitVisualProfiler_t7EC6FCE39C4246F2C6D408EF28AE145F66EE0CB1_il2cpp_TypeInfo_var);
				Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_4 = ((MixedRealityToolkitVisualProfiler_t7EC6FCE39C4246F2C6D408EF28AE145F66EE0CB1_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealityToolkitVisualProfiler_t7EC6FCE39C4246F2C6D408EF28AE145F66EE0CB1_il2cpp_TypeInfo_var))->___backgroundOffsets_11;
				NullCheck(L_4);
				int32_t L_5 = 0;
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
				NullCheck(L_3);
				Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_3, L_6, NULL);
				// background.localScale = backgroundScales[0];
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7 = __this->___background_34;
				Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_8 = ((MixedRealityToolkitVisualProfiler_t7EC6FCE39C4246F2C6D408EF28AE145F66EE0CB1_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealityToolkitVisualProfiler_t7EC6FCE39C4246F2C6D408EF28AE145F66EE0CB1_il2cpp_TypeInfo_var))->___backgroundScales_10;
				NullCheck(L_8);
				int32_t L_9 = 0;
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
				NullCheck(L_7);
				Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_7, L_10, NULL);
				goto IL_00b6;
			}

IL_0044_1:
			{
				// else if (frameInfoVisible)
				bool L_11 = __this->___frameInfoVisible_19;
				if (!L_11)
				{
					goto IL_007a_1;
				}
			}
			{
				// background.localPosition = backgroundOffsets[1];
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_12 = __this->___background_34;
				il2cpp_codegen_runtime_class_init_inline(MixedRealityToolkitVisualProfiler_t7EC6FCE39C4246F2C6D408EF28AE145F66EE0CB1_il2cpp_TypeInfo_var);
				Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_13 = ((MixedRealityToolkitVisualProfiler_t7EC6FCE39C4246F2C6D408EF28AE145F66EE0CB1_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealityToolkitVisualProfiler_t7EC6FCE39C4246F2C6D408EF28AE145F66EE0CB1_il2cpp_TypeInfo_var))->___backgroundOffsets_11;
				NullCheck(L_13);
				int32_t L_14 = 1;
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15 = (L_13)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
				NullCheck(L_12);
				Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_12, L_15, NULL);
				// background.localScale = backgroundScales[1];
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_16 = __this->___background_34;
				Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_17 = ((MixedRealityToolkitVisualProfiler_t7EC6FCE39C4246F2C6D408EF28AE145F66EE0CB1_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealityToolkitVisualProfiler_t7EC6FCE39C4246F2C6D408EF28AE145F66EE0CB1_il2cpp_TypeInfo_var))->___backgroundScales_10;
				NullCheck(L_17);
				int32_t L_18 = 1;
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19 = (L_17)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
				NullCheck(L_16);
				Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_16, L_19, NULL);
				goto IL_00b6;
			}

IL_007a_1:
			{
				// background.localPosition = backgroundOffsets[2];
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_20 = __this->___background_34;
				il2cpp_codegen_runtime_class_init_inline(MixedRealityToolkitVisualProfiler_t7EC6FCE39C4246F2C6D408EF28AE145F66EE0CB1_il2cpp_TypeInfo_var);
				Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_21 = ((MixedRealityToolkitVisualProfiler_t7EC6FCE39C4246F2C6D408EF28AE145F66EE0CB1_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealityToolkitVisualProfiler_t7EC6FCE39C4246F2C6D408EF28AE145F66EE0CB1_il2cpp_TypeInfo_var))->___backgroundOffsets_11;
				NullCheck(L_21);
				int32_t L_22 = 2;
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23 = (L_21)->GetAt(static_cast<il2cpp_array_size_t>(L_22));
				NullCheck(L_20);
				Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_20, L_23, NULL);
				// background.localScale = backgroundScales[2];
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_24 = __this->___background_34;
				Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_25 = ((MixedRealityToolkitVisualProfiler_t7EC6FCE39C4246F2C6D408EF28AE145F66EE0CB1_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealityToolkitVisualProfiler_t7EC6FCE39C4246F2C6D408EF28AE145F66EE0CB1_il2cpp_TypeInfo_var))->___backgroundScales_10;
				NullCheck(L_25);
				int32_t L_26 = 2;
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_27 = (L_25)->GetAt(static_cast<il2cpp_array_size_t>(L_26));
				NullCheck(L_24);
				Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_24, L_27, NULL);
				// }
				goto IL_00b6;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00b6:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::BuildWindow()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityToolkitVisualProfiler_BuildWindow_mE5AE22B28F867AF56E64C0CF922BA1F09FD84094 (MixedRealityToolkitVisualProfiler_t7EC6FCE39C4246F2C6D408EF28AE145F66EE0CB1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MaterialPropertyBlock_t2308669579033A857EFE6E4831909F638B27411D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MixedRealityToolkitVisualProfiler_t7EC6FCE39C4246F2C6D408EF28AE145F66EE0CB1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral11C6A78DFF7F1AD65B32D4BFAA7E9E99490CF2C3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral155D513E52CA71A25F673EE4D5AD6D564656F5FB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1665DB987C5901E42B248E6D1128B9B20A1583AE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2A4FA5F9A66DEEA10B9329AC6B6C4542BCEC1AB2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral47A3FAF17D89549FD0F0ECA7370B81F7C80DFCDE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5230F5FD1E0998B73530AA850D3A5872D61228EC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral88C0A409384124B23F80517191AAD25B944B47B9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral91EFB368757A86BC9A88975F715DAF8641FEA56D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral99BD7B441BEF843E8525E112D8268BEFC467D067);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAA7A279255A8F579DC8A660F4DB73CED7446E934);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAE4AFE18D2E7C6893B503506A2B19780C8F7E0C7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB3052192431D4C5D44F2510B1AFD2632B627701B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBDE0E17908169C9D71086DA3C3CE1626CDA9F5B8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC77FC609B79CF029CE1FAF8089DE5ABE43EBB168);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE742EA1C34A6165D061B136B6C1DC96EC4815E5A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE91C8ADB3D2112AFBA5148B01F876064B6022CDC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF55841B26B9D578A89C6E499D4DE8BF3DFB4C8D9);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_3 = NULL;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* V_4 = NULL;
	{
		// colorID = Shader.PropertyToID("_Color");
		int32_t L_0;
		L_0 = Shader_PropertyToID_mF5F7BA2EFF23D83482ECDE4C34227145D817B1EB(_stringLiteral47A3FAF17D89549FD0F0ECA7370B81F7C80DFCDE, NULL);
		__this->___colorID_52 = L_0;
		// parentMatrixID = Shader.PropertyToID("_ParentLocalToWorldMatrix");
		int32_t L_1;
		L_1 = Shader_PropertyToID_mF5F7BA2EFF23D83482ECDE4C34227145D817B1EB(_stringLiteralC77FC609B79CF029CE1FAF8089DE5ABE43EBB168, NULL);
		__this->___parentMatrixID_53 = L_1;
		// window = new GameObject("VisualProfiler").transform;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)il2cpp_codegen_object_new(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		GameObject__ctor_m37D512B05D292F954792225E6C6EEE95293A9B88(L_2, _stringLiteral155D513E52CA71A25F673EE4D5AD6D564656F5FB, NULL);
		NullCheck(L_2);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_2, NULL);
		__this->___window_33 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___window_33), (void*)L_3);
		// window.parent = WindowParent;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4 = __this->___window_33;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = MixedRealityToolkitVisualProfiler_get_WindowParent_mE0FDF64D85504EEFA54D140CB047E2466FE8A429_inline(__this, NULL);
		NullCheck(L_4);
		Transform_set_parent_m9BD5E563B539DD5BEC342736B03F97B38A243234(L_4, L_5, NULL);
		// window.localScale = defaultWindowScale;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6 = __this->___window_33;
		il2cpp_codegen_runtime_class_init_inline(MixedRealityToolkitVisualProfiler_t7EC6FCE39C4246F2C6D408EF28AE145F66EE0CB1_il2cpp_TypeInfo_var);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = ((MixedRealityToolkitVisualProfiler_t7EC6FCE39C4246F2C6D408EF28AE145F66EE0CB1_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealityToolkitVisualProfiler_t7EC6FCE39C4246F2C6D408EF28AE145F66EE0CB1_il2cpp_TypeInfo_var))->___defaultWindowScale_9;
		NullCheck(L_6);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_6, L_7, NULL);
		// windowHorizontalRotation = Quaternion.AngleAxis(defaultWindowRotation.y, Vector3.right);
		float L_8 = (&((MixedRealityToolkitVisualProfiler_t7EC6FCE39C4246F2C6D408EF28AE145F66EE0CB1_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealityToolkitVisualProfiler_t7EC6FCE39C4246F2C6D408EF28AE145F66EE0CB1_il2cpp_TypeInfo_var))->___defaultWindowRotation_8)->___y_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Vector3_get_right_m13B7C3EAA64DC921EC23346C56A5A597B5481FF5_inline(NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_10;
		L_10 = Quaternion_AngleAxis_m01A869DC10F976FAF493B66F15D6D6977BB61DA8(L_8, L_9, NULL);
		__this->___windowHorizontalRotation_45 = L_10;
		// windowHorizontalRotationInverse = Quaternion.Inverse(windowHorizontalRotation);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_11 = __this->___windowHorizontalRotation_45;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_12;
		L_12 = Quaternion_Inverse_m7597DECDAD37194FAC86D1A11DCE3F0C7747F817(L_11, NULL);
		__this->___windowHorizontalRotationInverse_46 = L_12;
		// windowVerticalRotation = Quaternion.AngleAxis(defaultWindowRotation.x, Vector3.up);
		float L_13 = (&((MixedRealityToolkitVisualProfiler_t7EC6FCE39C4246F2C6D408EF28AE145F66EE0CB1_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealityToolkitVisualProfiler_t7EC6FCE39C4246F2C6D408EF28AE145F66EE0CB1_il2cpp_TypeInfo_var))->___defaultWindowRotation_8)->___x_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		L_14 = Vector3_get_up_mAB5269BFCBCB1BD241450C9BF2F156303D30E0C3_inline(NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_15;
		L_15 = Quaternion_AngleAxis_m01A869DC10F976FAF493B66F15D6D6977BB61DA8(L_13, L_14, NULL);
		__this->___windowVerticalRotation_47 = L_15;
		// windowVerticalRotationInverse = Quaternion.Inverse(windowVerticalRotation);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_16 = __this->___windowVerticalRotation_47;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_17;
		L_17 = Quaternion_Inverse_m7597DECDAD37194FAC86D1A11DCE3F0C7747F817(L_16, NULL);
		__this->___windowVerticalRotationInverse_48 = L_17;
		// background = CreateQuad("Background", window).transform;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_18 = __this->___window_33;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_19;
		L_19 = MixedRealityToolkitVisualProfiler_CreateQuad_mAE94A1A2BF7B270E53738BC38DCBC177EDB22FAB(_stringLiteral5230F5FD1E0998B73530AA850D3A5872D61228EC, L_18, NULL);
		NullCheck(L_19);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_20;
		L_20 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_19, NULL);
		__this->___background_34 = L_20;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___background_34), (void*)L_20);
		// InitializeRenderer(background.gameObject, backgroundMaterial, colorID, baseColor);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_21 = __this->___background_34;
		NullCheck(L_21);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_22;
		L_22 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_21, NULL);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_23 = __this->___backgroundMaterial_65;
		int32_t L_24 = __this->___colorID_52;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_25 = __this->___baseColor_29;
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_26;
		L_26 = MixedRealityToolkitVisualProfiler_InitializeRenderer_m2E1FC0C4AF9A74A942A15C93BD52B3AFC04FC88F(L_22, L_23, L_24, L_25, NULL);
		// CalculateBackgroundSize();
		MixedRealityToolkitVisualProfiler_CalculateBackgroundSize_m3CC8C0146BF429F0BBBBF9A55C348AC08BD730AE(__this, NULL);
		// cpuFrameRateText = CreateText("CPUFrameRateText", new Vector3(-0.495f, 0.5f, 0.0f), window, TextAnchor.UpperLeft, textMaterial, Color.white, string.Empty);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_27;
		memset((&L_27), 0, sizeof(L_27));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_27), (-0.495000005f), (0.5f), (0.0f), /*hidden argument*/NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_28 = __this->___window_33;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_29 = __this->___textMaterial_67;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_30;
		L_30 = Color_get_white_m28BB6E19F27D4EE6858D3021A44F62BC74E20C43_inline(NULL);
		String_t* L_31 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		TextMesh_t7E1981C7B03E50D5CA5A3AD5B0D9BB0AB6EE91F8* L_32;
		L_32 = MixedRealityToolkitVisualProfiler_CreateText_mE4D0118EC0F55A9D00AA786BBF606DADBBF79E7F(_stringLiteralE91C8ADB3D2112AFBA5148B01F876064B6022CDC, L_27, L_28, 0, L_29, L_30, L_31, NULL);
		__this->___cpuFrameRateText_35 = L_32;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___cpuFrameRateText_35), (void*)L_32);
		// gpuFrameRateText = CreateText("GPUFrameRateText", new Vector3(0.495f, 0.5f, 0.0f), window, TextAnchor.UpperRight, textMaterial, Color.white, string.Empty);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_33;
		memset((&L_33), 0, sizeof(L_33));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_33), (0.495000005f), (0.5f), (0.0f), /*hidden argument*/NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_34 = __this->___window_33;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_35 = __this->___textMaterial_67;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_36;
		L_36 = Color_get_white_m28BB6E19F27D4EE6858D3021A44F62BC74E20C43_inline(NULL);
		String_t* L_37 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		TextMesh_t7E1981C7B03E50D5CA5A3AD5B0D9BB0AB6EE91F8* L_38;
		L_38 = MixedRealityToolkitVisualProfiler_CreateText_mE4D0118EC0F55A9D00AA786BBF606DADBBF79E7F(_stringLiteralF55841B26B9D578A89C6E499D4DE8BF3DFB4C8D9, L_33, L_34, 2, L_35, L_36, L_37, NULL);
		__this->___gpuFrameRateText_36 = L_38;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___gpuFrameRateText_36), (void*)L_38);
		// gpuFrameRateText.gameObject.SetActive(false);
		TextMesh_t7E1981C7B03E50D5CA5A3AD5B0D9BB0AB6EE91F8* L_39 = __this->___gpuFrameRateText_36;
		NullCheck(L_39);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_40;
		L_40 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_39, NULL);
		NullCheck(L_40);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_40, (bool)0, NULL);
		// frameInfoMatrices = new Matrix4x4[frameRange];
		int32_t L_41 = ((MixedRealityToolkitVisualProfiler_t7EC6FCE39C4246F2C6D408EF28AE145F66EE0CB1_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealityToolkitVisualProfiler_t7EC6FCE39C4246F2C6D408EF28AE145F66EE0CB1_il2cpp_TypeInfo_var))->___frameRange_7;
		Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D* L_42 = (Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D*)(Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D*)SZArrayNew(Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D_il2cpp_TypeInfo_var, (uint32_t)L_41);
		__this->___frameInfoMatrices_49 = L_42;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___frameInfoMatrices_49), (void*)L_42);
		// frameInfoColors = new Vector4[frameRange];
		int32_t L_43 = ((MixedRealityToolkitVisualProfiler_t7EC6FCE39C4246F2C6D408EF28AE145F66EE0CB1_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealityToolkitVisualProfiler_t7EC6FCE39C4246F2C6D408EF28AE145F66EE0CB1_il2cpp_TypeInfo_var))->___frameRange_7;
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_44 = (Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD*)(Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD*)SZArrayNew(Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD_il2cpp_TypeInfo_var, (uint32_t)L_43);
		__this->___frameInfoColors_50 = L_44;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___frameInfoColors_50), (void*)L_44);
		// Vector3 scale = new Vector3(1.0f / frameRange, 0.2f, 1.0f);
		int32_t L_45 = ((MixedRealityToolkitVisualProfiler_t7EC6FCE39C4246F2C6D408EF28AE145F66EE0CB1_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealityToolkitVisualProfiler_t7EC6FCE39C4246F2C6D408EF28AE145F66EE0CB1_il2cpp_TypeInfo_var))->___frameRange_7;
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&V_0), ((float)((1.0f)/((float)L_45))), (0.200000003f), (1.0f), NULL);
		// Vector3 position = new Vector3(0.5f - (scale.x * 0.5f), 0.15f, 0.0f);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_46 = V_0;
		float L_47 = L_46.___x_2;
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&V_1), ((float)il2cpp_codegen_subtract((0.5f), ((float)il2cpp_codegen_multiply(L_47, (0.5f))))), (0.150000006f), (0.0f), NULL);
		// for (int i = 0; i < frameRange; ++i)
		V_2 = 0;
		goto IL_0241;
	}

IL_01db:
	{
		// frameInfoMatrices[i] = Matrix4x4.TRS(position, Quaternion.identity, new Vector3(scale.x * 0.8f, scale.y, scale.z));
		Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D* L_48 = __this->___frameInfoMatrices_49;
		int32_t L_49 = V_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_50 = V_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_51;
		L_51 = Quaternion_get_identity_mB9CAEEB21BC81352CBF32DB9664BFC06FA7EA27B_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_52 = V_0;
		float L_53 = L_52.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_54 = V_0;
		float L_55 = L_54.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_56 = V_0;
		float L_57 = L_56.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_58;
		memset((&L_58), 0, sizeof(L_58));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_58), ((float)il2cpp_codegen_multiply(L_53, (0.800000012f))), L_55, L_57, /*hidden argument*/NULL);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_59;
		L_59 = Matrix4x4_TRS_mFEBA6926DB0044B96EF0CE98F30FEE7596820680(L_50, L_51, L_58, NULL);
		NullCheck(L_48);
		(L_48)->SetAt(static_cast<il2cpp_array_size_t>(L_49), (Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6)L_59);
		// position.x -= scale.x;
		float* L_60 = (&(&V_1)->___x_2);
		float* L_61 = L_60;
		float L_62 = *((float*)L_61);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_63 = V_0;
		float L_64 = L_63.___x_2;
		*((float*)L_61) = (float)((float)il2cpp_codegen_subtract(L_62, L_64));
		// frameInfoColors[i] = CalculateFrameColor((int)AppTargetFrameRate);
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_65 = __this->___frameInfoColors_50;
		int32_t L_66 = V_2;
		il2cpp_codegen_runtime_class_init_inline(MixedRealityToolkitVisualProfiler_t7EC6FCE39C4246F2C6D408EF28AE145F66EE0CB1_il2cpp_TypeInfo_var);
		float L_67;
		L_67 = MixedRealityToolkitVisualProfiler_get_AppTargetFrameRate_mBF51B4DE13383FCE806243AE7D92728DDE8E61AD(NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_68;
		L_68 = MixedRealityToolkitVisualProfiler_CalculateFrameColor_mDF0F4B8533688C09CD4C96D8F7082865831FD41F(__this, il2cpp_codegen_cast_double_to_int<int32_t>(L_67), NULL);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_69;
		L_69 = Color_op_Implicit_m6D1353534AD23E43DFD104850D55C469CFCEF340_inline(L_68, NULL);
		NullCheck(L_65);
		(L_65)->SetAt(static_cast<il2cpp_array_size_t>(L_66), (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3)L_69);
		// for (int i = 0; i < frameRange; ++i)
		int32_t L_70 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_70, 1));
	}

IL_0241:
	{
		// for (int i = 0; i < frameRange; ++i)
		int32_t L_71 = V_2;
		il2cpp_codegen_runtime_class_init_inline(MixedRealityToolkitVisualProfiler_t7EC6FCE39C4246F2C6D408EF28AE145F66EE0CB1_il2cpp_TypeInfo_var);
		int32_t L_72 = ((MixedRealityToolkitVisualProfiler_t7EC6FCE39C4246F2C6D408EF28AE145F66EE0CB1_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealityToolkitVisualProfiler_t7EC6FCE39C4246F2C6D408EF28AE145F66EE0CB1_il2cpp_TypeInfo_var))->___frameRange_7;
		if ((((int32_t)L_71) < ((int32_t)L_72)))
		{
			goto IL_01db;
		}
	}
	{
		// frameInfoPropertyBlock = new MaterialPropertyBlock();
		MaterialPropertyBlock_t2308669579033A857EFE6E4831909F638B27411D* L_73 = (MaterialPropertyBlock_t2308669579033A857EFE6E4831909F638B27411D*)il2cpp_codegen_object_new(MaterialPropertyBlock_t2308669579033A857EFE6E4831909F638B27411D_il2cpp_TypeInfo_var);
		NullCheck(L_73);
		MaterialPropertyBlock__ctor_m14C3432585F7BB65028BCD64A0FD6607A1B490FB(L_73, NULL);
		__this->___frameInfoPropertyBlock_51 = L_73;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___frameInfoPropertyBlock_51), (void*)L_73);
		// frameInfoPropertyBlock.SetVectorArray(colorID, frameInfoColors);
		MaterialPropertyBlock_t2308669579033A857EFE6E4831909F638B27411D* L_74 = __this->___frameInfoPropertyBlock_51;
		int32_t L_75 = __this->___colorID_52;
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_76 = __this->___frameInfoColors_50;
		NullCheck(L_74);
		MaterialPropertyBlock_SetVectorArray_m5C0A3017A7EA9EE5F01295E346EA72D70A8BD682(L_74, L_75, L_76, NULL);
		// memoryStats = new GameObject("MemoryStats").transform;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_77 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)il2cpp_codegen_object_new(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		NullCheck(L_77);
		GameObject__ctor_m37D512B05D292F954792225E6C6EEE95293A9B88(L_77, _stringLiteralB3052192431D4C5D44F2510B1AFD2632B627701B, NULL);
		NullCheck(L_77);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_78;
		L_78 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_77, NULL);
		__this->___memoryStats_37 = L_78;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___memoryStats_37), (void*)L_78);
		// memoryStats.parent = window;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_79 = __this->___memoryStats_37;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_80 = __this->___window_33;
		NullCheck(L_79);
		Transform_set_parent_m9BD5E563B539DD5BEC342736B03F97B38A243234(L_79, L_80, NULL);
		// memoryStats.localScale = Vector3.one;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_81 = __this->___memoryStats_37;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_82;
		L_82 = Vector3_get_one_mE6A2D5C6578E94268024613B596BF09F990B1260_inline(NULL);
		NullCheck(L_81);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_81, L_82, NULL);
		// usedMemoryText = CreateText("UsedMemoryText", new Vector3(-0.495f, 0.0f, 0.0f), memoryStats, TextAnchor.UpperLeft, textMaterial, memoryUsedColor, usedMemoryString);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_83;
		memset((&L_83), 0, sizeof(L_83));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_83), (-0.495000005f), (0.0f), (0.0f), /*hidden argument*/NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_84 = __this->___memoryStats_37;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_85 = __this->___textMaterial_67;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_86 = __this->___memoryUsedColor_30;
		il2cpp_codegen_runtime_class_init_inline(MixedRealityToolkitVisualProfiler_t7EC6FCE39C4246F2C6D408EF28AE145F66EE0CB1_il2cpp_TypeInfo_var);
		String_t* L_87 = ((MixedRealityToolkitVisualProfiler_t7EC6FCE39C4246F2C6D408EF28AE145F66EE0CB1_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealityToolkitVisualProfiler_t7EC6FCE39C4246F2C6D408EF28AE145F66EE0CB1_il2cpp_TypeInfo_var))->___usedMemoryString_12;
		TextMesh_t7E1981C7B03E50D5CA5A3AD5B0D9BB0AB6EE91F8* L_88;
		L_88 = MixedRealityToolkitVisualProfiler_CreateText_mE4D0118EC0F55A9D00AA786BBF606DADBBF79E7F(_stringLiteral99BD7B441BEF843E8525E112D8268BEFC467D067, L_83, L_84, 0, L_85, L_86, L_87, NULL);
		__this->___usedMemoryText_38 = L_88;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___usedMemoryText_38), (void*)L_88);
		// peakMemoryText = CreateText("PeakMemoryText", new Vector3(0.0f, 0.0f, 0.0f), memoryStats, TextAnchor.UpperCenter, textMaterial, memoryPeakColor, peakMemoryString);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_89;
		memset((&L_89), 0, sizeof(L_89));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_89), (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_90 = __this->___memoryStats_37;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_91 = __this->___textMaterial_67;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_92 = __this->___memoryPeakColor_31;
		String_t* L_93 = ((MixedRealityToolkitVisualProfiler_t7EC6FCE39C4246F2C6D408EF28AE145F66EE0CB1_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealityToolkitVisualProfiler_t7EC6FCE39C4246F2C6D408EF28AE145F66EE0CB1_il2cpp_TypeInfo_var))->___peakMemoryString_13;
		TextMesh_t7E1981C7B03E50D5CA5A3AD5B0D9BB0AB6EE91F8* L_94;
		L_94 = MixedRealityToolkitVisualProfiler_CreateText_mE4D0118EC0F55A9D00AA786BBF606DADBBF79E7F(_stringLiteralAA7A279255A8F579DC8A660F4DB73CED7446E934, L_89, L_90, 1, L_91, L_92, L_93, NULL);
		__this->___peakMemoryText_39 = L_94;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___peakMemoryText_39), (void*)L_94);
		// limitMemoryText = CreateText("LimitMemoryText", new Vector3(0.495f, 0.0f, 0.0f), memoryStats, TextAnchor.UpperRight, textMaterial, Color.white, limitMemoryString);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_95;
		memset((&L_95), 0, sizeof(L_95));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_95), (0.495000005f), (0.0f), (0.0f), /*hidden argument*/NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_96 = __this->___memoryStats_37;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_97 = __this->___textMaterial_67;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_98;
		L_98 = Color_get_white_m28BB6E19F27D4EE6858D3021A44F62BC74E20C43_inline(NULL);
		String_t* L_99 = ((MixedRealityToolkitVisualProfiler_t7EC6FCE39C4246F2C6D408EF28AE145F66EE0CB1_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealityToolkitVisualProfiler_t7EC6FCE39C4246F2C6D408EF28AE145F66EE0CB1_il2cpp_TypeInfo_var))->___limitMemoryString_14;
		TextMesh_t7E1981C7B03E50D5CA5A3AD5B0D9BB0AB6EE91F8* L_100;
		L_100 = MixedRealityToolkitVisualProfiler_CreateText_mE4D0118EC0F55A9D00AA786BBF606DADBBF79E7F(_stringLiteralE742EA1C34A6165D061B136B6C1DC96EC4815E5A, L_95, L_96, 2, L_97, L_98, L_99, NULL);
		__this->___limitMemoryText_40 = L_100;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___limitMemoryText_40), (void*)L_100);
		// voiceCommandText = CreateText("VoiceCommandText", new Vector3(-0.525f, -0.7f, 0.0f), memoryStats, TextAnchor.UpperLeft, textMaterial, Color.white, voiceCommandString);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_101;
		memset((&L_101), 0, sizeof(L_101));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_101), (-0.524999976f), (-0.699999988f), (0.0f), /*hidden argument*/NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_102 = __this->___memoryStats_37;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_103 = __this->___textMaterial_67;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_104;
		L_104 = Color_get_white_m28BB6E19F27D4EE6858D3021A44F62BC74E20C43_inline(NULL);
		String_t* L_105 = ((MixedRealityToolkitVisualProfiler_t7EC6FCE39C4246F2C6D408EF28AE145F66EE0CB1_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealityToolkitVisualProfiler_t7EC6FCE39C4246F2C6D408EF28AE145F66EE0CB1_il2cpp_TypeInfo_var))->___voiceCommandString_15;
		TextMesh_t7E1981C7B03E50D5CA5A3AD5B0D9BB0AB6EE91F8* L_106;
		L_106 = MixedRealityToolkitVisualProfiler_CreateText_mE4D0118EC0F55A9D00AA786BBF606DADBBF79E7F(_stringLiteral2A4FA5F9A66DEEA10B9329AC6B6C4542BCEC1AB2, L_101, L_102, 0, L_103, L_104, L_105, NULL);
		__this->___voiceCommandText_41 = L_106;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___voiceCommandText_41), (void*)L_106);
		// mrtkText = CreateText("MRTKText", new Vector3(0.52f, -0.7f, 0.0f), memoryStats, TextAnchor.UpperRight, textMaterial, Color.white, visualProfilerTitleString);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_107;
		memset((&L_107), 0, sizeof(L_107));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_107), (0.519999981f), (-0.699999988f), (0.0f), /*hidden argument*/NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_108 = __this->___memoryStats_37;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_109 = __this->___textMaterial_67;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_110;
		L_110 = Color_get_white_m28BB6E19F27D4EE6858D3021A44F62BC74E20C43_inline(NULL);
		String_t* L_111 = ((MixedRealityToolkitVisualProfiler_t7EC6FCE39C4246F2C6D408EF28AE145F66EE0CB1_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealityToolkitVisualProfiler_t7EC6FCE39C4246F2C6D408EF28AE145F66EE0CB1_il2cpp_TypeInfo_var))->___visualProfilerTitleString_16;
		TextMesh_t7E1981C7B03E50D5CA5A3AD5B0D9BB0AB6EE91F8* L_112;
		L_112 = MixedRealityToolkitVisualProfiler_CreateText_mE4D0118EC0F55A9D00AA786BBF606DADBBF79E7F(_stringLiteralAE4AFE18D2E7C6893B503506A2B19780C8F7E0C7, L_107, L_108, 2, L_109, L_110, L_111, NULL);
		__this->___mrtkText_42 = L_112;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mrtkText_42), (void*)L_112);
		// voiceCommandText.fontSize = 32;
		TextMesh_t7E1981C7B03E50D5CA5A3AD5B0D9BB0AB6EE91F8* L_113 = __this->___voiceCommandText_41;
		NullCheck(L_113);
		TextMesh_set_fontSize_mAB9F7FFC0E4DB759B786F6A9357B18C86015498B(L_113, ((int32_t)32), NULL);
		// mrtkText.fontSize = 32;
		TextMesh_t7E1981C7B03E50D5CA5A3AD5B0D9BB0AB6EE91F8* L_114 = __this->___mrtkText_42;
		NullCheck(L_114);
		TextMesh_set_fontSize_mAB9F7FFC0E4DB759B786F6A9357B18C86015498B(L_114, ((int32_t)32), NULL);
		// GameObject limitBar = CreateQuad("LimitBar", memoryStats);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_115 = __this->___memoryStats_37;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_116;
		L_116 = MixedRealityToolkitVisualProfiler_CreateQuad_mAE94A1A2BF7B270E53738BC38DCBC177EDB22FAB(_stringLiteral91EFB368757A86BC9A88975F715DAF8641FEA56D, L_115, NULL);
		V_3 = L_116;
		// InitializeRenderer(limitBar, defaultMaterial, colorID, memoryLimitColor);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_117 = V_3;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_118 = __this->___defaultMaterial_63;
		int32_t L_119 = __this->___colorID_52;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_120 = __this->___memoryLimitColor_32;
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_121;
		L_121 = MixedRealityToolkitVisualProfiler_InitializeRenderer_m2E1FC0C4AF9A74A942A15C93BD52B3AFC04FC88F(L_117, L_118, L_119, L_120, NULL);
		// limitBar.transform.localScale = new Vector3(0.99f, 0.2f, 1.0f);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_122 = V_3;
		NullCheck(L_122);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_123;
		L_123 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_122, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_124;
		memset((&L_124), 0, sizeof(L_124));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_124), (0.99000001f), (0.200000003f), (1.0f), /*hidden argument*/NULL);
		NullCheck(L_123);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_123, L_124, NULL);
		// limitBar.transform.localPosition = new Vector3(0.0f, -0.37f, 0.0f);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_125 = V_3;
		NullCheck(L_125);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_126;
		L_126 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_125, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_127;
		memset((&L_127), 0, sizeof(L_127));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_127), (0.0f), (-0.370000005f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_126);
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_126, L_127, NULL);
		// usedAnchor = CreateAnchor("UsedAnchor", limitBar.transform);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_128 = V_3;
		NullCheck(L_128);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_129;
		L_129 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_128, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_130;
		L_130 = MixedRealityToolkitVisualProfiler_CreateAnchor_mFF35C931C94179AA5F28776616CBFEE640EAFD4E(_stringLiteralBDE0E17908169C9D71086DA3C3CE1626CDA9F5B8, L_129, NULL);
		__this->___usedAnchor_43 = L_130;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___usedAnchor_43), (void*)L_130);
		// GameObject bar = CreateQuad("UsedBar", usedAnchor);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_131 = __this->___usedAnchor_43;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_132;
		L_132 = MixedRealityToolkitVisualProfiler_CreateQuad_mAE94A1A2BF7B270E53738BC38DCBC177EDB22FAB(_stringLiteral88C0A409384124B23F80517191AAD25B944B47B9, L_131, NULL);
		// Material material = new Material(foregroundMaterial);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_133 = __this->___foregroundMaterial_66;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_134 = (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3*)il2cpp_codegen_object_new(Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_il2cpp_TypeInfo_var);
		NullCheck(L_134);
		Material__ctor_mFCC42FB90257F1E8F7516A8640A79C465A39961C(L_134, L_133, NULL);
		V_4 = L_134;
		// material.renderQueue += 1;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_135 = V_4;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_136 = L_135;
		NullCheck(L_136);
		int32_t L_137;
		L_137 = Material_get_renderQueue_mC427C54D2667620CBB845559DA4DA31BE166C757(L_136, NULL);
		NullCheck(L_136);
		Material_set_renderQueue_mFBB72A781DCCF0D4B85670B597788EC2D02D1C14(L_136, ((int32_t)il2cpp_codegen_add(L_137, 1)), NULL);
		// InitializeRenderer(bar, material, colorID, memoryUsedColor);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_138 = L_132;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_139 = V_4;
		int32_t L_140 = __this->___colorID_52;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_141 = __this->___memoryUsedColor_30;
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_142;
		L_142 = MixedRealityToolkitVisualProfiler_InitializeRenderer_m2E1FC0C4AF9A74A942A15C93BD52B3AFC04FC88F(L_138, L_139, L_140, L_141, NULL);
		// bar.transform.localScale = Vector3.one;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_143 = L_138;
		NullCheck(L_143);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_144;
		L_144 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_143, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_145;
		L_145 = Vector3_get_one_mE6A2D5C6578E94268024613B596BF09F990B1260_inline(NULL);
		NullCheck(L_144);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_144, L_145, NULL);
		// bar.transform.localPosition = new Vector3(0.5f, 0.0f, 0.0f);
		NullCheck(L_143);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_146;
		L_146 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_143, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_147;
		memset((&L_147), 0, sizeof(L_147));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_147), (0.5f), (0.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_146);
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_146, L_147, NULL);
		// peakAnchor = CreateAnchor("PeakAnchor", limitBar.transform);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_148 = V_3;
		NullCheck(L_148);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_149;
		L_149 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_148, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_150;
		L_150 = MixedRealityToolkitVisualProfiler_CreateAnchor_mFF35C931C94179AA5F28776616CBFEE640EAFD4E(_stringLiteral1665DB987C5901E42B248E6D1128B9B20A1583AE, L_149, NULL);
		__this->___peakAnchor_44 = L_150;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___peakAnchor_44), (void*)L_150);
		// GameObject bar = CreateQuad("PeakBar", peakAnchor);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_151 = __this->___peakAnchor_44;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_152;
		L_152 = MixedRealityToolkitVisualProfiler_CreateQuad_mAE94A1A2BF7B270E53738BC38DCBC177EDB22FAB(_stringLiteral11C6A78DFF7F1AD65B32D4BFAA7E9E99490CF2C3, L_151, NULL);
		// InitializeRenderer(bar, foregroundMaterial, colorID, memoryPeakColor);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_153 = L_152;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_154 = __this->___foregroundMaterial_66;
		int32_t L_155 = __this->___colorID_52;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_156 = __this->___memoryPeakColor_31;
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_157;
		L_157 = MixedRealityToolkitVisualProfiler_InitializeRenderer_m2E1FC0C4AF9A74A942A15C93BD52B3AFC04FC88F(L_153, L_154, L_155, L_156, NULL);
		// bar.transform.localScale = Vector3.one;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_158 = L_153;
		NullCheck(L_158);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_159;
		L_159 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_158, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_160;
		L_160 = Vector3_get_one_mE6A2D5C6578E94268024613B596BF09F990B1260_inline(NULL);
		NullCheck(L_159);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_159, L_160, NULL);
		// bar.transform.localPosition = new Vector3(0.5f, 0.0f, 0.0f);
		NullCheck(L_158);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_161;
		L_161 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_158, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_162;
		memset((&L_162), 0, sizeof(L_162));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_162), (0.5f), (0.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_161);
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_161, L_162, NULL);
		// if (window.gameObject.activeSelf != ShouldShowProfiler)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_163 = __this->___window_33;
		NullCheck(L_163);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_164;
		L_164 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_163, NULL);
		NullCheck(L_164);
		bool L_165;
		L_165 = GameObject_get_activeSelf_m4F3E5240E138B66AAA080EA30759A3D0517DA368(L_164, NULL);
		bool L_166;
		L_166 = MixedRealityToolkitVisualProfiler_get_ShouldShowProfiler_m0F070874EFE4889B9C6EF81ACBEC16E2A182E11A(__this, NULL);
		if ((((int32_t)L_165) == ((int32_t)L_166)))
		{
			goto IL_056c;
		}
	}
	{
		// window.gameObject.SetActive(ShouldShowProfiler);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_167 = __this->___window_33;
		NullCheck(L_167);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_168;
		L_168 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_167, NULL);
		bool L_169;
		L_169 = MixedRealityToolkitVisualProfiler_get_ShouldShowProfiler_m0F070874EFE4889B9C6EF81ACBEC16E2A182E11A(__this, NULL);
		NullCheck(L_168);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_168, L_169, NULL);
	}

IL_056c:
	{
		// if (memoryStats.gameObject.activeSelf != memoryStatsVisible)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_170 = __this->___memoryStats_37;
		NullCheck(L_170);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_171;
		L_171 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_170, NULL);
		NullCheck(L_171);
		bool L_172;
		L_172 = GameObject_get_activeSelf_m4F3E5240E138B66AAA080EA30759A3D0517DA368(L_171, NULL);
		bool L_173 = __this->___memoryStatsVisible_20;
		if ((((int32_t)L_172) == ((int32_t)L_173)))
		{
			goto IL_059a;
		}
	}
	{
		// memoryStats.gameObject.SetActive(memoryStatsVisible);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_174 = __this->___memoryStats_37;
		NullCheck(L_174);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_175;
		L_175 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_174, NULL);
		bool L_176 = __this->___memoryStatsVisible_20;
		NullCheck(L_175);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_175, L_176, NULL);
	}

IL_059a:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::BuildFrameRateStrings()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityToolkitVisualProfiler_BuildFrameRateStrings_mE63481C87E093E2A21C7694B6F7D23F7BEFBD478 (MixedRealityToolkitVisualProfiler_t7EC6FCE39C4246F2C6D408EF28AE145F66EE0CB1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MixedRealityToolkitVisualProfiler_t7EC6FCE39C4246F2C6D408EF28AE145F66EE0CB1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5AF01B63568D803A05C906F1C9342492BA1EDDB7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD4A3FE6E27265CF0EF686C9A884EA90AF8543380);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE73E556B63D0D9AA9CA37DDA8CB42B123F187DEC);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	StringBuilder_t* V_1 = NULL;
	StringBuilder_t* V_2 = NULL;
	int32_t V_3 = 0;
	float V_4 = 0.0f;
	float G_B4_0 = 0.0f;
	{
		// cpuFrameRateStrings = new string[maxTargetFrameRate + 1];
		il2cpp_codegen_runtime_class_init_inline(MixedRealityToolkitVisualProfiler_t7EC6FCE39C4246F2C6D408EF28AE145F66EE0CB1_il2cpp_TypeInfo_var);
		int32_t L_0 = ((MixedRealityToolkitVisualProfiler_t7EC6FCE39C4246F2C6D408EF28AE145F66EE0CB1_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealityToolkitVisualProfiler_t7EC6FCE39C4246F2C6D408EF28AE145F66EE0CB1_il2cpp_TypeInfo_var))->___maxTargetFrameRate_5;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_1 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_add(L_0, 1)));
		__this->___cpuFrameRateStrings_57 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___cpuFrameRateStrings_57), (void*)L_1);
		// gpuFrameRateStrings = new string[maxTargetFrameRate + 1];
		int32_t L_2 = ((MixedRealityToolkitVisualProfiler_t7EC6FCE39C4246F2C6D408EF28AE145F66EE0CB1_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealityToolkitVisualProfiler_t7EC6FCE39C4246F2C6D408EF28AE145F66EE0CB1_il2cpp_TypeInfo_var))->___maxTargetFrameRate_5;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_3 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_add(L_2, 1)));
		__this->___gpuFrameRateStrings_58 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___gpuFrameRateStrings_58), (void*)L_3);
		// string displayedDecimalFormat = string.Format("{{0:F{0}}}", displayedDecimalDigits);
		int32_t L_4 = __this->___displayedDecimalDigits_27;
		int32_t L_5 = L_4;
		RuntimeObject* L_6 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_5);
		String_t* L_7;
		L_7 = String_Format_m8C122B26BC5AA10E2550AECA16E57DAE10F07E30(_stringLiteral5AF01B63568D803A05C906F1C9342492BA1EDDB7, L_6, NULL);
		V_0 = L_7;
		// StringBuilder stringBuilder = new StringBuilder(32);
		StringBuilder_t* L_8 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		StringBuilder__ctor_m2619CA8D2C3476DF1A302D9D941498BB1C6164C5(L_8, ((int32_t)32), NULL);
		V_1 = L_8;
		// StringBuilder milisecondStringBuilder = new StringBuilder(16);
		StringBuilder_t* L_9 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		NullCheck(L_9);
		StringBuilder__ctor_m2619CA8D2C3476DF1A302D9D941498BB1C6164C5(L_9, ((int32_t)16), NULL);
		V_2 = L_9;
		// for (int i = 0; i < cpuFrameRateStrings.Length; ++i)
		V_3 = 0;
		goto IL_00e1;
	}

IL_0051:
	{
		// float miliseconds = (i == 0) ? 0.0f : (1.0f / i) * 1000.0f;
		int32_t L_10 = V_3;
		if (!L_10)
		{
			goto IL_0064;
		}
	}
	{
		int32_t L_11 = V_3;
		G_B4_0 = ((float)il2cpp_codegen_multiply(((float)((1.0f)/((float)L_11))), (1000.0f)));
		goto IL_0069;
	}

IL_0064:
	{
		G_B4_0 = (0.0f);
	}

IL_0069:
	{
		V_4 = G_B4_0;
		// milisecondStringBuilder.AppendFormat(displayedDecimalFormat, miliseconds);
		StringBuilder_t* L_12 = V_2;
		String_t* L_13 = V_0;
		float L_14 = V_4;
		float L_15 = L_14;
		RuntimeObject* L_16 = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &L_15);
		NullCheck(L_12);
		StringBuilder_t* L_17;
		L_17 = StringBuilder_AppendFormat_mFA88863E4018C2912D1A783E0EA6DAE4F594124F(L_12, L_13, L_16, NULL);
		// stringBuilder.AppendFormat("CPU: {0} fps ({1} ms)", i.ToString(), milisecondStringBuilder.ToString());
		StringBuilder_t* L_18 = V_1;
		String_t* L_19;
		L_19 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_3), NULL);
		StringBuilder_t* L_20 = V_2;
		NullCheck(L_20);
		String_t* L_21;
		L_21 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_20);
		NullCheck(L_18);
		StringBuilder_t* L_22;
		L_22 = StringBuilder_AppendFormat_mAB076D92DC92723B2224D75987BE463AF1CE7132(L_18, _stringLiteralD4A3FE6E27265CF0EF686C9A884EA90AF8543380, L_19, L_21, NULL);
		// cpuFrameRateStrings[i] = stringBuilder.ToString();
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_23 = __this->___cpuFrameRateStrings_57;
		int32_t L_24 = V_3;
		StringBuilder_t* L_25 = V_1;
		NullCheck(L_25);
		String_t* L_26;
		L_26 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_25);
		NullCheck(L_23);
		ArrayElementTypeCheck (L_23, L_26);
		(L_23)->SetAt(static_cast<il2cpp_array_size_t>(L_24), (String_t*)L_26);
		// stringBuilder.Length = 0;
		StringBuilder_t* L_27 = V_1;
		NullCheck(L_27);
		StringBuilder_set_Length_mE2427BDAEF91C4E4A6C80F3BDF1F6E01DBCC2414(L_27, 0, NULL);
		// stringBuilder.AppendFormat("GPU: {0} fps ({1} ms)", i.ToString(), milisecondStringBuilder.ToString());
		StringBuilder_t* L_28 = V_1;
		String_t* L_29;
		L_29 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_3), NULL);
		StringBuilder_t* L_30 = V_2;
		NullCheck(L_30);
		String_t* L_31;
		L_31 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_30);
		NullCheck(L_28);
		StringBuilder_t* L_32;
		L_32 = StringBuilder_AppendFormat_mAB076D92DC92723B2224D75987BE463AF1CE7132(L_28, _stringLiteralE73E556B63D0D9AA9CA37DDA8CB42B123F187DEC, L_29, L_31, NULL);
		// gpuFrameRateStrings[i] = stringBuilder.ToString();
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_33 = __this->___gpuFrameRateStrings_58;
		int32_t L_34 = V_3;
		StringBuilder_t* L_35 = V_1;
		NullCheck(L_35);
		String_t* L_36;
		L_36 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_35);
		NullCheck(L_33);
		ArrayElementTypeCheck (L_33, L_36);
		(L_33)->SetAt(static_cast<il2cpp_array_size_t>(L_34), (String_t*)L_36);
		// milisecondStringBuilder.Length = 0;
		StringBuilder_t* L_37 = V_2;
		NullCheck(L_37);
		StringBuilder_set_Length_mE2427BDAEF91C4E4A6C80F3BDF1F6E01DBCC2414(L_37, 0, NULL);
		// stringBuilder.Length = 0;
		StringBuilder_t* L_38 = V_1;
		NullCheck(L_38);
		StringBuilder_set_Length_mE2427BDAEF91C4E4A6C80F3BDF1F6E01DBCC2414(L_38, 0, NULL);
		// for (int i = 0; i < cpuFrameRateStrings.Length; ++i)
		int32_t L_39 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_39, 1));
	}

IL_00e1:
	{
		// for (int i = 0; i < cpuFrameRateStrings.Length; ++i)
		int32_t L_40 = V_3;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_41 = __this->___cpuFrameRateStrings_57;
		NullCheck(L_41);
		if ((((int32_t)L_40) < ((int32_t)((int32_t)(((RuntimeArray*)L_41)->max_length)))))
		{
			goto IL_0051;
		}
	}
	{
		// }
		return;
	}
}
// UnityEngine.Transform Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::CreateAnchor(System.String,UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* MixedRealityToolkitVisualProfiler_CreateAnchor_mFF35C931C94179AA5F28776616CBFEE640EAFD4E (String_t* ___name0, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___parent1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Transform anchor = new GameObject(name).transform;
		String_t* L_0 = ___name0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)il2cpp_codegen_object_new(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		GameObject__ctor_m37D512B05D292F954792225E6C6EEE95293A9B88(L_1, L_0, NULL);
		NullCheck(L_1);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_1, NULL);
		// anchor.parent = parent;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3 = L_2;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4 = ___parent1;
		NullCheck(L_3);
		Transform_set_parent_m9BD5E563B539DD5BEC342736B03F97B38A243234(L_3, L_4, NULL);
		// anchor.localScale = Vector3.one;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5 = L_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Vector3_get_one_mE6A2D5C6578E94268024613B596BF09F990B1260_inline(NULL);
		NullCheck(L_5);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_5, L_6, NULL);
		// anchor.localPosition = new Vector3(-0.5f, 0.0f, 0.0f);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7 = L_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		memset((&L_8), 0, sizeof(L_8));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_8), (-0.5f), (0.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_7);
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_7, L_8, NULL);
		// return anchor;
		return L_7;
	}
}
// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::CreateQuad(System.String,UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* MixedRealityToolkitVisualProfiler_CreateQuad_mAE94A1A2BF7B270E53738BC38DCBC177EDB22FAB (String_t* ___name0, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___parent1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisCollider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_m4CB0FC4E59CE6C91F1106739EF364208A63E2597_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// GameObject quad = GameObject.CreatePrimitive(PrimitiveType.Quad);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = GameObject_CreatePrimitive_mE2F848626FE928B6E3810ABFB81867E619BB2507(5, NULL);
		// Destroy(quad.GetComponent<Collider>());
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = L_0;
		NullCheck(L_1);
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_2;
		L_2 = GameObject_GetComponent_TisCollider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_m4CB0FC4E59CE6C91F1106739EF364208A63E2597(L_1, GameObject_GetComponent_TisCollider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_m4CB0FC4E59CE6C91F1106739EF364208A63E2597_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mFCDAE6333522488F60597AF019EA90BB1207A5AA(L_2, NULL);
		// quad.name = name;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = L_1;
		String_t* L_4 = ___name0;
		NullCheck(L_3);
		Object_set_name_mC79E6DC8FFD72479C90F0C4CC7F42A0FEAF5AE47(L_3, L_4, NULL);
		// quad.transform.parent = parent;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5 = L_3;
		NullCheck(L_5);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6;
		L_6 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_5, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7 = ___parent1;
		NullCheck(L_6);
		Transform_set_parent_m9BD5E563B539DD5BEC342736B03F97B38A243234(L_6, L_7, NULL);
		// return quad;
		return L_5;
	}
}
// UnityEngine.TextMesh Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::CreateText(System.String,UnityEngine.Vector3,UnityEngine.Transform,UnityEngine.TextAnchor,UnityEngine.Material,UnityEngine.Color,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TextMesh_t7E1981C7B03E50D5CA5A3AD5B0D9BB0AB6EE91F8* MixedRealityToolkitVisualProfiler_CreateText_mE4D0118EC0F55A9D00AA786BBF606DADBBF79E7F (String_t* ___name0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position1, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___parent2, int32_t ___anchor3, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material4, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___color5, String_t* ___text6, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisTextMesh_t7E1981C7B03E50D5CA5A3AD5B0D9BB0AB6EE91F8_mFAD74D91BCACF9C3FAE6960EB58D5C346DDBD9C2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_m026EB44DB6238F13E2AFBECF1FBBE924CB1B040A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MixedRealityToolkitVisualProfiler_t7EC6FCE39C4246F2C6D408EF28AE145F66EE0CB1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_0 = NULL;
	{
		// GameObject obj = new GameObject(name);
		String_t* L_0 = ___name0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)il2cpp_codegen_object_new(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		GameObject__ctor_m37D512B05D292F954792225E6C6EEE95293A9B88(L_1, L_0, NULL);
		V_0 = L_1;
		// obj.transform.localScale = Vector3.one * 0.0016f;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = V_0;
		NullCheck(L_2);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_2, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Vector3_get_one_mE6A2D5C6578E94268024613B596BF09F990B1260_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_4, (0.00159999996f), NULL);
		NullCheck(L_3);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_3, L_5, NULL);
		// obj.transform.parent = parent;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6 = V_0;
		NullCheck(L_6);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7;
		L_7 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_6, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8 = ___parent2;
		NullCheck(L_7);
		Transform_set_parent_m9BD5E563B539DD5BEC342736B03F97B38A243234(L_7, L_8, NULL);
		// obj.transform.localPosition = position;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9 = V_0;
		NullCheck(L_9);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_10;
		L_10 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_9, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11 = ___position1;
		NullCheck(L_10);
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_10, L_11, NULL);
		// TextMesh textMesh = obj.AddComponent<TextMesh>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_12 = V_0;
		NullCheck(L_12);
		TextMesh_t7E1981C7B03E50D5CA5A3AD5B0D9BB0AB6EE91F8* L_13;
		L_13 = GameObject_AddComponent_TisTextMesh_t7E1981C7B03E50D5CA5A3AD5B0D9BB0AB6EE91F8_mFAD74D91BCACF9C3FAE6960EB58D5C346DDBD9C2(L_12, GameObject_AddComponent_TisTextMesh_t7E1981C7B03E50D5CA5A3AD5B0D9BB0AB6EE91F8_mFAD74D91BCACF9C3FAE6960EB58D5C346DDBD9C2_RuntimeMethod_var);
		// textMesh.fontSize = 48;
		TextMesh_t7E1981C7B03E50D5CA5A3AD5B0D9BB0AB6EE91F8* L_14 = L_13;
		NullCheck(L_14);
		TextMesh_set_fontSize_mAB9F7FFC0E4DB759B786F6A9357B18C86015498B(L_14, ((int32_t)48), NULL);
		// textMesh.anchor = anchor;
		TextMesh_t7E1981C7B03E50D5CA5A3AD5B0D9BB0AB6EE91F8* L_15 = L_14;
		int32_t L_16 = ___anchor3;
		NullCheck(L_15);
		TextMesh_set_anchor_m3FCB7C4B1FF66CE189B56076C0306AFE984FCD32(L_15, L_16, NULL);
		// textMesh.color = color;
		TextMesh_t7E1981C7B03E50D5CA5A3AD5B0D9BB0AB6EE91F8* L_17 = L_15;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_18 = ___color5;
		NullCheck(L_17);
		TextMesh_set_color_mF08F30C3CD797C16289225B567724B9F07DC641E(L_17, L_18, NULL);
		// textMesh.text = text;
		TextMesh_t7E1981C7B03E50D5CA5A3AD5B0D9BB0AB6EE91F8* L_19 = L_17;
		String_t* L_20 = ___text6;
		NullCheck(L_19);
		TextMesh_set_text_mDF79D39638ED82797D0B0B3BB9E6B10712F8EA9E(L_19, L_20, NULL);
		// textMesh.richText = false;
		TextMesh_t7E1981C7B03E50D5CA5A3AD5B0D9BB0AB6EE91F8* L_21 = L_19;
		NullCheck(L_21);
		TextMesh_set_richText_m26D52770D73A6B142A153B913F2D005E895F2EE2(L_21, (bool)0, NULL);
		// Renderer renderer = obj.GetComponent<Renderer>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_22 = V_0;
		NullCheck(L_22);
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_23;
		L_23 = GameObject_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_m026EB44DB6238F13E2AFBECF1FBBE924CB1B040A(L_22, GameObject_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_m026EB44DB6238F13E2AFBECF1FBBE924CB1B040A_RuntimeMethod_var);
		// renderer.sharedMaterial = material;
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_24 = L_23;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_25 = ___material4;
		NullCheck(L_24);
		Renderer_set_sharedMaterial_m5E842F9A06CFB7B77656EB319881CB4B3E8E4288(L_24, L_25, NULL);
		// OptimizeRenderer(renderer);
		il2cpp_codegen_runtime_class_init_inline(MixedRealityToolkitVisualProfiler_t7EC6FCE39C4246F2C6D408EF28AE145F66EE0CB1_il2cpp_TypeInfo_var);
		MixedRealityToolkitVisualProfiler_OptimizeRenderer_mD436C9BFDBBE4598B8FC3C82E6F5ECD648DAFDD3(L_24, NULL);
		// return textMesh;
		return L_21;
	}
}
// UnityEngine.Renderer Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::InitializeRenderer(UnityEngine.GameObject,UnityEngine.Material,System.Int32,UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* MixedRealityToolkitVisualProfiler_InitializeRenderer_m2E1FC0C4AF9A74A942A15C93BD52B3AFC04FC88F (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___obj0, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material1, int32_t ___colorID2, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___color3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_m026EB44DB6238F13E2AFBECF1FBBE924CB1B040A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MaterialPropertyBlock_t2308669579033A857EFE6E4831909F638B27411D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MixedRealityToolkitVisualProfiler_t7EC6FCE39C4246F2C6D408EF28AE145F66EE0CB1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	MaterialPropertyBlock_t2308669579033A857EFE6E4831909F638B27411D* V_0 = NULL;
	{
		// Renderer renderer = obj.GetComponent<Renderer>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = ___obj0;
		NullCheck(L_0);
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_1;
		L_1 = GameObject_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_m026EB44DB6238F13E2AFBECF1FBBE924CB1B040A(L_0, GameObject_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_m026EB44DB6238F13E2AFBECF1FBBE924CB1B040A_RuntimeMethod_var);
		// renderer.sharedMaterial = material;
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_2 = L_1;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_3 = ___material1;
		NullCheck(L_2);
		Renderer_set_sharedMaterial_m5E842F9A06CFB7B77656EB319881CB4B3E8E4288(L_2, L_3, NULL);
		// MaterialPropertyBlock propertyBlock = new MaterialPropertyBlock();
		MaterialPropertyBlock_t2308669579033A857EFE6E4831909F638B27411D* L_4 = (MaterialPropertyBlock_t2308669579033A857EFE6E4831909F638B27411D*)il2cpp_codegen_object_new(MaterialPropertyBlock_t2308669579033A857EFE6E4831909F638B27411D_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		MaterialPropertyBlock__ctor_m14C3432585F7BB65028BCD64A0FD6607A1B490FB(L_4, NULL);
		V_0 = L_4;
		// renderer.GetPropertyBlock(propertyBlock);
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_5 = L_2;
		MaterialPropertyBlock_t2308669579033A857EFE6E4831909F638B27411D* L_6 = V_0;
		NullCheck(L_5);
		Renderer_GetPropertyBlock_mD062F90343D70151CA060AE7EBEF2E85146A9FBA(L_5, L_6, NULL);
		// propertyBlock.SetColor(colorID, color);
		MaterialPropertyBlock_t2308669579033A857EFE6E4831909F638B27411D* L_7 = V_0;
		int32_t L_8 = ___colorID2;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_9 = ___color3;
		NullCheck(L_7);
		MaterialPropertyBlock_SetColor_m2E7CA761D98625E3B3CF380D3EBB2C99908FDFF6(L_7, L_8, L_9, NULL);
		// renderer.SetPropertyBlock(propertyBlock);
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_10 = L_5;
		MaterialPropertyBlock_t2308669579033A857EFE6E4831909F638B27411D* L_11 = V_0;
		NullCheck(L_10);
		Renderer_SetPropertyBlock_mF565698782FE54580B17CC0BFF9B0C4F0D68DF50(L_10, L_11, NULL);
		// OptimizeRenderer(renderer);
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_12 = L_10;
		il2cpp_codegen_runtime_class_init_inline(MixedRealityToolkitVisualProfiler_t7EC6FCE39C4246F2C6D408EF28AE145F66EE0CB1_il2cpp_TypeInfo_var);
		MixedRealityToolkitVisualProfiler_OptimizeRenderer_mD436C9BFDBBE4598B8FC3C82E6F5ECD648DAFDD3(L_12, NULL);
		// return renderer;
		return L_12;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::OptimizeRenderer(UnityEngine.Renderer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityToolkitVisualProfiler_OptimizeRenderer_mD436C9BFDBBE4598B8FC3C82E6F5ECD648DAFDD3 (Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* ___renderer0, const RuntimeMethod* method) 
{
	{
		// renderer.shadowCastingMode = UnityEngine.Rendering.ShadowCastingMode.Off;
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_0 = ___renderer0;
		NullCheck(L_0);
		Renderer_set_shadowCastingMode_mB0CD3D153E43044388AEFF7AEFDA93E80EB36D11(L_0, 0, NULL);
		// renderer.receiveShadows = false;
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_1 = ___renderer0;
		NullCheck(L_1);
		Renderer_set_receiveShadows_mABEB4C72E96E65117B7FFFD4180247565D0C1A09(L_1, (bool)0, NULL);
		// renderer.motionVectorGenerationMode = MotionVectorGenerationMode.ForceNoMotion;
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_2 = ___renderer0;
		NullCheck(L_2);
		Renderer_set_motionVectorGenerationMode_m5768AC38CBBAD505E34281889682CA464ED3A32F(L_2, 2, NULL);
		// renderer.lightProbeUsage = UnityEngine.Rendering.LightProbeUsage.Off;
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_3 = ___renderer0;
		NullCheck(L_3);
		Renderer_set_lightProbeUsage_mDCCD970DAC3546B32EF58876BABBD3353624F703(L_3, 0, NULL);
		// renderer.reflectionProbeUsage = UnityEngine.Rendering.ReflectionProbeUsage.Off;
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_4 = ___renderer0;
		NullCheck(L_4);
		Renderer_set_reflectionProbeUsage_m54A268EACA655AC3C66C4CD7F8C1EF3B41F3E008(L_4, 0, NULL);
		// renderer.allowOcclusionWhenDynamic = false;
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_5 = ___renderer0;
		NullCheck(L_5);
		Renderer_set_allowOcclusionWhenDynamic_mFAF8360D5AEEAE69443738AA7D764CF1E52EFFE7(L_5, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::MemoryUsageToString(System.Char[],System.Int32,UnityEngine.TextMesh,System.String,System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityToolkitVisualProfiler_MemoryUsageToString_m2D656475404316C58FA457222F9543FB685BEEF7 (CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___stringBuffer0, int32_t ___displayedDecimalDigits1, TextMesh_t7E1981C7B03E50D5CA5A3AD5B0D9BB0AB6EE91F8* ___textMesh2, String_t* ___prefixString3, uint64_t ___memoryUsage4, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MixedRealityToolkitVisualProfiler_t7EC6FCE39C4246F2C6D408EF28AE145F66EE0CB1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	AutoScope_tFB983697E28885CB10FFDB92D7EFD0615AEF3139 V_0;
	memset((&V_0), 0, sizeof(V_0));
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		// using (MemoryUsageToStringPerfMarker.Auto())
		il2cpp_codegen_runtime_class_init_inline(MixedRealityToolkitVisualProfiler_t7EC6FCE39C4246F2C6D408EF28AE145F66EE0CB1_il2cpp_TypeInfo_var);
		ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD L_0 = ((MixedRealityToolkitVisualProfiler_t7EC6FCE39C4246F2C6D408EF28AE145F66EE0CB1_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealityToolkitVisualProfiler_t7EC6FCE39C4246F2C6D408EF28AE145F66EE0CB1_il2cpp_TypeInfo_var))->___MemoryUsageToStringPerfMarker_77;
		V_1 = L_0;
		AutoScope_tFB983697E28885CB10FFDB92D7EFD0615AEF3139 L_1;
		L_1 = ProfilerMarker_Auto_m133FA724EB95D16187B37D2C8A501D7E989B1F8D_inline((&V_1), NULL);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00bb:
			{// begin finally (depth: 1)
				AutoScope_Dispose_mED763F3F51261EF8FB79DB32CD06E0A3F6C40481_inline((&V_0), NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				// float memoryUsageMB = ConvertBytesToMegabytes(memoryUsage);
				uint64_t L_2 = ___memoryUsage4;
				il2cpp_codegen_runtime_class_init_inline(MixedRealityToolkitVisualProfiler_t7EC6FCE39C4246F2C6D408EF28AE145F66EE0CB1_il2cpp_TypeInfo_var);
				float L_3;
				L_3 = MixedRealityToolkitVisualProfiler_ConvertBytesToMegabytes_m0F1E1AAAB9462A53BF2886BFF937CACB4B791EF9(L_2, NULL);
				// int memoryUsageIntegerDigits = (int)memoryUsageMB;
				float L_4 = L_3;
				V_2 = il2cpp_codegen_cast_double_to_int<int32_t>(L_4);
				// int memoryUsageFractionalDigits = (int)((memoryUsageMB - memoryUsageIntegerDigits) * Mathf.Pow(10.0f, displayedDecimalDigits));
				int32_t L_5 = V_2;
				int32_t L_6 = ___displayedDecimalDigits1;
				float L_7;
				L_7 = powf((10.0f), ((float)L_6));
				V_3 = il2cpp_codegen_cast_double_to_int<int32_t>(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_4, ((float)L_5))), L_7)));
				// int bufferIndex = 0;
				V_4 = 0;
				// for (int i = 0; i < prefixString.Length; ++i)
				V_5 = 0;
				goto IL_0049_1;
			}

IL_0032_1:
			{
				// stringBuffer[bufferIndex++] = prefixString[i];
				CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_8 = ___stringBuffer0;
				int32_t L_9 = V_4;
				int32_t L_10 = L_9;
				V_4 = ((int32_t)il2cpp_codegen_add(L_10, 1));
				String_t* L_11 = ___prefixString3;
				int32_t L_12 = V_5;
				NullCheck(L_11);
				Il2CppChar L_13;
				L_13 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_11, L_12, NULL);
				NullCheck(L_8);
				(L_8)->SetAt(static_cast<il2cpp_array_size_t>(L_10), (Il2CppChar)L_13);
				// for (int i = 0; i < prefixString.Length; ++i)
				int32_t L_14 = V_5;
				V_5 = ((int32_t)il2cpp_codegen_add(L_14, 1));
			}

IL_0049_1:
			{
				// for (int i = 0; i < prefixString.Length; ++i)
				int32_t L_15 = V_5;
				String_t* L_16 = ___prefixString3;
				NullCheck(L_16);
				int32_t L_17;
				L_17 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_16, NULL);
				if ((((int32_t)L_15) < ((int32_t)L_17)))
				{
					goto IL_0032_1;
				}
			}
			{
				// bufferIndex = MemoryItoA(memoryUsageIntegerDigits, stringBuffer, bufferIndex);
				int32_t L_18 = V_2;
				CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_19 = ___stringBuffer0;
				int32_t L_20 = V_4;
				il2cpp_codegen_runtime_class_init_inline(MixedRealityToolkitVisualProfiler_t7EC6FCE39C4246F2C6D408EF28AE145F66EE0CB1_il2cpp_TypeInfo_var);
				int32_t L_21;
				L_21 = MixedRealityToolkitVisualProfiler_MemoryItoA_m0829D112818D5CD5427216B433B6312B1BFF9AB9(L_18, L_19, L_20, NULL);
				V_4 = L_21;
				// stringBuffer[bufferIndex++] = '.';
				CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_22 = ___stringBuffer0;
				int32_t L_23 = V_4;
				int32_t L_24 = L_23;
				V_4 = ((int32_t)il2cpp_codegen_add(L_24, 1));
				NullCheck(L_22);
				(L_22)->SetAt(static_cast<il2cpp_array_size_t>(L_24), (Il2CppChar)((int32_t)46));
				// if (memoryUsageFractionalDigits != 0)
				int32_t L_25 = V_3;
				if (!L_25)
				{
					goto IL_0079_1;
				}
			}
			{
				// bufferIndex = MemoryItoA(memoryUsageFractionalDigits, stringBuffer, bufferIndex);
				int32_t L_26 = V_3;
				CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_27 = ___stringBuffer0;
				int32_t L_28 = V_4;
				il2cpp_codegen_runtime_class_init_inline(MixedRealityToolkitVisualProfiler_t7EC6FCE39C4246F2C6D408EF28AE145F66EE0CB1_il2cpp_TypeInfo_var);
				int32_t L_29;
				L_29 = MixedRealityToolkitVisualProfiler_MemoryItoA_m0829D112818D5CD5427216B433B6312B1BFF9AB9(L_26, L_27, L_28, NULL);
				V_4 = L_29;
				goto IL_0094_1;
			}

IL_0079_1:
			{
				// for (int i = 0; i < displayedDecimalDigits; ++i)
				V_6 = 0;
				goto IL_008f_1;
			}

IL_007e_1:
			{
				// stringBuffer[bufferIndex++] = '0';
				CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_30 = ___stringBuffer0;
				int32_t L_31 = V_4;
				int32_t L_32 = L_31;
				V_4 = ((int32_t)il2cpp_codegen_add(L_32, 1));
				NullCheck(L_30);
				(L_30)->SetAt(static_cast<il2cpp_array_size_t>(L_32), (Il2CppChar)((int32_t)48));
				// for (int i = 0; i < displayedDecimalDigits; ++i)
				int32_t L_33 = V_6;
				V_6 = ((int32_t)il2cpp_codegen_add(L_33, 1));
			}

IL_008f_1:
			{
				// for (int i = 0; i < displayedDecimalDigits; ++i)
				int32_t L_34 = V_6;
				int32_t L_35 = ___displayedDecimalDigits1;
				if ((((int32_t)L_34) < ((int32_t)L_35)))
				{
					goto IL_007e_1;
				}
			}

IL_0094_1:
			{
				// stringBuffer[bufferIndex++] = 'M';
				CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_36 = ___stringBuffer0;
				int32_t L_37 = V_4;
				int32_t L_38 = L_37;
				V_4 = ((int32_t)il2cpp_codegen_add(L_38, 1));
				NullCheck(L_36);
				(L_36)->SetAt(static_cast<il2cpp_array_size_t>(L_38), (Il2CppChar)((int32_t)77));
				// stringBuffer[bufferIndex++] = 'B';
				CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_39 = ___stringBuffer0;
				int32_t L_40 = V_4;
				int32_t L_41 = L_40;
				V_4 = ((int32_t)il2cpp_codegen_add(L_41, 1));
				NullCheck(L_39);
				(L_39)->SetAt(static_cast<il2cpp_array_size_t>(L_41), (Il2CppChar)((int32_t)66));
				// textMesh.text = new string(stringBuffer, 0, bufferIndex);
				TextMesh_t7E1981C7B03E50D5CA5A3AD5B0D9BB0AB6EE91F8* L_42 = ___textMesh2;
				CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_43 = ___stringBuffer0;
				int32_t L_44 = V_4;
				String_t* L_45;
				L_45 = String_CreateString_mB7B3AC2AF28010538650051A9000369B1CD6BAB6(NULL, L_43, 0, L_44, NULL);
				NullCheck(L_42);
				TextMesh_set_text_mDF79D39638ED82797D0B0B3BB9E6B10712F8EA9E(L_42, L_45, NULL);
				// }
				goto IL_00c9;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00c9:
	{
		// }
		return;
	}
}
// System.Int32 Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::MemoryItoA(System.Int32,System.Char[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MixedRealityToolkitVisualProfiler_MemoryItoA_m0829D112818D5CD5427216B433B6312B1BFF9AB9 (int32_t ___value0, CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___stringBuffer1, int32_t ___bufferIndex2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MixedRealityToolkitVisualProfiler_t7EC6FCE39C4246F2C6D408EF28AE145F66EE0CB1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	AutoScope_tFB983697E28885CB10FFDB92D7EFD0615AEF3139 V_0;
	memset((&V_0), 0, sizeof(V_0));
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	Il2CppChar V_3 = 0x0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	{
		// using (MemoryItoAPerfMarker.Auto())
		il2cpp_codegen_runtime_class_init_inline(MixedRealityToolkitVisualProfiler_t7EC6FCE39C4246F2C6D408EF28AE145F66EE0CB1_il2cpp_TypeInfo_var);
		ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD L_0 = ((MixedRealityToolkitVisualProfiler_t7EC6FCE39C4246F2C6D408EF28AE145F66EE0CB1_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealityToolkitVisualProfiler_t7EC6FCE39C4246F2C6D408EF28AE145F66EE0CB1_il2cpp_TypeInfo_var))->___MemoryItoAPerfMarker_78;
		V_1 = L_0;
		AutoScope_tFB983697E28885CB10FFDB92D7EFD0615AEF3139 L_1;
		L_1 = ProfilerMarker_Auto_m133FA724EB95D16187B37D2C8A501D7E989B1F8D_inline((&V_1), NULL);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0057:
			{// begin finally (depth: 1)
				AutoScope_Dispose_mED763F3F51261EF8FB79DB32CD06E0A3F6C40481_inline((&V_0), NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				// int startIndex = bufferIndex;
				int32_t L_2 = ___bufferIndex2;
				V_2 = L_2;
				goto IL_0029_1;
			}

IL_0012_1:
			{
				// stringBuffer[bufferIndex++] = (char)((char)(value % 10) + '0');
				CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_3 = ___stringBuffer1;
				int32_t L_4 = ___bufferIndex2;
				int32_t L_5 = L_4;
				___bufferIndex2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
				int32_t L_6 = ___value0;
				NullCheck(L_3);
				(L_3)->SetAt(static_cast<il2cpp_array_size_t>(L_5), (Il2CppChar)((int32_t)(uint16_t)((int32_t)il2cpp_codegen_add(((int32_t)(uint16_t)((int32_t)(L_6%((int32_t)10)))), ((int32_t)48)))));
				// for (; value != 0; value /= 10)
				int32_t L_7 = ___value0;
				___value0 = ((int32_t)(L_7/((int32_t)10)));
			}

IL_0029_1:
			{
				// for (; value != 0; value /= 10)
				int32_t L_8 = ___value0;
				if (L_8)
				{
					goto IL_0012_1;
				}
			}
			{
				// for (int endIndex = bufferIndex - 1; startIndex < endIndex; ++startIndex, --endIndex)
				int32_t L_9 = ___bufferIndex2;
				V_4 = ((int32_t)il2cpp_codegen_subtract(L_9, 1));
				goto IL_004d_1;
			}

IL_0033_1:
			{
				// temp = stringBuffer[startIndex];
				CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_10 = ___stringBuffer1;
				int32_t L_11 = V_2;
				NullCheck(L_10);
				int32_t L_12 = L_11;
				uint16_t L_13 = (uint16_t)(L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
				V_3 = L_13;
				// stringBuffer[startIndex] = stringBuffer[endIndex];
				CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_14 = ___stringBuffer1;
				int32_t L_15 = V_2;
				CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_16 = ___stringBuffer1;
				int32_t L_17 = V_4;
				NullCheck(L_16);
				int32_t L_18 = L_17;
				uint16_t L_19 = (uint16_t)(L_16)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
				NullCheck(L_14);
				(L_14)->SetAt(static_cast<il2cpp_array_size_t>(L_15), (Il2CppChar)L_19);
				// stringBuffer[endIndex] = temp;
				CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_20 = ___stringBuffer1;
				int32_t L_21 = V_4;
				Il2CppChar L_22 = V_3;
				NullCheck(L_20);
				(L_20)->SetAt(static_cast<il2cpp_array_size_t>(L_21), (Il2CppChar)L_22);
				// for (int endIndex = bufferIndex - 1; startIndex < endIndex; ++startIndex, --endIndex)
				int32_t L_23 = V_2;
				V_2 = ((int32_t)il2cpp_codegen_add(L_23, 1));
				// for (int endIndex = bufferIndex - 1; startIndex < endIndex; ++startIndex, --endIndex)
				int32_t L_24 = V_4;
				V_4 = ((int32_t)il2cpp_codegen_subtract(L_24, 1));
			}

IL_004d_1:
			{
				// for (int endIndex = bufferIndex - 1; startIndex < endIndex; ++startIndex, --endIndex)
				int32_t L_25 = V_2;
				int32_t L_26 = V_4;
				if ((((int32_t)L_25) < ((int32_t)L_26)))
				{
					goto IL_0033_1;
				}
			}
			{
				// return bufferIndex;
				int32_t L_27 = ___bufferIndex2;
				V_5 = L_27;
				goto IL_0065;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0065:
	{
		// }
		int32_t L_28 = V_5;
		return L_28;
	}
}
// System.Single Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::get_AppTargetFrameRate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float MixedRealityToolkitVisualProfiler_get_AppTargetFrameRate_mBF51B4DE13383FCE806243AE7D92728DDE8E61AD (const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		// float refreshRate = UnityEngine.XR.XRDevice.refreshRate;
		float L_0;
		L_0 = XRDevice_get_refreshRate_m5F492E6198C73E6DC60B5B81E3FE7B78ED84A555(NULL);
		V_0 = L_0;
		// return ((int)refreshRate == 0) ? 60.0f : refreshRate;
		float L_1 = V_0;
		if (!il2cpp_codegen_cast_double_to_int<int32_t>(L_1))
		{
			goto IL_000c;
		}
	}
	{
		float L_2 = V_0;
		return L_2;
	}

IL_000c:
	{
		return (60.0f);
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::AverageFrameTiming(UnityEngine.FrameTiming[],System.UInt32,System.Single&,System.Single&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityToolkitVisualProfiler_AverageFrameTiming_mA4485AC71E1782351ED9A48C629B525C4190D318 (FrameTimingU5BU5D_t32DDC21D000DE3127D5DF845AFEC7B02A0AE390E* ___frameTimings0, uint32_t ___frameTimingsCount1, float* ___cpuFrameTime2, float* ___gpuFrameTime3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MixedRealityToolkitVisualProfiler_t7EC6FCE39C4246F2C6D408EF28AE145F66EE0CB1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	AutoScope_tFB983697E28885CB10FFDB92D7EFD0615AEF3139 V_0;
	memset((&V_0), 0, sizeof(V_0));
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD V_1;
	memset((&V_1), 0, sizeof(V_1));
	double V_2 = 0.0;
	double V_3 = 0.0;
	int32_t V_4 = 0;
	{
		// using (AverageFrameTimingPerfMarker.Auto())
		il2cpp_codegen_runtime_class_init_inline(MixedRealityToolkitVisualProfiler_t7EC6FCE39C4246F2C6D408EF28AE145F66EE0CB1_il2cpp_TypeInfo_var);
		ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD L_0 = ((MixedRealityToolkitVisualProfiler_t7EC6FCE39C4246F2C6D408EF28AE145F66EE0CB1_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealityToolkitVisualProfiler_t7EC6FCE39C4246F2C6D408EF28AE145F66EE0CB1_il2cpp_TypeInfo_var))->___AverageFrameTimingPerfMarker_79;
		V_1 = L_0;
		AutoScope_tFB983697E28885CB10FFDB92D7EFD0615AEF3139 L_1;
		L_1 = ProfilerMarker_Auto_m133FA724EB95D16187B37D2C8A501D7E989B1F8D_inline((&V_1), NULL);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_007e:
			{// begin finally (depth: 1)
				AutoScope_Dispose_mED763F3F51261EF8FB79DB32CD06E0A3F6C40481_inline((&V_0), NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				// double cpuTime = 0.0f;
				V_2 = (0.0);
				// double gpuTime = 0.0f;
				V_3 = (0.0);
				// for (int i = 0; i < frameTimingsCount; ++i)
				V_4 = 0;
				goto IL_004d_1;
			}

IL_0027_1:
			{
				// cpuTime += frameTimings[i].cpuFrameTime;
				double L_2 = V_2;
				FrameTimingU5BU5D_t32DDC21D000DE3127D5DF845AFEC7B02A0AE390E* L_3 = ___frameTimings0;
				int32_t L_4 = V_4;
				NullCheck(L_3);
				double L_5 = ((L_3)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_4)))->___cpuFrameTime_1;
				V_2 = ((double)il2cpp_codegen_add(L_2, L_5));
				// gpuTime += frameTimings[i].gpuFrameTime;
				double L_6 = V_3;
				FrameTimingU5BU5D_t32DDC21D000DE3127D5DF845AFEC7B02A0AE390E* L_7 = ___frameTimings0;
				int32_t L_8 = V_4;
				NullCheck(L_7);
				double L_9 = ((L_7)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_8)))->___gpuFrameTime_3;
				V_3 = ((double)il2cpp_codegen_add(L_6, L_9));
				// for (int i = 0; i < frameTimingsCount; ++i)
				int32_t L_10 = V_4;
				V_4 = ((int32_t)il2cpp_codegen_add(L_10, 1));
			}

IL_004d_1:
			{
				// for (int i = 0; i < frameTimingsCount; ++i)
				int32_t L_11 = V_4;
				uint32_t L_12 = ___frameTimingsCount1;
				if ((((int64_t)((int64_t)L_11)) < ((int64_t)((int64_t)(uint64_t)L_12))))
				{
					goto IL_0027_1;
				}
			}
			{
				// cpuTime /= frameTimingsCount;
				double L_13 = V_2;
				uint32_t L_14 = ___frameTimingsCount1;
				V_2 = ((double)(L_13/((double)((double)(uint32_t)L_14))));
				// gpuTime /= frameTimingsCount;
				double L_15 = V_3;
				uint32_t L_16 = ___frameTimingsCount1;
				V_3 = ((double)(L_15/((double)((double)(uint32_t)L_16))));
				// cpuFrameTime = (float)(cpuTime * 0.001);
				float* L_17 = ___cpuFrameTime2;
				double L_18 = V_2;
				*((float*)L_17) = (float)((float)((double)il2cpp_codegen_multiply(L_18, (0.001))));
				// gpuFrameTime = (float)(gpuTime * 0.001);
				float* L_19 = ___gpuFrameTime3;
				double L_20 = V_3;
				*((float*)L_19) = (float)((float)((double)il2cpp_codegen_multiply(L_20, (0.001))));
				// }
				goto IL_008c;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_008c:
	{
		// }
		return;
	}
}
// System.UInt64 Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::get_AppMemoryUsage()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t MixedRealityToolkitVisualProfiler_get_AppMemoryUsage_m487A0C9142CB799301FC402469E1D8814E88DFED (const RuntimeMethod* method) 
{
	{
		// return MemoryManager.AppMemoryUsage;
		uint64_t L_0;
		L_0 = MemoryManager_get_AppMemoryUsage_m05C0A97F9ABF71B186DB9A03B8A6204B9D780130(NULL);
		return L_0;
	}
}
// System.UInt64 Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::get_AppMemoryUsageLimit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t MixedRealityToolkitVisualProfiler_get_AppMemoryUsageLimit_m4CE3F459245209FCBF9B09FF20240E19839E811C (const RuntimeMethod* method) 
{
	{
		// return MemoryManager.AppMemoryUsageLimit;
		uint64_t L_0;
		L_0 = MemoryManager_get_AppMemoryUsageLimit_m313F28AC8331A94F0CFADADBC2A6FF96EB4DF0FB(NULL);
		return L_0;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::WillDisplayedMemoryUsageDiffer(System.UInt64,System.UInt64,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MixedRealityToolkitVisualProfiler_WillDisplayedMemoryUsageDiffer_m8D02EDA4B096158CD38E7C795768EC3C04486031 (uint64_t ___oldUsage0, uint64_t ___newUsage1, int32_t ___displayedDecimalDigits2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MixedRealityToolkitVisualProfiler_t7EC6FCE39C4246F2C6D408EF28AE145F66EE0CB1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	AutoScope_tFB983697E28885CB10FFDB92D7EFD0615AEF3139 V_0;
	memset((&V_0), 0, sizeof(V_0));
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD V_1;
	memset((&V_1), 0, sizeof(V_1));
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	bool V_4 = false;
	{
		// using (WillDisplayedMemoryUsageDifferPerfMarker.Auto())
		il2cpp_codegen_runtime_class_init_inline(MixedRealityToolkitVisualProfiler_t7EC6FCE39C4246F2C6D408EF28AE145F66EE0CB1_il2cpp_TypeInfo_var);
		ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD L_0 = ((MixedRealityToolkitVisualProfiler_t7EC6FCE39C4246F2C6D408EF28AE145F66EE0CB1_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealityToolkitVisualProfiler_t7EC6FCE39C4246F2C6D408EF28AE145F66EE0CB1_il2cpp_TypeInfo_var))->___WillDisplayedMemoryUsageDifferPerfMarker_80;
		V_1 = L_0;
		AutoScope_tFB983697E28885CB10FFDB92D7EFD0615AEF3139 L_1;
		L_1 = ProfilerMarker_Auto_m133FA724EB95D16187B37D2C8A501D7E989B1F8D_inline((&V_1), NULL);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0038:
			{// begin finally (depth: 1)
				AutoScope_Dispose_mED763F3F51261EF8FB79DB32CD06E0A3F6C40481_inline((&V_0), NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			// float oldUsageMBs = ConvertBytesToMegabytes(oldUsage);
			uint64_t L_2 = ___oldUsage0;
			il2cpp_codegen_runtime_class_init_inline(MixedRealityToolkitVisualProfiler_t7EC6FCE39C4246F2C6D408EF28AE145F66EE0CB1_il2cpp_TypeInfo_var);
			float L_3;
			L_3 = MixedRealityToolkitVisualProfiler_ConvertBytesToMegabytes_m0F1E1AAAB9462A53BF2886BFF937CACB4B791EF9(L_2, NULL);
			// float newUsageMBs = ConvertBytesToMegabytes(newUsage);
			uint64_t L_4 = ___newUsage1;
			float L_5;
			L_5 = MixedRealityToolkitVisualProfiler_ConvertBytesToMegabytes_m0F1E1AAAB9462A53BF2886BFF937CACB4B791EF9(L_4, NULL);
			V_2 = L_5;
			// float decimalPower = Mathf.Pow(10.0f, displayedDecimalDigits);
			int32_t L_6 = ___displayedDecimalDigits2;
			float L_7;
			L_7 = powf((10.0f), ((float)L_6));
			V_3 = L_7;
			// return (int)(oldUsageMBs * decimalPower) != (int)(newUsageMBs * decimalPower);
			float L_8 = V_3;
			float L_9 = V_2;
			float L_10 = V_3;
			V_4 = (bool)((((int32_t)((((int32_t)il2cpp_codegen_cast_double_to_int<int32_t>(((float)il2cpp_codegen_multiply(L_3, L_8)))) == ((int32_t)il2cpp_codegen_cast_double_to_int<int32_t>(((float)il2cpp_codegen_multiply(L_9, L_10)))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
			goto IL_0046;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0046:
	{
		// }
		bool L_11 = V_4;
		return L_11;
	}
}
// System.UInt64 Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::ConvertMegabytesToBytes(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t MixedRealityToolkitVisualProfiler_ConvertMegabytesToBytes_m5CA898ACBDDDF534B55054C488CF43E7CBCCF7A8 (int32_t ___megabytes0, const RuntimeMethod* method) 
{
	{
		// return ((ulong)megabytes * 1024UL) * 1024UL;
		int32_t L_0 = ___megabytes0;
		return ((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_multiply(((int64_t)L_0), ((int64_t)((int32_t)1024)))), ((int64_t)((int32_t)1024))));
	}
}
// System.Single Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::ConvertBytesToMegabytes(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float MixedRealityToolkitVisualProfiler_ConvertBytesToMegabytes_m0F1E1AAAB9462A53BF2886BFF937CACB4B791EF9 (uint64_t ___bytes0, const RuntimeMethod* method) 
{
	{
		// return (bytes / 1024.0f) / 1024.0f;
		uint64_t L_0 = ___bytes0;
		return ((float)(((float)(((float)((double)(uint64_t)L_0))/(1024.0f)))/(1024.0f)));
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityToolkitVisualProfiler__ctor_m125C98713782390C9B738702E09AA09329F88C5E (MixedRealityToolkitVisualProfiler_t7EC6FCE39C4246F2C6D408EF28AE145F66EE0CB1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FrameRateColorU5BU5D_tE020E288145C85DE15325F4E79AAA8FD9905E91E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FrameTimingU5BU5D_t32DDC21D000DE3127D5DF845AFEC7B02A0AE390E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MixedRealityToolkitVisualProfiler_t7EC6FCE39C4246F2C6D408EF28AE145F66EE0CB1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stopwatch_tA188A210449E22C07053A7D3014DD182C7369043_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	FrameRateColor_tB9F29A6B870B2C8FC9647CBE7572FC0FEFAE6389 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// private bool frameInfoVisible = true;
		__this->___frameInfoVisible_19 = (bool)1;
		// private bool memoryStatsVisible = true;
		__this->___memoryStatsVisible_20 = (bool)1;
		// private float frameSampleRate = 0.1f;
		__this->___frameSampleRate_21 = (0.100000001f);
		// private TextAnchor windowAnchor = TextAnchor.LowerCenter;
		__this->___windowAnchor_22 = 7;
		// private Vector2 windowOffset = new Vector2(0.1f, 0.1f);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_0), (0.100000001f), (0.100000001f), /*hidden argument*/NULL);
		__this->___windowOffset_23 = L_0;
		// private float windowScale = 1.0f;
		__this->___windowScale_24 = (1.0f);
		// private float windowFollowSpeed = 5.0f;
		__this->___windowFollowSpeed_25 = (5.0f);
		// private int displayedDecimalDigits = 1;
		__this->___displayedDecimalDigits_27 = 1;
		// private FrameRateColor[] frameRateColors = new FrameRateColor[]
		// {
		//     // Green
		//     new FrameRateColor() { percentageOfTarget = 0.95f, color = new Color(127 / 256.0f, 186 / 256.0f, 0 / 256.0f, 1.0f) },
		//     // Yellow
		//     new FrameRateColor() { percentageOfTarget = 0.75f, color = new Color(255 / 256.0f, 185 / 256.0f, 0 / 256.0f, 1.0f) },
		//     // Red
		//     new FrameRateColor() { percentageOfTarget = 0.0f, color = new Color(255 / 256.0f, 0 / 256.0f, 0 / 256.0f, 1.0f) },
		// };
		FrameRateColorU5BU5D_tE020E288145C85DE15325F4E79AAA8FD9905E91E* L_1 = (FrameRateColorU5BU5D_tE020E288145C85DE15325F4E79AAA8FD9905E91E*)(FrameRateColorU5BU5D_tE020E288145C85DE15325F4E79AAA8FD9905E91E*)SZArrayNew(FrameRateColorU5BU5D_tE020E288145C85DE15325F4E79AAA8FD9905E91E_il2cpp_TypeInfo_var, (uint32_t)3);
		FrameRateColorU5BU5D_tE020E288145C85DE15325F4E79AAA8FD9905E91E* L_2 = L_1;
		il2cpp_codegen_initobj((&V_0), sizeof(FrameRateColor_tB9F29A6B870B2C8FC9647CBE7572FC0FEFAE6389));
		(&V_0)->___percentageOfTarget_0 = (0.949999988f);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_3;
		memset((&L_3), 0, sizeof(L_3));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_3), (0.49609375f), (0.7265625f), (0.0f), (1.0f), /*hidden argument*/NULL);
		(&V_0)->___color_1 = L_3;
		FrameRateColor_tB9F29A6B870B2C8FC9647CBE7572FC0FEFAE6389 L_4 = V_0;
		NullCheck(L_2);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (FrameRateColor_tB9F29A6B870B2C8FC9647CBE7572FC0FEFAE6389)L_4);
		FrameRateColorU5BU5D_tE020E288145C85DE15325F4E79AAA8FD9905E91E* L_5 = L_2;
		il2cpp_codegen_initobj((&V_0), sizeof(FrameRateColor_tB9F29A6B870B2C8FC9647CBE7572FC0FEFAE6389));
		(&V_0)->___percentageOfTarget_0 = (0.75f);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_6;
		memset((&L_6), 0, sizeof(L_6));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_6), (0.99609375f), (0.72265625f), (0.0f), (1.0f), /*hidden argument*/NULL);
		(&V_0)->___color_1 = L_6;
		FrameRateColor_tB9F29A6B870B2C8FC9647CBE7572FC0FEFAE6389 L_7 = V_0;
		NullCheck(L_5);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(1), (FrameRateColor_tB9F29A6B870B2C8FC9647CBE7572FC0FEFAE6389)L_7);
		FrameRateColorU5BU5D_tE020E288145C85DE15325F4E79AAA8FD9905E91E* L_8 = L_5;
		il2cpp_codegen_initobj((&V_0), sizeof(FrameRateColor_tB9F29A6B870B2C8FC9647CBE7572FC0FEFAE6389));
		(&V_0)->___percentageOfTarget_0 = (0.0f);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_9;
		memset((&L_9), 0, sizeof(L_9));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_9), (0.99609375f), (0.0f), (0.0f), (1.0f), /*hidden argument*/NULL);
		(&V_0)->___color_1 = L_9;
		FrameRateColor_tB9F29A6B870B2C8FC9647CBE7572FC0FEFAE6389 L_10 = V_0;
		NullCheck(L_8);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(2), (FrameRateColor_tB9F29A6B870B2C8FC9647CBE7572FC0FEFAE6389)L_10);
		__this->___frameRateColors_28 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___frameRateColors_28), (void*)L_8);
		// private Color baseColor = new Color(80 / 256.0f, 80 / 256.0f, 80 / 256.0f, 1.0f);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_11;
		memset((&L_11), 0, sizeof(L_11));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_11), (0.3125f), (0.3125f), (0.3125f), (1.0f), /*hidden argument*/NULL);
		__this->___baseColor_29 = L_11;
		// private Color memoryUsedColor = new Color(0 / 256.0f, 164 / 256.0f, 239 / 256.0f, 1.0f);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_12;
		memset((&L_12), 0, sizeof(L_12));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_12), (0.0f), (0.640625f), (0.93359375f), (1.0f), /*hidden argument*/NULL);
		__this->___memoryUsedColor_30 = L_12;
		// private Color memoryPeakColor = new Color(255 / 256.0f, 185 / 256.0f, 0 / 256.0f, 1.0f);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_13;
		memset((&L_13), 0, sizeof(L_13));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_13), (0.99609375f), (0.72265625f), (0.0f), (1.0f), /*hidden argument*/NULL);
		__this->___memoryPeakColor_31 = L_13;
		// private Color memoryLimitColor = new Color(150 / 256.0f, 150 / 256.0f, 150 / 256.0f, 1.0f);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_14;
		memset((&L_14), 0, sizeof(L_14));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_14), (0.5859375f), (0.5859375f), (0.5859375f), (1.0f), /*hidden argument*/NULL);
		__this->___memoryLimitColor_32 = L_14;
		// private System.Diagnostics.Stopwatch stopwatch = new System.Diagnostics.Stopwatch();
		Stopwatch_tA188A210449E22C07053A7D3014DD182C7369043* L_15 = (Stopwatch_tA188A210449E22C07053A7D3014DD182C7369043*)il2cpp_codegen_object_new(Stopwatch_tA188A210449E22C07053A7D3014DD182C7369043_il2cpp_TypeInfo_var);
		NullCheck(L_15);
		Stopwatch__ctor_mAFE6B2F45CF1C3469EF6D5307972BC098B473D0A(L_15, NULL);
		__this->___stopwatch_55 = L_15;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___stopwatch_55), (void*)L_15);
		// private FrameTiming[] frameTimings = new FrameTiming[maxFrameTimings];
		il2cpp_codegen_runtime_class_init_inline(MixedRealityToolkitVisualProfiler_t7EC6FCE39C4246F2C6D408EF28AE145F66EE0CB1_il2cpp_TypeInfo_var);
		int32_t L_16 = ((MixedRealityToolkitVisualProfiler_t7EC6FCE39C4246F2C6D408EF28AE145F66EE0CB1_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealityToolkitVisualProfiler_t7EC6FCE39C4246F2C6D408EF28AE145F66EE0CB1_il2cpp_TypeInfo_var))->___maxFrameTimings_6;
		FrameTimingU5BU5D_t32DDC21D000DE3127D5DF845AFEC7B02A0AE390E* L_17 = (FrameTimingU5BU5D_t32DDC21D000DE3127D5DF845AFEC7B02A0AE390E*)(FrameTimingU5BU5D_t32DDC21D000DE3127D5DF845AFEC7B02A0AE390E*)SZArrayNew(FrameTimingU5BU5D_t32DDC21D000DE3127D5DF845AFEC7B02A0AE390E_il2cpp_TypeInfo_var, (uint32_t)L_16);
		__this->___frameTimings_56 = L_17;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___frameTimings_56), (void*)L_17);
		// private char[] stringBuffer = new char[maxStringLength];
		int32_t L_18 = ((MixedRealityToolkitVisualProfiler_t7EC6FCE39C4246F2C6D408EF28AE145F66EE0CB1_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealityToolkitVisualProfiler_t7EC6FCE39C4246F2C6D408EF28AE145F66EE0CB1_il2cpp_TypeInfo_var))->___maxStringLength_4;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_19 = (CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)SZArrayNew(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var, (uint32_t)L_18);
		__this->___stringBuffer_59 = L_19;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___stringBuffer_59), (void*)L_19);
		// private float previousFieldOfView = -1.0f;
		__this->___previousFieldOfView_72 = (-1.0f);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityToolkitVisualProfiler__cctor_m5033B3192C4493CF0598FEB84408017C2649A2D5 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MixedRealityToolkitVisualProfiler_t7EC6FCE39C4246F2C6D408EF28AE145F66EE0CB1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0A0F778C0E661B78B1B6AD2138BA091D3D91561A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0D18A0AC35B03549F77B8A582B6AD5EA3ACA01C3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral10FFF93EF949F2334F4C415406155881D8A23640);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral584F25676660FEECE7691A51DFE6DCAE69EF135A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7406124BE72D090590042AFF1000B9BB5A1827E8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8ADCA5E5D734CB4272E0674CADBC8A574F28212C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9344B1909CA0FB9AF4A07D363E622D12B38FA32D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB2BCF9F7BF608571B66B4874A29AA5A9A5815F73);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBAABD0AA623F4F0C79BE8B249C24DC7764281437);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBDDC80DB00CCB0ED669D1DC7E87019825A1F10BE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC9FD3CD68D89191C7A02CDC20BD0BF0E52B2EEA3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDE22FF12133F1B7AE98C2C860D576E4AB10754C4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE893292347C9DB12C81CB6C10FA271B45FA1DCD0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE9F27BF4412297971361960DC3B04D57C4E019A6);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static readonly int maxStringLength = 32;
		((MixedRealityToolkitVisualProfiler_t7EC6FCE39C4246F2C6D408EF28AE145F66EE0CB1_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealityToolkitVisualProfiler_t7EC6FCE39C4246F2C6D408EF28AE145F66EE0CB1_il2cpp_TypeInfo_var))->___maxStringLength_4 = ((int32_t)32);
		// private static readonly int maxTargetFrameRate = 120;
		((MixedRealityToolkitVisualProfiler_t7EC6FCE39C4246F2C6D408EF28AE145F66EE0CB1_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealityToolkitVisualProfiler_t7EC6FCE39C4246F2C6D408EF28AE145F66EE0CB1_il2cpp_TypeInfo_var))->___maxTargetFrameRate_5 = ((int32_t)120);
		// private static readonly int maxFrameTimings = 128;
		((MixedRealityToolkitVisualProfiler_t7EC6FCE39C4246F2C6D408EF28AE145F66EE0CB1_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealityToolkitVisualProfiler_t7EC6FCE39C4246F2C6D408EF28AE145F66EE0CB1_il2cpp_TypeInfo_var))->___maxFrameTimings_6 = ((int32_t)128);
		// private static readonly int frameRange = 30;
		((MixedRealityToolkitVisualProfiler_t7EC6FCE39C4246F2C6D408EF28AE145F66EE0CB1_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealityToolkitVisualProfiler_t7EC6FCE39C4246F2C6D408EF28AE145F66EE0CB1_il2cpp_TypeInfo_var))->___frameRange_7 = ((int32_t)30);
		// private static readonly Vector2 defaultWindowRotation = new Vector2(10.0f, 20.0f);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_0), (10.0f), (20.0f), /*hidden argument*/NULL);
		((MixedRealityToolkitVisualProfiler_t7EC6FCE39C4246F2C6D408EF28AE145F66EE0CB1_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealityToolkitVisualProfiler_t7EC6FCE39C4246F2C6D408EF28AE145F66EE0CB1_il2cpp_TypeInfo_var))->___defaultWindowRotation_8 = L_0;
		// private static readonly Vector3 defaultWindowScale = new Vector3(0.2f, 0.04f, 1.0f);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		memset((&L_1), 0, sizeof(L_1));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_1), (0.200000003f), (0.0399999991f), (1.0f), /*hidden argument*/NULL);
		((MixedRealityToolkitVisualProfiler_t7EC6FCE39C4246F2C6D408EF28AE145F66EE0CB1_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealityToolkitVisualProfiler_t7EC6FCE39C4246F2C6D408EF28AE145F66EE0CB1_il2cpp_TypeInfo_var))->___defaultWindowScale_9 = L_1;
		// private static readonly Vector3[] backgroundScales = { new Vector3(1.05f, 1.2f, 1.2f), new Vector3(1.0f, 0.5f, 1.0f), new Vector3(1.0f, 0.25f, 1.0f) };
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_2 = (Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*)(Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*)SZArrayNew(Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C_il2cpp_TypeInfo_var, (uint32_t)3);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_3 = L_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_4), (1.04999995f), (1.20000005f), (1.20000005f), /*hidden argument*/NULL);
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_4);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_5 = L_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_6), (1.0f), (0.5f), (1.0f), /*hidden argument*/NULL);
		NullCheck(L_5);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(1), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_6);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_7 = L_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		memset((&L_8), 0, sizeof(L_8));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_8), (1.0f), (0.25f), (1.0f), /*hidden argument*/NULL);
		NullCheck(L_7);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(2), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_8);
		((MixedRealityToolkitVisualProfiler_t7EC6FCE39C4246F2C6D408EF28AE145F66EE0CB1_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealityToolkitVisualProfiler_t7EC6FCE39C4246F2C6D408EF28AE145F66EE0CB1_il2cpp_TypeInfo_var))->___backgroundScales_10 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&((MixedRealityToolkitVisualProfiler_t7EC6FCE39C4246F2C6D408EF28AE145F66EE0CB1_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealityToolkitVisualProfiler_t7EC6FCE39C4246F2C6D408EF28AE145F66EE0CB1_il2cpp_TypeInfo_var))->___backgroundScales_10), (void*)L_7);
		// private static readonly Vector3[] backgroundOffsets = { new Vector3(0.0f, 0.0f, 0.0f), new Vector3(0.0f, 0.25f, 0.0f), new Vector3(0.0f, 0.375f, 0.0f) };
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_9 = (Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*)(Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*)SZArrayNew(Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C_il2cpp_TypeInfo_var, (uint32_t)3);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_10 = L_9;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		memset((&L_11), 0, sizeof(L_11));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_11), (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_10);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(0), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_11);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_12 = L_10;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		memset((&L_13), 0, sizeof(L_13));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_13), (0.0f), (0.25f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_12);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(1), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_13);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_14 = L_12;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
		memset((&L_15), 0, sizeof(L_15));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_15), (0.0f), (0.375f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_14);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(2), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_15);
		((MixedRealityToolkitVisualProfiler_t7EC6FCE39C4246F2C6D408EF28AE145F66EE0CB1_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealityToolkitVisualProfiler_t7EC6FCE39C4246F2C6D408EF28AE145F66EE0CB1_il2cpp_TypeInfo_var))->___backgroundOffsets_11 = L_14;
		Il2CppCodeGenWriteBarrier((void**)(&((MixedRealityToolkitVisualProfiler_t7EC6FCE39C4246F2C6D408EF28AE145F66EE0CB1_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealityToolkitVisualProfiler_t7EC6FCE39C4246F2C6D408EF28AE145F66EE0CB1_il2cpp_TypeInfo_var))->___backgroundOffsets_11), (void*)L_14);
		// private static readonly string usedMemoryString = "Used: ";
		((MixedRealityToolkitVisualProfiler_t7EC6FCE39C4246F2C6D408EF28AE145F66EE0CB1_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealityToolkitVisualProfiler_t7EC6FCE39C4246F2C6D408EF28AE145F66EE0CB1_il2cpp_TypeInfo_var))->___usedMemoryString_12 = _stringLiteralE9F27BF4412297971361960DC3B04D57C4E019A6;
		Il2CppCodeGenWriteBarrier((void**)(&((MixedRealityToolkitVisualProfiler_t7EC6FCE39C4246F2C6D408EF28AE145F66EE0CB1_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealityToolkitVisualProfiler_t7EC6FCE39C4246F2C6D408EF28AE145F66EE0CB1_il2cpp_TypeInfo_var))->___usedMemoryString_12), (void*)_stringLiteralE9F27BF4412297971361960DC3B04D57C4E019A6);
		// private static readonly string peakMemoryString = "Peak: ";
		((MixedRealityToolkitVisualProfiler_t7EC6FCE39C4246F2C6D408EF28AE145F66EE0CB1_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealityToolkitVisualProfiler_t7EC6FCE39C4246F2C6D408EF28AE145F66EE0CB1_il2cpp_TypeInfo_var))->___peakMemoryString_13 = _stringLiteralBAABD0AA623F4F0C79BE8B249C24DC7764281437;
		Il2CppCodeGenWriteBarrier((void**)(&((MixedRealityToolkitVisualProfiler_t7EC6FCE39C4246F2C6D408EF28AE145F66EE0CB1_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealityToolkitVisualProfiler_t7EC6FCE39C4246F2C6D408EF28AE145F66EE0CB1_il2cpp_TypeInfo_var))->___peakMemoryString_13), (void*)_stringLiteralBAABD0AA623F4F0C79BE8B249C24DC7764281437);
		// private static readonly string limitMemoryString = "Limit: ";
		((MixedRealityToolkitVisualProfiler_t7EC6FCE39C4246F2C6D408EF28AE145F66EE0CB1_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealityToolkitVisualProfiler_t7EC6FCE39C4246F2C6D408EF28AE145F66EE0CB1_il2cpp_TypeInfo_var))->___limitMemoryString_14 = _stringLiteralBDDC80DB00CCB0ED669D1DC7E87019825A1F10BE;
		Il2CppCodeGenWriteBarrier((void**)(&((MixedRealityToolkitVisualProfiler_t7EC6FCE39C4246F2C6D408EF28AE145F66EE0CB1_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealityToolkitVisualProfiler_t7EC6FCE39C4246F2C6D408EF28AE145F66EE0CB1_il2cpp_TypeInfo_var))->___limitMemoryString_14), (void*)_stringLiteralBDDC80DB00CCB0ED669D1DC7E87019825A1F10BE);
		// private static readonly string voiceCommandString = "Say \"Toggle Profiler\" to show/hide";
		((MixedRealityToolkitVisualProfiler_t7EC6FCE39C4246F2C6D408EF28AE145F66EE0CB1_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealityToolkitVisualProfiler_t7EC6FCE39C4246F2C6D408EF28AE145F66EE0CB1_il2cpp_TypeInfo_var))->___voiceCommandString_15 = _stringLiteralDE22FF12133F1B7AE98C2C860D576E4AB10754C4;
		Il2CppCodeGenWriteBarrier((void**)(&((MixedRealityToolkitVisualProfiler_t7EC6FCE39C4246F2C6D408EF28AE145F66EE0CB1_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealityToolkitVisualProfiler_t7EC6FCE39C4246F2C6D408EF28AE145F66EE0CB1_il2cpp_TypeInfo_var))->___voiceCommandString_15), (void*)_stringLiteralDE22FF12133F1B7AE98C2C860D576E4AB10754C4);
		// private static readonly string visualProfilerTitleString = "MRTK Visual Profiler";
		((MixedRealityToolkitVisualProfiler_t7EC6FCE39C4246F2C6D408EF28AE145F66EE0CB1_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealityToolkitVisualProfiler_t7EC6FCE39C4246F2C6D408EF28AE145F66EE0CB1_il2cpp_TypeInfo_var))->___visualProfilerTitleString_16 = _stringLiteral9344B1909CA0FB9AF4A07D363E622D12B38FA32D;
		Il2CppCodeGenWriteBarrier((void**)(&((MixedRealityToolkitVisualProfiler_t7EC6FCE39C4246F2C6D408EF28AE145F66EE0CB1_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealityToolkitVisualProfiler_t7EC6FCE39C4246F2C6D408EF28AE145F66EE0CB1_il2cpp_TypeInfo_var))->___visualProfilerTitleString_16), (void*)_stringLiteral9344B1909CA0FB9AF4A07D363E622D12B38FA32D);
		// private static readonly ProfilerMarker LateUpdatePerfMarker = new ProfilerMarker("[MRTK] MixedRealityToolkitVisualProfiler.LateUpdate");
		ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD L_16;
		memset((&L_16), 0, sizeof(L_16));
		ProfilerMarker__ctor_mDD68B0A8B71E0301F592AF8891560150E55699C8_inline((&L_16), _stringLiteral10FFF93EF949F2334F4C415406155881D8A23640, /*hidden argument*/NULL);
		((MixedRealityToolkitVisualProfiler_t7EC6FCE39C4246F2C6D408EF28AE145F66EE0CB1_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealityToolkitVisualProfiler_t7EC6FCE39C4246F2C6D408EF28AE145F66EE0CB1_il2cpp_TypeInfo_var))->___LateUpdatePerfMarker_71 = L_16;
		// private static readonly ProfilerMarker CalculateWindowPositionPerfMarker = new ProfilerMarker("[MRTK] MixedRealityToolkitVisualProfiler.CalculateWindowPosition");
		ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD L_17;
		memset((&L_17), 0, sizeof(L_17));
		ProfilerMarker__ctor_mDD68B0A8B71E0301F592AF8891560150E55699C8_inline((&L_17), _stringLiteral0D18A0AC35B03549F77B8A582B6AD5EA3ACA01C3, /*hidden argument*/NULL);
		((MixedRealityToolkitVisualProfiler_t7EC6FCE39C4246F2C6D408EF28AE145F66EE0CB1_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealityToolkitVisualProfiler_t7EC6FCE39C4246F2C6D408EF28AE145F66EE0CB1_il2cpp_TypeInfo_var))->___CalculateWindowPositionPerfMarker_73 = L_17;
		// private static readonly ProfilerMarker CalculateWindowRotationPerfMarker = new ProfilerMarker("[MRTK] MixedRealityToolkitVisualProfiler.CalculateWindowRotation");
		ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD L_18;
		memset((&L_18), 0, sizeof(L_18));
		ProfilerMarker__ctor_mDD68B0A8B71E0301F592AF8891560150E55699C8_inline((&L_18), _stringLiteral8ADCA5E5D734CB4272E0674CADBC8A574F28212C, /*hidden argument*/NULL);
		((MixedRealityToolkitVisualProfiler_t7EC6FCE39C4246F2C6D408EF28AE145F66EE0CB1_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealityToolkitVisualProfiler_t7EC6FCE39C4246F2C6D408EF28AE145F66EE0CB1_il2cpp_TypeInfo_var))->___CalculateWindowRotationPerfMarker_74 = L_18;
		// private static readonly ProfilerMarker CalculateFrameColorPerfMarker = new ProfilerMarker("[MRTK] MixedRealityToolkitVisualProfiler.CalculateFrameColor");
		ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD L_19;
		memset((&L_19), 0, sizeof(L_19));
		ProfilerMarker__ctor_mDD68B0A8B71E0301F592AF8891560150E55699C8_inline((&L_19), _stringLiteralE893292347C9DB12C81CB6C10FA271B45FA1DCD0, /*hidden argument*/NULL);
		((MixedRealityToolkitVisualProfiler_t7EC6FCE39C4246F2C6D408EF28AE145F66EE0CB1_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealityToolkitVisualProfiler_t7EC6FCE39C4246F2C6D408EF28AE145F66EE0CB1_il2cpp_TypeInfo_var))->___CalculateFrameColorPerfMarker_75 = L_19;
		// private static readonly ProfilerMarker CalculateBackgroundSizePerfMarker = new ProfilerMarker("[MRTK] MixedRealityToolkitVisualProfiler.CalculateBackgroundSize");
		ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD L_20;
		memset((&L_20), 0, sizeof(L_20));
		ProfilerMarker__ctor_mDD68B0A8B71E0301F592AF8891560150E55699C8_inline((&L_20), _stringLiteral0A0F778C0E661B78B1B6AD2138BA091D3D91561A, /*hidden argument*/NULL);
		((MixedRealityToolkitVisualProfiler_t7EC6FCE39C4246F2C6D408EF28AE145F66EE0CB1_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealityToolkitVisualProfiler_t7EC6FCE39C4246F2C6D408EF28AE145F66EE0CB1_il2cpp_TypeInfo_var))->___CalculateBackgroundSizePerfMarker_76 = L_20;
		// private static readonly ProfilerMarker MemoryUsageToStringPerfMarker = new ProfilerMarker("[MRTK] MixedRealityToolkitVisualProfiler.MemoryUsageToString");
		ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD L_21;
		memset((&L_21), 0, sizeof(L_21));
		ProfilerMarker__ctor_mDD68B0A8B71E0301F592AF8891560150E55699C8_inline((&L_21), _stringLiteralB2BCF9F7BF608571B66B4874A29AA5A9A5815F73, /*hidden argument*/NULL);
		((MixedRealityToolkitVisualProfiler_t7EC6FCE39C4246F2C6D408EF28AE145F66EE0CB1_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealityToolkitVisualProfiler_t7EC6FCE39C4246F2C6D408EF28AE145F66EE0CB1_il2cpp_TypeInfo_var))->___MemoryUsageToStringPerfMarker_77 = L_21;
		// private static readonly ProfilerMarker MemoryItoAPerfMarker = new ProfilerMarker("[MRTK] MixedRealityToolkitVisualProfiler.MemoryItoA");
		ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD L_22;
		memset((&L_22), 0, sizeof(L_22));
		ProfilerMarker__ctor_mDD68B0A8B71E0301F592AF8891560150E55699C8_inline((&L_22), _stringLiteral584F25676660FEECE7691A51DFE6DCAE69EF135A, /*hidden argument*/NULL);
		((MixedRealityToolkitVisualProfiler_t7EC6FCE39C4246F2C6D408EF28AE145F66EE0CB1_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealityToolkitVisualProfiler_t7EC6FCE39C4246F2C6D408EF28AE145F66EE0CB1_il2cpp_TypeInfo_var))->___MemoryItoAPerfMarker_78 = L_22;
		// private static readonly ProfilerMarker AverageFrameTimingPerfMarker = new ProfilerMarker("[MRTK] MixedRealityToolkitVisualProfiler.AverageFrameTiming");
		ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD L_23;
		memset((&L_23), 0, sizeof(L_23));
		ProfilerMarker__ctor_mDD68B0A8B71E0301F592AF8891560150E55699C8_inline((&L_23), _stringLiteral7406124BE72D090590042AFF1000B9BB5A1827E8, /*hidden argument*/NULL);
		((MixedRealityToolkitVisualProfiler_t7EC6FCE39C4246F2C6D408EF28AE145F66EE0CB1_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealityToolkitVisualProfiler_t7EC6FCE39C4246F2C6D408EF28AE145F66EE0CB1_il2cpp_TypeInfo_var))->___AverageFrameTimingPerfMarker_79 = L_23;
		// private static readonly ProfilerMarker WillDisplayedMemoryUsageDifferPerfMarker = new ProfilerMarker("[MRTK] MixedRealityToolkitVisualProfiler.WillDisplayedMemoryUsageDiffer");
		ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD L_24;
		memset((&L_24), 0, sizeof(L_24));
		ProfilerMarker__ctor_mDD68B0A8B71E0301F592AF8891560150E55699C8_inline((&L_24), _stringLiteralC9FD3CD68D89191C7A02CDC20BD0BF0E52B2EEA3, /*hidden argument*/NULL);
		((MixedRealityToolkitVisualProfiler_t7EC6FCE39C4246F2C6D408EF28AE145F66EE0CB1_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealityToolkitVisualProfiler_t7EC6FCE39C4246F2C6D408EF28AE145F66EE0CB1_il2cpp_TypeInfo_var))->___WillDisplayedMemoryUsageDifferPerfMarker_80 = L_24;
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Microsoft.MixedReality.Toolkit.Diagnostics.VisualProfilerControl::ToggleProfiler()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VisualProfilerControl_ToggleProfiler_mCDF5CA3AE3B71C8A82CE3C8DB05EAB828094315E (VisualProfilerControl_tAB0446AFDBA39EF58FEC3CAF667A8B3AD706357C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CoreServices_tCB1FB80E338B89BCA07C52C15B876BC6D4B3439B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealityDiagnosticsSystem_t3A9CABAFA816AECA574E6D6479A2923557B7E678_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (CoreServices.DiagnosticsSystem != null)
		il2cpp_codegen_runtime_class_init_inline(CoreServices_tCB1FB80E338B89BCA07C52C15B876BC6D4B3439B_il2cpp_TypeInfo_var);
		RuntimeObject* L_0;
		L_0 = CoreServices_get_DiagnosticsSystem_mF195F9C99857B54C8593E143CA604D8D0A4E936C(NULL);
		if (!L_0)
		{
			goto IL_001e;
		}
	}
	{
		// CoreServices.DiagnosticsSystem.ShowProfiler = !CoreServices.DiagnosticsSystem.ShowProfiler;
		il2cpp_codegen_runtime_class_init_inline(CoreServices_tCB1FB80E338B89BCA07C52C15B876BC6D4B3439B_il2cpp_TypeInfo_var);
		RuntimeObject* L_1;
		L_1 = CoreServices_get_DiagnosticsSystem_mF195F9C99857B54C8593E143CA604D8D0A4E936C(NULL);
		RuntimeObject* L_2;
		L_2 = CoreServices_get_DiagnosticsSystem_mF195F9C99857B54C8593E143CA604D8D0A4E936C(NULL);
		NullCheck(L_2);
		bool L_3;
		L_3 = InterfaceFuncInvoker0< bool >::Invoke(3 /* System.Boolean Microsoft.MixedReality.Toolkit.Diagnostics.IMixedRealityDiagnosticsSystem::get_ShowProfiler() */, IMixedRealityDiagnosticsSystem_t3A9CABAFA816AECA574E6D6479A2923557B7E678_il2cpp_TypeInfo_var, L_2);
		NullCheck(L_1);
		InterfaceActionInvoker1< bool >::Invoke(4 /* System.Void Microsoft.MixedReality.Toolkit.Diagnostics.IMixedRealityDiagnosticsSystem::set_ShowProfiler(System.Boolean) */, IMixedRealityDiagnosticsSystem_t3A9CABAFA816AECA574E6D6479A2923557B7E678_il2cpp_TypeInfo_var, L_1, (bool)((((int32_t)L_3) == ((int32_t)0))? 1 : 0));
	}

IL_001e:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Diagnostics.VisualProfilerControl::SetProfilerVisibility(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VisualProfilerControl_SetProfilerVisibility_m5B15EEC0B0CF7CD20A07703A273595493E4C77AA (VisualProfilerControl_tAB0446AFDBA39EF58FEC3CAF667A8B3AD706357C* __this, bool ___isVisible0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CoreServices_tCB1FB80E338B89BCA07C52C15B876BC6D4B3439B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealityDiagnosticsSystem_t3A9CABAFA816AECA574E6D6479A2923557B7E678_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (CoreServices.DiagnosticsSystem != null)
		il2cpp_codegen_runtime_class_init_inline(CoreServices_tCB1FB80E338B89BCA07C52C15B876BC6D4B3439B_il2cpp_TypeInfo_var);
		RuntimeObject* L_0;
		L_0 = CoreServices_get_DiagnosticsSystem_mF195F9C99857B54C8593E143CA604D8D0A4E936C(NULL);
		if (!L_0)
		{
			goto IL_0012;
		}
	}
	{
		// CoreServices.DiagnosticsSystem.ShowProfiler = isVisible;
		il2cpp_codegen_runtime_class_init_inline(CoreServices_tCB1FB80E338B89BCA07C52C15B876BC6D4B3439B_il2cpp_TypeInfo_var);
		RuntimeObject* L_1;
		L_1 = CoreServices_get_DiagnosticsSystem_mF195F9C99857B54C8593E143CA604D8D0A4E936C(NULL);
		bool L_2 = ___isVisible0;
		NullCheck(L_1);
		InterfaceActionInvoker1< bool >::Invoke(4 /* System.Void Microsoft.MixedReality.Toolkit.Diagnostics.IMixedRealityDiagnosticsSystem::set_ShowProfiler(System.Boolean) */, IMixedRealityDiagnosticsSystem_t3A9CABAFA816AECA574E6D6479A2923557B7E678_il2cpp_TypeInfo_var, L_1, L_2);
	}

IL_0012:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Diagnostics.VisualProfilerControl::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VisualProfilerControl__ctor_m5FF52C2F4B22FC21D95379B5057BAC5A600E9AAF (VisualProfilerControl_tAB0446AFDBA39EF58FEC3CAF667A8B3AD706357C* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR SpeechCommands_t871604E2D92EE8168CBFA26F430CA2584DCF02CC SpeechEventData_get_Command_m55D611C557104EC236CE8D929CFBFA2D37216636_inline (SpeechEventData_t4424832821FEC4163B9CFCD3A9F457DF930A95BD* __this, const RuntimeMethod* method) 
{
	{
		// public SpeechCommands Command { get; private set; }
		SpeechCommands_t871604E2D92EE8168CBFA26F430CA2584DCF02CC L_0 = __this->___U3CCommandU3Ek__BackingField_7;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BaseCoreSystem_set_Registrar_m5E2AD3BA5AD91A736E0A23357E3720E5D94665A8_inline (BaseCoreSystem_t9D02F9BBC05DAD6F987F647B666B37A062ACFAA6* __this, RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	{
		// protected IMixedRealityServiceRegistrar Registrar { get; set; } = null;
		RuntimeObject* L_0 = ___value0;
		__this->___U3CRegistrarU3Ek__BackingField_20 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CRegistrarU3Ek__BackingField_20), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___x0, float ___y1, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_0 = L_0;
		float L_1 = ___y1;
		__this->___y_1 = L_1;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool MixedRealityDiagnosticsSystem_get_ShowDiagnostics_mB3491B44811943E1CC389B41FB9F07A8CA2441C8_inline (MixedRealityDiagnosticsSystem_t04B619C4E0301FBBC152B0BFA6CE2DB37DB20D3E* __this, const RuntimeMethod* method) 
{
	{
		// get { return showDiagnostics; }
		bool L_0 = __this->___showDiagnostics_25;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MixedRealityToolkitVisualProfiler_set_WindowParent_m8C2A383EAE0DAAA01C674D06D274156671480169_inline (MixedRealityToolkitVisualProfiler_t7EC6FCE39C4246F2C6D408EF28AE145F66EE0CB1* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___value0, const RuntimeMethod* method) 
{
	{
		// public Transform WindowParent { get; set; } = null;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = ___value0;
		__this->___U3CWindowParentU3Ek__BackingField_17 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CWindowParentU3Ek__BackingField_17), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool MixedRealityDiagnosticsSystem_get_ShowProfiler_m1C883793022C60F7F6782263A0C0FBF28096B4D6_inline (MixedRealityDiagnosticsSystem_t04B619C4E0301FBBC152B0BFA6CE2DB37DB20D3E* __this, const RuntimeMethod* method) 
{
	{
		// return showProfiler;
		bool L_0 = __this->___showProfiler_26;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MixedRealityToolkitVisualProfiler_set_IsVisible_mD12EBD00C00A703C3E59E7E80F86F7A8256E833E_inline (MixedRealityToolkitVisualProfiler_t7EC6FCE39C4246F2C6D408EF28AE145F66EE0CB1* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// set { isVisible = value; }
		bool L_0 = ___value0;
		__this->___isVisible_18 = L_0;
		// set { isVisible = value; }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool MixedRealityDiagnosticsSystem_get_ShowFrameInfo_mA1805B6839B7B93A77440A68859B4D4ADD556B7C_inline (MixedRealityDiagnosticsSystem_t04B619C4E0301FBBC152B0BFA6CE2DB37DB20D3E* __this, const RuntimeMethod* method) 
{
	{
		// return showFrameInfo;
		bool L_0 = __this->___showFrameInfo_27;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MixedRealityToolkitVisualProfiler_set_FrameInfoVisible_m349E44503361166137F93098D2E097058558A6C0_inline (MixedRealityToolkitVisualProfiler_t7EC6FCE39C4246F2C6D408EF28AE145F66EE0CB1* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// set { frameInfoVisible = value; }
		bool L_0 = ___value0;
		__this->___frameInfoVisible_19 = L_0;
		// set { frameInfoVisible = value; }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool MixedRealityDiagnosticsSystem_get_ShowMemoryStats_mC1FDF7701A8AFCF0D1266F45FFB3AA21855F170C_inline (MixedRealityDiagnosticsSystem_t04B619C4E0301FBBC152B0BFA6CE2DB37DB20D3E* __this, const RuntimeMethod* method) 
{
	{
		// return showMemoryStats;
		bool L_0 = __this->___showMemoryStats_28;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MixedRealityToolkitVisualProfiler_set_MemoryStatsVisible_m0DC3CF9BCE86C9E4B21FF7DF5D36FC945686E0D3_inline (MixedRealityToolkitVisualProfiler_t7EC6FCE39C4246F2C6D408EF28AE145F66EE0CB1* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// set { memoryStatsVisible = value; }
		bool L_0 = ___value0;
		__this->___memoryStatsVisible_20 = L_0;
		// set { memoryStatsVisible = value; }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float MixedRealityDiagnosticsSystem_get_FrameSampleRate_m8AA25308619FD532C0214BF8AF9ED00CFE7F5A12_inline (MixedRealityDiagnosticsSystem_t04B619C4E0301FBBC152B0BFA6CE2DB37DB20D3E* __this, const RuntimeMethod* method) 
{
	{
		// return frameSampleRate;
		float L_0 = __this->___frameSampleRate_29;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MixedRealityToolkitVisualProfiler_set_FrameSampleRate_mE9DDDAC9EAF28FFE63B467205125B1DD9082CD18_inline (MixedRealityToolkitVisualProfiler_t7EC6FCE39C4246F2C6D408EF28AE145F66EE0CB1* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		// set { frameSampleRate = value; }
		float L_0 = ___value0;
		__this->___frameSampleRate_21 = L_0;
		// set { frameSampleRate = value; }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t MixedRealityDiagnosticsSystem_get_WindowAnchor_mB96730CB17FE9BBD05EE53857E014241B3CB7D46_inline (MixedRealityDiagnosticsSystem_t04B619C4E0301FBBC152B0BFA6CE2DB37DB20D3E* __this, const RuntimeMethod* method) 
{
	{
		// get { return windowAnchor; }
		int32_t L_0 = __this->___windowAnchor_33;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MixedRealityToolkitVisualProfiler_set_WindowAnchor_m86208661CE1734612528C595D195AAF600C5561D_inline (MixedRealityToolkitVisualProfiler_t7EC6FCE39C4246F2C6D408EF28AE145F66EE0CB1* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		// set { windowAnchor = value; }
		int32_t L_0 = ___value0;
		__this->___windowAnchor_22 = L_0;
		// set { windowAnchor = value; }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 MixedRealityDiagnosticsSystem_get_WindowOffset_m22D553B3102C444590259B57DF4A565C97B0A551_inline (MixedRealityDiagnosticsSystem_t04B619C4E0301FBBC152B0BFA6CE2DB37DB20D3E* __this, const RuntimeMethod* method) 
{
	{
		// get { return windowOffset; }
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = __this->___windowOffset_34;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MixedRealityToolkitVisualProfiler_set_WindowOffset_m37BDE4220F8F35163ABFB18BC4A9856FDDEEDD46_inline (MixedRealityToolkitVisualProfiler_t7EC6FCE39C4246F2C6D408EF28AE145F66EE0CB1* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___value0, const RuntimeMethod* method) 
{
	{
		// set { windowOffset = value; }
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___value0;
		__this->___windowOffset_23 = L_0;
		// set { windowOffset = value; }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float MixedRealityDiagnosticsSystem_get_WindowScale_m50AE35DD3A2E06A826FCCA364C5FE727513FD827_inline (MixedRealityDiagnosticsSystem_t04B619C4E0301FBBC152B0BFA6CE2DB37DB20D3E* __this, const RuntimeMethod* method) 
{
	{
		// get { return windowScale; }
		float L_0 = __this->___windowScale_35;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float MixedRealityDiagnosticsSystem_get_WindowFollowSpeed_m6EEB483549E7177215D495F3212CB6F3FA11B8D9_inline (MixedRealityDiagnosticsSystem_t04B619C4E0301FBBC152B0BFA6CE2DB37DB20D3E* __this, const RuntimeMethod* method) 
{
	{
		// get { return windowFollowSpeed; }
		float L_0 = __this->___windowFollowSpeed_36;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool MixedRealityDiagnosticsSystem_get_ShowProfilerDuringMRC_m187A8E65D9D317AB74C8772005788345C302AC8C_inline (MixedRealityDiagnosticsSystem_t04B619C4E0301FBBC152B0BFA6CE2DB37DB20D3E* __this, const RuntimeMethod* method) 
{
	{
		// get { return showProfilerDuringMRC; }
		bool L_0 = __this->___showProfilerDuringMRC_37;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MixedRealityToolkitVisualProfiler_set_ShowProfilerDuringMRC_m98B8FBC4E937810D460B02A257744B12ED0185A2_inline (MixedRealityToolkitVisualProfiler_t7EC6FCE39C4246F2C6D408EF28AE145F66EE0CB1* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// set { showProfilerDuringMRC = value; }
		bool L_0 = ___value0;
		__this->___showProfilerDuringMRC_26 = L_0;
		// set { showProfilerDuringMRC = value; }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool MixedRealityDiagnosticsProfile_get_ShowDiagnostics_m944B868C34A40702F44660700DE8E0E4CB692E68_inline (MixedRealityDiagnosticsProfile_tF0C607D340096A8CF0E72C813EE76A9CBE288EFC* __this, const RuntimeMethod* method) 
{
	{
		// public bool ShowDiagnostics => showDiagnostics;
		bool L_0 = __this->___showDiagnostics_5;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool MixedRealityDiagnosticsProfile_get_ShowProfiler_m68156CE4E09E128238BC12DA7923DF359589C06E_inline (MixedRealityDiagnosticsProfile_tF0C607D340096A8CF0E72C813EE76A9CBE288EFC* __this, const RuntimeMethod* method) 
{
	{
		// public bool ShowProfiler => showProfiler;
		bool L_0 = __this->___showProfiler_6;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool MixedRealityDiagnosticsProfile_get_ShowFrameInfo_m1A89AF5B209ADD75AC99497FF65EF1FB777F844F_inline (MixedRealityDiagnosticsProfile_tF0C607D340096A8CF0E72C813EE76A9CBE288EFC* __this, const RuntimeMethod* method) 
{
	{
		// public bool ShowFrameInfo => showFrameInfo;
		bool L_0 = __this->___showFrameInfo_7;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool MixedRealityDiagnosticsProfile_get_ShowMemoryStats_m3BE6E158316BC6F50C74BBCC27C0DAF6D3411D8A_inline (MixedRealityDiagnosticsProfile_tF0C607D340096A8CF0E72C813EE76A9CBE288EFC* __this, const RuntimeMethod* method) 
{
	{
		// public bool ShowMemoryStats => showMemoryStats;
		bool L_0 = __this->___showMemoryStats_8;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float MixedRealityDiagnosticsProfile_get_FrameSampleRate_mE0E9680CE13E7A763A2F2F655ABE71EEB6258248_inline (MixedRealityDiagnosticsProfile_tF0C607D340096A8CF0E72C813EE76A9CBE288EFC* __this, const RuntimeMethod* method) 
{
	{
		// public float FrameSampleRate => frameSampleRate;
		float L_0 = __this->___frameSampleRate_9;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t MixedRealityDiagnosticsProfile_get_WindowAnchor_m77A96A92EB7B4F57ED373982FE7BFEF849832C3D_inline (MixedRealityDiagnosticsProfile_tF0C607D340096A8CF0E72C813EE76A9CBE288EFC* __this, const RuntimeMethod* method) 
{
	{
		// public TextAnchor WindowAnchor => windowAnchor;
		int32_t L_0 = __this->___windowAnchor_10;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 MixedRealityDiagnosticsProfile_get_WindowOffset_mFF121E71A3FFD1F474DFBA4997FDA77113475A39_inline (MixedRealityDiagnosticsProfile_tF0C607D340096A8CF0E72C813EE76A9CBE288EFC* __this, const RuntimeMethod* method) 
{
	{
		// public Vector2 WindowOffset => windowOffset;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = __this->___windowOffset_11;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float MixedRealityDiagnosticsProfile_get_WindowScale_m87142F5F3E6ED242E153857CD40CED9C2F5BF94B_inline (MixedRealityDiagnosticsProfile_tF0C607D340096A8CF0E72C813EE76A9CBE288EFC* __this, const RuntimeMethod* method) 
{
	{
		// public float WindowScale => windowScale;
		float L_0 = __this->___windowScale_12;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float MixedRealityDiagnosticsProfile_get_WindowFollowSpeed_m1E07ED22FB7DC35B391825AF1D169BA645D97370_inline (MixedRealityDiagnosticsProfile_tF0C607D340096A8CF0E72C813EE76A9CBE288EFC* __this, const RuntimeMethod* method) 
{
	{
		// public float WindowFollowSpeed => windowFollowSpeed;
		float L_0 = __this->___windowFollowSpeed_13;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool MixedRealityDiagnosticsProfile_get_ShowProfilerDuringMRC_m00802FE9C46E506B6FA42358218737A043EBACE6_inline (MixedRealityDiagnosticsProfile_tF0C607D340096A8CF0E72C813EE76A9CBE288EFC* __this, const RuntimeMethod* method) 
{
	{
		// public bool ShowProfilerDuringMRC => showProfilerDuringMRC;
		bool L_0 = __this->___showProfilerDuringMRC_15;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Mathf_Approximately_m1C8DD0BB6A2D22A7DCF09AD7F8EE9ABD12D3F620_inline (float ___a0, float ___b1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Mathf_tE284D016E3B297B72311AAD9EB8F0E643F6A4682_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		float L_0 = ___b1;
		float L_1 = ___a0;
		float L_2;
		L_2 = fabsf(((float)il2cpp_codegen_subtract(L_0, L_1)));
		float L_3 = ___a0;
		float L_4;
		L_4 = fabsf(L_3);
		float L_5 = ___b1;
		float L_6;
		L_6 = fabsf(L_5);
		float L_7;
		L_7 = Mathf_Max_mA9DCA91E87D6D27034F56ABA52606A9090406016_inline(L_4, L_6, NULL);
		float L_8 = ((Mathf_tE284D016E3B297B72311AAD9EB8F0E643F6A4682_StaticFields*)il2cpp_codegen_static_fields_for(Mathf_tE284D016E3B297B72311AAD9EB8F0E643F6A4682_il2cpp_TypeInfo_var))->___Epsilon_0;
		float L_9;
		L_9 = Mathf_Max_mA9DCA91E87D6D27034F56ABA52606A9090406016_inline(((float)il2cpp_codegen_multiply((9.99999997E-07f), L_7)), ((float)il2cpp_codegen_multiply(L_8, (8.0f))), NULL);
		V_0 = (bool)((((float)L_2) < ((float)L_9))? 1 : 0);
		goto IL_0035;
	}

IL_0035:
	{
		bool L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector2_op_Inequality_mCF3935E28AC7B30B279F07F9321CC56718E1311A_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___lhs0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rhs1, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___lhs0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = ___rhs1;
		bool L_2;
		L_2 = Vector2_op_Equality_m5447BF12C18339431AB8AF02FA463C543D88D463_inline(L_0, L_1, NULL);
		V_0 = (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		goto IL_000e;
	}

IL_000e:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ProfilerMarker__ctor_mDD68B0A8B71E0301F592AF8891560150E55699C8_inline (ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD* __this, String_t* ___name0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___name0;
		intptr_t L_1;
		L_1 = ProfilerUnsafeUtility_CreateMarker_m27DDE00D41B95677982DBFCE074D45B79E50C7CC(L_0, (uint16_t)1, 0, 0, NULL);
		__this->___m_Ptr_0 = L_1;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR AutoScope_tFB983697E28885CB10FFDB92D7EFD0615AEF3139 ProfilerMarker_Auto_m133FA724EB95D16187B37D2C8A501D7E989B1F8D_inline (ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD* __this, const RuntimeMethod* method) 
{
	AutoScope_tFB983697E28885CB10FFDB92D7EFD0615AEF3139 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		intptr_t L_0 = __this->___m_Ptr_0;
		AutoScope_tFB983697E28885CB10FFDB92D7EFD0615AEF3139 L_1;
		memset((&L_1), 0, sizeof(L_1));
		AutoScope__ctor_m7F63A273E382CB6328736B6E7F321DDFA40EA9E3_inline((&L_1), L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		AutoScope_tFB983697E28885CB10FFDB92D7EFD0615AEF3139 L_2 = V_0;
		return L_2;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AutoScope_Dispose_mED763F3F51261EF8FB79DB32CD06E0A3F6C40481_inline (AutoScope_tFB983697E28885CB10FFDB92D7EFD0615AEF3139* __this, const RuntimeMethod* method) 
{
	{
		intptr_t L_0 = __this->___m_Ptr_0;
		ProfilerUnsafeUtility_EndSample_mE2F7A0DB4C52105F7CD135ED8816A2BB98E663CC(L_0, NULL);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp_m154E404AF275A3B2EC99ECAA3879B4CB9F0606DC_inline (float ___value0, float ___min1, float ___max2, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	float V_2 = 0.0f;
	{
		float L_0 = ___value0;
		float L_1 = ___min1;
		V_0 = (bool)((((float)L_0) < ((float)L_1))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_000e;
		}
	}
	{
		float L_3 = ___min1;
		___value0 = L_3;
		goto IL_0019;
	}

IL_000e:
	{
		float L_4 = ___value0;
		float L_5 = ___max2;
		V_1 = (bool)((((float)L_4) > ((float)L_5))? 1 : 0);
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0019;
		}
	}
	{
		float L_7 = ___max2;
		___value0 = L_7;
	}

IL_0019:
	{
		float L_8 = ___value0;
		V_2 = L_8;
		goto IL_001d;
	}

IL_001d:
	{
		float L_9 = V_2;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___zeroVector_5;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_one_mE6A2D5C6578E94268024613B596BF09F990B1260_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___oneVector_6;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		float L_2 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___a0;
		float L_4 = L_3.___y_3;
		float L_5 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___a0;
		float L_7 = L_6.___z_4;
		float L_8 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_9), ((float)il2cpp_codegen_multiply(L_1, L_2)), ((float)il2cpp_codegen_multiply(L_4, L_5)), ((float)il2cpp_codegen_multiply(L_7, L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Lerp_m57EE8D709A93B2B0FF8D499FA2947B1D61CB1FD6_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, float ___t2, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		float L_0 = ___t2;
		float L_1;
		L_1 = Mathf_Clamp01_mD921B23F47F5347996C56DC789D1DE16EE27D9B1_inline(L_0, NULL);
		___t2 = L_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___a0;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___b1;
		float L_5 = L_4.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___a0;
		float L_7 = L_6.___x_2;
		float L_8 = ___t2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9 = ___a0;
		float L_10 = L_9.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11 = ___b1;
		float L_12 = L_11.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = ___a0;
		float L_14 = L_13.___y_3;
		float L_15 = ___t2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16 = ___a0;
		float L_17 = L_16.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18 = ___b1;
		float L_19 = L_18.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20 = ___a0;
		float L_21 = L_20.___z_4;
		float L_22 = ___t2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23;
		memset((&L_23), 0, sizeof(L_23));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_23), ((float)il2cpp_codegen_add(L_3, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_5, L_7)), L_8)))), ((float)il2cpp_codegen_add(L_10, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_12, L_14)), L_15)))), ((float)il2cpp_codegen_add(L_17, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_19, L_21)), L_22)))), /*hidden argument*/NULL);
		V_0 = L_23;
		goto IL_0053;
	}

IL_0053:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24 = V_0;
		return L_24;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_Min_mFEAD72DF4C4708B86BF464AB4F5F1468FAD8E784_inline (int32_t ___a0, int32_t ___b1, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t G_B3_0 = 0;
	{
		int32_t L_0 = ___a0;
		int32_t L_1 = ___b1;
		if ((((int32_t)L_0) < ((int32_t)L_1)))
		{
			goto IL_0008;
		}
	}
	{
		int32_t L_2 = ___b1;
		G_B3_0 = L_2;
		goto IL_0009;
	}

IL_0008:
	{
		int32_t L_3 = ___a0;
		G_B3_0 = L_3;
	}

IL_0009:
	{
		V_0 = G_B3_0;
		goto IL_000c;
	}

IL_000c:
	{
		int32_t L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_Clamp_mA48718D9A20D8972EDD41714CEF6BBF864F442EA_inline (int32_t ___value0, int32_t ___min1, int32_t ___max2, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	int32_t V_2 = 0;
	{
		int32_t L_0 = ___value0;
		int32_t L_1 = ___min1;
		V_0 = (bool)((((int32_t)L_0) < ((int32_t)L_1))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_000e;
		}
	}
	{
		int32_t L_3 = ___min1;
		___value0 = L_3;
		goto IL_0019;
	}

IL_000e:
	{
		int32_t L_4 = ___value0;
		int32_t L_5 = ___max2;
		V_1 = (bool)((((int32_t)L_4) > ((int32_t)L_5))? 1 : 0);
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0019;
		}
	}
	{
		int32_t L_7 = ___max2;
		___value0 = L_7;
	}

IL_0019:
	{
		int32_t L_8 = ___value0;
		V_2 = L_8;
		goto IL_001d;
	}

IL_001d:
	{
		int32_t L_9 = V_2;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 Color_op_Implicit_m6D1353534AD23E43DFD104850D55C469CFCEF340_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___c0, const RuntimeMethod* method) 
{
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = ___c0;
		float L_1 = L_0.___r_0;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_2 = ___c0;
		float L_3 = L_2.___g_1;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_4 = ___c0;
		float L_5 = L_4.___b_2;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_6 = ___c0;
		float L_7 = L_6.___a_3;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_8;
		memset((&L_8), 0, sizeof(L_8));
		Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline((&L_8), L_1, L_3, L_5, L_7, /*hidden argument*/NULL);
		V_0 = L_8;
		goto IL_0021;
	}

IL_0021:
	{
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_9 = V_0;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_op_Implicit_m04FFC6EBCB0576CD59529546F8FA10F4F71E9005_inline (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___v0, const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_0 = ___v0;
		float L_1 = L_0.___x_1;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_2 = ___v0;
		float L_3 = L_2.___y_2;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_4 = ___v0;
		float L_5 = L_4.___z_3;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_6 = ___v0;
		float L_7 = L_6.___w_4;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_8;
		memset((&L_8), 0, sizeof(L_8));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_8), L_1, L_3, L_5, L_7, /*hidden argument*/NULL);
		V_0 = L_8;
		goto IL_0021;
	}

IL_0021:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_9 = V_0;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_2 = L_0;
		float L_1 = ___y1;
		__this->___y_3 = L_1;
		float L_2 = ___z2;
		__this->___z_4 = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Max_mA9DCA91E87D6D27034F56ABA52606A9090406016_inline (float ___a0, float ___b1, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float G_B3_0 = 0.0f;
	{
		float L_0 = ___a0;
		float L_1 = ___b1;
		if ((((float)L_0) > ((float)L_1)))
		{
			goto IL_0008;
		}
	}
	{
		float L_2 = ___b1;
		G_B3_0 = L_2;
		goto IL_0009;
	}

IL_0008:
	{
		float L_3 = ___a0;
		G_B3_0 = L_3;
	}

IL_0009:
	{
		V_0 = G_B3_0;
		goto IL_000c;
	}

IL_000c:
	{
		float L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___b1;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___a0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___b1;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___a0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___b1;
		float L_11 = L_10.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_12), ((float)il2cpp_codegen_add(L_1, L_3)), ((float)il2cpp_codegen_add(L_5, L_7)), ((float)il2cpp_codegen_add(L_9, L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Subtraction_m1690F44F6DC92B770A940B6CF8AE0535625A9824_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___b1;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___a0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___b1;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___a0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___b1;
		float L_11 = L_10.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_12), ((float)il2cpp_codegen_subtract(L_1, L_3)), ((float)il2cpp_codegen_subtract(L_5, L_7)), ((float)il2cpp_codegen_subtract(L_9, L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_op_Multiply_m5AC8B39C55015059BDD09122E04E47D4BFAB2276_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___lhs0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rhs1, const RuntimeMethod* method) 
{
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = ___lhs0;
		float L_1 = L_0.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_2 = ___rhs1;
		float L_3 = L_2.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_4 = ___lhs0;
		float L_5 = L_4.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_6 = ___rhs1;
		float L_7 = L_6.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_8 = ___lhs0;
		float L_9 = L_8.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_10 = ___rhs1;
		float L_11 = L_10.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_12 = ___lhs0;
		float L_13 = L_12.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_14 = ___rhs1;
		float L_15 = L_14.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_16 = ___lhs0;
		float L_17 = L_16.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_18 = ___rhs1;
		float L_19 = L_18.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_20 = ___lhs0;
		float L_21 = L_20.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_22 = ___rhs1;
		float L_23 = L_22.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_24 = ___lhs0;
		float L_25 = L_24.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_26 = ___rhs1;
		float L_27 = L_26.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_28 = ___lhs0;
		float L_29 = L_28.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_30 = ___rhs1;
		float L_31 = L_30.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_32 = ___lhs0;
		float L_33 = L_32.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_34 = ___rhs1;
		float L_35 = L_34.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_36 = ___lhs0;
		float L_37 = L_36.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_38 = ___rhs1;
		float L_39 = L_38.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_40 = ___lhs0;
		float L_41 = L_40.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_42 = ___rhs1;
		float L_43 = L_42.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_44 = ___lhs0;
		float L_45 = L_44.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_46 = ___rhs1;
		float L_47 = L_46.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_48 = ___lhs0;
		float L_49 = L_48.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_50 = ___rhs1;
		float L_51 = L_50.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_52 = ___lhs0;
		float L_53 = L_52.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_54 = ___rhs1;
		float L_55 = L_54.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_56 = ___lhs0;
		float L_57 = L_56.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_58 = ___rhs1;
		float L_59 = L_58.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_60 = ___lhs0;
		float L_61 = L_60.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_62 = ___rhs1;
		float L_63 = L_62.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_64;
		memset((&L_64), 0, sizeof(L_64));
		Quaternion__ctor_m868FD60AA65DD5A8AC0C5DEB0608381A8D85FCD8_inline((&L_64), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_1, L_3)), ((float)il2cpp_codegen_multiply(L_5, L_7)))), ((float)il2cpp_codegen_multiply(L_9, L_11)))), ((float)il2cpp_codegen_multiply(L_13, L_15)))), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_17, L_19)), ((float)il2cpp_codegen_multiply(L_21, L_23)))), ((float)il2cpp_codegen_multiply(L_25, L_27)))), ((float)il2cpp_codegen_multiply(L_29, L_31)))), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_33, L_35)), ((float)il2cpp_codegen_multiply(L_37, L_39)))), ((float)il2cpp_codegen_multiply(L_41, L_43)))), ((float)il2cpp_codegen_multiply(L_45, L_47)))), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply(L_49, L_51)), ((float)il2cpp_codegen_multiply(L_53, L_55)))), ((float)il2cpp_codegen_multiply(L_57, L_59)))), ((float)il2cpp_codegen_multiply(L_61, L_63)))), /*hidden argument*/NULL);
		V_0 = L_64;
		goto IL_00e5;
	}

IL_00e5:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_65 = V_0;
		return L_65;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* MixedRealityToolkitVisualProfiler_get_WindowParent_mE0FDF64D85504EEFA54D140CB047E2466FE8A429_inline (MixedRealityToolkitVisualProfiler_t7EC6FCE39C4246F2C6D408EF28AE145F66EE0CB1* __this, const RuntimeMethod* method) 
{
	{
		// public Transform WindowParent { get; set; } = null;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->___U3CWindowParentU3Ek__BackingField_17;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_right_m13B7C3EAA64DC921EC23346C56A5A597B5481FF5_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___rightVector_10;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_up_mAB5269BFCBCB1BD241450C9BF2F156303D30E0C3_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___upVector_7;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_white_m28BB6E19F27D4EE6858D3021A44F62BC74E20C43_inline (const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_0), (1.0f), (1.0f), (1.0f), (1.0f), /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_001d;
	}

IL_001d:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_get_identity_mB9CAEEB21BC81352CBF32DB9664BFC06FA7EA27B_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = ((Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields*)il2cpp_codegen_static_fields_for(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var))->___identityQuaternion_4;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____stringLength_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___r0, float ___g1, float ___b2, float ___a3, const RuntimeMethod* method) 
{
	{
		float L_0 = ___r0;
		__this->___r_0 = L_0;
		float L_1 = ___g1;
		__this->___g_1 = L_1;
		float L_2 = ___b2;
		__this->___b_2 = L_2;
		float L_3 = ___a3;
		__this->___a_3 = L_3;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector2_op_Equality_m5447BF12C18339431AB8AF02FA463C543D88D463_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___lhs0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rhs1, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	bool V_2 = false;
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___lhs0;
		float L_1 = L_0.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___rhs1;
		float L_3 = L_2.___x_0;
		V_0 = ((float)il2cpp_codegen_subtract(L_1, L_3));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = ___lhs0;
		float L_5 = L_4.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = ___rhs1;
		float L_7 = L_6.___y_1;
		V_1 = ((float)il2cpp_codegen_subtract(L_5, L_7));
		float L_8 = V_0;
		float L_9 = V_0;
		float L_10 = V_1;
		float L_11 = V_1;
		V_2 = (bool)((((float)((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_8, L_9)), ((float)il2cpp_codegen_multiply(L_10, L_11))))) < ((float)(9.99999944E-11f)))? 1 : 0);
		goto IL_002e;
	}

IL_002e:
	{
		bool L_12 = V_2;
		return L_12;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AutoScope__ctor_m7F63A273E382CB6328736B6E7F321DDFA40EA9E3_inline (AutoScope_tFB983697E28885CB10FFDB92D7EFD0615AEF3139* __this, intptr_t ___markerPtr0, const RuntimeMethod* method) 
{
	{
		intptr_t L_0 = ___markerPtr0;
		__this->___m_Ptr_0 = L_0;
		intptr_t L_1 = ___markerPtr0;
		ProfilerUnsafeUtility_BeginSample_m1C6D6ED1C8E0CB2FD0934EB6EA333276F67C14F6(L_1, NULL);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp01_mD921B23F47F5347996C56DC789D1DE16EE27D9B1_inline (float ___value0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	float V_1 = 0.0f;
	bool V_2 = false;
	{
		float L_0 = ___value0;
		V_0 = (bool)((((float)L_0) < ((float)(0.0f)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		V_1 = (0.0f);
		goto IL_002d;
	}

IL_0015:
	{
		float L_2 = ___value0;
		V_2 = (bool)((((float)L_2) > ((float)(1.0f)))? 1 : 0);
		bool L_3 = V_2;
		if (!L_3)
		{
			goto IL_0029;
		}
	}
	{
		V_1 = (1.0f);
		goto IL_002d;
	}

IL_0029:
	{
		float L_4 = ___value0;
		V_1 = L_4;
		goto IL_002d;
	}

IL_002d:
	{
		float L_5 = V_1;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* __this, float ___x0, float ___y1, float ___z2, float ___w3, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_1 = L_0;
		float L_1 = ___y1;
		__this->___y_2 = L_1;
		float L_2 = ___z2;
		__this->___z_3 = L_2;
		float L_3 = ___w3;
		__this->___w_4 = L_3;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Quaternion__ctor_m868FD60AA65DD5A8AC0C5DEB0608381A8D85FCD8_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* __this, float ___x0, float ___y1, float ___z2, float ___w3, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_0 = L_0;
		float L_1 = ___y1;
		__this->___y_1 = L_1;
		float L_2 = ___z2;
		__this->___z_2 = L_2;
		float L_3 = ___w3;
		__this->___w_3 = L_3;
		return;
	}
}
