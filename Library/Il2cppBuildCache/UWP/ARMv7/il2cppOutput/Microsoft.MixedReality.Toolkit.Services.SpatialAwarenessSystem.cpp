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
template <typename R, typename T1>
struct VirtualFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R>
struct GenericVirtualFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
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
template <typename R, typename T1>
struct InterfaceFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};

// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83;
// System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.BaseEventSystem/EventHandlerEntry>>
struct Dictionary_2_t18E076B12814DFAAD91B5BC1B163AAFAC0CADEFD;
// System.Collections.Generic.IReadOnlyList`1<Microsoft.MixedReality.Toolkit.SpatialAwareness.IMixedRealitySpatialAwarenessObserver>
struct IReadOnlyList_1_t2B96B7FE2C44634D70F69C777077D230700AD798;
// System.Collections.Generic.List`1<System.Tuple`2<Microsoft.MixedReality.Toolkit.BaseEventSystem/Action,UnityEngine.GameObject>>
struct List_1_tADF7F1C5FADE0AE6D00BC928B20C4B63DDC8A3AD;
// System.Collections.Generic.List`1<System.Tuple`3<Microsoft.MixedReality.Toolkit.BaseEventSystem/Action,System.Type,UnityEngine.EventSystems.IEventSystemHandler>>
struct List_1_t51E625EDA46926814063BAC38407B110D9C48805;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B;
// System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.IMixedRealityDataProvider>
struct List_1_t750037577EF626FCB1112EA42C03AB4CCF7974E7;
// Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialObserverConfiguration[]
struct MixedRealitySpatialObserverConfigurationU5BU5D_t175B52CA1DE4DF781F77F7FAF9566C4FC8A83884;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
// Microsoft.MixedReality.Toolkit.BaseCoreSystem
struct BaseCoreSystem_t9D02F9BBC05DAD6F987F647B666B37A062ACFAA6;
// Microsoft.MixedReality.Toolkit.BaseDataProviderAccessCoreSystem
struct BaseDataProviderAccessCoreSystem_t30EC4F1C1A10F7586D0EE15069292831A2E3BCF2;
// Microsoft.MixedReality.Toolkit.BaseEventSystem
struct BaseEventSystem_tB9BD9711D545EEEF00D3162ED9A13EBDE4B1DEA1;
// Microsoft.MixedReality.Toolkit.BaseMixedRealityProfile
struct BaseMixedRealityProfile_tB4FDEF58FFD17796C0DB7241630B71CDF38FA1D4;
// Microsoft.MixedReality.Toolkit.BaseService
struct BaseService_tB7EC5C0F60DC5EE2DA122A608226D3887B6421D0;
// Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialAwarenessObserverProfile
struct BaseSpatialAwarenessObserverProfile_t7A50E95DBFF01391175C2D418C1ABB3C21F43225;
// System.Reflection.Binder
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// Microsoft.MixedReality.Toolkit.IMixedRealityServiceRegistrar
struct IMixedRealityServiceRegistrar_t4B893B7CDAAC977211D826D02C8522ECA327D715;
// Microsoft.MixedReality.Toolkit.SpatialAwareness.IMixedRealitySpatialAwarenessObserver
struct IMixedRealitySpatialAwarenessObserver_t6897374ED60E2BA1C5A4ECAF099C486EF526FF15;
// System.Reflection.MemberFilter
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
// Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessSystem
struct MixedRealitySpatialAwarenessSystem_t8D8830FD790974C95CC7531CCA30B7247A13FD90;
// Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessSystemProfile
struct MixedRealitySpatialAwarenessSystemProfile_t84A6651AAFB01D051CB46EFFB648247FA23035D7;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// System.String
struct String_t;
// Microsoft.MixedReality.Toolkit.Utilities.SystemType
struct SystemType_t9C9A555B60497C18297AD1082247C2960A7B666E;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// System.Type
struct Type_t;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;

IL2CPP_EXTERN_C RuntimeClass* BaseDataProviderAccessCoreSystem_t30EC4F1C1A10F7586D0EE15069292831A2E3BCF2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_1_tFA9730B1781B4C120870B6E65BFF8A40BCE024A8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_t59FDF44DF386D7519C234BF34F19D6732D13AB23_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IMixedRealityCapabilityCheck_t89E15A80CA84BBA26759BE2D8A2720CD26534921_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IMixedRealitySpatialAwarenessObserver_t6897374ED60E2BA1C5A4ECAF099C486EF526FF15_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IReadOnlyCollection_1_t04A6836A5829DBDAAF26CD938058299A14B25033_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IReadOnlyList_1_t2B96B7FE2C44634D70F69C777077D230700AD798_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MixedRealitySpatialAwarenessSystemProfile_t84A6651AAFB01D051CB46EFFB648247FA23035D7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MixedRealitySpatialAwarenessSystem_t8D8830FD790974C95CC7531CCA30B7247A13FD90_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral0755F3DCD1C7D7F8C7F146B5C1598C86897222FA;
IL2CPP_EXTERN_C String_t* _stringLiteral1493973E273A553C92B106E28BD722E4E3A0AD98;
IL2CPP_EXTERN_C String_t* _stringLiteral188D30B6EDF85BA42D4E192BE1E93A4D2142FDCB;
IL2CPP_EXTERN_C String_t* _stringLiteral3AF268028A7C8D24E1A3278EC06A941AF3AB7C83;
IL2CPP_EXTERN_C String_t* _stringLiteral474447FAD0D27BF6A99C1C7093B70018F15EE835;
IL2CPP_EXTERN_C String_t* _stringLiteral56EB1B275FCFAC7E81FE874CCF19B184937C1493;
IL2CPP_EXTERN_C String_t* _stringLiteral5C25A67358FA149F467647A046B5549855D72011;
IL2CPP_EXTERN_C String_t* _stringLiteral72F7A6E2A6DE3E5DE76E40BC176AD33FCE86E0A7;
IL2CPP_EXTERN_C String_t* _stringLiteral80B8FC02531D63146A2F2DE67A3DC123891215FC;
IL2CPP_EXTERN_C String_t* _stringLiteral84210E916B771570003864C57344196A52266B35;
IL2CPP_EXTERN_C String_t* _stringLiteral91B3ABEA5982C1F945523544B3BA94100AE5F5DB;
IL2CPP_EXTERN_C String_t* _stringLiteralB612C75ADB2AE97EA4EA097D17EA7667AA2E78A8;
IL2CPP_EXTERN_C String_t* _stringLiteralBEF51D8BFDF5409F7D7A407464E210AB7AF45304;
IL2CPP_EXTERN_C String_t* _stringLiteralC4149992C36FE958949693FAE84EE89309D872FA;
IL2CPP_EXTERN_C String_t* _stringLiteralC51718E69592BF754ED468BA0E33592D41CC0711;
IL2CPP_EXTERN_C String_t* _stringLiteralD7A0E2B84A2188BA28341150550C337C542E8671;
IL2CPP_EXTERN_C const RuntimeMethod* BaseDataProviderAccessCoreSystem_RegisterDataProvider_TisIMixedRealitySpatialAwarenessObserver_t6897374ED60E2BA1C5A4ECAF099C486EF526FF15_m1BAF0E595E77E9EA59C6B8FCA6D7B86833DB0D68_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BaseDataProviderAccessCoreSystem_UnregisterDataProvider_TisIMixedRealitySpatialAwarenessObserver_t6897374ED60E2BA1C5A4ECAF099C486EF526FF15_mCD9464EB917CF367BD8BA93B24804467C4533CF1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MixedRealitySpatialAwarenessSystem_GetDataProviders_TisIMixedRealitySpatialAwarenessObserver_t6897374ED60E2BA1C5A4ECAF099C486EF526FF15_mDC7F0CB34731C65139476D15E4368831ADBFADBC_RuntimeMethod_var;

struct MixedRealitySpatialObserverConfigurationU5BU5D_t175B52CA1DE4DF781F77F7FAF9566C4FC8A83884;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_t46C957EFB48F4CBC869F0E76D5BC2DA8EF8E5421 
{
};
struct Il2CppArrayBounds;

// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
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

// Microsoft.MixedReality.Toolkit.Utilities.SystemType
struct SystemType_t9C9A555B60497C18297AD1082247C2960A7B666E  : public RuntimeObject
{
	// System.String Microsoft.MixedReality.Toolkit.Utilities.SystemType::reference
	String_t* ___reference_0;
	// System.Type Microsoft.MixedReality.Toolkit.Utilities.SystemType::type
	Type_t* ___type_1;
};

struct SystemType_t9C9A555B60497C18297AD1082247C2960A7B666E_StaticFields
{
	// System.Collections.Generic.Dictionary`2<System.String,System.String> Microsoft.MixedReality.Toolkit.Utilities.SystemType::ReferenceMappings
	Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ___ReferenceMappings_2;
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

// System.Nullable`1<System.Boolean>
struct Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	bool ___value_1;
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

// Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialObserverConfiguration
struct MixedRealitySpatialObserverConfiguration_tD6661687B3B62C35D39F64D13472802F6624DB75 
{
	// Microsoft.MixedReality.Toolkit.Utilities.SystemType Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialObserverConfiguration::componentType
	SystemType_t9C9A555B60497C18297AD1082247C2960A7B666E* ___componentType_0;
	// System.String Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialObserverConfiguration::componentName
	String_t* ___componentName_1;
	// System.UInt32 Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialObserverConfiguration::priority
	uint32_t ___priority_2;
	// Microsoft.MixedReality.Toolkit.Utilities.SupportedPlatforms Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialObserverConfiguration::runtimePlatform
	int32_t ___runtimePlatform_3;
	// Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialAwarenessObserverProfile Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialObserverConfiguration::observerProfile
	BaseSpatialAwarenessObserverProfile_t7A50E95DBFF01391175C2D418C1ABB3C21F43225* ___observerProfile_4;
};
// Native definition for P/Invoke marshalling of Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialObserverConfiguration
struct MixedRealitySpatialObserverConfiguration_tD6661687B3B62C35D39F64D13472802F6624DB75_marshaled_pinvoke
{
	SystemType_t9C9A555B60497C18297AD1082247C2960A7B666E* ___componentType_0;
	char* ___componentName_1;
	uint32_t ___priority_2;
	int32_t ___runtimePlatform_3;
	BaseSpatialAwarenessObserverProfile_t7A50E95DBFF01391175C2D418C1ABB3C21F43225* ___observerProfile_4;
};
// Native definition for COM marshalling of Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialObserverConfiguration
struct MixedRealitySpatialObserverConfiguration_tD6661687B3B62C35D39F64D13472802F6624DB75_marshaled_com
{
	SystemType_t9C9A555B60497C18297AD1082247C2960A7B666E* ___componentType_0;
	Il2CppChar* ___componentName_1;
	uint32_t ___priority_2;
	int32_t ___runtimePlatform_3;
	BaseSpatialAwarenessObserverProfile_t7A50E95DBFF01391175C2D418C1ABB3C21F43225* ___observerProfile_4;
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

// System.RuntimeTypeHandle
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;
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

// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
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

// System.Type
struct Type_t  : public MemberInfo_t
{
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl_8;
};

struct Type_t_StaticFields
{
	// System.Reflection.Binder modreq(System.Runtime.CompilerServices.IsVolatile) System.Type::s_defaultBinder
	Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235* ___s_defaultBinder_0;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_1;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___EmptyTypes_2;
	// System.Object System.Type::Missing
	RuntimeObject* ___Missing_3;
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterAttribute_4;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterName_5;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterNameIgnoreCase_6;
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

// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// Microsoft.MixedReality.Toolkit.BaseDataProviderAccessCoreSystem
struct BaseDataProviderAccessCoreSystem_t30EC4F1C1A10F7586D0EE15069292831A2E3BCF2  : public BaseCoreSystem_t9D02F9BBC05DAD6F987F647B666B37A062ACFAA6
{
	// System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.IMixedRealityDataProvider> Microsoft.MixedReality.Toolkit.BaseDataProviderAccessCoreSystem::dataProviders
	List_1_t750037577EF626FCB1112EA42C03AB4CCF7974E7* ___dataProviders_21;
};

struct BaseDataProviderAccessCoreSystem_t30EC4F1C1A10F7586D0EE15069292831A2E3BCF2_StaticFields
{
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.BaseDataProviderAccessCoreSystem::UpdatePerfMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___UpdatePerfMarker_22;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.BaseDataProviderAccessCoreSystem::LateUpdatePerfMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___LateUpdatePerfMarker_23;
};

// Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialAwarenessObserverProfile
struct BaseSpatialAwarenessObserverProfile_t7A50E95DBFF01391175C2D418C1ABB3C21F43225  : public BaseMixedRealityProfile_tB4FDEF58FFD17796C0DB7241630B71CDF38FA1D4
{
	// Microsoft.MixedReality.Toolkit.Utilities.AutoStartBehavior Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialAwarenessObserverProfile::startupBehavior
	int32_t ___startupBehavior_5;
	// System.Boolean Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialAwarenessObserverProfile::isStationaryObserver
	bool ___isStationaryObserver_6;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialAwarenessObserverProfile::observationExtents
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___observationExtents_7;
	// Microsoft.MixedReality.Toolkit.Utilities.VolumeType Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialAwarenessObserverProfile::observerVolumeType
	int32_t ___observerVolumeType_8;
	// System.Single Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialAwarenessObserverProfile::updateInterval
	float ___updateInterval_9;
};

// Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessSystemProfile
struct MixedRealitySpatialAwarenessSystemProfile_t84A6651AAFB01D051CB46EFFB648247FA23035D7  : public BaseMixedRealityProfile_tB4FDEF58FFD17796C0DB7241630B71CDF38FA1D4
{
	// Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialObserverConfiguration[] Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessSystemProfile::observerConfigurations
	MixedRealitySpatialObserverConfigurationU5BU5D_t175B52CA1DE4DF781F77F7FAF9566C4FC8A83884* ___observerConfigurations_5;
};

// Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessSystem
struct MixedRealitySpatialAwarenessSystem_t8D8830FD790974C95CC7531CCA30B7247A13FD90  : public BaseDataProviderAccessCoreSystem_t30EC4F1C1A10F7586D0EE15069292831A2E3BCF2
{
	// System.String Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessSystem::<Name>k__BackingField
	String_t* ___U3CNameU3Ek__BackingField_24;
	// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessSystem::spatialAwarenessObjectParent
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___spatialAwarenessObjectParent_25;
	// System.UInt32 Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessSystem::nextSourceId
	uint32_t ___nextSourceId_26;
	// Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessSystemProfile Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessSystem::spatialAwarenessSystemProfile
	MixedRealitySpatialAwarenessSystemProfile_t84A6651AAFB01D051CB46EFFB648247FA23035D7* ___spatialAwarenessSystemProfile_27;
};

struct MixedRealitySpatialAwarenessSystem_t8D8830FD790974C95CC7531CCA30B7247A13FD90_StaticFields
{
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessSystem::GetObserversPerfMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___GetObserversPerfMarker_28;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessSystem::GetObserversTPerfMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___GetObserversTPerfMarker_29;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessSystem::GetObserverPerfMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___GetObserverPerfMarker_30;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessSystem::GetObserverTPerfMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___GetObserverTPerfMarker_31;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessSystem::GetDataProvidersPerfMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___GetDataProvidersPerfMarker_32;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessSystem::GetDataProviderPerfMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___GetDataProviderPerfMarker_33;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessSystem::ResumeObserversPerfMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___ResumeObserversPerfMarker_34;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessSystem::ResumeObserversTPerfMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___ResumeObserversTPerfMarker_35;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessSystem::ResumeObserverPerfMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___ResumeObserverPerfMarker_36;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessSystem::SuspendObserversPerfMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___SuspendObserversPerfMarker_37;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessSystem::SuspendObserversTPerfMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___SuspendObserversTPerfMarker_38;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessSystem::SuspendObserverPerfMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___SuspendObserverPerfMarker_39;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessSystem::ClearObservationsPerfMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___ClearObservationsPerfMarker_40;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessSystem::ClearObservationsTPerfMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___ClearObservationsTPerfMarker_41;
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
// Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialObserverConfiguration[]
struct MixedRealitySpatialObserverConfigurationU5BU5D_t175B52CA1DE4DF781F77F7FAF9566C4FC8A83884  : public RuntimeArray
{
	ALIGN_FIELD (8) MixedRealitySpatialObserverConfiguration_tD6661687B3B62C35D39F64D13472802F6624DB75 m_Items[1];

