#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename T1>
struct VirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
struct VirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
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
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
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

// System.Collections.Generic.IList`1<System.IObservable`1<UniRx.Unit>>
struct IList_1_t46B0FF8609748833C769ADC6F5ED5387FDE2A2CF;
// System.IObservable`1<UniRx.Unit>
struct IObservable_1_t883BCEB6344266DC69B93ABA1DFE1B14B0319775;
// System.IObserver`1<UniRx.Unit>
struct IObserver_1_t0E86DEA721938487772381107CECD7CFF07ACF01;
// UniRx.Operators.OperatorObserverBase`2<UniRx.Unit,UniRx.Unit>
struct OperatorObserverBase_2_tF243B5106EEEF4A6D04AD83F65BC8940D21D38C3;
// UniRx.InternalUtil.PriorityQueue`1<UniRx.InternalUtil.ScheduledItem>
struct PriorityQueue_1_tC89C09B65C4E7C735ACBE185C2B99F28A4FDBB26;
// System.IObservable`1<UniRx.Unit>[]
struct IObservable_1U5BU5D_t9521B2107261F104860459D5CC47C37240D1910F;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// System.IDisposable[]
struct IDisposableU5BU5D_tA118A91699805C6191EC7EC5368D525034AB6E65;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// System.Action
struct Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// UniRx.Operators.BatchFrameObservable
struct BatchFrameObservable_t43F89468D0E33146387B08F283B9229FDB32518A;
// UniRx.BooleanDisposable
struct BooleanDisposable_t10CF71845F96D6A2BB117D0EAE549FA5FAB59133;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// System.Exception
struct Exception_t;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// UniRx.ICancelable
struct ICancelable_t17CBA667BF856A6EA2591122CE89C2105AE8B871;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// System.IDisposable
struct IDisposable_t099785737FC6A1E3699919A94109383715A8D807;
// System.Collections.IEnumerator
struct IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.NotSupportedException
struct NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// UniRx.InternalUtil.ScheduledItem
struct ScheduledItem_tF689AC74A0C415A20BBFC28414BDDC4A378FE9FF;
// UniRx.InternalUtil.SchedulerQueue
struct SchedulerQueue_t8B1647EB26EB6581309907A4A630BD64B27D6F43;
// System.String
struct String_t;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// UnityEngine.WaitForSeconds
struct WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013;
// UniRx.Operators.BatchFrameObservable/BatchFrame
struct BatchFrame_tB884C0ACDFA0D6311BD4D426427E060144AACD40;
// UniRx.Scheduler/EndOfFrameMainThreadScheduler
struct EndOfFrameMainThreadScheduler_tE8B7A08578A0DC4A88F92C54593F3E40A4FF0FC9;
// UniRx.Scheduler/FixedUpdateMainThreadScheduler
struct FixedUpdateMainThreadScheduler_t47CBBD1634E2D14FE826AFC0F218E5FBFF881174;
// UniRx.Scheduler/IgnoreTimeScaleMainThreadScheduler
struct IgnoreTimeScaleMainThreadScheduler_tDE9B9647AE60FF7CE670C3CD55E364031A861391;
// UniRx.Scheduler/MainThreadScheduler
struct MainThreadScheduler_t48B46CA8F52051759E6ED7B3E9FF42C2F9B77C17;
// UniRx.Operators.WhenAllObservable/WhenAll
struct WhenAll_tA645854C9AD2CBCBFF046766F2509FFA33CB9DC3;
// UniRx.Operators.WhenAllObservable/WhenAll_
struct WhenAll__tDEBE0DF2586D259A8A2C260CB3324B4617E5F2FB;
// UniRx.Operators.BatchFrameObservable/BatchFrame/ReusableEnumerator
struct ReusableEnumerator_tBA97020AED04790E9DC409DA88F47E7C29AAD761;
// UniRx.Scheduler/EndOfFrameMainThreadScheduler/<DelayAction>d__2
struct U3CDelayActionU3Ed__2_tA52D340360C574B310D8BB83B8784ED616BF7DAF;
// UniRx.Scheduler/EndOfFrameMainThreadScheduler/<PeriodicAction>d__3
struct U3CPeriodicActionU3Ed__3_tBA2C32A76692E04CF535F08F5D8EEC8A9CFA58CA;
// UniRx.Scheduler/FixedUpdateMainThreadScheduler/<DelayAction>d__2
struct U3CDelayActionU3Ed__2_tF6BFFB8F5C3BA4D6B330E6B0B07B0FCABF91ADCC;
// UniRx.Scheduler/FixedUpdateMainThreadScheduler/<PeriodicAction>d__3
struct U3CPeriodicActionU3Ed__3_t0AB097192C92DFAAA017A1B1428FD02890D6B229;
// UniRx.Scheduler/IgnoreTimeScaleMainThreadScheduler/<DelayAction>d__2
struct U3CDelayActionU3Ed__2_tB4AB6DDE46CF76AD12FA17F78671EE48630B77B5;
// UniRx.Scheduler/IgnoreTimeScaleMainThreadScheduler/<PeriodicAction>d__3
struct U3CPeriodicActionU3Ed__3_t71CE59A01E21D352CF4345E5C2966F8FFA93E24B;
// UniRx.Scheduler/MainThreadScheduler/<DelayAction>d__2
struct U3CDelayActionU3Ed__2_tEF353B140AF9D12C1A047EF61FC7EE32F2F226A9;
// UniRx.Scheduler/MainThreadScheduler/<PeriodicAction>d__3
struct U3CPeriodicActionU3Ed__3_t5FDEA5BD7244B7FECAD391713DEED9B8D3877937;
// UniRx.Scheduler/ThreadPoolScheduler/<>c__DisplayClass2_0
struct U3CU3Ec__DisplayClass2_0_t6FF2B95D67B80FB980AD26798C903E69AA6B8E65;
// UniRx.Scheduler/ThreadPoolScheduler/<>c__DisplayClass3_0
struct U3CU3Ec__DisplayClass3_0_tFD324CCB796E79865D9E8E69DC9501A756294920;
// UniRx.Operators.WhenAllObservable/WhenAll/WhenAllCollectionObserver
struct WhenAllCollectionObserver_t4ACAC322DB201DFE95ACDD2422E599F9656971A4;
// UniRx.Operators.WhenAllObservable/WhenAll_/WhenAllCollectionObserver
struct WhenAllCollectionObserver_tBE88D2F4AC06C4FA1C1FFE1A71FB1EA8A47797AE;

IL2CPP_EXTERN_C RuntimeClass* Disposable_tFB6FF3E5C049CFE0B05B25A824CED890F91DC101_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ICancelable_t17CBA667BF856A6EA2591122CE89C2105AE8B871_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ICollection_1_t88AC82FB82D80FD8F4A65E44DC83881F611A87A3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposableU5BU5D_tA118A91699805C6191EC7EC5368D525034AB6E65_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IList_1_t46B0FF8609748833C769ADC6F5ED5387FDE2A2CF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IObservable_1_t883BCEB6344266DC69B93ABA1DFE1B14B0319775_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IObserver_1_t0E86DEA721938487772381107CECD7CFF07ACF01_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MainThreadDispatcher_t2FAB1FD77FC682D33CF5764698C0589FD9C918A7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RuntimeObject_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Unit_t11840C1173CB65892C6CF18A1D7403CA52DC358C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WhenAllCollectionObserver_tBE88D2F4AC06C4FA1C1FFE1A71FB1EA8A47797AE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C const RuntimeMethod* OperatorObserverBase_2_Dispose_mAF4A26C3317C03F70242448015C7485111AC3F18_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* OperatorObserverBase_2__ctor_m4636C5A44C2B68E21C2DE49C72F4868BBD7F420C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CDelayActionU3Ed__2_System_Collections_IEnumerator_Reset_m0741947D1C6B5FB20DA7F8168EFFE8BA6BAA07B8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CDelayActionU3Ed__2_System_Collections_IEnumerator_Reset_m17424992A0D0E715151AC1C187EB100AFA52957A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CDelayActionU3Ed__2_System_Collections_IEnumerator_Reset_m2AAD76A1C2E572E17273C00B4C4D92BF1AF7B4F9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CDelayActionU3Ed__2_System_Collections_IEnumerator_Reset_mF00F7E51629EAA4ECCD3C2E6EC37382ACF1A5184_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CPeriodicActionU3Ed__3_System_Collections_IEnumerator_Reset_m0CCBAB690E0AAFB8856A914B0E9FF90846C0DA25_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CPeriodicActionU3Ed__3_System_Collections_IEnumerator_Reset_m43492C08743F732692F49E677651CC0BEBE1060E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CPeriodicActionU3Ed__3_System_Collections_IEnumerator_Reset_mABDBAC9F48619E3C6776DFC85D2D803915B651E8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CPeriodicActionU3Ed__3_System_Collections_IEnumerator_Reset_mBA6CA60DF837827E275A40393ECD518BB604EEA2_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct IDisposableU5BU5D_tA118A91699805C6191EC7EC5368D525034AB6E65;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object


// UniRx.Operators.OperatorObservableBase`1<UniRx.Unit>
struct OperatorObservableBase_1_tA660F803495F8125950EA0F6987954FBD582F2B1  : public RuntimeObject
{
public:
	// System.Boolean UniRx.Operators.OperatorObservableBase`1::isRequiredSubscribeOnCurrentThread
	bool ___isRequiredSubscribeOnCurrentThread_0;

public:
	inline static int32_t get_offset_of_isRequiredSubscribeOnCurrentThread_0() { return static_cast<int32_t>(offsetof(OperatorObservableBase_1_tA660F803495F8125950EA0F6987954FBD582F2B1, ___isRequiredSubscribeOnCurrentThread_0)); }
	inline bool get_isRequiredSubscribeOnCurrentThread_0() const { return ___isRequiredSubscribeOnCurrentThread_0; }
	inline bool* get_address_of_isRequiredSubscribeOnCurrentThread_0() { return &___isRequiredSubscribeOnCurrentThread_0; }
	inline void set_isRequiredSubscribeOnCurrentThread_0(bool value)
	{
		___isRequiredSubscribeOnCurrentThread_0 = value;
	}
};


// UniRx.Operators.OperatorObserverBase`2<UniRx.Unit,UniRx.Unit>
struct OperatorObserverBase_2_tF243B5106EEEF4A6D04AD83F65BC8940D21D38C3  : public RuntimeObject
{
public:
	// System.IObserver`1<TResult> modreq(System.Runtime.CompilerServices.IsVolatile) UniRx.Operators.OperatorObserverBase`2::observer
	RuntimeObject* ___observer_0;
	// System.IDisposable UniRx.Operators.OperatorObserverBase`2::cancel
	RuntimeObject* ___cancel_1;

public:
	inline static int32_t get_offset_of_observer_0() { return static_cast<int32_t>(offsetof(OperatorObserverBase_2_tF243B5106EEEF4A6D04AD83F65BC8940D21D38C3, ___observer_0)); }
	inline RuntimeObject* get_observer_0() const { return ___observer_0; }
	inline RuntimeObject** get_address_of_observer_0() { return &___observer_0; }
	inline void set_observer_0(RuntimeObject* value)
	{
		___observer_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___observer_0), (void*)value);
	}

	inline static int32_t get_offset_of_cancel_1() { return static_cast<int32_t>(offsetof(OperatorObserverBase_2_tF243B5106EEEF4A6D04AD83F65BC8940D21D38C3, ___cancel_1)); }
	inline RuntimeObject* get_cancel_1() const { return ___cancel_1; }
	inline RuntimeObject** get_address_of_cancel_1() { return &___cancel_1; }
	inline void set_cancel_1(RuntimeObject* value)
	{
		___cancel_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___cancel_1), (void*)value);
	}
};

struct Il2CppArrayBounds;

// System.Array


// UniRx.BooleanDisposable
struct BooleanDisposable_t10CF71845F96D6A2BB117D0EAE549FA5FAB59133  : public RuntimeObject
{
public:
	// System.Boolean UniRx.BooleanDisposable::<IsDisposed>k__BackingField
	bool ___U3CIsDisposedU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CIsDisposedU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(BooleanDisposable_t10CF71845F96D6A2BB117D0EAE549FA5FAB59133, ___U3CIsDisposedU3Ek__BackingField_0)); }
	inline bool get_U3CIsDisposedU3Ek__BackingField_0() const { return ___U3CIsDisposedU3Ek__BackingField_0; }
	inline bool* get_address_of_U3CIsDisposedU3Ek__BackingField_0() { return &___U3CIsDisposedU3Ek__BackingField_0; }
	inline void set_U3CIsDisposedU3Ek__BackingField_0(bool value)
	{
		___U3CIsDisposedU3Ek__BackingField_0 = value;
	}
};


// UniRx.Disposable
struct Disposable_tFB6FF3E5C049CFE0B05B25A824CED890F91DC101  : public RuntimeObject
{
public:

public:
};

struct Disposable_tFB6FF3E5C049CFE0B05B25A824CED890F91DC101_StaticFields
{
public:
	// System.IDisposable UniRx.Disposable::Empty
	RuntimeObject* ___Empty_0;

public:
	inline static int32_t get_offset_of_Empty_0() { return static_cast<int32_t>(offsetof(Disposable_tFB6FF3E5C049CFE0B05B25A824CED890F91DC101_StaticFields, ___Empty_0)); }
	inline RuntimeObject* get_Empty_0() const { return ___Empty_0; }
	inline RuntimeObject** get_address_of_Empty_0() { return &___Empty_0; }
	inline void set_Empty_0(RuntimeObject* value)
	{
		___Empty_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Empty_0), (void*)value);
	}
};


// UniRx.InternalUtil.SchedulerQueue
struct SchedulerQueue_t8B1647EB26EB6581309907A4A630BD64B27D6F43  : public RuntimeObject
{
public:
	// UniRx.InternalUtil.PriorityQueue`1<UniRx.InternalUtil.ScheduledItem> UniRx.InternalUtil.SchedulerQueue::_queue
	PriorityQueue_1_tC89C09B65C4E7C735ACBE185C2B99F28A4FDBB26 * ____queue_0;

public:
	inline static int32_t get_offset_of__queue_0() { return static_cast<int32_t>(offsetof(SchedulerQueue_t8B1647EB26EB6581309907A4A630BD64B27D6F43, ____queue_0)); }
	inline PriorityQueue_1_tC89C09B65C4E7C735ACBE185C2B99F28A4FDBB26 * get__queue_0() const { return ____queue_0; }
	inline PriorityQueue_1_tC89C09B65C4E7C735ACBE185C2B99F28A4FDBB26 ** get_address_of__queue_0() { return &____queue_0; }
	inline void set__queue_0(PriorityQueue_1_tC89C09B65C4E7C735ACBE185C2B99F28A4FDBB26 * value)
	{
		____queue_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____queue_0), (void*)value);
	}
};


// System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_com
{
};

// UnityEngine.YieldInstruction
struct YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_com
{
};

// UniRx.Operators.BatchFrameObservable/BatchFrame/ReusableEnumerator
struct ReusableEnumerator_tBA97020AED04790E9DC409DA88F47E7C29AAD761  : public RuntimeObject
{
public:
	// UniRx.Operators.BatchFrameObservable/BatchFrame UniRx.Operators.BatchFrameObservable/BatchFrame/ReusableEnumerator::parent
	BatchFrame_tB884C0ACDFA0D6311BD4D426427E060144AACD40 * ___parent_0;
	// System.Int32 UniRx.Operators.BatchFrameObservable/BatchFrame/ReusableEnumerator::currentFrame
	int32_t ___currentFrame_1;

public:
	inline static int32_t get_offset_of_parent_0() { return static_cast<int32_t>(offsetof(ReusableEnumerator_tBA97020AED04790E9DC409DA88F47E7C29AAD761, ___parent_0)); }
	inline BatchFrame_tB884C0ACDFA0D6311BD4D426427E060144AACD40 * get_parent_0() const { return ___parent_0; }
	inline BatchFrame_tB884C0ACDFA0D6311BD4D426427E060144AACD40 ** get_address_of_parent_0() { return &___parent_0; }
	inline void set_parent_0(BatchFrame_tB884C0ACDFA0D6311BD4D426427E060144AACD40 * value)
	{
		___parent_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___parent_0), (void*)value);
	}

	inline static int32_t get_offset_of_currentFrame_1() { return static_cast<int32_t>(offsetof(ReusableEnumerator_tBA97020AED04790E9DC409DA88F47E7C29AAD761, ___currentFrame_1)); }
	inline int32_t get_currentFrame_1() const { return ___currentFrame_1; }
	inline int32_t* get_address_of_currentFrame_1() { return &___currentFrame_1; }
	inline void set_currentFrame_1(int32_t value)
	{
		___currentFrame_1 = value;
	}
};


// UniRx.Scheduler/CurrentThreadScheduler/Trampoline
struct Trampoline_t0DE412534A6757B6BEF2F7EB9721FC53D0D45147  : public RuntimeObject
{
public:

public:
};


// UniRx.Scheduler/ThreadPoolScheduler/<>c__DisplayClass2_0
struct U3CU3Ec__DisplayClass2_0_t6FF2B95D67B80FB980AD26798C903E69AA6B8E65  : public RuntimeObject
{
public:
	// UniRx.BooleanDisposable UniRx.Scheduler/ThreadPoolScheduler/<>c__DisplayClass2_0::d
	BooleanDisposable_t10CF71845F96D6A2BB117D0EAE549FA5FAB59133 * ___d_0;
	// System.Action UniRx.Scheduler/ThreadPoolScheduler/<>c__DisplayClass2_0::action
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___action_1;
	// System.Action UniRx.Scheduler/ThreadPoolScheduler/<>c__DisplayClass2_0::act
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___act_2;

public:
	inline static int32_t get_offset_of_d_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass2_0_t6FF2B95D67B80FB980AD26798C903E69AA6B8E65, ___d_0)); }
	inline BooleanDisposable_t10CF71845F96D6A2BB117D0EAE549FA5FAB59133 * get_d_0() const { return ___d_0; }
	inline BooleanDisposable_t10CF71845F96D6A2BB117D0EAE549FA5FAB59133 ** get_address_of_d_0() { return &___d_0; }
	inline void set_d_0(BooleanDisposable_t10CF71845F96D6A2BB117D0EAE549FA5FAB59133 * value)
	{
		___d_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___d_0), (void*)value);
	}

	inline static int32_t get_offset_of_action_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass2_0_t6FF2B95D67B80FB980AD26798C903E69AA6B8E65, ___action_1)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_action_1() const { return ___action_1; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_action_1() { return &___action_1; }
	inline void set_action_1(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___action_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___action_1), (void*)value);
	}

	inline static int32_t get_offset_of_act_2() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass2_0_t6FF2B95D67B80FB980AD26798C903E69AA6B8E65, ___act_2)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_act_2() const { return ___act_2; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_act_2() { return &___act_2; }
	inline void set_act_2(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___act_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___act_2), (void*)value);
	}
};


// UniRx.Operators.WhenAllObservable/WhenAll/WhenAllCollectionObserver
struct WhenAllCollectionObserver_t4ACAC322DB201DFE95ACDD2422E599F9656971A4  : public RuntimeObject
{
public:
	// UniRx.Operators.WhenAllObservable/WhenAll UniRx.Operators.WhenAllObservable/WhenAll/WhenAllCollectionObserver::parent
	WhenAll_tA645854C9AD2CBCBFF046766F2509FFA33CB9DC3 * ___parent_0;
	// System.Boolean UniRx.Operators.WhenAllObservable/WhenAll/WhenAllCollectionObserver::isCompleted
	bool ___isCompleted_1;

public:
	inline static int32_t get_offset_of_parent_0() { return static_cast<int32_t>(offsetof(WhenAllCollectionObserver_t4ACAC322DB201DFE95ACDD2422E599F9656971A4, ___parent_0)); }
	inline WhenAll_tA645854C9AD2CBCBFF046766F2509FFA33CB9DC3 * get_parent_0() const { return ___parent_0; }
	inline WhenAll_tA645854C9AD2CBCBFF046766F2509FFA33CB9DC3 ** get_address_of_parent_0() { return &___parent_0; }
	inline void set_parent_0(WhenAll_tA645854C9AD2CBCBFF046766F2509FFA33CB9DC3 * value)
	{
		___parent_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___parent_0), (void*)value);
	}

	inline static int32_t get_offset_of_isCompleted_1() { return static_cast<int32_t>(offsetof(WhenAllCollectionObserver_t4ACAC322DB201DFE95ACDD2422E599F9656971A4, ___isCompleted_1)); }
	inline bool get_isCompleted_1() const { return ___isCompleted_1; }
	inline bool* get_address_of_isCompleted_1() { return &___isCompleted_1; }
	inline void set_isCompleted_1(bool value)
	{
		___isCompleted_1 = value;
	}
};


// UniRx.Operators.WhenAllObservable/WhenAll_/WhenAllCollectionObserver
struct WhenAllCollectionObserver_tBE88D2F4AC06C4FA1C1FFE1A71FB1EA8A47797AE  : public RuntimeObject
{
public:
	// UniRx.Operators.WhenAllObservable/WhenAll_ UniRx.Operators.WhenAllObservable/WhenAll_/WhenAllCollectionObserver::parent
	WhenAll__tDEBE0DF2586D259A8A2C260CB3324B4617E5F2FB * ___parent_0;
	// System.Boolean UniRx.Operators.WhenAllObservable/WhenAll_/WhenAllCollectionObserver::isCompleted
	bool ___isCompleted_1;

public:
	inline static int32_t get_offset_of_parent_0() { return static_cast<int32_t>(offsetof(WhenAllCollectionObserver_tBE88D2F4AC06C4FA1C1FFE1A71FB1EA8A47797AE, ___parent_0)); }
	inline WhenAll__tDEBE0DF2586D259A8A2C260CB3324B4617E5F2FB * get_parent_0() const { return ___parent_0; }
	inline WhenAll__tDEBE0DF2586D259A8A2C260CB3324B4617E5F2FB ** get_address_of_parent_0() { return &___parent_0; }
	inline void set_parent_0(WhenAll__tDEBE0DF2586D259A8A2C260CB3324B4617E5F2FB * value)
	{
		___parent_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___parent_0), (void*)value);
	}

	inline static int32_t get_offset_of_isCompleted_1() { return static_cast<int32_t>(offsetof(WhenAllCollectionObserver_tBE88D2F4AC06C4FA1C1FFE1A71FB1EA8A47797AE, ___isCompleted_1)); }
	inline bool get_isCompleted_1() const { return ___isCompleted_1; }
	inline bool* get_address_of_isCompleted_1() { return &___isCompleted_1; }
	inline void set_isCompleted_1(bool value)
	{
		___isCompleted_1 = value;
	}
};


// System.Boolean
struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TrueString_5), (void*)value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FalseString_6), (void*)value);
	}
};


// System.Double
struct Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181 
{
public:
	// System.Double System.Double::m_value
	double ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181, ___m_value_0)); }
	inline double get_m_value_0() const { return ___m_value_0; }
	inline double* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(double value)
	{
		___m_value_0 = value;
	}
};

struct Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_StaticFields
{
public:
	// System.Double System.Double::NegativeZero
	double ___NegativeZero_7;

public:
	inline static int32_t get_offset_of_NegativeZero_7() { return static_cast<int32_t>(offsetof(Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_StaticFields, ___NegativeZero_7)); }
	inline double get_NegativeZero_7() const { return ___NegativeZero_7; }
	inline double* get_address_of_NegativeZero_7() { return &___NegativeZero_7; }
	inline void set_NegativeZero_7(double value)
	{
		___NegativeZero_7 = value;
	}
};


// System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA  : public ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52
{
public:

public:
};

struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumSeperatorCharArray_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_com
{
};

// System.Int32
struct Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
	}
};


// System.Int64
struct Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3 
{
public:
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3, ___m_value_0)); }
	inline int64_t get_m_value_0() const { return ___m_value_0; }
	inline int64_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int64_t value)
	{
		___m_value_0 = value;
	}
};


// System.IntPtr
struct IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline intptr_t get_Zero_1() const { return ___Zero_1; }
	inline intptr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(intptr_t value)
	{
		___Zero_1 = value;
	}
};


// System.Single
struct Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E, ___m_value_0)); }
	inline float get_m_value_0() const { return ___m_value_0; }
	inline float* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(float value)
	{
		___m_value_0 = value;
	}
};


// UniRx.Unit
struct Unit_t11840C1173CB65892C6CF18A1D7403CA52DC358C 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Unit_t11840C1173CB65892C6CF18A1D7403CA52DC358C__padding[1];
	};

public:
};

struct Unit_t11840C1173CB65892C6CF18A1D7403CA52DC358C_StaticFields
{
public:
	// UniRx.Unit UniRx.Unit::default
	Unit_t11840C1173CB65892C6CF18A1D7403CA52DC358C  ___default_0;

public:
	inline static int32_t get_offset_of_default_0() { return static_cast<int32_t>(offsetof(Unit_t11840C1173CB65892C6CF18A1D7403CA52DC358C_StaticFields, ___default_0)); }
	inline Unit_t11840C1173CB65892C6CF18A1D7403CA52DC358C  get_default_0() const { return ___default_0; }
	inline Unit_t11840C1173CB65892C6CF18A1D7403CA52DC358C * get_address_of_default_0() { return &___default_0; }
	inline void set_default_0(Unit_t11840C1173CB65892C6CF18A1D7403CA52DC358C  value)
	{
		___default_0 = value;
	}
};


// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5__padding[1];
	};

public:
};


// UnityEngine.WaitForSeconds
struct WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013  : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF
{
public:
	// System.Single UnityEngine.WaitForSeconds::m_Seconds
	float ___m_Seconds_0;

public:
	inline static int32_t get_offset_of_m_Seconds_0() { return static_cast<int32_t>(offsetof(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013, ___m_Seconds_0)); }
	inline float get_m_Seconds_0() const { return ___m_Seconds_0; }
	inline float* get_address_of_m_Seconds_0() { return &___m_Seconds_0; }
	inline void set_m_Seconds_0(float value)
	{
		___m_Seconds_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_marshaled_pinvoke : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_pinvoke
{
	float ___m_Seconds_0;
};
// Native definition for COM marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_marshaled_com : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_com
{
	float ___m_Seconds_0;
};

// UniRx.Operators.BatchFrameObservable/BatchFrame
struct BatchFrame_tB884C0ACDFA0D6311BD4D426427E060144AACD40  : public OperatorObserverBase_2_tF243B5106EEEF4A6D04AD83F65BC8940D21D38C3
{
public:
	// UniRx.Operators.BatchFrameObservable UniRx.Operators.BatchFrameObservable/BatchFrame::parent
	BatchFrameObservable_t43F89468D0E33146387B08F283B9229FDB32518A * ___parent_2;
	// System.Object UniRx.Operators.BatchFrameObservable/BatchFrame::gate
	RuntimeObject * ___gate_3;
	// UniRx.BooleanDisposable UniRx.Operators.BatchFrameObservable/BatchFrame::cancellationToken
	BooleanDisposable_t10CF71845F96D6A2BB117D0EAE549FA5FAB59133 * ___cancellationToken_4;
	// System.Collections.IEnumerator UniRx.Operators.BatchFrameObservable/BatchFrame::timer
	RuntimeObject* ___timer_5;
	// System.Boolean UniRx.Operators.BatchFrameObservable/BatchFrame::isRunning
	bool ___isRunning_6;
	// System.Boolean UniRx.Operators.BatchFrameObservable/BatchFrame::isCompleted
	bool ___isCompleted_7;

public:
	inline static int32_t get_offset_of_parent_2() { return static_cast<int32_t>(offsetof(BatchFrame_tB884C0ACDFA0D6311BD4D426427E060144AACD40, ___parent_2)); }
	inline BatchFrameObservable_t43F89468D0E33146387B08F283B9229FDB32518A * get_parent_2() const { return ___parent_2; }
	inline BatchFrameObservable_t43F89468D0E33146387B08F283B9229FDB32518A ** get_address_of_parent_2() { return &___parent_2; }
	inline void set_parent_2(BatchFrameObservable_t43F89468D0E33146387B08F283B9229FDB32518A * value)
	{
		___parent_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___parent_2), (void*)value);
	}

