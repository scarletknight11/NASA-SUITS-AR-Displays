#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename T1, typename T2>
struct InterfaceActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
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
template <typename R, typename T1, typename T2>
struct InterfaceFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct InterfaceFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4>
struct InterfaceFuncInvoker4
{
	typedef R (*Func)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5>
struct InterfaceFuncInvoker5
{
	typedef R (*Func)(void*, T1, T2, T3, T4, T5, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, invokeData.method);
	}
};

// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.SByte[]
struct SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.Exception
struct Exception_t;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// LZ4Sharp.ILZ4Compressor
struct ILZ4Compressor_t9926C3929A3CA7AF3D6CFEFE79EDF758DDD0EE42;
// LZ4Sharp.ILZ4Decompressor
struct ILZ4Decompressor_tC46E02B29050D156FD17BB73EF09ABFDC8D40CEF;
// LZ4Sharp.LZ4Compressor32
struct LZ4Compressor32_tB2B2F6E6ED6CD3D21CC3173896599134BB75C1B4;
// LZ4Sharp.LZ4Compressor64
struct LZ4Compressor64_t6D8D18D2CF9521C99528322D9DC031806509039A;
// LZ4Sharp.LZ4Decompressor32
struct LZ4Decompressor32_t687B8355F891786DF2E3030D1F8371C6655A603D;
// LZ4Sharp.LZ4Decompressor64
struct LZ4Decompressor64_t15D10CE43F92442C46FB445A6E0972262FA746C5;
// LZ4Sharp.LZ4Util
struct LZ4Util_tB57EF834298D34C40B14EEFA8B839154E4BDB51E;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// System.String
struct String_t;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;

IL2CPP_EXTERN_C RuntimeClass* ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ILZ4Compressor_t9926C3929A3CA7AF3D6CFEFE79EDF758DDD0EE42_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ILZ4Decompressor_tC46E02B29050D156FD17BB73EF09ABFDC8D40CEF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* LZ4Compressor32_tB2B2F6E6ED6CD3D21CC3173896599134BB75C1B4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* LZ4Compressor64_t6D8D18D2CF9521C99528322D9DC031806509039A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* LZ4Decompressor32_t687B8355F891786DF2E3030D1F8371C6655A603D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* LZ4Decompressor64_t15D10CE43F92442C46FB445A6E0972262FA746C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_t17805B5F7C0D0D788494C2B7E9223B9DDD566C70____10B36DCA5461BA88E704514784312418275EDD4E_0_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_t17805B5F7C0D0D788494C2B7E9223B9DDD566C70____478302FFD7FDF162B416C032A124F955DCC5DAE1_1_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_t17805B5F7C0D0D788494C2B7E9223B9DDD566C70____99D91C09CCCD2860D80BAA555488A517884BD0A1_2_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_t17805B5F7C0D0D788494C2B7E9223B9DDD566C70____B8D0D426F363E914916FE99650BC2E43466675B4_3_FieldInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteralC027C2D33A7990E5219B343D6442136C20FF6746;
IL2CPP_EXTERN_C const RuntimeMethod* LZ4Compressor32__ctor_m0B65DE8A99B93B10FB6664C7D6F9903380BAC104_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* LZ4Compressor64_Compress64K_m3765A951DCC05D1F5A0DB04658305DCBF4AA966D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* LZ4Compressor64_Compress_m5447ABB51EBC44EB5BE7B6B059AE54712B01751C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* LZ4Compressor64__ctor_m600D9E6454F2E0C1C93A5CA2010622A4E8945215_RuntimeMethod_var;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_t64D0BD25185DC5104E020B7C7BCD888F043DB90E 
{
};
struct Il2CppArrayBounds;

// LZ4Sharp.LZ4
struct LZ4_t50DFED6CA49D7BAAA748EB4135F25BEBD6A9F35D  : public RuntimeObject
{
};

// LZ4Sharp.LZ4Compressor32
struct LZ4Compressor32_tB2B2F6E6ED6CD3D21CC3173896599134BB75C1B4  : public RuntimeObject
{
	// System.Byte[] LZ4Sharp.LZ4Compressor32::m_HashTable
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___m_HashTable_17;
};

struct LZ4Compressor32_tB2B2F6E6ED6CD3D21CC3173896599134BB75C1B4_StaticFields
{
	// System.Byte[] LZ4Sharp.LZ4Compressor32::DeBruijnBytePos
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___DeBruijnBytePos_16;
};

// LZ4Sharp.LZ4Compressor64
struct LZ4Compressor64_t6D8D18D2CF9521C99528322D9DC031806509039A  : public RuntimeObject
{
	// System.Byte[] LZ4Sharp.LZ4Compressor64::m_HashTable
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___m_HashTable_17;
};

struct LZ4Compressor64_t6D8D18D2CF9521C99528322D9DC031806509039A_StaticFields
{
	// System.Byte[] LZ4Sharp.LZ4Compressor64::DeBruijnBytePos
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___DeBruijnBytePos_16;
};

// LZ4Sharp.LZ4CompressorFactory
struct LZ4CompressorFactory_t26E5EDC193EF209D145E6734C9620A564D29B488  : public RuntimeObject
{
};

// LZ4Sharp.LZ4Decompressor32
struct LZ4Decompressor32_t687B8355F891786DF2E3030D1F8371C6655A603D  : public RuntimeObject
{
	// System.SByte[] LZ4Sharp.LZ4Decompressor32::m_DecArray
	SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* ___m_DecArray_2;
};

struct LZ4Decompressor32_t687B8355F891786DF2E3030D1F8371C6655A603D_StaticFields
{
	// System.Byte[] LZ4Sharp.LZ4Decompressor32::DeBruijnBytePos
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___DeBruijnBytePos_1;
};

// LZ4Sharp.LZ4Decompressor64
struct LZ4Decompressor64_t15D10CE43F92442C46FB445A6E0972262FA746C5  : public RuntimeObject
{
	// System.SByte[] LZ4Sharp.LZ4Decompressor64::m_DecArray
	SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* ___m_DecArray_2;
	// System.SByte[] LZ4Sharp.LZ4Decompressor64::m_Dec2table
	SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* ___m_Dec2table_3;
};

struct LZ4Decompressor64_t15D10CE43F92442C46FB445A6E0972262FA746C5_StaticFields
{
	// System.Byte[] LZ4Sharp.LZ4Decompressor64::DeBruijnBytePos
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___DeBruijnBytePos_1;
};

// LZ4Sharp.LZ4DecompressorFactory
struct LZ4DecompressorFactory_tA517AA4DF1B7FE5C848D6A0B2830780592016CE8  : public RuntimeObject
{
};

// LZ4Sharp.LZ4Util
struct LZ4Util_tB57EF834298D34C40B14EEFA8B839154E4BDB51E  : public RuntimeObject
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

// System.Int64
struct Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3 
{
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_0;
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

// System.SByte
struct SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5 
{
	// System.SByte System.SByte::m_value
	int8_t ___m_value_0;
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

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=32
struct __StaticArrayInitTypeSizeU3D32_tC88EA10D5E07A520B22FFB3993D798A0CFA9514A 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D32_tC88EA10D5E07A520B22FFB3993D798A0CFA9514A__padding[32];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=64
struct __StaticArrayInitTypeSizeU3D64_t43C09F4D04F55CA1713190D73766E28F2651D84B 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D64_t43C09F4D04F55CA1713190D73766E28F2651D84B__padding[64];
	};
};

// <PrivateImplementationDetails>
struct U3CPrivateImplementationDetailsU3E_t17805B5F7C0D0D788494C2B7E9223B9DDD566C70  : public RuntimeObject
{
};

struct U3CPrivateImplementationDetailsU3E_t17805B5F7C0D0D788494C2B7E9223B9DDD566C70_StaticFields
{
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=64 <PrivateImplementationDetails>::10B36DCA5461BA88E704514784312418275EDD4E
	__StaticArrayInitTypeSizeU3D64_t43C09F4D04F55CA1713190D73766E28F2651D84B ___10B36DCA5461BA88E704514784312418275EDD4E_0;
	// System.Int64 <PrivateImplementationDetails>::478302FFD7FDF162B416C032A124F955DCC5DAE1
	int64_t ___478302FFD7FDF162B416C032A124F955DCC5DAE1_1;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=32 <PrivateImplementationDetails>::99D91C09CCCD2860D80BAA555488A517884BD0A1
	__StaticArrayInitTypeSizeU3D32_tC88EA10D5E07A520B22FFB3993D798A0CFA9514A ___99D91C09CCCD2860D80BAA555488A517884BD0A1_2;
	// System.Int64 <PrivateImplementationDetails>::B8D0D426F363E914916FE99650BC2E43466675B4
	int64_t ___B8D0D426F363E914916FE99650BC2E43466675B4_3;
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

// System.RuntimeFieldHandle
struct RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 
{
	// System.IntPtr System.RuntimeFieldHandle::value
	intptr_t ___value_0;
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
// System.SByte[]
struct SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913  : public RuntimeArray
{
	ALIGN_FIELD (8) int8_t m_Items[1];

	inline int8_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int8_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int8_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int8_t value)
	{
		m_Items[index] = value;
	}
};



// LZ4Sharp.ILZ4Compressor LZ4Sharp.LZ4CompressorFactory::CreateNew()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* LZ4CompressorFactory_CreateNew_m50C20FAC0C1618747CFABECCB78A3A3EFA594405 (const RuntimeMethod* method) ;
// LZ4Sharp.ILZ4Decompressor LZ4Sharp.LZ4DecompressorFactory::CreateNew()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* LZ4DecompressorFactory_CreateNew_m476E75516607ED8163A41D4FF8EC3470FE815CD0 (const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Int32 System.IntPtr::get_Size()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t IntPtr_get_Size_mF11301B9A665D54B8DC89DC6AFE37728B91E6F10 (const RuntimeMethod* method) ;
// System.Void System.Exception::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F (Exception_t* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.Int32 LZ4Sharp.LZ4Compressor32::CalculateMaxCompressedLength(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LZ4Compressor32_CalculateMaxCompressedLength_m50BC70971AB74EC59657586FA976B8B15CC0D8E7 (LZ4Compressor32_tB2B2F6E6ED6CD3D21CC3173896599134BB75C1B4* __this, int32_t ___uncompressedLength0, const RuntimeMethod* method) ;
// System.Int32 LZ4Sharp.LZ4Compressor32::Compress(System.Byte[],System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LZ4Compressor32_Compress_m7594CB741BE726315B4FAC4397CB5EBD90267B89 (LZ4Compressor32_tB2B2F6E6ED6CD3D21CC3173896599134BB75C1B4* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___source0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___dest1, const RuntimeMethod* method) ;
// System.Void System.Buffer::BlockCopy(System.Array,System.Int32,System.Array,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_BlockCopy_mD8CF7EC96ADA7A542CCA3F3C73510624E10197A9 (RuntimeArray* ___src0, int32_t ___srcOffset1, RuntimeArray* ___dst2, int32_t ___dstOffset3, int32_t ___count4, const RuntimeMethod* method) ;
// System.Int32 LZ4Sharp.LZ4Compressor32::Compress64K(System.Byte*,System.Byte*,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LZ4Compressor32_Compress64K_m49C2807E9E0B17E40B1F535957FBFD82EFBB5D52 (LZ4Compressor32_tB2B2F6E6ED6CD3D21CC3173896599134BB75C1B4* __this, uint8_t* ___source0, uint8_t* ___dest1, int32_t ___isize2, int32_t ___maxOutputSize3, const RuntimeMethod* method) ;
// System.Int32 LZ4Sharp.LZ4Compressor32::Compress(System.Byte*,System.Byte*,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LZ4Compressor32_Compress_m5C08439AF4731702587F2121F3B5B22C3ECC86E5 (LZ4Compressor32_tB2B2F6E6ED6CD3D21CC3173896599134BB75C1B4* __this, uint8_t* ___source0, uint8_t* ___dest1, int32_t ___isize2, int32_t ___maxOutputSize3, const RuntimeMethod* method) ;
// System.Void LZ4Sharp.LZ4Compressor32::Clear(System.Byte*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LZ4Compressor32_Clear_m6C91D4FD5F1B8F7CF186ED06A35BB027D6C1A94C (uint8_t* ___ptr0, int32_t ___count1, const RuntimeMethod* method) ;
// System.Void LZ4Sharp.LZ4Util::CopyMemory(System.Byte*,System.Byte*,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LZ4Util_CopyMemory_mE7FF2466FFC0EFEDA278A55F7222EDB2BBE84EDA (uint8_t* ___dst0, uint8_t* ___src1, int64_t ___length2, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.RuntimeHelpers::InitializeArray(System.Array,System.RuntimeFieldHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RuntimeHelpers_InitializeArray_mE10C3436BA703E4D9D41B3F8F365E4C34F9926EF (RuntimeArray* ___array0, RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 ___fldHandle1, const RuntimeMethod* method) ;
// System.Int32 LZ4Sharp.LZ4Compressor64::CalculateMaxCompressedLength(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LZ4Compressor64_CalculateMaxCompressedLength_m4843CAAF6DB4FE4BE43C47942010280F161BC3B6 (LZ4Compressor64_t6D8D18D2CF9521C99528322D9DC031806509039A* __this, int32_t ___uncompressedLength0, const RuntimeMethod* method) ;
// System.Int32 LZ4Sharp.LZ4Compressor64::Compress(System.Byte[],System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LZ4Compressor64_Compress_mF26BD5B61F900516DCE35D7389BF4F497ED50C52 (LZ4Compressor64_t6D8D18D2CF9521C99528322D9DC031806509039A* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___source0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___dest1, const RuntimeMethod* method) ;
// System.Int32 LZ4Sharp.LZ4Compressor64::Compress64K(System.Byte*,System.Byte*,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LZ4Compressor64_Compress64K_m3765A951DCC05D1F5A0DB04658305DCBF4AA966D (LZ4Compressor64_t6D8D18D2CF9521C99528322D9DC031806509039A* __this, uint8_t* ___source0, uint8_t* ___dest1, int32_t ___isize2, int32_t ___maxOutputSize3, const RuntimeMethod* method) ;
// System.Int32 LZ4Sharp.LZ4Compressor64::Compress(System.Byte*,System.Byte*,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LZ4Compressor64_Compress_m5447ABB51EBC44EB5BE7B6B059AE54712B01751C (LZ4Compressor64_t6D8D18D2CF9521C99528322D9DC031806509039A* __this, uint8_t* ___source0, uint8_t* ___dest1, int32_t ___isize2, int32_t ___maxOutputSize3, const RuntimeMethod* method) ;
// System.Void LZ4Sharp.LZ4Compressor64::Clear(System.Byte*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LZ4Compressor64_Clear_mF3F1C066DB7C685F684FB4A1E634BF98297AE13E (uint8_t* ___ptr0, int32_t ___count1, const RuntimeMethod* method) ;
// System.Void LZ4Sharp.LZ4Compressor32::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LZ4Compressor32__ctor_m0B65DE8A99B93B10FB6664C7D6F9903380BAC104 (LZ4Compressor32_tB2B2F6E6ED6CD3D21CC3173896599134BB75C1B4* __this, const RuntimeMethod* method) ;
// System.Void LZ4Sharp.LZ4Compressor64::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LZ4Compressor64__ctor_m600D9E6454F2E0C1C93A5CA2010622A4E8945215 (LZ4Compressor64_t6D8D18D2CF9521C99528322D9DC031806509039A* __this, const RuntimeMethod* method) ;
// System.Int32 LZ4Sharp.LZ4Decompressor32::DecompressKnownSize(System.Byte[],System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LZ4Decompressor32_DecompressKnownSize_mD7FE6A4D351173403517091375743D56DFB8F405 (LZ4Decompressor32_t687B8355F891786DF2E3030D1F8371C6655A603D* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___compressed0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___decompressedBuffer1, int32_t ___decompressedSize2, const RuntimeMethod* method) ;
// System.Int32 LZ4Sharp.LZ4Decompressor32::DecompressKnownSize(System.Byte*,System.Byte*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LZ4Decompressor32_DecompressKnownSize_m73307C359BF1C295D0B9B113F494D8D50BD8D777 (LZ4Decompressor32_t687B8355F891786DF2E3030D1F8371C6655A603D* __this, uint8_t* ___compressed0, uint8_t* ___decompressedBuffer1, int32_t ___decompressedSize2, const RuntimeMethod* method) ;
// System.Int32 LZ4Sharp.LZ4Decompressor32::Decompress(System.Byte[],System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LZ4Decompressor32_Decompress_mF9A947E9CCE591C2D98C00EB97C3B04DAD006D84 (LZ4Decompressor32_t687B8355F891786DF2E3030D1F8371C6655A603D* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___compressedBuffer0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___decompressedBuffer1, int32_t ___compressedSize2, const RuntimeMethod* method) ;
// System.Int32 LZ4Sharp.LZ4Decompressor32::Decompress(System.Byte*,System.Byte*,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LZ4Decompressor32_Decompress_m9EE42BDCBCE622EF6A240AE94778FF0E086601E8 (LZ4Decompressor32_t687B8355F891786DF2E3030D1F8371C6655A603D* __this, uint8_t* ___compressedBuffer0, uint8_t* ___decompressedBuffer1, int32_t ___compressedSize2, int32_t ___maxDecompressedSize3, const RuntimeMethod* method) ;
// System.Int32 LZ4Sharp.LZ4Decompressor64::DecompressKnownSize(System.Byte[],System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LZ4Decompressor64_DecompressKnownSize_m73B119A44BE72148F658A8011074F00C8741A2D5 (LZ4Decompressor64_t15D10CE43F92442C46FB445A6E0972262FA746C5* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___compressed0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___decompressedBuffer1, int32_t ___decompressedSize2, const RuntimeMethod* method) ;
// System.Int32 LZ4Sharp.LZ4Decompressor64::DecompressKnownSize(System.Byte*,System.Byte*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LZ4Decompressor64_DecompressKnownSize_mB92DB225696C44939F9551428D3BBD67BF521FF8 (LZ4Decompressor64_t15D10CE43F92442C46FB445A6E0972262FA746C5* __this, uint8_t* ___compressed0, uint8_t* ___decompressedBuffer1, int32_t ___decompressedSize2, const RuntimeMethod* method) ;
// System.Int32 LZ4Sharp.LZ4Decompressor64::Decompress(System.Byte[],System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LZ4Decompressor64_Decompress_mBBC99BDD596CDA00E2E55BE5CC908E5CC8CB3E7E (LZ4Decompressor64_t15D10CE43F92442C46FB445A6E0972262FA746C5* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___compressedBuffer0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___decompressedBuffer1, int32_t ___compressedSize2, const RuntimeMethod* method) ;
// System.Int32 LZ4Sharp.LZ4Decompressor64::Decompress(System.Byte*,System.Byte*,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LZ4Decompressor64_Decompress_m602A2BD4E8E163E356CF2042C45579B54609B4A5 (LZ4Decompressor64_t15D10CE43F92442C46FB445A6E0972262FA746C5* __this, uint8_t* ___compressedBuffer0, uint8_t* ___decompressedBuffer1, int32_t ___compressedSize2, int32_t ___maxDecompressedSize3, const RuntimeMethod* method) ;
// System.Void LZ4Sharp.LZ4Decompressor32::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LZ4Decompressor32__ctor_mF15FD7D6C30D2E59DD95B3FAF053EA96E4011FFC (LZ4Decompressor32_t687B8355F891786DF2E3030D1F8371C6655A603D* __this, const RuntimeMethod* method) ;
// System.Void LZ4Sharp.LZ4Decompressor64::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LZ4Decompressor64__ctor_m18055D68CBD6CCAD7C02F32DAAF983A9903AFDEB (LZ4Decompressor64_t15D10CE43F92442C46FB445A6E0972262FA746C5* __this, const RuntimeMethod* method) ;
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
// System.Byte[] LZ4Sharp.LZ4::Compress(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* LZ4_Compress_m454028F6E7C2245DF9DB23DA5F1DF4412C2DBDD5 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___source0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ILZ4Compressor_t9926C3929A3CA7AF3D6CFEFE79EDF758DDD0EE42_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0;
		L_0 = LZ4CompressorFactory_CreateNew_m50C20FAC0C1618747CFABECCB78A3A3EFA594405(NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___source0;
		NullCheck(L_0);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2;
		L_2 = InterfaceFuncInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(1 /* System.Byte[] LZ4Sharp.ILZ4Compressor::Compress(System.Byte[]) */, ILZ4Compressor_t9926C3929A3CA7AF3D6CFEFE79EDF758DDD0EE42_il2cpp_TypeInfo_var, L_0, L_1);
		return L_2;
	}
}
// System.Int32 LZ4Sharp.LZ4::CalculateMaxCompressedLength(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LZ4_CalculateMaxCompressedLength_m1B83842857F6F6388BA57FCE1C64837AC93E465B (int32_t ___uncompressedLength0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ILZ4Compressor_t9926C3929A3CA7AF3D6CFEFE79EDF758DDD0EE42_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0;
		L_0 = LZ4CompressorFactory_CreateNew_m50C20FAC0C1618747CFABECCB78A3A3EFA594405(NULL);
		int32_t L_1 = ___uncompressedLength0;
		NullCheck(L_0);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker1< int32_t, int32_t >::Invoke(0 /* System.Int32 LZ4Sharp.ILZ4Compressor::CalculateMaxCompressedLength(System.Int32) */, ILZ4Compressor_t9926C3929A3CA7AF3D6CFEFE79EDF758DDD0EE42_il2cpp_TypeInfo_var, L_0, L_1);
		return L_2;
	}
}
// System.Int32 LZ4Sharp.LZ4::Compress(System.Byte[],System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LZ4_Compress_mC8529373C5CBE15CFAC4188D5C920B76E393F095 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___source0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___dest1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ILZ4Compressor_t9926C3929A3CA7AF3D6CFEFE79EDF758DDD0EE42_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0;
		L_0 = LZ4CompressorFactory_CreateNew_m50C20FAC0C1618747CFABECCB78A3A3EFA594405(NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___source0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___dest1;
		NullCheck(L_0);
		int32_t L_3;
		L_3 = InterfaceFuncInvoker2< int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(2 /* System.Int32 LZ4Sharp.ILZ4Compressor::Compress(System.Byte[],System.Byte[]) */, ILZ4Compressor_t9926C3929A3CA7AF3D6CFEFE79EDF758DDD0EE42_il2cpp_TypeInfo_var, L_0, L_1, L_2);
		return L_3;
	}
}
// System.Int32 LZ4Sharp.LZ4::Compress(System.Byte[],System.Int32,System.Int32,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LZ4_Compress_m29AC38B039FD55D8229E343A28C4F779B667DE2B (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___source0, int32_t ___srcOffset1, int32_t ___count2, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___dest3, int32_t ___dstOffset4, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ILZ4Compressor_t9926C3929A3CA7AF3D6CFEFE79EDF758DDD0EE42_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0;
		L_0 = LZ4CompressorFactory_CreateNew_m50C20FAC0C1618747CFABECCB78A3A3EFA594405(NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___source0;
		int32_t L_2 = ___srcOffset1;
		int32_t L_3 = ___count2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = ___dest3;
		int32_t L_5 = ___dstOffset4;
		NullCheck(L_0);
		int32_t L_6;
		L_6 = InterfaceFuncInvoker5< int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t >::Invoke(3 /* System.Int32 LZ4Sharp.ILZ4Compressor::Compress(System.Byte[],System.Int32,System.Int32,System.Byte[],System.Int32) */, ILZ4Compressor_t9926C3929A3CA7AF3D6CFEFE79EDF758DDD0EE42_il2cpp_TypeInfo_var, L_0, L_1, L_2, L_3, L_4, L_5);
		return L_6;
	}
}
// System.Void LZ4Sharp.LZ4::DecompressKnownSize(System.Byte[],System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LZ4_DecompressKnownSize_mA69D616D011FA376E6FFD0E0EE04010C664B82AA (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___compressed0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___decompressed1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ILZ4Decompressor_tC46E02B29050D156FD17BB73EF09ABFDC8D40CEF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0;
		L_0 = LZ4DecompressorFactory_CreateNew_m476E75516607ED8163A41D4FF8EC3470FE815CD0(NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___compressed0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___decompressed1;
		NullCheck(L_0);
		InterfaceActionInvoker2< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(6 /* System.Void LZ4Sharp.ILZ4Decompressor::DecompressKnownSize(System.Byte[],System.Byte[]) */, ILZ4Decompressor_tC46E02B29050D156FD17BB73EF09ABFDC8D40CEF_il2cpp_TypeInfo_var, L_0, L_1, L_2);
		return;
	}
}
// System.Int32 LZ4Sharp.LZ4::DecompressKnownSize(System.Byte[],System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LZ4_DecompressKnownSize_mF74CEBF75A13CCCFCEA06BC58C678DEADD365E07 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___compressed0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___decompressedBuffer1, int32_t ___decompressedSize2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ILZ4Decompressor_tC46E02B29050D156FD17BB73EF09ABFDC8D40CEF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0;
		L_0 = LZ4DecompressorFactory_CreateNew_m476E75516607ED8163A41D4FF8EC3470FE815CD0(NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___compressed0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___decompressedBuffer1;
		int32_t L_3 = ___decompressedSize2;
		NullCheck(L_0);
		int32_t L_4;
		L_4 = InterfaceFuncInvoker3< int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t >::Invoke(7 /* System.Int32 LZ4Sharp.ILZ4Decompressor::DecompressKnownSize(System.Byte[],System.Byte[],System.Int32) */, ILZ4Decompressor_tC46E02B29050D156FD17BB73EF09ABFDC8D40CEF_il2cpp_TypeInfo_var, L_0, L_1, L_2, L_3);
		return L_4;
	}
}
// System.Int32 LZ4Sharp.LZ4::DecompressKnownSize(System.Byte*,System.Byte*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LZ4_DecompressKnownSize_m8F1E9FEB644142494E70FA9A28E4285799D89B81 (uint8_t* ___compressed0, uint8_t* ___decompressedBuffer1, int32_t ___decompressedSize2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ILZ4Decompressor_tC46E02B29050D156FD17BB73EF09ABFDC8D40CEF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0;
		L_0 = LZ4DecompressorFactory_CreateNew_m476E75516607ED8163A41D4FF8EC3470FE815CD0(NULL);
		uint8_t* L_1 = ___compressed0;
		uint8_t* L_2 = ___decompressedBuffer1;
		int32_t L_3 = ___decompressedSize2;
		NullCheck(L_0);
		int32_t L_4;
		L_4 = InterfaceFuncInvoker3< int32_t, uint8_t*, uint8_t*, int32_t >::Invoke(5 /* System.Int32 LZ4Sharp.ILZ4Decompressor::DecompressKnownSize(System.Byte*,System.Byte*,System.Int32) */, ILZ4Decompressor_tC46E02B29050D156FD17BB73EF09ABFDC8D40CEF_il2cpp_TypeInfo_var, L_0, L_1, L_2, L_3);
		return L_4;
	}
}
// System.Byte[] LZ4Sharp.LZ4::Decompress(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* LZ4_Decompress_mEB9EEFF6F1A0CABEFD788C0A9C5D394CD841A2E5 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___compressed0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ILZ4Decompressor_tC46E02B29050D156FD17BB73EF09ABFDC8D40CEF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0;
		L_0 = LZ4DecompressorFactory_CreateNew_m476E75516607ED8163A41D4FF8EC3470FE815CD0(NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___compressed0;
		NullCheck(L_0);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2;
		L_2 = InterfaceFuncInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(1 /* System.Byte[] LZ4Sharp.ILZ4Decompressor::Decompress(System.Byte[]) */, ILZ4Decompressor_tC46E02B29050D156FD17BB73EF09ABFDC8D40CEF_il2cpp_TypeInfo_var, L_0, L_1);
		return L_2;
	}
}
// System.Int32 LZ4Sharp.LZ4::Decompress(System.Byte[],System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LZ4_Decompress_m83417F6313F58CF7CBAEE415203C66EB1D8869E5 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___compressed0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___decompressedBuffer1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ILZ4Decompressor_tC46E02B29050D156FD17BB73EF09ABFDC8D40CEF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0;
		L_0 = LZ4DecompressorFactory_CreateNew_m476E75516607ED8163A41D4FF8EC3470FE815CD0(NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___compressed0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___decompressedBuffer1;
		NullCheck(L_0);
		int32_t L_3;
		L_3 = InterfaceFuncInvoker2< int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(2 /* System.Int32 LZ4Sharp.ILZ4Decompressor::Decompress(System.Byte[],System.Byte[]) */, ILZ4Decompressor_tC46E02B29050D156FD17BB73EF09ABFDC8D40CEF_il2cpp_TypeInfo_var, L_0, L_1, L_2);
		return L_3;
	}
}
// System.Int32 LZ4Sharp.LZ4::Decompress(System.Byte[],System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LZ4_Decompress_mD4168AE4FD21569A0BDFD5FBEB65DD0B7A89DBC6 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___compressedBuffer0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___decompressedBuffer1, int32_t ___compressedSize2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ILZ4Decompressor_tC46E02B29050D156FD17BB73EF09ABFDC8D40CEF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0;
		L_0 = LZ4DecompressorFactory_CreateNew_m476E75516607ED8163A41D4FF8EC3470FE815CD0(NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___compressedBuffer0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___decompressedBuffer1;
		int32_t L_3 = ___compressedSize2;
		NullCheck(L_0);
		int32_t L_4;
		L_4 = InterfaceFuncInvoker3< int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t >::Invoke(3 /* System.Int32 LZ4Sharp.ILZ4Decompressor::Decompress(System.Byte[],System.Byte[],System.Int32) */, ILZ4Decompressor_tC46E02B29050D156FD17BB73EF09ABFDC8D40CEF_il2cpp_TypeInfo_var, L_0, L_1, L_2, L_3);
		return L_4;
	}
}
// System.Int32 LZ4Sharp.LZ4::Decompress(System.Byte*,System.Byte*,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LZ4_Decompress_mC9AFEDE1DE860EE18665C75DFA9DA4E4D51D65CA (uint8_t* ___compressedBuffer0, uint8_t* ___decompressedBuffer1, int32_t ___compressedSize2, int32_t ___maxDecompressedSize3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ILZ4Decompressor_tC46E02B29050D156FD17BB73EF09ABFDC8D40CEF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0;
		L_0 = LZ4DecompressorFactory_CreateNew_m476E75516607ED8163A41D4FF8EC3470FE815CD0(NULL);
		uint8_t* L_1 = ___compressedBuffer0;
		uint8_t* L_2 = ___decompressedBuffer1;
		int32_t L_3 = ___compressedSize2;
		int32_t L_4 = ___maxDecompressedSize3;
		NullCheck(L_0);
		int32_t L_5;
		L_5 = InterfaceFuncInvoker4< int32_t, uint8_t*, uint8_t*, int32_t, int32_t >::Invoke(0 /* System.Int32 LZ4Sharp.ILZ4Decompressor::Decompress(System.Byte*,System.Byte*,System.Int32,System.Int32) */, ILZ4Decompressor_tC46E02B29050D156FD17BB73EF09ABFDC8D40CEF_il2cpp_TypeInfo_var, L_0, L_1, L_2, L_3, L_4);
		return L_5;
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
// System.Void LZ4Sharp.LZ4Compressor32::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LZ4Compressor32__ctor_m0B65DE8A99B93B10FB6664C7D6F9903380BAC104 (LZ4Compressor32_tB2B2F6E6ED6CD3D21CC3173896599134BB75C1B4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0;
		L_0 = IntPtr_get_Size_mF11301B9A665D54B8DC89DC6AFE37728B91E6F10(NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)4096), L_0)));
		__this->___m_HashTable_17 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_HashTable_17), (void*)L_1);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = __this->___m_HashTable_17;
		NullCheck(L_2);
		if (!((int32_t)(((int32_t)(((RuntimeArray*)L_2)->max_length))%((int32_t)16))))
		{
			goto IL_0034;
		}
	}
	{
		Exception_t* L_3 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		NullCheck(L_3);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC027C2D33A7990E5219B343D6442136C20FF6746)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&LZ4Compressor32__ctor_m0B65DE8A99B93B10FB6664C7D6F9903380BAC104_RuntimeMethod_var)));
	}