	inline MixedRealitySpatialObserverConfiguration_tD6661687B3B62C35D39F64D13472802F6624DB75 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline MixedRealitySpatialObserverConfiguration_tD6661687B3B62C35D39F64D13472802F6624DB75* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, MixedRealitySpatialObserverConfiguration_tD6661687B3B62C35D39F64D13472802F6624DB75 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___componentType_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___componentName_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___observerProfile_4), (void*)NULL);
		#endif
	}
	inline MixedRealitySpatialObserverConfiguration_tD6661687B3B62C35D39F64D13472802F6624DB75 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline MixedRealitySpatialObserverConfiguration_tD6661687B3B62C35D39F64D13472802F6624DB75* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, MixedRealitySpatialObserverConfiguration_tD6661687B3B62C35D39F64D13472802F6624DB75 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___componentType_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___componentName_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___observerProfile_4), (void*)NULL);
		#endif
	}
};


// System.Boolean Microsoft.MixedReality.Toolkit.BaseDataProviderAccessCoreSystem::RegisterDataProvider<System.Object>(System.Type,System.String,Microsoft.MixedReality.Toolkit.Utilities.SupportedPlatforms,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BaseDataProviderAccessCoreSystem_RegisterDataProvider_TisRuntimeObject_m754B4E4F42C2591B24170375FC4DD38D68679DF6_gshared (BaseDataProviderAccessCoreSystem_t30EC4F1C1A10F7586D0EE15069292831A2E3BCF2* __this, Type_t* ___concreteType0, String_t* ___providerName1, int32_t ___supportedPlatforms2, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args3, const RuntimeMethod* method) ;
// System.Boolean Microsoft.MixedReality.Toolkit.BaseDataProviderAccessCoreSystem::UnregisterDataProvider<System.Object>(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BaseDataProviderAccessCoreSystem_UnregisterDataProvider_TisRuntimeObject_mD60FC0708D94C115D8B1A23D3B8E07843F95A4CC_gshared (BaseDataProviderAccessCoreSystem_t30EC4F1C1A10F7586D0EE15069292831A2E3BCF2* __this, RuntimeObject* ___dataProviderInstance0, const RuntimeMethod* method) ;

