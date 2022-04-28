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


// OpenCvSharp.Mat
struct Mat_t384A6BE55DC2EC885B4728CACEEE992D74F3DD4D;
// System.String
struct String_t;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// OpenCvSharp.Mat/ColExprIndexer
struct ColExprIndexer_t7BE98B3E69BC45B27EF78858459AA2A47A7F632F;
// OpenCvSharp.Mat/ColIndexer
struct ColIndexer_t31825B233FA28DD352A86C1AEF2302E34B7ADD3F;
// OpenCvSharp.Mat/MatExprIndexer
struct MatExprIndexer_t974E175CB4E3337A66B0BA3E7A0BDFBB2428840E;
// OpenCvSharp.Mat/RowExprIndexer
struct RowExprIndexer_t9F0095829DDB9D709C2B312482BBA5B7B2DA2C6F;
// OpenCvSharp.Mat/RowIndexer
struct RowIndexer_tAC3682A4FD16D8EAD29F8B0C5C1589C3CEE58456;
// OpenCvSharp.MatExpr/ColIndexer
struct ColIndexer_t88637B73E8E96D676FF51CC4805E65ADF708D436;
// OpenCvSharp.MatExpr/RowIndexer
struct RowIndexer_t28CD5015FC4AC913EB9B9FCC1FF82C11DD550287;

struct IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB;
struct IIterator_1_t53A3C573D4888D0C268E9C0D9515A4BDAD329CCC;
struct IIterator_1_t59FD14BF237AECD1747A302E02AE952CAC73C11D;
struct IIterator_1_t6A965FDCA7EF0FD28DFA23C03C7491D6F48B19FC;


IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Windows.Foundation.Collections.IIterable`1<System.Byte>
struct NOVTABLE IIterable_1_tD0597EBCA288E19261E4CD889A045D4DED68F0D5 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IIterable_1_First_mFB95F2845D73300049FCB9B21FE7ACC3473E5E66(IIterator_1_t6A965FDCA7EF0FD28DFA23C03C7491D6F48B19FC** comReturnValue) = 0;
};
// Windows.Foundation.Collections.IIterable`1<System.Double>
struct NOVTABLE IIterable_1_t4464DD78E1BE52C59BBF4333178B62D903ABACEA : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m4C15B56B4F649EA2A68C0591FF33164F3F101C72(IIterator_1_t59FD14BF237AECD1747A302E02AE952CAC73C11D** comReturnValue) = 0;
};
// Windows.Foundation.Collections.IIterable`1<System.Single>
struct NOVTABLE IIterable_1_t0EA6FF8BF23034840DB9F5189AF1D72411992F7E : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IIterable_1_First_mBD8D20BBA2E9F188C15175F2C9AB4039C6400ED1(IIterator_1_t53A3C573D4888D0C268E9C0D9515A4BDAD329CCC** comReturnValue) = 0;
};
// Windows.UI.Xaml.Interop.IBindableIterable
struct NOVTABLE IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) = 0;
};
// Windows.Foundation.IClosable
struct NOVTABLE IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999() = 0;
};

// System.Object