	inline static int32_t get_offset_of_gate_3() { return static_cast<int32_t>(offsetof(BatchFrame_tB884C0ACDFA0D6311BD4D426427E060144AACD40, ___gate_3)); }
	inline RuntimeObject * get_gate_3() const { return ___gate_3; }
	inline RuntimeObject ** get_address_of_gate_3() { return &___gate_3; }
	inline void set_gate_3(RuntimeObject * value)
	{
		___gate_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___gate_3), (void*)value);
	}

	inline static int32_t get_offset_of_cancellationToken_4() { return static_cast<int32_t>(offsetof(BatchFrame_tB884C0ACDFA0D6311BD4D426427E060144AACD40, ___cancellationToken_4)); }
	inline BooleanDisposable_t10CF71845F96D6A2BB117D0EAE549FA5FAB59133 * get_cancellationToken_4() const { return ___cancellationToken_4; }
	inline BooleanDisposable_t10CF71845F96D6A2BB117D0EAE549FA5FAB59133 ** get_address_of_cancellationToken_4() { return &___cancellationToken_4; }
	inline void set_cancellationToken_4(BooleanDisposable_t10CF71845F96D6A2BB117D0EAE549FA5FAB59133 * value)
	{
		___cancellationToken_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___cancellationToken_4), (void*)value);
	}

	inline static int32_t get_offset_of_timer_5() { return static_cast<int32_t>(offsetof(BatchFrame_tB884C0ACDFA0D6311BD4D426427E060144AACD40, ___timer_5)); }
	inline RuntimeObject* get_timer_5() const { return ___timer_5; }
	inline RuntimeObject** get_address_of_timer_5() { return &___timer_5; }
	inline void set_timer_5(RuntimeObject* value)
	{
		___timer_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___timer_5), (void*)value);
	}

	inline static int32_t get_offset_of_isRunning_6() { return static_cast<int32_t>(offsetof(BatchFrame_tB884C0ACDFA0D6311BD4D426427E060144AACD40, ___isRunning_6)); }
	inline bool get_isRunning_6() const { return ___isRunning_6; }
	inline bool* get_address_of_isRunning_6() { return &___isRunning_6; }
	inline void set_isRunning_6(bool value)
	{
		___isRunning_6 = value;
	}

	inline static int32_t get_offset_of_isCompleted_7() { return static_cast<int32_t>(offsetof(BatchFrame_tB884C0ACDFA0D6311BD4D426427E060144AACD40, ___isCompleted_7)); }
	inline bool get_isCompleted_7() const { return ___isCompleted_7; }
	inline bool* get_address_of_isCompleted_7() { return &___isCompleted_7; }
	inline void set_isCompleted_7(bool value)
	{
		___isCompleted_7 = value;
	}
};


// UniRx.Operators.WhenAllObservable/WhenAll
struct WhenAll_tA645854C9AD2CBCBFF046766F2509FFA33CB9DC3  : public OperatorObserverBase_2_tF243B5106EEEF4A6D04AD83F65BC8940D21D38C3
{
public:
	// System.IObservable`1<UniRx.Unit>[] UniRx.Operators.WhenAllObservable/WhenAll::sources
	IObservable_1U5BU5D_t9521B2107261F104860459D5CC47C37240D1910F* ___sources_2;
	// System.Object UniRx.Operators.WhenAllObservable/WhenAll::gate
	RuntimeObject * ___gate_3;
	// System.Int32 UniRx.Operators.WhenAllObservable/WhenAll::completedCount
	int32_t ___completedCount_4;
	// System.Int32 UniRx.Operators.WhenAllObservable/WhenAll::length
	int32_t ___length_5;

public:
	inline static int32_t get_offset_of_sources_2() { return static_cast<int32_t>(offsetof(WhenAll_tA645854C9AD2CBCBFF046766F2509FFA33CB9DC3, ___sources_2)); }
	inline IObservable_1U5BU5D_t9521B2107261F104860459D5CC47C37240D1910F* get_sources_2() const { return ___sources_2; }
	inline IObservable_1U5BU5D_t9521B2107261F104860459D5CC47C37240D1910F** get_address_of_sources_2() { return &___sources_2; }
	inline void set_sources_2(IObservable_1U5BU5D_t9521B2107261F104860459D5CC47C37240D1910F* value)
	{
		___sources_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sources_2), (void*)value);
	}

	inline static int32_t get_offset_of_gate_3() { return static_cast<int32_t>(offsetof(WhenAll_tA645854C9AD2CBCBFF046766F2509FFA33CB9DC3, ___gate_3)); }
	inline RuntimeObject * get_gate_3() const { return ___gate_3; }
	inline RuntimeObject ** get_address_of_gate_3() { return &___gate_3; }
	inline void set_gate_3(RuntimeObject * value)
	{
		___gate_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___gate_3), (void*)value);
	}

	inline static int32_t get_offset_of_completedCount_4() { return static_cast<int32_t>(offsetof(WhenAll_tA645854C9AD2CBCBFF046766F2509FFA33CB9DC3, ___completedCount_4)); }
	inline int32_t get_completedCount_4() const { return ___completedCount_4; }
	inline int32_t* get_address_of_completedCount_4() { return &___completedCount_4; }
	inline void set_completedCount_4(int32_t value)
	{
		___completedCount_4 = value;
	}

	inline static int32_t get_offset_of_length_5() { return static_cast<int32_t>(offsetof(WhenAll_tA645854C9AD2CBCBFF046766F2509FFA33CB9DC3, ___length_5)); }
	inline int32_t get_length_5() const { return ___length_5; }
	inline int32_t* get_address_of_length_5() { return &___length_5; }
	inline void set_length_5(int32_t value)
	{
		___length_5 = value;
	}
};


// UniRx.Operators.WhenAllObservable/WhenAll_
struct WhenAll__tDEBE0DF2586D259A8A2C260CB3324B4617E5F2FB  : public OperatorObserverBase_2_tF243B5106EEEF4A6D04AD83F65BC8940D21D38C3
{
public:
	// System.Collections.Generic.IList`1<System.IObservable`1<UniRx.Unit>> UniRx.Operators.WhenAllObservable/WhenAll_::sources
	RuntimeObject* ___sources_2;
	// System.Object UniRx.Operators.WhenAllObservable/WhenAll_::gate
	RuntimeObject * ___gate_3;
	// System.Int32 UniRx.Operators.WhenAllObservable/WhenAll_::completedCount
	int32_t ___completedCount_4;
	// System.Int32 UniRx.Operators.WhenAllObservable/WhenAll_::length
	int32_t ___length_5;

public:
	inline static int32_t get_offset_of_sources_2() { return static_cast<int32_t>(offsetof(WhenAll__tDEBE0DF2586D259A8A2C260CB3324B4617E5F2FB, ___sources_2)); }
	inline RuntimeObject* get_sources_2() const { return ___sources_2; }
	inline RuntimeObject** get_address_of_sources_2() { return &___sources_2; }
	inline void set_sources_2(RuntimeObject* value)
	{
		___sources_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sources_2), (void*)value);
	}

	inline static int32_t get_offset_of_gate_3() { return static_cast<int32_t>(offsetof(WhenAll__tDEBE0DF2586D259A8A2C260CB3324B4617E5F2FB, ___gate_3)); }
	inline RuntimeObject * get_gate_3() const { return ___gate_3; }
	inline RuntimeObject ** get_address_of_gate_3() { return &___gate_3; }
	inline void set_gate_3(RuntimeObject * value)
	{
		___gate_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___gate_3), (void*)value);
	}

	inline static int32_t get_offset_of_completedCount_4() { return static_cast<int32_t>(offsetof(WhenAll__tDEBE0DF2586D259A8A2C260CB3324B4617E5F2FB, ___completedCount_4)); }
	inline int32_t get_completedCount_4() const { return ___completedCount_4; }
	inline int32_t* get_address_of_completedCount_4() { return &___completedCount_4; }
	inline void set_completedCount_4(int32_t value)
	{
		___completedCount_4 = value;
	}

	inline static int32_t get_offset_of_length_5() { return static_cast<int32_t>(offsetof(WhenAll__tDEBE0DF2586D259A8A2C260CB3324B4617E5F2FB, ___length_5)); }
	inline int32_t get_length_5() const { return ___length_5; }
	inline int32_t* get_address_of_length_5() { return &___length_5; }
	inline void set_length_5(int32_t value)
	{
		___length_5 = value;
	}
};


// System.Delegate
struct Delegate_t  : public RuntimeObject
{
public:
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject * ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_7;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_8;
	// System.DelegateData System.Delegate::data
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_10;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t, ___invoke_impl_1)); }
	inline intptr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline intptr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(intptr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_target_2), (void*)value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_3)); }
	inline intptr_t get_method_3() const { return ___method_3; }
	inline intptr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(intptr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t, ___delegate_trampoline_4)); }
	inline intptr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline intptr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(intptr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_extra_arg_5() { return static_cast<int32_t>(offsetof(Delegate_t, ___extra_arg_5)); }
	inline intptr_t get_extra_arg_5() const { return ___extra_arg_5; }
	inline intptr_t* get_address_of_extra_arg_5() { return &___extra_arg_5; }
	inline void set_extra_arg_5(intptr_t value)
	{
		___extra_arg_5 = value;
	}

	inline static int32_t get_offset_of_method_code_6() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_code_6)); }
	inline intptr_t get_method_code_6() const { return ___method_code_6; }
	inline intptr_t* get_address_of_method_code_6() { return &___method_code_6; }
	inline void set_method_code_6(intptr_t value)
	{
		___method_code_6 = value;
	}

	inline static int32_t get_offset_of_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_info_7)); }
	inline MethodInfo_t * get_method_info_7() const { return ___method_info_7; }
	inline MethodInfo_t ** get_address_of_method_info_7() { return &___method_info_7; }
	inline void set_method_info_7(MethodInfo_t * value)
	{
		___method_info_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___method_info_7), (void*)value);
	}

	inline static int32_t get_offset_of_original_method_info_8() { return static_cast<int32_t>(offsetof(Delegate_t, ___original_method_info_8)); }
	inline MethodInfo_t * get_original_method_info_8() const { return ___original_method_info_8; }
	inline MethodInfo_t ** get_address_of_original_method_info_8() { return &___original_method_info_8; }
	inline void set_original_method_info_8(MethodInfo_t * value)
	{
		___original_method_info_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___original_method_info_8), (void*)value);
	}

	inline static int32_t get_offset_of_data_9() { return static_cast<int32_t>(offsetof(Delegate_t, ___data_9)); }
	inline DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * get_data_9() const { return ___data_9; }
	inline DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 ** get_address_of_data_9() { return &___data_9; }
	inline void set_data_9(DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * value)
	{
		___data_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___data_9), (void*)value);
	}

	inline static int32_t get_offset_of_method_is_virtual_10() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_is_virtual_10)); }
	inline bool get_method_is_virtual_10() const { return ___method_is_virtual_10; }
	inline bool* get_address_of_method_is_virtual_10() { return &___method_is_virtual_10; }
	inline void set_method_is_virtual_10(bool value)
	{
		___method_is_virtual_10 = value;
	}
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
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	int32_t ___method_is_virtual_10;
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
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	int32_t ___method_is_virtual_10;
};

// System.Exception
struct Exception_t  : public RuntimeObject
{
public:
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t * ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject * ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject * ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* ___native_trace_ips_15;

public:
	inline static int32_t get_offset_of__className_1() { return static_cast<int32_t>(offsetof(Exception_t, ____className_1)); }
	inline String_t* get__className_1() const { return ____className_1; }
	inline String_t** get_address_of__className_1() { return &____className_1; }
	inline void set__className_1(String_t* value)
	{
		____className_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____className_1), (void*)value);
	}

	inline static int32_t get_offset_of__message_2() { return static_cast<int32_t>(offsetof(Exception_t, ____message_2)); }
	inline String_t* get__message_2() const { return ____message_2; }
	inline String_t** get_address_of__message_2() { return &____message_2; }
	inline void set__message_2(String_t* value)
	{
		____message_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____message_2), (void*)value);
	}

	inline static int32_t get_offset_of__data_3() { return static_cast<int32_t>(offsetof(Exception_t, ____data_3)); }
	inline RuntimeObject* get__data_3() const { return ____data_3; }
	inline RuntimeObject** get_address_of__data_3() { return &____data_3; }
	inline void set__data_3(RuntimeObject* value)
	{
		____data_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____data_3), (void*)value);
	}

	inline static int32_t get_offset_of__innerException_4() { return static_cast<int32_t>(offsetof(Exception_t, ____innerException_4)); }
	inline Exception_t * get__innerException_4() const { return ____innerException_4; }
	inline Exception_t ** get_address_of__innerException_4() { return &____innerException_4; }
	inline void set__innerException_4(Exception_t * value)
	{
		____innerException_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____innerException_4), (void*)value);
	}

	inline static int32_t get_offset_of__helpURL_5() { return static_cast<int32_t>(offsetof(Exception_t, ____helpURL_5)); }
	inline String_t* get__helpURL_5() const { return ____helpURL_5; }
	inline String_t** get_address_of__helpURL_5() { return &____helpURL_5; }
	inline void set__helpURL_5(String_t* value)
	{
		____helpURL_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____helpURL_5), (void*)value);
	}

	inline static int32_t get_offset_of__stackTrace_6() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTrace_6)); }
	inline RuntimeObject * get__stackTrace_6() const { return ____stackTrace_6; }
	inline RuntimeObject ** get_address_of__stackTrace_6() { return &____stackTrace_6; }
	inline void set__stackTrace_6(RuntimeObject * value)
	{
		____stackTrace_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTrace_6), (void*)value);
	}

	inline static int32_t get_offset_of__stackTraceString_7() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTraceString_7)); }
	inline String_t* get__stackTraceString_7() const { return ____stackTraceString_7; }
	inline String_t** get_address_of__stackTraceString_7() { return &____stackTraceString_7; }
	inline void set__stackTraceString_7(String_t* value)
	{
		____stackTraceString_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTraceString_7), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_8() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackTraceString_8)); }
	inline String_t* get__remoteStackTraceString_8() const { return ____remoteStackTraceString_8; }
	inline String_t** get_address_of__remoteStackTraceString_8() { return &____remoteStackTraceString_8; }
	inline void set__remoteStackTraceString_8(String_t* value)
	{
		____remoteStackTraceString_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____remoteStackTraceString_8), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackIndex_9() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackIndex_9)); }
	inline int32_t get__remoteStackIndex_9() const { return ____remoteStackIndex_9; }
	inline int32_t* get_address_of__remoteStackIndex_9() { return &____remoteStackIndex_9; }
	inline void set__remoteStackIndex_9(int32_t value)
	{
		____remoteStackIndex_9 = value;
	}

	inline static int32_t get_offset_of__dynamicMethods_10() { return static_cast<int32_t>(offsetof(Exception_t, ____dynamicMethods_10)); }
	inline RuntimeObject * get__dynamicMethods_10() const { return ____dynamicMethods_10; }
	inline RuntimeObject ** get_address_of__dynamicMethods_10() { return &____dynamicMethods_10; }
	inline void set__dynamicMethods_10(RuntimeObject * value)
	{
		____dynamicMethods_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____dynamicMethods_10), (void*)value);
	}

	inline static int32_t get_offset_of__HResult_11() { return static_cast<int32_t>(offsetof(Exception_t, ____HResult_11)); }
	inline int32_t get__HResult_11() const { return ____HResult_11; }
	inline int32_t* get_address_of__HResult_11() { return &____HResult_11; }
	inline void set__HResult_11(int32_t value)
	{
		____HResult_11 = value;
	}

	inline static int32_t get_offset_of__source_12() { return static_cast<int32_t>(offsetof(Exception_t, ____source_12)); }
	inline String_t* get__source_12() const { return ____source_12; }
	inline String_t** get_address_of__source_12() { return &____source_12; }
	inline void set__source_12(String_t* value)
	{
		____source_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____source_12), (void*)value);
	}

	inline static int32_t get_offset_of__safeSerializationManager_13() { return static_cast<int32_t>(offsetof(Exception_t, ____safeSerializationManager_13)); }
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * get__safeSerializationManager_13() const { return ____safeSerializationManager_13; }
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F ** get_address_of__safeSerializationManager_13() { return &____safeSerializationManager_13; }
	inline void set__safeSerializationManager_13(SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * value)
	{
		____safeSerializationManager_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____safeSerializationManager_13), (void*)value);
	}

	inline static int32_t get_offset_of_captured_traces_14() { return static_cast<int32_t>(offsetof(Exception_t, ___captured_traces_14)); }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* get_captured_traces_14() const { return ___captured_traces_14; }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971** get_address_of_captured_traces_14() { return &___captured_traces_14; }
	inline void set_captured_traces_14(StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* value)
	{
		___captured_traces_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___captured_traces_14), (void*)value);
	}

	inline static int32_t get_offset_of_native_trace_ips_15() { return static_cast<int32_t>(offsetof(Exception_t, ___native_trace_ips_15)); }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* get_native_trace_ips_15() const { return ___native_trace_ips_15; }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6** get_address_of_native_trace_ips_15() { return &___native_trace_ips_15; }
	inline void set_native_trace_ips_15(IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* value)
	{
		___native_trace_ips_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___native_trace_ips_15), (void*)value);
	}
};

struct Exception_t_StaticFields
{
public:
	// System.Object System.Exception::s_EDILock
	RuntimeObject * ___s_EDILock_0;

public:
	inline static int32_t get_offset_of_s_EDILock_0() { return static_cast<int32_t>(offsetof(Exception_t_StaticFields, ___s_EDILock_0)); }
	inline RuntimeObject * get_s_EDILock_0() const { return ___s_EDILock_0; }
	inline RuntimeObject ** get_address_of_s_EDILock_0() { return &___s_EDILock_0; }
	inline void set_s_EDILock_0(RuntimeObject * value)
	{
		___s_EDILock_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_EDILock_0), (void*)value);
	}
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
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
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
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};

// UniRx.FrameCountType
struct FrameCountType_t2B2748E99E6014B88E054D8F4069F5094ADD0EFE 
{
public:
	// System.Int32 UniRx.FrameCountType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FrameCountType_t2B2748E99E6014B88E054D8F4069F5094ADD0EFE, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.TimeSpan
struct TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 
{
public:
	// System.Int64 System.TimeSpan::_ticks
	int64_t ____ticks_22;

public:
	inline static int32_t get_offset_of__ticks_22() { return static_cast<int32_t>(offsetof(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203, ____ticks_22)); }
	inline int64_t get__ticks_22() const { return ____ticks_22; }
	inline int64_t* get_address_of__ticks_22() { return &____ticks_22; }
	inline void set__ticks_22(int64_t value)
	{
		____ticks_22 = value;
	}
};

struct TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields
{
public:
	// System.TimeSpan System.TimeSpan::Zero
	TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  ___Zero_19;
	// System.TimeSpan System.TimeSpan::MaxValue
	TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  ___MaxValue_20;
	// System.TimeSpan System.TimeSpan::MinValue
	TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  ___MinValue_21;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.TimeSpan::_legacyConfigChecked
	bool ____legacyConfigChecked_23;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.TimeSpan::_legacyMode
	bool ____legacyMode_24;

public:
	inline static int32_t get_offset_of_Zero_19() { return static_cast<int32_t>(offsetof(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields, ___Zero_19)); }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  get_Zero_19() const { return ___Zero_19; }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * get_address_of_Zero_19() { return &___Zero_19; }
	inline void set_Zero_19(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  value)
	{
		___Zero_19 = value;
	}

	inline static int32_t get_offset_of_MaxValue_20() { return static_cast<int32_t>(offsetof(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields, ___MaxValue_20)); }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  get_MaxValue_20() const { return ___MaxValue_20; }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * get_address_of_MaxValue_20() { return &___MaxValue_20; }
	inline void set_MaxValue_20(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  value)
	{
		___MaxValue_20 = value;
	}

	inline static int32_t get_offset_of_MinValue_21() { return static_cast<int32_t>(offsetof(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields, ___MinValue_21)); }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  get_MinValue_21() const { return ___MinValue_21; }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * get_address_of_MinValue_21() { return &___MinValue_21; }
	inline void set_MinValue_21(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  value)
	{
		___MinValue_21 = value;
	}

	inline static int32_t get_offset_of__legacyConfigChecked_23() { return static_cast<int32_t>(offsetof(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields, ____legacyConfigChecked_23)); }
	inline bool get__legacyConfigChecked_23() const { return ____legacyConfigChecked_23; }
	inline bool* get_address_of__legacyConfigChecked_23() { return &____legacyConfigChecked_23; }
	inline void set__legacyConfigChecked_23(bool value)
	{
		____legacyConfigChecked_23 = value;
	}

	inline static int32_t get_offset_of__legacyMode_24() { return static_cast<int32_t>(offsetof(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields, ____legacyMode_24)); }
	inline bool get__legacyMode_24() const { return ____legacyMode_24; }
	inline bool* get_address_of__legacyMode_24() { return &____legacyMode_24; }
	inline void set__legacyMode_24(bool value)
	{
		____legacyMode_24 = value;
	}
};


// UniRx.Operators.BatchFrameObservable
struct BatchFrameObservable_t43F89468D0E33146387B08F283B9229FDB32518A  : public OperatorObservableBase_1_tA660F803495F8125950EA0F6987954FBD582F2B1
{
public:
	// System.IObservable`1<UniRx.Unit> UniRx.Operators.BatchFrameObservable::source
	RuntimeObject* ___source_1;
	// System.Int32 UniRx.Operators.BatchFrameObservable::frameCount
	int32_t ___frameCount_2;
	// UniRx.FrameCountType UniRx.Operators.BatchFrameObservable::frameCountType
	int32_t ___frameCountType_3;

public:
	inline static int32_t get_offset_of_source_1() { return static_cast<int32_t>(offsetof(BatchFrameObservable_t43F89468D0E33146387B08F283B9229FDB32518A, ___source_1)); }
	inline RuntimeObject* get_source_1() const { return ___source_1; }
	inline RuntimeObject** get_address_of_source_1() { return &___source_1; }
	inline void set_source_1(RuntimeObject* value)
	{
		___source_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source_1), (void*)value);
	}

	inline static int32_t get_offset_of_frameCount_2() { return static_cast<int32_t>(offsetof(BatchFrameObservable_t43F89468D0E33146387B08F283B9229FDB32518A, ___frameCount_2)); }
	inline int32_t get_frameCount_2() const { return ___frameCount_2; }
	inline int32_t* get_address_of_frameCount_2() { return &___frameCount_2; }
	inline void set_frameCount_2(int32_t value)
	{
		___frameCount_2 = value;
	}

	inline static int32_t get_offset_of_frameCountType_3() { return static_cast<int32_t>(offsetof(BatchFrameObservable_t43F89468D0E33146387B08F283B9229FDB32518A, ___frameCountType_3)); }
	inline int32_t get_frameCountType_3() const { return ___frameCountType_3; }
	inline int32_t* get_address_of_frameCountType_3() { return &___frameCountType_3; }
	inline void set_frameCountType_3(int32_t value)
	{
		___frameCountType_3 = value;
	}
};


// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
public:
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* ___delegates_11;

public:
	inline static int32_t get_offset_of_delegates_11() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___delegates_11)); }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* get_delegates_11() const { return ___delegates_11; }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8** get_address_of_delegates_11() { return &___delegates_11; }
	inline void set_delegates_11(DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* value)
	{
		___delegates_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___delegates_11), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_11;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_11;
};

// UniRx.InternalUtil.ScheduledItem
struct ScheduledItem_tF689AC74A0C415A20BBFC28414BDDC4A378FE9FF  : public RuntimeObject
{
public:
	// UniRx.BooleanDisposable UniRx.InternalUtil.ScheduledItem::_disposable
	BooleanDisposable_t10CF71845F96D6A2BB117D0EAE549FA5FAB59133 * ____disposable_0;
	// System.TimeSpan UniRx.InternalUtil.ScheduledItem::_dueTime
	TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  ____dueTime_1;
	// System.Action UniRx.InternalUtil.ScheduledItem::_action
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ____action_2;

public:
	inline static int32_t get_offset_of__disposable_0() { return static_cast<int32_t>(offsetof(ScheduledItem_tF689AC74A0C415A20BBFC28414BDDC4A378FE9FF, ____disposable_0)); }
	inline BooleanDisposable_t10CF71845F96D6A2BB117D0EAE549FA5FAB59133 * get__disposable_0() const { return ____disposable_0; }
	inline BooleanDisposable_t10CF71845F96D6A2BB117D0EAE549FA5FAB59133 ** get_address_of__disposable_0() { return &____disposable_0; }
	inline void set__disposable_0(BooleanDisposable_t10CF71845F96D6A2BB117D0EAE549FA5FAB59133 * value)
	{
		____disposable_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____disposable_0), (void*)value);
	}

	inline static int32_t get_offset_of__dueTime_1() { return static_cast<int32_t>(offsetof(ScheduledItem_tF689AC74A0C415A20BBFC28414BDDC4A378FE9FF, ____dueTime_1)); }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  get__dueTime_1() const { return ____dueTime_1; }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * get_address_of__dueTime_1() { return &____dueTime_1; }
	inline void set__dueTime_1(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  value)
	{
		____dueTime_1 = value;
	}

	inline static int32_t get_offset_of__action_2() { return static_cast<int32_t>(offsetof(ScheduledItem_tF689AC74A0C415A20BBFC28414BDDC4A378FE9FF, ____action_2)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get__action_2() const { return ____action_2; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of__action_2() { return &____action_2; }
	inline void set__action_2(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		____action_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____action_2), (void*)value);
	}
};


// System.SystemException
struct SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62  : public Exception_t
{
public:

public:
};