// System.Void Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessSystem::.ctor(Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessSystemProfile)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealitySpatialAwarenessSystem__ctor_m7B2BDFF1519B423EB238B7C6546822A26358BE58 (MixedRealitySpatialAwarenessSystem_t8D8830FD790974C95CC7531CCA30B7247A13FD90* __this, MixedRealitySpatialAwarenessSystemProfile_t84A6651AAFB01D051CB46EFFB648247FA23035D7* ___profile0, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.BaseCoreSystem::set_Registrar(Microsoft.MixedReality.Toolkit.IMixedRealityServiceRegistrar)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BaseCoreSystem_set_Registrar_m5E2AD3BA5AD91A736E0A23357E3720E5D94665A8_inline (BaseCoreSystem_t9D02F9BBC05DAD6F987F647B666B37A062ACFAA6* __this, RuntimeObject* ___value0, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.BaseDataProviderAccessCoreSystem::.ctor(Microsoft.MixedReality.Toolkit.BaseMixedRealityProfile)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseDataProviderAccessCoreSystem__ctor_m5F92E54E84428722B0B2712DEDE1E9B019E33719 (BaseDataProviderAccessCoreSystem_t30EC4F1C1A10F7586D0EE15069292831A2E3BCF2* __this, BaseMixedRealityProfile_tB4FDEF58FFD17796C0DB7241630B71CDF38FA1D4* ___profile0, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessSystem::InitializeInternal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealitySpatialAwarenessSystem_InitializeInternal_mF4B664386C1D9666C03E19BF318BDB859D00BE55 (MixedRealitySpatialAwarenessSystem_t8D8830FD790974C95CC7531CCA30B7247A13FD90* __this, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.BaseService::Initialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseService_Initialize_m750DCABB0D54C519B59BADDB050699C41BBC4EFA (BaseService_tB7EC5C0F60DC5EE2DA122A608226D3887B6421D0* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialObserverConfiguration[] Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessSystemProfile::get_ObserverConfigurations()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR MixedRealitySpatialObserverConfigurationU5BU5D_t175B52CA1DE4DF781F77F7FAF9566C4FC8A83884* MixedRealitySpatialAwarenessSystemProfile_get_ObserverConfigurations_m32546F367437EE238C8C9FFF9DF4F104DCD2CA9A_inline (MixedRealitySpatialAwarenessSystemProfile_t84A6651AAFB01D051CB46EFFB648247FA23035D7* __this, const RuntimeMethod* method) ;
// System.String Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialObserverConfiguration::get_ComponentName()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* MixedRealitySpatialObserverConfiguration_get_ComponentName_m9E326C6BAA4CEE359983C061C289615CD3A5BA0B_inline (MixedRealitySpatialObserverConfiguration_tD6661687B3B62C35D39F64D13472802F6624DB75* __this, const RuntimeMethod* method) ;
// System.UInt32 Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialObserverConfiguration::get_Priority()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint32_t MixedRealitySpatialObserverConfiguration_get_Priority_m51C30C468B10524C42C3598C2E0AD29BCA65DD88_inline (MixedRealitySpatialObserverConfiguration_tD6661687B3B62C35D39F64D13472802F6624DB75* __this, const RuntimeMethod* method) ;
// Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialAwarenessObserverProfile Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialObserverConfiguration::get_ObserverProfile()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR BaseSpatialAwarenessObserverProfile_t7A50E95DBFF01391175C2D418C1ABB3C21F43225* MixedRealitySpatialObserverConfiguration_get_ObserverProfile_m04BB069102FDBB62D75BFF4ADC85EDFEA9509466_inline (MixedRealitySpatialObserverConfiguration_tD6661687B3B62C35D39F64D13472802F6624DB75* __this, const RuntimeMethod* method) ;
// Microsoft.MixedReality.Toolkit.Utilities.SystemType Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialObserverConfiguration::get_ComponentType()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR SystemType_t9C9A555B60497C18297AD1082247C2960A7B666E* MixedRealitySpatialObserverConfiguration_get_ComponentType_m7D5B768E121CE32D1B26CAFB315E734A59CBC14C_inline (MixedRealitySpatialObserverConfiguration_tD6661687B3B62C35D39F64D13472802F6624DB75* __this, const RuntimeMethod* method) ;
// System.Type Microsoft.MixedReality.Toolkit.Utilities.SystemType::get_Type()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Type_t* SystemType_get_Type_mBE668A3226CE7032C46D516321F82906389782DA_inline (SystemType_t9C9A555B60497C18297AD1082247C2960A7B666E* __this, const RuntimeMethod* method) ;
// Microsoft.MixedReality.Toolkit.Utilities.SupportedPlatforms Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialObserverConfiguration::get_RuntimePlatform()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t MixedRealitySpatialObserverConfiguration_get_RuntimePlatform_m32E933F874244B5C0C4C951ABCAB9A90E8174338_inline (MixedRealitySpatialObserverConfiguration_tD6661687B3B62C35D39F64D13472802F6624DB75* __this, const RuntimeMethod* method) ;
// System.Boolean Microsoft.MixedReality.Toolkit.BaseDataProviderAccessCoreSystem::RegisterDataProvider<Microsoft.MixedReality.Toolkit.SpatialAwareness.IMixedRealitySpatialAwarenessObserver>(System.Type,System.String,Microsoft.MixedReality.Toolkit.Utilities.SupportedPlatforms,System.Object[])
inline bool BaseDataProviderAccessCoreSystem_RegisterDataProvider_TisIMixedRealitySpatialAwarenessObserver_t6897374ED60E2BA1C5A4ECAF099C486EF526FF15_m1BAF0E595E77E9EA59C6B8FCA6D7B86833DB0D68 (BaseDataProviderAccessCoreSystem_t30EC4F1C1A10F7586D0EE15069292831A2E3BCF2* __this, Type_t* ___concreteType0, String_t* ___providerName1, int32_t ___supportedPlatforms2, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args3, const RuntimeMethod* method)
{
	return ((  bool (*) (BaseDataProviderAccessCoreSystem_t30EC4F1C1A10F7586D0EE15069292831A2E3BCF2*, Type_t*, String_t*, int32_t, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, const RuntimeMethod*))BaseDataProviderAccessCoreSystem_RegisterDataProvider_TisRuntimeObject_m754B4E4F42C2591B24170375FC4DD38D68679DF6_gshared)(__this, ___concreteType0, ___providerName1, ___supportedPlatforms2, ___args3, method);
}
// System.Void Microsoft.MixedReality.Toolkit.BaseService::Disable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseService_Disable_m75AA61136BE79E0C8EA4B058D1506882A56683C4 (BaseService_tB7EC5C0F60DC5EE2DA122A608226D3887B6421D0* __this, const RuntimeMethod* method) ;
// System.Boolean Microsoft.MixedReality.Toolkit.BaseDataProviderAccessCoreSystem::UnregisterDataProvider<Microsoft.MixedReality.Toolkit.SpatialAwareness.IMixedRealitySpatialAwarenessObserver>(T)
inline bool BaseDataProviderAccessCoreSystem_UnregisterDataProvider_TisIMixedRealitySpatialAwarenessObserver_t6897374ED60E2BA1C5A4ECAF099C486EF526FF15_mCD9464EB917CF367BD8BA93B24804467C4533CF1 (BaseDataProviderAccessCoreSystem_t30EC4F1C1A10F7586D0EE15069292831A2E3BCF2* __this, RuntimeObject* ___dataProviderInstance0, const RuntimeMethod* method)
{
	return ((  bool (*) (BaseDataProviderAccessCoreSystem_t30EC4F1C1A10F7586D0EE15069292831A2E3BCF2*, RuntimeObject*, const RuntimeMethod*))BaseDataProviderAccessCoreSystem_UnregisterDataProvider_TisRuntimeObject_mD60FC0708D94C115D8B1A23D3B8E07843F95A4CC_gshared)(__this, ___dataProviderInstance0, method);
}
// System.Void Microsoft.MixedReality.Toolkit.BaseDataProviderAccessCoreSystem::Enable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseDataProviderAccessCoreSystem_Enable_m0164D441C4CCECC6D4AFEAF9771CC3CB2D7B2854 (BaseDataProviderAccessCoreSystem_t30EC4F1C1A10F7586D0EE15069292831A2E3BCF2* __this, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.BaseDataProviderAccessCoreSystem::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseDataProviderAccessCoreSystem_Reset_mCB20FF71C342F6CF354EFFDBA90E01351B1C6693 (BaseDataProviderAccessCoreSystem_t30EC4F1C1A10F7586D0EE15069292831A2E3BCF2* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Application::get_isPlaying()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Application_get_isPlaying_m0B3B501E1093739F8887A0DAC5F61D9CB49CC337 (const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Application::get_isEditor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Application_get_isEditor_m0377DB707B566C8E21DA3CD99963210F6D57D234 (const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::DestroyImmediate(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_DestroyImmediate_m8249CABCDF344BE3A67EE765122EBB415DC2BC57 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___obj0, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::DetachChildren()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_DetachChildren_m7E4B3405F2F053B059E76EC1DF0F235EED335D69 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_mFCDAE6333522488F60597AF019EA90BB1207A5AA (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___obj0, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.BaseEventSystem::Destroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseEventSystem_Destroy_m4763A3BA66E9048BD868B9E9632029E94BE9F451 (BaseEventSystem_tB9BD9711D545EEEF00D3162ED9A13EBDE4B1DEA1* __this, const RuntimeMethod* method) ;
// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessSystem::get_CreateSpatialAwarenessObjectParent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* MixedRealitySpatialAwarenessSystem_get_CreateSpatialAwarenessObjectParent_mB6BE3EE9DD033F62073C88450C1BE706758BB6A8 (MixedRealitySpatialAwarenessSystem_t8D8830FD790974C95CC7531CCA30B7247A13FD90* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject__ctor_m37D512B05D292F954792225E6C6EEE95293A9B88 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, String_t* ___name0, const RuntimeMethod* method) ;
// UnityEngine.Transform Microsoft.MixedReality.Toolkit.MixedRealityPlayspace::get_Transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* MixedRealityPlayspace_get_Transform_m5003FD4FD29DDCE3E955E157147F378B72EE1945 (const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::SetParent(UnityEngine.Transform,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_SetParent_m9BDD7B7476714B2D7919B10BDC22CE75C0A0A195 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___parent0, bool ___worldPositionStays1, const RuntimeMethod* method) ;
// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessSystem::get_SpatialAwarenessObjectParent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* MixedRealitySpatialAwarenessSystem_get_SpatialAwarenessObjectParent_m0CAE6DD7F708B73C54D0F92DE7D2E0FF1FB0C141 (MixedRealitySpatialAwarenessSystem_t8D8830FD790974C95CC7531CCA30B7247A13FD90* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// Unity.Profiling.ProfilerMarker/AutoScope Unity.Profiling.ProfilerMarker::Auto()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR AutoScope_tFB983697E28885CB10FFDB92D7EFD0615AEF3139 ProfilerMarker_Auto_m133FA724EB95D16187B37D2C8A501D7E989B1F8D_inline (ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD* __this, const RuntimeMethod* method) ;
// System.Void Unity.Profiling.ProfilerMarker/AutoScope::Dispose()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AutoScope_Dispose_mED763F3F51261EF8FB79DB32CD06E0A3F6C40481_inline (AutoScope_tFB983697E28885CB10FFDB92D7EFD0615AEF3139* __this, const RuntimeMethod* method) ;
// System.Void Unity.Profiling.ProfilerMarker::.ctor(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ProfilerMarker__ctor_mDD68B0A8B71E0301F592AF8891560150E55699C8_inline (ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD* __this, String_t* ___name0, const RuntimeMethod* method) ;
// System.Void Unity.Profiling.ProfilerMarker/AutoScope::.ctor(System.IntPtr)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AutoScope__ctor_m7F63A273E382CB6328736B6E7F321DDFA40EA9E3_inline (AutoScope_tFB983697E28885CB10FFDB92D7EFD0615AEF3139* __this, intptr_t ___markerPtr0, const RuntimeMethod* method) ;
// System.Void Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility::EndSample(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProfilerUnsafeUtility_EndSample_mE2F7A0DB4C52105F7CD135ED8816A2BB98E663CC (intptr_t ___markerPtr0, const RuntimeMethod* method) ;
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
// System.Void Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessSystem::.ctor(Microsoft.MixedReality.Toolkit.IMixedRealityServiceRegistrar,Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessSystemProfile)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealitySpatialAwarenessSystem__ctor_m7002337374EA2B974C6033785EF0DA98A259F7AF (MixedRealitySpatialAwarenessSystem_t8D8830FD790974C95CC7531CCA30B7247A13FD90* __this, RuntimeObject* ___registrar0, MixedRealitySpatialAwarenessSystemProfile_t84A6651AAFB01D051CB46EFFB648247FA23035D7* ___profile1, const RuntimeMethod* method) 
{
	{
		// MixedRealitySpatialAwarenessSystemProfile profile) : this(profile)
		MixedRealitySpatialAwarenessSystemProfile_t84A6651AAFB01D051CB46EFFB648247FA23035D7* L_0 = ___profile1;
		MixedRealitySpatialAwarenessSystem__ctor_m7B2BDFF1519B423EB238B7C6546822A26358BE58(__this, L_0, NULL);
		// Registrar = registrar;
		RuntimeObject* L_1 = ___registrar0;
		BaseCoreSystem_set_Registrar_m5E2AD3BA5AD91A736E0A23357E3720E5D94665A8_inline(__this, L_1, NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessSystem::.ctor(Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessSystemProfile)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealitySpatialAwarenessSystem__ctor_m7B2BDFF1519B423EB238B7C6546822A26358BE58 (MixedRealitySpatialAwarenessSystem_t8D8830FD790974C95CC7531CCA30B7247A13FD90* __this, MixedRealitySpatialAwarenessSystemProfile_t84A6651AAFB01D051CB46EFFB648247FA23035D7* ___profile0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseDataProviderAccessCoreSystem_t30EC4F1C1A10F7586D0EE15069292831A2E3BCF2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral188D30B6EDF85BA42D4E192BE1E93A4D2142FDCB);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public override string Name { get; protected set; } = "Mixed Reality Spatial Awareness System";
		__this->___U3CNameU3Ek__BackingField_24 = _stringLiteral188D30B6EDF85BA42D4E192BE1E93A4D2142FDCB;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CNameU3Ek__BackingField_24), (void*)_stringLiteral188D30B6EDF85BA42D4E192BE1E93A4D2142FDCB);
		// MixedRealitySpatialAwarenessSystemProfile profile) : base(profile)
		MixedRealitySpatialAwarenessSystemProfile_t84A6651AAFB01D051CB46EFFB648247FA23035D7* L_0 = ___profile0;
		il2cpp_codegen_runtime_class_init_inline(BaseDataProviderAccessCoreSystem_t30EC4F1C1A10F7586D0EE15069292831A2E3BCF2_il2cpp_TypeInfo_var);
		BaseDataProviderAccessCoreSystem__ctor_m5F92E54E84428722B0B2712DEDE1E9B019E33719(__this, L_0, NULL);
		// { }
		return;
	}
}
// System.String Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessSystem::get_Name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* MixedRealitySpatialAwarenessSystem_get_Name_m74505A08D759533F20ED9E729624CCCD9DFCF08C (MixedRealitySpatialAwarenessSystem_t8D8830FD790974C95CC7531CCA30B7247A13FD90* __this, const RuntimeMethod* method) 
{
	{
		// public override string Name { get; protected set; } = "Mixed Reality Spatial Awareness System";
		String_t* L_0 = __this->___U3CNameU3Ek__BackingField_24;
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessSystem::set_Name(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealitySpatialAwarenessSystem_set_Name_m525232E4D43A0080D9FE01BE6B6A9F6C0DAAA0AD (MixedRealitySpatialAwarenessSystem_t8D8830FD790974C95CC7531CCA30B7247A13FD90* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public override string Name { get; protected set; } = "Mixed Reality Spatial Awareness System";
		String_t* L_0 = ___value0;
		__this->___U3CNameU3Ek__BackingField_24 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CNameU3Ek__BackingField_24), (void*)L_0);
		return;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessSystem::CheckCapability(Microsoft.MixedReality.Toolkit.MixedRealityCapability)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MixedRealitySpatialAwarenessSystem_CheckCapability_mD5B285BF58702FE237066F594E07291A00DE0AB7 (MixedRealitySpatialAwarenessSystem_t8D8830FD790974C95CC7531CCA30B7247A13FD90* __this, int32_t ___capability0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_tFA9730B1781B4C120870B6E65BFF8A40BCE024A8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t59FDF44DF386D7519C234BF34F19D6732D13AB23_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealityCapabilityCheck_t89E15A80CA84BBA26759BE2D8A2720CD26534921_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MixedRealitySpatialAwarenessSystem_GetDataProviders_TisIMixedRealitySpatialAwarenessObserver_t6897374ED60E2BA1C5A4ECAF099C486EF526FF15_mDC7F0CB34731C65139476D15E4368831ADBFADBC_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	bool V_2 = false;
	{
		// foreach (var observer in GetDataProviders<IMixedRealitySpatialAwarenessObserver>())
		RuntimeObject* L_0;
		L_0 = GenericVirtualFuncInvoker0< RuntimeObject* >::Invoke(MixedRealitySpatialAwarenessSystem_GetDataProviders_TisIMixedRealitySpatialAwarenessObserver_t6897374ED60E2BA1C5A4ECAF099C486EF526FF15_mDC7F0CB34731C65139476D15E4368831ADBFADBC_RuntimeMethod_var, __this);
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<Microsoft.MixedReality.Toolkit.SpatialAwareness.IMixedRealitySpatialAwarenessObserver>::GetEnumerator() */, IEnumerable_1_tFA9730B1781B4C120870B6E65BFF8A40BCE024A8_il2cpp_TypeInfo_var, L_0);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0034:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_2 = V_0;
					if (!L_2)
					{
						goto IL_003d;
					}
				}
				{
					RuntimeObject* L_3 = V_0;
					NullCheck(L_3);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_3);
				}

IL_003d:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_002a_1;
			}

IL_000e_1:
			{
				// foreach (var observer in GetDataProviders<IMixedRealitySpatialAwarenessObserver>())
				RuntimeObject* L_4 = V_0;
				NullCheck(L_4);
				RuntimeObject* L_5;
				L_5 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<Microsoft.MixedReality.Toolkit.SpatialAwareness.IMixedRealitySpatialAwarenessObserver>::get_Current() */, IEnumerator_1_t59FDF44DF386D7519C234BF34F19D6732D13AB23_il2cpp_TypeInfo_var, L_4);
				// if (observer is IMixedRealityCapabilityCheck capabilityChecker &&
				//     capabilityChecker.CheckCapability(capability))
				V_1 = ((RuntimeObject*)IsInst((RuntimeObject*)L_5, IMixedRealityCapabilityCheck_t89E15A80CA84BBA26759BE2D8A2720CD26534921_il2cpp_TypeInfo_var));
				RuntimeObject* L_6 = V_1;
				if (!L_6)
				{
					goto IL_002a_1;
				}
			}
			{
				RuntimeObject* L_7 = V_1;
				int32_t L_8 = ___capability0;
				NullCheck(L_7);
				bool L_9;
				L_9 = InterfaceFuncInvoker1< bool, int32_t >::Invoke(0 /* System.Boolean Microsoft.MixedReality.Toolkit.IMixedRealityCapabilityCheck::CheckCapability(Microsoft.MixedReality.Toolkit.MixedRealityCapability) */, IMixedRealityCapabilityCheck_t89E15A80CA84BBA26759BE2D8A2720CD26534921_il2cpp_TypeInfo_var, L_7, L_8);
				if (!L_9)
				{
					goto IL_002a_1;
				}
			}
			{
				// return true;
				V_2 = (bool)1;
				goto IL_0040;
			}

