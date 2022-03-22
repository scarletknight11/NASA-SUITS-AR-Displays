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
template <typename R, typename T1>
struct GenericVirtualFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
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
// System.Collections.Generic.List`1<System.Tuple`2<Microsoft.MixedReality.Toolkit.BaseEventSystem/Action,UnityEngine.GameObject>>
struct List_1_tADF7F1C5FADE0AE6D00BC928B20C4B63DDC8A3AD;
// System.Collections.Generic.List`1<System.Tuple`3<Microsoft.MixedReality.Toolkit.BaseEventSystem/Action,System.Type,UnityEngine.EventSystems.IEventSystemHandler>>
struct List_1_t51E625EDA46926814063BAC38407B110D9C48805;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B;
// System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.IMixedRealityDataProvider>
struct List_1_t750037577EF626FCB1112EA42C03AB4CCF7974E7;
// Microsoft.MixedReality.Toolkit.CameraSystem.MixedRealityCameraSettingsConfiguration[]
struct MixedRealityCameraSettingsConfigurationU5BU5D_tCCEB13B637734D1B0FB80F1AF1ABDE7565D79AF3;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
// Microsoft.MixedReality.Toolkit.CameraSystem.BaseCameraSettingsProfile
struct BaseCameraSettingsProfile_tDB8373232611B34628752DF4D284B938CFE32799;
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
// System.Reflection.Binder
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// Microsoft.MixedReality.Toolkit.CameraSystem.IMixedRealityCameraSettingsProvider
struct IMixedRealityCameraSettingsProvider_t7D8FCEABCED902255AAC48C38998A8280CDE21C3;
// Microsoft.MixedReality.Toolkit.IMixedRealityServiceRegistrar
struct IMixedRealityServiceRegistrar_t4B893B7CDAAC977211D826D02C8522ECA327D715;
// System.Reflection.MemberFilter
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
// Microsoft.MixedReality.Toolkit.MixedRealityCameraProfile
struct MixedRealityCameraProfile_t3EFE29D7BC4D250543D92ABF6EFFF831E219F35F;
// Microsoft.MixedReality.Toolkit.CameraSystem.MixedRealityCameraSystem
struct MixedRealityCameraSystem_t1280EF5F551F65DA92CEACC237C34D4CF208E09A;
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
// UnityEngine.Camera/CameraCallback
struct CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD;

IL2CPP_EXTERN_C RuntimeClass* BaseDataProviderAccessCoreSystem_t30EC4F1C1A10F7586D0EE15069292831A2E3BCF2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_1_t3B529C65E14D432D75871E1E6FBC50F662912483_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_t7BF115EC64DF86D65B60CB3D0AA43AC6D4502357_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IMixedRealityCameraSettingsProvider_t7D8FCEABCED902255AAC48C38998A8280CDE21C3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IMixedRealityService_tF14A48320F9A1B2C7A26406624A0620B1653382C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IReadOnlyCollection_1_tEF5121A2F36021671B5FFB054964B9DF0E3FCC1D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IReadOnlyList_1_t4A1EAA4645FA55D5923A70619BD91033DBE5A9FB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MixedRealityCameraProfile_t3EFE29D7BC4D250543D92ABF6EFFF831E219F35F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MixedRealityCameraSystem_t1280EF5F551F65DA92CEACC237C34D4CF208E09A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral196C8C01929CBAF19C0D357B9C59A48315353628;
IL2CPP_EXTERN_C String_t* _stringLiteral477D591F1FC256A3C3E8E9B6CB4C57DD7113F1B9;
IL2CPP_EXTERN_C String_t* _stringLiteral4FF56F0DB79ED48F92A89FC9BCCE0794BDA6075F;
IL2CPP_EXTERN_C String_t* _stringLiteral5DE6C8E7701D8D9660152721AEC14FBFED3B0408;
IL2CPP_EXTERN_C String_t* _stringLiteral615E7AE91B5D8E95D171FD00609751001072553C;
IL2CPP_EXTERN_C String_t* _stringLiteral7EFBD08779CD30AA4BB155A03A7A8843252129C1;
IL2CPP_EXTERN_C String_t* _stringLiteralA4093EA4CA3DFEE691E40B5C6CB894E117A3C3B9;
IL2CPP_EXTERN_C const RuntimeMethod* BaseDataProviderAccessCoreSystem_GetDataProvider_TisIMixedRealityCameraSettingsProvider_t7D8FCEABCED902255AAC48C38998A8280CDE21C3_m244FF50BCE1B4ED8D4B6FBEC912466BD02F04774_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BaseDataProviderAccessCoreSystem_GetDataProviders_TisIMixedRealityCameraSettingsProvider_t7D8FCEABCED902255AAC48C38998A8280CDE21C3_mB208EF24BBE323B11031300949883DEFA420421B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BaseDataProviderAccessCoreSystem_RegisterDataProvider_TisIMixedRealityCameraSettingsProvider_t7D8FCEABCED902255AAC48C38998A8280CDE21C3_m40DC3DB1F51C7CEF88114FEA8715464DE0359024_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BaseDataProviderAccessCoreSystem_UnregisterDataProvider_TisIMixedRealityCameraSettingsProvider_t7D8FCEABCED902255AAC48C38998A8280CDE21C3_m58BB7E554B47F2FDC2C5A74FDE5819BD8CD479E4_RuntimeMethod_var;

struct MixedRealityCameraSettingsConfigurationU5BU5D_tCCEB13B637734D1B0FB80F1AF1ABDE7565D79AF3;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tE686028B35B2A6D290FC71091A078BDF58825136 
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

// Microsoft.MixedReality.Toolkit.CameraSystem.MixedRealityCameraSettingsConfiguration
struct MixedRealityCameraSettingsConfiguration_t68A5F0E3D474AABCD1FCC3DB21C35D5FC76D29C8 
{
	// Microsoft.MixedReality.Toolkit.Utilities.SystemType Microsoft.MixedReality.Toolkit.CameraSystem.MixedRealityCameraSettingsConfiguration::componentType
	SystemType_t9C9A555B60497C18297AD1082247C2960A7B666E* ___componentType_0;
	// System.String Microsoft.MixedReality.Toolkit.CameraSystem.MixedRealityCameraSettingsConfiguration::componentName
	String_t* ___componentName_1;
	// System.UInt32 Microsoft.MixedReality.Toolkit.CameraSystem.MixedRealityCameraSettingsConfiguration::priority
	uint32_t ___priority_2;
	// Microsoft.MixedReality.Toolkit.Utilities.SupportedPlatforms Microsoft.MixedReality.Toolkit.CameraSystem.MixedRealityCameraSettingsConfiguration::runtimePlatform
	int32_t ___runtimePlatform_3;
	// Microsoft.MixedReality.Toolkit.CameraSystem.BaseCameraSettingsProfile Microsoft.MixedReality.Toolkit.CameraSystem.MixedRealityCameraSettingsConfiguration::settingsProfile
	BaseCameraSettingsProfile_tDB8373232611B34628752DF4D284B938CFE32799* ___settingsProfile_4;
};
// Native definition for P/Invoke marshalling of Microsoft.MixedReality.Toolkit.CameraSystem.MixedRealityCameraSettingsConfiguration
struct MixedRealityCameraSettingsConfiguration_t68A5F0E3D474AABCD1FCC3DB21C35D5FC76D29C8_marshaled_pinvoke
{
	SystemType_t9C9A555B60497C18297AD1082247C2960A7B666E* ___componentType_0;
	char* ___componentName_1;
	uint32_t ___priority_2;
	int32_t ___runtimePlatform_3;
	BaseCameraSettingsProfile_tDB8373232611B34628752DF4D284B938CFE32799* ___settingsProfile_4;
};
// Native definition for COM marshalling of Microsoft.MixedReality.Toolkit.CameraSystem.MixedRealityCameraSettingsConfiguration
struct MixedRealityCameraSettingsConfiguration_t68A5F0E3D474AABCD1FCC3DB21C35D5FC76D29C8_marshaled_com
{
	SystemType_t9C9A555B60497C18297AD1082247C2960A7B666E* ___componentType_0;
	Il2CppChar* ___componentName_1;
	uint32_t ___priority_2;
	int32_t ___runtimePlatform_3;
	BaseCameraSettingsProfile_tDB8373232611B34628752DF4D284B938CFE32799* ___settingsProfile_4;
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

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// Microsoft.MixedReality.Toolkit.CameraSystem.BaseCameraSettingsProfile
struct BaseCameraSettingsProfile_tDB8373232611B34628752DF4D284B938CFE32799  : public BaseMixedRealityProfile_tB4FDEF58FFD17796C0DB7241630B71CDF38FA1D4
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

// Microsoft.MixedReality.Toolkit.MixedRealityCameraProfile
struct MixedRealityCameraProfile_t3EFE29D7BC4D250543D92ABF6EFFF831E219F35F  : public BaseMixedRealityProfile_tB4FDEF58FFD17796C0DB7241630B71CDF38FA1D4
{
	// Microsoft.MixedReality.Toolkit.CameraSystem.MixedRealityCameraSettingsConfiguration[] Microsoft.MixedReality.Toolkit.MixedRealityCameraProfile::settingsConfigurations
	MixedRealityCameraSettingsConfigurationU5BU5D_tCCEB13B637734D1B0FB80F1AF1ABDE7565D79AF3* ___settingsConfigurations_5;
	// System.Single Microsoft.MixedReality.Toolkit.MixedRealityCameraProfile::nearClipPlaneOpaqueDisplay
	float ___nearClipPlaneOpaqueDisplay_6;
	// System.Single Microsoft.MixedReality.Toolkit.MixedRealityCameraProfile::farClipPlaneOpaqueDisplay
	float ___farClipPlaneOpaqueDisplay_7;
	// UnityEngine.CameraClearFlags Microsoft.MixedReality.Toolkit.MixedRealityCameraProfile::cameraClearFlagsOpaqueDisplay
	int32_t ___cameraClearFlagsOpaqueDisplay_8;
	// UnityEngine.Color Microsoft.MixedReality.Toolkit.MixedRealityCameraProfile::backgroundColorOpaqueDisplay
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___backgroundColorOpaqueDisplay_9;
	// System.Int32 Microsoft.MixedReality.Toolkit.MixedRealityCameraProfile::opaqueQualityLevel
	int32_t ___opaqueQualityLevel_10;
	// System.Single Microsoft.MixedReality.Toolkit.MixedRealityCameraProfile::nearClipPlaneTransparentDisplay
	float ___nearClipPlaneTransparentDisplay_11;
	// System.Single Microsoft.MixedReality.Toolkit.MixedRealityCameraProfile::farClipPlaneTransparentDisplay
	float ___farClipPlaneTransparentDisplay_12;
	// UnityEngine.CameraClearFlags Microsoft.MixedReality.Toolkit.MixedRealityCameraProfile::cameraClearFlagsTransparentDisplay
	int32_t ___cameraClearFlagsTransparentDisplay_13;
	// UnityEngine.Color Microsoft.MixedReality.Toolkit.MixedRealityCameraProfile::backgroundColorTransparentDisplay
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___backgroundColorTransparentDisplay_14;
	// System.Int32 Microsoft.MixedReality.Toolkit.MixedRealityCameraProfile::transparentQualityLevel
	int32_t ___transparentQualityLevel_15;
};

// Microsoft.MixedReality.Toolkit.CameraSystem.MixedRealityCameraSystem
struct MixedRealityCameraSystem_t1280EF5F551F65DA92CEACC237C34D4CF208E09A  : public BaseDataProviderAccessCoreSystem_t30EC4F1C1A10F7586D0EE15069292831A2E3BCF2
{
	// System.String Microsoft.MixedReality.Toolkit.CameraSystem.MixedRealityCameraSystem::<Name>k__BackingField
	String_t* ___U3CNameU3Ek__BackingField_24;
	// System.UInt32 Microsoft.MixedReality.Toolkit.CameraSystem.MixedRealityCameraSystem::<SourceId>k__BackingField
	uint32_t ___U3CSourceIdU3Ek__BackingField_25;
	// System.String Microsoft.MixedReality.Toolkit.CameraSystem.MixedRealityCameraSystem::<SourceName>k__BackingField
	String_t* ___U3CSourceNameU3Ek__BackingField_26;
	// Microsoft.MixedReality.Toolkit.CameraSystem.DisplayType Microsoft.MixedReality.Toolkit.CameraSystem.MixedRealityCameraSystem::currentDisplayType
	int32_t ___currentDisplayType_27;
	// System.Boolean Microsoft.MixedReality.Toolkit.CameraSystem.MixedRealityCameraSystem::cameraOpaqueLastFrame
	bool ___cameraOpaqueLastFrame_28;
	// System.Boolean Microsoft.MixedReality.Toolkit.CameraSystem.MixedRealityCameraSystem::useFallbackBehavior
	bool ___useFallbackBehavior_29;
};

struct MixedRealityCameraSystem_t1280EF5F551F65DA92CEACC237C34D4CF208E09A_StaticFields
{
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.CameraSystem.MixedRealityCameraSystem::UpdatePerfMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___UpdatePerfMarker_30;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.CameraSystem.MixedRealityCameraSystem::ApplySettingsForOpaquePerfMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___ApplySettingsForOpaquePerfMarker_31;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.CameraSystem.MixedRealityCameraSystem::ApplySettingsForTransparentPerfMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___ApplySettingsForTransparentPerfMarker_32;
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
// Microsoft.MixedReality.Toolkit.CameraSystem.MixedRealityCameraSettingsConfiguration[]
struct MixedRealityCameraSettingsConfigurationU5BU5D_tCCEB13B637734D1B0FB80F1AF1ABDE7565D79AF3  : public RuntimeArray
{
	ALIGN_FIELD (8) MixedRealityCameraSettingsConfiguration_t68A5F0E3D474AABCD1FCC3DB21C35D5FC76D29C8 m_Items[1];