// UniRx.Scheduler/EndOfFrameMainThreadScheduler/<DelayAction>d__2
struct U3CDelayActionU3Ed__2_tA52D340360C574B310D8BB83B8784ED616BF7DAF  : public RuntimeObject
{
public:
	// System.Int32 UniRx.Scheduler/EndOfFrameMainThreadScheduler/<DelayAction>d__2::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object UniRx.Scheduler/EndOfFrameMainThreadScheduler/<DelayAction>d__2::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// System.TimeSpan UniRx.Scheduler/EndOfFrameMainThreadScheduler/<DelayAction>d__2::dueTime
	TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  ___dueTime_2;
	// System.Action UniRx.Scheduler/EndOfFrameMainThreadScheduler/<DelayAction>d__2::action
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___action_3;
	// UniRx.ICancelable UniRx.Scheduler/EndOfFrameMainThreadScheduler/<DelayAction>d__2::cancellation
	RuntimeObject* ___cancellation_4;
	// UniRx.Scheduler/EndOfFrameMainThreadScheduler UniRx.Scheduler/EndOfFrameMainThreadScheduler/<DelayAction>d__2::<>4__this
	EndOfFrameMainThreadScheduler_tE8B7A08578A0DC4A88F92C54593F3E40A4FF0FC9 * ___U3CU3E4__this_5;
	// System.Single UniRx.Scheduler/EndOfFrameMainThreadScheduler/<DelayAction>d__2::<elapsed>5__1
	float ___U3CelapsedU3E5__1_6;
	// System.Single UniRx.Scheduler/EndOfFrameMainThreadScheduler/<DelayAction>d__2::<dt>5__2
	float ___U3CdtU3E5__2_7;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CDelayActionU3Ed__2_tA52D340360C574B310D8BB83B8784ED616BF7DAF, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CDelayActionU3Ed__2_tA52D340360C574B310D8BB83B8784ED616BF7DAF, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_dueTime_2() { return static_cast<int32_t>(offsetof(U3CDelayActionU3Ed__2_tA52D340360C574B310D8BB83B8784ED616BF7DAF, ___dueTime_2)); }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  get_dueTime_2() const { return ___dueTime_2; }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * get_address_of_dueTime_2() { return &___dueTime_2; }
	inline void set_dueTime_2(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  value)
	{
		___dueTime_2 = value;
	}

	inline static int32_t get_offset_of_action_3() { return static_cast<int32_t>(offsetof(U3CDelayActionU3Ed__2_tA52D340360C574B310D8BB83B8784ED616BF7DAF, ___action_3)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_action_3() const { return ___action_3; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_action_3() { return &___action_3; }
	inline void set_action_3(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___action_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___action_3), (void*)value);
	}

	inline static int32_t get_offset_of_cancellation_4() { return static_cast<int32_t>(offsetof(U3CDelayActionU3Ed__2_tA52D340360C574B310D8BB83B8784ED616BF7DAF, ___cancellation_4)); }
	inline RuntimeObject* get_cancellation_4() const { return ___cancellation_4; }
	inline RuntimeObject** get_address_of_cancellation_4() { return &___cancellation_4; }
	inline void set_cancellation_4(RuntimeObject* value)
	{
		___cancellation_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___cancellation_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_5() { return static_cast<int32_t>(offsetof(U3CDelayActionU3Ed__2_tA52D340360C574B310D8BB83B8784ED616BF7DAF, ___U3CU3E4__this_5)); }
	inline EndOfFrameMainThreadScheduler_tE8B7A08578A0DC4A88F92C54593F3E40A4FF0FC9 * get_U3CU3E4__this_5() const { return ___U3CU3E4__this_5; }
	inline EndOfFrameMainThreadScheduler_tE8B7A08578A0DC4A88F92C54593F3E40A4FF0FC9 ** get_address_of_U3CU3E4__this_5() { return &___U3CU3E4__this_5; }
	inline void set_U3CU3E4__this_5(EndOfFrameMainThreadScheduler_tE8B7A08578A0DC4A88F92C54593F3E40A4FF0FC9 * value)
	{
		___U3CU3E4__this_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_5), (void*)value);
	}

	inline static int32_t get_offset_of_U3CelapsedU3E5__1_6() { return static_cast<int32_t>(offsetof(U3CDelayActionU3Ed__2_tA52D340360C574B310D8BB83B8784ED616BF7DAF, ___U3CelapsedU3E5__1_6)); }
	inline float get_U3CelapsedU3E5__1_6() const { return ___U3CelapsedU3E5__1_6; }
	inline float* get_address_of_U3CelapsedU3E5__1_6() { return &___U3CelapsedU3E5__1_6; }
	inline void set_U3CelapsedU3E5__1_6(float value)
	{
		___U3CelapsedU3E5__1_6 = value;
	}

	inline static int32_t get_offset_of_U3CdtU3E5__2_7() { return static_cast<int32_t>(offsetof(U3CDelayActionU3Ed__2_tA52D340360C574B310D8BB83B8784ED616BF7DAF, ___U3CdtU3E5__2_7)); }
	inline float get_U3CdtU3E5__2_7() const { return ___U3CdtU3E5__2_7; }
	inline float* get_address_of_U3CdtU3E5__2_7() { return &___U3CdtU3E5__2_7; }
	inline void set_U3CdtU3E5__2_7(float value)
	{
		___U3CdtU3E5__2_7 = value;
	}
};


// UniRx.Scheduler/EndOfFrameMainThreadScheduler/<PeriodicAction>d__3
struct U3CPeriodicActionU3Ed__3_tBA2C32A76692E04CF535F08F5D8EEC8A9CFA58CA  : public RuntimeObject
{
public:
	// System.Int32 UniRx.Scheduler/EndOfFrameMainThreadScheduler/<PeriodicAction>d__3::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object UniRx.Scheduler/EndOfFrameMainThreadScheduler/<PeriodicAction>d__3::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// System.TimeSpan UniRx.Scheduler/EndOfFrameMainThreadScheduler/<PeriodicAction>d__3::period
	TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  ___period_2;
	// System.Action UniRx.Scheduler/EndOfFrameMainThreadScheduler/<PeriodicAction>d__3::action
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___action_3;
	// UniRx.ICancelable UniRx.Scheduler/EndOfFrameMainThreadScheduler/<PeriodicAction>d__3::cancellation
	RuntimeObject* ___cancellation_4;
	// UniRx.Scheduler/EndOfFrameMainThreadScheduler UniRx.Scheduler/EndOfFrameMainThreadScheduler/<PeriodicAction>d__3::<>4__this
	EndOfFrameMainThreadScheduler_tE8B7A08578A0DC4A88F92C54593F3E40A4FF0FC9 * ___U3CU3E4__this_5;
	// System.Single UniRx.Scheduler/EndOfFrameMainThreadScheduler/<PeriodicAction>d__3::<elapsed>5__1
	float ___U3CelapsedU3E5__1_6;
	// System.Single UniRx.Scheduler/EndOfFrameMainThreadScheduler/<PeriodicAction>d__3::<dt>5__2
	float ___U3CdtU3E5__2_7;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CPeriodicActionU3Ed__3_tBA2C32A76692E04CF535F08F5D8EEC8A9CFA58CA, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CPeriodicActionU3Ed__3_tBA2C32A76692E04CF535F08F5D8EEC8A9CFA58CA, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_period_2() { return static_cast<int32_t>(offsetof(U3CPeriodicActionU3Ed__3_tBA2C32A76692E04CF535F08F5D8EEC8A9CFA58CA, ___period_2)); }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  get_period_2() const { return ___period_2; }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * get_address_of_period_2() { return &___period_2; }
	inline void set_period_2(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  value)
	{
		___period_2 = value;
	}

	inline static int32_t get_offset_of_action_3() { return static_cast<int32_t>(offsetof(U3CPeriodicActionU3Ed__3_tBA2C32A76692E04CF535F08F5D8EEC8A9CFA58CA, ___action_3)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_action_3() const { return ___action_3; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_action_3() { return &___action_3; }
	inline void set_action_3(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___action_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___action_3), (void*)value);
	}

	inline static int32_t get_offset_of_cancellation_4() { return static_cast<int32_t>(offsetof(U3CPeriodicActionU3Ed__3_tBA2C32A76692E04CF535F08F5D8EEC8A9CFA58CA, ___cancellation_4)); }
	inline RuntimeObject* get_cancellation_4() const { return ___cancellation_4; }
	inline RuntimeObject** get_address_of_cancellation_4() { return &___cancellation_4; }
	inline void set_cancellation_4(RuntimeObject* value)
	{
		___cancellation_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___cancellation_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_5() { return static_cast<int32_t>(offsetof(U3CPeriodicActionU3Ed__3_tBA2C32A76692E04CF535F08F5D8EEC8A9CFA58CA, ___U3CU3E4__this_5)); }
	inline EndOfFrameMainThreadScheduler_tE8B7A08578A0DC4A88F92C54593F3E40A4FF0FC9 * get_U3CU3E4__this_5() const { return ___U3CU3E4__this_5; }
	inline EndOfFrameMainThreadScheduler_tE8B7A08578A0DC4A88F92C54593F3E40A4FF0FC9 ** get_address_of_U3CU3E4__this_5() { return &___U3CU3E4__this_5; }
	inline void set_U3CU3E4__this_5(EndOfFrameMainThreadScheduler_tE8B7A08578A0DC4A88F92C54593F3E40A4FF0FC9 * value)
	{
		___U3CU3E4__this_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_5), (void*)value);
	}

	inline static int32_t get_offset_of_U3CelapsedU3E5__1_6() { return static_cast<int32_t>(offsetof(U3CPeriodicActionU3Ed__3_tBA2C32A76692E04CF535F08F5D8EEC8A9CFA58CA, ___U3CelapsedU3E5__1_6)); }
	inline float get_U3CelapsedU3E5__1_6() const { return ___U3CelapsedU3E5__1_6; }
	inline float* get_address_of_U3CelapsedU3E5__1_6() { return &___U3CelapsedU3E5__1_6; }
	inline void set_U3CelapsedU3E5__1_6(float value)
	{
		___U3CelapsedU3E5__1_6 = value;
	}

	inline static int32_t get_offset_of_U3CdtU3E5__2_7() { return static_cast<int32_t>(offsetof(U3CPeriodicActionU3Ed__3_tBA2C32A76692E04CF535F08F5D8EEC8A9CFA58CA, ___U3CdtU3E5__2_7)); }
	inline float get_U3CdtU3E5__2_7() const { return ___U3CdtU3E5__2_7; }
	inline float* get_address_of_U3CdtU3E5__2_7() { return &___U3CdtU3E5__2_7; }
	inline void set_U3CdtU3E5__2_7(float value)
	{
		___U3CdtU3E5__2_7 = value;
	}
};


// UniRx.Scheduler/FixedUpdateMainThreadScheduler/<DelayAction>d__2
struct U3CDelayActionU3Ed__2_tF6BFFB8F5C3BA4D6B330E6B0B07B0FCABF91ADCC  : public RuntimeObject
{
public:
	// System.Int32 UniRx.Scheduler/FixedUpdateMainThreadScheduler/<DelayAction>d__2::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object UniRx.Scheduler/FixedUpdateMainThreadScheduler/<DelayAction>d__2::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// System.TimeSpan UniRx.Scheduler/FixedUpdateMainThreadScheduler/<DelayAction>d__2::dueTime
	TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  ___dueTime_2;
	// System.Action UniRx.Scheduler/FixedUpdateMainThreadScheduler/<DelayAction>d__2::action
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___action_3;
	// UniRx.ICancelable UniRx.Scheduler/FixedUpdateMainThreadScheduler/<DelayAction>d__2::cancellation
	RuntimeObject* ___cancellation_4;
	// UniRx.Scheduler/FixedUpdateMainThreadScheduler UniRx.Scheduler/FixedUpdateMainThreadScheduler/<DelayAction>d__2::<>4__this
	FixedUpdateMainThreadScheduler_t47CBBD1634E2D14FE826AFC0F218E5FBFF881174 * ___U3CU3E4__this_5;
	// System.Single UniRx.Scheduler/FixedUpdateMainThreadScheduler/<DelayAction>d__2::<startTime>5__1
	float ___U3CstartTimeU3E5__1_6;
	// System.Single UniRx.Scheduler/FixedUpdateMainThreadScheduler/<DelayAction>d__2::<dt>5__2
	float ___U3CdtU3E5__2_7;
	// System.Single UniRx.Scheduler/FixedUpdateMainThreadScheduler/<DelayAction>d__2::<elapsed>5__3
	float ___U3CelapsedU3E5__3_8;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CDelayActionU3Ed__2_tF6BFFB8F5C3BA4D6B330E6B0B07B0FCABF91ADCC, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CDelayActionU3Ed__2_tF6BFFB8F5C3BA4D6B330E6B0B07B0FCABF91ADCC, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_dueTime_2() { return static_cast<int32_t>(offsetof(U3CDelayActionU3Ed__2_tF6BFFB8F5C3BA4D6B330E6B0B07B0FCABF91ADCC, ___dueTime_2)); }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  get_dueTime_2() const { return ___dueTime_2; }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * get_address_of_dueTime_2() { return &___dueTime_2; }
	inline void set_dueTime_2(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  value)
	{
		___dueTime_2 = value;
	}

	inline static int32_t get_offset_of_action_3() { return static_cast<int32_t>(offsetof(U3CDelayActionU3Ed__2_tF6BFFB8F5C3BA4D6B330E6B0B07B0FCABF91ADCC, ___action_3)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_action_3() const { return ___action_3; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_action_3() { return &___action_3; }
	inline void set_action_3(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___action_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___action_3), (void*)value);
	}

	inline static int32_t get_offset_of_cancellation_4() { return static_cast<int32_t>(offsetof(U3CDelayActionU3Ed__2_tF6BFFB8F5C3BA4D6B330E6B0B07B0FCABF91ADCC, ___cancellation_4)); }
	inline RuntimeObject* get_cancellation_4() const { return ___cancellation_4; }
	inline RuntimeObject** get_address_of_cancellation_4() { return &___cancellation_4; }
	inline void set_cancellation_4(RuntimeObject* value)
	{
		___cancellation_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___cancellation_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_5() { return static_cast<int32_t>(offsetof(U3CDelayActionU3Ed__2_tF6BFFB8F5C3BA4D6B330E6B0B07B0FCABF91ADCC, ___U3CU3E4__this_5)); }
	inline FixedUpdateMainThreadScheduler_t47CBBD1634E2D14FE826AFC0F218E5FBFF881174 * get_U3CU3E4__this_5() const { return ___U3CU3E4__this_5; }
	inline FixedUpdateMainThreadScheduler_t47CBBD1634E2D14FE826AFC0F218E5FBFF881174 ** get_address_of_U3CU3E4__this_5() { return &___U3CU3E4__this_5; }
	inline void set_U3CU3E4__this_5(FixedUpdateMainThreadScheduler_t47CBBD1634E2D14FE826AFC0F218E5FBFF881174 * value)
	{
		___U3CU3E4__this_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_5), (void*)value);
	}

	inline static int32_t get_offset_of_U3CstartTimeU3E5__1_6() { return static_cast<int32_t>(offsetof(U3CDelayActionU3Ed__2_tF6BFFB8F5C3BA4D6B330E6B0B07B0FCABF91ADCC, ___U3CstartTimeU3E5__1_6)); }
	inline float get_U3CstartTimeU3E5__1_6() const { return ___U3CstartTimeU3E5__1_6; }
	inline float* get_address_of_U3CstartTimeU3E5__1_6() { return &___U3CstartTimeU3E5__1_6; }
	inline void set_U3CstartTimeU3E5__1_6(float value)
	{
		___U3CstartTimeU3E5__1_6 = value;
	}

	inline static int32_t get_offset_of_U3CdtU3E5__2_7() { return static_cast<int32_t>(offsetof(U3CDelayActionU3Ed__2_tF6BFFB8F5C3BA4D6B330E6B0B07B0FCABF91ADCC, ___U3CdtU3E5__2_7)); }
	inline float get_U3CdtU3E5__2_7() const { return ___U3CdtU3E5__2_7; }
	inline float* get_address_of_U3CdtU3E5__2_7() { return &___U3CdtU3E5__2_7; }
	inline void set_U3CdtU3E5__2_7(float value)
	{
		___U3CdtU3E5__2_7 = value;
	}

	inline static int32_t get_offset_of_U3CelapsedU3E5__3_8() { return static_cast<int32_t>(offsetof(U3CDelayActionU3Ed__2_tF6BFFB8F5C3BA4D6B330E6B0B07B0FCABF91ADCC, ___U3CelapsedU3E5__3_8)); }
	inline float get_U3CelapsedU3E5__3_8() const { return ___U3CelapsedU3E5__3_8; }
	inline float* get_address_of_U3CelapsedU3E5__3_8() { return &___U3CelapsedU3E5__3_8; }
	inline void set_U3CelapsedU3E5__3_8(float value)
	{
		___U3CelapsedU3E5__3_8 = value;
	}
};


// UniRx.Scheduler/FixedUpdateMainThreadScheduler/<PeriodicAction>d__3
struct U3CPeriodicActionU3Ed__3_t0AB097192C92DFAAA017A1B1428FD02890D6B229  : public RuntimeObject
{
public:
	// System.Int32 UniRx.Scheduler/FixedUpdateMainThreadScheduler/<PeriodicAction>d__3::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object UniRx.Scheduler/FixedUpdateMainThreadScheduler/<PeriodicAction>d__3::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// System.TimeSpan UniRx.Scheduler/FixedUpdateMainThreadScheduler/<PeriodicAction>d__3::period
	TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  ___period_2;
	// System.Action UniRx.Scheduler/FixedUpdateMainThreadScheduler/<PeriodicAction>d__3::action
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___action_3;
	// UniRx.ICancelable UniRx.Scheduler/FixedUpdateMainThreadScheduler/<PeriodicAction>d__3::cancellation
	RuntimeObject* ___cancellation_4;
	// UniRx.Scheduler/FixedUpdateMainThreadScheduler UniRx.Scheduler/FixedUpdateMainThreadScheduler/<PeriodicAction>d__3::<>4__this
	FixedUpdateMainThreadScheduler_t47CBBD1634E2D14FE826AFC0F218E5FBFF881174 * ___U3CU3E4__this_5;
	// System.Single UniRx.Scheduler/FixedUpdateMainThreadScheduler/<PeriodicAction>d__3::<startTime>5__1
	float ___U3CstartTimeU3E5__1_6;
	// System.Single UniRx.Scheduler/FixedUpdateMainThreadScheduler/<PeriodicAction>d__3::<dt>5__2
	float ___U3CdtU3E5__2_7;
	// System.Single UniRx.Scheduler/FixedUpdateMainThreadScheduler/<PeriodicAction>d__3::<ft>5__3
	float ___U3CftU3E5__3_8;
	// System.Single UniRx.Scheduler/FixedUpdateMainThreadScheduler/<PeriodicAction>d__3::<elapsed>5__4
	float ___U3CelapsedU3E5__4_9;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CPeriodicActionU3Ed__3_t0AB097192C92DFAAA017A1B1428FD02890D6B229, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CPeriodicActionU3Ed__3_t0AB097192C92DFAAA017A1B1428FD02890D6B229, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_period_2() { return static_cast<int32_t>(offsetof(U3CPeriodicActionU3Ed__3_t0AB097192C92DFAAA017A1B1428FD02890D6B229, ___period_2)); }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  get_period_2() const { return ___period_2; }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * get_address_of_period_2() { return &___period_2; }
	inline void set_period_2(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  value)
	{
		___period_2 = value;
	}

	inline static int32_t get_offset_of_action_3() { return static_cast<int32_t>(offsetof(U3CPeriodicActionU3Ed__3_t0AB097192C92DFAAA017A1B1428FD02890D6B229, ___action_3)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_action_3() const { return ___action_3; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_action_3() { return &___action_3; }
	inline void set_action_3(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___action_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___action_3), (void*)value);
	}

	inline static int32_t get_offset_of_cancellation_4() { return static_cast<int32_t>(offsetof(U3CPeriodicActionU3Ed__3_t0AB097192C92DFAAA017A1B1428FD02890D6B229, ___cancellation_4)); }
	inline RuntimeObject* get_cancellation_4() const { return ___cancellation_4; }
	inline RuntimeObject** get_address_of_cancellation_4() { return &___cancellation_4; }
	inline void set_cancellation_4(RuntimeObject* value)
	{
		___cancellation_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___cancellation_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_5() { return static_cast<int32_t>(offsetof(U3CPeriodicActionU3Ed__3_t0AB097192C92DFAAA017A1B1428FD02890D6B229, ___U3CU3E4__this_5)); }
	inline FixedUpdateMainThreadScheduler_t47CBBD1634E2D14FE826AFC0F218E5FBFF881174 * get_U3CU3E4__this_5() const { return ___U3CU3E4__this_5; }
	inline FixedUpdateMainThreadScheduler_t47CBBD1634E2D14FE826AFC0F218E5FBFF881174 ** get_address_of_U3CU3E4__this_5() { return &___U3CU3E4__this_5; }
	inline void set_U3CU3E4__this_5(FixedUpdateMainThreadScheduler_t47CBBD1634E2D14FE826AFC0F218E5FBFF881174 * value)
	{
		___U3CU3E4__this_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_5), (void*)value);
	}

	inline static int32_t get_offset_of_U3CstartTimeU3E5__1_6() { return static_cast<int32_t>(offsetof(U3CPeriodicActionU3Ed__3_t0AB097192C92DFAAA017A1B1428FD02890D6B229, ___U3CstartTimeU3E5__1_6)); }
	inline float get_U3CstartTimeU3E5__1_6() const { return ___U3CstartTimeU3E5__1_6; }
	inline float* get_address_of_U3CstartTimeU3E5__1_6() { return &___U3CstartTimeU3E5__1_6; }
	inline void set_U3CstartTimeU3E5__1_6(float value)
	{
		___U3CstartTimeU3E5__1_6 = value;
	}

	inline static int32_t get_offset_of_U3CdtU3E5__2_7() { return static_cast<int32_t>(offsetof(U3CPeriodicActionU3Ed__3_t0AB097192C92DFAAA017A1B1428FD02890D6B229, ___U3CdtU3E5__2_7)); }
	inline float get_U3CdtU3E5__2_7() const { return ___U3CdtU3E5__2_7; }
	inline float* get_address_of_U3CdtU3E5__2_7() { return &___U3CdtU3E5__2_7; }
	inline void set_U3CdtU3E5__2_7(float value)
	{
		___U3CdtU3E5__2_7 = value;
	}

	inline static int32_t get_offset_of_U3CftU3E5__3_8() { return static_cast<int32_t>(offsetof(U3CPeriodicActionU3Ed__3_t0AB097192C92DFAAA017A1B1428FD02890D6B229, ___U3CftU3E5__3_8)); }
	inline float get_U3CftU3E5__3_8() const { return ___U3CftU3E5__3_8; }
	inline float* get_address_of_U3CftU3E5__3_8() { return &___U3CftU3E5__3_8; }
	inline void set_U3CftU3E5__3_8(float value)
	{
		___U3CftU3E5__3_8 = value;
	}

	inline static int32_t get_offset_of_U3CelapsedU3E5__4_9() { return static_cast<int32_t>(offsetof(U3CPeriodicActionU3Ed__3_t0AB097192C92DFAAA017A1B1428FD02890D6B229, ___U3CelapsedU3E5__4_9)); }
	inline float get_U3CelapsedU3E5__4_9() const { return ___U3CelapsedU3E5__4_9; }
	inline float* get_address_of_U3CelapsedU3E5__4_9() { return &___U3CelapsedU3E5__4_9; }
	inline void set_U3CelapsedU3E5__4_9(float value)
	{
		___U3CelapsedU3E5__4_9 = value;
	}
};


// UniRx.Scheduler/IgnoreTimeScaleMainThreadScheduler/<DelayAction>d__2
struct U3CDelayActionU3Ed__2_tB4AB6DDE46CF76AD12FA17F78671EE48630B77B5  : public RuntimeObject
{
public:
	// System.Int32 UniRx.Scheduler/IgnoreTimeScaleMainThreadScheduler/<DelayAction>d__2::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object UniRx.Scheduler/IgnoreTimeScaleMainThreadScheduler/<DelayAction>d__2::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// System.TimeSpan UniRx.Scheduler/IgnoreTimeScaleMainThreadScheduler/<DelayAction>d__2::dueTime
	TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  ___dueTime_2;
	// System.Action UniRx.Scheduler/IgnoreTimeScaleMainThreadScheduler/<DelayAction>d__2::action
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___action_3;
	// UniRx.ICancelable UniRx.Scheduler/IgnoreTimeScaleMainThreadScheduler/<DelayAction>d__2::cancellation
	RuntimeObject* ___cancellation_4;
	// UniRx.Scheduler/IgnoreTimeScaleMainThreadScheduler UniRx.Scheduler/IgnoreTimeScaleMainThreadScheduler/<DelayAction>d__2::<>4__this
	IgnoreTimeScaleMainThreadScheduler_tDE9B9647AE60FF7CE670C3CD55E364031A861391 * ___U3CU3E4__this_5;
	// System.Single UniRx.Scheduler/IgnoreTimeScaleMainThreadScheduler/<DelayAction>d__2::<elapsed>5__1
	float ___U3CelapsedU3E5__1_6;
	// System.Single UniRx.Scheduler/IgnoreTimeScaleMainThreadScheduler/<DelayAction>d__2::<dt>5__2
	float ___U3CdtU3E5__2_7;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CDelayActionU3Ed__2_tB4AB6DDE46CF76AD12FA17F78671EE48630B77B5, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CDelayActionU3Ed__2_tB4AB6DDE46CF76AD12FA17F78671EE48630B77B5, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_dueTime_2() { return static_cast<int32_t>(offsetof(U3CDelayActionU3Ed__2_tB4AB6DDE46CF76AD12FA17F78671EE48630B77B5, ___dueTime_2)); }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  get_dueTime_2() const { return ___dueTime_2; }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * get_address_of_dueTime_2() { return &___dueTime_2; }
	inline void set_dueTime_2(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  value)
	{
		___dueTime_2 = value;
	}

	inline static int32_t get_offset_of_action_3() { return static_cast<int32_t>(offsetof(U3CDelayActionU3Ed__2_tB4AB6DDE46CF76AD12FA17F78671EE48630B77B5, ___action_3)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_action_3() const { return ___action_3; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_action_3() { return &___action_3; }
	inline void set_action_3(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___action_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___action_3), (void*)value);
	}

	inline static int32_t get_offset_of_cancellation_4() { return static_cast<int32_t>(offsetof(U3CDelayActionU3Ed__2_tB4AB6DDE46CF76AD12FA17F78671EE48630B77B5, ___cancellation_4)); }
	inline RuntimeObject* get_cancellation_4() const { return ___cancellation_4; }
	inline RuntimeObject** get_address_of_cancellation_4() { return &___cancellation_4; }
	inline void set_cancellation_4(RuntimeObject* value)
	{
		___cancellation_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___cancellation_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_5() { return static_cast<int32_t>(offsetof(U3CDelayActionU3Ed__2_tB4AB6DDE46CF76AD12FA17F78671EE48630B77B5, ___U3CU3E4__this_5)); }
	inline IgnoreTimeScaleMainThreadScheduler_tDE9B9647AE60FF7CE670C3CD55E364031A861391 * get_U3CU3E4__this_5() const { return ___U3CU3E4__this_5; }
	inline IgnoreTimeScaleMainThreadScheduler_tDE9B9647AE60FF7CE670C3CD55E364031A861391 ** get_address_of_U3CU3E4__this_5() { return &___U3CU3E4__this_5; }
	inline void set_U3CU3E4__this_5(IgnoreTimeScaleMainThreadScheduler_tDE9B9647AE60FF7CE670C3CD55E364031A861391 * value)
	{
		___U3CU3E4__this_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_5), (void*)value);
	}

	inline static int32_t get_offset_of_U3CelapsedU3E5__1_6() { return static_cast<int32_t>(offsetof(U3CDelayActionU3Ed__2_tB4AB6DDE46CF76AD12FA17F78671EE48630B77B5, ___U3CelapsedU3E5__1_6)); }
	inline float get_U3CelapsedU3E5__1_6() const { return ___U3CelapsedU3E5__1_6; }
	inline float* get_address_of_U3CelapsedU3E5__1_6() { return &___U3CelapsedU3E5__1_6; }
	inline void set_U3CelapsedU3E5__1_6(float value)
	{
		___U3CelapsedU3E5__1_6 = value;
	}

