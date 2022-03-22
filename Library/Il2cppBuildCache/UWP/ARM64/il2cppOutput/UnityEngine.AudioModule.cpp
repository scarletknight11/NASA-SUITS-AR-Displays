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
template <typename T1>
struct GenericVirtualActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
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
template <typename T1>
struct InvokerActionInvoker1
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1 p1)
	{
		void* params[1] = { &p1 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
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
struct InvokerActionInvoker2<T1*, T2>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2)
	{
		void* params[2] = { p1, &p2 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1, typename T2>
struct InvokerActionInvoker2<T1*, T2*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2)
	{
		void* params[2] = { p1, p2 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3;
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3<T1*, T2*, T3>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2, T3 p3)
	{
		void* params[3] = { p1, p2, &p3 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};

// UnityEngine.Color32[]
struct Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// UnityEngine.Resolution[]
struct ResolutionU5BU5D_t943BB1FE2B73E9E630A701D55F4C6EED8B54175A;
// System.Single[]
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// UnityEngine.WebCamDevice[]
struct WebCamDeviceU5BU5D_tA5B1352BDE6FE233B66C3ABF96E00EB3215629F5;
// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07;
// System.ArgumentException
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263;
// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C;
// UnityEngine.AudioClip
struct AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20;
// UnityEngine.AudioHighPassFilter
struct AudioHighPassFilter_tC553FD08CC1A23D836BF86BA3070256FB8006718;
// UnityEngine.AudioLowPassFilter
struct AudioLowPassFilter_tB32626505D7322A99E2F35C81584960BAC42C2C0;
// UnityEngine.Experimental.Audio.AudioSampleProvider
struct AudioSampleProvider_t602353124A2F6F2AEC38E56C3C21932344F712E2;
// UnityEngine.AudioSource
struct AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// System.IAsyncResult
struct IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.NullReferenceException
struct NullReferenceException_tBDE63A6D24569B964908408389070C6A9F5005BB;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// System.String
struct String_t;
// UnityEngine.Texture
struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityEngine.WebCamTexture
struct WebCamTexture_t2021D179149C925AA6D73E6F1898C8D46521C749;
// UnityEngine.AudioClip/PCMReaderCallback
struct PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E;
// UnityEngine.AudioClip/PCMSetPositionCallback
struct PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072;
// UnityEngine.Experimental.Audio.AudioSampleProvider/SampleFramesHandler
struct SampleFramesHandler_tFE84FF9BBCEFB880D46227188F375BEF680AAA30;
// UnityEngine.AudioSettings/AudioConfigurationChangeHandler
struct AudioConfigurationChangeHandler_tE071B0CBA3B3A77D3E41F5FCB65B4017885B3177;

IL2CPP_EXTERN_C RuntimeClass* ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AudioSettings_t66C4BCA1E463B061E2EC9063FB882ACED20D47BD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NullReferenceException_tBDE63A6D24569B964908408389070C6A9F5005BB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ResolutionU5BU5D_t943BB1FE2B73E9E630A701D55F4C6EED8B54175A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral0ED72C9B4D0AB21E88D08F74AC73C6C8CEC4B7DF;
IL2CPP_EXTERN_C String_t* _stringLiteral49403A17E8D32B35CB5B66AB1A2651A7EEAD1B00;
IL2CPP_EXTERN_C String_t* _stringLiteral5633EC5A323E76AB2DB48162D296F674B1A4AE13;
IL2CPP_EXTERN_C String_t* _stringLiteral67DB02F1FABDC6C47E8B1ED9A9ADC8E17845BD4F;
IL2CPP_EXTERN_C String_t* _stringLiteral747CA643504D60A83574C1454D344DADB4D2BA17;
IL2CPP_EXTERN_C String_t* _stringLiteral75DC747EA24DB7802D5E580A86C87FFCD3EA69B0;
IL2CPP_EXTERN_C String_t* _stringLiteral7F33A83E7C1398BEA9BE2EB876FECFEF16BCCDBD;
IL2CPP_EXTERN_C String_t* _stringLiteral8C53570A90E7EFA87FDB7F0DCC0EE1FCC019E426;
IL2CPP_EXTERN_C String_t* _stringLiteralA69BE8EF0F1482795ABF1CC395A765AA747ECD85;
IL2CPP_EXTERN_C String_t* _stringLiteralB7ED4706BFE5D072AD3E5A0F26644FF44E847682;
IL2CPP_EXTERN_C String_t* _stringLiteralB9ACF8E6DF73A863387F2ABAD61D84C3197C6B01;
IL2CPP_EXTERN_C String_t* _stringLiteralC563ED6549A22286FAAA38A5D49C5B247A52C622;
IL2CPP_EXTERN_C String_t* _stringLiteralCAEF26BE398F51129C4063A43AD4BF947AC128D6;
IL2CPP_EXTERN_C String_t* _stringLiteralCC867B94415511BD48E92E3242D7EDA425D20035;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C const RuntimeMethod* AudioClip_Create_m11010A6FE993BA862F8429FFD47D899225B26781_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AudioClip_SetData_m7B473C614C11953D746770F4F89B44600B5A6AF3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Microphone_Start_m135193EDEA092BB393D75C728456523DC8E13BD9_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;
struct Resolution_tDF215F567EEFFD07B9A8FB7CEACC08EA6B8B9525;

struct Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259;
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct ResolutionU5BU5D_t943BB1FE2B73E9E630A701D55F4C6EED8B54175A;
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
struct WebCamDeviceU5BU5D_tA5B1352BDE6FE233B66C3ABF96E00EB3215629F5;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_t462BCCFB9B78348533823E0754F65F52A5348F89 
{
};
struct Il2CppArrayBounds;

// UnityEngine.Experimental.Audio.AudioSampleProvider
struct AudioSampleProvider_t602353124A2F6F2AEC38E56C3C21932344F712E2  : public RuntimeObject
{
	// UnityEngine.Experimental.Audio.AudioSampleProvider/SampleFramesHandler UnityEngine.Experimental.Audio.AudioSampleProvider::sampleFramesAvailable
	SampleFramesHandler_tFE84FF9BBCEFB880D46227188F375BEF680AAA30* ___sampleFramesAvailable_0;
	// UnityEngine.Experimental.Audio.AudioSampleProvider/SampleFramesHandler UnityEngine.Experimental.Audio.AudioSampleProvider::sampleFramesOverflow
	SampleFramesHandler_tFE84FF9BBCEFB880D46227188F375BEF680AAA30* ___sampleFramesOverflow_1;
};

// UnityEngine.AudioSettings
struct AudioSettings_t66C4BCA1E463B061E2EC9063FB882ACED20D47BD  : public RuntimeObject
{
};

struct AudioSettings_t66C4BCA1E463B061E2EC9063FB882ACED20D47BD_StaticFields
{
	// UnityEngine.AudioSettings/AudioConfigurationChangeHandler UnityEngine.AudioSettings::OnAudioConfigurationChanged
	AudioConfigurationChangeHandler_tE071B0CBA3B3A77D3E41F5FCB65B4017885B3177* ___OnAudioConfigurationChanged_0;
	// System.Action UnityEngine.AudioSettings::OnAudioSystemShuttingDown
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___OnAudioSystemShuttingDown_1;
	// System.Action UnityEngine.AudioSettings::OnAudioSystemStartedUp
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___OnAudioSystemStartedUp_2;
};

// UnityEngine.Microphone
struct Microphone_tC7BC94B89C5C1409E8F2C532B7EBEF7F23989AB8  : public RuntimeObject
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

// UnityEngine.Resolution
struct Resolution_tDF215F567EEFFD07B9A8FB7CEACC08EA6B8B9525 
{
	// System.Int32 UnityEngine.Resolution::m_Width
	int32_t ___m_Width_0;
	// System.Int32 UnityEngine.Resolution::m_Height
	int32_t ___m_Height_1;
	// System.Int32 UnityEngine.Resolution::m_RefreshRate
	int32_t ___m_RefreshRate_2;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
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

// UnityEngine.WebCamDevice
struct WebCamDevice_t3D72A89B7F52FD27192023A67254D19E89D9738C 
{
	// System.String UnityEngine.WebCamDevice::m_Name
	String_t* ___m_Name_0;
	// System.String UnityEngine.WebCamDevice::m_DepthCameraName
	String_t* ___m_DepthCameraName_1;
	// System.Int32 UnityEngine.WebCamDevice::m_Flags
	int32_t ___m_Flags_2;
	// UnityEngine.WebCamKind UnityEngine.WebCamDevice::m_Kind
	int32_t ___m_Kind_3;
	// UnityEngine.Resolution[] UnityEngine.WebCamDevice::m_Resolutions
	ResolutionU5BU5D_t943BB1FE2B73E9E630A701D55F4C6EED8B54175A* ___m_Resolutions_4;
};
// Native definition for P/Invoke marshalling of UnityEngine.WebCamDevice
struct WebCamDevice_t3D72A89B7F52FD27192023A67254D19E89D9738C_marshaled_pinvoke
{
	char* ___m_Name_0;
	char* ___m_DepthCameraName_1;
	int32_t ___m_Flags_2;
	int32_t ___m_Kind_3;
	Resolution_tDF215F567EEFFD07B9A8FB7CEACC08EA6B8B9525* ___m_Resolutions_4;
};
// Native definition for COM marshalling of UnityEngine.WebCamDevice
struct WebCamDevice_t3D72A89B7F52FD27192023A67254D19E89D9738C_marshaled_com
{
	Il2CppChar* ___m_Name_0;
	Il2CppChar* ___m_DepthCameraName_1;
	int32_t ___m_Flags_2;
	int32_t ___m_Kind_3;
	Resolution_tDF215F567EEFFD07B9A8FB7CEACC08EA6B8B9525* ___m_Resolutions_4;
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

// UnityEngine.Playables.PlayableHandle
struct PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 
{
	// System.IntPtr UnityEngine.Playables.PlayableHandle::m_Handle
	intptr_t ___m_Handle_0;
	// System.UInt32 UnityEngine.Playables.PlayableHandle::m_Version
	uint32_t ___m_Version_1;
};

struct PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_StaticFields
{
	// UnityEngine.Playables.PlayableHandle UnityEngine.Playables.PlayableHandle::m_Null
	PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 ___m_Null_2;
};

// UnityEngine.Playables.PlayableOutputHandle
struct PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883 
{
	// System.IntPtr UnityEngine.Playables.PlayableOutputHandle::m_Handle
	intptr_t ___m_Handle_0;
	// System.UInt32 UnityEngine.Playables.PlayableOutputHandle::m_Version
	uint32_t ___m_Version_1;
};

struct PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883_StaticFields
{
	// UnityEngine.Playables.PlayableOutputHandle UnityEngine.Playables.PlayableOutputHandle::m_Null
	PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883 ___m_Null_2;
};

// UnityEngine.AudioClip
struct AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
	// UnityEngine.AudioClip/PCMReaderCallback UnityEngine.AudioClip::m_PCMReaderCallback
	PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E* ___m_PCMReaderCallback_4;
	// UnityEngine.AudioClip/PCMSetPositionCallback UnityEngine.AudioClip::m_PCMSetPositionCallback
	PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072* ___m_PCMSetPositionCallback_5;
};

// UnityEngine.Audio.AudioClipPlayable
struct AudioClipPlayable_tD4B758E68CAE03CB0CD31F90C8A3E603B97143A0 
{
	// UnityEngine.Playables.PlayableHandle UnityEngine.Audio.AudioClipPlayable::m_Handle
	PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 ___m_Handle_0;
};

// UnityEngine.Audio.AudioMixerPlayable
struct AudioMixerPlayable_t6AADDF0C53DF1B4C17969EC24B3B4E4975F3A56C 
{
	// UnityEngine.Playables.PlayableHandle UnityEngine.Audio.AudioMixerPlayable::m_Handle
	PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 ___m_Handle_0;
};

// UnityEngine.Audio.AudioPlayableOutput
struct AudioPlayableOutput_tC3DFF8095F429D90129A367EAB98A24F6D6ADF20 
{
	// UnityEngine.Playables.PlayableOutputHandle UnityEngine.Audio.AudioPlayableOutput::m_Handle
	PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883 ___m_Handle_0;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
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

// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07  : public MulticastDelegate_t
{
};

// System.ArgumentException
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	// System.String System.ArgumentException::_paramName
	String_t* ____paramName_18;
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// System.NullReferenceException
struct NullReferenceException_tBDE63A6D24569B964908408389070C6A9F5005BB  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// UnityEngine.WebCamTexture
struct WebCamTexture_t2021D179149C925AA6D73E6F1898C8D46521C749  : public Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700
{
};

// UnityEngine.AudioClip/PCMReaderCallback
struct PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E  : public MulticastDelegate_t
{
};

// UnityEngine.AudioClip/PCMSetPositionCallback
struct PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072  : public MulticastDelegate_t
{
};

// UnityEngine.Experimental.Audio.AudioSampleProvider/SampleFramesHandler
struct SampleFramesHandler_tFE84FF9BBCEFB880D46227188F375BEF680AAA30  : public MulticastDelegate_t
{
};

// UnityEngine.AudioSettings/AudioConfigurationChangeHandler
struct AudioConfigurationChangeHandler_tE071B0CBA3B3A77D3E41F5FCB65B4017885B3177  : public MulticastDelegate_t
{
};

// UnityEngine.AudioBehaviour
struct AudioBehaviour_t2DC0BEF7B020C952F3D2DA5AAAC88501C7EEB941  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.AudioHighPassFilter
struct AudioHighPassFilter_tC553FD08CC1A23D836BF86BA3070256FB8006718  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.AudioLowPassFilter
struct AudioLowPassFilter_tB32626505D7322A99E2F35C81584960BAC42C2C0  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.AudioListener
struct AudioListener_t1D629CE9BC079C8ECDE8F822616E8A8E319EAE35  : public AudioBehaviour_t2DC0BEF7B020C952F3D2DA5AAAC88501C7EEB941
{
};

// UnityEngine.AudioSource
struct AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299  : public AudioBehaviour_t2DC0BEF7B020C952F3D2DA5AAAC88501C7EEB941
{
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
// System.Single[]
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C  : public RuntimeArray
{
	ALIGN_FIELD (8) float m_Items[1];

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
// UnityEngine.Resolution[]
struct ResolutionU5BU5D_t943BB1FE2B73E9E630A701D55F4C6EED8B54175A  : public RuntimeArray
{
	ALIGN_FIELD (8) Resolution_tDF215F567EEFFD07B9A8FB7CEACC08EA6B8B9525 m_Items[1];

	inline Resolution_tDF215F567EEFFD07B9A8FB7CEACC08EA6B8B9525 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Resolution_tDF215F567EEFFD07B9A8FB7CEACC08EA6B8B9525* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Resolution_tDF215F567EEFFD07B9A8FB7CEACC08EA6B8B9525 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Resolution_tDF215F567EEFFD07B9A8FB7CEACC08EA6B8B9525 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Resolution_tDF215F567EEFFD07B9A8FB7CEACC08EA6B8B9525* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Resolution_tDF215F567EEFFD07B9A8FB7CEACC08EA6B8B9525 value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.WebCamDevice[]
struct WebCamDeviceU5BU5D_tA5B1352BDE6FE233B66C3ABF96E00EB3215629F5  : public RuntimeArray
{
	ALIGN_FIELD (8) WebCamDevice_t3D72A89B7F52FD27192023A67254D19E89D9738C m_Items[1];

	inline WebCamDevice_t3D72A89B7F52FD27192023A67254D19E89D9738C GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline WebCamDevice_t3D72A89B7F52FD27192023A67254D19E89D9738C* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, WebCamDevice_t3D72A89B7F52FD27192023A67254D19E89D9738C value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_Name_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_DepthCameraName_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_Resolutions_4), (void*)NULL);
		#endif
	}
	inline WebCamDevice_t3D72A89B7F52FD27192023A67254D19E89D9738C GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline WebCamDevice_t3D72A89B7F52FD27192023A67254D19E89D9738C* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, WebCamDevice_t3D72A89B7F52FD27192023A67254D19E89D9738C value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_Name_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_DepthCameraName_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_Resolutions_4), (void*)NULL);
		#endif
	}
};
// UnityEngine.Color32[]
struct Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259  : public RuntimeArray
{
	ALIGN_FIELD (8) Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B m_Items[1];

	inline Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B value)
	{
		m_Items[index] = value;
	}
};



// System.Void UnityEngine.AudioSettings/AudioConfigurationChangeHandler::Invoke(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AudioConfigurationChangeHandler_Invoke_m4DC27DD11512481B60071B20284E6886DAE54DE2_inline (AudioConfigurationChangeHandler_tE071B0CBA3B3A77D3E41F5FCB65B4017885B3177* __this, bool ___deviceWasChanged0, const RuntimeMethod* method) ;
// System.Void System.Action::Invoke()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m2149FA40CEC8D82AC20D3508AB40C0D8EFEF68E6 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.AudioClip::get_channels()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AudioClip_get_channels_mFEECF5D6389D196BA5102EB79257298B9FDC9F84 (AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* __this, const RuntimeMethod* method) ;
// System.String UnityEngine.AudioClip::GetName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AudioClip_GetName_m561BBA037957E25D5BC5A962A1AA0C789895C9D1 (AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0 (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219 (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.AudioClip::get_samples()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AudioClip_get_samples_mDEA01CA75E7DEA0F8D480E4AF97FB96085BCF38E (AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* __this, const RuntimeMethod* method) ;
// System.Void System.ArgumentException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465 (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.AudioClip::SetData(UnityEngine.AudioClip,System.Single[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AudioClip_SetData_m57A3E3F5DF493C992EFDDAF314672BF04A6B0296 (AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___clip0, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___data1, int32_t ___numsamples2, int32_t ___samplesOffset3, const RuntimeMethod* method) ;
// UnityEngine.AudioClip UnityEngine.AudioClip::Create(System.String,System.Int32,System.Int32,System.Int32,System.Boolean,UnityEngine.AudioClip/PCMReaderCallback,UnityEngine.AudioClip/PCMSetPositionCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* AudioClip_Create_m11010A6FE993BA862F8429FFD47D899225B26781 (String_t* ___name0, int32_t ___lengthSamples1, int32_t ___channels2, int32_t ___frequency3, bool ___stream4, PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E* ___pcmreadercallback5, PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072* ___pcmsetpositioncallback6, const RuntimeMethod* method) ;
// System.Void System.NullReferenceException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NullReferenceException__ctor_mD26D62094A5E49C18D817817E17FDFBC1D3BD752 (NullReferenceException_tBDE63A6D24569B964908408389070C6A9F5005BB* __this, const RuntimeMethod* method) ;
// UnityEngine.AudioClip UnityEngine.AudioClip::Construct_Internal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* AudioClip_Construct_Internal_m1F5A3B2888B2C422668951297BACEC59C2DCD699 (const RuntimeMethod* method) ;
// System.Void UnityEngine.AudioClip::add_m_PCMReaderCallback(UnityEngine.AudioClip/PCMReaderCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioClip_add_m_PCMReaderCallback_mA226EA143D90E04117A740FC9FA9F1111346CA83 (AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* __this, PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.AudioClip::add_m_PCMSetPositionCallback(UnityEngine.AudioClip/PCMSetPositionCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioClip_add_m_PCMSetPositionCallback_mB280AD93A847C65F536D846FECC7DCBE9266C37F (AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* __this, PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.AudioClip::CreateUserSound(System.String,System.Int32,System.Int32,System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioClip_CreateUserSound_m34DA102DD6848D555D4A9D45AFAA9D3E5574BC45 (AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* __this, String_t* ___name0, int32_t ___lengthSamples1, int32_t ___channels2, int32_t ___frequency3, bool ___stream4, const RuntimeMethod* method) ;
// System.Delegate System.Delegate::Combine(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Combine_m8B9D24CED35033C7FC56501DFE650F5CB7FF012C (Delegate_t* ___a0, Delegate_t* ___b1, const RuntimeMethod* method) ;
// System.Delegate System.Delegate::Remove(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Remove_m40506877934EC1AD4ADAE57F5E97AF0BC0F96116 (Delegate_t* ___source0, Delegate_t* ___value1, const RuntimeMethod* method) ;
// System.Void UnityEngine.AudioClip/PCMReaderCallback::Invoke(System.Single[])
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PCMReaderCallback_Invoke_m76784C690C36B513E2AA5B0E4FD9831B2C7E5152_inline (PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E* __this, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___data0, const RuntimeMethod* method) ;
// System.Void UnityEngine.AudioClip/PCMSetPositionCallback::Invoke(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PCMSetPositionCallback_Invoke_m434D4F02FA25F91DF6199EC5A799C551C7F93702_inline (PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072* __this, int32_t ___position0, const RuntimeMethod* method) ;
// System.Void UnityEngine.AudioSource::SetPitch(UnityEngine.AudioSource,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_SetPitch_m5BED1C7AB47626ACCD727A20D22FCF9FC29D2F9F (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___source0, float ___pitch1, const RuntimeMethod* method) ;
// System.Void UnityEngine.AudioSource::PlayHelper(UnityEngine.AudioSource,System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_PlayHelper_m05452A8911044189CCCD983556E8A19A2F6747E1 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___source0, uint64_t ___delay1, const RuntimeMethod* method) ;
// System.Void UnityEngine.AudioSource::PlayOneShot(UnityEngine.AudioClip,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_PlayOneShot_mF6FE95C58996B38EF6E7F7482F95F5E15E0AB30B (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___clip0, float ___volumeScale1, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogWarning(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogWarning_mEF15C6B17CE4E1FA7E379CDB82CE40FCD89A3F28 (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.Void UnityEngine.AudioSource::PlayOneShotHelper(UnityEngine.AudioSource,UnityEngine.AudioClip,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_PlayOneShotHelper_m4F49B7E1A20900AA1B8CEED61D58B7B25A9801DD (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___source0, AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___clip1, float ___volumeScale2, const RuntimeMethod* method) ;
// System.Void UnityEngine.AudioSource::Stop(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_Stop_m8A4872F0A2680798CD28894DD28609445C4783F5 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, bool ___stopOneShots0, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Microphone::GetMicrophoneDeviceIDFromName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Microphone_GetMicrophoneDeviceIDFromName_m1E6B9D14025ABB58A7F7752AA34F1A66D7259AEA (String_t* ___name0, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method) ;
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5 (int32_t* __this, const RuntimeMethod* method) ;
// UnityEngine.AudioClip UnityEngine.Microphone::StartRecord(System.Int32,System.Boolean,System.Single,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* Microphone_StartRecord_m8985786807CDB52810B46AE1A062E9D5EB39CD28 (int32_t ___deviceID0, bool ___loop1, float ___lengthSec2, int32_t ___frequency3, const RuntimeMethod* method) ;
// System.Void UnityEngine.Microphone::EndRecord(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Microphone_EndRecord_m04D2DBC749258DC820123A8FB3D42AC1D1DC075D (int32_t ___deviceID0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Microphone::IsRecording(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Microphone_IsRecording_mC643EFD56EF99D2547848C0266CC46B919F205D3 (int32_t ___deviceID0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Microphone::GetDeviceCaps(System.Int32,System.Int32&,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Microphone_GetDeviceCaps_m76569111B3CFD49654B11FCD5169FA34FD185945 (int32_t ___deviceID0, int32_t* ___minFreq1, int32_t* ___maxFreq2, const RuntimeMethod* method) ;
// System.String UnityEngine.WebCamDevice::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* WebCamDevice_get_name_m2BF75E8EA486668299906EAC9B35214890D4601E (WebCamDevice_t3D72A89B7F52FD27192023A67254D19E89D9738C* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.WebCamDevice::get_isFrontFacing()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WebCamDevice_get_isFrontFacing_mA021D9DBDDB227FEA8AA635E833EAB7718672404 (WebCamDevice_t3D72A89B7F52FD27192023A67254D19E89D9738C* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Texture::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture__ctor_mC0C7974BEBD867CEB281409FEA15A78CD91B19CC (Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.WebCamTexture::Internal_CreateWebCamTexture(UnityEngine.WebCamTexture,System.String,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebCamTexture_Internal_CreateWebCamTexture_m507B13BE568DBE34BC4F8429FCCE842734FDEE5C (WebCamTexture_t2021D179149C925AA6D73E6F1898C8D46521C749* ___self0, String_t* ___scriptingDevice1, int32_t ___requestedWidth2, int32_t ___requestedHeight3, int32_t ___maxFramerate4, const RuntimeMethod* method) ;
// UnityEngine.Color32[] UnityEngine.WebCamTexture::GetPixels32(UnityEngine.Color32[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* WebCamTexture_GetPixels32_m7F4F302BE0E517451593C43E3F0D0D1B7840E39E (WebCamTexture_t2021D179149C925AA6D73E6F1898C8D46521C749* __this, Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* ___colors0, const RuntimeMethod* method) ;
// UnityEngine.Playables.PlayableHandle UnityEngine.Audio.AudioClipPlayable::GetHandle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 AudioClipPlayable_GetHandle_mEA1D664328FF9B08E4F7D5EBCD4B51A754D97C44 (AudioClipPlayable_tD4B758E68CAE03CB0CD31F90C8A3E603B97143A0* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Playables.PlayableHandle::op_Equality(UnityEngine.Playables.PlayableHandle,UnityEngine.Playables.PlayableHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayableHandle_op_Equality_m5E9B847A9D36875C78902727FE36FBEDA4D2D3B9 (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 ___x0, PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 ___y1, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Audio.AudioClipPlayable::Equals(UnityEngine.Audio.AudioClipPlayable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AudioClipPlayable_Equals_m9C1C75ACBB74FE06AD02BE4643F6EB39413EFF83 (AudioClipPlayable_tD4B758E68CAE03CB0CD31F90C8A3E603B97143A0* __this, AudioClipPlayable_tD4B758E68CAE03CB0CD31F90C8A3E603B97143A0 ___other0, const RuntimeMethod* method) ;
// UnityEngine.Playables.PlayableHandle UnityEngine.Audio.AudioMixerPlayable::GetHandle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 AudioMixerPlayable_GetHandle_m6C182D9794E901D123223BB57738A302BEAB41FD (AudioMixerPlayable_t6AADDF0C53DF1B4C17969EC24B3B4E4975F3A56C* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Audio.AudioMixerPlayable::Equals(UnityEngine.Audio.AudioMixerPlayable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AudioMixerPlayable_Equals_mDFB945EB48199A338BAD00D40FB8EEC34CF64D57 (AudioMixerPlayable_t6AADDF0C53DF1B4C17969EC24B3B4E4975F3A56C* __this, AudioMixerPlayable_t6AADDF0C53DF1B4C17969EC24B3B4E4975F3A56C ___other0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Experimental.Audio.AudioSampleProvider/SampleFramesHandler::Invoke(UnityEngine.Experimental.Audio.AudioSampleProvider,System.UInt32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SampleFramesHandler_Invoke_m478D5645634B8C734E58B59CF7750797FC54F1BC_inline (SampleFramesHandler_tFE84FF9BBCEFB880D46227188F375BEF680AAA30* __this, AudioSampleProvider_t602353124A2F6F2AEC38E56C3C21932344F712E2* ___provider0, uint32_t ___sampleFrameCount1, const RuntimeMethod* method) ;
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
// System.Void UnityEngine.AudioSettings::InvokeOnAudioConfigurationChanged(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSettings_InvokeOnAudioConfigurationChanged_m68920E152749F71573C3D10E20967B1850B6EFD8 (bool ___deviceWasChanged0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AudioSettings_t66C4BCA1E463B061E2EC9063FB882ACED20D47BD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		AudioConfigurationChangeHandler_tE071B0CBA3B3A77D3E41F5FCB65B4017885B3177* L_0 = ((AudioSettings_t66C4BCA1E463B061E2EC9063FB882ACED20D47BD_StaticFields*)il2cpp_codegen_static_fields_for(AudioSettings_t66C4BCA1E463B061E2EC9063FB882ACED20D47BD_il2cpp_TypeInfo_var))->___OnAudioConfigurationChanged_0;
		V_0 = (bool)((!(((RuntimeObject*)(AudioConfigurationChangeHandler_tE071B0CBA3B3A77D3E41F5FCB65B4017885B3177*)L_0) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		AudioConfigurationChangeHandler_tE071B0CBA3B3A77D3E41F5FCB65B4017885B3177* L_2 = ((AudioSettings_t66C4BCA1E463B061E2EC9063FB882ACED20D47BD_StaticFields*)il2cpp_codegen_static_fields_for(AudioSettings_t66C4BCA1E463B061E2EC9063FB882ACED20D47BD_il2cpp_TypeInfo_var))->___OnAudioConfigurationChanged_0;
		bool L_3 = ___deviceWasChanged0;
		NullCheck(L_2);
		AudioConfigurationChangeHandler_Invoke_m4DC27DD11512481B60071B20284E6886DAE54DE2_inline(L_2, L_3, NULL);
	}

IL_0019:
	{
		return;
	}
}
// System.Void UnityEngine.AudioSettings::InvokeOnAudioSystemShuttingDown()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSettings_InvokeOnAudioSystemShuttingDown_mFD616504DB4E06637332C1E0AF38485F114B1335 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AudioSettings_t66C4BCA1E463B061E2EC9063FB882ACED20D47BD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* G_B2_0 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* G_B1_0 = NULL;
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = ((AudioSettings_t66C4BCA1E463B061E2EC9063FB882ACED20D47BD_StaticFields*)il2cpp_codegen_static_fields_for(AudioSettings_t66C4BCA1E463B061E2EC9063FB882ACED20D47BD_il2cpp_TypeInfo_var))->___OnAudioSystemShuttingDown_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000b;
		}
	}
	{
		goto IL_0011;
	}

IL_000b:
	{
		NullCheck(G_B2_0);
		Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline(G_B2_0, NULL);
	}

IL_0011:
	{
		return;
	}
}
// System.Void UnityEngine.AudioSettings::InvokeOnAudioSystemStartedUp()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSettings_InvokeOnAudioSystemStartedUp_mD0A9BBF2123B903815EEB7099FB60C9141A146A9 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AudioSettings_t66C4BCA1E463B061E2EC9063FB882ACED20D47BD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* G_B2_0 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* G_B1_0 = NULL;
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = ((AudioSettings_t66C4BCA1E463B061E2EC9063FB882ACED20D47BD_StaticFields*)il2cpp_codegen_static_fields_for(AudioSettings_t66C4BCA1E463B061E2EC9063FB882ACED20D47BD_il2cpp_TypeInfo_var))->___OnAudioSystemStartedUp_2;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000b;
		}
	}
	{
		goto IL_0011;
	}