// OpenCVForUnity.DisposableObject
struct DisposableObject_t5D9B230F8710E610FE16D5CF5FDD2C6440C1FF3C  : public RuntimeObject
{
public:
	// System.Boolean OpenCVForUnity.DisposableObject::<IsDisposed>k__BackingField
	bool ___U3CIsDisposedU3Ek__BackingField_0;
	// System.Boolean OpenCVForUnity.DisposableObject::<IsEnabledDispose>k__BackingField
	bool ___U3CIsEnabledDisposeU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3CIsDisposedU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(DisposableObject_t5D9B230F8710E610FE16D5CF5FDD2C6440C1FF3C, ___U3CIsDisposedU3Ek__BackingField_0)); }
	inline bool get_U3CIsDisposedU3Ek__BackingField_0() const { return ___U3CIsDisposedU3Ek__BackingField_0; }
	inline bool* get_address_of_U3CIsDisposedU3Ek__BackingField_0() { return &___U3CIsDisposedU3Ek__BackingField_0; }
	inline void set_U3CIsDisposedU3Ek__BackingField_0(bool value)
	{
		___U3CIsDisposedU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CIsEnabledDisposeU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(DisposableObject_t5D9B230F8710E610FE16D5CF5FDD2C6440C1FF3C, ___U3CIsEnabledDisposeU3Ek__BackingField_1)); }
	inline bool get_U3CIsEnabledDisposeU3Ek__BackingField_1() const { return ___U3CIsEnabledDisposeU3Ek__BackingField_1; }
	inline bool* get_address_of_U3CIsEnabledDisposeU3Ek__BackingField_1() { return &___U3CIsEnabledDisposeU3Ek__BackingField_1; }
	inline void set_U3CIsEnabledDisposeU3Ek__BackingField_1(bool value)
	{
		___U3CIsEnabledDisposeU3Ek__BackingField_1 = value;
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

// System.Runtime.InteropServices.GCHandle
struct GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603 
{
public:
	// System.Int32 System.Runtime.InteropServices.GCHandle::handle
	int32_t ___handle_0;

public:
	inline static int32_t get_offset_of_handle_0() { return static_cast<int32_t>(offsetof(GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603, ___handle_0)); }
	inline int32_t get_handle_0() const { return ___handle_0; }
	inline int32_t* get_address_of_handle_0() { return &___handle_0; }
	inline void set_handle_0(int32_t value)
	{
		___handle_0 = value;
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


// OpenCvSharp.MatType
struct MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523 
{
public:
	// System.Int32 OpenCvSharp.MatType::Value
	int32_t ___Value_0;

public:
	inline static int32_t get_offset_of_Value_0() { return static_cast<int32_t>(offsetof(MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523, ___Value_0)); }
	inline int32_t get_Value_0() const { return ___Value_0; }
	inline int32_t* get_address_of_Value_0() { return &___Value_0; }
	inline void set_Value_0(int32_t value)
	{
		___Value_0 = value;
	}
};

struct MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523_StaticFields
{
public:
	// OpenCvSharp.MatType OpenCvSharp.MatType::CV_8UC1
	MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523  ___CV_8UC1_12;
	// OpenCvSharp.MatType OpenCvSharp.MatType::CV_8UC2
	MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523  ___CV_8UC2_13;
	// OpenCvSharp.MatType OpenCvSharp.MatType::CV_8UC3
	MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523  ___CV_8UC3_14;
	// OpenCvSharp.MatType OpenCvSharp.MatType::CV_8UC4
	MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523  ___CV_8UC4_15;
	// OpenCvSharp.MatType OpenCvSharp.MatType::CV_8SC1
	MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523  ___CV_8SC1_16;
	// OpenCvSharp.MatType OpenCvSharp.MatType::CV_8SC2
	MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523  ___CV_8SC2_17;
	// OpenCvSharp.MatType OpenCvSharp.MatType::CV_8SC3
	MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523  ___CV_8SC3_18;
	// OpenCvSharp.MatType OpenCvSharp.MatType::CV_8SC4
	MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523  ___CV_8SC4_19;
	// OpenCvSharp.MatType OpenCvSharp.MatType::CV_16UC1
	MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523  ___CV_16UC1_20;
	// OpenCvSharp.MatType OpenCvSharp.MatType::CV_16UC2
	MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523  ___CV_16UC2_21;
	// OpenCvSharp.MatType OpenCvSharp.MatType::CV_16UC3
	MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523  ___CV_16UC3_22;
	// OpenCvSharp.MatType OpenCvSharp.MatType::CV_16UC4
	MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523  ___CV_16UC4_23;
	// OpenCvSharp.MatType OpenCvSharp.MatType::CV_16SC1
	MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523  ___CV_16SC1_24;
	// OpenCvSharp.MatType OpenCvSharp.MatType::CV_16SC2
	MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523  ___CV_16SC2_25;
	// OpenCvSharp.MatType OpenCvSharp.MatType::CV_16SC3
	MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523  ___CV_16SC3_26;
	// OpenCvSharp.MatType OpenCvSharp.MatType::CV_16SC4
	MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523  ___CV_16SC4_27;
	// OpenCvSharp.MatType OpenCvSharp.MatType::CV_32SC1
	MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523  ___CV_32SC1_28;
	// OpenCvSharp.MatType OpenCvSharp.MatType::CV_32SC2
	MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523  ___CV_32SC2_29;
	// OpenCvSharp.MatType OpenCvSharp.MatType::CV_32SC3
	MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523  ___CV_32SC3_30;
	// OpenCvSharp.MatType OpenCvSharp.MatType::CV_32SC4
	MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523  ___CV_32SC4_31;
	// OpenCvSharp.MatType OpenCvSharp.MatType::CV_32FC1
	MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523  ___CV_32FC1_32;
	// OpenCvSharp.MatType OpenCvSharp.MatType::CV_32FC2
	MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523  ___CV_32FC2_33;
	// OpenCvSharp.MatType OpenCvSharp.MatType::CV_32FC3
	MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523  ___CV_32FC3_34;
	// OpenCvSharp.MatType OpenCvSharp.MatType::CV_32FC4
	MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523  ___CV_32FC4_35;
	// OpenCvSharp.MatType OpenCvSharp.MatType::CV_64FC1
	MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523  ___CV_64FC1_36;
	// OpenCvSharp.MatType OpenCvSharp.MatType::CV_64FC2
	MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523  ___CV_64FC2_37;
	// OpenCvSharp.MatType OpenCvSharp.MatType::CV_64FC3
	MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523  ___CV_64FC3_38;
	// OpenCvSharp.MatType OpenCvSharp.MatType::CV_64FC4
	MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523  ___CV_64FC4_39;

public:
	inline static int32_t get_offset_of_CV_8UC1_12() { return static_cast<int32_t>(offsetof(MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523_StaticFields, ___CV_8UC1_12)); }
	inline MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523  get_CV_8UC1_12() const { return ___CV_8UC1_12; }
	inline MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523 * get_address_of_CV_8UC1_12() { return &___CV_8UC1_12; }
	inline void set_CV_8UC1_12(MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523  value)
	{
		___CV_8UC1_12 = value;
	}

	inline static int32_t get_offset_of_CV_8UC2_13() { return static_cast<int32_t>(offsetof(MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523_StaticFields, ___CV_8UC2_13)); }
	inline MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523  get_CV_8UC2_13() const { return ___CV_8UC2_13; }
	inline MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523 * get_address_of_CV_8UC2_13() { return &___CV_8UC2_13; }
	inline void set_CV_8UC2_13(MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523  value)
	{
		___CV_8UC2_13 = value;
	}

	inline static int32_t get_offset_of_CV_8UC3_14() { return static_cast<int32_t>(offsetof(MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523_StaticFields, ___CV_8UC3_14)); }
	inline MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523  get_CV_8UC3_14() const { return ___CV_8UC3_14; }
	inline MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523 * get_address_of_CV_8UC3_14() { return &___CV_8UC3_14; }
	inline void set_CV_8UC3_14(MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523  value)
	{
		___CV_8UC3_14 = value;
	}

	inline static int32_t get_offset_of_CV_8UC4_15() { return static_cast<int32_t>(offsetof(MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523_StaticFields, ___CV_8UC4_15)); }
	inline MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523  get_CV_8UC4_15() const { return ___CV_8UC4_15; }
	inline MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523 * get_address_of_CV_8UC4_15() { return &___CV_8UC4_15; }
	inline void set_CV_8UC4_15(MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523  value)
	{
		___CV_8UC4_15 = value;
	}

	inline static int32_t get_offset_of_CV_8SC1_16() { return static_cast<int32_t>(offsetof(MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523_StaticFields, ___CV_8SC1_16)); }
	inline MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523  get_CV_8SC1_16() const { return ___CV_8SC1_16; }
	inline MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523 * get_address_of_CV_8SC1_16() { return &___CV_8SC1_16; }
	inline void set_CV_8SC1_16(MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523  value)
	{
		___CV_8SC1_16 = value;
	}

	inline static int32_t get_offset_of_CV_8SC2_17() { return static_cast<int32_t>(offsetof(MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523_StaticFields, ___CV_8SC2_17)); }
	inline MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523  get_CV_8SC2_17() const { return ___CV_8SC2_17; }
	inline MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523 * get_address_of_CV_8SC2_17() { return &___CV_8SC2_17; }
	inline void set_CV_8SC2_17(MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523  value)
	{
		___CV_8SC2_17 = value;
	}

	inline static int32_t get_offset_of_CV_8SC3_18() { return static_cast<int32_t>(offsetof(MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523_StaticFields, ___CV_8SC3_18)); }
	inline MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523  get_CV_8SC3_18() const { return ___CV_8SC3_18; }
	inline MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523 * get_address_of_CV_8SC3_18() { return &___CV_8SC3_18; }
	inline void set_CV_8SC3_18(MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523  value)
	{
		___CV_8SC3_18 = value;
	}

	inline static int32_t get_offset_of_CV_8SC4_19() { return static_cast<int32_t>(offsetof(MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523_StaticFields, ___CV_8SC4_19)); }
	inline MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523  get_CV_8SC4_19() const { return ___CV_8SC4_19; }
	inline MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523 * get_address_of_CV_8SC4_19() { return &___CV_8SC4_19; }
	inline void set_CV_8SC4_19(MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523  value)
	{
		___CV_8SC4_19 = value;
	}

	inline static int32_t get_offset_of_CV_16UC1_20() { return static_cast<int32_t>(offsetof(MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523_StaticFields, ___CV_16UC1_20)); }
	inline MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523  get_CV_16UC1_20() const { return ___CV_16UC1_20; }
	inline MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523 * get_address_of_CV_16UC1_20() { return &___CV_16UC1_20; }
	inline void set_CV_16UC1_20(MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523  value)
	{
		___CV_16UC1_20 = value;
	}

	inline static int32_t get_offset_of_CV_16UC2_21() { return static_cast<int32_t>(offsetof(MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523_StaticFields, ___CV_16UC2_21)); }
	inline MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523  get_CV_16UC2_21() const { return ___CV_16UC2_21; }
	inline MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523 * get_address_of_CV_16UC2_21() { return &___CV_16UC2_21; }
	inline void set_CV_16UC2_21(MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523  value)
	{
		___CV_16UC2_21 = value;
	}

	inline static int32_t get_offset_of_CV_16UC3_22() { return static_cast<int32_t>(offsetof(MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523_StaticFields, ___CV_16UC3_22)); }
	inline MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523  get_CV_16UC3_22() const { return ___CV_16UC3_22; }
	inline MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523 * get_address_of_CV_16UC3_22() { return &___CV_16UC3_22; }
	inline void set_CV_16UC3_22(MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523  value)
	{
		___CV_16UC3_22 = value;
	}

	inline static int32_t get_offset_of_CV_16UC4_23() { return static_cast<int32_t>(offsetof(MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523_StaticFields, ___CV_16UC4_23)); }
	inline MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523  get_CV_16UC4_23() const { return ___CV_16UC4_23; }
	inline MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523 * get_address_of_CV_16UC4_23() { return &___CV_16UC4_23; }
	inline void set_CV_16UC4_23(MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523  value)
	{
		___CV_16UC4_23 = value;
	}

	inline static int32_t get_offset_of_CV_16SC1_24() { return static_cast<int32_t>(offsetof(MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523_StaticFields, ___CV_16SC1_24)); }
	inline MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523  get_CV_16SC1_24() const { return ___CV_16SC1_24; }
	inline MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523 * get_address_of_CV_16SC1_24() { return &___CV_16SC1_24; }
	inline void set_CV_16SC1_24(MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523  value)
	{
		___CV_16SC1_24 = value;
	}

	inline static int32_t get_offset_of_CV_16SC2_25() { return static_cast<int32_t>(offsetof(MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523_StaticFields, ___CV_16SC2_25)); }
	inline MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523  get_CV_16SC2_25() const { return ___CV_16SC2_25; }
	inline MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523 * get_address_of_CV_16SC2_25() { return &___CV_16SC2_25; }
	inline void set_CV_16SC2_25(MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523  value)
	{
		___CV_16SC2_25 = value;
	}

	inline static int32_t get_offset_of_CV_16SC3_26() { return static_cast<int32_t>(offsetof(MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523_StaticFields, ___CV_16SC3_26)); }
	inline MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523  get_CV_16SC3_26() const { return ___CV_16SC3_26; }
	inline MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523 * get_address_of_CV_16SC3_26() { return &___CV_16SC3_26; }
	inline void set_CV_16SC3_26(MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523  value)
	{
		___CV_16SC3_26 = value;
	}

	inline static int32_t get_offset_of_CV_16SC4_27() { return static_cast<int32_t>(offsetof(MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523_StaticFields, ___CV_16SC4_27)); }
	inline MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523  get_CV_16SC4_27() const { return ___CV_16SC4_27; }
	inline MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523 * get_address_of_CV_16SC4_27() { return &___CV_16SC4_27; }
	inline void set_CV_16SC4_27(MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523  value)
	{
		___CV_16SC4_27 = value;
	}

	inline static int32_t get_offset_of_CV_32SC1_28() { return static_cast<int32_t>(offsetof(MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523_StaticFields, ___CV_32SC1_28)); }
	inline MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523  get_CV_32SC1_28() const { return ___CV_32SC1_28; }
	inline MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523 * get_address_of_CV_32SC1_28() { return &___CV_32SC1_28; }
	inline void set_CV_32SC1_28(MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523  value)
	{
		___CV_32SC1_28 = value;
	}

	inline static int32_t get_offset_of_CV_32SC2_29() { return static_cast<int32_t>(offsetof(MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523_StaticFields, ___CV_32SC2_29)); }
	inline MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523  get_CV_32SC2_29() const { return ___CV_32SC2_29; }
	inline MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523 * get_address_of_CV_32SC2_29() { return &___CV_32SC2_29; }
	inline void set_CV_32SC2_29(MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523  value)
	{
		___CV_32SC2_29 = value;
	}

	inline static int32_t get_offset_of_CV_32SC3_30() { return static_cast<int32_t>(offsetof(MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523_StaticFields, ___CV_32SC3_30)); }
	inline MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523  get_CV_32SC3_30() const { return ___CV_32SC3_30; }
	inline MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523 * get_address_of_CV_32SC3_30() { return &___CV_32SC3_30; }
	inline void set_CV_32SC3_30(MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523  value)
	{
		___CV_32SC3_30 = value;
	}

	inline static int32_t get_offset_of_CV_32SC4_31() { return static_cast<int32_t>(offsetof(MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523_StaticFields, ___CV_32SC4_31)); }
	inline MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523  get_CV_32SC4_31() const { return ___CV_32SC4_31; }
	inline MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523 * get_address_of_CV_32SC4_31() { return &___CV_32SC4_31; }
	inline void set_CV_32SC4_31(MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523  value)
	{
		___CV_32SC4_31 = value;
	}

	inline static int32_t get_offset_of_CV_32FC1_32() { return static_cast<int32_t>(offsetof(MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523_StaticFields, ___CV_32FC1_32)); }
	inline MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523  get_CV_32FC1_32() const { return ___CV_32FC1_32; }
	inline MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523 * get_address_of_CV_32FC1_32() { return &___CV_32FC1_32; }
	inline void set_CV_32FC1_32(MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523  value)
	{
		___CV_32FC1_32 = value;
	}

	inline static int32_t get_offset_of_CV_32FC2_33() { return static_cast<int32_t>(offsetof(MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523_StaticFields, ___CV_32FC2_33)); }
	inline MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523  get_CV_32FC2_33() const { return ___CV_32FC2_33; }
	inline MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523 * get_address_of_CV_32FC2_33() { return &___CV_32FC2_33; }
	inline void set_CV_32FC2_33(MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523  value)
	{
		___CV_32FC2_33 = value;
	}

	inline static int32_t get_offset_of_CV_32FC3_34() { return static_cast<int32_t>(offsetof(MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523_StaticFields, ___CV_32FC3_34)); }
	inline MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523  get_CV_32FC3_34() const { return ___CV_32FC3_34; }
	inline MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523 * get_address_of_CV_32FC3_34() { return &___CV_32FC3_34; }
	inline void set_CV_32FC3_34(MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523  value)
	{
		___CV_32FC3_34 = value;
	}

	inline static int32_t get_offset_of_CV_32FC4_35() { return static_cast<int32_t>(offsetof(MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523_StaticFields, ___CV_32FC4_35)); }
	inline MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523  get_CV_32FC4_35() const { return ___CV_32FC4_35; }
	inline MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523 * get_address_of_CV_32FC4_35() { return &___CV_32FC4_35; }
	inline void set_CV_32FC4_35(MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523  value)
	{
		___CV_32FC4_35 = value;
	}

	inline static int32_t get_offset_of_CV_64FC1_36() { return static_cast<int32_t>(offsetof(MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523_StaticFields, ___CV_64FC1_36)); }
	inline MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523  get_CV_64FC1_36() const { return ___CV_64FC1_36; }
	inline MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523 * get_address_of_CV_64FC1_36() { return &___CV_64FC1_36; }
	inline void set_CV_64FC1_36(MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523  value)
	{
		___CV_64FC1_36 = value;
	}

	inline static int32_t get_offset_of_CV_64FC2_37() { return static_cast<int32_t>(offsetof(MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523_StaticFields, ___CV_64FC2_37)); }
	inline MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523  get_CV_64FC2_37() const { return ___CV_64FC2_37; }
	inline MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523 * get_address_of_CV_64FC2_37() { return &___CV_64FC2_37; }
	inline void set_CV_64FC2_37(MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523  value)
	{
		___CV_64FC2_37 = value;
	}

	inline static int32_t get_offset_of_CV_64FC3_38() { return static_cast<int32_t>(offsetof(MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523_StaticFields, ___CV_64FC3_38)); }
	inline MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523  get_CV_64FC3_38() const { return ___CV_64FC3_38; }
	inline MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523 * get_address_of_CV_64FC3_38() { return &___CV_64FC3_38; }
	inline void set_CV_64FC3_38(MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523  value)
	{
		___CV_64FC3_38 = value;
	}

	inline static int32_t get_offset_of_CV_64FC4_39() { return static_cast<int32_t>(offsetof(MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523_StaticFields, ___CV_64FC4_39)); }
	inline MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523  get_CV_64FC4_39() const { return ___CV_64FC4_39; }
	inline MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523 * get_address_of_CV_64FC4_39() { return &___CV_64FC4_39; }
	inline void set_CV_64FC4_39(MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523  value)
	{
		___CV_64FC4_39 = value;
	}
};


// OpenCvSharp.DisposableObject
struct DisposableObject_t758F1156DE1B13B9AC4682BFA359D84880799115  : public RuntimeObject
{
public:
	// System.Boolean OpenCvSharp.DisposableObject::<IsDisposed>k__BackingField
	bool ___U3CIsDisposedU3Ek__BackingField_0;
	// System.Boolean OpenCvSharp.DisposableObject::<IsEnabledDispose>k__BackingField
	bool ___U3CIsEnabledDisposeU3Ek__BackingField_1;
	// System.Runtime.InteropServices.GCHandle OpenCvSharp.DisposableObject::dataHandle
	GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603  ___dataHandle_2;
	// System.IntPtr OpenCvSharp.DisposableObject::<AllocatedMemory>k__BackingField
	intptr_t ___U3CAllocatedMemoryU3Ek__BackingField_3;
	// System.Int64 OpenCvSharp.DisposableObject::<AllocatedMemorySize>k__BackingField
	int64_t ___U3CAllocatedMemorySizeU3Ek__BackingField_4;

public:
	inline static int32_t get_offset_of_U3CIsDisposedU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(DisposableObject_t758F1156DE1B13B9AC4682BFA359D84880799115, ___U3CIsDisposedU3Ek__BackingField_0)); }
	inline bool get_U3CIsDisposedU3Ek__BackingField_0() const { return ___U3CIsDisposedU3Ek__BackingField_0; }
	inline bool* get_address_of_U3CIsDisposedU3Ek__BackingField_0() { return &___U3CIsDisposedU3Ek__BackingField_0; }
	inline void set_U3CIsDisposedU3Ek__BackingField_0(bool value)
	{
		___U3CIsDisposedU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CIsEnabledDisposeU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(DisposableObject_t758F1156DE1B13B9AC4682BFA359D84880799115, ___U3CIsEnabledDisposeU3Ek__BackingField_1)); }
	inline bool get_U3CIsEnabledDisposeU3Ek__BackingField_1() const { return ___U3CIsEnabledDisposeU3Ek__BackingField_1; }
	inline bool* get_address_of_U3CIsEnabledDisposeU3Ek__BackingField_1() { return &___U3CIsEnabledDisposeU3Ek__BackingField_1; }
	inline void set_U3CIsEnabledDisposeU3Ek__BackingField_1(bool value)
	{
		___U3CIsEnabledDisposeU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_dataHandle_2() { return static_cast<int32_t>(offsetof(DisposableObject_t758F1156DE1B13B9AC4682BFA359D84880799115, ___dataHandle_2)); }
	inline GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603  get_dataHandle_2() const { return ___dataHandle_2; }
	inline GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603 * get_address_of_dataHandle_2() { return &___dataHandle_2; }
	inline void set_dataHandle_2(GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603  value)
	{
		___dataHandle_2 = value;
	}

	inline static int32_t get_offset_of_U3CAllocatedMemoryU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(DisposableObject_t758F1156DE1B13B9AC4682BFA359D84880799115, ___U3CAllocatedMemoryU3Ek__BackingField_3)); }
	inline intptr_t get_U3CAllocatedMemoryU3Ek__BackingField_3() const { return ___U3CAllocatedMemoryU3Ek__BackingField_3; }
	inline intptr_t* get_address_of_U3CAllocatedMemoryU3Ek__BackingField_3() { return &___U3CAllocatedMemoryU3Ek__BackingField_3; }
	inline void set_U3CAllocatedMemoryU3Ek__BackingField_3(intptr_t value)
	{
		___U3CAllocatedMemoryU3Ek__BackingField_3 = value;
	}

	inline static int32_t get_offset_of_U3CAllocatedMemorySizeU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(DisposableObject_t758F1156DE1B13B9AC4682BFA359D84880799115, ___U3CAllocatedMemorySizeU3Ek__BackingField_4)); }
	inline int64_t get_U3CAllocatedMemorySizeU3Ek__BackingField_4() const { return ___U3CAllocatedMemorySizeU3Ek__BackingField_4; }
	inline int64_t* get_address_of_U3CAllocatedMemorySizeU3Ek__BackingField_4() { return &___U3CAllocatedMemorySizeU3Ek__BackingField_4; }
	inline void set_U3CAllocatedMemorySizeU3Ek__BackingField_4(int64_t value)
	{
		___U3CAllocatedMemorySizeU3Ek__BackingField_4 = value;
	}
};