	inline MixedRealityCameraSettingsConfiguration_t68A5F0E3D474AABCD1FCC3DB21C35D5FC76D29C8 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline MixedRealityCameraSettingsConfiguration_t68A5F0E3D474AABCD1FCC3DB21C35D5FC76D29C8* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, MixedRealityCameraSettingsConfiguration_t68A5F0E3D474AABCD1FCC3DB21C35D5FC76D29C8 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___componentType_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___componentName_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___settingsProfile_4), (void*)NULL);
		#endif
	}
	inline MixedRealityCameraSettingsConfiguration_t68A5F0E3D474AABCD1FCC3DB21C35D5FC76D29C8 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline MixedRealityCameraSettingsConfiguration_t68A5F0E3D474AABCD1FCC3DB21C35D5FC76D29C8* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, MixedRealityCameraSettingsConfiguration_t68A5F0E3D474AABCD1FCC3DB21C35D5FC76D29C8 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___componentType_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___componentName_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___settingsProfile_4), (void*)NULL);
		#endif
	}
};


// System.Boolean Microsoft.MixedReality.Toolkit.BaseDataProviderAccessCoreSystem::RegisterDataProvider<System.Object>(System.Type,System.String,Microsoft.MixedReality.Toolkit.Utilities.SupportedPlatforms,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BaseDataProviderAccessCoreSystem_RegisterDataProvider_TisRuntimeObject_m754B4E4F42C2591B24170375FC4DD38D68679DF6_gshared (BaseDataProviderAccessCoreSystem_t30EC4F1C1A10F7586D0EE15069292831A2E3BCF2* __this, Type_t* ___concreteType0, String_t* ___providerName1, int32_t ___supportedPlatforms2, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args3, const RuntimeMethod* method) ;
// System.Boolean Microsoft.MixedReality.Toolkit.BaseDataProviderAccessCoreSystem::UnregisterDataProvider<System.Object>(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BaseDataProviderAccessCoreSystem_UnregisterDataProvider_TisRuntimeObject_mD60FC0708D94C115D8B1A23D3B8E07843F95A4CC_gshared (BaseDataProviderAccessCoreSystem_t30EC4F1C1A10F7586D0EE15069292831A2E3BCF2* __this, RuntimeObject* ___dataProviderInstance0, const RuntimeMethod* method) ;