IL_002a_1:
			{
				// foreach (var observer in GetDataProviders<IMixedRealitySpatialAwarenessObserver>())
				RuntimeObject* L_10 = V_0;
				NullCheck(L_10);
				bool L_11;
				L_11 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_10);
				if (L_11)
				{
					goto IL_000e_1;
				}
			}
			{
				goto IL_003e;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_003e:
	{
		// return false;
		return (bool)0;
	}

IL_0040:
	{
		// }
		bool L_12 = V_2;
		return L_12;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessSystem::Initialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealitySpatialAwarenessSystem_Initialize_mBB355408A05E67A63E0330EA6BAE4A607B3ADB69 (MixedRealitySpatialAwarenessSystem_t8D8830FD790974C95CC7531CCA30B7247A13FD90* __this, const RuntimeMethod* method) 
{
	{
		// IsInitialized = false;
		VirtualActionInvoker1< bool >::Invoke(32 /* System.Void Microsoft.MixedReality.Toolkit.BaseService::set_IsInitialized(System.Boolean) */, __this, (bool)0);
		// InitializeInternal();
		MixedRealitySpatialAwarenessSystem_InitializeInternal_mF4B664386C1D9666C03E19BF318BDB859D00BE55(__this, NULL);
		// base.Initialize();
		BaseService_Initialize_m750DCABB0D54C519B59BADDB050699C41BBC4EFA(__this, NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessSystem::InitializeInternal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealitySpatialAwarenessSystem_InitializeInternal_mF4B664386C1D9666C03E19BF318BDB859D00BE55 (MixedRealitySpatialAwarenessSystem_t8D8830FD790974C95CC7531CCA30B7247A13FD90* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseDataProviderAccessCoreSystem_RegisterDataProvider_TisIMixedRealitySpatialAwarenessObserver_t6897374ED60E2BA1C5A4ECAF099C486EF526FF15_m1BAF0E595E77E9EA59C6B8FCA6D7B86833DB0D68_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IReadOnlyCollection_1_t04A6836A5829DBDAAF26CD938058299A14B25033_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MixedRealitySpatialAwarenessSystemProfile_t84A6651AAFB01D051CB46EFFB648247FA23035D7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MixedRealitySpatialAwarenessSystem_GetDataProviders_TisIMixedRealitySpatialAwarenessObserver_t6897374ED60E2BA1C5A4ECAF099C486EF526FF15_mDC7F0CB34731C65139476D15E4368831ADBFADBC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	MixedRealitySpatialAwarenessSystemProfile_t84A6651AAFB01D051CB46EFFB648247FA23035D7* V_0 = NULL;
	int32_t V_1 = 0;
	MixedRealitySpatialObserverConfiguration_tD6661687B3B62C35D39F64D13472802F6624DB75 V_2;
	memset((&V_2), 0, sizeof(V_2));
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_3 = NULL;
	{
		// MixedRealitySpatialAwarenessSystemProfile profile = ConfigurationProfile as MixedRealitySpatialAwarenessSystemProfile;
		BaseMixedRealityProfile_tB4FDEF58FFD17796C0DB7241630B71CDF38FA1D4* L_0;
		L_0 = VirtualFuncInvoker0< BaseMixedRealityProfile_tB4FDEF58FFD17796C0DB7241630B71CDF38FA1D4* >::Invoke(22 /* Microsoft.MixedReality.Toolkit.BaseMixedRealityProfile Microsoft.MixedReality.Toolkit.BaseService::get_ConfigurationProfile() */, __this);
		V_0 = ((MixedRealitySpatialAwarenessSystemProfile_t84A6651AAFB01D051CB46EFFB648247FA23035D7*)IsInstClass((RuntimeObject*)L_0, MixedRealitySpatialAwarenessSystemProfile_t84A6651AAFB01D051CB46EFFB648247FA23035D7_il2cpp_TypeInfo_var));
		// if (profile != null && GetDataProviders<IMixedRealitySpatialAwarenessObserver>().Count == 0)
		MixedRealitySpatialAwarenessSystemProfile_t84A6651AAFB01D051CB46EFFB648247FA23035D7* L_1 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_1, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_2)
		{
			goto IL_0092;
		}
	}
	{
		RuntimeObject* L_3;
		L_3 = GenericVirtualFuncInvoker0< RuntimeObject* >::Invoke(MixedRealitySpatialAwarenessSystem_GetDataProviders_TisIMixedRealitySpatialAwarenessObserver_t6897374ED60E2BA1C5A4ECAF099C486EF526FF15_mDC7F0CB34731C65139476D15E4368831ADBFADBC_RuntimeMethod_var, __this);
		NullCheck(L_3);
		int32_t L_4;
		L_4 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.IReadOnlyCollection`1<Microsoft.MixedReality.Toolkit.SpatialAwareness.IMixedRealitySpatialAwarenessObserver>::get_Count() */, IReadOnlyCollection_1_t04A6836A5829DBDAAF26CD938058299A14B25033_il2cpp_TypeInfo_var, L_3);
		if (L_4)
		{
			goto IL_0092;
		}
	}
	{
		// for (int i = 0; i < profile.ObserverConfigurations.Length; i++)
		V_1 = 0;
		goto IL_0087;
	}

IL_0026:
	{
		// MixedRealitySpatialObserverConfiguration configuration = profile.ObserverConfigurations[i];
		MixedRealitySpatialAwarenessSystemProfile_t84A6651AAFB01D051CB46EFFB648247FA23035D7* L_5 = V_0;
		NullCheck(L_5);
		MixedRealitySpatialObserverConfigurationU5BU5D_t175B52CA1DE4DF781F77F7FAF9566C4FC8A83884* L_6;
		L_6 = MixedRealitySpatialAwarenessSystemProfile_get_ObserverConfigurations_m32546F367437EE238C8C9FFF9DF4F104DCD2CA9A_inline(L_5, NULL);
		int32_t L_7 = V_1;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		MixedRealitySpatialObserverConfiguration_tD6661687B3B62C35D39F64D13472802F6624DB75 L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		V_2 = L_9;
		// object[] args = { this, configuration.ComponentName, configuration.Priority, configuration.ObserverProfile };
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_10 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)4);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_11 = L_10;
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, __this);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)__this);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_12 = L_11;
		String_t* L_13;
		L_13 = MixedRealitySpatialObserverConfiguration_get_ComponentName_m9E326C6BAA4CEE359983C061C289615CD3A5BA0B_inline((&V_2), NULL);
		NullCheck(L_12);
		ArrayElementTypeCheck (L_12, L_13);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_13);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_14 = L_12;
		uint32_t L_15;
		L_15 = MixedRealitySpatialObserverConfiguration_get_Priority_m51C30C468B10524C42C3598C2E0AD29BCA65DD88_inline((&V_2), NULL);
		uint32_t L_16 = L_15;
		RuntimeObject* L_17 = Box(UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_il2cpp_TypeInfo_var, &L_16);
		NullCheck(L_14);
		ArrayElementTypeCheck (L_14, L_17);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_17);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_18 = L_14;
		BaseSpatialAwarenessObserverProfile_t7A50E95DBFF01391175C2D418C1ABB3C21F43225* L_19;
		L_19 = MixedRealitySpatialObserverConfiguration_get_ObserverProfile_m04BB069102FDBB62D75BFF4ADC85EDFEA9509466_inline((&V_2), NULL);
		NullCheck(L_18);
		ArrayElementTypeCheck (L_18, L_19);
		(L_18)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject*)L_19);
		V_3 = L_18;
		// RegisterDataProvider<IMixedRealitySpatialAwarenessObserver>(
		//     configuration.ComponentType.Type,
		//     configuration.ComponentName,
		//     configuration.RuntimePlatform,
		//     args);
		SystemType_t9C9A555B60497C18297AD1082247C2960A7B666E* L_20;
		L_20 = MixedRealitySpatialObserverConfiguration_get_ComponentType_m7D5B768E121CE32D1B26CAFB315E734A59CBC14C_inline((&V_2), NULL);
		NullCheck(L_20);
		Type_t* L_21;
		L_21 = SystemType_get_Type_mBE668A3226CE7032C46D516321F82906389782DA_inline(L_20, NULL);
		String_t* L_22;
		L_22 = MixedRealitySpatialObserverConfiguration_get_ComponentName_m9E326C6BAA4CEE359983C061C289615CD3A5BA0B_inline((&V_2), NULL);
		int32_t L_23;
		L_23 = MixedRealitySpatialObserverConfiguration_get_RuntimePlatform_m32E933F874244B5C0C4C951ABCAB9A90E8174338_inline((&V_2), NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_24 = V_3;
		bool L_25;
		L_25 = BaseDataProviderAccessCoreSystem_RegisterDataProvider_TisIMixedRealitySpatialAwarenessObserver_t6897374ED60E2BA1C5A4ECAF099C486EF526FF15_m1BAF0E595E77E9EA59C6B8FCA6D7B86833DB0D68(__this, L_21, L_22, L_23, L_24, BaseDataProviderAccessCoreSystem_RegisterDataProvider_TisIMixedRealitySpatialAwarenessObserver_t6897374ED60E2BA1C5A4ECAF099C486EF526FF15_m1BAF0E595E77E9EA59C6B8FCA6D7B86833DB0D68_RuntimeMethod_var);
		// for (int i = 0; i < profile.ObserverConfigurations.Length; i++)
		int32_t L_26 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_26, 1));
	}

IL_0087:
	{
		// for (int i = 0; i < profile.ObserverConfigurations.Length; i++)
		int32_t L_27 = V_1;
		MixedRealitySpatialAwarenessSystemProfile_t84A6651AAFB01D051CB46EFFB648247FA23035D7* L_28 = V_0;
		NullCheck(L_28);
		MixedRealitySpatialObserverConfigurationU5BU5D_t175B52CA1DE4DF781F77F7FAF9566C4FC8A83884* L_29;
		L_29 = MixedRealitySpatialAwarenessSystemProfile_get_ObserverConfigurations_m32546F367437EE238C8C9FFF9DF4F104DCD2CA9A_inline(L_28, NULL);
		NullCheck(L_29);
		if ((((int32_t)L_27) < ((int32_t)((int32_t)(((RuntimeArray*)L_29)->max_length)))))
		{
			goto IL_0026;
		}
	}

IL_0092:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessSystem::Disable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealitySpatialAwarenessSystem_Disable_m7BB2FBF7420CE0D10B85CF3BA5F99F5232BEB588 (MixedRealitySpatialAwarenessSystem_t8D8830FD790974C95CC7531CCA30B7247A13FD90* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseDataProviderAccessCoreSystem_UnregisterDataProvider_TisIMixedRealitySpatialAwarenessObserver_t6897374ED60E2BA1C5A4ECAF099C486EF526FF15_mCD9464EB917CF367BD8BA93B24804467C4533CF1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_tFA9730B1781B4C120870B6E65BFF8A40BCE024A8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t59FDF44DF386D7519C234BF34F19D6732D13AB23_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MixedRealitySpatialAwarenessSystem_GetDataProviders_TisIMixedRealitySpatialAwarenessObserver_t6897374ED60E2BA1C5A4ECAF099C486EF526FF15_mDC7F0CB34731C65139476D15E4368831ADBFADBC_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	{
		// base.Disable();
		BaseService_Disable_m75AA61136BE79E0C8EA4B058D1506882A56683C4(__this, NULL);
		// foreach (var provider in GetDataProviders<IMixedRealitySpatialAwarenessObserver>())
		RuntimeObject* L_0;
		L_0 = GenericVirtualFuncInvoker0< RuntimeObject* >::Invoke(MixedRealitySpatialAwarenessSystem_GetDataProviders_TisIMixedRealitySpatialAwarenessObserver_t6897374ED60E2BA1C5A4ECAF099C486EF526FF15_mDC7F0CB34731C65139476D15E4368831ADBFADBC_RuntimeMethod_var, __this);
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<Microsoft.MixedReality.Toolkit.SpatialAwareness.IMixedRealitySpatialAwarenessObserver>::GetEnumerator() */, IEnumerable_1_tFA9730B1781B4C120870B6E65BFF8A40BCE024A8_il2cpp_TypeInfo_var, L_0);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_002d:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_2 = V_0;
					if (!L_2)
					{
						goto IL_0036;
					}
				}
				{
					RuntimeObject* L_3 = V_0;
					NullCheck(L_3);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_3);
				}

IL_0036:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0023_1;
			}

IL_0014_1:
			{
				// foreach (var provider in GetDataProviders<IMixedRealitySpatialAwarenessObserver>())
				RuntimeObject* L_4 = V_0;
				NullCheck(L_4);
				RuntimeObject* L_5;
				L_5 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<Microsoft.MixedReality.Toolkit.SpatialAwareness.IMixedRealitySpatialAwarenessObserver>::get_Current() */, IEnumerator_1_t59FDF44DF386D7519C234BF34F19D6732D13AB23_il2cpp_TypeInfo_var, L_4);
				V_1 = L_5;
				// UnregisterDataProvider(provider);
				RuntimeObject* L_6 = V_1;
				bool L_7;
				L_7 = BaseDataProviderAccessCoreSystem_UnregisterDataProvider_TisIMixedRealitySpatialAwarenessObserver_t6897374ED60E2BA1C5A4ECAF099C486EF526FF15_mCD9464EB917CF367BD8BA93B24804467C4533CF1(__this, L_6, BaseDataProviderAccessCoreSystem_UnregisterDataProvider_TisIMixedRealitySpatialAwarenessObserver_t6897374ED60E2BA1C5A4ECAF099C486EF526FF15_mCD9464EB917CF367BD8BA93B24804467C4533CF1_RuntimeMethod_var);
			}

IL_0023_1:
			{
				// foreach (var provider in GetDataProviders<IMixedRealitySpatialAwarenessObserver>())
				RuntimeObject* L_8 = V_0;
				NullCheck(L_8);
				bool L_9;
				L_9 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_8);
				if (L_9)
				{
					goto IL_0014_1;
				}
			}
			{
				goto IL_0037;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0037:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessSystem::Enable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealitySpatialAwarenessSystem_Enable_mCFD593CC552320ABD6415B1CC61B83738636B3F7 (MixedRealitySpatialAwarenessSystem_t8D8830FD790974C95CC7531CCA30B7247A13FD90* __this, const RuntimeMethod* method) 
{
	{
		// InitializeInternal();
		MixedRealitySpatialAwarenessSystem_InitializeInternal_mF4B664386C1D9666C03E19BF318BDB859D00BE55(__this, NULL);
		// base.Enable();
		BaseDataProviderAccessCoreSystem_Enable_m0164D441C4CCECC6D4AFEAF9771CC3CB2D7B2854(__this, NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessSystem::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealitySpatialAwarenessSystem_Reset_m05814D993BEDE5549B232265E18B4E93C844F0A0 (MixedRealitySpatialAwarenessSystem_t8D8830FD790974C95CC7531CCA30B7247A13FD90* __this, const RuntimeMethod* method) 
{
	{
		// base.Reset();
		BaseDataProviderAccessCoreSystem_Reset_mCB20FF71C342F6CF354EFFDBA90E01351B1C6693(__this, NULL);
		// Disable();
		VirtualActionInvoker0::Invoke(29 /* System.Void Microsoft.MixedReality.Toolkit.BaseService::Disable() */, __this);
		// Initialize();
		VirtualActionInvoker0::Invoke(24 /* System.Void Microsoft.MixedReality.Toolkit.BaseService::Initialize() */, __this);
		// Enable();
		VirtualActionInvoker0::Invoke(26 /* System.Void Microsoft.MixedReality.Toolkit.BaseService::Enable() */, __this);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessSystem::Destroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealitySpatialAwarenessSystem_Destroy_m0943C993551AB8838CD50161F12D45ED3D32E4B1 (MixedRealitySpatialAwarenessSystem_t8D8830FD790974C95CC7531CCA30B7247A13FD90* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Application.isPlaying)
		bool L_0;
		L_0 = Application_get_isPlaying_m0B3B501E1093739F8887A0DAC5F61D9CB49CC337(NULL);
		if (!L_0)
		{
			goto IL_004b;
		}
	}
	{
		// if (spatialAwarenessObjectParent != null)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = __this->___spatialAwarenessObjectParent_25;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_1, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_2)
		{
			goto IL_004b;
		}
	}
	{
		// if (Application.isEditor)
		bool L_3;
		L_3 = Application_get_isEditor_m0377DB707B566C8E21DA3CD99963210F6D57D234(NULL);
		if (!L_3)
		{
			goto IL_0029;
		}
	}
	{
		// Object.DestroyImmediate(spatialAwarenessObjectParent);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = __this->___spatialAwarenessObjectParent_25;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_DestroyImmediate_m8249CABCDF344BE3A67EE765122EBB415DC2BC57(L_4, NULL);
		goto IL_0044;
	}

IL_0029:
	{
		// spatialAwarenessObjectParent.transform.DetachChildren();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5 = __this->___spatialAwarenessObjectParent_25;
		NullCheck(L_5);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6;
		L_6 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_5, NULL);
		NullCheck(L_6);
		Transform_DetachChildren_m7E4B3405F2F053B059E76EC1DF0F235EED335D69(L_6, NULL);
		// Object.Destroy(spatialAwarenessObjectParent);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7 = __this->___spatialAwarenessObjectParent_25;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mFCDAE6333522488F60597AF019EA90BB1207A5AA(L_7, NULL);
	}

IL_0044:
	{
		// spatialAwarenessObjectParent = null;
		__this->___spatialAwarenessObjectParent_25 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___spatialAwarenessObjectParent_25), (void*)(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)NULL);
	}

IL_004b:
	{
		// base.Destroy();
		BaseEventSystem_Destroy_m4763A3BA66E9048BD868B9E9632029E94BE9F451(__this, NULL);
		// }
		return;
	}
}
// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessSystem::get_SpatialAwarenessObjectParent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* MixedRealitySpatialAwarenessSystem_get_SpatialAwarenessObjectParent_m0CAE6DD7F708B73C54D0F92DE7D2E0FF1FB0C141 (MixedRealitySpatialAwarenessSystem_t8D8830FD790974C95CC7531CCA30B7247A13FD90* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_0 = NULL;
	{
		// public GameObject SpatialAwarenessObjectParent => spatialAwarenessObjectParent != null ? spatialAwarenessObjectParent : (spatialAwarenessObjectParent = CreateSpatialAwarenessObjectParent);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___spatialAwarenessObjectParent_25;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (L_1)
		{
			goto IL_001e;
		}
	}
	{
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2;
		L_2 = MixedRealitySpatialAwarenessSystem_get_CreateSpatialAwarenessObjectParent_mB6BE3EE9DD033F62073C88450C1BE706758BB6A8(__this, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = L_2;
		V_0 = L_3;
		__this->___spatialAwarenessObjectParent_25 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___spatialAwarenessObjectParent_25), (void*)L_3);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = V_0;
		return L_4;
	}

IL_001e:
	{
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5 = __this->___spatialAwarenessObjectParent_25;
		return L_5;
	}
}
// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessSystem::get_CreateSpatialAwarenessObjectParent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* MixedRealitySpatialAwarenessSystem_get_CreateSpatialAwarenessObjectParent_mB6BE3EE9DD033F62073C88450C1BE706758BB6A8 (MixedRealitySpatialAwarenessSystem_t8D8830FD790974C95CC7531CCA30B7247A13FD90* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral84210E916B771570003864C57344196A52266B35);
		s_Il2CppMethodInitialized = true;
	}
	{
		// GameObject newParent = new GameObject("Spatial Awareness System");
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)il2cpp_codegen_object_new(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		GameObject__ctor_m37D512B05D292F954792225E6C6EEE95293A9B88(L_0, _stringLiteral84210E916B771570003864C57344196A52266B35, NULL);
		// newParent.transform.SetParent(MixedRealityPlayspace.Transform, false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = L_0;
		NullCheck(L_1);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_1, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = MixedRealityPlayspace_get_Transform_m5003FD4FD29DDCE3E955E157147F378B72EE1945(NULL);
		NullCheck(L_2);
		Transform_SetParent_m9BDD7B7476714B2D7919B10BDC22CE75C0A0A195(L_2, L_3, (bool)0, NULL);
		// return newParent;
		return L_1;
	}
}
// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessSystem::CreateSpatialAwarenessObservationParent(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* MixedRealitySpatialAwarenessSystem_CreateSpatialAwarenessObservationParent_m5DE45CF702C4BDFA614F2EBA3FB5D1D7AF4EF30E (MixedRealitySpatialAwarenessSystem_t8D8830FD790974C95CC7531CCA30B7247A13FD90* __this, String_t* ___name0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// GameObject objectParent = new GameObject(name);
		String_t* L_0 = ___name0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)il2cpp_codegen_object_new(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		GameObject__ctor_m37D512B05D292F954792225E6C6EEE95293A9B88(L_1, L_0, NULL);
		// objectParent.transform.SetParent(SpatialAwarenessObjectParent.transform, false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = L_1;
		NullCheck(L_2);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_2, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4;
		L_4 = MixedRealitySpatialAwarenessSystem_get_SpatialAwarenessObjectParent_m0CAE6DD7F708B73C54D0F92DE7D2E0FF1FB0C141(__this, NULL);
		NullCheck(L_4);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_4, NULL);
		NullCheck(L_3);
		Transform_SetParent_m9BDD7B7476714B2D7919B10BDC22CE75C0A0A195(L_3, L_5, (bool)0, NULL);
		// return objectParent;
		return L_2;
	}
}
// System.UInt32 Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessSystem::GenerateNewSourceId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t MixedRealitySpatialAwarenessSystem_GenerateNewSourceId_m250E35FB9EC4F5B5EFD3F798D29E244C9C06AB6E (MixedRealitySpatialAwarenessSystem_t8D8830FD790974C95CC7531CCA30B7247A13FD90* __this, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	{
		// return nextSourceId++;
		uint32_t L_0 = __this->___nextSourceId_26;
		V_0 = L_0;
		uint32_t L_1 = V_0;
		__this->___nextSourceId_26 = ((int32_t)il2cpp_codegen_add((int32_t)L_1, 1));
		uint32_t L_2 = V_0;
		return L_2;
	}
}
// Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessSystemProfile Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessSystem::get_SpatialAwarenessSystemProfile()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MixedRealitySpatialAwarenessSystemProfile_t84A6651AAFB01D051CB46EFFB648247FA23035D7* MixedRealitySpatialAwarenessSystem_get_SpatialAwarenessSystemProfile_mBCBA3CD11AEA0D85056CBE194BDE8DFFE6FB63D6 (MixedRealitySpatialAwarenessSystem_t8D8830FD790974C95CC7531CCA30B7247A13FD90* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MixedRealitySpatialAwarenessSystemProfile_t84A6651AAFB01D051CB46EFFB648247FA23035D7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (spatialAwarenessSystemProfile == null)
		MixedRealitySpatialAwarenessSystemProfile_t84A6651AAFB01D051CB46EFFB648247FA23035D7* L_0 = __this->___spatialAwarenessSystemProfile_27;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_001f;
		}
	}
	{
		// spatialAwarenessSystemProfile = ConfigurationProfile as MixedRealitySpatialAwarenessSystemProfile;
		BaseMixedRealityProfile_tB4FDEF58FFD17796C0DB7241630B71CDF38FA1D4* L_2;
		L_2 = VirtualFuncInvoker0< BaseMixedRealityProfile_tB4FDEF58FFD17796C0DB7241630B71CDF38FA1D4* >::Invoke(22 /* Microsoft.MixedReality.Toolkit.BaseMixedRealityProfile Microsoft.MixedReality.Toolkit.BaseService::get_ConfigurationProfile() */, __this);
		__this->___spatialAwarenessSystemProfile_27 = ((MixedRealitySpatialAwarenessSystemProfile_t84A6651AAFB01D051CB46EFFB648247FA23035D7*)IsInstClass((RuntimeObject*)L_2, MixedRealitySpatialAwarenessSystemProfile_t84A6651AAFB01D051CB46EFFB648247FA23035D7_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&__this->___spatialAwarenessSystemProfile_27), (void*)((MixedRealitySpatialAwarenessSystemProfile_t84A6651AAFB01D051CB46EFFB648247FA23035D7*)IsInstClass((RuntimeObject*)L_2, MixedRealitySpatialAwarenessSystemProfile_t84A6651AAFB01D051CB46EFFB648247FA23035D7_il2cpp_TypeInfo_var)));
	}

IL_001f:
	{
		// return spatialAwarenessSystemProfile;
		MixedRealitySpatialAwarenessSystemProfile_t84A6651AAFB01D051CB46EFFB648247FA23035D7* L_3 = __this->___spatialAwarenessSystemProfile_27;
		return L_3;
	}
}
// System.Collections.Generic.IReadOnlyList`1<Microsoft.MixedReality.Toolkit.SpatialAwareness.IMixedRealitySpatialAwarenessObserver> Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessSystem::GetObservers()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MixedRealitySpatialAwarenessSystem_GetObservers_m68AE9837CD79D1BB5A75DA18D90D0624B94AD964 (MixedRealitySpatialAwarenessSystem_t8D8830FD790974C95CC7531CCA30B7247A13FD90* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IReadOnlyList_1_t2B96B7FE2C44634D70F69C777077D230700AD798_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MixedRealitySpatialAwarenessSystem_t8D8830FD790974C95CC7531CCA30B7247A13FD90_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	AutoScope_tFB983697E28885CB10FFDB92D7EFD0615AEF3139 V_0;
	memset((&V_0), 0, sizeof(V_0));
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD V_1;
	memset((&V_1), 0, sizeof(V_1));
	RuntimeObject* V_2 = NULL;
	{
		// using (GetObserversPerfMarker.Auto())
		il2cpp_codegen_runtime_class_init_inline(MixedRealitySpatialAwarenessSystem_t8D8830FD790974C95CC7531CCA30B7247A13FD90_il2cpp_TypeInfo_var);
		ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD L_0 = ((MixedRealitySpatialAwarenessSystem_t8D8830FD790974C95CC7531CCA30B7247A13FD90_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealitySpatialAwarenessSystem_t8D8830FD790974C95CC7531CCA30B7247A13FD90_il2cpp_TypeInfo_var))->___GetObserversPerfMarker_28;
		V_1 = L_0;
		AutoScope_tFB983697E28885CB10FFDB92D7EFD0615AEF3139 L_1;
		L_1 = ProfilerMarker_Auto_m133FA724EB95D16187B37D2C8A501D7E989B1F8D_inline((&V_1), NULL);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_001c:
			{// begin finally (depth: 1)
				AutoScope_Dispose_mED763F3F51261EF8FB79DB32CD06E0A3F6C40481_inline((&V_0), NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			// return GetDataProviders() as IReadOnlyList<IMixedRealitySpatialAwarenessObserver>;
			RuntimeObject* L_2;
			L_2 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(53 /* System.Collections.Generic.IReadOnlyList`1<Microsoft.MixedReality.Toolkit.IMixedRealityDataProvider> Microsoft.MixedReality.Toolkit.BaseDataProviderAccessCoreSystem::GetDataProviders() */, __this);
			V_2 = ((RuntimeObject*)IsInst((RuntimeObject*)L_2, IReadOnlyList_1_t2B96B7FE2C44634D70F69C777077D230700AD798_il2cpp_TypeInfo_var));
			goto IL_002a;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_002a:
	{
		// }
		RuntimeObject* L_3 = V_2;
		return L_3;
	}
}
// Microsoft.MixedReality.Toolkit.SpatialAwareness.IMixedRealitySpatialAwarenessObserver Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessSystem::GetObserver(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MixedRealitySpatialAwarenessSystem_GetObserver_mAE376297629127182D566220D73DA4C428CE53E8 (MixedRealitySpatialAwarenessSystem_t8D8830FD790974C95CC7531CCA30B7247A13FD90* __this, String_t* ___name0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealitySpatialAwarenessObserver_t6897374ED60E2BA1C5A4ECAF099C486EF526FF15_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MixedRealitySpatialAwarenessSystem_t8D8830FD790974C95CC7531CCA30B7247A13FD90_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	AutoScope_tFB983697E28885CB10FFDB92D7EFD0615AEF3139 V_0;
	memset((&V_0), 0, sizeof(V_0));
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD V_1;
	memset((&V_1), 0, sizeof(V_1));
	RuntimeObject* V_2 = NULL;
	{
		// using (GetObserverPerfMarker.Auto())
		il2cpp_codegen_runtime_class_init_inline(MixedRealitySpatialAwarenessSystem_t8D8830FD790974C95CC7531CCA30B7247A13FD90_il2cpp_TypeInfo_var);
		ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD L_0 = ((MixedRealitySpatialAwarenessSystem_t8D8830FD790974C95CC7531CCA30B7247A13FD90_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealitySpatialAwarenessSystem_t8D8830FD790974C95CC7531CCA30B7247A13FD90_il2cpp_TypeInfo_var))->___GetObserverPerfMarker_30;
		V_1 = L_0;
		AutoScope_tFB983697E28885CB10FFDB92D7EFD0615AEF3139 L_1;
		L_1 = ProfilerMarker_Auto_m133FA724EB95D16187B37D2C8A501D7E989B1F8D_inline((&V_1), NULL);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_001d:
			{// begin finally (depth: 1)
				AutoScope_Dispose_mED763F3F51261EF8FB79DB32CD06E0A3F6C40481_inline((&V_0), NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			// return GetDataProvider(name) as IMixedRealitySpatialAwarenessObserver;
			String_t* L_2 = ___name0;
			RuntimeObject* L_3;
			L_3 = VirtualFuncInvoker1< RuntimeObject*, String_t* >::Invoke(55 /* Microsoft.MixedReality.Toolkit.IMixedRealityDataProvider Microsoft.MixedReality.Toolkit.BaseDataProviderAccessCoreSystem::GetDataProvider(System.String) */, __this, L_2);
			V_2 = ((RuntimeObject*)IsInst((RuntimeObject*)L_3, IMixedRealitySpatialAwarenessObserver_t6897374ED60E2BA1C5A4ECAF099C486EF526FF15_il2cpp_TypeInfo_var));
			goto IL_002b;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_002b:
	{
		// }
		RuntimeObject* L_4 = V_2;
		return L_4;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessSystem::ResumeObservers()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealitySpatialAwarenessSystem_ResumeObservers_mB3AD21E9B8211F38FBC5E6ABBFB166CE3C1EDE65 (MixedRealitySpatialAwarenessSystem_t8D8830FD790974C95CC7531CCA30B7247A13FD90* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_tFA9730B1781B4C120870B6E65BFF8A40BCE024A8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t59FDF44DF386D7519C234BF34F19D6732D13AB23_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealitySpatialAwarenessObserver_t6897374ED60E2BA1C5A4ECAF099C486EF526FF15_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MixedRealitySpatialAwarenessSystem_GetDataProviders_TisIMixedRealitySpatialAwarenessObserver_t6897374ED60E2BA1C5A4ECAF099C486EF526FF15_mDC7F0CB34731C65139476D15E4368831ADBFADBC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MixedRealitySpatialAwarenessSystem_t8D8830FD790974C95CC7531CCA30B7247A13FD90_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	AutoScope_tFB983697E28885CB10FFDB92D7EFD0615AEF3139 V_0;
	memset((&V_0), 0, sizeof(V_0));
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD V_1;
	memset((&V_1), 0, sizeof(V_1));
	RuntimeObject* V_2 = NULL;
	{
		// using (ResumeObserversPerfMarker.Auto())
		il2cpp_codegen_runtime_class_init_inline(MixedRealitySpatialAwarenessSystem_t8D8830FD790974C95CC7531CCA30B7247A13FD90_il2cpp_TypeInfo_var);
		ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD L_0 = ((MixedRealitySpatialAwarenessSystem_t8D8830FD790974C95CC7531CCA30B7247A13FD90_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealitySpatialAwarenessSystem_t8D8830FD790974C95CC7531CCA30B7247A13FD90_il2cpp_TypeInfo_var))->___ResumeObserversPerfMarker_34;
		V_1 = L_0;
		AutoScope_tFB983697E28885CB10FFDB92D7EFD0615AEF3139 L_1;
		L_1 = ProfilerMarker_Auto_m133FA724EB95D16187B37D2C8A501D7E989B1F8D_inline((&V_1), NULL);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_003b:
			{// begin finally (depth: 1)
				AutoScope_Dispose_mED763F3F51261EF8FB79DB32CD06E0A3F6C40481_inline((&V_0), NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				// foreach (var observer in GetDataProviders<IMixedRealitySpatialAwarenessObserver>())
				RuntimeObject* L_2;
				L_2 = GenericVirtualFuncInvoker0< RuntimeObject* >::Invoke(MixedRealitySpatialAwarenessSystem_GetDataProviders_TisIMixedRealitySpatialAwarenessObserver_t6897374ED60E2BA1C5A4ECAF099C486EF526FF15_mDC7F0CB34731C65139476D15E4368831ADBFADBC_RuntimeMethod_var, __this);
				NullCheck(L_2);
				RuntimeObject* L_3;
				L_3 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<Microsoft.MixedReality.Toolkit.SpatialAwareness.IMixedRealitySpatialAwarenessObserver>::GetEnumerator() */, IEnumerable_1_tFA9730B1781B4C120870B6E65BFF8A40BCE024A8_il2cpp_TypeInfo_var, L_2);
				V_2 = L_3;
			}
			{
				auto __finallyBlock = il2cpp::utils::Finally([&]
				{

FINALLY_0031_1:
					{// begin finally (depth: 2)
						{
							RuntimeObject* L_4 = V_2;
							if (!L_4)
							{
								goto IL_003a_1;
							}
						}
						{
							RuntimeObject* L_5 = V_2;
							NullCheck(L_5);
							InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_5);
						}

IL_003a_1:
						{
							return;
						}
					}// end finally (depth: 2)
				});
				try
				{// begin try (depth: 2)
					{
						goto IL_0027_2;
					}

IL_001c_2:
					{
						// foreach (var observer in GetDataProviders<IMixedRealitySpatialAwarenessObserver>())
						RuntimeObject* L_6 = V_2;
						NullCheck(L_6);
						RuntimeObject* L_7;
						L_7 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<Microsoft.MixedReality.Toolkit.SpatialAwareness.IMixedRealitySpatialAwarenessObserver>::get_Current() */, IEnumerator_1_t59FDF44DF386D7519C234BF34F19D6732D13AB23_il2cpp_TypeInfo_var, L_6);
						// observer.Resume();
						NullCheck(L_7);
						InterfaceActionInvoker0::Invoke(16 /* System.Void Microsoft.MixedReality.Toolkit.SpatialAwareness.IMixedRealitySpatialAwarenessObserver::Resume() */, IMixedRealitySpatialAwarenessObserver_t6897374ED60E2BA1C5A4ECAF099C486EF526FF15_il2cpp_TypeInfo_var, L_7);
					}

IL_0027_2:
					{
						// foreach (var observer in GetDataProviders<IMixedRealitySpatialAwarenessObserver>())
						RuntimeObject* L_8 = V_2;
						NullCheck(L_8);
						bool L_9;
						L_9 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_8);
						if (L_9)
						{
							goto IL_001c_2;
						}
					}
					{
						goto IL_0049;
					}
				}// end try (depth: 2)
				catch(Il2CppExceptionWrapper& e)
				{
					__finallyBlock.StoreException(e.ex);
				}
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0049:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessSystem::SuspendObservers()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealitySpatialAwarenessSystem_SuspendObservers_mD9958D09850D1BC3CFFB0CA01BA0D014625A1593 (MixedRealitySpatialAwarenessSystem_t8D8830FD790974C95CC7531CCA30B7247A13FD90* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_tFA9730B1781B4C120870B6E65BFF8A40BCE024A8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t59FDF44DF386D7519C234BF34F19D6732D13AB23_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealitySpatialAwarenessObserver_t6897374ED60E2BA1C5A4ECAF099C486EF526FF15_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MixedRealitySpatialAwarenessSystem_GetDataProviders_TisIMixedRealitySpatialAwarenessObserver_t6897374ED60E2BA1C5A4ECAF099C486EF526FF15_mDC7F0CB34731C65139476D15E4368831ADBFADBC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MixedRealitySpatialAwarenessSystem_t8D8830FD790974C95CC7531CCA30B7247A13FD90_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	AutoScope_tFB983697E28885CB10FFDB92D7EFD0615AEF3139 V_0;
	memset((&V_0), 0, sizeof(V_0));
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD V_1;
	memset((&V_1), 0, sizeof(V_1));
	RuntimeObject* V_2 = NULL;
	{
		// using (SuspendObserversPerfMarker.Auto())
		il2cpp_codegen_runtime_class_init_inline(MixedRealitySpatialAwarenessSystem_t8D8830FD790974C95CC7531CCA30B7247A13FD90_il2cpp_TypeInfo_var);
		ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD L_0 = ((MixedRealitySpatialAwarenessSystem_t8D8830FD790974C95CC7531CCA30B7247A13FD90_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealitySpatialAwarenessSystem_t8D8830FD790974C95CC7531CCA30B7247A13FD90_il2cpp_TypeInfo_var))->___SuspendObserversPerfMarker_37;
		V_1 = L_0;
		AutoScope_tFB983697E28885CB10FFDB92D7EFD0615AEF3139 L_1;
		L_1 = ProfilerMarker_Auto_m133FA724EB95D16187B37D2C8A501D7E989B1F8D_inline((&V_1), NULL);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_003b:
			{// begin finally (depth: 1)
				AutoScope_Dispose_mED763F3F51261EF8FB79DB32CD06E0A3F6C40481_inline((&V_0), NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				// foreach (var observer in GetDataProviders<IMixedRealitySpatialAwarenessObserver>())
				RuntimeObject* L_2;
				L_2 = GenericVirtualFuncInvoker0< RuntimeObject* >::Invoke(MixedRealitySpatialAwarenessSystem_GetDataProviders_TisIMixedRealitySpatialAwarenessObserver_t6897374ED60E2BA1C5A4ECAF099C486EF526FF15_mDC7F0CB34731C65139476D15E4368831ADBFADBC_RuntimeMethod_var, __this);
				NullCheck(L_2);
				RuntimeObject* L_3;
				L_3 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<Microsoft.MixedReality.Toolkit.SpatialAwareness.IMixedRealitySpatialAwarenessObserver>::GetEnumerator() */, IEnumerable_1_tFA9730B1781B4C120870B6E65BFF8A40BCE024A8_il2cpp_TypeInfo_var, L_2);
				V_2 = L_3;
			}
			{
				auto __finallyBlock = il2cpp::utils::Finally([&]
				{

FINALLY_0031_1:
					{// begin finally (depth: 2)
						{
							RuntimeObject* L_4 = V_2;
							if (!L_4)
							{
								goto IL_003a_1;
							}
						}
						{
							RuntimeObject* L_5 = V_2;
							NullCheck(L_5);
							InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_5);
						}

IL_003a_1:
						{
							return;
						}
					}// end finally (depth: 2)
				});
				try
				{// begin try (depth: 2)
					{
						goto IL_0027_2;
					}

IL_001c_2:
					{
						// foreach (var observer in GetDataProviders<IMixedRealitySpatialAwarenessObserver>())
						RuntimeObject* L_6 = V_2;
						NullCheck(L_6);
						RuntimeObject* L_7;
						L_7 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<Microsoft.MixedReality.Toolkit.SpatialAwareness.IMixedRealitySpatialAwarenessObserver>::get_Current() */, IEnumerator_1_t59FDF44DF386D7519C234BF34F19D6732D13AB23_il2cpp_TypeInfo_var, L_6);
						// observer.Suspend();
						NullCheck(L_7);
						InterfaceActionInvoker0::Invoke(17 /* System.Void Microsoft.MixedReality.Toolkit.SpatialAwareness.IMixedRealitySpatialAwarenessObserver::Suspend() */, IMixedRealitySpatialAwarenessObserver_t6897374ED60E2BA1C5A4ECAF099C486EF526FF15_il2cpp_TypeInfo_var, L_7);
					}

IL_0027_2:
					{
						// foreach (var observer in GetDataProviders<IMixedRealitySpatialAwarenessObserver>())
						RuntimeObject* L_8 = V_2;
						NullCheck(L_8);
						bool L_9;
						L_9 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_8);
						if (L_9)
						{
							goto IL_001c_2;
						}
					}
					{
						goto IL_0049;
					}
				}// end try (depth: 2)
				catch(Il2CppExceptionWrapper& e)
				{
					__finallyBlock.StoreException(e.ex);
				}
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0049:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessSystem::ClearObservations()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealitySpatialAwarenessSystem_ClearObservations_m02B0F31F49F34E05795B81259DEB9F6E785ED2A9 (MixedRealitySpatialAwarenessSystem_t8D8830FD790974C95CC7531CCA30B7247A13FD90* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_tFA9730B1781B4C120870B6E65BFF8A40BCE024A8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t59FDF44DF386D7519C234BF34F19D6732D13AB23_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealitySpatialAwarenessObserver_t6897374ED60E2BA1C5A4ECAF099C486EF526FF15_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MixedRealitySpatialAwarenessSystem_GetDataProviders_TisIMixedRealitySpatialAwarenessObserver_t6897374ED60E2BA1C5A4ECAF099C486EF526FF15_mDC7F0CB34731C65139476D15E4368831ADBFADBC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MixedRealitySpatialAwarenessSystem_t8D8830FD790974C95CC7531CCA30B7247A13FD90_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	AutoScope_tFB983697E28885CB10FFDB92D7EFD0615AEF3139 V_0;
	memset((&V_0), 0, sizeof(V_0));
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD V_1;
	memset((&V_1), 0, sizeof(V_1));
	RuntimeObject* V_2 = NULL;
	{
		// using (ClearObservationsPerfMarker.Auto())
		il2cpp_codegen_runtime_class_init_inline(MixedRealitySpatialAwarenessSystem_t8D8830FD790974C95CC7531CCA30B7247A13FD90_il2cpp_TypeInfo_var);
		ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD L_0 = ((MixedRealitySpatialAwarenessSystem_t8D8830FD790974C95CC7531CCA30B7247A13FD90_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealitySpatialAwarenessSystem_t8D8830FD790974C95CC7531CCA30B7247A13FD90_il2cpp_TypeInfo_var))->___ClearObservationsPerfMarker_40;
		V_1 = L_0;
		AutoScope_tFB983697E28885CB10FFDB92D7EFD0615AEF3139 L_1;
		L_1 = ProfilerMarker_Auto_m133FA724EB95D16187B37D2C8A501D7E989B1F8D_inline((&V_1), NULL);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_003b:
			{// begin finally (depth: 1)
				AutoScope_Dispose_mED763F3F51261EF8FB79DB32CD06E0A3F6C40481_inline((&V_0), NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				// foreach (var observer in GetDataProviders<IMixedRealitySpatialAwarenessObserver>())
				RuntimeObject* L_2;
				L_2 = GenericVirtualFuncInvoker0< RuntimeObject* >::Invoke(MixedRealitySpatialAwarenessSystem_GetDataProviders_TisIMixedRealitySpatialAwarenessObserver_t6897374ED60E2BA1C5A4ECAF099C486EF526FF15_mDC7F0CB34731C65139476D15E4368831ADBFADBC_RuntimeMethod_var, __this);
				NullCheck(L_2);
				RuntimeObject* L_3;
				L_3 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<Microsoft.MixedReality.Toolkit.SpatialAwareness.IMixedRealitySpatialAwarenessObserver>::GetEnumerator() */, IEnumerable_1_tFA9730B1781B4C120870B6E65BFF8A40BCE024A8_il2cpp_TypeInfo_var, L_2);
				V_2 = L_3;
			}
			{
				auto __finallyBlock = il2cpp::utils::Finally([&]
				{

FINALLY_0031_1:
					{// begin finally (depth: 2)
						{
							RuntimeObject* L_4 = V_2;
							if (!L_4)
							{
								goto IL_003a_1;
							}
						}
						{
							RuntimeObject* L_5 = V_2;
							NullCheck(L_5);
							InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_5);
						}

IL_003a_1:
						{
							return;
						}
					}// end finally (depth: 2)
				});
				try
				{// begin try (depth: 2)
					{
						goto IL_0027_2;
					}

IL_001c_2:
					{
						// foreach (var observer in GetDataProviders<IMixedRealitySpatialAwarenessObserver>())
						RuntimeObject* L_6 = V_2;
						NullCheck(L_6);
						RuntimeObject* L_7;
						L_7 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<Microsoft.MixedReality.Toolkit.SpatialAwareness.IMixedRealitySpatialAwarenessObserver>::get_Current() */, IEnumerator_1_t59FDF44DF386D7519C234BF34F19D6732D13AB23_il2cpp_TypeInfo_var, L_6);
						// observer.ClearObservations();
						NullCheck(L_7);
						InterfaceActionInvoker0::Invoke(18 /* System.Void Microsoft.MixedReality.Toolkit.SpatialAwareness.IMixedRealitySpatialAwarenessObserver::ClearObservations() */, IMixedRealitySpatialAwarenessObserver_t6897374ED60E2BA1C5A4ECAF099C486EF526FF15_il2cpp_TypeInfo_var, L_7);
					}

IL_0027_2:
					{
						// foreach (var observer in GetDataProviders<IMixedRealitySpatialAwarenessObserver>())
						RuntimeObject* L_8 = V_2;
						NullCheck(L_8);
						bool L_9;
						L_9 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_8);
						if (L_9)
						{
							goto IL_001c_2;
						}
					}
					{
						goto IL_0049;
					}
				}// end try (depth: 2)
				catch(Il2CppExceptionWrapper& e)
				{
					__finallyBlock.StoreException(e.ex);
				}
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0049:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessSystem::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealitySpatialAwarenessSystem__cctor_m168FC78A7D31D0D84C3DC4782E0D2AA990D44FA4 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MixedRealitySpatialAwarenessSystem_t8D8830FD790974C95CC7531CCA30B7247A13FD90_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0755F3DCD1C7D7F8C7F146B5C1598C86897222FA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1493973E273A553C92B106E28BD722E4E3A0AD98);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3AF268028A7C8D24E1A3278EC06A941AF3AB7C83);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral474447FAD0D27BF6A99C1C7093B70018F15EE835);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral56EB1B275FCFAC7E81FE874CCF19B184937C1493);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5C25A67358FA149F467647A046B5549855D72011);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral72F7A6E2A6DE3E5DE76E40BC176AD33FCE86E0A7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral80B8FC02531D63146A2F2DE67A3DC123891215FC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral91B3ABEA5982C1F945523544B3BA94100AE5F5DB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB612C75ADB2AE97EA4EA097D17EA7667AA2E78A8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBEF51D8BFDF5409F7D7A407464E210AB7AF45304);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC4149992C36FE958949693FAE84EE89309D872FA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC51718E69592BF754ED468BA0E33592D41CC0711);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD7A0E2B84A2188BA28341150550C337C542E8671);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static readonly ProfilerMarker GetObserversPerfMarker = new ProfilerMarker("[MRTK] MixedRealitySpatialAwarenessSystem.GetObservers");
		ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD L_0;
		memset((&L_0), 0, sizeof(L_0));
		ProfilerMarker__ctor_mDD68B0A8B71E0301F592AF8891560150E55699C8_inline((&L_0), _stringLiteralC51718E69592BF754ED468BA0E33592D41CC0711, /*hidden argument*/NULL);
		((MixedRealitySpatialAwarenessSystem_t8D8830FD790974C95CC7531CCA30B7247A13FD90_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealitySpatialAwarenessSystem_t8D8830FD790974C95CC7531CCA30B7247A13FD90_il2cpp_TypeInfo_var))->___GetObserversPerfMarker_28 = L_0;
		// private static readonly ProfilerMarker GetObserversTPerfMarker = new ProfilerMarker("[MRTK] MixedRealitySpatialAwarenessSystem.GetObservers<T>");
		ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD L_1;
		memset((&L_1), 0, sizeof(L_1));
		ProfilerMarker__ctor_mDD68B0A8B71E0301F592AF8891560150E55699C8_inline((&L_1), _stringLiteral474447FAD0D27BF6A99C1C7093B70018F15EE835, /*hidden argument*/NULL);
		((MixedRealitySpatialAwarenessSystem_t8D8830FD790974C95CC7531CCA30B7247A13FD90_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealitySpatialAwarenessSystem_t8D8830FD790974C95CC7531CCA30B7247A13FD90_il2cpp_TypeInfo_var))->___GetObserversTPerfMarker_29 = L_1;
		// private static readonly ProfilerMarker GetObserverPerfMarker = new ProfilerMarker("[MRTK] MixedRealitySpatialAwarenessSystem.GetObserver");
		ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD L_2;
		memset((&L_2), 0, sizeof(L_2));
		ProfilerMarker__ctor_mDD68B0A8B71E0301F592AF8891560150E55699C8_inline((&L_2), _stringLiteral0755F3DCD1C7D7F8C7F146B5C1598C86897222FA, /*hidden argument*/NULL);
		((MixedRealitySpatialAwarenessSystem_t8D8830FD790974C95CC7531CCA30B7247A13FD90_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealitySpatialAwarenessSystem_t8D8830FD790974C95CC7531CCA30B7247A13FD90_il2cpp_TypeInfo_var))->___GetObserverPerfMarker_30 = L_2;
		// private static readonly ProfilerMarker GetObserverTPerfMarker = new ProfilerMarker("[MRTK] MixedRealitySpatialAwarenessSystem.GetObserver<T>");
		ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD L_3;
		memset((&L_3), 0, sizeof(L_3));
		ProfilerMarker__ctor_mDD68B0A8B71E0301F592AF8891560150E55699C8_inline((&L_3), _stringLiteral1493973E273A553C92B106E28BD722E4E3A0AD98, /*hidden argument*/NULL);
		((MixedRealitySpatialAwarenessSystem_t8D8830FD790974C95CC7531CCA30B7247A13FD90_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealitySpatialAwarenessSystem_t8D8830FD790974C95CC7531CCA30B7247A13FD90_il2cpp_TypeInfo_var))->___GetObserverTPerfMarker_31 = L_3;
		// private static readonly ProfilerMarker GetDataProvidersPerfMarker = new ProfilerMarker("[MRTK] MixedRealitySpatialAwarenessSystem.GetDataProviders");
		ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD L_4;
		memset((&L_4), 0, sizeof(L_4));
		ProfilerMarker__ctor_mDD68B0A8B71E0301F592AF8891560150E55699C8_inline((&L_4), _stringLiteralD7A0E2B84A2188BA28341150550C337C542E8671, /*hidden argument*/NULL);
		((MixedRealitySpatialAwarenessSystem_t8D8830FD790974C95CC7531CCA30B7247A13FD90_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealitySpatialAwarenessSystem_t8D8830FD790974C95CC7531CCA30B7247A13FD90_il2cpp_TypeInfo_var))->___GetDataProvidersPerfMarker_32 = L_4;
		// private static readonly ProfilerMarker GetDataProviderPerfMarker = new ProfilerMarker("[MRTK] MixedRealitySpatialAwarenessSystem.GetDataProvider");
		ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD L_5;
		memset((&L_5), 0, sizeof(L_5));
		ProfilerMarker__ctor_mDD68B0A8B71E0301F592AF8891560150E55699C8_inline((&L_5), _stringLiteral3AF268028A7C8D24E1A3278EC06A941AF3AB7C83, /*hidden argument*/NULL);
		((MixedRealitySpatialAwarenessSystem_t8D8830FD790974C95CC7531CCA30B7247A13FD90_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealitySpatialAwarenessSystem_t8D8830FD790974C95CC7531CCA30B7247A13FD90_il2cpp_TypeInfo_var))->___GetDataProviderPerfMarker_33 = L_5;
		// private static readonly ProfilerMarker ResumeObserversPerfMarker = new ProfilerMarker("[MRTK] MixedRealitySpatialAwarenessSystem.ResumeObservers");
		ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD L_6;
		memset((&L_6), 0, sizeof(L_6));
		ProfilerMarker__ctor_mDD68B0A8B71E0301F592AF8891560150E55699C8_inline((&L_6), _stringLiteral5C25A67358FA149F467647A046B5549855D72011, /*hidden argument*/NULL);
		((MixedRealitySpatialAwarenessSystem_t8D8830FD790974C95CC7531CCA30B7247A13FD90_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealitySpatialAwarenessSystem_t8D8830FD790974C95CC7531CCA30B7247A13FD90_il2cpp_TypeInfo_var))->___ResumeObserversPerfMarker_34 = L_6;
		// private static readonly ProfilerMarker ResumeObserversTPerfMarker = new ProfilerMarker("[MRTK] MixedRealitySpatialAwarenessSystem.ResumeObservers<T>");
		ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD L_7;
		memset((&L_7), 0, sizeof(L_7));
		ProfilerMarker__ctor_mDD68B0A8B71E0301F592AF8891560150E55699C8_inline((&L_7), _stringLiteralC4149992C36FE958949693FAE84EE89309D872FA, /*hidden argument*/NULL);
		((MixedRealitySpatialAwarenessSystem_t8D8830FD790974C95CC7531CCA30B7247A13FD90_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealitySpatialAwarenessSystem_t8D8830FD790974C95CC7531CCA30B7247A13FD90_il2cpp_TypeInfo_var))->___ResumeObserversTPerfMarker_35 = L_7;
		// private static readonly ProfilerMarker ResumeObserverPerfMarker = new ProfilerMarker("[MRTK] MixedRealitySpatialAwarenessSystem.ResumeObserver");
		ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD L_8;
		memset((&L_8), 0, sizeof(L_8));
		ProfilerMarker__ctor_mDD68B0A8B71E0301F592AF8891560150E55699C8_inline((&L_8), _stringLiteral72F7A6E2A6DE3E5DE76E40BC176AD33FCE86E0A7, /*hidden argument*/NULL);
		((MixedRealitySpatialAwarenessSystem_t8D8830FD790974C95CC7531CCA30B7247A13FD90_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealitySpatialAwarenessSystem_t8D8830FD790974C95CC7531CCA30B7247A13FD90_il2cpp_TypeInfo_var))->___ResumeObserverPerfMarker_36 = L_8;
		// private static readonly ProfilerMarker SuspendObserversPerfMarker = new ProfilerMarker("[MRTK] MixedRealitySpatialAwarenessSystem.SuspendObservers");
		ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD L_9;
		memset((&L_9), 0, sizeof(L_9));
		ProfilerMarker__ctor_mDD68B0A8B71E0301F592AF8891560150E55699C8_inline((&L_9), _stringLiteralBEF51D8BFDF5409F7D7A407464E210AB7AF45304, /*hidden argument*/NULL);
		((MixedRealitySpatialAwarenessSystem_t8D8830FD790974C95CC7531CCA30B7247A13FD90_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealitySpatialAwarenessSystem_t8D8830FD790974C95CC7531CCA30B7247A13FD90_il2cpp_TypeInfo_var))->___SuspendObserversPerfMarker_37 = L_9;
		// private static readonly ProfilerMarker SuspendObserversTPerfMarker = new ProfilerMarker("[MRTK] MixedRealitySpatialAwarenessSystem.SuspendObservers<T>");
		ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD L_10;
		memset((&L_10), 0, sizeof(L_10));
		ProfilerMarker__ctor_mDD68B0A8B71E0301F592AF8891560150E55699C8_inline((&L_10), _stringLiteral91B3ABEA5982C1F945523544B3BA94100AE5F5DB, /*hidden argument*/NULL);
		((MixedRealitySpatialAwarenessSystem_t8D8830FD790974C95CC7531CCA30B7247A13FD90_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealitySpatialAwarenessSystem_t8D8830FD790974C95CC7531CCA30B7247A13FD90_il2cpp_TypeInfo_var))->___SuspendObserversTPerfMarker_38 = L_10;
		// private static readonly ProfilerMarker SuspendObserverPerfMarker = new ProfilerMarker("[MRTK] MixedRealitySpatialAwarenessSystem.SuspendObserver");
		ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD L_11;
		memset((&L_11), 0, sizeof(L_11));
		ProfilerMarker__ctor_mDD68B0A8B71E0301F592AF8891560150E55699C8_inline((&L_11), _stringLiteral80B8FC02531D63146A2F2DE67A3DC123891215FC, /*hidden argument*/NULL);
		((MixedRealitySpatialAwarenessSystem_t8D8830FD790974C95CC7531CCA30B7247A13FD90_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealitySpatialAwarenessSystem_t8D8830FD790974C95CC7531CCA30B7247A13FD90_il2cpp_TypeInfo_var))->___SuspendObserverPerfMarker_39 = L_11;
		// private static readonly ProfilerMarker ClearObservationsPerfMarker = new ProfilerMarker("[MRTK] MixedRealitySpatialAwarenessSystem.ClearObservations");
		ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD L_12;
		memset((&L_12), 0, sizeof(L_12));
		ProfilerMarker__ctor_mDD68B0A8B71E0301F592AF8891560150E55699C8_inline((&L_12), _stringLiteral56EB1B275FCFAC7E81FE874CCF19B184937C1493, /*hidden argument*/NULL);
		((MixedRealitySpatialAwarenessSystem_t8D8830FD790974C95CC7531CCA30B7247A13FD90_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealitySpatialAwarenessSystem_t8D8830FD790974C95CC7531CCA30B7247A13FD90_il2cpp_TypeInfo_var))->___ClearObservationsPerfMarker_40 = L_12;
		// private static readonly ProfilerMarker ClearObservationsTPerfMarker = new ProfilerMarker("[MRTK] MixedRealitySpatialAwarenessSystem.ClearObservations<T>");
		ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD L_13;
		memset((&L_13), 0, sizeof(L_13));
		ProfilerMarker__ctor_mDD68B0A8B71E0301F592AF8891560150E55699C8_inline((&L_13), _stringLiteralB612C75ADB2AE97EA4EA097D17EA7667AA2E78A8, /*hidden argument*/NULL);
		((MixedRealitySpatialAwarenessSystem_t8D8830FD790974C95CC7531CCA30B7247A13FD90_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealitySpatialAwarenessSystem_t8D8830FD790974C95CC7531CCA30B7247A13FD90_il2cpp_TypeInfo_var))->___ClearObservationsTPerfMarker_41 = L_13;
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR MixedRealitySpatialObserverConfigurationU5BU5D_t175B52CA1DE4DF781F77F7FAF9566C4FC8A83884* MixedRealitySpatialAwarenessSystemProfile_get_ObserverConfigurations_m32546F367437EE238C8C9FFF9DF4F104DCD2CA9A_inline (MixedRealitySpatialAwarenessSystemProfile_t84A6651AAFB01D051CB46EFFB648247FA23035D7* __this, const RuntimeMethod* method) 
{
	{
		// get { return observerConfigurations; }
		MixedRealitySpatialObserverConfigurationU5BU5D_t175B52CA1DE4DF781F77F7FAF9566C4FC8A83884* L_0 = __this->___observerConfigurations_5;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* MixedRealitySpatialObserverConfiguration_get_ComponentName_m9E326C6BAA4CEE359983C061C289615CD3A5BA0B_inline (MixedRealitySpatialObserverConfiguration_tD6661687B3B62C35D39F64D13472802F6624DB75* __this, const RuntimeMethod* method) 
{
	{
		// public string ComponentName => componentName;
		String_t* L_0 = __this->___componentName_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint32_t MixedRealitySpatialObserverConfiguration_get_Priority_m51C30C468B10524C42C3598C2E0AD29BCA65DD88_inline (MixedRealitySpatialObserverConfiguration_tD6661687B3B62C35D39F64D13472802F6624DB75* __this, const RuntimeMethod* method) 
{
	{
		// public uint Priority => priority;
		uint32_t L_0 = __this->___priority_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR BaseSpatialAwarenessObserverProfile_t7A50E95DBFF01391175C2D418C1ABB3C21F43225* MixedRealitySpatialObserverConfiguration_get_ObserverProfile_m04BB069102FDBB62D75BFF4ADC85EDFEA9509466_inline (MixedRealitySpatialObserverConfiguration_tD6661687B3B62C35D39F64D13472802F6624DB75* __this, const RuntimeMethod* method) 
{
	{
		// public BaseSpatialAwarenessObserverProfile ObserverProfile => observerProfile;
		BaseSpatialAwarenessObserverProfile_t7A50E95DBFF01391175C2D418C1ABB3C21F43225* L_0 = __this->___observerProfile_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR SystemType_t9C9A555B60497C18297AD1082247C2960A7B666E* MixedRealitySpatialObserverConfiguration_get_ComponentType_m7D5B768E121CE32D1B26CAFB315E734A59CBC14C_inline (MixedRealitySpatialObserverConfiguration_tD6661687B3B62C35D39F64D13472802F6624DB75* __this, const RuntimeMethod* method) 
{
	{
		// public SystemType ComponentType => componentType;
		SystemType_t9C9A555B60497C18297AD1082247C2960A7B666E* L_0 = __this->___componentType_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Type_t* SystemType_get_Type_mBE668A3226CE7032C46D516321F82906389782DA_inline (SystemType_t9C9A555B60497C18297AD1082247C2960A7B666E* __this, const RuntimeMethod* method) 
{
	{
		// get => type;
		Type_t* L_0 = __this->___type_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t MixedRealitySpatialObserverConfiguration_get_RuntimePlatform_m32E933F874244B5C0C4C951ABCAB9A90E8174338_inline (MixedRealitySpatialObserverConfiguration_tD6661687B3B62C35D39F64D13472802F6624DB75* __this, const RuntimeMethod* method) 
{
	{
		// public SupportedPlatforms RuntimePlatform => runtimePlatform;
		int32_t L_0 = __this->___runtimePlatform_3;
		return L_0;
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