IL_0034:
	{
		return;
	}
}
// System.Byte[] LZ4Sharp.LZ4Compressor32::Compress(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* LZ4Compressor32_Compress_mCC964627F7158A6B29DA91BD81898D3442640BE7 (LZ4Compressor32_tB2B2F6E6ED6CD3D21CC3173896599134BB75C1B4* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___source0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	int32_t V_1 = 0;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_2 = NULL;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___source0;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = LZ4Compressor32_CalculateMaxCompressedLength_m50BC70971AB74EC59657586FA976B8B15CC0D8E7(__this, ((int32_t)(((RuntimeArray*)L_0)->max_length)), NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_1);
		V_0 = L_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = ___source0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = V_0;
		int32_t L_5;
		L_5 = LZ4Compressor32_Compress_m7594CB741BE726315B4FAC4397CB5EBD90267B89(__this, L_3, L_4, NULL);
		V_1 = L_5;
		int32_t L_6 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_6);
		V_2 = L_7;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = V_2;
		int32_t L_10 = V_1;
		Buffer_BlockCopy_mD8CF7EC96ADA7A542CCA3F3C73510624E10197A9((RuntimeArray*)L_8, 0, (RuntimeArray*)L_9, 0, L_10, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = V_2;
		return L_11;
	}
}
// System.Int32 LZ4Sharp.LZ4Compressor32::CalculateMaxCompressedLength(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LZ4Compressor32_CalculateMaxCompressedLength_m50BC70971AB74EC59657586FA976B8B15CC0D8E7 (LZ4Compressor32_tB2B2F6E6ED6CD3D21CC3173896599134BB75C1B4* __this, int32_t ___uncompressedLength0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___uncompressedLength0;
		int32_t L_1 = ___uncompressedLength0;
		return ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_0, ((int32_t)(L_1/((int32_t)255))))), ((int32_t)16)));
	}
}
// System.Int32 LZ4Sharp.LZ4Compressor32::Compress(System.Byte[],System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LZ4Compressor32_Compress_m7594CB741BE726315B4FAC4397CB5EBD90267B89 (LZ4Compressor32_tB2B2F6E6ED6CD3D21CC3173896599134BB75C1B4* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___source0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___dest1, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_1 = NULL;
	uint8_t* V_2 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_3 = NULL;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___source0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = L_0;
		V_1 = L_1;
		if (!L_1)
		{
			goto IL_000a;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = V_1;
		NullCheck(L_2);
		if (((int32_t)(((RuntimeArray*)L_2)->max_length)))
		{
			goto IL_000f;
		}
	}

IL_000a:
	{
		V_0 = (uint8_t*)((uintptr_t)0);
		goto IL_0018;
	}

IL_000f:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = V_1;
		NullCheck(L_3);
		V_0 = (uint8_t*)((uintptr_t)((L_3)->GetAddressAt(static_cast<il2cpp_array_size_t>(0))));
	}

IL_0018:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = ___dest1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = L_4;
		V_3 = L_5;
		if (!L_5)
		{
			goto IL_0022;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = V_3;
		NullCheck(L_6);
		if (((int32_t)(((RuntimeArray*)L_6)->max_length)))
		{
			goto IL_0027;
		}
	}

IL_0022:
	{
		V_2 = (uint8_t*)((uintptr_t)0);
		goto IL_0030;
	}

IL_0027:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = V_3;
		NullCheck(L_7);
		V_2 = (uint8_t*)((uintptr_t)((L_7)->GetAddressAt(static_cast<il2cpp_array_size_t>(0))));
	}

IL_0030:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = ___source0;
		NullCheck(L_8);
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_8)->max_length))) >= ((int32_t)((int32_t)65547))))
		{
			goto IL_0049;
		}
	}
	{
		uint8_t* L_9 = V_0;
		uint8_t* L_10 = V_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = ___source0;
		NullCheck(L_11);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12 = ___dest1;
		NullCheck(L_12);
		int32_t L_13;
		L_13 = LZ4Compressor32_Compress64K_m49C2807E9E0B17E40B1F535957FBFD82EFBB5D52(__this, L_9, L_10, ((int32_t)(((RuntimeArray*)L_11)->max_length)), ((int32_t)(((RuntimeArray*)L_12)->max_length)), NULL);
		return L_13;
	}

IL_0049:
	{
		uint8_t* L_14 = V_0;
		uint8_t* L_15 = V_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_16 = ___source0;
		NullCheck(L_16);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_17 = ___dest1;
		NullCheck(L_17);
		int32_t L_18;
		L_18 = LZ4Compressor32_Compress_m5C08439AF4731702587F2121F3B5B22C3ECC86E5(__this, L_14, L_15, ((int32_t)(((RuntimeArray*)L_16)->max_length)), ((int32_t)(((RuntimeArray*)L_17)->max_length)), NULL);
		return L_18;
	}
}
// System.Int32 LZ4Sharp.LZ4Compressor32::Compress(System.Byte[],System.Int32,System.Int32,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LZ4Compressor32_Compress_m0CC1491E850BDA525CD055025B0D8669488313BC (LZ4Compressor32_tB2B2F6E6ED6CD3D21CC3173896599134BB75C1B4* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___source0, int32_t ___srcOffset1, int32_t ___count2, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___dest3, int32_t ___dstOffset4, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___source0;
		int32_t L_1 = ___srcOffset1;
		NullCheck(L_0);
		V_1 = ((L_0)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_1)));
		uint8_t* L_2 = V_1;
		V_0 = (uint8_t*)((uintptr_t)L_2);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = ___dest3;
		int32_t L_4 = ___dstOffset4;
		NullCheck(L_3);
		V_3 = ((L_3)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_4)));
		uint8_t* L_5 = V_3;
		V_2 = (uint8_t*)((uintptr_t)L_5);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = ___source0;
		NullCheck(L_6);
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_6)->max_length))) >= ((int32_t)((int32_t)65547))))
		{
			goto IL_0033;
		}
	}
	{
		uint8_t* L_7 = V_0;
		uint8_t* L_8 = V_2;
		int32_t L_9 = ___count2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = ___dest3;
		NullCheck(L_10);
		int32_t L_11 = ___dstOffset4;
		int32_t L_12;
		L_12 = LZ4Compressor32_Compress64K_m49C2807E9E0B17E40B1F535957FBFD82EFBB5D52(__this, L_7, L_8, L_9, ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_10)->max_length)), L_11)), NULL);
		return L_12;
	}

IL_0033:
	{
		uint8_t* L_13 = V_0;
		uint8_t* L_14 = V_2;
		int32_t L_15 = ___count2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_16 = ___dest3;
		NullCheck(L_16);
		int32_t L_17 = ___dstOffset4;
		int32_t L_18;
		L_18 = LZ4Compressor32_Compress_m5C08439AF4731702587F2121F3B5B22C3ECC86E5(__this, L_13, L_14, L_15, ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_16)->max_length)), L_17)), NULL);
		return L_18;
	}
}
// System.Int32 LZ4Sharp.LZ4Compressor32::Compress(System.Byte*,System.Byte*,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LZ4Compressor32_Compress_m5C08439AF4731702587F2121F3B5B22C3ECC86E5 (LZ4Compressor32_tB2B2F6E6ED6CD3D21CC3173896599134BB75C1B4* __this, uint8_t* ___source0, uint8_t* ___dest1, int32_t ___isize2, int32_t ___maxOutputSize3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LZ4Compressor32_tB2B2F6E6ED6CD3D21CC3173896599134BB75C1B4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint8_t* V_0 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_1 = NULL;
	uint8_t* V_2 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_3 = NULL;
	uint8_t** V_4 = NULL;
	uint8_t* V_5 = NULL;
	int32_t V_6 = 0;
	uint8_t* V_7 = NULL;
	uint8_t* V_8 = NULL;
	uint8_t* V_9 = NULL;
	uint8_t* V_10 = NULL;
	uint8_t* V_11 = NULL;
	uint8_t* V_12 = NULL;
	int32_t V_13 = 0;
	int32_t V_14 = 0;
	uint32_t V_15 = 0;
	uint32_t V_16 = 0;
	uint8_t* V_17 = NULL;
	uint8_t* V_18 = NULL;
	uint8_t* V_19 = NULL;
	uint32_t V_20 = 0;
	uint32_t V_21 = 0;
	uint8_t* V_22 = NULL;
	int32_t V_23 = 0;
	int32_t V_24 = 0;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = __this->___m_HashTable_17;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = L_0;
		V_1 = L_1;
		if (!L_1)
		{
			goto IL_000f;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = V_1;
		NullCheck(L_2);
		if (((int32_t)(((RuntimeArray*)L_2)->max_length)))
		{
			goto IL_0014;
		}
	}

IL_000f:
	{
		V_0 = (uint8_t*)((uintptr_t)0);
		goto IL_001d;
	}

IL_0014:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = V_1;
		NullCheck(L_3);
		V_0 = (uint8_t*)((uintptr_t)((L_3)->GetAddressAt(static_cast<il2cpp_array_size_t>(0))));
	}

IL_001d:
	{
		il2cpp_codegen_runtime_class_init_inline(LZ4Compressor32_tB2B2F6E6ED6CD3D21CC3173896599134BB75C1B4_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = ((LZ4Compressor32_tB2B2F6E6ED6CD3D21CC3173896599134BB75C1B4_StaticFields*)il2cpp_codegen_static_fields_for(LZ4Compressor32_tB2B2F6E6ED6CD3D21CC3173896599134BB75C1B4_il2cpp_TypeInfo_var))->___DeBruijnBytePos_16;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = L_4;
		V_3 = L_5;
		if (!L_5)
		{
			goto IL_002b;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = V_3;
		NullCheck(L_6);
		if (((int32_t)(((RuntimeArray*)L_6)->max_length)))
		{
			goto IL_0030;
		}
	}

IL_002b:
	{
		V_2 = (uint8_t*)((uintptr_t)0);
		goto IL_0039;
	}

IL_0030:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = V_3;
		NullCheck(L_7);
		V_2 = (uint8_t*)((uintptr_t)((L_7)->GetAddressAt(static_cast<il2cpp_array_size_t>(0))));
	}

IL_0039:
	{
		uint8_t* L_8 = V_0;
		uint32_t L_9 = sizeof(uint8_t*);
		il2cpp_codegen_runtime_class_init_inline(LZ4Compressor32_tB2B2F6E6ED6CD3D21CC3173896599134BB75C1B4_il2cpp_TypeInfo_var);
		LZ4Compressor32_Clear_m6C91D4FD5F1B8F7CF186ED06A35BB027D6C1A94C(L_8, ((int32_t)il2cpp_codegen_multiply((int32_t)L_9, ((int32_t)4096))), NULL);
		uint8_t* L_10 = V_0;
		V_4 = (uint8_t**)L_10;
		uint8_t* L_11 = ___source0;
		V_5 = L_11;
		V_6 = 0;
		uint8_t* L_12 = V_5;
		V_7 = L_12;
		uint8_t* L_13 = V_5;
		int32_t L_14 = ___isize2;
		V_8 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_13, L_14));
		uint8_t* L_15 = V_8;
		V_9 = ((uint8_t*)il2cpp_codegen_subtract((intptr_t)L_15, ((int32_t)12)));
		uint8_t* L_16 = V_8;
		V_10 = ((uint8_t*)il2cpp_codegen_subtract((intptr_t)L_16, 5));
		uint8_t* L_17 = ___dest1;
		int32_t L_18 = ___maxOutputSize3;
		V_11 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_17, L_18));
		uint8_t* L_19 = ___dest1;
		V_12 = L_19;
		int32_t L_20 = ___isize2;
		if ((((int32_t)L_20) < ((int32_t)((int32_t)13))))
		{
			goto IL_03c2;
		}
	}
	{
		uint8_t** L_21 = V_4;
		uint8_t* L_22 = V_5;
		int32_t L_23 = *((uint32_t*)L_22);
		uint32_t L_24 = sizeof(uint8_t*);
		uint8_t* L_25 = V_5;
		int32_t L_26 = V_6;
		*((intptr_t*)((uint8_t**)il2cpp_codegen_add((intptr_t)L_21, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)((uint32_t)((int32_t)((uint32_t)((int32_t)il2cpp_codegen_multiply(L_23, ((int32_t)-1640531535)))>>((int32_t)20))))), ((int64_t)((int32_t)L_24)))))))) = (intptr_t)((uint8_t*)il2cpp_codegen_subtract((intptr_t)L_25, L_26));
		uint8_t* L_27 = V_5;
		V_5 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_27, 1));
		uint8_t* L_28 = V_5;
		int32_t L_29 = *((uint32_t*)L_28);
		V_15 = ((int32_t)((uint32_t)((int32_t)il2cpp_codegen_multiply(L_29, ((int32_t)-1640531535)))>>((int32_t)20)));
	}

IL_00af:
	{
		V_16 = ((int32_t)67);
		uint8_t* L_30 = V_5;
		V_17 = L_30;
	}

IL_00b7:
	{
		uint32_t L_31 = V_15;
		V_20 = L_31;
		uint32_t L_32 = V_16;
		uint32_t L_33 = L_32;
		V_16 = ((int32_t)il2cpp_codegen_add((int32_t)L_33, 1));
		V_21 = ((int32_t)((uint32_t)L_33>>6));
		uint8_t* L_34 = V_17;
		V_5 = L_34;
		uint8_t* L_35 = V_5;
		uint32_t L_36 = V_21;
		V_17 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_35, (intptr_t)((uintptr_t)L_36)));
		uint8_t* L_37 = V_17;
		uint8_t* L_38 = V_9;
		if ((!(((uintptr_t)L_37) <= ((uintptr_t)L_38))))
		{
			goto IL_03c2;
		}
	}
	{
		uint8_t* L_39 = V_17;
		int32_t L_40 = *((uint32_t*)L_39);
		V_15 = ((int32_t)((uint32_t)((int32_t)il2cpp_codegen_multiply(L_40, ((int32_t)-1640531535)))>>((int32_t)20)));
		uint8_t** L_41 = V_4;
		uint32_t L_42 = V_20;
		uint32_t L_43 = sizeof(uint8_t*);
		int32_t L_44 = V_6;
		V_18 = (uint8_t*)((intptr_t)il2cpp_codegen_add((*((intptr_t*)((uint8_t**)il2cpp_codegen_add((intptr_t)L_41, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_42), ((int64_t)((int32_t)L_43))))))))), L_44));
		uint8_t** L_45 = V_4;
		uint32_t L_46 = V_20;
		uint32_t L_47 = sizeof(uint8_t*);
		uint8_t* L_48 = V_5;
		int32_t L_49 = V_6;
		*((intptr_t*)((uint8_t**)il2cpp_codegen_add((intptr_t)L_45, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_46), ((int64_t)((int32_t)L_47)))))))) = (intptr_t)((uint8_t*)il2cpp_codegen_subtract((intptr_t)L_48, L_49));
		uint8_t* L_50 = V_18;
		uint8_t* L_51 = V_5;
		if ((!(((uintptr_t)L_50) >= ((uintptr_t)((uint8_t*)il2cpp_codegen_subtract((intptr_t)L_51, ((int32_t)65535)))))))
		{
			goto IL_00b7;
		}
	}
	{
		uint8_t* L_52 = V_18;
		int32_t L_53 = *((uint32_t*)L_52);
		uint8_t* L_54 = V_5;
		int32_t L_55 = *((uint32_t*)L_54);
		if ((!(((uint32_t)L_53) == ((uint32_t)L_55))))
		{
			goto IL_00b7;
		}
	}
	{
		goto IL_0135;
	}

IL_0129:
	{
		uint8_t* L_56 = V_5;
		V_5 = ((uint8_t*)il2cpp_codegen_subtract((intptr_t)L_56, 1));
		uint8_t* L_57 = V_18;
		V_18 = ((uint8_t*)il2cpp_codegen_subtract((intptr_t)L_57, 1));
	}

IL_0135:
	{
		uint8_t* L_58 = V_5;
		uint8_t* L_59 = V_7;
		if ((!(((uintptr_t)L_58) > ((uintptr_t)L_59))))
		{
			goto IL_014c;
		}
	}
	{
		uint8_t* L_60 = V_18;
		uint8_t* L_61 = ___source0;
		if ((!(((uintptr_t)L_60) > ((uintptr_t)L_61))))
		{
			goto IL_014c;
		}
	}
	{
		uint8_t* L_62 = V_5;
		int32_t L_63 = *((uint8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_62, (-1))));
		uint8_t* L_64 = V_18;
		int32_t L_65 = *((uint8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_64, (-1))));
		if ((((int32_t)L_63) == ((int32_t)L_65)))
		{
			goto IL_0129;
		}
	}

IL_014c:
	{
		uint8_t* L_66 = V_5;
		uint8_t* L_67 = V_7;
		V_14 = ((int32_t)((int64_t)(intptr_t)((uint8_t*)((intptr_t)((uint8_t*)il2cpp_codegen_subtract((intptr_t)L_66, (intptr_t)L_67))/1))));
		uint8_t* L_68 = V_12;
		uint8_t* L_69 = L_68;
		V_12 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_69, 1));
		V_19 = L_69;
		int32_t L_70 = V_14;
		if ((((int32_t)L_70) < ((int32_t)((int32_t)15))))
		{
			goto IL_01a7;
		}
	}
	{
		uint8_t* L_71 = V_19;
		*((int8_t*)L_71) = (int8_t)((int32_t)240);
		int32_t L_72 = V_14;
		V_13 = ((int32_t)((int64_t)il2cpp_codegen_subtract(((int64_t)L_72), ((int64_t)((int32_t)15)))));
		goto IL_0191;
	}

IL_017a:
	{
		uint8_t* L_73 = V_12;
		uint8_t* L_74 = L_73;
		V_12 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_74, 1));
		*((int8_t*)L_74) = (int8_t)((int32_t)255);
		int32_t L_75 = V_13;
		V_13 = ((int32_t)il2cpp_codegen_subtract(L_75, ((int32_t)255)));
	}

IL_0191:
	{
		int32_t L_76 = V_13;
		if ((((int32_t)L_76) > ((int32_t)((int32_t)254))))
		{
			goto IL_017a;
		}
	}
	{
		uint8_t* L_77 = V_12;
		uint8_t* L_78 = L_77;
		V_12 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_78, 1));
		int32_t L_79 = V_13;
		*((int8_t*)L_78) = (int8_t)((int32_t)(uint8_t)L_79);
		goto IL_01af;
	}

IL_01a7:
	{
		uint8_t* L_80 = V_19;
		int32_t L_81 = V_14;
		*((int8_t*)L_80) = (int8_t)((int32_t)(uint8_t)((int32_t)(L_81<<4)));
	}

IL_01af:
	{
		uint8_t* L_82 = V_12;
		int32_t L_83 = V_14;
		V_22 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_82, L_83));
	}

IL_01b6:
	{
		uint8_t* L_84 = V_12;
		uint8_t* L_85 = V_7;
		int32_t L_86 = *((uint32_t*)L_85);
		*((int32_t*)L_84) = (int32_t)L_86;
		uint8_t* L_87 = V_12;
		V_12 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_87, 4));
		uint8_t* L_88 = V_7;
		V_7 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_88, 4));
		uint8_t* L_89 = V_12;
		uint8_t* L_90 = V_7;
		int32_t L_91 = *((uint32_t*)L_90);
		*((int32_t*)L_89) = (int32_t)L_91;
		uint8_t* L_92 = V_12;
		V_12 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_92, 4));
		uint8_t* L_93 = V_7;
		V_7 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_93, 4));
		uint8_t* L_94 = V_12;
		uint8_t* L_95 = V_22;
		if ((!(((uintptr_t)L_94) >= ((uintptr_t)L_95))))
		{
			goto IL_01b6;
		}
	}
	{
		uint8_t* L_96 = V_22;
		V_12 = L_96;
	}

IL_01e4:
	{
		uint8_t* L_97 = V_12;
		uint8_t* L_98 = V_5;
		uint8_t* L_99 = V_18;
		*((int16_t*)L_97) = (int16_t)((int32_t)(uint16_t)((int64_t)(intptr_t)((uint8_t*)((intptr_t)((uint8_t*)il2cpp_codegen_subtract((intptr_t)L_98, (intptr_t)L_99))/1))));
		uint8_t* L_100 = V_12;
		V_12 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_100, 2));
		uint8_t* L_101 = V_5;
		V_5 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_101, 4));
		uint8_t* L_102 = V_18;
		V_18 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_102, 4));
		uint8_t* L_103 = V_5;
		V_7 = L_103;
		goto IL_0242;
	}

IL_0208:
	{
		uint8_t* L_104 = V_18;
		int32_t L_105 = *((int32_t*)L_104);
		uint8_t* L_106 = V_5;
		int32_t L_107 = *((int32_t*)L_106);
		V_23 = ((int32_t)(L_105^L_107));
		int32_t L_108 = V_23;
		if (L_108)
		{
			goto IL_0223;
		}
	}
	{
		uint8_t* L_109 = V_5;
		V_5 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_109, 4));
		uint8_t* L_110 = V_18;
		V_18 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_110, 4));
		goto IL_0242;
	}

IL_0223:
	{
		uint8_t* L_111 = V_5;
		il2cpp_codegen_runtime_class_init_inline(LZ4Compressor32_tB2B2F6E6ED6CD3D21CC3173896599134BB75C1B4_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_112 = ((LZ4Compressor32_tB2B2F6E6ED6CD3D21CC3173896599134BB75C1B4_StaticFields*)il2cpp_codegen_static_fields_for(LZ4Compressor32_tB2B2F6E6ED6CD3D21CC3173896599134BB75C1B4_il2cpp_TypeInfo_var))->___DeBruijnBytePos_16;
		int32_t L_113 = V_23;
		int32_t L_114 = V_23;
		NullCheck(L_112);
		int32_t L_115 = ((int32_t)((uint32_t)((int32_t)(uint32_t)((int64_t)il2cpp_codegen_multiply(((int64_t)((int32_t)(L_113&((-L_114))))), ((int64_t)((int32_t)125613361)))))>>((int32_t)27)));
		uint8_t L_116 = (L_112)->GetAt(static_cast<il2cpp_array_size_t>(L_115));
		V_5 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_111, (int32_t)L_116));
		goto IL_027a;
	}

IL_0242:
	{
		uint8_t* L_117 = V_5;
		uint8_t* L_118 = V_10;
		if ((!(((uintptr_t)L_117) >= ((uintptr_t)((uint8_t*)il2cpp_codegen_subtract((intptr_t)L_118, 3))))))
		{
			goto IL_0208;
		}
	}
	{
		uint8_t* L_119 = V_5;
		uint8_t* L_120 = V_10;
		if ((!(((uintptr_t)L_119) < ((uintptr_t)((uint8_t*)il2cpp_codegen_subtract((intptr_t)L_120, 1))))))
		{
			goto IL_0266;
		}
	}
	{
		uint8_t* L_121 = V_18;
		int32_t L_122 = *((uint16_t*)L_121);
		uint8_t* L_123 = V_5;
		int32_t L_124 = *((uint16_t*)L_123);
		if ((!(((uint32_t)L_122) == ((uint32_t)L_124))))
		{
			goto IL_0266;
		}
	}
	{
		uint8_t* L_125 = V_5;
		V_5 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_125, 2));
		uint8_t* L_126 = V_18;
		V_18 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_126, 2));
	}

IL_0266:
	{
		uint8_t* L_127 = V_5;
		uint8_t* L_128 = V_10;
		if ((!(((uintptr_t)L_127) < ((uintptr_t)L_128))))
		{
			goto IL_027a;
		}
	}
	{
		uint8_t* L_129 = V_18;
		int32_t L_130 = *((uint8_t*)L_129);
		uint8_t* L_131 = V_5;
		int32_t L_132 = *((uint8_t*)L_131);
		if ((!(((uint32_t)L_130) == ((uint32_t)L_132))))
		{
			goto IL_027a;
		}
	}
	{
		uint8_t* L_133 = V_5;
		V_5 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_133, 1));
	}

IL_027a:
	{
		uint8_t* L_134 = V_5;
		uint8_t* L_135 = V_7;
		V_13 = ((int32_t)((int64_t)(intptr_t)((uint8_t*)((intptr_t)((uint8_t*)il2cpp_codegen_subtract((intptr_t)L_134, (intptr_t)L_135))/1))));
		uint8_t* L_136 = V_12;
		int32_t L_137 = V_13;
		uint8_t* L_138 = V_11;
		if ((!(((uintptr_t)((uint8_t*)il2cpp_codegen_add((intptr_t)((uint8_t*)il2cpp_codegen_add((intptr_t)L_136, 6)), ((int32_t)(L_137>>8))))) >= ((uintptr_t)L_138))))
		{
			goto IL_0294;
		}
	}
	{
		return 0;
	}

IL_0294:
	{
		int32_t L_139 = V_13;
		if ((((int32_t)L_139) < ((int32_t)((int32_t)15))))
		{
			goto IL_0306;
		}
	}
	{
		uint8_t* L_140 = V_19;
		uint8_t* L_141 = L_140;
		int32_t L_142 = *((uint8_t*)L_141);
		*((int8_t*)L_141) = (int8_t)((int32_t)(uint8_t)((int32_t)il2cpp_codegen_add(L_142, ((int32_t)15))));
		int32_t L_143 = V_13;
		V_13 = ((int32_t)il2cpp_codegen_subtract(L_143, ((int32_t)15)));
		goto IL_02d0;
	}

IL_02ac:
	{
		uint8_t* L_144 = V_12;
		uint8_t* L_145 = L_144;
		V_12 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_145, 1));
		*((int8_t*)L_145) = (int8_t)((int32_t)255);
		uint8_t* L_146 = V_12;
		uint8_t* L_147 = L_146;
		V_12 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_147, 1));
		*((int8_t*)L_147) = (int8_t)((int32_t)255);
		int32_t L_148 = V_13;
		V_13 = ((int32_t)il2cpp_codegen_subtract(L_148, ((int32_t)510)));
	}

IL_02d0:
	{
		int32_t L_149 = V_13;
		if ((((int32_t)L_149) > ((int32_t)((int32_t)509))))
		{
			goto IL_02ac;
		}
	}
	{
		int32_t L_150 = V_13;
		if ((((int32_t)L_150) <= ((int32_t)((int32_t)254))))
		{
			goto IL_02f9;
		}
	}
	{
		int32_t L_151 = V_13;
		V_13 = ((int32_t)il2cpp_codegen_subtract(L_151, ((int32_t)255)));
		uint8_t* L_152 = V_12;
		uint8_t* L_153 = L_152;
		V_12 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_153, 1));
		*((int8_t*)L_153) = (int8_t)((int32_t)255);
	}

IL_02f9:
	{
		uint8_t* L_154 = V_12;
		uint8_t* L_155 = L_154;
		V_12 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_155, 1));
		int32_t L_156 = V_13;
		*((int8_t*)L_155) = (int8_t)((int32_t)(uint8_t)L_156);
		goto IL_0310;
	}

IL_0306:
	{
		uint8_t* L_157 = V_19;
		uint8_t* L_158 = L_157;
		int32_t L_159 = *((uint8_t*)L_158);
		int32_t L_160 = V_13;
		*((int8_t*)L_158) = (int8_t)((int32_t)(uint8_t)((int32_t)il2cpp_codegen_add(L_159, ((int32_t)(uint8_t)L_160))));
	}

IL_0310:
	{
		uint8_t* L_161 = V_5;
		uint8_t* L_162 = V_9;
		if ((!(((uintptr_t)L_161) > ((uintptr_t)L_162))))
		{
			goto IL_031f;
		}
	}
	{
		uint8_t* L_163 = V_5;
		V_7 = L_163;
		goto IL_03c2;
	}

IL_031f:
	{
		uint8_t** L_164 = V_4;
		uint8_t* L_165 = V_5;
		int32_t L_166 = *((uint32_t*)L_165);
		uint32_t L_167 = sizeof(uint8_t*);
		uint8_t* L_168 = V_5;
		int32_t L_169 = V_6;
		*((intptr_t*)((uint8_t**)il2cpp_codegen_add((intptr_t)L_164, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)((uint32_t)((int32_t)((uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_subtract(L_166, 2)), ((int32_t)-1640531535)))>>((int32_t)20))))), ((int64_t)((int32_t)L_167)))))))) = (intptr_t)((uint8_t*)il2cpp_codegen_subtract((intptr_t)((uint8_t*)il2cpp_codegen_subtract((intptr_t)L_168, 2)), L_169));
		int32_t L_170 = V_6;
		uint8_t** L_171 = V_4;
		uint8_t* L_172 = V_5;
		int32_t L_173 = *((uint32_t*)L_172);
		uint32_t L_174 = sizeof(uint8_t*);
		V_18 = (uint8_t*)((intptr_t)il2cpp_codegen_add(L_170, (*((intptr_t*)((uint8_t**)il2cpp_codegen_add((intptr_t)L_171, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)((uint32_t)((int32_t)((uint32_t)((int32_t)il2cpp_codegen_multiply(L_173, ((int32_t)-1640531535)))>>((int32_t)20))))), ((int64_t)((int32_t)L_174)))))))))));
		uint8_t** L_175 = V_4;
		uint8_t* L_176 = V_5;
		int32_t L_177 = *((uint32_t*)L_176);
		uint32_t L_178 = sizeof(uint8_t*);
		uint8_t* L_179 = V_5;
		int32_t L_180 = V_6;
		*((intptr_t*)((uint8_t**)il2cpp_codegen_add((intptr_t)L_175, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)((uint32_t)((int32_t)((uint32_t)((int32_t)il2cpp_codegen_multiply(L_177, ((int32_t)-1640531535)))>>((int32_t)20))))), ((int64_t)((int32_t)L_178)))))))) = (intptr_t)((uint8_t*)il2cpp_codegen_subtract((intptr_t)L_179, L_180));
		uint8_t* L_181 = V_18;
		uint8_t* L_182 = V_5;
		if ((!(((uintptr_t)L_181) > ((uintptr_t)((uint8_t*)il2cpp_codegen_subtract((intptr_t)L_182, ((int32_t)65536)))))))
		{
			goto IL_03a6;
		}
	}
	{
		uint8_t* L_183 = V_18;
		int32_t L_184 = *((uint32_t*)L_183);
		uint8_t* L_185 = V_5;
		int32_t L_186 = *((uint32_t*)L_185);
		if ((!(((uint32_t)L_184) == ((uint32_t)L_186))))
		{
			goto IL_03a6;
		}
	}
	{
		uint8_t* L_187 = V_12;
		uint8_t* L_188 = L_187;
		V_12 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_188, 1));
		V_19 = L_188;
		uint8_t* L_189 = V_19;
		*((int8_t*)L_189) = (int8_t)0;
		goto IL_01e4;
	}

IL_03a6:
	{
		uint8_t* L_190 = V_5;
		uint8_t* L_191 = L_190;
		V_5 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_191, 1));
		V_7 = L_191;
		uint8_t* L_192 = V_5;
		int32_t L_193 = *((uint32_t*)L_192);
		V_15 = ((int32_t)((uint32_t)((int32_t)il2cpp_codegen_multiply(L_193, ((int32_t)-1640531535)))>>((int32_t)20)));
		goto IL_00af;
	}

IL_03c2:
	{
		uint8_t* L_194 = V_8;
		uint8_t* L_195 = V_7;
		V_24 = ((int32_t)((int64_t)(intptr_t)((uint8_t*)((intptr_t)((uint8_t*)il2cpp_codegen_subtract((intptr_t)L_194, (intptr_t)L_195))/1))));
		uint8_t* L_196 = V_12;
		uint8_t* L_197 = ___dest1;
		int32_t L_198 = V_24;
		int32_t L_199 = V_24;
		int32_t L_200 = ___maxOutputSize3;
		if ((((int64_t)((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)(intptr_t)((uint8_t*)((intptr_t)((uint8_t*)il2cpp_codegen_subtract((intptr_t)L_196, (intptr_t)L_197))/1))), ((int64_t)L_198))), ((int64_t)1))), ((int64_t)((int32_t)(((int32_t)il2cpp_codegen_subtract(L_199, ((int32_t)15)))/((int32_t)255))))))) < ((int64_t)((int64_t)L_200))))
		{
			goto IL_03ef;
		}
	}
	{
		return 0;
	}

IL_03ef:
	{
		int32_t L_201 = V_24;
		if ((((int32_t)L_201) < ((int32_t)((int32_t)15))))
		{
			goto IL_0438;
		}
	}
	{
		uint8_t* L_202 = V_12;
		uint8_t* L_203 = L_202;
		V_12 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_203, 1));
		*((int8_t*)L_203) = (int8_t)((int32_t)240);
		int32_t L_204 = V_24;
		V_24 = ((int32_t)il2cpp_codegen_subtract(L_204, ((int32_t)15)));
		goto IL_0422;
	}