// OpenCVForUnity.DisposableOpenCVObject
struct DisposableOpenCVObject_tC5A6331ECC8C63BC79FFDD38EA38AEE1A0458568  : public DisposableObject_t5D9B230F8710E610FE16D5CF5FDD2C6440C1FF3C
{
public:
	// System.IntPtr OpenCVForUnity.DisposableOpenCVObject::nativeObj
	intptr_t ___nativeObj_2;

public:
	inline static int32_t get_offset_of_nativeObj_2() { return static_cast<int32_t>(offsetof(DisposableOpenCVObject_tC5A6331ECC8C63BC79FFDD38EA38AEE1A0458568, ___nativeObj_2)); }
	inline intptr_t get_nativeObj_2() const { return ___nativeObj_2; }
	inline intptr_t* get_address_of_nativeObj_2() { return &___nativeObj_2; }
	inline void set_nativeObj_2(intptr_t value)
	{
		___nativeObj_2 = value;
	}
};


// OpenCvSharp.DisposableCvObject
struct DisposableCvObject_t5E39751FAD49CA698F2EECA50A93C2D9AD4A4775  : public DisposableObject_t758F1156DE1B13B9AC4682BFA359D84880799115
{
public:
	// System.IntPtr OpenCvSharp.DisposableCvObject::ptr
	intptr_t ___ptr_5;
	// System.Boolean OpenCvSharp.DisposableCvObject::disposed
	bool ___disposed_6;

public:
	inline static int32_t get_offset_of_ptr_5() { return static_cast<int32_t>(offsetof(DisposableCvObject_t5E39751FAD49CA698F2EECA50A93C2D9AD4A4775, ___ptr_5)); }
	inline intptr_t get_ptr_5() const { return ___ptr_5; }
	inline intptr_t* get_address_of_ptr_5() { return &___ptr_5; }
	inline void set_ptr_5(intptr_t value)
	{
		___ptr_5 = value;
	}