// System.Void Microsoft.MixedReality.Toolkit.CameraSystem.MixedRealityCameraSystem::.ctor(Microsoft.MixedReality.Toolkit.BaseMixedRealityProfile)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityCameraSystem__ctor_m35B83AB3E6090447BF9BEAC9BBCE2084EC190492 (MixedRealityCameraSystem_t1280EF5F551F65DA92CEACC237C34D4CF208E09A* __this, BaseMixedRealityProfile_tB4FDEF58FFD17796C0DB7241630B71CDF38FA1D4* ___profile0, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.BaseCoreSystem::set_Registrar(Microsoft.MixedReality.Toolkit.IMixedRealityServiceRegistrar)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BaseCoreSystem_set_Registrar_m5E2AD3BA5AD91A736E0A23357E3720E5D94665A8_inline (BaseCoreSystem_t9D02F9BBC05DAD6F987F647B666B37A062ACFAA6* __this, RuntimeObject* ___value0, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.BaseDataProviderAccessCoreSystem::.ctor(Microsoft.MixedReality.Toolkit.BaseMixedRealityProfile)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseDataProviderAccessCoreSystem__ctor_m5F92E54E84428722B0B2712DEDE1E9B019E33719 (BaseDataProviderAccessCoreSystem_t30EC4F1C1A10F7586D0EE15069292831A2E3BCF2* __this, BaseMixedRealityProfile_tB4FDEF58FFD17796C0DB7241630B71CDF38FA1D4* ___profile0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogWarning(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogWarning_mEF15C6B17CE4E1FA7E379CDB82CE40FCD89A3F28 (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.BaseService::Initialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseService_Initialize_m750DCABB0D54C519B59BADDB050699C41BBC4EFA (BaseService_tB7EC5C0F60DC5EE2DA122A608226D3887B6421D0* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// Microsoft.MixedReality.Toolkit.CameraSystem.MixedRealityCameraSettingsConfiguration[] Microsoft.MixedReality.Toolkit.MixedRealityCameraProfile::get_SettingsConfigurations()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR MixedRealityCameraSettingsConfigurationU5BU5D_tCCEB13B637734D1B0FB80F1AF1ABDE7565D79AF3* MixedRealityCameraProfile_get_SettingsConfigurations_m6098039F36CBC90E5BD4F303FAF22310801C6A61_inline (MixedRealityCameraProfile_t3EFE29D7BC4D250543D92ABF6EFFF831E219F35F* __this, const RuntimeMethod* method) ;
// Microsoft.MixedReality.Toolkit.Utilities.SystemType Microsoft.MixedReality.Toolkit.CameraSystem.MixedRealityCameraSettingsConfiguration::get_ComponentType()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR SystemType_t9C9A555B60497C18297AD1082247C2960A7B666E* MixedRealityCameraSettingsConfiguration_get_ComponentType_m0D8F9D8FEB2A2E432EDF68E7EBD7076E2E5B70D1_inline (MixedRealityCameraSettingsConfiguration_t68A5F0E3D474AABCD1FCC3DB21C35D5FC76D29C8* __this, const RuntimeMethod* method) ;
// System.Type Microsoft.MixedReality.Toolkit.Utilities.SystemType::get_Type()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Type_t* SystemType_get_Type_mBE668A3226CE7032C46D516321F82906389782DA_inline (SystemType_t9C9A555B60497C18297AD1082247C2960A7B666E* __this, const RuntimeMethod* method) ;
// System.Boolean System.Type::op_Equality(System.Type,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_op_Equality_mE6EDDDC900C50B222CF32BCD2AD027595F2D74B7 (Type_t* ___left0, Type_t* ___right1, const RuntimeMethod* method) ;
// System.String Microsoft.MixedReality.Toolkit.CameraSystem.MixedRealityCameraSettingsConfiguration::get_ComponentName()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* MixedRealityCameraSettingsConfiguration_get_ComponentName_mC3C4B7BCD27A4CA184A23E9F62C50245D793D410_inline (MixedRealityCameraSettingsConfiguration_t68A5F0E3D474AABCD1FCC3DB21C35D5FC76D29C8* __this, const RuntimeMethod* method) ;
// System.UInt32 Microsoft.MixedReality.Toolkit.CameraSystem.MixedRealityCameraSettingsConfiguration::get_Priority()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint32_t MixedRealityCameraSettingsConfiguration_get_Priority_m69882911EB7EEB9896413BF82A3FE3273E7CD1F0_inline (MixedRealityCameraSettingsConfiguration_t68A5F0E3D474AABCD1FCC3DB21C35D5FC76D29C8* __this, const RuntimeMethod* method) ;
// Microsoft.MixedReality.Toolkit.CameraSystem.BaseCameraSettingsProfile Microsoft.MixedReality.Toolkit.CameraSystem.MixedRealityCameraSettingsConfiguration::get_SettingsProfile()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR BaseCameraSettingsProfile_tDB8373232611B34628752DF4D284B938CFE32799* MixedRealityCameraSettingsConfiguration_get_SettingsProfile_m88E5208F65419DDF24A9C7DDC09127ED294835DC_inline (MixedRealityCameraSettingsConfiguration_t68A5F0E3D474AABCD1FCC3DB21C35D5FC76D29C8* __this, const RuntimeMethod* method) ;
// Microsoft.MixedReality.Toolkit.Utilities.SupportedPlatforms Microsoft.MixedReality.Toolkit.CameraSystem.MixedRealityCameraSettingsConfiguration::get_RuntimePlatform()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t MixedRealityCameraSettingsConfiguration_get_RuntimePlatform_mFB68BAD1D6A69AB6E2762BAC024CEDFD3B747E04_inline (MixedRealityCameraSettingsConfiguration_t68A5F0E3D474AABCD1FCC3DB21C35D5FC76D29C8* __this, const RuntimeMethod* method) ;
// System.Boolean Microsoft.MixedReality.Toolkit.BaseDataProviderAccessCoreSystem::RegisterDataProvider<Microsoft.MixedReality.Toolkit.CameraSystem.IMixedRealityCameraSettingsProvider>(System.Type,System.String,Microsoft.MixedReality.Toolkit.Utilities.SupportedPlatforms,System.Object[])
inline bool BaseDataProviderAccessCoreSystem_RegisterDataProvider_TisIMixedRealityCameraSettingsProvider_t7D8FCEABCED902255AAC48C38998A8280CDE21C3_m40DC3DB1F51C7CEF88114FEA8715464DE0359024 (BaseDataProviderAccessCoreSystem_t30EC4F1C1A10F7586D0EE15069292831A2E3BCF2* __this, Type_t* ___concreteType0, String_t* ___providerName1, int32_t ___supportedPlatforms2, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args3, const RuntimeMethod* method)
{
	return ((  bool (*) (BaseDataProviderAccessCoreSystem_t30EC4F1C1A10F7586D0EE15069292831A2E3BCF2*, Type_t*, String_t*, int32_t, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, const RuntimeMethod*))BaseDataProviderAccessCoreSystem_RegisterDataProvider_TisRuntimeObject_m754B4E4F42C2591B24170375FC4DD38D68679DF6_gshared)(__this, ___concreteType0, ___providerName1, ___supportedPlatforms2, ___args3, method);
}
// System.Boolean Microsoft.MixedReality.Toolkit.CameraSystem.MixedRealityCameraSystem::get_IsOpaque()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MixedRealityCameraSystem_get_IsOpaque_m9F214F00F520CEBEC6C7251007E8502D42C634A1 (MixedRealityCameraSystem_t1280EF5F551F65DA92CEACC237C34D4CF208E09A* __this, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.CameraSystem.MixedRealityCameraSystem::ApplySettingsForOpaqueDisplay()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityCameraSystem_ApplySettingsForOpaqueDisplay_mFA25518531E47F18D7586A2150FACA527CB780E8 (MixedRealityCameraSystem_t1280EF5F551F65DA92CEACC237C34D4CF208E09A* __this, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.CameraSystem.MixedRealityCameraSystem::ApplySettingsForTransparentDisplay()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityCameraSystem_ApplySettingsForTransparentDisplay_mBB11C5EB8159C29C5999E19831E7FEE61ABB6C06 (MixedRealityCameraSystem_t1280EF5F551F65DA92CEACC237C34D4CF208E09A* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline (const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.MixedRealityPlayspace::set_Position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityPlayspace_set_Position_mED5CCC1D026F8B408FEB0BB6B7E9CFA04B3151B8 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::get_identity()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_get_identity_mB9CAEEB21BC81352CBF32DB9664BFC06FA7EA27B_inline (const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.MixedRealityPlayspace::set_Rotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityPlayspace_set_Rotation_mAF52765F4364BD5DB07DA10B73EF2E8EF798AD2C (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___value0, const RuntimeMethod* method) ;
// UnityEngine.Camera Microsoft.MixedReality.Toolkit.Utilities.CameraCache::get_Main()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* CameraCache_get_Main_m631CABB7F5A697F4C1D76F7CB02D6791C0DDCB9E (const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Vector3::op_Inequality(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector3_op_Inequality_m6A7FB1C9E9DE194708997BFA24C6E238D92D908E_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___lhs0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rhs1, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m8C122B26BC5AA10E2550AECA16E57DAE10F07E30 (String_t* ___format0, RuntimeObject* ___arg01, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Transform::get_rotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Quaternion::op_Inequality(UnityEngine.Quaternion,UnityEngine.Quaternion)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Quaternion_op_Inequality_mC1922F160B14F6F404E46FFCC10B282D913BE354_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___lhs0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rhs1, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.BaseDataProviderAccessCoreSystem::Enable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseDataProviderAccessCoreSystem_Enable_m0164D441C4CCECC6D4AFEAF9771CC3CB2D7B2854 (BaseDataProviderAccessCoreSystem_t30EC4F1C1A10F7586D0EE15069292831A2E3BCF2* __this, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.BaseService::Disable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseService_Disable_m75AA61136BE79E0C8EA4B058D1506882A56683C4 (BaseService_tB7EC5C0F60DC5EE2DA122A608226D3887B6421D0* __this, const RuntimeMethod* method) ;
// System.Boolean Microsoft.MixedReality.Toolkit.BaseDataProviderAccessCoreSystem::UnregisterDataProvider<Microsoft.MixedReality.Toolkit.CameraSystem.IMixedRealityCameraSettingsProvider>(T)
inline bool BaseDataProviderAccessCoreSystem_UnregisterDataProvider_TisIMixedRealityCameraSettingsProvider_t7D8FCEABCED902255AAC48C38998A8280CDE21C3_m58BB7E554B47F2FDC2C5A74FDE5819BD8CD479E4 (BaseDataProviderAccessCoreSystem_t30EC4F1C1A10F7586D0EE15069292831A2E3BCF2* __this, RuntimeObject* ___dataProviderInstance0, const RuntimeMethod* method)
{
	return ((  bool (*) (BaseDataProviderAccessCoreSystem_t30EC4F1C1A10F7586D0EE15069292831A2E3BCF2*, RuntimeObject*, const RuntimeMethod*))BaseDataProviderAccessCoreSystem_UnregisterDataProvider_TisRuntimeObject_mD60FC0708D94C115D8B1A23D3B8E07843F95A4CC_gshared)(__this, ___dataProviderInstance0, method);
}
// System.Void Microsoft.MixedReality.Toolkit.BaseEventSystem::Destroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseEventSystem_Destroy_m4763A3BA66E9048BD868B9E9632029E94BE9F451 (BaseEventSystem_tB9BD9711D545EEEF00D3162ED9A13EBDE4B1DEA1* __this, const RuntimeMethod* method) ;
// Unity.Profiling.ProfilerMarker/AutoScope Unity.Profiling.ProfilerMarker::Auto()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR AutoScope_tFB983697E28885CB10FFDB92D7EFD0615AEF3139 ProfilerMarker_Auto_m133FA724EB95D16187B37D2C8A501D7E989B1F8D_inline (ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD* __this, const RuntimeMethod* method) ;
// System.Void Unity.Profiling.ProfilerMarker/AutoScope::Dispose()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AutoScope_Dispose_mED763F3F51261EF8FB79DB32CD06E0A3F6C40481_inline (AutoScope_tFB983697E28885CB10FFDB92D7EFD0615AEF3139* __this, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.BaseDataProviderAccessCoreSystem::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseDataProviderAccessCoreSystem_Update_m4EDB84DD6A7283F9354BF22A09BA2F2633E8C64D (BaseDataProviderAccessCoreSystem_t30EC4F1C1A10F7586D0EE15069292831A2E3BCF2* __this, const RuntimeMethod* method) ;
// Microsoft.MixedReality.Toolkit.MixedRealityCameraProfile Microsoft.MixedReality.Toolkit.CameraSystem.MixedRealityCameraSystem::get_CameraProfile()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MixedRealityCameraProfile_t3EFE29D7BC4D250543D92ABF6EFFF831E219F35F* MixedRealityCameraSystem_get_CameraProfile_m688B57F47659D982E7C15A13BE902C27FD4DAC64 (MixedRealityCameraSystem_t1280EF5F551F65DA92CEACC237C34D4CF208E09A* __this, const RuntimeMethod* method) ;
// UnityEngine.CameraClearFlags Microsoft.MixedReality.Toolkit.MixedRealityCameraProfile::get_CameraClearFlagsOpaqueDisplay()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t MixedRealityCameraProfile_get_CameraClearFlagsOpaqueDisplay_m2C6025985D3CB3E3A230B70E0EB3ED94A56E931F_inline (MixedRealityCameraProfile_t3EFE29D7BC4D250543D92ABF6EFFF831E219F35F* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Camera::set_clearFlags(UnityEngine.CameraClearFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Camera_set_clearFlags_m66541D9CC43CBAA5FE7364A50D43CA5569FD4D93 (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Single Microsoft.MixedReality.Toolkit.MixedRealityCameraProfile::get_NearClipPlaneOpaqueDisplay()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float MixedRealityCameraProfile_get_NearClipPlaneOpaqueDisplay_mCD8FF69575B332BB3CD2AF376475382F900D37B9_inline (MixedRealityCameraProfile_t3EFE29D7BC4D250543D92ABF6EFFF831E219F35F* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Camera::set_nearClipPlane(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Camera_set_nearClipPlane_m78482B5E4E0CE4C195D9CE0332AA75B2D9CCDDF6 (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, float ___value0, const RuntimeMethod* method) ;
// System.Single Microsoft.MixedReality.Toolkit.MixedRealityCameraProfile::get_FarClipPlaneOpaqueDisplay()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float MixedRealityCameraProfile_get_FarClipPlaneOpaqueDisplay_mB37CB39CFAEE360A77DC339F9668CC08A88768F7_inline (MixedRealityCameraProfile_t3EFE29D7BC4D250543D92ABF6EFFF831E219F35F* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Camera::set_farClipPlane(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Camera_set_farClipPlane_m84EF39B09573168734613481FD979BFF31C60139 (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, float ___value0, const RuntimeMethod* method) ;
// UnityEngine.Color Microsoft.MixedReality.Toolkit.MixedRealityCameraProfile::get_BackgroundColorOpaqueDisplay()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F MixedRealityCameraProfile_get_BackgroundColorOpaqueDisplay_mAFFD51B0EA5310A60A57A1359DD4D9F6F63B0984_inline (MixedRealityCameraProfile_t3EFE29D7BC4D250543D92ABF6EFFF831E219F35F* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Camera::set_backgroundColor(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Camera_set_backgroundColor_m036FD8C316A93A0B168ACC89AFF16D396B872138 (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___value0, const RuntimeMethod* method) ;
// System.Int32 Microsoft.MixedReality.Toolkit.MixedRealityCameraProfile::get_OpaqueQualityLevel()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t MixedRealityCameraProfile_get_OpaqueQualityLevel_m8DD26178FA7DE59E251C937007AAD9F640F9B70F_inline (MixedRealityCameraProfile_t3EFE29D7BC4D250543D92ABF6EFFF831E219F35F* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.QualitySettings::SetQualityLevel(System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QualitySettings_SetQualityLevel_m5338AFD7126C3575F7E37A529008F8929B02EA2E (int32_t ___index0, bool ___applyExpensiveChanges1, const RuntimeMethod* method) ;
// UnityEngine.CameraClearFlags Microsoft.MixedReality.Toolkit.MixedRealityCameraProfile::get_CameraClearFlagsTransparentDisplay()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t MixedRealityCameraProfile_get_CameraClearFlagsTransparentDisplay_m12A747C782BBC8159C8AAFE2A89547DD85CCD7CE_inline (MixedRealityCameraProfile_t3EFE29D7BC4D250543D92ABF6EFFF831E219F35F* __this, const RuntimeMethod* method) ;
// UnityEngine.Color Microsoft.MixedReality.Toolkit.MixedRealityCameraProfile::get_BackgroundColorTransparentDisplay()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F MixedRealityCameraProfile_get_BackgroundColorTransparentDisplay_mEF233F0F66A5B612BA0EB2E0BD6F812A0E765798_inline (MixedRealityCameraProfile_t3EFE29D7BC4D250543D92ABF6EFFF831E219F35F* __this, const RuntimeMethod* method) ;
// System.Single Microsoft.MixedReality.Toolkit.MixedRealityCameraProfile::get_NearClipPlaneTransparentDisplay()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float MixedRealityCameraProfile_get_NearClipPlaneTransparentDisplay_m27F1911F8C0DCA73149FB685823E9B64D8A3966C_inline (MixedRealityCameraProfile_t3EFE29D7BC4D250543D92ABF6EFFF831E219F35F* __this, const RuntimeMethod* method) ;
// System.Single Microsoft.MixedReality.Toolkit.MixedRealityCameraProfile::get_FarClipPlaneTransparentDisplay()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float MixedRealityCameraProfile_get_FarClipPlaneTransparentDisplay_m07792FCD9DFFE6CACEB3751121656CB8CC82AD52_inline (MixedRealityCameraProfile_t3EFE29D7BC4D250543D92ABF6EFFF831E219F35F* __this, const RuntimeMethod* method) ;
// System.Int32 Microsoft.MixedReality.Toolkit.MixedRealityCameraProfile::get_TransparentQualityLevel()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t MixedRealityCameraProfile_get_TransparentQualityLevel_m68F5CAF2175C1AC2864A2ADF816F73194FA90520_inline (MixedRealityCameraProfile_t3EFE29D7BC4D250543D92ABF6EFFF831E219F35F* __this, const RuntimeMethod* method) ;
// System.String Microsoft.MixedReality.Toolkit.CameraSystem.MixedRealityCameraSystem::get_SourceName()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* MixedRealityCameraSystem_get_SourceName_m95799C157BC6F1812EDCA39DFC66860B4A716B5B_inline (MixedRealityCameraSystem_t1280EF5F551F65DA92CEACC237C34D4CF208E09A* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Mathf::Abs(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_Abs_mEF48B2D15BEC6663A575693F563C6DC42C8135AE_inline (int32_t ___value0, const RuntimeMethod* method) ;
// System.Void Unity.Profiling.ProfilerMarker::.ctor(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ProfilerMarker__ctor_mDD68B0A8B71E0301F592AF8891560150E55699C8_inline (ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD* __this, String_t* ___name0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Vector3::op_Equality(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector3_op_Equality_m15951D1B53E3BE36C9D265E229090020FBD72EBB_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___lhs0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rhs1, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Quaternion::op_Equality(UnityEngine.Quaternion,UnityEngine.Quaternion)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Quaternion_op_Equality_m3DF1D708D3A0AFB11EACF42A9C068EF6DC508FBB_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___lhs0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rhs1, const RuntimeMethod* method) ;
// System.Void Unity.Profiling.ProfilerMarker/AutoScope::.ctor(System.IntPtr)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AutoScope__ctor_m7F63A273E382CB6328736B6E7F321DDFA40EA9E3_inline (AutoScope_tFB983697E28885CB10FFDB92D7EFD0615AEF3139* __this, intptr_t ___markerPtr0, const RuntimeMethod* method) ;
// System.Void Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility::EndSample(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProfilerUnsafeUtility_EndSample_mE2F7A0DB4C52105F7CD135ED8816A2BB98E663CC (intptr_t ___markerPtr0, const RuntimeMethod* method) ;
// System.IntPtr Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility::CreateMarker(System.String,System.UInt16,Unity.Profiling.LowLevel.MarkerFlags,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t ProfilerUnsafeUtility_CreateMarker_m27DDE00D41B95677982DBFCE074D45B79E50C7CC (String_t* ___name0, uint16_t ___categoryId1, uint16_t ___flags2, int32_t ___metadataCount3, const RuntimeMethod* method) ;
// System.Single UnityEngine.Quaternion::Dot(UnityEngine.Quaternion,UnityEngine.Quaternion)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Quaternion_Dot_m4A80D03D7B7DEC054E2175E53D072675649C6713_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___a0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___b1, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Quaternion::IsEqualUsingDot(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Quaternion_IsEqualUsingDot_m5C6AC5F5C56B27C25DDF612BEEF40F28CA44CA31_inline (float ___dot0, const RuntimeMethod* method) ;
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
// System.Void Microsoft.MixedReality.Toolkit.CameraSystem.MixedRealityCameraSystem::.ctor(Microsoft.MixedReality.Toolkit.IMixedRealityServiceRegistrar,Microsoft.MixedReality.Toolkit.BaseMixedRealityProfile)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityCameraSystem__ctor_m872B7300E680DE0C543D7F36D1DF872753238F62 (MixedRealityCameraSystem_t1280EF5F551F65DA92CEACC237C34D4CF208E09A* __this, RuntimeObject* ___registrar0, BaseMixedRealityProfile_tB4FDEF58FFD17796C0DB7241630B71CDF38FA1D4* ___profile1, const RuntimeMethod* method) 
{
	{
		// BaseMixedRealityProfile profile = null) : this(profile)
		BaseMixedRealityProfile_tB4FDEF58FFD17796C0DB7241630B71CDF38FA1D4* L_0 = ___profile1;
		MixedRealityCameraSystem__ctor_m35B83AB3E6090447BF9BEAC9BBCE2084EC190492(__this, L_0, NULL);
		// Registrar = registrar;
		RuntimeObject* L_1 = ___registrar0;
		BaseCoreSystem_set_Registrar_m5E2AD3BA5AD91A736E0A23357E3720E5D94665A8_inline(__this, L_1, NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.CameraSystem.MixedRealityCameraSystem::.ctor(Microsoft.MixedReality.Toolkit.BaseMixedRealityProfile)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityCameraSystem__ctor_m35B83AB3E6090447BF9BEAC9BBCE2084EC190492 (MixedRealityCameraSystem_t1280EF5F551F65DA92CEACC237C34D4CF208E09A* __this, BaseMixedRealityProfile_tB4FDEF58FFD17796C0DB7241630B71CDF38FA1D4* ___profile0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseDataProviderAccessCoreSystem_t30EC4F1C1A10F7586D0EE15069292831A2E3BCF2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral196C8C01929CBAF19C0D357B9C59A48315353628);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public override string Name { get; protected set; } = "Mixed Reality Camera System";
		__this->___U3CNameU3Ek__BackingField_24 = _stringLiteral196C8C01929CBAF19C0D357B9C59A48315353628;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CNameU3Ek__BackingField_24), (void*)_stringLiteral196C8C01929CBAF19C0D357B9C59A48315353628);
		// public string SourceName { get; } = "Mixed Reality Camera System";
		__this->___U3CSourceNameU3Ek__BackingField_26 = _stringLiteral196C8C01929CBAF19C0D357B9C59A48315353628;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CSourceNameU3Ek__BackingField_26), (void*)_stringLiteral196C8C01929CBAF19C0D357B9C59A48315353628);
		// private bool useFallbackBehavior = true;
		__this->___useFallbackBehavior_29 = (bool)1;
		// BaseMixedRealityProfile profile = null) : base(profile)
		BaseMixedRealityProfile_tB4FDEF58FFD17796C0DB7241630B71CDF38FA1D4* L_0 = ___profile0;
		il2cpp_codegen_runtime_class_init_inline(BaseDataProviderAccessCoreSystem_t30EC4F1C1A10F7586D0EE15069292831A2E3BCF2_il2cpp_TypeInfo_var);
		BaseDataProviderAccessCoreSystem__ctor_m5F92E54E84428722B0B2712DEDE1E9B019E33719(__this, L_0, NULL);
		// { }
		return;
	}
}
// System.String Microsoft.MixedReality.Toolkit.CameraSystem.MixedRealityCameraSystem::get_Name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* MixedRealityCameraSystem_get_Name_m0C2C1438193C4493B90F6F522DDFBC86A8BB9B17 (MixedRealityCameraSystem_t1280EF5F551F65DA92CEACC237C34D4CF208E09A* __this, const RuntimeMethod* method) 
{
	{
		// public override string Name { get; protected set; } = "Mixed Reality Camera System";
		String_t* L_0 = __this->___U3CNameU3Ek__BackingField_24;
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.CameraSystem.MixedRealityCameraSystem::set_Name(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityCameraSystem_set_Name_m12A35D353440B44D9992020453D842CDB582A4DB (MixedRealityCameraSystem_t1280EF5F551F65DA92CEACC237C34D4CF208E09A* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public override string Name { get; protected set; } = "Mixed Reality Camera System";
		String_t* L_0 = ___value0;
		__this->___U3CNameU3Ek__BackingField_24 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CNameU3Ek__BackingField_24), (void*)L_0);
		return;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.CameraSystem.MixedRealityCameraSystem::get_IsOpaque()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MixedRealityCameraSystem_get_IsOpaque_m9F214F00F520CEBEC6C7251007E8502D42C634A1 (MixedRealityCameraSystem_t1280EF5F551F65DA92CEACC237C34D4CF208E09A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseDataProviderAccessCoreSystem_GetDataProviders_TisIMixedRealityCameraSettingsProvider_t7D8FCEABCED902255AAC48C38998A8280CDE21C3_mB208EF24BBE323B11031300949883DEFA420421B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealityCameraSettingsProvider_t7D8FCEABCED902255AAC48C38998A8280CDE21C3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IReadOnlyCollection_1_tEF5121A2F36021671B5FFB054964B9DF0E3FCC1D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IReadOnlyList_1_t4A1EAA4645FA55D5923A70619BD91033DBE5A9FB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA4093EA4CA3DFEE691E40B5C6CB894E117A3C3B9);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		// currentDisplayType = DisplayType.Opaque;
		__this->___currentDisplayType_27 = 0;
		// IReadOnlyList<IMixedRealityCameraSettingsProvider> dataProviders = GetDataProviders<IMixedRealityCameraSettingsProvider>();
		RuntimeObject* L_0;
		L_0 = GenericVirtualFuncInvoker0< RuntimeObject* >::Invoke(BaseDataProviderAccessCoreSystem_GetDataProviders_TisIMixedRealityCameraSettingsProvider_t7D8FCEABCED902255AAC48C38998A8280CDE21C3_mB208EF24BBE323B11031300949883DEFA420421B_RuntimeMethod_var, __this);
		V_0 = L_0;
		// if (dataProviders.Count > 0)
		RuntimeObject* L_1 = V_0;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.IReadOnlyCollection`1<Microsoft.MixedReality.Toolkit.CameraSystem.IMixedRealityCameraSettingsProvider>::get_Count() */, IReadOnlyCollection_1_tEF5121A2F36021671B5FFB054964B9DF0E3FCC1D_il2cpp_TypeInfo_var, L_1);
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_002e;
		}
	}
	{
		// if (!dataProviders[0].IsOpaque)
		RuntimeObject* L_3 = V_0;
		NullCheck(L_3);
		RuntimeObject* L_4;
		L_4 = InterfaceFuncInvoker1< RuntimeObject*, int32_t >::Invoke(0 /* T System.Collections.Generic.IReadOnlyList`1<Microsoft.MixedReality.Toolkit.CameraSystem.IMixedRealityCameraSettingsProvider>::get_Item(System.Int32) */, IReadOnlyList_1_t4A1EAA4645FA55D5923A70619BD91033DBE5A9FB_il2cpp_TypeInfo_var, L_3, 0);
		NullCheck(L_4);
		bool L_5;
		L_5 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean Microsoft.MixedReality.Toolkit.CameraSystem.IMixedRealityCameraSettingsProvider::get_IsOpaque() */, IMixedRealityCameraSettingsProvider_t7D8FCEABCED902255AAC48C38998A8280CDE21C3_il2cpp_TypeInfo_var, L_4);
		if (L_5)
		{
			goto IL_0038;
		}
	}
	{
		// currentDisplayType = DisplayType.Transparent;
		__this->___currentDisplayType_27 = 1;
		goto IL_0038;
	}

