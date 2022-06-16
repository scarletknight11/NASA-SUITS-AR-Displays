#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <stdint.h>
#include <limits>

#include "vm/CachedCCWBase.h"
#include "utils/New.h"


// System.Action
struct Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6;
// UniRx.ICancelable
struct ICancelable_t17CBA667BF856A6EA2591122CE89C2105AE8B871;
// System.String
struct String_t;
// UnityEngine.WaitForSeconds
struct WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013;
// UniRx.Scheduler/FixedUpdateMainThreadScheduler
struct FixedUpdateMainThreadScheduler_t47CBBD1634E2D14FE826AFC0F218E5FBFF881174;
// UniRx.Scheduler/IgnoreTimeScaleMainThreadScheduler
struct IgnoreTimeScaleMainThreadScheduler_tDE9B9647AE60FF7CE670C3CD55E364031A861391;
// UniRx.Scheduler/MainThreadScheduler
struct MainThreadScheduler_t48B46CA8F52051759E6ED7B3E9FF42C2F9B77C17;



IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Windows.Foundation.IClosable
struct NOVTABLE IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() = 0;
};

// System.Object


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

#ifdef __clang__
#pragma clang diagnostic pop
#endif

il2cpp_hresult_t IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(RuntimeObject* __this);



// COM Callable Wrapper for UniRx.Scheduler/FixedUpdateMainThreadScheduler/<PeriodicAction>d__3
struct U3CPeriodicActionU3Ed__3_t0AB097192C92DFAAA017A1B1428FD02890D6B229_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<U3CPeriodicActionU3Ed__3_t0AB097192C92DFAAA017A1B1428FD02890D6B229_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline U3CPeriodicActionU3Ed__3_t0AB097192C92DFAAA017A1B1428FD02890D6B229_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<U3CPeriodicActionU3Ed__3_t0AB097192C92DFAAA017A1B1428FD02890D6B229_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_U3CPeriodicActionU3Ed__3_t0AB097192C92DFAAA017A1B1428FD02890D6B229(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(U3CPeriodicActionU3Ed__3_t0AB097192C92DFAAA017A1B1428FD02890D6B229_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) U3CPeriodicActionU3Ed__3_t0AB097192C92DFAAA017A1B1428FD02890D6B229_ComCallableWrapper(obj));
}

// COM Callable Wrapper for UniRx.Scheduler/IgnoreTimeScaleMainThreadScheduler/<DelayAction>d__2
struct U3CDelayActionU3Ed__2_tB4AB6DDE46CF76AD12FA17F78671EE48630B77B5_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<U3CDelayActionU3Ed__2_tB4AB6DDE46CF76AD12FA17F78671EE48630B77B5_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline U3CDelayActionU3Ed__2_tB4AB6DDE46CF76AD12FA17F78671EE48630B77B5_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<U3CDelayActionU3Ed__2_tB4AB6DDE46CF76AD12FA17F78671EE48630B77B5_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_U3CDelayActionU3Ed__2_tB4AB6DDE46CF76AD12FA17F78671EE48630B77B5(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(U3CDelayActionU3Ed__2_tB4AB6DDE46CF76AD12FA17F78671EE48630B77B5_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) U3CDelayActionU3Ed__2_tB4AB6DDE46CF76AD12FA17F78671EE48630B77B5_ComCallableWrapper(obj));
}

// COM Callable Wrapper for UniRx.Scheduler/IgnoreTimeScaleMainThreadScheduler/<PeriodicAction>d__3
struct U3CPeriodicActionU3Ed__3_t71CE59A01E21D352CF4345E5C2966F8FFA93E24B_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<U3CPeriodicActionU3Ed__3_t71CE59A01E21D352CF4345E5C2966F8FFA93E24B_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline U3CPeriodicActionU3Ed__3_t71CE59A01E21D352CF4345E5C2966F8FFA93E24B_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<U3CPeriodicActionU3Ed__3_t71CE59A01E21D352CF4345E5C2966F8FFA93E24B_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_U3CPeriodicActionU3Ed__3_t71CE59A01E21D352CF4345E5C2966F8FFA93E24B(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(U3CPeriodicActionU3Ed__3_t71CE59A01E21D352CF4345E5C2966F8FFA93E24B_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) U3CPeriodicActionU3Ed__3_t71CE59A01E21D352CF4345E5C2966F8FFA93E24B_ComCallableWrapper(obj));
}

// COM Callable Wrapper for UniRx.Scheduler/MainThreadScheduler/<DelayAction>d__2
struct U3CDelayActionU3Ed__2_tEF353B140AF9D12C1A047EF61FC7EE32F2F226A9_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<U3CDelayActionU3Ed__2_tEF353B140AF9D12C1A047EF61FC7EE32F2F226A9_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline U3CDelayActionU3Ed__2_tEF353B140AF9D12C1A047EF61FC7EE32F2F226A9_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<U3CDelayActionU3Ed__2_tEF353B140AF9D12C1A047EF61FC7EE32F2F226A9_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_U3CDelayActionU3Ed__2_tEF353B140AF9D12C1A047EF61FC7EE32F2F226A9(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(U3CDelayActionU3Ed__2_tEF353B140AF9D12C1A047EF61FC7EE32F2F226A9_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) U3CDelayActionU3Ed__2_tEF353B140AF9D12C1A047EF61FC7EE32F2F226A9_ComCallableWrapper(obj));
}

// COM Callable Wrapper for UniRx.Scheduler/MainThreadScheduler/<PeriodicAction>d__3
struct U3CPeriodicActionU3Ed__3_t5FDEA5BD7244B7FECAD391713DEED9B8D3877937_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<U3CPeriodicActionU3Ed__3_t5FDEA5BD7244B7FECAD391713DEED9B8D3877937_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline U3CPeriodicActionU3Ed__3_t5FDEA5BD7244B7FECAD391713DEED9B8D3877937_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<U3CPeriodicActionU3Ed__3_t5FDEA5BD7244B7FECAD391713DEED9B8D3877937_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_U3CPeriodicActionU3Ed__3_t5FDEA5BD7244B7FECAD391713DEED9B8D3877937(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(U3CPeriodicActionU3Ed__3_t5FDEA5BD7244B7FECAD391713DEED9B8D3877937_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) U3CPeriodicActionU3Ed__3_t5FDEA5BD7244B7FECAD391713DEED9B8D3877937_ComCallableWrapper(obj));
}