	inline static int32_t get_offset_of_disposed_6() { return static_cast<int32_t>(offsetof(DisposableCvObject_t5E39751FAD49CA698F2EECA50A93C2D9AD4A4775, ___disposed_6)); }
	inline bool get_disposed_6() const { return ___disposed_6; }
	inline bool* get_address_of_disposed_6() { return &___disposed_6; }
	inline void set_disposed_6(bool value)
	{
		___disposed_6 = value;
	}
};


// OpenCVForUnity.CoreModule.Mat
struct Mat_tD6FE420612022F68485B88CCF7AC51B4EC2F41CE  : public DisposableOpenCVObject_tC5A6331ECC8C63BC79FFDD38EA38AEE1A0458568
{
public:

public:
};


// OpenCvSharp.Mat
struct Mat_t384A6BE55DC2EC885B4728CACEEE992D74F3DD4D  : public DisposableCvObject_t5E39751FAD49CA698F2EECA50A93C2D9AD4A4775
{
public:
	// System.Boolean OpenCvSharp.Mat::disposed
	bool ___disposed_7;
	// OpenCvSharp.Mat/MatExprIndexer OpenCvSharp.Mat::matExprIndexer
	MatExprIndexer_t974E175CB4E3337A66B0BA3E7A0BDFBB2428840E * ___matExprIndexer_9;
	// OpenCvSharp.Mat/ColExprIndexer OpenCvSharp.Mat::colExprIndexer
	ColExprIndexer_t7BE98B3E69BC45B27EF78858459AA2A47A7F632F * ___colExprIndexer_10;
	// OpenCvSharp.Mat/RowExprIndexer OpenCvSharp.Mat::rowExprIndexer
	RowExprIndexer_t9F0095829DDB9D709C2B312482BBA5B7B2DA2C6F * ___rowExprIndexer_11;
	// OpenCvSharp.Mat/ColIndexer OpenCvSharp.Mat::colIndexer
	ColIndexer_t31825B233FA28DD352A86C1AEF2302E34B7ADD3F * ___colIndexer_12;
	// OpenCvSharp.Mat/RowIndexer OpenCvSharp.Mat::rowIndexer
	RowIndexer_tAC3682A4FD16D8EAD29F8B0C5C1589C3CEE58456 * ___rowIndexer_13;

public:
	inline static int32_t get_offset_of_disposed_7() { return static_cast<int32_t>(offsetof(Mat_t384A6BE55DC2EC885B4728CACEEE992D74F3DD4D, ___disposed_7)); }
	inline bool get_disposed_7() const { return ___disposed_7; }
	inline bool* get_address_of_disposed_7() { return &___disposed_7; }
	inline void set_disposed_7(bool value)
	{
		___disposed_7 = value;
	}

	inline static int32_t get_offset_of_matExprIndexer_9() { return static_cast<int32_t>(offsetof(Mat_t384A6BE55DC2EC885B4728CACEEE992D74F3DD4D, ___matExprIndexer_9)); }
	inline MatExprIndexer_t974E175CB4E3337A66B0BA3E7A0BDFBB2428840E * get_matExprIndexer_9() const { return ___matExprIndexer_9; }
	inline MatExprIndexer_t974E175CB4E3337A66B0BA3E7A0BDFBB2428840E ** get_address_of_matExprIndexer_9() { return &___matExprIndexer_9; }
	inline void set_matExprIndexer_9(MatExprIndexer_t974E175CB4E3337A66B0BA3E7A0BDFBB2428840E * value)
	{
		___matExprIndexer_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___matExprIndexer_9), (void*)value);
	}

	inline static int32_t get_offset_of_colExprIndexer_10() { return static_cast<int32_t>(offsetof(Mat_t384A6BE55DC2EC885B4728CACEEE992D74F3DD4D, ___colExprIndexer_10)); }
	inline ColExprIndexer_t7BE98B3E69BC45B27EF78858459AA2A47A7F632F * get_colExprIndexer_10() const { return ___colExprIndexer_10; }
	inline ColExprIndexer_t7BE98B3E69BC45B27EF78858459AA2A47A7F632F ** get_address_of_colExprIndexer_10() { return &___colExprIndexer_10; }
	inline void set_colExprIndexer_10(ColExprIndexer_t7BE98B3E69BC45B27EF78858459AA2A47A7F632F * value)
	{
		___colExprIndexer_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___colExprIndexer_10), (void*)value);
	}

	inline static int32_t get_offset_of_rowExprIndexer_11() { return static_cast<int32_t>(offsetof(Mat_t384A6BE55DC2EC885B4728CACEEE992D74F3DD4D, ___rowExprIndexer_11)); }
	inline RowExprIndexer_t9F0095829DDB9D709C2B312482BBA5B7B2DA2C6F * get_rowExprIndexer_11() const { return ___rowExprIndexer_11; }
	inline RowExprIndexer_t9F0095829DDB9D709C2B312482BBA5B7B2DA2C6F ** get_address_of_rowExprIndexer_11() { return &___rowExprIndexer_11; }
	inline void set_rowExprIndexer_11(RowExprIndexer_t9F0095829DDB9D709C2B312482BBA5B7B2DA2C6F * value)
	{
		___rowExprIndexer_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___rowExprIndexer_11), (void*)value);
	}

	inline static int32_t get_offset_of_colIndexer_12() { return static_cast<int32_t>(offsetof(Mat_t384A6BE55DC2EC885B4728CACEEE992D74F3DD4D, ___colIndexer_12)); }
	inline ColIndexer_t31825B233FA28DD352A86C1AEF2302E34B7ADD3F * get_colIndexer_12() const { return ___colIndexer_12; }
	inline ColIndexer_t31825B233FA28DD352A86C1AEF2302E34B7ADD3F ** get_address_of_colIndexer_12() { return &___colIndexer_12; }
	inline void set_colIndexer_12(ColIndexer_t31825B233FA28DD352A86C1AEF2302E34B7ADD3F * value)
	{
		___colIndexer_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___colIndexer_12), (void*)value);
	}

	inline static int32_t get_offset_of_rowIndexer_13() { return static_cast<int32_t>(offsetof(Mat_t384A6BE55DC2EC885B4728CACEEE992D74F3DD4D, ___rowIndexer_13)); }
	inline RowIndexer_tAC3682A4FD16D8EAD29F8B0C5C1589C3CEE58456 * get_rowIndexer_13() const { return ___rowIndexer_13; }
	inline RowIndexer_tAC3682A4FD16D8EAD29F8B0C5C1589C3CEE58456 ** get_address_of_rowIndexer_13() { return &___rowIndexer_13; }
	inline void set_rowIndexer_13(RowIndexer_tAC3682A4FD16D8EAD29F8B0C5C1589C3CEE58456 * value)
	{
		___rowIndexer_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___rowIndexer_13), (void*)value);
	}
};