	inline static int32_t get_offset_of_U3CdtU3E5__2_7() { return static_cast<int32_t>(offsetof(U3CDelayActionU3Ed__2_tB4AB6DDE46CF76AD12FA17F78671EE48630B77B5, ___U3CdtU3E5__2_7)); }
	inline float get_U3CdtU3E5__2_7() const { return ___U3CdtU3E5__2_7; }
	inline float* get_address_of_U3CdtU3E5__2_7() { return &___U3CdtU3E5__2_7; }
	inline void set_U3CdtU3E5__2_7(float value)
	{
		___U3CdtU3E5__2_7 = value;
	}
};


// UniRx.Scheduler/IgnoreTimeScaleMainThreadScheduler/<PeriodicAction>d__3
struct U3CPeriodicActionU3Ed__3_t71CE59A01E21D352CF4345E5C2966F8FFA93E24B  : public RuntimeObject
{
public:
	// System.Int32 UniRx.Scheduler/IgnoreTimeScaleMainThreadScheduler/<PeriodicAction>d__3::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object UniRx.Scheduler/IgnoreTimeScaleMainThreadScheduler/<PeriodicAction>d__3::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// System.TimeSpan UniRx.Scheduler/IgnoreTimeScaleMainThreadScheduler/<PeriodicAction>d__3::period
	TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  ___period_2;
	// System.Action UniRx.Scheduler/IgnoreTimeScaleMainThreadScheduler/<PeriodicAction>d__3::action
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___action_3;
	// UniRx.ICancelable UniRx.Scheduler/IgnoreTimeScaleMainThreadScheduler/<PeriodicAction>d__3::cancellation
	RuntimeObject* ___cancellation_4;
	// UniRx.Scheduler/IgnoreTimeScaleMainThreadScheduler UniRx.Scheduler/IgnoreTimeScaleMainThreadScheduler/<PeriodicAction>d__3::<>4__this
	IgnoreTimeScaleMainThreadScheduler_tDE9B9647AE60FF7CE670C3CD55E364031A861391 * ___U3CU3E4__this_5;
	// System.Single UniRx.Scheduler/IgnoreTimeScaleMainThreadScheduler/<PeriodicAction>d__3::<elapsed>5__1
	float ___U3CelapsedU3E5__1_6;
	// System.Single UniRx.Scheduler/IgnoreTimeScaleMainThreadScheduler/<PeriodicAction>d__3::<dt>5__2
	float ___U3CdtU3E5__2_7;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CPeriodicActionU3Ed__3_t71CE59A01E21D352CF4345E5C2966F8FFA93E24B, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CPeriodicActionU3Ed__3_t71CE59A01E21D352CF4345E5C2966F8FFA93E24B, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_period_2() { return static_cast<int32_t>(offsetof(U3CPeriodicActionU3Ed__3_t71CE59A01E21D352CF4345E5C2966F8FFA93E24B, ___period_2)); }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  get_period_2() const { return ___period_2; }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * get_address_of_period_2() { return &___period_2; }
	inline void set_period_2(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  value)
	{
		___period_2 = value;
	}

	inline static int32_t get_offset_of_action_3() { return static_cast<int32_t>(offsetof(U3CPeriodicActionU3Ed__3_t71CE59A01E21D352CF4345E5C2966F8FFA93E24B, ___action_3)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_action_3() const { return ___action_3; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_action_3() { return &___action_3; }
	inline void set_action_3(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___action_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___action_3), (void*)value);
	}

	inline static int32_t get_offset_of_cancellation_4() { return static_cast<int32_t>(offsetof(U3CPeriodicActionU3Ed__3_t71CE59A01E21D352CF4345E5C2966F8FFA93E24B, ___cancellation_4)); }
	inline RuntimeObject* get_cancellation_4() const { return ___cancellation_4; }
	inline RuntimeObject** get_address_of_cancellation_4() { return &___cancellation_4; }
	inline void set_cancellation_4(RuntimeObject* value)
	{
		___cancellation_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___cancellation_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_5() { return static_cast<int32_t>(offsetof(U3CPeriodicActionU3Ed__3_t71CE59A01E21D352CF4345E5C2966F8FFA93E24B, ___U3CU3E4__this_5)); }
	inline IgnoreTimeScaleMainThreadScheduler_tDE9B9647AE60FF7CE670C3CD55E364031A861391 * get_U3CU3E4__this_5() const { return ___U3CU3E4__this_5; }
	inline IgnoreTimeScaleMainThreadScheduler_tDE9B9647AE60FF7CE670C3CD55E364031A861391 ** get_address_of_U3CU3E4__this_5() { return &___U3CU3E4__this_5; }
	inline void set_U3CU3E4__this_5(IgnoreTimeScaleMainThreadScheduler_tDE9B9647AE60FF7CE670C3CD55E364031A861391 * value)
	{
		___U3CU3E4__this_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_5), (void*)value);
	}

	inline static int32_t get_offset_of_U3CelapsedU3E5__1_6() { return static_cast<int32_t>(offsetof(U3CPeriodicActionU3Ed__3_t71CE59A01E21D352CF4345E5C2966F8FFA93E24B, ___U3CelapsedU3E5__1_6)); }
	inline float get_U3CelapsedU3E5__1_6() const { return ___U3CelapsedU3E5__1_6; }
	inline float* get_address_of_U3CelapsedU3E5__1_6() { return &___U3CelapsedU3E5__1_6; }
	inline void set_U3CelapsedU3E5__1_6(float value)
	{
		___U3CelapsedU3E5__1_6 = value;
	}

	inline static int32_t get_offset_of_U3CdtU3E5__2_7() { return static_cast<int32_t>(offsetof(U3CPeriodicActionU3Ed__3_t71CE59A01E21D352CF4345E5C2966F8FFA93E24B, ___U3CdtU3E5__2_7)); }
	inline float get_U3CdtU3E5__2_7() const { return ___U3CdtU3E5__2_7; }
	inline float* get_address_of_U3CdtU3E5__2_7() { return &___U3CdtU3E5__2_7; }
	inline void set_U3CdtU3E5__2_7(float value)
	{
		___U3CdtU3E5__2_7 = value;
	}
};


// UniRx.Scheduler/MainThreadScheduler/<DelayAction>d__2
struct U3CDelayActionU3Ed__2_tEF353B140AF9D12C1A047EF61FC7EE32F2F226A9  : public RuntimeObject
{
public:
	// System.Int32 UniRx.Scheduler/MainThreadScheduler/<DelayAction>d__2::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object UniRx.Scheduler/MainThreadScheduler/<DelayAction>d__2::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// System.TimeSpan UniRx.Scheduler/MainThreadScheduler/<DelayAction>d__2::dueTime
	TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  ___dueTime_2;
	// System.Action UniRx.Scheduler/MainThreadScheduler/<DelayAction>d__2::action
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___action_3;
	// UniRx.ICancelable UniRx.Scheduler/MainThreadScheduler/<DelayAction>d__2::cancellation
	RuntimeObject* ___cancellation_4;
	// UniRx.Scheduler/MainThreadScheduler UniRx.Scheduler/MainThreadScheduler/<DelayAction>d__2::<>4__this
	MainThreadScheduler_t48B46CA8F52051759E6ED7B3E9FF42C2F9B77C17 * ___U3CU3E4__this_5;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CDelayActionU3Ed__2_tEF353B140AF9D12C1A047EF61FC7EE32F2F226A9, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CDelayActionU3Ed__2_tEF353B140AF9D12C1A047EF61FC7EE32F2F226A9, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_dueTime_2() { return static_cast<int32_t>(offsetof(U3CDelayActionU3Ed__2_tEF353B140AF9D12C1A047EF61FC7EE32F2F226A9, ___dueTime_2)); }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  get_dueTime_2() const { return ___dueTime_2; }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * get_address_of_dueTime_2() { return &___dueTime_2; }
	inline void set_dueTime_2(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  value)
	{
		___dueTime_2 = value;
	}

	inline static int32_t get_offset_of_action_3() { return static_cast<int32_t>(offsetof(U3CDelayActionU3Ed__2_tEF353B140AF9D12C1A047EF61FC7EE32F2F226A9, ___action_3)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_action_3() const { return ___action_3; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_action_3() { return &___action_3; }
	inline void set_action_3(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___action_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___action_3), (void*)value);
	}

	inline static int32_t get_offset_of_cancellation_4() { return static_cast<int32_t>(offsetof(U3CDelayActionU3Ed__2_tEF353B140AF9D12C1A047EF61FC7EE32F2F226A9, ___cancellation_4)); }
	inline RuntimeObject* get_cancellation_4() const { return ___cancellation_4; }
	inline RuntimeObject** get_address_of_cancellation_4() { return &___cancellation_4; }
	inline void set_cancellation_4(RuntimeObject* value)
	{
		___cancellation_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___cancellation_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_5() { return static_cast<int32_t>(offsetof(U3CDelayActionU3Ed__2_tEF353B140AF9D12C1A047EF61FC7EE32F2F226A9, ___U3CU3E4__this_5)); }
	inline MainThreadScheduler_t48B46CA8F52051759E6ED7B3E9FF42C2F9B77C17 * get_U3CU3E4__this_5() const { return ___U3CU3E4__this_5; }
	inline MainThreadScheduler_t48B46CA8F52051759E6ED7B3E9FF42C2F9B77C17 ** get_address_of_U3CU3E4__this_5() { return &___U3CU3E4__this_5; }
	inline void set_U3CU3E4__this_5(MainThreadScheduler_t48B46CA8F52051759E6ED7B3E9FF42C2F9B77C17 * value)
	{
		___U3CU3E4__this_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_5), (void*)value);
	}
};


// UniRx.Scheduler/MainThreadScheduler/<PeriodicAction>d__3
struct U3CPeriodicActionU3Ed__3_t5FDEA5BD7244B7FECAD391713DEED9B8D3877937  : public RuntimeObject
{
public:
	// System.Int32 UniRx.Scheduler/MainThreadScheduler/<PeriodicAction>d__3::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object UniRx.Scheduler/MainThreadScheduler/<PeriodicAction>d__3::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// System.TimeSpan UniRx.Scheduler/MainThreadScheduler/<PeriodicAction>d__3::period
	TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  ___period_2;
	// System.Action UniRx.Scheduler/MainThreadScheduler/<PeriodicAction>d__3::action
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___action_3;
	// UniRx.ICancelable UniRx.Scheduler/MainThreadScheduler/<PeriodicAction>d__3::cancellation
	RuntimeObject* ___cancellation_4;
	// UniRx.Scheduler/MainThreadScheduler UniRx.Scheduler/MainThreadScheduler/<PeriodicAction>d__3::<>4__this
	MainThreadScheduler_t48B46CA8F52051759E6ED7B3E9FF42C2F9B77C17 * ___U3CU3E4__this_5;
	// System.Single UniRx.Scheduler/MainThreadScheduler/<PeriodicAction>d__3::<seconds>5__1
	float ___U3CsecondsU3E5__1_6;
	// UnityEngine.WaitForSeconds UniRx.Scheduler/MainThreadScheduler/<PeriodicAction>d__3::<yieldInstruction>5__2
	WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * ___U3CyieldInstructionU3E5__2_7;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CPeriodicActionU3Ed__3_t5FDEA5BD7244B7FECAD391713DEED9B8D3877937, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CPeriodicActionU3Ed__3_t5FDEA5BD7244B7FECAD391713DEED9B8D3877937, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_period_2() { return static_cast<int32_t>(offsetof(U3CPeriodicActionU3Ed__3_t5FDEA5BD7244B7FECAD391713DEED9B8D3877937, ___period_2)); }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  get_period_2() const { return ___period_2; }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * get_address_of_period_2() { return &___period_2; }
	inline void set_period_2(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  value)
	{
		___period_2 = value;
	}

	inline static int32_t get_offset_of_action_3() { return static_cast<int32_t>(offsetof(U3CPeriodicActionU3Ed__3_t5FDEA5BD7244B7FECAD391713DEED9B8D3877937, ___action_3)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_action_3() const { return ___action_3; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_action_3() { return &___action_3; }
	inline void set_action_3(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___action_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___action_3), (void*)value);
	}

	inline static int32_t get_offset_of_cancellation_4() { return static_cast<int32_t>(offsetof(U3CPeriodicActionU3Ed__3_t5FDEA5BD7244B7FECAD391713DEED9B8D3877937, ___cancellation_4)); }
	inline RuntimeObject* get_cancellation_4() const { return ___cancellation_4; }
	inline RuntimeObject** get_address_of_cancellation_4() { return &___cancellation_4; }
	inline void set_cancellation_4(RuntimeObject* value)
	{
		___cancellation_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___cancellation_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_5() { return static_cast<int32_t>(offsetof(U3CPeriodicActionU3Ed__3_t5FDEA5BD7244B7FECAD391713DEED9B8D3877937, ___U3CU3E4__this_5)); }
	inline MainThreadScheduler_t48B46CA8F52051759E6ED7B3E9FF42C2F9B77C17 * get_U3CU3E4__this_5() const { return ___U3CU3E4__this_5; }
	inline MainThreadScheduler_t48B46CA8F52051759E6ED7B3E9FF42C2F9B77C17 ** get_address_of_U3CU3E4__this_5() { return &___U3CU3E4__this_5; }
	inline void set_U3CU3E4__this_5(MainThreadScheduler_t48B46CA8F52051759E6ED7B3E9FF42C2F9B77C17 * value)
	{
		___U3CU3E4__this_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_5), (void*)value);
	}

	inline static int32_t get_offset_of_U3CsecondsU3E5__1_6() { return static_cast<int32_t>(offsetof(U3CPeriodicActionU3Ed__3_t5FDEA5BD7244B7FECAD391713DEED9B8D3877937, ___U3CsecondsU3E5__1_6)); }
	inline float get_U3CsecondsU3E5__1_6() const { return ___U3CsecondsU3E5__1_6; }
	inline float* get_address_of_U3CsecondsU3E5__1_6() { return &___U3CsecondsU3E5__1_6; }
	inline void set_U3CsecondsU3E5__1_6(float value)
	{
		___U3CsecondsU3E5__1_6 = value;
	}

	inline static int32_t get_offset_of_U3CyieldInstructionU3E5__2_7() { return static_cast<int32_t>(offsetof(U3CPeriodicActionU3Ed__3_t5FDEA5BD7244B7FECAD391713DEED9B8D3877937, ___U3CyieldInstructionU3E5__2_7)); }
	inline WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * get_U3CyieldInstructionU3E5__2_7() const { return ___U3CyieldInstructionU3E5__2_7; }
	inline WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 ** get_address_of_U3CyieldInstructionU3E5__2_7() { return &___U3CyieldInstructionU3E5__2_7; }
	inline void set_U3CyieldInstructionU3E5__2_7(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * value)
	{
		___U3CyieldInstructionU3E5__2_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CyieldInstructionU3E5__2_7), (void*)value);
	}
};


// UniRx.Scheduler/ThreadPoolScheduler/<>c__DisplayClass3_0
struct U3CU3Ec__DisplayClass3_0_tFD324CCB796E79865D9E8E69DC9501A756294920  : public RuntimeObject
{
public:
	// UniRx.BooleanDisposable UniRx.Scheduler/ThreadPoolScheduler/<>c__DisplayClass3_0::d
	BooleanDisposable_t10CF71845F96D6A2BB117D0EAE549FA5FAB59133 * ___d_0;
	// System.TimeSpan UniRx.Scheduler/ThreadPoolScheduler/<>c__DisplayClass3_0::wait
	TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  ___wait_1;
	// System.Action UniRx.Scheduler/ThreadPoolScheduler/<>c__DisplayClass3_0::action
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___action_2;
	// System.Action UniRx.Scheduler/ThreadPoolScheduler/<>c__DisplayClass3_0::act
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___act_3;

public:
	inline static int32_t get_offset_of_d_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass3_0_tFD324CCB796E79865D9E8E69DC9501A756294920, ___d_0)); }
	inline BooleanDisposable_t10CF71845F96D6A2BB117D0EAE549FA5FAB59133 * get_d_0() const { return ___d_0; }
	inline BooleanDisposable_t10CF71845F96D6A2BB117D0EAE549FA5FAB59133 ** get_address_of_d_0() { return &___d_0; }
	inline void set_d_0(BooleanDisposable_t10CF71845F96D6A2BB117D0EAE549FA5FAB59133 * value)
	{
		___d_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___d_0), (void*)value);
	}

	inline static int32_t get_offset_of_wait_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass3_0_tFD324CCB796E79865D9E8E69DC9501A756294920, ___wait_1)); }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  get_wait_1() const { return ___wait_1; }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * get_address_of_wait_1() { return &___wait_1; }
	inline void set_wait_1(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  value)
	{
		___wait_1 = value;
	}

	inline static int32_t get_offset_of_action_2() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass3_0_tFD324CCB796E79865D9E8E69DC9501A756294920, ___action_2)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_action_2() const { return ___action_2; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_action_2() { return &___action_2; }
	inline void set_action_2(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___action_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___action_2), (void*)value);
	}

	inline static int32_t get_offset_of_act_3() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass3_0_tFD324CCB796E79865D9E8E69DC9501A756294920, ___act_3)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_act_3() const { return ___act_3; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_act_3() { return &___act_3; }
	inline void set_act_3(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___act_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___act_3), (void*)value);
	}
};


// System.Action
struct Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6  : public MulticastDelegate_t
{
public:

public:
};


// System.NotSupportedException
struct NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.IDisposable[]
struct IDisposableU5BU5D_tA118A91699805C6191EC7EC5368D525034AB6E65  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

public:
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


// System.Void UniRx.Operators.OperatorObserverBase`2<UniRx.Unit,UniRx.Unit>::.ctor(System.IObserver`1<TResult>,System.IDisposable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OperatorObserverBase_2__ctor_m4636C5A44C2B68E21C2DE49C72F4868BBD7F420C_gshared (OperatorObserverBase_2_tF243B5106EEEF4A6D04AD83F65BC8940D21D38C3 * __this, RuntimeObject* ___observer0, RuntimeObject* ___cancel1, const RuntimeMethod* method);
// System.Void UniRx.Operators.OperatorObserverBase`2<UniRx.Unit,UniRx.Unit>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OperatorObserverBase_2_Dispose_mAF4A26C3317C03F70242448015C7485111AC3F18_gshared (OperatorObserverBase_2_tF243B5106EEEF4A6D04AD83F65BC8940D21D38C3 * __this, const RuntimeMethod* method);

// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void UniRx.Operators.OperatorObserverBase`2<UniRx.Unit,UniRx.Unit>::.ctor(System.IObserver`1<TResult>,System.IDisposable)
inline void OperatorObserverBase_2__ctor_m4636C5A44C2B68E21C2DE49C72F4868BBD7F420C (OperatorObserverBase_2_tF243B5106EEEF4A6D04AD83F65BC8940D21D38C3 * __this, RuntimeObject* ___observer0, RuntimeObject* ___cancel1, const RuntimeMethod* method)
{
	((  void (*) (OperatorObserverBase_2_tF243B5106EEEF4A6D04AD83F65BC8940D21D38C3 *, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))OperatorObserverBase_2__ctor_m4636C5A44C2B68E21C2DE49C72F4868BBD7F420C_gshared)(__this, ___observer0, ___cancel1, method);
}
// UniRx.Unit UniRx.Unit::get_Default()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Unit_t11840C1173CB65892C6CF18A1D7403CA52DC358C  Unit_get_Default_mC53AF46D706716FDE4B2BDA64D5AF2A95E938681 (const RuntimeMethod* method);
// System.Void UniRx.Operators.OperatorObserverBase`2<UniRx.Unit,UniRx.Unit>::Dispose()
inline void OperatorObserverBase_2_Dispose_mAF4A26C3317C03F70242448015C7485111AC3F18 (OperatorObserverBase_2_tF243B5106EEEF4A6D04AD83F65BC8940D21D38C3 * __this, const RuntimeMethod* method)
{
	((  void (*) (OperatorObserverBase_2_tF243B5106EEEF4A6D04AD83F65BC8940D21D38C3 *, const RuntimeMethod*))OperatorObserverBase_2_Dispose_mAF4A26C3317C03F70242448015C7485111AC3F18_gshared)(__this, method);
}
// System.Void UniRx.Operators.WhenAllObservable/WhenAll_/WhenAllCollectionObserver::.ctor(UniRx.Operators.WhenAllObservable/WhenAll_)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhenAllCollectionObserver__ctor_m95C1424F1E6148E6B57966D99EA170B06C318226 (WhenAllCollectionObserver_tBE88D2F4AC06C4FA1C1FFE1A71FB1EA8A47797AE * __this, WhenAll__tDEBE0DF2586D259A8A2C260CB3324B4617E5F2FB * ___parent0, const RuntimeMethod* method);
// UniRx.ICancelable UniRx.StableCompositeDisposable::CreateUnsafe(System.IDisposable[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* StableCompositeDisposable_CreateUnsafe_mBCB7541CE148A6314AC85043A4C1515A050A793A (IDisposableU5BU5D_tA118A91699805C6191EC7EC5368D525034AB6E65* ___disposables0, const RuntimeMethod* method);
// System.Boolean UniRx.BooleanDisposable::get_IsDisposed()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool BooleanDisposable_get_IsDisposed_mC5B0CC04C1F053D39D2EF5371D04CF355DC01CE4_inline (BooleanDisposable_t10CF71845F96D6A2BB117D0EAE549FA5FAB59133 * __this, const RuntimeMethod* method);
// System.Void System.Threading.Monitor::Enter(System.Object,System.Boolean&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Enter_mBEB6CC84184B46F26375EC3FC8921D16E48EA4C4 (RuntimeObject * ___obj0, bool* ___lockTaken1, const RuntimeMethod* method);
// System.Void System.Threading.Monitor::Exit(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Exit_mA776B403DA88AC77CDEEF67AB9F0D0E77ABD254A (RuntimeObject * ___obj0, const RuntimeMethod* method);
// UniRx.InternalUtil.ScheduledItem UniRx.InternalUtil.SchedulerQueue::Dequeue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ScheduledItem_tF689AC74A0C415A20BBFC28414BDDC4A378FE9FF * SchedulerQueue_Dequeue_m581013291EBAAB108CD2F46EB173E3DBCF192BA2 (SchedulerQueue_t8B1647EB26EB6581309907A4A630BD64B27D6F43 * __this, const RuntimeMethod* method);
// System.Boolean UniRx.InternalUtil.ScheduledItem::get_IsCanceled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ScheduledItem_get_IsCanceled_m05E37A36B2714D8243572075510500AA29FBA2A4 (ScheduledItem_tF689AC74A0C415A20BBFC28414BDDC4A378FE9FF * __this, const RuntimeMethod* method);
// System.TimeSpan UniRx.InternalUtil.ScheduledItem::get_DueTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  ScheduledItem_get_DueTime_m00FBACE6022B2F12938C5FE266D8B2AA3893811E (ScheduledItem_tF689AC74A0C415A20BBFC28414BDDC4A378FE9FF * __this, const RuntimeMethod* method);
// System.TimeSpan UniRx.Scheduler/CurrentThreadScheduler::get_Time()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  CurrentThreadScheduler_get_Time_mDBA9E326AF2D956B680E7D822DD5B513D259ADEB (const RuntimeMethod* method);
// System.TimeSpan System.TimeSpan::op_Subtraction(System.TimeSpan,System.TimeSpan)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  TimeSpan_op_Subtraction_mA4ACA1A4349FA026D9F3DE12E4E1DC180832CA62 (TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  ___t10, TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  ___t21, const RuntimeMethod* method);
// System.Int64 System.TimeSpan::get_Ticks()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int64_t TimeSpan_get_Ticks_mE4C9E1F27DC794028CEDCF7CB5BD092D16DBACD4_inline (TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * __this, const RuntimeMethod* method);
// System.Void UniRx.Thread::Sleep(System.TimeSpan)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Thread_Sleep_m9E0671FBE187EBD744D829FEB443094B9C0FC9CA (TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  ___wait0, const RuntimeMethod* method);
// System.Void UniRx.InternalUtil.ScheduledItem::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScheduledItem_Invoke_m967A5297FD8340FBCA87C21BBBE4255B48950E6B (ScheduledItem_tF689AC74A0C415A20BBFC28414BDDC4A378FE9FF * __this, const RuntimeMethod* method);
// System.Int32 UniRx.InternalUtil.SchedulerQueue::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SchedulerQueue_get_Count_m15231246BA7A66A3DEF5B1822D854F5B7CCB7D7A (SchedulerQueue_t8B1647EB26EB6581309907A4A630BD64B27D6F43 * __this, const RuntimeMethod* method);
// System.Boolean System.TimeSpan::op_Equality(System.TimeSpan,System.TimeSpan)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TimeSpan_op_Equality_m8229F4B63064E2D43B244C6E82D55CB2B0360BB1 (TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  ___t10, TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  ___t21, const RuntimeMethod* method);
// System.Void UniRx.MainThreadDispatcher::UnsafeSend(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainThreadDispatcher_UnsafeSend_m2783CA883E6B0170ED958F4C1097AD74B36D90EA (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___action0, const RuntimeMethod* method);
// System.Double System.TimeSpan::get_TotalSeconds()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double TimeSpan_get_TotalSeconds_m28CDC7B9ADFEAFF912CC9B66984090CFE60B9AA4 (TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290 (const RuntimeMethod* method);
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Time::get_fixedTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_fixedTime_mE4630B2127C67597CA450A81FFDF25E63A2CC7B5 (const RuntimeMethod* method);
// System.Single UnityEngine.Time::get_unscaledDeltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_unscaledDeltaTime_m2C153F1E5C77C6AF655054BC6C76D0C334C0DC84 (const RuntimeMethod* method);
// System.Void UnityEngine.WaitForSeconds::.ctor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4 (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * __this, float ___seconds0, const RuntimeMethod* method);
// System.Double System.TimeSpan::get_TotalMilliseconds()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double TimeSpan_get_TotalMilliseconds_m97368AE0609D865EB2A6BAE96AAA97AF8BDBF1C5 (TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * __this, const RuntimeMethod* method);
// System.Void System.Action::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_Invoke_m3FFA5BE3D64F0FF8E1E1CB6F953913FADB5EB89E (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * __this, const RuntimeMethod* method);
// System.Void System.Action::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_EndInvoke_m65371CAA200D9AFFCFA40253435B5B91457D0055 (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * __this, RuntimeObject* ___result0, const RuntimeMethod* method);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UniRx.Operators.WhenAllObservable/WhenAll_::.ctor(System.Collections.Generic.IList`1<System.IObservable`1<UniRx.Unit>>,System.IObserver`1<UniRx.Unit>,System.IDisposable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhenAll___ctor_m04FE473A3A53D5DC74043D6FEC8A9DBF96F97F93 (WhenAll__tDEBE0DF2586D259A8A2C260CB3324B4617E5F2FB * __this, RuntimeObject* ___sources0, RuntimeObject* ___observer1, RuntimeObject* ___cancel2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OperatorObserverBase_2__ctor_m4636C5A44C2B68E21C2DE49C72F4868BBD7F420C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// readonly object gate = new object();
		RuntimeObject * L_0 = (RuntimeObject *)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(L_0, /*hidden argument*/NULL);
		__this->set_gate_3(L_0);
		// : base(observer, cancel)
		RuntimeObject* L_1 = ___observer1;
		RuntimeObject* L_2 = ___cancel2;
		OperatorObserverBase_2__ctor_m4636C5A44C2B68E21C2DE49C72F4868BBD7F420C(__this, L_1, L_2, /*hidden argument*/OperatorObserverBase_2__ctor_m4636C5A44C2B68E21C2DE49C72F4868BBD7F420C_RuntimeMethod_var);
		// this.sources = sources;
		RuntimeObject* L_3 = ___sources0;
		__this->set_sources_2(L_3);
		// }
		return;
	}
}
// System.IDisposable UniRx.Operators.WhenAllObservable/WhenAll_::Run()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhenAll__Run_m02F1DF590B03CCF5C86AB7BD27755DCAD452BF4D (WhenAll__tDEBE0DF2586D259A8A2C260CB3324B4617E5F2FB * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Disposable_tFB6FF3E5C049CFE0B05B25A824CED890F91DC101_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_1_t88AC82FB82D80FD8F4A65E44DC83881F611A87A3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposableU5BU5D_tA118A91699805C6191EC7EC5368D525034AB6E65_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IList_1_t46B0FF8609748833C769ADC6F5ED5387FDE2A2CF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IObservable_1_t883BCEB6344266DC69B93ABA1DFE1B14B0319775_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IObserver_1_t0E86DEA721938487772381107CECD7CFF07ACF01_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OperatorObserverBase_2_Dispose_mAF4A26C3317C03F70242448015C7485111AC3F18_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Unit_t11840C1173CB65892C6CF18A1D7403CA52DC358C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WhenAllCollectionObserver_tBE88D2F4AC06C4FA1C1FFE1A71FB1EA8A47797AE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	IDisposableU5BU5D_tA118A91699805C6191EC7EC5368D525034AB6E65* V_0 = NULL;
	bool V_1 = false;
	RuntimeObject* V_2 = NULL;
	int32_t V_3 = 0;
	RuntimeObject* V_4 = NULL;
	WhenAllCollectionObserver_tBE88D2F4AC06C4FA1C1FFE1A71FB1EA8A47797AE * V_5 = NULL;
	bool V_6 = false;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		// length = sources.Count;
		RuntimeObject* L_0 = __this->get_sources_2();
		NullCheck(L_0);
		int32_t L_1;
		L_1 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<System.IObservable`1<UniRx.Unit>>::get_Count() */, ICollection_1_t88AC82FB82D80FD8F4A65E44DC83881F611A87A3_il2cpp_TypeInfo_var, L_0);
		__this->set_length_5(L_1);
		// if (length == 0)
		int32_t L_2 = __this->get_length_5();
		V_1 = (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_0050;
		}
	}
	{
		// OnNext(Unit.Default);
		IL2CPP_RUNTIME_CLASS_INIT(Unit_t11840C1173CB65892C6CF18A1D7403CA52DC358C_il2cpp_TypeInfo_var);
		Unit_t11840C1173CB65892C6CF18A1D7403CA52DC358C  L_4;
		L_4 = Unit_get_Default_mC53AF46D706716FDE4B2BDA64D5AF2A95E938681(/*hidden argument*/NULL);
		VirtActionInvoker1< Unit_t11840C1173CB65892C6CF18A1D7403CA52DC358C  >::Invoke(8 /* System.Void UniRx.Operators.OperatorObserverBase`2<UniRx.Unit,UniRx.Unit>::OnNext(TSource) */, __this, L_4);
	}