IL_040b:
	{
		uint8_t* L_205 = V_12;
		uint8_t* L_206 = L_205;
		V_12 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_206, 1));
		*((int8_t*)L_206) = (int8_t)((int32_t)255);
		int32_t L_207 = V_24;
		V_24 = ((int32_t)il2cpp_codegen_subtract(L_207, ((int32_t)255)));
	}

IL_0422:
	{
		int32_t L_208 = V_24;
		if ((((int32_t)L_208) > ((int32_t)((int32_t)254))))
		{
			goto IL_040b;
		}
	}
	{
		uint8_t* L_209 = V_12;
		uint8_t* L_210 = L_209;
		V_12 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_210, 1));
		int32_t L_211 = V_24;
		*((int8_t*)L_210) = (int8_t)((int32_t)(uint8_t)L_211);
		goto IL_0445;
	}

IL_0438:
	{
		uint8_t* L_212 = V_12;
		uint8_t* L_213 = L_212;
		V_12 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_213, 1));
		int32_t L_214 = V_24;
		*((int8_t*)L_213) = (int8_t)((int32_t)(uint8_t)((int32_t)(L_214<<4)));
	}

IL_0445:
	{
		uint8_t* L_215 = V_12;
		uint8_t* L_216 = V_7;
		uint8_t* L_217 = V_8;
		uint8_t* L_218 = V_7;
		LZ4Util_CopyMemory_mE7FF2466FFC0EFEDA278A55F7222EDB2BBE84EDA(L_215, L_216, ((int64_t)(intptr_t)((uint8_t*)((intptr_t)((uint8_t*)il2cpp_codegen_subtract((intptr_t)L_217, (intptr_t)L_218))/1))), NULL);
		uint8_t* L_219 = V_12;
		uint8_t* L_220 = V_8;
		uint8_t* L_221 = V_7;
		V_12 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_219, ((intptr_t)((int64_t)(intptr_t)((uint8_t*)((intptr_t)((uint8_t*)il2cpp_codegen_subtract((intptr_t)L_220, (intptr_t)L_221))/1))))));
		uint8_t* L_222 = V_12;
		uint8_t* L_223 = ___dest1;
		return ((int32_t)((int64_t)(intptr_t)((uint8_t*)((intptr_t)((uint8_t*)il2cpp_codegen_subtract((intptr_t)L_222, (intptr_t)L_223))/1))));
	}
}
// System.Int32 LZ4Sharp.LZ4Compressor32::Compress64K(System.Byte*,System.Byte*,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LZ4Compressor32_Compress64K_m49C2807E9E0B17E40B1F535957FBFD82EFBB5D52 (LZ4Compressor32_tB2B2F6E6ED6CD3D21CC3173896599134BB75C1B4* __this, uint8_t* ___source0, uint8_t* ___dest1, int32_t ___isize2, int32_t ___maxOutputSize3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LZ4Compressor32_tB2B2F6E6ED6CD3D21CC3173896599134BB75C1B4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint8_t* V_0 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_1 = NULL;
	uint8_t* V_2 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_3 = NULL;
	uint16_t* V_4 = NULL;
	uint8_t* V_5 = NULL;
	uint8_t* V_6 = NULL;
	uint8_t* V_7 = NULL;
	uint8_t* V_8 = NULL;
	uint8_t* V_9 = NULL;
	uint8_t* V_10 = NULL;
	uint8_t* V_11 = NULL;
	uint8_t* V_12 = NULL;
	int32_t V_13 = 0;
	int32_t V_14 = 0;
	uint32_t V_15 = 0;
	int32_t V_16 = 0;
	uint8_t* V_17 = NULL;
	uint8_t* V_18 = NULL;
	uint8_t* V_19 = NULL;
	uint32_t V_20 = 0;
	int32_t V_21 = 0;
	uint8_t* V_22 = NULL;
	int32_t V_23 = 0;
	int32_t V_24 = 0;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = __this->___m_HashTable_17;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = L_0;
		V_1 = L_1;
		if (!L_1)
		{
			goto IL_000f;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = V_1;
		NullCheck(L_2);
		if (((int32_t)(((RuntimeArray*)L_2)->max_length)))
		{
			goto IL_0014;
		}
	}

IL_000f:
	{
		V_0 = (uint8_t*)((uintptr_t)0);
		goto IL_001d;
	}

IL_0014:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = V_1;
		NullCheck(L_3);
		V_0 = (uint8_t*)((uintptr_t)((L_3)->GetAddressAt(static_cast<il2cpp_array_size_t>(0))));
	}

IL_001d:
	{
		il2cpp_codegen_runtime_class_init_inline(LZ4Compressor32_tB2B2F6E6ED6CD3D21CC3173896599134BB75C1B4_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = ((LZ4Compressor32_tB2B2F6E6ED6CD3D21CC3173896599134BB75C1B4_StaticFields*)il2cpp_codegen_static_fields_for(LZ4Compressor32_tB2B2F6E6ED6CD3D21CC3173896599134BB75C1B4_il2cpp_TypeInfo_var))->___DeBruijnBytePos_16;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = L_4;
		V_3 = L_5;
		if (!L_5)
		{
			goto IL_002b;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = V_3;
		NullCheck(L_6);
		if (((int32_t)(((RuntimeArray*)L_6)->max_length)))
		{
			goto IL_0030;
		}
	}

IL_002b:
	{
		V_2 = (uint8_t*)((uintptr_t)0);
		goto IL_0039;
	}

IL_0030:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = V_3;
		NullCheck(L_7);
		V_2 = (uint8_t*)((uintptr_t)((L_7)->GetAddressAt(static_cast<il2cpp_array_size_t>(0))));
	}

IL_0039:
	{
		uint8_t* L_8 = V_0;
		il2cpp_codegen_runtime_class_init_inline(LZ4Compressor32_tB2B2F6E6ED6CD3D21CC3173896599134BB75C1B4_il2cpp_TypeInfo_var);
		LZ4Compressor32_Clear_m6C91D4FD5F1B8F7CF186ED06A35BB027D6C1A94C(L_8, ((int32_t)16384), NULL);
		uint8_t* L_9 = V_0;
		V_4 = (uint16_t*)L_9;
		uint8_t* L_10 = ___source0;
		V_5 = L_10;
		uint8_t* L_11 = V_5;
		V_6 = L_11;
		uint8_t* L_12 = V_5;
		V_7 = L_12;
		uint8_t* L_13 = V_5;
		int32_t L_14 = ___isize2;
		V_8 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_13, L_14));
		uint8_t* L_15 = V_8;
		V_9 = ((uint8_t*)il2cpp_codegen_subtract((intptr_t)L_15, ((int32_t)12)));
		uint8_t* L_16 = V_8;
		V_10 = ((uint8_t*)il2cpp_codegen_subtract((intptr_t)L_16, 5));
		uint8_t* L_17 = ___dest1;
		V_11 = L_17;
		uint8_t* L_18 = ___dest1;
		int32_t L_19 = ___maxOutputSize3;
		V_12 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_18, L_19));
		int32_t L_20 = ___isize2;
		if ((((int32_t)L_20) < ((int32_t)((int32_t)13))))
		{
			goto IL_037e;
		}
	}
	{
		uint8_t* L_21 = V_5;
		V_5 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_21, 1));
		uint8_t* L_22 = V_5;
		int32_t L_23 = *((uint32_t*)L_22);
		V_15 = ((int32_t)((uint32_t)((int32_t)il2cpp_codegen_multiply(L_23, ((int32_t)-1640531535)))>>((int32_t)19)));
	}

IL_008a:
	{
		V_16 = ((int32_t)67);
		uint8_t* L_24 = V_5;
		V_17 = L_24;
	}

IL_0092:
	{
		uint32_t L_25 = V_15;
		V_20 = L_25;
		int32_t L_26 = V_16;
		int32_t L_27 = L_26;
		V_16 = ((int32_t)il2cpp_codegen_add(L_27, 1));
		V_21 = ((int32_t)(L_27>>6));
		uint8_t* L_28 = V_17;
		V_5 = L_28;
		uint8_t* L_29 = V_5;
		int32_t L_30 = V_21;
		V_17 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_29, L_30));
		uint8_t* L_31 = V_17;
		uint8_t* L_32 = V_9;
		if ((!(((uintptr_t)L_31) <= ((uintptr_t)L_32))))
		{
			goto IL_037e;
		}
	}
	{
		uint8_t* L_33 = V_17;
		int32_t L_34 = *((uint32_t*)L_33);
		V_15 = ((int32_t)((uint32_t)((int32_t)il2cpp_codegen_multiply(L_34, ((int32_t)-1640531535)))>>((int32_t)19)));
		uint8_t* L_35 = V_7;
		uint16_t* L_36 = V_4;
		uint32_t L_37 = V_20;
		int32_t L_38 = *((uint16_t*)((uint16_t*)il2cpp_codegen_add((intptr_t)L_36, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_37), ((int64_t)2)))))));
		V_18 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_35, L_38));
		uint16_t* L_39 = V_4;
		uint32_t L_40 = V_20;
		uint8_t* L_41 = V_5;
		uint8_t* L_42 = V_7;
		*((int16_t*)((uint16_t*)il2cpp_codegen_add((intptr_t)L_39, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_40), ((int64_t)2))))))) = (int16_t)((int32_t)(uint16_t)((int64_t)(intptr_t)((uint8_t*)((intptr_t)((uint8_t*)il2cpp_codegen_subtract((intptr_t)L_41, (intptr_t)L_42))/1))));
		uint8_t* L_43 = V_18;
		int32_t L_44 = *((uint32_t*)L_43);
		uint8_t* L_45 = V_5;
		int32_t L_46 = *((uint32_t*)L_45);
		if ((!(((uint32_t)L_44) == ((uint32_t)L_46))))
		{
			goto IL_0092;
		}
	}
	{
		goto IL_00fd;
	}

IL_00f1:
	{
		uint8_t* L_47 = V_5;
		V_5 = ((uint8_t*)il2cpp_codegen_subtract((intptr_t)L_47, 1));
		uint8_t* L_48 = V_18;
		V_18 = ((uint8_t*)il2cpp_codegen_subtract((intptr_t)L_48, 1));
	}

IL_00fd:
	{
		uint8_t* L_49 = V_5;
		uint8_t* L_50 = V_6;
		if ((!(((uintptr_t)L_49) > ((uintptr_t)L_50))))
		{
			goto IL_0114;
		}
	}
	{
		uint8_t* L_51 = V_18;
		uint8_t* L_52 = ___source0;
		if ((!(((uintptr_t)L_51) > ((uintptr_t)L_52))))
		{
			goto IL_0114;
		}
	}
	{
		uint8_t* L_53 = V_5;
		int32_t L_54 = *((uint8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_53, (-1))));
		uint8_t* L_55 = V_18;
		int32_t L_56 = *((uint8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_55, (-1))));
		if ((((int32_t)L_54) == ((int32_t)L_56)))
		{
			goto IL_00f1;
		}
	}

IL_0114:
	{
		uint8_t* L_57 = V_5;
		uint8_t* L_58 = V_6;
		V_14 = ((int32_t)((int64_t)(intptr_t)((uint8_t*)((intptr_t)((uint8_t*)il2cpp_codegen_subtract((intptr_t)L_57, (intptr_t)L_58))/1))));
		uint8_t* L_59 = V_11;
		uint8_t* L_60 = L_59;
		V_11 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_60, 1));
		V_19 = L_60;
		uint8_t* L_61 = V_11;
		int32_t L_62 = V_14;
		int32_t L_63 = V_14;
		uint8_t* L_64 = V_12;
		if ((!(((uintptr_t)((uint8_t*)il2cpp_codegen_add((intptr_t)((uint8_t*)il2cpp_codegen_add((intptr_t)((uint8_t*)il2cpp_codegen_add((intptr_t)L_61, L_62)), 8)), ((int32_t)(L_63>>8))))) >= ((uintptr_t)L_64))))
		{
			goto IL_013a;
		}
	}
	{
		return 0;
	}

IL_013a:
	{
		int32_t L_65 = V_14;
		if ((((int32_t)L_65) < ((int32_t)((int32_t)15))))
		{
			goto IL_0181;
		}
	}
	{
		uint8_t* L_66 = V_19;
		*((int8_t*)L_66) = (int8_t)((int32_t)240);
		int32_t L_67 = V_14;
		V_13 = ((int32_t)((int64_t)il2cpp_codegen_subtract(((int64_t)L_67), ((int64_t)((int32_t)15)))));
		goto IL_016b;
	}

IL_0154:
	{
		uint8_t* L_68 = V_11;
		uint8_t* L_69 = L_68;
		V_11 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_69, 1));
		*((int8_t*)L_69) = (int8_t)((int32_t)255);
		int32_t L_70 = V_13;
		V_13 = ((int32_t)il2cpp_codegen_subtract(L_70, ((int32_t)255)));
	}

IL_016b:
	{
		int32_t L_71 = V_13;
		if ((((int32_t)L_71) > ((int32_t)((int32_t)254))))
		{
			goto IL_0154;
		}
	}
	{
		uint8_t* L_72 = V_11;
		uint8_t* L_73 = L_72;
		V_11 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_73, 1));
		int32_t L_74 = V_13;
		*((int8_t*)L_73) = (int8_t)((int32_t)(uint8_t)L_74);
		goto IL_0189;
	}

IL_0181:
	{
		uint8_t* L_75 = V_19;
		int32_t L_76 = V_14;
		*((int8_t*)L_75) = (int8_t)((int32_t)(uint8_t)((int32_t)(L_76<<4)));
	}

IL_0189:
	{
		uint8_t* L_77 = V_11;
		int32_t L_78 = V_14;
		V_22 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_77, L_78));
	}

IL_0190:
	{
		uint8_t* L_79 = V_11;
		uint8_t* L_80 = V_6;
		int32_t L_81 = *((uint32_t*)L_80);
		*((int32_t*)L_79) = (int32_t)L_81;
		uint8_t* L_82 = V_11;
		V_11 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_82, 4));
		uint8_t* L_83 = V_6;
		V_6 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_83, 4));
		uint8_t* L_84 = V_11;
		uint8_t* L_85 = V_6;
		int32_t L_86 = *((uint32_t*)L_85);
		*((int32_t*)L_84) = (int32_t)L_86;
		uint8_t* L_87 = V_11;
		V_11 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_87, 4));
		uint8_t* L_88 = V_6;
		V_6 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_88, 4));
		uint8_t* L_89 = V_11;
		uint8_t* L_90 = V_22;
		if ((!(((uintptr_t)L_89) >= ((uintptr_t)L_90))))
		{
			goto IL_0190;
		}
	}
	{
		uint8_t* L_91 = V_22;
		V_11 = L_91;
	}

IL_01be:
	{
		uint8_t* L_92 = V_11;
		uint8_t* L_93 = V_5;
		uint8_t* L_94 = V_18;
		*((int16_t*)L_92) = (int16_t)((int32_t)(uint16_t)((int64_t)(intptr_t)((uint8_t*)((intptr_t)((uint8_t*)il2cpp_codegen_subtract((intptr_t)L_93, (intptr_t)L_94))/1))));
		uint8_t* L_95 = V_11;
		V_11 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_95, 2));
		uint8_t* L_96 = V_5;
		V_5 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_96, 4));
		uint8_t* L_97 = V_18;
		V_18 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_97, 4));
		uint8_t* L_98 = V_5;
		V_6 = L_98;
		goto IL_021c;
	}

IL_01e2:
	{
		uint8_t* L_99 = V_18;
		int32_t L_100 = *((int32_t*)L_99);
		uint8_t* L_101 = V_5;
		int32_t L_102 = *((int32_t*)L_101);
		V_23 = ((int32_t)(L_100^L_102));
		int32_t L_103 = V_23;
		if (L_103)
		{
			goto IL_01fd;
		}
	}
	{
		uint8_t* L_104 = V_5;
		V_5 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_104, 4));
		uint8_t* L_105 = V_18;
		V_18 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_105, 4));
		goto IL_021c;
	}

IL_01fd:
	{
		uint8_t* L_106 = V_5;
		il2cpp_codegen_runtime_class_init_inline(LZ4Compressor32_tB2B2F6E6ED6CD3D21CC3173896599134BB75C1B4_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_107 = ((LZ4Compressor32_tB2B2F6E6ED6CD3D21CC3173896599134BB75C1B4_StaticFields*)il2cpp_codegen_static_fields_for(LZ4Compressor32_tB2B2F6E6ED6CD3D21CC3173896599134BB75C1B4_il2cpp_TypeInfo_var))->___DeBruijnBytePos_16;
		int32_t L_108 = V_23;
		int32_t L_109 = V_23;
		NullCheck(L_107);
		int32_t L_110 = ((int32_t)((uint32_t)((int32_t)(uint32_t)((int64_t)il2cpp_codegen_multiply(((int64_t)((int32_t)(L_108&((-L_109))))), ((int64_t)((int32_t)125613361)))))>>((int32_t)27)));
		uint8_t L_111 = (L_107)->GetAt(static_cast<il2cpp_array_size_t>(L_110));
		V_5 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_106, (int32_t)L_111));
		goto IL_0254;
	}

IL_021c:
	{
		uint8_t* L_112 = V_5;
		uint8_t* L_113 = V_10;
		if ((!(((uintptr_t)L_112) >= ((uintptr_t)((uint8_t*)il2cpp_codegen_subtract((intptr_t)L_113, 3))))))
		{
			goto IL_01e2;
		}
	}
	{
		uint8_t* L_114 = V_5;
		uint8_t* L_115 = V_10;
		if ((!(((uintptr_t)L_114) < ((uintptr_t)((uint8_t*)il2cpp_codegen_subtract((intptr_t)L_115, 1))))))
		{
			goto IL_0240;
		}
	}
	{
		uint8_t* L_116 = V_18;
		int32_t L_117 = *((uint16_t*)L_116);
		uint8_t* L_118 = V_5;
		int32_t L_119 = *((uint16_t*)L_118);
		if ((!(((uint32_t)L_117) == ((uint32_t)L_119))))
		{
			goto IL_0240;
		}
	}
	{
		uint8_t* L_120 = V_5;
		V_5 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_120, 2));
		uint8_t* L_121 = V_18;
		V_18 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_121, 2));
	}

IL_0240:
	{
		uint8_t* L_122 = V_5;
		uint8_t* L_123 = V_10;
		if ((!(((uintptr_t)L_122) < ((uintptr_t)L_123))))
		{
			goto IL_0254;
		}
	}
	{
		uint8_t* L_124 = V_18;
		int32_t L_125 = *((uint8_t*)L_124);
		uint8_t* L_126 = V_5;
		int32_t L_127 = *((uint8_t*)L_126);
		if ((!(((uint32_t)L_125) == ((uint32_t)L_127))))
		{
			goto IL_0254;
		}
	}
	{
		uint8_t* L_128 = V_5;
		V_5 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_128, 1));
	}

IL_0254:
	{
		uint8_t* L_129 = V_5;
		uint8_t* L_130 = V_6;
		V_13 = ((int32_t)((int64_t)(intptr_t)((uint8_t*)((intptr_t)((uint8_t*)il2cpp_codegen_subtract((intptr_t)L_129, (intptr_t)L_130))/1))));
		int32_t L_131 = V_13;
		if ((((int32_t)L_131) < ((int32_t)((int32_t)15))))
		{
			goto IL_02d5;
		}
	}
	{
		uint8_t* L_132 = V_19;
		uint8_t* L_133 = V_19;
		int32_t L_134 = *((uint8_t*)L_133);
		*((int8_t*)L_132) = (int8_t)((int32_t)(uint8_t)((int32_t)il2cpp_codegen_add(L_134, ((int32_t)15))));
		int32_t L_135 = V_13;
		V_13 = ((int32_t)((int64_t)il2cpp_codegen_subtract(((int64_t)L_135), ((int64_t)((int32_t)15)))));
		goto IL_029f;
	}

IL_027b:
	{
		uint8_t* L_136 = V_11;
		uint8_t* L_137 = L_136;
		V_11 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_137, 1));
		*((int8_t*)L_137) = (int8_t)((int32_t)255);
		uint8_t* L_138 = V_11;
		uint8_t* L_139 = L_138;
		V_11 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_139, 1));
		*((int8_t*)L_139) = (int8_t)((int32_t)255);
		int32_t L_140 = V_13;
		V_13 = ((int32_t)il2cpp_codegen_subtract(L_140, ((int32_t)510)));
	}

IL_029f:
	{
		int32_t L_141 = V_13;
		if ((((int32_t)L_141) > ((int32_t)((int32_t)509))))
		{
			goto IL_027b;
		}
	}
	{
		int32_t L_142 = V_13;
		if ((((int32_t)L_142) <= ((int32_t)((int32_t)254))))
		{
			goto IL_02c8;
		}
	}
	{
		int32_t L_143 = V_13;
		V_13 = ((int32_t)il2cpp_codegen_subtract(L_143, ((int32_t)255)));
		uint8_t* L_144 = V_11;
		uint8_t* L_145 = L_144;
		V_11 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_145, 1));
		*((int8_t*)L_145) = (int8_t)((int32_t)255);
	}

IL_02c8:
	{
		uint8_t* L_146 = V_11;
		uint8_t* L_147 = L_146;
		V_11 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_147, 1));
		int32_t L_148 = V_13;
		*((int8_t*)L_147) = (int8_t)((int32_t)(uint8_t)L_148);
		goto IL_02df;
	}

IL_02d5:
	{
		uint8_t* L_149 = V_19;
		uint8_t* L_150 = V_19;
		int32_t L_151 = *((uint8_t*)L_150);
		int32_t L_152 = V_13;
		*((int8_t*)L_149) = (int8_t)((int32_t)(uint8_t)((int32_t)il2cpp_codegen_add(L_151, L_152)));
	}

IL_02df:
	{
		uint8_t* L_153 = V_5;
		uint8_t* L_154 = V_9;
		if ((!(((uintptr_t)L_153) > ((uintptr_t)L_154))))
		{
			goto IL_02ee;
		}
	}
	{
		uint8_t* L_155 = V_5;
		V_6 = L_155;
		goto IL_037e;
	}

IL_02ee:
	{
		uint16_t* L_156 = V_4;
		uint8_t* L_157 = V_5;
		int32_t L_158 = *((uint32_t*)L_157);
		uint8_t* L_159 = V_5;
		uint8_t* L_160 = V_7;
		*((int16_t*)((uint16_t*)il2cpp_codegen_add((intptr_t)L_156, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)((uint32_t)((int32_t)((uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_subtract(L_158, 2)), ((int32_t)-1640531535)))>>((int32_t)19))))), ((int64_t)2))))))) = (int16_t)((int32_t)(uint16_t)((int64_t)(intptr_t)((uint8_t*)((intptr_t)((uint8_t*)il2cpp_codegen_subtract((intptr_t)((uint8_t*)il2cpp_codegen_subtract((intptr_t)L_159, 2)), (intptr_t)L_160))/1))));
		uint8_t* L_161 = V_7;
		uint16_t* L_162 = V_4;
		uint8_t* L_163 = V_5;
		int32_t L_164 = *((uint32_t*)L_163);
		int32_t L_165 = *((uint16_t*)((uint16_t*)il2cpp_codegen_add((intptr_t)L_162, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)((uint32_t)((int32_t)((uint32_t)((int32_t)il2cpp_codegen_multiply(L_164, ((int32_t)-1640531535)))>>((int32_t)19))))), ((int64_t)2)))))));
		V_18 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_161, L_165));
		uint16_t* L_166 = V_4;
		uint8_t* L_167 = V_5;
		int32_t L_168 = *((uint32_t*)L_167);
		uint8_t* L_169 = V_5;
		uint8_t* L_170 = V_7;
		*((int16_t*)((uint16_t*)il2cpp_codegen_add((intptr_t)L_166, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)((uint32_t)((int32_t)((uint32_t)((int32_t)il2cpp_codegen_multiply(L_168, ((int32_t)-1640531535)))>>((int32_t)19))))), ((int64_t)2))))))) = (int16_t)((int32_t)(uint16_t)((int64_t)(intptr_t)((uint8_t*)((intptr_t)((uint8_t*)il2cpp_codegen_subtract((intptr_t)L_169, (intptr_t)L_170))/1))));
		uint8_t* L_171 = V_18;
		int32_t L_172 = *((uint32_t*)L_171);
		uint8_t* L_173 = V_5;
		int32_t L_174 = *((uint32_t*)L_173);
		if ((!(((uint32_t)L_172) == ((uint32_t)L_174))))
		{
			goto IL_0362;
		}
	}
	{
		uint8_t* L_175 = V_11;
		uint8_t* L_176 = L_175;
		V_11 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_176, 1));
		V_19 = L_176;
		uint8_t* L_177 = V_19;
		*((int8_t*)L_177) = (int8_t)0;
		goto IL_01be;
	}

IL_0362:
	{
		uint8_t* L_178 = V_5;
		uint8_t* L_179 = L_178;
		V_5 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_179, 1));
		V_6 = L_179;
		uint8_t* L_180 = V_5;
		int32_t L_181 = *((uint32_t*)L_180);
		V_15 = ((int32_t)((uint32_t)((int32_t)il2cpp_codegen_multiply(L_181, ((int32_t)-1640531535)))>>((int32_t)19)));
		goto IL_008a;
	}

IL_037e:
	{
		uint8_t* L_182 = V_8;
		uint8_t* L_183 = V_6;
		V_24 = ((int32_t)((int64_t)(intptr_t)((uint8_t*)((intptr_t)((uint8_t*)il2cpp_codegen_subtract((intptr_t)L_182, (intptr_t)L_183))/1))));
		uint8_t* L_184 = V_11;
		uint8_t* L_185 = ___dest1;
		int32_t L_186 = V_24;
		int32_t L_187 = V_24;
		int32_t L_188 = ___maxOutputSize3;
		if ((((int64_t)((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)(intptr_t)((uint8_t*)((intptr_t)((uint8_t*)il2cpp_codegen_subtract((intptr_t)L_184, (intptr_t)L_185))/1))), ((int64_t)L_186))), ((int64_t)1))), ((int64_t)((int32_t)(L_187>>8)))))) < ((int64_t)((int64_t)L_188))))
		{
			goto IL_03a4;
		}
	}
	{
		return 0;
	}

IL_03a4:
	{
		int32_t L_189 = V_24;
		if ((((int32_t)L_189) < ((int32_t)((int32_t)15))))
		{
			goto IL_03ed;
		}
	}
	{
		uint8_t* L_190 = V_11;
		uint8_t* L_191 = L_190;
		V_11 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_191, 1));
		*((int8_t*)L_191) = (int8_t)((int32_t)240);
		int32_t L_192 = V_24;
		V_24 = ((int32_t)il2cpp_codegen_subtract(L_192, ((int32_t)15)));
		goto IL_03d7;
	}

IL_03c0:
	{
		uint8_t* L_193 = V_11;
		uint8_t* L_194 = L_193;
		V_11 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_194, 1));
		*((int8_t*)L_194) = (int8_t)((int32_t)255);
		int32_t L_195 = V_24;
		V_24 = ((int32_t)il2cpp_codegen_subtract(L_195, ((int32_t)255)));
	}

IL_03d7:
	{
		int32_t L_196 = V_24;
		if ((((int32_t)L_196) > ((int32_t)((int32_t)254))))
		{
			goto IL_03c0;
		}
	}
	{
		uint8_t* L_197 = V_11;
		uint8_t* L_198 = L_197;
		V_11 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_198, 1));
		int32_t L_199 = V_24;
		*((int8_t*)L_198) = (int8_t)((int32_t)(uint8_t)L_199);
		goto IL_03fa;
	}

IL_03ed:
	{
		uint8_t* L_200 = V_11;
		uint8_t* L_201 = L_200;
		V_11 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_201, 1));
		int32_t L_202 = V_24;
		*((int8_t*)L_201) = (int8_t)((int32_t)(uint8_t)((int32_t)(L_202<<4)));
	}

IL_03fa:
	{
		uint8_t* L_203 = V_11;
		uint8_t* L_204 = V_6;
		uint8_t* L_205 = V_8;
		uint8_t* L_206 = V_6;
		LZ4Util_CopyMemory_mE7FF2466FFC0EFEDA278A55F7222EDB2BBE84EDA(L_203, L_204, ((int64_t)(intptr_t)((uint8_t*)((intptr_t)((uint8_t*)il2cpp_codegen_subtract((intptr_t)L_205, (intptr_t)L_206))/1))), NULL);
		uint8_t* L_207 = V_11;
		uint8_t* L_208 = V_8;
		uint8_t* L_209 = V_6;
		V_11 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_207, ((intptr_t)((int64_t)(intptr_t)((uint8_t*)((intptr_t)((uint8_t*)il2cpp_codegen_subtract((intptr_t)L_208, (intptr_t)L_209))/1))))));
		uint8_t* L_210 = V_11;
		uint8_t* L_211 = ___dest1;
		return ((int32_t)((int64_t)(intptr_t)((uint8_t*)((intptr_t)((uint8_t*)il2cpp_codegen_subtract((intptr_t)L_210, (intptr_t)L_211))/1))));
	}
}
// System.Void LZ4Sharp.LZ4Compressor32::Clear(System.Byte*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LZ4Compressor32_Clear_m6C91D4FD5F1B8F7CF186ED06A35BB027D6C1A94C (uint8_t* ___ptr0, int32_t ___count1, const RuntimeMethod* method) 
{
	int64_t* V_0 = NULL;
	int32_t V_1 = 0;
	{
		uint8_t* L_0 = ___ptr0;
		V_0 = (int64_t*)L_0;
		int32_t L_1 = ___count1;
		V_1 = ((int32_t)(L_1>>4));
		goto IL_0018;
	}

IL_0008:
	{
		int64_t* L_2 = V_0;
		int64_t* L_3 = L_2;
		V_0 = ((int64_t*)il2cpp_codegen_add((intptr_t)L_3, 8));
		*((int64_t*)L_3) = (int64_t)((int64_t)0);
		int64_t* L_4 = V_0;
		int64_t* L_5 = L_4;
		V_0 = ((int64_t*)il2cpp_codegen_add((intptr_t)L_5, 8));
		*((int64_t*)L_5) = (int64_t)((int64_t)0);
	}

IL_0018:
	{
		int32_t L_6 = V_1;
		int32_t L_7 = L_6;
		V_1 = ((int32_t)il2cpp_codegen_subtract(L_7, 1));
		if (L_7)
		{
			goto IL_0008;
		}
	}
	{
		return;
	}
}
// System.Void LZ4Sharp.LZ4Compressor32::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LZ4Compressor32__cctor_m454D54F176776F5031E76C4DC92BBBDE8F40986D (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LZ4Compressor32_tB2B2F6E6ED6CD3D21CC3173896599134BB75C1B4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_t17805B5F7C0D0D788494C2B7E9223B9DDD566C70____99D91C09CCCD2860D80BAA555488A517884BD0A1_2_FieldInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)32));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = L_0;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_2 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t17805B5F7C0D0D788494C2B7E9223B9DDD566C70____99D91C09CCCD2860D80BAA555488A517884BD0A1_2_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_mE10C3436BA703E4D9D41B3F8F365E4C34F9926EF((RuntimeArray*)L_1, L_2, NULL);
		((LZ4Compressor32_tB2B2F6E6ED6CD3D21CC3173896599134BB75C1B4_StaticFields*)il2cpp_codegen_static_fields_for(LZ4Compressor32_tB2B2F6E6ED6CD3D21CC3173896599134BB75C1B4_il2cpp_TypeInfo_var))->___DeBruijnBytePos_16 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((LZ4Compressor32_tB2B2F6E6ED6CD3D21CC3173896599134BB75C1B4_StaticFields*)il2cpp_codegen_static_fields_for(LZ4Compressor32_tB2B2F6E6ED6CD3D21CC3173896599134BB75C1B4_il2cpp_TypeInfo_var))->___DeBruijnBytePos_16), (void*)L_1);
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
// System.Void LZ4Sharp.LZ4Compressor64::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LZ4Compressor64__ctor_m600D9E6454F2E0C1C93A5CA2010622A4E8945215 (LZ4Compressor64_t6D8D18D2CF9521C99528322D9DC031806509039A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0;
		L_0 = IntPtr_get_Size_mF11301B9A665D54B8DC89DC6AFE37728B91E6F10(NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)4096), L_0)));
		__this->___m_HashTable_17 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_HashTable_17), (void*)L_1);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = __this->___m_HashTable_17;
		NullCheck(L_2);
		if (!((int32_t)(((int32_t)(((RuntimeArray*)L_2)->max_length))%((int32_t)16))))
		{
			goto IL_0034;
		}
	}
	{
		Exception_t* L_3 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		NullCheck(L_3);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC027C2D33A7990E5219B343D6442136C20FF6746)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&LZ4Compressor64__ctor_m600D9E6454F2E0C1C93A5CA2010622A4E8945215_RuntimeMethod_var)));
	}