struct Mat_t384A6BE55DC2EC885B4728CACEEE992D74F3DD4D_StaticFields
{
public:
	// System.Int32 OpenCvSharp.Mat::SizeOf
	int32_t ___SizeOf_8;

public:
	inline static int32_t get_offset_of_SizeOf_8() { return static_cast<int32_t>(offsetof(Mat_t384A6BE55DC2EC885B4728CACEEE992D74F3DD4D_StaticFields, ___SizeOf_8)); }
	inline int32_t get_SizeOf_8() const { return ___SizeOf_8; }
	inline int32_t* get_address_of_SizeOf_8() { return &___SizeOf_8; }
	inline void set_SizeOf_8(int32_t value)
	{
		___SizeOf_8 = value;
	}
};


// OpenCvSharp.MatExpr
struct MatExpr_t6436346F446DB1028255F0E5D865452E9AB25A22  : public DisposableCvObject_t5E39751FAD49CA698F2EECA50A93C2D9AD4A4775
{
public:
	// System.Boolean OpenCvSharp.MatExpr::disposed
	bool ___disposed_7;
	// OpenCvSharp.MatExpr/ColIndexer OpenCvSharp.MatExpr::col
	ColIndexer_t88637B73E8E96D676FF51CC4805E65ADF708D436 * ___col_8;
	// OpenCvSharp.MatExpr/RowIndexer OpenCvSharp.MatExpr::row
	RowIndexer_t28CD5015FC4AC913EB9B9FCC1FF82C11DD550287 * ___row_9;

public:
	inline static int32_t get_offset_of_disposed_7() { return static_cast<int32_t>(offsetof(MatExpr_t6436346F446DB1028255F0E5D865452E9AB25A22, ___disposed_7)); }
	inline bool get_disposed_7() const { return ___disposed_7; }
	inline bool* get_address_of_disposed_7() { return &___disposed_7; }
	inline void set_disposed_7(bool value)
	{
		___disposed_7 = value;
	}

	inline static int32_t get_offset_of_col_8() { return static_cast<int32_t>(offsetof(MatExpr_t6436346F446DB1028255F0E5D865452E9AB25A22, ___col_8)); }
	inline ColIndexer_t88637B73E8E96D676FF51CC4805E65ADF708D436 * get_col_8() const { return ___col_8; }
	inline ColIndexer_t88637B73E8E96D676FF51CC4805E65ADF708D436 ** get_address_of_col_8() { return &___col_8; }
	inline void set_col_8(ColIndexer_t88637B73E8E96D676FF51CC4805E65ADF708D436 * value)
	{
		___col_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___col_8), (void*)value);
	}

	inline static int32_t get_offset_of_row_9() { return static_cast<int32_t>(offsetof(MatExpr_t6436346F446DB1028255F0E5D865452E9AB25A22, ___row_9)); }
	inline RowIndexer_t28CD5015FC4AC913EB9B9FCC1FF82C11DD550287 * get_row_9() const { return ___row_9; }
	inline RowIndexer_t28CD5015FC4AC913EB9B9FCC1FF82C11DD550287 ** get_address_of_row_9() { return &___row_9; }
	inline void set_row_9(RowIndexer_t28CD5015FC4AC913EB9B9FCC1FF82C11DD550287 * value)
	{
		___row_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___row_9), (void*)value);
	}
};


// OpenCVForUnity.CoreModule.MatOfByte
struct MatOfByte_t1B497D7333B83843728376A69AD6756B7633BAD9  : public Mat_tD6FE420612022F68485B88CCF7AC51B4EC2F41CE
{
public:

public:
};


// OpenCVForUnity.CoreModule.MatOfDMatch
struct MatOfDMatch_tA22F3D4F785532D30198069E86AF496EAD0F4532  : public Mat_tD6FE420612022F68485B88CCF7AC51B4EC2F41CE
{
public:

public:
};


// OpenCVForUnity.CoreModule.MatOfDouble
struct MatOfDouble_t329E84324B89718BE73BFBA5051DA1DA9582F08B  : public Mat_tD6FE420612022F68485B88CCF7AC51B4EC2F41CE
{
public:

public:
};


// OpenCVForUnity.CoreModule.MatOfFloat
struct MatOfFloat_t67A23878856137EFD9A61469E2FD94549F55C267  : public Mat_tD6FE420612022F68485B88CCF7AC51B4EC2F41CE
{
public:

public:
};


// OpenCvSharp.Mat`2<System.Byte,OpenCvSharp.MatOfByte>
struct Mat_2_t577D9874F8E1F4BC4927EFAD70792F713BF0E599  : public Mat_t384A6BE55DC2EC885B4728CACEEE992D74F3DD4D
{
public:
	// System.Boolean OpenCvSharp.Mat`2::disposed
	bool ___disposed_14;
	// OpenCvSharp.Mat OpenCvSharp.Mat`2::sourceMat
	Mat_t384A6BE55DC2EC885B4728CACEEE992D74F3DD4D * ___sourceMat_15;

public:
	inline static int32_t get_offset_of_disposed_14() { return static_cast<int32_t>(offsetof(Mat_2_t577D9874F8E1F4BC4927EFAD70792F713BF0E599, ___disposed_14)); }
	inline bool get_disposed_14() const { return ___disposed_14; }
	inline bool* get_address_of_disposed_14() { return &___disposed_14; }
	inline void set_disposed_14(bool value)
	{
		___disposed_14 = value;
	}

	inline static int32_t get_offset_of_sourceMat_15() { return static_cast<int32_t>(offsetof(Mat_2_t577D9874F8E1F4BC4927EFAD70792F713BF0E599, ___sourceMat_15)); }
	inline Mat_t384A6BE55DC2EC885B4728CACEEE992D74F3DD4D * get_sourceMat_15() const { return ___sourceMat_15; }
	inline Mat_t384A6BE55DC2EC885B4728CACEEE992D74F3DD4D ** get_address_of_sourceMat_15() { return &___sourceMat_15; }
	inline void set_sourceMat_15(Mat_t384A6BE55DC2EC885B4728CACEEE992D74F3DD4D * value)
	{
		___sourceMat_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sourceMat_15), (void*)value);
	}
};


// OpenCvSharp.Mat`2<OpenCvSharp.DMatch,OpenCvSharp.MatOfDMatch>
struct Mat_2_tB50B8E9B98A5FC586B6C84C1A8FF7A9571252AE9  : public Mat_t384A6BE55DC2EC885B4728CACEEE992D74F3DD4D
{
public:
	// System.Boolean OpenCvSharp.Mat`2::disposed
	bool ___disposed_14;
	// OpenCvSharp.Mat OpenCvSharp.Mat`2::sourceMat
	Mat_t384A6BE55DC2EC885B4728CACEEE992D74F3DD4D * ___sourceMat_15;

public:
	inline static int32_t get_offset_of_disposed_14() { return static_cast<int32_t>(offsetof(Mat_2_tB50B8E9B98A5FC586B6C84C1A8FF7A9571252AE9, ___disposed_14)); }
	inline bool get_disposed_14() const { return ___disposed_14; }
	inline bool* get_address_of_disposed_14() { return &___disposed_14; }
	inline void set_disposed_14(bool value)
	{
		___disposed_14 = value;
	}

	inline static int32_t get_offset_of_sourceMat_15() { return static_cast<int32_t>(offsetof(Mat_2_tB50B8E9B98A5FC586B6C84C1A8FF7A9571252AE9, ___sourceMat_15)); }
	inline Mat_t384A6BE55DC2EC885B4728CACEEE992D74F3DD4D * get_sourceMat_15() const { return ___sourceMat_15; }
	inline Mat_t384A6BE55DC2EC885B4728CACEEE992D74F3DD4D ** get_address_of_sourceMat_15() { return &___sourceMat_15; }
	inline void set_sourceMat_15(Mat_t384A6BE55DC2EC885B4728CACEEE992D74F3DD4D * value)
	{
		___sourceMat_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sourceMat_15), (void*)value);
	}
};