IL_002c:
	try
	{ // begin try (depth: 1)
		// try { observer.OnCompleted(); } finally { Dispose(); }
		RuntimeObject* L_5 = ((OperatorObserverBase_2_tF243B5106EEEF4A6D04AD83F65BC8940D21D38C3 *)__this)->get_observer_0();
		il2cpp_codegen_memory_barrier();
		NullCheck(L_5);
		InterfaceActionInvoker0::Invoke(2 /* System.Void System.IObserver`1<UniRx.Unit>::OnCompleted() */, IObserver_1_t0E86DEA721938487772381107CECD7CFF07ACF01_il2cpp_TypeInfo_var, L_5);
		IL2CPP_LEAVE(0x48, FINALLY_003e);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_003e;
	}

FINALLY_003e:
	{ // begin finally (depth: 1)
		// try { observer.OnCompleted(); } finally { Dispose(); }
		OperatorObserverBase_2_Dispose_mAF4A26C3317C03F70242448015C7485111AC3F18(__this, /*hidden argument*/OperatorObserverBase_2_Dispose_mAF4A26C3317C03F70242448015C7485111AC3F18_RuntimeMethod_var);
		IL2CPP_END_FINALLY(62)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(62)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x48, IL_0048)
	}

IL_0048:
	{
		// return Disposable.Empty;
		IL2CPP_RUNTIME_CLASS_INIT(Disposable_tFB6FF3E5C049CFE0B05B25A824CED890F91DC101_il2cpp_TypeInfo_var);
		RuntimeObject* L_6 = ((Disposable_tFB6FF3E5C049CFE0B05B25A824CED890F91DC101_StaticFields*)il2cpp_codegen_static_fields_for(Disposable_tFB6FF3E5C049CFE0B05B25A824CED890F91DC101_il2cpp_TypeInfo_var))->get_Empty_0();
		V_2 = L_6;
		goto IL_00a7;
	}

IL_0050:
	{
		// completedCount = 0;
		__this->set_completedCount_4(0);
		// var subscriptions = new IDisposable[length];
		int32_t L_7 = __this->get_length_5();
		IDisposableU5BU5D_tA118A91699805C6191EC7EC5368D525034AB6E65* L_8 = (IDisposableU5BU5D_tA118A91699805C6191EC7EC5368D525034AB6E65*)(IDisposableU5BU5D_tA118A91699805C6191EC7EC5368D525034AB6E65*)SZArrayNew(IDisposableU5BU5D_tA118A91699805C6191EC7EC5368D525034AB6E65_il2cpp_TypeInfo_var, (uint32_t)L_7);
		V_0 = L_8;
		// for (int index = 0; index < length; index++)
		V_3 = 0;
		goto IL_008f;
	}

IL_0067:
	{
		// var source = sources[index];
		RuntimeObject* L_9 = __this->get_sources_2();
		int32_t L_10 = V_3;
		NullCheck(L_9);
		RuntimeObject* L_11;
		L_11 = InterfaceFuncInvoker1< RuntimeObject*, int32_t >::Invoke(0 /* !0 System.Collections.Generic.IList`1<System.IObservable`1<UniRx.Unit>>::get_Item(System.Int32) */, IList_1_t46B0FF8609748833C769ADC6F5ED5387FDE2A2CF_il2cpp_TypeInfo_var, L_9, L_10);
		V_4 = L_11;
		// var observer = new WhenAllCollectionObserver(this);
		WhenAllCollectionObserver_tBE88D2F4AC06C4FA1C1FFE1A71FB1EA8A47797AE * L_12 = (WhenAllCollectionObserver_tBE88D2F4AC06C4FA1C1FFE1A71FB1EA8A47797AE *)il2cpp_codegen_object_new(WhenAllCollectionObserver_tBE88D2F4AC06C4FA1C1FFE1A71FB1EA8A47797AE_il2cpp_TypeInfo_var);
		WhenAllCollectionObserver__ctor_m95C1424F1E6148E6B57966D99EA170B06C318226(L_12, __this, /*hidden argument*/NULL);
		V_5 = L_12;
		// subscriptions[index] = source.Subscribe(observer);
		IDisposableU5BU5D_tA118A91699805C6191EC7EC5368D525034AB6E65* L_13 = V_0;
		int32_t L_14 = V_3;
		RuntimeObject* L_15 = V_4;
		WhenAllCollectionObserver_tBE88D2F4AC06C4FA1C1FFE1A71FB1EA8A47797AE * L_16 = V_5;
		NullCheck(L_15);
		RuntimeObject* L_17;
		L_17 = InterfaceFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(0 /* System.IDisposable System.IObservable`1<UniRx.Unit>::Subscribe(System.IObserver`1<!0>) */, IObservable_1_t883BCEB6344266DC69B93ABA1DFE1B14B0319775_il2cpp_TypeInfo_var, L_15, L_16);
		NullCheck(L_13);
		ArrayElementTypeCheck (L_13, L_17);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(L_14), (RuntimeObject*)L_17);
		// for (int index = 0; index < length; index++)
		int32_t L_18 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_18, (int32_t)1));
	}

IL_008f:
	{
		// for (int index = 0; index < length; index++)
		int32_t L_19 = V_3;
		int32_t L_20 = __this->get_length_5();
		V_6 = (bool)((((int32_t)L_19) < ((int32_t)L_20))? 1 : 0);
		bool L_21 = V_6;
		if (L_21)
		{
			goto IL_0067;
		}
	}
	{
		// return StableCompositeDisposable.CreateUnsafe(subscriptions);
		IDisposableU5BU5D_tA118A91699805C6191EC7EC5368D525034AB6E65* L_22 = V_0;
		RuntimeObject* L_23;
		L_23 = StableCompositeDisposable_CreateUnsafe_mBCB7541CE148A6314AC85043A4C1515A050A793A(L_22, /*hidden argument*/NULL);
		V_2 = L_23;
		goto IL_00a7;
	}

IL_00a7:
	{
		// }
		RuntimeObject* L_24 = V_2;
		return L_24;
	}
}
// System.Void UniRx.Operators.WhenAllObservable/WhenAll_::OnNext(UniRx.Unit)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhenAll__OnNext_m2ACAE927DAAA0BB8AD6FE35AF5E9A32464BBDD8B (WhenAll__tDEBE0DF2586D259A8A2C260CB3324B4617E5F2FB * __this, Unit_t11840C1173CB65892C6CF18A1D7403CA52DC358C  ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IObserver_1_t0E86DEA721938487772381107CECD7CFF07ACF01_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// base.observer.OnNext(value);
		RuntimeObject* L_0 = ((OperatorObserverBase_2_tF243B5106EEEF4A6D04AD83F65BC8940D21D38C3 *)__this)->get_observer_0();
		il2cpp_codegen_memory_barrier();
		Unit_t11840C1173CB65892C6CF18A1D7403CA52DC358C  L_1 = ___value0;
		NullCheck(L_0);
		InterfaceActionInvoker1< Unit_t11840C1173CB65892C6CF18A1D7403CA52DC358C  >::Invoke(0 /* System.Void System.IObserver`1<UniRx.Unit>::OnNext(!0) */, IObserver_1_t0E86DEA721938487772381107CECD7CFF07ACF01_il2cpp_TypeInfo_var, L_0, L_1);
		// }
		return;
	}
}
// System.Void UniRx.Operators.WhenAllObservable/WhenAll_::OnError(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhenAll__OnError_mC7719FD87D005FF929FC39FA173B6540C967C87E (WhenAll__tDEBE0DF2586D259A8A2C260CB3324B4617E5F2FB * __this, Exception_t * ___error0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IObserver_1_t0E86DEA721938487772381107CECD7CFF07ACF01_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OperatorObserverBase_2_Dispose_mAF4A26C3317C03F70242448015C7485111AC3F18_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
	}

IL_0001:
	try
	{ // begin try (depth: 1)
		// try { observer.OnError(error); } finally { Dispose(); }
		RuntimeObject* L_0 = ((OperatorObserverBase_2_tF243B5106EEEF4A6D04AD83F65BC8940D21D38C3 *)__this)->get_observer_0();
		il2cpp_codegen_memory_barrier();
		Exception_t * L_1 = ___error0;
		NullCheck(L_0);
		InterfaceActionInvoker1< Exception_t * >::Invoke(1 /* System.Void System.IObserver`1<UniRx.Unit>::OnError(System.Exception) */, IObserver_1_t0E86DEA721938487772381107CECD7CFF07ACF01_il2cpp_TypeInfo_var, L_0, L_1);
		IL2CPP_LEAVE(0x1E, FINALLY_0014);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0014;
	}

FINALLY_0014:
	{ // begin finally (depth: 1)
		// try { observer.OnError(error); } finally { Dispose(); }
		OperatorObserverBase_2_Dispose_mAF4A26C3317C03F70242448015C7485111AC3F18(__this, /*hidden argument*/OperatorObserverBase_2_Dispose_mAF4A26C3317C03F70242448015C7485111AC3F18_RuntimeMethod_var);
		IL2CPP_END_FINALLY(20)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(20)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x1E, IL_001e)
	}

IL_001e:
	{
		// }
		return;
	}
}
// System.Void UniRx.Operators.WhenAllObservable/WhenAll_::OnCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhenAll__OnCompleted_m99091AC4E0CFD2C49B09DB756F8E15025F4B9230 (WhenAll__tDEBE0DF2586D259A8A2C260CB3324B4617E5F2FB * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IObserver_1_t0E86DEA721938487772381107CECD7CFF07ACF01_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OperatorObserverBase_2_Dispose_mAF4A26C3317C03F70242448015C7485111AC3F18_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
	}

IL_0001:
	try
	{ // begin try (depth: 1)
		// try { observer.OnCompleted(); } finally { Dispose(); }
		RuntimeObject* L_0 = ((OperatorObserverBase_2_tF243B5106EEEF4A6D04AD83F65BC8940D21D38C3 *)__this)->get_observer_0();
		il2cpp_codegen_memory_barrier();
		NullCheck(L_0);
		InterfaceActionInvoker0::Invoke(2 /* System.Void System.IObserver`1<UniRx.Unit>::OnCompleted() */, IObserver_1_t0E86DEA721938487772381107CECD7CFF07ACF01_il2cpp_TypeInfo_var, L_0);
		IL2CPP_LEAVE(0x1D, FINALLY_0013);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0013;
	}

FINALLY_0013:
	{ // begin finally (depth: 1)
		// try { observer.OnCompleted(); } finally { Dispose(); }
		OperatorObserverBase_2_Dispose_mAF4A26C3317C03F70242448015C7485111AC3F18(__this, /*hidden argument*/OperatorObserverBase_2_Dispose_mAF4A26C3317C03F70242448015C7485111AC3F18_RuntimeMethod_var);
		IL2CPP_END_FINALLY(19)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(19)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x1D, IL_001d)
	}

IL_001d:
	{
		// }
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
// System.Void UniRx.Operators.BatchFrameObservable/BatchFrame/ReusableEnumerator::.ctor(UniRx.Operators.BatchFrameObservable/BatchFrame)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReusableEnumerator__ctor_m690773CDE6D171693A8690103123737C4F181272 (ReusableEnumerator_tBA97020AED04790E9DC409DA88F47E7C29AAD761 * __this, BatchFrame_tB884C0ACDFA0D6311BD4D426427E060144AACD40 * ___parent0, const RuntimeMethod* method)
{
	{
		// public ReusableEnumerator(BatchFrame parent)
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// this.parent = parent;
		BatchFrame_tB884C0ACDFA0D6311BD4D426427E060144AACD40 * L_0 = ___parent0;
		__this->set_parent_0(L_0);
		// }
		return;
	}
}
// System.Object UniRx.Operators.BatchFrameObservable/BatchFrame/ReusableEnumerator::get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * ReusableEnumerator_get_Current_m8B9E43856B7D4ED0FAC6983C01824EBF4275002A (ReusableEnumerator_tBA97020AED04790E9DC409DA88F47E7C29AAD761 * __this, const RuntimeMethod* method)
{
	RuntimeObject * V_0 = NULL;
	{
		// get { return null; }
		V_0 = NULL;
		goto IL_0005;
	}

IL_0005:
	{
		// get { return null; }
		RuntimeObject * L_0 = V_0;
		return L_0;
	}
}
// System.Boolean UniRx.Operators.BatchFrameObservable/BatchFrame/ReusableEnumerator::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReusableEnumerator_MoveNext_mFDFFF06FFE655201E6845C3C9D2553835DC814E2 (ReusableEnumerator_tBA97020AED04790E9DC409DA88F47E7C29AAD761 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IObserver_1_t0E86DEA721938487772381107CECD7CFF07ACF01_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Unit_t11840C1173CB65892C6CF18A1D7403CA52DC358C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	RuntimeObject * V_2 = NULL;
	bool V_3 = false;
	bool V_4 = false;
	int32_t V_5 = 0;
	bool V_6 = false;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 3> __leave_targets;
	{
		// if (parent.cancellationToken.IsDisposed) return false;
		BatchFrame_tB884C0ACDFA0D6311BD4D426427E060144AACD40 * L_0 = __this->get_parent_0();
		NullCheck(L_0);
		BooleanDisposable_t10CF71845F96D6A2BB117D0EAE549FA5FAB59133 * L_1 = L_0->get_cancellationToken_4();
		NullCheck(L_1);
		bool L_2;
		L_2 = BooleanDisposable_get_IsDisposed_mC5B0CC04C1F053D39D2EF5371D04CF355DC01CE4_inline(L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_001c;
		}
	}
	{
		// if (parent.cancellationToken.IsDisposed) return false;
		V_1 = (bool)0;
		goto IL_00b4;
	}

IL_001c:
	{
		// lock (parent.gate)
		BatchFrame_tB884C0ACDFA0D6311BD4D426427E060144AACD40 * L_4 = __this->get_parent_0();
		NullCheck(L_4);
		RuntimeObject * L_5 = L_4->get_gate_3();
		V_2 = L_5;
		V_3 = (bool)0;
	}

IL_002a:
	try
	{ // begin try (depth: 1)
		{
			RuntimeObject * L_6 = V_2;
			Monitor_Enter_mBEB6CC84184B46F26375EC3FC8921D16E48EA4C4(L_6, (bool*)(&V_3), /*hidden argument*/NULL);
			// if (currentFrame++ == parent.parent.frameCount)
			int32_t L_7 = __this->get_currentFrame_1();
			V_5 = L_7;
			int32_t L_8 = V_5;
			__this->set_currentFrame_1(((int32_t)il2cpp_codegen_add((int32_t)L_8, (int32_t)1)));
			int32_t L_9 = V_5;
			BatchFrame_tB884C0ACDFA0D6311BD4D426427E060144AACD40 * L_10 = __this->get_parent_0();
			NullCheck(L_10);
			BatchFrameObservable_t43F89468D0E33146387B08F283B9229FDB32518A * L_11 = L_10->get_parent_2();
			NullCheck(L_11);
			int32_t L_12 = L_11->get_frameCount_2();
			V_4 = (bool)((((int32_t)L_9) == ((int32_t)L_12))? 1 : 0);
			bool L_13 = V_4;
			if (!L_13)
			{
				goto IL_0085;
			}
		}

IL_0060:
		{
			// if (parent.isCompleted) return false;
			BatchFrame_tB884C0ACDFA0D6311BD4D426427E060144AACD40 * L_14 = __this->get_parent_0();
			NullCheck(L_14);
			bool L_15 = L_14->get_isCompleted_7();
			V_6 = L_15;
			bool L_16 = V_6;
			if (!L_16)
			{
				goto IL_0076;
			}
		}

IL_0072:
		{
			// if (parent.isCompleted) return false;
			V_1 = (bool)0;
			IL2CPP_LEAVE(0xB4, FINALLY_008d);
		}

IL_0076:
		{
			// parent.isRunning = false;
			BatchFrame_tB884C0ACDFA0D6311BD4D426427E060144AACD40 * L_17 = __this->get_parent_0();
			NullCheck(L_17);
			L_17->set_isRunning_6((bool)0);
			goto IL_008a;
		}

IL_0085:
		{
			// return true;
			V_1 = (bool)1;
			IL2CPP_LEAVE(0xB4, FINALLY_008d);
		}

IL_008a:
		{
			IL2CPP_LEAVE(0x98, FINALLY_008d);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_008d;
	}

FINALLY_008d:
	{ // begin finally (depth: 1)
		{
			bool L_18 = V_3;
			if (!L_18)
			{
				goto IL_0097;
			}
		}

IL_0090:
		{
			RuntimeObject * L_19 = V_2;
			Monitor_Exit_mA776B403DA88AC77CDEEF67AB9F0D0E77ABD254A(L_19, /*hidden argument*/NULL);
		}

IL_0097:
		{
			IL2CPP_END_FINALLY(141)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(141)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0xB4, IL_00b4)
		IL2CPP_JUMP_TBL(0x98, IL_0098)
	}

IL_0098:
	{
		// parent.observer.OnNext(Unit.Default);
		BatchFrame_tB884C0ACDFA0D6311BD4D426427E060144AACD40 * L_20 = __this->get_parent_0();
		NullCheck(L_20);
		RuntimeObject* L_21 = ((OperatorObserverBase_2_tF243B5106EEEF4A6D04AD83F65BC8940D21D38C3 *)L_20)->get_observer_0();
		il2cpp_codegen_memory_barrier();
		IL2CPP_RUNTIME_CLASS_INIT(Unit_t11840C1173CB65892C6CF18A1D7403CA52DC358C_il2cpp_TypeInfo_var);
		Unit_t11840C1173CB65892C6CF18A1D7403CA52DC358C  L_22;
		L_22 = Unit_get_Default_mC53AF46D706716FDE4B2BDA64D5AF2A95E938681(/*hidden argument*/NULL);
		NullCheck(L_21);
		InterfaceActionInvoker1< Unit_t11840C1173CB65892C6CF18A1D7403CA52DC358C  >::Invoke(0 /* System.Void System.IObserver`1<UniRx.Unit>::OnNext(!0) */, IObserver_1_t0E86DEA721938487772381107CECD7CFF07ACF01_il2cpp_TypeInfo_var, L_21, L_22);
		// return false;
		V_1 = (bool)0;
		goto IL_00b4;
	}

IL_00b4:
	{
		// }
		bool L_23 = V_1;
		return L_23;
	}
}
// System.Void UniRx.Operators.BatchFrameObservable/BatchFrame/ReusableEnumerator::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReusableEnumerator_Reset_m9C0E236C165B40C8809C245D2658AB99022403D6 (ReusableEnumerator_tBA97020AED04790E9DC409DA88F47E7C29AAD761 * __this, const RuntimeMethod* method)
{
	{
		// currentFrame = 0;
		__this->set_currentFrame_1(0);
		// }
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
// System.Void UniRx.Scheduler/CurrentThreadScheduler/Trampoline::Run(UniRx.InternalUtil.SchedulerQueue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Trampoline_Run_mE1B9308B79239FD30BC282F142B75A4DDE5CA84D (SchedulerQueue_t8B1647EB26EB6581309907A4A630BD64B27D6F43 * ___queue0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ScheduledItem_tF689AC74A0C415A20BBFC28414BDDC4A378FE9FF * V_0 = NULL;
	bool V_1 = false;
	TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  V_2;
	memset((&V_2), 0, sizeof(V_2));
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	{
		goto IL_005a;
	}

IL_0003:
	{
		// var item = queue.Dequeue();
		SchedulerQueue_t8B1647EB26EB6581309907A4A630BD64B27D6F43 * L_0 = ___queue0;
		NullCheck(L_0);
		ScheduledItem_tF689AC74A0C415A20BBFC28414BDDC4A378FE9FF * L_1;
		L_1 = SchedulerQueue_Dequeue_m581013291EBAAB108CD2F46EB173E3DBCF192BA2(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		// if (!item.IsCanceled)
		ScheduledItem_tF689AC74A0C415A20BBFC28414BDDC4A378FE9FF * L_2 = V_0;
		NullCheck(L_2);
		bool L_3;
		L_3 = ScheduledItem_get_IsCanceled_m05E37A36B2714D8243572075510500AA29FBA2A4(L_2, /*hidden argument*/NULL);
		V_1 = (bool)((((int32_t)L_3) == ((int32_t)0))? 1 : 0);
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_0059;
		}
	}
	{
		// var wait = item.DueTime - CurrentThreadScheduler.Time;
		ScheduledItem_tF689AC74A0C415A20BBFC28414BDDC4A378FE9FF * L_5 = V_0;
		NullCheck(L_5);
		TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  L_6;
		L_6 = ScheduledItem_get_DueTime_m00FBACE6022B2F12938C5FE266D8B2AA3893811E(L_5, /*hidden argument*/NULL);
		TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  L_7;
		L_7 = CurrentThreadScheduler_get_Time_mDBA9E326AF2D956B680E7D822DD5B513D259ADEB(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_il2cpp_TypeInfo_var);
		TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  L_8;
		L_8 = TimeSpan_op_Subtraction_mA4ACA1A4349FA026D9F3DE12E4E1DC180832CA62(L_6, L_7, /*hidden argument*/NULL);
		V_2 = L_8;
		// if (wait.Ticks > 0)
		int64_t L_9;
		L_9 = TimeSpan_get_Ticks_mE4C9E1F27DC794028CEDCF7CB5BD092D16DBACD4_inline((TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 *)(&V_2), /*hidden argument*/NULL);
		V_3 = (bool)((((int64_t)L_9) > ((int64_t)((int64_t)((int64_t)0))))? 1 : 0);
		bool L_10 = V_3;
		if (!L_10)
		{
			goto IL_0042;
		}
	}
	{
		// Thread.Sleep(wait);
		TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  L_11 = V_2;
		Thread_Sleep_m9E0671FBE187EBD744D829FEB443094B9C0FC9CA(L_11, /*hidden argument*/NULL);
	}

IL_0042:
	{
		// if (!item.IsCanceled)
		ScheduledItem_tF689AC74A0C415A20BBFC28414BDDC4A378FE9FF * L_12 = V_0;
		NullCheck(L_12);
		bool L_13;
		L_13 = ScheduledItem_get_IsCanceled_m05E37A36B2714D8243572075510500AA29FBA2A4(L_12, /*hidden argument*/NULL);
		V_4 = (bool)((((int32_t)L_13) == ((int32_t)0))? 1 : 0);
		bool L_14 = V_4;
		if (!L_14)
		{
			goto IL_0058;
		}
	}
	{
		// item.Invoke();
		ScheduledItem_tF689AC74A0C415A20BBFC28414BDDC4A378FE9FF * L_15 = V_0;
		NullCheck(L_15);
		ScheduledItem_Invoke_m967A5297FD8340FBCA87C21BBBE4255B48950E6B(L_15, /*hidden argument*/NULL);
	}

IL_0058:
	{
	}

IL_0059:
	{
	}

IL_005a:
	{
		// while (queue.Count > 0)
		SchedulerQueue_t8B1647EB26EB6581309907A4A630BD64B27D6F43 * L_16 = ___queue0;
		NullCheck(L_16);
		int32_t L_17;
		L_17 = SchedulerQueue_get_Count_m15231246BA7A66A3DEF5B1822D854F5B7CCB7D7A(L_16, /*hidden argument*/NULL);
		V_5 = (bool)((((int32_t)L_17) > ((int32_t)0))? 1 : 0);
		bool L_18 = V_5;
		if (L_18)
		{
			goto IL_0003;
		}
	}
	{
		// }
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
// System.Void UniRx.Scheduler/EndOfFrameMainThreadScheduler/<DelayAction>d__2::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDelayActionU3Ed__2__ctor_mDEB9DC0136608347A61D9E63F82DE6BCBCEF63D6 (U3CDelayActionU3Ed__2_tA52D340360C574B310D8BB83B8784ED616BF7DAF * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void UniRx.Scheduler/EndOfFrameMainThreadScheduler/<DelayAction>d__2::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDelayActionU3Ed__2_System_IDisposable_Dispose_m5A6D93A467F803A8D51EEC59BCDE61C17CD6D08A (U3CDelayActionU3Ed__2_tA52D340360C574B310D8BB83B8784ED616BF7DAF * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean UniRx.Scheduler/EndOfFrameMainThreadScheduler/<DelayAction>d__2::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CDelayActionU3Ed__2_MoveNext_m7D1D80EBAD2D4561E48444E90B2262EE6583F0A3 (U3CDelayActionU3Ed__2_tA52D340360C574B310D8BB83B8784ED616BF7DAF * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICancelable_t17CBA667BF856A6EA2591122CE89C2105AE8B871_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MainThreadDispatcher_t2FAB1FD77FC682D33CF5764698C0589FD9C918A7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		int32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_001b;
			}
			case 1:
			{
				goto IL_001d;
			}
			case 2:
			{
				goto IL_001f;
			}
		}
	}
	{
		goto IL_0024;
	}

IL_001b:
	{
		goto IL_0026;
	}

IL_001d:
	{
		goto IL_0053;
	}

IL_001f:
	{
		goto IL_00ae;
	}

IL_0024:
	{
		return (bool)0;
	}

IL_0026:
	{
		__this->set_U3CU3E1__state_0((-1));
		// if (dueTime == TimeSpan.Zero)
		TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  L_2 = __this->get_dueTime_2();
		IL2CPP_RUNTIME_CLASS_INIT(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_il2cpp_TypeInfo_var);
		TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  L_3 = ((TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields*)il2cpp_codegen_static_fields_for(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_il2cpp_TypeInfo_var))->get_Zero_19();
		bool L_4;
		L_4 = TimeSpan_op_Equality_m8229F4B63064E2D43B244C6E82D55CB2B0360BB1(L_2, L_3, /*hidden argument*/NULL);
		V_1 = L_4;
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_007d;
		}
	}
	{
		// yield return null;
		__this->set_U3CU3E2__current_1(NULL);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0053:
	{
		__this->set_U3CU3E1__state_0((-1));
		// if (cancellation.IsDisposed) yield break;
		RuntimeObject* L_6 = __this->get_cancellation_4();
		NullCheck(L_6);
		bool L_7;
		L_7 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean UniRx.ICancelable::get_IsDisposed() */, ICancelable_t17CBA667BF856A6EA2591122CE89C2105AE8B871_il2cpp_TypeInfo_var, L_6);
		V_2 = L_7;
		bool L_8 = V_2;
		if (!L_8)
		{
			goto IL_006b;
		}
	}
	{
		// if (cancellation.IsDisposed) yield break;
		return (bool)0;
	}