IL_0034:
	{
		return;
	}
}
// System.Byte[] LZ4Sharp.LZ4Compressor64::Compress(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* LZ4Compressor64_Compress_m6D00CAF1C2CDA3464777E52770F0A53D7D78D311 (LZ4Compressor64_t6D8D18D2CF9521C99528322D9DC031806509039A* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___source0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	int32_t V_1 = 0;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_2 = NULL;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___source0;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = LZ4Compressor64_CalculateMaxCompressedLength_m4843CAAF6DB4FE4BE43C47942010280F161BC3B6(__this, ((int32_t)(((RuntimeArray*)L_0)->max_length)), NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_1);
		V_0 = L_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = ___source0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = V_0;
		int32_t L_5;
		L_5 = LZ4Compressor64_Compress_mF26BD5B61F900516DCE35D7389BF4F497ED50C52(__this, L_3, L_4, NULL);
		V_1 = L_5;
		int32_t L_6 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_6);
		V_2 = L_7;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = V_2;
		int32_t L_10 = V_1;
		Buffer_BlockCopy_mD8CF7EC96ADA7A542CCA3F3C73510624E10197A9((RuntimeArray*)L_8, 0, (RuntimeArray*)L_9, 0, L_10, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = V_2;
		return L_11;
	}
}
// System.Int32 LZ4Sharp.LZ4Compressor64::CalculateMaxCompressedLength(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LZ4Compressor64_CalculateMaxCompressedLength_m4843CAAF6DB4FE4BE43C47942010280F161BC3B6 (LZ4Compressor64_t6D8D18D2CF9521C99528322D9DC031806509039A* __this, int32_t ___uncompressedLength0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___uncompressedLength0;
		int32_t L_1 = ___uncompressedLength0;
		return ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_0, ((int32_t)(L_1/((int32_t)255))))), ((int32_t)16)));
	}
}
// System.Int32 LZ4Sharp.LZ4Compressor64::Compress(System.Byte[],System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LZ4Compressor64_Compress_mF26BD5B61F900516DCE35D7389BF4F497ED50C52 (LZ4Compressor64_t6D8D18D2CF9521C99528322D9DC031806509039A* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___source0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___dest1, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_1 = NULL;
	uint8_t* V_2 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_3 = NULL;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___source0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = L_0;
		V_1 = L_1;
		if (!L_1)
		{
			goto IL_000a;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = V_1;
		NullCheck(L_2);
		if (((int32_t)(((RuntimeArray*)L_2)->max_length)))
		{
			goto IL_000f;
		}
	}

IL_000a:
	{
		V_0 = (uint8_t*)((uintptr_t)0);
		goto IL_0018;
	}

IL_000f:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = V_1;
		NullCheck(L_3);
		V_0 = (uint8_t*)((uintptr_t)((L_3)->GetAddressAt(static_cast<il2cpp_array_size_t>(0))));
	}

IL_0018:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = ___dest1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = L_4;
		V_3 = L_5;
		if (!L_5)
		{
			goto IL_0022;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = V_3;
		NullCheck(L_6);
		if (((int32_t)(((RuntimeArray*)L_6)->max_length)))
		{
			goto IL_0027;
		}
	}

IL_0022:
	{
		V_2 = (uint8_t*)((uintptr_t)0);
		goto IL_0030;
	}

IL_0027:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = V_3;
		NullCheck(L_7);
		V_2 = (uint8_t*)((uintptr_t)((L_7)->GetAddressAt(static_cast<il2cpp_array_size_t>(0))));
	}

IL_0030:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = ___source0;
		NullCheck(L_8);
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_8)->max_length))) >= ((int32_t)((int32_t)65547))))
		{
			goto IL_0049;
		}
	}
	{
		uint8_t* L_9 = V_0;
		uint8_t* L_10 = V_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = ___source0;
		NullCheck(L_11);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12 = ___dest1;
		NullCheck(L_12);
		int32_t L_13;
		L_13 = LZ4Compressor64_Compress64K_m3765A951DCC05D1F5A0DB04658305DCBF4AA966D(__this, L_9, L_10, ((int32_t)(((RuntimeArray*)L_11)->max_length)), ((int32_t)(((RuntimeArray*)L_12)->max_length)), NULL);
		return L_13;
	}

IL_0049:
	{
		uint8_t* L_14 = V_0;
		uint8_t* L_15 = V_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_16 = ___source0;
		NullCheck(L_16);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_17 = ___dest1;
		NullCheck(L_17);
		int32_t L_18;
		L_18 = LZ4Compressor64_Compress_m5447ABB51EBC44EB5BE7B6B059AE54712B01751C(__this, L_14, L_15, ((int32_t)(((RuntimeArray*)L_16)->max_length)), ((int32_t)(((RuntimeArray*)L_17)->max_length)), NULL);
		return L_18;
	}
}
// System.Int32 LZ4Sharp.LZ4Compressor64::Compress(System.Byte[],System.Int32,System.Int32,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LZ4Compressor64_Compress_m0CD38BAB6C0746960A02C75710145C248468BB80 (LZ4Compressor64_t6D8D18D2CF9521C99528322D9DC031806509039A* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___source0, int32_t ___srcOffset1, int32_t ___count2, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___dest3, int32_t ___dstOffset4, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___source0;
		int32_t L_1 = ___srcOffset1;
		NullCheck(L_0);
		V_1 = ((L_0)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_1)));
		uint8_t* L_2 = V_1;
		V_0 = (uint8_t*)((uintptr_t)L_2);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = ___dest3;
		int32_t L_4 = ___dstOffset4;
		NullCheck(L_3);
		V_3 = ((L_3)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_4)));
		uint8_t* L_5 = V_3;
		V_2 = (uint8_t*)((uintptr_t)L_5);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = ___source0;
		NullCheck(L_6);
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_6)->max_length))) >= ((int32_t)((int32_t)65547))))
		{
			goto IL_0033;
		}
	}
	{
		uint8_t* L_7 = V_0;
		uint8_t* L_8 = V_2;
		int32_t L_9 = ___count2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = ___dest3;
		NullCheck(L_10);
		int32_t L_11 = ___dstOffset4;
		int32_t L_12;
		L_12 = LZ4Compressor64_Compress64K_m3765A951DCC05D1F5A0DB04658305DCBF4AA966D(__this, L_7, L_8, L_9, ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_10)->max_length)), L_11)), NULL);
		return L_12;
	}

IL_0033:
	{
		uint8_t* L_13 = V_0;
		uint8_t* L_14 = V_2;
		int32_t L_15 = ___count2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_16 = ___dest3;
		NullCheck(L_16);
		int32_t L_17 = ___dstOffset4;
		int32_t L_18;
		L_18 = LZ4Compressor64_Compress_m5447ABB51EBC44EB5BE7B6B059AE54712B01751C(__this, L_13, L_14, L_15, ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_16)->max_length)), L_17)), NULL);
		return L_18;
	}
}
// System.Int32 LZ4Sharp.LZ4Compressor64::Compress(System.Byte*,System.Byte*,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LZ4Compressor64_Compress_m5447ABB51EBC44EB5BE7B6B059AE54712B01751C (LZ4Compressor64_t6D8D18D2CF9521C99528322D9DC031806509039A* __this, uint8_t* ___source0, uint8_t* ___dest1, int32_t ___isize2, int32_t ___maxOutputSize3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LZ4Compressor64_Compress_m5447ABB51EBC44EB5BE7B6B059AE54712B01751C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LZ4Compressor64_t6D8D18D2CF9521C99528322D9DC031806509039A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint8_t* V_0 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_1 = NULL;
	uint8_t* V_2 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_3 = NULL;
	uint8_t** V_4 = NULL;
	uint8_t* V_5 = NULL;
	int64_t V_6 = 0;
	uint8_t* V_7 = NULL;
	uint8_t* V_8 = NULL;
	uint8_t* V_9 = NULL;
	uint8_t* V_10 = NULL;
	uint8_t* V_11 = NULL;
	uint8_t* V_12 = NULL;
	int32_t V_13 = 0;
	int32_t V_14 = 0;
	uint32_t V_15 = 0;
	uint32_t V_16 = 0;
	uint8_t* V_17 = NULL;
	uint8_t* V_18 = NULL;
	uint8_t* V_19 = NULL;
	uint32_t V_20 = 0;
	uint32_t V_21 = 0;
	uint8_t* V_22 = NULL;
	int64_t V_23 = 0;
	int32_t V_24 = 0;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = __this->___m_HashTable_17;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = L_0;
		V_1 = L_1;
		if (!L_1)
		{
			goto IL_000f;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = V_1;
		NullCheck(L_2);
		if (((int32_t)(((RuntimeArray*)L_2)->max_length)))
		{
			goto IL_0014;
		}
	}

IL_000f:
	{
		V_0 = (uint8_t*)((uintptr_t)0);
		goto IL_001d;
	}

IL_0014:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = V_1;
		NullCheck(L_3);
		V_0 = (uint8_t*)((uintptr_t)((L_3)->GetAddressAt(static_cast<il2cpp_array_size_t>(0))));
	}

IL_001d:
	{
		il2cpp_codegen_runtime_class_init_inline(LZ4Compressor64_t6D8D18D2CF9521C99528322D9DC031806509039A_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = ((LZ4Compressor64_t6D8D18D2CF9521C99528322D9DC031806509039A_StaticFields*)il2cpp_codegen_static_fields_for(LZ4Compressor64_t6D8D18D2CF9521C99528322D9DC031806509039A_il2cpp_TypeInfo_var))->___DeBruijnBytePos_16;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = L_4;
		V_3 = L_5;
		if (!L_5)
		{
			goto IL_002b;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = V_3;
		NullCheck(L_6);
		if (((int32_t)(((RuntimeArray*)L_6)->max_length)))
		{
			goto IL_0030;
		}
	}

IL_002b:
	{
		V_2 = (uint8_t*)((uintptr_t)0);
		goto IL_0039;
	}

IL_0030:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = V_3;
		NullCheck(L_7);
		V_2 = (uint8_t*)((uintptr_t)((L_7)->GetAddressAt(static_cast<il2cpp_array_size_t>(0))));
	}

IL_0039:
	{
		uint8_t* L_8 = V_0;
		uint32_t L_9 = sizeof(uint8_t*);
		il2cpp_codegen_runtime_class_init_inline(LZ4Compressor64_t6D8D18D2CF9521C99528322D9DC031806509039A_il2cpp_TypeInfo_var);
		LZ4Compressor64_Clear_mF3F1C066DB7C685F684FB4A1E634BF98297AE13E(L_8, ((int32_t)il2cpp_codegen_multiply((int32_t)L_9, ((int32_t)4096))), NULL);
		uint8_t* L_10 = V_0;
		V_4 = (uint8_t**)L_10;
		uint8_t* L_11 = ___source0;
		V_5 = L_11;
		uint8_t* L_12 = V_5;
		V_6 = ((int64_t)(uint64_t)(intptr_t)L_12);
		uint8_t* L_13 = V_5;
		V_7 = L_13;
		uint8_t* L_14 = V_5;
		int32_t L_15 = ___isize2;
		V_8 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_14, L_15));
		uint8_t* L_16 = V_8;
		V_9 = ((uint8_t*)il2cpp_codegen_subtract((intptr_t)L_16, ((int32_t)12)));
		uint8_t* L_17 = V_8;
		V_10 = ((uint8_t*)il2cpp_codegen_subtract((intptr_t)L_17, 5));
		uint8_t* L_18 = ___dest1;
		int32_t L_19 = ___maxOutputSize3;
		V_11 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_18, L_19));
		uint8_t* L_20 = ___dest1;
		V_12 = L_20;
		int32_t L_21 = ___isize2;
		if ((((int32_t)L_21) < ((int32_t)((int32_t)13))))
		{
			goto IL_03d6;
		}
	}
	{
		uint8_t** L_22 = V_4;
		uint8_t* L_23 = V_5;
		int32_t L_24 = *((uint32_t*)L_23);
		uint32_t L_25 = sizeof(uint8_t*);
		uint8_t* L_26 = V_5;
		int64_t L_27 = V_6;
		*((intptr_t*)((uint8_t**)il2cpp_codegen_add((intptr_t)L_22, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)((uint32_t)((int32_t)((uint32_t)((int32_t)il2cpp_codegen_multiply(L_24, ((int32_t)-1640531535)))>>((int32_t)20))))), ((int64_t)((int32_t)L_25)))))))) = (intptr_t)((uint8_t*)il2cpp_codegen_subtract((intptr_t)L_26, ((intptr_t)L_27)));
		uint8_t* L_28 = V_5;
		V_5 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_28, 1));
		uint8_t* L_29 = V_5;
		int32_t L_30 = *((uint32_t*)L_29);
		V_15 = ((int32_t)((uint32_t)((int32_t)il2cpp_codegen_multiply(L_30, ((int32_t)-1640531535)))>>((int32_t)20)));
	}

IL_00b2:
	{
		V_16 = ((int32_t)67);
		uint8_t* L_31 = V_5;
		V_17 = L_31;
	}

IL_00ba:
	{
		uint32_t L_32 = V_15;
		V_20 = L_32;
		uint32_t L_33 = V_16;
		uint32_t L_34 = L_33;
		V_16 = ((int32_t)il2cpp_codegen_add((int32_t)L_34, 1));
		V_21 = ((int32_t)((uint32_t)L_34>>6));
		uint8_t* L_35 = V_17;
		V_5 = L_35;
		uint8_t* L_36 = V_5;
		uint32_t L_37 = V_21;
		V_17 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_36, (intptr_t)((uintptr_t)L_37)));
		uint8_t* L_38 = V_17;
		uint8_t* L_39 = V_9;
		if ((!(((uintptr_t)L_38) <= ((uintptr_t)L_39))))
		{
			goto IL_03d6;
		}
	}
	{
		uint8_t* L_40 = V_17;
		int32_t L_41 = *((uint32_t*)L_40);
		V_15 = ((int32_t)((uint32_t)((int32_t)il2cpp_codegen_multiply(L_41, ((int32_t)-1640531535)))>>((int32_t)20)));
		uint8_t** L_42 = V_4;
		uint32_t L_43 = V_20;
		uint32_t L_44 = sizeof(uint8_t*);
		int64_t L_45 = V_6;
		V_18 = (uint8_t*)((intptr_t)il2cpp_codegen_add((*((intptr_t*)((uint8_t**)il2cpp_codegen_add((intptr_t)L_42, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_43), ((int64_t)((int32_t)L_44))))))))), ((intptr_t)L_45)));
		uint8_t** L_46 = V_4;
		uint32_t L_47 = V_20;
		uint32_t L_48 = sizeof(uint8_t*);
		uint8_t* L_49 = V_5;
		int64_t L_50 = V_6;
		*((intptr_t*)((uint8_t**)il2cpp_codegen_add((intptr_t)L_46, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_47), ((int64_t)((int32_t)L_48)))))))) = (intptr_t)((uint8_t*)il2cpp_codegen_subtract((intptr_t)L_49, ((intptr_t)L_50)));
		uint8_t* L_51 = V_18;
		uint8_t* L_52 = V_5;
		if ((!(((uintptr_t)L_51) >= ((uintptr_t)((uint8_t*)il2cpp_codegen_subtract((intptr_t)L_52, ((int32_t)65535)))))))
		{
			goto IL_00ba;
		}
	}
	{
		uint8_t* L_53 = V_18;
		int32_t L_54 = *((uint32_t*)L_53);
		uint8_t* L_55 = V_5;
		int32_t L_56 = *((uint32_t*)L_55);
		if ((!(((uint32_t)L_54) == ((uint32_t)L_56))))
		{
			goto IL_00ba;
		}
	}
	{
		goto IL_013a;
	}

IL_012e:
	{
		uint8_t* L_57 = V_5;
		V_5 = ((uint8_t*)il2cpp_codegen_subtract((intptr_t)L_57, 1));
		uint8_t* L_58 = V_18;
		V_18 = ((uint8_t*)il2cpp_codegen_subtract((intptr_t)L_58, 1));
	}

IL_013a:
	{
		uint8_t* L_59 = V_5;
		uint8_t* L_60 = V_7;
		if ((!(((uintptr_t)L_59) > ((uintptr_t)L_60))))
		{
			goto IL_0151;
		}
	}
	{
		uint8_t* L_61 = V_18;
		uint8_t* L_62 = ___source0;
		if ((!(((uintptr_t)L_61) > ((uintptr_t)L_62))))
		{
			goto IL_0151;
		}
	}
	{
		uint8_t* L_63 = V_5;
		int32_t L_64 = *((uint8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_63, (-1))));
		uint8_t* L_65 = V_18;
		int32_t L_66 = *((uint8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_65, (-1))));
		if ((((int32_t)L_64) == ((int32_t)L_66)))
		{
			goto IL_012e;
		}
	}

IL_0151:
	{
		uint8_t* L_67 = V_5;
		uint8_t* L_68 = V_7;
		V_14 = ((int32_t)((int64_t)(intptr_t)((uint8_t*)((intptr_t)((uint8_t*)il2cpp_codegen_subtract((intptr_t)L_67, (intptr_t)L_68))/1))));
		uint8_t* L_69 = V_12;
		uint8_t* L_70 = L_69;
		V_12 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_70, 1));
		V_19 = L_70;
		int32_t L_71 = V_14;
		if ((((int32_t)L_71) < ((int32_t)((int32_t)15))))
		{
			goto IL_01ac;
		}
	}
	{
		uint8_t* L_72 = V_19;
		*((int8_t*)L_72) = (int8_t)((int32_t)240);
		int32_t L_73 = V_14;
		V_13 = ((int32_t)((int64_t)il2cpp_codegen_subtract(((int64_t)L_73), ((int64_t)((int32_t)15)))));
		goto IL_0196;
	}

IL_017f:
	{
		uint8_t* L_74 = V_12;
		uint8_t* L_75 = L_74;
		V_12 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_75, 1));
		*((int8_t*)L_75) = (int8_t)((int32_t)255);
		int32_t L_76 = V_13;
		V_13 = ((int32_t)il2cpp_codegen_subtract(L_76, ((int32_t)255)));
	}

IL_0196:
	{
		int32_t L_77 = V_13;
		if ((((int32_t)L_77) > ((int32_t)((int32_t)254))))
		{
			goto IL_017f;
		}
	}
	{
		uint8_t* L_78 = V_12;
		uint8_t* L_79 = L_78;
		V_12 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_79, 1));
		int32_t L_80 = V_13;
		*((int8_t*)L_79) = (int8_t)((int32_t)(uint8_t)L_80);
		goto IL_01b4;
	}

IL_01ac:
	{
		uint8_t* L_81 = V_19;
		int32_t L_82 = V_14;
		*((int8_t*)L_81) = (int8_t)((int32_t)(uint8_t)((int32_t)(L_82<<4)));
	}

IL_01b4:
	{
		uint8_t* L_83 = V_12;
		int32_t L_84 = V_14;
		V_22 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_83, L_84));
	}

IL_01bb:
	{
		uint8_t* L_85 = V_12;
		uint8_t* L_86 = V_7;
		int64_t L_87 = *((int64_t*)L_86);
		*((int64_t*)L_85) = (int64_t)L_87;
		uint8_t* L_88 = V_12;
		V_12 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_88, 8));
		uint8_t* L_89 = V_7;
		V_7 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_89, 8));
		uint8_t* L_90 = V_12;
		uint8_t* L_91 = V_22;
		if ((!(((uintptr_t)L_90) >= ((uintptr_t)L_91))))
		{
			goto IL_01bb;
		}
	}
	{
		uint8_t* L_92 = V_22;
		V_12 = L_92;
	}

IL_01d7:
	{
		uint8_t* L_93 = V_12;
		uint8_t* L_94 = V_5;
		uint8_t* L_95 = V_18;
		*((int16_t*)L_93) = (int16_t)((int32_t)(uint16_t)((int64_t)(intptr_t)((uint8_t*)((intptr_t)((uint8_t*)il2cpp_codegen_subtract((intptr_t)L_94, (intptr_t)L_95))/1))));
		uint8_t* L_96 = V_12;
		V_12 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_96, 2));
		uint8_t* L_97 = V_5;
		V_5 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_97, 4));
		uint8_t* L_98 = V_18;
		V_18 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_98, 4));
		uint8_t* L_99 = V_5;
		V_7 = L_99;
		goto IL_0237;
	}

IL_01fb:
	{
		uint8_t* L_100 = V_18;
		int64_t L_101 = *((int64_t*)L_100);
		uint8_t* L_102 = V_5;
		int64_t L_103 = *((int64_t*)L_102);
		V_23 = ((int64_t)(L_101^L_103));
		int64_t L_104 = V_23;
		if (L_104)
		{
			goto IL_0216;
		}
	}
	{
		uint8_t* L_105 = V_5;
		V_5 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_105, 8));
		uint8_t* L_106 = V_18;
		V_18 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_106, 8));
		goto IL_0237;
	}

IL_0216:
	{
		uint8_t* L_107 = V_5;
		il2cpp_codegen_runtime_class_init_inline(LZ4Compressor64_t6D8D18D2CF9521C99528322D9DC031806509039A_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_108 = ((LZ4Compressor64_t6D8D18D2CF9521C99528322D9DC031806509039A_StaticFields*)il2cpp_codegen_static_fields_for(LZ4Compressor64_t6D8D18D2CF9521C99528322D9DC031806509039A_il2cpp_TypeInfo_var))->___DeBruijnBytePos_16;
		int64_t L_109 = V_23;
		int64_t L_110 = V_23;
		if ((uint64_t)(((int64_t)((uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)(L_109&((-L_110)))), ((int64_t)151050438428048703LL)))>>((int32_t)58)))) > INTPTR_MAX) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), LZ4Compressor64_Compress_m5447ABB51EBC44EB5BE7B6B059AE54712B01751C_RuntimeMethod_var);
		NullCheck(L_108);
		intptr_t L_111 = ((intptr_t)((int64_t)((uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)(L_109&((-L_110)))), ((int64_t)151050438428048703LL)))>>((int32_t)58))));
		uint8_t L_112 = (L_108)->GetAt(static_cast<il2cpp_array_size_t>(L_111));
		V_5 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_107, (int32_t)L_112));
		goto IL_028b;
	}

IL_0237:
	{
		uint8_t* L_113 = V_5;
		uint8_t* L_114 = V_10;
		if ((!(((uintptr_t)L_113) >= ((uintptr_t)((uint8_t*)il2cpp_codegen_subtract((intptr_t)L_114, 7))))))
		{
			goto IL_01fb;
		}
	}
	{
		uint8_t* L_115 = V_5;
		uint8_t* L_116 = V_10;
		if ((!(((uintptr_t)L_115) < ((uintptr_t)((uint8_t*)il2cpp_codegen_subtract((intptr_t)L_116, 3))))))
		{
			goto IL_025b;
		}
	}
	{
		uint8_t* L_117 = V_18;
		int32_t L_118 = *((uint32_t*)L_117);
		uint8_t* L_119 = V_5;
		int32_t L_120 = *((uint32_t*)L_119);
		if ((!(((uint32_t)L_118) == ((uint32_t)L_120))))
		{
			goto IL_025b;
		}
	}
	{
		uint8_t* L_121 = V_5;
		V_5 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_121, 4));
		uint8_t* L_122 = V_18;
		V_18 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_122, 4));
	}

IL_025b:
	{
		uint8_t* L_123 = V_5;
		uint8_t* L_124 = V_10;
		if ((!(((uintptr_t)L_123) < ((uintptr_t)((uint8_t*)il2cpp_codegen_subtract((intptr_t)L_124, 1))))))
		{
			goto IL_0277;
		}
	}
	{
		uint8_t* L_125 = V_18;
		int32_t L_126 = *((uint16_t*)L_125);
		uint8_t* L_127 = V_5;
		int32_t L_128 = *((uint16_t*)L_127);
		if ((!(((uint32_t)L_126) == ((uint32_t)L_128))))
		{
			goto IL_0277;
		}
	}
	{
		uint8_t* L_129 = V_5;
		V_5 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_129, 2));
		uint8_t* L_130 = V_18;
		V_18 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_130, 2));
	}

IL_0277:
	{
		uint8_t* L_131 = V_5;
		uint8_t* L_132 = V_10;
		if ((!(((uintptr_t)L_131) < ((uintptr_t)L_132))))
		{
			goto IL_028b;
		}
	}
	{
		uint8_t* L_133 = V_18;
		int32_t L_134 = *((uint8_t*)L_133);
		uint8_t* L_135 = V_5;
		int32_t L_136 = *((uint8_t*)L_135);
		if ((!(((uint32_t)L_134) == ((uint32_t)L_136))))
		{
			goto IL_028b;
		}
	}
	{
		uint8_t* L_137 = V_5;
		V_5 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_137, 1));
	}

IL_028b:
	{
		uint8_t* L_138 = V_5;
		uint8_t* L_139 = V_7;
		V_13 = ((int32_t)((int64_t)(intptr_t)((uint8_t*)((intptr_t)((uint8_t*)il2cpp_codegen_subtract((intptr_t)L_138, (intptr_t)L_139))/1))));
		uint8_t* L_140 = V_12;
		int32_t L_141 = V_13;
		uint8_t* L_142 = V_11;
		if ((!(((uintptr_t)((uint8_t*)il2cpp_codegen_add((intptr_t)((uint8_t*)il2cpp_codegen_add((intptr_t)L_140, 6)), ((int32_t)(L_141>>8))))) >= ((uintptr_t)L_142))))
		{
			goto IL_02a5;
		}
	}
	{
		return 0;
	}

IL_02a5:
	{
		int32_t L_143 = V_13;
		if ((((int32_t)L_143) < ((int32_t)((int32_t)15))))
		{
			goto IL_0317;
		}
	}
	{
		uint8_t* L_144 = V_19;
		uint8_t* L_145 = L_144;
		int32_t L_146 = *((uint8_t*)L_145);
		*((int8_t*)L_145) = (int8_t)((int32_t)(uint8_t)((int32_t)il2cpp_codegen_add(L_146, ((int32_t)15))));
		int32_t L_147 = V_13;
		V_13 = ((int32_t)il2cpp_codegen_subtract(L_147, ((int32_t)15)));
		goto IL_02e1;
	}

IL_02bd:
	{
		uint8_t* L_148 = V_12;
		uint8_t* L_149 = L_148;
		V_12 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_149, 1));
		*((int8_t*)L_149) = (int8_t)((int32_t)255);
		uint8_t* L_150 = V_12;
		uint8_t* L_151 = L_150;
		V_12 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_151, 1));
		*((int8_t*)L_151) = (int8_t)((int32_t)255);
		int32_t L_152 = V_13;
		V_13 = ((int32_t)il2cpp_codegen_subtract(L_152, ((int32_t)510)));
	}

IL_02e1:
	{
		int32_t L_153 = V_13;
		if ((((int32_t)L_153) > ((int32_t)((int32_t)509))))
		{
			goto IL_02bd;
		}
	}
	{
		int32_t L_154 = V_13;
		if ((((int32_t)L_154) <= ((int32_t)((int32_t)254))))
		{
			goto IL_030a;
		}
	}
	{
		int32_t L_155 = V_13;
		V_13 = ((int32_t)il2cpp_codegen_subtract(L_155, ((int32_t)255)));
		uint8_t* L_156 = V_12;
		uint8_t* L_157 = L_156;
		V_12 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_157, 1));
		*((int8_t*)L_157) = (int8_t)((int32_t)255);
	}

IL_030a:
	{
		uint8_t* L_158 = V_12;
		uint8_t* L_159 = L_158;
		V_12 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_159, 1));
		int32_t L_160 = V_13;
		*((int8_t*)L_159) = (int8_t)((int32_t)(uint8_t)L_160);
		goto IL_0321;
	}

IL_0317:
	{
		uint8_t* L_161 = V_19;
		uint8_t* L_162 = L_161;
		int32_t L_163 = *((uint8_t*)L_162);
		int32_t L_164 = V_13;
		*((int8_t*)L_162) = (int8_t)((int32_t)(uint8_t)((int32_t)il2cpp_codegen_add(L_163, ((int32_t)(uint8_t)L_164))));
	}

IL_0321:
	{
		uint8_t* L_165 = V_5;
		uint8_t* L_166 = V_9;
		if ((!(((uintptr_t)L_165) > ((uintptr_t)L_166))))
		{
			goto IL_0330;
		}
	}
	{
		uint8_t* L_167 = V_5;
		V_7 = L_167;
		goto IL_03d6;
	}

IL_0330:
	{
		uint8_t** L_168 = V_4;
		uint8_t* L_169 = V_5;
		int32_t L_170 = *((uint32_t*)L_169);
		uint32_t L_171 = sizeof(uint8_t*);
		uint8_t* L_172 = V_5;
		int64_t L_173 = V_6;
		*((intptr_t*)((uint8_t**)il2cpp_codegen_add((intptr_t)L_168, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)((uint32_t)((int32_t)((uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_subtract(L_170, 2)), ((int32_t)-1640531535)))>>((int32_t)20))))), ((int64_t)((int32_t)L_171)))))))) = (intptr_t)((uint8_t*)il2cpp_codegen_subtract((intptr_t)((uint8_t*)il2cpp_codegen_subtract((intptr_t)L_172, 2)), ((intptr_t)L_173)));
		int64_t L_174 = V_6;
		uint8_t** L_175 = V_4;
		uint8_t* L_176 = V_5;
		int32_t L_177 = *((uint32_t*)L_176);
		uint32_t L_178 = sizeof(uint8_t*);
		V_18 = (uint8_t*)((intptr_t)il2cpp_codegen_add(((intptr_t)L_174), (*((intptr_t*)((uint8_t**)il2cpp_codegen_add((intptr_t)L_175, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)((uint32_t)((int32_t)((uint32_t)((int32_t)il2cpp_codegen_multiply(L_177, ((int32_t)-1640531535)))>>((int32_t)20))))), ((int64_t)((int32_t)L_178)))))))))));
		uint8_t** L_179 = V_4;
		uint8_t* L_180 = V_5;
		int32_t L_181 = *((uint32_t*)L_180);
		uint32_t L_182 = sizeof(uint8_t*);
		uint8_t* L_183 = V_5;
		int64_t L_184 = V_6;
		*((intptr_t*)((uint8_t**)il2cpp_codegen_add((intptr_t)L_179, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)((uint32_t)((int32_t)((uint32_t)((int32_t)il2cpp_codegen_multiply(L_181, ((int32_t)-1640531535)))>>((int32_t)20))))), ((int64_t)((int32_t)L_182)))))))) = (intptr_t)((uint8_t*)il2cpp_codegen_subtract((intptr_t)L_183, ((intptr_t)L_184)));
		uint8_t* L_185 = V_18;
		uint8_t* L_186 = V_5;
		if ((!(((uintptr_t)L_185) > ((uintptr_t)((uint8_t*)il2cpp_codegen_subtract((intptr_t)L_186, ((int32_t)65536)))))))
		{
			goto IL_03ba;
		}
	}
	{
		uint8_t* L_187 = V_18;
		int32_t L_188 = *((uint32_t*)L_187);
		uint8_t* L_189 = V_5;
		int32_t L_190 = *((uint32_t*)L_189);
		if ((!(((uint32_t)L_188) == ((uint32_t)L_190))))
		{
			goto IL_03ba;
		}
	}
	{
		uint8_t* L_191 = V_12;
		uint8_t* L_192 = L_191;
		V_12 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_192, 1));
		V_19 = L_192;
		uint8_t* L_193 = V_19;
		*((int8_t*)L_193) = (int8_t)0;
		goto IL_01d7;
	}

IL_03ba:
	{
		uint8_t* L_194 = V_5;
		uint8_t* L_195 = L_194;
		V_5 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_195, 1));
		V_7 = L_195;
		uint8_t* L_196 = V_5;
		int32_t L_197 = *((uint32_t*)L_196);
		V_15 = ((int32_t)((uint32_t)((int32_t)il2cpp_codegen_multiply(L_197, ((int32_t)-1640531535)))>>((int32_t)20)));
		goto IL_00b2;
	}

