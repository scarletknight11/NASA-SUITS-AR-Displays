#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


struct VirtualActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct VirtualActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
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
template <typename R, typename T1, typename T2, typename T3>
struct VirtualFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
struct GenericVirtualActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
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
struct GenericInterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct InvokerActionInvoker1;
template <typename T1>
struct InvokerActionInvoker1<T1*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1)
	{
		void* params[1] = { p1 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1, typename T2>
struct InvokerActionInvoker2;
template <typename T1, typename T2>
struct InvokerActionInvoker2<T1*, T2*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2)
	{
		void* params[2] = { p1, p2 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};

// System.Func`2<InterfaceAnmElement,System.Int32>
struct Func_2_t61A769E1370E91D9D2BBB870F77AB93DC7203E59;
// System.Func`2<System.Object,System.Int32>
struct Func_2_t9A0D493A82DCC47C9C819A3B045E02D9B5DDCE1B;
// System.Collections.Generic.IEnumerable`1<InterfaceAnimManager>
struct IEnumerable_1_tE9FB2A0B18BCBD20C4D7F908040988CCD12B6058;
// System.Collections.Generic.IEnumerable`1<InterfaceAnmElement>
struct IEnumerable_1_t7A0B6BC7BBB3BDEB1A23FABAD8144BA12C440C70;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_tF95C9E01A913DD50575531C8305932628663D9E9;
// System.Linq.IOrderedEnumerable`1<InterfaceAnmElement>
struct IOrderedEnumerable_1_tF23637956EEAB32923A1CA61762D10DC7F374B31;
// System.Linq.IOrderedEnumerable`1<System.Object>
struct IOrderedEnumerable_1_t0E680E8E1A4A676334F2A0C9A6F9B93135A65EAC;
// System.Collections.Generic.List`1<UnityEngine.CanvasGroup>
struct List_1_t2CDCA768E7F493F5EDEBC75AEB200FD621354E35;
// System.Collections.Generic.List`1<UnityEngine.UI.Image>
struct List_1_tE6BB71ABF15905EFA2BE92C38A2716547AEADB19;
// System.Collections.Generic.List`1<InterfaceAnimManager>
struct List_1_t70363A4FDD9B70AB54795A2131A483E3A31DC878;
// System.Collections.Generic.List`1<InterfaceAnmElement>
struct List_1_t2F48DCC67405C354E57C9C3263548DB2D541DBB0;
// System.Collections.Generic.List`1<UnityEngine.Material>
struct List_1_t386E09F4F22DDE4D2AC41A8567FFF283C254537B;
// System.Collections.Generic.List`1<UnityEngine.MonoBehaviour>
struct List_1_tCB9190A56C65FD59CE07C6A0EA71F30067A43D81;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.List`1<System.String>
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4;
// UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,System.Int32Enum>
struct UnityAction_2_tF47D82C7E3C3B118B409866D926435B55A0675BD;
// UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.LoadSceneMode>
struct UnityAction_2_t1C08AEB5AA4F72FEFAB7F303E33C8CFFF80A8C3A;
// UnityEngine.AnimationClip[]
struct AnimationClipU5BU5D_t48CE1A495BA95608745A065C735F2D5BB8DE5A0F;
// UnityEngine.Animator[]
struct AnimatorU5BU5D_tC96418EE48F8DA017567CAE0235488C27640E759;
// UnityEngine.AnimatorClipInfo[]
struct AnimatorClipInfoU5BU5D_t202D955679134FCCD698779FBABD2530E58CD60A;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// InterfaceAnimManager[]
struct InterfaceAnimManagerU5BU5D_tB99A76DFD85996ED124AE4892004922F617EF797;
// InterfaceAnmElement[]
struct InterfaceAnmElementU5BU5D_tACCF3984F1ACDE1D59C69FB297CA9897DF0FA022;
// UnityEngine.Keyframe[]
struct KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3;
// UnityEngine.Material[]
struct MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D;
// UnityEngine.MonoBehaviour[]
struct MonoBehaviourU5BU5D_tEB91860B3CEE2D63A7833A2842EB9CE4547DDBD7;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// UnityEngine.UI.Selectable[]
struct SelectableU5BU5D_t4160E135F02A40F75A63F787D36F31FEC6FE91A9;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
// UnityEngine.AnimationClip
struct AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712;
// UnityEngine.AnimationCurve
struct AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354;
// UnityEngine.UI.AnimationTriggers
struct AnimationTriggers_tA0DC06F89C5280C6DD972F6F4C8A56D7F4F79074;
// UnityEngine.Animator
struct Animator_t8A52E42AE54F76681838FE9E632683EF3952E883;
// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C;
// UnityEngine.AudioClip
struct AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20;
// UnityEngine.AudioSource
struct AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299;
// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA;
// UnityStandardAssets.ImageEffects.Bloom
struct Bloom_t7FC3FD3F083630D01AC1C5E0D6859CB59F5D1EBF;
// UnityStandardAssets.ImageEffects.BloomOptimized
struct BloomOptimized_tB65EA6C1DFCBBBDD9917463A09AB0D4D4204099B;
// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184;
// UnityEngine.Canvas
struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860;
// UnityStandardAssets.ImageEffects.ColorCorrectionCurves
struct ColorCorrectionCurves_tE85378ED43495F624056B5696F97D3D2451D6EEB;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// DoNotDestroyOnLoad_perName
struct DoNotDestroyOnLoad_perName_t9EBCA885C7054C26B4DEB01C06C88FD2753432A5;
// ExampleCam
struct ExampleCam_tE2903697D96306F068D755E459E112ACFC122949;
// ExampleListener
struct ExampleListener_t5583A25124D06A1FECAF18320ACAD10E693E6126;
// ExampleUI
struct ExampleUI_t2552997442A7324DD508292D6911E8AA0B7A12DD;
// ExcelsiorUtils
struct ExcelsiorUtils_t7265AB93B70A2112C8F6317B6E3AEFBD6612858F;
// UnityEngine.UI.FontData
struct FontData_tB8E562846C6CB59C43260F69AE346B9BF3157224;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931;
// IAM_EndAppear
struct IAM_EndAppear_t60802E44D1AB53A268000746AEAA403393EFE4C6;
// IAM_EndDisappear
struct IAM_EndDisappear_t91F7B236FDF2A3FC74F13C5FD4987F95E8936663;
// IAM_StartAppear
struct IAM_StartAppear_t45F8AF6D25B9B8F63ED671D6461EF06AFBDEACDC;
// IAM_StartDisappear
struct IAM_StartDisappear_tFBEC30F3C988FD6D617407114866A1D5FE174BFB;
// System.IAsyncResult
struct IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Collections.IEnumerator
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
// UnityEngine.UI.Image
struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E;
// InterfaceAnimManager
struct InterfaceAnimManager_t55019D504BEA6534494FED15C7945911CE850962;
// InterfaceAnmElement
struct InterfaceAnmElement_t02DC7282CF1F682DD0C071B9DE5637D4E58C5706;
// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// MouseOrbitImproved
struct MouseOrbitImproved_t19ECE3CB982D60FD6DB794ABFEF61AA7CAAE8F64;
// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// UnityStandardAssets.ImageEffects.PostEffectsBase
struct PostEffectsBase_t68F9A09F9CCB0B3DF158A27640081D0DFB22FD24;
// UnityStandardAssets.ImageEffects.PostEffectsHelper
struct PostEffectsHelper_t12213D5AE8FCB54BDC8CF5223A513E4CF16AAC91;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670;
// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5;
// UnityEngine.RenderTexture
struct RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27;
// UnityEngine.Rigidbody
struct Rigidbody_t268697F5A994213ED97393309870968BC1C7393C;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// UnityStandardAssets.ImageEffects.ScreenSpaceAmbientObscurance
struct ScreenSpaceAmbientObscurance_tE0AE3E1E85695DE5A5071FFC30B42DFE44200042;
// UnityEngine.UI.Selectable
struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712;
// UnityEngine.Shader
struct Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692;
// UnityEngine.UI.Slider
struct Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F;
// UnityEngine.Sprite
struct Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99;
// System.String
struct String_t;
// UnityEngine.UI.Text
struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62;
// UnityEngine.TextGenerator
struct TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC;
// UnityEngine.Texture
struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700;
// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// UnityEngine.Events.UnityAction
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3;
// UnityEngine.WaitForSecondsRealtime
struct WaitForSecondsRealtime_tA8CE0AAB4B0C872B843E7973637037D17682BA01;
// UnityEngine.AudioClip/PCMReaderCallback
struct PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E;
// UnityEngine.AudioClip/PCMSetPositionCallback
struct PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD;
// InterfaceAnimManager/<>c
struct U3CU3Ec_t0AABEEAE6C6AC50E267EB829C4D47A57CB988ED7;
// InterfaceAnimManager/<Disable_OnDisappearEnd>d__35
struct U3CDisable_OnDisappearEndU3Ed__35_tF42C64EEBEB26389A089E7F5E69FD83FD38015F0;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8;
// UnityEngine.RectTransform/ReapplyDrivenProperties
struct ReapplyDrivenProperties_t3482EA130A01FF7EE2EEFE37F66A5215D08CFE24;
// UnityEngine.UI.Slider/SliderEvent
struct SliderEvent_t92A82EF6C62E15AF92B640FE2D960E877E8C6555;

IL2CPP_EXTERN_C RuntimeClass* AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DoNotDestroyOnLoad_perName_t9EBCA885C7054C26B4DEB01C06C88FD2753432A5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ExampleUI_t2552997442A7324DD508292D6911E8AA0B7A12DD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_t61A769E1370E91D9D2BBB870F77AB93DC7203E59_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IAM_EndAppear_t60802E44D1AB53A268000746AEAA403393EFE4C6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IAM_EndDisappear_t91F7B236FDF2A3FC74F13C5FD4987F95E8936663_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IAM_StartAppear_t45F8AF6D25B9B8F63ED671D6461EF06AFBDEACDC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IAM_StartDisappear_tFBEC30F3C988FD6D617407114866A1D5FE174BFB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InterfaceAnmElement_t02DC7282CF1F682DD0C071B9DE5637D4E58C5706_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t2F48DCC67405C354E57C9C3263548DB2D541DBB0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t386E09F4F22DDE4D2AC41A8567FFF283C254537B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t70363A4FDD9B70AB54795A2131A483E3A31DC878_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tCB9190A56C65FD59CE07C6A0EA71F30067A43D81_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Mathf_tE284D016E3B297B72311AAD9EB8F0E643F6A4682_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CDisable_OnDisappearEndU3Ed__35_tF42C64EEBEB26389A089E7F5E69FD83FD38015F0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t0AABEEAE6C6AC50E267EB829C4D47A57CB988ED7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityAction_2_t1C08AEB5AA4F72FEFAB7F303E33C8CFFF80A8C3A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForSecondsRealtime_tA8CE0AAB4B0C872B843E7973637037D17682BA01_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral014264E028C02C80CFEA13DF5238C7B0CEAF8D5A;
IL2CPP_EXTERN_C String_t* _stringLiteral01AC0365CB17BCE0478BFCD5E4FE89032C19B0E7;
IL2CPP_EXTERN_C String_t* _stringLiteral0402F89BA8A564D78EA74C8D37ED1F9E42E573D5;
IL2CPP_EXTERN_C String_t* _stringLiteral0B3032563D7F48BC213DA513440D309E9CFA808E;
IL2CPP_EXTERN_C String_t* _stringLiteral0EAAFAB53E130FE2ADD20070CDBD4848DC8582A9;
IL2CPP_EXTERN_C String_t* _stringLiteral0F78241FF6E78ADA6D1FB6DAA00F25817203ED13;
IL2CPP_EXTERN_C String_t* _stringLiteral16DD21BE77B115D392226EB71A2D3A9FDC29E3F0;
IL2CPP_EXTERN_C String_t* _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745;
IL2CPP_EXTERN_C String_t* _stringLiteral26B13993D9AF58863D398B1F9A2575F0AD504CE9;
IL2CPP_EXTERN_C String_t* _stringLiteral26E519C4459C9C2AE04CACDA4DCF6450F759B33B;
IL2CPP_EXTERN_C String_t* _stringLiteral280F624DC11628866DF0E75B68F187076179DF40;
IL2CPP_EXTERN_C String_t* _stringLiteral2B2F87855E2F1F2D73948E75AA00D22AEB5963D6;
IL2CPP_EXTERN_C String_t* _stringLiteral2B57EAD824AA2C842A67739712342646C4A59776;
IL2CPP_EXTERN_C String_t* _stringLiteral2DE805987DEDE406141897309B2F4E2D3570467E;
IL2CPP_EXTERN_C String_t* _stringLiteral33B3A84FF54C600D8BE3E5EA0DCADED338B39495;
IL2CPP_EXTERN_C String_t* _stringLiteral38860340D6399FED72D34E843CC6D18D6E2BCF24;
IL2CPP_EXTERN_C String_t* _stringLiteral3F42ED00D84DBC7A3B4658065DEA62873778201F;
IL2CPP_EXTERN_C String_t* _stringLiteral43996BC36588CCD5051D9CC5DA131DFBF9706B48;
IL2CPP_EXTERN_C String_t* _stringLiteral46FDB78170F0875B7786D0DF6CEC4C315A44B763;
IL2CPP_EXTERN_C String_t* _stringLiteral4B378829BC17C440269AD9500400C60EDE6B11B4;
IL2CPP_EXTERN_C String_t* _stringLiteral4B8146FB95E4F51B29DA41EB5F6D60F8FD0ECF21;
IL2CPP_EXTERN_C String_t* _stringLiteral4E207A1E776F6188653FF9228A95BFD3A17B492E;
IL2CPP_EXTERN_C String_t* _stringLiteral52656DB5EAA7F059F4F77EC6B250A44854DF3A69;
IL2CPP_EXTERN_C String_t* _stringLiteral55A458034DB1D5BF3572D0949EA9AAEF5812135D;
IL2CPP_EXTERN_C String_t* _stringLiteral57AEAB49B21AC0908ED01F037D901DAE0EAF40CC;
IL2CPP_EXTERN_C String_t* _stringLiteral58C07946CE4124292F0094E3A090F13945F38CC0;
IL2CPP_EXTERN_C String_t* _stringLiteral5C28D7D10566D621893498A90686178A2F6038DC;
IL2CPP_EXTERN_C String_t* _stringLiteral5EE6B65EB03371A3C0F000406E30369D6F81C2FF;
IL2CPP_EXTERN_C String_t* _stringLiteral5FA0F386399780C14B371C5D4D0E49B5A60EC8AA;
IL2CPP_EXTERN_C String_t* _stringLiteral6552DCC8D30F1ECCEA20B4508D1284E91C25CCD2;
IL2CPP_EXTERN_C String_t* _stringLiteral67FCD903D968843FB838A58A0441312B2F7350F3;
IL2CPP_EXTERN_C String_t* _stringLiteral6957900861F7977D1CDA82ABF673F6EB04260D16;
IL2CPP_EXTERN_C String_t* _stringLiteral6DB920A501BE49CE06F951B435199EACD23D8C87;
IL2CPP_EXTERN_C String_t* _stringLiteral7ED1A19D8C8DC7DD41FBC4E4B831F17F28480369;
IL2CPP_EXTERN_C String_t* _stringLiteral88BEE283254D7094E258B3A88730F4CC4F1E4AC7;
IL2CPP_EXTERN_C String_t* _stringLiteral8AD58CDB5A877779756FB284EF557ED8EC4267E4;
IL2CPP_EXTERN_C String_t* _stringLiteral95417BB144D92ED80AA7984A95BB5A1895FB8332;
IL2CPP_EXTERN_C String_t* _stringLiteralAD24B96FEF7F6BC453A4D5E2575831BC289660D8;
IL2CPP_EXTERN_C String_t* _stringLiteralAD6E56B90F7BBA5EEECD7831E48459043EBFCBB5;
IL2CPP_EXTERN_C String_t* _stringLiteralB833C1DE39BD5DD134693D3DA383EDCB10E681EC;
IL2CPP_EXTERN_C String_t* _stringLiteralBB6CBCD648C07EAC90B08C00428BA435EC0272BF;
IL2CPP_EXTERN_C String_t* _stringLiteralBC80DA7614408087FE75EA6806A9CBE62109EF15;
IL2CPP_EXTERN_C String_t* _stringLiteralBF457A7C2EBDC6A89CF7866ED6A35E2BEF05781E;
IL2CPP_EXTERN_C String_t* _stringLiteralC106589373683AEAB4EA765F77169BDAEB4DC540;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralDCCF60D13A2F5176335F2A450A37F1B544DA4C96;
IL2CPP_EXTERN_C String_t* _stringLiteralDE9FAF482EBF07DB48E259D5B8D2B04A5EF5EFA9;
IL2CPP_EXTERN_C String_t* _stringLiteralE166C9564FBDE461738077E3B1B506525EB6ACCC;
IL2CPP_EXTERN_C String_t* _stringLiteralE5A1D96CE41BD597A30172C890508C2BB5810152;
IL2CPP_EXTERN_C String_t* _stringLiteralE691C6599F2EFD48FF5D07CCA40BF885CA11AD70;
IL2CPP_EXTERN_C String_t* _stringLiteralEC50E207386AABAE6EA569D05001E516E9CCA2E6;
IL2CPP_EXTERN_C String_t* _stringLiteralF08F12867C14A169A06FA0C98F5712579796B0A6;
IL2CPP_EXTERN_C String_t* _stringLiteralF109A485C102E0298CFD9813641B5C48FBF36384;
IL2CPP_EXTERN_C String_t* _stringLiteralF3727B51476229A6673C6AE3F1248A22C8869020;
IL2CPP_EXTERN_C String_t* _stringLiteralFA980B4AF7F45E5DE6A530093E7658BEA82FF8B2;
IL2CPP_EXTERN_C String_t* _stringLiteralFC6687DC37346CD2569888E29764F727FAF530E0;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m42DA4DEA19EB60D80CBED7413ADEB27FA033C77B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m64AC6C06DD93C5FB249091FEC84FA8475457CCC4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisInterfaceAnimManager_t55019D504BEA6534494FED15C7945911CE850962_mD27B439389B85FEB9E300BBE757143C583C05729_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponentsInChildren_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mC9578257D24D673124C2EE2803C913994C2BAFC8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponentsInChildren_TisInterfaceAnimManager_t55019D504BEA6534494FED15C7945911CE850962_mE7FED832B998CF2167D4A7F6BC177037145CF25F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_OrderBy_TisInterfaceAnmElement_t02DC7282CF1F682DD0C071B9DE5637D4E58C5706_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mC025B00D20A119B25DEB0DDD50D2C38511A43877_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_ToList_TisInterfaceAnimManager_t55019D504BEA6534494FED15C7945911CE850962_mA2260FF7C8675BC7C0C4B97C79D35B8B1F3D3C57_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_ToList_TisInterfaceAnmElement_t02DC7282CF1F682DD0C071B9DE5637D4E58C5706_m4798855DA56683CD385157F94F5A0A0C51F0175A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m05F5DC7DDC52C222E3CC2A5F3E80A9CAC2EC68AE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m86FC1B7BBD037A5B0081E8E9B916524B5BCC371E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_mA18455211C51A1DBF839683A9A405FFB3E51EE32_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m7F890D387B8294FF405777D929F894DF8863409F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m95E1E769FF7A8208A46B05C694DD6C720FCE6C49_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mBF0BA36039C43F42428B191F8AE5265C4976F54F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m1BBA4A743DD622178C8A15E930ADDEE490553A80_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m677B6DAF16A498C87390EB1D8491F59DC1225A64_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m7AEC9C406EBAEA2718FDA0F82F1EA824BB163AF5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ExampleListener_HandleOnEndAppear_mABB9658367C2253C06CEBC66AAA50DE1FB2B0E24_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ExampleListener_HandleOnEndDisappear_m51C9BF743792959970049E41813A78BF1F27747F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ExampleListener_HandleOnStartAppear_mED9C19C0E487397E9FB11D83EEB7C0FBC6798A74_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ExampleListener_HandleOnStartDisappear_m0DD4F1C60C4C45922FE36F7CF8233ABF27A0337C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ExampleUI_OnSceneLoaded_m4D71F9100863BABAB2755E9D9103C84B008A621F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisInterfaceAnmElement_t02DC7282CF1F682DD0C071B9DE5637D4E58C5706_mDE9582EC9994D7BE3699698F83B3E60037E29750_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisExampleCam_tE2903697D96306F068D755E459E112ACFC122949_m869D94C2A873095FC742BE35564B6108ED6F48D0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisInterfaceAnimManager_t55019D504BEA6534494FED15C7945911CE850962_m3C753C203152FD3ED8CE525C216473174957EB16_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisInterfaceAnmElement_t02DC7282CF1F682DD0C071B9DE5637D4E58C5706_mC68AEF59C130F41AE3EF11E242F6B92321168494_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m5F62EE992DBCC5323267265794235C9EEE07997B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mD2EFF63F2DC69FEAEE0E21346D7EFD136A1E91B9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Contains_m359254483BE42CAD4DCA8FBAFB87473FB4CF00E1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Contains_m45FA4AE2759DAA58E5439462F9E21ED21CAE68A4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m6634056FE8223F5FBF4B35F680857B49FA138DC2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m736E8835B6C02CAC94A7EA21A8B0B17D38246CAF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m8DB1F8E62641BE14DE9D7E3D3470B981D0D2A2BE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_RemoveAt_mD461DC585ED2CF965C6FABF04A941287186E0354_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Remove_m7093559E6975C1702B2D84D3DA57371CCD285C85_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Remove_m7EFF26032AFE115832C15842CC162A9771F93786_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m3292212006F87F9ED8E70CB2C0387FF2944E5640_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m351148D1F56354516445CD9F1BFD8002B41FD7A2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m38500C20418699AEC04B1946434E06EC96FB4B1C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m53BA887F5D9470B269C4C302DCD52FF4DF85691E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m48BBB83C5F748E6E6FF0731C3682092DEA6A7173_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mA28D73F815E52C1CB089FC95E694F6FBDFDB1FAE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m21AEC50E791371101DC22ABCF96A2E46800811F8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m70F5CFC2DEA9332B78C5ADC0EE1CE1B7465B1456_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_mFCB5F6B16EDD6EFF12D288857142E410F8088586_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CDisable_OnDisappearEndU3Ed__35_System_Collections_IEnumerator_Reset_mC00D421C62D67E488928353F5C9E9432DF0B6CB0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CUpdateAnimClipsU3Eb__40_0_m87C4C447FE1B345F86AB9BF5884677BC6C6451EC_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct AnimationClipU5BU5D_t48CE1A495BA95608745A065C735F2D5BB8DE5A0F;
struct AnimatorU5BU5D_tC96418EE48F8DA017567CAE0235488C27640E759;
struct AnimatorClipInfoU5BU5D_t202D955679134FCCD698779FBABD2530E58CD60A;
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct InterfaceAnimManagerU5BU5D_tB99A76DFD85996ED124AE4892004922F617EF797;
struct KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tF062866229C4952B8051AD32AB6E9D931142CC95 
{
};

// System.Collections.Generic.List`1<InterfaceAnimManager>
struct List_1_t70363A4FDD9B70AB54795A2131A483E3A31DC878  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	InterfaceAnimManagerU5BU5D_tB99A76DFD85996ED124AE4892004922F617EF797* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t70363A4FDD9B70AB54795A2131A483E3A31DC878_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	InterfaceAnimManagerU5BU5D_tB99A76DFD85996ED124AE4892004922F617EF797* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<InterfaceAnmElement>
struct List_1_t2F48DCC67405C354E57C9C3263548DB2D541DBB0  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	InterfaceAnmElementU5BU5D_tACCF3984F1ACDE1D59C69FB297CA9897DF0FA022* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t2F48DCC67405C354E57C9C3263548DB2D541DBB0_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	InterfaceAnmElementU5BU5D_tACCF3984F1ACDE1D59C69FB297CA9897DF0FA022* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<UnityEngine.Material>
struct List_1_t386E09F4F22DDE4D2AC41A8567FFF283C254537B  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t386E09F4F22DDE4D2AC41A8567FFF283C254537B_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<UnityEngine.MonoBehaviour>
struct List_1_tCB9190A56C65FD59CE07C6A0EA71F30067A43D81  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	MonoBehaviourU5BU5D_tEB91860B3CEE2D63A7833A2842EB9CE4547DDBD7* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tCB9190A56C65FD59CE07C6A0EA71F30067A43D81_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	MonoBehaviourU5BU5D_tEB91860B3CEE2D63A7833A2842EB9CE4547DDBD7* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.String>
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___s_emptyArray_5;
};
struct Il2CppArrayBounds;

// UnityEngine.CustomYieldInstruction
struct CustomYieldInstruction_t6B81A50D5D210C1ACAAE247FB53B65CDFFEB7617  : public RuntimeObject
{
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

// UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
};

// InterfaceAnimManager/<>c
struct U3CU3Ec_t0AABEEAE6C6AC50E267EB829C4D47A57CB988ED7  : public RuntimeObject
{
};

struct U3CU3Ec_t0AABEEAE6C6AC50E267EB829C4D47A57CB988ED7_StaticFields
{
	// InterfaceAnimManager/<>c InterfaceAnimManager/<>c::<>9
	U3CU3Ec_t0AABEEAE6C6AC50E267EB829C4D47A57CB988ED7* ___U3CU3E9_0;
	// System.Func`2<InterfaceAnmElement,System.Int32> InterfaceAnimManager/<>c::<>9__40_0
	Func_2_t61A769E1370E91D9D2BBB870F77AB93DC7203E59* ___U3CU3E9__40_0_1;
};

// InterfaceAnimManager/<Disable_OnDisappearEnd>d__35
struct U3CDisable_OnDisappearEndU3Ed__35_tF42C64EEBEB26389A089E7F5E69FD83FD38015F0  : public RuntimeObject
{
	// System.Int32 InterfaceAnimManager/<Disable_OnDisappearEnd>d__35::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object InterfaceAnimManager/<Disable_OnDisappearEnd>d__35::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// InterfaceAnimManager InterfaceAnimManager/<Disable_OnDisappearEnd>d__35::<>4__this
	InterfaceAnimManager_t55019D504BEA6534494FED15C7945911CE850962* ___U3CU3E4__this_2;
};

// System.Collections.Generic.List`1/Enumerator<InterfaceAnimManager>
struct Enumerator_tB10F09810993415F99163C558E4CE11478C5E87E 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_t70363A4FDD9B70AB54795A2131A483E3A31DC878* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	InterfaceAnimManager_t55019D504BEA6534494FED15C7945911CE850962* ____current_3;
};

// System.Collections.Generic.List`1/Enumerator<InterfaceAnmElement>
struct Enumerator_tBE821E8DBC9F67CC069BF33B74F05F0A2270F44E 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_t2F48DCC67405C354E57C9C3263548DB2D541DBB0* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	InterfaceAnmElement_t02DC7282CF1F682DD0C071B9DE5637D4E58C5706* ____current_3;
};

// System.Collections.Generic.List`1/Enumerator<UnityEngine.MonoBehaviour>
struct Enumerator_t07C2E5693B034463FB920742E4CC32D19677F76F 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_tCB9190A56C65FD59CE07C6A0EA71F30067A43D81* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* ____current_3;
};

// System.Collections.Generic.List`1/Enumerator<System.Object>
struct Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	RuntimeObject* ____current_3;
};

// UnityEngine.AnimatorClipInfo
struct AnimatorClipInfo_t0C913173594C893E36282602F54ABD06AC1CFA03 
{
	// System.Int32 UnityEngine.AnimatorClipInfo::m_ClipInstanceID
	int32_t ___m_ClipInstanceID_0;
	// System.Single UnityEngine.AnimatorClipInfo::m_Weight
	float ___m_Weight_1;
};

// UnityEngine.AnimatorStateInfo
struct AnimatorStateInfo_t1F47379289C7CE7FD588FBC3BBD79A777243B6B2 
{
	// System.Int32 UnityEngine.AnimatorStateInfo::m_Name
	int32_t ___m_Name_0;
	// System.Int32 UnityEngine.AnimatorStateInfo::m_Path
	int32_t ___m_Path_1;
	// System.Int32 UnityEngine.AnimatorStateInfo::m_FullPath
	int32_t ___m_FullPath_2;
	// System.Single UnityEngine.AnimatorStateInfo::m_NormalizedTime
	float ___m_NormalizedTime_3;
	// System.Single UnityEngine.AnimatorStateInfo::m_Length
	float ___m_Length_4;
	// System.Single UnityEngine.AnimatorStateInfo::m_Speed
	float ___m_Speed_5;
	// System.Single UnityEngine.AnimatorStateInfo::m_SpeedMultiplier
	float ___m_SpeedMultiplier_6;
	// System.Int32 UnityEngine.AnimatorStateInfo::m_Tag
	int32_t ___m_Tag_7;
	// System.Int32 UnityEngine.AnimatorStateInfo::m_Loop
	int32_t ___m_Loop_8;
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

// System.Byte
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3 
{
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;
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

// UnityEngine.Color32
struct Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B 
{
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
};

// UnityEngine.DrivenRectTransformTracker
struct DrivenRectTransformTracker_tFB0706C933E3C68E4F377C204FCEEF091F1EE0B1 
{
	union
	{
		struct
		{
		};
		uint8_t DrivenRectTransformTracker_tFB0706C933E3C68E4F377C204FCEEF091F1EE0B1__padding[1];
	};
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
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

// UnityEngine.Keyframe
struct Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0 
{
	// System.Single UnityEngine.Keyframe::m_Time
	float ___m_Time_0;
	// System.Single UnityEngine.Keyframe::m_Value
	float ___m_Value_1;
	// System.Single UnityEngine.Keyframe::m_InTangent
	float ___m_InTangent_2;
	// System.Single UnityEngine.Keyframe::m_OutTangent
	float ___m_OutTangent_3;
	// System.Int32 UnityEngine.Keyframe::m_WeightedMode
	int32_t ___m_WeightedMode_4;
	// System.Single UnityEngine.Keyframe::m_InWeight
	float ___m_InWeight_5;
	// System.Single UnityEngine.Keyframe::m_OutWeight
	float ___m_OutWeight_6;
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

// UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C 
{
	// UnityEngine.UI.Navigation/Mode UnityEngine.UI.Navigation::m_Mode
	int32_t ___m_Mode_0;
	// System.Boolean UnityEngine.UI.Navigation::m_WrapAround
	bool ___m_WrapAround_1;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnUp
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnDown
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnLeft
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnRight
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
};
// Native definition for P/Invoke marshalling of UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C_marshaled_pinvoke
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
};
// Native definition for COM marshalling of UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C_marshaled_com
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
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

// UnityEngine.SceneManagement.Scene
struct Scene_tA1DC762B79745EB5140F054C884855B922318356 
{
	// System.Int32 UnityEngine.SceneManagement.Scene::m_Handle
	int32_t ___m_Handle_0;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD 
{
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_HighlightedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_PressedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_SelectedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_DisabledSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};
// Native definition for P/Invoke marshalling of UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD_marshaled_pinvoke
{
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};
// Native definition for COM marshalling of UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD_marshaled_com
{
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
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

// UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3  : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D
{
	// System.Single UnityEngine.WaitForSeconds::m_Seconds
	float ___m_Seconds_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_marshaled_pinvoke : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
	float ___m_Seconds_0;
};
// Native definition for COM marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_marshaled_com : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
	float ___m_Seconds_0;
};

// UnityEngine.WaitForSecondsRealtime
struct WaitForSecondsRealtime_tA8CE0AAB4B0C872B843E7973637037D17682BA01  : public CustomYieldInstruction_t6B81A50D5D210C1ACAAE247FB53B65CDFFEB7617
{
	// System.Single UnityEngine.WaitForSecondsRealtime::<waitTime>k__BackingField
	float ___U3CwaitTimeU3Ek__BackingField_0;
	// System.Single UnityEngine.WaitForSecondsRealtime::m_WaitUntilTime
	float ___m_WaitUntilTime_1;
};

// UnityEngine.AnimationCurve
struct AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354  : public RuntimeObject
{
	// System.IntPtr UnityEngine.AnimationCurve::m_Ptr
	intptr_t ___m_Ptr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.AnimationCurve
struct AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.AnimationCurve
struct AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// UnityEngine.UI.ColorBlock
struct ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 
{
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_NormalColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_NormalColor_0;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_HighlightedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_HighlightedColor_1;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_PressedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_PressedColor_2;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_SelectedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_SelectedColor_3;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_DisabledColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_DisabledColor_4;
	// System.Single UnityEngine.UI.ColorBlock::m_ColorMultiplier
	float ___m_ColorMultiplier_5;
	// System.Single UnityEngine.UI.ColorBlock::m_FadeDuration
	float ___m_FadeDuration_6;
};

struct ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11_StaticFields
{
	// UnityEngine.UI.ColorBlock UnityEngine.UI.ColorBlock::defaultColorBlock
	ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 ___defaultColorBlock_7;
};

// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B  : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D
{
	// System.IntPtr UnityEngine.Coroutine::m_Ptr
	intptr_t ___m_Ptr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B_marshaled_pinvoke : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B_marshaled_com : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
	intptr_t ___m_Ptr_0;
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

// UnityEngine.RaycastHit
struct RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 
{
	// UnityEngine.Vector3 UnityEngine.RaycastHit::m_Point
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Point_0;
	// UnityEngine.Vector3 UnityEngine.RaycastHit::m_Normal
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Normal_1;
	// System.UInt32 UnityEngine.RaycastHit::m_FaceID
	uint32_t ___m_FaceID_2;
	// System.Single UnityEngine.RaycastHit::m_Distance
	float ___m_Distance_3;
	// UnityEngine.Vector2 UnityEngine.RaycastHit::m_UV
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_UV_4;
	// System.Int32 UnityEngine.RaycastHit::m_Collider
	int32_t ___m_Collider_5;
};

// UnityEngine.AudioClip
struct AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
	// UnityEngine.AudioClip/PCMReaderCallback UnityEngine.AudioClip::m_PCMReaderCallback
	PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E* ___m_PCMReaderCallback_4;
	// UnityEngine.AudioClip/PCMSetPositionCallback UnityEngine.AudioClip::m_PCMSetPositionCallback
	PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072* ___m_PCMSetPositionCallback_5;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
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

// UnityEngine.Motion
struct Motion_tBCD49FBF5608AD21FC03B63C8182FABCEF2707AC  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
	// System.Boolean UnityEngine.Motion::<isAnimatorMotion>k__BackingField
	bool ___U3CisAnimatorMotionU3Ek__BackingField_4;
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

// UnityEngine.Shader
struct Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// UnityEngine.Texture
struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700_StaticFields
{
	// System.Int32 UnityEngine.Texture::GenerateAllMips
	int32_t ___GenerateAllMips_4;
};

// System.Func`2<InterfaceAnmElement,System.Int32>
struct Func_2_t61A769E1370E91D9D2BBB870F77AB93DC7203E59  : public MulticastDelegate_t
{
};

// UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.LoadSceneMode>
struct UnityAction_2_t1C08AEB5AA4F72FEFAB7F303E33C8CFFF80A8C3A  : public MulticastDelegate_t
{
};

// UnityEngine.AnimationClip
struct AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712  : public Motion_tBCD49FBF5608AD21FC03B63C8182FABCEF2707AC
{
};

// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C  : public MulticastDelegate_t
{
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// IAM_EndAppear
struct IAM_EndAppear_t60802E44D1AB53A268000746AEAA403393EFE4C6  : public MulticastDelegate_t
{
};

// IAM_EndDisappear
struct IAM_EndDisappear_t91F7B236FDF2A3FC74F13C5FD4987F95E8936663  : public MulticastDelegate_t
{
};

// IAM_StartAppear
struct IAM_StartAppear_t45F8AF6D25B9B8F63ED671D6461EF06AFBDEACDC  : public MulticastDelegate_t
{
};

// IAM_StartDisappear
struct IAM_StartDisappear_tFBEC30F3C988FD6D617407114866A1D5FE174BFB  : public MulticastDelegate_t
{
};

// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// UnityEngine.RenderTexture
struct RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27  : public Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700
{
};

// UnityEngine.Rigidbody
struct Rigidbody_t268697F5A994213ED97393309870968BC1C7393C  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4  : public Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700
{
};

// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Animator
struct Animator_t8A52E42AE54F76681838FE9E632683EF3952E883  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.AudioBehaviour
struct AudioBehaviour_t2DC0BEF7B020C952F3D2DA5AAAC88501C7EEB941  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
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

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5  : public Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1
{
};

struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_StaticFields
{
	// UnityEngine.RectTransform/ReapplyDrivenProperties UnityEngine.RectTransform::reapplyDrivenProperties
	ReapplyDrivenProperties_t3482EA130A01FF7EE2EEFE37F66A5215D08CFE24* ___reapplyDrivenProperties_4;
};

// UnityEngine.AudioSource
struct AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299  : public AudioBehaviour_t2DC0BEF7B020C952F3D2DA5AAAC88501C7EEB941
{
};

// DoNotDestroyOnLoad_perName
struct DoNotDestroyOnLoad_perName_t9EBCA885C7054C26B4DEB01C06C88FD2753432A5  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

struct DoNotDestroyOnLoad_perName_t9EBCA885C7054C26B4DEB01C06C88FD2753432A5_StaticFields
{
	// System.Collections.Generic.List`1<System.String> DoNotDestroyOnLoad_perName::list
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___list_4;
};

// ExampleCam
struct ExampleCam_tE2903697D96306F068D755E459E112ACFC122949  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// MouseOrbitImproved ExampleCam::mouseOrbit
	MouseOrbitImproved_t19ECE3CB982D60FD6DB794ABFEF61AA7CAAE8F64* ___mouseOrbit_4;
	// System.Collections.Generic.List`1<UnityEngine.MonoBehaviour> ExampleCam::ImageEffectsList
	List_1_tCB9190A56C65FD59CE07C6A0EA71F30067A43D81* ___ImageEffectsList_5;
};

// ExampleListener
struct ExampleListener_t5583A25124D06A1FECAF18320ACAD10E693E6126  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// InterfaceAnimManager ExampleListener::IAM
	InterfaceAnimManager_t55019D504BEA6534494FED15C7945911CE850962* ___IAM_4;
};

// ExampleUI
struct ExampleUI_t2552997442A7324DD508292D6911E8AA0B7A12DD  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.UI.Text ExampleUI::displayedName
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___displayedName_4;
	// InterfaceAnimManager ExampleUI::current
	InterfaceAnimManager_t55019D504BEA6534494FED15C7945911CE850962* ___current_5;
	// System.Int32 ExampleUI::indexInterface
	int32_t ___indexInterface_6;
	// InterfaceAnimManager[] ExampleUI::holoInterfaceList
	InterfaceAnimManagerU5BU5D_tB99A76DFD85996ED124AE4892004922F617EF797* ___holoInterfaceList_7;
	// ExampleCam ExampleUI::currentCam
	ExampleCam_tE2903697D96306F068D755E459E112ACFC122949* ___currentCam_8;
	// System.String ExampleUI::searchTarget
	String_t* ___searchTarget_9;
	// System.String ExampleUI::searchCam
	String_t* ___searchCam_10;
	// System.Int32 ExampleUI::indexScene
	int32_t ___indexScene_11;
	// System.Collections.Generic.List`1<System.String> ExampleUI::loadableScenes
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___loadableScenes_14;
	// UnityEngine.GameObject ExampleUI::fullscreenSwith
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___fullscreenSwith_15;
	// UnityEngine.AudioSource ExampleUI::audioSource
	AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___audioSource_16;
};

struct ExampleUI_t2552997442A7324DD508292D6911E8AA0B7A12DD_StaticFields
{
	// System.Boolean ExampleUI::allDelaysStatus
	bool ___allDelaysStatus_12;
	// System.Boolean ExampleUI::allImgEffectsStatus
	bool ___allImgEffectsStatus_13;
};

// ExcelsiorUtils
struct ExcelsiorUtils_t7265AB93B70A2112C8F6317B6E3AEFBD6612858F  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject ExcelsiorUtils::target
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___target_4;
	// UnityEngine.AudioSource ExcelsiorUtils::audioSource
	AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___audioSource_5;
	// UnityEngine.AudioClip ExcelsiorUtils::audioClip
	AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___audioClip_6;
	// UnityEngine.UI.Text ExcelsiorUtils::textContent
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___textContent_7;
	// UnityEngine.UI.Slider ExcelsiorUtils::slider
	Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* ___slider_8;
};

// InterfaceAnimManager
struct InterfaceAnimManager_t55019D504BEA6534494FED15C7945911CE850962  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Collections.Generic.List`1<InterfaceAnmElement> InterfaceAnimManager::elementsList
	List_1_t2F48DCC67405C354E57C9C3263548DB2D541DBB0* ___elementsList_4;
	// System.Boolean InterfaceAnimManager::autoStart
	bool ___autoStart_5;
	// System.Boolean InterfaceAnimManager::invertDelays
	bool ___invertDelays_6;
	// System.Boolean InterfaceAnimManager::cloneDelays
	bool ___cloneDelays_7;
	// System.Single InterfaceAnimManager::timer
	float ___timer_8;
	// System.Int32 InterfaceAnimManager::timeBetweenLoops
	int32_t ___timeBetweenLoops_9;
	// System.Boolean InterfaceAnimManager::testLoop
	bool ___testLoop_10;
	// System.Boolean InterfaceAnimManager::autoLinearAppearDelay
	bool ___autoLinearAppearDelay_11;
	// System.Boolean InterfaceAnimManager::forceUnscaledTime
	bool ___forceUnscaledTime_12;
	// System.Single InterfaceAnimManager::appearDelay_SpeedMultiplier
	float ___appearDelay_SpeedMultiplier_13;
	// System.Single InterfaceAnimManager::disappearDelay_SpeedMultiplier
	float ___disappearDelay_SpeedMultiplier_14;
	// CSFHIAnimableState InterfaceAnimManager::currentState
	int32_t ___currentState_15;
	// System.Boolean InterfaceAnimManager::useDelays
	bool ___useDelays_16;
	// UnityEngine.AudioSource InterfaceAnimManager::audioSource
	AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___audioSource_17;
	// UnityEngine.AudioClip InterfaceAnimManager::openSound
	AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___openSound_18;
	// UnityEngine.AudioClip InterfaceAnimManager::closeSound
	AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___closeSound_19;
	// System.Collections.Generic.List`1<InterfaceAnimManager> InterfaceAnimManager::nestedIAM
	List_1_t70363A4FDD9B70AB54795A2131A483E3A31DC878* ___nestedIAM_20;
	// System.Boolean InterfaceAnimManager::waitAppear_Nested
	bool ___waitAppear_Nested_21;
	// System.Boolean InterfaceAnimManager::waitDisappear_Nested
	bool ___waitDisappear_Nested_22;
	// InterfaceAnmElement InterfaceAnimManager::waitElementFullAnim
	InterfaceAnmElement_t02DC7282CF1F682DD0C071B9DE5637D4E58C5706* ___waitElementFullAnim_23;
	// IAM_StartAppear InterfaceAnimManager::OnStartAppear
	IAM_StartAppear_t45F8AF6D25B9B8F63ED671D6461EF06AFBDEACDC* ___OnStartAppear_24;
	// IAM_StartDisappear InterfaceAnimManager::OnStartDisappear
	IAM_StartDisappear_tFBEC30F3C988FD6D617407114866A1D5FE174BFB* ___OnStartDisappear_25;
	// IAM_EndAppear InterfaceAnimManager::OnEndAppear
	IAM_EndAppear_t60802E44D1AB53A268000746AEAA403393EFE4C6* ___OnEndAppear_26;
	// IAM_EndDisappear InterfaceAnimManager::OnEndDisappear
	IAM_EndDisappear_t91F7B236FDF2A3FC74F13C5FD4987F95E8936663* ___OnEndDisappear_27;
};

// InterfaceAnmElement
struct InterfaceAnmElement_t02DC7282CF1F682DD0C071B9DE5637D4E58C5706  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject InterfaceAnmElement::gameObjectRef
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___gameObjectRef_4;
	// System.Single InterfaceAnmElement::timeAppear
	float ___timeAppear_5;
	// System.Single InterfaceAnmElement::timeDisappear
	float ___timeDisappear_6;
	// System.Boolean InterfaceAnmElement::recycling
	bool ___recycling_7;
	// System.Int32 InterfaceAnmElement::sortID
	int32_t ___sortID_8;
	// UnityEngine.Animator InterfaceAnmElement::animator
	Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___animator_9;
	// UnityEngine.AnimationClip[] InterfaceAnmElement::animClips
	AnimationClipU5BU5D_t48CE1A495BA95608745A065C735F2D5BB8DE5A0F* ___animClips_10;
	// CSFHIAnimableState InterfaceAnmElement::currentState
	int32_t ___currentState_12;
	// System.Boolean InterfaceAnmElement::isNested_IAM
	bool ___isNested_IAM_13;
};

struct InterfaceAnmElement_t02DC7282CF1F682DD0C071B9DE5637D4E58C5706_StaticFields
{
	// System.Collections.Generic.List`1<InterfaceAnmElement> InterfaceAnmElement::list
	List_1_t2F48DCC67405C354E57C9C3263548DB2D541DBB0* ___list_11;
};

// MouseOrbitImproved
struct MouseOrbitImproved_t19ECE3CB982D60FD6DB794ABFEF61AA7CAAE8F64  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Transform MouseOrbitImproved::target
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___target_4;
	// System.Single MouseOrbitImproved::distance
	float ___distance_5;
	// System.Single MouseOrbitImproved::xSpeed
	float ___xSpeed_6;
	// System.Single MouseOrbitImproved::ySpeed
	float ___ySpeed_7;
	// System.Single MouseOrbitImproved::yMinLimit
	float ___yMinLimit_8;
	// System.Single MouseOrbitImproved::yMaxLimit
	float ___yMaxLimit_9;
	// System.Single MouseOrbitImproved::distanceMin
	float ___distanceMin_10;
	// System.Single MouseOrbitImproved::distanceMax
	float ___distanceMax_11;
	// System.Single MouseOrbitImproved::smoothTime
	float ___smoothTime_12;
	// System.Single MouseOrbitImproved::rotationYAxis
	float ___rotationYAxis_13;
	// System.Single MouseOrbitImproved::rotationXAxis
	float ___rotationXAxis_14;
	// System.Single MouseOrbitImproved::velocityX
	float ___velocityX_15;
	// System.Single MouseOrbitImproved::velocityY
	float ___velocityY_16;
};

// UnityStandardAssets.ImageEffects.PostEffectsBase
struct PostEffectsBase_t68F9A09F9CCB0B3DF158A27640081D0DFB22FD24  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Boolean UnityStandardAssets.ImageEffects.PostEffectsBase::supportHDRTextures
	bool ___supportHDRTextures_4;
	// System.Boolean UnityStandardAssets.ImageEffects.PostEffectsBase::supportDX11
	bool ___supportDX11_5;
	// System.Boolean UnityStandardAssets.ImageEffects.PostEffectsBase::isSupported
	bool ___isSupported_6;
	// System.Collections.Generic.List`1<UnityEngine.Material> UnityStandardAssets.ImageEffects.PostEffectsBase::createdMaterials
	List_1_t386E09F4F22DDE4D2AC41A8567FFF283C254537B* ___createdMaterials_7;
};

// UnityStandardAssets.ImageEffects.PostEffectsHelper
struct PostEffectsHelper_t12213D5AE8FCB54BDC8CF5223A513E4CF16AAC91  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// UnityStandardAssets.ImageEffects.Bloom
struct Bloom_t7FC3FD3F083630D01AC1C5E0D6859CB59F5D1EBF  : public PostEffectsBase_t68F9A09F9CCB0B3DF158A27640081D0DFB22FD24
{
	// UnityStandardAssets.ImageEffects.Bloom/TweakMode UnityStandardAssets.ImageEffects.Bloom::tweakMode
	int32_t ___tweakMode_8;
	// UnityStandardAssets.ImageEffects.Bloom/BloomScreenBlendMode UnityStandardAssets.ImageEffects.Bloom::screenBlendMode
	int32_t ___screenBlendMode_9;
	// UnityStandardAssets.ImageEffects.Bloom/HDRBloomMode UnityStandardAssets.ImageEffects.Bloom::hdr
	int32_t ___hdr_10;
	// System.Boolean UnityStandardAssets.ImageEffects.Bloom::doHdr
	bool ___doHdr_11;
	// System.Single UnityStandardAssets.ImageEffects.Bloom::sepBlurSpread
	float ___sepBlurSpread_12;
	// UnityStandardAssets.ImageEffects.Bloom/BloomQuality UnityStandardAssets.ImageEffects.Bloom::quality
	int32_t ___quality_13;
	// System.Single UnityStandardAssets.ImageEffects.Bloom::bloomIntensity
	float ___bloomIntensity_14;
	// System.Single UnityStandardAssets.ImageEffects.Bloom::bloomThreshold
	float ___bloomThreshold_15;
	// UnityEngine.Color UnityStandardAssets.ImageEffects.Bloom::bloomThresholdColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___bloomThresholdColor_16;
	// System.Int32 UnityStandardAssets.ImageEffects.Bloom::bloomBlurIterations
	int32_t ___bloomBlurIterations_17;
	// System.Int32 UnityStandardAssets.ImageEffects.Bloom::hollywoodFlareBlurIterations
	int32_t ___hollywoodFlareBlurIterations_18;
	// System.Single UnityStandardAssets.ImageEffects.Bloom::flareRotation
	float ___flareRotation_19;
	// UnityStandardAssets.ImageEffects.Bloom/LensFlareStyle UnityStandardAssets.ImageEffects.Bloom::lensflareMode
	int32_t ___lensflareMode_20;
	// System.Single UnityStandardAssets.ImageEffects.Bloom::hollyStretchWidth
	float ___hollyStretchWidth_21;
	// System.Single UnityStandardAssets.ImageEffects.Bloom::lensflareIntensity
	float ___lensflareIntensity_22;
	// System.Single UnityStandardAssets.ImageEffects.Bloom::lensflareThreshold
	float ___lensflareThreshold_23;
	// System.Single UnityStandardAssets.ImageEffects.Bloom::lensFlareSaturation
	float ___lensFlareSaturation_24;
	// UnityEngine.Color UnityStandardAssets.ImageEffects.Bloom::flareColorA
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___flareColorA_25;
	// UnityEngine.Color UnityStandardAssets.ImageEffects.Bloom::flareColorB
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___flareColorB_26;
	// UnityEngine.Color UnityStandardAssets.ImageEffects.Bloom::flareColorC
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___flareColorC_27;
	// UnityEngine.Color UnityStandardAssets.ImageEffects.Bloom::flareColorD
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___flareColorD_28;
	// UnityEngine.Texture2D UnityStandardAssets.ImageEffects.Bloom::lensFlareVignetteMask
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___lensFlareVignetteMask_29;
	// UnityEngine.Shader UnityStandardAssets.ImageEffects.Bloom::lensFlareShader
	Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* ___lensFlareShader_30;
	// UnityEngine.Material UnityStandardAssets.ImageEffects.Bloom::lensFlareMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___lensFlareMaterial_31;
	// UnityEngine.Shader UnityStandardAssets.ImageEffects.Bloom::screenBlendShader
	Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* ___screenBlendShader_32;
	// UnityEngine.Material UnityStandardAssets.ImageEffects.Bloom::screenBlend
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___screenBlend_33;
	// UnityEngine.Shader UnityStandardAssets.ImageEffects.Bloom::blurAndFlaresShader
	Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* ___blurAndFlaresShader_34;
	// UnityEngine.Material UnityStandardAssets.ImageEffects.Bloom::blurAndFlaresMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___blurAndFlaresMaterial_35;
	// UnityEngine.Shader UnityStandardAssets.ImageEffects.Bloom::brightPassFilterShader
	Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* ___brightPassFilterShader_36;
	// UnityEngine.Material UnityStandardAssets.ImageEffects.Bloom::brightPassFilterMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___brightPassFilterMaterial_37;
};

// UnityStandardAssets.ImageEffects.BloomOptimized
struct BloomOptimized_tB65EA6C1DFCBBBDD9917463A09AB0D4D4204099B  : public PostEffectsBase_t68F9A09F9CCB0B3DF158A27640081D0DFB22FD24
{
	// System.Single UnityStandardAssets.ImageEffects.BloomOptimized::threshold
	float ___threshold_8;
	// System.Single UnityStandardAssets.ImageEffects.BloomOptimized::intensity
	float ___intensity_9;
	// System.Single UnityStandardAssets.ImageEffects.BloomOptimized::blurSize
	float ___blurSize_10;
	// UnityStandardAssets.ImageEffects.BloomOptimized/Resolution UnityStandardAssets.ImageEffects.BloomOptimized::resolution
	int32_t ___resolution_11;
	// System.Int32 UnityStandardAssets.ImageEffects.BloomOptimized::blurIterations
	int32_t ___blurIterations_12;
	// UnityStandardAssets.ImageEffects.BloomOptimized/BlurType UnityStandardAssets.ImageEffects.BloomOptimized::blurType
	int32_t ___blurType_13;
	// UnityEngine.Shader UnityStandardAssets.ImageEffects.BloomOptimized::fastBloomShader
	Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* ___fastBloomShader_14;
	// UnityEngine.Material UnityStandardAssets.ImageEffects.BloomOptimized::fastBloomMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___fastBloomMaterial_15;
};

// UnityStandardAssets.ImageEffects.ColorCorrectionCurves
struct ColorCorrectionCurves_tE85378ED43495F624056B5696F97D3D2451D6EEB  : public PostEffectsBase_t68F9A09F9CCB0B3DF158A27640081D0DFB22FD24
{
	// UnityEngine.AnimationCurve UnityStandardAssets.ImageEffects.ColorCorrectionCurves::redChannel
	AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* ___redChannel_8;
	// UnityEngine.AnimationCurve UnityStandardAssets.ImageEffects.ColorCorrectionCurves::greenChannel
	AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* ___greenChannel_9;
	// UnityEngine.AnimationCurve UnityStandardAssets.ImageEffects.ColorCorrectionCurves::blueChannel
	AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* ___blueChannel_10;
	// System.Boolean UnityStandardAssets.ImageEffects.ColorCorrectionCurves::useDepthCorrection
	bool ___useDepthCorrection_11;
	// UnityEngine.AnimationCurve UnityStandardAssets.ImageEffects.ColorCorrectionCurves::zCurve
	AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* ___zCurve_12;
	// UnityEngine.AnimationCurve UnityStandardAssets.ImageEffects.ColorCorrectionCurves::depthRedChannel
	AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* ___depthRedChannel_13;
	// UnityEngine.AnimationCurve UnityStandardAssets.ImageEffects.ColorCorrectionCurves::depthGreenChannel
	AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* ___depthGreenChannel_14;
	// UnityEngine.AnimationCurve UnityStandardAssets.ImageEffects.ColorCorrectionCurves::depthBlueChannel
	AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* ___depthBlueChannel_15;
	// UnityEngine.Material UnityStandardAssets.ImageEffects.ColorCorrectionCurves::ccMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___ccMaterial_16;
	// UnityEngine.Material UnityStandardAssets.ImageEffects.ColorCorrectionCurves::ccDepthMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___ccDepthMaterial_17;
	// UnityEngine.Material UnityStandardAssets.ImageEffects.ColorCorrectionCurves::selectiveCcMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___selectiveCcMaterial_18;
	// UnityEngine.Texture2D UnityStandardAssets.ImageEffects.ColorCorrectionCurves::rgbChannelTex
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___rgbChannelTex_19;
	// UnityEngine.Texture2D UnityStandardAssets.ImageEffects.ColorCorrectionCurves::rgbDepthChannelTex
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___rgbDepthChannelTex_20;
	// UnityEngine.Texture2D UnityStandardAssets.ImageEffects.ColorCorrectionCurves::zCurveTex
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___zCurveTex_21;
	// System.Single UnityStandardAssets.ImageEffects.ColorCorrectionCurves::saturation
	float ___saturation_22;
	// System.Boolean UnityStandardAssets.ImageEffects.ColorCorrectionCurves::selectiveCc
	bool ___selectiveCc_23;
	// UnityEngine.Color UnityStandardAssets.ImageEffects.ColorCorrectionCurves::selectiveFromColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___selectiveFromColor_24;
	// UnityEngine.Color UnityStandardAssets.ImageEffects.ColorCorrectionCurves::selectiveToColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___selectiveToColor_25;
	// UnityStandardAssets.ImageEffects.ColorCorrectionCurves/ColorCorrectionMode UnityStandardAssets.ImageEffects.ColorCorrectionCurves::mode
	int32_t ___mode_26;
	// System.Boolean UnityStandardAssets.ImageEffects.ColorCorrectionCurves::updateTextures
	bool ___updateTextures_27;
	// UnityEngine.Shader UnityStandardAssets.ImageEffects.ColorCorrectionCurves::colorCorrectionCurvesShader
	Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* ___colorCorrectionCurvesShader_28;
	// UnityEngine.Shader UnityStandardAssets.ImageEffects.ColorCorrectionCurves::simpleColorCorrectionCurvesShader
	Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* ___simpleColorCorrectionCurvesShader_29;
	// UnityEngine.Shader UnityStandardAssets.ImageEffects.ColorCorrectionCurves::colorCorrectionSelectiveShader
	Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* ___colorCorrectionSelectiveShader_30;
	// System.Boolean UnityStandardAssets.ImageEffects.ColorCorrectionCurves::updateTexturesOnStartup
	bool ___updateTexturesOnStartup_31;
};

// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_Material_6;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_Color_7;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipLayoutUpdate
	bool ___m_SkipLayoutUpdate_8;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipMaterialUpdate
	bool ___m_SkipMaterialUpdate_9;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_10;
	// UnityEngine.Vector4 UnityEngine.UI.Graphic::m_RaycastPadding
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_RaycastPadding_11;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_RectTransform_12;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860* ___m_CanvasRenderer_13;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___m_Canvas_14;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_15;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_16;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyLayoutCallback_17;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyVertsCallback_18;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyMaterialCallback_19;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::m_CachedMesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_CachedMesh_22;
	// UnityEngine.Vector2[] UnityEngine.UI.Graphic::m_CachedUvs
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___m_CachedUvs_23;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4* ___m_ColorTweenRunner_24;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25;
};

struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_DefaultUI_4;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___s_WhiteTexture_5;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___s_Mesh_20;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* ___s_VertexHelper_21;
};

// UnityStandardAssets.ImageEffects.ScreenSpaceAmbientObscurance
struct ScreenSpaceAmbientObscurance_tE0AE3E1E85695DE5A5071FFC30B42DFE44200042  : public PostEffectsBase_t68F9A09F9CCB0B3DF158A27640081D0DFB22FD24
{
	// System.Single UnityStandardAssets.ImageEffects.ScreenSpaceAmbientObscurance::intensity
	float ___intensity_8;
	// System.Single UnityStandardAssets.ImageEffects.ScreenSpaceAmbientObscurance::radius
	float ___radius_9;
	// System.Int32 UnityStandardAssets.ImageEffects.ScreenSpaceAmbientObscurance::blurIterations
	int32_t ___blurIterations_10;
	// System.Single UnityStandardAssets.ImageEffects.ScreenSpaceAmbientObscurance::blurFilterDistance
	float ___blurFilterDistance_11;
	// System.Int32 UnityStandardAssets.ImageEffects.ScreenSpaceAmbientObscurance::downsample
	int32_t ___downsample_12;
	// UnityEngine.Texture2D UnityStandardAssets.ImageEffects.ScreenSpaceAmbientObscurance::rand
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___rand_13;
	// UnityEngine.Shader UnityStandardAssets.ImageEffects.ScreenSpaceAmbientObscurance::aoShader
	Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* ___aoShader_14;
	// UnityEngine.Material UnityStandardAssets.ImageEffects.ScreenSpaceAmbientObscurance::aoMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___aoMaterial_15;
};

// UnityEngine.UI.Selectable
struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// System.Boolean UnityEngine.UI.Selectable::m_EnableCalled
	bool ___m_EnableCalled_6;
	// UnityEngine.UI.Navigation UnityEngine.UI.Selectable::m_Navigation
	Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C ___m_Navigation_7;
	// UnityEngine.UI.Selectable/Transition UnityEngine.UI.Selectable::m_Transition
	int32_t ___m_Transition_8;
	// UnityEngine.UI.ColorBlock UnityEngine.UI.Selectable::m_Colors
	ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 ___m_Colors_9;
	// UnityEngine.UI.SpriteState UnityEngine.UI.Selectable::m_SpriteState
	SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD ___m_SpriteState_10;
	// UnityEngine.UI.AnimationTriggers UnityEngine.UI.Selectable::m_AnimationTriggers
	AnimationTriggers_tA0DC06F89C5280C6DD972F6F4C8A56D7F4F79074* ___m_AnimationTriggers_11;
	// System.Boolean UnityEngine.UI.Selectable::m_Interactable
	bool ___m_Interactable_12;
	// UnityEngine.UI.Graphic UnityEngine.UI.Selectable::m_TargetGraphic
	Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* ___m_TargetGraphic_13;
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
	List_1_t2CDCA768E7F493F5EDEBC75AEB200FD621354E35* ___m_CanvasGroupCache_19;
};

struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712_StaticFields
{
	// UnityEngine.UI.Selectable[] UnityEngine.UI.Selectable::s_Selectables
	SelectableU5BU5D_t4160E135F02A40F75A63F787D36F31FEC6FE91A9* ___s_Selectables_4;
	// System.Int32 UnityEngine.UI.Selectable::s_SelectableCount
	int32_t ___s_SelectableCount_5;
};

// UnityEngine.UI.MaskableGraphic
struct MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E  : public Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931
{
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_26;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_MaskMaterial_27;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670* ___m_ParentMask_28;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_29;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IsMaskingGraphic
	bool ___m_IsMaskingGraphic_30;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_31;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8* ___m_OnCullStateChanged_32;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_33;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_34;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_Corners_35;
};

// UnityEngine.UI.Slider
struct Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F  : public Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712
{
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_FillRect
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_FillRect_20;
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_HandleRect
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_HandleRect_21;
	// UnityEngine.UI.Slider/Direction UnityEngine.UI.Slider::m_Direction
	int32_t ___m_Direction_22;
	// System.Single UnityEngine.UI.Slider::m_MinValue
	float ___m_MinValue_23;
	// System.Single UnityEngine.UI.Slider::m_MaxValue
	float ___m_MaxValue_24;
	// System.Boolean UnityEngine.UI.Slider::m_WholeNumbers
	bool ___m_WholeNumbers_25;
	// System.Single UnityEngine.UI.Slider::m_Value
	float ___m_Value_26;
	// UnityEngine.UI.Slider/SliderEvent UnityEngine.UI.Slider::m_OnValueChanged
	SliderEvent_t92A82EF6C62E15AF92B640FE2D960E877E8C6555* ___m_OnValueChanged_27;
	// UnityEngine.UI.Image UnityEngine.UI.Slider::m_FillImage
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___m_FillImage_28;
	// UnityEngine.Transform UnityEngine.UI.Slider::m_FillTransform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_FillTransform_29;
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_FillContainerRect
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_FillContainerRect_30;
	// UnityEngine.Transform UnityEngine.UI.Slider::m_HandleTransform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_HandleTransform_31;
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_HandleContainerRect
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_HandleContainerRect_32;
	// UnityEngine.Vector2 UnityEngine.UI.Slider::m_Offset
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Offset_33;
	// UnityEngine.DrivenRectTransformTracker UnityEngine.UI.Slider::m_Tracker
	DrivenRectTransformTracker_tFB0706C933E3C68E4F377C204FCEEF091F1EE0B1 ___m_Tracker_34;
	// System.Boolean UnityEngine.UI.Slider::m_DelayedUpdateVisuals
	bool ___m_DelayedUpdateVisuals_35;
};

// UnityEngine.UI.Image
struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	// UnityEngine.Sprite UnityEngine.UI.Image::m_Sprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_Sprite_37;
	// UnityEngine.Sprite UnityEngine.UI.Image::m_OverrideSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_OverrideSprite_38;
	// UnityEngine.UI.Image/Type UnityEngine.UI.Image::m_Type
	int32_t ___m_Type_39;
	// System.Boolean UnityEngine.UI.Image::m_PreserveAspect
	bool ___m_PreserveAspect_40;
	// System.Boolean UnityEngine.UI.Image::m_FillCenter
	bool ___m_FillCenter_41;
	// UnityEngine.UI.Image/FillMethod UnityEngine.UI.Image::m_FillMethod
	int32_t ___m_FillMethod_42;
	// System.Single UnityEngine.UI.Image::m_FillAmount
	float ___m_FillAmount_43;
	// System.Boolean UnityEngine.UI.Image::m_FillClockwise
	bool ___m_FillClockwise_44;
	// System.Int32 UnityEngine.UI.Image::m_FillOrigin
	int32_t ___m_FillOrigin_45;
	// System.Single UnityEngine.UI.Image::m_AlphaHitTestMinimumThreshold
	float ___m_AlphaHitTestMinimumThreshold_46;
	// System.Boolean UnityEngine.UI.Image::m_Tracked
	bool ___m_Tracked_47;
	// System.Boolean UnityEngine.UI.Image::m_UseSpriteMesh
	bool ___m_UseSpriteMesh_48;
	// System.Single UnityEngine.UI.Image::m_PixelsPerUnitMultiplier
	float ___m_PixelsPerUnitMultiplier_49;
	// System.Single UnityEngine.UI.Image::m_CachedReferencePixelsPerUnit
	float ___m_CachedReferencePixelsPerUnit_50;
};

struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Image::s_ETC1DefaultUI
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_ETC1DefaultUI_36;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_VertScratch
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___s_VertScratch_51;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_UVScratch
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___s_UVScratch_52;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Xy
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___s_Xy_53;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Uv
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___s_Uv_54;
	// System.Collections.Generic.List`1<UnityEngine.UI.Image> UnityEngine.UI.Image::m_TrackedTexturelessImages
	List_1_tE6BB71ABF15905EFA2BE92C38A2716547AEADB19* ___m_TrackedTexturelessImages_55;
	// System.Boolean UnityEngine.UI.Image::s_Initialized
	bool ___s_Initialized_56;
};

// UnityEngine.UI.Text
struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	// UnityEngine.UI.FontData UnityEngine.UI.Text::m_FontData
	FontData_tB8E562846C6CB59C43260F69AE346B9BF3157224* ___m_FontData_36;
	// System.String UnityEngine.UI.Text::m_Text
	String_t* ___m_Text_37;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCache
	TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC* ___m_TextCache_38;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCacheForLayout
	TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC* ___m_TextCacheForLayout_39;
	// System.Boolean UnityEngine.UI.Text::m_DisableFontTextureRebuiltCallback
	bool ___m_DisableFontTextureRebuiltCallback_41;
	// UnityEngine.UIVertex[] UnityEngine.UI.Text::m_TempVerts
	UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F* ___m_TempVerts_42;
};

struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Text::s_DefaultText
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_DefaultText_40;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// InterfaceAnimManager[]
struct InterfaceAnimManagerU5BU5D_tB99A76DFD85996ED124AE4892004922F617EF797  : public RuntimeArray
{
	ALIGN_FIELD (8) InterfaceAnimManager_t55019D504BEA6534494FED15C7945911CE850962* m_Items[1];

	inline InterfaceAnimManager_t55019D504BEA6534494FED15C7945911CE850962* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline InterfaceAnimManager_t55019D504BEA6534494FED15C7945911CE850962** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, InterfaceAnimManager_t55019D504BEA6534494FED15C7945911CE850962* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline InterfaceAnimManager_t55019D504BEA6534494FED15C7945911CE850962* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline InterfaceAnimManager_t55019D504BEA6534494FED15C7945911CE850962** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, InterfaceAnimManager_t55019D504BEA6534494FED15C7945911CE850962* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771  : public RuntimeArray
{
	ALIGN_FIELD (8) Delegate_t* m_Items[1];

	inline Delegate_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Delegate_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.Animator[]
struct AnimatorU5BU5D_tC96418EE48F8DA017567CAE0235488C27640E759  : public RuntimeArray
{
	ALIGN_FIELD (8) Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* m_Items[1];

	inline Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Animator_t8A52E42AE54F76681838FE9E632683EF3952E883** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Animator_t8A52E42AE54F76681838FE9E632683EF3952E883** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.AnimationClip[]
struct AnimationClipU5BU5D_t48CE1A495BA95608745A065C735F2D5BB8DE5A0F  : public RuntimeArray
{
	ALIGN_FIELD (8) AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712* m_Items[1];

	inline AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.AnimatorClipInfo[]
struct AnimatorClipInfoU5BU5D_t202D955679134FCCD698779FBABD2530E58CD60A  : public RuntimeArray
{
	ALIGN_FIELD (8) AnimatorClipInfo_t0C913173594C893E36282602F54ABD06AC1CFA03 m_Items[1];

	inline AnimatorClipInfo_t0C913173594C893E36282602F54ABD06AC1CFA03 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline AnimatorClipInfo_t0C913173594C893E36282602F54ABD06AC1CFA03* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, AnimatorClipInfo_t0C913173594C893E36282602F54ABD06AC1CFA03 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline AnimatorClipInfo_t0C913173594C893E36282602F54ABD06AC1CFA03 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline AnimatorClipInfo_t0C913173594C893E36282602F54ABD06AC1CFA03* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, AnimatorClipInfo_t0C913173594C893E36282602F54ABD06AC1CFA03 value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.Keyframe[]
struct KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3  : public RuntimeArray
{
	ALIGN_FIELD (8) Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0 m_Items[1];

	inline Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0 value)
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
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918  : public RuntimeArray
{
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

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


// System.Boolean System.Collections.Generic.List`1<System.Object>::Contains(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Contains_m4C9139C2A6B23E9343D3F87807B32C6E2CFE660D_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,System.Int32Enum>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction_2__ctor_m7445B0F04ECB8542147C3C9B963A792140CFAD0A_gshared (UnityAction_2_tF47D82C7E3C3B118B409866D926435B55A0675BD* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// T[] UnityEngine.Component::GetComponentsInChildren<System.Object>(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Component_GetComponentsInChildren_TisRuntimeObject_m90734C3A39A158985239CB90DE2F0792F1D99926_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, bool ___includeInactive0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1<System.Object>::Remove(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Remove_m4DFA48F4CEB9169601E75FC28517C5C06EFA5AD7_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// System.Void System.Func`2<System.Object,System.Int32>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_mEB7603EDE6D79A62E5BD74A896F030D2C9F2A821_gshared (Func_2_t9A0D493A82DCC47C9C819A3B045E02D9B5DDCE1B* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Linq.IOrderedEnumerable`1<TSource> System.Linq.Enumerable::OrderBy<System.Object,System.Int32>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TKey>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_OrderBy_TisRuntimeObject_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mBDD931F79E334F31ECBCD42F790CAE0E0F323AA6_gshared (RuntimeObject* ___source0, Func_2_t9A0D493A82DCC47C9C819A3B045E02D9B5DDCE1B* ___keySelector1, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable::ToList<System.Object>(System.Collections.Generic.IEnumerable`1<TSource>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* Enumerable_ToList_TisRuntimeObject_mBDB9895C2D14F2A92043507996018A329BD32A64_gshared (RuntimeObject* ___source0, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::AddComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::RemoveAt(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_RemoveAt_m54F62297ADEE4D4FDA697F49ED807BF901201B54_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___index0, const RuntimeMethod* method) ;

// System.String UnityEngine.Object::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1<System.String>::Contains(T)
inline bool List_1_Contains_m359254483BE42CAD4DCA8FBAFB87473FB4CF00E1 (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, String_t* ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, String_t*, const RuntimeMethod*))List_1_Contains_m4C9139C2A6B23E9343D3F87807B32C6E2CFE660D_gshared)(__this, ___item0, method);
}
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_mFCDAE6333522488F60597AF019EA90BB1207A5AA (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___obj0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::DontDestroyOnLoad(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_DontDestroyOnLoad_m303AA1C4DC810349F285B4809E426CBBA8F834F9 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___target0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.String>::Add(T)
inline void List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, String_t* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, String_t*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.String>::.ctor()
inline void List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.MonoBehaviour>::.ctor()
inline void List_1__ctor_m351148D1F56354516445CD9F1BFD8002B41FD7A2 (List_1_tCB9190A56C65FD59CE07C6A0EA71F30067A43D81* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tCB9190A56C65FD59CE07C6A0EA71F30067A43D81*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Boolean UnityEngine.Object::op_Implicit(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___exists0, const RuntimeMethod* method) ;
// System.Void ExampleListener::AddListener()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExampleListener_AddListener_m61C17BC92F6F28A4A96DF431A171D960F09A875B (ExampleListener_t5583A25124D06A1FECAF18320ACAD10E693E6126* __this, const RuntimeMethod* method) ;
// System.Void IAM_StartAppear::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IAM_StartAppear__ctor_m5241E3AC8F01228C378127519DCC13D701397E10 (IAM_StartAppear_t45F8AF6D25B9B8F63ED671D6461EF06AFBDEACDC* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void InterfaceAnimManager::add_OnStartAppear(IAM_StartAppear)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterfaceAnimManager_add_OnStartAppear_mFFCADFD6C20EE575552C576923F01A584F25E191 (InterfaceAnimManager_t55019D504BEA6534494FED15C7945911CE850962* __this, IAM_StartAppear_t45F8AF6D25B9B8F63ED671D6461EF06AFBDEACDC* ___value0, const RuntimeMethod* method) ;
// System.Void IAM_StartDisappear::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IAM_StartDisappear__ctor_m66CBCB5131678ACE096924FA8262C1CF6C5C0F18 (IAM_StartDisappear_tFBEC30F3C988FD6D617407114866A1D5FE174BFB* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void InterfaceAnimManager::add_OnStartDisappear(IAM_StartDisappear)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterfaceAnimManager_add_OnStartDisappear_m636052A822D968B5AB57CBAAFA41ECE748690178 (InterfaceAnimManager_t55019D504BEA6534494FED15C7945911CE850962* __this, IAM_StartDisappear_tFBEC30F3C988FD6D617407114866A1D5FE174BFB* ___value0, const RuntimeMethod* method) ;
// System.Void IAM_EndAppear::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IAM_EndAppear__ctor_m7892297E28776607E2CBC89F01E388DA4D9AFA2C (IAM_EndAppear_t60802E44D1AB53A268000746AEAA403393EFE4C6* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void InterfaceAnimManager::add_OnEndAppear(IAM_EndAppear)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterfaceAnimManager_add_OnEndAppear_m646730B8F8C40D442B4116074FE6C65E82F6F3FC (InterfaceAnimManager_t55019D504BEA6534494FED15C7945911CE850962* __this, IAM_EndAppear_t60802E44D1AB53A268000746AEAA403393EFE4C6* ___value0, const RuntimeMethod* method) ;
// System.Void IAM_EndDisappear::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IAM_EndDisappear__ctor_m02480C1C7F7AD2915FB666BA5663E747EFB0B7CA (IAM_EndDisappear_t91F7B236FDF2A3FC74F13C5FD4987F95E8936663* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void InterfaceAnimManager::add_OnEndDisappear(IAM_EndDisappear)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterfaceAnimManager_add_OnEndDisappear_mC951476928A818AF706009F32CAAF5C159954137 (InterfaceAnimManager_t55019D504BEA6534494FED15C7945911CE850962* __this, IAM_EndDisappear_t91F7B236FDF2A3FC74F13C5FD4987F95E8936663* ___value0, const RuntimeMethod* method) ;
// System.Void InterfaceAnimManager::remove_OnStartAppear(IAM_StartAppear)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterfaceAnimManager_remove_OnStartAppear_m27A7CDC454B6219F53F42C396D5DDBEAF43625B5 (InterfaceAnimManager_t55019D504BEA6534494FED15C7945911CE850962* __this, IAM_StartAppear_t45F8AF6D25B9B8F63ED671D6461EF06AFBDEACDC* ___value0, const RuntimeMethod* method) ;
// System.Void InterfaceAnimManager::remove_OnStartDisappear(IAM_StartDisappear)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterfaceAnimManager_remove_OnStartDisappear_mB8094724F78E5C899B4AF7CE53ED51E23C8F1A44 (InterfaceAnimManager_t55019D504BEA6534494FED15C7945911CE850962* __this, IAM_StartDisappear_tFBEC30F3C988FD6D617407114866A1D5FE174BFB* ___value0, const RuntimeMethod* method) ;
// System.Void InterfaceAnimManager::remove_OnEndAppear(IAM_EndAppear)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterfaceAnimManager_remove_OnEndAppear_m39B8089E247705D9D859B590C832105CEC459285 (InterfaceAnimManager_t55019D504BEA6534494FED15C7945911CE850962* __this, IAM_EndAppear_t60802E44D1AB53A268000746AEAA403393EFE4C6* ___value0, const RuntimeMethod* method) ;
// System.Void InterfaceAnimManager::remove_OnEndDisappear(IAM_EndDisappear)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterfaceAnimManager_remove_OnEndDisappear_mDAF3D7BA051591A257F4ED3CCAB6530E142A42DC (InterfaceAnimManager_t55019D504BEA6534494FED15C7945911CE850962* __this, IAM_EndDisappear_t91F7B236FDF2A3FC74F13C5FD4987F95E8936663* ___value0, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0 (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219 (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// System.Void ExampleUI::CallInterface(InterfaceAnimManager)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExampleUI_CallInterface_m0073B9DD8EB274AFC1F7BDDDE29E69E8AFB360D8 (ExampleUI_t2552997442A7324DD508292D6911E8AA0B7A12DD* __this, InterfaceAnimManager_t55019D504BEA6534494FED15C7945911CE850962* ____interface0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Behaviour::get_enabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Behaviour_get_enabled_mAAC9F15E9EBF552217A5AE2681589CC0BFA300C1 (Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.AudioSource::Play()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_Play_m95DF07111C61D0E0F00257A00384D31531D590C3 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Screen::get_fullScreen()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Screen_get_fullScreen_mE2EA8E280C5420792E6D09CC46D6B3CE023B2A6B (const RuntimeMethod* method) ;
// System.Void UnityEngine.Screen::set_fullScreen(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Screen_set_fullScreen_m46FCC49722BE6E27B92301D55A834C24B48B9EA2 (bool ___value0, const RuntimeMethod* method) ;
// System.Void ExampleUI::playSound()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExampleUI_playSound_m63D0775EB9BD539874C46D2DB4CD5AD6475B0EEA (ExampleUI_t2552997442A7324DD508292D6911E8AA0B7A12DD* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.String>::get_Count()
inline int32_t List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_inline (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// T System.Collections.Generic.List`1<System.String>::get_Item(System.Int32)
inline String_t* List_1_get_Item_m21AEC50E791371101DC22ABCF96A2E46800811F8 (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  String_t* (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___index0, method);
}
// System.Void UnityEngine.SceneManagement.SceneManager::LoadScene(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneManager_LoadScene_m7237839058F581BFCA0A79BB96F6F931469E43CF (String_t* ___sceneName0, const RuntimeMethod* method) ;
// System.Void ExampleUI::InitCam()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExampleUI_InitCam_m1B92BAD1355ED04698F51FD20A04B4439DA3BF06 (ExampleUI_t2552997442A7324DD508292D6911E8AA0B7A12DD* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.LoadSceneMode>::.ctor(System.Object,System.IntPtr)
inline void UnityAction_2__ctor_m0E0C01B7056EB1CB1E6C6F4FC457EBCA3F6B0041 (UnityAction_2_t1C08AEB5AA4F72FEFAB7F303E33C8CFFF80A8C3A* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (UnityAction_2_t1C08AEB5AA4F72FEFAB7F303E33C8CFFF80A8C3A*, RuntimeObject*, intptr_t, const RuntimeMethod*))UnityAction_2__ctor_m7445B0F04ECB8542147C3C9B963A792140CFAD0A_gshared)(__this, ___object0, ___method1, method);
}
// System.Void UnityEngine.SceneManagement.SceneManager::remove_sceneLoaded(UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.LoadSceneMode>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneManager_remove_sceneLoaded_m8840CC33052C4A09A52BF927C3738A7B66783155 (UnityAction_2_t1C08AEB5AA4F72FEFAB7F303E33C8CFFF80A8C3A* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.SceneManagement.SceneManager::add_sceneLoaded(UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.LoadSceneMode>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneManager_add_sceneLoaded_mDE45940CCEC5D17EB92EB76DB8931E5483FBCD2C (UnityAction_2_t1C08AEB5AA4F72FEFAB7F303E33C8CFFF80A8C3A* ___value0, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mF8B69BE42B5C5ABCAD3C176FBBE3010E0815D65D (String_t* ___str00, String_t* ___str11, String_t* ___str22, String_t* ___str33, const RuntimeMethod* method) ;
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0 (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.GameObject::Find(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GameObject_Find_mFF1D6C65A7E2CD82443F4DCE4C53472FB30B7F51 (String_t* ___name0, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<ExampleCam>()
inline ExampleCam_tE2903697D96306F068D755E459E112ACFC122949* GameObject_GetComponent_TisExampleCam_tE2903697D96306F068D755E459E112ACFC122949_m869D94C2A873095FC742BE35564B6108ED6F48D0 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  ExampleCam_tE2903697D96306F068D755E459E112ACFC122949* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Boolean System.String::op_Inequality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Inequality_m0FBE5AC4931D312E5B347BAA603755676E6DA2FE (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.MonoBehaviour>::GetEnumerator()
inline Enumerator_t07C2E5693B034463FB920742E4CC32D19677F76F List_1_GetEnumerator_m6634056FE8223F5FBF4B35F680857B49FA138DC2 (List_1_tCB9190A56C65FD59CE07C6A0EA71F30067A43D81* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t07C2E5693B034463FB920742E4CC32D19677F76F (*) (List_1_tCB9190A56C65FD59CE07C6A0EA71F30067A43D81*, const RuntimeMethod*))List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.MonoBehaviour>::Dispose()
inline void Enumerator_Dispose_mA18455211C51A1DBF839683A9A405FFB3E51EE32 (Enumerator_t07C2E5693B034463FB920742E4CC32D19677F76F* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t07C2E5693B034463FB920742E4CC32D19677F76F*, const RuntimeMethod*))Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<UnityEngine.MonoBehaviour>::get_Current()
inline MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* Enumerator_get_Current_m677B6DAF16A498C87390EB1D8491F59DC1225A64_inline (Enumerator_t07C2E5693B034463FB920742E4CC32D19677F76F* __this, const RuntimeMethod* method)
{
	return ((  MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* (*) (Enumerator_t07C2E5693B034463FB920742E4CC32D19677F76F*, const RuntimeMethod*))Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline)(__this, method);
}
// System.Void UnityEngine.Behaviour::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A (Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.MonoBehaviour>::MoveNext()
inline bool Enumerator_MoveNext_m7F890D387B8294FF405777D929F894DF8863409F (Enumerator_t07C2E5693B034463FB920742E4CC32D19677F76F* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t07C2E5693B034463FB920742E4CC32D19677F76F*, const RuntimeMethod*))Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared)(__this, method);
}
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void ExampleUI::UpdateDisplayedInfo()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExampleUI_UpdateDisplayedInfo_mCAF19F6090990ACFD0BC69355079BA41B58A70DE (ExampleUI_t2552997442A7324DD508292D6911E8AA0B7A12DD* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.AudioSource::set_clip(UnityEngine.AudioClip)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_set_clip_mFF441895E274286C88D9C75ED5CA1B1B39528D70 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___value0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_one()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_one_mE6A2D5C6578E94268024613B596BF09F990B1260_inline (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Void ExcelsiorUtils::playSound()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExcelsiorUtils_playSound_mAF781739329BAC69026207F4A008BB1EFCEA5803 (ExcelsiorUtils_t7265AB93B70A2112C8F6317B6E3AEFBD6612858F* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_localPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_localPosition(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_localScale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_localScale(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<UnityEngine.UI.Image>()
inline Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// UnityEngine.RectTransform UnityEngine.UI.Graphic::get_rectTransform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* Graphic_get_rectTransform_mF4752E8934267D630810E84CE02CDFB81EB1FD6D (Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Implicit_m8F73B300CB4E6F9B4EB5FB6130363D76CEAA230B_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___v0, const RuntimeMethod* method) ;
// System.Void UnityEngine.RectTransform::set_sizeDelta(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RectTransform_set_sizeDelta_mC9A980EA6036E6725EF24CEDF3EE80A9B2B50EE5 (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___value0, const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::get_blue()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_blue_m0D04554379CB8606EF48E3091CDC3098B81DD86D_inline (const RuntimeMethod* method) ;
// UnityEngine.Color32 UnityEngine.Color32::op_Implicit(UnityEngine.Color)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B Color32_op_Implicit_m7EFA0B83AD1AE15567E9BC2FA2B8E66D3BFE1395_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___c0, const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::get_red()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_red_m27D04C1E5FE794AD933B7B9364F3D34B9EA25109_inline (const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::get_yellow()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_yellow_m1EF7276EF58050DFBA8921E2383F0249C08D346F_inline (const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color32::op_Implicit(UnityEngine.Color32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color32_op_Implicit_m203A634DBB77053C9400C68065CA29529103D172_inline (Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___c0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Application::OpenURL(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Application_OpenURL_m9F74228B576891156330C84B72218C08BEB9F564 (String_t* ___url0, const RuntimeMethod* method) ;
// System.String System.Single::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972 (float* __this, const RuntimeMethod* method) ;
// System.Delegate System.Delegate::Combine(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Combine_m8B9D24CED35033C7FC56501DFE650F5CB7FF012C (Delegate_t* ___a0, Delegate_t* ___b1, const RuntimeMethod* method) ;
// System.Delegate System.Delegate::Remove(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Remove_m40506877934EC1AD4ADAE57F5E97AF0BC0F96116 (Delegate_t* ___source0, Delegate_t* ___value1, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.AudioSource>()
inline AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* Component_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m42DA4DEA19EB60D80CBED7413ADEB27FA033C77B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// T[] UnityEngine.Component::GetComponentsInChildren<UnityEngine.Animator>(System.Boolean)
inline AnimatorU5BU5D_tC96418EE48F8DA017567CAE0235488C27640E759* Component_GetComponentsInChildren_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mC9578257D24D673124C2EE2803C913994C2BAFC8 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, bool ___includeInactive0, const RuntimeMethod* method)
{
	return ((  AnimatorU5BU5D_tC96418EE48F8DA017567CAE0235488C27640E759* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, bool, const RuntimeMethod*))Component_GetComponentsInChildren_TisRuntimeObject_m90734C3A39A158985239CB90DE2F0792F1D99926_gshared)(__this, ___includeInactive0, method);
}
// System.Void UnityEngine.Animator::set_updateMode(UnityEngine.AnimatorUpdateMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_set_updateMode_mA21CC888FEEBC5A06099E5D33A6C7ACCC266B056 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Application::get_isPlaying()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Application_get_isPlaying_m0B3B501E1093739F8887A0DAC5F61D9CB49CC337 (const RuntimeMethod* method) ;
// System.Void InterfaceAnimManager::UpdateAnimClips()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterfaceAnimManager_UpdateAnimClips_mB15CE778AC410C9CCBDE442A48C4FFDB9DDADF65 (InterfaceAnimManager_t55019D504BEA6534494FED15C7945911CE850962* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<InterfaceAnimManager>()
inline InterfaceAnimManager_t55019D504BEA6534494FED15C7945911CE850962* GameObject_GetComponent_TisInterfaceAnimManager_t55019D504BEA6534494FED15C7945911CE850962_m3C753C203152FD3ED8CE525C216473174957EB16 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  InterfaceAnimManager_t55019D504BEA6534494FED15C7945911CE850962* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<InterfaceAnmElement>::GetEnumerator()
inline Enumerator_tBE821E8DBC9F67CC069BF33B74F05F0A2270F44E List_1_GetEnumerator_m736E8835B6C02CAC94A7EA21A8B0B17D38246CAF (List_1_t2F48DCC67405C354E57C9C3263548DB2D541DBB0* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tBE821E8DBC9F67CC069BF33B74F05F0A2270F44E (*) (List_1_t2F48DCC67405C354E57C9C3263548DB2D541DBB0*, const RuntimeMethod*))List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<InterfaceAnmElement>::Dispose()
inline void Enumerator_Dispose_m05F5DC7DDC52C222E3CC2A5F3E80A9CAC2EC68AE (Enumerator_tBE821E8DBC9F67CC069BF33B74F05F0A2270F44E* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tBE821E8DBC9F67CC069BF33B74F05F0A2270F44E*, const RuntimeMethod*))Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<InterfaceAnmElement>::get_Current()
inline InterfaceAnmElement_t02DC7282CF1F682DD0C071B9DE5637D4E58C5706* Enumerator_get_Current_m1BBA4A743DD622178C8A15E930ADDEE490553A80_inline (Enumerator_tBE821E8DBC9F67CC069BF33B74F05F0A2270F44E* __this, const RuntimeMethod* method)
{
	return ((  InterfaceAnmElement_t02DC7282CF1F682DD0C071B9DE5637D4E58C5706* (*) (Enumerator_tBE821E8DBC9F67CC069BF33B74F05F0A2270F44E*, const RuntimeMethod*))Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline)(__this, method);
}
// System.Boolean UnityEngine.GameObject::get_activeSelf()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GameObject_get_activeSelf_m4F3E5240E138B66AAA080EA30759A3D0517DA368 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animator::SetLayerWeight(System.Int32,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetLayerWeight_m06ADC732F76F22B4B1424F25525E7CBB80E6230F (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, int32_t ___layerIndex0, float ___weight1, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Animator::get_layerCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Animator_get_layerCount_m75C20E7284800DFA0E4AD7EC23910BDB6D62BDA8 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, const RuntimeMethod* method) ;
// System.String System.String::ToLower()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_ToLower_m6191ABA3DC514ED47C10BDA23FD0DDCEAE7ACFBD (String_t* __this, const RuntimeMethod* method) ;
// System.Boolean System.String::Contains(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_Contains_m6D77B121FADA7CA5F397C0FABB65DA62DF03B6C3 (String_t* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animator::Play(System.String,System.Int32,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_Play_m5565F093F0752D4DD9B451686F71C7A8F23F6744 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, String_t* ___stateName0, int32_t ___layer1, float ___normalizedTime2, const RuntimeMethod* method) ;
// UnityEngine.AnimatorStateInfo UnityEngine.Animator::GetCurrentAnimatorStateInfo(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AnimatorStateInfo_t1F47379289C7CE7FD588FBC3BBD79A777243B6B2 Animator_GetCurrentAnimatorStateInfo_mD5B526FA605F6CFBC31B7DE36740F6AD1E534CAD (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, int32_t ___layerIndex0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.AnimatorStateInfo::IsName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AnimatorStateInfo_IsName_mB936F493D6BDDB9372C8E9D813CE0416B002C4D0 (AnimatorStateInfo_t1F47379289C7CE7FD588FBC3BBD79A777243B6B2* __this, String_t* ___name0, const RuntimeMethod* method) ;
// System.Single UnityEngine.AnimatorStateInfo::get_normalizedTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AnimatorStateInfo_get_normalizedTime_m087C7E5A72122ADF18EBB4AC8391103B9119CCC6 (AnimatorStateInfo_t1F47379289C7CE7FD588FBC3BBD79A777243B6B2* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Animator::IsInTransition(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Animator_IsInTransition_mC2BD2CC7B7A11BAAA5396F1A2DAFD98D00AA2830 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, int32_t ___layerIndex0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<InterfaceAnmElement>::MoveNext()
inline bool Enumerator_MoveNext_m95E1E769FF7A8208A46B05C694DD6C720FCE6C49 (Enumerator_tBE821E8DBC9F67CC069BF33B74F05F0A2270F44E* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tBE821E8DBC9F67CC069BF33B74F05F0A2270F44E*, const RuntimeMethod*))Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared)(__this, method);
}
// System.Single UnityEngine.Time::get_unscaledDeltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_unscaledDeltaTime_m89252D23CC5AA295CFA4EB2BCB417A831AC51652 (const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D (const RuntimeMethod* method) ;
// System.Void InterfaceAnimManager::EndAppear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterfaceAnimManager_EndAppear_m0B1E2F6FD6299C2F62D5817B5B81CCD0F04FAF16 (InterfaceAnimManager_t55019D504BEA6534494FED15C7945911CE850962* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animator::Play(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_Play_m0F6A9F84B2E256E644D56C34A7A9BD622CB00FF9 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, String_t* ___stateName0, const RuntimeMethod* method) ;
// System.Collections.IEnumerator InterfaceAnimManager::Disable_OnDisappearEnd()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* InterfaceAnimManager_Disable_OnDisappearEnd_m07592854CB8B7F15532C8784E4C197E0B668DA93 (InterfaceAnimManager_t55019D504BEA6534494FED15C7945911CE850962* __this, const RuntimeMethod* method) ;
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812 (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, RuntimeObject* ___routine0, const RuntimeMethod* method) ;
// UnityEngine.AudioClip UnityEngine.AudioSource::get_clip()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* AudioSource_get_clip_m4F5027066F9FC44B44192713142B0C277BB418FE (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, const RuntimeMethod* method) ;
// System.Void InterfaceAnimManager::EndDisappear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterfaceAnimManager_EndDisappear_m5D0D99EC31BED76A2466B8E3AE6DB69C9AD1026C (InterfaceAnimManager_t55019D504BEA6534494FED15C7945911CE850962* __this, const RuntimeMethod* method) ;
// System.Void InterfaceAnimManager/<Disable_OnDisappearEnd>d__35::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDisable_OnDisappearEndU3Ed__35__ctor_mE6CF283B4FA5FAFE4D43C397E9D70CDEFBAC4EB6 (U3CDisable_OnDisappearEndU3Ed__35_tF42C64EEBEB26389A089E7F5E69FD83FD38015F0* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogWarning(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogWarning_mEF15C6B17CE4E1FA7E379CDB82CE40FCD89A3F28 (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.Void IAM_StartAppear::Invoke(InterfaceAnimManager)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void IAM_StartAppear_Invoke_mE1E254F41FB1A54066D9E77D96B62B9EC5600BE6_inline (IAM_StartAppear_t45F8AF6D25B9B8F63ED671D6461EF06AFBDEACDC* __this, InterfaceAnimManager_t55019D504BEA6534494FED15C7945911CE850962* ____IAM0, const RuntimeMethod* method) ;
// System.Void IAM_EndAppear::Invoke(InterfaceAnimManager)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void IAM_EndAppear_Invoke_mDE5B4D3BA0FB8B81B187247938B6C2191927DAD9_inline (IAM_EndAppear_t60802E44D1AB53A268000746AEAA403393EFE4C6* __this, InterfaceAnimManager_t55019D504BEA6534494FED15C7945911CE850962* ____IAM0, const RuntimeMethod* method) ;
// System.Void IAM_StartDisappear::Invoke(InterfaceAnimManager)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void IAM_StartDisappear_Invoke_m57D127B05389C3C7FED4EE458B6F58FF5FF597FC_inline (IAM_StartDisappear_tFBEC30F3C988FD6D617407114866A1D5FE174BFB* __this, InterfaceAnimManager_t55019D504BEA6534494FED15C7945911CE850962* ____IAM0, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::StopCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour_StopCoroutine_mF9E93B82091E804595BE13AA29F9AB7517F7E04A (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, RuntimeObject* ___routine0, const RuntimeMethod* method) ;
// System.Boolean InterfaceAnimManager::isIAM_Root()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InterfaceAnimManager_isIAM_Root_mB0699470DFD35C63FB1249C20EF5477D6C800DDD (InterfaceAnimManager_t55019D504BEA6534494FED15C7945911CE850962* __this, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Transform::get_parent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Transform_get_parent_m65354E28A4C94EC00EBCF03532F7B0718380791E (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<InterfaceAnimManager>()
inline InterfaceAnimManager_t55019D504BEA6534494FED15C7945911CE850962* Component_GetComponent_TisInterfaceAnimManager_t55019D504BEA6534494FED15C7945911CE850962_mD27B439389B85FEB9E300BBE757143C583C05729 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  InterfaceAnimManager_t55019D504BEA6534494FED15C7945911CE850962* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Void IAM_EndDisappear::Invoke(InterfaceAnimManager)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void IAM_EndDisappear_Invoke_m905DCD487D9D03C665BE6B8F89CEEEDFCD47C381_inline (IAM_EndDisappear_t91F7B236FDF2A3FC74F13C5FD4987F95E8936663* __this, InterfaceAnimManager_t55019D504BEA6534494FED15C7945911CE850962* ____IAM0, const RuntimeMethod* method) ;
// System.Collections.IEnumerator UnityEngine.Transform::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Transform_GetEnumerator_mA7E1C882ACA0C33E284711CD09971DEA3FFEF404 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<InterfaceAnmElement>::get_Count()
inline int32_t List_1_get_Count_mA28D73F815E52C1CB089FC95E694F6FBDFDB1FAE_inline (List_1_t2F48DCC67405C354E57C9C3263548DB2D541DBB0* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t2F48DCC67405C354E57C9C3263548DB2D541DBB0*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// T System.Collections.Generic.List`1<InterfaceAnmElement>::get_Item(System.Int32)
inline InterfaceAnmElement_t02DC7282CF1F682DD0C071B9DE5637D4E58C5706* List_1_get_Item_mFCB5F6B16EDD6EFF12D288857142E410F8088586 (List_1_t2F48DCC67405C354E57C9C3263548DB2D541DBB0* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  InterfaceAnmElement_t02DC7282CF1F682DD0C071B9DE5637D4E58C5706* (*) (List_1_t2F48DCC67405C354E57C9C3263548DB2D541DBB0*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___index0, method);
}
// System.Boolean System.Collections.Generic.List`1<InterfaceAnmElement>::Remove(T)
inline bool List_1_Remove_m7EFF26032AFE115832C15842CC162A9771F93786 (List_1_t2F48DCC67405C354E57C9C3263548DB2D541DBB0* __this, InterfaceAnmElement_t02DC7282CF1F682DD0C071B9DE5637D4E58C5706* ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_t2F48DCC67405C354E57C9C3263548DB2D541DBB0*, InterfaceAnmElement_t02DC7282CF1F682DD0C071B9DE5637D4E58C5706*, const RuntimeMethod*))List_1_Remove_m4DFA48F4CEB9169601E75FC28517C5C06EFA5AD7_gshared)(__this, ___item0, method);
}
// InterfaceAnmElement InterfaceAnmElement::Create(UnityEngine.GameObject,System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InterfaceAnmElement_t02DC7282CF1F682DD0C071B9DE5637D4E58C5706* InterfaceAnmElement_Create_mAF99420ED8574C27D0824743F341C55A17F9ABE5 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ____gameObjectRef0, int32_t ____newSortID1, bool ____isNested_IAM2, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<InterfaceAnmElement>::Add(T)
inline void List_1_Add_mD2EFF63F2DC69FEAEE0E21346D7EFD136A1E91B9_inline (List_1_t2F48DCC67405C354E57C9C3263548DB2D541DBB0* __this, InterfaceAnmElement_t02DC7282CF1F682DD0C071B9DE5637D4E58C5706* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t2F48DCC67405C354E57C9C3263548DB2D541DBB0*, InterfaceAnmElement_t02DC7282CF1F682DD0C071B9DE5637D4E58C5706*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// System.Void System.Func`2<InterfaceAnmElement,System.Int32>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_m91AAE6F1BA2880A0B1D9130CDAC79FFC156BBD31 (Func_2_t61A769E1370E91D9D2BBB870F77AB93DC7203E59* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_t61A769E1370E91D9D2BBB870F77AB93DC7203E59*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_2__ctor_mEB7603EDE6D79A62E5BD74A896F030D2C9F2A821_gshared)(__this, ___object0, ___method1, method);
}
// System.Linq.IOrderedEnumerable`1<TSource> System.Linq.Enumerable::OrderBy<InterfaceAnmElement,System.Int32>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TKey>)
inline RuntimeObject* Enumerable_OrderBy_TisInterfaceAnmElement_t02DC7282CF1F682DD0C071B9DE5637D4E58C5706_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mC025B00D20A119B25DEB0DDD50D2C38511A43877 (RuntimeObject* ___source0, Func_2_t61A769E1370E91D9D2BBB870F77AB93DC7203E59* ___keySelector1, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, Func_2_t61A769E1370E91D9D2BBB870F77AB93DC7203E59*, const RuntimeMethod*))Enumerable_OrderBy_TisRuntimeObject_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mBDD931F79E334F31ECBCD42F790CAE0E0F323AA6_gshared)(___source0, ___keySelector1, method);
}
// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable::ToList<InterfaceAnmElement>(System.Collections.Generic.IEnumerable`1<TSource>)
inline List_1_t2F48DCC67405C354E57C9C3263548DB2D541DBB0* Enumerable_ToList_TisInterfaceAnmElement_t02DC7282CF1F682DD0C071B9DE5637D4E58C5706_m4798855DA56683CD385157F94F5A0A0C51F0175A (RuntimeObject* ___source0, const RuntimeMethod* method)
{
	return ((  List_1_t2F48DCC67405C354E57C9C3263548DB2D541DBB0* (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_ToList_TisRuntimeObject_mBDB9895C2D14F2A92043507996018A329BD32A64_gshared)(___source0, method);
}
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<InterfaceAnimManager>::GetEnumerator()
inline Enumerator_tB10F09810993415F99163C558E4CE11478C5E87E List_1_GetEnumerator_m8DB1F8E62641BE14DE9D7E3D3470B981D0D2A2BE (List_1_t70363A4FDD9B70AB54795A2131A483E3A31DC878* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tB10F09810993415F99163C558E4CE11478C5E87E (*) (List_1_t70363A4FDD9B70AB54795A2131A483E3A31DC878*, const RuntimeMethod*))List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<InterfaceAnimManager>::Dispose()
inline void Enumerator_Dispose_m86FC1B7BBD037A5B0081E8E9B916524B5BCC371E (Enumerator_tB10F09810993415F99163C558E4CE11478C5E87E* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tB10F09810993415F99163C558E4CE11478C5E87E*, const RuntimeMethod*))Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<InterfaceAnimManager>::get_Current()
inline InterfaceAnimManager_t55019D504BEA6534494FED15C7945911CE850962* Enumerator_get_Current_m7AEC9C406EBAEA2718FDA0F82F1EA824BB163AF5_inline (Enumerator_tB10F09810993415F99163C558E4CE11478C5E87E* __this, const RuntimeMethod* method)
{
	return ((  InterfaceAnimManager_t55019D504BEA6534494FED15C7945911CE850962* (*) (Enumerator_tB10F09810993415F99163C558E4CE11478C5E87E*, const RuntimeMethod*))Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<InterfaceAnimManager>::MoveNext()
inline bool Enumerator_MoveNext_mBF0BA36039C43F42428B191F8AE5265C4976F54F (Enumerator_tB10F09810993415F99163C558E4CE11478C5E87E* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tB10F09810993415F99163C558E4CE11478C5E87E*, const RuntimeMethod*))Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared)(__this, method);
}
// T[] UnityEngine.Component::GetComponentsInChildren<InterfaceAnimManager>(System.Boolean)
inline InterfaceAnimManagerU5BU5D_tB99A76DFD85996ED124AE4892004922F617EF797* Component_GetComponentsInChildren_TisInterfaceAnimManager_t55019D504BEA6534494FED15C7945911CE850962_mE7FED832B998CF2167D4A7F6BC177037145CF25F (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, bool ___includeInactive0, const RuntimeMethod* method)
{
	return ((  InterfaceAnimManagerU5BU5D_tB99A76DFD85996ED124AE4892004922F617EF797* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, bool, const RuntimeMethod*))Component_GetComponentsInChildren_TisRuntimeObject_m90734C3A39A158985239CB90DE2F0792F1D99926_gshared)(__this, ___includeInactive0, method);
}
// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable::ToList<InterfaceAnimManager>(System.Collections.Generic.IEnumerable`1<TSource>)
inline List_1_t70363A4FDD9B70AB54795A2131A483E3A31DC878* Enumerable_ToList_TisInterfaceAnimManager_t55019D504BEA6534494FED15C7945911CE850962_mA2260FF7C8675BC7C0C4B97C79D35B8B1F3D3C57 (RuntimeObject* ___source0, const RuntimeMethod* method)
{
	return ((  List_1_t70363A4FDD9B70AB54795A2131A483E3A31DC878* (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_ToList_TisRuntimeObject_mBDB9895C2D14F2A92043507996018A329BD32A64_gshared)(___source0, method);
}
// System.Boolean System.Collections.Generic.List`1<InterfaceAnimManager>::Remove(T)
inline bool List_1_Remove_m7093559E6975C1702B2D84D3DA57371CCD285C85 (List_1_t70363A4FDD9B70AB54795A2131A483E3A31DC878* __this, InterfaceAnimManager_t55019D504BEA6534494FED15C7945911CE850962* ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_t70363A4FDD9B70AB54795A2131A483E3A31DC878*, InterfaceAnimManager_t55019D504BEA6534494FED15C7945911CE850962*, const RuntimeMethod*))List_1_Remove_m4DFA48F4CEB9169601E75FC28517C5C06EFA5AD7_gshared)(__this, ___item0, method);
}
// System.Void InterfaceAnmElement::UpdateProperties()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterfaceAnmElement_UpdateProperties_m483FC45B6963B9ACDFE63DC851252009F9F66413 (InterfaceAnmElement_t02DC7282CF1F682DD0C071B9DE5637D4E58C5706* __this, const RuntimeMethod* method) ;
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5 (int32_t* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::set_name(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_set_name_mC79E6DC8FFD72479C90F0C4CC7F42A0FEAF5AE47 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<InterfaceAnmElement>::.ctor()
inline void List_1__ctor_m53BA887F5D9470B269C4C302DCD52FF4DF85691E (List_1_t2F48DCC67405C354E57C9C3263548DB2D541DBB0* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t2F48DCC67405C354E57C9C3263548DB2D541DBB0*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<InterfaceAnimManager>::.ctor()
inline void List_1__ctor_m3292212006F87F9ED8E70CB2C0387FF2944E5640 (List_1_t70363A4FDD9B70AB54795A2131A483E3A31DC878* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t70363A4FDD9B70AB54795A2131A483E3A31DC878*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// UnityEngine.AnimatorClipInfo[] UnityEngine.Animator::GetCurrentAnimatorClipInfo(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AnimatorClipInfoU5BU5D_t202D955679134FCCD698779FBABD2530E58CD60A* Animator_GetCurrentAnimatorClipInfo_m963412D4118C301408B2EAFEF1E1CB5E971D5D92 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, int32_t ___layerIndex0, const RuntimeMethod* method) ;
// System.Void UnityEngine.WaitForSecondsRealtime::.ctor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForSecondsRealtime__ctor_mBFC1E4F0E042D5EC6E7EEB211A2FE5193A8F6D6F (WaitForSecondsRealtime_tA8CE0AAB4B0C872B843E7973637037D17682BA01* __this, float ___time0, const RuntimeMethod* method) ;
// System.Void UnityEngine.WaitForSeconds::.ctor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* __this, float ___seconds0, const RuntimeMethod* method) ;
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* __this, const RuntimeMethod* method) ;
// System.Void InterfaceAnimManager/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m94D34CA7759CEEF5028855495101392EB0BCB47D (U3CU3Ec_t0AABEEAE6C6AC50E267EB829C4D47A57CB988ED7* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<InterfaceAnmElement>()
inline InterfaceAnmElement_t02DC7282CF1F682DD0C071B9DE5637D4E58C5706* GameObject_GetComponent_TisInterfaceAnmElement_t02DC7282CF1F682DD0C071B9DE5637D4E58C5706_mC68AEF59C130F41AE3EF11E242F6B92321168494 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  InterfaceAnmElement_t02DC7282CF1F682DD0C071B9DE5637D4E58C5706* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// T UnityEngine.GameObject::AddComponent<InterfaceAnmElement>()
inline InterfaceAnmElement_t02DC7282CF1F682DD0C071B9DE5637D4E58C5706* GameObject_AddComponent_TisInterfaceAnmElement_t02DC7282CF1F682DD0C071B9DE5637D4E58C5706_mDE9582EC9994D7BE3699698F83B3E60037E29750 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  InterfaceAnmElement_t02DC7282CF1F682DD0C071B9DE5637D4E58C5706* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared)(__this, method);
}
// T UnityEngine.GameObject::GetComponent<UnityEngine.Animator>()
inline Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Boolean System.Collections.Generic.List`1<InterfaceAnmElement>::Contains(T)
inline bool List_1_Contains_m45FA4AE2759DAA58E5439462F9E21ED21CAE68A4 (List_1_t2F48DCC67405C354E57C9C3263548DB2D541DBB0* __this, InterfaceAnmElement_t02DC7282CF1F682DD0C071B9DE5637D4E58C5706* ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_t2F48DCC67405C354E57C9C3263548DB2D541DBB0*, InterfaceAnmElement_t02DC7282CF1F682DD0C071B9DE5637D4E58C5706*, const RuntimeMethod*))List_1_Contains_m4C9139C2A6B23E9343D3F87807B32C6E2CFE660D_gshared)(__this, ___item0, method);
}
// UnityEngine.Vector3 UnityEngine.Transform::get_eulerAngles()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_eulerAngles_mCAAF48EFCF628F1ED91C2FFE75A4FD19C039DD6A (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.Rigidbody>()
inline Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Void UnityEngine.Rigidbody::set_freezeRotation(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_set_freezeRotation_m6D049F82E9133020C31EEFB35A179A56364325DC (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Input::GetMouseButton(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetMouseButton_mE545CF4B790C6E202808B827E3141BEC3330DB70 (int32_t ___button0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Input::GetAxis(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Input_GetAxis_m1F49B26F24032F45FB4583C95FB24E6771A161D4 (String_t* ___axisName0, const RuntimeMethod* method) ;
// System.Single MouseOrbitImproved::ClampAngle(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float MouseOrbitImproved_ClampAngle_m69FB1DC9316EEAAE85C08EF4188EF9CD87362434 (float ___angle0, float ___min1, float ___max2, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::Euler(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Euler_mD4601D966F1F58F3FCA01B3FC19A12D0AD0396DD_inline (float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Clamp(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp_m154E404AF275A3B2EC99ECAA3879B4CB9F0606DC_inline (float ___value0, float ___min1, float ___max2, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Physics::Linecast(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.RaycastHit&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Physics_Linecast_m92B9E7A0130FAA5613977E5C9F887ED629CF3A14 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___start0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___end1, RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* ___hitInfo2, const RuntimeMethod* method) ;
// System.Single UnityEngine.RaycastHit::get_distance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float RaycastHit_get_distance_m035194B0E9BB6229259CFC43B095A9C8E5011C78 (RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Quaternion::op_Multiply(UnityEngine.Quaternion,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Quaternion_op_Multiply_mF1348668A6CCD46FBFF98D39182F89358ED74AC0 (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___point1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_rotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___value0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Lerp(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Lerp_mFB4910B358B986AFB22114ED90458E8341867479_inline (float ___a0, float ___b1, float ___t2, const RuntimeMethod* method) ;
// System.Boolean UnityStandardAssets.ImageEffects.PostEffectsBase::CheckSupport(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PostEffectsBase_CheckSupport_mD35BCE12C19A6D60AC19A0189F1EB5CD71A1303E (PostEffectsBase_t68F9A09F9CCB0B3DF158A27640081D0DFB22FD24* __this, bool ___needDepth0, const RuntimeMethod* method) ;
// UnityEngine.Material UnityStandardAssets.ImageEffects.PostEffectsBase::CheckShaderAndCreateMaterial(UnityEngine.Shader,UnityEngine.Material)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* PostEffectsBase_CheckShaderAndCreateMaterial_m9F3512FEF659B04E086E2EC154E789D67401D91A (PostEffectsBase_t68F9A09F9CCB0B3DF158A27640081D0DFB22FD24* __this, Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* ___s0, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m2Create1, const RuntimeMethod* method) ;
// System.Void UnityStandardAssets.ImageEffects.PostEffectsBase::ReportAutoDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PostEffectsBase_ReportAutoDisable_mFBFE9B4AF859872DA6F4FCAE254F92912B9B6000 (PostEffectsBase_t68F9A09F9CCB0B3DF158A27640081D0DFB22FD24* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Graphics::Blit(UnityEngine.Texture,UnityEngine.RenderTexture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Graphics_Blit_m066854D684B6042B266D306E8E012D2C6C1787BE (Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___source0, RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___dest1, const RuntimeMethod* method) ;
// UnityEngine.RenderTextureFormat UnityEngine.RenderTexture::get_format()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RenderTexture_get_format_m58556ABB91A1FADA8044BEEA2E8C55280768CF35 (RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.Camera>()
inline Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* Component_GetComponent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m64AC6C06DD93C5FB249091FEC84FA8475457CCC4 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Boolean UnityEngine.Camera::get_allowHDR()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Camera_get_allowHDR_m3187E9118CB52D5D7F0658D7ECF5E2B00E296A67 (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, const RuntimeMethod* method) ;
// UnityEngine.RenderTexture UnityEngine.RenderTexture::GetTemporary(System.Int32,System.Int32,System.Int32,UnityEngine.RenderTextureFormat)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* RenderTexture_GetTemporary_mEB21705B78CAF6B8F1F6617453A8EE8A94498DE2 (int32_t ___width0, int32_t ___height1, int32_t ___depthBuffer2, int32_t ___format3, const RuntimeMethod* method) ;
// System.Void UnityEngine.Graphics::Blit(UnityEngine.Texture,UnityEngine.RenderTexture,UnityEngine.Material,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Graphics_Blit_m5A753341A113FB6501C64F73D62047F84F957E50 (Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___source0, RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___dest1, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___mat2, int32_t ___pass3, const RuntimeMethod* method) ;
// System.Void UnityEngine.RenderTexture::ReleaseTemporary(UnityEngine.RenderTexture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderTexture_ReleaseTemporary_m7D9B385460ED0D0CF7BCC033605CEBD60A1A232F (RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___temp0, const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::op_Multiply(System.Single,UnityEngine.Color)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_op_Multiply_m1ED56CA313E9D35FD4324AADD8495ADFC041294A_inline (float ___b0, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___a1, const RuntimeMethod* method) ;
// System.Void UnityStandardAssets.ImageEffects.Bloom::BrightFilter(UnityEngine.Color,UnityEngine.RenderTexture,UnityEngine.RenderTexture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Bloom_BrightFilter_m918AA9CFB98FE15D2F9833BF99643DA228D9E5E9 (Bloom_t7FC3FD3F083630D01AC1C5E0D6859CB59F5D1EBF* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___threshColor0, RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___from1, RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___to2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector4::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* __this, float ___x0, float ___y1, float ___z2, float ___w3, const RuntimeMethod* method) ;
// System.Void UnityEngine.Material::SetVector(System.String,UnityEngine.Vector4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_SetVector_m69444B8040D955821F241113446CC8713C9E12D1 (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, String_t* ___name0, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___value1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Graphics::SetRenderTarget(UnityEngine.RenderTexture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Graphics_SetRenderTarget_mDA2F41245400E50551268368F6C551FFFDCC9CAC (RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___rt0, const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::get_black()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_black_mBF96B603B41BED9BAFAA10CE8D946D24260F9729_inline (const RuntimeMethod* method) ;
// System.Void UnityEngine.GL::Clear(System.Boolean,System.Boolean,UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GL_Clear_m303329453ADB3495208897E282FD24910878F537 (bool ___clearDepth0, bool ___clearColor1, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___backgroundColor2, const RuntimeMethod* method) ;
// System.Void UnityEngine.RenderTexture::MarkRestoreExpected()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderTexture_MarkRestoreExpected_m185BFFD02FE7149590A252527B18F25A7D4AD830 (RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* __this, const RuntimeMethod* method) ;
// System.Void UnityStandardAssets.ImageEffects.Bloom::BrightFilter(System.Single,UnityEngine.RenderTexture,UnityEngine.RenderTexture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Bloom_BrightFilter_m67631BA914110D1A8611B96A4F194B7CFC5A3E9F (Bloom_t7FC3FD3F083630D01AC1C5E0D6859CB59F5D1EBF* __this, float ___thresh0, RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___from1, RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___to2, const RuntimeMethod* method) ;
// System.Void UnityStandardAssets.ImageEffects.Bloom::Vignette(System.Single,UnityEngine.RenderTexture,UnityEngine.RenderTexture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Bloom_Vignette_m66A36C175DCE1764F01C6343F607D444F86746BD (Bloom_t7FC3FD3F083630D01AC1C5E0D6859CB59F5D1EBF* __this, float ___amount0, RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___from1, RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___to2, const RuntimeMethod* method) ;
// System.Void UnityStandardAssets.ImageEffects.Bloom::BlendFlares(UnityEngine.RenderTexture,UnityEngine.RenderTexture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Bloom_BlendFlares_m21F3FF875B014E638C6E60E1B3A1AB6DBF1218F3 (Bloom_t7FC3FD3F083630D01AC1C5E0D6859CB59F5D1EBF* __this, RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___from0, RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___to1, const RuntimeMethod* method) ;
// UnityEngine.Vector4 UnityEngine.Vector4::op_Multiply(UnityEngine.Vector4,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 Vector4_op_Multiply_m10DA1FA6A405C8988C46FFD159ED9FF9E5D732F5_inline (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___a0, float ___d1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Material::SetFloat(System.String,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836 (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, String_t* ___name0, float ___value1, const RuntimeMethod* method) ;
// System.Void UnityEngine.RenderTexture::DiscardContents()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderTexture_DiscardContents_m6C446FB1B7B57334FAD8847DB03E983975F38B32 (RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* __this, const RuntimeMethod* method) ;
// System.Void UnityStandardAssets.ImageEffects.Bloom::AddTo(System.Single,UnityEngine.RenderTexture,UnityEngine.RenderTexture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Bloom_AddTo_m886DE619359218768B6E7892E3B407752327E245 (Bloom_t7FC3FD3F083630D01AC1C5E0D6859CB59F5D1EBF* __this, float ___intensity_0, RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___from1, RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___to2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Material::SetTexture(System.String,UnityEngine.Texture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_SetTexture_m06083C3F52EF02FFB1177901D9907314F280F9A5 (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, String_t* ___name0, Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___value1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Graphics::Blit(UnityEngine.Texture,UnityEngine.RenderTexture,UnityEngine.Material)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Graphics_Blit_m4055EA37BA8BAEF7EF29830F86ED13227780F4DD (Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___source0, RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___dest1, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___mat2, const RuntimeMethod* method) ;
// UnityEngine.Vector4 UnityEngine.Color::op_Implicit(UnityEngine.Color)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 Color_op_Implicit_m6D1353534AD23E43DFD104850D55C469CFCEF340_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___c0, const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::get_white()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_white_m28BB6E19F27D4EE6858D3021A44F62BC74E20C43_inline (const RuntimeMethod* method) ;
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___r0, float ___g1, float ___b2, float ___a3, const RuntimeMethod* method) ;
// System.Void UnityStandardAssets.ImageEffects.PostEffectsBase::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PostEffectsBase__ctor_m4EE3CA780BAAFF694007DD15EDF5CFA7448DB7DF (PostEffectsBase_t68F9A09F9CCB0B3DF158A27640081D0DFB22FD24* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::DestroyImmediate(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_DestroyImmediate_m8249CABCDF344BE3A67EE765122EBB415DC2BC57 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___obj0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Texture::set_filterMode(UnityEngine.FilterMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture_set_filterMode_mE423E58C0C16D059EA62BA87AD70F44AEA50CCC9 (Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void UnityStandardAssets.ImageEffects.PostEffectsBase::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PostEffectsBase_Start_m2189DFDADA6A50171C983B2477B5BBB957E40EAD (PostEffectsBase_t68F9A09F9CCB0B3DF158A27640081D0DFB22FD24* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Texture2D::.ctor(System.Int32,System.Int32,UnityEngine.TextureFormat,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture2D__ctor_mC3F84195D1DCEFC0536B3FBD40A8F8E865A4F32A (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* __this, int32_t ___width0, int32_t ___height1, int32_t ___textureFormat2, bool ___mipChain3, bool ___linear4, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::set_hideFlags(UnityEngine.HideFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_set_hideFlags_mACB8BFC903FB3B01BBD427753E791BF28B5E33D4 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Texture::set_wrapMode(UnityEngine.TextureWrapMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture_set_wrapMode_m1F74A690E3883EC9C5C371D502D09642F15D0F7E (Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Single UnityEngine.AnimationCurve::Evaluate(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AnimationCurve_Evaluate_m50B857043DE251A186032ADBCBB4CEF817F4EE3C (AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* __this, float ___time0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_mCD6889CDE39F18704CD6EA8E2EFBFA48BA3E13B0_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___r0, float ___g1, float ___b2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Texture2D::SetPixel(System.Int32,System.Int32,UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture2D_SetPixel_m2CCFC5F729135D59DC4A697C2605A3FC5C8574DB (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* __this, int32_t ___x0, int32_t ___y1, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___color2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Texture2D::Apply()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture2D_Apply_mA014182C9EE0BBF6EEE3B286854F29E50EB972DC (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* __this, const RuntimeMethod* method) ;
// System.Void UnityStandardAssets.ImageEffects.ColorCorrectionCurves::UpdateParameters()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ColorCorrectionCurves_UpdateParameters_m8FE11FA0F109CD32C907A71FC69C965F15473A48 (ColorCorrectionCurves_tE85378ED43495F624056B5696F97D3D2451D6EEB* __this, const RuntimeMethod* method) ;
// UnityEngine.DepthTextureMode UnityEngine.Camera::get_depthTextureMode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Camera_get_depthTextureMode_m998CDEBC055FE2A910F3B650585ADE3E2BB141EE (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Camera::set_depthTextureMode(UnityEngine.DepthTextureMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Camera_set_depthTextureMode_mE722389E4DF8B3DF7F6100DB142E4DBAF698F6BF (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, int32_t ___value0, const RuntimeMethod* method) ;
// UnityEngine.RenderTexture UnityEngine.RenderTexture::GetTemporary(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* RenderTexture_GetTemporary_mCD6ECAD5EDABF63A1F2F496ABC4E2502F0883A6E (int32_t ___width0, int32_t ___height1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Material::SetColor(System.String,UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_SetColor_mFAB32FAA44461E46FD707B34184EC080CBB3539F (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, String_t* ___name0, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___value1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Keyframe::.ctor(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Keyframe__ctor_mECF144086B28785BE911A22C06194A9E0FBF3C34 (Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0* __this, float ___time0, float ___value1, const RuntimeMethod* method) ;
// System.Void UnityEngine.AnimationCurve::.ctor(UnityEngine.Keyframe[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationCurve__ctor_mEABC98C03805713354D61E50D9340766BD5B717E (AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* __this, KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3* ___keys0, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Shader::get_isSupported()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Shader_get_isSupported_m21C3D0F1819054101DFE0C0C062A24464FA5CAE5 (Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* __this, const RuntimeMethod* method) ;
// UnityEngine.Shader UnityEngine.Material::get_shader()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* Material_get_shader_m8B0C11AE6F2AD7DE30AF52D3195EB716F7A71983 (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, const RuntimeMethod* method) ;
// System.Void UnityStandardAssets.ImageEffects.PostEffectsBase::NotSupported()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PostEffectsBase_NotSupported_mC2F7B25B622DE7BD92B7919E6D53755D9FA66169 (PostEffectsBase_t68F9A09F9CCB0B3DF158A27640081D0DFB22FD24* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m6B0734B65813C8EA093D78E5C2D16534EB6FE8C0 (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___values0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Material::.ctor(UnityEngine.Shader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material__ctor_m7FDF47105D66D19591BE505A0C42B0F90D88C9BF (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* ___shader0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.Material>::Add(T)
inline void List_1_Add_m5F62EE992DBCC5323267265794235C9EEE07997B_inline (List_1_t386E09F4F22DDE4D2AC41A8567FFF283C254537B* __this, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t386E09F4F22DDE4D2AC41A8567FFF283C254537B*, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// System.Void UnityStandardAssets.ImageEffects.PostEffectsBase::RemoveCreatedMaterials()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PostEffectsBase_RemoveCreatedMaterials_m76863FC7074D4111495B7A6FF69355CA4842ACD0 (PostEffectsBase_t68F9A09F9CCB0B3DF158A27640081D0DFB22FD24* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<UnityEngine.Material>::get_Item(System.Int32)
inline Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* List_1_get_Item_m70F5CFC2DEA9332B78C5ADC0EE1CE1B7465B1456 (List_1_t386E09F4F22DDE4D2AC41A8567FFF283C254537B* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* (*) (List_1_t386E09F4F22DDE4D2AC41A8567FFF283C254537B*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___index0, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.Material>::RemoveAt(System.Int32)
inline void List_1_RemoveAt_mD461DC585ED2CF965C6FABF04A941287186E0354 (List_1_t386E09F4F22DDE4D2AC41A8567FFF283C254537B* __this, int32_t ___index0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t386E09F4F22DDE4D2AC41A8567FFF283C254537B*, int32_t, const RuntimeMethod*))List_1_RemoveAt_m54F62297ADEE4D4FDA697F49ED807BF901201B54_gshared)(__this, ___index0, method);
}
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Material>::get_Count()
inline int32_t List_1_get_Count_m48BBB83C5F748E6E6FF0731C3682092DEA6A7173_inline (List_1_t386E09F4F22DDE4D2AC41A8567FFF283C254537B* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t386E09F4F22DDE4D2AC41A8567FFF283C254537B*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// System.Boolean UnityEngine.SystemInfo::SupportsRenderTextureFormat(UnityEngine.RenderTextureFormat)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SystemInfo_SupportsRenderTextureFormat_mFF17D2CC50B98C7859CE0536524C612965ACF763 (int32_t ___format0, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.SystemInfo::get_graphicsShaderLevel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SystemInfo_get_graphicsShaderLevel_mA9BA383B643FD022F8AFAF445B63B6554D88D27C (const RuntimeMethod* method) ;
// System.Boolean UnityEngine.SystemInfo::get_supportsComputeShaders()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SystemInfo_get_supportsComputeShaders_m66B7AF4AEC69D4819C794DDF8D2D800DAB946F3C (const RuntimeMethod* method) ;
// System.Boolean UnityEngine.SystemInfo::get_supportsImageEffects()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SystemInfo_get_supportsImageEffects_m42EC2773D0A8757B5D0F12080F999807F778668A (const RuntimeMethod* method) ;
// System.Void UnityEngine.RenderTexture::set_active(UnityEngine.RenderTexture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderTexture_set_active_m045EA53D62FBF79693265E33D14D8E0E8151A37E (RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.GL::PushMatrix()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GL_PushMatrix_m16E696D17AE7C402C63C1C9068E5405C4B37C16C (const RuntimeMethod* method) ;
// System.Void UnityEngine.GL::LoadOrtho()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GL_LoadOrtho_m0690AE9736A807C9D662FDB9D9A58CC5D6ECA510 (const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Material::SetPass(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Material_SetPass_mBB03542DFF4FAEADFCED332009F9D61B6DED75FE (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, int32_t ___pass0, const RuntimeMethod* method) ;
// System.Void UnityEngine.GL::Begin(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GL_Begin_m484E517466FBE5D4AE78DAC608E403159A57BD10 (int32_t ___mode0, const RuntimeMethod* method) ;
// System.Void UnityEngine.GL::TexCoord2(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GL_TexCoord2_m53885A6C83E3B67A8B06D30D595267BC07231339 (float ___x0, float ___y1, const RuntimeMethod* method) ;
// System.Void UnityEngine.GL::Vertex3(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GL_Vertex3_m9FFEDAB32CC9A54F1BF7572D0CE856AE41A6473F (float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) ;
// System.Void UnityEngine.GL::End()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GL_End_m804EE4091F69FC2F6B764371D327CFCB28884550 (const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Material::get_passCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Material_get_passCount_m7BA071AFFA34DC3E49B56A16CB8B098566BDE765 (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.GL::PopMatrix()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GL_PopMatrix_m4AF6773C7BF85E8EEEC5CF36D5AFCCAC0FA34531 (const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.Material>::.ctor()
inline void List_1__ctor_m38500C20418699AEC04B1946434E06EC96FB4B1C (List_1_t386E09F4F22DDE4D2AC41A8567FFF283C254537B* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t386E09F4F22DDE4D2AC41A8567FFF283C254537B*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void UnityEngine.GL::LoadIdentity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GL_LoadIdentity_m77E19253C1F68D5A4064521EC490678C7BB2A64F (const RuntimeMethod* method) ;
// UnityEngine.Matrix4x4 UnityEngine.Camera::get_projectionMatrix()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 Camera_get_projectionMatrix_m9B943EFDD6418528A055321E14F75F1511DD9B4A (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.GL::LoadProjectionMatrix(UnityEngine.Matrix4x4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GL_LoadProjectionMatrix_m50BB4BC12EC636964C60C0DBBC4D5777706B00E4 (Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___mat0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Camera::get_fieldOfView()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Camera_get_fieldOfView_m9A93F17BBF89F496AE231C21817AFD1C1E833FBB (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Camera::get_aspect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Camera_get_aspect_m48BF8820EA2D55BE0D154BC5546819FB65BE257D (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, const RuntimeMethod* method) ;
// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::get_inverse()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 Matrix4x4_get_inverse_m4F4A881CD789281EA90EB68CFD39F36C8A81E6BD (Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Screen::get_width()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Screen_get_width_mCA5D955A53CF6D29C8C7118D517D0FC84AE8056C (const RuntimeMethod* method) ;
// System.Single UnityEngine.Matrix4x4::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Matrix4x4_get_Item_m771C2EE3A3BFFBAC9F2AD07FFCAAF6146C1BE92A (Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Screen::get_height()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Screen_get_height_m624DD2D53F34087064E3B9D09AC2207DB4E86CA8 (const RuntimeMethod* method) ;
// System.Void UnityEngine.Material::SetMatrix(System.String,UnityEngine.Matrix4x4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_SetMatrix_m1F4E20583C898A1C1DBA256868E1F98C539F13FB (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, String_t* ___name0, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___value1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___x0, float ___y1, const RuntimeMethod* method) ;
// UnityEngine.Vector4 UnityEngine.Vector4::op_Implicit(UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 Vector4_op_Implicit_m6162D8136CFE97A5A8BD3B764F9074DB96AA5CD0_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___v0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Clamp01(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp01_mD921B23F47F5347996C56DC789D1DE16EE27D9B1_inline (float ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Color32::.ctor(System.Byte,System.Byte,System.Byte,System.Byte)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color32__ctor_mC9C6B443F0C7CA3F8B174158B2AF6F05E18EAC4E_inline (Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* __this, uint8_t ___r0, uint8_t ___g1, uint8_t ___b2, uint8_t ___a3, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::Internal_FromEulerRad(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Internal_FromEulerRad_m2842B9FFB31CDC0F80B7C2172E22831D11D91E93 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___euler0, const RuntimeMethod* method) ;
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
// System.Void DoNotDestroyOnLoad_perName::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DoNotDestroyOnLoad_perName_Awake_mDA2954A8EF54A66874342EDF4D3F8D2C49B5F4A0 (DoNotDestroyOnLoad_perName_t9EBCA885C7054C26B4DEB01C06C88FD2753432A5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DoNotDestroyOnLoad_perName_t9EBCA885C7054C26B4DEB01C06C88FD2753432A5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Contains_m359254483BE42CAD4DCA8FBAFB87473FB4CF00E1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (list.Contains(this.name)) {
		il2cpp_codegen_runtime_class_init_inline(DoNotDestroyOnLoad_perName_t9EBCA885C7054C26B4DEB01C06C88FD2753432A5_il2cpp_TypeInfo_var);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_0 = ((DoNotDestroyOnLoad_perName_t9EBCA885C7054C26B4DEB01C06C88FD2753432A5_StaticFields*)il2cpp_codegen_static_fields_for(DoNotDestroyOnLoad_perName_t9EBCA885C7054C26B4DEB01C06C88FD2753432A5_il2cpp_TypeInfo_var))->___list_4;
		String_t* L_1;
		L_1 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(__this, NULL);
		NullCheck(L_0);
		bool L_2;
		L_2 = List_1_Contains_m359254483BE42CAD4DCA8FBAFB87473FB4CF00E1(L_0, L_1, List_1_Contains_m359254483BE42CAD4DCA8FBAFB87473FB4CF00E1_RuntimeMethod_var);
		if (!L_2)
		{
			goto IL_001d;
		}
	}
	{
		// GameObject.Destroy(this.gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3;
		L_3 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mFCDAE6333522488F60597AF019EA90BB1207A5AA(L_3, NULL);
	}

IL_001d:
	{
		// }
		return;
	}
}
// System.Void DoNotDestroyOnLoad_perName::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DoNotDestroyOnLoad_perName_Start_m7EAC278BDD7817863665093C283ADE2018B7B272 (DoNotDestroyOnLoad_perName_t9EBCA885C7054C26B4DEB01C06C88FD2753432A5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DoNotDestroyOnLoad_perName_t9EBCA885C7054C26B4DEB01C06C88FD2753432A5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// DontDestroyOnLoad(this.gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_DontDestroyOnLoad_m303AA1C4DC810349F285B4809E426CBBA8F834F9(L_0, NULL);
		// list.Add(this.name);
		il2cpp_codegen_runtime_class_init_inline(DoNotDestroyOnLoad_perName_t9EBCA885C7054C26B4DEB01C06C88FD2753432A5_il2cpp_TypeInfo_var);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_1 = ((DoNotDestroyOnLoad_perName_t9EBCA885C7054C26B4DEB01C06C88FD2753432A5_StaticFields*)il2cpp_codegen_static_fields_for(DoNotDestroyOnLoad_perName_t9EBCA885C7054C26B4DEB01C06C88FD2753432A5_il2cpp_TypeInfo_var))->___list_4;
		String_t* L_2;
		L_2 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(__this, NULL);
		NullCheck(L_1);
		List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline(L_1, L_2, List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void DoNotDestroyOnLoad_perName::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DoNotDestroyOnLoad_perName_Update_mA0A34CAD66E46B90CB1A4EE451EC4D1F303490AA (DoNotDestroyOnLoad_perName_t9EBCA885C7054C26B4DEB01C06C88FD2753432A5* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void DoNotDestroyOnLoad_perName::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DoNotDestroyOnLoad_perName__ctor_m16E1EEFF69A72BB8D37B1E8F5FF4160C67E17A06 (DoNotDestroyOnLoad_perName_t9EBCA885C7054C26B4DEB01C06C88FD2753432A5* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
// System.Void DoNotDestroyOnLoad_perName::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DoNotDestroyOnLoad_perName__cctor_m616DE16D1EE06EB8B4AFCD0BE5B5A98747387548 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DoNotDestroyOnLoad_perName_t9EBCA885C7054C26B4DEB01C06C88FD2753432A5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static List<string> list = new List<string>();
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_0 = (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*)il2cpp_codegen_object_new(List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E(L_0, List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var);
		((DoNotDestroyOnLoad_perName_t9EBCA885C7054C26B4DEB01C06C88FD2753432A5_StaticFields*)il2cpp_codegen_static_fields_for(DoNotDestroyOnLoad_perName_t9EBCA885C7054C26B4DEB01C06C88FD2753432A5_il2cpp_TypeInfo_var))->___list_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((DoNotDestroyOnLoad_perName_t9EBCA885C7054C26B4DEB01C06C88FD2753432A5_StaticFields*)il2cpp_codegen_static_fields_for(DoNotDestroyOnLoad_perName_t9EBCA885C7054C26B4DEB01C06C88FD2753432A5_il2cpp_TypeInfo_var))->___list_4), (void*)L_0);
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
// System.Void ExampleCam::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExampleCam_Start_mAC2BA83F8294AC0FAB0B56F6400EC40430A225A9 (ExampleCam_tE2903697D96306F068D755E459E112ACFC122949* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void ExampleCam::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExampleCam_Update_m9C044F801D7497727732EC620E438054ED97AD2F (ExampleCam_tE2903697D96306F068D755E459E112ACFC122949* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void ExampleCam::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExampleCam__ctor_mDE16C2FEDC7918CEFA2E70CBD467CF643A28DFC8 (ExampleCam_tE2903697D96306F068D755E459E112ACFC122949* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m351148D1F56354516445CD9F1BFD8002B41FD7A2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tCB9190A56C65FD59CE07C6A0EA71F30067A43D81_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public List<MonoBehaviour> ImageEffectsList = new List<MonoBehaviour>();
		List_1_tCB9190A56C65FD59CE07C6A0EA71F30067A43D81* L_0 = (List_1_tCB9190A56C65FD59CE07C6A0EA71F30067A43D81*)il2cpp_codegen_object_new(List_1_tCB9190A56C65FD59CE07C6A0EA71F30067A43D81_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_m351148D1F56354516445CD9F1BFD8002B41FD7A2(L_0, List_1__ctor_m351148D1F56354516445CD9F1BFD8002B41FD7A2_RuntimeMethod_var);
		__this->___ImageEffectsList_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___ImageEffectsList_5), (void*)L_0);
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
// System.Void ExampleListener::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExampleListener_Awake_m8FDDFCD9F5C571DE0B59D3E1A67FCF82ABCE93E4 (ExampleListener_t5583A25124D06A1FECAF18320ACAD10E693E6126* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!IAM)
		InterfaceAnimManager_t55019D504BEA6534494FED15C7945911CE850962* L_0 = __this->___IAM_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_0, NULL);
		if (L_1)
		{
			goto IL_000e;
		}
	}
	{
		// return;
		return;
	}

IL_000e:
	{
		// AddListener();
		ExampleListener_AddListener_m61C17BC92F6F28A4A96DF431A171D960F09A875B(__this, NULL);
		// }
		return;
	}
}
// System.Void ExampleListener::AddListener()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExampleListener_AddListener_m61C17BC92F6F28A4A96DF431A171D960F09A875B (ExampleListener_t5583A25124D06A1FECAF18320ACAD10E693E6126* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExampleListener_HandleOnEndAppear_mABB9658367C2253C06CEBC66AAA50DE1FB2B0E24_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExampleListener_HandleOnEndDisappear_m51C9BF743792959970049E41813A78BF1F27747F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExampleListener_HandleOnStartAppear_mED9C19C0E487397E9FB11D83EEB7C0FBC6798A74_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExampleListener_HandleOnStartDisappear_m0DD4F1C60C4C45922FE36F7CF8233ABF27A0337C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAM_EndAppear_t60802E44D1AB53A268000746AEAA403393EFE4C6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAM_EndDisappear_t91F7B236FDF2A3FC74F13C5FD4987F95E8936663_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAM_StartAppear_t45F8AF6D25B9B8F63ED671D6461EF06AFBDEACDC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAM_StartDisappear_tFBEC30F3C988FD6D617407114866A1D5FE174BFB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// IAM.OnStartAppear += HandleOnStartAppear;
		InterfaceAnimManager_t55019D504BEA6534494FED15C7945911CE850962* L_0 = __this->___IAM_4;
		IAM_StartAppear_t45F8AF6D25B9B8F63ED671D6461EF06AFBDEACDC* L_1 = (IAM_StartAppear_t45F8AF6D25B9B8F63ED671D6461EF06AFBDEACDC*)il2cpp_codegen_object_new(IAM_StartAppear_t45F8AF6D25B9B8F63ED671D6461EF06AFBDEACDC_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		IAM_StartAppear__ctor_m5241E3AC8F01228C378127519DCC13D701397E10(L_1, __this, (intptr_t)((void*)ExampleListener_HandleOnStartAppear_mED9C19C0E487397E9FB11D83EEB7C0FBC6798A74_RuntimeMethod_var), NULL);
		NullCheck(L_0);
		InterfaceAnimManager_add_OnStartAppear_mFFCADFD6C20EE575552C576923F01A584F25E191(L_0, L_1, NULL);
		// IAM.OnStartDisappear += HandleOnStartDisappear;
		InterfaceAnimManager_t55019D504BEA6534494FED15C7945911CE850962* L_2 = __this->___IAM_4;
		IAM_StartDisappear_tFBEC30F3C988FD6D617407114866A1D5FE174BFB* L_3 = (IAM_StartDisappear_tFBEC30F3C988FD6D617407114866A1D5FE174BFB*)il2cpp_codegen_object_new(IAM_StartDisappear_tFBEC30F3C988FD6D617407114866A1D5FE174BFB_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		IAM_StartDisappear__ctor_m66CBCB5131678ACE096924FA8262C1CF6C5C0F18(L_3, __this, (intptr_t)((void*)ExampleListener_HandleOnStartDisappear_m0DD4F1C60C4C45922FE36F7CF8233ABF27A0337C_RuntimeMethod_var), NULL);
		NullCheck(L_2);
		InterfaceAnimManager_add_OnStartDisappear_m636052A822D968B5AB57CBAAFA41ECE748690178(L_2, L_3, NULL);
		// IAM.OnEndAppear += HandleOnEndAppear;
		InterfaceAnimManager_t55019D504BEA6534494FED15C7945911CE850962* L_4 = __this->___IAM_4;
		IAM_EndAppear_t60802E44D1AB53A268000746AEAA403393EFE4C6* L_5 = (IAM_EndAppear_t60802E44D1AB53A268000746AEAA403393EFE4C6*)il2cpp_codegen_object_new(IAM_EndAppear_t60802E44D1AB53A268000746AEAA403393EFE4C6_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		IAM_EndAppear__ctor_m7892297E28776607E2CBC89F01E388DA4D9AFA2C(L_5, __this, (intptr_t)((void*)ExampleListener_HandleOnEndAppear_mABB9658367C2253C06CEBC66AAA50DE1FB2B0E24_RuntimeMethod_var), NULL);
		NullCheck(L_4);
		InterfaceAnimManager_add_OnEndAppear_m646730B8F8C40D442B4116074FE6C65E82F6F3FC(L_4, L_5, NULL);
		// IAM.OnEndDisappear += HandleOnEndDisappear;
		InterfaceAnimManager_t55019D504BEA6534494FED15C7945911CE850962* L_6 = __this->___IAM_4;
		IAM_EndDisappear_t91F7B236FDF2A3FC74F13C5FD4987F95E8936663* L_7 = (IAM_EndDisappear_t91F7B236FDF2A3FC74F13C5FD4987F95E8936663*)il2cpp_codegen_object_new(IAM_EndDisappear_t91F7B236FDF2A3FC74F13C5FD4987F95E8936663_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		IAM_EndDisappear__ctor_m02480C1C7F7AD2915FB666BA5663E747EFB0B7CA(L_7, __this, (intptr_t)((void*)ExampleListener_HandleOnEndDisappear_m51C9BF743792959970049E41813A78BF1F27747F_RuntimeMethod_var), NULL);
		NullCheck(L_6);
		InterfaceAnimManager_add_OnEndDisappear_mC951476928A818AF706009F32CAAF5C159954137(L_6, L_7, NULL);
		// }
		return;
	}
}
// System.Void ExampleListener::RemoveListener()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExampleListener_RemoveListener_mEBB2456C8E98A80D9925F7025F56D43E288F9F67 (ExampleListener_t5583A25124D06A1FECAF18320ACAD10E693E6126* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExampleListener_HandleOnEndAppear_mABB9658367C2253C06CEBC66AAA50DE1FB2B0E24_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExampleListener_HandleOnEndDisappear_m51C9BF743792959970049E41813A78BF1F27747F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExampleListener_HandleOnStartAppear_mED9C19C0E487397E9FB11D83EEB7C0FBC6798A74_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExampleListener_HandleOnStartDisappear_m0DD4F1C60C4C45922FE36F7CF8233ABF27A0337C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAM_EndAppear_t60802E44D1AB53A268000746AEAA403393EFE4C6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAM_EndDisappear_t91F7B236FDF2A3FC74F13C5FD4987F95E8936663_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAM_StartAppear_t45F8AF6D25B9B8F63ED671D6461EF06AFBDEACDC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAM_StartDisappear_tFBEC30F3C988FD6D617407114866A1D5FE174BFB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// IAM.OnStartAppear -= HandleOnStartAppear;
		InterfaceAnimManager_t55019D504BEA6534494FED15C7945911CE850962* L_0 = __this->___IAM_4;
		IAM_StartAppear_t45F8AF6D25B9B8F63ED671D6461EF06AFBDEACDC* L_1 = (IAM_StartAppear_t45F8AF6D25B9B8F63ED671D6461EF06AFBDEACDC*)il2cpp_codegen_object_new(IAM_StartAppear_t45F8AF6D25B9B8F63ED671D6461EF06AFBDEACDC_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		IAM_StartAppear__ctor_m5241E3AC8F01228C378127519DCC13D701397E10(L_1, __this, (intptr_t)((void*)ExampleListener_HandleOnStartAppear_mED9C19C0E487397E9FB11D83EEB7C0FBC6798A74_RuntimeMethod_var), NULL);
		NullCheck(L_0);
		InterfaceAnimManager_remove_OnStartAppear_m27A7CDC454B6219F53F42C396D5DDBEAF43625B5(L_0, L_1, NULL);
		// IAM.OnStartDisappear -= HandleOnStartDisappear;
		InterfaceAnimManager_t55019D504BEA6534494FED15C7945911CE850962* L_2 = __this->___IAM_4;
		IAM_StartDisappear_tFBEC30F3C988FD6D617407114866A1D5FE174BFB* L_3 = (IAM_StartDisappear_tFBEC30F3C988FD6D617407114866A1D5FE174BFB*)il2cpp_codegen_object_new(IAM_StartDisappear_tFBEC30F3C988FD6D617407114866A1D5FE174BFB_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		IAM_StartDisappear__ctor_m66CBCB5131678ACE096924FA8262C1CF6C5C0F18(L_3, __this, (intptr_t)((void*)ExampleListener_HandleOnStartDisappear_m0DD4F1C60C4C45922FE36F7CF8233ABF27A0337C_RuntimeMethod_var), NULL);
		NullCheck(L_2);
		InterfaceAnimManager_remove_OnStartDisappear_mB8094724F78E5C899B4AF7CE53ED51E23C8F1A44(L_2, L_3, NULL);
		// IAM.OnEndAppear -= HandleOnEndAppear;
		InterfaceAnimManager_t55019D504BEA6534494FED15C7945911CE850962* L_4 = __this->___IAM_4;
		IAM_EndAppear_t60802E44D1AB53A268000746AEAA403393EFE4C6* L_5 = (IAM_EndAppear_t60802E44D1AB53A268000746AEAA403393EFE4C6*)il2cpp_codegen_object_new(IAM_EndAppear_t60802E44D1AB53A268000746AEAA403393EFE4C6_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		IAM_EndAppear__ctor_m7892297E28776607E2CBC89F01E388DA4D9AFA2C(L_5, __this, (intptr_t)((void*)ExampleListener_HandleOnEndAppear_mABB9658367C2253C06CEBC66AAA50DE1FB2B0E24_RuntimeMethod_var), NULL);
		NullCheck(L_4);
		InterfaceAnimManager_remove_OnEndAppear_m39B8089E247705D9D859B590C832105CEC459285(L_4, L_5, NULL);
		// IAM.OnEndDisappear -= HandleOnEndDisappear;
		InterfaceAnimManager_t55019D504BEA6534494FED15C7945911CE850962* L_6 = __this->___IAM_4;
		IAM_EndDisappear_t91F7B236FDF2A3FC74F13C5FD4987F95E8936663* L_7 = (IAM_EndDisappear_t91F7B236FDF2A3FC74F13C5FD4987F95E8936663*)il2cpp_codegen_object_new(IAM_EndDisappear_t91F7B236FDF2A3FC74F13C5FD4987F95E8936663_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		IAM_EndDisappear__ctor_m02480C1C7F7AD2915FB666BA5663E747EFB0B7CA(L_7, __this, (intptr_t)((void*)ExampleListener_HandleOnEndDisappear_m51C9BF743792959970049E41813A78BF1F27747F_RuntimeMethod_var), NULL);
		NullCheck(L_6);
		InterfaceAnimManager_remove_OnEndDisappear_mDAF3D7BA051591A257F4ED3CCAB6530E142A42DC(L_6, L_7, NULL);
		// }
		return;
	}
}
// System.Void ExampleListener::HandleOnStartAppear(InterfaceAnimManager)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExampleListener_HandleOnStartAppear_mED9C19C0E487397E9FB11D83EEB7C0FBC6798A74 (ExampleListener_t5583A25124D06A1FECAF18320ACAD10E693E6126* __this, InterfaceAnimManager_t55019D504BEA6534494FED15C7945911CE850962* ____IAM0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral55A458034DB1D5BF3572D0949EA9AAEF5812135D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBF457A7C2EBDC6A89CF7866ED6A35E2BEF05781E);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log("EVENT LISTENER : " + _IAM.name + " onStartAppear");
		InterfaceAnimManager_t55019D504BEA6534494FED15C7945911CE850962* L_0 = ____IAM0;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_0, NULL);
		String_t* L_2;
		L_2 = String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0(_stringLiteral55A458034DB1D5BF3572D0949EA9AAEF5812135D, L_1, _stringLiteralBF457A7C2EBDC6A89CF7866ED6A35E2BEF05781E, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(L_2, NULL);
		// }
		return;
	}
}
// System.Void ExampleListener::HandleOnStartDisappear(InterfaceAnimManager)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExampleListener_HandleOnStartDisappear_m0DD4F1C60C4C45922FE36F7CF8233ABF27A0337C (ExampleListener_t5583A25124D06A1FECAF18320ACAD10E693E6126* __this, InterfaceAnimManager_t55019D504BEA6534494FED15C7945911CE850962* ____IAM0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0402F89BA8A564D78EA74C8D37ED1F9E42E573D5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral55A458034DB1D5BF3572D0949EA9AAEF5812135D);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log("EVENT LISTENER : " + _IAM.name + " onStartDisappear");
		InterfaceAnimManager_t55019D504BEA6534494FED15C7945911CE850962* L_0 = ____IAM0;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_0, NULL);
		String_t* L_2;
		L_2 = String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0(_stringLiteral55A458034DB1D5BF3572D0949EA9AAEF5812135D, L_1, _stringLiteral0402F89BA8A564D78EA74C8D37ED1F9E42E573D5, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(L_2, NULL);
		// }
		return;
	}
}
// System.Void ExampleListener::HandleOnEndAppear(InterfaceAnimManager)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExampleListener_HandleOnEndAppear_mABB9658367C2253C06CEBC66AAA50DE1FB2B0E24 (ExampleListener_t5583A25124D06A1FECAF18320ACAD10E693E6126* __this, InterfaceAnimManager_t55019D504BEA6534494FED15C7945911CE850962* ____IAM0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral280F624DC11628866DF0E75B68F187076179DF40);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral55A458034DB1D5BF3572D0949EA9AAEF5812135D);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log("EVENT LISTENER : " + _IAM.name + " onEndAppear");
		InterfaceAnimManager_t55019D504BEA6534494FED15C7945911CE850962* L_0 = ____IAM0;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_0, NULL);
		String_t* L_2;
		L_2 = String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0(_stringLiteral55A458034DB1D5BF3572D0949EA9AAEF5812135D, L_1, _stringLiteral280F624DC11628866DF0E75B68F187076179DF40, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(L_2, NULL);
		// }
		return;
	}
}
// System.Void ExampleListener::HandleOnEndDisappear(InterfaceAnimManager)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExampleListener_HandleOnEndDisappear_m51C9BF743792959970049E41813A78BF1F27747F (ExampleListener_t5583A25124D06A1FECAF18320ACAD10E693E6126* __this, InterfaceAnimManager_t55019D504BEA6534494FED15C7945911CE850962* ____IAM0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral55A458034DB1D5BF3572D0949EA9AAEF5812135D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7ED1A19D8C8DC7DD41FBC4E4B831F17F28480369);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log("EVENT LISTENER : " + _IAM.name + " onEndDisappear");
		InterfaceAnimManager_t55019D504BEA6534494FED15C7945911CE850962* L_0 = ____IAM0;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_0, NULL);
		String_t* L_2;
		L_2 = String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0(_stringLiteral55A458034DB1D5BF3572D0949EA9AAEF5812135D, L_1, _stringLiteral7ED1A19D8C8DC7DD41FBC4E4B831F17F28480369, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(L_2, NULL);
		// }
		return;
	}
}
// System.Void ExampleListener::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExampleListener__ctor_m2DFDC852D992B22960DF50500F89538FEF0D3566 (ExampleListener_t5583A25124D06A1FECAF18320ACAD10E693E6126* __this, const RuntimeMethod* method) 
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
// System.Void ExampleUI::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExampleUI_Start_m96CCB41FD312FE2BE8F14210BCDAD8DC41A5FC68 (ExampleUI_t2552997442A7324DD508292D6911E8AA0B7A12DD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (holoInterfaceList[indexInterface] != null)
		InterfaceAnimManagerU5BU5D_tB99A76DFD85996ED124AE4892004922F617EF797* L_0 = __this->___holoInterfaceList_7;
		int32_t L_1 = __this->___indexInterface_6;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		InterfaceAnimManager_t55019D504BEA6534494FED15C7945911CE850962* L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_3, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_4)
		{
			goto IL_0028;
		}
	}
	{
		// CallInterface(holoInterfaceList[indexInterface]);
		InterfaceAnimManagerU5BU5D_tB99A76DFD85996ED124AE4892004922F617EF797* L_5 = __this->___holoInterfaceList_7;
		int32_t L_6 = __this->___indexInterface_6;
		NullCheck(L_5);
		int32_t L_7 = L_6;
		InterfaceAnimManager_t55019D504BEA6534494FED15C7945911CE850962* L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		ExampleUI_CallInterface_m0073B9DD8EB274AFC1F7BDDDE29E69E8AFB360D8(__this, L_8, NULL);
	}

IL_0028:
	{
		// }
		return;
	}
}
// System.Void ExampleUI::playSound()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExampleUI_playSound_m63D0775EB9BD539874C46D2DB4CD5AD6475B0EEA (ExampleUI_t2552997442A7324DD508292D6911E8AA0B7A12DD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (audioSource && audioSource.enabled)
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_0 = __this->___audioSource_16;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_0, NULL);
		if (!L_1)
		{
			goto IL_0025;
		}
	}
	{
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_2 = __this->___audioSource_16;
		NullCheck(L_2);
		bool L_3;
		L_3 = Behaviour_get_enabled_mAAC9F15E9EBF552217A5AE2681589CC0BFA300C1(L_2, NULL);
		if (!L_3)
		{
			goto IL_0025;
		}
	}
	{
		// audioSource.Play();
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_4 = __this->___audioSource_16;
		NullCheck(L_4);
		AudioSource_Play_m95DF07111C61D0E0F00257A00384D31531D590C3(L_4, NULL);
	}

IL_0025:
	{
		// }
		return;
	}
}
// System.Void ExampleUI::DoOutFullscreen()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExampleUI_DoOutFullscreen_mEB99075A5260EF61C576CE1DBCC8AC8F770F8FFA (ExampleUI_t2552997442A7324DD508292D6911E8AA0B7A12DD* __this, const RuntimeMethod* method) 
{
	{
		// if (Screen.fullScreen)
		bool L_0;
		L_0 = Screen_get_fullScreen_mE2EA8E280C5420792E6D09CC46D6B3CE023B2A6B(NULL);
		if (!L_0)
		{
			goto IL_000d;
		}
	}
	{
		// Screen.fullScreen = false;
		Screen_set_fullScreen_m46FCC49722BE6E27B92301D55A834C24B48B9EA2((bool)0, NULL);
	}

IL_000d:
	{
		// playSound();
		ExampleUI_playSound_m63D0775EB9BD539874C46D2DB4CD5AD6475B0EEA(__this, NULL);
		// }
		return;
	}
}
// System.Void ExampleUI::DoChangeEnvironment()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExampleUI_DoChangeEnvironment_mBD419E4F71557F7C67321ADCE445A626CEE17C92 (ExampleUI_t2552997442A7324DD508292D6911E8AA0B7A12DD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m21AEC50E791371101DC22ABCF96A2E46800811F8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// indexScene++;
		int32_t L_0 = __this->___indexScene_11;
		__this->___indexScene_11 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		// if (indexScene >= loadableScenes.Count)
		int32_t L_1 = __this->___indexScene_11;
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_2 = __this->___loadableScenes_14;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_inline(L_2, List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_RuntimeMethod_var);
		if ((((int32_t)L_1) < ((int32_t)L_3)))
		{
			goto IL_0028;
		}
	}
	{
		// indexScene = 0;
		__this->___indexScene_11 = 0;
	}

IL_0028:
	{
		// playSound();
		ExampleUI_playSound_m63D0775EB9BD539874C46D2DB4CD5AD6475B0EEA(__this, NULL);
		// SceneManager.LoadScene(loadableScenes[indexScene]);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_4 = __this->___loadableScenes_14;
		int32_t L_5 = __this->___indexScene_11;
		NullCheck(L_4);
		String_t* L_6;
		L_6 = List_1_get_Item_m21AEC50E791371101DC22ABCF96A2E46800811F8(L_4, L_5, List_1_get_Item_m21AEC50E791371101DC22ABCF96A2E46800811F8_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m7237839058F581BFCA0A79BB96F6F931469E43CF(L_6, NULL);
		// InitCam();
		ExampleUI_InitCam_m1B92BAD1355ED04698F51FD20A04B4439DA3BF06(__this, NULL);
		// }
		return;
	}
}
// System.Void ExampleUI::OnSceneLoaded(UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.LoadSceneMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExampleUI_OnSceneLoaded_m4D71F9100863BABAB2755E9D9103C84B008A621F (ExampleUI_t2552997442A7324DD508292D6911E8AA0B7A12DD* __this, Scene_tA1DC762B79745EB5140F054C884855B922318356 ___scene0, int32_t ___mod1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExampleUI_OnSceneLoaded_m4D71F9100863BABAB2755E9D9103C84B008A621F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_2_t1C08AEB5AA4F72FEFAB7F303E33C8CFFF80A8C3A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.sceneLoaded -= OnSceneLoaded;
		UnityAction_2_t1C08AEB5AA4F72FEFAB7F303E33C8CFFF80A8C3A* L_0 = (UnityAction_2_t1C08AEB5AA4F72FEFAB7F303E33C8CFFF80A8C3A*)il2cpp_codegen_object_new(UnityAction_2_t1C08AEB5AA4F72FEFAB7F303E33C8CFFF80A8C3A_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		UnityAction_2__ctor_m0E0C01B7056EB1CB1E6C6F4FC457EBCA3F6B0041(L_0, __this, (intptr_t)((void*)ExampleUI_OnSceneLoaded_m4D71F9100863BABAB2755E9D9103C84B008A621F_RuntimeMethod_var), NULL);
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_remove_sceneLoaded_m8840CC33052C4A09A52BF927C3738A7B66783155(L_0, NULL);
		// InitCam();
		ExampleUI_InitCam_m1B92BAD1355ED04698F51FD20A04B4439DA3BF06(__this, NULL);
		// }
		return;
	}
}
// System.Void ExampleUI::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExampleUI_Awake_mAD3B404EDE7220A20244713AD464FA428346A279 (ExampleUI_t2552997442A7324DD508292D6911E8AA0B7A12DD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExampleUI_OnSceneLoaded_m4D71F9100863BABAB2755E9D9103C84B008A621F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_2_t1C08AEB5AA4F72FEFAB7F303E33C8CFFF80A8C3A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.sceneLoaded += OnSceneLoaded;
		UnityAction_2_t1C08AEB5AA4F72FEFAB7F303E33C8CFFF80A8C3A* L_0 = (UnityAction_2_t1C08AEB5AA4F72FEFAB7F303E33C8CFFF80A8C3A*)il2cpp_codegen_object_new(UnityAction_2_t1C08AEB5AA4F72FEFAB7F303E33C8CFFF80A8C3A_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		UnityAction_2__ctor_m0E0C01B7056EB1CB1E6C6F4FC457EBCA3F6B0041(L_0, __this, (intptr_t)((void*)ExampleUI_OnSceneLoaded_m4D71F9100863BABAB2755E9D9103C84B008A621F_RuntimeMethod_var), NULL);
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_add_sceneLoaded_mDE45940CCEC5D17EB92EB76DB8931E5483FBCD2C(L_0, NULL);
		// InitCam();
		ExampleUI_InitCam_m1B92BAD1355ED04698F51FD20A04B4439DA3BF06(__this, NULL);
		// }
		return;
	}
}
// System.Void ExampleUI::InitCam()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExampleUI_InitCam_m1B92BAD1355ED04698F51FD20A04B4439DA3BF06 (ExampleUI_t2552997442A7324DD508292D6911E8AA0B7A12DD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mA18455211C51A1DBF839683A9A405FFB3E51EE32_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m7F890D387B8294FF405777D929F894DF8863409F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m677B6DAF16A498C87390EB1D8491F59DC1225A64_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExampleUI_t2552997442A7324DD508292D6911E8AA0B7A12DD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisExampleCam_tE2903697D96306F068D755E459E112ACFC122949_m869D94C2A873095FC742BE35564B6108ED6F48D0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m6634056FE8223F5FBF4B35F680857B49FA138DC2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF08F12867C14A169A06FA0C98F5712579796B0A6);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t07C2E5693B034463FB920742E4CC32D19677F76F V_0;
	memset((&V_0), 0, sizeof(V_0));
	InterfaceAnimManagerU5BU5D_tB99A76DFD85996ED124AE4892004922F617EF797* V_1 = NULL;
	int32_t V_2 = 0;
	{
		// Debug.Log("InitCam + " + searchCam + " " + searchTarget);
		String_t* L_0 = __this->___searchCam_10;
		String_t* L_1 = __this->___searchTarget_9;
		String_t* L_2;
		L_2 = String_Concat_mF8B69BE42B5C5ABCAD3C176FBBE3010E0815D65D(_stringLiteralF08F12867C14A169A06FA0C98F5712579796B0A6, L_0, _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745, L_1, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(L_2, NULL);
		// if (searchCam == "")
		String_t* L_3 = __this->___searchCam_10;
		bool L_4;
		L_4 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_3, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, NULL);
		if (!L_4)
		{
			goto IL_0033;
		}
	}
	{
		// return;
		return;
	}

IL_0033:
	{
		// currentCam = GameObject.Find(searchCam).GetComponent<ExampleCam>();
		String_t* L_5 = __this->___searchCam_10;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6;
		L_6 = GameObject_Find_mFF1D6C65A7E2CD82443F4DCE4C53472FB30B7F51(L_5, NULL);
		NullCheck(L_6);
		ExampleCam_tE2903697D96306F068D755E459E112ACFC122949* L_7;
		L_7 = GameObject_GetComponent_TisExampleCam_tE2903697D96306F068D755E459E112ACFC122949_m869D94C2A873095FC742BE35564B6108ED6F48D0(L_6, GameObject_GetComponent_TisExampleCam_tE2903697D96306F068D755E459E112ACFC122949_m869D94C2A873095FC742BE35564B6108ED6F48D0_RuntimeMethod_var);
		__this->___currentCam_8 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___currentCam_8), (void*)L_7);
		// if (currentCam && searchTarget != "" && currentCam.mouseOrbit.target==null) {
		ExampleCam_tE2903697D96306F068D755E459E112ACFC122949* L_8 = __this->___currentCam_8;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_9;
		L_9 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_8, NULL);
		if (!L_9)
		{
			goto IL_00a0;
		}
	}
	{
		String_t* L_10 = __this->___searchTarget_9;
		bool L_11;
		L_11 = String_op_Inequality_m0FBE5AC4931D312E5B347BAA603755676E6DA2FE(L_10, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, NULL);
		if (!L_11)
		{
			goto IL_00a0;
		}
	}
	{
		ExampleCam_tE2903697D96306F068D755E459E112ACFC122949* L_12 = __this->___currentCam_8;
		NullCheck(L_12);
		MouseOrbitImproved_t19ECE3CB982D60FD6DB794ABFEF61AA7CAAE8F64* L_13 = L_12->___mouseOrbit_4;
		NullCheck(L_13);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_14 = L_13->___target_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_15;
		L_15 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_14, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_15)
		{
			goto IL_00a0;
		}
	}
	{
		// currentCam.mouseOrbit.target = GameObject.Find(searchTarget).transform;
		ExampleCam_tE2903697D96306F068D755E459E112ACFC122949* L_16 = __this->___currentCam_8;
		NullCheck(L_16);
		MouseOrbitImproved_t19ECE3CB982D60FD6DB794ABFEF61AA7CAAE8F64* L_17 = L_16->___mouseOrbit_4;
		String_t* L_18 = __this->___searchTarget_9;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_19;
		L_19 = GameObject_Find_mFF1D6C65A7E2CD82443F4DCE4C53472FB30B7F51(L_18, NULL);
		NullCheck(L_19);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_20;
		L_20 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_19, NULL);
		NullCheck(L_17);
		L_17->___target_4 = L_20;
		Il2CppCodeGenWriteBarrier((void**)(&L_17->___target_4), (void*)L_20);
	}

IL_00a0:
	{
		// if (!allImgEffectsStatus) {
		il2cpp_codegen_runtime_class_init_inline(ExampleUI_t2552997442A7324DD508292D6911E8AA0B7A12DD_il2cpp_TypeInfo_var);
		bool L_21 = ((ExampleUI_t2552997442A7324DD508292D6911E8AA0B7A12DD_StaticFields*)il2cpp_codegen_static_fields_for(ExampleUI_t2552997442A7324DD508292D6911E8AA0B7A12DD_il2cpp_TypeInfo_var))->___allImgEffectsStatus_13;
		if (L_21)
		{
			goto IL_00e4;
		}
	}
	{
		// foreach (MonoBehaviour _img in currentCam.ImageEffectsList) {
		ExampleCam_tE2903697D96306F068D755E459E112ACFC122949* L_22 = __this->___currentCam_8;
		NullCheck(L_22);
		List_1_tCB9190A56C65FD59CE07C6A0EA71F30067A43D81* L_23 = L_22->___ImageEffectsList_5;
		NullCheck(L_23);
		Enumerator_t07C2E5693B034463FB920742E4CC32D19677F76F L_24;
		L_24 = List_1_GetEnumerator_m6634056FE8223F5FBF4B35F680857B49FA138DC2(L_23, List_1_GetEnumerator_m6634056FE8223F5FBF4B35F680857B49FA138DC2_RuntimeMethod_var);
		V_0 = L_24;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00d6:
			{// begin finally (depth: 1)
				Enumerator_Dispose_mA18455211C51A1DBF839683A9A405FFB3E51EE32((&V_0), Enumerator_Dispose_mA18455211C51A1DBF839683A9A405FFB3E51EE32_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_00cb_1;
			}

IL_00ba_1:
			{
				// foreach (MonoBehaviour _img in currentCam.ImageEffectsList) {
				MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* L_25;
				L_25 = Enumerator_get_Current_m677B6DAF16A498C87390EB1D8491F59DC1225A64_inline((&V_0), Enumerator_get_Current_m677B6DAF16A498C87390EB1D8491F59DC1225A64_RuntimeMethod_var);
				// _img.enabled = allImgEffectsStatus;
				il2cpp_codegen_runtime_class_init_inline(ExampleUI_t2552997442A7324DD508292D6911E8AA0B7A12DD_il2cpp_TypeInfo_var);
				bool L_26 = ((ExampleUI_t2552997442A7324DD508292D6911E8AA0B7A12DD_StaticFields*)il2cpp_codegen_static_fields_for(ExampleUI_t2552997442A7324DD508292D6911E8AA0B7A12DD_il2cpp_TypeInfo_var))->___allImgEffectsStatus_13;
				NullCheck(L_25);
				Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_25, L_26, NULL);
			}

IL_00cb_1:
			{
				// foreach (MonoBehaviour _img in currentCam.ImageEffectsList) {
				bool L_27;
				L_27 = Enumerator_MoveNext_m7F890D387B8294FF405777D929F894DF8863409F((&V_0), Enumerator_MoveNext_m7F890D387B8294FF405777D929F894DF8863409F_RuntimeMethod_var);
				if (L_27)
				{
					goto IL_00ba_1;
				}
			}
			{
				goto IL_00e4;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00e4:
	{
		// if (!allDelaysStatus) {
		il2cpp_codegen_runtime_class_init_inline(ExampleUI_t2552997442A7324DD508292D6911E8AA0B7A12DD_il2cpp_TypeInfo_var);
		bool L_28 = ((ExampleUI_t2552997442A7324DD508292D6911E8AA0B7A12DD_StaticFields*)il2cpp_codegen_static_fields_for(ExampleUI_t2552997442A7324DD508292D6911E8AA0B7A12DD_il2cpp_TypeInfo_var))->___allDelaysStatus_12;
		if (L_28)
		{
			goto IL_010d;
		}
	}
	{
		// foreach (InterfaceAnimManager ia in holoInterfaceList) {
		InterfaceAnimManagerU5BU5D_tB99A76DFD85996ED124AE4892004922F617EF797* L_29 = __this->___holoInterfaceList_7;
		V_1 = L_29;
		V_2 = 0;
		goto IL_0107;
	}

IL_00f6:
	{
		// foreach (InterfaceAnimManager ia in holoInterfaceList) {
		InterfaceAnimManagerU5BU5D_tB99A76DFD85996ED124AE4892004922F617EF797* L_30 = V_1;
		int32_t L_31 = V_2;
		NullCheck(L_30);
		int32_t L_32 = L_31;
		InterfaceAnimManager_t55019D504BEA6534494FED15C7945911CE850962* L_33 = (L_30)->GetAt(static_cast<il2cpp_array_size_t>(L_32));
		// ia.useDelays = allDelaysStatus;
		il2cpp_codegen_runtime_class_init_inline(ExampleUI_t2552997442A7324DD508292D6911E8AA0B7A12DD_il2cpp_TypeInfo_var);
		bool L_34 = ((ExampleUI_t2552997442A7324DD508292D6911E8AA0B7A12DD_StaticFields*)il2cpp_codegen_static_fields_for(ExampleUI_t2552997442A7324DD508292D6911E8AA0B7A12DD_il2cpp_TypeInfo_var))->___allDelaysStatus_12;
		NullCheck(L_33);
		L_33->___useDelays_16 = L_34;
		int32_t L_35 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_35, 1));
	}

IL_0107:
	{
		// foreach (InterfaceAnimManager ia in holoInterfaceList) {
		int32_t L_36 = V_2;
		InterfaceAnimManagerU5BU5D_tB99A76DFD85996ED124AE4892004922F617EF797* L_37 = V_1;
		NullCheck(L_37);
		if ((((int32_t)L_36) < ((int32_t)((int32_t)(((RuntimeArray*)L_37)->max_length)))))
		{
			goto IL_00f6;
		}
	}

IL_010d:
	{
		// }
		return;
	}
}
// System.Void ExampleUI::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExampleUI_Update_m549F5958B5B4840D45339C442E2C3D184D66386B (ExampleUI_t2552997442A7324DD508292D6911E8AA0B7A12DD* __this, const RuntimeMethod* method) 
{
	{
		// fullscreenSwith.SetActive(Screen.fullScreen);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___fullscreenSwith_15;
		bool L_1;
		L_1 = Screen_get_fullScreen_mE2EA8E280C5420792E6D09CC46D6B3CE023B2A6B(NULL);
		NullCheck(L_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void ExampleUI::DoSwitchAutoCam()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExampleUI_DoSwitchAutoCam_m3FBE568ECAEB4601135D486D9338F2C512383BD7 (ExampleUI_t2552997442A7324DD508292D6911E8AA0B7A12DD* __this, const RuntimeMethod* method) 
{
	{
		// currentCam.mouseOrbit.enabled = !currentCam.mouseOrbit.enabled;
		ExampleCam_tE2903697D96306F068D755E459E112ACFC122949* L_0 = __this->___currentCam_8;
		NullCheck(L_0);
		MouseOrbitImproved_t19ECE3CB982D60FD6DB794ABFEF61AA7CAAE8F64* L_1 = L_0->___mouseOrbit_4;
		ExampleCam_tE2903697D96306F068D755E459E112ACFC122949* L_2 = __this->___currentCam_8;
		NullCheck(L_2);
		MouseOrbitImproved_t19ECE3CB982D60FD6DB794ABFEF61AA7CAAE8F64* L_3 = L_2->___mouseOrbit_4;
		NullCheck(L_3);
		bool L_4;
		L_4 = Behaviour_get_enabled_mAAC9F15E9EBF552217A5AE2681589CC0BFA300C1(L_3, NULL);
		NullCheck(L_1);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_1, (bool)((((int32_t)L_4) == ((int32_t)0))? 1 : 0), NULL);
		// }
		return;
	}
}
// System.Void ExampleUI::DoSwitchCameraEffects()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExampleUI_DoSwitchCameraEffects_m03502028B80D0CED65DAFF22B53FA3D32FD64690 (ExampleUI_t2552997442A7324DD508292D6911E8AA0B7A12DD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mA18455211C51A1DBF839683A9A405FFB3E51EE32_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m7F890D387B8294FF405777D929F894DF8863409F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m677B6DAF16A498C87390EB1D8491F59DC1225A64_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExampleUI_t2552997442A7324DD508292D6911E8AA0B7A12DD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m6634056FE8223F5FBF4B35F680857B49FA138DC2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t07C2E5693B034463FB920742E4CC32D19677F76F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// allImgEffectsStatus = !allImgEffectsStatus;
		il2cpp_codegen_runtime_class_init_inline(ExampleUI_t2552997442A7324DD508292D6911E8AA0B7A12DD_il2cpp_TypeInfo_var);
		bool L_0 = ((ExampleUI_t2552997442A7324DD508292D6911E8AA0B7A12DD_StaticFields*)il2cpp_codegen_static_fields_for(ExampleUI_t2552997442A7324DD508292D6911E8AA0B7A12DD_il2cpp_TypeInfo_var))->___allImgEffectsStatus_13;
		((ExampleUI_t2552997442A7324DD508292D6911E8AA0B7A12DD_StaticFields*)il2cpp_codegen_static_fields_for(ExampleUI_t2552997442A7324DD508292D6911E8AA0B7A12DD_il2cpp_TypeInfo_var))->___allImgEffectsStatus_13 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		// foreach (MonoBehaviour _img in currentCam.ImageEffectsList) {
		ExampleCam_tE2903697D96306F068D755E459E112ACFC122949* L_1 = __this->___currentCam_8;
		NullCheck(L_1);
		List_1_tCB9190A56C65FD59CE07C6A0EA71F30067A43D81* L_2 = L_1->___ImageEffectsList_5;
		NullCheck(L_2);
		Enumerator_t07C2E5693B034463FB920742E4CC32D19677F76F L_3;
		L_3 = List_1_GetEnumerator_m6634056FE8223F5FBF4B35F680857B49FA138DC2(L_2, List_1_GetEnumerator_m6634056FE8223F5FBF4B35F680857B49FA138DC2_RuntimeMethod_var);
		V_0 = L_3;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_003c:
			{// begin finally (depth: 1)
				Enumerator_Dispose_mA18455211C51A1DBF839683A9A405FFB3E51EE32((&V_0), Enumerator_Dispose_mA18455211C51A1DBF839683A9A405FFB3E51EE32_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0031_1;
			}

IL_0020_1:
			{
				// foreach (MonoBehaviour _img in currentCam.ImageEffectsList) {
				MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* L_4;
				L_4 = Enumerator_get_Current_m677B6DAF16A498C87390EB1D8491F59DC1225A64_inline((&V_0), Enumerator_get_Current_m677B6DAF16A498C87390EB1D8491F59DC1225A64_RuntimeMethod_var);
				// _img.enabled = allImgEffectsStatus;
				il2cpp_codegen_runtime_class_init_inline(ExampleUI_t2552997442A7324DD508292D6911E8AA0B7A12DD_il2cpp_TypeInfo_var);
				bool L_5 = ((ExampleUI_t2552997442A7324DD508292D6911E8AA0B7A12DD_StaticFields*)il2cpp_codegen_static_fields_for(ExampleUI_t2552997442A7324DD508292D6911E8AA0B7A12DD_il2cpp_TypeInfo_var))->___allImgEffectsStatus_13;
				NullCheck(L_4);
				Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_4, L_5, NULL);
			}

IL_0031_1:
			{
				// foreach (MonoBehaviour _img in currentCam.ImageEffectsList) {
				bool L_6;
				L_6 = Enumerator_MoveNext_m7F890D387B8294FF405777D929F894DF8863409F((&V_0), Enumerator_MoveNext_m7F890D387B8294FF405777D929F894DF8863409F_RuntimeMethod_var);
				if (L_6)
				{
					goto IL_0020_1;
				}
			}
			{
				goto IL_004a;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_004a:
	{
		// if (audioSource && audioSource.enabled)
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_7 = __this->___audioSource_16;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_8;
		L_8 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_7, NULL);
		if (!L_8)
		{
			goto IL_006f;
		}
	}
	{
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_9 = __this->___audioSource_16;
		NullCheck(L_9);
		bool L_10;
		L_10 = Behaviour_get_enabled_mAAC9F15E9EBF552217A5AE2681589CC0BFA300C1(L_9, NULL);
		if (!L_10)
		{
			goto IL_006f;
		}
	}
	{
		// audioSource.Play();
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_11 = __this->___audioSource_16;
		NullCheck(L_11);
		AudioSource_Play_m95DF07111C61D0E0F00257A00384D31531D590C3(L_11, NULL);
	}

IL_006f:
	{
		// }
		return;
	}
}
// System.Void ExampleUI::DoSwitchAnimDelays()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExampleUI_DoSwitchAnimDelays_mFC4254874E921E131D25B909FFBEDD38194546AA (ExampleUI_t2552997442A7324DD508292D6911E8AA0B7A12DD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExampleUI_t2552997442A7324DD508292D6911E8AA0B7A12DD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	InterfaceAnimManagerU5BU5D_tB99A76DFD85996ED124AE4892004922F617EF797* V_0 = NULL;
	int32_t V_1 = 0;
	{
		// allDelaysStatus = !allDelaysStatus;
		il2cpp_codegen_runtime_class_init_inline(ExampleUI_t2552997442A7324DD508292D6911E8AA0B7A12DD_il2cpp_TypeInfo_var);
		bool L_0 = ((ExampleUI_t2552997442A7324DD508292D6911E8AA0B7A12DD_StaticFields*)il2cpp_codegen_static_fields_for(ExampleUI_t2552997442A7324DD508292D6911E8AA0B7A12DD_il2cpp_TypeInfo_var))->___allDelaysStatus_12;
		((ExampleUI_t2552997442A7324DD508292D6911E8AA0B7A12DD_StaticFields*)il2cpp_codegen_static_fields_for(ExampleUI_t2552997442A7324DD508292D6911E8AA0B7A12DD_il2cpp_TypeInfo_var))->___allDelaysStatus_12 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		// foreach (InterfaceAnimManager ia in holoInterfaceList) {
		InterfaceAnimManagerU5BU5D_tB99A76DFD85996ED124AE4892004922F617EF797* L_1 = __this->___holoInterfaceList_7;
		V_0 = L_1;
		V_1 = 0;
		goto IL_0029;
	}

IL_0018:
	{
		// foreach (InterfaceAnimManager ia in holoInterfaceList) {
		InterfaceAnimManagerU5BU5D_tB99A76DFD85996ED124AE4892004922F617EF797* L_2 = V_0;
		int32_t L_3 = V_1;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		InterfaceAnimManager_t55019D504BEA6534494FED15C7945911CE850962* L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		// ia.useDelays = allDelaysStatus;
		il2cpp_codegen_runtime_class_init_inline(ExampleUI_t2552997442A7324DD508292D6911E8AA0B7A12DD_il2cpp_TypeInfo_var);
		bool L_6 = ((ExampleUI_t2552997442A7324DD508292D6911E8AA0B7A12DD_StaticFields*)il2cpp_codegen_static_fields_for(ExampleUI_t2552997442A7324DD508292D6911E8AA0B7A12DD_il2cpp_TypeInfo_var))->___allDelaysStatus_12;
		NullCheck(L_5);
		L_5->___useDelays_16 = L_6;
		int32_t L_7 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_7, 1));
	}

IL_0029:
	{
		// foreach (InterfaceAnimManager ia in holoInterfaceList) {
		int32_t L_8 = V_1;
		InterfaceAnimManagerU5BU5D_tB99A76DFD85996ED124AE4892004922F617EF797* L_9 = V_0;
		NullCheck(L_9);
		if ((((int32_t)L_8) < ((int32_t)((int32_t)(((RuntimeArray*)L_9)->max_length)))))
		{
			goto IL_0018;
		}
	}
	{
		// if (audioSource && audioSource.enabled)
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_10 = __this->___audioSource_16;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_11;
		L_11 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_10, NULL);
		if (!L_11)
		{
			goto IL_0054;
		}
	}
	{
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_12 = __this->___audioSource_16;
		NullCheck(L_12);
		bool L_13;
		L_13 = Behaviour_get_enabled_mAAC9F15E9EBF552217A5AE2681589CC0BFA300C1(L_12, NULL);
		if (!L_13)
		{
			goto IL_0054;
		}
	}
	{
		// audioSource.Play();
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_14 = __this->___audioSource_16;
		NullCheck(L_14);
		AudioSource_Play_m95DF07111C61D0E0F00257A00384D31531D590C3(L_14, NULL);
	}

IL_0054:
	{
		// }
		return;
	}
}
// System.Void ExampleUI::DoAppear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExampleUI_DoAppear_m3B46AD79296DFBB15811D5766D169AE03B16276B (ExampleUI_t2552997442A7324DD508292D6911E8AA0B7A12DD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (current) {
		InterfaceAnimManager_t55019D504BEA6534494FED15C7945911CE850962* L_0 = __this->___current_5;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_0, NULL);
		if (!L_1)
		{
			goto IL_002a;
		}
	}
	{
		// current.startAppear();
		InterfaceAnimManager_t55019D504BEA6534494FED15C7945911CE850962* L_2 = __this->___current_5;
		NullCheck(L_2);
		VirtualActionInvoker1< bool >::Invoke(4 /* System.Void InterfaceAnimManager::startAppear(System.Boolean) */, L_2, (bool)0);
		// current.gameObject.SetActive(true);
		InterfaceAnimManager_t55019D504BEA6534494FED15C7945911CE850962* L_3 = __this->___current_5;
		NullCheck(L_3);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4;
		L_4 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_3, NULL);
		NullCheck(L_4);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_4, (bool)1, NULL);
	}

IL_002a:
	{
		// playSound();
		ExampleUI_playSound_m63D0775EB9BD539874C46D2DB4CD5AD6475B0EEA(__this, NULL);
		// }
		return;
	}
}
// System.Void ExampleUI::DoDisappear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExampleUI_DoDisappear_m428F46E0364B61966DF156FB222F7C3B13C544C9 (ExampleUI_t2552997442A7324DD508292D6911E8AA0B7A12DD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (current)
		InterfaceAnimManager_t55019D504BEA6534494FED15C7945911CE850962* L_0 = __this->___current_5;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_0, NULL);
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		// current.startDisappear();
		InterfaceAnimManager_t55019D504BEA6534494FED15C7945911CE850962* L_2 = __this->___current_5;
		NullCheck(L_2);
		VirtualActionInvoker1< bool >::Invoke(5 /* System.Void InterfaceAnimManager::startDisappear(System.Boolean) */, L_2, (bool)0);
	}

IL_0019:
	{
		// playSound();
		ExampleUI_playSound_m63D0775EB9BD539874C46D2DB4CD5AD6475B0EEA(__this, NULL);
		// }
		return;
	}
}
// System.Void ExampleUI::DoNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExampleUI_DoNext_mBDB629F30DC0D5151BCC0C9C3DBA6CF852412C79 (ExampleUI_t2552997442A7324DD508292D6911E8AA0B7A12DD* __this, const RuntimeMethod* method) 
{
	{
		// indexInterface++;
		int32_t L_0 = __this->___indexInterface_6;
		__this->___indexInterface_6 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		// if (indexInterface >= holoInterfaceList.Length)
		int32_t L_1 = __this->___indexInterface_6;
		InterfaceAnimManagerU5BU5D_tB99A76DFD85996ED124AE4892004922F617EF797* L_2 = __this->___holoInterfaceList_7;
		NullCheck(L_2);
		if ((((int32_t)L_1) < ((int32_t)((int32_t)(((RuntimeArray*)L_2)->max_length)))))
		{
			goto IL_0025;
		}
	}
	{
		// indexInterface = 0;
		__this->___indexInterface_6 = 0;
	}

IL_0025:
	{
		// playSound();
		ExampleUI_playSound_m63D0775EB9BD539874C46D2DB4CD5AD6475B0EEA(__this, NULL);
		// CallInterface(holoInterfaceList[indexInterface]);
		InterfaceAnimManagerU5BU5D_tB99A76DFD85996ED124AE4892004922F617EF797* L_3 = __this->___holoInterfaceList_7;
		int32_t L_4 = __this->___indexInterface_6;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		InterfaceAnimManager_t55019D504BEA6534494FED15C7945911CE850962* L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		ExampleUI_CallInterface_m0073B9DD8EB274AFC1F7BDDDE29E69E8AFB360D8(__this, L_6, NULL);
		// }
		return;
	}
}
// System.Void ExampleUI::DoPrevious()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExampleUI_DoPrevious_mF1A4B106012355B65F24B7E4D29A98776E0C67BA (ExampleUI_t2552997442A7324DD508292D6911E8AA0B7A12DD* __this, const RuntimeMethod* method) 
{
	{
		// indexInterface--;
		int32_t L_0 = __this->___indexInterface_6;
		__this->___indexInterface_6 = ((int32_t)il2cpp_codegen_subtract(L_0, 1));
		// if (indexInterface < 0)
		int32_t L_1 = __this->___indexInterface_6;
		if ((((int32_t)L_1) >= ((int32_t)0)))
		{
			goto IL_0027;
		}
	}
	{
		// indexInterface = holoInterfaceList.Length - 1;
		InterfaceAnimManagerU5BU5D_tB99A76DFD85996ED124AE4892004922F617EF797* L_2 = __this->___holoInterfaceList_7;
		NullCheck(L_2);
		__this->___indexInterface_6 = ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_2)->max_length)), 1));
	}

IL_0027:
	{
		// playSound();
		ExampleUI_playSound_m63D0775EB9BD539874C46D2DB4CD5AD6475B0EEA(__this, NULL);
		// CallInterface(holoInterfaceList[indexInterface]);
		InterfaceAnimManagerU5BU5D_tB99A76DFD85996ED124AE4892004922F617EF797* L_3 = __this->___holoInterfaceList_7;
		int32_t L_4 = __this->___indexInterface_6;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		InterfaceAnimManager_t55019D504BEA6534494FED15C7945911CE850962* L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		ExampleUI_CallInterface_m0073B9DD8EB274AFC1F7BDDDE29E69E8AFB360D8(__this, L_6, NULL);
		// }
		return;
	}
}
// System.Void ExampleUI::CallInterface(InterfaceAnimManager)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExampleUI_CallInterface_m0073B9DD8EB274AFC1F7BDDDE29E69E8AFB360D8 (ExampleUI_t2552997442A7324DD508292D6911E8AA0B7A12DD* __this, InterfaceAnimManager_t55019D504BEA6534494FED15C7945911CE850962* ____interface0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (current)
		InterfaceAnimManager_t55019D504BEA6534494FED15C7945911CE850962* L_0 = __this->___current_5;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_0, NULL);
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		// current.startDisappear(true);
		InterfaceAnimManager_t55019D504BEA6534494FED15C7945911CE850962* L_2 = __this->___current_5;
		NullCheck(L_2);
		VirtualActionInvoker1< bool >::Invoke(5 /* System.Void InterfaceAnimManager::startDisappear(System.Boolean) */, L_2, (bool)1);
	}

IL_0019:
	{
		// current = _interface;
		InterfaceAnimManager_t55019D504BEA6534494FED15C7945911CE850962* L_3 = ____interface0;
		__this->___current_5 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___current_5), (void*)L_3);
		// if (_interface) {
		InterfaceAnimManager_t55019D504BEA6534494FED15C7945911CE850962* L_4 = ____interface0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_4, NULL);
		if (!L_5)
		{
			goto IL_004b;
		}
	}
	{
		// current.gameObject.SetActive(true);
		InterfaceAnimManager_t55019D504BEA6534494FED15C7945911CE850962* L_6 = __this->___current_5;
		NullCheck(L_6);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7;
		L_7 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_6, NULL);
		NullCheck(L_7);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_7, (bool)1, NULL);
		// current.startAppear();
		InterfaceAnimManager_t55019D504BEA6534494FED15C7945911CE850962* L_8 = __this->___current_5;
		NullCheck(L_8);
		VirtualActionInvoker1< bool >::Invoke(4 /* System.Void InterfaceAnimManager::startAppear(System.Boolean) */, L_8, (bool)0);
		// UpdateDisplayedInfo();
		ExampleUI_UpdateDisplayedInfo_mCAF19F6090990ACFD0BC69355079BA41B58A70DE(__this, NULL);
	}

IL_004b:
	{
		// }
		return;
	}
}
// System.Void ExampleUI::UpdateDisplayedInfo()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExampleUI_UpdateDisplayedInfo_mCAF19F6090990ACFD0BC69355079BA41B58A70DE (ExampleUI_t2552997442A7324DD508292D6911E8AA0B7A12DD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (current) {
		InterfaceAnimManager_t55019D504BEA6534494FED15C7945911CE850962* L_0 = __this->___current_5;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_0, NULL);
		if (!L_1)
		{
			goto IL_0029;
		}
	}
	{
		// displayedName.text = current.name.ToString();
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_2 = __this->___displayedName_4;
		InterfaceAnimManager_t55019D504BEA6534494FED15C7945911CE850962* L_3 = __this->___current_5;
		NullCheck(L_3);
		String_t* L_4;
		L_4 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_3, NULL);
		NullCheck(L_4);
		String_t* L_5;
		L_5 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_4);
		NullCheck(L_2);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_2, L_5);
		return;
	}

IL_0029:
	{
		// displayedName.text = "";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_6 = __this->___displayedName_4;
		NullCheck(L_6);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_6, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		// }
		return;
	}
}
// System.Void ExampleUI::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExampleUI__ctor_m3034E01E85E485F5B0C995BCCB628D3810DDBF4C (ExampleUI_t2552997442A7324DD508292D6911E8AA0B7A12DD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0B3032563D7F48BC213DA513440D309E9CFA808E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6957900861F7977D1CDA82ABF673F6EB04260D16);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public string searchTarget = "HoloInterfaces";
		__this->___searchTarget_9 = _stringLiteral6957900861F7977D1CDA82ABF673F6EB04260D16;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___searchTarget_9), (void*)_stringLiteral6957900861F7977D1CDA82ABF673F6EB04260D16);
		// public string searchCam = "currentCam";
		__this->___searchCam_10 = _stringLiteral0B3032563D7F48BC213DA513440D309E9CFA808E;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___searchCam_10), (void*)_stringLiteral0B3032563D7F48BC213DA513440D309E9CFA808E);
		// public List<string> loadableScenes = new List<string>();
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_0 = (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*)il2cpp_codegen_object_new(List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E(L_0, List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var);
		__this->___loadableScenes_14 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___loadableScenes_14), (void*)L_0);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
// System.Void ExampleUI::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExampleUI__cctor_mBD7267B95A9A684A2D665A1D5FD6756D9582C798 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExampleUI_t2552997442A7324DD508292D6911E8AA0B7A12DD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static bool allDelaysStatus = true;
		((ExampleUI_t2552997442A7324DD508292D6911E8AA0B7A12DD_StaticFields*)il2cpp_codegen_static_fields_for(ExampleUI_t2552997442A7324DD508292D6911E8AA0B7A12DD_il2cpp_TypeInfo_var))->___allDelaysStatus_12 = (bool)1;
		// private static bool allImgEffectsStatus = true;
		((ExampleUI_t2552997442A7324DD508292D6911E8AA0B7A12DD_StaticFields*)il2cpp_codegen_static_fields_for(ExampleUI_t2552997442A7324DD508292D6911E8AA0B7A12DD_il2cpp_TypeInfo_var))->___allImgEffectsStatus_13 = (bool)1;
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
// System.Void ExcelsiorUtils::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExcelsiorUtils_Start_m6068893A3E274C6E1F04DB665BE34077E0AB4297 (ExcelsiorUtils_t7265AB93B70A2112C8F6317B6E3AEFBD6612858F* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void ExcelsiorUtils::playSound()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExcelsiorUtils_playSound_mAF781739329BAC69026207F4A008BB1EFCEA5803 (ExcelsiorUtils_t7265AB93B70A2112C8F6317B6E3AEFBD6612858F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (audioSource && audioSource.enabled)
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_0 = __this->___audioSource_5;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_0, NULL);
		if (!L_1)
		{
			goto IL_002b;
		}
	}
	{
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_2 = __this->___audioSource_5;
		NullCheck(L_2);
		bool L_3;
		L_3 = Behaviour_get_enabled_mAAC9F15E9EBF552217A5AE2681589CC0BFA300C1(L_2, NULL);
		if (!L_3)
		{
			goto IL_002b;
		}
	}
	{
		// audioSource.clip = audioClip;
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_4 = __this->___audioSource_5;
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_5 = __this->___audioClip_6;
		NullCheck(L_4);
		AudioSource_set_clip_mFF441895E274286C88D9C75ED5CA1B1B39528D70(L_4, L_5, NULL);
	}

IL_002b:
	{
		// audioSource.Play();
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_6 = __this->___audioSource_5;
		NullCheck(L_6);
		AudioSource_Play_m95DF07111C61D0E0F00257A00384D31531D590C3(L_6, NULL);
		// }
		return;
	}
}
// System.Void ExcelsiorUtils::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExcelsiorUtils_Update_m1022AF7D62DB40C00D942F4F80FE09B95773C492 (ExcelsiorUtils_t7265AB93B70A2112C8F6317B6E3AEFBD6612858F* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void ExcelsiorUtils::SetPosition(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExcelsiorUtils_SetPosition_m885524ED910BFF08D39962E9348BBFB70B3E95E0 (ExcelsiorUtils_t7265AB93B70A2112C8F6317B6E3AEFBD6612858F* __this, int32_t ____scaleValue0, const RuntimeMethod* method) 
{
	{
		// target.transform.position = Vector3.one * _scaleValue;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___target_4;
		NullCheck(L_0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_0, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Vector3_get_one_mE6A2D5C6578E94268024613B596BF09F990B1260_inline(NULL);
		int32_t L_3 = ____scaleValue0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_2, ((float)L_3), NULL);
		NullCheck(L_1);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_1, L_4, NULL);
		// playSound();
		ExcelsiorUtils_playSound_mAF781739329BAC69026207F4A008BB1EFCEA5803(__this, NULL);
		// }
		return;
	}
}
// System.Void ExcelsiorUtils::SetPositionAndScaleTo(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExcelsiorUtils_SetPositionAndScaleTo_m4DB343D2DAF264996DF2920A05E09A70870BC6AE (ExcelsiorUtils_t7265AB93B70A2112C8F6317B6E3AEFBD6612858F* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ____object0, const RuntimeMethod* method) 
{
	{
		// target.transform.localPosition = _object.transform.localPosition * -1;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___target_4;
		NullCheck(L_0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_0, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = ____object0;
		NullCheck(L_2);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_2, NULL);
		NullCheck(L_3);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95(L_3, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_4, (-1.0f), NULL);
		NullCheck(L_1);
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_1, L_5, NULL);
		// target.transform.localScale = _object.transform.localScale;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6 = __this->___target_4;
		NullCheck(L_6);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7;
		L_7 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_6, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8 = ____object0;
		NullCheck(L_8);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9;
		L_9 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_8, NULL);
		NullCheck(L_9);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F(L_9, NULL);
		NullCheck(L_7);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_7, L_10, NULL);
		// playSound();
		ExcelsiorUtils_playSound_mAF781739329BAC69026207F4A008BB1EFCEA5803(__this, NULL);
		// }
		return;
	}
}
// System.Void ExcelsiorUtils::SetUniformScale(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExcelsiorUtils_SetUniformScale_m61DD0CAF85993549BD0EDE45D2E9A6C92F18F022 (ExcelsiorUtils_t7265AB93B70A2112C8F6317B6E3AEFBD6612858F* __this, int32_t ____scaleValue0, const RuntimeMethod* method) 
{
	{
		// target.transform.localScale = Vector3.one * _scaleValue;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___target_4;
		NullCheck(L_0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_0, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Vector3_get_one_mE6A2D5C6578E94268024613B596BF09F990B1260_inline(NULL);
		int32_t L_3 = ____scaleValue0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_2, ((float)L_3), NULL);
		NullCheck(L_1);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_1, L_4, NULL);
		// playSound();
		ExcelsiorUtils_playSound_mAF781739329BAC69026207F4A008BB1EFCEA5803(__this, NULL);
		// }
		return;
	}
}
// System.Void ExcelsiorUtils::SetUniformWidthHeight(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExcelsiorUtils_SetUniformWidthHeight_m8E9055FACAE8E542BF1D823347E3C84D4F907BD2 (ExcelsiorUtils_t7265AB93B70A2112C8F6317B6E3AEFBD6612858F* __this, int32_t ____widthHeightValue0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// target.GetComponent<Image>().rectTransform.sizeDelta = Vector3.one * _widthHeightValue;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___target_4;
		NullCheck(L_0);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_1;
		L_1 = GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D(L_0, GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var);
		NullCheck(L_1);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_2;
		L_2 = Graphic_get_rectTransform_mF4752E8934267D630810E84CE02CDFB81EB1FD6D(L_1, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Vector3_get_one_mE6A2D5C6578E94268024613B596BF09F990B1260_inline(NULL);
		int32_t L_4 = ____widthHeightValue0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_3, ((float)L_4), NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6;
		L_6 = Vector2_op_Implicit_m8F73B300CB4E6F9B4EB5FB6130363D76CEAA230B_inline(L_5, NULL);
		NullCheck(L_2);
		RectTransform_set_sizeDelta_mC9A980EA6036E6725EF24CEDF3EE80A9B2B50EE5(L_2, L_6, NULL);
		// playSound();
		ExcelsiorUtils_playSound_mAF781739329BAC69026207F4A008BB1EFCEA5803(__this, NULL);
		// }
		return;
	}
}
// System.Void ExcelsiorUtils::SetImageColor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExcelsiorUtils_SetImageColor_m37AD966C47131D31E53461C603E7E4A0CD2CF96C (ExcelsiorUtils_t7265AB93B70A2112C8F6317B6E3AEFBD6612858F* __this, int32_t ____colorID0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ____colorID0;
		if ((((int32_t)L_0) == ((int32_t)1)))
		{
			goto IL_000a;
		}
	}
	{
		int32_t L_1 = ____colorID0;
		if ((((int32_t)L_1) == ((int32_t)2)))
		{
			goto IL_0017;
		}
	}
	{
		goto IL_0024;
	}

IL_000a:
	{
		// _color = Color.blue;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_2;
		L_2 = Color_get_blue_m0D04554379CB8606EF48E3091CDC3098B81DD86D_inline(NULL);
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_3;
		L_3 = Color32_op_Implicit_m7EFA0B83AD1AE15567E9BC2FA2B8E66D3BFE1395_inline(L_2, NULL);
		V_0 = L_3;
		// break;
		goto IL_002f;
	}

IL_0017:
	{
		// _color = Color.red;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_4;
		L_4 = Color_get_red_m27D04C1E5FE794AD933B7B9364F3D34B9EA25109_inline(NULL);
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_5;
		L_5 = Color32_op_Implicit_m7EFA0B83AD1AE15567E9BC2FA2B8E66D3BFE1395_inline(L_4, NULL);
		V_0 = L_5;
		// break;
		goto IL_002f;
	}

IL_0024:
	{
		// _color = Color.yellow;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_6;
		L_6 = Color_get_yellow_m1EF7276EF58050DFBA8921E2383F0249C08D346F_inline(NULL);
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_7;
		L_7 = Color32_op_Implicit_m7EFA0B83AD1AE15567E9BC2FA2B8E66D3BFE1395_inline(L_6, NULL);
		V_0 = L_7;
	}

IL_002f:
	{
		// target.GetComponent<Image>().color = _color;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8 = __this->___target_4;
		NullCheck(L_8);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_9;
		L_9 = GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D(L_8, GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var);
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_10 = V_0;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_11;
		L_11 = Color32_op_Implicit_m203A634DBB77053C9400C68065CA29529103D172_inline(L_10, NULL);
		NullCheck(L_9);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_9, L_11);
		// playSound();
		ExcelsiorUtils_playSound_mAF781739329BAC69026207F4A008BB1EFCEA5803(__this, NULL);
		// }
		return;
	}
}
// System.Void ExcelsiorUtils::OpenWebPage()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExcelsiorUtils_OpenWebPage_m12A900AAF4793BFE9BF687145C33E3E30F5765D5 (ExcelsiorUtils_t7265AB93B70A2112C8F6317B6E3AEFBD6612858F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral95417BB144D92ED80AA7984A95BB5A1895FB8332);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Application.OpenURL("http://www.assetstore.unity3d.com/#!/content/69794");
		Application_OpenURL_m9F74228B576891156330C84B72218C08BEB9F564(_stringLiteral95417BB144D92ED80AA7984A95BB5A1895FB8332, NULL);
		// playSound();
		ExcelsiorUtils_playSound_mAF781739329BAC69026207F4A008BB1EFCEA5803(__this, NULL);
		// }
		return;
	}
}
// System.Void ExcelsiorUtils::GetSliderValue_ToText()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExcelsiorUtils_GetSliderValue_ToText_mFBF54132EC98E5B9E2C54ED38E9E6B65981294DD (ExcelsiorUtils_t7265AB93B70A2112C8F6317B6E3AEFBD6612858F* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		// textContent.text = slider.value.ToString();
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_0 = __this->___textContent_7;
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_1 = __this->___slider_8;
		NullCheck(L_1);
		float L_2;
		L_2 = VirtualFuncInvoker0< float >::Invoke(46 /* System.Single UnityEngine.UI.Slider::get_value() */, L_1);
		V_0 = L_2;
		String_t* L_3;
		L_3 = Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972((&V_0), NULL);
		NullCheck(L_0);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, L_3);
		// }
		return;
	}
}
// System.Void ExcelsiorUtils::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExcelsiorUtils__ctor_mBF251E34914062E3C998534226200DABA1CEEEAB (ExcelsiorUtils_t7265AB93B70A2112C8F6317B6E3AEFBD6612858F* __this, const RuntimeMethod* method) 
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
void IAM_StartAppear_Invoke_mE1E254F41FB1A54066D9E77D96B62B9EC5600BE6_Multicast(IAM_StartAppear_t45F8AF6D25B9B8F63ED671D6461EF06AFBDEACDC* __this, InterfaceAnimManager_t55019D504BEA6534494FED15C7945911CE850962* ____IAM0, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		IAM_StartAppear_t45F8AF6D25B9B8F63ED671D6461EF06AFBDEACDC* currentDelegate = reinterpret_cast<IAM_StartAppear_t45F8AF6D25B9B8F63ED671D6461EF06AFBDEACDC*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, InterfaceAnimManager_t55019D504BEA6534494FED15C7945911CE850962*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ____IAM0, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void IAM_StartAppear_Invoke_mE1E254F41FB1A54066D9E77D96B62B9EC5600BE6_Open(IAM_StartAppear_t45F8AF6D25B9B8F63ED671D6461EF06AFBDEACDC* __this, InterfaceAnimManager_t55019D504BEA6534494FED15C7945911CE850962* ____IAM0, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (InterfaceAnimManager_t55019D504BEA6534494FED15C7945911CE850962*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(____IAM0, method);
}
void IAM_StartAppear_Invoke_mE1E254F41FB1A54066D9E77D96B62B9EC5600BE6_OpenStaticInvoker(IAM_StartAppear_t45F8AF6D25B9B8F63ED671D6461EF06AFBDEACDC* __this, InterfaceAnimManager_t55019D504BEA6534494FED15C7945911CE850962* ____IAM0, const RuntimeMethod* method)
{
	InvokerActionInvoker1< InterfaceAnimManager_t55019D504BEA6534494FED15C7945911CE850962* >::Invoke(__this->___method_ptr_0, method, NULL, ____IAM0);
}
void IAM_StartAppear_Invoke_mE1E254F41FB1A54066D9E77D96B62B9EC5600BE6_ClosedStaticInvoker(IAM_StartAppear_t45F8AF6D25B9B8F63ED671D6461EF06AFBDEACDC* __this, InterfaceAnimManager_t55019D504BEA6534494FED15C7945911CE850962* ____IAM0, const RuntimeMethod* method)
{
	InvokerActionInvoker2< RuntimeObject*, InterfaceAnimManager_t55019D504BEA6534494FED15C7945911CE850962* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ____IAM0);
}
void IAM_StartAppear_Invoke_mE1E254F41FB1A54066D9E77D96B62B9EC5600BE6_OpenVirtual(IAM_StartAppear_t45F8AF6D25B9B8F63ED671D6461EF06AFBDEACDC* __this, InterfaceAnimManager_t55019D504BEA6534494FED15C7945911CE850962* ____IAM0, const RuntimeMethod* method)
{
	VirtualActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(method), ____IAM0);
}
void IAM_StartAppear_Invoke_mE1E254F41FB1A54066D9E77D96B62B9EC5600BE6_OpenInterface(IAM_StartAppear_t45F8AF6D25B9B8F63ED671D6461EF06AFBDEACDC* __this, InterfaceAnimManager_t55019D504BEA6534494FED15C7945911CE850962* ____IAM0, const RuntimeMethod* method)
{
	InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(method), il2cpp_codegen_method_get_declaring_type(method), ____IAM0);
}
void IAM_StartAppear_Invoke_mE1E254F41FB1A54066D9E77D96B62B9EC5600BE6_OpenGenericVirtual(IAM_StartAppear_t45F8AF6D25B9B8F63ED671D6461EF06AFBDEACDC* __this, InterfaceAnimManager_t55019D504BEA6534494FED15C7945911CE850962* ____IAM0, const RuntimeMethod* method)
{
	GenericVirtualActionInvoker0::Invoke(method, ____IAM0);
}
void IAM_StartAppear_Invoke_mE1E254F41FB1A54066D9E77D96B62B9EC5600BE6_OpenGenericInterface(IAM_StartAppear_t45F8AF6D25B9B8F63ED671D6461EF06AFBDEACDC* __this, InterfaceAnimManager_t55019D504BEA6534494FED15C7945911CE850962* ____IAM0, const RuntimeMethod* method)
{
	GenericInterfaceActionInvoker0::Invoke(method, ____IAM0);
}
// System.Void IAM_StartAppear::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IAM_StartAppear__ctor_m5241E3AC8F01228C378127519DCC13D701397E10 (IAM_StartAppear_t45F8AF6D25B9B8F63ED671D6461EF06AFBDEACDC* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 1;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&IAM_StartAppear_Invoke_mE1E254F41FB1A54066D9E77D96B62B9EC5600BE6_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&IAM_StartAppear_Invoke_mE1E254F41FB1A54066D9E77D96B62B9EC5600BE6_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&IAM_StartAppear_Invoke_mE1E254F41FB1A54066D9E77D96B62B9EC5600BE6_Open;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 0;
		if (isOpen)
		{
			if (__this->___method_is_virtual_12)
			{
				if (il2cpp_codegen_method_is_generic_instance_method((RuntimeMethod*)___method1))
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___method1))
						__this->___invoke_impl_1 = (intptr_t)&IAM_StartAppear_Invoke_mE1E254F41FB1A54066D9E77D96B62B9EC5600BE6_OpenGenericInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&IAM_StartAppear_Invoke_mE1E254F41FB1A54066D9E77D96B62B9EC5600BE6_OpenGenericVirtual;
				else
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___method1))
						__this->___invoke_impl_1 = (intptr_t)&IAM_StartAppear_Invoke_mE1E254F41FB1A54066D9E77D96B62B9EC5600BE6_OpenInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&IAM_StartAppear_Invoke_mE1E254F41FB1A54066D9E77D96B62B9EC5600BE6_OpenVirtual;
			}
			else
			{
				__this->___invoke_impl_1 = (intptr_t)&IAM_StartAppear_Invoke_mE1E254F41FB1A54066D9E77D96B62B9EC5600BE6_Open;
			}
		}
		else
		{
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&IAM_StartAppear_Invoke_mE1E254F41FB1A54066D9E77D96B62B9EC5600BE6_Multicast;
}
// System.Void IAM_StartAppear::Invoke(InterfaceAnimManager)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IAM_StartAppear_Invoke_mE1E254F41FB1A54066D9E77D96B62B9EC5600BE6 (IAM_StartAppear_t45F8AF6D25B9B8F63ED671D6461EF06AFBDEACDC* __this, InterfaceAnimManager_t55019D504BEA6534494FED15C7945911CE850962* ____IAM0, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, InterfaceAnimManager_t55019D504BEA6534494FED15C7945911CE850962*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ____IAM0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult IAM_StartAppear::BeginInvoke(InterfaceAnimManager,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* IAM_StartAppear_BeginInvoke_m1839E678071576075A62A70F80F6740C8EF479C7 (IAM_StartAppear_t45F8AF6D25B9B8F63ED671D6461EF06AFBDEACDC* __this, InterfaceAnimManager_t55019D504BEA6534494FED15C7945911CE850962* ____IAM0, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback1, RuntimeObject* ___object2, const RuntimeMethod* method) 
{
	void *__d_args[2] = {0};
	__d_args[0] = ____IAM0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void IAM_StartAppear::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IAM_StartAppear_EndInvoke_m26667EB06578542AD88DE91AA63A2DEFBB32318F (IAM_StartAppear_t45F8AF6D25B9B8F63ED671D6461EF06AFBDEACDC* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void IAM_StartDisappear_Invoke_m57D127B05389C3C7FED4EE458B6F58FF5FF597FC_Multicast(IAM_StartDisappear_tFBEC30F3C988FD6D617407114866A1D5FE174BFB* __this, InterfaceAnimManager_t55019D504BEA6534494FED15C7945911CE850962* ____IAM0, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		IAM_StartDisappear_tFBEC30F3C988FD6D617407114866A1D5FE174BFB* currentDelegate = reinterpret_cast<IAM_StartDisappear_tFBEC30F3C988FD6D617407114866A1D5FE174BFB*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, InterfaceAnimManager_t55019D504BEA6534494FED15C7945911CE850962*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ____IAM0, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void IAM_StartDisappear_Invoke_m57D127B05389C3C7FED4EE458B6F58FF5FF597FC_Open(IAM_StartDisappear_tFBEC30F3C988FD6D617407114866A1D5FE174BFB* __this, InterfaceAnimManager_t55019D504BEA6534494FED15C7945911CE850962* ____IAM0, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (InterfaceAnimManager_t55019D504BEA6534494FED15C7945911CE850962*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(____IAM0, method);
}
void IAM_StartDisappear_Invoke_m57D127B05389C3C7FED4EE458B6F58FF5FF597FC_OpenStaticInvoker(IAM_StartDisappear_tFBEC30F3C988FD6D617407114866A1D5FE174BFB* __this, InterfaceAnimManager_t55019D504BEA6534494FED15C7945911CE850962* ____IAM0, const RuntimeMethod* method)
{
	InvokerActionInvoker1< InterfaceAnimManager_t55019D504BEA6534494FED15C7945911CE850962* >::Invoke(__this->___method_ptr_0, method, NULL, ____IAM0);
}
void IAM_StartDisappear_Invoke_m57D127B05389C3C7FED4EE458B6F58FF5FF597FC_ClosedStaticInvoker(IAM_StartDisappear_tFBEC30F3C988FD6D617407114866A1D5FE174BFB* __this, InterfaceAnimManager_t55019D504BEA6534494FED15C7945911CE850962* ____IAM0, const RuntimeMethod* method)
{
	InvokerActionInvoker2< RuntimeObject*, InterfaceAnimManager_t55019D504BEA6534494FED15C7945911CE850962* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ____IAM0);
}
void IAM_StartDisappear_Invoke_m57D127B05389C3C7FED4EE458B6F58FF5FF597FC_OpenVirtual(IAM_StartDisappear_tFBEC30F3C988FD6D617407114866A1D5FE174BFB* __this, InterfaceAnimManager_t55019D504BEA6534494FED15C7945911CE850962* ____IAM0, const RuntimeMethod* method)
{
	VirtualActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(method), ____IAM0);
}
void IAM_StartDisappear_Invoke_m57D127B05389C3C7FED4EE458B6F58FF5FF597FC_OpenInterface(IAM_StartDisappear_tFBEC30F3C988FD6D617407114866A1D5FE174BFB* __this, InterfaceAnimManager_t55019D504BEA6534494FED15C7945911CE850962* ____IAM0, const RuntimeMethod* method)
{
	InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(method), il2cpp_codegen_method_get_declaring_type(method), ____IAM0);
}
void IAM_StartDisappear_Invoke_m57D127B05389C3C7FED4EE458B6F58FF5FF597FC_OpenGenericVirtual(IAM_StartDisappear_tFBEC30F3C988FD6D617407114866A1D5FE174BFB* __this, InterfaceAnimManager_t55019D504BEA6534494FED15C7945911CE850962* ____IAM0, const RuntimeMethod* method)
{
	GenericVirtualActionInvoker0::Invoke(method, ____IAM0);
}
void IAM_StartDisappear_Invoke_m57D127B05389C3C7FED4EE458B6F58FF5FF597FC_OpenGenericInterface(IAM_StartDisappear_tFBEC30F3C988FD6D617407114866A1D5FE174BFB* __this, InterfaceAnimManager_t55019D504BEA6534494FED15C7945911CE850962* ____IAM0, const RuntimeMethod* method)
{
	GenericInterfaceActionInvoker0::Invoke(method, ____IAM0);
}
// System.Void IAM_StartDisappear::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IAM_StartDisappear__ctor_m66CBCB5131678ACE096924FA8262C1CF6C5C0F18 (IAM_StartDisappear_tFBEC30F3C988FD6D617407114866A1D5FE174BFB* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 1;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&IAM_StartDisappear_Invoke_m57D127B05389C3C7FED4EE458B6F58FF5FF597FC_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&IAM_StartDisappear_Invoke_m57D127B05389C3C7FED4EE458B6F58FF5FF597FC_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&IAM_StartDisappear_Invoke_m57D127B05389C3C7FED4EE458B6F58FF5FF597FC_Open;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 0;
		if (isOpen)
		{
			if (__this->___method_is_virtual_12)
			{
				if (il2cpp_codegen_method_is_generic_instance_method((RuntimeMethod*)___method1))
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___method1))
						__this->___invoke_impl_1 = (intptr_t)&IAM_StartDisappear_Invoke_m57D127B05389C3C7FED4EE458B6F58FF5FF597FC_OpenGenericInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&IAM_StartDisappear_Invoke_m57D127B05389C3C7FED4EE458B6F58FF5FF597FC_OpenGenericVirtual;
				else
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___method1))
						__this->___invoke_impl_1 = (intptr_t)&IAM_StartDisappear_Invoke_m57D127B05389C3C7FED4EE458B6F58FF5FF597FC_OpenInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&IAM_StartDisappear_Invoke_m57D127B05389C3C7FED4EE458B6F58FF5FF597FC_OpenVirtual;
			}
			else
			{
				__this->___invoke_impl_1 = (intptr_t)&IAM_StartDisappear_Invoke_m57D127B05389C3C7FED4EE458B6F58FF5FF597FC_Open;
			}
		}
		else
		{
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&IAM_StartDisappear_Invoke_m57D127B05389C3C7FED4EE458B6F58FF5FF597FC_Multicast;
}
// System.Void IAM_StartDisappear::Invoke(InterfaceAnimManager)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IAM_StartDisappear_Invoke_m57D127B05389C3C7FED4EE458B6F58FF5FF597FC (IAM_StartDisappear_tFBEC30F3C988FD6D617407114866A1D5FE174BFB* __this, InterfaceAnimManager_t55019D504BEA6534494FED15C7945911CE850962* ____IAM0, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, InterfaceAnimManager_t55019D504BEA6534494FED15C7945911CE850962*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ____IAM0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult IAM_StartDisappear::BeginInvoke(InterfaceAnimManager,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* IAM_StartDisappear_BeginInvoke_mFD445FD2D2389443131A59F737EB4F9979E91EA6 (IAM_StartDisappear_tFBEC30F3C988FD6D617407114866A1D5FE174BFB* __this, InterfaceAnimManager_t55019D504BEA6534494FED15C7945911CE850962* ____IAM0, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback1, RuntimeObject* ___object2, const RuntimeMethod* method) 
{
	void *__d_args[2] = {0};
	__d_args[0] = ____IAM0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void IAM_StartDisappear::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IAM_StartDisappear_EndInvoke_mFFDEA7BA540AEC0F8695463F06E99E1BED6B3CCD (IAM_StartDisappear_tFBEC30F3C988FD6D617407114866A1D5FE174BFB* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void IAM_EndAppear_Invoke_mDE5B4D3BA0FB8B81B187247938B6C2191927DAD9_Multicast(IAM_EndAppear_t60802E44D1AB53A268000746AEAA403393EFE4C6* __this, InterfaceAnimManager_t55019D504BEA6534494FED15C7945911CE850962* ____IAM0, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		IAM_EndAppear_t60802E44D1AB53A268000746AEAA403393EFE4C6* currentDelegate = reinterpret_cast<IAM_EndAppear_t60802E44D1AB53A268000746AEAA403393EFE4C6*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, InterfaceAnimManager_t55019D504BEA6534494FED15C7945911CE850962*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ____IAM0, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void IAM_EndAppear_Invoke_mDE5B4D3BA0FB8B81B187247938B6C2191927DAD9_Open(IAM_EndAppear_t60802E44D1AB53A268000746AEAA403393EFE4C6* __this, InterfaceAnimManager_t55019D504BEA6534494FED15C7945911CE850962* ____IAM0, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (InterfaceAnimManager_t55019D504BEA6534494FED15C7945911CE850962*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(____IAM0, method);
}
void IAM_EndAppear_Invoke_mDE5B4D3BA0FB8B81B187247938B6C2191927DAD9_OpenStaticInvoker(IAM_EndAppear_t60802E44D1AB53A268000746AEAA403393EFE4C6* __this, InterfaceAnimManager_t55019D504BEA6534494FED15C7945911CE850962* ____IAM0, const RuntimeMethod* method)
{
	InvokerActionInvoker1< InterfaceAnimManager_t55019D504BEA6534494FED15C7945911CE850962* >::Invoke(__this->___method_ptr_0, method, NULL, ____IAM0);
}
void IAM_EndAppear_Invoke_mDE5B4D3BA0FB8B81B187247938B6C2191927DAD9_ClosedStaticInvoker(IAM_EndAppear_t60802E44D1AB53A268000746AEAA403393EFE4C6* __this, InterfaceAnimManager_t55019D504BEA6534494FED15C7945911CE850962* ____IAM0, const RuntimeMethod* method)
{
	InvokerActionInvoker2< RuntimeObject*, InterfaceAnimManager_t55019D504BEA6534494FED15C7945911CE850962* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ____IAM0);
}
void IAM_EndAppear_Invoke_mDE5B4D3BA0FB8B81B187247938B6C2191927DAD9_OpenVirtual(IAM_EndAppear_t60802E44D1AB53A268000746AEAA403393EFE4C6* __this, InterfaceAnimManager_t55019D504BEA6534494FED15C7945911CE850962* ____IAM0, const RuntimeMethod* method)
{
	VirtualActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(method), ____IAM0);
}
void IAM_EndAppear_Invoke_mDE5B4D3BA0FB8B81B187247938B6C2191927DAD9_OpenInterface(IAM_EndAppear_t60802E44D1AB53A268000746AEAA403393EFE4C6* __this, InterfaceAnimManager_t55019D504BEA6534494FED15C7945911CE850962* ____IAM0, const RuntimeMethod* method)
{
	InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(method), il2cpp_codegen_method_get_declaring_type(method), ____IAM0);
}
void IAM_EndAppear_Invoke_mDE5B4D3BA0FB8B81B187247938B6C2191927DAD9_OpenGenericVirtual(IAM_EndAppear_t60802E44D1AB53A268000746AEAA403393EFE4C6* __this, InterfaceAnimManager_t55019D504BEA6534494FED15C7945911CE850962* ____IAM0, const RuntimeMethod* method)
{
	GenericVirtualActionInvoker0::Invoke(method, ____IAM0);
}
void IAM_EndAppear_Invoke_mDE5B4D3BA0FB8B81B187247938B6C2191927DAD9_OpenGenericInterface(IAM_EndAppear_t60802E44D1AB53A268000746AEAA403393EFE4C6* __this, InterfaceAnimManager_t55019D504BEA6534494FED15C7945911CE850962* ____IAM0, const RuntimeMethod* method)
{
	GenericInterfaceActionInvoker0::Invoke(method, ____IAM0);
}
// System.Void IAM_EndAppear::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IAM_EndAppear__ctor_m7892297E28776607E2CBC89F01E388DA4D9AFA2C (IAM_EndAppear_t60802E44D1AB53A268000746AEAA403393EFE4C6* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 1;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&IAM_EndAppear_Invoke_mDE5B4D3BA0FB8B81B187247938B6C2191927DAD9_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&IAM_EndAppear_Invoke_mDE5B4D3BA0FB8B81B187247938B6C2191927DAD9_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&IAM_EndAppear_Invoke_mDE5B4D3BA0FB8B81B187247938B6C2191927DAD9_Open;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 0;
		if (isOpen)
		{
			if (__this->___method_is_virtual_12)
			{
				if (il2cpp_codegen_method_is_generic_instance_method((RuntimeMethod*)___method1))
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___method1))
						__this->___invoke_impl_1 = (intptr_t)&IAM_EndAppear_Invoke_mDE5B4D3BA0FB8B81B187247938B6C2191927DAD9_OpenGenericInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&IAM_EndAppear_Invoke_mDE5B4D3BA0FB8B81B187247938B6C2191927DAD9_OpenGenericVirtual;
				else
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___method1))
						__this->___invoke_impl_1 = (intptr_t)&IAM_EndAppear_Invoke_mDE5B4D3BA0FB8B81B187247938B6C2191927DAD9_OpenInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&IAM_EndAppear_Invoke_mDE5B4D3BA0FB8B81B187247938B6C2191927DAD9_OpenVirtual;
			}
			else
			{
				__this->___invoke_impl_1 = (intptr_t)&IAM_EndAppear_Invoke_mDE5B4D3BA0FB8B81B187247938B6C2191927DAD9_Open;
			}
		}
		else
		{
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&IAM_EndAppear_Invoke_mDE5B4D3BA0FB8B81B187247938B6C2191927DAD9_Multicast;
}
// System.Void IAM_EndAppear::Invoke(InterfaceAnimManager)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IAM_EndAppear_Invoke_mDE5B4D3BA0FB8B81B187247938B6C2191927DAD9 (IAM_EndAppear_t60802E44D1AB53A268000746AEAA403393EFE4C6* __this, InterfaceAnimManager_t55019D504BEA6534494FED15C7945911CE850962* ____IAM0, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, InterfaceAnimManager_t55019D504BEA6534494FED15C7945911CE850962*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ____IAM0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult IAM_EndAppear::BeginInvoke(InterfaceAnimManager,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* IAM_EndAppear_BeginInvoke_m0FBC71776FD0ED8C7E75237F5AC1990123BB1D40 (IAM_EndAppear_t60802E44D1AB53A268000746AEAA403393EFE4C6* __this, InterfaceAnimManager_t55019D504BEA6534494FED15C7945911CE850962* ____IAM0, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback1, RuntimeObject* ___object2, const RuntimeMethod* method) 
{
	void *__d_args[2] = {0};
	__d_args[0] = ____IAM0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void IAM_EndAppear::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IAM_EndAppear_EndInvoke_m6C2CD7E5AA18CC2B3AFB1C693B289BC3D68ADF1E (IAM_EndAppear_t60802E44D1AB53A268000746AEAA403393EFE4C6* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void IAM_EndDisappear_Invoke_m905DCD487D9D03C665BE6B8F89CEEEDFCD47C381_Multicast(IAM_EndDisappear_t91F7B236FDF2A3FC74F13C5FD4987F95E8936663* __this, InterfaceAnimManager_t55019D504BEA6534494FED15C7945911CE850962* ____IAM0, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		IAM_EndDisappear_t91F7B236FDF2A3FC74F13C5FD4987F95E8936663* currentDelegate = reinterpret_cast<IAM_EndDisappear_t91F7B236FDF2A3FC74F13C5FD4987F95E8936663*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, InterfaceAnimManager_t55019D504BEA6534494FED15C7945911CE850962*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ____IAM0, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void IAM_EndDisappear_Invoke_m905DCD487D9D03C665BE6B8F89CEEEDFCD47C381_Open(IAM_EndDisappear_t91F7B236FDF2A3FC74F13C5FD4987F95E8936663* __this, InterfaceAnimManager_t55019D504BEA6534494FED15C7945911CE850962* ____IAM0, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (InterfaceAnimManager_t55019D504BEA6534494FED15C7945911CE850962*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(____IAM0, method);
}
void IAM_EndDisappear_Invoke_m905DCD487D9D03C665BE6B8F89CEEEDFCD47C381_OpenStaticInvoker(IAM_EndDisappear_t91F7B236FDF2A3FC74F13C5FD4987F95E8936663* __this, InterfaceAnimManager_t55019D504BEA6534494FED15C7945911CE850962* ____IAM0, const RuntimeMethod* method)
{
	InvokerActionInvoker1< InterfaceAnimManager_t55019D504BEA6534494FED15C7945911CE850962* >::Invoke(__this->___method_ptr_0, method, NULL, ____IAM0);
}
void IAM_EndDisappear_Invoke_m905DCD487D9D03C665BE6B8F89CEEEDFCD47C381_ClosedStaticInvoker(IAM_EndDisappear_t91F7B236FDF2A3FC74F13C5FD4987F95E8936663* __this, InterfaceAnimManager_t55019D504BEA6534494FED15C7945911CE850962* ____IAM0, const RuntimeMethod* method)
{
	InvokerActionInvoker2< RuntimeObject*, InterfaceAnimManager_t55019D504BEA6534494FED15C7945911CE850962* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ____IAM0);
}
void IAM_EndDisappear_Invoke_m905DCD487D9D03C665BE6B8F89CEEEDFCD47C381_OpenVirtual(IAM_EndDisappear_t91F7B236FDF2A3FC74F13C5FD4987F95E8936663* __this, InterfaceAnimManager_t55019D504BEA6534494FED15C7945911CE850962* ____IAM0, const RuntimeMethod* method)
{
	VirtualActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(method), ____IAM0);
}
void IAM_EndDisappear_Invoke_m905DCD487D9D03C665BE6B8F89CEEEDFCD47C381_OpenInterface(IAM_EndDisappear_t91F7B236FDF2A3FC74F13C5FD4987F95E8936663* __this, InterfaceAnimManager_t55019D504BEA6534494FED15C7945911CE850962* ____IAM0, const RuntimeMethod* method)
{
	InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(method), il2cpp_codegen_method_get_declaring_type(method), ____IAM0);
}
void IAM_EndDisappear_Invoke_m905DCD487D9D03C665BE6B8F89CEEEDFCD47C381_OpenGenericVirtual(IAM_EndDisappear_t91F7B236FDF2A3FC74F13C5FD4987F95E8936663* __this, InterfaceAnimManager_t55019D504BEA6534494FED15C7945911CE850962* ____IAM0, const RuntimeMethod* method)
{
	GenericVirtualActionInvoker0::Invoke(method, ____IAM0);
}
void IAM_EndDisappear_Invoke_m905DCD487D9D03C665BE6B8F89CEEEDFCD47C381_OpenGenericInterface(IAM_EndDisappear_t91F7B236FDF2A3FC74F13C5FD4987F95E8936663* __this, InterfaceAnimManager_t55019D504BEA6534494FED15C7945911CE850962* ____IAM0, const RuntimeMethod* method)
{
	GenericInterfaceActionInvoker0::Invoke(method, ____IAM0);
}
// System.Void IAM_EndDisappear::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IAM_EndDisappear__ctor_m02480C1C7F7AD2915FB666BA5663E747EFB0B7CA (IAM_EndDisappear_t91F7B236FDF2A3FC74F13C5FD4987F95E8936663* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 1;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&IAM_EndDisappear_Invoke_m905DCD487D9D03C665BE6B8F89CEEEDFCD47C381_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&IAM_EndDisappear_Invoke_m905DCD487D9D03C665BE6B8F89CEEEDFCD47C381_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&IAM_EndDisappear_Invoke_m905DCD487D9D03C665BE6B8F89CEEEDFCD47C381_Open;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 0;
		if (isOpen)
		{
			if (__this->___method_is_virtual_12)
			{
				if (il2cpp_codegen_method_is_generic_instance_method((RuntimeMethod*)___method1))
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___method1))
						__this->___invoke_impl_1 = (intptr_t)&IAM_EndDisappear_Invoke_m905DCD487D9D03C665BE6B8F89CEEEDFCD47C381_OpenGenericInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&IAM_EndDisappear_Invoke_m905DCD487D9D03C665BE6B8F89CEEEDFCD47C381_OpenGenericVirtual;
				else
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___method1))
						__this->___invoke_impl_1 = (intptr_t)&IAM_EndDisappear_Invoke_m905DCD487D9D03C665BE6B8F89CEEEDFCD47C381_OpenInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&IAM_EndDisappear_Invoke_m905DCD487D9D03C665BE6B8F89CEEEDFCD47C381_OpenVirtual;
			}
			else
			{
				__this->___invoke_impl_1 = (intptr_t)&IAM_EndDisappear_Invoke_m905DCD487D9D03C665BE6B8F89CEEEDFCD47C381_Open;
			}
		}
		else
		{
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&IAM_EndDisappear_Invoke_m905DCD487D9D03C665BE6B8F89CEEEDFCD47C381_Multicast;
}
// System.Void IAM_EndDisappear::Invoke(InterfaceAnimManager)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IAM_EndDisappear_Invoke_m905DCD487D9D03C665BE6B8F89CEEEDFCD47C381 (IAM_EndDisappear_t91F7B236FDF2A3FC74F13C5FD4987F95E8936663* __this, InterfaceAnimManager_t55019D504BEA6534494FED15C7945911CE850962* ____IAM0, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, InterfaceAnimManager_t55019D504BEA6534494FED15C7945911CE850962*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ____IAM0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult IAM_EndDisappear::BeginInvoke(InterfaceAnimManager,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* IAM_EndDisappear_BeginInvoke_m2B956008F9FE4ED91DE0BA5F885F55BACE9B7321 (IAM_EndDisappear_t91F7B236FDF2A3FC74F13C5FD4987F95E8936663* __this, InterfaceAnimManager_t55019D504BEA6534494FED15C7945911CE850962* ____IAM0, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback1, RuntimeObject* ___object2, const RuntimeMethod* method) 
{
	void *__d_args[2] = {0};
	__d_args[0] = ____IAM0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void IAM_EndDisappear::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IAM_EndDisappear_EndInvoke_m0B2171EBD093E88616771897334490E7F169876B (IAM_EndDisappear_t91F7B236FDF2A3FC74F13C5FD4987F95E8936663* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void InterfaceAnimManager::add_OnStartAppear(IAM_StartAppear)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterfaceAnimManager_add_OnStartAppear_mFFCADFD6C20EE575552C576923F01A584F25E191 (InterfaceAnimManager_t55019D504BEA6534494FED15C7945911CE850962* __this, IAM_StartAppear_t45F8AF6D25B9B8F63ED671D6461EF06AFBDEACDC* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAM_StartAppear_t45F8AF6D25B9B8F63ED671D6461EF06AFBDEACDC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	IAM_StartAppear_t45F8AF6D25B9B8F63ED671D6461EF06AFBDEACDC* V_0 = NULL;
	IAM_StartAppear_t45F8AF6D25B9B8F63ED671D6461EF06AFBDEACDC* V_1 = NULL;
	IAM_StartAppear_t45F8AF6D25B9B8F63ED671D6461EF06AFBDEACDC* V_2 = NULL;
	{
		IAM_StartAppear_t45F8AF6D25B9B8F63ED671D6461EF06AFBDEACDC* L_0 = __this->___OnStartAppear_24;
		V_0 = L_0;
	}

IL_0007:
	{
		IAM_StartAppear_t45F8AF6D25B9B8F63ED671D6461EF06AFBDEACDC* L_1 = V_0;
		V_1 = L_1;
		IAM_StartAppear_t45F8AF6D25B9B8F63ED671D6461EF06AFBDEACDC* L_2 = V_1;
		IAM_StartAppear_t45F8AF6D25B9B8F63ED671D6461EF06AFBDEACDC* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m8B9D24CED35033C7FC56501DFE650F5CB7FF012C(L_2, L_3, NULL);
		V_2 = ((IAM_StartAppear_t45F8AF6D25B9B8F63ED671D6461EF06AFBDEACDC*)CastclassSealed((RuntimeObject*)L_4, IAM_StartAppear_t45F8AF6D25B9B8F63ED671D6461EF06AFBDEACDC_il2cpp_TypeInfo_var));
		IAM_StartAppear_t45F8AF6D25B9B8F63ED671D6461EF06AFBDEACDC** L_5 = (&__this->___OnStartAppear_24);
		IAM_StartAppear_t45F8AF6D25B9B8F63ED671D6461EF06AFBDEACDC* L_6 = V_2;
		IAM_StartAppear_t45F8AF6D25B9B8F63ED671D6461EF06AFBDEACDC* L_7 = V_1;
		IAM_StartAppear_t45F8AF6D25B9B8F63ED671D6461EF06AFBDEACDC* L_8;
		L_8 = InterlockedCompareExchangeImpl<IAM_StartAppear_t45F8AF6D25B9B8F63ED671D6461EF06AFBDEACDC*>(L_5, L_6, L_7);
		V_0 = L_8;
		IAM_StartAppear_t45F8AF6D25B9B8F63ED671D6461EF06AFBDEACDC* L_9 = V_0;
		IAM_StartAppear_t45F8AF6D25B9B8F63ED671D6461EF06AFBDEACDC* L_10 = V_1;
		if ((!(((RuntimeObject*)(IAM_StartAppear_t45F8AF6D25B9B8F63ED671D6461EF06AFBDEACDC*)L_9) == ((RuntimeObject*)(IAM_StartAppear_t45F8AF6D25B9B8F63ED671D6461EF06AFBDEACDC*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void InterfaceAnimManager::remove_OnStartAppear(IAM_StartAppear)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterfaceAnimManager_remove_OnStartAppear_m27A7CDC454B6219F53F42C396D5DDBEAF43625B5 (InterfaceAnimManager_t55019D504BEA6534494FED15C7945911CE850962* __this, IAM_StartAppear_t45F8AF6D25B9B8F63ED671D6461EF06AFBDEACDC* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAM_StartAppear_t45F8AF6D25B9B8F63ED671D6461EF06AFBDEACDC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	IAM_StartAppear_t45F8AF6D25B9B8F63ED671D6461EF06AFBDEACDC* V_0 = NULL;
	IAM_StartAppear_t45F8AF6D25B9B8F63ED671D6461EF06AFBDEACDC* V_1 = NULL;
	IAM_StartAppear_t45F8AF6D25B9B8F63ED671D6461EF06AFBDEACDC* V_2 = NULL;
	{
		IAM_StartAppear_t45F8AF6D25B9B8F63ED671D6461EF06AFBDEACDC* L_0 = __this->___OnStartAppear_24;
		V_0 = L_0;
	}

IL_0007:
	{
		IAM_StartAppear_t45F8AF6D25B9B8F63ED671D6461EF06AFBDEACDC* L_1 = V_0;
		V_1 = L_1;
		IAM_StartAppear_t45F8AF6D25B9B8F63ED671D6461EF06AFBDEACDC* L_2 = V_1;
		IAM_StartAppear_t45F8AF6D25B9B8F63ED671D6461EF06AFBDEACDC* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m40506877934EC1AD4ADAE57F5E97AF0BC0F96116(L_2, L_3, NULL);
		V_2 = ((IAM_StartAppear_t45F8AF6D25B9B8F63ED671D6461EF06AFBDEACDC*)CastclassSealed((RuntimeObject*)L_4, IAM_StartAppear_t45F8AF6D25B9B8F63ED671D6461EF06AFBDEACDC_il2cpp_TypeInfo_var));
		IAM_StartAppear_t45F8AF6D25B9B8F63ED671D6461EF06AFBDEACDC** L_5 = (&__this->___OnStartAppear_24);
		IAM_StartAppear_t45F8AF6D25B9B8F63ED671D6461EF06AFBDEACDC* L_6 = V_2;
		IAM_StartAppear_t45F8AF6D25B9B8F63ED671D6461EF06AFBDEACDC* L_7 = V_1;
		IAM_StartAppear_t45F8AF6D25B9B8F63ED671D6461EF06AFBDEACDC* L_8;
		L_8 = InterlockedCompareExchangeImpl<IAM_StartAppear_t45F8AF6D25B9B8F63ED671D6461EF06AFBDEACDC*>(L_5, L_6, L_7);
		V_0 = L_8;
		IAM_StartAppear_t45F8AF6D25B9B8F63ED671D6461EF06AFBDEACDC* L_9 = V_0;
		IAM_StartAppear_t45F8AF6D25B9B8F63ED671D6461EF06AFBDEACDC* L_10 = V_1;
		if ((!(((RuntimeObject*)(IAM_StartAppear_t45F8AF6D25B9B8F63ED671D6461EF06AFBDEACDC*)L_9) == ((RuntimeObject*)(IAM_StartAppear_t45F8AF6D25B9B8F63ED671D6461EF06AFBDEACDC*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void InterfaceAnimManager::add_OnStartDisappear(IAM_StartDisappear)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterfaceAnimManager_add_OnStartDisappear_m636052A822D968B5AB57CBAAFA41ECE748690178 (InterfaceAnimManager_t55019D504BEA6534494FED15C7945911CE850962* __this, IAM_StartDisappear_tFBEC30F3C988FD6D617407114866A1D5FE174BFB* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAM_StartDisappear_tFBEC30F3C988FD6D617407114866A1D5FE174BFB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	IAM_StartDisappear_tFBEC30F3C988FD6D617407114866A1D5FE174BFB* V_0 = NULL;
	IAM_StartDisappear_tFBEC30F3C988FD6D617407114866A1D5FE174BFB* V_1 = NULL;
	IAM_StartDisappear_tFBEC30F3C988FD6D617407114866A1D5FE174BFB* V_2 = NULL;
	{
		IAM_StartDisappear_tFBEC30F3C988FD6D617407114866A1D5FE174BFB* L_0 = __this->___OnStartDisappear_25;
		V_0 = L_0;
	}

IL_0007:
	{
		IAM_StartDisappear_tFBEC30F3C988FD6D617407114866A1D5FE174BFB* L_1 = V_0;
		V_1 = L_1;
		IAM_StartDisappear_tFBEC30F3C988FD6D617407114866A1D5FE174BFB* L_2 = V_1;
		IAM_StartDisappear_tFBEC30F3C988FD6D617407114866A1D5FE174BFB* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m8B9D24CED35033C7FC56501DFE650F5CB7FF012C(L_2, L_3, NULL);
		V_2 = ((IAM_StartDisappear_tFBEC30F3C988FD6D617407114866A1D5FE174BFB*)CastclassSealed((RuntimeObject*)L_4, IAM_StartDisappear_tFBEC30F3C988FD6D617407114866A1D5FE174BFB_il2cpp_TypeInfo_var));
		IAM_StartDisappear_tFBEC30F3C988FD6D617407114866A1D5FE174BFB** L_5 = (&__this->___OnStartDisappear_25);
		IAM_StartDisappear_tFBEC30F3C988FD6D617407114866A1D5FE174BFB* L_6 = V_2;
		IAM_StartDisappear_tFBEC30F3C988FD6D617407114866A1D5FE174BFB* L_7 = V_1;
		IAM_StartDisappear_tFBEC30F3C988FD6D617407114866A1D5FE174BFB* L_8;
		L_8 = InterlockedCompareExchangeImpl<IAM_StartDisappear_tFBEC30F3C988FD6D617407114866A1D5FE174BFB*>(L_5, L_6, L_7);
		V_0 = L_8;
		IAM_StartDisappear_tFBEC30F3C988FD6D617407114866A1D5FE174BFB* L_9 = V_0;
		IAM_StartDisappear_tFBEC30F3C988FD6D617407114866A1D5FE174BFB* L_10 = V_1;
		if ((!(((RuntimeObject*)(IAM_StartDisappear_tFBEC30F3C988FD6D617407114866A1D5FE174BFB*)L_9) == ((RuntimeObject*)(IAM_StartDisappear_tFBEC30F3C988FD6D617407114866A1D5FE174BFB*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void InterfaceAnimManager::remove_OnStartDisappear(IAM_StartDisappear)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterfaceAnimManager_remove_OnStartDisappear_mB8094724F78E5C899B4AF7CE53ED51E23C8F1A44 (InterfaceAnimManager_t55019D504BEA6534494FED15C7945911CE850962* __this, IAM_StartDisappear_tFBEC30F3C988FD6D617407114866A1D5FE174BFB* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAM_StartDisappear_tFBEC30F3C988FD6D617407114866A1D5FE174BFB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	IAM_StartDisappear_tFBEC30F3C988FD6D617407114866A1D5FE174BFB* V_0 = NULL;
	IAM_StartDisappear_tFBEC30F3C988FD6D617407114866A1D5FE174BFB* V_1 = NULL;
	IAM_StartDisappear_tFBEC30F3C988FD6D617407114866A1D5FE174BFB* V_2 = NULL;
	{
		IAM_StartDisappear_tFBEC30F3C988FD6D617407114866A1D5FE174BFB* L_0 = __this->___OnStartDisappear_25;
		V_0 = L_0;
	}

IL_0007:
	{
		IAM_StartDisappear_tFBEC30F3C988FD6D617407114866A1D5FE174BFB* L_1 = V_0;
		V_1 = L_1;
		IAM_StartDisappear_tFBEC30F3C988FD6D617407114866A1D5FE174BFB* L_2 = V_1;
		IAM_StartDisappear_tFBEC30F3C988FD6D617407114866A1D5FE174BFB* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m40506877934EC1AD4ADAE57F5E97AF0BC0F96116(L_2, L_3, NULL);
		V_2 = ((IAM_StartDisappear_tFBEC30F3C988FD6D617407114866A1D5FE174BFB*)CastclassSealed((RuntimeObject*)L_4, IAM_StartDisappear_tFBEC30F3C988FD6D617407114866A1D5FE174BFB_il2cpp_TypeInfo_var));
		IAM_StartDisappear_tFBEC30F3C988FD6D617407114866A1D5FE174BFB** L_5 = (&__this->___OnStartDisappear_25);
		IAM_StartDisappear_tFBEC30F3C988FD6D617407114866A1D5FE174BFB* L_6 = V_2;
		IAM_StartDisappear_tFBEC30F3C988FD6D617407114866A1D5FE174BFB* L_7 = V_1;
		IAM_StartDisappear_tFBEC30F3C988FD6D617407114866A1D5FE174BFB* L_8;
		L_8 = InterlockedCompareExchangeImpl<IAM_StartDisappear_tFBEC30F3C988FD6D617407114866A1D5FE174BFB*>(L_5, L_6, L_7);
		V_0 = L_8;
		IAM_StartDisappear_tFBEC30F3C988FD6D617407114866A1D5FE174BFB* L_9 = V_0;
		IAM_StartDisappear_tFBEC30F3C988FD6D617407114866A1D5FE174BFB* L_10 = V_1;
		if ((!(((RuntimeObject*)(IAM_StartDisappear_tFBEC30F3C988FD6D617407114866A1D5FE174BFB*)L_9) == ((RuntimeObject*)(IAM_StartDisappear_tFBEC30F3C988FD6D617407114866A1D5FE174BFB*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void InterfaceAnimManager::add_OnEndAppear(IAM_EndAppear)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterfaceAnimManager_add_OnEndAppear_m646730B8F8C40D442B4116074FE6C65E82F6F3FC (InterfaceAnimManager_t55019D504BEA6534494FED15C7945911CE850962* __this, IAM_EndAppear_t60802E44D1AB53A268000746AEAA403393EFE4C6* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAM_EndAppear_t60802E44D1AB53A268000746AEAA403393EFE4C6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	IAM_EndAppear_t60802E44D1AB53A268000746AEAA403393EFE4C6* V_0 = NULL;
	IAM_EndAppear_t60802E44D1AB53A268000746AEAA403393EFE4C6* V_1 = NULL;
	IAM_EndAppear_t60802E44D1AB53A268000746AEAA403393EFE4C6* V_2 = NULL;
	{
		IAM_EndAppear_t60802E44D1AB53A268000746AEAA403393EFE4C6* L_0 = __this->___OnEndAppear_26;
		V_0 = L_0;
	}

IL_0007:
	{
		IAM_EndAppear_t60802E44D1AB53A268000746AEAA403393EFE4C6* L_1 = V_0;
		V_1 = L_1;
		IAM_EndAppear_t60802E44D1AB53A268000746AEAA403393EFE4C6* L_2 = V_1;
		IAM_EndAppear_t60802E44D1AB53A268000746AEAA403393EFE4C6* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m8B9D24CED35033C7FC56501DFE650F5CB7FF012C(L_2, L_3, NULL);
		V_2 = ((IAM_EndAppear_t60802E44D1AB53A268000746AEAA403393EFE4C6*)CastclassSealed((RuntimeObject*)L_4, IAM_EndAppear_t60802E44D1AB53A268000746AEAA403393EFE4C6_il2cpp_TypeInfo_var));
		IAM_EndAppear_t60802E44D1AB53A268000746AEAA403393EFE4C6** L_5 = (&__this->___OnEndAppear_26);
		IAM_EndAppear_t60802E44D1AB53A268000746AEAA403393EFE4C6* L_6 = V_2;
		IAM_EndAppear_t60802E44D1AB53A268000746AEAA403393EFE4C6* L_7 = V_1;
		IAM_EndAppear_t60802E44D1AB53A268000746AEAA403393EFE4C6* L_8;
		L_8 = InterlockedCompareExchangeImpl<IAM_EndAppear_t60802E44D1AB53A268000746AEAA403393EFE4C6*>(L_5, L_6, L_7);
		V_0 = L_8;
		IAM_EndAppear_t60802E44D1AB53A268000746AEAA403393EFE4C6* L_9 = V_0;
		IAM_EndAppear_t60802E44D1AB53A268000746AEAA403393EFE4C6* L_10 = V_1;
		if ((!(((RuntimeObject*)(IAM_EndAppear_t60802E44D1AB53A268000746AEAA403393EFE4C6*)L_9) == ((RuntimeObject*)(IAM_EndAppear_t60802E44D1AB53A268000746AEAA403393EFE4C6*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void InterfaceAnimManager::remove_OnEndAppear(IAM_EndAppear)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterfaceAnimManager_remove_OnEndAppear_m39B8089E247705D9D859B590C832105CEC459285 (InterfaceAnimManager_t55019D504BEA6534494FED15C7945911CE850962* __this, IAM_EndAppear_t60802E44D1AB53A268000746AEAA403393EFE4C6* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAM_EndAppear_t60802E44D1AB53A268000746AEAA403393EFE4C6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	IAM_EndAppear_t60802E44D1AB53A268000746AEAA403393EFE4C6* V_0 = NULL;
	IAM_EndAppear_t60802E44D1AB53A268000746AEAA403393EFE4C6* V_1 = NULL;
	IAM_EndAppear_t60802E44D1AB53A268000746AEAA403393EFE4C6* V_2 = NULL;
	{
		IAM_EndAppear_t60802E44D1AB53A268000746AEAA403393EFE4C6* L_0 = __this->___OnEndAppear_26;
		V_0 = L_0;
	}

IL_0007:
	{
		IAM_EndAppear_t60802E44D1AB53A268000746AEAA403393EFE4C6* L_1 = V_0;
		V_1 = L_1;
		IAM_EndAppear_t60802E44D1AB53A268000746AEAA403393EFE4C6* L_2 = V_1;
		IAM_EndAppear_t60802E44D1AB53A268000746AEAA403393EFE4C6* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m40506877934EC1AD4ADAE57F5E97AF0BC0F96116(L_2, L_3, NULL);
		V_2 = ((IAM_EndAppear_t60802E44D1AB53A268000746AEAA403393EFE4C6*)CastclassSealed((RuntimeObject*)L_4, IAM_EndAppear_t60802E44D1AB53A268000746AEAA403393EFE4C6_il2cpp_TypeInfo_var));
		IAM_EndAppear_t60802E44D1AB53A268000746AEAA403393EFE4C6** L_5 = (&__this->___OnEndAppear_26);
		IAM_EndAppear_t60802E44D1AB53A268000746AEAA403393EFE4C6* L_6 = V_2;
		IAM_EndAppear_t60802E44D1AB53A268000746AEAA403393EFE4C6* L_7 = V_1;
		IAM_EndAppear_t60802E44D1AB53A268000746AEAA403393EFE4C6* L_8;
		L_8 = InterlockedCompareExchangeImpl<IAM_EndAppear_t60802E44D1AB53A268000746AEAA403393EFE4C6*>(L_5, L_6, L_7);
		V_0 = L_8;
		IAM_EndAppear_t60802E44D1AB53A268000746AEAA403393EFE4C6* L_9 = V_0;
		IAM_EndAppear_t60802E44D1AB53A268000746AEAA403393EFE4C6* L_10 = V_1;
		if ((!(((RuntimeObject*)(IAM_EndAppear_t60802E44D1AB53A268000746AEAA403393EFE4C6*)L_9) == ((RuntimeObject*)(IAM_EndAppear_t60802E44D1AB53A268000746AEAA403393EFE4C6*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void InterfaceAnimManager::add_OnEndDisappear(IAM_EndDisappear)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterfaceAnimManager_add_OnEndDisappear_mC951476928A818AF706009F32CAAF5C159954137 (InterfaceAnimManager_t55019D504BEA6534494FED15C7945911CE850962* __this, IAM_EndDisappear_t91F7B236FDF2A3FC74F13C5FD4987F95E8936663* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAM_EndDisappear_t91F7B236FDF2A3FC74F13C5FD4987F95E8936663_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	IAM_EndDisappear_t91F7B236FDF2A3FC74F13C5FD4987F95E8936663* V_0 = NULL;
	IAM_EndDisappear_t91F7B236FDF2A3FC74F13C5FD4987F95E8936663* V_1 = NULL;
	IAM_EndDisappear_t91F7B236FDF2A3FC74F13C5FD4987F95E8936663* V_2 = NULL;
	{
		IAM_EndDisappear_t91F7B236FDF2A3FC74F13C5FD4987F95E8936663* L_0 = __this->___OnEndDisappear_27;
		V_0 = L_0;
	}

IL_0007:
	{
		IAM_EndDisappear_t91F7B236FDF2A3FC74F13C5FD4987F95E8936663* L_1 = V_0;
		V_1 = L_1;
		IAM_EndDisappear_t91F7B236FDF2A3FC74F13C5FD4987F95E8936663* L_2 = V_1;
		IAM_EndDisappear_t91F7B236FDF2A3FC74F13C5FD4987F95E8936663* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m8B9D24CED35033C7FC56501DFE650F5CB7FF012C(L_2, L_3, NULL);
		V_2 = ((IAM_EndDisappear_t91F7B236FDF2A3FC74F13C5FD4987F95E8936663*)CastclassSealed((RuntimeObject*)L_4, IAM_EndDisappear_t91F7B236FDF2A3FC74F13C5FD4987F95E8936663_il2cpp_TypeInfo_var));
		IAM_EndDisappear_t91F7B236FDF2A3FC74F13C5FD4987F95E8936663** L_5 = (&__this->___OnEndDisappear_27);
		IAM_EndDisappear_t91F7B236FDF2A3FC74F13C5FD4987F95E8936663* L_6 = V_2;
		IAM_EndDisappear_t91F7B236FDF2A3FC74F13C5FD4987F95E8936663* L_7 = V_1;
		IAM_EndDisappear_t91F7B236FDF2A3FC74F13C5FD4987F95E8936663* L_8;
		L_8 = InterlockedCompareExchangeImpl<IAM_EndDisappear_t91F7B236FDF2A3FC74F13C5FD4987F95E8936663*>(L_5, L_6, L_7);
		V_0 = L_8;
		IAM_EndDisappear_t91F7B236FDF2A3FC74F13C5FD4987F95E8936663* L_9 = V_0;
		IAM_EndDisappear_t91F7B236FDF2A3FC74F13C5FD4987F95E8936663* L_10 = V_1;
		if ((!(((RuntimeObject*)(IAM_EndDisappear_t91F7B236FDF2A3FC74F13C5FD4987F95E8936663*)L_9) == ((RuntimeObject*)(IAM_EndDisappear_t91F7B236FDF2A3FC74F13C5FD4987F95E8936663*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void InterfaceAnimManager::remove_OnEndDisappear(IAM_EndDisappear)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterfaceAnimManager_remove_OnEndDisappear_mDAF3D7BA051591A257F4ED3CCAB6530E142A42DC (InterfaceAnimManager_t55019D504BEA6534494FED15C7945911CE850962* __this, IAM_EndDisappear_t91F7B236FDF2A3FC74F13C5FD4987F95E8936663* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAM_EndDisappear_t91F7B236FDF2A3FC74F13C5FD4987F95E8936663_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	IAM_EndDisappear_t91F7B236FDF2A3FC74F13C5FD4987F95E8936663* V_0 = NULL;
	IAM_EndDisappear_t91F7B236FDF2A3FC74F13C5FD4987F95E8936663* V_1 = NULL;
	IAM_EndDisappear_t91F7B236FDF2A3FC74F13C5FD4987F95E8936663* V_2 = NULL;
	{
		IAM_EndDisappear_t91F7B236FDF2A3FC74F13C5FD4987F95E8936663* L_0 = __this->___OnEndDisappear_27;
		V_0 = L_0;
	}

IL_0007:
	{
		IAM_EndDisappear_t91F7B236FDF2A3FC74F13C5FD4987F95E8936663* L_1 = V_0;
		V_1 = L_1;
		IAM_EndDisappear_t91F7B236FDF2A3FC74F13C5FD4987F95E8936663* L_2 = V_1;
		IAM_EndDisappear_t91F7B236FDF2A3FC74F13C5FD4987F95E8936663* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m40506877934EC1AD4ADAE57F5E97AF0BC0F96116(L_2, L_3, NULL);
		V_2 = ((IAM_EndDisappear_t91F7B236FDF2A3FC74F13C5FD4987F95E8936663*)CastclassSealed((RuntimeObject*)L_4, IAM_EndDisappear_t91F7B236FDF2A3FC74F13C5FD4987F95E8936663_il2cpp_TypeInfo_var));
		IAM_EndDisappear_t91F7B236FDF2A3FC74F13C5FD4987F95E8936663** L_5 = (&__this->___OnEndDisappear_27);
		IAM_EndDisappear_t91F7B236FDF2A3FC74F13C5FD4987F95E8936663* L_6 = V_2;
		IAM_EndDisappear_t91F7B236FDF2A3FC74F13C5FD4987F95E8936663* L_7 = V_1;
		IAM_EndDisappear_t91F7B236FDF2A3FC74F13C5FD4987F95E8936663* L_8;
		L_8 = InterlockedCompareExchangeImpl<IAM_EndDisappear_t91F7B236FDF2A3FC74F13C5FD4987F95E8936663*>(L_5, L_6, L_7);
		V_0 = L_8;
		IAM_EndDisappear_t91F7B236FDF2A3FC74F13C5FD4987F95E8936663* L_9 = V_0;
		IAM_EndDisappear_t91F7B236FDF2A3FC74F13C5FD4987F95E8936663* L_10 = V_1;
		if ((!(((RuntimeObject*)(IAM_EndDisappear_t91F7B236FDF2A3FC74F13C5FD4987F95E8936663*)L_9) == ((RuntimeObject*)(IAM_EndDisappear_t91F7B236FDF2A3FC74F13C5FD4987F95E8936663*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void InterfaceAnimManager::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterfaceAnimManager_Awake_m1A69524061A6AE1E85ABC0564E44862EF5927046 (InterfaceAnimManager_t55019D504BEA6534494FED15C7945911CE850962* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m42DA4DEA19EB60D80CBED7413ADEB27FA033C77B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentsInChildren_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mC9578257D24D673124C2EE2803C913994C2BAFC8_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	AnimatorU5BU5D_tC96418EE48F8DA017567CAE0235488C27640E759* V_0 = NULL;
	int32_t V_1 = 0;
	{
		// this.audioSource = this.GetComponent<AudioSource>();
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_0;
		L_0 = Component_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m42DA4DEA19EB60D80CBED7413ADEB27FA033C77B(__this, Component_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m42DA4DEA19EB60D80CBED7413ADEB27FA033C77B_RuntimeMethod_var);
		__this->___audioSource_17 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___audioSource_17), (void*)L_0);
		// if (forceUnscaledTime) {
		bool L_1 = __this->___forceUnscaledTime_12;
		if (!L_1)
		{
			goto IL_0033;
		}
	}
	{
		// foreach (Animator _animator in GetComponentsInChildren<Animator>(true)) {
		AnimatorU5BU5D_tC96418EE48F8DA017567CAE0235488C27640E759* L_2;
		L_2 = Component_GetComponentsInChildren_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mC9578257D24D673124C2EE2803C913994C2BAFC8(__this, (bool)1, Component_GetComponentsInChildren_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mC9578257D24D673124C2EE2803C913994C2BAFC8_RuntimeMethod_var);
		V_0 = L_2;
		V_1 = 0;
		goto IL_002d;
	}

IL_0020:
	{
		// foreach (Animator _animator in GetComponentsInChildren<Animator>(true)) {
		AnimatorU5BU5D_tC96418EE48F8DA017567CAE0235488C27640E759* L_3 = V_0;
		int32_t L_4 = V_1;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		// _animator.updateMode = AnimatorUpdateMode.UnscaledTime;
		NullCheck(L_6);
		Animator_set_updateMode_mA21CC888FEEBC5A06099E5D33A6C7ACCC266B056(L_6, 2, NULL);
		int32_t L_7 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_7, 1));
	}

IL_002d:
	{
		// foreach (Animator _animator in GetComponentsInChildren<Animator>(true)) {
		int32_t L_8 = V_1;
		AnimatorU5BU5D_tC96418EE48F8DA017567CAE0235488C27640E759* L_9 = V_0;
		NullCheck(L_9);
		if ((((int32_t)L_8) < ((int32_t)((int32_t)(((RuntimeArray*)L_9)->max_length)))))
		{
			goto IL_0020;
		}
	}

IL_0033:
	{
		// }
		return;
	}
}
// System.Void InterfaceAnimManager::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterfaceAnimManager_Start_m5D4B10C9B75295DE2FCF2E2FCF9572B7428D5753 (InterfaceAnimManager_t55019D504BEA6534494FED15C7945911CE850962* __this, const RuntimeMethod* method) 
{
	{
		// if (Application.isPlaying) {
		bool L_0;
		L_0 = Application_get_isPlaying_m0B3B501E1093739F8887A0DAC5F61D9CB49CC337(NULL);
		if (!L_0)
		{
			goto IL_0023;
		}
	}
	{
		// UpdateAnimClips();
		InterfaceAnimManager_UpdateAnimClips_mB15CE778AC410C9CCBDE442A48C4FFDB9DDADF65(__this, NULL);
		// startDisappear(true); // to avoid auto appear anim of elements inside (when enabled)
		VirtualActionInvoker1< bool >::Invoke(5 /* System.Void InterfaceAnimManager::startDisappear(System.Boolean) */, __this, (bool)1);
		// if (autoStart){
		bool L_1 = __this->___autoStart_5;
		if (!L_1)
		{
			goto IL_0023;
		}
	}
	{
		// startAppear();
		VirtualActionInvoker1< bool >::Invoke(4 /* System.Void InterfaceAnimManager::startAppear(System.Boolean) */, __this, (bool)0);
	}

IL_0023:
	{
		// }
		return;
	}
}
// System.Void InterfaceAnimManager::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterfaceAnimManager_Update_m5CAEF22423A6B9BCFEFB285D58371C730D2ED4EC (InterfaceAnimManager_t55019D504BEA6534494FED15C7945911CE850962* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m05F5DC7DDC52C222E3CC2A5F3E80A9CAC2EC68AE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m95E1E769FF7A8208A46B05C694DD6C720FCE6C49_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m1BBA4A743DD622178C8A15E930ADDEE490553A80_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisInterfaceAnimManager_t55019D504BEA6534494FED15C7945911CE850962_m3C753C203152FD3ED8CE525C216473174957EB16_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m736E8835B6C02CAC94A7EA21A8B0B17D38246CAF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2DE805987DEDE406141897309B2F4E2D3570467E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5C28D7D10566D621893498A90686178A2F6038DC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Enumerator_tBE821E8DBC9F67CC069BF33B74F05F0A2270F44E V_1;
	memset((&V_1), 0, sizeof(V_1));
	InterfaceAnmElement_t02DC7282CF1F682DD0C071B9DE5637D4E58C5706* V_2 = NULL;
	int32_t V_3 = 0;
	AnimationClipU5BU5D_t48CE1A495BA95608745A065C735F2D5BB8DE5A0F* V_4 = NULL;
	int32_t V_5 = 0;
	AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712* V_6 = NULL;
	String_t* V_7 = NULL;
	AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712* V_8 = NULL;
	AnimatorStateInfo_t1F47379289C7CE7FD588FBC3BBD79A777243B6B2 V_9;
	memset((&V_9), 0, sizeof(V_9));
	bool V_10 = false;
	InterfaceAnmElement_t02DC7282CF1F682DD0C071B9DE5637D4E58C5706* V_11 = NULL;
	bool V_12 = false;
	AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712* V_13 = NULL;
	int32_t V_14 = 0;
	String_t* V_15 = NULL;
	AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712* V_16 = NULL;
	InterfaceAnmElement_t02DC7282CF1F682DD0C071B9DE5637D4E58C5706* V_17 = NULL;
	InterfaceAnmElement_t02DC7282CF1F682DD0C071B9DE5637D4E58C5706* V_18 = NULL;
	{
		// if (Application.isPlaying) {
		bool L_0;
		L_0 = Application_get_isPlaying_m0B3B501E1093739F8887A0DAC5F61D9CB49CC337(NULL);
		if (!L_0)
		{
			goto IL_079b;
		}
	}
	{
		// switch (currentState) {
		int32_t L_1 = __this->___currentState_15;
		V_0 = L_1;
		int32_t L_2 = V_0;
		switch (L_2)
		{
			case 0:
			{
				goto IL_0028;
			}
			case 1:
			{
				goto IL_0773;
			}
			case 2:
			{
				goto IL_0318;
			}
			case 3:
			{
				goto IL_0773;
			}
		}
	}
	{
		return;
	}

IL_0028:
	{
		// if (waitAppear_Nested && waitElementFullAnim != null) {
		bool L_3 = __this->___waitAppear_Nested_21;
		if (!L_3)
		{
			goto IL_0076;
		}
	}
	{
		InterfaceAnmElement_t02DC7282CF1F682DD0C071B9DE5637D4E58C5706* L_4 = __this->___waitElementFullAnim_23;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_4, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_5)
		{
			goto IL_0076;
		}
	}
	{
		// if (waitElementFullAnim.gameObjectRef && waitElementFullAnim.gameObjectRef.GetComponent<InterfaceAnimManager>().currentState == CSFHIAnimableState.appeared) {
		InterfaceAnmElement_t02DC7282CF1F682DD0C071B9DE5637D4E58C5706* L_6 = __this->___waitElementFullAnim_23;
		NullCheck(L_6);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7 = L_6->___gameObjectRef_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_8;
		L_8 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_7, NULL);
		if (!L_8)
		{
			goto IL_079b;
		}
	}
	{
		InterfaceAnmElement_t02DC7282CF1F682DD0C071B9DE5637D4E58C5706* L_9 = __this->___waitElementFullAnim_23;
		NullCheck(L_9);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10 = L_9->___gameObjectRef_4;
		NullCheck(L_10);
		InterfaceAnimManager_t55019D504BEA6534494FED15C7945911CE850962* L_11;
		L_11 = GameObject_GetComponent_TisInterfaceAnimManager_t55019D504BEA6534494FED15C7945911CE850962_m3C753C203152FD3ED8CE525C216473174957EB16(L_10, GameObject_GetComponent_TisInterfaceAnimManager_t55019D504BEA6534494FED15C7945911CE850962_m3C753C203152FD3ED8CE525C216473174957EB16_RuntimeMethod_var);
		NullCheck(L_11);
		int32_t L_12 = L_11->___currentState_15;
		if ((!(((uint32_t)L_12) == ((uint32_t)1))))
		{
			goto IL_079b;
		}
	}
	{
		// waitElementFullAnim = null;
		__this->___waitElementFullAnim_23 = (InterfaceAnmElement_t02DC7282CF1F682DD0C071B9DE5637D4E58C5706*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___waitElementFullAnim_23), (void*)(InterfaceAnmElement_t02DC7282CF1F682DD0C071B9DE5637D4E58C5706*)NULL);
		return;
	}

IL_0076:
	{
		// foreach (InterfaceAnmElement _element in elementsList) {
		List_1_t2F48DCC67405C354E57C9C3263548DB2D541DBB0* L_13 = __this->___elementsList_4;
		NullCheck(L_13);
		Enumerator_tBE821E8DBC9F67CC069BF33B74F05F0A2270F44E L_14;
		L_14 = List_1_GetEnumerator_m736E8835B6C02CAC94A7EA21A8B0B17D38246CAF(L_13, List_1_GetEnumerator_m736E8835B6C02CAC94A7EA21A8B0B17D38246CAF_RuntimeMethod_var);
		V_1 = L_14;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0295:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m05F5DC7DDC52C222E3CC2A5F3E80A9CAC2EC68AE((&V_1), Enumerator_Dispose_m05F5DC7DDC52C222E3CC2A5F3E80A9CAC2EC68AE_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0287_1;
			}

IL_0087_1:
			{
				// foreach (InterfaceAnmElement _element in elementsList) {
				InterfaceAnmElement_t02DC7282CF1F682DD0C071B9DE5637D4E58C5706* L_15;
				L_15 = Enumerator_get_Current_m1BBA4A743DD622178C8A15E930ADDEE490553A80_inline((&V_1), Enumerator_get_Current_m1BBA4A743DD622178C8A15E930ADDEE490553A80_RuntimeMethod_var);
				V_2 = L_15;
				// if (_element.animator && _element.gameObjectRef.activeSelf) { // 1.6.0 check if active, if not, unity would trigger a 'Animator is not playing a Playable' error
				InterfaceAnmElement_t02DC7282CF1F682DD0C071B9DE5637D4E58C5706* L_16 = V_2;
				NullCheck(L_16);
				Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_17 = L_16->___animator_9;
				il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
				bool L_18;
				L_18 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_17, NULL);
				if (!L_18)
				{
					goto IL_00d0_1;
				}
			}
			{
				InterfaceAnmElement_t02DC7282CF1F682DD0C071B9DE5637D4E58C5706* L_19 = V_2;
				NullCheck(L_19);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_20 = L_19->___gameObjectRef_4;
				NullCheck(L_20);
				bool L_21;
				L_21 = GameObject_get_activeSelf_m4F3E5240E138B66AAA080EA30759A3D0517DA368(L_20, NULL);
				if (!L_21)
				{
					goto IL_00d0_1;
				}
			}
			{
				// for (int layerIndex = 0; layerIndex < _element.animator.layerCount; layerIndex++) {
				V_3 = 0;
				goto IL_00c2_1;
			}

IL_00ad_1:
			{
				// _element.animator.SetLayerWeight(layerIndex, 1);
				InterfaceAnmElement_t02DC7282CF1F682DD0C071B9DE5637D4E58C5706* L_22 = V_2;
				NullCheck(L_22);
				Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_23 = L_22->___animator_9;
				int32_t L_24 = V_3;
				NullCheck(L_23);
				Animator_SetLayerWeight_m06ADC732F76F22B4B1424F25525E7CBB80E6230F(L_23, L_24, (1.0f), NULL);
				// for (int layerIndex = 0; layerIndex < _element.animator.layerCount; layerIndex++) {
				int32_t L_25 = V_3;
				V_3 = ((int32_t)il2cpp_codegen_add(L_25, 1));
			}

IL_00c2_1:
			{
				// for (int layerIndex = 0; layerIndex < _element.animator.layerCount; layerIndex++) {
				int32_t L_26 = V_3;
				InterfaceAnmElement_t02DC7282CF1F682DD0C071B9DE5637D4E58C5706* L_27 = V_2;
				NullCheck(L_27);
				Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_28 = L_27->___animator_9;
				NullCheck(L_28);
				int32_t L_29;
				L_29 = Animator_get_layerCount_m75C20E7284800DFA0E4AD7EC23910BDB6D62BDA8(L_28, NULL);
				if ((((int32_t)L_26) < ((int32_t)L_29)))
				{
					goto IL_00ad_1;
				}
			}

IL_00d0_1:
			{
				// if (!useDelays || timer > _element.timeAppear * appearDelay_SpeedMultiplier) {
				bool L_30 = __this->___useDelays_16;
				if (!L_30)
				{
					goto IL_00f0_1;
				}
			}
			{
				float L_31 = __this->___timer_8;
				InterfaceAnmElement_t02DC7282CF1F682DD0C071B9DE5637D4E58C5706* L_32 = V_2;
				NullCheck(L_32);
				float L_33 = L_32->___timeAppear_5;
				float L_34 = __this->___appearDelay_SpeedMultiplier_13;
				if ((!(((float)L_31) > ((float)((float)il2cpp_codegen_multiply(L_33, L_34))))))
				{
					goto IL_0280_1;
				}
			}

IL_00f0_1:
			{
				// if (_element.currentState == CSFHIAnimableState.disappeared) {
				InterfaceAnmElement_t02DC7282CF1F682DD0C071B9DE5637D4E58C5706* L_35 = V_2;
				NullCheck(L_35);
				int32_t L_36 = L_35->___currentState_12;
				if ((!(((uint32_t)L_36) == ((uint32_t)3))))
				{
					goto IL_01c3_1;
				}
			}
			{
				// _element.gameObjectRef.SetActive(true);
				InterfaceAnmElement_t02DC7282CF1F682DD0C071B9DE5637D4E58C5706* L_37 = V_2;
				NullCheck(L_37);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_38 = L_37->___gameObjectRef_4;
				NullCheck(L_38);
				GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_38, (bool)1, NULL);
				// if (_element.animator) {
				InterfaceAnmElement_t02DC7282CF1F682DD0C071B9DE5637D4E58C5706* L_39 = V_2;
				NullCheck(L_39);
				Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_40 = L_39->___animator_9;
				il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
				bool L_41;
				L_41 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_40, NULL);
				if (!L_41)
				{
					goto IL_016c_1;
				}
			}
			{
				// foreach (AnimationClip ac in _element.animClips) {
				InterfaceAnmElement_t02DC7282CF1F682DD0C071B9DE5637D4E58C5706* L_42 = V_2;
				NullCheck(L_42);
				AnimationClipU5BU5D_t48CE1A495BA95608745A065C735F2D5BB8DE5A0F* L_43 = L_42->___animClips_10;
				V_4 = L_43;
				V_5 = 0;
				goto IL_0162_1;
			}

IL_0122_1:
			{
				// foreach (AnimationClip ac in _element.animClips) {
				AnimationClipU5BU5D_t48CE1A495BA95608745A065C735F2D5BB8DE5A0F* L_44 = V_4;
				int32_t L_45 = V_5;
				NullCheck(L_44);
				int32_t L_46 = L_45;
				AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712* L_47 = (L_44)->GetAt(static_cast<il2cpp_array_size_t>(L_46));
				V_6 = L_47;
				// if (ac.name.ToLower().Contains("appear")) {
				AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712* L_48 = V_6;
				NullCheck(L_48);
				String_t* L_49;
				L_49 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_48, NULL);
				NullCheck(L_49);
				String_t* L_50;
				L_50 = String_ToLower_m6191ABA3DC514ED47C10BDA23FD0DDCEAE7ACFBD(L_49, NULL);
				NullCheck(L_50);
				bool L_51;
				L_51 = String_Contains_m6D77B121FADA7CA5F397C0FABB65DA62DF03B6C3(L_50, _stringLiteral5C28D7D10566D621893498A90686178A2F6038DC, NULL);
				if (!L_51)
				{
					goto IL_0173_1;
				}
			}
			{
				// _element.animator.Play(ac.name, -1, 0);
				InterfaceAnmElement_t02DC7282CF1F682DD0C071B9DE5637D4E58C5706* L_52 = V_2;
				NullCheck(L_52);
				Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_53 = L_52->___animator_9;
				AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712* L_54 = V_6;
				NullCheck(L_54);
				String_t* L_55;
				L_55 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_54, NULL);
				NullCheck(L_53);
				Animator_Play_m5565F093F0752D4DD9B451686F71C7A8F23F6744(L_53, L_55, (-1), (0.0f), NULL);
				// _element.currentState = CSFHIAnimableState.appearing;
				InterfaceAnmElement_t02DC7282CF1F682DD0C071B9DE5637D4E58C5706* L_56 = V_2;
				NullCheck(L_56);
				L_56->___currentState_12 = 0;
				// break;
				goto IL_0173_1;
			}

IL_0162_1:
			{
				// foreach (AnimationClip ac in _element.animClips) {
				int32_t L_57 = V_5;
				AnimationClipU5BU5D_t48CE1A495BA95608745A065C735F2D5BB8DE5A0F* L_58 = V_4;
				NullCheck(L_58);
				if ((((int32_t)L_57) < ((int32_t)((int32_t)(((RuntimeArray*)L_58)->max_length)))))
				{
					goto IL_0122_1;
				}
			}
			{
				goto IL_0173_1;
			}

IL_016c_1:
			{
				// _element.currentState = CSFHIAnimableState.appeared;
				InterfaceAnmElement_t02DC7282CF1F682DD0C071B9DE5637D4E58C5706* L_59 = V_2;
				NullCheck(L_59);
				L_59->___currentState_12 = 1;
			}

IL_0173_1:
			{
				// if (_element.isNested_IAM) {
				InterfaceAnmElement_t02DC7282CF1F682DD0C071B9DE5637D4E58C5706* L_60 = V_2;
				NullCheck(L_60);
				bool L_61 = L_60->___isNested_IAM_13;
				if (!L_61)
				{
					goto IL_01a7_1;
				}
			}
			{
				// if (waitAppear_Nested) {
				bool L_62 = __this->___waitAppear_Nested_21;
				if (!L_62)
				{
					goto IL_018a_1;
				}
			}
			{
				// waitElementFullAnim = _element;
				InterfaceAnmElement_t02DC7282CF1F682DD0C071B9DE5637D4E58C5706* L_63 = V_2;
				__this->___waitElementFullAnim_23 = L_63;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___waitElementFullAnim_23), (void*)L_63);
			}

IL_018a_1:
			{
				// _element.gameObjectRef.GetComponent<InterfaceAnimManager>().startAppear();
				InterfaceAnmElement_t02DC7282CF1F682DD0C071B9DE5637D4E58C5706* L_64 = V_2;
				NullCheck(L_64);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_65 = L_64->___gameObjectRef_4;
				NullCheck(L_65);
				InterfaceAnimManager_t55019D504BEA6534494FED15C7945911CE850962* L_66;
				L_66 = GameObject_GetComponent_TisInterfaceAnimManager_t55019D504BEA6534494FED15C7945911CE850962_m3C753C203152FD3ED8CE525C216473174957EB16(L_65, GameObject_GetComponent_TisInterfaceAnimManager_t55019D504BEA6534494FED15C7945911CE850962_m3C753C203152FD3ED8CE525C216473174957EB16_RuntimeMethod_var);
				NullCheck(L_66);
				VirtualActionInvoker1< bool >::Invoke(4 /* System.Void InterfaceAnimManager::startAppear(System.Boolean) */, L_66, (bool)0);
				// _element.currentState = CSFHIAnimableState.appearing;
				InterfaceAnmElement_t02DC7282CF1F682DD0C071B9DE5637D4E58C5706* L_67 = V_2;
				NullCheck(L_67);
				L_67->___currentState_12 = 0;
				goto IL_0287_1;
			}

IL_01a7_1:
			{
				// if (!_element.animator)
				InterfaceAnmElement_t02DC7282CF1F682DD0C071B9DE5637D4E58C5706* L_68 = V_2;
				NullCheck(L_68);
				Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_69 = L_68->___animator_9;
				il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
				bool L_70;
				L_70 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_69, NULL);
				if (L_70)
				{
					goto IL_0287_1;
				}
			}
			{
				// _element.currentState = CSFHIAnimableState.appeared;
				InterfaceAnmElement_t02DC7282CF1F682DD0C071B9DE5637D4E58C5706* L_71 = V_2;
				NullCheck(L_71);
				L_71->___currentState_12 = 1;
				goto IL_0287_1;
			}

IL_01c3_1:
			{
				// if (_element.animator && _element.currentState == CSFHIAnimableState.appearing) {
				InterfaceAnmElement_t02DC7282CF1F682DD0C071B9DE5637D4E58C5706* L_72 = V_2;
				NullCheck(L_72);
				Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_73 = L_72->___animator_9;
				il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
				bool L_74;
				L_74 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_73, NULL);
				if (!L_74)
				{
					goto IL_0287_1;
				}
			}
			{
				InterfaceAnmElement_t02DC7282CF1F682DD0C071B9DE5637D4E58C5706* L_75 = V_2;
				NullCheck(L_75);
				int32_t L_76 = L_75->___currentState_12;
				if (L_76)
				{
					goto IL_0287_1;
				}
			}
			{
				// string animName = "";
				V_7 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
				// foreach (AnimationClip ac in _element.animClips) {
				InterfaceAnmElement_t02DC7282CF1F682DD0C071B9DE5637D4E58C5706* L_77 = V_2;
				NullCheck(L_77);
				AnimationClipU5BU5D_t48CE1A495BA95608745A065C735F2D5BB8DE5A0F* L_78 = L_77->___animClips_10;
				V_4 = L_78;
				V_5 = 0;
				goto IL_022c_1;
			}

IL_01f2_1:
			{
				// foreach (AnimationClip ac in _element.animClips) {
				AnimationClipU5BU5D_t48CE1A495BA95608745A065C735F2D5BB8DE5A0F* L_79 = V_4;
				int32_t L_80 = V_5;
				NullCheck(L_79);
				int32_t L_81 = L_80;
				AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712* L_82 = (L_79)->GetAt(static_cast<il2cpp_array_size_t>(L_81));
				V_8 = L_82;
				// if (ac != null && ac.name.ToLower().Contains("appear")) {
				AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712* L_83 = V_8;
				il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
				bool L_84;
				L_84 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_83, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
				if (!L_84)
				{
					goto IL_0226_1;
				}
			}
			{
				AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712* L_85 = V_8;
				NullCheck(L_85);
				String_t* L_86;
				L_86 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_85, NULL);
				NullCheck(L_86);
				String_t* L_87;
				L_87 = String_ToLower_m6191ABA3DC514ED47C10BDA23FD0DDCEAE7ACFBD(L_86, NULL);
				NullCheck(L_87);
				bool L_88;
				L_88 = String_Contains_m6D77B121FADA7CA5F397C0FABB65DA62DF03B6C3(L_87, _stringLiteral5C28D7D10566D621893498A90686178A2F6038DC, NULL);
				if (!L_88)
				{
					goto IL_0226_1;
				}
			}
			{
				// animName = ac.name;
				AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712* L_89 = V_8;
				NullCheck(L_89);
				String_t* L_90;
				L_90 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_89, NULL);
				V_7 = L_90;
				// break;
				goto IL_0234_1;
			}

IL_0226_1:
			{
				int32_t L_91 = V_5;
				V_5 = ((int32_t)il2cpp_codegen_add(L_91, 1));
			}

IL_022c_1:
			{
				// foreach (AnimationClip ac in _element.animClips) {
				int32_t L_92 = V_5;
				AnimationClipU5BU5D_t48CE1A495BA95608745A065C735F2D5BB8DE5A0F* L_93 = V_4;
				NullCheck(L_93);
				if ((((int32_t)L_92) < ((int32_t)((int32_t)(((RuntimeArray*)L_93)->max_length)))))
				{
					goto IL_01f2_1;
				}
			}

IL_0234_1:
			{
				// if (_element.animator.GetCurrentAnimatorStateInfo(0).IsName(animName) && _element.animator.GetCurrentAnimatorStateInfo(0).normalizedTime >= 1 && !_element.animator.IsInTransition(0)) {
				InterfaceAnmElement_t02DC7282CF1F682DD0C071B9DE5637D4E58C5706* L_94 = V_2;
				NullCheck(L_94);
				Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_95 = L_94->___animator_9;
				NullCheck(L_95);
				AnimatorStateInfo_t1F47379289C7CE7FD588FBC3BBD79A777243B6B2 L_96;
				L_96 = Animator_GetCurrentAnimatorStateInfo_mD5B526FA605F6CFBC31B7DE36740F6AD1E534CAD(L_95, 0, NULL);
				V_9 = L_96;
				String_t* L_97 = V_7;
				bool L_98;
				L_98 = AnimatorStateInfo_IsName_mB936F493D6BDDB9372C8E9D813CE0416B002C4D0((&V_9), L_97, NULL);
				if (!L_98)
				{
					goto IL_0287_1;
				}
			}
			{
				InterfaceAnmElement_t02DC7282CF1F682DD0C071B9DE5637D4E58C5706* L_99 = V_2;
				NullCheck(L_99);
				Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_100 = L_99->___animator_9;
				NullCheck(L_100);
				AnimatorStateInfo_t1F47379289C7CE7FD588FBC3BBD79A777243B6B2 L_101;
				L_101 = Animator_GetCurrentAnimatorStateInfo_mD5B526FA605F6CFBC31B7DE36740F6AD1E534CAD(L_100, 0, NULL);
				V_9 = L_101;
				float L_102;
				L_102 = AnimatorStateInfo_get_normalizedTime_m087C7E5A72122ADF18EBB4AC8391103B9119CCC6((&V_9), NULL);
				if ((!(((float)L_102) >= ((float)(1.0f)))))
				{
					goto IL_0287_1;
				}
			}
			{
				InterfaceAnmElement_t02DC7282CF1F682DD0C071B9DE5637D4E58C5706* L_103 = V_2;
				NullCheck(L_103);
				Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_104 = L_103->___animator_9;
				NullCheck(L_104);
				bool L_105;
				L_105 = Animator_IsInTransition_mC2BD2CC7B7A11BAAA5396F1A2DAFD98D00AA2830(L_104, 0, NULL);
				if (L_105)
				{
					goto IL_0287_1;
				}
			}
			{
				// _element.currentState = CSFHIAnimableState.appeared;
				InterfaceAnmElement_t02DC7282CF1F682DD0C071B9DE5637D4E58C5706* L_106 = V_2;
				NullCheck(L_106);
				L_106->___currentState_12 = 1;
				goto IL_0287_1;
			}

IL_0280_1:
			{
				// if (useDelays){
				bool L_107 = __this->___useDelays_16;
			}

IL_0287_1:
			{
				// foreach (InterfaceAnmElement _element in elementsList) {
				bool L_108;
				L_108 = Enumerator_MoveNext_m95E1E769FF7A8208A46B05C694DD6C720FCE6C49((&V_1), Enumerator_MoveNext_m95E1E769FF7A8208A46B05C694DD6C720FCE6C49_RuntimeMethod_var);
				if (L_108)
				{
					goto IL_0087_1;
				}
			}
			{
				goto IL_02a3;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_02a3:
	{
		// if (forceUnscaledTime) {
		bool L_109 = __this->___forceUnscaledTime_12;
		if (!L_109)
		{
			goto IL_02bf;
		}
	}
	{
		// timer += Time.unscaledDeltaTime;
		float L_110 = __this->___timer_8;
		float L_111;
		L_111 = Time_get_unscaledDeltaTime_m89252D23CC5AA295CFA4EB2BCB417A831AC51652(NULL);
		__this->___timer_8 = ((float)il2cpp_codegen_add(L_110, L_111));
		goto IL_02d1;
	}

IL_02bf:
	{
		// timer += Time.deltaTime;
		float L_112 = __this->___timer_8;
		float L_113;
		L_113 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		__this->___timer_8 = ((float)il2cpp_codegen_add(L_112, L_113));
	}

IL_02d1:
	{
		// if ((testLoop && timer > appearDelay_SpeedMultiplier + timeBetweenLoops) || (!testLoop && timer > appearDelay_SpeedMultiplier + 1)) {
		bool L_114 = __this->___testLoop_10;
		if (!L_114)
		{
			goto IL_02ef;
		}
	}
	{
		float L_115 = __this->___timer_8;
		float L_116 = __this->___appearDelay_SpeedMultiplier_13;
		int32_t L_117 = __this->___timeBetweenLoops_9;
		if ((((float)L_115) > ((float)((float)il2cpp_codegen_add(L_116, ((float)L_117))))))
		{
			goto IL_0311;
		}
	}

IL_02ef:
	{
		bool L_118 = __this->___testLoop_10;
		if (L_118)
		{
			goto IL_079b;
		}
	}
	{
		float L_119 = __this->___timer_8;
		float L_120 = __this->___appearDelay_SpeedMultiplier_13;
		if ((!(((float)L_119) > ((float)((float)il2cpp_codegen_add(L_120, (1.0f)))))))
		{
			goto IL_079b;
		}
	}

IL_0311:
	{
		// EndAppear();
		InterfaceAnimManager_EndAppear_m0B1E2F6FD6299C2F62D5817B5B81CCD0F04FAF16(__this, NULL);
		// break;
		return;
	}

IL_0318:
	{
		// if (waitDisappear_Nested && waitElementFullAnim != null) {
		bool L_121 = __this->___waitDisappear_Nested_22;
		if (!L_121)
		{
			goto IL_0351;
		}
	}
	{
		InterfaceAnmElement_t02DC7282CF1F682DD0C071B9DE5637D4E58C5706* L_122 = __this->___waitElementFullAnim_23;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_123;
		L_123 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_122, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_123)
		{
			goto IL_0351;
		}
	}
	{
		// if (waitElementFullAnim.gameObjectRef.GetComponent<InterfaceAnimManager>().currentState == CSFHIAnimableState.disappeared) {
		InterfaceAnmElement_t02DC7282CF1F682DD0C071B9DE5637D4E58C5706* L_124 = __this->___waitElementFullAnim_23;
		NullCheck(L_124);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_125 = L_124->___gameObjectRef_4;
		NullCheck(L_125);
		InterfaceAnimManager_t55019D504BEA6534494FED15C7945911CE850962* L_126;
		L_126 = GameObject_GetComponent_TisInterfaceAnimManager_t55019D504BEA6534494FED15C7945911CE850962_m3C753C203152FD3ED8CE525C216473174957EB16(L_125, GameObject_GetComponent_TisInterfaceAnimManager_t55019D504BEA6534494FED15C7945911CE850962_m3C753C203152FD3ED8CE525C216473174957EB16_RuntimeMethod_var);
		NullCheck(L_126);
		int32_t L_127 = L_126->___currentState_15;
		if ((!(((uint32_t)L_127) == ((uint32_t)3))))
		{
			goto IL_079b;
		}
	}
	{
		// waitElementFullAnim = null;
		__this->___waitElementFullAnim_23 = (InterfaceAnmElement_t02DC7282CF1F682DD0C071B9DE5637D4E58C5706*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___waitElementFullAnim_23), (void*)(InterfaceAnmElement_t02DC7282CF1F682DD0C071B9DE5637D4E58C5706*)NULL);
		return;
	}

IL_0351:
	{
		// foreach (InterfaceAnmElement _element in elementsList) {
		List_1_t2F48DCC67405C354E57C9C3263548DB2D541DBB0* L_128 = __this->___elementsList_4;
		NullCheck(L_128);
		Enumerator_tBE821E8DBC9F67CC069BF33B74F05F0A2270F44E L_129;
		L_129 = List_1_GetEnumerator_m736E8835B6C02CAC94A7EA21A8B0B17D38246CAF(L_128, List_1_GetEnumerator_m736E8835B6C02CAC94A7EA21A8B0B17D38246CAF_RuntimeMethod_var);
		V_1 = L_129;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_05a3:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m05F5DC7DDC52C222E3CC2A5F3E80A9CAC2EC68AE((&V_1), Enumerator_Dispose_m05F5DC7DDC52C222E3CC2A5F3E80A9CAC2EC68AE_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0595_1;
			}

IL_0362_1:
			{
				// foreach (InterfaceAnmElement _element in elementsList) {
				InterfaceAnmElement_t02DC7282CF1F682DD0C071B9DE5637D4E58C5706* L_130;
				L_130 = Enumerator_get_Current_m1BBA4A743DD622178C8A15E930ADDEE490553A80_inline((&V_1), Enumerator_get_Current_m1BBA4A743DD622178C8A15E930ADDEE490553A80_RuntimeMethod_var);
				V_11 = L_130;
				// if (!useDelays || timer > _element.timeDisappear * disappearDelay_SpeedMultiplier || _element.timeDisappear==0) {
				bool L_131 = __this->___useDelays_16;
				if (!L_131)
				{
					goto IL_039a_1;
				}
			}
			{
				float L_132 = __this->___timer_8;
				InterfaceAnmElement_t02DC7282CF1F682DD0C071B9DE5637D4E58C5706* L_133 = V_11;
				NullCheck(L_133);
				float L_134 = L_133->___timeDisappear_6;
				float L_135 = __this->___disappearDelay_SpeedMultiplier_14;
				if ((((float)L_132) > ((float)((float)il2cpp_codegen_multiply(L_134, L_135)))))
				{
					goto IL_039a_1;
				}
			}
			{
				InterfaceAnmElement_t02DC7282CF1F682DD0C071B9DE5637D4E58C5706* L_136 = V_11;
				NullCheck(L_136);
				float L_137 = L_136->___timeDisappear_6;
				if ((!(((float)L_137) == ((float)(0.0f)))))
				{
					goto IL_0595_1;
				}
			}

IL_039a_1:
			{
				// if (_element.currentState != CSFHIAnimableState.disappearing && _element.currentState != CSFHIAnimableState.disappeared) { //we don't check by isActive, because some elements can appear and disappear just for the time of the overall apparition, and aren't meant to last after that
				InterfaceAnmElement_t02DC7282CF1F682DD0C071B9DE5637D4E58C5706* L_138 = V_11;
				NullCheck(L_138);
				int32_t L_139 = L_138->___currentState_12;
				if ((((int32_t)L_139) == ((int32_t)2)))
				{
					goto IL_04e3_1;
				}
			}
			{
				InterfaceAnmElement_t02DC7282CF1F682DD0C071B9DE5637D4E58C5706* L_140 = V_11;
				NullCheck(L_140);
				int32_t L_141 = L_140->___currentState_12;
				if ((((int32_t)L_141) == ((int32_t)3)))
				{
					goto IL_04e3_1;
				}
			}
			{
				// if (_element.isNested_IAM) {
				InterfaceAnmElement_t02DC7282CF1F682DD0C071B9DE5637D4E58C5706* L_142 = V_11;
				NullCheck(L_142);
				bool L_143 = L_142->___isNested_IAM_13;
				if (!L_143)
				{
					goto IL_0419_1;
				}
			}
			{
				// if (_element.gameObjectRef.GetComponent<InterfaceAnimManager>().currentState == CSFHIAnimableState.appeared || _element.gameObjectRef.GetComponent<InterfaceAnimManager>().currentState == CSFHIAnimableState.appearing) {
				InterfaceAnmElement_t02DC7282CF1F682DD0C071B9DE5637D4E58C5706* L_144 = V_11;
				NullCheck(L_144);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_145 = L_144->___gameObjectRef_4;
				NullCheck(L_145);
				InterfaceAnimManager_t55019D504BEA6534494FED15C7945911CE850962* L_146;
				L_146 = GameObject_GetComponent_TisInterfaceAnimManager_t55019D504BEA6534494FED15C7945911CE850962_m3C753C203152FD3ED8CE525C216473174957EB16(L_145, GameObject_GetComponent_TisInterfaceAnimManager_t55019D504BEA6534494FED15C7945911CE850962_m3C753C203152FD3ED8CE525C216473174957EB16_RuntimeMethod_var);
				NullCheck(L_146);
				int32_t L_147 = L_146->___currentState_15;
				if ((((int32_t)L_147) == ((int32_t)1)))
				{
					goto IL_03e7_1;
				}
			}
			{
				InterfaceAnmElement_t02DC7282CF1F682DD0C071B9DE5637D4E58C5706* L_148 = V_11;
				NullCheck(L_148);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_149 = L_148->___gameObjectRef_4;
				NullCheck(L_149);
				InterfaceAnimManager_t55019D504BEA6534494FED15C7945911CE850962* L_150;
				L_150 = GameObject_GetComponent_TisInterfaceAnimManager_t55019D504BEA6534494FED15C7945911CE850962_m3C753C203152FD3ED8CE525C216473174957EB16(L_149, GameObject_GetComponent_TisInterfaceAnimManager_t55019D504BEA6534494FED15C7945911CE850962_m3C753C203152FD3ED8CE525C216473174957EB16_RuntimeMethod_var);
				NullCheck(L_150);
				int32_t L_151 = L_150->___currentState_15;
				if (L_151)
				{
					goto IL_04e3_1;
				}
			}

IL_03e7_1:
			{
				// _element.gameObjectRef.GetComponent<InterfaceAnimManager>().startDisappear();
				InterfaceAnmElement_t02DC7282CF1F682DD0C071B9DE5637D4E58C5706* L_152 = V_11;
				NullCheck(L_152);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_153 = L_152->___gameObjectRef_4;
				NullCheck(L_153);
				InterfaceAnimManager_t55019D504BEA6534494FED15C7945911CE850962* L_154;
				L_154 = GameObject_GetComponent_TisInterfaceAnimManager_t55019D504BEA6534494FED15C7945911CE850962_m3C753C203152FD3ED8CE525C216473174957EB16(L_153, GameObject_GetComponent_TisInterfaceAnimManager_t55019D504BEA6534494FED15C7945911CE850962_m3C753C203152FD3ED8CE525C216473174957EB16_RuntimeMethod_var);
				NullCheck(L_154);
				VirtualActionInvoker1< bool >::Invoke(5 /* System.Void InterfaceAnimManager::startDisappear(System.Boolean) */, L_154, (bool)0);
				// _element.currentState = CSFHIAnimableState.disappearing;
				InterfaceAnmElement_t02DC7282CF1F682DD0C071B9DE5637D4E58C5706* L_155 = V_11;
				NullCheck(L_155);
				L_155->___currentState_12 = 2;
				// if (waitDisappear_Nested) {
				bool L_156 = __this->___waitDisappear_Nested_22;
				if (!L_156)
				{
					goto IL_04e3_1;
				}
			}
			{
				// waitElementFullAnim = _element;
				InterfaceAnmElement_t02DC7282CF1F682DD0C071B9DE5637D4E58C5706* L_157 = V_11;
				__this->___waitElementFullAnim_23 = L_157;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___waitElementFullAnim_23), (void*)L_157);
				goto IL_04e3_1;
			}

IL_0419_1:
			{
				// bool hasAnm = false;
				V_12 = (bool)0;
				// if (_element.animator) {
				InterfaceAnmElement_t02DC7282CF1F682DD0C071B9DE5637D4E58C5706* L_158 = V_11;
				NullCheck(L_158);
				Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_159 = L_158->___animator_9;
				il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
				bool L_160;
				L_160 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_159, NULL);
				if (!L_160)
				{
					goto IL_04ca_1;
				}
			}
			{
				// foreach (AnimationClip ac in _element.animClips) {
				InterfaceAnmElement_t02DC7282CF1F682DD0C071B9DE5637D4E58C5706* L_161 = V_11;
				NullCheck(L_161);
				AnimationClipU5BU5D_t48CE1A495BA95608745A065C735F2D5BB8DE5A0F* L_162 = L_161->___animClips_10;
				V_4 = L_162;
				V_5 = 0;
				goto IL_04bf_1;
			}

IL_043e_1:
			{
				// foreach (AnimationClip ac in _element.animClips) {
				AnimationClipU5BU5D_t48CE1A495BA95608745A065C735F2D5BB8DE5A0F* L_163 = V_4;
				int32_t L_164 = V_5;
				NullCheck(L_163);
				int32_t L_165 = L_164;
				AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712* L_166 = (L_163)->GetAt(static_cast<il2cpp_array_size_t>(L_165));
				V_13 = L_166;
				// if (ac.name.ToLower().Contains("disappear")) {
				AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712* L_167 = V_13;
				NullCheck(L_167);
				String_t* L_168;
				L_168 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_167, NULL);
				NullCheck(L_168);
				String_t* L_169;
				L_169 = String_ToLower_m6191ABA3DC514ED47C10BDA23FD0DDCEAE7ACFBD(L_168, NULL);
				NullCheck(L_169);
				bool L_170;
				L_170 = String_Contains_m6D77B121FADA7CA5F397C0FABB65DA62DF03B6C3(L_169, _stringLiteral2DE805987DEDE406141897309B2F4E2D3570467E, NULL);
				if (!L_170)
				{
					goto IL_04b9_1;
				}
			}
			{
				// if (_element.animator) {
				InterfaceAnmElement_t02DC7282CF1F682DD0C071B9DE5637D4E58C5706* L_171 = V_11;
				NullCheck(L_171);
				Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_172 = L_171->___animator_9;
				il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
				bool L_173;
				L_173 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_172, NULL);
				if (!L_173)
				{
					goto IL_04ca_1;
				}
			}
			{
				// for (int layerIndex = 0; layerIndex < _element.animator.layerCount; layerIndex++) {
				V_14 = 0;
				goto IL_0489_1;
			}

IL_0470_1:
			{
				// _element.animator.SetLayerWeight(layerIndex, 0);
				InterfaceAnmElement_t02DC7282CF1F682DD0C071B9DE5637D4E58C5706* L_174 = V_11;
				NullCheck(L_174);
				Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_175 = L_174->___animator_9;
				int32_t L_176 = V_14;
				NullCheck(L_175);
				Animator_SetLayerWeight_m06ADC732F76F22B4B1424F25525E7CBB80E6230F(L_175, L_176, (0.0f), NULL);
				// for (int layerIndex = 0; layerIndex < _element.animator.layerCount; layerIndex++) {
				int32_t L_177 = V_14;
				V_14 = ((int32_t)il2cpp_codegen_add(L_177, 1));
			}

IL_0489_1:
			{
				// for (int layerIndex = 0; layerIndex < _element.animator.layerCount; layerIndex++) {
				int32_t L_178 = V_14;
				InterfaceAnmElement_t02DC7282CF1F682DD0C071B9DE5637D4E58C5706* L_179 = V_11;
				NullCheck(L_179);
				Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_180 = L_179->___animator_9;
				NullCheck(L_180);
				int32_t L_181;
				L_181 = Animator_get_layerCount_m75C20E7284800DFA0E4AD7EC23910BDB6D62BDA8(L_180, NULL);
				if ((((int32_t)L_178) < ((int32_t)L_181)))
				{
					goto IL_0470_1;
				}
			}
			{
				// _element.currentState = CSFHIAnimableState.disappearing;
				InterfaceAnmElement_t02DC7282CF1F682DD0C071B9DE5637D4E58C5706* L_182 = V_11;
				NullCheck(L_182);
				L_182->___currentState_12 = 2;
				// _element.animator.Play(ac.name);
				InterfaceAnmElement_t02DC7282CF1F682DD0C071B9DE5637D4E58C5706* L_183 = V_11;
				NullCheck(L_183);
				Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_184 = L_183->___animator_9;
				AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712* L_185 = V_13;
				NullCheck(L_185);
				String_t* L_186;
				L_186 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_185, NULL);
				NullCheck(L_184);
				Animator_Play_m0F6A9F84B2E256E644D56C34A7A9BD622CB00FF9(L_184, L_186, NULL);
				// hasAnm = true;
				V_12 = (bool)1;
				// break;
				goto IL_04ca_1;
			}

IL_04b9_1:
			{
				int32_t L_187 = V_5;
				V_5 = ((int32_t)il2cpp_codegen_add(L_187, 1));
			}

IL_04bf_1:
			{
				// foreach (AnimationClip ac in _element.animClips) {
				int32_t L_188 = V_5;
				AnimationClipU5BU5D_t48CE1A495BA95608745A065C735F2D5BB8DE5A0F* L_189 = V_4;
				NullCheck(L_189);
				if ((((int32_t)L_188) < ((int32_t)((int32_t)(((RuntimeArray*)L_189)->max_length)))))
				{
					goto IL_043e_1;
				}
			}

IL_04ca_1:
			{
				// if (!hasAnm) {
				bool L_190 = V_12;
				if (L_190)
				{
					goto IL_04e3_1;
				}
			}
			{
				// _element.gameObjectRef.SetActive(false);
				InterfaceAnmElement_t02DC7282CF1F682DD0C071B9DE5637D4E58C5706* L_191 = V_11;
				NullCheck(L_191);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_192 = L_191->___gameObjectRef_4;
				NullCheck(L_192);
				GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_192, (bool)0, NULL);
				// _element.currentState = CSFHIAnimableState.disappeared;
				InterfaceAnmElement_t02DC7282CF1F682DD0C071B9DE5637D4E58C5706* L_193 = V_11;
				NullCheck(L_193);
				L_193->___currentState_12 = 3;
			}

IL_04e3_1:
			{
				// if (!_element.isNested_IAM && _element.currentState == CSFHIAnimableState.disappearing) { //has an anim, already confirmed above
				InterfaceAnmElement_t02DC7282CF1F682DD0C071B9DE5637D4E58C5706* L_194 = V_11;
				NullCheck(L_194);
				bool L_195 = L_194->___isNested_IAM_13;
				if (L_195)
				{
					goto IL_0595_1;
				}
			}
			{
				InterfaceAnmElement_t02DC7282CF1F682DD0C071B9DE5637D4E58C5706* L_196 = V_11;
				NullCheck(L_196);
				int32_t L_197 = L_196->___currentState_12;
				if ((!(((uint32_t)L_197) == ((uint32_t)2))))
				{
					goto IL_0595_1;
				}
			}
			{
				// string animName = "";
				V_15 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
				// foreach (AnimationClip ac in _element.animClips) {
				InterfaceAnmElement_t02DC7282CF1F682DD0C071B9DE5637D4E58C5706* L_198 = V_11;
				NullCheck(L_198);
				AnimationClipU5BU5D_t48CE1A495BA95608745A065C735F2D5BB8DE5A0F* L_199 = L_198->___animClips_10;
				V_4 = L_199;
				V_5 = 0;
				goto IL_0541_1;
			}

IL_0511_1:
			{
				// foreach (AnimationClip ac in _element.animClips) {
				AnimationClipU5BU5D_t48CE1A495BA95608745A065C735F2D5BB8DE5A0F* L_200 = V_4;
				int32_t L_201 = V_5;
				NullCheck(L_200);
				int32_t L_202 = L_201;
				AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712* L_203 = (L_200)->GetAt(static_cast<il2cpp_array_size_t>(L_202));
				V_16 = L_203;
				// if (ac.name.ToLower().Contains("disappear")) {
				AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712* L_204 = V_16;
				NullCheck(L_204);
				String_t* L_205;
				L_205 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_204, NULL);
				NullCheck(L_205);
				String_t* L_206;
				L_206 = String_ToLower_m6191ABA3DC514ED47C10BDA23FD0DDCEAE7ACFBD(L_205, NULL);
				NullCheck(L_206);
				bool L_207;
				L_207 = String_Contains_m6D77B121FADA7CA5F397C0FABB65DA62DF03B6C3(L_206, _stringLiteral2DE805987DEDE406141897309B2F4E2D3570467E, NULL);
				if (!L_207)
				{
					goto IL_053b_1;
				}
			}
			{
				// animName = ac.name;
				AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712* L_208 = V_16;
				NullCheck(L_208);
				String_t* L_209;
				L_209 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_208, NULL);
				V_15 = L_209;
				// break;
				goto IL_0549_1;
			}

IL_053b_1:
			{
				int32_t L_210 = V_5;
				V_5 = ((int32_t)il2cpp_codegen_add(L_210, 1));
			}

IL_0541_1:
			{
				// foreach (AnimationClip ac in _element.animClips) {
				int32_t L_211 = V_5;
				AnimationClipU5BU5D_t48CE1A495BA95608745A065C735F2D5BB8DE5A0F* L_212 = V_4;
				NullCheck(L_212);
				if ((((int32_t)L_211) < ((int32_t)((int32_t)(((RuntimeArray*)L_212)->max_length)))))
				{
					goto IL_0511_1;
				}
			}

IL_0549_1:
			{
				// if (_element.animator.GetCurrentAnimatorStateInfo(0).IsName(animName) && _element.animator.GetCurrentAnimatorStateInfo(0).normalizedTime >= 1) {
				InterfaceAnmElement_t02DC7282CF1F682DD0C071B9DE5637D4E58C5706* L_213 = V_11;
				NullCheck(L_213);
				Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_214 = L_213->___animator_9;
				NullCheck(L_214);
				AnimatorStateInfo_t1F47379289C7CE7FD588FBC3BBD79A777243B6B2 L_215;
				L_215 = Animator_GetCurrentAnimatorStateInfo_mD5B526FA605F6CFBC31B7DE36740F6AD1E534CAD(L_214, 0, NULL);
				V_9 = L_215;
				String_t* L_216 = V_15;
				bool L_217;
				L_217 = AnimatorStateInfo_IsName_mB936F493D6BDDB9372C8E9D813CE0416B002C4D0((&V_9), L_216, NULL);
				if (!L_217)
				{
					goto IL_0595_1;
				}
			}
			{
				InterfaceAnmElement_t02DC7282CF1F682DD0C071B9DE5637D4E58C5706* L_218 = V_11;
				NullCheck(L_218);
				Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_219 = L_218->___animator_9;
				NullCheck(L_219);
				AnimatorStateInfo_t1F47379289C7CE7FD588FBC3BBD79A777243B6B2 L_220;
				L_220 = Animator_GetCurrentAnimatorStateInfo_mD5B526FA605F6CFBC31B7DE36740F6AD1E534CAD(L_219, 0, NULL);
				V_9 = L_220;
				float L_221;
				L_221 = AnimatorStateInfo_get_normalizedTime_m087C7E5A72122ADF18EBB4AC8391103B9119CCC6((&V_9), NULL);
				if ((!(((float)L_221) >= ((float)(1.0f)))))
				{
					goto IL_0595_1;
				}
			}
			{
				// _element.currentState = CSFHIAnimableState.disappeared;
				InterfaceAnmElement_t02DC7282CF1F682DD0C071B9DE5637D4E58C5706* L_222 = V_11;
				NullCheck(L_222);
				L_222->___currentState_12 = 3;
				// _element.gameObjectRef.SetActive(false);
				InterfaceAnmElement_t02DC7282CF1F682DD0C071B9DE5637D4E58C5706* L_223 = V_11;
				NullCheck(L_223);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_224 = L_223->___gameObjectRef_4;
				NullCheck(L_224);
				GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_224, (bool)0, NULL);
			}

IL_0595_1:
			{
				// foreach (InterfaceAnmElement _element in elementsList) {
				bool L_225;
				L_225 = Enumerator_MoveNext_m95E1E769FF7A8208A46B05C694DD6C720FCE6C49((&V_1), Enumerator_MoveNext_m95E1E769FF7A8208A46B05C694DD6C720FCE6C49_RuntimeMethod_var);
				if (L_225)
				{
					goto IL_0362_1;
				}
			}
			{
				goto IL_05b1;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_05b1:
	{
		// bool cancel = true;
		V_10 = (bool)1;
		// foreach (InterfaceAnmElement _element2 in elementsList) {
		List_1_t2F48DCC67405C354E57C9C3263548DB2D541DBB0* L_226 = __this->___elementsList_4;
		NullCheck(L_226);
		Enumerator_tBE821E8DBC9F67CC069BF33B74F05F0A2270F44E L_227;
		L_227 = List_1_GetEnumerator_m736E8835B6C02CAC94A7EA21A8B0B17D38246CAF(L_226, List_1_GetEnumerator_m736E8835B6C02CAC94A7EA21A8B0B17D38246CAF_RuntimeMethod_var);
		V_1 = L_227;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_05e1:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m05F5DC7DDC52C222E3CC2A5F3E80A9CAC2EC68AE((&V_1), Enumerator_Dispose_m05F5DC7DDC52C222E3CC2A5F3E80A9CAC2EC68AE_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_05d6_1;
			}

IL_05c2_1:
			{
				// foreach (InterfaceAnmElement _element2 in elementsList) {
				InterfaceAnmElement_t02DC7282CF1F682DD0C071B9DE5637D4E58C5706* L_228;
				L_228 = Enumerator_get_Current_m1BBA4A743DD622178C8A15E930ADDEE490553A80_inline((&V_1), Enumerator_get_Current_m1BBA4A743DD622178C8A15E930ADDEE490553A80_RuntimeMethod_var);
				// if (_element2.currentState != CSFHIAnimableState.disappearing) {
				NullCheck(L_228);
				int32_t L_229 = L_228->___currentState_12;
				if ((((int32_t)L_229) == ((int32_t)2)))
				{
					goto IL_05d6_1;
				}
			}
			{
				// cancel = false;
				V_10 = (bool)0;
				// break;
				goto IL_05ef;
			}

IL_05d6_1:
			{
				// foreach (InterfaceAnmElement _element2 in elementsList) {
				bool L_230;
				L_230 = Enumerator_MoveNext_m95E1E769FF7A8208A46B05C694DD6C720FCE6C49((&V_1), Enumerator_MoveNext_m95E1E769FF7A8208A46B05C694DD6C720FCE6C49_RuntimeMethod_var);
				if (L_230)
				{
					goto IL_05c2_1;
				}
			}
			{
				goto IL_05ef;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_05ef:
	{
		// if (cancel)
		bool L_231 = V_10;
		if (!L_231)
		{
			goto IL_0600;
		}
	}
	{
		// StartCoroutine(Disable_OnDisappearEnd());
		RuntimeObject* L_232;
		L_232 = InterfaceAnimManager_Disable_OnDisappearEnd_m07592854CB8B7F15532C8784E4C197E0B668DA93(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_233;
		L_233 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_232, NULL);
	}

IL_0600:
	{
		// if (forceUnscaledTime) {
		bool L_234 = __this->___forceUnscaledTime_12;
		if (!L_234)
		{
			goto IL_061c;
		}
	}
	{
		// timer += Time.unscaledDeltaTime;
		float L_235 = __this->___timer_8;
		float L_236;
		L_236 = Time_get_unscaledDeltaTime_m89252D23CC5AA295CFA4EB2BCB417A831AC51652(NULL);
		__this->___timer_8 = ((float)il2cpp_codegen_add(L_235, L_236));
		goto IL_062e;
	}

IL_061c:
	{
		// timer += Time.deltaTime;
		float L_237 = __this->___timer_8;
		float L_238;
		L_238 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		__this->___timer_8 = ((float)il2cpp_codegen_add(L_237, L_238));
	}

IL_062e:
	{
		// foreach (InterfaceAnmElement _IAM in elementsList) {
		List_1_t2F48DCC67405C354E57C9C3263548DB2D541DBB0* L_239 = __this->___elementsList_4;
		NullCheck(L_239);
		Enumerator_tBE821E8DBC9F67CC069BF33B74F05F0A2270F44E L_240;
		L_240 = List_1_GetEnumerator_m736E8835B6C02CAC94A7EA21A8B0B17D38246CAF(L_239, List_1_GetEnumerator_m736E8835B6C02CAC94A7EA21A8B0B17D38246CAF_RuntimeMethod_var);
		V_1 = L_240;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0672:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m05F5DC7DDC52C222E3CC2A5F3E80A9CAC2EC68AE((&V_1), Enumerator_Dispose_m05F5DC7DDC52C222E3CC2A5F3E80A9CAC2EC68AE_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0667_1;
			}

IL_063c_1:
			{
				// foreach (InterfaceAnmElement _IAM in elementsList) {
				InterfaceAnmElement_t02DC7282CF1F682DD0C071B9DE5637D4E58C5706* L_241;
				L_241 = Enumerator_get_Current_m1BBA4A743DD622178C8A15E930ADDEE490553A80_inline((&V_1), Enumerator_get_Current_m1BBA4A743DD622178C8A15E930ADDEE490553A80_RuntimeMethod_var);
				V_17 = L_241;
				// if (_IAM.isNested_IAM && _IAM.gameObjectRef.GetComponent<InterfaceAnimManager>().currentState != CSFHIAnimableState.disappeared) {
				InterfaceAnmElement_t02DC7282CF1F682DD0C071B9DE5637D4E58C5706* L_242 = V_17;
				NullCheck(L_242);
				bool L_243 = L_242->___isNested_IAM_13;
				if (!L_243)
				{
					goto IL_0667_1;
				}
			}
			{
				InterfaceAnmElement_t02DC7282CF1F682DD0C071B9DE5637D4E58C5706* L_244 = V_17;
				NullCheck(L_244);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_245 = L_244->___gameObjectRef_4;
				NullCheck(L_245);
				InterfaceAnimManager_t55019D504BEA6534494FED15C7945911CE850962* L_246;
				L_246 = GameObject_GetComponent_TisInterfaceAnimManager_t55019D504BEA6534494FED15C7945911CE850962_m3C753C203152FD3ED8CE525C216473174957EB16(L_245, GameObject_GetComponent_TisInterfaceAnimManager_t55019D504BEA6534494FED15C7945911CE850962_m3C753C203152FD3ED8CE525C216473174957EB16_RuntimeMethod_var);
				NullCheck(L_246);
				int32_t L_247 = L_246->___currentState_15;
				if ((((int32_t)L_247) == ((int32_t)3)))
				{
					goto IL_0667_1;
				}
			}
			{
				// return;
				goto IL_079b;
			}

IL_0667_1:
			{
				// foreach (InterfaceAnmElement _IAM in elementsList) {
				bool L_248;
				L_248 = Enumerator_MoveNext_m95E1E769FF7A8208A46B05C694DD6C720FCE6C49((&V_1), Enumerator_MoveNext_m95E1E769FF7A8208A46B05C694DD6C720FCE6C49_RuntimeMethod_var);
				if (L_248)
				{
					goto IL_063c_1;
				}
			}
			{
				goto IL_0680;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0680:
	{
		// if (audioSource && audioSource.enabled && audioSource.clip != closeSound) {
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_249 = __this->___audioSource_17;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_250;
		L_250 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_249, NULL);
		if (!L_250)
		{
			goto IL_06ce;
		}
	}
	{
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_251 = __this->___audioSource_17;
		NullCheck(L_251);
		bool L_252;
		L_252 = Behaviour_get_enabled_mAAC9F15E9EBF552217A5AE2681589CC0BFA300C1(L_251, NULL);
		if (!L_252)
		{
			goto IL_06ce;
		}
	}
	{
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_253 = __this->___audioSource_17;
		NullCheck(L_253);
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_254;
		L_254 = AudioSource_get_clip_m4F5027066F9FC44B44192713142B0C277BB418FE(L_253, NULL);
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_255 = __this->___closeSound_19;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_256;
		L_256 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_254, L_255, NULL);
		if (!L_256)
		{
			goto IL_06ce;
		}
	}
	{
		// audioSource.clip = closeSound;
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_257 = __this->___audioSource_17;
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_258 = __this->___closeSound_19;
		NullCheck(L_257);
		AudioSource_set_clip_mFF441895E274286C88D9C75ED5CA1B1B39528D70(L_257, L_258, NULL);
		// audioSource.Play();
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_259 = __this->___audioSource_17;
		NullCheck(L_259);
		AudioSource_Play_m95DF07111C61D0E0F00257A00384D31531D590C3(L_259, NULL);
	}

IL_06ce:
	{
		// if ((testLoop && timer >= disappearDelay_SpeedMultiplier + timeBetweenLoops) || (!testLoop && timer >= disappearDelay_SpeedMultiplier)) {
		bool L_260 = __this->___testLoop_10;
		if (!L_260)
		{
			goto IL_06ec;
		}
	}
	{
		float L_261 = __this->___timer_8;
		float L_262 = __this->___disappearDelay_SpeedMultiplier_14;
		int32_t L_263 = __this->___timeBetweenLoops_9;
		if ((((float)L_261) >= ((float)((float)il2cpp_codegen_add(L_262, ((float)L_263))))))
		{
			goto IL_0708;
		}
	}

IL_06ec:
	{
		bool L_264 = __this->___testLoop_10;
		if (L_264)
		{
			goto IL_079b;
		}
	}
	{
		float L_265 = __this->___timer_8;
		float L_266 = __this->___disappearDelay_SpeedMultiplier_14;
		if ((!(((float)L_265) >= ((float)L_266))))
		{
			goto IL_079b;
		}
	}

IL_0708:
	{
		// foreach (InterfaceAnmElement _element in elementsList) {
		List_1_t2F48DCC67405C354E57C9C3263548DB2D541DBB0* L_267 = __this->___elementsList_4;
		NullCheck(L_267);
		Enumerator_tBE821E8DBC9F67CC069BF33B74F05F0A2270F44E L_268;
		L_268 = List_1_GetEnumerator_m736E8835B6C02CAC94A7EA21A8B0B17D38246CAF(L_267, List_1_GetEnumerator_m736E8835B6C02CAC94A7EA21A8B0B17D38246CAF_RuntimeMethod_var);
		V_1 = L_268;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_075e:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m05F5DC7DDC52C222E3CC2A5F3E80A9CAC2EC68AE((&V_1), Enumerator_Dispose_m05F5DC7DDC52C222E3CC2A5F3E80A9CAC2EC68AE_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0753_1;
			}

IL_0716_1:
			{
				// foreach (InterfaceAnmElement _element in elementsList) {
				InterfaceAnmElement_t02DC7282CF1F682DD0C071B9DE5637D4E58C5706* L_269;
				L_269 = Enumerator_get_Current_m1BBA4A743DD622178C8A15E930ADDEE490553A80_inline((&V_1), Enumerator_get_Current_m1BBA4A743DD622178C8A15E930ADDEE490553A80_RuntimeMethod_var);
				V_18 = L_269;
				// if (_element.isNested_IAM && _element.gameObjectRef.GetComponent<InterfaceAnimManager>().currentState != CSFHIAnimableState.disappeared) {
				InterfaceAnmElement_t02DC7282CF1F682DD0C071B9DE5637D4E58C5706* L_270 = V_18;
				NullCheck(L_270);
				bool L_271 = L_270->___isNested_IAM_13;
				if (!L_271)
				{
					goto IL_073e_1;
				}
			}
			{
				InterfaceAnmElement_t02DC7282CF1F682DD0C071B9DE5637D4E58C5706* L_272 = V_18;
				NullCheck(L_272);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_273 = L_272->___gameObjectRef_4;
				NullCheck(L_273);
				InterfaceAnimManager_t55019D504BEA6534494FED15C7945911CE850962* L_274;
				L_274 = GameObject_GetComponent_TisInterfaceAnimManager_t55019D504BEA6534494FED15C7945911CE850962_m3C753C203152FD3ED8CE525C216473174957EB16(L_273, GameObject_GetComponent_TisInterfaceAnimManager_t55019D504BEA6534494FED15C7945911CE850962_m3C753C203152FD3ED8CE525C216473174957EB16_RuntimeMethod_var);
				NullCheck(L_274);
				int32_t L_275 = L_274->___currentState_15;
				if ((((int32_t)L_275) == ((int32_t)3)))
				{
					goto IL_073e_1;
				}
			}
			{
				// return;
				goto IL_079b;
			}

IL_073e_1:
			{
				// if (!_element.isNested_IAM && _element.currentState != CSFHIAnimableState.disappeared) {
				InterfaceAnmElement_t02DC7282CF1F682DD0C071B9DE5637D4E58C5706* L_276 = V_18;
				NullCheck(L_276);
				bool L_277 = L_276->___isNested_IAM_13;
				if (L_277)
				{
					goto IL_0753_1;
				}
			}
			{
				InterfaceAnmElement_t02DC7282CF1F682DD0C071B9DE5637D4E58C5706* L_278 = V_18;
				NullCheck(L_278);
				int32_t L_279 = L_278->___currentState_12;
				if ((((int32_t)L_279) == ((int32_t)3)))
				{
					goto IL_0753_1;
				}
			}
			{
				// return;
				goto IL_079b;
			}

IL_0753_1:
			{
				// foreach (InterfaceAnmElement _element in elementsList) {
				bool L_280;
				L_280 = Enumerator_MoveNext_m95E1E769FF7A8208A46B05C694DD6C720FCE6C49((&V_1), Enumerator_MoveNext_m95E1E769FF7A8208A46B05C694DD6C720FCE6C49_RuntimeMethod_var);
				if (L_280)
				{
					goto IL_0716_1;
				}
			}
			{
				goto IL_076c;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_076c:
	{
		// EndDisappear();
		InterfaceAnimManager_EndDisappear_m5D0D99EC31BED76A2466B8E3AE6DB69C9AD1026C(__this, NULL);
		// break;
		return;
	}

IL_0773:
	{
		// if (testLoop) {
		bool L_281 = __this->___testLoop_10;
		if (!L_281)
		{
			goto IL_079b;
		}
	}
	{
		// if (currentState == CSFHIAnimableState.appeared) {
		int32_t L_282 = __this->___currentState_15;
		if ((!(((uint32_t)L_282) == ((uint32_t)1))))
		{
			goto IL_078b;
		}
	}
	{
		// startDisappear();
		VirtualActionInvoker1< bool >::Invoke(5 /* System.Void InterfaceAnimManager::startDisappear(System.Boolean) */, __this, (bool)0);
	}

IL_078b:
	{
		// if (currentState == CSFHIAnimableState.disappeared) {
		int32_t L_283 = __this->___currentState_15;
		if ((!(((uint32_t)L_283) == ((uint32_t)3))))
		{
			goto IL_079b;
		}
	}
	{
		// startAppear();
		VirtualActionInvoker1< bool >::Invoke(4 /* System.Void InterfaceAnimManager::startAppear(System.Boolean) */, __this, (bool)0);
	}

IL_079b:
	{
		// }
		return;
	}
}
// System.Collections.IEnumerator InterfaceAnimManager::Disable_OnDisappearEnd()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* InterfaceAnimManager_Disable_OnDisappearEnd_m07592854CB8B7F15532C8784E4C197E0B668DA93 (InterfaceAnimManager_t55019D504BEA6534494FED15C7945911CE850962* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CDisable_OnDisappearEndU3Ed__35_tF42C64EEBEB26389A089E7F5E69FD83FD38015F0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CDisable_OnDisappearEndU3Ed__35_tF42C64EEBEB26389A089E7F5E69FD83FD38015F0* L_0 = (U3CDisable_OnDisappearEndU3Ed__35_tF42C64EEBEB26389A089E7F5E69FD83FD38015F0*)il2cpp_codegen_object_new(U3CDisable_OnDisappearEndU3Ed__35_tF42C64EEBEB26389A089E7F5E69FD83FD38015F0_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CDisable_OnDisappearEndU3Ed__35__ctor_mE6CF283B4FA5FAFE4D43C397E9D70CDEFBAC4EB6(L_0, 0, NULL);
		U3CDisable_OnDisappearEndU3Ed__35_tF42C64EEBEB26389A089E7F5E69FD83FD38015F0* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Void InterfaceAnimManager::startAppear(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterfaceAnimManager_startAppear_m55B6FA9E4E03CBE5C6A09F76746BF0A33B2D223F (InterfaceAnimManager_t55019D504BEA6534494FED15C7945911CE850962* __this, bool ____direct0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m05F5DC7DDC52C222E3CC2A5F3E80A9CAC2EC68AE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m95E1E769FF7A8208A46B05C694DD6C720FCE6C49_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m1BBA4A743DD622178C8A15E930ADDEE490553A80_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisInterfaceAnimManager_t55019D504BEA6534494FED15C7945911CE850962_m3C753C203152FD3ED8CE525C216473174957EB16_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m736E8835B6C02CAC94A7EA21A8B0B17D38246CAF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral52656DB5EAA7F059F4F77EC6B250A44854DF3A69);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_tBE821E8DBC9F67CC069BF33B74F05F0A2270F44E V_0;
	memset((&V_0), 0, sizeof(V_0));
	InterfaceAnmElement_t02DC7282CF1F682DD0C071B9DE5637D4E58C5706* V_1 = NULL;
	InterfaceAnmElement_t02DC7282CF1F682DD0C071B9DE5637D4E58C5706* V_2 = NULL;
	{
		// if (this.currentState == CSFHIAnimableState.appeared)
		int32_t L_0 = __this->___currentState_15;
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_000a;
		}
	}
	{
		// return;
		return;
	}

IL_000a:
	{
		// if (this.currentState == CSFHIAnimableState.disappearing) {
		int32_t L_1 = __this->___currentState_15;
		if ((!(((uint32_t)L_1) == ((uint32_t)2))))
		{
			goto IL_001e;
		}
	}
	{
		// Debug.LogWarning("CSFHI : start appear not available if disappear in progress");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_mEF15C6B17CE4E1FA7E379CDB82CE40FCD89A3F28(_stringLiteral52656DB5EAA7F059F4F77EC6B250A44854DF3A69, NULL);
		// return;
		return;
	}

IL_001e:
	{
		// if (this.currentState == CSFHIAnimableState.appearing)
		int32_t L_2 = __this->___currentState_15;
		if (L_2)
		{
			goto IL_0027;
		}
	}
	{
		// return;
		return;
	}

IL_0027:
	{
		// if (OnStartAppear != null)
		IAM_StartAppear_t45F8AF6D25B9B8F63ED671D6461EF06AFBDEACDC* L_3 = __this->___OnStartAppear_24;
		if (!L_3)
		{
			goto IL_003b;
		}
	}
	{
		// OnStartAppear(this);
		IAM_StartAppear_t45F8AF6D25B9B8F63ED671D6461EF06AFBDEACDC* L_4 = __this->___OnStartAppear_24;
		NullCheck(L_4);
		IAM_StartAppear_Invoke_mE1E254F41FB1A54066D9E77D96B62B9EC5600BE6_inline(L_4, __this, NULL);
	}

IL_003b:
	{
		// foreach (InterfaceAnmElement _element in elementsList) {
		List_1_t2F48DCC67405C354E57C9C3263548DB2D541DBB0* L_5 = __this->___elementsList_4;
		NullCheck(L_5);
		Enumerator_tBE821E8DBC9F67CC069BF33B74F05F0A2270F44E L_6;
		L_6 = List_1_GetEnumerator_m736E8835B6C02CAC94A7EA21A8B0B17D38246CAF(L_5, List_1_GetEnumerator_m736E8835B6C02CAC94A7EA21A8B0B17D38246CAF_RuntimeMethod_var);
		V_0 = L_6;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_008e:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m05F5DC7DDC52C222E3CC2A5F3E80A9CAC2EC68AE((&V_0), Enumerator_Dispose_m05F5DC7DDC52C222E3CC2A5F3E80A9CAC2EC68AE_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0083_1;
			}

IL_0049_1:
			{
				// foreach (InterfaceAnmElement _element in elementsList) {
				InterfaceAnmElement_t02DC7282CF1F682DD0C071B9DE5637D4E58C5706* L_7;
				L_7 = Enumerator_get_Current_m1BBA4A743DD622178C8A15E930ADDEE490553A80_inline((&V_0), Enumerator_get_Current_m1BBA4A743DD622178C8A15E930ADDEE490553A80_RuntimeMethod_var);
				V_1 = L_7;
				// if (_element && _element.isNested_IAM) {
				InterfaceAnmElement_t02DC7282CF1F682DD0C071B9DE5637D4E58C5706* L_8 = V_1;
				il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
				bool L_9;
				L_9 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_8, NULL);
				if (!L_9)
				{
					goto IL_0083_1;
				}
			}
			{
				InterfaceAnmElement_t02DC7282CF1F682DD0C071B9DE5637D4E58C5706* L_10 = V_1;
				NullCheck(L_10);
				bool L_11 = L_10->___isNested_IAM_13;
				if (!L_11)
				{
					goto IL_0083_1;
				}
			}
			{
				// _element.gameObjectRef.GetComponent<InterfaceAnimManager>().startDisappear(true);
				InterfaceAnmElement_t02DC7282CF1F682DD0C071B9DE5637D4E58C5706* L_12 = V_1;
				NullCheck(L_12);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_13 = L_12->___gameObjectRef_4;
				NullCheck(L_13);
				InterfaceAnimManager_t55019D504BEA6534494FED15C7945911CE850962* L_14;
				L_14 = GameObject_GetComponent_TisInterfaceAnimManager_t55019D504BEA6534494FED15C7945911CE850962_m3C753C203152FD3ED8CE525C216473174957EB16(L_13, GameObject_GetComponent_TisInterfaceAnimManager_t55019D504BEA6534494FED15C7945911CE850962_m3C753C203152FD3ED8CE525C216473174957EB16_RuntimeMethod_var);
				NullCheck(L_14);
				VirtualActionInvoker1< bool >::Invoke(5 /* System.Void InterfaceAnimManager::startDisappear(System.Boolean) */, L_14, (bool)1);
				// _element.gameObjectRef.GetComponent<InterfaceAnimManager>().currentState = CSFHIAnimableState.disappeared;
				InterfaceAnmElement_t02DC7282CF1F682DD0C071B9DE5637D4E58C5706* L_15 = V_1;
				NullCheck(L_15);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_16 = L_15->___gameObjectRef_4;
				NullCheck(L_16);
				InterfaceAnimManager_t55019D504BEA6534494FED15C7945911CE850962* L_17;
				L_17 = GameObject_GetComponent_TisInterfaceAnimManager_t55019D504BEA6534494FED15C7945911CE850962_m3C753C203152FD3ED8CE525C216473174957EB16(L_16, GameObject_GetComponent_TisInterfaceAnimManager_t55019D504BEA6534494FED15C7945911CE850962_m3C753C203152FD3ED8CE525C216473174957EB16_RuntimeMethod_var);
				NullCheck(L_17);
				L_17->___currentState_15 = 3;
			}

IL_0083_1:
			{
				// foreach (InterfaceAnmElement _element in elementsList) {
				bool L_18;
				L_18 = Enumerator_MoveNext_m95E1E769FF7A8208A46B05C694DD6C720FCE6C49((&V_0), Enumerator_MoveNext_m95E1E769FF7A8208A46B05C694DD6C720FCE6C49_RuntimeMethod_var);
				if (L_18)
				{
					goto IL_0049_1;
				}
			}
			{
				goto IL_009c;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_009c:
	{
		// this.gameObject.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_19;
		L_19 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_19);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_19, (bool)1, NULL);
		// if (!_direct && audioSource && audioSource.enabled && (this.currentState != CSFHIAnimableState.appeared && this.currentState != CSFHIAnimableState.appearing)) {
		bool L_20 = ____direct0;
		if (L_20)
		{
			goto IL_00f2;
		}
	}
	{
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_21 = __this->___audioSource_17;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_22;
		L_22 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_21, NULL);
		if (!L_22)
		{
			goto IL_00f2;
		}
	}
	{
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_23 = __this->___audioSource_17;
		NullCheck(L_23);
		bool L_24;
		L_24 = Behaviour_get_enabled_mAAC9F15E9EBF552217A5AE2681589CC0BFA300C1(L_23, NULL);
		if (!L_24)
		{
			goto IL_00f2;
		}
	}
	{
		int32_t L_25 = __this->___currentState_15;
		if ((((int32_t)L_25) == ((int32_t)1)))
		{
			goto IL_00f2;
		}
	}
	{
		int32_t L_26 = __this->___currentState_15;
		if (!L_26)
		{
			goto IL_00f2;
		}
	}
	{
		// audioSource.clip = openSound;
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_27 = __this->___audioSource_17;
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_28 = __this->___openSound_18;
		NullCheck(L_27);
		AudioSource_set_clip_mFF441895E274286C88D9C75ED5CA1B1B39528D70(L_27, L_28, NULL);
		// audioSource.Play();
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_29 = __this->___audioSource_17;
		NullCheck(L_29);
		AudioSource_Play_m95DF07111C61D0E0F00257A00384D31531D590C3(L_29, NULL);
	}

IL_00f2:
	{
		// if (_direct) {
		bool L_30 = ____direct0;
		if (!L_30)
		{
			goto IL_015f;
		}
	}
	{
		// foreach (InterfaceAnmElement _element in elementsList) {
		List_1_t2F48DCC67405C354E57C9C3263548DB2D541DBB0* L_31 = __this->___elementsList_4;
		NullCheck(L_31);
		Enumerator_tBE821E8DBC9F67CC069BF33B74F05F0A2270F44E L_32;
		L_32 = List_1_GetEnumerator_m736E8835B6C02CAC94A7EA21A8B0B17D38246CAF(L_31, List_1_GetEnumerator_m736E8835B6C02CAC94A7EA21A8B0B17D38246CAF_RuntimeMethod_var);
		V_0 = L_32;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_014a:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m05F5DC7DDC52C222E3CC2A5F3E80A9CAC2EC68AE((&V_0), Enumerator_Dispose_m05F5DC7DDC52C222E3CC2A5F3E80A9CAC2EC68AE_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_013f_1;
			}

IL_0103_1:
			{
				// foreach (InterfaceAnmElement _element in elementsList) {
				InterfaceAnmElement_t02DC7282CF1F682DD0C071B9DE5637D4E58C5706* L_33;
				L_33 = Enumerator_get_Current_m1BBA4A743DD622178C8A15E930ADDEE490553A80_inline((&V_0), Enumerator_get_Current_m1BBA4A743DD622178C8A15E930ADDEE490553A80_RuntimeMethod_var);
				V_2 = L_33;
				// if (_element){
				InterfaceAnmElement_t02DC7282CF1F682DD0C071B9DE5637D4E58C5706* L_34 = V_2;
				il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
				bool L_35;
				L_35 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_34, NULL);
				if (!L_35)
				{
					goto IL_013f_1;
				}
			}
			{
				// _element.gameObjectRef.SetActive(true);
				InterfaceAnmElement_t02DC7282CF1F682DD0C071B9DE5637D4E58C5706* L_36 = V_2;
				NullCheck(L_36);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_37 = L_36->___gameObjectRef_4;
				NullCheck(L_37);
				GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_37, (bool)1, NULL);
				// if (_element.isNested_IAM) {
				InterfaceAnmElement_t02DC7282CF1F682DD0C071B9DE5637D4E58C5706* L_38 = V_2;
				NullCheck(L_38);
				bool L_39 = L_38->___isNested_IAM_13;
				if (!L_39)
				{
					goto IL_0138_1;
				}
			}
			{
				// _element.gameObjectRef.GetComponent<InterfaceAnimManager>().startAppear(true);
				InterfaceAnmElement_t02DC7282CF1F682DD0C071B9DE5637D4E58C5706* L_40 = V_2;
				NullCheck(L_40);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_41 = L_40->___gameObjectRef_4;
				NullCheck(L_41);
				InterfaceAnimManager_t55019D504BEA6534494FED15C7945911CE850962* L_42;
				L_42 = GameObject_GetComponent_TisInterfaceAnimManager_t55019D504BEA6534494FED15C7945911CE850962_m3C753C203152FD3ED8CE525C216473174957EB16(L_41, GameObject_GetComponent_TisInterfaceAnimManager_t55019D504BEA6534494FED15C7945911CE850962_m3C753C203152FD3ED8CE525C216473174957EB16_RuntimeMethod_var);
				NullCheck(L_42);
				VirtualActionInvoker1< bool >::Invoke(4 /* System.Void InterfaceAnimManager::startAppear(System.Boolean) */, L_42, (bool)1);
			}

IL_0138_1:
			{
				// _element.currentState = CSFHIAnimableState.appearing;
				InterfaceAnmElement_t02DC7282CF1F682DD0C071B9DE5637D4E58C5706* L_43 = V_2;
				NullCheck(L_43);
				L_43->___currentState_12 = 0;
			}

IL_013f_1:
			{
				// foreach (InterfaceAnmElement _element in elementsList) {
				bool L_44;
				L_44 = Enumerator_MoveNext_m95E1E769FF7A8208A46B05C694DD6C720FCE6C49((&V_0), Enumerator_MoveNext_m95E1E769FF7A8208A46B05C694DD6C720FCE6C49_RuntimeMethod_var);
				if (L_44)
				{
					goto IL_0103_1;
				}
			}
			{
				goto IL_0158;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0158:
	{
		// EndAppear();
		InterfaceAnimManager_EndAppear_m0B1E2F6FD6299C2F62D5817B5B81CCD0F04FAF16(__this, NULL);
		return;
	}

IL_015f:
	{
		// timer = 0;
		__this->___timer_8 = (0.0f);
		// currentState = CSFHIAnimableState.appearing;
		__this->___currentState_15 = 0;
		// }
		return;
	}
}
// System.Void InterfaceAnimManager::EndAppear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterfaceAnimManager_EndAppear_m0B1E2F6FD6299C2F62D5817B5B81CCD0F04FAF16 (InterfaceAnimManager_t55019D504BEA6534494FED15C7945911CE850962* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m05F5DC7DDC52C222E3CC2A5F3E80A9CAC2EC68AE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m95E1E769FF7A8208A46B05C694DD6C720FCE6C49_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m1BBA4A743DD622178C8A15E930ADDEE490553A80_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m736E8835B6C02CAC94A7EA21A8B0B17D38246CAF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_tBE821E8DBC9F67CC069BF33B74F05F0A2270F44E V_0;
	memset((&V_0), 0, sizeof(V_0));
	InterfaceAnmElement_t02DC7282CF1F682DD0C071B9DE5637D4E58C5706* V_1 = NULL;
	{
		// currentState = CSFHIAnimableState.appeared;
		__this->___currentState_15 = 1;
		// waitElementFullAnim = null;
		__this->___waitElementFullAnim_23 = (InterfaceAnmElement_t02DC7282CF1F682DD0C071B9DE5637D4E58C5706*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___waitElementFullAnim_23), (void*)(InterfaceAnmElement_t02DC7282CF1F682DD0C071B9DE5637D4E58C5706*)NULL);
		// foreach (InterfaceAnmElement _element in elementsList) {
		List_1_t2F48DCC67405C354E57C9C3263548DB2D541DBB0* L_0 = __this->___elementsList_4;
		NullCheck(L_0);
		Enumerator_tBE821E8DBC9F67CC069BF33B74F05F0A2270F44E L_1;
		L_1 = List_1_GetEnumerator_m736E8835B6C02CAC94A7EA21A8B0B17D38246CAF(L_0, List_1_GetEnumerator_m736E8835B6C02CAC94A7EA21A8B0B17D38246CAF_RuntimeMethod_var);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_003e:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m05F5DC7DDC52C222E3CC2A5F3E80A9CAC2EC68AE((&V_0), Enumerator_Dispose_m05F5DC7DDC52C222E3CC2A5F3E80A9CAC2EC68AE_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0033_1;
			}

IL_001c_1:
			{
				// foreach (InterfaceAnmElement _element in elementsList) {
				InterfaceAnmElement_t02DC7282CF1F682DD0C071B9DE5637D4E58C5706* L_2;
				L_2 = Enumerator_get_Current_m1BBA4A743DD622178C8A15E930ADDEE490553A80_inline((&V_0), Enumerator_get_Current_m1BBA4A743DD622178C8A15E930ADDEE490553A80_RuntimeMethod_var);
				V_1 = L_2;
				// if (_element) {
				InterfaceAnmElement_t02DC7282CF1F682DD0C071B9DE5637D4E58C5706* L_3 = V_1;
				il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
				bool L_4;
				L_4 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_3, NULL);
				if (!L_4)
				{
					goto IL_0033_1;
				}
			}
			{
				// _element.currentState = CSFHIAnimableState.appeared;
				InterfaceAnmElement_t02DC7282CF1F682DD0C071B9DE5637D4E58C5706* L_5 = V_1;
				NullCheck(L_5);
				L_5->___currentState_12 = 1;
			}

IL_0033_1:
			{
				// foreach (InterfaceAnmElement _element in elementsList) {
				bool L_6;
				L_6 = Enumerator_MoveNext_m95E1E769FF7A8208A46B05C694DD6C720FCE6C49((&V_0), Enumerator_MoveNext_m95E1E769FF7A8208A46B05C694DD6C720FCE6C49_RuntimeMethod_var);
				if (L_6)
				{
					goto IL_001c_1;
				}
			}
			{
				goto IL_004c;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_004c:
	{
		// if (OnEndAppear != null)
		IAM_EndAppear_t60802E44D1AB53A268000746AEAA403393EFE4C6* L_7 = __this->___OnEndAppear_26;
		if (!L_7)
		{
			goto IL_0060;
		}
	}
	{
		// OnEndAppear(this);
		IAM_EndAppear_t60802E44D1AB53A268000746AEAA403393EFE4C6* L_8 = __this->___OnEndAppear_26;
		NullCheck(L_8);
		IAM_EndAppear_Invoke_mDE5B4D3BA0FB8B81B187247938B6C2191927DAD9_inline(L_8, __this, NULL);
	}

IL_0060:
	{
		// }
		return;
	}
}
// System.Void InterfaceAnimManager::startDisappear(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterfaceAnimManager_startDisappear_m58B0F616DDC74B00D6F37BBA1F5D8DD5ECCC909C (InterfaceAnimManager_t55019D504BEA6534494FED15C7945911CE850962* __this, bool ____direct0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m05F5DC7DDC52C222E3CC2A5F3E80A9CAC2EC68AE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m95E1E769FF7A8208A46B05C694DD6C720FCE6C49_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m1BBA4A743DD622178C8A15E930ADDEE490553A80_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisInterfaceAnimManager_t55019D504BEA6534494FED15C7945911CE850962_m3C753C203152FD3ED8CE525C216473174957EB16_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m736E8835B6C02CAC94A7EA21A8B0B17D38246CAF_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_tBE821E8DBC9F67CC069BF33B74F05F0A2270F44E V_0;
	memset((&V_0), 0, sizeof(V_0));
	InterfaceAnmElement_t02DC7282CF1F682DD0C071B9DE5637D4E58C5706* V_1 = NULL;
	{
		// if (this.currentState == CSFHIAnimableState.appeared)
		int32_t L_0 = __this->___currentState_15;
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_0014;
		}
	}
	{
		// timer = 0;
		__this->___timer_8 = (0.0f);
	}

IL_0014:
	{
		// if (this.currentState == CSFHIAnimableState.appearing)
		int32_t L_1 = __this->___currentState_15;
		if (L_1)
		{
			goto IL_0027;
		}
	}
	{
		// timer = 0;
		__this->___timer_8 = (0.0f);
	}

IL_0027:
	{
		// if (_direct || this.currentState != CSFHIAnimableState.disappearing) {
		bool L_2 = ____direct0;
		if (L_2)
		{
			goto IL_0036;
		}
	}
	{
		int32_t L_3 = __this->___currentState_15;
		if ((((int32_t)L_3) == ((int32_t)2)))
		{
			goto IL_00c5;
		}
	}

IL_0036:
	{
		// if (OnStartDisappear != null)
		IAM_StartDisappear_tFBEC30F3C988FD6D617407114866A1D5FE174BFB* L_4 = __this->___OnStartDisappear_25;
		if (!L_4)
		{
			goto IL_004a;
		}
	}
	{
		// OnStartDisappear(this);
		IAM_StartDisappear_tFBEC30F3C988FD6D617407114866A1D5FE174BFB* L_5 = __this->___OnStartDisappear_25;
		NullCheck(L_5);
		IAM_StartDisappear_Invoke_m57D127B05389C3C7FED4EE458B6F58FF5FF597FC_inline(L_5, __this, NULL);
	}

IL_004a:
	{
		// if (_direct) {
		bool L_6 = ____direct0;
		if (!L_6)
		{
			goto IL_00af;
		}
	}
	{
		// foreach (InterfaceAnmElement _element in elementsList) {
		List_1_t2F48DCC67405C354E57C9C3263548DB2D541DBB0* L_7 = __this->___elementsList_4;
		NullCheck(L_7);
		Enumerator_tBE821E8DBC9F67CC069BF33B74F05F0A2270F44E L_8;
		L_8 = List_1_GetEnumerator_m736E8835B6C02CAC94A7EA21A8B0B17D38246CAF(L_7, List_1_GetEnumerator_m736E8835B6C02CAC94A7EA21A8B0B17D38246CAF_RuntimeMethod_var);
		V_0 = L_8;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_009a:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m05F5DC7DDC52C222E3CC2A5F3E80A9CAC2EC68AE((&V_0), Enumerator_Dispose_m05F5DC7DDC52C222E3CC2A5F3E80A9CAC2EC68AE_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_008f_1;
			}

IL_005b_1:
			{
				// foreach (InterfaceAnmElement _element in elementsList) {
				InterfaceAnmElement_t02DC7282CF1F682DD0C071B9DE5637D4E58C5706* L_9;
				L_9 = Enumerator_get_Current_m1BBA4A743DD622178C8A15E930ADDEE490553A80_inline((&V_0), Enumerator_get_Current_m1BBA4A743DD622178C8A15E930ADDEE490553A80_RuntimeMethod_var);
				V_1 = L_9;
				// if (_element.isNested_IAM) {
				InterfaceAnmElement_t02DC7282CF1F682DD0C071B9DE5637D4E58C5706* L_10 = V_1;
				NullCheck(L_10);
				bool L_11 = L_10->___isNested_IAM_13;
				if (!L_11)
				{
					goto IL_007c_1;
				}
			}
			{
				// _element.gameObjectRef.GetComponent<InterfaceAnimManager>().startDisappear(true);
				InterfaceAnmElement_t02DC7282CF1F682DD0C071B9DE5637D4E58C5706* L_12 = V_1;
				NullCheck(L_12);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_13 = L_12->___gameObjectRef_4;
				NullCheck(L_13);
				InterfaceAnimManager_t55019D504BEA6534494FED15C7945911CE850962* L_14;
				L_14 = GameObject_GetComponent_TisInterfaceAnimManager_t55019D504BEA6534494FED15C7945911CE850962_m3C753C203152FD3ED8CE525C216473174957EB16(L_13, GameObject_GetComponent_TisInterfaceAnimManager_t55019D504BEA6534494FED15C7945911CE850962_m3C753C203152FD3ED8CE525C216473174957EB16_RuntimeMethod_var);
				NullCheck(L_14);
				VirtualActionInvoker1< bool >::Invoke(5 /* System.Void InterfaceAnimManager::startDisappear(System.Boolean) */, L_14, (bool)1);
			}

IL_007c_1:
			{
				// _element.gameObjectRef.SetActive(false);
				InterfaceAnmElement_t02DC7282CF1F682DD0C071B9DE5637D4E58C5706* L_15 = V_1;
				NullCheck(L_15);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_16 = L_15->___gameObjectRef_4;
				NullCheck(L_16);
				GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_16, (bool)0, NULL);
				// _element.currentState = CSFHIAnimableState.disappearing;
				InterfaceAnmElement_t02DC7282CF1F682DD0C071B9DE5637D4E58C5706* L_17 = V_1;
				NullCheck(L_17);
				L_17->___currentState_12 = 2;
			}

IL_008f_1:
			{
				// foreach (InterfaceAnmElement _element in elementsList) {
				bool L_18;
				L_18 = Enumerator_MoveNext_m95E1E769FF7A8208A46B05C694DD6C720FCE6C49((&V_0), Enumerator_MoveNext_m95E1E769FF7A8208A46B05C694DD6C720FCE6C49_RuntimeMethod_var);
				if (L_18)
				{
					goto IL_005b_1;
				}
			}
			{
				goto IL_00a8;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00a8:
	{
		// EndDisappear();
		InterfaceAnimManager_EndDisappear_m5D0D99EC31BED76A2466B8E3AE6DB69C9AD1026C(__this, NULL);
		return;
	}

IL_00af:
	{
		// if (waitAppear_Nested) {
		bool L_19 = __this->___waitAppear_Nested_21;
		if (!L_19)
		{
			goto IL_00be;
		}
	}
	{
		// waitElementFullAnim = null;
		__this->___waitElementFullAnim_23 = (InterfaceAnmElement_t02DC7282CF1F682DD0C071B9DE5637D4E58C5706*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___waitElementFullAnim_23), (void*)(InterfaceAnmElement_t02DC7282CF1F682DD0C071B9DE5637D4E58C5706*)NULL);
	}

IL_00be:
	{
		// currentState = CSFHIAnimableState.disappearing;
		__this->___currentState_15 = 2;
	}

IL_00c5:
	{
		// }
		return;
	}
}
// System.Void InterfaceAnimManager::EndDisappear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterfaceAnimManager_EndDisappear_m5D0D99EC31BED76A2466B8E3AE6DB69C9AD1026C (InterfaceAnimManager_t55019D504BEA6534494FED15C7945911CE850962* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisInterfaceAnimManager_t55019D504BEA6534494FED15C7945911CE850962_mD27B439389B85FEB9E300BBE757143C583C05729_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m05F5DC7DDC52C222E3CC2A5F3E80A9CAC2EC68AE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m95E1E769FF7A8208A46B05C694DD6C720FCE6C49_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m1BBA4A743DD622178C8A15E930ADDEE490553A80_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisInterfaceAnimManager_t55019D504BEA6534494FED15C7945911CE850962_m3C753C203152FD3ED8CE525C216473174957EB16_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m736E8835B6C02CAC94A7EA21A8B0B17D38246CAF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_tBE821E8DBC9F67CC069BF33B74F05F0A2270F44E V_0;
	memset((&V_0), 0, sizeof(V_0));
	InterfaceAnmElement_t02DC7282CF1F682DD0C071B9DE5637D4E58C5706* V_1 = NULL;
	InterfaceAnimManager_t55019D504BEA6534494FED15C7945911CE850962* V_2 = NULL;
	int32_t V_3 = 0;
	{
		// foreach (InterfaceAnmElement _element in elementsList) {
		List_1_t2F48DCC67405C354E57C9C3263548DB2D541DBB0* L_0 = __this->___elementsList_4;
		NullCheck(L_0);
		Enumerator_tBE821E8DBC9F67CC069BF33B74F05F0A2270F44E L_1;
		L_1 = List_1_GetEnumerator_m736E8835B6C02CAC94A7EA21A8B0B17D38246CAF(L_0, List_1_GetEnumerator_m736E8835B6C02CAC94A7EA21A8B0B17D38246CAF_RuntimeMethod_var);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_004d:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m05F5DC7DDC52C222E3CC2A5F3E80A9CAC2EC68AE((&V_0), Enumerator_Dispose_m05F5DC7DDC52C222E3CC2A5F3E80A9CAC2EC68AE_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0042_1;
			}

IL_000e_1:
			{
				// foreach (InterfaceAnmElement _element in elementsList) {
				InterfaceAnmElement_t02DC7282CF1F682DD0C071B9DE5637D4E58C5706* L_2;
				L_2 = Enumerator_get_Current_m1BBA4A743DD622178C8A15E930ADDEE490553A80_inline((&V_0), Enumerator_get_Current_m1BBA4A743DD622178C8A15E930ADDEE490553A80_RuntimeMethod_var);
				V_1 = L_2;
				// _element.currentState = CSFHIAnimableState.disappeared;
				InterfaceAnmElement_t02DC7282CF1F682DD0C071B9DE5637D4E58C5706* L_3 = V_1;
				NullCheck(L_3);
				L_3->___currentState_12 = 3;
				// if (_element.isNested_IAM) {
				InterfaceAnmElement_t02DC7282CF1F682DD0C071B9DE5637D4E58C5706* L_4 = V_1;
				NullCheck(L_4);
				bool L_5 = L_4->___isNested_IAM_13;
				if (!L_5)
				{
					goto IL_0036_1;
				}
			}
			{
				// _element.gameObjectRef.GetComponent<InterfaceAnimManager>().currentState = CSFHIAnimableState.disappeared;
				InterfaceAnmElement_t02DC7282CF1F682DD0C071B9DE5637D4E58C5706* L_6 = V_1;
				NullCheck(L_6);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7 = L_6->___gameObjectRef_4;
				NullCheck(L_7);
				InterfaceAnimManager_t55019D504BEA6534494FED15C7945911CE850962* L_8;
				L_8 = GameObject_GetComponent_TisInterfaceAnimManager_t55019D504BEA6534494FED15C7945911CE850962_m3C753C203152FD3ED8CE525C216473174957EB16(L_7, GameObject_GetComponent_TisInterfaceAnimManager_t55019D504BEA6534494FED15C7945911CE850962_m3C753C203152FD3ED8CE525C216473174957EB16_RuntimeMethod_var);
				NullCheck(L_8);
				L_8->___currentState_15 = 3;
			}

IL_0036_1:
			{
				// _element.gameObjectRef.SetActive(false);
				InterfaceAnmElement_t02DC7282CF1F682DD0C071B9DE5637D4E58C5706* L_9 = V_1;
				NullCheck(L_9);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10 = L_9->___gameObjectRef_4;
				NullCheck(L_10);
				GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_10, (bool)0, NULL);
			}

IL_0042_1:
			{
				// foreach (InterfaceAnmElement _element in elementsList) {
				bool L_11;
				L_11 = Enumerator_MoveNext_m95E1E769FF7A8208A46B05C694DD6C720FCE6C49((&V_0), Enumerator_MoveNext_m95E1E769FF7A8208A46B05C694DD6C720FCE6C49_RuntimeMethod_var);
				if (L_11)
				{
					goto IL_000e_1;
				}
			}
			{
				goto IL_005b;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_005b:
	{
		// waitElementFullAnim = null;
		__this->___waitElementFullAnim_23 = (InterfaceAnmElement_t02DC7282CF1F682DD0C071B9DE5637D4E58C5706*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___waitElementFullAnim_23), (void*)(InterfaceAnmElement_t02DC7282CF1F682DD0C071B9DE5637D4E58C5706*)NULL);
		// StopCoroutine(Disable_OnDisappearEnd());
		RuntimeObject* L_12;
		L_12 = InterfaceAnimManager_Disable_OnDisappearEnd_m07592854CB8B7F15532C8784E4C197E0B668DA93(__this, NULL);
		MonoBehaviour_StopCoroutine_mF9E93B82091E804595BE13AA29F9AB7517F7E04A(__this, L_12, NULL);
		// currentState = CSFHIAnimableState.disappeared;
		__this->___currentState_15 = 3;
		// if (!isIAM_Root()) { // if it is nested IAM
		bool L_13;
		L_13 = InterfaceAnimManager_isIAM_Root_mB0699470DFD35C63FB1249C20EF5477D6C800DDD(__this, NULL);
		if (L_13)
		{
			goto IL_0121;
		}
	}
	{
		// this.gameObject.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_14;
		L_14 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_14);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_14, (bool)0, NULL);
		// InterfaceAnimManager _parentIAM = this.transform.parent.GetComponent<InterfaceAnimManager>();
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_15;
		L_15 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_15);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_16;
		L_16 = Transform_get_parent_m65354E28A4C94EC00EBCF03532F7B0718380791E(L_15, NULL);
		NullCheck(L_16);
		InterfaceAnimManager_t55019D504BEA6534494FED15C7945911CE850962* L_17;
		L_17 = Component_GetComponent_TisInterfaceAnimManager_t55019D504BEA6534494FED15C7945911CE850962_mD27B439389B85FEB9E300BBE757143C583C05729(L_16, Component_GetComponent_TisInterfaceAnimManager_t55019D504BEA6534494FED15C7945911CE850962_mD27B439389B85FEB9E300BBE757143C583C05729_RuntimeMethod_var);
		V_2 = L_17;
		// if (_parentIAM.currentState==CSFHIAnimableState.disappearing){
		InterfaceAnimManager_t55019D504BEA6534494FED15C7945911CE850962* L_18 = V_2;
		NullCheck(L_18);
		int32_t L_19 = L_18->___currentState_15;
		if ((!(((uint32_t)L_19) == ((uint32_t)2))))
		{
			goto IL_0121;
		}
	}
	{
		// if (_parentIAM.transform.parent) {
		InterfaceAnimManager_t55019D504BEA6534494FED15C7945911CE850962* L_20 = V_2;
		NullCheck(L_20);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_21;
		L_21 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_20, NULL);
		NullCheck(L_21);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_22;
		L_22 = Transform_get_parent_m65354E28A4C94EC00EBCF03532F7B0718380791E(L_21, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_23;
		L_23 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_22, NULL);
		if (!L_23)
		{
			goto IL_00d0;
		}
	}
	{
		// if (_parentIAM.transform.parent.GetComponent<InterfaceAnimManager>()) {
		InterfaceAnimManager_t55019D504BEA6534494FED15C7945911CE850962* L_24 = V_2;
		NullCheck(L_24);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_25;
		L_25 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_24, NULL);
		NullCheck(L_25);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_26;
		L_26 = Transform_get_parent_m65354E28A4C94EC00EBCF03532F7B0718380791E(L_25, NULL);
		NullCheck(L_26);
		InterfaceAnimManager_t55019D504BEA6534494FED15C7945911CE850962* L_27;
		L_27 = Component_GetComponent_TisInterfaceAnimManager_t55019D504BEA6534494FED15C7945911CE850962_mD27B439389B85FEB9E300BBE757143C583C05729(L_26, Component_GetComponent_TisInterfaceAnimManager_t55019D504BEA6534494FED15C7945911CE850962_mD27B439389B85FEB9E300BBE757143C583C05729_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_28;
		L_28 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_27, NULL);
		if (!L_28)
		{
			goto IL_00d0;
		}
	}
	{
		// return;
		return;
	}

IL_00d0:
	{
		// int index = 0;
		V_3 = 0;
		// foreach (InterfaceAnmElement _element in _parentIAM.elementsList) {
		InterfaceAnimManager_t55019D504BEA6534494FED15C7945911CE850962* L_29 = V_2;
		NullCheck(L_29);
		List_1_t2F48DCC67405C354E57C9C3263548DB2D541DBB0* L_30 = L_29->___elementsList_4;
		NullCheck(L_30);
		Enumerator_tBE821E8DBC9F67CC069BF33B74F05F0A2270F44E L_31;
		L_31 = List_1_GetEnumerator_m736E8835B6C02CAC94A7EA21A8B0B17D38246CAF(L_30, List_1_GetEnumerator_m736E8835B6C02CAC94A7EA21A8B0B17D38246CAF_RuntimeMethod_var);
		V_0 = L_31;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0113:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m05F5DC7DDC52C222E3CC2A5F3E80A9CAC2EC68AE((&V_0), Enumerator_Dispose_m05F5DC7DDC52C222E3CC2A5F3E80A9CAC2EC68AE_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0108_1;
			}

IL_00e0_1:
			{
				// foreach (InterfaceAnmElement _element in _parentIAM.elementsList) {
				InterfaceAnmElement_t02DC7282CF1F682DD0C071B9DE5637D4E58C5706* L_32;
				L_32 = Enumerator_get_Current_m1BBA4A743DD622178C8A15E930ADDEE490553A80_inline((&V_0), Enumerator_get_Current_m1BBA4A743DD622178C8A15E930ADDEE490553A80_RuntimeMethod_var);
				// if (_element.gameObjectRef == this.gameObject) {
				NullCheck(L_32);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_33 = L_32->___gameObjectRef_4;
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_34;
				L_34 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
				il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
				bool L_35;
				L_35 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_33, L_34, NULL);
				if (!L_35)
				{
					goto IL_0104_1;
				}
			}
			{
				// if (index == 0) {
				int32_t L_36 = V_3;
				if (L_36)
				{
					goto IL_0102_1;
				}
			}
			{
				// _parentIAM.EndDisappear();
				InterfaceAnimManager_t55019D504BEA6534494FED15C7945911CE850962* L_37 = V_2;
				NullCheck(L_37);
				InterfaceAnimManager_EndDisappear_m5D0D99EC31BED76A2466B8E3AE6DB69C9AD1026C(L_37, NULL);
			}

IL_0102_1:
			{
				// return;
				goto IL_0135;
			}

IL_0104_1:
			{
				// index++;
				int32_t L_38 = V_3;
				V_3 = ((int32_t)il2cpp_codegen_add(L_38, 1));
			}

IL_0108_1:
			{
				// foreach (InterfaceAnmElement _element in _parentIAM.elementsList) {
				bool L_39;
				L_39 = Enumerator_MoveNext_m95E1E769FF7A8208A46B05C694DD6C720FCE6C49((&V_0), Enumerator_MoveNext_m95E1E769FF7A8208A46B05C694DD6C720FCE6C49_RuntimeMethod_var);
				if (L_39)
				{
					goto IL_00e0_1;
				}
			}
			{
				goto IL_0121;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0121:
	{
		// if (OnEndDisappear != null)
		IAM_EndDisappear_t91F7B236FDF2A3FC74F13C5FD4987F95E8936663* L_40 = __this->___OnEndDisappear_27;
		if (!L_40)
		{
			goto IL_0135;
		}
	}
	{
		// OnEndDisappear(this);
		IAM_EndDisappear_t91F7B236FDF2A3FC74F13C5FD4987F95E8936663* L_41 = __this->___OnEndDisappear_27;
		NullCheck(L_41);
		IAM_EndDisappear_Invoke_m905DCD487D9D03C665BE6B8F89CEEEDFCD47C381_inline(L_41, __this, NULL);
	}

IL_0135:
	{
		// }
		return;
	}
}
// System.Void InterfaceAnimManager::UpdateAnimClips()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterfaceAnimManager_UpdateAnimClips_mB15CE778AC410C9CCBDE442A48C4FFDB9DDADF65 (InterfaceAnimManager_t55019D504BEA6534494FED15C7945911CE850962* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentsInChildren_TisInterfaceAnimManager_t55019D504BEA6534494FED15C7945911CE850962_mE7FED832B998CF2167D4A7F6BC177037145CF25F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_OrderBy_TisInterfaceAnmElement_t02DC7282CF1F682DD0C071B9DE5637D4E58C5706_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mC025B00D20A119B25DEB0DDD50D2C38511A43877_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_ToList_TisInterfaceAnimManager_t55019D504BEA6534494FED15C7945911CE850962_mA2260FF7C8675BC7C0C4B97C79D35B8B1F3D3C57_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_ToList_TisInterfaceAnmElement_t02DC7282CF1F682DD0C071B9DE5637D4E58C5706_m4798855DA56683CD385157F94F5A0A0C51F0175A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m05F5DC7DDC52C222E3CC2A5F3E80A9CAC2EC68AE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m86FC1B7BBD037A5B0081E8E9B916524B5BCC371E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m95E1E769FF7A8208A46B05C694DD6C720FCE6C49_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mBF0BA36039C43F42428B191F8AE5265C4976F54F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m1BBA4A743DD622178C8A15E930ADDEE490553A80_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m7AEC9C406EBAEA2718FDA0F82F1EA824BB163AF5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_t61A769E1370E91D9D2BBB870F77AB93DC7203E59_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisInterfaceAnimManager_t55019D504BEA6534494FED15C7945911CE850962_m3C753C203152FD3ED8CE525C216473174957EB16_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InterfaceAnmElement_t02DC7282CF1F682DD0C071B9DE5637D4E58C5706_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mD2EFF63F2DC69FEAEE0E21346D7EFD136A1E91B9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m736E8835B6C02CAC94A7EA21A8B0B17D38246CAF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m8DB1F8E62641BE14DE9D7E3D3470B981D0D2A2BE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Remove_m7093559E6975C1702B2D84D3DA57371CCD285C85_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Remove_m7EFF26032AFE115832C15842CC162A9771F93786_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mA28D73F815E52C1CB089FC95E694F6FBDFDB1FAE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mFCB5F6B16EDD6EFF12D288857142E410F8088586_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CUpdateAnimClipsU3Eb__40_0_m87C4C447FE1B345F86AB9BF5884677BC6C6451EC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t0AABEEAE6C6AC50E267EB829C4D47A57CB988ED7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE166C9564FBDE461738077E3B1B506525EB6ACCC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFA980B4AF7F45E5DE6A530093E7658BEA82FF8B2);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	RuntimeObject* V_2 = NULL;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* V_3 = NULL;
	int32_t V_4 = 0;
	InterfaceAnmElement_t02DC7282CF1F682DD0C071B9DE5637D4E58C5706* V_5 = NULL;
	RuntimeObject* V_6 = NULL;
	Enumerator_tB10F09810993415F99163C558E4CE11478C5E87E V_7;
	memset((&V_7), 0, sizeof(V_7));
	Enumerator_tBE821E8DBC9F67CC069BF33B74F05F0A2270F44E V_8;
	memset((&V_8), 0, sizeof(V_8));
	InterfaceAnmElement_t02DC7282CF1F682DD0C071B9DE5637D4E58C5706* V_9 = NULL;
	int32_t V_10 = 0;
	InterfaceAnimManager_t55019D504BEA6534494FED15C7945911CE850962* V_11 = NULL;
	Func_2_t61A769E1370E91D9D2BBB870F77AB93DC7203E59* G_B27_0 = NULL;
	List_1_t2F48DCC67405C354E57C9C3263548DB2D541DBB0* G_B27_1 = NULL;
	InterfaceAnimManager_t55019D504BEA6534494FED15C7945911CE850962* G_B27_2 = NULL;
	Func_2_t61A769E1370E91D9D2BBB870F77AB93DC7203E59* G_B26_0 = NULL;
	List_1_t2F48DCC67405C354E57C9C3263548DB2D541DBB0* G_B26_1 = NULL;
	InterfaceAnimManager_t55019D504BEA6534494FED15C7945911CE850962* G_B26_2 = NULL;
	{
		// bool addElement = true;
		V_0 = (bool)1;
		// int newSortID = 0;
		V_1 = 0;
		// foreach (Transform child in this.gameObject.transform) {
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_0, NULL);
		NullCheck(L_1);
		RuntimeObject* L_2;
		L_2 = Transform_GetEnumerator_mA7E1C882ACA0C33E284711CD09971DEA3FFEF404(L_1, NULL);
		V_2 = L_2;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_018d:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_3 = V_2;
					V_6 = ((RuntimeObject*)IsInst((RuntimeObject*)L_3, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var));
					RuntimeObject* L_4 = V_6;
					if (!L_4)
					{
						goto IL_01a0;
					}
				}
				{
					RuntimeObject* L_5 = V_6;
					NullCheck(L_5);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_5);
				}

IL_01a0:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0180_1;
			}

IL_001a_1:
			{
				// foreach (Transform child in this.gameObject.transform) {
				RuntimeObject* L_6 = V_2;
				NullCheck(L_6);
				RuntimeObject* L_7;
				L_7 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_6);
				V_3 = ((Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)CastclassClass((RuntimeObject*)L_7, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_il2cpp_TypeInfo_var));
				// if (child.parent == this.gameObject.transform) {
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8 = V_3;
				NullCheck(L_8);
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9;
				L_9 = Transform_get_parent_m65354E28A4C94EC00EBCF03532F7B0718380791E(L_8, NULL);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10;
				L_10 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
				NullCheck(L_10);
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_11;
				L_11 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_10, NULL);
				il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
				bool L_12;
				L_12 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_9, L_11, NULL);
				if (!L_12)
				{
					goto IL_0180_1;
				}
			}
			{
				// addElement = true;
				V_0 = (bool)1;
				// for (int a = this.elementsList.Count - 1; a >= 0; a--) {
				List_1_t2F48DCC67405C354E57C9C3263548DB2D541DBB0* L_13 = __this->___elementsList_4;
				NullCheck(L_13);
				int32_t L_14;
				L_14 = List_1_get_Count_mA28D73F815E52C1CB089FC95E694F6FBDFDB1FAE_inline(L_13, List_1_get_Count_mA28D73F815E52C1CB089FC95E694F6FBDFDB1FAE_RuntimeMethod_var);
				V_4 = ((int32_t)il2cpp_codegen_subtract(L_14, 1));
				goto IL_0132_1;
			}

IL_0057_1:
			{
				// if (this.elementsList[a] == null || this.elementsList[a].gameObjectRef == null || this.elementsList[a].gameObjectRef.transform.parent != this.gameObject.transform) {
				List_1_t2F48DCC67405C354E57C9C3263548DB2D541DBB0* L_15 = __this->___elementsList_4;
				int32_t L_16 = V_4;
				NullCheck(L_15);
				InterfaceAnmElement_t02DC7282CF1F682DD0C071B9DE5637D4E58C5706* L_17;
				L_17 = List_1_get_Item_mFCB5F6B16EDD6EFF12D288857142E410F8088586(L_15, L_16, List_1_get_Item_mFCB5F6B16EDD6EFF12D288857142E410F8088586_RuntimeMethod_var);
				il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
				bool L_18;
				L_18 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_17, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
				if (L_18)
				{
					goto IL_00b4_1;
				}
			}
			{
				List_1_t2F48DCC67405C354E57C9C3263548DB2D541DBB0* L_19 = __this->___elementsList_4;
				int32_t L_20 = V_4;
				NullCheck(L_19);
				InterfaceAnmElement_t02DC7282CF1F682DD0C071B9DE5637D4E58C5706* L_21;
				L_21 = List_1_get_Item_mFCB5F6B16EDD6EFF12D288857142E410F8088586(L_19, L_20, List_1_get_Item_mFCB5F6B16EDD6EFF12D288857142E410F8088586_RuntimeMethod_var);
				NullCheck(L_21);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_22 = L_21->___gameObjectRef_4;
				il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
				bool L_23;
				L_23 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_22, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
				if (L_23)
				{
					goto IL_00b4_1;
				}
			}
			{
				List_1_t2F48DCC67405C354E57C9C3263548DB2D541DBB0* L_24 = __this->___elementsList_4;
				int32_t L_25 = V_4;
				NullCheck(L_24);
				InterfaceAnmElement_t02DC7282CF1F682DD0C071B9DE5637D4E58C5706* L_26;
				L_26 = List_1_get_Item_mFCB5F6B16EDD6EFF12D288857142E410F8088586(L_24, L_25, List_1_get_Item_mFCB5F6B16EDD6EFF12D288857142E410F8088586_RuntimeMethod_var);
				NullCheck(L_26);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_27 = L_26->___gameObjectRef_4;
				NullCheck(L_27);
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_28;
				L_28 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_27, NULL);
				NullCheck(L_28);
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_29;
				L_29 = Transform_get_parent_m65354E28A4C94EC00EBCF03532F7B0718380791E(L_28, NULL);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_30;
				L_30 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
				NullCheck(L_30);
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_31;
				L_31 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_30, NULL);
				il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
				bool L_32;
				L_32 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_29, L_31, NULL);
				if (!L_32)
				{
					goto IL_00f6_1;
				}
			}

IL_00b4_1:
			{
				// if (this.elementsList[a] != null) {
				List_1_t2F48DCC67405C354E57C9C3263548DB2D541DBB0* L_33 = __this->___elementsList_4;
				int32_t L_34 = V_4;
				NullCheck(L_33);
				InterfaceAnmElement_t02DC7282CF1F682DD0C071B9DE5637D4E58C5706* L_35;
				L_35 = List_1_get_Item_mFCB5F6B16EDD6EFF12D288857142E410F8088586(L_33, L_34, List_1_get_Item_mFCB5F6B16EDD6EFF12D288857142E410F8088586_RuntimeMethod_var);
				il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
				bool L_36;
				L_36 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_35, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
				if (!L_36)
				{
					goto IL_00db_1;
				}
			}
			{
				// this.elementsList[a].Delete();
				List_1_t2F48DCC67405C354E57C9C3263548DB2D541DBB0* L_37 = __this->___elementsList_4;
				int32_t L_38 = V_4;
				NullCheck(L_37);
				InterfaceAnmElement_t02DC7282CF1F682DD0C071B9DE5637D4E58C5706* L_39;
				L_39 = List_1_get_Item_mFCB5F6B16EDD6EFF12D288857142E410F8088586(L_37, L_38, List_1_get_Item_mFCB5F6B16EDD6EFF12D288857142E410F8088586_RuntimeMethod_var);
				NullCheck(L_39);
				VirtualActionInvoker0::Invoke(5 /* System.Void InterfaceAnmElement::Delete() */, L_39);
			}

IL_00db_1:
			{
				// this.elementsList.Remove(this.elementsList[a]);
				List_1_t2F48DCC67405C354E57C9C3263548DB2D541DBB0* L_40 = __this->___elementsList_4;
				List_1_t2F48DCC67405C354E57C9C3263548DB2D541DBB0* L_41 = __this->___elementsList_4;
				int32_t L_42 = V_4;
				NullCheck(L_41);
				InterfaceAnmElement_t02DC7282CF1F682DD0C071B9DE5637D4E58C5706* L_43;
				L_43 = List_1_get_Item_mFCB5F6B16EDD6EFF12D288857142E410F8088586(L_41, L_42, List_1_get_Item_mFCB5F6B16EDD6EFF12D288857142E410F8088586_RuntimeMethod_var);
				NullCheck(L_40);
				bool L_44;
				L_44 = List_1_Remove_m7EFF26032AFE115832C15842CC162A9771F93786(L_40, L_43, List_1_Remove_m7EFF26032AFE115832C15842CC162A9771F93786_RuntimeMethod_var);
				goto IL_012c_1;
			}

IL_00f6_1:
			{
				// if (this.elementsList[a].gameObjectRef == child.gameObject) {
				List_1_t2F48DCC67405C354E57C9C3263548DB2D541DBB0* L_45 = __this->___elementsList_4;
				int32_t L_46 = V_4;
				NullCheck(L_45);
				InterfaceAnmElement_t02DC7282CF1F682DD0C071B9DE5637D4E58C5706* L_47;
				L_47 = List_1_get_Item_mFCB5F6B16EDD6EFF12D288857142E410F8088586(L_45, L_46, List_1_get_Item_mFCB5F6B16EDD6EFF12D288857142E410F8088586_RuntimeMethod_var);
				NullCheck(L_47);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_48 = L_47->___gameObjectRef_4;
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_49 = V_3;
				NullCheck(L_49);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_50;
				L_50 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_49, NULL);
				il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
				bool L_51;
				L_51 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_48, L_50, NULL);
				if (!L_51)
				{
					goto IL_012c_1;
				}
			}
			{
				// addElement = false;
				V_0 = (bool)0;
				// this.elementsList[a].sortID = newSortID;
				List_1_t2F48DCC67405C354E57C9C3263548DB2D541DBB0* L_52 = __this->___elementsList_4;
				int32_t L_53 = V_4;
				NullCheck(L_52);
				InterfaceAnmElement_t02DC7282CF1F682DD0C071B9DE5637D4E58C5706* L_54;
				L_54 = List_1_get_Item_mFCB5F6B16EDD6EFF12D288857142E410F8088586(L_52, L_53, List_1_get_Item_mFCB5F6B16EDD6EFF12D288857142E410F8088586_RuntimeMethod_var);
				int32_t L_55 = V_1;
				NullCheck(L_54);
				L_54->___sortID_8 = L_55;
				// break;
				goto IL_013a_1;
			}

IL_012c_1:
			{
				// for (int a = this.elementsList.Count - 1; a >= 0; a--) {
				int32_t L_56 = V_4;
				V_4 = ((int32_t)il2cpp_codegen_subtract(L_56, 1));
			}

IL_0132_1:
			{
				// for (int a = this.elementsList.Count - 1; a >= 0; a--) {
				int32_t L_57 = V_4;
				if ((((int32_t)L_57) >= ((int32_t)0)))
				{
					goto IL_0057_1;
				}
			}

IL_013a_1:
			{
				// if (addElement) {
				bool L_58 = V_0;
				if (!L_58)
				{
					goto IL_017c_1;
				}
			}
			{
				// if (child.gameObject.GetComponent<InterfaceAnimManager>()) {
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_59 = V_3;
				NullCheck(L_59);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_60;
				L_60 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_59, NULL);
				NullCheck(L_60);
				InterfaceAnimManager_t55019D504BEA6534494FED15C7945911CE850962* L_61;
				L_61 = GameObject_GetComponent_TisInterfaceAnimManager_t55019D504BEA6534494FED15C7945911CE850962_m3C753C203152FD3ED8CE525C216473174957EB16(L_60, GameObject_GetComponent_TisInterfaceAnimManager_t55019D504BEA6534494FED15C7945911CE850962_m3C753C203152FD3ED8CE525C216473174957EB16_RuntimeMethod_var);
				il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
				bool L_62;
				L_62 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_61, NULL);
				if (!L_62)
				{
					goto IL_0160_1;
				}
			}
			{
				// ia = InterfaceAnmElement.Create(child.gameObject, newSortID, true);
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_63 = V_3;
				NullCheck(L_63);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_64;
				L_64 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_63, NULL);
				int32_t L_65 = V_1;
				il2cpp_codegen_runtime_class_init_inline(InterfaceAnmElement_t02DC7282CF1F682DD0C071B9DE5637D4E58C5706_il2cpp_TypeInfo_var);
				InterfaceAnmElement_t02DC7282CF1F682DD0C071B9DE5637D4E58C5706* L_66;
				L_66 = InterfaceAnmElement_Create_mAF99420ED8574C27D0824743F341C55A17F9ABE5(L_64, L_65, (bool)1, NULL);
				V_5 = L_66;
				goto IL_016f_1;
			}

IL_0160_1:
			{
				// ia = InterfaceAnmElement.Create(child.gameObject, newSortID, false);
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_67 = V_3;
				NullCheck(L_67);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_68;
				L_68 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_67, NULL);
				int32_t L_69 = V_1;
				il2cpp_codegen_runtime_class_init_inline(InterfaceAnmElement_t02DC7282CF1F682DD0C071B9DE5637D4E58C5706_il2cpp_TypeInfo_var);
				InterfaceAnmElement_t02DC7282CF1F682DD0C071B9DE5637D4E58C5706* L_70;
				L_70 = InterfaceAnmElement_Create_mAF99420ED8574C27D0824743F341C55A17F9ABE5(L_68, L_69, (bool)0, NULL);
				V_5 = L_70;
			}

IL_016f_1:
			{
				// this.elementsList.Add(ia);
				List_1_t2F48DCC67405C354E57C9C3263548DB2D541DBB0* L_71 = __this->___elementsList_4;
				InterfaceAnmElement_t02DC7282CF1F682DD0C071B9DE5637D4E58C5706* L_72 = V_5;
				NullCheck(L_71);
				List_1_Add_mD2EFF63F2DC69FEAEE0E21346D7EFD136A1E91B9_inline(L_71, L_72, List_1_Add_mD2EFF63F2DC69FEAEE0E21346D7EFD136A1E91B9_RuntimeMethod_var);
			}

IL_017c_1:
			{
				// newSortID++;
				int32_t L_73 = V_1;
				V_1 = ((int32_t)il2cpp_codegen_add(L_73, 1));
			}

IL_0180_1:
			{
				// foreach (Transform child in this.gameObject.transform) {
				RuntimeObject* L_74 = V_2;
				NullCheck(L_74);
				bool L_75;
				L_75 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_74);
				if (L_75)
				{
					goto IL_001a_1;
				}
			}
			{
				goto IL_01a1;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_01a1:
	{
		// this.elementsList = this.elementsList.OrderBy(x => x.sortID).ToList();
		List_1_t2F48DCC67405C354E57C9C3263548DB2D541DBB0* L_76 = __this->___elementsList_4;
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t0AABEEAE6C6AC50E267EB829C4D47A57CB988ED7_il2cpp_TypeInfo_var);
		Func_2_t61A769E1370E91D9D2BBB870F77AB93DC7203E59* L_77 = ((U3CU3Ec_t0AABEEAE6C6AC50E267EB829C4D47A57CB988ED7_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t0AABEEAE6C6AC50E267EB829C4D47A57CB988ED7_il2cpp_TypeInfo_var))->___U3CU3E9__40_0_1;
		Func_2_t61A769E1370E91D9D2BBB870F77AB93DC7203E59* L_78 = L_77;
		G_B26_0 = L_78;
		G_B26_1 = L_76;
		G_B26_2 = __this;
		if (L_78)
		{
			G_B27_0 = L_78;
			G_B27_1 = L_76;
			G_B27_2 = __this;
			goto IL_01c7;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t0AABEEAE6C6AC50E267EB829C4D47A57CB988ED7_il2cpp_TypeInfo_var);
		U3CU3Ec_t0AABEEAE6C6AC50E267EB829C4D47A57CB988ED7* L_79 = ((U3CU3Ec_t0AABEEAE6C6AC50E267EB829C4D47A57CB988ED7_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t0AABEEAE6C6AC50E267EB829C4D47A57CB988ED7_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Func_2_t61A769E1370E91D9D2BBB870F77AB93DC7203E59* L_80 = (Func_2_t61A769E1370E91D9D2BBB870F77AB93DC7203E59*)il2cpp_codegen_object_new(Func_2_t61A769E1370E91D9D2BBB870F77AB93DC7203E59_il2cpp_TypeInfo_var);
		NullCheck(L_80);
		Func_2__ctor_m91AAE6F1BA2880A0B1D9130CDAC79FFC156BBD31(L_80, L_79, (intptr_t)((void*)U3CU3Ec_U3CUpdateAnimClipsU3Eb__40_0_m87C4C447FE1B345F86AB9BF5884677BC6C6451EC_RuntimeMethod_var), NULL);
		Func_2_t61A769E1370E91D9D2BBB870F77AB93DC7203E59* L_81 = L_80;
		((U3CU3Ec_t0AABEEAE6C6AC50E267EB829C4D47A57CB988ED7_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t0AABEEAE6C6AC50E267EB829C4D47A57CB988ED7_il2cpp_TypeInfo_var))->___U3CU3E9__40_0_1 = L_81;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t0AABEEAE6C6AC50E267EB829C4D47A57CB988ED7_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t0AABEEAE6C6AC50E267EB829C4D47A57CB988ED7_il2cpp_TypeInfo_var))->___U3CU3E9__40_0_1), (void*)L_81);
		G_B27_0 = L_81;
		G_B27_1 = G_B26_1;
		G_B27_2 = G_B26_2;
	}

IL_01c7:
	{
		RuntimeObject* L_82;
		L_82 = Enumerable_OrderBy_TisInterfaceAnmElement_t02DC7282CF1F682DD0C071B9DE5637D4E58C5706_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mC025B00D20A119B25DEB0DDD50D2C38511A43877(G_B27_1, G_B27_0, Enumerable_OrderBy_TisInterfaceAnmElement_t02DC7282CF1F682DD0C071B9DE5637D4E58C5706_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mC025B00D20A119B25DEB0DDD50D2C38511A43877_RuntimeMethod_var);
		List_1_t2F48DCC67405C354E57C9C3263548DB2D541DBB0* L_83;
		L_83 = Enumerable_ToList_TisInterfaceAnmElement_t02DC7282CF1F682DD0C071B9DE5637D4E58C5706_m4798855DA56683CD385157F94F5A0A0C51F0175A(L_82, Enumerable_ToList_TisInterfaceAnmElement_t02DC7282CF1F682DD0C071B9DE5637D4E58C5706_m4798855DA56683CD385157F94F5A0A0C51F0175A_RuntimeMethod_var);
		NullCheck(G_B27_2);
		G_B27_2->___elementsList_4 = L_83;
		Il2CppCodeGenWriteBarrier((void**)(&G_B27_2->___elementsList_4), (void*)L_83);
		// if (!isIAM_Root()) {
		bool L_84;
		L_84 = InterfaceAnimManager_isIAM_Root_mB0699470DFD35C63FB1249C20EF5477D6C800DDD(__this, NULL);
		if (L_84)
		{
			goto IL_024b;
		}
	}
	{
		// foreach (InterfaceAnimManager _IAM in this.nestedIAM) {
		List_1_t70363A4FDD9B70AB54795A2131A483E3A31DC878* L_85 = __this->___nestedIAM_20;
		NullCheck(L_85);
		Enumerator_tB10F09810993415F99163C558E4CE11478C5E87E L_86;
		L_86 = List_1_GetEnumerator_m8DB1F8E62641BE14DE9D7E3D3470B981D0D2A2BE(L_85, List_1_GetEnumerator_m8DB1F8E62641BE14DE9D7E3D3470B981D0D2A2BE_RuntimeMethod_var);
		V_7 = L_86;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_023d:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m86FC1B7BBD037A5B0081E8E9B916524B5BCC371E((&V_7), Enumerator_Dispose_m86FC1B7BBD037A5B0081E8E9B916524B5BCC371E_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_022f_1;
			}

IL_01ed_1:
			{
				// foreach (InterfaceAnimManager _IAM in this.nestedIAM) {
				InterfaceAnimManager_t55019D504BEA6534494FED15C7945911CE850962* L_87;
				L_87 = Enumerator_get_Current_m7AEC9C406EBAEA2718FDA0F82F1EA824BB163AF5_inline((&V_7), Enumerator_get_Current_m7AEC9C406EBAEA2718FDA0F82F1EA824BB163AF5_RuntimeMethod_var);
				// _IAM.autoStart = this.autoStart;
				InterfaceAnimManager_t55019D504BEA6534494FED15C7945911CE850962* L_88 = L_87;
				bool L_89 = __this->___autoStart_5;
				NullCheck(L_88);
				L_88->___autoStart_5 = L_89;
				// _IAM.useDelays = this.useDelays;
				InterfaceAnimManager_t55019D504BEA6534494FED15C7945911CE850962* L_90 = L_88;
				bool L_91 = __this->___useDelays_16;
				NullCheck(L_90);
				L_90->___useDelays_16 = L_91;
				// _IAM.timeBetweenLoops = this.timeBetweenLoops;
				InterfaceAnimManager_t55019D504BEA6534494FED15C7945911CE850962* L_92 = L_90;
				int32_t L_93 = __this->___timeBetweenLoops_9;
				NullCheck(L_92);
				L_92->___timeBetweenLoops_9 = L_93;
				// _IAM.waitAppear_Nested = this.waitAppear_Nested;
				InterfaceAnimManager_t55019D504BEA6534494FED15C7945911CE850962* L_94 = L_92;
				bool L_95 = __this->___waitAppear_Nested_21;
				NullCheck(L_94);
				L_94->___waitAppear_Nested_21 = L_95;
				// _IAM.waitDisappear_Nested = this.waitDisappear_Nested;
				bool L_96 = __this->___waitDisappear_Nested_22;
				NullCheck(L_94);
				L_94->___waitDisappear_Nested_22 = L_96;
			}

IL_022f_1:
			{
				// foreach (InterfaceAnimManager _IAM in this.nestedIAM) {
				bool L_97;
				L_97 = Enumerator_MoveNext_mBF0BA36039C43F42428B191F8AE5265C4976F54F((&V_7), Enumerator_MoveNext_mBF0BA36039C43F42428B191F8AE5265C4976F54F_RuntimeMethod_var);
				if (L_97)
				{
					goto IL_01ed_1;
				}
			}
			{
				goto IL_02d4;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_024b:
	{
		// this.nestedIAM = this.GetComponentsInChildren<InterfaceAnimManager>(true).ToList<InterfaceAnimManager>();
		InterfaceAnimManagerU5BU5D_tB99A76DFD85996ED124AE4892004922F617EF797* L_98;
		L_98 = Component_GetComponentsInChildren_TisInterfaceAnimManager_t55019D504BEA6534494FED15C7945911CE850962_mE7FED832B998CF2167D4A7F6BC177037145CF25F(__this, (bool)1, Component_GetComponentsInChildren_TisInterfaceAnimManager_t55019D504BEA6534494FED15C7945911CE850962_mE7FED832B998CF2167D4A7F6BC177037145CF25F_RuntimeMethod_var);
		List_1_t70363A4FDD9B70AB54795A2131A483E3A31DC878* L_99;
		L_99 = Enumerable_ToList_TisInterfaceAnimManager_t55019D504BEA6534494FED15C7945911CE850962_mA2260FF7C8675BC7C0C4B97C79D35B8B1F3D3C57((RuntimeObject*)L_98, Enumerable_ToList_TisInterfaceAnimManager_t55019D504BEA6534494FED15C7945911CE850962_mA2260FF7C8675BC7C0C4B97C79D35B8B1F3D3C57_RuntimeMethod_var);
		__this->___nestedIAM_20 = L_99;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___nestedIAM_20), (void*)L_99);
		// this.nestedIAM.Remove(this);
		List_1_t70363A4FDD9B70AB54795A2131A483E3A31DC878* L_100 = __this->___nestedIAM_20;
		NullCheck(L_100);
		bool L_101;
		L_101 = List_1_Remove_m7093559E6975C1702B2D84D3DA57371CCD285C85(L_100, __this, List_1_Remove_m7093559E6975C1702B2D84D3DA57371CCD285C85_RuntimeMethod_var);
		// foreach (InterfaceAnimManager _IAM in this.nestedIAM) {
		List_1_t70363A4FDD9B70AB54795A2131A483E3A31DC878* L_102 = __this->___nestedIAM_20;
		NullCheck(L_102);
		Enumerator_tB10F09810993415F99163C558E4CE11478C5E87E L_103;
		L_103 = List_1_GetEnumerator_m8DB1F8E62641BE14DE9D7E3D3470B981D0D2A2BE(L_102, List_1_GetEnumerator_m8DB1F8E62641BE14DE9D7E3D3470B981D0D2A2BE_RuntimeMethod_var);
		V_7 = L_103;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_02c6:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m86FC1B7BBD037A5B0081E8E9B916524B5BCC371E((&V_7), Enumerator_Dispose_m86FC1B7BBD037A5B0081E8E9B916524B5BCC371E_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_02bb_1;
			}

IL_0279_1:
			{
				// foreach (InterfaceAnimManager _IAM in this.nestedIAM) {
				InterfaceAnimManager_t55019D504BEA6534494FED15C7945911CE850962* L_104;
				L_104 = Enumerator_get_Current_m7AEC9C406EBAEA2718FDA0F82F1EA824BB163AF5_inline((&V_7), Enumerator_get_Current_m7AEC9C406EBAEA2718FDA0F82F1EA824BB163AF5_RuntimeMethod_var);
				// _IAM.autoStart = this.autoStart;
				InterfaceAnimManager_t55019D504BEA6534494FED15C7945911CE850962* L_105 = L_104;
				bool L_106 = __this->___autoStart_5;
				NullCheck(L_105);
				L_105->___autoStart_5 = L_106;
				// _IAM.useDelays = this.useDelays;
				InterfaceAnimManager_t55019D504BEA6534494FED15C7945911CE850962* L_107 = L_105;
				bool L_108 = __this->___useDelays_16;
				NullCheck(L_107);
				L_107->___useDelays_16 = L_108;
				// _IAM.timeBetweenLoops = this.timeBetweenLoops;
				InterfaceAnimManager_t55019D504BEA6534494FED15C7945911CE850962* L_109 = L_107;
				int32_t L_110 = __this->___timeBetweenLoops_9;
				NullCheck(L_109);
				L_109->___timeBetweenLoops_9 = L_110;
				// _IAM.waitAppear_Nested = this.waitAppear_Nested;
				InterfaceAnimManager_t55019D504BEA6534494FED15C7945911CE850962* L_111 = L_109;
				bool L_112 = __this->___waitAppear_Nested_21;
				NullCheck(L_111);
				L_111->___waitAppear_Nested_21 = L_112;
				// _IAM.waitDisappear_Nested = this.waitDisappear_Nested;
				bool L_113 = __this->___waitDisappear_Nested_22;
				NullCheck(L_111);
				L_111->___waitDisappear_Nested_22 = L_113;
			}

IL_02bb_1:
			{
				// foreach (InterfaceAnimManager _IAM in this.nestedIAM) {
				bool L_114;
				L_114 = Enumerator_MoveNext_mBF0BA36039C43F42428B191F8AE5265C4976F54F((&V_7), Enumerator_MoveNext_mBF0BA36039C43F42428B191F8AE5265C4976F54F_RuntimeMethod_var);
				if (L_114)
				{
					goto IL_0279_1;
				}
			}
			{
				goto IL_02d4;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_02d4:
	{
		// foreach (InterfaceAnmElement _element in this.elementsList) {
		List_1_t2F48DCC67405C354E57C9C3263548DB2D541DBB0* L_115 = __this->___elementsList_4;
		NullCheck(L_115);
		Enumerator_tBE821E8DBC9F67CC069BF33B74F05F0A2270F44E L_116;
		L_116 = List_1_GetEnumerator_m736E8835B6C02CAC94A7EA21A8B0B17D38246CAF(L_115, List_1_GetEnumerator_m736E8835B6C02CAC94A7EA21A8B0B17D38246CAF_RuntimeMethod_var);
		V_8 = L_116;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0307:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m05F5DC7DDC52C222E3CC2A5F3E80A9CAC2EC68AE((&V_8), Enumerator_Dispose_m05F5DC7DDC52C222E3CC2A5F3E80A9CAC2EC68AE_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_02fc_1;
			}

IL_02e3_1:
			{
				// foreach (InterfaceAnmElement _element in this.elementsList) {
				InterfaceAnmElement_t02DC7282CF1F682DD0C071B9DE5637D4E58C5706* L_117;
				L_117 = Enumerator_get_Current_m1BBA4A743DD622178C8A15E930ADDEE490553A80_inline((&V_8), Enumerator_get_Current_m1BBA4A743DD622178C8A15E930ADDEE490553A80_RuntimeMethod_var);
				V_9 = L_117;
				// if (_element) {//in case it has been destroyed in the meantime
				InterfaceAnmElement_t02DC7282CF1F682DD0C071B9DE5637D4E58C5706* L_118 = V_9;
				il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
				bool L_119;
				L_119 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_118, NULL);
				if (!L_119)
				{
					goto IL_02fc_1;
				}
			}
			{
				// _element.UpdateProperties();
				InterfaceAnmElement_t02DC7282CF1F682DD0C071B9DE5637D4E58C5706* L_120 = V_9;
				NullCheck(L_120);
				InterfaceAnmElement_UpdateProperties_m483FC45B6963B9ACDFE63DC851252009F9F66413(L_120, NULL);
			}

IL_02fc_1:
			{
				// foreach (InterfaceAnmElement _element in this.elementsList) {
				bool L_121;
				L_121 = Enumerator_MoveNext_m95E1E769FF7A8208A46B05C694DD6C720FCE6C49((&V_8), Enumerator_MoveNext_m95E1E769FF7A8208A46B05C694DD6C720FCE6C49_RuntimeMethod_var);
				if (L_121)
				{
					goto IL_02e3_1;
				}
			}
			{
				goto IL_0315;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0315:
	{
		// if (isIAM_Root()) {
		bool L_122;
		L_122 = InterfaceAnimManager_isIAM_Root_mB0699470DFD35C63FB1249C20EF5477D6C800DDD(__this, NULL);
		if (!L_122)
		{
			goto IL_03c3;
		}
	}
	{
		// int index = 0;
		V_10 = 0;
		// foreach (InterfaceAnimManager _IAM in this.nestedIAM) {
		List_1_t70363A4FDD9B70AB54795A2131A483E3A31DC878* L_123 = __this->___nestedIAM_20;
		NullCheck(L_123);
		Enumerator_tB10F09810993415F99163C558E4CE11478C5E87E L_124;
		L_124 = List_1_GetEnumerator_m8DB1F8E62641BE14DE9D7E3D3470B981D0D2A2BE(L_123, List_1_GetEnumerator_m8DB1F8E62641BE14DE9D7E3D3470B981D0D2A2BE_RuntimeMethod_var);
		V_7 = L_124;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0381:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m86FC1B7BBD037A5B0081E8E9B916524B5BCC371E((&V_7), Enumerator_Dispose_m86FC1B7BBD037A5B0081E8E9B916524B5BCC371E_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0376_1;
			}

IL_0332_1:
			{
				// foreach (InterfaceAnimManager _IAM in this.nestedIAM) {
				InterfaceAnimManager_t55019D504BEA6534494FED15C7945911CE850962* L_125;
				L_125 = Enumerator_get_Current_m7AEC9C406EBAEA2718FDA0F82F1EA824BB163AF5_inline((&V_7), Enumerator_get_Current_m7AEC9C406EBAEA2718FDA0F82F1EA824BB163AF5_RuntimeMethod_var);
				V_11 = L_125;
				// if (_IAM.gameObject.GetComponent<InterfaceAnimManager>()) {
				InterfaceAnimManager_t55019D504BEA6534494FED15C7945911CE850962* L_126 = V_11;
				NullCheck(L_126);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_127;
				L_127 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_126, NULL);
				NullCheck(L_127);
				InterfaceAnimManager_t55019D504BEA6534494FED15C7945911CE850962* L_128;
				L_128 = GameObject_GetComponent_TisInterfaceAnimManager_t55019D504BEA6534494FED15C7945911CE850962_m3C753C203152FD3ED8CE525C216473174957EB16(L_127, GameObject_GetComponent_TisInterfaceAnimManager_t55019D504BEA6534494FED15C7945911CE850962_m3C753C203152FD3ED8CE525C216473174957EB16_RuntimeMethod_var);
				il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
				bool L_129;
				L_129 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_128, NULL);
				if (!L_129)
				{
					goto IL_0370_1;
				}
			}
			{
				// _IAM.gameObject.name = "Nested_IAM[" + index + "]";
				InterfaceAnimManager_t55019D504BEA6534494FED15C7945911CE850962* L_130 = V_11;
				NullCheck(L_130);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_131;
				L_131 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_130, NULL);
				String_t* L_132;
				L_132 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_10), NULL);
				String_t* L_133;
				L_133 = String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0(_stringLiteralFA980B4AF7F45E5DE6A530093E7658BEA82FF8B2, L_132, _stringLiteralE166C9564FBDE461738077E3B1B506525EB6ACCC, NULL);
				NullCheck(L_131);
				Object_set_name_mC79E6DC8FFD72479C90F0C4CC7F42A0FEAF5AE47(L_131, L_133, NULL);
			}

IL_0370_1:
			{
				// index++;
				int32_t L_134 = V_10;
				V_10 = ((int32_t)il2cpp_codegen_add(L_134, 1));
			}

IL_0376_1:
			{
				// foreach (InterfaceAnimManager _IAM in this.nestedIAM) {
				bool L_135;
				L_135 = Enumerator_MoveNext_mBF0BA36039C43F42428B191F8AE5265C4976F54F((&V_7), Enumerator_MoveNext_mBF0BA36039C43F42428B191F8AE5265C4976F54F_RuntimeMethod_var);
				if (L_135)
				{
					goto IL_0332_1;
				}
			}
			{
				goto IL_038f;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_038f:
	{
		// foreach (InterfaceAnimManager _IAM in this.nestedIAM) {
		List_1_t70363A4FDD9B70AB54795A2131A483E3A31DC878* L_136 = __this->___nestedIAM_20;
		NullCheck(L_136);
		Enumerator_tB10F09810993415F99163C558E4CE11478C5E87E L_137;
		L_137 = List_1_GetEnumerator_m8DB1F8E62641BE14DE9D7E3D3470B981D0D2A2BE(L_136, List_1_GetEnumerator_m8DB1F8E62641BE14DE9D7E3D3470B981D0D2A2BE_RuntimeMethod_var);
		V_7 = L_137;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_03b5:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m86FC1B7BBD037A5B0081E8E9B916524B5BCC371E((&V_7), Enumerator_Dispose_m86FC1B7BBD037A5B0081E8E9B916524B5BCC371E_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_03aa_1;
			}

IL_039e_1:
			{
				// foreach (InterfaceAnimManager _IAM in this.nestedIAM) {
				InterfaceAnimManager_t55019D504BEA6534494FED15C7945911CE850962* L_138;
				L_138 = Enumerator_get_Current_m7AEC9C406EBAEA2718FDA0F82F1EA824BB163AF5_inline((&V_7), Enumerator_get_Current_m7AEC9C406EBAEA2718FDA0F82F1EA824BB163AF5_RuntimeMethod_var);
				// _IAM.UpdateAnimClips();
				NullCheck(L_138);
				InterfaceAnimManager_UpdateAnimClips_mB15CE778AC410C9CCBDE442A48C4FFDB9DDADF65(L_138, NULL);
			}

IL_03aa_1:
			{
				// foreach (InterfaceAnimManager _IAM in this.nestedIAM) {
				bool L_139;
				L_139 = Enumerator_MoveNext_mBF0BA36039C43F42428B191F8AE5265C4976F54F((&V_7), Enumerator_MoveNext_mBF0BA36039C43F42428B191F8AE5265C4976F54F_RuntimeMethod_var);
				if (L_139)
				{
					goto IL_039e_1;
				}
			}
			{
				goto IL_03c3;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_03c3:
	{
		// }
		return;
	}
}
// System.Boolean InterfaceAnimManager::isIAM_Root()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InterfaceAnimManager_isIAM_Root_mB0699470DFD35C63FB1249C20EF5477D6C800DDD (InterfaceAnimManager_t55019D504BEA6534494FED15C7945911CE850962* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisInterfaceAnimManager_t55019D504BEA6534494FED15C7945911CE850962_mD27B439389B85FEB9E300BBE757143C583C05729_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (this.transform.parent && this.transform.parent.GetComponent<InterfaceAnimManager>()) {
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Transform_get_parent_m65354E28A4C94EC00EBCF03532F7B0718380791E(L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_1, NULL);
		if (!L_2)
		{
			goto IL_002b;
		}
	}
	{
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_3);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = Transform_get_parent_m65354E28A4C94EC00EBCF03532F7B0718380791E(L_3, NULL);
		NullCheck(L_4);
		InterfaceAnimManager_t55019D504BEA6534494FED15C7945911CE850962* L_5;
		L_5 = Component_GetComponent_TisInterfaceAnimManager_t55019D504BEA6534494FED15C7945911CE850962_mD27B439389B85FEB9E300BBE757143C583C05729(L_4, Component_GetComponent_TisInterfaceAnimManager_t55019D504BEA6534494FED15C7945911CE850962_mD27B439389B85FEB9E300BBE757143C583C05729_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_6;
		L_6 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_5, NULL);
		if (!L_6)
		{
			goto IL_002b;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_002b:
	{
		// return true;
		return (bool)1;
	}
}
// System.Void InterfaceAnimManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterfaceAnimManager__ctor_mE26CB4DD66C0C454E51294E5392D63D2BB4BD268 (InterfaceAnimManager_t55019D504BEA6534494FED15C7945911CE850962* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m3292212006F87F9ED8E70CB2C0387FF2944E5640_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m53BA887F5D9470B269C4C302DCD52FF4DF85691E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t2F48DCC67405C354E57C9C3263548DB2D541DBB0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t70363A4FDD9B70AB54795A2131A483E3A31DC878_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public List<InterfaceAnmElement> elementsList = new List<InterfaceAnmElement>();
		List_1_t2F48DCC67405C354E57C9C3263548DB2D541DBB0* L_0 = (List_1_t2F48DCC67405C354E57C9C3263548DB2D541DBB0*)il2cpp_codegen_object_new(List_1_t2F48DCC67405C354E57C9C3263548DB2D541DBB0_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_m53BA887F5D9470B269C4C302DCD52FF4DF85691E(L_0, List_1__ctor_m53BA887F5D9470B269C4C302DCD52FF4DF85691E_RuntimeMethod_var);
		__this->___elementsList_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___elementsList_4), (void*)L_0);
		// public bool autoStart = true; // call startAppear when GameObject is enabled
		__this->___autoStart_5 = (bool)1;
		// public bool invertDelays = true; //copy appear delays of elements, and use those same delay in the reverse order for the disappear delays
		__this->___invertDelays_6 = (bool)1;
		// public int timeBetweenLoops = 3;
		__this->___timeBetweenLoops_9 = 3;
		// public bool autoLinearAppearDelay = true;
		__this->___autoLinearAppearDelay_11 = (bool)1;
		// public float appearDelay_SpeedMultiplier = 1;
		__this->___appearDelay_SpeedMultiplier_13 = (1.0f);
		// public float disappearDelay_SpeedMultiplier = 1;
		__this->___disappearDelay_SpeedMultiplier_14 = (1.0f);
		// public CSFHIAnimableState currentState = CSFHIAnimableState.disappeared;
		__this->___currentState_15 = 3;
		// public bool useDelays = true;
		__this->___useDelays_16 = (bool)1;
		// public List<InterfaceAnimManager> nestedIAM = new List<InterfaceAnimManager>();
		List_1_t70363A4FDD9B70AB54795A2131A483E3A31DC878* L_1 = (List_1_t70363A4FDD9B70AB54795A2131A483E3A31DC878*)il2cpp_codegen_object_new(List_1_t70363A4FDD9B70AB54795A2131A483E3A31DC878_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		List_1__ctor_m3292212006F87F9ED8E70CB2C0387FF2944E5640(L_1, List_1__ctor_m3292212006F87F9ED8E70CB2C0387FF2944E5640_RuntimeMethod_var);
		__this->___nestedIAM_20 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___nestedIAM_20), (void*)L_1);
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
// System.Void InterfaceAnimManager/<Disable_OnDisappearEnd>d__35::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDisable_OnDisappearEndU3Ed__35__ctor_mE6CF283B4FA5FAFE4D43C397E9D70CDEFBAC4EB6 (U3CDisable_OnDisappearEndU3Ed__35_tF42C64EEBEB26389A089E7F5E69FD83FD38015F0* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void InterfaceAnimManager/<Disable_OnDisappearEnd>d__35::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDisable_OnDisappearEndU3Ed__35_System_IDisposable_Dispose_m35F5B8496A054F5D04BB0C711D3970BE2E8DF34E (U3CDisable_OnDisappearEndU3Ed__35_tF42C64EEBEB26389A089E7F5E69FD83FD38015F0* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean InterfaceAnimManager/<Disable_OnDisappearEnd>d__35::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CDisable_OnDisappearEndU3Ed__35_MoveNext_mA445819BD9B6D34A093C58D95709EB12CB0E0CF3 (U3CDisable_OnDisappearEndU3Ed__35_tF42C64EEBEB26389A089E7F5E69FD83FD38015F0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisInterfaceAnimManager_t55019D504BEA6534494FED15C7945911CE850962_mD27B439389B85FEB9E300BBE757143C583C05729_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m05F5DC7DDC52C222E3CC2A5F3E80A9CAC2EC68AE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m95E1E769FF7A8208A46B05C694DD6C720FCE6C49_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m1BBA4A743DD622178C8A15E930ADDEE490553A80_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisInterfaceAnimManager_t55019D504BEA6534494FED15C7945911CE850962_m3C753C203152FD3ED8CE525C216473174957EB16_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m736E8835B6C02CAC94A7EA21A8B0B17D38246CAF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSecondsRealtime_tA8CE0AAB4B0C872B843E7973637037D17682BA01_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	InterfaceAnimManager_t55019D504BEA6534494FED15C7945911CE850962* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	Enumerator_tBE821E8DBC9F67CC069BF33B74F05F0A2270F44E V_4;
	memset((&V_4), 0, sizeof(V_4));
	InterfaceAnmElement_t02DC7282CF1F682DD0C071B9DE5637D4E58C5706* V_5 = NULL;
	InterfaceAnmElement_t02DC7282CF1F682DD0C071B9DE5637D4E58C5706* V_6 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		InterfaceAnimManager_t55019D504BEA6534494FED15C7945911CE850962* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
		int32_t L_2 = V_0;
		switch (L_2)
		{
			case 0:
			{
				goto IL_0022;
			}
			case 1:
			{
				goto IL_00b9;
			}
			case 2:
			{
				goto IL_00d8;
			}
		}
	}
	{
		return (bool)0;
	}

IL_0022:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// int longestWait = 1;
		V_2 = 1;
		// foreach (InterfaceAnmElement _element in elementsList) {
		InterfaceAnimManager_t55019D504BEA6534494FED15C7945911CE850962* L_3 = V_1;
		NullCheck(L_3);
		List_1_t2F48DCC67405C354E57C9C3263548DB2D541DBB0* L_4 = L_3->___elementsList_4;
		NullCheck(L_4);
		Enumerator_tBE821E8DBC9F67CC069BF33B74F05F0A2270F44E L_5;
		L_5 = List_1_GetEnumerator_m736E8835B6C02CAC94A7EA21A8B0B17D38246CAF(L_4, List_1_GetEnumerator_m736E8835B6C02CAC94A7EA21A8B0B17D38246CAF_RuntimeMethod_var);
		V_4 = L_5;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_008d:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m05F5DC7DDC52C222E3CC2A5F3E80A9CAC2EC68AE((&V_4), Enumerator_Dispose_m05F5DC7DDC52C222E3CC2A5F3E80A9CAC2EC68AE_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0082_1;
			}

IL_003a_1:
			{
				// foreach (InterfaceAnmElement _element in elementsList) {
				InterfaceAnmElement_t02DC7282CF1F682DD0C071B9DE5637D4E58C5706* L_6;
				L_6 = Enumerator_get_Current_m1BBA4A743DD622178C8A15E930ADDEE490553A80_inline((&V_4), Enumerator_get_Current_m1BBA4A743DD622178C8A15E930ADDEE490553A80_RuntimeMethod_var);
				V_5 = L_6;
				// if (_element.gameObjectRef.activeSelf && _element.animator != null) {
				InterfaceAnmElement_t02DC7282CF1F682DD0C071B9DE5637D4E58C5706* L_7 = V_5;
				NullCheck(L_7);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8 = L_7->___gameObjectRef_4;
				NullCheck(L_8);
				bool L_9;
				L_9 = GameObject_get_activeSelf_m4F3E5240E138B66AAA080EA30759A3D0517DA368(L_8, NULL);
				if (!L_9)
				{
					goto IL_0082_1;
				}
			}
			{
				InterfaceAnmElement_t02DC7282CF1F682DD0C071B9DE5637D4E58C5706* L_10 = V_5;
				NullCheck(L_10);
				Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_11 = L_10->___animator_9;
				il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
				bool L_12;
				L_12 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_11, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
				if (!L_12)
				{
					goto IL_0082_1;
				}
			}
			{
				// if (longestWait < _element.animator.GetCurrentAnimatorClipInfo(0).Length)
				int32_t L_13 = V_2;
				InterfaceAnmElement_t02DC7282CF1F682DD0C071B9DE5637D4E58C5706* L_14 = V_5;
				NullCheck(L_14);
				Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_15 = L_14->___animator_9;
				NullCheck(L_15);
				AnimatorClipInfoU5BU5D_t202D955679134FCCD698779FBABD2530E58CD60A* L_16;
				L_16 = Animator_GetCurrentAnimatorClipInfo_m963412D4118C301408B2EAFEF1E1CB5E971D5D92(L_15, 0, NULL);
				NullCheck(L_16);
				if ((((int32_t)L_13) >= ((int32_t)((int32_t)(((RuntimeArray*)L_16)->max_length)))))
				{
					goto IL_0082_1;
				}
			}
			{
				// longestWait = _element.animator.GetCurrentAnimatorClipInfo(0).Length;
				InterfaceAnmElement_t02DC7282CF1F682DD0C071B9DE5637D4E58C5706* L_17 = V_5;
				NullCheck(L_17);
				Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_18 = L_17->___animator_9;
				NullCheck(L_18);
				AnimatorClipInfoU5BU5D_t202D955679134FCCD698779FBABD2530E58CD60A* L_19;
				L_19 = Animator_GetCurrentAnimatorClipInfo_m963412D4118C301408B2EAFEF1E1CB5E971D5D92(L_18, 0, NULL);
				NullCheck(L_19);
				V_2 = ((int32_t)(((RuntimeArray*)L_19)->max_length));
			}

IL_0082_1:
			{
				// foreach (InterfaceAnmElement _element in elementsList) {
				bool L_20;
				L_20 = Enumerator_MoveNext_m95E1E769FF7A8208A46B05C694DD6C720FCE6C49((&V_4), Enumerator_MoveNext_m95E1E769FF7A8208A46B05C694DD6C720FCE6C49_RuntimeMethod_var);
				if (L_20)
				{
					goto IL_003a_1;
				}
			}
			{
				goto IL_009b;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_009b:
	{
		// if (forceUnscaledTime) {
		InterfaceAnimManager_t55019D504BEA6534494FED15C7945911CE850962* L_21 = V_1;
		NullCheck(L_21);
		bool L_22 = L_21->___forceUnscaledTime_12;
		if (!L_22)
		{
			goto IL_00c2;
		}
	}
	{
		// yield return new WaitForSecondsRealtime(longestWait);
		int32_t L_23 = V_2;
		WaitForSecondsRealtime_tA8CE0AAB4B0C872B843E7973637037D17682BA01* L_24 = (WaitForSecondsRealtime_tA8CE0AAB4B0C872B843E7973637037D17682BA01*)il2cpp_codegen_object_new(WaitForSecondsRealtime_tA8CE0AAB4B0C872B843E7973637037D17682BA01_il2cpp_TypeInfo_var);
		NullCheck(L_24);
		WaitForSecondsRealtime__ctor_mBFC1E4F0E042D5EC6E7EEB211A2FE5193A8F6D6F(L_24, ((float)L_23), NULL);
		__this->___U3CU3E2__current_1 = L_24;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_24);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_00b9:
	{
		__this->___U3CU3E1__state_0 = (-1);
		goto IL_00df;
	}

IL_00c2:
	{
		// yield return new WaitForSeconds(longestWait);
		int32_t L_25 = V_2;
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_26 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		NullCheck(L_26);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_26, ((float)L_25), NULL);
		__this->___U3CU3E2__current_1 = L_26;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_26);
		__this->___U3CU3E1__state_0 = 2;
		return (bool)1;
	}

IL_00d8:
	{
		__this->___U3CU3E1__state_0 = (-1);
	}

IL_00df:
	{
		// int index = 0;
		V_3 = 0;
		// foreach (InterfaceAnmElement _elementx in elementsList) {
		InterfaceAnimManager_t55019D504BEA6534494FED15C7945911CE850962* L_27 = V_1;
		NullCheck(L_27);
		List_1_t2F48DCC67405C354E57C9C3263548DB2D541DBB0* L_28 = L_27->___elementsList_4;
		NullCheck(L_28);
		Enumerator_tBE821E8DBC9F67CC069BF33B74F05F0A2270F44E L_29;
		L_29 = List_1_GetEnumerator_m736E8835B6C02CAC94A7EA21A8B0B17D38246CAF(L_28, List_1_GetEnumerator_m736E8835B6C02CAC94A7EA21A8B0B17D38246CAF_RuntimeMethod_var);
		V_4 = L_29;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0123:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m05F5DC7DDC52C222E3CC2A5F3E80A9CAC2EC68AE((&V_4), Enumerator_Dispose_m05F5DC7DDC52C222E3CC2A5F3E80A9CAC2EC68AE_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0118_1;
			}

IL_00f0_1:
			{
				// foreach (InterfaceAnmElement _elementx in elementsList) {
				InterfaceAnmElement_t02DC7282CF1F682DD0C071B9DE5637D4E58C5706* L_30;
				L_30 = Enumerator_get_Current_m1BBA4A743DD622178C8A15E930ADDEE490553A80_inline((&V_4), Enumerator_get_Current_m1BBA4A743DD622178C8A15E930ADDEE490553A80_RuntimeMethod_var);
				V_6 = L_30;
				// index++;
				int32_t L_31 = V_3;
				V_3 = ((int32_t)il2cpp_codegen_add(L_31, 1));
				// if (_elementx.isNested_IAM) {
				InterfaceAnmElement_t02DC7282CF1F682DD0C071B9DE5637D4E58C5706* L_32 = V_6;
				NullCheck(L_32);
				bool L_33 = L_32->___isNested_IAM_13;
				if (!L_33)
				{
					goto IL_0118_1;
				}
			}
			{
				// _elementx.gameObjectRef.GetComponent<InterfaceAnimManager>().startDisappear();
				InterfaceAnmElement_t02DC7282CF1F682DD0C071B9DE5637D4E58C5706* L_34 = V_6;
				NullCheck(L_34);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_35 = L_34->___gameObjectRef_4;
				NullCheck(L_35);
				InterfaceAnimManager_t55019D504BEA6534494FED15C7945911CE850962* L_36;
				L_36 = GameObject_GetComponent_TisInterfaceAnimManager_t55019D504BEA6534494FED15C7945911CE850962_m3C753C203152FD3ED8CE525C216473174957EB16(L_35, GameObject_GetComponent_TisInterfaceAnimManager_t55019D504BEA6534494FED15C7945911CE850962_m3C753C203152FD3ED8CE525C216473174957EB16_RuntimeMethod_var);
				NullCheck(L_36);
				VirtualActionInvoker1< bool >::Invoke(5 /* System.Void InterfaceAnimManager::startDisappear(System.Boolean) */, L_36, (bool)0);
			}

IL_0118_1:
			{
				// foreach (InterfaceAnmElement _elementx in elementsList) {
				bool L_37;
				L_37 = Enumerator_MoveNext_m95E1E769FF7A8208A46B05C694DD6C720FCE6C49((&V_4), Enumerator_MoveNext_m95E1E769FF7A8208A46B05C694DD6C720FCE6C49_RuntimeMethod_var);
				if (L_37)
				{
					goto IL_00f0_1;
				}
			}
			{
				goto IL_0131;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0131:
	{
		// StopCoroutine(Disable_OnDisappearEnd());
		InterfaceAnimManager_t55019D504BEA6534494FED15C7945911CE850962* L_38 = V_1;
		InterfaceAnimManager_t55019D504BEA6534494FED15C7945911CE850962* L_39 = V_1;
		NullCheck(L_39);
		RuntimeObject* L_40;
		L_40 = InterfaceAnimManager_Disable_OnDisappearEnd_m07592854CB8B7F15532C8784E4C197E0B668DA93(L_39, NULL);
		NullCheck(L_38);
		MonoBehaviour_StopCoroutine_mF9E93B82091E804595BE13AA29F9AB7517F7E04A(L_38, L_40, NULL);
		// if (!isIAM_Root() && this.gameObject.transform.parent.GetComponent<InterfaceAnimManager>()) {
		InterfaceAnimManager_t55019D504BEA6534494FED15C7945911CE850962* L_41 = V_1;
		NullCheck(L_41);
		bool L_42;
		L_42 = InterfaceAnimManager_isIAM_Root_mB0699470DFD35C63FB1249C20EF5477D6C800DDD(L_41, NULL);
		if (L_42)
		{
			goto IL_0167;
		}
	}
	{
		InterfaceAnimManager_t55019D504BEA6534494FED15C7945911CE850962* L_43 = V_1;
		NullCheck(L_43);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_44;
		L_44 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_43, NULL);
		NullCheck(L_44);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_45;
		L_45 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_44, NULL);
		NullCheck(L_45);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_46;
		L_46 = Transform_get_parent_m65354E28A4C94EC00EBCF03532F7B0718380791E(L_45, NULL);
		NullCheck(L_46);
		InterfaceAnimManager_t55019D504BEA6534494FED15C7945911CE850962* L_47;
		L_47 = Component_GetComponent_TisInterfaceAnimManager_t55019D504BEA6534494FED15C7945911CE850962_mD27B439389B85FEB9E300BBE757143C583C05729(L_46, Component_GetComponent_TisInterfaceAnimManager_t55019D504BEA6534494FED15C7945911CE850962_mD27B439389B85FEB9E300BBE757143C583C05729_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_48;
		L_48 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_47, NULL);
		if (!L_48)
		{
			goto IL_0167;
		}
	}
	{
		// EndDisappear();
		InterfaceAnimManager_t55019D504BEA6534494FED15C7945911CE850962* L_49 = V_1;
		NullCheck(L_49);
		InterfaceAnimManager_EndDisappear_m5D0D99EC31BED76A2466B8E3AE6DB69C9AD1026C(L_49, NULL);
	}

IL_0167:
	{
		// }
		return (bool)0;
	}
}
// System.Object InterfaceAnimManager/<Disable_OnDisappearEnd>d__35::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CDisable_OnDisappearEndU3Ed__35_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m5F3DE11EC95C4A7E0A942ACD591F51A796F98CE4 (U3CDisable_OnDisappearEndU3Ed__35_tF42C64EEBEB26389A089E7F5E69FD83FD38015F0* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void InterfaceAnimManager/<Disable_OnDisappearEnd>d__35::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDisable_OnDisappearEndU3Ed__35_System_Collections_IEnumerator_Reset_mC00D421C62D67E488928353F5C9E9432DF0B6CB0 (U3CDisable_OnDisappearEndU3Ed__35_tF42C64EEBEB26389A089E7F5E69FD83FD38015F0* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CDisable_OnDisappearEndU3Ed__35_System_Collections_IEnumerator_Reset_mC00D421C62D67E488928353F5C9E9432DF0B6CB0_RuntimeMethod_var)));
	}
}
// System.Object InterfaceAnimManager/<Disable_OnDisappearEnd>d__35::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CDisable_OnDisappearEndU3Ed__35_System_Collections_IEnumerator_get_Current_m838D4CD19515368521B89684964B5862EA1FFC8E (U3CDisable_OnDisappearEndU3Ed__35_tF42C64EEBEB26389A089E7F5E69FD83FD38015F0* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
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
// System.Void InterfaceAnimManager/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m24D76F14A9BE01650477EF11847106CA8857B5E3 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t0AABEEAE6C6AC50E267EB829C4D47A57CB988ED7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t0AABEEAE6C6AC50E267EB829C4D47A57CB988ED7* L_0 = (U3CU3Ec_t0AABEEAE6C6AC50E267EB829C4D47A57CB988ED7*)il2cpp_codegen_object_new(U3CU3Ec_t0AABEEAE6C6AC50E267EB829C4D47A57CB988ED7_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__ctor_m94D34CA7759CEEF5028855495101392EB0BCB47D(L_0, NULL);
		((U3CU3Ec_t0AABEEAE6C6AC50E267EB829C4D47A57CB988ED7_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t0AABEEAE6C6AC50E267EB829C4D47A57CB988ED7_il2cpp_TypeInfo_var))->___U3CU3E9_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t0AABEEAE6C6AC50E267EB829C4D47A57CB988ED7_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t0AABEEAE6C6AC50E267EB829C4D47A57CB988ED7_il2cpp_TypeInfo_var))->___U3CU3E9_0), (void*)L_0);
		return;
	}
}
// System.Void InterfaceAnimManager/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m94D34CA7759CEEF5028855495101392EB0BCB47D (U3CU3Ec_t0AABEEAE6C6AC50E267EB829C4D47A57CB988ED7* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Int32 InterfaceAnimManager/<>c::<UpdateAnimClips>b__40_0(InterfaceAnmElement)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t U3CU3Ec_U3CUpdateAnimClipsU3Eb__40_0_m87C4C447FE1B345F86AB9BF5884677BC6C6451EC (U3CU3Ec_t0AABEEAE6C6AC50E267EB829C4D47A57CB988ED7* __this, InterfaceAnmElement_t02DC7282CF1F682DD0C071B9DE5637D4E58C5706* ___x0, const RuntimeMethod* method) 
{
	{
		// this.elementsList = this.elementsList.OrderBy(x => x.sortID).ToList();
		InterfaceAnmElement_t02DC7282CF1F682DD0C071B9DE5637D4E58C5706* L_0 = ___x0;
		NullCheck(L_0);
		int32_t L_1 = L_0->___sortID_8;
		return L_1;
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
// InterfaceAnmElement InterfaceAnmElement::Create(UnityEngine.GameObject,System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InterfaceAnmElement_t02DC7282CF1F682DD0C071B9DE5637D4E58C5706* InterfaceAnmElement_Create_mAF99420ED8574C27D0824743F341C55A17F9ABE5 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ____gameObjectRef0, int32_t ____newSortID1, bool ____isNested_IAM2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m05F5DC7DDC52C222E3CC2A5F3E80A9CAC2EC68AE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m95E1E769FF7A8208A46B05C694DD6C720FCE6C49_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m1BBA4A743DD622178C8A15E930ADDEE490553A80_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisInterfaceAnmElement_t02DC7282CF1F682DD0C071B9DE5637D4E58C5706_mDE9582EC9994D7BE3699698F83B3E60037E29750_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisInterfaceAnmElement_t02DC7282CF1F682DD0C071B9DE5637D4E58C5706_mC68AEF59C130F41AE3EF11E242F6B92321168494_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InterfaceAnmElement_t02DC7282CF1F682DD0C071B9DE5637D4E58C5706_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m736E8835B6C02CAC94A7EA21A8B0B17D38246CAF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_tBE821E8DBC9F67CC069BF33B74F05F0A2270F44E V_0;
	memset((&V_0), 0, sizeof(V_0));
	InterfaceAnmElement_t02DC7282CF1F682DD0C071B9DE5637D4E58C5706* V_1 = NULL;
	InterfaceAnmElement_t02DC7282CF1F682DD0C071B9DE5637D4E58C5706* V_2 = NULL;
	{
		// if (_gameObjectRef.GetComponent<InterfaceAnmElement>()) {
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = ____gameObjectRef0;
		NullCheck(L_0);
		InterfaceAnmElement_t02DC7282CF1F682DD0C071B9DE5637D4E58C5706* L_1;
		L_1 = GameObject_GetComponent_TisInterfaceAnmElement_t02DC7282CF1F682DD0C071B9DE5637D4E58C5706_mC68AEF59C130F41AE3EF11E242F6B92321168494(L_0, GameObject_GetComponent_TisInterfaceAnmElement_t02DC7282CF1F682DD0C071B9DE5637D4E58C5706_mC68AEF59C130F41AE3EF11E242F6B92321168494_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_1, NULL);
		if (!L_2)
		{
			goto IL_001c;
		}
	}
	{
		// _newElement = _gameObjectRef.GetComponent<InterfaceAnmElement>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = ____gameObjectRef0;
		NullCheck(L_3);
		InterfaceAnmElement_t02DC7282CF1F682DD0C071B9DE5637D4E58C5706* L_4;
		L_4 = GameObject_GetComponent_TisInterfaceAnmElement_t02DC7282CF1F682DD0C071B9DE5637D4E58C5706_mC68AEF59C130F41AE3EF11E242F6B92321168494(L_3, GameObject_GetComponent_TisInterfaceAnmElement_t02DC7282CF1F682DD0C071B9DE5637D4E58C5706_mC68AEF59C130F41AE3EF11E242F6B92321168494_RuntimeMethod_var);
		// return _newElement.Confirm(_gameObjectRef, _newSortID, _isNested_IAM);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5 = ____gameObjectRef0;
		int32_t L_6 = ____newSortID1;
		bool L_7 = ____isNested_IAM2;
		NullCheck(L_4);
		InterfaceAnmElement_t02DC7282CF1F682DD0C071B9DE5637D4E58C5706* L_8;
		L_8 = VirtualFuncInvoker3< InterfaceAnmElement_t02DC7282CF1F682DD0C071B9DE5637D4E58C5706*, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, int32_t, bool >::Invoke(4 /* InterfaceAnmElement InterfaceAnmElement::Confirm(UnityEngine.GameObject,System.Int32,System.Boolean) */, L_4, L_5, L_6, L_7);
		return L_8;
	}

IL_001c:
	{
		// foreach (InterfaceAnmElement _element in list) {
		il2cpp_codegen_runtime_class_init_inline(InterfaceAnmElement_t02DC7282CF1F682DD0C071B9DE5637D4E58C5706_il2cpp_TypeInfo_var);
		List_1_t2F48DCC67405C354E57C9C3263548DB2D541DBB0* L_9 = ((InterfaceAnmElement_t02DC7282CF1F682DD0C071B9DE5637D4E58C5706_StaticFields*)il2cpp_codegen_static_fields_for(InterfaceAnmElement_t02DC7282CF1F682DD0C071B9DE5637D4E58C5706_il2cpp_TypeInfo_var))->___list_11;
		NullCheck(L_9);
		Enumerator_tBE821E8DBC9F67CC069BF33B74F05F0A2270F44E L_10;
		L_10 = List_1_GetEnumerator_m736E8835B6C02CAC94A7EA21A8B0B17D38246CAF(L_9, List_1_GetEnumerator_m736E8835B6C02CAC94A7EA21A8B0B17D38246CAF_RuntimeMethod_var);
		V_0 = L_10;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0050:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m05F5DC7DDC52C222E3CC2A5F3E80A9CAC2EC68AE((&V_0), Enumerator_Dispose_m05F5DC7DDC52C222E3CC2A5F3E80A9CAC2EC68AE_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0045_1;
			}

IL_0029_1:
			{
				// foreach (InterfaceAnmElement _element in list) {
				InterfaceAnmElement_t02DC7282CF1F682DD0C071B9DE5637D4E58C5706* L_11;
				L_11 = Enumerator_get_Current_m1BBA4A743DD622178C8A15E930ADDEE490553A80_inline((&V_0), Enumerator_get_Current_m1BBA4A743DD622178C8A15E930ADDEE490553A80_RuntimeMethod_var);
				V_1 = L_11;
				// if (_element.recycling) {
				InterfaceAnmElement_t02DC7282CF1F682DD0C071B9DE5637D4E58C5706* L_12 = V_1;
				NullCheck(L_12);
				bool L_13 = L_12->___recycling_7;
				if (!L_13)
				{
					goto IL_0045_1;
				}
			}
			{
				// _newElement = _element;
				InterfaceAnmElement_t02DC7282CF1F682DD0C071B9DE5637D4E58C5706* L_14 = V_1;
				// return _newElement.Confirm(_gameObjectRef, _newSortID, _isNested_IAM);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_15 = ____gameObjectRef0;
				int32_t L_16 = ____newSortID1;
				bool L_17 = ____isNested_IAM2;
				NullCheck(L_14);
				InterfaceAnmElement_t02DC7282CF1F682DD0C071B9DE5637D4E58C5706* L_18;
				L_18 = VirtualFuncInvoker3< InterfaceAnmElement_t02DC7282CF1F682DD0C071B9DE5637D4E58C5706*, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, int32_t, bool >::Invoke(4 /* InterfaceAnmElement InterfaceAnmElement::Confirm(UnityEngine.GameObject,System.Int32,System.Boolean) */, L_14, L_15, L_16, L_17);
				V_2 = L_18;
				goto IL_006d;
			}

IL_0045_1:
			{
				// foreach (InterfaceAnmElement _element in list) {
				bool L_19;
				L_19 = Enumerator_MoveNext_m95E1E769FF7A8208A46B05C694DD6C720FCE6C49((&V_0), Enumerator_MoveNext_m95E1E769FF7A8208A46B05C694DD6C720FCE6C49_RuntimeMethod_var);
				if (L_19)
				{
					goto IL_0029_1;
				}
			}
			{
				goto IL_005e;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_005e:
	{
		// _newElement = _gameObjectRef.AddComponent<InterfaceAnmElement>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_20 = ____gameObjectRef0;
		NullCheck(L_20);
		InterfaceAnmElement_t02DC7282CF1F682DD0C071B9DE5637D4E58C5706* L_21;
		L_21 = GameObject_AddComponent_TisInterfaceAnmElement_t02DC7282CF1F682DD0C071B9DE5637D4E58C5706_mDE9582EC9994D7BE3699698F83B3E60037E29750(L_20, GameObject_AddComponent_TisInterfaceAnmElement_t02DC7282CF1F682DD0C071B9DE5637D4E58C5706_mDE9582EC9994D7BE3699698F83B3E60037E29750_RuntimeMethod_var);
		// return _newElement.Confirm(_gameObjectRef, _newSortID, _isNested_IAM);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_22 = ____gameObjectRef0;
		int32_t L_23 = ____newSortID1;
		bool L_24 = ____isNested_IAM2;
		NullCheck(L_21);
		InterfaceAnmElement_t02DC7282CF1F682DD0C071B9DE5637D4E58C5706* L_25;
		L_25 = VirtualFuncInvoker3< InterfaceAnmElement_t02DC7282CF1F682DD0C071B9DE5637D4E58C5706*, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, int32_t, bool >::Invoke(4 /* InterfaceAnmElement InterfaceAnmElement::Confirm(UnityEngine.GameObject,System.Int32,System.Boolean) */, L_21, L_22, L_23, L_24);
		return L_25;
	}

IL_006d:
	{
		// }
		InterfaceAnmElement_t02DC7282CF1F682DD0C071B9DE5637D4E58C5706* L_26 = V_2;
		return L_26;
	}
}
// InterfaceAnmElement InterfaceAnmElement::Confirm(UnityEngine.GameObject,System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InterfaceAnmElement_t02DC7282CF1F682DD0C071B9DE5637D4E58C5706* InterfaceAnmElement_Confirm_mD79BDC51A334094B35748979D9CC4EFB8BFEA7CC (InterfaceAnmElement_t02DC7282CF1F682DD0C071B9DE5637D4E58C5706* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ____gameObjectRef0, int32_t ____newSortID1, bool ___isNested_IAM2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InterfaceAnmElement_t02DC7282CF1F682DD0C071B9DE5637D4E58C5706_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mD2EFF63F2DC69FEAEE0E21346D7EFD136A1E91B9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Contains_m45FA4AE2759DAA58E5439462F9E21ED21CAE68A4_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// this.gameObjectRef = _gameObjectRef;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = ____gameObjectRef0;
		__this->___gameObjectRef_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___gameObjectRef_4), (void*)L_0);
		// this.sortID = _newSortID;
		int32_t L_1 = ____newSortID1;
		__this->___sortID_8 = L_1;
		// this.isNested_IAM = isNested_IAM;
		bool L_2 = ___isNested_IAM2;
		__this->___isNested_IAM_13 = L_2;
		// this.recycling = false;
		__this->___recycling_7 = (bool)0;
		// if (!this.isNested_IAM) {
		bool L_3 = __this->___isNested_IAM_13;
		if (L_3)
		{
			goto IL_0030;
		}
	}
	{
		// this.animator = _gameObjectRef.GetComponent<Animator>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = ____gameObjectRef0;
		NullCheck(L_4);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_5;
		L_5 = GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3(L_4, GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3_RuntimeMethod_var);
		__this->___animator_9 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___animator_9), (void*)L_5);
	}

IL_0030:
	{
		// if (!list.Contains(this)) {
		il2cpp_codegen_runtime_class_init_inline(InterfaceAnmElement_t02DC7282CF1F682DD0C071B9DE5637D4E58C5706_il2cpp_TypeInfo_var);
		List_1_t2F48DCC67405C354E57C9C3263548DB2D541DBB0* L_6 = ((InterfaceAnmElement_t02DC7282CF1F682DD0C071B9DE5637D4E58C5706_StaticFields*)il2cpp_codegen_static_fields_for(InterfaceAnmElement_t02DC7282CF1F682DD0C071B9DE5637D4E58C5706_il2cpp_TypeInfo_var))->___list_11;
		NullCheck(L_6);
		bool L_7;
		L_7 = List_1_Contains_m45FA4AE2759DAA58E5439462F9E21ED21CAE68A4(L_6, __this, List_1_Contains_m45FA4AE2759DAA58E5439462F9E21ED21CAE68A4_RuntimeMethod_var);
		if (L_7)
		{
			goto IL_0048;
		}
	}
	{
		// list.Add(this);
		il2cpp_codegen_runtime_class_init_inline(InterfaceAnmElement_t02DC7282CF1F682DD0C071B9DE5637D4E58C5706_il2cpp_TypeInfo_var);
		List_1_t2F48DCC67405C354E57C9C3263548DB2D541DBB0* L_8 = ((InterfaceAnmElement_t02DC7282CF1F682DD0C071B9DE5637D4E58C5706_StaticFields*)il2cpp_codegen_static_fields_for(InterfaceAnmElement_t02DC7282CF1F682DD0C071B9DE5637D4E58C5706_il2cpp_TypeInfo_var))->___list_11;
		NullCheck(L_8);
		List_1_Add_mD2EFF63F2DC69FEAEE0E21346D7EFD136A1E91B9_inline(L_8, __this, List_1_Add_mD2EFF63F2DC69FEAEE0E21346D7EFD136A1E91B9_RuntimeMethod_var);
	}

IL_0048:
	{
		// return this;
		return __this;
	}
}
// System.Void InterfaceAnmElement::UpdateProperties()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterfaceAnmElement_UpdateProperties_m483FC45B6963B9ACDFE63DC851252009F9F66413 (InterfaceAnmElement_t02DC7282CF1F682DD0C071B9DE5637D4E58C5706* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisInterfaceAnimManager_t55019D504BEA6534494FED15C7945911CE850962_mD27B439389B85FEB9E300BBE757143C583C05729_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisInterfaceAnimManager_t55019D504BEA6534494FED15C7945911CE850962_m3C753C203152FD3ED8CE525C216473174957EB16_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (this.gameObjectRef.GetComponent<InterfaceAnimManager>() && this.gameObjectRef.transform.parent.GetComponent<InterfaceAnimManager>()) {
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___gameObjectRef_4;
		NullCheck(L_0);
		InterfaceAnimManager_t55019D504BEA6534494FED15C7945911CE850962* L_1;
		L_1 = GameObject_GetComponent_TisInterfaceAnimManager_t55019D504BEA6534494FED15C7945911CE850962_m3C753C203152FD3ED8CE525C216473174957EB16(L_0, GameObject_GetComponent_TisInterfaceAnimManager_t55019D504BEA6534494FED15C7945911CE850962_m3C753C203152FD3ED8CE525C216473174957EB16_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_1, NULL);
		if (!L_2)
		{
			goto IL_003d;
		}
	}
	{
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = __this->___gameObjectRef_4;
		NullCheck(L_3);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_3, NULL);
		NullCheck(L_4);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = Transform_get_parent_m65354E28A4C94EC00EBCF03532F7B0718380791E(L_4, NULL);
		NullCheck(L_5);
		InterfaceAnimManager_t55019D504BEA6534494FED15C7945911CE850962* L_6;
		L_6 = Component_GetComponent_TisInterfaceAnimManager_t55019D504BEA6534494FED15C7945911CE850962_mD27B439389B85FEB9E300BBE757143C583C05729(L_5, Component_GetComponent_TisInterfaceAnimManager_t55019D504BEA6534494FED15C7945911CE850962_mD27B439389B85FEB9E300BBE757143C583C05729_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_7;
		L_7 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_6, NULL);
		if (!L_7)
		{
			goto IL_003d;
		}
	}
	{
		// this.isNested_IAM = true;
		__this->___isNested_IAM_13 = (bool)1;
		// this.animator = null;
		__this->___animator_9 = (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___animator_9), (void*)(Animator_t8A52E42AE54F76681838FE9E632683EF3952E883*)NULL);
		return;
	}

IL_003d:
	{
		// this.isNested_IAM = false;
		__this->___isNested_IAM_13 = (bool)0;
		// this.animator = this.gameObjectRef.GetComponent<Animator>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8 = __this->___gameObjectRef_4;
		NullCheck(L_8);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_9;
		L_9 = GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3(L_8, GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3_RuntimeMethod_var);
		__this->___animator_9 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___animator_9), (void*)L_9);
		// }
		return;
	}
}
// System.Void InterfaceAnmElement::Delete()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterfaceAnmElement_Delete_m2CB64DBB62CDFF49E177B8920C850388181C6B49 (InterfaceAnmElement_t02DC7282CF1F682DD0C071B9DE5637D4E58C5706* __this, const RuntimeMethod* method) 
{
	{
		// this.gameObjectRef = null;
		__this->___gameObjectRef_4 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___gameObjectRef_4), (void*)(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)NULL);
		// this.sortID = 0;
		__this->___sortID_8 = 0;
		// this.timeAppear = 1;
		__this->___timeAppear_5 = (1.0f);
		// this.timeDisappear = 1;
		__this->___timeDisappear_6 = (1.0f);
		// this.isNested_IAM = false;
		__this->___isNested_IAM_13 = (bool)0;
		// this.currentState = CSFHIAnimableState.disappeared;
		__this->___currentState_12 = 3;
		// this.recycling = true;
		__this->___recycling_7 = (bool)1;
		// }
		return;
	}
}
// System.Void InterfaceAnmElement::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterfaceAnmElement_Update_m2CB2177F5BA8CA39292E8F8F45FCA65FF210BA5B (InterfaceAnmElement_t02DC7282CF1F682DD0C071B9DE5637D4E58C5706* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisInterfaceAnimManager_t55019D504BEA6534494FED15C7945911CE850962_m3C753C203152FD3ED8CE525C216473174957EB16_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!this.gameObjectRef || this.gameObjectRef.GetComponent<InterfaceAnimManager>()) {
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___gameObjectRef_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_0, NULL);
		if (!L_1)
		{
			goto IL_001e;
		}
	}
	{
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = __this->___gameObjectRef_4;
		NullCheck(L_2);
		InterfaceAnimManager_t55019D504BEA6534494FED15C7945911CE850962* L_3;
		L_3 = GameObject_GetComponent_TisInterfaceAnimManager_t55019D504BEA6534494FED15C7945911CE850962_m3C753C203152FD3ED8CE525C216473174957EB16(L_2, GameObject_GetComponent_TisInterfaceAnimManager_t55019D504BEA6534494FED15C7945911CE850962_m3C753C203152FD3ED8CE525C216473174957EB16_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_3, NULL);
	}

IL_001e:
	{
		// }
		return;
	}
}
// System.Void InterfaceAnmElement::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterfaceAnmElement__ctor_mD40F48427EAC1A56FA6FE0112AD82C94FFAE0A3C (InterfaceAnmElement_t02DC7282CF1F682DD0C071B9DE5637D4E58C5706* __this, const RuntimeMethod* method) 
{
	{
		// public float timeAppear = 1;
		__this->___timeAppear_5 = (1.0f);
		// public float timeDisappear = 1;
		__this->___timeDisappear_6 = (1.0f);
		// public CSFHIAnimableState currentState = CSFHIAnimableState.disappeared;
		__this->___currentState_12 = 3;
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
// System.Void InterfaceAnmElement::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterfaceAnmElement__cctor_m6923DE1D4078C51F753819391DE74F63E159FEA7 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InterfaceAnmElement_t02DC7282CF1F682DD0C071B9DE5637D4E58C5706_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m53BA887F5D9470B269C4C302DCD52FF4DF85691E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t2F48DCC67405C354E57C9C3263548DB2D541DBB0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static List<InterfaceAnmElement> list = new List<InterfaceAnmElement>();
		List_1_t2F48DCC67405C354E57C9C3263548DB2D541DBB0* L_0 = (List_1_t2F48DCC67405C354E57C9C3263548DB2D541DBB0*)il2cpp_codegen_object_new(List_1_t2F48DCC67405C354E57C9C3263548DB2D541DBB0_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_m53BA887F5D9470B269C4C302DCD52FF4DF85691E(L_0, List_1__ctor_m53BA887F5D9470B269C4C302DCD52FF4DF85691E_RuntimeMethod_var);
		((InterfaceAnmElement_t02DC7282CF1F682DD0C071B9DE5637D4E58C5706_StaticFields*)il2cpp_codegen_static_fields_for(InterfaceAnmElement_t02DC7282CF1F682DD0C071B9DE5637D4E58C5706_il2cpp_TypeInfo_var))->___list_11 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((InterfaceAnmElement_t02DC7282CF1F682DD0C071B9DE5637D4E58C5706_StaticFields*)il2cpp_codegen_static_fields_for(InterfaceAnmElement_t02DC7282CF1F682DD0C071B9DE5637D4E58C5706_il2cpp_TypeInfo_var))->___list_11), (void*)L_0);
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
// System.Void MouseOrbitImproved::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MouseOrbitImproved_Start_m64AE9BB87E42EFB59DA087598151153C70852ED8 (MouseOrbitImproved_t19ECE3CB982D60FD6DB794ABFEF61AA7CAAE8F64* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Vector3 angles = transform.eulerAngles;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Transform_get_eulerAngles_mCAAF48EFCF628F1ED91C2FFE75A4FD19C039DD6A(L_0, NULL);
		V_0 = L_1;
		// rotationYAxis = angles.y;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = V_0;
		float L_3 = L_2.___y_3;
		__this->___rotationYAxis_13 = L_3;
		// rotationXAxis = angles.x;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = V_0;
		float L_5 = L_4.___x_2;
		__this->___rotationXAxis_14 = L_5;
		// if (GetComponent<Rigidbody>()) {
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_6;
		L_6 = Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8(__this, Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_7;
		L_7 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_6, NULL);
		if (!L_7)
		{
			goto IL_003d;
		}
	}
	{
		// GetComponent<Rigidbody>().freezeRotation = true;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_8;
		L_8 = Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8(__this, Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8_RuntimeMethod_var);
		NullCheck(L_8);
		Rigidbody_set_freezeRotation_m6D049F82E9133020C31EEFB35A179A56364325DC(L_8, (bool)1, NULL);
	}

IL_003d:
	{
		// }
		return;
	}
}
// System.Void MouseOrbitImproved::LateUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MouseOrbitImproved_LateUpdate_m77306587253742AB17A4A31936251A87E70C0375 (MouseOrbitImproved_t19ECE3CB982D60FD6DB794ABFEF61AA7CAAE8F64* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral16DD21BE77B115D392226EB71A2D3A9FDC29E3F0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral88BEE283254D7094E258B3A88730F4CC4F1E4AC7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFC6687DC37346CD2569888E29764F727FAF530E0);
		s_Il2CppMethodInitialized = true;
	}
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		// if (target) {
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->___target_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_0, NULL);
		if (!L_1)
		{
			goto IL_01ae;
		}
	}
	{
		// if (Input.GetMouseButton(0)) {
		bool L_2;
		L_2 = Input_GetMouseButton_mE545CF4B790C6E202808B827E3141BEC3330DB70(0, NULL);
		if (!L_2)
		{
			goto IL_0067;
		}
	}
	{
		// velocityX += xSpeed * Input.GetAxis("Mouse X") * distance * 0.02f;
		float L_3 = __this->___velocityX_15;
		float L_4 = __this->___xSpeed_6;
		float L_5;
		L_5 = Input_GetAxis_m1F49B26F24032F45FB4583C95FB24E6771A161D4(_stringLiteral88BEE283254D7094E258B3A88730F4CC4F1E4AC7, NULL);
		float L_6 = __this->___distance_5;
		__this->___velocityX_15 = ((float)il2cpp_codegen_add(L_3, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(L_4, L_5)), L_6)), (0.0199999996f)))));
		// velocityY += ySpeed * Input.GetAxis("Mouse Y") * 0.02f;
		float L_7 = __this->___velocityY_16;
		float L_8 = __this->___ySpeed_7;
		float L_9;
		L_9 = Input_GetAxis_m1F49B26F24032F45FB4583C95FB24E6771A161D4(_stringLiteral16DD21BE77B115D392226EB71A2D3A9FDC29E3F0, NULL);
		__this->___velocityY_16 = ((float)il2cpp_codegen_add(L_7, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(L_8, L_9)), (0.0199999996f)))));
	}

IL_0067:
	{
		// rotationYAxis += velocityX;
		float L_10 = __this->___rotationYAxis_13;
		float L_11 = __this->___velocityX_15;
		__this->___rotationYAxis_13 = ((float)il2cpp_codegen_add(L_10, L_11));
		// rotationXAxis -= velocityY;
		float L_12 = __this->___rotationXAxis_14;
		float L_13 = __this->___velocityY_16;
		__this->___rotationXAxis_14 = ((float)il2cpp_codegen_subtract(L_12, L_13));
		// rotationXAxis = ClampAngle(rotationXAxis,yMinLimit,yMaxLimit);
		float L_14 = __this->___rotationXAxis_14;
		float L_15 = __this->___yMinLimit_8;
		float L_16 = __this->___yMaxLimit_9;
		float L_17;
		L_17 = MouseOrbitImproved_ClampAngle_m69FB1DC9316EEAAE85C08EF4188EF9CD87362434(L_14, L_15, L_16, NULL);
		__this->___rotationXAxis_14 = L_17;
		// Quaternion toRotation = Quaternion.Euler(rotationXAxis,rotationYAxis,0);
		float L_18 = __this->___rotationXAxis_14;
		float L_19 = __this->___rotationYAxis_13;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_20;
		L_20 = Quaternion_Euler_mD4601D966F1F58F3FCA01B3FC19A12D0AD0396DD_inline(L_18, L_19, (0.0f), NULL);
		// Quaternion rotation = toRotation;
		V_0 = L_20;
		// distance = Mathf.Clamp(distance - Input.GetAxis("Mouse ScrollWheel") * 5,distanceMin,distanceMax);
		float L_21 = __this->___distance_5;
		float L_22;
		L_22 = Input_GetAxis_m1F49B26F24032F45FB4583C95FB24E6771A161D4(_stringLiteralFC6687DC37346CD2569888E29764F727FAF530E0, NULL);
		float L_23 = __this->___distanceMin_10;
		float L_24 = __this->___distanceMax_11;
		float L_25;
		L_25 = Mathf_Clamp_m154E404AF275A3B2EC99ECAA3879B4CB9F0606DC_inline(((float)il2cpp_codegen_subtract(L_21, ((float)il2cpp_codegen_multiply(L_22, (5.0f))))), L_23, L_24, NULL);
		__this->___distance_5 = L_25;
		// if (Physics.Linecast(target.position,transform.position,out hit)) {
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_26 = __this->___target_4;
		NullCheck(L_26);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_27;
		L_27 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_26, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_28;
		L_28 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_28);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_29;
		L_29 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_28, NULL);
		bool L_30;
		L_30 = Physics_Linecast_m92B9E7A0130FAA5613977E5C9F887ED629CF3A14(L_27, L_29, (&V_1), NULL);
		if (!L_30)
		{
			goto IL_0122;
		}
	}
	{
		// distance -= hit.distance;
		float L_31 = __this->___distance_5;
		float L_32;
		L_32 = RaycastHit_get_distance_m035194B0E9BB6229259CFC43B095A9C8E5011C78((&V_1), NULL);
		__this->___distance_5 = ((float)il2cpp_codegen_subtract(L_31, L_32));
	}

IL_0122:
	{
		// Vector3 negDistance = new Vector3(0.0f,0.0f,-distance);
		float L_33 = __this->___distance_5;
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&V_2), (0.0f), (0.0f), ((-L_33)), NULL);
		// Vector3 position = rotation * negDistance + target.position;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_34 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_35 = V_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_36;
		L_36 = Quaternion_op_Multiply_mF1348668A6CCD46FBFF98D39182F89358ED74AC0(L_34, L_35, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_37 = __this->___target_4;
		NullCheck(L_37);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_38;
		L_38 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_37, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_39;
		L_39 = Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline(L_36, L_38, NULL);
		V_3 = L_39;
		// transform.rotation = rotation;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_40;
		L_40 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_41 = V_0;
		NullCheck(L_40);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_40, L_41, NULL);
		// transform.position = position;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_42;
		L_42 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_43 = V_3;
		NullCheck(L_42);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_42, L_43, NULL);
		// velocityX = Mathf.Lerp(velocityX,0,Time.unscaledDeltaTime * smoothTime);
		float L_44 = __this->___velocityX_15;
		float L_45;
		L_45 = Time_get_unscaledDeltaTime_m89252D23CC5AA295CFA4EB2BCB417A831AC51652(NULL);
		float L_46 = __this->___smoothTime_12;
		float L_47;
		L_47 = Mathf_Lerp_mFB4910B358B986AFB22114ED90458E8341867479_inline(L_44, (0.0f), ((float)il2cpp_codegen_multiply(L_45, L_46)), NULL);
		__this->___velocityX_15 = L_47;
		// velocityY = Mathf.Lerp(velocityY,0,Time.unscaledDeltaTime * smoothTime);
		float L_48 = __this->___velocityY_16;
		float L_49;
		L_49 = Time_get_unscaledDeltaTime_m89252D23CC5AA295CFA4EB2BCB417A831AC51652(NULL);
		float L_50 = __this->___smoothTime_12;
		float L_51;
		L_51 = Mathf_Lerp_mFB4910B358B986AFB22114ED90458E8341867479_inline(L_48, (0.0f), ((float)il2cpp_codegen_multiply(L_49, L_50)), NULL);
		__this->___velocityY_16 = L_51;
	}

IL_01ae:
	{
		// }
		return;
	}
}
// System.Single MouseOrbitImproved::ClampAngle(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float MouseOrbitImproved_ClampAngle_m69FB1DC9316EEAAE85C08EF4188EF9CD87362434 (float ___angle0, float ___min1, float ___max2, const RuntimeMethod* method) 
{
	{
		// if (angle < -360F)
		float L_0 = ___angle0;
		if ((!(((float)L_0) < ((float)(-360.0f)))))
		{
			goto IL_0011;
		}
	}
	{
		// angle += 360F;
		float L_1 = ___angle0;
		___angle0 = ((float)il2cpp_codegen_add(L_1, (360.0f)));
	}

IL_0011:
	{
		// if (angle > 360F)
		float L_2 = ___angle0;
		if ((!(((float)L_2) > ((float)(360.0f)))))
		{
			goto IL_0022;
		}
	}
	{
		// angle -= 360F;
		float L_3 = ___angle0;
		___angle0 = ((float)il2cpp_codegen_subtract(L_3, (360.0f)));
	}

IL_0022:
	{
		// return Mathf.Clamp(angle,min,max);
		float L_4 = ___angle0;
		float L_5 = ___min1;
		float L_6 = ___max2;
		float L_7;
		L_7 = Mathf_Clamp_m154E404AF275A3B2EC99ECAA3879B4CB9F0606DC_inline(L_4, L_5, L_6, NULL);
		return L_7;
	}
}
// System.Void MouseOrbitImproved::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MouseOrbitImproved__ctor_m06D743B6CDE6584D414050528B3E0724D41F6947 (MouseOrbitImproved_t19ECE3CB982D60FD6DB794ABFEF61AA7CAAE8F64* __this, const RuntimeMethod* method) 
{
	{
		// public float distance = 5.0f;
		__this->___distance_5 = (5.0f);
		// public float xSpeed = 120.0f;
		__this->___xSpeed_6 = (120.0f);
		// public float ySpeed = 120.0f;
		__this->___ySpeed_7 = (120.0f);
		// public float yMinLimit = -20f;
		__this->___yMinLimit_8 = (-20.0f);
		// public float yMaxLimit = 80f;
		__this->___yMaxLimit_9 = (80.0f);
		// public float distanceMin = .5f;
		__this->___distanceMin_10 = (0.5f);
		// public float distanceMax = 15f;
		__this->___distanceMax_11 = (15.0f);
		// public float smoothTime = 2f;
		__this->___smoothTime_12 = (2.0f);
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
// System.Boolean UnityStandardAssets.ImageEffects.Bloom::CheckResources()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Bloom_CheckResources_mAF3E7595C89A4DFFEFDE82B0CE496A3B125EAD73 (Bloom_t7FC3FD3F083630D01AC1C5E0D6859CB59F5D1EBF* __this, const RuntimeMethod* method) 
{
	{
		// CheckSupport (false);
		bool L_0;
		L_0 = PostEffectsBase_CheckSupport_mD35BCE12C19A6D60AC19A0189F1EB5CD71A1303E(__this, (bool)0, NULL);
		// screenBlend = CheckShaderAndCreateMaterial (screenBlendShader, screenBlend);
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_1 = __this->___screenBlendShader_32;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_2 = __this->___screenBlend_33;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_3;
		L_3 = PostEffectsBase_CheckShaderAndCreateMaterial_m9F3512FEF659B04E086E2EC154E789D67401D91A(__this, L_1, L_2, NULL);
		__this->___screenBlend_33 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___screenBlend_33), (void*)L_3);
		// lensFlareMaterial = CheckShaderAndCreateMaterial(lensFlareShader,lensFlareMaterial);
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_4 = __this->___lensFlareShader_30;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_5 = __this->___lensFlareMaterial_31;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_6;
		L_6 = PostEffectsBase_CheckShaderAndCreateMaterial_m9F3512FEF659B04E086E2EC154E789D67401D91A(__this, L_4, L_5, NULL);
		__this->___lensFlareMaterial_31 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___lensFlareMaterial_31), (void*)L_6);
		// blurAndFlaresMaterial = CheckShaderAndCreateMaterial (blurAndFlaresShader, blurAndFlaresMaterial);
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_7 = __this->___blurAndFlaresShader_34;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_8 = __this->___blurAndFlaresMaterial_35;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_9;
		L_9 = PostEffectsBase_CheckShaderAndCreateMaterial_m9F3512FEF659B04E086E2EC154E789D67401D91A(__this, L_7, L_8, NULL);
		__this->___blurAndFlaresMaterial_35 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___blurAndFlaresMaterial_35), (void*)L_9);
		// brightPassFilterMaterial = CheckShaderAndCreateMaterial(brightPassFilterShader, brightPassFilterMaterial);
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_10 = __this->___brightPassFilterShader_36;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_11 = __this->___brightPassFilterMaterial_37;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_12;
		L_12 = PostEffectsBase_CheckShaderAndCreateMaterial_m9F3512FEF659B04E086E2EC154E789D67401D91A(__this, L_10, L_11, NULL);
		__this->___brightPassFilterMaterial_37 = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___brightPassFilterMaterial_37), (void*)L_12);
		// if (!isSupported)
		bool L_13 = ((PostEffectsBase_t68F9A09F9CCB0B3DF158A27640081D0DFB22FD24*)__this)->___isSupported_6;
		if (L_13)
		{
			goto IL_0076;
		}
	}
	{
		// ReportAutoDisable ();
		PostEffectsBase_ReportAutoDisable_mFBFE9B4AF859872DA6F4FCAE254F92912B9B6000(__this, NULL);
	}

IL_0076:
	{
		// return isSupported;
		bool L_14 = ((PostEffectsBase_t68F9A09F9CCB0B3DF158A27640081D0DFB22FD24*)__this)->___isSupported_6;
		return L_14;
	}
}
// System.Void UnityStandardAssets.ImageEffects.Bloom::OnRenderImage(UnityEngine.RenderTexture,UnityEngine.RenderTexture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Bloom_OnRenderImage_m9360013FBC4EB8C0AB57F8881E03A737D73ACAEC (Bloom_t7FC3FD3F083630D01AC1C5E0D6859CB59F5D1EBF* __this, RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___source0, RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___destination1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m64AC6C06DD93C5FB249091FEC84FA8475457CCC4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Mathf_tE284D016E3B297B72311AAD9EB8F0E643F6A4682_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral01AC0365CB17BCE0478BFCD5E4FE89032C19B0E7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral33B3A84FF54C600D8BE3E5EA0DCADED338B39495);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3F42ED00D84DBC7A3B4658065DEA62873778201F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4E207A1E776F6188653FF9228A95BFD3A17B492E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral57AEAB49B21AC0908ED01F037D901DAE0EAF40CC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB833C1DE39BD5DD134693D3DA383EDCB10E681EC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDE9FAF482EBF07DB48E259D5B8D2B04A5EF5EFA9);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	float V_6 = 0.0f;
	float V_7 = 0.0f;
	RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* V_8 = NULL;
	RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* V_9 = NULL;
	RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* V_10 = NULL;
	int32_t V_11 = 0;
	RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* V_12 = NULL;
	int32_t V_13 = 0;
	float V_14 = 0.0f;
	RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* V_15 = NULL;
	RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* V_16 = NULL;
	float V_17 = 0.0f;
	float V_18 = 0.0f;
	float V_19 = 0.0f;
	int32_t V_20 = 0;
	RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* V_21 = NULL;
	Bloom_t7FC3FD3F083630D01AC1C5E0D6859CB59F5D1EBF* G_B5_0 = NULL;
	Bloom_t7FC3FD3F083630D01AC1C5E0D6859CB59F5D1EBF* G_B4_0 = NULL;
	int32_t G_B6_0 = 0;
	Bloom_t7FC3FD3F083630D01AC1C5E0D6859CB59F5D1EBF* G_B6_1 = NULL;
	Bloom_t7FC3FD3F083630D01AC1C5E0D6859CB59F5D1EBF* G_B10_0 = NULL;
	Bloom_t7FC3FD3F083630D01AC1C5E0D6859CB59F5D1EBF* G_B9_0 = NULL;
	int32_t G_B11_0 = 0;
	Bloom_t7FC3FD3F083630D01AC1C5E0D6859CB59F5D1EBF* G_B11_1 = NULL;
	int32_t G_B16_0 = 0;
	{
		// if (CheckResources()==false)
		bool L_0;
		L_0 = VirtualFuncInvoker0< bool >::Invoke(4 /* System.Boolean UnityStandardAssets.ImageEffects.PostEffectsBase::CheckResources() */, __this);
		if (L_0)
		{
			goto IL_0010;
		}
	}
	{
		// Graphics.Blit (source, destination);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_1 = ___source0;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_2 = ___destination1;
		il2cpp_codegen_runtime_class_init_inline(Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var);
		Graphics_Blit_m066854D684B6042B266D306E8E012D2C6C1787BE(L_1, L_2, NULL);
		// return;
		return;
	}

IL_0010:
	{
		// doHdr = false;
		__this->___doHdr_11 = (bool)0;
		// if (hdr == HDRBloomMode.Auto)
		int32_t L_3 = __this->___hdr_10;
		if (L_3)
		{
			goto IL_003e;
		}
	}
	{
		// doHdr = source.format == RenderTextureFormat.ARGBHalf && GetComponent<Camera>().allowHDR;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_4 = ___source0;
		NullCheck(L_4);
		int32_t L_5;
		L_5 = RenderTexture_get_format_m58556ABB91A1FADA8044BEEA2E8C55280768CF35(L_4, NULL);
		G_B4_0 = __this;
		if ((!(((uint32_t)L_5) == ((uint32_t)2))))
		{
			G_B5_0 = __this;
			goto IL_0036;
		}
	}
	{
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_6;
		L_6 = Component_GetComponent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m64AC6C06DD93C5FB249091FEC84FA8475457CCC4(__this, Component_GetComponent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m64AC6C06DD93C5FB249091FEC84FA8475457CCC4_RuntimeMethod_var);
		NullCheck(L_6);
		bool L_7;
		L_7 = Camera_get_allowHDR_m3187E9118CB52D5D7F0658D7ECF5E2B00E296A67(L_6, NULL);
		G_B6_0 = ((int32_t)(L_7));
		G_B6_1 = G_B4_0;
		goto IL_0037;
	}

IL_0036:
	{
		G_B6_0 = 0;
		G_B6_1 = G_B5_0;
	}

IL_0037:
	{
		NullCheck(G_B6_1);
		G_B6_1->___doHdr_11 = (bool)G_B6_0;
		goto IL_004d;
	}

IL_003e:
	{
		// doHdr = hdr == HDRBloomMode.On;
		int32_t L_8 = __this->___hdr_10;
		__this->___doHdr_11 = (bool)((((int32_t)L_8) == ((int32_t)1))? 1 : 0);
	}

IL_004d:
	{
		// doHdr = doHdr && supportHDRTextures;
		bool L_9 = __this->___doHdr_11;
		G_B9_0 = __this;
		if (!L_9)
		{
			G_B10_0 = __this;
			goto IL_005e;
		}
	}
	{
		bool L_10 = ((PostEffectsBase_t68F9A09F9CCB0B3DF158A27640081D0DFB22FD24*)__this)->___supportHDRTextures_4;
		G_B11_0 = ((int32_t)(L_10));
		G_B11_1 = G_B9_0;
		goto IL_005f;
	}

IL_005e:
	{
		G_B11_0 = 0;
		G_B11_1 = G_B10_0;
	}

IL_005f:
	{
		NullCheck(G_B11_1);
		G_B11_1->___doHdr_11 = (bool)G_B11_0;
		// BloomScreenBlendMode realBlendMode = screenBlendMode;
		int32_t L_11 = __this->___screenBlendMode_9;
		V_0 = L_11;
		// if (doHdr)
		bool L_12 = __this->___doHdr_11;
		if (!L_12)
		{
			goto IL_0075;
		}
	}
	{
		// realBlendMode = BloomScreenBlendMode.Add;
		V_0 = 1;
	}

IL_0075:
	{
		// var rtFormat= (doHdr) ? RenderTextureFormat.ARGBHalf : RenderTextureFormat.Default;
		bool L_13 = __this->___doHdr_11;
		if (L_13)
		{
			goto IL_0080;
		}
	}
	{
		G_B16_0 = 7;
		goto IL_0081;
	}

IL_0080:
	{
		G_B16_0 = 2;
	}

IL_0081:
	{
		V_1 = G_B16_0;
		// var rtW2= source.width/2;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_14 = ___source0;
		NullCheck(L_14);
		int32_t L_15;
		L_15 = VirtualFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_14);
		V_2 = ((int32_t)(L_15/2));
		// var rtH2= source.height/2;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_16 = ___source0;
		NullCheck(L_16);
		int32_t L_17;
		L_17 = VirtualFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Texture::get_height() */, L_16);
		V_3 = ((int32_t)(L_17/2));
		// var rtW4= source.width/4;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_18 = ___source0;
		NullCheck(L_18);
		int32_t L_19;
		L_19 = VirtualFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_18);
		V_4 = ((int32_t)(L_19/4));
		// var rtH4= source.height/4;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_20 = ___source0;
		NullCheck(L_20);
		int32_t L_21;
		L_21 = VirtualFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Texture::get_height() */, L_20);
		V_5 = ((int32_t)(L_21/4));
		// float widthOverHeight = (1.0f * source.width) / (1.0f * source.height);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_22 = ___source0;
		NullCheck(L_22);
		int32_t L_23;
		L_23 = VirtualFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_22);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_24 = ___source0;
		NullCheck(L_24);
		int32_t L_25;
		L_25 = VirtualFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Texture::get_height() */, L_24);
		V_6 = ((float)(((float)il2cpp_codegen_multiply((1.0f), ((float)L_23)))/((float)il2cpp_codegen_multiply((1.0f), ((float)L_25)))));
		// float oneOverBaseSize = 1.0f / 512.0f;
		V_7 = (0.001953125f);
		// RenderTexture quarterRezColor = RenderTexture.GetTemporary (rtW4, rtH4, 0, rtFormat);
		int32_t L_26 = V_4;
		int32_t L_27 = V_5;
		int32_t L_28 = V_1;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_29;
		L_29 = RenderTexture_GetTemporary_mEB21705B78CAF6B8F1F6617453A8EE8A94498DE2(L_26, L_27, 0, L_28, NULL);
		V_8 = L_29;
		// RenderTexture halfRezColorDown = RenderTexture.GetTemporary (rtW2, rtH2, 0, rtFormat);
		int32_t L_30 = V_2;
		int32_t L_31 = V_3;
		int32_t L_32 = V_1;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_33;
		L_33 = RenderTexture_GetTemporary_mEB21705B78CAF6B8F1F6617453A8EE8A94498DE2(L_30, L_31, 0, L_32, NULL);
		V_9 = L_33;
		// if (quality > BloomQuality.Cheap) {
		int32_t L_34 = __this->___quality_13;
		if ((((int32_t)L_34) <= ((int32_t)0)))
		{
			goto IL_0132;
		}
	}
	{
		// Graphics.Blit (source, halfRezColorDown, screenBlend, 2);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_35 = ___source0;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_36 = V_9;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_37 = __this->___screenBlend_33;
		il2cpp_codegen_runtime_class_init_inline(Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var);
		Graphics_Blit_m5A753341A113FB6501C64F73D62047F84F957E50(L_35, L_36, L_37, 2, NULL);
		// RenderTexture rtDown4 = RenderTexture.GetTemporary (rtW4, rtH4, 0, rtFormat);
		int32_t L_38 = V_4;
		int32_t L_39 = V_5;
		int32_t L_40 = V_1;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_41;
		L_41 = RenderTexture_GetTemporary_mEB21705B78CAF6B8F1F6617453A8EE8A94498DE2(L_38, L_39, 0, L_40, NULL);
		V_12 = L_41;
		// Graphics.Blit (halfRezColorDown, rtDown4, screenBlend, 2);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_42 = V_9;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_43 = V_12;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_44 = __this->___screenBlend_33;
		Graphics_Blit_m5A753341A113FB6501C64F73D62047F84F957E50(L_42, L_43, L_44, 2, NULL);
		// Graphics.Blit (rtDown4, quarterRezColor, screenBlend, 6);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_45 = V_12;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_46 = V_8;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_47 = __this->___screenBlend_33;
		Graphics_Blit_m5A753341A113FB6501C64F73D62047F84F957E50(L_45, L_46, L_47, 6, NULL);
		// RenderTexture.ReleaseTemporary(rtDown4);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_48 = V_12;
		RenderTexture_ReleaseTemporary_m7D9B385460ED0D0CF7BCC033605CEBD60A1A232F(L_48, NULL);
		goto IL_014a;
	}

IL_0132:
	{
		// Graphics.Blit (source, halfRezColorDown);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_49 = ___source0;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_50 = V_9;
		il2cpp_codegen_runtime_class_init_inline(Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var);
		Graphics_Blit_m066854D684B6042B266D306E8E012D2C6C1787BE(L_49, L_50, NULL);
		// Graphics.Blit (halfRezColorDown, quarterRezColor, screenBlend, 6);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_51 = V_9;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_52 = V_8;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_53 = __this->___screenBlend_33;
		Graphics_Blit_m5A753341A113FB6501C64F73D62047F84F957E50(L_51, L_52, L_53, 6, NULL);
	}

IL_014a:
	{
		// RenderTexture.ReleaseTemporary (halfRezColorDown);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_54 = V_9;
		RenderTexture_ReleaseTemporary_m7D9B385460ED0D0CF7BCC033605CEBD60A1A232F(L_54, NULL);
		// RenderTexture secondQuarterRezColor = RenderTexture.GetTemporary (rtW4, rtH4, 0, rtFormat);
		int32_t L_55 = V_4;
		int32_t L_56 = V_5;
		int32_t L_57 = V_1;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_58;
		L_58 = RenderTexture_GetTemporary_mEB21705B78CAF6B8F1F6617453A8EE8A94498DE2(L_55, L_56, 0, L_57, NULL);
		V_10 = L_58;
		// BrightFilter (bloomThreshold * bloomThresholdColor, quarterRezColor, secondQuarterRezColor);
		float L_59 = __this->___bloomThreshold_15;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_60 = __this->___bloomThresholdColor_16;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_61;
		L_61 = Color_op_Multiply_m1ED56CA313E9D35FD4324AADD8495ADFC041294A_inline(L_59, L_60, NULL);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_62 = V_8;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_63 = V_10;
		Bloom_BrightFilter_m918AA9CFB98FE15D2F9833BF99643DA228D9E5E9(__this, L_61, L_62, L_63, NULL);
		// if (bloomBlurIterations < 1) bloomBlurIterations = 1;
		int32_t L_64 = __this->___bloomBlurIterations_17;
		if ((((int32_t)L_64) >= ((int32_t)1)))
		{
			goto IL_018b;
		}
	}
	{
		// if (bloomBlurIterations < 1) bloomBlurIterations = 1;
		__this->___bloomBlurIterations_17 = 1;
		goto IL_019d;
	}

IL_018b:
	{
		// else if (bloomBlurIterations > 10) bloomBlurIterations = 10;
		int32_t L_65 = __this->___bloomBlurIterations_17;
		if ((((int32_t)L_65) <= ((int32_t)((int32_t)10))))
		{
			goto IL_019d;
		}
	}
	{
		// else if (bloomBlurIterations > 10) bloomBlurIterations = 10;
		__this->___bloomBlurIterations_17 = ((int32_t)10);
	}

IL_019d:
	{
		// for (int iter = 0; iter < bloomBlurIterations; iter++)
		V_13 = 0;
		goto IL_02ab;
	}

IL_01a5:
	{
		// float spreadForPass = (1.0f + (iter * 0.25f)) * sepBlurSpread;
		int32_t L_66 = V_13;
		float L_67 = __this->___sepBlurSpread_12;
		V_14 = ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_add((1.0f), ((float)il2cpp_codegen_multiply(((float)L_66), (0.25f))))), L_67));
		// RenderTexture blur4 = RenderTexture.GetTemporary (rtW4, rtH4, 0, rtFormat);
		int32_t L_68 = V_4;
		int32_t L_69 = V_5;
		int32_t L_70 = V_1;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_71;
		L_71 = RenderTexture_GetTemporary_mEB21705B78CAF6B8F1F6617453A8EE8A94498DE2(L_68, L_69, 0, L_70, NULL);
		V_15 = L_71;
		// blurAndFlaresMaterial.SetVector ("_Offsets", new Vector4 (0.0f, spreadForPass * oneOverBaseSize, 0.0f, 0.0f));
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_72 = __this->___blurAndFlaresMaterial_35;
		float L_73 = V_14;
		float L_74 = V_7;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_75;
		memset((&L_75), 0, sizeof(L_75));
		Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline((&L_75), (0.0f), ((float)il2cpp_codegen_multiply(L_73, L_74)), (0.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_72);
		Material_SetVector_m69444B8040D955821F241113446CC8713C9E12D1(L_72, _stringLiteral57AEAB49B21AC0908ED01F037D901DAE0EAF40CC, L_75, NULL);
		// Graphics.Blit (secondQuarterRezColor, blur4, blurAndFlaresMaterial, 4);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_76 = V_10;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_77 = V_15;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_78 = __this->___blurAndFlaresMaterial_35;
		il2cpp_codegen_runtime_class_init_inline(Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var);
		Graphics_Blit_m5A753341A113FB6501C64F73D62047F84F957E50(L_76, L_77, L_78, 4, NULL);
		// RenderTexture.ReleaseTemporary(secondQuarterRezColor);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_79 = V_10;
		RenderTexture_ReleaseTemporary_m7D9B385460ED0D0CF7BCC033605CEBD60A1A232F(L_79, NULL);
		// secondQuarterRezColor = blur4;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_80 = V_15;
		V_10 = L_80;
		// blur4 = RenderTexture.GetTemporary (rtW4, rtH4, 0, rtFormat);
		int32_t L_81 = V_4;
		int32_t L_82 = V_5;
		int32_t L_83 = V_1;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_84;
		L_84 = RenderTexture_GetTemporary_mEB21705B78CAF6B8F1F6617453A8EE8A94498DE2(L_81, L_82, 0, L_83, NULL);
		V_15 = L_84;
		// blurAndFlaresMaterial.SetVector ("_Offsets", new Vector4 ((spreadForPass / widthOverHeight) * oneOverBaseSize, 0.0f, 0.0f, 0.0f));
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_85 = __this->___blurAndFlaresMaterial_35;
		float L_86 = V_14;
		float L_87 = V_6;
		float L_88 = V_7;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_89;
		memset((&L_89), 0, sizeof(L_89));
		Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline((&L_89), ((float)il2cpp_codegen_multiply(((float)(L_86/L_87)), L_88)), (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_85);
		Material_SetVector_m69444B8040D955821F241113446CC8713C9E12D1(L_85, _stringLiteral57AEAB49B21AC0908ED01F037D901DAE0EAF40CC, L_89, NULL);
		// Graphics.Blit (secondQuarterRezColor, blur4, blurAndFlaresMaterial, 4);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_90 = V_10;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_91 = V_15;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_92 = __this->___blurAndFlaresMaterial_35;
		Graphics_Blit_m5A753341A113FB6501C64F73D62047F84F957E50(L_90, L_91, L_92, 4, NULL);
		// RenderTexture.ReleaseTemporary (secondQuarterRezColor);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_93 = V_10;
		RenderTexture_ReleaseTemporary_m7D9B385460ED0D0CF7BCC033605CEBD60A1A232F(L_93, NULL);
		// secondQuarterRezColor = blur4;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_94 = V_15;
		V_10 = L_94;
		// if (quality > BloomQuality.Cheap)
		int32_t L_95 = __this->___quality_13;
		if ((((int32_t)L_95) <= ((int32_t)0)))
		{
			goto IL_02a5;
		}
	}
	{
		// if (iter == 0)
		int32_t L_96 = V_13;
		if (L_96)
		{
			goto IL_028d;
		}
	}
	{
		// Graphics.SetRenderTarget(quarterRezColor);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_97 = V_8;
		il2cpp_codegen_runtime_class_init_inline(Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var);
		Graphics_SetRenderTarget_mDA2F41245400E50551268368F6C551FFFDCC9CAC(L_97, NULL);
		// GL.Clear(false, true, Color.black); // Clear to avoid RT restore
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_98;
		L_98 = Color_get_black_mBF96B603B41BED9BAFAA10CE8D946D24260F9729_inline(NULL);
		GL_Clear_m303329453ADB3495208897E282FD24910878F537((bool)0, (bool)1, L_98, NULL);
		// Graphics.Blit (secondQuarterRezColor, quarterRezColor);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_99 = V_10;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_100 = V_8;
		Graphics_Blit_m066854D684B6042B266D306E8E012D2C6C1787BE(L_99, L_100, NULL);
		goto IL_02a5;
	}

IL_028d:
	{
		// quarterRezColor.MarkRestoreExpected(); // using max blending, RT restore expected
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_101 = V_8;
		NullCheck(L_101);
		RenderTexture_MarkRestoreExpected_m185BFFD02FE7149590A252527B18F25A7D4AD830(L_101, NULL);
		// Graphics.Blit (secondQuarterRezColor, quarterRezColor, screenBlend, 10);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_102 = V_10;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_103 = V_8;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_104 = __this->___screenBlend_33;
		il2cpp_codegen_runtime_class_init_inline(Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var);
		Graphics_Blit_m5A753341A113FB6501C64F73D62047F84F957E50(L_102, L_103, L_104, ((int32_t)10), NULL);
	}

IL_02a5:
	{
		// for (int iter = 0; iter < bloomBlurIterations; iter++)
		int32_t L_105 = V_13;
		V_13 = ((int32_t)il2cpp_codegen_add(L_105, 1));
	}

IL_02ab:
	{
		// for (int iter = 0; iter < bloomBlurIterations; iter++)
		int32_t L_106 = V_13;
		int32_t L_107 = __this->___bloomBlurIterations_17;
		if ((((int32_t)L_106) < ((int32_t)L_107)))
		{
			goto IL_01a5;
		}
	}
	{
		// if (quality > BloomQuality.Cheap)
		int32_t L_108 = __this->___quality_13;
		if ((((int32_t)L_108) <= ((int32_t)0)))
		{
			goto IL_02e4;
		}
	}
	{
		// Graphics.SetRenderTarget(secondQuarterRezColor);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_109 = V_10;
		il2cpp_codegen_runtime_class_init_inline(Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var);
		Graphics_SetRenderTarget_mDA2F41245400E50551268368F6C551FFFDCC9CAC(L_109, NULL);
		// GL.Clear(false, true, Color.black); // Clear to avoid RT restore
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_110;
		L_110 = Color_get_black_mBF96B603B41BED9BAFAA10CE8D946D24260F9729_inline(NULL);
		GL_Clear_m303329453ADB3495208897E282FD24910878F537((bool)0, (bool)1, L_110, NULL);
		// Graphics.Blit (quarterRezColor, secondQuarterRezColor, screenBlend, 6);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_111 = V_8;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_112 = V_10;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_113 = __this->___screenBlend_33;
		Graphics_Blit_m5A753341A113FB6501C64F73D62047F84F957E50(L_111, L_112, L_113, 6, NULL);
	}

IL_02e4:
	{
		// if (lensflareIntensity > Mathf.Epsilon)
		float L_114 = __this->___lensflareIntensity_22;
		float L_115 = ((Mathf_tE284D016E3B297B72311AAD9EB8F0E643F6A4682_StaticFields*)il2cpp_codegen_static_fields_for(Mathf_tE284D016E3B297B72311AAD9EB8F0E643F6A4682_il2cpp_TypeInfo_var))->___Epsilon_0;
		if ((!(((float)L_114) > ((float)L_115))))
		{
			goto IL_06d7;
		}
	}
	{
		// RenderTexture rtFlares4 = RenderTexture.GetTemporary (rtW4, rtH4, 0, rtFormat);
		int32_t L_116 = V_4;
		int32_t L_117 = V_5;
		int32_t L_118 = V_1;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_119;
		L_119 = RenderTexture_GetTemporary_mEB21705B78CAF6B8F1F6617453A8EE8A94498DE2(L_116, L_117, 0, L_118, NULL);
		V_16 = L_119;
		// if (lensflareMode == 0)
		int32_t L_120 = __this->___lensflareMode_20;
		if (L_120)
		{
			goto IL_03fc;
		}
	}
	{
		// BrightFilter (lensflareThreshold, secondQuarterRezColor, rtFlares4);
		float L_121 = __this->___lensflareThreshold_23;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_122 = V_10;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_123 = V_16;
		Bloom_BrightFilter_m67631BA914110D1A8611B96A4F194B7CFC5A3E9F(__this, L_121, L_122, L_123, NULL);
		// if (quality > BloomQuality.Cheap)
		int32_t L_124 = __this->___quality_13;
		if ((((int32_t)L_124) <= ((int32_t)0)))
		{
			goto IL_03de;
		}
	}
	{
		// blurAndFlaresMaterial.SetVector ("_Offsets", new Vector4 (0.0f, (1.5f) / (1.0f * quarterRezColor.height), 0.0f, 0.0f));
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_125 = __this->___blurAndFlaresMaterial_35;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_126 = V_8;
		NullCheck(L_126);
		int32_t L_127;
		L_127 = VirtualFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Texture::get_height() */, L_126);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_128;
		memset((&L_128), 0, sizeof(L_128));
		Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline((&L_128), (0.0f), ((float)((1.5f)/((float)il2cpp_codegen_multiply((1.0f), ((float)L_127))))), (0.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_125);
		Material_SetVector_m69444B8040D955821F241113446CC8713C9E12D1(L_125, _stringLiteral57AEAB49B21AC0908ED01F037D901DAE0EAF40CC, L_128, NULL);
		// Graphics.SetRenderTarget(quarterRezColor);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_129 = V_8;
		il2cpp_codegen_runtime_class_init_inline(Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var);
		Graphics_SetRenderTarget_mDA2F41245400E50551268368F6C551FFFDCC9CAC(L_129, NULL);
		// GL.Clear(false, true, Color.black); // Clear to avoid RT restore
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_130;
		L_130 = Color_get_black_mBF96B603B41BED9BAFAA10CE8D946D24260F9729_inline(NULL);
		GL_Clear_m303329453ADB3495208897E282FD24910878F537((bool)0, (bool)1, L_130, NULL);
		// Graphics.Blit (rtFlares4, quarterRezColor, blurAndFlaresMaterial, 4);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_131 = V_16;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_132 = V_8;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_133 = __this->___blurAndFlaresMaterial_35;
		Graphics_Blit_m5A753341A113FB6501C64F73D62047F84F957E50(L_131, L_132, L_133, 4, NULL);
		// blurAndFlaresMaterial.SetVector ("_Offsets", new Vector4 ((1.5f) / (1.0f * quarterRezColor.width), 0.0f, 0.0f, 0.0f));
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_134 = __this->___blurAndFlaresMaterial_35;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_135 = V_8;
		NullCheck(L_135);
		int32_t L_136;
		L_136 = VirtualFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_135);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_137;
		memset((&L_137), 0, sizeof(L_137));
		Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline((&L_137), ((float)((1.5f)/((float)il2cpp_codegen_multiply((1.0f), ((float)L_136))))), (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_134);
		Material_SetVector_m69444B8040D955821F241113446CC8713C9E12D1(L_134, _stringLiteral57AEAB49B21AC0908ED01F037D901DAE0EAF40CC, L_137, NULL);
		// Graphics.SetRenderTarget(rtFlares4);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_138 = V_16;
		Graphics_SetRenderTarget_mDA2F41245400E50551268368F6C551FFFDCC9CAC(L_138, NULL);
		// GL.Clear(false, true, Color.black); // Clear to avoid RT restore
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_139;
		L_139 = Color_get_black_mBF96B603B41BED9BAFAA10CE8D946D24260F9729_inline(NULL);
		GL_Clear_m303329453ADB3495208897E282FD24910878F537((bool)0, (bool)1, L_139, NULL);
		// Graphics.Blit (quarterRezColor, rtFlares4, blurAndFlaresMaterial, 4);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_140 = V_8;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_141 = V_16;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_142 = __this->___blurAndFlaresMaterial_35;
		Graphics_Blit_m5A753341A113FB6501C64F73D62047F84F957E50(L_140, L_141, L_142, 4, NULL);
	}

IL_03de:
	{
		// Vignette (0.975f, rtFlares4, rtFlares4);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_143 = V_16;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_144 = V_16;
		Bloom_Vignette_m66A36C175DCE1764F01C6343F607D444F86746BD(__this, (0.975000024f), L_143, L_144, NULL);
		// BlendFlares (rtFlares4, secondQuarterRezColor);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_145 = V_16;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_146 = V_10;
		Bloom_BlendFlares_m21F3FF875B014E638C6E60E1B3A1AB6DBF1218F3(__this, L_145, L_146, NULL);
		goto IL_06d0;
	}

IL_03fc:
	{
		// float flareXRot = 1.0f * Mathf.Cos(flareRotation);
		float L_147 = __this->___flareRotation_19;
		float L_148;
		L_148 = cosf(L_147);
		V_17 = ((float)il2cpp_codegen_multiply((1.0f), L_148));
		// float flareyRot = 1.0f * Mathf.Sin(flareRotation);
		float L_149 = __this->___flareRotation_19;
		float L_150;
		L_150 = sinf(L_149);
		V_18 = ((float)il2cpp_codegen_multiply((1.0f), L_150));
		// float stretchWidth = (hollyStretchWidth * 1.0f / widthOverHeight) * oneOverBaseSize;
		float L_151 = __this->___hollyStretchWidth_21;
		float L_152 = V_6;
		float L_153 = V_7;
		V_19 = ((float)il2cpp_codegen_multiply(((float)(((float)il2cpp_codegen_multiply(L_151, (1.0f)))/L_152)), L_153));
		// blurAndFlaresMaterial.SetVector ("_Offsets", new Vector4 (flareXRot, flareyRot, 0.0f, 0.0f));
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_154 = __this->___blurAndFlaresMaterial_35;
		float L_155 = V_17;
		float L_156 = V_18;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_157;
		memset((&L_157), 0, sizeof(L_157));
		Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline((&L_157), L_155, L_156, (0.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_154);
		Material_SetVector_m69444B8040D955821F241113446CC8713C9E12D1(L_154, _stringLiteral57AEAB49B21AC0908ED01F037D901DAE0EAF40CC, L_157, NULL);
		// blurAndFlaresMaterial.SetVector ("_Threshhold", new Vector4 (lensflareThreshold, 1.0f, 0.0f, 0.0f));
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_158 = __this->___blurAndFlaresMaterial_35;
		float L_159 = __this->___lensflareThreshold_23;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_160;
		memset((&L_160), 0, sizeof(L_160));
		Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline((&L_160), L_159, (1.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_158);
		Material_SetVector_m69444B8040D955821F241113446CC8713C9E12D1(L_158, _stringLiteral33B3A84FF54C600D8BE3E5EA0DCADED338B39495, L_160, NULL);
		// blurAndFlaresMaterial.SetVector ("_TintColor", new Vector4 (flareColorA.r, flareColorA.g, flareColorA.b, flareColorA.a) * flareColorA.a * lensflareIntensity);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_161 = __this->___blurAndFlaresMaterial_35;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_162 = (&__this->___flareColorA_25);
		float L_163 = L_162->___r_0;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_164 = (&__this->___flareColorA_25);
		float L_165 = L_164->___g_1;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_166 = (&__this->___flareColorA_25);
		float L_167 = L_166->___b_2;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_168 = (&__this->___flareColorA_25);
		float L_169 = L_168->___a_3;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_170;
		memset((&L_170), 0, sizeof(L_170));
		Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline((&L_170), L_163, L_165, L_167, L_169, /*hidden argument*/NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_171 = (&__this->___flareColorA_25);
		float L_172 = L_171->___a_3;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_173;
		L_173 = Vector4_op_Multiply_m10DA1FA6A405C8988C46FFD159ED9FF9E5D732F5_inline(L_170, L_172, NULL);
		float L_174 = __this->___lensflareIntensity_22;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_175;
		L_175 = Vector4_op_Multiply_m10DA1FA6A405C8988C46FFD159ED9FF9E5D732F5_inline(L_173, L_174, NULL);
		NullCheck(L_161);
		Material_SetVector_m69444B8040D955821F241113446CC8713C9E12D1(L_161, _stringLiteral01AC0365CB17BCE0478BFCD5E4FE89032C19B0E7, L_175, NULL);
		// blurAndFlaresMaterial.SetFloat ("_Saturation", lensFlareSaturation);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_176 = __this->___blurAndFlaresMaterial_35;
		float L_177 = __this->___lensFlareSaturation_24;
		NullCheck(L_176);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_176, _stringLiteralDE9FAF482EBF07DB48E259D5B8D2B04A5EF5EFA9, L_177, NULL);
		// quarterRezColor.DiscardContents();
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_178 = V_8;
		NullCheck(L_178);
		RenderTexture_DiscardContents_m6C446FB1B7B57334FAD8847DB03E983975F38B32(L_178, NULL);
		// Graphics.Blit (rtFlares4, quarterRezColor, blurAndFlaresMaterial, 2);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_179 = V_16;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_180 = V_8;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_181 = __this->___blurAndFlaresMaterial_35;
		il2cpp_codegen_runtime_class_init_inline(Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var);
		Graphics_Blit_m5A753341A113FB6501C64F73D62047F84F957E50(L_179, L_180, L_181, 2, NULL);
		// rtFlares4.DiscardContents();
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_182 = V_16;
		NullCheck(L_182);
		RenderTexture_DiscardContents_m6C446FB1B7B57334FAD8847DB03E983975F38B32(L_182, NULL);
		// Graphics.Blit (quarterRezColor, rtFlares4, blurAndFlaresMaterial, 3);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_183 = V_8;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_184 = V_16;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_185 = __this->___blurAndFlaresMaterial_35;
		Graphics_Blit_m5A753341A113FB6501C64F73D62047F84F957E50(L_183, L_184, L_185, 3, NULL);
		// blurAndFlaresMaterial.SetVector ("_Offsets", new Vector4 (flareXRot * stretchWidth, flareyRot * stretchWidth, 0.0f, 0.0f));
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_186 = __this->___blurAndFlaresMaterial_35;
		float L_187 = V_17;
		float L_188 = V_19;
		float L_189 = V_18;
		float L_190 = V_19;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_191;
		memset((&L_191), 0, sizeof(L_191));
		Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline((&L_191), ((float)il2cpp_codegen_multiply(L_187, L_188)), ((float)il2cpp_codegen_multiply(L_189, L_190)), (0.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_186);
		Material_SetVector_m69444B8040D955821F241113446CC8713C9E12D1(L_186, _stringLiteral57AEAB49B21AC0908ED01F037D901DAE0EAF40CC, L_191, NULL);
		// blurAndFlaresMaterial.SetFloat ("_StretchWidth", hollyStretchWidth);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_192 = __this->___blurAndFlaresMaterial_35;
		float L_193 = __this->___hollyStretchWidth_21;
		NullCheck(L_192);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_192, _stringLiteralB833C1DE39BD5DD134693D3DA383EDCB10E681EC, L_193, NULL);
		// quarterRezColor.DiscardContents();
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_194 = V_8;
		NullCheck(L_194);
		RenderTexture_DiscardContents_m6C446FB1B7B57334FAD8847DB03E983975F38B32(L_194, NULL);
		// Graphics.Blit (rtFlares4, quarterRezColor, blurAndFlaresMaterial, 1);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_195 = V_16;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_196 = V_8;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_197 = __this->___blurAndFlaresMaterial_35;
		Graphics_Blit_m5A753341A113FB6501C64F73D62047F84F957E50(L_195, L_196, L_197, 1, NULL);
		// blurAndFlaresMaterial.SetFloat ("_StretchWidth", hollyStretchWidth * 2.0f);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_198 = __this->___blurAndFlaresMaterial_35;
		float L_199 = __this->___hollyStretchWidth_21;
		NullCheck(L_198);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_198, _stringLiteralB833C1DE39BD5DD134693D3DA383EDCB10E681EC, ((float)il2cpp_codegen_multiply(L_199, (2.0f))), NULL);
		// rtFlares4.DiscardContents();
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_200 = V_16;
		NullCheck(L_200);
		RenderTexture_DiscardContents_m6C446FB1B7B57334FAD8847DB03E983975F38B32(L_200, NULL);
		// Graphics.Blit (quarterRezColor, rtFlares4, blurAndFlaresMaterial, 1);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_201 = V_8;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_202 = V_16;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_203 = __this->___blurAndFlaresMaterial_35;
		Graphics_Blit_m5A753341A113FB6501C64F73D62047F84F957E50(L_201, L_202, L_203, 1, NULL);
		// blurAndFlaresMaterial.SetFloat ("_StretchWidth", hollyStretchWidth * 4.0f);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_204 = __this->___blurAndFlaresMaterial_35;
		float L_205 = __this->___hollyStretchWidth_21;
		NullCheck(L_204);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_204, _stringLiteralB833C1DE39BD5DD134693D3DA383EDCB10E681EC, ((float)il2cpp_codegen_multiply(L_205, (4.0f))), NULL);
		// quarterRezColor.DiscardContents();
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_206 = V_8;
		NullCheck(L_206);
		RenderTexture_DiscardContents_m6C446FB1B7B57334FAD8847DB03E983975F38B32(L_206, NULL);
		// Graphics.Blit (rtFlares4, quarterRezColor, blurAndFlaresMaterial, 1);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_207 = V_16;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_208 = V_8;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_209 = __this->___blurAndFlaresMaterial_35;
		Graphics_Blit_m5A753341A113FB6501C64F73D62047F84F957E50(L_207, L_208, L_209, 1, NULL);
		// for (int iter = 0; iter < hollywoodFlareBlurIterations; iter++)
		V_20 = 0;
		goto IL_0681;
	}

IL_05e7:
	{
		// stretchWidth = (hollyStretchWidth * 2.0f / widthOverHeight) * oneOverBaseSize;
		float L_210 = __this->___hollyStretchWidth_21;
		float L_211 = V_6;
		float L_212 = V_7;
		V_19 = ((float)il2cpp_codegen_multiply(((float)(((float)il2cpp_codegen_multiply(L_210, (2.0f)))/L_211)), L_212));
		// blurAndFlaresMaterial.SetVector ("_Offsets", new Vector4 (stretchWidth * flareXRot, stretchWidth * flareyRot, 0.0f, 0.0f));
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_213 = __this->___blurAndFlaresMaterial_35;
		float L_214 = V_19;
		float L_215 = V_17;
		float L_216 = V_19;
		float L_217 = V_18;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_218;
		memset((&L_218), 0, sizeof(L_218));
		Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline((&L_218), ((float)il2cpp_codegen_multiply(L_214, L_215)), ((float)il2cpp_codegen_multiply(L_216, L_217)), (0.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_213);
		Material_SetVector_m69444B8040D955821F241113446CC8713C9E12D1(L_213, _stringLiteral57AEAB49B21AC0908ED01F037D901DAE0EAF40CC, L_218, NULL);
		// rtFlares4.DiscardContents();
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_219 = V_16;
		NullCheck(L_219);
		RenderTexture_DiscardContents_m6C446FB1B7B57334FAD8847DB03E983975F38B32(L_219, NULL);
		// Graphics.Blit (quarterRezColor, rtFlares4, blurAndFlaresMaterial, 4);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_220 = V_8;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_221 = V_16;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_222 = __this->___blurAndFlaresMaterial_35;
		il2cpp_codegen_runtime_class_init_inline(Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var);
		Graphics_Blit_m5A753341A113FB6501C64F73D62047F84F957E50(L_220, L_221, L_222, 4, NULL);
		// blurAndFlaresMaterial.SetVector ("_Offsets", new Vector4 (stretchWidth * flareXRot, stretchWidth * flareyRot, 0.0f, 0.0f));
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_223 = __this->___blurAndFlaresMaterial_35;
		float L_224 = V_19;
		float L_225 = V_17;
		float L_226 = V_19;
		float L_227 = V_18;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_228;
		memset((&L_228), 0, sizeof(L_228));
		Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline((&L_228), ((float)il2cpp_codegen_multiply(L_224, L_225)), ((float)il2cpp_codegen_multiply(L_226, L_227)), (0.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_223);
		Material_SetVector_m69444B8040D955821F241113446CC8713C9E12D1(L_223, _stringLiteral57AEAB49B21AC0908ED01F037D901DAE0EAF40CC, L_228, NULL);
		// quarterRezColor.DiscardContents();
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_229 = V_8;
		NullCheck(L_229);
		RenderTexture_DiscardContents_m6C446FB1B7B57334FAD8847DB03E983975F38B32(L_229, NULL);
		// Graphics.Blit (rtFlares4, quarterRezColor, blurAndFlaresMaterial, 4);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_230 = V_16;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_231 = V_8;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_232 = __this->___blurAndFlaresMaterial_35;
		Graphics_Blit_m5A753341A113FB6501C64F73D62047F84F957E50(L_230, L_231, L_232, 4, NULL);
		// for (int iter = 0; iter < hollywoodFlareBlurIterations; iter++)
		int32_t L_233 = V_20;
		V_20 = ((int32_t)il2cpp_codegen_add(L_233, 1));
	}

IL_0681:
	{
		// for (int iter = 0; iter < hollywoodFlareBlurIterations; iter++)
		int32_t L_234 = V_20;
		int32_t L_235 = __this->___hollywoodFlareBlurIterations_18;
		if ((((int32_t)L_234) < ((int32_t)L_235)))
		{
			goto IL_05e7;
		}
	}
	{
		// if (lensflareMode == (LensFlareStyle) 1)
		int32_t L_236 = __this->___lensflareMode_20;
		if ((!(((uint32_t)L_236) == ((uint32_t)1))))
		{
			goto IL_06a8;
		}
	}
	{
		// AddTo (1.0f, quarterRezColor, secondQuarterRezColor);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_237 = V_8;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_238 = V_10;
		Bloom_AddTo_m886DE619359218768B6E7892E3B407752327E245(__this, (1.0f), L_237, L_238, NULL);
		goto IL_06d0;
	}

IL_06a8:
	{
		// Vignette (1.0f, quarterRezColor, rtFlares4);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_239 = V_8;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_240 = V_16;
		Bloom_Vignette_m66A36C175DCE1764F01C6343F607D444F86746BD(__this, (1.0f), L_239, L_240, NULL);
		// BlendFlares (rtFlares4, quarterRezColor);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_241 = V_16;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_242 = V_8;
		Bloom_BlendFlares_m21F3FF875B014E638C6E60E1B3A1AB6DBF1218F3(__this, L_241, L_242, NULL);
		// AddTo (1.0f, quarterRezColor, secondQuarterRezColor);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_243 = V_8;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_244 = V_10;
		Bloom_AddTo_m886DE619359218768B6E7892E3B407752327E245(__this, (1.0f), L_243, L_244, NULL);
	}

IL_06d0:
	{
		// RenderTexture.ReleaseTemporary (rtFlares4);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_245 = V_16;
		RenderTexture_ReleaseTemporary_m7D9B385460ED0D0CF7BCC033605CEBD60A1A232F(L_245, NULL);
	}

IL_06d7:
	{
		// int blendPass = (int) realBlendMode;
		int32_t L_246 = V_0;
		V_11 = L_246;
		// screenBlend.SetFloat ("_Intensity", bloomIntensity);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_247 = __this->___screenBlend_33;
		float L_248 = __this->___bloomIntensity_14;
		NullCheck(L_247);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_247, _stringLiteral4E207A1E776F6188653FF9228A95BFD3A17B492E, L_248, NULL);
		// screenBlend.SetTexture ("_ColorBuffer", source);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_249 = __this->___screenBlend_33;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_250 = ___source0;
		NullCheck(L_249);
		Material_SetTexture_m06083C3F52EF02FFB1177901D9907314F280F9A5(L_249, _stringLiteral3F42ED00D84DBC7A3B4658065DEA62873778201F, L_250, NULL);
		// if (quality > BloomQuality.Cheap)
		int32_t L_251 = __this->___quality_13;
		if ((((int32_t)L_251) <= ((int32_t)0)))
		{
			goto IL_0737;
		}
	}
	{
		// RenderTexture halfRezColorUp = RenderTexture.GetTemporary (rtW2, rtH2, 0, rtFormat);
		int32_t L_252 = V_2;
		int32_t L_253 = V_3;
		int32_t L_254 = V_1;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_255;
		L_255 = RenderTexture_GetTemporary_mEB21705B78CAF6B8F1F6617453A8EE8A94498DE2(L_252, L_253, 0, L_254, NULL);
		V_21 = L_255;
		// Graphics.Blit (secondQuarterRezColor, halfRezColorUp);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_256 = V_10;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_257 = V_21;
		il2cpp_codegen_runtime_class_init_inline(Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var);
		Graphics_Blit_m066854D684B6042B266D306E8E012D2C6C1787BE(L_256, L_257, NULL);
		// Graphics.Blit (halfRezColorUp, destination, screenBlend, blendPass);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_258 = V_21;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_259 = ___destination1;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_260 = __this->___screenBlend_33;
		int32_t L_261 = V_11;
		Graphics_Blit_m5A753341A113FB6501C64F73D62047F84F957E50(L_258, L_259, L_260, L_261, NULL);
		// RenderTexture.ReleaseTemporary (halfRezColorUp);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_262 = V_21;
		RenderTexture_ReleaseTemporary_m7D9B385460ED0D0CF7BCC033605CEBD60A1A232F(L_262, NULL);
		goto IL_0747;
	}

IL_0737:
	{
		// Graphics.Blit (secondQuarterRezColor, destination, screenBlend, blendPass);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_263 = V_10;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_264 = ___destination1;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_265 = __this->___screenBlend_33;
		int32_t L_266 = V_11;
		il2cpp_codegen_runtime_class_init_inline(Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var);
		Graphics_Blit_m5A753341A113FB6501C64F73D62047F84F957E50(L_263, L_264, L_265, L_266, NULL);
	}

IL_0747:
	{
		// RenderTexture.ReleaseTemporary (quarterRezColor);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_267 = V_8;
		RenderTexture_ReleaseTemporary_m7D9B385460ED0D0CF7BCC033605CEBD60A1A232F(L_267, NULL);
		// RenderTexture.ReleaseTemporary (secondQuarterRezColor);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_268 = V_10;
		RenderTexture_ReleaseTemporary_m7D9B385460ED0D0CF7BCC033605CEBD60A1A232F(L_268, NULL);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.ImageEffects.Bloom::AddTo(System.Single,UnityEngine.RenderTexture,UnityEngine.RenderTexture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Bloom_AddTo_m886DE619359218768B6E7892E3B407752327E245 (Bloom_t7FC3FD3F083630D01AC1C5E0D6859CB59F5D1EBF* __this, float ___intensity_0, RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___from1, RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___to2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4E207A1E776F6188653FF9228A95BFD3A17B492E);
		s_Il2CppMethodInitialized = true;
	}
	{
		// screenBlend.SetFloat ("_Intensity", intensity_);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_0 = __this->___screenBlend_33;
		float L_1 = ___intensity_0;
		NullCheck(L_0);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_0, _stringLiteral4E207A1E776F6188653FF9228A95BFD3A17B492E, L_1, NULL);
		// to.MarkRestoreExpected(); // additive blending, RT restore expected
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_2 = ___to2;
		NullCheck(L_2);
		RenderTexture_MarkRestoreExpected_m185BFFD02FE7149590A252527B18F25A7D4AD830(L_2, NULL);
		// Graphics.Blit (from, to, screenBlend, 9);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_3 = ___from1;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_4 = ___to2;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_5 = __this->___screenBlend_33;
		il2cpp_codegen_runtime_class_init_inline(Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var);
		Graphics_Blit_m5A753341A113FB6501C64F73D62047F84F957E50(L_3, L_4, L_5, ((int32_t)9), NULL);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.ImageEffects.Bloom::BlendFlares(UnityEngine.RenderTexture,UnityEngine.RenderTexture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Bloom_BlendFlares_m21F3FF875B014E638C6E60E1B3A1AB6DBF1218F3 (Bloom_t7FC3FD3F083630D01AC1C5E0D6859CB59F5D1EBF* __this, RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___from0, RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___to1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2B2F87855E2F1F2D73948E75AA00D22AEB5963D6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2B57EAD824AA2C842A67739712342646C4A59776);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6552DCC8D30F1ECCEA20B4508D1284E91C25CCD2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6DB920A501BE49CE06F951B435199EACD23D8C87);
		s_Il2CppMethodInitialized = true;
	}
	{
		// lensFlareMaterial.SetVector ("colorA", new Vector4 (flareColorA.r, flareColorA.g, flareColorA.b, flareColorA.a) * lensflareIntensity);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_0 = __this->___lensFlareMaterial_31;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_1 = (&__this->___flareColorA_25);
		float L_2 = L_1->___r_0;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_3 = (&__this->___flareColorA_25);
		float L_4 = L_3->___g_1;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_5 = (&__this->___flareColorA_25);
		float L_6 = L_5->___b_2;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_7 = (&__this->___flareColorA_25);
		float L_8 = L_7->___a_3;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline((&L_9), L_2, L_4, L_6, L_8, /*hidden argument*/NULL);
		float L_10 = __this->___lensflareIntensity_22;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_11;
		L_11 = Vector4_op_Multiply_m10DA1FA6A405C8988C46FFD159ED9FF9E5D732F5_inline(L_9, L_10, NULL);
		NullCheck(L_0);
		Material_SetVector_m69444B8040D955821F241113446CC8713C9E12D1(L_0, _stringLiteral6552DCC8D30F1ECCEA20B4508D1284E91C25CCD2, L_11, NULL);
		// lensFlareMaterial.SetVector ("colorB", new Vector4 (flareColorB.r, flareColorB.g, flareColorB.b, flareColorB.a) * lensflareIntensity);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_12 = __this->___lensFlareMaterial_31;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_13 = (&__this->___flareColorB_26);
		float L_14 = L_13->___r_0;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_15 = (&__this->___flareColorB_26);
		float L_16 = L_15->___g_1;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_17 = (&__this->___flareColorB_26);
		float L_18 = L_17->___b_2;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_19 = (&__this->___flareColorB_26);
		float L_20 = L_19->___a_3;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_21;
		memset((&L_21), 0, sizeof(L_21));
		Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline((&L_21), L_14, L_16, L_18, L_20, /*hidden argument*/NULL);
		float L_22 = __this->___lensflareIntensity_22;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_23;
		L_23 = Vector4_op_Multiply_m10DA1FA6A405C8988C46FFD159ED9FF9E5D732F5_inline(L_21, L_22, NULL);
		NullCheck(L_12);
		Material_SetVector_m69444B8040D955821F241113446CC8713C9E12D1(L_12, _stringLiteral2B57EAD824AA2C842A67739712342646C4A59776, L_23, NULL);
		// lensFlareMaterial.SetVector ("colorC", new Vector4 (flareColorC.r, flareColorC.g, flareColorC.b, flareColorC.a) * lensflareIntensity);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_24 = __this->___lensFlareMaterial_31;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_25 = (&__this->___flareColorC_27);
		float L_26 = L_25->___r_0;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_27 = (&__this->___flareColorC_27);
		float L_28 = L_27->___g_1;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_29 = (&__this->___flareColorC_27);
		float L_30 = L_29->___b_2;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_31 = (&__this->___flareColorC_27);
		float L_32 = L_31->___a_3;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_33;
		memset((&L_33), 0, sizeof(L_33));
		Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline((&L_33), L_26, L_28, L_30, L_32, /*hidden argument*/NULL);
		float L_34 = __this->___lensflareIntensity_22;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_35;
		L_35 = Vector4_op_Multiply_m10DA1FA6A405C8988C46FFD159ED9FF9E5D732F5_inline(L_33, L_34, NULL);
		NullCheck(L_24);
		Material_SetVector_m69444B8040D955821F241113446CC8713C9E12D1(L_24, _stringLiteral6DB920A501BE49CE06F951B435199EACD23D8C87, L_35, NULL);
		// lensFlareMaterial.SetVector ("colorD", new Vector4 (flareColorD.r, flareColorD.g, flareColorD.b, flareColorD.a) * lensflareIntensity);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_36 = __this->___lensFlareMaterial_31;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_37 = (&__this->___flareColorD_28);
		float L_38 = L_37->___r_0;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_39 = (&__this->___flareColorD_28);
		float L_40 = L_39->___g_1;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_41 = (&__this->___flareColorD_28);
		float L_42 = L_41->___b_2;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_43 = (&__this->___flareColorD_28);
		float L_44 = L_43->___a_3;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_45;
		memset((&L_45), 0, sizeof(L_45));
		Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline((&L_45), L_38, L_40, L_42, L_44, /*hidden argument*/NULL);
		float L_46 = __this->___lensflareIntensity_22;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_47;
		L_47 = Vector4_op_Multiply_m10DA1FA6A405C8988C46FFD159ED9FF9E5D732F5_inline(L_45, L_46, NULL);
		NullCheck(L_36);
		Material_SetVector_m69444B8040D955821F241113446CC8713C9E12D1(L_36, _stringLiteral2B2F87855E2F1F2D73948E75AA00D22AEB5963D6, L_47, NULL);
		// to.MarkRestoreExpected(); // additive blending, RT restore expected
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_48 = ___to1;
		NullCheck(L_48);
		RenderTexture_MarkRestoreExpected_m185BFFD02FE7149590A252527B18F25A7D4AD830(L_48, NULL);
		// Graphics.Blit (from, to, lensFlareMaterial);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_49 = ___from0;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_50 = ___to1;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_51 = __this->___lensFlareMaterial_31;
		il2cpp_codegen_runtime_class_init_inline(Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var);
		Graphics_Blit_m4055EA37BA8BAEF7EF29830F86ED13227780F4DD(L_49, L_50, L_51, NULL);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.ImageEffects.Bloom::BrightFilter(System.Single,UnityEngine.RenderTexture,UnityEngine.RenderTexture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Bloom_BrightFilter_m67631BA914110D1A8611B96A4F194B7CFC5A3E9F (Bloom_t7FC3FD3F083630D01AC1C5E0D6859CB59F5D1EBF* __this, float ___thresh0, RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___from1, RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___to2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral33B3A84FF54C600D8BE3E5EA0DCADED338B39495);
		s_Il2CppMethodInitialized = true;
	}
	{
		// brightPassFilterMaterial.SetVector ("_Threshhold", new Vector4 (thresh, thresh, thresh, thresh));
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_0 = __this->___brightPassFilterMaterial_37;
		float L_1 = ___thresh0;
		float L_2 = ___thresh0;
		float L_3 = ___thresh0;
		float L_4 = ___thresh0;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_5;
		memset((&L_5), 0, sizeof(L_5));
		Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline((&L_5), L_1, L_2, L_3, L_4, /*hidden argument*/NULL);
		NullCheck(L_0);
		Material_SetVector_m69444B8040D955821F241113446CC8713C9E12D1(L_0, _stringLiteral33B3A84FF54C600D8BE3E5EA0DCADED338B39495, L_5, NULL);
		// Graphics.Blit (from, to, brightPassFilterMaterial, 0);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_6 = ___from1;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_7 = ___to2;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_8 = __this->___brightPassFilterMaterial_37;
		il2cpp_codegen_runtime_class_init_inline(Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var);
		Graphics_Blit_m5A753341A113FB6501C64F73D62047F84F957E50(L_6, L_7, L_8, 0, NULL);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.ImageEffects.Bloom::BrightFilter(UnityEngine.Color,UnityEngine.RenderTexture,UnityEngine.RenderTexture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Bloom_BrightFilter_m918AA9CFB98FE15D2F9833BF99643DA228D9E5E9 (Bloom_t7FC3FD3F083630D01AC1C5E0D6859CB59F5D1EBF* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___threshColor0, RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___from1, RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___to2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral33B3A84FF54C600D8BE3E5EA0DCADED338B39495);
		s_Il2CppMethodInitialized = true;
	}
	{
		// brightPassFilterMaterial.SetVector ("_Threshhold", threshColor);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_0 = __this->___brightPassFilterMaterial_37;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = ___threshColor0;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_2;
		L_2 = Color_op_Implicit_m6D1353534AD23E43DFD104850D55C469CFCEF340_inline(L_1, NULL);
		NullCheck(L_0);
		Material_SetVector_m69444B8040D955821F241113446CC8713C9E12D1(L_0, _stringLiteral33B3A84FF54C600D8BE3E5EA0DCADED338B39495, L_2, NULL);
		// Graphics.Blit (from, to, brightPassFilterMaterial, 1);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_3 = ___from1;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_4 = ___to2;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_5 = __this->___brightPassFilterMaterial_37;
		il2cpp_codegen_runtime_class_init_inline(Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var);
		Graphics_Blit_m5A753341A113FB6501C64F73D62047F84F957E50(L_3, L_4, L_5, 1, NULL);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.ImageEffects.Bloom::Vignette(System.Single,UnityEngine.RenderTexture,UnityEngine.RenderTexture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Bloom_Vignette_m66A36C175DCE1764F01C6343F607D444F86746BD (Bloom_t7FC3FD3F083630D01AC1C5E0D6859CB59F5D1EBF* __this, float ___amount0, RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___from1, RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___to2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3F42ED00D84DBC7A3B4658065DEA62873778201F);
		s_Il2CppMethodInitialized = true;
	}
	RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* G_B4_0 = NULL;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* G_B6_0 = NULL;
	RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* G_B6_1 = NULL;
	RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* G_B6_2 = NULL;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* G_B5_0 = NULL;
	RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* G_B5_1 = NULL;
	RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* G_B5_2 = NULL;
	int32_t G_B7_0 = 0;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* G_B7_1 = NULL;
	RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* G_B7_2 = NULL;
	RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* G_B7_3 = NULL;
	{
		// if (lensFlareVignetteMask)
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_0 = __this->___lensFlareVignetteMask_29;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_0, NULL);
		if (!L_1)
		{
			goto IL_0050;
		}
	}
	{
		// screenBlend.SetTexture ("_ColorBuffer", lensFlareVignetteMask);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_2 = __this->___screenBlend_33;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_3 = __this->___lensFlareVignetteMask_29;
		NullCheck(L_2);
		Material_SetTexture_m06083C3F52EF02FFB1177901D9907314F280F9A5(L_2, _stringLiteral3F42ED00D84DBC7A3B4658065DEA62873778201F, L_3, NULL);
		// to.MarkRestoreExpected(); // using blending, RT restore expected
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_4 = ___to2;
		NullCheck(L_4);
		RenderTexture_MarkRestoreExpected_m185BFFD02FE7149590A252527B18F25A7D4AD830(L_4, NULL);
		// Graphics.Blit (from == to ? null : from, to, screenBlend, from == to ? 7 : 3);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_5 = ___from1;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_6 = ___to2;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_7;
		L_7 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_5, L_6, NULL);
		if (L_7)
		{
			goto IL_0035;
		}
	}
	{
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_8 = ___from1;
		G_B4_0 = L_8;
		goto IL_0036;
	}

IL_0035:
	{
		G_B4_0 = ((RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27*)(NULL));
	}

IL_0036:
	{
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_9 = ___to2;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_10 = __this->___screenBlend_33;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_11 = ___from1;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_12 = ___to2;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_13;
		L_13 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_11, L_12, NULL);
		G_B5_0 = L_10;
		G_B5_1 = L_9;
		G_B5_2 = G_B4_0;
		if (L_13)
		{
			G_B6_0 = L_10;
			G_B6_1 = L_9;
			G_B6_2 = G_B4_0;
			goto IL_0049;
		}
	}
	{
		G_B7_0 = 3;
		G_B7_1 = G_B5_0;
		G_B7_2 = G_B5_1;
		G_B7_3 = G_B5_2;
		goto IL_004a;
	}

IL_0049:
	{
		G_B7_0 = 7;
		G_B7_1 = G_B6_0;
		G_B7_2 = G_B6_1;
		G_B7_3 = G_B6_2;
	}

IL_004a:
	{
		il2cpp_codegen_runtime_class_init_inline(Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var);
		Graphics_Blit_m5A753341A113FB6501C64F73D62047F84F957E50(G_B7_3, G_B7_2, G_B7_1, G_B7_0, NULL);
		return;
	}

IL_0050:
	{
		// else if (from != to)
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_14 = ___from1;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_15 = ___to2;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_16;
		L_16 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_14, L_15, NULL);
		if (!L_16)
		{
			goto IL_0072;
		}
	}
	{
		// Graphics.SetRenderTarget (to);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_17 = ___to2;
		il2cpp_codegen_runtime_class_init_inline(Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var);
		Graphics_SetRenderTarget_mDA2F41245400E50551268368F6C551FFFDCC9CAC(L_17, NULL);
		// GL.Clear(false, true, Color.black); // clear destination to avoid RT restore
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_18;
		L_18 = Color_get_black_mBF96B603B41BED9BAFAA10CE8D946D24260F9729_inline(NULL);
		GL_Clear_m303329453ADB3495208897E282FD24910878F537((bool)0, (bool)1, L_18, NULL);
		// Graphics.Blit (from, to);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_19 = ___from1;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_20 = ___to2;
		Graphics_Blit_m066854D684B6042B266D306E8E012D2C6C1787BE(L_19, L_20, NULL);
	}

IL_0072:
	{
		// }
		return;
	}
}
// System.Void UnityStandardAssets.ImageEffects.Bloom::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Bloom__ctor_m8C2E0B1E5304D115E940760497D92DF853739E84 (Bloom_t7FC3FD3F083630D01AC1C5E0D6859CB59F5D1EBF* __this, const RuntimeMethod* method) 
{
	{
		// public BloomScreenBlendMode screenBlendMode = BloomScreenBlendMode.Add;
		__this->___screenBlendMode_9 = 1;
		// public float sepBlurSpread = 2.5f;
		__this->___sepBlurSpread_12 = (2.5f);
		// public BloomQuality quality = BloomQuality.High;
		__this->___quality_13 = 1;
		// public float bloomIntensity = 0.5f;
		__this->___bloomIntensity_14 = (0.5f);
		// public float bloomThreshold = 0.5f;
		__this->___bloomThreshold_15 = (0.5f);
		// public Color bloomThresholdColor = Color.white;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		L_0 = Color_get_white_m28BB6E19F27D4EE6858D3021A44F62BC74E20C43_inline(NULL);
		__this->___bloomThresholdColor_16 = L_0;
		// public int bloomBlurIterations = 2;
		__this->___bloomBlurIterations_17 = 2;
		// public int hollywoodFlareBlurIterations = 2;
		__this->___hollywoodFlareBlurIterations_18 = 2;
		// public LensFlareStyle lensflareMode = (LensFlareStyle) 1;
		__this->___lensflareMode_20 = 1;
		// public float hollyStretchWidth = 2.5f;
		__this->___hollyStretchWidth_21 = (2.5f);
		// public float lensflareThreshold = 0.3f;
		__this->___lensflareThreshold_23 = (0.300000012f);
		// public float lensFlareSaturation = 0.75f;
		__this->___lensFlareSaturation_24 = (0.75f);
		// public Color flareColorA = new Color (0.4f, 0.4f, 0.8f, 0.75f);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1;
		memset((&L_1), 0, sizeof(L_1));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_1), (0.400000006f), (0.400000006f), (0.800000012f), (0.75f), /*hidden argument*/NULL);
		__this->___flareColorA_25 = L_1;
		// public Color flareColorB = new Color (0.4f, 0.8f, 0.8f, 0.75f);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_2;
		memset((&L_2), 0, sizeof(L_2));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_2), (0.400000006f), (0.800000012f), (0.800000012f), (0.75f), /*hidden argument*/NULL);
		__this->___flareColorB_26 = L_2;
		// public Color flareColorC = new Color (0.8f, 0.4f, 0.8f, 0.75f);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_3;
		memset((&L_3), 0, sizeof(L_3));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_3), (0.800000012f), (0.400000006f), (0.800000012f), (0.75f), /*hidden argument*/NULL);
		__this->___flareColorC_27 = L_3;
		// public Color flareColorD = new Color (0.8f, 0.4f, 0.0f, 0.75f);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_4;
		memset((&L_4), 0, sizeof(L_4));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_4), (0.800000012f), (0.400000006f), (0.0f), (0.75f), /*hidden argument*/NULL);
		__this->___flareColorD_28 = L_4;
		PostEffectsBase__ctor_m4EE3CA780BAAFF694007DD15EDF5CFA7448DB7DF(__this, NULL);
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
// System.Boolean UnityStandardAssets.ImageEffects.BloomOptimized::CheckResources()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BloomOptimized_CheckResources_m3360EAF2DD9E110CA83CCC147D9AC42F2133AF21 (BloomOptimized_tB65EA6C1DFCBBBDD9917463A09AB0D4D4204099B* __this, const RuntimeMethod* method) 
{
	{
		// CheckSupport (false);
		bool L_0;
		L_0 = PostEffectsBase_CheckSupport_mD35BCE12C19A6D60AC19A0189F1EB5CD71A1303E(__this, (bool)0, NULL);
		// fastBloomMaterial = CheckShaderAndCreateMaterial (fastBloomShader, fastBloomMaterial);
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_1 = __this->___fastBloomShader_14;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_2 = __this->___fastBloomMaterial_15;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_3;
		L_3 = PostEffectsBase_CheckShaderAndCreateMaterial_m9F3512FEF659B04E086E2EC154E789D67401D91A(__this, L_1, L_2, NULL);
		__this->___fastBloomMaterial_15 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___fastBloomMaterial_15), (void*)L_3);
		// if (!isSupported)
		bool L_4 = ((PostEffectsBase_t68F9A09F9CCB0B3DF158A27640081D0DFB22FD24*)__this)->___isSupported_6;
		if (L_4)
		{
			goto IL_002e;
		}
	}
	{
		// ReportAutoDisable ();
		PostEffectsBase_ReportAutoDisable_mFBFE9B4AF859872DA6F4FCAE254F92912B9B6000(__this, NULL);
	}

IL_002e:
	{
		// return isSupported;
		bool L_5 = ((PostEffectsBase_t68F9A09F9CCB0B3DF158A27640081D0DFB22FD24*)__this)->___isSupported_6;
		return L_5;
	}
}
// System.Void UnityStandardAssets.ImageEffects.BloomOptimized::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BloomOptimized_OnDisable_mA738132136D945D92F8F3C49982D5A9D07EAB84D (BloomOptimized_tB65EA6C1DFCBBBDD9917463A09AB0D4D4204099B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (fastBloomMaterial)
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_0 = __this->___fastBloomMaterial_15;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_0, NULL);
		if (!L_1)
		{
			goto IL_0018;
		}
	}
	{
		// DestroyImmediate (fastBloomMaterial);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_2 = __this->___fastBloomMaterial_15;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_DestroyImmediate_m8249CABCDF344BE3A67EE765122EBB415DC2BC57(L_2, NULL);
	}

IL_0018:
	{
		// }
		return;
	}
}
// System.Void UnityStandardAssets.ImageEffects.BloomOptimized::OnRenderImage(UnityEngine.RenderTexture,UnityEngine.RenderTexture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BloomOptimized_OnRenderImage_m106F074826DC478E55D7ED50830919CA027F4EF2 (BloomOptimized_tB65EA6C1DFCBBBDD9917463A09AB0D4D4204099B* __this, RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___source0, RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___destination1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral67FCD903D968843FB838A58A0441312B2F7350F3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF3727B51476229A6673C6AE3F1248A22C8869020);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	float V_1 = 0.0f;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* V_4 = NULL;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* V_7 = NULL;
	int32_t G_B5_0 = 0;
	float G_B8_0 = 0.0f;
	int32_t G_B11_0 = 0;
	{
		// if (CheckResources() == false)
		bool L_0;
		L_0 = VirtualFuncInvoker0< bool >::Invoke(4 /* System.Boolean UnityStandardAssets.ImageEffects.PostEffectsBase::CheckResources() */, __this);
		if (L_0)
		{
			goto IL_0010;
		}
	}
	{
		// Graphics.Blit (source, destination);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_1 = ___source0;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_2 = ___destination1;
		il2cpp_codegen_runtime_class_init_inline(Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var);
		Graphics_Blit_m066854D684B6042B266D306E8E012D2C6C1787BE(L_1, L_2, NULL);
		// return;
		return;
	}

IL_0010:
	{
		// int divider = resolution == Resolution.Low ? 4 : 2;
		int32_t L_3 = __this->___resolution_11;
		if (!L_3)
		{
			goto IL_001b;
		}
	}
	{
		G_B5_0 = 2;
		goto IL_001c;
	}

IL_001b:
	{
		G_B5_0 = 4;
	}

IL_001c:
	{
		V_0 = G_B5_0;
		// float widthMod = resolution == Resolution.Low ? 0.5f : 1.0f;
		int32_t L_4 = __this->___resolution_11;
		if (!L_4)
		{
			goto IL_002c;
		}
	}
	{
		G_B8_0 = (1.0f);
		goto IL_0031;
	}

IL_002c:
	{
		G_B8_0 = (0.5f);
	}

IL_0031:
	{
		V_1 = G_B8_0;
		// fastBloomMaterial.SetVector ("_Parameter", new Vector4 (blurSize * widthMod, 0.0f, threshold, intensity));
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_5 = __this->___fastBloomMaterial_15;
		float L_6 = __this->___blurSize_10;
		float L_7 = V_1;
		float L_8 = __this->___threshold_8;
		float L_9 = __this->___intensity_9;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_10;
		memset((&L_10), 0, sizeof(L_10));
		Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline((&L_10), ((float)il2cpp_codegen_multiply(L_6, L_7)), (0.0f), L_8, L_9, /*hidden argument*/NULL);
		NullCheck(L_5);
		Material_SetVector_m69444B8040D955821F241113446CC8713C9E12D1(L_5, _stringLiteral67FCD903D968843FB838A58A0441312B2F7350F3, L_10, NULL);
		// source.filterMode = FilterMode.Bilinear;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_11 = ___source0;
		NullCheck(L_11);
		Texture_set_filterMode_mE423E58C0C16D059EA62BA87AD70F44AEA50CCC9(L_11, 1, NULL);
		// var rtW= source.width/divider;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_12 = ___source0;
		NullCheck(L_12);
		int32_t L_13;
		L_13 = VirtualFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_12);
		int32_t L_14 = V_0;
		V_2 = ((int32_t)(L_13/L_14));
		// var rtH= source.height/divider;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_15 = ___source0;
		NullCheck(L_15);
		int32_t L_16;
		L_16 = VirtualFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Texture::get_height() */, L_15);
		int32_t L_17 = V_0;
		V_3 = ((int32_t)(L_16/L_17));
		// RenderTexture rt = RenderTexture.GetTemporary (rtW, rtH, 0, source.format);
		int32_t L_18 = V_2;
		int32_t L_19 = V_3;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_20 = ___source0;
		NullCheck(L_20);
		int32_t L_21;
		L_21 = RenderTexture_get_format_m58556ABB91A1FADA8044BEEA2E8C55280768CF35(L_20, NULL);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_22;
		L_22 = RenderTexture_GetTemporary_mEB21705B78CAF6B8F1F6617453A8EE8A94498DE2(L_18, L_19, 0, L_21, NULL);
		V_4 = L_22;
		// rt.filterMode = FilterMode.Bilinear;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_23 = V_4;
		NullCheck(L_23);
		Texture_set_filterMode_mE423E58C0C16D059EA62BA87AD70F44AEA50CCC9(L_23, 1, NULL);
		// Graphics.Blit (source, rt, fastBloomMaterial, 1);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_24 = ___source0;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_25 = V_4;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_26 = __this->___fastBloomMaterial_15;
		il2cpp_codegen_runtime_class_init_inline(Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var);
		Graphics_Blit_m5A753341A113FB6501C64F73D62047F84F957E50(L_24, L_25, L_26, 1, NULL);
		// var passOffs= blurType == BlurType.Standard ? 0 : 2;
		int32_t L_27 = __this->___blurType_13;
		if (!L_27)
		{
			goto IL_00ab;
		}
	}
	{
		G_B11_0 = 2;
		goto IL_00ac;
	}

IL_00ab:
	{
		G_B11_0 = 0;
	}

IL_00ac:
	{
		V_5 = G_B11_0;
		// for(int i = 0; i < blurIterations; i++)
		V_6 = 0;
		goto IL_0160;
	}

IL_00b6:
	{
		// fastBloomMaterial.SetVector ("_Parameter", new Vector4 (blurSize * widthMod + (i*1.0f), 0.0f, threshold, intensity));
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_28 = __this->___fastBloomMaterial_15;
		float L_29 = __this->___blurSize_10;
		float L_30 = V_1;
		int32_t L_31 = V_6;
		float L_32 = __this->___threshold_8;
		float L_33 = __this->___intensity_9;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_34;
		memset((&L_34), 0, sizeof(L_34));
		Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline((&L_34), ((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_29, L_30)), ((float)il2cpp_codegen_multiply(((float)L_31), (1.0f))))), (0.0f), L_32, L_33, /*hidden argument*/NULL);
		NullCheck(L_28);
		Material_SetVector_m69444B8040D955821F241113446CC8713C9E12D1(L_28, _stringLiteral67FCD903D968843FB838A58A0441312B2F7350F3, L_34, NULL);
		// RenderTexture rt2 = RenderTexture.GetTemporary (rtW, rtH, 0, source.format);
		int32_t L_35 = V_2;
		int32_t L_36 = V_3;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_37 = ___source0;
		NullCheck(L_37);
		int32_t L_38;
		L_38 = RenderTexture_get_format_m58556ABB91A1FADA8044BEEA2E8C55280768CF35(L_37, NULL);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_39;
		L_39 = RenderTexture_GetTemporary_mEB21705B78CAF6B8F1F6617453A8EE8A94498DE2(L_35, L_36, 0, L_38, NULL);
		V_7 = L_39;
		// rt2.filterMode = FilterMode.Bilinear;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_40 = V_7;
		NullCheck(L_40);
		Texture_set_filterMode_mE423E58C0C16D059EA62BA87AD70F44AEA50CCC9(L_40, 1, NULL);
		// Graphics.Blit (rt, rt2, fastBloomMaterial, 2 + passOffs);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_41 = V_4;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_42 = V_7;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_43 = __this->___fastBloomMaterial_15;
		int32_t L_44 = V_5;
		il2cpp_codegen_runtime_class_init_inline(Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var);
		Graphics_Blit_m5A753341A113FB6501C64F73D62047F84F957E50(L_41, L_42, L_43, ((int32_t)il2cpp_codegen_add(2, L_44)), NULL);
		// RenderTexture.ReleaseTemporary (rt);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_45 = V_4;
		RenderTexture_ReleaseTemporary_m7D9B385460ED0D0CF7BCC033605CEBD60A1A232F(L_45, NULL);
		// rt = rt2;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_46 = V_7;
		V_4 = L_46;
		// rt2 = RenderTexture.GetTemporary (rtW, rtH, 0, source.format);
		int32_t L_47 = V_2;
		int32_t L_48 = V_3;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_49 = ___source0;
		NullCheck(L_49);
		int32_t L_50;
		L_50 = RenderTexture_get_format_m58556ABB91A1FADA8044BEEA2E8C55280768CF35(L_49, NULL);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_51;
		L_51 = RenderTexture_GetTemporary_mEB21705B78CAF6B8F1F6617453A8EE8A94498DE2(L_47, L_48, 0, L_50, NULL);
		V_7 = L_51;
		// rt2.filterMode = FilterMode.Bilinear;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_52 = V_7;
		NullCheck(L_52);
		Texture_set_filterMode_mE423E58C0C16D059EA62BA87AD70F44AEA50CCC9(L_52, 1, NULL);
		// Graphics.Blit (rt, rt2, fastBloomMaterial, 3 + passOffs);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_53 = V_4;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_54 = V_7;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_55 = __this->___fastBloomMaterial_15;
		int32_t L_56 = V_5;
		Graphics_Blit_m5A753341A113FB6501C64F73D62047F84F957E50(L_53, L_54, L_55, ((int32_t)il2cpp_codegen_add(3, L_56)), NULL);
		// RenderTexture.ReleaseTemporary (rt);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_57 = V_4;
		RenderTexture_ReleaseTemporary_m7D9B385460ED0D0CF7BCC033605CEBD60A1A232F(L_57, NULL);
		// rt = rt2;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_58 = V_7;
		V_4 = L_58;
		// for(int i = 0; i < blurIterations; i++)
		int32_t L_59 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add(L_59, 1));
	}

IL_0160:
	{
		// for(int i = 0; i < blurIterations; i++)
		int32_t L_60 = V_6;
		int32_t L_61 = __this->___blurIterations_12;
		if ((((int32_t)L_60) < ((int32_t)L_61)))
		{
			goto IL_00b6;
		}
	}
	{
		// fastBloomMaterial.SetTexture ("_Bloom", rt);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_62 = __this->___fastBloomMaterial_15;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_63 = V_4;
		NullCheck(L_62);
		Material_SetTexture_m06083C3F52EF02FFB1177901D9907314F280F9A5(L_62, _stringLiteralF3727B51476229A6673C6AE3F1248A22C8869020, L_63, NULL);
		// Graphics.Blit (source, destination, fastBloomMaterial, 0);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_64 = ___source0;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_65 = ___destination1;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_66 = __this->___fastBloomMaterial_15;
		il2cpp_codegen_runtime_class_init_inline(Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var);
		Graphics_Blit_m5A753341A113FB6501C64F73D62047F84F957E50(L_64, L_65, L_66, 0, NULL);
		// RenderTexture.ReleaseTemporary (rt);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_67 = V_4;
		RenderTexture_ReleaseTemporary_m7D9B385460ED0D0CF7BCC033605CEBD60A1A232F(L_67, NULL);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.ImageEffects.BloomOptimized::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BloomOptimized__ctor_m9FF3B196B6C1D705F7292A03EAA76374BC0A42EA (BloomOptimized_tB65EA6C1DFCBBBDD9917463A09AB0D4D4204099B* __this, const RuntimeMethod* method) 
{
	{
		// public float threshold = 0.25f;
		__this->___threshold_8 = (0.25f);
		// public float intensity = 0.75f;
		__this->___intensity_9 = (0.75f);
		// public float blurSize = 1.0f;
		__this->___blurSize_10 = (1.0f);
		// public int blurIterations = 1;
		__this->___blurIterations_12 = 1;
		PostEffectsBase__ctor_m4EE3CA780BAAFF694007DD15EDF5CFA7448DB7DF(__this, NULL);
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
// System.Void UnityStandardAssets.ImageEffects.ColorCorrectionCurves::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ColorCorrectionCurves_Start_m37B8E68FE3DABDAA24547513FB0F73243B49D8E7 (ColorCorrectionCurves_tE85378ED43495F624056B5696F97D3D2451D6EEB* __this, const RuntimeMethod* method) 
{
	{
		// base.Start ();
		PostEffectsBase_Start_m2189DFDADA6A50171C983B2477B5BBB957E40EAD(__this, NULL);
		// updateTexturesOnStartup = true;
		__this->___updateTexturesOnStartup_31 = (bool)1;
		// }
		return;
	}
}
// System.Void UnityStandardAssets.ImageEffects.ColorCorrectionCurves::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ColorCorrectionCurves_Awake_mC2C5CB77423EF860DAF73E61AEE34D178A5DEF4B (ColorCorrectionCurves_tE85378ED43495F624056B5696F97D3D2451D6EEB* __this, const RuntimeMethod* method) 
{
	{
		// void Awake () {    }
		return;
	}
}
// System.Boolean UnityStandardAssets.ImageEffects.ColorCorrectionCurves::CheckResources()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ColorCorrectionCurves_CheckResources_m5BD9FD07C5F4E8E2C5B12540FB574DF115A417ED (ColorCorrectionCurves_tE85378ED43495F624056B5696F97D3D2451D6EEB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// CheckSupport (mode == ColorCorrectionMode.Advanced);
		int32_t L_0 = __this->___mode_26;
		bool L_1;
		L_1 = PostEffectsBase_CheckSupport_mD35BCE12C19A6D60AC19A0189F1EB5CD71A1303E(__this, (bool)((((int32_t)L_0) == ((int32_t)1))? 1 : 0), NULL);
		// ccMaterial = CheckShaderAndCreateMaterial (simpleColorCorrectionCurvesShader, ccMaterial);
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_2 = __this->___simpleColorCorrectionCurvesShader_29;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_3 = __this->___ccMaterial_16;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_4;
		L_4 = PostEffectsBase_CheckShaderAndCreateMaterial_m9F3512FEF659B04E086E2EC154E789D67401D91A(__this, L_2, L_3, NULL);
		__this->___ccMaterial_16 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___ccMaterial_16), (void*)L_4);
		// ccDepthMaterial = CheckShaderAndCreateMaterial (colorCorrectionCurvesShader, ccDepthMaterial);
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_5 = __this->___colorCorrectionCurvesShader_28;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_6 = __this->___ccDepthMaterial_17;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_7;
		L_7 = PostEffectsBase_CheckShaderAndCreateMaterial_m9F3512FEF659B04E086E2EC154E789D67401D91A(__this, L_5, L_6, NULL);
		__this->___ccDepthMaterial_17 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___ccDepthMaterial_17), (void*)L_7);
		// selectiveCcMaterial = CheckShaderAndCreateMaterial (colorCorrectionSelectiveShader, selectiveCcMaterial);
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_8 = __this->___colorCorrectionSelectiveShader_30;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_9 = __this->___selectiveCcMaterial_18;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_10;
		L_10 = PostEffectsBase_CheckShaderAndCreateMaterial_m9F3512FEF659B04E086E2EC154E789D67401D91A(__this, L_8, L_9, NULL);
		__this->___selectiveCcMaterial_18 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___selectiveCcMaterial_18), (void*)L_10);
		// if (!rgbChannelTex)
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_11 = __this->___rgbChannelTex_19;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_12;
		L_12 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_11, NULL);
		if (L_12)
		{
			goto IL_0079;
		}
	}
	{
		// rgbChannelTex = new Texture2D (256, 4, TextureFormat.ARGB32, false, true);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_13 = (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4*)il2cpp_codegen_object_new(Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_il2cpp_TypeInfo_var);
		NullCheck(L_13);
		Texture2D__ctor_mC3F84195D1DCEFC0536B3FBD40A8F8E865A4F32A(L_13, ((int32_t)256), 4, 5, (bool)0, (bool)1, NULL);
		__this->___rgbChannelTex_19 = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___rgbChannelTex_19), (void*)L_13);
	}

IL_0079:
	{
		// if (!rgbDepthChannelTex)
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_14 = __this->___rgbDepthChannelTex_20;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_15;
		L_15 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_14, NULL);
		if (L_15)
		{
			goto IL_009a;
		}
	}
	{
		// rgbDepthChannelTex = new Texture2D (256, 4, TextureFormat.ARGB32, false, true);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_16 = (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4*)il2cpp_codegen_object_new(Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_il2cpp_TypeInfo_var);
		NullCheck(L_16);
		Texture2D__ctor_mC3F84195D1DCEFC0536B3FBD40A8F8E865A4F32A(L_16, ((int32_t)256), 4, 5, (bool)0, (bool)1, NULL);
		__this->___rgbDepthChannelTex_20 = L_16;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___rgbDepthChannelTex_20), (void*)L_16);
	}

IL_009a:
	{
		// if (!zCurveTex)
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_17 = __this->___zCurveTex_21;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_18;
		L_18 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_17, NULL);
		if (L_18)
		{
			goto IL_00bb;
		}
	}
	{
		// zCurveTex = new Texture2D (256, 1, TextureFormat.ARGB32, false, true);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_19 = (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4*)il2cpp_codegen_object_new(Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_il2cpp_TypeInfo_var);
		NullCheck(L_19);
		Texture2D__ctor_mC3F84195D1DCEFC0536B3FBD40A8F8E865A4F32A(L_19, ((int32_t)256), 1, 5, (bool)0, (bool)1, NULL);
		__this->___zCurveTex_21 = L_19;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___zCurveTex_21), (void*)L_19);
	}

IL_00bb:
	{
		// rgbChannelTex.hideFlags = HideFlags.DontSave;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_20 = __this->___rgbChannelTex_19;
		NullCheck(L_20);
		Object_set_hideFlags_mACB8BFC903FB3B01BBD427753E791BF28B5E33D4(L_20, ((int32_t)52), NULL);
		// rgbDepthChannelTex.hideFlags = HideFlags.DontSave;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_21 = __this->___rgbDepthChannelTex_20;
		NullCheck(L_21);
		Object_set_hideFlags_mACB8BFC903FB3B01BBD427753E791BF28B5E33D4(L_21, ((int32_t)52), NULL);
		// zCurveTex.hideFlags = HideFlags.DontSave;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_22 = __this->___zCurveTex_21;
		NullCheck(L_22);
		Object_set_hideFlags_mACB8BFC903FB3B01BBD427753E791BF28B5E33D4(L_22, ((int32_t)52), NULL);
		// rgbChannelTex.wrapMode = TextureWrapMode.Clamp;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_23 = __this->___rgbChannelTex_19;
		NullCheck(L_23);
		Texture_set_wrapMode_m1F74A690E3883EC9C5C371D502D09642F15D0F7E(L_23, 1, NULL);
		// rgbDepthChannelTex.wrapMode = TextureWrapMode.Clamp;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_24 = __this->___rgbDepthChannelTex_20;
		NullCheck(L_24);
		Texture_set_wrapMode_m1F74A690E3883EC9C5C371D502D09642F15D0F7E(L_24, 1, NULL);
		// zCurveTex.wrapMode = TextureWrapMode.Clamp;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_25 = __this->___zCurveTex_21;
		NullCheck(L_25);
		Texture_set_wrapMode_m1F74A690E3883EC9C5C371D502D09642F15D0F7E(L_25, 1, NULL);
		// if (!isSupported)
		bool L_26 = ((PostEffectsBase_t68F9A09F9CCB0B3DF158A27640081D0DFB22FD24*)__this)->___isSupported_6;
		if (L_26)
		{
			goto IL_0114;
		}
	}
	{
		// ReportAutoDisable ();
		PostEffectsBase_ReportAutoDisable_mFBFE9B4AF859872DA6F4FCAE254F92912B9B6000(__this, NULL);
	}

IL_0114:
	{
		// return isSupported;
		bool L_27 = ((PostEffectsBase_t68F9A09F9CCB0B3DF158A27640081D0DFB22FD24*)__this)->___isSupported_6;
		return L_27;
	}
}
// System.Void UnityStandardAssets.ImageEffects.ColorCorrectionCurves::UpdateParameters()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ColorCorrectionCurves_UpdateParameters_m8FE11FA0F109CD32C907A71FC69C965F15473A48 (ColorCorrectionCurves_tE85378ED43495F624056B5696F97D3D2451D6EEB* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	{
		// CheckResources(); // textures might not be created if we're tweaking UI while disabled
		bool L_0;
		L_0 = VirtualFuncInvoker0< bool >::Invoke(4 /* System.Boolean UnityStandardAssets.ImageEffects.PostEffectsBase::CheckResources() */, __this);
		// if (redChannel != null && greenChannel != null && blueChannel != null)
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_1 = __this->___redChannel_8;
		if (!L_1)
		{
			goto IL_0216;
		}
	}
	{
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_2 = __this->___greenChannel_9;
		if (!L_2)
		{
			goto IL_0216;
		}
	}
	{
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_3 = __this->___blueChannel_10;
		if (!L_3)
		{
			goto IL_0216;
		}
	}
	{
		// for (float i = 0.0f; i <= 1.0f; i += 1.0f / 255.0f)
		V_0 = (0.0f);
		goto IL_01ea;
	}

IL_0033:
	{
		// float rCh = Mathf.Clamp (redChannel.Evaluate(i), 0.0f, 1.0f);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_4 = __this->___redChannel_8;
		float L_5 = V_0;
		NullCheck(L_4);
		float L_6;
		L_6 = AnimationCurve_Evaluate_m50B857043DE251A186032ADBCBB4CEF817F4EE3C(L_4, L_5, NULL);
		float L_7;
		L_7 = Mathf_Clamp_m154E404AF275A3B2EC99ECAA3879B4CB9F0606DC_inline(L_6, (0.0f), (1.0f), NULL);
		V_1 = L_7;
		// float gCh = Mathf.Clamp (greenChannel.Evaluate(i), 0.0f, 1.0f);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_8 = __this->___greenChannel_9;
		float L_9 = V_0;
		NullCheck(L_8);
		float L_10;
		L_10 = AnimationCurve_Evaluate_m50B857043DE251A186032ADBCBB4CEF817F4EE3C(L_8, L_9, NULL);
		float L_11;
		L_11 = Mathf_Clamp_m154E404AF275A3B2EC99ECAA3879B4CB9F0606DC_inline(L_10, (0.0f), (1.0f), NULL);
		V_2 = L_11;
		// float bCh = Mathf.Clamp (blueChannel.Evaluate(i), 0.0f, 1.0f);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_12 = __this->___blueChannel_10;
		float L_13 = V_0;
		NullCheck(L_12);
		float L_14;
		L_14 = AnimationCurve_Evaluate_m50B857043DE251A186032ADBCBB4CEF817F4EE3C(L_12, L_13, NULL);
		float L_15;
		L_15 = Mathf_Clamp_m154E404AF275A3B2EC99ECAA3879B4CB9F0606DC_inline(L_14, (0.0f), (1.0f), NULL);
		V_3 = L_15;
		// rgbChannelTex.SetPixel ((int) Mathf.Floor(i*255.0f), 0, new Color(rCh,rCh,rCh) );
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_16 = __this->___rgbChannelTex_19;
		float L_17 = V_0;
		float L_18;
		L_18 = floorf(((float)il2cpp_codegen_multiply(L_17, (255.0f))));
		float L_19 = V_1;
		float L_20 = V_1;
		float L_21 = V_1;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_22;
		memset((&L_22), 0, sizeof(L_22));
		Color__ctor_mCD6889CDE39F18704CD6EA8E2EFBFA48BA3E13B0_inline((&L_22), L_19, L_20, L_21, /*hidden argument*/NULL);
		NullCheck(L_16);
		Texture2D_SetPixel_m2CCFC5F729135D59DC4A697C2605A3FC5C8574DB(L_16, il2cpp_codegen_cast_double_to_int<int32_t>(L_18), 0, L_22, NULL);
		// rgbChannelTex.SetPixel ((int) Mathf.Floor(i*255.0f), 1, new Color(gCh,gCh,gCh) );
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_23 = __this->___rgbChannelTex_19;
		float L_24 = V_0;
		float L_25;
		L_25 = floorf(((float)il2cpp_codegen_multiply(L_24, (255.0f))));
		float L_26 = V_2;
		float L_27 = V_2;
		float L_28 = V_2;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_29;
		memset((&L_29), 0, sizeof(L_29));
		Color__ctor_mCD6889CDE39F18704CD6EA8E2EFBFA48BA3E13B0_inline((&L_29), L_26, L_27, L_28, /*hidden argument*/NULL);
		NullCheck(L_23);
		Texture2D_SetPixel_m2CCFC5F729135D59DC4A697C2605A3FC5C8574DB(L_23, il2cpp_codegen_cast_double_to_int<int32_t>(L_25), 1, L_29, NULL);
		// rgbChannelTex.SetPixel ((int) Mathf.Floor(i*255.0f), 2, new Color(bCh,bCh,bCh) );
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_30 = __this->___rgbChannelTex_19;
		float L_31 = V_0;
		float L_32;
		L_32 = floorf(((float)il2cpp_codegen_multiply(L_31, (255.0f))));
		float L_33 = V_3;
		float L_34 = V_3;
		float L_35 = V_3;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_36;
		memset((&L_36), 0, sizeof(L_36));
		Color__ctor_mCD6889CDE39F18704CD6EA8E2EFBFA48BA3E13B0_inline((&L_36), L_33, L_34, L_35, /*hidden argument*/NULL);
		NullCheck(L_30);
		Texture2D_SetPixel_m2CCFC5F729135D59DC4A697C2605A3FC5C8574DB(L_30, il2cpp_codegen_cast_double_to_int<int32_t>(L_32), 2, L_36, NULL);
		// float zC = Mathf.Clamp (zCurve.Evaluate(i), 0.0f,1.0f);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_37 = __this->___zCurve_12;
		float L_38 = V_0;
		NullCheck(L_37);
		float L_39;
		L_39 = AnimationCurve_Evaluate_m50B857043DE251A186032ADBCBB4CEF817F4EE3C(L_37, L_38, NULL);
		float L_40;
		L_40 = Mathf_Clamp_m154E404AF275A3B2EC99ECAA3879B4CB9F0606DC_inline(L_39, (0.0f), (1.0f), NULL);
		V_4 = L_40;
		// zCurveTex.SetPixel ((int) Mathf.Floor(i*255.0f), 0, new Color(zC,zC,zC) );
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_41 = __this->___zCurveTex_21;
		float L_42 = V_0;
		float L_43;
		L_43 = floorf(((float)il2cpp_codegen_multiply(L_42, (255.0f))));
		float L_44 = V_4;
		float L_45 = V_4;
		float L_46 = V_4;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_47;
		memset((&L_47), 0, sizeof(L_47));
		Color__ctor_mCD6889CDE39F18704CD6EA8E2EFBFA48BA3E13B0_inline((&L_47), L_44, L_45, L_46, /*hidden argument*/NULL);
		NullCheck(L_41);
		Texture2D_SetPixel_m2CCFC5F729135D59DC4A697C2605A3FC5C8574DB(L_41, il2cpp_codegen_cast_double_to_int<int32_t>(L_43), 0, L_47, NULL);
		// rCh = Mathf.Clamp (depthRedChannel.Evaluate(i), 0.0f,1.0f);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_48 = __this->___depthRedChannel_13;
		float L_49 = V_0;
		NullCheck(L_48);
		float L_50;
		L_50 = AnimationCurve_Evaluate_m50B857043DE251A186032ADBCBB4CEF817F4EE3C(L_48, L_49, NULL);
		float L_51;
		L_51 = Mathf_Clamp_m154E404AF275A3B2EC99ECAA3879B4CB9F0606DC_inline(L_50, (0.0f), (1.0f), NULL);
		V_1 = L_51;
		// gCh = Mathf.Clamp (depthGreenChannel.Evaluate(i), 0.0f,1.0f);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_52 = __this->___depthGreenChannel_14;
		float L_53 = V_0;
		NullCheck(L_52);
		float L_54;
		L_54 = AnimationCurve_Evaluate_m50B857043DE251A186032ADBCBB4CEF817F4EE3C(L_52, L_53, NULL);
		float L_55;
		L_55 = Mathf_Clamp_m154E404AF275A3B2EC99ECAA3879B4CB9F0606DC_inline(L_54, (0.0f), (1.0f), NULL);
		V_2 = L_55;
		// bCh = Mathf.Clamp (depthBlueChannel.Evaluate(i), 0.0f,1.0f);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_56 = __this->___depthBlueChannel_15;
		float L_57 = V_0;
		NullCheck(L_56);
		float L_58;
		L_58 = AnimationCurve_Evaluate_m50B857043DE251A186032ADBCBB4CEF817F4EE3C(L_56, L_57, NULL);
		float L_59;
		L_59 = Mathf_Clamp_m154E404AF275A3B2EC99ECAA3879B4CB9F0606DC_inline(L_58, (0.0f), (1.0f), NULL);
		V_3 = L_59;
		// rgbDepthChannelTex.SetPixel ((int) Mathf.Floor(i*255.0f), 0, new Color(rCh,rCh,rCh) );
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_60 = __this->___rgbDepthChannelTex_20;
		float L_61 = V_0;
		float L_62;
		L_62 = floorf(((float)il2cpp_codegen_multiply(L_61, (255.0f))));
		float L_63 = V_1;
		float L_64 = V_1;
		float L_65 = V_1;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_66;
		memset((&L_66), 0, sizeof(L_66));
		Color__ctor_mCD6889CDE39F18704CD6EA8E2EFBFA48BA3E13B0_inline((&L_66), L_63, L_64, L_65, /*hidden argument*/NULL);
		NullCheck(L_60);
		Texture2D_SetPixel_m2CCFC5F729135D59DC4A697C2605A3FC5C8574DB(L_60, il2cpp_codegen_cast_double_to_int<int32_t>(L_62), 0, L_66, NULL);
		// rgbDepthChannelTex.SetPixel ((int) Mathf.Floor(i*255.0f), 1, new Color(gCh,gCh,gCh) );
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_67 = __this->___rgbDepthChannelTex_20;
		float L_68 = V_0;
		float L_69;
		L_69 = floorf(((float)il2cpp_codegen_multiply(L_68, (255.0f))));
		float L_70 = V_2;
		float L_71 = V_2;
		float L_72 = V_2;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_73;
		memset((&L_73), 0, sizeof(L_73));
		Color__ctor_mCD6889CDE39F18704CD6EA8E2EFBFA48BA3E13B0_inline((&L_73), L_70, L_71, L_72, /*hidden argument*/NULL);
		NullCheck(L_67);
		Texture2D_SetPixel_m2CCFC5F729135D59DC4A697C2605A3FC5C8574DB(L_67, il2cpp_codegen_cast_double_to_int<int32_t>(L_69), 1, L_73, NULL);
		// rgbDepthChannelTex.SetPixel ((int) Mathf.Floor(i*255.0f), 2, new Color(bCh,bCh,bCh) );
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_74 = __this->___rgbDepthChannelTex_20;
		float L_75 = V_0;
		float L_76;
		L_76 = floorf(((float)il2cpp_codegen_multiply(L_75, (255.0f))));
		float L_77 = V_3;
		float L_78 = V_3;
		float L_79 = V_3;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_80;
		memset((&L_80), 0, sizeof(L_80));
		Color__ctor_mCD6889CDE39F18704CD6EA8E2EFBFA48BA3E13B0_inline((&L_80), L_77, L_78, L_79, /*hidden argument*/NULL);
		NullCheck(L_74);
		Texture2D_SetPixel_m2CCFC5F729135D59DC4A697C2605A3FC5C8574DB(L_74, il2cpp_codegen_cast_double_to_int<int32_t>(L_76), 2, L_80, NULL);
		// for (float i = 0.0f; i <= 1.0f; i += 1.0f / 255.0f)
		float L_81 = V_0;
		V_0 = ((float)il2cpp_codegen_add(L_81, (0.00392156886f)));
	}

IL_01ea:
	{
		// for (float i = 0.0f; i <= 1.0f; i += 1.0f / 255.0f)
		float L_82 = V_0;
		if ((((float)L_82) <= ((float)(1.0f))))
		{
			goto IL_0033;
		}
	}
	{
		// rgbChannelTex.Apply ();
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_83 = __this->___rgbChannelTex_19;
		NullCheck(L_83);
		Texture2D_Apply_mA014182C9EE0BBF6EEE3B286854F29E50EB972DC(L_83, NULL);
		// rgbDepthChannelTex.Apply ();
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_84 = __this->___rgbDepthChannelTex_20;
		NullCheck(L_84);
		Texture2D_Apply_mA014182C9EE0BBF6EEE3B286854F29E50EB972DC(L_84, NULL);
		// zCurveTex.Apply ();
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_85 = __this->___zCurveTex_21;
		NullCheck(L_85);
		Texture2D_Apply_mA014182C9EE0BBF6EEE3B286854F29E50EB972DC(L_85, NULL);
	}

IL_0216:
	{
		// }
		return;
	}
}
// System.Void UnityStandardAssets.ImageEffects.ColorCorrectionCurves::UpdateTextures()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ColorCorrectionCurves_UpdateTextures_m59CAF9B9BA5C4FF997BA7C59E65625914EEEA325 (ColorCorrectionCurves_tE85378ED43495F624056B5696F97D3D2451D6EEB* __this, const RuntimeMethod* method) 
{
	{
		// UpdateParameters ();
		ColorCorrectionCurves_UpdateParameters_m8FE11FA0F109CD32C907A71FC69C965F15473A48(__this, NULL);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.ImageEffects.ColorCorrectionCurves::OnRenderImage(UnityEngine.RenderTexture,UnityEngine.RenderTexture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ColorCorrectionCurves_OnRenderImage_m0E1685EDD5E5EF6B28F8B08EB9E8FA0792565860 (ColorCorrectionCurves_tE85378ED43495F624056B5696F97D3D2451D6EEB* __this, RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___source0, RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___destination1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m64AC6C06DD93C5FB249091FEC84FA8475457CCC4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral014264E028C02C80CFEA13DF5238C7B0CEAF8D5A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral26B13993D9AF58863D398B1F9A2575F0AD504CE9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4B378829BC17C440269AD9500400C60EDE6B11B4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5FA0F386399780C14B371C5D4D0E49B5A60EC8AA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDE9FAF482EBF07DB48E259D5B8D2B04A5EF5EFA9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF109A485C102E0298CFD9813641B5C48FBF36384);
		s_Il2CppMethodInitialized = true;
	}
	RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* V_0 = NULL;
	{
		// if (CheckResources()==false)
		bool L_0;
		L_0 = VirtualFuncInvoker0< bool >::Invoke(4 /* System.Boolean UnityStandardAssets.ImageEffects.PostEffectsBase::CheckResources() */, __this);
		if (L_0)
		{
			goto IL_0010;
		}
	}
	{
		// Graphics.Blit (source, destination);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_1 = ___source0;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_2 = ___destination1;
		il2cpp_codegen_runtime_class_init_inline(Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var);
		Graphics_Blit_m066854D684B6042B266D306E8E012D2C6C1787BE(L_1, L_2, NULL);
		// return;
		return;
	}

IL_0010:
	{
		// if (updateTexturesOnStartup)
		bool L_3 = __this->___updateTexturesOnStartup_31;
		if (!L_3)
		{
			goto IL_0025;
		}
	}
	{
		// UpdateParameters ();
		ColorCorrectionCurves_UpdateParameters_m8FE11FA0F109CD32C907A71FC69C965F15473A48(__this, NULL);
		// updateTexturesOnStartup = false;
		__this->___updateTexturesOnStartup_31 = (bool)0;
	}

IL_0025:
	{
		// if (useDepthCorrection)
		bool L_4 = __this->___useDepthCorrection_11;
		if (!L_4)
		{
			goto IL_0040;
		}
	}
	{
		// GetComponent<Camera>().depthTextureMode |= DepthTextureMode.Depth;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_5;
		L_5 = Component_GetComponent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m64AC6C06DD93C5FB249091FEC84FA8475457CCC4(__this, Component_GetComponent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m64AC6C06DD93C5FB249091FEC84FA8475457CCC4_RuntimeMethod_var);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_6 = L_5;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = Camera_get_depthTextureMode_m998CDEBC055FE2A910F3B650585ADE3E2BB141EE(L_6, NULL);
		NullCheck(L_6);
		Camera_set_depthTextureMode_mE722389E4DF8B3DF7F6100DB142E4DBAF698F6BF(L_6, ((int32_t)((int32_t)L_7|1)), NULL);
	}

IL_0040:
	{
		// RenderTexture renderTarget2Use = destination;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_8 = ___destination1;
		V_0 = L_8;
		// if (selectiveCc)
		bool L_9 = __this->___selectiveCc_23;
		if (!L_9)
		{
			goto IL_005c;
		}
	}
	{
		// renderTarget2Use = RenderTexture.GetTemporary (source.width, source.height);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_10 = ___source0;
		NullCheck(L_10);
		int32_t L_11;
		L_11 = VirtualFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_10);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_12 = ___source0;
		NullCheck(L_12);
		int32_t L_13;
		L_13 = VirtualFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Texture::get_height() */, L_12);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_14;
		L_14 = RenderTexture_GetTemporary_mCD6ECAD5EDABF63A1F2F496ABC4E2502F0883A6E(L_11, L_13, NULL);
		V_0 = L_14;
	}

IL_005c:
	{
		// if (useDepthCorrection)
		bool L_15 = __this->___useDepthCorrection_11;
		if (!L_15)
		{
			goto IL_00cb;
		}
	}
	{
		// ccDepthMaterial.SetTexture ("_RgbTex", rgbChannelTex);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_16 = __this->___ccDepthMaterial_17;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_17 = __this->___rgbChannelTex_19;
		NullCheck(L_16);
		Material_SetTexture_m06083C3F52EF02FFB1177901D9907314F280F9A5(L_16, _stringLiteral4B378829BC17C440269AD9500400C60EDE6B11B4, L_17, NULL);
		// ccDepthMaterial.SetTexture ("_ZCurve", zCurveTex);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_18 = __this->___ccDepthMaterial_17;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_19 = __this->___zCurveTex_21;
		NullCheck(L_18);
		Material_SetTexture_m06083C3F52EF02FFB1177901D9907314F280F9A5(L_18, _stringLiteralF109A485C102E0298CFD9813641B5C48FBF36384, L_19, NULL);
		// ccDepthMaterial.SetTexture ("_RgbDepthTex", rgbDepthChannelTex);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_20 = __this->___ccDepthMaterial_17;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_21 = __this->___rgbDepthChannelTex_20;
		NullCheck(L_20);
		Material_SetTexture_m06083C3F52EF02FFB1177901D9907314F280F9A5(L_20, _stringLiteral5FA0F386399780C14B371C5D4D0E49B5A60EC8AA, L_21, NULL);
		// ccDepthMaterial.SetFloat ("_Saturation", saturation);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_22 = __this->___ccDepthMaterial_17;
		float L_23 = __this->___saturation_22;
		NullCheck(L_22);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_22, _stringLiteralDE9FAF482EBF07DB48E259D5B8D2B04A5EF5EFA9, L_23, NULL);
		// Graphics.Blit (source, renderTarget2Use, ccDepthMaterial);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_24 = ___source0;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_25 = V_0;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_26 = __this->___ccDepthMaterial_17;
		il2cpp_codegen_runtime_class_init_inline(Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var);
		Graphics_Blit_m4055EA37BA8BAEF7EF29830F86ED13227780F4DD(L_24, L_25, L_26, NULL);
		goto IL_0104;
	}

IL_00cb:
	{
		// ccMaterial.SetTexture ("_RgbTex", rgbChannelTex);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_27 = __this->___ccMaterial_16;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_28 = __this->___rgbChannelTex_19;
		NullCheck(L_27);
		Material_SetTexture_m06083C3F52EF02FFB1177901D9907314F280F9A5(L_27, _stringLiteral4B378829BC17C440269AD9500400C60EDE6B11B4, L_28, NULL);
		// ccMaterial.SetFloat ("_Saturation", saturation);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_29 = __this->___ccMaterial_16;
		float L_30 = __this->___saturation_22;
		NullCheck(L_29);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_29, _stringLiteralDE9FAF482EBF07DB48E259D5B8D2B04A5EF5EFA9, L_30, NULL);
		// Graphics.Blit (source, renderTarget2Use, ccMaterial);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_31 = ___source0;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_32 = V_0;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_33 = __this->___ccMaterial_16;
		il2cpp_codegen_runtime_class_init_inline(Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var);
		Graphics_Blit_m4055EA37BA8BAEF7EF29830F86ED13227780F4DD(L_31, L_32, L_33, NULL);
	}

IL_0104:
	{
		// if (selectiveCc)
		bool L_34 = __this->___selectiveCc_23;
		if (!L_34)
		{
			goto IL_014b;
		}
	}
	{
		// selectiveCcMaterial.SetColor ("selColor", selectiveFromColor);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_35 = __this->___selectiveCcMaterial_18;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_36 = __this->___selectiveFromColor_24;
		NullCheck(L_35);
		Material_SetColor_mFAB32FAA44461E46FD707B34184EC080CBB3539F(L_35, _stringLiteral014264E028C02C80CFEA13DF5238C7B0CEAF8D5A, L_36, NULL);
		// selectiveCcMaterial.SetColor ("targetColor", selectiveToColor);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_37 = __this->___selectiveCcMaterial_18;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_38 = __this->___selectiveToColor_25;
		NullCheck(L_37);
		Material_SetColor_mFAB32FAA44461E46FD707B34184EC080CBB3539F(L_37, _stringLiteral26B13993D9AF58863D398B1F9A2575F0AD504CE9, L_38, NULL);
		// Graphics.Blit (renderTarget2Use, destination, selectiveCcMaterial);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_39 = V_0;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_40 = ___destination1;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_41 = __this->___selectiveCcMaterial_18;
		il2cpp_codegen_runtime_class_init_inline(Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var);
		Graphics_Blit_m4055EA37BA8BAEF7EF29830F86ED13227780F4DD(L_39, L_40, L_41, NULL);
		// RenderTexture.ReleaseTemporary (renderTarget2Use);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_42 = V_0;
		RenderTexture_ReleaseTemporary_m7D9B385460ED0D0CF7BCC033605CEBD60A1A232F(L_42, NULL);
	}

IL_014b:
	{
		// }
		return;
	}
}
// System.Void UnityStandardAssets.ImageEffects.ColorCorrectionCurves::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ColorCorrectionCurves__ctor_m21D99E53DBEE9F39828684A8C951151F34F219DE (ColorCorrectionCurves_tE85378ED43495F624056B5696F97D3D2451D6EEB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public AnimationCurve redChannel = new AnimationCurve(new Keyframe(0f,0f), new Keyframe(1f,1f));
		KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3* L_0 = (KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3*)(KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3*)SZArrayNew(KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3_il2cpp_TypeInfo_var, (uint32_t)2);
		KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3* L_1 = L_0;
		Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0 L_2;
		memset((&L_2), 0, sizeof(L_2));
		Keyframe__ctor_mECF144086B28785BE911A22C06194A9E0FBF3C34((&L_2), (0.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_1);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0)L_2);
		KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3* L_3 = L_1;
		Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0 L_4;
		memset((&L_4), 0, sizeof(L_4));
		Keyframe__ctor_mECF144086B28785BE911A22C06194A9E0FBF3C34((&L_4), (1.0f), (1.0f), /*hidden argument*/NULL);
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(1), (Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0)L_4);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_5 = (AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*)il2cpp_codegen_object_new(AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		AnimationCurve__ctor_mEABC98C03805713354D61E50D9340766BD5B717E(L_5, L_3, NULL);
		__this->___redChannel_8 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___redChannel_8), (void*)L_5);
		// public AnimationCurve greenChannel = new AnimationCurve(new Keyframe(0f,0f), new Keyframe(1f,1f));
		KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3* L_6 = (KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3*)(KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3*)SZArrayNew(KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3_il2cpp_TypeInfo_var, (uint32_t)2);
		KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3* L_7 = L_6;
		Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0 L_8;
		memset((&L_8), 0, sizeof(L_8));
		Keyframe__ctor_mECF144086B28785BE911A22C06194A9E0FBF3C34((&L_8), (0.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_7);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(0), (Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0)L_8);
		KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3* L_9 = L_7;
		Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0 L_10;
		memset((&L_10), 0, sizeof(L_10));
		Keyframe__ctor_mECF144086B28785BE911A22C06194A9E0FBF3C34((&L_10), (1.0f), (1.0f), /*hidden argument*/NULL);
		NullCheck(L_9);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(1), (Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0)L_10);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_11 = (AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*)il2cpp_codegen_object_new(AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_il2cpp_TypeInfo_var);
		NullCheck(L_11);
		AnimationCurve__ctor_mEABC98C03805713354D61E50D9340766BD5B717E(L_11, L_9, NULL);
		__this->___greenChannel_9 = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___greenChannel_9), (void*)L_11);
		// public AnimationCurve blueChannel = new AnimationCurve(new Keyframe(0f,0f), new Keyframe(1f,1f));
		KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3* L_12 = (KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3*)(KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3*)SZArrayNew(KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3_il2cpp_TypeInfo_var, (uint32_t)2);
		KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3* L_13 = L_12;
		Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0 L_14;
		memset((&L_14), 0, sizeof(L_14));
		Keyframe__ctor_mECF144086B28785BE911A22C06194A9E0FBF3C34((&L_14), (0.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_13);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(0), (Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0)L_14);
		KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3* L_15 = L_13;
		Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0 L_16;
		memset((&L_16), 0, sizeof(L_16));
		Keyframe__ctor_mECF144086B28785BE911A22C06194A9E0FBF3C34((&L_16), (1.0f), (1.0f), /*hidden argument*/NULL);
		NullCheck(L_15);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(1), (Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0)L_16);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_17 = (AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*)il2cpp_codegen_object_new(AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_il2cpp_TypeInfo_var);
		NullCheck(L_17);
		AnimationCurve__ctor_mEABC98C03805713354D61E50D9340766BD5B717E(L_17, L_15, NULL);
		__this->___blueChannel_10 = L_17;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___blueChannel_10), (void*)L_17);
		// public AnimationCurve zCurve = new AnimationCurve(new Keyframe(0f,0f), new Keyframe(1f,1f));
		KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3* L_18 = (KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3*)(KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3*)SZArrayNew(KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3_il2cpp_TypeInfo_var, (uint32_t)2);
		KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3* L_19 = L_18;
		Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0 L_20;
		memset((&L_20), 0, sizeof(L_20));
		Keyframe__ctor_mECF144086B28785BE911A22C06194A9E0FBF3C34((&L_20), (0.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_19);
		(L_19)->SetAt(static_cast<il2cpp_array_size_t>(0), (Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0)L_20);
		KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3* L_21 = L_19;
		Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0 L_22;
		memset((&L_22), 0, sizeof(L_22));
		Keyframe__ctor_mECF144086B28785BE911A22C06194A9E0FBF3C34((&L_22), (1.0f), (1.0f), /*hidden argument*/NULL);
		NullCheck(L_21);
		(L_21)->SetAt(static_cast<il2cpp_array_size_t>(1), (Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0)L_22);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_23 = (AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*)il2cpp_codegen_object_new(AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_il2cpp_TypeInfo_var);
		NullCheck(L_23);
		AnimationCurve__ctor_mEABC98C03805713354D61E50D9340766BD5B717E(L_23, L_21, NULL);
		__this->___zCurve_12 = L_23;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___zCurve_12), (void*)L_23);
		// public AnimationCurve depthRedChannel = new AnimationCurve(new Keyframe(0f,0f), new Keyframe(1f,1f));
		KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3* L_24 = (KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3*)(KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3*)SZArrayNew(KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3_il2cpp_TypeInfo_var, (uint32_t)2);
		KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3* L_25 = L_24;
		Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0 L_26;
		memset((&L_26), 0, sizeof(L_26));
		Keyframe__ctor_mECF144086B28785BE911A22C06194A9E0FBF3C34((&L_26), (0.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_25);
		(L_25)->SetAt(static_cast<il2cpp_array_size_t>(0), (Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0)L_26);
		KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3* L_27 = L_25;
		Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0 L_28;
		memset((&L_28), 0, sizeof(L_28));
		Keyframe__ctor_mECF144086B28785BE911A22C06194A9E0FBF3C34((&L_28), (1.0f), (1.0f), /*hidden argument*/NULL);
		NullCheck(L_27);
		(L_27)->SetAt(static_cast<il2cpp_array_size_t>(1), (Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0)L_28);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_29 = (AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*)il2cpp_codegen_object_new(AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_il2cpp_TypeInfo_var);
		NullCheck(L_29);
		AnimationCurve__ctor_mEABC98C03805713354D61E50D9340766BD5B717E(L_29, L_27, NULL);
		__this->___depthRedChannel_13 = L_29;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___depthRedChannel_13), (void*)L_29);
		// public AnimationCurve depthGreenChannel = new AnimationCurve(new Keyframe(0f,0f), new Keyframe(1f,1f));
		KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3* L_30 = (KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3*)(KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3*)SZArrayNew(KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3_il2cpp_TypeInfo_var, (uint32_t)2);
		KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3* L_31 = L_30;
		Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0 L_32;
		memset((&L_32), 0, sizeof(L_32));
		Keyframe__ctor_mECF144086B28785BE911A22C06194A9E0FBF3C34((&L_32), (0.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_31);
		(L_31)->SetAt(static_cast<il2cpp_array_size_t>(0), (Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0)L_32);
		KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3* L_33 = L_31;
		Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0 L_34;
		memset((&L_34), 0, sizeof(L_34));
		Keyframe__ctor_mECF144086B28785BE911A22C06194A9E0FBF3C34((&L_34), (1.0f), (1.0f), /*hidden argument*/NULL);
		NullCheck(L_33);
		(L_33)->SetAt(static_cast<il2cpp_array_size_t>(1), (Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0)L_34);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_35 = (AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*)il2cpp_codegen_object_new(AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_il2cpp_TypeInfo_var);
		NullCheck(L_35);
		AnimationCurve__ctor_mEABC98C03805713354D61E50D9340766BD5B717E(L_35, L_33, NULL);
		__this->___depthGreenChannel_14 = L_35;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___depthGreenChannel_14), (void*)L_35);
		// public AnimationCurve depthBlueChannel = new AnimationCurve(new Keyframe(0f,0f), new Keyframe(1f,1f));
		KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3* L_36 = (KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3*)(KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3*)SZArrayNew(KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3_il2cpp_TypeInfo_var, (uint32_t)2);
		KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3* L_37 = L_36;
		Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0 L_38;
		memset((&L_38), 0, sizeof(L_38));
		Keyframe__ctor_mECF144086B28785BE911A22C06194A9E0FBF3C34((&L_38), (0.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_37);
		(L_37)->SetAt(static_cast<il2cpp_array_size_t>(0), (Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0)L_38);
		KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3* L_39 = L_37;
		Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0 L_40;
		memset((&L_40), 0, sizeof(L_40));
		Keyframe__ctor_mECF144086B28785BE911A22C06194A9E0FBF3C34((&L_40), (1.0f), (1.0f), /*hidden argument*/NULL);
		NullCheck(L_39);
		(L_39)->SetAt(static_cast<il2cpp_array_size_t>(1), (Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0)L_40);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_41 = (AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*)il2cpp_codegen_object_new(AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_il2cpp_TypeInfo_var);
		NullCheck(L_41);
		AnimationCurve__ctor_mEABC98C03805713354D61E50D9340766BD5B717E(L_41, L_39, NULL);
		__this->___depthBlueChannel_15 = L_41;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___depthBlueChannel_15), (void*)L_41);
		// public float saturation = 1.0f;
		__this->___saturation_22 = (1.0f);
		// public Color selectiveFromColor = Color.white;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_42;
		L_42 = Color_get_white_m28BB6E19F27D4EE6858D3021A44F62BC74E20C43_inline(NULL);
		__this->___selectiveFromColor_24 = L_42;
		// public Color selectiveToColor = Color.white;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_43;
		L_43 = Color_get_white_m28BB6E19F27D4EE6858D3021A44F62BC74E20C43_inline(NULL);
		__this->___selectiveToColor_25 = L_43;
		// public bool  updateTextures = true;
		__this->___updateTextures_27 = (bool)1;
		// private bool  updateTexturesOnStartup = true;
		__this->___updateTexturesOnStartup_31 = (bool)1;
		PostEffectsBase__ctor_m4EE3CA780BAAFF694007DD15EDF5CFA7448DB7DF(__this, NULL);
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
// UnityEngine.Material UnityStandardAssets.ImageEffects.PostEffectsBase::CheckShaderAndCreateMaterial(UnityEngine.Shader,UnityEngine.Material)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* PostEffectsBase_CheckShaderAndCreateMaterial_m9F3512FEF659B04E086E2EC154E789D67401D91A (PostEffectsBase_t68F9A09F9CCB0B3DF158A27640081D0DFB22FD24* __this, Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* ___s0, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m2Create1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m5F62EE992DBCC5323267265794235C9EEE07997B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral46FDB78170F0875B7786D0DF6CEC4C315A44B763);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8AD58CDB5A877779756FB284EF557ED8EC4267E4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAD24B96FEF7F6BC453A4D5E2575831BC289660D8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC106589373683AEAB4EA765F77169BDAEB4DC540);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!s){
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_0 = ___s0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_0, NULL);
		if (L_1)
		{
			goto IL_0026;
		}
	}
	{
		// Debug.Log("Missing shader in " + ToString ());
		String_t* L_2;
		L_2 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, __this);
		String_t* L_3;
		L_3 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteral8AD58CDB5A877779756FB284EF557ED8EC4267E4, L_2, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(L_3, NULL);
		// enabled = false;
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(__this, (bool)0, NULL);
		// return null;
		return (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3*)NULL;
	}

IL_0026:
	{
		// if (s.isSupported && m2Create && m2Create.shader == s)
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_4 = ___s0;
		NullCheck(L_4);
		bool L_5;
		L_5 = Shader_get_isSupported_m21C3D0F1819054101DFE0C0C062A24464FA5CAE5(L_4, NULL);
		if (!L_5)
		{
			goto IL_0046;
		}
	}
	{
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_6 = ___m2Create1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_7;
		L_7 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_6, NULL);
		if (!L_7)
		{
			goto IL_0046;
		}
	}
	{
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_8 = ___m2Create1;
		NullCheck(L_8);
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_9;
		L_9 = Material_get_shader_m8B0C11AE6F2AD7DE30AF52D3195EB716F7A71983(L_8, NULL);
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_10 = ___s0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_11;
		L_11 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_9, L_10, NULL);
		if (!L_11)
		{
			goto IL_0046;
		}
	}
	{
		// return m2Create;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_12 = ___m2Create1;
		return L_12;
	}

IL_0046:
	{
		// if (!s.isSupported){
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_13 = ___s0;
		NullCheck(L_13);
		bool L_14;
		L_14 = Shader_get_isSupported_m21C3D0F1819054101DFE0C0C062A24464FA5CAE5(L_13, NULL);
		if (L_14)
		{
			goto IL_0090;
		}
	}
	{
		// NotSupported ();
		PostEffectsBase_NotSupported_mC2F7B25B622DE7BD92B7919E6D53755D9FA66169(__this, NULL);
		// Debug.Log("The shader " + s.ToString() + " on effect "+ToString()+" is not supported on this platform!");
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_15 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)5);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_16 = L_15;
		NullCheck(L_16);
		ArrayElementTypeCheck (L_16, _stringLiteralC106589373683AEAB4EA765F77169BDAEB4DC540);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteralC106589373683AEAB4EA765F77169BDAEB4DC540);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_17 = L_16;
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_18 = ___s0;
		NullCheck(L_18);
		String_t* L_19;
		L_19 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_18);
		NullCheck(L_17);
		ArrayElementTypeCheck (L_17, L_19);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)L_19);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_20 = L_17;
		NullCheck(L_20);
		ArrayElementTypeCheck (L_20, _stringLiteral46FDB78170F0875B7786D0DF6CEC4C315A44B763);
		(L_20)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral46FDB78170F0875B7786D0DF6CEC4C315A44B763);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_21 = L_20;
		String_t* L_22;
		L_22 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, __this);
		NullCheck(L_21);
		ArrayElementTypeCheck (L_21, L_22);
		(L_21)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)L_22);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_23 = L_21;
		NullCheck(L_23);
		ArrayElementTypeCheck (L_23, _stringLiteralAD24B96FEF7F6BC453A4D5E2575831BC289660D8);
		(L_23)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteralAD24B96FEF7F6BC453A4D5E2575831BC289660D8);
		String_t* L_24;
		L_24 = String_Concat_m6B0734B65813C8EA093D78E5C2D16534EB6FE8C0(L_23, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(L_24, NULL);
		// return null;
		return (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3*)NULL;
	}

IL_0090:
	{
		// m2Create = new Material (s);
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_25 = ___s0;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_26 = (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3*)il2cpp_codegen_object_new(Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_il2cpp_TypeInfo_var);
		NullCheck(L_26);
		Material__ctor_m7FDF47105D66D19591BE505A0C42B0F90D88C9BF(L_26, L_25, NULL);
		___m2Create1 = L_26;
		// createdMaterials.Add (m2Create);
		List_1_t386E09F4F22DDE4D2AC41A8567FFF283C254537B* L_27 = __this->___createdMaterials_7;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_28 = ___m2Create1;
		NullCheck(L_27);
		List_1_Add_m5F62EE992DBCC5323267265794235C9EEE07997B_inline(L_27, L_28, List_1_Add_m5F62EE992DBCC5323267265794235C9EEE07997B_RuntimeMethod_var);
		// m2Create.hideFlags = HideFlags.DontSave;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_29 = ___m2Create1;
		NullCheck(L_29);
		Object_set_hideFlags_mACB8BFC903FB3B01BBD427753E791BF28B5E33D4(L_29, ((int32_t)52), NULL);
		// return m2Create;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_30 = ___m2Create1;
		return L_30;
	}
}
// UnityEngine.Material UnityStandardAssets.ImageEffects.PostEffectsBase::CreateMaterial(UnityEngine.Shader,UnityEngine.Material)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* PostEffectsBase_CreateMaterial_m1A4B82193A5C47A4A0C89033A5D8AC105D1F371F (PostEffectsBase_t68F9A09F9CCB0B3DF158A27640081D0DFB22FD24* __this, Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* ___s0, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m2Create1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m5F62EE992DBCC5323267265794235C9EEE07997B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8AD58CDB5A877779756FB284EF557ED8EC4267E4);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!s){
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_0 = ___s0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_0, NULL);
		if (L_1)
		{
			goto IL_001f;
		}
	}
	{
		// Debug.Log ("Missing shader in " + ToString ());
		String_t* L_2;
		L_2 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, __this);
		String_t* L_3;
		L_3 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteral8AD58CDB5A877779756FB284EF557ED8EC4267E4, L_2, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(L_3, NULL);
		// return null;
		return (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3*)NULL;
	}

IL_001f:
	{
		// if (m2Create && (m2Create.shader == s) && (s.isSupported))
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_4 = ___m2Create1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_4, NULL);
		if (!L_5)
		{
			goto IL_003f;
		}
	}
	{
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_6 = ___m2Create1;
		NullCheck(L_6);
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_7;
		L_7 = Material_get_shader_m8B0C11AE6F2AD7DE30AF52D3195EB716F7A71983(L_6, NULL);
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_8 = ___s0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_9;
		L_9 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_7, L_8, NULL);
		if (!L_9)
		{
			goto IL_003f;
		}
	}
	{
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_10 = ___s0;
		NullCheck(L_10);
		bool L_11;
		L_11 = Shader_get_isSupported_m21C3D0F1819054101DFE0C0C062A24464FA5CAE5(L_10, NULL);
		if (!L_11)
		{
			goto IL_003f;
		}
	}
	{
		// return m2Create;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_12 = ___m2Create1;
		return L_12;
	}

IL_003f:
	{
		// if (!s.isSupported){
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_13 = ___s0;
		NullCheck(L_13);
		bool L_14;
		L_14 = Shader_get_isSupported_m21C3D0F1819054101DFE0C0C062A24464FA5CAE5(L_13, NULL);
		if (L_14)
		{
			goto IL_0049;
		}
	}
	{
		// return null;
		return (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3*)NULL;
	}

IL_0049:
	{
		// m2Create = new Material (s);
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_15 = ___s0;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_16 = (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3*)il2cpp_codegen_object_new(Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_il2cpp_TypeInfo_var);
		NullCheck(L_16);
		Material__ctor_m7FDF47105D66D19591BE505A0C42B0F90D88C9BF(L_16, L_15, NULL);
		___m2Create1 = L_16;
		// createdMaterials.Add (m2Create);
		List_1_t386E09F4F22DDE4D2AC41A8567FFF283C254537B* L_17 = __this->___createdMaterials_7;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_18 = ___m2Create1;
		NullCheck(L_17);
		List_1_Add_m5F62EE992DBCC5323267265794235C9EEE07997B_inline(L_17, L_18, List_1_Add_m5F62EE992DBCC5323267265794235C9EEE07997B_RuntimeMethod_var);
		// m2Create.hideFlags = HideFlags.DontSave;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_19 = ___m2Create1;
		NullCheck(L_19);
		Object_set_hideFlags_mACB8BFC903FB3B01BBD427753E791BF28B5E33D4(L_19, ((int32_t)52), NULL);
		// return m2Create;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_20 = ___m2Create1;
		return L_20;
	}
}
// System.Void UnityStandardAssets.ImageEffects.PostEffectsBase::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PostEffectsBase_OnEnable_mD9B2A924C9F3F3CA0D400DD2C394194137ECD4F0 (PostEffectsBase_t68F9A09F9CCB0B3DF158A27640081D0DFB22FD24* __this, const RuntimeMethod* method) 
{
	{
		// isSupported = true;
		__this->___isSupported_6 = (bool)1;
		// }
		return;
	}
}
// System.Void UnityStandardAssets.ImageEffects.PostEffectsBase::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PostEffectsBase_OnDestroy_mBAF06832C83C813EA5938B1DA28FD68D95F149C2 (PostEffectsBase_t68F9A09F9CCB0B3DF158A27640081D0DFB22FD24* __this, const RuntimeMethod* method) 
{
	{
		// RemoveCreatedMaterials ();
		PostEffectsBase_RemoveCreatedMaterials_m76863FC7074D4111495B7A6FF69355CA4842ACD0(__this, NULL);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.ImageEffects.PostEffectsBase::RemoveCreatedMaterials()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PostEffectsBase_RemoveCreatedMaterials_m76863FC7074D4111495B7A6FF69355CA4842ACD0 (PostEffectsBase_t68F9A09F9CCB0B3DF158A27640081D0DFB22FD24* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_RemoveAt_mD461DC585ED2CF965C6FABF04A941287186E0354_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m48BBB83C5F748E6E6FF0731C3682092DEA6A7173_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m70F5CFC2DEA9332B78C5ADC0EE1CE1B7465B1456_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		goto IL_001f;
	}

IL_0002:
	{
		// Material mat = createdMaterials[0];
		List_1_t386E09F4F22DDE4D2AC41A8567FFF283C254537B* L_0 = __this->___createdMaterials_7;
		NullCheck(L_0);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_1;
		L_1 = List_1_get_Item_m70F5CFC2DEA9332B78C5ADC0EE1CE1B7465B1456(L_0, 0, List_1_get_Item_m70F5CFC2DEA9332B78C5ADC0EE1CE1B7465B1456_RuntimeMethod_var);
		// createdMaterials.RemoveAt (0);
		List_1_t386E09F4F22DDE4D2AC41A8567FFF283C254537B* L_2 = __this->___createdMaterials_7;
		NullCheck(L_2);
		List_1_RemoveAt_mD461DC585ED2CF965C6FABF04A941287186E0354(L_2, 0, List_1_RemoveAt_mD461DC585ED2CF965C6FABF04A941287186E0354_RuntimeMethod_var);
		// Destroy(mat);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mFCDAE6333522488F60597AF019EA90BB1207A5AA(L_1, NULL);
	}

IL_001f:
	{
		// while (createdMaterials.Count > 0)
		List_1_t386E09F4F22DDE4D2AC41A8567FFF283C254537B* L_3 = __this->___createdMaterials_7;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = List_1_get_Count_m48BBB83C5F748E6E6FF0731C3682092DEA6A7173_inline(L_3, List_1_get_Count_m48BBB83C5F748E6E6FF0731C3682092DEA6A7173_RuntimeMethod_var);
		if ((((int32_t)L_4) > ((int32_t)0)))
		{
			goto IL_0002;
		}
	}
	{
		// }
		return;
	}
}
// System.Boolean UnityStandardAssets.ImageEffects.PostEffectsBase::CheckSupport()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PostEffectsBase_CheckSupport_m9473BC99296E7AF85EC8E0B96B8E3CAD68B3E46E (PostEffectsBase_t68F9A09F9CCB0B3DF158A27640081D0DFB22FD24* __this, const RuntimeMethod* method) 
{
	{
		// return CheckSupport (false);
		bool L_0;
		L_0 = PostEffectsBase_CheckSupport_mD35BCE12C19A6D60AC19A0189F1EB5CD71A1303E(__this, (bool)0, NULL);
		return L_0;
	}
}
// System.Boolean UnityStandardAssets.ImageEffects.PostEffectsBase::CheckResources()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PostEffectsBase_CheckResources_m17B419D5C12B55535F36B4C3E703C3E46A36CA64 (PostEffectsBase_t68F9A09F9CCB0B3DF158A27640081D0DFB22FD24* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral38860340D6399FED72D34E843CC6D18D6E2BCF24);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE691C6599F2EFD48FF5D07CCA40BF885CA11AD70);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.LogWarning ("CheckResources () for " + ToString() + " should be overwritten.");
		String_t* L_0;
		L_0 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, __this);
		String_t* L_1;
		L_1 = String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0(_stringLiteralE691C6599F2EFD48FF5D07CCA40BF885CA11AD70, L_0, _stringLiteral38860340D6399FED72D34E843CC6D18D6E2BCF24, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_mEF15C6B17CE4E1FA7E379CDB82CE40FCD89A3F28(L_1, NULL);
		// return isSupported;
		bool L_2 = __this->___isSupported_6;
		return L_2;
	}
}
// System.Void UnityStandardAssets.ImageEffects.PostEffectsBase::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PostEffectsBase_Start_m2189DFDADA6A50171C983B2477B5BBB957E40EAD (PostEffectsBase_t68F9A09F9CCB0B3DF158A27640081D0DFB22FD24* __this, const RuntimeMethod* method) 
{
	{
		// CheckResources ();
		bool L_0;
		L_0 = VirtualFuncInvoker0< bool >::Invoke(4 /* System.Boolean UnityStandardAssets.ImageEffects.PostEffectsBase::CheckResources() */, __this);
		// }
		return;
	}
}
// System.Boolean UnityStandardAssets.ImageEffects.PostEffectsBase::CheckSupport(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PostEffectsBase_CheckSupport_mD35BCE12C19A6D60AC19A0189F1EB5CD71A1303E (PostEffectsBase_t68F9A09F9CCB0B3DF158A27640081D0DFB22FD24* __this, bool ___needDepth0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m64AC6C06DD93C5FB249091FEC84FA8475457CCC4_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	PostEffectsBase_t68F9A09F9CCB0B3DF158A27640081D0DFB22FD24* G_B2_0 = NULL;
	PostEffectsBase_t68F9A09F9CCB0B3DF158A27640081D0DFB22FD24* G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	PostEffectsBase_t68F9A09F9CCB0B3DF158A27640081D0DFB22FD24* G_B3_1 = NULL;
	{
		// isSupported = true;
		__this->___isSupported_6 = (bool)1;
		// supportHDRTextures = SystemInfo.SupportsRenderTextureFormat(RenderTextureFormat.ARGBHalf);
		bool L_0;
		L_0 = SystemInfo_SupportsRenderTextureFormat_mFF17D2CC50B98C7859CE0536524C612965ACF763(2, NULL);
		__this->___supportHDRTextures_4 = L_0;
		// supportDX11 = SystemInfo.graphicsShaderLevel >= 50 && SystemInfo.supportsComputeShaders;
		int32_t L_1;
		L_1 = SystemInfo_get_graphicsShaderLevel_mA9BA383B643FD022F8AFAF445B63B6554D88D27C(NULL);
		G_B1_0 = __this;
		if ((((int32_t)L_1) < ((int32_t)((int32_t)50))))
		{
			G_B2_0 = __this;
			goto IL_0024;
		}
	}
	{
		bool L_2;
		L_2 = SystemInfo_get_supportsComputeShaders_m66B7AF4AEC69D4819C794DDF8D2D800DAB946F3C(NULL);
		G_B3_0 = ((int32_t)(L_2));
		G_B3_1 = G_B1_0;
		goto IL_0025;
	}

IL_0024:
	{
		G_B3_0 = 0;
		G_B3_1 = G_B2_0;
	}

IL_0025:
	{
		NullCheck(G_B3_1);
		G_B3_1->___supportDX11_5 = (bool)G_B3_0;
		// if (!SystemInfo.supportsImageEffects){
		bool L_3;
		L_3 = SystemInfo_get_supportsImageEffects_m42EC2773D0A8757B5D0F12080F999807F778668A(NULL);
		if (L_3)
		{
			goto IL_0039;
		}
	}
	{
		// NotSupported ();
		PostEffectsBase_NotSupported_mC2F7B25B622DE7BD92B7919E6D53755D9FA66169(__this, NULL);
		// return false;
		return (bool)0;
	}

IL_0039:
	{
		// if (needDepth && !SystemInfo.SupportsRenderTextureFormat (RenderTextureFormat.Depth)){
		bool L_4 = ___needDepth0;
		if (!L_4)
		{
			goto IL_004c;
		}
	}
	{
		bool L_5;
		L_5 = SystemInfo_SupportsRenderTextureFormat_mFF17D2CC50B98C7859CE0536524C612965ACF763(1, NULL);
		if (L_5)
		{
			goto IL_004c;
		}
	}
	{
		// NotSupported ();
		PostEffectsBase_NotSupported_mC2F7B25B622DE7BD92B7919E6D53755D9FA66169(__this, NULL);
		// return false;
		return (bool)0;
	}

IL_004c:
	{
		// if (needDepth)
		bool L_6 = ___needDepth0;
		if (!L_6)
		{
			goto IL_0062;
		}
	}
	{
		// GetComponent<Camera>().depthTextureMode |= DepthTextureMode.Depth;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_7;
		L_7 = Component_GetComponent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m64AC6C06DD93C5FB249091FEC84FA8475457CCC4(__this, Component_GetComponent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m64AC6C06DD93C5FB249091FEC84FA8475457CCC4_RuntimeMethod_var);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_8 = L_7;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = Camera_get_depthTextureMode_m998CDEBC055FE2A910F3B650585ADE3E2BB141EE(L_8, NULL);
		NullCheck(L_8);
		Camera_set_depthTextureMode_mE722389E4DF8B3DF7F6100DB142E4DBAF698F6BF(L_8, ((int32_t)((int32_t)L_9|1)), NULL);
	}

IL_0062:
	{
		// return true;
		return (bool)1;
	}
}
// System.Boolean UnityStandardAssets.ImageEffects.PostEffectsBase::CheckSupport(System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PostEffectsBase_CheckSupport_m3EA640722B1862B4ECEC88C2939F783878055E6C (PostEffectsBase_t68F9A09F9CCB0B3DF158A27640081D0DFB22FD24* __this, bool ___needDepth0, bool ___needHdr1, const RuntimeMethod* method) 
{
	{
		// if (!CheckSupport(needDepth))
		bool L_0 = ___needDepth0;
		bool L_1;
		L_1 = PostEffectsBase_CheckSupport_mD35BCE12C19A6D60AC19A0189F1EB5CD71A1303E(__this, L_0, NULL);
		if (L_1)
		{
			goto IL_000b;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_000b:
	{
		// if (needHdr && !supportHDRTextures)
		bool L_2 = ___needHdr1;
		if (!L_2)
		{
			goto IL_001e;
		}
	}
	{
		bool L_3 = __this->___supportHDRTextures_4;
		if (L_3)
		{
			goto IL_001e;
		}
	}
	{
		// NotSupported ();
		PostEffectsBase_NotSupported_mC2F7B25B622DE7BD92B7919E6D53755D9FA66169(__this, NULL);
		// return false;
		return (bool)0;
	}

IL_001e:
	{
		// return true;
		return (bool)1;
	}
}
// System.Boolean UnityStandardAssets.ImageEffects.PostEffectsBase::Dx11Support()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PostEffectsBase_Dx11Support_m5DB90C5559711290CAE9BA007CA929E5258E4022 (PostEffectsBase_t68F9A09F9CCB0B3DF158A27640081D0DFB22FD24* __this, const RuntimeMethod* method) 
{
	{
		// return supportDX11;
		bool L_0 = __this->___supportDX11_5;
		return L_0;
	}
}
// System.Void UnityStandardAssets.ImageEffects.PostEffectsBase::ReportAutoDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PostEffectsBase_ReportAutoDisable_mFBFE9B4AF859872DA6F4FCAE254F92912B9B6000 (PostEffectsBase_t68F9A09F9CCB0B3DF158A27640081D0DFB22FD24* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral26E519C4459C9C2AE04CACDA4DCF6450F759B33B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBC80DA7614408087FE75EA6806A9CBE62109EF15);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.LogWarning ("The image effect " + ToString() + " has been disabled as it's not supported on the current platform.");
		String_t* L_0;
		L_0 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, __this);
		String_t* L_1;
		L_1 = String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0(_stringLiteralBC80DA7614408087FE75EA6806A9CBE62109EF15, L_0, _stringLiteral26E519C4459C9C2AE04CACDA4DCF6450F759B33B, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_mEF15C6B17CE4E1FA7E379CDB82CE40FCD89A3F28(L_1, NULL);
		// }
		return;
	}
}
// System.Boolean UnityStandardAssets.ImageEffects.PostEffectsBase::CheckShader(UnityEngine.Shader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PostEffectsBase_CheckShader_m7B232EA7F558C2595C46C1D2783EBB9D61E544CE (PostEffectsBase_t68F9A09F9CCB0B3DF158A27640081D0DFB22FD24* __this, Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* ___s0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral46FDB78170F0875B7786D0DF6CEC4C315A44B763);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC106589373683AEAB4EA765F77169BDAEB4DC540);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDCCF60D13A2F5176335F2A450A37F1B544DA4C96);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log("The shader " + s.ToString () + " on effect "+ ToString () + " is not part of the Unity 3.2+ effects suite anymore. For best performance and quality, please ensure you are using the latest Standard Assets Image Effects (Pro only) package.");
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)5);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_1 = L_0;
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, _stringLiteralC106589373683AEAB4EA765F77169BDAEB4DC540);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteralC106589373683AEAB4EA765F77169BDAEB4DC540);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_2 = L_1;
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_3 = ___s0;
		NullCheck(L_3);
		String_t* L_4;
		L_4 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_3);
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_4);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)L_4);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_5 = L_2;
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, _stringLiteral46FDB78170F0875B7786D0DF6CEC4C315A44B763);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral46FDB78170F0875B7786D0DF6CEC4C315A44B763);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_6 = L_5;
		String_t* L_7;
		L_7 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, __this);
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, L_7);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)L_7);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_8 = L_6;
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, _stringLiteralDCCF60D13A2F5176335F2A450A37F1B544DA4C96);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteralDCCF60D13A2F5176335F2A450A37F1B544DA4C96);
		String_t* L_9;
		L_9 = String_Concat_m6B0734B65813C8EA093D78E5C2D16534EB6FE8C0(L_8, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(L_9, NULL);
		// if (!s.isSupported)
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_10 = ___s0;
		NullCheck(L_10);
		bool L_11;
		L_11 = Shader_get_isSupported_m21C3D0F1819054101DFE0C0C062A24464FA5CAE5(L_10, NULL);
		if (L_11)
		{
			goto IL_004a;
		}
	}
	{
		// NotSupported ();
		PostEffectsBase_NotSupported_mC2F7B25B622DE7BD92B7919E6D53755D9FA66169(__this, NULL);
		// return false;
		return (bool)0;
	}

IL_004a:
	{
		// return false;
		return (bool)0;
	}
}
// System.Void UnityStandardAssets.ImageEffects.PostEffectsBase::NotSupported()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PostEffectsBase_NotSupported_mC2F7B25B622DE7BD92B7919E6D53755D9FA66169 (PostEffectsBase_t68F9A09F9CCB0B3DF158A27640081D0DFB22FD24* __this, const RuntimeMethod* method) 
{
	{
		// enabled = false;
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(__this, (bool)0, NULL);
		// isSupported = false;
		__this->___isSupported_6 = (bool)0;
		// return;
		return;
	}
}
// System.Void UnityStandardAssets.ImageEffects.PostEffectsBase::DrawBorder(UnityEngine.RenderTexture,UnityEngine.Material)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PostEffectsBase_DrawBorder_mA19B9794EF79DE361BFFBAA78AA84FA6F1AE4BF0 (PostEffectsBase_t68F9A09F9CCB0B3DF158A27640081D0DFB22FD24* __this, RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___dest0, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material1, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	bool V_3 = false;
	int32_t V_4 = 0;
	float V_5 = 0.0f;
	float V_6 = 0.0f;
	{
		// RenderTexture.active = dest;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_0 = ___dest0;
		RenderTexture_set_active_m045EA53D62FBF79693265E33D14D8E0E8151A37E(L_0, NULL);
		// bool  invertY = true; // source.texelSize.y < 0.0ff;
		V_3 = (bool)1;
		// GL.PushMatrix();
		GL_PushMatrix_m16E696D17AE7C402C63C1C9068E5405C4B37C16C(NULL);
		// GL.LoadOrtho();
		GL_LoadOrtho_m0690AE9736A807C9D662FDB9D9A58CC5D6ECA510(NULL);
		// for (int i = 0; i < material.passCount; i++)
		V_4 = 0;
		goto IL_027d;
	}

IL_001a:
	{
		// material.SetPass(i);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_1 = ___material1;
		int32_t L_2 = V_4;
		NullCheck(L_1);
		bool L_3;
		L_3 = Material_SetPass_mBB03542DFF4FAEADFCED332009F9D61B6DED75FE(L_1, L_2, NULL);
		// if (invertY)
		bool L_4 = V_3;
		if (!L_4)
		{
			goto IL_0036;
		}
	}
	{
		// y1_ = 1.0f; y2_ = 0.0f;
		V_5 = (1.0f);
		// y1_ = 1.0f; y2_ = 0.0f;
		V_6 = (0.0f);
		goto IL_0044;
	}

IL_0036:
	{
		// y1_ = 0.0f; y2_ = 1.0f;
		V_5 = (0.0f);
		// y1_ = 0.0f; y2_ = 1.0f;
		V_6 = (1.0f);
	}

IL_0044:
	{
		// x1 = 0.0f;
		// x2 = 0.0f + 1.0f/(dest.width*1.0f);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_5 = ___dest0;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = VirtualFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_5);
		V_0 = ((float)il2cpp_codegen_add((0.0f), ((float)((1.0f)/((float)il2cpp_codegen_multiply(((float)L_6), (1.0f)))))));
		// y1 = 0.0f;
		V_1 = (0.0f);
		// y2 = 1.0f;
		V_2 = (1.0f);
		// GL.Begin(GL.QUADS);
		GL_Begin_m484E517466FBE5D4AE78DAC608E403159A57BD10(7, NULL);
		// GL.TexCoord2(0.0f, y1_); GL.Vertex3(x1, y1, 0.1f);
		float L_7 = V_5;
		GL_TexCoord2_m53885A6C83E3B67A8B06D30D595267BC07231339((0.0f), L_7, NULL);
		// GL.TexCoord2(0.0f, y1_); GL.Vertex3(x1, y1, 0.1f);
		float L_8 = (0.0f);
		float L_9 = V_1;
		GL_Vertex3_m9FFEDAB32CC9A54F1BF7572D0CE856AE41A6473F(L_8, L_9, (0.100000001f), NULL);
		// GL.TexCoord2(1.0f, y1_); GL.Vertex3(x2, y1, 0.1f);
		float L_10 = V_5;
		GL_TexCoord2_m53885A6C83E3B67A8B06D30D595267BC07231339((1.0f), L_10, NULL);
		// GL.TexCoord2(1.0f, y1_); GL.Vertex3(x2, y1, 0.1f);
		float L_11 = V_0;
		float L_12 = V_1;
		GL_Vertex3_m9FFEDAB32CC9A54F1BF7572D0CE856AE41A6473F(L_11, L_12, (0.100000001f), NULL);
		// GL.TexCoord2(1.0f, y2_); GL.Vertex3(x2, y2, 0.1f);
		float L_13 = V_6;
		GL_TexCoord2_m53885A6C83E3B67A8B06D30D595267BC07231339((1.0f), L_13, NULL);
		// GL.TexCoord2(1.0f, y2_); GL.Vertex3(x2, y2, 0.1f);
		float L_14 = V_0;
		float L_15 = V_2;
		GL_Vertex3_m9FFEDAB32CC9A54F1BF7572D0CE856AE41A6473F(L_14, L_15, (0.100000001f), NULL);
		// GL.TexCoord2(0.0f, y2_); GL.Vertex3(x1, y2, 0.1f);
		float L_16 = V_6;
		GL_TexCoord2_m53885A6C83E3B67A8B06D30D595267BC07231339((0.0f), L_16, NULL);
		// GL.TexCoord2(0.0f, y2_); GL.Vertex3(x1, y2, 0.1f);
		float L_17 = V_2;
		GL_Vertex3_m9FFEDAB32CC9A54F1BF7572D0CE856AE41A6473F(L_8, L_17, (0.100000001f), NULL);
		// x1 = 1.0f - 1.0f/(dest.width*1.0f);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_18 = ___dest0;
		NullCheck(L_18);
		int32_t L_19;
		L_19 = VirtualFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_18);
		// x2 = 1.0f;
		V_0 = (1.0f);
		// y1 = 0.0f;
		V_1 = (0.0f);
		// y2 = 1.0f;
		V_2 = (1.0f);
		// GL.TexCoord2(0.0f, y1_); GL.Vertex3(x1, y1, 0.1f);
		float L_20 = V_5;
		GL_TexCoord2_m53885A6C83E3B67A8B06D30D595267BC07231339((0.0f), L_20, NULL);
		// GL.TexCoord2(0.0f, y1_); GL.Vertex3(x1, y1, 0.1f);
		float L_21 = ((float)il2cpp_codegen_subtract((1.0f), ((float)((1.0f)/((float)il2cpp_codegen_multiply(((float)L_19), (1.0f)))))));
		float L_22 = V_1;
		GL_Vertex3_m9FFEDAB32CC9A54F1BF7572D0CE856AE41A6473F(L_21, L_22, (0.100000001f), NULL);
		// GL.TexCoord2(1.0f, y1_); GL.Vertex3(x2, y1, 0.1f);
		float L_23 = V_5;
		GL_TexCoord2_m53885A6C83E3B67A8B06D30D595267BC07231339((1.0f), L_23, NULL);
		// GL.TexCoord2(1.0f, y1_); GL.Vertex3(x2, y1, 0.1f);
		float L_24 = V_0;
		float L_25 = V_1;
		GL_Vertex3_m9FFEDAB32CC9A54F1BF7572D0CE856AE41A6473F(L_24, L_25, (0.100000001f), NULL);
		// GL.TexCoord2(1.0f, y2_); GL.Vertex3(x2, y2, 0.1f);
		float L_26 = V_6;
		GL_TexCoord2_m53885A6C83E3B67A8B06D30D595267BC07231339((1.0f), L_26, NULL);
		// GL.TexCoord2(1.0f, y2_); GL.Vertex3(x2, y2, 0.1f);
		float L_27 = V_0;
		float L_28 = V_2;
		GL_Vertex3_m9FFEDAB32CC9A54F1BF7572D0CE856AE41A6473F(L_27, L_28, (0.100000001f), NULL);
		// GL.TexCoord2(0.0f, y2_); GL.Vertex3(x1, y2, 0.1f);
		float L_29 = V_6;
		GL_TexCoord2_m53885A6C83E3B67A8B06D30D595267BC07231339((0.0f), L_29, NULL);
		// GL.TexCoord2(0.0f, y2_); GL.Vertex3(x1, y2, 0.1f);
		float L_30 = V_2;
		GL_Vertex3_m9FFEDAB32CC9A54F1BF7572D0CE856AE41A6473F(L_21, L_30, (0.100000001f), NULL);
		// x1 = 0.0f;
		// x2 = 1.0f;
		V_0 = (1.0f);
		// y1 = 0.0f;
		V_1 = (0.0f);
		// y2 = 0.0f + 1.0f/(dest.height*1.0f);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_31 = ___dest0;
		NullCheck(L_31);
		int32_t L_32;
		L_32 = VirtualFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Texture::get_height() */, L_31);
		V_2 = ((float)il2cpp_codegen_add((0.0f), ((float)((1.0f)/((float)il2cpp_codegen_multiply(((float)L_32), (1.0f)))))));
		// GL.TexCoord2(0.0f, y1_); GL.Vertex3(x1, y1, 0.1f);
		float L_33 = V_5;
		GL_TexCoord2_m53885A6C83E3B67A8B06D30D595267BC07231339((0.0f), L_33, NULL);
		// GL.TexCoord2(0.0f, y1_); GL.Vertex3(x1, y1, 0.1f);
		float L_34 = (0.0f);
		float L_35 = V_1;
		GL_Vertex3_m9FFEDAB32CC9A54F1BF7572D0CE856AE41A6473F(L_34, L_35, (0.100000001f), NULL);
		// GL.TexCoord2(1.0f, y1_); GL.Vertex3(x2, y1, 0.1f);
		float L_36 = V_5;
		GL_TexCoord2_m53885A6C83E3B67A8B06D30D595267BC07231339((1.0f), L_36, NULL);
		// GL.TexCoord2(1.0f, y1_); GL.Vertex3(x2, y1, 0.1f);
		float L_37 = V_0;
		float L_38 = V_1;
		GL_Vertex3_m9FFEDAB32CC9A54F1BF7572D0CE856AE41A6473F(L_37, L_38, (0.100000001f), NULL);
		// GL.TexCoord2(1.0f, y2_); GL.Vertex3(x2, y2, 0.1f);
		float L_39 = V_6;
		GL_TexCoord2_m53885A6C83E3B67A8B06D30D595267BC07231339((1.0f), L_39, NULL);
		// GL.TexCoord2(1.0f, y2_); GL.Vertex3(x2, y2, 0.1f);
		float L_40 = V_0;
		float L_41 = V_2;
		GL_Vertex3_m9FFEDAB32CC9A54F1BF7572D0CE856AE41A6473F(L_40, L_41, (0.100000001f), NULL);
		// GL.TexCoord2(0.0f, y2_); GL.Vertex3(x1, y2, 0.1f);
		float L_42 = V_6;
		GL_TexCoord2_m53885A6C83E3B67A8B06D30D595267BC07231339((0.0f), L_42, NULL);
		// GL.TexCoord2(0.0f, y2_); GL.Vertex3(x1, y2, 0.1f);
		float L_43 = V_2;
		GL_Vertex3_m9FFEDAB32CC9A54F1BF7572D0CE856AE41A6473F(L_34, L_43, (0.100000001f), NULL);
		// x1 = 0.0f;
		// x2 = 1.0f;
		V_0 = (1.0f);
		// y1 = 1.0f - 1.0f/(dest.height*1.0f);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_44 = ___dest0;
		NullCheck(L_44);
		int32_t L_45;
		L_45 = VirtualFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Texture::get_height() */, L_44);
		V_1 = ((float)il2cpp_codegen_subtract((1.0f), ((float)((1.0f)/((float)il2cpp_codegen_multiply(((float)L_45), (1.0f)))))));
		// y2 = 1.0f;
		V_2 = (1.0f);
		// GL.TexCoord2(0.0f, y1_); GL.Vertex3(x1, y1, 0.1f);
		float L_46 = V_5;
		GL_TexCoord2_m53885A6C83E3B67A8B06D30D595267BC07231339((0.0f), L_46, NULL);
		// GL.TexCoord2(0.0f, y1_); GL.Vertex3(x1, y1, 0.1f);
		float L_47 = (0.0f);
		float L_48 = V_1;
		GL_Vertex3_m9FFEDAB32CC9A54F1BF7572D0CE856AE41A6473F(L_47, L_48, (0.100000001f), NULL);
		// GL.TexCoord2(1.0f, y1_); GL.Vertex3(x2, y1, 0.1f);
		float L_49 = V_5;
		GL_TexCoord2_m53885A6C83E3B67A8B06D30D595267BC07231339((1.0f), L_49, NULL);
		// GL.TexCoord2(1.0f, y1_); GL.Vertex3(x2, y1, 0.1f);
		float L_50 = V_0;
		float L_51 = V_1;
		GL_Vertex3_m9FFEDAB32CC9A54F1BF7572D0CE856AE41A6473F(L_50, L_51, (0.100000001f), NULL);
		// GL.TexCoord2(1.0f, y2_); GL.Vertex3(x2, y2, 0.1f);
		float L_52 = V_6;
		GL_TexCoord2_m53885A6C83E3B67A8B06D30D595267BC07231339((1.0f), L_52, NULL);
		// GL.TexCoord2(1.0f, y2_); GL.Vertex3(x2, y2, 0.1f);
		float L_53 = V_0;
		float L_54 = V_2;
		GL_Vertex3_m9FFEDAB32CC9A54F1BF7572D0CE856AE41A6473F(L_53, L_54, (0.100000001f), NULL);
		// GL.TexCoord2(0.0f, y2_); GL.Vertex3(x1, y2, 0.1f);
		float L_55 = V_6;
		GL_TexCoord2_m53885A6C83E3B67A8B06D30D595267BC07231339((0.0f), L_55, NULL);
		// GL.TexCoord2(0.0f, y2_); GL.Vertex3(x1, y2, 0.1f);
		float L_56 = V_2;
		GL_Vertex3_m9FFEDAB32CC9A54F1BF7572D0CE856AE41A6473F(L_47, L_56, (0.100000001f), NULL);
		// GL.End();
		GL_End_m804EE4091F69FC2F6B764371D327CFCB28884550(NULL);
		// for (int i = 0; i < material.passCount; i++)
		int32_t L_57 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_57, 1));
	}

IL_027d:
	{
		// for (int i = 0; i < material.passCount; i++)
		int32_t L_58 = V_4;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_59 = ___material1;
		NullCheck(L_59);
		int32_t L_60;
		L_60 = Material_get_passCount_m7BA071AFFA34DC3E49B56A16CB8B098566BDE765(L_59, NULL);
		if ((((int32_t)L_58) < ((int32_t)L_60)))
		{
			goto IL_001a;
		}
	}
	{
		// GL.PopMatrix();
		GL_PopMatrix_m4AF6773C7BF85E8EEEC5CF36D5AFCCAC0FA34531(NULL);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.ImageEffects.PostEffectsBase::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PostEffectsBase__ctor_m4EE3CA780BAAFF694007DD15EDF5CFA7448DB7DF (PostEffectsBase_t68F9A09F9CCB0B3DF158A27640081D0DFB22FD24* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m38500C20418699AEC04B1946434E06EC96FB4B1C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t386E09F4F22DDE4D2AC41A8567FFF283C254537B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// protected bool  supportHDRTextures = true;
		__this->___supportHDRTextures_4 = (bool)1;
		// protected bool  isSupported = true;
		__this->___isSupported_6 = (bool)1;
		// private List<Material> createdMaterials = new List<Material> ();
		List_1_t386E09F4F22DDE4D2AC41A8567FFF283C254537B* L_0 = (List_1_t386E09F4F22DDE4D2AC41A8567FFF283C254537B*)il2cpp_codegen_object_new(List_1_t386E09F4F22DDE4D2AC41A8567FFF283C254537B_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_m38500C20418699AEC04B1946434E06EC96FB4B1C(L_0, List_1__ctor_m38500C20418699AEC04B1946434E06EC96FB4B1C_RuntimeMethod_var);
		__this->___createdMaterials_7 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___createdMaterials_7), (void*)L_0);
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
// System.Void UnityStandardAssets.ImageEffects.PostEffectsHelper::OnRenderImage(UnityEngine.RenderTexture,UnityEngine.RenderTexture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PostEffectsHelper_OnRenderImage_m6F007DC8123CC28A1802E0CD05B293B2DDC86432 (PostEffectsHelper_t12213D5AE8FCB54BDC8CF5223A513E4CF16AAC91* __this, RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___source0, RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___destination1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5EE6B65EB03371A3C0F000406E30369D6F81C2FF);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log("OnRenderImage in Helper called ...");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(_stringLiteral5EE6B65EB03371A3C0F000406E30369D6F81C2FF, NULL);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.ImageEffects.PostEffectsHelper::DrawLowLevelPlaneAlignedWithCamera(System.Single,UnityEngine.RenderTexture,UnityEngine.RenderTexture,UnityEngine.Material,UnityEngine.Camera)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PostEffectsHelper_DrawLowLevelPlaneAlignedWithCamera_mFB3B0032ADCF014FE12C88EA71AAD5D04D4C6870 (float ___dist0, RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___source1, RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___dest2, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material3, Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___cameraForProjectionMatrix4, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4B8146FB95E4F51B29DA41EB5F6D60F8FD0ECF21);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	float V_5 = 0.0f;
	float V_6 = 0.0f;
	float V_7 = 0.0f;
	float V_8 = 0.0f;
	int32_t V_9 = 0;
	float V_10 = 0.0f;
	float V_11 = 0.0f;
	{
		// RenderTexture.active = dest;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_0 = ___dest2;
		RenderTexture_set_active_m045EA53D62FBF79693265E33D14D8E0E8151A37E(L_0, NULL);
		// material.SetTexture("_MainTex", source);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_1 = ___material3;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_2 = ___source1;
		NullCheck(L_1);
		Material_SetTexture_m06083C3F52EF02FFB1177901D9907314F280F9A5(L_1, _stringLiteral4B8146FB95E4F51B29DA41EB5F6D60F8FD0ECF21, L_2, NULL);
		// bool  invertY = true; // source.texelSize.y < 0.0f;
		V_0 = (bool)1;
		// GL.PushMatrix();
		GL_PushMatrix_m16E696D17AE7C402C63C1C9068E5405C4B37C16C(NULL);
		// GL.LoadIdentity();
		GL_LoadIdentity_m77E19253C1F68D5A4064521EC490678C7BB2A64F(NULL);
		// GL.LoadProjectionMatrix(cameraForProjectionMatrix.projectionMatrix);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_3 = ___cameraForProjectionMatrix4;
		NullCheck(L_3);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_4;
		L_4 = Camera_get_projectionMatrix_m9B943EFDD6418528A055321E14F75F1511DD9B4A(L_3, NULL);
		GL_LoadProjectionMatrix_m50BB4BC12EC636964C60C0DBBC4D5777706B00E4(L_4, NULL);
		// float fovYHalfRad = cameraForProjectionMatrix.fieldOfView * 0.5f * Mathf.Deg2Rad;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_5 = ___cameraForProjectionMatrix4;
		NullCheck(L_5);
		float L_6;
		L_6 = Camera_get_fieldOfView_m9A93F17BBF89F496AE231C21817AFD1C1E833FBB(L_5, NULL);
		V_1 = ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(L_6, (0.5f))), (0.0174532924f)));
		// float cotangent = Mathf.Cos(fovYHalfRad) / Mathf.Sin(fovYHalfRad);
		float L_7 = V_1;
		float L_8;
		L_8 = cosf(L_7);
		float L_9 = V_1;
		float L_10;
		L_10 = sinf(L_9);
		V_2 = ((float)(L_8/L_10));
		// float asp = cameraForProjectionMatrix.aspect;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_11 = ___cameraForProjectionMatrix4;
		NullCheck(L_11);
		float L_12;
		L_12 = Camera_get_aspect_m48BF8820EA2D55BE0D154BC5546819FB65BE257D(L_11, NULL);
		// float x1 = asp/-cotangent;
		float L_13 = L_12;
		float L_14 = V_2;
		V_3 = ((float)(L_13/((-L_14))));
		// float x2 = asp/cotangent;
		float L_15 = V_2;
		V_4 = ((float)(L_13/L_15));
		// float y1 = 1.0f/-cotangent;
		float L_16 = V_2;
		V_5 = ((float)((1.0f)/((-L_16))));
		// float y2 = 1.0f/cotangent;
		float L_17 = V_2;
		V_6 = ((float)((1.0f)/L_17));
		// float sc = 1.0f; // magic constant (for now)
		V_7 = (1.0f);
		// x1 *= dist * sc;
		float L_18 = V_3;
		float L_19 = ___dist0;
		float L_20 = V_7;
		V_3 = ((float)il2cpp_codegen_multiply(L_18, ((float)il2cpp_codegen_multiply(L_19, L_20))));
		// x2 *= dist * sc;
		float L_21 = V_4;
		float L_22 = ___dist0;
		float L_23 = V_7;
		V_4 = ((float)il2cpp_codegen_multiply(L_21, ((float)il2cpp_codegen_multiply(L_22, L_23))));
		// y1 *= dist * sc;
		float L_24 = V_5;
		float L_25 = ___dist0;
		float L_26 = V_7;
		V_5 = ((float)il2cpp_codegen_multiply(L_24, ((float)il2cpp_codegen_multiply(L_25, L_26))));
		// y2 *= dist * sc;
		float L_27 = V_6;
		float L_28 = ___dist0;
		float L_29 = V_7;
		V_6 = ((float)il2cpp_codegen_multiply(L_27, ((float)il2cpp_codegen_multiply(L_28, L_29))));
		// float z1 = -dist;
		float L_30 = ___dist0;
		V_8 = ((-L_30));
		// for (int i = 0; i < material.passCount; i++)
		V_9 = 0;
		goto IL_0139;
	}

IL_00a4:
	{
		// material.SetPass(i);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_31 = ___material3;
		int32_t L_32 = V_9;
		NullCheck(L_31);
		bool L_33;
		L_33 = Material_SetPass_mBB03542DFF4FAEADFCED332009F9D61B6DED75FE(L_31, L_32, NULL);
		// GL.Begin(GL.QUADS);
		GL_Begin_m484E517466FBE5D4AE78DAC608E403159A57BD10(7, NULL);
		// if (invertY)
		bool L_34 = V_0;
		if (!L_34)
		{
			goto IL_00c6;
		}
	}
	{
		// y1_ = 1.0f; y2_ = 0.0f;
		V_10 = (1.0f);
		// y1_ = 1.0f; y2_ = 0.0f;
		V_11 = (0.0f);
		goto IL_00d4;
	}

IL_00c6:
	{
		// y1_ = 0.0f; y2_ = 1.0f;
		V_10 = (0.0f);
		// y1_ = 0.0f; y2_ = 1.0f;
		V_11 = (1.0f);
	}

IL_00d4:
	{
		// GL.TexCoord2(0.0f, y1_); GL.Vertex3(x1, y1, z1);
		float L_35 = V_10;
		GL_TexCoord2_m53885A6C83E3B67A8B06D30D595267BC07231339((0.0f), L_35, NULL);
		// GL.TexCoord2(0.0f, y1_); GL.Vertex3(x1, y1, z1);
		float L_36 = V_3;
		float L_37 = V_5;
		float L_38 = V_8;
		GL_Vertex3_m9FFEDAB32CC9A54F1BF7572D0CE856AE41A6473F(L_36, L_37, L_38, NULL);
		// GL.TexCoord2(1.0f, y1_); GL.Vertex3(x2, y1, z1);
		float L_39 = V_10;
		GL_TexCoord2_m53885A6C83E3B67A8B06D30D595267BC07231339((1.0f), L_39, NULL);
		// GL.TexCoord2(1.0f, y1_); GL.Vertex3(x2, y1, z1);
		float L_40 = V_4;
		float L_41 = V_5;
		float L_42 = V_8;
		GL_Vertex3_m9FFEDAB32CC9A54F1BF7572D0CE856AE41A6473F(L_40, L_41, L_42, NULL);
		// GL.TexCoord2(1.0f, y2_); GL.Vertex3(x2, y2, z1);
		float L_43 = V_11;
		GL_TexCoord2_m53885A6C83E3B67A8B06D30D595267BC07231339((1.0f), L_43, NULL);
		// GL.TexCoord2(1.0f, y2_); GL.Vertex3(x2, y2, z1);
		float L_44 = V_4;
		float L_45 = V_6;
		float L_46 = V_8;
		GL_Vertex3_m9FFEDAB32CC9A54F1BF7572D0CE856AE41A6473F(L_44, L_45, L_46, NULL);
		// GL.TexCoord2(0.0f, y2_); GL.Vertex3(x1, y2, z1);
		float L_47 = V_11;
		GL_TexCoord2_m53885A6C83E3B67A8B06D30D595267BC07231339((0.0f), L_47, NULL);
		// GL.TexCoord2(0.0f, y2_); GL.Vertex3(x1, y2, z1);
		float L_48 = V_3;
		float L_49 = V_6;
		float L_50 = V_8;
		GL_Vertex3_m9FFEDAB32CC9A54F1BF7572D0CE856AE41A6473F(L_48, L_49, L_50, NULL);
		// GL.End();
		GL_End_m804EE4091F69FC2F6B764371D327CFCB28884550(NULL);
		// for (int i = 0; i < material.passCount; i++)
		int32_t L_51 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_add(L_51, 1));
	}

IL_0139:
	{
		// for (int i = 0; i < material.passCount; i++)
		int32_t L_52 = V_9;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_53 = ___material3;
		NullCheck(L_53);
		int32_t L_54;
		L_54 = Material_get_passCount_m7BA071AFFA34DC3E49B56A16CB8B098566BDE765(L_53, NULL);
		if ((((int32_t)L_52) < ((int32_t)L_54)))
		{
			goto IL_00a4;
		}
	}
	{
		// GL.PopMatrix();
		GL_PopMatrix_m4AF6773C7BF85E8EEEC5CF36D5AFCCAC0FA34531(NULL);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.ImageEffects.PostEffectsHelper::DrawBorder(UnityEngine.RenderTexture,UnityEngine.Material)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PostEffectsHelper_DrawBorder_m3282CA6AAB504DD797CB232C2D3D9D025A3FD5E8 (RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___dest0, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material1, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	bool V_3 = false;
	int32_t V_4 = 0;
	float V_5 = 0.0f;
	float V_6 = 0.0f;
	{
		// RenderTexture.active = dest;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_0 = ___dest0;
		RenderTexture_set_active_m045EA53D62FBF79693265E33D14D8E0E8151A37E(L_0, NULL);
		// bool  invertY = true; // source.texelSize.y < 0.0ff;
		V_3 = (bool)1;
		// GL.PushMatrix();
		GL_PushMatrix_m16E696D17AE7C402C63C1C9068E5405C4B37C16C(NULL);
		// GL.LoadOrtho();
		GL_LoadOrtho_m0690AE9736A807C9D662FDB9D9A58CC5D6ECA510(NULL);
		// for (int i = 0; i < material.passCount; i++)
		V_4 = 0;
		goto IL_027d;
	}

IL_001a:
	{
		// material.SetPass(i);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_1 = ___material1;
		int32_t L_2 = V_4;
		NullCheck(L_1);
		bool L_3;
		L_3 = Material_SetPass_mBB03542DFF4FAEADFCED332009F9D61B6DED75FE(L_1, L_2, NULL);
		// if (invertY)
		bool L_4 = V_3;
		if (!L_4)
		{
			goto IL_0036;
		}
	}
	{
		// y1_ = 1.0f; y2_ = 0.0f;
		V_5 = (1.0f);
		// y1_ = 1.0f; y2_ = 0.0f;
		V_6 = (0.0f);
		goto IL_0044;
	}

IL_0036:
	{
		// y1_ = 0.0f; y2_ = 1.0f;
		V_5 = (0.0f);
		// y1_ = 0.0f; y2_ = 1.0f;
		V_6 = (1.0f);
	}

IL_0044:
	{
		// x1 = 0.0f;
		// x2 = 0.0f + 1.0f/(dest.width*1.0f);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_5 = ___dest0;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = VirtualFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_5);
		V_0 = ((float)il2cpp_codegen_add((0.0f), ((float)((1.0f)/((float)il2cpp_codegen_multiply(((float)L_6), (1.0f)))))));
		// y1 = 0.0f;
		V_1 = (0.0f);
		// y2 = 1.0f;
		V_2 = (1.0f);
		// GL.Begin(GL.QUADS);
		GL_Begin_m484E517466FBE5D4AE78DAC608E403159A57BD10(7, NULL);
		// GL.TexCoord2(0.0f, y1_); GL.Vertex3(x1, y1, 0.1f);
		float L_7 = V_5;
		GL_TexCoord2_m53885A6C83E3B67A8B06D30D595267BC07231339((0.0f), L_7, NULL);
		// GL.TexCoord2(0.0f, y1_); GL.Vertex3(x1, y1, 0.1f);
		float L_8 = (0.0f);
		float L_9 = V_1;
		GL_Vertex3_m9FFEDAB32CC9A54F1BF7572D0CE856AE41A6473F(L_8, L_9, (0.100000001f), NULL);
		// GL.TexCoord2(1.0f, y1_); GL.Vertex3(x2, y1, 0.1f);
		float L_10 = V_5;
		GL_TexCoord2_m53885A6C83E3B67A8B06D30D595267BC07231339((1.0f), L_10, NULL);
		// GL.TexCoord2(1.0f, y1_); GL.Vertex3(x2, y1, 0.1f);
		float L_11 = V_0;
		float L_12 = V_1;
		GL_Vertex3_m9FFEDAB32CC9A54F1BF7572D0CE856AE41A6473F(L_11, L_12, (0.100000001f), NULL);
		// GL.TexCoord2(1.0f, y2_); GL.Vertex3(x2, y2, 0.1f);
		float L_13 = V_6;
		GL_TexCoord2_m53885A6C83E3B67A8B06D30D595267BC07231339((1.0f), L_13, NULL);
		// GL.TexCoord2(1.0f, y2_); GL.Vertex3(x2, y2, 0.1f);
		float L_14 = V_0;
		float L_15 = V_2;
		GL_Vertex3_m9FFEDAB32CC9A54F1BF7572D0CE856AE41A6473F(L_14, L_15, (0.100000001f), NULL);
		// GL.TexCoord2(0.0f, y2_); GL.Vertex3(x1, y2, 0.1f);
		float L_16 = V_6;
		GL_TexCoord2_m53885A6C83E3B67A8B06D30D595267BC07231339((0.0f), L_16, NULL);
		// GL.TexCoord2(0.0f, y2_); GL.Vertex3(x1, y2, 0.1f);
		float L_17 = V_2;
		GL_Vertex3_m9FFEDAB32CC9A54F1BF7572D0CE856AE41A6473F(L_8, L_17, (0.100000001f), NULL);
		// x1 = 1.0f - 1.0f/(dest.width*1.0f);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_18 = ___dest0;
		NullCheck(L_18);
		int32_t L_19;
		L_19 = VirtualFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_18);
		// x2 = 1.0f;
		V_0 = (1.0f);
		// y1 = 0.0f;
		V_1 = (0.0f);
		// y2 = 1.0f;
		V_2 = (1.0f);
		// GL.TexCoord2(0.0f, y1_); GL.Vertex3(x1, y1, 0.1f);
		float L_20 = V_5;
		GL_TexCoord2_m53885A6C83E3B67A8B06D30D595267BC07231339((0.0f), L_20, NULL);
		// GL.TexCoord2(0.0f, y1_); GL.Vertex3(x1, y1, 0.1f);
		float L_21 = ((float)il2cpp_codegen_subtract((1.0f), ((float)((1.0f)/((float)il2cpp_codegen_multiply(((float)L_19), (1.0f)))))));
		float L_22 = V_1;
		GL_Vertex3_m9FFEDAB32CC9A54F1BF7572D0CE856AE41A6473F(L_21, L_22, (0.100000001f), NULL);
		// GL.TexCoord2(1.0f, y1_); GL.Vertex3(x2, y1, 0.1f);
		float L_23 = V_5;
		GL_TexCoord2_m53885A6C83E3B67A8B06D30D595267BC07231339((1.0f), L_23, NULL);
		// GL.TexCoord2(1.0f, y1_); GL.Vertex3(x2, y1, 0.1f);
		float L_24 = V_0;
		float L_25 = V_1;
		GL_Vertex3_m9FFEDAB32CC9A54F1BF7572D0CE856AE41A6473F(L_24, L_25, (0.100000001f), NULL);
		// GL.TexCoord2(1.0f, y2_); GL.Vertex3(x2, y2, 0.1f);
		float L_26 = V_6;
		GL_TexCoord2_m53885A6C83E3B67A8B06D30D595267BC07231339((1.0f), L_26, NULL);
		// GL.TexCoord2(1.0f, y2_); GL.Vertex3(x2, y2, 0.1f);
		float L_27 = V_0;
		float L_28 = V_2;
		GL_Vertex3_m9FFEDAB32CC9A54F1BF7572D0CE856AE41A6473F(L_27, L_28, (0.100000001f), NULL);
		// GL.TexCoord2(0.0f, y2_); GL.Vertex3(x1, y2, 0.1f);
		float L_29 = V_6;
		GL_TexCoord2_m53885A6C83E3B67A8B06D30D595267BC07231339((0.0f), L_29, NULL);
		// GL.TexCoord2(0.0f, y2_); GL.Vertex3(x1, y2, 0.1f);
		float L_30 = V_2;
		GL_Vertex3_m9FFEDAB32CC9A54F1BF7572D0CE856AE41A6473F(L_21, L_30, (0.100000001f), NULL);
		// x1 = 0.0f;
		// x2 = 1.0f;
		V_0 = (1.0f);
		// y1 = 0.0f;
		V_1 = (0.0f);
		// y2 = 0.0f + 1.0f/(dest.height*1.0f);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_31 = ___dest0;
		NullCheck(L_31);
		int32_t L_32;
		L_32 = VirtualFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Texture::get_height() */, L_31);
		V_2 = ((float)il2cpp_codegen_add((0.0f), ((float)((1.0f)/((float)il2cpp_codegen_multiply(((float)L_32), (1.0f)))))));
		// GL.TexCoord2(0.0f, y1_); GL.Vertex3(x1, y1, 0.1f);
		float L_33 = V_5;
		GL_TexCoord2_m53885A6C83E3B67A8B06D30D595267BC07231339((0.0f), L_33, NULL);
		// GL.TexCoord2(0.0f, y1_); GL.Vertex3(x1, y1, 0.1f);
		float L_34 = (0.0f);
		float L_35 = V_1;
		GL_Vertex3_m9FFEDAB32CC9A54F1BF7572D0CE856AE41A6473F(L_34, L_35, (0.100000001f), NULL);
		// GL.TexCoord2(1.0f, y1_); GL.Vertex3(x2, y1, 0.1f);
		float L_36 = V_5;
		GL_TexCoord2_m53885A6C83E3B67A8B06D30D595267BC07231339((1.0f), L_36, NULL);
		// GL.TexCoord2(1.0f, y1_); GL.Vertex3(x2, y1, 0.1f);
		float L_37 = V_0;
		float L_38 = V_1;
		GL_Vertex3_m9FFEDAB32CC9A54F1BF7572D0CE856AE41A6473F(L_37, L_38, (0.100000001f), NULL);
		// GL.TexCoord2(1.0f, y2_); GL.Vertex3(x2, y2, 0.1f);
		float L_39 = V_6;
		GL_TexCoord2_m53885A6C83E3B67A8B06D30D595267BC07231339((1.0f), L_39, NULL);
		// GL.TexCoord2(1.0f, y2_); GL.Vertex3(x2, y2, 0.1f);
		float L_40 = V_0;
		float L_41 = V_2;
		GL_Vertex3_m9FFEDAB32CC9A54F1BF7572D0CE856AE41A6473F(L_40, L_41, (0.100000001f), NULL);
		// GL.TexCoord2(0.0f, y2_); GL.Vertex3(x1, y2, 0.1f);
		float L_42 = V_6;
		GL_TexCoord2_m53885A6C83E3B67A8B06D30D595267BC07231339((0.0f), L_42, NULL);
		// GL.TexCoord2(0.0f, y2_); GL.Vertex3(x1, y2, 0.1f);
		float L_43 = V_2;
		GL_Vertex3_m9FFEDAB32CC9A54F1BF7572D0CE856AE41A6473F(L_34, L_43, (0.100000001f), NULL);
		// x1 = 0.0f;
		// x2 = 1.0f;
		V_0 = (1.0f);
		// y1 = 1.0f - 1.0f/(dest.height*1.0f);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_44 = ___dest0;
		NullCheck(L_44);
		int32_t L_45;
		L_45 = VirtualFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Texture::get_height() */, L_44);
		V_1 = ((float)il2cpp_codegen_subtract((1.0f), ((float)((1.0f)/((float)il2cpp_codegen_multiply(((float)L_45), (1.0f)))))));
		// y2 = 1.0f;
		V_2 = (1.0f);
		// GL.TexCoord2(0.0f, y1_); GL.Vertex3(x1, y1, 0.1f);
		float L_46 = V_5;
		GL_TexCoord2_m53885A6C83E3B67A8B06D30D595267BC07231339((0.0f), L_46, NULL);
		// GL.TexCoord2(0.0f, y1_); GL.Vertex3(x1, y1, 0.1f);
		float L_47 = (0.0f);
		float L_48 = V_1;
		GL_Vertex3_m9FFEDAB32CC9A54F1BF7572D0CE856AE41A6473F(L_47, L_48, (0.100000001f), NULL);
		// GL.TexCoord2(1.0f, y1_); GL.Vertex3(x2, y1, 0.1f);
		float L_49 = V_5;
		GL_TexCoord2_m53885A6C83E3B67A8B06D30D595267BC07231339((1.0f), L_49, NULL);
		// GL.TexCoord2(1.0f, y1_); GL.Vertex3(x2, y1, 0.1f);
		float L_50 = V_0;
		float L_51 = V_1;
		GL_Vertex3_m9FFEDAB32CC9A54F1BF7572D0CE856AE41A6473F(L_50, L_51, (0.100000001f), NULL);
		// GL.TexCoord2(1.0f, y2_); GL.Vertex3(x2, y2, 0.1f);
		float L_52 = V_6;
		GL_TexCoord2_m53885A6C83E3B67A8B06D30D595267BC07231339((1.0f), L_52, NULL);
		// GL.TexCoord2(1.0f, y2_); GL.Vertex3(x2, y2, 0.1f);
		float L_53 = V_0;
		float L_54 = V_2;
		GL_Vertex3_m9FFEDAB32CC9A54F1BF7572D0CE856AE41A6473F(L_53, L_54, (0.100000001f), NULL);
		// GL.TexCoord2(0.0f, y2_); GL.Vertex3(x1, y2, 0.1f);
		float L_55 = V_6;
		GL_TexCoord2_m53885A6C83E3B67A8B06D30D595267BC07231339((0.0f), L_55, NULL);
		// GL.TexCoord2(0.0f, y2_); GL.Vertex3(x1, y2, 0.1f);
		float L_56 = V_2;
		GL_Vertex3_m9FFEDAB32CC9A54F1BF7572D0CE856AE41A6473F(L_47, L_56, (0.100000001f), NULL);
		// GL.End();
		GL_End_m804EE4091F69FC2F6B764371D327CFCB28884550(NULL);
		// for (int i = 0; i < material.passCount; i++)
		int32_t L_57 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_57, 1));
	}

IL_027d:
	{
		// for (int i = 0; i < material.passCount; i++)
		int32_t L_58 = V_4;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_59 = ___material1;
		NullCheck(L_59);
		int32_t L_60;
		L_60 = Material_get_passCount_m7BA071AFFA34DC3E49B56A16CB8B098566BDE765(L_59, NULL);
		if ((((int32_t)L_58) < ((int32_t)L_60)))
		{
			goto IL_001a;
		}
	}
	{
		// GL.PopMatrix();
		GL_PopMatrix_m4AF6773C7BF85E8EEEC5CF36D5AFCCAC0FA34531(NULL);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.ImageEffects.PostEffectsHelper::DrawLowLevelQuad(System.Single,System.Single,System.Single,System.Single,UnityEngine.RenderTexture,UnityEngine.RenderTexture,UnityEngine.Material)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PostEffectsHelper_DrawLowLevelQuad_mEF5940A16BCBB2F6E30C2DD4FF5D3A1C972E03BE (float ___x10, float ___x21, float ___y12, float ___y23, RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___source4, RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___dest5, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material6, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4B8146FB95E4F51B29DA41EB5F6D60F8FD0ECF21);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	{
		// RenderTexture.active = dest;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_0 = ___dest5;
		RenderTexture_set_active_m045EA53D62FBF79693265E33D14D8E0E8151A37E(L_0, NULL);
		// material.SetTexture("_MainTex", source);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_1 = ___material6;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_2 = ___source4;
		NullCheck(L_1);
		Material_SetTexture_m06083C3F52EF02FFB1177901D9907314F280F9A5(L_1, _stringLiteral4B8146FB95E4F51B29DA41EB5F6D60F8FD0ECF21, L_2, NULL);
		// bool  invertY = true; // source.texelSize.y < 0.0f;
		V_0 = (bool)1;
		// GL.PushMatrix();
		GL_PushMatrix_m16E696D17AE7C402C63C1C9068E5405C4B37C16C(NULL);
		// GL.LoadOrtho();
		GL_LoadOrtho_m0690AE9736A807C9D662FDB9D9A58CC5D6ECA510(NULL);
		// for (int i = 0; i < material.passCount; i++)
		V_1 = 0;
		goto IL_00b9;
	}

IL_0028:
	{
		// material.SetPass(i);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_3 = ___material6;
		int32_t L_4 = V_1;
		NullCheck(L_3);
		bool L_5;
		L_5 = Material_SetPass_mBB03542DFF4FAEADFCED332009F9D61B6DED75FE(L_3, L_4, NULL);
		// GL.Begin(GL.QUADS);
		GL_Begin_m484E517466FBE5D4AE78DAC608E403159A57BD10(7, NULL);
		// if (invertY)
		bool L_6 = V_0;
		if (!L_6)
		{
			goto IL_0048;
		}
	}
	{
		// y1_ = 1.0f; y2_ = 0.0f;
		V_2 = (1.0f);
		// y1_ = 1.0f; y2_ = 0.0f;
		V_3 = (0.0f);
		goto IL_0054;
	}

IL_0048:
	{
		// y1_ = 0.0f; y2_ = 1.0f;
		V_2 = (0.0f);
		// y1_ = 0.0f; y2_ = 1.0f;
		V_3 = (1.0f);
	}

IL_0054:
	{
		// GL.TexCoord2(0.0f, y1_); GL.Vertex3(x1, y1, 0.1f);
		float L_7 = V_2;
		GL_TexCoord2_m53885A6C83E3B67A8B06D30D595267BC07231339((0.0f), L_7, NULL);
		// GL.TexCoord2(0.0f, y1_); GL.Vertex3(x1, y1, 0.1f);
		float L_8 = ___x10;
		float L_9 = ___y12;
		GL_Vertex3_m9FFEDAB32CC9A54F1BF7572D0CE856AE41A6473F(L_8, L_9, (0.100000001f), NULL);
		// GL.TexCoord2(1.0f, y1_); GL.Vertex3(x2, y1, 0.1f);
		float L_10 = V_2;
		GL_TexCoord2_m53885A6C83E3B67A8B06D30D595267BC07231339((1.0f), L_10, NULL);
		// GL.TexCoord2(1.0f, y1_); GL.Vertex3(x2, y1, 0.1f);
		float L_11 = ___x21;
		float L_12 = ___y12;
		GL_Vertex3_m9FFEDAB32CC9A54F1BF7572D0CE856AE41A6473F(L_11, L_12, (0.100000001f), NULL);
		// GL.TexCoord2(1.0f, y2_); GL.Vertex3(x2, y2, 0.1f);
		float L_13 = V_3;
		GL_TexCoord2_m53885A6C83E3B67A8B06D30D595267BC07231339((1.0f), L_13, NULL);
		// GL.TexCoord2(1.0f, y2_); GL.Vertex3(x2, y2, 0.1f);
		float L_14 = ___x21;
		float L_15 = ___y23;
		GL_Vertex3_m9FFEDAB32CC9A54F1BF7572D0CE856AE41A6473F(L_14, L_15, (0.100000001f), NULL);
		// GL.TexCoord2(0.0f, y2_); GL.Vertex3(x1, y2, 0.1f);
		float L_16 = V_3;
		GL_TexCoord2_m53885A6C83E3B67A8B06D30D595267BC07231339((0.0f), L_16, NULL);
		// GL.TexCoord2(0.0f, y2_); GL.Vertex3(x1, y2, 0.1f);
		float L_17 = ___x10;
		float L_18 = ___y23;
		GL_Vertex3_m9FFEDAB32CC9A54F1BF7572D0CE856AE41A6473F(L_17, L_18, (0.100000001f), NULL);
		// GL.End();
		GL_End_m804EE4091F69FC2F6B764371D327CFCB28884550(NULL);
		// for (int i = 0; i < material.passCount; i++)
		int32_t L_19 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_19, 1));
	}

IL_00b9:
	{
		// for (int i = 0; i < material.passCount; i++)
		int32_t L_20 = V_1;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_21 = ___material6;
		NullCheck(L_21);
		int32_t L_22;
		L_22 = Material_get_passCount_m7BA071AFFA34DC3E49B56A16CB8B098566BDE765(L_21, NULL);
		if ((((int32_t)L_20) < ((int32_t)L_22)))
		{
			goto IL_0028;
		}
	}
	{
		// GL.PopMatrix();
		GL_PopMatrix_m4AF6773C7BF85E8EEEC5CF36D5AFCCAC0FA34531(NULL);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.ImageEffects.PostEffectsHelper::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PostEffectsHelper__ctor_m5C779A7F29B45B27E2868CE04DFB61BAD46B5AB0 (PostEffectsHelper_t12213D5AE8FCB54BDC8CF5223A513E4CF16AAC91* __this, const RuntimeMethod* method) 
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
// System.Boolean UnityStandardAssets.ImageEffects.ScreenSpaceAmbientObscurance::CheckResources()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ScreenSpaceAmbientObscurance_CheckResources_mF8FE58E891F425F52E01BD4F2838D4EDBEB73C1B (ScreenSpaceAmbientObscurance_tE0AE3E1E85695DE5A5071FFC30B42DFE44200042* __this, const RuntimeMethod* method) 
{
	{
		// CheckSupport (true);
		bool L_0;
		L_0 = PostEffectsBase_CheckSupport_mD35BCE12C19A6D60AC19A0189F1EB5CD71A1303E(__this, (bool)1, NULL);
		// aoMaterial = CheckShaderAndCreateMaterial (aoShader, aoMaterial);
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_1 = __this->___aoShader_14;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_2 = __this->___aoMaterial_15;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_3;
		L_3 = PostEffectsBase_CheckShaderAndCreateMaterial_m9F3512FEF659B04E086E2EC154E789D67401D91A(__this, L_1, L_2, NULL);
		__this->___aoMaterial_15 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___aoMaterial_15), (void*)L_3);
		// if (!isSupported)
		bool L_4 = ((PostEffectsBase_t68F9A09F9CCB0B3DF158A27640081D0DFB22FD24*)__this)->___isSupported_6;
		if (L_4)
		{
			goto IL_002e;
		}
	}
	{
		// ReportAutoDisable ();
		PostEffectsBase_ReportAutoDisable_mFBFE9B4AF859872DA6F4FCAE254F92912B9B6000(__this, NULL);
	}

IL_002e:
	{
		// return isSupported;
		bool L_5 = ((PostEffectsBase_t68F9A09F9CCB0B3DF158A27640081D0DFB22FD24*)__this)->___isSupported_6;
		return L_5;
	}
}
// System.Void UnityStandardAssets.ImageEffects.ScreenSpaceAmbientObscurance::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScreenSpaceAmbientObscurance_OnDisable_mEF83638A871CEC8241275C14D212B07D3C98B0B6 (ScreenSpaceAmbientObscurance_tE0AE3E1E85695DE5A5071FFC30B42DFE44200042* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (aoMaterial)
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_0 = __this->___aoMaterial_15;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_0, NULL);
		if (!L_1)
		{
			goto IL_0018;
		}
	}
	{
		// DestroyImmediate (aoMaterial);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_2 = __this->___aoMaterial_15;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_DestroyImmediate_m8249CABCDF344BE3A67EE765122EBB415DC2BC57(L_2, NULL);
	}

IL_0018:
	{
		// aoMaterial = null;
		__this->___aoMaterial_15 = (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___aoMaterial_15), (void*)(Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3*)NULL);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.ImageEffects.ScreenSpaceAmbientObscurance::OnRenderImage(UnityEngine.RenderTexture,UnityEngine.RenderTexture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScreenSpaceAmbientObscurance_OnRenderImage_m5F50F470E4CDF8C877ED9CB509224486C399379E (ScreenSpaceAmbientObscurance_tE0AE3E1E85695DE5A5071FFC30B42DFE44200042* __this, RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___source0, RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___destination1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m64AC6C06DD93C5FB249091FEC84FA8475457CCC4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0EAAFAB53E130FE2ADD20070CDBD4848DC8582A9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0F78241FF6E78ADA6D1FB6DAA00F25817203ED13);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral43996BC36588CCD5051D9CC5DA131DFBF9706B48);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4E207A1E776F6188653FF9228A95BFD3A17B492E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral58C07946CE4124292F0094E3A090F13945F38CC0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAD6E56B90F7BBA5EEECD7831E48459043EBFCBB5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBB6CBCD648C07EAC90B08C00428BA435EC0272BF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE5A1D96CE41BD597A30172C890508C2BB5810152);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEC50E207386AABAE6EA569D05001E516E9CCA2E6);
		s_Il2CppMethodInitialized = true;
	}
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* V_5 = NULL;
	RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* V_6 = NULL;
	int32_t V_7 = 0;
	{
		// if (CheckResources () == false) {
		bool L_0;
		L_0 = VirtualFuncInvoker0< bool >::Invoke(4 /* System.Boolean UnityStandardAssets.ImageEffects.PostEffectsBase::CheckResources() */, __this);
		if (L_0)
		{
			goto IL_0010;
		}
	}
	{
		// Graphics.Blit (source, destination);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_1 = ___source0;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_2 = ___destination1;
		il2cpp_codegen_runtime_class_init_inline(Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var);
		Graphics_Blit_m066854D684B6042B266D306E8E012D2C6C1787BE(L_1, L_2, NULL);
		// return;
		return;
	}

IL_0010:
	{
		// Matrix4x4 P = GetComponent<Camera>().projectionMatrix;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_3;
		L_3 = Component_GetComponent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m64AC6C06DD93C5FB249091FEC84FA8475457CCC4(__this, Component_GetComponent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m64AC6C06DD93C5FB249091FEC84FA8475457CCC4_RuntimeMethod_var);
		NullCheck(L_3);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_4;
		L_4 = Camera_get_projectionMatrix_m9B943EFDD6418528A055321E14F75F1511DD9B4A(L_3, NULL);
		V_0 = L_4;
		// var invP= P.inverse;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_5;
		L_5 = Matrix4x4_get_inverse_m4F4A881CD789281EA90EB68CFD39F36C8A81E6BD((&V_0), NULL);
		V_1 = L_5;
		// Vector4 projInfo = new Vector4
		//     ((-2.0f / (Screen.width * P[0])),
		//      (-2.0f / (Screen.height * P[5])),
		//      ((1.0f - P[2]) / P[0]),
		//      ((1.0f + P[6]) / P[5]));
		int32_t L_6;
		L_6 = Screen_get_width_mCA5D955A53CF6D29C8C7118D517D0FC84AE8056C(NULL);
		float L_7;
		L_7 = Matrix4x4_get_Item_m771C2EE3A3BFFBAC9F2AD07FFCAAF6146C1BE92A((&V_0), 0, NULL);
		int32_t L_8;
		L_8 = Screen_get_height_m624DD2D53F34087064E3B9D09AC2207DB4E86CA8(NULL);
		float L_9;
		L_9 = Matrix4x4_get_Item_m771C2EE3A3BFFBAC9F2AD07FFCAAF6146C1BE92A((&V_0), 5, NULL);
		float L_10;
		L_10 = Matrix4x4_get_Item_m771C2EE3A3BFFBAC9F2AD07FFCAAF6146C1BE92A((&V_0), 2, NULL);
		float L_11;
		L_11 = Matrix4x4_get_Item_m771C2EE3A3BFFBAC9F2AD07FFCAAF6146C1BE92A((&V_0), 0, NULL);
		float L_12;
		L_12 = Matrix4x4_get_Item_m771C2EE3A3BFFBAC9F2AD07FFCAAF6146C1BE92A((&V_0), 6, NULL);
		float L_13;
		L_13 = Matrix4x4_get_Item_m771C2EE3A3BFFBAC9F2AD07FFCAAF6146C1BE92A((&V_0), 5, NULL);
		Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline((&V_2), ((float)((-2.0f)/((float)il2cpp_codegen_multiply(((float)L_6), L_7)))), ((float)((-2.0f)/((float)il2cpp_codegen_multiply(((float)L_8), L_9)))), ((float)(((float)il2cpp_codegen_subtract((1.0f), L_10))/L_11)), ((float)(((float)il2cpp_codegen_add((1.0f), L_12))/L_13)), NULL);
		// aoMaterial.SetVector ("_ProjInfo", projInfo); // used for unprojection
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_14 = __this->___aoMaterial_15;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_15 = V_2;
		NullCheck(L_14);
		Material_SetVector_m69444B8040D955821F241113446CC8713C9E12D1(L_14, _stringLiteral0F78241FF6E78ADA6D1FB6DAA00F25817203ED13, L_15, NULL);
		// aoMaterial.SetMatrix ("_ProjectionInv", invP); // only used for reference
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_16 = __this->___aoMaterial_15;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_17 = V_1;
		NullCheck(L_16);
		Material_SetMatrix_m1F4E20583C898A1C1DBA256868E1F98C539F13FB(L_16, _stringLiteralBB6CBCD648C07EAC90B08C00428BA435EC0272BF, L_17, NULL);
		// aoMaterial.SetTexture ("_Rand", rand); // not needed for DX11 :)
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_18 = __this->___aoMaterial_15;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_19 = __this->___rand_13;
		NullCheck(L_18);
		Material_SetTexture_m06083C3F52EF02FFB1177901D9907314F280F9A5(L_18, _stringLiteral0EAAFAB53E130FE2ADD20070CDBD4848DC8582A9, L_19, NULL);
		// aoMaterial.SetFloat ("_Radius", radius);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_20 = __this->___aoMaterial_15;
		float L_21 = __this->___radius_9;
		NullCheck(L_20);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_20, _stringLiteralE5A1D96CE41BD597A30172C890508C2BB5810152, L_21, NULL);
		// aoMaterial.SetFloat ("_Radius2", radius*radius);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_22 = __this->___aoMaterial_15;
		float L_23 = __this->___radius_9;
		float L_24 = __this->___radius_9;
		NullCheck(L_22);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_22, _stringLiteralAD6E56B90F7BBA5EEECD7831E48459043EBFCBB5, ((float)il2cpp_codegen_multiply(L_23, L_24)), NULL);
		// aoMaterial.SetFloat ("_Intensity", intensity);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_25 = __this->___aoMaterial_15;
		float L_26 = __this->___intensity_8;
		NullCheck(L_25);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_25, _stringLiteral4E207A1E776F6188653FF9228A95BFD3A17B492E, L_26, NULL);
		// aoMaterial.SetFloat ("_BlurFilterDistance", blurFilterDistance);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_27 = __this->___aoMaterial_15;
		float L_28 = __this->___blurFilterDistance_11;
		NullCheck(L_27);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_27, _stringLiteralEC50E207386AABAE6EA569D05001E516E9CCA2E6, L_28, NULL);
		// int rtW = source.width;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_29 = ___source0;
		NullCheck(L_29);
		int32_t L_30;
		L_30 = VirtualFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_29);
		V_3 = L_30;
		// int rtH = source.height;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_31 = ___source0;
		NullCheck(L_31);
		int32_t L_32;
		L_32 = VirtualFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Texture::get_height() */, L_31);
		V_4 = L_32;
		// RenderTexture tmpRt  = RenderTexture.GetTemporary (rtW>>downsample, rtH>>downsample);
		int32_t L_33 = V_3;
		int32_t L_34 = __this->___downsample_12;
		int32_t L_35 = V_4;
		int32_t L_36 = __this->___downsample_12;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_37;
		L_37 = RenderTexture_GetTemporary_mCD6ECAD5EDABF63A1F2F496ABC4E2502F0883A6E(((int32_t)(L_33>>((int32_t)(L_34&((int32_t)31))))), ((int32_t)(L_35>>((int32_t)(L_36&((int32_t)31))))), NULL);
		V_5 = L_37;
		// Graphics.Blit (source, tmpRt, aoMaterial, 0);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_38 = ___source0;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_39 = V_5;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_40 = __this->___aoMaterial_15;
		il2cpp_codegen_runtime_class_init_inline(Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var);
		Graphics_Blit_m5A753341A113FB6501C64F73D62047F84F957E50(L_38, L_39, L_40, 0, NULL);
		// if (downsample > 0) {
		int32_t L_41 = __this->___downsample_12;
		if ((((int32_t)L_41) <= ((int32_t)0)))
		{
			goto IL_0184;
		}
	}
	{
		// tmpRt2 = RenderTexture.GetTemporary (rtW, rtH);
		int32_t L_42 = V_3;
		int32_t L_43 = V_4;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_44;
		L_44 = RenderTexture_GetTemporary_mCD6ECAD5EDABF63A1F2F496ABC4E2502F0883A6E(L_42, L_43, NULL);
		V_6 = L_44;
		// Graphics.Blit(tmpRt, tmpRt2, aoMaterial, 4);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_45 = V_5;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_46 = V_6;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_47 = __this->___aoMaterial_15;
		il2cpp_codegen_runtime_class_init_inline(Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var);
		Graphics_Blit_m5A753341A113FB6501C64F73D62047F84F957E50(L_45, L_46, L_47, 4, NULL);
		// RenderTexture.ReleaseTemporary (tmpRt);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_48 = V_5;
		RenderTexture_ReleaseTemporary_m7D9B385460ED0D0CF7BCC033605CEBD60A1A232F(L_48, NULL);
		// tmpRt = tmpRt2;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_49 = V_6;
		V_5 = L_49;
	}

IL_0184:
	{
		// for (int i = 0; i < blurIterations; i++) {
		V_7 = 0;
		goto IL_021c;
	}

IL_018c:
	{
		// aoMaterial.SetVector("_Axis", new Vector2(1.0f,0.0f));
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_50 = __this->___aoMaterial_15;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_51;
		memset((&L_51), 0, sizeof(L_51));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_51), (1.0f), (0.0f), /*hidden argument*/NULL);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_52;
		L_52 = Vector4_op_Implicit_m6162D8136CFE97A5A8BD3B764F9074DB96AA5CD0_inline(L_51, NULL);
		NullCheck(L_50);
		Material_SetVector_m69444B8040D955821F241113446CC8713C9E12D1(L_50, _stringLiteral43996BC36588CCD5051D9CC5DA131DFBF9706B48, L_52, NULL);
		// tmpRt2 = RenderTexture.GetTemporary (rtW, rtH);
		int32_t L_53 = V_3;
		int32_t L_54 = V_4;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_55;
		L_55 = RenderTexture_GetTemporary_mCD6ECAD5EDABF63A1F2F496ABC4E2502F0883A6E(L_53, L_54, NULL);
		V_6 = L_55;
		// Graphics.Blit (tmpRt, tmpRt2, aoMaterial, 1);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_56 = V_5;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_57 = V_6;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_58 = __this->___aoMaterial_15;
		il2cpp_codegen_runtime_class_init_inline(Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var);
		Graphics_Blit_m5A753341A113FB6501C64F73D62047F84F957E50(L_56, L_57, L_58, 1, NULL);
		// RenderTexture.ReleaseTemporary (tmpRt);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_59 = V_5;
		RenderTexture_ReleaseTemporary_m7D9B385460ED0D0CF7BCC033605CEBD60A1A232F(L_59, NULL);
		// aoMaterial.SetVector("_Axis", new Vector2(0.0f,1.0f));
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_60 = __this->___aoMaterial_15;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_61;
		memset((&L_61), 0, sizeof(L_61));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_61), (0.0f), (1.0f), /*hidden argument*/NULL);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_62;
		L_62 = Vector4_op_Implicit_m6162D8136CFE97A5A8BD3B764F9074DB96AA5CD0_inline(L_61, NULL);
		NullCheck(L_60);
		Material_SetVector_m69444B8040D955821F241113446CC8713C9E12D1(L_60, _stringLiteral43996BC36588CCD5051D9CC5DA131DFBF9706B48, L_62, NULL);
		// tmpRt = RenderTexture.GetTemporary (rtW, rtH);
		int32_t L_63 = V_3;
		int32_t L_64 = V_4;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_65;
		L_65 = RenderTexture_GetTemporary_mCD6ECAD5EDABF63A1F2F496ABC4E2502F0883A6E(L_63, L_64, NULL);
		V_5 = L_65;
		// Graphics.Blit (tmpRt2, tmpRt, aoMaterial, 1);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_66 = V_6;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_67 = V_5;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_68 = __this->___aoMaterial_15;
		Graphics_Blit_m5A753341A113FB6501C64F73D62047F84F957E50(L_66, L_67, L_68, 1, NULL);
		// RenderTexture.ReleaseTemporary (tmpRt2);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_69 = V_6;
		RenderTexture_ReleaseTemporary_m7D9B385460ED0D0CF7BCC033605CEBD60A1A232F(L_69, NULL);
		// for (int i = 0; i < blurIterations; i++) {
		int32_t L_70 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add(L_70, 1));
	}

IL_021c:
	{
		// for (int i = 0; i < blurIterations; i++) {
		int32_t L_71 = V_7;
		int32_t L_72 = __this->___blurIterations_10;
		if ((((int32_t)L_71) < ((int32_t)L_72)))
		{
			goto IL_018c;
		}
	}
	{
		// aoMaterial.SetTexture ("_AOTex", tmpRt);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_73 = __this->___aoMaterial_15;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_74 = V_5;
		NullCheck(L_73);
		Material_SetTexture_m06083C3F52EF02FFB1177901D9907314F280F9A5(L_73, _stringLiteral58C07946CE4124292F0094E3A090F13945F38CC0, L_74, NULL);
		// Graphics.Blit (source, destination, aoMaterial, 2);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_75 = ___source0;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_76 = ___destination1;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_77 = __this->___aoMaterial_15;
		il2cpp_codegen_runtime_class_init_inline(Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var);
		Graphics_Blit_m5A753341A113FB6501C64F73D62047F84F957E50(L_75, L_76, L_77, 2, NULL);
		// RenderTexture.ReleaseTemporary (tmpRt);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_78 = V_5;
		RenderTexture_ReleaseTemporary_m7D9B385460ED0D0CF7BCC033605CEBD60A1A232F(L_78, NULL);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.ImageEffects.ScreenSpaceAmbientObscurance::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScreenSpaceAmbientObscurance__ctor_mC197411C6AD97657F3E7AA72D9368514359F5600 (ScreenSpaceAmbientObscurance_tE0AE3E1E85695DE5A5071FFC30B42DFE44200042* __this, const RuntimeMethod* method) 
{
	{
		// public float intensity = 0.5f;
		__this->___intensity_8 = (0.5f);
		// public float radius = 0.2f;
		__this->___radius_9 = (0.200000003f);
		// public int blurIterations = 1;
		__this->___blurIterations_10 = 1;
		// public float blurFilterDistance = 1.25f;
		__this->___blurFilterDistance_11 = (1.25f);
		PostEffectsBase__ctor_m4EE3CA780BAAFF694007DD15EDF5CFA7448DB7DF(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Implicit_m8F73B300CB4E6F9B4EB5FB6130363D76CEAA230B_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___v0, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___v0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___v0;
		float L_3 = L_2.___y_3;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_4), L_1, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_0015;
	}

IL_0015:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_blue_m0D04554379CB8606EF48E3091CDC3098B81DD86D_inline (const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_0), (0.0f), (0.0f), (1.0f), (1.0f), /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_001d;
	}

IL_001d:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B Color32_op_Implicit_m7EFA0B83AD1AE15567E9BC2FA2B8E66D3BFE1395_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___c0, const RuntimeMethod* method) 
{
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = ___c0;
		float L_1 = L_0.___r_0;
		float L_2;
		L_2 = Mathf_Clamp01_mD921B23F47F5347996C56DC789D1DE16EE27D9B1_inline(L_1, NULL);
		float L_3;
		L_3 = bankers_roundf(((float)il2cpp_codegen_multiply(L_2, (255.0f))));
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_4 = ___c0;
		float L_5 = L_4.___g_1;
		float L_6;
		L_6 = Mathf_Clamp01_mD921B23F47F5347996C56DC789D1DE16EE27D9B1_inline(L_5, NULL);
		float L_7;
		L_7 = bankers_roundf(((float)il2cpp_codegen_multiply(L_6, (255.0f))));
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_8 = ___c0;
		float L_9 = L_8.___b_2;
		float L_10;
		L_10 = Mathf_Clamp01_mD921B23F47F5347996C56DC789D1DE16EE27D9B1_inline(L_9, NULL);
		float L_11;
		L_11 = bankers_roundf(((float)il2cpp_codegen_multiply(L_10, (255.0f))));
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_12 = ___c0;
		float L_13 = L_12.___a_3;
		float L_14;
		L_14 = Mathf_Clamp01_mD921B23F47F5347996C56DC789D1DE16EE27D9B1_inline(L_13, NULL);
		float L_15;
		L_15 = bankers_roundf(((float)il2cpp_codegen_multiply(L_14, (255.0f))));
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_16;
		memset((&L_16), 0, sizeof(L_16));
		Color32__ctor_mC9C6B443F0C7CA3F8B174158B2AF6F05E18EAC4E_inline((&L_16), (uint8_t)il2cpp_codegen_cast_floating_point<uint8_t, int32_t, float>(L_3), (uint8_t)il2cpp_codegen_cast_floating_point<uint8_t, int32_t, float>(L_7), (uint8_t)il2cpp_codegen_cast_floating_point<uint8_t, int32_t, float>(L_11), (uint8_t)il2cpp_codegen_cast_floating_point<uint8_t, int32_t, float>(L_15), /*hidden argument*/NULL);
		V_0 = L_16;
		goto IL_0065;
	}

IL_0065:
	{
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_17 = V_0;
		return L_17;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_red_m27D04C1E5FE794AD933B7B9364F3D34B9EA25109_inline (const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_0), (1.0f), (0.0f), (0.0f), (1.0f), /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_001d;
	}

IL_001d:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_yellow_m1EF7276EF58050DFBA8921E2383F0249C08D346F_inline (const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_0), (1.0f), (0.921568632f), (0.0156862754f), (1.0f), /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_001d;
	}

IL_001d:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color32_op_Implicit_m203A634DBB77053C9400C68065CA29529103D172_inline (Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___c0, const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_0 = ___c0;
		uint8_t L_1 = L_0.___r_1;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_2 = ___c0;
		uint8_t L_3 = L_2.___g_2;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_4 = ___c0;
		uint8_t L_5 = L_4.___b_3;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_6 = ___c0;
		uint8_t L_7 = L_6.___a_4;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_8;
		memset((&L_8), 0, sizeof(L_8));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_8), ((float)(((float)L_1)/(255.0f))), ((float)(((float)L_3)/(255.0f))), ((float)(((float)L_5)/(255.0f))), ((float)(((float)L_7)/(255.0f))), /*hidden argument*/NULL);
		V_0 = L_8;
		goto IL_003d;
	}

IL_003d:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_9 = V_0;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void IAM_StartAppear_Invoke_mE1E254F41FB1A54066D9E77D96B62B9EC5600BE6_inline (IAM_StartAppear_t45F8AF6D25B9B8F63ED671D6461EF06AFBDEACDC* __this, InterfaceAnimManager_t55019D504BEA6534494FED15C7945911CE850962* ____IAM0, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, InterfaceAnimManager_t55019D504BEA6534494FED15C7945911CE850962*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ____IAM0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void IAM_EndAppear_Invoke_mDE5B4D3BA0FB8B81B187247938B6C2191927DAD9_inline (IAM_EndAppear_t60802E44D1AB53A268000746AEAA403393EFE4C6* __this, InterfaceAnimManager_t55019D504BEA6534494FED15C7945911CE850962* ____IAM0, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, InterfaceAnimManager_t55019D504BEA6534494FED15C7945911CE850962*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ____IAM0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void IAM_StartDisappear_Invoke_m57D127B05389C3C7FED4EE458B6F58FF5FF597FC_inline (IAM_StartDisappear_tFBEC30F3C988FD6D617407114866A1D5FE174BFB* __this, InterfaceAnimManager_t55019D504BEA6534494FED15C7945911CE850962* ____IAM0, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, InterfaceAnimManager_t55019D504BEA6534494FED15C7945911CE850962*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ____IAM0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void IAM_EndDisappear_Invoke_m905DCD487D9D03C665BE6B8F89CEEEDFCD47C381_inline (IAM_EndDisappear_t91F7B236FDF2A3FC74F13C5FD4987F95E8936663* __this, InterfaceAnimManager_t55019D504BEA6534494FED15C7945911CE850962* ____IAM0, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, InterfaceAnimManager_t55019D504BEA6534494FED15C7945911CE850962*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ____IAM0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Euler_mD4601D966F1F58F3FCA01B3FC19A12D0AD0396DD_inline (float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) 
{
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		float L_0 = ___x0;
		float L_1 = ___y1;
		float L_2 = ___z2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		memset((&L_3), 0, sizeof(L_3));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_3), L_0, L_1, L_2, /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_3, (0.0174532924f), NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_5;
		L_5 = Quaternion_Internal_FromEulerRad_m2842B9FFB31CDC0F80B7C2172E22831D11D91E93(L_4, NULL);
		V_0 = L_5;
		goto IL_001b;
	}

IL_001b:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_6 = V_0;
		return L_6;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Lerp_mFB4910B358B986AFB22114ED90458E8341867479_inline (float ___a0, float ___b1, float ___t2, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		float L_0 = ___a0;
		float L_1 = ___b1;
		float L_2 = ___a0;
		float L_3 = ___t2;
		float L_4;
		L_4 = Mathf_Clamp01_mD921B23F47F5347996C56DC789D1DE16EE27D9B1_inline(L_3, NULL);
		V_0 = ((float)il2cpp_codegen_add(L_0, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_1, L_2)), L_4))));
		goto IL_0010;
	}

IL_0010:
	{
		float L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_op_Multiply_m1ED56CA313E9D35FD4324AADD8495ADFC041294A_inline (float ___b0, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___a1, const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = ___a1;
		float L_1 = L_0.___r_0;
		float L_2 = ___b0;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_3 = ___a1;
		float L_4 = L_3.___g_1;
		float L_5 = ___b0;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_6 = ___a1;
		float L_7 = L_6.___b_2;
		float L_8 = ___b0;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_9 = ___a1;
		float L_10 = L_9.___a_3;
		float L_11 = ___b0;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_12;
		memset((&L_12), 0, sizeof(L_12));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_12), ((float)il2cpp_codegen_multiply(L_1, L_2)), ((float)il2cpp_codegen_multiply(L_4, L_5)), ((float)il2cpp_codegen_multiply(L_7, L_8)), ((float)il2cpp_codegen_multiply(L_10, L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0029;
	}

IL_0029:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_13 = V_0;
		return L_13;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_black_mBF96B603B41BED9BAFAA10CE8D946D24260F9729_inline (const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_0), (0.0f), (0.0f), (0.0f), (1.0f), /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_001d;
	}

IL_001d:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 Vector4_op_Multiply_m10DA1FA6A405C8988C46FFD159ED9FF9E5D732F5_inline (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___a0, float ___d1, const RuntimeMethod* method) 
{
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_0 = ___a0;
		float L_1 = L_0.___x_1;
		float L_2 = ___d1;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_3 = ___a0;
		float L_4 = L_3.___y_2;
		float L_5 = ___d1;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_6 = ___a0;
		float L_7 = L_6.___z_3;
		float L_8 = ___d1;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_9 = ___a0;
		float L_10 = L_9.___w_4;
		float L_11 = ___d1;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline((&L_12), ((float)il2cpp_codegen_multiply(L_1, L_2)), ((float)il2cpp_codegen_multiply(L_4, L_5)), ((float)il2cpp_codegen_multiply(L_7, L_8)), ((float)il2cpp_codegen_multiply(L_10, L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0029;
	}

IL_0029:
	{
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_13 = V_0;
		return L_13;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_mCD6889CDE39F18704CD6EA8E2EFBFA48BA3E13B0_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___r0, float ___g1, float ___b2, const RuntimeMethod* method) 
{
	{
		float L_0 = ___r0;
		__this->___r_0 = L_0;
		float L_1 = ___g1;
		__this->___g_1 = L_1;
		float L_2 = ___b2;
		__this->___b_2 = L_2;
		__this->___a_3 = (1.0f);
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 Vector4_op_Implicit_m6162D8136CFE97A5A8BD3B764F9074DB96AA5CD0_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___v0, const RuntimeMethod* method) 
{
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___v0;
		float L_1 = L_0.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___v0;
		float L_3 = L_2.___y_1;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline((&L_4), L_1, L_3, (0.0f), (0.0f), /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_001f;
	}

IL_001f:
	{
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) 
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)__this->____items_1;
		V_0 = L_1;
		int32_t L_2 = (int32_t)__this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = V_0;
		int32_t L_7 = V_1;
		RuntimeObject* L_8 = ___item0;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (RuntimeObject*)L_8);
		return;
	}

IL_0034:
	{
		RuntimeObject* L_9 = ___item0;
		((  void (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->____current_3;
		return L_0;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color32__ctor_mC9C6B443F0C7CA3F8B174158B2AF6F05E18EAC4E_inline (Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* __this, uint8_t ___r0, uint8_t ___g1, uint8_t ___b2, uint8_t ___a3, const RuntimeMethod* method) 
{
	{
		__this->___rgba_0 = 0;
		uint8_t L_0 = ___r0;
		__this->___r_1 = L_0;
		uint8_t L_1 = ___g1;
		__this->___g_2 = L_1;
		uint8_t L_2 = ___b2;
		__this->___b_3 = L_2;
		uint8_t L_3 = ___a3;
		__this->___a_4 = L_3;
		return;
	}
}