IL_006b:
	{
		// MainThreadDispatcher.UnsafeSend(action);
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_9 = __this->get_action_3();
		IL2CPP_RUNTIME_CLASS_INIT(MainThreadDispatcher_t2FAB1FD77FC682D33CF5764698C0589FD9C918A7_il2cpp_TypeInfo_var);
		MainThreadDispatcher_UnsafeSend_m2783CA883E6B0170ED958F4C1097AD74B36D90EA(L_9, /*hidden argument*/NULL);
		goto IL_0105;
	}

IL_007d:
	{
		// var elapsed = 0f;
		__this->set_U3CelapsedU3E5__1_6((0.0f));
		// var dt = (float)dueTime.TotalSeconds;
		TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * L_10 = __this->get_address_of_dueTime_2();
		double L_11;
		L_11 = TimeSpan_get_TotalSeconds_m28CDC7B9ADFEAFF912CC9B66984090CFE60B9AA4((TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 *)L_10, /*hidden argument*/NULL);
		__this->set_U3CdtU3E5__2_7(((float)((float)L_11)));
		goto IL_00ff;
	}

IL_009d:
	{
		// yield return null;
		__this->set_U3CU3E2__current_1(NULL);
		__this->set_U3CU3E1__state_0(2);
		return (bool)1;
	}

IL_00ae:
	{
		__this->set_U3CU3E1__state_0((-1));
		// if (cancellation.IsDisposed) break;
		RuntimeObject* L_12 = __this->get_cancellation_4();
		NullCheck(L_12);
		bool L_13;
		L_13 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean UniRx.ICancelable::get_IsDisposed() */, ICancelable_t17CBA667BF856A6EA2591122CE89C2105AE8B871_il2cpp_TypeInfo_var, L_12);
		V_3 = L_13;
		bool L_14 = V_3;
		if (!L_14)
		{
			goto IL_00c6;
		}
	}
	{
		// if (cancellation.IsDisposed) break;
		goto IL_0104;
	}

IL_00c6:
	{
		// elapsed += Time.deltaTime;
		float L_15 = __this->get_U3CelapsedU3E5__1_6();
		float L_16;
		L_16 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		__this->set_U3CelapsedU3E5__1_6(((float)il2cpp_codegen_add((float)L_15, (float)L_16)));
		// if (elapsed >= dt)
		float L_17 = __this->get_U3CelapsedU3E5__1_6();
		float L_18 = __this->get_U3CdtU3E5__2_7();
		V_4 = (bool)((((int32_t)((!(((float)L_17) >= ((float)L_18)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_19 = V_4;
		if (!L_19)
		{
			goto IL_00fe;
		}
	}
	{
		// MainThreadDispatcher.UnsafeSend(action);
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_20 = __this->get_action_3();
		IL2CPP_RUNTIME_CLASS_INIT(MainThreadDispatcher_t2FAB1FD77FC682D33CF5764698C0589FD9C918A7_il2cpp_TypeInfo_var);
		MainThreadDispatcher_UnsafeSend_m2783CA883E6B0170ED958F4C1097AD74B36D90EA(L_20, /*hidden argument*/NULL);
		// break;
		goto IL_0104;
	}

IL_00fe:
	{
	}

IL_00ff:
	{
		// while (true)
		V_5 = (bool)1;
		goto IL_009d;
	}

IL_0104:
	{
	}

IL_0105:
	{
		// }
		return (bool)0;
	}
}
// System.Object UniRx.Scheduler/EndOfFrameMainThreadScheduler/<DelayAction>d__2::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CDelayActionU3Ed__2_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m047143667408C947E269B5867E908493880BCA13 (U3CDelayActionU3Ed__2_tA52D340360C574B310D8BB83B8784ED616BF7DAF * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void UniRx.Scheduler/EndOfFrameMainThreadScheduler/<DelayAction>d__2::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDelayActionU3Ed__2_System_Collections_IEnumerator_Reset_m17424992A0D0E715151AC1C187EB100AFA52957A (U3CDelayActionU3Ed__2_tA52D340360C574B310D8BB83B8784ED616BF7DAF * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CDelayActionU3Ed__2_System_Collections_IEnumerator_Reset_m17424992A0D0E715151AC1C187EB100AFA52957A_RuntimeMethod_var)));
	}
}
// System.Object UniRx.Scheduler/EndOfFrameMainThreadScheduler/<DelayAction>d__2::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CDelayActionU3Ed__2_System_Collections_IEnumerator_get_Current_m9FB439E7D7D91FB1BAADE73A6066B81DEE7E4942 (U3CDelayActionU3Ed__2_tA52D340360C574B310D8BB83B8784ED616BF7DAF * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
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
// System.Void UniRx.Scheduler/EndOfFrameMainThreadScheduler/<PeriodicAction>d__3::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CPeriodicActionU3Ed__3__ctor_mABB2C7CCC99688C54D320BBA38911D9474ED465A (U3CPeriodicActionU3Ed__3_tBA2C32A76692E04CF535F08F5D8EEC8A9CFA58CA * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void UniRx.Scheduler/EndOfFrameMainThreadScheduler/<PeriodicAction>d__3::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CPeriodicActionU3Ed__3_System_IDisposable_Dispose_mAEAD5345643EBA0888872A24F12EC404CD3F0B7E (U3CPeriodicActionU3Ed__3_tBA2C32A76692E04CF535F08F5D8EEC8A9CFA58CA * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean UniRx.Scheduler/EndOfFrameMainThreadScheduler/<PeriodicAction>d__3::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CPeriodicActionU3Ed__3_MoveNext_m9CD2A565535DB5FD63C27C6698C3178F3053B902 (U3CPeriodicActionU3Ed__3_tBA2C32A76692E04CF535F08F5D8EEC8A9CFA58CA * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICancelable_t17CBA667BF856A6EA2591122CE89C2105AE8B871_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MainThreadDispatcher_t2FAB1FD77FC682D33CF5764698C0589FD9C918A7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		int32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_001b;
			}
			case 1:
			{
				goto IL_001d;
			}
			case 2:
			{
				goto IL_001f;
			}
		}
	}
	{
		goto IL_0024;
	}

IL_001b:
	{
		goto IL_0026;
	}

IL_001d:
	{
		goto IL_0056;
	}

IL_001f:
	{
		goto IL_00b0;
	}

IL_0024:
	{
		return (bool)0;
	}

IL_0026:
	{
		__this->set_U3CU3E1__state_0((-1));
		// if (period == TimeSpan.Zero)
		TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  L_2 = __this->get_period_2();
		IL2CPP_RUNTIME_CLASS_INIT(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_il2cpp_TypeInfo_var);
		TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  L_3 = ((TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields*)il2cpp_codegen_static_fields_for(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_il2cpp_TypeInfo_var))->get_Zero_19();
		bool L_4;
		L_4 = TimeSpan_op_Equality_m8229F4B63064E2D43B244C6E82D55CB2B0360BB1(L_2, L_3, /*hidden argument*/NULL);
		V_1 = L_4;
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_007f;
		}
	}
	{
		goto IL_007b;
	}

IL_0045:
	{
		// yield return null;
		__this->set_U3CU3E2__current_1(NULL);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0056:
	{
		__this->set_U3CU3E1__state_0((-1));
		// if (cancellation.IsDisposed) yield break;
		RuntimeObject* L_6 = __this->get_cancellation_4();
		NullCheck(L_6);
		bool L_7;
		L_7 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean UniRx.ICancelable::get_IsDisposed() */, ICancelable_t17CBA667BF856A6EA2591122CE89C2105AE8B871_il2cpp_TypeInfo_var, L_6);
		V_2 = L_7;
		bool L_8 = V_2;
		if (!L_8)
		{
			goto IL_006e;
		}
	}
	{
		// if (cancellation.IsDisposed) yield break;
		return (bool)0;
	}

IL_006e:
	{
		// MainThreadDispatcher.UnsafeSend(action);
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_9 = __this->get_action_3();
		IL2CPP_RUNTIME_CLASS_INIT(MainThreadDispatcher_t2FAB1FD77FC682D33CF5764698C0589FD9C918A7_il2cpp_TypeInfo_var);
		MainThreadDispatcher_UnsafeSend_m2783CA883E6B0170ED958F4C1097AD74B36D90EA(L_9, /*hidden argument*/NULL);
	}

IL_007b:
	{
		// while (true)
		V_3 = (bool)1;
		goto IL_0045;
	}

IL_007f:
	{
		// var elapsed = 0f;
		__this->set_U3CelapsedU3E5__1_6((0.0f));
		// var dt = (float)period.TotalSeconds;
		TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * L_10 = __this->get_address_of_period_2();
		double L_11;
		L_11 = TimeSpan_get_TotalSeconds_m28CDC7B9ADFEAFF912CC9B66984090CFE60B9AA4((TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 *)L_10, /*hidden argument*/NULL);
		__this->set_U3CdtU3E5__2_7(((float)((float)L_11)));
		goto IL_010d;
	}

IL_009f:
	{
		// yield return null;
		__this->set_U3CU3E2__current_1(NULL);
		__this->set_U3CU3E1__state_0(2);
		return (bool)1;
	}

IL_00b0:
	{
		__this->set_U3CU3E1__state_0((-1));
		// if (cancellation.IsDisposed) break;
		RuntimeObject* L_12 = __this->get_cancellation_4();
		NullCheck(L_12);
		bool L_13;
		L_13 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean UniRx.ICancelable::get_IsDisposed() */, ICancelable_t17CBA667BF856A6EA2591122CE89C2105AE8B871_il2cpp_TypeInfo_var, L_12);
		V_4 = L_13;
		bool L_14 = V_4;
		if (!L_14)
		{
			goto IL_00ca;
		}
	}
	{
		// if (cancellation.IsDisposed) break;
		goto IL_0112;
	}

IL_00ca:
	{
		// elapsed += Time.deltaTime;
		float L_15 = __this->get_U3CelapsedU3E5__1_6();
		float L_16;
		L_16 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		__this->set_U3CelapsedU3E5__1_6(((float)il2cpp_codegen_add((float)L_15, (float)L_16)));
		// if (elapsed >= dt)
		float L_17 = __this->get_U3CelapsedU3E5__1_6();
		float L_18 = __this->get_U3CdtU3E5__2_7();
		V_5 = (bool)((((int32_t)((!(((float)L_17) >= ((float)L_18)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_19 = V_5;
		if (!L_19)
		{
			goto IL_010c;
		}
	}
	{
		// MainThreadDispatcher.UnsafeSend(action);
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_20 = __this->get_action_3();
		IL2CPP_RUNTIME_CLASS_INIT(MainThreadDispatcher_t2FAB1FD77FC682D33CF5764698C0589FD9C918A7_il2cpp_TypeInfo_var);
		MainThreadDispatcher_UnsafeSend_m2783CA883E6B0170ED958F4C1097AD74B36D90EA(L_20, /*hidden argument*/NULL);
		// elapsed = 0;
		__this->set_U3CelapsedU3E5__1_6((0.0f));
	}

IL_010c:
	{
	}

IL_010d:
	{
		// while (true)
		V_6 = (bool)1;
		goto IL_009f;
	}

IL_0112:
	{
		// }
		return (bool)0;
	}
}
// System.Object UniRx.Scheduler/EndOfFrameMainThreadScheduler/<PeriodicAction>d__3::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CPeriodicActionU3Ed__3_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mC88847CF5DA4F2EA7DE89EBCFC70430D64543600 (U3CPeriodicActionU3Ed__3_tBA2C32A76692E04CF535F08F5D8EEC8A9CFA58CA * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void UniRx.Scheduler/EndOfFrameMainThreadScheduler/<PeriodicAction>d__3::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CPeriodicActionU3Ed__3_System_Collections_IEnumerator_Reset_mBA6CA60DF837827E275A40393ECD518BB604EEA2 (U3CPeriodicActionU3Ed__3_tBA2C32A76692E04CF535F08F5D8EEC8A9CFA58CA * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CPeriodicActionU3Ed__3_System_Collections_IEnumerator_Reset_mBA6CA60DF837827E275A40393ECD518BB604EEA2_RuntimeMethod_var)));
	}
}
// System.Object UniRx.Scheduler/EndOfFrameMainThreadScheduler/<PeriodicAction>d__3::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CPeriodicActionU3Ed__3_System_Collections_IEnumerator_get_Current_m18EAA03033FE77C880C13D9607D263810E7466C7 (U3CPeriodicActionU3Ed__3_tBA2C32A76692E04CF535F08F5D8EEC8A9CFA58CA * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
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
// System.Void UniRx.Scheduler/FixedUpdateMainThreadScheduler/<DelayAction>d__2::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDelayActionU3Ed__2__ctor_m24C54CFFD8E88A5772E8D45C52C5506BD13AAE4D (U3CDelayActionU3Ed__2_tF6BFFB8F5C3BA4D6B330E6B0B07B0FCABF91ADCC * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void UniRx.Scheduler/FixedUpdateMainThreadScheduler/<DelayAction>d__2::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDelayActionU3Ed__2_System_IDisposable_Dispose_m1AA688D02B403A07305D6AC03907E85170A0E192 (U3CDelayActionU3Ed__2_tF6BFFB8F5C3BA4D6B330E6B0B07B0FCABF91ADCC * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean UniRx.Scheduler/FixedUpdateMainThreadScheduler/<DelayAction>d__2::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CDelayActionU3Ed__2_MoveNext_mE319E6125163484F86EA5A70E71446486478CF4B (U3CDelayActionU3Ed__2_tF6BFFB8F5C3BA4D6B330E6B0B07B0FCABF91ADCC * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICancelable_t17CBA667BF856A6EA2591122CE89C2105AE8B871_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MainThreadDispatcher_t2FAB1FD77FC682D33CF5764698C0589FD9C918A7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		int32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_001b;
			}
			case 1:
			{
				goto IL_001d;
			}
			case 2:
			{
				goto IL_001f;
			}
		}
	}
	{
		goto IL_0024;
	}

IL_001b:
	{
		goto IL_0026;
	}

IL_001d:
	{
		goto IL_0053;
	}

IL_001f:
	{
		goto IL_00ae;
	}

IL_0024:
	{
		return (bool)0;
	}

IL_0026:
	{
		__this->set_U3CU3E1__state_0((-1));
		// if (dueTime == TimeSpan.Zero)
		TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  L_2 = __this->get_dueTime_2();
		IL2CPP_RUNTIME_CLASS_INIT(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_il2cpp_TypeInfo_var);
		TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  L_3 = ((TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields*)il2cpp_codegen_static_fields_for(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_il2cpp_TypeInfo_var))->get_Zero_19();
		bool L_4;
		L_4 = TimeSpan_op_Equality_m8229F4B63064E2D43B244C6E82D55CB2B0360BB1(L_2, L_3, /*hidden argument*/NULL);
		V_1 = L_4;
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_007d;
		}
	}
	{
		// yield return null;
		__this->set_U3CU3E2__current_1(NULL);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0053:
	{
		__this->set_U3CU3E1__state_0((-1));
		// if (cancellation.IsDisposed) yield break;
		RuntimeObject* L_6 = __this->get_cancellation_4();
		NullCheck(L_6);
		bool L_7;
		L_7 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean UniRx.ICancelable::get_IsDisposed() */, ICancelable_t17CBA667BF856A6EA2591122CE89C2105AE8B871_il2cpp_TypeInfo_var, L_6);
		V_2 = L_7;
		bool L_8 = V_2;
		if (!L_8)
		{
			goto IL_006b;
		}
	}
	{
		// if (cancellation.IsDisposed) yield break;
		return (bool)0;
	}

IL_006b:
	{
		// MainThreadDispatcher.UnsafeSend(action);
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_9 = __this->get_action_3();
		IL2CPP_RUNTIME_CLASS_INIT(MainThreadDispatcher_t2FAB1FD77FC682D33CF5764698C0589FD9C918A7_il2cpp_TypeInfo_var);
		MainThreadDispatcher_UnsafeSend_m2783CA883E6B0170ED958F4C1097AD74B36D90EA(L_9, /*hidden argument*/NULL);
		goto IL_0105;
	}

IL_007d:
	{
		// var startTime = Time.fixedTime;
		float L_10;
		L_10 = Time_get_fixedTime_mE4630B2127C67597CA450A81FFDF25E63A2CC7B5(/*hidden argument*/NULL);
		__this->set_U3CstartTimeU3E5__1_6(L_10);
		// var dt = (float)dueTime.TotalSeconds;
		TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * L_11 = __this->get_address_of_dueTime_2();
		double L_12;
		L_12 = TimeSpan_get_TotalSeconds_m28CDC7B9ADFEAFF912CC9B66984090CFE60B9AA4((TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 *)L_11, /*hidden argument*/NULL);
		__this->set_U3CdtU3E5__2_7(((float)((float)L_12)));
		goto IL_00ff;
	}

IL_009d:
	{
		// yield return null;
		__this->set_U3CU3E2__current_1(NULL);
		__this->set_U3CU3E1__state_0(2);
		return (bool)1;
	}

IL_00ae:
	{
		__this->set_U3CU3E1__state_0((-1));
		// if (cancellation.IsDisposed) break;
		RuntimeObject* L_13 = __this->get_cancellation_4();
		NullCheck(L_13);
		bool L_14;
		L_14 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean UniRx.ICancelable::get_IsDisposed() */, ICancelable_t17CBA667BF856A6EA2591122CE89C2105AE8B871_il2cpp_TypeInfo_var, L_13);
		V_3 = L_14;
		bool L_15 = V_3;
		if (!L_15)
		{
			goto IL_00c6;
		}
	}
	{
		// if (cancellation.IsDisposed) break;
		goto IL_0104;
	}

IL_00c6:
	{
		// var elapsed = Time.fixedTime - startTime;
		float L_16;
		L_16 = Time_get_fixedTime_mE4630B2127C67597CA450A81FFDF25E63A2CC7B5(/*hidden argument*/NULL);
		float L_17 = __this->get_U3CstartTimeU3E5__1_6();
		__this->set_U3CelapsedU3E5__3_8(((float)il2cpp_codegen_subtract((float)L_16, (float)L_17)));
		// if (elapsed >= dt)
		float L_18 = __this->get_U3CelapsedU3E5__3_8();
		float L_19 = __this->get_U3CdtU3E5__2_7();
		V_4 = (bool)((((int32_t)((!(((float)L_18) >= ((float)L_19)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_20 = V_4;
		if (!L_20)
		{
			goto IL_00fe;
		}
	}
	{
		// MainThreadDispatcher.UnsafeSend(action);
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_21 = __this->get_action_3();
		IL2CPP_RUNTIME_CLASS_INIT(MainThreadDispatcher_t2FAB1FD77FC682D33CF5764698C0589FD9C918A7_il2cpp_TypeInfo_var);
		MainThreadDispatcher_UnsafeSend_m2783CA883E6B0170ED958F4C1097AD74B36D90EA(L_21, /*hidden argument*/NULL);
		// break;
		goto IL_0104;
	}

IL_00fe:
	{
	}

IL_00ff:
	{
		// while (true)
		V_5 = (bool)1;
		goto IL_009d;
	}

IL_0104:
	{
	}

IL_0105:
	{
		// }
		return (bool)0;
	}
}
// System.Object UniRx.Scheduler/FixedUpdateMainThreadScheduler/<DelayAction>d__2::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CDelayActionU3Ed__2_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m3CFAA4B79B4D996B087AC6946AC9709D4F5ADB21 (U3CDelayActionU3Ed__2_tF6BFFB8F5C3BA4D6B330E6B0B07B0FCABF91ADCC * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void UniRx.Scheduler/FixedUpdateMainThreadScheduler/<DelayAction>d__2::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDelayActionU3Ed__2_System_Collections_IEnumerator_Reset_m2AAD76A1C2E572E17273C00B4C4D92BF1AF7B4F9 (U3CDelayActionU3Ed__2_tF6BFFB8F5C3BA4D6B330E6B0B07B0FCABF91ADCC * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CDelayActionU3Ed__2_System_Collections_IEnumerator_Reset_m2AAD76A1C2E572E17273C00B4C4D92BF1AF7B4F9_RuntimeMethod_var)));
	}
}
// System.Object UniRx.Scheduler/FixedUpdateMainThreadScheduler/<DelayAction>d__2::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CDelayActionU3Ed__2_System_Collections_IEnumerator_get_Current_m0515103CB968DBAD24D49260B1D078C341C59252 (U3CDelayActionU3Ed__2_tF6BFFB8F5C3BA4D6B330E6B0B07B0FCABF91ADCC * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
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
// System.Void UniRx.Scheduler/FixedUpdateMainThreadScheduler/<PeriodicAction>d__3::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CPeriodicActionU3Ed__3__ctor_m13AA89D5D86E204A9411CBCC306E6F2CDD9DBCA1 (U3CPeriodicActionU3Ed__3_t0AB097192C92DFAAA017A1B1428FD02890D6B229 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void UniRx.Scheduler/FixedUpdateMainThreadScheduler/<PeriodicAction>d__3::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CPeriodicActionU3Ed__3_System_IDisposable_Dispose_m1C8F73E3FAB2A3461C44E8724FE61F82411BB648 (U3CPeriodicActionU3Ed__3_t0AB097192C92DFAAA017A1B1428FD02890D6B229 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean UniRx.Scheduler/FixedUpdateMainThreadScheduler/<PeriodicAction>d__3::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CPeriodicActionU3Ed__3_MoveNext_m5B23ECB560D87C93E167AD427AD65CAFAD48F31D (U3CPeriodicActionU3Ed__3_t0AB097192C92DFAAA017A1B1428FD02890D6B229 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICancelable_t17CBA667BF856A6EA2591122CE89C2105AE8B871_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MainThreadDispatcher_t2FAB1FD77FC682D33CF5764698C0589FD9C918A7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		int32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_001b;
			}
			case 1:
			{
				goto IL_001d;
			}
			case 2:
			{
				goto IL_001f;
			}
		}
	}
	{
		goto IL_0024;
	}

IL_001b:
	{
		goto IL_0026;
	}

IL_001d:
	{
		goto IL_0056;
	}

IL_001f:
	{
		goto IL_00b0;
	}

IL_0024:
	{
		return (bool)0;
	}

IL_0026:
	{
		__this->set_U3CU3E1__state_0((-1));
		// if (period == TimeSpan.Zero)
		TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  L_2 = __this->get_period_2();
		IL2CPP_RUNTIME_CLASS_INIT(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_il2cpp_TypeInfo_var);
		TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  L_3 = ((TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields*)il2cpp_codegen_static_fields_for(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_il2cpp_TypeInfo_var))->get_Zero_19();
		bool L_4;
		L_4 = TimeSpan_op_Equality_m8229F4B63064E2D43B244C6E82D55CB2B0360BB1(L_2, L_3, /*hidden argument*/NULL);
		V_1 = L_4;
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_007f;
		}
	}
	{
		goto IL_007b;
	}

IL_0045:
	{
		// yield return null;
		__this->set_U3CU3E2__current_1(NULL);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0056:
	{
		__this->set_U3CU3E1__state_0((-1));
		// if (cancellation.IsDisposed) yield break;
		RuntimeObject* L_6 = __this->get_cancellation_4();
		NullCheck(L_6);
		bool L_7;
		L_7 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean UniRx.ICancelable::get_IsDisposed() */, ICancelable_t17CBA667BF856A6EA2591122CE89C2105AE8B871_il2cpp_TypeInfo_var, L_6);
		V_2 = L_7;
		bool L_8 = V_2;
		if (!L_8)
		{
			goto IL_006e;
		}
	}
	{
		// if (cancellation.IsDisposed) yield break;
		return (bool)0;
	}

IL_006e:
	{
		// MainThreadDispatcher.UnsafeSend(action);
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_9 = __this->get_action_3();
		IL2CPP_RUNTIME_CLASS_INIT(MainThreadDispatcher_t2FAB1FD77FC682D33CF5764698C0589FD9C918A7_il2cpp_TypeInfo_var);
		MainThreadDispatcher_UnsafeSend_m2783CA883E6B0170ED958F4C1097AD74B36D90EA(L_9, /*hidden argument*/NULL);
	}

IL_007b:
	{
		// while (true)
		V_3 = (bool)1;
		goto IL_0045;
	}

IL_007f:
	{
		// var startTime = Time.fixedTime;
		float L_10;
		L_10 = Time_get_fixedTime_mE4630B2127C67597CA450A81FFDF25E63A2CC7B5(/*hidden argument*/NULL);
		__this->set_U3CstartTimeU3E5__1_6(L_10);
		// var dt = (float)period.TotalSeconds;
		TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * L_11 = __this->get_address_of_period_2();
		double L_12;
		L_12 = TimeSpan_get_TotalSeconds_m28CDC7B9ADFEAFF912CC9B66984090CFE60B9AA4((TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 *)L_11, /*hidden argument*/NULL);
		__this->set_U3CdtU3E5__2_7(((float)((float)L_12)));
		goto IL_011a;
	}

IL_009f:
	{
		// yield return null;
		__this->set_U3CU3E2__current_1(NULL);
		__this->set_U3CU3E1__state_0(2);
		return (bool)1;
	}