IL_03d6:
	{
		uint8_t* L_198 = V_8;
		uint8_t* L_199 = V_7;
		V_24 = ((int32_t)((int64_t)(intptr_t)((uint8_t*)((intptr_t)((uint8_t*)il2cpp_codegen_subtract((intptr_t)L_198, (intptr_t)L_199))/1))));
		uint8_t* L_200 = V_12;
		uint8_t* L_201 = ___dest1;
		int32_t L_202 = V_24;
		int32_t L_203 = V_24;
		int32_t L_204 = ___maxOutputSize3;
		if ((((int64_t)((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)(intptr_t)((uint8_t*)((intptr_t)((uint8_t*)il2cpp_codegen_subtract((intptr_t)L_200, (intptr_t)L_201))/1))), ((int64_t)L_202))), ((int64_t)1))), ((int64_t)((int32_t)(((int32_t)il2cpp_codegen_subtract(L_203, ((int32_t)15)))/((int32_t)255))))))) < ((int64_t)((int64_t)L_204))))
		{
			goto IL_0403;
		}
	}
	{
		return 0;
	}

IL_0403:
	{
		int32_t L_205 = V_24;
		if ((((int32_t)L_205) < ((int32_t)((int32_t)15))))
		{
			goto IL_044c;
		}
	}
	{
		uint8_t* L_206 = V_12;
		uint8_t* L_207 = L_206;
		V_12 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_207, 1));
		*((int8_t*)L_207) = (int8_t)((int32_t)240);
		int32_t L_208 = V_24;
		V_24 = ((int32_t)il2cpp_codegen_subtract(L_208, ((int32_t)15)));
		goto IL_0436;
	}

IL_041f:
	{
		uint8_t* L_209 = V_12;
		uint8_t* L_210 = L_209;
		V_12 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_210, 1));
		*((int8_t*)L_210) = (int8_t)((int32_t)255);
		int32_t L_211 = V_24;
		V_24 = ((int32_t)il2cpp_codegen_subtract(L_211, ((int32_t)255)));
	}

IL_0436:
	{
		int32_t L_212 = V_24;
		if ((((int32_t)L_212) > ((int32_t)((int32_t)254))))
		{
			goto IL_041f;
		}
	}
	{
		uint8_t* L_213 = V_12;
		uint8_t* L_214 = L_213;
		V_12 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_214, 1));
		int32_t L_215 = V_24;
		*((int8_t*)L_214) = (int8_t)((int32_t)(uint8_t)L_215);
		goto IL_0459;
	}

IL_044c:
	{
		uint8_t* L_216 = V_12;
		uint8_t* L_217 = L_216;
		V_12 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_217, 1));
		int32_t L_218 = V_24;
		*((int8_t*)L_217) = (int8_t)((int32_t)(uint8_t)((int32_t)(L_218<<4)));
	}

IL_0459:
	{
		uint8_t* L_219 = V_12;
		uint8_t* L_220 = V_7;
		uint8_t* L_221 = V_8;
		uint8_t* L_222 = V_7;
		LZ4Util_CopyMemory_mE7FF2466FFC0EFEDA278A55F7222EDB2BBE84EDA(L_219, L_220, ((int64_t)(intptr_t)((uint8_t*)((intptr_t)((uint8_t*)il2cpp_codegen_subtract((intptr_t)L_221, (intptr_t)L_222))/1))), NULL);
		uint8_t* L_223 = V_12;
		uint8_t* L_224 = V_8;
		uint8_t* L_225 = V_7;
		V_12 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_223, ((intptr_t)((int64_t)(intptr_t)((uint8_t*)((intptr_t)((uint8_t*)il2cpp_codegen_subtract((intptr_t)L_224, (intptr_t)L_225))/1))))));
		uint8_t* L_226 = V_12;
		uint8_t* L_227 = ___dest1;
		return ((int32_t)((int64_t)(intptr_t)((uint8_t*)((intptr_t)((uint8_t*)il2cpp_codegen_subtract((intptr_t)L_226, (intptr_t)L_227))/1))));
	}
}
// System.Int32 LZ4Sharp.LZ4Compressor64::Compress64K(System.Byte*,System.Byte*,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LZ4Compressor64_Compress64K_m3765A951DCC05D1F5A0DB04658305DCBF4AA966D (LZ4Compressor64_t6D8D18D2CF9521C99528322D9DC031806509039A* __this, uint8_t* ___source0, uint8_t* ___dest1, int32_t ___isize2, int32_t ___maxOutputSize3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LZ4Compressor64_Compress64K_m3765A951DCC05D1F5A0DB04658305DCBF4AA966D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LZ4Compressor64_t6D8D18D2CF9521C99528322D9DC031806509039A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint8_t* V_0 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_1 = NULL;
	uint8_t* V_2 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_3 = NULL;
	uint16_t* V_4 = NULL;
	uint8_t* V_5 = NULL;
	uint8_t* V_6 = NULL;
	uint8_t* V_7 = NULL;
	uint8_t* V_8 = NULL;
	uint8_t* V_9 = NULL;
	uint8_t* V_10 = NULL;
	uint8_t* V_11 = NULL;
	uint8_t* V_12 = NULL;
	int32_t V_13 = 0;
	int32_t V_14 = 0;
	uint32_t V_15 = 0;
	int32_t V_16 = 0;
	uint8_t* V_17 = NULL;
	uint8_t* V_18 = NULL;
	uint8_t* V_19 = NULL;
	uint32_t V_20 = 0;
	int32_t V_21 = 0;
	uint8_t* V_22 = NULL;
	int64_t V_23 = 0;
	int32_t V_24 = 0;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = __this->___m_HashTable_17;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = L_0;
		V_1 = L_1;
		if (!L_1)
		{
			goto IL_000f;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = V_1;
		NullCheck(L_2);
		if (((int32_t)(((RuntimeArray*)L_2)->max_length)))
		{
			goto IL_0014;
		}
	}

IL_000f:
	{
		V_0 = (uint8_t*)((uintptr_t)0);
		goto IL_001d;
	}

IL_0014:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = V_1;
		NullCheck(L_3);
		V_0 = (uint8_t*)((uintptr_t)((L_3)->GetAddressAt(static_cast<il2cpp_array_size_t>(0))));
	}

IL_001d:
	{
		il2cpp_codegen_runtime_class_init_inline(LZ4Compressor64_t6D8D18D2CF9521C99528322D9DC031806509039A_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = ((LZ4Compressor64_t6D8D18D2CF9521C99528322D9DC031806509039A_StaticFields*)il2cpp_codegen_static_fields_for(LZ4Compressor64_t6D8D18D2CF9521C99528322D9DC031806509039A_il2cpp_TypeInfo_var))->___DeBruijnBytePos_16;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = L_4;
		V_3 = L_5;
		if (!L_5)
		{
			goto IL_002b;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = V_3;
		NullCheck(L_6);
		if (((int32_t)(((RuntimeArray*)L_6)->max_length)))
		{
			goto IL_0030;
		}
	}

IL_002b:
	{
		V_2 = (uint8_t*)((uintptr_t)0);
		goto IL_0039;
	}

IL_0030:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = V_3;
		NullCheck(L_7);
		V_2 = (uint8_t*)((uintptr_t)((L_7)->GetAddressAt(static_cast<il2cpp_array_size_t>(0))));
	}

IL_0039:
	{
		uint8_t* L_8 = V_0;
		il2cpp_codegen_runtime_class_init_inline(LZ4Compressor64_t6D8D18D2CF9521C99528322D9DC031806509039A_il2cpp_TypeInfo_var);
		LZ4Compressor64_Clear_mF3F1C066DB7C685F684FB4A1E634BF98297AE13E(L_8, ((int32_t)16384), NULL);
		uint8_t* L_9 = V_0;
		V_4 = (uint16_t*)L_9;
		uint8_t* L_10 = ___source0;
		V_5 = L_10;
		uint8_t* L_11 = V_5;
		V_6 = L_11;
		uint8_t* L_12 = V_5;
		V_7 = L_12;
		uint8_t* L_13 = V_5;
		int32_t L_14 = ___isize2;
		V_8 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_13, L_14));
		uint8_t* L_15 = V_8;
		V_9 = ((uint8_t*)il2cpp_codegen_subtract((intptr_t)L_15, ((int32_t)12)));
		uint8_t* L_16 = V_8;
		V_10 = ((uint8_t*)il2cpp_codegen_subtract((intptr_t)L_16, 5));
		uint8_t* L_17 = ___dest1;
		V_11 = L_17;
		uint8_t* L_18 = ___dest1;
		int32_t L_19 = ___maxOutputSize3;
		V_12 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_18, L_19));
		int32_t L_20 = ___isize2;
		if ((((int32_t)L_20) < ((int32_t)((int32_t)13))))
		{
			goto IL_038a;
		}
	}
	{
		uint8_t* L_21 = V_5;
		V_5 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_21, 1));
		uint8_t* L_22 = V_5;
		int32_t L_23 = *((uint32_t*)L_22);
		V_15 = ((int32_t)((uint32_t)((int32_t)il2cpp_codegen_multiply(L_23, ((int32_t)-1640531535)))>>((int32_t)19)));
	}

IL_008a:
	{
		V_16 = ((int32_t)67);
		uint8_t* L_24 = V_5;
		V_17 = L_24;
	}

IL_0092:
	{
		uint32_t L_25 = V_15;
		V_20 = L_25;
		int32_t L_26 = V_16;
		int32_t L_27 = L_26;
		V_16 = ((int32_t)il2cpp_codegen_add(L_27, 1));
		V_21 = ((int32_t)(L_27>>6));
		uint8_t* L_28 = V_17;
		V_5 = L_28;
		uint8_t* L_29 = V_5;
		int32_t L_30 = V_21;
		V_17 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_29, L_30));
		uint8_t* L_31 = V_17;
		uint8_t* L_32 = V_9;
		if ((!(((uintptr_t)L_31) <= ((uintptr_t)L_32))))
		{
			goto IL_038a;
		}
	}
	{
		uint8_t* L_33 = V_17;
		int32_t L_34 = *((uint32_t*)L_33);
		V_15 = ((int32_t)((uint32_t)((int32_t)il2cpp_codegen_multiply(L_34, ((int32_t)-1640531535)))>>((int32_t)19)));
		uint8_t* L_35 = V_7;
		uint16_t* L_36 = V_4;
		uint32_t L_37 = V_20;
		int32_t L_38 = *((uint16_t*)((uint16_t*)il2cpp_codegen_add((intptr_t)L_36, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_37), ((int64_t)2)))))));
		V_18 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_35, L_38));
		uint16_t* L_39 = V_4;
		uint32_t L_40 = V_20;
		uint8_t* L_41 = V_5;
		uint8_t* L_42 = V_7;
		*((int16_t*)((uint16_t*)il2cpp_codegen_add((intptr_t)L_39, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_40), ((int64_t)2))))))) = (int16_t)((int32_t)(uint16_t)((int64_t)(intptr_t)((uint8_t*)((intptr_t)((uint8_t*)il2cpp_codegen_subtract((intptr_t)L_41, (intptr_t)L_42))/1))));
		uint8_t* L_43 = V_18;
		int32_t L_44 = *((uint32_t*)L_43);
		uint8_t* L_45 = V_5;
		int32_t L_46 = *((uint32_t*)L_45);
		if ((!(((uint32_t)L_44) == ((uint32_t)L_46))))
		{
			goto IL_0092;
		}
	}
	{
		goto IL_00fd;
	}

IL_00f1:
	{
		uint8_t* L_47 = V_5;
		V_5 = ((uint8_t*)il2cpp_codegen_subtract((intptr_t)L_47, 1));
		uint8_t* L_48 = V_18;
		V_18 = ((uint8_t*)il2cpp_codegen_subtract((intptr_t)L_48, 1));
	}

IL_00fd:
	{
		uint8_t* L_49 = V_5;
		uint8_t* L_50 = V_6;
		if ((!(((uintptr_t)L_49) > ((uintptr_t)L_50))))
		{
			goto IL_0114;
		}
	}
	{
		uint8_t* L_51 = V_18;
		uint8_t* L_52 = ___source0;
		if ((!(((uintptr_t)L_51) > ((uintptr_t)L_52))))
		{
			goto IL_0114;
		}
	}
	{
		uint8_t* L_53 = V_5;
		int32_t L_54 = *((uint8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_53, (-1))));
		uint8_t* L_55 = V_18;
		int32_t L_56 = *((uint8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_55, (-1))));
		if ((((int32_t)L_54) == ((int32_t)L_56)))
		{
			goto IL_00f1;
		}
	}

IL_0114:
	{
		uint8_t* L_57 = V_5;
		uint8_t* L_58 = V_6;
		V_14 = ((int32_t)((int64_t)(intptr_t)((uint8_t*)((intptr_t)((uint8_t*)il2cpp_codegen_subtract((intptr_t)L_57, (intptr_t)L_58))/1))));
		uint8_t* L_59 = V_11;
		uint8_t* L_60 = L_59;
		V_11 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_60, 1));
		V_19 = L_60;
		uint8_t* L_61 = V_11;
		int32_t L_62 = V_14;
		int32_t L_63 = V_14;
		uint8_t* L_64 = V_12;
		if ((!(((uintptr_t)((uint8_t*)il2cpp_codegen_add((intptr_t)((uint8_t*)il2cpp_codegen_add((intptr_t)((uint8_t*)il2cpp_codegen_add((intptr_t)L_61, L_62)), 8)), ((int32_t)(L_63>>8))))) >= ((uintptr_t)L_64))))
		{
			goto IL_013a;
		}
	}
	{
		return 0;
	}

IL_013a:
	{
		int32_t L_65 = V_14;
		if ((((int32_t)L_65) < ((int32_t)((int32_t)15))))
		{
			goto IL_0181;
		}
	}
	{
		uint8_t* L_66 = V_19;
		*((int8_t*)L_66) = (int8_t)((int32_t)240);
		int32_t L_67 = V_14;
		V_13 = ((int32_t)((int64_t)il2cpp_codegen_subtract(((int64_t)L_67), ((int64_t)((int32_t)15)))));
		goto IL_016b;
	}

IL_0154:
	{
		uint8_t* L_68 = V_11;
		uint8_t* L_69 = L_68;
		V_11 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_69, 1));
		*((int8_t*)L_69) = (int8_t)((int32_t)255);
		int32_t L_70 = V_13;
		V_13 = ((int32_t)il2cpp_codegen_subtract(L_70, ((int32_t)255)));
	}

IL_016b:
	{
		int32_t L_71 = V_13;
		if ((((int32_t)L_71) > ((int32_t)((int32_t)254))))
		{
			goto IL_0154;
		}
	}
	{
		uint8_t* L_72 = V_11;
		uint8_t* L_73 = L_72;
		V_11 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_73, 1));
		int32_t L_74 = V_13;
		*((int8_t*)L_73) = (int8_t)((int32_t)(uint8_t)L_74);
		goto IL_0189;
	}

IL_0181:
	{
		uint8_t* L_75 = V_19;
		int32_t L_76 = V_14;
		*((int8_t*)L_75) = (int8_t)((int32_t)(uint8_t)((int32_t)(L_76<<4)));
	}

IL_0189:
	{
		uint8_t* L_77 = V_11;
		int32_t L_78 = V_14;
		V_22 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_77, L_78));
	}

IL_0190:
	{
		uint8_t* L_79 = V_11;
		uint8_t* L_80 = V_6;
		int64_t L_81 = *((int64_t*)L_80);
		*((int64_t*)L_79) = (int64_t)L_81;
		uint8_t* L_82 = V_11;
		V_11 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_82, 8));
		uint8_t* L_83 = V_6;
		V_6 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_83, 8));
		uint8_t* L_84 = V_11;
		uint8_t* L_85 = V_22;
		if ((!(((uintptr_t)L_84) >= ((uintptr_t)L_85))))
		{
			goto IL_0190;
		}
	}
	{
		uint8_t* L_86 = V_22;
		V_11 = L_86;
	}

IL_01ac:
	{
		uint8_t* L_87 = V_11;
		uint8_t* L_88 = V_5;
		uint8_t* L_89 = V_18;
		*((int16_t*)L_87) = (int16_t)((int32_t)(uint16_t)((int64_t)(intptr_t)((uint8_t*)((intptr_t)((uint8_t*)il2cpp_codegen_subtract((intptr_t)L_88, (intptr_t)L_89))/1))));
		uint8_t* L_90 = V_11;
		V_11 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_90, 2));
		uint8_t* L_91 = V_5;
		V_5 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_91, 4));
		uint8_t* L_92 = V_18;
		V_18 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_92, 4));
		uint8_t* L_93 = V_5;
		V_6 = L_93;
		goto IL_020c;
	}

IL_01d0:
	{
		uint8_t* L_94 = V_18;
		int64_t L_95 = *((int64_t*)L_94);
		uint8_t* L_96 = V_5;
		int64_t L_97 = *((int64_t*)L_96);
		V_23 = ((int64_t)(L_95^L_97));
		int64_t L_98 = V_23;
		if (L_98)
		{
			goto IL_01eb;
		}
	}
	{
		uint8_t* L_99 = V_5;
		V_5 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_99, 8));
		uint8_t* L_100 = V_18;
		V_18 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_100, 8));
		goto IL_020c;
	}

IL_01eb:
	{
		uint8_t* L_101 = V_5;
		il2cpp_codegen_runtime_class_init_inline(LZ4Compressor64_t6D8D18D2CF9521C99528322D9DC031806509039A_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_102 = ((LZ4Compressor64_t6D8D18D2CF9521C99528322D9DC031806509039A_StaticFields*)il2cpp_codegen_static_fields_for(LZ4Compressor64_t6D8D18D2CF9521C99528322D9DC031806509039A_il2cpp_TypeInfo_var))->___DeBruijnBytePos_16;
		int64_t L_103 = V_23;
		int64_t L_104 = V_23;
		if ((uint64_t)(((int64_t)((uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)(L_103&((-L_104)))), ((int64_t)151050438428048703LL)))>>((int32_t)58)))) > INTPTR_MAX) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), LZ4Compressor64_Compress64K_m3765A951DCC05D1F5A0DB04658305DCBF4AA966D_RuntimeMethod_var);
		NullCheck(L_102);
		intptr_t L_105 = ((intptr_t)((int64_t)((uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)(L_103&((-L_104)))), ((int64_t)151050438428048703LL)))>>((int32_t)58))));
		uint8_t L_106 = (L_102)->GetAt(static_cast<il2cpp_array_size_t>(L_105));
		V_5 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_101, (int32_t)L_106));
		goto IL_0260;
	}

IL_020c:
	{
		uint8_t* L_107 = V_5;
		uint8_t* L_108 = V_10;
		if ((!(((uintptr_t)L_107) >= ((uintptr_t)((uint8_t*)il2cpp_codegen_subtract((intptr_t)L_108, 7))))))
		{
			goto IL_01d0;
		}
	}
	{
		uint8_t* L_109 = V_5;
		uint8_t* L_110 = V_10;
		if ((!(((uintptr_t)L_109) < ((uintptr_t)((uint8_t*)il2cpp_codegen_subtract((intptr_t)L_110, 3))))))
		{
			goto IL_0230;
		}
	}
	{
		uint8_t* L_111 = V_18;
		int32_t L_112 = *((uint32_t*)L_111);
		uint8_t* L_113 = V_5;
		int32_t L_114 = *((uint32_t*)L_113);
		if ((!(((uint32_t)L_112) == ((uint32_t)L_114))))
		{
			goto IL_0230;
		}
	}
	{
		uint8_t* L_115 = V_5;
		V_5 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_115, 4));
		uint8_t* L_116 = V_18;
		V_18 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_116, 4));
	}

IL_0230:
	{
		uint8_t* L_117 = V_5;
		uint8_t* L_118 = V_10;
		if ((!(((uintptr_t)L_117) < ((uintptr_t)((uint8_t*)il2cpp_codegen_subtract((intptr_t)L_118, 1))))))
		{
			goto IL_024c;
		}
	}
	{
		uint8_t* L_119 = V_18;
		int32_t L_120 = *((uint16_t*)L_119);
		uint8_t* L_121 = V_5;
		int32_t L_122 = *((uint16_t*)L_121);
		if ((!(((uint32_t)L_120) == ((uint32_t)L_122))))
		{
			goto IL_024c;
		}
	}
	{
		uint8_t* L_123 = V_5;
		V_5 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_123, 2));
		uint8_t* L_124 = V_18;
		V_18 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_124, 2));
	}

IL_024c:
	{
		uint8_t* L_125 = V_5;
		uint8_t* L_126 = V_10;
		if ((!(((uintptr_t)L_125) < ((uintptr_t)L_126))))
		{
			goto IL_0260;
		}
	}
	{
		uint8_t* L_127 = V_18;
		int32_t L_128 = *((uint8_t*)L_127);
		uint8_t* L_129 = V_5;
		int32_t L_130 = *((uint8_t*)L_129);
		if ((!(((uint32_t)L_128) == ((uint32_t)L_130))))
		{
			goto IL_0260;
		}
	}
	{
		uint8_t* L_131 = V_5;
		V_5 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_131, 1));
	}

IL_0260:
	{
		uint8_t* L_132 = V_5;
		uint8_t* L_133 = V_6;
		V_13 = ((int32_t)((int64_t)(intptr_t)((uint8_t*)((intptr_t)((uint8_t*)il2cpp_codegen_subtract((intptr_t)L_132, (intptr_t)L_133))/1))));
		int32_t L_134 = V_13;
		if ((((int32_t)L_134) < ((int32_t)((int32_t)15))))
		{
			goto IL_02e1;
		}
	}
	{
		uint8_t* L_135 = V_19;
		uint8_t* L_136 = V_19;
		int32_t L_137 = *((uint8_t*)L_136);
		*((int8_t*)L_135) = (int8_t)((int32_t)(uint8_t)((int32_t)il2cpp_codegen_add(L_137, ((int32_t)15))));
		int32_t L_138 = V_13;
		V_13 = ((int32_t)((int64_t)il2cpp_codegen_subtract(((int64_t)L_138), ((int64_t)((int32_t)15)))));
		goto IL_02ab;
	}

IL_0287:
	{
		uint8_t* L_139 = V_11;
		uint8_t* L_140 = L_139;
		V_11 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_140, 1));
		*((int8_t*)L_140) = (int8_t)((int32_t)255);
		uint8_t* L_141 = V_11;
		uint8_t* L_142 = L_141;
		V_11 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_142, 1));
		*((int8_t*)L_142) = (int8_t)((int32_t)255);
		int32_t L_143 = V_13;
		V_13 = ((int32_t)il2cpp_codegen_subtract(L_143, ((int32_t)510)));
	}

IL_02ab:
	{
		int32_t L_144 = V_13;
		if ((((int32_t)L_144) > ((int32_t)((int32_t)509))))
		{
			goto IL_0287;
		}
	}
	{
		int32_t L_145 = V_13;
		if ((((int32_t)L_145) <= ((int32_t)((int32_t)254))))
		{
			goto IL_02d4;
		}
	}
	{
		int32_t L_146 = V_13;
		V_13 = ((int32_t)il2cpp_codegen_subtract(L_146, ((int32_t)255)));
		uint8_t* L_147 = V_11;
		uint8_t* L_148 = L_147;
		V_11 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_148, 1));
		*((int8_t*)L_148) = (int8_t)((int32_t)255);
	}

IL_02d4:
	{
		uint8_t* L_149 = V_11;
		uint8_t* L_150 = L_149;
		V_11 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_150, 1));
		int32_t L_151 = V_13;
		*((int8_t*)L_150) = (int8_t)((int32_t)(uint8_t)L_151);
		goto IL_02eb;
	}

IL_02e1:
	{
		uint8_t* L_152 = V_19;
		uint8_t* L_153 = V_19;
		int32_t L_154 = *((uint8_t*)L_153);
		int32_t L_155 = V_13;
		*((int8_t*)L_152) = (int8_t)((int32_t)(uint8_t)((int32_t)il2cpp_codegen_add(L_154, L_155)));
	}

IL_02eb:
	{
		uint8_t* L_156 = V_5;
		uint8_t* L_157 = V_9;
		if ((!(((uintptr_t)L_156) > ((uintptr_t)L_157))))
		{
			goto IL_02fa;
		}
	}
	{
		uint8_t* L_158 = V_5;
		V_6 = L_158;
		goto IL_038a;
	}

IL_02fa:
	{
		uint16_t* L_159 = V_4;
		uint8_t* L_160 = V_5;
		int32_t L_161 = *((uint32_t*)L_160);
		uint8_t* L_162 = V_5;
		uint8_t* L_163 = V_7;
		*((int16_t*)((uint16_t*)il2cpp_codegen_add((intptr_t)L_159, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)((uint32_t)((int32_t)((uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_subtract(L_161, 2)), ((int32_t)-1640531535)))>>((int32_t)19))))), ((int64_t)2))))))) = (int16_t)((int32_t)(uint16_t)((int64_t)(intptr_t)((uint8_t*)((intptr_t)((uint8_t*)il2cpp_codegen_subtract((intptr_t)((uint8_t*)il2cpp_codegen_subtract((intptr_t)L_162, 2)), (intptr_t)L_163))/1))));
		uint8_t* L_164 = V_7;
		uint16_t* L_165 = V_4;
		uint8_t* L_166 = V_5;
		int32_t L_167 = *((uint32_t*)L_166);
		int32_t L_168 = *((uint16_t*)((uint16_t*)il2cpp_codegen_add((intptr_t)L_165, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)((uint32_t)((int32_t)((uint32_t)((int32_t)il2cpp_codegen_multiply(L_167, ((int32_t)-1640531535)))>>((int32_t)19))))), ((int64_t)2)))))));
		V_18 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_164, L_168));
		uint16_t* L_169 = V_4;
		uint8_t* L_170 = V_5;
		int32_t L_171 = *((uint32_t*)L_170);
		uint8_t* L_172 = V_5;
		uint8_t* L_173 = V_7;
		*((int16_t*)((uint16_t*)il2cpp_codegen_add((intptr_t)L_169, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)((uint32_t)((int32_t)((uint32_t)((int32_t)il2cpp_codegen_multiply(L_171, ((int32_t)-1640531535)))>>((int32_t)19))))), ((int64_t)2))))))) = (int16_t)((int32_t)(uint16_t)((int64_t)(intptr_t)((uint8_t*)((intptr_t)((uint8_t*)il2cpp_codegen_subtract((intptr_t)L_172, (intptr_t)L_173))/1))));
		uint8_t* L_174 = V_18;
		int32_t L_175 = *((uint32_t*)L_174);
		uint8_t* L_176 = V_5;
		int32_t L_177 = *((uint32_t*)L_176);
		if ((!(((uint32_t)L_175) == ((uint32_t)L_177))))
		{
			goto IL_036e;
		}
	}
	{
		uint8_t* L_178 = V_11;
		uint8_t* L_179 = L_178;
		V_11 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_179, 1));
		V_19 = L_179;
		uint8_t* L_180 = V_19;
		*((int8_t*)L_180) = (int8_t)0;
		goto IL_01ac;
	}

IL_036e:
	{
		uint8_t* L_181 = V_5;
		uint8_t* L_182 = L_181;
		V_5 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_182, 1));
		V_6 = L_182;
		uint8_t* L_183 = V_5;
		int32_t L_184 = *((uint32_t*)L_183);
		V_15 = ((int32_t)((uint32_t)((int32_t)il2cpp_codegen_multiply(L_184, ((int32_t)-1640531535)))>>((int32_t)19)));
		goto IL_008a;
	}

IL_038a:
	{
		uint8_t* L_185 = V_8;
		uint8_t* L_186 = V_6;
		V_24 = ((int32_t)((int64_t)(intptr_t)((uint8_t*)((intptr_t)((uint8_t*)il2cpp_codegen_subtract((intptr_t)L_185, (intptr_t)L_186))/1))));
		uint8_t* L_187 = V_11;
		uint8_t* L_188 = ___dest1;
		int32_t L_189 = V_24;
		int32_t L_190 = V_24;
		int32_t L_191 = ___maxOutputSize3;
		if ((((int64_t)((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)(intptr_t)((uint8_t*)((intptr_t)((uint8_t*)il2cpp_codegen_subtract((intptr_t)L_187, (intptr_t)L_188))/1))), ((int64_t)L_189))), ((int64_t)1))), ((int64_t)((int32_t)(L_190>>8)))))) < ((int64_t)((int64_t)L_191))))
		{
			goto IL_03b0;
		}
	}
	{
		return 0;
	}

IL_03b0:
	{
		int32_t L_192 = V_24;
		if ((((int32_t)L_192) < ((int32_t)((int32_t)15))))
		{
			goto IL_03f9;
		}
	}
	{
		uint8_t* L_193 = V_11;
		uint8_t* L_194 = L_193;
		V_11 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_194, 1));
		*((int8_t*)L_194) = (int8_t)((int32_t)240);
		int32_t L_195 = V_24;
		V_24 = ((int32_t)il2cpp_codegen_subtract(L_195, ((int32_t)15)));
		goto IL_03e3;
	}

IL_03cc:
	{
		uint8_t* L_196 = V_11;
		uint8_t* L_197 = L_196;
		V_11 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_197, 1));
		*((int8_t*)L_197) = (int8_t)((int32_t)255);
		int32_t L_198 = V_24;
		V_24 = ((int32_t)il2cpp_codegen_subtract(L_198, ((int32_t)255)));
	}

IL_03e3:
	{
		int32_t L_199 = V_24;
		if ((((int32_t)L_199) > ((int32_t)((int32_t)254))))
		{
			goto IL_03cc;
		}
	}
	{
		uint8_t* L_200 = V_11;
		uint8_t* L_201 = L_200;
		V_11 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_201, 1));
		int32_t L_202 = V_24;
		*((int8_t*)L_201) = (int8_t)((int32_t)(uint8_t)L_202);
		goto IL_0406;
	}

IL_03f9:
	{
		uint8_t* L_203 = V_11;
		uint8_t* L_204 = L_203;
		V_11 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_204, 1));
		int32_t L_205 = V_24;
		*((int8_t*)L_204) = (int8_t)((int32_t)(uint8_t)((int32_t)(L_205<<4)));
	}