IL_002e:
	{
		// Debug.LogWarning("Windows Mixed Reality specific camera code has been moved into Windows Mixed Reality Camera Settings. Please ensure you have this added under your Camera System's Settings Providers, as this deprecated code path may be removed in a future update.");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_mEF15C6B17CE4E1FA7E379CDB82CE40FCD89A3F28(_stringLiteralA4093EA4CA3DFEE691E40B5C6CB894E117A3C3B9, NULL);
	}

IL_0038:
	{
		// return currentDisplayType == DisplayType.Opaque;
		int32_t L_6 = __this->___currentDisplayType_27;
		return (bool)((((int32_t)L_6) == ((int32_t)0))? 1 : 0);
	}
}
// System.UInt32 Microsoft.MixedReality.Toolkit.CameraSystem.MixedRealityCameraSystem::get_SourceId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t MixedRealityCameraSystem_get_SourceId_m3316012927F303C125ACA0A5302996379BF0F336 (MixedRealityCameraSystem_t1280EF5F551F65DA92CEACC237C34D4CF208E09A* __this, const RuntimeMethod* method) 
{
	{
		// public uint SourceId { get; } = 0;
		uint32_t L_0 = __this->___U3CSourceIdU3Ek__BackingField_25;
		return L_0;
	}
}
// System.String Microsoft.MixedReality.Toolkit.CameraSystem.MixedRealityCameraSystem::get_SourceName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* MixedRealityCameraSystem_get_SourceName_m95799C157BC6F1812EDCA39DFC66860B4A716B5B (MixedRealityCameraSystem_t1280EF5F551F65DA92CEACC237C34D4CF208E09A* __this, const RuntimeMethod* method) 
{
	{
		// public string SourceName { get; } = "Mixed Reality Camera System";
		String_t* L_0 = __this->___U3CSourceNameU3Ek__BackingField_26;
		return L_0;
	}
}
// Microsoft.MixedReality.Toolkit.MixedRealityCameraProfile Microsoft.MixedReality.Toolkit.CameraSystem.MixedRealityCameraSystem::get_CameraProfile()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MixedRealityCameraProfile_t3EFE29D7BC4D250543D92ABF6EFFF831E219F35F* MixedRealityCameraSystem_get_CameraProfile_m688B57F47659D982E7C15A13BE902C27FD4DAC64 (MixedRealityCameraSystem_t1280EF5F551F65DA92CEACC237C34D4CF208E09A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MixedRealityCameraProfile_t3EFE29D7BC4D250543D92ABF6EFFF831E219F35F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public MixedRealityCameraProfile CameraProfile => ConfigurationProfile as MixedRealityCameraProfile;
		BaseMixedRealityProfile_tB4FDEF58FFD17796C0DB7241630B71CDF38FA1D4* L_0;
		L_0 = VirtualFuncInvoker0< BaseMixedRealityProfile_tB4FDEF58FFD17796C0DB7241630B71CDF38FA1D4* >::Invoke(22 /* Microsoft.MixedReality.Toolkit.BaseMixedRealityProfile Microsoft.MixedReality.Toolkit.BaseService::get_ConfigurationProfile() */, __this);
		return ((MixedRealityCameraProfile_t3EFE29D7BC4D250543D92ABF6EFFF831E219F35F*)IsInstClass((RuntimeObject*)L_0, MixedRealityCameraProfile_t3EFE29D7BC4D250543D92ABF6EFFF831E219F35F_il2cpp_TypeInfo_var));
	}
}
// System.Void Microsoft.MixedReality.Toolkit.CameraSystem.MixedRealityCameraSystem::Initialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityCameraSystem_Initialize_mDAB0E1FFD468872718F4D2F8EBC4A04557BCD24B (MixedRealityCameraSystem_t1280EF5F551F65DA92CEACC237C34D4CF208E09A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseDataProviderAccessCoreSystem_GetDataProvider_TisIMixedRealityCameraSettingsProvider_t7D8FCEABCED902255AAC48C38998A8280CDE21C3_m244FF50BCE1B4ED8D4B6FBEC912466BD02F04774_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseDataProviderAccessCoreSystem_GetDataProviders_TisIMixedRealityCameraSettingsProvider_t7D8FCEABCED902255AAC48C38998A8280CDE21C3_mB208EF24BBE323B11031300949883DEFA420421B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseDataProviderAccessCoreSystem_RegisterDataProvider_TisIMixedRealityCameraSettingsProvider_t7D8FCEABCED902255AAC48C38998A8280CDE21C3_m40DC3DB1F51C7CEF88114FEA8715464DE0359024_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealityCameraSettingsProvider_t7D8FCEABCED902255AAC48C38998A8280CDE21C3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IReadOnlyCollection_1_tEF5121A2F36021671B5FFB054964B9DF0E3FCC1D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MixedRealityCameraProfile_t3EFE29D7BC4D250543D92ABF6EFFF831E219F35F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4FF56F0DB79ED48F92A89FC9BCCE0794BDA6075F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5DE6C8E7701D8D9660152721AEC14FBFED3B0408);
		s_Il2CppMethodInitialized = true;
	}
	MixedRealityCameraProfile_t3EFE29D7BC4D250543D92ABF6EFFF831E219F35F* V_0 = NULL;
	int32_t V_1 = 0;
	MixedRealityCameraSettingsConfiguration_t68A5F0E3D474AABCD1FCC3DB21C35D5FC76D29C8 V_2;
	memset((&V_2), 0, sizeof(V_2));
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_3 = NULL;
	SystemType_t9C9A555B60497C18297AD1082247C2960A7B666E* G_B5_0 = NULL;
	SystemType_t9C9A555B60497C18297AD1082247C2960A7B666E* G_B4_0 = NULL;
	Type_t* G_B6_0 = NULL;
	RuntimeObject* G_B10_0 = NULL;
	RuntimeObject* G_B9_0 = NULL;
	{
		// base.Initialize();
		BaseService_Initialize_m750DCABB0D54C519B59BADDB050699C41BBC4EFA(__this, NULL);
		// MixedRealityCameraProfile profile = ConfigurationProfile as MixedRealityCameraProfile;
		BaseMixedRealityProfile_tB4FDEF58FFD17796C0DB7241630B71CDF38FA1D4* L_0;
		L_0 = VirtualFuncInvoker0< BaseMixedRealityProfile_tB4FDEF58FFD17796C0DB7241630B71CDF38FA1D4* >::Invoke(22 /* Microsoft.MixedReality.Toolkit.BaseMixedRealityProfile Microsoft.MixedReality.Toolkit.BaseService::get_ConfigurationProfile() */, __this);
		V_0 = ((MixedRealityCameraProfile_t3EFE29D7BC4D250543D92ABF6EFFF831E219F35F*)IsInstClass((RuntimeObject*)L_0, MixedRealityCameraProfile_t3EFE29D7BC4D250543D92ABF6EFFF831E219F35F_il2cpp_TypeInfo_var));
		// var cameraSettingProviders = GetDataProviders<IMixedRealityCameraSettingsProvider>();
		RuntimeObject* L_1;
		L_1 = GenericVirtualFuncInvoker0< RuntimeObject* >::Invoke(BaseDataProviderAccessCoreSystem_GetDataProviders_TisIMixedRealityCameraSettingsProvider_t7D8FCEABCED902255AAC48C38998A8280CDE21C3_mB208EF24BBE323B11031300949883DEFA420421B_RuntimeMethod_var, __this);
		// if ((cameraSettingProviders.Count == 0) && (profile != null))
		NullCheck(L_1);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.IReadOnlyCollection`1<Microsoft.MixedReality.Toolkit.CameraSystem.IMixedRealityCameraSettingsProvider>::get_Count() */, IReadOnlyCollection_1_tEF5121A2F36021671B5FFB054964B9DF0E3FCC1D_il2cpp_TypeInfo_var, L_1);
		if (L_2)
		{
			goto IL_00df;
		}
	}
	{
		MixedRealityCameraProfile_t3EFE29D7BC4D250543D92ABF6EFFF831E219F35F* L_3 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_3, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_4)
		{
			goto IL_00df;
		}
	}
	{
		// for (int i = 0; i < profile.SettingsConfigurations.Length; i++)
		V_1 = 0;
		goto IL_00d1;
	}

IL_0035:
	{
		// MixedRealityCameraSettingsConfiguration configuration = profile.SettingsConfigurations[i];
		MixedRealityCameraProfile_t3EFE29D7BC4D250543D92ABF6EFFF831E219F35F* L_5 = V_0;
		NullCheck(L_5);
		MixedRealityCameraSettingsConfigurationU5BU5D_tCCEB13B637734D1B0FB80F1AF1ABDE7565D79AF3* L_6;
		L_6 = MixedRealityCameraProfile_get_SettingsConfigurations_m6098039F36CBC90E5BD4F303FAF22310801C6A61_inline(L_5, NULL);
		int32_t L_7 = V_1;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		MixedRealityCameraSettingsConfiguration_t68A5F0E3D474AABCD1FCC3DB21C35D5FC76D29C8 L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		V_2 = L_9;
		// if (configuration.ComponentType?.Type == null)
		SystemType_t9C9A555B60497C18297AD1082247C2960A7B666E* L_10;
		L_10 = MixedRealityCameraSettingsConfiguration_get_ComponentType_m0D8F9D8FEB2A2E432EDF68E7EBD7076E2E5B70D1_inline((&V_2), NULL);
		SystemType_t9C9A555B60497C18297AD1082247C2960A7B666E* L_11 = L_10;
		G_B4_0 = L_11;
		if (L_11)
		{
			G_B5_0 = L_11;
			goto IL_0050;
		}
	}
	{
		G_B6_0 = ((Type_t*)(NULL));
		goto IL_0055;
	}

IL_0050:
	{
		NullCheck(G_B5_0);
		Type_t* L_12;
		L_12 = SystemType_get_Type_mBE668A3226CE7032C46D516321F82906389782DA_inline(G_B5_0, NULL);
		G_B6_0 = L_12;
	}

IL_0055:
	{
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		bool L_13;
		L_13 = Type_op_Equality_mE6EDDDC900C50B222CF32BCD2AD027595F2D74B7(G_B6_0, (Type_t*)NULL, NULL);
		if (L_13)
		{
			goto IL_00cd;
		}
	}
	{
		// object[] args = { this, configuration.ComponentName, configuration.Priority, configuration.SettingsProfile };
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_14 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)4);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_15 = L_14;
		NullCheck(L_15);
		ArrayElementTypeCheck (L_15, __this);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)__this);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_16 = L_15;
		String_t* L_17;
		L_17 = MixedRealityCameraSettingsConfiguration_get_ComponentName_mC3C4B7BCD27A4CA184A23E9F62C50245D793D410_inline((&V_2), NULL);
		NullCheck(L_16);
		ArrayElementTypeCheck (L_16, L_17);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_17);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_18 = L_16;
		uint32_t L_19;
		L_19 = MixedRealityCameraSettingsConfiguration_get_Priority_m69882911EB7EEB9896413BF82A3FE3273E7CD1F0_inline((&V_2), NULL);
		uint32_t L_20 = L_19;
		RuntimeObject* L_21 = Box(UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_il2cpp_TypeInfo_var, &L_20);
		NullCheck(L_18);
		ArrayElementTypeCheck (L_18, L_21);
		(L_18)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_21);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_22 = L_18;
		BaseCameraSettingsProfile_tDB8373232611B34628752DF4D284B938CFE32799* L_23;
		L_23 = MixedRealityCameraSettingsConfiguration_get_SettingsProfile_m88E5208F65419DDF24A9C7DDC09127ED294835DC_inline((&V_2), NULL);
		NullCheck(L_22);
		ArrayElementTypeCheck (L_22, L_23);
		(L_22)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject*)L_23);
		V_3 = L_22;
		// if (RegisterDataProvider<IMixedRealityCameraSettingsProvider>(
		//     configuration.ComponentType.Type,
		//     configuration.ComponentName,
		//     configuration.RuntimePlatform,
		//     args))
		SystemType_t9C9A555B60497C18297AD1082247C2960A7B666E* L_24;
		L_24 = MixedRealityCameraSettingsConfiguration_get_ComponentType_m0D8F9D8FEB2A2E432EDF68E7EBD7076E2E5B70D1_inline((&V_2), NULL);
		NullCheck(L_24);
		Type_t* L_25;
		L_25 = SystemType_get_Type_mBE668A3226CE7032C46D516321F82906389782DA_inline(L_24, NULL);
		String_t* L_26;
		L_26 = MixedRealityCameraSettingsConfiguration_get_ComponentName_mC3C4B7BCD27A4CA184A23E9F62C50245D793D410_inline((&V_2), NULL);
		int32_t L_27;
		L_27 = MixedRealityCameraSettingsConfiguration_get_RuntimePlatform_mFB68BAD1D6A69AB6E2762BAC024CEDFD3B747E04_inline((&V_2), NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_28 = V_3;
		bool L_29;
		L_29 = BaseDataProviderAccessCoreSystem_RegisterDataProvider_TisIMixedRealityCameraSettingsProvider_t7D8FCEABCED902255AAC48C38998A8280CDE21C3_m40DC3DB1F51C7CEF88114FEA8715464DE0359024(__this, L_25, L_26, L_27, L_28, BaseDataProviderAccessCoreSystem_RegisterDataProvider_TisIMixedRealityCameraSettingsProvider_t7D8FCEABCED902255AAC48C38998A8280CDE21C3_m40DC3DB1F51C7CEF88114FEA8715464DE0359024_RuntimeMethod_var);
		if (!L_29)
		{
			goto IL_00cd;
		}
	}
	{
		// IMixedRealityCameraSettingsProvider provider = GetDataProvider<IMixedRealityCameraSettingsProvider>(configuration.ComponentName);
		String_t* L_30;
		L_30 = MixedRealityCameraSettingsConfiguration_get_ComponentName_mC3C4B7BCD27A4CA184A23E9F62C50245D793D410_inline((&V_2), NULL);
		RuntimeObject* L_31;
		L_31 = GenericVirtualFuncInvoker1< RuntimeObject*, String_t* >::Invoke(BaseDataProviderAccessCoreSystem_GetDataProvider_TisIMixedRealityCameraSettingsProvider_t7D8FCEABCED902255AAC48C38998A8280CDE21C3_m244FF50BCE1B4ED8D4B6FBEC912466BD02F04774_RuntimeMethod_var, __this, L_30);
		// provider?.ApplyConfiguration();
		RuntimeObject* L_32 = L_31;
		G_B9_0 = L_32;
		if (L_32)
		{
			G_B10_0 = L_32;
			goto IL_00c1;
		}
	}
	{
		goto IL_00c6;
	}

IL_00c1:
	{
		NullCheck(G_B10_0);
		InterfaceActionInvoker0::Invoke(1 /* System.Void Microsoft.MixedReality.Toolkit.CameraSystem.IMixedRealityCameraSettingsProvider::ApplyConfiguration() */, IMixedRealityCameraSettingsProvider_t7D8FCEABCED902255AAC48C38998A8280CDE21C3_il2cpp_TypeInfo_var, G_B10_0);
	}

IL_00c6:
	{
		// useFallbackBehavior = false;
		__this->___useFallbackBehavior_29 = (bool)0;
	}

IL_00cd:
	{
		// for (int i = 0; i < profile.SettingsConfigurations.Length; i++)
		int32_t L_33 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_33, 1));
	}

IL_00d1:
	{
		// for (int i = 0; i < profile.SettingsConfigurations.Length; i++)
		int32_t L_34 = V_1;
		MixedRealityCameraProfile_t3EFE29D7BC4D250543D92ABF6EFFF831E219F35F* L_35 = V_0;
		NullCheck(L_35);
		MixedRealityCameraSettingsConfigurationU5BU5D_tCCEB13B637734D1B0FB80F1AF1ABDE7565D79AF3* L_36;
		L_36 = MixedRealityCameraProfile_get_SettingsConfigurations_m6098039F36CBC90E5BD4F303FAF22310801C6A61_inline(L_35, NULL);
		NullCheck(L_36);
		if ((((int32_t)L_34) < ((int32_t)((int32_t)(((RuntimeArray*)L_36)->max_length)))))
		{
			goto IL_0035;
		}
	}

IL_00df:
	{
		// if (useFallbackBehavior)
		bool L_37 = __this->___useFallbackBehavior_29;
		if (!L_37)
		{
			goto IL_0179;
		}
	}
	{
		// cameraOpaqueLastFrame = IsOpaque;
		bool L_38;
		L_38 = MixedRealityCameraSystem_get_IsOpaque_m9F214F00F520CEBEC6C7251007E8502D42C634A1(__this, NULL);
		__this->___cameraOpaqueLastFrame_28 = L_38;
		// if (IsOpaque)
		bool L_39;
		L_39 = MixedRealityCameraSystem_get_IsOpaque_m9F214F00F520CEBEC6C7251007E8502D42C634A1(__this, NULL);
		if (!L_39)
		{
			goto IL_0106;
		}
	}
	{
		// ApplySettingsForOpaqueDisplay();
		MixedRealityCameraSystem_ApplySettingsForOpaqueDisplay_mFA25518531E47F18D7586A2150FACA527CB780E8(__this, NULL);
		goto IL_010c;
	}

IL_0106:
	{
		// ApplySettingsForTransparentDisplay();
		MixedRealityCameraSystem_ApplySettingsForTransparentDisplay_mBB11C5EB8159C29C5999E19831E7FEE61ABB6C06(__this, NULL);
	}

IL_010c:
	{
		// MixedRealityPlayspace.Position = Vector3.zero;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_40;
		L_40 = Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline(NULL);
		MixedRealityPlayspace_set_Position_mED5CCC1D026F8B408FEB0BB6B7E9CFA04B3151B8(L_40, NULL);
		// MixedRealityPlayspace.Rotation = Quaternion.identity;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_41;
		L_41 = Quaternion_get_identity_mB9CAEEB21BC81352CBF32DB9664BFC06FA7EA27B_inline(NULL);
		MixedRealityPlayspace_set_Rotation_mAF52765F4364BD5DB07DA10B73EF2E8EF798AD2C(L_41, NULL);
		// if (CameraCache.Main.transform.position != Vector3.zero)
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_42;
		L_42 = CameraCache_get_Main_m631CABB7F5A697F4C1D76F7CB02D6791C0DDCB9E(NULL);
		NullCheck(L_42);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_43;
		L_43 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_42, NULL);
		NullCheck(L_43);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_44;
		L_44 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_43, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_45;
		L_45 = Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline(NULL);
		bool L_46;
		L_46 = Vector3_op_Inequality_m6A7FB1C9E9DE194708997BFA24C6E238D92D908E_inline(L_44, L_45, NULL);
		if (!L_46)
		{
			goto IL_0154;
		}
	}
	{
		// Debug.LogWarning($"The main camera is not positioned at the origin ({Vector3.zero}), experiences may not behave as expected.");
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_47;
		L_47 = Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_48 = L_47;
		RuntimeObject* L_49 = Box(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var, &L_48);
		String_t* L_50;
		L_50 = String_Format_m8C122B26BC5AA10E2550AECA16E57DAE10F07E30(_stringLiteral4FF56F0DB79ED48F92A89FC9BCCE0794BDA6075F, L_49, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_mEF15C6B17CE4E1FA7E379CDB82CE40FCD89A3F28(L_50, NULL);
	}

IL_0154:
	{
		// if (CameraCache.Main.transform.rotation != Quaternion.identity)
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_51;
		L_51 = CameraCache_get_Main_m631CABB7F5A697F4C1D76F7CB02D6791C0DDCB9E(NULL);
		NullCheck(L_51);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_52;
		L_52 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_51, NULL);
		NullCheck(L_52);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_53;
		L_53 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_52, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_54;
		L_54 = Quaternion_get_identity_mB9CAEEB21BC81352CBF32DB9664BFC06FA7EA27B_inline(NULL);
		bool L_55;
		L_55 = Quaternion_op_Inequality_mC1922F160B14F6F404E46FFCC10B282D913BE354_inline(L_53, L_54, NULL);
		if (!L_55)
		{
			goto IL_0179;
		}
	}
	{
		// Debug.LogWarning($"The main camera is configured with a non-zero rotation, experiences may not behave as expected.");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_mEF15C6B17CE4E1FA7E379CDB82CE40FCD89A3F28(_stringLiteral5DE6C8E7701D8D9660152721AEC14FBFED3B0408, NULL);
	}

IL_0179:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.CameraSystem.MixedRealityCameraSystem::Enable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityCameraSystem_Enable_mD00955CF4EB7E0721A4276BAC9865B6CD8D43A40 (MixedRealityCameraSystem_t1280EF5F551F65DA92CEACC237C34D4CF208E09A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseDataProviderAccessCoreSystem_GetDataProviders_TisIMixedRealityCameraSettingsProvider_t7D8FCEABCED902255AAC48C38998A8280CDE21C3_mB208EF24BBE323B11031300949883DEFA420421B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealityService_tF14A48320F9A1B2C7A26406624A0620B1653382C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IReadOnlyCollection_1_tEF5121A2F36021671B5FFB054964B9DF0E3FCC1D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IReadOnlyList_1_t4A1EAA4645FA55D5923A70619BD91033DBE5A9FB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	int32_t V_1 = 0;
	{
		// base.Enable();
		BaseDataProviderAccessCoreSystem_Enable_m0164D441C4CCECC6D4AFEAF9771CC3CB2D7B2854(__this, NULL);
		// IReadOnlyList<IMixedRealityCameraSettingsProvider> providers = GetDataProviders<IMixedRealityCameraSettingsProvider>();
		RuntimeObject* L_0;
		L_0 = GenericVirtualFuncInvoker0< RuntimeObject* >::Invoke(BaseDataProviderAccessCoreSystem_GetDataProviders_TisIMixedRealityCameraSettingsProvider_t7D8FCEABCED902255AAC48C38998A8280CDE21C3_mB208EF24BBE323B11031300949883DEFA420421B_RuntimeMethod_var, __this);
		V_0 = L_0;
		// for (int i = 0; i < providers.Count; i++)
		V_1 = 0;
		goto IL_0021;
	}

IL_0011:
	{
		// providers[i].Enable();
		RuntimeObject* L_1 = V_0;
		int32_t L_2 = V_1;
		NullCheck(L_1);
		RuntimeObject* L_3;
		L_3 = InterfaceFuncInvoker1< RuntimeObject*, int32_t >::Invoke(0 /* T System.Collections.Generic.IReadOnlyList`1<Microsoft.MixedReality.Toolkit.CameraSystem.IMixedRealityCameraSettingsProvider>::get_Item(System.Int32) */, IReadOnlyList_1_t4A1EAA4645FA55D5923A70619BD91033DBE5A9FB_il2cpp_TypeInfo_var, L_1, L_2);
		NullCheck(L_3);
		InterfaceActionInvoker0::Invoke(5 /* System.Void Microsoft.MixedReality.Toolkit.IMixedRealityService::Enable() */, IMixedRealityService_tF14A48320F9A1B2C7A26406624A0620B1653382C_il2cpp_TypeInfo_var, L_3);
		// for (int i = 0; i < providers.Count; i++)
		int32_t L_4 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_4, 1));
	}