IL_00b0:
	{
		__this->set_U3CU3E1__state_0((-1));
		// if (cancellation.IsDisposed) break;
		RuntimeObject* L_13 = __this->get_cancellation_4();
		NullCheck(L_13);
		bool L_14;
		L_14 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean UniRx.ICancelable::get_IsDisposed() */, ICancelable_t17CBA667BF856A6EA2591122CE89C2105AE8B871_il2cpp_TypeInfo_var, L_13);
		V_4 = L_14;
		bool L_15 = V_4;
		if (!L_15)
		{
			goto IL_00ca;
		}
	}
	{
		// if (cancellation.IsDisposed) break;
		goto IL_011f;
	}

IL_00ca:
	{
		// var ft = Time.fixedTime;
		float L_16;
		L_16 = Time_get_fixedTime_mE4630B2127C67597CA450A81FFDF25E63A2CC7B5(/*hidden argument*/NULL);
		__this->set_U3CftU3E5__3_8(L_16);
		// var elapsed = ft - startTime;
		float L_17 = __this->get_U3CftU3E5__3_8();
		float L_18 = __this->get_U3CstartTimeU3E5__1_6();
		__this->set_U3CelapsedU3E5__4_9(((float)il2cpp_codegen_subtract((float)L_17, (float)L_18)));
		// if (elapsed >= dt)
		float L_19 = __this->get_U3CelapsedU3E5__4_9();
		float L_20 = __this->get_U3CdtU3E5__2_7();
		V_5 = (bool)((((int32_t)((!(((float)L_19) >= ((float)L_20)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_21 = V_5;
		if (!L_21)
		{
			goto IL_0119;
		}
	}
	{
		// MainThreadDispatcher.UnsafeSend(action);
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_22 = __this->get_action_3();
		IL2CPP_RUNTIME_CLASS_INIT(MainThreadDispatcher_t2FAB1FD77FC682D33CF5764698C0589FD9C918A7_il2cpp_TypeInfo_var);
		MainThreadDispatcher_UnsafeSend_m2783CA883E6B0170ED958F4C1097AD74B36D90EA(L_22, /*hidden argument*/NULL);
		// startTime = ft;
		float L_23 = __this->get_U3CftU3E5__3_8();
		__this->set_U3CstartTimeU3E5__1_6(L_23);
	}

IL_0119:
	{
	}

IL_011a:
	{
		// while (true)
		V_6 = (bool)1;
		goto IL_009f;
	}

IL_011f:
	{
		// }
		return (bool)0;
	}
}
// System.Object UniRx.Scheduler/FixedUpdateMainThreadScheduler/<PeriodicAction>d__3::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CPeriodicActionU3Ed__3_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m4A88B74778AF2E6F6687F7DAF72A291338129868 (U3CPeriodicActionU3Ed__3_t0AB097192C92DFAAA017A1B1428FD02890D6B229 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void UniRx.Scheduler/FixedUpdateMainThreadScheduler/<PeriodicAction>d__3::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CPeriodicActionU3Ed__3_System_Collections_IEnumerator_Reset_m43492C08743F732692F49E677651CC0BEBE1060E (U3CPeriodicActionU3Ed__3_t0AB097192C92DFAAA017A1B1428FD02890D6B229 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CPeriodicActionU3Ed__3_System_Collections_IEnumerator_Reset_m43492C08743F732692F49E677651CC0BEBE1060E_RuntimeMethod_var)));
	}
}
// System.Object UniRx.Scheduler/FixedUpdateMainThreadScheduler/<PeriodicAction>d__3::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CPeriodicActionU3Ed__3_System_Collections_IEnumerator_get_Current_m315FA47CDD42911CA6479259CCF711351BBFAB7A (U3CPeriodicActionU3Ed__3_t0AB097192C92DFAAA017A1B1428FD02890D6B229 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
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
// System.Void UniRx.Scheduler/IgnoreTimeScaleMainThreadScheduler/<DelayAction>d__2::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDelayActionU3Ed__2__ctor_m5838D25FD2FC30AF953A5B59FF4A9BF215A29577 (U3CDelayActionU3Ed__2_tB4AB6DDE46CF76AD12FA17F78671EE48630B77B5 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void UniRx.Scheduler/IgnoreTimeScaleMainThreadScheduler/<DelayAction>d__2::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDelayActionU3Ed__2_System_IDisposable_Dispose_m9529C15CB284D95C1425BD6BDFA9D6366B805C42 (U3CDelayActionU3Ed__2_tB4AB6DDE46CF76AD12FA17F78671EE48630B77B5 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean UniRx.Scheduler/IgnoreTimeScaleMainThreadScheduler/<DelayAction>d__2::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CDelayActionU3Ed__2_MoveNext_mB893174DE392BA2DC6122DEA6973B600E4FB4AE9 (U3CDelayActionU3Ed__2_tB4AB6DDE46CF76AD12FA17F78671EE48630B77B5 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICancelable_t17CBA667BF856A6EA2591122CE89C2105AE8B871_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MainThreadDispatcher_t2FAB1FD77FC682D33CF5764698C0589FD9C918A7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		int32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_001b;
			}
			case 1:
			{
				goto IL_001d;
			}
			case 2:
			{
				goto IL_001f;
			}
		}
	}
	{
		goto IL_0024;
	}

IL_001b:
	{
		goto IL_0026;
	}

IL_001d:
	{
		goto IL_0053;
	}

IL_001f:
	{
		goto IL_00ae;
	}

IL_0024:
	{
		return (bool)0;
	}

IL_0026:
	{
		__this->set_U3CU3E1__state_0((-1));
		// if (dueTime == TimeSpan.Zero)
		TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  L_2 = __this->get_dueTime_2();
		IL2CPP_RUNTIME_CLASS_INIT(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_il2cpp_TypeInfo_var);
		TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  L_3 = ((TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields*)il2cpp_codegen_static_fields_for(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_il2cpp_TypeInfo_var))->get_Zero_19();
		bool L_4;
		L_4 = TimeSpan_op_Equality_m8229F4B63064E2D43B244C6E82D55CB2B0360BB1(L_2, L_3, /*hidden argument*/NULL);
		V_1 = L_4;
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_007d;
		}
	}
	{
		// yield return null;
		__this->set_U3CU3E2__current_1(NULL);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0053:
	{
		__this->set_U3CU3E1__state_0((-1));
		// if (cancellation.IsDisposed) yield break;
		RuntimeObject* L_6 = __this->get_cancellation_4();
		NullCheck(L_6);
		bool L_7;
		L_7 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean UniRx.ICancelable::get_IsDisposed() */, ICancelable_t17CBA667BF856A6EA2591122CE89C2105AE8B871_il2cpp_TypeInfo_var, L_6);
		V_2 = L_7;
		bool L_8 = V_2;
		if (!L_8)
		{
			goto IL_006b;
		}
	}
	{
		// if (cancellation.IsDisposed) yield break;
		return (bool)0;
	}

IL_006b:
	{
		// MainThreadDispatcher.UnsafeSend(action);
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_9 = __this->get_action_3();
		IL2CPP_RUNTIME_CLASS_INIT(MainThreadDispatcher_t2FAB1FD77FC682D33CF5764698C0589FD9C918A7_il2cpp_TypeInfo_var);
		MainThreadDispatcher_UnsafeSend_m2783CA883E6B0170ED958F4C1097AD74B36D90EA(L_9, /*hidden argument*/NULL);
		goto IL_0105;
	}

IL_007d:
	{
		// var elapsed = 0f;
		__this->set_U3CelapsedU3E5__1_6((0.0f));
		// var dt = (float)dueTime.TotalSeconds;
		TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * L_10 = __this->get_address_of_dueTime_2();
		double L_11;
		L_11 = TimeSpan_get_TotalSeconds_m28CDC7B9ADFEAFF912CC9B66984090CFE60B9AA4((TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 *)L_10, /*hidden argument*/NULL);
		__this->set_U3CdtU3E5__2_7(((float)((float)L_11)));
		goto IL_00ff;
	}

IL_009d:
	{
		// yield return null;
		__this->set_U3CU3E2__current_1(NULL);
		__this->set_U3CU3E1__state_0(2);
		return (bool)1;
	}

IL_00ae:
	{
		__this->set_U3CU3E1__state_0((-1));
		// if (cancellation.IsDisposed) break;
		RuntimeObject* L_12 = __this->get_cancellation_4();
		NullCheck(L_12);
		bool L_13;
		L_13 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean UniRx.ICancelable::get_IsDisposed() */, ICancelable_t17CBA667BF856A6EA2591122CE89C2105AE8B871_il2cpp_TypeInfo_var, L_12);
		V_3 = L_13;
		bool L_14 = V_3;
		if (!L_14)
		{
			goto IL_00c6;
		}
	}
	{
		// if (cancellation.IsDisposed) break;
		goto IL_0104;
	}

IL_00c6:
	{
		// elapsed += Time.unscaledDeltaTime;
		float L_15 = __this->get_U3CelapsedU3E5__1_6();
		float L_16;
		L_16 = Time_get_unscaledDeltaTime_m2C153F1E5C77C6AF655054BC6C76D0C334C0DC84(/*hidden argument*/NULL);
		__this->set_U3CelapsedU3E5__1_6(((float)il2cpp_codegen_add((float)L_15, (float)L_16)));
		// if (elapsed >= dt)
		float L_17 = __this->get_U3CelapsedU3E5__1_6();
		float L_18 = __this->get_U3CdtU3E5__2_7();
		V_4 = (bool)((((int32_t)((!(((float)L_17) >= ((float)L_18)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_19 = V_4;
		if (!L_19)
		{
			goto IL_00fe;
		}
	}
	{
		// MainThreadDispatcher.UnsafeSend(action);
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_20 = __this->get_action_3();
		IL2CPP_RUNTIME_CLASS_INIT(MainThreadDispatcher_t2FAB1FD77FC682D33CF5764698C0589FD9C918A7_il2cpp_TypeInfo_var);
		MainThreadDispatcher_UnsafeSend_m2783CA883E6B0170ED958F4C1097AD74B36D90EA(L_20, /*hidden argument*/NULL);
		// break;
		goto IL_0104;
	}

IL_00fe:
	{
	}

IL_00ff:
	{
		// while (true)
		V_5 = (bool)1;
		goto IL_009d;
	}

IL_0104:
	{
	}

IL_0105:
	{
		// }
		return (bool)0;
	}
}
// System.Object UniRx.Scheduler/IgnoreTimeScaleMainThreadScheduler/<DelayAction>d__2::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CDelayActionU3Ed__2_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m3DDAC3615145729D2A4DAF1DC095A2BE7C36E024 (U3CDelayActionU3Ed__2_tB4AB6DDE46CF76AD12FA17F78671EE48630B77B5 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void UniRx.Scheduler/IgnoreTimeScaleMainThreadScheduler/<DelayAction>d__2::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDelayActionU3Ed__2_System_Collections_IEnumerator_Reset_mF00F7E51629EAA4ECCD3C2E6EC37382ACF1A5184 (U3CDelayActionU3Ed__2_tB4AB6DDE46CF76AD12FA17F78671EE48630B77B5 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CDelayActionU3Ed__2_System_Collections_IEnumerator_Reset_mF00F7E51629EAA4ECCD3C2E6EC37382ACF1A5184_RuntimeMethod_var)));
	}
}
// System.Object UniRx.Scheduler/IgnoreTimeScaleMainThreadScheduler/<DelayAction>d__2::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CDelayActionU3Ed__2_System_Collections_IEnumerator_get_Current_mA3E3B614357B8CFD62338B6FD62B44E224BC793F (U3CDelayActionU3Ed__2_tB4AB6DDE46CF76AD12FA17F78671EE48630B77B5 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
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
// System.Void UniRx.Scheduler/IgnoreTimeScaleMainThreadScheduler/<PeriodicAction>d__3::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CPeriodicActionU3Ed__3__ctor_m1CD57E2301033FD251AA323D672EC7AEB2EAC9EC (U3CPeriodicActionU3Ed__3_t71CE59A01E21D352CF4345E5C2966F8FFA93E24B * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void UniRx.Scheduler/IgnoreTimeScaleMainThreadScheduler/<PeriodicAction>d__3::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CPeriodicActionU3Ed__3_System_IDisposable_Dispose_mD5506360439C29665E8FE9C8303997DDC2607F4A (U3CPeriodicActionU3Ed__3_t71CE59A01E21D352CF4345E5C2966F8FFA93E24B * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean UniRx.Scheduler/IgnoreTimeScaleMainThreadScheduler/<PeriodicAction>d__3::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CPeriodicActionU3Ed__3_MoveNext_m7B0AC5DFEBE7F2CF10ACE99C4710018D22FA65A5 (U3CPeriodicActionU3Ed__3_t71CE59A01E21D352CF4345E5C2966F8FFA93E24B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICancelable_t17CBA667BF856A6EA2591122CE89C2105AE8B871_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MainThreadDispatcher_t2FAB1FD77FC682D33CF5764698C0589FD9C918A7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		int32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_001b;
			}
			case 1:
			{
				goto IL_001d;
			}
			case 2:
			{
				goto IL_001f;
			}
		}
	}
	{
		goto IL_0024;
	}

IL_001b:
	{
		goto IL_0026;
	}

IL_001d:
	{
		goto IL_0056;
	}

IL_001f:
	{
		goto IL_00b0;
	}

IL_0024:
	{
		return (bool)0;
	}

IL_0026:
	{
		__this->set_U3CU3E1__state_0((-1));
		// if (period == TimeSpan.Zero)
		TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  L_2 = __this->get_period_2();
		IL2CPP_RUNTIME_CLASS_INIT(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_il2cpp_TypeInfo_var);
		TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  L_3 = ((TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields*)il2cpp_codegen_static_fields_for(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_il2cpp_TypeInfo_var))->get_Zero_19();
		bool L_4;
		L_4 = TimeSpan_op_Equality_m8229F4B63064E2D43B244C6E82D55CB2B0360BB1(L_2, L_3, /*hidden argument*/NULL);
		V_1 = L_4;
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_007f;
		}
	}
	{
		goto IL_007b;
	}

IL_0045:
	{
		// yield return null; // not immediately, run next frame
		__this->set_U3CU3E2__current_1(NULL);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0056:
	{
		__this->set_U3CU3E1__state_0((-1));
		// if (cancellation.IsDisposed) yield break;
		RuntimeObject* L_6 = __this->get_cancellation_4();
		NullCheck(L_6);
		bool L_7;
		L_7 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean UniRx.ICancelable::get_IsDisposed() */, ICancelable_t17CBA667BF856A6EA2591122CE89C2105AE8B871_il2cpp_TypeInfo_var, L_6);
		V_2 = L_7;
		bool L_8 = V_2;
		if (!L_8)
		{
			goto IL_006e;
		}
	}
	{
		// if (cancellation.IsDisposed) yield break;
		return (bool)0;
	}

IL_006e:
	{
		// MainThreadDispatcher.UnsafeSend(action);
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_9 = __this->get_action_3();
		IL2CPP_RUNTIME_CLASS_INIT(MainThreadDispatcher_t2FAB1FD77FC682D33CF5764698C0589FD9C918A7_il2cpp_TypeInfo_var);
		MainThreadDispatcher_UnsafeSend_m2783CA883E6B0170ED958F4C1097AD74B36D90EA(L_9, /*hidden argument*/NULL);
	}

IL_007b:
	{
		// while (true)
		V_3 = (bool)1;
		goto IL_0045;
	}

IL_007f:
	{
		// var elapsed = 0f;
		__this->set_U3CelapsedU3E5__1_6((0.0f));
		// var dt = (float)period.TotalSeconds;
		TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * L_10 = __this->get_address_of_period_2();
		double L_11;
		L_11 = TimeSpan_get_TotalSeconds_m28CDC7B9ADFEAFF912CC9B66984090CFE60B9AA4((TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 *)L_10, /*hidden argument*/NULL);
		__this->set_U3CdtU3E5__2_7(((float)((float)L_11)));
		goto IL_010d;
	}

IL_009f:
	{
		// yield return null;
		__this->set_U3CU3E2__current_1(NULL);
		__this->set_U3CU3E1__state_0(2);
		return (bool)1;
	}

IL_00b0:
	{
		__this->set_U3CU3E1__state_0((-1));
		// if (cancellation.IsDisposed) break;
		RuntimeObject* L_12 = __this->get_cancellation_4();
		NullCheck(L_12);
		bool L_13;
		L_13 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean UniRx.ICancelable::get_IsDisposed() */, ICancelable_t17CBA667BF856A6EA2591122CE89C2105AE8B871_il2cpp_TypeInfo_var, L_12);
		V_4 = L_13;
		bool L_14 = V_4;
		if (!L_14)
		{
			goto IL_00ca;
		}
	}
	{
		// if (cancellation.IsDisposed) break;
		goto IL_0112;
	}

IL_00ca:
	{
		// elapsed += Time.unscaledDeltaTime;
		float L_15 = __this->get_U3CelapsedU3E5__1_6();
		float L_16;
		L_16 = Time_get_unscaledDeltaTime_m2C153F1E5C77C6AF655054BC6C76D0C334C0DC84(/*hidden argument*/NULL);
		__this->set_U3CelapsedU3E5__1_6(((float)il2cpp_codegen_add((float)L_15, (float)L_16)));
		// if (elapsed >= dt)
		float L_17 = __this->get_U3CelapsedU3E5__1_6();
		float L_18 = __this->get_U3CdtU3E5__2_7();
		V_5 = (bool)((((int32_t)((!(((float)L_17) >= ((float)L_18)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_19 = V_5;
		if (!L_19)
		{
			goto IL_010c;
		}
	}
	{
		// MainThreadDispatcher.UnsafeSend(action);
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_20 = __this->get_action_3();
		IL2CPP_RUNTIME_CLASS_INIT(MainThreadDispatcher_t2FAB1FD77FC682D33CF5764698C0589FD9C918A7_il2cpp_TypeInfo_var);
		MainThreadDispatcher_UnsafeSend_m2783CA883E6B0170ED958F4C1097AD74B36D90EA(L_20, /*hidden argument*/NULL);
		// elapsed = 0;
		__this->set_U3CelapsedU3E5__1_6((0.0f));
	}

IL_010c:
	{
	}

IL_010d:
	{
		// while (true)
		V_6 = (bool)1;
		goto IL_009f;
	}

IL_0112:
	{
		// }
		return (bool)0;
	}
}
// System.Object UniRx.Scheduler/IgnoreTimeScaleMainThreadScheduler/<PeriodicAction>d__3::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CPeriodicActionU3Ed__3_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m0F7A03D5DA57662C8FD36DDD912AFC695BBBDB31 (U3CPeriodicActionU3Ed__3_t71CE59A01E21D352CF4345E5C2966F8FFA93E24B * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void UniRx.Scheduler/IgnoreTimeScaleMainThreadScheduler/<PeriodicAction>d__3::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CPeriodicActionU3Ed__3_System_Collections_IEnumerator_Reset_m0CCBAB690E0AAFB8856A914B0E9FF90846C0DA25 (U3CPeriodicActionU3Ed__3_t71CE59A01E21D352CF4345E5C2966F8FFA93E24B * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CPeriodicActionU3Ed__3_System_Collections_IEnumerator_Reset_m0CCBAB690E0AAFB8856A914B0E9FF90846C0DA25_RuntimeMethod_var)));
	}
}
// System.Object UniRx.Scheduler/IgnoreTimeScaleMainThreadScheduler/<PeriodicAction>d__3::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CPeriodicActionU3Ed__3_System_Collections_IEnumerator_get_Current_m74A89A1BBE577A8036627E262FAF346056540B90 (U3CPeriodicActionU3Ed__3_t71CE59A01E21D352CF4345E5C2966F8FFA93E24B * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
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
// System.Void UniRx.Scheduler/MainThreadScheduler/<DelayAction>d__2::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDelayActionU3Ed__2__ctor_m75AAB57D93157B827013E098BB716CF33AC8BF2E (U3CDelayActionU3Ed__2_tEF353B140AF9D12C1A047EF61FC7EE32F2F226A9 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void UniRx.Scheduler/MainThreadScheduler/<DelayAction>d__2::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDelayActionU3Ed__2_System_IDisposable_Dispose_mD7D58188C89853EACD343F425B59FEE0477B423D (U3CDelayActionU3Ed__2_tEF353B140AF9D12C1A047EF61FC7EE32F2F226A9 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean UniRx.Scheduler/MainThreadScheduler/<DelayAction>d__2::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CDelayActionU3Ed__2_MoveNext_mF5E651DBDA3E44827DAA0BE565C975B055F0A1E0 (U3CDelayActionU3Ed__2_tEF353B140AF9D12C1A047EF61FC7EE32F2F226A9 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICancelable_t17CBA667BF856A6EA2591122CE89C2105AE8B871_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MainThreadDispatcher_t2FAB1FD77FC682D33CF5764698C0589FD9C918A7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	bool V_2 = false;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		int32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_001b;
			}
			case 1:
			{
				goto IL_001d;
			}
			case 2:
			{
				goto IL_001f;
			}
		}
	}
	{
		goto IL_0021;
	}

IL_001b:
	{
		goto IL_0023;
	}

IL_001d:
	{
		goto IL_0050;
	}

IL_001f:
	{
		goto IL_007b;
	}

IL_0021:
	{
		return (bool)0;
	}

IL_0023:
	{
		__this->set_U3CU3E1__state_0((-1));
		// if (dueTime == TimeSpan.Zero)
		TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  L_2 = __this->get_dueTime_2();
		IL2CPP_RUNTIME_CLASS_INIT(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_il2cpp_TypeInfo_var);
		TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  L_3 = ((TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields*)il2cpp_codegen_static_fields_for(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_il2cpp_TypeInfo_var))->get_Zero_19();
		bool L_4;
		L_4 = TimeSpan_op_Equality_m8229F4B63064E2D43B244C6E82D55CB2B0360BB1(L_2, L_3, /*hidden argument*/NULL);
		V_1 = L_4;
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_005a;
		}
	}
	{
		// yield return null; // not immediately, run next frame
		__this->set_U3CU3E2__current_1(NULL);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0050:
	{
		__this->set_U3CU3E1__state_0((-1));
		goto IL_0083;
	}

IL_005a:
	{
		// yield return new WaitForSeconds((float)dueTime.TotalSeconds);
		TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * L_6 = __this->get_address_of_dueTime_2();
		double L_7;
		L_7 = TimeSpan_get_TotalSeconds_m28CDC7B9ADFEAFF912CC9B66984090CFE60B9AA4((TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 *)L_6, /*hidden argument*/NULL);
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_8 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_8, ((float)((float)L_7)), /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_8);
		__this->set_U3CU3E1__state_0(2);
		return (bool)1;
	}

IL_007b:
	{
		__this->set_U3CU3E1__state_0((-1));
	}

IL_0083:
	{
		// if (cancellation.IsDisposed) yield break;
		RuntimeObject* L_9 = __this->get_cancellation_4();
		NullCheck(L_9);
		bool L_10;
		L_10 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean UniRx.ICancelable::get_IsDisposed() */, ICancelable_t17CBA667BF856A6EA2591122CE89C2105AE8B871_il2cpp_TypeInfo_var, L_9);
		V_2 = L_10;
		bool L_11 = V_2;
		if (!L_11)
		{
			goto IL_0094;
		}
	}
	{
		// if (cancellation.IsDisposed) yield break;
		return (bool)0;
	}

IL_0094:
	{
		// MainThreadDispatcher.UnsafeSend(action);
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_12 = __this->get_action_3();
		IL2CPP_RUNTIME_CLASS_INIT(MainThreadDispatcher_t2FAB1FD77FC682D33CF5764698C0589FD9C918A7_il2cpp_TypeInfo_var);
		MainThreadDispatcher_UnsafeSend_m2783CA883E6B0170ED958F4C1097AD74B36D90EA(L_12, /*hidden argument*/NULL);
		// }
		return (bool)0;
	}
}
// System.Object UniRx.Scheduler/MainThreadScheduler/<DelayAction>d__2::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CDelayActionU3Ed__2_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m568C56A6A7620E1B10C959F40AD2E9186B65A029 (U3CDelayActionU3Ed__2_tEF353B140AF9D12C1A047EF61FC7EE32F2F226A9 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void UniRx.Scheduler/MainThreadScheduler/<DelayAction>d__2::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDelayActionU3Ed__2_System_Collections_IEnumerator_Reset_m0741947D1C6B5FB20DA7F8168EFFE8BA6BAA07B8 (U3CDelayActionU3Ed__2_tEF353B140AF9D12C1A047EF61FC7EE32F2F226A9 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CDelayActionU3Ed__2_System_Collections_IEnumerator_Reset_m0741947D1C6B5FB20DA7F8168EFFE8BA6BAA07B8_RuntimeMethod_var)));
	}
}
// System.Object UniRx.Scheduler/MainThreadScheduler/<DelayAction>d__2::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CDelayActionU3Ed__2_System_Collections_IEnumerator_get_Current_m2671169707EC677046DDF57A32E942001F17A842 (U3CDelayActionU3Ed__2_tEF353B140AF9D12C1A047EF61FC7EE32F2F226A9 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
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
// System.Void UniRx.Scheduler/MainThreadScheduler/<PeriodicAction>d__3::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CPeriodicActionU3Ed__3__ctor_m8DD65D8632B454EA31116E31DF7742976ACE7516 (U3CPeriodicActionU3Ed__3_t5FDEA5BD7244B7FECAD391713DEED9B8D3877937 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void UniRx.Scheduler/MainThreadScheduler/<PeriodicAction>d__3::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CPeriodicActionU3Ed__3_System_IDisposable_Dispose_mF8D99C9129CCAC3F2FF9CC1BEB4E4CDB37323097 (U3CPeriodicActionU3Ed__3_t5FDEA5BD7244B7FECAD391713DEED9B8D3877937 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean UniRx.Scheduler/MainThreadScheduler/<PeriodicAction>d__3::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CPeriodicActionU3Ed__3_MoveNext_m54BDF057A9133E42E95FFE43588472F1396BEB5B (U3CPeriodicActionU3Ed__3_t5FDEA5BD7244B7FECAD391713DEED9B8D3877937 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICancelable_t17CBA667BF856A6EA2591122CE89C2105AE8B871_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MainThreadDispatcher_t2FAB1FD77FC682D33CF5764698C0589FD9C918A7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		int32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_001b;
			}
			case 1:
			{
				goto IL_001d;
			}
			case 2:
			{
				goto IL_001f;
			}
		}
	}
	{
		goto IL_0024;
	}

IL_001b:
	{
		goto IL_0026;
	}

IL_001d:
	{
		goto IL_0056;
	}

IL_001f:
	{
		goto IL_00c5;
	}

IL_0024:
	{
		return (bool)0;
	}

IL_0026:
	{
		__this->set_U3CU3E1__state_0((-1));
		// if (period == TimeSpan.Zero)
		TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  L_2 = __this->get_period_2();
		IL2CPP_RUNTIME_CLASS_INIT(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_il2cpp_TypeInfo_var);
		TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  L_3 = ((TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields*)il2cpp_codegen_static_fields_for(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_il2cpp_TypeInfo_var))->get_Zero_19();
		bool L_4;
		L_4 = TimeSpan_op_Equality_m8229F4B63064E2D43B244C6E82D55CB2B0360BB1(L_2, L_3, /*hidden argument*/NULL);
		V_1 = L_4;
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_007f;
		}
	}
	{
		goto IL_007b;
	}

