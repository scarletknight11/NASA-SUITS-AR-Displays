#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


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

// System.Collections.Generic.IReadOnlyDictionary`2<System.Int32,Microsoft.MixedReality.Toolkit.Experimental.SpatialAwareness.SpatialAwarenessSceneObject>
struct IReadOnlyDictionary_2_t61DC7F24FECB5DA0A0D4DDCF113831A6C61D4FB3;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// Microsoft.MixedReality.Toolkit.BaseMixedRealityProfile
struct BaseMixedRealityProfile_tB4FDEF58FFD17796C0DB7241630B71CDF38FA1D4;
// Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialAwarenessObserverProfile
struct BaseSpatialAwarenessObserverProfile_t7A50E95DBFF01391175C2D418C1ABB3C21F43225;
// Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialObserver
struct BaseSpatialObserver_tFBE4A1B3D5FCCB85BD0DC39709C1FCB7085D797B;
// Microsoft.MixedReality.Toolkit.IMixedRealityServiceRegistrar
struct IMixedRealityServiceRegistrar_t4B893B7CDAAC977211D826D02C8522ECA327D715;
// Microsoft.MixedReality.Toolkit.SpatialAwareness.IMixedRealitySpatialAwarenessSystem
struct IMixedRealitySpatialAwarenessSystem_tF5F2975ACCFD98470DF1D17EC3850A257BF28817;
// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// Microsoft.MixedReality.Toolkit.WindowsSceneUnderstanding.Experimental.SceneUnderstandingObserverProfile
struct SceneUnderstandingObserverProfile_tD26D3C15007C02CBA3D566888F628E051B3C7B69;
// System.String
struct String_t;
// UnityEngine.TextAsset
struct TextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// Microsoft.MixedReality.Toolkit.WindowsSceneUnderstanding.Experimental.WindowsSceneUnderstandingObserver
struct WindowsSceneUnderstandingObserver_t4C9B4E6A419AF0F50E32C76544915E4A8591B739;

IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SceneUnderstandingObserverProfile_tD26D3C15007C02CBA3D566888F628E051B3C7B69_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteralBD0A92AF1E766DFCDF7986ADF733DD6F143EED0B;
IL2CPP_EXTERN_C String_t* _stringLiteralBF74DAF63DFBBFE944944E5B82F675D0B045EC0D;
IL2CPP_EXTERN_C String_t* _stringLiteralD8638A036277D99E851CF95C6DE4FE10A47DE9B8;

struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_t08B1A98C44B85FF3EE4CD0FB3D2B55B858AA7F23 
{
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

// System.Byte
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3 
{
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;
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

// UnityEngine.Vector2Int
struct Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A 
{
	// System.Int32 UnityEngine.Vector2Int::m_X
	int32_t ___m_X_0;
	// System.Int32 UnityEngine.Vector2Int::m_Y
	int32_t ___m_Y_1;
};

struct Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A_StaticFields
{
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Zero
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___s_Zero_2;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_One
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___s_One_3;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Up
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___s_Up_4;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Down
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___s_Down_5;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Left
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___s_Left_6;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Right
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___s_Right_7;
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

// Microsoft.MixedReality.Toolkit.BaseDataProvider`1<Microsoft.MixedReality.Toolkit.SpatialAwareness.IMixedRealitySpatialAwarenessSystem>
struct BaseDataProvider_1_tD2C6659D94D07FC49556BA26F6C62210EACE7F30  : public BaseService_tB7EC5C0F60DC5EE2DA122A608226D3887B6421D0
{
	// Microsoft.MixedReality.Toolkit.IMixedRealityServiceRegistrar Microsoft.MixedReality.Toolkit.BaseDataProvider`1::<Registrar>k__BackingField
	RuntimeObject* ___U3CRegistrarU3Ek__BackingField_12;
	// T Microsoft.MixedReality.Toolkit.BaseDataProvider`1::<Service>k__BackingField
	RuntimeObject* ___U3CServiceU3Ek__BackingField_13;
};

// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
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

// UnityEngine.TextAsset
struct TextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// Microsoft.MixedReality.Toolkit.BaseMixedRealityProfile
struct BaseMixedRealityProfile_tB4FDEF58FFD17796C0DB7241630B71CDF38FA1D4  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
	// System.Boolean Microsoft.MixedReality.Toolkit.BaseMixedRealityProfile::isCustomProfile
	bool ___isCustomProfile_4;
};

// Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialObserver
struct BaseSpatialObserver_tFBE4A1B3D5FCCB85BD0DC39709C1FCB7085D797B  : public BaseDataProvider_1_tD2C6659D94D07FC49556BA26F6C62210EACE7F30
{
	// System.UInt32 Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialObserver::<SourceId>k__BackingField
	uint32_t ___U3CSourceIdU3Ek__BackingField_15;
	// System.String Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialObserver::<SourceName>k__BackingField
	String_t* ___U3CSourceNameU3Ek__BackingField_16;
	// Microsoft.MixedReality.Toolkit.Utilities.AutoStartBehavior Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialObserver::<StartupBehavior>k__BackingField
	int32_t ___U3CStartupBehaviorU3Ek__BackingField_17;
	// System.Int32 Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialObserver::<DefaultPhysicsLayer>k__BackingField
	int32_t ___U3CDefaultPhysicsLayerU3Ek__BackingField_18;
	// System.Boolean Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialObserver::<IsRunning>k__BackingField
	bool ___U3CIsRunningU3Ek__BackingField_19;
	// System.Boolean Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialObserver::<IsStationaryObserver>k__BackingField
	bool ___U3CIsStationaryObserverU3Ek__BackingField_20;
	// UnityEngine.Quaternion Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialObserver::<ObserverRotation>k__BackingField
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___U3CObserverRotationU3Ek__BackingField_21;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialObserver::<ObserverOrigin>k__BackingField
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CObserverOriginU3Ek__BackingField_22;
	// Microsoft.MixedReality.Toolkit.Utilities.VolumeType Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialObserver::<ObserverVolumeType>k__BackingField
	int32_t ___U3CObserverVolumeTypeU3Ek__BackingField_23;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialObserver::<ObservationExtents>k__BackingField
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CObservationExtentsU3Ek__BackingField_24;
	// System.Single Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialObserver::<UpdateInterval>k__BackingField
	float ___U3CUpdateIntervalU3Ek__BackingField_25;
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

// Microsoft.MixedReality.Toolkit.WindowsSceneUnderstanding.Experimental.WindowsSceneUnderstandingObserver
struct WindowsSceneUnderstandingObserver_t4C9B4E6A419AF0F50E32C76544915E4A8591B739  : public BaseSpatialObserver_tFBE4A1B3D5FCCB85BD0DC39709C1FCB7085D797B
{
	// Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessSurfaceTypes Microsoft.MixedReality.Toolkit.WindowsSceneUnderstanding.Experimental.WindowsSceneUnderstandingObserver::<SurfaceTypes>k__BackingField
	int32_t ___U3CSurfaceTypesU3Ek__BackingField_26;
	// System.Boolean Microsoft.MixedReality.Toolkit.WindowsSceneUnderstanding.Experimental.WindowsSceneUnderstandingObserver::<ShouldLoadFromFile>k__BackingField
	bool ___U3CShouldLoadFromFileU3Ek__BackingField_27;
	// System.Int32 Microsoft.MixedReality.Toolkit.WindowsSceneUnderstanding.Experimental.WindowsSceneUnderstandingObserver::<InstantiationBatchRate>k__BackingField
	int32_t ___U3CInstantiationBatchRateU3Ek__BackingField_28;
	// System.Boolean Microsoft.MixedReality.Toolkit.WindowsSceneUnderstanding.Experimental.WindowsSceneUnderstandingObserver::<InferRegions>k__BackingField
	bool ___U3CInferRegionsU3Ek__BackingField_29;
	// System.Boolean Microsoft.MixedReality.Toolkit.WindowsSceneUnderstanding.Experimental.WindowsSceneUnderstandingObserver::<RequestMeshData>k__BackingField
	bool ___U3CRequestMeshDataU3Ek__BackingField_30;
	// System.Boolean Microsoft.MixedReality.Toolkit.WindowsSceneUnderstanding.Experimental.WindowsSceneUnderstandingObserver::<RequestPlaneData>k__BackingField
	bool ___U3CRequestPlaneDataU3Ek__BackingField_31;
	// System.Boolean Microsoft.MixedReality.Toolkit.WindowsSceneUnderstanding.Experimental.WindowsSceneUnderstandingObserver::<RequestOcclusionMask>k__BackingField
	bool ___U3CRequestOcclusionMaskU3Ek__BackingField_32;
	// System.Boolean Microsoft.MixedReality.Toolkit.WindowsSceneUnderstanding.Experimental.WindowsSceneUnderstandingObserver::<UsePersistentObjects>k__BackingField
	bool ___U3CUsePersistentObjectsU3Ek__BackingField_33;
	// System.Single Microsoft.MixedReality.Toolkit.WindowsSceneUnderstanding.Experimental.WindowsSceneUnderstandingObserver::<QueryRadius>k__BackingField
	float ___U3CQueryRadiusU3Ek__BackingField_34;
	// UnityEngine.Vector2Int Microsoft.MixedReality.Toolkit.WindowsSceneUnderstanding.Experimental.WindowsSceneUnderstandingObserver::<OcclusionMaskResolution>k__BackingField
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___U3COcclusionMaskResolutionU3Ek__BackingField_35;
	// System.Boolean Microsoft.MixedReality.Toolkit.WindowsSceneUnderstanding.Experimental.WindowsSceneUnderstandingObserver::<CreateGameObjects>k__BackingField
	bool ___U3CCreateGameObjectsU3Ek__BackingField_36;
	// System.Boolean Microsoft.MixedReality.Toolkit.WindowsSceneUnderstanding.Experimental.WindowsSceneUnderstandingObserver::<AutoUpdate>k__BackingField
	bool ___U3CAutoUpdateU3Ek__BackingField_37;
	// System.Boolean Microsoft.MixedReality.Toolkit.WindowsSceneUnderstanding.Experimental.WindowsSceneUnderstandingObserver::<OrientScene>k__BackingField
	bool ___U3COrientSceneU3Ek__BackingField_38;
	// Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessMeshLevelOfDetail Microsoft.MixedReality.Toolkit.WindowsSceneUnderstanding.Experimental.WindowsSceneUnderstandingObserver::<WorldMeshLevelOfDetail>k__BackingField
	int32_t ___U3CWorldMeshLevelOfDetailU3Ek__BackingField_39;
	// System.Single Microsoft.MixedReality.Toolkit.WindowsSceneUnderstanding.Experimental.WindowsSceneUnderstandingObserver::<FirstAutoUpdateDelay>k__BackingField
	float ___U3CFirstAutoUpdateDelayU3Ek__BackingField_40;
	// System.Boolean Microsoft.MixedReality.Toolkit.WindowsSceneUnderstanding.Experimental.WindowsSceneUnderstandingObserver::<UpdateOnceInitialized>k__BackingField
	bool ___U3CUpdateOnceInitializedU3Ek__BackingField_41;
	// UnityEngine.Material Microsoft.MixedReality.Toolkit.WindowsSceneUnderstanding.Experimental.WindowsSceneUnderstandingObserver::<DefaultMaterial>k__BackingField
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___U3CDefaultMaterialU3Ek__BackingField_42;
	// UnityEngine.Material Microsoft.MixedReality.Toolkit.WindowsSceneUnderstanding.Experimental.WindowsSceneUnderstandingObserver::<DefaultWorldMeshMaterial>k__BackingField
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___U3CDefaultWorldMeshMaterialU3Ek__BackingField_43;
	// System.Byte[] Microsoft.MixedReality.Toolkit.WindowsSceneUnderstanding.Experimental.WindowsSceneUnderstandingObserver::sceneBytes
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___sceneBytes_44;
	// UnityEngine.TextAsset Microsoft.MixedReality.Toolkit.WindowsSceneUnderstanding.Experimental.WindowsSceneUnderstandingObserver::serializedScene
	TextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69* ___serializedScene_45;
};

// Microsoft.MixedReality.Toolkit.WindowsSceneUnderstanding.Experimental.SceneUnderstandingObserverProfile
struct SceneUnderstandingObserverProfile_tD26D3C15007C02CBA3D566888F628E051B3C7B69  : public BaseSpatialAwarenessObserverProfile_t7A50E95DBFF01391175C2D418C1ABB3C21F43225
{
	// System.Boolean Microsoft.MixedReality.Toolkit.WindowsSceneUnderstanding.Experimental.SceneUnderstandingObserverProfile::updateOnceInitialized
	bool ___updateOnceInitialized_10;
	// System.Boolean Microsoft.MixedReality.Toolkit.WindowsSceneUnderstanding.Experimental.SceneUnderstandingObserverProfile::autoUpdate
	bool ___autoUpdate_11;
	// System.Int32 Microsoft.MixedReality.Toolkit.WindowsSceneUnderstanding.Experimental.SceneUnderstandingObserverProfile::defaultPhysicsLayer
	int32_t ___defaultPhysicsLayer_12;
	// Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessSurfaceTypes Microsoft.MixedReality.Toolkit.WindowsSceneUnderstanding.Experimental.SceneUnderstandingObserverProfile::surfaceTypes
	int32_t ___surfaceTypes_13;
	// System.Int32 Microsoft.MixedReality.Toolkit.WindowsSceneUnderstanding.Experimental.SceneUnderstandingObserverProfile::instantiationBatchRate
	int32_t ___instantiationBatchRate_14;
	// UnityEngine.Material Microsoft.MixedReality.Toolkit.WindowsSceneUnderstanding.Experimental.SceneUnderstandingObserverProfile::defaultMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___defaultMaterial_15;
	// UnityEngine.Material Microsoft.MixedReality.Toolkit.WindowsSceneUnderstanding.Experimental.SceneUnderstandingObserverProfile::defaultWorldMeshMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___defaultWorldMeshMaterial_16;
	// System.Boolean Microsoft.MixedReality.Toolkit.WindowsSceneUnderstanding.Experimental.SceneUnderstandingObserverProfile::shouldLoadFromFile
	bool ___shouldLoadFromFile_17;
	// UnityEngine.TextAsset Microsoft.MixedReality.Toolkit.WindowsSceneUnderstanding.Experimental.SceneUnderstandingObserverProfile::serializedScene
	TextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69* ___serializedScene_18;
	// System.Boolean Microsoft.MixedReality.Toolkit.WindowsSceneUnderstanding.Experimental.SceneUnderstandingObserverProfile::createGameObjects
	bool ___createGameObjects_19;
	// System.Boolean Microsoft.MixedReality.Toolkit.WindowsSceneUnderstanding.Experimental.SceneUnderstandingObserverProfile::requestPlaneData
	bool ___requestPlaneData_20;
	// System.Boolean Microsoft.MixedReality.Toolkit.WindowsSceneUnderstanding.Experimental.SceneUnderstandingObserverProfile::requestMeshData
	bool ___requestMeshData_21;
	// System.Boolean Microsoft.MixedReality.Toolkit.WindowsSceneUnderstanding.Experimental.SceneUnderstandingObserverProfile::inferRegions
	bool ___inferRegions_22;
	// System.Single Microsoft.MixedReality.Toolkit.WindowsSceneUnderstanding.Experimental.SceneUnderstandingObserverProfile::firstAutoUpdateDelay
	float ___firstAutoUpdateDelay_23;
	// Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessMeshLevelOfDetail Microsoft.MixedReality.Toolkit.WindowsSceneUnderstanding.Experimental.SceneUnderstandingObserverProfile::worldMeshLevelOfDetail
	int32_t ___worldMeshLevelOfDetail_24;
	// System.Boolean Microsoft.MixedReality.Toolkit.WindowsSceneUnderstanding.Experimental.SceneUnderstandingObserverProfile::usePersistentObjects
	bool ___usePersistentObjects_25;
	// System.Single Microsoft.MixedReality.Toolkit.WindowsSceneUnderstanding.Experimental.SceneUnderstandingObserverProfile::queryRadius
	float ___queryRadius_26;
	// System.Boolean Microsoft.MixedReality.Toolkit.WindowsSceneUnderstanding.Experimental.SceneUnderstandingObserverProfile::requestOcclusionMask
	bool ___requestOcclusionMask_27;
	// UnityEngine.Vector2Int Microsoft.MixedReality.Toolkit.WindowsSceneUnderstanding.Experimental.SceneUnderstandingObserverProfile::occlusionMaskResolution
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___occlusionMaskResolution_28;
	// System.Boolean Microsoft.MixedReality.Toolkit.WindowsSceneUnderstanding.Experimental.SceneUnderstandingObserverProfile::orientScene
	bool ___orientScene_29;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031  : public RuntimeArray
{
	ALIGN_FIELD (8) uint8_t m_Items[1];

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



// System.Void UnityEngine.Vector2Int::.ctor(System.Int32,System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2Int__ctor_mC20D1312133EB8CB63EC11067088B043660F11CE_inline (Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A* __this, int32_t ___x0, int32_t ___y1, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialAwarenessObserverProfile::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseSpatialAwarenessObserverProfile__ctor_mFC34E8951DB7C5E23819BD6AB859B6A234A59FF8 (BaseSpatialAwarenessObserverProfile_t7A50E95DBFF01391175C2D418C1ABB3C21F43225* __this, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialObserver::.ctor(Microsoft.MixedReality.Toolkit.SpatialAwareness.IMixedRealitySpatialAwarenessSystem,System.String,System.UInt32,Microsoft.MixedReality.Toolkit.BaseMixedRealityProfile)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseSpatialObserver__ctor_mD8520FF99705757ED4CB6BB695424BEAF1CFC71D (BaseSpatialObserver_tFBE4A1B3D5FCCB85BD0DC39709C1FCB7085D797B* __this, RuntimeObject* ___spatialAwarenessSystem0, String_t* ___name1, uint32_t ___priority2, BaseMixedRealityProfile_tB4FDEF58FFD17796C0DB7241630B71CDF38FA1D4* ___profile3, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.WindowsSceneUnderstanding.Experimental.WindowsSceneUnderstandingObserver::ReadProfile()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsSceneUnderstandingObserver_ReadProfile_mC068710F537C7F93E265DC40000DC791A780AEE3 (WindowsSceneUnderstandingObserver_t4C9B4E6A419AF0F50E32C76544915E4A8591B739* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_m059825802BB6AF7EA9693FEBEEB0D85F59A3E38E (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.Boolean Microsoft.MixedReality.Toolkit.WindowsSceneUnderstanding.Experimental.SceneUnderstandingObserverProfile::get_AutoUpdate()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool SceneUnderstandingObserverProfile_get_AutoUpdate_m8C2264D4CCC4D67CE3CD0AB9B66E46C8A9C3E54C_inline (SceneUnderstandingObserverProfile_tD26D3C15007C02CBA3D566888F628E051B3C7B69* __this, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.WindowsSceneUnderstanding.Experimental.WindowsSceneUnderstandingObserver::set_AutoUpdate(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void WindowsSceneUnderstandingObserver_set_AutoUpdate_m61C7DB4F698DFE45320B604AB08C0933F450EB3F_inline (WindowsSceneUnderstandingObserver_t4C9B4E6A419AF0F50E32C76544915E4A8591B739* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Boolean Microsoft.MixedReality.Toolkit.WindowsSceneUnderstanding.Experimental.SceneUnderstandingObserverProfile::get_UpdateOnceInitialized()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool SceneUnderstandingObserverProfile_get_UpdateOnceInitialized_mDEF97D452AA885A9C62CC8B10F7B902625E3DACB_inline (SceneUnderstandingObserverProfile_tD26D3C15007C02CBA3D566888F628E051B3C7B69* __this, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.WindowsSceneUnderstanding.Experimental.WindowsSceneUnderstandingObserver::set_UpdateOnceInitialized(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void WindowsSceneUnderstandingObserver_set_UpdateOnceInitialized_m0D156C09B21671BB88503FB559AF6B7E08038BEA_inline (WindowsSceneUnderstandingObserver_t4C9B4E6A419AF0F50E32C76544915E4A8591B739* __this, bool ___value0, const RuntimeMethod* method) ;
// UnityEngine.Material Microsoft.MixedReality.Toolkit.WindowsSceneUnderstanding.Experimental.SceneUnderstandingObserverProfile::get_DefaultMaterial()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* SceneUnderstandingObserverProfile_get_DefaultMaterial_m709F8F2D1F911CAFE2D1240B0D2E9C97AC6A0FA9_inline (SceneUnderstandingObserverProfile_tD26D3C15007C02CBA3D566888F628E051B3C7B69* __this, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.WindowsSceneUnderstanding.Experimental.WindowsSceneUnderstandingObserver::set_DefaultMaterial(UnityEngine.Material)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void WindowsSceneUnderstandingObserver_set_DefaultMaterial_m7630F5AAF8926DBACA0CD8D0981524A7514FEA65_inline (WindowsSceneUnderstandingObserver_t4C9B4E6A419AF0F50E32C76544915E4A8591B739* __this, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___value0, const RuntimeMethod* method) ;
// UnityEngine.Material Microsoft.MixedReality.Toolkit.WindowsSceneUnderstanding.Experimental.SceneUnderstandingObserverProfile::get_DefaultWorldMeshMaterial()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* SceneUnderstandingObserverProfile_get_DefaultWorldMeshMaterial_m2B85347F7F0FF4CCF65F7AFE44021FE466A6A31C_inline (SceneUnderstandingObserverProfile_tD26D3C15007C02CBA3D566888F628E051B3C7B69* __this, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.WindowsSceneUnderstanding.Experimental.WindowsSceneUnderstandingObserver::set_DefaultWorldMeshMaterial(UnityEngine.Material)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void WindowsSceneUnderstandingObserver_set_DefaultWorldMeshMaterial_m238BFDD79B0A46744DAE7B7D71D4248327D7480C_inline (WindowsSceneUnderstandingObserver_t4C9B4E6A419AF0F50E32C76544915E4A8591B739* __this, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___value0, const RuntimeMethod* method) ;
// Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessSurfaceTypes Microsoft.MixedReality.Toolkit.WindowsSceneUnderstanding.Experimental.SceneUnderstandingObserverProfile::get_SurfaceTypes()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t SceneUnderstandingObserverProfile_get_SurfaceTypes_m36F398EE6AA9406138A074F64AEB6951DE5DA282_inline (SceneUnderstandingObserverProfile_tD26D3C15007C02CBA3D566888F628E051B3C7B69* __this, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.WindowsSceneUnderstanding.Experimental.WindowsSceneUnderstandingObserver::set_SurfaceTypes(Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessSurfaceTypes)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void WindowsSceneUnderstandingObserver_set_SurfaceTypes_m2BE73486F54848425595D5025F8B44EF67F0C718_inline (WindowsSceneUnderstandingObserver_t4C9B4E6A419AF0F50E32C76544915E4A8591B739* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Boolean Microsoft.MixedReality.Toolkit.WindowsSceneUnderstanding.Experimental.SceneUnderstandingObserverProfile::get_RequestMeshData()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool SceneUnderstandingObserverProfile_get_RequestMeshData_m0CE2047B61669E6434A4C21B8A1B033B6898DF61_inline (SceneUnderstandingObserverProfile_tD26D3C15007C02CBA3D566888F628E051B3C7B69* __this, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.WindowsSceneUnderstanding.Experimental.WindowsSceneUnderstandingObserver::set_RequestMeshData(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void WindowsSceneUnderstandingObserver_set_RequestMeshData_mA0D40C0AF79A6191BAD7F622B1EA8C22921EB047_inline (WindowsSceneUnderstandingObserver_t4C9B4E6A419AF0F50E32C76544915E4A8591B739* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Boolean Microsoft.MixedReality.Toolkit.WindowsSceneUnderstanding.Experimental.SceneUnderstandingObserverProfile::get_RequestPlaneData()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool SceneUnderstandingObserverProfile_get_RequestPlaneData_m97DE0185ECD45BAB146E90D4FA584146DEFF29C7_inline (SceneUnderstandingObserverProfile_tD26D3C15007C02CBA3D566888F628E051B3C7B69* __this, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.WindowsSceneUnderstanding.Experimental.WindowsSceneUnderstandingObserver::set_RequestPlaneData(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void WindowsSceneUnderstandingObserver_set_RequestPlaneData_m288420998D6DD8AC0A4C2C3F98546D327E358171_inline (WindowsSceneUnderstandingObserver_t4C9B4E6A419AF0F50E32C76544915E4A8591B739* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Boolean Microsoft.MixedReality.Toolkit.WindowsSceneUnderstanding.Experimental.SceneUnderstandingObserverProfile::get_InferRegions()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool SceneUnderstandingObserverProfile_get_InferRegions_mD28C3BEA6E3A71E4199E4877155012BC23F5884A_inline (SceneUnderstandingObserverProfile_tD26D3C15007C02CBA3D566888F628E051B3C7B69* __this, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.WindowsSceneUnderstanding.Experimental.WindowsSceneUnderstandingObserver::set_InferRegions(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void WindowsSceneUnderstandingObserver_set_InferRegions_m669D8AF0E8D1C112215F3502585BC5D118EB351C_inline (WindowsSceneUnderstandingObserver_t4C9B4E6A419AF0F50E32C76544915E4A8591B739* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Boolean Microsoft.MixedReality.Toolkit.WindowsSceneUnderstanding.Experimental.SceneUnderstandingObserverProfile::get_CreateGameObjects()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool SceneUnderstandingObserverProfile_get_CreateGameObjects_mB11CC7E4AC8B50BE0D7D0951FDE214A10BE1311E_inline (SceneUnderstandingObserverProfile_tD26D3C15007C02CBA3D566888F628E051B3C7B69* __this, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.WindowsSceneUnderstanding.Experimental.WindowsSceneUnderstandingObserver::set_CreateGameObjects(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void WindowsSceneUnderstandingObserver_set_CreateGameObjects_mA3620FD8A6E652A84B9DD258E13977B8D8415539_inline (WindowsSceneUnderstandingObserver_t4C9B4E6A419AF0F50E32C76544915E4A8591B739* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Boolean Microsoft.MixedReality.Toolkit.WindowsSceneUnderstanding.Experimental.SceneUnderstandingObserverProfile::get_UsePersistentObjects()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool SceneUnderstandingObserverProfile_get_UsePersistentObjects_m4DD55204939A1FC18005885CE60F83D4708B3FBD_inline (SceneUnderstandingObserverProfile_tD26D3C15007C02CBA3D566888F628E051B3C7B69* __this, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.WindowsSceneUnderstanding.Experimental.WindowsSceneUnderstandingObserver::set_UsePersistentObjects(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void WindowsSceneUnderstandingObserver_set_UsePersistentObjects_m60EA3E443913AC97BA43D4950E37972E102CD4FE_inline (WindowsSceneUnderstandingObserver_t4C9B4E6A419AF0F50E32C76544915E4A8591B739* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Single Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialAwarenessObserverProfile::get_UpdateInterval()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float BaseSpatialAwarenessObserverProfile_get_UpdateInterval_m3AE1E7839241F4F5B2CBFEAFE987D53835F1C751_inline (BaseSpatialAwarenessObserverProfile_t7A50E95DBFF01391175C2D418C1ABB3C21F43225* __this, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialObserver::set_UpdateInterval(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BaseSpatialObserver_set_UpdateInterval_m6D940C69DFEA73CDD69A67FAE94A75E9AE7D3E7C_inline (BaseSpatialObserver_tFBE4A1B3D5FCCB85BD0DC39709C1FCB7085D797B* __this, float ___value0, const RuntimeMethod* method) ;
// System.Single Microsoft.MixedReality.Toolkit.WindowsSceneUnderstanding.Experimental.SceneUnderstandingObserverProfile::get_FirstAutoUpdateDelay()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float SceneUnderstandingObserverProfile_get_FirstAutoUpdateDelay_m7E902EA746E71B953DA38A32316B36E8F16F6547_inline (SceneUnderstandingObserverProfile_tD26D3C15007C02CBA3D566888F628E051B3C7B69* __this, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.WindowsSceneUnderstanding.Experimental.WindowsSceneUnderstandingObserver::set_FirstAutoUpdateDelay(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void WindowsSceneUnderstandingObserver_set_FirstAutoUpdateDelay_m0C75AE0D1CEA83BBCAB5C96DC8DD37F269B33083_inline (WindowsSceneUnderstandingObserver_t4C9B4E6A419AF0F50E32C76544915E4A8591B739* __this, float ___value0, const RuntimeMethod* method) ;
// System.Boolean Microsoft.MixedReality.Toolkit.WindowsSceneUnderstanding.Experimental.SceneUnderstandingObserverProfile::get_ShouldLoadFromFile()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool SceneUnderstandingObserverProfile_get_ShouldLoadFromFile_mC7F9BD425930854EF25C0308305C0C181F46468E_inline (SceneUnderstandingObserverProfile_tD26D3C15007C02CBA3D566888F628E051B3C7B69* __this, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.WindowsSceneUnderstanding.Experimental.WindowsSceneUnderstandingObserver::set_ShouldLoadFromFile(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void WindowsSceneUnderstandingObserver_set_ShouldLoadFromFile_m65A0FFBDB80179AFB3900DAFBA1D0A52E6B603D3_inline (WindowsSceneUnderstandingObserver_t4C9B4E6A419AF0F50E32C76544915E4A8591B739* __this, bool ___value0, const RuntimeMethod* method) ;
// UnityEngine.TextAsset Microsoft.MixedReality.Toolkit.WindowsSceneUnderstanding.Experimental.SceneUnderstandingObserverProfile::get_SerializedScene()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69* SceneUnderstandingObserverProfile_get_SerializedScene_m0F8BB62674E78AD401CF0ECC5E8616AF342B7D7E_inline (SceneUnderstandingObserverProfile_tD26D3C15007C02CBA3D566888F628E051B3C7B69* __this, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.WindowsSceneUnderstanding.Experimental.WindowsSceneUnderstandingObserver::set_SerializedScene(UnityEngine.TextAsset)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsSceneUnderstandingObserver_set_SerializedScene_m7293727F6EA34B2E22BB66086F3A5D7EE65CC078 (WindowsSceneUnderstandingObserver_t4C9B4E6A419AF0F50E32C76544915E4A8591B739* __this, TextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69* ___value0, const RuntimeMethod* method) ;
// Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessMeshLevelOfDetail Microsoft.MixedReality.Toolkit.WindowsSceneUnderstanding.Experimental.SceneUnderstandingObserverProfile::get_WorldMeshLevelOfDetail()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t SceneUnderstandingObserverProfile_get_WorldMeshLevelOfDetail_m34792C9335EAF624BB46E2029A0C22E858A941EB_inline (SceneUnderstandingObserverProfile_tD26D3C15007C02CBA3D566888F628E051B3C7B69* __this, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.WindowsSceneUnderstanding.Experimental.WindowsSceneUnderstandingObserver::set_WorldMeshLevelOfDetail(Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessMeshLevelOfDetail)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void WindowsSceneUnderstandingObserver_set_WorldMeshLevelOfDetail_m77E209BCC79F6D104F14877EF7EE8E0F6B566F8E_inline (WindowsSceneUnderstandingObserver_t4C9B4E6A419AF0F50E32C76544915E4A8591B739* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Int32 Microsoft.MixedReality.Toolkit.WindowsSceneUnderstanding.Experimental.SceneUnderstandingObserverProfile::get_InstantiationBatchRate()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t SceneUnderstandingObserverProfile_get_InstantiationBatchRate_m81E055B935823EF94FBB1EA63E2BB7D7784CACD3_inline (SceneUnderstandingObserverProfile_tD26D3C15007C02CBA3D566888F628E051B3C7B69* __this, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.WindowsSceneUnderstanding.Experimental.WindowsSceneUnderstandingObserver::set_InstantiationBatchRate(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void WindowsSceneUnderstandingObserver_set_InstantiationBatchRate_m4014C164A43237F9AC577910BC9F588CC992FC26_inline (WindowsSceneUnderstandingObserver_t4C9B4E6A419AF0F50E32C76544915E4A8591B739* __this, int32_t ___value0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialAwarenessObserverProfile::get_ObservationExtents()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 BaseSpatialAwarenessObserverProfile_get_ObservationExtents_m3E05995AA3C492FA17BA656C8EEF1FB5D82C96FD_inline (BaseSpatialAwarenessObserverProfile_t7A50E95DBFF01391175C2D418C1ABB3C21F43225* __this, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialObserver::set_ObservationExtents(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BaseSpatialObserver_set_ObservationExtents_mB411BA3675C18D91CAC89279A6A87388050C1D9F_inline (BaseSpatialObserver_tFBE4A1B3D5FCCB85BD0DC39709C1FCB7085D797B* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Single Microsoft.MixedReality.Toolkit.WindowsSceneUnderstanding.Experimental.SceneUnderstandingObserverProfile::get_QueryRadius()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float SceneUnderstandingObserverProfile_get_QueryRadius_mA786922BB4BAB0DD5096D35582B4476C668127BA_inline (SceneUnderstandingObserverProfile_tD26D3C15007C02CBA3D566888F628E051B3C7B69* __this, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.WindowsSceneUnderstanding.Experimental.WindowsSceneUnderstandingObserver::set_QueryRadius(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void WindowsSceneUnderstandingObserver_set_QueryRadius_mB12638A56E3E2A4A2B2C195BA2A7642CA479A97B_inline (WindowsSceneUnderstandingObserver_t4C9B4E6A419AF0F50E32C76544915E4A8591B739* __this, float ___value0, const RuntimeMethod* method) ;
// System.Boolean Microsoft.MixedReality.Toolkit.WindowsSceneUnderstanding.Experimental.SceneUnderstandingObserverProfile::get_RequestOcclusionMask()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool SceneUnderstandingObserverProfile_get_RequestOcclusionMask_m7D6292807A90160CEAC104C04CEA0AB030002D2C_inline (SceneUnderstandingObserverProfile_tD26D3C15007C02CBA3D566888F628E051B3C7B69* __this, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.WindowsSceneUnderstanding.Experimental.WindowsSceneUnderstandingObserver::set_RequestOcclusionMask(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void WindowsSceneUnderstandingObserver_set_RequestOcclusionMask_mCB080214BB912945C820F0EB1BC007897B7E8276_inline (WindowsSceneUnderstandingObserver_t4C9B4E6A419AF0F50E32C76544915E4A8591B739* __this, bool ___value0, const RuntimeMethod* method) ;
// UnityEngine.Vector2Int Microsoft.MixedReality.Toolkit.WindowsSceneUnderstanding.Experimental.SceneUnderstandingObserverProfile::get_OcclusionMaskResolution()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A SceneUnderstandingObserverProfile_get_OcclusionMaskResolution_mB493EA633395F80E312B7C6752867CF7D2142C47_inline (SceneUnderstandingObserverProfile_tD26D3C15007C02CBA3D566888F628E051B3C7B69* __this, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.WindowsSceneUnderstanding.Experimental.WindowsSceneUnderstandingObserver::set_OcclusionMaskResolution(UnityEngine.Vector2Int)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void WindowsSceneUnderstandingObserver_set_OcclusionMaskResolution_mF7A7C028E5ACC8FFC3BA0B907634A96EF4CF432D_inline (WindowsSceneUnderstandingObserver_t4C9B4E6A419AF0F50E32C76544915E4A8591B739* __this, Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___value0, const RuntimeMethod* method) ;
// System.Boolean Microsoft.MixedReality.Toolkit.WindowsSceneUnderstanding.Experimental.SceneUnderstandingObserverProfile::get_OrientScene()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool SceneUnderstandingObserverProfile_get_OrientScene_mAB7A77E9E0F7CFB2762007B3930DDB2C8814989E_inline (SceneUnderstandingObserverProfile_tD26D3C15007C02CBA3D566888F628E051B3C7B69* __this, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.WindowsSceneUnderstanding.Experimental.WindowsSceneUnderstandingObserver::set_OrientScene(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void WindowsSceneUnderstandingObserver_set_OrientScene_m6B3890BBF7DC9EE5A3709ACF05C2EB27892F32A5_inline (WindowsSceneUnderstandingObserver_t4C9B4E6A419AF0F50E32C76544915E4A8591B739* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Application::get_isPlaying()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Application_get_isPlaying_m0B3B501E1093739F8887A0DAC5F61D9CB49CC337 (const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogWarning(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogWarning_mEF15C6B17CE4E1FA7E379CDB82CE40FCD89A3F28 (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// System.Byte[] UnityEngine.TextAsset::get_bytes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* TextAsset_get_bytes_m244B31755642C9623B570FC96B9A04523B1E5178 (TextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline (const RuntimeMethod* method) ;
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
// System.Boolean Microsoft.MixedReality.Toolkit.WindowsSceneUnderstanding.Experimental.SceneUnderstandingObserverProfile::get_UpdateOnceInitialized()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SceneUnderstandingObserverProfile_get_UpdateOnceInitialized_mDEF97D452AA885A9C62CC8B10F7B902625E3DACB (SceneUnderstandingObserverProfile_tD26D3C15007C02CBA3D566888F628E051B3C7B69* __this, const RuntimeMethod* method) 
{
	{
		// public bool UpdateOnceInitialized => updateOnceInitialized;
		bool L_0 = __this->___updateOnceInitialized_10;
		return L_0;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.WindowsSceneUnderstanding.Experimental.SceneUnderstandingObserverProfile::get_AutoUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SceneUnderstandingObserverProfile_get_AutoUpdate_m8C2264D4CCC4D67CE3CD0AB9B66E46C8A9C3E54C (SceneUnderstandingObserverProfile_tD26D3C15007C02CBA3D566888F628E051B3C7B69* __this, const RuntimeMethod* method) 
{
	{
		// public bool AutoUpdate => autoUpdate;
		bool L_0 = __this->___autoUpdate_11;
		return L_0;
	}
}
// System.Int32 Microsoft.MixedReality.Toolkit.WindowsSceneUnderstanding.Experimental.SceneUnderstandingObserverProfile::get_DefaultPhysicsLayer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SceneUnderstandingObserverProfile_get_DefaultPhysicsLayer_m1A5E41ECC1EB9D36A90E10A515FED91469EBD2F7 (SceneUnderstandingObserverProfile_tD26D3C15007C02CBA3D566888F628E051B3C7B69* __this, const RuntimeMethod* method) 
{
	{
		// public int DefaultPhysicsLayer => defaultPhysicsLayer;
		int32_t L_0 = __this->___defaultPhysicsLayer_12;
		return L_0;
	}
}
// Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessSurfaceTypes Microsoft.MixedReality.Toolkit.WindowsSceneUnderstanding.Experimental.SceneUnderstandingObserverProfile::get_SurfaceTypes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SceneUnderstandingObserverProfile_get_SurfaceTypes_m36F398EE6AA9406138A074F64AEB6951DE5DA282 (SceneUnderstandingObserverProfile_tD26D3C15007C02CBA3D566888F628E051B3C7B69* __this, const RuntimeMethod* method) 
{
	{
		// public SpatialAwarenessSurfaceTypes SurfaceTypes => surfaceTypes;
		int32_t L_0 = __this->___surfaceTypes_13;
		return L_0;
	}
}
// System.Int32 Microsoft.MixedReality.Toolkit.WindowsSceneUnderstanding.Experimental.SceneUnderstandingObserverProfile::get_InstantiationBatchRate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SceneUnderstandingObserverProfile_get_InstantiationBatchRate_m81E055B935823EF94FBB1EA63E2BB7D7784CACD3 (SceneUnderstandingObserverProfile_tD26D3C15007C02CBA3D566888F628E051B3C7B69* __this, const RuntimeMethod* method) 
{
	{
		// public int InstantiationBatchRate => instantiationBatchRate;
		int32_t L_0 = __this->___instantiationBatchRate_14;
		return L_0;
	}
}
// UnityEngine.Material Microsoft.MixedReality.Toolkit.WindowsSceneUnderstanding.Experimental.SceneUnderstandingObserverProfile::get_DefaultMaterial()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* SceneUnderstandingObserverProfile_get_DefaultMaterial_m709F8F2D1F911CAFE2D1240B0D2E9C97AC6A0FA9 (SceneUnderstandingObserverProfile_tD26D3C15007C02CBA3D566888F628E051B3C7B69* __this, const RuntimeMethod* method) 
{
	{
		// public Material DefaultMaterial => defaultMaterial;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_0 = __this->___defaultMaterial_15;
		return L_0;
	}
}
// UnityEngine.Material Microsoft.MixedReality.Toolkit.WindowsSceneUnderstanding.Experimental.SceneUnderstandingObserverProfile::get_DefaultWorldMeshMaterial()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* SceneUnderstandingObserverProfile_get_DefaultWorldMeshMaterial_m2B85347F7F0FF4CCF65F7AFE44021FE466A6A31C (SceneUnderstandingObserverProfile_tD26D3C15007C02CBA3D566888F628E051B3C7B69* __this, const RuntimeMethod* method) 
{
	{
		// public Material DefaultWorldMeshMaterial => defaultWorldMeshMaterial;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_0 = __this->___defaultWorldMeshMaterial_16;
		return L_0;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.WindowsSceneUnderstanding.Experimental.SceneUnderstandingObserverProfile::get_ShouldLoadFromFile()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SceneUnderstandingObserverProfile_get_ShouldLoadFromFile_mC7F9BD425930854EF25C0308305C0C181F46468E (SceneUnderstandingObserverProfile_tD26D3C15007C02CBA3D566888F628E051B3C7B69* __this, const RuntimeMethod* method) 
{
	{
		// public bool ShouldLoadFromFile => shouldLoadFromFile;
		bool L_0 = __this->___shouldLoadFromFile_17;
		return L_0;
	}
}
// UnityEngine.TextAsset Microsoft.MixedReality.Toolkit.WindowsSceneUnderstanding.Experimental.SceneUnderstandingObserverProfile::get_SerializedScene()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69* SceneUnderstandingObserverProfile_get_SerializedScene_m0F8BB62674E78AD401CF0ECC5E8616AF342B7D7E (SceneUnderstandingObserverProfile_tD26D3C15007C02CBA3D566888F628E051B3C7B69* __this, const RuntimeMethod* method) 
{
	{
		// public TextAsset SerializedScene => serializedScene;
		TextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69* L_0 = __this->___serializedScene_18;
		return L_0;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.WindowsSceneUnderstanding.Experimental.SceneUnderstandingObserverProfile::get_CreateGameObjects()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SceneUnderstandingObserverProfile_get_CreateGameObjects_mB11CC7E4AC8B50BE0D7D0951FDE214A10BE1311E (SceneUnderstandingObserverProfile_tD26D3C15007C02CBA3D566888F628E051B3C7B69* __this, const RuntimeMethod* method) 
{
	{
		// public bool CreateGameObjects => createGameObjects;
		bool L_0 = __this->___createGameObjects_19;
		return L_0;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.WindowsSceneUnderstanding.Experimental.SceneUnderstandingObserverProfile::get_RequestPlaneData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SceneUnderstandingObserverProfile_get_RequestPlaneData_m97DE0185ECD45BAB146E90D4FA584146DEFF29C7 (SceneUnderstandingObserverProfile_tD26D3C15007C02CBA3D566888F628E051B3C7B69* __this, const RuntimeMethod* method) 
{
	{
		// public bool RequestPlaneData => requestPlaneData;
		bool L_0 = __this->___requestPlaneData_20;
		return L_0;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.WindowsSceneUnderstanding.Experimental.SceneUnderstandingObserverProfile::get_RequestMeshData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SceneUnderstandingObserverProfile_get_RequestMeshData_m0CE2047B61669E6434A4C21B8A1B033B6898DF61 (SceneUnderstandingObserverProfile_tD26D3C15007C02CBA3D566888F628E051B3C7B69* __this, const RuntimeMethod* method) 
{
	{
		// public bool RequestMeshData => requestMeshData;
		bool L_0 = __this->___requestMeshData_21;
		return L_0;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.WindowsSceneUnderstanding.Experimental.SceneUnderstandingObserverProfile::get_InferRegions()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SceneUnderstandingObserverProfile_get_InferRegions_mD28C3BEA6E3A71E4199E4877155012BC23F5884A (SceneUnderstandingObserverProfile_tD26D3C15007C02CBA3D566888F628E051B3C7B69* __this, const RuntimeMethod* method) 
{
	{
		// public bool InferRegions => inferRegions;
		bool L_0 = __this->___inferRegions_22;
		return L_0;
	}
}
// System.Single Microsoft.MixedReality.Toolkit.WindowsSceneUnderstanding.Experimental.SceneUnderstandingObserverProfile::get_FirstAutoUpdateDelay()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float SceneUnderstandingObserverProfile_get_FirstAutoUpdateDelay_m7E902EA746E71B953DA38A32316B36E8F16F6547 (SceneUnderstandingObserverProfile_tD26D3C15007C02CBA3D566888F628E051B3C7B69* __this, const RuntimeMethod* method) 
{
	{
		// public float FirstAutoUpdateDelay => firstAutoUpdateDelay;
		float L_0 = __this->___firstAutoUpdateDelay_23;
		return L_0;
	}
}
// Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessMeshLevelOfDetail Microsoft.MixedReality.Toolkit.WindowsSceneUnderstanding.Experimental.SceneUnderstandingObserverProfile::get_WorldMeshLevelOfDetail()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SceneUnderstandingObserverProfile_get_WorldMeshLevelOfDetail_m34792C9335EAF624BB46E2029A0C22E858A941EB (SceneUnderstandingObserverProfile_tD26D3C15007C02CBA3D566888F628E051B3C7B69* __this, const RuntimeMethod* method) 
{
	{
		// public SpatialAwarenessMeshLevelOfDetail WorldMeshLevelOfDetail => worldMeshLevelOfDetail;
		int32_t L_0 = __this->___worldMeshLevelOfDetail_24;
		return L_0;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.WindowsSceneUnderstanding.Experimental.SceneUnderstandingObserverProfile::get_UsePersistentObjects()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SceneUnderstandingObserverProfile_get_UsePersistentObjects_m4DD55204939A1FC18005885CE60F83D4708B3FBD (SceneUnderstandingObserverProfile_tD26D3C15007C02CBA3D566888F628E051B3C7B69* __this, const RuntimeMethod* method) 
{
	{
		// public bool UsePersistentObjects => usePersistentObjects;
		bool L_0 = __this->___usePersistentObjects_25;
		return L_0;
	}
}
// System.Single Microsoft.MixedReality.Toolkit.WindowsSceneUnderstanding.Experimental.SceneUnderstandingObserverProfile::get_QueryRadius()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float SceneUnderstandingObserverProfile_get_QueryRadius_mA786922BB4BAB0DD5096D35582B4476C668127BA (SceneUnderstandingObserverProfile_tD26D3C15007C02CBA3D566888F628E051B3C7B69* __this, const RuntimeMethod* method) 
{
	{
		// public float QueryRadius => queryRadius;
		float L_0 = __this->___queryRadius_26;
		return L_0;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.WindowsSceneUnderstanding.Experimental.SceneUnderstandingObserverProfile::get_RequestOcclusionMask()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SceneUnderstandingObserverProfile_get_RequestOcclusionMask_m7D6292807A90160CEAC104C04CEA0AB030002D2C (SceneUnderstandingObserverProfile_tD26D3C15007C02CBA3D566888F628E051B3C7B69* __this, const RuntimeMethod* method) 
{
	{
		// public bool RequestOcclusionMask => requestOcclusionMask;
		bool L_0 = __this->___requestOcclusionMask_27;
		return L_0;
	}
}
// UnityEngine.Vector2Int Microsoft.MixedReality.Toolkit.WindowsSceneUnderstanding.Experimental.SceneUnderstandingObserverProfile::get_OcclusionMaskResolution()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A SceneUnderstandingObserverProfile_get_OcclusionMaskResolution_mB493EA633395F80E312B7C6752867CF7D2142C47 (SceneUnderstandingObserverProfile_tD26D3C15007C02CBA3D566888F628E051B3C7B69* __this, const RuntimeMethod* method) 
{
	{
		// public Vector2Int OcclusionMaskResolution => occlusionMaskResolution;
		Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A L_0 = __this->___occlusionMaskResolution_28;
		return L_0;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.WindowsSceneUnderstanding.Experimental.SceneUnderstandingObserverProfile::get_OrientScene()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SceneUnderstandingObserverProfile_get_OrientScene_mAB7A77E9E0F7CFB2762007B3930DDB2C8814989E (SceneUnderstandingObserverProfile_tD26D3C15007C02CBA3D566888F628E051B3C7B69* __this, const RuntimeMethod* method) 
{
	{
		// public bool OrientScene => orientScene;
		bool L_0 = __this->___orientScene_29;
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.WindowsSceneUnderstanding.Experimental.SceneUnderstandingObserverProfile::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneUnderstandingObserverProfile__ctor_m57D99652DEEBE5C2E7CC84E1FF19EFFC87541B66 (SceneUnderstandingObserverProfile_tD26D3C15007C02CBA3D566888F628E051B3C7B69* __this, const RuntimeMethod* method) 
{
	{
		// private int defaultPhysicsLayer = 31;
		__this->___defaultPhysicsLayer_12 = ((int32_t)31);
		// private SpatialAwarenessSurfaceTypes surfaceTypes =
		//     SpatialAwarenessSurfaceTypes.Floor |
		//     SpatialAwarenessSurfaceTypes.Ceiling |
		//     SpatialAwarenessSurfaceTypes.Wall |
		//     SpatialAwarenessSurfaceTypes.Platform;
		__this->___surfaceTypes_13 = ((int32_t)30);
		// private int instantiationBatchRate = 1;
		__this->___instantiationBatchRate_14 = 1;
		// private bool createGameObjects = true;
		__this->___createGameObjects_19 = (bool)1;
		// private bool requestPlaneData = true;
		__this->___requestPlaneData_20 = (bool)1;
		// private bool inferRegions = true;
		__this->___inferRegions_22 = (bool)1;
		// private float firstAutoUpdateDelay = 1.0f;
		__this->___firstAutoUpdateDelay_23 = (1.0f);
		// private SpatialAwarenessMeshLevelOfDetail worldMeshLevelOfDetail = SpatialAwarenessMeshLevelOfDetail.Medium;
		__this->___worldMeshLevelOfDetail_24 = 1;
		// private bool usePersistentObjects = true;
		__this->___usePersistentObjects_25 = (bool)1;
		// private float queryRadius = 5.0f;
		__this->___queryRadius_26 = (5.0f);
		// private bool requestOcclusionMask = true;
		__this->___requestOcclusionMask_27 = (bool)1;
		// private Vector2Int occlusionMaskResolution = new Vector2Int(128, 128);
		Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A L_0;
		memset((&L_0), 0, sizeof(L_0));
		Vector2Int__ctor_mC20D1312133EB8CB63EC11067088B043660F11CE_inline((&L_0), ((int32_t)128), ((int32_t)128), /*hidden argument*/NULL);
		__this->___occlusionMaskResolution_28 = L_0;
		// private bool orientScene = true;
		__this->___orientScene_29 = (bool)1;
		BaseSpatialAwarenessObserverProfile__ctor_mFC34E8951DB7C5E23819BD6AB859B6A234A59FF8(__this, NULL);
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
// System.Void Microsoft.MixedReality.Toolkit.WindowsSceneUnderstanding.Experimental.WindowsSceneUnderstandingObserver::.ctor(Microsoft.MixedReality.Toolkit.SpatialAwareness.IMixedRealitySpatialAwarenessSystem,System.String,System.UInt32,Microsoft.MixedReality.Toolkit.BaseMixedRealityProfile)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsSceneUnderstandingObserver__ctor_mDC48DFC511A09F015E9C8CFF897641B32EBBF294 (WindowsSceneUnderstandingObserver_t4C9B4E6A419AF0F50E32C76544915E4A8591B739* __this, RuntimeObject* ___spatialAwarenessSystem0, String_t* ___name1, uint32_t ___priority2, BaseMixedRealityProfile_tB4FDEF58FFD17796C0DB7241630B71CDF38FA1D4* ___profile3, const RuntimeMethod* method) 
{
	{
		// BaseMixedRealityProfile profile = null) : base(spatialAwarenessSystem, name, priority, profile)
		RuntimeObject* L_0 = ___spatialAwarenessSystem0;
		String_t* L_1 = ___name1;
		uint32_t L_2 = ___priority2;
		BaseMixedRealityProfile_tB4FDEF58FFD17796C0DB7241630B71CDF38FA1D4* L_3 = ___profile3;
		BaseSpatialObserver__ctor_mD8520FF99705757ED4CB6BB695424BEAF1CFC71D(__this, L_0, L_1, L_2, L_3, NULL);
		// ReadProfile();
		WindowsSceneUnderstandingObserver_ReadProfile_mC068710F537C7F93E265DC40000DC791A780AEE3(__this, NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.WindowsSceneUnderstanding.Experimental.WindowsSceneUnderstandingObserver::ReadProfile()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsSceneUnderstandingObserver_ReadProfile_mC068710F537C7F93E265DC40000DC791A780AEE3 (WindowsSceneUnderstandingObserver_t4C9B4E6A419AF0F50E32C76544915E4A8591B739* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneUnderstandingObserverProfile_tD26D3C15007C02CBA3D566888F628E051B3C7B69_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD8638A036277D99E851CF95C6DE4FE10A47DE9B8);
		s_Il2CppMethodInitialized = true;
	}
	SceneUnderstandingObserverProfile_tD26D3C15007C02CBA3D566888F628E051B3C7B69* V_0 = NULL;
	{
		// if (ConfigurationProfile == null)
		BaseMixedRealityProfile_tB4FDEF58FFD17796C0DB7241630B71CDF38FA1D4* L_0;
		L_0 = VirtualFuncInvoker0< BaseMixedRealityProfile_tB4FDEF58FFD17796C0DB7241630B71CDF38FA1D4* >::Invoke(22 /* Microsoft.MixedReality.Toolkit.BaseMixedRealityProfile Microsoft.MixedReality.Toolkit.BaseService::get_ConfigurationProfile() */, __this);
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
		// SceneUnderstandingObserverProfile profile = ConfigurationProfile as SceneUnderstandingObserverProfile;
		BaseMixedRealityProfile_tB4FDEF58FFD17796C0DB7241630B71CDF38FA1D4* L_2;
		L_2 = VirtualFuncInvoker0< BaseMixedRealityProfile_tB4FDEF58FFD17796C0DB7241630B71CDF38FA1D4* >::Invoke(22 /* Microsoft.MixedReality.Toolkit.BaseMixedRealityProfile Microsoft.MixedReality.Toolkit.BaseService::get_ConfigurationProfile() */, __this);
		V_0 = ((SceneUnderstandingObserverProfile_tD26D3C15007C02CBA3D566888F628E051B3C7B69*)IsInstClass((RuntimeObject*)L_2, SceneUnderstandingObserverProfile_tD26D3C15007C02CBA3D566888F628E051B3C7B69_il2cpp_TypeInfo_var));
		// if (profile == null)
		SceneUnderstandingObserverProfile_tD26D3C15007C02CBA3D566888F628E051B3C7B69* L_3 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_3, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_4)
		{
			goto IL_002f;
		}
	}
	{
		// Debug.LogError("Windows Scene Understanding Observer's configuration profile must be a SceneUnderstandingObserverProfile.");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_m059825802BB6AF7EA9693FEBEEB0D85F59A3E38E(_stringLiteralD8638A036277D99E851CF95C6DE4FE10A47DE9B8, NULL);
		// return;
		return;
	}

IL_002f:
	{
		// AutoUpdate = profile.AutoUpdate;
		SceneUnderstandingObserverProfile_tD26D3C15007C02CBA3D566888F628E051B3C7B69* L_5 = V_0;
		NullCheck(L_5);
		bool L_6;
		L_6 = SceneUnderstandingObserverProfile_get_AutoUpdate_m8C2264D4CCC4D67CE3CD0AB9B66E46C8A9C3E54C_inline(L_5, NULL);
		WindowsSceneUnderstandingObserver_set_AutoUpdate_m61C7DB4F698DFE45320B604AB08C0933F450EB3F_inline(__this, L_6, NULL);
		// UpdateOnceInitialized = profile.UpdateOnceInitialized;
		SceneUnderstandingObserverProfile_tD26D3C15007C02CBA3D566888F628E051B3C7B69* L_7 = V_0;
		NullCheck(L_7);
		bool L_8;
		L_8 = SceneUnderstandingObserverProfile_get_UpdateOnceInitialized_mDEF97D452AA885A9C62CC8B10F7B902625E3DACB_inline(L_7, NULL);
		WindowsSceneUnderstandingObserver_set_UpdateOnceInitialized_m0D156C09B21671BB88503FB559AF6B7E08038BEA_inline(__this, L_8, NULL);
		// DefaultMaterial = profile.DefaultMaterial;
		SceneUnderstandingObserverProfile_tD26D3C15007C02CBA3D566888F628E051B3C7B69* L_9 = V_0;
		NullCheck(L_9);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_10;
		L_10 = SceneUnderstandingObserverProfile_get_DefaultMaterial_m709F8F2D1F911CAFE2D1240B0D2E9C97AC6A0FA9_inline(L_9, NULL);
		WindowsSceneUnderstandingObserver_set_DefaultMaterial_m7630F5AAF8926DBACA0CD8D0981524A7514FEA65_inline(__this, L_10, NULL);
		// DefaultWorldMeshMaterial = profile.DefaultWorldMeshMaterial;
		SceneUnderstandingObserverProfile_tD26D3C15007C02CBA3D566888F628E051B3C7B69* L_11 = V_0;
		NullCheck(L_11);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_12;
		L_12 = SceneUnderstandingObserverProfile_get_DefaultWorldMeshMaterial_m2B85347F7F0FF4CCF65F7AFE44021FE466A6A31C_inline(L_11, NULL);
		WindowsSceneUnderstandingObserver_set_DefaultWorldMeshMaterial_m238BFDD79B0A46744DAE7B7D71D4248327D7480C_inline(__this, L_12, NULL);
		// SurfaceTypes = profile.SurfaceTypes;
		SceneUnderstandingObserverProfile_tD26D3C15007C02CBA3D566888F628E051B3C7B69* L_13 = V_0;
		NullCheck(L_13);
		int32_t L_14;
		L_14 = SceneUnderstandingObserverProfile_get_SurfaceTypes_m36F398EE6AA9406138A074F64AEB6951DE5DA282_inline(L_13, NULL);
		WindowsSceneUnderstandingObserver_set_SurfaceTypes_m2BE73486F54848425595D5025F8B44EF67F0C718_inline(__this, L_14, NULL);
		// RequestMeshData = profile.RequestMeshData;
		SceneUnderstandingObserverProfile_tD26D3C15007C02CBA3D566888F628E051B3C7B69* L_15 = V_0;
		NullCheck(L_15);
		bool L_16;
		L_16 = SceneUnderstandingObserverProfile_get_RequestMeshData_m0CE2047B61669E6434A4C21B8A1B033B6898DF61_inline(L_15, NULL);
		WindowsSceneUnderstandingObserver_set_RequestMeshData_mA0D40C0AF79A6191BAD7F622B1EA8C22921EB047_inline(__this, L_16, NULL);
		// RequestPlaneData = profile.RequestPlaneData;
		SceneUnderstandingObserverProfile_tD26D3C15007C02CBA3D566888F628E051B3C7B69* L_17 = V_0;
		NullCheck(L_17);
		bool L_18;
		L_18 = SceneUnderstandingObserverProfile_get_RequestPlaneData_m97DE0185ECD45BAB146E90D4FA584146DEFF29C7_inline(L_17, NULL);
		WindowsSceneUnderstandingObserver_set_RequestPlaneData_m288420998D6DD8AC0A4C2C3F98546D327E358171_inline(__this, L_18, NULL);
		// InferRegions = profile.InferRegions;
		SceneUnderstandingObserverProfile_tD26D3C15007C02CBA3D566888F628E051B3C7B69* L_19 = V_0;
		NullCheck(L_19);
		bool L_20;
		L_20 = SceneUnderstandingObserverProfile_get_InferRegions_mD28C3BEA6E3A71E4199E4877155012BC23F5884A_inline(L_19, NULL);
		WindowsSceneUnderstandingObserver_set_InferRegions_m669D8AF0E8D1C112215F3502585BC5D118EB351C_inline(__this, L_20, NULL);
		// CreateGameObjects = profile.CreateGameObjects;
		SceneUnderstandingObserverProfile_tD26D3C15007C02CBA3D566888F628E051B3C7B69* L_21 = V_0;
		NullCheck(L_21);
		bool L_22;
		L_22 = SceneUnderstandingObserverProfile_get_CreateGameObjects_mB11CC7E4AC8B50BE0D7D0951FDE214A10BE1311E_inline(L_21, NULL);
		WindowsSceneUnderstandingObserver_set_CreateGameObjects_mA3620FD8A6E652A84B9DD258E13977B8D8415539_inline(__this, L_22, NULL);
		// UsePersistentObjects = profile.UsePersistentObjects;
		SceneUnderstandingObserverProfile_tD26D3C15007C02CBA3D566888F628E051B3C7B69* L_23 = V_0;
		NullCheck(L_23);
		bool L_24;
		L_24 = SceneUnderstandingObserverProfile_get_UsePersistentObjects_m4DD55204939A1FC18005885CE60F83D4708B3FBD_inline(L_23, NULL);
		WindowsSceneUnderstandingObserver_set_UsePersistentObjects_m60EA3E443913AC97BA43D4950E37972E102CD4FE_inline(__this, L_24, NULL);
		// UpdateInterval = profile.UpdateInterval;
		SceneUnderstandingObserverProfile_tD26D3C15007C02CBA3D566888F628E051B3C7B69* L_25 = V_0;
		NullCheck(L_25);
		float L_26;
		L_26 = BaseSpatialAwarenessObserverProfile_get_UpdateInterval_m3AE1E7839241F4F5B2CBFEAFE987D53835F1C751_inline(L_25, NULL);
		BaseSpatialObserver_set_UpdateInterval_m6D940C69DFEA73CDD69A67FAE94A75E9AE7D3E7C_inline(__this, L_26, NULL);
		// FirstAutoUpdateDelay = profile.FirstAutoUpdateDelay;
		SceneUnderstandingObserverProfile_tD26D3C15007C02CBA3D566888F628E051B3C7B69* L_27 = V_0;
		NullCheck(L_27);
		float L_28;
		L_28 = SceneUnderstandingObserverProfile_get_FirstAutoUpdateDelay_m7E902EA746E71B953DA38A32316B36E8F16F6547_inline(L_27, NULL);
		WindowsSceneUnderstandingObserver_set_FirstAutoUpdateDelay_m0C75AE0D1CEA83BBCAB5C96DC8DD37F269B33083_inline(__this, L_28, NULL);
		// ShouldLoadFromFile = profile.ShouldLoadFromFile;
		SceneUnderstandingObserverProfile_tD26D3C15007C02CBA3D566888F628E051B3C7B69* L_29 = V_0;
		NullCheck(L_29);
		bool L_30;
		L_30 = SceneUnderstandingObserverProfile_get_ShouldLoadFromFile_mC7F9BD425930854EF25C0308305C0C181F46468E_inline(L_29, NULL);
		WindowsSceneUnderstandingObserver_set_ShouldLoadFromFile_m65A0FFBDB80179AFB3900DAFBA1D0A52E6B603D3_inline(__this, L_30, NULL);
		// SerializedScene = profile.SerializedScene;
		SceneUnderstandingObserverProfile_tD26D3C15007C02CBA3D566888F628E051B3C7B69* L_31 = V_0;
		NullCheck(L_31);
		TextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69* L_32;
		L_32 = SceneUnderstandingObserverProfile_get_SerializedScene_m0F8BB62674E78AD401CF0ECC5E8616AF342B7D7E_inline(L_31, NULL);
		WindowsSceneUnderstandingObserver_set_SerializedScene_m7293727F6EA34B2E22BB66086F3A5D7EE65CC078(__this, L_32, NULL);
		// WorldMeshLevelOfDetail = profile.WorldMeshLevelOfDetail;
		SceneUnderstandingObserverProfile_tD26D3C15007C02CBA3D566888F628E051B3C7B69* L_33 = V_0;
		NullCheck(L_33);
		int32_t L_34;
		L_34 = SceneUnderstandingObserverProfile_get_WorldMeshLevelOfDetail_m34792C9335EAF624BB46E2029A0C22E858A941EB_inline(L_33, NULL);
		WindowsSceneUnderstandingObserver_set_WorldMeshLevelOfDetail_m77E209BCC79F6D104F14877EF7EE8E0F6B566F8E_inline(__this, L_34, NULL);
		// InstantiationBatchRate = profile.InstantiationBatchRate;
		SceneUnderstandingObserverProfile_tD26D3C15007C02CBA3D566888F628E051B3C7B69* L_35 = V_0;
		NullCheck(L_35);
		int32_t L_36;
		L_36 = SceneUnderstandingObserverProfile_get_InstantiationBatchRate_m81E055B935823EF94FBB1EA63E2BB7D7784CACD3_inline(L_35, NULL);
		WindowsSceneUnderstandingObserver_set_InstantiationBatchRate_m4014C164A43237F9AC577910BC9F588CC992FC26_inline(__this, L_36, NULL);
		// ObservationExtents = profile.ObservationExtents;
		SceneUnderstandingObserverProfile_tD26D3C15007C02CBA3D566888F628E051B3C7B69* L_37 = V_0;
		NullCheck(L_37);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_38;
		L_38 = BaseSpatialAwarenessObserverProfile_get_ObservationExtents_m3E05995AA3C492FA17BA656C8EEF1FB5D82C96FD_inline(L_37, NULL);
		BaseSpatialObserver_set_ObservationExtents_mB411BA3675C18D91CAC89279A6A87388050C1D9F_inline(__this, L_38, NULL);
		// QueryRadius = profile.QueryRadius;
		SceneUnderstandingObserverProfile_tD26D3C15007C02CBA3D566888F628E051B3C7B69* L_39 = V_0;
		NullCheck(L_39);
		float L_40;
		L_40 = SceneUnderstandingObserverProfile_get_QueryRadius_mA786922BB4BAB0DD5096D35582B4476C668127BA_inline(L_39, NULL);
		WindowsSceneUnderstandingObserver_set_QueryRadius_mB12638A56E3E2A4A2B2C195BA2A7642CA479A97B_inline(__this, L_40, NULL);
		// RequestOcclusionMask = profile.RequestOcclusionMask;
		SceneUnderstandingObserverProfile_tD26D3C15007C02CBA3D566888F628E051B3C7B69* L_41 = V_0;
		NullCheck(L_41);
		bool L_42;
		L_42 = SceneUnderstandingObserverProfile_get_RequestOcclusionMask_m7D6292807A90160CEAC104C04CEA0AB030002D2C_inline(L_41, NULL);
		WindowsSceneUnderstandingObserver_set_RequestOcclusionMask_mCB080214BB912945C820F0EB1BC007897B7E8276_inline(__this, L_42, NULL);
		// OcclusionMaskResolution = profile.OcclusionMaskResolution;
		SceneUnderstandingObserverProfile_tD26D3C15007C02CBA3D566888F628E051B3C7B69* L_43 = V_0;
		NullCheck(L_43);
		Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A L_44;
		L_44 = SceneUnderstandingObserverProfile_get_OcclusionMaskResolution_mB493EA633395F80E312B7C6752867CF7D2142C47_inline(L_43, NULL);
		WindowsSceneUnderstandingObserver_set_OcclusionMaskResolution_mF7A7C028E5ACC8FFC3BA0B907634A96EF4CF432D_inline(__this, L_44, NULL);
		// OrientScene = profile.OrientScene;
		SceneUnderstandingObserverProfile_tD26D3C15007C02CBA3D566888F628E051B3C7B69* L_45 = V_0;
		NullCheck(L_45);
		bool L_46;
		L_46 = SceneUnderstandingObserverProfile_get_OrientScene_mAB7A77E9E0F7CFB2762007B3930DDB2C8814989E_inline(L_45, NULL);
		WindowsSceneUnderstandingObserver_set_OrientScene_m6B3890BBF7DC9EE5A3709ACF05C2EB27892F32A5_inline(__this, L_46, NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.WindowsSceneUnderstanding.Experimental.WindowsSceneUnderstandingObserver::Initialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsSceneUnderstandingObserver_Initialize_m616A662F23C7701792798F57494C8215C315360D (WindowsSceneUnderstandingObserver_t4C9B4E6A419AF0F50E32C76544915E4A8591B739* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBF74DAF63DFBBFE944944E5B82F675D0B045EC0D);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Application.isPlaying)
		bool L_0;
		L_0 = Application_get_isPlaying_m0B3B501E1093739F8887A0DAC5F61D9CB49CC337(NULL);
		if (!L_0)
		{
			goto IL_0011;
		}
	}
	{
		// Debug.LogWarning("The required package Microsoft.MixedReality.SceneUnderstanding is not installed or properly configured. Please visit https://docs.microsoft.com/windows/mixed-reality/mrtk-unity/features/spatial-awareness/scene-understanding for more information.");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_mEF15C6B17CE4E1FA7E379CDB82CE40FCD89A3F28(_stringLiteralBF74DAF63DFBBFE944944E5B82F675D0B045EC0D, NULL);
	}

IL_0011:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.WindowsSceneUnderstanding.Experimental.WindowsSceneUnderstandingObserver::Enable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsSceneUnderstandingObserver_Enable_m8ED8B0463219202DA5CB5231885F607F5B0E815E (WindowsSceneUnderstandingObserver_t4C9B4E6A419AF0F50E32C76544915E4A8591B739* __this, const RuntimeMethod* method) 
{
	{
		// IsEnabled = false;
		VirtualActionInvoker1< bool >::Invoke(34 /* System.Void Microsoft.MixedReality.Toolkit.BaseService::set_IsEnabled(System.Boolean) */, __this, (bool)0);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.WindowsSceneUnderstanding.Experimental.WindowsSceneUnderstandingObserver::Resume()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsSceneUnderstandingObserver_Resume_m15E0B6671D73C5155E0E485BDCCB1B86D3B6800A (WindowsSceneUnderstandingObserver_t4C9B4E6A419AF0F50E32C76544915E4A8591B739* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.WindowsSceneUnderstanding.Experimental.WindowsSceneUnderstandingObserver::Suspend()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsSceneUnderstandingObserver_Suspend_m21C0FF4C6E6B647814C3FD3DF389EBA17960E78F (WindowsSceneUnderstandingObserver_t4C9B4E6A419AF0F50E32C76544915E4A8591B739* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Collections.Generic.IReadOnlyDictionary`2<System.Int32,Microsoft.MixedReality.Toolkit.Experimental.SpatialAwareness.SpatialAwarenessSceneObject> Microsoft.MixedReality.Toolkit.WindowsSceneUnderstanding.Experimental.WindowsSceneUnderstandingObserver::get_SceneObjects()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WindowsSceneUnderstandingObserver_get_SceneObjects_mE8599FFD42E2C2F60AC3249794AD6A13A71F52D2 (WindowsSceneUnderstandingObserver_t4C9B4E6A419AF0F50E32C76544915E4A8591B739* __this, const RuntimeMethod* method) 
{
	{
		// get => null;
		return (RuntimeObject*)NULL;
	}
}
// Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessSurfaceTypes Microsoft.MixedReality.Toolkit.WindowsSceneUnderstanding.Experimental.WindowsSceneUnderstandingObserver::get_SurfaceTypes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WindowsSceneUnderstandingObserver_get_SurfaceTypes_mCCA0897436352B62043EAD1AD27F42E42FB18EBF (WindowsSceneUnderstandingObserver_t4C9B4E6A419AF0F50E32C76544915E4A8591B739* __this, const RuntimeMethod* method) 
{
	{
		// public SpatialAwarenessSurfaceTypes SurfaceTypes { get; set; }
		int32_t L_0 = __this->___U3CSurfaceTypesU3Ek__BackingField_26;
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.WindowsSceneUnderstanding.Experimental.WindowsSceneUnderstandingObserver::set_SurfaceTypes(Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessSurfaceTypes)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsSceneUnderstandingObserver_set_SurfaceTypes_m2BE73486F54848425595D5025F8B44EF67F0C718 (WindowsSceneUnderstandingObserver_t4C9B4E6A419AF0F50E32C76544915E4A8591B739* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		// public SpatialAwarenessSurfaceTypes SurfaceTypes { get; set; }
		int32_t L_0 = ___value0;
		__this->___U3CSurfaceTypesU3Ek__BackingField_26 = L_0;
		return;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.WindowsSceneUnderstanding.Experimental.WindowsSceneUnderstandingObserver::get_ShouldLoadFromFile()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WindowsSceneUnderstandingObserver_get_ShouldLoadFromFile_m2891E13093F771C554B61EFFC9A0ADFCA2B9DD7B (WindowsSceneUnderstandingObserver_t4C9B4E6A419AF0F50E32C76544915E4A8591B739* __this, const RuntimeMethod* method) 
{
	{
		// public bool ShouldLoadFromFile { get; set; }
		bool L_0 = __this->___U3CShouldLoadFromFileU3Ek__BackingField_27;
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.WindowsSceneUnderstanding.Experimental.WindowsSceneUnderstandingObserver::set_ShouldLoadFromFile(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsSceneUnderstandingObserver_set_ShouldLoadFromFile_m65A0FFBDB80179AFB3900DAFBA1D0A52E6B603D3 (WindowsSceneUnderstandingObserver_t4C9B4E6A419AF0F50E32C76544915E4A8591B739* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// public bool ShouldLoadFromFile { get; set; }
		bool L_0 = ___value0;
		__this->___U3CShouldLoadFromFileU3Ek__BackingField_27 = L_0;
		return;
	}
}
// System.Int32 Microsoft.MixedReality.Toolkit.WindowsSceneUnderstanding.Experimental.WindowsSceneUnderstandingObserver::get_InstantiationBatchRate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WindowsSceneUnderstandingObserver_get_InstantiationBatchRate_m32EFF15FAB63C93A1BD8F639C8690C20A8A1685A (WindowsSceneUnderstandingObserver_t4C9B4E6A419AF0F50E32C76544915E4A8591B739* __this, const RuntimeMethod* method) 
{
	{
		// public int InstantiationBatchRate { get; set; }
		int32_t L_0 = __this->___U3CInstantiationBatchRateU3Ek__BackingField_28;
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.WindowsSceneUnderstanding.Experimental.WindowsSceneUnderstandingObserver::set_InstantiationBatchRate(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsSceneUnderstandingObserver_set_InstantiationBatchRate_m4014C164A43237F9AC577910BC9F588CC992FC26 (WindowsSceneUnderstandingObserver_t4C9B4E6A419AF0F50E32C76544915E4A8591B739* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		// public int InstantiationBatchRate { get; set; }
		int32_t L_0 = ___value0;
		__this->___U3CInstantiationBatchRateU3Ek__BackingField_28 = L_0;
		return;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.WindowsSceneUnderstanding.Experimental.WindowsSceneUnderstandingObserver::get_InferRegions()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WindowsSceneUnderstandingObserver_get_InferRegions_m6D5B4B78DCBBB33D69A4337297BA7B207DDD9718 (WindowsSceneUnderstandingObserver_t4C9B4E6A419AF0F50E32C76544915E4A8591B739* __this, const RuntimeMethod* method) 
{
	{
		// public bool InferRegions { get; set; }
		bool L_0 = __this->___U3CInferRegionsU3Ek__BackingField_29;
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.WindowsSceneUnderstanding.Experimental.WindowsSceneUnderstandingObserver::set_InferRegions(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsSceneUnderstandingObserver_set_InferRegions_m669D8AF0E8D1C112215F3502585BC5D118EB351C (WindowsSceneUnderstandingObserver_t4C9B4E6A419AF0F50E32C76544915E4A8591B739* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// public bool InferRegions { get; set; }
		bool L_0 = ___value0;
		__this->___U3CInferRegionsU3Ek__BackingField_29 = L_0;
		return;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.WindowsSceneUnderstanding.Experimental.WindowsSceneUnderstandingObserver::get_RequestMeshData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WindowsSceneUnderstandingObserver_get_RequestMeshData_m01675E880C8719FAD30520C93E48B51F5003615B (WindowsSceneUnderstandingObserver_t4C9B4E6A419AF0F50E32C76544915E4A8591B739* __this, const RuntimeMethod* method) 
{
	{
		// public bool RequestMeshData { get; set; }
		bool L_0 = __this->___U3CRequestMeshDataU3Ek__BackingField_30;
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.WindowsSceneUnderstanding.Experimental.WindowsSceneUnderstandingObserver::set_RequestMeshData(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsSceneUnderstandingObserver_set_RequestMeshData_mA0D40C0AF79A6191BAD7F622B1EA8C22921EB047 (WindowsSceneUnderstandingObserver_t4C9B4E6A419AF0F50E32C76544915E4A8591B739* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// public bool RequestMeshData { get; set; }
		bool L_0 = ___value0;
		__this->___U3CRequestMeshDataU3Ek__BackingField_30 = L_0;
		return;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.WindowsSceneUnderstanding.Experimental.WindowsSceneUnderstandingObserver::get_RequestPlaneData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WindowsSceneUnderstandingObserver_get_RequestPlaneData_mBAC8A5A7E3E31B5D8E1EA57192A1C508CA9893B1 (WindowsSceneUnderstandingObserver_t4C9B4E6A419AF0F50E32C76544915E4A8591B739* __this, const RuntimeMethod* method) 
{
	{
		// public bool RequestPlaneData { get; set; }
		bool L_0 = __this->___U3CRequestPlaneDataU3Ek__BackingField_31;
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.WindowsSceneUnderstanding.Experimental.WindowsSceneUnderstandingObserver::set_RequestPlaneData(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsSceneUnderstandingObserver_set_RequestPlaneData_m288420998D6DD8AC0A4C2C3F98546D327E358171 (WindowsSceneUnderstandingObserver_t4C9B4E6A419AF0F50E32C76544915E4A8591B739* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// public bool RequestPlaneData { get; set; }
		bool L_0 = ___value0;
		__this->___U3CRequestPlaneDataU3Ek__BackingField_31 = L_0;
		return;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.WindowsSceneUnderstanding.Experimental.WindowsSceneUnderstandingObserver::get_RequestOcclusionMask()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WindowsSceneUnderstandingObserver_get_RequestOcclusionMask_mAB29BFF92ACCF8367744D8FE808657A3283CCA7B (WindowsSceneUnderstandingObserver_t4C9B4E6A419AF0F50E32C76544915E4A8591B739* __this, const RuntimeMethod* method) 
{
	{
		// public bool RequestOcclusionMask { get; set; }
		bool L_0 = __this->___U3CRequestOcclusionMaskU3Ek__BackingField_32;
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.WindowsSceneUnderstanding.Experimental.WindowsSceneUnderstandingObserver::set_RequestOcclusionMask(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsSceneUnderstandingObserver_set_RequestOcclusionMask_mCB080214BB912945C820F0EB1BC007897B7E8276 (WindowsSceneUnderstandingObserver_t4C9B4E6A419AF0F50E32C76544915E4A8591B739* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// public bool RequestOcclusionMask { get; set; }
		bool L_0 = ___value0;
		__this->___U3CRequestOcclusionMaskU3Ek__BackingField_32 = L_0;
		return;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.WindowsSceneUnderstanding.Experimental.WindowsSceneUnderstandingObserver::get_UsePersistentObjects()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WindowsSceneUnderstandingObserver_get_UsePersistentObjects_mE5C454C12FDEDA5EA9AC9442C287C2D5EE656601 (WindowsSceneUnderstandingObserver_t4C9B4E6A419AF0F50E32C76544915E4A8591B739* __this, const RuntimeMethod* method) 
{
	{
		// public bool UsePersistentObjects { get; set; }
		bool L_0 = __this->___U3CUsePersistentObjectsU3Ek__BackingField_33;
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.WindowsSceneUnderstanding.Experimental.WindowsSceneUnderstandingObserver::set_UsePersistentObjects(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsSceneUnderstandingObserver_set_UsePersistentObjects_m60EA3E443913AC97BA43D4950E37972E102CD4FE (WindowsSceneUnderstandingObserver_t4C9B4E6A419AF0F50E32C76544915E4A8591B739* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// public bool UsePersistentObjects { get; set; }
		bool L_0 = ___value0;
		__this->___U3CUsePersistentObjectsU3Ek__BackingField_33 = L_0;
		return;
	}
}
// System.Single Microsoft.MixedReality.Toolkit.WindowsSceneUnderstanding.Experimental.WindowsSceneUnderstandingObserver::get_QueryRadius()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float WindowsSceneUnderstandingObserver_get_QueryRadius_m24374C9637A9C246C26EE8D52D513FE6889241FE (WindowsSceneUnderstandingObserver_t4C9B4E6A419AF0F50E32C76544915E4A8591B739* __this, const RuntimeMethod* method) 
{
	{
		// public float QueryRadius { get; set; }
		float L_0 = __this->___U3CQueryRadiusU3Ek__BackingField_34;
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.WindowsSceneUnderstanding.Experimental.WindowsSceneUnderstandingObserver::set_QueryRadius(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsSceneUnderstandingObserver_set_QueryRadius_mB12638A56E3E2A4A2B2C195BA2A7642CA479A97B (WindowsSceneUnderstandingObserver_t4C9B4E6A419AF0F50E32C76544915E4A8591B739* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		// public float QueryRadius { get; set; }
		float L_0 = ___value0;
		__this->___U3CQueryRadiusU3Ek__BackingField_34 = L_0;
		return;
	}
}
// UnityEngine.Vector2Int Microsoft.MixedReality.Toolkit.WindowsSceneUnderstanding.Experimental.WindowsSceneUnderstandingObserver::get_OcclusionMaskResolution()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A WindowsSceneUnderstandingObserver_get_OcclusionMaskResolution_mB24D5EC071A0FDFD7CDA297076550C839CCE95F7 (WindowsSceneUnderstandingObserver_t4C9B4E6A419AF0F50E32C76544915E4A8591B739* __this, const RuntimeMethod* method) 
{
	{
		// public Vector2Int OcclusionMaskResolution { get; set; }
		Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A L_0 = __this->___U3COcclusionMaskResolutionU3Ek__BackingField_35;
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.WindowsSceneUnderstanding.Experimental.WindowsSceneUnderstandingObserver::set_OcclusionMaskResolution(UnityEngine.Vector2Int)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsSceneUnderstandingObserver_set_OcclusionMaskResolution_mF7A7C028E5ACC8FFC3BA0B907634A96EF4CF432D (WindowsSceneUnderstandingObserver_t4C9B4E6A419AF0F50E32C76544915E4A8591B739* __this, Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___value0, const RuntimeMethod* method) 
{
	{
		// public Vector2Int OcclusionMaskResolution { get; set; }
		Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A L_0 = ___value0;
		__this->___U3COcclusionMaskResolutionU3Ek__BackingField_35 = L_0;
		return;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.WindowsSceneUnderstanding.Experimental.WindowsSceneUnderstandingObserver::get_CreateGameObjects()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WindowsSceneUnderstandingObserver_get_CreateGameObjects_m7DBDC32DCFF7D41A71AB87984FF0E5972690ABD0 (WindowsSceneUnderstandingObserver_t4C9B4E6A419AF0F50E32C76544915E4A8591B739* __this, const RuntimeMethod* method) 
{
	{
		// public bool CreateGameObjects { get; set; }
		bool L_0 = __this->___U3CCreateGameObjectsU3Ek__BackingField_36;
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.WindowsSceneUnderstanding.Experimental.WindowsSceneUnderstandingObserver::set_CreateGameObjects(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsSceneUnderstandingObserver_set_CreateGameObjects_mA3620FD8A6E652A84B9DD258E13977B8D8415539 (WindowsSceneUnderstandingObserver_t4C9B4E6A419AF0F50E32C76544915E4A8591B739* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// public bool CreateGameObjects { get; set; }
		bool L_0 = ___value0;
		__this->___U3CCreateGameObjectsU3Ek__BackingField_36 = L_0;
		return;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.WindowsSceneUnderstanding.Experimental.WindowsSceneUnderstandingObserver::get_AutoUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WindowsSceneUnderstandingObserver_get_AutoUpdate_m13C29C31D793545AF43C18CE48920004CA4690B8 (WindowsSceneUnderstandingObserver_t4C9B4E6A419AF0F50E32C76544915E4A8591B739* __this, const RuntimeMethod* method) 
{
	{
		// public bool AutoUpdate { get; set; }
		bool L_0 = __this->___U3CAutoUpdateU3Ek__BackingField_37;
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.WindowsSceneUnderstanding.Experimental.WindowsSceneUnderstandingObserver::set_AutoUpdate(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsSceneUnderstandingObserver_set_AutoUpdate_m61C7DB4F698DFE45320B604AB08C0933F450EB3F (WindowsSceneUnderstandingObserver_t4C9B4E6A419AF0F50E32C76544915E4A8591B739* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// public bool AutoUpdate { get; set; }
		bool L_0 = ___value0;
		__this->___U3CAutoUpdateU3Ek__BackingField_37 = L_0;
		return;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.WindowsSceneUnderstanding.Experimental.WindowsSceneUnderstandingObserver::get_OrientScene()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WindowsSceneUnderstandingObserver_get_OrientScene_mAA000C304F4A47397625A7F7D4FF11FC4B55C358 (WindowsSceneUnderstandingObserver_t4C9B4E6A419AF0F50E32C76544915E4A8591B739* __this, const RuntimeMethod* method) 
{
	{
		// public bool OrientScene { get; set; }
		bool L_0 = __this->___U3COrientSceneU3Ek__BackingField_38;
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.WindowsSceneUnderstanding.Experimental.WindowsSceneUnderstandingObserver::set_OrientScene(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsSceneUnderstandingObserver_set_OrientScene_m6B3890BBF7DC9EE5A3709ACF05C2EB27892F32A5 (WindowsSceneUnderstandingObserver_t4C9B4E6A419AF0F50E32C76544915E4A8591B739* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// public bool OrientScene { get; set; }
		bool L_0 = ___value0;
		__this->___U3COrientSceneU3Ek__BackingField_38 = L_0;
		return;
	}
}
// Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessMeshLevelOfDetail Microsoft.MixedReality.Toolkit.WindowsSceneUnderstanding.Experimental.WindowsSceneUnderstandingObserver::get_WorldMeshLevelOfDetail()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WindowsSceneUnderstandingObserver_get_WorldMeshLevelOfDetail_mCC8A038DF9217B5786650133BE4F02C145BE7BCD (WindowsSceneUnderstandingObserver_t4C9B4E6A419AF0F50E32C76544915E4A8591B739* __this, const RuntimeMethod* method) 
{
	{
		// public SpatialAwarenessMeshLevelOfDetail WorldMeshLevelOfDetail { get; set; }
		int32_t L_0 = __this->___U3CWorldMeshLevelOfDetailU3Ek__BackingField_39;
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.WindowsSceneUnderstanding.Experimental.WindowsSceneUnderstandingObserver::set_WorldMeshLevelOfDetail(Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessMeshLevelOfDetail)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsSceneUnderstandingObserver_set_WorldMeshLevelOfDetail_m77E209BCC79F6D104F14877EF7EE8E0F6B566F8E (WindowsSceneUnderstandingObserver_t4C9B4E6A419AF0F50E32C76544915E4A8591B739* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		// public SpatialAwarenessMeshLevelOfDetail WorldMeshLevelOfDetail { get; set; }
		int32_t L_0 = ___value0;
		__this->___U3CWorldMeshLevelOfDetailU3Ek__BackingField_39 = L_0;
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.WindowsSceneUnderstanding.Experimental.WindowsSceneUnderstandingObserver::SaveScene(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsSceneUnderstandingObserver_SaveScene_mA02D1DED01052E653FC4D884E5B36988B04371DD (WindowsSceneUnderstandingObserver_t4C9B4E6A419AF0F50E32C76544915E4A8591B739* __this, String_t* ___filenamePrefix0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBD0A92AF1E766DFCDF7986ADF733DD6F143EED0B);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.LogWarning("SaveScene() only supported at runtime! Ignoring request.");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_mEF15C6B17CE4E1FA7E379CDB82CE40FCD89A3F28(_stringLiteralBD0A92AF1E766DFCDF7986ADF733DD6F143EED0B, NULL);
		// }
		return;
	}
}
// System.Single Microsoft.MixedReality.Toolkit.WindowsSceneUnderstanding.Experimental.WindowsSceneUnderstandingObserver::get_FirstAutoUpdateDelay()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float WindowsSceneUnderstandingObserver_get_FirstAutoUpdateDelay_m06E99C3443E6C44BA4269E46A0F30330BD43C725 (WindowsSceneUnderstandingObserver_t4C9B4E6A419AF0F50E32C76544915E4A8591B739* __this, const RuntimeMethod* method) 
{
	{
		// public float FirstAutoUpdateDelay { get; set; }
		float L_0 = __this->___U3CFirstAutoUpdateDelayU3Ek__BackingField_40;
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.WindowsSceneUnderstanding.Experimental.WindowsSceneUnderstandingObserver::set_FirstAutoUpdateDelay(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsSceneUnderstandingObserver_set_FirstAutoUpdateDelay_m0C75AE0D1CEA83BBCAB5C96DC8DD37F269B33083 (WindowsSceneUnderstandingObserver_t4C9B4E6A419AF0F50E32C76544915E4A8591B739* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		// public float FirstAutoUpdateDelay { get; set; }
		float L_0 = ___value0;
		__this->___U3CFirstAutoUpdateDelayU3Ek__BackingField_40 = L_0;
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.WindowsSceneUnderstanding.Experimental.WindowsSceneUnderstandingObserver::UpdateOnDemand()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsSceneUnderstandingObserver_UpdateOnDemand_m5F51F6AB8CEA913A8C7FC463C3E0FCEA12368D77 (WindowsSceneUnderstandingObserver_t4C9B4E6A419AF0F50E32C76544915E4A8591B739* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.WindowsSceneUnderstanding.Experimental.WindowsSceneUnderstandingObserver::get_UpdateOnceInitialized()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WindowsSceneUnderstandingObserver_get_UpdateOnceInitialized_m6C9E01E789351E8030DE0DC4C5282225C31202DC (WindowsSceneUnderstandingObserver_t4C9B4E6A419AF0F50E32C76544915E4A8591B739* __this, const RuntimeMethod* method) 
{
	{
		// public bool UpdateOnceInitialized { get; set; }
		bool L_0 = __this->___U3CUpdateOnceInitializedU3Ek__BackingField_41;
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.WindowsSceneUnderstanding.Experimental.WindowsSceneUnderstandingObserver::set_UpdateOnceInitialized(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsSceneUnderstandingObserver_set_UpdateOnceInitialized_m0D156C09B21671BB88503FB559AF6B7E08038BEA (WindowsSceneUnderstandingObserver_t4C9B4E6A419AF0F50E32C76544915E4A8591B739* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// public bool UpdateOnceInitialized { get; set; }
		bool L_0 = ___value0;
		__this->___U3CUpdateOnceInitializedU3Ek__BackingField_41 = L_0;
		return;
	}
}
// UnityEngine.Material Microsoft.MixedReality.Toolkit.WindowsSceneUnderstanding.Experimental.WindowsSceneUnderstandingObserver::get_DefaultMaterial()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* WindowsSceneUnderstandingObserver_get_DefaultMaterial_mB130BD3EEDF5DCE01C5074EBEBB742CC30F0A095 (WindowsSceneUnderstandingObserver_t4C9B4E6A419AF0F50E32C76544915E4A8591B739* __this, const RuntimeMethod* method) 
{
	{
		// public Material DefaultMaterial { get; set; } // Need references so they are included for runtime
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_0 = __this->___U3CDefaultMaterialU3Ek__BackingField_42;
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.WindowsSceneUnderstanding.Experimental.WindowsSceneUnderstandingObserver::set_DefaultMaterial(UnityEngine.Material)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsSceneUnderstandingObserver_set_DefaultMaterial_m7630F5AAF8926DBACA0CD8D0981524A7514FEA65 (WindowsSceneUnderstandingObserver_t4C9B4E6A419AF0F50E32C76544915E4A8591B739* __this, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___value0, const RuntimeMethod* method) 
{
	{
		// public Material DefaultMaterial { get; set; } // Need references so they are included for runtime
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_0 = ___value0;
		__this->___U3CDefaultMaterialU3Ek__BackingField_42 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CDefaultMaterialU3Ek__BackingField_42), (void*)L_0);
		return;
	}
}
// UnityEngine.Material Microsoft.MixedReality.Toolkit.WindowsSceneUnderstanding.Experimental.WindowsSceneUnderstandingObserver::get_DefaultWorldMeshMaterial()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* WindowsSceneUnderstandingObserver_get_DefaultWorldMeshMaterial_mDF34DB831275C020CC068FEC85B4216D1ACDE7F2 (WindowsSceneUnderstandingObserver_t4C9B4E6A419AF0F50E32C76544915E4A8591B739* __this, const RuntimeMethod* method) 
{
	{
		// public Material DefaultWorldMeshMaterial { get; set; } // Need references so they are included for runtime
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_0 = __this->___U3CDefaultWorldMeshMaterialU3Ek__BackingField_43;
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.WindowsSceneUnderstanding.Experimental.WindowsSceneUnderstandingObserver::set_DefaultWorldMeshMaterial(UnityEngine.Material)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsSceneUnderstandingObserver_set_DefaultWorldMeshMaterial_m238BFDD79B0A46744DAE7B7D71D4248327D7480C (WindowsSceneUnderstandingObserver_t4C9B4E6A419AF0F50E32C76544915E4A8591B739* __this, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___value0, const RuntimeMethod* method) 
{
	{
		// public Material DefaultWorldMeshMaterial { get; set; } // Need references so they are included for runtime
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_0 = ___value0;
		__this->___U3CDefaultWorldMeshMaterialU3Ek__BackingField_43 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CDefaultWorldMeshMaterialU3Ek__BackingField_43), (void*)L_0);
		return;
	}
}
// UnityEngine.TextAsset Microsoft.MixedReality.Toolkit.WindowsSceneUnderstanding.Experimental.WindowsSceneUnderstandingObserver::get_SerializedScene()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69* WindowsSceneUnderstandingObserver_get_SerializedScene_mDE23B99830DEEC289971D26D7CBADE0D7E096564 (WindowsSceneUnderstandingObserver_t4C9B4E6A419AF0F50E32C76544915E4A8591B739* __this, const RuntimeMethod* method) 
{
	{
		// get { return serializedScene; }
		TextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69* L_0 = __this->___serializedScene_45;
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.WindowsSceneUnderstanding.Experimental.WindowsSceneUnderstandingObserver::set_SerializedScene(UnityEngine.TextAsset)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsSceneUnderstandingObserver_set_SerializedScene_m7293727F6EA34B2E22BB66086F3A5D7EE65CC078 (WindowsSceneUnderstandingObserver_t4C9B4E6A419AF0F50E32C76544915E4A8591B739* __this, TextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (serializedScene != value)
		TextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69* L_0 = __this->___serializedScene_45;
		TextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69* L_1 = ___value0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_0, L_1, NULL);
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		// serializedScene = value;
		TextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69* L_3 = ___value0;
		__this->___serializedScene_45 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___serializedScene_45), (void*)L_3);
		// sceneBytes = serializedScene.bytes;
		TextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69* L_4 = __this->___serializedScene_45;
		NullCheck(L_4);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5;
		L_5 = TextAsset_get_bytes_m244B31755642C9623B570FC96B9A04523B1E5178(L_4, NULL);
		__this->___sceneBytes_44 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___sceneBytes_44), (void*)L_5);
	}

IL_0026:
	{
		// }
		return;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.WindowsSceneUnderstanding.Experimental.WindowsSceneUnderstandingObserver::TryGetOcclusionMask(System.Int32,System.UInt16,System.UInt16,System.Byte[]&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WindowsSceneUnderstandingObserver_TryGetOcclusionMask_m8DBB0455097E06C54101556B00A9A67E9C595E48 (WindowsSceneUnderstandingObserver_t4C9B4E6A419AF0F50E32C76544915E4A8591B739* __this, int32_t ___quadId0, uint16_t ___textureWidth1, uint16_t ___textureHeight2, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031** ___mask3, const RuntimeMethod* method) 
{
	{
		// mask = null;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031** L_0 = ___mask3;
		*((RuntimeObject**)L_0) = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_0, (void*)(RuntimeObject*)NULL);
		// return false;
		return (bool)0;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.WindowsSceneUnderstanding.Experimental.WindowsSceneUnderstandingObserver::TryFindCentermostPlacement(System.Int32,UnityEngine.Vector2,UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WindowsSceneUnderstandingObserver_TryFindCentermostPlacement_m02A5E360B3E1689E56345302588D80E6FBDD4D5E (WindowsSceneUnderstandingObserver_t4C9B4E6A419AF0F50E32C76544915E4A8591B739* __this, int32_t ___quadId0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___objExtents1, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___placementPosOnQuad2, const RuntimeMethod* method) 
{
	{
		// placementPosOnQuad = Vector3.zero;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_0 = ___placementPosOnQuad2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline(NULL);
		*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_0 = L_1;
		// return false;
		return (bool)0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2Int__ctor_mC20D1312133EB8CB63EC11067088B043660F11CE_inline (Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A* __this, int32_t ___x0, int32_t ___y1, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___x0;
		__this->___m_X_0 = L_0;
		int32_t L_1 = ___y1;
		__this->___m_Y_1 = L_1;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool SceneUnderstandingObserverProfile_get_AutoUpdate_m8C2264D4CCC4D67CE3CD0AB9B66E46C8A9C3E54C_inline (SceneUnderstandingObserverProfile_tD26D3C15007C02CBA3D566888F628E051B3C7B69* __this, const RuntimeMethod* method) 
{
	{
		// public bool AutoUpdate => autoUpdate;
		bool L_0 = __this->___autoUpdate_11;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void WindowsSceneUnderstandingObserver_set_AutoUpdate_m61C7DB4F698DFE45320B604AB08C0933F450EB3F_inline (WindowsSceneUnderstandingObserver_t4C9B4E6A419AF0F50E32C76544915E4A8591B739* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// public bool AutoUpdate { get; set; }
		bool L_0 = ___value0;
		__this->___U3CAutoUpdateU3Ek__BackingField_37 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool SceneUnderstandingObserverProfile_get_UpdateOnceInitialized_mDEF97D452AA885A9C62CC8B10F7B902625E3DACB_inline (SceneUnderstandingObserverProfile_tD26D3C15007C02CBA3D566888F628E051B3C7B69* __this, const RuntimeMethod* method) 
{
	{
		// public bool UpdateOnceInitialized => updateOnceInitialized;
		bool L_0 = __this->___updateOnceInitialized_10;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void WindowsSceneUnderstandingObserver_set_UpdateOnceInitialized_m0D156C09B21671BB88503FB559AF6B7E08038BEA_inline (WindowsSceneUnderstandingObserver_t4C9B4E6A419AF0F50E32C76544915E4A8591B739* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// public bool UpdateOnceInitialized { get; set; }
		bool L_0 = ___value0;
		__this->___U3CUpdateOnceInitializedU3Ek__BackingField_41 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* SceneUnderstandingObserverProfile_get_DefaultMaterial_m709F8F2D1F911CAFE2D1240B0D2E9C97AC6A0FA9_inline (SceneUnderstandingObserverProfile_tD26D3C15007C02CBA3D566888F628E051B3C7B69* __this, const RuntimeMethod* method) 
{
	{
		// public Material DefaultMaterial => defaultMaterial;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_0 = __this->___defaultMaterial_15;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void WindowsSceneUnderstandingObserver_set_DefaultMaterial_m7630F5AAF8926DBACA0CD8D0981524A7514FEA65_inline (WindowsSceneUnderstandingObserver_t4C9B4E6A419AF0F50E32C76544915E4A8591B739* __this, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___value0, const RuntimeMethod* method) 
{
	{
		// public Material DefaultMaterial { get; set; } // Need references so they are included for runtime
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_0 = ___value0;
		__this->___U3CDefaultMaterialU3Ek__BackingField_42 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CDefaultMaterialU3Ek__BackingField_42), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* SceneUnderstandingObserverProfile_get_DefaultWorldMeshMaterial_m2B85347F7F0FF4CCF65F7AFE44021FE466A6A31C_inline (SceneUnderstandingObserverProfile_tD26D3C15007C02CBA3D566888F628E051B3C7B69* __this, const RuntimeMethod* method) 
{
	{
		// public Material DefaultWorldMeshMaterial => defaultWorldMeshMaterial;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_0 = __this->___defaultWorldMeshMaterial_16;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void WindowsSceneUnderstandingObserver_set_DefaultWorldMeshMaterial_m238BFDD79B0A46744DAE7B7D71D4248327D7480C_inline (WindowsSceneUnderstandingObserver_t4C9B4E6A419AF0F50E32C76544915E4A8591B739* __this, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___value0, const RuntimeMethod* method) 
{
	{
		// public Material DefaultWorldMeshMaterial { get; set; } // Need references so they are included for runtime
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_0 = ___value0;
		__this->___U3CDefaultWorldMeshMaterialU3Ek__BackingField_43 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CDefaultWorldMeshMaterialU3Ek__BackingField_43), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t SceneUnderstandingObserverProfile_get_SurfaceTypes_m36F398EE6AA9406138A074F64AEB6951DE5DA282_inline (SceneUnderstandingObserverProfile_tD26D3C15007C02CBA3D566888F628E051B3C7B69* __this, const RuntimeMethod* method) 
{
	{
		// public SpatialAwarenessSurfaceTypes SurfaceTypes => surfaceTypes;
		int32_t L_0 = __this->___surfaceTypes_13;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void WindowsSceneUnderstandingObserver_set_SurfaceTypes_m2BE73486F54848425595D5025F8B44EF67F0C718_inline (WindowsSceneUnderstandingObserver_t4C9B4E6A419AF0F50E32C76544915E4A8591B739* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		// public SpatialAwarenessSurfaceTypes SurfaceTypes { get; set; }
		int32_t L_0 = ___value0;
		__this->___U3CSurfaceTypesU3Ek__BackingField_26 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool SceneUnderstandingObserverProfile_get_RequestMeshData_m0CE2047B61669E6434A4C21B8A1B033B6898DF61_inline (SceneUnderstandingObserverProfile_tD26D3C15007C02CBA3D566888F628E051B3C7B69* __this, const RuntimeMethod* method) 
{
	{
		// public bool RequestMeshData => requestMeshData;
		bool L_0 = __this->___requestMeshData_21;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void WindowsSceneUnderstandingObserver_set_RequestMeshData_mA0D40C0AF79A6191BAD7F622B1EA8C22921EB047_inline (WindowsSceneUnderstandingObserver_t4C9B4E6A419AF0F50E32C76544915E4A8591B739* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// public bool RequestMeshData { get; set; }
		bool L_0 = ___value0;
		__this->___U3CRequestMeshDataU3Ek__BackingField_30 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool SceneUnderstandingObserverProfile_get_RequestPlaneData_m97DE0185ECD45BAB146E90D4FA584146DEFF29C7_inline (SceneUnderstandingObserverProfile_tD26D3C15007C02CBA3D566888F628E051B3C7B69* __this, const RuntimeMethod* method) 
{
	{
		// public bool RequestPlaneData => requestPlaneData;
		bool L_0 = __this->___requestPlaneData_20;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void WindowsSceneUnderstandingObserver_set_RequestPlaneData_m288420998D6DD8AC0A4C2C3F98546D327E358171_inline (WindowsSceneUnderstandingObserver_t4C9B4E6A419AF0F50E32C76544915E4A8591B739* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// public bool RequestPlaneData { get; set; }
		bool L_0 = ___value0;
		__this->___U3CRequestPlaneDataU3Ek__BackingField_31 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool SceneUnderstandingObserverProfile_get_InferRegions_mD28C3BEA6E3A71E4199E4877155012BC23F5884A_inline (SceneUnderstandingObserverProfile_tD26D3C15007C02CBA3D566888F628E051B3C7B69* __this, const RuntimeMethod* method) 
{
	{
		// public bool InferRegions => inferRegions;
		bool L_0 = __this->___inferRegions_22;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void WindowsSceneUnderstandingObserver_set_InferRegions_m669D8AF0E8D1C112215F3502585BC5D118EB351C_inline (WindowsSceneUnderstandingObserver_t4C9B4E6A419AF0F50E32C76544915E4A8591B739* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// public bool InferRegions { get; set; }
		bool L_0 = ___value0;
		__this->___U3CInferRegionsU3Ek__BackingField_29 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool SceneUnderstandingObserverProfile_get_CreateGameObjects_mB11CC7E4AC8B50BE0D7D0951FDE214A10BE1311E_inline (SceneUnderstandingObserverProfile_tD26D3C15007C02CBA3D566888F628E051B3C7B69* __this, const RuntimeMethod* method) 
{
	{
		// public bool CreateGameObjects => createGameObjects;
		bool L_0 = __this->___createGameObjects_19;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void WindowsSceneUnderstandingObserver_set_CreateGameObjects_mA3620FD8A6E652A84B9DD258E13977B8D8415539_inline (WindowsSceneUnderstandingObserver_t4C9B4E6A419AF0F50E32C76544915E4A8591B739* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// public bool CreateGameObjects { get; set; }
		bool L_0 = ___value0;
		__this->___U3CCreateGameObjectsU3Ek__BackingField_36 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool SceneUnderstandingObserverProfile_get_UsePersistentObjects_m4DD55204939A1FC18005885CE60F83D4708B3FBD_inline (SceneUnderstandingObserverProfile_tD26D3C15007C02CBA3D566888F628E051B3C7B69* __this, const RuntimeMethod* method) 
{
	{
		// public bool UsePersistentObjects => usePersistentObjects;
		bool L_0 = __this->___usePersistentObjects_25;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void WindowsSceneUnderstandingObserver_set_UsePersistentObjects_m60EA3E443913AC97BA43D4950E37972E102CD4FE_inline (WindowsSceneUnderstandingObserver_t4C9B4E6A419AF0F50E32C76544915E4A8591B739* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// public bool UsePersistentObjects { get; set; }
		bool L_0 = ___value0;
		__this->___U3CUsePersistentObjectsU3Ek__BackingField_33 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float BaseSpatialAwarenessObserverProfile_get_UpdateInterval_m3AE1E7839241F4F5B2CBFEAFE987D53835F1C751_inline (BaseSpatialAwarenessObserverProfile_t7A50E95DBFF01391175C2D418C1ABB3C21F43225* __this, const RuntimeMethod* method) 
{
	{
		// public float UpdateInterval => updateInterval;
		float L_0 = __this->___updateInterval_9;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BaseSpatialObserver_set_UpdateInterval_m6D940C69DFEA73CDD69A67FAE94A75E9AE7D3E7C_inline (BaseSpatialObserver_tFBE4A1B3D5FCCB85BD0DC39709C1FCB7085D797B* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		// public float UpdateInterval { get; set; } = 3.5f; // 3.5 seconds
		float L_0 = ___value0;
		__this->___U3CUpdateIntervalU3Ek__BackingField_25 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float SceneUnderstandingObserverProfile_get_FirstAutoUpdateDelay_m7E902EA746E71B953DA38A32316B36E8F16F6547_inline (SceneUnderstandingObserverProfile_tD26D3C15007C02CBA3D566888F628E051B3C7B69* __this, const RuntimeMethod* method) 
{
	{
		// public float FirstAutoUpdateDelay => firstAutoUpdateDelay;
		float L_0 = __this->___firstAutoUpdateDelay_23;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void WindowsSceneUnderstandingObserver_set_FirstAutoUpdateDelay_m0C75AE0D1CEA83BBCAB5C96DC8DD37F269B33083_inline (WindowsSceneUnderstandingObserver_t4C9B4E6A419AF0F50E32C76544915E4A8591B739* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		// public float FirstAutoUpdateDelay { get; set; }
		float L_0 = ___value0;
		__this->___U3CFirstAutoUpdateDelayU3Ek__BackingField_40 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool SceneUnderstandingObserverProfile_get_ShouldLoadFromFile_mC7F9BD425930854EF25C0308305C0C181F46468E_inline (SceneUnderstandingObserverProfile_tD26D3C15007C02CBA3D566888F628E051B3C7B69* __this, const RuntimeMethod* method) 
{
	{
		// public bool ShouldLoadFromFile => shouldLoadFromFile;
		bool L_0 = __this->___shouldLoadFromFile_17;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void WindowsSceneUnderstandingObserver_set_ShouldLoadFromFile_m65A0FFBDB80179AFB3900DAFBA1D0A52E6B603D3_inline (WindowsSceneUnderstandingObserver_t4C9B4E6A419AF0F50E32C76544915E4A8591B739* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// public bool ShouldLoadFromFile { get; set; }
		bool L_0 = ___value0;
		__this->___U3CShouldLoadFromFileU3Ek__BackingField_27 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69* SceneUnderstandingObserverProfile_get_SerializedScene_m0F8BB62674E78AD401CF0ECC5E8616AF342B7D7E_inline (SceneUnderstandingObserverProfile_tD26D3C15007C02CBA3D566888F628E051B3C7B69* __this, const RuntimeMethod* method) 
{
	{
		// public TextAsset SerializedScene => serializedScene;
		TextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69* L_0 = __this->___serializedScene_18;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t SceneUnderstandingObserverProfile_get_WorldMeshLevelOfDetail_m34792C9335EAF624BB46E2029A0C22E858A941EB_inline (SceneUnderstandingObserverProfile_tD26D3C15007C02CBA3D566888F628E051B3C7B69* __this, const RuntimeMethod* method) 
{
	{
		// public SpatialAwarenessMeshLevelOfDetail WorldMeshLevelOfDetail => worldMeshLevelOfDetail;
		int32_t L_0 = __this->___worldMeshLevelOfDetail_24;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void WindowsSceneUnderstandingObserver_set_WorldMeshLevelOfDetail_m77E209BCC79F6D104F14877EF7EE8E0F6B566F8E_inline (WindowsSceneUnderstandingObserver_t4C9B4E6A419AF0F50E32C76544915E4A8591B739* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		// public SpatialAwarenessMeshLevelOfDetail WorldMeshLevelOfDetail { get; set; }
		int32_t L_0 = ___value0;
		__this->___U3CWorldMeshLevelOfDetailU3Ek__BackingField_39 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t SceneUnderstandingObserverProfile_get_InstantiationBatchRate_m81E055B935823EF94FBB1EA63E2BB7D7784CACD3_inline (SceneUnderstandingObserverProfile_tD26D3C15007C02CBA3D566888F628E051B3C7B69* __this, const RuntimeMethod* method) 
{
	{
		// public int InstantiationBatchRate => instantiationBatchRate;
		int32_t L_0 = __this->___instantiationBatchRate_14;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void WindowsSceneUnderstandingObserver_set_InstantiationBatchRate_m4014C164A43237F9AC577910BC9F588CC992FC26_inline (WindowsSceneUnderstandingObserver_t4C9B4E6A419AF0F50E32C76544915E4A8591B739* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		// public int InstantiationBatchRate { get; set; }
		int32_t L_0 = ___value0;
		__this->___U3CInstantiationBatchRateU3Ek__BackingField_28 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 BaseSpatialAwarenessObserverProfile_get_ObservationExtents_m3E05995AA3C492FA17BA656C8EEF1FB5D82C96FD_inline (BaseSpatialAwarenessObserverProfile_t7A50E95DBFF01391175C2D418C1ABB3C21F43225* __this, const RuntimeMethod* method) 
{
	{
		// public Vector3 ObservationExtents => observationExtents;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = __this->___observationExtents_7;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BaseSpatialObserver_set_ObservationExtents_mB411BA3675C18D91CAC89279A6A87388050C1D9F_inline (BaseSpatialObserver_tFBE4A1B3D5FCCB85BD0DC39709C1FCB7085D797B* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) 
{
	{
		// public Vector3 ObservationExtents { get; set; } = Vector3.one * 3f; // 3 meter sides / radius
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___value0;
		__this->___U3CObservationExtentsU3Ek__BackingField_24 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float SceneUnderstandingObserverProfile_get_QueryRadius_mA786922BB4BAB0DD5096D35582B4476C668127BA_inline (SceneUnderstandingObserverProfile_tD26D3C15007C02CBA3D566888F628E051B3C7B69* __this, const RuntimeMethod* method) 
{
	{
		// public float QueryRadius => queryRadius;
		float L_0 = __this->___queryRadius_26;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void WindowsSceneUnderstandingObserver_set_QueryRadius_mB12638A56E3E2A4A2B2C195BA2A7642CA479A97B_inline (WindowsSceneUnderstandingObserver_t4C9B4E6A419AF0F50E32C76544915E4A8591B739* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		// public float QueryRadius { get; set; }
		float L_0 = ___value0;
		__this->___U3CQueryRadiusU3Ek__BackingField_34 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool SceneUnderstandingObserverProfile_get_RequestOcclusionMask_m7D6292807A90160CEAC104C04CEA0AB030002D2C_inline (SceneUnderstandingObserverProfile_tD26D3C15007C02CBA3D566888F628E051B3C7B69* __this, const RuntimeMethod* method) 
{
	{
		// public bool RequestOcclusionMask => requestOcclusionMask;
		bool L_0 = __this->___requestOcclusionMask_27;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void WindowsSceneUnderstandingObserver_set_RequestOcclusionMask_mCB080214BB912945C820F0EB1BC007897B7E8276_inline (WindowsSceneUnderstandingObserver_t4C9B4E6A419AF0F50E32C76544915E4A8591B739* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// public bool RequestOcclusionMask { get; set; }
		bool L_0 = ___value0;
		__this->___U3CRequestOcclusionMaskU3Ek__BackingField_32 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A SceneUnderstandingObserverProfile_get_OcclusionMaskResolution_mB493EA633395F80E312B7C6752867CF7D2142C47_inline (SceneUnderstandingObserverProfile_tD26D3C15007C02CBA3D566888F628E051B3C7B69* __this, const RuntimeMethod* method) 
{
	{
		// public Vector2Int OcclusionMaskResolution => occlusionMaskResolution;
		Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A L_0 = __this->___occlusionMaskResolution_28;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void WindowsSceneUnderstandingObserver_set_OcclusionMaskResolution_mF7A7C028E5ACC8FFC3BA0B907634A96EF4CF432D_inline (WindowsSceneUnderstandingObserver_t4C9B4E6A419AF0F50E32C76544915E4A8591B739* __this, Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___value0, const RuntimeMethod* method) 
{
	{
		// public Vector2Int OcclusionMaskResolution { get; set; }
		Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A L_0 = ___value0;
		__this->___U3COcclusionMaskResolutionU3Ek__BackingField_35 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool SceneUnderstandingObserverProfile_get_OrientScene_mAB7A77E9E0F7CFB2762007B3930DDB2C8814989E_inline (SceneUnderstandingObserverProfile_tD26D3C15007C02CBA3D566888F628E051B3C7B69* __this, const RuntimeMethod* method) 
{
	{
		// public bool OrientScene => orientScene;
		bool L_0 = __this->___orientScene_29;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void WindowsSceneUnderstandingObserver_set_OrientScene_m6B3890BBF7DC9EE5A3709ACF05C2EB27892F32A5_inline (WindowsSceneUnderstandingObserver_t4C9B4E6A419AF0F50E32C76544915E4A8591B739* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// public bool OrientScene { get; set; }
		bool L_0 = ___value0;
		__this->___U3COrientSceneU3Ek__BackingField_38 = L_0;
		return;
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