IL_0406:
	{
		uint8_t* L_206 = V_11;
		uint8_t* L_207 = V_6;
		uint8_t* L_208 = V_8;
		uint8_t* L_209 = V_6;
		LZ4Util_CopyMemory_mE7FF2466FFC0EFEDA278A55F7222EDB2BBE84EDA(L_206, L_207, ((int64_t)(intptr_t)((uint8_t*)((intptr_t)((uint8_t*)il2cpp_codegen_subtract((intptr_t)L_208, (intptr_t)L_209))/1))), NULL);
		uint8_t* L_210 = V_11;
		uint8_t* L_211 = V_8;
		uint8_t* L_212 = V_6;
		V_11 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_210, ((intptr_t)((int64_t)(intptr_t)((uint8_t*)((intptr_t)((uint8_t*)il2cpp_codegen_subtract((intptr_t)L_211, (intptr_t)L_212))/1))))));
		uint8_t* L_213 = V_11;
		uint8_t* L_214 = ___dest1;
		return ((int32_t)((int64_t)(intptr_t)((uint8_t*)((intptr_t)((uint8_t*)il2cpp_codegen_subtract((intptr_t)L_213, (intptr_t)L_214))/1))));
	}
}
// System.Void LZ4Sharp.LZ4Compressor64::Clear(System.Byte*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LZ4Compressor64_Clear_mF3F1C066DB7C685F684FB4A1E634BF98297AE13E (uint8_t* ___ptr0, int32_t ___count1, const RuntimeMethod* method) 
{
	int64_t* V_0 = NULL;
	int32_t V_1 = 0;
	{
		uint8_t* L_0 = ___ptr0;
		V_0 = (int64_t*)L_0;
		int32_t L_1 = ___count1;
		V_1 = ((int32_t)(L_1>>4));
		goto IL_0018;
	}

IL_0008:
	{
		int64_t* L_2 = V_0;
		int64_t* L_3 = L_2;
		V_0 = ((int64_t*)il2cpp_codegen_add((intptr_t)L_3, 8));
		*((int64_t*)L_3) = (int64_t)((int64_t)0);
		int64_t* L_4 = V_0;
		int64_t* L_5 = L_4;
		V_0 = ((int64_t*)il2cpp_codegen_add((intptr_t)L_5, 8));
		*((int64_t*)L_5) = (int64_t)((int64_t)0);
	}

IL_0018:
	{
		int32_t L_6 = V_1;
		int32_t L_7 = L_6;
		V_1 = ((int32_t)il2cpp_codegen_subtract(L_7, 1));
		if (L_7)
		{
			goto IL_0008;
		}
	}
	{
		return;
	}
}
// System.Void LZ4Sharp.LZ4Compressor64::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LZ4Compressor64__cctor_m6EBF3185473FA8CDA677AB072A00E3D5FA27C841 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LZ4Compressor64_t6D8D18D2CF9521C99528322D9DC031806509039A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_t17805B5F7C0D0D788494C2B7E9223B9DDD566C70____10B36DCA5461BA88E704514784312418275EDD4E_0_FieldInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)64));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = L_0;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_2 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t17805B5F7C0D0D788494C2B7E9223B9DDD566C70____10B36DCA5461BA88E704514784312418275EDD4E_0_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_mE10C3436BA703E4D9D41B3F8F365E4C34F9926EF((RuntimeArray*)L_1, L_2, NULL);
		((LZ4Compressor64_t6D8D18D2CF9521C99528322D9DC031806509039A_StaticFields*)il2cpp_codegen_static_fields_for(LZ4Compressor64_t6D8D18D2CF9521C99528322D9DC031806509039A_il2cpp_TypeInfo_var))->___DeBruijnBytePos_16 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((LZ4Compressor64_t6D8D18D2CF9521C99528322D9DC031806509039A_StaticFields*)il2cpp_codegen_static_fields_for(LZ4Compressor64_t6D8D18D2CF9521C99528322D9DC031806509039A_il2cpp_TypeInfo_var))->___DeBruijnBytePos_16), (void*)L_1);
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
// LZ4Sharp.ILZ4Compressor LZ4Sharp.LZ4CompressorFactory::CreateNew()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* LZ4CompressorFactory_CreateNew_m50C20FAC0C1618747CFABECCB78A3A3EFA594405 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LZ4Compressor32_tB2B2F6E6ED6CD3D21CC3173896599134BB75C1B4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LZ4Compressor64_t6D8D18D2CF9521C99528322D9DC031806509039A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0;
		L_0 = IntPtr_get_Size_mF11301B9A665D54B8DC89DC6AFE37728B91E6F10(NULL);
		if ((!(((uint32_t)L_0) == ((uint32_t)4))))
		{
			goto IL_000e;
		}
	}
	{
		LZ4Compressor32_tB2B2F6E6ED6CD3D21CC3173896599134BB75C1B4* L_1 = (LZ4Compressor32_tB2B2F6E6ED6CD3D21CC3173896599134BB75C1B4*)il2cpp_codegen_object_new(LZ4Compressor32_tB2B2F6E6ED6CD3D21CC3173896599134BB75C1B4_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		LZ4Compressor32__ctor_m0B65DE8A99B93B10FB6664C7D6F9903380BAC104(L_1, NULL);
		return L_1;
	}

IL_000e:
	{
		LZ4Compressor64_t6D8D18D2CF9521C99528322D9DC031806509039A* L_2 = (LZ4Compressor64_t6D8D18D2CF9521C99528322D9DC031806509039A*)il2cpp_codegen_object_new(LZ4Compressor64_t6D8D18D2CF9521C99528322D9DC031806509039A_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		LZ4Compressor64__ctor_m600D9E6454F2E0C1C93A5CA2010622A4E8945215(L_2, NULL);
		return L_2;
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
// System.Void LZ4Sharp.LZ4Decompressor32::DecompressKnownSize(System.Byte[],System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LZ4Decompressor32_DecompressKnownSize_m2FDCA923DB1FCD63181E174C1CBBE67526547ECC (LZ4Decompressor32_t687B8355F891786DF2E3030D1F8371C6655A603D* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___compressed0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___decompressed1, const RuntimeMethod* method) 
{
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___compressed0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___decompressed1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___decompressed1;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = LZ4Decompressor32_DecompressKnownSize_mD7FE6A4D351173403517091375743D56DFB8F405(__this, L_0, L_1, ((int32_t)(((RuntimeArray*)L_2)->max_length)), NULL);
		return;
	}
}
// System.Int32 LZ4Sharp.LZ4Decompressor32::DecompressKnownSize(System.Byte[],System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LZ4Decompressor32_DecompressKnownSize_mD7FE6A4D351173403517091375743D56DFB8F405 (LZ4Decompressor32_t687B8355F891786DF2E3030D1F8371C6655A603D* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___compressed0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___decompressedBuffer1, int32_t ___decompressedSize2, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_1 = NULL;
	uint8_t* V_2 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_3 = NULL;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___compressed0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = L_0;
		V_1 = L_1;
		if (!L_1)
		{
			goto IL_000a;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = V_1;
		NullCheck(L_2);
		if (((int32_t)(((RuntimeArray*)L_2)->max_length)))
		{
			goto IL_000f;
		}
	}

IL_000a:
	{
		V_0 = (uint8_t*)((uintptr_t)0);
		goto IL_0018;
	}

IL_000f:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = V_1;
		NullCheck(L_3);
		V_0 = (uint8_t*)((uintptr_t)((L_3)->GetAddressAt(static_cast<il2cpp_array_size_t>(0))));
	}

IL_0018:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = ___decompressedBuffer1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = L_4;
		V_3 = L_5;
		if (!L_5)
		{
			goto IL_0022;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = V_3;
		NullCheck(L_6);
		if (((int32_t)(((RuntimeArray*)L_6)->max_length)))
		{
			goto IL_0027;
		}
	}

IL_0022:
	{
		V_2 = (uint8_t*)((uintptr_t)0);
		goto IL_0030;
	}

IL_0027:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = V_3;
		NullCheck(L_7);
		V_2 = (uint8_t*)((uintptr_t)((L_7)->GetAddressAt(static_cast<il2cpp_array_size_t>(0))));
	}

IL_0030:
	{
		uint8_t* L_8 = V_0;
		uint8_t* L_9 = V_2;
		int32_t L_10 = ___decompressedSize2;
		int32_t L_11;
		L_11 = LZ4Decompressor32_DecompressKnownSize_m73307C359BF1C295D0B9B113F494D8D50BD8D777(__this, L_8, L_9, L_10, NULL);
		return L_11;
	}
}
// System.Int32 LZ4Sharp.LZ4Decompressor32::DecompressKnownSize(System.Byte*,System.Byte*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LZ4Decompressor32_DecompressKnownSize_m73307C359BF1C295D0B9B113F494D8D50BD8D777 (LZ4Decompressor32_t687B8355F891786DF2E3030D1F8371C6655A603D* __this, uint8_t* ___compressed0, uint8_t* ___decompressedBuffer1, int32_t ___decompressedSize2, const RuntimeMethod* method) 
{
	int8_t* V_0 = NULL;
	SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	uint8_t* V_4 = NULL;
	uint8_t* V_5 = NULL;
	uint8_t* V_6 = NULL;
	uint8_t V_7 = 0x0;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	{
		SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* L_0 = __this->___m_DecArray_2;
		SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* L_1 = L_0;
		V_1 = L_1;
		if (!L_1)
		{
			goto IL_000f;
		}
	}
	{
		SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* L_2 = V_1;
		NullCheck(L_2);
		if (((int32_t)(((RuntimeArray*)L_2)->max_length)))
		{
			goto IL_0014;
		}
	}

IL_000f:
	{
		V_0 = (int8_t*)((uintptr_t)0);
		goto IL_001d;
	}

IL_0014:
	{
		SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* L_3 = V_1;
		NullCheck(L_3);
		V_0 = (int8_t*)((uintptr_t)((L_3)->GetAddressAt(static_cast<il2cpp_array_size_t>(0))));
	}

IL_001d:
	{
		uint8_t* L_4 = ___compressed0;
		V_2 = L_4;
		uint8_t* L_5 = ___decompressedBuffer1;
		V_4 = L_5;
		uint8_t* L_6 = V_4;
		int32_t L_7 = ___decompressedSize2;
		V_5 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_6, L_7));
	}

IL_0028:
	{
		uint8_t* L_8 = V_2;
		uint8_t* L_9 = L_8;
		V_2 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_9, 1));
		int32_t L_10 = *((uint8_t*)L_9);
		V_7 = (uint8_t)L_10;
		uint8_t L_11 = V_7;
		int32_t L_12 = ((int32_t)((int32_t)L_11>>4));
		V_9 = L_12;
		if ((!(((uint64_t)((int64_t)L_12)) == ((uint64_t)((int64_t)((int32_t)15))))))
		{
			goto IL_0060;
		}
	}
	{
		goto IL_0049;
	}

IL_003f:
	{
		int32_t L_13 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_add(L_13, ((int32_t)255)));
	}

IL_0049:
	{
		uint8_t* L_14 = V_2;
		uint8_t* L_15 = L_14;
		V_2 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_15, 1));
		int32_t L_16 = *((uint8_t*)L_15);
		int32_t L_17 = L_16;
		V_8 = L_17;
		if ((((int32_t)L_17) == ((int32_t)((int32_t)255))))
		{
			goto IL_003f;
		}
	}
	{
		int32_t L_18 = V_9;
		int32_t L_19 = V_8;
		V_9 = ((int32_t)il2cpp_codegen_add(L_18, L_19));
	}

IL_0060:
	{
		uint8_t* L_20 = V_4;
		int32_t L_21 = V_9;
		V_6 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_20, L_21));
		uint8_t* L_22 = V_6;
		uint8_t* L_23 = V_5;
		if ((!(((uintptr_t)L_22) > ((uintptr_t)((uint8_t*)il2cpp_codegen_subtract((intptr_t)L_23, 8))))))
		{
			goto IL_008d;
		}
	}
	{
		uint8_t* L_24 = V_6;
		uint8_t* L_25 = V_5;
		if ((!(((uintptr_t)L_24) <= ((uintptr_t)L_25))))
		{
			goto IL_0209;
		}
	}
	{
		uint8_t* L_26 = V_4;
		uint8_t* L_27 = V_2;
		int32_t L_28 = V_9;
		LZ4Util_CopyMemory_mE7FF2466FFC0EFEDA278A55F7222EDB2BBE84EDA(L_26, L_27, ((int64_t)L_28), NULL);
		uint8_t* L_29 = V_2;
		int32_t L_30 = V_9;
		V_2 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_29, L_30));
		goto IL_0201;
	}

IL_008d:
	{
		uint8_t* L_31 = V_4;
		uint8_t* L_32 = V_2;
		int32_t L_33 = *((uint32_t*)L_32);
		*((int32_t*)L_31) = (int32_t)L_33;
		uint8_t* L_34 = V_4;
		V_4 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_34, 4));
		uint8_t* L_35 = V_2;
		V_2 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_35, 4));
		uint8_t* L_36 = V_4;
		uint8_t* L_37 = V_2;
		int32_t L_38 = *((uint32_t*)L_37);
		*((int32_t*)L_36) = (int32_t)L_38;
		uint8_t* L_39 = V_4;
		V_4 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_39, 4));
		uint8_t* L_40 = V_2;
		V_2 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_40, 4));
		uint8_t* L_41 = V_4;
		uint8_t* L_42 = V_6;
		if ((!(((uintptr_t)L_41) >= ((uintptr_t)L_42))))
		{
			goto IL_008d;
		}
	}
	{
		uint8_t* L_43 = V_2;
		uint8_t* L_44 = V_4;
		uint8_t* L_45 = V_6;
		V_2 = ((uint8_t*)il2cpp_codegen_subtract((intptr_t)L_43, ((intptr_t)((int64_t)(intptr_t)((uint8_t*)((intptr_t)((uint8_t*)il2cpp_codegen_subtract((intptr_t)L_44, (intptr_t)L_45))/1))))));
		uint8_t* L_46 = V_6;
		V_4 = L_46;
		uint8_t* L_47 = V_6;
		uint8_t* L_48 = V_2;
		int32_t L_49 = *((uint16_t*)L_48);
		V_3 = ((uint8_t*)il2cpp_codegen_subtract((intptr_t)L_47, L_49));
		uint8_t* L_50 = V_2;
		V_2 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_50, 2));
		uint8_t* L_51 = V_3;
		uint8_t* L_52 = ___decompressedBuffer1;
		if ((!(((uintptr_t)L_51) >= ((uintptr_t)L_52))))
		{
			goto IL_0209;
		}
	}
	{
		uint8_t L_53 = V_7;
		int32_t L_54 = ((int32_t)((int32_t)L_53&((int32_t)15)));
		V_9 = L_54;
		if ((!(((uint64_t)((int64_t)L_54)) == ((uint64_t)((int64_t)((int32_t)15))))))
		{
			goto IL_0104;
		}
	}
	{
		goto IL_00f0;
	}

IL_00e2:
	{
		uint8_t* L_55 = V_2;
		V_2 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_55, 1));
		int32_t L_56 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_add(L_56, ((int32_t)255)));
	}

IL_00f0:
	{
		uint8_t* L_57 = V_2;
		int32_t L_58 = *((uint8_t*)L_57);
		if ((((int32_t)L_58) == ((int32_t)((int32_t)255))))
		{
			goto IL_00e2;
		}
	}
	{
		int32_t L_59 = V_9;
		uint8_t* L_60 = V_2;
		uint8_t* L_61 = L_60;
		V_2 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_61, 1));
		int32_t L_62 = *((uint8_t*)L_61);
		V_9 = ((int32_t)il2cpp_codegen_add(L_59, L_62));
	}

IL_0104:
	{
		uint8_t* L_63 = V_4;
		uint8_t* L_64 = V_3;
		if ((((int64_t)((int64_t)(intptr_t)((uint8_t*)((intptr_t)((uint8_t*)il2cpp_codegen_subtract((intptr_t)L_63, (intptr_t)L_64))/1)))) >= ((int64_t)((int64_t)4))))
		{
			goto IL_0162;
		}
	}
	{
		uint8_t* L_65 = V_4;
		uint8_t* L_66 = L_65;
		V_4 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_66, 1));
		uint8_t* L_67 = V_3;
		uint8_t* L_68 = L_67;
		V_3 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_68, 1));
		int32_t L_69 = *((uint8_t*)L_68);
		*((int8_t*)L_66) = (int8_t)L_69;
		uint8_t* L_70 = V_4;
		uint8_t* L_71 = L_70;
		V_4 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_71, 1));
		uint8_t* L_72 = V_3;
		uint8_t* L_73 = L_72;
		V_3 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_73, 1));
		int32_t L_74 = *((uint8_t*)L_73);
		*((int8_t*)L_71) = (int8_t)L_74;
		uint8_t* L_75 = V_4;
		uint8_t* L_76 = L_75;
		V_4 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_76, 1));
		uint8_t* L_77 = V_3;
		uint8_t* L_78 = L_77;
		V_3 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_78, 1));
		int32_t L_79 = *((uint8_t*)L_78);
		*((int8_t*)L_76) = (int8_t)L_79;
		uint8_t* L_80 = V_4;
		uint8_t* L_81 = L_80;
		V_4 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_81, 1));
		uint8_t* L_82 = V_3;
		uint8_t* L_83 = L_82;
		V_3 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_83, 1));
		int32_t L_84 = *((uint8_t*)L_83);
		*((int8_t*)L_81) = (int8_t)L_84;
		uint8_t* L_85 = V_3;
		int8_t* L_86 = V_0;
		uint8_t* L_87 = V_4;
		uint8_t* L_88 = V_3;
		int32_t L_89 = *((int8_t*)((int8_t*)il2cpp_codegen_add((intptr_t)L_86, ((intptr_t)((int64_t)(intptr_t)((uint8_t*)((intptr_t)((uint8_t*)il2cpp_codegen_subtract((intptr_t)L_87, (intptr_t)L_88))/1)))))));
		V_3 = ((uint8_t*)il2cpp_codegen_subtract((intptr_t)L_85, L_89));
		uint8_t* L_90 = V_4;
		uint8_t* L_91 = V_3;
		int32_t L_92 = *((uint32_t*)L_91);
		*((int32_t*)L_90) = (int32_t)L_92;
		uint8_t* L_93 = V_4;
		V_4 = L_93;
		uint8_t* L_94 = V_3;
		V_3 = L_94;
		goto IL_0171;
	}

IL_0162:
	{
		uint8_t* L_95 = V_4;
		uint8_t* L_96 = V_3;
		int32_t L_97 = *((uint32_t*)L_96);
		*((int32_t*)L_95) = (int32_t)L_97;
		uint8_t* L_98 = V_4;
		V_4 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_98, 4));
		uint8_t* L_99 = V_3;
		V_3 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_99, 4));
	}

IL_0171:
	{
		uint8_t* L_100 = V_4;
		int32_t L_101 = V_9;
		V_6 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_100, L_101));
		uint8_t* L_102 = V_6;
		uint8_t* L_103 = V_5;
		if ((!(((uintptr_t)L_102) > ((uintptr_t)((uint8_t*)il2cpp_codegen_subtract((intptr_t)L_103, 8))))))
		{
			goto IL_01d4;
		}
	}
	{
		uint8_t* L_104 = V_6;
		uint8_t* L_105 = V_5;
		if ((!(((uintptr_t)L_104) <= ((uintptr_t)L_105))))
		{
			goto IL_0209;
		}
	}

IL_0189:
	{
		uint8_t* L_106 = V_4;
		uint8_t* L_107 = V_3;
		int32_t L_108 = *((uint32_t*)L_107);
		*((int32_t*)L_106) = (int32_t)L_108;
		uint8_t* L_109 = V_4;
		V_4 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_109, 4));
		uint8_t* L_110 = V_3;
		V_3 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_110, 4));
		uint8_t* L_111 = V_4;
		uint8_t* L_112 = V_3;
		int32_t L_113 = *((uint32_t*)L_112);
		*((int32_t*)L_111) = (int32_t)L_113;
		uint8_t* L_114 = V_4;
		V_4 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_114, 4));
		uint8_t* L_115 = V_3;
		V_3 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_115, 4));
		uint8_t* L_116 = V_4;
		uint8_t* L_117 = V_5;
		if ((!(((uintptr_t)L_116) >= ((uintptr_t)((uint8_t*)il2cpp_codegen_subtract((intptr_t)L_117, 8))))))
		{
			goto IL_0189;
		}
	}
	{
		goto IL_01bf;
	}

IL_01b1:
	{
		uint8_t* L_118 = V_4;
		uint8_t* L_119 = L_118;
		V_4 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_119, 1));
		uint8_t* L_120 = V_3;
		uint8_t* L_121 = L_120;
		V_3 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_121, 1));
		int32_t L_122 = *((uint8_t*)L_121);
		*((int8_t*)L_119) = (int8_t)L_122;
	}

IL_01bf:
	{
		uint8_t* L_123 = V_4;
		uint8_t* L_124 = V_6;
		if ((!(((uintptr_t)L_123) >= ((uintptr_t)L_124))))
		{
			goto IL_01b1;
		}
	}
	{
		uint8_t* L_125 = V_6;
		V_4 = L_125;
		uint8_t* L_126 = V_4;
		uint8_t* L_127 = V_5;
		if ((!(((uintptr_t)L_126) == ((uintptr_t)L_127))))
		{
			goto IL_0028;
		}
	}
	{
		goto IL_0201;
	}

IL_01d4:
	{
		uint8_t* L_128 = V_4;
		uint8_t* L_129 = V_3;
		int32_t L_130 = *((uint32_t*)L_129);
		*((int32_t*)L_128) = (int32_t)L_130;
		uint8_t* L_131 = V_4;
		V_4 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_131, 4));
		uint8_t* L_132 = V_3;
		V_3 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_132, 4));
		uint8_t* L_133 = V_4;
		uint8_t* L_134 = V_3;
		int32_t L_135 = *((uint32_t*)L_134);
		*((int32_t*)L_133) = (int32_t)L_135;
		uint8_t* L_136 = V_4;
		V_4 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_136, 4));
		uint8_t* L_137 = V_3;
		V_3 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_137, 4));
		uint8_t* L_138 = V_4;
		uint8_t* L_139 = V_6;
		if ((!(((uintptr_t)L_138) >= ((uintptr_t)L_139))))
		{
			goto IL_01d4;
		}
	}
	{
		uint8_t* L_140 = V_6;
		V_4 = L_140;
		goto IL_0028;
	}

IL_0201:
	{
		uint8_t* L_141 = V_2;
		uint8_t* L_142 = ___compressed0;
		return ((int32_t)((int64_t)(intptr_t)((uint8_t*)((intptr_t)((uint8_t*)il2cpp_codegen_subtract((intptr_t)L_141, (intptr_t)L_142))/1))));
	}

IL_0209:
	{
		uint8_t* L_143 = V_2;
		uint8_t* L_144 = ___compressed0;
		return ((int32_t)((-((int64_t)(intptr_t)((uint8_t*)((intptr_t)((uint8_t*)il2cpp_codegen_subtract((intptr_t)L_143, (intptr_t)L_144))/1))))));
	}
}
// System.Byte[] LZ4Sharp.LZ4Decompressor32::Decompress(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* LZ4Decompressor32_Decompress_m907439C0985DEC340D2D0F4AA088BC50B291B48F (LZ4Decompressor32_t687B8355F891786DF2E3030D1F8371C6655A603D* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___compressed0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_2 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_3 = NULL;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___compressed0;
		NullCheck(L_0);
		V_0 = ((int32_t)(((RuntimeArray*)L_0)->max_length));
	}

IL_0004:
	{
		int32_t L_1 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_multiply(L_1, 4));
		int32_t L_2 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_2);
		V_2 = L_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = ___compressed0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = V_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = ___compressed0;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = LZ4Decompressor32_Decompress_mF9A947E9CCE591C2D98C00EB97C3B04DAD006D84(__this, L_4, L_5, ((int32_t)(((RuntimeArray*)L_6)->max_length)), NULL);
		V_1 = L_7;
		int32_t L_8 = V_1;
		if ((((int32_t)L_8) < ((int32_t)0)))
		{
			goto IL_0004;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = V_2;
		NullCheck(L_9);
		int32_t L_10 = V_1;
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_9)->max_length))) < ((int32_t)L_10)))
		{
			goto IL_0004;
		}
	}
	{
		int32_t L_11 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_11);
		V_3 = L_12;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13 = V_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14 = V_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_15 = V_3;
		NullCheck(L_15);
		Buffer_BlockCopy_mD8CF7EC96ADA7A542CCA3F3C73510624E10197A9((RuntimeArray*)L_13, 0, (RuntimeArray*)L_14, 0, ((int32_t)(((RuntimeArray*)L_15)->max_length)), NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_16 = V_3;
		return L_16;
	}
}
// System.Int32 LZ4Sharp.LZ4Decompressor32::Decompress(System.Byte[],System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LZ4Decompressor32_Decompress_mE3B09F0ED5E8569A80111CDD8C92CDE8353A7474 (LZ4Decompressor32_t687B8355F891786DF2E3030D1F8371C6655A603D* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___compressed0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___decompressedBuffer1, const RuntimeMethod* method) 
{
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___compressed0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___decompressedBuffer1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___compressed0;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = LZ4Decompressor32_Decompress_mF9A947E9CCE591C2D98C00EB97C3B04DAD006D84(__this, L_0, L_1, ((int32_t)(((RuntimeArray*)L_2)->max_length)), NULL);
		return L_3;
	}
}
// System.Int32 LZ4Sharp.LZ4Decompressor32::Decompress(System.Byte[],System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LZ4Decompressor32_Decompress_mF9A947E9CCE591C2D98C00EB97C3B04DAD006D84 (LZ4Decompressor32_t687B8355F891786DF2E3030D1F8371C6655A603D* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___compressedBuffer0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___decompressedBuffer1, int32_t ___compressedSize2, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_1 = NULL;
	uint8_t* V_2 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_3 = NULL;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___compressedBuffer0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = L_0;
		V_1 = L_1;
		if (!L_1)
		{
			goto IL_000a;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = V_1;
		NullCheck(L_2);
		if (((int32_t)(((RuntimeArray*)L_2)->max_length)))
		{
			goto IL_000f;
		}
	}

IL_000a:
	{
		V_0 = (uint8_t*)((uintptr_t)0);
		goto IL_0018;
	}

IL_000f:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = V_1;
		NullCheck(L_3);
		V_0 = (uint8_t*)((uintptr_t)((L_3)->GetAddressAt(static_cast<il2cpp_array_size_t>(0))));
	}

IL_0018:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = ___decompressedBuffer1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = L_4;
		V_3 = L_5;
		if (!L_5)
		{
			goto IL_0022;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = V_3;
		NullCheck(L_6);
		if (((int32_t)(((RuntimeArray*)L_6)->max_length)))
		{
			goto IL_0027;
		}
	}

IL_0022:
	{
		V_2 = (uint8_t*)((uintptr_t)0);
		goto IL_0030;
	}

IL_0027:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = V_3;
		NullCheck(L_7);
		V_2 = (uint8_t*)((uintptr_t)((L_7)->GetAddressAt(static_cast<il2cpp_array_size_t>(0))));
	}

IL_0030:
	{
		uint8_t* L_8 = V_0;
		uint8_t* L_9 = V_2;
		int32_t L_10 = ___compressedSize2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = ___decompressedBuffer1;
		NullCheck(L_11);
		int32_t L_12;
		L_12 = LZ4Decompressor32_Decompress_m9EE42BDCBCE622EF6A240AE94778FF0E086601E8(__this, L_8, L_9, L_10, ((int32_t)(((RuntimeArray*)L_11)->max_length)), NULL);
		return L_12;
	}
}
// System.Int32 LZ4Sharp.LZ4Decompressor32::Decompress(System.Byte[],System.Int32,System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LZ4Decompressor32_Decompress_mB8E887BB5D98C02B64ACBCA87AB93ED1CF3C229F (LZ4Decompressor32_t687B8355F891786DF2E3030D1F8371C6655A603D* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___compressedBuffer0, int32_t ___compressedPosition1, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___decompressedBuffer2, int32_t ___decompressedPosition3, int32_t ___compressedSize4, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___compressedBuffer0;
		int32_t L_1 = ___compressedPosition1;
		NullCheck(L_0);
		V_1 = ((L_0)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_1)));
		uint8_t* L_2 = V_1;
		V_0 = (uint8_t*)((uintptr_t)L_2);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = ___decompressedBuffer2;
		int32_t L_4 = ___decompressedPosition3;
		NullCheck(L_3);
		V_3 = ((L_3)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_4)));
		uint8_t* L_5 = V_3;
		V_2 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint8_t* L_7 = V_2;
		int32_t L_8 = ___compressedSize4;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = ___decompressedBuffer2;
		NullCheck(L_9);
		int32_t L_10;
		L_10 = LZ4Decompressor32_Decompress_m9EE42BDCBCE622EF6A240AE94778FF0E086601E8(__this, L_6, L_7, L_8, ((int32_t)(((RuntimeArray*)L_9)->max_length)), NULL);
		return L_10;
	}
}
// System.Int32 LZ4Sharp.LZ4Decompressor32::Decompress(System.Byte*,System.Byte*,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LZ4Decompressor32_Decompress_m9EE42BDCBCE622EF6A240AE94778FF0E086601E8 (LZ4Decompressor32_t687B8355F891786DF2E3030D1F8371C6655A603D* __this, uint8_t* ___compressedBuffer0, uint8_t* ___decompressedBuffer1, int32_t ___compressedSize2, int32_t ___maxDecompressedSize3, const RuntimeMethod* method) 
{
	int8_t* V_0 = NULL;
	SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	uint8_t* V_4 = NULL;
	uint8_t* V_5 = NULL;
	uint8_t* V_6 = NULL;
	uint8_t* V_7 = NULL;
	uint8_t V_8 = 0x0;
	int32_t V_9 = 0;
	int32_t V_10 = 0;
	int32_t V_11 = 0;
	{
		SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* L_0 = __this->___m_DecArray_2;
		SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* L_1 = L_0;
		V_1 = L_1;
		if (!L_1)
		{
			goto IL_000f;
		}
	}
	{
		SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* L_2 = V_1;
		NullCheck(L_2);
		if (((int32_t)(((RuntimeArray*)L_2)->max_length)))
		{
			goto IL_0014;
		}
	}

IL_000f:
	{
		V_0 = (int8_t*)((uintptr_t)0);
		goto IL_001d;
	}

IL_0014:
	{
		SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* L_3 = V_1;
		NullCheck(L_3);
		V_0 = (int8_t*)((uintptr_t)((L_3)->GetAddressAt(static_cast<il2cpp_array_size_t>(0))));
	}

IL_001d:
	{
		uint8_t* L_4 = ___compressedBuffer0;
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		int32_t L_6 = ___compressedSize2;
		V_3 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_5, L_6));
		uint8_t* L_7 = ___decompressedBuffer1;
		V_5 = L_7;
		uint8_t* L_8 = V_5;
		int32_t L_9 = ___maxDecompressedSize3;
		V_6 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_8, L_9));
		goto IL_0242;
	}

IL_0032:
	{
		uint8_t* L_10 = V_2;
		uint8_t* L_11 = L_10;
		V_2 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_11, 1));
		int32_t L_12 = *((uint8_t*)L_11);
		V_8 = (uint8_t)L_12;
		uint8_t L_13 = V_8;
		int32_t L_14 = ((int32_t)((int32_t)L_13>>4));
		V_9 = L_14;
		if ((!(((uint64_t)((int64_t)L_14)) == ((uint64_t)((int64_t)((int32_t)15))))))
		{
			goto IL_006c;
		}
	}
	{
		V_10 = ((int32_t)255);
		goto IL_005f;
	}

IL_0050:
	{
		uint8_t* L_15 = V_2;
		uint8_t* L_16 = L_15;
		V_2 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_16, 1));
		int32_t L_17 = *((uint8_t*)L_16);
		V_10 = L_17;
		int32_t L_18 = V_9;
		int32_t L_19 = V_10;
		V_9 = ((int32_t)il2cpp_codegen_add(L_18, L_19));
	}

IL_005f:
	{
		uint8_t* L_20 = V_2;
		uint8_t* L_21 = V_3;
		if ((!(((uintptr_t)L_20) < ((uintptr_t)L_21))))
		{
			goto IL_006c;
		}
	}
	{
		int32_t L_22 = V_10;
		if ((((int32_t)L_22) == ((int32_t)((int32_t)255))))
		{
			goto IL_0050;
		}
	}

IL_006c:
	{
		uint8_t* L_23 = V_5;
		int32_t L_24 = V_9;
		V_7 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_23, L_24));
		uint8_t* L_25 = V_7;
		uint8_t* L_26 = V_6;
		if ((!(((uintptr_t)L_25) <= ((uintptr_t)((uint8_t*)il2cpp_codegen_subtract((intptr_t)L_26, 8))))))
		{
			goto IL_0084;
		}
	}
	{
		uint8_t* L_27 = V_2;
		int32_t L_28 = V_9;
		uint8_t* L_29 = V_3;
		if ((!(((uintptr_t)((uint8_t*)il2cpp_codegen_add((intptr_t)L_27, L_28))) > ((uintptr_t)((uint8_t*)il2cpp_codegen_subtract((intptr_t)L_29, 8))))))
		{
			goto IL_00ba;
		}
	}

IL_0084:
	{
		uint8_t* L_30 = V_7;
		uint8_t* L_31 = V_6;
		if ((!(((uintptr_t)L_30) <= ((uintptr_t)L_31))))
		{
			goto IL_0252;
		}
	}
	{
		uint8_t* L_32 = V_2;
		int32_t L_33 = V_9;
		uint8_t* L_34 = V_3;
		if ((!(((uintptr_t)((uint8_t*)il2cpp_codegen_add((intptr_t)L_32, L_33))) <= ((uintptr_t)L_34))))
		{
			goto IL_0252;
		}
	}
	{
		uint8_t* L_35 = V_5;
		uint8_t* L_36 = V_2;
		int32_t L_37 = V_9;
		LZ4Util_CopyMemory_mE7FF2466FFC0EFEDA278A55F7222EDB2BBE84EDA(L_35, L_36, ((int64_t)L_37), NULL);
		uint8_t* L_38 = V_5;
		int32_t L_39 = V_9;
		V_5 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_38, L_39));
		uint8_t* L_40 = V_2;
		int32_t L_41 = V_9;
		V_2 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_40, L_41));
		uint8_t* L_42 = V_2;
		uint8_t* L_43 = V_3;
		if ((!(((uintptr_t)L_42) < ((uintptr_t)L_43))))
		{
			goto IL_0249;
		}
	}
	{
		goto IL_0252;
	}

