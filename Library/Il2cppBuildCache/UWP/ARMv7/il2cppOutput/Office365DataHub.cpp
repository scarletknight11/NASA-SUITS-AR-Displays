#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


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

// Office365DataHub.Singleton`1<Office365DataHub.Manager>
struct Singleton_1_tD7D666710D6D6E06418497112DC80780CE38FB9D;
// Office365DataHub.Singleton`1<System.Object>
struct Singleton_1_t70B6BAE9700980A81A2E6560B2D03AB742B3E834;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// System.IAsyncResult
struct IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5;
// Office365DataHub.Manager
struct Manager_t2D6525B3EF66C7499EE7BC4C93A1BC9512FB5F68;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.String
struct String_t;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// Office365DataHub.Manager/OnGetSomeInformationCompleted
struct OnGetSomeInformationCompleted_tF3291F588D0E3D33F7D0EB915D74AE37BDD4EF51;

IL2CPP_EXTERN_C const RuntimeMethod* Singleton_1__ctor_m60DC71C99C1202E9C0B649CE7D39EB485252562C_RuntimeMethod_var;
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
struct U3CModuleU3E_t66C21B93832D6546F477C7C94E73D23AAAF17DD1 
{
};

// Office365DataHub.Singleton`1<Office365DataHub.Manager>
struct Singleton_1_tD7D666710D6D6E06418497112DC80780CE38FB9D  : public RuntimeObject
{
};