// OpenCvSharp.Mat`2<System.Double,OpenCvSharp.MatOfDouble>
struct Mat_2_t05BFBEEE1CF84EFC1985D9E25A9B598305A5221D  : public Mat_t384A6BE55DC2EC885B4728CACEEE992D74F3DD4D
{
public:
	// System.Boolean OpenCvSharp.Mat`2::disposed
	bool ___disposed_14;
	// OpenCvSharp.Mat OpenCvSharp.Mat`2::sourceMat
	Mat_t384A6BE55DC2EC885B4728CACEEE992D74F3DD4D * ___sourceMat_15;

public:
	inline static int32_t get_offset_of_disposed_14() { return static_cast<int32_t>(offsetof(Mat_2_t05BFBEEE1CF84EFC1985D9E25A9B598305A5221D, ___disposed_14)); }
	inline bool get_disposed_14() const { return ___disposed_14; }
	inline bool* get_address_of_disposed_14() { return &___disposed_14; }
	inline void set_disposed_14(bool value)
	{
		___disposed_14 = value;
	}

	inline static int32_t get_offset_of_sourceMat_15() { return static_cast<int32_t>(offsetof(Mat_2_t05BFBEEE1CF84EFC1985D9E25A9B598305A5221D, ___sourceMat_15)); }
	inline Mat_t384A6BE55DC2EC885B4728CACEEE992D74F3DD4D * get_sourceMat_15() const { return ___sourceMat_15; }
	inline Mat_t384A6BE55DC2EC885B4728CACEEE992D74F3DD4D ** get_address_of_sourceMat_15() { return &___sourceMat_15; }
	inline void set_sourceMat_15(Mat_t384A6BE55DC2EC885B4728CACEEE992D74F3DD4D * value)
	{
		___sourceMat_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sourceMat_15), (void*)value);
	}
};


// OpenCvSharp.Mat`2<System.Single,OpenCvSharp.MatOfFloat>
struct Mat_2_t33BE1D12D6933D03374FAA394735E27EE5B6B9CB  : public Mat_t384A6BE55DC2EC885B4728CACEEE992D74F3DD4D
{
public:
	// System.Boolean OpenCvSharp.Mat`2::disposed
	bool ___disposed_14;
	// OpenCvSharp.Mat OpenCvSharp.Mat`2::sourceMat
	Mat_t384A6BE55DC2EC885B4728CACEEE992D74F3DD4D * ___sourceMat_15;

public:
	inline static int32_t get_offset_of_disposed_14() { return static_cast<int32_t>(offsetof(Mat_2_t33BE1D12D6933D03374FAA394735E27EE5B6B9CB, ___disposed_14)); }
	inline bool get_disposed_14() const { return ___disposed_14; }
	inline bool* get_address_of_disposed_14() { return &___disposed_14; }
	inline void set_disposed_14(bool value)
	{
		___disposed_14 = value;
	}

	inline static int32_t get_offset_of_sourceMat_15() { return static_cast<int32_t>(offsetof(Mat_2_t33BE1D12D6933D03374FAA394735E27EE5B6B9CB, ___sourceMat_15)); }
	inline Mat_t384A6BE55DC2EC885B4728CACEEE992D74F3DD4D * get_sourceMat_15() const { return ___sourceMat_15; }
	inline Mat_t384A6BE55DC2EC885B4728CACEEE992D74F3DD4D ** get_address_of_sourceMat_15() { return &___sourceMat_15; }
	inline void set_sourceMat_15(Mat_t384A6BE55DC2EC885B4728CACEEE992D74F3DD4D * value)
	{
		___sourceMat_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sourceMat_15), (void*)value);
	}
};


// OpenCvSharp.Mat`2<OpenCvSharp.Vec3b,OpenCvSharp.MatOfByte3>
struct Mat_2_tC7874E30F904315D6C4E6948E9230AF664913190  : public Mat_t384A6BE55DC2EC885B4728CACEEE992D74F3DD4D
{
public:
	// System.Boolean OpenCvSharp.Mat`2::disposed
	bool ___disposed_14;
	// OpenCvSharp.Mat OpenCvSharp.Mat`2::sourceMat
	Mat_t384A6BE55DC2EC885B4728CACEEE992D74F3DD4D * ___sourceMat_15;

public:
	inline static int32_t get_offset_of_disposed_14() { return static_cast<int32_t>(offsetof(Mat_2_tC7874E30F904315D6C4E6948E9230AF664913190, ___disposed_14)); }
	inline bool get_disposed_14() const { return ___disposed_14; }
	inline bool* get_address_of_disposed_14() { return &___disposed_14; }
	inline void set_disposed_14(bool value)
	{
		___disposed_14 = value;
	}

	inline static int32_t get_offset_of_sourceMat_15() { return static_cast<int32_t>(offsetof(Mat_2_tC7874E30F904315D6C4E6948E9230AF664913190, ___sourceMat_15)); }
	inline Mat_t384A6BE55DC2EC885B4728CACEEE992D74F3DD4D * get_sourceMat_15() const { return ___sourceMat_15; }
	inline Mat_t384A6BE55DC2EC885B4728CACEEE992D74F3DD4D ** get_address_of_sourceMat_15() { return &___sourceMat_15; }
	inline void set_sourceMat_15(Mat_t384A6BE55DC2EC885B4728CACEEE992D74F3DD4D * value)
	{
		___sourceMat_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sourceMat_15), (void*)value);
	}
};


// OpenCvSharp.Mat`2<OpenCvSharp.Vec3d,OpenCvSharp.MatOfDouble3>
struct Mat_2_tFED73C9AB6906B0A64C4092F4E9F543DD15A8A8E  : public Mat_t384A6BE55DC2EC885B4728CACEEE992D74F3DD4D
{
public:
	// System.Boolean OpenCvSharp.Mat`2::disposed
	bool ___disposed_14;
	// OpenCvSharp.Mat OpenCvSharp.Mat`2::sourceMat
	Mat_t384A6BE55DC2EC885B4728CACEEE992D74F3DD4D * ___sourceMat_15;

public:
	inline static int32_t get_offset_of_disposed_14() { return static_cast<int32_t>(offsetof(Mat_2_tFED73C9AB6906B0A64C4092F4E9F543DD15A8A8E, ___disposed_14)); }
	inline bool get_disposed_14() const { return ___disposed_14; }
	inline bool* get_address_of_disposed_14() { return &___disposed_14; }
	inline void set_disposed_14(bool value)
	{
		___disposed_14 = value;
	}

	inline static int32_t get_offset_of_sourceMat_15() { return static_cast<int32_t>(offsetof(Mat_2_tFED73C9AB6906B0A64C4092F4E9F543DD15A8A8E, ___sourceMat_15)); }
	inline Mat_t384A6BE55DC2EC885B4728CACEEE992D74F3DD4D * get_sourceMat_15() const { return ___sourceMat_15; }
	inline Mat_t384A6BE55DC2EC885B4728CACEEE992D74F3DD4D ** get_address_of_sourceMat_15() { return &___sourceMat_15; }
	inline void set_sourceMat_15(Mat_t384A6BE55DC2EC885B4728CACEEE992D74F3DD4D * value)
	{
		___sourceMat_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sourceMat_15), (void*)value);
	}
};


// OpenCvSharp.MatOfByte
struct MatOfByte_t68642FB2D7441D87F5694564902953FDCE3395B0  : public Mat_2_t577D9874F8E1F4BC4927EFAD70792F713BF0E599
{
public:

public:
};

struct MatOfByte_t68642FB2D7441D87F5694564902953FDCE3395B0_StaticFields
{
public:
	// OpenCvSharp.MatType OpenCvSharp.MatOfByte::ThisType
	MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523  ___ThisType_16;

public:
	inline static int32_t get_offset_of_ThisType_16() { return static_cast<int32_t>(offsetof(MatOfByte_t68642FB2D7441D87F5694564902953FDCE3395B0_StaticFields, ___ThisType_16)); }
	inline MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523  get_ThisType_16() const { return ___ThisType_16; }
	inline MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523 * get_address_of_ThisType_16() { return &___ThisType_16; }
	inline void set_ThisType_16(MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523  value)
	{
		___ThisType_16 = value;
	}
};


// OpenCvSharp.MatOfByte3
struct MatOfByte3_t38A4C9D9F3BD3A472BBB52412AB2D161A8DED9D9  : public Mat_2_tC7874E30F904315D6C4E6948E9230AF664913190
{
public:

public:
};

struct MatOfByte3_t38A4C9D9F3BD3A472BBB52412AB2D161A8DED9D9_StaticFields
{
public:
	// OpenCvSharp.MatType OpenCvSharp.MatOfByte3::ThisType
	MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523  ___ThisType_16;

public:
	inline static int32_t get_offset_of_ThisType_16() { return static_cast<int32_t>(offsetof(MatOfByte3_t38A4C9D9F3BD3A472BBB52412AB2D161A8DED9D9_StaticFields, ___ThisType_16)); }
	inline MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523  get_ThisType_16() const { return ___ThisType_16; }
	inline MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523 * get_address_of_ThisType_16() { return &___ThisType_16; }
	inline void set_ThisType_16(MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523  value)
	{
		___ThisType_16 = value;
	}
};


