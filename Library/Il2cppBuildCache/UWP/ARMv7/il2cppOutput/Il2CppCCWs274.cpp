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

// System.Collections.Generic.Dictionary`2<System.Type,System.Object>
struct Dictionary_2_t954AEC357FE7190582B8255D4ACEF81F5E94A6A5;
// System.Collections.Generic.List`1<System.Text.RegularExpressions.Match>
struct List_1_t425196350A2888B269895DE1C865A3E7E4E2C9B6;
// System.Threading.Tasks.Task`1<System.Int32>
struct Task_1_t4C228DE57804012969575431CFF12D57C875552D;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// UniRx.IMessageBroker
struct IMessageBroker_tF026B369AF6DC73F3EC60F5509E0CD1B6D1F8705;
// System.Runtime.Remoting.Messaging.IMethodMessage
struct IMethodMessage_t21F467ACE7B9F75715E33DDA32827935CC3D32D7;
// System.Buffers.IPinnable
struct IPinnable_tA3989EA495C0118966BAAF8848C0009947BB49C0;
// OpenCvSharp.Mat
struct Mat_tA6670B61E48BB3D77E39E1299B8DAE00AAC1D4DE;
// System.Text.RegularExpressions.Regex
struct Regex_tE773142C2BE45C5D362B0F815AFF831707A51772;
// System.Threading.SemaphoreSlim
struct SemaphoreSlim_t0D5CB5685D9BFA5BF95CEC6E7395490F933E8DB2;
// System.String
struct String_t;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// OpenCvSharp.Mat/ColExprIndexer
struct ColExprIndexer_t65FB4C7E258DB30905ABF1ABB4FD463F5D634A07;
// OpenCvSharp.Mat/ColIndexer
struct ColIndexer_tD1E32BF4DFBD130EA0A93833D7EEFE241DCEF668;
// OpenCvSharp.Mat/MatExprIndexer
struct MatExprIndexer_tB64CDE6A7443CDD5A196B278BEB4E5BE9B6F9B92;
// OpenCvSharp.Mat/RowExprIndexer
struct RowExprIndexer_tFB0C258EBBEC534D72ACC58CF0AFB2F172A39BB2;
// OpenCvSharp.Mat/RowIndexer
struct RowIndexer_t4CD4C726A6D6CDB3E9283B4821460A138800DBB0;
// OpenCvSharp.MatExpr/ColIndexer
struct ColIndexer_tA7C4A3CD8BB6E7679504C1CF2383B50393A93AD1;
// OpenCvSharp.MatExpr/RowIndexer
struct RowIndexer_t0A28F8060696DAE5156800BE04DF5136ABACC1E9;
// System.IO.Stream/ReadWriteTask
struct ReadWriteTask_t0821BF49EE38596C7734E86E1A6A39D769BE2C05;

IL2CPP_EXTERN_C RuntimeClass* Matrix4x4_t5F5E1A25D90A40678520AA0DA0C8C4D25E9DD072_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Matrix4x4_tC96BCD78BE2477FC55F35FFEA626330647FC8312_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
struct DateTime_tB8F64A9E141FDC202144C06531C4E7D4B6C59CB0;
struct Guid_t;
struct IBindableIterator_t63CCD2268CEE8AFAB68518869D47C5BDAF72962F;
struct IBindableVectorView_tCB96F9780FD45A9A323C8212A53608C8A13784B3;
struct IIterator_1_t1385D68DD78DE574859F9B97BA2D44B82B20F491;
struct IIterator_1_t48E0DED97AB1D2133B95C8B4EF2944BA7D206925;
struct IIterator_1_t5DCB8CA63A25200B119FDF7632313A6EDB756A49;
struct IIterator_1_t61E394E90ADD9DF710E54EBD34636E513D0A7ED9;
struct IIterator_1_t8B60F2B4C43F5A9BF9B71127BCFFA83FBED83093;
struct IIterator_1_tCD324A8CB8C6E90BDFF46D5256D8DDCC46C41274;
struct IIterator_1_tF583809CCB8352594ECF618514369A62FB02C08B;
struct Point_tC7E550DD1555DAAAA7CA4F85656FA70F81C23B18;
struct Rect_t30CC1879BAAB779EAEA49A91ACA636D57101EE48;
struct Size_t463A0E21871C29D10F032F5EF3EAF615806D8A05;
struct TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A;


IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Windows.Foundation.Collections.IIterable`1<System.Byte>
struct NOVTABLE IIterable_1_t1284FAE937940E4ED10A988E6902A88D0EABB19A : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m43CD5A34ABEF4766A062BF3BAC919E85269CA039(IIterator_1_t61E394E90ADD9DF710E54EBD34636E513D0A7ED9** comReturnValue) = 0;
};
// Windows.Foundation.Collections.IIterable`1<System.Double>
struct NOVTABLE IIterable_1_tDCFB8A1343B7EBC250B097A83D6AE3769FD41867 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IIterable_1_First_mC5C88C9A627725F920A024EC5206C5709195FA68(IIterator_1_t8B60F2B4C43F5A9BF9B71127BCFFA83FBED83093** comReturnValue) = 0;
};
// Windows.Foundation.Collections.IIterable`1<System.Int16>
struct NOVTABLE IIterable_1_t05ECB6413006190415595FAF988F7FC58B68C0E4 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m6667194B100A1F3FD8CF7F2152E82FACFD94A71A(IIterator_1_tF583809CCB8352594ECF618514369A62FB02C08B** comReturnValue) = 0;
};
// Windows.Foundation.Collections.IIterable`1<System.Int32>
struct NOVTABLE IIterable_1_tA41E013D75239E8CF5D90C342477FB03D8D477EC : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m78139ADFF5FE80ABD7C852457E456C05CF261D52(IIterator_1_t48E0DED97AB1D2133B95C8B4EF2944BA7D206925** comReturnValue) = 0;
};
// Windows.Foundation.Collections.IIterable`1<System.Object>
struct NOVTABLE IIterable_1_t19EB3EB244CE5A0D42C41D17F13AA3B06D3C850D : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m3C4CBD4CBFF5D217BC350258F4FA9D1AC8B7F76C(IIterator_1_tCD324A8CB8C6E90BDFF46D5256D8DDCC46C41274** comReturnValue) = 0;
};
// Windows.Foundation.Collections.IIterable`1<System.Single>
struct NOVTABLE IIterable_1_tC301F3168E128FAB21A5F6FC8662F4C2F1FCEE6D : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m1A1B79CA6ECFBBBAF132F733DC5351CB15F47B04(IIterator_1_t1385D68DD78DE574859F9B97BA2D44B82B20F491** comReturnValue) = 0;
};
// Windows.Foundation.Collections.IIterable`1<System.UInt16>
struct NOVTABLE IIterable_1_tF1076E2F7D7B74FA27141A3CBFD8034AB582D4CB : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IIterable_1_First_mCCFFE98FE15F64FE2036DCD0E36D187CA86C0D88(IIterator_1_t5DCB8CA63A25200B119FDF7632313A6EDB756A49** comReturnValue) = 0;
};
// Windows.Foundation.Collections.IVectorView`1<System.Object>
struct NOVTABLE IVectorView_1_t80C57016D46A1954BF56BD02FC3DAA7C0D85FFD6 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetAt_mDA227019DDF2A9D2861B27ED32C865B867604223(uint32_t ___index0, Il2CppIInspectable** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_get_Size_m16DC683E3A92C0E6840B57EBFC92D3ADBF50202E(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_IndexOf_mD1B3ADF8F80828EF947882105A77BBC892263DA1(Il2CppIInspectable* ___value0, uint32_t* ___index1, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetMany_m36C9D15C0138BF2C23D62E2457C09DC722A29DA9(uint32_t ___startIndex0, uint32_t ___items1ArraySize, Il2CppIInspectable** ___items1, uint32_t* comReturnValue) = 0;
};
// Windows.UI.Xaml.Interop.IBindableIterable
struct NOVTABLE IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_mE23AC28EC9ADCDD2688247217CF40C800E780B97(IBindableIterator_t63CCD2268CEE8AFAB68518869D47C5BDAF72962F** comReturnValue) = 0;
};
// Windows.UI.Xaml.Interop.IBindableVector
struct NOVTABLE IBindableVector_tAE2FC72291BFE4E2FE6FCE88670236BBA429833A : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IBindableVector_GetAt_mBCD1ADF8844CDBB36A56C8CD9391067180851BD9(uint32_t ___index0, Il2CppIInspectable** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IBindableVector_get_Size_m835757C5C2780FB18C73A2D34B0C74CB9C24FAC6(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IBindableVector_GetView_m0EDD4048AE0A3404A66AD7202161F560DEE9D87F(IBindableVectorView_tCB96F9780FD45A9A323C8212A53608C8A13784B3** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IBindableVector_IndexOf_m6EA6FC052533AB43E049ECDFE20789943A798907(Il2CppIInspectable* ___value0, uint32_t* ___index1, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IBindableVector_SetAt_m288413F2AE9C2F853898187EF0F0E5087FD934D0(uint32_t ___index0, Il2CppIInspectable* ___value1) = 0;
	virtual il2cpp_hresult_t STDCALL IBindableVector_InsertAt_m919BCD142F2F5F1CBD4ABCB9E94113B65C79D431(uint32_t ___index0, Il2CppIInspectable* ___value1) = 0;
	virtual il2cpp_hresult_t STDCALL IBindableVector_RemoveAt_m54B727C7320AF1552F630DD4E98DCD7D3CB04538(uint32_t ___index0) = 0;
	virtual il2cpp_hresult_t STDCALL IBindableVector_Append_mAC3F455B05DB32D9681767CD442DEACE2EE7348E(Il2CppIInspectable* ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IBindableVector_RemoveAtEnd_mD4F1D0442F5A0A74C29E5DBCAFB1BFF14E40FC71() = 0;
	virtual il2cpp_hresult_t STDCALL IBindableVector_Clear_m3353A716402EE8270D6D3F2A02863714D7787B7C() = 0;
};
// Windows.Foundation.IClosable
struct NOVTABLE IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88() = 0;
};

// OpenCVForUnity.DisposableObject
struct DisposableObject_t9369B3BFCCE5F93E6CDAB660174DA51EF4708C51  : public RuntimeObject
{
	// System.Boolean OpenCVForUnity.DisposableObject::<IsDisposed>k__BackingField
	bool ___U3CIsDisposedU3Ek__BackingField_0;
	// System.Boolean OpenCVForUnity.DisposableObject::<IsEnabledDispose>k__BackingField
	bool ___U3CIsEnabledDisposeU3Ek__BackingField_1;
};

// System.MarshalByRefObject
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE  : public RuntimeObject
{
	// System.Object System.MarshalByRefObject::_identity
	RuntimeObject* ____identity_0;
};
// Native definition for P/Invoke marshalling of System.MarshalByRefObject
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshaled_pinvoke
{
	Il2CppIUnknown* ____identity_0;
};
// Native definition for COM marshalling of System.MarshalByRefObject
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshaled_com
{
	Il2CppIUnknown* ____identity_0;
};

// OpenCvSharp.MatProxy
struct MatProxy_t6DC4CCFE1D1D7B9AB4B4CD91C5FDBFDBD26803B8  : public RuntimeObject
{
	// System.Byte[] OpenCvSharp.MatProxy::<ImageData>k__BackingField
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___U3CImageDataU3Ek__BackingField_0;
};

// System.Text.RegularExpressions.MatchCollection
struct MatchCollection_t84805BAED3D556A405EE3FD165856045026106BC  : public RuntimeObject
{
	// System.Text.RegularExpressions.Regex System.Text.RegularExpressions.MatchCollection::_regex
	Regex_tE773142C2BE45C5D362B0F815AFF831707A51772* ____regex_0;
	// System.Collections.Generic.List`1<System.Text.RegularExpressions.Match> System.Text.RegularExpressions.MatchCollection::_matches
	List_1_t425196350A2888B269895DE1C865A3E7E4E2C9B6* ____matches_1;
	// System.Boolean System.Text.RegularExpressions.MatchCollection::_done
	bool ____done_2;
	// System.String System.Text.RegularExpressions.MatchCollection::_input
	String_t* ____input_3;
	// System.Int32 System.Text.RegularExpressions.MatchCollection::_beginning
	int32_t ____beginning_4;
	// System.Int32 System.Text.RegularExpressions.MatchCollection::_length
	int32_t ____length_5;
	// System.Int32 System.Text.RegularExpressions.MatchCollection::_startat
	int32_t ____startat_6;
	// System.Int32 System.Text.RegularExpressions.MatchCollection::_prevlen
	int32_t ____prevlen_7;
};

// UniRx.MessageBroker
struct MessageBroker_t2EED86E65029228CD37BB4E9637E3523496AEA55  : public RuntimeObject
{
	// System.Boolean UniRx.MessageBroker::isDisposed
	bool ___isDisposed_1;
	// System.Collections.Generic.Dictionary`2<System.Type,System.Object> UniRx.MessageBroker::notifiers
	Dictionary_2_t954AEC357FE7190582B8255D4ACEF81F5E94A6A5* ___notifiers_2;
};

struct MessageBroker_t2EED86E65029228CD37BB4E9637E3523496AEA55_StaticFields
{
	// UniRx.IMessageBroker UniRx.MessageBroker::Default
	RuntimeObject* ___Default_0;
};

// System.Runtime.Remoting.Messaging.MessageDictionary
struct MessageDictionary_t479539639D4741378256CE3246F141A0FF930114  : public RuntimeObject
{
	// System.Collections.IDictionary System.Runtime.Remoting.Messaging.MessageDictionary::_internalProperties
	RuntimeObject* ____internalProperties_0;
	// System.Runtime.Remoting.Messaging.IMethodMessage System.Runtime.Remoting.Messaging.MessageDictionary::_message
	RuntimeObject* ____message_1;
	// System.String[] System.Runtime.Remoting.Messaging.MessageDictionary::_methodKeys
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ____methodKeys_2;
	// System.Boolean System.Runtime.Remoting.Messaging.MessageDictionary::_ownProperties
	bool ____ownProperties_3;
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

// Windows.Foundation.DateTime
struct DateTime_tB8F64A9E141FDC202144C06531C4E7D4B6C59CB0 
{
	// System.Int64 Windows.Foundation.DateTime::UniversalTime
	int64_t ___UniversalTime_0;
};

// System.Guid
struct Guid_t 
{
	// System.Int32 System.Guid::_a
	int32_t ____a_1;
	// System.Int16 System.Guid::_b
	int16_t ____b_2;
	// System.Int16 System.Guid::_c
	int16_t ____c_3;
	// System.Byte System.Guid::_d
	uint8_t ____d_4;
	// System.Byte System.Guid::_e
	uint8_t ____e_5;
	// System.Byte System.Guid::_f
	uint8_t ____f_6;
	// System.Byte System.Guid::_g
	uint8_t ____g_7;
	// System.Byte System.Guid::_h
	uint8_t ____h_8;
	// System.Byte System.Guid::_i
	uint8_t ____i_9;
	// System.Byte System.Guid::_j
	uint8_t ____j_10;
	// System.Byte System.Guid::_k
	uint8_t ____k_11;
};

struct Guid_t_StaticFields
{
	// System.Guid System.Guid::Empty
	Guid_t ___Empty_0;
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

// OpenCvSharp.MatType
struct MatType_t421BC1D5DCDCC92314CD10E718B43D87C17C6252 
{
	// System.Int32 OpenCvSharp.MatType::Value
	int32_t ___Value_0;
};

struct MatType_t421BC1D5DCDCC92314CD10E718B43D87C17C6252_StaticFields
{
	// OpenCvSharp.MatType OpenCvSharp.MatType::CV_8UC1
	MatType_t421BC1D5DCDCC92314CD10E718B43D87C17C6252 ___CV_8UC1_12;
	// OpenCvSharp.MatType OpenCvSharp.MatType::CV_8UC2
	MatType_t421BC1D5DCDCC92314CD10E718B43D87C17C6252 ___CV_8UC2_13;
	// OpenCvSharp.MatType OpenCvSharp.MatType::CV_8UC3
	MatType_t421BC1D5DCDCC92314CD10E718B43D87C17C6252 ___CV_8UC3_14;
	// OpenCvSharp.MatType OpenCvSharp.MatType::CV_8UC4
	MatType_t421BC1D5DCDCC92314CD10E718B43D87C17C6252 ___CV_8UC4_15;
	// OpenCvSharp.MatType OpenCvSharp.MatType::CV_8SC1
	MatType_t421BC1D5DCDCC92314CD10E718B43D87C17C6252 ___CV_8SC1_16;
	// OpenCvSharp.MatType OpenCvSharp.MatType::CV_8SC2
	MatType_t421BC1D5DCDCC92314CD10E718B43D87C17C6252 ___CV_8SC2_17;
	// OpenCvSharp.MatType OpenCvSharp.MatType::CV_8SC3
	MatType_t421BC1D5DCDCC92314CD10E718B43D87C17C6252 ___CV_8SC3_18;
	// OpenCvSharp.MatType OpenCvSharp.MatType::CV_8SC4
	MatType_t421BC1D5DCDCC92314CD10E718B43D87C17C6252 ___CV_8SC4_19;
	// OpenCvSharp.MatType OpenCvSharp.MatType::CV_16UC1
	MatType_t421BC1D5DCDCC92314CD10E718B43D87C17C6252 ___CV_16UC1_20;
	// OpenCvSharp.MatType OpenCvSharp.MatType::CV_16UC2
	MatType_t421BC1D5DCDCC92314CD10E718B43D87C17C6252 ___CV_16UC2_21;
	// OpenCvSharp.MatType OpenCvSharp.MatType::CV_16UC3
	MatType_t421BC1D5DCDCC92314CD10E718B43D87C17C6252 ___CV_16UC3_22;
	// OpenCvSharp.MatType OpenCvSharp.MatType::CV_16UC4
	MatType_t421BC1D5DCDCC92314CD10E718B43D87C17C6252 ___CV_16UC4_23;
	// OpenCvSharp.MatType OpenCvSharp.MatType::CV_16SC1
	MatType_t421BC1D5DCDCC92314CD10E718B43D87C17C6252 ___CV_16SC1_24;
	// OpenCvSharp.MatType OpenCvSharp.MatType::CV_16SC2
	MatType_t421BC1D5DCDCC92314CD10E718B43D87C17C6252 ___CV_16SC2_25;
	// OpenCvSharp.MatType OpenCvSharp.MatType::CV_16SC3
	MatType_t421BC1D5DCDCC92314CD10E718B43D87C17C6252 ___CV_16SC3_26;
	// OpenCvSharp.MatType OpenCvSharp.MatType::CV_16SC4
	MatType_t421BC1D5DCDCC92314CD10E718B43D87C17C6252 ___CV_16SC4_27;
	// OpenCvSharp.MatType OpenCvSharp.MatType::CV_32SC1
	MatType_t421BC1D5DCDCC92314CD10E718B43D87C17C6252 ___CV_32SC1_28;
	// OpenCvSharp.MatType OpenCvSharp.MatType::CV_32SC2
	MatType_t421BC1D5DCDCC92314CD10E718B43D87C17C6252 ___CV_32SC2_29;
	// OpenCvSharp.MatType OpenCvSharp.MatType::CV_32SC3
	MatType_t421BC1D5DCDCC92314CD10E718B43D87C17C6252 ___CV_32SC3_30;
	// OpenCvSharp.MatType OpenCvSharp.MatType::CV_32SC4
	MatType_t421BC1D5DCDCC92314CD10E718B43D87C17C6252 ___CV_32SC4_31;
	// OpenCvSharp.MatType OpenCvSharp.MatType::CV_32FC1
	MatType_t421BC1D5DCDCC92314CD10E718B43D87C17C6252 ___CV_32FC1_32;
	// OpenCvSharp.MatType OpenCvSharp.MatType::CV_32FC2
	MatType_t421BC1D5DCDCC92314CD10E718B43D87C17C6252 ___CV_32FC2_33;
	// OpenCvSharp.MatType OpenCvSharp.MatType::CV_32FC3
	MatType_t421BC1D5DCDCC92314CD10E718B43D87C17C6252 ___CV_32FC3_34;
	// OpenCvSharp.MatType OpenCvSharp.MatType::CV_32FC4
	MatType_t421BC1D5DCDCC92314CD10E718B43D87C17C6252 ___CV_32FC4_35;
	// OpenCvSharp.MatType OpenCvSharp.MatType::CV_64FC1
	MatType_t421BC1D5DCDCC92314CD10E718B43D87C17C6252 ___CV_64FC1_36;
	// OpenCvSharp.MatType OpenCvSharp.MatType::CV_64FC2
	MatType_t421BC1D5DCDCC92314CD10E718B43D87C17C6252 ___CV_64FC2_37;
	// OpenCvSharp.MatType OpenCvSharp.MatType::CV_64FC3
	MatType_t421BC1D5DCDCC92314CD10E718B43D87C17C6252 ___CV_64FC3_38;
	// OpenCvSharp.MatType OpenCvSharp.MatType::CV_64FC4
	MatType_t421BC1D5DCDCC92314CD10E718B43D87C17C6252 ___CV_64FC4_39;
};

// System.Numerics.Matrix4x4
struct Matrix4x4_t5F5E1A25D90A40678520AA0DA0C8C4D25E9DD072 
{
	// System.Single System.Numerics.Matrix4x4::M11
	float ___M11_0;
	// System.Single System.Numerics.Matrix4x4::M12
	float ___M12_1;
	// System.Single System.Numerics.Matrix4x4::M13
	float ___M13_2;
	// System.Single System.Numerics.Matrix4x4::M14
	float ___M14_3;
	// System.Single System.Numerics.Matrix4x4::M21
	float ___M21_4;
	// System.Single System.Numerics.Matrix4x4::M22
	float ___M22_5;
	// System.Single System.Numerics.Matrix4x4::M23
	float ___M23_6;
	// System.Single System.Numerics.Matrix4x4::M24
	float ___M24_7;
	// System.Single System.Numerics.Matrix4x4::M31
	float ___M31_8;
	// System.Single System.Numerics.Matrix4x4::M32
	float ___M32_9;
	// System.Single System.Numerics.Matrix4x4::M33
	float ___M33_10;
	// System.Single System.Numerics.Matrix4x4::M34
	float ___M34_11;
	// System.Single System.Numerics.Matrix4x4::M41
	float ___M41_12;
	// System.Single System.Numerics.Matrix4x4::M42
	float ___M42_13;
	// System.Single System.Numerics.Matrix4x4::M43
	float ___M43_14;
	// System.Single System.Numerics.Matrix4x4::M44
	float ___M44_15;
};

struct Matrix4x4_t5F5E1A25D90A40678520AA0DA0C8C4D25E9DD072_StaticFields
{
	// System.Numerics.Matrix4x4 System.Numerics.Matrix4x4::_identity
	Matrix4x4_t5F5E1A25D90A40678520AA0DA0C8C4D25E9DD072 ____identity_16;
};

// Windows.Foundation.Numerics.Matrix4x4
struct Matrix4x4_tC96BCD78BE2477FC55F35FFEA626330647FC8312 
{
	// System.Single Windows.Foundation.Numerics.Matrix4x4::M11
	float ___M11_0;
	// System.Single Windows.Foundation.Numerics.Matrix4x4::M12
	float ___M12_1;
	// System.Single Windows.Foundation.Numerics.Matrix4x4::M13
	float ___M13_2;
	// System.Single Windows.Foundation.Numerics.Matrix4x4::M14
	float ___M14_3;
	// System.Single Windows.Foundation.Numerics.Matrix4x4::M21
	float ___M21_4;
	// System.Single Windows.Foundation.Numerics.Matrix4x4::M22
	float ___M22_5;
	// System.Single Windows.Foundation.Numerics.Matrix4x4::M23
	float ___M23_6;
	// System.Single Windows.Foundation.Numerics.Matrix4x4::M24
	float ___M24_7;
	// System.Single Windows.Foundation.Numerics.Matrix4x4::M31
	float ___M31_8;
	// System.Single Windows.Foundation.Numerics.Matrix4x4::M32
	float ___M32_9;
	// System.Single Windows.Foundation.Numerics.Matrix4x4::M33
	float ___M33_10;
	// System.Single Windows.Foundation.Numerics.Matrix4x4::M34
	float ___M34_11;
	// System.Single Windows.Foundation.Numerics.Matrix4x4::M41
	float ___M41_12;
	// System.Single Windows.Foundation.Numerics.Matrix4x4::M42
	float ___M42_13;
	// System.Single Windows.Foundation.Numerics.Matrix4x4::M43
	float ___M43_14;
	// System.Single Windows.Foundation.Numerics.Matrix4x4::M44
	float ___M44_15;
};

// Windows.Foundation.Point
struct Point_tC7E550DD1555DAAAA7CA4F85656FA70F81C23B18 
{
	// System.Single Windows.Foundation.Point::_x
	float ____x_0;
	// System.Single Windows.Foundation.Point::_y
	float ____y_1;
};

// Windows.Foundation.Rect
struct Rect_t30CC1879BAAB779EAEA49A91ACA636D57101EE48 
{
	// System.Single Windows.Foundation.Rect::_x
	float ____x_0;
	// System.Single Windows.Foundation.Rect::_y
	float ____y_1;
	// System.Single Windows.Foundation.Rect::_width
	float ____width_2;
	// System.Single Windows.Foundation.Rect::_height
	float ____height_3;
};

// Windows.Foundation.Size
struct Size_t463A0E21871C29D10F032F5EF3EAF615806D8A05 
{
	// System.Single Windows.Foundation.Size::_width
	float ____width_0;
	// System.Single Windows.Foundation.Size::_height
	float ____height_1;
};

// System.IO.Stream
struct Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE  : public MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE
{
	// System.IO.Stream/ReadWriteTask System.IO.Stream::_activeReadWriteTask
	ReadWriteTask_t0821BF49EE38596C7734E86E1A6A39D769BE2C05* ____activeReadWriteTask_2;
	// System.Threading.SemaphoreSlim System.IO.Stream::_asyncActiveSemaphore
	SemaphoreSlim_t0D5CB5685D9BFA5BF95CEC6E7395490F933E8DB2* ____asyncActiveSemaphore_3;
};

struct Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE_StaticFields
{
	// System.IO.Stream System.IO.Stream::Null
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___Null_1;
};

// System.TimeSpan
struct TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A 
{
	// System.Int64 System.TimeSpan::_ticks
	int64_t ____ticks_22;
};

struct TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_StaticFields
{
	// System.TimeSpan System.TimeSpan::Zero
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___Zero_19;
	// System.TimeSpan System.TimeSpan::MaxValue
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___MaxValue_20;
	// System.TimeSpan System.TimeSpan::MinValue
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___MinValue_21;
};
// Windows.Foundation.IReference`1<System.Numerics.Matrix4x4>
struct NOVTABLE IReference_1_tE7B6A2241447C16114EEA2A0377DC82E94FD895C : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IReference_1_get_Value_m9F81F6FB5619520D2021E48FDBAF763F8DAA2062(Matrix4x4_t5F5E1A25D90A40678520AA0DA0C8C4D25E9DD072* comReturnValue) = 0;
};
// Windows.Foundation.IReference`1<Windows.Foundation.Numerics.Matrix4x4>
struct NOVTABLE IReference_1_t08B37C871D4969FB2EF1391D9CD588CDD17C53F1 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IReference_1_get_Value_mE0C3CC4A91CE18F511CBA8BDE39E3F840F55ADD4(Matrix4x4_tC96BCD78BE2477FC55F35FFEA626330647FC8312* comReturnValue) = 0;
};

// OpenCVForUnity.DisposableOpenCVObject
struct DisposableOpenCVObject_t9557CB9C5505053F6E42905D17E3643D8A0943F1  : public DisposableObject_t9369B3BFCCE5F93E6CDAB660174DA51EF4708C51
{
	// System.IntPtr OpenCVForUnity.DisposableOpenCVObject::nativeObj
	intptr_t ___nativeObj_2;
};

// System.Runtime.InteropServices.GCHandle
struct GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC 
{
	// System.IntPtr System.Runtime.InteropServices.GCHandle::handle
	intptr_t ___handle_0;
};
// Windows.Foundation.IPropertyValue
struct NOVTABLE IPropertyValue_t5108EBA6BAA9289BD53DB4C9BC6EC2CFD3C71CFF : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_get_Type_mCCFDCAF3EF47FD26636DF1752C7D0D0F04AF17E5(int32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_get_IsNumericScalar_m5AA58745E3403667AD93842BD84E1BF3C56C6923(bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt8_mA78B64B2D18688A14857A3385C11D3FBC3DCA0BF(uint8_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt16_m893A5F46553C28727129D19D2C657BFD7A82C8EB(int16_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt16_mFB50772016E5FDE5548016B10D8BF8F72BAEE51A(uint16_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt32_m81E687870E8D71B0B56C0F98B9CE901173541F0E(int32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt32_m4242C2EB038EC37544C26EC11B33AD7CA1D0315B(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt64_m69E32181A31DEE4BEB361BB9E81FA3D949862FC9(int64_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt64_mAB342E494DC39A847B6430F96A8F02FB9F9774E4(uint64_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetSingle_mABFDF8CFBAAFF7EEE22AF429911B22EC2DE5318A(float* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetDouble_mF1DDF1999B7F877B2BA609D09149288E345D45AE(double* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetChar16_m4B1428420CFDB7DD73878EAB4C8EFEBFBE026EEC(Il2CppChar* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetBoolean_m89F937F65167C4337FD9E4A8B0A54369AE41D89D(bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetString_mD2C842F7378384AE6BC0A93033FEE0A85C9E1F28(Il2CppHString* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetGuid_m560A172386BD6DFC3DEB00D2DF3070EE67DF7B71(Guid_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetDateTime_mC3F8B04EF7625215AF66FB7B5C4EFDDC4163967D(DateTime_tB8F64A9E141FDC202144C06531C4E7D4B6C59CB0* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetTimeSpan_m5B8EF6C6B2BE4370F48B6AA715236DDD019A657A(TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetPoint_m6DE3D27C8479F2C44665EF1D86D76E004AC3B00D(Point_tC7E550DD1555DAAAA7CA4F85656FA70F81C23B18* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetSize_mD27A291FCF475860FD4C5CC19C1C361902537662(Size_t463A0E21871C29D10F032F5EF3EAF615806D8A05* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetRect_mF069EFA36FB5E7469FABE6CC04471B4434E507AE(Rect_t30CC1879BAAB779EAEA49A91ACA636D57101EE48* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt8Array_mEEA85229904BFBD5DD63209A9F4858EA6A36C484(uint32_t* ___value0ArraySize, uint8_t** ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt16Array_mAF964E8DCE5EE8D9703DB63D5181CD92C344FAA9(uint32_t* ___value0ArraySize, int16_t** ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt16Array_mE6ECF01E37BD858FF14518C8EC0605D1BFD4CAC6(uint32_t* ___value0ArraySize, uint16_t** ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt32Array_m27D54E06B02528F7056A07F224A1552A36FDEB46(uint32_t* ___value0ArraySize, int32_t** ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt32Array_mAF7ECA68A945A7AA0F35D3A3962A4EA49954CEAE(uint32_t* ___value0ArraySize, uint32_t** ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt64Array_mDC9606845A993ED32A95F889C71B67C8A05DF4BC(uint32_t* ___value0ArraySize, int64_t** ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt64Array_mB59E8769BB20C16BBAC4D08A3861B7019B9D2514(uint32_t* ___value0ArraySize, uint64_t** ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetSingleArray_mDF81FCE06AA984ACED460A1989102C889F64393A(uint32_t* ___value0ArraySize, float** ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetDoubleArray_m1D5F8B05C90C3FE9B82785940DEA3A3EDD6F2EC5(uint32_t* ___value0ArraySize, double** ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetChar16Array_mB80F78E0307BC79A3FDF3502A94F8B9D4BBD686A(uint32_t* ___value0ArraySize, Il2CppChar** ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetBooleanArray_mF47B2C131AAB62D7EDB2DEE4713E553291E5583A(uint32_t* ___value0ArraySize, bool** ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetStringArray_m0F0B933A1405F7B389626D274F3BB20CA2255E40(uint32_t* ___value0ArraySize, Il2CppHString** ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInspectableArray_m9B1D04C961C0519436B081BAE72B6FE53D6204D6(uint32_t* ___value0ArraySize, Il2CppIInspectable*** ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetGuidArray_mD0732FEB8CB64CA04C55CEEE8386EF3FDA97BED4(uint32_t* ___value0ArraySize, Guid_t** ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetDateTimeArray_m54798F11C9EA77AC614259146DF99355026ED0A9(uint32_t* ___value0ArraySize, DateTime_tB8F64A9E141FDC202144C06531C4E7D4B6C59CB0** ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetTimeSpanArray_mDF0D9EC3E55742BA1132885596FDF3F478E8AC2A(uint32_t* ___value0ArraySize, TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A** ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetPointArray_m9ECDF8442D5EF1FCB65095A1AC779596920F9890(uint32_t* ___value0ArraySize, Point_tC7E550DD1555DAAAA7CA4F85656FA70F81C23B18** ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetSizeArray_m57C92EBB76BF7B6D400D8045192ED76ED41BC403(uint32_t* ___value0ArraySize, Size_t463A0E21871C29D10F032F5EF3EAF615806D8A05** ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetRectArray_mC4F618B7AEF3B6AB1BB2AFFEED0C2BBB28E48178(uint32_t* ___value0ArraySize, Rect_t30CC1879BAAB779EAEA49A91ACA636D57101EE48** ___value0) = 0;
};

// System.IO.MemoryStream
struct MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2  : public Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE
{
	// System.Byte[] System.IO.MemoryStream::_buffer
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ____buffer_4;
	// System.Int32 System.IO.MemoryStream::_origin
	int32_t ____origin_5;
	// System.Int32 System.IO.MemoryStream::_position
	int32_t ____position_6;
	// System.Int32 System.IO.MemoryStream::_length
	int32_t ____length_7;
	// System.Int32 System.IO.MemoryStream::_capacity
	int32_t ____capacity_8;
	// System.Boolean System.IO.MemoryStream::_expandable
	bool ____expandable_9;
	// System.Boolean System.IO.MemoryStream::_writable
	bool ____writable_10;
	// System.Boolean System.IO.MemoryStream::_exposable
	bool ____exposable_11;
	// System.Boolean System.IO.MemoryStream::_isOpen
	bool ____isOpen_12;
	// System.Threading.Tasks.Task`1<System.Int32> System.IO.MemoryStream::_lastReadTask
	Task_1_t4C228DE57804012969575431CFF12D57C875552D* ____lastReadTask_13;
};

// OpenCVForUnity.CoreModule.Algorithm
struct Algorithm_tD1E980C3E38D2FC8A007BA3E83DCB91E18620B47  : public DisposableOpenCVObject_t9557CB9C5505053F6E42905D17E3643D8A0943F1
{
};

// OpenCvSharp.DisposableObject
struct DisposableObject_t02C4093A95C57EBD24739E30A8DB4830C0CB9D41  : public RuntimeObject
{
	// System.Boolean OpenCvSharp.DisposableObject::<IsDisposed>k__BackingField
	bool ___U3CIsDisposedU3Ek__BackingField_0;
	// System.Boolean OpenCvSharp.DisposableObject::<IsEnabledDispose>k__BackingField
	bool ___U3CIsEnabledDisposeU3Ek__BackingField_1;
	// System.Runtime.InteropServices.GCHandle OpenCvSharp.DisposableObject::dataHandle
	GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC ___dataHandle_2;
	// System.IntPtr OpenCvSharp.DisposableObject::<AllocatedMemory>k__BackingField
	intptr_t ___U3CAllocatedMemoryU3Ek__BackingField_3;
	// System.Int64 OpenCvSharp.DisposableObject::<AllocatedMemorySize>k__BackingField
	int64_t ___U3CAllocatedMemorySizeU3Ek__BackingField_4;
};

// OpenCVForUnity.CoreModule.Mat
struct Mat_tBB9BA10BF1DE60C3DAA4F26C9BA752AB340576DD  : public DisposableOpenCVObject_t9557CB9C5505053F6E42905D17E3643D8A0943F1
{
};

// System.Buffers.MemoryHandle
struct MemoryHandle_t505785861D4FF84F850A3FF775BE6AE1833D2AFD 
{
	// System.Void* System.Buffers.MemoryHandle::_pointer
	void* ____pointer_0;
	// System.Runtime.InteropServices.GCHandle System.Buffers.MemoryHandle::_handle
	GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC ____handle_1;
	// System.Buffers.IPinnable System.Buffers.MemoryHandle::_pinnable
	RuntimeObject* ____pinnable_2;
};
// Native definition for P/Invoke marshalling of System.Buffers.MemoryHandle
struct MemoryHandle_t505785861D4FF84F850A3FF775BE6AE1833D2AFD_marshaled_pinvoke
{
	void* ____pointer_0;
	GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC ____handle_1;
	RuntimeObject* ____pinnable_2;
};
// Native definition for COM marshalling of System.Buffers.MemoryHandle
struct MemoryHandle_t505785861D4FF84F850A3FF775BE6AE1833D2AFD_marshaled_com
{
	void* ____pointer_0;
	GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC ____handle_1;
	RuntimeObject* ____pinnable_2;
};

// OpenCvSharp.DisposableCvObject
struct DisposableCvObject_tA8CD143EDE29DDF4EA4F227AD4A2609FE6081184  : public DisposableObject_t02C4093A95C57EBD24739E30A8DB4830C0CB9D41
{
	// System.IntPtr OpenCvSharp.DisposableCvObject::ptr
	intptr_t ___ptr_5;
	// System.Boolean OpenCvSharp.DisposableCvObject::disposed
	bool ___disposed_6;
};

// OpenCVForUnity.CoreModule.MatOfByte
struct MatOfByte_tA088C9B108726B3455402AA9BBCDF4716F23F9EB  : public Mat_tBB9BA10BF1DE60C3DAA4F26C9BA752AB340576DD
{
};

// OpenCVForUnity.CoreModule.MatOfDMatch
struct MatOfDMatch_t292F03F81E5A0AE05BB5D81EEAFEE6B145AB3F1F  : public Mat_tBB9BA10BF1DE60C3DAA4F26C9BA752AB340576DD
{
};

// OpenCVForUnity.CoreModule.MatOfDouble
struct MatOfDouble_tBA51458194499FC52AB94C22D19DD9F3DDBFDC67  : public Mat_tBB9BA10BF1DE60C3DAA4F26C9BA752AB340576DD
{
};

// OpenCVForUnity.CoreModule.MatOfFloat
struct MatOfFloat_tBDC5574968F3FC69FD7E1D44BCB1BA6750CAD560  : public Mat_tBB9BA10BF1DE60C3DAA4F26C9BA752AB340576DD
{
};

// OpenCVForUnity.CoreModule.MatOfFloat4
struct MatOfFloat4_tEAB5312E05B266C889125EB1E819914492EF9237  : public Mat_tBB9BA10BF1DE60C3DAA4F26C9BA752AB340576DD
{
};

// OpenCVForUnity.CoreModule.MatOfFloat6
struct MatOfFloat6_t01608AB7B016D19D6C9573A90B8EDFDE2AF3BA08  : public Mat_tBB9BA10BF1DE60C3DAA4F26C9BA752AB340576DD
{
};

// OpenCVForUnity.CoreModule.MatOfInt
struct MatOfInt_tF448E1CAFC4F5ED74C8EEBC343DF8B0443E001F1  : public Mat_tBB9BA10BF1DE60C3DAA4F26C9BA752AB340576DD
{
};

// OpenCVForUnity.CoreModule.MatOfInt4
struct MatOfInt4_tD393974F7443BF081BA53AC322B6FD5ACB0DFC15  : public Mat_tBB9BA10BF1DE60C3DAA4F26C9BA752AB340576DD
{
};

// OpenCVForUnity.CoreModule.MatOfKeyPoint
struct MatOfKeyPoint_t2A0AB9953D4364441D9E1C02FC37614DEA3F2963  : public Mat_tBB9BA10BF1DE60C3DAA4F26C9BA752AB340576DD
{
};

// OpenCVForUnity.CoreModule.MatOfPoint
struct MatOfPoint_t1E782911B35F7971BFC1CFECD9CBFFA192202364  : public Mat_tBB9BA10BF1DE60C3DAA4F26C9BA752AB340576DD
{
};

// OpenCVForUnity.CoreModule.MatOfPoint2f
struct MatOfPoint2f_t40FB7D077E2AB52FACCAA0CDC1F9E692079FA438  : public Mat_tBB9BA10BF1DE60C3DAA4F26C9BA752AB340576DD
{
};

// OpenCVForUnity.CoreModule.MatOfPoint3
struct MatOfPoint3_tA0B8EF68BBAD0DEDD52828E1939C466B71AFCA79  : public Mat_tBB9BA10BF1DE60C3DAA4F26C9BA752AB340576DD
{
};

// OpenCVForUnity.CoreModule.MatOfPoint3f
struct MatOfPoint3f_tBCD10F4A80F2B14BDE8C3CA1686898F0295CB14A  : public Mat_tBB9BA10BF1DE60C3DAA4F26C9BA752AB340576DD
{
};

// OpenCVForUnity.CoreModule.MatOfRect
struct MatOfRect_tA0868F3125B288CFB8E78FB62A93744D5382D85C  : public Mat_tBB9BA10BF1DE60C3DAA4F26C9BA752AB340576DD
{
};

// OpenCVForUnity.CoreModule.MatOfRect2d
struct MatOfRect2d_tBF10E121B4C750F33BE91B2CBEF11D491F78691A  : public Mat_tBB9BA10BF1DE60C3DAA4F26C9BA752AB340576DD
{
};

// OpenCVForUnity.CoreModule.MatOfRotatedRect
struct MatOfRotatedRect_tD519C7FC95FBF9B4A02DEF6A63A868A33852AF8D  : public Mat_tBB9BA10BF1DE60C3DAA4F26C9BA752AB340576DD
{
};

// OpenCVForUnity.PhotoModule.MergeExposures
struct MergeExposures_tF1BF2436C7286A4DD4B31ED8AF691FEB8D45A6F0  : public Algorithm_tD1E980C3E38D2FC8A007BA3E83DCB91E18620B47
{
};

// OpenCvSharp.Mat
struct Mat_tA6670B61E48BB3D77E39E1299B8DAE00AAC1D4DE  : public DisposableCvObject_tA8CD143EDE29DDF4EA4F227AD4A2609FE6081184
{
	// System.Boolean OpenCvSharp.Mat::disposed
	bool ___disposed_7;
	// OpenCvSharp.Mat/MatExprIndexer OpenCvSharp.Mat::matExprIndexer
	MatExprIndexer_tB64CDE6A7443CDD5A196B278BEB4E5BE9B6F9B92* ___matExprIndexer_9;
	// OpenCvSharp.Mat/ColExprIndexer OpenCvSharp.Mat::colExprIndexer
	ColExprIndexer_t65FB4C7E258DB30905ABF1ABB4FD463F5D634A07* ___colExprIndexer_10;
	// OpenCvSharp.Mat/RowExprIndexer OpenCvSharp.Mat::rowExprIndexer
	RowExprIndexer_tFB0C258EBBEC534D72ACC58CF0AFB2F172A39BB2* ___rowExprIndexer_11;
	// OpenCvSharp.Mat/ColIndexer OpenCvSharp.Mat::colIndexer
	ColIndexer_tD1E32BF4DFBD130EA0A93833D7EEFE241DCEF668* ___colIndexer_12;
	// OpenCvSharp.Mat/RowIndexer OpenCvSharp.Mat::rowIndexer
	RowIndexer_t4CD4C726A6D6CDB3E9283B4821460A138800DBB0* ___rowIndexer_13;
};

struct Mat_tA6670B61E48BB3D77E39E1299B8DAE00AAC1D4DE_StaticFields
{
	// System.Int32 OpenCvSharp.Mat::SizeOf
	int32_t ___SizeOf_8;
};

// OpenCvSharp.MatExpr
struct MatExpr_t26CE92BC56A355F6C7268BD6314CA9CFFD342EFA  : public DisposableCvObject_tA8CD143EDE29DDF4EA4F227AD4A2609FE6081184
{
	// System.Boolean OpenCvSharp.MatExpr::disposed
	bool ___disposed_7;
	// OpenCvSharp.MatExpr/ColIndexer OpenCvSharp.MatExpr::col
	ColIndexer_tA7C4A3CD8BB6E7679504C1CF2383B50393A93AD1* ___col_8;
	// OpenCvSharp.MatExpr/RowIndexer OpenCvSharp.MatExpr::row
	RowIndexer_t0A28F8060696DAE5156800BE04DF5136ABACC1E9* ___row_9;
};

// OpenCVForUnity.PhotoModule.MergeDebevec
struct MergeDebevec_t232A4058851A4A398826575D54228E23300CC853  : public MergeExposures_tF1BF2436C7286A4DD4B31ED8AF691FEB8D45A6F0
{
};

// OpenCVForUnity.PhotoModule.MergeMertens
struct MergeMertens_t2402F2019D32155BD8D1425FAFC182949C7643E6  : public MergeExposures_tF1BF2436C7286A4DD4B31ED8AF691FEB8D45A6F0
{
};

// OpenCVForUnity.PhotoModule.MergeRobertson
struct MergeRobertson_t71A20427C76C30CE9C3D1D0CD7769D86DECF6C8F  : public MergeExposures_tF1BF2436C7286A4DD4B31ED8AF691FEB8D45A6F0
{
};

// OpenCvSharp.Mat`2<System.Byte,OpenCvSharp.MatOfByte>
struct Mat_2_t2AC86501BA67C6BF1728D112E3978D09467224F2  : public Mat_tA6670B61E48BB3D77E39E1299B8DAE00AAC1D4DE
{
	// System.Boolean OpenCvSharp.Mat`2::disposed
	bool ___disposed_14;
	// OpenCvSharp.Mat OpenCvSharp.Mat`2::sourceMat
	Mat_tA6670B61E48BB3D77E39E1299B8DAE00AAC1D4DE* ___sourceMat_15;
};

// OpenCvSharp.Mat`2<OpenCvSharp.DMatch,OpenCvSharp.MatOfDMatch>
struct Mat_2_tE104185D9E0EF0AC5B306B72C200B42669B7CD2F  : public Mat_tA6670B61E48BB3D77E39E1299B8DAE00AAC1D4DE
{
	// System.Boolean OpenCvSharp.Mat`2::disposed
	bool ___disposed_14;
	// OpenCvSharp.Mat OpenCvSharp.Mat`2::sourceMat
	Mat_tA6670B61E48BB3D77E39E1299B8DAE00AAC1D4DE* ___sourceMat_15;
};

// OpenCvSharp.Mat`2<System.Double,OpenCvSharp.MatOfDouble>
struct Mat_2_tF2111022B4AA82388317AEE07CDB88AD38428ABB  : public Mat_tA6670B61E48BB3D77E39E1299B8DAE00AAC1D4DE
{
	// System.Boolean OpenCvSharp.Mat`2::disposed
	bool ___disposed_14;
	// OpenCvSharp.Mat OpenCvSharp.Mat`2::sourceMat
	Mat_tA6670B61E48BB3D77E39E1299B8DAE00AAC1D4DE* ___sourceMat_15;
};

// OpenCvSharp.Mat`2<System.Int16,OpenCvSharp.MatOfShort>
struct Mat_2_t9165E88300EDEEF67109831C52636ACC19BCBC1B  : public Mat_tA6670B61E48BB3D77E39E1299B8DAE00AAC1D4DE
{
	// System.Boolean OpenCvSharp.Mat`2::disposed
	bool ___disposed_14;
	// OpenCvSharp.Mat OpenCvSharp.Mat`2::sourceMat
	Mat_tA6670B61E48BB3D77E39E1299B8DAE00AAC1D4DE* ___sourceMat_15;
};

// OpenCvSharp.Mat`2<System.Int32,OpenCvSharp.MatOfInt>
struct Mat_2_t08583A154E953C153D64693A557D923509F28592  : public Mat_tA6670B61E48BB3D77E39E1299B8DAE00AAC1D4DE
{
	// System.Boolean OpenCvSharp.Mat`2::disposed
	bool ___disposed_14;
	// OpenCvSharp.Mat OpenCvSharp.Mat`2::sourceMat
	Mat_tA6670B61E48BB3D77E39E1299B8DAE00AAC1D4DE* ___sourceMat_15;
};

// OpenCvSharp.Mat`2<OpenCvSharp.Point,OpenCvSharp.MatOfPoint>
struct Mat_2_t83FDBC873252ED0DD36E6017A9DA5F896A84F2A4  : public Mat_tA6670B61E48BB3D77E39E1299B8DAE00AAC1D4DE
{
	// System.Boolean OpenCvSharp.Mat`2::disposed
	bool ___disposed_14;
	// OpenCvSharp.Mat OpenCvSharp.Mat`2::sourceMat
	Mat_tA6670B61E48BB3D77E39E1299B8DAE00AAC1D4DE* ___sourceMat_15;
};

// OpenCvSharp.Mat`2<OpenCvSharp.Point2d,OpenCvSharp.MatOfPoint2d>
struct Mat_2_t17478D8B8BDEE039389C823D63662D5868DD8C73  : public Mat_tA6670B61E48BB3D77E39E1299B8DAE00AAC1D4DE
{
	// System.Boolean OpenCvSharp.Mat`2::disposed
	bool ___disposed_14;
	// OpenCvSharp.Mat OpenCvSharp.Mat`2::sourceMat
	Mat_tA6670B61E48BB3D77E39E1299B8DAE00AAC1D4DE* ___sourceMat_15;
};

// OpenCvSharp.Mat`2<OpenCvSharp.Point2f,OpenCvSharp.MatOfPoint2f>
struct Mat_2_t7A48B28DB6018DFF6D513EDD2949481E1DA35001  : public Mat_tA6670B61E48BB3D77E39E1299B8DAE00AAC1D4DE
{
	// System.Boolean OpenCvSharp.Mat`2::disposed
	bool ___disposed_14;
	// OpenCvSharp.Mat OpenCvSharp.Mat`2::sourceMat
	Mat_tA6670B61E48BB3D77E39E1299B8DAE00AAC1D4DE* ___sourceMat_15;
};

// OpenCvSharp.Mat`2<OpenCvSharp.Point3d,OpenCvSharp.MatOfPoint3d>
struct Mat_2_t4EE567C0170F978D97CB6BFBD221130D2CF8A987  : public Mat_tA6670B61E48BB3D77E39E1299B8DAE00AAC1D4DE
{
	// System.Boolean OpenCvSharp.Mat`2::disposed
	bool ___disposed_14;
	// OpenCvSharp.Mat OpenCvSharp.Mat`2::sourceMat
	Mat_tA6670B61E48BB3D77E39E1299B8DAE00AAC1D4DE* ___sourceMat_15;
};

// OpenCvSharp.Mat`2<OpenCvSharp.Point3f,OpenCvSharp.MatOfPoint3f>
struct Mat_2_tECE2C033CB04A65598615B47AD864DB91AF53272  : public Mat_tA6670B61E48BB3D77E39E1299B8DAE00AAC1D4DE
{
	// System.Boolean OpenCvSharp.Mat`2::disposed
	bool ___disposed_14;
	// OpenCvSharp.Mat OpenCvSharp.Mat`2::sourceMat
	Mat_tA6670B61E48BB3D77E39E1299B8DAE00AAC1D4DE* ___sourceMat_15;
};

// OpenCvSharp.Mat`2<OpenCvSharp.Point3i,OpenCvSharp.MatOfPoint3i>
struct Mat_2_t29E2F3CA5D5C324B577AD72573725B486EA0617A  : public Mat_tA6670B61E48BB3D77E39E1299B8DAE00AAC1D4DE
{
	// System.Boolean OpenCvSharp.Mat`2::disposed
	bool ___disposed_14;
	// OpenCvSharp.Mat OpenCvSharp.Mat`2::sourceMat
	Mat_tA6670B61E48BB3D77E39E1299B8DAE00AAC1D4DE* ___sourceMat_15;
};

// OpenCvSharp.Mat`2<OpenCvSharp.Rect,OpenCvSharp.MatOfRect>
struct Mat_2_t89103823CA29BB6ED40DC7D78DC1A73A7F905657  : public Mat_tA6670B61E48BB3D77E39E1299B8DAE00AAC1D4DE
{
	// System.Boolean OpenCvSharp.Mat`2::disposed
	bool ___disposed_14;
	// OpenCvSharp.Mat OpenCvSharp.Mat`2::sourceMat
	Mat_tA6670B61E48BB3D77E39E1299B8DAE00AAC1D4DE* ___sourceMat_15;
};

// OpenCvSharp.Mat`2<System.Single,OpenCvSharp.MatOfFloat>
struct Mat_2_t151F58D39EE7993B89D5F2D6FEFBF097219DE414  : public Mat_tA6670B61E48BB3D77E39E1299B8DAE00AAC1D4DE
{
	// System.Boolean OpenCvSharp.Mat`2::disposed
	bool ___disposed_14;
	// OpenCvSharp.Mat OpenCvSharp.Mat`2::sourceMat
	Mat_tA6670B61E48BB3D77E39E1299B8DAE00AAC1D4DE* ___sourceMat_15;
};

// OpenCvSharp.Mat`2<System.UInt16,OpenCvSharp.MatOfUShort>
struct Mat_2_tA3EF8B4B54826B07D4F174C759F8744585F291EC  : public Mat_tA6670B61E48BB3D77E39E1299B8DAE00AAC1D4DE
{
	// System.Boolean OpenCvSharp.Mat`2::disposed
	bool ___disposed_14;
	// OpenCvSharp.Mat OpenCvSharp.Mat`2::sourceMat
	Mat_tA6670B61E48BB3D77E39E1299B8DAE00AAC1D4DE* ___sourceMat_15;
};

// OpenCvSharp.Mat`2<OpenCvSharp.Vec3b,OpenCvSharp.MatOfByte3>
struct Mat_2_t5C99793BC724FEE3F3C5F926D428931AA28625FD  : public Mat_tA6670B61E48BB3D77E39E1299B8DAE00AAC1D4DE
{
	// System.Boolean OpenCvSharp.Mat`2::disposed
	bool ___disposed_14;
	// OpenCvSharp.Mat OpenCvSharp.Mat`2::sourceMat
	Mat_tA6670B61E48BB3D77E39E1299B8DAE00AAC1D4DE* ___sourceMat_15;
};

// OpenCvSharp.Mat`2<OpenCvSharp.Vec3d,OpenCvSharp.MatOfDouble3>
struct Mat_2_t74D3D9504C0A653222834B35084BEAE67C26F9BB  : public Mat_tA6670B61E48BB3D77E39E1299B8DAE00AAC1D4DE
{
	// System.Boolean OpenCvSharp.Mat`2::disposed
	bool ___disposed_14;
	// OpenCvSharp.Mat OpenCvSharp.Mat`2::sourceMat
	Mat_tA6670B61E48BB3D77E39E1299B8DAE00AAC1D4DE* ___sourceMat_15;
};

// OpenCvSharp.Mat`2<OpenCvSharp.Vec4f,OpenCvSharp.MatOfFloat4>
struct Mat_2_tC61B3DF11D7EAA09BED3272725DE4475CC6EA2E3  : public Mat_tA6670B61E48BB3D77E39E1299B8DAE00AAC1D4DE
{
	// System.Boolean OpenCvSharp.Mat`2::disposed
	bool ___disposed_14;
	// OpenCvSharp.Mat OpenCvSharp.Mat`2::sourceMat
	Mat_tA6670B61E48BB3D77E39E1299B8DAE00AAC1D4DE* ___sourceMat_15;
};

// OpenCvSharp.Mat`2<OpenCvSharp.Vec4i,OpenCvSharp.MatOfInt4>
struct Mat_2_t32657E10630057E9CF4F96ADF491CC00298DA3A7  : public Mat_tA6670B61E48BB3D77E39E1299B8DAE00AAC1D4DE
{
	// System.Boolean OpenCvSharp.Mat`2::disposed
	bool ___disposed_14;
	// OpenCvSharp.Mat OpenCvSharp.Mat`2::sourceMat
	Mat_tA6670B61E48BB3D77E39E1299B8DAE00AAC1D4DE* ___sourceMat_15;
};

// OpenCvSharp.Mat`2<OpenCvSharp.Vec6f,OpenCvSharp.MatOfFloat6>
struct Mat_2_t2B4EAC4077C03BED1742260B4235B074033415AC  : public Mat_tA6670B61E48BB3D77E39E1299B8DAE00AAC1D4DE
{
	// System.Boolean OpenCvSharp.Mat`2::disposed
	bool ___disposed_14;
	// OpenCvSharp.Mat OpenCvSharp.Mat`2::sourceMat
	Mat_tA6670B61E48BB3D77E39E1299B8DAE00AAC1D4DE* ___sourceMat_15;
};

// OpenCvSharp.MatOfByte
struct MatOfByte_tE98EFB1322A678A863D035828F171768BBB34915  : public Mat_2_t2AC86501BA67C6BF1728D112E3978D09467224F2
{
};

struct MatOfByte_tE98EFB1322A678A863D035828F171768BBB34915_StaticFields
{
	// OpenCvSharp.MatType OpenCvSharp.MatOfByte::ThisType
	MatType_t421BC1D5DCDCC92314CD10E718B43D87C17C6252 ___ThisType_16;
};

// OpenCvSharp.MatOfByte3
struct MatOfByte3_tA6537A4E8D455409A32E735F2F2C5FE99E61EB38  : public Mat_2_t5C99793BC724FEE3F3C5F926D428931AA28625FD
{
};

struct MatOfByte3_tA6537A4E8D455409A32E735F2F2C5FE99E61EB38_StaticFields
{
	// OpenCvSharp.MatType OpenCvSharp.MatOfByte3::ThisType
	MatType_t421BC1D5DCDCC92314CD10E718B43D87C17C6252 ___ThisType_16;
};

// OpenCvSharp.MatOfDMatch
struct MatOfDMatch_t24E8AC40B0400FDC58BDFEE7C11919B3CAF14189  : public Mat_2_tE104185D9E0EF0AC5B306B72C200B42669B7CD2F
{
};

struct MatOfDMatch_t24E8AC40B0400FDC58BDFEE7C11919B3CAF14189_StaticFields
{
	// OpenCvSharp.MatType OpenCvSharp.MatOfDMatch::ThisType
	MatType_t421BC1D5DCDCC92314CD10E718B43D87C17C6252 ___ThisType_16;
};

// OpenCvSharp.MatOfDouble
struct MatOfDouble_t3A273BBA1C102F3EAF38FA465F72ED0D46C62DCE  : public Mat_2_tF2111022B4AA82388317AEE07CDB88AD38428ABB
{
};

struct MatOfDouble_t3A273BBA1C102F3EAF38FA465F72ED0D46C62DCE_StaticFields
{
	// OpenCvSharp.MatType OpenCvSharp.MatOfDouble::ThisType
	MatType_t421BC1D5DCDCC92314CD10E718B43D87C17C6252 ___ThisType_16;
};

// OpenCvSharp.MatOfDouble3
struct MatOfDouble3_t1F476854A3B328A2C32466AEB377BE26144ABC69  : public Mat_2_t74D3D9504C0A653222834B35084BEAE67C26F9BB
{
};

struct MatOfDouble3_t1F476854A3B328A2C32466AEB377BE26144ABC69_StaticFields
{
	// OpenCvSharp.MatType OpenCvSharp.MatOfDouble3::ThisType
	MatType_t421BC1D5DCDCC92314CD10E718B43D87C17C6252 ___ThisType_16;
};

// OpenCvSharp.MatOfFloat
struct MatOfFloat_t9CDA0825DA73800315FC0829AA2634FF3390D789  : public Mat_2_t151F58D39EE7993B89D5F2D6FEFBF097219DE414
{
};

struct MatOfFloat_t9CDA0825DA73800315FC0829AA2634FF3390D789_StaticFields
{
	// OpenCvSharp.MatType OpenCvSharp.MatOfFloat::ThisType
	MatType_t421BC1D5DCDCC92314CD10E718B43D87C17C6252 ___ThisType_16;
};

// OpenCvSharp.MatOfFloat4
struct MatOfFloat4_t53A9A0FBDBAD6273854D099B457199D18A2BA35F  : public Mat_2_tC61B3DF11D7EAA09BED3272725DE4475CC6EA2E3
{
};

struct MatOfFloat4_t53A9A0FBDBAD6273854D099B457199D18A2BA35F_StaticFields
{
	// OpenCvSharp.MatType OpenCvSharp.MatOfFloat4::ThisType
	MatType_t421BC1D5DCDCC92314CD10E718B43D87C17C6252 ___ThisType_16;
};

// OpenCvSharp.MatOfFloat6
struct MatOfFloat6_t122A47ECD573B752F6900B02E79556FE3F995CBA  : public Mat_2_t2B4EAC4077C03BED1742260B4235B074033415AC
{
};

struct MatOfFloat6_t122A47ECD573B752F6900B02E79556FE3F995CBA_StaticFields
{
	// OpenCvSharp.MatType OpenCvSharp.MatOfFloat6::ThisType
	MatType_t421BC1D5DCDCC92314CD10E718B43D87C17C6252 ___ThisType_16;
};

// OpenCvSharp.MatOfInt
struct MatOfInt_tD82F1CA4A733C89BEE4D648DB74A56FBE2234426  : public Mat_2_t08583A154E953C153D64693A557D923509F28592
{
};

struct MatOfInt_tD82F1CA4A733C89BEE4D648DB74A56FBE2234426_StaticFields
{
	// OpenCvSharp.MatType OpenCvSharp.MatOfInt::ThisType
	MatType_t421BC1D5DCDCC92314CD10E718B43D87C17C6252 ___ThisType_16;
};

// OpenCvSharp.MatOfInt4
struct MatOfInt4_t5F86255CFC3F1B9AB68F6AD81B192B8E0B27C7FF  : public Mat_2_t32657E10630057E9CF4F96ADF491CC00298DA3A7
{
};

struct MatOfInt4_t5F86255CFC3F1B9AB68F6AD81B192B8E0B27C7FF_StaticFields
{
	// OpenCvSharp.MatType OpenCvSharp.MatOfInt4::ThisType
	MatType_t421BC1D5DCDCC92314CD10E718B43D87C17C6252 ___ThisType_16;
};

// OpenCvSharp.MatOfPoint
struct MatOfPoint_t31FAB946839C7898CD9B57CD9A5DC34E58FF9EC6  : public Mat_2_t83FDBC873252ED0DD36E6017A9DA5F896A84F2A4
{
};

struct MatOfPoint_t31FAB946839C7898CD9B57CD9A5DC34E58FF9EC6_StaticFields
{
	// OpenCvSharp.MatType OpenCvSharp.MatOfPoint::ThisType
	MatType_t421BC1D5DCDCC92314CD10E718B43D87C17C6252 ___ThisType_16;
};

// OpenCvSharp.MatOfPoint2d
struct MatOfPoint2d_tCFB5C822F6B9F3347D1CC7162FE1D08DA307D487  : public Mat_2_t17478D8B8BDEE039389C823D63662D5868DD8C73
{
};

struct MatOfPoint2d_tCFB5C822F6B9F3347D1CC7162FE1D08DA307D487_StaticFields
{
	// OpenCvSharp.MatType OpenCvSharp.MatOfPoint2d::ThisType
	MatType_t421BC1D5DCDCC92314CD10E718B43D87C17C6252 ___ThisType_16;
};

// OpenCvSharp.MatOfPoint2f
struct MatOfPoint2f_tE23B49AFC91040CE490A53E50279F71F4DB61644  : public Mat_2_t7A48B28DB6018DFF6D513EDD2949481E1DA35001
{
};

struct MatOfPoint2f_tE23B49AFC91040CE490A53E50279F71F4DB61644_StaticFields
{
	// OpenCvSharp.MatType OpenCvSharp.MatOfPoint2f::ThisType
	MatType_t421BC1D5DCDCC92314CD10E718B43D87C17C6252 ___ThisType_16;
};

// OpenCvSharp.MatOfPoint3d
struct MatOfPoint3d_tA7CA23590FC2B11523EC461B32B12C89042D11C5  : public Mat_2_t4EE567C0170F978D97CB6BFBD221130D2CF8A987
{
};

struct MatOfPoint3d_tA7CA23590FC2B11523EC461B32B12C89042D11C5_StaticFields
{
	// OpenCvSharp.MatType OpenCvSharp.MatOfPoint3d::ThisType
	MatType_t421BC1D5DCDCC92314CD10E718B43D87C17C6252 ___ThisType_16;
};

// OpenCvSharp.MatOfPoint3f
struct MatOfPoint3f_tDE5E0AFE63B11183028AA7E84447D04BDBFA6BDF  : public Mat_2_tECE2C033CB04A65598615B47AD864DB91AF53272
{
};

struct MatOfPoint3f_tDE5E0AFE63B11183028AA7E84447D04BDBFA6BDF_StaticFields
{
	// OpenCvSharp.MatType OpenCvSharp.MatOfPoint3f::ThisType
	MatType_t421BC1D5DCDCC92314CD10E718B43D87C17C6252 ___ThisType_16;
};

// OpenCvSharp.MatOfPoint3i
struct MatOfPoint3i_t6E1B7490CAE7680F515419C1C8FA7BC0E10846C2  : public Mat_2_t29E2F3CA5D5C324B577AD72573725B486EA0617A
{
};

struct MatOfPoint3i_t6E1B7490CAE7680F515419C1C8FA7BC0E10846C2_StaticFields
{
	// OpenCvSharp.MatType OpenCvSharp.MatOfPoint3i::ThisType
	MatType_t421BC1D5DCDCC92314CD10E718B43D87C17C6252 ___ThisType_16;
};

// OpenCvSharp.MatOfRect
struct MatOfRect_tA1BF3C86B209AFFA8A6C79844624B4F1122A1AC1  : public Mat_2_t89103823CA29BB6ED40DC7D78DC1A73A7F905657
{
};

struct MatOfRect_tA1BF3C86B209AFFA8A6C79844624B4F1122A1AC1_StaticFields
{
	// OpenCvSharp.MatType OpenCvSharp.MatOfRect::ThisType
	MatType_t421BC1D5DCDCC92314CD10E718B43D87C17C6252 ___ThisType_16;
};

// OpenCvSharp.MatOfShort
struct MatOfShort_tA7407EFE1C72D82442E2FA2E3CA33BE78A6E66C1  : public Mat_2_t9165E88300EDEEF67109831C52636ACC19BCBC1B
{
};

struct MatOfShort_tA7407EFE1C72D82442E2FA2E3CA33BE78A6E66C1_StaticFields
{
	// OpenCvSharp.MatType OpenCvSharp.MatOfShort::ThisType
	MatType_t421BC1D5DCDCC92314CD10E718B43D87C17C6252 ___ThisType_16;
};

// OpenCvSharp.MatOfUShort
struct MatOfUShort_tA0D96C9B58CD7430A5D4CFEF2278B59BA1A74A89  : public Mat_2_tA3EF8B4B54826B07D4F174C759F8744585F291EC
{
};

struct MatOfUShort_tA0D96C9B58CD7430A5D4CFEF2278B59BA1A74A89_StaticFields
{
	// OpenCvSharp.MatType OpenCvSharp.MatOfUShort::ThisType
	MatType_t421BC1D5DCDCC92314CD10E718B43D87C17C6252 ___ThisType_16;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif

il2cpp_hresult_t IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88_ComCallableWrapperProjectedMethod(RuntimeObject* __this);
il2cpp_hresult_t IIterable_1_First_m43CD5A34ABEF4766A062BF3BAC919E85269CA039_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IIterator_1_t61E394E90ADD9DF710E54EBD34636E513D0A7ED9** comReturnValue);
il2cpp_hresult_t IBindableIterable_First_mE23AC28EC9ADCDD2688247217CF40C800E780B97_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IBindableIterator_t63CCD2268CEE8AFAB68518869D47C5BDAF72962F** comReturnValue);
il2cpp_hresult_t IIterable_1_First_mC5C88C9A627725F920A024EC5206C5709195FA68_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IIterator_1_t8B60F2B4C43F5A9BF9B71127BCFFA83FBED83093** comReturnValue);
il2cpp_hresult_t IIterable_1_First_m1A1B79CA6ECFBBBAF132F733DC5351CB15F47B04_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IIterator_1_t1385D68DD78DE574859F9B97BA2D44B82B20F491** comReturnValue);
il2cpp_hresult_t IIterable_1_First_m78139ADFF5FE80ABD7C852457E456C05CF261D52_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IIterator_1_t48E0DED97AB1D2133B95C8B4EF2944BA7D206925** comReturnValue);
il2cpp_hresult_t IIterable_1_First_m6667194B100A1F3FD8CF7F2152E82FACFD94A71A_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IIterator_1_tF583809CCB8352594ECF618514369A62FB02C08B** comReturnValue);
il2cpp_hresult_t IIterable_1_First_mCCFFE98FE15F64FE2036DCD0E36D187CA86C0D88_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IIterator_1_t5DCB8CA63A25200B119FDF7632313A6EDB756A49** comReturnValue);
il2cpp_hresult_t IIterable_1_First_m3C4CBD4CBFF5D217BC350258F4FA9D1AC8B7F76C_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IIterator_1_tCD324A8CB8C6E90BDFF46D5256D8DDCC46C41274** comReturnValue);
il2cpp_hresult_t IVectorView_1_GetAt_mDA227019DDF2A9D2861B27ED32C865B867604223_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t ___index0, Il2CppIInspectable** comReturnValue);
il2cpp_hresult_t IVectorView_1_get_Size_m16DC683E3A92C0E6840B57EBFC92D3ADBF50202E_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t* comReturnValue);
il2cpp_hresult_t IVectorView_1_IndexOf_mD1B3ADF8F80828EF947882105A77BBC892263DA1_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Il2CppIInspectable* ___value0, uint32_t* ___index1, bool* comReturnValue);
il2cpp_hresult_t IVectorView_1_GetMany_m36C9D15C0138BF2C23D62E2457C09DC722A29DA9_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t ___startIndex0, uint32_t ___items1ArraySize, Il2CppIInspectable** ___items1, uint32_t* comReturnValue);
il2cpp_hresult_t IBindableVector_GetAt_mBCD1ADF8844CDBB36A56C8CD9391067180851BD9_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t ___index0, Il2CppIInspectable** comReturnValue);
il2cpp_hresult_t IBindableVector_get_Size_m835757C5C2780FB18C73A2D34B0C74CB9C24FAC6_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t* comReturnValue);
il2cpp_hresult_t IBindableVector_GetView_m0EDD4048AE0A3404A66AD7202161F560DEE9D87F_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IBindableVectorView_tCB96F9780FD45A9A323C8212A53608C8A13784B3** comReturnValue);
il2cpp_hresult_t IBindableVector_IndexOf_m6EA6FC052533AB43E049ECDFE20789943A798907_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Il2CppIInspectable* ___value0, uint32_t* ___index1, bool* comReturnValue);
il2cpp_hresult_t IBindableVector_SetAt_m288413F2AE9C2F853898187EF0F0E5087FD934D0_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t ___index0, Il2CppIInspectable* ___value1);
il2cpp_hresult_t IBindableVector_InsertAt_m919BCD142F2F5F1CBD4ABCB9E94113B65C79D431_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t ___index0, Il2CppIInspectable* ___value1);
il2cpp_hresult_t IBindableVector_RemoveAt_m54B727C7320AF1552F630DD4E98DCD7D3CB04538_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t ___index0);
il2cpp_hresult_t IBindableVector_Append_mAC3F455B05DB32D9681767CD442DEACE2EE7348E_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Il2CppIInspectable* ___value0);
il2cpp_hresult_t IBindableVector_RemoveAtEnd_mD4F1D0442F5A0A74C29E5DBCAFB1BFF14E40FC71_ComCallableWrapperProjectedMethod(RuntimeObject* __this);
il2cpp_hresult_t IBindableVector_Clear_m3353A716402EE8270D6D3F2A02863714D7787B7C_ComCallableWrapperProjectedMethod(RuntimeObject* __this);



// COM Callable Wrapper for OpenCvSharp.MatExpr
struct MatExpr_t26CE92BC56A355F6C7268BD6314CA9CFFD342EFA_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<MatExpr_t26CE92BC56A355F6C7268BD6314CA9CFFD342EFA_ComCallableWrapper>, IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301
{
	inline MatExpr_t26CE92BC56A355F6C7268BD6314CA9CFFD342EFA_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<MatExpr_t26CE92BC56A355F6C7268BD6314CA9CFFD342EFA_ComCallableWrapper>(obj) {}

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

		if (::memcmp(&iid, &IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301*>(this);
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
		interfaceIds[0] = IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID;

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

	virtual il2cpp_hresult_t STDCALL IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88() IL2CPP_OVERRIDE
	{
		return IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_MatExpr_t26CE92BC56A355F6C7268BD6314CA9CFFD342EFA(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(MatExpr_t26CE92BC56A355F6C7268BD6314CA9CFFD342EFA_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) MatExpr_t26CE92BC56A355F6C7268BD6314CA9CFFD342EFA_ComCallableWrapper(obj));
}

// COM Callable Wrapper for OpenCVForUnity.CoreModule.MatOfByte
struct MatOfByte_tA088C9B108726B3455402AA9BBCDF4716F23F9EB_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<MatOfByte_tA088C9B108726B3455402AA9BBCDF4716F23F9EB_ComCallableWrapper>, IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301
{
	inline MatOfByte_tA088C9B108726B3455402AA9BBCDF4716F23F9EB_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<MatOfByte_tA088C9B108726B3455402AA9BBCDF4716F23F9EB_ComCallableWrapper>(obj) {}

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

		if (::memcmp(&iid, &IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301*>(this);
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
		interfaceIds[0] = IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID;

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

	virtual il2cpp_hresult_t STDCALL IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88() IL2CPP_OVERRIDE
	{
		return IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_MatOfByte_tA088C9B108726B3455402AA9BBCDF4716F23F9EB(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(MatOfByte_tA088C9B108726B3455402AA9BBCDF4716F23F9EB_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) MatOfByte_tA088C9B108726B3455402AA9BBCDF4716F23F9EB_ComCallableWrapper(obj));
}

// COM Callable Wrapper for OpenCvSharp.MatOfByte
struct MatOfByte_tE98EFB1322A678A863D035828F171768BBB34915_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<MatOfByte_tE98EFB1322A678A863D035828F171768BBB34915_ComCallableWrapper>, IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301, IIterable_1_t1284FAE937940E4ED10A988E6902A88D0EABB19A, IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C
{
	inline MatOfByte_tE98EFB1322A678A863D035828F171768BBB34915_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<MatOfByte_tE98EFB1322A678A863D035828F171768BBB34915_ComCallableWrapper>(obj) {}

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

		if (::memcmp(&iid, &IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IIterable_1_t1284FAE937940E4ED10A988E6902A88D0EABB19A::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_t1284FAE937940E4ED10A988E6902A88D0EABB19A*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C*>(this);
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
		interfaceIds[0] = IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID;
		interfaceIds[1] = IIterable_1_t1284FAE937940E4ED10A988E6902A88D0EABB19A::IID;
		interfaceIds[2] = IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C::IID;

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

	virtual il2cpp_hresult_t STDCALL IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88() IL2CPP_OVERRIDE
	{
		return IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m43CD5A34ABEF4766A062BF3BAC919E85269CA039(IIterator_1_t61E394E90ADD9DF710E54EBD34636E513D0A7ED9** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_m43CD5A34ABEF4766A062BF3BAC919E85269CA039_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_mE23AC28EC9ADCDD2688247217CF40C800E780B97(IBindableIterator_t63CCD2268CEE8AFAB68518869D47C5BDAF72962F** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_mE23AC28EC9ADCDD2688247217CF40C800E780B97_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_MatOfByte_tE98EFB1322A678A863D035828F171768BBB34915(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(MatOfByte_tE98EFB1322A678A863D035828F171768BBB34915_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) MatOfByte_tE98EFB1322A678A863D035828F171768BBB34915_ComCallableWrapper(obj));
}

// COM Callable Wrapper for OpenCvSharp.MatOfByte3
struct MatOfByte3_tA6537A4E8D455409A32E735F2F2C5FE99E61EB38_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<MatOfByte3_tA6537A4E8D455409A32E735F2F2C5FE99E61EB38_ComCallableWrapper>, IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301, IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C
{
	inline MatOfByte3_tA6537A4E8D455409A32E735F2F2C5FE99E61EB38_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<MatOfByte3_tA6537A4E8D455409A32E735F2F2C5FE99E61EB38_ComCallableWrapper>(obj) {}

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

		if (::memcmp(&iid, &IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C*>(this);
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
		interfaceIds[0] = IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID;
		interfaceIds[1] = IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C::IID;

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

	virtual il2cpp_hresult_t STDCALL IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88() IL2CPP_OVERRIDE
	{
		return IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_mE23AC28EC9ADCDD2688247217CF40C800E780B97(IBindableIterator_t63CCD2268CEE8AFAB68518869D47C5BDAF72962F** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_mE23AC28EC9ADCDD2688247217CF40C800E780B97_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_MatOfByte3_tA6537A4E8D455409A32E735F2F2C5FE99E61EB38(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(MatOfByte3_tA6537A4E8D455409A32E735F2F2C5FE99E61EB38_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) MatOfByte3_tA6537A4E8D455409A32E735F2F2C5FE99E61EB38_ComCallableWrapper(obj));
}

// COM Callable Wrapper for OpenCVForUnity.CoreModule.MatOfDMatch
struct MatOfDMatch_t292F03F81E5A0AE05BB5D81EEAFEE6B145AB3F1F_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<MatOfDMatch_t292F03F81E5A0AE05BB5D81EEAFEE6B145AB3F1F_ComCallableWrapper>, IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301
{
	inline MatOfDMatch_t292F03F81E5A0AE05BB5D81EEAFEE6B145AB3F1F_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<MatOfDMatch_t292F03F81E5A0AE05BB5D81EEAFEE6B145AB3F1F_ComCallableWrapper>(obj) {}

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

		if (::memcmp(&iid, &IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301*>(this);
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
		interfaceIds[0] = IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID;

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

	virtual il2cpp_hresult_t STDCALL IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88() IL2CPP_OVERRIDE
	{
		return IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_MatOfDMatch_t292F03F81E5A0AE05BB5D81EEAFEE6B145AB3F1F(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(MatOfDMatch_t292F03F81E5A0AE05BB5D81EEAFEE6B145AB3F1F_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) MatOfDMatch_t292F03F81E5A0AE05BB5D81EEAFEE6B145AB3F1F_ComCallableWrapper(obj));
}

// COM Callable Wrapper for OpenCvSharp.MatOfDMatch
struct MatOfDMatch_t24E8AC40B0400FDC58BDFEE7C11919B3CAF14189_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<MatOfDMatch_t24E8AC40B0400FDC58BDFEE7C11919B3CAF14189_ComCallableWrapper>, IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301, IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C
{
	inline MatOfDMatch_t24E8AC40B0400FDC58BDFEE7C11919B3CAF14189_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<MatOfDMatch_t24E8AC40B0400FDC58BDFEE7C11919B3CAF14189_ComCallableWrapper>(obj) {}

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

		if (::memcmp(&iid, &IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C*>(this);
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
		interfaceIds[0] = IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID;
		interfaceIds[1] = IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C::IID;

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

	virtual il2cpp_hresult_t STDCALL IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88() IL2CPP_OVERRIDE
	{
		return IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_mE23AC28EC9ADCDD2688247217CF40C800E780B97(IBindableIterator_t63CCD2268CEE8AFAB68518869D47C5BDAF72962F** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_mE23AC28EC9ADCDD2688247217CF40C800E780B97_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_MatOfDMatch_t24E8AC40B0400FDC58BDFEE7C11919B3CAF14189(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(MatOfDMatch_t24E8AC40B0400FDC58BDFEE7C11919B3CAF14189_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) MatOfDMatch_t24E8AC40B0400FDC58BDFEE7C11919B3CAF14189_ComCallableWrapper(obj));
}

// COM Callable Wrapper for OpenCVForUnity.CoreModule.MatOfDouble
struct MatOfDouble_tBA51458194499FC52AB94C22D19DD9F3DDBFDC67_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<MatOfDouble_tBA51458194499FC52AB94C22D19DD9F3DDBFDC67_ComCallableWrapper>, IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301
{
	inline MatOfDouble_tBA51458194499FC52AB94C22D19DD9F3DDBFDC67_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<MatOfDouble_tBA51458194499FC52AB94C22D19DD9F3DDBFDC67_ComCallableWrapper>(obj) {}

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

		if (::memcmp(&iid, &IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301*>(this);
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
		interfaceIds[0] = IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID;

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

	virtual il2cpp_hresult_t STDCALL IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88() IL2CPP_OVERRIDE
	{
		return IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_MatOfDouble_tBA51458194499FC52AB94C22D19DD9F3DDBFDC67(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(MatOfDouble_tBA51458194499FC52AB94C22D19DD9F3DDBFDC67_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) MatOfDouble_tBA51458194499FC52AB94C22D19DD9F3DDBFDC67_ComCallableWrapper(obj));
}

// COM Callable Wrapper for OpenCvSharp.MatOfDouble
struct MatOfDouble_t3A273BBA1C102F3EAF38FA465F72ED0D46C62DCE_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<MatOfDouble_t3A273BBA1C102F3EAF38FA465F72ED0D46C62DCE_ComCallableWrapper>, IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301, IIterable_1_tDCFB8A1343B7EBC250B097A83D6AE3769FD41867, IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C
{
	inline MatOfDouble_t3A273BBA1C102F3EAF38FA465F72ED0D46C62DCE_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<MatOfDouble_t3A273BBA1C102F3EAF38FA465F72ED0D46C62DCE_ComCallableWrapper>(obj) {}

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

		if (::memcmp(&iid, &IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IIterable_1_tDCFB8A1343B7EBC250B097A83D6AE3769FD41867::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_tDCFB8A1343B7EBC250B097A83D6AE3769FD41867*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C*>(this);
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
		interfaceIds[0] = IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID;
		interfaceIds[1] = IIterable_1_tDCFB8A1343B7EBC250B097A83D6AE3769FD41867::IID;
		interfaceIds[2] = IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C::IID;

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

	virtual il2cpp_hresult_t STDCALL IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88() IL2CPP_OVERRIDE
	{
		return IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_mC5C88C9A627725F920A024EC5206C5709195FA68(IIterator_1_t8B60F2B4C43F5A9BF9B71127BCFFA83FBED83093** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_mC5C88C9A627725F920A024EC5206C5709195FA68_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_mE23AC28EC9ADCDD2688247217CF40C800E780B97(IBindableIterator_t63CCD2268CEE8AFAB68518869D47C5BDAF72962F** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_mE23AC28EC9ADCDD2688247217CF40C800E780B97_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_MatOfDouble_t3A273BBA1C102F3EAF38FA465F72ED0D46C62DCE(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(MatOfDouble_t3A273BBA1C102F3EAF38FA465F72ED0D46C62DCE_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) MatOfDouble_t3A273BBA1C102F3EAF38FA465F72ED0D46C62DCE_ComCallableWrapper(obj));
}

// COM Callable Wrapper for OpenCvSharp.MatOfDouble3
struct MatOfDouble3_t1F476854A3B328A2C32466AEB377BE26144ABC69_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<MatOfDouble3_t1F476854A3B328A2C32466AEB377BE26144ABC69_ComCallableWrapper>, IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301, IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C
{
	inline MatOfDouble3_t1F476854A3B328A2C32466AEB377BE26144ABC69_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<MatOfDouble3_t1F476854A3B328A2C32466AEB377BE26144ABC69_ComCallableWrapper>(obj) {}

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

		if (::memcmp(&iid, &IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C*>(this);
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
		interfaceIds[0] = IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID;
		interfaceIds[1] = IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C::IID;

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

	virtual il2cpp_hresult_t STDCALL IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88() IL2CPP_OVERRIDE
	{
		return IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_mE23AC28EC9ADCDD2688247217CF40C800E780B97(IBindableIterator_t63CCD2268CEE8AFAB68518869D47C5BDAF72962F** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_mE23AC28EC9ADCDD2688247217CF40C800E780B97_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_MatOfDouble3_t1F476854A3B328A2C32466AEB377BE26144ABC69(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(MatOfDouble3_t1F476854A3B328A2C32466AEB377BE26144ABC69_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) MatOfDouble3_t1F476854A3B328A2C32466AEB377BE26144ABC69_ComCallableWrapper(obj));
}

// COM Callable Wrapper for OpenCVForUnity.CoreModule.MatOfFloat
struct MatOfFloat_tBDC5574968F3FC69FD7E1D44BCB1BA6750CAD560_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<MatOfFloat_tBDC5574968F3FC69FD7E1D44BCB1BA6750CAD560_ComCallableWrapper>, IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301
{
	inline MatOfFloat_tBDC5574968F3FC69FD7E1D44BCB1BA6750CAD560_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<MatOfFloat_tBDC5574968F3FC69FD7E1D44BCB1BA6750CAD560_ComCallableWrapper>(obj) {}

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

		if (::memcmp(&iid, &IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301*>(this);
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
		interfaceIds[0] = IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID;

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

	virtual il2cpp_hresult_t STDCALL IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88() IL2CPP_OVERRIDE
	{
		return IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_MatOfFloat_tBDC5574968F3FC69FD7E1D44BCB1BA6750CAD560(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(MatOfFloat_tBDC5574968F3FC69FD7E1D44BCB1BA6750CAD560_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) MatOfFloat_tBDC5574968F3FC69FD7E1D44BCB1BA6750CAD560_ComCallableWrapper(obj));
}

// COM Callable Wrapper for OpenCvSharp.MatOfFloat
struct MatOfFloat_t9CDA0825DA73800315FC0829AA2634FF3390D789_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<MatOfFloat_t9CDA0825DA73800315FC0829AA2634FF3390D789_ComCallableWrapper>, IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301, IIterable_1_tC301F3168E128FAB21A5F6FC8662F4C2F1FCEE6D, IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C
{
	inline MatOfFloat_t9CDA0825DA73800315FC0829AA2634FF3390D789_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<MatOfFloat_t9CDA0825DA73800315FC0829AA2634FF3390D789_ComCallableWrapper>(obj) {}

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

		if (::memcmp(&iid, &IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IIterable_1_tC301F3168E128FAB21A5F6FC8662F4C2F1FCEE6D::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_tC301F3168E128FAB21A5F6FC8662F4C2F1FCEE6D*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C*>(this);
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
		interfaceIds[0] = IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID;
		interfaceIds[1] = IIterable_1_tC301F3168E128FAB21A5F6FC8662F4C2F1FCEE6D::IID;
		interfaceIds[2] = IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C::IID;

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

	virtual il2cpp_hresult_t STDCALL IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88() IL2CPP_OVERRIDE
	{
		return IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m1A1B79CA6ECFBBBAF132F733DC5351CB15F47B04(IIterator_1_t1385D68DD78DE574859F9B97BA2D44B82B20F491** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_m1A1B79CA6ECFBBBAF132F733DC5351CB15F47B04_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_mE23AC28EC9ADCDD2688247217CF40C800E780B97(IBindableIterator_t63CCD2268CEE8AFAB68518869D47C5BDAF72962F** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_mE23AC28EC9ADCDD2688247217CF40C800E780B97_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_MatOfFloat_t9CDA0825DA73800315FC0829AA2634FF3390D789(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(MatOfFloat_t9CDA0825DA73800315FC0829AA2634FF3390D789_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) MatOfFloat_t9CDA0825DA73800315FC0829AA2634FF3390D789_ComCallableWrapper(obj));
}

// COM Callable Wrapper for OpenCVForUnity.CoreModule.MatOfFloat4
struct MatOfFloat4_tEAB5312E05B266C889125EB1E819914492EF9237_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<MatOfFloat4_tEAB5312E05B266C889125EB1E819914492EF9237_ComCallableWrapper>, IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301
{
	inline MatOfFloat4_tEAB5312E05B266C889125EB1E819914492EF9237_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<MatOfFloat4_tEAB5312E05B266C889125EB1E819914492EF9237_ComCallableWrapper>(obj) {}

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

		if (::memcmp(&iid, &IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301*>(this);
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
		interfaceIds[0] = IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID;

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

	virtual il2cpp_hresult_t STDCALL IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88() IL2CPP_OVERRIDE
	{
		return IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_MatOfFloat4_tEAB5312E05B266C889125EB1E819914492EF9237(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(MatOfFloat4_tEAB5312E05B266C889125EB1E819914492EF9237_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) MatOfFloat4_tEAB5312E05B266C889125EB1E819914492EF9237_ComCallableWrapper(obj));
}

// COM Callable Wrapper for OpenCvSharp.MatOfFloat4
struct MatOfFloat4_t53A9A0FBDBAD6273854D099B457199D18A2BA35F_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<MatOfFloat4_t53A9A0FBDBAD6273854D099B457199D18A2BA35F_ComCallableWrapper>, IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301, IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C
{
	inline MatOfFloat4_t53A9A0FBDBAD6273854D099B457199D18A2BA35F_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<MatOfFloat4_t53A9A0FBDBAD6273854D099B457199D18A2BA35F_ComCallableWrapper>(obj) {}

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

		if (::memcmp(&iid, &IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C*>(this);
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
		interfaceIds[0] = IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID;
		interfaceIds[1] = IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C::IID;

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

	virtual il2cpp_hresult_t STDCALL IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88() IL2CPP_OVERRIDE
	{
		return IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_mE23AC28EC9ADCDD2688247217CF40C800E780B97(IBindableIterator_t63CCD2268CEE8AFAB68518869D47C5BDAF72962F** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_mE23AC28EC9ADCDD2688247217CF40C800E780B97_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_MatOfFloat4_t53A9A0FBDBAD6273854D099B457199D18A2BA35F(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(MatOfFloat4_t53A9A0FBDBAD6273854D099B457199D18A2BA35F_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) MatOfFloat4_t53A9A0FBDBAD6273854D099B457199D18A2BA35F_ComCallableWrapper(obj));
}

// COM Callable Wrapper for OpenCVForUnity.CoreModule.MatOfFloat6
struct MatOfFloat6_t01608AB7B016D19D6C9573A90B8EDFDE2AF3BA08_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<MatOfFloat6_t01608AB7B016D19D6C9573A90B8EDFDE2AF3BA08_ComCallableWrapper>, IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301
{
	inline MatOfFloat6_t01608AB7B016D19D6C9573A90B8EDFDE2AF3BA08_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<MatOfFloat6_t01608AB7B016D19D6C9573A90B8EDFDE2AF3BA08_ComCallableWrapper>(obj) {}

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

		if (::memcmp(&iid, &IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301*>(this);
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
		interfaceIds[0] = IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID;

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

	virtual il2cpp_hresult_t STDCALL IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88() IL2CPP_OVERRIDE
	{
		return IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_MatOfFloat6_t01608AB7B016D19D6C9573A90B8EDFDE2AF3BA08(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(MatOfFloat6_t01608AB7B016D19D6C9573A90B8EDFDE2AF3BA08_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) MatOfFloat6_t01608AB7B016D19D6C9573A90B8EDFDE2AF3BA08_ComCallableWrapper(obj));
}

// COM Callable Wrapper for OpenCvSharp.MatOfFloat6
struct MatOfFloat6_t122A47ECD573B752F6900B02E79556FE3F995CBA_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<MatOfFloat6_t122A47ECD573B752F6900B02E79556FE3F995CBA_ComCallableWrapper>, IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301, IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C
{
	inline MatOfFloat6_t122A47ECD573B752F6900B02E79556FE3F995CBA_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<MatOfFloat6_t122A47ECD573B752F6900B02E79556FE3F995CBA_ComCallableWrapper>(obj) {}

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

		if (::memcmp(&iid, &IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C*>(this);
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
		interfaceIds[0] = IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID;
		interfaceIds[1] = IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C::IID;

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

	virtual il2cpp_hresult_t STDCALL IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88() IL2CPP_OVERRIDE
	{
		return IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_mE23AC28EC9ADCDD2688247217CF40C800E780B97(IBindableIterator_t63CCD2268CEE8AFAB68518869D47C5BDAF72962F** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_mE23AC28EC9ADCDD2688247217CF40C800E780B97_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_MatOfFloat6_t122A47ECD573B752F6900B02E79556FE3F995CBA(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(MatOfFloat6_t122A47ECD573B752F6900B02E79556FE3F995CBA_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) MatOfFloat6_t122A47ECD573B752F6900B02E79556FE3F995CBA_ComCallableWrapper(obj));
}

// COM Callable Wrapper for OpenCVForUnity.CoreModule.MatOfInt
struct MatOfInt_tF448E1CAFC4F5ED74C8EEBC343DF8B0443E001F1_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<MatOfInt_tF448E1CAFC4F5ED74C8EEBC343DF8B0443E001F1_ComCallableWrapper>, IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301
{
	inline MatOfInt_tF448E1CAFC4F5ED74C8EEBC343DF8B0443E001F1_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<MatOfInt_tF448E1CAFC4F5ED74C8EEBC343DF8B0443E001F1_ComCallableWrapper>(obj) {}

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

		if (::memcmp(&iid, &IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301*>(this);
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
		interfaceIds[0] = IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID;

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

	virtual il2cpp_hresult_t STDCALL IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88() IL2CPP_OVERRIDE
	{
		return IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_MatOfInt_tF448E1CAFC4F5ED74C8EEBC343DF8B0443E001F1(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(MatOfInt_tF448E1CAFC4F5ED74C8EEBC343DF8B0443E001F1_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) MatOfInt_tF448E1CAFC4F5ED74C8EEBC343DF8B0443E001F1_ComCallableWrapper(obj));
}

// COM Callable Wrapper for OpenCvSharp.MatOfInt
struct MatOfInt_tD82F1CA4A733C89BEE4D648DB74A56FBE2234426_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<MatOfInt_tD82F1CA4A733C89BEE4D648DB74A56FBE2234426_ComCallableWrapper>, IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301, IIterable_1_tA41E013D75239E8CF5D90C342477FB03D8D477EC, IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C
{
	inline MatOfInt_tD82F1CA4A733C89BEE4D648DB74A56FBE2234426_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<MatOfInt_tD82F1CA4A733C89BEE4D648DB74A56FBE2234426_ComCallableWrapper>(obj) {}

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

		if (::memcmp(&iid, &IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IIterable_1_tA41E013D75239E8CF5D90C342477FB03D8D477EC::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_tA41E013D75239E8CF5D90C342477FB03D8D477EC*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C*>(this);
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
		interfaceIds[0] = IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID;
		interfaceIds[1] = IIterable_1_tA41E013D75239E8CF5D90C342477FB03D8D477EC::IID;
		interfaceIds[2] = IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C::IID;

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

	virtual il2cpp_hresult_t STDCALL IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88() IL2CPP_OVERRIDE
	{
		return IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m78139ADFF5FE80ABD7C852457E456C05CF261D52(IIterator_1_t48E0DED97AB1D2133B95C8B4EF2944BA7D206925** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_m78139ADFF5FE80ABD7C852457E456C05CF261D52_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_mE23AC28EC9ADCDD2688247217CF40C800E780B97(IBindableIterator_t63CCD2268CEE8AFAB68518869D47C5BDAF72962F** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_mE23AC28EC9ADCDD2688247217CF40C800E780B97_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_MatOfInt_tD82F1CA4A733C89BEE4D648DB74A56FBE2234426(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(MatOfInt_tD82F1CA4A733C89BEE4D648DB74A56FBE2234426_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) MatOfInt_tD82F1CA4A733C89BEE4D648DB74A56FBE2234426_ComCallableWrapper(obj));
}

// COM Callable Wrapper for OpenCVForUnity.CoreModule.MatOfInt4
struct MatOfInt4_tD393974F7443BF081BA53AC322B6FD5ACB0DFC15_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<MatOfInt4_tD393974F7443BF081BA53AC322B6FD5ACB0DFC15_ComCallableWrapper>, IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301
{
	inline MatOfInt4_tD393974F7443BF081BA53AC322B6FD5ACB0DFC15_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<MatOfInt4_tD393974F7443BF081BA53AC322B6FD5ACB0DFC15_ComCallableWrapper>(obj) {}

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

		if (::memcmp(&iid, &IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301*>(this);
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
		interfaceIds[0] = IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID;

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

	virtual il2cpp_hresult_t STDCALL IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88() IL2CPP_OVERRIDE
	{
		return IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_MatOfInt4_tD393974F7443BF081BA53AC322B6FD5ACB0DFC15(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(MatOfInt4_tD393974F7443BF081BA53AC322B6FD5ACB0DFC15_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) MatOfInt4_tD393974F7443BF081BA53AC322B6FD5ACB0DFC15_ComCallableWrapper(obj));
}

// COM Callable Wrapper for OpenCvSharp.MatOfInt4
struct MatOfInt4_t5F86255CFC3F1B9AB68F6AD81B192B8E0B27C7FF_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<MatOfInt4_t5F86255CFC3F1B9AB68F6AD81B192B8E0B27C7FF_ComCallableWrapper>, IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301, IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C
{
	inline MatOfInt4_t5F86255CFC3F1B9AB68F6AD81B192B8E0B27C7FF_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<MatOfInt4_t5F86255CFC3F1B9AB68F6AD81B192B8E0B27C7FF_ComCallableWrapper>(obj) {}

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

		if (::memcmp(&iid, &IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C*>(this);
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
		interfaceIds[0] = IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID;
		interfaceIds[1] = IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C::IID;

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

	virtual il2cpp_hresult_t STDCALL IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88() IL2CPP_OVERRIDE
	{
		return IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_mE23AC28EC9ADCDD2688247217CF40C800E780B97(IBindableIterator_t63CCD2268CEE8AFAB68518869D47C5BDAF72962F** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_mE23AC28EC9ADCDD2688247217CF40C800E780B97_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_MatOfInt4_t5F86255CFC3F1B9AB68F6AD81B192B8E0B27C7FF(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(MatOfInt4_t5F86255CFC3F1B9AB68F6AD81B192B8E0B27C7FF_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) MatOfInt4_t5F86255CFC3F1B9AB68F6AD81B192B8E0B27C7FF_ComCallableWrapper(obj));
}

// COM Callable Wrapper for OpenCVForUnity.CoreModule.MatOfKeyPoint
struct MatOfKeyPoint_t2A0AB9953D4364441D9E1C02FC37614DEA3F2963_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<MatOfKeyPoint_t2A0AB9953D4364441D9E1C02FC37614DEA3F2963_ComCallableWrapper>, IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301
{
	inline MatOfKeyPoint_t2A0AB9953D4364441D9E1C02FC37614DEA3F2963_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<MatOfKeyPoint_t2A0AB9953D4364441D9E1C02FC37614DEA3F2963_ComCallableWrapper>(obj) {}

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

		if (::memcmp(&iid, &IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301*>(this);
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
		interfaceIds[0] = IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID;

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

	virtual il2cpp_hresult_t STDCALL IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88() IL2CPP_OVERRIDE
	{
		return IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_MatOfKeyPoint_t2A0AB9953D4364441D9E1C02FC37614DEA3F2963(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(MatOfKeyPoint_t2A0AB9953D4364441D9E1C02FC37614DEA3F2963_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) MatOfKeyPoint_t2A0AB9953D4364441D9E1C02FC37614DEA3F2963_ComCallableWrapper(obj));
}

// COM Callable Wrapper for OpenCVForUnity.CoreModule.MatOfPoint
struct MatOfPoint_t1E782911B35F7971BFC1CFECD9CBFFA192202364_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<MatOfPoint_t1E782911B35F7971BFC1CFECD9CBFFA192202364_ComCallableWrapper>, IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301
{
	inline MatOfPoint_t1E782911B35F7971BFC1CFECD9CBFFA192202364_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<MatOfPoint_t1E782911B35F7971BFC1CFECD9CBFFA192202364_ComCallableWrapper>(obj) {}

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

		if (::memcmp(&iid, &IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301*>(this);
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
		interfaceIds[0] = IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID;

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

	virtual il2cpp_hresult_t STDCALL IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88() IL2CPP_OVERRIDE
	{
		return IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_MatOfPoint_t1E782911B35F7971BFC1CFECD9CBFFA192202364(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(MatOfPoint_t1E782911B35F7971BFC1CFECD9CBFFA192202364_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) MatOfPoint_t1E782911B35F7971BFC1CFECD9CBFFA192202364_ComCallableWrapper(obj));
}

// COM Callable Wrapper for OpenCvSharp.MatOfPoint
struct MatOfPoint_t31FAB946839C7898CD9B57CD9A5DC34E58FF9EC6_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<MatOfPoint_t31FAB946839C7898CD9B57CD9A5DC34E58FF9EC6_ComCallableWrapper>, IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301, IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C
{
	inline MatOfPoint_t31FAB946839C7898CD9B57CD9A5DC34E58FF9EC6_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<MatOfPoint_t31FAB946839C7898CD9B57CD9A5DC34E58FF9EC6_ComCallableWrapper>(obj) {}

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

		if (::memcmp(&iid, &IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C*>(this);
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
		interfaceIds[0] = IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID;
		interfaceIds[1] = IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C::IID;

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

	virtual il2cpp_hresult_t STDCALL IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88() IL2CPP_OVERRIDE
	{
		return IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_mE23AC28EC9ADCDD2688247217CF40C800E780B97(IBindableIterator_t63CCD2268CEE8AFAB68518869D47C5BDAF72962F** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_mE23AC28EC9ADCDD2688247217CF40C800E780B97_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_MatOfPoint_t31FAB946839C7898CD9B57CD9A5DC34E58FF9EC6(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(MatOfPoint_t31FAB946839C7898CD9B57CD9A5DC34E58FF9EC6_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) MatOfPoint_t31FAB946839C7898CD9B57CD9A5DC34E58FF9EC6_ComCallableWrapper(obj));
}

// COM Callable Wrapper for OpenCvSharp.MatOfPoint2d
struct MatOfPoint2d_tCFB5C822F6B9F3347D1CC7162FE1D08DA307D487_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<MatOfPoint2d_tCFB5C822F6B9F3347D1CC7162FE1D08DA307D487_ComCallableWrapper>, IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301, IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C
{
	inline MatOfPoint2d_tCFB5C822F6B9F3347D1CC7162FE1D08DA307D487_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<MatOfPoint2d_tCFB5C822F6B9F3347D1CC7162FE1D08DA307D487_ComCallableWrapper>(obj) {}

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

		if (::memcmp(&iid, &IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C*>(this);
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
		interfaceIds[0] = IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID;
		interfaceIds[1] = IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C::IID;

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

	virtual il2cpp_hresult_t STDCALL IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88() IL2CPP_OVERRIDE
	{
		return IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_mE23AC28EC9ADCDD2688247217CF40C800E780B97(IBindableIterator_t63CCD2268CEE8AFAB68518869D47C5BDAF72962F** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_mE23AC28EC9ADCDD2688247217CF40C800E780B97_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_MatOfPoint2d_tCFB5C822F6B9F3347D1CC7162FE1D08DA307D487(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(MatOfPoint2d_tCFB5C822F6B9F3347D1CC7162FE1D08DA307D487_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) MatOfPoint2d_tCFB5C822F6B9F3347D1CC7162FE1D08DA307D487_ComCallableWrapper(obj));
}

// COM Callable Wrapper for OpenCVForUnity.CoreModule.MatOfPoint2f
struct MatOfPoint2f_t40FB7D077E2AB52FACCAA0CDC1F9E692079FA438_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<MatOfPoint2f_t40FB7D077E2AB52FACCAA0CDC1F9E692079FA438_ComCallableWrapper>, IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301
{
	inline MatOfPoint2f_t40FB7D077E2AB52FACCAA0CDC1F9E692079FA438_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<MatOfPoint2f_t40FB7D077E2AB52FACCAA0CDC1F9E692079FA438_ComCallableWrapper>(obj) {}

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

		if (::memcmp(&iid, &IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301*>(this);
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
		interfaceIds[0] = IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID;

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

	virtual il2cpp_hresult_t STDCALL IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88() IL2CPP_OVERRIDE
	{
		return IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_MatOfPoint2f_t40FB7D077E2AB52FACCAA0CDC1F9E692079FA438(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(MatOfPoint2f_t40FB7D077E2AB52FACCAA0CDC1F9E692079FA438_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) MatOfPoint2f_t40FB7D077E2AB52FACCAA0CDC1F9E692079FA438_ComCallableWrapper(obj));
}

// COM Callable Wrapper for OpenCvSharp.MatOfPoint2f
struct MatOfPoint2f_tE23B49AFC91040CE490A53E50279F71F4DB61644_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<MatOfPoint2f_tE23B49AFC91040CE490A53E50279F71F4DB61644_ComCallableWrapper>, IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301, IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C
{
	inline MatOfPoint2f_tE23B49AFC91040CE490A53E50279F71F4DB61644_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<MatOfPoint2f_tE23B49AFC91040CE490A53E50279F71F4DB61644_ComCallableWrapper>(obj) {}

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

		if (::memcmp(&iid, &IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C*>(this);
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
		interfaceIds[0] = IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID;
		interfaceIds[1] = IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C::IID;

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

	virtual il2cpp_hresult_t STDCALL IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88() IL2CPP_OVERRIDE
	{
		return IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_mE23AC28EC9ADCDD2688247217CF40C800E780B97(IBindableIterator_t63CCD2268CEE8AFAB68518869D47C5BDAF72962F** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_mE23AC28EC9ADCDD2688247217CF40C800E780B97_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_MatOfPoint2f_tE23B49AFC91040CE490A53E50279F71F4DB61644(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(MatOfPoint2f_tE23B49AFC91040CE490A53E50279F71F4DB61644_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) MatOfPoint2f_tE23B49AFC91040CE490A53E50279F71F4DB61644_ComCallableWrapper(obj));
}

// COM Callable Wrapper for OpenCVForUnity.CoreModule.MatOfPoint3
struct MatOfPoint3_tA0B8EF68BBAD0DEDD52828E1939C466B71AFCA79_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<MatOfPoint3_tA0B8EF68BBAD0DEDD52828E1939C466B71AFCA79_ComCallableWrapper>, IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301
{
	inline MatOfPoint3_tA0B8EF68BBAD0DEDD52828E1939C466B71AFCA79_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<MatOfPoint3_tA0B8EF68BBAD0DEDD52828E1939C466B71AFCA79_ComCallableWrapper>(obj) {}

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

		if (::memcmp(&iid, &IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301*>(this);
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
		interfaceIds[0] = IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID;

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

	virtual il2cpp_hresult_t STDCALL IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88() IL2CPP_OVERRIDE
	{
		return IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_MatOfPoint3_tA0B8EF68BBAD0DEDD52828E1939C466B71AFCA79(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(MatOfPoint3_tA0B8EF68BBAD0DEDD52828E1939C466B71AFCA79_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) MatOfPoint3_tA0B8EF68BBAD0DEDD52828E1939C466B71AFCA79_ComCallableWrapper(obj));
}

// COM Callable Wrapper for OpenCvSharp.MatOfPoint3d
struct MatOfPoint3d_tA7CA23590FC2B11523EC461B32B12C89042D11C5_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<MatOfPoint3d_tA7CA23590FC2B11523EC461B32B12C89042D11C5_ComCallableWrapper>, IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301, IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C
{
	inline MatOfPoint3d_tA7CA23590FC2B11523EC461B32B12C89042D11C5_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<MatOfPoint3d_tA7CA23590FC2B11523EC461B32B12C89042D11C5_ComCallableWrapper>(obj) {}

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

		if (::memcmp(&iid, &IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C*>(this);
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
		interfaceIds[0] = IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID;
		interfaceIds[1] = IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C::IID;

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

	virtual il2cpp_hresult_t STDCALL IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88() IL2CPP_OVERRIDE
	{
		return IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_mE23AC28EC9ADCDD2688247217CF40C800E780B97(IBindableIterator_t63CCD2268CEE8AFAB68518869D47C5BDAF72962F** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_mE23AC28EC9ADCDD2688247217CF40C800E780B97_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_MatOfPoint3d_tA7CA23590FC2B11523EC461B32B12C89042D11C5(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(MatOfPoint3d_tA7CA23590FC2B11523EC461B32B12C89042D11C5_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) MatOfPoint3d_tA7CA23590FC2B11523EC461B32B12C89042D11C5_ComCallableWrapper(obj));
}

// COM Callable Wrapper for OpenCVForUnity.CoreModule.MatOfPoint3f
struct MatOfPoint3f_tBCD10F4A80F2B14BDE8C3CA1686898F0295CB14A_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<MatOfPoint3f_tBCD10F4A80F2B14BDE8C3CA1686898F0295CB14A_ComCallableWrapper>, IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301
{
	inline MatOfPoint3f_tBCD10F4A80F2B14BDE8C3CA1686898F0295CB14A_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<MatOfPoint3f_tBCD10F4A80F2B14BDE8C3CA1686898F0295CB14A_ComCallableWrapper>(obj) {}

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

		if (::memcmp(&iid, &IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301*>(this);
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
		interfaceIds[0] = IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID;

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

	virtual il2cpp_hresult_t STDCALL IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88() IL2CPP_OVERRIDE
	{
		return IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_MatOfPoint3f_tBCD10F4A80F2B14BDE8C3CA1686898F0295CB14A(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(MatOfPoint3f_tBCD10F4A80F2B14BDE8C3CA1686898F0295CB14A_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) MatOfPoint3f_tBCD10F4A80F2B14BDE8C3CA1686898F0295CB14A_ComCallableWrapper(obj));
}

// COM Callable Wrapper for OpenCvSharp.MatOfPoint3f
struct MatOfPoint3f_tDE5E0AFE63B11183028AA7E84447D04BDBFA6BDF_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<MatOfPoint3f_tDE5E0AFE63B11183028AA7E84447D04BDBFA6BDF_ComCallableWrapper>, IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301, IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C
{
	inline MatOfPoint3f_tDE5E0AFE63B11183028AA7E84447D04BDBFA6BDF_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<MatOfPoint3f_tDE5E0AFE63B11183028AA7E84447D04BDBFA6BDF_ComCallableWrapper>(obj) {}

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

		if (::memcmp(&iid, &IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C*>(this);
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
		interfaceIds[0] = IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID;
		interfaceIds[1] = IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C::IID;

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

	virtual il2cpp_hresult_t STDCALL IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88() IL2CPP_OVERRIDE
	{
		return IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_mE23AC28EC9ADCDD2688247217CF40C800E780B97(IBindableIterator_t63CCD2268CEE8AFAB68518869D47C5BDAF72962F** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_mE23AC28EC9ADCDD2688247217CF40C800E780B97_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_MatOfPoint3f_tDE5E0AFE63B11183028AA7E84447D04BDBFA6BDF(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(MatOfPoint3f_tDE5E0AFE63B11183028AA7E84447D04BDBFA6BDF_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) MatOfPoint3f_tDE5E0AFE63B11183028AA7E84447D04BDBFA6BDF_ComCallableWrapper(obj));
}

// COM Callable Wrapper for OpenCvSharp.MatOfPoint3i
struct MatOfPoint3i_t6E1B7490CAE7680F515419C1C8FA7BC0E10846C2_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<MatOfPoint3i_t6E1B7490CAE7680F515419C1C8FA7BC0E10846C2_ComCallableWrapper>, IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301, IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C
{
	inline MatOfPoint3i_t6E1B7490CAE7680F515419C1C8FA7BC0E10846C2_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<MatOfPoint3i_t6E1B7490CAE7680F515419C1C8FA7BC0E10846C2_ComCallableWrapper>(obj) {}

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

		if (::memcmp(&iid, &IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C*>(this);
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
		interfaceIds[0] = IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID;
		interfaceIds[1] = IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C::IID;

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

	virtual il2cpp_hresult_t STDCALL IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88() IL2CPP_OVERRIDE
	{
		return IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_mE23AC28EC9ADCDD2688247217CF40C800E780B97(IBindableIterator_t63CCD2268CEE8AFAB68518869D47C5BDAF72962F** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_mE23AC28EC9ADCDD2688247217CF40C800E780B97_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_MatOfPoint3i_t6E1B7490CAE7680F515419C1C8FA7BC0E10846C2(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(MatOfPoint3i_t6E1B7490CAE7680F515419C1C8FA7BC0E10846C2_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) MatOfPoint3i_t6E1B7490CAE7680F515419C1C8FA7BC0E10846C2_ComCallableWrapper(obj));
}

// COM Callable Wrapper for OpenCVForUnity.CoreModule.MatOfRect
struct MatOfRect_tA0868F3125B288CFB8E78FB62A93744D5382D85C_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<MatOfRect_tA0868F3125B288CFB8E78FB62A93744D5382D85C_ComCallableWrapper>, IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301
{
	inline MatOfRect_tA0868F3125B288CFB8E78FB62A93744D5382D85C_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<MatOfRect_tA0868F3125B288CFB8E78FB62A93744D5382D85C_ComCallableWrapper>(obj) {}

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

		if (::memcmp(&iid, &IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301*>(this);
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
		interfaceIds[0] = IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID;

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

	virtual il2cpp_hresult_t STDCALL IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88() IL2CPP_OVERRIDE
	{
		return IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_MatOfRect_tA0868F3125B288CFB8E78FB62A93744D5382D85C(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(MatOfRect_tA0868F3125B288CFB8E78FB62A93744D5382D85C_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) MatOfRect_tA0868F3125B288CFB8E78FB62A93744D5382D85C_ComCallableWrapper(obj));
}

// COM Callable Wrapper for OpenCvSharp.MatOfRect
struct MatOfRect_tA1BF3C86B209AFFA8A6C79844624B4F1122A1AC1_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<MatOfRect_tA1BF3C86B209AFFA8A6C79844624B4F1122A1AC1_ComCallableWrapper>, IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301, IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C
{
	inline MatOfRect_tA1BF3C86B209AFFA8A6C79844624B4F1122A1AC1_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<MatOfRect_tA1BF3C86B209AFFA8A6C79844624B4F1122A1AC1_ComCallableWrapper>(obj) {}

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

		if (::memcmp(&iid, &IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C*>(this);
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
		interfaceIds[0] = IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID;
		interfaceIds[1] = IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C::IID;

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

	virtual il2cpp_hresult_t STDCALL IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88() IL2CPP_OVERRIDE
	{
		return IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_mE23AC28EC9ADCDD2688247217CF40C800E780B97(IBindableIterator_t63CCD2268CEE8AFAB68518869D47C5BDAF72962F** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_mE23AC28EC9ADCDD2688247217CF40C800E780B97_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_MatOfRect_tA1BF3C86B209AFFA8A6C79844624B4F1122A1AC1(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(MatOfRect_tA1BF3C86B209AFFA8A6C79844624B4F1122A1AC1_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) MatOfRect_tA1BF3C86B209AFFA8A6C79844624B4F1122A1AC1_ComCallableWrapper(obj));
}

// COM Callable Wrapper for OpenCVForUnity.CoreModule.MatOfRect2d
struct MatOfRect2d_tBF10E121B4C750F33BE91B2CBEF11D491F78691A_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<MatOfRect2d_tBF10E121B4C750F33BE91B2CBEF11D491F78691A_ComCallableWrapper>, IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301
{
	inline MatOfRect2d_tBF10E121B4C750F33BE91B2CBEF11D491F78691A_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<MatOfRect2d_tBF10E121B4C750F33BE91B2CBEF11D491F78691A_ComCallableWrapper>(obj) {}

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

		if (::memcmp(&iid, &IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301*>(this);
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
		interfaceIds[0] = IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID;

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

	virtual il2cpp_hresult_t STDCALL IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88() IL2CPP_OVERRIDE
	{
		return IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_MatOfRect2d_tBF10E121B4C750F33BE91B2CBEF11D491F78691A(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(MatOfRect2d_tBF10E121B4C750F33BE91B2CBEF11D491F78691A_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) MatOfRect2d_tBF10E121B4C750F33BE91B2CBEF11D491F78691A_ComCallableWrapper(obj));
}

// COM Callable Wrapper for OpenCVForUnity.CoreModule.MatOfRotatedRect
struct MatOfRotatedRect_tD519C7FC95FBF9B4A02DEF6A63A868A33852AF8D_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<MatOfRotatedRect_tD519C7FC95FBF9B4A02DEF6A63A868A33852AF8D_ComCallableWrapper>, IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301
{
	inline MatOfRotatedRect_tD519C7FC95FBF9B4A02DEF6A63A868A33852AF8D_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<MatOfRotatedRect_tD519C7FC95FBF9B4A02DEF6A63A868A33852AF8D_ComCallableWrapper>(obj) {}

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

		if (::memcmp(&iid, &IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301*>(this);
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
		interfaceIds[0] = IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID;

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

	virtual il2cpp_hresult_t STDCALL IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88() IL2CPP_OVERRIDE
	{
		return IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_MatOfRotatedRect_tD519C7FC95FBF9B4A02DEF6A63A868A33852AF8D(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(MatOfRotatedRect_tD519C7FC95FBF9B4A02DEF6A63A868A33852AF8D_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) MatOfRotatedRect_tD519C7FC95FBF9B4A02DEF6A63A868A33852AF8D_ComCallableWrapper(obj));
}

// COM Callable Wrapper for OpenCvSharp.MatOfShort
struct MatOfShort_tA7407EFE1C72D82442E2FA2E3CA33BE78A6E66C1_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<MatOfShort_tA7407EFE1C72D82442E2FA2E3CA33BE78A6E66C1_ComCallableWrapper>, IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301, IIterable_1_t05ECB6413006190415595FAF988F7FC58B68C0E4, IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C
{
	inline MatOfShort_tA7407EFE1C72D82442E2FA2E3CA33BE78A6E66C1_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<MatOfShort_tA7407EFE1C72D82442E2FA2E3CA33BE78A6E66C1_ComCallableWrapper>(obj) {}

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

		if (::memcmp(&iid, &IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IIterable_1_t05ECB6413006190415595FAF988F7FC58B68C0E4::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_t05ECB6413006190415595FAF988F7FC58B68C0E4*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C*>(this);
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
		interfaceIds[0] = IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID;
		interfaceIds[1] = IIterable_1_t05ECB6413006190415595FAF988F7FC58B68C0E4::IID;
		interfaceIds[2] = IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C::IID;

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

	virtual il2cpp_hresult_t STDCALL IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88() IL2CPP_OVERRIDE
	{
		return IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m6667194B100A1F3FD8CF7F2152E82FACFD94A71A(IIterator_1_tF583809CCB8352594ECF618514369A62FB02C08B** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_m6667194B100A1F3FD8CF7F2152E82FACFD94A71A_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_mE23AC28EC9ADCDD2688247217CF40C800E780B97(IBindableIterator_t63CCD2268CEE8AFAB68518869D47C5BDAF72962F** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_mE23AC28EC9ADCDD2688247217CF40C800E780B97_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_MatOfShort_tA7407EFE1C72D82442E2FA2E3CA33BE78A6E66C1(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(MatOfShort_tA7407EFE1C72D82442E2FA2E3CA33BE78A6E66C1_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) MatOfShort_tA7407EFE1C72D82442E2FA2E3CA33BE78A6E66C1_ComCallableWrapper(obj));
}

// COM Callable Wrapper for OpenCvSharp.MatOfUShort
struct MatOfUShort_tA0D96C9B58CD7430A5D4CFEF2278B59BA1A74A89_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<MatOfUShort_tA0D96C9B58CD7430A5D4CFEF2278B59BA1A74A89_ComCallableWrapper>, IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301, IIterable_1_tF1076E2F7D7B74FA27141A3CBFD8034AB582D4CB, IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C
{
	inline MatOfUShort_tA0D96C9B58CD7430A5D4CFEF2278B59BA1A74A89_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<MatOfUShort_tA0D96C9B58CD7430A5D4CFEF2278B59BA1A74A89_ComCallableWrapper>(obj) {}

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

		if (::memcmp(&iid, &IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IIterable_1_tF1076E2F7D7B74FA27141A3CBFD8034AB582D4CB::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_tF1076E2F7D7B74FA27141A3CBFD8034AB582D4CB*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C*>(this);
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
		interfaceIds[0] = IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID;
		interfaceIds[1] = IIterable_1_tF1076E2F7D7B74FA27141A3CBFD8034AB582D4CB::IID;
		interfaceIds[2] = IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C::IID;

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

	virtual il2cpp_hresult_t STDCALL IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88() IL2CPP_OVERRIDE
	{
		return IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_mCCFFE98FE15F64FE2036DCD0E36D187CA86C0D88(IIterator_1_t5DCB8CA63A25200B119FDF7632313A6EDB756A49** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_mCCFFE98FE15F64FE2036DCD0E36D187CA86C0D88_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_mE23AC28EC9ADCDD2688247217CF40C800E780B97(IBindableIterator_t63CCD2268CEE8AFAB68518869D47C5BDAF72962F** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_mE23AC28EC9ADCDD2688247217CF40C800E780B97_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_MatOfUShort_tA0D96C9B58CD7430A5D4CFEF2278B59BA1A74A89(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(MatOfUShort_tA0D96C9B58CD7430A5D4CFEF2278B59BA1A74A89_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) MatOfUShort_tA0D96C9B58CD7430A5D4CFEF2278B59BA1A74A89_ComCallableWrapper(obj));
}

// COM Callable Wrapper for OpenCvSharp.MatProxy
struct MatProxy_t6DC4CCFE1D1D7B9AB4B4CD91C5FDBFDBD26803B8_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<MatProxy_t6DC4CCFE1D1D7B9AB4B4CD91C5FDBFDBD26803B8_ComCallableWrapper>, IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301
{
	inline MatProxy_t6DC4CCFE1D1D7B9AB4B4CD91C5FDBFDBD26803B8_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<MatProxy_t6DC4CCFE1D1D7B9AB4B4CD91C5FDBFDBD26803B8_ComCallableWrapper>(obj) {}

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

		if (::memcmp(&iid, &IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301*>(this);
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
		interfaceIds[0] = IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID;

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

	virtual il2cpp_hresult_t STDCALL IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88() IL2CPP_OVERRIDE
	{
		return IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_MatProxy_t6DC4CCFE1D1D7B9AB4B4CD91C5FDBFDBD26803B8(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(MatProxy_t6DC4CCFE1D1D7B9AB4B4CD91C5FDBFDBD26803B8_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) MatProxy_t6DC4CCFE1D1D7B9AB4B4CD91C5FDBFDBD26803B8_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Text.RegularExpressions.MatchCollection
struct MatchCollection_t84805BAED3D556A405EE3FD165856045026106BC_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<MatchCollection_t84805BAED3D556A405EE3FD165856045026106BC_ComCallableWrapper>, IIterable_1_t19EB3EB244CE5A0D42C41D17F13AA3B06D3C850D, IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C, IVectorView_1_t80C57016D46A1954BF56BD02FC3DAA7C0D85FFD6, IBindableVector_tAE2FC72291BFE4E2FE6FCE88670236BBA429833A
{
	inline MatchCollection_t84805BAED3D556A405EE3FD165856045026106BC_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<MatchCollection_t84805BAED3D556A405EE3FD165856045026106BC_ComCallableWrapper>(obj) {}

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

		if (::memcmp(&iid, &IIterable_1_t19EB3EB244CE5A0D42C41D17F13AA3B06D3C850D::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_t19EB3EB244CE5A0D42C41D17F13AA3B06D3C850D*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IVectorView_1_t80C57016D46A1954BF56BD02FC3DAA7C0D85FFD6::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IVectorView_1_t80C57016D46A1954BF56BD02FC3DAA7C0D85FFD6*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableVector_tAE2FC72291BFE4E2FE6FCE88670236BBA429833A::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableVector_tAE2FC72291BFE4E2FE6FCE88670236BBA429833A*>(this);
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
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(4);
		interfaceIds[0] = IIterable_1_t19EB3EB244CE5A0D42C41D17F13AA3B06D3C850D::IID;
		interfaceIds[1] = IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C::IID;
		interfaceIds[2] = IVectorView_1_t80C57016D46A1954BF56BD02FC3DAA7C0D85FFD6::IID;
		interfaceIds[3] = IBindableVector_tAE2FC72291BFE4E2FE6FCE88670236BBA429833A::IID;

		*iidCount = 4;
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

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m3C4CBD4CBFF5D217BC350258F4FA9D1AC8B7F76C(IIterator_1_tCD324A8CB8C6E90BDFF46D5256D8DDCC46C41274** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_m3C4CBD4CBFF5D217BC350258F4FA9D1AC8B7F76C_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_mE23AC28EC9ADCDD2688247217CF40C800E780B97(IBindableIterator_t63CCD2268CEE8AFAB68518869D47C5BDAF72962F** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_mE23AC28EC9ADCDD2688247217CF40C800E780B97_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetAt_mDA227019DDF2A9D2861B27ED32C865B867604223(uint32_t ___index0, Il2CppIInspectable** comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_GetAt_mDA227019DDF2A9D2861B27ED32C865B867604223_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_get_Size_m16DC683E3A92C0E6840B57EBFC92D3ADBF50202E(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_get_Size_m16DC683E3A92C0E6840B57EBFC92D3ADBF50202E_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_IndexOf_mD1B3ADF8F80828EF947882105A77BBC892263DA1(Il2CppIInspectable* ___value0, uint32_t* ___index1, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_IndexOf_mD1B3ADF8F80828EF947882105A77BBC892263DA1_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0, ___index1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetMany_m36C9D15C0138BF2C23D62E2457C09DC722A29DA9(uint32_t ___startIndex0, uint32_t ___items1ArraySize, Il2CppIInspectable** ___items1, uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_GetMany_m36C9D15C0138BF2C23D62E2457C09DC722A29DA9_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___startIndex0, ___items1ArraySize, ___items1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_GetAt_mBCD1ADF8844CDBB36A56C8CD9391067180851BD9(uint32_t ___index0, Il2CppIInspectable** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_GetAt_mBCD1ADF8844CDBB36A56C8CD9391067180851BD9_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_get_Size_m835757C5C2780FB18C73A2D34B0C74CB9C24FAC6(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_get_Size_m835757C5C2780FB18C73A2D34B0C74CB9C24FAC6_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_GetView_m0EDD4048AE0A3404A66AD7202161F560DEE9D87F(IBindableVectorView_tCB96F9780FD45A9A323C8212A53608C8A13784B3** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_GetView_m0EDD4048AE0A3404A66AD7202161F560DEE9D87F_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_IndexOf_m6EA6FC052533AB43E049ECDFE20789943A798907(Il2CppIInspectable* ___value0, uint32_t* ___index1, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_IndexOf_m6EA6FC052533AB43E049ECDFE20789943A798907_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0, ___index1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_SetAt_m288413F2AE9C2F853898187EF0F0E5087FD934D0(uint32_t ___index0, Il2CppIInspectable* ___value1) IL2CPP_OVERRIDE
	{
		return IBindableVector_SetAt_m288413F2AE9C2F853898187EF0F0E5087FD934D0_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, ___value1);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_InsertAt_m919BCD142F2F5F1CBD4ABCB9E94113B65C79D431(uint32_t ___index0, Il2CppIInspectable* ___value1) IL2CPP_OVERRIDE
	{
		return IBindableVector_InsertAt_m919BCD142F2F5F1CBD4ABCB9E94113B65C79D431_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, ___value1);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_RemoveAt_m54B727C7320AF1552F630DD4E98DCD7D3CB04538(uint32_t ___index0) IL2CPP_OVERRIDE
	{
		return IBindableVector_RemoveAt_m54B727C7320AF1552F630DD4E98DCD7D3CB04538_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_Append_mAC3F455B05DB32D9681767CD442DEACE2EE7348E(Il2CppIInspectable* ___value0) IL2CPP_OVERRIDE
	{
		return IBindableVector_Append_mAC3F455B05DB32D9681767CD442DEACE2EE7348E_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_RemoveAtEnd_mD4F1D0442F5A0A74C29E5DBCAFB1BFF14E40FC71() IL2CPP_OVERRIDE
	{
		return IBindableVector_RemoveAtEnd_mD4F1D0442F5A0A74C29E5DBCAFB1BFF14E40FC71_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_Clear_m3353A716402EE8270D6D3F2A02863714D7787B7C() IL2CPP_OVERRIDE
	{
		return IBindableVector_Clear_m3353A716402EE8270D6D3F2A02863714D7787B7C_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_MatchCollection_t84805BAED3D556A405EE3FD165856045026106BC(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(MatchCollection_t84805BAED3D556A405EE3FD165856045026106BC_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) MatchCollection_t84805BAED3D556A405EE3FD165856045026106BC_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Numerics.Matrix4x4
struct Matrix4x4_t5F5E1A25D90A40678520AA0DA0C8C4D25E9DD072_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Matrix4x4_t5F5E1A25D90A40678520AA0DA0C8C4D25E9DD072_ComCallableWrapper>, IReference_1_tE7B6A2241447C16114EEA2A0377DC82E94FD895C, IPropertyValue_t5108EBA6BAA9289BD53DB4C9BC6EC2CFD3C71CFF
{
	inline Matrix4x4_t5F5E1A25D90A40678520AA0DA0C8C4D25E9DD072_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Matrix4x4_t5F5E1A25D90A40678520AA0DA0C8C4D25E9DD072_ComCallableWrapper>(obj) {}

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

		if (::memcmp(&iid, &IReference_1_tE7B6A2241447C16114EEA2A0377DC82E94FD895C::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IReference_1_tE7B6A2241447C16114EEA2A0377DC82E94FD895C*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IPropertyValue_t5108EBA6BAA9289BD53DB4C9BC6EC2CFD3C71CFF::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IPropertyValue_t5108EBA6BAA9289BD53DB4C9BC6EC2CFD3C71CFF*>(this);
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
		interfaceIds[0] = IReference_1_tE7B6A2241447C16114EEA2A0377DC82E94FD895C::IID;
		interfaceIds[1] = IPropertyValue_t5108EBA6BAA9289BD53DB4C9BC6EC2CFD3C71CFF::IID;

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

	virtual il2cpp_hresult_t STDCALL IReference_1_get_Value_m9F81F6FB5619520D2021E48FDBAF763F8DAA2062(Matrix4x4_t5F5E1A25D90A40678520AA0DA0C8C4D25E9DD072* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Matrix4x4_t5F5E1A25D90A40678520AA0DA0C8C4D25E9DD072_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		Matrix4x4_t5F5E1A25D90A40678520AA0DA0C8C4D25E9DD072 returnValue;
		try
		{
			returnValue = *static_cast<Matrix4x4_t5F5E1A25D90A40678520AA0DA0C8C4D25E9DD072*>(UnBox(GetManagedObjectInline(), Matrix4x4_t5F5E1A25D90A40678520AA0DA0C8C4D25E9DD072_il2cpp_TypeInfo_var));
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_get_Type_mCCFDCAF3EF47FD26636DF1752C7D0D0F04AF17E5(int32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		int32_t returnValue;
		try
		{
			returnValue = 20;
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_get_IsNumericScalar_m5AA58745E3403667AD93842BD84E1BF3C56C6923(bool* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		bool returnValue;
		try
		{
			returnValue = false;
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt8_mA78B64B2D18688A14857A3385C11D3FBC3DCA0BF(uint8_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Byte");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt16_m893A5F46553C28727129D19D2C657BFD7A82C8EB(int16_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Int16");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt16_mFB50772016E5FDE5548016B10D8BF8F72BAEE51A(uint16_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "UInt16");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt32_m81E687870E8D71B0B56C0F98B9CE901173541F0E(int32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Int32");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt32_m4242C2EB038EC37544C26EC11B33AD7CA1D0315B(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "UInt32");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt64_m69E32181A31DEE4BEB361BB9E81FA3D949862FC9(int64_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Int64");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt64_mAB342E494DC39A847B6430F96A8F02FB9F9774E4(uint64_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "UInt64");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetSingle_mABFDF8CFBAAFF7EEE22AF429911B22EC2DE5318A(float* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Single");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetDouble_mF1DDF1999B7F877B2BA609D09149288E345D45AE(double* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Double");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetChar16_m4B1428420CFDB7DD73878EAB4C8EFEBFBE026EEC(Il2CppChar* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Char16");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetBoolean_m89F937F65167C4337FD9E4A8B0A54369AE41D89D(bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Boolean");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetString_mD2C842F7378384AE6BC0A93033FEE0A85C9E1F28(Il2CppHString* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "String");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetGuid_m560A172386BD6DFC3DEB00D2DF3070EE67DF7B71(Guid_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Guid");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetDateTime_mC3F8B04EF7625215AF66FB7B5C4EFDDC4163967D(DateTime_tB8F64A9E141FDC202144C06531C4E7D4B6C59CB0* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "DateTime");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetTimeSpan_m5B8EF6C6B2BE4370F48B6AA715236DDD019A657A(TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "TimeSpan");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetPoint_m6DE3D27C8479F2C44665EF1D86D76E004AC3B00D(Point_tC7E550DD1555DAAAA7CA4F85656FA70F81C23B18* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Point");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetSize_mD27A291FCF475860FD4C5CC19C1C361902537662(Size_t463A0E21871C29D10F032F5EF3EAF615806D8A05* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Size");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetRect_mF069EFA36FB5E7469FABE6CC04471B4434E507AE(Rect_t30CC1879BAAB779EAEA49A91ACA636D57101EE48* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Rect");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt8Array_mEEA85229904BFBD5DD63209A9F4858EA6A36C484(uint32_t* ___value0ArraySize, uint8_t** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Byte[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt16Array_mAF964E8DCE5EE8D9703DB63D5181CD92C344FAA9(uint32_t* ___value0ArraySize, int16_t** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Int16[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt16Array_mE6ECF01E37BD858FF14518C8EC0605D1BFD4CAC6(uint32_t* ___value0ArraySize, uint16_t** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "UInt16[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt32Array_m27D54E06B02528F7056A07F224A1552A36FDEB46(uint32_t* ___value0ArraySize, int32_t** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Int32[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt32Array_mAF7ECA68A945A7AA0F35D3A3962A4EA49954CEAE(uint32_t* ___value0ArraySize, uint32_t** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "UInt32[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt64Array_mDC9606845A993ED32A95F889C71B67C8A05DF4BC(uint32_t* ___value0ArraySize, int64_t** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Int64[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt64Array_mB59E8769BB20C16BBAC4D08A3861B7019B9D2514(uint32_t* ___value0ArraySize, uint64_t** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "UInt64[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetSingleArray_mDF81FCE06AA984ACED460A1989102C889F64393A(uint32_t* ___value0ArraySize, float** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Single[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetDoubleArray_m1D5F8B05C90C3FE9B82785940DEA3A3EDD6F2EC5(uint32_t* ___value0ArraySize, double** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Double[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetChar16Array_mB80F78E0307BC79A3FDF3502A94F8B9D4BBD686A(uint32_t* ___value0ArraySize, Il2CppChar** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Char16[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetBooleanArray_mF47B2C131AAB62D7EDB2DEE4713E553291E5583A(uint32_t* ___value0ArraySize, bool** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Boolean[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetStringArray_m0F0B933A1405F7B389626D274F3BB20CA2255E40(uint32_t* ___value0ArraySize, Il2CppHString** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "String[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInspectableArray_m9B1D04C961C0519436B081BAE72B6FE53D6204D6(uint32_t* ___value0ArraySize, Il2CppIInspectable*** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Inspectable[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetGuidArray_mD0732FEB8CB64CA04C55CEEE8386EF3FDA97BED4(uint32_t* ___value0ArraySize, Guid_t** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Guid[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetDateTimeArray_m54798F11C9EA77AC614259146DF99355026ED0A9(uint32_t* ___value0ArraySize, DateTime_tB8F64A9E141FDC202144C06531C4E7D4B6C59CB0** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "DateTimeOffset[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetTimeSpanArray_mDF0D9EC3E55742BA1132885596FDF3F478E8AC2A(uint32_t* ___value0ArraySize, TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "TimeSpan[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetPointArray_m9ECDF8442D5EF1FCB65095A1AC779596920F9890(uint32_t* ___value0ArraySize, Point_tC7E550DD1555DAAAA7CA4F85656FA70F81C23B18** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Point[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetSizeArray_m57C92EBB76BF7B6D400D8045192ED76ED41BC403(uint32_t* ___value0ArraySize, Size_t463A0E21871C29D10F032F5EF3EAF615806D8A05** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Size[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetRectArray_mC4F618B7AEF3B6AB1BB2AFFEED0C2BBB28E48178(uint32_t* ___value0ArraySize, Rect_t30CC1879BAAB779EAEA49A91ACA636D57101EE48** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Rect[]");
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Matrix4x4_t5F5E1A25D90A40678520AA0DA0C8C4D25E9DD072(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Matrix4x4_t5F5E1A25D90A40678520AA0DA0C8C4D25E9DD072_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Matrix4x4_t5F5E1A25D90A40678520AA0DA0C8C4D25E9DD072_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Windows.Foundation.Numerics.Matrix4x4
struct Matrix4x4_tC96BCD78BE2477FC55F35FFEA626330647FC8312_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Matrix4x4_tC96BCD78BE2477FC55F35FFEA626330647FC8312_ComCallableWrapper>, IReference_1_t08B37C871D4969FB2EF1391D9CD588CDD17C53F1, IPropertyValue_t5108EBA6BAA9289BD53DB4C9BC6EC2CFD3C71CFF
{
	inline Matrix4x4_tC96BCD78BE2477FC55F35FFEA626330647FC8312_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Matrix4x4_tC96BCD78BE2477FC55F35FFEA626330647FC8312_ComCallableWrapper>(obj) {}

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

		if (::memcmp(&iid, &IReference_1_t08B37C871D4969FB2EF1391D9CD588CDD17C53F1::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IReference_1_t08B37C871D4969FB2EF1391D9CD588CDD17C53F1*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IPropertyValue_t5108EBA6BAA9289BD53DB4C9BC6EC2CFD3C71CFF::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IPropertyValue_t5108EBA6BAA9289BD53DB4C9BC6EC2CFD3C71CFF*>(this);
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
		interfaceIds[0] = IReference_1_t08B37C871D4969FB2EF1391D9CD588CDD17C53F1::IID;
		interfaceIds[1] = IPropertyValue_t5108EBA6BAA9289BD53DB4C9BC6EC2CFD3C71CFF::IID;

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

	virtual il2cpp_hresult_t STDCALL IReference_1_get_Value_mE0C3CC4A91CE18F511CBA8BDE39E3F840F55ADD4(Matrix4x4_tC96BCD78BE2477FC55F35FFEA626330647FC8312* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Matrix4x4_tC96BCD78BE2477FC55F35FFEA626330647FC8312_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		Matrix4x4_tC96BCD78BE2477FC55F35FFEA626330647FC8312 returnValue;
		try
		{
			returnValue = *static_cast<Matrix4x4_tC96BCD78BE2477FC55F35FFEA626330647FC8312*>(UnBox(GetManagedObjectInline(), Matrix4x4_tC96BCD78BE2477FC55F35FFEA626330647FC8312_il2cpp_TypeInfo_var));
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_get_Type_mCCFDCAF3EF47FD26636DF1752C7D0D0F04AF17E5(int32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		int32_t returnValue;
		try
		{
			returnValue = 20;
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_get_IsNumericScalar_m5AA58745E3403667AD93842BD84E1BF3C56C6923(bool* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		bool returnValue;
		try
		{
			returnValue = false;
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt8_mA78B64B2D18688A14857A3385C11D3FBC3DCA0BF(uint8_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Byte");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt16_m893A5F46553C28727129D19D2C657BFD7A82C8EB(int16_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Int16");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt16_mFB50772016E5FDE5548016B10D8BF8F72BAEE51A(uint16_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "UInt16");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt32_m81E687870E8D71B0B56C0F98B9CE901173541F0E(int32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Int32");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt32_m4242C2EB038EC37544C26EC11B33AD7CA1D0315B(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "UInt32");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt64_m69E32181A31DEE4BEB361BB9E81FA3D949862FC9(int64_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Int64");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt64_mAB342E494DC39A847B6430F96A8F02FB9F9774E4(uint64_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "UInt64");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetSingle_mABFDF8CFBAAFF7EEE22AF429911B22EC2DE5318A(float* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Single");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetDouble_mF1DDF1999B7F877B2BA609D09149288E345D45AE(double* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Double");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetChar16_m4B1428420CFDB7DD73878EAB4C8EFEBFBE026EEC(Il2CppChar* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Char16");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetBoolean_m89F937F65167C4337FD9E4A8B0A54369AE41D89D(bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Boolean");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetString_mD2C842F7378384AE6BC0A93033FEE0A85C9E1F28(Il2CppHString* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "String");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetGuid_m560A172386BD6DFC3DEB00D2DF3070EE67DF7B71(Guid_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Guid");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetDateTime_mC3F8B04EF7625215AF66FB7B5C4EFDDC4163967D(DateTime_tB8F64A9E141FDC202144C06531C4E7D4B6C59CB0* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "DateTime");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetTimeSpan_m5B8EF6C6B2BE4370F48B6AA715236DDD019A657A(TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "TimeSpan");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetPoint_m6DE3D27C8479F2C44665EF1D86D76E004AC3B00D(Point_tC7E550DD1555DAAAA7CA4F85656FA70F81C23B18* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Point");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetSize_mD27A291FCF475860FD4C5CC19C1C361902537662(Size_t463A0E21871C29D10F032F5EF3EAF615806D8A05* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Size");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetRect_mF069EFA36FB5E7469FABE6CC04471B4434E507AE(Rect_t30CC1879BAAB779EAEA49A91ACA636D57101EE48* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Rect");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt8Array_mEEA85229904BFBD5DD63209A9F4858EA6A36C484(uint32_t* ___value0ArraySize, uint8_t** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Byte[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt16Array_mAF964E8DCE5EE8D9703DB63D5181CD92C344FAA9(uint32_t* ___value0ArraySize, int16_t** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Int16[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt16Array_mE6ECF01E37BD858FF14518C8EC0605D1BFD4CAC6(uint32_t* ___value0ArraySize, uint16_t** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "UInt16[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt32Array_m27D54E06B02528F7056A07F224A1552A36FDEB46(uint32_t* ___value0ArraySize, int32_t** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Int32[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt32Array_mAF7ECA68A945A7AA0F35D3A3962A4EA49954CEAE(uint32_t* ___value0ArraySize, uint32_t** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "UInt32[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt64Array_mDC9606845A993ED32A95F889C71B67C8A05DF4BC(uint32_t* ___value0ArraySize, int64_t** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Int64[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt64Array_mB59E8769BB20C16BBAC4D08A3861B7019B9D2514(uint32_t* ___value0ArraySize, uint64_t** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "UInt64[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetSingleArray_mDF81FCE06AA984ACED460A1989102C889F64393A(uint32_t* ___value0ArraySize, float** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Single[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetDoubleArray_m1D5F8B05C90C3FE9B82785940DEA3A3EDD6F2EC5(uint32_t* ___value0ArraySize, double** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Double[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetChar16Array_mB80F78E0307BC79A3FDF3502A94F8B9D4BBD686A(uint32_t* ___value0ArraySize, Il2CppChar** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Char16[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetBooleanArray_mF47B2C131AAB62D7EDB2DEE4713E553291E5583A(uint32_t* ___value0ArraySize, bool** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Boolean[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetStringArray_m0F0B933A1405F7B389626D274F3BB20CA2255E40(uint32_t* ___value0ArraySize, Il2CppHString** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "String[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInspectableArray_m9B1D04C961C0519436B081BAE72B6FE53D6204D6(uint32_t* ___value0ArraySize, Il2CppIInspectable*** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Inspectable[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetGuidArray_mD0732FEB8CB64CA04C55CEEE8386EF3FDA97BED4(uint32_t* ___value0ArraySize, Guid_t** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Guid[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetDateTimeArray_m54798F11C9EA77AC614259146DF99355026ED0A9(uint32_t* ___value0ArraySize, DateTime_tB8F64A9E141FDC202144C06531C4E7D4B6C59CB0** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "DateTimeOffset[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetTimeSpanArray_mDF0D9EC3E55742BA1132885596FDF3F478E8AC2A(uint32_t* ___value0ArraySize, TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "TimeSpan[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetPointArray_m9ECDF8442D5EF1FCB65095A1AC779596920F9890(uint32_t* ___value0ArraySize, Point_tC7E550DD1555DAAAA7CA4F85656FA70F81C23B18** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Point[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetSizeArray_m57C92EBB76BF7B6D400D8045192ED76ED41BC403(uint32_t* ___value0ArraySize, Size_t463A0E21871C29D10F032F5EF3EAF615806D8A05** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Size[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetRectArray_mC4F618B7AEF3B6AB1BB2AFFEED0C2BBB28E48178(uint32_t* ___value0ArraySize, Rect_t30CC1879BAAB779EAEA49A91ACA636D57101EE48** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Rect[]");
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Matrix4x4_tC96BCD78BE2477FC55F35FFEA626330647FC8312(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Matrix4x4_tC96BCD78BE2477FC55F35FFEA626330647FC8312_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Matrix4x4_tC96BCD78BE2477FC55F35FFEA626330647FC8312_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Buffers.MemoryHandle
struct MemoryHandle_t505785861D4FF84F850A3FF775BE6AE1833D2AFD_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<MemoryHandle_t505785861D4FF84F850A3FF775BE6AE1833D2AFD_ComCallableWrapper>, IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301
{
	inline MemoryHandle_t505785861D4FF84F850A3FF775BE6AE1833D2AFD_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<MemoryHandle_t505785861D4FF84F850A3FF775BE6AE1833D2AFD_ComCallableWrapper>(obj) {}

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

		if (::memcmp(&iid, &IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301*>(this);
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
		interfaceIds[0] = IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID;

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

	virtual il2cpp_hresult_t STDCALL IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88() IL2CPP_OVERRIDE
	{
		return IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_MemoryHandle_t505785861D4FF84F850A3FF775BE6AE1833D2AFD(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(MemoryHandle_t505785861D4FF84F850A3FF775BE6AE1833D2AFD_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) MemoryHandle_t505785861D4FF84F850A3FF775BE6AE1833D2AFD_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.IO.MemoryStream
struct MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2_ComCallableWrapper>, IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301
{
	inline MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2_ComCallableWrapper>(obj) {}

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

		if (::memcmp(&iid, &IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301*>(this);
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
		interfaceIds[0] = IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID;

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

	virtual il2cpp_hresult_t STDCALL IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88() IL2CPP_OVERRIDE
	{
		return IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2_ComCallableWrapper(obj));
}

// COM Callable Wrapper for OpenCVForUnity.PhotoModule.MergeDebevec
struct MergeDebevec_t232A4058851A4A398826575D54228E23300CC853_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<MergeDebevec_t232A4058851A4A398826575D54228E23300CC853_ComCallableWrapper>, IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301
{
	inline MergeDebevec_t232A4058851A4A398826575D54228E23300CC853_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<MergeDebevec_t232A4058851A4A398826575D54228E23300CC853_ComCallableWrapper>(obj) {}

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

		if (::memcmp(&iid, &IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301*>(this);
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
		interfaceIds[0] = IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID;

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

	virtual il2cpp_hresult_t STDCALL IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88() IL2CPP_OVERRIDE
	{
		return IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_MergeDebevec_t232A4058851A4A398826575D54228E23300CC853(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(MergeDebevec_t232A4058851A4A398826575D54228E23300CC853_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) MergeDebevec_t232A4058851A4A398826575D54228E23300CC853_ComCallableWrapper(obj));
}

// COM Callable Wrapper for OpenCVForUnity.PhotoModule.MergeExposures
struct MergeExposures_tF1BF2436C7286A4DD4B31ED8AF691FEB8D45A6F0_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<MergeExposures_tF1BF2436C7286A4DD4B31ED8AF691FEB8D45A6F0_ComCallableWrapper>, IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301
{
	inline MergeExposures_tF1BF2436C7286A4DD4B31ED8AF691FEB8D45A6F0_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<MergeExposures_tF1BF2436C7286A4DD4B31ED8AF691FEB8D45A6F0_ComCallableWrapper>(obj) {}

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

		if (::memcmp(&iid, &IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301*>(this);
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
		interfaceIds[0] = IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID;

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

	virtual il2cpp_hresult_t STDCALL IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88() IL2CPP_OVERRIDE
	{
		return IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_MergeExposures_tF1BF2436C7286A4DD4B31ED8AF691FEB8D45A6F0(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(MergeExposures_tF1BF2436C7286A4DD4B31ED8AF691FEB8D45A6F0_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) MergeExposures_tF1BF2436C7286A4DD4B31ED8AF691FEB8D45A6F0_ComCallableWrapper(obj));
}

// COM Callable Wrapper for OpenCVForUnity.PhotoModule.MergeMertens
struct MergeMertens_t2402F2019D32155BD8D1425FAFC182949C7643E6_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<MergeMertens_t2402F2019D32155BD8D1425FAFC182949C7643E6_ComCallableWrapper>, IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301
{
	inline MergeMertens_t2402F2019D32155BD8D1425FAFC182949C7643E6_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<MergeMertens_t2402F2019D32155BD8D1425FAFC182949C7643E6_ComCallableWrapper>(obj) {}

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

		if (::memcmp(&iid, &IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301*>(this);
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
		interfaceIds[0] = IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID;

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

	virtual il2cpp_hresult_t STDCALL IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88() IL2CPP_OVERRIDE
	{
		return IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_MergeMertens_t2402F2019D32155BD8D1425FAFC182949C7643E6(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(MergeMertens_t2402F2019D32155BD8D1425FAFC182949C7643E6_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) MergeMertens_t2402F2019D32155BD8D1425FAFC182949C7643E6_ComCallableWrapper(obj));
}

// COM Callable Wrapper for OpenCVForUnity.PhotoModule.MergeRobertson
struct MergeRobertson_t71A20427C76C30CE9C3D1D0CD7769D86DECF6C8F_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<MergeRobertson_t71A20427C76C30CE9C3D1D0CD7769D86DECF6C8F_ComCallableWrapper>, IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301
{
	inline MergeRobertson_t71A20427C76C30CE9C3D1D0CD7769D86DECF6C8F_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<MergeRobertson_t71A20427C76C30CE9C3D1D0CD7769D86DECF6C8F_ComCallableWrapper>(obj) {}

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

		if (::memcmp(&iid, &IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301*>(this);
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
		interfaceIds[0] = IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID;

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

	virtual il2cpp_hresult_t STDCALL IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88() IL2CPP_OVERRIDE
	{
		return IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_MergeRobertson_t71A20427C76C30CE9C3D1D0CD7769D86DECF6C8F(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(MergeRobertson_t71A20427C76C30CE9C3D1D0CD7769D86DECF6C8F_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) MergeRobertson_t71A20427C76C30CE9C3D1D0CD7769D86DECF6C8F_ComCallableWrapper(obj));
}

// COM Callable Wrapper for UniRx.MessageBroker
struct MessageBroker_t2EED86E65029228CD37BB4E9637E3523496AEA55_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<MessageBroker_t2EED86E65029228CD37BB4E9637E3523496AEA55_ComCallableWrapper>, IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301
{
	inline MessageBroker_t2EED86E65029228CD37BB4E9637E3523496AEA55_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<MessageBroker_t2EED86E65029228CD37BB4E9637E3523496AEA55_ComCallableWrapper>(obj) {}

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

		if (::memcmp(&iid, &IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301*>(this);
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
		interfaceIds[0] = IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID;

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

	virtual il2cpp_hresult_t STDCALL IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88() IL2CPP_OVERRIDE
	{
		return IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_MessageBroker_t2EED86E65029228CD37BB4E9637E3523496AEA55(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(MessageBroker_t2EED86E65029228CD37BB4E9637E3523496AEA55_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) MessageBroker_t2EED86E65029228CD37BB4E9637E3523496AEA55_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Runtime.Remoting.Messaging.MessageDictionary
struct MessageDictionary_t479539639D4741378256CE3246F141A0FF930114_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<MessageDictionary_t479539639D4741378256CE3246F141A0FF930114_ComCallableWrapper>, IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C
{
	inline MessageDictionary_t479539639D4741378256CE3246F141A0FF930114_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<MessageDictionary_t479539639D4741378256CE3246F141A0FF930114_ComCallableWrapper>(obj) {}

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

		if (::memcmp(&iid, &IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C*>(this);
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
		interfaceIds[0] = IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C::IID;

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

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_mE23AC28EC9ADCDD2688247217CF40C800E780B97(IBindableIterator_t63CCD2268CEE8AFAB68518869D47C5BDAF72962F** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_mE23AC28EC9ADCDD2688247217CF40C800E780B97_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_MessageDictionary_t479539639D4741378256CE3246F141A0FF930114(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(MessageDictionary_t479539639D4741378256CE3246F141A0FF930114_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) MessageDictionary_t479539639D4741378256CE3246F141A0FF930114_ComCallableWrapper(obj));
}
