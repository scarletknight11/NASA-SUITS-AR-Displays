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

// System.Action`1<System.Int32>
struct Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404;
// System.Action`2<System.Int32,System.Int32>
struct Action_2_tD7438462601D3939500ED67463331FE00CFFBDB8;
// System.Comparison`1<UnityEngine.EventSystems.RaycastResult>
struct Comparison_1_t9FCAC8C8CE160A96C5AAD2DE1D353DCE8A2FEEFC;
// System.Func`1<System.Object>
struct Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4;
// System.Func`1<UnityEngine.RectTransform>
struct Func_1_t708286BE3AAC130286F76FF303780A49EB14AEDA;
// System.Func`3<System.String,UnityEngine.Transform,System.String>
struct Func_3_tE692BF5746E3897AAFC1DAA462F626B39E0A6B5F;
// System.Collections.Generic.IReadOnlyList`1<Microsoft.MixedReality.Toolkit.Input.NearInteractionTouchableUnityUI>
struct IReadOnlyList_1_tC4ED3775DD9DB06CC65871B24C323066A869139C;
// System.Lazy`1<System.Object>
struct Lazy_1_tAD66CD7CC97BB996411F4FE0F49A1817031B906E;
// System.Lazy`1<UnityEngine.RectTransform>
struct Lazy_1_tCAF5FD08A5F62EB0A24F3A8AA1FFAA02183EC3D2;
// System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>
struct List_1_tA5BDE435C735A082941CD33D212F97F4AE9FA55F;
// System.Collections.Generic.List`1<UnityEngine.Color32>
struct List_1_t3517D52AE25CA3B19051E691E9C06ED03A3AB9B8;
// System.Collections.Generic.List`1<UnityEngine.EventSystems.EventSystem>
struct List_1_tF2FE88545EFEC788CAAE6C74EC2F78E937FCCAC3;
// System.Collections.Generic.List`1<System.Int32>
struct List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73;
// System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.Input.NearInteractionTouchableUnityUI>
struct List_1_tE586C7DF7362A54F1367795984EFC563AF4062C4;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.List`1<UnityEngine.Vector3>
struct List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B;
// System.Collections.Generic.List`1<UnityEngine.Vector4>
struct List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// Microsoft.MixedReality.Toolkit.Input.NearInteractionTouchableUnityUI[]
struct NearInteractionTouchableUnityUIU5BU5D_t4E88C00B8B6E8D7F0B2DDCD48D97D561784FF65A;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F;
// UnityEngine.EventSystems.BaseInputModule
struct BaseInputModule_tF3B7C22AF1419B2AC9ECE6589357DC1B88ED96B1;
// UnityEngine.UI.BaseMeshEffect
struct BaseMeshEffect_t87C453D6DAE52C072B2E613F65A5FE45C9B3990D;
// Microsoft.MixedReality.Toolkit.Input.BaseNearInteractionTouchable
struct BaseNearInteractionTouchable_t9646FAE4C0D5A711AFEC453F37F9A80FA5921FDF;
// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184;
// UnityEngine.Canvas
struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26;
// Microsoft.MixedReality.Toolkit.Input.Utilities.CanvasUtility
struct CanvasUtility_tBDD208210148DDAF5B78F43368E65363C295B7BF;
// UnityEngine.Collider
struct Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// UnityEngine.EventSystems.EventSystem
struct EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931;
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource
struct IMixedRealityInputSource_t9926A91DEC380AA837347E82976F5A6A9F9226C2;
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem
struct IMixedRealityInputSystem_t73D9E8D52E761DF1CC230411D0EFD51104FF68B2;
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointer
struct IMixedRealityPointer_t6B17FD29F171D88877AB2EF9C59FEBB65ED6E446;
// System.LazyHelper
struct LazyHelper_t1784351780B2D1AC002869BB3C7A35AA64762602;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// Microsoft.MixedReality.Toolkit.Input.MixedRealityPointerEventData
struct MixedRealityPointerEventData_t109EE708B8ACE83EA37188C65C8F120B7418AB7B;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// Microsoft.MixedReality.Toolkit.Input.NearInteractionTouchableSurface
struct NearInteractionTouchableSurface_t1890B05DEBC69D456941177CB5EFA419951C738E;
// Microsoft.MixedReality.Toolkit.Input.NearInteractionTouchableUnityUI
struct NearInteractionTouchableUnityUI_t86123ECF22EE6D42187517CE7BCFD29236742C5D;
// Microsoft.MixedReality.Toolkit.Input.NearInteractionTouchableVolume
struct NearInteractionTouchableVolume_tEA877F0356213409D1EC47C3EB3DFBA6D1A47B98;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5;
// Microsoft.MixedReality.Toolkit.Input.Utilities.ScaleMeshEffect
struct ScaleMeshEffect_tA004B29ABBD14A138558659717C7F3AD8E2B3982;
// System.String
struct String_t;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD;
// UnityEngine.Canvas/WillRenderCanvases
struct WillRenderCanvases_tA4A6E66DBA797DCB45B995DBA449A9D1D80D0FBC;
// Microsoft.MixedReality.Toolkit.Input.NearInteractionTouchable/<>c
struct U3CU3Ec_tFE1C4224B7407F72371D0072CA09E59DED14491D;
// UnityEngine.RectTransform/ReapplyDrivenProperties
struct ReapplyDrivenProperties_t3482EA130A01FF7EE2EEFE37F66A5215D08CFE24;

IL2CPP_EXTERN_C RuntimeClass* CoreServices_tCB1FB80E338B89BCA07C52C15B876BC6D4B3439B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_1_t708286BE3AAC130286F76FF303780A49EB14AEDA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IMixedRealityController_t8BF4741E7DBA358A1DB46E1DD9EF33C9CDEB8BFA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IMixedRealityFocusProvider_t2766EE713C9E441F03CA32A27287C1EF1713AE00_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IMixedRealityInputSystem_t73D9E8D52E761DF1CC230411D0EFD51104FF68B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IMixedRealityNearPointer_tA29E79073B12FE06E833720EBEE764F4E3D94373_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IMixedRealityPointer_t6B17FD29F171D88877AB2EF9C59FEBB65ED6E446_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Lazy_1_tCAF5FD08A5F62EB0A24F3A8AA1FFAA02183EC3D2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tE586C7DF7362A54F1367795984EFC563AF4062C4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NearInteractionTouchableUnityUI_t86123ECF22EE6D42187517CE7BCFD29236742C5D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_tFE1C4224B7407F72371D0072CA09E59DED14491D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral193EAB9F1EC19468783C52A94D9B84DF6D5BEE4F;
IL2CPP_EXTERN_C String_t* _stringLiteral43C3CC13C78691910F4927DB8EB167585E5EE243;
IL2CPP_EXTERN_C String_t* _stringLiteral686F06ED763DC3A126DD29B1C7EC38784505A900;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponentInParent_TisCanvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26_m5FB554DD7C0F662DAB84C0F292B221CAE3F0A5B3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisCanvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26_m209BA4F663AB98A4504995B5BD3EADEDEFB92BF2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisCollider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_m820398EDBF1D3766C3166A0C323A127662A29A14_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m0640480E7E38BB88B0D1F6AD59E697C8EE6AAFA4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Lazy_1__ctor_mDE53FAA2E1BAA75AA65F0716AAF62970091999A0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Lazy_1_get_Value_mEC1747FC15B5499959F5FD389EC00955E965D653_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m47734AE400D71693EE76B0889D6E6D17CDC43881_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Remove_m9143FBCA1AA75A93F270E191F63CBE70FBC49DEE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m71BEF1920FBF6F1650A90E3004D4A7ECD6738D18_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;

struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Lazy`1<UnityEngine.RectTransform>
struct Lazy_1_tCAF5FD08A5F62EB0A24F3A8AA1FFAA02183EC3D2  : public RuntimeObject
{
	// System.LazyHelper modreq(System.Runtime.CompilerServices.IsVolatile) System.Lazy`1::_state
	LazyHelper_t1784351780B2D1AC002869BB3C7A35AA64762602* ____state_0;
	// System.Func`1<T> System.Lazy`1::_factory
	Func_1_t708286BE3AAC130286F76FF303780A49EB14AEDA* ____factory_1;
	// T System.Lazy`1::_value
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ____value_2;
};

// System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.Input.NearInteractionTouchableUnityUI>
struct List_1_tE586C7DF7362A54F1367795984EFC563AF4062C4  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	NearInteractionTouchableUnityUIU5BU5D_t4E88C00B8B6E8D7F0B2DDCD48D97D561784FF65A* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tE586C7DF7362A54F1367795984EFC563AF4062C4_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	NearInteractionTouchableUnityUIU5BU5D_t4E88C00B8B6E8D7F0B2DDCD48D97D561784FF65A* ___s_emptyArray_5;
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

// UnityEngine.EventSystems.AbstractEventData
struct AbstractEventData_tAE1A127ED657117548181D29FFE4B1B14D8E67F7  : public RuntimeObject
{
	// System.Boolean UnityEngine.EventSystems.AbstractEventData::m_Used
	bool ___m_Used_0;
};
struct Il2CppArrayBounds;

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

// Microsoft.MixedReality.Toolkit.Input.NearInteractionTouchable/<>c
struct U3CU3Ec_tFE1C4224B7407F72371D0072CA09E59DED14491D  : public RuntimeObject
{
};