// OpenCvSharp.MatOfDMatch
struct MatOfDMatch_t2B2BF0D6362711FAF6A8B31498A1A39B3469417E  : public Mat_2_tB50B8E9B98A5FC586B6C84C1A8FF7A9571252AE9
{
public:

public:
};

struct MatOfDMatch_t2B2BF0D6362711FAF6A8B31498A1A39B3469417E_StaticFields
{
public:
	// OpenCvSharp.MatType OpenCvSharp.MatOfDMatch::ThisType
	MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523  ___ThisType_16;

public:
	inline static int32_t get_offset_of_ThisType_16() { return static_cast<int32_t>(offsetof(MatOfDMatch_t2B2BF0D6362711FAF6A8B31498A1A39B3469417E_StaticFields, ___ThisType_16)); }
	inline MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523  get_ThisType_16() const { return ___ThisType_16; }
	inline MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523 * get_address_of_ThisType_16() { return &___ThisType_16; }
	inline void set_ThisType_16(MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523  value)
	{
		___ThisType_16 = value;
	}
};


// OpenCvSharp.MatOfDouble
struct MatOfDouble_tA65BB18DA81D92CC5A26855BB62EAD0D84B6852E  : public Mat_2_t05BFBEEE1CF84EFC1985D9E25A9B598305A5221D
{
public:

public:
};

struct MatOfDouble_tA65BB18DA81D92CC5A26855BB62EAD0D84B6852E_StaticFields
{
public:
	// OpenCvSharp.MatType OpenCvSharp.MatOfDouble::ThisType
	MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523  ___ThisType_16;

public:
	inline static int32_t get_offset_of_ThisType_16() { return static_cast<int32_t>(offsetof(MatOfDouble_tA65BB18DA81D92CC5A26855BB62EAD0D84B6852E_StaticFields, ___ThisType_16)); }
	inline MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523  get_ThisType_16() const { return ___ThisType_16; }
	inline MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523 * get_address_of_ThisType_16() { return &___ThisType_16; }
	inline void set_ThisType_16(MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523  value)
	{
		___ThisType_16 = value;
	}
};


// OpenCvSharp.MatOfDouble3
struct MatOfDouble3_tB9E01D95106E4B541A1BBEA9599808BA3A682F37  : public Mat_2_tFED73C9AB6906B0A64C4092F4E9F543DD15A8A8E
{
public:

public:
};

struct MatOfDouble3_tB9E01D95106E4B541A1BBEA9599808BA3A682F37_StaticFields
{
public:
	// OpenCvSharp.MatType OpenCvSharp.MatOfDouble3::ThisType
	MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523  ___ThisType_16;

public:
	inline static int32_t get_offset_of_ThisType_16() { return static_cast<int32_t>(offsetof(MatOfDouble3_tB9E01D95106E4B541A1BBEA9599808BA3A682F37_StaticFields, ___ThisType_16)); }
	inline MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523  get_ThisType_16() const { return ___ThisType_16; }
	inline MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523 * get_address_of_ThisType_16() { return &___ThisType_16; }
	inline void set_ThisType_16(MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523  value)
	{
		___ThisType_16 = value;
	}
};


// OpenCvSharp.MatOfFloat
struct MatOfFloat_t1B02C89C5152A26A4FB7A04C847E8353A52805B1  : public Mat_2_t33BE1D12D6933D03374FAA394735E27EE5B6B9CB
{
public:

public:
};

struct MatOfFloat_t1B02C89C5152A26A4FB7A04C847E8353A52805B1_StaticFields
{
public:
	// OpenCvSharp.MatType OpenCvSharp.MatOfFloat::ThisType
	MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523  ___ThisType_16;

public:
	inline static int32_t get_offset_of_ThisType_16() { return static_cast<int32_t>(offsetof(MatOfFloat_t1B02C89C5152A26A4FB7A04C847E8353A52805B1_StaticFields, ___ThisType_16)); }
	inline MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523  get_ThisType_16() const { return ___ThisType_16; }
	inline MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523 * get_address_of_ThisType_16() { return &___ThisType_16; }
	inline void set_ThisType_16(MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523  value)
	{
		___ThisType_16 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

il2cpp_hresult_t IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999_ComCallableWrapperProjectedMethod(RuntimeObject* __this);
il2cpp_hresult_t IIterable_1_First_mFB95F2845D73300049FCB9B21FE7ACC3473E5E66_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IIterator_1_t6A965FDCA7EF0FD28DFA23C03C7491D6F48B19FC** comReturnValue);
il2cpp_hresult_t IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue);
il2cpp_hresult_t IIterable_1_First_m4C15B56B4F649EA2A68C0591FF33164F3F101C72_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IIterator_1_t59FD14BF237AECD1747A302E02AE952CAC73C11D** comReturnValue);
il2cpp_hresult_t IIterable_1_First_mBD8D20BBA2E9F188C15175F2C9AB4039C6400ED1_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IIterator_1_t53A3C573D4888D0C268E9C0D9515A4BDAD329CCC** comReturnValue);



// COM Callable Wrapper for OpenCvSharp.Mat
struct Mat_t384A6BE55DC2EC885B4728CACEEE992D74F3DD4D_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Mat_t384A6BE55DC2EC885B4728CACEEE992D74F3DD4D_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline Mat_t384A6BE55DC2EC885B4728CACEEE992D74F3DD4D_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Mat_t384A6BE55DC2EC885B4728CACEEE992D74F3DD4D_ComCallableWrapper>(obj) {}

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

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Mat_t384A6BE55DC2EC885B4728CACEEE992D74F3DD4D(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Mat_t384A6BE55DC2EC885B4728CACEEE992D74F3DD4D_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Mat_t384A6BE55DC2EC885B4728CACEEE992D74F3DD4D_ComCallableWrapper(obj));
}

// COM Callable Wrapper for OpenCvSharp.MatExpr
struct MatExpr_t6436346F446DB1028255F0E5D865452E9AB25A22_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<MatExpr_t6436346F446DB1028255F0E5D865452E9AB25A22_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline MatExpr_t6436346F446DB1028255F0E5D865452E9AB25A22_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<MatExpr_t6436346F446DB1028255F0E5D865452E9AB25A22_ComCallableWrapper>(obj) {}

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

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_MatExpr_t6436346F446DB1028255F0E5D865452E9AB25A22(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(MatExpr_t6436346F446DB1028255F0E5D865452E9AB25A22_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) MatExpr_t6436346F446DB1028255F0E5D865452E9AB25A22_ComCallableWrapper(obj));
}

// COM Callable Wrapper for OpenCVForUnity.CoreModule.MatOfByte
struct MatOfByte_t1B497D7333B83843728376A69AD6756B7633BAD9_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<MatOfByte_t1B497D7333B83843728376A69AD6756B7633BAD9_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline MatOfByte_t1B497D7333B83843728376A69AD6756B7633BAD9_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<MatOfByte_t1B497D7333B83843728376A69AD6756B7633BAD9_ComCallableWrapper>(obj) {}

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

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_MatOfByte_t1B497D7333B83843728376A69AD6756B7633BAD9(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(MatOfByte_t1B497D7333B83843728376A69AD6756B7633BAD9_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) MatOfByte_t1B497D7333B83843728376A69AD6756B7633BAD9_ComCallableWrapper(obj));
}

// COM Callable Wrapper for OpenCvSharp.MatOfByte
struct MatOfByte_t68642FB2D7441D87F5694564902953FDCE3395B0_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<MatOfByte_t68642FB2D7441D87F5694564902953FDCE3395B0_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953, IIterable_1_tD0597EBCA288E19261E4CD889A045D4DED68F0D5, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8
{
	inline MatOfByte_t68642FB2D7441D87F5694564902953FDCE3395B0_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<MatOfByte_t68642FB2D7441D87F5694564902953FDCE3395B0_ComCallableWrapper>(obj) {}

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