IL_0021:
	{
		// for (int i = 0; i < providers.Count; i++)
		int32_t L_5 = V_1;
		RuntimeObject* L_6 = V_0;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.IReadOnlyCollection`1<Microsoft.MixedReality.Toolkit.CameraSystem.IMixedRealityCameraSettingsProvider>::get_Count() */, IReadOnlyCollection_1_tEF5121A2F36021671B5FFB054964B9DF0E3FCC1D_il2cpp_TypeInfo_var, L_6);
		if ((((int32_t)L_5) < ((int32_t)L_7)))
		{
			goto IL_0011;
		}
	}
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.CameraSystem.MixedRealityCameraSystem::Disable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityCameraSystem_Disable_mE22BB0E00AE15BF6BC62D60884F2048D3AB677BF (MixedRealityCameraSystem_t1280EF5F551F65DA92CEACC237C34D4CF208E09A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseDataProviderAccessCoreSystem_GetDataProviders_TisIMixedRealityCameraSettingsProvider_t7D8FCEABCED902255AAC48C38998A8280CDE21C3_mB208EF24BBE323B11031300949883DEFA420421B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealityService_tF14A48320F9A1B2C7A26406624A0620B1653382C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IReadOnlyCollection_1_tEF5121A2F36021671B5FFB054964B9DF0E3FCC1D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IReadOnlyList_1_t4A1EAA4645FA55D5923A70619BD91033DBE5A9FB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	int32_t V_1 = 0;
	{
		// IReadOnlyList<IMixedRealityCameraSettingsProvider> providers = GetDataProviders<IMixedRealityCameraSettingsProvider>();
		RuntimeObject* L_0;
		L_0 = GenericVirtualFuncInvoker0< RuntimeObject* >::Invoke(BaseDataProviderAccessCoreSystem_GetDataProviders_TisIMixedRealityCameraSettingsProvider_t7D8FCEABCED902255AAC48C38998A8280CDE21C3_mB208EF24BBE323B11031300949883DEFA420421B_RuntimeMethod_var, __this);
		V_0 = L_0;
		// for (int i = 0; i < providers.Count; i++)
		V_1 = 0;
		goto IL_001b;
	}

IL_000b:
	{
		// providers[i].Disable();
		RuntimeObject* L_1 = V_0;
		int32_t L_2 = V_1;
		NullCheck(L_1);
		RuntimeObject* L_3;
		L_3 = InterfaceFuncInvoker1< RuntimeObject*, int32_t >::Invoke(0 /* T System.Collections.Generic.IReadOnlyList`1<Microsoft.MixedReality.Toolkit.CameraSystem.IMixedRealityCameraSettingsProvider>::get_Item(System.Int32) */, IReadOnlyList_1_t4A1EAA4645FA55D5923A70619BD91033DBE5A9FB_il2cpp_TypeInfo_var, L_1, L_2);
		NullCheck(L_3);
		InterfaceActionInvoker0::Invoke(8 /* System.Void Microsoft.MixedReality.Toolkit.IMixedRealityService::Disable() */, IMixedRealityService_tF14A48320F9A1B2C7A26406624A0620B1653382C_il2cpp_TypeInfo_var, L_3);
		// for (int i = 0; i < providers.Count; i++)
		int32_t L_4 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_4, 1));
	}