IL_0045:
	{
		// yield return null; // not immediately, run next frame
		__this->set_U3CU3E2__current_1(NULL);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0056:
	{
		__this->set_U3CU3E1__state_0((-1));
		// if (cancellation.IsDisposed) yield break;
		RuntimeObject* L_6 = __this->get_cancellation_4();
		NullCheck(L_6);
		bool L_7;
		L_7 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean UniRx.ICancelable::get_IsDisposed() */, ICancelable_t17CBA667BF856A6EA2591122CE89C2105AE8B871_il2cpp_TypeInfo_var, L_6);
		V_2 = L_7;
		bool L_8 = V_2;
		if (!L_8)
		{
			goto IL_006e;
		}
	}
	{
		// if (cancellation.IsDisposed) yield break;
		return (bool)0;
	}

IL_006e:
	{
		// MainThreadDispatcher.UnsafeSend(action);
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_9 = __this->get_action_3();
		IL2CPP_RUNTIME_CLASS_INIT(MainThreadDispatcher_t2FAB1FD77FC682D33CF5764698C0589FD9C918A7_il2cpp_TypeInfo_var);
		MainThreadDispatcher_UnsafeSend_m2783CA883E6B0170ED958F4C1097AD74B36D90EA(L_9, /*hidden argument*/NULL);
	}

IL_007b:
	{
		// while (true)
		V_3 = (bool)1;
		goto IL_0045;
	}

IL_007f:
	{
		// var seconds = (float)(period.TotalMilliseconds / 1000.0);
		TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * L_10 = __this->get_address_of_period_2();
		double L_11;
		L_11 = TimeSpan_get_TotalMilliseconds_m97368AE0609D865EB2A6BAE96AAA97AF8BDBF1C5((TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 *)L_10, /*hidden argument*/NULL);
		__this->set_U3CsecondsU3E5__1_6(((float)((float)((double)((double)L_11/(double)(1000.0))))));
		// var yieldInstruction = new WaitForSeconds(seconds); // cache single instruction object
		float L_12 = __this->get_U3CsecondsU3E5__1_6();
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_13 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_13, L_12, /*hidden argument*/NULL);
		__this->set_U3CyieldInstructionU3E5__2_7(L_13);
		goto IL_00ec;
	}

IL_00af:
	{
		// yield return yieldInstruction;
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_14 = __this->get_U3CyieldInstructionU3E5__2_7();
		__this->set_U3CU3E2__current_1(L_14);
		__this->set_U3CU3E1__state_0(2);
		return (bool)1;
	}

IL_00c5:
	{
		__this->set_U3CU3E1__state_0((-1));
		// if (cancellation.IsDisposed) yield break;
		RuntimeObject* L_15 = __this->get_cancellation_4();
		NullCheck(L_15);
		bool L_16;
		L_16 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean UniRx.ICancelable::get_IsDisposed() */, ICancelable_t17CBA667BF856A6EA2591122CE89C2105AE8B871_il2cpp_TypeInfo_var, L_15);
		V_4 = L_16;
		bool L_17 = V_4;
		if (!L_17)
		{
			goto IL_00df;
		}
	}
	{
		// if (cancellation.IsDisposed) yield break;
		return (bool)0;
	}

IL_00df:
	{
		// MainThreadDispatcher.UnsafeSend(action);
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_18 = __this->get_action_3();
		IL2CPP_RUNTIME_CLASS_INIT(MainThreadDispatcher_t2FAB1FD77FC682D33CF5764698C0589FD9C918A7_il2cpp_TypeInfo_var);
		MainThreadDispatcher_UnsafeSend_m2783CA883E6B0170ED958F4C1097AD74B36D90EA(L_18, /*hidden argument*/NULL);
	}

IL_00ec:
	{
		// while (true)
		V_5 = (bool)1;
		goto IL_00af;
	}
}
// System.Object UniRx.Scheduler/MainThreadScheduler/<PeriodicAction>d__3::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CPeriodicActionU3Ed__3_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m4122D3A62E95225868C117C824137F2FC7EE6EC6 (U3CPeriodicActionU3Ed__3_t5FDEA5BD7244B7FECAD391713DEED9B8D3877937 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void UniRx.Scheduler/MainThreadScheduler/<PeriodicAction>d__3::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CPeriodicActionU3Ed__3_System_Collections_IEnumerator_Reset_mABDBAC9F48619E3C6776DFC85D2D803915B651E8 (U3CPeriodicActionU3Ed__3_t5FDEA5BD7244B7FECAD391713DEED9B8D3877937 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CPeriodicActionU3Ed__3_System_Collections_IEnumerator_Reset_mABDBAC9F48619E3C6776DFC85D2D803915B651E8_RuntimeMethod_var)));
	}
}
// System.Object UniRx.Scheduler/MainThreadScheduler/<PeriodicAction>d__3::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CPeriodicActionU3Ed__3_System_Collections_IEnumerator_get_Current_mDE2AD0A26C8A6B20020B54E04418C4FB7750085F (U3CPeriodicActionU3Ed__3_t5FDEA5BD7244B7FECAD391713DEED9B8D3877937 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
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
// System.Void UniRx.Scheduler/ThreadPoolScheduler/<>c__DisplayClass2_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass2_0__ctor_m6EADE32242367256C103A7FD91A77BFFFD25AAA5 (U3CU3Ec__DisplayClass2_0_t6FF2B95D67B80FB980AD26798C903E69AA6B8E65 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UniRx.Scheduler/ThreadPoolScheduler/<>c__DisplayClass2_0::<Schedule>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass2_0_U3CScheduleU3Eb__0_m45D2FEADB4FE80F81A72E5571BA7F1299F95507E (U3CU3Ec__DisplayClass2_0_t6FF2B95D67B80FB980AD26798C903E69AA6B8E65 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		// if (!d.IsDisposed)
		BooleanDisposable_t10CF71845F96D6A2BB117D0EAE549FA5FAB59133 * L_0 = __this->get_d_0();
		NullCheck(L_0);
		bool L_1;
		L_1 = BooleanDisposable_get_IsDisposed_mC5B0CC04C1F053D39D2EF5371D04CF355DC01CE4_inline(L_0, /*hidden argument*/NULL);
		V_0 = (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0021;
		}
	}
	{
		// action();
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_3 = __this->get_action_1();
		NullCheck(L_3);
		Action_Invoke_m3FFA5BE3D64F0FF8E1E1CB6F953913FADB5EB89E(L_3, /*hidden argument*/NULL);
	}

IL_0021:
	{
		// };
		return;
	}
}
// System.Void UniRx.Scheduler/ThreadPoolScheduler/<>c__DisplayClass2_0::<Schedule>b__1(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass2_0_U3CScheduleU3Eb__1_mF8B6F2181CDA49C34E86C475D5C319A2167F4AC5 (U3CU3Ec__DisplayClass2_0_t6FF2B95D67B80FB980AD26798C903E69AA6B8E65 * __this, RuntimeObject* ___ar0, const RuntimeMethod* method)
{
	{
		// act.BeginInvoke(ar => act.EndInvoke(ar), null);
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_0 = __this->get_act_2();
		RuntimeObject* L_1 = ___ar0;
		NullCheck(L_0);
		Action_EndInvoke_m65371CAA200D9AFFCFA40253435B5B91457D0055(L_0, L_1, /*hidden argument*/NULL);
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
// System.Void UniRx.Scheduler/ThreadPoolScheduler/<>c__DisplayClass3_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass3_0__ctor_mD814CFCFCFBAEA3635B5BAE3A25FDFE6CC27F37B (U3CU3Ec__DisplayClass3_0_tFD324CCB796E79865D9E8E69DC9501A756294920 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UniRx.Scheduler/ThreadPoolScheduler/<>c__DisplayClass3_0::<Schedule>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass3_0_U3CScheduleU3Eb__0_mF439F34EA0DB26D090045D36C604B8C11AA2D7F9 (U3CU3Ec__DisplayClass3_0_tFD324CCB796E79865D9E8E69DC9501A756294920 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	bool V_1 = false;
	{
		// if (!d.IsDisposed)
		BooleanDisposable_t10CF71845F96D6A2BB117D0EAE549FA5FAB59133 * L_0 = __this->get_d_0();
		NullCheck(L_0);
		bool L_1;
		L_1 = BooleanDisposable_get_IsDisposed_mC5B0CC04C1F053D39D2EF5371D04CF355DC01CE4_inline(L_0, /*hidden argument*/NULL);
		V_0 = (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0042;
		}
	}
	{
		// if (wait.Ticks > 0)
		TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * L_3 = __this->get_address_of_wait_1();
		int64_t L_4;
		L_4 = TimeSpan_get_Ticks_mE4C9E1F27DC794028CEDCF7CB5BD092D16DBACD4_inline((TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 *)L_3, /*hidden argument*/NULL);
		V_1 = (bool)((((int64_t)L_4) > ((int64_t)((int64_t)((int64_t)0))))? 1 : 0);
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0035;
		}
	}
	{
		// Thread.Sleep(wait);
		TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  L_6 = __this->get_wait_1();
		Thread_Sleep_m9E0671FBE187EBD744D829FEB443094B9C0FC9CA(L_6, /*hidden argument*/NULL);
	}

IL_0035:
	{
		// action();
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_7 = __this->get_action_2();
		NullCheck(L_7);
		Action_Invoke_m3FFA5BE3D64F0FF8E1E1CB6F953913FADB5EB89E(L_7, /*hidden argument*/NULL);
	}

IL_0042:
	{
		// };
		return;
	}
}
// System.Void UniRx.Scheduler/ThreadPoolScheduler/<>c__DisplayClass3_0::<Schedule>b__1(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass3_0_U3CScheduleU3Eb__1_m3517C5357524D4DD8C1049905095171EBC73D497 (U3CU3Ec__DisplayClass3_0_tFD324CCB796E79865D9E8E69DC9501A756294920 * __this, RuntimeObject* ___ar0, const RuntimeMethod* method)
{
	{
		// act.BeginInvoke(ar => act.EndInvoke(ar), null);
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_0 = __this->get_act_3();
		RuntimeObject* L_1 = ___ar0;
		NullCheck(L_0);
		Action_EndInvoke_m65371CAA200D9AFFCFA40253435B5B91457D0055(L_0, L_1, /*hidden argument*/NULL);
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
// System.Void UniRx.Operators.WhenAllObservable/WhenAll/WhenAllCollectionObserver::.ctor(UniRx.Operators.WhenAllObservable/WhenAll)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhenAllCollectionObserver__ctor_mD4CF3D8D0489613A342539BE22EDDAD20334C901 (WhenAllCollectionObserver_t4ACAC322DB201DFE95ACDD2422E599F9656971A4 * __this, WhenAll_tA645854C9AD2CBCBFF046766F2509FFA33CB9DC3 * ___parent0, const RuntimeMethod* method)
{
	{
		// bool isCompleted = false;
		__this->set_isCompleted_1((bool)0);
		// public WhenAllCollectionObserver(WhenAll parent)
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// this.parent = parent;
		WhenAll_tA645854C9AD2CBCBFF046766F2509FFA33CB9DC3 * L_0 = ___parent0;
		__this->set_parent_0(L_0);
		// }
		return;
	}
}
// System.Void UniRx.Operators.WhenAllObservable/WhenAll/WhenAllCollectionObserver::OnNext(UniRx.Unit)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhenAllCollectionObserver_OnNext_mEF5C50AA7664069AED76ECA592CE7251850F0B70 (WhenAllCollectionObserver_t4ACAC322DB201DFE95ACDD2422E599F9656971A4 * __this, Unit_t11840C1173CB65892C6CF18A1D7403CA52DC358C  ___value0, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void UniRx.Operators.WhenAllObservable/WhenAll/WhenAllCollectionObserver::OnError(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhenAllCollectionObserver_OnError_m75B7FB539D397A898B0FC7EB10C24C8FE3DB2A32 (WhenAllCollectionObserver_t4ACAC322DB201DFE95ACDD2422E599F9656971A4 * __this, Exception_t * ___error0, const RuntimeMethod* method)
{
	RuntimeObject * V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		// lock (parent.gate)
		WhenAll_tA645854C9AD2CBCBFF046766F2509FFA33CB9DC3 * L_0 = __this->get_parent_0();
		NullCheck(L_0);
		RuntimeObject * L_1 = L_0->get_gate_3();
		V_0 = L_1;
		V_1 = (bool)0;
	}

IL_000f:
	try
	{ // begin try (depth: 1)
		{
			RuntimeObject * L_2 = V_0;
			Monitor_Enter_mBEB6CC84184B46F26375EC3FC8921D16E48EA4C4(L_2, (bool*)(&V_1), /*hidden argument*/NULL);
			// if (!isCompleted)
			bool L_3 = __this->get_isCompleted_1();
			V_2 = (bool)((((int32_t)L_3) == ((int32_t)0))? 1 : 0);
			bool L_4 = V_2;
			if (!L_4)
			{
				goto IL_0035;
			}
		}

IL_0026:
		{
			// parent.OnError(error);
			WhenAll_tA645854C9AD2CBCBFF046766F2509FFA33CB9DC3 * L_5 = __this->get_parent_0();
			Exception_t * L_6 = ___error0;
			NullCheck(L_5);
			VirtActionInvoker1< Exception_t * >::Invoke(9 /* System.Void UniRx.Operators.OperatorObserverBase`2<UniRx.Unit,UniRx.Unit>::OnError(System.Exception) */, L_5, L_6);
		}

IL_0035:
		{
			IL2CPP_LEAVE(0x43, FINALLY_0038);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0038;
	}

FINALLY_0038:
	{ // begin finally (depth: 1)
		{
			bool L_7 = V_1;
			if (!L_7)
			{
				goto IL_0042;
			}
		}

IL_003b:
		{
			RuntimeObject * L_8 = V_0;
			Monitor_Exit_mA776B403DA88AC77CDEEF67AB9F0D0E77ABD254A(L_8, /*hidden argument*/NULL);
		}

IL_0042:
		{
			IL2CPP_END_FINALLY(56)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(56)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x43, IL_0043)
	}

IL_0043:
	{
		// }
		return;
	}
}
// System.Void UniRx.Operators.WhenAllObservable/WhenAll/WhenAllCollectionObserver::OnCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhenAllCollectionObserver_OnCompleted_mF4A9231F7A16A764AECC04BE1BEA44CBEEA8B1EB (WhenAllCollectionObserver_t4ACAC322DB201DFE95ACDD2422E599F9656971A4 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Unit_t11840C1173CB65892C6CF18A1D7403CA52DC358C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		// lock (parent.gate)
		WhenAll_tA645854C9AD2CBCBFF046766F2509FFA33CB9DC3 * L_0 = __this->get_parent_0();
		NullCheck(L_0);
		RuntimeObject * L_1 = L_0->get_gate_3();
		V_0 = L_1;
		V_1 = (bool)0;
	}

IL_000f:
	try
	{ // begin try (depth: 1)
		{
			RuntimeObject * L_2 = V_0;
			Monitor_Enter_mBEB6CC84184B46F26375EC3FC8921D16E48EA4C4(L_2, (bool*)(&V_1), /*hidden argument*/NULL);
			// if (!isCompleted)
			bool L_3 = __this->get_isCompleted_1();
			V_2 = (bool)((((int32_t)L_3) == ((int32_t)0))? 1 : 0);
			bool L_4 = V_2;
			if (!L_4)
			{
				goto IL_007d;
			}
		}

IL_0026:
		{
			// isCompleted = true;
			__this->set_isCompleted_1((bool)1);
			// parent.completedCount++;
			WhenAll_tA645854C9AD2CBCBFF046766F2509FFA33CB9DC3 * L_5 = __this->get_parent_0();
			WhenAll_tA645854C9AD2CBCBFF046766F2509FFA33CB9DC3 * L_6 = L_5;
			NullCheck(L_6);
			int32_t L_7 = L_6->get_completedCount_4();
			NullCheck(L_6);
			L_6->set_completedCount_4(((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)1)));
			// if (parent.completedCount == parent.length)
			WhenAll_tA645854C9AD2CBCBFF046766F2509FFA33CB9DC3 * L_8 = __this->get_parent_0();
			NullCheck(L_8);
			int32_t L_9 = L_8->get_completedCount_4();
			WhenAll_tA645854C9AD2CBCBFF046766F2509FFA33CB9DC3 * L_10 = __this->get_parent_0();
			NullCheck(L_10);
			int32_t L_11 = L_10->get_length_5();
			V_3 = (bool)((((int32_t)L_9) == ((int32_t)L_11))? 1 : 0);
			bool L_12 = V_3;
			if (!L_12)
			{
				goto IL_007c;
			}
		}

IL_005d:
		{
			// parent.OnNext(Unit.Default);
			WhenAll_tA645854C9AD2CBCBFF046766F2509FFA33CB9DC3 * L_13 = __this->get_parent_0();
			IL2CPP_RUNTIME_CLASS_INIT(Unit_t11840C1173CB65892C6CF18A1D7403CA52DC358C_il2cpp_TypeInfo_var);
			Unit_t11840C1173CB65892C6CF18A1D7403CA52DC358C  L_14;
			L_14 = Unit_get_Default_mC53AF46D706716FDE4B2BDA64D5AF2A95E938681(/*hidden argument*/NULL);
			NullCheck(L_13);
			VirtActionInvoker1< Unit_t11840C1173CB65892C6CF18A1D7403CA52DC358C  >::Invoke(8 /* System.Void UniRx.Operators.OperatorObserverBase`2<UniRx.Unit,UniRx.Unit>::OnNext(TSource) */, L_13, L_14);
			// parent.OnCompleted();
			WhenAll_tA645854C9AD2CBCBFF046766F2509FFA33CB9DC3 * L_15 = __this->get_parent_0();
			NullCheck(L_15);
			VirtActionInvoker0::Invoke(10 /* System.Void UniRx.Operators.OperatorObserverBase`2<UniRx.Unit,UniRx.Unit>::OnCompleted() */, L_15);
		}

IL_007c:
		{
		}

IL_007d:
		{
			IL2CPP_LEAVE(0x8B, FINALLY_0080);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0080;
	}

FINALLY_0080:
	{ // begin finally (depth: 1)
		{
			bool L_16 = V_1;
			if (!L_16)
			{
				goto IL_008a;
			}
		}

IL_0083:
		{
			RuntimeObject * L_17 = V_0;
			Monitor_Exit_mA776B403DA88AC77CDEEF67AB9F0D0E77ABD254A(L_17, /*hidden argument*/NULL);
		}

IL_008a:
		{
			IL2CPP_END_FINALLY(128)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(128)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x8B, IL_008b)
	}

IL_008b:
	{
		// }
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
// System.Void UniRx.Operators.WhenAllObservable/WhenAll_/WhenAllCollectionObserver::.ctor(UniRx.Operators.WhenAllObservable/WhenAll_)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhenAllCollectionObserver__ctor_m95C1424F1E6148E6B57966D99EA170B06C318226 (WhenAllCollectionObserver_tBE88D2F4AC06C4FA1C1FFE1A71FB1EA8A47797AE * __this, WhenAll__tDEBE0DF2586D259A8A2C260CB3324B4617E5F2FB * ___parent0, const RuntimeMethod* method)
{
	{
		// bool isCompleted = false;
		__this->set_isCompleted_1((bool)0);
		// public WhenAllCollectionObserver(WhenAll_ parent)
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// this.parent = parent;
		WhenAll__tDEBE0DF2586D259A8A2C260CB3324B4617E5F2FB * L_0 = ___parent0;
		__this->set_parent_0(L_0);
		// }
		return;
	}
}
// System.Void UniRx.Operators.WhenAllObservable/WhenAll_/WhenAllCollectionObserver::OnNext(UniRx.Unit)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhenAllCollectionObserver_OnNext_m4F05458E875EA78F218D607145393758F3908A79 (WhenAllCollectionObserver_tBE88D2F4AC06C4FA1C1FFE1A71FB1EA8A47797AE * __this, Unit_t11840C1173CB65892C6CF18A1D7403CA52DC358C  ___value0, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void UniRx.Operators.WhenAllObservable/WhenAll_/WhenAllCollectionObserver::OnError(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhenAllCollectionObserver_OnError_m25806044365312F41F2CDE6FAC3C53DB54F2BD8D (WhenAllCollectionObserver_tBE88D2F4AC06C4FA1C1FFE1A71FB1EA8A47797AE * __this, Exception_t * ___error0, const RuntimeMethod* method)
{
	RuntimeObject * V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		// lock (parent.gate)
		WhenAll__tDEBE0DF2586D259A8A2C260CB3324B4617E5F2FB * L_0 = __this->get_parent_0();
		NullCheck(L_0);
		RuntimeObject * L_1 = L_0->get_gate_3();
		V_0 = L_1;
		V_1 = (bool)0;
	}

IL_000f:
	try
	{ // begin try (depth: 1)
		{
			RuntimeObject * L_2 = V_0;
			Monitor_Enter_mBEB6CC84184B46F26375EC3FC8921D16E48EA4C4(L_2, (bool*)(&V_1), /*hidden argument*/NULL);
			// if (!isCompleted)
			bool L_3 = __this->get_isCompleted_1();
			V_2 = (bool)((((int32_t)L_3) == ((int32_t)0))? 1 : 0);
			bool L_4 = V_2;
			if (!L_4)
			{
				goto IL_0035;
			}
		}

IL_0026:
		{
			// parent.OnError(error);
			WhenAll__tDEBE0DF2586D259A8A2C260CB3324B4617E5F2FB * L_5 = __this->get_parent_0();
			Exception_t * L_6 = ___error0;
			NullCheck(L_5);
			VirtActionInvoker1< Exception_t * >::Invoke(9 /* System.Void UniRx.Operators.OperatorObserverBase`2<UniRx.Unit,UniRx.Unit>::OnError(System.Exception) */, L_5, L_6);
		}

IL_0035:
		{
			IL2CPP_LEAVE(0x43, FINALLY_0038);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0038;
	}

FINALLY_0038:
	{ // begin finally (depth: 1)
		{
			bool L_7 = V_1;
			if (!L_7)
			{
				goto IL_0042;
			}
		}

IL_003b:
		{
			RuntimeObject * L_8 = V_0;
			Monitor_Exit_mA776B403DA88AC77CDEEF67AB9F0D0E77ABD254A(L_8, /*hidden argument*/NULL);
		}

IL_0042:
		{
			IL2CPP_END_FINALLY(56)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(56)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x43, IL_0043)
	}

IL_0043:
	{
		// }
		return;
	}
}
// System.Void UniRx.Operators.WhenAllObservable/WhenAll_/WhenAllCollectionObserver::OnCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhenAllCollectionObserver_OnCompleted_m753A881DE1791BEF6DAA51C96E3D30719CC07837 (WhenAllCollectionObserver_tBE88D2F4AC06C4FA1C1FFE1A71FB1EA8A47797AE * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Unit_t11840C1173CB65892C6CF18A1D7403CA52DC358C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		// lock (parent.gate)
		WhenAll__tDEBE0DF2586D259A8A2C260CB3324B4617E5F2FB * L_0 = __this->get_parent_0();
		NullCheck(L_0);
		RuntimeObject * L_1 = L_0->get_gate_3();
		V_0 = L_1;
		V_1 = (bool)0;
	}

IL_000f:
	try
	{ // begin try (depth: 1)
		{
			RuntimeObject * L_2 = V_0;
			Monitor_Enter_mBEB6CC84184B46F26375EC3FC8921D16E48EA4C4(L_2, (bool*)(&V_1), /*hidden argument*/NULL);
			// if (!isCompleted)
			bool L_3 = __this->get_isCompleted_1();
			V_2 = (bool)((((int32_t)L_3) == ((int32_t)0))? 1 : 0);
			bool L_4 = V_2;
			if (!L_4)
			{
				goto IL_007d;
			}
		}

IL_0026:
		{
			// isCompleted = true;
			__this->set_isCompleted_1((bool)1);
			// parent.completedCount++;
			WhenAll__tDEBE0DF2586D259A8A2C260CB3324B4617E5F2FB * L_5 = __this->get_parent_0();
			WhenAll__tDEBE0DF2586D259A8A2C260CB3324B4617E5F2FB * L_6 = L_5;
			NullCheck(L_6);
			int32_t L_7 = L_6->get_completedCount_4();
			NullCheck(L_6);
			L_6->set_completedCount_4(((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)1)));
			// if (parent.completedCount == parent.length)
			WhenAll__tDEBE0DF2586D259A8A2C260CB3324B4617E5F2FB * L_8 = __this->get_parent_0();
			NullCheck(L_8);
			int32_t L_9 = L_8->get_completedCount_4();
			WhenAll__tDEBE0DF2586D259A8A2C260CB3324B4617E5F2FB * L_10 = __this->get_parent_0();
			NullCheck(L_10);
			int32_t L_11 = L_10->get_length_5();
			V_3 = (bool)((((int32_t)L_9) == ((int32_t)L_11))? 1 : 0);
			bool L_12 = V_3;
			if (!L_12)
			{
				goto IL_007c;
			}
		}

IL_005d:
		{
			// parent.OnNext(Unit.Default);
			WhenAll__tDEBE0DF2586D259A8A2C260CB3324B4617E5F2FB * L_13 = __this->get_parent_0();
			IL2CPP_RUNTIME_CLASS_INIT(Unit_t11840C1173CB65892C6CF18A1D7403CA52DC358C_il2cpp_TypeInfo_var);
			Unit_t11840C1173CB65892C6CF18A1D7403CA52DC358C  L_14;
			L_14 = Unit_get_Default_mC53AF46D706716FDE4B2BDA64D5AF2A95E938681(/*hidden argument*/NULL);
			NullCheck(L_13);
			VirtActionInvoker1< Unit_t11840C1173CB65892C6CF18A1D7403CA52DC358C  >::Invoke(8 /* System.Void UniRx.Operators.OperatorObserverBase`2<UniRx.Unit,UniRx.Unit>::OnNext(TSource) */, L_13, L_14);
			// parent.OnCompleted();
			WhenAll__tDEBE0DF2586D259A8A2C260CB3324B4617E5F2FB * L_15 = __this->get_parent_0();
			NullCheck(L_15);
			VirtActionInvoker0::Invoke(10 /* System.Void UniRx.Operators.OperatorObserverBase`2<UniRx.Unit,UniRx.Unit>::OnCompleted() */, L_15);
		}

IL_007c:
		{
		}

IL_007d:
		{
			IL2CPP_LEAVE(0x8B, FINALLY_0080);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0080;
	}

FINALLY_0080:
	{ // begin finally (depth: 1)
		{
			bool L_16 = V_1;
			if (!L_16)
			{
				goto IL_008a;
			}
		}

IL_0083:
		{
			RuntimeObject * L_17 = V_0;
			Monitor_Exit_mA776B403DA88AC77CDEEF67AB9F0D0E77ABD254A(L_17, /*hidden argument*/NULL);
		}

IL_008a:
		{
			IL2CPP_END_FINALLY(128)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(128)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x8B, IL_008b)
	}

IL_008b:
	{
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool BooleanDisposable_get_IsDisposed_mC5B0CC04C1F053D39D2EF5371D04CF355DC01CE4_inline (BooleanDisposable_t10CF71845F96D6A2BB117D0EAE549FA5FAB59133 * __this, const RuntimeMethod* method)
{
	{
		// public bool IsDisposed { get; private set; }
		bool L_0 = __this->get_U3CIsDisposedU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int64_t TimeSpan_get_Ticks_mE4C9E1F27DC794028CEDCF7CB5BD092D16DBACD4_inline (TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * __this, const RuntimeMethod* method)
{
	{
		int64_t L_0 = __this->get__ticks_22();
		return L_0;
	}
}