		if (::memcmp(&iid, &IIterable_1_tD0597EBCA288E19261E4CD889A045D4DED68F0D5::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_tD0597EBCA288E19261E4CD889A045D4DED68F0D5*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8*>(this);
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
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(3);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;
		interfaceIds[1] = IIterable_1_tD0597EBCA288E19261E4CD889A045D4DED68F0D5::IID;
		interfaceIds[2] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;

		*iidCount = 3;
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

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_mFB95F2845D73300049FCB9B21FE7ACC3473E5E66(IIterator_1_t6A965FDCA7EF0FD28DFA23C03C7491D6F48B19FC** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_mFB95F2845D73300049FCB9B21FE7ACC3473E5E66_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_MatOfByte_t68642FB2D7441D87F5694564902953FDCE3395B0(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(MatOfByte_t68642FB2D7441D87F5694564902953FDCE3395B0_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) MatOfByte_t68642FB2D7441D87F5694564902953FDCE3395B0_ComCallableWrapper(obj));
}

// COM Callable Wrapper for OpenCvSharp.MatOfByte3
struct MatOfByte3_t38A4C9D9F3BD3A472BBB52412AB2D161A8DED9D9_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<MatOfByte3_t38A4C9D9F3BD3A472BBB52412AB2D161A8DED9D9_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8
{
	inline MatOfByte3_t38A4C9D9F3BD3A472BBB52412AB2D161A8DED9D9_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<MatOfByte3_t38A4C9D9F3BD3A472BBB52412AB2D161A8DED9D9_ComCallableWrapper>(obj) {}

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

		if (::memcmp(&iid, &IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8*>(this);
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
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(2);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;
		interfaceIds[1] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;

		*iidCount = 2;
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

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_MatOfByte3_t38A4C9D9F3BD3A472BBB52412AB2D161A8DED9D9(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(MatOfByte3_t38A4C9D9F3BD3A472BBB52412AB2D161A8DED9D9_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) MatOfByte3_t38A4C9D9F3BD3A472BBB52412AB2D161A8DED9D9_ComCallableWrapper(obj));
}

// COM Callable Wrapper for OpenCVForUnity.CoreModule.MatOfDMatch
struct MatOfDMatch_tA22F3D4F785532D30198069E86AF496EAD0F4532_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<MatOfDMatch_tA22F3D4F785532D30198069E86AF496EAD0F4532_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline MatOfDMatch_tA22F3D4F785532D30198069E86AF496EAD0F4532_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<MatOfDMatch_tA22F3D4F785532D30198069E86AF496EAD0F4532_ComCallableWrapper>(obj) {}

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

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_MatOfDMatch_tA22F3D4F785532D30198069E86AF496EAD0F4532(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(MatOfDMatch_tA22F3D4F785532D30198069E86AF496EAD0F4532_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) MatOfDMatch_tA22F3D4F785532D30198069E86AF496EAD0F4532_ComCallableWrapper(obj));
}

// COM Callable Wrapper for OpenCvSharp.MatOfDMatch
struct MatOfDMatch_t2B2BF0D6362711FAF6A8B31498A1A39B3469417E_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<MatOfDMatch_t2B2BF0D6362711FAF6A8B31498A1A39B3469417E_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8
{
	inline MatOfDMatch_t2B2BF0D6362711FAF6A8B31498A1A39B3469417E_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<MatOfDMatch_t2B2BF0D6362711FAF6A8B31498A1A39B3469417E_ComCallableWrapper>(obj) {}

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

		if (::memcmp(&iid, &IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8*>(this);
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
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(2);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;
		interfaceIds[1] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;

		*iidCount = 2;
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

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_MatOfDMatch_t2B2BF0D6362711FAF6A8B31498A1A39B3469417E(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(MatOfDMatch_t2B2BF0D6362711FAF6A8B31498A1A39B3469417E_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) MatOfDMatch_t2B2BF0D6362711FAF6A8B31498A1A39B3469417E_ComCallableWrapper(obj));
}

// COM Callable Wrapper for OpenCVForUnity.CoreModule.MatOfDouble
struct MatOfDouble_t329E84324B89718BE73BFBA5051DA1DA9582F08B_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<MatOfDouble_t329E84324B89718BE73BFBA5051DA1DA9582F08B_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline MatOfDouble_t329E84324B89718BE73BFBA5051DA1DA9582F08B_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<MatOfDouble_t329E84324B89718BE73BFBA5051DA1DA9582F08B_ComCallableWrapper>(obj) {}

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

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_MatOfDouble_t329E84324B89718BE73BFBA5051DA1DA9582F08B(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(MatOfDouble_t329E84324B89718BE73BFBA5051DA1DA9582F08B_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) MatOfDouble_t329E84324B89718BE73BFBA5051DA1DA9582F08B_ComCallableWrapper(obj));
}

// COM Callable Wrapper for OpenCvSharp.MatOfDouble
struct MatOfDouble_tA65BB18DA81D92CC5A26855BB62EAD0D84B6852E_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<MatOfDouble_tA65BB18DA81D92CC5A26855BB62EAD0D84B6852E_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953, IIterable_1_t4464DD78E1BE52C59BBF4333178B62D903ABACEA, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8
{
	inline MatOfDouble_tA65BB18DA81D92CC5A26855BB62EAD0D84B6852E_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<MatOfDouble_tA65BB18DA81D92CC5A26855BB62EAD0D84B6852E_ComCallableWrapper>(obj) {}

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

		if (::memcmp(&iid, &IIterable_1_t4464DD78E1BE52C59BBF4333178B62D903ABACEA::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_t4464DD78E1BE52C59BBF4333178B62D903ABACEA*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8*>(this);
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
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(3);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;
		interfaceIds[1] = IIterable_1_t4464DD78E1BE52C59BBF4333178B62D903ABACEA::IID;
		interfaceIds[2] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;

		*iidCount = 3;
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

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m4C15B56B4F649EA2A68C0591FF33164F3F101C72(IIterator_1_t59FD14BF237AECD1747A302E02AE952CAC73C11D** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_m4C15B56B4F649EA2A68C0591FF33164F3F101C72_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_MatOfDouble_tA65BB18DA81D92CC5A26855BB62EAD0D84B6852E(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(MatOfDouble_tA65BB18DA81D92CC5A26855BB62EAD0D84B6852E_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) MatOfDouble_tA65BB18DA81D92CC5A26855BB62EAD0D84B6852E_ComCallableWrapper(obj));
}

// COM Callable Wrapper for OpenCvSharp.MatOfDouble3
struct MatOfDouble3_tB9E01D95106E4B541A1BBEA9599808BA3A682F37_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<MatOfDouble3_tB9E01D95106E4B541A1BBEA9599808BA3A682F37_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8
{
	inline MatOfDouble3_tB9E01D95106E4B541A1BBEA9599808BA3A682F37_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<MatOfDouble3_tB9E01D95106E4B541A1BBEA9599808BA3A682F37_ComCallableWrapper>(obj) {}

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

		if (::memcmp(&iid, &IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8*>(this);
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
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(2);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;
		interfaceIds[1] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;

		*iidCount = 2;
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

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_MatOfDouble3_tB9E01D95106E4B541A1BBEA9599808BA3A682F37(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(MatOfDouble3_tB9E01D95106E4B541A1BBEA9599808BA3A682F37_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) MatOfDouble3_tB9E01D95106E4B541A1BBEA9599808BA3A682F37_ComCallableWrapper(obj));
}

// COM Callable Wrapper for OpenCVForUnity.CoreModule.MatOfFloat
struct MatOfFloat_t67A23878856137EFD9A61469E2FD94549F55C267_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<MatOfFloat_t67A23878856137EFD9A61469E2FD94549F55C267_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline MatOfFloat_t67A23878856137EFD9A61469E2FD94549F55C267_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<MatOfFloat_t67A23878856137EFD9A61469E2FD94549F55C267_ComCallableWrapper>(obj) {}

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

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_MatOfFloat_t67A23878856137EFD9A61469E2FD94549F55C267(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(MatOfFloat_t67A23878856137EFD9A61469E2FD94549F55C267_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) MatOfFloat_t67A23878856137EFD9A61469E2FD94549F55C267_ComCallableWrapper(obj));
}

// COM Callable Wrapper for OpenCvSharp.MatOfFloat
struct MatOfFloat_t1B02C89C5152A26A4FB7A04C847E8353A52805B1_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<MatOfFloat_t1B02C89C5152A26A4FB7A04C847E8353A52805B1_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953, IIterable_1_t0EA6FF8BF23034840DB9F5189AF1D72411992F7E, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8
{
	inline MatOfFloat_t1B02C89C5152A26A4FB7A04C847E8353A52805B1_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<MatOfFloat_t1B02C89C5152A26A4FB7A04C847E8353A52805B1_ComCallableWrapper>(obj) {}

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

		if (::memcmp(&iid, &IIterable_1_t0EA6FF8BF23034840DB9F5189AF1D72411992F7E::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_t0EA6FF8BF23034840DB9F5189AF1D72411992F7E*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8*>(this);
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
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(3);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;
		interfaceIds[1] = IIterable_1_t0EA6FF8BF23034840DB9F5189AF1D72411992F7E::IID;
		interfaceIds[2] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;

		*iidCount = 3;
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

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_mBD8D20BBA2E9F188C15175F2C9AB4039C6400ED1(IIterator_1_t53A3C573D4888D0C268E9C0D9515A4BDAD329CCC** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_mBD8D20BBA2E9F188C15175F2C9AB4039C6400ED1_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_MatOfFloat_t1B02C89C5152A26A4FB7A04C847E8353A52805B1(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(MatOfFloat_t1B02C89C5152A26A4FB7A04C847E8353A52805B1_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) MatOfFloat_t1B02C89C5152A26A4FB7A04C847E8353A52805B1_ComCallableWrapper(obj));
}