IL_000b:
	{
		NullCheck(G_B2_0);
		Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline(G_B2_0, NULL);
	}

IL_0011:
	{
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
void AudioConfigurationChangeHandler_Invoke_m4DC27DD11512481B60071B20284E6886DAE54DE2_Multicast(AudioConfigurationChangeHandler_tE071B0CBA3B3A77D3E41F5FCB65B4017885B3177* __this, bool ___deviceWasChanged0, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		AudioConfigurationChangeHandler_tE071B0CBA3B3A77D3E41F5FCB65B4017885B3177* currentDelegate = reinterpret_cast<AudioConfigurationChangeHandler_tE071B0CBA3B3A77D3E41F5FCB65B4017885B3177*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, bool, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___deviceWasChanged0, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void AudioConfigurationChangeHandler_Invoke_m4DC27DD11512481B60071B20284E6886DAE54DE2_Open(AudioConfigurationChangeHandler_tE071B0CBA3B3A77D3E41F5FCB65B4017885B3177* __this, bool ___deviceWasChanged0, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (bool, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___deviceWasChanged0, method);
}
void AudioConfigurationChangeHandler_Invoke_m4DC27DD11512481B60071B20284E6886DAE54DE2_OpenStaticInvoker(AudioConfigurationChangeHandler_tE071B0CBA3B3A77D3E41F5FCB65B4017885B3177* __this, bool ___deviceWasChanged0, const RuntimeMethod* method)
{
	InvokerActionInvoker1< bool >::Invoke(__this->___method_ptr_0, method, NULL, ___deviceWasChanged0);
}
void AudioConfigurationChangeHandler_Invoke_m4DC27DD11512481B60071B20284E6886DAE54DE2_ClosedStaticInvoker(AudioConfigurationChangeHandler_tE071B0CBA3B3A77D3E41F5FCB65B4017885B3177* __this, bool ___deviceWasChanged0, const RuntimeMethod* method)
{
	InvokerActionInvoker2< RuntimeObject*, bool >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___deviceWasChanged0);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_AudioConfigurationChangeHandler_tE071B0CBA3B3A77D3E41F5FCB65B4017885B3177 (AudioConfigurationChangeHandler_tE071B0CBA3B3A77D3E41F5FCB65B4017885B3177* __this, bool ___deviceWasChanged0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(int32_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	il2cppPInvokeFunc(static_cast<int32_t>(___deviceWasChanged0));

}
// System.Void UnityEngine.AudioSettings/AudioConfigurationChangeHandler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioConfigurationChangeHandler__ctor_mA9827AB9472EC8EE0A0F0FC24EBC06B4740DD944 (AudioConfigurationChangeHandler_tE071B0CBA3B3A77D3E41F5FCB65B4017885B3177* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
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
				__this->___invoke_impl_1 = (intptr_t)&AudioConfigurationChangeHandler_Invoke_m4DC27DD11512481B60071B20284E6886DAE54DE2_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&AudioConfigurationChangeHandler_Invoke_m4DC27DD11512481B60071B20284E6886DAE54DE2_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&AudioConfigurationChangeHandler_Invoke_m4DC27DD11512481B60071B20284E6886DAE54DE2_Open;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&AudioConfigurationChangeHandler_Invoke_m4DC27DD11512481B60071B20284E6886DAE54DE2_Multicast;
}
// System.Void UnityEngine.AudioSettings/AudioConfigurationChangeHandler::Invoke(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioConfigurationChangeHandler_Invoke_m4DC27DD11512481B60071B20284E6886DAE54DE2 (AudioConfigurationChangeHandler_tE071B0CBA3B3A77D3E41F5FCB65B4017885B3177* __this, bool ___deviceWasChanged0, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, bool, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___deviceWasChanged0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.AudioClip::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioClip__ctor_m038DA97CB07076D1D9391E1E103F0F41D3622F89 (AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->___m_PCMReaderCallback_4 = (PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_PCMReaderCallback_4), (void*)(PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E*)NULL);
		__this->___m_PCMSetPositionCallback_5 = (PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_PCMSetPositionCallback_5), (void*)(PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072*)NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object__ctor_m2149FA40CEC8D82AC20D3508AB40C0D8EFEF68E6(__this, NULL);
		return;
	}
}
// System.Boolean UnityEngine.AudioClip::SetData(UnityEngine.AudioClip,System.Single[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AudioClip_SetData_m57A3E3F5DF493C992EFDDAF314672BF04A6B0296 (AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___clip0, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___data1, int32_t ___numsamples2, int32_t ___samplesOffset3, const RuntimeMethod* method) 
{
	typedef bool (*AudioClip_SetData_m57A3E3F5DF493C992EFDDAF314672BF04A6B0296_ftn) (AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20*, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*, int32_t, int32_t);
	static AudioClip_SetData_m57A3E3F5DF493C992EFDDAF314672BF04A6B0296_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioClip_SetData_m57A3E3F5DF493C992EFDDAF314672BF04A6B0296_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioClip::SetData(UnityEngine.AudioClip,System.Single[],System.Int32,System.Int32)");
	bool icallRetVal = _il2cpp_icall_func(___clip0, ___data1, ___numsamples2, ___samplesOffset3);
	return icallRetVal;
}
// UnityEngine.AudioClip UnityEngine.AudioClip::Construct_Internal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* AudioClip_Construct_Internal_m1F5A3B2888B2C422668951297BACEC59C2DCD699 (const RuntimeMethod* method) 
{
	typedef AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* (*AudioClip_Construct_Internal_m1F5A3B2888B2C422668951297BACEC59C2DCD699_ftn) ();
	static AudioClip_Construct_Internal_m1F5A3B2888B2C422668951297BACEC59C2DCD699_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioClip_Construct_Internal_m1F5A3B2888B2C422668951297BACEC59C2DCD699_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioClip::Construct_Internal()");
	AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* icallRetVal = _il2cpp_icall_func();
	return icallRetVal;
}
// System.String UnityEngine.AudioClip::GetName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AudioClip_GetName_m561BBA037957E25D5BC5A962A1AA0C789895C9D1 (AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* __this, const RuntimeMethod* method) 
{
	typedef String_t* (*AudioClip_GetName_m561BBA037957E25D5BC5A962A1AA0C789895C9D1_ftn) (AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20*);
	static AudioClip_GetName_m561BBA037957E25D5BC5A962A1AA0C789895C9D1_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioClip_GetName_m561BBA037957E25D5BC5A962A1AA0C789895C9D1_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioClip::GetName()");
	String_t* icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
// System.Void UnityEngine.AudioClip::CreateUserSound(System.String,System.Int32,System.Int32,System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioClip_CreateUserSound_m34DA102DD6848D555D4A9D45AFAA9D3E5574BC45 (AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* __this, String_t* ___name0, int32_t ___lengthSamples1, int32_t ___channels2, int32_t ___frequency3, bool ___stream4, const RuntimeMethod* method) 
{
	typedef void (*AudioClip_CreateUserSound_m34DA102DD6848D555D4A9D45AFAA9D3E5574BC45_ftn) (AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20*, String_t*, int32_t, int32_t, int32_t, bool);
	static AudioClip_CreateUserSound_m34DA102DD6848D555D4A9D45AFAA9D3E5574BC45_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioClip_CreateUserSound_m34DA102DD6848D555D4A9D45AFAA9D3E5574BC45_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioClip::CreateUserSound(System.String,System.Int32,System.Int32,System.Int32,System.Boolean)");
	_il2cpp_icall_func(__this, ___name0, ___lengthSamples1, ___channels2, ___frequency3, ___stream4);
}
// System.Int32 UnityEngine.AudioClip::get_samples()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AudioClip_get_samples_mDEA01CA75E7DEA0F8D480E4AF97FB96085BCF38E (AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* __this, const RuntimeMethod* method) 
{
	typedef int32_t (*AudioClip_get_samples_mDEA01CA75E7DEA0F8D480E4AF97FB96085BCF38E_ftn) (AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20*);
	static AudioClip_get_samples_mDEA01CA75E7DEA0F8D480E4AF97FB96085BCF38E_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioClip_get_samples_mDEA01CA75E7DEA0F8D480E4AF97FB96085BCF38E_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioClip::get_samples()");
	int32_t icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
// System.Int32 UnityEngine.AudioClip::get_channels()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AudioClip_get_channels_mFEECF5D6389D196BA5102EB79257298B9FDC9F84 (AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* __this, const RuntimeMethod* method) 
{
	typedef int32_t (*AudioClip_get_channels_mFEECF5D6389D196BA5102EB79257298B9FDC9F84_ftn) (AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20*);
	static AudioClip_get_channels_mFEECF5D6389D196BA5102EB79257298B9FDC9F84_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioClip_get_channels_mFEECF5D6389D196BA5102EB79257298B9FDC9F84_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioClip::get_channels()");
	int32_t icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
// System.Boolean UnityEngine.AudioClip::SetData(System.Single[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AudioClip_SetData_m7B473C614C11953D746770F4F89B44600B5A6AF3 (AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* __this, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___data0, int32_t ___offsetSamples1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5633EC5A323E76AB2DB48162D296F674B1A4AE13);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8C53570A90E7EFA87FDB7F0DCC0EE1FCC019E426);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	int32_t G_B5_0 = 0;
	int32_t G_B10_0 = 0;
	{
		int32_t L_0;
		L_0 = AudioClip_get_channels_mFEECF5D6389D196BA5102EB79257298B9FDC9F84(__this, NULL);
		V_0 = (bool)((((int32_t)((((int32_t)L_0) > ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0031;
		}
	}
	{
		String_t* L_2;
		L_2 = AudioClip_GetName_m561BBA037957E25D5BC5A962A1AA0C789895C9D1(__this, NULL);
		String_t* L_3;
		L_3 = String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0(_stringLiteral5633EC5A323E76AB2DB48162D296F674B1A4AE13, L_2, _stringLiteral8C53570A90E7EFA87FDB7F0DCC0EE1FCC019E426, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(L_3, NULL);
		V_1 = (bool)0;
		goto IL_0082;
	}

IL_0031:
	{
		int32_t L_4 = ___offsetSamples1;
		if ((((int32_t)L_4) < ((int32_t)0)))
		{
			goto IL_0043;
		}
	}
	{
		int32_t L_5 = ___offsetSamples1;
		int32_t L_6;
		L_6 = AudioClip_get_samples_mDEA01CA75E7DEA0F8D480E4AF97FB96085BCF38E(__this, NULL);
		G_B5_0 = ((((int32_t)((((int32_t)L_5) < ((int32_t)L_6))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0044;
	}

IL_0043:
	{
		G_B5_0 = 1;
	}

IL_0044:
	{
		V_2 = (bool)G_B5_0;
		bool L_7 = V_2;
		if (!L_7)
		{
			goto IL_0053;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_8 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_8);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_8, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralA69BE8EF0F1482795ABF1CC395A765AA747ECD85)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_8, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AudioClip_SetData_m7B473C614C11953D746770F4F89B44600B5A6AF3_RuntimeMethod_var)));
	}

IL_0053:
	{
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_9 = ___data0;
		if (!L_9)
		{
			goto IL_005d;
		}
	}
	{
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_10 = ___data0;
		NullCheck(L_10);
		G_B10_0 = ((((int32_t)(((RuntimeArray*)L_10)->max_length)) == ((int32_t)0))? 1 : 0);
		goto IL_005e;
	}

IL_005d:
	{
		G_B10_0 = 1;
	}

IL_005e:
	{
		V_3 = (bool)G_B10_0;
		bool L_11 = V_3;
		if (!L_11)
		{
			goto IL_006d;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_12 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_12);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_12, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral747CA643504D60A83574C1454D344DADB4D2BA17)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_12, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AudioClip_SetData_m7B473C614C11953D746770F4F89B44600B5A6AF3_RuntimeMethod_var)));
	}

IL_006d:
	{
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_13 = ___data0;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_14 = ___data0;
		NullCheck(L_14);
		int32_t L_15;
		L_15 = AudioClip_get_channels_mFEECF5D6389D196BA5102EB79257298B9FDC9F84(__this, NULL);
		int32_t L_16 = ___offsetSamples1;
		bool L_17;
		L_17 = AudioClip_SetData_m57A3E3F5DF493C992EFDDAF314672BF04A6B0296(__this, L_13, ((int32_t)(((int32_t)(((RuntimeArray*)L_14)->max_length))/L_15)), L_16, NULL);
		V_1 = L_17;
		goto IL_0082;
	}

IL_0082:
	{
		bool L_18 = V_1;
		return L_18;
	}
}
// UnityEngine.AudioClip UnityEngine.AudioClip::Create(System.String,System.Int32,System.Int32,System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* AudioClip_Create_m5E7AF900EC6FC5E80551724C87D8E6CB7F6ADFA8 (String_t* ___name0, int32_t ___lengthSamples1, int32_t ___channels2, int32_t ___frequency3, bool ___stream4, const RuntimeMethod* method) 
{
	AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* V_0 = NULL;
	AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* V_1 = NULL;
	{
		String_t* L_0 = ___name0;
		int32_t L_1 = ___lengthSamples1;
		int32_t L_2 = ___channels2;
		int32_t L_3 = ___frequency3;
		bool L_4 = ___stream4;
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_5;
		L_5 = AudioClip_Create_m11010A6FE993BA862F8429FFD47D899225B26781(L_0, L_1, L_2, L_3, L_4, (PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E*)NULL, (PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072*)NULL, NULL);
		V_0 = L_5;
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_6 = V_0;
		V_1 = L_6;
		goto IL_0013;
	}

IL_0013:
	{
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_7 = V_1;
		return L_7;
	}
}
// UnityEngine.AudioClip UnityEngine.AudioClip::Create(System.String,System.Int32,System.Int32,System.Int32,System.Boolean,UnityEngine.AudioClip/PCMReaderCallback,UnityEngine.AudioClip/PCMSetPositionCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* AudioClip_Create_m11010A6FE993BA862F8429FFD47D899225B26781 (String_t* ___name0, int32_t ___lengthSamples1, int32_t ___channels2, int32_t ___frequency3, bool ___stream4, PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E* ___pcmreadercallback5, PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072* ___pcmsetpositioncallback6, const RuntimeMethod* method) 
{
	AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* V_7 = NULL;
	{
		String_t* L_0 = ___name0;
		V_1 = (bool)((((RuntimeObject*)(String_t*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_000f;
		}
	}
	{
		NullReferenceException_tBDE63A6D24569B964908408389070C6A9F5005BB* L_2 = (NullReferenceException_tBDE63A6D24569B964908408389070C6A9F5005BB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NullReferenceException_tBDE63A6D24569B964908408389070C6A9F5005BB_il2cpp_TypeInfo_var)));
		NullCheck(L_2);
		NullReferenceException__ctor_mD26D62094A5E49C18D817817E17FDFBC1D3BD752(L_2, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AudioClip_Create_m11010A6FE993BA862F8429FFD47D899225B26781_RuntimeMethod_var)));
	}

IL_000f:
	{
		int32_t L_3 = ___lengthSamples1;
		V_2 = (bool)((((int32_t)((((int32_t)L_3) > ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_4 = V_2;
		if (!L_4)
		{
			goto IL_0025;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_5 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_5);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_5, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC563ED6549A22286FAAA38A5D49C5B247A52C622)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AudioClip_Create_m11010A6FE993BA862F8429FFD47D899225B26781_RuntimeMethod_var)));
	}

IL_0025:
	{
		int32_t L_6 = ___channels2;
		V_3 = (bool)((((int32_t)((((int32_t)L_6) > ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_7 = V_3;
		if (!L_7)
		{
			goto IL_003b;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_8 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_8);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_8, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB9ACF8E6DF73A863387F2ABAD61D84C3197C6B01)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_8, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AudioClip_Create_m11010A6FE993BA862F8429FFD47D899225B26781_RuntimeMethod_var)));
	}

IL_003b:
	{
		int32_t L_9 = ___frequency3;
		V_4 = (bool)((((int32_t)((((int32_t)L_9) > ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_10 = V_4;
		if (!L_10)
		{
			goto IL_0053;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_11 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_11);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_11, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralCC867B94415511BD48E92E3242D7EDA425D20035)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_11, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AudioClip_Create_m11010A6FE993BA862F8429FFD47D899225B26781_RuntimeMethod_var)));
	}

IL_0053:
	{
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_12;
		L_12 = AudioClip_Construct_Internal_m1F5A3B2888B2C422668951297BACEC59C2DCD699(NULL);
		V_0 = L_12;
		PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E* L_13 = ___pcmreadercallback5;
		V_5 = (bool)((!(((RuntimeObject*)(PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E*)L_13) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_14 = V_5;
		if (!L_14)
		{
			goto IL_006d;
		}
	}
	{
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_15 = V_0;
		PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E* L_16 = ___pcmreadercallback5;
		NullCheck(L_15);
		AudioClip_add_m_PCMReaderCallback_mA226EA143D90E04117A740FC9FA9F1111346CA83(L_15, L_16, NULL);
	}

IL_006d:
	{
		PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072* L_17 = ___pcmsetpositioncallback6;
		V_6 = (bool)((!(((RuntimeObject*)(PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072*)L_17) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_18 = V_6;
		if (!L_18)
		{
			goto IL_0081;
		}
	}
	{
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_19 = V_0;
		PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072* L_20 = ___pcmsetpositioncallback6;
		NullCheck(L_19);
		AudioClip_add_m_PCMSetPositionCallback_mB280AD93A847C65F536D846FECC7DCBE9266C37F(L_19, L_20, NULL);
	}

IL_0081:
	{
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_21 = V_0;
		String_t* L_22 = ___name0;
		int32_t L_23 = ___lengthSamples1;
		int32_t L_24 = ___channels2;
		int32_t L_25 = ___frequency3;
		bool L_26 = ___stream4;
		NullCheck(L_21);
		AudioClip_CreateUserSound_m34DA102DD6848D555D4A9D45AFAA9D3E5574BC45(L_21, L_22, L_23, L_24, L_25, L_26, NULL);
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_27 = V_0;
		V_7 = L_27;
		goto IL_0093;
	}

IL_0093:
	{
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_28 = V_7;
		return L_28;
	}
}
// System.Void UnityEngine.AudioClip::add_m_PCMReaderCallback(UnityEngine.AudioClip/PCMReaderCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioClip_add_m_PCMReaderCallback_mA226EA143D90E04117A740FC9FA9F1111346CA83 (AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* __this, PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E* V_0 = NULL;
	PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E* V_1 = NULL;
	PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E* V_2 = NULL;
	{
		PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E* L_0 = __this->___m_PCMReaderCallback_4;
		V_0 = L_0;
	}

IL_0007:
	{
		PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E* L_1 = V_0;
		V_1 = L_1;
		PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E* L_2 = V_1;
		PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m8B9D24CED35033C7FC56501DFE650F5CB7FF012C(L_2, L_3, NULL);
		V_2 = ((PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E*)CastclassSealed((RuntimeObject*)L_4, PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E_il2cpp_TypeInfo_var));
		PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E** L_5 = (&__this->___m_PCMReaderCallback_4);
		PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E* L_6 = V_2;
		PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E* L_7 = V_1;
		PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E* L_8;
		L_8 = InterlockedCompareExchangeImpl<PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E*>(L_5, L_6, L_7);
		V_0 = L_8;
		PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E* L_9 = V_0;
		PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E* L_10 = V_1;
		if ((!(((RuntimeObject*)(PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E*)L_9) == ((RuntimeObject*)(PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void UnityEngine.AudioClip::remove_m_PCMReaderCallback(UnityEngine.AudioClip/PCMReaderCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioClip_remove_m_PCMReaderCallback_m3258A455005F4A94570B4F8FE28A5EDA91A88412 (AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* __this, PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E* V_0 = NULL;
	PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E* V_1 = NULL;
	PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E* V_2 = NULL;
	{
		PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E* L_0 = __this->___m_PCMReaderCallback_4;
		V_0 = L_0;
	}

IL_0007:
	{
		PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E* L_1 = V_0;
		V_1 = L_1;
		PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E* L_2 = V_1;
		PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m40506877934EC1AD4ADAE57F5E97AF0BC0F96116(L_2, L_3, NULL);
		V_2 = ((PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E*)CastclassSealed((RuntimeObject*)L_4, PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E_il2cpp_TypeInfo_var));
		PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E** L_5 = (&__this->___m_PCMReaderCallback_4);
		PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E* L_6 = V_2;
		PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E* L_7 = V_1;
		PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E* L_8;
		L_8 = InterlockedCompareExchangeImpl<PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E*>(L_5, L_6, L_7);
		V_0 = L_8;
		PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E* L_9 = V_0;
		PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E* L_10 = V_1;
		if ((!(((RuntimeObject*)(PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E*)L_9) == ((RuntimeObject*)(PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void UnityEngine.AudioClip::add_m_PCMSetPositionCallback(UnityEngine.AudioClip/PCMSetPositionCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioClip_add_m_PCMSetPositionCallback_mB280AD93A847C65F536D846FECC7DCBE9266C37F (AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* __this, PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072* V_0 = NULL;
	PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072* V_1 = NULL;
	PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072* V_2 = NULL;
	{
		PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072* L_0 = __this->___m_PCMSetPositionCallback_5;
		V_0 = L_0;
	}

IL_0007:
	{
		PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072* L_1 = V_0;
		V_1 = L_1;
		PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072* L_2 = V_1;
		PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m8B9D24CED35033C7FC56501DFE650F5CB7FF012C(L_2, L_3, NULL);
		V_2 = ((PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072*)CastclassSealed((RuntimeObject*)L_4, PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072_il2cpp_TypeInfo_var));
		PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072** L_5 = (&__this->___m_PCMSetPositionCallback_5);
		PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072* L_6 = V_2;
		PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072* L_7 = V_1;
		PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072* L_8;
		L_8 = InterlockedCompareExchangeImpl<PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072*>(L_5, L_6, L_7);
		V_0 = L_8;
		PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072* L_9 = V_0;
		PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072* L_10 = V_1;
		if ((!(((RuntimeObject*)(PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072*)L_9) == ((RuntimeObject*)(PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void UnityEngine.AudioClip::remove_m_PCMSetPositionCallback(UnityEngine.AudioClip/PCMSetPositionCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioClip_remove_m_PCMSetPositionCallback_m39598139640580138742F129E0510917DF2E233C (AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* __this, PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072* V_0 = NULL;
	PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072* V_1 = NULL;
	PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072* V_2 = NULL;
	{
		PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072* L_0 = __this->___m_PCMSetPositionCallback_5;
		V_0 = L_0;
	}

IL_0007:
	{
		PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072* L_1 = V_0;
		V_1 = L_1;
		PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072* L_2 = V_1;
		PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m40506877934EC1AD4ADAE57F5E97AF0BC0F96116(L_2, L_3, NULL);
		V_2 = ((PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072*)CastclassSealed((RuntimeObject*)L_4, PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072_il2cpp_TypeInfo_var));
		PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072** L_5 = (&__this->___m_PCMSetPositionCallback_5);
		PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072* L_6 = V_2;
		PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072* L_7 = V_1;
		PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072* L_8;
		L_8 = InterlockedCompareExchangeImpl<PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072*>(L_5, L_6, L_7);
		V_0 = L_8;
		PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072* L_9 = V_0;
		PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072* L_10 = V_1;
		if ((!(((RuntimeObject*)(PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072*)L_9) == ((RuntimeObject*)(PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void UnityEngine.AudioClip::InvokePCMReaderCallback_Internal(System.Single[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioClip_InvokePCMReaderCallback_Internal_m766E5705AB5AE16F5F142867CC3758ABE4BF462C (AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* __this, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___data0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E* L_0 = __this->___m_PCMReaderCallback_4;
		V_0 = (bool)((!(((RuntimeObject*)(PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E*)L_0) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_001b;
		}
	}
	{
		PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E* L_2 = __this->___m_PCMReaderCallback_4;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_3 = ___data0;
		NullCheck(L_2);
		PCMReaderCallback_Invoke_m76784C690C36B513E2AA5B0E4FD9831B2C7E5152_inline(L_2, L_3, NULL);
	}

IL_001b:
	{
		return;
	}
}
// System.Void UnityEngine.AudioClip::InvokePCMSetPositionCallback_Internal(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioClip_InvokePCMSetPositionCallback_Internal_m986EF703B7DDE42343730DE93A095D05B9F4DBB8 (AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* __this, int32_t ___position0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072* L_0 = __this->___m_PCMSetPositionCallback_5;
		V_0 = (bool)((!(((RuntimeObject*)(PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072*)L_0) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_001b;
		}
	}
	{
		PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072* L_2 = __this->___m_PCMSetPositionCallback_5;
		int32_t L_3 = ___position0;
		NullCheck(L_2);
		PCMSetPositionCallback_Invoke_m434D4F02FA25F91DF6199EC5A799C551C7F93702_inline(L_2, L_3, NULL);
	}

IL_001b:
	{
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
void PCMReaderCallback_Invoke_m76784C690C36B513E2AA5B0E4FD9831B2C7E5152_Multicast(PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E* __this, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___data0, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E* currentDelegate = reinterpret_cast<PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___data0, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void PCMReaderCallback_Invoke_m76784C690C36B513E2AA5B0E4FD9831B2C7E5152_Open(PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E* __this, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___data0, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___data0, method);
}
void PCMReaderCallback_Invoke_m76784C690C36B513E2AA5B0E4FD9831B2C7E5152_OpenStaticInvoker(PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E* __this, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___data0, const RuntimeMethod* method)
{
	InvokerActionInvoker1< SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* >::Invoke(__this->___method_ptr_0, method, NULL, ___data0);
}
void PCMReaderCallback_Invoke_m76784C690C36B513E2AA5B0E4FD9831B2C7E5152_ClosedStaticInvoker(PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E* __this, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___data0, const RuntimeMethod* method)
{
	InvokerActionInvoker2< RuntimeObject*, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___data0);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E (PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E* __this, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___data0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(float*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Marshaling of parameter '___data0' to native representation
	float* ____data0_marshaled = NULL;
	if (___data0 != NULL)
	{
		____data0_marshaled = reinterpret_cast<float*>((___data0)->GetAddressAtUnchecked(0));
	}

	// Native function invocation
	il2cppPInvokeFunc(____data0_marshaled);

}
// System.Void UnityEngine.AudioClip/PCMReaderCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PCMReaderCallback__ctor_mF621B6CC1A4BA6525190C5037401CF2FD5C0CF28 (PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
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
				__this->___invoke_impl_1 = (intptr_t)&PCMReaderCallback_Invoke_m76784C690C36B513E2AA5B0E4FD9831B2C7E5152_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&PCMReaderCallback_Invoke_m76784C690C36B513E2AA5B0E4FD9831B2C7E5152_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&PCMReaderCallback_Invoke_m76784C690C36B513E2AA5B0E4FD9831B2C7E5152_Open;
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
			__this->___invoke_impl_1 = (intptr_t)&PCMReaderCallback_Invoke_m76784C690C36B513E2AA5B0E4FD9831B2C7E5152_Open;
		}
		else
		{
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&PCMReaderCallback_Invoke_m76784C690C36B513E2AA5B0E4FD9831B2C7E5152_Multicast;
}
// System.Void UnityEngine.AudioClip/PCMReaderCallback::Invoke(System.Single[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PCMReaderCallback_Invoke_m76784C690C36B513E2AA5B0E4FD9831B2C7E5152 (PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E* __this, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___data0, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___data0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void PCMSetPositionCallback_Invoke_m434D4F02FA25F91DF6199EC5A799C551C7F93702_Multicast(PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072* __this, int32_t ___position0, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072* currentDelegate = reinterpret_cast<PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, int32_t, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___position0, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void PCMSetPositionCallback_Invoke_m434D4F02FA25F91DF6199EC5A799C551C7F93702_Open(PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072* __this, int32_t ___position0, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___position0, method);
}
void PCMSetPositionCallback_Invoke_m434D4F02FA25F91DF6199EC5A799C551C7F93702_OpenStaticInvoker(PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072* __this, int32_t ___position0, const RuntimeMethod* method)
{
	InvokerActionInvoker1< int32_t >::Invoke(__this->___method_ptr_0, method, NULL, ___position0);
}
void PCMSetPositionCallback_Invoke_m434D4F02FA25F91DF6199EC5A799C551C7F93702_ClosedStaticInvoker(PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072* __this, int32_t ___position0, const RuntimeMethod* method)
{
	InvokerActionInvoker2< RuntimeObject*, int32_t >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___position0);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072 (PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072* __this, int32_t ___position0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(int32_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	il2cppPInvokeFunc(___position0);

}
// System.Void UnityEngine.AudioClip/PCMSetPositionCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PCMSetPositionCallback__ctor_mD16F77DDB552EB69BB3F5EF39420B2F09F95455B (PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
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
				__this->___invoke_impl_1 = (intptr_t)&PCMSetPositionCallback_Invoke_m434D4F02FA25F91DF6199EC5A799C551C7F93702_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&PCMSetPositionCallback_Invoke_m434D4F02FA25F91DF6199EC5A799C551C7F93702_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&PCMSetPositionCallback_Invoke_m434D4F02FA25F91DF6199EC5A799C551C7F93702_Open;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&PCMSetPositionCallback_Invoke_m434D4F02FA25F91DF6199EC5A799C551C7F93702_Multicast;
}
// System.Void UnityEngine.AudioClip/PCMSetPositionCallback::Invoke(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PCMSetPositionCallback_Invoke_m434D4F02FA25F91DF6199EC5A799C551C7F93702 (PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072* __this, int32_t ___position0, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___position0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
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
// System.Void UnityEngine.AudioListener::set_pause(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioListener_set_pause_mE2C2B6C40696BEF96662114C695151943A14299E (bool ___value0, const RuntimeMethod* method) 
{
	typedef void (*AudioListener_set_pause_mE2C2B6C40696BEF96662114C695151943A14299E_ftn) (bool);
	static AudioListener_set_pause_mE2C2B6C40696BEF96662114C695151943A14299E_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioListener_set_pause_mE2C2B6C40696BEF96662114C695151943A14299E_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioListener::set_pause(System.Boolean)");
	_il2cpp_icall_func(___value0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.AudioSource::SetPitch(UnityEngine.AudioSource,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_SetPitch_m5BED1C7AB47626ACCD727A20D22FCF9FC29D2F9F (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___source0, float ___pitch1, const RuntimeMethod* method) 
{
	typedef void (*AudioSource_SetPitch_m5BED1C7AB47626ACCD727A20D22FCF9FC29D2F9F_ftn) (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299*, float);
	static AudioSource_SetPitch_m5BED1C7AB47626ACCD727A20D22FCF9FC29D2F9F_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSource_SetPitch_m5BED1C7AB47626ACCD727A20D22FCF9FC29D2F9F_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSource::SetPitch(UnityEngine.AudioSource,System.Single)");
	_il2cpp_icall_func(___source0, ___pitch1);
}
// System.Void UnityEngine.AudioSource::PlayHelper(UnityEngine.AudioSource,System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_PlayHelper_m05452A8911044189CCCD983556E8A19A2F6747E1 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___source0, uint64_t ___delay1, const RuntimeMethod* method) 
{
	typedef void (*AudioSource_PlayHelper_m05452A8911044189CCCD983556E8A19A2F6747E1_ftn) (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299*, uint64_t);
	static AudioSource_PlayHelper_m05452A8911044189CCCD983556E8A19A2F6747E1_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSource_PlayHelper_m05452A8911044189CCCD983556E8A19A2F6747E1_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSource::PlayHelper(UnityEngine.AudioSource,System.UInt64)");
	_il2cpp_icall_func(___source0, ___delay1);
}
// System.Void UnityEngine.AudioSource::PlayOneShotHelper(UnityEngine.AudioSource,UnityEngine.AudioClip,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_PlayOneShotHelper_m4F49B7E1A20900AA1B8CEED61D58B7B25A9801DD (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___source0, AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___clip1, float ___volumeScale2, const RuntimeMethod* method) 
{
	typedef void (*AudioSource_PlayOneShotHelper_m4F49B7E1A20900AA1B8CEED61D58B7B25A9801DD_ftn) (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299*, AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20*, float);
	static AudioSource_PlayOneShotHelper_m4F49B7E1A20900AA1B8CEED61D58B7B25A9801DD_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSource_PlayOneShotHelper_m4F49B7E1A20900AA1B8CEED61D58B7B25A9801DD_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSource::PlayOneShotHelper(UnityEngine.AudioSource,UnityEngine.AudioClip,System.Single)");
	_il2cpp_icall_func(___source0, ___clip1, ___volumeScale2);
}
// System.Void UnityEngine.AudioSource::Stop(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_Stop_m8A4872F0A2680798CD28894DD28609445C4783F5 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, bool ___stopOneShots0, const RuntimeMethod* method) 
{
	typedef void (*AudioSource_Stop_m8A4872F0A2680798CD28894DD28609445C4783F5_ftn) (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299*, bool);
	static AudioSource_Stop_m8A4872F0A2680798CD28894DD28609445C4783F5_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSource_Stop_m8A4872F0A2680798CD28894DD28609445C4783F5_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSource::Stop(System.Boolean)");
	_il2cpp_icall_func(__this, ___stopOneShots0);
}
// System.Single UnityEngine.AudioSource::get_volume()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioSource_get_volume_m9CCF33BC636562EA282FDE07463B547D70134EE3 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, const RuntimeMethod* method) 
{
	typedef float (*AudioSource_get_volume_m9CCF33BC636562EA282FDE07463B547D70134EE3_ftn) (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299*);
	static AudioSource_get_volume_m9CCF33BC636562EA282FDE07463B547D70134EE3_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSource_get_volume_m9CCF33BC636562EA282FDE07463B547D70134EE3_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSource::get_volume()");
	float icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
// System.Void UnityEngine.AudioSource::set_volume(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_set_volume_mD902BBDBBDE0E3C148609BF3C05096148E90F2C0 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, float ___value0, const RuntimeMethod* method) 
{
	typedef void (*AudioSource_set_volume_mD902BBDBBDE0E3C148609BF3C05096148E90F2C0_ftn) (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299*, float);
	static AudioSource_set_volume_mD902BBDBBDE0E3C148609BF3C05096148E90F2C0_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSource_set_volume_mD902BBDBBDE0E3C148609BF3C05096148E90F2C0_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSource::set_volume(System.Single)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.Void UnityEngine.AudioSource::set_pitch(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_set_pitch_mD14631FC99BF38AAFB356D9C45546BC16CF9E811 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		float L_0 = ___value0;
		AudioSource_SetPitch_m5BED1C7AB47626ACCD727A20D22FCF9FC29D2F9F(__this, L_0, NULL);
		return;
	}
}
// UnityEngine.AudioClip UnityEngine.AudioSource::get_clip()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* AudioSource_get_clip_m4F5027066F9FC44B44192713142B0C277BB418FE (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, const RuntimeMethod* method) 
{
	typedef AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* (*AudioSource_get_clip_m4F5027066F9FC44B44192713142B0C277BB418FE_ftn) (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299*);
	static AudioSource_get_clip_m4F5027066F9FC44B44192713142B0C277BB418FE_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSource_get_clip_m4F5027066F9FC44B44192713142B0C277BB418FE_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSource::get_clip()");
	AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
// System.Void UnityEngine.AudioSource::set_clip(UnityEngine.AudioClip)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_set_clip_mFF441895E274286C88D9C75ED5CA1B1B39528D70 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___value0, const RuntimeMethod* method) 
{
	typedef void (*AudioSource_set_clip_mFF441895E274286C88D9C75ED5CA1B1B39528D70_ftn) (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299*, AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20*);
	static AudioSource_set_clip_mFF441895E274286C88D9C75ED5CA1B1B39528D70_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSource_set_clip_mFF441895E274286C88D9C75ED5CA1B1B39528D70_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSource::set_clip(UnityEngine.AudioClip)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.Void UnityEngine.AudioSource::Play()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_Play_m95DF07111C61D0E0F00257A00384D31531D590C3 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, const RuntimeMethod* method) 
{
	{
		AudioSource_PlayHelper_m05452A8911044189CCCD983556E8A19A2F6747E1(__this, ((int64_t)0), NULL);
		return;
	}
}
// System.Void UnityEngine.AudioSource::PlayOneShot(UnityEngine.AudioClip)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_PlayOneShot_m098BCAE084AABB128BB19ED805D2D985E7B75112 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___clip0, const RuntimeMethod* method) 
{
	{
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_0 = ___clip0;
		AudioSource_PlayOneShot_mF6FE95C58996B38EF6E7F7482F95F5E15E0AB30B(__this, L_0, (1.0f), NULL);
		return;
	}
}
// System.Void UnityEngine.AudioSource::PlayOneShot(UnityEngine.AudioClip,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_PlayOneShot_mF6FE95C58996B38EF6E7F7482F95F5E15E0AB30B (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___clip0, float ___volumeScale1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral49403A17E8D32B35CB5B66AB1A2651A7EEAD1B00);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_0 = ___clip0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_001a;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_mEF15C6B17CE4E1FA7E379CDB82CE40FCD89A3F28(_stringLiteral49403A17E8D32B35CB5B66AB1A2651A7EEAD1B00, NULL);
		goto IL_0023;
	}

IL_001a:
	{
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_3 = ___clip0;
		float L_4 = ___volumeScale1;
		AudioSource_PlayOneShotHelper_m4F49B7E1A20900AA1B8CEED61D58B7B25A9801DD(__this, L_3, L_4, NULL);
	}

IL_0023:
	{
		return;
	}
}
// System.Void UnityEngine.AudioSource::Stop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_Stop_m318F17F17A147C77FF6E0A5A7A6BE057DB90F537 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, const RuntimeMethod* method) 
{
	{
		AudioSource_Stop_m8A4872F0A2680798CD28894DD28609445C4783F5(__this, (bool)1, NULL);
		return;
	}
}
// System.Boolean UnityEngine.AudioSource::get_isPlaying()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AudioSource_get_isPlaying_mC203303F2F7146B2C056CB47B9391463FDF408FC (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, const RuntimeMethod* method) 
{
	typedef bool (*AudioSource_get_isPlaying_mC203303F2F7146B2C056CB47B9391463FDF408FC_ftn) (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299*);
	static AudioSource_get_isPlaying_mC203303F2F7146B2C056CB47B9391463FDF408FC_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSource_get_isPlaying_mC203303F2F7146B2C056CB47B9391463FDF408FC_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSource::get_isPlaying()");
	bool icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
// System.Void UnityEngine.AudioSource::set_loop(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_set_loop_m834A590939D8456008C0F897FD80B0ECFFB7FE56 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, bool ___value0, const RuntimeMethod* method) 
{
	typedef void (*AudioSource_set_loop_m834A590939D8456008C0F897FD80B0ECFFB7FE56_ftn) (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299*, bool);
	static AudioSource_set_loop_m834A590939D8456008C0F897FD80B0ECFFB7FE56_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSource_set_loop_m834A590939D8456008C0F897FD80B0ECFFB7FE56_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSource::set_loop(System.Boolean)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.Void UnityEngine.AudioSource::set_playOnAwake(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_set_playOnAwake_m7EACC6ECEF12D7BA86A4E5A53603F1C8F9E11949 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, bool ___value0, const RuntimeMethod* method) 
{
	typedef void (*AudioSource_set_playOnAwake_m7EACC6ECEF12D7BA86A4E5A53603F1C8F9E11949_ftn) (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299*, bool);
	static AudioSource_set_playOnAwake_m7EACC6ECEF12D7BA86A4E5A53603F1C8F9E11949_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSource_set_playOnAwake_m7EACC6ECEF12D7BA86A4E5A53603F1C8F9E11949_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSource::set_playOnAwake(System.Boolean)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.Void UnityEngine.AudioSource::set_spatialize(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_set_spatialize_mDFA357EDCB0C59EF11F53C845F7ACBF6BF7F7B3C (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, bool ___value0, const RuntimeMethod* method) 
{
	typedef void (*AudioSource_set_spatialize_mDFA357EDCB0C59EF11F53C845F7ACBF6BF7F7B3C_ftn) (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299*, bool);
	static AudioSource_set_spatialize_mDFA357EDCB0C59EF11F53C845F7ACBF6BF7F7B3C_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSource_set_spatialize_mDFA357EDCB0C59EF11F53C845F7ACBF6BF7F7B3C_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSource::set_spatialize(System.Boolean)");
	_il2cpp_icall_func(__this, ___value0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Single UnityEngine.AudioLowPassFilter::get_cutoffFrequency()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioLowPassFilter_get_cutoffFrequency_m81B07E7C2CE10E23F89954A3445AE3E79FC41F76 (AudioLowPassFilter_tB32626505D7322A99E2F35C81584960BAC42C2C0* __this, const RuntimeMethod* method) 
{
	typedef float (*AudioLowPassFilter_get_cutoffFrequency_m81B07E7C2CE10E23F89954A3445AE3E79FC41F76_ftn) (AudioLowPassFilter_tB32626505D7322A99E2F35C81584960BAC42C2C0*);
	static AudioLowPassFilter_get_cutoffFrequency_m81B07E7C2CE10E23F89954A3445AE3E79FC41F76_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioLowPassFilter_get_cutoffFrequency_m81B07E7C2CE10E23F89954A3445AE3E79FC41F76_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioLowPassFilter::get_cutoffFrequency()");
	float icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
// System.Void UnityEngine.AudioLowPassFilter::set_cutoffFrequency(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioLowPassFilter_set_cutoffFrequency_m593B7A476225759056C6DACCEBF92016FEE7B050 (AudioLowPassFilter_tB32626505D7322A99E2F35C81584960BAC42C2C0* __this, float ___value0, const RuntimeMethod* method) 
{
	typedef void (*AudioLowPassFilter_set_cutoffFrequency_m593B7A476225759056C6DACCEBF92016FEE7B050_ftn) (AudioLowPassFilter_tB32626505D7322A99E2F35C81584960BAC42C2C0*, float);
	static AudioLowPassFilter_set_cutoffFrequency_m593B7A476225759056C6DACCEBF92016FEE7B050_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioLowPassFilter_set_cutoffFrequency_m593B7A476225759056C6DACCEBF92016FEE7B050_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioLowPassFilter::set_cutoffFrequency(System.Single)");
	_il2cpp_icall_func(__this, ___value0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Single UnityEngine.AudioHighPassFilter::get_cutoffFrequency()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioHighPassFilter_get_cutoffFrequency_m3B2D24CAE52BABA37E36DDBFFC5710F8346889CD (AudioHighPassFilter_tC553FD08CC1A23D836BF86BA3070256FB8006718* __this, const RuntimeMethod* method) 
{
	typedef float (*AudioHighPassFilter_get_cutoffFrequency_m3B2D24CAE52BABA37E36DDBFFC5710F8346889CD_ftn) (AudioHighPassFilter_tC553FD08CC1A23D836BF86BA3070256FB8006718*);
	static AudioHighPassFilter_get_cutoffFrequency_m3B2D24CAE52BABA37E36DDBFFC5710F8346889CD_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioHighPassFilter_get_cutoffFrequency_m3B2D24CAE52BABA37E36DDBFFC5710F8346889CD_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioHighPassFilter::get_cutoffFrequency()");
	float icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
// System.Void UnityEngine.AudioHighPassFilter::set_cutoffFrequency(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioHighPassFilter_set_cutoffFrequency_mBD5636A124C598DC0B54B8338FF834F422DD676C (AudioHighPassFilter_tC553FD08CC1A23D836BF86BA3070256FB8006718* __this, float ___value0, const RuntimeMethod* method) 
{
	typedef void (*AudioHighPassFilter_set_cutoffFrequency_mBD5636A124C598DC0B54B8338FF834F422DD676C_ftn) (AudioHighPassFilter_tC553FD08CC1A23D836BF86BA3070256FB8006718*, float);
	static AudioHighPassFilter_set_cutoffFrequency_mBD5636A124C598DC0B54B8338FF834F422DD676C_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioHighPassFilter_set_cutoffFrequency_mBD5636A124C598DC0B54B8338FF834F422DD676C_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioHighPassFilter::set_cutoffFrequency(System.Single)");
	_il2cpp_icall_func(__this, ___value0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Int32 UnityEngine.Microphone::GetMicrophoneDeviceIDFromName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Microphone_GetMicrophoneDeviceIDFromName_m1E6B9D14025ABB58A7F7752AA34F1A66D7259AEA (String_t* ___name0, const RuntimeMethod* method) 
{
	typedef int32_t (*Microphone_GetMicrophoneDeviceIDFromName_m1E6B9D14025ABB58A7F7752AA34F1A66D7259AEA_ftn) (String_t*);
	static Microphone_GetMicrophoneDeviceIDFromName_m1E6B9D14025ABB58A7F7752AA34F1A66D7259AEA_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Microphone_GetMicrophoneDeviceIDFromName_m1E6B9D14025ABB58A7F7752AA34F1A66D7259AEA_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Microphone::GetMicrophoneDeviceIDFromName(System.String)");
	int32_t icallRetVal = _il2cpp_icall_func(___name0);
	return icallRetVal;
}
// UnityEngine.AudioClip UnityEngine.Microphone::StartRecord(System.Int32,System.Boolean,System.Single,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* Microphone_StartRecord_m8985786807CDB52810B46AE1A062E9D5EB39CD28 (int32_t ___deviceID0, bool ___loop1, float ___lengthSec2, int32_t ___frequency3, const RuntimeMethod* method) 
{
	typedef AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* (*Microphone_StartRecord_m8985786807CDB52810B46AE1A062E9D5EB39CD28_ftn) (int32_t, bool, float, int32_t);
	static Microphone_StartRecord_m8985786807CDB52810B46AE1A062E9D5EB39CD28_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Microphone_StartRecord_m8985786807CDB52810B46AE1A062E9D5EB39CD28_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Microphone::StartRecord(System.Int32,System.Boolean,System.Single,System.Int32)");
	AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* icallRetVal = _il2cpp_icall_func(___deviceID0, ___loop1, ___lengthSec2, ___frequency3);
	return icallRetVal;
}
// System.Void UnityEngine.Microphone::EndRecord(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Microphone_EndRecord_m04D2DBC749258DC820123A8FB3D42AC1D1DC075D (int32_t ___deviceID0, const RuntimeMethod* method) 
{
	typedef void (*Microphone_EndRecord_m04D2DBC749258DC820123A8FB3D42AC1D1DC075D_ftn) (int32_t);
	static Microphone_EndRecord_m04D2DBC749258DC820123A8FB3D42AC1D1DC075D_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Microphone_EndRecord_m04D2DBC749258DC820123A8FB3D42AC1D1DC075D_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Microphone::EndRecord(System.Int32)");
	_il2cpp_icall_func(___deviceID0);
}
// System.Boolean UnityEngine.Microphone::IsRecording(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Microphone_IsRecording_mC643EFD56EF99D2547848C0266CC46B919F205D3 (int32_t ___deviceID0, const RuntimeMethod* method) 
{
	typedef bool (*Microphone_IsRecording_mC643EFD56EF99D2547848C0266CC46B919F205D3_ftn) (int32_t);
	static Microphone_IsRecording_mC643EFD56EF99D2547848C0266CC46B919F205D3_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Microphone_IsRecording_mC643EFD56EF99D2547848C0266CC46B919F205D3_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Microphone::IsRecording(System.Int32)");
	bool icallRetVal = _il2cpp_icall_func(___deviceID0);
	return icallRetVal;
}
// System.Void UnityEngine.Microphone::GetDeviceCaps(System.Int32,System.Int32&,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Microphone_GetDeviceCaps_m76569111B3CFD49654B11FCD5169FA34FD185945 (int32_t ___deviceID0, int32_t* ___minFreq1, int32_t* ___maxFreq2, const RuntimeMethod* method) 
{
	typedef void (*Microphone_GetDeviceCaps_m76569111B3CFD49654B11FCD5169FA34FD185945_ftn) (int32_t, int32_t*, int32_t*);
	static Microphone_GetDeviceCaps_m76569111B3CFD49654B11FCD5169FA34FD185945_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Microphone_GetDeviceCaps_m76569111B3CFD49654B11FCD5169FA34FD185945_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Microphone::GetDeviceCaps(System.Int32,System.Int32&,System.Int32&)");
	_il2cpp_icall_func(___deviceID0, ___minFreq1, ___maxFreq2);
}
// UnityEngine.AudioClip UnityEngine.Microphone::Start(System.String,System.Boolean,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* Microphone_Start_m135193EDEA092BB393D75C728456523DC8E13BD9 (String_t* ___deviceName0, bool ___loop1, int32_t ___lengthSec2, int32_t ___frequency3, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* V_5 = NULL;
	{
		String_t* L_0 = ___deviceName0;
		int32_t L_1;
		L_1 = Microphone_GetMicrophoneDeviceIDFromName_m1E6B9D14025ABB58A7F7752AA34F1A66D7259AEA(L_0, NULL);
		V_0 = L_1;
		int32_t L_2 = V_0;
		V_1 = (bool)((((int32_t)L_2) == ((int32_t)(-1)))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_0021;
		}
	}
	{
		String_t* L_4 = ___deviceName0;
		String_t* L_5;
		L_5 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB7ED4706BFE5D072AD3E5A0F26644FF44E847682)), L_4, NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_6 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_6);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_6, L_5, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Microphone_Start_m135193EDEA092BB393D75C728456523DC8E13BD9_RuntimeMethod_var)));
	}

IL_0021:
	{
		int32_t L_7 = ___lengthSec2;
		V_2 = (bool)((((int32_t)((((int32_t)L_7) > ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_8 = V_2;
		if (!L_8)
		{
			goto IL_0048;
		}
	}
	{
		String_t* L_9;
		L_9 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&___lengthSec2), NULL);
		String_t* L_10;
		L_10 = String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral67DB02F1FABDC6C47E8B1ED9A9ADC8E17845BD4F)), L_9, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral0ED72C9B4D0AB21E88D08F74AC73C6C8CEC4B7DF)), NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_11 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_11);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_11, L_10, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_11, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Microphone_Start_m135193EDEA092BB393D75C728456523DC8E13BD9_RuntimeMethod_var)));
	}

IL_0048:
	{
		int32_t L_12 = ___lengthSec2;
		V_3 = (bool)((((int32_t)L_12) > ((int32_t)((int32_t)3600)))? 1 : 0);
		bool L_13 = V_3;
		if (!L_13)
		{
			goto IL_0070;
		}
	}
	{
		String_t* L_14;
		L_14 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&___lengthSec2), NULL);
		String_t* L_15;
		L_15 = String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7F33A83E7C1398BEA9BE2EB876FECFEF16BCCDBD)), L_14, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral0ED72C9B4D0AB21E88D08F74AC73C6C8CEC4B7DF)), NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_16 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_16);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_16, L_15, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_16, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Microphone_Start_m135193EDEA092BB393D75C728456523DC8E13BD9_RuntimeMethod_var)));
	}

IL_0070:
	{
		int32_t L_17 = ___frequency3;
		V_4 = (bool)((((int32_t)((((int32_t)L_17) > ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_18 = V_4;
		if (!L_18)
		{
			goto IL_0099;
		}
	}
	{
		String_t* L_19;
		L_19 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&___frequency3), NULL);
		String_t* L_20;
		L_20 = String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral75DC747EA24DB7802D5E580A86C87FFCD3EA69B0)), L_19, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralCAEF26BE398F51129C4063A43AD4BF947AC128D6)), NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_21 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_21);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_21, L_20, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_21, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Microphone_Start_m135193EDEA092BB393D75C728456523DC8E13BD9_RuntimeMethod_var)));
	}

IL_0099:
	{
		int32_t L_22 = V_0;
		bool L_23 = ___loop1;
		int32_t L_24 = ___lengthSec2;
		int32_t L_25 = ___frequency3;
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_26;
		L_26 = Microphone_StartRecord_m8985786807CDB52810B46AE1A062E9D5EB39CD28(L_22, L_23, ((float)L_24), L_25, NULL);
		V_5 = L_26;
		goto IL_00a7;
	}

IL_00a7:
	{
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_27 = V_5;
		return L_27;
	}
}
// System.Void UnityEngine.Microphone::End(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Microphone_End_m5FD3F1D82F93F5C7CAD4EF88F5EFF999AC0BDF4C (String_t* ___deviceName0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	bool V_1 = false;
	{
		String_t* L_0 = ___deviceName0;
		int32_t L_1;
		L_1 = Microphone_GetMicrophoneDeviceIDFromName_m1E6B9D14025ABB58A7F7752AA34F1A66D7259AEA(L_0, NULL);
		V_0 = L_1;
		int32_t L_2 = V_0;
		V_1 = (bool)((((int32_t)L_2) == ((int32_t)(-1)))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_0012;
		}
	}
	{
		goto IL_0019;
	}

IL_0012:
	{
		int32_t L_4 = V_0;
		Microphone_EndRecord_m04D2DBC749258DC820123A8FB3D42AC1D1DC075D(L_4, NULL);
	}

IL_0019:
	{
		return;
	}
}
// System.String[] UnityEngine.Microphone::get_devices()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* Microphone_get_devices_mCD587533C5DBD8AE5C1D4E52143F7B6E9CAF181E (const RuntimeMethod* method) 
{
	typedef StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* (*Microphone_get_devices_mCD587533C5DBD8AE5C1D4E52143F7B6E9CAF181E_ftn) ();
	static Microphone_get_devices_mCD587533C5DBD8AE5C1D4E52143F7B6E9CAF181E_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Microphone_get_devices_mCD587533C5DBD8AE5C1D4E52143F7B6E9CAF181E_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Microphone::get_devices()");
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* icallRetVal = _il2cpp_icall_func();
	return icallRetVal;
}
// System.Boolean UnityEngine.Microphone::IsRecording(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Microphone_IsRecording_m7334F3651484FD1E4AC743225059181A1C7C908C (String_t* ___deviceName0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	bool V_1 = false;
	bool V_2 = false;
	{
		String_t* L_0 = ___deviceName0;
		int32_t L_1;
		L_1 = Microphone_GetMicrophoneDeviceIDFromName_m1E6B9D14025ABB58A7F7752AA34F1A66D7259AEA(L_0, NULL);
		V_0 = L_1;
		int32_t L_2 = V_0;
		V_1 = (bool)((((int32_t)L_2) == ((int32_t)(-1)))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_0014;
		}
	}
	{
		V_2 = (bool)0;
		goto IL_001d;
	}

IL_0014:
	{
		int32_t L_4 = V_0;
		bool L_5;
		L_5 = Microphone_IsRecording_mC643EFD56EF99D2547848C0266CC46B919F205D3(L_4, NULL);
		V_2 = L_5;
		goto IL_001d;
	}

IL_001d:
	{
		bool L_6 = V_2;
		return L_6;
	}
}
// System.Void UnityEngine.Microphone::GetDeviceCaps(System.String,System.Int32&,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Microphone_GetDeviceCaps_mD4A096A929389C5C69906B4E2B27CE18091B28BA (String_t* ___deviceName0, int32_t* ___minFreq1, int32_t* ___maxFreq2, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	bool V_1 = false;
	{
		int32_t* L_0 = ___minFreq1;
		*((int32_t*)L_0) = (int32_t)0;
		int32_t* L_1 = ___maxFreq2;
		*((int32_t*)L_1) = (int32_t)0;
		String_t* L_2 = ___deviceName0;
		int32_t L_3;
		L_3 = Microphone_GetMicrophoneDeviceIDFromName_m1E6B9D14025ABB58A7F7752AA34F1A66D7259AEA(L_2, NULL);
		V_0 = L_3;
		int32_t L_4 = V_0;
		V_1 = (bool)((((int32_t)L_4) == ((int32_t)(-1)))? 1 : 0);
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0018;
		}
	}
	{
		goto IL_0021;
	}

IL_0018:
	{
		int32_t L_6 = V_0;
		int32_t* L_7 = ___minFreq1;
		int32_t* L_8 = ___maxFreq2;
		Microphone_GetDeviceCaps_m76569111B3CFD49654B11FCD5169FA34FD185945(L_6, L_7, L_8, NULL);
	}

IL_0021:
	{
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
// Conversion methods for marshalling of: UnityEngine.WebCamDevice
IL2CPP_EXTERN_C void WebCamDevice_t3D72A89B7F52FD27192023A67254D19E89D9738C_marshal_pinvoke(const WebCamDevice_t3D72A89B7F52FD27192023A67254D19E89D9738C& unmarshaled, WebCamDevice_t3D72A89B7F52FD27192023A67254D19E89D9738C_marshaled_pinvoke& marshaled)
{
	marshaled.___m_Name_0 = il2cpp_codegen_marshal_string(unmarshaled.___m_Name_0);
	marshaled.___m_DepthCameraName_1 = il2cpp_codegen_marshal_string(unmarshaled.___m_DepthCameraName_1);
	marshaled.___m_Flags_2 = unmarshaled.___m_Flags_2;
	marshaled.___m_Kind_3 = unmarshaled.___m_Kind_3;
	if (unmarshaled.___m_Resolutions_4 != NULL)
	{
		il2cpp_array_size_t _unmarshaledm_Resolutions_Length = (unmarshaled.___m_Resolutions_4)->max_length;
		marshaled.___m_Resolutions_4 = il2cpp_codegen_marshal_allocate_array<Resolution_tDF215F567EEFFD07B9A8FB7CEACC08EA6B8B9525>(_unmarshaledm_Resolutions_Length);
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(_unmarshaledm_Resolutions_Length); i++)
		{
			(marshaled.___m_Resolutions_4)[i] = (unmarshaled.___m_Resolutions_4)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
		}
	}
	else
	{
		marshaled.___m_Resolutions_4 = NULL;
	}
}
IL2CPP_EXTERN_C void WebCamDevice_t3D72A89B7F52FD27192023A67254D19E89D9738C_marshal_pinvoke_back(const WebCamDevice_t3D72A89B7F52FD27192023A67254D19E89D9738C_marshaled_pinvoke& marshaled, WebCamDevice_t3D72A89B7F52FD27192023A67254D19E89D9738C& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ResolutionU5BU5D_t943BB1FE2B73E9E630A701D55F4C6EED8B54175A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	unmarshaled.___m_Name_0 = il2cpp_codegen_marshal_string_result(marshaled.___m_Name_0);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___m_Name_0), (void*)il2cpp_codegen_marshal_string_result(marshaled.___m_Name_0));
	unmarshaled.___m_DepthCameraName_1 = il2cpp_codegen_marshal_string_result(marshaled.___m_DepthCameraName_1);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___m_DepthCameraName_1), (void*)il2cpp_codegen_marshal_string_result(marshaled.___m_DepthCameraName_1));
	int32_t unmarshaledm_Flags_temp_2 = 0;
	unmarshaledm_Flags_temp_2 = marshaled.___m_Flags_2;
	unmarshaled.___m_Flags_2 = unmarshaledm_Flags_temp_2;
	int32_t unmarshaledm_Kind_temp_3 = 0;
	unmarshaledm_Kind_temp_3 = marshaled.___m_Kind_3;
	unmarshaled.___m_Kind_3 = unmarshaledm_Kind_temp_3;
	if (marshaled.___m_Resolutions_4 != NULL)
	{
		if (unmarshaled.___m_Resolutions_4 == NULL)
		{
			unmarshaled.___m_Resolutions_4 = reinterpret_cast<ResolutionU5BU5D_t943BB1FE2B73E9E630A701D55F4C6EED8B54175A*>((ResolutionU5BU5D_t943BB1FE2B73E9E630A701D55F4C6EED8B54175A*)SZArrayNew(ResolutionU5BU5D_t943BB1FE2B73E9E630A701D55F4C6EED8B54175A_il2cpp_TypeInfo_var, 1));
			Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___m_Resolutions_4), (void*)reinterpret_cast<ResolutionU5BU5D_t943BB1FE2B73E9E630A701D55F4C6EED8B54175A*>((ResolutionU5BU5D_t943BB1FE2B73E9E630A701D55F4C6EED8B54175A*)SZArrayNew(ResolutionU5BU5D_t943BB1FE2B73E9E630A701D55F4C6EED8B54175A_il2cpp_TypeInfo_var, 1)));
		}
		il2cpp_array_size_t _arrayLength = (unmarshaled.___m_Resolutions_4)->max_length;
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(_arrayLength); i++)
		{
			(unmarshaled.___m_Resolutions_4)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), (marshaled.___m_Resolutions_4)[i]);
		}
	}
}
// Conversion method for clean up from marshalling of: UnityEngine.WebCamDevice
IL2CPP_EXTERN_C void WebCamDevice_t3D72A89B7F52FD27192023A67254D19E89D9738C_marshal_pinvoke_cleanup(WebCamDevice_t3D72A89B7F52FD27192023A67254D19E89D9738C_marshaled_pinvoke& marshaled)
{
	il2cpp_codegen_marshal_free(marshaled.___m_Name_0);
	marshaled.___m_Name_0 = NULL;
	il2cpp_codegen_marshal_free(marshaled.___m_DepthCameraName_1);
	marshaled.___m_DepthCameraName_1 = NULL;
	if (marshaled.___m_Resolutions_4 != NULL)
	{
		il2cpp_codegen_marshal_free(marshaled.___m_Resolutions_4);
		marshaled.___m_Resolutions_4 = NULL;
	}
}
// Conversion methods for marshalling of: UnityEngine.WebCamDevice
IL2CPP_EXTERN_C void WebCamDevice_t3D72A89B7F52FD27192023A67254D19E89D9738C_marshal_com(const WebCamDevice_t3D72A89B7F52FD27192023A67254D19E89D9738C& unmarshaled, WebCamDevice_t3D72A89B7F52FD27192023A67254D19E89D9738C_marshaled_com& marshaled)
{
	marshaled.___m_Name_0 = il2cpp_codegen_marshal_bstring(unmarshaled.___m_Name_0);
	marshaled.___m_DepthCameraName_1 = il2cpp_codegen_marshal_bstring(unmarshaled.___m_DepthCameraName_1);
	marshaled.___m_Flags_2 = unmarshaled.___m_Flags_2;
	marshaled.___m_Kind_3 = unmarshaled.___m_Kind_3;
	if (unmarshaled.___m_Resolutions_4 != NULL)
	{
		il2cpp_array_size_t _unmarshaledm_Resolutions_Length = (unmarshaled.___m_Resolutions_4)->max_length;
		marshaled.___m_Resolutions_4 = il2cpp_codegen_marshal_allocate_array<Resolution_tDF215F567EEFFD07B9A8FB7CEACC08EA6B8B9525>(_unmarshaledm_Resolutions_Length);
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(_unmarshaledm_Resolutions_Length); i++)
		{
			(marshaled.___m_Resolutions_4)[i] = (unmarshaled.___m_Resolutions_4)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
		}
	}
	else
	{
		marshaled.___m_Resolutions_4 = NULL;
	}
}
IL2CPP_EXTERN_C void WebCamDevice_t3D72A89B7F52FD27192023A67254D19E89D9738C_marshal_com_back(const WebCamDevice_t3D72A89B7F52FD27192023A67254D19E89D9738C_marshaled_com& marshaled, WebCamDevice_t3D72A89B7F52FD27192023A67254D19E89D9738C& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ResolutionU5BU5D_t943BB1FE2B73E9E630A701D55F4C6EED8B54175A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	unmarshaled.___m_Name_0 = il2cpp_codegen_marshal_bstring_result(marshaled.___m_Name_0);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___m_Name_0), (void*)il2cpp_codegen_marshal_bstring_result(marshaled.___m_Name_0));
	unmarshaled.___m_DepthCameraName_1 = il2cpp_codegen_marshal_bstring_result(marshaled.___m_DepthCameraName_1);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___m_DepthCameraName_1), (void*)il2cpp_codegen_marshal_bstring_result(marshaled.___m_DepthCameraName_1));
	int32_t unmarshaledm_Flags_temp_2 = 0;
	unmarshaledm_Flags_temp_2 = marshaled.___m_Flags_2;
	unmarshaled.___m_Flags_2 = unmarshaledm_Flags_temp_2;
	int32_t unmarshaledm_Kind_temp_3 = 0;
	unmarshaledm_Kind_temp_3 = marshaled.___m_Kind_3;
	unmarshaled.___m_Kind_3 = unmarshaledm_Kind_temp_3;
	if (marshaled.___m_Resolutions_4 != NULL)
	{
		if (unmarshaled.___m_Resolutions_4 == NULL)
		{
			unmarshaled.___m_Resolutions_4 = reinterpret_cast<ResolutionU5BU5D_t943BB1FE2B73E9E630A701D55F4C6EED8B54175A*>((ResolutionU5BU5D_t943BB1FE2B73E9E630A701D55F4C6EED8B54175A*)SZArrayNew(ResolutionU5BU5D_t943BB1FE2B73E9E630A701D55F4C6EED8B54175A_il2cpp_TypeInfo_var, 1));
			Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___m_Resolutions_4), (void*)reinterpret_cast<ResolutionU5BU5D_t943BB1FE2B73E9E630A701D55F4C6EED8B54175A*>((ResolutionU5BU5D_t943BB1FE2B73E9E630A701D55F4C6EED8B54175A*)SZArrayNew(ResolutionU5BU5D_t943BB1FE2B73E9E630A701D55F4C6EED8B54175A_il2cpp_TypeInfo_var, 1)));
		}
		il2cpp_array_size_t _arrayLength = (unmarshaled.___m_Resolutions_4)->max_length;
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(_arrayLength); i++)
		{
			(unmarshaled.___m_Resolutions_4)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), (marshaled.___m_Resolutions_4)[i]);
		}
	}
}
// Conversion method for clean up from marshalling of: UnityEngine.WebCamDevice
IL2CPP_EXTERN_C void WebCamDevice_t3D72A89B7F52FD27192023A67254D19E89D9738C_marshal_com_cleanup(WebCamDevice_t3D72A89B7F52FD27192023A67254D19E89D9738C_marshaled_com& marshaled)
{
	il2cpp_codegen_marshal_free_bstring(marshaled.___m_Name_0);
	marshaled.___m_Name_0 = NULL;
	il2cpp_codegen_marshal_free_bstring(marshaled.___m_DepthCameraName_1);
	marshaled.___m_DepthCameraName_1 = NULL;
	if (marshaled.___m_Resolutions_4 != NULL)
	{
		il2cpp_codegen_marshal_free(marshaled.___m_Resolutions_4);
		marshaled.___m_Resolutions_4 = NULL;
	}
}
// System.String UnityEngine.WebCamDevice::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* WebCamDevice_get_name_m2BF75E8EA486668299906EAC9B35214890D4601E (WebCamDevice_t3D72A89B7F52FD27192023A67254D19E89D9738C* __this, const RuntimeMethod* method) 
{
	String_t* V_0 = NULL;
	{
		String_t* L_0 = __this->___m_Name_0;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		String_t* L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  String_t* WebCamDevice_get_name_m2BF75E8EA486668299906EAC9B35214890D4601E_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	WebCamDevice_t3D72A89B7F52FD27192023A67254D19E89D9738C* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<WebCamDevice_t3D72A89B7F52FD27192023A67254D19E89D9738C*>(__this + _offset);
	String_t* _returnValue;
	_returnValue = WebCamDevice_get_name_m2BF75E8EA486668299906EAC9B35214890D4601E(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean UnityEngine.WebCamDevice::get_isFrontFacing()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WebCamDevice_get_isFrontFacing_mA021D9DBDDB227FEA8AA635E833EAB7718672404 (WebCamDevice_t3D72A89B7F52FD27192023A67254D19E89D9738C* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		int32_t L_0 = __this->___m_Flags_2;
		V_0 = (bool)((!(((uint32_t)((int32_t)(L_0&1))) <= ((uint32_t)0)))? 1 : 0);
		goto IL_000f;
	}

IL_000f:
	{
		bool L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  bool WebCamDevice_get_isFrontFacing_mA021D9DBDDB227FEA8AA635E833EAB7718672404_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	WebCamDevice_t3D72A89B7F52FD27192023A67254D19E89D9738C* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<WebCamDevice_t3D72A89B7F52FD27192023A67254D19E89D9738C*>(__this + _offset);
	bool _returnValue;
	_returnValue = WebCamDevice_get_isFrontFacing_mA021D9DBDDB227FEA8AA635E833EAB7718672404(_thisAdjusted, method);
	return _returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.WebCamDevice[] UnityEngine.WebCamTexture::get_devices()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WebCamDeviceU5BU5D_tA5B1352BDE6FE233B66C3ABF96E00EB3215629F5* WebCamTexture_get_devices_mB2BEC8F4A104FD1B50EDC910C75379129D936EAF (const RuntimeMethod* method) 
{
	typedef WebCamDeviceU5BU5D_tA5B1352BDE6FE233B66C3ABF96E00EB3215629F5* (*WebCamTexture_get_devices_mB2BEC8F4A104FD1B50EDC910C75379129D936EAF_ftn) ();
	static WebCamTexture_get_devices_mB2BEC8F4A104FD1B50EDC910C75379129D936EAF_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (WebCamTexture_get_devices_mB2BEC8F4A104FD1B50EDC910C75379129D936EAF_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.WebCamTexture::get_devices()");
	WebCamDeviceU5BU5D_tA5B1352BDE6FE233B66C3ABF96E00EB3215629F5* icallRetVal = _il2cpp_icall_func();
	return icallRetVal;
}
// System.Void UnityEngine.WebCamTexture::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebCamTexture__ctor_mD235321AAF77352551BBF18CB34AD6293FD62881 (WebCamTexture_t2021D179149C925AA6D73E6F1898C8D46521C749* __this, String_t* ___deviceName0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700_il2cpp_TypeInfo_var);
		Texture__ctor_mC0C7974BEBD867CEB281409FEA15A78CD91B19CC(__this, NULL);
		String_t* L_0 = ___deviceName0;
		WebCamTexture_Internal_CreateWebCamTexture_m507B13BE568DBE34BC4F8429FCCE842734FDEE5C(__this, L_0, 0, 0, 0, NULL);
		return;
	}
}
// System.Void UnityEngine.WebCamTexture::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebCamTexture__ctor_mCDCF373E41263EE323147C4A50609EBE9FA28269 (WebCamTexture_t2021D179149C925AA6D73E6F1898C8D46521C749* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700_il2cpp_TypeInfo_var);
		Texture__ctor_mC0C7974BEBD867CEB281409FEA15A78CD91B19CC(__this, NULL);
		WebCamTexture_Internal_CreateWebCamTexture_m507B13BE568DBE34BC4F8429FCCE842734FDEE5C(__this, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, 0, 0, 0, NULL);
		return;
	}
}
// System.Void UnityEngine.WebCamTexture::Play()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebCamTexture_Play_mAB313C6F98D5433C414DA31DD96316BDE8D19A26 (WebCamTexture_t2021D179149C925AA6D73E6F1898C8D46521C749* __this, const RuntimeMethod* method) 
{
	typedef void (*WebCamTexture_Play_mAB313C6F98D5433C414DA31DD96316BDE8D19A26_ftn) (WebCamTexture_t2021D179149C925AA6D73E6F1898C8D46521C749*);
	static WebCamTexture_Play_mAB313C6F98D5433C414DA31DD96316BDE8D19A26_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (WebCamTexture_Play_mAB313C6F98D5433C414DA31DD96316BDE8D19A26_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.WebCamTexture::Play()");
	_il2cpp_icall_func(__this);
}
// System.Void UnityEngine.WebCamTexture::Stop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebCamTexture_Stop_m6239B5D1E10C53B57BB30E124E3F541EBD46A184 (WebCamTexture_t2021D179149C925AA6D73E6F1898C8D46521C749* __this, const RuntimeMethod* method) 
{
	typedef void (*WebCamTexture_Stop_m6239B5D1E10C53B57BB30E124E3F541EBD46A184_ftn) (WebCamTexture_t2021D179149C925AA6D73E6F1898C8D46521C749*);
	static WebCamTexture_Stop_m6239B5D1E10C53B57BB30E124E3F541EBD46A184_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (WebCamTexture_Stop_m6239B5D1E10C53B57BB30E124E3F541EBD46A184_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.WebCamTexture::Stop()");
	_il2cpp_icall_func(__this);
}
// System.Boolean UnityEngine.WebCamTexture::get_isPlaying()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WebCamTexture_get_isPlaying_mE53901F249CD5FFF9D1C31DDCC2FC331DCEA80CF (WebCamTexture_t2021D179149C925AA6D73E6F1898C8D46521C749* __this, const RuntimeMethod* method) 
{
	typedef bool (*WebCamTexture_get_isPlaying_mE53901F249CD5FFF9D1C31DDCC2FC331DCEA80CF_ftn) (WebCamTexture_t2021D179149C925AA6D73E6F1898C8D46521C749*);
	static WebCamTexture_get_isPlaying_mE53901F249CD5FFF9D1C31DDCC2FC331DCEA80CF_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (WebCamTexture_get_isPlaying_mE53901F249CD5FFF9D1C31DDCC2FC331DCEA80CF_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.WebCamTexture::get_isPlaying()");
	bool icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
// System.Int32 UnityEngine.WebCamTexture::get_videoRotationAngle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WebCamTexture_get_videoRotationAngle_m2BF420A1243F56415BEF82CC84AB4C7B342C991F (WebCamTexture_t2021D179149C925AA6D73E6F1898C8D46521C749* __this, const RuntimeMethod* method) 
{
	typedef int32_t (*WebCamTexture_get_videoRotationAngle_m2BF420A1243F56415BEF82CC84AB4C7B342C991F_ftn) (WebCamTexture_t2021D179149C925AA6D73E6F1898C8D46521C749*);
	static WebCamTexture_get_videoRotationAngle_m2BF420A1243F56415BEF82CC84AB4C7B342C991F_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (WebCamTexture_get_videoRotationAngle_m2BF420A1243F56415BEF82CC84AB4C7B342C991F_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.WebCamTexture::get_videoRotationAngle()");
	int32_t icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
// System.Boolean UnityEngine.WebCamTexture::get_didUpdateThisFrame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WebCamTexture_get_didUpdateThisFrame_m3672350773BAA9131D648B886DFD4E3351F045BE (WebCamTexture_t2021D179149C925AA6D73E6F1898C8D46521C749* __this, const RuntimeMethod* method) 
{
	typedef bool (*WebCamTexture_get_didUpdateThisFrame_m3672350773BAA9131D648B886DFD4E3351F045BE_ftn) (WebCamTexture_t2021D179149C925AA6D73E6F1898C8D46521C749*);
	static WebCamTexture_get_didUpdateThisFrame_m3672350773BAA9131D648B886DFD4E3351F045BE_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (WebCamTexture_get_didUpdateThisFrame_m3672350773BAA9131D648B886DFD4E3351F045BE_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.WebCamTexture::get_didUpdateThisFrame()");
	bool icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
// UnityEngine.Color32[] UnityEngine.WebCamTexture::GetPixels32()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* WebCamTexture_GetPixels32_mCB0ABCB9D7BCB7ECABF7BF911946DE25C8F26B58 (WebCamTexture_t2021D179149C925AA6D73E6F1898C8D46521C749* __this, const RuntimeMethod* method) 
{
	Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* V_0 = NULL;
	{
		Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* L_0;
		L_0 = WebCamTexture_GetPixels32_m7F4F302BE0E517451593C43E3F0D0D1B7840E39E(__this, (Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259*)NULL, NULL);
		V_0 = L_0;
		goto IL_000b;
	}

IL_000b:
	{
		Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* L_1 = V_0;
		return L_1;
	}
}
// UnityEngine.Color32[] UnityEngine.WebCamTexture::GetPixels32(UnityEngine.Color32[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* WebCamTexture_GetPixels32_m7F4F302BE0E517451593C43E3F0D0D1B7840E39E (WebCamTexture_t2021D179149C925AA6D73E6F1898C8D46521C749* __this, Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* ___colors0, const RuntimeMethod* method) 
{
	typedef Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* (*WebCamTexture_GetPixels32_m7F4F302BE0E517451593C43E3F0D0D1B7840E39E_ftn) (WebCamTexture_t2021D179149C925AA6D73E6F1898C8D46521C749*, Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259*);
	static WebCamTexture_GetPixels32_m7F4F302BE0E517451593C43E3F0D0D1B7840E39E_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (WebCamTexture_GetPixels32_m7F4F302BE0E517451593C43E3F0D0D1B7840E39E_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.WebCamTexture::GetPixels32(UnityEngine.Color32[])");
	Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* icallRetVal = _il2cpp_icall_func(__this, ___colors0);
	return icallRetVal;
}
// System.Void UnityEngine.WebCamTexture::Internal_CreateWebCamTexture(UnityEngine.WebCamTexture,System.String,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebCamTexture_Internal_CreateWebCamTexture_m507B13BE568DBE34BC4F8429FCCE842734FDEE5C (WebCamTexture_t2021D179149C925AA6D73E6F1898C8D46521C749* ___self0, String_t* ___scriptingDevice1, int32_t ___requestedWidth2, int32_t ___requestedHeight3, int32_t ___maxFramerate4, const RuntimeMethod* method) 
{
	typedef void (*WebCamTexture_Internal_CreateWebCamTexture_m507B13BE568DBE34BC4F8429FCCE842734FDEE5C_ftn) (WebCamTexture_t2021D179149C925AA6D73E6F1898C8D46521C749*, String_t*, int32_t, int32_t, int32_t);
	static WebCamTexture_Internal_CreateWebCamTexture_m507B13BE568DBE34BC4F8429FCCE842734FDEE5C_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (WebCamTexture_Internal_CreateWebCamTexture_m507B13BE568DBE34BC4F8429FCCE842734FDEE5C_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.WebCamTexture::Internal_CreateWebCamTexture(UnityEngine.WebCamTexture,System.String,System.Int32,System.Int32,System.Int32)");
	_il2cpp_icall_func(___self0, ___scriptingDevice1, ___requestedWidth2, ___requestedHeight3, ___maxFramerate4);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.Playables.PlayableHandle UnityEngine.Audio.AudioClipPlayable::GetHandle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 AudioClipPlayable_GetHandle_mEA1D664328FF9B08E4F7D5EBCD4B51A754D97C44 (AudioClipPlayable_tD4B758E68CAE03CB0CD31F90C8A3E603B97143A0* __this, const RuntimeMethod* method) 
{
	PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_0 = __this->___m_Handle_0;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 AudioClipPlayable_GetHandle_mEA1D664328FF9B08E4F7D5EBCD4B51A754D97C44_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	AudioClipPlayable_tD4B758E68CAE03CB0CD31F90C8A3E603B97143A0* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AudioClipPlayable_tD4B758E68CAE03CB0CD31F90C8A3E603B97143A0*>(__this + _offset);
	PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 _returnValue;
	_returnValue = AudioClipPlayable_GetHandle_mEA1D664328FF9B08E4F7D5EBCD4B51A754D97C44(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean UnityEngine.Audio.AudioClipPlayable::Equals(UnityEngine.Audio.AudioClipPlayable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AudioClipPlayable_Equals_m9C1C75ACBB74FE06AD02BE4643F6EB39413EFF83 (AudioClipPlayable_tD4B758E68CAE03CB0CD31F90C8A3E603B97143A0* __this, AudioClipPlayable_tD4B758E68CAE03CB0CD31F90C8A3E603B97143A0 ___other0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_0;
		L_0 = AudioClipPlayable_GetHandle_mEA1D664328FF9B08E4F7D5EBCD4B51A754D97C44(__this, NULL);
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_1;
		L_1 = AudioClipPlayable_GetHandle_mEA1D664328FF9B08E4F7D5EBCD4B51A754D97C44((&___other0), NULL);
		il2cpp_codegen_runtime_class_init_inline(PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = PlayableHandle_op_Equality_m5E9B847A9D36875C78902727FE36FBEDA4D2D3B9(L_0, L_1, NULL);
		V_0 = L_2;
		goto IL_0016;
	}

IL_0016:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
IL2CPP_EXTERN_C  bool AudioClipPlayable_Equals_m9C1C75ACBB74FE06AD02BE4643F6EB39413EFF83_AdjustorThunk (RuntimeObject* __this, AudioClipPlayable_tD4B758E68CAE03CB0CD31F90C8A3E603B97143A0 ___other0, const RuntimeMethod* method)
{
	AudioClipPlayable_tD4B758E68CAE03CB0CD31F90C8A3E603B97143A0* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AudioClipPlayable_tD4B758E68CAE03CB0CD31F90C8A3E603B97143A0*>(__this + _offset);
	bool _returnValue;
	_returnValue = AudioClipPlayable_Equals_m9C1C75ACBB74FE06AD02BE4643F6EB39413EFF83(_thisAdjusted, ___other0, method);
	return _returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.Playables.PlayableHandle UnityEngine.Audio.AudioMixerPlayable::GetHandle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 AudioMixerPlayable_GetHandle_m6C182D9794E901D123223BB57738A302BEAB41FD (AudioMixerPlayable_t6AADDF0C53DF1B4C17969EC24B3B4E4975F3A56C* __this, const RuntimeMethod* method) 
{
	PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_0 = __this->___m_Handle_0;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 AudioMixerPlayable_GetHandle_m6C182D9794E901D123223BB57738A302BEAB41FD_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	AudioMixerPlayable_t6AADDF0C53DF1B4C17969EC24B3B4E4975F3A56C* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AudioMixerPlayable_t6AADDF0C53DF1B4C17969EC24B3B4E4975F3A56C*>(__this + _offset);
	PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 _returnValue;
	_returnValue = AudioMixerPlayable_GetHandle_m6C182D9794E901D123223BB57738A302BEAB41FD(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean UnityEngine.Audio.AudioMixerPlayable::Equals(UnityEngine.Audio.AudioMixerPlayable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AudioMixerPlayable_Equals_mDFB945EB48199A338BAD00D40FB8EEC34CF64D57 (AudioMixerPlayable_t6AADDF0C53DF1B4C17969EC24B3B4E4975F3A56C* __this, AudioMixerPlayable_t6AADDF0C53DF1B4C17969EC24B3B4E4975F3A56C ___other0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_0;
		L_0 = AudioMixerPlayable_GetHandle_m6C182D9794E901D123223BB57738A302BEAB41FD(__this, NULL);
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_1;
		L_1 = AudioMixerPlayable_GetHandle_m6C182D9794E901D123223BB57738A302BEAB41FD((&___other0), NULL);
		il2cpp_codegen_runtime_class_init_inline(PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = PlayableHandle_op_Equality_m5E9B847A9D36875C78902727FE36FBEDA4D2D3B9(L_0, L_1, NULL);
		V_0 = L_2;
		goto IL_0016;
	}

IL_0016:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
IL2CPP_EXTERN_C  bool AudioMixerPlayable_Equals_mDFB945EB48199A338BAD00D40FB8EEC34CF64D57_AdjustorThunk (RuntimeObject* __this, AudioMixerPlayable_t6AADDF0C53DF1B4C17969EC24B3B4E4975F3A56C ___other0, const RuntimeMethod* method)
{
	AudioMixerPlayable_t6AADDF0C53DF1B4C17969EC24B3B4E4975F3A56C* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AudioMixerPlayable_t6AADDF0C53DF1B4C17969EC24B3B4E4975F3A56C*>(__this + _offset);
	bool _returnValue;
	_returnValue = AudioMixerPlayable_Equals_mDFB945EB48199A338BAD00D40FB8EEC34CF64D57(_thisAdjusted, ___other0, method);
	return _returnValue;
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
// System.Void UnityEngine.Experimental.Audio.AudioSampleProvider::InvokeSampleFramesAvailable(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSampleProvider_InvokeSampleFramesAvailable_mEB16F7230AB65A3576BF053AC5719F8E134FBCD4 (AudioSampleProvider_t602353124A2F6F2AEC38E56C3C21932344F712E2* __this, int32_t ___sampleFrameCount0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		SampleFramesHandler_tFE84FF9BBCEFB880D46227188F375BEF680AAA30* L_0 = __this->___sampleFramesAvailable_0;
		V_0 = (bool)((!(((RuntimeObject*)(SampleFramesHandler_tFE84FF9BBCEFB880D46227188F375BEF680AAA30*)L_0) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_001c;
		}
	}
	{
		SampleFramesHandler_tFE84FF9BBCEFB880D46227188F375BEF680AAA30* L_2 = __this->___sampleFramesAvailable_0;
		int32_t L_3 = ___sampleFrameCount0;
		NullCheck(L_2);
		SampleFramesHandler_Invoke_m478D5645634B8C734E58B59CF7750797FC54F1BC_inline(L_2, __this, L_3, NULL);
	}

IL_001c:
	{
		return;
	}
}
// System.Void UnityEngine.Experimental.Audio.AudioSampleProvider::InvokeSampleFramesOverflow(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSampleProvider_InvokeSampleFramesOverflow_m66593173A527981F5EB2A5EF77B0C9119DAB5E15 (AudioSampleProvider_t602353124A2F6F2AEC38E56C3C21932344F712E2* __this, int32_t ___droppedSampleFrameCount0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		SampleFramesHandler_tFE84FF9BBCEFB880D46227188F375BEF680AAA30* L_0 = __this->___sampleFramesOverflow_1;
		V_0 = (bool)((!(((RuntimeObject*)(SampleFramesHandler_tFE84FF9BBCEFB880D46227188F375BEF680AAA30*)L_0) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_001c;
		}
	}
	{
		SampleFramesHandler_tFE84FF9BBCEFB880D46227188F375BEF680AAA30* L_2 = __this->___sampleFramesOverflow_1;
		int32_t L_3 = ___droppedSampleFrameCount0;
		NullCheck(L_2);
		SampleFramesHandler_Invoke_m478D5645634B8C734E58B59CF7750797FC54F1BC_inline(L_2, __this, L_3, NULL);
	}

IL_001c:
	{
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
void SampleFramesHandler_Invoke_m478D5645634B8C734E58B59CF7750797FC54F1BC_Multicast(SampleFramesHandler_tFE84FF9BBCEFB880D46227188F375BEF680AAA30* __this, AudioSampleProvider_t602353124A2F6F2AEC38E56C3C21932344F712E2* ___provider0, uint32_t ___sampleFrameCount1, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		SampleFramesHandler_tFE84FF9BBCEFB880D46227188F375BEF680AAA30* currentDelegate = reinterpret_cast<SampleFramesHandler_tFE84FF9BBCEFB880D46227188F375BEF680AAA30*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, AudioSampleProvider_t602353124A2F6F2AEC38E56C3C21932344F712E2*, uint32_t, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___provider0, ___sampleFrameCount1, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void SampleFramesHandler_Invoke_m478D5645634B8C734E58B59CF7750797FC54F1BC_Open(SampleFramesHandler_tFE84FF9BBCEFB880D46227188F375BEF680AAA30* __this, AudioSampleProvider_t602353124A2F6F2AEC38E56C3C21932344F712E2* ___provider0, uint32_t ___sampleFrameCount1, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (AudioSampleProvider_t602353124A2F6F2AEC38E56C3C21932344F712E2*, uint32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___provider0, ___sampleFrameCount1, method);
}
void SampleFramesHandler_Invoke_m478D5645634B8C734E58B59CF7750797FC54F1BC_OpenStaticInvoker(SampleFramesHandler_tFE84FF9BBCEFB880D46227188F375BEF680AAA30* __this, AudioSampleProvider_t602353124A2F6F2AEC38E56C3C21932344F712E2* ___provider0, uint32_t ___sampleFrameCount1, const RuntimeMethod* method)
{
	InvokerActionInvoker2< AudioSampleProvider_t602353124A2F6F2AEC38E56C3C21932344F712E2*, uint32_t >::Invoke(__this->___method_ptr_0, method, NULL, ___provider0, ___sampleFrameCount1);
}
void SampleFramesHandler_Invoke_m478D5645634B8C734E58B59CF7750797FC54F1BC_ClosedStaticInvoker(SampleFramesHandler_tFE84FF9BBCEFB880D46227188F375BEF680AAA30* __this, AudioSampleProvider_t602353124A2F6F2AEC38E56C3C21932344F712E2* ___provider0, uint32_t ___sampleFrameCount1, const RuntimeMethod* method)
{
	InvokerActionInvoker3< RuntimeObject*, AudioSampleProvider_t602353124A2F6F2AEC38E56C3C21932344F712E2*, uint32_t >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___provider0, ___sampleFrameCount1);
}
void SampleFramesHandler_Invoke_m478D5645634B8C734E58B59CF7750797FC54F1BC_OpenVirtual(SampleFramesHandler_tFE84FF9BBCEFB880D46227188F375BEF680AAA30* __this, AudioSampleProvider_t602353124A2F6F2AEC38E56C3C21932344F712E2* ___provider0, uint32_t ___sampleFrameCount1, const RuntimeMethod* method)
{
	VirtualActionInvoker1< uint32_t >::Invoke(il2cpp_codegen_method_get_slot(method), ___provider0, ___sampleFrameCount1);
}
void SampleFramesHandler_Invoke_m478D5645634B8C734E58B59CF7750797FC54F1BC_OpenInterface(SampleFramesHandler_tFE84FF9BBCEFB880D46227188F375BEF680AAA30* __this, AudioSampleProvider_t602353124A2F6F2AEC38E56C3C21932344F712E2* ___provider0, uint32_t ___sampleFrameCount1, const RuntimeMethod* method)
{
	InterfaceActionInvoker1< uint32_t >::Invoke(il2cpp_codegen_method_get_slot(method), il2cpp_codegen_method_get_declaring_type(method), ___provider0, ___sampleFrameCount1);
}
void SampleFramesHandler_Invoke_m478D5645634B8C734E58B59CF7750797FC54F1BC_OpenGenericVirtual(SampleFramesHandler_tFE84FF9BBCEFB880D46227188F375BEF680AAA30* __this, AudioSampleProvider_t602353124A2F6F2AEC38E56C3C21932344F712E2* ___provider0, uint32_t ___sampleFrameCount1, const RuntimeMethod* method)
{
	GenericVirtualActionInvoker1< uint32_t >::Invoke(method, ___provider0, ___sampleFrameCount1);
}
void SampleFramesHandler_Invoke_m478D5645634B8C734E58B59CF7750797FC54F1BC_OpenGenericInterface(SampleFramesHandler_tFE84FF9BBCEFB880D46227188F375BEF680AAA30* __this, AudioSampleProvider_t602353124A2F6F2AEC38E56C3C21932344F712E2* ___provider0, uint32_t ___sampleFrameCount1, const RuntimeMethod* method)
{
	GenericInterfaceActionInvoker1< uint32_t >::Invoke(method, ___provider0, ___sampleFrameCount1);
}
// System.Void UnityEngine.Experimental.Audio.AudioSampleProvider/SampleFramesHandler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SampleFramesHandler__ctor_m7DDE0BAD439CD80791140C7D42D661B598A7663A (SampleFramesHandler_tFE84FF9BBCEFB880D46227188F375BEF680AAA30* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 2;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&SampleFramesHandler_Invoke_m478D5645634B8C734E58B59CF7750797FC54F1BC_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&SampleFramesHandler_Invoke_m478D5645634B8C734E58B59CF7750797FC54F1BC_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&SampleFramesHandler_Invoke_m478D5645634B8C734E58B59CF7750797FC54F1BC_Open;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 1;
		if (isOpen)
		{
			if (__this->___method_is_virtual_12)
			{
				if (il2cpp_codegen_method_is_generic_instance_method((RuntimeMethod*)___method1))
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___method1))
						__this->___invoke_impl_1 = (intptr_t)&SampleFramesHandler_Invoke_m478D5645634B8C734E58B59CF7750797FC54F1BC_OpenGenericInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&SampleFramesHandler_Invoke_m478D5645634B8C734E58B59CF7750797FC54F1BC_OpenGenericVirtual;
				else
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___method1))
						__this->___invoke_impl_1 = (intptr_t)&SampleFramesHandler_Invoke_m478D5645634B8C734E58B59CF7750797FC54F1BC_OpenInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&SampleFramesHandler_Invoke_m478D5645634B8C734E58B59CF7750797FC54F1BC_OpenVirtual;
			}
			else
			{
				__this->___invoke_impl_1 = (intptr_t)&SampleFramesHandler_Invoke_m478D5645634B8C734E58B59CF7750797FC54F1BC_Open;
			}
		}
		else
		{
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&SampleFramesHandler_Invoke_m478D5645634B8C734E58B59CF7750797FC54F1BC_Multicast;
}
// System.Void UnityEngine.Experimental.Audio.AudioSampleProvider/SampleFramesHandler::Invoke(UnityEngine.Experimental.Audio.AudioSampleProvider,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SampleFramesHandler_Invoke_m478D5645634B8C734E58B59CF7750797FC54F1BC (SampleFramesHandler_tFE84FF9BBCEFB880D46227188F375BEF680AAA30* __this, AudioSampleProvider_t602353124A2F6F2AEC38E56C3C21932344F712E2* ___provider0, uint32_t ___sampleFrameCount1, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, AudioSampleProvider_t602353124A2F6F2AEC38E56C3C21932344F712E2*, uint32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___provider0, ___sampleFrameCount1, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AudioConfigurationChangeHandler_Invoke_m4DC27DD11512481B60071B20284E6886DAE54DE2_inline (AudioConfigurationChangeHandler_tE071B0CBA3B3A77D3E41F5FCB65B4017885B3177* __this, bool ___deviceWasChanged0, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, bool, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___deviceWasChanged0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PCMReaderCallback_Invoke_m76784C690C36B513E2AA5B0E4FD9831B2C7E5152_inline (PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E* __this, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___data0, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___data0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PCMSetPositionCallback_Invoke_m434D4F02FA25F91DF6199EC5A799C551C7F93702_inline (PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072* __this, int32_t ___position0, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___position0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SampleFramesHandler_Invoke_m478D5645634B8C734E58B59CF7750797FC54F1BC_inline (SampleFramesHandler_tFE84FF9BBCEFB880D46227188F375BEF680AAA30* __this, AudioSampleProvider_t602353124A2F6F2AEC38E56C3C21932344F712E2* ___provider0, uint32_t ___sampleFrameCount1, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, AudioSampleProvider_t602353124A2F6F2AEC38E56C3C21932344F712E2*, uint32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___provider0, ___sampleFrameCount1, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
