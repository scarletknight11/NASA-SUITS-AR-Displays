#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


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

// System.Comparison`1<UnityEngine.EventSystems.RaycastResult>
struct Comparison_1_t9FCAC8C8CE160A96C5AAD2DE1D353DCE8A2FEEFC;
// System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.BaseEventSystem/EventHandlerEntry>>
struct Dictionary_2_t18E076B12814DFAAD91B5BC1B163AAFAC0CADEFD;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Teleport.IMixedRealityTeleportHandler>
struct EventFunction_1_t2CE8894DBC6C4473D3E4C3E0833028684F97D7AF;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<System.Object>
struct EventFunction_1_t297B5C47242D1B98BEC955E2804FA142B43E7927;
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
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
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
// UnityEngine.EventSystems.BaseRaycaster
struct BaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832;
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
// UnityEngine.EventSystems.EventSystem
struct EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// System.IAsyncResult
struct IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5;
// Microsoft.MixedReality.Toolkit.IMixedRealityEventSource
struct IMixedRealityEventSource_t9E9DFD08DEE578702833FF502590A1E0476E59E1;
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem
struct IMixedRealityInputSystem_t73D9E8D52E761DF1CC230411D0EFD51104FF68B2;
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointer
struct IMixedRealityPointer_t6B17FD29F171D88877AB2EF9C59FEBB65ED6E446;
// Microsoft.MixedReality.Toolkit.IMixedRealityServiceRegistrar
struct IMixedRealityServiceRegistrar_t4B893B7CDAAC977211D826D02C8522ECA327D715;
// Microsoft.MixedReality.Toolkit.Teleport.IMixedRealityTeleportHandler
struct IMixedRealityTeleportHandler_t383BDADA186439FCF6A24A6164C474241B875942;
// Microsoft.MixedReality.Toolkit.Teleport.IMixedRealityTeleportHotspot
struct IMixedRealityTeleportHotspot_t2B1FA652E4AD3169008B2876A242332E322D727A;
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityTeleportPointer
struct IMixedRealityTeleportPointer_tB6657B604BCBD6DF6AB2701CC909184BE15B4C5D;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// Microsoft.MixedReality.Toolkit.Teleport.MixedRealityTeleportSystem
struct MixedRealityTeleportSystem_tE2A2E21B1DDFE2B8EB94C0BEC1007424E87EBDA2;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// System.String
struct String_t;
// Microsoft.MixedReality.Toolkit.Teleport.TeleportEventData
struct TeleportEventData_t3432241F7CF83009DB3D45E2C4DCED9AE87BEF86;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// System.Type
struct Type_t;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD;
// Microsoft.MixedReality.Toolkit.Teleport.MixedRealityTeleportSystem/<>c
struct U3CU3Ec_t921DFE24BC1BE9889160179C9E998F9EF7AF32AC;

IL2CPP_EXTERN_C RuntimeClass* CoreServices_tCB1FB80E338B89BCA07C52C15B876BC6D4B3439B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventFunction_1_t2CE8894DBC6C4473D3E4C3E0833028684F97D7AF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ExecuteEvents_t74DCF8B83743EE2773ACF182344612A048E2CC59_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IMixedRealityPointer_t6B17FD29F171D88877AB2EF9C59FEBB65ED6E446_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IMixedRealityTeleportHandler_t383BDADA186439FCF6A24A6164C474241B875942_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IMixedRealityTeleportHotspot_t2B1FA652E4AD3169008B2876A242332E322D727A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IMixedRealityTeleportPointer_tB6657B604BCBD6DF6AB2701CC909184BE15B4C5D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IPointerResult_t7778124D479BBC1920888EC74BB907B9B569599F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MixedRealityTeleportSystem_tE2A2E21B1DDFE2B8EB94C0BEC1007424E87EBDA2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TeleportEventData_t3432241F7CF83009DB3D45E2C4DCED9AE87BEF86_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t921DFE24BC1BE9889160179C9E998F9EF7AF32AC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral1368B5D5C5B45AE31591BCF3645486425E6C0A22;
IL2CPP_EXTERN_C String_t* _stringLiteral3BEDD8A5E4E11ACDACE8299C529195CB3424CE12;
IL2CPP_EXTERN_C String_t* _stringLiteral485A478CF03D1C7CBD8C53456B5CAA42882354D3;
IL2CPP_EXTERN_C String_t* _stringLiteral4F29D0F17814227DFDAADF5F3649A3FCB047B2CC;
IL2CPP_EXTERN_C String_t* _stringLiteral67B6449F1BAD0A542C06774CB4179DEC54F04D47;
IL2CPP_EXTERN_C String_t* _stringLiteral762DA1192ACEC40D9F1945FA764CE95DC42F814B;
IL2CPP_EXTERN_C String_t* _stringLiteral87697DFF6C7C5EA241FE037E78348244A0354ACA;
IL2CPP_EXTERN_C String_t* _stringLiteral8F8CFE1916B76200DC10D32F1AB7EC87F6DEA3F9;
IL2CPP_EXTERN_C String_t* _stringLiteralD818882F3D6DEA9ADE38F7ED17CB332A5E586505;
IL2CPP_EXTERN_C String_t* _stringLiteralF988C7F2F580EB6406722D922B922E2DFBAF00D4;
IL2CPP_EXTERN_C const RuntimeMethod* BaseEventSystem_HandleEvent_TisIMixedRealityTeleportHandler_t383BDADA186439FCF6A24A6164C474241B875942_mAA64841856F8330A774B9F40EEC70918A1AD8316_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ExecuteEvents_ValidateEventData_TisTeleportEventData_t3432241F7CF83009DB3D45E2C4DCED9AE87BEF86_m132CD1B349A6BC1AE776DBD8A36B0D566C62AECA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3C_cctorU3Eb__39_0_m61ECDD4F134D9DB91802612C339810CFC928466A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3C_cctorU3Eb__39_1_m1AB98CFA3892C922FEB39013A720E325B34F35A7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3C_cctorU3Eb__39_2_m7AF9C7F8305D8015C7697C4AF25E5CC715D25B3B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3C_cctorU3Eb__39_3_mA4BA227399985B40F3A9B369B07D8EAD7F5218A0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityObjectExtensions_IsNull_TisIMixedRealityTeleportPointer_tB6657B604BCBD6DF6AB2701CC909184BE15B4C5D_m27DC92F3FDCFEE4043BF0F12E1AB8CA9D26A921B_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;


IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tAD54F1DDC9770D63DEEA6570DB4289E2A6209433 
{
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

// Microsoft.MixedReality.Toolkit.Teleport.MixedRealityTeleportSystem/<>c
struct U3CU3Ec_t921DFE24BC1BE9889160179C9E998F9EF7AF32AC  : public RuntimeObject
{
};

struct U3CU3Ec_t921DFE24BC1BE9889160179C9E998F9EF7AF32AC_StaticFields
{
	// Microsoft.MixedReality.Toolkit.Teleport.MixedRealityTeleportSystem/<>c Microsoft.MixedReality.Toolkit.Teleport.MixedRealityTeleportSystem/<>c::<>9
	U3CU3Ec_t921DFE24BC1BE9889160179C9E998F9EF7AF32AC* ___U3CU3E9_0;
};

// System.Nullable`1<System.Boolean>
struct Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	bool ___value_1;
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

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// System.UInt16
struct UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455 
{
	// System.UInt16 System.UInt16::m_value
	uint16_t ___m_value_0;
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

// Microsoft.MixedReality.Toolkit.Input.MixedRealityRaycastHit
struct MixedRealityRaycastHit_t57E6733C18B1C7A79E01B1F2077BA642EBE324E9 
{
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Input.MixedRealityRaycastHit::point
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___point_0;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Input.MixedRealityRaycastHit::normal
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___normal_1;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Input.MixedRealityRaycastHit::barycentricCoordinate
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___barycentricCoordinate_2;
	// System.Single Microsoft.MixedReality.Toolkit.Input.MixedRealityRaycastHit::distance
	float ___distance_3;
	// System.Int32 Microsoft.MixedReality.Toolkit.Input.MixedRealityRaycastHit::triangleIndex
	int32_t ___triangleIndex_4;
	// UnityEngine.Vector2 Microsoft.MixedReality.Toolkit.Input.MixedRealityRaycastHit::textureCoord
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___textureCoord_5;
	// UnityEngine.Vector2 Microsoft.MixedReality.Toolkit.Input.MixedRealityRaycastHit::textureCoord2
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___textureCoord2_6;
	// UnityEngine.Transform Microsoft.MixedReality.Toolkit.Input.MixedRealityRaycastHit::transform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___transform_7;
	// UnityEngine.Vector2 Microsoft.MixedReality.Toolkit.Input.MixedRealityRaycastHit::lightmapCoord
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___lightmapCoord_8;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.MixedRealityRaycastHit::raycastValid
	bool ___raycastValid_9;
	// UnityEngine.Collider Microsoft.MixedReality.Toolkit.Input.MixedRealityRaycastHit::collider
	Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___collider_10;
};
// Native definition for P/Invoke marshalling of Microsoft.MixedReality.Toolkit.Input.MixedRealityRaycastHit
struct MixedRealityRaycastHit_t57E6733C18B1C7A79E01B1F2077BA642EBE324E9_marshaled_pinvoke
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___point_0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___normal_1;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___barycentricCoordinate_2;
	float ___distance_3;
	int32_t ___triangleIndex_4;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___textureCoord_5;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___textureCoord2_6;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___transform_7;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___lightmapCoord_8;
	int32_t ___raycastValid_9;
	Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___collider_10;
};
// Native definition for COM marshalling of Microsoft.MixedReality.Toolkit.Input.MixedRealityRaycastHit
struct MixedRealityRaycastHit_t57E6733C18B1C7A79E01B1F2077BA642EBE324E9_marshaled_com
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___point_0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___normal_1;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___barycentricCoordinate_2;
	float ___distance_3;
	int32_t ___triangleIndex_4;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___textureCoord_5;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___textureCoord2_6;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___transform_7;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___lightmapCoord_8;
	int32_t ___raycastValid_9;
	Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___collider_10;
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

// UnityEngine.EventSystems.RaycastResult
struct RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 
{
	// UnityEngine.GameObject UnityEngine.EventSystems.RaycastResult::m_GameObject
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_GameObject_0;
	// UnityEngine.EventSystems.BaseRaycaster UnityEngine.EventSystems.RaycastResult::module
	BaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832* ___module_1;
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
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldPosition_7;
	// UnityEngine.Vector3 UnityEngine.EventSystems.RaycastResult::worldNormal
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldNormal_8;
	// UnityEngine.Vector2 UnityEngine.EventSystems.RaycastResult::screenPosition
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___screenPosition_9;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::displayIndex
	int32_t ___displayIndex_10;
};
// Native definition for P/Invoke marshalling of UnityEngine.EventSystems.RaycastResult
struct RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023_marshaled_pinvoke
{
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_GameObject_0;
	BaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832* ___module_1;
	float ___distance_2;
	float ___index_3;
	int32_t ___depth_4;
	int32_t ___sortingLayer_5;
	int32_t ___sortingOrder_6;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldPosition_7;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldNormal_8;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___screenPosition_9;
	int32_t ___displayIndex_10;
};
// Native definition for COM marshalling of UnityEngine.EventSystems.RaycastResult
struct RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023_marshaled_com
{
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_GameObject_0;
	BaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832* ___module_1;
	float ___distance_2;
	float ___index_3;
	int32_t ___depth_4;
	int32_t ___sortingLayer_5;
	int32_t ___sortingOrder_6;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldPosition_7;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldNormal_8;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___screenPosition_9;
	int32_t ___displayIndex_10;
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

// Microsoft.MixedReality.Toolkit.Physics.FocusDetails
struct FocusDetails_tCC0560E1B8D05F5708757F751A5A469A4530EA76 
{
	// System.Single Microsoft.MixedReality.Toolkit.Physics.FocusDetails::<RayDistance>k__BackingField
	float ___U3CRayDistanceU3Ek__BackingField_0;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Physics.FocusDetails::<Point>k__BackingField
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CPointU3Ek__BackingField_1;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Physics.FocusDetails::<Normal>k__BackingField
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CNormalU3Ek__BackingField_2;
	// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.Physics.FocusDetails::<Object>k__BackingField
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___U3CObjectU3Ek__BackingField_3;
	// Microsoft.MixedReality.Toolkit.Input.MixedRealityRaycastHit Microsoft.MixedReality.Toolkit.Physics.FocusDetails::<LastRaycastHit>k__BackingField
	MixedRealityRaycastHit_t57E6733C18B1C7A79E01B1F2077BA642EBE324E9 ___U3CLastRaycastHitU3Ek__BackingField_4;
	// UnityEngine.EventSystems.RaycastResult Microsoft.MixedReality.Toolkit.Physics.FocusDetails::<LastGraphicsRaycastResult>k__BackingField
	RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 ___U3CLastGraphicsRaycastResultU3Ek__BackingField_5;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Physics.FocusDetails::<PointLocalSpace>k__BackingField
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CPointLocalSpaceU3Ek__BackingField_6;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Physics.FocusDetails::<NormalLocalSpace>k__BackingField
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CNormalLocalSpaceU3Ek__BackingField_7;
};
// Native definition for P/Invoke marshalling of Microsoft.MixedReality.Toolkit.Physics.FocusDetails
struct FocusDetails_tCC0560E1B8D05F5708757F751A5A469A4530EA76_marshaled_pinvoke
{
	float ___U3CRayDistanceU3Ek__BackingField_0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CPointU3Ek__BackingField_1;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CNormalU3Ek__BackingField_2;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___U3CObjectU3Ek__BackingField_3;
	MixedRealityRaycastHit_t57E6733C18B1C7A79E01B1F2077BA642EBE324E9_marshaled_pinvoke ___U3CLastRaycastHitU3Ek__BackingField_4;
	RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023_marshaled_pinvoke ___U3CLastGraphicsRaycastResultU3Ek__BackingField_5;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CPointLocalSpaceU3Ek__BackingField_6;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CNormalLocalSpaceU3Ek__BackingField_7;
};
// Native definition for COM marshalling of Microsoft.MixedReality.Toolkit.Physics.FocusDetails
struct FocusDetails_tCC0560E1B8D05F5708757F751A5A469A4530EA76_marshaled_com
{
	float ___U3CRayDistanceU3Ek__BackingField_0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CPointU3Ek__BackingField_1;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CNormalU3Ek__BackingField_2;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___U3CObjectU3Ek__BackingField_3;
	MixedRealityRaycastHit_t57E6733C18B1C7A79E01B1F2077BA642EBE324E9_marshaled_com ___U3CLastRaycastHitU3Ek__BackingField_4;
	RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023_marshaled_com ___U3CLastGraphicsRaycastResultU3Ek__BackingField_5;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CPointLocalSpaceU3Ek__BackingField_6;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CNormalLocalSpaceU3Ek__BackingField_7;
};

// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
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

// Microsoft.MixedReality.Toolkit.Teleport.TeleportEventData
struct TeleportEventData_t3432241F7CF83009DB3D45E2C4DCED9AE87BEF86  : public GenericBaseEventData_tA3C45766BDAC0A70B553C855E65F215F2E881687
{
	// Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointer Microsoft.MixedReality.Toolkit.Teleport.TeleportEventData::<Pointer>k__BackingField
	RuntimeObject* ___U3CPointerU3Ek__BackingField_5;
	// Microsoft.MixedReality.Toolkit.Teleport.IMixedRealityTeleportHotspot Microsoft.MixedReality.Toolkit.Teleport.TeleportEventData::<Hotspot>k__BackingField
	RuntimeObject* ___U3CHotspotU3Ek__BackingField_6;
};

// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Teleport.IMixedRealityTeleportHandler>
struct EventFunction_1_t2CE8894DBC6C4473D3E4C3E0833028684F97D7AF  : public MulticastDelegate_t
{
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

// Microsoft.MixedReality.Toolkit.Teleport.MixedRealityTeleportSystem
struct MixedRealityTeleportSystem_tE2A2E21B1DDFE2B8EB94C0BEC1007424E87EBDA2  : public BaseCoreSystem_t9D02F9BBC05DAD6F987F647B666B37A062ACFAA6
{
	// Microsoft.MixedReality.Toolkit.Teleport.TeleportEventData Microsoft.MixedReality.Toolkit.Teleport.MixedRealityTeleportSystem::teleportEventData
	TeleportEventData_t3432241F7CF83009DB3D45E2C4DCED9AE87BEF86* ___teleportEventData_21;
	// System.Boolean Microsoft.MixedReality.Toolkit.Teleport.MixedRealityTeleportSystem::isTeleporting
	bool ___isTeleporting_22;
	// System.Boolean Microsoft.MixedReality.Toolkit.Teleport.MixedRealityTeleportSystem::isProcessingTeleportRequest
	bool ___isProcessingTeleportRequest_23;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Teleport.MixedRealityTeleportSystem::targetPosition
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___targetPosition_24;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Teleport.MixedRealityTeleportSystem::targetRotation
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___targetRotation_25;
	// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.Teleport.MixedRealityTeleportSystem::eventSystemReference
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___eventSystemReference_26;
	// System.String Microsoft.MixedReality.Toolkit.Teleport.MixedRealityTeleportSystem::<Name>k__BackingField
	String_t* ___U3CNameU3Ek__BackingField_27;
	// System.Single Microsoft.MixedReality.Toolkit.Teleport.MixedRealityTeleportSystem::teleportDuration
	float ___teleportDuration_29;
};

struct MixedRealityTeleportSystem_tE2A2E21B1DDFE2B8EB94C0BEC1007424E87EBDA2_StaticFields
{
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Teleport.MixedRealityTeleportSystem::HandleEventPerfMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___HandleEventPerfMarker_28;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Teleport.IMixedRealityTeleportHandler> Microsoft.MixedReality.Toolkit.Teleport.MixedRealityTeleportSystem::OnTeleportRequestHandler
	EventFunction_1_t2CE8894DBC6C4473D3E4C3E0833028684F97D7AF* ___OnTeleportRequestHandler_30;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Teleport.MixedRealityTeleportSystem::RaiseTeleportRequestPerfMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___RaiseTeleportRequestPerfMarker_31;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Teleport.IMixedRealityTeleportHandler> Microsoft.MixedReality.Toolkit.Teleport.MixedRealityTeleportSystem::OnTeleportStartedHandler
	EventFunction_1_t2CE8894DBC6C4473D3E4C3E0833028684F97D7AF* ___OnTeleportStartedHandler_32;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Teleport.MixedRealityTeleportSystem::RaiseTeleportStartedPerfMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___RaiseTeleportStartedPerfMarker_33;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Teleport.IMixedRealityTeleportHandler> Microsoft.MixedReality.Toolkit.Teleport.MixedRealityTeleportSystem::OnTeleportCompletedHandler
	EventFunction_1_t2CE8894DBC6C4473D3E4C3E0833028684F97D7AF* ___OnTeleportCompletedHandler_34;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Teleport.MixedRealityTeleportSystem::RaiseTeleportCompletePerfMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___RaiseTeleportCompletePerfMarker_35;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Teleport.IMixedRealityTeleportHandler> Microsoft.MixedReality.Toolkit.Teleport.MixedRealityTeleportSystem::OnTeleportCanceledHandler
	EventFunction_1_t2CE8894DBC6C4473D3E4C3E0833028684F97D7AF* ___OnTeleportCanceledHandler_36;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Teleport.MixedRealityTeleportSystem::RaiseTeleportCanceledPerfMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___RaiseTeleportCanceledPerfMarker_37;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Teleport.MixedRealityTeleportSystem::ProcessTeleportationRequestPerfMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___ProcessTeleportationRequestPerfMarker_38;
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
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


// System.Boolean Microsoft.MixedReality.Toolkit.UnityObjectExtensions::IsNull<System.Object>(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnityObjectExtensions_IsNull_TisRuntimeObject_m6E617DC6DEE232D20C52C72A69E251ABAF82E5C2_gshared (RuntimeObject* ___interface0, const RuntimeMethod* method) ;
// System.Void UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventFunction_1__ctor_m8527E59AE02A1117319F24ADABBF52E2FE8EA368_gshared (EventFunction_1_t297B5C47242D1B98BEC955E2804FA142B43E7927* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// T UnityEngine.EventSystems.ExecuteEvents::ValidateEventData<System.Object>(UnityEngine.EventSystems.BaseEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ExecuteEvents_ValidateEventData_TisRuntimeObject_m4EA334E32315EE93D32E13F6122F5B8382D247DD_gshared (BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F* ___data0, const RuntimeMethod* method) ;

// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline (const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.BaseCoreSystem::.ctor(Microsoft.MixedReality.Toolkit.IMixedRealityServiceRegistrar,Microsoft.MixedReality.Toolkit.BaseMixedRealityProfile)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseCoreSystem__ctor_mF8CB4AF5EB2F4B3AA28620DBDAC4FBB0887EEE1D (BaseCoreSystem_t9D02F9BBC05DAD6F987F647B666B37A062ACFAA6* __this, RuntimeObject* ___registrar0, BaseMixedRealityProfile_tB4FDEF58FFD17796C0DB7241630B71CDF38FA1D4* ___profile1, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.BaseCoreSystem::set_Registrar(Microsoft.MixedReality.Toolkit.IMixedRealityServiceRegistrar)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BaseCoreSystem_set_Registrar_m5E2AD3BA5AD91A736E0A23357E3720E5D94665A8_inline (BaseCoreSystem_t9D02F9BBC05DAD6F987F647B666B37A062ACFAA6* __this, RuntimeObject* ___value0, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.BaseCoreSystem::.ctor(Microsoft.MixedReality.Toolkit.BaseMixedRealityProfile)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseCoreSystem__ctor_mEDDF3036583E0F0C9557443661AAA0D8D316B0CE (BaseCoreSystem_t9D02F9BBC05DAD6F987F647B666B37A062ACFAA6* __this, BaseMixedRealityProfile_tB4FDEF58FFD17796C0DB7241630B71CDF38FA1D4* ___profile0, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.BaseService::Initialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseService_Initialize_m750DCABB0D54C519B59BADDB050699C41BBC4EFA (BaseService_tB7EC5C0F60DC5EE2DA122A608226D3887B6421D0* __this, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.Teleport.MixedRealityTeleportSystem::InitializeInternal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityTeleportSystem_InitializeInternal_m01C3989347B18ADB0C7B93AF0E2AF331CA1F5CCB (MixedRealityTeleportSystem_tE2A2E21B1DDFE2B8EB94C0BEC1007424E87EBDA2* __this, const RuntimeMethod* method) ;
// UnityEngine.EventSystems.EventSystem UnityEngine.EventSystems.EventSystem::get_current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* EventSystem_get_current_mD15EA86304E070D175EF359A051A7DB807CA26C0 (const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.Teleport.TeleportEventData::.ctor(UnityEngine.EventSystems.EventSystem)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TeleportEventData__ctor_m4EF9AD1ABE76A4E746A1FD41404E24DFB3D7D9F0 (TeleportEventData_t3432241F7CF83009DB3D45E2C4DCED9AE87BEF86* __this, EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* ___eventSystem0, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.BaseEventSystem::Destroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseEventSystem_Destroy_m4763A3BA66E9048BD868B9E9632029E94BE9F451 (BaseEventSystem_tB9BD9711D545EEEF00D3162ED9A13EBDE4B1DEA1* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Application::get_isPlaying()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Application_get_isPlaying_m0B3B501E1093739F8887A0DAC5F61D9CB49CC337 (const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::DestroyImmediate(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_DestroyImmediate_m8249CABCDF344BE3A67EE765122EBB415DC2BC57 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___obj0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_mFCDAE6333522488F60597AF019EA90BB1207A5AA (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___obj0, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.BaseEventSystem::Register(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseEventSystem_Register_m119AD106A28FF3167FC38D5DA13D918E6754F600 (BaseEventSystem_tB9BD9711D545EEEF00D3162ED9A13EBDE4B1DEA1* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___listener0, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.BaseEventSystem::Unregister(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseEventSystem_Unregister_mF1C16F6F605D924D40ECA279272BB274DE222269 (BaseEventSystem_tB9BD9711D545EEEF00D3162ED9A13EBDE4B1DEA1* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___listener0, const RuntimeMethod* method) ;
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem Microsoft.MixedReality.Toolkit.CoreServices::get_InputSystem()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CoreServices_get_InputSystem_m47147418643299159BF4DF408F768844FDC33943 (const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogWarning(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogWarning_mEF15C6B17CE4E1FA7E379CDB82CE40FCD89A3F28 (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// Unity.Profiling.ProfilerMarker/AutoScope Unity.Profiling.ProfilerMarker::Auto()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR AutoScope_tFB983697E28885CB10FFDB92D7EFD0615AEF3139 ProfilerMarker_Auto_m133FA724EB95D16187B37D2C8A501D7E989B1F8D_inline (ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD* __this, const RuntimeMethod* method) ;
// System.Void Unity.Profiling.ProfilerMarker/AutoScope::Dispose()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AutoScope_Dispose_mED763F3F51261EF8FB79DB32CD06E0A3F6C40481_inline (AutoScope_tFB983697E28885CB10FFDB92D7EFD0615AEF3139* __this, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.Teleport.TeleportEventData::Initialize(Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointer,Microsoft.MixedReality.Toolkit.Teleport.IMixedRealityTeleportHotspot)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TeleportEventData_Initialize_mE3A9B9C35E5D17F833D4C9AC4C56EFBB8C40DB19 (TeleportEventData_t3432241F7CF83009DB3D45E2C4DCED9AE87BEF86* __this, RuntimeObject* ___pointer0, RuntimeObject* ___target1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_m059825802BB6AF7EA9693FEBEEB0D85F59A3E38E (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.Teleport.MixedRealityTeleportSystem::ProcessTeleportationRequest(Microsoft.MixedReality.Toolkit.Teleport.TeleportEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityTeleportSystem_ProcessTeleportationRequest_m33CD4858EDC95E6192AB3DA09926047B21C2A731 (MixedRealityTeleportSystem_tE2A2E21B1DDFE2B8EB94C0BEC1007424E87EBDA2* __this, TeleportEventData_t3432241F7CF83009DB3D45E2C4DCED9AE87BEF86* ___eventData0, const RuntimeMethod* method) ;
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointer Microsoft.MixedReality.Toolkit.Teleport.TeleportEventData::get_Pointer()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* TeleportEventData_get_Pointer_mD9150F18A6513478F256F244A94696422BFDEC3B_inline (TeleportEventData_t3432241F7CF83009DB3D45E2C4DCED9AE87BEF86* __this, const RuntimeMethod* method) ;
// System.Boolean Microsoft.MixedReality.Toolkit.UnityObjectExtensions::IsNull<Microsoft.MixedReality.Toolkit.Input.IMixedRealityTeleportPointer>(T)
inline bool UnityObjectExtensions_IsNull_TisIMixedRealityTeleportPointer_tB6657B604BCBD6DF6AB2701CC909184BE15B4C5D_m27DC92F3FDCFEE4043BF0F12E1AB8CA9D26A921B (RuntimeObject* ___interface0, const RuntimeMethod* method)
{
	return ((  bool (*) (RuntimeObject*, const RuntimeMethod*))UnityObjectExtensions_IsNull_TisRuntimeObject_m6E617DC6DEE232D20C52C72A69E251ABAF82E5C2_gshared)(___interface0, method);
}
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Physics.FocusDetails::get_Point()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 FocusDetails_get_Point_mED97A47BC407BF95930337DF61EE88143661B89B_inline (FocusDetails_tCC0560E1B8D05F5708757F751A5A469A4530EA76* __this, const RuntimeMethod* method) ;
// Microsoft.MixedReality.Toolkit.Teleport.IMixedRealityTeleportHotspot Microsoft.MixedReality.Toolkit.Teleport.TeleportEventData::get_Hotspot()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* TeleportEventData_get_Hotspot_mFE28E7186F03E6EB017A9277C5D2162E654686FB_inline (TeleportEventData_t3432241F7CF83009DB3D45E2C4DCED9AE87BEF86* __this, const RuntimeMethod* method) ;
// UnityEngine.Camera Microsoft.MixedReality.Toolkit.Utilities.CameraCache::get_Main()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* CameraCache_get_Main_m631CABB7F5A697F4C1D76F7CB02D6791C0DDCB9E (const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.MixedRealityPlayspace::get_Position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 MixedRealityPlayspace_get_Position_mC422EE26DFCC4AFD95C42666BBE182FF220BB925 (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Subtraction(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Subtraction_m1690F44F6DC92B770A940B6CF8AE0535625A9824_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.MixedRealityPlayspace::set_Position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityPlayspace_set_Position_mED5CCC1D026F8B408FEB0BB6B7E9CFA04B3151B8 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_up()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_up_mAB5269BFCBCB1BD241450C9BF2F156303D30E0C3_inline (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_eulerAngles()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_eulerAngles_mCAAF48EFCF628F1ED91C2FFE75A4FD19C039DD6A (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.MixedRealityPlayspace::RotateAround(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityPlayspace_RotateAround_m05E742C1E885252BDF2BA8C6F38618061CCB7AF0 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___point0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___axis1, float ___angle2, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.Teleport.MixedRealityTeleportSystem::RaiseTeleportComplete(Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointer,Microsoft.MixedReality.Toolkit.Teleport.IMixedRealityTeleportHotspot)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityTeleportSystem_RaiseTeleportComplete_m164AA27A89F007C8E5FBB9C8A19089E4E27B0E4E (MixedRealityTeleportSystem_tE2A2E21B1DDFE2B8EB94C0BEC1007424E87EBDA2* __this, RuntimeObject* ___pointer0, RuntimeObject* ___hotSpot1, const RuntimeMethod* method) ;
// System.Void Unity.Profiling.ProfilerMarker::.ctor(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ProfilerMarker__ctor_mDD68B0A8B71E0301F592AF8891560150E55699C8_inline (ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD* __this, String_t* ___name0, const RuntimeMethod* method) ;
// System.Void UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Teleport.IMixedRealityTeleportHandler>::.ctor(System.Object,System.IntPtr)
inline void EventFunction_1__ctor_mEA4ACFC517E0C62380883378B3B4CE6BD10A0C23 (EventFunction_1_t2CE8894DBC6C4473D3E4C3E0833028684F97D7AF* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (EventFunction_1_t2CE8894DBC6C4473D3E4C3E0833028684F97D7AF*, RuntimeObject*, intptr_t, const RuntimeMethod*))EventFunction_1__ctor_m8527E59AE02A1117319F24ADABBF52E2FE8EA368_gshared)(__this, ___object0, ___method1, method);
}
// System.Void Microsoft.MixedReality.Toolkit.Teleport.MixedRealityTeleportSystem/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m8FD71549A55797F9EE2292E92D4D19BB1DED1C74 (U3CU3Ec_t921DFE24BC1BE9889160179C9E998F9EF7AF32AC* __this, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// T UnityEngine.EventSystems.ExecuteEvents::ValidateEventData<Microsoft.MixedReality.Toolkit.Teleport.TeleportEventData>(UnityEngine.EventSystems.BaseEventData)
inline TeleportEventData_t3432241F7CF83009DB3D45E2C4DCED9AE87BEF86* ExecuteEvents_ValidateEventData_TisTeleportEventData_t3432241F7CF83009DB3D45E2C4DCED9AE87BEF86_m132CD1B349A6BC1AE776DBD8A36B0D566C62AECA (BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F* ___data0, const RuntimeMethod* method)
{
	return ((  TeleportEventData_t3432241F7CF83009DB3D45E2C4DCED9AE87BEF86* (*) (BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F*, const RuntimeMethod*))ExecuteEvents_ValidateEventData_TisRuntimeObject_m4EA334E32315EE93D32E13F6122F5B8382D247DD_gshared)(___data0, method);
}
// System.Void Unity.Profiling.ProfilerMarker/AutoScope::.ctor(System.IntPtr)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AutoScope__ctor_m7F63A273E382CB6328736B6E7F321DDFA40EA9E3_inline (AutoScope_tFB983697E28885CB10FFDB92D7EFD0615AEF3139* __this, intptr_t ___markerPtr0, const RuntimeMethod* method) ;
// System.Void Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility::EndSample(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProfilerUnsafeUtility_EndSample_mE2F7A0DB4C52105F7CD135ED8816A2BB98E663CC (intptr_t ___markerPtr0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) ;
// System.IntPtr Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility::CreateMarker(System.String,System.UInt16,Unity.Profiling.LowLevel.MarkerFlags,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t ProfilerUnsafeUtility_CreateMarker_m27DDE00D41B95677982DBFCE074D45B79E50C7CC (String_t* ___name0, uint16_t ___categoryId1, uint16_t ___flags2, int32_t ___metadataCount3, const RuntimeMethod* method) ;
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
// System.Void Microsoft.MixedReality.Toolkit.Teleport.MixedRealityTeleportSystem::.ctor(Microsoft.MixedReality.Toolkit.IMixedRealityServiceRegistrar)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityTeleportSystem__ctor_m5B1B58A906A38FC509D7A2ED1A8B39C327530692 (MixedRealityTeleportSystem_tE2A2E21B1DDFE2B8EB94C0BEC1007424E87EBDA2* __this, RuntimeObject* ___registrar0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8F8CFE1916B76200DC10D32F1AB7EC87F6DEA3F9);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private Vector3 targetPosition = Vector3.zero;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		L_0 = Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline(NULL);
		__this->___targetPosition_24 = L_0;
		// private Vector3 targetRotation = Vector3.zero;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline(NULL);
		__this->___targetRotation_25 = L_1;
		// public override string Name { get; protected set; } = "Mixed Reality Teleport System";
		__this->___U3CNameU3Ek__BackingField_27 = _stringLiteral8F8CFE1916B76200DC10D32F1AB7EC87F6DEA3F9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CNameU3Ek__BackingField_27), (void*)_stringLiteral8F8CFE1916B76200DC10D32F1AB7EC87F6DEA3F9);
		// private float teleportDuration = 0.25f;
		__this->___teleportDuration_29 = (0.25f);
		// IMixedRealityServiceRegistrar registrar) : base(registrar, null) // Teleport system does not use a profile
		RuntimeObject* L_2 = ___registrar0;
		BaseCoreSystem__ctor_mF8CB4AF5EB2F4B3AA28620DBDAC4FBB0887EEE1D(__this, L_2, (BaseMixedRealityProfile_tB4FDEF58FFD17796C0DB7241630B71CDF38FA1D4*)NULL, NULL);
		// Registrar = registrar;
		RuntimeObject* L_3 = ___registrar0;
		BaseCoreSystem_set_Registrar_m5E2AD3BA5AD91A736E0A23357E3720E5D94665A8_inline(__this, L_3, NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Teleport.MixedRealityTeleportSystem::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityTeleportSystem__ctor_m189E40BD89491FE8D9A77129C576244E811055A1 (MixedRealityTeleportSystem_tE2A2E21B1DDFE2B8EB94C0BEC1007424E87EBDA2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8F8CFE1916B76200DC10D32F1AB7EC87F6DEA3F9);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private Vector3 targetPosition = Vector3.zero;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		L_0 = Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline(NULL);
		__this->___targetPosition_24 = L_0;
		// private Vector3 targetRotation = Vector3.zero;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline(NULL);
		__this->___targetRotation_25 = L_1;
		// public override string Name { get; protected set; } = "Mixed Reality Teleport System";
		__this->___U3CNameU3Ek__BackingField_27 = _stringLiteral8F8CFE1916B76200DC10D32F1AB7EC87F6DEA3F9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CNameU3Ek__BackingField_27), (void*)_stringLiteral8F8CFE1916B76200DC10D32F1AB7EC87F6DEA3F9);
		// private float teleportDuration = 0.25f;
		__this->___teleportDuration_29 = (0.25f);
		// public MixedRealityTeleportSystem() : base(null) { } // Teleport system does not use a profile
		BaseCoreSystem__ctor_mEDDF3036583E0F0C9557443661AAA0D8D316B0CE(__this, (BaseMixedRealityProfile_tB4FDEF58FFD17796C0DB7241630B71CDF38FA1D4*)NULL, NULL);
		// public MixedRealityTeleportSystem() : base(null) { } // Teleport system does not use a profile
		return;
	}
}
// System.String Microsoft.MixedReality.Toolkit.Teleport.MixedRealityTeleportSystem::get_Name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* MixedRealityTeleportSystem_get_Name_m669F4B562C59C5B52C66FCC65DAD964D88729405 (MixedRealityTeleportSystem_tE2A2E21B1DDFE2B8EB94C0BEC1007424E87EBDA2* __this, const RuntimeMethod* method) 
{
	{
		// public override string Name { get; protected set; } = "Mixed Reality Teleport System";
		String_t* L_0 = __this->___U3CNameU3Ek__BackingField_27;
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Teleport.MixedRealityTeleportSystem::set_Name(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityTeleportSystem_set_Name_m0F33FEA077A104D710CE427343F951D466499F0C (MixedRealityTeleportSystem_tE2A2E21B1DDFE2B8EB94C0BEC1007424E87EBDA2* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public override string Name { get; protected set; } = "Mixed Reality Teleport System";
		String_t* L_0 = ___value0;
		__this->___U3CNameU3Ek__BackingField_27 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CNameU3Ek__BackingField_27), (void*)L_0);
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Teleport.MixedRealityTeleportSystem::Initialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityTeleportSystem_Initialize_mC9EA6C873B608D57EFFC09AADCDEA8502DEFDEDA (MixedRealityTeleportSystem_tE2A2E21B1DDFE2B8EB94C0BEC1007424E87EBDA2* __this, const RuntimeMethod* method) 
{
	{
		// base.Initialize();
		BaseService_Initialize_m750DCABB0D54C519B59BADDB050699C41BBC4EFA(__this, NULL);
		// InitializeInternal();
		MixedRealityTeleportSystem_InitializeInternal_m01C3989347B18ADB0C7B93AF0E2AF331CA1F5CCB(__this, NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Teleport.MixedRealityTeleportSystem::InitializeInternal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityTeleportSystem_InitializeInternal_m01C3989347B18ADB0C7B93AF0E2AF331CA1F5CCB (MixedRealityTeleportSystem_tE2A2E21B1DDFE2B8EB94C0BEC1007424E87EBDA2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TeleportEventData_t3432241F7CF83009DB3D45E2C4DCED9AE87BEF86_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// teleportEventData = new TeleportEventData(EventSystem.current);
		il2cpp_codegen_runtime_class_init_inline(EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707_il2cpp_TypeInfo_var);
		EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* L_0;
		L_0 = EventSystem_get_current_mD15EA86304E070D175EF359A051A7DB807CA26C0(NULL);
		TeleportEventData_t3432241F7CF83009DB3D45E2C4DCED9AE87BEF86* L_1 = (TeleportEventData_t3432241F7CF83009DB3D45E2C4DCED9AE87BEF86*)il2cpp_codegen_object_new(TeleportEventData_t3432241F7CF83009DB3D45E2C4DCED9AE87BEF86_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		TeleportEventData__ctor_m4EF9AD1ABE76A4E746A1FD41404E24DFB3D7D9F0(L_1, L_0, NULL);
		__this->___teleportEventData_21 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___teleportEventData_21), (void*)L_1);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Teleport.MixedRealityTeleportSystem::Destroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityTeleportSystem_Destroy_m9739520468CEF268831369A484C24499485894C2 (MixedRealityTeleportSystem_tE2A2E21B1DDFE2B8EB94C0BEC1007424E87EBDA2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// base.Destroy();
		BaseEventSystem_Destroy_m4763A3BA66E9048BD868B9E9632029E94BE9F451(__this, NULL);
		// if (eventSystemReference != null)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___eventSystemReference_26;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0032;
		}
	}
	{
		// if (!Application.isPlaying)
		bool L_2;
		L_2 = Application_get_isPlaying_m0B3B501E1093739F8887A0DAC5F61D9CB49CC337(NULL);
		if (L_2)
		{
			goto IL_0027;
		}
	}
	{
		// Object.DestroyImmediate(eventSystemReference);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = __this->___eventSystemReference_26;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_DestroyImmediate_m8249CABCDF344BE3A67EE765122EBB415DC2BC57(L_3, NULL);
		return;
	}

IL_0027:
	{
		// Object.Destroy(eventSystemReference);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = __this->___eventSystemReference_26;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mFCDAE6333522488F60597AF019EA90BB1207A5AA(L_4, NULL);
	}

IL_0032:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Teleport.MixedRealityTeleportSystem::Register(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityTeleportSystem_Register_m2EEB5760977FB1D501AE86525597A5A4658BB220 (MixedRealityTeleportSystem_tE2A2E21B1DDFE2B8EB94C0BEC1007424E87EBDA2* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___listener0, const RuntimeMethod* method) 
{
	{
		// public override void Register(GameObject listener) => base.Register(listener);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = ___listener0;
		BaseEventSystem_Register_m119AD106A28FF3167FC38D5DA13D918E6754F600(__this, L_0, NULL);
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Teleport.MixedRealityTeleportSystem::Unregister(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityTeleportSystem_Unregister_m8A63783324FEA4B9EDBFF6795E56311405CF8EFC (MixedRealityTeleportSystem_tE2A2E21B1DDFE2B8EB94C0BEC1007424E87EBDA2* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___listener0, const RuntimeMethod* method) 
{
	{
		// public override void Unregister(GameObject listener) => base.Unregister(listener);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = ___listener0;
		BaseEventSystem_Unregister_mF1C16F6F605D924D40ECA279272BB274DE222269(__this, L_0, NULL);
		return;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Teleport.MixedRealityTeleportSystem::get_IsInputSystemEnabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MixedRealityTeleportSystem_get_IsInputSystemEnabled_m149A9BE7C8F0AFE5222D7336D5C76A61DAE47B29 (MixedRealityTeleportSystem_tE2A2E21B1DDFE2B8EB94C0BEC1007424E87EBDA2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CoreServices_tCB1FB80E338B89BCA07C52C15B876BC6D4B3439B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private bool IsInputSystemEnabled => CoreServices.InputSystem != null;
		il2cpp_codegen_runtime_class_init_inline(CoreServices_tCB1FB80E338B89BCA07C52C15B876BC6D4B3439B_il2cpp_TypeInfo_var);
		RuntimeObject* L_0;
		L_0 = CoreServices_get_InputSystem_m47147418643299159BF4DF408F768844FDC33943(NULL);
		return (bool)((!(((RuntimeObject*)(RuntimeObject*)L_0) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
	}
}
// System.Single Microsoft.MixedReality.Toolkit.Teleport.MixedRealityTeleportSystem::get_TeleportDuration()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float MixedRealityTeleportSystem_get_TeleportDuration_m5B7C8ED2AD115587D833E8EF759DAFE5FC91A122 (MixedRealityTeleportSystem_tE2A2E21B1DDFE2B8EB94C0BEC1007424E87EBDA2* __this, const RuntimeMethod* method) 
{
	{
		// get => teleportDuration;
		float L_0 = __this->___teleportDuration_29;
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Teleport.MixedRealityTeleportSystem::set_TeleportDuration(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityTeleportSystem_set_TeleportDuration_m15CB277BE24DCA65E09A81BE929D8B7496D49ABE (MixedRealityTeleportSystem_tE2A2E21B1DDFE2B8EB94C0BEC1007424E87EBDA2* __this, float ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4F29D0F17814227DFDAADF5F3649A3FCB047B2CC);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (isProcessingTeleportRequest)
		bool L_0 = __this->___isProcessingTeleportRequest_23;
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		// Debug.LogWarning("Couldn't change teleport duration. Teleport in progress.");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_mEF15C6B17CE4E1FA7E379CDB82CE40FCD89A3F28(_stringLiteral4F29D0F17814227DFDAADF5F3649A3FCB047B2CC, NULL);
		// return;
		return;
	}

IL_0013:
	{
		// teleportDuration = value;
		float L_1 = ___value0;
		__this->___teleportDuration_29 = L_1;
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Teleport.MixedRealityTeleportSystem::RaiseTeleportRequest(Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointer,Microsoft.MixedReality.Toolkit.Teleport.IMixedRealityTeleportHotspot)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityTeleportSystem_RaiseTeleportRequest_m86C89592DC9BAF19E4EDA6213504833CC8BDBEC7 (MixedRealityTeleportSystem_tE2A2E21B1DDFE2B8EB94C0BEC1007424E87EBDA2* __this, RuntimeObject* ___pointer0, RuntimeObject* ___hotSpot1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseEventSystem_HandleEvent_TisIMixedRealityTeleportHandler_t383BDADA186439FCF6A24A6164C474241B875942_mAA64841856F8330A774B9F40EEC70918A1AD8316_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MixedRealityTeleportSystem_tE2A2E21B1DDFE2B8EB94C0BEC1007424E87EBDA2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	AutoScope_tFB983697E28885CB10FFDB92D7EFD0615AEF3139 V_0;
	memset((&V_0), 0, sizeof(V_0));
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// using (RaiseTeleportRequestPerfMarker.Auto())
		il2cpp_codegen_runtime_class_init_inline(MixedRealityTeleportSystem_tE2A2E21B1DDFE2B8EB94C0BEC1007424E87EBDA2_il2cpp_TypeInfo_var);
		ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD L_0 = ((MixedRealityTeleportSystem_tE2A2E21B1DDFE2B8EB94C0BEC1007424E87EBDA2_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealityTeleportSystem_tE2A2E21B1DDFE2B8EB94C0BEC1007424E87EBDA2_il2cpp_TypeInfo_var))->___RaiseTeleportRequestPerfMarker_31;
		V_1 = L_0;
		AutoScope_tFB983697E28885CB10FFDB92D7EFD0615AEF3139 L_1;
		L_1 = ProfilerMarker_Auto_m133FA724EB95D16187B37D2C8A501D7E989B1F8D_inline((&V_1), NULL);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_002e:
			{// begin finally (depth: 1)
				AutoScope_Dispose_mED763F3F51261EF8FB79DB32CD06E0A3F6C40481_inline((&V_0), NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			// teleportEventData.Initialize(pointer, hotSpot);
			TeleportEventData_t3432241F7CF83009DB3D45E2C4DCED9AE87BEF86* L_2 = __this->___teleportEventData_21;
			RuntimeObject* L_3 = ___pointer0;
			RuntimeObject* L_4 = ___hotSpot1;
			NullCheck(L_2);
			TeleportEventData_Initialize_mE3A9B9C35E5D17F833D4C9AC4C56EFBB8C40DB19(L_2, L_3, L_4, NULL);
			// HandleEvent(teleportEventData, OnTeleportRequestHandler);
			TeleportEventData_t3432241F7CF83009DB3D45E2C4DCED9AE87BEF86* L_5 = __this->___teleportEventData_21;
			il2cpp_codegen_runtime_class_init_inline(MixedRealityTeleportSystem_tE2A2E21B1DDFE2B8EB94C0BEC1007424E87EBDA2_il2cpp_TypeInfo_var);
			EventFunction_1_t2CE8894DBC6C4473D3E4C3E0833028684F97D7AF* L_6 = ((MixedRealityTeleportSystem_tE2A2E21B1DDFE2B8EB94C0BEC1007424E87EBDA2_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealityTeleportSystem_tE2A2E21B1DDFE2B8EB94C0BEC1007424E87EBDA2_il2cpp_TypeInfo_var))->___OnTeleportRequestHandler_30;
			GenericVirtualActionInvoker2< BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F*, EventFunction_1_t2CE8894DBC6C4473D3E4C3E0833028684F97D7AF* >::Invoke(BaseEventSystem_HandleEvent_TisIMixedRealityTeleportHandler_t383BDADA186439FCF6A24A6164C474241B875942_mAA64841856F8330A774B9F40EEC70918A1AD8316_RuntimeMethod_var, __this, L_5, L_6);
			// }
			goto IL_003c;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_003c:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Teleport.MixedRealityTeleportSystem::RaiseTeleportStarted(Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointer,Microsoft.MixedReality.Toolkit.Teleport.IMixedRealityTeleportHotspot)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityTeleportSystem_RaiseTeleportStarted_m2606B06324FCBF8EEFC037316393EB58A69E75F4 (MixedRealityTeleportSystem_tE2A2E21B1DDFE2B8EB94C0BEC1007424E87EBDA2* __this, RuntimeObject* ___pointer0, RuntimeObject* ___hotSpot1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseEventSystem_HandleEvent_TisIMixedRealityTeleportHandler_t383BDADA186439FCF6A24A6164C474241B875942_mAA64841856F8330A774B9F40EEC70918A1AD8316_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MixedRealityTeleportSystem_tE2A2E21B1DDFE2B8EB94C0BEC1007424E87EBDA2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral485A478CF03D1C7CBD8C53456B5CAA42882354D3);
		s_Il2CppMethodInitialized = true;
	}
	AutoScope_tFB983697E28885CB10FFDB92D7EFD0615AEF3139 V_0;
	memset((&V_0), 0, sizeof(V_0));
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// if (isTeleporting)
		bool L_0 = __this->___isTeleporting_22;
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		// Debug.LogError("Teleportation already in progress");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_m059825802BB6AF7EA9693FEBEEB0D85F59A3E38E(_stringLiteral485A478CF03D1C7CBD8C53456B5CAA42882354D3, NULL);
		// return;
		return;
	}

IL_0013:
	{
		// using (RaiseTeleportStartedPerfMarker.Auto())
		il2cpp_codegen_runtime_class_init_inline(MixedRealityTeleportSystem_tE2A2E21B1DDFE2B8EB94C0BEC1007424E87EBDA2_il2cpp_TypeInfo_var);
		ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD L_1 = ((MixedRealityTeleportSystem_tE2A2E21B1DDFE2B8EB94C0BEC1007424E87EBDA2_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealityTeleportSystem_tE2A2E21B1DDFE2B8EB94C0BEC1007424E87EBDA2_il2cpp_TypeInfo_var))->___RaiseTeleportStartedPerfMarker_33;
		V_1 = L_1;
		AutoScope_tFB983697E28885CB10FFDB92D7EFD0615AEF3139 L_2;
		L_2 = ProfilerMarker_Auto_m133FA724EB95D16187B37D2C8A501D7E989B1F8D_inline((&V_1), NULL);
		V_0 = L_2;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0054:
			{// begin finally (depth: 1)
				AutoScope_Dispose_mED763F3F51261EF8FB79DB32CD06E0A3F6C40481_inline((&V_0), NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			// isTeleporting = true;
			__this->___isTeleporting_22 = (bool)1;
			// teleportEventData.Initialize(pointer, hotSpot);
			TeleportEventData_t3432241F7CF83009DB3D45E2C4DCED9AE87BEF86* L_3 = __this->___teleportEventData_21;
			RuntimeObject* L_4 = ___pointer0;
			RuntimeObject* L_5 = ___hotSpot1;
			NullCheck(L_3);
			TeleportEventData_Initialize_mE3A9B9C35E5D17F833D4C9AC4C56EFBB8C40DB19(L_3, L_4, L_5, NULL);
			// HandleEvent(teleportEventData, OnTeleportStartedHandler);
			TeleportEventData_t3432241F7CF83009DB3D45E2C4DCED9AE87BEF86* L_6 = __this->___teleportEventData_21;
			il2cpp_codegen_runtime_class_init_inline(MixedRealityTeleportSystem_tE2A2E21B1DDFE2B8EB94C0BEC1007424E87EBDA2_il2cpp_TypeInfo_var);
			EventFunction_1_t2CE8894DBC6C4473D3E4C3E0833028684F97D7AF* L_7 = ((MixedRealityTeleportSystem_tE2A2E21B1DDFE2B8EB94C0BEC1007424E87EBDA2_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealityTeleportSystem_tE2A2E21B1DDFE2B8EB94C0BEC1007424E87EBDA2_il2cpp_TypeInfo_var))->___OnTeleportStartedHandler_32;
			GenericVirtualActionInvoker2< BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F*, EventFunction_1_t2CE8894DBC6C4473D3E4C3E0833028684F97D7AF* >::Invoke(BaseEventSystem_HandleEvent_TisIMixedRealityTeleportHandler_t383BDADA186439FCF6A24A6164C474241B875942_mAA64841856F8330A774B9F40EEC70918A1AD8316_RuntimeMethod_var, __this, L_6, L_7);
			// ProcessTeleportationRequest(teleportEventData);
			TeleportEventData_t3432241F7CF83009DB3D45E2C4DCED9AE87BEF86* L_8 = __this->___teleportEventData_21;
			MixedRealityTeleportSystem_ProcessTeleportationRequest_m33CD4858EDC95E6192AB3DA09926047B21C2A731(__this, L_8, NULL);
			// }
			goto IL_0062;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0062:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Teleport.MixedRealityTeleportSystem::RaiseTeleportComplete(Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointer,Microsoft.MixedReality.Toolkit.Teleport.IMixedRealityTeleportHotspot)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityTeleportSystem_RaiseTeleportComplete_m164AA27A89F007C8E5FBB9C8A19089E4E27B0E4E (MixedRealityTeleportSystem_tE2A2E21B1DDFE2B8EB94C0BEC1007424E87EBDA2* __this, RuntimeObject* ___pointer0, RuntimeObject* ___hotSpot1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseEventSystem_HandleEvent_TisIMixedRealityTeleportHandler_t383BDADA186439FCF6A24A6164C474241B875942_mAA64841856F8330A774B9F40EEC70918A1AD8316_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MixedRealityTeleportSystem_tE2A2E21B1DDFE2B8EB94C0BEC1007424E87EBDA2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral762DA1192ACEC40D9F1945FA764CE95DC42F814B);
		s_Il2CppMethodInitialized = true;
	}
	AutoScope_tFB983697E28885CB10FFDB92D7EFD0615AEF3139 V_0;
	memset((&V_0), 0, sizeof(V_0));
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// if (!isTeleporting)
		bool L_0 = __this->___isTeleporting_22;
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		// Debug.LogError("No Active Teleportation in progress.");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_m059825802BB6AF7EA9693FEBEEB0D85F59A3E38E(_stringLiteral762DA1192ACEC40D9F1945FA764CE95DC42F814B, NULL);
		// return;
		return;
	}

IL_0013:
	{
		// using (RaiseTeleportCompletePerfMarker.Auto())
		il2cpp_codegen_runtime_class_init_inline(MixedRealityTeleportSystem_tE2A2E21B1DDFE2B8EB94C0BEC1007424E87EBDA2_il2cpp_TypeInfo_var);
		ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD L_1 = ((MixedRealityTeleportSystem_tE2A2E21B1DDFE2B8EB94C0BEC1007424E87EBDA2_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealityTeleportSystem_tE2A2E21B1DDFE2B8EB94C0BEC1007424E87EBDA2_il2cpp_TypeInfo_var))->___RaiseTeleportCompletePerfMarker_35;
		V_1 = L_1;
		AutoScope_tFB983697E28885CB10FFDB92D7EFD0615AEF3139 L_2;
		L_2 = ProfilerMarker_Auto_m133FA724EB95D16187B37D2C8A501D7E989B1F8D_inline((&V_1), NULL);
		V_0 = L_2;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0048:
			{// begin finally (depth: 1)
				AutoScope_Dispose_mED763F3F51261EF8FB79DB32CD06E0A3F6C40481_inline((&V_0), NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			// teleportEventData.Initialize(pointer, hotSpot);
			TeleportEventData_t3432241F7CF83009DB3D45E2C4DCED9AE87BEF86* L_3 = __this->___teleportEventData_21;
			RuntimeObject* L_4 = ___pointer0;
			RuntimeObject* L_5 = ___hotSpot1;
			NullCheck(L_3);
			TeleportEventData_Initialize_mE3A9B9C35E5D17F833D4C9AC4C56EFBB8C40DB19(L_3, L_4, L_5, NULL);
			// HandleEvent(teleportEventData, OnTeleportCompletedHandler);
			TeleportEventData_t3432241F7CF83009DB3D45E2C4DCED9AE87BEF86* L_6 = __this->___teleportEventData_21;
			il2cpp_codegen_runtime_class_init_inline(MixedRealityTeleportSystem_tE2A2E21B1DDFE2B8EB94C0BEC1007424E87EBDA2_il2cpp_TypeInfo_var);
			EventFunction_1_t2CE8894DBC6C4473D3E4C3E0833028684F97D7AF* L_7 = ((MixedRealityTeleportSystem_tE2A2E21B1DDFE2B8EB94C0BEC1007424E87EBDA2_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealityTeleportSystem_tE2A2E21B1DDFE2B8EB94C0BEC1007424E87EBDA2_il2cpp_TypeInfo_var))->___OnTeleportCompletedHandler_34;
			GenericVirtualActionInvoker2< BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F*, EventFunction_1_t2CE8894DBC6C4473D3E4C3E0833028684F97D7AF* >::Invoke(BaseEventSystem_HandleEvent_TisIMixedRealityTeleportHandler_t383BDADA186439FCF6A24A6164C474241B875942_mAA64841856F8330A774B9F40EEC70918A1AD8316_RuntimeMethod_var, __this, L_6, L_7);
			// isTeleporting = false;
			__this->___isTeleporting_22 = (bool)0;
			// }
			goto IL_0056;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0056:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Teleport.MixedRealityTeleportSystem::RaiseTeleportCanceled(Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointer,Microsoft.MixedReality.Toolkit.Teleport.IMixedRealityTeleportHotspot)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityTeleportSystem_RaiseTeleportCanceled_mC27ABEF35BFE4C9464E450A8D1BD2DD249DDD049 (MixedRealityTeleportSystem_tE2A2E21B1DDFE2B8EB94C0BEC1007424E87EBDA2* __this, RuntimeObject* ___pointer0, RuntimeObject* ___hotSpot1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseEventSystem_HandleEvent_TisIMixedRealityTeleportHandler_t383BDADA186439FCF6A24A6164C474241B875942_mAA64841856F8330A774B9F40EEC70918A1AD8316_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MixedRealityTeleportSystem_tE2A2E21B1DDFE2B8EB94C0BEC1007424E87EBDA2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	AutoScope_tFB983697E28885CB10FFDB92D7EFD0615AEF3139 V_0;
	memset((&V_0), 0, sizeof(V_0));
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// using (RaiseTeleportCanceledPerfMarker.Auto())
		il2cpp_codegen_runtime_class_init_inline(MixedRealityTeleportSystem_tE2A2E21B1DDFE2B8EB94C0BEC1007424E87EBDA2_il2cpp_TypeInfo_var);
		ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD L_0 = ((MixedRealityTeleportSystem_tE2A2E21B1DDFE2B8EB94C0BEC1007424E87EBDA2_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealityTeleportSystem_tE2A2E21B1DDFE2B8EB94C0BEC1007424E87EBDA2_il2cpp_TypeInfo_var))->___RaiseTeleportCanceledPerfMarker_37;
		V_1 = L_0;
		AutoScope_tFB983697E28885CB10FFDB92D7EFD0615AEF3139 L_1;
		L_1 = ProfilerMarker_Auto_m133FA724EB95D16187B37D2C8A501D7E989B1F8D_inline((&V_1), NULL);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_002e:
			{// begin finally (depth: 1)
				AutoScope_Dispose_mED763F3F51261EF8FB79DB32CD06E0A3F6C40481_inline((&V_0), NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			// teleportEventData.Initialize(pointer, hotSpot);
			TeleportEventData_t3432241F7CF83009DB3D45E2C4DCED9AE87BEF86* L_2 = __this->___teleportEventData_21;
			RuntimeObject* L_3 = ___pointer0;
			RuntimeObject* L_4 = ___hotSpot1;
			NullCheck(L_2);
			TeleportEventData_Initialize_mE3A9B9C35E5D17F833D4C9AC4C56EFBB8C40DB19(L_2, L_3, L_4, NULL);
			// HandleEvent(teleportEventData, OnTeleportCanceledHandler);
			TeleportEventData_t3432241F7CF83009DB3D45E2C4DCED9AE87BEF86* L_5 = __this->___teleportEventData_21;
			il2cpp_codegen_runtime_class_init_inline(MixedRealityTeleportSystem_tE2A2E21B1DDFE2B8EB94C0BEC1007424E87EBDA2_il2cpp_TypeInfo_var);
			EventFunction_1_t2CE8894DBC6C4473D3E4C3E0833028684F97D7AF* L_6 = ((MixedRealityTeleportSystem_tE2A2E21B1DDFE2B8EB94C0BEC1007424E87EBDA2_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealityTeleportSystem_tE2A2E21B1DDFE2B8EB94C0BEC1007424E87EBDA2_il2cpp_TypeInfo_var))->___OnTeleportCanceledHandler_36;
			GenericVirtualActionInvoker2< BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F*, EventFunction_1_t2CE8894DBC6C4473D3E4C3E0833028684F97D7AF* >::Invoke(BaseEventSystem_HandleEvent_TisIMixedRealityTeleportHandler_t383BDADA186439FCF6A24A6164C474241B875942_mAA64841856F8330A774B9F40EEC70918A1AD8316_RuntimeMethod_var, __this, L_5, L_6);
			// }
			goto IL_003c;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_003c:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Teleport.MixedRealityTeleportSystem::ProcessTeleportationRequest(Microsoft.MixedReality.Toolkit.Teleport.TeleportEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityTeleportSystem_ProcessTeleportationRequest_m33CD4858EDC95E6192AB3DA09926047B21C2A731 (MixedRealityTeleportSystem_tE2A2E21B1DDFE2B8EB94C0BEC1007424E87EBDA2* __this, TeleportEventData_t3432241F7CF83009DB3D45E2C4DCED9AE87BEF86* ___eventData0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealityPointer_t6B17FD29F171D88877AB2EF9C59FEBB65ED6E446_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealityTeleportHotspot_t2B1FA652E4AD3169008B2876A242332E322D727A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealityTeleportPointer_tB6657B604BCBD6DF6AB2701CC909184BE15B4C5D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPointerResult_t7778124D479BBC1920888EC74BB907B9B569599F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MixedRealityTeleportSystem_tE2A2E21B1DDFE2B8EB94C0BEC1007424E87EBDA2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityObjectExtensions_IsNull_TisIMixedRealityTeleportPointer_tB6657B604BCBD6DF6AB2701CC909184BE15B4C5D_m27DC92F3FDCFEE4043BF0F12E1AB8CA9D26A921B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	AutoScope_tFB983697E28885CB10FFDB92D7EFD0615AEF3139 V_0;
	memset((&V_0), 0, sizeof(V_0));
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD V_1;
	memset((&V_1), 0, sizeof(V_1));
	RuntimeObject* V_2 = NULL;
	float V_3 = 0.0f;
	FocusDetails_tCC0560E1B8D05F5708757F751A5A469A4530EA76 V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
		// using (ProcessTeleportationRequestPerfMarker.Auto())
		il2cpp_codegen_runtime_class_init_inline(MixedRealityTeleportSystem_tE2A2E21B1DDFE2B8EB94C0BEC1007424E87EBDA2_il2cpp_TypeInfo_var);
		ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD L_0 = ((MixedRealityTeleportSystem_tE2A2E21B1DDFE2B8EB94C0BEC1007424E87EBDA2_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealityTeleportSystem_tE2A2E21B1DDFE2B8EB94C0BEC1007424E87EBDA2_il2cpp_TypeInfo_var))->___ProcessTeleportationRequestPerfMarker_38;
		V_1 = L_0;
		AutoScope_tFB983697E28885CB10FFDB92D7EFD0615AEF3139 L_1;
		L_1 = ProfilerMarker_Auto_m133FA724EB95D16187B37D2C8A501D7E989B1F8D_inline((&V_1), NULL);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0144:
			{// begin finally (depth: 1)
				AutoScope_Dispose_mED763F3F51261EF8FB79DB32CD06E0A3F6C40481_inline((&V_0), NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				// isProcessingTeleportRequest = true;
				__this->___isProcessingTeleportRequest_23 = (bool)1;
				// targetRotation = Vector3.zero;
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
				L_2 = Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline(NULL);
				__this->___targetRotation_25 = L_2;
				// if (eventData.Pointer is IMixedRealityTeleportPointer teleportPointer && !teleportPointer.IsNull())
				TeleportEventData_t3432241F7CF83009DB3D45E2C4DCED9AE87BEF86* L_3 = ___eventData0;
				NullCheck(L_3);
				RuntimeObject* L_4;
				L_4 = TeleportEventData_get_Pointer_mD9150F18A6513478F256F244A94696422BFDEC3B_inline(L_3, NULL);
				V_2 = ((RuntimeObject*)IsInst((RuntimeObject*)L_4, IMixedRealityTeleportPointer_tB6657B604BCBD6DF6AB2701CC909184BE15B4C5D_il2cpp_TypeInfo_var));
				RuntimeObject* L_5 = V_2;
				if (!L_5)
				{
					goto IL_0048_1;
				}
			}
			{
				RuntimeObject* L_6 = V_2;
				bool L_7;
				L_7 = UnityObjectExtensions_IsNull_TisIMixedRealityTeleportPointer_tB6657B604BCBD6DF6AB2701CC909184BE15B4C5D_m27DC92F3FDCFEE4043BF0F12E1AB8CA9D26A921B(L_6, UnityObjectExtensions_IsNull_TisIMixedRealityTeleportPointer_tB6657B604BCBD6DF6AB2701CC909184BE15B4C5D_m27DC92F3FDCFEE4043BF0F12E1AB8CA9D26A921B_RuntimeMethod_var);
				if (L_7)
				{
					goto IL_0048_1;
				}
			}
			{
				// targetRotation.y = teleportPointer.PointerOrientation;
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_8 = (&__this->___targetRotation_25);
				RuntimeObject* L_9 = V_2;
				NullCheck(L_9);
				float L_10;
				L_10 = InterfaceFuncInvoker0< float >::Invoke(3 /* System.Single Microsoft.MixedReality.Toolkit.Input.IMixedRealityTeleportPointer::get_PointerOrientation() */, IMixedRealityTeleportPointer_tB6657B604BCBD6DF6AB2701CC909184BE15B4C5D_il2cpp_TypeInfo_var, L_9);
				L_8->___y_3 = L_10;
			}

IL_0048_1:
			{
				// targetPosition = eventData.Pointer.Result.Details.Point;
				TeleportEventData_t3432241F7CF83009DB3D45E2C4DCED9AE87BEF86* L_11 = ___eventData0;
				NullCheck(L_11);
				RuntimeObject* L_12;
				L_12 = TeleportEventData_get_Pointer_mD9150F18A6513478F256F244A94696422BFDEC3B_inline(L_11, NULL);
				NullCheck(L_12);
				RuntimeObject* L_13;
				L_13 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(22 /* Microsoft.MixedReality.Toolkit.Input.IPointerResult Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointer::get_Result() */, IMixedRealityPointer_t6B17FD29F171D88877AB2EF9C59FEBB65ED6E446_il2cpp_TypeInfo_var, L_12);
				NullCheck(L_13);
				FocusDetails_tCC0560E1B8D05F5708757F751A5A469A4530EA76 L_14;
				L_14 = InterfaceFuncInvoker0< FocusDetails_tCC0560E1B8D05F5708757F751A5A469A4530EA76 >::Invoke(1 /* Microsoft.MixedReality.Toolkit.Physics.FocusDetails Microsoft.MixedReality.Toolkit.Input.IPointerResult::get_Details() */, IPointerResult_t7778124D479BBC1920888EC74BB907B9B569599F_il2cpp_TypeInfo_var, L_13);
				V_4 = L_14;
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
				L_15 = FocusDetails_get_Point_mED97A47BC407BF95930337DF61EE88143661B89B_inline((&V_4), NULL);
				__this->___targetPosition_24 = L_15;
				// if (eventData.Hotspot != null)
				TeleportEventData_t3432241F7CF83009DB3D45E2C4DCED9AE87BEF86* L_16 = ___eventData0;
				NullCheck(L_16);
				RuntimeObject* L_17;
				L_17 = TeleportEventData_get_Hotspot_mFE28E7186F03E6EB017A9277C5D2162E654686FB_inline(L_16, NULL);
				if (!L_17)
				{
					goto IL_00a3_1;
				}
			}
			{
				// targetPosition = eventData.Hotspot.Position;
				TeleportEventData_t3432241F7CF83009DB3D45E2C4DCED9AE87BEF86* L_18 = ___eventData0;
				NullCheck(L_18);
				RuntimeObject* L_19;
				L_19 = TeleportEventData_get_Hotspot_mFE28E7186F03E6EB017A9277C5D2162E654686FB_inline(L_18, NULL);
				NullCheck(L_19);
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20;
				L_20 = InterfaceFuncInvoker0< Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 >::Invoke(0 /* UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Teleport.IMixedRealityTeleportHotspot::get_Position() */, IMixedRealityTeleportHotspot_t2B1FA652E4AD3169008B2876A242332E322D727A_il2cpp_TypeInfo_var, L_19);
				__this->___targetPosition_24 = L_20;
				// if (eventData.Hotspot.OverrideOrientation)
				TeleportEventData_t3432241F7CF83009DB3D45E2C4DCED9AE87BEF86* L_21 = ___eventData0;
				NullCheck(L_21);
				RuntimeObject* L_22;
				L_22 = TeleportEventData_get_Hotspot_mFE28E7186F03E6EB017A9277C5D2162E654686FB_inline(L_21, NULL);
				NullCheck(L_22);
				bool L_23;
				L_23 = InterfaceFuncInvoker0< bool >::Invoke(3 /* System.Boolean Microsoft.MixedReality.Toolkit.Teleport.IMixedRealityTeleportHotspot::get_OverrideOrientation() */, IMixedRealityTeleportHotspot_t2B1FA652E4AD3169008B2876A242332E322D727A_il2cpp_TypeInfo_var, L_22);
				if (!L_23)
				{
					goto IL_00a3_1;
				}
			}
			{
				// targetRotation.y = eventData.Hotspot.TargetRotation;
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_24 = (&__this->___targetRotation_25);
				TeleportEventData_t3432241F7CF83009DB3D45E2C4DCED9AE87BEF86* L_25 = ___eventData0;
				NullCheck(L_25);
				RuntimeObject* L_26;
				L_26 = TeleportEventData_get_Hotspot_mFE28E7186F03E6EB017A9277C5D2162E654686FB_inline(L_25, NULL);
				NullCheck(L_26);
				float L_27;
				L_27 = InterfaceFuncInvoker0< float >::Invoke(4 /* System.Single Microsoft.MixedReality.Toolkit.Teleport.IMixedRealityTeleportHotspot::get_TargetRotation() */, IMixedRealityTeleportHotspot_t2B1FA652E4AD3169008B2876A242332E322D727A_il2cpp_TypeInfo_var, L_26);
				L_24->___y_3 = L_27;
			}

IL_00a3_1:
			{
				// float height = targetPosition.y;
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_28 = (&__this->___targetPosition_24);
				float L_29 = L_28->___y_3;
				V_3 = L_29;
				// targetPosition -= CameraCache.Main.transform.position - MixedRealityPlayspace.Position;
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_30 = __this->___targetPosition_24;
				Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_31;
				L_31 = CameraCache_get_Main_m631CABB7F5A697F4C1D76F7CB02D6791C0DDCB9E(NULL);
				NullCheck(L_31);
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_32;
				L_32 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_31, NULL);
				NullCheck(L_32);
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_33;
				L_33 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_32, NULL);
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_34;
				L_34 = MixedRealityPlayspace_get_Position_mC422EE26DFCC4AFD95C42666BBE182FF220BB925(NULL);
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_35;
				L_35 = Vector3_op_Subtraction_m1690F44F6DC92B770A940B6CF8AE0535625A9824_inline(L_33, L_34, NULL);
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_36;
				L_36 = Vector3_op_Subtraction_m1690F44F6DC92B770A940B6CF8AE0535625A9824_inline(L_30, L_35, NULL);
				__this->___targetPosition_24 = L_36;
				// targetPosition.y = height;
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_37 = (&__this->___targetPosition_24);
				float L_38 = V_3;
				L_37->___y_3 = L_38;
				// MixedRealityPlayspace.Position = targetPosition;
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_39 = __this->___targetPosition_24;
				MixedRealityPlayspace_set_Position_mED5CCC1D026F8B408FEB0BB6B7E9CFA04B3151B8(L_39, NULL);
				// MixedRealityPlayspace.RotateAround(
				//             CameraCache.Main.transform.position,
				//             Vector3.up,
				//             targetRotation.y - CameraCache.Main.transform.eulerAngles.y);
				Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_40;
				L_40 = CameraCache_get_Main_m631CABB7F5A697F4C1D76F7CB02D6791C0DDCB9E(NULL);
				NullCheck(L_40);
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_41;
				L_41 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_40, NULL);
				NullCheck(L_41);
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_42;
				L_42 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_41, NULL);
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_43;
				L_43 = Vector3_get_up_mAB5269BFCBCB1BD241450C9BF2F156303D30E0C3_inline(NULL);
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_44 = (&__this->___targetRotation_25);
				float L_45 = L_44->___y_3;
				Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_46;
				L_46 = CameraCache_get_Main_m631CABB7F5A697F4C1D76F7CB02D6791C0DDCB9E(NULL);
				NullCheck(L_46);
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_47;
				L_47 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_46, NULL);
				NullCheck(L_47);
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_48;
				L_48 = Transform_get_eulerAngles_mCAAF48EFCF628F1ED91C2FFE75A4FD19C039DD6A(L_47, NULL);
				float L_49 = L_48.___y_3;
				MixedRealityPlayspace_RotateAround_m05E742C1E885252BDF2BA8C6F38618061CCB7AF0(L_42, L_43, ((float)il2cpp_codegen_subtract(L_45, L_49)), NULL);
				// isProcessingTeleportRequest = false;
				__this->___isProcessingTeleportRequest_23 = (bool)0;
				// RaiseTeleportComplete(eventData.Pointer, eventData.Hotspot);
				TeleportEventData_t3432241F7CF83009DB3D45E2C4DCED9AE87BEF86* L_50 = ___eventData0;
				NullCheck(L_50);
				RuntimeObject* L_51;
				L_51 = TeleportEventData_get_Pointer_mD9150F18A6513478F256F244A94696422BFDEC3B_inline(L_50, NULL);
				TeleportEventData_t3432241F7CF83009DB3D45E2C4DCED9AE87BEF86* L_52 = ___eventData0;
				NullCheck(L_52);
				RuntimeObject* L_53;
				L_53 = TeleportEventData_get_Hotspot_mFE28E7186F03E6EB017A9277C5D2162E654686FB_inline(L_52, NULL);
				MixedRealityTeleportSystem_RaiseTeleportComplete_m164AA27A89F007C8E5FBB9C8A19089E4E27B0E4E(__this, L_51, L_53, NULL);
				// }
				goto IL_0152;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0152:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Teleport.MixedRealityTeleportSystem::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityTeleportSystem__cctor_m9D313E2ECE9E66A01B26A117971CB2EF0A9A295F (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventFunction_1_t2CE8894DBC6C4473D3E4C3E0833028684F97D7AF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MixedRealityTeleportSystem_tE2A2E21B1DDFE2B8EB94C0BEC1007424E87EBDA2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3C_cctorU3Eb__39_0_m61ECDD4F134D9DB91802612C339810CFC928466A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3C_cctorU3Eb__39_1_m1AB98CFA3892C922FEB39013A720E325B34F35A7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3C_cctorU3Eb__39_2_m7AF9C7F8305D8015C7697C4AF25E5CC715D25B3B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3C_cctorU3Eb__39_3_mA4BA227399985B40F3A9B369B07D8EAD7F5218A0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t921DFE24BC1BE9889160179C9E998F9EF7AF32AC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1368B5D5C5B45AE31591BCF3645486425E6C0A22);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3BEDD8A5E4E11ACDACE8299C529195CB3424CE12);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral67B6449F1BAD0A542C06774CB4179DEC54F04D47);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral87697DFF6C7C5EA241FE037E78348244A0354ACA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD818882F3D6DEA9ADE38F7ED17CB332A5E586505);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF988C7F2F580EB6406722D922B922E2DFBAF00D4);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static readonly ProfilerMarker HandleEventPerfMarker = new ProfilerMarker("[MRTK] MixedRealityTeleportSystem.HandleEvent");
		ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD L_0;
		memset((&L_0), 0, sizeof(L_0));
		ProfilerMarker__ctor_mDD68B0A8B71E0301F592AF8891560150E55699C8_inline((&L_0), _stringLiteral3BEDD8A5E4E11ACDACE8299C529195CB3424CE12, /*hidden argument*/NULL);
		((MixedRealityTeleportSystem_tE2A2E21B1DDFE2B8EB94C0BEC1007424E87EBDA2_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealityTeleportSystem_tE2A2E21B1DDFE2B8EB94C0BEC1007424E87EBDA2_il2cpp_TypeInfo_var))->___HandleEventPerfMarker_28 = L_0;
		// private static readonly ExecuteEvents.EventFunction<IMixedRealityTeleportHandler> OnTeleportRequestHandler =
		//     delegate (IMixedRealityTeleportHandler handler, BaseEventData eventData)
		//     {
		//         var casted = ExecuteEvents.ValidateEventData<TeleportEventData>(eventData);
		//         handler.OnTeleportRequest(casted);
		//     };
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t921DFE24BC1BE9889160179C9E998F9EF7AF32AC_il2cpp_TypeInfo_var);
		U3CU3Ec_t921DFE24BC1BE9889160179C9E998F9EF7AF32AC* L_1 = ((U3CU3Ec_t921DFE24BC1BE9889160179C9E998F9EF7AF32AC_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t921DFE24BC1BE9889160179C9E998F9EF7AF32AC_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		EventFunction_1_t2CE8894DBC6C4473D3E4C3E0833028684F97D7AF* L_2 = (EventFunction_1_t2CE8894DBC6C4473D3E4C3E0833028684F97D7AF*)il2cpp_codegen_object_new(EventFunction_1_t2CE8894DBC6C4473D3E4C3E0833028684F97D7AF_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		EventFunction_1__ctor_mEA4ACFC517E0C62380883378B3B4CE6BD10A0C23(L_2, L_1, (intptr_t)((void*)U3CU3Ec_U3C_cctorU3Eb__39_0_m61ECDD4F134D9DB91802612C339810CFC928466A_RuntimeMethod_var), NULL);
		((MixedRealityTeleportSystem_tE2A2E21B1DDFE2B8EB94C0BEC1007424E87EBDA2_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealityTeleportSystem_tE2A2E21B1DDFE2B8EB94C0BEC1007424E87EBDA2_il2cpp_TypeInfo_var))->___OnTeleportRequestHandler_30 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&((MixedRealityTeleportSystem_tE2A2E21B1DDFE2B8EB94C0BEC1007424E87EBDA2_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealityTeleportSystem_tE2A2E21B1DDFE2B8EB94C0BEC1007424E87EBDA2_il2cpp_TypeInfo_var))->___OnTeleportRequestHandler_30), (void*)L_2);
		// private static readonly ProfilerMarker RaiseTeleportRequestPerfMarker = new ProfilerMarker("[MRTK] MixedRealityTeleportSystem.RaiseTeleportRequest");
		ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD L_3;
		memset((&L_3), 0, sizeof(L_3));
		ProfilerMarker__ctor_mDD68B0A8B71E0301F592AF8891560150E55699C8_inline((&L_3), _stringLiteral87697DFF6C7C5EA241FE037E78348244A0354ACA, /*hidden argument*/NULL);
		((MixedRealityTeleportSystem_tE2A2E21B1DDFE2B8EB94C0BEC1007424E87EBDA2_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealityTeleportSystem_tE2A2E21B1DDFE2B8EB94C0BEC1007424E87EBDA2_il2cpp_TypeInfo_var))->___RaiseTeleportRequestPerfMarker_31 = L_3;
		// private static readonly ExecuteEvents.EventFunction<IMixedRealityTeleportHandler> OnTeleportStartedHandler =
		//     delegate (IMixedRealityTeleportHandler handler, BaseEventData eventData)
		//     {
		//         var casted = ExecuteEvents.ValidateEventData<TeleportEventData>(eventData);
		//         handler.OnTeleportStarted(casted);
		//     };
		U3CU3Ec_t921DFE24BC1BE9889160179C9E998F9EF7AF32AC* L_4 = ((U3CU3Ec_t921DFE24BC1BE9889160179C9E998F9EF7AF32AC_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t921DFE24BC1BE9889160179C9E998F9EF7AF32AC_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		EventFunction_1_t2CE8894DBC6C4473D3E4C3E0833028684F97D7AF* L_5 = (EventFunction_1_t2CE8894DBC6C4473D3E4C3E0833028684F97D7AF*)il2cpp_codegen_object_new(EventFunction_1_t2CE8894DBC6C4473D3E4C3E0833028684F97D7AF_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		EventFunction_1__ctor_mEA4ACFC517E0C62380883378B3B4CE6BD10A0C23(L_5, L_4, (intptr_t)((void*)U3CU3Ec_U3C_cctorU3Eb__39_1_m1AB98CFA3892C922FEB39013A720E325B34F35A7_RuntimeMethod_var), NULL);
		((MixedRealityTeleportSystem_tE2A2E21B1DDFE2B8EB94C0BEC1007424E87EBDA2_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealityTeleportSystem_tE2A2E21B1DDFE2B8EB94C0BEC1007424E87EBDA2_il2cpp_TypeInfo_var))->___OnTeleportStartedHandler_32 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&((MixedRealityTeleportSystem_tE2A2E21B1DDFE2B8EB94C0BEC1007424E87EBDA2_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealityTeleportSystem_tE2A2E21B1DDFE2B8EB94C0BEC1007424E87EBDA2_il2cpp_TypeInfo_var))->___OnTeleportStartedHandler_32), (void*)L_5);
		// private static readonly ProfilerMarker RaiseTeleportStartedPerfMarker = new ProfilerMarker("[MRTK] MixedRealityTeleportSystem.RaiseTeleportStarted");
		ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD L_6;
		memset((&L_6), 0, sizeof(L_6));
		ProfilerMarker__ctor_mDD68B0A8B71E0301F592AF8891560150E55699C8_inline((&L_6), _stringLiteralD818882F3D6DEA9ADE38F7ED17CB332A5E586505, /*hidden argument*/NULL);
		((MixedRealityTeleportSystem_tE2A2E21B1DDFE2B8EB94C0BEC1007424E87EBDA2_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealityTeleportSystem_tE2A2E21B1DDFE2B8EB94C0BEC1007424E87EBDA2_il2cpp_TypeInfo_var))->___RaiseTeleportStartedPerfMarker_33 = L_6;
		// private static readonly ExecuteEvents.EventFunction<IMixedRealityTeleportHandler> OnTeleportCompletedHandler =
		//     delegate (IMixedRealityTeleportHandler handler, BaseEventData eventData)
		//     {
		//         var casted = ExecuteEvents.ValidateEventData<TeleportEventData>(eventData);
		//         handler.OnTeleportCompleted(casted);
		//     };
		U3CU3Ec_t921DFE24BC1BE9889160179C9E998F9EF7AF32AC* L_7 = ((U3CU3Ec_t921DFE24BC1BE9889160179C9E998F9EF7AF32AC_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t921DFE24BC1BE9889160179C9E998F9EF7AF32AC_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		EventFunction_1_t2CE8894DBC6C4473D3E4C3E0833028684F97D7AF* L_8 = (EventFunction_1_t2CE8894DBC6C4473D3E4C3E0833028684F97D7AF*)il2cpp_codegen_object_new(EventFunction_1_t2CE8894DBC6C4473D3E4C3E0833028684F97D7AF_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		EventFunction_1__ctor_mEA4ACFC517E0C62380883378B3B4CE6BD10A0C23(L_8, L_7, (intptr_t)((void*)U3CU3Ec_U3C_cctorU3Eb__39_2_m7AF9C7F8305D8015C7697C4AF25E5CC715D25B3B_RuntimeMethod_var), NULL);
		((MixedRealityTeleportSystem_tE2A2E21B1DDFE2B8EB94C0BEC1007424E87EBDA2_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealityTeleportSystem_tE2A2E21B1DDFE2B8EB94C0BEC1007424E87EBDA2_il2cpp_TypeInfo_var))->___OnTeleportCompletedHandler_34 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&((MixedRealityTeleportSystem_tE2A2E21B1DDFE2B8EB94C0BEC1007424E87EBDA2_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealityTeleportSystem_tE2A2E21B1DDFE2B8EB94C0BEC1007424E87EBDA2_il2cpp_TypeInfo_var))->___OnTeleportCompletedHandler_34), (void*)L_8);
		// private static readonly ProfilerMarker RaiseTeleportCompletePerfMarker = new ProfilerMarker("[MRTK] MixedRealityTeleportSystem.RaiseTeleportComplete");
		ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD L_9;
		memset((&L_9), 0, sizeof(L_9));
		ProfilerMarker__ctor_mDD68B0A8B71E0301F592AF8891560150E55699C8_inline((&L_9), _stringLiteral1368B5D5C5B45AE31591BCF3645486425E6C0A22, /*hidden argument*/NULL);
		((MixedRealityTeleportSystem_tE2A2E21B1DDFE2B8EB94C0BEC1007424E87EBDA2_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealityTeleportSystem_tE2A2E21B1DDFE2B8EB94C0BEC1007424E87EBDA2_il2cpp_TypeInfo_var))->___RaiseTeleportCompletePerfMarker_35 = L_9;
		// private static readonly ExecuteEvents.EventFunction<IMixedRealityTeleportHandler> OnTeleportCanceledHandler =
		//     delegate (IMixedRealityTeleportHandler handler, BaseEventData eventData)
		//     {
		//         var casted = ExecuteEvents.ValidateEventData<TeleportEventData>(eventData);
		//         handler.OnTeleportCanceled(casted);
		//     };
		U3CU3Ec_t921DFE24BC1BE9889160179C9E998F9EF7AF32AC* L_10 = ((U3CU3Ec_t921DFE24BC1BE9889160179C9E998F9EF7AF32AC_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t921DFE24BC1BE9889160179C9E998F9EF7AF32AC_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		EventFunction_1_t2CE8894DBC6C4473D3E4C3E0833028684F97D7AF* L_11 = (EventFunction_1_t2CE8894DBC6C4473D3E4C3E0833028684F97D7AF*)il2cpp_codegen_object_new(EventFunction_1_t2CE8894DBC6C4473D3E4C3E0833028684F97D7AF_il2cpp_TypeInfo_var);
		NullCheck(L_11);
		EventFunction_1__ctor_mEA4ACFC517E0C62380883378B3B4CE6BD10A0C23(L_11, L_10, (intptr_t)((void*)U3CU3Ec_U3C_cctorU3Eb__39_3_mA4BA227399985B40F3A9B369B07D8EAD7F5218A0_RuntimeMethod_var), NULL);
		((MixedRealityTeleportSystem_tE2A2E21B1DDFE2B8EB94C0BEC1007424E87EBDA2_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealityTeleportSystem_tE2A2E21B1DDFE2B8EB94C0BEC1007424E87EBDA2_il2cpp_TypeInfo_var))->___OnTeleportCanceledHandler_36 = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&((MixedRealityTeleportSystem_tE2A2E21B1DDFE2B8EB94C0BEC1007424E87EBDA2_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealityTeleportSystem_tE2A2E21B1DDFE2B8EB94C0BEC1007424E87EBDA2_il2cpp_TypeInfo_var))->___OnTeleportCanceledHandler_36), (void*)L_11);
		// private static readonly ProfilerMarker RaiseTeleportCanceledPerfMarker = new ProfilerMarker("[MRTK] MixedRealityTeleportSystem.RaiseTeleportHandled");
		ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD L_12;
		memset((&L_12), 0, sizeof(L_12));
		ProfilerMarker__ctor_mDD68B0A8B71E0301F592AF8891560150E55699C8_inline((&L_12), _stringLiteral67B6449F1BAD0A542C06774CB4179DEC54F04D47, /*hidden argument*/NULL);
		((MixedRealityTeleportSystem_tE2A2E21B1DDFE2B8EB94C0BEC1007424E87EBDA2_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealityTeleportSystem_tE2A2E21B1DDFE2B8EB94C0BEC1007424E87EBDA2_il2cpp_TypeInfo_var))->___RaiseTeleportCanceledPerfMarker_37 = L_12;
		// private static readonly ProfilerMarker ProcessTeleportationRequestPerfMarker = new ProfilerMarker("[MRTK] MixedRealityTeleportSystem.ProcessTeleportationRequest");
		ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD L_13;
		memset((&L_13), 0, sizeof(L_13));
		ProfilerMarker__ctor_mDD68B0A8B71E0301F592AF8891560150E55699C8_inline((&L_13), _stringLiteralF988C7F2F580EB6406722D922B922E2DFBAF00D4, /*hidden argument*/NULL);
		((MixedRealityTeleportSystem_tE2A2E21B1DDFE2B8EB94C0BEC1007424E87EBDA2_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealityTeleportSystem_tE2A2E21B1DDFE2B8EB94C0BEC1007424E87EBDA2_il2cpp_TypeInfo_var))->___ProcessTeleportationRequestPerfMarker_38 = L_13;
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
// System.Void Microsoft.MixedReality.Toolkit.Teleport.MixedRealityTeleportSystem/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m9AE40CA4E4E70796E9263218BB6B260D14A53B7A (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t921DFE24BC1BE9889160179C9E998F9EF7AF32AC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t921DFE24BC1BE9889160179C9E998F9EF7AF32AC* L_0 = (U3CU3Ec_t921DFE24BC1BE9889160179C9E998F9EF7AF32AC*)il2cpp_codegen_object_new(U3CU3Ec_t921DFE24BC1BE9889160179C9E998F9EF7AF32AC_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__ctor_m8FD71549A55797F9EE2292E92D4D19BB1DED1C74(L_0, NULL);
		((U3CU3Ec_t921DFE24BC1BE9889160179C9E998F9EF7AF32AC_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t921DFE24BC1BE9889160179C9E998F9EF7AF32AC_il2cpp_TypeInfo_var))->___U3CU3E9_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t921DFE24BC1BE9889160179C9E998F9EF7AF32AC_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t921DFE24BC1BE9889160179C9E998F9EF7AF32AC_il2cpp_TypeInfo_var))->___U3CU3E9_0), (void*)L_0);
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Teleport.MixedRealityTeleportSystem/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m8FD71549A55797F9EE2292E92D4D19BB1DED1C74 (U3CU3Ec_t921DFE24BC1BE9889160179C9E998F9EF7AF32AC* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Teleport.MixedRealityTeleportSystem/<>c::<.cctor>b__39_0(Microsoft.MixedReality.Toolkit.Teleport.IMixedRealityTeleportHandler,UnityEngine.EventSystems.BaseEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_cctorU3Eb__39_0_m61ECDD4F134D9DB91802612C339810CFC928466A (U3CU3Ec_t921DFE24BC1BE9889160179C9E998F9EF7AF32AC* __this, RuntimeObject* ___handler0, BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F* ___eventData1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_ValidateEventData_TisTeleportEventData_t3432241F7CF83009DB3D45E2C4DCED9AE87BEF86_m132CD1B349A6BC1AE776DBD8A36B0D566C62AECA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_t74DCF8B83743EE2773ACF182344612A048E2CC59_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealityTeleportHandler_t383BDADA186439FCF6A24A6164C474241B875942_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	TeleportEventData_t3432241F7CF83009DB3D45E2C4DCED9AE87BEF86* V_0 = NULL;
	{
		// var casted = ExecuteEvents.ValidateEventData<TeleportEventData>(eventData);
		BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F* L_0 = ___eventData1;
		il2cpp_codegen_runtime_class_init_inline(ExecuteEvents_t74DCF8B83743EE2773ACF182344612A048E2CC59_il2cpp_TypeInfo_var);
		TeleportEventData_t3432241F7CF83009DB3D45E2C4DCED9AE87BEF86* L_1;
		L_1 = ExecuteEvents_ValidateEventData_TisTeleportEventData_t3432241F7CF83009DB3D45E2C4DCED9AE87BEF86_m132CD1B349A6BC1AE776DBD8A36B0D566C62AECA(L_0, ExecuteEvents_ValidateEventData_TisTeleportEventData_t3432241F7CF83009DB3D45E2C4DCED9AE87BEF86_m132CD1B349A6BC1AE776DBD8A36B0D566C62AECA_RuntimeMethod_var);
		V_0 = L_1;
		// handler.OnTeleportRequest(casted);
		RuntimeObject* L_2 = ___handler0;
		TeleportEventData_t3432241F7CF83009DB3D45E2C4DCED9AE87BEF86* L_3 = V_0;
		NullCheck(L_2);
		InterfaceActionInvoker1< TeleportEventData_t3432241F7CF83009DB3D45E2C4DCED9AE87BEF86* >::Invoke(0 /* System.Void Microsoft.MixedReality.Toolkit.Teleport.IMixedRealityTeleportHandler::OnTeleportRequest(Microsoft.MixedReality.Toolkit.Teleport.TeleportEventData) */, IMixedRealityTeleportHandler_t383BDADA186439FCF6A24A6164C474241B875942_il2cpp_TypeInfo_var, L_2, L_3);
		// };
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Teleport.MixedRealityTeleportSystem/<>c::<.cctor>b__39_1(Microsoft.MixedReality.Toolkit.Teleport.IMixedRealityTeleportHandler,UnityEngine.EventSystems.BaseEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_cctorU3Eb__39_1_m1AB98CFA3892C922FEB39013A720E325B34F35A7 (U3CU3Ec_t921DFE24BC1BE9889160179C9E998F9EF7AF32AC* __this, RuntimeObject* ___handler0, BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F* ___eventData1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_ValidateEventData_TisTeleportEventData_t3432241F7CF83009DB3D45E2C4DCED9AE87BEF86_m132CD1B349A6BC1AE776DBD8A36B0D566C62AECA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_t74DCF8B83743EE2773ACF182344612A048E2CC59_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealityTeleportHandler_t383BDADA186439FCF6A24A6164C474241B875942_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	TeleportEventData_t3432241F7CF83009DB3D45E2C4DCED9AE87BEF86* V_0 = NULL;
	{
		// var casted = ExecuteEvents.ValidateEventData<TeleportEventData>(eventData);
		BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F* L_0 = ___eventData1;
		il2cpp_codegen_runtime_class_init_inline(ExecuteEvents_t74DCF8B83743EE2773ACF182344612A048E2CC59_il2cpp_TypeInfo_var);
		TeleportEventData_t3432241F7CF83009DB3D45E2C4DCED9AE87BEF86* L_1;
		L_1 = ExecuteEvents_ValidateEventData_TisTeleportEventData_t3432241F7CF83009DB3D45E2C4DCED9AE87BEF86_m132CD1B349A6BC1AE776DBD8A36B0D566C62AECA(L_0, ExecuteEvents_ValidateEventData_TisTeleportEventData_t3432241F7CF83009DB3D45E2C4DCED9AE87BEF86_m132CD1B349A6BC1AE776DBD8A36B0D566C62AECA_RuntimeMethod_var);
		V_0 = L_1;
		// handler.OnTeleportStarted(casted);
		RuntimeObject* L_2 = ___handler0;
		TeleportEventData_t3432241F7CF83009DB3D45E2C4DCED9AE87BEF86* L_3 = V_0;
		NullCheck(L_2);
		InterfaceActionInvoker1< TeleportEventData_t3432241F7CF83009DB3D45E2C4DCED9AE87BEF86* >::Invoke(1 /* System.Void Microsoft.MixedReality.Toolkit.Teleport.IMixedRealityTeleportHandler::OnTeleportStarted(Microsoft.MixedReality.Toolkit.Teleport.TeleportEventData) */, IMixedRealityTeleportHandler_t383BDADA186439FCF6A24A6164C474241B875942_il2cpp_TypeInfo_var, L_2, L_3);
		// };
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Teleport.MixedRealityTeleportSystem/<>c::<.cctor>b__39_2(Microsoft.MixedReality.Toolkit.Teleport.IMixedRealityTeleportHandler,UnityEngine.EventSystems.BaseEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_cctorU3Eb__39_2_m7AF9C7F8305D8015C7697C4AF25E5CC715D25B3B (U3CU3Ec_t921DFE24BC1BE9889160179C9E998F9EF7AF32AC* __this, RuntimeObject* ___handler0, BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F* ___eventData1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_ValidateEventData_TisTeleportEventData_t3432241F7CF83009DB3D45E2C4DCED9AE87BEF86_m132CD1B349A6BC1AE776DBD8A36B0D566C62AECA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_t74DCF8B83743EE2773ACF182344612A048E2CC59_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealityTeleportHandler_t383BDADA186439FCF6A24A6164C474241B875942_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	TeleportEventData_t3432241F7CF83009DB3D45E2C4DCED9AE87BEF86* V_0 = NULL;
	{
		// var casted = ExecuteEvents.ValidateEventData<TeleportEventData>(eventData);
		BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F* L_0 = ___eventData1;
		il2cpp_codegen_runtime_class_init_inline(ExecuteEvents_t74DCF8B83743EE2773ACF182344612A048E2CC59_il2cpp_TypeInfo_var);
		TeleportEventData_t3432241F7CF83009DB3D45E2C4DCED9AE87BEF86* L_1;
		L_1 = ExecuteEvents_ValidateEventData_TisTeleportEventData_t3432241F7CF83009DB3D45E2C4DCED9AE87BEF86_m132CD1B349A6BC1AE776DBD8A36B0D566C62AECA(L_0, ExecuteEvents_ValidateEventData_TisTeleportEventData_t3432241F7CF83009DB3D45E2C4DCED9AE87BEF86_m132CD1B349A6BC1AE776DBD8A36B0D566C62AECA_RuntimeMethod_var);
		V_0 = L_1;
		// handler.OnTeleportCompleted(casted);
		RuntimeObject* L_2 = ___handler0;
		TeleportEventData_t3432241F7CF83009DB3D45E2C4DCED9AE87BEF86* L_3 = V_0;
		NullCheck(L_2);
		InterfaceActionInvoker1< TeleportEventData_t3432241F7CF83009DB3D45E2C4DCED9AE87BEF86* >::Invoke(2 /* System.Void Microsoft.MixedReality.Toolkit.Teleport.IMixedRealityTeleportHandler::OnTeleportCompleted(Microsoft.MixedReality.Toolkit.Teleport.TeleportEventData) */, IMixedRealityTeleportHandler_t383BDADA186439FCF6A24A6164C474241B875942_il2cpp_TypeInfo_var, L_2, L_3);
		// };
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Teleport.MixedRealityTeleportSystem/<>c::<.cctor>b__39_3(Microsoft.MixedReality.Toolkit.Teleport.IMixedRealityTeleportHandler,UnityEngine.EventSystems.BaseEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_cctorU3Eb__39_3_mA4BA227399985B40F3A9B369B07D8EAD7F5218A0 (U3CU3Ec_t921DFE24BC1BE9889160179C9E998F9EF7AF32AC* __this, RuntimeObject* ___handler0, BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F* ___eventData1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_ValidateEventData_TisTeleportEventData_t3432241F7CF83009DB3D45E2C4DCED9AE87BEF86_m132CD1B349A6BC1AE776DBD8A36B0D566C62AECA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_t74DCF8B83743EE2773ACF182344612A048E2CC59_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealityTeleportHandler_t383BDADA186439FCF6A24A6164C474241B875942_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	TeleportEventData_t3432241F7CF83009DB3D45E2C4DCED9AE87BEF86* V_0 = NULL;
	{
		// var casted = ExecuteEvents.ValidateEventData<TeleportEventData>(eventData);
		BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F* L_0 = ___eventData1;
		il2cpp_codegen_runtime_class_init_inline(ExecuteEvents_t74DCF8B83743EE2773ACF182344612A048E2CC59_il2cpp_TypeInfo_var);
		TeleportEventData_t3432241F7CF83009DB3D45E2C4DCED9AE87BEF86* L_1;
		L_1 = ExecuteEvents_ValidateEventData_TisTeleportEventData_t3432241F7CF83009DB3D45E2C4DCED9AE87BEF86_m132CD1B349A6BC1AE776DBD8A36B0D566C62AECA(L_0, ExecuteEvents_ValidateEventData_TisTeleportEventData_t3432241F7CF83009DB3D45E2C4DCED9AE87BEF86_m132CD1B349A6BC1AE776DBD8A36B0D566C62AECA_RuntimeMethod_var);
		V_0 = L_1;
		// handler.OnTeleportCanceled(casted);
		RuntimeObject* L_2 = ___handler0;
		TeleportEventData_t3432241F7CF83009DB3D45E2C4DCED9AE87BEF86* L_3 = V_0;
		NullCheck(L_2);
		InterfaceActionInvoker1< TeleportEventData_t3432241F7CF83009DB3D45E2C4DCED9AE87BEF86* >::Invoke(3 /* System.Void Microsoft.MixedReality.Toolkit.Teleport.IMixedRealityTeleportHandler::OnTeleportCanceled(Microsoft.MixedReality.Toolkit.Teleport.TeleportEventData) */, IMixedRealityTeleportHandler_t383BDADA186439FCF6A24A6164C474241B875942_il2cpp_TypeInfo_var, L_2, L_3);
		// };
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* TeleportEventData_get_Pointer_mD9150F18A6513478F256F244A94696422BFDEC3B_inline (TeleportEventData_t3432241F7CF83009DB3D45E2C4DCED9AE87BEF86* __this, const RuntimeMethod* method) 
{
	{
		// public IMixedRealityPointer Pointer { get; private set; }
		RuntimeObject* L_0 = __this->___U3CPointerU3Ek__BackingField_5;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 FocusDetails_get_Point_mED97A47BC407BF95930337DF61EE88143661B89B_inline (FocusDetails_tCC0560E1B8D05F5708757F751A5A469A4530EA76* __this, const RuntimeMethod* method) 
{
	{
		// public Vector3 Point { get; set; }
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = __this->___U3CPointU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* TeleportEventData_get_Hotspot_mFE28E7186F03E6EB017A9277C5D2162E654686FB_inline (TeleportEventData_t3432241F7CF83009DB3D45E2C4DCED9AE87BEF86* __this, const RuntimeMethod* method) 
{
	{
		// public IMixedRealityTeleportHotspot Hotspot { get; private set; }
		RuntimeObject* L_0 = __this->___U3CHotspotU3Ek__BackingField_6;
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