struct Singleton_1_tD7D666710D6D6E06418497112DC80780CE38FB9D_StaticFields
{
	// T Office365DataHub.Singleton`1::instance
	Manager_t2D6525B3EF66C7499EE7BC4C93A1BC9512FB5F68* ___instance_0;
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

// Office365DataHub.Manager
struct Manager_t2D6525B3EF66C7499EE7BC4C93A1BC9512FB5F68  : public Singleton_1_tD7D666710D6D6E06418497112DC80780CE38FB9D
{
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

// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C  : public MulticastDelegate_t
{
};

// Office365DataHub.Manager/OnGetSomeInformationCompleted
struct OnGetSomeInformationCompleted_tF3291F588D0E3D33F7D0EB915D74AE37BDD4EF51  : public MulticastDelegate_t
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


// System.Void Office365DataHub.Singleton`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Singleton_1__ctor_m67643D4CE8DA7F9551756053AD1941AC7480DB02_gshared (Singleton_1_t70B6BAE9700980A81A2E6560B2D03AB742B3E834* __this, const RuntimeMethod* method) ;

// System.Void Office365DataHub.Manager/OnGetSomeInformationCompleted::Invoke(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OnGetSomeInformationCompleted_Invoke_m21FCF0E4E6BD90AA308DA6835455E7DE22289D47_inline (OnGetSomeInformationCompleted_tF3291F588D0E3D33F7D0EB915D74AE37BDD4EF51* __this, String_t* ___result0, const RuntimeMethod* method) ;
// System.Void Office365DataHub.Singleton`1<Office365DataHub.Manager>::.ctor()
inline void Singleton_1__ctor_m60DC71C99C1202E9C0B649CE7D39EB485252562C (Singleton_1_tD7D666710D6D6E06418497112DC80780CE38FB9D* __this, const RuntimeMethod* method)
{
	((  void (*) (Singleton_1_tD7D666710D6D6E06418497112DC80780CE38FB9D*, const RuntimeMethod*))Singleton_1__ctor_m67643D4CE8DA7F9551756053AD1941AC7480DB02_gshared)(__this, method);
}
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
// System.Void Office365DataHub.Manager::GetSomeInformation(System.String,Office365DataHub.Manager/OnGetSomeInformationCompleted)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Manager_GetSomeInformation_mC4661342E6C701964CC5A0293DDCC4E44BE21FA7 (Manager_t2D6525B3EF66C7499EE7BC4C93A1BC9512FB5F68* __this, String_t* ___url0, OnGetSomeInformationCompleted_tF3291F588D0E3D33F7D0EB915D74AE37BDD4EF51* ___onGetSomeInformationCompleted1, const RuntimeMethod* method) 
{
	{
		OnGetSomeInformationCompleted_tF3291F588D0E3D33F7D0EB915D74AE37BDD4EF51* L_0 = ___onGetSomeInformationCompleted1;
		String_t* L_1 = ___url0;
		NullCheck(L_0);
		OnGetSomeInformationCompleted_Invoke_m21FCF0E4E6BD90AA308DA6835455E7DE22289D47_inline(L_0, L_1, NULL);
		return;
	}
}
// System.Void Office365DataHub.Manager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Manager__ctor_m238BC2178FC0534CB49228F3C6B249041A86CBD3 (Manager_t2D6525B3EF66C7499EE7BC4C93A1BC9512FB5F68* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Singleton_1__ctor_m60DC71C99C1202E9C0B649CE7D39EB485252562C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Singleton_1__ctor_m60DC71C99C1202E9C0B649CE7D39EB485252562C(__this, Singleton_1__ctor_m60DC71C99C1202E9C0B649CE7D39EB485252562C_RuntimeMethod_var);
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
void OnGetSomeInformationCompleted_Invoke_m21FCF0E4E6BD90AA308DA6835455E7DE22289D47_Multicast(OnGetSomeInformationCompleted_tF3291F588D0E3D33F7D0EB915D74AE37BDD4EF51* __this, String_t* ___result0, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		OnGetSomeInformationCompleted_tF3291F588D0E3D33F7D0EB915D74AE37BDD4EF51* currentDelegate = reinterpret_cast<OnGetSomeInformationCompleted_tF3291F588D0E3D33F7D0EB915D74AE37BDD4EF51*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, String_t*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___result0, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void OnGetSomeInformationCompleted_Invoke_m21FCF0E4E6BD90AA308DA6835455E7DE22289D47_Open(OnGetSomeInformationCompleted_tF3291F588D0E3D33F7D0EB915D74AE37BDD4EF51* __this, String_t* ___result0, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___result0, method);
}
void OnGetSomeInformationCompleted_Invoke_m21FCF0E4E6BD90AA308DA6835455E7DE22289D47_OpenStaticInvoker(OnGetSomeInformationCompleted_tF3291F588D0E3D33F7D0EB915D74AE37BDD4EF51* __this, String_t* ___result0, const RuntimeMethod* method)
{
	InvokerActionInvoker1< String_t* >::Invoke(__this->___method_ptr_0, method, NULL, ___result0);
}
void OnGetSomeInformationCompleted_Invoke_m21FCF0E4E6BD90AA308DA6835455E7DE22289D47_ClosedStaticInvoker(OnGetSomeInformationCompleted_tF3291F588D0E3D33F7D0EB915D74AE37BDD4EF51* __this, String_t* ___result0, const RuntimeMethod* method)
{
	InvokerActionInvoker2< RuntimeObject*, String_t* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___result0);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_OnGetSomeInformationCompleted_tF3291F588D0E3D33F7D0EB915D74AE37BDD4EF51 (OnGetSomeInformationCompleted_tF3291F588D0E3D33F7D0EB915D74AE37BDD4EF51* __this, String_t* ___result0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(char*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Marshaling of parameter '___result0' to native representation
	char* ____result0_marshaled = NULL;
	____result0_marshaled = il2cpp_codegen_marshal_string(___result0);

	// Native function invocation
	il2cppPInvokeFunc(____result0_marshaled);

	// Marshaling cleanup of parameter '___result0' native representation
	il2cpp_codegen_marshal_free(____result0_marshaled);
	____result0_marshaled = NULL;

}
// System.Void Office365DataHub.Manager/OnGetSomeInformationCompleted::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnGetSomeInformationCompleted__ctor_m24A2AF5D4E36A68FB7FFA97AF1E5C9DC9229EBE1 (OnGetSomeInformationCompleted_tF3291F588D0E3D33F7D0EB915D74AE37BDD4EF51* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
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
				__this->___invoke_impl_1 = (intptr_t)&OnGetSomeInformationCompleted_Invoke_m21FCF0E4E6BD90AA308DA6835455E7DE22289D47_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&OnGetSomeInformationCompleted_Invoke_m21FCF0E4E6BD90AA308DA6835455E7DE22289D47_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&OnGetSomeInformationCompleted_Invoke_m21FCF0E4E6BD90AA308DA6835455E7DE22289D47_Open;
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
			__this->___invoke_impl_1 = (intptr_t)&OnGetSomeInformationCompleted_Invoke_m21FCF0E4E6BD90AA308DA6835455E7DE22289D47_Open;
		}
		else
		{
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&OnGetSomeInformationCompleted_Invoke_m21FCF0E4E6BD90AA308DA6835455E7DE22289D47_Multicast;
}
// System.Void Office365DataHub.Manager/OnGetSomeInformationCompleted::Invoke(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnGetSomeInformationCompleted_Invoke_m21FCF0E4E6BD90AA308DA6835455E7DE22289D47 (OnGetSomeInformationCompleted_tF3291F588D0E3D33F7D0EB915D74AE37BDD4EF51* __this, String_t* ___result0, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___result0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult Office365DataHub.Manager/OnGetSomeInformationCompleted::BeginInvoke(System.String,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* OnGetSomeInformationCompleted_BeginInvoke_m090BFA6C061BA1BF130D6FF5C5B8DFCAAED88287 (OnGetSomeInformationCompleted_tF3291F588D0E3D33F7D0EB915D74AE37BDD4EF51* __this, String_t* ___result0, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback1, RuntimeObject* ___object2, const RuntimeMethod* method) 
{
	void *__d_args[2] = {0};
	__d_args[0] = ___result0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void Office365DataHub.Manager/OnGetSomeInformationCompleted::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnGetSomeInformationCompleted_EndInvoke_m670D701A6FE0AD617B2526FC8B7F7429F4951A04 (OnGetSomeInformationCompleted_tF3291F588D0E3D33F7D0EB915D74AE37BDD4EF51* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OnGetSomeInformationCompleted_Invoke_m21FCF0E4E6BD90AA308DA6835455E7DE22289D47_inline (OnGetSomeInformationCompleted_tF3291F588D0E3D33F7D0EB915D74AE37BDD4EF51* __this, String_t* ___result0, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___result0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