IL_001b:
	{
		// for (int i = 0; i < providers.Count; i++)
		int32_t L_5 = V_1;
		RuntimeObject* L_6 = V_0;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.IReadOnlyCollection`1<Microsoft.MixedReality.Toolkit.CameraSystem.IMixedRealityCameraSettingsProvider>::get_Count() */, IReadOnlyCollection_1_tEF5121A2F36021671B5FFB054964B9DF0E3FCC1D_il2cpp_TypeInfo_var, L_6);
		if ((((int32_t)L_5) < ((int32_t)L_7)))
		{
			goto IL_000b;
		}
	}
	{
		// base.Disable();
		BaseService_Disable_m75AA61136BE79E0C8EA4B058D1506882A56683C4(__this, NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.CameraSystem.MixedRealityCameraSystem::Destroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityCameraSystem_Destroy_mA5070326508B8EA998163CE6ED48380F3E10F76B (MixedRealityCameraSystem_t1280EF5F551F65DA92CEACC237C34D4CF208E09A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseDataProviderAccessCoreSystem_GetDataProviders_TisIMixedRealityCameraSettingsProvider_t7D8FCEABCED902255AAC48C38998A8280CDE21C3_mB208EF24BBE323B11031300949883DEFA420421B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseDataProviderAccessCoreSystem_UnregisterDataProvider_TisIMixedRealityCameraSettingsProvider_t7D8FCEABCED902255AAC48C38998A8280CDE21C3_m58BB7E554B47F2FDC2C5A74FDE5819BD8CD479E4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_t3B529C65E14D432D75871E1E6FBC50F662912483_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t7BF115EC64DF86D65B60CB3D0AA43AC6D4502357_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	{
		// foreach (var provider in GetDataProviders<IMixedRealityCameraSettingsProvider>())
		RuntimeObject* L_0;
		L_0 = GenericVirtualFuncInvoker0< RuntimeObject* >::Invoke(BaseDataProviderAccessCoreSystem_GetDataProviders_TisIMixedRealityCameraSettingsProvider_t7D8FCEABCED902255AAC48C38998A8280CDE21C3_mB208EF24BBE323B11031300949883DEFA420421B_RuntimeMethod_var, __this);
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<Microsoft.MixedReality.Toolkit.CameraSystem.IMixedRealityCameraSettingsProvider>::GetEnumerator() */, IEnumerable_1_t3B529C65E14D432D75871E1E6FBC50F662912483_il2cpp_TypeInfo_var, L_0);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0027:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_2 = V_0;
					if (!L_2)
					{
						goto IL_0030;
					}
				}
				{
					RuntimeObject* L_3 = V_0;
					NullCheck(L_3);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_3);
				}

IL_0030:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_001d_1;
			}

IL_000e_1:
			{
				// foreach (var provider in GetDataProviders<IMixedRealityCameraSettingsProvider>())
				RuntimeObject* L_4 = V_0;
				NullCheck(L_4);
				RuntimeObject* L_5;
				L_5 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<Microsoft.MixedReality.Toolkit.CameraSystem.IMixedRealityCameraSettingsProvider>::get_Current() */, IEnumerator_1_t7BF115EC64DF86D65B60CB3D0AA43AC6D4502357_il2cpp_TypeInfo_var, L_4);
				V_1 = L_5;
				// UnregisterDataProvider(provider);
				RuntimeObject* L_6 = V_1;
				bool L_7;
				L_7 = BaseDataProviderAccessCoreSystem_UnregisterDataProvider_TisIMixedRealityCameraSettingsProvider_t7D8FCEABCED902255AAC48C38998A8280CDE21C3_m58BB7E554B47F2FDC2C5A74FDE5819BD8CD479E4(__this, L_6, BaseDataProviderAccessCoreSystem_UnregisterDataProvider_TisIMixedRealityCameraSettingsProvider_t7D8FCEABCED902255AAC48C38998A8280CDE21C3_m58BB7E554B47F2FDC2C5A74FDE5819BD8CD479E4_RuntimeMethod_var);
			}

IL_001d_1:
			{
				// foreach (var provider in GetDataProviders<IMixedRealityCameraSettingsProvider>())
				RuntimeObject* L_8 = V_0;
				NullCheck(L_8);
				bool L_9;
				L_9 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_8);
				if (L_9)
				{
					goto IL_000e_1;
				}
			}
			{
				goto IL_0031;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0031:
	{
		// useFallbackBehavior = true;
		__this->___useFallbackBehavior_29 = (bool)1;
		// base.Destroy();
		BaseEventSystem_Destroy_m4763A3BA66E9048BD868B9E9632029E94BE9F451(__this, NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.CameraSystem.MixedRealityCameraSystem::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityCameraSystem_Update_m4BC60B517258691A5EA011270F43B06992B661CA (MixedRealityCameraSystem_t1280EF5F551F65DA92CEACC237C34D4CF208E09A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MixedRealityCameraSystem_t1280EF5F551F65DA92CEACC237C34D4CF208E09A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	AutoScope_tFB983697E28885CB10FFDB92D7EFD0615AEF3139 V_0;
	memset((&V_0), 0, sizeof(V_0));
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// if (!useFallbackBehavior) { return; }
		bool L_0 = __this->___useFallbackBehavior_29;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		// if (!useFallbackBehavior) { return; }
		return;
	}

IL_0009:
	{
		// using (UpdatePerfMarker.Auto())
		il2cpp_codegen_runtime_class_init_inline(MixedRealityCameraSystem_t1280EF5F551F65DA92CEACC237C34D4CF208E09A_il2cpp_TypeInfo_var);
		ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD L_1 = ((MixedRealityCameraSystem_t1280EF5F551F65DA92CEACC237C34D4CF208E09A_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealityCameraSystem_t1280EF5F551F65DA92CEACC237C34D4CF208E09A_il2cpp_TypeInfo_var))->___UpdatePerfMarker_30;
		V_1 = L_1;
		AutoScope_tFB983697E28885CB10FFDB92D7EFD0615AEF3139 L_2;
		L_2 = ProfilerMarker_Auto_m133FA724EB95D16187B37D2C8A501D7E989B1F8D_inline((&V_1), NULL);
		V_0 = L_2;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_004f:
			{// begin finally (depth: 1)
				AutoScope_Dispose_mED763F3F51261EF8FB79DB32CD06E0A3F6C40481_inline((&V_0), NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				// base.Update();
				BaseDataProviderAccessCoreSystem_Update_m4EDB84DD6A7283F9354BF22A09BA2F2633E8C64D(__this, NULL);
				// if (IsOpaque != cameraOpaqueLastFrame)
				bool L_3;
				L_3 = MixedRealityCameraSystem_get_IsOpaque_m9F214F00F520CEBEC6C7251007E8502D42C634A1(__this, NULL);
				bool L_4 = __this->___cameraOpaqueLastFrame_28;
				if ((((int32_t)L_3) == ((int32_t)L_4)))
				{
					goto IL_004d_1;
				}
			}
			{
				// cameraOpaqueLastFrame = IsOpaque;
				bool L_5;
				L_5 = MixedRealityCameraSystem_get_IsOpaque_m9F214F00F520CEBEC6C7251007E8502D42C634A1(__this, NULL);
				__this->___cameraOpaqueLastFrame_28 = L_5;
				// if (IsOpaque)
				bool L_6;
				L_6 = MixedRealityCameraSystem_get_IsOpaque_m9F214F00F520CEBEC6C7251007E8502D42C634A1(__this, NULL);
				if (!L_6)
				{
					goto IL_0047_1;
				}
			}
			{
				// ApplySettingsForOpaqueDisplay();
				MixedRealityCameraSystem_ApplySettingsForOpaqueDisplay_mFA25518531E47F18D7586A2150FACA527CB780E8(__this, NULL);
				goto IL_005d;
			}

IL_0047_1:
			{
				// ApplySettingsForTransparentDisplay();
				MixedRealityCameraSystem_ApplySettingsForTransparentDisplay_mBB11C5EB8159C29C5999E19831E7FEE61ABB6C06(__this, NULL);
			}

IL_004d_1:
			{
				// }
				goto IL_005d;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_005d:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.CameraSystem.MixedRealityCameraSystem::ApplySettingsForOpaqueDisplay()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityCameraSystem_ApplySettingsForOpaqueDisplay_mFA25518531E47F18D7586A2150FACA527CB780E8 (MixedRealityCameraSystem_t1280EF5F551F65DA92CEACC237C34D4CF208E09A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MixedRealityCameraSystem_t1280EF5F551F65DA92CEACC237C34D4CF208E09A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	AutoScope_tFB983697E28885CB10FFDB92D7EFD0615AEF3139 V_0;
	memset((&V_0), 0, sizeof(V_0));
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// using (ApplySettingsForOpaquePerfMarker.Auto())
		il2cpp_codegen_runtime_class_init_inline(MixedRealityCameraSystem_t1280EF5F551F65DA92CEACC237C34D4CF208E09A_il2cpp_TypeInfo_var);
		ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD L_0 = ((MixedRealityCameraSystem_t1280EF5F551F65DA92CEACC237C34D4CF208E09A_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealityCameraSystem_t1280EF5F551F65DA92CEACC237C34D4CF208E09A_il2cpp_TypeInfo_var))->___ApplySettingsForOpaquePerfMarker_31;
		V_1 = L_0;
		AutoScope_tFB983697E28885CB10FFDB92D7EFD0615AEF3139 L_1;
		L_1 = ProfilerMarker_Auto_m133FA724EB95D16187B37D2C8A501D7E989B1F8D_inline((&V_1), NULL);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0075:
			{// begin finally (depth: 1)
				AutoScope_Dispose_mED763F3F51261EF8FB79DB32CD06E0A3F6C40481_inline((&V_0), NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			// CameraCache.Main.clearFlags = CameraProfile.CameraClearFlagsOpaqueDisplay;
			Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_2;
			L_2 = CameraCache_get_Main_m631CABB7F5A697F4C1D76F7CB02D6791C0DDCB9E(NULL);
			MixedRealityCameraProfile_t3EFE29D7BC4D250543D92ABF6EFFF831E219F35F* L_3;
			L_3 = MixedRealityCameraSystem_get_CameraProfile_m688B57F47659D982E7C15A13BE902C27FD4DAC64(__this, NULL);
			NullCheck(L_3);
			int32_t L_4;
			L_4 = MixedRealityCameraProfile_get_CameraClearFlagsOpaqueDisplay_m2C6025985D3CB3E3A230B70E0EB3ED94A56E931F_inline(L_3, NULL);
			NullCheck(L_2);
			Camera_set_clearFlags_m66541D9CC43CBAA5FE7364A50D43CA5569FD4D93(L_2, L_4, NULL);
			// CameraCache.Main.nearClipPlane = CameraProfile.NearClipPlaneOpaqueDisplay;
			Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_5;
			L_5 = CameraCache_get_Main_m631CABB7F5A697F4C1D76F7CB02D6791C0DDCB9E(NULL);
			MixedRealityCameraProfile_t3EFE29D7BC4D250543D92ABF6EFFF831E219F35F* L_6;
			L_6 = MixedRealityCameraSystem_get_CameraProfile_m688B57F47659D982E7C15A13BE902C27FD4DAC64(__this, NULL);
			NullCheck(L_6);
			float L_7;
			L_7 = MixedRealityCameraProfile_get_NearClipPlaneOpaqueDisplay_mCD8FF69575B332BB3CD2AF376475382F900D37B9_inline(L_6, NULL);
			NullCheck(L_5);
			Camera_set_nearClipPlane_m78482B5E4E0CE4C195D9CE0332AA75B2D9CCDDF6(L_5, L_7, NULL);
			// CameraCache.Main.farClipPlane = CameraProfile.FarClipPlaneOpaqueDisplay;
			Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_8;
			L_8 = CameraCache_get_Main_m631CABB7F5A697F4C1D76F7CB02D6791C0DDCB9E(NULL);
			MixedRealityCameraProfile_t3EFE29D7BC4D250543D92ABF6EFFF831E219F35F* L_9;
			L_9 = MixedRealityCameraSystem_get_CameraProfile_m688B57F47659D982E7C15A13BE902C27FD4DAC64(__this, NULL);
			NullCheck(L_9);
			float L_10;
			L_10 = MixedRealityCameraProfile_get_FarClipPlaneOpaqueDisplay_mB37CB39CFAEE360A77DC339F9668CC08A88768F7_inline(L_9, NULL);
			NullCheck(L_8);
			Camera_set_farClipPlane_m84EF39B09573168734613481FD979BFF31C60139(L_8, L_10, NULL);
			// CameraCache.Main.backgroundColor = CameraProfile.BackgroundColorOpaqueDisplay;
			Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_11;
			L_11 = CameraCache_get_Main_m631CABB7F5A697F4C1D76F7CB02D6791C0DDCB9E(NULL);
			MixedRealityCameraProfile_t3EFE29D7BC4D250543D92ABF6EFFF831E219F35F* L_12;
			L_12 = MixedRealityCameraSystem_get_CameraProfile_m688B57F47659D982E7C15A13BE902C27FD4DAC64(__this, NULL);
			NullCheck(L_12);
			Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_13;
			L_13 = MixedRealityCameraProfile_get_BackgroundColorOpaqueDisplay_mAFFD51B0EA5310A60A57A1359DD4D9F6F63B0984_inline(L_12, NULL);
			NullCheck(L_11);
			Camera_set_backgroundColor_m036FD8C316A93A0B168ACC89AFF16D396B872138(L_11, L_13, NULL);
			// QualitySettings.SetQualityLevel(CameraProfile.OpaqueQualityLevel, false);
			MixedRealityCameraProfile_t3EFE29D7BC4D250543D92ABF6EFFF831E219F35F* L_14;
			L_14 = MixedRealityCameraSystem_get_CameraProfile_m688B57F47659D982E7C15A13BE902C27FD4DAC64(__this, NULL);
			NullCheck(L_14);
			int32_t L_15;
			L_15 = MixedRealityCameraProfile_get_OpaqueQualityLevel_m8DD26178FA7DE59E251C937007AAD9F640F9B70F_inline(L_14, NULL);
			QualitySettings_SetQualityLevel_m5338AFD7126C3575F7E37A529008F8929B02EA2E(L_15, (bool)0, NULL);
			// }
			goto IL_0083;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0083:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.CameraSystem.MixedRealityCameraSystem::ApplySettingsForTransparentDisplay()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityCameraSystem_ApplySettingsForTransparentDisplay_mBB11C5EB8159C29C5999E19831E7FEE61ABB6C06 (MixedRealityCameraSystem_t1280EF5F551F65DA92CEACC237C34D4CF208E09A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MixedRealityCameraSystem_t1280EF5F551F65DA92CEACC237C34D4CF208E09A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	AutoScope_tFB983697E28885CB10FFDB92D7EFD0615AEF3139 V_0;
	memset((&V_0), 0, sizeof(V_0));
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// using (ApplySettingsForTransparentPerfMarker.Auto())
		il2cpp_codegen_runtime_class_init_inline(MixedRealityCameraSystem_t1280EF5F551F65DA92CEACC237C34D4CF208E09A_il2cpp_TypeInfo_var);
		ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD L_0 = ((MixedRealityCameraSystem_t1280EF5F551F65DA92CEACC237C34D4CF208E09A_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealityCameraSystem_t1280EF5F551F65DA92CEACC237C34D4CF208E09A_il2cpp_TypeInfo_var))->___ApplySettingsForTransparentPerfMarker_32;
		V_1 = L_0;
		AutoScope_tFB983697E28885CB10FFDB92D7EFD0615AEF3139 L_1;
		L_1 = ProfilerMarker_Auto_m133FA724EB95D16187B37D2C8A501D7E989B1F8D_inline((&V_1), NULL);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0075:
			{// begin finally (depth: 1)
				AutoScope_Dispose_mED763F3F51261EF8FB79DB32CD06E0A3F6C40481_inline((&V_0), NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			// CameraCache.Main.clearFlags = CameraProfile.CameraClearFlagsTransparentDisplay;
			Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_2;
			L_2 = CameraCache_get_Main_m631CABB7F5A697F4C1D76F7CB02D6791C0DDCB9E(NULL);
			MixedRealityCameraProfile_t3EFE29D7BC4D250543D92ABF6EFFF831E219F35F* L_3;
			L_3 = MixedRealityCameraSystem_get_CameraProfile_m688B57F47659D982E7C15A13BE902C27FD4DAC64(__this, NULL);
			NullCheck(L_3);
			int32_t L_4;
			L_4 = MixedRealityCameraProfile_get_CameraClearFlagsTransparentDisplay_m12A747C782BBC8159C8AAFE2A89547DD85CCD7CE_inline(L_3, NULL);
			NullCheck(L_2);
			Camera_set_clearFlags_m66541D9CC43CBAA5FE7364A50D43CA5569FD4D93(L_2, L_4, NULL);
			// CameraCache.Main.backgroundColor = CameraProfile.BackgroundColorTransparentDisplay;
			Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_5;
			L_5 = CameraCache_get_Main_m631CABB7F5A697F4C1D76F7CB02D6791C0DDCB9E(NULL);
			MixedRealityCameraProfile_t3EFE29D7BC4D250543D92ABF6EFFF831E219F35F* L_6;
			L_6 = MixedRealityCameraSystem_get_CameraProfile_m688B57F47659D982E7C15A13BE902C27FD4DAC64(__this, NULL);
			NullCheck(L_6);
			Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_7;
			L_7 = MixedRealityCameraProfile_get_BackgroundColorTransparentDisplay_mEF233F0F66A5B612BA0EB2E0BD6F812A0E765798_inline(L_6, NULL);
			NullCheck(L_5);
			Camera_set_backgroundColor_m036FD8C316A93A0B168ACC89AFF16D396B872138(L_5, L_7, NULL);
			// CameraCache.Main.nearClipPlane = CameraProfile.NearClipPlaneTransparentDisplay;
			Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_8;
			L_8 = CameraCache_get_Main_m631CABB7F5A697F4C1D76F7CB02D6791C0DDCB9E(NULL);
			MixedRealityCameraProfile_t3EFE29D7BC4D250543D92ABF6EFFF831E219F35F* L_9;
			L_9 = MixedRealityCameraSystem_get_CameraProfile_m688B57F47659D982E7C15A13BE902C27FD4DAC64(__this, NULL);
			NullCheck(L_9);
			float L_10;
			L_10 = MixedRealityCameraProfile_get_NearClipPlaneTransparentDisplay_m27F1911F8C0DCA73149FB685823E9B64D8A3966C_inline(L_9, NULL);
			NullCheck(L_8);
			Camera_set_nearClipPlane_m78482B5E4E0CE4C195D9CE0332AA75B2D9CCDDF6(L_8, L_10, NULL);
			// CameraCache.Main.farClipPlane = CameraProfile.FarClipPlaneTransparentDisplay;
			Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_11;
			L_11 = CameraCache_get_Main_m631CABB7F5A697F4C1D76F7CB02D6791C0DDCB9E(NULL);
			MixedRealityCameraProfile_t3EFE29D7BC4D250543D92ABF6EFFF831E219F35F* L_12;
			L_12 = MixedRealityCameraSystem_get_CameraProfile_m688B57F47659D982E7C15A13BE902C27FD4DAC64(__this, NULL);
			NullCheck(L_12);
			float L_13;
			L_13 = MixedRealityCameraProfile_get_FarClipPlaneTransparentDisplay_m07792FCD9DFFE6CACEB3751121656CB8CC82AD52_inline(L_12, NULL);
			NullCheck(L_11);
			Camera_set_farClipPlane_m84EF39B09573168734613481FD979BFF31C60139(L_11, L_13, NULL);
			// QualitySettings.SetQualityLevel(CameraProfile.TransparentQualityLevel, false);
			MixedRealityCameraProfile_t3EFE29D7BC4D250543D92ABF6EFFF831E219F35F* L_14;
			L_14 = MixedRealityCameraSystem_get_CameraProfile_m688B57F47659D982E7C15A13BE902C27FD4DAC64(__this, NULL);
			NullCheck(L_14);
			int32_t L_15;
			L_15 = MixedRealityCameraProfile_get_TransparentQualityLevel_m68F5CAF2175C1AC2864A2ADF816F73194FA90520_inline(L_14, NULL);
			QualitySettings_SetQualityLevel_m5338AFD7126C3575F7E37A529008F8929B02EA2E(L_15, (bool)0, NULL);
			// }
			goto IL_0083;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0083:
	{
		// }
		return;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.CameraSystem.MixedRealityCameraSystem::System.Collections.IEqualityComparer.Equals(System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MixedRealityCameraSystem_System_Collections_IEqualityComparer_Equals_m9A56F59E8BFA098A73ED3B1C206AA7F054F70987 (MixedRealityCameraSystem_t1280EF5F551F65DA92CEACC237C34D4CF208E09A* __this, RuntimeObject* ___x0, RuntimeObject* ___y1, const RuntimeMethod* method) 
{
	{
		// return false;
		return (bool)0;
	}
}
// System.Int32 Microsoft.MixedReality.Toolkit.CameraSystem.MixedRealityCameraSystem::System.Collections.IEqualityComparer.GetHashCode(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MixedRealityCameraSystem_System_Collections_IEqualityComparer_GetHashCode_m6EEEFC55AC593D205EB4E93F0696AC7C69EC6313 (MixedRealityCameraSystem_t1280EF5F551F65DA92CEACC237C34D4CF208E09A* __this, RuntimeObject* ___obj0, const RuntimeMethod* method) 
{
	{
		// return Mathf.Abs(SourceName.GetHashCode());
		String_t* L_0;
		L_0 = MixedRealityCameraSystem_get_SourceName_m95799C157BC6F1812EDCA39DFC66860B4A716B5B_inline(__this, NULL);
		NullCheck(L_0);
		int32_t L_1;
		L_1 = VirtualFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_0);
		int32_t L_2;
		L_2 = Mathf_Abs_mEF48B2D15BEC6663A575693F563C6DC42C8135AE_inline(L_1, NULL);
		return L_2;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.CameraSystem.MixedRealityCameraSystem::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityCameraSystem__cctor_mF970AC8450F1936714E2D59E4E82E70BB4F6E7BD (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MixedRealityCameraSystem_t1280EF5F551F65DA92CEACC237C34D4CF208E09A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral477D591F1FC256A3C3E8E9B6CB4C57DD7113F1B9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral615E7AE91B5D8E95D171FD00609751001072553C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7EFBD08779CD30AA4BB155A03A7A8843252129C1);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static readonly ProfilerMarker UpdatePerfMarker = new ProfilerMarker("[MRTK] MixedRealityCameraSystem.Update");
		ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD L_0;
		memset((&L_0), 0, sizeof(L_0));
		ProfilerMarker__ctor_mDD68B0A8B71E0301F592AF8891560150E55699C8_inline((&L_0), _stringLiteral615E7AE91B5D8E95D171FD00609751001072553C, /*hidden argument*/NULL);
		((MixedRealityCameraSystem_t1280EF5F551F65DA92CEACC237C34D4CF208E09A_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealityCameraSystem_t1280EF5F551F65DA92CEACC237C34D4CF208E09A_il2cpp_TypeInfo_var))->___UpdatePerfMarker_30 = L_0;
		// private static readonly ProfilerMarker ApplySettingsForOpaquePerfMarker = new ProfilerMarker("[MRTK] MixedRealityCameraSystem.ApplySettingsForOpaqueDisplay");
		ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD L_1;
		memset((&L_1), 0, sizeof(L_1));
		ProfilerMarker__ctor_mDD68B0A8B71E0301F592AF8891560150E55699C8_inline((&L_1), _stringLiteral7EFBD08779CD30AA4BB155A03A7A8843252129C1, /*hidden argument*/NULL);
		((MixedRealityCameraSystem_t1280EF5F551F65DA92CEACC237C34D4CF208E09A_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealityCameraSystem_t1280EF5F551F65DA92CEACC237C34D4CF208E09A_il2cpp_TypeInfo_var))->___ApplySettingsForOpaquePerfMarker_31 = L_1;
		// private static readonly ProfilerMarker ApplySettingsForTransparentPerfMarker = new ProfilerMarker("[MRTK] MixedRealityCameraSystem.ApplySettingsForTransparentDisplay");
		ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD L_2;
		memset((&L_2), 0, sizeof(L_2));
		ProfilerMarker__ctor_mDD68B0A8B71E0301F592AF8891560150E55699C8_inline((&L_2), _stringLiteral477D591F1FC256A3C3E8E9B6CB4C57DD7113F1B9, /*hidden argument*/NULL);
		((MixedRealityCameraSystem_t1280EF5F551F65DA92CEACC237C34D4CF208E09A_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealityCameraSystem_t1280EF5F551F65DA92CEACC237C34D4CF208E09A_il2cpp_TypeInfo_var))->___ApplySettingsForTransparentPerfMarker_32 = L_2;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR MixedRealityCameraSettingsConfigurationU5BU5D_tCCEB13B637734D1B0FB80F1AF1ABDE7565D79AF3* MixedRealityCameraProfile_get_SettingsConfigurations_m6098039F36CBC90E5BD4F303FAF22310801C6A61_inline (MixedRealityCameraProfile_t3EFE29D7BC4D250543D92ABF6EFFF831E219F35F* __this, const RuntimeMethod* method) 
{
	{
		// get { return settingsConfigurations; }
		MixedRealityCameraSettingsConfigurationU5BU5D_tCCEB13B637734D1B0FB80F1AF1ABDE7565D79AF3* L_0 = __this->___settingsConfigurations_5;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR SystemType_t9C9A555B60497C18297AD1082247C2960A7B666E* MixedRealityCameraSettingsConfiguration_get_ComponentType_m0D8F9D8FEB2A2E432EDF68E7EBD7076E2E5B70D1_inline (MixedRealityCameraSettingsConfiguration_t68A5F0E3D474AABCD1FCC3DB21C35D5FC76D29C8* __this, const RuntimeMethod* method) 
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* MixedRealityCameraSettingsConfiguration_get_ComponentName_mC3C4B7BCD27A4CA184A23E9F62C50245D793D410_inline (MixedRealityCameraSettingsConfiguration_t68A5F0E3D474AABCD1FCC3DB21C35D5FC76D29C8* __this, const RuntimeMethod* method) 
{
	{
		// public string ComponentName => componentName;
		String_t* L_0 = __this->___componentName_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint32_t MixedRealityCameraSettingsConfiguration_get_Priority_m69882911EB7EEB9896413BF82A3FE3273E7CD1F0_inline (MixedRealityCameraSettingsConfiguration_t68A5F0E3D474AABCD1FCC3DB21C35D5FC76D29C8* __this, const RuntimeMethod* method) 
{
	{
		// public uint Priority => priority;
		uint32_t L_0 = __this->___priority_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR BaseCameraSettingsProfile_tDB8373232611B34628752DF4D284B938CFE32799* MixedRealityCameraSettingsConfiguration_get_SettingsProfile_m88E5208F65419DDF24A9C7DDC09127ED294835DC_inline (MixedRealityCameraSettingsConfiguration_t68A5F0E3D474AABCD1FCC3DB21C35D5FC76D29C8* __this, const RuntimeMethod* method) 
{
	{
		// public BaseCameraSettingsProfile SettingsProfile => settingsProfile;
		BaseCameraSettingsProfile_tDB8373232611B34628752DF4D284B938CFE32799* L_0 = __this->___settingsProfile_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t MixedRealityCameraSettingsConfiguration_get_RuntimePlatform_mFB68BAD1D6A69AB6E2762BAC024CEDFD3B747E04_inline (MixedRealityCameraSettingsConfiguration_t68A5F0E3D474AABCD1FCC3DB21C35D5FC76D29C8* __this, const RuntimeMethod* method) 
{
	{
		// public SupportedPlatforms RuntimePlatform => runtimePlatform;
		int32_t L_0 = __this->___runtimePlatform_3;
		return L_0;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector3_op_Inequality_m6A7FB1C9E9DE194708997BFA24C6E238D92D908E_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___lhs0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rhs1, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___lhs0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___rhs1;
		bool L_2;
		L_2 = Vector3_op_Equality_m15951D1B53E3BE36C9D265E229090020FBD72EBB_inline(L_0, L_1, NULL);
		V_0 = (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		goto IL_000e;
	}

IL_000e:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Quaternion_op_Inequality_mC1922F160B14F6F404E46FFCC10B282D913BE354_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___lhs0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rhs1, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = ___lhs0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_1 = ___rhs1;
		bool L_2;
		L_2 = Quaternion_op_Equality_m3DF1D708D3A0AFB11EACF42A9C068EF6DC508FBB_inline(L_0, L_1, NULL);
		V_0 = (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		goto IL_000e;
	}

IL_000e:
	{
		bool L_3 = V_0;
		return L_3;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t MixedRealityCameraProfile_get_CameraClearFlagsOpaqueDisplay_m2C6025985D3CB3E3A230B70E0EB3ED94A56E931F_inline (MixedRealityCameraProfile_t3EFE29D7BC4D250543D92ABF6EFFF831E219F35F* __this, const RuntimeMethod* method) 
{
	{
		// public CameraClearFlags CameraClearFlagsOpaqueDisplay => cameraClearFlagsOpaqueDisplay;
		int32_t L_0 = __this->___cameraClearFlagsOpaqueDisplay_8;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float MixedRealityCameraProfile_get_NearClipPlaneOpaqueDisplay_mCD8FF69575B332BB3CD2AF376475382F900D37B9_inline (MixedRealityCameraProfile_t3EFE29D7BC4D250543D92ABF6EFFF831E219F35F* __this, const RuntimeMethod* method) 
{
	{
		// public float NearClipPlaneOpaqueDisplay => nearClipPlaneOpaqueDisplay;
		float L_0 = __this->___nearClipPlaneOpaqueDisplay_6;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float MixedRealityCameraProfile_get_FarClipPlaneOpaqueDisplay_mB37CB39CFAEE360A77DC339F9668CC08A88768F7_inline (MixedRealityCameraProfile_t3EFE29D7BC4D250543D92ABF6EFFF831E219F35F* __this, const RuntimeMethod* method) 
{
	{
		// public float FarClipPlaneOpaqueDisplay => farClipPlaneOpaqueDisplay;
		float L_0 = __this->___farClipPlaneOpaqueDisplay_7;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F MixedRealityCameraProfile_get_BackgroundColorOpaqueDisplay_mAFFD51B0EA5310A60A57A1359DD4D9F6F63B0984_inline (MixedRealityCameraProfile_t3EFE29D7BC4D250543D92ABF6EFFF831E219F35F* __this, const RuntimeMethod* method) 
{
	{
		// public Color BackgroundColorOpaqueDisplay => backgroundColorOpaqueDisplay;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = __this->___backgroundColorOpaqueDisplay_9;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t MixedRealityCameraProfile_get_OpaqueQualityLevel_m8DD26178FA7DE59E251C937007AAD9F640F9B70F_inline (MixedRealityCameraProfile_t3EFE29D7BC4D250543D92ABF6EFFF831E219F35F* __this, const RuntimeMethod* method) 
{
	{
		// public int OpaqueQualityLevel => opaqueQualityLevel;
		int32_t L_0 = __this->___opaqueQualityLevel_10;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t MixedRealityCameraProfile_get_CameraClearFlagsTransparentDisplay_m12A747C782BBC8159C8AAFE2A89547DD85CCD7CE_inline (MixedRealityCameraProfile_t3EFE29D7BC4D250543D92ABF6EFFF831E219F35F* __this, const RuntimeMethod* method) 
{
	{
		// public CameraClearFlags CameraClearFlagsTransparentDisplay => cameraClearFlagsTransparentDisplay;
		int32_t L_0 = __this->___cameraClearFlagsTransparentDisplay_13;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F MixedRealityCameraProfile_get_BackgroundColorTransparentDisplay_mEF233F0F66A5B612BA0EB2E0BD6F812A0E765798_inline (MixedRealityCameraProfile_t3EFE29D7BC4D250543D92ABF6EFFF831E219F35F* __this, const RuntimeMethod* method) 
{
	{
		// public Color BackgroundColorTransparentDisplay => backgroundColorTransparentDisplay;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = __this->___backgroundColorTransparentDisplay_14;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float MixedRealityCameraProfile_get_NearClipPlaneTransparentDisplay_m27F1911F8C0DCA73149FB685823E9B64D8A3966C_inline (MixedRealityCameraProfile_t3EFE29D7BC4D250543D92ABF6EFFF831E219F35F* __this, const RuntimeMethod* method) 
{
	{
		// public float NearClipPlaneTransparentDisplay => nearClipPlaneTransparentDisplay;
		float L_0 = __this->___nearClipPlaneTransparentDisplay_11;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float MixedRealityCameraProfile_get_FarClipPlaneTransparentDisplay_m07792FCD9DFFE6CACEB3751121656CB8CC82AD52_inline (MixedRealityCameraProfile_t3EFE29D7BC4D250543D92ABF6EFFF831E219F35F* __this, const RuntimeMethod* method) 
{
	{
		// public float FarClipPlaneTransparentDisplay => farClipPlaneTransparentDisplay;
		float L_0 = __this->___farClipPlaneTransparentDisplay_12;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t MixedRealityCameraProfile_get_TransparentQualityLevel_m68F5CAF2175C1AC2864A2ADF816F73194FA90520_inline (MixedRealityCameraProfile_t3EFE29D7BC4D250543D92ABF6EFFF831E219F35F* __this, const RuntimeMethod* method) 
{
	{
		// public int TransparentQualityLevel => transparentQualityLevel;
		int32_t L_0 = __this->___transparentQualityLevel_15;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* MixedRealityCameraSystem_get_SourceName_m95799C157BC6F1812EDCA39DFC66860B4A716B5B_inline (MixedRealityCameraSystem_t1280EF5F551F65DA92CEACC237C34D4CF208E09A* __this, const RuntimeMethod* method) 
{
	{
		// public string SourceName { get; } = "Mixed Reality Camera System";
		String_t* L_0 = __this->___U3CSourceNameU3Ek__BackingField_26;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_Abs_mEF48B2D15BEC6663A575693F563C6DC42C8135AE_inline (int32_t ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___value0;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = il2cpp_codegen_abs(L_0);
		V_0 = L_1;
		goto IL_000a;
	}

IL_000a:
	{
		int32_t L_2 = V_0;
		return L_2;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Quaternion_op_Equality_m3DF1D708D3A0AFB11EACF42A9C068EF6DC508FBB_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___lhs0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rhs1, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = ___lhs0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_1 = ___rhs1;
		float L_2;
		L_2 = Quaternion_Dot_m4A80D03D7B7DEC054E2175E53D072675649C6713_inline(L_0, L_1, NULL);
		bool L_3;
		L_3 = Quaternion_IsEqualUsingDot_m5C6AC5F5C56B27C25DDF612BEEF40F28CA44CA31_inline(L_2, NULL);
		V_0 = L_3;
		goto IL_0010;
	}

IL_0010:
	{
		bool L_4 = V_0;
		return L_4;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Quaternion_Dot_m4A80D03D7B7DEC054E2175E53D072675649C6713_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___a0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___b1, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = ___a0;
		float L_1 = L_0.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_2 = ___b1;
		float L_3 = L_2.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_4 = ___a0;
		float L_5 = L_4.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_6 = ___b1;
		float L_7 = L_6.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_8 = ___a0;
		float L_9 = L_8.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_10 = ___b1;
		float L_11 = L_10.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_12 = ___a0;
		float L_13 = L_12.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_14 = ___b1;
		float L_15 = L_14.___w_3;
		V_0 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_1, L_3)), ((float)il2cpp_codegen_multiply(L_5, L_7)))), ((float)il2cpp_codegen_multiply(L_9, L_11)))), ((float)il2cpp_codegen_multiply(L_13, L_15))));
		goto IL_003b;
	}

IL_003b:
	{
		float L_16 = V_0;
		return L_16;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Quaternion_IsEqualUsingDot_m5C6AC5F5C56B27C25DDF612BEEF40F28CA44CA31_inline (float ___dot0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		float L_0 = ___dot0;
		V_0 = (bool)((((float)L_0) > ((float)(0.999998987f)))? 1 : 0);
		goto IL_000c;
	}

IL_000c:
	{
		bool L_1 = V_0;
		return L_1;
	}
}
