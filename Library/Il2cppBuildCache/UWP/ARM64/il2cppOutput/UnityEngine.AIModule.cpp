﻿#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


struct InvokerActionInvoker0
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj)
	{
		method->invoker_method(methodPtr, method, obj, NULL, NULL);
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

// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.AI.NavMeshAgent
struct NavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F;
// System.String
struct String_t;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityEngine.AI.NavMesh/OnNavMeshPreUpdate
struct OnNavMeshPreUpdate_t332BD19DBCB087D7DE3F4F48C1E8F6A4EAB691C7;

IL2CPP_EXTERN_C RuntimeClass* NavMesh_t3543D236ABB9A67F696BCF9440D669A1578B3D46_il2cpp_TypeInfo_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;

struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tC64F337A786EF1DE807D08323D848149E353A750 
{
};
struct Il2CppArrayBounds;

// UnityEngine.AI.NavMesh
struct NavMesh_t3543D236ABB9A67F696BCF9440D669A1578B3D46  : public RuntimeObject
{
};

struct NavMesh_t3543D236ABB9A67F696BCF9440D669A1578B3D46_StaticFields
{
	// UnityEngine.AI.NavMesh/OnNavMeshPreUpdate UnityEngine.AI.NavMesh::onPreUpdate
	OnNavMeshPreUpdate_t332BD19DBCB087D7DE3F4F48C1E8F6A4EAB691C7* ___onPreUpdate_0;
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

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.AI.NavMesh/OnNavMeshPreUpdate
struct OnNavMeshPreUpdate_t332BD19DBCB087D7DE3F4F48C1E8F6A4EAB691C7  : public MulticastDelegate_t
{
};

// UnityEngine.AI.NavMeshAgent
struct NavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
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



// System.Boolean UnityEngine.AI.NavMeshAgent::SetDestination_Injected(UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NavMeshAgent_SetDestination_Injected_mC3EF405F5AAFF9F98C5D5AECAD641525CDF742EA (NavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___target0, const RuntimeMethod* method) ;
// System.Void UnityEngine.AI.NavMeshAgent::get_desiredVelocity_Injected(UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NavMeshAgent_get_desiredVelocity_Injected_m8793EE07C8733261F15C392B983113CBD225DA41 (NavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___ret0, const RuntimeMethod* method) ;
// System.Void UnityEngine.AI.NavMesh/OnNavMeshPreUpdate::Invoke()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OnNavMeshPreUpdate_Invoke_mFB224B9BBF9C78B7F39AA91A047F175C69897914_inline (OnNavMeshPreUpdate_t332BD19DBCB087D7DE3F4F48C1E8F6A4EAB691C7* __this, const RuntimeMethod* method) ;
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
// System.Boolean UnityEngine.AI.NavMeshAgent::SetDestination(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NavMeshAgent_SetDestination_mD5D960933827F1F14B29CF4A3B6F305C064EBF46 (NavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___target0, const RuntimeMethod* method) 
{
	{
		bool L_0;
		L_0 = NavMeshAgent_SetDestination_Injected_mC3EF405F5AAFF9F98C5D5AECAD641525CDF742EA(__this, (&___target0), NULL);
		return L_0;
	}
}
// System.Single UnityEngine.AI.NavMeshAgent::get_stoppingDistance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float NavMeshAgent_get_stoppingDistance_mA866A409C59878849D63BEC61517DE4F906BEEC4 (NavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F* __this, const RuntimeMethod* method) 
{
	typedef float (*NavMeshAgent_get_stoppingDistance_mA866A409C59878849D63BEC61517DE4F906BEEC4_ftn) (NavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F*);
	static NavMeshAgent_get_stoppingDistance_mA866A409C59878849D63BEC61517DE4F906BEEC4_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (NavMeshAgent_get_stoppingDistance_mA866A409C59878849D63BEC61517DE4F906BEEC4_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AI.NavMeshAgent::get_stoppingDistance()");
	float icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
// UnityEngine.Vector3 UnityEngine.AI.NavMeshAgent::get_desiredVelocity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 NavMeshAgent_get_desiredVelocity_m8CF3F6E3FA8EE86397DD02146AA6048949B74F52 (NavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F* __this, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		NavMeshAgent_get_desiredVelocity_Injected_m8793EE07C8733261F15C392B983113CBD225DA41(__this, (&V_0), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = V_0;
		return L_0;
	}
}
// System.Single UnityEngine.AI.NavMeshAgent::get_remainingDistance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float NavMeshAgent_get_remainingDistance_m051C1B408E2740A95B5A5577C5EC7222311AA73A (NavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F* __this, const RuntimeMethod* method) 
{
	typedef float (*NavMeshAgent_get_remainingDistance_m051C1B408E2740A95B5A5577C5EC7222311AA73A_ftn) (NavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F*);
	static NavMeshAgent_get_remainingDistance_m051C1B408E2740A95B5A5577C5EC7222311AA73A_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (NavMeshAgent_get_remainingDistance_m051C1B408E2740A95B5A5577C5EC7222311AA73A_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AI.NavMeshAgent::get_remainingDistance()");
	float icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
// System.Void UnityEngine.AI.NavMeshAgent::set_updatePosition(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NavMeshAgent_set_updatePosition_m25CA3F441A2EEC82096B4BCFAD4E5FDC10867372 (NavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F* __this, bool ___value0, const RuntimeMethod* method) 
{
	typedef void (*NavMeshAgent_set_updatePosition_m25CA3F441A2EEC82096B4BCFAD4E5FDC10867372_ftn) (NavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F*, bool);
	static NavMeshAgent_set_updatePosition_m25CA3F441A2EEC82096B4BCFAD4E5FDC10867372_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (NavMeshAgent_set_updatePosition_m25CA3F441A2EEC82096B4BCFAD4E5FDC10867372_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AI.NavMeshAgent::set_updatePosition(System.Boolean)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.Void UnityEngine.AI.NavMeshAgent::set_updateRotation(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NavMeshAgent_set_updateRotation_mBF6EDBC9BBAF32490229D7DD6BC821A420C3399D (NavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F* __this, bool ___value0, const RuntimeMethod* method) 
{
	typedef void (*NavMeshAgent_set_updateRotation_mBF6EDBC9BBAF32490229D7DD6BC821A420C3399D_ftn) (NavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F*, bool);
	static NavMeshAgent_set_updateRotation_mBF6EDBC9BBAF32490229D7DD6BC821A420C3399D_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (NavMeshAgent_set_updateRotation_mBF6EDBC9BBAF32490229D7DD6BC821A420C3399D_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AI.NavMeshAgent::set_updateRotation(System.Boolean)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.Boolean UnityEngine.AI.NavMeshAgent::SetDestination_Injected(UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NavMeshAgent_SetDestination_Injected_mC3EF405F5AAFF9F98C5D5AECAD641525CDF742EA (NavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___target0, const RuntimeMethod* method) 
{
	typedef bool (*NavMeshAgent_SetDestination_Injected_mC3EF405F5AAFF9F98C5D5AECAD641525CDF742EA_ftn) (NavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*);
	static NavMeshAgent_SetDestination_Injected_mC3EF405F5AAFF9F98C5D5AECAD641525CDF742EA_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (NavMeshAgent_SetDestination_Injected_mC3EF405F5AAFF9F98C5D5AECAD641525CDF742EA_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AI.NavMeshAgent::SetDestination_Injected(UnityEngine.Vector3&)");
	bool icallRetVal = _il2cpp_icall_func(__this, ___target0);
	return icallRetVal;
}
// System.Void UnityEngine.AI.NavMeshAgent::get_desiredVelocity_Injected(UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NavMeshAgent_get_desiredVelocity_Injected_m8793EE07C8733261F15C392B983113CBD225DA41 (NavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___ret0, const RuntimeMethod* method) 
{
	typedef void (*NavMeshAgent_get_desiredVelocity_Injected_m8793EE07C8733261F15C392B983113CBD225DA41_ftn) (NavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*);
	static NavMeshAgent_get_desiredVelocity_Injected_m8793EE07C8733261F15C392B983113CBD225DA41_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (NavMeshAgent_get_desiredVelocity_Injected_m8793EE07C8733261F15C392B983113CBD225DA41_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AI.NavMeshAgent::get_desiredVelocity_Injected(UnityEngine.Vector3&)");
	_il2cpp_icall_func(__this, ___ret0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.AI.NavMesh::Internal_CallOnNavMeshPreUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NavMesh_Internal_CallOnNavMeshPreUpdate_m80148CFDD0C6F1DDDE5B3DA67A8D9613043A4233 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NavMesh_t3543D236ABB9A67F696BCF9440D669A1578B3D46_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		OnNavMeshPreUpdate_t332BD19DBCB087D7DE3F4F48C1E8F6A4EAB691C7* L_0 = ((NavMesh_t3543D236ABB9A67F696BCF9440D669A1578B3D46_StaticFields*)il2cpp_codegen_static_fields_for(NavMesh_t3543D236ABB9A67F696BCF9440D669A1578B3D46_il2cpp_TypeInfo_var))->___onPreUpdate_0;
		V_0 = (bool)((!(((RuntimeObject*)(OnNavMeshPreUpdate_t332BD19DBCB087D7DE3F4F48C1E8F6A4EAB691C7*)L_0) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0018;
		}
	}
	{
		OnNavMeshPreUpdate_t332BD19DBCB087D7DE3F4F48C1E8F6A4EAB691C7* L_2 = ((NavMesh_t3543D236ABB9A67F696BCF9440D669A1578B3D46_StaticFields*)il2cpp_codegen_static_fields_for(NavMesh_t3543D236ABB9A67F696BCF9440D669A1578B3D46_il2cpp_TypeInfo_var))->___onPreUpdate_0;
		NullCheck(L_2);
		OnNavMeshPreUpdate_Invoke_mFB224B9BBF9C78B7F39AA91A047F175C69897914_inline(L_2, NULL);
	}

IL_0018:
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
void OnNavMeshPreUpdate_Invoke_mFB224B9BBF9C78B7F39AA91A047F175C69897914_Multicast(OnNavMeshPreUpdate_t332BD19DBCB087D7DE3F4F48C1E8F6A4EAB691C7* __this, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		OnNavMeshPreUpdate_t332BD19DBCB087D7DE3F4F48C1E8F6A4EAB691C7* currentDelegate = reinterpret_cast<OnNavMeshPreUpdate_t332BD19DBCB087D7DE3F4F48C1E8F6A4EAB691C7*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void OnNavMeshPreUpdate_Invoke_mFB224B9BBF9C78B7F39AA91A047F175C69897914_Open(OnNavMeshPreUpdate_t332BD19DBCB087D7DE3F4F48C1E8F6A4EAB691C7* __this, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(method);
}
void OnNavMeshPreUpdate_Invoke_mFB224B9BBF9C78B7F39AA91A047F175C69897914_OpenStaticInvoker(OnNavMeshPreUpdate_t332BD19DBCB087D7DE3F4F48C1E8F6A4EAB691C7* __this, const RuntimeMethod* method)
{
	InvokerActionInvoker0::Invoke(__this->___method_ptr_0, method, NULL);
}
void OnNavMeshPreUpdate_Invoke_mFB224B9BBF9C78B7F39AA91A047F175C69897914_ClosedStaticInvoker(OnNavMeshPreUpdate_t332BD19DBCB087D7DE3F4F48C1E8F6A4EAB691C7* __this, const RuntimeMethod* method)
{
	InvokerActionInvoker1< RuntimeObject* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_OnNavMeshPreUpdate_t332BD19DBCB087D7DE3F4F48C1E8F6A4EAB691C7 (OnNavMeshPreUpdate_t332BD19DBCB087D7DE3F4F48C1E8F6A4EAB691C7* __this, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)();
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	il2cppPInvokeFunc();

}
// System.Void UnityEngine.AI.NavMesh/OnNavMeshPreUpdate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnNavMeshPreUpdate__ctor_m7142A3AA991BE50B637A16D946AB7604C64EF9BA (OnNavMeshPreUpdate_t332BD19DBCB087D7DE3F4F48C1E8F6A4EAB691C7* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 0;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&OnNavMeshPreUpdate_Invoke_mFB224B9BBF9C78B7F39AA91A047F175C69897914_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&OnNavMeshPreUpdate_Invoke_mFB224B9BBF9C78B7F39AA91A047F175C69897914_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&OnNavMeshPreUpdate_Invoke_mFB224B9BBF9C78B7F39AA91A047F175C69897914_Open;
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
	__this->___extra_arg_5 = (intptr_t)&OnNavMeshPreUpdate_Invoke_mFB224B9BBF9C78B7F39AA91A047F175C69897914_Multicast;
}
// System.Void UnityEngine.AI.NavMesh/OnNavMeshPreUpdate::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnNavMeshPreUpdate_Invoke_mFB224B9BBF9C78B7F39AA91A047F175C69897914 (OnNavMeshPreUpdate_t332BD19DBCB087D7DE3F4F48C1E8F6A4EAB691C7* __this, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OnNavMeshPreUpdate_Invoke_mFB224B9BBF9C78B7F39AA91A047F175C69897914_inline (OnNavMeshPreUpdate_t332BD19DBCB087D7DE3F4F48C1E8F6A4EAB691C7* __this, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