struct U3CU3Ec_tFE1C4224B7407F72371D0072CA09E59DED14491D_StaticFields
{
	// Microsoft.MixedReality.Toolkit.Input.NearInteractionTouchable/<>c Microsoft.MixedReality.Toolkit.Input.NearInteractionTouchable/<>c::<>9
	U3CU3Ec_tFE1C4224B7407F72371D0072CA09E59DED14491D* ___U3CU3E9_0;
	// System.Func`3<System.String,UnityEngine.Transform,System.String> Microsoft.MixedReality.Toolkit.Input.NearInteractionTouchable/<>c::<>9__25_0
	Func_3_tE692BF5746E3897AAFC1DAA462F626B39E0A6B5F* ___U3CU3E9__25_0_1;
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

// UnityEngine.Rect
struct Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D 
{
	// System.Single UnityEngine.Rect::m_XMin
	float ___m_XMin_0;
	// System.Single UnityEngine.Rect::m_YMin
	float ___m_YMin_1;
	// System.Single UnityEngine.Rect::m_Width
	float ___m_Width_2;
	// System.Single UnityEngine.Rect::m_Height
	float ___m_Height_3;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
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

// UnityEngine.UIVertex
struct UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 
{
	// UnityEngine.Vector3 UnityEngine.UIVertex::position
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position_0;
	// UnityEngine.Vector3 UnityEngine.UIVertex::normal
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___normal_1;
	// UnityEngine.Vector4 UnityEngine.UIVertex::tangent
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___tangent_2;
	// UnityEngine.Color32 UnityEngine.UIVertex::color
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___color_3;
	// UnityEngine.Vector4 UnityEngine.UIVertex::uv0
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___uv0_4;
	// UnityEngine.Vector4 UnityEngine.UIVertex::uv1
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___uv1_5;
	// UnityEngine.Vector4 UnityEngine.UIVertex::uv2
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___uv2_6;
	// UnityEngine.Vector4 UnityEngine.UIVertex::uv3
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___uv3_7;
};

struct UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207_StaticFields
{
	// UnityEngine.Color32 UnityEngine.UIVertex::s_DefaultColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___s_DefaultColor_8;
	// UnityEngine.Vector4 UnityEngine.UIVertex::s_DefaultTangent
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___s_DefaultTangent_9;
	// UnityEngine.UIVertex UnityEngine.UIVertex::simpleVert
	UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 ___simpleVert_10;
};

// UnityEngine.UI.VertexHelper
struct VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE  : public RuntimeObject
{
	// System.Collections.Generic.List`1<UnityEngine.Vector3> UnityEngine.UI.VertexHelper::m_Positions
	List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* ___m_Positions_0;
	// System.Collections.Generic.List`1<UnityEngine.Color32> UnityEngine.UI.VertexHelper::m_Colors
	List_1_t3517D52AE25CA3B19051E691E9C06ED03A3AB9B8* ___m_Colors_1;
	// System.Collections.Generic.List`1<UnityEngine.Vector4> UnityEngine.UI.VertexHelper::m_Uv0S
	List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317* ___m_Uv0S_2;
	// System.Collections.Generic.List`1<UnityEngine.Vector4> UnityEngine.UI.VertexHelper::m_Uv1S
	List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317* ___m_Uv1S_3;
	// System.Collections.Generic.List`1<UnityEngine.Vector4> UnityEngine.UI.VertexHelper::m_Uv2S
	List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317* ___m_Uv2S_4;
	// System.Collections.Generic.List`1<UnityEngine.Vector4> UnityEngine.UI.VertexHelper::m_Uv3S
	List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317* ___m_Uv3S_5;
	// System.Collections.Generic.List`1<UnityEngine.Vector3> UnityEngine.UI.VertexHelper::m_Normals
	List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* ___m_Normals_6;
	// System.Collections.Generic.List`1<UnityEngine.Vector4> UnityEngine.UI.VertexHelper::m_Tangents
	List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317* ___m_Tangents_7;
	// System.Collections.Generic.List`1<System.Int32> UnityEngine.UI.VertexHelper::m_Indices
	List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* ___m_Indices_8;
	// System.Boolean UnityEngine.UI.VertexHelper::m_ListsInitalized
	bool ___m_ListsInitalized_11;
};

struct VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE_StaticFields
{
	// UnityEngine.Vector4 UnityEngine.UI.VertexHelper::s_DefaultTangent
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___s_DefaultTangent_9;
	// UnityEngine.Vector3 UnityEngine.UI.VertexHelper::s_DefaultNormal
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___s_DefaultNormal_10;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// Microsoft.MixedReality.Toolkit.Input.InputEventData
struct InputEventData_t8A56522163990B29359E0CAA56589AACA2DE2A85  : public BaseInputEventData_tE30935633FC3413040017EC7BB3F4D54958E5399
{
	// Microsoft.MixedReality.Toolkit.Utilities.Handedness Microsoft.MixedReality.Toolkit.Input.InputEventData::<Handedness>k__BackingField
	uint8_t ___U3CHandednessU3Ek__BackingField_5;
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

// System.Func`1<UnityEngine.RectTransform>
struct Func_1_t708286BE3AAC130286F76FF303780A49EB14AEDA  : public MulticastDelegate_t
{
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Collider
struct Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// Microsoft.MixedReality.Toolkit.Input.MixedRealityPointerEventData
struct MixedRealityPointerEventData_t109EE708B8ACE83EA37188C65C8F120B7418AB7B  : public InputEventData_t8A56522163990B29359E0CAA56589AACA2DE2A85
{
	// Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointer Microsoft.MixedReality.Toolkit.Input.MixedRealityPointerEventData::<Pointer>k__BackingField
	RuntimeObject* ___U3CPointerU3Ek__BackingField_6;
	// System.Int32 Microsoft.MixedReality.Toolkit.Input.MixedRealityPointerEventData::<Count>k__BackingField
	int32_t ___U3CCountU3Ek__BackingField_7;
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

// UnityEngine.Canvas
struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26_StaticFields
{
	// UnityEngine.Canvas/WillRenderCanvases UnityEngine.Canvas::preWillRenderCanvases
	WillRenderCanvases_tA4A6E66DBA797DCB45B995DBA449A9D1D80D0FBC* ___preWillRenderCanvases_4;
	// UnityEngine.Canvas/WillRenderCanvases UnityEngine.Canvas::willRenderCanvases
	WillRenderCanvases_tA4A6E66DBA797DCB45B995DBA449A9D1D80D0FBC* ___willRenderCanvases_5;
	// System.Action`1<System.Int32> UnityEngine.Canvas::<externBeginRenderOverlays>k__BackingField
	Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* ___U3CexternBeginRenderOverlaysU3Ek__BackingField_6;
	// System.Action`2<System.Int32,System.Int32> UnityEngine.Canvas::<externRenderOverlaysBefore>k__BackingField
	Action_2_tD7438462601D3939500ED67463331FE00CFFBDB8* ___U3CexternRenderOverlaysBeforeU3Ek__BackingField_7;
	// System.Action`1<System.Int32> UnityEngine.Canvas::<externEndRenderOverlays>k__BackingField
	Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* ___U3CexternEndRenderOverlaysU3Ek__BackingField_8;
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

// Microsoft.MixedReality.Toolkit.Input.BaseNearInteractionTouchable
struct BaseNearInteractionTouchable_t9646FAE4C0D5A711AFEC453F37F9A80FA5921FDF  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// Microsoft.MixedReality.Toolkit.Input.TouchableEventType Microsoft.MixedReality.Toolkit.Input.BaseNearInteractionTouchable::eventsToReceive
	int32_t ___eventsToReceive_4;
	// System.Single Microsoft.MixedReality.Toolkit.Input.BaseNearInteractionTouchable::debounceThreshold
	float ___debounceThreshold_5;
};

// Microsoft.MixedReality.Toolkit.Input.Utilities.CanvasUtility
struct CanvasUtility_tBDD208210148DDAF5B78F43368E65363C295B7BF  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.Utilities.CanvasUtility::oldIsTargetPositionLockedOnFocusLock
	bool ___oldIsTargetPositionLockedOnFocusLock_4;
};

// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// UnityEngine.UI.BaseMeshEffect
struct BaseMeshEffect_t87C453D6DAE52C072B2E613F65A5FE45C9B3990D  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// UnityEngine.UI.Graphic UnityEngine.UI.BaseMeshEffect::m_Graphic
	Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* ___m_Graphic_4;
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

// Microsoft.MixedReality.Toolkit.Input.NearInteractionTouchableSurface
struct NearInteractionTouchableSurface_t1890B05DEBC69D456941177CB5EFA419951C738E  : public BaseNearInteractionTouchable_t9646FAE4C0D5A711AFEC453F37F9A80FA5921FDF
{
};

// Microsoft.MixedReality.Toolkit.Input.NearInteractionTouchableVolume
struct NearInteractionTouchableVolume_tEA877F0356213409D1EC47C3EB3DFBA6D1A47B98  : public BaseNearInteractionTouchable_t9646FAE4C0D5A711AFEC453F37F9A80FA5921FDF
{
	// UnityEngine.Collider Microsoft.MixedReality.Toolkit.Input.NearInteractionTouchableVolume::touchableCollider
	Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___touchableCollider_6;
};

// Microsoft.MixedReality.Toolkit.Input.NearInteractionTouchableUnityUI
struct NearInteractionTouchableUnityUI_t86123ECF22EE6D42187517CE7BCFD29236742C5D  : public NearInteractionTouchableSurface_t1890B05DEBC69D456941177CB5EFA419951C738E
{
	// System.Lazy`1<UnityEngine.RectTransform> Microsoft.MixedReality.Toolkit.Input.NearInteractionTouchableUnityUI::rectTransform
	Lazy_1_tCAF5FD08A5F62EB0A24F3A8AA1FFAA02183EC3D2* ___rectTransform_6;
};

struct NearInteractionTouchableUnityUI_t86123ECF22EE6D42187517CE7BCFD29236742C5D_StaticFields
{
	// System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.Input.NearInteractionTouchableUnityUI> Microsoft.MixedReality.Toolkit.Input.NearInteractionTouchableUnityUI::instances
	List_1_tE586C7DF7362A54F1367795984EFC563AF4062C4* ___instances_7;
};

// Microsoft.MixedReality.Toolkit.Input.Utilities.ScaleMeshEffect
struct ScaleMeshEffect_tA004B29ABBD14A138558659717C7F3AD8E2B3982  : public BaseMeshEffect_t87C453D6DAE52C072B2E613F65A5FE45C9B3990D
{
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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


// T System.Lazy`1<System.Object>::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Lazy_1_get_Value_mC3D475ED3C0FAB4E8BCC96FBF5EF49ED671B86A4_gshared (Lazy_1_tAD66CD7CC97BB996411F4FE0F49A1817031B906E* __this, const RuntimeMethod* method) ;
// System.Void System.Func`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_1__ctor_m663374A863E492A515BE9626B6F0E444991834E8_gshared (Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void System.Lazy`1<System.Object>::.ctor(System.Func`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Lazy_1__ctor_m4CD0C5ACC0541018DB9BDB090B1EFE67D5A9CEF1_gshared (Lazy_1_tAD66CD7CC97BB996411F4FE0F49A1817031B906E* __this, Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4* ___valueFactory0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1<System.Object>::Remove(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Remove_m4DFA48F4CEB9169601E75FC28517C5C06EFA5AD7_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponentInParent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponentInParent_TisRuntimeObject_m6746D6BB99912B1B509746C993906492F86CD119_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;

// System.Void Microsoft.MixedReality.Toolkit.Input.NearInteractionTouchable/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mC83E67E7B0F77FD54AE78F3FC0F7B8EE72DEE708 (U3CU3Ec_tFE1C4224B7407F72371D0072CA09E59DED14491D* __this, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.String UnityEngine.Object::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0 (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.Input.BaseNearInteractionTouchable::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseNearInteractionTouchable__ctor_m77EA109C10F21EE0E07BB5D7B0B26B76A2957F02 (BaseNearInteractionTouchable_t9646FAE4C0D5A711AFEC453F37F9A80FA5921FDF* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_forward()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_forward_mEBAB24D77FC02FC88ED880738C3B1D47C758B3EB_inline (const RuntimeMethod* method) ;
// T System.Lazy`1<UnityEngine.RectTransform>::get_Value()
inline RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* Lazy_1_get_Value_mEC1747FC15B5499959F5FD389EC00955E965D653 (Lazy_1_tCAF5FD08A5F62EB0A24F3A8AA1FFAA02183EC3D2* __this, const RuntimeMethod* method)
{
	return ((  RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* (*) (Lazy_1_tCAF5FD08A5F62EB0A24F3A8AA1FFAA02183EC3D2*, const RuntimeMethod*))Lazy_1_get_Value_mC3D475ED3C0FAB4E8BCC96FBF5EF49ED671B86A4_gshared)(__this, method);
}
// UnityEngine.Rect UnityEngine.RectTransform::get_rect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D RectTransform_get_rect_mC82A60F8C3805ED9833508CCC233689641207488 (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Rect::get_size()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Rect_get_size_mFB990FFC0FE0152179C8C74A59E4AC258CB44267 (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.Input.NearInteractionTouchableSurface::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NearInteractionTouchableSurface__ctor_m967499EA1114BAE7FE15CBA9FF0320EA0386652C (NearInteractionTouchableSurface_t1890B05DEBC69D456941177CB5EFA419951C738E* __this, const RuntimeMethod* method) ;
// System.Void System.Func`1<UnityEngine.RectTransform>::.ctor(System.Object,System.IntPtr)
inline void Func_1__ctor_mE2A65A9121CEF04F7ED7BC8ED7B52E85B1A2E5CA (Func_1_t708286BE3AAC130286F76FF303780A49EB14AEDA* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_1_t708286BE3AAC130286F76FF303780A49EB14AEDA*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_1__ctor_m663374A863E492A515BE9626B6F0E444991834E8_gshared)(__this, ___object0, ___method1, method);
}
// System.Void System.Lazy`1<UnityEngine.RectTransform>::.ctor(System.Func`1<T>)
inline void Lazy_1__ctor_mDE53FAA2E1BAA75AA65F0716AAF62970091999A0 (Lazy_1_tCAF5FD08A5F62EB0A24F3A8AA1FFAA02183EC3D2* __this, Func_1_t708286BE3AAC130286F76FF303780A49EB14AEDA* ___valueFactory0, const RuntimeMethod* method)
{
	((  void (*) (Lazy_1_tCAF5FD08A5F62EB0A24F3A8AA1FFAA02183EC3D2*, Func_1_t708286BE3AAC130286F76FF303780A49EB14AEDA*, const RuntimeMethod*))Lazy_1__ctor_m4CD0C5ACC0541018DB9BDB090B1EFE67D5A9CEF1_gshared)(__this, ___valueFactory0, method);
}
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_UnaryNegation(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_UnaryNegation_m3AC523A7BED6E843165BDF598690F0560D8CAA63_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::TransformDirection(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_TransformDirection_m9BE1261DF2D48B7A4A27D31EE24D2D97F89E7757 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___direction0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::InverseTransformPoint(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_InverseTransformPoint_m18CD395144D9C78F30E15A5B82B6670E792DBA5D (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Rect::Contains(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Rect_Contains_mB1160CD465F3E9616AA4EED72AFFD611BD8D2B6B (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___point0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.TransformExtensions::TransformSize(UnityEngine.Transform,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 TransformExtensions_TransformSize_m40D3EFADE7E5101BAACA65F3F7510E37184801C2 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___transform0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___localSize1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.Input.NearInteractionTouchableUnityUI>::Add(T)
inline void List_1_Add_m47734AE400D71693EE76B0889D6E6D17CDC43881_inline (List_1_tE586C7DF7362A54F1367795984EFC563AF4062C4* __this, NearInteractionTouchableUnityUI_t86123ECF22EE6D42187517CE7BCFD29236742C5D* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tE586C7DF7362A54F1367795984EFC563AF4062C4*, NearInteractionTouchableUnityUI_t86123ECF22EE6D42187517CE7BCFD29236742C5D*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// System.Boolean System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.Input.NearInteractionTouchableUnityUI>::Remove(T)
inline bool List_1_Remove_m9143FBCA1AA75A93F270E191F63CBE70FBC49DEE (List_1_tE586C7DF7362A54F1367795984EFC563AF4062C4* __this, NearInteractionTouchableUnityUI_t86123ECF22EE6D42187517CE7BCFD29236742C5D* ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_tE586C7DF7362A54F1367795984EFC563AF4062C4*, NearInteractionTouchableUnityUI_t86123ECF22EE6D42187517CE7BCFD29236742C5D*, const RuntimeMethod*))List_1_Remove_m4DFA48F4CEB9169601E75FC28517C5C06EFA5AD7_gshared)(__this, ___item0, method);
}
// System.Void System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.Input.NearInteractionTouchableUnityUI>::.ctor()
inline void List_1__ctor_m71BEF1920FBF6F1650A90E3004D4A7ECD6738D18 (List_1_tE586C7DF7362A54F1367795984EFC563AF4062C4* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tE586C7DF7362A54F1367795984EFC563AF4062C4*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Boolean UnityEngine.Collider::get_enabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Collider_get_enabled_mDBFB488088ADB14C8016A83EF445653AC5A4A12B (Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.GameObject::get_activeInHierarchy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GameObject_get_activeInHierarchy_m49250F4F168DCC5388D5BE4F6A5681386907B109 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.Input.BaseNearInteractionTouchable::OnValidate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseNearInteractionTouchable_OnValidate_m83A36D78A4A17EB73D54CB9B52ACEC050A100675 (BaseNearInteractionTouchable_t9646FAE4C0D5A711AFEC453F37F9A80FA5921FDF* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.Collider>()
inline Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* Component_GetComponent_TisCollider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_m820398EDBF1D3766C3166A0C323A127662A29A14 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// UnityEngine.Collider Microsoft.MixedReality.Toolkit.Input.NearInteractionTouchableVolume::get_TouchableCollider()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* NearInteractionTouchableVolume_get_TouchableCollider_mAC4D7DED1BA2A42D502917BF96E2D509EA908FAE_inline (NearInteractionTouchableVolume_tEA877F0356213409D1EC47C3EB3DFBA6D1A47B98* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Collider::ClosestPoint(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Collider_ClosestPoint_mFFF9B6F6CF9F18B22B325835A3E2E78A1C03BFCB (Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Subtraction(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Subtraction_m1690F44F6DC92B770A940B6CF8AE0535625A9824_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Vector3::op_Equality(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector3_op_Equality_m15951D1B53E3BE36C9D265E229090020FBD72EBB_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___lhs0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rhs1, const RuntimeMethod* method) ;
// UnityEngine.Bounds UnityEngine.Collider::get_bounds()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 Collider_get_bounds_mCC32F749590E9A85C7930E5355661367F78E4CB4 (Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Bounds::get_center()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Bounds_get_center_m5B05F81CB835EB6DD8628FDA24B638F477984DC3 (Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::Normalize()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3_Normalize_mC749B887A4C74BA0A2E13E6377F17CCAEB0AADA8_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::get_magnitude()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) ;
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointer Microsoft.MixedReality.Toolkit.Input.MixedRealityPointerEventData::get_Pointer()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* MixedRealityPointerEventData_get_Pointer_mE5664622195651CF4C2DC3CEAAF99E3823B74E82_inline (MixedRealityPointerEventData_t109EE708B8ACE83EA37188C65C8F120B7418AB7B* __this, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.Input.Utilities.CanvasUtility::VerifyCanvasConfiguration()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CanvasUtility_VerifyCanvasConfiguration_m9315F00E73D436A567A3850B91195DE426B3E6D4 (CanvasUtility_tBDD208210148DDAF5B78F43368E65363C295B7BF* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.Canvas>()
inline Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* Component_GetComponent_TisCanvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26_m209BA4F663AB98A4504995B5BD3EADEDEFB92BF2 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// UnityEngine.Camera UnityEngine.Canvas::get_worldCamera()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* Canvas_get_worldCamera_mD2FDE13B61A5213F4E64B40008EB0A8D2D07B853 (Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* __this, const RuntimeMethod* method) ;
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem Microsoft.MixedReality.Toolkit.CoreServices::get_InputSystem()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CoreServices_get_InputSystem_m47147418643299159BF4DF408F768844FDC33943 (const RuntimeMethod* method) ;
// System.Void UnityEngine.Canvas::set_worldCamera(UnityEngine.Camera)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Canvas_set_worldCamera_m007F7DABDB5A3A6BFB043E3500DA82A4D936EDD4 (Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* __this, Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___value0, const RuntimeMethod* method) ;
// UnityEngine.EventSystems.EventSystem UnityEngine.EventSystems.EventSystem::get_current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* EventSystem_get_current_mD15EA86304E070D175EF359A051A7DB807CA26C0 (const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_m059825802BB6AF7EA9693FEBEEB0D85F59A3E38E (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.EventSystems.UIBehaviour::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIBehaviour_Awake_mDF9D1A4867C8E730C59A7CAE97709CA9B8F3A0F2 (UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponentInParent<UnityEngine.Canvas>()
inline Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* Component_GetComponentInParent_TisCanvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26_m5FB554DD7C0F662DAB84C0F292B221CAE3F0A5B3 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponentInParent_TisRuntimeObject_m6746D6BB99912B1B509746C993906492F86CD119_gshared)(__this, method);
}
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// UnityEngine.AdditionalCanvasShaderChannels UnityEngine.Canvas::get_additionalShaderChannels()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Canvas_get_additionalShaderChannels_m3039B1E9ADDCDC514E444A4BB56527FFAC3E6287 (Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Canvas::set_additionalShaderChannels(UnityEngine.AdditionalCanvasShaderChannels)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Canvas_set_additionalShaderChannels_m182712BE72B72BE41FAFE97F2FD79C2476132DB0 (Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Rect::get_width()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Rect_get_width_m620D67551372073C9C32C4C4624C2A5713F7F9A9 (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_localScale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Rect::get_height()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Rect_get_height_mE1AA6C6C725CCD2D317BD2157396D3CF7D47C9D8 (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___x0, float ___y1, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Implicit(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___exists0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_lossyScale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_lossyScale_mFF740DA4BE1489C6882CD2F3A37B7321176E5D07 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.VertexHelper::PopulateUIVertex(UnityEngine.UIVertex&,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VertexHelper_PopulateUIVertex_m48FF05C38D56529E18A360D629F4842BE5D050BE (VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* __this, UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207* ___vertex0, int32_t ___i1, const RuntimeMethod* method) ;
// UnityEngine.Vector4 UnityEngine.Vector4::op_Implicit(UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 Vector4_op_Implicit_m6162D8136CFE97A5A8BD3B764F9074DB96AA5CD0_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___v0, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.VertexHelper::SetUIVertex(UnityEngine.UIVertex,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VertexHelper_SetUIVertex_m539A518867E7872E0893715AD372DC9A06334FD9 (VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* __this, UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 ___vertex0, int32_t ___i1, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.UI.VertexHelper::get_currentVertCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t VertexHelper_get_currentVertCount_m45BFEBD6FCB7DF3BF9F76946D6002BDC58B173A4 (VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.BaseMeshEffect::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseMeshEffect__ctor_mFFF23FD89B32150DAC512C556A1CCF563D062427 (BaseMeshEffect_t87C453D6DAE52C072B2E613F65A5FE45C9B3990D* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::Magnitude(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Magnitude_m6AD0BEBF88AAF98188A851E62D7A32CB5B7830EF_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___vector0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Division(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Division_mD7200D6D432BAFC4135C5B17A0B0A812203B0270_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector4::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* __this, float ___x0, float ___y1, float ___z2, float ___w3, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Microsoft.MixedReality.Toolkit.Input.NearInteractionTouchable/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m5BBAD587D5DF8ABC8F684233DE1ECB5DAE006C67 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tFE1C4224B7407F72371D0072CA09E59DED14491D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_tFE1C4224B7407F72371D0072CA09E59DED14491D* L_0 = (U3CU3Ec_tFE1C4224B7407F72371D0072CA09E59DED14491D*)il2cpp_codegen_object_new(U3CU3Ec_tFE1C4224B7407F72371D0072CA09E59DED14491D_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__ctor_mC83E67E7B0F77FD54AE78F3FC0F7B8EE72DEE708(L_0, NULL);
		((U3CU3Ec_tFE1C4224B7407F72371D0072CA09E59DED14491D_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tFE1C4224B7407F72371D0072CA09E59DED14491D_il2cpp_TypeInfo_var))->___U3CU3E9_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_tFE1C4224B7407F72371D0072CA09E59DED14491D_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tFE1C4224B7407F72371D0072CA09E59DED14491D_il2cpp_TypeInfo_var))->___U3CU3E9_0), (void*)L_0);
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.NearInteractionTouchable/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mC83E67E7B0F77FD54AE78F3FC0F7B8EE72DEE708 (U3CU3Ec_tFE1C4224B7407F72371D0072CA09E59DED14491D* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.String Microsoft.MixedReality.Toolkit.Input.NearInteractionTouchable/<>c::<OnValidate>b__25_0(System.String,UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* U3CU3Ec_U3COnValidateU3Eb__25_0_m68201596A8019A0C48834BD6F0D7225BC8A6974A (U3CU3Ec_tFE1C4224B7407F72371D0072CA09E59DED14491D* __this, String_t* ___result0, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___next1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral193EAB9F1EC19468783C52A94D9B84DF6D5BEE4F);
		s_Il2CppMethodInitialized = true;
	}
	{
		// string hierarchy = gameObject.transform.EnumerateAncestors(true).Aggregate("", (result, next) => next.gameObject.name + "=>" + result);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = ___next1;
		NullCheck(L_0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_0, NULL);
		NullCheck(L_1);
		String_t* L_2;
		L_2 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_1, NULL);
		String_t* L_3 = ___result0;
		String_t* L_4;
		L_4 = String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0(L_2, _stringLiteral193EAB9F1EC19468783C52A94D9B84DF6D5BEE4F, L_3, NULL);
		return L_4;
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
// System.Void Microsoft.MixedReality.Toolkit.Input.NearInteractionTouchableSurface::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NearInteractionTouchableSurface__ctor_m967499EA1114BAE7FE15CBA9FF0320EA0386652C (NearInteractionTouchableSurface_t1890B05DEBC69D456941177CB5EFA419951C738E* __this, const RuntimeMethod* method) 
{
	{
		BaseNearInteractionTouchable__ctor_m77EA109C10F21EE0E07BB5D7B0B26B76A2957F02(__this, NULL);
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
// System.Collections.Generic.IReadOnlyList`1<Microsoft.MixedReality.Toolkit.Input.NearInteractionTouchableUnityUI> Microsoft.MixedReality.Toolkit.Input.NearInteractionTouchableUnityUI::get_Instances()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* NearInteractionTouchableUnityUI_get_Instances_m42EADF01939E1F79DBCDBEAD36A7CFF39D9E3008 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NearInteractionTouchableUnityUI_t86123ECF22EE6D42187517CE7BCFD29236742C5D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static IReadOnlyList<NearInteractionTouchableUnityUI> Instances => instances;
		il2cpp_codegen_runtime_class_init_inline(NearInteractionTouchableUnityUI_t86123ECF22EE6D42187517CE7BCFD29236742C5D_il2cpp_TypeInfo_var);
		List_1_tE586C7DF7362A54F1367795984EFC563AF4062C4* L_0 = ((NearInteractionTouchableUnityUI_t86123ECF22EE6D42187517CE7BCFD29236742C5D_StaticFields*)il2cpp_codegen_static_fields_for(NearInteractionTouchableUnityUI_t86123ECF22EE6D42187517CE7BCFD29236742C5D_il2cpp_TypeInfo_var))->___instances_7;
		return L_0;
	}
}
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Input.NearInteractionTouchableUnityUI::get_LocalCenter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 NearInteractionTouchableUnityUI_get_LocalCenter_m044CF94B22FE3DE2D797FFF3E5EEB206CB088DDE (NearInteractionTouchableUnityUI_t86123ECF22EE6D42187517CE7BCFD29236742C5D* __this, const RuntimeMethod* method) 
{
	{
		// public override Vector3 LocalCenter => Vector3.zero;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		L_0 = Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline(NULL);
		return L_0;
	}
}
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Input.NearInteractionTouchableUnityUI::get_LocalPressDirection()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 NearInteractionTouchableUnityUI_get_LocalPressDirection_m317643CCC555051618B3E0529E755EF08B57F68F (NearInteractionTouchableUnityUI_t86123ECF22EE6D42187517CE7BCFD29236742C5D* __this, const RuntimeMethod* method) 
{
	{
		// public override Vector3 LocalPressDirection => Vector3.forward;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		L_0 = Vector3_get_forward_mEBAB24D77FC02FC88ED880738C3B1D47C758B3EB_inline(NULL);
		return L_0;
	}
}
// UnityEngine.Vector2 Microsoft.MixedReality.Toolkit.Input.NearInteractionTouchableUnityUI::get_Bounds()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 NearInteractionTouchableUnityUI_get_Bounds_mDB4F675AD6D2D7F57F5E028E34F3CF152C767BC2 (NearInteractionTouchableUnityUI_t86123ECF22EE6D42187517CE7BCFD29236742C5D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Lazy_1_get_Value_mEC1747FC15B5499959F5FD389EC00955E965D653_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// public override Vector2 Bounds => rectTransform.Value.rect.size;
		Lazy_1_tCAF5FD08A5F62EB0A24F3A8AA1FFAA02183EC3D2* L_0 = __this->___rectTransform_6;
		NullCheck(L_0);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_1;
		L_1 = Lazy_1_get_Value_mEC1747FC15B5499959F5FD389EC00955E965D653(L_0, Lazy_1_get_Value_mEC1747FC15B5499959F5FD389EC00955E965D653_RuntimeMethod_var);
		NullCheck(L_1);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_2;
		L_2 = RectTransform_get_rect_mC82A60F8C3805ED9833508CCC233689641207488(L_1, NULL);
		V_0 = L_2;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3;
		L_3 = Rect_get_size_mFB990FFC0FE0152179C8C74A59E4AC258CB44267((&V_0), NULL);
		return L_3;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.NearInteractionTouchableUnityUI::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NearInteractionTouchableUnityUI__ctor_mC2E3B8BCB50581D1F0B4A2CC3AD9362E17619A02 (NearInteractionTouchableUnityUI_t86123ECF22EE6D42187517CE7BCFD29236742C5D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m0640480E7E38BB88B0D1F6AD59E697C8EE6AAFA4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_1_t708286BE3AAC130286F76FF303780A49EB14AEDA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Lazy_1__ctor_mDE53FAA2E1BAA75AA65F0716AAF62970091999A0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Lazy_1_tCAF5FD08A5F62EB0A24F3A8AA1FFAA02183EC3D2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public NearInteractionTouchableUnityUI()
		NearInteractionTouchableSurface__ctor_m967499EA1114BAE7FE15CBA9FF0320EA0386652C(__this, NULL);
		// rectTransform = new Lazy<RectTransform>(GetComponent<RectTransform>);
		Func_1_t708286BE3AAC130286F76FF303780A49EB14AEDA* L_0 = (Func_1_t708286BE3AAC130286F76FF303780A49EB14AEDA*)il2cpp_codegen_object_new(Func_1_t708286BE3AAC130286F76FF303780A49EB14AEDA_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Func_1__ctor_mE2A65A9121CEF04F7ED7BC8ED7B52E85B1A2E5CA(L_0, __this, (intptr_t)((void*)Component_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m0640480E7E38BB88B0D1F6AD59E697C8EE6AAFA4_RuntimeMethod_var), NULL);
		Lazy_1_tCAF5FD08A5F62EB0A24F3A8AA1FFAA02183EC3D2* L_1 = (Lazy_1_tCAF5FD08A5F62EB0A24F3A8AA1FFAA02183EC3D2*)il2cpp_codegen_object_new(Lazy_1_tCAF5FD08A5F62EB0A24F3A8AA1FFAA02183EC3D2_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Lazy_1__ctor_mDE53FAA2E1BAA75AA65F0716AAF62970091999A0(L_1, L_0, Lazy_1__ctor_mDE53FAA2E1BAA75AA65F0716AAF62970091999A0_RuntimeMethod_var);
		__this->___rectTransform_6 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___rectTransform_6), (void*)L_1);
		// }
		return;
	}
}
// System.Single Microsoft.MixedReality.Toolkit.Input.NearInteractionTouchableUnityUI::DistanceToTouchable(UnityEngine.Vector3,UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float NearInteractionTouchableUnityUI_DistanceToTouchable_mB84E5DBBB51A3C6DAE339EECF60BB65AFD651DA2 (NearInteractionTouchableUnityUI_t86123ECF22EE6D42187517CE7BCFD29236742C5D* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___samplePoint0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___normal1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Lazy_1_get_Value_mEC1747FC15B5499959F5FD389EC00955E965D653_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// normal = transform.TransformDirection(-LocalPressDirection);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_0 = ___normal1;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = VirtualFuncInvoker0< Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 >::Invoke(7 /* UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Input.NearInteractionTouchableSurface::get_LocalPressDirection() */, __this);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Vector3_op_UnaryNegation_m3AC523A7BED6E843165BDF598690F0560D8CAA63_inline(L_2, NULL);
		NullCheck(L_1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Transform_TransformDirection_m9BE1261DF2D48B7A4A27D31EE24D2D97F89E7757(L_1, L_3, NULL);
		*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_0 = L_4;
		// Vector3 localPoint = transform.InverseTransformPoint(samplePoint);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___samplePoint0;
		NullCheck(L_5);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Transform_InverseTransformPoint_m18CD395144D9C78F30E15A5B82B6670E792DBA5D(L_5, L_6, NULL);
		V_0 = L_7;
		// if (!rectTransform.Value.rect.Contains(localPoint))
		Lazy_1_tCAF5FD08A5F62EB0A24F3A8AA1FFAA02183EC3D2* L_8 = __this->___rectTransform_6;
		NullCheck(L_8);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_9;
		L_9 = Lazy_1_get_Value_mEC1747FC15B5499959F5FD389EC00955E965D653(L_8, Lazy_1_get_Value_mEC1747FC15B5499959F5FD389EC00955E965D653_RuntimeMethod_var);
		NullCheck(L_9);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_10;
		L_10 = RectTransform_get_rect_mC82A60F8C3805ED9833508CCC233689641207488(L_9, NULL);
		V_1 = L_10;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11 = V_0;
		bool L_12;
		L_12 = Rect_Contains_mB1160CD465F3E9616AA4EED72AFFD611BD8D2B6B((&V_1), L_11, NULL);
		if (L_12)
		{
			goto IL_004a;
		}
	}
	{
		// return float.PositiveInfinity;
		return (std::numeric_limits<float>::infinity());
	}

IL_004a:
	{
		// localPoint = transform.TransformSize(localPoint);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_13;
		L_13 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
		L_15 = TransformExtensions_TransformSize_m40D3EFADE7E5101BAACA65F3F7510E37184801C2(L_13, L_14, NULL);
		V_0 = L_15;
		// return Math.Abs(localPoint.z);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16 = V_0;
		float L_17 = L_16.___z_4;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		float L_18;
		L_18 = fabsf(L_17);
		return L_18;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.NearInteractionTouchableUnityUI::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NearInteractionTouchableUnityUI_OnEnable_m99EAB753C1CD20881EE98E53429DF1CB663BC09F (NearInteractionTouchableUnityUI_t86123ECF22EE6D42187517CE7BCFD29236742C5D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m47734AE400D71693EE76B0889D6E6D17CDC43881_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NearInteractionTouchableUnityUI_t86123ECF22EE6D42187517CE7BCFD29236742C5D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// instances.Add(this);
		il2cpp_codegen_runtime_class_init_inline(NearInteractionTouchableUnityUI_t86123ECF22EE6D42187517CE7BCFD29236742C5D_il2cpp_TypeInfo_var);
		List_1_tE586C7DF7362A54F1367795984EFC563AF4062C4* L_0 = ((NearInteractionTouchableUnityUI_t86123ECF22EE6D42187517CE7BCFD29236742C5D_StaticFields*)il2cpp_codegen_static_fields_for(NearInteractionTouchableUnityUI_t86123ECF22EE6D42187517CE7BCFD29236742C5D_il2cpp_TypeInfo_var))->___instances_7;
		NullCheck(L_0);
		List_1_Add_m47734AE400D71693EE76B0889D6E6D17CDC43881_inline(L_0, __this, List_1_Add_m47734AE400D71693EE76B0889D6E6D17CDC43881_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.NearInteractionTouchableUnityUI::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NearInteractionTouchableUnityUI_OnDisable_m6B3D6011004784E8A2DB8DB1B2272A14DE43277B (NearInteractionTouchableUnityUI_t86123ECF22EE6D42187517CE7BCFD29236742C5D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Remove_m9143FBCA1AA75A93F270E191F63CBE70FBC49DEE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NearInteractionTouchableUnityUI_t86123ECF22EE6D42187517CE7BCFD29236742C5D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// instances.Remove(this);
		il2cpp_codegen_runtime_class_init_inline(NearInteractionTouchableUnityUI_t86123ECF22EE6D42187517CE7BCFD29236742C5D_il2cpp_TypeInfo_var);
		List_1_tE586C7DF7362A54F1367795984EFC563AF4062C4* L_0 = ((NearInteractionTouchableUnityUI_t86123ECF22EE6D42187517CE7BCFD29236742C5D_StaticFields*)il2cpp_codegen_static_fields_for(NearInteractionTouchableUnityUI_t86123ECF22EE6D42187517CE7BCFD29236742C5D_il2cpp_TypeInfo_var))->___instances_7;
		NullCheck(L_0);
		bool L_1;
		L_1 = List_1_Remove_m9143FBCA1AA75A93F270E191F63CBE70FBC49DEE(L_0, __this, List_1_Remove_m9143FBCA1AA75A93F270E191F63CBE70FBC49DEE_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.NearInteractionTouchableUnityUI::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NearInteractionTouchableUnityUI__cctor_mF7531FC62A6CCD12BCBC4E8714C79C4BFE10DC3B (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m71BEF1920FBF6F1650A90E3004D4A7ECD6738D18_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tE586C7DF7362A54F1367795984EFC563AF4062C4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NearInteractionTouchableUnityUI_t86123ECF22EE6D42187517CE7BCFD29236742C5D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static readonly List<NearInteractionTouchableUnityUI> instances = new List<NearInteractionTouchableUnityUI>();
		List_1_tE586C7DF7362A54F1367795984EFC563AF4062C4* L_0 = (List_1_tE586C7DF7362A54F1367795984EFC563AF4062C4*)il2cpp_codegen_object_new(List_1_tE586C7DF7362A54F1367795984EFC563AF4062C4_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_m71BEF1920FBF6F1650A90E3004D4A7ECD6738D18(L_0, List_1__ctor_m71BEF1920FBF6F1650A90E3004D4A7ECD6738D18_RuntimeMethod_var);
		((NearInteractionTouchableUnityUI_t86123ECF22EE6D42187517CE7BCFD29236742C5D_StaticFields*)il2cpp_codegen_static_fields_for(NearInteractionTouchableUnityUI_t86123ECF22EE6D42187517CE7BCFD29236742C5D_il2cpp_TypeInfo_var))->___instances_7 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((NearInteractionTouchableUnityUI_t86123ECF22EE6D42187517CE7BCFD29236742C5D_StaticFields*)il2cpp_codegen_static_fields_for(NearInteractionTouchableUnityUI_t86123ECF22EE6D42187517CE7BCFD29236742C5D_il2cpp_TypeInfo_var))->___instances_7), (void*)L_0);
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
// System.Boolean Microsoft.MixedReality.Toolkit.Input.NearInteractionTouchableVolume::get_ColliderEnabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NearInteractionTouchableVolume_get_ColliderEnabled_mCE83CFE49C1610583661E15329D64B6C4B6DBCDF (NearInteractionTouchableVolume_tEA877F0356213409D1EC47C3EB3DFBA6D1A47B98* __this, const RuntimeMethod* method) 
{
	{
		// public bool ColliderEnabled => touchableCollider.enabled && touchableCollider.gameObject.activeInHierarchy;
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_0 = __this->___touchableCollider_6;
		NullCheck(L_0);
		bool L_1;
		L_1 = Collider_get_enabled_mDBFB488088ADB14C8016A83EF445653AC5A4A12B(L_0, NULL);
		if (!L_1)
		{
			goto IL_001e;
		}
	}
	{
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_2 = __this->___touchableCollider_6;
		NullCheck(L_2);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3;
		L_3 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_2, NULL);
		NullCheck(L_3);
		bool L_4;
		L_4 = GameObject_get_activeInHierarchy_m49250F4F168DCC5388D5BE4F6A5681386907B109(L_3, NULL);
		return L_4;
	}

IL_001e:
	{
		return (bool)0;
	}
}
// UnityEngine.Collider Microsoft.MixedReality.Toolkit.Input.NearInteractionTouchableVolume::get_TouchableCollider()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* NearInteractionTouchableVolume_get_TouchableCollider_mAC4D7DED1BA2A42D502917BF96E2D509EA908FAE (NearInteractionTouchableVolume_tEA877F0356213409D1EC47C3EB3DFBA6D1A47B98* __this, const RuntimeMethod* method) 
{
	{
		// public Collider TouchableCollider => touchableCollider;
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_0 = __this->___touchableCollider_6;
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.NearInteractionTouchableVolume::OnValidate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NearInteractionTouchableVolume_OnValidate_m8A6AF8BF8412245FE8D6D7107843D721030CA20C (NearInteractionTouchableVolume_tEA877F0356213409D1EC47C3EB3DFBA6D1A47B98* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisCollider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_m820398EDBF1D3766C3166A0C323A127662A29A14_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// base.OnValidate();
		BaseNearInteractionTouchable_OnValidate_m83A36D78A4A17EB73D54CB9B52ACEC050A100675(__this, NULL);
		// touchableCollider = GetComponent<Collider>();
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_0;
		L_0 = Component_GetComponent_TisCollider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_m820398EDBF1D3766C3166A0C323A127662A29A14(__this, Component_GetComponent_TisCollider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_m820398EDBF1D3766C3166A0C323A127662A29A14_RuntimeMethod_var);
		__this->___touchableCollider_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___touchableCollider_6), (void*)L_0);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.NearInteractionTouchableVolume::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NearInteractionTouchableVolume_Awake_mCF799E87DC6A53CC8959DD4B135BBF10A157B697 (NearInteractionTouchableVolume_tEA877F0356213409D1EC47C3EB3DFBA6D1A47B98* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisCollider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_m820398EDBF1D3766C3166A0C323A127662A29A14_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (touchableCollider == null)
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_0 = __this->___touchableCollider_6;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		// touchableCollider = GetComponent<Collider>();
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_2;
		L_2 = Component_GetComponent_TisCollider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_m820398EDBF1D3766C3166A0C323A127662A29A14(__this, Component_GetComponent_TisCollider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_m820398EDBF1D3766C3166A0C323A127662A29A14_RuntimeMethod_var);
		__this->___touchableCollider_6 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___touchableCollider_6), (void*)L_2);
	}

IL_001a:
	{
		// }
		return;
	}
}
// System.Single Microsoft.MixedReality.Toolkit.Input.NearInteractionTouchableVolume::DistanceToTouchable(UnityEngine.Vector3,UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float NearInteractionTouchableVolume_DistanceToTouchable_m4CDD198542E090DA593C604E5ACC722F830A119F (NearInteractionTouchableVolume_tEA877F0356213409D1EC47C3EB3DFBA6D1A47B98* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___samplePoint0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___normal1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// Vector3 closest = TouchableCollider.ClosestPoint(samplePoint);
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_0;
		L_0 = NearInteractionTouchableVolume_get_TouchableCollider_mAC4D7DED1BA2A42D502917BF96E2D509EA908FAE_inline(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___samplePoint0;
		NullCheck(L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Collider_ClosestPoint_mFFF9B6F6CF9F18B22B325835A3E2E78A1C03BFCB(L_0, L_1, NULL);
		V_0 = L_2;
		// normal = (samplePoint - closest);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_3 = ___normal1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___samplePoint0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Vector3_op_Subtraction_m1690F44F6DC92B770A940B6CF8AE0535625A9824_inline(L_4, L_5, NULL);
		*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_3 = L_6;
		// if (normal == Vector3.zero)
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_7 = ___normal1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = (*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_7);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline(NULL);
		bool L_10;
		L_10 = Vector3_op_Equality_m15951D1B53E3BE36C9D265E229090020FBD72EBB_inline(L_8, L_9, NULL);
		if (!L_10)
		{
			goto IL_0057;
		}
	}
	{
		// normal = samplePoint - TouchableCollider.bounds.center;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_11 = ___normal1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12 = ___samplePoint0;
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_13;
		L_13 = NearInteractionTouchableVolume_get_TouchableCollider_mAC4D7DED1BA2A42D502917BF96E2D509EA908FAE_inline(__this, NULL);
		NullCheck(L_13);
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 L_14;
		L_14 = Collider_get_bounds_mCC32F749590E9A85C7930E5355661367F78E4CB4(L_13, NULL);
		V_1 = L_14;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
		L_15 = Bounds_get_center_m5B05F81CB835EB6DD8628FDA24B638F477984DC3((&V_1), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16;
		L_16 = Vector3_op_Subtraction_m1690F44F6DC92B770A940B6CF8AE0535625A9824_inline(L_12, L_15, NULL);
		*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_11 = L_16;
		// normal.Normalize();
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_17 = ___normal1;
		Vector3_Normalize_mC749B887A4C74BA0A2E13E6377F17CCAEB0AADA8_inline(L_17, NULL);
		// return -1;
		return (-1.0f);
	}

IL_0057:
	{
		// float dist = normal.magnitude;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_18 = ___normal1;
		float L_19;
		L_19 = Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline(L_18, NULL);
		// normal.Normalize();
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_20 = ___normal1;
		Vector3_Normalize_mC749B887A4C74BA0A2E13E6377F17CCAEB0AADA8_inline(L_20, NULL);
		// return dist;
		return L_19;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.NearInteractionTouchableVolume::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NearInteractionTouchableVolume__ctor_mAD8F60404D1906D0D5B84E7F4F773738DCD85E1B (NearInteractionTouchableVolume_tEA877F0356213409D1EC47C3EB3DFBA6D1A47B98* __this, const RuntimeMethod* method) 
{
	{
		BaseNearInteractionTouchable__ctor_m77EA109C10F21EE0E07BB5D7B0B26B76A2957F02(__this, NULL);
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
// System.Void Microsoft.MixedReality.Toolkit.Input.Utilities.CanvasUtility::OnPointerClicked(Microsoft.MixedReality.Toolkit.Input.MixedRealityPointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CanvasUtility_OnPointerClicked_mAB78A5977F610063065225308E5BB35D89A809AF (CanvasUtility_tBDD208210148DDAF5B78F43368E65363C295B7BF* __this, MixedRealityPointerEventData_t109EE708B8ACE83EA37188C65C8F120B7418AB7B* ___eventData0, const RuntimeMethod* method) 
{
	{
		// public void OnPointerClicked(MixedRealityPointerEventData eventData) { }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.Utilities.CanvasUtility::OnPointerDown(Microsoft.MixedReality.Toolkit.Input.MixedRealityPointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CanvasUtility_OnPointerDown_mE7AE976FF455C2844A8A55F4F5CE7B8BDA991840 (CanvasUtility_tBDD208210148DDAF5B78F43368E65363C295B7BF* __this, MixedRealityPointerEventData_t109EE708B8ACE83EA37188C65C8F120B7418AB7B* ___eventData0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealityController_t8BF4741E7DBA358A1DB46E1DD9EF33C9CDEB8BFA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealityNearPointer_tA29E79073B12FE06E833720EBEE764F4E3D94373_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealityPointer_t6B17FD29F171D88877AB2EF9C59FEBB65ED6E446_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// oldIsTargetPositionLockedOnFocusLock = eventData.Pointer.IsTargetPositionLockedOnFocusLock;
		MixedRealityPointerEventData_t109EE708B8ACE83EA37188C65C8F120B7418AB7B* L_0 = ___eventData0;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = MixedRealityPointerEventData_get_Pointer_mE5664622195651CF4C2DC3CEAAF99E3823B74E82_inline(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = InterfaceFuncInvoker0< bool >::Invoke(15 /* System.Boolean Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointer::get_IsTargetPositionLockedOnFocusLock() */, IMixedRealityPointer_t6B17FD29F171D88877AB2EF9C59FEBB65ED6E446_il2cpp_TypeInfo_var, L_1);
		__this->___oldIsTargetPositionLockedOnFocusLock_4 = L_2;
		// if (!(eventData.Pointer is IMixedRealityNearPointer) && eventData.Pointer.Controller.IsRotationAvailable)
		MixedRealityPointerEventData_t109EE708B8ACE83EA37188C65C8F120B7418AB7B* L_3 = ___eventData0;
		NullCheck(L_3);
		RuntimeObject* L_4;
		L_4 = MixedRealityPointerEventData_get_Pointer_mE5664622195651CF4C2DC3CEAAF99E3823B74E82_inline(L_3, NULL);
		if (((RuntimeObject*)IsInst((RuntimeObject*)L_4, IMixedRealityNearPointer_tA29E79073B12FE06E833720EBEE764F4E3D94373_il2cpp_TypeInfo_var)))
		{
			goto IL_003c;
		}
	}
	{
		MixedRealityPointerEventData_t109EE708B8ACE83EA37188C65C8F120B7418AB7B* L_5 = ___eventData0;
		NullCheck(L_5);
		RuntimeObject* L_6;
		L_6 = MixedRealityPointerEventData_get_Pointer_mE5664622195651CF4C2DC3CEAAF99E3823B74E82_inline(L_5, NULL);
		NullCheck(L_6);
		RuntimeObject* L_7;
		L_7 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* Microsoft.MixedReality.Toolkit.Input.IMixedRealityController Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointer::get_Controller() */, IMixedRealityPointer_t6B17FD29F171D88877AB2EF9C59FEBB65ED6E446_il2cpp_TypeInfo_var, L_6);
		NullCheck(L_7);
		bool L_8;
		L_8 = InterfaceFuncInvoker0< bool >::Invoke(8 /* System.Boolean Microsoft.MixedReality.Toolkit.Input.IMixedRealityController::get_IsRotationAvailable() */, IMixedRealityController_t8BF4741E7DBA358A1DB46E1DD9EF33C9CDEB8BFA_il2cpp_TypeInfo_var, L_7);
		if (!L_8)
		{
			goto IL_003c;
		}
	}
	{
		// eventData.Pointer.IsTargetPositionLockedOnFocusLock = false;
		MixedRealityPointerEventData_t109EE708B8ACE83EA37188C65C8F120B7418AB7B* L_9 = ___eventData0;
		NullCheck(L_9);
		RuntimeObject* L_10;
		L_10 = MixedRealityPointerEventData_get_Pointer_mE5664622195651CF4C2DC3CEAAF99E3823B74E82_inline(L_9, NULL);
		NullCheck(L_10);
		InterfaceActionInvoker1< bool >::Invoke(16 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointer::set_IsTargetPositionLockedOnFocusLock(System.Boolean) */, IMixedRealityPointer_t6B17FD29F171D88877AB2EF9C59FEBB65ED6E446_il2cpp_TypeInfo_var, L_10, (bool)0);
	}

IL_003c:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.Utilities.CanvasUtility::OnPointerDragged(Microsoft.MixedReality.Toolkit.Input.MixedRealityPointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CanvasUtility_OnPointerDragged_m937FDA92E4720C6131A58ECFC3EDCA4CF1C9C44C (CanvasUtility_tBDD208210148DDAF5B78F43368E65363C295B7BF* __this, MixedRealityPointerEventData_t109EE708B8ACE83EA37188C65C8F120B7418AB7B* ___eventData0, const RuntimeMethod* method) 
{
	{
		// public void OnPointerDragged(MixedRealityPointerEventData eventData) { }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.Utilities.CanvasUtility::OnPointerUp(Microsoft.MixedReality.Toolkit.Input.MixedRealityPointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CanvasUtility_OnPointerUp_mD448F2E10F2DE1C6A757C110C7A2DA810E3398A6 (CanvasUtility_tBDD208210148DDAF5B78F43368E65363C295B7BF* __this, MixedRealityPointerEventData_t109EE708B8ACE83EA37188C65C8F120B7418AB7B* ___eventData0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealityPointer_t6B17FD29F171D88877AB2EF9C59FEBB65ED6E446_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// eventData.Pointer.IsTargetPositionLockedOnFocusLock = oldIsTargetPositionLockedOnFocusLock;
		MixedRealityPointerEventData_t109EE708B8ACE83EA37188C65C8F120B7418AB7B* L_0 = ___eventData0;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = MixedRealityPointerEventData_get_Pointer_mE5664622195651CF4C2DC3CEAAF99E3823B74E82_inline(L_0, NULL);
		bool L_2 = __this->___oldIsTargetPositionLockedOnFocusLock_4;
		NullCheck(L_1);
		InterfaceActionInvoker1< bool >::Invoke(16 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointer::set_IsTargetPositionLockedOnFocusLock(System.Boolean) */, IMixedRealityPointer_t6B17FD29F171D88877AB2EF9C59FEBB65ED6E446_il2cpp_TypeInfo_var, L_1, L_2);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.Utilities.CanvasUtility::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CanvasUtility_Start_mEBC634FCF3E12947B1423B45C88D6DD68EC50779 (CanvasUtility_tBDD208210148DDAF5B78F43368E65363C295B7BF* __this, const RuntimeMethod* method) 
{
	{
		// VerifyCanvasConfiguration();
		CanvasUtility_VerifyCanvasConfiguration_m9315F00E73D436A567A3850B91195DE426B3E6D4(__this, NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.Utilities.CanvasUtility::VerifyCanvasConfiguration()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CanvasUtility_VerifyCanvasConfiguration_m9315F00E73D436A567A3850B91195DE426B3E6D4 (CanvasUtility_tBDD208210148DDAF5B78F43368E65363C295B7BF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisCanvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26_m209BA4F663AB98A4504995B5BD3EADEDEFB92BF2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CoreServices_tCB1FB80E338B89BCA07C52C15B876BC6D4B3439B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealityFocusProvider_t2766EE713C9E441F03CA32A27287C1EF1713AE00_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealityInputSystem_t73D9E8D52E761DF1CC230411D0EFD51104FF68B2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral43C3CC13C78691910F4927DB8EB167585E5EE243);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral686F06ED763DC3A126DD29B1C7EC38784505A900);
		s_Il2CppMethodInitialized = true;
	}
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* V_0 = NULL;
	RuntimeObject* G_B3_0 = NULL;
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* G_B3_1 = NULL;
	RuntimeObject* G_B2_0 = NULL;
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* G_B2_1 = NULL;
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* G_B6_0 = NULL;
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* G_B6_1 = NULL;
	RuntimeObject* G_B5_0 = NULL;
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* G_B5_1 = NULL;
	RuntimeObject* G_B4_0 = NULL;
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* G_B4_1 = NULL;
	{
		// Canvas canvas = GetComponent<Canvas>();
		Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* L_0;
		L_0 = Component_GetComponent_TisCanvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26_m209BA4F663AB98A4504995B5BD3EADEDEFB92BF2(__this, Component_GetComponent_TisCanvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26_m209BA4F663AB98A4504995B5BD3EADEDEFB92BF2_RuntimeMethod_var);
		V_0 = L_0;
		// if (canvas.worldCamera == null)
		Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* L_1 = V_0;
		NullCheck(L_1);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_2;
		L_2 = Canvas_get_worldCamera_mD2FDE13B61A5213F4E64B40008EB0A8D2D07B853(L_1, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_2, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_3)
		{
			goto IL_0050;
		}
	}
	{
		// canvas.worldCamera = CoreServices.InputSystem?.FocusProvider?.UIRaycastCamera;
		Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* L_4 = V_0;
		il2cpp_codegen_runtime_class_init_inline(CoreServices_tCB1FB80E338B89BCA07C52C15B876BC6D4B3439B_il2cpp_TypeInfo_var);
		RuntimeObject* L_5;
		L_5 = CoreServices_get_InputSystem_m47147418643299159BF4DF408F768844FDC33943(NULL);
		RuntimeObject* L_6 = L_5;
		G_B2_0 = L_6;
		G_B2_1 = L_4;
		if (L_6)
		{
			G_B3_0 = L_6;
			G_B3_1 = L_4;
			goto IL_0022;
		}
	}
	{
		G_B6_0 = ((Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184*)(NULL));
		G_B6_1 = G_B2_1;
		goto IL_0033;
	}

IL_0022:
	{
		NullCheck(G_B3_0);
		RuntimeObject* L_7;
		L_7 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(7 /* Microsoft.MixedReality.Toolkit.Input.IMixedRealityFocusProvider Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem::get_FocusProvider() */, IMixedRealityInputSystem_t73D9E8D52E761DF1CC230411D0EFD51104FF68B2_il2cpp_TypeInfo_var, G_B3_0);
		RuntimeObject* L_8 = L_7;
		G_B4_0 = L_8;
		G_B4_1 = G_B3_1;
		if (L_8)
		{
			G_B5_0 = L_8;
			G_B5_1 = G_B3_1;
			goto IL_002e;
		}
	}
	{
		G_B6_0 = ((Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184*)(NULL));
		G_B6_1 = G_B4_1;
		goto IL_0033;
	}

IL_002e:
	{
		NullCheck(G_B5_0);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_9;
		L_9 = InterfaceFuncInvoker0< Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* >::Invoke(2 /* UnityEngine.Camera Microsoft.MixedReality.Toolkit.Input.IMixedRealityFocusProvider::get_UIRaycastCamera() */, IMixedRealityFocusProvider_t2766EE713C9E441F03CA32A27287C1EF1713AE00_il2cpp_TypeInfo_var, G_B5_0);
		G_B6_0 = L_9;
		G_B6_1 = G_B5_1;
	}

IL_0033:
	{
		NullCheck(G_B6_1);
		Canvas_set_worldCamera_m007F7DABDB5A3A6BFB043E3500DA82A4D936EDD4(G_B6_1, G_B6_0, NULL);
		// if (EventSystem.current == null)
		il2cpp_codegen_runtime_class_init_inline(EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707_il2cpp_TypeInfo_var);
		EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* L_10;
		L_10 = EventSystem_get_current_mD15EA86304E070D175EF359A051A7DB807CA26C0(NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_11;
		L_11 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_10, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_11)
		{
			goto IL_005a;
		}
	}
	{
		// Debug.LogError("No EventSystem detected. UI events will not be propagated to Unity UI.");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_m059825802BB6AF7EA9693FEBEEB0D85F59A3E38E(_stringLiteral686F06ED763DC3A126DD29B1C7EC38784505A900, NULL);
		return;
	}

IL_0050:
	{
		// Debug.LogError("World Space Canvas should have no camera set to work properly with Mixed Reality Toolkit. At runtime, they'll get their camera set automatically.");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_m059825802BB6AF7EA9693FEBEEB0D85F59A3E38E(_stringLiteral43C3CC13C78691910F4927DB8EB167585E5EE243, NULL);
	}

IL_005a:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.Utilities.CanvasUtility::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CanvasUtility__ctor_m18B72D4A0F213A2B38FEDD82B1A2804AB936B1B4 (CanvasUtility_tBDD208210148DDAF5B78F43368E65363C295B7BF* __this, const RuntimeMethod* method) 
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
// System.Void Microsoft.MixedReality.Toolkit.Input.Utilities.ScaleMeshEffect::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScaleMeshEffect_Awake_m8C109A0EB3B03F927EAF6D84ECEF5461CFC6BEBE (ScaleMeshEffect_tA004B29ABBD14A138558659717C7F3AD8E2B3982* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentInParent_TisCanvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26_m5FB554DD7C0F662DAB84C0F292B221CAE3F0A5B3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* V_0 = NULL;
	{
		// base.Awake();
		UIBehaviour_Awake_mDF9D1A4867C8E730C59A7CAE97709CA9B8F3A0F2(__this, NULL);
		// var canvas = GetComponentInParent<Canvas>();
		Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* L_0;
		L_0 = Component_GetComponentInParent_TisCanvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26_m5FB554DD7C0F662DAB84C0F292B221CAE3F0A5B3(__this, Component_GetComponentInParent_TisCanvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26_m5FB554DD7C0F662DAB84C0F292B221CAE3F0A5B3_RuntimeMethod_var);
		V_0 = L_0;
		// if (canvas != null)
		Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* L_1 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_1, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_2)
		{
			goto IL_0032;
		}
	}
	{
		// canvas.additionalShaderChannels |= AdditionalCanvasShaderChannels.TexCoord2;
		Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* L_3 = V_0;
		Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* L_4 = L_3;
		NullCheck(L_4);
		int32_t L_5;
		L_5 = Canvas_get_additionalShaderChannels_m3039B1E9ADDCDC514E444A4BB56527FFAC3E6287(L_4, NULL);
		NullCheck(L_4);
		Canvas_set_additionalShaderChannels_m182712BE72B72BE41FAFE97F2FD79C2476132DB0(L_4, ((int32_t)((int32_t)L_5|2)), NULL);
		// canvas.additionalShaderChannels |= AdditionalCanvasShaderChannels.TexCoord3;
		Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* L_6 = V_0;
		Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* L_7 = L_6;
		NullCheck(L_7);
		int32_t L_8;
		L_8 = Canvas_get_additionalShaderChannels_m3039B1E9ADDCDC514E444A4BB56527FFAC3E6287(L_7, NULL);
		NullCheck(L_7);
		Canvas_set_additionalShaderChannels_m182712BE72B72BE41FAFE97F2FD79C2476132DB0(L_7, ((int32_t)((int32_t)L_8|4)), NULL);
	}

IL_0032:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.Utilities.ScaleMeshEffect::ModifyMesh(UnityEngine.UI.VertexHelper)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScaleMeshEffect_ModifyMesh_mC0F869B18FF2A46C96081B59A768DDDCB04D2E1A (ScaleMeshEffect_tA004B29ABBD14A138558659717C7F3AD8E2B3982* __this, VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* ___vh0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentInParent_TisCanvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26_m5FB554DD7C0F662DAB84C0F292B221CAE3F0A5B3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* V_0 = NULL;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* V_2 = NULL;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_3;
	memset((&V_3), 0, sizeof(V_3));
	UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 V_4;
	memset((&V_4), 0, sizeof(V_4));
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D V_5;
	memset((&V_5), 0, sizeof(V_5));
	int32_t V_6 = 0;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* G_B2_0 = NULL;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* G_B1_0 = NULL;
	float G_B3_0 = 0.0f;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* G_B3_1 = NULL;
	{
		// var rectTransform = transform as RectTransform;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		V_0 = ((RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5*)IsInstSealed((RuntimeObject*)L_0, RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_il2cpp_TypeInfo_var));
		// var scale = new Vector2(rectTransform.rect.width * rectTransform.localScale.x,
		//                         rectTransform.rect.height * rectTransform.localScale.y);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_1 = V_0;
		NullCheck(L_1);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_2;
		L_2 = RectTransform_get_rect_mC82A60F8C3805ED9833508CCC233689641207488(L_1, NULL);
		V_5 = L_2;
		float L_3;
		L_3 = Rect_get_width_m620D67551372073C9C32C4C4624C2A5713F7F9A9((&V_5), NULL);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_4 = V_0;
		NullCheck(L_4);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F(L_4, NULL);
		float L_6 = L_5.___x_2;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_7 = V_0;
		NullCheck(L_7);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_8;
		L_8 = RectTransform_get_rect_mC82A60F8C3805ED9833508CCC233689641207488(L_7, NULL);
		V_5 = L_8;
		float L_9;
		L_9 = Rect_get_height_mE1AA6C6C725CCD2D317BD2157396D3CF7D47C9D8((&V_5), NULL);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_10 = V_0;
		NullCheck(L_10);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		L_11 = Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F(L_10, NULL);
		float L_12 = L_11.___y_3;
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&V_1), ((float)il2cpp_codegen_multiply(L_3, L_6)), ((float)il2cpp_codegen_multiply(L_9, L_12)), NULL);
		// var canvas = GetComponentInParent<Canvas>();
		Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* L_13;
		L_13 = Component_GetComponentInParent_TisCanvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26_m5FB554DD7C0F662DAB84C0F292B221CAE3F0A5B3(__this, Component_GetComponentInParent_TisCanvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26_m5FB554DD7C0F662DAB84C0F292B221CAE3F0A5B3_RuntimeMethod_var);
		V_2 = L_13;
		// var depth = new Vector2((canvas ? (1.0f / canvas.transform.lossyScale.z) : 1.0f) * rectTransform.localScale.z,
		//                         -1.0f);
		Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* L_14 = V_2;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_15;
		L_15 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_14, NULL);
		G_B1_0 = (&V_3);
		if (L_15)
		{
			G_B2_0 = (&V_3);
			goto IL_0061;
		}
	}
	{
		G_B3_0 = (1.0f);
		G_B3_1 = G_B1_0;
		goto IL_0077;
	}

IL_0061:
	{
		Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* L_16 = V_2;
		NullCheck(L_16);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_17;
		L_17 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_16, NULL);
		NullCheck(L_17);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18;
		L_18 = Transform_get_lossyScale_mFF740DA4BE1489C6882CD2F3A37B7321176E5D07(L_17, NULL);
		float L_19 = L_18.___z_4;
		G_B3_0 = ((float)((1.0f)/L_19));
		G_B3_1 = G_B2_0;
	}

IL_0077:
	{
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_20 = V_0;
		NullCheck(L_20);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21;
		L_21 = Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F(L_20, NULL);
		float L_22 = L_21.___z_4;
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline(G_B3_1, ((float)il2cpp_codegen_multiply(G_B3_0, L_22)), (-1.0f), NULL);
		// var vertex = new UIVertex();
		il2cpp_codegen_initobj((&V_4), sizeof(UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207));
		// for (var i = 0; i < vh.currentVertCount; ++i)
		V_6 = 0;
		goto IL_00ce;
	}

IL_009a:
	{
		// vh.PopulateUIVertex(ref vertex, i);
		VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* L_23 = ___vh0;
		int32_t L_24 = V_6;
		NullCheck(L_23);
		VertexHelper_PopulateUIVertex_m48FF05C38D56529E18A360D629F4842BE5D050BE(L_23, (&V_4), L_24, NULL);
		// vertex.uv2 = scale;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_25 = V_1;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_26;
		L_26 = Vector4_op_Implicit_m6162D8136CFE97A5A8BD3B764F9074DB96AA5CD0_inline(L_25, NULL);
		(&V_4)->___uv2_6 = L_26;
		// vertex.uv3 = depth;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_27 = V_3;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_28;
		L_28 = Vector4_op_Implicit_m6162D8136CFE97A5A8BD3B764F9074DB96AA5CD0_inline(L_27, NULL);
		(&V_4)->___uv3_7 = L_28;
		// vh.SetUIVertex(vertex, i);
		VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* L_29 = ___vh0;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_30 = V_4;
		int32_t L_31 = V_6;
		NullCheck(L_29);
		VertexHelper_SetUIVertex_m539A518867E7872E0893715AD372DC9A06334FD9(L_29, L_30, L_31, NULL);
		// for (var i = 0; i < vh.currentVertCount; ++i)
		int32_t L_32 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add(L_32, 1));
	}

IL_00ce:
	{
		// for (var i = 0; i < vh.currentVertCount; ++i)
		int32_t L_33 = V_6;
		VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* L_34 = ___vh0;
		NullCheck(L_34);
		int32_t L_35;
		L_35 = VertexHelper_get_currentVertCount_m45BFEBD6FCB7DF3BF9F76946D6002BDC58B173A4(L_34, NULL);
		if ((((int32_t)L_33) < ((int32_t)L_35)))
		{
			goto IL_009a;
		}
	}
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.Utilities.ScaleMeshEffect::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScaleMeshEffect__ctor_mD916534F421AEB3D60EE65ECA15B70A1A3F0F2DE (ScaleMeshEffect_tA004B29ABBD14A138558659717C7F3AD8E2B3982* __this, const RuntimeMethod* method) 
{
	{
		BaseMeshEffect__ctor_mFFF23FD89B32150DAC512C556A1CCF563D062427(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_forward_mEBAB24D77FC02FC88ED880738C3B1D47C758B3EB_inline (const RuntimeMethod* method) 
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
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___forwardVector_11;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_UnaryNegation_m3AC523A7BED6E843165BDF598690F0560D8CAA63_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___a0;
		float L_3 = L_2.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___a0;
		float L_5 = L_4.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_6), ((-L_1)), ((-L_3)), ((-L_5)), /*hidden argument*/NULL);
		V_0 = L_6;
		goto IL_001e;
	}

IL_001e:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = V_0;
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* NearInteractionTouchableVolume_get_TouchableCollider_mAC4D7DED1BA2A42D502917BF96E2D509EA908FAE_inline (NearInteractionTouchableVolume_tEA877F0356213409D1EC47C3EB3DFBA6D1A47B98* __this, const RuntimeMethod* method) 
{
	{
		// public Collider TouchableCollider => touchableCollider;
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_0 = __this->___touchableCollider_6;
		return L_0;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector3_op_Equality_m15951D1B53E3BE36C9D265E229090020FBD72EBB_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___lhs0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rhs1, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	bool V_4 = false;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___lhs0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___rhs1;
		float L_3 = L_2.___x_2;
		V_0 = ((float)il2cpp_codegen_subtract(L_1, L_3));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___lhs0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___rhs1;
		float L_7 = L_6.___y_3;
		V_1 = ((float)il2cpp_codegen_subtract(L_5, L_7));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___lhs0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___rhs1;
		float L_11 = L_10.___z_4;
		V_2 = ((float)il2cpp_codegen_subtract(L_9, L_11));
		float L_12 = V_0;
		float L_13 = V_0;
		float L_14 = V_1;
		float L_15 = V_1;
		float L_16 = V_2;
		float L_17 = V_2;
		V_3 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_12, L_13)), ((float)il2cpp_codegen_multiply(L_14, L_15)))), ((float)il2cpp_codegen_multiply(L_16, L_17))));
		float L_18 = V_3;
		V_4 = (bool)((((float)L_18) < ((float)(9.99999944E-11f)))? 1 : 0);
		goto IL_0043;
	}

IL_0043:
	{
		bool L_19 = V_4;
		return L_19;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3_Normalize_mC749B887A4C74BA0A2E13E6377F17CCAEB0AADA8_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	bool V_1 = false;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = (*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)__this);
		float L_1;
		L_1 = Vector3_Magnitude_m6AD0BEBF88AAF98188A851E62D7A32CB5B7830EF_inline(L_0, NULL);
		V_0 = L_1;
		float L_2 = V_0;
		V_1 = (bool)((((float)L_2) > ((float)(9.99999975E-06f)))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_002d;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = (*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)__this);
		float L_5 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Vector3_op_Division_mD7200D6D432BAFC4135C5B17A0B0A812203B0270_inline(L_4, L_5, NULL);
		*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)__this = L_6;
		goto IL_0038;
	}

IL_002d:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline(NULL);
		*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)__this = L_7;
	}

IL_0038:
	{
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		float L_0 = __this->___x_2;
		float L_1 = __this->___x_2;
		float L_2 = __this->___y_3;
		float L_3 = __this->___y_3;
		float L_4 = __this->___z_4;
		float L_5 = __this->___z_4;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_6;
		L_6 = sqrt(((double)((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_0, L_1)), ((float)il2cpp_codegen_multiply(L_2, L_3)))), ((float)il2cpp_codegen_multiply(L_4, L_5))))));
		V_0 = ((float)L_6);
		goto IL_0034;
	}

IL_0034:
	{
		float L_7 = V_0;
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* MixedRealityPointerEventData_get_Pointer_mE5664622195651CF4C2DC3CEAAF99E3823B74E82_inline (MixedRealityPointerEventData_t109EE708B8ACE83EA37188C65C8F120B7418AB7B* __this, const RuntimeMethod* method) 
{
	{
		// public IMixedRealityPointer Pointer { get; private set; }
		RuntimeObject* L_0 = __this->___U3CPointerU3Ek__BackingField_6;
		return L_0;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Magnitude_m6AD0BEBF88AAF98188A851E62D7A32CB5B7830EF_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___vector0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___vector0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___vector0;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___vector0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___vector0;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___vector0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___vector0;
		float L_11 = L_10.___z_4;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_12;
		L_12 = sqrt(((double)((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_1, L_3)), ((float)il2cpp_codegen_multiply(L_5, L_7)))), ((float)il2cpp_codegen_multiply(L_9, L_11))))));
		V_0 = ((float)L_12);
		goto IL_0034;
	}

IL_0034:
	{
		float L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Division_mD7200D6D432BAFC4135C5B17A0B0A812203B0270_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) 
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
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_9), ((float)(L_1/L_2)), ((float)(L_4/L_5)), ((float)(L_7/L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		return L_10;
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