IL_00ba:
	{
		uint8_t* L_44 = V_5;
		uint8_t* L_45 = V_2;
		int32_t L_46 = *((uint32_t*)L_45);
		*((int32_t*)L_44) = (int32_t)L_46;
		uint8_t* L_47 = V_5;
		V_5 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_47, 4));
		uint8_t* L_48 = V_2;
		V_2 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_48, 4));
		uint8_t* L_49 = V_5;
		uint8_t* L_50 = V_2;
		int32_t L_51 = *((uint32_t*)L_50);
		*((int32_t*)L_49) = (int32_t)L_51;
		uint8_t* L_52 = V_5;
		V_5 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_52, 4));
		uint8_t* L_53 = V_2;
		V_2 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_53, 4));
		uint8_t* L_54 = V_5;
		uint8_t* L_55 = V_7;
		if ((!(((uintptr_t)L_54) >= ((uintptr_t)L_55))))
		{
			goto IL_00ba;
		}
	}
	{
		uint8_t* L_56 = V_2;
		uint8_t* L_57 = V_5;
		uint8_t* L_58 = V_7;
		V_2 = ((uint8_t*)il2cpp_codegen_subtract((intptr_t)L_56, ((intptr_t)((int64_t)(intptr_t)((uint8_t*)((intptr_t)((uint8_t*)il2cpp_codegen_subtract((intptr_t)L_57, (intptr_t)L_58))/1))))));
		uint8_t* L_59 = V_7;
		V_5 = L_59;
		uint8_t* L_60 = V_7;
		uint8_t* L_61 = V_2;
		int32_t L_62 = *((uint16_t*)L_61);
		V_4 = ((uint8_t*)il2cpp_codegen_subtract((intptr_t)L_60, L_62));
		uint8_t* L_63 = V_2;
		V_2 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_63, 2));
		uint8_t* L_64 = V_4;
		uint8_t* L_65 = ___decompressedBuffer1;
		if ((!(((uintptr_t)L_64) >= ((uintptr_t)L_65))))
		{
			goto IL_0252;
		}
	}
	{
		uint8_t L_66 = V_8;
		int32_t L_67 = ((int32_t)((int32_t)L_66&((int32_t)15)));
		V_9 = L_67;
		if ((!(((uint64_t)((int64_t)L_67)) == ((uint64_t)((int64_t)((int32_t)15))))))
		{
			goto IL_012d;
		}
	}
	{
		goto IL_0129;
	}

IL_0111:
	{
		uint8_t* L_68 = V_2;
		uint8_t* L_69 = L_68;
		V_2 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_69, 1));
		int32_t L_70 = *((uint8_t*)L_69);
		V_11 = L_70;
		int32_t L_71 = V_9;
		int32_t L_72 = V_11;
		V_9 = ((int32_t)il2cpp_codegen_add(L_71, L_72));
		int32_t L_73 = V_11;
		if ((!(((uint32_t)L_73) == ((uint32_t)((int32_t)255)))))
		{
			goto IL_012d;
		}
	}

IL_0129:
	{
		uint8_t* L_74 = V_2;
		uint8_t* L_75 = V_3;
		if ((!(((uintptr_t)L_74) >= ((uintptr_t)L_75))))
		{
			goto IL_0111;
		}
	}

IL_012d:
	{
		uint8_t* L_76 = V_5;
		uint8_t* L_77 = V_4;
		if ((((int64_t)((int64_t)(intptr_t)((uint8_t*)((intptr_t)((uint8_t*)il2cpp_codegen_subtract((intptr_t)L_76, (intptr_t)L_77))/1)))) >= ((int64_t)((int64_t)4))))
		{
			goto IL_019a;
		}
	}
	{
		uint8_t* L_78 = V_5;
		uint8_t* L_79 = L_78;
		V_5 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_79, 1));
		uint8_t* L_80 = V_4;
		uint8_t* L_81 = L_80;
		V_4 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_81, 1));
		int32_t L_82 = *((uint8_t*)L_81);
		*((int8_t*)L_79) = (int8_t)L_82;
		uint8_t* L_83 = V_5;
		uint8_t* L_84 = L_83;
		V_5 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_84, 1));
		uint8_t* L_85 = V_4;
		uint8_t* L_86 = L_85;
		V_4 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_86, 1));
		int32_t L_87 = *((uint8_t*)L_86);
		*((int8_t*)L_84) = (int8_t)L_87;
		uint8_t* L_88 = V_5;
		uint8_t* L_89 = L_88;
		V_5 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_89, 1));
		uint8_t* L_90 = V_4;
		uint8_t* L_91 = L_90;
		V_4 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_91, 1));
		int32_t L_92 = *((uint8_t*)L_91);
		*((int8_t*)L_89) = (int8_t)L_92;
		uint8_t* L_93 = V_5;
		uint8_t* L_94 = L_93;
		V_5 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_94, 1));
		uint8_t* L_95 = V_4;
		uint8_t* L_96 = L_95;
		V_4 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_96, 1));
		int32_t L_97 = *((uint8_t*)L_96);
		*((int8_t*)L_94) = (int8_t)L_97;
		uint8_t* L_98 = V_4;
		int8_t* L_99 = V_0;
		uint8_t* L_100 = V_5;
		uint8_t* L_101 = V_4;
		int32_t L_102 = *((int8_t*)((int8_t*)il2cpp_codegen_add((intptr_t)L_99, ((intptr_t)((int64_t)(intptr_t)((uint8_t*)((intptr_t)((uint8_t*)il2cpp_codegen_subtract((intptr_t)L_100, (intptr_t)L_101))/1)))))));
		V_4 = ((uint8_t*)il2cpp_codegen_subtract((intptr_t)L_98, L_102));
		uint8_t* L_103 = V_5;
		uint8_t* L_104 = V_4;
		int32_t L_105 = *((uint32_t*)L_104);
		*((int32_t*)L_103) = (int32_t)L_105;
		uint8_t* L_106 = V_5;
		V_5 = L_106;
		uint8_t* L_107 = V_4;
		V_4 = L_107;
		goto IL_01ac;
	}

IL_019a:
	{
		uint8_t* L_108 = V_5;
		uint8_t* L_109 = V_4;
		int32_t L_110 = *((uint32_t*)L_109);
		*((int32_t*)L_108) = (int32_t)L_110;
		uint8_t* L_111 = V_5;
		V_5 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_111, 4));
		uint8_t* L_112 = V_4;
		V_4 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_112, 4));
	}

IL_01ac:
	{
		uint8_t* L_113 = V_5;
		int32_t L_114 = V_9;
		V_7 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_113, L_114));
		uint8_t* L_115 = V_7;
		uint8_t* L_116 = V_6;
		if ((!(((uintptr_t)L_115) > ((uintptr_t)((uint8_t*)il2cpp_codegen_subtract((intptr_t)L_116, 8))))))
		{
			goto IL_0214;
		}
	}
	{
		uint8_t* L_117 = V_7;
		uint8_t* L_118 = V_6;
		if ((!(((uintptr_t)L_117) <= ((uintptr_t)L_118))))
		{
			goto IL_0252;
		}
	}

IL_01c4:
	{
		uint8_t* L_119 = V_5;
		uint8_t* L_120 = V_4;
		int32_t L_121 = *((uint32_t*)L_120);
		*((int32_t*)L_119) = (int32_t)L_121;
		uint8_t* L_122 = V_5;
		V_5 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_122, 4));
		uint8_t* L_123 = V_4;
		V_4 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_123, 4));
		uint8_t* L_124 = V_5;
		uint8_t* L_125 = V_4;
		int32_t L_126 = *((uint32_t*)L_125);
		*((int32_t*)L_124) = (int32_t)L_126;
		uint8_t* L_127 = V_5;
		V_5 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_127, 4));
		uint8_t* L_128 = V_4;
		V_4 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_128, 4));
		uint8_t* L_129 = V_5;
		uint8_t* L_130 = V_6;
		if ((!(((uintptr_t)L_129) >= ((uintptr_t)((uint8_t*)il2cpp_codegen_subtract((intptr_t)L_130, 8))))))
		{
			goto IL_01c4;
		}
	}
	{
		goto IL_0202;
	}

IL_01f2:
	{
		uint8_t* L_131 = V_5;
		uint8_t* L_132 = L_131;
		V_5 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_132, 1));
		uint8_t* L_133 = V_4;
		uint8_t* L_134 = L_133;
		V_4 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_134, 1));
		int32_t L_135 = *((uint8_t*)L_134);
		*((int8_t*)L_132) = (int8_t)L_135;
	}

IL_0202:
	{
		uint8_t* L_136 = V_5;
		uint8_t* L_137 = V_7;
		if ((!(((uintptr_t)L_136) >= ((uintptr_t)L_137))))
		{
			goto IL_01f2;
		}
	}
	{
		uint8_t* L_138 = V_7;
		V_5 = L_138;
		uint8_t* L_139 = V_5;
		uint8_t* L_140 = V_6;
		if ((!(((uintptr_t)L_139) == ((uintptr_t)L_140))))
		{
			goto IL_0242;
		}
	}
	{
		goto IL_0252;
	}

IL_0214:
	{
		uint8_t* L_141 = V_5;
		uint8_t* L_142 = V_4;
		int32_t L_143 = *((uint32_t*)L_142);
		*((int32_t*)L_141) = (int32_t)L_143;
		uint8_t* L_144 = V_5;
		V_5 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_144, 4));
		uint8_t* L_145 = V_4;
		V_4 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_145, 4));
		uint8_t* L_146 = V_5;
		uint8_t* L_147 = V_4;
		int32_t L_148 = *((uint32_t*)L_147);
		*((int32_t*)L_146) = (int32_t)L_148;
		uint8_t* L_149 = V_5;
		V_5 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_149, 4));
		uint8_t* L_150 = V_4;
		V_4 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_150, 4));
		uint8_t* L_151 = V_5;
		uint8_t* L_152 = V_7;
		if ((!(((uintptr_t)L_151) >= ((uintptr_t)L_152))))
		{
			goto IL_0214;
		}
	}
	{
		uint8_t* L_153 = V_7;
		V_5 = L_153;
	}

IL_0242:
	{
		uint8_t* L_154 = V_2;
		uint8_t* L_155 = V_3;
		if ((!(((uintptr_t)L_154) >= ((uintptr_t)L_155))))
		{
			goto IL_0032;
		}
	}

IL_0249:
	{
		uint8_t* L_156 = V_5;
		uint8_t* L_157 = ___decompressedBuffer1;
		return ((int32_t)((int64_t)(intptr_t)((uint8_t*)((intptr_t)((uint8_t*)il2cpp_codegen_subtract((intptr_t)L_156, (intptr_t)L_157))/1))));
	}

IL_0252:
	{
		uint8_t* L_158 = V_2;
		uint8_t* L_159 = ___compressedBuffer0;
		return ((int32_t)((-((int64_t)(intptr_t)((uint8_t*)((intptr_t)((uint8_t*)il2cpp_codegen_subtract((intptr_t)L_158, (intptr_t)L_159))/1))))));
	}
}
// System.Void LZ4Sharp.LZ4Decompressor32::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LZ4Decompressor32__ctor_mF15FD7D6C30D2E59DD95B3FAF053EA96E4011FFC (LZ4Decompressor32_t687B8355F891786DF2E3030D1F8371C6655A603D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_t17805B5F7C0D0D788494C2B7E9223B9DDD566C70____478302FFD7FDF162B416C032A124F955DCC5DAE1_1_FieldInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* L_0 = (SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913*)(SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913*)SZArrayNew(SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913_il2cpp_TypeInfo_var, (uint32_t)8);
		SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* L_1 = L_0;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_2 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t17805B5F7C0D0D788494C2B7E9223B9DDD566C70____478302FFD7FDF162B416C032A124F955DCC5DAE1_1_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_mE10C3436BA703E4D9D41B3F8F365E4C34F9926EF((RuntimeArray*)L_1, L_2, NULL);
		__this->___m_DecArray_2 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_DecArray_2), (void*)L_1);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void LZ4Sharp.LZ4Decompressor32::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LZ4Decompressor32__cctor_m23649975F726F74BBEDCC94E3C05571BA3BD5D32 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LZ4Decompressor32_t687B8355F891786DF2E3030D1F8371C6655A603D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_t17805B5F7C0D0D788494C2B7E9223B9DDD566C70____99D91C09CCCD2860D80BAA555488A517884BD0A1_2_FieldInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)32));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = L_0;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_2 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t17805B5F7C0D0D788494C2B7E9223B9DDD566C70____99D91C09CCCD2860D80BAA555488A517884BD0A1_2_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_mE10C3436BA703E4D9D41B3F8F365E4C34F9926EF((RuntimeArray*)L_1, L_2, NULL);
		((LZ4Decompressor32_t687B8355F891786DF2E3030D1F8371C6655A603D_StaticFields*)il2cpp_codegen_static_fields_for(LZ4Decompressor32_t687B8355F891786DF2E3030D1F8371C6655A603D_il2cpp_TypeInfo_var))->___DeBruijnBytePos_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((LZ4Decompressor32_t687B8355F891786DF2E3030D1F8371C6655A603D_StaticFields*)il2cpp_codegen_static_fields_for(LZ4Decompressor32_t687B8355F891786DF2E3030D1F8371C6655A603D_il2cpp_TypeInfo_var))->___DeBruijnBytePos_1), (void*)L_1);
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
// System.Void LZ4Sharp.LZ4Decompressor64::DecompressKnownSize(System.Byte[],System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LZ4Decompressor64_DecompressKnownSize_m86C7976FFAADB45C2D682ACE7B20CC4136082C27 (LZ4Decompressor64_t15D10CE43F92442C46FB445A6E0972262FA746C5* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___compressed0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___decompressed1, const RuntimeMethod* method) 
{
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___compressed0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___decompressed1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___decompressed1;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = LZ4Decompressor64_DecompressKnownSize_m73B119A44BE72148F658A8011074F00C8741A2D5(__this, L_0, L_1, ((int32_t)(((RuntimeArray*)L_2)->max_length)), NULL);
		return;
	}
}
// System.Int32 LZ4Sharp.LZ4Decompressor64::DecompressKnownSize(System.Byte[],System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LZ4Decompressor64_DecompressKnownSize_m73B119A44BE72148F658A8011074F00C8741A2D5 (LZ4Decompressor64_t15D10CE43F92442C46FB445A6E0972262FA746C5* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___compressed0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___decompressedBuffer1, int32_t ___decompressedSize2, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_1 = NULL;
	uint8_t* V_2 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_3 = NULL;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___compressed0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = L_0;
		V_1 = L_1;
		if (!L_1)
		{
			goto IL_000a;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = V_1;
		NullCheck(L_2);
		if (((int32_t)(((RuntimeArray*)L_2)->max_length)))
		{
			goto IL_000f;
		}
	}

IL_000a:
	{
		V_0 = (uint8_t*)((uintptr_t)0);
		goto IL_0018;
	}

IL_000f:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = V_1;
		NullCheck(L_3);
		V_0 = (uint8_t*)((uintptr_t)((L_3)->GetAddressAt(static_cast<il2cpp_array_size_t>(0))));
	}

IL_0018:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = ___decompressedBuffer1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = L_4;
		V_3 = L_5;
		if (!L_5)
		{
			goto IL_0022;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = V_3;
		NullCheck(L_6);
		if (((int32_t)(((RuntimeArray*)L_6)->max_length)))
		{
			goto IL_0027;
		}
	}

IL_0022:
	{
		V_2 = (uint8_t*)((uintptr_t)0);
		goto IL_0030;
	}

IL_0027:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = V_3;
		NullCheck(L_7);
		V_2 = (uint8_t*)((uintptr_t)((L_7)->GetAddressAt(static_cast<il2cpp_array_size_t>(0))));
	}

IL_0030:
	{
		uint8_t* L_8 = V_0;
		uint8_t* L_9 = V_2;
		int32_t L_10 = ___decompressedSize2;
		int32_t L_11;
		L_11 = LZ4Decompressor64_DecompressKnownSize_mB92DB225696C44939F9551428D3BBD67BF521FF8(__this, L_8, L_9, L_10, NULL);
		return L_11;
	}
}
// System.Int32 LZ4Sharp.LZ4Decompressor64::DecompressKnownSize(System.Byte*,System.Byte*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LZ4Decompressor64_DecompressKnownSize_mB92DB225696C44939F9551428D3BBD67BF521FF8 (LZ4Decompressor64_t15D10CE43F92442C46FB445A6E0972262FA746C5* __this, uint8_t* ___compressed0, uint8_t* ___decompressedBuffer1, int32_t ___decompressedSize2, const RuntimeMethod* method) 
{
	int8_t* V_0 = NULL;
	SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* V_1 = NULL;
	int8_t* V_2 = NULL;
	SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* V_3 = NULL;
	uint8_t* V_4 = NULL;
	uint8_t* V_5 = NULL;
	uint8_t* V_6 = NULL;
	uint8_t* V_7 = NULL;
	uint8_t* V_8 = NULL;
	uint8_t V_9 = 0x0;
	int32_t V_10 = 0;
	int32_t V_11 = 0;
	int8_t V_12 = 0x0;
	{
		SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* L_0 = __this->___m_DecArray_2;
		SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* L_1 = L_0;
		V_1 = L_1;
		if (!L_1)
		{
			goto IL_000f;
		}
	}
	{
		SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* L_2 = V_1;
		NullCheck(L_2);
		if (((int32_t)(((RuntimeArray*)L_2)->max_length)))
		{
			goto IL_0014;
		}
	}

IL_000f:
	{
		V_0 = (int8_t*)((uintptr_t)0);
		goto IL_001d;
	}

IL_0014:
	{
		SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* L_3 = V_1;
		NullCheck(L_3);
		V_0 = (int8_t*)((uintptr_t)((L_3)->GetAddressAt(static_cast<il2cpp_array_size_t>(0))));
	}

IL_001d:
	{
		SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* L_4 = __this->___m_Dec2table_3;
		SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* L_5 = L_4;
		V_3 = L_5;
		if (!L_5)
		{
			goto IL_002c;
		}
	}
	{
		SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* L_6 = V_3;
		NullCheck(L_6);
		if (((int32_t)(((RuntimeArray*)L_6)->max_length)))
		{
			goto IL_0031;
		}
	}

IL_002c:
	{
		V_2 = (int8_t*)((uintptr_t)0);
		goto IL_003a;
	}

IL_0031:
	{
		SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* L_7 = V_3;
		NullCheck(L_7);
		V_2 = (int8_t*)((uintptr_t)((L_7)->GetAddressAt(static_cast<il2cpp_array_size_t>(0))));
	}

IL_003a:
	{
		uint8_t* L_8 = ___compressed0;
		V_4 = L_8;
		uint8_t* L_9 = ___decompressedBuffer1;
		V_6 = L_9;
		uint8_t* L_10 = V_6;
		int32_t L_11 = ___decompressedSize2;
		V_7 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_10, L_11));
	}

IL_0046:
	{
		uint8_t* L_12 = V_4;
		uint8_t* L_13 = L_12;
		V_4 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_13, 1));
		int32_t L_14 = *((uint8_t*)L_13);
		V_9 = (uint8_t)L_14;
		uint8_t L_15 = V_9;
		int32_t L_16 = ((int32_t)((int32_t)L_15>>4));
		V_11 = L_16;
		if ((!(((uint64_t)((int64_t)L_16)) == ((uint64_t)((int64_t)((int32_t)15))))))
		{
			goto IL_0082;
		}
	}
	{
		goto IL_0069;
	}

IL_005f:
	{
		int32_t L_17 = V_11;
		V_11 = ((int32_t)il2cpp_codegen_add(L_17, ((int32_t)255)));
	}

IL_0069:
	{
		uint8_t* L_18 = V_4;
		uint8_t* L_19 = L_18;
		V_4 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_19, 1));
		int32_t L_20 = *((uint8_t*)L_19);
		int32_t L_21 = L_20;
		V_10 = L_21;
		if ((((int32_t)L_21) == ((int32_t)((int32_t)255))))
		{
			goto IL_005f;
		}
	}
	{
		int32_t L_22 = V_11;
		int32_t L_23 = V_10;
		V_11 = ((int32_t)il2cpp_codegen_add(L_22, L_23));
	}

IL_0082:
	{
		uint8_t* L_24 = V_6;
		int32_t L_25 = V_11;
		V_8 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_24, L_25));
		uint8_t* L_26 = V_8;
		uint8_t* L_27 = V_7;
		if ((!(((uintptr_t)L_26) > ((uintptr_t)((uint8_t*)il2cpp_codegen_subtract((intptr_t)L_27, 8))))))
		{
			goto IL_00b2;
		}
	}
	{
		uint8_t* L_28 = V_8;
		uint8_t* L_29 = V_7;
		if ((!(((uintptr_t)L_28) <= ((uintptr_t)L_29))))
		{
			goto IL_024b;
		}
	}
	{
		uint8_t* L_30 = V_6;
		uint8_t* L_31 = V_4;
		int32_t L_32 = V_11;
		LZ4Util_CopyMemory_mE7FF2466FFC0EFEDA278A55F7222EDB2BBE84EDA(L_30, L_31, ((int64_t)L_32), NULL);
		uint8_t* L_33 = V_4;
		int32_t L_34 = V_11;
		V_4 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_33, L_34));
		goto IL_0242;
	}

IL_00b2:
	{
		uint8_t* L_35 = V_6;
		uint8_t* L_36 = V_4;
		int64_t L_37 = *((int64_t*)L_36);
		*((int64_t*)L_35) = (int64_t)L_37;
		uint8_t* L_38 = V_6;
		V_6 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_38, 8));
		uint8_t* L_39 = V_4;
		V_4 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_39, 8));
		uint8_t* L_40 = V_6;
		uint8_t* L_41 = V_8;
		if ((!(((uintptr_t)L_40) >= ((uintptr_t)L_41))))
		{
			goto IL_00b2;
		}
	}
	{
		uint8_t* L_42 = V_4;
		uint8_t* L_43 = V_6;
		uint8_t* L_44 = V_8;
		V_4 = ((uint8_t*)il2cpp_codegen_subtract((intptr_t)L_42, ((intptr_t)((int64_t)(intptr_t)((uint8_t*)((intptr_t)((uint8_t*)il2cpp_codegen_subtract((intptr_t)L_43, (intptr_t)L_44))/1))))));
		uint8_t* L_45 = V_8;
		V_6 = L_45;
		uint8_t* L_46 = V_8;
		uint8_t* L_47 = V_4;
		int32_t L_48 = *((uint16_t*)L_47);
		V_5 = ((uint8_t*)il2cpp_codegen_subtract((intptr_t)L_46, L_48));
		uint8_t* L_49 = V_4;
		V_4 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_49, 2));
		uint8_t* L_50 = V_5;
		uint8_t* L_51 = ___decompressedBuffer1;
		if ((!(((uintptr_t)L_50) >= ((uintptr_t)L_51))))
		{
			goto IL_024b;
		}
	}
	{
		uint8_t L_52 = V_9;
		int32_t L_53 = ((int32_t)((int32_t)L_52&((int32_t)15)));
		V_11 = L_53;
		if ((!(((uint64_t)((int64_t)L_53)) == ((uint64_t)((int64_t)((int32_t)15))))))
		{
			goto IL_0129;
		}
	}
	{
		goto IL_0112;
	}

IL_0102:
	{
		uint8_t* L_54 = V_4;
		V_4 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_54, 1));
		int32_t L_55 = V_11;
		V_11 = ((int32_t)il2cpp_codegen_add(L_55, ((int32_t)255)));
	}

IL_0112:
	{
		uint8_t* L_56 = V_4;
		int32_t L_57 = *((uint8_t*)L_56);
		if ((((int32_t)L_57) == ((int32_t)((int32_t)255))))
		{
			goto IL_0102;
		}
	}
	{
		int32_t L_58 = V_11;
		uint8_t* L_59 = V_4;
		uint8_t* L_60 = L_59;
		V_4 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_60, 1));
		int32_t L_61 = *((uint8_t*)L_60);
		V_11 = ((int32_t)il2cpp_codegen_add(L_58, L_61));
	}

IL_0129:
	{
		uint8_t* L_62 = V_6;
		uint8_t* L_63 = V_5;
		if ((((int64_t)((int64_t)(intptr_t)((uint8_t*)((intptr_t)((uint8_t*)il2cpp_codegen_subtract((intptr_t)L_62, (intptr_t)L_63))/1)))) >= ((int64_t)((int64_t)8))))
		{
			goto IL_01a9;
		}
	}
	{
		int8_t* L_64 = V_2;
		uint8_t* L_65 = V_6;
		uint8_t* L_66 = V_5;
		int32_t L_67 = *((int8_t*)((int8_t*)il2cpp_codegen_add((intptr_t)L_64, ((int32_t)((int64_t)(intptr_t)((uint8_t*)((intptr_t)((uint8_t*)il2cpp_codegen_subtract((intptr_t)L_65, (intptr_t)L_66))/1)))))));
		V_12 = (int8_t)L_67;
		uint8_t* L_68 = V_6;
		uint8_t* L_69 = L_68;
		V_6 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_69, 1));
		uint8_t* L_70 = V_5;
		uint8_t* L_71 = L_70;
		V_5 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_71, 1));
		int32_t L_72 = *((uint8_t*)L_71);
		*((int8_t*)L_69) = (int8_t)L_72;
		uint8_t* L_73 = V_6;
		uint8_t* L_74 = L_73;
		V_6 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_74, 1));
		uint8_t* L_75 = V_5;
		uint8_t* L_76 = L_75;
		V_5 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_76, 1));
		int32_t L_77 = *((uint8_t*)L_76);
		*((int8_t*)L_74) = (int8_t)L_77;
		uint8_t* L_78 = V_6;
		uint8_t* L_79 = L_78;
		V_6 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_79, 1));
		uint8_t* L_80 = V_5;
		uint8_t* L_81 = L_80;
		V_5 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_81, 1));
		int32_t L_82 = *((uint8_t*)L_81);
		*((int8_t*)L_79) = (int8_t)L_82;
		uint8_t* L_83 = V_6;
		uint8_t* L_84 = L_83;
		V_6 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_84, 1));
		uint8_t* L_85 = V_5;
		uint8_t* L_86 = L_85;
		V_5 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_86, 1));
		int32_t L_87 = *((uint8_t*)L_86);
		*((int8_t*)L_84) = (int8_t)L_87;
		uint8_t* L_88 = V_5;
		int8_t* L_89 = V_0;
		uint8_t* L_90 = V_6;
		uint8_t* L_91 = V_5;
		int32_t L_92 = *((int8_t*)((int8_t*)il2cpp_codegen_add((intptr_t)L_89, ((intptr_t)((int64_t)(intptr_t)((uint8_t*)((intptr_t)((uint8_t*)il2cpp_codegen_subtract((intptr_t)L_90, (intptr_t)L_91))/1)))))));
		V_5 = ((uint8_t*)il2cpp_codegen_subtract((intptr_t)L_88, L_92));
		uint8_t* L_93 = V_6;
		uint8_t* L_94 = V_5;
		int32_t L_95 = *((uint32_t*)L_94);
		*((int32_t*)L_93) = (int32_t)L_95;
		uint8_t* L_96 = V_6;
		V_6 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_96, 4));
		uint8_t* L_97 = V_5;
		int8_t L_98 = V_12;
		V_5 = ((uint8_t*)il2cpp_codegen_subtract((intptr_t)L_97, (int32_t)L_98));
		goto IL_01bb;
	}

IL_01a9:
	{
		uint8_t* L_99 = V_6;
		uint8_t* L_100 = V_5;
		int64_t L_101 = *((int64_t*)L_100);
		*((int64_t*)L_99) = (int64_t)L_101;
		uint8_t* L_102 = V_6;
		V_6 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_102, 8));
		uint8_t* L_103 = V_5;
		V_5 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_103, 8));
	}

IL_01bb:
	{
		uint8_t* L_104 = V_6;
		int32_t L_105 = V_11;
		V_8 = ((uint8_t*)il2cpp_codegen_subtract((intptr_t)((uint8_t*)il2cpp_codegen_add((intptr_t)L_104, L_105)), 4));
		uint8_t* L_106 = V_8;
		uint8_t* L_107 = V_7;
		if ((!(((uintptr_t)L_106) > ((uintptr_t)((uint8_t*)il2cpp_codegen_subtract((intptr_t)L_107, 8))))))
		{
			goto IL_021b;
		}
	}
	{
		uint8_t* L_108 = V_8;
		uint8_t* L_109 = V_7;
		if ((!(((uintptr_t)L_108) <= ((uintptr_t)L_109))))
		{
			goto IL_024b;
		}
	}
	{
		uint8_t* L_110 = V_6;
		uint8_t* L_111 = V_7;
		if ((!(((uintptr_t)L_110) < ((uintptr_t)((uint8_t*)il2cpp_codegen_subtract((intptr_t)L_111, 8))))))
		{
			goto IL_0206;
		}
	}

IL_01da:
	{
		uint8_t* L_112 = V_6;
		uint8_t* L_113 = V_5;
		int64_t L_114 = *((int64_t*)L_113);
		*((int64_t*)L_112) = (int64_t)L_114;
		uint8_t* L_115 = V_6;
		V_6 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_115, 8));
		uint8_t* L_116 = V_5;
		V_5 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_116, 8));
		uint8_t* L_117 = V_6;
		uint8_t* L_118 = V_7;
		if ((!(((uintptr_t)L_117) >= ((uintptr_t)((uint8_t*)il2cpp_codegen_subtract((intptr_t)L_118, 8))))))
		{
			goto IL_01da;
		}
	}
	{
		goto IL_0206;
	}

IL_01f6:
	{
		uint8_t* L_119 = V_6;
		uint8_t* L_120 = L_119;
		V_6 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_120, 1));
		uint8_t* L_121 = V_5;
		uint8_t* L_122 = L_121;
		V_5 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_122, 1));
		int32_t L_123 = *((uint8_t*)L_122);
		*((int8_t*)L_120) = (int8_t)L_123;
	}

IL_0206:
	{
		uint8_t* L_124 = V_6;
		uint8_t* L_125 = V_8;
		if ((!(((uintptr_t)L_124) >= ((uintptr_t)L_125))))
		{
			goto IL_01f6;
		}
	}
	{
		uint8_t* L_126 = V_8;
		V_6 = L_126;
		uint8_t* L_127 = V_6;
		uint8_t* L_128 = V_7;
		if ((!(((uintptr_t)L_127) == ((uintptr_t)L_128))))
		{
			goto IL_0046;
		}
	}
	{
		goto IL_0242;
	}

IL_021b:
	{
		uint8_t* L_129 = V_6;
		uint8_t* L_130 = V_8;
		if ((!(((uintptr_t)L_129) < ((uintptr_t)L_130))))
		{
			goto IL_0239;
		}
	}

IL_0221:
	{
		uint8_t* L_131 = V_6;
		uint8_t* L_132 = V_5;
		int64_t L_133 = *((int64_t*)L_132);
		*((int64_t*)L_131) = (int64_t)L_133;
		uint8_t* L_134 = V_6;
		V_6 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_134, 8));
		uint8_t* L_135 = V_5;
		V_5 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_135, 8));
		uint8_t* L_136 = V_6;
		uint8_t* L_137 = V_8;
		if ((!(((uintptr_t)L_136) >= ((uintptr_t)L_137))))
		{
			goto IL_0221;
		}
	}

IL_0239:
	{
		uint8_t* L_138 = V_8;
		V_6 = L_138;
		goto IL_0046;
	}

IL_0242:
	{
		uint8_t* L_139 = V_4;
		uint8_t* L_140 = ___compressed0;
		return ((int32_t)((int64_t)(intptr_t)((uint8_t*)((intptr_t)((uint8_t*)il2cpp_codegen_subtract((intptr_t)L_139, (intptr_t)L_140))/1))));
	}

IL_024b:
	{
		uint8_t* L_141 = V_4;
		uint8_t* L_142 = ___compressed0;
		return ((int32_t)((-((int64_t)(intptr_t)((uint8_t*)((intptr_t)((uint8_t*)il2cpp_codegen_subtract((intptr_t)L_141, (intptr_t)L_142))/1))))));
	}
}
// System.Byte[] LZ4Sharp.LZ4Decompressor64::Decompress(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* LZ4Decompressor64_Decompress_mBEF332235BD4BFA4F6BBEFF9CD8BE8AE932E09FA (LZ4Decompressor64_t15D10CE43F92442C46FB445A6E0972262FA746C5* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___compressed0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_2 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_3 = NULL;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___compressed0;
		NullCheck(L_0);
		V_0 = ((int32_t)(((RuntimeArray*)L_0)->max_length));
	}

IL_0004:
	{
		int32_t L_1 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_multiply(L_1, 4));
		int32_t L_2 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_2);
		V_2 = L_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = ___compressed0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = V_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = ___compressed0;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = LZ4Decompressor64_Decompress_mBBC99BDD596CDA00E2E55BE5CC908E5CC8CB3E7E(__this, L_4, L_5, ((int32_t)(((RuntimeArray*)L_6)->max_length)), NULL);
		V_1 = L_7;
		int32_t L_8 = V_1;
		if ((((int32_t)L_8) < ((int32_t)0)))
		{
			goto IL_0004;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = V_2;
		NullCheck(L_9);
		int32_t L_10 = V_1;
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_9)->max_length))) < ((int32_t)L_10)))
		{
			goto IL_0004;
		}
	}
	{
		int32_t L_11 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_11);
		V_3 = L_12;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13 = V_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14 = V_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_15 = V_3;
		NullCheck(L_15);
		Buffer_BlockCopy_mD8CF7EC96ADA7A542CCA3F3C73510624E10197A9((RuntimeArray*)L_13, 0, (RuntimeArray*)L_14, 0, ((int32_t)(((RuntimeArray*)L_15)->max_length)), NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_16 = V_3;
		return L_16;
	}
}
// System.Int32 LZ4Sharp.LZ4Decompressor64::Decompress(System.Byte[],System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LZ4Decompressor64_Decompress_m977AAD4828CC4F77C1E8BF585FFC3D774DE6C17C (LZ4Decompressor64_t15D10CE43F92442C46FB445A6E0972262FA746C5* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___compressed0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___decompressedBuffer1, const RuntimeMethod* method) 
{
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___compressed0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___decompressedBuffer1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___compressed0;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = LZ4Decompressor64_Decompress_mBBC99BDD596CDA00E2E55BE5CC908E5CC8CB3E7E(__this, L_0, L_1, ((int32_t)(((RuntimeArray*)L_2)->max_length)), NULL);
		return L_3;
	}
}
// System.Int32 LZ4Sharp.LZ4Decompressor64::Decompress(System.Byte[],System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LZ4Decompressor64_Decompress_mBBC99BDD596CDA00E2E55BE5CC908E5CC8CB3E7E (LZ4Decompressor64_t15D10CE43F92442C46FB445A6E0972262FA746C5* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___compressedBuffer0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___decompressedBuffer1, int32_t ___compressedSize2, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_1 = NULL;
	uint8_t* V_2 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_3 = NULL;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___compressedBuffer0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = L_0;
		V_1 = L_1;
		if (!L_1)
		{
			goto IL_000a;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = V_1;
		NullCheck(L_2);
		if (((int32_t)(((RuntimeArray*)L_2)->max_length)))
		{
			goto IL_000f;
		}
	}

IL_000a:
	{
		V_0 = (uint8_t*)((uintptr_t)0);
		goto IL_0018;
	}

IL_000f:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = V_1;
		NullCheck(L_3);
		V_0 = (uint8_t*)((uintptr_t)((L_3)->GetAddressAt(static_cast<il2cpp_array_size_t>(0))));
	}

IL_0018:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = ___decompressedBuffer1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = L_4;
		V_3 = L_5;
		if (!L_5)
		{
			goto IL_0022;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = V_3;
		NullCheck(L_6);
		if (((int32_t)(((RuntimeArray*)L_6)->max_length)))
		{
			goto IL_0027;
		}
	}

IL_0022:
	{
		V_2 = (uint8_t*)((uintptr_t)0);
		goto IL_0030;
	}

IL_0027:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = V_3;
		NullCheck(L_7);
		V_2 = (uint8_t*)((uintptr_t)((L_7)->GetAddressAt(static_cast<il2cpp_array_size_t>(0))));
	}

IL_0030:
	{
		uint8_t* L_8 = V_0;
		uint8_t* L_9 = V_2;
		int32_t L_10 = ___compressedSize2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = ___decompressedBuffer1;
		NullCheck(L_11);
		int32_t L_12;
		L_12 = LZ4Decompressor64_Decompress_m602A2BD4E8E163E356CF2042C45579B54609B4A5(__this, L_8, L_9, L_10, ((int32_t)(((RuntimeArray*)L_11)->max_length)), NULL);
		return L_12;
	}
}
// System.Int32 LZ4Sharp.LZ4Decompressor64::Decompress(System.Byte[],System.Int32,System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LZ4Decompressor64_Decompress_m80EECF371A0E4051889AEBCEB07E9DB4FFAC7898 (LZ4Decompressor64_t15D10CE43F92442C46FB445A6E0972262FA746C5* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___compressedBuffer0, int32_t ___compressedPosition1, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___decompressedBuffer2, int32_t ___decompressedPosition3, int32_t ___compressedSize4, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___compressedBuffer0;
		int32_t L_1 = ___compressedPosition1;
		NullCheck(L_0);
		V_1 = ((L_0)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_1)));
		uint8_t* L_2 = V_1;
		V_0 = (uint8_t*)((uintptr_t)L_2);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = ___decompressedBuffer2;
		int32_t L_4 = ___decompressedPosition3;
		NullCheck(L_3);
		V_3 = ((L_3)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_4)));
		uint8_t* L_5 = V_3;
		V_2 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint8_t* L_7 = V_2;
		int32_t L_8 = ___compressedSize4;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = ___decompressedBuffer2;
		NullCheck(L_9);
		int32_t L_10;
		L_10 = LZ4Decompressor64_Decompress_m602A2BD4E8E163E356CF2042C45579B54609B4A5(__this, L_6, L_7, L_8, ((int32_t)(((RuntimeArray*)L_9)->max_length)), NULL);
		return L_10;
	}
}
// System.Int32 LZ4Sharp.LZ4Decompressor64::Decompress(System.Byte*,System.Byte*,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LZ4Decompressor64_Decompress_m602A2BD4E8E163E356CF2042C45579B54609B4A5 (LZ4Decompressor64_t15D10CE43F92442C46FB445A6E0972262FA746C5* __this, uint8_t* ___compressedBuffer0, uint8_t* ___decompressedBuffer1, int32_t ___compressedSize2, int32_t ___maxDecompressedSize3, const RuntimeMethod* method) 
{
	int8_t* V_0 = NULL;
	SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* V_1 = NULL;
	int8_t* V_2 = NULL;
	SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* V_3 = NULL;
	uint8_t* V_4 = NULL;
	uint8_t* V_5 = NULL;
	uint8_t* V_6 = NULL;
	uint8_t* V_7 = NULL;
	uint8_t* V_8 = NULL;
	uint8_t* V_9 = NULL;
	uint8_t V_10 = 0x0;
	int32_t V_11 = 0;
	int32_t V_12 = 0;
	int32_t V_13 = 0;
	int8_t V_14 = 0x0;
	{
		SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* L_0 = __this->___m_DecArray_2;
		SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* L_1 = L_0;
		V_1 = L_1;
		if (!L_1)
		{
			goto IL_000f;
		}
	}
	{
		SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* L_2 = V_1;
		NullCheck(L_2);
		if (((int32_t)(((RuntimeArray*)L_2)->max_length)))
		{
			goto IL_0014;
		}
	}

IL_000f:
	{
		V_0 = (int8_t*)((uintptr_t)0);
		goto IL_001d;
	}

IL_0014:
	{
		SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* L_3 = V_1;
		NullCheck(L_3);
		V_0 = (int8_t*)((uintptr_t)((L_3)->GetAddressAt(static_cast<il2cpp_array_size_t>(0))));
	}

IL_001d:
	{
		SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* L_4 = __this->___m_Dec2table_3;
		SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* L_5 = L_4;
		V_3 = L_5;
		if (!L_5)
		{
			goto IL_002c;
		}
	}
	{
		SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* L_6 = V_3;
		NullCheck(L_6);
		if (((int32_t)(((RuntimeArray*)L_6)->max_length)))
		{
			goto IL_0031;
		}
	}

IL_002c:
	{
		V_2 = (int8_t*)((uintptr_t)0);
		goto IL_003a;
	}

IL_0031:
	{
		SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* L_7 = V_3;
		NullCheck(L_7);
		V_2 = (int8_t*)((uintptr_t)((L_7)->GetAddressAt(static_cast<il2cpp_array_size_t>(0))));
	}

IL_003a:
	{
		uint8_t* L_8 = ___compressedBuffer0;
		V_4 = L_8;
		uint8_t* L_9 = V_4;
		int32_t L_10 = ___compressedSize2;
		V_5 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_9, L_10));
		uint8_t* L_11 = ___decompressedBuffer1;
		V_7 = L_11;
		uint8_t* L_12 = V_7;
		int32_t L_13 = ___maxDecompressedSize3;
		V_8 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_12, L_13));
		goto IL_026a;
	}

IL_0052:
	{
		uint8_t* L_14 = V_4;
		uint8_t* L_15 = L_14;
		V_4 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_15, 1));
		int32_t L_16 = *((uint8_t*)L_15);
		V_10 = (uint8_t)L_16;
		uint8_t L_17 = V_10;
		int32_t L_18 = ((int32_t)((int32_t)L_17>>4));
		V_11 = L_18;
		if ((!(((uint64_t)((int64_t)L_18)) == ((uint64_t)((int64_t)((int32_t)15))))))
		{
			goto IL_0092;
		}
	}
	{
		V_12 = ((int32_t)255);
		goto IL_0083;
	}

IL_0072:
	{
		uint8_t* L_19 = V_4;
		uint8_t* L_20 = L_19;
		V_4 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_20, 1));
		int32_t L_21 = *((uint8_t*)L_20);
		V_12 = L_21;
		int32_t L_22 = V_11;
		int32_t L_23 = V_12;
		V_11 = ((int32_t)il2cpp_codegen_add(L_22, L_23));
	}

IL_0083:
	{
		uint8_t* L_24 = V_4;
		uint8_t* L_25 = V_5;
		if ((!(((uintptr_t)L_24) < ((uintptr_t)L_25))))
		{
			goto IL_0092;
		}
	}
	{
		int32_t L_26 = V_12;
		if ((((int32_t)L_26) == ((int32_t)((int32_t)255))))
		{
			goto IL_0072;
		}
	}

IL_0092:
	{
		uint8_t* L_27 = V_7;
		int32_t L_28 = V_11;
		V_9 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_27, L_28));
		uint8_t* L_29 = V_9;
		uint8_t* L_30 = V_8;
		if ((!(((uintptr_t)L_29) <= ((uintptr_t)((uint8_t*)il2cpp_codegen_subtract((intptr_t)L_30, 8))))))
		{
			goto IL_00ac;
		}
	}
	{
		uint8_t* L_31 = V_4;
		int32_t L_32 = V_11;
		uint8_t* L_33 = V_5;
		if ((!(((uintptr_t)((uint8_t*)il2cpp_codegen_add((intptr_t)L_31, L_32))) > ((uintptr_t)((uint8_t*)il2cpp_codegen_subtract((intptr_t)L_33, 8))))))
		{
			goto IL_00e9;
		}
	}

IL_00ac:
	{
		uint8_t* L_34 = V_9;
		uint8_t* L_35 = V_8;
		if ((!(((uintptr_t)L_34) <= ((uintptr_t)L_35))))
		{
			goto IL_027c;
		}
	}
	{
		uint8_t* L_36 = V_4;
		int32_t L_37 = V_11;
		uint8_t* L_38 = V_5;
		if ((!(((uintptr_t)((uint8_t*)il2cpp_codegen_add((intptr_t)L_36, L_37))) <= ((uintptr_t)L_38))))
		{
			goto IL_027c;
		}
	}
	{
		uint8_t* L_39 = V_7;
		uint8_t* L_40 = V_4;
		int32_t L_41 = V_11;
		LZ4Util_CopyMemory_mE7FF2466FFC0EFEDA278A55F7222EDB2BBE84EDA(L_39, L_40, ((int64_t)L_41), NULL);
		uint8_t* L_42 = V_7;
		int32_t L_43 = V_11;
		V_7 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_42, L_43));
		uint8_t* L_44 = V_4;
		int32_t L_45 = V_11;
		V_4 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_44, L_45));
		uint8_t* L_46 = V_4;
		uint8_t* L_47 = V_5;
		if ((!(((uintptr_t)L_46) < ((uintptr_t)L_47))))
		{
			goto IL_0273;
		}
	}
	{
		goto IL_027c;
	}

IL_00e9:
	{
		uint8_t* L_48 = V_7;
		uint8_t* L_49 = V_4;
		int64_t L_50 = *((int64_t*)L_49);
		*((int64_t*)L_48) = (int64_t)L_50;
		uint8_t* L_51 = V_7;
		V_7 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_51, 8));
		uint8_t* L_52 = V_4;
		V_4 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_52, 8));
		uint8_t* L_53 = V_7;
		uint8_t* L_54 = V_9;
		if ((!(((uintptr_t)L_53) >= ((uintptr_t)L_54))))
		{
			goto IL_00e9;
		}
	}
	{
		uint8_t* L_55 = V_4;
		uint8_t* L_56 = V_7;
		uint8_t* L_57 = V_9;
		V_4 = ((uint8_t*)il2cpp_codegen_subtract((intptr_t)L_55, ((intptr_t)((int64_t)(intptr_t)((uint8_t*)((intptr_t)((uint8_t*)il2cpp_codegen_subtract((intptr_t)L_56, (intptr_t)L_57))/1))))));
		uint8_t* L_58 = V_9;
		V_7 = L_58;
		uint8_t* L_59 = V_9;
		uint8_t* L_60 = V_4;
		int32_t L_61 = *((uint16_t*)L_60);
		V_6 = ((uint8_t*)il2cpp_codegen_subtract((intptr_t)L_59, L_61));
		uint8_t* L_62 = V_4;
		V_4 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_62, 2));
		uint8_t* L_63 = V_6;
		uint8_t* L_64 = ___decompressedBuffer1;
		if ((!(((uintptr_t)L_63) >= ((uintptr_t)L_64))))
		{
			goto IL_027c;
		}
	}
	{
		uint8_t L_65 = V_10;
		int32_t L_66 = ((int32_t)((int32_t)L_65&((int32_t)15)));
		V_11 = L_66;
		if ((!(((uint64_t)((int64_t)L_66)) == ((uint64_t)((int64_t)((int32_t)15))))))
		{
			goto IL_0159;
		}
	}
	{
		goto IL_0153;
	}

IL_0139:
	{
		uint8_t* L_67 = V_4;
		uint8_t* L_68 = L_67;
		V_4 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_68, 1));
		int32_t L_69 = *((uint8_t*)L_68);
		V_13 = L_69;
		int32_t L_70 = V_11;
		int32_t L_71 = V_13;
		V_11 = ((int32_t)il2cpp_codegen_add(L_70, L_71));
		int32_t L_72 = V_13;
		if ((!(((uint32_t)L_72) == ((uint32_t)((int32_t)255)))))
		{
			goto IL_0159;
		}
	}

IL_0153:
	{
		uint8_t* L_73 = V_4;
		uint8_t* L_74 = V_5;
		if ((!(((uintptr_t)L_73) >= ((uintptr_t)L_74))))
		{
			goto IL_0139;
		}
	}

IL_0159:
	{
		uint8_t* L_75 = V_7;
		uint8_t* L_76 = V_6;
		if ((((int64_t)((int64_t)(intptr_t)((uint8_t*)((intptr_t)((uint8_t*)il2cpp_codegen_subtract((intptr_t)L_75, (intptr_t)L_76))/1)))) >= ((int64_t)((int64_t)8))))
		{
			goto IL_01d9;
		}
	}
	{
		int8_t* L_77 = V_2;
		uint8_t* L_78 = V_7;
		uint8_t* L_79 = V_6;
		int32_t L_80 = *((int8_t*)((int8_t*)il2cpp_codegen_add((intptr_t)L_77, ((intptr_t)((int64_t)(intptr_t)((uint8_t*)((intptr_t)((uint8_t*)il2cpp_codegen_subtract((intptr_t)L_78, (intptr_t)L_79))/1)))))));
		V_14 = (int8_t)L_80;
		uint8_t* L_81 = V_7;
		uint8_t* L_82 = L_81;
		V_7 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_82, 1));
		uint8_t* L_83 = V_6;
		uint8_t* L_84 = L_83;
		V_6 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_84, 1));
		int32_t L_85 = *((uint8_t*)L_84);
		*((int8_t*)L_82) = (int8_t)L_85;
		uint8_t* L_86 = V_7;
		uint8_t* L_87 = L_86;
		V_7 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_87, 1));
		uint8_t* L_88 = V_6;
		uint8_t* L_89 = L_88;
		V_6 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_89, 1));
		int32_t L_90 = *((uint8_t*)L_89);
		*((int8_t*)L_87) = (int8_t)L_90;
		uint8_t* L_91 = V_7;
		uint8_t* L_92 = L_91;
		V_7 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_92, 1));
		uint8_t* L_93 = V_6;
		uint8_t* L_94 = L_93;
		V_6 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_94, 1));
		int32_t L_95 = *((uint8_t*)L_94);
		*((int8_t*)L_92) = (int8_t)L_95;
		uint8_t* L_96 = V_7;
		uint8_t* L_97 = L_96;
		V_7 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_97, 1));
		uint8_t* L_98 = V_6;
		uint8_t* L_99 = L_98;
		V_6 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_99, 1));
		int32_t L_100 = *((uint8_t*)L_99);
		*((int8_t*)L_97) = (int8_t)L_100;
		uint8_t* L_101 = V_6;
		int8_t* L_102 = V_0;
		uint8_t* L_103 = V_7;
		uint8_t* L_104 = V_6;
		int32_t L_105 = *((int8_t*)((int8_t*)il2cpp_codegen_add((intptr_t)L_102, ((intptr_t)((int64_t)(intptr_t)((uint8_t*)((intptr_t)((uint8_t*)il2cpp_codegen_subtract((intptr_t)L_103, (intptr_t)L_104))/1)))))));
		V_6 = ((uint8_t*)il2cpp_codegen_subtract((intptr_t)L_101, L_105));
		uint8_t* L_106 = V_7;
		uint8_t* L_107 = V_6;
		int32_t L_108 = *((uint32_t*)L_107);
		*((int32_t*)L_106) = (int32_t)L_108;
		uint8_t* L_109 = V_7;
		V_7 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_109, 4));
		uint8_t* L_110 = V_6;
		int8_t L_111 = V_14;
		V_6 = ((uint8_t*)il2cpp_codegen_subtract((intptr_t)L_110, (int32_t)L_111));
		goto IL_01eb;
	}

IL_01d9:
	{
		uint8_t* L_112 = V_7;
		uint8_t* L_113 = V_6;
		int64_t L_114 = *((int64_t*)L_113);
		*((int64_t*)L_112) = (int64_t)L_114;
		uint8_t* L_115 = V_7;
		V_7 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_115, 8));
		uint8_t* L_116 = V_6;
		V_6 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_116, 8));
	}

IL_01eb:
	{
		uint8_t* L_117 = V_7;
		int32_t L_118 = V_11;
		V_9 = ((uint8_t*)il2cpp_codegen_subtract((intptr_t)((uint8_t*)il2cpp_codegen_add((intptr_t)L_117, L_118)), 4));
		uint8_t* L_119 = V_9;
		uint8_t* L_120 = V_8;
		if ((!(((uintptr_t)L_119) > ((uintptr_t)((uint8_t*)il2cpp_codegen_subtract((intptr_t)L_120, 8))))))
		{
			goto IL_0248;
		}
	}
	{
		uint8_t* L_121 = V_9;
		uint8_t* L_122 = V_8;
		if ((!(((uintptr_t)L_121) <= ((uintptr_t)L_122))))
		{
			goto IL_027c;
		}
	}
	{
		uint8_t* L_123 = V_7;
		uint8_t* L_124 = V_8;
		if ((!(((uintptr_t)L_123) < ((uintptr_t)((uint8_t*)il2cpp_codegen_subtract((intptr_t)L_124, 8))))))
		{
			goto IL_0236;
		}
	}

IL_020a:
	{
		uint8_t* L_125 = V_7;
		uint8_t* L_126 = V_6;
		int64_t L_127 = *((int64_t*)L_126);
		*((int64_t*)L_125) = (int64_t)L_127;
		uint8_t* L_128 = V_7;
		V_7 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_128, 8));
		uint8_t* L_129 = V_6;
		V_6 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_129, 8));
		uint8_t* L_130 = V_7;
		uint8_t* L_131 = V_8;
		if ((!(((uintptr_t)L_130) >= ((uintptr_t)((uint8_t*)il2cpp_codegen_subtract((intptr_t)L_131, 8))))))
		{
			goto IL_020a;
		}
	}
	{
		goto IL_0236;
	}

IL_0226:
	{
		uint8_t* L_132 = V_7;
		uint8_t* L_133 = L_132;
		V_7 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_133, 1));
		uint8_t* L_134 = V_6;
		uint8_t* L_135 = L_134;
		V_6 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_135, 1));
		int32_t L_136 = *((uint8_t*)L_135);
		*((int8_t*)L_133) = (int8_t)L_136;
	}

IL_0236:
	{
		uint8_t* L_137 = V_7;
		uint8_t* L_138 = V_9;
		if ((!(((uintptr_t)L_137) >= ((uintptr_t)L_138))))
		{
			goto IL_0226;
		}
	}
	{
		uint8_t* L_139 = V_9;
		V_7 = L_139;
		uint8_t* L_140 = V_7;
		uint8_t* L_141 = V_8;
		if ((!(((uintptr_t)L_140) == ((uintptr_t)L_141))))
		{
			goto IL_026a;
		}
	}
	{
		goto IL_027c;
	}

IL_0248:
	{
		uint8_t* L_142 = V_7;
		uint8_t* L_143 = V_9;
		if ((!(((uintptr_t)L_142) < ((uintptr_t)L_143))))
		{
			goto IL_0266;
		}
	}

IL_024e:
	{
		uint8_t* L_144 = V_7;
		uint8_t* L_145 = V_6;
		int64_t L_146 = *((int64_t*)L_145);
		*((int64_t*)L_144) = (int64_t)L_146;
		uint8_t* L_147 = V_7;
		V_7 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_147, 8));
		uint8_t* L_148 = V_6;
		V_6 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_148, 8));
		uint8_t* L_149 = V_7;
		uint8_t* L_150 = V_9;
		if ((!(((uintptr_t)L_149) >= ((uintptr_t)L_150))))
		{
			goto IL_024e;
		}
	}

IL_0266:
	{
		uint8_t* L_151 = V_9;
		V_7 = L_151;
	}

IL_026a:
	{
		uint8_t* L_152 = V_4;
		uint8_t* L_153 = V_5;
		if ((!(((uintptr_t)L_152) >= ((uintptr_t)L_153))))
		{
			goto IL_0052;
		}
	}

IL_0273:
	{
		uint8_t* L_154 = V_7;
		uint8_t* L_155 = ___decompressedBuffer1;
		return ((int32_t)((int64_t)(intptr_t)((uint8_t*)((intptr_t)((uint8_t*)il2cpp_codegen_subtract((intptr_t)L_154, (intptr_t)L_155))/1))));
	}

IL_027c:
	{
		uint8_t* L_156 = V_4;
		uint8_t* L_157 = ___compressedBuffer0;
		return ((int32_t)((-((int64_t)(intptr_t)((uint8_t*)((intptr_t)((uint8_t*)il2cpp_codegen_subtract((intptr_t)L_156, (intptr_t)L_157))/1))))));
	}
}
// System.Void LZ4Sharp.LZ4Decompressor64::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LZ4Decompressor64__ctor_m18055D68CBD6CCAD7C02F32DAAF983A9903AFDEB (LZ4Decompressor64_t15D10CE43F92442C46FB445A6E0972262FA746C5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_t17805B5F7C0D0D788494C2B7E9223B9DDD566C70____478302FFD7FDF162B416C032A124F955DCC5DAE1_1_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_t17805B5F7C0D0D788494C2B7E9223B9DDD566C70____B8D0D426F363E914916FE99650BC2E43466675B4_3_FieldInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* L_0 = (SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913*)(SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913*)SZArrayNew(SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913_il2cpp_TypeInfo_var, (uint32_t)8);
		SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* L_1 = L_0;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_2 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t17805B5F7C0D0D788494C2B7E9223B9DDD566C70____478302FFD7FDF162B416C032A124F955DCC5DAE1_1_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_mE10C3436BA703E4D9D41B3F8F365E4C34F9926EF((RuntimeArray*)L_1, L_2, NULL);
		__this->___m_DecArray_2 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_DecArray_2), (void*)L_1);
		SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* L_3 = (SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913*)(SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913*)SZArrayNew(SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913_il2cpp_TypeInfo_var, (uint32_t)8);
		SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* L_4 = L_3;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_5 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t17805B5F7C0D0D788494C2B7E9223B9DDD566C70____B8D0D426F363E914916FE99650BC2E43466675B4_3_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_mE10C3436BA703E4D9D41B3F8F365E4C34F9926EF((RuntimeArray*)L_4, L_5, NULL);
		__this->___m_Dec2table_3 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Dec2table_3), (void*)L_4);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void LZ4Sharp.LZ4Decompressor64::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LZ4Decompressor64__cctor_mDC1FB7F3223332EFD81EF7A1F33C6A8D72750A22 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LZ4Decompressor64_t15D10CE43F92442C46FB445A6E0972262FA746C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_t17805B5F7C0D0D788494C2B7E9223B9DDD566C70____10B36DCA5461BA88E704514784312418275EDD4E_0_FieldInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)64));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = L_0;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_2 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t17805B5F7C0D0D788494C2B7E9223B9DDD566C70____10B36DCA5461BA88E704514784312418275EDD4E_0_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_mE10C3436BA703E4D9D41B3F8F365E4C34F9926EF((RuntimeArray*)L_1, L_2, NULL);
		((LZ4Decompressor64_t15D10CE43F92442C46FB445A6E0972262FA746C5_StaticFields*)il2cpp_codegen_static_fields_for(LZ4Decompressor64_t15D10CE43F92442C46FB445A6E0972262FA746C5_il2cpp_TypeInfo_var))->___DeBruijnBytePos_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((LZ4Decompressor64_t15D10CE43F92442C46FB445A6E0972262FA746C5_StaticFields*)il2cpp_codegen_static_fields_for(LZ4Decompressor64_t15D10CE43F92442C46FB445A6E0972262FA746C5_il2cpp_TypeInfo_var))->___DeBruijnBytePos_1), (void*)L_1);
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
// LZ4Sharp.ILZ4Decompressor LZ4Sharp.LZ4DecompressorFactory::CreateNew()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* LZ4DecompressorFactory_CreateNew_m476E75516607ED8163A41D4FF8EC3470FE815CD0 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LZ4Decompressor32_t687B8355F891786DF2E3030D1F8371C6655A603D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LZ4Decompressor64_t15D10CE43F92442C46FB445A6E0972262FA746C5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0;
		L_0 = IntPtr_get_Size_mF11301B9A665D54B8DC89DC6AFE37728B91E6F10(NULL);
		if ((!(((uint32_t)L_0) == ((uint32_t)4))))
		{
			goto IL_000e;
		}
	}
	{
		LZ4Decompressor32_t687B8355F891786DF2E3030D1F8371C6655A603D* L_1 = (LZ4Decompressor32_t687B8355F891786DF2E3030D1F8371C6655A603D*)il2cpp_codegen_object_new(LZ4Decompressor32_t687B8355F891786DF2E3030D1F8371C6655A603D_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		LZ4Decompressor32__ctor_mF15FD7D6C30D2E59DD95B3FAF053EA96E4011FFC(L_1, NULL);
		return L_1;
	}

IL_000e:
	{
		LZ4Decompressor64_t15D10CE43F92442C46FB445A6E0972262FA746C5* L_2 = (LZ4Decompressor64_t15D10CE43F92442C46FB445A6E0972262FA746C5*)il2cpp_codegen_object_new(LZ4Decompressor64_t15D10CE43F92442C46FB445A6E0972262FA746C5_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		LZ4Decompressor64__ctor_m18055D68CBD6CCAD7C02F32DAAF983A9903AFDEB(L_2, NULL);
		return L_2;
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
// System.Void LZ4Sharp.LZ4Util::CopyMemory(System.Byte*,System.Byte*,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LZ4Util_CopyMemory_mE7FF2466FFC0EFEDA278A55F7222EDB2BBE84EDA (uint8_t* ___dst0, uint8_t* ___src1, int64_t ___length2, const RuntimeMethod* method) 
{
	{
		goto IL_0025;
	}

IL_0002:
	{
		uint8_t* L_0 = ___dst0;
		uint8_t* L_1 = ___src1;
		int64_t L_2 = *((int64_t*)L_1);
		*((int64_t*)L_0) = (int64_t)L_2;
		uint8_t* L_3 = ___dst0;
		___dst0 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_3, 8));
		uint8_t* L_4 = ___src1;
		___src1 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_4, 8));
		uint8_t* L_5 = ___dst0;
		uint8_t* L_6 = ___src1;
		int64_t L_7 = *((int64_t*)L_6);
		*((int64_t*)L_5) = (int64_t)L_7;
		uint8_t* L_8 = ___dst0;
		___dst0 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_8, 8));
		uint8_t* L_9 = ___src1;
		___src1 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_9, 8));
		int64_t L_10 = ___length2;
		___length2 = ((int64_t)il2cpp_codegen_subtract(L_10, ((int64_t)((int32_t)16))));
	}

IL_0025:
	{
		int64_t L_11 = ___length2;
		if ((((int64_t)L_11) >= ((int64_t)((int64_t)((int32_t)16)))))
		{
			goto IL_0002;
		}
	}
	{
		int64_t L_12 = ___length2;
		if ((((int64_t)L_12) < ((int64_t)((int64_t)8))))
		{
			goto IL_0044;
		}
	}
	{
		uint8_t* L_13 = ___dst0;
		uint8_t* L_14 = ___src1;
		int64_t L_15 = *((int64_t*)L_14);
		*((int64_t*)L_13) = (int64_t)L_15;
		uint8_t* L_16 = ___dst0;
		___dst0 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_16, 8));
		uint8_t* L_17 = ___src1;
		___src1 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_17, 8));
		int64_t L_18 = ___length2;
		___length2 = ((int64_t)il2cpp_codegen_subtract(L_18, ((int64_t)8)));
	}

IL_0044:
	{
		int64_t L_19 = ___length2;
		if ((((int64_t)L_19) < ((int64_t)((int64_t)4))))
		{
			goto IL_005d;
		}
	}
	{
		uint8_t* L_20 = ___dst0;
		uint8_t* L_21 = ___src1;
		int32_t L_22 = *((uint32_t*)L_21);
		*((int32_t*)L_20) = (int32_t)L_22;
		uint8_t* L_23 = ___dst0;
		___dst0 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_23, 4));
		uint8_t* L_24 = ___src1;
		___src1 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_24, 4));
		int64_t L_25 = ___length2;
		___length2 = ((int64_t)il2cpp_codegen_subtract(L_25, ((int64_t)4)));
	}

IL_005d:
	{
		int64_t L_26 = ___length2;
		if ((((int64_t)L_26) < ((int64_t)((int64_t)2))))
		{
			goto IL_0076;
		}
	}
	{
		uint8_t* L_27 = ___dst0;
		uint8_t* L_28 = ___src1;
		int32_t L_29 = *((uint16_t*)L_28);
		*((int16_t*)L_27) = (int16_t)L_29;
		uint8_t* L_30 = ___dst0;
		___dst0 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_30, 2));
		uint8_t* L_31 = ___src1;
		___src1 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_31, 2));
		int64_t L_32 = ___length2;
		___length2 = ((int64_t)il2cpp_codegen_subtract(L_32, ((int64_t)2)));
	}

IL_0076:
	{
		int64_t L_33 = ___length2;
		if (!L_33)
		{
			goto IL_007d;
		}
	}
	{
		uint8_t* L_34 = ___dst0;
		uint8_t* L_35 = ___src1;
		int32_t L_36 = *((uint8_t*)L_35);
		*((int8_t*)L_34) = (int8_t)L_36;
	}

IL_007d:
	{
		return;
	}
}
// System.Void LZ4Sharp.LZ4Util::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LZ4Util__ctor_mD96BF1E56993E98FCE1F589C1F530D9813296677 (LZ4Util_tB57EF834298D34C40B14EEFA8B839154E4BDB51E* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
