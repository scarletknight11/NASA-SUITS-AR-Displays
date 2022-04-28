#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename T1, typename T2, typename T3>
struct VirtActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename R>
struct VirtFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1>
struct VirtFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
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
template <typename T1, typename T2>
struct VirtActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
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
template <typename R, typename T1, typename T2, typename T3>
struct VirtFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct VirtFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct GenericVirtActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename R, typename T1>
struct GenericVirtFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct GenericVirtFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct GenericVirtFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct InterfaceActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
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
template <typename T1, typename T2, typename T3>
struct GenericInterfaceActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename R, typename T1>
struct GenericInterfaceFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct GenericInterfaceFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct GenericInterfaceFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};

// System.Action`1<System.Object>
struct Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Globalization.CultureInfo>
struct Dictionary_2_t5B8303F2C9869A39ED3E03C0FBB09F817E479402;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task>
struct Dictionary_2_tB758E2A2593CD827EFC041BE1F1BB4B68DE1C3E8;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D;
// System.Collections.Generic.Dictionary`2<System.String,System.Globalization.CultureInfo>
struct Dictionary_2_t0015CBF964B0687CBB5ECFDDE06671A8F3DDE4BC;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5;
// System.EventHandler`1<System.Object>
struct EventHandler_1_tFA1C30E54FA1061D79E711F65F9A174BFBD8CDCB;
// System.EventHandler`1<Microsoft.CognitiveServices.Speech.RecognitionEventArgs>
struct EventHandler_1_t9D5FDB2FE48DCCFFD359039BB88FD53E210F0A8D;
// System.EventHandler`1<Microsoft.CognitiveServices.Speech.SessionEventArgs>
struct EventHandler_1_tB9B30C7ACA01631527E7047FB53709C6EC5B260A;
// System.EventHandler`1<Microsoft.CognitiveServices.Speech.SpeechRecognitionCanceledEventArgs>
struct EventHandler_1_t69FC758E917DED0BD7F1732BE32EAE11D78B8D50;
// System.EventHandler`1<Microsoft.CognitiveServices.Speech.SpeechRecognitionEventArgs>
struct EventHandler_1_tAD0C572F17FD1D8D2AAADAE630AAEC4D89CF650C;
// System.EventHandler`1<Microsoft.CognitiveServices.Speech.Translation.TranslationRecognitionCanceledEventArgs>
struct EventHandler_1_t7D8AF3CB447F4C1AA3E3A0C2ABF74030E97A10FC;
// System.EventHandler`1<Microsoft.CognitiveServices.Speech.Translation.TranslationRecognitionEventArgs>
struct EventHandler_1_t0304893ABC1043DC90AF47CDE2ACD2D6DB2B7487;
// System.EventHandler`1<Microsoft.CognitiveServices.Speech.Translation.TranslationSynthesisEventArgs>
struct EventHandler_1_t3BEF748549CB01FA6B642C4A136FCCE2948599FF;
// System.Func`1<System.Threading.Tasks.Task/ContingentProperties>
struct Func_1_tBCF42601FA307876E83080BE4204110820F8BF3B;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_tE6A65C5E45E33FD7D9849FD0914DE3AD32B68050;
// System.Collections.Generic.IReadOnlyDictionary`2<System.String,System.String>
struct IReadOnlyDictionary_2_tAEC11FE6416E1B7D425F72068284FFB83F53BB71;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.String>
struct KeyCollection_t52C81163A051BCD87A36FEF95F736DD600E2305D;
// System.Predicate`1<System.Object>
struct Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB;
// System.Predicate`1<System.Threading.Tasks.Task>
struct Predicate_1_tC0DBBC8498BD1EE6ABFFAA5628024105FA7D11BD;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.String>
struct ValueCollection_t9161A5C97376D261665798FA27DAFD5177305C81;
// System.Collections.Generic.Dictionary`2/Entry<System.String,System.String>[]
struct EntryU5BU5D_t52A654EA9927D1B5F56CA05CF209F2E4393C4510;
// System.Byte[]
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
// System.Type[]
struct TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755;
// System.Action
struct Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6;
// System.ApplicationException
struct ApplicationException_t8D709C0445A040467C6A632AD7F742B25AB2A407;
// System.ArgumentException
struct ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00;
// System.ArgumentNullException
struct ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// System.Attribute
struct Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71;
// Microsoft.CognitiveServices.Speech.Audio.AudioConfig
struct AudioConfig_tF4EFBB8FE00E5C7569A7F087C11D4D85439A9E45;
// System.Reflection.Binder
struct Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30;
// System.Globalization.Calendar
struct Calendar_t3D638AEAB45F029DF47138EDA4CF9A7CBBB1C32A;
// Microsoft.CognitiveServices.Speech.Internal.CallbackFunctionDelegate
struct CallbackFunctionDelegate_tEDE2A24857EFCB03EE502D1E6E8A9E977030EAC4;
// Microsoft.CognitiveServices.Speech.CancellationDetails
struct CancellationDetails_t5D21A89C2CF88AB86DE6EF822F1DBF0FF3F678C9;
// System.Globalization.CodePageDataItem
struct CodePageDataItem_t09A62F57142BF0456C8F414898A37E79BCC9F09E;
// System.Globalization.CompareInfo
struct CompareInfo_t4AB62EC32E8AF1E469E315620C7E3FB8B0CAE0C9;
// System.Threading.ContextCallback
struct ContextCallback_t93707E0430F4FF3E15E1FB5A4844BE89C657AE8B;
// System.Globalization.CultureData
struct CultureData_t53CDF1C5F789A28897415891667799420D3C5529;
// System.Globalization.CultureInfo
struct CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98;
// System.Globalization.DateTimeFormatInfo
struct DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90;
// System.Text.DecoderFallback
struct DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// System.Text.EncoderFallback
struct EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4;
// System.Text.Encoding
struct Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827;
// System.EventArgs
struct EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA;
// Microsoft.CognitiveServices.Speech.Internal.HandleRelease
struct HandleRelease_t981DDC9B764758F8D9EAE886A7255AC109F86E59;
// System.Collections.Hashtable
struct Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// System.IDisposable
struct IDisposable_t099785737FC6A1E3699919A94109383715A8D807;
// System.IFormatProvider
struct IFormatProvider_tF2AECC4B14F41D36718920D67F930CED940412DF;
// Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle
struct InteropSafeHandle_tF14E3AD32AC904F5E38F4FAC0ED46417062386C6;
// System.InvalidOperationException
struct InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB;
// System.Reflection.MemberFilter
struct MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// Microsoft.CognitiveServices.Speech.Internal.MonoPInvokeCallbackAttribute
struct MonoPInvokeCallbackAttribute_t15B62F0A74DFEE65E3FB194D9F149B3026924A6F;
// System.Globalization.NumberFormatInfo
struct NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D;
// System.ObjectDisposedException
struct ObjectDisposedException_t29EF6F519F16BA477EC682F23E8344BB1E9A958A;
// Microsoft.CognitiveServices.Speech.PropertyCollection
struct PropertyCollection_tD6D50793A0684647D5C7067381E1365EDB3AA920;
// Microsoft.CognitiveServices.Speech.RecognitionEventArgs
struct RecognitionEventArgs_tC7B8B5C317C90BF54CBE82BE86321F5359B98650;
// Microsoft.CognitiveServices.Speech.RecognitionResult
struct RecognitionResult_t29D2A304D192BFB246AB9E91297B54B2EB44DA06;
// Microsoft.CognitiveServices.Speech.Recognizer
struct Recognizer_tF1FAA5F9E223C619151C5DA96D83F0AF7E3C9E3E;
// System.Runtime.InteropServices.SafeHandle
struct SafeHandle_tC07DCA2CABF6988953342757EFB1547363E5A36B;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// Microsoft.CognitiveServices.Speech.SessionEventArgs
struct SessionEventArgs_t720E6DA982AD7DE7933835DEBBECD8B78F28CAB1;
// Microsoft.CognitiveServices.Speech.SpeechConfig
struct SpeechConfig_tB1A7AD16A9CDE287A706780CBD6F22AAA64A9E11;
// Microsoft.CognitiveServices.Speech.SpeechRecognitionCanceledEventArgs
struct SpeechRecognitionCanceledEventArgs_t35423FB7DA329C4D5CC9ED0B255C55C72F06E97C;
// Microsoft.CognitiveServices.Speech.SpeechRecognitionEventArgs
struct SpeechRecognitionEventArgs_t1FB7CC9C07684BA7F03F63DF226A306D7C5F2CEA;
// Microsoft.CognitiveServices.Speech.SpeechRecognitionResult
struct SpeechRecognitionResult_t65860E5862B0CFC304215FF5084A2E59A1AA727F;
// Microsoft.CognitiveServices.Speech.SpeechRecognizer
struct SpeechRecognizer_tD9F66F83FE18A3C87986B87E9108997AC919BF2A;
// Microsoft.CognitiveServices.Speech.SpeechTranslationConfig
struct SpeechTranslationConfig_tFBB58FC53E2E75766C94D604CEF28A14CE72E90D;
// System.Threading.Tasks.StackGuard
struct StackGuard_t88E1EE4741AD02CA5FEA04A4EB2CC70F230E0E6D;
// System.String
struct String_t;
// System.Threading.Tasks.Task
struct Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60;
// System.Threading.Tasks.TaskFactory
struct TaskFactory_t22D999A05A967C31A4B5FFBD08864809BF35EA3B;
// System.Threading.Tasks.TaskScheduler
struct TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D;
// System.Globalization.TextInfo
struct TextInfo_tE823D0684BFE8B203501C9B2B38585E8F06E872C;
// Microsoft.CognitiveServices.Speech.Translation.TranslationRecognitionCanceledEventArgs
struct TranslationRecognitionCanceledEventArgs_tF8364DAABB1345D5D552BC9161B2681056902434;
// Microsoft.CognitiveServices.Speech.Translation.TranslationRecognitionEventArgs
struct TranslationRecognitionEventArgs_t9801CC0D44EB6958FE731328096A8220591EB9E2;
// Microsoft.CognitiveServices.Speech.Translation.TranslationRecognitionResult
struct TranslationRecognitionResult_tAF699D9A902DCE03B21D08BD562FE08544A089AD;
// Microsoft.CognitiveServices.Speech.Translation.TranslationRecognizer
struct TranslationRecognizer_t5E2EA28023083A645CA9CB77906834987C4C9BFC;
// Microsoft.CognitiveServices.Speech.Translation.TranslationSynthesisEventArgs
struct TranslationSynthesisEventArgs_t975B943C527D3EB226F627E98ACDC396F0ECDD36;
// Microsoft.CognitiveServices.Speech.Translation.TranslationSynthesisResult
struct TranslationSynthesisResult_t243554A291C3C9A4349B5A0F15AFD7B984E944EE;
// System.Type
struct Type_t;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// Microsoft.CognitiveServices.Speech.Recognizer/GetRecognizerFromConfigDelegate
struct GetRecognizerFromConfigDelegate_t2DC882A03ECDF618A982ED55B82B4ED3D829FACC;
// Microsoft.CognitiveServices.Speech.Internal.SpxFactory/GetResultDelegate
struct GetResultDelegate_tCE5D8A1E9C3A30C92902692A8F1576D09D4DCDE3;
// System.Threading.Tasks.Task/ContingentProperties
struct ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0;

IL2CPP_EXTERN_C RuntimeClass* Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ApplicationException_t8D709C0445A040467C6A632AD7F742B25AB2A407_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CallbackFunctionDelegate_tEDE2A24857EFCB03EE502D1E6E8A9E977030EAC4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CancellationDetails_t5D21A89C2CF88AB86DE6EF822F1DBF0FF3F678C9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CancellationErrorCode_t91865BA91C9E78F536A8756E3533F4ECE8824D62_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CancellationReason_t11019B124BB3269219C20F71CE36597F73A7E20E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventHandler_1_t0304893ABC1043DC90AF47CDE2ACD2D6DB2B7487_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventHandler_1_t69FC758E917DED0BD7F1732BE32EAE11D78B8D50_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventHandler_1_t7D8AF3CB447F4C1AA3E3A0C2ABF74030E97A10FC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventHandler_1_t9D5FDB2FE48DCCFFD359039BB88FD53E210F0A8D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventHandler_1_tAD0C572F17FD1D8D2AAADAE630AAEC4D89CF650C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventHandler_1_tB9B30C7ACA01631527E7047FB53709C6EC5B260A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GC_tD6F0377620BF01385965FD29272CF088A4309C0D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GetRecognizerFromConfigDelegate_t2DC882A03ECDF618A982ED55B82B4ED3D829FACC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GetResultDelegate_tCE5D8A1E9C3A30C92902692A8F1576D09D4DCDE3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HandleRelease_t981DDC9B764758F8D9EAE886A7255AC109F86E59_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_1_tFBD6BBCAEB863478E70CD1504627E429F27569AA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_t692ABF80A29FB82368A57AE22841134E3626E47A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IntPtr_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InteropSafeHandle_tF14E3AD32AC904F5E38F4FAC0ED46417062386C6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Marshal_tEBAFAE20369FCB1B38C49C4E27A8D8C2C4B55058_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectDisposedException_t29EF6F519F16BA477EC682F23E8344BB1E9A958A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PropertyCollection_tD6D50793A0684647D5C7067381E1365EDB3AA920_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RecognitionEventArgs_tC7B8B5C317C90BF54CBE82BE86321F5359B98650_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ResultReason_tB8FC6492BDC104DC14FE8E50C557C68A35466BF5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RuntimeObject_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SessionEventArgs_t720E6DA982AD7DE7933835DEBBECD8B78F28CAB1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SpeechConfig_tB1A7AD16A9CDE287A706780CBD6F22AAA64A9E11_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SpeechRecognitionCanceledEventArgs_t35423FB7DA329C4D5CC9ED0B255C55C72F06E97C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SpeechRecognitionEventArgs_t1FB7CC9C07684BA7F03F63DF226A306D7C5F2CEA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SpeechRecognitionResult_t65860E5862B0CFC304215FF5084A2E59A1AA727F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SpeechTranslationConfig_tFBB58FC53E2E75766C94D604CEF28A14CE72E90D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SpxError_tE3A37886AA69A2843CE24D52F59B1402D244731D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TranslationRecognitionCanceledEventArgs_tF8364DAABB1345D5D552BC9161B2681056902434_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TranslationRecognitionEventArgs_t9801CC0D44EB6958FE731328096A8220591EB9E2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TranslationRecognitionResult_tAF699D9A902DCE03B21D08BD562FE08544A089AD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TranslationSynthesisEventArgs_t975B943C527D3EB226F627E98ACDC396F0ECDD36_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TranslationSynthesisResult_t243554A291C3C9A4349B5A0F15AFD7B984E944EE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt32_tE60352A06233E4E69DD198BCC67142159F686B15_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral07657094245180507A188C63C49A070BC8752EA2;
IL2CPP_EXTERN_C String_t* _stringLiteral0E113F97D77FF0E45934C610A144C2819DC64A04;
IL2CPP_EXTERN_C String_t* _stringLiteral1532A53696EE625AE3777874840B492D52037C8E;
IL2CPP_EXTERN_C String_t* _stringLiteral1F16CCC8B5C539FDA6D18899BE786616CC0A66C9;
IL2CPP_EXTERN_C String_t* _stringLiteral263D04BA595C06ADC50CF667EA6F2290337CDAC0;
IL2CPP_EXTERN_C String_t* _stringLiteral2DAEEF072FFF48537E5ED531F51D87E1CF74D643;
IL2CPP_EXTERN_C String_t* _stringLiteral31514D8FFE6EBD8A160985B5C25BE0F2A7BEF863;
IL2CPP_EXTERN_C String_t* _stringLiteral355878A388870DC1779B9524DFC7806DF3F6E3EF;
IL2CPP_EXTERN_C String_t* _stringLiteral39F33B0FE4D2999B413004105B540E9BDC49D767;
IL2CPP_EXTERN_C String_t* _stringLiteral3A8100DC94EF854DE676FBF7FAD86E84873F3000;
IL2CPP_EXTERN_C String_t* _stringLiteral4A7AB2F6B4BB9763BDAE9F4B653E5CA8E25A19F9;
IL2CPP_EXTERN_C String_t* _stringLiteral5CB81742644CCEA2B53FE5D7E08731904CD84E08;
IL2CPP_EXTERN_C String_t* _stringLiteral6260956A285A95B964811F944839C8CA994BAAD8;
IL2CPP_EXTERN_C String_t* _stringLiteral66B8240E15500AD983CC6249A0313DD49E22940E;
IL2CPP_EXTERN_C String_t* _stringLiteral67E3003FE5B0C609EB2073B105C585694FED0280;
IL2CPP_EXTERN_C String_t* _stringLiteral6CC1A826990E4F55C0AF3E80A72DC2D9003B1658;
IL2CPP_EXTERN_C String_t* _stringLiteral7267B048CEDBB7AD42A5473F09940F2723B4506D;
IL2CPP_EXTERN_C String_t* _stringLiteral74950E71ECDE7F282725B371C332DD6851AC6CDE;
IL2CPP_EXTERN_C String_t* _stringLiteral7BF1B4B734433B6AD600A9CCEB253AD568B4B6A7;
IL2CPP_EXTERN_C String_t* _stringLiteral7D62C11CCF10BDFC07ACE3D149248DE3F051849C;
IL2CPP_EXTERN_C String_t* _stringLiteral84F70ACE509061C886C9B2FE8A2BF7B7FFC81F7F;
IL2CPP_EXTERN_C String_t* _stringLiteral8E8084C52A356BA811825A26D2A68087D1EE1AE6;
IL2CPP_EXTERN_C String_t* _stringLiteral94ACA2C81E052FAFABB8EF261D2A67595EE46C0E;
IL2CPP_EXTERN_C String_t* _stringLiteral990E9465081709697449AFB110415A8629DE2E13;
IL2CPP_EXTERN_C String_t* _stringLiteral9D994AF9D9226E9E4FB3842699E67F727590C94D;
IL2CPP_EXTERN_C String_t* _stringLiteralA23629C306AA023437DA41361139F76CFB792614;
IL2CPP_EXTERN_C String_t* _stringLiteralA3E68153B91665DFE1E9EAC88F57E3E2533E594D;
IL2CPP_EXTERN_C String_t* _stringLiteralAD1646DD3BCB50D02405E092BF9F99967377E943;
IL2CPP_EXTERN_C String_t* _stringLiteralB87D0C927E2633818FA2844668F5CCE68672A353;
IL2CPP_EXTERN_C String_t* _stringLiteralBEE1F32E38A053DAC1C8FBB1F39277CA0C67EB06;
IL2CPP_EXTERN_C String_t* _stringLiteralC6072FBFC31FE8C1C066271F63752A3B9B67AAD9;
IL2CPP_EXTERN_C String_t* _stringLiteralC7EBE4EAAB6D68E9347038ACD59F39A9DE2D2040;
IL2CPP_EXTERN_C String_t* _stringLiteralC9242117927E8C104F78807A56EFE624837EF5BB;
IL2CPP_EXTERN_C String_t* _stringLiteralD5D2875F228D651E1289522AEAAB8C492001C1BE;
IL2CPP_EXTERN_C String_t* _stringLiteralD6EFEA28911C05150F90CA0C3A902792E8F9D73C;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralF00BD984FE2440EACF0054D39EEEAE818E9EBB32;
IL2CPP_EXTERN_C String_t* _stringLiteralF28770BAFF3BD72A14677B13D79FE1286316B04C;
IL2CPP_EXTERN_C String_t* _stringLiteralF5276AA6769ABD877AC10339C332B2ECF5459404;
IL2CPP_EXTERN_C const RuntimeMethod* Array_Empty_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_m86406577D438B78D85E03BECFDC8AB3C7696A1E7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_mA6747E78BD4DF1D09D9091C1B3EBAE0FDB200666_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_m31C41E4FE938066440DAFD1E667C2F3986549668_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EventArgs_recognizer_event_handle_release_m3D3A3B06F35570BE6EE52F14267BC94EFDCD4F7B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EventHandler_1_Invoke_m34AF820A20D06B154B42AC2C4A2F47B68DFD69BD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EventHandler_1_Invoke_m543D7CD4DFE3F387FE31D570F06284F268EA3E65_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EventHandler_1_Invoke_m6FD7204CAF8D0E26A29FA8BC8D9136BAD6203FC3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EventHandler_1_Invoke_m737581193400ABBF01056D8B1A25FBA1CFE9698E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EventHandler_1_Invoke_m7D90141E3EF5FC6FD8B48B74B3E2249262CBA76E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EventHandler_1_Invoke_m8062F2814E8CB7B00CA23C1A82B331E1738EDCE5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EventHandler_1_Invoke_mE1FE7957F49CE4B3CA60D24454E2464B47E68467_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InteropSafeHandle_GetObjectFromWeakHandle_TisRecognizer_tF1FAA5F9E223C619151C5DA96D83F0AF7E3C9E3E_mFCA3860AC37DBDE394D56D75B0C1F69E72D6BDDE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InteropSafeHandle_GetObjectFromWeakHandle_TisSpeechRecognizer_tD9F66F83FE18A3C87986B87E9108997AC919BF2A_m456BCCB36FEDED91604F737E001380DEFBB9C88E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InteropSafeHandle_GetObjectFromWeakHandle_TisTranslationRecognizer_t5E2EA28023083A645CA9CB77906834987C4C9BFC_mD509A25F82BB62B50340FD5A38BA5CEC1E6E87AB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Key_m42802FFFC275E928911F87B16DFE504319DF58F1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Value_mB6B24D3920A4744624F8ED9AE493783D0E5F81DD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PropertyCollection_property_bag_release_mAC9096678F4D9B7281A5EECCA5FCD7B794275755_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RecognitionResult_recognizer_result_handle_release_m2390D80CFD66650438F1B05545EB439A5CAD56EA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RecognitionResult_result_get_result_id_m996CCE6FB266EB35D1833A57DBF34628883A1D51_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RecognitionResult_result_get_text_m84677F08CEF6433DA77AECACD5C5393B7ED1FC48_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Recognizer_Dispose_m0808AC62F7D42E146FB7349FCB2C2E1D4776F994_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Recognizer_DoAsyncRecognitionAction_m2268106F48438234958D981F40C8036136AFD5CF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Recognizer_FireEvent_SetSessionStarted_mE1D278B2C1F2EA34E714D8E5F41CF8EA7E533F11_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Recognizer_FireEvent_SetSessionStopped_mC49DC694FC309FDE44262E02039FB542A838CC78_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Recognizer_FireEvent_SpeechEndDetected_mBD282262A151F5C473D1C49CFF74DEDDD71E7769_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Recognizer_FireEvent_SpeechStartDetected_m6BA5E049E81970E282933AEEA38E42DC461AC29F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Recognizer_FromConfig_m60791AE2ACE591729B360D7615035FF13CAFBBF7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Recognizer_StartContinuousRecognition_m619E72043511237D3E1C58D62E375DAA4F1ACA9C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Recognizer_StopContinuousRecognition_m31050BE671DCB3A02B2709C5D37B00422795AF30_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Recognizer_recognizer_handle_release_m4F85CBC6A9242C997CEC5704FBA5D5D8AD486772_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Recognizer_recognizer_session_event_get_session_id_mEB659429C629D3E9E271BA22B3FD631BD54565B0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SpeechConfig_speech_config_release_m211A119E8B4829F52735D15C1CE30B4E80EA6A08_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SpeechRecognizer_FireEvent_Canceled_m4DDE18DFD654DACBDE97F182D735A624B5E601F2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SpeechRecognizer_FireEvent_Recognized_m67E62803BF374C34B61CFC991DA73FE25AF287BF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SpeechRecognizer_FireEvent_Recognizing_m3BAA0548428B005FA57B77CB4B09D157F5D34E0F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SpeechRecognizer_U3CStartContinuousRecognitionAsyncU3Eb__48_0_m55F59D499889BA7B44BF8D1F3745BFF5B5AF0F82_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SpeechRecognizer_U3CStopContinuousRecognitionAsyncU3Eb__49_0_m6F826EAC9DEF582418CBAD8D1425FBB0F1F35F09_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SpxExceptionThrower_ThrowIfFail_m7269610C68DA4D960FE5E6208DF1BD9282C8F2DA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SpxExceptionThrower_ThrowIfFalse_mEE1FF4BD7BB68A39220E0A1F7EB210DD4E88B79F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SpxExceptionThrower_ThrowIfNull_mC54EA71790A454E5785FC15C4FFBB6F457E772DB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SpxFactory_recognizer_create_speech_recognizer_from_config_mEFA185528C9EF0F4C5883329D957F95566B57E8B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SpxFactory_recognizer_create_translation_recognizer_from_config_mBAA1FE887AC7E89AE3658F30F2307B65A5153BA6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TranslationRecognizer_FireEvent_Canceled_m07E5C0FDE0F3C15AE7DA029B15FAB7D3B20DEBA2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TranslationRecognizer_FireEvent_Recognized_mDDE062FC556E989A6D9524FEDD5CB998F3B7283A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TranslationRecognizer_FireEvent_Recognizing_mB199DD38F12DAD9246DD6B677A2E74490B49A52F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TranslationRecognizer_FireEvent_SynthesisResult_mCE224C9BBD6BD727940FA60C9E032A92A4B3CB80_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TranslationRecognizer_U3CStartContinuousRecognitionAsyncU3Eb__45_0_mE07DE7033EAEA5EFA7E10E3C0EC5AAEDC9EE715A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TranslationRecognizer_U3CStopContinuousRecognitionAsyncU3Eb__46_0_m28CECB898F8C69BEB9C3F8724DC2C0729EC64A8D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Utf8StringMarshaler_MarshalNativeToManaged_mE524A0FA5B448795AFBC45096D889A5A647487D8_RuntimeMethod_var;
struct CultureData_t53CDF1C5F789A28897415891667799420D3C5529_marshaled_com;
struct CultureData_t53CDF1C5F789A28897415891667799420D3C5529_marshaled_pinvoke;
struct CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_marshaled_com;
struct CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_marshaled_pinvoke;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_t4EDC64499453AC24908C210DF18073739C4C91A2 
{
public:

public:
};


// System.Object


// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_t52A654EA9927D1B5F56CA05CF209F2E4393C4510* ___entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::version
	int32_t ___version_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeList
	int32_t ___freeList_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeCount
	int32_t ___freeCount_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::comparer
	RuntimeObject* ___comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_t52C81163A051BCD87A36FEF95F736DD600E2305D * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t9161A5C97376D261665798FA27DAFD5177305C81 * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5, ___buckets_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5, ___entries_1)); }
	inline EntryU5BU5D_t52A654EA9927D1B5F56CA05CF209F2E4393C4510* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_t52A654EA9927D1B5F56CA05CF209F2E4393C4510** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_t52A654EA9927D1B5F56CA05CF209F2E4393C4510* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5, ___keys_7)); }
	inline KeyCollection_t52C81163A051BCD87A36FEF95F736DD600E2305D * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t52C81163A051BCD87A36FEF95F736DD600E2305D ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t52C81163A051BCD87A36FEF95F736DD600E2305D * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5, ___values_8)); }
	inline ValueCollection_t9161A5C97376D261665798FA27DAFD5177305C81 * get_values_8() const { return ___values_8; }
	inline ValueCollection_t9161A5C97376D261665798FA27DAFD5177305C81 ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t9161A5C97376D261665798FA27DAFD5177305C81 * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.EmptyArray`1<System.Byte>
struct EmptyArray_1_tB2402F7A8151EE5618C0BCC8815C169E00142333  : public RuntimeObject
{
public:

public:
};

struct EmptyArray_1_tB2402F7A8151EE5618C0BCC8815C169E00142333_StaticFields
{
public:
	// T[] System.EmptyArray`1::Value
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___Value_0;

public:
	inline static int32_t get_offset_of_Value_0() { return static_cast<int32_t>(offsetof(EmptyArray_1_tB2402F7A8151EE5618C0BCC8815C169E00142333_StaticFields, ___Value_0)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_Value_0() const { return ___Value_0; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_Value_0() { return &___Value_0; }
	inline void set_Value_0(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___Value_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Value_0), (void*)value);
	}
};


// System.EmptyArray`1<System.Object>
struct EmptyArray_1_tBF73225DFA890366D579424FE8F40073BF9FBAD4  : public RuntimeObject
{
public:

public:
};

struct EmptyArray_1_tBF73225DFA890366D579424FE8F40073BF9FBAD4_StaticFields
{
public:
	// T[] System.EmptyArray`1::Value
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___Value_0;

public:
	inline static int32_t get_offset_of_Value_0() { return static_cast<int32_t>(offsetof(EmptyArray_1_tBF73225DFA890366D579424FE8F40073BF9FBAD4_StaticFields, ___Value_0)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get_Value_0() const { return ___Value_0; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of_Value_0() { return &___Value_0; }
	inline void set_Value_0(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		___Value_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Value_0), (void*)value);
	}
};

struct Il2CppArrayBounds;

// System.Array


// System.Attribute
struct Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71  : public RuntimeObject
{
public:

public:
};


// Microsoft.CognitiveServices.Speech.Audio.AudioConfig
struct AudioConfig_tF4EFBB8FE00E5C7569A7F087C11D4D85439A9E45  : public RuntimeObject
{
public:
	// System.Boolean Microsoft.CognitiveServices.Speech.Audio.AudioConfig::disposed
	bool ___disposed_0;
	// System.IDisposable Microsoft.CognitiveServices.Speech.Audio.AudioConfig::streamKeepAlive
	RuntimeObject* ___streamKeepAlive_1;
	// System.Boolean Microsoft.CognitiveServices.Speech.Audio.AudioConfig::disposeStream
	bool ___disposeStream_2;
	// Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle Microsoft.CognitiveServices.Speech.Audio.AudioConfig::configHandle
	InteropSafeHandle_tF14E3AD32AC904F5E38F4FAC0ED46417062386C6 * ___configHandle_3;
	// Microsoft.CognitiveServices.Speech.PropertyCollection Microsoft.CognitiveServices.Speech.Audio.AudioConfig::propBag
	PropertyCollection_tD6D50793A0684647D5C7067381E1365EDB3AA920 * ___propBag_4;

public:
	inline static int32_t get_offset_of_disposed_0() { return static_cast<int32_t>(offsetof(AudioConfig_tF4EFBB8FE00E5C7569A7F087C11D4D85439A9E45, ___disposed_0)); }
	inline bool get_disposed_0() const { return ___disposed_0; }
	inline bool* get_address_of_disposed_0() { return &___disposed_0; }
	inline void set_disposed_0(bool value)
	{
		___disposed_0 = value;
	}

	inline static int32_t get_offset_of_streamKeepAlive_1() { return static_cast<int32_t>(offsetof(AudioConfig_tF4EFBB8FE00E5C7569A7F087C11D4D85439A9E45, ___streamKeepAlive_1)); }
	inline RuntimeObject* get_streamKeepAlive_1() const { return ___streamKeepAlive_1; }
	inline RuntimeObject** get_address_of_streamKeepAlive_1() { return &___streamKeepAlive_1; }
	inline void set_streamKeepAlive_1(RuntimeObject* value)
	{
		___streamKeepAlive_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___streamKeepAlive_1), (void*)value);
	}

	inline static int32_t get_offset_of_disposeStream_2() { return static_cast<int32_t>(offsetof(AudioConfig_tF4EFBB8FE00E5C7569A7F087C11D4D85439A9E45, ___disposeStream_2)); }
	inline bool get_disposeStream_2() const { return ___disposeStream_2; }
	inline bool* get_address_of_disposeStream_2() { return &___disposeStream_2; }
	inline void set_disposeStream_2(bool value)
	{
		___disposeStream_2 = value;
	}

	inline static int32_t get_offset_of_configHandle_3() { return static_cast<int32_t>(offsetof(AudioConfig_tF4EFBB8FE00E5C7569A7F087C11D4D85439A9E45, ___configHandle_3)); }
	inline InteropSafeHandle_tF14E3AD32AC904F5E38F4FAC0ED46417062386C6 * get_configHandle_3() const { return ___configHandle_3; }
	inline InteropSafeHandle_tF14E3AD32AC904F5E38F4FAC0ED46417062386C6 ** get_address_of_configHandle_3() { return &___configHandle_3; }
	inline void set_configHandle_3(InteropSafeHandle_tF14E3AD32AC904F5E38F4FAC0ED46417062386C6 * value)
	{
		___configHandle_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___configHandle_3), (void*)value);
	}

	inline static int32_t get_offset_of_propBag_4() { return static_cast<int32_t>(offsetof(AudioConfig_tF4EFBB8FE00E5C7569A7F087C11D4D85439A9E45, ___propBag_4)); }
	inline PropertyCollection_tD6D50793A0684647D5C7067381E1365EDB3AA920 * get_propBag_4() const { return ___propBag_4; }
	inline PropertyCollection_tD6D50793A0684647D5C7067381E1365EDB3AA920 ** get_address_of_propBag_4() { return &___propBag_4; }
	inline void set_propBag_4(PropertyCollection_tD6D50793A0684647D5C7067381E1365EDB3AA920 * value)
	{
		___propBag_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___propBag_4), (void*)value);
	}
};


// Microsoft.CognitiveServices.Speech.Internal.CancellationDetails
struct CancellationDetails_t8BDC23852F4D58506FEF8DE26B0E6A56C07E01A4  : public RuntimeObject
{
public:

public:
};


// System.Runtime.ConstrainedExecution.CriticalFinalizerObject
struct CriticalFinalizerObject_tA3367C832FFE7434EB3C15C7136AF25524150997  : public RuntimeObject
{
public:

public:
};


// System.Globalization.CultureInfo
struct CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98  : public RuntimeObject
{
public:
	// System.Boolean System.Globalization.CultureInfo::m_isReadOnly
	bool ___m_isReadOnly_3;
	// System.Int32 System.Globalization.CultureInfo::cultureID
	int32_t ___cultureID_4;
	// System.Int32 System.Globalization.CultureInfo::parent_lcid
	int32_t ___parent_lcid_5;
	// System.Int32 System.Globalization.CultureInfo::datetime_index
	int32_t ___datetime_index_6;
	// System.Int32 System.Globalization.CultureInfo::number_index
	int32_t ___number_index_7;
	// System.Int32 System.Globalization.CultureInfo::default_calendar_type
	int32_t ___default_calendar_type_8;
	// System.Boolean System.Globalization.CultureInfo::m_useUserOverride
	bool ___m_useUserOverride_9;
	// System.Globalization.NumberFormatInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::numInfo
	NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D * ___numInfo_10;
	// System.Globalization.DateTimeFormatInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::dateTimeInfo
	DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90 * ___dateTimeInfo_11;
	// System.Globalization.TextInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::textInfo
	TextInfo_tE823D0684BFE8B203501C9B2B38585E8F06E872C * ___textInfo_12;
	// System.String System.Globalization.CultureInfo::m_name
	String_t* ___m_name_13;
	// System.String System.Globalization.CultureInfo::englishname
	String_t* ___englishname_14;
	// System.String System.Globalization.CultureInfo::nativename
	String_t* ___nativename_15;
	// System.String System.Globalization.CultureInfo::iso3lang
	String_t* ___iso3lang_16;
	// System.String System.Globalization.CultureInfo::iso2lang
	String_t* ___iso2lang_17;
	// System.String System.Globalization.CultureInfo::win3lang
	String_t* ___win3lang_18;
	// System.String System.Globalization.CultureInfo::territory
	String_t* ___territory_19;
	// System.String[] System.Globalization.CultureInfo::native_calendar_names
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___native_calendar_names_20;
	// System.Globalization.CompareInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::compareInfo
	CompareInfo_t4AB62EC32E8AF1E469E315620C7E3FB8B0CAE0C9 * ___compareInfo_21;
	// System.Void* System.Globalization.CultureInfo::textinfo_data
	void* ___textinfo_data_22;
	// System.Int32 System.Globalization.CultureInfo::m_dataItem
	int32_t ___m_dataItem_23;
	// System.Globalization.Calendar System.Globalization.CultureInfo::calendar
	Calendar_t3D638AEAB45F029DF47138EDA4CF9A7CBBB1C32A * ___calendar_24;
	// System.Globalization.CultureInfo System.Globalization.CultureInfo::parent_culture
	CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * ___parent_culture_25;
	// System.Boolean System.Globalization.CultureInfo::constructed
	bool ___constructed_26;
	// System.Byte[] System.Globalization.CultureInfo::cached_serialized_form
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___cached_serialized_form_27;
	// System.Globalization.CultureData System.Globalization.CultureInfo::m_cultureData
	CultureData_t53CDF1C5F789A28897415891667799420D3C5529 * ___m_cultureData_28;
	// System.Boolean System.Globalization.CultureInfo::m_isInherited
	bool ___m_isInherited_29;

public:
	inline static int32_t get_offset_of_m_isReadOnly_3() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___m_isReadOnly_3)); }
	inline bool get_m_isReadOnly_3() const { return ___m_isReadOnly_3; }
	inline bool* get_address_of_m_isReadOnly_3() { return &___m_isReadOnly_3; }
	inline void set_m_isReadOnly_3(bool value)
	{
		___m_isReadOnly_3 = value;
	}

	inline static int32_t get_offset_of_cultureID_4() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___cultureID_4)); }
	inline int32_t get_cultureID_4() const { return ___cultureID_4; }
	inline int32_t* get_address_of_cultureID_4() { return &___cultureID_4; }
	inline void set_cultureID_4(int32_t value)
	{
		___cultureID_4 = value;
	}

	inline static int32_t get_offset_of_parent_lcid_5() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___parent_lcid_5)); }
	inline int32_t get_parent_lcid_5() const { return ___parent_lcid_5; }
	inline int32_t* get_address_of_parent_lcid_5() { return &___parent_lcid_5; }
	inline void set_parent_lcid_5(int32_t value)
	{
		___parent_lcid_5 = value;
	}

	inline static int32_t get_offset_of_datetime_index_6() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___datetime_index_6)); }
	inline int32_t get_datetime_index_6() const { return ___datetime_index_6; }
	inline int32_t* get_address_of_datetime_index_6() { return &___datetime_index_6; }
	inline void set_datetime_index_6(int32_t value)
	{
		___datetime_index_6 = value;
	}

	inline static int32_t get_offset_of_number_index_7() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___number_index_7)); }
	inline int32_t get_number_index_7() const { return ___number_index_7; }
	inline int32_t* get_address_of_number_index_7() { return &___number_index_7; }
	inline void set_number_index_7(int32_t value)
	{
		___number_index_7 = value;
	}

	inline static int32_t get_offset_of_default_calendar_type_8() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___default_calendar_type_8)); }
	inline int32_t get_default_calendar_type_8() const { return ___default_calendar_type_8; }
	inline int32_t* get_address_of_default_calendar_type_8() { return &___default_calendar_type_8; }
	inline void set_default_calendar_type_8(int32_t value)
	{
		___default_calendar_type_8 = value;
	}

	inline static int32_t get_offset_of_m_useUserOverride_9() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___m_useUserOverride_9)); }
	inline bool get_m_useUserOverride_9() const { return ___m_useUserOverride_9; }
	inline bool* get_address_of_m_useUserOverride_9() { return &___m_useUserOverride_9; }
	inline void set_m_useUserOverride_9(bool value)
	{
		___m_useUserOverride_9 = value;
	}

	inline static int32_t get_offset_of_numInfo_10() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___numInfo_10)); }
	inline NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D * get_numInfo_10() const { return ___numInfo_10; }
	inline NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D ** get_address_of_numInfo_10() { return &___numInfo_10; }
	inline void set_numInfo_10(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D * value)
	{
		___numInfo_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___numInfo_10), (void*)value);
	}

	inline static int32_t get_offset_of_dateTimeInfo_11() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___dateTimeInfo_11)); }
	inline DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90 * get_dateTimeInfo_11() const { return ___dateTimeInfo_11; }
	inline DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90 ** get_address_of_dateTimeInfo_11() { return &___dateTimeInfo_11; }
	inline void set_dateTimeInfo_11(DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90 * value)
	{
		___dateTimeInfo_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dateTimeInfo_11), (void*)value);
	}

	inline static int32_t get_offset_of_textInfo_12() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___textInfo_12)); }
	inline TextInfo_tE823D0684BFE8B203501C9B2B38585E8F06E872C * get_textInfo_12() const { return ___textInfo_12; }
	inline TextInfo_tE823D0684BFE8B203501C9B2B38585E8F06E872C ** get_address_of_textInfo_12() { return &___textInfo_12; }
	inline void set_textInfo_12(TextInfo_tE823D0684BFE8B203501C9B2B38585E8F06E872C * value)
	{
		___textInfo_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___textInfo_12), (void*)value);
	}

	inline static int32_t get_offset_of_m_name_13() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___m_name_13)); }
	inline String_t* get_m_name_13() const { return ___m_name_13; }
	inline String_t** get_address_of_m_name_13() { return &___m_name_13; }
	inline void set_m_name_13(String_t* value)
	{
		___m_name_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_name_13), (void*)value);
	}

	inline static int32_t get_offset_of_englishname_14() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___englishname_14)); }
	inline String_t* get_englishname_14() const { return ___englishname_14; }
	inline String_t** get_address_of_englishname_14() { return &___englishname_14; }
	inline void set_englishname_14(String_t* value)
	{
		___englishname_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___englishname_14), (void*)value);
	}

	inline static int32_t get_offset_of_nativename_15() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___nativename_15)); }
	inline String_t* get_nativename_15() const { return ___nativename_15; }
	inline String_t** get_address_of_nativename_15() { return &___nativename_15; }
	inline void set_nativename_15(String_t* value)
	{
		___nativename_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___nativename_15), (void*)value);
	}

	inline static int32_t get_offset_of_iso3lang_16() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___iso3lang_16)); }
	inline String_t* get_iso3lang_16() const { return ___iso3lang_16; }
	inline String_t** get_address_of_iso3lang_16() { return &___iso3lang_16; }
	inline void set_iso3lang_16(String_t* value)
	{
		___iso3lang_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___iso3lang_16), (void*)value);
	}

	inline static int32_t get_offset_of_iso2lang_17() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___iso2lang_17)); }
	inline String_t* get_iso2lang_17() const { return ___iso2lang_17; }
	inline String_t** get_address_of_iso2lang_17() { return &___iso2lang_17; }
	inline void set_iso2lang_17(String_t* value)
	{
		___iso2lang_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___iso2lang_17), (void*)value);
	}

	inline static int32_t get_offset_of_win3lang_18() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___win3lang_18)); }
	inline String_t* get_win3lang_18() const { return ___win3lang_18; }
	inline String_t** get_address_of_win3lang_18() { return &___win3lang_18; }
	inline void set_win3lang_18(String_t* value)
	{
		___win3lang_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___win3lang_18), (void*)value);
	}

	inline static int32_t get_offset_of_territory_19() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___territory_19)); }
	inline String_t* get_territory_19() const { return ___territory_19; }
	inline String_t** get_address_of_territory_19() { return &___territory_19; }
	inline void set_territory_19(String_t* value)
	{
		___territory_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___territory_19), (void*)value);
	}

	inline static int32_t get_offset_of_native_calendar_names_20() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___native_calendar_names_20)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_native_calendar_names_20() const { return ___native_calendar_names_20; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_native_calendar_names_20() { return &___native_calendar_names_20; }
	inline void set_native_calendar_names_20(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___native_calendar_names_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___native_calendar_names_20), (void*)value);
	}

	inline static int32_t get_offset_of_compareInfo_21() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___compareInfo_21)); }
	inline CompareInfo_t4AB62EC32E8AF1E469E315620C7E3FB8B0CAE0C9 * get_compareInfo_21() const { return ___compareInfo_21; }
	inline CompareInfo_t4AB62EC32E8AF1E469E315620C7E3FB8B0CAE0C9 ** get_address_of_compareInfo_21() { return &___compareInfo_21; }
	inline void set_compareInfo_21(CompareInfo_t4AB62EC32E8AF1E469E315620C7E3FB8B0CAE0C9 * value)
	{
		___compareInfo_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___compareInfo_21), (void*)value);
	}

	inline static int32_t get_offset_of_textinfo_data_22() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___textinfo_data_22)); }
	inline void* get_textinfo_data_22() const { return ___textinfo_data_22; }
	inline void** get_address_of_textinfo_data_22() { return &___textinfo_data_22; }
	inline void set_textinfo_data_22(void* value)
	{
		___textinfo_data_22 = value;
	}

	inline static int32_t get_offset_of_m_dataItem_23() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___m_dataItem_23)); }
	inline int32_t get_m_dataItem_23() const { return ___m_dataItem_23; }
	inline int32_t* get_address_of_m_dataItem_23() { return &___m_dataItem_23; }
	inline void set_m_dataItem_23(int32_t value)
	{
		___m_dataItem_23 = value;
	}

	inline static int32_t get_offset_of_calendar_24() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___calendar_24)); }
	inline Calendar_t3D638AEAB45F029DF47138EDA4CF9A7CBBB1C32A * get_calendar_24() const { return ___calendar_24; }
	inline Calendar_t3D638AEAB45F029DF47138EDA4CF9A7CBBB1C32A ** get_address_of_calendar_24() { return &___calendar_24; }
	inline void set_calendar_24(Calendar_t3D638AEAB45F029DF47138EDA4CF9A7CBBB1C32A * value)
	{
		___calendar_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___calendar_24), (void*)value);
	}

	inline static int32_t get_offset_of_parent_culture_25() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___parent_culture_25)); }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * get_parent_culture_25() const { return ___parent_culture_25; }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 ** get_address_of_parent_culture_25() { return &___parent_culture_25; }
	inline void set_parent_culture_25(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * value)
	{
		___parent_culture_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___parent_culture_25), (void*)value);
	}

	inline static int32_t get_offset_of_constructed_26() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___constructed_26)); }
	inline bool get_constructed_26() const { return ___constructed_26; }
	inline bool* get_address_of_constructed_26() { return &___constructed_26; }
	inline void set_constructed_26(bool value)
	{
		___constructed_26 = value;
	}

	inline static int32_t get_offset_of_cached_serialized_form_27() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___cached_serialized_form_27)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_cached_serialized_form_27() const { return ___cached_serialized_form_27; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_cached_serialized_form_27() { return &___cached_serialized_form_27; }
	inline void set_cached_serialized_form_27(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___cached_serialized_form_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___cached_serialized_form_27), (void*)value);
	}

	inline static int32_t get_offset_of_m_cultureData_28() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___m_cultureData_28)); }
	inline CultureData_t53CDF1C5F789A28897415891667799420D3C5529 * get_m_cultureData_28() const { return ___m_cultureData_28; }
	inline CultureData_t53CDF1C5F789A28897415891667799420D3C5529 ** get_address_of_m_cultureData_28() { return &___m_cultureData_28; }
	inline void set_m_cultureData_28(CultureData_t53CDF1C5F789A28897415891667799420D3C5529 * value)
	{
		___m_cultureData_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_cultureData_28), (void*)value);
	}

	inline static int32_t get_offset_of_m_isInherited_29() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___m_isInherited_29)); }
	inline bool get_m_isInherited_29() const { return ___m_isInherited_29; }
	inline bool* get_address_of_m_isInherited_29() { return &___m_isInherited_29; }
	inline void set_m_isInherited_29(bool value)
	{
		___m_isInherited_29 = value;
	}
};

struct CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_StaticFields
{
public:
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::invariant_culture_info
	CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * ___invariant_culture_info_0;
	// System.Object System.Globalization.CultureInfo::shared_table_lock
	RuntimeObject * ___shared_table_lock_1;
	// System.Globalization.CultureInfo System.Globalization.CultureInfo::default_current_culture
	CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * ___default_current_culture_2;
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::s_DefaultThreadCurrentUICulture
	CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * ___s_DefaultThreadCurrentUICulture_33;
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::s_DefaultThreadCurrentCulture
	CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * ___s_DefaultThreadCurrentCulture_34;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Globalization.CultureInfo> System.Globalization.CultureInfo::shared_by_number
	Dictionary_2_t5B8303F2C9869A39ED3E03C0FBB09F817E479402 * ___shared_by_number_35;
	// System.Collections.Generic.Dictionary`2<System.String,System.Globalization.CultureInfo> System.Globalization.CultureInfo::shared_by_name
	Dictionary_2_t0015CBF964B0687CBB5ECFDDE06671A8F3DDE4BC * ___shared_by_name_36;
	// System.Boolean System.Globalization.CultureInfo::IsTaiwanSku
	bool ___IsTaiwanSku_37;

public:
	inline static int32_t get_offset_of_invariant_culture_info_0() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_StaticFields, ___invariant_culture_info_0)); }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * get_invariant_culture_info_0() const { return ___invariant_culture_info_0; }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 ** get_address_of_invariant_culture_info_0() { return &___invariant_culture_info_0; }
	inline void set_invariant_culture_info_0(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * value)
	{
		___invariant_culture_info_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___invariant_culture_info_0), (void*)value);
	}

	inline static int32_t get_offset_of_shared_table_lock_1() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_StaticFields, ___shared_table_lock_1)); }
	inline RuntimeObject * get_shared_table_lock_1() const { return ___shared_table_lock_1; }
	inline RuntimeObject ** get_address_of_shared_table_lock_1() { return &___shared_table_lock_1; }
	inline void set_shared_table_lock_1(RuntimeObject * value)
	{
		___shared_table_lock_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___shared_table_lock_1), (void*)value);
	}

	inline static int32_t get_offset_of_default_current_culture_2() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_StaticFields, ___default_current_culture_2)); }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * get_default_current_culture_2() const { return ___default_current_culture_2; }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 ** get_address_of_default_current_culture_2() { return &___default_current_culture_2; }
	inline void set_default_current_culture_2(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * value)
	{
		___default_current_culture_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___default_current_culture_2), (void*)value);
	}

	inline static int32_t get_offset_of_s_DefaultThreadCurrentUICulture_33() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_StaticFields, ___s_DefaultThreadCurrentUICulture_33)); }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * get_s_DefaultThreadCurrentUICulture_33() const { return ___s_DefaultThreadCurrentUICulture_33; }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 ** get_address_of_s_DefaultThreadCurrentUICulture_33() { return &___s_DefaultThreadCurrentUICulture_33; }
	inline void set_s_DefaultThreadCurrentUICulture_33(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * value)
	{
		___s_DefaultThreadCurrentUICulture_33 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultThreadCurrentUICulture_33), (void*)value);
	}

	inline static int32_t get_offset_of_s_DefaultThreadCurrentCulture_34() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_StaticFields, ___s_DefaultThreadCurrentCulture_34)); }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * get_s_DefaultThreadCurrentCulture_34() const { return ___s_DefaultThreadCurrentCulture_34; }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 ** get_address_of_s_DefaultThreadCurrentCulture_34() { return &___s_DefaultThreadCurrentCulture_34; }
	inline void set_s_DefaultThreadCurrentCulture_34(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * value)
	{
		___s_DefaultThreadCurrentCulture_34 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultThreadCurrentCulture_34), (void*)value);
	}

	inline static int32_t get_offset_of_shared_by_number_35() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_StaticFields, ___shared_by_number_35)); }
	inline Dictionary_2_t5B8303F2C9869A39ED3E03C0FBB09F817E479402 * get_shared_by_number_35() const { return ___shared_by_number_35; }
	inline Dictionary_2_t5B8303F2C9869A39ED3E03C0FBB09F817E479402 ** get_address_of_shared_by_number_35() { return &___shared_by_number_35; }
	inline void set_shared_by_number_35(Dictionary_2_t5B8303F2C9869A39ED3E03C0FBB09F817E479402 * value)
	{
		___shared_by_number_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___shared_by_number_35), (void*)value);
	}

	inline static int32_t get_offset_of_shared_by_name_36() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_StaticFields, ___shared_by_name_36)); }
	inline Dictionary_2_t0015CBF964B0687CBB5ECFDDE06671A8F3DDE4BC * get_shared_by_name_36() const { return ___shared_by_name_36; }
	inline Dictionary_2_t0015CBF964B0687CBB5ECFDDE06671A8F3DDE4BC ** get_address_of_shared_by_name_36() { return &___shared_by_name_36; }
	inline void set_shared_by_name_36(Dictionary_2_t0015CBF964B0687CBB5ECFDDE06671A8F3DDE4BC * value)
	{
		___shared_by_name_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___shared_by_name_36), (void*)value);
	}

	inline static int32_t get_offset_of_IsTaiwanSku_37() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_StaticFields, ___IsTaiwanSku_37)); }
	inline bool get_IsTaiwanSku_37() const { return ___IsTaiwanSku_37; }
	inline bool* get_address_of_IsTaiwanSku_37() { return &___IsTaiwanSku_37; }
	inline void set_IsTaiwanSku_37(bool value)
	{
		___IsTaiwanSku_37 = value;
	}
};

// Native definition for P/Invoke marshalling of System.Globalization.CultureInfo
struct CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_marshaled_pinvoke
{
	int32_t ___m_isReadOnly_3;
	int32_t ___cultureID_4;
	int32_t ___parent_lcid_5;
	int32_t ___datetime_index_6;
	int32_t ___number_index_7;
	int32_t ___default_calendar_type_8;
	int32_t ___m_useUserOverride_9;
	NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D * ___numInfo_10;
	DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90 * ___dateTimeInfo_11;
	TextInfo_tE823D0684BFE8B203501C9B2B38585E8F06E872C * ___textInfo_12;
	char* ___m_name_13;
	char* ___englishname_14;
	char* ___nativename_15;
	char* ___iso3lang_16;
	char* ___iso2lang_17;
	char* ___win3lang_18;
	char* ___territory_19;
	char** ___native_calendar_names_20;
	CompareInfo_t4AB62EC32E8AF1E469E315620C7E3FB8B0CAE0C9 * ___compareInfo_21;
	void* ___textinfo_data_22;
	int32_t ___m_dataItem_23;
	Calendar_t3D638AEAB45F029DF47138EDA4CF9A7CBBB1C32A * ___calendar_24;
	CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_marshaled_pinvoke* ___parent_culture_25;
	int32_t ___constructed_26;
	Il2CppSafeArray/*NONE*/* ___cached_serialized_form_27;
	CultureData_t53CDF1C5F789A28897415891667799420D3C5529_marshaled_pinvoke* ___m_cultureData_28;
	int32_t ___m_isInherited_29;
};
// Native definition for COM marshalling of System.Globalization.CultureInfo
struct CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_marshaled_com
{
	int32_t ___m_isReadOnly_3;
	int32_t ___cultureID_4;
	int32_t ___parent_lcid_5;
	int32_t ___datetime_index_6;
	int32_t ___number_index_7;
	int32_t ___default_calendar_type_8;
	int32_t ___m_useUserOverride_9;
	NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D * ___numInfo_10;
	DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90 * ___dateTimeInfo_11;
	TextInfo_tE823D0684BFE8B203501C9B2B38585E8F06E872C * ___textInfo_12;
	Il2CppChar* ___m_name_13;
	Il2CppChar* ___englishname_14;
	Il2CppChar* ___nativename_15;
	Il2CppChar* ___iso3lang_16;
	Il2CppChar* ___iso2lang_17;
	Il2CppChar* ___win3lang_18;
	Il2CppChar* ___territory_19;
	Il2CppChar** ___native_calendar_names_20;
	CompareInfo_t4AB62EC32E8AF1E469E315620C7E3FB8B0CAE0C9 * ___compareInfo_21;
	void* ___textinfo_data_22;
	int32_t ___m_dataItem_23;
	Calendar_t3D638AEAB45F029DF47138EDA4CF9A7CBBB1C32A * ___calendar_24;
	CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_marshaled_com* ___parent_culture_25;
	int32_t ___constructed_26;
	Il2CppSafeArray/*NONE*/* ___cached_serialized_form_27;
	CultureData_t53CDF1C5F789A28897415891667799420D3C5529_marshaled_com* ___m_cultureData_28;
	int32_t ___m_isInherited_29;
};

// Microsoft.CognitiveServices.Speech.Internal.Diagnostics
struct Diagnostics_tCF5DBAE40DC14F1D889D0096DE125C9FA3F5F155  : public RuntimeObject
{
public:

public:
};


// Microsoft.CognitiveServices.Speech.Internal.DiagnosticsInterop
struct DiagnosticsInterop_t04B4CE35D459B0932A9AC742CA90E853A8D4B46D  : public RuntimeObject
{
public:

public:
};


// System.Text.Encoding
struct Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827  : public RuntimeObject
{
public:
	// System.Int32 System.Text.Encoding::m_codePage
	int32_t ___m_codePage_9;
	// System.Globalization.CodePageDataItem System.Text.Encoding::dataItem
	CodePageDataItem_t09A62F57142BF0456C8F414898A37E79BCC9F09E * ___dataItem_10;
	// System.Boolean System.Text.Encoding::m_deserializedFromEverett
	bool ___m_deserializedFromEverett_11;
	// System.Boolean System.Text.Encoding::m_isReadOnly
	bool ___m_isReadOnly_12;
	// System.Text.EncoderFallback System.Text.Encoding::encoderFallback
	EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4 * ___encoderFallback_13;
	// System.Text.DecoderFallback System.Text.Encoding::decoderFallback
	DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D * ___decoderFallback_14;

public:
	inline static int32_t get_offset_of_m_codePage_9() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827, ___m_codePage_9)); }
	inline int32_t get_m_codePage_9() const { return ___m_codePage_9; }
	inline int32_t* get_address_of_m_codePage_9() { return &___m_codePage_9; }
	inline void set_m_codePage_9(int32_t value)
	{
		___m_codePage_9 = value;
	}

	inline static int32_t get_offset_of_dataItem_10() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827, ___dataItem_10)); }
	inline CodePageDataItem_t09A62F57142BF0456C8F414898A37E79BCC9F09E * get_dataItem_10() const { return ___dataItem_10; }
	inline CodePageDataItem_t09A62F57142BF0456C8F414898A37E79BCC9F09E ** get_address_of_dataItem_10() { return &___dataItem_10; }
	inline void set_dataItem_10(CodePageDataItem_t09A62F57142BF0456C8F414898A37E79BCC9F09E * value)
	{
		___dataItem_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dataItem_10), (void*)value);
	}

	inline static int32_t get_offset_of_m_deserializedFromEverett_11() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827, ___m_deserializedFromEverett_11)); }
	inline bool get_m_deserializedFromEverett_11() const { return ___m_deserializedFromEverett_11; }
	inline bool* get_address_of_m_deserializedFromEverett_11() { return &___m_deserializedFromEverett_11; }
	inline void set_m_deserializedFromEverett_11(bool value)
	{
		___m_deserializedFromEverett_11 = value;
	}

	inline static int32_t get_offset_of_m_isReadOnly_12() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827, ___m_isReadOnly_12)); }
	inline bool get_m_isReadOnly_12() const { return ___m_isReadOnly_12; }
	inline bool* get_address_of_m_isReadOnly_12() { return &___m_isReadOnly_12; }
	inline void set_m_isReadOnly_12(bool value)
	{
		___m_isReadOnly_12 = value;
	}

	inline static int32_t get_offset_of_encoderFallback_13() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827, ___encoderFallback_13)); }
	inline EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4 * get_encoderFallback_13() const { return ___encoderFallback_13; }
	inline EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4 ** get_address_of_encoderFallback_13() { return &___encoderFallback_13; }
	inline void set_encoderFallback_13(EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4 * value)
	{
		___encoderFallback_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___encoderFallback_13), (void*)value);
	}

	inline static int32_t get_offset_of_decoderFallback_14() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827, ___decoderFallback_14)); }
	inline DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D * get_decoderFallback_14() const { return ___decoderFallback_14; }
	inline DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D ** get_address_of_decoderFallback_14() { return &___decoderFallback_14; }
	inline void set_decoderFallback_14(DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D * value)
	{
		___decoderFallback_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___decoderFallback_14), (void*)value);
	}
};

struct Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields
{
public:
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::defaultEncoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___defaultEncoding_0;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::unicodeEncoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___unicodeEncoding_1;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::bigEndianUnicode
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___bigEndianUnicode_2;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf7Encoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___utf7Encoding_3;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf8Encoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___utf8Encoding_4;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf32Encoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___utf32Encoding_5;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::asciiEncoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___asciiEncoding_6;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::latin1Encoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___latin1Encoding_7;
	// System.Collections.Hashtable modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::encodings
	Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * ___encodings_8;
	// System.Object System.Text.Encoding::s_InternalSyncObject
	RuntimeObject * ___s_InternalSyncObject_15;

public:
	inline static int32_t get_offset_of_defaultEncoding_0() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___defaultEncoding_0)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_defaultEncoding_0() const { return ___defaultEncoding_0; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_defaultEncoding_0() { return &___defaultEncoding_0; }
	inline void set_defaultEncoding_0(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___defaultEncoding_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultEncoding_0), (void*)value);
	}

	inline static int32_t get_offset_of_unicodeEncoding_1() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___unicodeEncoding_1)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_unicodeEncoding_1() const { return ___unicodeEncoding_1; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_unicodeEncoding_1() { return &___unicodeEncoding_1; }
	inline void set_unicodeEncoding_1(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___unicodeEncoding_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___unicodeEncoding_1), (void*)value);
	}

	inline static int32_t get_offset_of_bigEndianUnicode_2() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___bigEndianUnicode_2)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_bigEndianUnicode_2() const { return ___bigEndianUnicode_2; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_bigEndianUnicode_2() { return &___bigEndianUnicode_2; }
	inline void set_bigEndianUnicode_2(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___bigEndianUnicode_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___bigEndianUnicode_2), (void*)value);
	}

	inline static int32_t get_offset_of_utf7Encoding_3() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___utf7Encoding_3)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_utf7Encoding_3() const { return ___utf7Encoding_3; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_utf7Encoding_3() { return &___utf7Encoding_3; }
	inline void set_utf7Encoding_3(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___utf7Encoding_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___utf7Encoding_3), (void*)value);
	}

	inline static int32_t get_offset_of_utf8Encoding_4() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___utf8Encoding_4)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_utf8Encoding_4() const { return ___utf8Encoding_4; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_utf8Encoding_4() { return &___utf8Encoding_4; }
	inline void set_utf8Encoding_4(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___utf8Encoding_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___utf8Encoding_4), (void*)value);
	}

	inline static int32_t get_offset_of_utf32Encoding_5() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___utf32Encoding_5)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_utf32Encoding_5() const { return ___utf32Encoding_5; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_utf32Encoding_5() { return &___utf32Encoding_5; }
	inline void set_utf32Encoding_5(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___utf32Encoding_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___utf32Encoding_5), (void*)value);
	}

	inline static int32_t get_offset_of_asciiEncoding_6() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___asciiEncoding_6)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_asciiEncoding_6() const { return ___asciiEncoding_6; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_asciiEncoding_6() { return &___asciiEncoding_6; }
	inline void set_asciiEncoding_6(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___asciiEncoding_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___asciiEncoding_6), (void*)value);
	}

	inline static int32_t get_offset_of_latin1Encoding_7() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___latin1Encoding_7)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_latin1Encoding_7() const { return ___latin1Encoding_7; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_latin1Encoding_7() { return &___latin1Encoding_7; }
	inline void set_latin1Encoding_7(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___latin1Encoding_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___latin1Encoding_7), (void*)value);
	}

	inline static int32_t get_offset_of_encodings_8() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___encodings_8)); }
	inline Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * get_encodings_8() const { return ___encodings_8; }
	inline Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC ** get_address_of_encodings_8() { return &___encodings_8; }
	inline void set_encodings_8(Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * value)
	{
		___encodings_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___encodings_8), (void*)value);
	}

	inline static int32_t get_offset_of_s_InternalSyncObject_15() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___s_InternalSyncObject_15)); }
	inline RuntimeObject * get_s_InternalSyncObject_15() const { return ___s_InternalSyncObject_15; }
	inline RuntimeObject ** get_address_of_s_InternalSyncObject_15() { return &___s_InternalSyncObject_15; }
	inline void set_s_InternalSyncObject_15(RuntimeObject * value)
	{
		___s_InternalSyncObject_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_InternalSyncObject_15), (void*)value);
	}
};


// Microsoft.CognitiveServices.Speech.Internal.EventArgs
struct EventArgs_tE0CDE5B02B1953500512222D736EC387B61A1E47  : public RuntimeObject
{
public:

public:
};


// System.EventArgs
struct EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA  : public RuntimeObject
{
public:

public:
};

struct EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA_StaticFields
{
public:
	// System.EventArgs System.EventArgs::Empty
	EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA * ___Empty_0;

public:
	inline static int32_t get_offset_of_Empty_0() { return static_cast<int32_t>(offsetof(EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA_StaticFields, ___Empty_0)); }
	inline EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA * get_Empty_0() const { return ___Empty_0; }
	inline EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA ** get_address_of_Empty_0() { return &___Empty_0; }
	inline void set_Empty_0(EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA * value)
	{
		___Empty_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Empty_0), (void*)value);
	}
};


// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
public:

public:
};


// Microsoft.CognitiveServices.Speech.PropertyCollection
struct PropertyCollection_tD6D50793A0684647D5C7067381E1365EDB3AA920  : public RuntimeObject
{
public:
	// Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle Microsoft.CognitiveServices.Speech.PropertyCollection::propbagHandle
	InteropSafeHandle_tF14E3AD32AC904F5E38F4FAC0ED46417062386C6 * ___propbagHandle_0;

public:
	inline static int32_t get_offset_of_propbagHandle_0() { return static_cast<int32_t>(offsetof(PropertyCollection_tD6D50793A0684647D5C7067381E1365EDB3AA920, ___propbagHandle_0)); }
	inline InteropSafeHandle_tF14E3AD32AC904F5E38F4FAC0ED46417062386C6 * get_propbagHandle_0() const { return ___propbagHandle_0; }
	inline InteropSafeHandle_tF14E3AD32AC904F5E38F4FAC0ED46417062386C6 ** get_address_of_propbagHandle_0() { return &___propbagHandle_0; }
	inline void set_propbagHandle_0(InteropSafeHandle_tF14E3AD32AC904F5E38F4FAC0ED46417062386C6 * value)
	{
		___propbagHandle_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___propbagHandle_0), (void*)value);
	}
};


// Microsoft.CognitiveServices.Speech.Internal.PropertyCollection
struct PropertyCollection_t63A371F0A7C0456D8D6E15911D2A1E65E9E59F8D  : public RuntimeObject
{
public:

public:
};


// Microsoft.CognitiveServices.Speech.Internal.RecognitionResult
struct RecognitionResult_tFFE8CE7C8637C9A3C8004007D2063CE5AB420D24  : public RuntimeObject
{
public:

public:
};


// Microsoft.CognitiveServices.Speech.Internal.Recognizer
struct Recognizer_t40F3BB24DC52FD778A2481176D5709BD4F1D6839  : public RuntimeObject
{
public:

public:
};


// Microsoft.CognitiveServices.Speech.SpeechConfig
struct SpeechConfig_tB1A7AD16A9CDE287A706780CBD6F22AAA64A9E11  : public RuntimeObject
{
public:
	// Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle Microsoft.CognitiveServices.Speech.SpeechConfig::configHandle
	InteropSafeHandle_tF14E3AD32AC904F5E38F4FAC0ED46417062386C6 * ___configHandle_0;
	// Microsoft.CognitiveServices.Speech.PropertyCollection Microsoft.CognitiveServices.Speech.SpeechConfig::progBag
	PropertyCollection_tD6D50793A0684647D5C7067381E1365EDB3AA920 * ___progBag_1;

public:
	inline static int32_t get_offset_of_configHandle_0() { return static_cast<int32_t>(offsetof(SpeechConfig_tB1A7AD16A9CDE287A706780CBD6F22AAA64A9E11, ___configHandle_0)); }
	inline InteropSafeHandle_tF14E3AD32AC904F5E38F4FAC0ED46417062386C6 * get_configHandle_0() const { return ___configHandle_0; }
	inline InteropSafeHandle_tF14E3AD32AC904F5E38F4FAC0ED46417062386C6 ** get_address_of_configHandle_0() { return &___configHandle_0; }
	inline void set_configHandle_0(InteropSafeHandle_tF14E3AD32AC904F5E38F4FAC0ED46417062386C6 * value)
	{
		___configHandle_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___configHandle_0), (void*)value);
	}

	inline static int32_t get_offset_of_progBag_1() { return static_cast<int32_t>(offsetof(SpeechConfig_tB1A7AD16A9CDE287A706780CBD6F22AAA64A9E11, ___progBag_1)); }
	inline PropertyCollection_tD6D50793A0684647D5C7067381E1365EDB3AA920 * get_progBag_1() const { return ___progBag_1; }
	inline PropertyCollection_tD6D50793A0684647D5C7067381E1365EDB3AA920 ** get_address_of_progBag_1() { return &___progBag_1; }
	inline void set_progBag_1(PropertyCollection_tD6D50793A0684647D5C7067381E1365EDB3AA920 * value)
	{
		___progBag_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___progBag_1), (void*)value);
	}
};


// Microsoft.CognitiveServices.Speech.Internal.SpeechConfig
struct SpeechConfig_t1C831D9624E77DB65D116D388E26EE288068F6A4  : public RuntimeObject
{
public:

public:
};


// Microsoft.CognitiveServices.Speech.Internal.SpeechTranslationConfig
struct SpeechTranslationConfig_t34BC1B10DEABCA683E1484B9F5B8865D08F53C73  : public RuntimeObject
{
public:

public:
};


// Microsoft.CognitiveServices.Speech.Internal.SpxExceptionThrower
struct SpxExceptionThrower_tDF82C537479796EB7BB67550D429965269A9C286  : public RuntimeObject
{
public:

public:
};


// Microsoft.CognitiveServices.Speech.Internal.SpxFactory
struct SpxFactory_tAE81EECE5A6625BEB9FCB0B97080B124040CFE39  : public RuntimeObject
{
public:

public:
};


// System.String
struct String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::m_stringLength
	int32_t ___m_stringLength_0;
	// System.Char System.String::m_firstChar
	Il2CppChar ___m_firstChar_1;

public:
	inline static int32_t get_offset_of_m_stringLength_0() { return static_cast<int32_t>(offsetof(String_t, ___m_stringLength_0)); }
	inline int32_t get_m_stringLength_0() const { return ___m_stringLength_0; }
	inline int32_t* get_address_of_m_stringLength_0() { return &___m_stringLength_0; }
	inline void set_m_stringLength_0(int32_t value)
	{
		___m_stringLength_0 = value;
	}

	inline static int32_t get_offset_of_m_firstChar_1() { return static_cast<int32_t>(offsetof(String_t, ___m_firstChar_1)); }
	inline Il2CppChar get_m_firstChar_1() const { return ___m_firstChar_1; }
	inline Il2CppChar* get_address_of_m_firstChar_1() { return &___m_firstChar_1; }
	inline void set_m_firstChar_1(Il2CppChar value)
	{
		___m_firstChar_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_5;

public:
	inline static int32_t get_offset_of_Empty_5() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_5)); }
	inline String_t* get_Empty_5() const { return ___Empty_5; }
	inline String_t** get_address_of_Empty_5() { return &___Empty_5; }
	inline void set_Empty_5(String_t* value)
	{
		___Empty_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Empty_5), (void*)value);
	}
};


// Microsoft.CognitiveServices.Speech.Internal.Utf8StringMarshaler
struct Utf8StringMarshaler_t4E1A095BA6E9CD02ED374AB5FD168722AFE654CA  : public RuntimeObject
{
public:

public:
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

// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
struct KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	RuntimeObject * ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625, ___key_0)); }
	inline RuntimeObject * get_key_0() const { return ___key_0; }
	inline RuntimeObject ** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(RuntimeObject * value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___key_0), (void*)value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625, ___value_1)); }
	inline RuntimeObject * get_value_1() const { return ___value_1; }
	inline RuntimeObject ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(RuntimeObject * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___value_1), (void*)value);
	}
};


// System.Collections.Generic.KeyValuePair`2<System.String,System.String>
struct KeyValuePair_2_tE863694F1DB1F441CAE5A282829BDB941B2DEEBC 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	String_t* ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	String_t* ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_tE863694F1DB1F441CAE5A282829BDB941B2DEEBC, ___key_0)); }
	inline String_t* get_key_0() const { return ___key_0; }
	inline String_t** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(String_t* value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___key_0), (void*)value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_tE863694F1DB1F441CAE5A282829BDB941B2DEEBC, ___value_1)); }
	inline String_t* get_value_1() const { return ___value_1; }
	inline String_t** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(String_t* value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___value_1), (void*)value);
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


// System.Byte
struct Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056 
{
public:
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056, ___m_value_0)); }
	inline uint8_t get_m_value_0() const { return ___m_value_0; }
	inline uint8_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint8_t value)
	{
		___m_value_0 = value;
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


// Microsoft.CognitiveServices.Speech.Internal.MonoPInvokeCallbackAttribute
struct MonoPInvokeCallbackAttribute_t15B62F0A74DFEE65E3FB194D9F149B3026924A6F  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:
	// System.Type Microsoft.CognitiveServices.Speech.Internal.MonoPInvokeCallbackAttribute::type
	Type_t * ___type_0;

public:
	inline static int32_t get_offset_of_type_0() { return static_cast<int32_t>(offsetof(MonoPInvokeCallbackAttribute_t15B62F0A74DFEE65E3FB194D9F149B3026924A6F, ___type_0)); }
	inline Type_t * get_type_0() const { return ___type_0; }
	inline Type_t ** get_address_of_type_0() { return &___type_0; }
	inline void set_type_0(Type_t * value)
	{
		___type_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___type_0), (void*)value);
	}
};


// Microsoft.CognitiveServices.Speech.SessionEventArgs
struct SessionEventArgs_t720E6DA982AD7DE7933835DEBBECD8B78F28CAB1  : public EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA
{
public:
	// Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle Microsoft.CognitiveServices.Speech.SessionEventArgs::eventHandle
	InteropSafeHandle_tF14E3AD32AC904F5E38F4FAC0ED46417062386C6 * ___eventHandle_1;
	// System.String Microsoft.CognitiveServices.Speech.SessionEventArgs::<SessionId>k__BackingField
	String_t* ___U3CSessionIdU3Ek__BackingField_4;

public:
	inline static int32_t get_offset_of_eventHandle_1() { return static_cast<int32_t>(offsetof(SessionEventArgs_t720E6DA982AD7DE7933835DEBBECD8B78F28CAB1, ___eventHandle_1)); }
	inline InteropSafeHandle_tF14E3AD32AC904F5E38F4FAC0ED46417062386C6 * get_eventHandle_1() const { return ___eventHandle_1; }
	inline InteropSafeHandle_tF14E3AD32AC904F5E38F4FAC0ED46417062386C6 ** get_address_of_eventHandle_1() { return &___eventHandle_1; }
	inline void set_eventHandle_1(InteropSafeHandle_tF14E3AD32AC904F5E38F4FAC0ED46417062386C6 * value)
	{
		___eventHandle_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___eventHandle_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CSessionIdU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(SessionEventArgs_t720E6DA982AD7DE7933835DEBBECD8B78F28CAB1, ___U3CSessionIdU3Ek__BackingField_4)); }
	inline String_t* get_U3CSessionIdU3Ek__BackingField_4() const { return ___U3CSessionIdU3Ek__BackingField_4; }
	inline String_t** get_address_of_U3CSessionIdU3Ek__BackingField_4() { return &___U3CSessionIdU3Ek__BackingField_4; }
	inline void set_U3CSessionIdU3Ek__BackingField_4(String_t* value)
	{
		___U3CSessionIdU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CSessionIdU3Ek__BackingField_4), (void*)value);
	}
};


// Microsoft.CognitiveServices.Speech.SpeechTranslationConfig
struct SpeechTranslationConfig_tFBB58FC53E2E75766C94D604CEF28A14CE72E90D  : public SpeechConfig_tB1A7AD16A9CDE287A706780CBD6F22AAA64A9E11
{
public:
	// System.String Microsoft.CognitiveServices.Speech.SpeechTranslationConfig::targetLanguages
	String_t* ___targetLanguages_2;

public:
	inline static int32_t get_offset_of_targetLanguages_2() { return static_cast<int32_t>(offsetof(SpeechTranslationConfig_tFBB58FC53E2E75766C94D604CEF28A14CE72E90D, ___targetLanguages_2)); }
	inline String_t* get_targetLanguages_2() const { return ___targetLanguages_2; }
	inline String_t** get_address_of_targetLanguages_2() { return &___targetLanguages_2; }
	inline void set_targetLanguages_2(String_t* value)
	{
		___targetLanguages_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___targetLanguages_2), (void*)value);
	}
};


// System.UInt32
struct UInt32_tE60352A06233E4E69DD198BCC67142159F686B15 
{
public:
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt32_tE60352A06233E4E69DD198BCC67142159F686B15, ___m_value_0)); }
	inline uint32_t get_m_value_0() const { return ___m_value_0; }
	inline uint32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint32_t value)
	{
		___m_value_0 = value;
	}
};


// System.UInt64
struct UInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281 
{
public:
	// System.UInt64 System.UInt64::m_value
	uint64_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281, ___m_value_0)); }
	inline uint64_t get_m_value_0() const { return ___m_value_0; }
	inline uint64_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint64_t value)
	{
		___m_value_0 = value;
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


// System.Reflection.BindingFlags
struct BindingFlags_tAAAB07D9AC588F0D55D844E51D7035E96DF94733 
{
public:
	// System.Int32 System.Reflection.BindingFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(BindingFlags_tAAAB07D9AC588F0D55D844E51D7035E96DF94733, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Microsoft.CognitiveServices.Speech.CancellationErrorCode
struct CancellationErrorCode_t91865BA91C9E78F536A8756E3533F4ECE8824D62 
{
public:
	// System.Int32 Microsoft.CognitiveServices.Speech.CancellationErrorCode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(CancellationErrorCode_t91865BA91C9E78F536A8756E3533F4ECE8824D62, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Microsoft.CognitiveServices.Speech.CancellationReason
struct CancellationReason_t11019B124BB3269219C20F71CE36597F73A7E20E 
{
public:
	// System.Int32 Microsoft.CognitiveServices.Speech.CancellationReason::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(CancellationReason_t11019B124BB3269219C20F71CE36597F73A7E20E, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
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

// System.Runtime.InteropServices.GCHandleType
struct GCHandleType_t5D58978165671EDEFCCAE1E2B237BD5AE4E8BC38 
{
public:
	// System.Int32 System.Runtime.InteropServices.GCHandleType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(GCHandleType_t5D58978165671EDEFCCAE1E2B237BD5AE4E8BC38, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Microsoft.CognitiveServices.Speech.PropertyId
struct PropertyId_t702C0DD71BE664DA4109655CE7DBF0587758B71E 
{
public:
	// System.Int32 Microsoft.CognitiveServices.Speech.PropertyId::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(PropertyId_t702C0DD71BE664DA4109655CE7DBF0587758B71E, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Microsoft.CognitiveServices.Speech.RecognitionEventArgs
struct RecognitionEventArgs_tC7B8B5C317C90BF54CBE82BE86321F5359B98650  : public SessionEventArgs_t720E6DA982AD7DE7933835DEBBECD8B78F28CAB1
{
public:
	// System.UInt64 Microsoft.CognitiveServices.Speech.RecognitionEventArgs::<Offset>k__BackingField
	uint64_t ___U3COffsetU3Ek__BackingField_5;

public:
	inline static int32_t get_offset_of_U3COffsetU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(RecognitionEventArgs_tC7B8B5C317C90BF54CBE82BE86321F5359B98650, ___U3COffsetU3Ek__BackingField_5)); }
	inline uint64_t get_U3COffsetU3Ek__BackingField_5() const { return ___U3COffsetU3Ek__BackingField_5; }
	inline uint64_t* get_address_of_U3COffsetU3Ek__BackingField_5() { return &___U3COffsetU3Ek__BackingField_5; }
	inline void set_U3COffsetU3Ek__BackingField_5(uint64_t value)
	{
		___U3COffsetU3Ek__BackingField_5 = value;
	}
};


// Microsoft.CognitiveServices.Speech.Recognizer
struct Recognizer_tF1FAA5F9E223C619151C5DA96D83F0AF7E3C9E3E  : public RuntimeObject
{
public:
	// System.EventHandler`1<Microsoft.CognitiveServices.Speech.SessionEventArgs> Microsoft.CognitiveServices.Speech.Recognizer::_SessionStarted
	EventHandler_1_tB9B30C7ACA01631527E7047FB53709C6EC5B260A * ____SessionStarted_0;
	// System.EventHandler`1<Microsoft.CognitiveServices.Speech.SessionEventArgs> Microsoft.CognitiveServices.Speech.Recognizer::_SessionStopped
	EventHandler_1_tB9B30C7ACA01631527E7047FB53709C6EC5B260A * ____SessionStopped_1;
	// System.EventHandler`1<Microsoft.CognitiveServices.Speech.RecognitionEventArgs> Microsoft.CognitiveServices.Speech.Recognizer::_SpeechStartDetected
	EventHandler_1_t9D5FDB2FE48DCCFFD359039BB88FD53E210F0A8D * ____SpeechStartDetected_2;
	// System.EventHandler`1<Microsoft.CognitiveServices.Speech.RecognitionEventArgs> Microsoft.CognitiveServices.Speech.Recognizer::_SpeechEndDetected
	EventHandler_1_t9D5FDB2FE48DCCFFD359039BB88FD53E210F0A8D * ____SpeechEndDetected_3;
	// Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle Microsoft.CognitiveServices.Speech.Recognizer::recoHandle
	InteropSafeHandle_tF14E3AD32AC904F5E38F4FAC0ED46417062386C6 * ___recoHandle_4;
	// System.String Microsoft.CognitiveServices.Speech.Recognizer::pointerHandle
	String_t* ___pointerHandle_5;
	// System.IntPtr Microsoft.CognitiveServices.Speech.Recognizer::asyncStartContinuousHandle
	intptr_t ___asyncStartContinuousHandle_6;
	// System.IntPtr Microsoft.CognitiveServices.Speech.Recognizer::asyncStopContinuousHandle
	intptr_t ___asyncStopContinuousHandle_7;
	// System.IntPtr Microsoft.CognitiveServices.Speech.Recognizer::asyncStartKeywordHandle
	intptr_t ___asyncStartKeywordHandle_8;
	// System.IntPtr Microsoft.CognitiveServices.Speech.Recognizer::asyncStopKeywordHandle
	intptr_t ___asyncStopKeywordHandle_9;
	// Microsoft.CognitiveServices.Speech.Internal.CallbackFunctionDelegate Microsoft.CognitiveServices.Speech.Recognizer::speechStartDetectedCallbackDelegate
	CallbackFunctionDelegate_tEDE2A24857EFCB03EE502D1E6E8A9E977030EAC4 * ___speechStartDetectedCallbackDelegate_10;
	// Microsoft.CognitiveServices.Speech.Internal.CallbackFunctionDelegate Microsoft.CognitiveServices.Speech.Recognizer::speechEndDetectedCallbackDelegate
	CallbackFunctionDelegate_tEDE2A24857EFCB03EE502D1E6E8A9E977030EAC4 * ___speechEndDetectedCallbackDelegate_11;
	// Microsoft.CognitiveServices.Speech.Internal.CallbackFunctionDelegate Microsoft.CognitiveServices.Speech.Recognizer::sessionStartedCallbackDelegate
	CallbackFunctionDelegate_tEDE2A24857EFCB03EE502D1E6E8A9E977030EAC4 * ___sessionStartedCallbackDelegate_12;
	// Microsoft.CognitiveServices.Speech.Internal.CallbackFunctionDelegate Microsoft.CognitiveServices.Speech.Recognizer::sessionStoppedCallbackDelegate
	CallbackFunctionDelegate_tEDE2A24857EFCB03EE502D1E6E8A9E977030EAC4 * ___sessionStoppedCallbackDelegate_13;
	// System.Runtime.InteropServices.GCHandle Microsoft.CognitiveServices.Speech.Recognizer::gch
	GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603  ___gch_14;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) Microsoft.CognitiveServices.Speech.Recognizer::disposed
	bool ___disposed_15;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) Microsoft.CognitiveServices.Speech.Recognizer::isDisposing
	bool ___isDisposing_16;
	// System.Object Microsoft.CognitiveServices.Speech.Recognizer::recognizerLock
	RuntimeObject * ___recognizerLock_17;
	// System.Int32 Microsoft.CognitiveServices.Speech.Recognizer::activeAsyncRecognitionCounter
	int32_t ___activeAsyncRecognitionCounter_18;

public:
	inline static int32_t get_offset_of__SessionStarted_0() { return static_cast<int32_t>(offsetof(Recognizer_tF1FAA5F9E223C619151C5DA96D83F0AF7E3C9E3E, ____SessionStarted_0)); }
	inline EventHandler_1_tB9B30C7ACA01631527E7047FB53709C6EC5B260A * get__SessionStarted_0() const { return ____SessionStarted_0; }
	inline EventHandler_1_tB9B30C7ACA01631527E7047FB53709C6EC5B260A ** get_address_of__SessionStarted_0() { return &____SessionStarted_0; }
	inline void set__SessionStarted_0(EventHandler_1_tB9B30C7ACA01631527E7047FB53709C6EC5B260A * value)
	{
		____SessionStarted_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____SessionStarted_0), (void*)value);
	}

	inline static int32_t get_offset_of__SessionStopped_1() { return static_cast<int32_t>(offsetof(Recognizer_tF1FAA5F9E223C619151C5DA96D83F0AF7E3C9E3E, ____SessionStopped_1)); }
	inline EventHandler_1_tB9B30C7ACA01631527E7047FB53709C6EC5B260A * get__SessionStopped_1() const { return ____SessionStopped_1; }
	inline EventHandler_1_tB9B30C7ACA01631527E7047FB53709C6EC5B260A ** get_address_of__SessionStopped_1() { return &____SessionStopped_1; }
	inline void set__SessionStopped_1(EventHandler_1_tB9B30C7ACA01631527E7047FB53709C6EC5B260A * value)
	{
		____SessionStopped_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____SessionStopped_1), (void*)value);
	}

	inline static int32_t get_offset_of__SpeechStartDetected_2() { return static_cast<int32_t>(offsetof(Recognizer_tF1FAA5F9E223C619151C5DA96D83F0AF7E3C9E3E, ____SpeechStartDetected_2)); }
	inline EventHandler_1_t9D5FDB2FE48DCCFFD359039BB88FD53E210F0A8D * get__SpeechStartDetected_2() const { return ____SpeechStartDetected_2; }
	inline EventHandler_1_t9D5FDB2FE48DCCFFD359039BB88FD53E210F0A8D ** get_address_of__SpeechStartDetected_2() { return &____SpeechStartDetected_2; }
	inline void set__SpeechStartDetected_2(EventHandler_1_t9D5FDB2FE48DCCFFD359039BB88FD53E210F0A8D * value)
	{
		____SpeechStartDetected_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____SpeechStartDetected_2), (void*)value);
	}

	inline static int32_t get_offset_of__SpeechEndDetected_3() { return static_cast<int32_t>(offsetof(Recognizer_tF1FAA5F9E223C619151C5DA96D83F0AF7E3C9E3E, ____SpeechEndDetected_3)); }
	inline EventHandler_1_t9D5FDB2FE48DCCFFD359039BB88FD53E210F0A8D * get__SpeechEndDetected_3() const { return ____SpeechEndDetected_3; }
	inline EventHandler_1_t9D5FDB2FE48DCCFFD359039BB88FD53E210F0A8D ** get_address_of__SpeechEndDetected_3() { return &____SpeechEndDetected_3; }
	inline void set__SpeechEndDetected_3(EventHandler_1_t9D5FDB2FE48DCCFFD359039BB88FD53E210F0A8D * value)
	{
		____SpeechEndDetected_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____SpeechEndDetected_3), (void*)value);
	}

	inline static int32_t get_offset_of_recoHandle_4() { return static_cast<int32_t>(offsetof(Recognizer_tF1FAA5F9E223C619151C5DA96D83F0AF7E3C9E3E, ___recoHandle_4)); }
	inline InteropSafeHandle_tF14E3AD32AC904F5E38F4FAC0ED46417062386C6 * get_recoHandle_4() const { return ___recoHandle_4; }
	inline InteropSafeHandle_tF14E3AD32AC904F5E38F4FAC0ED46417062386C6 ** get_address_of_recoHandle_4() { return &___recoHandle_4; }
	inline void set_recoHandle_4(InteropSafeHandle_tF14E3AD32AC904F5E38F4FAC0ED46417062386C6 * value)
	{
		___recoHandle_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___recoHandle_4), (void*)value);
	}

	inline static int32_t get_offset_of_pointerHandle_5() { return static_cast<int32_t>(offsetof(Recognizer_tF1FAA5F9E223C619151C5DA96D83F0AF7E3C9E3E, ___pointerHandle_5)); }
	inline String_t* get_pointerHandle_5() const { return ___pointerHandle_5; }
	inline String_t** get_address_of_pointerHandle_5() { return &___pointerHandle_5; }
	inline void set_pointerHandle_5(String_t* value)
	{
		___pointerHandle_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___pointerHandle_5), (void*)value);
	}

	inline static int32_t get_offset_of_asyncStartContinuousHandle_6() { return static_cast<int32_t>(offsetof(Recognizer_tF1FAA5F9E223C619151C5DA96D83F0AF7E3C9E3E, ___asyncStartContinuousHandle_6)); }
	inline intptr_t get_asyncStartContinuousHandle_6() const { return ___asyncStartContinuousHandle_6; }
	inline intptr_t* get_address_of_asyncStartContinuousHandle_6() { return &___asyncStartContinuousHandle_6; }
	inline void set_asyncStartContinuousHandle_6(intptr_t value)
	{
		___asyncStartContinuousHandle_6 = value;
	}

	inline static int32_t get_offset_of_asyncStopContinuousHandle_7() { return static_cast<int32_t>(offsetof(Recognizer_tF1FAA5F9E223C619151C5DA96D83F0AF7E3C9E3E, ___asyncStopContinuousHandle_7)); }
	inline intptr_t get_asyncStopContinuousHandle_7() const { return ___asyncStopContinuousHandle_7; }
	inline intptr_t* get_address_of_asyncStopContinuousHandle_7() { return &___asyncStopContinuousHandle_7; }
	inline void set_asyncStopContinuousHandle_7(intptr_t value)
	{
		___asyncStopContinuousHandle_7 = value;
	}

	inline static int32_t get_offset_of_asyncStartKeywordHandle_8() { return static_cast<int32_t>(offsetof(Recognizer_tF1FAA5F9E223C619151C5DA96D83F0AF7E3C9E3E, ___asyncStartKeywordHandle_8)); }
	inline intptr_t get_asyncStartKeywordHandle_8() const { return ___asyncStartKeywordHandle_8; }
	inline intptr_t* get_address_of_asyncStartKeywordHandle_8() { return &___asyncStartKeywordHandle_8; }
	inline void set_asyncStartKeywordHandle_8(intptr_t value)
	{
		___asyncStartKeywordHandle_8 = value;
	}

	inline static int32_t get_offset_of_asyncStopKeywordHandle_9() { return static_cast<int32_t>(offsetof(Recognizer_tF1FAA5F9E223C619151C5DA96D83F0AF7E3C9E3E, ___asyncStopKeywordHandle_9)); }
	inline intptr_t get_asyncStopKeywordHandle_9() const { return ___asyncStopKeywordHandle_9; }
	inline intptr_t* get_address_of_asyncStopKeywordHandle_9() { return &___asyncStopKeywordHandle_9; }
	inline void set_asyncStopKeywordHandle_9(intptr_t value)
	{
		___asyncStopKeywordHandle_9 = value;
	}

	inline static int32_t get_offset_of_speechStartDetectedCallbackDelegate_10() { return static_cast<int32_t>(offsetof(Recognizer_tF1FAA5F9E223C619151C5DA96D83F0AF7E3C9E3E, ___speechStartDetectedCallbackDelegate_10)); }
	inline CallbackFunctionDelegate_tEDE2A24857EFCB03EE502D1E6E8A9E977030EAC4 * get_speechStartDetectedCallbackDelegate_10() const { return ___speechStartDetectedCallbackDelegate_10; }
	inline CallbackFunctionDelegate_tEDE2A24857EFCB03EE502D1E6E8A9E977030EAC4 ** get_address_of_speechStartDetectedCallbackDelegate_10() { return &___speechStartDetectedCallbackDelegate_10; }
	inline void set_speechStartDetectedCallbackDelegate_10(CallbackFunctionDelegate_tEDE2A24857EFCB03EE502D1E6E8A9E977030EAC4 * value)
	{
		___speechStartDetectedCallbackDelegate_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___speechStartDetectedCallbackDelegate_10), (void*)value);
	}

	inline static int32_t get_offset_of_speechEndDetectedCallbackDelegate_11() { return static_cast<int32_t>(offsetof(Recognizer_tF1FAA5F9E223C619151C5DA96D83F0AF7E3C9E3E, ___speechEndDetectedCallbackDelegate_11)); }
	inline CallbackFunctionDelegate_tEDE2A24857EFCB03EE502D1E6E8A9E977030EAC4 * get_speechEndDetectedCallbackDelegate_11() const { return ___speechEndDetectedCallbackDelegate_11; }
	inline CallbackFunctionDelegate_tEDE2A24857EFCB03EE502D1E6E8A9E977030EAC4 ** get_address_of_speechEndDetectedCallbackDelegate_11() { return &___speechEndDetectedCallbackDelegate_11; }
	inline void set_speechEndDetectedCallbackDelegate_11(CallbackFunctionDelegate_tEDE2A24857EFCB03EE502D1E6E8A9E977030EAC4 * value)
	{
		___speechEndDetectedCallbackDelegate_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___speechEndDetectedCallbackDelegate_11), (void*)value);
	}

	inline static int32_t get_offset_of_sessionStartedCallbackDelegate_12() { return static_cast<int32_t>(offsetof(Recognizer_tF1FAA5F9E223C619151C5DA96D83F0AF7E3C9E3E, ___sessionStartedCallbackDelegate_12)); }
	inline CallbackFunctionDelegate_tEDE2A24857EFCB03EE502D1E6E8A9E977030EAC4 * get_sessionStartedCallbackDelegate_12() const { return ___sessionStartedCallbackDelegate_12; }
	inline CallbackFunctionDelegate_tEDE2A24857EFCB03EE502D1E6E8A9E977030EAC4 ** get_address_of_sessionStartedCallbackDelegate_12() { return &___sessionStartedCallbackDelegate_12; }
	inline void set_sessionStartedCallbackDelegate_12(CallbackFunctionDelegate_tEDE2A24857EFCB03EE502D1E6E8A9E977030EAC4 * value)
	{
		___sessionStartedCallbackDelegate_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sessionStartedCallbackDelegate_12), (void*)value);
	}

	inline static int32_t get_offset_of_sessionStoppedCallbackDelegate_13() { return static_cast<int32_t>(offsetof(Recognizer_tF1FAA5F9E223C619151C5DA96D83F0AF7E3C9E3E, ___sessionStoppedCallbackDelegate_13)); }
	inline CallbackFunctionDelegate_tEDE2A24857EFCB03EE502D1E6E8A9E977030EAC4 * get_sessionStoppedCallbackDelegate_13() const { return ___sessionStoppedCallbackDelegate_13; }
	inline CallbackFunctionDelegate_tEDE2A24857EFCB03EE502D1E6E8A9E977030EAC4 ** get_address_of_sessionStoppedCallbackDelegate_13() { return &___sessionStoppedCallbackDelegate_13; }
	inline void set_sessionStoppedCallbackDelegate_13(CallbackFunctionDelegate_tEDE2A24857EFCB03EE502D1E6E8A9E977030EAC4 * value)
	{
		___sessionStoppedCallbackDelegate_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sessionStoppedCallbackDelegate_13), (void*)value);
	}

	inline static int32_t get_offset_of_gch_14() { return static_cast<int32_t>(offsetof(Recognizer_tF1FAA5F9E223C619151C5DA96D83F0AF7E3C9E3E, ___gch_14)); }
	inline GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603  get_gch_14() const { return ___gch_14; }
	inline GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603 * get_address_of_gch_14() { return &___gch_14; }
	inline void set_gch_14(GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603  value)
	{
		___gch_14 = value;
	}

	inline static int32_t get_offset_of_disposed_15() { return static_cast<int32_t>(offsetof(Recognizer_tF1FAA5F9E223C619151C5DA96D83F0AF7E3C9E3E, ___disposed_15)); }
	inline bool get_disposed_15() const { return ___disposed_15; }
	inline bool* get_address_of_disposed_15() { return &___disposed_15; }
	inline void set_disposed_15(bool value)
	{
		___disposed_15 = value;
	}

	inline static int32_t get_offset_of_isDisposing_16() { return static_cast<int32_t>(offsetof(Recognizer_tF1FAA5F9E223C619151C5DA96D83F0AF7E3C9E3E, ___isDisposing_16)); }
	inline bool get_isDisposing_16() const { return ___isDisposing_16; }
	inline bool* get_address_of_isDisposing_16() { return &___isDisposing_16; }
	inline void set_isDisposing_16(bool value)
	{
		___isDisposing_16 = value;
	}

	inline static int32_t get_offset_of_recognizerLock_17() { return static_cast<int32_t>(offsetof(Recognizer_tF1FAA5F9E223C619151C5DA96D83F0AF7E3C9E3E, ___recognizerLock_17)); }
	inline RuntimeObject * get_recognizerLock_17() const { return ___recognizerLock_17; }
	inline RuntimeObject ** get_address_of_recognizerLock_17() { return &___recognizerLock_17; }
	inline void set_recognizerLock_17(RuntimeObject * value)
	{
		___recognizerLock_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___recognizerLock_17), (void*)value);
	}

	inline static int32_t get_offset_of_activeAsyncRecognitionCounter_18() { return static_cast<int32_t>(offsetof(Recognizer_tF1FAA5F9E223C619151C5DA96D83F0AF7E3C9E3E, ___activeAsyncRecognitionCounter_18)); }
	inline int32_t get_activeAsyncRecognitionCounter_18() const { return ___activeAsyncRecognitionCounter_18; }
	inline int32_t* get_address_of_activeAsyncRecognitionCounter_18() { return &___activeAsyncRecognitionCounter_18; }
	inline void set_activeAsyncRecognitionCounter_18(int32_t value)
	{
		___activeAsyncRecognitionCounter_18 = value;
	}
};


// Microsoft.CognitiveServices.Speech.ResultReason
struct ResultReason_tB8FC6492BDC104DC14FE8E50C557C68A35466BF5 
{
public:
	// System.Int32 Microsoft.CognitiveServices.Speech.ResultReason::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ResultReason_tB8FC6492BDC104DC14FE8E50C557C68A35466BF5, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.RuntimeTypeHandle
struct RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 
{
public:
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9, ___value_0)); }
	inline intptr_t get_value_0() const { return ___value_0; }
	inline intptr_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(intptr_t value)
	{
		___value_0 = value;
	}
};


// System.Runtime.InteropServices.SafeHandle
struct SafeHandle_tC07DCA2CABF6988953342757EFB1547363E5A36B  : public CriticalFinalizerObject_tA3367C832FFE7434EB3C15C7136AF25524150997
{
public:
	// System.IntPtr System.Runtime.InteropServices.SafeHandle::handle
	intptr_t ___handle_0;
	// System.Int32 System.Runtime.InteropServices.SafeHandle::_state
	int32_t ____state_1;
	// System.Boolean System.Runtime.InteropServices.SafeHandle::_ownsHandle
	bool ____ownsHandle_2;
	// System.Boolean System.Runtime.InteropServices.SafeHandle::_fullyInitialized
	bool ____fullyInitialized_3;

public:
	inline static int32_t get_offset_of_handle_0() { return static_cast<int32_t>(offsetof(SafeHandle_tC07DCA2CABF6988953342757EFB1547363E5A36B, ___handle_0)); }
	inline intptr_t get_handle_0() const { return ___handle_0; }
	inline intptr_t* get_address_of_handle_0() { return &___handle_0; }
	inline void set_handle_0(intptr_t value)
	{
		___handle_0 = value;
	}

	inline static int32_t get_offset_of__state_1() { return static_cast<int32_t>(offsetof(SafeHandle_tC07DCA2CABF6988953342757EFB1547363E5A36B, ____state_1)); }
	inline int32_t get__state_1() const { return ____state_1; }
	inline int32_t* get_address_of__state_1() { return &____state_1; }
	inline void set__state_1(int32_t value)
	{
		____state_1 = value;
	}

	inline static int32_t get_offset_of__ownsHandle_2() { return static_cast<int32_t>(offsetof(SafeHandle_tC07DCA2CABF6988953342757EFB1547363E5A36B, ____ownsHandle_2)); }
	inline bool get__ownsHandle_2() const { return ____ownsHandle_2; }
	inline bool* get_address_of__ownsHandle_2() { return &____ownsHandle_2; }
	inline void set__ownsHandle_2(bool value)
	{
		____ownsHandle_2 = value;
	}

	inline static int32_t get_offset_of__fullyInitialized_3() { return static_cast<int32_t>(offsetof(SafeHandle_tC07DCA2CABF6988953342757EFB1547363E5A36B, ____fullyInitialized_3)); }
	inline bool get__fullyInitialized_3() const { return ____fullyInitialized_3; }
	inline bool* get_address_of__fullyInitialized_3() { return &____fullyInitialized_3; }
	inline void set__fullyInitialized_3(bool value)
	{
		____fullyInitialized_3 = value;
	}
};


// Microsoft.CognitiveServices.Speech.Internal.SpxError
struct SpxError_tE3A37886AA69A2843CE24D52F59B1402D244731D  : public RuntimeObject
{
public:

public:
};

struct SpxError_tE3A37886AA69A2843CE24D52F59B1402D244731D_StaticFields
{
public:
	// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.SpxError::BufferTooSmall
	intptr_t ___BufferTooSmall_0;
	// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.SpxError::RuntimeError
	intptr_t ___RuntimeError_1;
	// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.SpxError::InvalidHandle
	intptr_t ___InvalidHandle_2;
	// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.SpxError::InvalidArgument
	intptr_t ___InvalidArgument_3;
	// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.SpxError::NotFound
	intptr_t ___NotFound_4;

public:
	inline static int32_t get_offset_of_BufferTooSmall_0() { return static_cast<int32_t>(offsetof(SpxError_tE3A37886AA69A2843CE24D52F59B1402D244731D_StaticFields, ___BufferTooSmall_0)); }
	inline intptr_t get_BufferTooSmall_0() const { return ___BufferTooSmall_0; }
	inline intptr_t* get_address_of_BufferTooSmall_0() { return &___BufferTooSmall_0; }
	inline void set_BufferTooSmall_0(intptr_t value)
	{
		___BufferTooSmall_0 = value;
	}

	inline static int32_t get_offset_of_RuntimeError_1() { return static_cast<int32_t>(offsetof(SpxError_tE3A37886AA69A2843CE24D52F59B1402D244731D_StaticFields, ___RuntimeError_1)); }
	inline intptr_t get_RuntimeError_1() const { return ___RuntimeError_1; }
	inline intptr_t* get_address_of_RuntimeError_1() { return &___RuntimeError_1; }
	inline void set_RuntimeError_1(intptr_t value)
	{
		___RuntimeError_1 = value;
	}

	inline static int32_t get_offset_of_InvalidHandle_2() { return static_cast<int32_t>(offsetof(SpxError_tE3A37886AA69A2843CE24D52F59B1402D244731D_StaticFields, ___InvalidHandle_2)); }
	inline intptr_t get_InvalidHandle_2() const { return ___InvalidHandle_2; }
	inline intptr_t* get_address_of_InvalidHandle_2() { return &___InvalidHandle_2; }
	inline void set_InvalidHandle_2(intptr_t value)
	{
		___InvalidHandle_2 = value;
	}

	inline static int32_t get_offset_of_InvalidArgument_3() { return static_cast<int32_t>(offsetof(SpxError_tE3A37886AA69A2843CE24D52F59B1402D244731D_StaticFields, ___InvalidArgument_3)); }
	inline intptr_t get_InvalidArgument_3() const { return ___InvalidArgument_3; }
	inline intptr_t* get_address_of_InvalidArgument_3() { return &___InvalidArgument_3; }
	inline void set_InvalidArgument_3(intptr_t value)
	{
		___InvalidArgument_3 = value;
	}

	inline static int32_t get_offset_of_NotFound_4() { return static_cast<int32_t>(offsetof(SpxError_tE3A37886AA69A2843CE24D52F59B1402D244731D_StaticFields, ___NotFound_4)); }
	inline intptr_t get_NotFound_4() const { return ___NotFound_4; }
	inline intptr_t* get_address_of_NotFound_4() { return &___NotFound_4; }
	inline void set_NotFound_4(intptr_t value)
	{
		___NotFound_4 = value;
	}
};


// System.Threading.Tasks.Task
struct Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60  : public RuntimeObject
{
public:
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_taskId
	int32_t ___m_taskId_4;
	// System.Object System.Threading.Tasks.Task::m_action
	RuntimeObject * ___m_action_5;
	// System.Object System.Threading.Tasks.Task::m_stateObject
	RuntimeObject * ___m_stateObject_6;
	// System.Threading.Tasks.TaskScheduler System.Threading.Tasks.Task::m_taskScheduler
	TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D * ___m_taskScheduler_7;
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::m_parent
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___m_parent_8;
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_stateFlags
	int32_t ___m_stateFlags_9;
	// System.Object modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_continuationObject
	RuntimeObject * ___m_continuationObject_10;
	// System.Threading.Tasks.Task/ContingentProperties modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_contingentProperties
	ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0 * ___m_contingentProperties_15;

public:
	inline static int32_t get_offset_of_m_taskId_4() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_taskId_4)); }
	inline int32_t get_m_taskId_4() const { return ___m_taskId_4; }
	inline int32_t* get_address_of_m_taskId_4() { return &___m_taskId_4; }
	inline void set_m_taskId_4(int32_t value)
	{
		___m_taskId_4 = value;
	}

	inline static int32_t get_offset_of_m_action_5() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_action_5)); }
	inline RuntimeObject * get_m_action_5() const { return ___m_action_5; }
	inline RuntimeObject ** get_address_of_m_action_5() { return &___m_action_5; }
	inline void set_m_action_5(RuntimeObject * value)
	{
		___m_action_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_action_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_stateObject_6() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_stateObject_6)); }
	inline RuntimeObject * get_m_stateObject_6() const { return ___m_stateObject_6; }
	inline RuntimeObject ** get_address_of_m_stateObject_6() { return &___m_stateObject_6; }
	inline void set_m_stateObject_6(RuntimeObject * value)
	{
		___m_stateObject_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_stateObject_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_taskScheduler_7() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_taskScheduler_7)); }
	inline TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D * get_m_taskScheduler_7() const { return ___m_taskScheduler_7; }
	inline TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D ** get_address_of_m_taskScheduler_7() { return &___m_taskScheduler_7; }
	inline void set_m_taskScheduler_7(TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D * value)
	{
		___m_taskScheduler_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_taskScheduler_7), (void*)value);
	}

	inline static int32_t get_offset_of_m_parent_8() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_parent_8)); }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * get_m_parent_8() const { return ___m_parent_8; }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 ** get_address_of_m_parent_8() { return &___m_parent_8; }
	inline void set_m_parent_8(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * value)
	{
		___m_parent_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_parent_8), (void*)value);
	}

	inline static int32_t get_offset_of_m_stateFlags_9() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_stateFlags_9)); }
	inline int32_t get_m_stateFlags_9() const { return ___m_stateFlags_9; }
	inline int32_t* get_address_of_m_stateFlags_9() { return &___m_stateFlags_9; }
	inline void set_m_stateFlags_9(int32_t value)
	{
		___m_stateFlags_9 = value;
	}

	inline static int32_t get_offset_of_m_continuationObject_10() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_continuationObject_10)); }
	inline RuntimeObject * get_m_continuationObject_10() const { return ___m_continuationObject_10; }
	inline RuntimeObject ** get_address_of_m_continuationObject_10() { return &___m_continuationObject_10; }
	inline void set_m_continuationObject_10(RuntimeObject * value)
	{
		___m_continuationObject_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_continuationObject_10), (void*)value);
	}

	inline static int32_t get_offset_of_m_contingentProperties_15() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_contingentProperties_15)); }
	inline ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0 * get_m_contingentProperties_15() const { return ___m_contingentProperties_15; }
	inline ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0 ** get_address_of_m_contingentProperties_15() { return &___m_contingentProperties_15; }
	inline void set_m_contingentProperties_15(ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0 * value)
	{
		___m_contingentProperties_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_contingentProperties_15), (void*)value);
	}
};

struct Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields
{
public:
	// System.Int32 System.Threading.Tasks.Task::s_taskIdCounter
	int32_t ___s_taskIdCounter_2;
	// System.Threading.Tasks.TaskFactory System.Threading.Tasks.Task::s_factory
	TaskFactory_t22D999A05A967C31A4B5FFBD08864809BF35EA3B * ___s_factory_3;
	// System.Object System.Threading.Tasks.Task::s_taskCompletionSentinel
	RuntimeObject * ___s_taskCompletionSentinel_11;
	// System.Boolean System.Threading.Tasks.Task::s_asyncDebuggingEnabled
	bool ___s_asyncDebuggingEnabled_12;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task> System.Threading.Tasks.Task::s_currentActiveTasks
	Dictionary_2_tB758E2A2593CD827EFC041BE1F1BB4B68DE1C3E8 * ___s_currentActiveTasks_13;
	// System.Object System.Threading.Tasks.Task::s_activeTasksLock
	RuntimeObject * ___s_activeTasksLock_14;
	// System.Action`1<System.Object> System.Threading.Tasks.Task::s_taskCancelCallback
	Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ___s_taskCancelCallback_16;
	// System.Func`1<System.Threading.Tasks.Task/ContingentProperties> System.Threading.Tasks.Task::s_createContingentProperties
	Func_1_tBCF42601FA307876E83080BE4204110820F8BF3B * ___s_createContingentProperties_17;
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::s_completedTask
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___s_completedTask_18;
	// System.Predicate`1<System.Threading.Tasks.Task> System.Threading.Tasks.Task::s_IsExceptionObservedByParentPredicate
	Predicate_1_tC0DBBC8498BD1EE6ABFFAA5628024105FA7D11BD * ___s_IsExceptionObservedByParentPredicate_19;
	// System.Threading.ContextCallback System.Threading.Tasks.Task::s_ecCallback
	ContextCallback_t93707E0430F4FF3E15E1FB5A4844BE89C657AE8B * ___s_ecCallback_20;
	// System.Predicate`1<System.Object> System.Threading.Tasks.Task::s_IsTaskContinuationNullPredicate
	Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB * ___s_IsTaskContinuationNullPredicate_21;

public:
	inline static int32_t get_offset_of_s_taskIdCounter_2() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_taskIdCounter_2)); }
	inline int32_t get_s_taskIdCounter_2() const { return ___s_taskIdCounter_2; }
	inline int32_t* get_address_of_s_taskIdCounter_2() { return &___s_taskIdCounter_2; }
	inline void set_s_taskIdCounter_2(int32_t value)
	{
		___s_taskIdCounter_2 = value;
	}

	inline static int32_t get_offset_of_s_factory_3() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_factory_3)); }
	inline TaskFactory_t22D999A05A967C31A4B5FFBD08864809BF35EA3B * get_s_factory_3() const { return ___s_factory_3; }
	inline TaskFactory_t22D999A05A967C31A4B5FFBD08864809BF35EA3B ** get_address_of_s_factory_3() { return &___s_factory_3; }
	inline void set_s_factory_3(TaskFactory_t22D999A05A967C31A4B5FFBD08864809BF35EA3B * value)
	{
		___s_factory_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_factory_3), (void*)value);
	}

	inline static int32_t get_offset_of_s_taskCompletionSentinel_11() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_taskCompletionSentinel_11)); }
	inline RuntimeObject * get_s_taskCompletionSentinel_11() const { return ___s_taskCompletionSentinel_11; }
	inline RuntimeObject ** get_address_of_s_taskCompletionSentinel_11() { return &___s_taskCompletionSentinel_11; }
	inline void set_s_taskCompletionSentinel_11(RuntimeObject * value)
	{
		___s_taskCompletionSentinel_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_taskCompletionSentinel_11), (void*)value);
	}

	inline static int32_t get_offset_of_s_asyncDebuggingEnabled_12() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_asyncDebuggingEnabled_12)); }
	inline bool get_s_asyncDebuggingEnabled_12() const { return ___s_asyncDebuggingEnabled_12; }
	inline bool* get_address_of_s_asyncDebuggingEnabled_12() { return &___s_asyncDebuggingEnabled_12; }
	inline void set_s_asyncDebuggingEnabled_12(bool value)
	{
		___s_asyncDebuggingEnabled_12 = value;
	}

	inline static int32_t get_offset_of_s_currentActiveTasks_13() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_currentActiveTasks_13)); }
	inline Dictionary_2_tB758E2A2593CD827EFC041BE1F1BB4B68DE1C3E8 * get_s_currentActiveTasks_13() const { return ___s_currentActiveTasks_13; }
	inline Dictionary_2_tB758E2A2593CD827EFC041BE1F1BB4B68DE1C3E8 ** get_address_of_s_currentActiveTasks_13() { return &___s_currentActiveTasks_13; }
	inline void set_s_currentActiveTasks_13(Dictionary_2_tB758E2A2593CD827EFC041BE1F1BB4B68DE1C3E8 * value)
	{
		___s_currentActiveTasks_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_currentActiveTasks_13), (void*)value);
	}

	inline static int32_t get_offset_of_s_activeTasksLock_14() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_activeTasksLock_14)); }
	inline RuntimeObject * get_s_activeTasksLock_14() const { return ___s_activeTasksLock_14; }
	inline RuntimeObject ** get_address_of_s_activeTasksLock_14() { return &___s_activeTasksLock_14; }
	inline void set_s_activeTasksLock_14(RuntimeObject * value)
	{
		___s_activeTasksLock_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_activeTasksLock_14), (void*)value);
	}

	inline static int32_t get_offset_of_s_taskCancelCallback_16() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_taskCancelCallback_16)); }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * get_s_taskCancelCallback_16() const { return ___s_taskCancelCallback_16; }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC ** get_address_of_s_taskCancelCallback_16() { return &___s_taskCancelCallback_16; }
	inline void set_s_taskCancelCallback_16(Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * value)
	{
		___s_taskCancelCallback_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_taskCancelCallback_16), (void*)value);
	}

	inline static int32_t get_offset_of_s_createContingentProperties_17() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_createContingentProperties_17)); }
	inline Func_1_tBCF42601FA307876E83080BE4204110820F8BF3B * get_s_createContingentProperties_17() const { return ___s_createContingentProperties_17; }
	inline Func_1_tBCF42601FA307876E83080BE4204110820F8BF3B ** get_address_of_s_createContingentProperties_17() { return &___s_createContingentProperties_17; }
	inline void set_s_createContingentProperties_17(Func_1_tBCF42601FA307876E83080BE4204110820F8BF3B * value)
	{
		___s_createContingentProperties_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_createContingentProperties_17), (void*)value);
	}

	inline static int32_t get_offset_of_s_completedTask_18() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_completedTask_18)); }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * get_s_completedTask_18() const { return ___s_completedTask_18; }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 ** get_address_of_s_completedTask_18() { return &___s_completedTask_18; }
	inline void set_s_completedTask_18(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * value)
	{
		___s_completedTask_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_completedTask_18), (void*)value);
	}

	inline static int32_t get_offset_of_s_IsExceptionObservedByParentPredicate_19() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_IsExceptionObservedByParentPredicate_19)); }
	inline Predicate_1_tC0DBBC8498BD1EE6ABFFAA5628024105FA7D11BD * get_s_IsExceptionObservedByParentPredicate_19() const { return ___s_IsExceptionObservedByParentPredicate_19; }
	inline Predicate_1_tC0DBBC8498BD1EE6ABFFAA5628024105FA7D11BD ** get_address_of_s_IsExceptionObservedByParentPredicate_19() { return &___s_IsExceptionObservedByParentPredicate_19; }
	inline void set_s_IsExceptionObservedByParentPredicate_19(Predicate_1_tC0DBBC8498BD1EE6ABFFAA5628024105FA7D11BD * value)
	{
		___s_IsExceptionObservedByParentPredicate_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_IsExceptionObservedByParentPredicate_19), (void*)value);
	}

	inline static int32_t get_offset_of_s_ecCallback_20() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_ecCallback_20)); }
	inline ContextCallback_t93707E0430F4FF3E15E1FB5A4844BE89C657AE8B * get_s_ecCallback_20() const { return ___s_ecCallback_20; }
	inline ContextCallback_t93707E0430F4FF3E15E1FB5A4844BE89C657AE8B ** get_address_of_s_ecCallback_20() { return &___s_ecCallback_20; }
	inline void set_s_ecCallback_20(ContextCallback_t93707E0430F4FF3E15E1FB5A4844BE89C657AE8B * value)
	{
		___s_ecCallback_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_ecCallback_20), (void*)value);
	}

	inline static int32_t get_offset_of_s_IsTaskContinuationNullPredicate_21() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_IsTaskContinuationNullPredicate_21)); }
	inline Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB * get_s_IsTaskContinuationNullPredicate_21() const { return ___s_IsTaskContinuationNullPredicate_21; }
	inline Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB ** get_address_of_s_IsTaskContinuationNullPredicate_21() { return &___s_IsTaskContinuationNullPredicate_21; }
	inline void set_s_IsTaskContinuationNullPredicate_21(Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB * value)
	{
		___s_IsTaskContinuationNullPredicate_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_IsTaskContinuationNullPredicate_21), (void*)value);
	}
};

struct Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_ThreadStaticFields
{
public:
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::t_currentTask
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___t_currentTask_0;
	// System.Threading.Tasks.StackGuard System.Threading.Tasks.Task::t_stackGuard
	StackGuard_t88E1EE4741AD02CA5FEA04A4EB2CC70F230E0E6D * ___t_stackGuard_1;

public:
	inline static int32_t get_offset_of_t_currentTask_0() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_ThreadStaticFields, ___t_currentTask_0)); }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * get_t_currentTask_0() const { return ___t_currentTask_0; }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 ** get_address_of_t_currentTask_0() { return &___t_currentTask_0; }
	inline void set_t_currentTask_0(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * value)
	{
		___t_currentTask_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___t_currentTask_0), (void*)value);
	}

	inline static int32_t get_offset_of_t_stackGuard_1() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_ThreadStaticFields, ___t_stackGuard_1)); }
	inline StackGuard_t88E1EE4741AD02CA5FEA04A4EB2CC70F230E0E6D * get_t_stackGuard_1() const { return ___t_stackGuard_1; }
	inline StackGuard_t88E1EE4741AD02CA5FEA04A4EB2CC70F230E0E6D ** get_address_of_t_stackGuard_1() { return &___t_stackGuard_1; }
	inline void set_t_stackGuard_1(StackGuard_t88E1EE4741AD02CA5FEA04A4EB2CC70F230E0E6D * value)
	{
		___t_stackGuard_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___t_stackGuard_1), (void*)value);
	}
};


// Microsoft.CognitiveServices.Speech.Translation.TranslationSynthesisEventArgs
struct TranslationSynthesisEventArgs_t975B943C527D3EB226F627E98ACDC396F0ECDD36  : public SessionEventArgs_t720E6DA982AD7DE7933835DEBBECD8B78F28CAB1
{
public:
	// Microsoft.CognitiveServices.Speech.Translation.TranslationSynthesisResult Microsoft.CognitiveServices.Speech.Translation.TranslationSynthesisEventArgs::<Result>k__BackingField
	TranslationSynthesisResult_t243554A291C3C9A4349B5A0F15AFD7B984E944EE * ___U3CResultU3Ek__BackingField_5;

public:
	inline static int32_t get_offset_of_U3CResultU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(TranslationSynthesisEventArgs_t975B943C527D3EB226F627E98ACDC396F0ECDD36, ___U3CResultU3Ek__BackingField_5)); }
	inline TranslationSynthesisResult_t243554A291C3C9A4349B5A0F15AFD7B984E944EE * get_U3CResultU3Ek__BackingField_5() const { return ___U3CResultU3Ek__BackingField_5; }
	inline TranslationSynthesisResult_t243554A291C3C9A4349B5A0F15AFD7B984E944EE ** get_address_of_U3CResultU3Ek__BackingField_5() { return &___U3CResultU3Ek__BackingField_5; }
	inline void set_U3CResultU3Ek__BackingField_5(TranslationSynthesisResult_t243554A291C3C9A4349B5A0F15AFD7B984E944EE * value)
	{
		___U3CResultU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CResultU3Ek__BackingField_5), (void*)value);
	}
};


// System.ApplicationException
struct ApplicationException_t8D709C0445A040467C6A632AD7F742B25AB2A407  : public Exception_t
{
public:

public:
};


// Microsoft.CognitiveServices.Speech.CancellationDetails
struct CancellationDetails_t5D21A89C2CF88AB86DE6EF822F1DBF0FF3F678C9  : public RuntimeObject
{
public:
	// Microsoft.CognitiveServices.Speech.CancellationReason Microsoft.CognitiveServices.Speech.CancellationDetails::<Reason>k__BackingField
	int32_t ___U3CReasonU3Ek__BackingField_0;
	// Microsoft.CognitiveServices.Speech.CancellationErrorCode Microsoft.CognitiveServices.Speech.CancellationDetails::<ErrorCode>k__BackingField
	int32_t ___U3CErrorCodeU3Ek__BackingField_1;
	// System.String Microsoft.CognitiveServices.Speech.CancellationDetails::<ErrorDetails>k__BackingField
	String_t* ___U3CErrorDetailsU3Ek__BackingField_2;
	// Microsoft.CognitiveServices.Speech.RecognitionResult Microsoft.CognitiveServices.Speech.CancellationDetails::recognitionResult
	RecognitionResult_t29D2A304D192BFB246AB9E91297B54B2EB44DA06 * ___recognitionResult_3;

public:
	inline static int32_t get_offset_of_U3CReasonU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(CancellationDetails_t5D21A89C2CF88AB86DE6EF822F1DBF0FF3F678C9, ___U3CReasonU3Ek__BackingField_0)); }
	inline int32_t get_U3CReasonU3Ek__BackingField_0() const { return ___U3CReasonU3Ek__BackingField_0; }
	inline int32_t* get_address_of_U3CReasonU3Ek__BackingField_0() { return &___U3CReasonU3Ek__BackingField_0; }
	inline void set_U3CReasonU3Ek__BackingField_0(int32_t value)
	{
		___U3CReasonU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CErrorCodeU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(CancellationDetails_t5D21A89C2CF88AB86DE6EF822F1DBF0FF3F678C9, ___U3CErrorCodeU3Ek__BackingField_1)); }
	inline int32_t get_U3CErrorCodeU3Ek__BackingField_1() const { return ___U3CErrorCodeU3Ek__BackingField_1; }
	inline int32_t* get_address_of_U3CErrorCodeU3Ek__BackingField_1() { return &___U3CErrorCodeU3Ek__BackingField_1; }
	inline void set_U3CErrorCodeU3Ek__BackingField_1(int32_t value)
	{
		___U3CErrorCodeU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_U3CErrorDetailsU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(CancellationDetails_t5D21A89C2CF88AB86DE6EF822F1DBF0FF3F678C9, ___U3CErrorDetailsU3Ek__BackingField_2)); }
	inline String_t* get_U3CErrorDetailsU3Ek__BackingField_2() const { return ___U3CErrorDetailsU3Ek__BackingField_2; }
	inline String_t** get_address_of_U3CErrorDetailsU3Ek__BackingField_2() { return &___U3CErrorDetailsU3Ek__BackingField_2; }
	inline void set_U3CErrorDetailsU3Ek__BackingField_2(String_t* value)
	{
		___U3CErrorDetailsU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CErrorDetailsU3Ek__BackingField_2), (void*)value);
	}

	inline static int32_t get_offset_of_recognitionResult_3() { return static_cast<int32_t>(offsetof(CancellationDetails_t5D21A89C2CF88AB86DE6EF822F1DBF0FF3F678C9, ___recognitionResult_3)); }
	inline RecognitionResult_t29D2A304D192BFB246AB9E91297B54B2EB44DA06 * get_recognitionResult_3() const { return ___recognitionResult_3; }
	inline RecognitionResult_t29D2A304D192BFB246AB9E91297B54B2EB44DA06 ** get_address_of_recognitionResult_3() { return &___recognitionResult_3; }
	inline void set_recognitionResult_3(RecognitionResult_t29D2A304D192BFB246AB9E91297B54B2EB44DA06 * value)
	{
		___recognitionResult_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___recognitionResult_3), (void*)value);
	}
};


// Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle
struct InteropSafeHandle_tF14E3AD32AC904F5E38F4FAC0ED46417062386C6  : public SafeHandle_tC07DCA2CABF6988953342757EFB1547363E5A36B
{
public:
	// Microsoft.CognitiveServices.Speech.Internal.HandleRelease Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle::releaseHandleFunc
	HandleRelease_t981DDC9B764758F8D9EAE886A7255AC109F86E59 * ___releaseHandleFunc_6;

public:
	inline static int32_t get_offset_of_releaseHandleFunc_6() { return static_cast<int32_t>(offsetof(InteropSafeHandle_tF14E3AD32AC904F5E38F4FAC0ED46417062386C6, ___releaseHandleFunc_6)); }
	inline HandleRelease_t981DDC9B764758F8D9EAE886A7255AC109F86E59 * get_releaseHandleFunc_6() const { return ___releaseHandleFunc_6; }
	inline HandleRelease_t981DDC9B764758F8D9EAE886A7255AC109F86E59 ** get_address_of_releaseHandleFunc_6() { return &___releaseHandleFunc_6; }
	inline void set_releaseHandleFunc_6(HandleRelease_t981DDC9B764758F8D9EAE886A7255AC109F86E59 * value)
	{
		___releaseHandleFunc_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___releaseHandleFunc_6), (void*)value);
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

// Microsoft.CognitiveServices.Speech.RecognitionResult
struct RecognitionResult_t29D2A304D192BFB246AB9E91297B54B2EB44DA06  : public RuntimeObject
{
public:
	// System.String Microsoft.CognitiveServices.Speech.RecognitionResult::<ResultId>k__BackingField
	String_t* ___U3CResultIdU3Ek__BackingField_0;
	// Microsoft.CognitiveServices.Speech.ResultReason Microsoft.CognitiveServices.Speech.RecognitionResult::<Reason>k__BackingField
	int32_t ___U3CReasonU3Ek__BackingField_1;
	// System.String Microsoft.CognitiveServices.Speech.RecognitionResult::<Text>k__BackingField
	String_t* ___U3CTextU3Ek__BackingField_2;
	// Microsoft.CognitiveServices.Speech.PropertyCollection Microsoft.CognitiveServices.Speech.RecognitionResult::<Properties>k__BackingField
	PropertyCollection_tD6D50793A0684647D5C7067381E1365EDB3AA920 * ___U3CPropertiesU3Ek__BackingField_3;
	// Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle Microsoft.CognitiveServices.Speech.RecognitionResult::resultHandle
	InteropSafeHandle_tF14E3AD32AC904F5E38F4FAC0ED46417062386C6 * ___resultHandle_4;

public:
	inline static int32_t get_offset_of_U3CResultIdU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(RecognitionResult_t29D2A304D192BFB246AB9E91297B54B2EB44DA06, ___U3CResultIdU3Ek__BackingField_0)); }
	inline String_t* get_U3CResultIdU3Ek__BackingField_0() const { return ___U3CResultIdU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CResultIdU3Ek__BackingField_0() { return &___U3CResultIdU3Ek__BackingField_0; }
	inline void set_U3CResultIdU3Ek__BackingField_0(String_t* value)
	{
		___U3CResultIdU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CResultIdU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CReasonU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(RecognitionResult_t29D2A304D192BFB246AB9E91297B54B2EB44DA06, ___U3CReasonU3Ek__BackingField_1)); }
	inline int32_t get_U3CReasonU3Ek__BackingField_1() const { return ___U3CReasonU3Ek__BackingField_1; }
	inline int32_t* get_address_of_U3CReasonU3Ek__BackingField_1() { return &___U3CReasonU3Ek__BackingField_1; }
	inline void set_U3CReasonU3Ek__BackingField_1(int32_t value)
	{
		___U3CReasonU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_U3CTextU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(RecognitionResult_t29D2A304D192BFB246AB9E91297B54B2EB44DA06, ___U3CTextU3Ek__BackingField_2)); }
	inline String_t* get_U3CTextU3Ek__BackingField_2() const { return ___U3CTextU3Ek__BackingField_2; }
	inline String_t** get_address_of_U3CTextU3Ek__BackingField_2() { return &___U3CTextU3Ek__BackingField_2; }
	inline void set_U3CTextU3Ek__BackingField_2(String_t* value)
	{
		___U3CTextU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CTextU3Ek__BackingField_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CPropertiesU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(RecognitionResult_t29D2A304D192BFB246AB9E91297B54B2EB44DA06, ___U3CPropertiesU3Ek__BackingField_3)); }
	inline PropertyCollection_tD6D50793A0684647D5C7067381E1365EDB3AA920 * get_U3CPropertiesU3Ek__BackingField_3() const { return ___U3CPropertiesU3Ek__BackingField_3; }
	inline PropertyCollection_tD6D50793A0684647D5C7067381E1365EDB3AA920 ** get_address_of_U3CPropertiesU3Ek__BackingField_3() { return &___U3CPropertiesU3Ek__BackingField_3; }
	inline void set_U3CPropertiesU3Ek__BackingField_3(PropertyCollection_tD6D50793A0684647D5C7067381E1365EDB3AA920 * value)
	{
		___U3CPropertiesU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CPropertiesU3Ek__BackingField_3), (void*)value);
	}

	inline static int32_t get_offset_of_resultHandle_4() { return static_cast<int32_t>(offsetof(RecognitionResult_t29D2A304D192BFB246AB9E91297B54B2EB44DA06, ___resultHandle_4)); }
	inline InteropSafeHandle_tF14E3AD32AC904F5E38F4FAC0ED46417062386C6 * get_resultHandle_4() const { return ___resultHandle_4; }
	inline InteropSafeHandle_tF14E3AD32AC904F5E38F4FAC0ED46417062386C6 ** get_address_of_resultHandle_4() { return &___resultHandle_4; }
	inline void set_resultHandle_4(InteropSafeHandle_tF14E3AD32AC904F5E38F4FAC0ED46417062386C6 * value)
	{
		___resultHandle_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___resultHandle_4), (void*)value);
	}
};


// Microsoft.CognitiveServices.Speech.SpeechRecognitionEventArgs
struct SpeechRecognitionEventArgs_t1FB7CC9C07684BA7F03F63DF226A306D7C5F2CEA  : public RecognitionEventArgs_tC7B8B5C317C90BF54CBE82BE86321F5359B98650
{
public:
	// Microsoft.CognitiveServices.Speech.SpeechRecognitionResult Microsoft.CognitiveServices.Speech.SpeechRecognitionEventArgs::<Result>k__BackingField
	SpeechRecognitionResult_t65860E5862B0CFC304215FF5084A2E59A1AA727F * ___U3CResultU3Ek__BackingField_6;

public:
	inline static int32_t get_offset_of_U3CResultU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(SpeechRecognitionEventArgs_t1FB7CC9C07684BA7F03F63DF226A306D7C5F2CEA, ___U3CResultU3Ek__BackingField_6)); }
	inline SpeechRecognitionResult_t65860E5862B0CFC304215FF5084A2E59A1AA727F * get_U3CResultU3Ek__BackingField_6() const { return ___U3CResultU3Ek__BackingField_6; }
	inline SpeechRecognitionResult_t65860E5862B0CFC304215FF5084A2E59A1AA727F ** get_address_of_U3CResultU3Ek__BackingField_6() { return &___U3CResultU3Ek__BackingField_6; }
	inline void set_U3CResultU3Ek__BackingField_6(SpeechRecognitionResult_t65860E5862B0CFC304215FF5084A2E59A1AA727F * value)
	{
		___U3CResultU3Ek__BackingField_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CResultU3Ek__BackingField_6), (void*)value);
	}
};


// Microsoft.CognitiveServices.Speech.SpeechRecognizer
struct SpeechRecognizer_tD9F66F83FE18A3C87986B87E9108997AC919BF2A  : public Recognizer_tF1FAA5F9E223C619151C5DA96D83F0AF7E3C9E3E
{
public:
	// System.EventHandler`1<Microsoft.CognitiveServices.Speech.SpeechRecognitionEventArgs> Microsoft.CognitiveServices.Speech.SpeechRecognizer::_Recognizing
	EventHandler_1_tAD0C572F17FD1D8D2AAADAE630AAEC4D89CF650C * ____Recognizing_19;
	// System.EventHandler`1<Microsoft.CognitiveServices.Speech.SpeechRecognitionEventArgs> Microsoft.CognitiveServices.Speech.SpeechRecognizer::_Recognized
	EventHandler_1_tAD0C572F17FD1D8D2AAADAE630AAEC4D89CF650C * ____Recognized_20;
	// System.EventHandler`1<Microsoft.CognitiveServices.Speech.SpeechRecognitionCanceledEventArgs> Microsoft.CognitiveServices.Speech.SpeechRecognizer::_Canceled
	EventHandler_1_t69FC758E917DED0BD7F1732BE32EAE11D78B8D50 * ____Canceled_21;
	// Microsoft.CognitiveServices.Speech.Internal.CallbackFunctionDelegate Microsoft.CognitiveServices.Speech.SpeechRecognizer::recognizingCallbackDelegate
	CallbackFunctionDelegate_tEDE2A24857EFCB03EE502D1E6E8A9E977030EAC4 * ___recognizingCallbackDelegate_22;
	// Microsoft.CognitiveServices.Speech.Internal.CallbackFunctionDelegate Microsoft.CognitiveServices.Speech.SpeechRecognizer::recognizedCallbackDelegate
	CallbackFunctionDelegate_tEDE2A24857EFCB03EE502D1E6E8A9E977030EAC4 * ___recognizedCallbackDelegate_23;
	// Microsoft.CognitiveServices.Speech.Internal.CallbackFunctionDelegate Microsoft.CognitiveServices.Speech.SpeechRecognizer::canceledCallbackDelegate
	CallbackFunctionDelegate_tEDE2A24857EFCB03EE502D1E6E8A9E977030EAC4 * ___canceledCallbackDelegate_24;
	// Microsoft.CognitiveServices.Speech.PropertyCollection Microsoft.CognitiveServices.Speech.SpeechRecognizer::<Properties>k__BackingField
	PropertyCollection_tD6D50793A0684647D5C7067381E1365EDB3AA920 * ___U3CPropertiesU3Ek__BackingField_25;
	// Microsoft.CognitiveServices.Speech.Audio.AudioConfig Microsoft.CognitiveServices.Speech.SpeechRecognizer::audioInputKeepAlive
	AudioConfig_tF4EFBB8FE00E5C7569A7F087C11D4D85439A9E45 * ___audioInputKeepAlive_26;

public:
	inline static int32_t get_offset_of__Recognizing_19() { return static_cast<int32_t>(offsetof(SpeechRecognizer_tD9F66F83FE18A3C87986B87E9108997AC919BF2A, ____Recognizing_19)); }
	inline EventHandler_1_tAD0C572F17FD1D8D2AAADAE630AAEC4D89CF650C * get__Recognizing_19() const { return ____Recognizing_19; }
	inline EventHandler_1_tAD0C572F17FD1D8D2AAADAE630AAEC4D89CF650C ** get_address_of__Recognizing_19() { return &____Recognizing_19; }
	inline void set__Recognizing_19(EventHandler_1_tAD0C572F17FD1D8D2AAADAE630AAEC4D89CF650C * value)
	{
		____Recognizing_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____Recognizing_19), (void*)value);
	}

	inline static int32_t get_offset_of__Recognized_20() { return static_cast<int32_t>(offsetof(SpeechRecognizer_tD9F66F83FE18A3C87986B87E9108997AC919BF2A, ____Recognized_20)); }
	inline EventHandler_1_tAD0C572F17FD1D8D2AAADAE630AAEC4D89CF650C * get__Recognized_20() const { return ____Recognized_20; }
	inline EventHandler_1_tAD0C572F17FD1D8D2AAADAE630AAEC4D89CF650C ** get_address_of__Recognized_20() { return &____Recognized_20; }
	inline void set__Recognized_20(EventHandler_1_tAD0C572F17FD1D8D2AAADAE630AAEC4D89CF650C * value)
	{
		____Recognized_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____Recognized_20), (void*)value);
	}

	inline static int32_t get_offset_of__Canceled_21() { return static_cast<int32_t>(offsetof(SpeechRecognizer_tD9F66F83FE18A3C87986B87E9108997AC919BF2A, ____Canceled_21)); }
	inline EventHandler_1_t69FC758E917DED0BD7F1732BE32EAE11D78B8D50 * get__Canceled_21() const { return ____Canceled_21; }
	inline EventHandler_1_t69FC758E917DED0BD7F1732BE32EAE11D78B8D50 ** get_address_of__Canceled_21() { return &____Canceled_21; }
	inline void set__Canceled_21(EventHandler_1_t69FC758E917DED0BD7F1732BE32EAE11D78B8D50 * value)
	{
		____Canceled_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____Canceled_21), (void*)value);
	}

	inline static int32_t get_offset_of_recognizingCallbackDelegate_22() { return static_cast<int32_t>(offsetof(SpeechRecognizer_tD9F66F83FE18A3C87986B87E9108997AC919BF2A, ___recognizingCallbackDelegate_22)); }
	inline CallbackFunctionDelegate_tEDE2A24857EFCB03EE502D1E6E8A9E977030EAC4 * get_recognizingCallbackDelegate_22() const { return ___recognizingCallbackDelegate_22; }
	inline CallbackFunctionDelegate_tEDE2A24857EFCB03EE502D1E6E8A9E977030EAC4 ** get_address_of_recognizingCallbackDelegate_22() { return &___recognizingCallbackDelegate_22; }
	inline void set_recognizingCallbackDelegate_22(CallbackFunctionDelegate_tEDE2A24857EFCB03EE502D1E6E8A9E977030EAC4 * value)
	{
		___recognizingCallbackDelegate_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___recognizingCallbackDelegate_22), (void*)value);
	}

	inline static int32_t get_offset_of_recognizedCallbackDelegate_23() { return static_cast<int32_t>(offsetof(SpeechRecognizer_tD9F66F83FE18A3C87986B87E9108997AC919BF2A, ___recognizedCallbackDelegate_23)); }
	inline CallbackFunctionDelegate_tEDE2A24857EFCB03EE502D1E6E8A9E977030EAC4 * get_recognizedCallbackDelegate_23() const { return ___recognizedCallbackDelegate_23; }
	inline CallbackFunctionDelegate_tEDE2A24857EFCB03EE502D1E6E8A9E977030EAC4 ** get_address_of_recognizedCallbackDelegate_23() { return &___recognizedCallbackDelegate_23; }
	inline void set_recognizedCallbackDelegate_23(CallbackFunctionDelegate_tEDE2A24857EFCB03EE502D1E6E8A9E977030EAC4 * value)
	{
		___recognizedCallbackDelegate_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___recognizedCallbackDelegate_23), (void*)value);
	}

	inline static int32_t get_offset_of_canceledCallbackDelegate_24() { return static_cast<int32_t>(offsetof(SpeechRecognizer_tD9F66F83FE18A3C87986B87E9108997AC919BF2A, ___canceledCallbackDelegate_24)); }
	inline CallbackFunctionDelegate_tEDE2A24857EFCB03EE502D1E6E8A9E977030EAC4 * get_canceledCallbackDelegate_24() const { return ___canceledCallbackDelegate_24; }
	inline CallbackFunctionDelegate_tEDE2A24857EFCB03EE502D1E6E8A9E977030EAC4 ** get_address_of_canceledCallbackDelegate_24() { return &___canceledCallbackDelegate_24; }
	inline void set_canceledCallbackDelegate_24(CallbackFunctionDelegate_tEDE2A24857EFCB03EE502D1E6E8A9E977030EAC4 * value)
	{
		___canceledCallbackDelegate_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___canceledCallbackDelegate_24), (void*)value);
	}

	inline static int32_t get_offset_of_U3CPropertiesU3Ek__BackingField_25() { return static_cast<int32_t>(offsetof(SpeechRecognizer_tD9F66F83FE18A3C87986B87E9108997AC919BF2A, ___U3CPropertiesU3Ek__BackingField_25)); }
	inline PropertyCollection_tD6D50793A0684647D5C7067381E1365EDB3AA920 * get_U3CPropertiesU3Ek__BackingField_25() const { return ___U3CPropertiesU3Ek__BackingField_25; }
	inline PropertyCollection_tD6D50793A0684647D5C7067381E1365EDB3AA920 ** get_address_of_U3CPropertiesU3Ek__BackingField_25() { return &___U3CPropertiesU3Ek__BackingField_25; }
	inline void set_U3CPropertiesU3Ek__BackingField_25(PropertyCollection_tD6D50793A0684647D5C7067381E1365EDB3AA920 * value)
	{
		___U3CPropertiesU3Ek__BackingField_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CPropertiesU3Ek__BackingField_25), (void*)value);
	}

	inline static int32_t get_offset_of_audioInputKeepAlive_26() { return static_cast<int32_t>(offsetof(SpeechRecognizer_tD9F66F83FE18A3C87986B87E9108997AC919BF2A, ___audioInputKeepAlive_26)); }
	inline AudioConfig_tF4EFBB8FE00E5C7569A7F087C11D4D85439A9E45 * get_audioInputKeepAlive_26() const { return ___audioInputKeepAlive_26; }
	inline AudioConfig_tF4EFBB8FE00E5C7569A7F087C11D4D85439A9E45 ** get_address_of_audioInputKeepAlive_26() { return &___audioInputKeepAlive_26; }
	inline void set_audioInputKeepAlive_26(AudioConfig_tF4EFBB8FE00E5C7569A7F087C11D4D85439A9E45 * value)
	{
		___audioInputKeepAlive_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___audioInputKeepAlive_26), (void*)value);
	}
};


// System.SystemException
struct SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62  : public Exception_t
{
public:

public:
};


// Microsoft.CognitiveServices.Speech.Translation.TranslationRecognitionEventArgs
struct TranslationRecognitionEventArgs_t9801CC0D44EB6958FE731328096A8220591EB9E2  : public RecognitionEventArgs_tC7B8B5C317C90BF54CBE82BE86321F5359B98650
{
public:
	// Microsoft.CognitiveServices.Speech.Translation.TranslationRecognitionResult Microsoft.CognitiveServices.Speech.Translation.TranslationRecognitionEventArgs::<Result>k__BackingField
	TranslationRecognitionResult_tAF699D9A902DCE03B21D08BD562FE08544A089AD * ___U3CResultU3Ek__BackingField_6;

public:
	inline static int32_t get_offset_of_U3CResultU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(TranslationRecognitionEventArgs_t9801CC0D44EB6958FE731328096A8220591EB9E2, ___U3CResultU3Ek__BackingField_6)); }
	inline TranslationRecognitionResult_tAF699D9A902DCE03B21D08BD562FE08544A089AD * get_U3CResultU3Ek__BackingField_6() const { return ___U3CResultU3Ek__BackingField_6; }
	inline TranslationRecognitionResult_tAF699D9A902DCE03B21D08BD562FE08544A089AD ** get_address_of_U3CResultU3Ek__BackingField_6() { return &___U3CResultU3Ek__BackingField_6; }
	inline void set_U3CResultU3Ek__BackingField_6(TranslationRecognitionResult_tAF699D9A902DCE03B21D08BD562FE08544A089AD * value)
	{
		___U3CResultU3Ek__BackingField_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CResultU3Ek__BackingField_6), (void*)value);
	}
};


// Microsoft.CognitiveServices.Speech.Translation.TranslationRecognizer
struct TranslationRecognizer_t5E2EA28023083A645CA9CB77906834987C4C9BFC  : public Recognizer_tF1FAA5F9E223C619151C5DA96D83F0AF7E3C9E3E
{
public:
	// System.EventHandler`1<Microsoft.CognitiveServices.Speech.Translation.TranslationRecognitionEventArgs> Microsoft.CognitiveServices.Speech.Translation.TranslationRecognizer::_Recognizing
	EventHandler_1_t0304893ABC1043DC90AF47CDE2ACD2D6DB2B7487 * ____Recognizing_19;
	// System.EventHandler`1<Microsoft.CognitiveServices.Speech.Translation.TranslationRecognitionEventArgs> Microsoft.CognitiveServices.Speech.Translation.TranslationRecognizer::_Recognized
	EventHandler_1_t0304893ABC1043DC90AF47CDE2ACD2D6DB2B7487 * ____Recognized_20;
	// System.EventHandler`1<Microsoft.CognitiveServices.Speech.Translation.TranslationRecognitionCanceledEventArgs> Microsoft.CognitiveServices.Speech.Translation.TranslationRecognizer::_Canceled
	EventHandler_1_t7D8AF3CB447F4C1AA3E3A0C2ABF74030E97A10FC * ____Canceled_21;
	// System.EventHandler`1<Microsoft.CognitiveServices.Speech.Translation.TranslationSynthesisEventArgs> Microsoft.CognitiveServices.Speech.Translation.TranslationRecognizer::_Synthesizing
	EventHandler_1_t3BEF748549CB01FA6B642C4A136FCCE2948599FF * ____Synthesizing_22;
	// Microsoft.CognitiveServices.Speech.PropertyCollection Microsoft.CognitiveServices.Speech.Translation.TranslationRecognizer::<Properties>k__BackingField
	PropertyCollection_tD6D50793A0684647D5C7067381E1365EDB3AA920 * ___U3CPropertiesU3Ek__BackingField_23;
	// Microsoft.CognitiveServices.Speech.Internal.CallbackFunctionDelegate Microsoft.CognitiveServices.Speech.Translation.TranslationRecognizer::recognizingCallbackDelegate
	CallbackFunctionDelegate_tEDE2A24857EFCB03EE502D1E6E8A9E977030EAC4 * ___recognizingCallbackDelegate_24;
	// Microsoft.CognitiveServices.Speech.Internal.CallbackFunctionDelegate Microsoft.CognitiveServices.Speech.Translation.TranslationRecognizer::recognizedCallbackDelegate
	CallbackFunctionDelegate_tEDE2A24857EFCB03EE502D1E6E8A9E977030EAC4 * ___recognizedCallbackDelegate_25;
	// Microsoft.CognitiveServices.Speech.Internal.CallbackFunctionDelegate Microsoft.CognitiveServices.Speech.Translation.TranslationRecognizer::canceledCallbackDelegate
	CallbackFunctionDelegate_tEDE2A24857EFCB03EE502D1E6E8A9E977030EAC4 * ___canceledCallbackDelegate_26;
	// Microsoft.CognitiveServices.Speech.Internal.CallbackFunctionDelegate Microsoft.CognitiveServices.Speech.Translation.TranslationRecognizer::translationSynthesisCallbackDelegate
	CallbackFunctionDelegate_tEDE2A24857EFCB03EE502D1E6E8A9E977030EAC4 * ___translationSynthesisCallbackDelegate_27;
	// Microsoft.CognitiveServices.Speech.Audio.AudioConfig Microsoft.CognitiveServices.Speech.Translation.TranslationRecognizer::audioInputKeepAlive
	AudioConfig_tF4EFBB8FE00E5C7569A7F087C11D4D85439A9E45 * ___audioInputKeepAlive_28;

public:
	inline static int32_t get_offset_of__Recognizing_19() { return static_cast<int32_t>(offsetof(TranslationRecognizer_t5E2EA28023083A645CA9CB77906834987C4C9BFC, ____Recognizing_19)); }
	inline EventHandler_1_t0304893ABC1043DC90AF47CDE2ACD2D6DB2B7487 * get__Recognizing_19() const { return ____Recognizing_19; }
	inline EventHandler_1_t0304893ABC1043DC90AF47CDE2ACD2D6DB2B7487 ** get_address_of__Recognizing_19() { return &____Recognizing_19; }
	inline void set__Recognizing_19(EventHandler_1_t0304893ABC1043DC90AF47CDE2ACD2D6DB2B7487 * value)
	{
		____Recognizing_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____Recognizing_19), (void*)value);
	}

	inline static int32_t get_offset_of__Recognized_20() { return static_cast<int32_t>(offsetof(TranslationRecognizer_t5E2EA28023083A645CA9CB77906834987C4C9BFC, ____Recognized_20)); }
	inline EventHandler_1_t0304893ABC1043DC90AF47CDE2ACD2D6DB2B7487 * get__Recognized_20() const { return ____Recognized_20; }
	inline EventHandler_1_t0304893ABC1043DC90AF47CDE2ACD2D6DB2B7487 ** get_address_of__Recognized_20() { return &____Recognized_20; }
	inline void set__Recognized_20(EventHandler_1_t0304893ABC1043DC90AF47CDE2ACD2D6DB2B7487 * value)
	{
		____Recognized_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____Recognized_20), (void*)value);
	}

	inline static int32_t get_offset_of__Canceled_21() { return static_cast<int32_t>(offsetof(TranslationRecognizer_t5E2EA28023083A645CA9CB77906834987C4C9BFC, ____Canceled_21)); }
	inline EventHandler_1_t7D8AF3CB447F4C1AA3E3A0C2ABF74030E97A10FC * get__Canceled_21() const { return ____Canceled_21; }
	inline EventHandler_1_t7D8AF3CB447F4C1AA3E3A0C2ABF74030E97A10FC ** get_address_of__Canceled_21() { return &____Canceled_21; }
	inline void set__Canceled_21(EventHandler_1_t7D8AF3CB447F4C1AA3E3A0C2ABF74030E97A10FC * value)
	{
		____Canceled_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____Canceled_21), (void*)value);
	}

	inline static int32_t get_offset_of__Synthesizing_22() { return static_cast<int32_t>(offsetof(TranslationRecognizer_t5E2EA28023083A645CA9CB77906834987C4C9BFC, ____Synthesizing_22)); }
	inline EventHandler_1_t3BEF748549CB01FA6B642C4A136FCCE2948599FF * get__Synthesizing_22() const { return ____Synthesizing_22; }
	inline EventHandler_1_t3BEF748549CB01FA6B642C4A136FCCE2948599FF ** get_address_of__Synthesizing_22() { return &____Synthesizing_22; }
	inline void set__Synthesizing_22(EventHandler_1_t3BEF748549CB01FA6B642C4A136FCCE2948599FF * value)
	{
		____Synthesizing_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____Synthesizing_22), (void*)value);
	}

	inline static int32_t get_offset_of_U3CPropertiesU3Ek__BackingField_23() { return static_cast<int32_t>(offsetof(TranslationRecognizer_t5E2EA28023083A645CA9CB77906834987C4C9BFC, ___U3CPropertiesU3Ek__BackingField_23)); }
	inline PropertyCollection_tD6D50793A0684647D5C7067381E1365EDB3AA920 * get_U3CPropertiesU3Ek__BackingField_23() const { return ___U3CPropertiesU3Ek__BackingField_23; }
	inline PropertyCollection_tD6D50793A0684647D5C7067381E1365EDB3AA920 ** get_address_of_U3CPropertiesU3Ek__BackingField_23() { return &___U3CPropertiesU3Ek__BackingField_23; }
	inline void set_U3CPropertiesU3Ek__BackingField_23(PropertyCollection_tD6D50793A0684647D5C7067381E1365EDB3AA920 * value)
	{
		___U3CPropertiesU3Ek__BackingField_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CPropertiesU3Ek__BackingField_23), (void*)value);
	}

	inline static int32_t get_offset_of_recognizingCallbackDelegate_24() { return static_cast<int32_t>(offsetof(TranslationRecognizer_t5E2EA28023083A645CA9CB77906834987C4C9BFC, ___recognizingCallbackDelegate_24)); }
	inline CallbackFunctionDelegate_tEDE2A24857EFCB03EE502D1E6E8A9E977030EAC4 * get_recognizingCallbackDelegate_24() const { return ___recognizingCallbackDelegate_24; }
	inline CallbackFunctionDelegate_tEDE2A24857EFCB03EE502D1E6E8A9E977030EAC4 ** get_address_of_recognizingCallbackDelegate_24() { return &___recognizingCallbackDelegate_24; }
	inline void set_recognizingCallbackDelegate_24(CallbackFunctionDelegate_tEDE2A24857EFCB03EE502D1E6E8A9E977030EAC4 * value)
	{
		___recognizingCallbackDelegate_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___recognizingCallbackDelegate_24), (void*)value);
	}

	inline static int32_t get_offset_of_recognizedCallbackDelegate_25() { return static_cast<int32_t>(offsetof(TranslationRecognizer_t5E2EA28023083A645CA9CB77906834987C4C9BFC, ___recognizedCallbackDelegate_25)); }
	inline CallbackFunctionDelegate_tEDE2A24857EFCB03EE502D1E6E8A9E977030EAC4 * get_recognizedCallbackDelegate_25() const { return ___recognizedCallbackDelegate_25; }
	inline CallbackFunctionDelegate_tEDE2A24857EFCB03EE502D1E6E8A9E977030EAC4 ** get_address_of_recognizedCallbackDelegate_25() { return &___recognizedCallbackDelegate_25; }
	inline void set_recognizedCallbackDelegate_25(CallbackFunctionDelegate_tEDE2A24857EFCB03EE502D1E6E8A9E977030EAC4 * value)
	{
		___recognizedCallbackDelegate_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___recognizedCallbackDelegate_25), (void*)value);
	}

	inline static int32_t get_offset_of_canceledCallbackDelegate_26() { return static_cast<int32_t>(offsetof(TranslationRecognizer_t5E2EA28023083A645CA9CB77906834987C4C9BFC, ___canceledCallbackDelegate_26)); }
	inline CallbackFunctionDelegate_tEDE2A24857EFCB03EE502D1E6E8A9E977030EAC4 * get_canceledCallbackDelegate_26() const { return ___canceledCallbackDelegate_26; }
	inline CallbackFunctionDelegate_tEDE2A24857EFCB03EE502D1E6E8A9E977030EAC4 ** get_address_of_canceledCallbackDelegate_26() { return &___canceledCallbackDelegate_26; }
	inline void set_canceledCallbackDelegate_26(CallbackFunctionDelegate_tEDE2A24857EFCB03EE502D1E6E8A9E977030EAC4 * value)
	{
		___canceledCallbackDelegate_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___canceledCallbackDelegate_26), (void*)value);
	}

	inline static int32_t get_offset_of_translationSynthesisCallbackDelegate_27() { return static_cast<int32_t>(offsetof(TranslationRecognizer_t5E2EA28023083A645CA9CB77906834987C4C9BFC, ___translationSynthesisCallbackDelegate_27)); }
	inline CallbackFunctionDelegate_tEDE2A24857EFCB03EE502D1E6E8A9E977030EAC4 * get_translationSynthesisCallbackDelegate_27() const { return ___translationSynthesisCallbackDelegate_27; }
	inline CallbackFunctionDelegate_tEDE2A24857EFCB03EE502D1E6E8A9E977030EAC4 ** get_address_of_translationSynthesisCallbackDelegate_27() { return &___translationSynthesisCallbackDelegate_27; }
	inline void set_translationSynthesisCallbackDelegate_27(CallbackFunctionDelegate_tEDE2A24857EFCB03EE502D1E6E8A9E977030EAC4 * value)
	{
		___translationSynthesisCallbackDelegate_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___translationSynthesisCallbackDelegate_27), (void*)value);
	}

	inline static int32_t get_offset_of_audioInputKeepAlive_28() { return static_cast<int32_t>(offsetof(TranslationRecognizer_t5E2EA28023083A645CA9CB77906834987C4C9BFC, ___audioInputKeepAlive_28)); }
	inline AudioConfig_tF4EFBB8FE00E5C7569A7F087C11D4D85439A9E45 * get_audioInputKeepAlive_28() const { return ___audioInputKeepAlive_28; }
	inline AudioConfig_tF4EFBB8FE00E5C7569A7F087C11D4D85439A9E45 ** get_address_of_audioInputKeepAlive_28() { return &___audioInputKeepAlive_28; }
	inline void set_audioInputKeepAlive_28(AudioConfig_tF4EFBB8FE00E5C7569A7F087C11D4D85439A9E45 * value)
	{
		___audioInputKeepAlive_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___audioInputKeepAlive_28), (void*)value);
	}
};


// Microsoft.CognitiveServices.Speech.Translation.TranslationSynthesisResult
struct TranslationSynthesisResult_t243554A291C3C9A4349B5A0F15AFD7B984E944EE  : public RuntimeObject
{
public:
	// Microsoft.CognitiveServices.Speech.ResultReason Microsoft.CognitiveServices.Speech.Translation.TranslationSynthesisResult::<Reason>k__BackingField
	int32_t ___U3CReasonU3Ek__BackingField_0;
	// System.Byte[] Microsoft.CognitiveServices.Speech.Translation.TranslationSynthesisResult::audio
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___audio_1;
	// Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle Microsoft.CognitiveServices.Speech.Translation.TranslationSynthesisResult::resultHandle
	InteropSafeHandle_tF14E3AD32AC904F5E38F4FAC0ED46417062386C6 * ___resultHandle_2;

public:
	inline static int32_t get_offset_of_U3CReasonU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(TranslationSynthesisResult_t243554A291C3C9A4349B5A0F15AFD7B984E944EE, ___U3CReasonU3Ek__BackingField_0)); }
	inline int32_t get_U3CReasonU3Ek__BackingField_0() const { return ___U3CReasonU3Ek__BackingField_0; }
	inline int32_t* get_address_of_U3CReasonU3Ek__BackingField_0() { return &___U3CReasonU3Ek__BackingField_0; }
	inline void set_U3CReasonU3Ek__BackingField_0(int32_t value)
	{
		___U3CReasonU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_audio_1() { return static_cast<int32_t>(offsetof(TranslationSynthesisResult_t243554A291C3C9A4349B5A0F15AFD7B984E944EE, ___audio_1)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_audio_1() const { return ___audio_1; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_audio_1() { return &___audio_1; }
	inline void set_audio_1(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___audio_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___audio_1), (void*)value);
	}

	inline static int32_t get_offset_of_resultHandle_2() { return static_cast<int32_t>(offsetof(TranslationSynthesisResult_t243554A291C3C9A4349B5A0F15AFD7B984E944EE, ___resultHandle_2)); }
	inline InteropSafeHandle_tF14E3AD32AC904F5E38F4FAC0ED46417062386C6 * get_resultHandle_2() const { return ___resultHandle_2; }
	inline InteropSafeHandle_tF14E3AD32AC904F5E38F4FAC0ED46417062386C6 ** get_address_of_resultHandle_2() { return &___resultHandle_2; }
	inline void set_resultHandle_2(InteropSafeHandle_tF14E3AD32AC904F5E38F4FAC0ED46417062386C6 * value)
	{
		___resultHandle_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___resultHandle_2), (void*)value);
	}
};


// System.Type
struct Type_t  : public MemberInfo_t
{
public:
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  ____impl_9;

public:
	inline static int32_t get_offset_of__impl_9() { return static_cast<int32_t>(offsetof(Type_t, ____impl_9)); }
	inline RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  get__impl_9() const { return ____impl_9; }
	inline RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 * get_address_of__impl_9() { return &____impl_9; }
	inline void set__impl_9(RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  value)
	{
		____impl_9 = value;
	}
};

struct Type_t_StaticFields
{
public:
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterAttribute_0;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterName_1;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterNameIgnoreCase_2;
	// System.Object System.Type::Missing
	RuntimeObject * ___Missing_3;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_4;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* ___EmptyTypes_5;
	// System.Reflection.Binder System.Type::defaultBinder
	Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * ___defaultBinder_6;

public:
	inline static int32_t get_offset_of_FilterAttribute_0() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterAttribute_0)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterAttribute_0() const { return ___FilterAttribute_0; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterAttribute_0() { return &___FilterAttribute_0; }
	inline void set_FilterAttribute_0(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
	{
		___FilterAttribute_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterAttribute_0), (void*)value);
	}

	inline static int32_t get_offset_of_FilterName_1() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterName_1)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterName_1() const { return ___FilterName_1; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterName_1() { return &___FilterName_1; }
	inline void set_FilterName_1(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
	{
		___FilterName_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterName_1), (void*)value);
	}

	inline static int32_t get_offset_of_FilterNameIgnoreCase_2() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterNameIgnoreCase_2)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterNameIgnoreCase_2() const { return ___FilterNameIgnoreCase_2; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterNameIgnoreCase_2() { return &___FilterNameIgnoreCase_2; }
	inline void set_FilterNameIgnoreCase_2(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
	{
		___FilterNameIgnoreCase_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterNameIgnoreCase_2), (void*)value);
	}

	inline static int32_t get_offset_of_Missing_3() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Missing_3)); }
	inline RuntimeObject * get_Missing_3() const { return ___Missing_3; }
	inline RuntimeObject ** get_address_of_Missing_3() { return &___Missing_3; }
	inline void set_Missing_3(RuntimeObject * value)
	{
		___Missing_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Missing_3), (void*)value);
	}

	inline static int32_t get_offset_of_Delimiter_4() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Delimiter_4)); }
	inline Il2CppChar get_Delimiter_4() const { return ___Delimiter_4; }
	inline Il2CppChar* get_address_of_Delimiter_4() { return &___Delimiter_4; }
	inline void set_Delimiter_4(Il2CppChar value)
	{
		___Delimiter_4 = value;
	}

	inline static int32_t get_offset_of_EmptyTypes_5() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___EmptyTypes_5)); }
	inline TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* get_EmptyTypes_5() const { return ___EmptyTypes_5; }
	inline TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755** get_address_of_EmptyTypes_5() { return &___EmptyTypes_5; }
	inline void set_EmptyTypes_5(TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* value)
	{
		___EmptyTypes_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EmptyTypes_5), (void*)value);
	}

	inline static int32_t get_offset_of_defaultBinder_6() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___defaultBinder_6)); }
	inline Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * get_defaultBinder_6() const { return ___defaultBinder_6; }
	inline Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 ** get_address_of_defaultBinder_6() { return &___defaultBinder_6; }
	inline void set_defaultBinder_6(Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * value)
	{
		___defaultBinder_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultBinder_6), (void*)value);
	}
};


// System.EventHandler`1<Microsoft.CognitiveServices.Speech.RecognitionEventArgs>
struct EventHandler_1_t9D5FDB2FE48DCCFFD359039BB88FD53E210F0A8D  : public MulticastDelegate_t
{
public:

public:
};


// System.EventHandler`1<Microsoft.CognitiveServices.Speech.SessionEventArgs>
struct EventHandler_1_tB9B30C7ACA01631527E7047FB53709C6EC5B260A  : public MulticastDelegate_t
{
public:

public:
};


// System.EventHandler`1<Microsoft.CognitiveServices.Speech.SpeechRecognitionCanceledEventArgs>
struct EventHandler_1_t69FC758E917DED0BD7F1732BE32EAE11D78B8D50  : public MulticastDelegate_t
{
public:

public:
};


// System.EventHandler`1<Microsoft.CognitiveServices.Speech.SpeechRecognitionEventArgs>
struct EventHandler_1_tAD0C572F17FD1D8D2AAADAE630AAEC4D89CF650C  : public MulticastDelegate_t
{
public:

public:
};


// System.EventHandler`1<Microsoft.CognitiveServices.Speech.Translation.TranslationRecognitionCanceledEventArgs>
struct EventHandler_1_t7D8AF3CB447F4C1AA3E3A0C2ABF74030E97A10FC  : public MulticastDelegate_t
{
public:

public:
};


// System.EventHandler`1<Microsoft.CognitiveServices.Speech.Translation.TranslationRecognitionEventArgs>
struct EventHandler_1_t0304893ABC1043DC90AF47CDE2ACD2D6DB2B7487  : public MulticastDelegate_t
{
public:

public:
};


// System.EventHandler`1<Microsoft.CognitiveServices.Speech.Translation.TranslationSynthesisEventArgs>
struct EventHandler_1_t3BEF748549CB01FA6B642C4A136FCCE2948599FF  : public MulticastDelegate_t
{
public:

public:
};


// System.Action
struct Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6  : public MulticastDelegate_t
{
public:

public:
};


// System.ArgumentException
struct ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:
	// System.String System.ArgumentException::m_paramName
	String_t* ___m_paramName_17;

public:
	inline static int32_t get_offset_of_m_paramName_17() { return static_cast<int32_t>(offsetof(ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00, ___m_paramName_17)); }
	inline String_t* get_m_paramName_17() const { return ___m_paramName_17; }
	inline String_t** get_address_of_m_paramName_17() { return &___m_paramName_17; }
	inline void set_m_paramName_17(String_t* value)
	{
		___m_paramName_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_paramName_17), (void*)value);
	}
};


// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA  : public MulticastDelegate_t
{
public:

public:
};


// Microsoft.CognitiveServices.Speech.Internal.CallbackFunctionDelegate
struct CallbackFunctionDelegate_tEDE2A24857EFCB03EE502D1E6E8A9E977030EAC4  : public MulticastDelegate_t
{
public:

public:
};


// Microsoft.CognitiveServices.Speech.Internal.HandleRelease
struct HandleRelease_t981DDC9B764758F8D9EAE886A7255AC109F86E59  : public MulticastDelegate_t
{
public:

public:
};


// System.InvalidOperationException
struct InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:

public:
};


// Microsoft.CognitiveServices.Speech.SpeechRecognitionCanceledEventArgs
struct SpeechRecognitionCanceledEventArgs_t35423FB7DA329C4D5CC9ED0B255C55C72F06E97C  : public SpeechRecognitionEventArgs_t1FB7CC9C07684BA7F03F63DF226A306D7C5F2CEA
{
public:
	// Microsoft.CognitiveServices.Speech.CancellationReason Microsoft.CognitiveServices.Speech.SpeechRecognitionCanceledEventArgs::<Reason>k__BackingField
	int32_t ___U3CReasonU3Ek__BackingField_7;
	// Microsoft.CognitiveServices.Speech.CancellationErrorCode Microsoft.CognitiveServices.Speech.SpeechRecognitionCanceledEventArgs::<ErrorCode>k__BackingField
	int32_t ___U3CErrorCodeU3Ek__BackingField_8;
	// System.String Microsoft.CognitiveServices.Speech.SpeechRecognitionCanceledEventArgs::<ErrorDetails>k__BackingField
	String_t* ___U3CErrorDetailsU3Ek__BackingField_9;

public:
	inline static int32_t get_offset_of_U3CReasonU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(SpeechRecognitionCanceledEventArgs_t35423FB7DA329C4D5CC9ED0B255C55C72F06E97C, ___U3CReasonU3Ek__BackingField_7)); }
	inline int32_t get_U3CReasonU3Ek__BackingField_7() const { return ___U3CReasonU3Ek__BackingField_7; }
	inline int32_t* get_address_of_U3CReasonU3Ek__BackingField_7() { return &___U3CReasonU3Ek__BackingField_7; }
	inline void set_U3CReasonU3Ek__BackingField_7(int32_t value)
	{
		___U3CReasonU3Ek__BackingField_7 = value;
	}

	inline static int32_t get_offset_of_U3CErrorCodeU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(SpeechRecognitionCanceledEventArgs_t35423FB7DA329C4D5CC9ED0B255C55C72F06E97C, ___U3CErrorCodeU3Ek__BackingField_8)); }
	inline int32_t get_U3CErrorCodeU3Ek__BackingField_8() const { return ___U3CErrorCodeU3Ek__BackingField_8; }
	inline int32_t* get_address_of_U3CErrorCodeU3Ek__BackingField_8() { return &___U3CErrorCodeU3Ek__BackingField_8; }
	inline void set_U3CErrorCodeU3Ek__BackingField_8(int32_t value)
	{
		___U3CErrorCodeU3Ek__BackingField_8 = value;
	}

	inline static int32_t get_offset_of_U3CErrorDetailsU3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(SpeechRecognitionCanceledEventArgs_t35423FB7DA329C4D5CC9ED0B255C55C72F06E97C, ___U3CErrorDetailsU3Ek__BackingField_9)); }
	inline String_t* get_U3CErrorDetailsU3Ek__BackingField_9() const { return ___U3CErrorDetailsU3Ek__BackingField_9; }
	inline String_t** get_address_of_U3CErrorDetailsU3Ek__BackingField_9() { return &___U3CErrorDetailsU3Ek__BackingField_9; }
	inline void set_U3CErrorDetailsU3Ek__BackingField_9(String_t* value)
	{
		___U3CErrorDetailsU3Ek__BackingField_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CErrorDetailsU3Ek__BackingField_9), (void*)value);
	}
};


// Microsoft.CognitiveServices.Speech.SpeechRecognitionResult
struct SpeechRecognitionResult_t65860E5862B0CFC304215FF5084A2E59A1AA727F  : public RecognitionResult_t29D2A304D192BFB246AB9E91297B54B2EB44DA06
{
public:

public:
};


// Microsoft.CognitiveServices.Speech.Translation.TranslationRecognitionCanceledEventArgs
struct TranslationRecognitionCanceledEventArgs_tF8364DAABB1345D5D552BC9161B2681056902434  : public TranslationRecognitionEventArgs_t9801CC0D44EB6958FE731328096A8220591EB9E2
{
public:
	// Microsoft.CognitiveServices.Speech.CancellationReason Microsoft.CognitiveServices.Speech.Translation.TranslationRecognitionCanceledEventArgs::<Reason>k__BackingField
	int32_t ___U3CReasonU3Ek__BackingField_7;
	// Microsoft.CognitiveServices.Speech.CancellationErrorCode Microsoft.CognitiveServices.Speech.Translation.TranslationRecognitionCanceledEventArgs::<ErrorCode>k__BackingField
	int32_t ___U3CErrorCodeU3Ek__BackingField_8;
	// System.String Microsoft.CognitiveServices.Speech.Translation.TranslationRecognitionCanceledEventArgs::<ErrorDetails>k__BackingField
	String_t* ___U3CErrorDetailsU3Ek__BackingField_9;

public:
	inline static int32_t get_offset_of_U3CReasonU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(TranslationRecognitionCanceledEventArgs_tF8364DAABB1345D5D552BC9161B2681056902434, ___U3CReasonU3Ek__BackingField_7)); }
	inline int32_t get_U3CReasonU3Ek__BackingField_7() const { return ___U3CReasonU3Ek__BackingField_7; }
	inline int32_t* get_address_of_U3CReasonU3Ek__BackingField_7() { return &___U3CReasonU3Ek__BackingField_7; }
	inline void set_U3CReasonU3Ek__BackingField_7(int32_t value)
	{
		___U3CReasonU3Ek__BackingField_7 = value;
	}

	inline static int32_t get_offset_of_U3CErrorCodeU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(TranslationRecognitionCanceledEventArgs_tF8364DAABB1345D5D552BC9161B2681056902434, ___U3CErrorCodeU3Ek__BackingField_8)); }
	inline int32_t get_U3CErrorCodeU3Ek__BackingField_8() const { return ___U3CErrorCodeU3Ek__BackingField_8; }
	inline int32_t* get_address_of_U3CErrorCodeU3Ek__BackingField_8() { return &___U3CErrorCodeU3Ek__BackingField_8; }
	inline void set_U3CErrorCodeU3Ek__BackingField_8(int32_t value)
	{
		___U3CErrorCodeU3Ek__BackingField_8 = value;
	}

	inline static int32_t get_offset_of_U3CErrorDetailsU3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(TranslationRecognitionCanceledEventArgs_tF8364DAABB1345D5D552BC9161B2681056902434, ___U3CErrorDetailsU3Ek__BackingField_9)); }
	inline String_t* get_U3CErrorDetailsU3Ek__BackingField_9() const { return ___U3CErrorDetailsU3Ek__BackingField_9; }
	inline String_t** get_address_of_U3CErrorDetailsU3Ek__BackingField_9() { return &___U3CErrorDetailsU3Ek__BackingField_9; }
	inline void set_U3CErrorDetailsU3Ek__BackingField_9(String_t* value)
	{
		___U3CErrorDetailsU3Ek__BackingField_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CErrorDetailsU3Ek__BackingField_9), (void*)value);
	}
};


// Microsoft.CognitiveServices.Speech.Translation.TranslationRecognitionResult
struct TranslationRecognitionResult_tAF699D9A902DCE03B21D08BD562FE08544A089AD  : public RecognitionResult_t29D2A304D192BFB246AB9E91297B54B2EB44DA06
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,System.String> Microsoft.CognitiveServices.Speech.Translation.TranslationRecognitionResult::translationTextResultMap
	Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * ___translationTextResultMap_6;

public:
	inline static int32_t get_offset_of_translationTextResultMap_6() { return static_cast<int32_t>(offsetof(TranslationRecognitionResult_tAF699D9A902DCE03B21D08BD562FE08544A089AD, ___translationTextResultMap_6)); }
	inline Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * get_translationTextResultMap_6() const { return ___translationTextResultMap_6; }
	inline Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 ** get_address_of_translationTextResultMap_6() { return &___translationTextResultMap_6; }
	inline void set_translationTextResultMap_6(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * value)
	{
		___translationTextResultMap_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___translationTextResultMap_6), (void*)value);
	}
};


// Microsoft.CognitiveServices.Speech.Recognizer/GetRecognizerFromConfigDelegate
struct GetRecognizerFromConfigDelegate_t2DC882A03ECDF618A982ED55B82B4ED3D829FACC  : public MulticastDelegate_t
{
public:

public:
};


// Microsoft.CognitiveServices.Speech.Internal.SpxFactory/GetResultDelegate
struct GetResultDelegate_tCE5D8A1E9C3A30C92902692A8F1576D09D4DCDE3  : public MulticastDelegate_t
{
public:

public:
};


// System.ArgumentNullException
struct ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB  : public ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00
{
public:

public:
};


// System.ObjectDisposedException
struct ObjectDisposedException_t29EF6F519F16BA477EC682F23E8344BB1E9A958A  : public InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB
{
public:
	// System.String System.ObjectDisposedException::objectName
	String_t* ___objectName_17;

public:
	inline static int32_t get_offset_of_objectName_17() { return static_cast<int32_t>(offsetof(ObjectDisposedException_t29EF6F519F16BA477EC682F23E8344BB1E9A958A, ___objectName_17)); }
	inline String_t* get_objectName_17() const { return ___objectName_17; }
	inline String_t** get_address_of_objectName_17() { return &___objectName_17; }
	inline void set_objectName_17(String_t* value)
	{
		___objectName_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___objectName_17), (void*)value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Delegate_t * m_Items[1];

public:
	inline Delegate_t * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Delegate_t * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) RuntimeObject * m_Items[1];

public:
	inline RuntimeObject * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) String_t* m_Items[1];

public:
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
// System.Byte[]
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) uint8_t m_Items[1];

public:
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


// !!0[] System.Array::Empty<System.Object>()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_gshared_inline (const RuntimeMethod* method);
// T Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle::GetObjectFromWeakHandle<System.Object>(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * InteropSafeHandle_GetObjectFromWeakHandle_TisRuntimeObject_m60EE452D893D270806684844360185D119FFB8E5_gshared (intptr_t ___nativeHandle0, const RuntimeMethod* method);
// System.Void System.EventHandler`1<System.Object>::Invoke(System.Object,!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventHandler_1_Invoke_mEAFD7F9E52E7DF356F3C4F0262BCFBA7769C83C0_gshared (EventHandler_1_tFA1C30E54FA1061D79E711F65F9A174BFBD8CDCB * __this, RuntimeObject * ___sender0, RuntimeObject * ___e1, const RuntimeMethod* method);
// !0 System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::get_Key()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * KeyValuePair_2_get_Key_mCAD7B121DB998D7C56EB0281215A860EFE9DCD95_gshared_inline (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 * __this, const RuntimeMethod* method);
// !1 System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::get_Value()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * KeyValuePair_2_get_Value_m622223593F7461E7812C581DDB145270016ED303_gshared_inline (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m2C8EE5C13636D67F6C451C4935049F534AEC658F_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::set_Item(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_mE6BF870B04922441F9F2760E782DEE6EE682615A_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, RuntimeObject * ___key0, RuntimeObject * ___value1, const RuntimeMethod* method);
// !!0[] System.Array::Empty<System.Byte>()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* Array_Empty_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_m86406577D438B78D85E03BECFDC8AB3C7696A1E7_gshared_inline (const RuntimeMethod* method);

// System.Void Microsoft.CognitiveServices.Speech.CancellationDetails::.ctor(Microsoft.CognitiveServices.Speech.RecognitionResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CancellationDetails__ctor_m03B6FD790EE0ADF4D46D724E5B59FA224385663B (CancellationDetails_t5D21A89C2CF88AB86DE6EF822F1DBF0FF3F678C9 * __this, RecognitionResult_t29D2A304D192BFB246AB9E91297B54B2EB44DA06 * ___result0, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void Microsoft.CognitiveServices.Speech.Internal.SpxExceptionThrower::ThrowIfNull(System.Object,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpxExceptionThrower_ThrowIfNull_mC54EA71790A454E5785FC15C4FFBB6F457E772DB (RuntimeObject * ___item0, String_t* ___message1, const RuntimeMethod* method);
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.CancellationDetails::result_get_reason_canceled(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,Microsoft.CognitiveServices.Speech.CancellationReason&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t CancellationDetails_result_get_reason_canceled_m9DC6EAB40632EE1093689D38550E39CEBF2B27AD (InteropSafeHandle_tF14E3AD32AC904F5E38F4FAC0ED46417062386C6 * ___result0, int32_t* ___reason1, const RuntimeMethod* method);
// System.Void Microsoft.CognitiveServices.Speech.Internal.SpxExceptionThrower::ThrowIfFail(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpxExceptionThrower_ThrowIfFail_m7269610C68DA4D960FE5E6208DF1BD9282C8F2DA (intptr_t ___hr0, const RuntimeMethod* method);
// System.Void Microsoft.CognitiveServices.Speech.CancellationDetails::set_Reason(Microsoft.CognitiveServices.Speech.CancellationReason)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CancellationDetails_set_Reason_m6585C2DF7D2BF59B5FC062DF5258F079399CFE01_inline (CancellationDetails_t5D21A89C2CF88AB86DE6EF822F1DBF0FF3F678C9 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.CancellationDetails::result_get_canceled_error_code(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,Microsoft.CognitiveServices.Speech.CancellationErrorCode&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t CancellationDetails_result_get_canceled_error_code_m426BD4822127A22E7176EBDB01020D9C27900CD2 (InteropSafeHandle_tF14E3AD32AC904F5E38F4FAC0ED46417062386C6 * ___result0, int32_t* ___errorCode1, const RuntimeMethod* method);
// System.Void Microsoft.CognitiveServices.Speech.CancellationDetails::set_ErrorCode(Microsoft.CognitiveServices.Speech.CancellationErrorCode)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CancellationDetails_set_ErrorCode_mDC39567210408C52117E39FAD3930C916DA94F86_inline (CancellationDetails_t5D21A89C2CF88AB86DE6EF822F1DBF0FF3F678C9 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void Microsoft.CognitiveServices.Speech.CancellationDetails::set_ErrorDetails(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CancellationDetails_set_ErrorDetails_mC97095A39BD0DB39495A59E1081EB3026F2BE140_inline (CancellationDetails_t5D21A89C2CF88AB86DE6EF822F1DBF0FF3F678C9 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Globalization.CultureInfo System.Globalization.CultureInfo::get_InvariantCulture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * CultureInfo_get_InvariantCulture_m9FAAFAF8A00091EE1FCB7098AD3F163ECDF02164 (const RuntimeMethod* method);
// Microsoft.CognitiveServices.Speech.CancellationReason Microsoft.CognitiveServices.Speech.CancellationDetails::get_Reason()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t CancellationDetails_get_Reason_mEBCBE5F14B176F5574F4A4D6CBB2F3719CC51BA4_inline (CancellationDetails_t5D21A89C2CF88AB86DE6EF822F1DBF0FF3F678C9 * __this, const RuntimeMethod* method);
// System.String Microsoft.CognitiveServices.Speech.CancellationDetails::get_ErrorDetails()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* CancellationDetails_get_ErrorDetails_m1BD08DCFD99497ADB4E6C05D337488538941B384_inline (CancellationDetails_t5D21A89C2CF88AB86DE6EF822F1DBF0FF3F678C9 * __this, const RuntimeMethod* method);
// System.String System.String::Format(System.IFormatProvider,System.String,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m8892FAD3E9F1E11E6176840DC1EA0C40DF1F0C2B (RuntimeObject* ___provider0, String_t* ___format1, RuntimeObject * ___arg02, RuntimeObject * ___arg13, const RuntimeMethod* method);
// System.Void System.Runtime.InteropServices.SafeHandle::DangerousAddRef(System.Boolean&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SafeHandle_DangerousAddRef_mC65F001DAB84BADED6EA18B339BEA78962B978DB (SafeHandle_tC07DCA2CABF6988953342757EFB1547363E5A36B * __this, bool* ___success0, const RuntimeMethod* method);
// System.Void System.Runtime.InteropServices.SafeHandle::DangerousRelease()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SafeHandle_DangerousRelease_mD38F583FAFD30A50547FAA163FBE3C1D466174D4 (SafeHandle_tC07DCA2CABF6988953342757EFB1547363E5A36B * __this, const RuntimeMethod* method);
// !!0[] System.Array::Empty<System.Object>()
inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_inline (const RuntimeMethod* method)
{
	return ((  ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* (*) (const RuntimeMethod*))Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_gshared_inline)(method);
}
// System.Object[] Microsoft.CognitiveServices.Speech.Internal.Diagnostics::Args(System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* Diagnostics_Args_m37BBD997F110D90D939A75BC082C8A09EBF5C20C (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args0, const RuntimeMethod* method);
// System.Void Microsoft.CognitiveServices.Speech.Internal.Diagnostics::SPX_TRACE_VERBOSE(System.String,System.Object[],System.Int32,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Diagnostics_SPX_TRACE_VERBOSE_m30E8360DBDD81703DC7247D7BE842D5F32A63E0A (String_t* ___format0, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args1, int32_t ___line2, String_t* ___caller3, String_t* ___file4, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mCED6767EA5FEE6F15ABCD5B4F9150D1284C2795B (String_t* ___format0, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args1, const RuntimeMethod* method);
// System.Void Microsoft.CognitiveServices.Speech.Internal.DiagnosticsInterop::diagnostics_log_trace_string(System.Int32,System.String,System.String,System.Int32,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DiagnosticsInterop_diagnostics_log_trace_string_mE2604DBBEC420974FEAACBA1C9D62FFF408A60E5 (int32_t ___level0, String_t* ___title1, String_t* ___fileName2, int32_t ___lineNumber3, String_t* ___message4, const RuntimeMethod* method);
// System.Void System.Runtime.InteropServices.SafeHandle::.ctor(System.IntPtr,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SafeHandle__ctor_m30896EE9F6765AB918312A413BFA0349482C681C (SafeHandle_tC07DCA2CABF6988953342757EFB1547363E5A36B * __this, intptr_t ___invalidHandleValue0, bool ___ownsHandle1, const RuntimeMethod* method);
// System.Void System.Runtime.InteropServices.SafeHandle::SetHandle(System.IntPtr)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SafeHandle_SetHandle_m3727BDA5C26E0220FA7BBE73C9E662774F5F1664_inline (SafeHandle_tC07DCA2CABF6988953342757EFB1547363E5A36B * __this, intptr_t ___handle0, const RuntimeMethod* method);
// System.Boolean System.IntPtr::op_Equality(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IntPtr_op_Equality_mD94F3FE43A65684EFF984A7B95E70D2520C0AC73 (intptr_t ___value10, intptr_t ___value21, const RuntimeMethod* method);
// System.Void System.IntPtr::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IntPtr__ctor_m45FB8E0F6CB286B157BBBE5CF5B586E9E66F1097 (intptr_t* __this, int32_t ___value0, const RuntimeMethod* method);
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.HandleRelease::Invoke(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t HandleRelease_Invoke_m9C512BECA3AC902349BAB0C2394147051701C473 (HandleRelease_t981DDC9B764758F8D9EAE886A7255AC109F86E59 * __this, intptr_t ___hresult0, const RuntimeMethod* method);
// System.Void Microsoft.CognitiveServices.Speech.Internal.SpxExceptionThrower::LogErrorIfFail(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpxExceptionThrower_LogErrorIfFail_m752E6CB197597DAD0613E0AA21841F7EFD46D624 (intptr_t ___hr0, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m8D1CB0410C35E052A53AE957C914C841E54BAB66 (String_t* ___format0, RuntimeObject * ___arg01, RuntimeObject * ___arg12, const RuntimeMethod* method);
// System.Void Microsoft.CognitiveServices.Speech.Internal.Diagnostics::SPX_TRACE_VERBOSE(System.String,System.Int32,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Diagnostics_SPX_TRACE_VERBOSE_mC8FE10F8F57265211C7A31D049321F461DF90400 (String_t* ___message0, int32_t ___line1, String_t* ___caller2, String_t* ___file3, const RuntimeMethod* method);
// System.String System.IntPtr::ToString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* IntPtr_ToString_m7CDFDC84936276E62AB76AA238F7571B54DF90B4 (intptr_t* __this, String_t* ___format0, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method);
// System.Void System.Runtime.InteropServices.SafeHandle::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SafeHandle_Finalize_m7241663596A5A5643A4567D349D631CF327BCD47 (SafeHandle_tC07DCA2CABF6988953342757EFB1547363E5A36B * __this, const RuntimeMethod* method);
// System.Void System.Attribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Attribute__ctor_m5C1862A7DFC2C25A4797A8C5F681FBB5CB53ECE1 (Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71 * __this, const RuntimeMethod* method);
// System.Boolean System.IntPtr::op_Inequality(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IntPtr_op_Inequality_m212AF0E66AA81FEDC982B1C8A44ADDA24B995EB8 (intptr_t ___value10, intptr_t ___value21, const RuntimeMethod* method);
// System.Void Microsoft.CognitiveServices.Speech.Internal.HandleRelease::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandleRelease__ctor_m033F205B7379518DCCF337635EAC5AAC9B2A42E9 (HandleRelease_t981DDC9B764758F8D9EAE886A7255AC109F86E59 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle::.ctor(System.IntPtr,Microsoft.CognitiveServices.Speech.Internal.HandleRelease)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InteropSafeHandle__ctor_mEEBFD93E8F421872BAE76137A07486B9BBD3D156 (InteropSafeHandle_tF14E3AD32AC904F5E38F4FAC0ED46417062386C6 * __this, intptr_t ___handle0, HandleRelease_t981DDC9B764758F8D9EAE886A7255AC109F86E59 * ___releaseHandle1, const RuntimeMethod* method);
// System.Void System.Runtime.InteropServices.SafeHandle::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SafeHandle_Dispose_mFFFB9D0CAE3EEE02F0D3DA250D5E52F0DD51B098 (SafeHandle_tC07DCA2CABF6988953342757EFB1547363E5A36B * __this, const RuntimeMethod* method);
// System.String Microsoft.CognitiveServices.Speech.PropertyCollection::GetPropertyString(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,System.Int32,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* PropertyCollection_GetPropertyString_m42FE0F1232AE5118B58061A6222B07E5A27D9B54 (PropertyCollection_tD6D50793A0684647D5C7067381E1365EDB3AA920 * __this, InteropSafeHandle_tF14E3AD32AC904F5E38F4FAC0ED46417062386C6 * ___propHandle0, int32_t ___id1, String_t* ___name2, String_t* ___defaultValue3, const RuntimeMethod* method);
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.Utf8StringMarshaler::MarshalManagedToNative(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Utf8StringMarshaler_MarshalManagedToNative_m39FF2454E1147C76DAA8342418BA5DB669E98C5F (String_t* ___str0, const RuntimeMethod* method);
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.PropertyCollection::property_bag_set_string(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,System.Int32,System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t PropertyCollection_property_bag_set_string_m9F04396801AECB2614444B52E37ECE43859EDCE3 (InteropSafeHandle_tF14E3AD32AC904F5E38F4FAC0ED46417062386C6 * ___propbag0, int32_t ___id1, intptr_t ___name2, intptr_t ___value3, const RuntimeMethod* method);
// System.Void System.Runtime.InteropServices.Marshal::FreeHGlobal(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Marshal_FreeHGlobal_m53FC4846F5D3106BA25B52C321005C227E424F72 (intptr_t ___hglobal0, const RuntimeMethod* method);
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.PropertyCollection::property_bag_get_string(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,System.Int32,System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t PropertyCollection_property_bag_get_string_mD72C7BC68AA146B7B28E6D3BA2A34ACA1F3FB0A1 (InteropSafeHandle_tF14E3AD32AC904F5E38F4FAC0ED46417062386C6 * ___propbag0, int32_t ___id1, intptr_t ___name2, intptr_t ___defaultValue3, const RuntimeMethod* method);
// System.String Microsoft.CognitiveServices.Speech.Internal.Utf8StringMarshaler::MarshalNativeToManaged(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Utf8StringMarshaler_MarshalNativeToManaged_mE524A0FA5B448795AFBC45096D889A5A647487D8 (intptr_t ___native0, const RuntimeMethod* method);
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.PropertyCollection::property_bag_free_string(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t PropertyCollection_property_bag_free_string_mEFBE870DE678372D8DA91718476766F7761B5A4B (intptr_t ___ptr0, const RuntimeMethod* method);
// System.Void Microsoft.CognitiveServices.Speech.SessionEventArgs::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SessionEventArgs__ctor_mA2BA5B62E7BCD52804ACA274FE514BF94DBB9891 (SessionEventArgs_t720E6DA982AD7DE7933835DEBBECD8B78F28CAB1 * __this, intptr_t ___eventHandlePtr0, const RuntimeMethod* method);
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.Recognizer::recognizer_recognition_event_get_offset(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,System.UInt64&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Recognizer_recognizer_recognition_event_get_offset_mCF53A1E91E882611247A461133DA78BE91F55CE8 (InteropSafeHandle_tF14E3AD32AC904F5E38F4FAC0ED46417062386C6 * ___eventHandle0, uint64_t* ___offset1, const RuntimeMethod* method);
// System.String Microsoft.CognitiveServices.Speech.SessionEventArgs::get_SessionId()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* SessionEventArgs_get_SessionId_m8C680FABDADC335561EA0F07CEA0F2F38A968960_inline (SessionEventArgs_t720E6DA982AD7DE7933835DEBBECD8B78F28CAB1 * __this, const RuntimeMethod* method);
// System.UInt64 Microsoft.CognitiveServices.Speech.RecognitionEventArgs::get_Offset()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint64_t RecognitionEventArgs_get_Offset_m5A20B9663DD26226E0D6B5BF93F0BAA30D04A870_inline (RecognitionEventArgs_tC7B8B5C317C90BF54CBE82BE86321F5359B98650 * __this, const RuntimeMethod* method);
// System.Void Microsoft.CognitiveServices.Speech.Internal.SpxFactory/GetResultDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GetResultDelegate__ctor_mD9674EEDEC07A1965D10AD6C172D61ADA8ABBAF0 (GetResultDelegate_tCE5D8A1E9C3A30C92902692A8F1576D09D4DCDE3 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.String Microsoft.CognitiveServices.Speech.Internal.SpxFactory::GetDataFromHandleUsingDelegate(Microsoft.CognitiveServices.Speech.Internal.SpxFactory/GetResultDelegate,Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SpxFactory_GetDataFromHandleUsingDelegate_mE498329CDC2B03C0A628C2EDE8395F3F87FC605C (GetResultDelegate_tCE5D8A1E9C3A30C92902692A8F1576D09D4DCDE3 * ___functionPtr0, InteropSafeHandle_tF14E3AD32AC904F5E38F4FAC0ED46417062386C6 * ___handle1, int32_t ___maxCharCount2, const RuntimeMethod* method);
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.RecognitionResult::result_get_reason(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,Microsoft.CognitiveServices.Speech.ResultReason&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t RecognitionResult_result_get_reason_m56E4A15B2D6F95EFF1E69838F4A0F9B6CAF4CD8A (InteropSafeHandle_tF14E3AD32AC904F5E38F4FAC0ED46417062386C6 * ___result0, int32_t* ___reason1, const RuntimeMethod* method);
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.RecognitionResult::result_get_property_bag(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,System.IntPtr&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t RecognitionResult_result_get_property_bag_m75C375828C1506CA3A7F3B6DDB9C086ADD04A91A (InteropSafeHandle_tF14E3AD32AC904F5E38F4FAC0ED46417062386C6 * ___result0, intptr_t* ___hpropbag1, const RuntimeMethod* method);
// System.Void Microsoft.CognitiveServices.Speech.PropertyCollection::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertyCollection__ctor_m298675719270993E505A055053F0D23293B517D2 (PropertyCollection_tD6D50793A0684647D5C7067381E1365EDB3AA920 * __this, intptr_t ___propertyBagPtr0, const RuntimeMethod* method);
// System.Void Microsoft.CognitiveServices.Speech.RecognitionResult::set_Properties(Microsoft.CognitiveServices.Speech.PropertyCollection)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RecognitionResult_set_Properties_mC90D2FE65A44F87E80C5889C0E59A4CA2546FE33_inline (RecognitionResult_t29D2A304D192BFB246AB9E91297B54B2EB44DA06 * __this, PropertyCollection_tD6D50793A0684647D5C7067381E1365EDB3AA920 * ___value0, const RuntimeMethod* method);
// System.String System.String::Format(System.IFormatProvider,System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mF96F0621DC567D09C07F1EAC66B31AD261A9DC21 (RuntimeObject* ___provider0, String_t* ___format1, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args2, const RuntimeMethod* method);
// System.Void Microsoft.CognitiveServices.Speech.Recognizer::FireEvent_SetSessionStarted(System.IntPtr,System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Recognizer_FireEvent_SetSessionStarted_mE1D278B2C1F2EA34E714D8E5F41CF8EA7E533F11 (intptr_t ___hreco0, intptr_t ___hevent1, intptr_t ___pvContext2, const RuntimeMethod* method);
// System.Void Microsoft.CognitiveServices.Speech.Recognizer::FireEvent_SetSessionStopped(System.IntPtr,System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Recognizer_FireEvent_SetSessionStopped_mC49DC694FC309FDE44262E02039FB542A838CC78 (intptr_t ___hreco0, intptr_t ___hevent1, intptr_t ___pvContext2, const RuntimeMethod* method);
// System.Void Microsoft.CognitiveServices.Speech.Recognizer::FireEvent_SpeechStartDetected(System.IntPtr,System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Recognizer_FireEvent_SpeechStartDetected_m6BA5E049E81970E282933AEEA38E42DC461AC29F (intptr_t ___hreco0, intptr_t ___hevent1, intptr_t ___pvContext2, const RuntimeMethod* method);
// System.Void Microsoft.CognitiveServices.Speech.Recognizer::FireEvent_SpeechEndDetected(System.IntPtr,System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Recognizer_FireEvent_SpeechEndDetected_mBD282262A151F5C473D1C49CFF74DEDDD71E7769 (intptr_t ___hreco0, intptr_t ___hevent1, intptr_t ___pvContext2, const RuntimeMethod* method);
// System.Delegate System.Delegate::Combine(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t * Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55 (Delegate_t * ___a0, Delegate_t * ___b1, const RuntimeMethod* method);
// System.Delegate System.Delegate::Remove(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t * Delegate_Remove_m8B4AD17254118B2904720D55C9B34FB3DCCBD7D4 (Delegate_t * ___source0, Delegate_t * ___value1, const RuntimeMethod* method);
// System.IntPtr System.Runtime.InteropServices.GCHandle::ToIntPtr(System.Runtime.InteropServices.GCHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t GCHandle_ToIntPtr_m017FBB27407865DD17A269CC03518EC518DE5AEA (GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603  ___value0, const RuntimeMethod* method);
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.Recognizer::recognizer_session_started_set_callback(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,Microsoft.CognitiveServices.Speech.Internal.CallbackFunctionDelegate,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Recognizer_recognizer_session_started_set_callback_m23B0AD337C8446036392FD763D5C81B4D43A8709 (InteropSafeHandle_tF14E3AD32AC904F5E38F4FAC0ED46417062386C6 * ___recoHandle0, CallbackFunctionDelegate_tEDE2A24857EFCB03EE502D1E6E8A9E977030EAC4 * ___callback1, intptr_t ___context2, const RuntimeMethod* method);
// System.Void Microsoft.CognitiveServices.Speech.Recognizer::add__SessionStarted(System.EventHandler`1<Microsoft.CognitiveServices.Speech.SessionEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Recognizer_add__SessionStarted_m82C00A0B6456390DBDF96FE466647D964302FE08 (Recognizer_tF1FAA5F9E223C619151C5DA96D83F0AF7E3C9E3E * __this, EventHandler_1_tB9B30C7ACA01631527E7047FB53709C6EC5B260A * ___value0, const RuntimeMethod* method);
// System.Void Microsoft.CognitiveServices.Speech.Recognizer::remove__SessionStarted(System.EventHandler`1<Microsoft.CognitiveServices.Speech.SessionEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Recognizer_remove__SessionStarted_mDE2352B8E75ECF0D16F283EB81A72D769F129A3B (Recognizer_tF1FAA5F9E223C619151C5DA96D83F0AF7E3C9E3E * __this, EventHandler_1_tB9B30C7ACA01631527E7047FB53709C6EC5B260A * ___value0, const RuntimeMethod* method);
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.Recognizer::recognizer_session_stopped_set_callback(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,Microsoft.CognitiveServices.Speech.Internal.CallbackFunctionDelegate,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Recognizer_recognizer_session_stopped_set_callback_mEAD7E8432B82F964E1C5578C37DCDAD087A8C41B (InteropSafeHandle_tF14E3AD32AC904F5E38F4FAC0ED46417062386C6 * ___recoHandle0, CallbackFunctionDelegate_tEDE2A24857EFCB03EE502D1E6E8A9E977030EAC4 * ___callback1, intptr_t ___context2, const RuntimeMethod* method);
// System.Void Microsoft.CognitiveServices.Speech.Recognizer::add__SessionStopped(System.EventHandler`1<Microsoft.CognitiveServices.Speech.SessionEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Recognizer_add__SessionStopped_m72A41C93CFD304A89B9369D6E74D7E1D40D16D36 (Recognizer_tF1FAA5F9E223C619151C5DA96D83F0AF7E3C9E3E * __this, EventHandler_1_tB9B30C7ACA01631527E7047FB53709C6EC5B260A * ___value0, const RuntimeMethod* method);
// System.Void Microsoft.CognitiveServices.Speech.Recognizer::remove__SessionStopped(System.EventHandler`1<Microsoft.CognitiveServices.Speech.SessionEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Recognizer_remove__SessionStopped_m5A5E96C40EA8CA9ADA763CEBF02573CAC0A32BC6 (Recognizer_tF1FAA5F9E223C619151C5DA96D83F0AF7E3C9E3E * __this, EventHandler_1_tB9B30C7ACA01631527E7047FB53709C6EC5B260A * ___value0, const RuntimeMethod* method);
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.Recognizer::recognizer_speech_start_detected_set_callback(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,Microsoft.CognitiveServices.Speech.Internal.CallbackFunctionDelegate,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Recognizer_recognizer_speech_start_detected_set_callback_m42E74A08ECDDA5E9BEA53AB98F170276324380F1 (InteropSafeHandle_tF14E3AD32AC904F5E38F4FAC0ED46417062386C6 * ___recoHandle0, CallbackFunctionDelegate_tEDE2A24857EFCB03EE502D1E6E8A9E977030EAC4 * ___callback1, intptr_t ___context2, const RuntimeMethod* method);
// System.Void Microsoft.CognitiveServices.Speech.Recognizer::add__SpeechStartDetected(System.EventHandler`1<Microsoft.CognitiveServices.Speech.RecognitionEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Recognizer_add__SpeechStartDetected_m0F0EC04B8F79FCE22C43242DF2A774E8AB57A737 (Recognizer_tF1FAA5F9E223C619151C5DA96D83F0AF7E3C9E3E * __this, EventHandler_1_t9D5FDB2FE48DCCFFD359039BB88FD53E210F0A8D * ___value0, const RuntimeMethod* method);
// System.Void Microsoft.CognitiveServices.Speech.Recognizer::remove__SpeechStartDetected(System.EventHandler`1<Microsoft.CognitiveServices.Speech.RecognitionEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Recognizer_remove__SpeechStartDetected_m4647638FFD5518D8C6356FD0B788A2D8E123D705 (Recognizer_tF1FAA5F9E223C619151C5DA96D83F0AF7E3C9E3E * __this, EventHandler_1_t9D5FDB2FE48DCCFFD359039BB88FD53E210F0A8D * ___value0, const RuntimeMethod* method);
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.Recognizer::recognizer_speech_end_detected_set_callback(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,Microsoft.CognitiveServices.Speech.Internal.CallbackFunctionDelegate,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Recognizer_recognizer_speech_end_detected_set_callback_m54E9AA603B97AB97F61866B60D875BA4DDEC25CE (InteropSafeHandle_tF14E3AD32AC904F5E38F4FAC0ED46417062386C6 * ___recoHandle0, CallbackFunctionDelegate_tEDE2A24857EFCB03EE502D1E6E8A9E977030EAC4 * ___callback1, intptr_t ___context2, const RuntimeMethod* method);
// System.Void Microsoft.CognitiveServices.Speech.Recognizer::add__SpeechEndDetected(System.EventHandler`1<Microsoft.CognitiveServices.Speech.RecognitionEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Recognizer_add__SpeechEndDetected_m15AA9CD5EA864B18E1F29B21F3349E4EDE9899BB (Recognizer_tF1FAA5F9E223C619151C5DA96D83F0AF7E3C9E3E * __this, EventHandler_1_t9D5FDB2FE48DCCFFD359039BB88FD53E210F0A8D * ___value0, const RuntimeMethod* method);
// System.Void Microsoft.CognitiveServices.Speech.Recognizer::remove__SpeechEndDetected(System.EventHandler`1<Microsoft.CognitiveServices.Speech.RecognitionEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Recognizer_remove__SpeechEndDetected_m41E1F529B192A8C325D9B8D40652BE2AC20FA480 (Recognizer_tF1FAA5F9E223C619151C5DA96D83F0AF7E3C9E3E * __this, EventHandler_1_t9D5FDB2FE48DCCFFD359039BB88FD53E210F0A8D * ___value0, const RuntimeMethod* method);
// System.Runtime.InteropServices.GCHandle System.Runtime.InteropServices.GCHandle::Alloc(System.Object,System.Runtime.InteropServices.GCHandleType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603  GCHandle_Alloc_mBF5C4C0E8605F97427BFDF96D68AACD4A4D6DDEC (RuntimeObject * ___value0, int32_t ___type1, const RuntimeMethod* method);
// System.Void Microsoft.CognitiveServices.Speech.Internal.CallbackFunctionDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CallbackFunctionDelegate__ctor_m34250E2B4EB599FB96576EC76B41BA44F32482AB (CallbackFunctionDelegate_tEDE2A24857EFCB03EE502D1E6E8A9E977030EAC4 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void System.Object::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Finalize_mC59C83CF4F7707E425FFA6362931C25D4C36676A (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void System.Threading.Monitor::Enter(System.Object,System.Boolean&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Enter_mBEB6CC84184B46F26375EC3FC8921D16E48EA4C4 (RuntimeObject * ___obj0, bool* ___lockTaken1, const RuntimeMethod* method);
// System.Void System.InvalidOperationException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_mC012CE552988309733C896F3FEA8249171E4402E (InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Void System.Threading.Monitor::Exit(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Exit_mA776B403DA88AC77CDEEF67AB9F0D0E77ABD254A (RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.Void System.GC::SuppressFinalize(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GC_SuppressFinalize_mEE880E988C6AF32AA2F67F2D62715281EAA41555 (RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.Boolean System.Runtime.InteropServices.GCHandle::get_IsAllocated()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GCHandle_get_IsAllocated_mEDA4DAC6AD6D881110E96CAFDAB78C068F5B144D (GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603 * __this, const RuntimeMethod* method);
// System.Void System.Runtime.InteropServices.GCHandle::Free()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GCHandle_Free_mB4E9415544FC9F0075C02AB17E270E49AF006025 (GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603 * __this, const RuntimeMethod* method);
// T Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle::GetObjectFromWeakHandle<Microsoft.CognitiveServices.Speech.Recognizer>(System.IntPtr)
inline Recognizer_tF1FAA5F9E223C619151C5DA96D83F0AF7E3C9E3E * InteropSafeHandle_GetObjectFromWeakHandle_TisRecognizer_tF1FAA5F9E223C619151C5DA96D83F0AF7E3C9E3E_mFCA3860AC37DBDE394D56D75B0C1F69E72D6BDDE (intptr_t ___nativeHandle0, const RuntimeMethod* method)
{
	return ((  Recognizer_tF1FAA5F9E223C619151C5DA96D83F0AF7E3C9E3E * (*) (intptr_t, const RuntimeMethod*))InteropSafeHandle_GetObjectFromWeakHandle_TisRuntimeObject_m60EE452D893D270806684844360185D119FFB8E5_gshared)(___nativeHandle0, method);
}
// System.Void System.EventHandler`1<Microsoft.CognitiveServices.Speech.SessionEventArgs>::Invoke(System.Object,!0)
inline void EventHandler_1_Invoke_mE1FE7957F49CE4B3CA60D24454E2464B47E68467 (EventHandler_1_tB9B30C7ACA01631527E7047FB53709C6EC5B260A * __this, RuntimeObject * ___sender0, SessionEventArgs_t720E6DA982AD7DE7933835DEBBECD8B78F28CAB1 * ___e1, const RuntimeMethod* method)
{
	((  void (*) (EventHandler_1_tB9B30C7ACA01631527E7047FB53709C6EC5B260A *, RuntimeObject *, SessionEventArgs_t720E6DA982AD7DE7933835DEBBECD8B78F28CAB1 *, const RuntimeMethod*))EventHandler_1_Invoke_mEAFD7F9E52E7DF356F3C4F0262BCFBA7769C83C0_gshared)(__this, ___sender0, ___e1, method);
}
// System.Void Microsoft.CognitiveServices.Speech.Internal.SpxExceptionThrower::LogError(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpxExceptionThrower_LogError_m238C27C8D305C674179F87D2C22B9F9780CA91E1 (String_t* ___message0, const RuntimeMethod* method);
// System.Void Microsoft.CognitiveServices.Speech.RecognitionEventArgs::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RecognitionEventArgs__ctor_m31490D766642A01A99F86D9E037DEABFD21138FE (RecognitionEventArgs_tC7B8B5C317C90BF54CBE82BE86321F5359B98650 * __this, intptr_t ___eventHandlePtr0, const RuntimeMethod* method);
// System.Void System.EventHandler`1<Microsoft.CognitiveServices.Speech.RecognitionEventArgs>::Invoke(System.Object,!0)
inline void EventHandler_1_Invoke_m6FD7204CAF8D0E26A29FA8BC8D9136BAD6203FC3 (EventHandler_1_t9D5FDB2FE48DCCFFD359039BB88FD53E210F0A8D * __this, RuntimeObject * ___sender0, RecognitionEventArgs_tC7B8B5C317C90BF54CBE82BE86321F5359B98650 * ___e1, const RuntimeMethod* method)
{
	((  void (*) (EventHandler_1_t9D5FDB2FE48DCCFFD359039BB88FD53E210F0A8D *, RuntimeObject *, RecognitionEventArgs_tC7B8B5C317C90BF54CBE82BE86321F5359B98650 *, const RuntimeMethod*))EventHandler_1_Invoke_mEAFD7F9E52E7DF356F3C4F0262BCFBA7769C83C0_gshared)(__this, ___sender0, ___e1, method);
}
// System.Type System.Object::GetType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Object_GetType_m571FE8360C10B98C23AAF1F066D92C08CC94F45B (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void System.ObjectDisposedException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectDisposedException__ctor_mE57C6A61713668708F9B3CEF060A8D006B1FE880 (ObjectDisposedException_t29EF6F519F16BA477EC682F23E8344BB1E9A958A * __this, String_t* ___objectName0, const RuntimeMethod* method);
// System.Void System.Action::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_Invoke_m3FFA5BE3D64F0FF8E1E1CB6F953913FADB5EB89E (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * __this, const RuntimeMethod* method);
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.Recognizer::recognizer_async_handle_release(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Recognizer_recognizer_async_handle_release_mB7E4B1D8EEA5B0FE097A95562D5E09B2F7740CBA (intptr_t ___asyncHandle0, const RuntimeMethod* method);
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.Recognizer::recognizer_start_continuous_recognition_async(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,System.IntPtr&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Recognizer_recognizer_start_continuous_recognition_async_mE0D8A324AA83CC7914CF3A677770B702A0225CF7 (InteropSafeHandle_tF14E3AD32AC904F5E38F4FAC0ED46417062386C6 * ___recoHandle0, intptr_t* ___asyncHandle1, const RuntimeMethod* method);
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.Recognizer::recognizer_start_continuous_recognition_async_wait_for(System.IntPtr,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Recognizer_recognizer_start_continuous_recognition_async_wait_for_m67B22C498B2E1C76189FF0CEBB430C8ED7D52AD9 (intptr_t ___asyncHandle0, uint32_t ___milliseconds1, const RuntimeMethod* method);
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.Recognizer::recognizer_stop_continuous_recognition_async(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,System.IntPtr&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Recognizer_recognizer_stop_continuous_recognition_async_m90B10E6C5A9EF8E54D22793254DE64E412B4FC80 (InteropSafeHandle_tF14E3AD32AC904F5E38F4FAC0ED46417062386C6 * ___recoHandle0, intptr_t* ___asyncHandle1, const RuntimeMethod* method);
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.Recognizer::recognizer_stop_continuous_recognition_async_wait_for(System.IntPtr,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Recognizer_recognizer_stop_continuous_recognition_async_wait_for_m2A6AE149C72A46FEE1C9488C8F984079C618B73F (intptr_t ___asyncHandle0, uint32_t ___milliseconds1, const RuntimeMethod* method);
// System.Void System.ArgumentNullException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97 (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * __this, String_t* ___paramName0, const RuntimeMethod* method);
// System.IntPtr Microsoft.CognitiveServices.Speech.Recognizer/GetRecognizerFromConfigDelegate::Invoke(System.IntPtr&,Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t GetRecognizerFromConfigDelegate_Invoke_m32859CB0B6CCD5497015D9506CA5B844EAFD185C (GetRecognizerFromConfigDelegate_t2DC882A03ECDF618A982ED55B82B4ED3D829FACC * __this, intptr_t* ___phreco0, InteropSafeHandle_tF14E3AD32AC904F5E38F4FAC0ED46417062386C6 * ___speechconfig1, InteropSafeHandle_tF14E3AD32AC904F5E38F4FAC0ED46417062386C6 * ___audioInput2, const RuntimeMethod* method);
// System.Void System.GC::KeepAlive(System.Object)
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void GC_KeepAlive_m16C41A64E08E35865A249CB5479A37BACBEDC75C (RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.Void System.EventArgs::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventArgs__ctor_m5ECB9A8ED0A9E2DBB1ED999BAC1CB44F4354E571 (EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA * __this, const RuntimeMethod* method);
// System.Void Microsoft.CognitiveServices.Speech.Internal.SpxExceptionThrower::ThrowIfNull(System.IntPtr,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpxExceptionThrower_ThrowIfNull_m89216C9938C8E733BC6119E3B3F84252B0BB101B (intptr_t ___item0, String_t* ___message1, const RuntimeMethod* method);
// System.String System.String::Format(System.IFormatProvider,System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m90ED4B078849D42FA1A7C5EB7AC7F74F235F6916 (RuntimeObject* ___provider0, String_t* ___format1, RuntimeObject * ___arg02, const RuntimeMethod* method);
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.SpeechConfig::speech_config_get_property_bag(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,System.IntPtr&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t SpeechConfig_speech_config_get_property_bag_m14C01802DDD84CBB3508ABD4B604E6A5DADE2F0E (InteropSafeHandle_tF14E3AD32AC904F5E38F4FAC0ED46417062386C6 * ___config0, intptr_t* ___propbag1, const RuntimeMethod* method);
// System.Void Microsoft.CognitiveServices.Speech.SpeechConfig::SetProperty(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpeechConfig_SetProperty_m73E31A4EE091A42C3719999B7CBAAED70BC14B34 (SpeechConfig_tB1A7AD16A9CDE287A706780CBD6F22AAA64A9E11 * __this, String_t* ___name0, String_t* ___value1, const RuntimeMethod* method);
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.SpeechConfig::speech_config_from_subscription(System.IntPtr&,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t SpeechConfig_speech_config_from_subscription_m53E6A53D4F7099736BF503BC3C76EDC66B058153 (intptr_t* ___config0, String_t* ___subscriptionKey1, String_t* ___region2, const RuntimeMethod* method);
// System.Void Microsoft.CognitiveServices.Speech.SpeechConfig::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpeechConfig__ctor_m7E86AF6B9C5651B1FDA707458201F6A9058A46F5 (SpeechConfig_tB1A7AD16A9CDE287A706780CBD6F22AAA64A9E11 * __this, intptr_t ___configPtr0, const RuntimeMethod* method);
// System.Void Microsoft.CognitiveServices.Speech.SpeechRecognitionEventArgs::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpeechRecognitionEventArgs__ctor_mC3BF882EE32BECD77C0DEDD86F6203E24B864012 (SpeechRecognitionEventArgs_t1FB7CC9C07684BA7F03F63DF226A306D7C5F2CEA * __this, intptr_t ___eventHandlePtr0, const RuntimeMethod* method);
// Microsoft.CognitiveServices.Speech.SpeechRecognitionResult Microsoft.CognitiveServices.Speech.SpeechRecognitionEventArgs::get_Result()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR SpeechRecognitionResult_t65860E5862B0CFC304215FF5084A2E59A1AA727F * SpeechRecognitionEventArgs_get_Result_m1389C14A09CF6A3065569F67F3E7B624EE5A1370_inline (SpeechRecognitionEventArgs_t1FB7CC9C07684BA7F03F63DF226A306D7C5F2CEA * __this, const RuntimeMethod* method);
// Microsoft.CognitiveServices.Speech.CancellationDetails Microsoft.CognitiveServices.Speech.CancellationDetails::FromResult(Microsoft.CognitiveServices.Speech.RecognitionResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CancellationDetails_t5D21A89C2CF88AB86DE6EF822F1DBF0FF3F678C9 * CancellationDetails_FromResult_m4EB7D4D34AD85ACD568A2598EA91D0122D5DB718 (RecognitionResult_t29D2A304D192BFB246AB9E91297B54B2EB44DA06 * ___result0, const RuntimeMethod* method);
// Microsoft.CognitiveServices.Speech.CancellationErrorCode Microsoft.CognitiveServices.Speech.CancellationDetails::get_ErrorCode()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t CancellationDetails_get_ErrorCode_m86467B87546D6D75FF69D6190773F9F84CD94D98_inline (CancellationDetails_t5D21A89C2CF88AB86DE6EF822F1DBF0FF3F678C9 * __this, const RuntimeMethod* method);
// Microsoft.CognitiveServices.Speech.CancellationReason Microsoft.CognitiveServices.Speech.SpeechRecognitionCanceledEventArgs::get_Reason()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t SpeechRecognitionCanceledEventArgs_get_Reason_m20DC32313A577BF1BE92F6B0E2C094114A67E0BD_inline (SpeechRecognitionCanceledEventArgs_t35423FB7DA329C4D5CC9ED0B255C55C72F06E97C * __this, const RuntimeMethod* method);
// Microsoft.CognitiveServices.Speech.CancellationErrorCode Microsoft.CognitiveServices.Speech.SpeechRecognitionCanceledEventArgs::get_ErrorCode()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t SpeechRecognitionCanceledEventArgs_get_ErrorCode_mBA216DB0C26A6BC78DAB3557219137CBFF206253_inline (SpeechRecognitionCanceledEventArgs_t35423FB7DA329C4D5CC9ED0B255C55C72F06E97C * __this, const RuntimeMethod* method);
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.Recognizer::recognizer_recognition_event_get_result(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,System.IntPtr&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Recognizer_recognizer_recognition_event_get_result_m95C54811DD6BF44F99C1BF4AFA3506EB119BFBA0 (InteropSafeHandle_tF14E3AD32AC904F5E38F4FAC0ED46417062386C6 * ___eventHandle0, intptr_t* ___result1, const RuntimeMethod* method);
// System.Void Microsoft.CognitiveServices.Speech.SpeechRecognitionResult::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpeechRecognitionResult__ctor_m55B5299672F300EDE742234DC6E0E39F51B33902 (SpeechRecognitionResult_t65860E5862B0CFC304215FF5084A2E59A1AA727F * __this, intptr_t ___resultPtr0, const RuntimeMethod* method);
// System.Void Microsoft.CognitiveServices.Speech.RecognitionResult::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RecognitionResult__ctor_m7D01DA66AAD01DE820449823615BF686A33EC72E (RecognitionResult_t29D2A304D192BFB246AB9E91297B54B2EB44DA06 * __this, intptr_t ___resultHandlePtr0, const RuntimeMethod* method);
// System.Void Microsoft.CognitiveServices.Speech.SpeechRecognizer::FireEvent_Recognizing(System.IntPtr,System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpeechRecognizer_FireEvent_Recognizing_m3BAA0548428B005FA57B77CB4B09D157F5D34E0F (intptr_t ___hreco0, intptr_t ___hevent1, intptr_t ___pvContext2, const RuntimeMethod* method);
// System.Void Microsoft.CognitiveServices.Speech.SpeechRecognizer::FireEvent_Recognized(System.IntPtr,System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpeechRecognizer_FireEvent_Recognized_m67E62803BF374C34B61CFC991DA73FE25AF287BF (intptr_t ___hreco0, intptr_t ___hevent1, intptr_t ___pvContext2, const RuntimeMethod* method);
// System.Void Microsoft.CognitiveServices.Speech.SpeechRecognizer::FireEvent_Canceled(System.IntPtr,System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpeechRecognizer_FireEvent_Canceled_m4DDE18DFD654DACBDE97F182D735A624B5E601F2 (intptr_t ___hreco0, intptr_t ___hevent1, intptr_t ___pvContext2, const RuntimeMethod* method);
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.Recognizer::recognizer_recognizing_set_callback(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,Microsoft.CognitiveServices.Speech.Internal.CallbackFunctionDelegate,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Recognizer_recognizer_recognizing_set_callback_m0FBD65D0735F5B286FE71E2DC91C04231297B466 (InteropSafeHandle_tF14E3AD32AC904F5E38F4FAC0ED46417062386C6 * ___recoHandle0, CallbackFunctionDelegate_tEDE2A24857EFCB03EE502D1E6E8A9E977030EAC4 * ___callback1, intptr_t ___context2, const RuntimeMethod* method);
// System.Void Microsoft.CognitiveServices.Speech.SpeechRecognizer::add__Recognizing(System.EventHandler`1<Microsoft.CognitiveServices.Speech.SpeechRecognitionEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpeechRecognizer_add__Recognizing_m80E20BB088605524849E64F4BAB797E4659E3491 (SpeechRecognizer_tD9F66F83FE18A3C87986B87E9108997AC919BF2A * __this, EventHandler_1_tAD0C572F17FD1D8D2AAADAE630AAEC4D89CF650C * ___value0, const RuntimeMethod* method);
// System.Void Microsoft.CognitiveServices.Speech.SpeechRecognizer::remove__Recognizing(System.EventHandler`1<Microsoft.CognitiveServices.Speech.SpeechRecognitionEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpeechRecognizer_remove__Recognizing_mCFA598D6668DFF893337F62828EAA61EB9F19723 (SpeechRecognizer_tD9F66F83FE18A3C87986B87E9108997AC919BF2A * __this, EventHandler_1_tAD0C572F17FD1D8D2AAADAE630AAEC4D89CF650C * ___value0, const RuntimeMethod* method);
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.Recognizer::recognizer_recognized_set_callback(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,Microsoft.CognitiveServices.Speech.Internal.CallbackFunctionDelegate,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Recognizer_recognizer_recognized_set_callback_m262A0DD6A93CABB015B86E65229021E89C037FE9 (InteropSafeHandle_tF14E3AD32AC904F5E38F4FAC0ED46417062386C6 * ___recoHandle0, CallbackFunctionDelegate_tEDE2A24857EFCB03EE502D1E6E8A9E977030EAC4 * ___callback1, intptr_t ___context2, const RuntimeMethod* method);
// System.Void Microsoft.CognitiveServices.Speech.SpeechRecognizer::add__Recognized(System.EventHandler`1<Microsoft.CognitiveServices.Speech.SpeechRecognitionEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpeechRecognizer_add__Recognized_m62E0B99053088A27A5BC428F2F268FB5B5A97943 (SpeechRecognizer_tD9F66F83FE18A3C87986B87E9108997AC919BF2A * __this, EventHandler_1_tAD0C572F17FD1D8D2AAADAE630AAEC4D89CF650C * ___value0, const RuntimeMethod* method);
// System.Void Microsoft.CognitiveServices.Speech.SpeechRecognizer::remove__Recognized(System.EventHandler`1<Microsoft.CognitiveServices.Speech.SpeechRecognitionEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpeechRecognizer_remove__Recognized_mC29E517C3AF82C572F196C98DDDE1C41F52A1ABE (SpeechRecognizer_tD9F66F83FE18A3C87986B87E9108997AC919BF2A * __this, EventHandler_1_tAD0C572F17FD1D8D2AAADAE630AAEC4D89CF650C * ___value0, const RuntimeMethod* method);
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.Recognizer::recognizer_canceled_set_callback(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,Microsoft.CognitiveServices.Speech.Internal.CallbackFunctionDelegate,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Recognizer_recognizer_canceled_set_callback_mC5295B5F4B2ED3207AB92D2DAA94B229509EDE60 (InteropSafeHandle_tF14E3AD32AC904F5E38F4FAC0ED46417062386C6 * ___recoHandle0, CallbackFunctionDelegate_tEDE2A24857EFCB03EE502D1E6E8A9E977030EAC4 * ___callback1, intptr_t ___context2, const RuntimeMethod* method);
// System.Void Microsoft.CognitiveServices.Speech.SpeechRecognizer::add__Canceled(System.EventHandler`1<Microsoft.CognitiveServices.Speech.SpeechRecognitionCanceledEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpeechRecognizer_add__Canceled_m5E772F5E6AEFF1CD22296B9C9C4FC9B2A34FAC24 (SpeechRecognizer_tD9F66F83FE18A3C87986B87E9108997AC919BF2A * __this, EventHandler_1_t69FC758E917DED0BD7F1732BE32EAE11D78B8D50 * ___value0, const RuntimeMethod* method);
// System.Void Microsoft.CognitiveServices.Speech.SpeechRecognizer::remove__Canceled(System.EventHandler`1<Microsoft.CognitiveServices.Speech.SpeechRecognitionCanceledEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpeechRecognizer_remove__Canceled_m27D7B44B127DC397623ECB5C380134E21AEA72EC (SpeechRecognizer_tD9F66F83FE18A3C87986B87E9108997AC919BF2A * __this, EventHandler_1_t69FC758E917DED0BD7F1732BE32EAE11D78B8D50 * ___value0, const RuntimeMethod* method);
// System.Void Microsoft.CognitiveServices.Speech.Recognizer/GetRecognizerFromConfigDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GetRecognizerFromConfigDelegate__ctor_m1D7851683A3D41399DB7BC5B6F36E32ABEBF62FC (GetRecognizerFromConfigDelegate_t2DC882A03ECDF618A982ED55B82B4ED3D829FACC * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle Microsoft.CognitiveServices.Speech.Recognizer::FromConfig(Microsoft.CognitiveServices.Speech.Recognizer/GetRecognizerFromConfigDelegate,Microsoft.CognitiveServices.Speech.SpeechConfig)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InteropSafeHandle_tF14E3AD32AC904F5E38F4FAC0ED46417062386C6 * Recognizer_FromConfig_m60791AE2ACE591729B360D7615035FF13CAFBBF7 (GetRecognizerFromConfigDelegate_t2DC882A03ECDF618A982ED55B82B4ED3D829FACC * ___fromConfig0, SpeechConfig_tB1A7AD16A9CDE287A706780CBD6F22AAA64A9E11 * ___speechConfig1, const RuntimeMethod* method);
// System.Void Microsoft.CognitiveServices.Speech.SpeechRecognizer::.ctor(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpeechRecognizer__ctor_m030946A0C9CCF1B50A039FA14805EB86D9937720 (SpeechRecognizer_tD9F66F83FE18A3C87986B87E9108997AC919BF2A * __this, InteropSafeHandle_tF14E3AD32AC904F5E38F4FAC0ED46417062386C6 * ___recoHandle0, const RuntimeMethod* method);
// System.Void Microsoft.CognitiveServices.Speech.Recognizer::.ctor(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Recognizer__ctor_m5707D0C68E07B4A737C753DDBA817377F0CDDF5E (Recognizer_tF1FAA5F9E223C619151C5DA96D83F0AF7E3C9E3E * __this, InteropSafeHandle_tF14E3AD32AC904F5E38F4FAC0ED46417062386C6 * ___recoPtr0, const RuntimeMethod* method);
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.Recognizer::recognizer_get_property_bag(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,System.IntPtr&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Recognizer_recognizer_get_property_bag_m52747647E843FD151DC9CFC39C0B3A32D58979F1 (InteropSafeHandle_tF14E3AD32AC904F5E38F4FAC0ED46417062386C6 * ___recoHandle0, intptr_t* ___propbag1, const RuntimeMethod* method);
// System.Void Microsoft.CognitiveServices.Speech.SpeechRecognizer::set_Properties(Microsoft.CognitiveServices.Speech.PropertyCollection)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SpeechRecognizer_set_Properties_mF2118E137B1726D1BE3D31AF54617D3F6C79035A_inline (SpeechRecognizer_tD9F66F83FE18A3C87986B87E9108997AC919BF2A * __this, PropertyCollection_tD6D50793A0684647D5C7067381E1365EDB3AA920 * ___value0, const RuntimeMethod* method);
// System.Void System.Action::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action__ctor_m07BE5EE8A629FBBA52AE6356D57A0D371BE2574B (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Threading.Tasks.Task System.Threading.Tasks.Task::Run(System.Action)
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * Task_Run_m77F41B8D89AFD69BE94888BC2CAD5E3183A79B8D (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___action0, const RuntimeMethod* method);
// System.Void Microsoft.CognitiveServices.Speech.Recognizer::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Recognizer_Finalize_m20F81169F675CE0A27215591F1330A8853F916F8 (Recognizer_tF1FAA5F9E223C619151C5DA96D83F0AF7E3C9E3E * __this, const RuntimeMethod* method);
// Microsoft.CognitiveServices.Speech.PropertyCollection Microsoft.CognitiveServices.Speech.SpeechRecognizer::get_Properties()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR PropertyCollection_tD6D50793A0684647D5C7067381E1365EDB3AA920 * SpeechRecognizer_get_Properties_mBA0F85A8988F7921955F690761443143B7563EB3_inline (SpeechRecognizer_tD9F66F83FE18A3C87986B87E9108997AC919BF2A * __this, const RuntimeMethod* method);
// System.Void Microsoft.CognitiveServices.Speech.Recognizer::Dispose(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Recognizer_Dispose_m087FE4E3ED875BD3BF69DA66606404145E3C0400 (Recognizer_tF1FAA5F9E223C619151C5DA96D83F0AF7E3C9E3E * __this, bool ___disposing0, const RuntimeMethod* method);
// T Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle::GetObjectFromWeakHandle<Microsoft.CognitiveServices.Speech.SpeechRecognizer>(System.IntPtr)
inline SpeechRecognizer_tD9F66F83FE18A3C87986B87E9108997AC919BF2A * InteropSafeHandle_GetObjectFromWeakHandle_TisSpeechRecognizer_tD9F66F83FE18A3C87986B87E9108997AC919BF2A_m456BCCB36FEDED91604F737E001380DEFBB9C88E (intptr_t ___nativeHandle0, const RuntimeMethod* method)
{
	return ((  SpeechRecognizer_tD9F66F83FE18A3C87986B87E9108997AC919BF2A * (*) (intptr_t, const RuntimeMethod*))InteropSafeHandle_GetObjectFromWeakHandle_TisRuntimeObject_m60EE452D893D270806684844360185D119FFB8E5_gshared)(___nativeHandle0, method);
}
// System.Void System.EventHandler`1<Microsoft.CognitiveServices.Speech.SpeechRecognitionEventArgs>::Invoke(System.Object,!0)
inline void EventHandler_1_Invoke_m34AF820A20D06B154B42AC2C4A2F47B68DFD69BD (EventHandler_1_tAD0C572F17FD1D8D2AAADAE630AAEC4D89CF650C * __this, RuntimeObject * ___sender0, SpeechRecognitionEventArgs_t1FB7CC9C07684BA7F03F63DF226A306D7C5F2CEA * ___e1, const RuntimeMethod* method)
{
	((  void (*) (EventHandler_1_tAD0C572F17FD1D8D2AAADAE630AAEC4D89CF650C *, RuntimeObject *, SpeechRecognitionEventArgs_t1FB7CC9C07684BA7F03F63DF226A306D7C5F2CEA *, const RuntimeMethod*))EventHandler_1_Invoke_mEAFD7F9E52E7DF356F3C4F0262BCFBA7769C83C0_gshared)(__this, ___sender0, ___e1, method);
}
// System.Void Microsoft.CognitiveServices.Speech.SpeechRecognitionCanceledEventArgs::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpeechRecognitionCanceledEventArgs__ctor_mF09633F429C647ABCD7928A8568E3FFC4BB4854A (SpeechRecognitionCanceledEventArgs_t35423FB7DA329C4D5CC9ED0B255C55C72F06E97C * __this, intptr_t ___eventHandlePtr0, const RuntimeMethod* method);
// System.Void System.EventHandler`1<Microsoft.CognitiveServices.Speech.SpeechRecognitionCanceledEventArgs>::Invoke(System.Object,!0)
inline void EventHandler_1_Invoke_m7D90141E3EF5FC6FD8B48B74B3E2249262CBA76E (EventHandler_1_t69FC758E917DED0BD7F1732BE32EAE11D78B8D50 * __this, RuntimeObject * ___sender0, SpeechRecognitionCanceledEventArgs_t35423FB7DA329C4D5CC9ED0B255C55C72F06E97C * ___e1, const RuntimeMethod* method)
{
	((  void (*) (EventHandler_1_t69FC758E917DED0BD7F1732BE32EAE11D78B8D50 *, RuntimeObject *, SpeechRecognitionCanceledEventArgs_t35423FB7DA329C4D5CC9ED0B255C55C72F06E97C *, const RuntimeMethod*))EventHandler_1_Invoke_mEAFD7F9E52E7DF356F3C4F0262BCFBA7769C83C0_gshared)(__this, ___sender0, ___e1, method);
}
// System.Void Microsoft.CognitiveServices.Speech.Recognizer::DoAsyncRecognitionAction(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Recognizer_DoAsyncRecognitionAction_m2268106F48438234958D981F40C8036136AFD5CF (Recognizer_tF1FAA5F9E223C619151C5DA96D83F0AF7E3C9E3E * __this, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___recoImplAction0, const RuntimeMethod* method);
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.SpeechTranslationConfig::speech_translation_config_from_subscription(System.IntPtr&,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t SpeechTranslationConfig_speech_translation_config_from_subscription_mFE0B7FFDFDA728CA2144AACCD1AA1069A9612C2B (intptr_t* ___config0, String_t* ___subscriptionKey1, String_t* ___region2, const RuntimeMethod* method);
// System.Void Microsoft.CognitiveServices.Speech.SpeechTranslationConfig::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpeechTranslationConfig__ctor_m69FF967879A65C258D38700C4B5BC4B7458C309B (SpeechTranslationConfig_tFBB58FC53E2E75766C94D604CEF28A14CE72E90D * __this, intptr_t ___configPtr0, const RuntimeMethod* method);
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.SpeechTranslationConfig::speech_translation_config_add_target_language(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t SpeechTranslationConfig_speech_translation_config_add_target_language_mC6E21CF2A9D4149054774D48C7BE7DA84FBDA0BE (InteropSafeHandle_tF14E3AD32AC904F5E38F4FAC0ED46417062386C6 * ___config0, String_t* ___language1, const RuntimeMethod* method);
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.SpxError::error_get_message(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t SpxError_error_get_message_mB89C50717DBBE7DD5748A3A4A3C1F94A2E73EAD3 (intptr_t ___errorHandle0, const RuntimeMethod* method);
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.SpxError::error_get_error_code(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t SpxError_error_get_error_code_m30AEFABD1655FE32BAC77F0EB19AA74D6F24A10B (intptr_t ___errorHandle0, const RuntimeMethod* method);
// System.Int32 System.IntPtr::op_Explicit(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t IntPtr_op_Explicit_m9C2CBDF65A4D7B2C0DCF4D38A4174A2CC07A18E3 (intptr_t ___value0, const RuntimeMethod* method);
// System.Int32 System.IntPtr::ToInt32()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t IntPtr_ToInt32_m94C1C0E438A3B7E040B0A087FDDC0D4F90BABB08 (intptr_t* __this, const RuntimeMethod* method);
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.SpxError::error_release(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t SpxError_error_release_mCA135AF50E067E9909E8FF41CEBEBC311DAA8E73 (intptr_t ___errorHandle0, const RuntimeMethod* method);
// System.IntPtr System.IntPtr::op_Explicit(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t IntPtr_op_Explicit_m9092E57CE669E7B9CCDCF5ADD6DFB758D6545FBF (int32_t ___value0, const RuntimeMethod* method);
// System.Int32 Microsoft.CognitiveServices.Speech.Internal.SpxError::GetErrorCode(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SpxError_GetErrorCode_mA5D665FA8B9709452893CBDF4FF2D324C1F113B4 (intptr_t ___errorHandle0, const RuntimeMethod* method);
// System.String Microsoft.CognitiveServices.Speech.Internal.SpxError::GetMessage(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SpxError_GetMessage_mAE69502CC76A217D2802B96AE46446F55159F08C (intptr_t ___errorHandle0, const RuntimeMethod* method);
// System.Boolean System.String::IsNullOrWhiteSpace(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_IsNullOrWhiteSpace_m4C4266AE4097F5B61FF72A8D0D083611231B9CA6 (String_t* ___value0, const RuntimeMethod* method);
// System.Globalization.CultureInfo System.Globalization.CultureInfo::get_CurrentCulture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * CultureInfo_get_CurrentCulture_m99E5F5BD20445F2A73F7EA0014A4E783DF3840BB (const RuntimeMethod* method);
// System.String System.Int32::ToString(System.String,System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m246774E1922012AE787EB97743F42CB798B70CD8 (int32_t* __this, String_t* ___format0, RuntimeObject* ___provider1, const RuntimeMethod* method);
// System.String System.String::ToLower(System.Globalization.CultureInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_ToLower_m31AAE50F084C9F7ECE9201944F237D2310C79235 (String_t* __this, CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * ___culture0, const RuntimeMethod* method);
// System.Boolean Microsoft.CognitiveServices.Speech.Internal.SpxError::ReleaseNoThrow(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SpxError_ReleaseNoThrow_m56AF1911B28350AF579AA6A562FAC4DE2D9E1C86 (intptr_t ___errorHandle0, const RuntimeMethod* method);
// System.Void System.ApplicationException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ApplicationException__ctor_mF8E9704C91C2F1912909448E5BABFE9EC61D4E8F (ApplicationException_t8D709C0445A040467C6A632AD7F742B25AB2A407 * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Boolean System.String::IsNullOrEmpty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C (String_t* ___value0, const RuntimeMethod* method);
// System.Void Microsoft.CognitiveServices.Speech.Internal.SpxError::Release(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpxError_Release_m8A4610A24E3E7CC631AB6B937A23D75D690368CA (intptr_t ___errorHandle0, const RuntimeMethod* method);
// System.IntPtr System.Runtime.InteropServices.Marshal::AllocHGlobal(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Marshal_AllocHGlobal_mED1B623D229DB8FAB58D187E4E73D3DA2E8AE6EC (int32_t ___cb0, const RuntimeMethod* method);
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.SpxFactory/GetResultDelegate::Invoke(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,System.IntPtr,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t GetResultDelegate_Invoke_m266129DD98B4319DC07D86FC58634BD716A09913 (GetResultDelegate_tCE5D8A1E9C3A30C92902692A8F1576D09D4DCDE3 * __this, InteropSafeHandle_tF14E3AD32AC904F5E38F4FAC0ED46417062386C6 * ___handle0, intptr_t ___result1, uint32_t ___maxCharCount2, const RuntimeMethod* method);
// System.Void Microsoft.CognitiveServices.Speech.Translation.TranslationRecognitionEventArgs::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TranslationRecognitionEventArgs__ctor_mE538F958D191E2A0ABAA76F0B10516C08846DD52 (TranslationRecognitionEventArgs_t9801CC0D44EB6958FE731328096A8220591EB9E2 * __this, intptr_t ___eventHandlePtr0, const RuntimeMethod* method);
// Microsoft.CognitiveServices.Speech.Translation.TranslationRecognitionResult Microsoft.CognitiveServices.Speech.Translation.TranslationRecognitionEventArgs::get_Result()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TranslationRecognitionResult_tAF699D9A902DCE03B21D08BD562FE08544A089AD * TranslationRecognitionEventArgs_get_Result_mCD02FCF6C3C49D1B6288D1BDA24F06BEF2322F41_inline (TranslationRecognitionEventArgs_t9801CC0D44EB6958FE731328096A8220591EB9E2 * __this, const RuntimeMethod* method);
// Microsoft.CognitiveServices.Speech.CancellationReason Microsoft.CognitiveServices.Speech.Translation.TranslationRecognitionCanceledEventArgs::get_Reason()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t TranslationRecognitionCanceledEventArgs_get_Reason_m94F2A97E7FD6DD5B61DCDC9B305CD41D9432C318_inline (TranslationRecognitionCanceledEventArgs_tF8364DAABB1345D5D552BC9161B2681056902434 * __this, const RuntimeMethod* method);
// Microsoft.CognitiveServices.Speech.CancellationErrorCode Microsoft.CognitiveServices.Speech.Translation.TranslationRecognitionCanceledEventArgs::get_ErrorCode()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t TranslationRecognitionCanceledEventArgs_get_ErrorCode_mDC791691BE24A75B18707DCAE11FDDB9A0CC2559_inline (TranslationRecognitionCanceledEventArgs_tF8364DAABB1345D5D552BC9161B2681056902434 * __this, const RuntimeMethod* method);
// System.Void Microsoft.CognitiveServices.Speech.Translation.TranslationRecognitionResult::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TranslationRecognitionResult__ctor_m7DE44365A4CDD91182EAFBB15C5A09851BF9518A (TranslationRecognitionResult_tAF699D9A902DCE03B21D08BD562FE08544A089AD * __this, intptr_t ___resultPtr0, const RuntimeMethod* method);
// System.Void Microsoft.CognitiveServices.Speech.Translation.TranslationRecognitionResult::GetTranslationTexts()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TranslationRecognitionResult_GetTranslationTexts_m8089C12281F2780B76AE5F52A7E56E722AE4D314 (TranslationRecognitionResult_tAF699D9A902DCE03B21D08BD562FE08544A089AD * __this, const RuntimeMethod* method);
// System.String System.String::Format(System.IFormatProvider,System.String,System.Object,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mC888813A47B8AC105F0CA58D45D5B7B748E1A68B (RuntimeObject* ___provider0, String_t* ___format1, RuntimeObject * ___arg02, RuntimeObject * ___arg13, RuntimeObject * ___arg24, const RuntimeMethod* method);
// System.Collections.Generic.IReadOnlyDictionary`2<System.String,System.String> Microsoft.CognitiveServices.Speech.Translation.TranslationRecognitionResult::get_Translations()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* TranslationRecognitionResult_get_Translations_mFE7B704863AE1DFA972D7EBB13671D4D907ABE53_inline (TranslationRecognitionResult_tAF699D9A902DCE03B21D08BD562FE08544A089AD * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.KeyValuePair`2<System.String,System.String>::get_Key()
inline String_t* KeyValuePair_2_get_Key_m42802FFFC275E928911F87B16DFE504319DF58F1_inline (KeyValuePair_2_tE863694F1DB1F441CAE5A282829BDB941B2DEEBC * __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (KeyValuePair_2_tE863694F1DB1F441CAE5A282829BDB941B2DEEBC *, const RuntimeMethod*))KeyValuePair_2_get_Key_mCAD7B121DB998D7C56EB0281215A860EFE9DCD95_gshared_inline)(__this, method);
}
// !1 System.Collections.Generic.KeyValuePair`2<System.String,System.String>::get_Value()
inline String_t* KeyValuePair_2_get_Value_mB6B24D3920A4744624F8ED9AE493783D0E5F81DD_inline (KeyValuePair_2_tE863694F1DB1F441CAE5A282829BDB941B2DEEBC * __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (KeyValuePair_2_tE863694F1DB1F441CAE5A282829BDB941B2DEEBC *, const RuntimeMethod*))KeyValuePair_2_get_Value_m622223593F7461E7812C581DDB145270016ED303_gshared_inline)(__this, method);
}
// System.String System.String::Concat(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mFEA7EFA1A6E75B96B1B7BC4526AAC864BFF83CC9 (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___values0, const RuntimeMethod* method);
// System.Boolean Microsoft.CognitiveServices.Speech.Internal.RecognitionResult::recognizer_result_handle_is_valid(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RecognitionResult_recognizer_result_handle_is_valid_mF7E78F30BD9373F5F3F4AEC1827F014FEEDDF062 (InteropSafeHandle_tF14E3AD32AC904F5E38F4FAC0ED46417062386C6 * ___result0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::.ctor()
inline void Dictionary_2__ctor_mA6747E78BD4DF1D09D9091C1B3EBAE0FDB200666 (Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 *, const RuntimeMethod*))Dictionary_2__ctor_m2C8EE5C13636D67F6C451C4935049F534AEC658F_gshared)(__this, method);
}
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.RecognitionResult::translation_text_result_get_translation_text_buffer_header(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,System.IntPtr,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t RecognitionResult_translation_text_result_get_translation_text_buffer_header_m836D5B5E0B1882639EF9E75125664188D7484BCF (InteropSafeHandle_tF14E3AD32AC904F5E38F4FAC0ED46417062386C6 * ___handle0, intptr_t ___translationResultBuffer1, int32_t* ___lengthPointer2, const RuntimeMethod* method);
// System.IntPtr System.Runtime.InteropServices.Marshal::ReadIntPtr(System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Marshal_ReadIntPtr_mD346139A9C1580DC394446F749B49BD4E06FDA5F (intptr_t ___ptr0, int32_t ___ofs1, const RuntimeMethod* method);
// System.Void Microsoft.CognitiveServices.Speech.Internal.SpxExceptionThrower::ThrowIfFalse(System.Boolean,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpxExceptionThrower_ThrowIfFalse_mEE1FF4BD7BB68A39220E0A1F7EB210DD4E88B79F (bool ___item0, int32_t ___error1, const RuntimeMethod* method);
// System.Int32 System.IntPtr::get_Size()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t IntPtr_get_Size_mD8038A1C440DE87E685F4D879DC80A6704D9C77B (const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::set_Item(!0,!1)
inline void Dictionary_2_set_Item_m31C41E4FE938066440DAFD1E667C2F3986549668 (Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * __this, String_t* ___key0, String_t* ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 *, String_t*, String_t*, const RuntimeMethod*))Dictionary_2_set_Item_mE6BF870B04922441F9F2760E782DEE6EE682615A_gshared)(__this, ___key0, ___value1, method);
}
// System.Void Microsoft.CognitiveServices.Speech.Translation.TranslationRecognizer::FireEvent_Recognizing(System.IntPtr,System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TranslationRecognizer_FireEvent_Recognizing_mB199DD38F12DAD9246DD6B677A2E74490B49A52F (intptr_t ___hreco0, intptr_t ___hevent1, intptr_t ___pvContext2, const RuntimeMethod* method);
// System.Void Microsoft.CognitiveServices.Speech.Translation.TranslationRecognizer::FireEvent_Recognized(System.IntPtr,System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TranslationRecognizer_FireEvent_Recognized_mDDE062FC556E989A6D9524FEDD5CB998F3B7283A (intptr_t ___hreco0, intptr_t ___hevent1, intptr_t ___pvContext2, const RuntimeMethod* method);
// System.Void Microsoft.CognitiveServices.Speech.Translation.TranslationRecognizer::FireEvent_Canceled(System.IntPtr,System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TranslationRecognizer_FireEvent_Canceled_m07E5C0FDE0F3C15AE7DA029B15FAB7D3B20DEBA2 (intptr_t ___hreco0, intptr_t ___hevent1, intptr_t ___pvContext2, const RuntimeMethod* method);
// System.Void Microsoft.CognitiveServices.Speech.Translation.TranslationRecognizer::FireEvent_SynthesisResult(System.IntPtr,System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TranslationRecognizer_FireEvent_SynthesisResult_mCE224C9BBD6BD727940FA60C9E032A92A4B3CB80 (intptr_t ___hreco0, intptr_t ___hevent1, intptr_t ___pvContext2, const RuntimeMethod* method);
// System.Void Microsoft.CognitiveServices.Speech.Translation.TranslationRecognizer::add__Recognizing(System.EventHandler`1<Microsoft.CognitiveServices.Speech.Translation.TranslationRecognitionEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TranslationRecognizer_add__Recognizing_mAF65D8FC77E7A5C0A41FC9D0A26DEE67272F1254 (TranslationRecognizer_t5E2EA28023083A645CA9CB77906834987C4C9BFC * __this, EventHandler_1_t0304893ABC1043DC90AF47CDE2ACD2D6DB2B7487 * ___value0, const RuntimeMethod* method);
// System.Void Microsoft.CognitiveServices.Speech.Translation.TranslationRecognizer::remove__Recognizing(System.EventHandler`1<Microsoft.CognitiveServices.Speech.Translation.TranslationRecognitionEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TranslationRecognizer_remove__Recognizing_m4D0BFE4BE97DF87F8DCC5E7707DE43C464AFBF1E (TranslationRecognizer_t5E2EA28023083A645CA9CB77906834987C4C9BFC * __this, EventHandler_1_t0304893ABC1043DC90AF47CDE2ACD2D6DB2B7487 * ___value0, const RuntimeMethod* method);
// System.Void Microsoft.CognitiveServices.Speech.Translation.TranslationRecognizer::add__Recognized(System.EventHandler`1<Microsoft.CognitiveServices.Speech.Translation.TranslationRecognitionEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TranslationRecognizer_add__Recognized_m88F0D2B211CB1FB63A4488006301EA054F839A1A (TranslationRecognizer_t5E2EA28023083A645CA9CB77906834987C4C9BFC * __this, EventHandler_1_t0304893ABC1043DC90AF47CDE2ACD2D6DB2B7487 * ___value0, const RuntimeMethod* method);
// System.Void Microsoft.CognitiveServices.Speech.Translation.TranslationRecognizer::remove__Recognized(System.EventHandler`1<Microsoft.CognitiveServices.Speech.Translation.TranslationRecognitionEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TranslationRecognizer_remove__Recognized_m90BC367941B41038250A67CBD727D2C25BFB6A6C (TranslationRecognizer_t5E2EA28023083A645CA9CB77906834987C4C9BFC * __this, EventHandler_1_t0304893ABC1043DC90AF47CDE2ACD2D6DB2B7487 * ___value0, const RuntimeMethod* method);
// System.Void Microsoft.CognitiveServices.Speech.Translation.TranslationRecognizer::add__Canceled(System.EventHandler`1<Microsoft.CognitiveServices.Speech.Translation.TranslationRecognitionCanceledEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TranslationRecognizer_add__Canceled_m85B57C3A1EEFCED2ECC7DFE669DB36D185801416 (TranslationRecognizer_t5E2EA28023083A645CA9CB77906834987C4C9BFC * __this, EventHandler_1_t7D8AF3CB447F4C1AA3E3A0C2ABF74030E97A10FC * ___value0, const RuntimeMethod* method);
// System.Void Microsoft.CognitiveServices.Speech.Translation.TranslationRecognizer::remove__Canceled(System.EventHandler`1<Microsoft.CognitiveServices.Speech.Translation.TranslationRecognitionCanceledEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TranslationRecognizer_remove__Canceled_m9C623054339BE0D96462B81AD3D3668949EA0AD9 (TranslationRecognizer_t5E2EA28023083A645CA9CB77906834987C4C9BFC * __this, EventHandler_1_t7D8AF3CB447F4C1AA3E3A0C2ABF74030E97A10FC * ___value0, const RuntimeMethod* method);
// System.Void Microsoft.CognitiveServices.Speech.Translation.TranslationRecognizer::.ctor(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TranslationRecognizer__ctor_m82F3D2B19A6FF788428C76193132BA4E8B8F3D8D (TranslationRecognizer_t5E2EA28023083A645CA9CB77906834987C4C9BFC * __this, InteropSafeHandle_tF14E3AD32AC904F5E38F4FAC0ED46417062386C6 * ___recoHandle0, const RuntimeMethod* method);
// System.Void Microsoft.CognitiveServices.Speech.Translation.TranslationRecognizer::set_Properties(Microsoft.CognitiveServices.Speech.PropertyCollection)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TranslationRecognizer_set_Properties_mA93EEDAC48C7C7A2B3DC40A1B24E27DC0AF096D5_inline (TranslationRecognizer_t5E2EA28023083A645CA9CB77906834987C4C9BFC * __this, PropertyCollection_tD6D50793A0684647D5C7067381E1365EDB3AA920 * ___value0, const RuntimeMethod* method);
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.Recognizer::translator_synthesizing_audio_set_callback(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,Microsoft.CognitiveServices.Speech.Internal.CallbackFunctionDelegate,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Recognizer_translator_synthesizing_audio_set_callback_m315338525553FEB680E20BCF2DB26D5542C432F6 (InteropSafeHandle_tF14E3AD32AC904F5E38F4FAC0ED46417062386C6 * ___recoHandle0, CallbackFunctionDelegate_tEDE2A24857EFCB03EE502D1E6E8A9E977030EAC4 * ___callback1, intptr_t ___context2, const RuntimeMethod* method);
// Microsoft.CognitiveServices.Speech.PropertyCollection Microsoft.CognitiveServices.Speech.Translation.TranslationRecognizer::get_Properties()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR PropertyCollection_tD6D50793A0684647D5C7067381E1365EDB3AA920 * TranslationRecognizer_get_Properties_m05C6F57DF448914BF3B79B835985CAB57E05A845_inline (TranslationRecognizer_t5E2EA28023083A645CA9CB77906834987C4C9BFC * __this, const RuntimeMethod* method);
// T Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle::GetObjectFromWeakHandle<Microsoft.CognitiveServices.Speech.Translation.TranslationRecognizer>(System.IntPtr)
inline TranslationRecognizer_t5E2EA28023083A645CA9CB77906834987C4C9BFC * InteropSafeHandle_GetObjectFromWeakHandle_TisTranslationRecognizer_t5E2EA28023083A645CA9CB77906834987C4C9BFC_mD509A25F82BB62B50340FD5A38BA5CEC1E6E87AB (intptr_t ___nativeHandle0, const RuntimeMethod* method)
{
	return ((  TranslationRecognizer_t5E2EA28023083A645CA9CB77906834987C4C9BFC * (*) (intptr_t, const RuntimeMethod*))InteropSafeHandle_GetObjectFromWeakHandle_TisRuntimeObject_m60EE452D893D270806684844360185D119FFB8E5_gshared)(___nativeHandle0, method);
}
// System.Void System.EventHandler`1<Microsoft.CognitiveServices.Speech.Translation.TranslationRecognitionEventArgs>::Invoke(System.Object,!0)
inline void EventHandler_1_Invoke_m737581193400ABBF01056D8B1A25FBA1CFE9698E (EventHandler_1_t0304893ABC1043DC90AF47CDE2ACD2D6DB2B7487 * __this, RuntimeObject * ___sender0, TranslationRecognitionEventArgs_t9801CC0D44EB6958FE731328096A8220591EB9E2 * ___e1, const RuntimeMethod* method)
{
	((  void (*) (EventHandler_1_t0304893ABC1043DC90AF47CDE2ACD2D6DB2B7487 *, RuntimeObject *, TranslationRecognitionEventArgs_t9801CC0D44EB6958FE731328096A8220591EB9E2 *, const RuntimeMethod*))EventHandler_1_Invoke_mEAFD7F9E52E7DF356F3C4F0262BCFBA7769C83C0_gshared)(__this, ___sender0, ___e1, method);
}
// System.Void Microsoft.CognitiveServices.Speech.Translation.TranslationRecognitionCanceledEventArgs::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TranslationRecognitionCanceledEventArgs__ctor_m232ECE91C247E37F521EB16C1C0D6F83242D712E (TranslationRecognitionCanceledEventArgs_tF8364DAABB1345D5D552BC9161B2681056902434 * __this, intptr_t ___eventHandlePtr0, const RuntimeMethod* method);
// System.Void System.EventHandler`1<Microsoft.CognitiveServices.Speech.Translation.TranslationRecognitionCanceledEventArgs>::Invoke(System.Object,!0)
inline void EventHandler_1_Invoke_m543D7CD4DFE3F387FE31D570F06284F268EA3E65 (EventHandler_1_t7D8AF3CB447F4C1AA3E3A0C2ABF74030E97A10FC * __this, RuntimeObject * ___sender0, TranslationRecognitionCanceledEventArgs_tF8364DAABB1345D5D552BC9161B2681056902434 * ___e1, const RuntimeMethod* method)
{
	((  void (*) (EventHandler_1_t7D8AF3CB447F4C1AA3E3A0C2ABF74030E97A10FC *, RuntimeObject *, TranslationRecognitionCanceledEventArgs_tF8364DAABB1345D5D552BC9161B2681056902434 *, const RuntimeMethod*))EventHandler_1_Invoke_mEAFD7F9E52E7DF356F3C4F0262BCFBA7769C83C0_gshared)(__this, ___sender0, ___e1, method);
}
// System.Void Microsoft.CognitiveServices.Speech.Translation.TranslationSynthesisEventArgs::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TranslationSynthesisEventArgs__ctor_m4074DC4145DFBC5CEA391A5F19A4F2923D620323 (TranslationSynthesisEventArgs_t975B943C527D3EB226F627E98ACDC396F0ECDD36 * __this, intptr_t ___eventHandlePtr0, const RuntimeMethod* method);
// System.Void System.EventHandler`1<Microsoft.CognitiveServices.Speech.Translation.TranslationSynthesisEventArgs>::Invoke(System.Object,!0)
inline void EventHandler_1_Invoke_m8062F2814E8CB7B00CA23C1A82B331E1738EDCE5 (EventHandler_1_t3BEF748549CB01FA6B642C4A136FCCE2948599FF * __this, RuntimeObject * ___sender0, TranslationSynthesisEventArgs_t975B943C527D3EB226F627E98ACDC396F0ECDD36 * ___e1, const RuntimeMethod* method)
{
	((  void (*) (EventHandler_1_t3BEF748549CB01FA6B642C4A136FCCE2948599FF *, RuntimeObject *, TranslationSynthesisEventArgs_t975B943C527D3EB226F627E98ACDC396F0ECDD36 *, const RuntimeMethod*))EventHandler_1_Invoke_mEAFD7F9E52E7DF356F3C4F0262BCFBA7769C83C0_gshared)(__this, ___sender0, ___e1, method);
}
// System.Void Microsoft.CognitiveServices.Speech.Translation.TranslationSynthesisResult::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TranslationSynthesisResult__ctor_mE3EAA81170394CEC3F96EC51CD627DCCAB73BFE9 (TranslationSynthesisResult_t243554A291C3C9A4349B5A0F15AFD7B984E944EE * __this, intptr_t ___resultPtr0, const RuntimeMethod* method);
// Microsoft.CognitiveServices.Speech.Translation.TranslationSynthesisResult Microsoft.CognitiveServices.Speech.Translation.TranslationSynthesisEventArgs::get_Result()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TranslationSynthesisResult_t243554A291C3C9A4349B5A0F15AFD7B984E944EE * TranslationSynthesisEventArgs_get_Result_mDB3D5F4D8AED490B08C9AAA14947499BEC7AFBD9_inline (TranslationSynthesisEventArgs_t975B943C527D3EB226F627E98ACDC396F0ECDD36 * __this, const RuntimeMethod* method);
// !!0[] System.Array::Empty<System.Byte>()
inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* Array_Empty_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_m86406577D438B78D85E03BECFDC8AB3C7696A1E7_inline (const RuntimeMethod* method)
{
	return ((  ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* (*) (const RuntimeMethod*))Array_Empty_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_m86406577D438B78D85E03BECFDC8AB3C7696A1E7_gshared_inline)(method);
}
// System.Void Microsoft.CognitiveServices.Speech.Translation.TranslationSynthesisResult::GetAudioData(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TranslationSynthesisResult_GetAudioData_m24E5A8CD2E73B2361238C220CE64BCB588611CC4 (TranslationSynthesisResult_t243554A291C3C9A4349B5A0F15AFD7B984E944EE * __this, InteropSafeHandle_tF14E3AD32AC904F5E38F4FAC0ED46417062386C6 * ___resultHandle0, const RuntimeMethod* method);
// Microsoft.CognitiveServices.Speech.ResultReason Microsoft.CognitiveServices.Speech.Translation.TranslationSynthesisResult::get_Reason()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t TranslationSynthesisResult_get_Reason_mFDC37352957A9BB0B79CE705DB24CAC5AEC39AF7_inline (TranslationSynthesisResult_t243554A291C3C9A4349B5A0F15AFD7B984E944EE * __this, const RuntimeMethod* method);
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.RecognitionResult::translation_synthesis_result_get_audio_data(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,System.IntPtr,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t RecognitionResult_translation_synthesis_result_get_audio_data_mFF0760AF3D2F8409841252FD33179D53E25CF4B9 (InteropSafeHandle_tF14E3AD32AC904F5E38F4FAC0ED46417062386C6 * ___handle0, intptr_t ___audioBuffer1, int32_t* ___lengthPointer2, const RuntimeMethod* method);
// System.Void System.Runtime.InteropServices.Marshal::Copy(System.IntPtr,System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Marshal_Copy_m057A8067BF7212A361510EA26B24022990A07AC0 (intptr_t ___source0, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___destination1, int32_t ___startIndex2, int32_t ___length3, const RuntimeMethod* method);
// System.IntPtr System.IntPtr::op_Addition(System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t IntPtr_op_Addition_mEACE2385C17C1DDB2FCCBAF7DB5D585144C53BBD (intptr_t ___pointer0, int32_t ___offset1, const RuntimeMethod* method);
// System.Byte System.Runtime.InteropServices.Marshal::ReadByte(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t Marshal_ReadByte_m86777C2D6B99630D8A034AF784C5B5944B3EAB0C (intptr_t ___ptr0, const RuntimeMethod* method);
// System.Void System.ArgumentException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m2D35EAD113C2ADC99EB17B940A2097A93FD23EFC (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * __this, String_t* ___message0, const RuntimeMethod* method);
// System.String Microsoft.CognitiveServices.Speech.Internal.Utf8StringMarshaler::MarshalNativeToManaged(System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Utf8StringMarshaler_MarshalNativeToManaged_m6969DAD0B884E1303F4D827C689B57890274E3B2 (intptr_t ___native0, int32_t ___lengthInBytes1, const RuntimeMethod* method);
// System.Text.Encoding System.Text.Encoding::get_UTF8()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * Encoding_get_UTF8_mC877FB3137BBD566AEE7B15F9BF61DC4EF8F5E5E (const RuntimeMethod* method);
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.Utf8StringMarshaler::MarshalManagedToNative(System.String,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Utf8StringMarshaler_MarshalManagedToNative_m17FC3A91B217C0AEB7B33A5488E6FDC6E637E5FD (String_t* ___str0, int32_t* ___length1, const RuntimeMethod* method);
// System.Void System.Runtime.InteropServices.Marshal::Copy(System.Byte[],System.Int32,System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Marshal_Copy_m05D5F5A9F9BA4C1B748AAE7266B3C0E9D9EE2012 (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___source0, int32_t ___startIndex1, intptr_t ___destination2, int32_t ___length3, const RuntimeMethod* method);
// System.Void System.Runtime.InteropServices.Marshal::WriteByte(System.IntPtr,System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Marshal_WriteByte_m764AA42DF08AA6DF06578369D7CA8000BD939E23 (intptr_t ___ptr0, uint8_t ___val1, const RuntimeMethod* method);
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_Microsoft_CognitiveServices_Speech_core_INTERNAL
IL2CPP_EXTERN_C intptr_t STDCALL result_get_reason_canceled(void*, int32_t*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_Microsoft_CognitiveServices_Speech_core_INTERNAL
IL2CPP_EXTERN_C intptr_t STDCALL result_get_canceled_error_code(void*, int32_t*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_Microsoft_CognitiveServices_Speech_core_INTERNAL
IL2CPP_EXTERN_C void STDCALL diagnostics_log_trace_string(int32_t, char*, char*, int32_t, char*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_Microsoft_CognitiveServices_Speech_core_INTERNAL
IL2CPP_EXTERN_C intptr_t STDCALL recognizer_event_handle_release(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_Microsoft_CognitiveServices_Speech_core_INTERNAL
IL2CPP_EXTERN_C intptr_t STDCALL property_bag_set_string(void*, int32_t, intptr_t, intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_Microsoft_CognitiveServices_Speech_core_INTERNAL
IL2CPP_EXTERN_C intptr_t STDCALL property_bag_get_string(void*, int32_t, intptr_t, intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_Microsoft_CognitiveServices_Speech_core_INTERNAL
IL2CPP_EXTERN_C intptr_t STDCALL property_bag_free_string(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_Microsoft_CognitiveServices_Speech_core_INTERNAL
IL2CPP_EXTERN_C intptr_t STDCALL property_bag_release(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_Microsoft_CognitiveServices_Speech_core_INTERNAL
IL2CPP_EXTERN_C intptr_t STDCALL result_get_reason(void*, int32_t*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_Microsoft_CognitiveServices_Speech_core_INTERNAL
IL2CPP_EXTERN_C intptr_t STDCALL result_get_result_id(void*, intptr_t, uint32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_Microsoft_CognitiveServices_Speech_core_INTERNAL
IL2CPP_EXTERN_C intptr_t STDCALL result_get_text(void*, intptr_t, uint32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_Microsoft_CognitiveServices_Speech_core_INTERNAL
IL2CPP_EXTERN_C intptr_t STDCALL result_get_property_bag(void*, intptr_t*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_Microsoft_CognitiveServices_Speech_core_INTERNAL
IL2CPP_EXTERN_C int32_t STDCALL recognizer_result_handle_is_valid(void*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_Microsoft_CognitiveServices_Speech_core_INTERNAL
IL2CPP_EXTERN_C intptr_t STDCALL recognizer_result_handle_release(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_Microsoft_CognitiveServices_Speech_core_INTERNAL
IL2CPP_EXTERN_C intptr_t STDCALL translation_text_result_get_translation_text_buffer_header(void*, intptr_t, int32_t*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_Microsoft_CognitiveServices_Speech_core_INTERNAL
IL2CPP_EXTERN_C intptr_t STDCALL translation_synthesis_result_get_audio_data(void*, intptr_t, int32_t*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_Microsoft_CognitiveServices_Speech_core_INTERNAL
IL2CPP_EXTERN_C intptr_t STDCALL recognizer_get_property_bag(void*, intptr_t*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_Microsoft_CognitiveServices_Speech_core_INTERNAL
IL2CPP_EXTERN_C intptr_t STDCALL recognizer_handle_release(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_Microsoft_CognitiveServices_Speech_core_INTERNAL
IL2CPP_EXTERN_C intptr_t STDCALL recognizer_start_continuous_recognition_async(void*, intptr_t*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_Microsoft_CognitiveServices_Speech_core_INTERNAL
IL2CPP_EXTERN_C intptr_t STDCALL recognizer_start_continuous_recognition_async_wait_for(intptr_t, uint32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_Microsoft_CognitiveServices_Speech_core_INTERNAL
IL2CPP_EXTERN_C intptr_t STDCALL recognizer_stop_continuous_recognition_async(void*, intptr_t*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_Microsoft_CognitiveServices_Speech_core_INTERNAL
IL2CPP_EXTERN_C intptr_t STDCALL recognizer_stop_continuous_recognition_async_wait_for(intptr_t, uint32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_Microsoft_CognitiveServices_Speech_core_INTERNAL
IL2CPP_EXTERN_C intptr_t STDCALL recognizer_async_handle_release(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_Microsoft_CognitiveServices_Speech_core_INTERNAL
IL2CPP_EXTERN_C intptr_t STDCALL recognizer_recognition_event_get_offset(void*, uint64_t*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_Microsoft_CognitiveServices_Speech_core_INTERNAL
IL2CPP_EXTERN_C intptr_t STDCALL recognizer_session_event_get_session_id(void*, intptr_t, uint32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_Microsoft_CognitiveServices_Speech_core_INTERNAL
IL2CPP_EXTERN_C intptr_t STDCALL recognizer_recognition_event_get_result(void*, intptr_t*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_Microsoft_CognitiveServices_Speech_core_INTERNAL
IL2CPP_EXTERN_C intptr_t STDCALL recognizer_session_started_set_callback(void*, Il2CppMethodPointer, intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_Microsoft_CognitiveServices_Speech_core_INTERNAL
IL2CPP_EXTERN_C intptr_t STDCALL recognizer_session_stopped_set_callback(void*, Il2CppMethodPointer, intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_Microsoft_CognitiveServices_Speech_core_INTERNAL
IL2CPP_EXTERN_C intptr_t STDCALL recognizer_speech_start_detected_set_callback(void*, Il2CppMethodPointer, intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_Microsoft_CognitiveServices_Speech_core_INTERNAL
IL2CPP_EXTERN_C intptr_t STDCALL recognizer_speech_end_detected_set_callback(void*, Il2CppMethodPointer, intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_Microsoft_CognitiveServices_Speech_core_INTERNAL
IL2CPP_EXTERN_C intptr_t STDCALL recognizer_recognizing_set_callback(void*, Il2CppMethodPointer, intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_Microsoft_CognitiveServices_Speech_core_INTERNAL
IL2CPP_EXTERN_C intptr_t STDCALL recognizer_recognized_set_callback(void*, Il2CppMethodPointer, intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_Microsoft_CognitiveServices_Speech_core_INTERNAL
IL2CPP_EXTERN_C intptr_t STDCALL recognizer_canceled_set_callback(void*, Il2CppMethodPointer, intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_Microsoft_CognitiveServices_Speech_core_INTERNAL
IL2CPP_EXTERN_C intptr_t STDCALL translator_synthesizing_audio_set_callback(void*, Il2CppMethodPointer, intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_Microsoft_CognitiveServices_Speech_core_INTERNAL
IL2CPP_EXTERN_C intptr_t STDCALL speech_config_from_subscription(intptr_t*, char*, char*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_Microsoft_CognitiveServices_Speech_core_INTERNAL
IL2CPP_EXTERN_C intptr_t STDCALL speech_config_release(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_Microsoft_CognitiveServices_Speech_core_INTERNAL
IL2CPP_EXTERN_C intptr_t STDCALL speech_config_get_property_bag(void*, intptr_t*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_Microsoft_CognitiveServices_Speech_core_INTERNAL
IL2CPP_EXTERN_C intptr_t STDCALL speech_translation_config_from_subscription(intptr_t*, char*, char*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_Microsoft_CognitiveServices_Speech_core_INTERNAL
IL2CPP_EXTERN_C intptr_t STDCALL speech_translation_config_add_target_language(void*, char*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_Microsoft_CognitiveServices_Speech_core_INTERNAL
IL2CPP_EXTERN_C intptr_t STDCALL error_get_message(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_Microsoft_CognitiveServices_Speech_core_INTERNAL
IL2CPP_EXTERN_C intptr_t STDCALL error_get_error_code(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_Microsoft_CognitiveServices_Speech_core_INTERNAL
IL2CPP_EXTERN_C intptr_t STDCALL error_release(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_Microsoft_CognitiveServices_Speech_core_INTERNAL
IL2CPP_EXTERN_C intptr_t STDCALL recognizer_create_speech_recognizer_from_config(intptr_t*, void*, void*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_Microsoft_CognitiveServices_Speech_core_INTERNAL
IL2CPP_EXTERN_C intptr_t STDCALL recognizer_create_translation_recognizer_from_config(intptr_t*, void*, void*);
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
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_CallbackFunctionDelegate_tEDE2A24857EFCB03EE502D1E6E8A9E977030EAC4 (CallbackFunctionDelegate_tEDE2A24857EFCB03EE502D1E6E8A9E977030EAC4 * __this, intptr_t ___hreco0, intptr_t ___hevent1, intptr_t ___context2, const RuntimeMethod* method)
{
	typedef void (CDECL *PInvokeFunc)(intptr_t, intptr_t, intptr_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((RuntimeDelegate*)__this)->method->nativeFunction);

	// Native function invocation
	il2cppPInvokeFunc(___hreco0, ___hevent1, ___context2);

}
// System.Void Microsoft.CognitiveServices.Speech.Internal.CallbackFunctionDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CallbackFunctionDelegate__ctor_m34250E2B4EB599FB96576EC76B41BA44F32482AB (CallbackFunctionDelegate_tEDE2A24857EFCB03EE502D1E6E8A9E977030EAC4 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void Microsoft.CognitiveServices.Speech.Internal.CallbackFunctionDelegate::Invoke(System.IntPtr,System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CallbackFunctionDelegate_Invoke_m501C49800C8A0C75DA6BF2EEBC5D59DD90FEAB7F (CallbackFunctionDelegate_tEDE2A24857EFCB03EE502D1E6E8A9E977030EAC4 * __this, intptr_t ___hreco0, intptr_t ___hevent1, intptr_t ___context2, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 3)
			{
				// open
				typedef void (*FunctionPointerType) (intptr_t, intptr_t, intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___hreco0, ___hevent1, ___context2, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, intptr_t, intptr_t, intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___hreco0, ___hevent1, ___context2, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker3< intptr_t, intptr_t, intptr_t >::Invoke(targetMethod, targetThis, ___hreco0, ___hevent1, ___context2);
					else
						GenericVirtActionInvoker3< intptr_t, intptr_t, intptr_t >::Invoke(targetMethod, targetThis, ___hreco0, ___hevent1, ___context2);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker3< intptr_t, intptr_t, intptr_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___hreco0, ___hevent1, ___context2);
					else
						VirtActionInvoker3< intptr_t, intptr_t, intptr_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___hreco0, ___hevent1, ___context2);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, intptr_t, intptr_t, intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___hreco0, ___hevent1, ___context2, targetMethod);
			}
		}
	}
}
// System.IAsyncResult Microsoft.CognitiveServices.Speech.Internal.CallbackFunctionDelegate::BeginInvoke(System.IntPtr,System.IntPtr,System.IntPtr,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CallbackFunctionDelegate_BeginInvoke_m9C1D9AA45ADF55BC28D184D33DE3CB7E7C0B8879 (CallbackFunctionDelegate_tEDE2A24857EFCB03EE502D1E6E8A9E977030EAC4 * __this, intptr_t ___hreco0, intptr_t ___hevent1, intptr_t ___context2, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback3, RuntimeObject * ___object4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[4] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___hreco0);
	__d_args[1] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___hevent1);
	__d_args[2] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___context2);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback3, (RuntimeObject*)___object4);;
}
// System.Void Microsoft.CognitiveServices.Speech.Internal.CallbackFunctionDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CallbackFunctionDelegate_EndInvoke_mC821E2106A14A66EB3FB5E320F0DF81841BA458E (CallbackFunctionDelegate_tEDE2A24857EFCB03EE502D1E6E8A9E977030EAC4 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Microsoft.CognitiveServices.Speech.CancellationDetails Microsoft.CognitiveServices.Speech.CancellationDetails::FromResult(Microsoft.CognitiveServices.Speech.RecognitionResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CancellationDetails_t5D21A89C2CF88AB86DE6EF822F1DBF0FF3F678C9 * CancellationDetails_FromResult_m4EB7D4D34AD85ACD568A2598EA91D0122D5DB718 (RecognitionResult_t29D2A304D192BFB246AB9E91297B54B2EB44DA06 * ___result0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CancellationDetails_t5D21A89C2CF88AB86DE6EF822F1DBF0FF3F678C9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RecognitionResult_t29D2A304D192BFB246AB9E91297B54B2EB44DA06 * L_0 = ___result0;
		CancellationDetails_t5D21A89C2CF88AB86DE6EF822F1DBF0FF3F678C9 * L_1 = (CancellationDetails_t5D21A89C2CF88AB86DE6EF822F1DBF0FF3F678C9 *)il2cpp_codegen_object_new(CancellationDetails_t5D21A89C2CF88AB86DE6EF822F1DBF0FF3F678C9_il2cpp_TypeInfo_var);
		CancellationDetails__ctor_m03B6FD790EE0ADF4D46D724E5B59FA224385663B(L_1, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.CancellationDetails::.ctor(Microsoft.CognitiveServices.Speech.RecognitionResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CancellationDetails__ctor_m03B6FD790EE0ADF4D46D724E5B59FA224385663B (CancellationDetails_t5D21A89C2CF88AB86DE6EF822F1DBF0FF3F678C9 * __this, RecognitionResult_t29D2A304D192BFB246AB9E91297B54B2EB44DA06 * ___result0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF28770BAFF3BD72A14677B13D79FE1286316B04C);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		RecognitionResult_t29D2A304D192BFB246AB9E91297B54B2EB44DA06 * L_0 = ___result0;
		SpxExceptionThrower_ThrowIfNull_mC54EA71790A454E5785FC15C4FFBB6F457E772DB(L_0, (String_t*)NULL, /*hidden argument*/NULL);
		RecognitionResult_t29D2A304D192BFB246AB9E91297B54B2EB44DA06 * L_1 = ___result0;
		__this->set_recognitionResult_3(L_1);
		RecognitionResult_t29D2A304D192BFB246AB9E91297B54B2EB44DA06 * L_2 = __this->get_recognitionResult_3();
		NullCheck(L_2);
		InteropSafeHandle_tF14E3AD32AC904F5E38F4FAC0ED46417062386C6 * L_3 = L_2->get_resultHandle_4();
		SpxExceptionThrower_ThrowIfNull_mC54EA71790A454E5785FC15C4FFBB6F457E772DB(L_3, _stringLiteralF28770BAFF3BD72A14677B13D79FE1286316B04C, /*hidden argument*/NULL);
		RecognitionResult_t29D2A304D192BFB246AB9E91297B54B2EB44DA06 * L_4 = __this->get_recognitionResult_3();
		NullCheck(L_4);
		InteropSafeHandle_tF14E3AD32AC904F5E38F4FAC0ED46417062386C6 * L_5 = L_4->get_resultHandle_4();
		intptr_t L_6;
		L_6 = CancellationDetails_result_get_reason_canceled_m9DC6EAB40632EE1093689D38550E39CEBF2B27AD(L_5, (int32_t*)(&V_0), /*hidden argument*/NULL);
		SpxExceptionThrower_ThrowIfFail_m7269610C68DA4D960FE5E6208DF1BD9282C8F2DA((intptr_t)L_6, /*hidden argument*/NULL);
		int32_t L_7 = V_0;
		CancellationDetails_set_Reason_m6585C2DF7D2BF59B5FC062DF5258F079399CFE01_inline(__this, L_7, /*hidden argument*/NULL);
		RecognitionResult_t29D2A304D192BFB246AB9E91297B54B2EB44DA06 * L_8 = __this->get_recognitionResult_3();
		NullCheck(L_8);
		InteropSafeHandle_tF14E3AD32AC904F5E38F4FAC0ED46417062386C6 * L_9 = L_8->get_resultHandle_4();
		intptr_t L_10;
		L_10 = CancellationDetails_result_get_canceled_error_code_m426BD4822127A22E7176EBDB01020D9C27900CD2(L_9, (int32_t*)(&V_1), /*hidden argument*/NULL);
		SpxExceptionThrower_ThrowIfFail_m7269610C68DA4D960FE5E6208DF1BD9282C8F2DA((intptr_t)L_10, /*hidden argument*/NULL);
		int32_t L_11 = V_1;
		CancellationDetails_set_ErrorCode_mDC39567210408C52117E39FAD3930C916DA94F86_inline(__this, L_11, /*hidden argument*/NULL);
		RecognitionResult_t29D2A304D192BFB246AB9E91297B54B2EB44DA06 * L_12 = __this->get_recognitionResult_3();
		NullCheck(L_12);
		PropertyCollection_tD6D50793A0684647D5C7067381E1365EDB3AA920 * L_13;
		L_13 = VirtFuncInvoker0< PropertyCollection_tD6D50793A0684647D5C7067381E1365EDB3AA920 * >::Invoke(7 /* Microsoft.CognitiveServices.Speech.PropertyCollection Microsoft.CognitiveServices.Speech.RecognitionResult::get_Properties() */, L_12);
		NullCheck(L_13);
		String_t* L_14;
		L_14 = VirtFuncInvoker1< String_t*, int32_t >::Invoke(5 /* System.String Microsoft.CognitiveServices.Speech.PropertyCollection::GetProperty(Microsoft.CognitiveServices.Speech.PropertyId) */, L_13, ((int32_t)5001));
		CancellationDetails_set_ErrorDetails_mC97095A39BD0DB39495A59E1081EB3026F2BE140_inline(__this, L_14, /*hidden argument*/NULL);
		return;
	}
}
// Microsoft.CognitiveServices.Speech.CancellationReason Microsoft.CognitiveServices.Speech.CancellationDetails::get_Reason()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CancellationDetails_get_Reason_mEBCBE5F14B176F5574F4A4D6CBB2F3719CC51BA4 (CancellationDetails_t5D21A89C2CF88AB86DE6EF822F1DBF0FF3F678C9 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CReasonU3Ek__BackingField_0();
		return L_0;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.CancellationDetails::set_Reason(Microsoft.CognitiveServices.Speech.CancellationReason)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CancellationDetails_set_Reason_m6585C2DF7D2BF59B5FC062DF5258F079399CFE01 (CancellationDetails_t5D21A89C2CF88AB86DE6EF822F1DBF0FF3F678C9 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CReasonU3Ek__BackingField_0(L_0);
		return;
	}
}
// Microsoft.CognitiveServices.Speech.CancellationErrorCode Microsoft.CognitiveServices.Speech.CancellationDetails::get_ErrorCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CancellationDetails_get_ErrorCode_m86467B87546D6D75FF69D6190773F9F84CD94D98 (CancellationDetails_t5D21A89C2CF88AB86DE6EF822F1DBF0FF3F678C9 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CErrorCodeU3Ek__BackingField_1();
		return L_0;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.CancellationDetails::set_ErrorCode(Microsoft.CognitiveServices.Speech.CancellationErrorCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CancellationDetails_set_ErrorCode_mDC39567210408C52117E39FAD3930C916DA94F86 (CancellationDetails_t5D21A89C2CF88AB86DE6EF822F1DBF0FF3F678C9 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CErrorCodeU3Ek__BackingField_1(L_0);
		return;
	}
}
// System.String Microsoft.CognitiveServices.Speech.CancellationDetails::get_ErrorDetails()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* CancellationDetails_get_ErrorDetails_m1BD08DCFD99497ADB4E6C05D337488538941B384 (CancellationDetails_t5D21A89C2CF88AB86DE6EF822F1DBF0FF3F678C9 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_U3CErrorDetailsU3Ek__BackingField_2();
		return L_0;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.CancellationDetails::set_ErrorDetails(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CancellationDetails_set_ErrorDetails_mC97095A39BD0DB39495A59E1081EB3026F2BE140 (CancellationDetails_t5D21A89C2CF88AB86DE6EF822F1DBF0FF3F678C9 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CErrorDetailsU3Ek__BackingField_2(L_0);
		return;
	}
}
// System.String Microsoft.CognitiveServices.Speech.CancellationDetails::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* CancellationDetails_ToString_m7A964C6C0A1527D7786D45DA24ABBA334C6CB337 (CancellationDetails_t5D21A89C2CF88AB86DE6EF822F1DBF0FF3F678C9 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CancellationReason_t11019B124BB3269219C20F71CE36597F73A7E20E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8E8084C52A356BA811825A26D2A68087D1EE1AE6);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_il2cpp_TypeInfo_var);
		CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * L_0;
		L_0 = CultureInfo_get_InvariantCulture_m9FAAFAF8A00091EE1FCB7098AD3F163ECDF02164(/*hidden argument*/NULL);
		int32_t L_1;
		L_1 = CancellationDetails_get_Reason_mEBCBE5F14B176F5574F4A4D6CBB2F3719CC51BA4_inline(__this, /*hidden argument*/NULL);
		int32_t L_2 = L_1;
		RuntimeObject * L_3 = Box(CancellationReason_t11019B124BB3269219C20F71CE36597F73A7E20E_il2cpp_TypeInfo_var, &L_2);
		String_t* L_4;
		L_4 = CancellationDetails_get_ErrorDetails_m1BD08DCFD99497ADB4E6C05D337488538941B384_inline(__this, /*hidden argument*/NULL);
		String_t* L_5;
		L_5 = String_Format_m8892FAD3E9F1E11E6176840DC1EA0C40DF1F0C2B(L_0, _stringLiteral8E8084C52A356BA811825A26D2A68087D1EE1AE6, L_3, L_4, /*hidden argument*/NULL);
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
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.CancellationDetails::result_get_reason_canceled(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,Microsoft.CognitiveServices.Speech.CancellationReason&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t CancellationDetails_result_get_reason_canceled_m9DC6EAB40632EE1093689D38550E39CEBF2B27AD (InteropSafeHandle_tF14E3AD32AC904F5E38F4FAC0ED46417062386C6 * ___result0, int32_t* ___reason1, const RuntimeMethod* method)
{
	typedef intptr_t (STDCALL *PInvokeFunc) (void*, int32_t*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_Microsoft_CognitiveServices_Speech_core_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(int32_t*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("Microsoft.CognitiveServices.Speech.core.dll"), "result_get_reason_canceled", IL2CPP_CALL_STDCALL, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___result0' to native representation
	void* ____result0_marshaled = NULL;
	if (___result0 == NULL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_null_exception("result"), NULL);
	bool ___safeHandle_reference_incremented_for____result0 = false;
	SafeHandle_DangerousAddRef_mC65F001DAB84BADED6EA18B339BEA78962B978DB(___result0, (&___safeHandle_reference_incremented_for____result0), NULL);
	____result0_marshaled = reinterpret_cast<void*>((___result0)->get_handle_0());

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_Microsoft_CognitiveServices_Speech_core_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(result_get_reason_canceled)(____result0_marshaled, ___reason1);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(____result0_marshaled, ___reason1);
	#endif

	// Marshaling cleanup of parameter '___result0' native representation
	if (___safeHandle_reference_incremented_for____result0)
	{
		SafeHandle_DangerousRelease_mD38F583FAFD30A50547FAA163FBE3C1D466174D4(___result0, NULL);
	}

	return returnValue;
}
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.CancellationDetails::result_get_canceled_error_code(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,Microsoft.CognitiveServices.Speech.CancellationErrorCode&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t CancellationDetails_result_get_canceled_error_code_m426BD4822127A22E7176EBDB01020D9C27900CD2 (InteropSafeHandle_tF14E3AD32AC904F5E38F4FAC0ED46417062386C6 * ___result0, int32_t* ___errorCode1, const RuntimeMethod* method)
{
	typedef intptr_t (STDCALL *PInvokeFunc) (void*, int32_t*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_Microsoft_CognitiveServices_Speech_core_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(int32_t*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("Microsoft.CognitiveServices.Speech.core.dll"), "result_get_canceled_error_code", IL2CPP_CALL_STDCALL, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___result0' to native representation
	void* ____result0_marshaled = NULL;
	if (___result0 == NULL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_null_exception("result"), NULL);
	bool ___safeHandle_reference_incremented_for____result0 = false;
	SafeHandle_DangerousAddRef_mC65F001DAB84BADED6EA18B339BEA78962B978DB(___result0, (&___safeHandle_reference_incremented_for____result0), NULL);
	____result0_marshaled = reinterpret_cast<void*>((___result0)->get_handle_0());

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_Microsoft_CognitiveServices_Speech_core_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(result_get_canceled_error_code)(____result0_marshaled, ___errorCode1);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(____result0_marshaled, ___errorCode1);
	#endif

	// Marshaling cleanup of parameter '___result0' native representation
	if (___safeHandle_reference_incremented_for____result0)
	{
		SafeHandle_DangerousRelease_mD38F583FAFD30A50547FAA163FBE3C1D466174D4(___result0, NULL);
	}

	return returnValue;
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
// System.Object[] Microsoft.CognitiveServices.Speech.Internal.Diagnostics::Args(System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* Diagnostics_Args_m37BBD997F110D90D939A75BC082C8A09EBF5C20C (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args0, const RuntimeMethod* method)
{
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_0 = ___args0;
		return L_0;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.Internal.Diagnostics::SPX_TRACE_VERBOSE(System.String,System.Int32,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Diagnostics_SPX_TRACE_VERBOSE_mC8FE10F8F57265211C7A31D049321F461DF90400 (String_t* ___message0, int32_t ___line1, String_t* ___caller2, String_t* ___file3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___message0;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1;
		L_1 = Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_inline(/*hidden argument*/Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_RuntimeMethod_var);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_2;
		L_2 = Diagnostics_Args_m37BBD997F110D90D939A75BC082C8A09EBF5C20C(L_1, /*hidden argument*/NULL);
		int32_t L_3 = ___line1;
		String_t* L_4 = ___caller2;
		String_t* L_5 = ___file3;
		Diagnostics_SPX_TRACE_VERBOSE_m30E8360DBDD81703DC7247D7BE842D5F32A63E0A(L_0, L_2, L_3, L_4, L_5, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.Internal.Diagnostics::SPX_TRACE_VERBOSE(System.String,System.Object[],System.Int32,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Diagnostics_SPX_TRACE_VERBOSE_m30E8360DBDD81703DC7247D7BE842D5F32A63E0A (String_t* ___format0, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args1, int32_t ___line2, String_t* ___caller3, String_t* ___file4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF5276AA6769ABD877AC10339C332B2ECF5459404);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		String_t* L_0 = ___format0;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1 = ___args1;
		String_t* L_2;
		L_2 = String_Format_mCED6767EA5FEE6F15ABCD5B4F9150D1284C2795B(L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		String_t* L_3 = ___file4;
		int32_t L_4 = ___line2;
		String_t* L_5 = V_0;
		DiagnosticsInterop_diagnostics_log_trace_string_mE2604DBBEC420974FEAACBA1C9D62FFF408A60E5(((int32_t)16), _stringLiteralF5276AA6769ABD877AC10339C332B2ECF5459404, L_3, L_4, L_5, /*hidden argument*/NULL);
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
// System.Void Microsoft.CognitiveServices.Speech.Internal.DiagnosticsInterop::diagnostics_log_trace_string(System.Int32,System.String,System.String,System.Int32,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DiagnosticsInterop_diagnostics_log_trace_string_mE2604DBBEC420974FEAACBA1C9D62FFF408A60E5 (int32_t ___level0, String_t* ___title1, String_t* ___fileName2, int32_t ___lineNumber3, String_t* ___message4, const RuntimeMethod* method)
{
	typedef void (STDCALL *PInvokeFunc) (int32_t, char*, char*, int32_t, char*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_Microsoft_CognitiveServices_Speech_core_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(int32_t) + sizeof(char*) + sizeof(char*) + sizeof(int32_t) + sizeof(char*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("Microsoft.CognitiveServices.Speech.core.dll"), "diagnostics_log_trace_string", IL2CPP_CALL_STDCALL, CHARSET_ANSI, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___title1' to native representation
	char* ____title1_marshaled = NULL;
	____title1_marshaled = il2cpp_codegen_marshal_string(___title1);

	// Marshaling of parameter '___fileName2' to native representation
	char* ____fileName2_marshaled = NULL;
	____fileName2_marshaled = il2cpp_codegen_marshal_string(___fileName2);

	// Marshaling of parameter '___message4' to native representation
	char* ____message4_marshaled = NULL;
	____message4_marshaled = il2cpp_codegen_marshal_string(___message4);

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_Microsoft_CognitiveServices_Speech_core_INTERNAL
	reinterpret_cast<PInvokeFunc>(diagnostics_log_trace_string)(___level0, ____title1_marshaled, ____fileName2_marshaled, ___lineNumber3, ____message4_marshaled);
	#else
	il2cppPInvokeFunc(___level0, ____title1_marshaled, ____fileName2_marshaled, ___lineNumber3, ____message4_marshaled);
	#endif

	// Marshaling cleanup of parameter '___title1' native representation
	il2cpp_codegen_marshal_free(____title1_marshaled);
	____title1_marshaled = NULL;

	// Marshaling cleanup of parameter '___fileName2' native representation
	il2cpp_codegen_marshal_free(____fileName2_marshaled);
	____fileName2_marshaled = NULL;

	// Marshaling cleanup of parameter '___message4' native representation
	il2cpp_codegen_marshal_free(____message4_marshaled);
	____message4_marshaled = NULL;

}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.EventArgs::recognizer_event_handle_release(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t EventArgs_recognizer_event_handle_release_m3D3A3B06F35570BE6EE52F14267BC94EFDCD4F7B (intptr_t ___eventHandle0, const RuntimeMethod* method)
{
	typedef intptr_t (STDCALL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_Microsoft_CognitiveServices_Speech_core_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("Microsoft.CognitiveServices.Speech.core.dll"), "recognizer_event_handle_release", IL2CPP_CALL_STDCALL, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_Microsoft_CognitiveServices_Speech_core_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(recognizer_event_handle_release)(___eventHandle0);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(___eventHandle0);
	#endif

	return returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  intptr_t DelegatePInvokeWrapper_HandleRelease_t981DDC9B764758F8D9EAE886A7255AC109F86E59 (HandleRelease_t981DDC9B764758F8D9EAE886A7255AC109F86E59 * __this, intptr_t ___hresult0, const RuntimeMethod* method)
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc)(intptr_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((RuntimeDelegate*)__this)->method->nativeFunction);

	// Native function invocation
	intptr_t returnValue = il2cppPInvokeFunc(___hresult0);

	return returnValue;
}
// System.Void Microsoft.CognitiveServices.Speech.Internal.HandleRelease::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandleRelease__ctor_m033F205B7379518DCCF337635EAC5AAC9B2A42E9 (HandleRelease_t981DDC9B764758F8D9EAE886A7255AC109F86E59 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.HandleRelease::Invoke(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t HandleRelease_Invoke_m9C512BECA3AC902349BAB0C2394147051701C473 (HandleRelease_t981DDC9B764758F8D9EAE886A7255AC109F86E59 * __this, intptr_t ___hresult0, const RuntimeMethod* method)
{
	intptr_t result;
	memset((&result), 0, sizeof(result));
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 1)
			{
				// open
				typedef intptr_t (*FunctionPointerType) (intptr_t, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___hresult0, targetMethod);
			}
			else
			{
				// closed
				typedef intptr_t (*FunctionPointerType) (void*, intptr_t, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___hresult0, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = GenericInterfaceFuncInvoker1< intptr_t, intptr_t >::Invoke(targetMethod, targetThis, ___hresult0);
					else
						result = GenericVirtFuncInvoker1< intptr_t, intptr_t >::Invoke(targetMethod, targetThis, ___hresult0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker1< intptr_t, intptr_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___hresult0);
					else
						result = VirtFuncInvoker1< intptr_t, intptr_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___hresult0);
				}
			}
			else
			{
				typedef intptr_t (*FunctionPointerType) (void*, intptr_t, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___hresult0, targetMethod);
			}
		}
	}
	return result;
}
// System.IAsyncResult Microsoft.CognitiveServices.Speech.Internal.HandleRelease::BeginInvoke(System.IntPtr,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* HandleRelease_BeginInvoke_m5D734617039DD379F6CC83437F7D3CF2E7F56270 (HandleRelease_t981DDC9B764758F8D9EAE886A7255AC109F86E59 * __this, intptr_t ___hresult0, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___hresult0);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);;
}
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.HandleRelease::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t HandleRelease_EndInvoke_m0B26DA7E4B2A0EF61297A32ACFBB4C7F149B0C1F (HandleRelease_t981DDC9B764758F8D9EAE886A7255AC109F86E59 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return *(intptr_t*)UnBox ((RuntimeObject*)__result);;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle::.ctor(System.IntPtr,Microsoft.CognitiveServices.Speech.Internal.HandleRelease)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InteropSafeHandle__ctor_mEEBFD93E8F421872BAE76137A07486B9BBD3D156 (InteropSafeHandle_tF14E3AD32AC904F5E38F4FAC0ED46417062386C6 * __this, intptr_t ___handle0, HandleRelease_t981DDC9B764758F8D9EAE886A7255AC109F86E59 * ___releaseHandle1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		SafeHandle__ctor_m30896EE9F6765AB918312A413BFA0349482C681C(__this, (intptr_t)(0), (bool)1, /*hidden argument*/NULL);
		HandleRelease_t981DDC9B764758F8D9EAE886A7255AC109F86E59 * L_0 = ___releaseHandle1;
		__this->set_releaseHandleFunc_6(L_0);
		intptr_t L_1 = ___handle0;
		SafeHandle_SetHandle_m3727BDA5C26E0220FA7BBE73C9E662774F5F1664_inline(__this, (intptr_t)L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle::get_IsInvalid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InteropSafeHandle_get_IsInvalid_m9FC49868EDA0F0630E1BE420E75AB00192916B87 (InteropSafeHandle_tF14E3AD32AC904F5E38F4FAC0ED46417062386C6 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		intptr_t L_0 = ((SafeHandle_tC07DCA2CABF6988953342757EFB1547363E5A36B *)__this)->get_handle_0();
		bool L_1;
		L_1 = IntPtr_op_Equality_mD94F3FE43A65684EFF984A7B95E70D2520C0AC73((intptr_t)L_0, (intptr_t)(0), /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0024;
		}
	}
	{
		intptr_t L_2 = ((SafeHandle_tC07DCA2CABF6988953342757EFB1547363E5A36B *)__this)->get_handle_0();
		intptr_t L_3;
		memset((&L_3), 0, sizeof(L_3));
		IntPtr__ctor_m45FB8E0F6CB286B157BBBE5CF5B586E9E66F1097((&L_3), (-1), /*hidden argument*/NULL);
		bool L_4;
		L_4 = IntPtr_op_Equality_mD94F3FE43A65684EFF984A7B95E70D2520C0AC73((intptr_t)L_2, (intptr_t)L_3, /*hidden argument*/NULL);
		return L_4;
	}

IL_0024:
	{
		return (bool)1;
	}
}
// System.Boolean Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle::ReleaseHandle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InteropSafeHandle_ReleaseHandle_m7F33298C481FA9CA13417524742FB52F32C605F0 (InteropSafeHandle_tF14E3AD32AC904F5E38F4FAC0ED46417062386C6 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		HandleRelease_t981DDC9B764758F8D9EAE886A7255AC109F86E59 * L_0 = __this->get_releaseHandleFunc_6();
		if (!L_0)
		{
			goto IL_0030;
		}
	}
	{
		HandleRelease_t981DDC9B764758F8D9EAE886A7255AC109F86E59 * L_1 = __this->get_releaseHandleFunc_6();
		intptr_t L_2 = ((SafeHandle_tC07DCA2CABF6988953342757EFB1547363E5A36B *)__this)->get_handle_0();
		NullCheck(L_1);
		intptr_t L_3;
		L_3 = HandleRelease_Invoke_m9C512BECA3AC902349BAB0C2394147051701C473(L_1, (intptr_t)L_2, /*hidden argument*/NULL);
		SpxExceptionThrower_LogErrorIfFail_m752E6CB197597DAD0613E0AA21841F7EFD46D624((intptr_t)L_3, /*hidden argument*/NULL);
		__this->set_releaseHandleFunc_6((HandleRelease_t981DDC9B764758F8D9EAE886A7255AC109F86E59 *)NULL);
		((SafeHandle_tC07DCA2CABF6988953342757EFB1547363E5A36B *)__this)->set_handle_0((intptr_t)(0));
	}

IL_0030:
	{
		return (bool)1;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle::Dispose(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InteropSafeHandle_Dispose_m08B3D27C50197162A1C138BA967B4528977958CA (InteropSafeHandle_tF14E3AD32AC904F5E38F4FAC0ED46417062386C6 * __this, bool ___disposing0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0E113F97D77FF0E45934C610A144C2819DC64A04);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2DAEEF072FFF48537E5ED531F51D87E1CF74D643);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA3E68153B91665DFE1E9EAC88F57E3E2533E594D);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = ___disposing0;
		bool L_1 = L_0;
		RuntimeObject * L_2 = Box(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var, &L_1);
		String_t* L_3;
		L_3 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, __this);
		String_t* L_4;
		L_4 = String_Format_m8D1CB0410C35E052A53AE957C914C841E54BAB66(_stringLiteral2DAEEF072FFF48537E5ED531F51D87E1CF74D643, L_2, L_3, /*hidden argument*/NULL);
		Diagnostics_SPX_TRACE_VERBOSE_mC8FE10F8F57265211C7A31D049321F461DF90400(L_4, ((int32_t)83), _stringLiteral0E113F97D77FF0E45934C610A144C2819DC64A04, _stringLiteralA3E68153B91665DFE1E9EAC88F57E3E2533E594D, /*hidden argument*/NULL);
		bool L_5;
		L_5 = VirtFuncInvoker0< bool >::Invoke(7 /* System.Boolean System.Runtime.InteropServices.SafeHandle::ReleaseHandle() */, __this);
		return;
	}
}
// System.String Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* InteropSafeHandle_ToString_mF461A4025D4B940195524A30750A8E25FA75853B (InteropSafeHandle_tF14E3AD32AC904F5E38F4FAC0ED46417062386C6 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7267B048CEDBB7AD42A5473F09940F2723B4506D);
		s_Il2CppMethodInitialized = true;
	}
	{
		intptr_t* L_0 = ((SafeHandle_tC07DCA2CABF6988953342757EFB1547363E5A36B *)__this)->get_address_of_handle_0();
		String_t* L_1;
		L_1 = IntPtr_ToString_m7CDFDC84936276E62AB76AA238F7571B54DF90B4((intptr_t*)L_0, _stringLiteral7267B048CEDBB7AD42A5473F09940F2723B4506D, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InteropSafeHandle_Finalize_m6628E8CADEC9898829BC194F6236B9D266F6007C (InteropSafeHandle_tF14E3AD32AC904F5E38F4FAC0ED46417062386C6 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3A8100DC94EF854DE676FBF7FAD86E84873F3000);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA3E68153B91665DFE1E9EAC88F57E3E2533E594D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF00BD984FE2440EACF0054D39EEEAE818E9EBB32);
		s_Il2CppMethodInitialized = true;
	}
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;

IL_0000:
	try
	{ // begin try (depth: 1)
		String_t* L_0;
		L_0 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, __this);
		String_t* L_1;
		L_1 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteral3A8100DC94EF854DE676FBF7FAD86E84873F3000, L_0, /*hidden argument*/NULL);
		Diagnostics_SPX_TRACE_VERBOSE_mC8FE10F8F57265211C7A31D049321F461DF90400(L_1, ((int32_t)104), _stringLiteralF00BD984FE2440EACF0054D39EEEAE818E9EBB32, _stringLiteralA3E68153B91665DFE1E9EAC88F57E3E2533E594D, /*hidden argument*/NULL);
		VirtActionInvoker1< bool >::Invoke(6 /* System.Void System.Runtime.InteropServices.SafeHandle::Dispose(System.Boolean) */, __this, (bool)0);
		IL2CPP_LEAVE(0x31, FINALLY_002a);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_002a;
	}

FINALLY_002a:
	{ // begin finally (depth: 1)
		SafeHandle_Finalize_m7241663596A5A5643A4567D349D631CF327BCD47(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(42)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(42)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x31, IL_0031)
	}

IL_0031:
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
// System.Void Microsoft.CognitiveServices.Speech.Internal.MonoPInvokeCallbackAttribute::.ctor(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoPInvokeCallbackAttribute__ctor_mC2B5B7C3A898F2DF9460D323CDC360B796BEC7AA (MonoPInvokeCallbackAttribute_t15B62F0A74DFEE65E3FB194D9F149B3026924A6F * __this, Type_t * ___t0, const RuntimeMethod* method)
{
	{
		Attribute__ctor_m5C1862A7DFC2C25A4797A8C5F681FBB5CB53ECE1(__this, /*hidden argument*/NULL);
		Type_t * L_0 = ___t0;
		__this->set_type_0(L_0);
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
// System.Void Microsoft.CognitiveServices.Speech.PropertyCollection::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertyCollection__ctor_m298675719270993E505A055053F0D23293B517D2 (PropertyCollection_tD6D50793A0684647D5C7067381E1365EDB3AA920 * __this, intptr_t ___propertyBagPtr0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HandleRelease_t981DDC9B764758F8D9EAE886A7255AC109F86E59_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InteropSafeHandle_tF14E3AD32AC904F5E38F4FAC0ED46417062386C6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PropertyCollection_property_bag_release_mAC9096678F4D9B7281A5EECCA5FCD7B794275755_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		intptr_t L_0 = ___propertyBagPtr0;
		bool L_1;
		L_1 = IntPtr_op_Inequality_m212AF0E66AA81FEDC982B1C8A44ADDA24B995EB8((intptr_t)L_0, (intptr_t)(0), /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_002b;
		}
	}
	{
		intptr_t L_2 = ___propertyBagPtr0;
		HandleRelease_t981DDC9B764758F8D9EAE886A7255AC109F86E59 * L_3 = (HandleRelease_t981DDC9B764758F8D9EAE886A7255AC109F86E59 *)il2cpp_codegen_object_new(HandleRelease_t981DDC9B764758F8D9EAE886A7255AC109F86E59_il2cpp_TypeInfo_var);
		HandleRelease__ctor_m033F205B7379518DCCF337635EAC5AAC9B2A42E9(L_3, NULL, (intptr_t)((intptr_t)PropertyCollection_property_bag_release_mAC9096678F4D9B7281A5EECCA5FCD7B794275755_RuntimeMethod_var), /*hidden argument*/NULL);
		InteropSafeHandle_tF14E3AD32AC904F5E38F4FAC0ED46417062386C6 * L_4 = (InteropSafeHandle_tF14E3AD32AC904F5E38F4FAC0ED46417062386C6 *)il2cpp_codegen_object_new(InteropSafeHandle_tF14E3AD32AC904F5E38F4FAC0ED46417062386C6_il2cpp_TypeInfo_var);
		InteropSafeHandle__ctor_mEEBFD93E8F421872BAE76137A07486B9BBD3D156(L_4, (intptr_t)L_2, L_3, /*hidden argument*/NULL);
		__this->set_propbagHandle_0(L_4);
	}

IL_002b:
	{
		return;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.PropertyCollection::Close()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertyCollection_Close_m22F36396E1E74B44AA00267D1081F75ACBB9E09D (PropertyCollection_tD6D50793A0684647D5C7067381E1365EDB3AA920 * __this, const RuntimeMethod* method)
{
	{
		InteropSafeHandle_tF14E3AD32AC904F5E38F4FAC0ED46417062386C6 * L_0 = __this->get_propbagHandle_0();
		NullCheck(L_0);
		SafeHandle_Dispose_mFFFB9D0CAE3EEE02F0D3DA250D5E52F0DD51B098(L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.String Microsoft.CognitiveServices.Speech.PropertyCollection::GetProperty(Microsoft.CognitiveServices.Speech.PropertyId)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* PropertyCollection_GetProperty_m6DBFA6C4953D6B5D1C4959E210A76B9BFA6A6D17 (PropertyCollection_tD6D50793A0684647D5C7067381E1365EDB3AA920 * __this, int32_t ___id0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	{
		InteropSafeHandle_tF14E3AD32AC904F5E38F4FAC0ED46417062386C6 * L_0 = __this->get_propbagHandle_0();
		SpxExceptionThrower_ThrowIfNull_mC54EA71790A454E5785FC15C4FFBB6F457E772DB(L_0, (String_t*)NULL, /*hidden argument*/NULL);
		InteropSafeHandle_tF14E3AD32AC904F5E38F4FAC0ED46417062386C6 * L_1 = __this->get_propbagHandle_0();
		int32_t L_2 = ___id0;
		String_t* L_3;
		L_3 = PropertyCollection_GetPropertyString_m42FE0F1232AE5118B58061A6222B07E5A27D9B54(__this, L_1, L_2, (String_t*)NULL, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, /*hidden argument*/NULL);
		return L_3;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.PropertyCollection::SetProperty(Microsoft.CognitiveServices.Speech.PropertyId,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertyCollection_SetProperty_m8CB653598B175FAF913064E54671C09E74FCC336 (PropertyCollection_tD6D50793A0684647D5C7067381E1365EDB3AA920 * __this, int32_t ___id0, String_t* ___value1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tEBAFAE20369FCB1B38C49C4E27A8D8C2C4B55058_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		InteropSafeHandle_tF14E3AD32AC904F5E38F4FAC0ED46417062386C6 * L_0 = __this->get_propbagHandle_0();
		SpxExceptionThrower_ThrowIfNull_mC54EA71790A454E5785FC15C4FFBB6F457E772DB(L_0, (String_t*)NULL, /*hidden argument*/NULL);
		String_t* L_1 = ___value1;
		intptr_t L_2;
		L_2 = Utf8StringMarshaler_MarshalManagedToNative_m39FF2454E1147C76DAA8342418BA5DB669E98C5F(L_1, /*hidden argument*/NULL);
		V_0 = (intptr_t)L_2;
	}

IL_0013:
	try
	{ // begin try (depth: 1)
		InteropSafeHandle_tF14E3AD32AC904F5E38F4FAC0ED46417062386C6 * L_3 = __this->get_propbagHandle_0();
		int32_t L_4 = ___id0;
		intptr_t L_5 = V_0;
		intptr_t L_6;
		L_6 = PropertyCollection_property_bag_set_string_m9F04396801AECB2614444B52E37ECE43859EDCE3(L_3, L_4, (intptr_t)(0), (intptr_t)L_5, /*hidden argument*/NULL);
		SpxExceptionThrower_ThrowIfFail_m7269610C68DA4D960FE5E6208DF1BD9282C8F2DA((intptr_t)L_6, /*hidden argument*/NULL);
		IL2CPP_LEAVE(0x33, FINALLY_002c);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_002c;
	}

FINALLY_002c:
	{ // begin finally (depth: 1)
		intptr_t L_7 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Marshal_tEBAFAE20369FCB1B38C49C4E27A8D8C2C4B55058_il2cpp_TypeInfo_var);
		Marshal_FreeHGlobal_m53FC4846F5D3106BA25B52C321005C227E424F72((intptr_t)L_7, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(44)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(44)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x33, IL_0033)
	}

IL_0033:
	{
		return;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.PropertyCollection::SetProperty(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertyCollection_SetProperty_mB875B4CF7E0AD52B5E988746EC19DB3CA3B573B6 (PropertyCollection_tD6D50793A0684647D5C7067381E1365EDB3AA920 * __this, String_t* ___propertyName0, String_t* ___value1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tEBAFAE20369FCB1B38C49C4E27A8D8C2C4B55058_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	intptr_t V_1;
	memset((&V_1), 0, sizeof(V_1));
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		InteropSafeHandle_tF14E3AD32AC904F5E38F4FAC0ED46417062386C6 * L_0 = __this->get_propbagHandle_0();
		SpxExceptionThrower_ThrowIfNull_mC54EA71790A454E5785FC15C4FFBB6F457E772DB(L_0, (String_t*)NULL, /*hidden argument*/NULL);
		String_t* L_1 = ___value1;
		intptr_t L_2;
		L_2 = Utf8StringMarshaler_MarshalManagedToNative_m39FF2454E1147C76DAA8342418BA5DB669E98C5F(L_1, /*hidden argument*/NULL);
		V_0 = (intptr_t)L_2;
		String_t* L_3 = ___propertyName0;
		intptr_t L_4;
		L_4 = Utf8StringMarshaler_MarshalManagedToNative_m39FF2454E1147C76DAA8342418BA5DB669E98C5F(L_3, /*hidden argument*/NULL);
		V_1 = (intptr_t)L_4;
	}

IL_001a:
	try
	{ // begin try (depth: 1)
		InteropSafeHandle_tF14E3AD32AC904F5E38F4FAC0ED46417062386C6 * L_5 = __this->get_propbagHandle_0();
		intptr_t L_6 = V_1;
		intptr_t L_7 = V_0;
		intptr_t L_8;
		L_8 = PropertyCollection_property_bag_set_string_m9F04396801AECB2614444B52E37ECE43859EDCE3(L_5, (-1), (intptr_t)L_6, (intptr_t)L_7, /*hidden argument*/NULL);
		SpxExceptionThrower_ThrowIfFail_m7269610C68DA4D960FE5E6208DF1BD9282C8F2DA((intptr_t)L_8, /*hidden argument*/NULL);
		IL2CPP_LEAVE(0x3C, FINALLY_002f);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_002f;
	}

FINALLY_002f:
	{ // begin finally (depth: 1)
		intptr_t L_9 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Marshal_tEBAFAE20369FCB1B38C49C4E27A8D8C2C4B55058_il2cpp_TypeInfo_var);
		Marshal_FreeHGlobal_m53FC4846F5D3106BA25B52C321005C227E424F72((intptr_t)L_9, /*hidden argument*/NULL);
		intptr_t L_10 = V_1;
		Marshal_FreeHGlobal_m53FC4846F5D3106BA25B52C321005C227E424F72((intptr_t)L_10, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(47)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(47)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x3C, IL_003c)
	}

IL_003c:
	{
		return;
	}
}
// System.String Microsoft.CognitiveServices.Speech.PropertyCollection::GetPropertyString(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,System.Int32,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* PropertyCollection_GetPropertyString_m42FE0F1232AE5118B58061A6222B07E5A27D9B54 (PropertyCollection_tD6D50793A0684647D5C7067381E1365EDB3AA920 * __this, InteropSafeHandle_tF14E3AD32AC904F5E38F4FAC0ED46417062386C6 * ___propHandle0, int32_t ___id1, String_t* ___name2, String_t* ___defaultValue3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tEBAFAE20369FCB1B38C49C4E27A8D8C2C4B55058_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	intptr_t V_1;
	memset((&V_1), 0, sizeof(V_1));
	intptr_t V_2;
	memset((&V_2), 0, sizeof(V_2));
	intptr_t V_3;
	memset((&V_3), 0, sizeof(V_3));
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 2> __leave_targets;
	{
		String_t* L_0 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		V_0 = L_0;
		String_t* L_1 = ___name2;
		intptr_t L_2;
		L_2 = Utf8StringMarshaler_MarshalManagedToNative_m39FF2454E1147C76DAA8342418BA5DB669E98C5F(L_1, /*hidden argument*/NULL);
		V_1 = (intptr_t)L_2;
		String_t* L_3 = ___defaultValue3;
		intptr_t L_4;
		L_4 = Utf8StringMarshaler_MarshalManagedToNative_m39FF2454E1147C76DAA8342418BA5DB669E98C5F(L_3, /*hidden argument*/NULL);
		V_2 = (intptr_t)L_4;
	}

IL_0015:
	try
	{ // begin try (depth: 1)
		{
			InteropSafeHandle_tF14E3AD32AC904F5E38F4FAC0ED46417062386C6 * L_5 = ___propHandle0;
			int32_t L_6 = ___id1;
			intptr_t L_7 = V_1;
			intptr_t L_8 = V_2;
			intptr_t L_9;
			L_9 = PropertyCollection_property_bag_get_string_mD72C7BC68AA146B7B28E6D3BA2A34ACA1F3FB0A1(L_5, L_6, (intptr_t)L_7, (intptr_t)L_8, /*hidden argument*/NULL);
			V_3 = (intptr_t)L_9;
			intptr_t L_10 = V_3;
			bool L_11;
			L_11 = IntPtr_op_Inequality_m212AF0E66AA81FEDC982B1C8A44ADDA24B995EB8((intptr_t)L_10, (intptr_t)(0), /*hidden argument*/NULL);
			if (!L_11)
			{
				goto IL_0041;
			}
		}

IL_002c:
		try
		{ // begin try (depth: 2)
			intptr_t L_12 = V_3;
			String_t* L_13;
			L_13 = Utf8StringMarshaler_MarshalNativeToManaged_mE524A0FA5B448795AFBC45096D889A5A647487D8((intptr_t)L_12, /*hidden argument*/NULL);
			V_0 = L_13;
			IL2CPP_LEAVE(0x50, FINALLY_0035);
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t *)e.ex;
			goto FINALLY_0035;
		}

FINALLY_0035:
		{ // begin finally (depth: 2)
			intptr_t L_14 = V_3;
			intptr_t L_15;
			L_15 = PropertyCollection_property_bag_free_string_mEFBE870DE678372D8DA91718476766F7761B5A4B((intptr_t)L_14, /*hidden argument*/NULL);
			SpxExceptionThrower_ThrowIfFail_m7269610C68DA4D960FE5E6208DF1BD9282C8F2DA((intptr_t)L_15, /*hidden argument*/NULL);
			IL2CPP_END_FINALLY(53)
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(53)
		{
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
			IL2CPP_END_CLEANUP(0x50, FINALLY_0043);
		}

IL_0041:
		{
			IL2CPP_LEAVE(0x50, FINALLY_0043);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0043;
	}

FINALLY_0043:
	{ // begin finally (depth: 1)
		intptr_t L_16 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Marshal_tEBAFAE20369FCB1B38C49C4E27A8D8C2C4B55058_il2cpp_TypeInfo_var);
		Marshal_FreeHGlobal_m53FC4846F5D3106BA25B52C321005C227E424F72((intptr_t)L_16, /*hidden argument*/NULL);
		intptr_t L_17 = V_2;
		Marshal_FreeHGlobal_m53FC4846F5D3106BA25B52C321005C227E424F72((intptr_t)L_17, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(67)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(67)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x50, IL_0050)
	}

IL_0050:
	{
		String_t* L_18 = V_0;
		return L_18;
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
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.PropertyCollection::property_bag_set_string(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,System.Int32,System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t PropertyCollection_property_bag_set_string_m9F04396801AECB2614444B52E37ECE43859EDCE3 (InteropSafeHandle_tF14E3AD32AC904F5E38F4FAC0ED46417062386C6 * ___propbag0, int32_t ___id1, intptr_t ___name2, intptr_t ___value3, const RuntimeMethod* method)
{
	typedef intptr_t (STDCALL *PInvokeFunc) (void*, int32_t, intptr_t, intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_Microsoft_CognitiveServices_Speech_core_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(int32_t) + sizeof(intptr_t) + sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("Microsoft.CognitiveServices.Speech.core.dll"), "property_bag_set_string", IL2CPP_CALL_STDCALL, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___propbag0' to native representation
	void* ____propbag0_marshaled = NULL;
	if (___propbag0 == NULL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_null_exception("propbag"), NULL);
	bool ___safeHandle_reference_incremented_for____propbag0 = false;
	SafeHandle_DangerousAddRef_mC65F001DAB84BADED6EA18B339BEA78962B978DB(___propbag0, (&___safeHandle_reference_incremented_for____propbag0), NULL);
	____propbag0_marshaled = reinterpret_cast<void*>((___propbag0)->get_handle_0());

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_Microsoft_CognitiveServices_Speech_core_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(property_bag_set_string)(____propbag0_marshaled, ___id1, ___name2, ___value3);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(____propbag0_marshaled, ___id1, ___name2, ___value3);
	#endif

	// Marshaling cleanup of parameter '___propbag0' native representation
	if (___safeHandle_reference_incremented_for____propbag0)
	{
		SafeHandle_DangerousRelease_mD38F583FAFD30A50547FAA163FBE3C1D466174D4(___propbag0, NULL);
	}

	return returnValue;
}
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.PropertyCollection::property_bag_get_string(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,System.Int32,System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t PropertyCollection_property_bag_get_string_mD72C7BC68AA146B7B28E6D3BA2A34ACA1F3FB0A1 (InteropSafeHandle_tF14E3AD32AC904F5E38F4FAC0ED46417062386C6 * ___propbag0, int32_t ___id1, intptr_t ___name2, intptr_t ___defaultValue3, const RuntimeMethod* method)
{
	typedef intptr_t (STDCALL *PInvokeFunc) (void*, int32_t, intptr_t, intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_Microsoft_CognitiveServices_Speech_core_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(int32_t) + sizeof(intptr_t) + sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("Microsoft.CognitiveServices.Speech.core.dll"), "property_bag_get_string", IL2CPP_CALL_STDCALL, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___propbag0' to native representation
	void* ____propbag0_marshaled = NULL;
	if (___propbag0 == NULL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_null_exception("propbag"), NULL);
	bool ___safeHandle_reference_incremented_for____propbag0 = false;
	SafeHandle_DangerousAddRef_mC65F001DAB84BADED6EA18B339BEA78962B978DB(___propbag0, (&___safeHandle_reference_incremented_for____propbag0), NULL);
	____propbag0_marshaled = reinterpret_cast<void*>((___propbag0)->get_handle_0());

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_Microsoft_CognitiveServices_Speech_core_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(property_bag_get_string)(____propbag0_marshaled, ___id1, ___name2, ___defaultValue3);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(____propbag0_marshaled, ___id1, ___name2, ___defaultValue3);
	#endif

	// Marshaling cleanup of parameter '___propbag0' native representation
	if (___safeHandle_reference_incremented_for____propbag0)
	{
		SafeHandle_DangerousRelease_mD38F583FAFD30A50547FAA163FBE3C1D466174D4(___propbag0, NULL);
	}

	return returnValue;
}
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.PropertyCollection::property_bag_free_string(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t PropertyCollection_property_bag_free_string_mEFBE870DE678372D8DA91718476766F7761B5A4B (intptr_t ___ptr0, const RuntimeMethod* method)
{
	typedef intptr_t (STDCALL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_Microsoft_CognitiveServices_Speech_core_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("Microsoft.CognitiveServices.Speech.core.dll"), "property_bag_free_string", IL2CPP_CALL_STDCALL, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_Microsoft_CognitiveServices_Speech_core_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(property_bag_free_string)(___ptr0);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(___ptr0);
	#endif

	return returnValue;
}
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.PropertyCollection::property_bag_release(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t PropertyCollection_property_bag_release_mAC9096678F4D9B7281A5EECCA5FCD7B794275755 (intptr_t ___propbag0, const RuntimeMethod* method)
{
	typedef intptr_t (STDCALL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_Microsoft_CognitiveServices_Speech_core_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("Microsoft.CognitiveServices.Speech.core.dll"), "property_bag_release", IL2CPP_CALL_STDCALL, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_Microsoft_CognitiveServices_Speech_core_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(property_bag_release)(___propbag0);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(___propbag0);
	#endif

	return returnValue;
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
// System.Void Microsoft.CognitiveServices.Speech.RecognitionEventArgs::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RecognitionEventArgs__ctor_m31490D766642A01A99F86D9E037DEABFD21138FE (RecognitionEventArgs_tC7B8B5C317C90BF54CBE82BE86321F5359B98650 * __this, intptr_t ___eventHandlePtr0, const RuntimeMethod* method)
{
	uint64_t V_0 = 0;
	{
		intptr_t L_0 = ___eventHandlePtr0;
		SessionEventArgs__ctor_mA2BA5B62E7BCD52804ACA274FE514BF94DBB9891(__this, (intptr_t)L_0, /*hidden argument*/NULL);
		InteropSafeHandle_tF14E3AD32AC904F5E38F4FAC0ED46417062386C6 * L_1 = ((SessionEventArgs_t720E6DA982AD7DE7933835DEBBECD8B78F28CAB1 *)__this)->get_eventHandle_1();
		SpxExceptionThrower_ThrowIfNull_mC54EA71790A454E5785FC15C4FFBB6F457E772DB(L_1, (String_t*)NULL, /*hidden argument*/NULL);
		V_0 = ((int64_t)((int64_t)0));
		InteropSafeHandle_tF14E3AD32AC904F5E38F4FAC0ED46417062386C6 * L_2 = ((SessionEventArgs_t720E6DA982AD7DE7933835DEBBECD8B78F28CAB1 *)__this)->get_eventHandle_1();
		intptr_t L_3;
		L_3 = Recognizer_recognizer_recognition_event_get_offset_mCF53A1E91E882611247A461133DA78BE91F55CE8(L_2, (uint64_t*)(&V_0), /*hidden argument*/NULL);
		SpxExceptionThrower_ThrowIfFail_m7269610C68DA4D960FE5E6208DF1BD9282C8F2DA((intptr_t)L_3, /*hidden argument*/NULL);
		uint64_t L_4 = V_0;
		__this->set_U3COffsetU3Ek__BackingField_5(L_4);
		return;
	}
}
// System.UInt64 Microsoft.CognitiveServices.Speech.RecognitionEventArgs::get_Offset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t RecognitionEventArgs_get_Offset_m5A20B9663DD26226E0D6B5BF93F0BAA30D04A870 (RecognitionEventArgs_tC7B8B5C317C90BF54CBE82BE86321F5359B98650 * __this, const RuntimeMethod* method)
{
	{
		uint64_t L_0 = __this->get_U3COffsetU3Ek__BackingField_5();
		return L_0;
	}
}
// System.String Microsoft.CognitiveServices.Speech.RecognitionEventArgs::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* RecognitionEventArgs_ToString_mE2C59AB25F8EDBED5DC757788376B9FEAEC0D7D0 (RecognitionEventArgs_tC7B8B5C317C90BF54CBE82BE86321F5359B98650 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral74950E71ECDE7F282725B371C332DD6851AC6CDE);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_il2cpp_TypeInfo_var);
		CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * L_0;
		L_0 = CultureInfo_get_InvariantCulture_m9FAAFAF8A00091EE1FCB7098AD3F163ECDF02164(/*hidden argument*/NULL);
		String_t* L_1;
		L_1 = SessionEventArgs_get_SessionId_m8C680FABDADC335561EA0F07CEA0F2F38A968960_inline(__this, /*hidden argument*/NULL);
		uint64_t L_2;
		L_2 = RecognitionEventArgs_get_Offset_m5A20B9663DD26226E0D6B5BF93F0BAA30D04A870_inline(__this, /*hidden argument*/NULL);
		uint64_t L_3 = L_2;
		RuntimeObject * L_4 = Box(UInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281_il2cpp_TypeInfo_var, &L_3);
		String_t* L_5;
		L_5 = String_Format_m8892FAD3E9F1E11E6176840DC1EA0C40DF1F0C2B(L_0, _stringLiteral74950E71ECDE7F282725B371C332DD6851AC6CDE, L_1, L_4, /*hidden argument*/NULL);
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
// System.Void Microsoft.CognitiveServices.Speech.RecognitionResult::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RecognitionResult__ctor_m7D01DA66AAD01DE820449823615BF686A33EC72E (RecognitionResult_t29D2A304D192BFB246AB9E91297B54B2EB44DA06 * __this, intptr_t ___resultHandlePtr0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GetResultDelegate_tCE5D8A1E9C3A30C92902692A8F1576D09D4DCDE3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HandleRelease_t981DDC9B764758F8D9EAE886A7255AC109F86E59_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InteropSafeHandle_tF14E3AD32AC904F5E38F4FAC0ED46417062386C6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PropertyCollection_tD6D50793A0684647D5C7067381E1365EDB3AA920_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RecognitionResult_recognizer_result_handle_release_m2390D80CFD66650438F1B05545EB439A5CAD56EA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RecognitionResult_result_get_result_id_m996CCE6FB266EB35D1833A57DBF34628883A1D51_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RecognitionResult_result_get_text_m84677F08CEF6433DA77AECACD5C5393B7ED1FC48_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	intptr_t V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		intptr_t L_0 = ___resultHandlePtr0;
		bool L_1;
		L_1 = IntPtr_op_Inequality_m212AF0E66AA81FEDC982B1C8A44ADDA24B995EB8((intptr_t)L_0, (intptr_t)(0), /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_00b1;
		}
	}
	{
		intptr_t L_2 = ___resultHandlePtr0;
		HandleRelease_t981DDC9B764758F8D9EAE886A7255AC109F86E59 * L_3 = (HandleRelease_t981DDC9B764758F8D9EAE886A7255AC109F86E59 *)il2cpp_codegen_object_new(HandleRelease_t981DDC9B764758F8D9EAE886A7255AC109F86E59_il2cpp_TypeInfo_var);
		HandleRelease__ctor_m033F205B7379518DCCF337635EAC5AAC9B2A42E9(L_3, NULL, (intptr_t)((intptr_t)RecognitionResult_recognizer_result_handle_release_m2390D80CFD66650438F1B05545EB439A5CAD56EA_RuntimeMethod_var), /*hidden argument*/NULL);
		InteropSafeHandle_tF14E3AD32AC904F5E38F4FAC0ED46417062386C6 * L_4 = (InteropSafeHandle_tF14E3AD32AC904F5E38F4FAC0ED46417062386C6 *)il2cpp_codegen_object_new(InteropSafeHandle_tF14E3AD32AC904F5E38F4FAC0ED46417062386C6_il2cpp_TypeInfo_var);
		InteropSafeHandle__ctor_mEEBFD93E8F421872BAE76137A07486B9BBD3D156(L_4, (intptr_t)L_2, L_3, /*hidden argument*/NULL);
		__this->set_resultHandle_4(L_4);
		GetResultDelegate_tCE5D8A1E9C3A30C92902692A8F1576D09D4DCDE3 * L_5 = (GetResultDelegate_tCE5D8A1E9C3A30C92902692A8F1576D09D4DCDE3 *)il2cpp_codegen_object_new(GetResultDelegate_tCE5D8A1E9C3A30C92902692A8F1576D09D4DCDE3_il2cpp_TypeInfo_var);
		GetResultDelegate__ctor_mD9674EEDEC07A1965D10AD6C172D61ADA8ABBAF0(L_5, NULL, (intptr_t)((intptr_t)RecognitionResult_result_get_result_id_m996CCE6FB266EB35D1833A57DBF34628883A1D51_RuntimeMethod_var), /*hidden argument*/NULL);
		InteropSafeHandle_tF14E3AD32AC904F5E38F4FAC0ED46417062386C6 * L_6 = __this->get_resultHandle_4();
		String_t* L_7;
		L_7 = SpxFactory_GetDataFromHandleUsingDelegate_mE498329CDC2B03C0A628C2EDE8395F3F87FC605C(L_5, L_6, ((int32_t)2048), /*hidden argument*/NULL);
		__this->set_U3CResultIdU3Ek__BackingField_0(L_7);
		GetResultDelegate_tCE5D8A1E9C3A30C92902692A8F1576D09D4DCDE3 * L_8 = (GetResultDelegate_tCE5D8A1E9C3A30C92902692A8F1576D09D4DCDE3 *)il2cpp_codegen_object_new(GetResultDelegate_tCE5D8A1E9C3A30C92902692A8F1576D09D4DCDE3_il2cpp_TypeInfo_var);
		GetResultDelegate__ctor_mD9674EEDEC07A1965D10AD6C172D61ADA8ABBAF0(L_8, NULL, (intptr_t)((intptr_t)RecognitionResult_result_get_text_m84677F08CEF6433DA77AECACD5C5393B7ED1FC48_RuntimeMethod_var), /*hidden argument*/NULL);
		InteropSafeHandle_tF14E3AD32AC904F5E38F4FAC0ED46417062386C6 * L_9 = __this->get_resultHandle_4();
		String_t* L_10;
		L_10 = SpxFactory_GetDataFromHandleUsingDelegate_mE498329CDC2B03C0A628C2EDE8395F3F87FC605C(L_8, L_9, ((int32_t)2048), /*hidden argument*/NULL);
		__this->set_U3CTextU3Ek__BackingField_2(L_10);
		V_0 = 0;
		InteropSafeHandle_tF14E3AD32AC904F5E38F4FAC0ED46417062386C6 * L_11 = __this->get_resultHandle_4();
		intptr_t L_12;
		L_12 = RecognitionResult_result_get_reason_m56E4A15B2D6F95EFF1E69838F4A0F9B6CAF4CD8A(L_11, (int32_t*)(&V_0), /*hidden argument*/NULL);
		SpxExceptionThrower_ThrowIfFail_m7269610C68DA4D960FE5E6208DF1BD9282C8F2DA((intptr_t)L_12, /*hidden argument*/NULL);
		int32_t L_13 = V_0;
		__this->set_U3CReasonU3Ek__BackingField_1(L_13);
		V_1 = (intptr_t)(0);
		InteropSafeHandle_tF14E3AD32AC904F5E38F4FAC0ED46417062386C6 * L_14 = __this->get_resultHandle_4();
		intptr_t L_15;
		L_15 = RecognitionResult_result_get_property_bag_m75C375828C1506CA3A7F3B6DDB9C086ADD04A91A(L_14, (intptr_t*)(&V_1), /*hidden argument*/NULL);
		SpxExceptionThrower_ThrowIfFail_m7269610C68DA4D960FE5E6208DF1BD9282C8F2DA((intptr_t)L_15, /*hidden argument*/NULL);
		intptr_t L_16 = V_1;
		PropertyCollection_tD6D50793A0684647D5C7067381E1365EDB3AA920 * L_17 = (PropertyCollection_tD6D50793A0684647D5C7067381E1365EDB3AA920 *)il2cpp_codegen_object_new(PropertyCollection_tD6D50793A0684647D5C7067381E1365EDB3AA920_il2cpp_TypeInfo_var);
		PropertyCollection__ctor_m298675719270993E505A055053F0D23293B517D2(L_17, (intptr_t)L_16, /*hidden argument*/NULL);
		RecognitionResult_set_Properties_mC90D2FE65A44F87E80C5889C0E59A4CA2546FE33_inline(__this, L_17, /*hidden argument*/NULL);
	}

IL_00b1:
	{
		return;
	}
}
// System.String Microsoft.CognitiveServices.Speech.RecognitionResult::get_ResultId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* RecognitionResult_get_ResultId_mD03C9639D934585A68FA0DDA386A9A3787C5F390 (RecognitionResult_t29D2A304D192BFB246AB9E91297B54B2EB44DA06 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_U3CResultIdU3Ek__BackingField_0();
		return L_0;
	}
}
// Microsoft.CognitiveServices.Speech.ResultReason Microsoft.CognitiveServices.Speech.RecognitionResult::get_Reason()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RecognitionResult_get_Reason_mC83682EB35ACDAC37F211E904C585EF187E94057 (RecognitionResult_t29D2A304D192BFB246AB9E91297B54B2EB44DA06 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CReasonU3Ek__BackingField_1();
		return L_0;
	}
}
// System.String Microsoft.CognitiveServices.Speech.RecognitionResult::get_Text()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* RecognitionResult_get_Text_mF0CFAB4D94ACC8B4E39FB5CCE4C1265F85FE84CD (RecognitionResult_t29D2A304D192BFB246AB9E91297B54B2EB44DA06 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_U3CTextU3Ek__BackingField_2();
		return L_0;
	}
}
// Microsoft.CognitiveServices.Speech.PropertyCollection Microsoft.CognitiveServices.Speech.RecognitionResult::get_Properties()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PropertyCollection_tD6D50793A0684647D5C7067381E1365EDB3AA920 * RecognitionResult_get_Properties_m284ABEC168FBE8033594BCAF188A44ED976FD365 (RecognitionResult_t29D2A304D192BFB246AB9E91297B54B2EB44DA06 * __this, const RuntimeMethod* method)
{
	{
		PropertyCollection_tD6D50793A0684647D5C7067381E1365EDB3AA920 * L_0 = __this->get_U3CPropertiesU3Ek__BackingField_3();
		return L_0;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.RecognitionResult::set_Properties(Microsoft.CognitiveServices.Speech.PropertyCollection)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RecognitionResult_set_Properties_mC90D2FE65A44F87E80C5889C0E59A4CA2546FE33 (RecognitionResult_t29D2A304D192BFB246AB9E91297B54B2EB44DA06 * __this, PropertyCollection_tD6D50793A0684647D5C7067381E1365EDB3AA920 * ___value0, const RuntimeMethod* method)
{
	{
		PropertyCollection_tD6D50793A0684647D5C7067381E1365EDB3AA920 * L_0 = ___value0;
		__this->set_U3CPropertiesU3Ek__BackingField_3(L_0);
		return;
	}
}
// System.String Microsoft.CognitiveServices.Speech.RecognitionResult::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* RecognitionResult_ToString_m5203323C2CC6CE545D52A784C9257CCBDCE80A4A (RecognitionResult_t29D2A304D192BFB246AB9E91297B54B2EB44DA06 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ResultReason_tB8FC6492BDC104DC14FE8E50C557C68A35466BF5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6260956A285A95B964811F944839C8CA994BAAD8);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_il2cpp_TypeInfo_var);
		CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * L_0;
		L_0 = CultureInfo_get_InvariantCulture_m9FAAFAF8A00091EE1FCB7098AD3F163ECDF02164(/*hidden argument*/NULL);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)4);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_2 = L_1;
		String_t* L_3;
		L_3 = VirtFuncInvoker0< String_t* >::Invoke(4 /* System.String Microsoft.CognitiveServices.Speech.RecognitionResult::get_ResultId() */, __this);
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_3);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_4 = L_2;
		int32_t L_5;
		L_5 = VirtFuncInvoker0< int32_t >::Invoke(5 /* Microsoft.CognitiveServices.Speech.ResultReason Microsoft.CognitiveServices.Speech.RecognitionResult::get_Reason() */, __this);
		int32_t L_6 = L_5;
		RuntimeObject * L_7 = Box(ResultReason_tB8FC6492BDC104DC14FE8E50C557C68A35466BF5_il2cpp_TypeInfo_var, &L_6);
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_7);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_7);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_8 = L_4;
		String_t* L_9;
		L_9 = VirtFuncInvoker0< String_t* >::Invoke(6 /* System.String Microsoft.CognitiveServices.Speech.RecognitionResult::get_Text() */, __this);
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, L_9);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)L_9);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_10 = L_8;
		PropertyCollection_tD6D50793A0684647D5C7067381E1365EDB3AA920 * L_11;
		L_11 = VirtFuncInvoker0< PropertyCollection_tD6D50793A0684647D5C7067381E1365EDB3AA920 * >::Invoke(7 /* Microsoft.CognitiveServices.Speech.PropertyCollection Microsoft.CognitiveServices.Speech.RecognitionResult::get_Properties() */, __this);
		NullCheck(L_11);
		String_t* L_12;
		L_12 = VirtFuncInvoker1< String_t*, int32_t >::Invoke(5 /* System.String Microsoft.CognitiveServices.Speech.PropertyCollection::GetProperty(Microsoft.CognitiveServices.Speech.PropertyId) */, L_11, ((int32_t)5000));
		NullCheck(L_10);
		ArrayElementTypeCheck (L_10, L_12);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_12);
		String_t* L_13;
		L_13 = String_Format_mF96F0621DC567D09C07F1EAC66B31AD261A9DC21(L_0, _stringLiteral6260956A285A95B964811F944839C8CA994BAAD8, L_10, /*hidden argument*/NULL);
		return L_13;
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
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.RecognitionResult::result_get_reason(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,Microsoft.CognitiveServices.Speech.ResultReason&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t RecognitionResult_result_get_reason_m56E4A15B2D6F95EFF1E69838F4A0F9B6CAF4CD8A (InteropSafeHandle_tF14E3AD32AC904F5E38F4FAC0ED46417062386C6 * ___result0, int32_t* ___reason1, const RuntimeMethod* method)
{
	typedef intptr_t (STDCALL *PInvokeFunc) (void*, int32_t*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_Microsoft_CognitiveServices_Speech_core_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(int32_t*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("Microsoft.CognitiveServices.Speech.core.dll"), "result_get_reason", IL2CPP_CALL_STDCALL, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___result0' to native representation
	void* ____result0_marshaled = NULL;
	if (___result0 == NULL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_null_exception("result"), NULL);
	bool ___safeHandle_reference_incremented_for____result0 = false;
	SafeHandle_DangerousAddRef_mC65F001DAB84BADED6EA18B339BEA78962B978DB(___result0, (&___safeHandle_reference_incremented_for____result0), NULL);
	____result0_marshaled = reinterpret_cast<void*>((___result0)->get_handle_0());

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_Microsoft_CognitiveServices_Speech_core_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(result_get_reason)(____result0_marshaled, ___reason1);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(____result0_marshaled, ___reason1);
	#endif

	// Marshaling cleanup of parameter '___result0' native representation
	if (___safeHandle_reference_incremented_for____result0)
	{
		SafeHandle_DangerousRelease_mD38F583FAFD30A50547FAA163FBE3C1D466174D4(___result0, NULL);
	}

	return returnValue;
}
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.RecognitionResult::result_get_result_id(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,System.IntPtr,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t RecognitionResult_result_get_result_id_m996CCE6FB266EB35D1833A57DBF34628883A1D51 (InteropSafeHandle_tF14E3AD32AC904F5E38F4FAC0ED46417062386C6 * ___result0, intptr_t ___resultId1, uint32_t ___resultIdLength2, const RuntimeMethod* method)
{
	typedef intptr_t (STDCALL *PInvokeFunc) (void*, intptr_t, uint32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_Microsoft_CognitiveServices_Speech_core_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(intptr_t) + sizeof(uint32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("Microsoft.CognitiveServices.Speech.core.dll"), "result_get_result_id", IL2CPP_CALL_STDCALL, CHARSET_ANSI, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___result0' to native representation
	void* ____result0_marshaled = NULL;
	if (___result0 == NULL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_null_exception("result"), NULL);
	bool ___safeHandle_reference_incremented_for____result0 = false;
	SafeHandle_DangerousAddRef_mC65F001DAB84BADED6EA18B339BEA78962B978DB(___result0, (&___safeHandle_reference_incremented_for____result0), NULL);
	____result0_marshaled = reinterpret_cast<void*>((___result0)->get_handle_0());

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_Microsoft_CognitiveServices_Speech_core_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(result_get_result_id)(____result0_marshaled, ___resultId1, ___resultIdLength2);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(____result0_marshaled, ___resultId1, ___resultIdLength2);
	#endif

	// Marshaling cleanup of parameter '___result0' native representation
	if (___safeHandle_reference_incremented_for____result0)
	{
		SafeHandle_DangerousRelease_mD38F583FAFD30A50547FAA163FBE3C1D466174D4(___result0, NULL);
	}

	return returnValue;
}
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.RecognitionResult::result_get_text(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,System.IntPtr,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t RecognitionResult_result_get_text_m84677F08CEF6433DA77AECACD5C5393B7ED1FC48 (InteropSafeHandle_tF14E3AD32AC904F5E38F4FAC0ED46417062386C6 * ___result0, intptr_t ___text1, uint32_t ___textLength2, const RuntimeMethod* method)
{
	typedef intptr_t (STDCALL *PInvokeFunc) (void*, intptr_t, uint32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_Microsoft_CognitiveServices_Speech_core_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(intptr_t) + sizeof(uint32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("Microsoft.CognitiveServices.Speech.core.dll"), "result_get_text", IL2CPP_CALL_STDCALL, CHARSET_ANSI, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___result0' to native representation
	void* ____result0_marshaled = NULL;
	if (___result0 == NULL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_null_exception("result"), NULL);
	bool ___safeHandle_reference_incremented_for____result0 = false;
	SafeHandle_DangerousAddRef_mC65F001DAB84BADED6EA18B339BEA78962B978DB(___result0, (&___safeHandle_reference_incremented_for____result0), NULL);
	____result0_marshaled = reinterpret_cast<void*>((___result0)->get_handle_0());

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_Microsoft_CognitiveServices_Speech_core_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(result_get_text)(____result0_marshaled, ___text1, ___textLength2);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(____result0_marshaled, ___text1, ___textLength2);
	#endif

	// Marshaling cleanup of parameter '___result0' native representation
	if (___safeHandle_reference_incremented_for____result0)
	{
		SafeHandle_DangerousRelease_mD38F583FAFD30A50547FAA163FBE3C1D466174D4(___result0, NULL);
	}

	return returnValue;
}
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.RecognitionResult::result_get_property_bag(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,System.IntPtr&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t RecognitionResult_result_get_property_bag_m75C375828C1506CA3A7F3B6DDB9C086ADD04A91A (InteropSafeHandle_tF14E3AD32AC904F5E38F4FAC0ED46417062386C6 * ___result0, intptr_t* ___hpropbag1, const RuntimeMethod* method)
{
	typedef intptr_t (STDCALL *PInvokeFunc) (void*, intptr_t*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_Microsoft_CognitiveServices_Speech_core_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(intptr_t*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("Microsoft.CognitiveServices.Speech.core.dll"), "result_get_property_bag", IL2CPP_CALL_STDCALL, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___result0' to native representation
	void* ____result0_marshaled = NULL;
	if (___result0 == NULL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_null_exception("result"), NULL);
	bool ___safeHandle_reference_incremented_for____result0 = false;
	SafeHandle_DangerousAddRef_mC65F001DAB84BADED6EA18B339BEA78962B978DB(___result0, (&___safeHandle_reference_incremented_for____result0), NULL);
	____result0_marshaled = reinterpret_cast<void*>((___result0)->get_handle_0());

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_Microsoft_CognitiveServices_Speech_core_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(result_get_property_bag)(____result0_marshaled, ___hpropbag1);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(____result0_marshaled, ___hpropbag1);
	#endif

	// Marshaling cleanup of parameter '___result0' native representation
	if (___safeHandle_reference_incremented_for____result0)
	{
		SafeHandle_DangerousRelease_mD38F583FAFD30A50547FAA163FBE3C1D466174D4(___result0, NULL);
	}

	return returnValue;
}
// System.Boolean Microsoft.CognitiveServices.Speech.Internal.RecognitionResult::recognizer_result_handle_is_valid(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RecognitionResult_recognizer_result_handle_is_valid_mF7E78F30BD9373F5F3F4AEC1827F014FEEDDF062 (InteropSafeHandle_tF14E3AD32AC904F5E38F4FAC0ED46417062386C6 * ___result0, const RuntimeMethod* method)
{
	typedef int32_t (STDCALL *PInvokeFunc) (void*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_Microsoft_CognitiveServices_Speech_core_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("Microsoft.CognitiveServices.Speech.core.dll"), "recognizer_result_handle_is_valid", IL2CPP_CALL_STDCALL, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___result0' to native representation
	void* ____result0_marshaled = NULL;
	if (___result0 == NULL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_null_exception("result"), NULL);
	bool ___safeHandle_reference_incremented_for____result0 = false;
	SafeHandle_DangerousAddRef_mC65F001DAB84BADED6EA18B339BEA78962B978DB(___result0, (&___safeHandle_reference_incremented_for____result0), NULL);
	____result0_marshaled = reinterpret_cast<void*>((___result0)->get_handle_0());

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_Microsoft_CognitiveServices_Speech_core_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(recognizer_result_handle_is_valid)(____result0_marshaled);
	#else
	int32_t returnValue = il2cppPInvokeFunc(____result0_marshaled);
	#endif

	// Marshaling cleanup of parameter '___result0' native representation
	if (___safeHandle_reference_incremented_for____result0)
	{
		SafeHandle_DangerousRelease_mD38F583FAFD30A50547FAA163FBE3C1D466174D4(___result0, NULL);
	}

	return static_cast<bool>(returnValue);
}
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.RecognitionResult::recognizer_result_handle_release(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t RecognitionResult_recognizer_result_handle_release_m2390D80CFD66650438F1B05545EB439A5CAD56EA (intptr_t ___result0, const RuntimeMethod* method)
{
	typedef intptr_t (STDCALL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_Microsoft_CognitiveServices_Speech_core_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("Microsoft.CognitiveServices.Speech.core.dll"), "recognizer_result_handle_release", IL2CPP_CALL_STDCALL, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_Microsoft_CognitiveServices_Speech_core_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(recognizer_result_handle_release)(___result0);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(___result0);
	#endif

	return returnValue;
}
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.RecognitionResult::translation_text_result_get_translation_text_buffer_header(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,System.IntPtr,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t RecognitionResult_translation_text_result_get_translation_text_buffer_header_m836D5B5E0B1882639EF9E75125664188D7484BCF (InteropSafeHandle_tF14E3AD32AC904F5E38F4FAC0ED46417062386C6 * ___handle0, intptr_t ___translationResultBuffer1, int32_t* ___lengthPointer2, const RuntimeMethod* method)
{
	typedef intptr_t (STDCALL *PInvokeFunc) (void*, intptr_t, int32_t*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_Microsoft_CognitiveServices_Speech_core_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(intptr_t) + sizeof(int32_t*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("Microsoft.CognitiveServices.Speech.core.dll"), "translation_text_result_get_translation_text_buffer_header", IL2CPP_CALL_STDCALL, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___handle0' to native representation
	void* ____handle0_marshaled = NULL;
	if (___handle0 == NULL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_null_exception("handle"), NULL);
	bool ___safeHandle_reference_incremented_for____handle0 = false;
	SafeHandle_DangerousAddRef_mC65F001DAB84BADED6EA18B339BEA78962B978DB(___handle0, (&___safeHandle_reference_incremented_for____handle0), NULL);
	____handle0_marshaled = reinterpret_cast<void*>((___handle0)->get_handle_0());

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_Microsoft_CognitiveServices_Speech_core_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(translation_text_result_get_translation_text_buffer_header)(____handle0_marshaled, ___translationResultBuffer1, ___lengthPointer2);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(____handle0_marshaled, ___translationResultBuffer1, ___lengthPointer2);
	#endif

	// Marshaling cleanup of parameter '___handle0' native representation
	if (___safeHandle_reference_incremented_for____handle0)
	{
		SafeHandle_DangerousRelease_mD38F583FAFD30A50547FAA163FBE3C1D466174D4(___handle0, NULL);
	}

	return returnValue;
}
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.RecognitionResult::translation_synthesis_result_get_audio_data(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,System.IntPtr,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t RecognitionResult_translation_synthesis_result_get_audio_data_mFF0760AF3D2F8409841252FD33179D53E25CF4B9 (InteropSafeHandle_tF14E3AD32AC904F5E38F4FAC0ED46417062386C6 * ___handle0, intptr_t ___audioBuffer1, int32_t* ___lengthPointer2, const RuntimeMethod* method)
{
	typedef intptr_t (STDCALL *PInvokeFunc) (void*, intptr_t, int32_t*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_Microsoft_CognitiveServices_Speech_core_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(intptr_t) + sizeof(int32_t*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("Microsoft.CognitiveServices.Speech.core.dll"), "translation_synthesis_result_get_audio_data", IL2CPP_CALL_STDCALL, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___handle0' to native representation
	void* ____handle0_marshaled = NULL;
	if (___handle0 == NULL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_null_exception("handle"), NULL);
	bool ___safeHandle_reference_incremented_for____handle0 = false;
	SafeHandle_DangerousAddRef_mC65F001DAB84BADED6EA18B339BEA78962B978DB(___handle0, (&___safeHandle_reference_incremented_for____handle0), NULL);
	____handle0_marshaled = reinterpret_cast<void*>((___handle0)->get_handle_0());

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_Microsoft_CognitiveServices_Speech_core_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(translation_synthesis_result_get_audio_data)(____handle0_marshaled, ___audioBuffer1, ___lengthPointer2);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(____handle0_marshaled, ___audioBuffer1, ___lengthPointer2);
	#endif

	// Marshaling cleanup of parameter '___handle0' native representation
	if (___safeHandle_reference_incremented_for____handle0)
	{
		SafeHandle_DangerousRelease_mD38F583FAFD30A50547FAA163FBE3C1D466174D4(___handle0, NULL);
	}

	return returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern "C" void CDECL ReversePInvokeWrapper_Recognizer_FireEvent_SetSessionStarted_mE1D278B2C1F2EA34E714D8E5F41CF8EA7E533F11(intptr_t ___hreco0, intptr_t ___hevent1, intptr_t ___pvContext2)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	Recognizer_FireEvent_SetSessionStarted_mE1D278B2C1F2EA34E714D8E5F41CF8EA7E533F11(___hreco0, ___hevent1, ___pvContext2, NULL);

}
extern "C" void CDECL ReversePInvokeWrapper_Recognizer_FireEvent_SetSessionStopped_mC49DC694FC309FDE44262E02039FB542A838CC78(intptr_t ___hreco0, intptr_t ___hevent1, intptr_t ___pvContext2)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	Recognizer_FireEvent_SetSessionStopped_mC49DC694FC309FDE44262E02039FB542A838CC78(___hreco0, ___hevent1, ___pvContext2, NULL);

}
extern "C" void CDECL ReversePInvokeWrapper_Recognizer_FireEvent_SpeechStartDetected_m6BA5E049E81970E282933AEEA38E42DC461AC29F(intptr_t ___hreco0, intptr_t ___hevent1, intptr_t ___pvContext2)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	Recognizer_FireEvent_SpeechStartDetected_m6BA5E049E81970E282933AEEA38E42DC461AC29F(___hreco0, ___hevent1, ___pvContext2, NULL);

}
extern "C" void CDECL ReversePInvokeWrapper_Recognizer_FireEvent_SpeechEndDetected_mBD282262A151F5C473D1C49CFF74DEDDD71E7769(intptr_t ___hreco0, intptr_t ___hevent1, intptr_t ___pvContext2)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	Recognizer_FireEvent_SpeechEndDetected_mBD282262A151F5C473D1C49CFF74DEDDD71E7769(___hreco0, ___hevent1, ___pvContext2, NULL);

}
// System.Void Microsoft.CognitiveServices.Speech.Recognizer::add__SessionStarted(System.EventHandler`1<Microsoft.CognitiveServices.Speech.SessionEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Recognizer_add__SessionStarted_m82C00A0B6456390DBDF96FE466647D964302FE08 (Recognizer_tF1FAA5F9E223C619151C5DA96D83F0AF7E3C9E3E * __this, EventHandler_1_tB9B30C7ACA01631527E7047FB53709C6EC5B260A * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tB9B30C7ACA01631527E7047FB53709C6EC5B260A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_tB9B30C7ACA01631527E7047FB53709C6EC5B260A * V_0 = NULL;
	EventHandler_1_tB9B30C7ACA01631527E7047FB53709C6EC5B260A * V_1 = NULL;
	EventHandler_1_tB9B30C7ACA01631527E7047FB53709C6EC5B260A * V_2 = NULL;
	{
		EventHandler_1_tB9B30C7ACA01631527E7047FB53709C6EC5B260A * L_0 = __this->get__SessionStarted_0();
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_tB9B30C7ACA01631527E7047FB53709C6EC5B260A * L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_tB9B30C7ACA01631527E7047FB53709C6EC5B260A * L_2 = V_1;
		EventHandler_1_tB9B30C7ACA01631527E7047FB53709C6EC5B260A * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((EventHandler_1_tB9B30C7ACA01631527E7047FB53709C6EC5B260A *)CastclassSealed((RuntimeObject*)L_4, EventHandler_1_tB9B30C7ACA01631527E7047FB53709C6EC5B260A_il2cpp_TypeInfo_var));
		EventHandler_1_tB9B30C7ACA01631527E7047FB53709C6EC5B260A ** L_5 = __this->get_address_of__SessionStarted_0();
		EventHandler_1_tB9B30C7ACA01631527E7047FB53709C6EC5B260A * L_6 = V_2;
		EventHandler_1_tB9B30C7ACA01631527E7047FB53709C6EC5B260A * L_7 = V_1;
		EventHandler_1_tB9B30C7ACA01631527E7047FB53709C6EC5B260A * L_8;
		L_8 = InterlockedCompareExchangeImpl<EventHandler_1_tB9B30C7ACA01631527E7047FB53709C6EC5B260A *>((EventHandler_1_tB9B30C7ACA01631527E7047FB53709C6EC5B260A **)L_5, L_6, L_7);
		V_0 = L_8;
		EventHandler_1_tB9B30C7ACA01631527E7047FB53709C6EC5B260A * L_9 = V_0;
		EventHandler_1_tB9B30C7ACA01631527E7047FB53709C6EC5B260A * L_10 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_tB9B30C7ACA01631527E7047FB53709C6EC5B260A *)L_9) == ((RuntimeObject*)(EventHandler_1_tB9B30C7ACA01631527E7047FB53709C6EC5B260A *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.Recognizer::remove__SessionStarted(System.EventHandler`1<Microsoft.CognitiveServices.Speech.SessionEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Recognizer_remove__SessionStarted_mDE2352B8E75ECF0D16F283EB81A72D769F129A3B (Recognizer_tF1FAA5F9E223C619151C5DA96D83F0AF7E3C9E3E * __this, EventHandler_1_tB9B30C7ACA01631527E7047FB53709C6EC5B260A * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tB9B30C7ACA01631527E7047FB53709C6EC5B260A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_tB9B30C7ACA01631527E7047FB53709C6EC5B260A * V_0 = NULL;
	EventHandler_1_tB9B30C7ACA01631527E7047FB53709C6EC5B260A * V_1 = NULL;
	EventHandler_1_tB9B30C7ACA01631527E7047FB53709C6EC5B260A * V_2 = NULL;
	{
		EventHandler_1_tB9B30C7ACA01631527E7047FB53709C6EC5B260A * L_0 = __this->get__SessionStarted_0();
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_tB9B30C7ACA01631527E7047FB53709C6EC5B260A * L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_tB9B30C7ACA01631527E7047FB53709C6EC5B260A * L_2 = V_1;
		EventHandler_1_tB9B30C7ACA01631527E7047FB53709C6EC5B260A * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Remove_m8B4AD17254118B2904720D55C9B34FB3DCCBD7D4(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((EventHandler_1_tB9B30C7ACA01631527E7047FB53709C6EC5B260A *)CastclassSealed((RuntimeObject*)L_4, EventHandler_1_tB9B30C7ACA01631527E7047FB53709C6EC5B260A_il2cpp_TypeInfo_var));
		EventHandler_1_tB9B30C7ACA01631527E7047FB53709C6EC5B260A ** L_5 = __this->get_address_of__SessionStarted_0();
		EventHandler_1_tB9B30C7ACA01631527E7047FB53709C6EC5B260A * L_6 = V_2;
		EventHandler_1_tB9B30C7ACA01631527E7047FB53709C6EC5B260A * L_7 = V_1;
		EventHandler_1_tB9B30C7ACA01631527E7047FB53709C6EC5B260A * L_8;
		L_8 = InterlockedCompareExchangeImpl<EventHandler_1_tB9B30C7ACA01631527E7047FB53709C6EC5B260A *>((EventHandler_1_tB9B30C7ACA01631527E7047FB53709C6EC5B260A **)L_5, L_6, L_7);
		V_0 = L_8;
		EventHandler_1_tB9B30C7ACA01631527E7047FB53709C6EC5B260A * L_9 = V_0;
		EventHandler_1_tB9B30C7ACA01631527E7047FB53709C6EC5B260A * L_10 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_tB9B30C7ACA01631527E7047FB53709C6EC5B260A *)L_9) == ((RuntimeObject*)(EventHandler_1_tB9B30C7ACA01631527E7047FB53709C6EC5B260A *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.Recognizer::add__SessionStopped(System.EventHandler`1<Microsoft.CognitiveServices.Speech.SessionEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Recognizer_add__SessionStopped_m72A41C93CFD304A89B9369D6E74D7E1D40D16D36 (Recognizer_tF1FAA5F9E223C619151C5DA96D83F0AF7E3C9E3E * __this, EventHandler_1_tB9B30C7ACA01631527E7047FB53709C6EC5B260A * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tB9B30C7ACA01631527E7047FB53709C6EC5B260A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_tB9B30C7ACA01631527E7047FB53709C6EC5B260A * V_0 = NULL;
	EventHandler_1_tB9B30C7ACA01631527E7047FB53709C6EC5B260A * V_1 = NULL;
	EventHandler_1_tB9B30C7ACA01631527E7047FB53709C6EC5B260A * V_2 = NULL;
	{
		EventHandler_1_tB9B30C7ACA01631527E7047FB53709C6EC5B260A * L_0 = __this->get__SessionStopped_1();
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_tB9B30C7ACA01631527E7047FB53709C6EC5B260A * L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_tB9B30C7ACA01631527E7047FB53709C6EC5B260A * L_2 = V_1;
		EventHandler_1_tB9B30C7ACA01631527E7047FB53709C6EC5B260A * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((EventHandler_1_tB9B30C7ACA01631527E7047FB53709C6EC5B260A *)CastclassSealed((RuntimeObject*)L_4, EventHandler_1_tB9B30C7ACA01631527E7047FB53709C6EC5B260A_il2cpp_TypeInfo_var));
		EventHandler_1_tB9B30C7ACA01631527E7047FB53709C6EC5B260A ** L_5 = __this->get_address_of__SessionStopped_1();
		EventHandler_1_tB9B30C7ACA01631527E7047FB53709C6EC5B260A * L_6 = V_2;
		EventHandler_1_tB9B30C7ACA01631527E7047FB53709C6EC5B260A * L_7 = V_1;
		EventHandler_1_tB9B30C7ACA01631527E7047FB53709C6EC5B260A * L_8;
		L_8 = InterlockedCompareExchangeImpl<EventHandler_1_tB9B30C7ACA01631527E7047FB53709C6EC5B260A *>((EventHandler_1_tB9B30C7ACA01631527E7047FB53709C6EC5B260A **)L_5, L_6, L_7);
		V_0 = L_8;
		EventHandler_1_tB9B30C7ACA01631527E7047FB53709C6EC5B260A * L_9 = V_0;
		EventHandler_1_tB9B30C7ACA01631527E7047FB53709C6EC5B260A * L_10 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_tB9B30C7ACA01631527E7047FB53709C6EC5B260A *)L_9) == ((RuntimeObject*)(EventHandler_1_tB9B30C7ACA01631527E7047FB53709C6EC5B260A *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.Recognizer::remove__SessionStopped(System.EventHandler`1<Microsoft.CognitiveServices.Speech.SessionEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Recognizer_remove__SessionStopped_m5A5E96C40EA8CA9ADA763CEBF02573CAC0A32BC6 (Recognizer_tF1FAA5F9E223C619151C5DA96D83F0AF7E3C9E3E * __this, EventHandler_1_tB9B30C7ACA01631527E7047FB53709C6EC5B260A * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tB9B30C7ACA01631527E7047FB53709C6EC5B260A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_tB9B30C7ACA01631527E7047FB53709C6EC5B260A * V_0 = NULL;
	EventHandler_1_tB9B30C7ACA01631527E7047FB53709C6EC5B260A * V_1 = NULL;
	EventHandler_1_tB9B30C7ACA01631527E7047FB53709C6EC5B260A * V_2 = NULL;
	{
		EventHandler_1_tB9B30C7ACA01631527E7047FB53709C6EC5B260A * L_0 = __this->get__SessionStopped_1();
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_tB9B30C7ACA01631527E7047FB53709C6EC5B260A * L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_tB9B30C7ACA01631527E7047FB53709C6EC5B260A * L_2 = V_1;
		EventHandler_1_tB9B30C7ACA01631527E7047FB53709C6EC5B260A * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Remove_m8B4AD17254118B2904720D55C9B34FB3DCCBD7D4(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((EventHandler_1_tB9B30C7ACA01631527E7047FB53709C6EC5B260A *)CastclassSealed((RuntimeObject*)L_4, EventHandler_1_tB9B30C7ACA01631527E7047FB53709C6EC5B260A_il2cpp_TypeInfo_var));
		EventHandler_1_tB9B30C7ACA01631527E7047FB53709C6EC5B260A ** L_5 = __this->get_address_of__SessionStopped_1();
		EventHandler_1_tB9B30C7ACA01631527E7047FB53709C6EC5B260A * L_6 = V_2;
		EventHandler_1_tB9B30C7ACA01631527E7047FB53709C6EC5B260A * L_7 = V_1;
		EventHandler_1_tB9B30C7ACA01631527E7047FB53709C6EC5B260A * L_8;
		L_8 = InterlockedCompareExchangeImpl<EventHandler_1_tB9B30C7ACA01631527E7047FB53709C6EC5B260A *>((EventHandler_1_tB9B30C7ACA01631527E7047FB53709C6EC5B260A **)L_5, L_6, L_7);
		V_0 = L_8;
		EventHandler_1_tB9B30C7ACA01631527E7047FB53709C6EC5B260A * L_9 = V_0;
		EventHandler_1_tB9B30C7ACA01631527E7047FB53709C6EC5B260A * L_10 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_tB9B30C7ACA01631527E7047FB53709C6EC5B260A *)L_9) == ((RuntimeObject*)(EventHandler_1_tB9B30C7ACA01631527E7047FB53709C6EC5B260A *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.Recognizer::add__SpeechStartDetected(System.EventHandler`1<Microsoft.CognitiveServices.Speech.RecognitionEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Recognizer_add__SpeechStartDetected_m0F0EC04B8F79FCE22C43242DF2A774E8AB57A737 (Recognizer_tF1FAA5F9E223C619151C5DA96D83F0AF7E3C9E3E * __this, EventHandler_1_t9D5FDB2FE48DCCFFD359039BB88FD53E210F0A8D * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_t9D5FDB2FE48DCCFFD359039BB88FD53E210F0A8D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_t9D5FDB2FE48DCCFFD359039BB88FD53E210F0A8D * V_0 = NULL;
	EventHandler_1_t9D5FDB2FE48DCCFFD359039BB88FD53E210F0A8D * V_1 = NULL;
	EventHandler_1_t9D5FDB2FE48DCCFFD359039BB88FD53E210F0A8D * V_2 = NULL;
	{
		EventHandler_1_t9D5FDB2FE48DCCFFD359039BB88FD53E210F0A8D * L_0 = __this->get__SpeechStartDetected_2();
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_t9D5FDB2FE48DCCFFD359039BB88FD53E210F0A8D * L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_t9D5FDB2FE48DCCFFD359039BB88FD53E210F0A8D * L_2 = V_1;
		EventHandler_1_t9D5FDB2FE48DCCFFD359039BB88FD53E210F0A8D * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((EventHandler_1_t9D5FDB2FE48DCCFFD359039BB88FD53E210F0A8D *)CastclassSealed((RuntimeObject*)L_4, EventHandler_1_t9D5FDB2FE48DCCFFD359039BB88FD53E210F0A8D_il2cpp_TypeInfo_var));
		EventHandler_1_t9D5FDB2FE48DCCFFD359039BB88FD53E210F0A8D ** L_5 = __this->get_address_of__SpeechStartDetected_2();
		EventHandler_1_t9D5FDB2FE48DCCFFD359039BB88FD53E210F0A8D * L_6 = V_2;
		EventHandler_1_t9D5FDB2FE48DCCFFD359039BB88FD53E210F0A8D * L_7 = V_1;
		EventHandler_1_t9D5FDB2FE48DCCFFD359039BB88FD53E210F0A8D * L_8;
		L_8 = InterlockedCompareExchangeImpl<EventHandler_1_t9D5FDB2FE48DCCFFD359039BB88FD53E210F0A8D *>((EventHandler_1_t9D5FDB2FE48DCCFFD359039BB88FD53E210F0A8D **)L_5, L_6, L_7);
		V_0 = L_8;
		EventHandler_1_t9D5FDB2FE48DCCFFD359039BB88FD53E210F0A8D * L_9 = V_0;
		EventHandler_1_t9D5FDB2FE48DCCFFD359039BB88FD53E210F0A8D * L_10 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_t9D5FDB2FE48DCCFFD359039BB88FD53E210F0A8D *)L_9) == ((RuntimeObject*)(EventHandler_1_t9D5FDB2FE48DCCFFD359039BB88FD53E210F0A8D *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.Recognizer::remove__SpeechStartDetected(System.EventHandler`1<Microsoft.CognitiveServices.Speech.RecognitionEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Recognizer_remove__SpeechStartDetected_m4647638FFD5518D8C6356FD0B788A2D8E123D705 (Recognizer_tF1FAA5F9E223C619151C5DA96D83F0AF7E3C9E3E * __this, EventHandler_1_t9D5FDB2FE48DCCFFD359039BB88FD53E210F0A8D * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_t9D5FDB2FE48DCCFFD359039BB88FD53E210F0A8D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_t9D5FDB2FE48DCCFFD359039BB88FD53E210F0A8D * V_0 = NULL;
	EventHandler_1_t9D5FDB2FE48DCCFFD359039BB88FD53E210F0A8D * V_1 = NULL;
	EventHandler_1_t9D5FDB2FE48DCCFFD359039BB88FD53E210F0A8D * V_2 = NULL;
	{
		EventHandler_1_t9D5FDB2FE48DCCFFD359039BB88FD53E210F0A8D * L_0 = __this->get__SpeechStartDetected_2();
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_t9D5FDB2FE48DCCFFD359039BB88FD53E210F0A8D * L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_t9D5FDB2FE48DCCFFD359039BB88FD53E210F0A8D * L_2 = V_1;
		EventHandler_1_t9D5FDB2FE48DCCFFD359039BB88FD53E210F0A8D * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Remove_m8B4AD17254118B2904720D55C9B34FB3DCCBD7D4(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((EventHandler_1_t9D5FDB2FE48DCCFFD359039BB88FD53E210F0A8D *)CastclassSealed((RuntimeObject*)L_4, EventHandler_1_t9D5FDB2FE48DCCFFD359039BB88FD53E210F0A8D_il2cpp_TypeInfo_var));
		EventHandler_1_t9D5FDB2FE48DCCFFD359039BB88FD53E210F0A8D ** L_5 = __this->get_address_of__SpeechStartDetected_2();
		EventHandler_1_t9D5FDB2FE48DCCFFD359039BB88FD53E210F0A8D * L_6 = V_2;
		EventHandler_1_t9D5FDB2FE48DCCFFD359039BB88FD53E210F0A8D * L_7 = V_1;
		EventHandler_1_t9D5FDB2FE48DCCFFD359039BB88FD53E210F0A8D * L_8;
		L_8 = InterlockedCompareExchangeImpl<EventHandler_1_t9D5FDB2FE48DCCFFD359039BB88FD53E210F0A8D *>((EventHandler_1_t9D5FDB2FE48DCCFFD359039BB88FD53E210F0A8D **)L_5, L_6, L_7);
		V_0 = L_8;
		EventHandler_1_t9D5FDB2FE48DCCFFD359039BB88FD53E210F0A8D * L_9 = V_0;
		EventHandler_1_t9D5FDB2FE48DCCFFD359039BB88FD53E210F0A8D * L_10 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_t9D5FDB2FE48DCCFFD359039BB88FD53E210F0A8D *)L_9) == ((RuntimeObject*)(EventHandler_1_t9D5FDB2FE48DCCFFD359039BB88FD53E210F0A8D *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.Recognizer::add__SpeechEndDetected(System.EventHandler`1<Microsoft.CognitiveServices.Speech.RecognitionEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Recognizer_add__SpeechEndDetected_m15AA9CD5EA864B18E1F29B21F3349E4EDE9899BB (Recognizer_tF1FAA5F9E223C619151C5DA96D83F0AF7E3C9E3E * __this, EventHandler_1_t9D5FDB2FE48DCCFFD359039BB88FD53E210F0A8D * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_t9D5FDB2FE48DCCFFD359039BB88FD53E210F0A8D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_t9D5FDB2FE48DCCFFD359039BB88FD53E210F0A8D * V_0 = NULL;
	EventHandler_1_t9D5FDB2FE48DCCFFD359039BB88FD53E210F0A8D * V_1 = NULL;
	EventHandler_1_t9D5FDB2FE48DCCFFD359039BB88FD53E210F0A8D * V_2 = NULL;
	{
		EventHandler_1_t9D5FDB2FE48DCCFFD359039BB88FD53E210F0A8D * L_0 = __this->get__SpeechEndDetected_3();
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_t9D5FDB2FE48DCCFFD359039BB88FD53E210F0A8D * L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_t9D5FDB2FE48DCCFFD359039BB88FD53E210F0A8D * L_2 = V_1;
		EventHandler_1_t9D5FDB2FE48DCCFFD359039BB88FD53E210F0A8D * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((EventHandler_1_t9D5FDB2FE48DCCFFD359039BB88FD53E210F0A8D *)CastclassSealed((RuntimeObject*)L_4, EventHandler_1_t9D5FDB2FE48DCCFFD359039BB88FD53E210F0A8D_il2cpp_TypeInfo_var));
		EventHandler_1_t9D5FDB2FE48DCCFFD359039BB88FD53E210F0A8D ** L_5 = __this->get_address_of__SpeechEndDetected_3();
		EventHandler_1_t9D5FDB2FE48DCCFFD359039BB88FD53E210F0A8D * L_6 = V_2;
		EventHandler_1_t9D5FDB2FE48DCCFFD359039BB88FD53E210F0A8D * L_7 = V_1;
		EventHandler_1_t9D5FDB2FE48DCCFFD359039BB88FD53E210F0A8D * L_8;
		L_8 = InterlockedCompareExchangeImpl<EventHandler_1_t9D5FDB2FE48DCCFFD359039BB88FD53E210F0A8D *>((EventHandler_1_t9D5FDB2FE48DCCFFD359039BB88FD53E210F0A8D **)L_5, L_6, L_7);
		V_0 = L_8;
		EventHandler_1_t9D5FDB2FE48DCCFFD359039BB88FD53E210F0A8D * L_9 = V_0;
		EventHandler_1_t9D5FDB2FE48DCCFFD359039BB88FD53E210F0A8D * L_10 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_t9D5FDB2FE48DCCFFD359039BB88FD53E210F0A8D *)L_9) == ((RuntimeObject*)(EventHandler_1_t9D5FDB2FE48DCCFFD359039BB88FD53E210F0A8D *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.Recognizer::remove__SpeechEndDetected(System.EventHandler`1<Microsoft.CognitiveServices.Speech.RecognitionEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Recognizer_remove__SpeechEndDetected_m41E1F529B192A8C325D9B8D40652BE2AC20FA480 (Recognizer_tF1FAA5F9E223C619151C5DA96D83F0AF7E3C9E3E * __this, EventHandler_1_t9D5FDB2FE48DCCFFD359039BB88FD53E210F0A8D * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_t9D5FDB2FE48DCCFFD359039BB88FD53E210F0A8D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_t9D5FDB2FE48DCCFFD359039BB88FD53E210F0A8D * V_0 = NULL;
	EventHandler_1_t9D5FDB2FE48DCCFFD359039BB88FD53E210F0A8D * V_1 = NULL;
	EventHandler_1_t9D5FDB2FE48DCCFFD359039BB88FD53E210F0A8D * V_2 = NULL;
	{
		EventHandler_1_t9D5FDB2FE48DCCFFD359039BB88FD53E210F0A8D * L_0 = __this->get__SpeechEndDetected_3();
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_t9D5FDB2FE48DCCFFD359039BB88FD53E210F0A8D * L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_t9D5FDB2FE48DCCFFD359039BB88FD53E210F0A8D * L_2 = V_1;
		EventHandler_1_t9D5FDB2FE48DCCFFD359039BB88FD53E210F0A8D * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Remove_m8B4AD17254118B2904720D55C9B34FB3DCCBD7D4(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((EventHandler_1_t9D5FDB2FE48DCCFFD359039BB88FD53E210F0A8D *)CastclassSealed((RuntimeObject*)L_4, EventHandler_1_t9D5FDB2FE48DCCFFD359039BB88FD53E210F0A8D_il2cpp_TypeInfo_var));
		EventHandler_1_t9D5FDB2FE48DCCFFD359039BB88FD53E210F0A8D ** L_5 = __this->get_address_of__SpeechEndDetected_3();
		EventHandler_1_t9D5FDB2FE48DCCFFD359039BB88FD53E210F0A8D * L_6 = V_2;
		EventHandler_1_t9D5FDB2FE48DCCFFD359039BB88FD53E210F0A8D * L_7 = V_1;
		EventHandler_1_t9D5FDB2FE48DCCFFD359039BB88FD53E210F0A8D * L_8;
		L_8 = InterlockedCompareExchangeImpl<EventHandler_1_t9D5FDB2FE48DCCFFD359039BB88FD53E210F0A8D *>((EventHandler_1_t9D5FDB2FE48DCCFFD359039BB88FD53E210F0A8D **)L_5, L_6, L_7);
		V_0 = L_8;
		EventHandler_1_t9D5FDB2FE48DCCFFD359039BB88FD53E210F0A8D * L_9 = V_0;
		EventHandler_1_t9D5FDB2FE48DCCFFD359039BB88FD53E210F0A8D * L_10 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_t9D5FDB2FE48DCCFFD359039BB88FD53E210F0A8D *)L_9) == ((RuntimeObject*)(EventHandler_1_t9D5FDB2FE48DCCFFD359039BB88FD53E210F0A8D *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.Recognizer::add_SessionStarted(System.EventHandler`1<Microsoft.CognitiveServices.Speech.SessionEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Recognizer_add_SessionStarted_m0AE6F1FEABDB92BBFBFAC1913766AF0C7C5EC181 (Recognizer_tF1FAA5F9E223C619151C5DA96D83F0AF7E3C9E3E * __this, EventHandler_1_tB9B30C7ACA01631527E7047FB53709C6EC5B260A * ___value0, const RuntimeMethod* method)
{
	{
		EventHandler_1_tB9B30C7ACA01631527E7047FB53709C6EC5B260A * L_0 = __this->get__SessionStarted_0();
		if (L_0)
		{
			goto IL_0029;
		}
	}
	{
		InteropSafeHandle_tF14E3AD32AC904F5E38F4FAC0ED46417062386C6 * L_1 = __this->get_recoHandle_4();
		CallbackFunctionDelegate_tEDE2A24857EFCB03EE502D1E6E8A9E977030EAC4 * L_2 = __this->get_sessionStartedCallbackDelegate_12();
		GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603  L_3 = __this->get_gch_14();
		intptr_t L_4;
		L_4 = GCHandle_ToIntPtr_m017FBB27407865DD17A269CC03518EC518DE5AEA(L_3, /*hidden argument*/NULL);
		intptr_t L_5;
		L_5 = Recognizer_recognizer_session_started_set_callback_m23B0AD337C8446036392FD763D5C81B4D43A8709(L_1, L_2, (intptr_t)L_4, /*hidden argument*/NULL);
		SpxExceptionThrower_ThrowIfFail_m7269610C68DA4D960FE5E6208DF1BD9282C8F2DA((intptr_t)L_5, /*hidden argument*/NULL);
	}

IL_0029:
	{
		EventHandler_1_tB9B30C7ACA01631527E7047FB53709C6EC5B260A * L_6 = ___value0;
		Recognizer_add__SessionStarted_m82C00A0B6456390DBDF96FE466647D964302FE08(__this, L_6, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.Recognizer::remove_SessionStarted(System.EventHandler`1<Microsoft.CognitiveServices.Speech.SessionEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Recognizer_remove_SessionStarted_mC51DC2F48770679D9EFD9903CA369DA470A2F805 (Recognizer_tF1FAA5F9E223C619151C5DA96D83F0AF7E3C9E3E * __this, EventHandler_1_tB9B30C7ACA01631527E7047FB53709C6EC5B260A * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		EventHandler_1_tB9B30C7ACA01631527E7047FB53709C6EC5B260A * L_0 = ___value0;
		Recognizer_remove__SessionStarted_mDE2352B8E75ECF0D16F283EB81A72D769F129A3B(__this, L_0, /*hidden argument*/NULL);
		EventHandler_1_tB9B30C7ACA01631527E7047FB53709C6EC5B260A * L_1 = __this->get__SessionStarted_0();
		if (L_1)
		{
			goto IL_0025;
		}
	}
	{
		InteropSafeHandle_tF14E3AD32AC904F5E38F4FAC0ED46417062386C6 * L_2 = __this->get_recoHandle_4();
		intptr_t L_3;
		L_3 = Recognizer_recognizer_session_started_set_callback_m23B0AD337C8446036392FD763D5C81B4D43A8709(L_2, (CallbackFunctionDelegate_tEDE2A24857EFCB03EE502D1E6E8A9E977030EAC4 *)NULL, (intptr_t)(0), /*hidden argument*/NULL);
		SpxExceptionThrower_LogErrorIfFail_m752E6CB197597DAD0613E0AA21841F7EFD46D624((intptr_t)L_3, /*hidden argument*/NULL);
	}

IL_0025:
	{
		return;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.Recognizer::add_SessionStopped(System.EventHandler`1<Microsoft.CognitiveServices.Speech.SessionEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Recognizer_add_SessionStopped_m3CF6FD49B291A3D611BCAA757E9816CA566A6510 (Recognizer_tF1FAA5F9E223C619151C5DA96D83F0AF7E3C9E3E * __this, EventHandler_1_tB9B30C7ACA01631527E7047FB53709C6EC5B260A * ___value0, const RuntimeMethod* method)
{
	{
		EventHandler_1_tB9B30C7ACA01631527E7047FB53709C6EC5B260A * L_0 = __this->get__SessionStopped_1();
		if (L_0)
		{
			goto IL_0029;
		}
	}
	{
		InteropSafeHandle_tF14E3AD32AC904F5E38F4FAC0ED46417062386C6 * L_1 = __this->get_recoHandle_4();
		CallbackFunctionDelegate_tEDE2A24857EFCB03EE502D1E6E8A9E977030EAC4 * L_2 = __this->get_sessionStoppedCallbackDelegate_13();
		GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603  L_3 = __this->get_gch_14();
		intptr_t L_4;
		L_4 = GCHandle_ToIntPtr_m017FBB27407865DD17A269CC03518EC518DE5AEA(L_3, /*hidden argument*/NULL);
		intptr_t L_5;
		L_5 = Recognizer_recognizer_session_stopped_set_callback_mEAD7E8432B82F964E1C5578C37DCDAD087A8C41B(L_1, L_2, (intptr_t)L_4, /*hidden argument*/NULL);
		SpxExceptionThrower_ThrowIfFail_m7269610C68DA4D960FE5E6208DF1BD9282C8F2DA((intptr_t)L_5, /*hidden argument*/NULL);
	}

IL_0029:
	{
		EventHandler_1_tB9B30C7ACA01631527E7047FB53709C6EC5B260A * L_6 = ___value0;
		Recognizer_add__SessionStopped_m72A41C93CFD304A89B9369D6E74D7E1D40D16D36(__this, L_6, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.Recognizer::remove_SessionStopped(System.EventHandler`1<Microsoft.CognitiveServices.Speech.SessionEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Recognizer_remove_SessionStopped_m7DB1219DB86C671AC5BC546493F6A61255796FC2 (Recognizer_tF1FAA5F9E223C619151C5DA96D83F0AF7E3C9E3E * __this, EventHandler_1_tB9B30C7ACA01631527E7047FB53709C6EC5B260A * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		EventHandler_1_tB9B30C7ACA01631527E7047FB53709C6EC5B260A * L_0 = ___value0;
		Recognizer_remove__SessionStopped_m5A5E96C40EA8CA9ADA763CEBF02573CAC0A32BC6(__this, L_0, /*hidden argument*/NULL);
		EventHandler_1_tB9B30C7ACA01631527E7047FB53709C6EC5B260A * L_1 = __this->get__SessionStopped_1();
		if (L_1)
		{
			goto IL_0025;
		}
	}
	{
		InteropSafeHandle_tF14E3AD32AC904F5E38F4FAC0ED46417062386C6 * L_2 = __this->get_recoHandle_4();
		intptr_t L_3;
		L_3 = Recognizer_recognizer_session_stopped_set_callback_mEAD7E8432B82F964E1C5578C37DCDAD087A8C41B(L_2, (CallbackFunctionDelegate_tEDE2A24857EFCB03EE502D1E6E8A9E977030EAC4 *)NULL, (intptr_t)(0), /*hidden argument*/NULL);
		SpxExceptionThrower_LogErrorIfFail_m752E6CB197597DAD0613E0AA21841F7EFD46D624((intptr_t)L_3, /*hidden argument*/NULL);
	}

IL_0025:
	{
		return;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.Recognizer::add_SpeechStartDetected(System.EventHandler`1<Microsoft.CognitiveServices.Speech.RecognitionEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Recognizer_add_SpeechStartDetected_mD68D76AB0CC0A6341CF57207E7E07E23F63D3D67 (Recognizer_tF1FAA5F9E223C619151C5DA96D83F0AF7E3C9E3E * __this, EventHandler_1_t9D5FDB2FE48DCCFFD359039BB88FD53E210F0A8D * ___value0, const RuntimeMethod* method)
{
	{
		EventHandler_1_t9D5FDB2FE48DCCFFD359039BB88FD53E210F0A8D * L_0 = __this->get__SpeechStartDetected_2();
		if (L_0)
		{
			goto IL_0029;
		}
	}
	{
		InteropSafeHandle_tF14E3AD32AC904F5E38F4FAC0ED46417062386C6 * L_1 = __this->get_recoHandle_4();
		CallbackFunctionDelegate_tEDE2A24857EFCB03EE502D1E6E8A9E977030EAC4 * L_2 = __this->get_speechStartDetectedCallbackDelegate_10();
		GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603  L_3 = __this->get_gch_14();
		intptr_t L_4;
		L_4 = GCHandle_ToIntPtr_m017FBB27407865DD17A269CC03518EC518DE5AEA(L_3, /*hidden argument*/NULL);
		intptr_t L_5;
		L_5 = Recognizer_recognizer_speech_start_detected_set_callback_m42E74A08ECDDA5E9BEA53AB98F170276324380F1(L_1, L_2, (intptr_t)L_4, /*hidden argument*/NULL);
		SpxExceptionThrower_ThrowIfFail_m7269610C68DA4D960FE5E6208DF1BD9282C8F2DA((intptr_t)L_5, /*hidden argument*/NULL);
	}

IL_0029:
	{
		EventHandler_1_t9D5FDB2FE48DCCFFD359039BB88FD53E210F0A8D * L_6 = ___value0;
		Recognizer_add__SpeechStartDetected_m0F0EC04B8F79FCE22C43242DF2A774E8AB57A737(__this, L_6, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.Recognizer::remove_SpeechStartDetected(System.EventHandler`1<Microsoft.CognitiveServices.Speech.RecognitionEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Recognizer_remove_SpeechStartDetected_mB9E6CC75B3A409F58BC5D9ACFDEC8F64E8F7FEB4 (Recognizer_tF1FAA5F9E223C619151C5DA96D83F0AF7E3C9E3E * __this, EventHandler_1_t9D5FDB2FE48DCCFFD359039BB88FD53E210F0A8D * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		EventHandler_1_t9D5FDB2FE48DCCFFD359039BB88FD53E210F0A8D * L_0 = ___value0;
		Recognizer_remove__SpeechStartDetected_m4647638FFD5518D8C6356FD0B788A2D8E123D705(__this, L_0, /*hidden argument*/NULL);
		EventHandler_1_t9D5FDB2FE48DCCFFD359039BB88FD53E210F0A8D * L_1 = __this->get__SpeechStartDetected_2();
		if (L_1)
		{
			goto IL_0025;
		}
	}
	{
		InteropSafeHandle_tF14E3AD32AC904F5E38F4FAC0ED46417062386C6 * L_2 = __this->get_recoHandle_4();
		intptr_t L_3;
		L_3 = Recognizer_recognizer_speech_start_detected_set_callback_m42E74A08ECDDA5E9BEA53AB98F170276324380F1(L_2, (CallbackFunctionDelegate_tEDE2A24857EFCB03EE502D1E6E8A9E977030EAC4 *)NULL, (intptr_t)(0), /*hidden argument*/NULL);
		SpxExceptionThrower_LogErrorIfFail_m752E6CB197597DAD0613E0AA21841F7EFD46D624((intptr_t)L_3, /*hidden argument*/NULL);
	}

IL_0025:
	{
		return;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.Recognizer::add_SpeechEndDetected(System.EventHandler`1<Microsoft.CognitiveServices.Speech.RecognitionEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Recognizer_add_SpeechEndDetected_mFC27AE69D120DE02B47F67EB7DA0E13FB4070CA4 (Recognizer_tF1FAA5F9E223C619151C5DA96D83F0AF7E3C9E3E * __this, EventHandler_1_t9D5FDB2FE48DCCFFD359039BB88FD53E210F0A8D * ___value0, const RuntimeMethod* method)
{
	{
		EventHandler_1_t9D5FDB2FE48DCCFFD359039BB88FD53E210F0A8D * L_0 = __this->get__SpeechEndDetected_3();
		if (L_0)
		{
			goto IL_0029;
		}
	}
	{
		InteropSafeHandle_tF14E3AD32AC904F5E38F4FAC0ED46417062386C6 * L_1 = __this->get_recoHandle_4();
		CallbackFunctionDelegate_tEDE2A24857EFCB03EE502D1E6E8A9E977030EAC4 * L_2 = __this->get_speechEndDetectedCallbackDelegate_11();
		GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603  L_3 = __this->get_gch_14();
		intptr_t L_4;
		L_4 = GCHandle_ToIntPtr_m017FBB27407865DD17A269CC03518EC518DE5AEA(L_3, /*hidden argument*/NULL);
		intptr_t L_5;
		L_5 = Recognizer_recognizer_speech_end_detected_set_callback_m54E9AA603B97AB97F61866B60D875BA4DDEC25CE(L_1, L_2, (intptr_t)L_4, /*hidden argument*/NULL);
		SpxExceptionThrower_ThrowIfFail_m7269610C68DA4D960FE5E6208DF1BD9282C8F2DA((intptr_t)L_5, /*hidden argument*/NULL);
	}

IL_0029:
	{
		EventHandler_1_t9D5FDB2FE48DCCFFD359039BB88FD53E210F0A8D * L_6 = ___value0;
		Recognizer_add__SpeechEndDetected_m15AA9CD5EA864B18E1F29B21F3349E4EDE9899BB(__this, L_6, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.Recognizer::remove_SpeechEndDetected(System.EventHandler`1<Microsoft.CognitiveServices.Speech.RecognitionEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Recognizer_remove_SpeechEndDetected_mA7AAD2BC5C7C3246953879E19F047A62D8CCC3FA (Recognizer_tF1FAA5F9E223C619151C5DA96D83F0AF7E3C9E3E * __this, EventHandler_1_t9D5FDB2FE48DCCFFD359039BB88FD53E210F0A8D * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		EventHandler_1_t9D5FDB2FE48DCCFFD359039BB88FD53E210F0A8D * L_0 = ___value0;
		Recognizer_remove__SpeechEndDetected_m41E1F529B192A8C325D9B8D40652BE2AC20FA480(__this, L_0, /*hidden argument*/NULL);
		EventHandler_1_t9D5FDB2FE48DCCFFD359039BB88FD53E210F0A8D * L_1 = __this->get__SpeechEndDetected_3();
		if (L_1)
		{
			goto IL_0025;
		}
	}
	{
		InteropSafeHandle_tF14E3AD32AC904F5E38F4FAC0ED46417062386C6 * L_2 = __this->get_recoHandle_4();
		intptr_t L_3;
		L_3 = Recognizer_recognizer_speech_end_detected_set_callback_m54E9AA603B97AB97F61866B60D875BA4DDEC25CE(L_2, (CallbackFunctionDelegate_tEDE2A24857EFCB03EE502D1E6E8A9E977030EAC4 *)NULL, (intptr_t)(0), /*hidden argument*/NULL);
		SpxExceptionThrower_LogErrorIfFail_m752E6CB197597DAD0613E0AA21841F7EFD46D624((intptr_t)L_3, /*hidden argument*/NULL);
	}

IL_0025:
	{
		return;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.Recognizer::.ctor(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Recognizer__ctor_m5707D0C68E07B4A737C753DDBA817377F0CDDF5E (Recognizer_tF1FAA5F9E223C619151C5DA96D83F0AF7E3C9E3E * __this, InteropSafeHandle_tF14E3AD32AC904F5E38F4FAC0ED46417062386C6 * ___recoPtr0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CallbackFunctionDelegate_tEDE2A24857EFCB03EE502D1E6E8A9E977030EAC4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Recognizer_FireEvent_SetSessionStarted_mE1D278B2C1F2EA34E714D8E5F41CF8EA7E533F11_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Recognizer_FireEvent_SetSessionStopped_mC49DC694FC309FDE44262E02039FB542A838CC78_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Recognizer_FireEvent_SpeechEndDetected_mBD282262A151F5C473D1C49CFF74DEDDD71E7769_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Recognizer_FireEvent_SpeechStartDetected_m6BA5E049E81970E282933AEEA38E42DC461AC29F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1532A53696EE625AE3777874840B492D52037C8E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral31514D8FFE6EBD8A160985B5C25BE0F2A7BEF863);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBEE1F32E38A053DAC1C8FBB1F39277CA0C67EB06);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_asyncStartContinuousHandle_6((intptr_t)(0));
		__this->set_asyncStopContinuousHandle_7((intptr_t)(0));
		__this->set_asyncStartKeywordHandle_8((intptr_t)(0));
		__this->set_asyncStopKeywordHandle_9((intptr_t)(0));
		RuntimeObject * L_0 = (RuntimeObject *)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(L_0, /*hidden argument*/NULL);
		__this->set_recognizerLock_17(L_0);
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		InteropSafeHandle_tF14E3AD32AC904F5E38F4FAC0ED46417062386C6 * L_1 = ___recoPtr0;
		SpxExceptionThrower_ThrowIfNull_mC54EA71790A454E5785FC15C4FFBB6F457E772DB(L_1, (String_t*)NULL, /*hidden argument*/NULL);
		InteropSafeHandle_tF14E3AD32AC904F5E38F4FAC0ED46417062386C6 * L_2 = ___recoPtr0;
		__this->set_recoHandle_4(L_2);
		InteropSafeHandle_tF14E3AD32AC904F5E38F4FAC0ED46417062386C6 * L_3 = ___recoPtr0;
		NullCheck(L_3);
		String_t* L_4;
		L_4 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_3);
		__this->set_pointerHandle_5(L_4);
		String_t* L_5 = __this->get_pointerHandle_5();
		String_t* L_6;
		L_6 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteralBEE1F32E38A053DAC1C8FBB1F39277CA0C67EB06, L_5, /*hidden argument*/NULL);
		Diagnostics_SPX_TRACE_VERBOSE_mC8FE10F8F57265211C7A31D049321F461DF90400(L_6, ((int32_t)120), _stringLiteral31514D8FFE6EBD8A160985B5C25BE0F2A7BEF863, _stringLiteral1532A53696EE625AE3777874840B492D52037C8E, /*hidden argument*/NULL);
		GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603  L_7;
		L_7 = GCHandle_Alloc_mBF5C4C0E8605F97427BFDF96D68AACD4A4D6DDEC(__this, 0, /*hidden argument*/NULL);
		__this->set_gch_14(L_7);
		CallbackFunctionDelegate_tEDE2A24857EFCB03EE502D1E6E8A9E977030EAC4 * L_8 = (CallbackFunctionDelegate_tEDE2A24857EFCB03EE502D1E6E8A9E977030EAC4 *)il2cpp_codegen_object_new(CallbackFunctionDelegate_tEDE2A24857EFCB03EE502D1E6E8A9E977030EAC4_il2cpp_TypeInfo_var);
		CallbackFunctionDelegate__ctor_m34250E2B4EB599FB96576EC76B41BA44F32482AB(L_8, NULL, (intptr_t)((intptr_t)Recognizer_FireEvent_SpeechStartDetected_m6BA5E049E81970E282933AEEA38E42DC461AC29F_RuntimeMethod_var), /*hidden argument*/NULL);
		__this->set_speechStartDetectedCallbackDelegate_10(L_8);
		CallbackFunctionDelegate_tEDE2A24857EFCB03EE502D1E6E8A9E977030EAC4 * L_9 = (CallbackFunctionDelegate_tEDE2A24857EFCB03EE502D1E6E8A9E977030EAC4 *)il2cpp_codegen_object_new(CallbackFunctionDelegate_tEDE2A24857EFCB03EE502D1E6E8A9E977030EAC4_il2cpp_TypeInfo_var);
		CallbackFunctionDelegate__ctor_m34250E2B4EB599FB96576EC76B41BA44F32482AB(L_9, NULL, (intptr_t)((intptr_t)Recognizer_FireEvent_SpeechEndDetected_mBD282262A151F5C473D1C49CFF74DEDDD71E7769_RuntimeMethod_var), /*hidden argument*/NULL);
		__this->set_speechEndDetectedCallbackDelegate_11(L_9);
		CallbackFunctionDelegate_tEDE2A24857EFCB03EE502D1E6E8A9E977030EAC4 * L_10 = (CallbackFunctionDelegate_tEDE2A24857EFCB03EE502D1E6E8A9E977030EAC4 *)il2cpp_codegen_object_new(CallbackFunctionDelegate_tEDE2A24857EFCB03EE502D1E6E8A9E977030EAC4_il2cpp_TypeInfo_var);
		CallbackFunctionDelegate__ctor_m34250E2B4EB599FB96576EC76B41BA44F32482AB(L_10, NULL, (intptr_t)((intptr_t)Recognizer_FireEvent_SetSessionStarted_mE1D278B2C1F2EA34E714D8E5F41CF8EA7E533F11_RuntimeMethod_var), /*hidden argument*/NULL);
		__this->set_sessionStartedCallbackDelegate_12(L_10);
		CallbackFunctionDelegate_tEDE2A24857EFCB03EE502D1E6E8A9E977030EAC4 * L_11 = (CallbackFunctionDelegate_tEDE2A24857EFCB03EE502D1E6E8A9E977030EAC4 *)il2cpp_codegen_object_new(CallbackFunctionDelegate_tEDE2A24857EFCB03EE502D1E6E8A9E977030EAC4_il2cpp_TypeInfo_var);
		CallbackFunctionDelegate__ctor_m34250E2B4EB599FB96576EC76B41BA44F32482AB(L_11, NULL, (intptr_t)((intptr_t)Recognizer_FireEvent_SetSessionStopped_mC49DC694FC309FDE44262E02039FB542A838CC78_RuntimeMethod_var), /*hidden argument*/NULL);
		__this->set_sessionStoppedCallbackDelegate_13(L_11);
		return;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.Recognizer::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Recognizer_Finalize_m20F81169F675CE0A27215591F1330A8853F916F8 (Recognizer_tF1FAA5F9E223C619151C5DA96D83F0AF7E3C9E3E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1532A53696EE625AE3777874840B492D52037C8E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral990E9465081709697449AFB110415A8629DE2E13);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF00BD984FE2440EACF0054D39EEEAE818E9EBB32);
		s_Il2CppMethodInitialized = true;
	}
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;

IL_0000:
	try
	{ // begin try (depth: 1)
		String_t* L_0 = __this->get_pointerHandle_5();
		String_t* L_1;
		L_1 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteral990E9465081709697449AFB110415A8629DE2E13, L_0, /*hidden argument*/NULL);
		Diagnostics_SPX_TRACE_VERBOSE_mC8FE10F8F57265211C7A31D049321F461DF90400(L_1, ((int32_t)131), _stringLiteralF00BD984FE2440EACF0054D39EEEAE818E9EBB32, _stringLiteral1532A53696EE625AE3777874840B492D52037C8E, /*hidden argument*/NULL);
		il2cpp_codegen_memory_barrier();
		__this->set_isDisposing_16(1);
		VirtActionInvoker1< bool >::Invoke(5 /* System.Void Microsoft.CognitiveServices.Speech.Recognizer::Dispose(System.Boolean) */, __this, (bool)0);
		IL2CPP_LEAVE(0x3D, FINALLY_0036);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0036;
	}

FINALLY_0036:
	{ // begin finally (depth: 1)
		Object_Finalize_mC59C83CF4F7707E425FFA6362931C25D4C36676A(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(54)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(54)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x3D, IL_003d)
	}

IL_003d:
	{
		return;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.Recognizer::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Recognizer_Dispose_m0808AC62F7D42E146FB7349FCB2C2E1D4776F994 (Recognizer_tF1FAA5F9E223C619151C5DA96D83F0AF7E3C9E3E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GC_tD6F0377620BF01385965FD29272CF088A4309C0D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	bool V_1 = false;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;

IL_0000:
	try
	{ // begin try (depth: 1)
		{
			il2cpp_codegen_memory_barrier();
			__this->set_isDisposing_16(1);
			RuntimeObject * L_0 = __this->get_recognizerLock_17();
			V_0 = L_0;
			V_1 = (bool)0;
		}

IL_0012:
		try
		{ // begin try (depth: 2)
			{
				RuntimeObject * L_1 = V_0;
				Monitor_Enter_mBEB6CC84184B46F26375EC3FC8921D16E48EA4C4(L_1, (bool*)(&V_1), /*hidden argument*/NULL);
				int32_t L_2 = __this->get_activeAsyncRecognitionCounter_18();
				if (!L_2)
				{
					goto IL_002d;
				}
			}

IL_0022:
			{
				InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB * L_3 = (InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB_il2cpp_TypeInfo_var)));
				InvalidOperationException__ctor_mC012CE552988309733C896F3FEA8249171E4402E(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral263D04BA595C06ADC50CF667EA6F2290337CDAC0)), /*hidden argument*/NULL);
				IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Recognizer_Dispose_m0808AC62F7D42E146FB7349FCB2C2E1D4776F994_RuntimeMethod_var)));
			}

IL_002d:
			{
				IL2CPP_LEAVE(0x47, FINALLY_002f);
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t *)e.ex;
			goto FINALLY_002f;
		}

FINALLY_002f:
		{ // begin finally (depth: 2)
			{
				bool L_4 = V_1;
				if (!L_4)
				{
					goto IL_0038;
				}
			}

IL_0032:
			{
				RuntimeObject * L_5 = V_0;
				Monitor_Exit_mA776B403DA88AC77CDEEF67AB9F0D0E77ABD254A(L_5, /*hidden argument*/NULL);
			}

IL_0038:
			{
				IL2CPP_END_FINALLY(47)
			}
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(47)
		{
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
			IL2CPP_END_CLEANUP(0x47, FINALLY_0039);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0039;
	}

FINALLY_0039:
	{ // begin finally (depth: 1)
		VirtActionInvoker1< bool >::Invoke(5 /* System.Void Microsoft.CognitiveServices.Speech.Recognizer::Dispose(System.Boolean) */, __this, (bool)1);
		IL2CPP_RUNTIME_CLASS_INIT(GC_tD6F0377620BF01385965FD29272CF088A4309C0D_il2cpp_TypeInfo_var);
		GC_SuppressFinalize_mEE880E988C6AF32AA2F67F2D62715281EAA41555(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(57)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(57)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x47, IL_0047)
	}

IL_0047:
	{
		return;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.Recognizer::Dispose(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Recognizer_Dispose_m087FE4E3ED875BD3BF69DA66606404145E3C0400 (Recognizer_tF1FAA5F9E223C619151C5DA96D83F0AF7E3C9E3E * __this, bool ___disposing0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0E113F97D77FF0E45934C610A144C2819DC64A04);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1532A53696EE625AE3777874840B492D52037C8E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2DAEEF072FFF48537E5ED531F51D87E1CF74D643);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = ___disposing0;
		bool L_1 = L_0;
		RuntimeObject * L_2 = Box(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var, &L_1);
		String_t* L_3 = __this->get_pointerHandle_5();
		String_t* L_4;
		L_4 = String_Format_m8D1CB0410C35E052A53AE957C914C841E54BAB66(_stringLiteral2DAEEF072FFF48537E5ED531F51D87E1CF74D643, L_2, L_3, /*hidden argument*/NULL);
		Diagnostics_SPX_TRACE_VERBOSE_mC8FE10F8F57265211C7A31D049321F461DF90400(L_4, ((int32_t)169), _stringLiteral0E113F97D77FF0E45934C610A144C2819DC64A04, _stringLiteral1532A53696EE625AE3777874840B492D52037C8E, /*hidden argument*/NULL);
		bool L_5 = __this->get_disposed_15();
		il2cpp_codegen_memory_barrier();
		if (!L_5)
		{
			goto IL_0035;
		}
	}
	{
		return;
	}

IL_0035:
	{
		__this->set_speechStartDetectedCallbackDelegate_10((CallbackFunctionDelegate_tEDE2A24857EFCB03EE502D1E6E8A9E977030EAC4 *)NULL);
		__this->set_speechEndDetectedCallbackDelegate_11((CallbackFunctionDelegate_tEDE2A24857EFCB03EE502D1E6E8A9E977030EAC4 *)NULL);
		__this->set_sessionStartedCallbackDelegate_12((CallbackFunctionDelegate_tEDE2A24857EFCB03EE502D1E6E8A9E977030EAC4 *)NULL);
		__this->set_sessionStoppedCallbackDelegate_13((CallbackFunctionDelegate_tEDE2A24857EFCB03EE502D1E6E8A9E977030EAC4 *)NULL);
		GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603 * L_6 = __this->get_address_of_gch_14();
		bool L_7;
		L_7 = GCHandle_get_IsAllocated_mEDA4DAC6AD6D881110E96CAFDAB78C068F5B144D((GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603 *)L_6, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_0069;
		}
	}
	{
		GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603 * L_8 = __this->get_address_of_gch_14();
		GCHandle_Free_mB4E9415544FC9F0075C02AB17E270E49AF006025((GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603 *)L_8, /*hidden argument*/NULL);
	}

IL_0069:
	{
		il2cpp_codegen_memory_barrier();
		__this->set_disposed_15(1);
		return;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.Recognizer::FireEvent_SetSessionStarted(System.IntPtr,System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Recognizer_FireEvent_SetSessionStarted_mE1D278B2C1F2EA34E714D8E5F41CF8EA7E533F11 (intptr_t ___hreco0, intptr_t ___hevent1, intptr_t ___pvContext2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_Invoke_mE1FE7957F49CE4B3CA60D24454E2464B47E68467_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InteropSafeHandle_GetObjectFromWeakHandle_TisRecognizer_tF1FAA5F9E223C619151C5DA96D83F0AF7E3C9E3E_mFCA3860AC37DBDE394D56D75B0C1F69E72D6BDDE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SessionEventArgs_t720E6DA982AD7DE7933835DEBBECD8B78F28CAB1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Recognizer_tF1FAA5F9E223C619151C5DA96D83F0AF7E3C9E3E * V_0 = NULL;
	SessionEventArgs_t720E6DA982AD7DE7933835DEBBECD8B78F28CAB1 * V_1 = NULL;
	Exception_t * V_2 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 3> __leave_targets;
	EventHandler_1_tB9B30C7ACA01631527E7047FB53709C6EC5B260A * G_B5_0 = NULL;
	EventHandler_1_tB9B30C7ACA01631527E7047FB53709C6EC5B260A * G_B4_0 = NULL;

IL_0000:
	try
	{ // begin try (depth: 1)
		{
			intptr_t L_0 = ___pvContext2;
			Recognizer_tF1FAA5F9E223C619151C5DA96D83F0AF7E3C9E3E * L_1;
			L_1 = InteropSafeHandle_GetObjectFromWeakHandle_TisRecognizer_tF1FAA5F9E223C619151C5DA96D83F0AF7E3C9E3E_mFCA3860AC37DBDE394D56D75B0C1F69E72D6BDDE((intptr_t)L_0, /*hidden argument*/InteropSafeHandle_GetObjectFromWeakHandle_TisRecognizer_tF1FAA5F9E223C619151C5DA96D83F0AF7E3C9E3E_mFCA3860AC37DBDE394D56D75B0C1F69E72D6BDDE_RuntimeMethod_var);
			V_0 = L_1;
			Recognizer_tF1FAA5F9E223C619151C5DA96D83F0AF7E3C9E3E * L_2 = V_0;
			if (!L_2)
			{
				goto IL_0014;
			}
		}

IL_000a:
		{
			Recognizer_tF1FAA5F9E223C619151C5DA96D83F0AF7E3C9E3E * L_3 = V_0;
			NullCheck(L_3);
			bool L_4 = L_3->get_isDisposing_16();
			il2cpp_codegen_memory_barrier();
			if (!L_4)
			{
				goto IL_0016;
			}
		}

IL_0014:
		{
			goto IL_0040;
		}

IL_0016:
		{
			intptr_t L_5 = ___hevent1;
			SessionEventArgs_t720E6DA982AD7DE7933835DEBBECD8B78F28CAB1 * L_6 = (SessionEventArgs_t720E6DA982AD7DE7933835DEBBECD8B78F28CAB1 *)il2cpp_codegen_object_new(SessionEventArgs_t720E6DA982AD7DE7933835DEBBECD8B78F28CAB1_il2cpp_TypeInfo_var);
			SessionEventArgs__ctor_mA2BA5B62E7BCD52804ACA274FE514BF94DBB9891(L_6, (intptr_t)L_5, /*hidden argument*/NULL);
			V_1 = L_6;
			Recognizer_tF1FAA5F9E223C619151C5DA96D83F0AF7E3C9E3E * L_7 = V_0;
			NullCheck(L_7);
			EventHandler_1_tB9B30C7ACA01631527E7047FB53709C6EC5B260A * L_8 = L_7->get__SessionStarted_0();
			EventHandler_1_tB9B30C7ACA01631527E7047FB53709C6EC5B260A * L_9 = L_8;
			G_B4_0 = L_9;
			if (L_9)
			{
				G_B5_0 = L_9;
				goto IL_0029;
			}
		}

IL_0026:
		{
			goto IL_0030;
		}

IL_0029:
		{
			Recognizer_tF1FAA5F9E223C619151C5DA96D83F0AF7E3C9E3E * L_10 = V_0;
			SessionEventArgs_t720E6DA982AD7DE7933835DEBBECD8B78F28CAB1 * L_11 = V_1;
			NullCheck(G_B5_0);
			EventHandler_1_Invoke_mE1FE7957F49CE4B3CA60D24454E2464B47E68467(G_B5_0, L_10, L_11, /*hidden argument*/EventHandler_1_Invoke_mE1FE7957F49CE4B3CA60D24454E2464B47E68467_RuntimeMethod_var);
		}

IL_0030:
		{
			goto IL_0040;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0032;
		}
		throw e;
	}

CATCH_0032:
	{ // begin catch(System.Exception)
		V_2 = ((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *));
		Exception_t * L_12 = V_2;
		NullCheck(L_12);
		String_t* L_13;
		L_13 = VirtFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Exception::get_Message() */, L_12);
		SpxExceptionThrower_LogError_m238C27C8D305C674179F87D2C22B9F9780CA91E1(L_13, /*hidden argument*/NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0040;
	} // end catch (depth: 1)

IL_0040:
	{
		return;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.Recognizer::FireEvent_SetSessionStopped(System.IntPtr,System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Recognizer_FireEvent_SetSessionStopped_mC49DC694FC309FDE44262E02039FB542A838CC78 (intptr_t ___hreco0, intptr_t ___hevent1, intptr_t ___pvContext2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_Invoke_mE1FE7957F49CE4B3CA60D24454E2464B47E68467_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InteropSafeHandle_GetObjectFromWeakHandle_TisRecognizer_tF1FAA5F9E223C619151C5DA96D83F0AF7E3C9E3E_mFCA3860AC37DBDE394D56D75B0C1F69E72D6BDDE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SessionEventArgs_t720E6DA982AD7DE7933835DEBBECD8B78F28CAB1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Recognizer_tF1FAA5F9E223C619151C5DA96D83F0AF7E3C9E3E * V_0 = NULL;
	SessionEventArgs_t720E6DA982AD7DE7933835DEBBECD8B78F28CAB1 * V_1 = NULL;
	Exception_t * V_2 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 3> __leave_targets;
	EventHandler_1_tB9B30C7ACA01631527E7047FB53709C6EC5B260A * G_B5_0 = NULL;
	EventHandler_1_tB9B30C7ACA01631527E7047FB53709C6EC5B260A * G_B4_0 = NULL;

IL_0000:
	try
	{ // begin try (depth: 1)
		{
			intptr_t L_0 = ___pvContext2;
			Recognizer_tF1FAA5F9E223C619151C5DA96D83F0AF7E3C9E3E * L_1;
			L_1 = InteropSafeHandle_GetObjectFromWeakHandle_TisRecognizer_tF1FAA5F9E223C619151C5DA96D83F0AF7E3C9E3E_mFCA3860AC37DBDE394D56D75B0C1F69E72D6BDDE((intptr_t)L_0, /*hidden argument*/InteropSafeHandle_GetObjectFromWeakHandle_TisRecognizer_tF1FAA5F9E223C619151C5DA96D83F0AF7E3C9E3E_mFCA3860AC37DBDE394D56D75B0C1F69E72D6BDDE_RuntimeMethod_var);
			V_0 = L_1;
			Recognizer_tF1FAA5F9E223C619151C5DA96D83F0AF7E3C9E3E * L_2 = V_0;
			if (!L_2)
			{
				goto IL_0014;
			}
		}

IL_000a:
		{
			Recognizer_tF1FAA5F9E223C619151C5DA96D83F0AF7E3C9E3E * L_3 = V_0;
			NullCheck(L_3);
			bool L_4 = L_3->get_isDisposing_16();
			il2cpp_codegen_memory_barrier();
			if (!L_4)
			{
				goto IL_0016;
			}
		}

IL_0014:
		{
			goto IL_0040;
		}

IL_0016:
		{
			intptr_t L_5 = ___hevent1;
			SessionEventArgs_t720E6DA982AD7DE7933835DEBBECD8B78F28CAB1 * L_6 = (SessionEventArgs_t720E6DA982AD7DE7933835DEBBECD8B78F28CAB1 *)il2cpp_codegen_object_new(SessionEventArgs_t720E6DA982AD7DE7933835DEBBECD8B78F28CAB1_il2cpp_TypeInfo_var);
			SessionEventArgs__ctor_mA2BA5B62E7BCD52804ACA274FE514BF94DBB9891(L_6, (intptr_t)L_5, /*hidden argument*/NULL);
			V_1 = L_6;
			Recognizer_tF1FAA5F9E223C619151C5DA96D83F0AF7E3C9E3E * L_7 = V_0;
			NullCheck(L_7);
			EventHandler_1_tB9B30C7ACA01631527E7047FB53709C6EC5B260A * L_8 = L_7->get__SessionStopped_1();
			EventHandler_1_tB9B30C7ACA01631527E7047FB53709C6EC5B260A * L_9 = L_8;
			G_B4_0 = L_9;
			if (L_9)
			{
				G_B5_0 = L_9;
				goto IL_0029;
			}
		}

IL_0026:
		{
			goto IL_0030;
		}

IL_0029:
		{
			Recognizer_tF1FAA5F9E223C619151C5DA96D83F0AF7E3C9E3E * L_10 = V_0;
			SessionEventArgs_t720E6DA982AD7DE7933835DEBBECD8B78F28CAB1 * L_11 = V_1;
			NullCheck(G_B5_0);
			EventHandler_1_Invoke_mE1FE7957F49CE4B3CA60D24454E2464B47E68467(G_B5_0, L_10, L_11, /*hidden argument*/EventHandler_1_Invoke_mE1FE7957F49CE4B3CA60D24454E2464B47E68467_RuntimeMethod_var);
		}

IL_0030:
		{
			goto IL_0040;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0032;
		}
		throw e;
	}

CATCH_0032:
	{ // begin catch(System.Exception)
		V_2 = ((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *));
		Exception_t * L_12 = V_2;
		NullCheck(L_12);
		String_t* L_13;
		L_13 = VirtFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Exception::get_Message() */, L_12);
		SpxExceptionThrower_LogError_m238C27C8D305C674179F87D2C22B9F9780CA91E1(L_13, /*hidden argument*/NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0040;
	} // end catch (depth: 1)

IL_0040:
	{
		return;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.Recognizer::FireEvent_SpeechStartDetected(System.IntPtr,System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Recognizer_FireEvent_SpeechStartDetected_m6BA5E049E81970E282933AEEA38E42DC461AC29F (intptr_t ___hreco0, intptr_t ___hevent1, intptr_t ___pvContext2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_Invoke_m6FD7204CAF8D0E26A29FA8BC8D9136BAD6203FC3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InteropSafeHandle_GetObjectFromWeakHandle_TisRecognizer_tF1FAA5F9E223C619151C5DA96D83F0AF7E3C9E3E_mFCA3860AC37DBDE394D56D75B0C1F69E72D6BDDE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RecognitionEventArgs_tC7B8B5C317C90BF54CBE82BE86321F5359B98650_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Recognizer_tF1FAA5F9E223C619151C5DA96D83F0AF7E3C9E3E * V_0 = NULL;
	RecognitionEventArgs_tC7B8B5C317C90BF54CBE82BE86321F5359B98650 * V_1 = NULL;
	Exception_t * V_2 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 3> __leave_targets;
	EventHandler_1_t9D5FDB2FE48DCCFFD359039BB88FD53E210F0A8D * G_B5_0 = NULL;
	EventHandler_1_t9D5FDB2FE48DCCFFD359039BB88FD53E210F0A8D * G_B4_0 = NULL;

IL_0000:
	try
	{ // begin try (depth: 1)
		{
			intptr_t L_0 = ___pvContext2;
			Recognizer_tF1FAA5F9E223C619151C5DA96D83F0AF7E3C9E3E * L_1;
			L_1 = InteropSafeHandle_GetObjectFromWeakHandle_TisRecognizer_tF1FAA5F9E223C619151C5DA96D83F0AF7E3C9E3E_mFCA3860AC37DBDE394D56D75B0C1F69E72D6BDDE((intptr_t)L_0, /*hidden argument*/InteropSafeHandle_GetObjectFromWeakHandle_TisRecognizer_tF1FAA5F9E223C619151C5DA96D83F0AF7E3C9E3E_mFCA3860AC37DBDE394D56D75B0C1F69E72D6BDDE_RuntimeMethod_var);
			V_0 = L_1;
			Recognizer_tF1FAA5F9E223C619151C5DA96D83F0AF7E3C9E3E * L_2 = V_0;
			if (!L_2)
			{
				goto IL_0014;
			}
		}

IL_000a:
		{
			Recognizer_tF1FAA5F9E223C619151C5DA96D83F0AF7E3C9E3E * L_3 = V_0;
			NullCheck(L_3);
			bool L_4 = L_3->get_isDisposing_16();
			il2cpp_codegen_memory_barrier();
			if (!L_4)
			{
				goto IL_0016;
			}
		}

IL_0014:
		{
			goto IL_0040;
		}

IL_0016:
		{
			intptr_t L_5 = ___hevent1;
			RecognitionEventArgs_tC7B8B5C317C90BF54CBE82BE86321F5359B98650 * L_6 = (RecognitionEventArgs_tC7B8B5C317C90BF54CBE82BE86321F5359B98650 *)il2cpp_codegen_object_new(RecognitionEventArgs_tC7B8B5C317C90BF54CBE82BE86321F5359B98650_il2cpp_TypeInfo_var);
			RecognitionEventArgs__ctor_m31490D766642A01A99F86D9E037DEABFD21138FE(L_6, (intptr_t)L_5, /*hidden argument*/NULL);
			V_1 = L_6;
			Recognizer_tF1FAA5F9E223C619151C5DA96D83F0AF7E3C9E3E * L_7 = V_0;
			NullCheck(L_7);
			EventHandler_1_t9D5FDB2FE48DCCFFD359039BB88FD53E210F0A8D * L_8 = L_7->get__SpeechStartDetected_2();
			EventHandler_1_t9D5FDB2FE48DCCFFD359039BB88FD53E210F0A8D * L_9 = L_8;
			G_B4_0 = L_9;
			if (L_9)
			{
				G_B5_0 = L_9;
				goto IL_0029;
			}
		}

IL_0026:
		{
			goto IL_0030;
		}

IL_0029:
		{
			Recognizer_tF1FAA5F9E223C619151C5DA96D83F0AF7E3C9E3E * L_10 = V_0;
			RecognitionEventArgs_tC7B8B5C317C90BF54CBE82BE86321F5359B98650 * L_11 = V_1;
			NullCheck(G_B5_0);
			EventHandler_1_Invoke_m6FD7204CAF8D0E26A29FA8BC8D9136BAD6203FC3(G_B5_0, L_10, L_11, /*hidden argument*/EventHandler_1_Invoke_m6FD7204CAF8D0E26A29FA8BC8D9136BAD6203FC3_RuntimeMethod_var);
		}

IL_0030:
		{
			goto IL_0040;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0032;
		}
		throw e;
	}

CATCH_0032:
	{ // begin catch(System.Exception)
		V_2 = ((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *));
		Exception_t * L_12 = V_2;
		NullCheck(L_12);
		String_t* L_13;
		L_13 = VirtFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Exception::get_Message() */, L_12);
		SpxExceptionThrower_LogError_m238C27C8D305C674179F87D2C22B9F9780CA91E1(L_13, /*hidden argument*/NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0040;
	} // end catch (depth: 1)

IL_0040:
	{
		return;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.Recognizer::FireEvent_SpeechEndDetected(System.IntPtr,System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Recognizer_FireEvent_SpeechEndDetected_mBD282262A151F5C473D1C49CFF74DEDDD71E7769 (intptr_t ___hreco0, intptr_t ___hevent1, intptr_t ___pvContext2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_Invoke_m6FD7204CAF8D0E26A29FA8BC8D9136BAD6203FC3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InteropSafeHandle_GetObjectFromWeakHandle_TisRecognizer_tF1FAA5F9E223C619151C5DA96D83F0AF7E3C9E3E_mFCA3860AC37DBDE394D56D75B0C1F69E72D6BDDE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RecognitionEventArgs_tC7B8B5C317C90BF54CBE82BE86321F5359B98650_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Recognizer_tF1FAA5F9E223C619151C5DA96D83F0AF7E3C9E3E * V_0 = NULL;
	RecognitionEventArgs_tC7B8B5C317C90BF54CBE82BE86321F5359B98650 * V_1 = NULL;
	Exception_t * V_2 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 3> __leave_targets;
	EventHandler_1_t9D5FDB2FE48DCCFFD359039BB88FD53E210F0A8D * G_B5_0 = NULL;
	EventHandler_1_t9D5FDB2FE48DCCFFD359039BB88FD53E210F0A8D * G_B4_0 = NULL;

IL_0000:
	try
	{ // begin try (depth: 1)
		{
			intptr_t L_0 = ___pvContext2;
			Recognizer_tF1FAA5F9E223C619151C5DA96D83F0AF7E3C9E3E * L_1;
			L_1 = InteropSafeHandle_GetObjectFromWeakHandle_TisRecognizer_tF1FAA5F9E223C619151C5DA96D83F0AF7E3C9E3E_mFCA3860AC37DBDE394D56D75B0C1F69E72D6BDDE((intptr_t)L_0, /*hidden argument*/InteropSafeHandle_GetObjectFromWeakHandle_TisRecognizer_tF1FAA5F9E223C619151C5DA96D83F0AF7E3C9E3E_mFCA3860AC37DBDE394D56D75B0C1F69E72D6BDDE_RuntimeMethod_var);
			V_0 = L_1;
			Recognizer_tF1FAA5F9E223C619151C5DA96D83F0AF7E3C9E3E * L_2 = V_0;
			if (!L_2)
			{
				goto IL_0014;
			}
		}

IL_000a:
		{
			Recognizer_tF1FAA5F9E223C619151C5DA96D83F0AF7E3C9E3E * L_3 = V_0;
			NullCheck(L_3);
			bool L_4 = L_3->get_isDisposing_16();
			il2cpp_codegen_memory_barrier();
			if (!L_4)
			{
				goto IL_0016;
			}
		}

IL_0014:
		{
			goto IL_0040;
		}

IL_0016:
		{
			intptr_t L_5 = ___hevent1;
			RecognitionEventArgs_tC7B8B5C317C90BF54CBE82BE86321F5359B98650 * L_6 = (RecognitionEventArgs_tC7B8B5C317C90BF54CBE82BE86321F5359B98650 *)il2cpp_codegen_object_new(RecognitionEventArgs_tC7B8B5C317C90BF54CBE82BE86321F5359B98650_il2cpp_TypeInfo_var);
			RecognitionEventArgs__ctor_m31490D766642A01A99F86D9E037DEABFD21138FE(L_6, (intptr_t)L_5, /*hidden argument*/NULL);
			V_1 = L_6;
			Recognizer_tF1FAA5F9E223C619151C5DA96D83F0AF7E3C9E3E * L_7 = V_0;
			NullCheck(L_7);
			EventHandler_1_t9D5FDB2FE48DCCFFD359039BB88FD53E210F0A8D * L_8 = L_7->get__SpeechEndDetected_3();
			EventHandler_1_t9D5FDB2FE48DCCFFD359039BB88FD53E210F0A8D * L_9 = L_8;
			G_B4_0 = L_9;
			if (L_9)
			{
				G_B5_0 = L_9;
				goto IL_0029;
			}
		}

IL_0026:
		{
			goto IL_0030;
		}

IL_0029:
		{
			Recognizer_tF1FAA5F9E223C619151C5DA96D83F0AF7E3C9E3E * L_10 = V_0;
			RecognitionEventArgs_tC7B8B5C317C90BF54CBE82BE86321F5359B98650 * L_11 = V_1;
			NullCheck(G_B5_0);
			EventHandler_1_Invoke_m6FD7204CAF8D0E26A29FA8BC8D9136BAD6203FC3(G_B5_0, L_10, L_11, /*hidden argument*/EventHandler_1_Invoke_m6FD7204CAF8D0E26A29FA8BC8D9136BAD6203FC3_RuntimeMethod_var);
		}

IL_0030:
		{
			goto IL_0040;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0032;
		}
		throw e;
	}

CATCH_0032:
	{ // begin catch(System.Exception)
		V_2 = ((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *));
		Exception_t * L_12 = V_2;
		NullCheck(L_12);
		String_t* L_13;
		L_13 = VirtFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Exception::get_Message() */, L_12);
		SpxExceptionThrower_LogError_m238C27C8D305C674179F87D2C22B9F9780CA91E1(L_13, /*hidden argument*/NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0040;
	} // end catch (depth: 1)

IL_0040:
	{
		return;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.Recognizer::DoAsyncRecognitionAction(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Recognizer_DoAsyncRecognitionAction_m2268106F48438234958D981F40C8036136AFD5CF (Recognizer_tF1FAA5F9E223C619151C5DA96D83F0AF7E3C9E3E * __this, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___recoImplAction0, const RuntimeMethod* method)
{
	RuntimeObject * V_0 = NULL;
	bool V_1 = false;
	RuntimeObject * V_2 = NULL;
	bool V_3 = false;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 3> __leave_targets;
	{
		RuntimeObject * L_0 = __this->get_recognizerLock_17();
		V_0 = L_0;
		V_1 = (bool)0;
	}

IL_0009:
	try
	{ // begin try (depth: 1)
		RuntimeObject * L_1 = V_0;
		Monitor_Enter_mBEB6CC84184B46F26375EC3FC8921D16E48EA4C4(L_1, (bool*)(&V_1), /*hidden argument*/NULL);
		int32_t L_2 = __this->get_activeAsyncRecognitionCounter_18();
		__this->set_activeAsyncRecognitionCounter_18(((int32_t)il2cpp_codegen_add((int32_t)L_2, (int32_t)1)));
		IL2CPP_LEAVE(0x2B, FINALLY_0021);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0021;
	}

FINALLY_0021:
	{ // begin finally (depth: 1)
		{
			bool L_3 = V_1;
			if (!L_3)
			{
				goto IL_002a;
			}
		}

IL_0024:
		{
			RuntimeObject * L_4 = V_0;
			Monitor_Exit_mA776B403DA88AC77CDEEF67AB9F0D0E77ABD254A(L_4, /*hidden argument*/NULL);
		}

IL_002a:
		{
			IL2CPP_END_FINALLY(33)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(33)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x2B, IL_002b)
	}

IL_002b:
	{
		bool L_5 = __this->get_disposed_15();
		il2cpp_codegen_memory_barrier();
		if (L_5)
		{
			goto IL_003f;
		}
	}
	{
		bool L_6 = __this->get_isDisposing_16();
		il2cpp_codegen_memory_barrier();
		if (!L_6)
		{
			goto IL_0050;
		}
	}

IL_003f:
	{
		Type_t * L_7;
		L_7 = Object_GetType_m571FE8360C10B98C23AAF1F066D92C08CC94F45B(__this, /*hidden argument*/NULL);
		NullCheck(L_7);
		String_t* L_8;
		L_8 = VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_7);
		ObjectDisposedException_t29EF6F519F16BA477EC682F23E8344BB1E9A958A * L_9 = (ObjectDisposedException_t29EF6F519F16BA477EC682F23E8344BB1E9A958A *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ObjectDisposedException_t29EF6F519F16BA477EC682F23E8344BB1E9A958A_il2cpp_TypeInfo_var)));
		ObjectDisposedException__ctor_mE57C6A61713668708F9B3CEF060A8D006B1FE880(L_9, L_8, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Recognizer_DoAsyncRecognitionAction_m2268106F48438234958D981F40C8036136AFD5CF_RuntimeMethod_var)));
	}

IL_0050:
	{
	}

IL_0051:
	try
	{ // begin try (depth: 1)
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_10 = ___recoImplAction0;
		SpxExceptionThrower_ThrowIfNull_mC54EA71790A454E5785FC15C4FFBB6F457E772DB(L_10, (String_t*)NULL, /*hidden argument*/NULL);
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_11 = ___recoImplAction0;
		NullCheck(L_11);
		Action_Invoke_m3FFA5BE3D64F0FF8E1E1CB6F953913FADB5EB89E(L_11, /*hidden argument*/NULL);
		IL2CPP_LEAVE(0x8C, FINALLY_0060);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0060;
	}

FINALLY_0060:
	{ // begin finally (depth: 1)
		{
			RuntimeObject * L_12 = __this->get_recognizerLock_17();
			V_2 = L_12;
			V_3 = (bool)0;
		}

IL_0069:
		try
		{ // begin try (depth: 2)
			RuntimeObject * L_13 = V_2;
			Monitor_Enter_mBEB6CC84184B46F26375EC3FC8921D16E48EA4C4(L_13, (bool*)(&V_3), /*hidden argument*/NULL);
			int32_t L_14 = __this->get_activeAsyncRecognitionCounter_18();
			__this->set_activeAsyncRecognitionCounter_18(((int32_t)il2cpp_codegen_subtract((int32_t)L_14, (int32_t)1)));
			IL2CPP_LEAVE(0x8B, FINALLY_0081);
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t *)e.ex;
			goto FINALLY_0081;
		}

FINALLY_0081:
		{ // begin finally (depth: 2)
			{
				bool L_15 = V_3;
				if (!L_15)
				{
					goto IL_008a;
				}
			}

IL_0084:
			{
				RuntimeObject * L_16 = V_2;
				Monitor_Exit_mA776B403DA88AC77CDEEF67AB9F0D0E77ABD254A(L_16, /*hidden argument*/NULL);
			}

IL_008a:
			{
				IL2CPP_END_FINALLY(129)
			}
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(129)
		{
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
			IL2CPP_JUMP_TBL(0x8B, IL_008b)
		}

IL_008b:
		{
			IL2CPP_END_FINALLY(96)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(96)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x8C, IL_008c)
	}

IL_008c:
	{
		return;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.Recognizer::StartContinuousRecognition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Recognizer_StartContinuousRecognition_m619E72043511237D3E1C58D62E375DAA4F1ACA9C (Recognizer_tF1FAA5F9E223C619151C5DA96D83F0AF7E3C9E3E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7D62C11CCF10BDFC07ACE3D149248DE3F051849C);
		s_Il2CppMethodInitialized = true;
	}
	{
		intptr_t L_0 = __this->get_asyncStartContinuousHandle_6();
		bool L_1;
		L_1 = IntPtr_op_Inequality_m212AF0E66AA81FEDC982B1C8A44ADDA24B995EB8((intptr_t)L_0, (intptr_t)(0), /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0022;
		}
	}
	{
		intptr_t L_2 = __this->get_asyncStartContinuousHandle_6();
		intptr_t L_3;
		L_3 = Recognizer_recognizer_async_handle_release_mB7E4B1D8EEA5B0FE097A95562D5E09B2F7740CBA((intptr_t)L_2, /*hidden argument*/NULL);
		SpxExceptionThrower_ThrowIfFail_m7269610C68DA4D960FE5E6208DF1BD9282C8F2DA((intptr_t)L_3, /*hidden argument*/NULL);
	}

IL_0022:
	{
		InteropSafeHandle_tF14E3AD32AC904F5E38F4FAC0ED46417062386C6 * L_4 = __this->get_recoHandle_4();
		SpxExceptionThrower_ThrowIfNull_mC54EA71790A454E5785FC15C4FFBB6F457E772DB(L_4, _stringLiteral7D62C11CCF10BDFC07ACE3D149248DE3F051849C, /*hidden argument*/NULL);
		InteropSafeHandle_tF14E3AD32AC904F5E38F4FAC0ED46417062386C6 * L_5 = __this->get_recoHandle_4();
		intptr_t* L_6 = __this->get_address_of_asyncStartContinuousHandle_6();
		intptr_t L_7;
		L_7 = Recognizer_recognizer_start_continuous_recognition_async_mE0D8A324AA83CC7914CF3A677770B702A0225CF7(L_5, (intptr_t*)L_6, /*hidden argument*/NULL);
		SpxExceptionThrower_ThrowIfFail_m7269610C68DA4D960FE5E6208DF1BD9282C8F2DA((intptr_t)L_7, /*hidden argument*/NULL);
		intptr_t L_8 = __this->get_asyncStartContinuousHandle_6();
		intptr_t L_9;
		L_9 = Recognizer_recognizer_start_continuous_recognition_async_wait_for_m67B22C498B2E1C76189FF0CEBB430C8ED7D52AD9((intptr_t)L_8, (-1), /*hidden argument*/NULL);
		SpxExceptionThrower_ThrowIfFail_m7269610C68DA4D960FE5E6208DF1BD9282C8F2DA((intptr_t)L_9, /*hidden argument*/NULL);
		intptr_t L_10 = __this->get_asyncStartContinuousHandle_6();
		intptr_t L_11;
		L_11 = Recognizer_recognizer_async_handle_release_mB7E4B1D8EEA5B0FE097A95562D5E09B2F7740CBA((intptr_t)L_10, /*hidden argument*/NULL);
		SpxExceptionThrower_ThrowIfFail_m7269610C68DA4D960FE5E6208DF1BD9282C8F2DA((intptr_t)L_11, /*hidden argument*/NULL);
		__this->set_asyncStartContinuousHandle_6((intptr_t)(0));
		return;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.Recognizer::StopContinuousRecognition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Recognizer_StopContinuousRecognition_m31050BE671DCB3A02B2709C5D37B00422795AF30 (Recognizer_tF1FAA5F9E223C619151C5DA96D83F0AF7E3C9E3E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7D62C11CCF10BDFC07ACE3D149248DE3F051849C);
		s_Il2CppMethodInitialized = true;
	}
	{
		intptr_t L_0 = __this->get_asyncStopContinuousHandle_7();
		bool L_1;
		L_1 = IntPtr_op_Inequality_m212AF0E66AA81FEDC982B1C8A44ADDA24B995EB8((intptr_t)L_0, (intptr_t)(0), /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0022;
		}
	}
	{
		intptr_t L_2 = __this->get_asyncStopContinuousHandle_7();
		intptr_t L_3;
		L_3 = Recognizer_recognizer_async_handle_release_mB7E4B1D8EEA5B0FE097A95562D5E09B2F7740CBA((intptr_t)L_2, /*hidden argument*/NULL);
		SpxExceptionThrower_ThrowIfFail_m7269610C68DA4D960FE5E6208DF1BD9282C8F2DA((intptr_t)L_3, /*hidden argument*/NULL);
	}

IL_0022:
	{
		InteropSafeHandle_tF14E3AD32AC904F5E38F4FAC0ED46417062386C6 * L_4 = __this->get_recoHandle_4();
		SpxExceptionThrower_ThrowIfNull_mC54EA71790A454E5785FC15C4FFBB6F457E772DB(L_4, _stringLiteral7D62C11CCF10BDFC07ACE3D149248DE3F051849C, /*hidden argument*/NULL);
		InteropSafeHandle_tF14E3AD32AC904F5E38F4FAC0ED46417062386C6 * L_5 = __this->get_recoHandle_4();
		intptr_t* L_6 = __this->get_address_of_asyncStopContinuousHandle_7();
		intptr_t L_7;
		L_7 = Recognizer_recognizer_stop_continuous_recognition_async_m90B10E6C5A9EF8E54D22793254DE64E412B4FC80(L_5, (intptr_t*)L_6, /*hidden argument*/NULL);
		SpxExceptionThrower_ThrowIfFail_m7269610C68DA4D960FE5E6208DF1BD9282C8F2DA((intptr_t)L_7, /*hidden argument*/NULL);
		intptr_t L_8 = __this->get_asyncStopContinuousHandle_7();
		intptr_t L_9;
		L_9 = Recognizer_recognizer_stop_continuous_recognition_async_wait_for_m2A6AE149C72A46FEE1C9488C8F984079C618B73F((intptr_t)L_8, (-1), /*hidden argument*/NULL);
		SpxExceptionThrower_ThrowIfFail_m7269610C68DA4D960FE5E6208DF1BD9282C8F2DA((intptr_t)L_9, /*hidden argument*/NULL);
		intptr_t L_10 = __this->get_asyncStopContinuousHandle_7();
		intptr_t L_11;
		L_11 = Recognizer_recognizer_async_handle_release_mB7E4B1D8EEA5B0FE097A95562D5E09B2F7740CBA((intptr_t)L_10, /*hidden argument*/NULL);
		SpxExceptionThrower_ThrowIfFail_m7269610C68DA4D960FE5E6208DF1BD9282C8F2DA((intptr_t)L_11, /*hidden argument*/NULL);
		__this->set_asyncStopContinuousHandle_7((intptr_t)(0));
		return;
	}
}
// Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle Microsoft.CognitiveServices.Speech.Recognizer::FromConfig(Microsoft.CognitiveServices.Speech.Recognizer/GetRecognizerFromConfigDelegate,Microsoft.CognitiveServices.Speech.SpeechConfig)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InteropSafeHandle_tF14E3AD32AC904F5E38F4FAC0ED46417062386C6 * Recognizer_FromConfig_m60791AE2ACE591729B360D7615035FF13CAFBBF7 (GetRecognizerFromConfigDelegate_t2DC882A03ECDF618A982ED55B82B4ED3D829FACC * ___fromConfig0, SpeechConfig_tB1A7AD16A9CDE287A706780CBD6F22AAA64A9E11 * ___speechConfig1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GC_tD6F0377620BF01385965FD29272CF088A4309C0D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HandleRelease_t981DDC9B764758F8D9EAE886A7255AC109F86E59_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InteropSafeHandle_tF14E3AD32AC904F5E38F4FAC0ED46417062386C6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Recognizer_recognizer_handle_release_m4F85CBC6A9242C997CEC5704FBA5D5D8AD486772_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	InteropSafeHandle_tF14E3AD32AC904F5E38F4FAC0ED46417062386C6 * V_1 = NULL;
	intptr_t V_2;
	memset((&V_2), 0, sizeof(V_2));
	InteropSafeHandle_tF14E3AD32AC904F5E38F4FAC0ED46417062386C6 * V_3 = NULL;
	InteropSafeHandle_tF14E3AD32AC904F5E38F4FAC0ED46417062386C6 * V_4 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		SpeechConfig_tB1A7AD16A9CDE287A706780CBD6F22AAA64A9E11 * L_0 = ___speechConfig1;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_1 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral355878A388870DC1779B9524DFC7806DF3F6E3EF)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Recognizer_FromConfig_m60791AE2ACE591729B360D7615035FF13CAFBBF7_RuntimeMethod_var)));
	}

IL_000e:
	{
		V_0 = (intptr_t)(0);
		intptr_t L_2 = V_0;
		InteropSafeHandle_tF14E3AD32AC904F5E38F4FAC0ED46417062386C6 * L_3 = (InteropSafeHandle_tF14E3AD32AC904F5E38F4FAC0ED46417062386C6 *)il2cpp_codegen_object_new(InteropSafeHandle_tF14E3AD32AC904F5E38F4FAC0ED46417062386C6_il2cpp_TypeInfo_var);
		InteropSafeHandle__ctor_mEEBFD93E8F421872BAE76137A07486B9BBD3D156(L_3, (intptr_t)L_2, (HandleRelease_t981DDC9B764758F8D9EAE886A7255AC109F86E59 *)NULL, /*hidden argument*/NULL);
		V_1 = L_3;
	}

IL_001c:
	try
	{ // begin try (depth: 1)
		V_2 = (intptr_t)(0);
		GetRecognizerFromConfigDelegate_t2DC882A03ECDF618A982ED55B82B4ED3D829FACC * L_4 = ___fromConfig0;
		SpeechConfig_tB1A7AD16A9CDE287A706780CBD6F22AAA64A9E11 * L_5 = ___speechConfig1;
		NullCheck(L_5);
		InteropSafeHandle_tF14E3AD32AC904F5E38F4FAC0ED46417062386C6 * L_6 = L_5->get_configHandle_0();
		InteropSafeHandle_tF14E3AD32AC904F5E38F4FAC0ED46417062386C6 * L_7 = V_1;
		NullCheck(L_4);
		intptr_t L_8;
		L_8 = GetRecognizerFromConfigDelegate_Invoke_m32859CB0B6CCD5497015D9506CA5B844EAFD185C(L_4, (intptr_t*)(&V_2), L_6, L_7, /*hidden argument*/NULL);
		SpxExceptionThrower_ThrowIfFail_m7269610C68DA4D960FE5E6208DF1BD9282C8F2DA((intptr_t)L_8, /*hidden argument*/NULL);
		intptr_t L_9 = V_2;
		HandleRelease_t981DDC9B764758F8D9EAE886A7255AC109F86E59 * L_10 = (HandleRelease_t981DDC9B764758F8D9EAE886A7255AC109F86E59 *)il2cpp_codegen_object_new(HandleRelease_t981DDC9B764758F8D9EAE886A7255AC109F86E59_il2cpp_TypeInfo_var);
		HandleRelease__ctor_m033F205B7379518DCCF337635EAC5AAC9B2A42E9(L_10, NULL, (intptr_t)((intptr_t)Recognizer_recognizer_handle_release_m4F85CBC6A9242C997CEC5704FBA5D5D8AD486772_RuntimeMethod_var), /*hidden argument*/NULL);
		InteropSafeHandle_tF14E3AD32AC904F5E38F4FAC0ED46417062386C6 * L_11 = (InteropSafeHandle_tF14E3AD32AC904F5E38F4FAC0ED46417062386C6 *)il2cpp_codegen_object_new(InteropSafeHandle_tF14E3AD32AC904F5E38F4FAC0ED46417062386C6_il2cpp_TypeInfo_var);
		InteropSafeHandle__ctor_mEEBFD93E8F421872BAE76137A07486B9BBD3D156(L_11, (intptr_t)L_9, L_10, /*hidden argument*/NULL);
		V_3 = L_11;
		SpeechConfig_tB1A7AD16A9CDE287A706780CBD6F22AAA64A9E11 * L_12 = ___speechConfig1;
		IL2CPP_RUNTIME_CLASS_INIT(GC_tD6F0377620BF01385965FD29272CF088A4309C0D_il2cpp_TypeInfo_var);
		GC_KeepAlive_m16C41A64E08E35865A249CB5479A37BACBEDC75C(L_12, /*hidden argument*/NULL);
		InteropSafeHandle_tF14E3AD32AC904F5E38F4FAC0ED46417062386C6 * L_13 = V_3;
		V_4 = L_13;
		IL2CPP_LEAVE(0x5E, FINALLY_0054);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0054;
	}

FINALLY_0054:
	{ // begin finally (depth: 1)
		{
			InteropSafeHandle_tF14E3AD32AC904F5E38F4FAC0ED46417062386C6 * L_14 = V_1;
			if (!L_14)
			{
				goto IL_005d;
			}
		}

IL_0057:
		{
			InteropSafeHandle_tF14E3AD32AC904F5E38F4FAC0ED46417062386C6 * L_15 = V_1;
			NullCheck(L_15);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_15);
		}

IL_005d:
		{
			IL2CPP_END_FINALLY(84)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(84)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x5E, IL_005e)
	}

IL_005e:
	{
		InteropSafeHandle_tF14E3AD32AC904F5E38F4FAC0ED46417062386C6 * L_16 = V_4;
		return L_16;
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
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.Recognizer::recognizer_get_property_bag(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,System.IntPtr&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Recognizer_recognizer_get_property_bag_m52747647E843FD151DC9CFC39C0B3A32D58979F1 (InteropSafeHandle_tF14E3AD32AC904F5E38F4FAC0ED46417062386C6 * ___recoHandle0, intptr_t* ___propbag1, const RuntimeMethod* method)
{
	typedef intptr_t (STDCALL *PInvokeFunc) (void*, intptr_t*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_Microsoft_CognitiveServices_Speech_core_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(intptr_t*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("Microsoft.CognitiveServices.Speech.core.dll"), "recognizer_get_property_bag", IL2CPP_CALL_STDCALL, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___recoHandle0' to native representation
	void* ____recoHandle0_marshaled = NULL;
	if (___recoHandle0 == NULL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_null_exception("recoHandle"), NULL);
	bool ___safeHandle_reference_incremented_for____recoHandle0 = false;
	SafeHandle_DangerousAddRef_mC65F001DAB84BADED6EA18B339BEA78962B978DB(___recoHandle0, (&___safeHandle_reference_incremented_for____recoHandle0), NULL);
	____recoHandle0_marshaled = reinterpret_cast<void*>((___recoHandle0)->get_handle_0());

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_Microsoft_CognitiveServices_Speech_core_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(recognizer_get_property_bag)(____recoHandle0_marshaled, ___propbag1);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(____recoHandle0_marshaled, ___propbag1);
	#endif

	// Marshaling cleanup of parameter '___recoHandle0' native representation
	if (___safeHandle_reference_incremented_for____recoHandle0)
	{
		SafeHandle_DangerousRelease_mD38F583FAFD30A50547FAA163FBE3C1D466174D4(___recoHandle0, NULL);
	}

	return returnValue;
}
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.Recognizer::recognizer_handle_release(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Recognizer_recognizer_handle_release_m4F85CBC6A9242C997CEC5704FBA5D5D8AD486772 (intptr_t ___recoHandle0, const RuntimeMethod* method)
{
	typedef intptr_t (STDCALL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_Microsoft_CognitiveServices_Speech_core_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("Microsoft.CognitiveServices.Speech.core.dll"), "recognizer_handle_release", IL2CPP_CALL_STDCALL, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_Microsoft_CognitiveServices_Speech_core_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(recognizer_handle_release)(___recoHandle0);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(___recoHandle0);
	#endif

	return returnValue;
}
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.Recognizer::recognizer_start_continuous_recognition_async(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,System.IntPtr&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Recognizer_recognizer_start_continuous_recognition_async_mE0D8A324AA83CC7914CF3A677770B702A0225CF7 (InteropSafeHandle_tF14E3AD32AC904F5E38F4FAC0ED46417062386C6 * ___recoHandle0, intptr_t* ___asyncHandle1, const RuntimeMethod* method)
{
	typedef intptr_t (STDCALL *PInvokeFunc) (void*, intptr_t*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_Microsoft_CognitiveServices_Speech_core_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(intptr_t*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("Microsoft.CognitiveServices.Speech.core.dll"), "recognizer_start_continuous_recognition_async", IL2CPP_CALL_STDCALL, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___recoHandle0' to native representation
	void* ____recoHandle0_marshaled = NULL;
	if (___recoHandle0 == NULL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_null_exception("recoHandle"), NULL);
	bool ___safeHandle_reference_incremented_for____recoHandle0 = false;
	SafeHandle_DangerousAddRef_mC65F001DAB84BADED6EA18B339BEA78962B978DB(___recoHandle0, (&___safeHandle_reference_incremented_for____recoHandle0), NULL);
	____recoHandle0_marshaled = reinterpret_cast<void*>((___recoHandle0)->get_handle_0());

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_Microsoft_CognitiveServices_Speech_core_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(recognizer_start_continuous_recognition_async)(____recoHandle0_marshaled, ___asyncHandle1);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(____recoHandle0_marshaled, ___asyncHandle1);
	#endif

	// Marshaling cleanup of parameter '___recoHandle0' native representation
	if (___safeHandle_reference_incremented_for____recoHandle0)
	{
		SafeHandle_DangerousRelease_mD38F583FAFD30A50547FAA163FBE3C1D466174D4(___recoHandle0, NULL);
	}

	return returnValue;
}
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.Recognizer::recognizer_start_continuous_recognition_async_wait_for(System.IntPtr,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Recognizer_recognizer_start_continuous_recognition_async_wait_for_m67B22C498B2E1C76189FF0CEBB430C8ED7D52AD9 (intptr_t ___asyncHandle0, uint32_t ___milliseconds1, const RuntimeMethod* method)
{
	typedef intptr_t (STDCALL *PInvokeFunc) (intptr_t, uint32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_Microsoft_CognitiveServices_Speech_core_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(uint32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("Microsoft.CognitiveServices.Speech.core.dll"), "recognizer_start_continuous_recognition_async_wait_for", IL2CPP_CALL_STDCALL, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_Microsoft_CognitiveServices_Speech_core_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(recognizer_start_continuous_recognition_async_wait_for)(___asyncHandle0, ___milliseconds1);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(___asyncHandle0, ___milliseconds1);
	#endif

	return returnValue;
}
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.Recognizer::recognizer_stop_continuous_recognition_async(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,System.IntPtr&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Recognizer_recognizer_stop_continuous_recognition_async_m90B10E6C5A9EF8E54D22793254DE64E412B4FC80 (InteropSafeHandle_tF14E3AD32AC904F5E38F4FAC0ED46417062386C6 * ___recoHandle0, intptr_t* ___asyncHandle1, const RuntimeMethod* method)
{
	typedef intptr_t (STDCALL *PInvokeFunc) (void*, intptr_t*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_Microsoft_CognitiveServices_Speech_core_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(intptr_t*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("Microsoft.CognitiveServices.Speech.core.dll"), "recognizer_stop_continuous_recognition_async", IL2CPP_CALL_STDCALL, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___recoHandle0' to native representation
	void* ____recoHandle0_marshaled = NULL;
	if (___recoHandle0 == NULL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_null_exception("recoHandle"), NULL);
	bool ___safeHandle_reference_incremented_for____recoHandle0 = false;
	SafeHandle_DangerousAddRef_mC65F001DAB84BADED6EA18B339BEA78962B978DB(___recoHandle0, (&___safeHandle_reference_incremented_for____recoHandle0), NULL);
	____recoHandle0_marshaled = reinterpret_cast<void*>((___recoHandle0)->get_handle_0());

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_Microsoft_CognitiveServices_Speech_core_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(recognizer_stop_continuous_recognition_async)(____recoHandle0_marshaled, ___asyncHandle1);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(____recoHandle0_marshaled, ___asyncHandle1);
	#endif

	// Marshaling cleanup of parameter '___recoHandle0' native representation
	if (___safeHandle_reference_incremented_for____recoHandle0)
	{
		SafeHandle_DangerousRelease_mD38F583FAFD30A50547FAA163FBE3C1D466174D4(___recoHandle0, NULL);
	}

	return returnValue;
}
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.Recognizer::recognizer_stop_continuous_recognition_async_wait_for(System.IntPtr,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Recognizer_recognizer_stop_continuous_recognition_async_wait_for_m2A6AE149C72A46FEE1C9488C8F984079C618B73F (intptr_t ___asyncHandle0, uint32_t ___milliseconds1, const RuntimeMethod* method)
{
	typedef intptr_t (STDCALL *PInvokeFunc) (intptr_t, uint32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_Microsoft_CognitiveServices_Speech_core_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(uint32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("Microsoft.CognitiveServices.Speech.core.dll"), "recognizer_stop_continuous_recognition_async_wait_for", IL2CPP_CALL_STDCALL, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_Microsoft_CognitiveServices_Speech_core_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(recognizer_stop_continuous_recognition_async_wait_for)(___asyncHandle0, ___milliseconds1);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(___asyncHandle0, ___milliseconds1);
	#endif

	return returnValue;
}
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.Recognizer::recognizer_async_handle_release(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Recognizer_recognizer_async_handle_release_mB7E4B1D8EEA5B0FE097A95562D5E09B2F7740CBA (intptr_t ___asyncHandle0, const RuntimeMethod* method)
{
	typedef intptr_t (STDCALL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_Microsoft_CognitiveServices_Speech_core_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("Microsoft.CognitiveServices.Speech.core.dll"), "recognizer_async_handle_release", IL2CPP_CALL_STDCALL, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_Microsoft_CognitiveServices_Speech_core_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(recognizer_async_handle_release)(___asyncHandle0);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(___asyncHandle0);
	#endif

	return returnValue;
}
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.Recognizer::recognizer_recognition_event_get_offset(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,System.UInt64&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Recognizer_recognizer_recognition_event_get_offset_mCF53A1E91E882611247A461133DA78BE91F55CE8 (InteropSafeHandle_tF14E3AD32AC904F5E38F4FAC0ED46417062386C6 * ___eventHandle0, uint64_t* ___offset1, const RuntimeMethod* method)
{
	typedef intptr_t (STDCALL *PInvokeFunc) (void*, uint64_t*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_Microsoft_CognitiveServices_Speech_core_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(uint64_t*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("Microsoft.CognitiveServices.Speech.core.dll"), "recognizer_recognition_event_get_offset", IL2CPP_CALL_STDCALL, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___eventHandle0' to native representation
	void* ____eventHandle0_marshaled = NULL;
	if (___eventHandle0 == NULL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_null_exception("eventHandle"), NULL);
	bool ___safeHandle_reference_incremented_for____eventHandle0 = false;
	SafeHandle_DangerousAddRef_mC65F001DAB84BADED6EA18B339BEA78962B978DB(___eventHandle0, (&___safeHandle_reference_incremented_for____eventHandle0), NULL);
	____eventHandle0_marshaled = reinterpret_cast<void*>((___eventHandle0)->get_handle_0());

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_Microsoft_CognitiveServices_Speech_core_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(recognizer_recognition_event_get_offset)(____eventHandle0_marshaled, ___offset1);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(____eventHandle0_marshaled, ___offset1);
	#endif

	// Marshaling cleanup of parameter '___eventHandle0' native representation
	if (___safeHandle_reference_incremented_for____eventHandle0)
	{
		SafeHandle_DangerousRelease_mD38F583FAFD30A50547FAA163FBE3C1D466174D4(___eventHandle0, NULL);
	}

	return returnValue;
}
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.Recognizer::recognizer_session_event_get_session_id(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,System.IntPtr,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Recognizer_recognizer_session_event_get_session_id_mEB659429C629D3E9E271BA22B3FD631BD54565B0 (InteropSafeHandle_tF14E3AD32AC904F5E38F4FAC0ED46417062386C6 * ___eventHandle0, intptr_t ___sessionIdStr1, uint32_t ___sessionId2, const RuntimeMethod* method)
{
	typedef intptr_t (STDCALL *PInvokeFunc) (void*, intptr_t, uint32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_Microsoft_CognitiveServices_Speech_core_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(intptr_t) + sizeof(uint32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("Microsoft.CognitiveServices.Speech.core.dll"), "recognizer_session_event_get_session_id", IL2CPP_CALL_STDCALL, CHARSET_ANSI, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___eventHandle0' to native representation
	void* ____eventHandle0_marshaled = NULL;
	if (___eventHandle0 == NULL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_null_exception("eventHandle"), NULL);
	bool ___safeHandle_reference_incremented_for____eventHandle0 = false;
	SafeHandle_DangerousAddRef_mC65F001DAB84BADED6EA18B339BEA78962B978DB(___eventHandle0, (&___safeHandle_reference_incremented_for____eventHandle0), NULL);
	____eventHandle0_marshaled = reinterpret_cast<void*>((___eventHandle0)->get_handle_0());

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_Microsoft_CognitiveServices_Speech_core_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(recognizer_session_event_get_session_id)(____eventHandle0_marshaled, ___sessionIdStr1, ___sessionId2);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(____eventHandle0_marshaled, ___sessionIdStr1, ___sessionId2);
	#endif

	// Marshaling cleanup of parameter '___eventHandle0' native representation
	if (___safeHandle_reference_incremented_for____eventHandle0)
	{
		SafeHandle_DangerousRelease_mD38F583FAFD30A50547FAA163FBE3C1D466174D4(___eventHandle0, NULL);
	}

	return returnValue;
}
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.Recognizer::recognizer_recognition_event_get_result(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,System.IntPtr&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Recognizer_recognizer_recognition_event_get_result_m95C54811DD6BF44F99C1BF4AFA3506EB119BFBA0 (InteropSafeHandle_tF14E3AD32AC904F5E38F4FAC0ED46417062386C6 * ___eventHandle0, intptr_t* ___result1, const RuntimeMethod* method)
{
	typedef intptr_t (STDCALL *PInvokeFunc) (void*, intptr_t*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_Microsoft_CognitiveServices_Speech_core_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(intptr_t*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("Microsoft.CognitiveServices.Speech.core.dll"), "recognizer_recognition_event_get_result", IL2CPP_CALL_STDCALL, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___eventHandle0' to native representation
	void* ____eventHandle0_marshaled = NULL;
	if (___eventHandle0 == NULL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_null_exception("eventHandle"), NULL);
	bool ___safeHandle_reference_incremented_for____eventHandle0 = false;
	SafeHandle_DangerousAddRef_mC65F001DAB84BADED6EA18B339BEA78962B978DB(___eventHandle0, (&___safeHandle_reference_incremented_for____eventHandle0), NULL);
	____eventHandle0_marshaled = reinterpret_cast<void*>((___eventHandle0)->get_handle_0());

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_Microsoft_CognitiveServices_Speech_core_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(recognizer_recognition_event_get_result)(____eventHandle0_marshaled, ___result1);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(____eventHandle0_marshaled, ___result1);
	#endif

	// Marshaling cleanup of parameter '___eventHandle0' native representation
	if (___safeHandle_reference_incremented_for____eventHandle0)
	{
		SafeHandle_DangerousRelease_mD38F583FAFD30A50547FAA163FBE3C1D466174D4(___eventHandle0, NULL);
	}

	return returnValue;
}
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.Recognizer::recognizer_session_started_set_callback(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,Microsoft.CognitiveServices.Speech.Internal.CallbackFunctionDelegate,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Recognizer_recognizer_session_started_set_callback_m23B0AD337C8446036392FD763D5C81B4D43A8709 (InteropSafeHandle_tF14E3AD32AC904F5E38F4FAC0ED46417062386C6 * ___recoHandle0, CallbackFunctionDelegate_tEDE2A24857EFCB03EE502D1E6E8A9E977030EAC4 * ___callback1, intptr_t ___context2, const RuntimeMethod* method)
{
	typedef intptr_t (STDCALL *PInvokeFunc) (void*, Il2CppMethodPointer, intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_Microsoft_CognitiveServices_Speech_core_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(void*) + sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("Microsoft.CognitiveServices.Speech.core.dll"), "recognizer_session_started_set_callback", IL2CPP_CALL_STDCALL, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___recoHandle0' to native representation
	void* ____recoHandle0_marshaled = NULL;
	if (___recoHandle0 == NULL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_null_exception("recoHandle"), NULL);
	bool ___safeHandle_reference_incremented_for____recoHandle0 = false;
	SafeHandle_DangerousAddRef_mC65F001DAB84BADED6EA18B339BEA78962B978DB(___recoHandle0, (&___safeHandle_reference_incremented_for____recoHandle0), NULL);
	____recoHandle0_marshaled = reinterpret_cast<void*>((___recoHandle0)->get_handle_0());

	// Marshaling of parameter '___callback1' to native representation
	Il2CppMethodPointer ____callback1_marshaled = NULL;
	____callback1_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___callback1));

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_Microsoft_CognitiveServices_Speech_core_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(recognizer_session_started_set_callback)(____recoHandle0_marshaled, ____callback1_marshaled, ___context2);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(____recoHandle0_marshaled, ____callback1_marshaled, ___context2);
	#endif

	// Marshaling cleanup of parameter '___recoHandle0' native representation
	if (___safeHandle_reference_incremented_for____recoHandle0)
	{
		SafeHandle_DangerousRelease_mD38F583FAFD30A50547FAA163FBE3C1D466174D4(___recoHandle0, NULL);
	}

	return returnValue;
}
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.Recognizer::recognizer_session_stopped_set_callback(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,Microsoft.CognitiveServices.Speech.Internal.CallbackFunctionDelegate,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Recognizer_recognizer_session_stopped_set_callback_mEAD7E8432B82F964E1C5578C37DCDAD087A8C41B (InteropSafeHandle_tF14E3AD32AC904F5E38F4FAC0ED46417062386C6 * ___recoHandle0, CallbackFunctionDelegate_tEDE2A24857EFCB03EE502D1E6E8A9E977030EAC4 * ___callback1, intptr_t ___context2, const RuntimeMethod* method)
{
	typedef intptr_t (STDCALL *PInvokeFunc) (void*, Il2CppMethodPointer, intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_Microsoft_CognitiveServices_Speech_core_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(void*) + sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("Microsoft.CognitiveServices.Speech.core.dll"), "recognizer_session_stopped_set_callback", IL2CPP_CALL_STDCALL, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___recoHandle0' to native representation
	void* ____recoHandle0_marshaled = NULL;
	if (___recoHandle0 == NULL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_null_exception("recoHandle"), NULL);
	bool ___safeHandle_reference_incremented_for____recoHandle0 = false;
	SafeHandle_DangerousAddRef_mC65F001DAB84BADED6EA18B339BEA78962B978DB(___recoHandle0, (&___safeHandle_reference_incremented_for____recoHandle0), NULL);
	____recoHandle0_marshaled = reinterpret_cast<void*>((___recoHandle0)->get_handle_0());

	// Marshaling of parameter '___callback1' to native representation
	Il2CppMethodPointer ____callback1_marshaled = NULL;
	____callback1_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___callback1));

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_Microsoft_CognitiveServices_Speech_core_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(recognizer_session_stopped_set_callback)(____recoHandle0_marshaled, ____callback1_marshaled, ___context2);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(____recoHandle0_marshaled, ____callback1_marshaled, ___context2);
	#endif

	// Marshaling cleanup of parameter '___recoHandle0' native representation
	if (___safeHandle_reference_incremented_for____recoHandle0)
	{
		SafeHandle_DangerousRelease_mD38F583FAFD30A50547FAA163FBE3C1D466174D4(___recoHandle0, NULL);
	}

	return returnValue;
}
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.Recognizer::recognizer_speech_start_detected_set_callback(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,Microsoft.CognitiveServices.Speech.Internal.CallbackFunctionDelegate,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Recognizer_recognizer_speech_start_detected_set_callback_m42E74A08ECDDA5E9BEA53AB98F170276324380F1 (InteropSafeHandle_tF14E3AD32AC904F5E38F4FAC0ED46417062386C6 * ___recoHandle0, CallbackFunctionDelegate_tEDE2A24857EFCB03EE502D1E6E8A9E977030EAC4 * ___callback1, intptr_t ___context2, const RuntimeMethod* method)
{
	typedef intptr_t (STDCALL *PInvokeFunc) (void*, Il2CppMethodPointer, intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_Microsoft_CognitiveServices_Speech_core_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(void*) + sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("Microsoft.CognitiveServices.Speech.core.dll"), "recognizer_speech_start_detected_set_callback", IL2CPP_CALL_STDCALL, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___recoHandle0' to native representation
	void* ____recoHandle0_marshaled = NULL;
	if (___recoHandle0 == NULL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_null_exception("recoHandle"), NULL);
	bool ___safeHandle_reference_incremented_for____recoHandle0 = false;
	SafeHandle_DangerousAddRef_mC65F001DAB84BADED6EA18B339BEA78962B978DB(___recoHandle0, (&___safeHandle_reference_incremented_for____recoHandle0), NULL);
	____recoHandle0_marshaled = reinterpret_cast<void*>((___recoHandle0)->get_handle_0());

	// Marshaling of parameter '___callback1' to native representation
	Il2CppMethodPointer ____callback1_marshaled = NULL;
	____callback1_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___callback1));

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_Microsoft_CognitiveServices_Speech_core_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(recognizer_speech_start_detected_set_callback)(____recoHandle0_marshaled, ____callback1_marshaled, ___context2);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(____recoHandle0_marshaled, ____callback1_marshaled, ___context2);
	#endif

	// Marshaling cleanup of parameter '___recoHandle0' native representation
	if (___safeHandle_reference_incremented_for____recoHandle0)
	{
		SafeHandle_DangerousRelease_mD38F583FAFD30A50547FAA163FBE3C1D466174D4(___recoHandle0, NULL);
	}

	return returnValue;
}
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.Recognizer::recognizer_speech_end_detected_set_callback(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,Microsoft.CognitiveServices.Speech.Internal.CallbackFunctionDelegate,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Recognizer_recognizer_speech_end_detected_set_callback_m54E9AA603B97AB97F61866B60D875BA4DDEC25CE (InteropSafeHandle_tF14E3AD32AC904F5E38F4FAC0ED46417062386C6 * ___recoHandle0, CallbackFunctionDelegate_tEDE2A24857EFCB03EE502D1E6E8A9E977030EAC4 * ___callback1, intptr_t ___context2, const RuntimeMethod* method)
{
	typedef intptr_t (STDCALL *PInvokeFunc) (void*, Il2CppMethodPointer, intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_Microsoft_CognitiveServices_Speech_core_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(void*) + sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("Microsoft.CognitiveServices.Speech.core.dll"), "recognizer_speech_end_detected_set_callback", IL2CPP_CALL_STDCALL, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___recoHandle0' to native representation
	void* ____recoHandle0_marshaled = NULL;
	if (___recoHandle0 == NULL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_null_exception("recoHandle"), NULL);
	bool ___safeHandle_reference_incremented_for____recoHandle0 = false;
	SafeHandle_DangerousAddRef_mC65F001DAB84BADED6EA18B339BEA78962B978DB(___recoHandle0, (&___safeHandle_reference_incremented_for____recoHandle0), NULL);
	____recoHandle0_marshaled = reinterpret_cast<void*>((___recoHandle0)->get_handle_0());

	// Marshaling of parameter '___callback1' to native representation
	Il2CppMethodPointer ____callback1_marshaled = NULL;
	____callback1_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___callback1));

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_Microsoft_CognitiveServices_Speech_core_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(recognizer_speech_end_detected_set_callback)(____recoHandle0_marshaled, ____callback1_marshaled, ___context2);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(____recoHandle0_marshaled, ____callback1_marshaled, ___context2);
	#endif

	// Marshaling cleanup of parameter '___recoHandle0' native representation
	if (___safeHandle_reference_incremented_for____recoHandle0)
	{
		SafeHandle_DangerousRelease_mD38F583FAFD30A50547FAA163FBE3C1D466174D4(___recoHandle0, NULL);
	}

	return returnValue;
}
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.Recognizer::recognizer_recognizing_set_callback(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,Microsoft.CognitiveServices.Speech.Internal.CallbackFunctionDelegate,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Recognizer_recognizer_recognizing_set_callback_m0FBD65D0735F5B286FE71E2DC91C04231297B466 (InteropSafeHandle_tF14E3AD32AC904F5E38F4FAC0ED46417062386C6 * ___recoHandle0, CallbackFunctionDelegate_tEDE2A24857EFCB03EE502D1E6E8A9E977030EAC4 * ___callback1, intptr_t ___context2, const RuntimeMethod* method)
{
	typedef intptr_t (STDCALL *PInvokeFunc) (void*, Il2CppMethodPointer, intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_Microsoft_CognitiveServices_Speech_core_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(void*) + sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("Microsoft.CognitiveServices.Speech.core.dll"), "recognizer_recognizing_set_callback", IL2CPP_CALL_STDCALL, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___recoHandle0' to native representation
	void* ____recoHandle0_marshaled = NULL;
	if (___recoHandle0 == NULL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_null_exception("recoHandle"), NULL);
	bool ___safeHandle_reference_incremented_for____recoHandle0 = false;
	SafeHandle_DangerousAddRef_mC65F001DAB84BADED6EA18B339BEA78962B978DB(___recoHandle0, (&___safeHandle_reference_incremented_for____recoHandle0), NULL);
	____recoHandle0_marshaled = reinterpret_cast<void*>((___recoHandle0)->get_handle_0());

	// Marshaling of parameter '___callback1' to native representation
	Il2CppMethodPointer ____callback1_marshaled = NULL;
	____callback1_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___callback1));

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_Microsoft_CognitiveServices_Speech_core_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(recognizer_recognizing_set_callback)(____recoHandle0_marshaled, ____callback1_marshaled, ___context2);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(____recoHandle0_marshaled, ____callback1_marshaled, ___context2);
	#endif

	// Marshaling cleanup of parameter '___recoHandle0' native representation
	if (___safeHandle_reference_incremented_for____recoHandle0)
	{
		SafeHandle_DangerousRelease_mD38F583FAFD30A50547FAA163FBE3C1D466174D4(___recoHandle0, NULL);
	}

	return returnValue;
}
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.Recognizer::recognizer_recognized_set_callback(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,Microsoft.CognitiveServices.Speech.Internal.CallbackFunctionDelegate,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Recognizer_recognizer_recognized_set_callback_m262A0DD6A93CABB015B86E65229021E89C037FE9 (InteropSafeHandle_tF14E3AD32AC904F5E38F4FAC0ED46417062386C6 * ___recoHandle0, CallbackFunctionDelegate_tEDE2A24857EFCB03EE502D1E6E8A9E977030EAC4 * ___callback1, intptr_t ___context2, const RuntimeMethod* method)
{
	typedef intptr_t (STDCALL *PInvokeFunc) (void*, Il2CppMethodPointer, intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_Microsoft_CognitiveServices_Speech_core_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(void*) + sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("Microsoft.CognitiveServices.Speech.core.dll"), "recognizer_recognized_set_callback", IL2CPP_CALL_STDCALL, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___recoHandle0' to native representation
	void* ____recoHandle0_marshaled = NULL;
	if (___recoHandle0 == NULL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_null_exception("recoHandle"), NULL);
	bool ___safeHandle_reference_incremented_for____recoHandle0 = false;
	SafeHandle_DangerousAddRef_mC65F001DAB84BADED6EA18B339BEA78962B978DB(___recoHandle0, (&___safeHandle_reference_incremented_for____recoHandle0), NULL);
	____recoHandle0_marshaled = reinterpret_cast<void*>((___recoHandle0)->get_handle_0());

	// Marshaling of parameter '___callback1' to native representation
	Il2CppMethodPointer ____callback1_marshaled = NULL;
	____callback1_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___callback1));

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_Microsoft_CognitiveServices_Speech_core_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(recognizer_recognized_set_callback)(____recoHandle0_marshaled, ____callback1_marshaled, ___context2);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(____recoHandle0_marshaled, ____callback1_marshaled, ___context2);
	#endif

	// Marshaling cleanup of parameter '___recoHandle0' native representation
	if (___safeHandle_reference_incremented_for____recoHandle0)
	{
		SafeHandle_DangerousRelease_mD38F583FAFD30A50547FAA163FBE3C1D466174D4(___recoHandle0, NULL);
	}

	return returnValue;
}
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.Recognizer::recognizer_canceled_set_callback(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,Microsoft.CognitiveServices.Speech.Internal.CallbackFunctionDelegate,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Recognizer_recognizer_canceled_set_callback_mC5295B5F4B2ED3207AB92D2DAA94B229509EDE60 (InteropSafeHandle_tF14E3AD32AC904F5E38F4FAC0ED46417062386C6 * ___recoHandle0, CallbackFunctionDelegate_tEDE2A24857EFCB03EE502D1E6E8A9E977030EAC4 * ___callback1, intptr_t ___context2, const RuntimeMethod* method)
{
	typedef intptr_t (STDCALL *PInvokeFunc) (void*, Il2CppMethodPointer, intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_Microsoft_CognitiveServices_Speech_core_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(void*) + sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("Microsoft.CognitiveServices.Speech.core.dll"), "recognizer_canceled_set_callback", IL2CPP_CALL_STDCALL, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___recoHandle0' to native representation
	void* ____recoHandle0_marshaled = NULL;
	if (___recoHandle0 == NULL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_null_exception("recoHandle"), NULL);
	bool ___safeHandle_reference_incremented_for____recoHandle0 = false;
	SafeHandle_DangerousAddRef_mC65F001DAB84BADED6EA18B339BEA78962B978DB(___recoHandle0, (&___safeHandle_reference_incremented_for____recoHandle0), NULL);
	____recoHandle0_marshaled = reinterpret_cast<void*>((___recoHandle0)->get_handle_0());

	// Marshaling of parameter '___callback1' to native representation
	Il2CppMethodPointer ____callback1_marshaled = NULL;
	____callback1_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___callback1));

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_Microsoft_CognitiveServices_Speech_core_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(recognizer_canceled_set_callback)(____recoHandle0_marshaled, ____callback1_marshaled, ___context2);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(____recoHandle0_marshaled, ____callback1_marshaled, ___context2);
	#endif

	// Marshaling cleanup of parameter '___recoHandle0' native representation
	if (___safeHandle_reference_incremented_for____recoHandle0)
	{
		SafeHandle_DangerousRelease_mD38F583FAFD30A50547FAA163FBE3C1D466174D4(___recoHandle0, NULL);
	}

	return returnValue;
}
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.Recognizer::translator_synthesizing_audio_set_callback(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,Microsoft.CognitiveServices.Speech.Internal.CallbackFunctionDelegate,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Recognizer_translator_synthesizing_audio_set_callback_m315338525553FEB680E20BCF2DB26D5542C432F6 (InteropSafeHandle_tF14E3AD32AC904F5E38F4FAC0ED46417062386C6 * ___recoHandle0, CallbackFunctionDelegate_tEDE2A24857EFCB03EE502D1E6E8A9E977030EAC4 * ___callback1, intptr_t ___context2, const RuntimeMethod* method)
{
	typedef intptr_t (STDCALL *PInvokeFunc) (void*, Il2CppMethodPointer, intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_Microsoft_CognitiveServices_Speech_core_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(void*) + sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("Microsoft.CognitiveServices.Speech.core.dll"), "translator_synthesizing_audio_set_callback", IL2CPP_CALL_STDCALL, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___recoHandle0' to native representation
	void* ____recoHandle0_marshaled = NULL;
	if (___recoHandle0 == NULL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_null_exception("recoHandle"), NULL);
	bool ___safeHandle_reference_incremented_for____recoHandle0 = false;
	SafeHandle_DangerousAddRef_mC65F001DAB84BADED6EA18B339BEA78962B978DB(___recoHandle0, (&___safeHandle_reference_incremented_for____recoHandle0), NULL);
	____recoHandle0_marshaled = reinterpret_cast<void*>((___recoHandle0)->get_handle_0());

	// Marshaling of parameter '___callback1' to native representation
	Il2CppMethodPointer ____callback1_marshaled = NULL;
	____callback1_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___callback1));

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_Microsoft_CognitiveServices_Speech_core_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(translator_synthesizing_audio_set_callback)(____recoHandle0_marshaled, ____callback1_marshaled, ___context2);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(____recoHandle0_marshaled, ____callback1_marshaled, ___context2);
	#endif

	// Marshaling cleanup of parameter '___recoHandle0' native representation
	if (___safeHandle_reference_incremented_for____recoHandle0)
	{
		SafeHandle_DangerousRelease_mD38F583FAFD30A50547FAA163FBE3C1D466174D4(___recoHandle0, NULL);
	}

	return returnValue;
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
// System.Void Microsoft.CognitiveServices.Speech.SessionEventArgs::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SessionEventArgs__ctor_mA2BA5B62E7BCD52804ACA274FE514BF94DBB9891 (SessionEventArgs_t720E6DA982AD7DE7933835DEBBECD8B78F28CAB1 * __this, intptr_t ___eventHandlePtr0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventArgs_recognizer_event_handle_release_m3D3A3B06F35570BE6EE52F14267BC94EFDCD4F7B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GetResultDelegate_tCE5D8A1E9C3A30C92902692A8F1576D09D4DCDE3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HandleRelease_t981DDC9B764758F8D9EAE886A7255AC109F86E59_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InteropSafeHandle_tF14E3AD32AC904F5E38F4FAC0ED46417062386C6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Recognizer_recognizer_session_event_get_session_id_mEB659429C629D3E9E271BA22B3FD631BD54565B0_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA_il2cpp_TypeInfo_var);
		EventArgs__ctor_m5ECB9A8ED0A9E2DBB1ED999BAC1CB44F4354E571(__this, /*hidden argument*/NULL);
		intptr_t L_0 = ___eventHandlePtr0;
		SpxExceptionThrower_ThrowIfNull_m89216C9938C8E733BC6119E3B3F84252B0BB101B((intptr_t)L_0, (String_t*)NULL, /*hidden argument*/NULL);
		intptr_t L_1 = ___eventHandlePtr0;
		HandleRelease_t981DDC9B764758F8D9EAE886A7255AC109F86E59 * L_2 = (HandleRelease_t981DDC9B764758F8D9EAE886A7255AC109F86E59 *)il2cpp_codegen_object_new(HandleRelease_t981DDC9B764758F8D9EAE886A7255AC109F86E59_il2cpp_TypeInfo_var);
		HandleRelease__ctor_m033F205B7379518DCCF337635EAC5AAC9B2A42E9(L_2, NULL, (intptr_t)((intptr_t)EventArgs_recognizer_event_handle_release_m3D3A3B06F35570BE6EE52F14267BC94EFDCD4F7B_RuntimeMethod_var), /*hidden argument*/NULL);
		InteropSafeHandle_tF14E3AD32AC904F5E38F4FAC0ED46417062386C6 * L_3 = (InteropSafeHandle_tF14E3AD32AC904F5E38F4FAC0ED46417062386C6 *)il2cpp_codegen_object_new(InteropSafeHandle_tF14E3AD32AC904F5E38F4FAC0ED46417062386C6_il2cpp_TypeInfo_var);
		InteropSafeHandle__ctor_mEEBFD93E8F421872BAE76137A07486B9BBD3D156(L_3, (intptr_t)L_1, L_2, /*hidden argument*/NULL);
		__this->set_eventHandle_1(L_3);
		GetResultDelegate_tCE5D8A1E9C3A30C92902692A8F1576D09D4DCDE3 * L_4 = (GetResultDelegate_tCE5D8A1E9C3A30C92902692A8F1576D09D4DCDE3 *)il2cpp_codegen_object_new(GetResultDelegate_tCE5D8A1E9C3A30C92902692A8F1576D09D4DCDE3_il2cpp_TypeInfo_var);
		GetResultDelegate__ctor_mD9674EEDEC07A1965D10AD6C172D61ADA8ABBAF0(L_4, NULL, (intptr_t)((intptr_t)Recognizer_recognizer_session_event_get_session_id_mEB659429C629D3E9E271BA22B3FD631BD54565B0_RuntimeMethod_var), /*hidden argument*/NULL);
		InteropSafeHandle_tF14E3AD32AC904F5E38F4FAC0ED46417062386C6 * L_5 = __this->get_eventHandle_1();
		String_t* L_6;
		L_6 = SpxFactory_GetDataFromHandleUsingDelegate_mE498329CDC2B03C0A628C2EDE8395F3F87FC605C(L_4, L_5, ((int32_t)37), /*hidden argument*/NULL);
		__this->set_U3CSessionIdU3Ek__BackingField_4(L_6);
		return;
	}
}
// System.String Microsoft.CognitiveServices.Speech.SessionEventArgs::get_SessionId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SessionEventArgs_get_SessionId_m8C680FABDADC335561EA0F07CEA0F2F38A968960 (SessionEventArgs_t720E6DA982AD7DE7933835DEBBECD8B78F28CAB1 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_U3CSessionIdU3Ek__BackingField_4();
		return L_0;
	}
}
// System.String Microsoft.CognitiveServices.Speech.SessionEventArgs::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SessionEventArgs_ToString_mD08F94960C71A7CDBDED121426F177E51DDED0E9 (SessionEventArgs_t720E6DA982AD7DE7933835DEBBECD8B78F28CAB1 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAD1646DD3BCB50D02405E092BF9F99967377E943);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_il2cpp_TypeInfo_var);
		CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * L_0;
		L_0 = CultureInfo_get_InvariantCulture_m9FAAFAF8A00091EE1FCB7098AD3F163ECDF02164(/*hidden argument*/NULL);
		String_t* L_1;
		L_1 = SessionEventArgs_get_SessionId_m8C680FABDADC335561EA0F07CEA0F2F38A968960_inline(__this, /*hidden argument*/NULL);
		String_t* L_2;
		L_2 = String_Format_m90ED4B078849D42FA1A7C5EB7AC7F74F235F6916(L_0, _stringLiteralAD1646DD3BCB50D02405E092BF9F99967377E943, L_1, /*hidden argument*/NULL);
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
// System.Void Microsoft.CognitiveServices.Speech.SpeechConfig::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpeechConfig__ctor_m7E86AF6B9C5651B1FDA707458201F6A9058A46F5 (SpeechConfig_tB1A7AD16A9CDE287A706780CBD6F22AAA64A9E11 * __this, intptr_t ___configPtr0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HandleRelease_t981DDC9B764758F8D9EAE886A7255AC109F86E59_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InteropSafeHandle_tF14E3AD32AC904F5E38F4FAC0ED46417062386C6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PropertyCollection_tD6D50793A0684647D5C7067381E1365EDB3AA920_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SpeechConfig_speech_config_release_m211A119E8B4829F52735D15C1CE30B4E80EA6A08_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4A7AB2F6B4BB9763BDAE9F4B653E5CA8E25A19F9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD6EFEA28911C05150F90CA0C3A902792E8F9D73C);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		intptr_t L_0 = ___configPtr0;
		SpxExceptionThrower_ThrowIfNull_m89216C9938C8E733BC6119E3B3F84252B0BB101B((intptr_t)L_0, (String_t*)NULL, /*hidden argument*/NULL);
		intptr_t L_1 = ___configPtr0;
		HandleRelease_t981DDC9B764758F8D9EAE886A7255AC109F86E59 * L_2 = (HandleRelease_t981DDC9B764758F8D9EAE886A7255AC109F86E59 *)il2cpp_codegen_object_new(HandleRelease_t981DDC9B764758F8D9EAE886A7255AC109F86E59_il2cpp_TypeInfo_var);
		HandleRelease__ctor_m033F205B7379518DCCF337635EAC5AAC9B2A42E9(L_2, NULL, (intptr_t)((intptr_t)SpeechConfig_speech_config_release_m211A119E8B4829F52735D15C1CE30B4E80EA6A08_RuntimeMethod_var), /*hidden argument*/NULL);
		InteropSafeHandle_tF14E3AD32AC904F5E38F4FAC0ED46417062386C6 * L_3 = (InteropSafeHandle_tF14E3AD32AC904F5E38F4FAC0ED46417062386C6 *)il2cpp_codegen_object_new(InteropSafeHandle_tF14E3AD32AC904F5E38F4FAC0ED46417062386C6_il2cpp_TypeInfo_var);
		InteropSafeHandle__ctor_mEEBFD93E8F421872BAE76137A07486B9BBD3D156(L_3, (intptr_t)L_1, L_2, /*hidden argument*/NULL);
		__this->set_configHandle_0(L_3);
		V_0 = (intptr_t)(0);
		InteropSafeHandle_tF14E3AD32AC904F5E38F4FAC0ED46417062386C6 * L_4 = __this->get_configHandle_0();
		intptr_t L_5;
		L_5 = SpeechConfig_speech_config_get_property_bag_m14C01802DDD84CBB3508ABD4B604E6A5DADE2F0E(L_4, (intptr_t*)(&V_0), /*hidden argument*/NULL);
		SpxExceptionThrower_ThrowIfFail_m7269610C68DA4D960FE5E6208DF1BD9282C8F2DA((intptr_t)L_5, /*hidden argument*/NULL);
		intptr_t L_6 = V_0;
		PropertyCollection_tD6D50793A0684647D5C7067381E1365EDB3AA920 * L_7 = (PropertyCollection_tD6D50793A0684647D5C7067381E1365EDB3AA920 *)il2cpp_codegen_object_new(PropertyCollection_tD6D50793A0684647D5C7067381E1365EDB3AA920_il2cpp_TypeInfo_var);
		PropertyCollection__ctor_m298675719270993E505A055053F0D23293B517D2(L_7, (intptr_t)L_6, /*hidden argument*/NULL);
		__this->set_progBag_1(L_7);
		SpeechConfig_SetProperty_m73E31A4EE091A42C3719999B7CBAAED70BC14B34(__this, _stringLiteral4A7AB2F6B4BB9763BDAE9F4B653E5CA8E25A19F9, _stringLiteralD6EFEA28911C05150F90CA0C3A902792E8F9D73C, /*hidden argument*/NULL);
		return;
	}
}
// Microsoft.CognitiveServices.Speech.SpeechConfig Microsoft.CognitiveServices.Speech.SpeechConfig::FromSubscription(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SpeechConfig_tB1A7AD16A9CDE287A706780CBD6F22AAA64A9E11 * SpeechConfig_FromSubscription_mDD9D18EE9C5A74BAD5AF00CDBCF279DA15CE4E4F (String_t* ___subscriptionKey0, String_t* ___region1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SpeechConfig_tB1A7AD16A9CDE287A706780CBD6F22AAA64A9E11_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		V_0 = (intptr_t)(0);
		String_t* L_0 = ___subscriptionKey0;
		String_t* L_1 = ___region1;
		intptr_t L_2;
		L_2 = SpeechConfig_speech_config_from_subscription_m53E6A53D4F7099736BF503BC3C76EDC66B058153((intptr_t*)(&V_0), L_0, L_1, /*hidden argument*/NULL);
		SpxExceptionThrower_ThrowIfFail_m7269610C68DA4D960FE5E6208DF1BD9282C8F2DA((intptr_t)L_2, /*hidden argument*/NULL);
		intptr_t L_3 = V_0;
		SpeechConfig_tB1A7AD16A9CDE287A706780CBD6F22AAA64A9E11 * L_4 = (SpeechConfig_tB1A7AD16A9CDE287A706780CBD6F22AAA64A9E11 *)il2cpp_codegen_object_new(SpeechConfig_tB1A7AD16A9CDE287A706780CBD6F22AAA64A9E11_il2cpp_TypeInfo_var);
		SpeechConfig__ctor_m7E86AF6B9C5651B1FDA707458201F6A9058A46F5(L_4, (intptr_t)L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.SpeechConfig::set_SpeechRecognitionLanguage(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpeechConfig_set_SpeechRecognitionLanguage_m5D08C2F88C49CDC8F81DBECA0EA7C2D61AC2FD94 (SpeechConfig_tB1A7AD16A9CDE287A706780CBD6F22AAA64A9E11 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		PropertyCollection_tD6D50793A0684647D5C7067381E1365EDB3AA920 * L_0 = __this->get_progBag_1();
		String_t* L_1 = ___value0;
		NullCheck(L_0);
		VirtActionInvoker2< int32_t, String_t* >::Invoke(6 /* System.Void Microsoft.CognitiveServices.Speech.PropertyCollection::SetProperty(Microsoft.CognitiveServices.Speech.PropertyId,System.String) */, L_0, ((int32_t)3001), L_1);
		return;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.SpeechConfig::SetProperty(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpeechConfig_SetProperty_m73E31A4EE091A42C3719999B7CBAAED70BC14B34 (SpeechConfig_tB1A7AD16A9CDE287A706780CBD6F22AAA64A9E11 * __this, String_t* ___name0, String_t* ___value1, const RuntimeMethod* method)
{
	{
		PropertyCollection_tD6D50793A0684647D5C7067381E1365EDB3AA920 * L_0 = __this->get_progBag_1();
		String_t* L_1 = ___name0;
		String_t* L_2 = ___value1;
		NullCheck(L_0);
		VirtActionInvoker2< String_t*, String_t* >::Invoke(7 /* System.Void Microsoft.CognitiveServices.Speech.PropertyCollection::SetProperty(System.String,System.String) */, L_0, L_1, L_2);
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
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.SpeechConfig::speech_config_from_subscription(System.IntPtr&,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t SpeechConfig_speech_config_from_subscription_m53E6A53D4F7099736BF503BC3C76EDC66B058153 (intptr_t* ___config0, String_t* ___subscriptionKey1, String_t* ___region2, const RuntimeMethod* method)
{
	typedef intptr_t (STDCALL *PInvokeFunc) (intptr_t*, char*, char*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_Microsoft_CognitiveServices_Speech_core_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t*) + sizeof(char*) + sizeof(char*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("Microsoft.CognitiveServices.Speech.core.dll"), "speech_config_from_subscription", IL2CPP_CALL_STDCALL, CHARSET_ANSI, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___subscriptionKey1' to native representation
	char* ____subscriptionKey1_marshaled = NULL;
	____subscriptionKey1_marshaled = il2cpp_codegen_marshal_string(___subscriptionKey1);

	// Marshaling of parameter '___region2' to native representation
	char* ____region2_marshaled = NULL;
	____region2_marshaled = il2cpp_codegen_marshal_string(___region2);

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_Microsoft_CognitiveServices_Speech_core_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(speech_config_from_subscription)(___config0, ____subscriptionKey1_marshaled, ____region2_marshaled);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(___config0, ____subscriptionKey1_marshaled, ____region2_marshaled);
	#endif

	// Marshaling cleanup of parameter '___subscriptionKey1' native representation
	il2cpp_codegen_marshal_free(____subscriptionKey1_marshaled);
	____subscriptionKey1_marshaled = NULL;

	// Marshaling cleanup of parameter '___region2' native representation
	il2cpp_codegen_marshal_free(____region2_marshaled);
	____region2_marshaled = NULL;

	return returnValue;
}
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.SpeechConfig::speech_config_release(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t SpeechConfig_speech_config_release_m211A119E8B4829F52735D15C1CE30B4E80EA6A08 (intptr_t ___config0, const RuntimeMethod* method)
{
	typedef intptr_t (STDCALL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_Microsoft_CognitiveServices_Speech_core_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("Microsoft.CognitiveServices.Speech.core.dll"), "speech_config_release", IL2CPP_CALL_STDCALL, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_Microsoft_CognitiveServices_Speech_core_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(speech_config_release)(___config0);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(___config0);
	#endif

	return returnValue;
}
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.SpeechConfig::speech_config_get_property_bag(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,System.IntPtr&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t SpeechConfig_speech_config_get_property_bag_m14C01802DDD84CBB3508ABD4B604E6A5DADE2F0E (InteropSafeHandle_tF14E3AD32AC904F5E38F4FAC0ED46417062386C6 * ___config0, intptr_t* ___propbag1, const RuntimeMethod* method)
{
	typedef intptr_t (STDCALL *PInvokeFunc) (void*, intptr_t*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_Microsoft_CognitiveServices_Speech_core_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(intptr_t*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("Microsoft.CognitiveServices.Speech.core.dll"), "speech_config_get_property_bag", IL2CPP_CALL_STDCALL, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___config0' to native representation
	void* ____config0_marshaled = NULL;
	if (___config0 == NULL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_null_exception("config"), NULL);
	bool ___safeHandle_reference_incremented_for____config0 = false;
	SafeHandle_DangerousAddRef_mC65F001DAB84BADED6EA18B339BEA78962B978DB(___config0, (&___safeHandle_reference_incremented_for____config0), NULL);
	____config0_marshaled = reinterpret_cast<void*>((___config0)->get_handle_0());

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_Microsoft_CognitiveServices_Speech_core_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(speech_config_get_property_bag)(____config0_marshaled, ___propbag1);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(____config0_marshaled, ___propbag1);
	#endif

	// Marshaling cleanup of parameter '___config0' native representation
	if (___safeHandle_reference_incremented_for____config0)
	{
		SafeHandle_DangerousRelease_mD38F583FAFD30A50547FAA163FBE3C1D466174D4(___config0, NULL);
	}

	return returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Microsoft.CognitiveServices.Speech.SpeechRecognitionCanceledEventArgs::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpeechRecognitionCanceledEventArgs__ctor_mF09633F429C647ABCD7928A8568E3FFC4BB4854A (SpeechRecognitionCanceledEventArgs_t35423FB7DA329C4D5CC9ED0B255C55C72F06E97C * __this, intptr_t ___eventHandlePtr0, const RuntimeMethod* method)
{
	CancellationDetails_t5D21A89C2CF88AB86DE6EF822F1DBF0FF3F678C9 * V_0 = NULL;
	{
		intptr_t L_0 = ___eventHandlePtr0;
		SpeechRecognitionEventArgs__ctor_mC3BF882EE32BECD77C0DEDD86F6203E24B864012(__this, (intptr_t)L_0, /*hidden argument*/NULL);
		SpeechRecognitionResult_t65860E5862B0CFC304215FF5084A2E59A1AA727F * L_1;
		L_1 = SpeechRecognitionEventArgs_get_Result_m1389C14A09CF6A3065569F67F3E7B624EE5A1370_inline(__this, /*hidden argument*/NULL);
		CancellationDetails_t5D21A89C2CF88AB86DE6EF822F1DBF0FF3F678C9 * L_2;
		L_2 = CancellationDetails_FromResult_m4EB7D4D34AD85ACD568A2598EA91D0122D5DB718(L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		CancellationDetails_t5D21A89C2CF88AB86DE6EF822F1DBF0FF3F678C9 * L_3 = V_0;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = CancellationDetails_get_Reason_mEBCBE5F14B176F5574F4A4D6CBB2F3719CC51BA4_inline(L_3, /*hidden argument*/NULL);
		__this->set_U3CReasonU3Ek__BackingField_7(L_4);
		CancellationDetails_t5D21A89C2CF88AB86DE6EF822F1DBF0FF3F678C9 * L_5 = V_0;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = CancellationDetails_get_ErrorCode_m86467B87546D6D75FF69D6190773F9F84CD94D98_inline(L_5, /*hidden argument*/NULL);
		__this->set_U3CErrorCodeU3Ek__BackingField_8(L_6);
		CancellationDetails_t5D21A89C2CF88AB86DE6EF822F1DBF0FF3F678C9 * L_7 = V_0;
		NullCheck(L_7);
		String_t* L_8;
		L_8 = CancellationDetails_get_ErrorDetails_m1BD08DCFD99497ADB4E6C05D337488538941B384_inline(L_7, /*hidden argument*/NULL);
		__this->set_U3CErrorDetailsU3Ek__BackingField_9(L_8);
		return;
	}
}
// Microsoft.CognitiveServices.Speech.CancellationReason Microsoft.CognitiveServices.Speech.SpeechRecognitionCanceledEventArgs::get_Reason()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SpeechRecognitionCanceledEventArgs_get_Reason_m20DC32313A577BF1BE92F6B0E2C094114A67E0BD (SpeechRecognitionCanceledEventArgs_t35423FB7DA329C4D5CC9ED0B255C55C72F06E97C * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CReasonU3Ek__BackingField_7();
		return L_0;
	}
}
// Microsoft.CognitiveServices.Speech.CancellationErrorCode Microsoft.CognitiveServices.Speech.SpeechRecognitionCanceledEventArgs::get_ErrorCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SpeechRecognitionCanceledEventArgs_get_ErrorCode_mBA216DB0C26A6BC78DAB3557219137CBFF206253 (SpeechRecognitionCanceledEventArgs_t35423FB7DA329C4D5CC9ED0B255C55C72F06E97C * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CErrorCodeU3Ek__BackingField_8();
		return L_0;
	}
}
// System.String Microsoft.CognitiveServices.Speech.SpeechRecognitionCanceledEventArgs::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SpeechRecognitionCanceledEventArgs_ToString_m30F1EF6D9EE29865814DD60BF64EFA5E4FA1031C (SpeechRecognitionCanceledEventArgs_t35423FB7DA329C4D5CC9ED0B255C55C72F06E97C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CancellationErrorCode_t91865BA91C9E78F536A8756E3533F4ECE8824D62_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CancellationReason_t11019B124BB3269219C20F71CE36597F73A7E20E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral94ACA2C81E052FAFABB8EF261D2A67595EE46C0E);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_il2cpp_TypeInfo_var);
		CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * L_0;
		L_0 = CultureInfo_get_InvariantCulture_m9FAAFAF8A00091EE1FCB7098AD3F163ECDF02164(/*hidden argument*/NULL);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)4);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_2 = L_1;
		String_t* L_3;
		L_3 = SessionEventArgs_get_SessionId_m8C680FABDADC335561EA0F07CEA0F2F38A968960_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_3);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_4 = L_2;
		SpeechRecognitionResult_t65860E5862B0CFC304215FF5084A2E59A1AA727F * L_5;
		L_5 = SpeechRecognitionEventArgs_get_Result_m1389C14A09CF6A3065569F67F3E7B624EE5A1370_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_5);
		String_t* L_6;
		L_6 = VirtFuncInvoker0< String_t* >::Invoke(4 /* System.String Microsoft.CognitiveServices.Speech.RecognitionResult::get_ResultId() */, L_5);
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_6);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_6);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_7 = L_4;
		int32_t L_8;
		L_8 = SpeechRecognitionCanceledEventArgs_get_Reason_m20DC32313A577BF1BE92F6B0E2C094114A67E0BD_inline(__this, /*hidden argument*/NULL);
		int32_t L_9 = L_8;
		RuntimeObject * L_10 = Box(CancellationReason_t11019B124BB3269219C20F71CE36597F73A7E20E_il2cpp_TypeInfo_var, &L_9);
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, L_10);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)L_10);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_11 = L_7;
		int32_t L_12;
		L_12 = SpeechRecognitionCanceledEventArgs_get_ErrorCode_mBA216DB0C26A6BC78DAB3557219137CBFF206253_inline(__this, /*hidden argument*/NULL);
		int32_t L_13 = L_12;
		RuntimeObject * L_14 = Box(CancellationErrorCode_t91865BA91C9E78F536A8756E3533F4ECE8824D62_il2cpp_TypeInfo_var, &L_13);
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, L_14);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_14);
		String_t* L_15;
		L_15 = String_Format_mF96F0621DC567D09C07F1EAC66B31AD261A9DC21(L_0, _stringLiteral94ACA2C81E052FAFABB8EF261D2A67595EE46C0E, L_11, /*hidden argument*/NULL);
		return L_15;
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
// System.Void Microsoft.CognitiveServices.Speech.SpeechRecognitionEventArgs::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpeechRecognitionEventArgs__ctor_mC3BF882EE32BECD77C0DEDD86F6203E24B864012 (SpeechRecognitionEventArgs_t1FB7CC9C07684BA7F03F63DF226A306D7C5F2CEA * __this, intptr_t ___eventHandlePtr0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SpeechRecognitionResult_t65860E5862B0CFC304215FF5084A2E59A1AA727F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		intptr_t L_0 = ___eventHandlePtr0;
		RecognitionEventArgs__ctor_m31490D766642A01A99F86D9E037DEABFD21138FE(__this, (intptr_t)L_0, /*hidden argument*/NULL);
		V_0 = (intptr_t)(0);
		InteropSafeHandle_tF14E3AD32AC904F5E38F4FAC0ED46417062386C6 * L_1 = ((SessionEventArgs_t720E6DA982AD7DE7933835DEBBECD8B78F28CAB1 *)__this)->get_eventHandle_1();
		intptr_t L_2;
		L_2 = Recognizer_recognizer_recognition_event_get_result_m95C54811DD6BF44F99C1BF4AFA3506EB119BFBA0(L_1, (intptr_t*)(&V_0), /*hidden argument*/NULL);
		SpxExceptionThrower_ThrowIfFail_m7269610C68DA4D960FE5E6208DF1BD9282C8F2DA((intptr_t)L_2, /*hidden argument*/NULL);
		intptr_t L_3 = V_0;
		SpeechRecognitionResult_t65860E5862B0CFC304215FF5084A2E59A1AA727F * L_4 = (SpeechRecognitionResult_t65860E5862B0CFC304215FF5084A2E59A1AA727F *)il2cpp_codegen_object_new(SpeechRecognitionResult_t65860E5862B0CFC304215FF5084A2E59A1AA727F_il2cpp_TypeInfo_var);
		SpeechRecognitionResult__ctor_m55B5299672F300EDE742234DC6E0E39F51B33902(L_4, (intptr_t)L_3, /*hidden argument*/NULL);
		__this->set_U3CResultU3Ek__BackingField_6(L_4);
		return;
	}
}
// Microsoft.CognitiveServices.Speech.SpeechRecognitionResult Microsoft.CognitiveServices.Speech.SpeechRecognitionEventArgs::get_Result()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SpeechRecognitionResult_t65860E5862B0CFC304215FF5084A2E59A1AA727F * SpeechRecognitionEventArgs_get_Result_m1389C14A09CF6A3065569F67F3E7B624EE5A1370 (SpeechRecognitionEventArgs_t1FB7CC9C07684BA7F03F63DF226A306D7C5F2CEA * __this, const RuntimeMethod* method)
{
	{
		SpeechRecognitionResult_t65860E5862B0CFC304215FF5084A2E59A1AA727F * L_0 = __this->get_U3CResultU3Ek__BackingField_6();
		return L_0;
	}
}
// System.String Microsoft.CognitiveServices.Speech.SpeechRecognitionEventArgs::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SpeechRecognitionEventArgs_ToString_mC9FBD260911606DE6CC8135FBC231385EE2E531A (SpeechRecognitionEventArgs_t1FB7CC9C07684BA7F03F63DF226A306D7C5F2CEA * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ResultReason_tB8FC6492BDC104DC14FE8E50C557C68A35466BF5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1F16CCC8B5C539FDA6D18899BE786616CC0A66C9);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_il2cpp_TypeInfo_var);
		CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * L_0;
		L_0 = CultureInfo_get_InvariantCulture_m9FAAFAF8A00091EE1FCB7098AD3F163ECDF02164(/*hidden argument*/NULL);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)4);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_2 = L_1;
		String_t* L_3;
		L_3 = SessionEventArgs_get_SessionId_m8C680FABDADC335561EA0F07CEA0F2F38A968960_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_3);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_4 = L_2;
		SpeechRecognitionResult_t65860E5862B0CFC304215FF5084A2E59A1AA727F * L_5;
		L_5 = SpeechRecognitionEventArgs_get_Result_m1389C14A09CF6A3065569F67F3E7B624EE5A1370_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_5);
		String_t* L_6;
		L_6 = VirtFuncInvoker0< String_t* >::Invoke(4 /* System.String Microsoft.CognitiveServices.Speech.RecognitionResult::get_ResultId() */, L_5);
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_6);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_6);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_7 = L_4;
		SpeechRecognitionResult_t65860E5862B0CFC304215FF5084A2E59A1AA727F * L_8;
		L_8 = SpeechRecognitionEventArgs_get_Result_m1389C14A09CF6A3065569F67F3E7B624EE5A1370_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_8);
		int32_t L_9;
		L_9 = VirtFuncInvoker0< int32_t >::Invoke(5 /* Microsoft.CognitiveServices.Speech.ResultReason Microsoft.CognitiveServices.Speech.RecognitionResult::get_Reason() */, L_8);
		int32_t L_10 = L_9;
		RuntimeObject * L_11 = Box(ResultReason_tB8FC6492BDC104DC14FE8E50C557C68A35466BF5_il2cpp_TypeInfo_var, &L_10);
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, L_11);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)L_11);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_12 = L_7;
		SpeechRecognitionResult_t65860E5862B0CFC304215FF5084A2E59A1AA727F * L_13;
		L_13 = SpeechRecognitionEventArgs_get_Result_m1389C14A09CF6A3065569F67F3E7B624EE5A1370_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_13);
		String_t* L_14;
		L_14 = VirtFuncInvoker0< String_t* >::Invoke(6 /* System.String Microsoft.CognitiveServices.Speech.RecognitionResult::get_Text() */, L_13);
		NullCheck(L_12);
		ArrayElementTypeCheck (L_12, L_14);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_14);
		String_t* L_15;
		L_15 = String_Format_mF96F0621DC567D09C07F1EAC66B31AD261A9DC21(L_0, _stringLiteral1F16CCC8B5C539FDA6D18899BE786616CC0A66C9, L_12, /*hidden argument*/NULL);
		return L_15;
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
// System.Void Microsoft.CognitiveServices.Speech.SpeechRecognitionResult::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpeechRecognitionResult__ctor_m55B5299672F300EDE742234DC6E0E39F51B33902 (SpeechRecognitionResult_t65860E5862B0CFC304215FF5084A2E59A1AA727F * __this, intptr_t ___resultPtr0, const RuntimeMethod* method)
{
	{
		intptr_t L_0 = ___resultPtr0;
		RecognitionResult__ctor_m7D01DA66AAD01DE820449823615BF686A33EC72E(__this, (intptr_t)L_0, /*hidden argument*/NULL);
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
extern "C" void CDECL ReversePInvokeWrapper_SpeechRecognizer_FireEvent_Recognizing_m3BAA0548428B005FA57B77CB4B09D157F5D34E0F(intptr_t ___hreco0, intptr_t ___hevent1, intptr_t ___pvContext2)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	SpeechRecognizer_FireEvent_Recognizing_m3BAA0548428B005FA57B77CB4B09D157F5D34E0F(___hreco0, ___hevent1, ___pvContext2, NULL);

}
extern "C" void CDECL ReversePInvokeWrapper_SpeechRecognizer_FireEvent_Recognized_m67E62803BF374C34B61CFC991DA73FE25AF287BF(intptr_t ___hreco0, intptr_t ___hevent1, intptr_t ___pvContext2)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	SpeechRecognizer_FireEvent_Recognized_m67E62803BF374C34B61CFC991DA73FE25AF287BF(___hreco0, ___hevent1, ___pvContext2, NULL);

}
extern "C" void CDECL ReversePInvokeWrapper_SpeechRecognizer_FireEvent_Canceled_m4DDE18DFD654DACBDE97F182D735A624B5E601F2(intptr_t ___hreco0, intptr_t ___hevent1, intptr_t ___pvContext2)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	SpeechRecognizer_FireEvent_Canceled_m4DDE18DFD654DACBDE97F182D735A624B5E601F2(___hreco0, ___hevent1, ___pvContext2, NULL);

}
// System.Void Microsoft.CognitiveServices.Speech.SpeechRecognizer::add__Recognizing(System.EventHandler`1<Microsoft.CognitiveServices.Speech.SpeechRecognitionEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpeechRecognizer_add__Recognizing_m80E20BB088605524849E64F4BAB797E4659E3491 (SpeechRecognizer_tD9F66F83FE18A3C87986B87E9108997AC919BF2A * __this, EventHandler_1_tAD0C572F17FD1D8D2AAADAE630AAEC4D89CF650C * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tAD0C572F17FD1D8D2AAADAE630AAEC4D89CF650C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_tAD0C572F17FD1D8D2AAADAE630AAEC4D89CF650C * V_0 = NULL;
	EventHandler_1_tAD0C572F17FD1D8D2AAADAE630AAEC4D89CF650C * V_1 = NULL;
	EventHandler_1_tAD0C572F17FD1D8D2AAADAE630AAEC4D89CF650C * V_2 = NULL;
	{
		EventHandler_1_tAD0C572F17FD1D8D2AAADAE630AAEC4D89CF650C * L_0 = __this->get__Recognizing_19();
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_tAD0C572F17FD1D8D2AAADAE630AAEC4D89CF650C * L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_tAD0C572F17FD1D8D2AAADAE630AAEC4D89CF650C * L_2 = V_1;
		EventHandler_1_tAD0C572F17FD1D8D2AAADAE630AAEC4D89CF650C * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((EventHandler_1_tAD0C572F17FD1D8D2AAADAE630AAEC4D89CF650C *)CastclassSealed((RuntimeObject*)L_4, EventHandler_1_tAD0C572F17FD1D8D2AAADAE630AAEC4D89CF650C_il2cpp_TypeInfo_var));
		EventHandler_1_tAD0C572F17FD1D8D2AAADAE630AAEC4D89CF650C ** L_5 = __this->get_address_of__Recognizing_19();
		EventHandler_1_tAD0C572F17FD1D8D2AAADAE630AAEC4D89CF650C * L_6 = V_2;
		EventHandler_1_tAD0C572F17FD1D8D2AAADAE630AAEC4D89CF650C * L_7 = V_1;
		EventHandler_1_tAD0C572F17FD1D8D2AAADAE630AAEC4D89CF650C * L_8;
		L_8 = InterlockedCompareExchangeImpl<EventHandler_1_tAD0C572F17FD1D8D2AAADAE630AAEC4D89CF650C *>((EventHandler_1_tAD0C572F17FD1D8D2AAADAE630AAEC4D89CF650C **)L_5, L_6, L_7);
		V_0 = L_8;
		EventHandler_1_tAD0C572F17FD1D8D2AAADAE630AAEC4D89CF650C * L_9 = V_0;
		EventHandler_1_tAD0C572F17FD1D8D2AAADAE630AAEC4D89CF650C * L_10 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_tAD0C572F17FD1D8D2AAADAE630AAEC4D89CF650C *)L_9) == ((RuntimeObject*)(EventHandler_1_tAD0C572F17FD1D8D2AAADAE630AAEC4D89CF650C *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.SpeechRecognizer::remove__Recognizing(System.EventHandler`1<Microsoft.CognitiveServices.Speech.SpeechRecognitionEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpeechRecognizer_remove__Recognizing_mCFA598D6668DFF893337F62828EAA61EB9F19723 (SpeechRecognizer_tD9F66F83FE18A3C87986B87E9108997AC919BF2A * __this, EventHandler_1_tAD0C572F17FD1D8D2AAADAE630AAEC4D89CF650C * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tAD0C572F17FD1D8D2AAADAE630AAEC4D89CF650C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_tAD0C572F17FD1D8D2AAADAE630AAEC4D89CF650C * V_0 = NULL;
	EventHandler_1_tAD0C572F17FD1D8D2AAADAE630AAEC4D89CF650C * V_1 = NULL;
	EventHandler_1_tAD0C572F17FD1D8D2AAADAE630AAEC4D89CF650C * V_2 = NULL;
	{
		EventHandler_1_tAD0C572F17FD1D8D2AAADAE630AAEC4D89CF650C * L_0 = __this->get__Recognizing_19();
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_tAD0C572F17FD1D8D2AAADAE630AAEC4D89CF650C * L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_tAD0C572F17FD1D8D2AAADAE630AAEC4D89CF650C * L_2 = V_1;
		EventHandler_1_tAD0C572F17FD1D8D2AAADAE630AAEC4D89CF650C * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Remove_m8B4AD17254118B2904720D55C9B34FB3DCCBD7D4(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((EventHandler_1_tAD0C572F17FD1D8D2AAADAE630AAEC4D89CF650C *)CastclassSealed((RuntimeObject*)L_4, EventHandler_1_tAD0C572F17FD1D8D2AAADAE630AAEC4D89CF650C_il2cpp_TypeInfo_var));
		EventHandler_1_tAD0C572F17FD1D8D2AAADAE630AAEC4D89CF650C ** L_5 = __this->get_address_of__Recognizing_19();
		EventHandler_1_tAD0C572F17FD1D8D2AAADAE630AAEC4D89CF650C * L_6 = V_2;
		EventHandler_1_tAD0C572F17FD1D8D2AAADAE630AAEC4D89CF650C * L_7 = V_1;
		EventHandler_1_tAD0C572F17FD1D8D2AAADAE630AAEC4D89CF650C * L_8;
		L_8 = InterlockedCompareExchangeImpl<EventHandler_1_tAD0C572F17FD1D8D2AAADAE630AAEC4D89CF650C *>((EventHandler_1_tAD0C572F17FD1D8D2AAADAE630AAEC4D89CF650C **)L_5, L_6, L_7);
		V_0 = L_8;
		EventHandler_1_tAD0C572F17FD1D8D2AAADAE630AAEC4D89CF650C * L_9 = V_0;
		EventHandler_1_tAD0C572F17FD1D8D2AAADAE630AAEC4D89CF650C * L_10 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_tAD0C572F17FD1D8D2AAADAE630AAEC4D89CF650C *)L_9) == ((RuntimeObject*)(EventHandler_1_tAD0C572F17FD1D8D2AAADAE630AAEC4D89CF650C *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.SpeechRecognizer::add__Recognized(System.EventHandler`1<Microsoft.CognitiveServices.Speech.SpeechRecognitionEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpeechRecognizer_add__Recognized_m62E0B99053088A27A5BC428F2F268FB5B5A97943 (SpeechRecognizer_tD9F66F83FE18A3C87986B87E9108997AC919BF2A * __this, EventHandler_1_tAD0C572F17FD1D8D2AAADAE630AAEC4D89CF650C * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tAD0C572F17FD1D8D2AAADAE630AAEC4D89CF650C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_tAD0C572F17FD1D8D2AAADAE630AAEC4D89CF650C * V_0 = NULL;
	EventHandler_1_tAD0C572F17FD1D8D2AAADAE630AAEC4D89CF650C * V_1 = NULL;
	EventHandler_1_tAD0C572F17FD1D8D2AAADAE630AAEC4D89CF650C * V_2 = NULL;
	{
		EventHandler_1_tAD0C572F17FD1D8D2AAADAE630AAEC4D89CF650C * L_0 = __this->get__Recognized_20();
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_tAD0C572F17FD1D8D2AAADAE630AAEC4D89CF650C * L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_tAD0C572F17FD1D8D2AAADAE630AAEC4D89CF650C * L_2 = V_1;
		EventHandler_1_tAD0C572F17FD1D8D2AAADAE630AAEC4D89CF650C * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((EventHandler_1_tAD0C572F17FD1D8D2AAADAE630AAEC4D89CF650C *)CastclassSealed((RuntimeObject*)L_4, EventHandler_1_tAD0C572F17FD1D8D2AAADAE630AAEC4D89CF650C_il2cpp_TypeInfo_var));
		EventHandler_1_tAD0C572F17FD1D8D2AAADAE630AAEC4D89CF650C ** L_5 = __this->get_address_of__Recognized_20();
		EventHandler_1_tAD0C572F17FD1D8D2AAADAE630AAEC4D89CF650C * L_6 = V_2;
		EventHandler_1_tAD0C572F17FD1D8D2AAADAE630AAEC4D89CF650C * L_7 = V_1;
		EventHandler_1_tAD0C572F17FD1D8D2AAADAE630AAEC4D89CF650C * L_8;
		L_8 = InterlockedCompareExchangeImpl<EventHandler_1_tAD0C572F17FD1D8D2AAADAE630AAEC4D89CF650C *>((EventHandler_1_tAD0C572F17FD1D8D2AAADAE630AAEC4D89CF650C **)L_5, L_6, L_7);
		V_0 = L_8;
		EventHandler_1_tAD0C572F17FD1D8D2AAADAE630AAEC4D89CF650C * L_9 = V_0;
		EventHandler_1_tAD0C572F17FD1D8D2AAADAE630AAEC4D89CF650C * L_10 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_tAD0C572F17FD1D8D2AAADAE630AAEC4D89CF650C *)L_9) == ((RuntimeObject*)(EventHandler_1_tAD0C572F17FD1D8D2AAADAE630AAEC4D89CF650C *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.SpeechRecognizer::remove__Recognized(System.EventHandler`1<Microsoft.CognitiveServices.Speech.SpeechRecognitionEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpeechRecognizer_remove__Recognized_mC29E517C3AF82C572F196C98DDDE1C41F52A1ABE (SpeechRecognizer_tD9F66F83FE18A3C87986B87E9108997AC919BF2A * __this, EventHandler_1_tAD0C572F17FD1D8D2AAADAE630AAEC4D89CF650C * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tAD0C572F17FD1D8D2AAADAE630AAEC4D89CF650C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_tAD0C572F17FD1D8D2AAADAE630AAEC4D89CF650C * V_0 = NULL;
	EventHandler_1_tAD0C572F17FD1D8D2AAADAE630AAEC4D89CF650C * V_1 = NULL;
	EventHandler_1_tAD0C572F17FD1D8D2AAADAE630AAEC4D89CF650C * V_2 = NULL;
	{
		EventHandler_1_tAD0C572F17FD1D8D2AAADAE630AAEC4D89CF650C * L_0 = __this->get__Recognized_20();
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_tAD0C572F17FD1D8D2AAADAE630AAEC4D89CF650C * L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_tAD0C572F17FD1D8D2AAADAE630AAEC4D89CF650C * L_2 = V_1;
		EventHandler_1_tAD0C572F17FD1D8D2AAADAE630AAEC4D89CF650C * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Remove_m8B4AD17254118B2904720D55C9B34FB3DCCBD7D4(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((EventHandler_1_tAD0C572F17FD1D8D2AAADAE630AAEC4D89CF650C *)CastclassSealed((RuntimeObject*)L_4, EventHandler_1_tAD0C572F17FD1D8D2AAADAE630AAEC4D89CF650C_il2cpp_TypeInfo_var));
		EventHandler_1_tAD0C572F17FD1D8D2AAADAE630AAEC4D89CF650C ** L_5 = __this->get_address_of__Recognized_20();
		EventHandler_1_tAD0C572F17FD1D8D2AAADAE630AAEC4D89CF650C * L_6 = V_2;
		EventHandler_1_tAD0C572F17FD1D8D2AAADAE630AAEC4D89CF650C * L_7 = V_1;
		EventHandler_1_tAD0C572F17FD1D8D2AAADAE630AAEC4D89CF650C * L_8;
		L_8 = InterlockedCompareExchangeImpl<EventHandler_1_tAD0C572F17FD1D8D2AAADAE630AAEC4D89CF650C *>((EventHandler_1_tAD0C572F17FD1D8D2AAADAE630AAEC4D89CF650C **)L_5, L_6, L_7);
		V_0 = L_8;
		EventHandler_1_tAD0C572F17FD1D8D2AAADAE630AAEC4D89CF650C * L_9 = V_0;
		EventHandler_1_tAD0C572F17FD1D8D2AAADAE630AAEC4D89CF650C * L_10 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_tAD0C572F17FD1D8D2AAADAE630AAEC4D89CF650C *)L_9) == ((RuntimeObject*)(EventHandler_1_tAD0C572F17FD1D8D2AAADAE630AAEC4D89CF650C *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.SpeechRecognizer::add__Canceled(System.EventHandler`1<Microsoft.CognitiveServices.Speech.SpeechRecognitionCanceledEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpeechRecognizer_add__Canceled_m5E772F5E6AEFF1CD22296B9C9C4FC9B2A34FAC24 (SpeechRecognizer_tD9F66F83FE18A3C87986B87E9108997AC919BF2A * __this, EventHandler_1_t69FC758E917DED0BD7F1732BE32EAE11D78B8D50 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_t69FC758E917DED0BD7F1732BE32EAE11D78B8D50_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_t69FC758E917DED0BD7F1732BE32EAE11D78B8D50 * V_0 = NULL;
	EventHandler_1_t69FC758E917DED0BD7F1732BE32EAE11D78B8D50 * V_1 = NULL;
	EventHandler_1_t69FC758E917DED0BD7F1732BE32EAE11D78B8D50 * V_2 = NULL;
	{
		EventHandler_1_t69FC758E917DED0BD7F1732BE32EAE11D78B8D50 * L_0 = __this->get__Canceled_21();
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_t69FC758E917DED0BD7F1732BE32EAE11D78B8D50 * L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_t69FC758E917DED0BD7F1732BE32EAE11D78B8D50 * L_2 = V_1;
		EventHandler_1_t69FC758E917DED0BD7F1732BE32EAE11D78B8D50 * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((EventHandler_1_t69FC758E917DED0BD7F1732BE32EAE11D78B8D50 *)CastclassSealed((RuntimeObject*)L_4, EventHandler_1_t69FC758E917DED0BD7F1732BE32EAE11D78B8D50_il2cpp_TypeInfo_var));
		EventHandler_1_t69FC758E917DED0BD7F1732BE32EAE11D78B8D50 ** L_5 = __this->get_address_of__Canceled_21();
		EventHandler_1_t69FC758E917DED0BD7F1732BE32EAE11D78B8D50 * L_6 = V_2;
		EventHandler_1_t69FC758E917DED0BD7F1732BE32EAE11D78B8D50 * L_7 = V_1;
		EventHandler_1_t69FC758E917DED0BD7F1732BE32EAE11D78B8D50 * L_8;
		L_8 = InterlockedCompareExchangeImpl<EventHandler_1_t69FC758E917DED0BD7F1732BE32EAE11D78B8D50 *>((EventHandler_1_t69FC758E917DED0BD7F1732BE32EAE11D78B8D50 **)L_5, L_6, L_7);
		V_0 = L_8;
		EventHandler_1_t69FC758E917DED0BD7F1732BE32EAE11D78B8D50 * L_9 = V_0;
		EventHandler_1_t69FC758E917DED0BD7F1732BE32EAE11D78B8D50 * L_10 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_t69FC758E917DED0BD7F1732BE32EAE11D78B8D50 *)L_9) == ((RuntimeObject*)(EventHandler_1_t69FC758E917DED0BD7F1732BE32EAE11D78B8D50 *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.SpeechRecognizer::remove__Canceled(System.EventHandler`1<Microsoft.CognitiveServices.Speech.SpeechRecognitionCanceledEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpeechRecognizer_remove__Canceled_m27D7B44B127DC397623ECB5C380134E21AEA72EC (SpeechRecognizer_tD9F66F83FE18A3C87986B87E9108997AC919BF2A * __this, EventHandler_1_t69FC758E917DED0BD7F1732BE32EAE11D78B8D50 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_t69FC758E917DED0BD7F1732BE32EAE11D78B8D50_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_t69FC758E917DED0BD7F1732BE32EAE11D78B8D50 * V_0 = NULL;
	EventHandler_1_t69FC758E917DED0BD7F1732BE32EAE11D78B8D50 * V_1 = NULL;
	EventHandler_1_t69FC758E917DED0BD7F1732BE32EAE11D78B8D50 * V_2 = NULL;
	{
		EventHandler_1_t69FC758E917DED0BD7F1732BE32EAE11D78B8D50 * L_0 = __this->get__Canceled_21();
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_t69FC758E917DED0BD7F1732BE32EAE11D78B8D50 * L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_t69FC758E917DED0BD7F1732BE32EAE11D78B8D50 * L_2 = V_1;
		EventHandler_1_t69FC758E917DED0BD7F1732BE32EAE11D78B8D50 * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Remove_m8B4AD17254118B2904720D55C9B34FB3DCCBD7D4(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((EventHandler_1_t69FC758E917DED0BD7F1732BE32EAE11D78B8D50 *)CastclassSealed((RuntimeObject*)L_4, EventHandler_1_t69FC758E917DED0BD7F1732BE32EAE11D78B8D50_il2cpp_TypeInfo_var));
		EventHandler_1_t69FC758E917DED0BD7F1732BE32EAE11D78B8D50 ** L_5 = __this->get_address_of__Canceled_21();
		EventHandler_1_t69FC758E917DED0BD7F1732BE32EAE11D78B8D50 * L_6 = V_2;
		EventHandler_1_t69FC758E917DED0BD7F1732BE32EAE11D78B8D50 * L_7 = V_1;
		EventHandler_1_t69FC758E917DED0BD7F1732BE32EAE11D78B8D50 * L_8;
		L_8 = InterlockedCompareExchangeImpl<EventHandler_1_t69FC758E917DED0BD7F1732BE32EAE11D78B8D50 *>((EventHandler_1_t69FC758E917DED0BD7F1732BE32EAE11D78B8D50 **)L_5, L_6, L_7);
		V_0 = L_8;
		EventHandler_1_t69FC758E917DED0BD7F1732BE32EAE11D78B8D50 * L_9 = V_0;
		EventHandler_1_t69FC758E917DED0BD7F1732BE32EAE11D78B8D50 * L_10 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_t69FC758E917DED0BD7F1732BE32EAE11D78B8D50 *)L_9) == ((RuntimeObject*)(EventHandler_1_t69FC758E917DED0BD7F1732BE32EAE11D78B8D50 *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.SpeechRecognizer::add_Recognizing(System.EventHandler`1<Microsoft.CognitiveServices.Speech.SpeechRecognitionEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpeechRecognizer_add_Recognizing_mC9D14C5AEFBCB9075168AE43D00E3010CC82B384 (SpeechRecognizer_tD9F66F83FE18A3C87986B87E9108997AC919BF2A * __this, EventHandler_1_tAD0C572F17FD1D8D2AAADAE630AAEC4D89CF650C * ___value0, const RuntimeMethod* method)
{
	{
		EventHandler_1_tAD0C572F17FD1D8D2AAADAE630AAEC4D89CF650C * L_0 = __this->get__Recognizing_19();
		if (L_0)
		{
			goto IL_0029;
		}
	}
	{
		InteropSafeHandle_tF14E3AD32AC904F5E38F4FAC0ED46417062386C6 * L_1 = ((Recognizer_tF1FAA5F9E223C619151C5DA96D83F0AF7E3C9E3E *)__this)->get_recoHandle_4();
		CallbackFunctionDelegate_tEDE2A24857EFCB03EE502D1E6E8A9E977030EAC4 * L_2 = __this->get_recognizingCallbackDelegate_22();
		GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603  L_3 = ((Recognizer_tF1FAA5F9E223C619151C5DA96D83F0AF7E3C9E3E *)__this)->get_gch_14();
		intptr_t L_4;
		L_4 = GCHandle_ToIntPtr_m017FBB27407865DD17A269CC03518EC518DE5AEA(L_3, /*hidden argument*/NULL);
		intptr_t L_5;
		L_5 = Recognizer_recognizer_recognizing_set_callback_m0FBD65D0735F5B286FE71E2DC91C04231297B466(L_1, L_2, (intptr_t)L_4, /*hidden argument*/NULL);
		SpxExceptionThrower_ThrowIfFail_m7269610C68DA4D960FE5E6208DF1BD9282C8F2DA((intptr_t)L_5, /*hidden argument*/NULL);
	}

IL_0029:
	{
		EventHandler_1_tAD0C572F17FD1D8D2AAADAE630AAEC4D89CF650C * L_6 = ___value0;
		SpeechRecognizer_add__Recognizing_m80E20BB088605524849E64F4BAB797E4659E3491(__this, L_6, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.SpeechRecognizer::remove_Recognizing(System.EventHandler`1<Microsoft.CognitiveServices.Speech.SpeechRecognitionEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpeechRecognizer_remove_Recognizing_mB5246A8D61D4FB0231F9E48F3ABBC25DE4813B38 (SpeechRecognizer_tD9F66F83FE18A3C87986B87E9108997AC919BF2A * __this, EventHandler_1_tAD0C572F17FD1D8D2AAADAE630AAEC4D89CF650C * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		EventHandler_1_tAD0C572F17FD1D8D2AAADAE630AAEC4D89CF650C * L_0 = ___value0;
		SpeechRecognizer_remove__Recognizing_mCFA598D6668DFF893337F62828EAA61EB9F19723(__this, L_0, /*hidden argument*/NULL);
		EventHandler_1_tAD0C572F17FD1D8D2AAADAE630AAEC4D89CF650C * L_1 = __this->get__Recognizing_19();
		if (L_1)
		{
			goto IL_0025;
		}
	}
	{
		InteropSafeHandle_tF14E3AD32AC904F5E38F4FAC0ED46417062386C6 * L_2 = ((Recognizer_tF1FAA5F9E223C619151C5DA96D83F0AF7E3C9E3E *)__this)->get_recoHandle_4();
		intptr_t L_3;
		L_3 = Recognizer_recognizer_recognizing_set_callback_m0FBD65D0735F5B286FE71E2DC91C04231297B466(L_2, (CallbackFunctionDelegate_tEDE2A24857EFCB03EE502D1E6E8A9E977030EAC4 *)NULL, (intptr_t)(0), /*hidden argument*/NULL);
		SpxExceptionThrower_LogErrorIfFail_m752E6CB197597DAD0613E0AA21841F7EFD46D624((intptr_t)L_3, /*hidden argument*/NULL);
	}

IL_0025:
	{
		return;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.SpeechRecognizer::add_Recognized(System.EventHandler`1<Microsoft.CognitiveServices.Speech.SpeechRecognitionEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpeechRecognizer_add_Recognized_m26A52181BB32A5B6B4ADDEB49ADD2F2434DD4833 (SpeechRecognizer_tD9F66F83FE18A3C87986B87E9108997AC919BF2A * __this, EventHandler_1_tAD0C572F17FD1D8D2AAADAE630AAEC4D89CF650C * ___value0, const RuntimeMethod* method)
{
	{
		EventHandler_1_tAD0C572F17FD1D8D2AAADAE630AAEC4D89CF650C * L_0 = __this->get__Recognized_20();
		if (L_0)
		{
			goto IL_0029;
		}
	}
	{
		InteropSafeHandle_tF14E3AD32AC904F5E38F4FAC0ED46417062386C6 * L_1 = ((Recognizer_tF1FAA5F9E223C619151C5DA96D83F0AF7E3C9E3E *)__this)->get_recoHandle_4();
		CallbackFunctionDelegate_tEDE2A24857EFCB03EE502D1E6E8A9E977030EAC4 * L_2 = __this->get_recognizedCallbackDelegate_23();
		GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603  L_3 = ((Recognizer_tF1FAA5F9E223C619151C5DA96D83F0AF7E3C9E3E *)__this)->get_gch_14();
		intptr_t L_4;
		L_4 = GCHandle_ToIntPtr_m017FBB27407865DD17A269CC03518EC518DE5AEA(L_3, /*hidden argument*/NULL);
		intptr_t L_5;
		L_5 = Recognizer_recognizer_recognized_set_callback_m262A0DD6A93CABB015B86E65229021E89C037FE9(L_1, L_2, (intptr_t)L_4, /*hidden argument*/NULL);
		SpxExceptionThrower_ThrowIfFail_m7269610C68DA4D960FE5E6208DF1BD9282C8F2DA((intptr_t)L_5, /*hidden argument*/NULL);
	}

IL_0029:
	{
		EventHandler_1_tAD0C572F17FD1D8D2AAADAE630AAEC4D89CF650C * L_6 = ___value0;
		SpeechRecognizer_add__Recognized_m62E0B99053088A27A5BC428F2F268FB5B5A97943(__this, L_6, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.SpeechRecognizer::remove_Recognized(System.EventHandler`1<Microsoft.CognitiveServices.Speech.SpeechRecognitionEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpeechRecognizer_remove_Recognized_m5146BC4962A53D0A357103D0F4CB6A4CA0E50E78 (SpeechRecognizer_tD9F66F83FE18A3C87986B87E9108997AC919BF2A * __this, EventHandler_1_tAD0C572F17FD1D8D2AAADAE630AAEC4D89CF650C * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		EventHandler_1_tAD0C572F17FD1D8D2AAADAE630AAEC4D89CF650C * L_0 = ___value0;
		SpeechRecognizer_remove__Recognized_mC29E517C3AF82C572F196C98DDDE1C41F52A1ABE(__this, L_0, /*hidden argument*/NULL);
		EventHandler_1_tAD0C572F17FD1D8D2AAADAE630AAEC4D89CF650C * L_1 = __this->get__Recognized_20();
		if (L_1)
		{
			goto IL_0025;
		}
	}
	{
		InteropSafeHandle_tF14E3AD32AC904F5E38F4FAC0ED46417062386C6 * L_2 = ((Recognizer_tF1FAA5F9E223C619151C5DA96D83F0AF7E3C9E3E *)__this)->get_recoHandle_4();
		intptr_t L_3;
		L_3 = Recognizer_recognizer_recognized_set_callback_m262A0DD6A93CABB015B86E65229021E89C037FE9(L_2, (CallbackFunctionDelegate_tEDE2A24857EFCB03EE502D1E6E8A9E977030EAC4 *)NULL, (intptr_t)(0), /*hidden argument*/NULL);
		SpxExceptionThrower_LogErrorIfFail_m752E6CB197597DAD0613E0AA21841F7EFD46D624((intptr_t)L_3, /*hidden argument*/NULL);
	}

IL_0025:
	{
		return;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.SpeechRecognizer::add_Canceled(System.EventHandler`1<Microsoft.CognitiveServices.Speech.SpeechRecognitionCanceledEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpeechRecognizer_add_Canceled_m3134FC776D0C6C9C476C55409754521DECB4A7B7 (SpeechRecognizer_tD9F66F83FE18A3C87986B87E9108997AC919BF2A * __this, EventHandler_1_t69FC758E917DED0BD7F1732BE32EAE11D78B8D50 * ___value0, const RuntimeMethod* method)
{
	{
		EventHandler_1_t69FC758E917DED0BD7F1732BE32EAE11D78B8D50 * L_0 = __this->get__Canceled_21();
		if (L_0)
		{
			goto IL_0029;
		}
	}
	{
		InteropSafeHandle_tF14E3AD32AC904F5E38F4FAC0ED46417062386C6 * L_1 = ((Recognizer_tF1FAA5F9E223C619151C5DA96D83F0AF7E3C9E3E *)__this)->get_recoHandle_4();
		CallbackFunctionDelegate_tEDE2A24857EFCB03EE502D1E6E8A9E977030EAC4 * L_2 = __this->get_canceledCallbackDelegate_24();
		GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603  L_3 = ((Recognizer_tF1FAA5F9E223C619151C5DA96D83F0AF7E3C9E3E *)__this)->get_gch_14();
		intptr_t L_4;
		L_4 = GCHandle_ToIntPtr_m017FBB27407865DD17A269CC03518EC518DE5AEA(L_3, /*hidden argument*/NULL);
		intptr_t L_5;
		L_5 = Recognizer_recognizer_canceled_set_callback_mC5295B5F4B2ED3207AB92D2DAA94B229509EDE60(L_1, L_2, (intptr_t)L_4, /*hidden argument*/NULL);
		SpxExceptionThrower_ThrowIfFail_m7269610C68DA4D960FE5E6208DF1BD9282C8F2DA((intptr_t)L_5, /*hidden argument*/NULL);
	}

IL_0029:
	{
		EventHandler_1_t69FC758E917DED0BD7F1732BE32EAE11D78B8D50 * L_6 = ___value0;
		SpeechRecognizer_add__Canceled_m5E772F5E6AEFF1CD22296B9C9C4FC9B2A34FAC24(__this, L_6, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.SpeechRecognizer::remove_Canceled(System.EventHandler`1<Microsoft.CognitiveServices.Speech.SpeechRecognitionCanceledEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpeechRecognizer_remove_Canceled_mE77B85775D47546C0653013364D3A47545D17085 (SpeechRecognizer_tD9F66F83FE18A3C87986B87E9108997AC919BF2A * __this, EventHandler_1_t69FC758E917DED0BD7F1732BE32EAE11D78B8D50 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		EventHandler_1_t69FC758E917DED0BD7F1732BE32EAE11D78B8D50 * L_0 = ___value0;
		SpeechRecognizer_remove__Canceled_m27D7B44B127DC397623ECB5C380134E21AEA72EC(__this, L_0, /*hidden argument*/NULL);
		EventHandler_1_t69FC758E917DED0BD7F1732BE32EAE11D78B8D50 * L_1 = __this->get__Canceled_21();
		if (L_1)
		{
			goto IL_0025;
		}
	}
	{
		InteropSafeHandle_tF14E3AD32AC904F5E38F4FAC0ED46417062386C6 * L_2 = ((Recognizer_tF1FAA5F9E223C619151C5DA96D83F0AF7E3C9E3E *)__this)->get_recoHandle_4();
		intptr_t L_3;
		L_3 = Recognizer_recognizer_canceled_set_callback_mC5295B5F4B2ED3207AB92D2DAA94B229509EDE60(L_2, (CallbackFunctionDelegate_tEDE2A24857EFCB03EE502D1E6E8A9E977030EAC4 *)NULL, (intptr_t)(0), /*hidden argument*/NULL);
		SpxExceptionThrower_LogErrorIfFail_m752E6CB197597DAD0613E0AA21841F7EFD46D624((intptr_t)L_3, /*hidden argument*/NULL);
	}

IL_0025:
	{
		return;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.SpeechRecognizer::.ctor(Microsoft.CognitiveServices.Speech.SpeechConfig)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpeechRecognizer__ctor_m81FDB924D464DAB21019D0EBDE866F493EB39F75 (SpeechRecognizer_tD9F66F83FE18A3C87986B87E9108997AC919BF2A * __this, SpeechConfig_tB1A7AD16A9CDE287A706780CBD6F22AAA64A9E11 * ___speechConfig0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GetRecognizerFromConfigDelegate_t2DC882A03ECDF618A982ED55B82B4ED3D829FACC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SpxFactory_recognizer_create_speech_recognizer_from_config_mEFA185528C9EF0F4C5883329D957F95566B57E8B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		GetRecognizerFromConfigDelegate_t2DC882A03ECDF618A982ED55B82B4ED3D829FACC * L_0 = (GetRecognizerFromConfigDelegate_t2DC882A03ECDF618A982ED55B82B4ED3D829FACC *)il2cpp_codegen_object_new(GetRecognizerFromConfigDelegate_t2DC882A03ECDF618A982ED55B82B4ED3D829FACC_il2cpp_TypeInfo_var);
		GetRecognizerFromConfigDelegate__ctor_m1D7851683A3D41399DB7BC5B6F36E32ABEBF62FC(L_0, NULL, (intptr_t)((intptr_t)SpxFactory_recognizer_create_speech_recognizer_from_config_mEFA185528C9EF0F4C5883329D957F95566B57E8B_RuntimeMethod_var), /*hidden argument*/NULL);
		SpeechConfig_tB1A7AD16A9CDE287A706780CBD6F22AAA64A9E11 * L_1 = ___speechConfig0;
		InteropSafeHandle_tF14E3AD32AC904F5E38F4FAC0ED46417062386C6 * L_2;
		L_2 = Recognizer_FromConfig_m60791AE2ACE591729B360D7615035FF13CAFBBF7(L_0, L_1, /*hidden argument*/NULL);
		SpeechRecognizer__ctor_m030946A0C9CCF1B50A039FA14805EB86D9937720(__this, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.SpeechRecognizer::.ctor(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpeechRecognizer__ctor_m030946A0C9CCF1B50A039FA14805EB86D9937720 (SpeechRecognizer_tD9F66F83FE18A3C87986B87E9108997AC919BF2A * __this, InteropSafeHandle_tF14E3AD32AC904F5E38F4FAC0ED46417062386C6 * ___recoHandle0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CallbackFunctionDelegate_tEDE2A24857EFCB03EE502D1E6E8A9E977030EAC4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PropertyCollection_tD6D50793A0684647D5C7067381E1365EDB3AA920_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SpeechRecognizer_FireEvent_Canceled_m4DDE18DFD654DACBDE97F182D735A624B5E601F2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SpeechRecognizer_FireEvent_Recognized_m67E62803BF374C34B61CFC991DA73FE25AF287BF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SpeechRecognizer_FireEvent_Recognizing_m3BAA0548428B005FA57B77CB4B09D157F5D34E0F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7D62C11CCF10BDFC07ACE3D149248DE3F051849C);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		InteropSafeHandle_tF14E3AD32AC904F5E38F4FAC0ED46417062386C6 * L_0 = ___recoHandle0;
		Recognizer__ctor_m5707D0C68E07B4A737C753DDBA817377F0CDDF5E(__this, L_0, /*hidden argument*/NULL);
		InteropSafeHandle_tF14E3AD32AC904F5E38F4FAC0ED46417062386C6 * L_1 = ___recoHandle0;
		SpxExceptionThrower_ThrowIfNull_mC54EA71790A454E5785FC15C4FFBB6F457E772DB(L_1, _stringLiteral7D62C11CCF10BDFC07ACE3D149248DE3F051849C, /*hidden argument*/NULL);
		CallbackFunctionDelegate_tEDE2A24857EFCB03EE502D1E6E8A9E977030EAC4 * L_2 = (CallbackFunctionDelegate_tEDE2A24857EFCB03EE502D1E6E8A9E977030EAC4 *)il2cpp_codegen_object_new(CallbackFunctionDelegate_tEDE2A24857EFCB03EE502D1E6E8A9E977030EAC4_il2cpp_TypeInfo_var);
		CallbackFunctionDelegate__ctor_m34250E2B4EB599FB96576EC76B41BA44F32482AB(L_2, NULL, (intptr_t)((intptr_t)SpeechRecognizer_FireEvent_Recognizing_m3BAA0548428B005FA57B77CB4B09D157F5D34E0F_RuntimeMethod_var), /*hidden argument*/NULL);
		__this->set_recognizingCallbackDelegate_22(L_2);
		CallbackFunctionDelegate_tEDE2A24857EFCB03EE502D1E6E8A9E977030EAC4 * L_3 = (CallbackFunctionDelegate_tEDE2A24857EFCB03EE502D1E6E8A9E977030EAC4 *)il2cpp_codegen_object_new(CallbackFunctionDelegate_tEDE2A24857EFCB03EE502D1E6E8A9E977030EAC4_il2cpp_TypeInfo_var);
		CallbackFunctionDelegate__ctor_m34250E2B4EB599FB96576EC76B41BA44F32482AB(L_3, NULL, (intptr_t)((intptr_t)SpeechRecognizer_FireEvent_Recognized_m67E62803BF374C34B61CFC991DA73FE25AF287BF_RuntimeMethod_var), /*hidden argument*/NULL);
		__this->set_recognizedCallbackDelegate_23(L_3);
		CallbackFunctionDelegate_tEDE2A24857EFCB03EE502D1E6E8A9E977030EAC4 * L_4 = (CallbackFunctionDelegate_tEDE2A24857EFCB03EE502D1E6E8A9E977030EAC4 *)il2cpp_codegen_object_new(CallbackFunctionDelegate_tEDE2A24857EFCB03EE502D1E6E8A9E977030EAC4_il2cpp_TypeInfo_var);
		CallbackFunctionDelegate__ctor_m34250E2B4EB599FB96576EC76B41BA44F32482AB(L_4, NULL, (intptr_t)((intptr_t)SpeechRecognizer_FireEvent_Canceled_m4DDE18DFD654DACBDE97F182D735A624B5E601F2_RuntimeMethod_var), /*hidden argument*/NULL);
		__this->set_canceledCallbackDelegate_24(L_4);
		V_0 = (intptr_t)(0);
		InteropSafeHandle_tF14E3AD32AC904F5E38F4FAC0ED46417062386C6 * L_5 = ___recoHandle0;
		intptr_t L_6;
		L_6 = Recognizer_recognizer_get_property_bag_m52747647E843FD151DC9CFC39C0B3A32D58979F1(L_5, (intptr_t*)(&V_0), /*hidden argument*/NULL);
		SpxExceptionThrower_ThrowIfFail_m7269610C68DA4D960FE5E6208DF1BD9282C8F2DA((intptr_t)L_6, /*hidden argument*/NULL);
		intptr_t L_7 = V_0;
		PropertyCollection_tD6D50793A0684647D5C7067381E1365EDB3AA920 * L_8 = (PropertyCollection_tD6D50793A0684647D5C7067381E1365EDB3AA920 *)il2cpp_codegen_object_new(PropertyCollection_tD6D50793A0684647D5C7067381E1365EDB3AA920_il2cpp_TypeInfo_var);
		PropertyCollection__ctor_m298675719270993E505A055053F0D23293B517D2(L_8, (intptr_t)L_7, /*hidden argument*/NULL);
		SpeechRecognizer_set_Properties_mF2118E137B1726D1BE3D31AF54617D3F6C79035A_inline(__this, L_8, /*hidden argument*/NULL);
		return;
	}
}
// Microsoft.CognitiveServices.Speech.PropertyCollection Microsoft.CognitiveServices.Speech.SpeechRecognizer::get_Properties()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PropertyCollection_tD6D50793A0684647D5C7067381E1365EDB3AA920 * SpeechRecognizer_get_Properties_mBA0F85A8988F7921955F690761443143B7563EB3 (SpeechRecognizer_tD9F66F83FE18A3C87986B87E9108997AC919BF2A * __this, const RuntimeMethod* method)
{
	{
		PropertyCollection_tD6D50793A0684647D5C7067381E1365EDB3AA920 * L_0 = __this->get_U3CPropertiesU3Ek__BackingField_25();
		return L_0;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.SpeechRecognizer::set_Properties(Microsoft.CognitiveServices.Speech.PropertyCollection)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpeechRecognizer_set_Properties_mF2118E137B1726D1BE3D31AF54617D3F6C79035A (SpeechRecognizer_tD9F66F83FE18A3C87986B87E9108997AC919BF2A * __this, PropertyCollection_tD6D50793A0684647D5C7067381E1365EDB3AA920 * ___value0, const RuntimeMethod* method)
{
	{
		PropertyCollection_tD6D50793A0684647D5C7067381E1365EDB3AA920 * L_0 = ___value0;
		__this->set_U3CPropertiesU3Ek__BackingField_25(L_0);
		return;
	}
}
// System.Threading.Tasks.Task Microsoft.CognitiveServices.Speech.SpeechRecognizer::StartContinuousRecognitionAsync()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * SpeechRecognizer_StartContinuousRecognitionAsync_m615484E4AD977DD1C55C42B0A2D40C1DE021408C (SpeechRecognizer_tD9F66F83FE18A3C87986B87E9108997AC919BF2A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SpeechRecognizer_U3CStartContinuousRecognitionAsyncU3Eb__48_0_m55F59D499889BA7B44BF8D1F3745BFF5B5AF0F82_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_0 = (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)il2cpp_codegen_object_new(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		Action__ctor_m07BE5EE8A629FBBA52AE6356D57A0D371BE2574B(L_0, __this, (intptr_t)((intptr_t)SpeechRecognizer_U3CStartContinuousRecognitionAsyncU3Eb__48_0_m55F59D499889BA7B44BF8D1F3745BFF5B5AF0F82_RuntimeMethod_var), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_il2cpp_TypeInfo_var);
		Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * L_1;
		L_1 = Task_Run_m77F41B8D89AFD69BE94888BC2CAD5E3183A79B8D(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Threading.Tasks.Task Microsoft.CognitiveServices.Speech.SpeechRecognizer::StopContinuousRecognitionAsync()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * SpeechRecognizer_StopContinuousRecognitionAsync_m7DCC497073169C3BBE9384205A4294E6BDB1B203 (SpeechRecognizer_tD9F66F83FE18A3C87986B87E9108997AC919BF2A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SpeechRecognizer_U3CStopContinuousRecognitionAsyncU3Eb__49_0_m6F826EAC9DEF582418CBAD8D1425FBB0F1F35F09_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_0 = (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)il2cpp_codegen_object_new(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		Action__ctor_m07BE5EE8A629FBBA52AE6356D57A0D371BE2574B(L_0, __this, (intptr_t)((intptr_t)SpeechRecognizer_U3CStopContinuousRecognitionAsyncU3Eb__49_0_m6F826EAC9DEF582418CBAD8D1425FBB0F1F35F09_RuntimeMethod_var), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_il2cpp_TypeInfo_var);
		Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * L_1;
		L_1 = Task_Run_m77F41B8D89AFD69BE94888BC2CAD5E3183A79B8D(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.SpeechRecognizer::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpeechRecognizer_Finalize_m30391E2CE943D036EC33086BC06EC7514182B30B (SpeechRecognizer_tD9F66F83FE18A3C87986B87E9108997AC919BF2A * __this, const RuntimeMethod* method)
{
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;

IL_0000:
	try
	{ // begin try (depth: 1)
		il2cpp_codegen_memory_barrier();
		((Recognizer_tF1FAA5F9E223C619151C5DA96D83F0AF7E3C9E3E *)__this)->set_isDisposing_16(1);
		VirtActionInvoker1< bool >::Invoke(5 /* System.Void Microsoft.CognitiveServices.Speech.Recognizer::Dispose(System.Boolean) */, __this, (bool)0);
		IL2CPP_LEAVE(0x19, FINALLY_0012);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0012;
	}

FINALLY_0012:
	{ // begin finally (depth: 1)
		Recognizer_Finalize_m20F81169F675CE0A27215591F1330A8853F916F8(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(18)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(18)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x19, IL_0019)
	}

IL_0019:
	{
		return;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.SpeechRecognizer::Dispose(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpeechRecognizer_Dispose_mE42EDC7833BEA6625BFDD35CA197F8A4732C4B19 (SpeechRecognizer_tD9F66F83FE18A3C87986B87E9108997AC919BF2A * __this, bool ___disposing0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	InteropSafeHandle_tF14E3AD32AC904F5E38F4FAC0ED46417062386C6 * G_B7_0 = NULL;
	InteropSafeHandle_tF14E3AD32AC904F5E38F4FAC0ED46417062386C6 * G_B6_0 = NULL;
	PropertyCollection_tD6D50793A0684647D5C7067381E1365EDB3AA920 * G_B10_0 = NULL;
	PropertyCollection_tD6D50793A0684647D5C7067381E1365EDB3AA920 * G_B9_0 = NULL;
	{
		bool L_0 = ((Recognizer_tF1FAA5F9E223C619151C5DA96D83F0AF7E3C9E3E *)__this)->get_disposed_15();
		il2cpp_codegen_memory_barrier();
		if (!L_0)
		{
			goto IL_000b;
		}
	}
	{
		return;
	}

IL_000b:
	{
		InteropSafeHandle_tF14E3AD32AC904F5E38F4FAC0ED46417062386C6 * L_1 = ((Recognizer_tF1FAA5F9E223C619151C5DA96D83F0AF7E3C9E3E *)__this)->get_recoHandle_4();
		if (!L_1)
		{
			goto IL_00b0;
		}
	}
	{
		InteropSafeHandle_tF14E3AD32AC904F5E38F4FAC0ED46417062386C6 * L_2 = ((Recognizer_tF1FAA5F9E223C619151C5DA96D83F0AF7E3C9E3E *)__this)->get_recoHandle_4();
		intptr_t L_3;
		L_3 = Recognizer_recognizer_recognizing_set_callback_m0FBD65D0735F5B286FE71E2DC91C04231297B466(L_2, (CallbackFunctionDelegate_tEDE2A24857EFCB03EE502D1E6E8A9E977030EAC4 *)NULL, (intptr_t)(0), /*hidden argument*/NULL);
		SpxExceptionThrower_LogErrorIfFail_m752E6CB197597DAD0613E0AA21841F7EFD46D624((intptr_t)L_3, /*hidden argument*/NULL);
		InteropSafeHandle_tF14E3AD32AC904F5E38F4FAC0ED46417062386C6 * L_4 = ((Recognizer_tF1FAA5F9E223C619151C5DA96D83F0AF7E3C9E3E *)__this)->get_recoHandle_4();
		intptr_t L_5;
		L_5 = Recognizer_recognizer_recognized_set_callback_m262A0DD6A93CABB015B86E65229021E89C037FE9(L_4, (CallbackFunctionDelegate_tEDE2A24857EFCB03EE502D1E6E8A9E977030EAC4 *)NULL, (intptr_t)(0), /*hidden argument*/NULL);
		SpxExceptionThrower_LogErrorIfFail_m752E6CB197597DAD0613E0AA21841F7EFD46D624((intptr_t)L_5, /*hidden argument*/NULL);
		InteropSafeHandle_tF14E3AD32AC904F5E38F4FAC0ED46417062386C6 * L_6 = ((Recognizer_tF1FAA5F9E223C619151C5DA96D83F0AF7E3C9E3E *)__this)->get_recoHandle_4();
		intptr_t L_7;
		L_7 = Recognizer_recognizer_canceled_set_callback_mC5295B5F4B2ED3207AB92D2DAA94B229509EDE60(L_6, (CallbackFunctionDelegate_tEDE2A24857EFCB03EE502D1E6E8A9E977030EAC4 *)NULL, (intptr_t)(0), /*hidden argument*/NULL);
		SpxExceptionThrower_LogErrorIfFail_m752E6CB197597DAD0613E0AA21841F7EFD46D624((intptr_t)L_7, /*hidden argument*/NULL);
		InteropSafeHandle_tF14E3AD32AC904F5E38F4FAC0ED46417062386C6 * L_8 = ((Recognizer_tF1FAA5F9E223C619151C5DA96D83F0AF7E3C9E3E *)__this)->get_recoHandle_4();
		intptr_t L_9;
		L_9 = Recognizer_recognizer_session_started_set_callback_m23B0AD337C8446036392FD763D5C81B4D43A8709(L_8, (CallbackFunctionDelegate_tEDE2A24857EFCB03EE502D1E6E8A9E977030EAC4 *)NULL, (intptr_t)(0), /*hidden argument*/NULL);
		SpxExceptionThrower_LogErrorIfFail_m752E6CB197597DAD0613E0AA21841F7EFD46D624((intptr_t)L_9, /*hidden argument*/NULL);
		InteropSafeHandle_tF14E3AD32AC904F5E38F4FAC0ED46417062386C6 * L_10 = ((Recognizer_tF1FAA5F9E223C619151C5DA96D83F0AF7E3C9E3E *)__this)->get_recoHandle_4();
		intptr_t L_11;
		L_11 = Recognizer_recognizer_session_stopped_set_callback_mEAD7E8432B82F964E1C5578C37DCDAD087A8C41B(L_10, (CallbackFunctionDelegate_tEDE2A24857EFCB03EE502D1E6E8A9E977030EAC4 *)NULL, (intptr_t)(0), /*hidden argument*/NULL);
		SpxExceptionThrower_LogErrorIfFail_m752E6CB197597DAD0613E0AA21841F7EFD46D624((intptr_t)L_11, /*hidden argument*/NULL);
		InteropSafeHandle_tF14E3AD32AC904F5E38F4FAC0ED46417062386C6 * L_12 = ((Recognizer_tF1FAA5F9E223C619151C5DA96D83F0AF7E3C9E3E *)__this)->get_recoHandle_4();
		intptr_t L_13;
		L_13 = Recognizer_recognizer_speech_start_detected_set_callback_m42E74A08ECDDA5E9BEA53AB98F170276324380F1(L_12, (CallbackFunctionDelegate_tEDE2A24857EFCB03EE502D1E6E8A9E977030EAC4 *)NULL, (intptr_t)(0), /*hidden argument*/NULL);
		SpxExceptionThrower_LogErrorIfFail_m752E6CB197597DAD0613E0AA21841F7EFD46D624((intptr_t)L_13, /*hidden argument*/NULL);
		InteropSafeHandle_tF14E3AD32AC904F5E38F4FAC0ED46417062386C6 * L_14 = ((Recognizer_tF1FAA5F9E223C619151C5DA96D83F0AF7E3C9E3E *)__this)->get_recoHandle_4();
		intptr_t L_15;
		L_15 = Recognizer_recognizer_speech_end_detected_set_callback_m54E9AA603B97AB97F61866B60D875BA4DDEC25CE(L_14, (CallbackFunctionDelegate_tEDE2A24857EFCB03EE502D1E6E8A9E977030EAC4 *)NULL, (intptr_t)(0), /*hidden argument*/NULL);
		SpxExceptionThrower_LogErrorIfFail_m752E6CB197597DAD0613E0AA21841F7EFD46D624((intptr_t)L_15, /*hidden argument*/NULL);
	}

IL_00b0:
	{
		bool L_16 = ___disposing0;
		if (!L_16)
		{
			goto IL_00d5;
		}
	}
	{
		InteropSafeHandle_tF14E3AD32AC904F5E38F4FAC0ED46417062386C6 * L_17 = ((Recognizer_tF1FAA5F9E223C619151C5DA96D83F0AF7E3C9E3E *)__this)->get_recoHandle_4();
		InteropSafeHandle_tF14E3AD32AC904F5E38F4FAC0ED46417062386C6 * L_18 = L_17;
		G_B6_0 = L_18;
		if (L_18)
		{
			G_B7_0 = L_18;
			goto IL_00bf;
		}
	}
	{
		goto IL_00c4;
	}

IL_00bf:
	{
		NullCheck(G_B7_0);
		SafeHandle_Dispose_mFFFB9D0CAE3EEE02F0D3DA250D5E52F0DD51B098(G_B7_0, /*hidden argument*/NULL);
	}

IL_00c4:
	{
		PropertyCollection_tD6D50793A0684647D5C7067381E1365EDB3AA920 * L_19;
		L_19 = SpeechRecognizer_get_Properties_mBA0F85A8988F7921955F690761443143B7563EB3_inline(__this, /*hidden argument*/NULL);
		PropertyCollection_tD6D50793A0684647D5C7067381E1365EDB3AA920 * L_20 = L_19;
		G_B9_0 = L_20;
		if (L_20)
		{
			G_B10_0 = L_20;
			goto IL_00d0;
		}
	}
	{
		goto IL_00d5;
	}

IL_00d0:
	{
		NullCheck(G_B10_0);
		VirtActionInvoker0::Invoke(4 /* System.Void Microsoft.CognitiveServices.Speech.PropertyCollection::Close() */, G_B10_0);
	}

IL_00d5:
	{
		__this->set_recognizingCallbackDelegate_22((CallbackFunctionDelegate_tEDE2A24857EFCB03EE502D1E6E8A9E977030EAC4 *)NULL);
		__this->set_recognizedCallbackDelegate_23((CallbackFunctionDelegate_tEDE2A24857EFCB03EE502D1E6E8A9E977030EAC4 *)NULL);
		__this->set_canceledCallbackDelegate_24((CallbackFunctionDelegate_tEDE2A24857EFCB03EE502D1E6E8A9E977030EAC4 *)NULL);
		__this->set_audioInputKeepAlive_26((AudioConfig_tF4EFBB8FE00E5C7569A7F087C11D4D85439A9E45 *)NULL);
		bool L_21 = ___disposing0;
		Recognizer_Dispose_m087FE4E3ED875BD3BF69DA66606404145E3C0400(__this, L_21, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.SpeechRecognizer::FireEvent_Recognizing(System.IntPtr,System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpeechRecognizer_FireEvent_Recognizing_m3BAA0548428B005FA57B77CB4B09D157F5D34E0F (intptr_t ___hreco0, intptr_t ___hevent1, intptr_t ___pvContext2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_Invoke_m34AF820A20D06B154B42AC2C4A2F47B68DFD69BD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InteropSafeHandle_GetObjectFromWeakHandle_TisSpeechRecognizer_tD9F66F83FE18A3C87986B87E9108997AC919BF2A_m456BCCB36FEDED91604F737E001380DEFBB9C88E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SpeechRecognitionEventArgs_t1FB7CC9C07684BA7F03F63DF226A306D7C5F2CEA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SpeechRecognizer_tD9F66F83FE18A3C87986B87E9108997AC919BF2A * V_0 = NULL;
	SpeechRecognitionEventArgs_t1FB7CC9C07684BA7F03F63DF226A306D7C5F2CEA * V_1 = NULL;
	Exception_t * V_2 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 3> __leave_targets;
	EventHandler_1_tAD0C572F17FD1D8D2AAADAE630AAEC4D89CF650C * G_B5_0 = NULL;
	EventHandler_1_tAD0C572F17FD1D8D2AAADAE630AAEC4D89CF650C * G_B4_0 = NULL;

IL_0000:
	try
	{ // begin try (depth: 1)
		{
			intptr_t L_0 = ___pvContext2;
			SpeechRecognizer_tD9F66F83FE18A3C87986B87E9108997AC919BF2A * L_1;
			L_1 = InteropSafeHandle_GetObjectFromWeakHandle_TisSpeechRecognizer_tD9F66F83FE18A3C87986B87E9108997AC919BF2A_m456BCCB36FEDED91604F737E001380DEFBB9C88E((intptr_t)L_0, /*hidden argument*/InteropSafeHandle_GetObjectFromWeakHandle_TisSpeechRecognizer_tD9F66F83FE18A3C87986B87E9108997AC919BF2A_m456BCCB36FEDED91604F737E001380DEFBB9C88E_RuntimeMethod_var);
			V_0 = L_1;
			SpeechRecognizer_tD9F66F83FE18A3C87986B87E9108997AC919BF2A * L_2 = V_0;
			if (!L_2)
			{
				goto IL_0014;
			}
		}

IL_000a:
		{
			SpeechRecognizer_tD9F66F83FE18A3C87986B87E9108997AC919BF2A * L_3 = V_0;
			NullCheck(L_3);
			bool L_4 = ((Recognizer_tF1FAA5F9E223C619151C5DA96D83F0AF7E3C9E3E *)L_3)->get_isDisposing_16();
			il2cpp_codegen_memory_barrier();
			if (!L_4)
			{
				goto IL_0016;
			}
		}

IL_0014:
		{
			goto IL_0040;
		}

IL_0016:
		{
			intptr_t L_5 = ___hevent1;
			SpeechRecognitionEventArgs_t1FB7CC9C07684BA7F03F63DF226A306D7C5F2CEA * L_6 = (SpeechRecognitionEventArgs_t1FB7CC9C07684BA7F03F63DF226A306D7C5F2CEA *)il2cpp_codegen_object_new(SpeechRecognitionEventArgs_t1FB7CC9C07684BA7F03F63DF226A306D7C5F2CEA_il2cpp_TypeInfo_var);
			SpeechRecognitionEventArgs__ctor_mC3BF882EE32BECD77C0DEDD86F6203E24B864012(L_6, (intptr_t)L_5, /*hidden argument*/NULL);
			V_1 = L_6;
			SpeechRecognizer_tD9F66F83FE18A3C87986B87E9108997AC919BF2A * L_7 = V_0;
			NullCheck(L_7);
			EventHandler_1_tAD0C572F17FD1D8D2AAADAE630AAEC4D89CF650C * L_8 = L_7->get__Recognizing_19();
			EventHandler_1_tAD0C572F17FD1D8D2AAADAE630AAEC4D89CF650C * L_9 = L_8;
			G_B4_0 = L_9;
			if (L_9)
			{
				G_B5_0 = L_9;
				goto IL_0029;
			}
		}

IL_0026:
		{
			goto IL_0030;
		}

IL_0029:
		{
			SpeechRecognizer_tD9F66F83FE18A3C87986B87E9108997AC919BF2A * L_10 = V_0;
			SpeechRecognitionEventArgs_t1FB7CC9C07684BA7F03F63DF226A306D7C5F2CEA * L_11 = V_1;
			NullCheck(G_B5_0);
			EventHandler_1_Invoke_m34AF820A20D06B154B42AC2C4A2F47B68DFD69BD(G_B5_0, L_10, L_11, /*hidden argument*/EventHandler_1_Invoke_m34AF820A20D06B154B42AC2C4A2F47B68DFD69BD_RuntimeMethod_var);
		}

IL_0030:
		{
			goto IL_0040;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0032;
		}
		throw e;
	}

CATCH_0032:
	{ // begin catch(System.Exception)
		V_2 = ((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *));
		Exception_t * L_12 = V_2;
		NullCheck(L_12);
		String_t* L_13;
		L_13 = VirtFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Exception::get_Message() */, L_12);
		SpxExceptionThrower_LogError_m238C27C8D305C674179F87D2C22B9F9780CA91E1(L_13, /*hidden argument*/NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0040;
	} // end catch (depth: 1)

IL_0040:
	{
		return;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.SpeechRecognizer::FireEvent_Recognized(System.IntPtr,System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpeechRecognizer_FireEvent_Recognized_m67E62803BF374C34B61CFC991DA73FE25AF287BF (intptr_t ___hreco0, intptr_t ___hevent1, intptr_t ___pvContext2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_Invoke_m34AF820A20D06B154B42AC2C4A2F47B68DFD69BD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InteropSafeHandle_GetObjectFromWeakHandle_TisSpeechRecognizer_tD9F66F83FE18A3C87986B87E9108997AC919BF2A_m456BCCB36FEDED91604F737E001380DEFBB9C88E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SpeechRecognitionEventArgs_t1FB7CC9C07684BA7F03F63DF226A306D7C5F2CEA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SpeechRecognizer_tD9F66F83FE18A3C87986B87E9108997AC919BF2A * V_0 = NULL;
	SpeechRecognitionEventArgs_t1FB7CC9C07684BA7F03F63DF226A306D7C5F2CEA * V_1 = NULL;
	Exception_t * V_2 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 3> __leave_targets;
	EventHandler_1_tAD0C572F17FD1D8D2AAADAE630AAEC4D89CF650C * G_B5_0 = NULL;
	EventHandler_1_tAD0C572F17FD1D8D2AAADAE630AAEC4D89CF650C * G_B4_0 = NULL;

IL_0000:
	try
	{ // begin try (depth: 1)
		{
			intptr_t L_0 = ___pvContext2;
			SpeechRecognizer_tD9F66F83FE18A3C87986B87E9108997AC919BF2A * L_1;
			L_1 = InteropSafeHandle_GetObjectFromWeakHandle_TisSpeechRecognizer_tD9F66F83FE18A3C87986B87E9108997AC919BF2A_m456BCCB36FEDED91604F737E001380DEFBB9C88E((intptr_t)L_0, /*hidden argument*/InteropSafeHandle_GetObjectFromWeakHandle_TisSpeechRecognizer_tD9F66F83FE18A3C87986B87E9108997AC919BF2A_m456BCCB36FEDED91604F737E001380DEFBB9C88E_RuntimeMethod_var);
			V_0 = L_1;
			SpeechRecognizer_tD9F66F83FE18A3C87986B87E9108997AC919BF2A * L_2 = V_0;
			if (!L_2)
			{
				goto IL_0014;
			}
		}

IL_000a:
		{
			SpeechRecognizer_tD9F66F83FE18A3C87986B87E9108997AC919BF2A * L_3 = V_0;
			NullCheck(L_3);
			bool L_4 = ((Recognizer_tF1FAA5F9E223C619151C5DA96D83F0AF7E3C9E3E *)L_3)->get_isDisposing_16();
			il2cpp_codegen_memory_barrier();
			if (!L_4)
			{
				goto IL_0016;
			}
		}

IL_0014:
		{
			goto IL_0040;
		}

IL_0016:
		{
			intptr_t L_5 = ___hevent1;
			SpeechRecognitionEventArgs_t1FB7CC9C07684BA7F03F63DF226A306D7C5F2CEA * L_6 = (SpeechRecognitionEventArgs_t1FB7CC9C07684BA7F03F63DF226A306D7C5F2CEA *)il2cpp_codegen_object_new(SpeechRecognitionEventArgs_t1FB7CC9C07684BA7F03F63DF226A306D7C5F2CEA_il2cpp_TypeInfo_var);
			SpeechRecognitionEventArgs__ctor_mC3BF882EE32BECD77C0DEDD86F6203E24B864012(L_6, (intptr_t)L_5, /*hidden argument*/NULL);
			V_1 = L_6;
			SpeechRecognizer_tD9F66F83FE18A3C87986B87E9108997AC919BF2A * L_7 = V_0;
			NullCheck(L_7);
			EventHandler_1_tAD0C572F17FD1D8D2AAADAE630AAEC4D89CF650C * L_8 = L_7->get__Recognized_20();
			EventHandler_1_tAD0C572F17FD1D8D2AAADAE630AAEC4D89CF650C * L_9 = L_8;
			G_B4_0 = L_9;
			if (L_9)
			{
				G_B5_0 = L_9;
				goto IL_0029;
			}
		}

IL_0026:
		{
			goto IL_0030;
		}

IL_0029:
		{
			SpeechRecognizer_tD9F66F83FE18A3C87986B87E9108997AC919BF2A * L_10 = V_0;
			SpeechRecognitionEventArgs_t1FB7CC9C07684BA7F03F63DF226A306D7C5F2CEA * L_11 = V_1;
			NullCheck(G_B5_0);
			EventHandler_1_Invoke_m34AF820A20D06B154B42AC2C4A2F47B68DFD69BD(G_B5_0, L_10, L_11, /*hidden argument*/EventHandler_1_Invoke_m34AF820A20D06B154B42AC2C4A2F47B68DFD69BD_RuntimeMethod_var);
		}

IL_0030:
		{
			goto IL_0040;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0032;
		}
		throw e;
	}

CATCH_0032:
	{ // begin catch(System.Exception)
		V_2 = ((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *));
		Exception_t * L_12 = V_2;
		NullCheck(L_12);
		String_t* L_13;
		L_13 = VirtFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Exception::get_Message() */, L_12);
		SpxExceptionThrower_LogError_m238C27C8D305C674179F87D2C22B9F9780CA91E1(L_13, /*hidden argument*/NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0040;
	} // end catch (depth: 1)

IL_0040:
	{
		return;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.SpeechRecognizer::FireEvent_Canceled(System.IntPtr,System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpeechRecognizer_FireEvent_Canceled_m4DDE18DFD654DACBDE97F182D735A624B5E601F2 (intptr_t ___hreco0, intptr_t ___hevent1, intptr_t ___pvContext2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_Invoke_m7D90141E3EF5FC6FD8B48B74B3E2249262CBA76E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InteropSafeHandle_GetObjectFromWeakHandle_TisSpeechRecognizer_tD9F66F83FE18A3C87986B87E9108997AC919BF2A_m456BCCB36FEDED91604F737E001380DEFBB9C88E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SpeechRecognitionCanceledEventArgs_t35423FB7DA329C4D5CC9ED0B255C55C72F06E97C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SpeechRecognizer_tD9F66F83FE18A3C87986B87E9108997AC919BF2A * V_0 = NULL;
	SpeechRecognitionCanceledEventArgs_t35423FB7DA329C4D5CC9ED0B255C55C72F06E97C * V_1 = NULL;
	Exception_t * V_2 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 3> __leave_targets;
	EventHandler_1_t69FC758E917DED0BD7F1732BE32EAE11D78B8D50 * G_B5_0 = NULL;
	EventHandler_1_t69FC758E917DED0BD7F1732BE32EAE11D78B8D50 * G_B4_0 = NULL;

IL_0000:
	try
	{ // begin try (depth: 1)
		{
			intptr_t L_0 = ___pvContext2;
			SpeechRecognizer_tD9F66F83FE18A3C87986B87E9108997AC919BF2A * L_1;
			L_1 = InteropSafeHandle_GetObjectFromWeakHandle_TisSpeechRecognizer_tD9F66F83FE18A3C87986B87E9108997AC919BF2A_m456BCCB36FEDED91604F737E001380DEFBB9C88E((intptr_t)L_0, /*hidden argument*/InteropSafeHandle_GetObjectFromWeakHandle_TisSpeechRecognizer_tD9F66F83FE18A3C87986B87E9108997AC919BF2A_m456BCCB36FEDED91604F737E001380DEFBB9C88E_RuntimeMethod_var);
			V_0 = L_1;
			SpeechRecognizer_tD9F66F83FE18A3C87986B87E9108997AC919BF2A * L_2 = V_0;
			if (!L_2)
			{
				goto IL_0014;
			}
		}

IL_000a:
		{
			SpeechRecognizer_tD9F66F83FE18A3C87986B87E9108997AC919BF2A * L_3 = V_0;
			NullCheck(L_3);
			bool L_4 = ((Recognizer_tF1FAA5F9E223C619151C5DA96D83F0AF7E3C9E3E *)L_3)->get_isDisposing_16();
			il2cpp_codegen_memory_barrier();
			if (!L_4)
			{
				goto IL_0016;
			}
		}

IL_0014:
		{
			goto IL_0040;
		}

IL_0016:
		{
			intptr_t L_5 = ___hevent1;
			SpeechRecognitionCanceledEventArgs_t35423FB7DA329C4D5CC9ED0B255C55C72F06E97C * L_6 = (SpeechRecognitionCanceledEventArgs_t35423FB7DA329C4D5CC9ED0B255C55C72F06E97C *)il2cpp_codegen_object_new(SpeechRecognitionCanceledEventArgs_t35423FB7DA329C4D5CC9ED0B255C55C72F06E97C_il2cpp_TypeInfo_var);
			SpeechRecognitionCanceledEventArgs__ctor_mF09633F429C647ABCD7928A8568E3FFC4BB4854A(L_6, (intptr_t)L_5, /*hidden argument*/NULL);
			V_1 = L_6;
			SpeechRecognizer_tD9F66F83FE18A3C87986B87E9108997AC919BF2A * L_7 = V_0;
			NullCheck(L_7);
			EventHandler_1_t69FC758E917DED0BD7F1732BE32EAE11D78B8D50 * L_8 = L_7->get__Canceled_21();
			EventHandler_1_t69FC758E917DED0BD7F1732BE32EAE11D78B8D50 * L_9 = L_8;
			G_B4_0 = L_9;
			if (L_9)
			{
				G_B5_0 = L_9;
				goto IL_0029;
			}
		}

IL_0026:
		{
			goto IL_0030;
		}

IL_0029:
		{
			SpeechRecognizer_tD9F66F83FE18A3C87986B87E9108997AC919BF2A * L_10 = V_0;
			SpeechRecognitionCanceledEventArgs_t35423FB7DA329C4D5CC9ED0B255C55C72F06E97C * L_11 = V_1;
			NullCheck(G_B5_0);
			EventHandler_1_Invoke_m7D90141E3EF5FC6FD8B48B74B3E2249262CBA76E(G_B5_0, L_10, L_11, /*hidden argument*/EventHandler_1_Invoke_m7D90141E3EF5FC6FD8B48B74B3E2249262CBA76E_RuntimeMethod_var);
		}

IL_0030:
		{
			goto IL_0040;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0032;
		}
		throw e;
	}

CATCH_0032:
	{ // begin catch(System.Exception)
		V_2 = ((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *));
		Exception_t * L_12 = V_2;
		NullCheck(L_12);
		String_t* L_13;
		L_13 = VirtFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Exception::get_Message() */, L_12);
		SpxExceptionThrower_LogError_m238C27C8D305C674179F87D2C22B9F9780CA91E1(L_13, /*hidden argument*/NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0040;
	} // end catch (depth: 1)

IL_0040:
	{
		return;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.SpeechRecognizer::<StartContinuousRecognitionAsync>b__48_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpeechRecognizer_U3CStartContinuousRecognitionAsyncU3Eb__48_0_m55F59D499889BA7B44BF8D1F3745BFF5B5AF0F82 (SpeechRecognizer_tD9F66F83FE18A3C87986B87E9108997AC919BF2A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Recognizer_StartContinuousRecognition_m619E72043511237D3E1C58D62E375DAA4F1ACA9C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_0 = (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)il2cpp_codegen_object_new(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		Action__ctor_m07BE5EE8A629FBBA52AE6356D57A0D371BE2574B(L_0, __this, (intptr_t)((intptr_t)Recognizer_StartContinuousRecognition_m619E72043511237D3E1C58D62E375DAA4F1ACA9C_RuntimeMethod_var), /*hidden argument*/NULL);
		Recognizer_DoAsyncRecognitionAction_m2268106F48438234958D981F40C8036136AFD5CF(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.SpeechRecognizer::<StopContinuousRecognitionAsync>b__49_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpeechRecognizer_U3CStopContinuousRecognitionAsyncU3Eb__49_0_m6F826EAC9DEF582418CBAD8D1425FBB0F1F35F09 (SpeechRecognizer_tD9F66F83FE18A3C87986B87E9108997AC919BF2A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Recognizer_StopContinuousRecognition_m31050BE671DCB3A02B2709C5D37B00422795AF30_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_0 = (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)il2cpp_codegen_object_new(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		Action__ctor_m07BE5EE8A629FBBA52AE6356D57A0D371BE2574B(L_0, __this, (intptr_t)((intptr_t)Recognizer_StopContinuousRecognition_m31050BE671DCB3A02B2709C5D37B00422795AF30_RuntimeMethod_var), /*hidden argument*/NULL);
		Recognizer_DoAsyncRecognitionAction_m2268106F48438234958D981F40C8036136AFD5CF(__this, L_0, /*hidden argument*/NULL);
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
// System.Void Microsoft.CognitiveServices.Speech.SpeechTranslationConfig::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpeechTranslationConfig__ctor_m69FF967879A65C258D38700C4B5BC4B7458C309B (SpeechTranslationConfig_tFBB58FC53E2E75766C94D604CEF28A14CE72E90D * __this, intptr_t ___configPtr0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		__this->set_targetLanguages_2(L_0);
		intptr_t L_1 = ___configPtr0;
		SpeechConfig__ctor_m7E86AF6B9C5651B1FDA707458201F6A9058A46F5(__this, (intptr_t)L_1, /*hidden argument*/NULL);
		return;
	}
}
// Microsoft.CognitiveServices.Speech.SpeechTranslationConfig Microsoft.CognitiveServices.Speech.SpeechTranslationConfig::FromSubscription(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SpeechTranslationConfig_tFBB58FC53E2E75766C94D604CEF28A14CE72E90D * SpeechTranslationConfig_FromSubscription_m710089D3B1BA31D2C22234A84DEE17F55A8C134E (String_t* ___subscriptionKey0, String_t* ___region1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SpeechTranslationConfig_tFBB58FC53E2E75766C94D604CEF28A14CE72E90D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		V_0 = (intptr_t)(0);
		String_t* L_0 = ___subscriptionKey0;
		String_t* L_1 = ___region1;
		intptr_t L_2;
		L_2 = SpeechTranslationConfig_speech_translation_config_from_subscription_mFE0B7FFDFDA728CA2144AACCD1AA1069A9612C2B((intptr_t*)(&V_0), L_0, L_1, /*hidden argument*/NULL);
		SpxExceptionThrower_ThrowIfFail_m7269610C68DA4D960FE5E6208DF1BD9282C8F2DA((intptr_t)L_2, /*hidden argument*/NULL);
		intptr_t L_3 = V_0;
		SpeechTranslationConfig_tFBB58FC53E2E75766C94D604CEF28A14CE72E90D * L_4 = (SpeechTranslationConfig_tFBB58FC53E2E75766C94D604CEF28A14CE72E90D *)il2cpp_codegen_object_new(SpeechTranslationConfig_tFBB58FC53E2E75766C94D604CEF28A14CE72E90D_il2cpp_TypeInfo_var);
		SpeechTranslationConfig__ctor_m69FF967879A65C258D38700C4B5BC4B7458C309B(L_4, (intptr_t)L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.SpeechTranslationConfig::AddTargetLanguage(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpeechTranslationConfig_AddTargetLanguage_mFA86AF17503F3269E1E0298702DAAFC520FE4D6A (SpeechTranslationConfig_tFBB58FC53E2E75766C94D604CEF28A14CE72E90D * __this, String_t* ___language0, const RuntimeMethod* method)
{
	{
		InteropSafeHandle_tF14E3AD32AC904F5E38F4FAC0ED46417062386C6 * L_0 = ((SpeechConfig_tB1A7AD16A9CDE287A706780CBD6F22AAA64A9E11 *)__this)->get_configHandle_0();
		String_t* L_1 = ___language0;
		intptr_t L_2;
		L_2 = SpeechTranslationConfig_speech_translation_config_add_target_language_mC6E21CF2A9D4149054774D48C7BE7DA84FBDA0BE(L_0, L_1, /*hidden argument*/NULL);
		SpxExceptionThrower_ThrowIfFail_m7269610C68DA4D960FE5E6208DF1BD9282C8F2DA((intptr_t)L_2, /*hidden argument*/NULL);
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
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.SpeechTranslationConfig::speech_translation_config_from_subscription(System.IntPtr&,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t SpeechTranslationConfig_speech_translation_config_from_subscription_mFE0B7FFDFDA728CA2144AACCD1AA1069A9612C2B (intptr_t* ___config0, String_t* ___subscriptionKey1, String_t* ___region2, const RuntimeMethod* method)
{
	typedef intptr_t (STDCALL *PInvokeFunc) (intptr_t*, char*, char*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_Microsoft_CognitiveServices_Speech_core_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t*) + sizeof(char*) + sizeof(char*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("Microsoft.CognitiveServices.Speech.core.dll"), "speech_translation_config_from_subscription", IL2CPP_CALL_STDCALL, CHARSET_ANSI, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___subscriptionKey1' to native representation
	char* ____subscriptionKey1_marshaled = NULL;
	____subscriptionKey1_marshaled = il2cpp_codegen_marshal_string(___subscriptionKey1);

	// Marshaling of parameter '___region2' to native representation
	char* ____region2_marshaled = NULL;
	____region2_marshaled = il2cpp_codegen_marshal_string(___region2);

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_Microsoft_CognitiveServices_Speech_core_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(speech_translation_config_from_subscription)(___config0, ____subscriptionKey1_marshaled, ____region2_marshaled);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(___config0, ____subscriptionKey1_marshaled, ____region2_marshaled);
	#endif

	// Marshaling cleanup of parameter '___subscriptionKey1' native representation
	il2cpp_codegen_marshal_free(____subscriptionKey1_marshaled);
	____subscriptionKey1_marshaled = NULL;

	// Marshaling cleanup of parameter '___region2' native representation
	il2cpp_codegen_marshal_free(____region2_marshaled);
	____region2_marshaled = NULL;

	return returnValue;
}
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.SpeechTranslationConfig::speech_translation_config_add_target_language(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t SpeechTranslationConfig_speech_translation_config_add_target_language_mC6E21CF2A9D4149054774D48C7BE7DA84FBDA0BE (InteropSafeHandle_tF14E3AD32AC904F5E38F4FAC0ED46417062386C6 * ___config0, String_t* ___language1, const RuntimeMethod* method)
{
	typedef intptr_t (STDCALL *PInvokeFunc) (void*, char*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_Microsoft_CognitiveServices_Speech_core_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(char*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("Microsoft.CognitiveServices.Speech.core.dll"), "speech_translation_config_add_target_language", IL2CPP_CALL_STDCALL, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___config0' to native representation
	void* ____config0_marshaled = NULL;
	if (___config0 == NULL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_null_exception("config"), NULL);
	bool ___safeHandle_reference_incremented_for____config0 = false;
	SafeHandle_DangerousAddRef_mC65F001DAB84BADED6EA18B339BEA78962B978DB(___config0, (&___safeHandle_reference_incremented_for____config0), NULL);
	____config0_marshaled = reinterpret_cast<void*>((___config0)->get_handle_0());

	// Marshaling of parameter '___language1' to native representation
	char* ____language1_marshaled = NULL;
	____language1_marshaled = il2cpp_codegen_marshal_string(___language1);

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_Microsoft_CognitiveServices_Speech_core_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(speech_translation_config_add_target_language)(____config0_marshaled, ____language1_marshaled);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(____config0_marshaled, ____language1_marshaled);
	#endif

	// Marshaling cleanup of parameter '___config0' native representation
	if (___safeHandle_reference_incremented_for____config0)
	{
		SafeHandle_DangerousRelease_mD38F583FAFD30A50547FAA163FBE3C1D466174D4(___config0, NULL);
	}

	// Marshaling cleanup of parameter '___language1' native representation
	il2cpp_codegen_marshal_free(____language1_marshaled);
	____language1_marshaled = NULL;

	return returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.String Microsoft.CognitiveServices.Speech.Internal.SpxError::GetMessage(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SpxError_GetMessage_mAE69502CC76A217D2802B96AE46446F55159F08C (intptr_t ___errorHandle0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SpxError_tE3A37886AA69A2843CE24D52F59B1402D244731D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	intptr_t V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		String_t* L_0 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		V_0 = L_0;
		intptr_t L_1 = ___errorHandle0;
		IL2CPP_RUNTIME_CLASS_INIT(SpxError_tE3A37886AA69A2843CE24D52F59B1402D244731D_il2cpp_TypeInfo_var);
		intptr_t L_2;
		L_2 = SpxError_error_get_message_mB89C50717DBBE7DD5748A3A4A3C1F94A2E73EAD3((intptr_t)L_1, /*hidden argument*/NULL);
		V_1 = (intptr_t)L_2;
		intptr_t L_3 = V_1;
		bool L_4;
		L_4 = IntPtr_op_Inequality_m212AF0E66AA81FEDC982B1C8A44ADDA24B995EB8((intptr_t)L_3, (intptr_t)(0), /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0021;
		}
	}
	{
		intptr_t L_5 = V_1;
		String_t* L_6;
		L_6 = Utf8StringMarshaler_MarshalNativeToManaged_mE524A0FA5B448795AFBC45096D889A5A647487D8((intptr_t)L_5, /*hidden argument*/NULL);
		V_0 = L_6;
	}

IL_0021:
	{
		String_t* L_7 = V_0;
		return L_7;
	}
}
// System.Int32 Microsoft.CognitiveServices.Speech.Internal.SpxError::GetErrorCode(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SpxError_GetErrorCode_mA5D665FA8B9709452893CBDF4FF2D324C1F113B4 (intptr_t ___errorHandle0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SpxError_tE3A37886AA69A2843CE24D52F59B1402D244731D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		intptr_t L_0 = ___errorHandle0;
		IL2CPP_RUNTIME_CLASS_INIT(SpxError_tE3A37886AA69A2843CE24D52F59B1402D244731D_il2cpp_TypeInfo_var);
		intptr_t L_1;
		L_1 = SpxError_error_get_error_code_m30AEFABD1655FE32BAC77F0EB19AA74D6F24A10B((intptr_t)L_0, /*hidden argument*/NULL);
		int32_t L_2;
		L_2 = IntPtr_op_Explicit_m9C2CBDF65A4D7B2C0DCF4D38A4174A2CC07A18E3((intptr_t)L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		int32_t L_3 = V_0;
		if (L_3)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_4;
		L_4 = IntPtr_ToInt32_m94C1C0E438A3B7E040B0A087FDDC0D4F90BABB08((intptr_t*)(&___errorHandle0), /*hidden argument*/NULL);
		return L_4;
	}

IL_0017:
	{
		int32_t L_5 = V_0;
		return L_5;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.Internal.SpxError::Release(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpxError_Release_m8A4610A24E3E7CC631AB6B937A23D75D690368CA (intptr_t ___errorHandle0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SpxError_tE3A37886AA69A2843CE24D52F59B1402D244731D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		intptr_t L_0 = ___errorHandle0;
		IL2CPP_RUNTIME_CLASS_INIT(SpxError_tE3A37886AA69A2843CE24D52F59B1402D244731D_il2cpp_TypeInfo_var);
		intptr_t L_1;
		L_1 = SpxError_error_release_mCA135AF50E067E9909E8FF41CEBEBC311DAA8E73((intptr_t)L_0, /*hidden argument*/NULL);
		SpxExceptionThrower_ThrowIfFail_m7269610C68DA4D960FE5E6208DF1BD9282C8F2DA((intptr_t)L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean Microsoft.CognitiveServices.Speech.Internal.SpxError::ReleaseNoThrow(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SpxError_ReleaseNoThrow_m56AF1911B28350AF579AA6A562FAC4DE2D9E1C86 (intptr_t ___errorHandle0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SpxError_tE3A37886AA69A2843CE24D52F59B1402D244731D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		intptr_t L_0 = ___errorHandle0;
		IL2CPP_RUNTIME_CLASS_INIT(SpxError_tE3A37886AA69A2843CE24D52F59B1402D244731D_il2cpp_TypeInfo_var);
		intptr_t L_1;
		L_1 = SpxError_error_release_mCA135AF50E067E9909E8FF41CEBEBC311DAA8E73((intptr_t)L_0, /*hidden argument*/NULL);
		V_0 = (intptr_t)L_1;
		intptr_t L_2 = V_0;
		bool L_3;
		L_3 = IntPtr_op_Equality_mD94F3FE43A65684EFF984A7B95E70D2520C0AC73((intptr_t)L_2, (intptr_t)(0), /*hidden argument*/NULL);
		return L_3;
	}
}
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.SpxError::error_get_message(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t SpxError_error_get_message_mB89C50717DBBE7DD5748A3A4A3C1F94A2E73EAD3 (intptr_t ___errorHandle0, const RuntimeMethod* method)
{
	typedef intptr_t (STDCALL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_Microsoft_CognitiveServices_Speech_core_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("Microsoft.CognitiveServices.Speech.core.dll"), "error_get_message", IL2CPP_CALL_STDCALL, CHARSET_ANSI, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_Microsoft_CognitiveServices_Speech_core_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(error_get_message)(___errorHandle0);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(___errorHandle0);
	#endif

	return returnValue;
}
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.SpxError::error_get_error_code(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t SpxError_error_get_error_code_m30AEFABD1655FE32BAC77F0EB19AA74D6F24A10B (intptr_t ___errorHandle0, const RuntimeMethod* method)
{
	typedef intptr_t (STDCALL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_Microsoft_CognitiveServices_Speech_core_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("Microsoft.CognitiveServices.Speech.core.dll"), "error_get_error_code", IL2CPP_CALL_STDCALL, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_Microsoft_CognitiveServices_Speech_core_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(error_get_error_code)(___errorHandle0);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(___errorHandle0);
	#endif

	return returnValue;
}
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.SpxError::error_release(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t SpxError_error_release_mCA135AF50E067E9909E8FF41CEBEBC311DAA8E73 (intptr_t ___errorHandle0, const RuntimeMethod* method)
{
	typedef intptr_t (STDCALL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_Microsoft_CognitiveServices_Speech_core_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("Microsoft.CognitiveServices.Speech.core.dll"), "error_release", IL2CPP_CALL_STDCALL, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_Microsoft_CognitiveServices_Speech_core_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(error_release)(___errorHandle0);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(___errorHandle0);
	#endif

	return returnValue;
}
// System.Void Microsoft.CognitiveServices.Speech.Internal.SpxError::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpxError__cctor_mAFC3BB636CCA7D4D4E6B8D21876B84FDB74AD8FE (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SpxError_tE3A37886AA69A2843CE24D52F59B1402D244731D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		intptr_t L_0;
		L_0 = IntPtr_op_Explicit_m9092E57CE669E7B9CCDCF5ADD6DFB758D6545FBF(((int32_t)25), /*hidden argument*/NULL);
		((SpxError_tE3A37886AA69A2843CE24D52F59B1402D244731D_StaticFields*)il2cpp_codegen_static_fields_for(SpxError_tE3A37886AA69A2843CE24D52F59B1402D244731D_il2cpp_TypeInfo_var))->set_BufferTooSmall_0((intptr_t)L_0);
		intptr_t L_1;
		L_1 = IntPtr_op_Explicit_m9092E57CE669E7B9CCDCF5ADD6DFB758D6545FBF(((int32_t)27), /*hidden argument*/NULL);
		((SpxError_tE3A37886AA69A2843CE24D52F59B1402D244731D_StaticFields*)il2cpp_codegen_static_fields_for(SpxError_tE3A37886AA69A2843CE24D52F59B1402D244731D_il2cpp_TypeInfo_var))->set_RuntimeError_1((intptr_t)L_1);
		intptr_t L_2;
		L_2 = IntPtr_op_Explicit_m9092E57CE669E7B9CCDCF5ADD6DFB758D6545FBF(((int32_t)33), /*hidden argument*/NULL);
		((SpxError_tE3A37886AA69A2843CE24D52F59B1402D244731D_StaticFields*)il2cpp_codegen_static_fields_for(SpxError_tE3A37886AA69A2843CE24D52F59B1402D244731D_il2cpp_TypeInfo_var))->set_InvalidHandle_2((intptr_t)L_2);
		intptr_t L_3;
		L_3 = IntPtr_op_Explicit_m9092E57CE669E7B9CCDCF5ADD6DFB758D6545FBF(5, /*hidden argument*/NULL);
		((SpxError_tE3A37886AA69A2843CE24D52F59B1402D244731D_StaticFields*)il2cpp_codegen_static_fields_for(SpxError_tE3A37886AA69A2843CE24D52F59B1402D244731D_il2cpp_TypeInfo_var))->set_InvalidArgument_3((intptr_t)L_3);
		intptr_t L_4;
		L_4 = IntPtr_op_Explicit_m9092E57CE669E7B9CCDCF5ADD6DFB758D6545FBF(4, /*hidden argument*/NULL);
		((SpxError_tE3A37886AA69A2843CE24D52F59B1402D244731D_StaticFields*)il2cpp_codegen_static_fields_for(SpxError_tE3A37886AA69A2843CE24D52F59B1402D244731D_il2cpp_TypeInfo_var))->set_NotFound_4((intptr_t)L_4);
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
// System.Void Microsoft.CognitiveServices.Speech.Internal.SpxExceptionThrower::ThrowIfFail(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpxExceptionThrower_ThrowIfFail_m7269610C68DA4D960FE5E6208DF1BD9282C8F2DA (intptr_t ___hr0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	String_t* V_1 = NULL;
	{
		intptr_t L_0 = ___hr0;
		bool L_1;
		L_1 = IntPtr_op_Inequality_m212AF0E66AA81FEDC982B1C8A44ADDA24B995EB8((intptr_t)L_0, (intptr_t)(0), /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_005c;
		}
	}
	{
		intptr_t L_2 = ___hr0;
		IL2CPP_RUNTIME_CLASS_INIT(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SpxError_tE3A37886AA69A2843CE24D52F59B1402D244731D_il2cpp_TypeInfo_var)));
		int32_t L_3;
		L_3 = SpxError_GetErrorCode_mA5D665FA8B9709452893CBDF4FF2D324C1F113B4((intptr_t)L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		intptr_t L_4 = ___hr0;
		String_t* L_5;
		L_5 = SpxError_GetMessage_mAE69502CC76A217D2802B96AE46446F55159F08C((intptr_t)L_4, /*hidden argument*/NULL);
		V_1 = L_5;
		String_t* L_6 = V_1;
		bool L_7;
		L_7 = String_IsNullOrWhiteSpace_m4C4266AE4097F5B61FF72A8D0D083611231B9CA6(L_6, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_004e;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_il2cpp_TypeInfo_var)));
		CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * L_8;
		L_8 = CultureInfo_get_CurrentCulture_m99E5F5BD20445F2A73F7EA0014A4E783DF3840BB(/*hidden argument*/NULL);
		CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * L_9;
		L_9 = CultureInfo_get_CurrentCulture_m99E5F5BD20445F2A73F7EA0014A4E783DF3840BB(/*hidden argument*/NULL);
		String_t* L_10;
		L_10 = Int32_ToString_m246774E1922012AE787EB97743F42CB798B70CD8((int32_t*)(&V_0), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD5D2875F228D651E1289522AEAAB8C492001C1BE)), L_9, /*hidden argument*/NULL);
		CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * L_11;
		L_11 = CultureInfo_get_CurrentCulture_m99E5F5BD20445F2A73F7EA0014A4E783DF3840BB(/*hidden argument*/NULL);
		NullCheck(L_10);
		String_t* L_12;
		L_12 = String_ToLower_m31AAE50F084C9F7ECE9201944F237D2310C79235(L_10, L_11, /*hidden argument*/NULL);
		String_t* L_13;
		L_13 = String_Format_m90ED4B078849D42FA1A7C5EB7AC7F74F235F6916(L_8, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral9D994AF9D9226E9E4FB3842699E67F727590C94D)), L_12, /*hidden argument*/NULL);
		V_1 = L_13;
	}

IL_004e:
	{
		intptr_t L_14 = ___hr0;
		IL2CPP_RUNTIME_CLASS_INIT(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SpxError_tE3A37886AA69A2843CE24D52F59B1402D244731D_il2cpp_TypeInfo_var)));
		bool L_15;
		L_15 = SpxError_ReleaseNoThrow_m56AF1911B28350AF579AA6A562FAC4DE2D9E1C86((intptr_t)L_14, /*hidden argument*/NULL);
		String_t* L_16 = V_1;
		ApplicationException_t8D709C0445A040467C6A632AD7F742B25AB2A407 * L_17 = (ApplicationException_t8D709C0445A040467C6A632AD7F742B25AB2A407 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ApplicationException_t8D709C0445A040467C6A632AD7F742B25AB2A407_il2cpp_TypeInfo_var)));
		ApplicationException__ctor_mF8E9704C91C2F1912909448E5BABFE9EC61D4E8F(L_17, L_16, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_17, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SpxExceptionThrower_ThrowIfFail_m7269610C68DA4D960FE5E6208DF1BD9282C8F2DA_RuntimeMethod_var)));
	}

IL_005c:
	{
		return;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.Internal.SpxExceptionThrower::ThrowIfNull(System.Object,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpxExceptionThrower_ThrowIfNull_mC54EA71790A454E5785FC15C4FFBB6F457E772DB (RuntimeObject * ___item0, String_t* ___message1, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = ___item0;
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		String_t* L_1 = ___message1;
		bool L_2;
		L_2 = String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C(L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0012;
		}
	}
	{
		___message1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralA23629C306AA023437DA41361139F76CFB792614));
	}

IL_0012:
	{
		String_t* L_3 = ___message1;
		ApplicationException_t8D709C0445A040467C6A632AD7F742B25AB2A407 * L_4 = (ApplicationException_t8D709C0445A040467C6A632AD7F742B25AB2A407 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ApplicationException_t8D709C0445A040467C6A632AD7F742B25AB2A407_il2cpp_TypeInfo_var)));
		ApplicationException__ctor_mF8E9704C91C2F1912909448E5BABFE9EC61D4E8F(L_4, L_3, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SpxExceptionThrower_ThrowIfNull_mC54EA71790A454E5785FC15C4FFBB6F457E772DB_RuntimeMethod_var)));
	}

IL_0019:
	{
		return;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.Internal.SpxExceptionThrower::ThrowIfNull(System.IntPtr,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpxExceptionThrower_ThrowIfNull_m89216C9938C8E733BC6119E3B3F84252B0BB101B (intptr_t ___item0, String_t* ___message1, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.Internal.SpxExceptionThrower::ThrowIfFalse(System.Boolean,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpxExceptionThrower_ThrowIfFalse_mEE1FF4BD7BB68A39220E0A1F7EB210DD4E88B79F (bool ___item0, int32_t ___error1, const RuntimeMethod* method)
{
	String_t* V_0 = NULL;
	{
		bool L_0 = ___item0;
		if (L_0)
		{
			goto IL_0035;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_il2cpp_TypeInfo_var)));
		CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * L_1;
		L_1 = CultureInfo_get_CurrentCulture_m99E5F5BD20445F2A73F7EA0014A4E783DF3840BB(/*hidden argument*/NULL);
		CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * L_2;
		L_2 = CultureInfo_get_CurrentCulture_m99E5F5BD20445F2A73F7EA0014A4E783DF3840BB(/*hidden argument*/NULL);
		String_t* L_3;
		L_3 = Int32_ToString_m246774E1922012AE787EB97743F42CB798B70CD8((int32_t*)(&___error1), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD5D2875F228D651E1289522AEAAB8C492001C1BE)), L_2, /*hidden argument*/NULL);
		CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * L_4;
		L_4 = CultureInfo_get_CurrentCulture_m99E5F5BD20445F2A73F7EA0014A4E783DF3840BB(/*hidden argument*/NULL);
		NullCheck(L_3);
		String_t* L_5;
		L_5 = String_ToLower_m31AAE50F084C9F7ECE9201944F237D2310C79235(L_3, L_4, /*hidden argument*/NULL);
		String_t* L_6;
		L_6 = String_Format_m90ED4B078849D42FA1A7C5EB7AC7F74F235F6916(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB87D0C927E2633818FA2844668F5CCE68672A353)), L_5, /*hidden argument*/NULL);
		V_0 = L_6;
		String_t* L_7 = V_0;
		ApplicationException_t8D709C0445A040467C6A632AD7F742B25AB2A407 * L_8 = (ApplicationException_t8D709C0445A040467C6A632AD7F742B25AB2A407 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ApplicationException_t8D709C0445A040467C6A632AD7F742B25AB2A407_il2cpp_TypeInfo_var)));
		ApplicationException__ctor_mF8E9704C91C2F1912909448E5BABFE9EC61D4E8F(L_8, L_7, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_8, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SpxExceptionThrower_ThrowIfFalse_mEE1FF4BD7BB68A39220E0A1F7EB210DD4E88B79F_RuntimeMethod_var)));
	}

IL_0035:
	{
		return;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.Internal.SpxExceptionThrower::LogErrorIfFail(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpxExceptionThrower_LogErrorIfFail_m752E6CB197597DAD0613E0AA21841F7EFD46D624 (intptr_t ___hr0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SpxError_tE3A37886AA69A2843CE24D52F59B1402D244731D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7BF1B4B734433B6AD600A9CCEB253AD568B4B6A7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD5D2875F228D651E1289522AEAAB8C492001C1BE);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	String_t* V_1 = NULL;
	{
		intptr_t L_0 = ___hr0;
		bool L_1;
		L_1 = IntPtr_op_Inequality_m212AF0E66AA81FEDC982B1C8A44ADDA24B995EB8((intptr_t)L_0, (intptr_t)(0), /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0045;
		}
	}
	{
		intptr_t L_2 = ___hr0;
		IL2CPP_RUNTIME_CLASS_INIT(SpxError_tE3A37886AA69A2843CE24D52F59B1402D244731D_il2cpp_TypeInfo_var);
		int32_t L_3;
		L_3 = SpxError_GetErrorCode_mA5D665FA8B9709452893CBDF4FF2D324C1F113B4((intptr_t)L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_il2cpp_TypeInfo_var);
		CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * L_4;
		L_4 = CultureInfo_get_CurrentCulture_m99E5F5BD20445F2A73F7EA0014A4E783DF3840BB(/*hidden argument*/NULL);
		CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * L_5;
		L_5 = CultureInfo_get_CurrentCulture_m99E5F5BD20445F2A73F7EA0014A4E783DF3840BB(/*hidden argument*/NULL);
		String_t* L_6;
		L_6 = Int32_ToString_m246774E1922012AE787EB97743F42CB798B70CD8((int32_t*)(&V_0), _stringLiteralD5D2875F228D651E1289522AEAAB8C492001C1BE, L_5, /*hidden argument*/NULL);
		CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * L_7;
		L_7 = CultureInfo_get_CurrentCulture_m99E5F5BD20445F2A73F7EA0014A4E783DF3840BB(/*hidden argument*/NULL);
		NullCheck(L_6);
		String_t* L_8;
		L_8 = String_ToLower_m31AAE50F084C9F7ECE9201944F237D2310C79235(L_6, L_7, /*hidden argument*/NULL);
		String_t* L_9;
		L_9 = String_Format_m90ED4B078849D42FA1A7C5EB7AC7F74F235F6916(L_4, _stringLiteral7BF1B4B734433B6AD600A9CCEB253AD568B4B6A7, L_8, /*hidden argument*/NULL);
		V_1 = L_9;
		intptr_t L_10 = ___hr0;
		SpxError_Release_m8A4610A24E3E7CC631AB6B937A23D75D690368CA((intptr_t)L_10, /*hidden argument*/NULL);
	}

IL_0045:
	{
		return;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.Internal.SpxExceptionThrower::LogError(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpxExceptionThrower_LogError_m238C27C8D305C674179F87D2C22B9F9780CA91E1 (String_t* ___message0, const RuntimeMethod* method)
{
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
// System.String Microsoft.CognitiveServices.Speech.Internal.SpxFactory::GetDataFromHandleUsingDelegate(Microsoft.CognitiveServices.Speech.Internal.SpxFactory/GetResultDelegate,Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SpxFactory_GetDataFromHandleUsingDelegate_mE498329CDC2B03C0A628C2EDE8395F3F87FC605C (GetResultDelegate_tCE5D8A1E9C3A30C92902692A8F1576D09D4DCDE3 * ___functionPtr0, InteropSafeHandle_tF14E3AD32AC904F5E38F4FAC0ED46417062386C6 * ___handle1, int32_t ___maxCharCount2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tEBAFAE20369FCB1B38C49C4E27A8D8C2C4B55058_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	intptr_t V_1;
	memset((&V_1), 0, sizeof(V_1));
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		String_t* L_0 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		V_0 = L_0;
		int32_t L_1 = ___maxCharCount2;
		IL2CPP_RUNTIME_CLASS_INIT(Marshal_tEBAFAE20369FCB1B38C49C4E27A8D8C2C4B55058_il2cpp_TypeInfo_var);
		intptr_t L_2;
		L_2 = Marshal_AllocHGlobal_mED1B623D229DB8FAB58D187E4E73D3DA2E8AE6EC(((int32_t)il2cpp_codegen_add((int32_t)L_1, (int32_t)1)), /*hidden argument*/NULL);
		V_1 = (intptr_t)L_2;
	}

IL_000f:
	try
	{ // begin try (depth: 1)
		GetResultDelegate_tCE5D8A1E9C3A30C92902692A8F1576D09D4DCDE3 * L_3 = ___functionPtr0;
		InteropSafeHandle_tF14E3AD32AC904F5E38F4FAC0ED46417062386C6 * L_4 = ___handle1;
		intptr_t L_5 = V_1;
		int32_t L_6 = ___maxCharCount2;
		NullCheck(L_3);
		intptr_t L_7;
		L_7 = GetResultDelegate_Invoke_m266129DD98B4319DC07D86FC58634BD716A09913(L_3, L_4, (intptr_t)L_5, L_6, /*hidden argument*/NULL);
		SpxExceptionThrower_ThrowIfFail_m7269610C68DA4D960FE5E6208DF1BD9282C8F2DA((intptr_t)L_7, /*hidden argument*/NULL);
		intptr_t L_8 = V_1;
		String_t* L_9;
		L_9 = Utf8StringMarshaler_MarshalNativeToManaged_mE524A0FA5B448795AFBC45096D889A5A647487D8((intptr_t)L_8, /*hidden argument*/NULL);
		V_0 = L_9;
		IL2CPP_LEAVE(0x2D, FINALLY_0026);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0026;
	}

FINALLY_0026:
	{ // begin finally (depth: 1)
		intptr_t L_10 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Marshal_tEBAFAE20369FCB1B38C49C4E27A8D8C2C4B55058_il2cpp_TypeInfo_var);
		Marshal_FreeHGlobal_m53FC4846F5D3106BA25B52C321005C227E424F72((intptr_t)L_10, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(38)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(38)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x2D, IL_002d)
	}

IL_002d:
	{
		String_t* L_11 = V_0;
		return L_11;
	}
}
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.SpxFactory::recognizer_create_speech_recognizer_from_config(System.IntPtr&,Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t SpxFactory_recognizer_create_speech_recognizer_from_config_mEFA185528C9EF0F4C5883329D957F95566B57E8B (intptr_t* ___recoHandle0, InteropSafeHandle_tF14E3AD32AC904F5E38F4FAC0ED46417062386C6 * ___speechconfig1, InteropSafeHandle_tF14E3AD32AC904F5E38F4FAC0ED46417062386C6 * ___audioInput2, const RuntimeMethod* method)
{
	typedef intptr_t (STDCALL *PInvokeFunc) (intptr_t*, void*, void*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_Microsoft_CognitiveServices_Speech_core_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t*) + sizeof(void*) + sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("Microsoft.CognitiveServices.Speech.core.dll"), "recognizer_create_speech_recognizer_from_config", IL2CPP_CALL_STDCALL, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___speechconfig1' to native representation
	void* ____speechconfig1_marshaled = NULL;
	if (___speechconfig1 == NULL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_null_exception("speechconfig"), NULL);
	bool ___safeHandle_reference_incremented_for____speechconfig1 = false;
	SafeHandle_DangerousAddRef_mC65F001DAB84BADED6EA18B339BEA78962B978DB(___speechconfig1, (&___safeHandle_reference_incremented_for____speechconfig1), NULL);
	____speechconfig1_marshaled = reinterpret_cast<void*>((___speechconfig1)->get_handle_0());

	// Marshaling of parameter '___audioInput2' to native representation
	void* ____audioInput2_marshaled = NULL;
	if (___audioInput2 == NULL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_null_exception("audioInput"), NULL);
	bool ___safeHandle_reference_incremented_for____audioInput2 = false;
	SafeHandle_DangerousAddRef_mC65F001DAB84BADED6EA18B339BEA78962B978DB(___audioInput2, (&___safeHandle_reference_incremented_for____audioInput2), NULL);
	____audioInput2_marshaled = reinterpret_cast<void*>((___audioInput2)->get_handle_0());

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_Microsoft_CognitiveServices_Speech_core_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(recognizer_create_speech_recognizer_from_config)(___recoHandle0, ____speechconfig1_marshaled, ____audioInput2_marshaled);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(___recoHandle0, ____speechconfig1_marshaled, ____audioInput2_marshaled);
	#endif

	// Marshaling cleanup of parameter '___speechconfig1' native representation
	if (___safeHandle_reference_incremented_for____speechconfig1)
	{
		SafeHandle_DangerousRelease_mD38F583FAFD30A50547FAA163FBE3C1D466174D4(___speechconfig1, NULL);
	}

	// Marshaling cleanup of parameter '___audioInput2' native representation
	if (___safeHandle_reference_incremented_for____audioInput2)
	{
		SafeHandle_DangerousRelease_mD38F583FAFD30A50547FAA163FBE3C1D466174D4(___audioInput2, NULL);
	}

	return returnValue;
}
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.SpxFactory::recognizer_create_translation_recognizer_from_config(System.IntPtr&,Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t SpxFactory_recognizer_create_translation_recognizer_from_config_mBAA1FE887AC7E89AE3658F30F2307B65A5153BA6 (intptr_t* ___recoHandle0, InteropSafeHandle_tF14E3AD32AC904F5E38F4FAC0ED46417062386C6 * ___speechconfig1, InteropSafeHandle_tF14E3AD32AC904F5E38F4FAC0ED46417062386C6 * ___audioInput2, const RuntimeMethod* method)
{
	typedef intptr_t (STDCALL *PInvokeFunc) (intptr_t*, void*, void*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_Microsoft_CognitiveServices_Speech_core_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t*) + sizeof(void*) + sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("Microsoft.CognitiveServices.Speech.core.dll"), "recognizer_create_translation_recognizer_from_config", IL2CPP_CALL_STDCALL, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___speechconfig1' to native representation
	void* ____speechconfig1_marshaled = NULL;
	if (___speechconfig1 == NULL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_null_exception("speechconfig"), NULL);
	bool ___safeHandle_reference_incremented_for____speechconfig1 = false;
	SafeHandle_DangerousAddRef_mC65F001DAB84BADED6EA18B339BEA78962B978DB(___speechconfig1, (&___safeHandle_reference_incremented_for____speechconfig1), NULL);
	____speechconfig1_marshaled = reinterpret_cast<void*>((___speechconfig1)->get_handle_0());

	// Marshaling of parameter '___audioInput2' to native representation
	void* ____audioInput2_marshaled = NULL;
	if (___audioInput2 == NULL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_null_exception("audioInput"), NULL);
	bool ___safeHandle_reference_incremented_for____audioInput2 = false;
	SafeHandle_DangerousAddRef_mC65F001DAB84BADED6EA18B339BEA78962B978DB(___audioInput2, (&___safeHandle_reference_incremented_for____audioInput2), NULL);
	____audioInput2_marshaled = reinterpret_cast<void*>((___audioInput2)->get_handle_0());

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_Microsoft_CognitiveServices_Speech_core_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(recognizer_create_translation_recognizer_from_config)(___recoHandle0, ____speechconfig1_marshaled, ____audioInput2_marshaled);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(___recoHandle0, ____speechconfig1_marshaled, ____audioInput2_marshaled);
	#endif

	// Marshaling cleanup of parameter '___speechconfig1' native representation
	if (___safeHandle_reference_incremented_for____speechconfig1)
	{
		SafeHandle_DangerousRelease_mD38F583FAFD30A50547FAA163FBE3C1D466174D4(___speechconfig1, NULL);
	}

	// Marshaling cleanup of parameter '___audioInput2' native representation
	if (___safeHandle_reference_incremented_for____audioInput2)
	{
		SafeHandle_DangerousRelease_mD38F583FAFD30A50547FAA163FBE3C1D466174D4(___audioInput2, NULL);
	}

	return returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Microsoft.CognitiveServices.Speech.Translation.TranslationRecognitionCanceledEventArgs::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TranslationRecognitionCanceledEventArgs__ctor_m232ECE91C247E37F521EB16C1C0D6F83242D712E (TranslationRecognitionCanceledEventArgs_tF8364DAABB1345D5D552BC9161B2681056902434 * __this, intptr_t ___eventHandlePtr0, const RuntimeMethod* method)
{
	CancellationDetails_t5D21A89C2CF88AB86DE6EF822F1DBF0FF3F678C9 * V_0 = NULL;
	{
		intptr_t L_0 = ___eventHandlePtr0;
		TranslationRecognitionEventArgs__ctor_mE538F958D191E2A0ABAA76F0B10516C08846DD52(__this, (intptr_t)L_0, /*hidden argument*/NULL);
		TranslationRecognitionResult_tAF699D9A902DCE03B21D08BD562FE08544A089AD * L_1;
		L_1 = TranslationRecognitionEventArgs_get_Result_mCD02FCF6C3C49D1B6288D1BDA24F06BEF2322F41_inline(__this, /*hidden argument*/NULL);
		CancellationDetails_t5D21A89C2CF88AB86DE6EF822F1DBF0FF3F678C9 * L_2;
		L_2 = CancellationDetails_FromResult_m4EB7D4D34AD85ACD568A2598EA91D0122D5DB718(L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		CancellationDetails_t5D21A89C2CF88AB86DE6EF822F1DBF0FF3F678C9 * L_3 = V_0;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = CancellationDetails_get_Reason_mEBCBE5F14B176F5574F4A4D6CBB2F3719CC51BA4_inline(L_3, /*hidden argument*/NULL);
		__this->set_U3CReasonU3Ek__BackingField_7(L_4);
		CancellationDetails_t5D21A89C2CF88AB86DE6EF822F1DBF0FF3F678C9 * L_5 = V_0;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = CancellationDetails_get_ErrorCode_m86467B87546D6D75FF69D6190773F9F84CD94D98_inline(L_5, /*hidden argument*/NULL);
		__this->set_U3CErrorCodeU3Ek__BackingField_8(L_6);
		CancellationDetails_t5D21A89C2CF88AB86DE6EF822F1DBF0FF3F678C9 * L_7 = V_0;
		NullCheck(L_7);
		String_t* L_8;
		L_8 = CancellationDetails_get_ErrorDetails_m1BD08DCFD99497ADB4E6C05D337488538941B384_inline(L_7, /*hidden argument*/NULL);
		__this->set_U3CErrorDetailsU3Ek__BackingField_9(L_8);
		return;
	}
}
// Microsoft.CognitiveServices.Speech.CancellationReason Microsoft.CognitiveServices.Speech.Translation.TranslationRecognitionCanceledEventArgs::get_Reason()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TranslationRecognitionCanceledEventArgs_get_Reason_m94F2A97E7FD6DD5B61DCDC9B305CD41D9432C318 (TranslationRecognitionCanceledEventArgs_tF8364DAABB1345D5D552BC9161B2681056902434 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CReasonU3Ek__BackingField_7();
		return L_0;
	}
}
// Microsoft.CognitiveServices.Speech.CancellationErrorCode Microsoft.CognitiveServices.Speech.Translation.TranslationRecognitionCanceledEventArgs::get_ErrorCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TranslationRecognitionCanceledEventArgs_get_ErrorCode_mDC791691BE24A75B18707DCAE11FDDB9A0CC2559 (TranslationRecognitionCanceledEventArgs_tF8364DAABB1345D5D552BC9161B2681056902434 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CErrorCodeU3Ek__BackingField_8();
		return L_0;
	}
}
// System.String Microsoft.CognitiveServices.Speech.Translation.TranslationRecognitionCanceledEventArgs::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* TranslationRecognitionCanceledEventArgs_ToString_mBA3666F32F9CF255E740681B9226084264D3F7A9 (TranslationRecognitionCanceledEventArgs_tF8364DAABB1345D5D552BC9161B2681056902434 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CancellationErrorCode_t91865BA91C9E78F536A8756E3533F4ECE8824D62_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CancellationReason_t11019B124BB3269219C20F71CE36597F73A7E20E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral94ACA2C81E052FAFABB8EF261D2A67595EE46C0E);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_il2cpp_TypeInfo_var);
		CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * L_0;
		L_0 = CultureInfo_get_InvariantCulture_m9FAAFAF8A00091EE1FCB7098AD3F163ECDF02164(/*hidden argument*/NULL);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)4);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_2 = L_1;
		String_t* L_3;
		L_3 = SessionEventArgs_get_SessionId_m8C680FABDADC335561EA0F07CEA0F2F38A968960_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_3);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_4 = L_2;
		TranslationRecognitionResult_tAF699D9A902DCE03B21D08BD562FE08544A089AD * L_5;
		L_5 = TranslationRecognitionEventArgs_get_Result_mCD02FCF6C3C49D1B6288D1BDA24F06BEF2322F41_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_5);
		String_t* L_6;
		L_6 = VirtFuncInvoker0< String_t* >::Invoke(4 /* System.String Microsoft.CognitiveServices.Speech.RecognitionResult::get_ResultId() */, L_5);
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_6);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_6);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_7 = L_4;
		int32_t L_8;
		L_8 = TranslationRecognitionCanceledEventArgs_get_Reason_m94F2A97E7FD6DD5B61DCDC9B305CD41D9432C318_inline(__this, /*hidden argument*/NULL);
		int32_t L_9 = L_8;
		RuntimeObject * L_10 = Box(CancellationReason_t11019B124BB3269219C20F71CE36597F73A7E20E_il2cpp_TypeInfo_var, &L_9);
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, L_10);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)L_10);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_11 = L_7;
		int32_t L_12;
		L_12 = TranslationRecognitionCanceledEventArgs_get_ErrorCode_mDC791691BE24A75B18707DCAE11FDDB9A0CC2559_inline(__this, /*hidden argument*/NULL);
		int32_t L_13 = L_12;
		RuntimeObject * L_14 = Box(CancellationErrorCode_t91865BA91C9E78F536A8756E3533F4ECE8824D62_il2cpp_TypeInfo_var, &L_13);
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, L_14);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_14);
		String_t* L_15;
		L_15 = String_Format_mF96F0621DC567D09C07F1EAC66B31AD261A9DC21(L_0, _stringLiteral94ACA2C81E052FAFABB8EF261D2A67595EE46C0E, L_11, /*hidden argument*/NULL);
		return L_15;
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
// System.Void Microsoft.CognitiveServices.Speech.Translation.TranslationRecognitionEventArgs::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TranslationRecognitionEventArgs__ctor_mE538F958D191E2A0ABAA76F0B10516C08846DD52 (TranslationRecognitionEventArgs_t9801CC0D44EB6958FE731328096A8220591EB9E2 * __this, intptr_t ___eventHandlePtr0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TranslationRecognitionResult_tAF699D9A902DCE03B21D08BD562FE08544A089AD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		intptr_t L_0 = ___eventHandlePtr0;
		RecognitionEventArgs__ctor_m31490D766642A01A99F86D9E037DEABFD21138FE(__this, (intptr_t)L_0, /*hidden argument*/NULL);
		V_0 = (intptr_t)(0);
		InteropSafeHandle_tF14E3AD32AC904F5E38F4FAC0ED46417062386C6 * L_1 = ((SessionEventArgs_t720E6DA982AD7DE7933835DEBBECD8B78F28CAB1 *)__this)->get_eventHandle_1();
		intptr_t L_2;
		L_2 = Recognizer_recognizer_recognition_event_get_result_m95C54811DD6BF44F99C1BF4AFA3506EB119BFBA0(L_1, (intptr_t*)(&V_0), /*hidden argument*/NULL);
		SpxExceptionThrower_ThrowIfFail_m7269610C68DA4D960FE5E6208DF1BD9282C8F2DA((intptr_t)L_2, /*hidden argument*/NULL);
		intptr_t L_3 = V_0;
		TranslationRecognitionResult_tAF699D9A902DCE03B21D08BD562FE08544A089AD * L_4 = (TranslationRecognitionResult_tAF699D9A902DCE03B21D08BD562FE08544A089AD *)il2cpp_codegen_object_new(TranslationRecognitionResult_tAF699D9A902DCE03B21D08BD562FE08544A089AD_il2cpp_TypeInfo_var);
		TranslationRecognitionResult__ctor_m7DE44365A4CDD91182EAFBB15C5A09851BF9518A(L_4, (intptr_t)L_3, /*hidden argument*/NULL);
		__this->set_U3CResultU3Ek__BackingField_6(L_4);
		return;
	}
}
// Microsoft.CognitiveServices.Speech.Translation.TranslationRecognitionResult Microsoft.CognitiveServices.Speech.Translation.TranslationRecognitionEventArgs::get_Result()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TranslationRecognitionResult_tAF699D9A902DCE03B21D08BD562FE08544A089AD * TranslationRecognitionEventArgs_get_Result_mCD02FCF6C3C49D1B6288D1BDA24F06BEF2322F41 (TranslationRecognitionEventArgs_t9801CC0D44EB6958FE731328096A8220591EB9E2 * __this, const RuntimeMethod* method)
{
	{
		TranslationRecognitionResult_tAF699D9A902DCE03B21D08BD562FE08544A089AD * L_0 = __this->get_U3CResultU3Ek__BackingField_6();
		return L_0;
	}
}
// System.String Microsoft.CognitiveServices.Speech.Translation.TranslationRecognitionEventArgs::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* TranslationRecognitionEventArgs_ToString_m92738DB6325D6B60A2CED60DB7C0338255A13AC4 (TranslationRecognitionEventArgs_t9801CC0D44EB6958FE731328096A8220591EB9E2 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral07657094245180507A188C63C49A070BC8752EA2);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_il2cpp_TypeInfo_var);
		CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * L_0;
		L_0 = CultureInfo_get_InvariantCulture_m9FAAFAF8A00091EE1FCB7098AD3F163ECDF02164(/*hidden argument*/NULL);
		String_t* L_1;
		L_1 = SessionEventArgs_get_SessionId_m8C680FABDADC335561EA0F07CEA0F2F38A968960_inline(__this, /*hidden argument*/NULL);
		TranslationRecognitionResult_tAF699D9A902DCE03B21D08BD562FE08544A089AD * L_2;
		L_2 = TranslationRecognitionEventArgs_get_Result_mCD02FCF6C3C49D1B6288D1BDA24F06BEF2322F41_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		String_t* L_3;
		L_3 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_2);
		String_t* L_4;
		L_4 = String_Format_m8892FAD3E9F1E11E6176840DC1EA0C40DF1F0C2B(L_0, _stringLiteral07657094245180507A188C63C49A070BC8752EA2, L_1, L_3, /*hidden argument*/NULL);
		return L_4;
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
// System.Void Microsoft.CognitiveServices.Speech.Translation.TranslationRecognitionResult::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TranslationRecognitionResult__ctor_m7DE44365A4CDD91182EAFBB15C5A09851BF9518A (TranslationRecognitionResult_tAF699D9A902DCE03B21D08BD562FE08544A089AD * __this, intptr_t ___resultPtr0, const RuntimeMethod* method)
{
	{
		intptr_t L_0 = ___resultPtr0;
		RecognitionResult__ctor_m7D01DA66AAD01DE820449823615BF686A33EC72E(__this, (intptr_t)L_0, /*hidden argument*/NULL);
		TranslationRecognitionResult_GetTranslationTexts_m8089C12281F2780B76AE5F52A7E56E722AE4D314(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Collections.Generic.IReadOnlyDictionary`2<System.String,System.String> Microsoft.CognitiveServices.Speech.Translation.TranslationRecognitionResult::get_Translations()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TranslationRecognitionResult_get_Translations_mFE7B704863AE1DFA972D7EBB13671D4D907ABE53 (TranslationRecognitionResult_tAF699D9A902DCE03B21D08BD562FE08544A089AD * __this, const RuntimeMethod* method)
{
	{
		Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * L_0 = __this->get_translationTextResultMap_6();
		return L_0;
	}
}
// System.String Microsoft.CognitiveServices.Speech.Translation.TranslationRecognitionResult::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* TranslationRecognitionResult_ToString_m1546005CA76029FB43629ADBE5EE72F65B02B824 (TranslationRecognitionResult_tAF699D9A902DCE03B21D08BD562FE08544A089AD * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_tFBD6BBCAEB863478E70CD1504627E429F27569AA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t692ABF80A29FB82368A57AE22841134E3626E47A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Key_m42802FFFC275E928911F87B16DFE504319DF58F1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Value_mB6B24D3920A4744624F8ED9AE493783D0E5F81DD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ResultReason_tB8FC6492BDC104DC14FE8E50C557C68A35466BF5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral39F33B0FE4D2999B413004105B540E9BDC49D767);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral66B8240E15500AD983CC6249A0313DD49E22940E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral67E3003FE5B0C609EB2073B105C585694FED0280);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC9242117927E8C104F78807A56EFE624837EF5BB);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	KeyValuePair_2_tE863694F1DB1F441CAE5A282829BDB941B2DEEBC  V_2;
	memset((&V_2), 0, sizeof(V_2));
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_il2cpp_TypeInfo_var);
		CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * L_0;
		L_0 = CultureInfo_get_InvariantCulture_m9FAAFAF8A00091EE1FCB7098AD3F163ECDF02164(/*hidden argument*/NULL);
		String_t* L_1;
		L_1 = VirtFuncInvoker0< String_t* >::Invoke(4 /* System.String Microsoft.CognitiveServices.Speech.RecognitionResult::get_ResultId() */, __this);
		int32_t L_2;
		L_2 = VirtFuncInvoker0< int32_t >::Invoke(5 /* Microsoft.CognitiveServices.Speech.ResultReason Microsoft.CognitiveServices.Speech.RecognitionResult::get_Reason() */, __this);
		int32_t L_3 = L_2;
		RuntimeObject * L_4 = Box(ResultReason_tB8FC6492BDC104DC14FE8E50C557C68A35466BF5_il2cpp_TypeInfo_var, &L_3);
		String_t* L_5;
		L_5 = VirtFuncInvoker0< String_t* >::Invoke(6 /* System.String Microsoft.CognitiveServices.Speech.RecognitionResult::get_Text() */, __this);
		String_t* L_6;
		L_6 = String_Format_mC888813A47B8AC105F0CA58D45D5B7B748E1A68B(L_0, _stringLiteral66B8240E15500AD983CC6249A0313DD49E22940E, L_1, L_4, L_5, /*hidden argument*/NULL);
		V_0 = L_6;
		RuntimeObject* L_7;
		L_7 = TranslationRecognitionResult_get_Translations_mFE7B704863AE1DFA972D7EBB13671D4D907ABE53_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_7);
		RuntimeObject* L_8;
		L_8 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.String,System.String>>::GetEnumerator() */, IEnumerable_1_tFBD6BBCAEB863478E70CD1504627E429F27569AA_il2cpp_TypeInfo_var, L_7);
		V_1 = L_8;
	}

IL_0033:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0078;
		}

IL_0035:
		{
			RuntimeObject* L_9 = V_1;
			NullCheck(L_9);
			KeyValuePair_2_tE863694F1DB1F441CAE5A282829BDB941B2DEEBC  L_10;
			L_10 = InterfaceFuncInvoker0< KeyValuePair_2_tE863694F1DB1F441CAE5A282829BDB941B2DEEBC  >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.String>>::get_Current() */, IEnumerator_1_t692ABF80A29FB82368A57AE22841134E3626E47A_il2cpp_TypeInfo_var, L_9);
			V_2 = L_10;
			StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_11 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)SZArrayNew(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var, (uint32_t)6);
			StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_12 = L_11;
			String_t* L_13 = V_0;
			NullCheck(L_12);
			ArrayElementTypeCheck (L_12, L_13);
			(L_12)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)L_13);
			StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_14 = L_12;
			NullCheck(L_14);
			ArrayElementTypeCheck (L_14, _stringLiteral67E3003FE5B0C609EB2073B105C585694FED0280);
			(L_14)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteral67E3003FE5B0C609EB2073B105C585694FED0280);
			StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_15 = L_14;
			String_t* L_16;
			L_16 = KeyValuePair_2_get_Key_m42802FFFC275E928911F87B16DFE504319DF58F1_inline((KeyValuePair_2_tE863694F1DB1F441CAE5A282829BDB941B2DEEBC *)(&V_2), /*hidden argument*/KeyValuePair_2_get_Key_m42802FFFC275E928911F87B16DFE504319DF58F1_RuntimeMethod_var);
			NullCheck(L_15);
			ArrayElementTypeCheck (L_15, L_16);
			(L_15)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)L_16);
			StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_17 = L_15;
			NullCheck(L_17);
			ArrayElementTypeCheck (L_17, _stringLiteral39F33B0FE4D2999B413004105B540E9BDC49D767);
			(L_17)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)_stringLiteral39F33B0FE4D2999B413004105B540E9BDC49D767);
			StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_18 = L_17;
			String_t* L_19;
			L_19 = KeyValuePair_2_get_Value_mB6B24D3920A4744624F8ED9AE493783D0E5F81DD_inline((KeyValuePair_2_tE863694F1DB1F441CAE5A282829BDB941B2DEEBC *)(&V_2), /*hidden argument*/KeyValuePair_2_get_Value_mB6B24D3920A4744624F8ED9AE493783D0E5F81DD_RuntimeMethod_var);
			NullCheck(L_18);
			ArrayElementTypeCheck (L_18, L_19);
			(L_18)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)L_19);
			StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_20 = L_18;
			NullCheck(L_20);
			ArrayElementTypeCheck (L_20, _stringLiteralC9242117927E8C104F78807A56EFE624837EF5BB);
			(L_20)->SetAt(static_cast<il2cpp_array_size_t>(5), (String_t*)_stringLiteralC9242117927E8C104F78807A56EFE624837EF5BB);
			String_t* L_21;
			L_21 = String_Concat_mFEA7EFA1A6E75B96B1B7BC4526AAC864BFF83CC9(L_20, /*hidden argument*/NULL);
			V_0 = L_21;
		}

IL_0078:
		{
			RuntimeObject* L_22 = V_1;
			NullCheck(L_22);
			bool L_23;
			L_23 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_22);
			if (L_23)
			{
				goto IL_0035;
			}
		}

IL_0080:
		{
			IL2CPP_LEAVE(0x8C, FINALLY_0082);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0082;
	}

FINALLY_0082:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_24 = V_1;
			if (!L_24)
			{
				goto IL_008b;
			}
		}

IL_0085:
		{
			RuntimeObject* L_25 = V_1;
			NullCheck(L_25);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_25);
		}

IL_008b:
		{
			IL2CPP_END_FINALLY(130)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(130)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x8C, IL_008c)
	}

IL_008c:
	{
		String_t* L_26 = V_0;
		return L_26;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.Translation.TranslationRecognitionResult::GetTranslationTexts()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TranslationRecognitionResult_GetTranslationTexts_m8089C12281F2780B76AE5F52A7E56E722AE4D314 (TranslationRecognitionResult_tAF699D9A902DCE03B21D08BD562FE08544A089AD * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mA6747E78BD4DF1D09D9091C1B3EBAE0FDB200666_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_m31C41E4FE938066440DAFD1E667C2F3986549668_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tEBAFAE20369FCB1B38C49C4E27A8D8C2C4B55058_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SpxError_tE3A37886AA69A2843CE24D52F59B1402D244731D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5CB81742644CCEA2B53FE5D7E08731904CD84E08);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	intptr_t V_1;
	memset((&V_1), 0, sizeof(V_1));
	intptr_t V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	intptr_t V_6;
	memset((&V_6), 0, sizeof(V_6));
	intptr_t V_7;
	memset((&V_7), 0, sizeof(V_7));
	intptr_t V_8;
	memset((&V_8), 0, sizeof(V_8));
	int32_t V_9 = 0;
	intptr_t V_10;
	memset((&V_10), 0, sizeof(V_10));
	String_t* V_11 = NULL;
	intptr_t V_12;
	memset((&V_12), 0, sizeof(V_12));
	String_t* V_13 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		InteropSafeHandle_tF14E3AD32AC904F5E38F4FAC0ED46417062386C6 * L_0 = ((RecognitionResult_t29D2A304D192BFB246AB9E91297B54B2EB44DA06 *)__this)->get_resultHandle_4();
		SpxExceptionThrower_ThrowIfNull_mC54EA71790A454E5785FC15C4FFBB6F457E772DB(L_0, _stringLiteral5CB81742644CCEA2B53FE5D7E08731904CD84E08, /*hidden argument*/NULL);
		InteropSafeHandle_tF14E3AD32AC904F5E38F4FAC0ED46417062386C6 * L_1 = ((RecognitionResult_t29D2A304D192BFB246AB9E91297B54B2EB44DA06 *)__this)->get_resultHandle_4();
		bool L_2;
		L_2 = RecognitionResult_recognizer_result_handle_is_valid_mF7E78F30BD9373F5F3F4AEC1827F014FEEDDF062(L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0122;
		}
	}
	{
		V_0 = 0;
		Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * L_3 = (Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 *)il2cpp_codegen_object_new(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_mA6747E78BD4DF1D09D9091C1B3EBAE0FDB200666(L_3, /*hidden argument*/Dictionary_2__ctor_mA6747E78BD4DF1D09D9091C1B3EBAE0FDB200666_RuntimeMethod_var);
		__this->set_translationTextResultMap_6(L_3);
		InteropSafeHandle_tF14E3AD32AC904F5E38F4FAC0ED46417062386C6 * L_4 = ((RecognitionResult_t29D2A304D192BFB246AB9E91297B54B2EB44DA06 *)__this)->get_resultHandle_4();
		intptr_t L_5;
		L_5 = RecognitionResult_translation_text_result_get_translation_text_buffer_header_m836D5B5E0B1882639EF9E75125664188D7484BCF(L_4, (intptr_t)(0), (int32_t*)(&V_0), /*hidden argument*/NULL);
		V_1 = (intptr_t)L_5;
		intptr_t L_6 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(SpxError_tE3A37886AA69A2843CE24D52F59B1402D244731D_il2cpp_TypeInfo_var);
		intptr_t L_7 = ((SpxError_tE3A37886AA69A2843CE24D52F59B1402D244731D_StaticFields*)il2cpp_codegen_static_fields_for(SpxError_tE3A37886AA69A2843CE24D52F59B1402D244731D_il2cpp_TypeInfo_var))->get_BufferTooSmall_0();
		bool L_8;
		L_8 = IntPtr_op_Equality_mD94F3FE43A65684EFF984A7B95E70D2520C0AC73((intptr_t)L_6, (intptr_t)L_7, /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_0122;
		}
	}
	{
		int32_t L_9 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Marshal_tEBAFAE20369FCB1B38C49C4E27A8D8C2C4B55058_il2cpp_TypeInfo_var);
		intptr_t L_10;
		L_10 = Marshal_AllocHGlobal_mED1B623D229DB8FAB58D187E4E73D3DA2E8AE6EC(L_9, /*hidden argument*/NULL);
		V_2 = (intptr_t)L_10;
	}

IL_0057:
	try
	{ // begin try (depth: 1)
		{
			InteropSafeHandle_tF14E3AD32AC904F5E38F4FAC0ED46417062386C6 * L_11 = ((RecognitionResult_t29D2A304D192BFB246AB9E91297B54B2EB44DA06 *)__this)->get_resultHandle_4();
			intptr_t L_12 = V_2;
			intptr_t L_13;
			L_13 = RecognitionResult_translation_text_result_get_translation_text_buffer_header_m836D5B5E0B1882639EF9E75125664188D7484BCF(L_11, (intptr_t)L_12, (int32_t*)(&V_0), /*hidden argument*/NULL);
			SpxExceptionThrower_ThrowIfFail_m7269610C68DA4D960FE5E6208DF1BD9282C8F2DA((intptr_t)L_13, /*hidden argument*/NULL);
			V_3 = 0;
			intptr_t L_14 = V_2;
			int32_t L_15 = V_3;
			IL2CPP_RUNTIME_CLASS_INIT(Marshal_tEBAFAE20369FCB1B38C49C4E27A8D8C2C4B55058_il2cpp_TypeInfo_var);
			intptr_t L_16;
			L_16 = Marshal_ReadIntPtr_mD346139A9C1580DC394446F749B49BD4E06FDA5F((intptr_t)L_14, L_15, /*hidden argument*/NULL);
			int32_t L_17;
			L_17 = IntPtr_op_Explicit_m9C2CBDF65A4D7B2C0DCF4D38A4174A2CC07A18E3((intptr_t)L_16, /*hidden argument*/NULL);
			V_4 = L_17;
			int32_t L_18 = V_4;
			int32_t L_19 = V_0;
			IL2CPP_RUNTIME_CLASS_INIT(SpxError_tE3A37886AA69A2843CE24D52F59B1402D244731D_il2cpp_TypeInfo_var);
			intptr_t L_20 = ((SpxError_tE3A37886AA69A2843CE24D52F59B1402D244731D_StaticFields*)il2cpp_codegen_static_fields_for(SpxError_tE3A37886AA69A2843CE24D52F59B1402D244731D_il2cpp_TypeInfo_var))->get_RuntimeError_1();
			V_8 = (intptr_t)L_20;
			int32_t L_21;
			L_21 = IntPtr_ToInt32_m94C1C0E438A3B7E040B0A087FDDC0D4F90BABB08((intptr_t*)(&V_8), /*hidden argument*/NULL);
			SpxExceptionThrower_ThrowIfFalse_mEE1FF4BD7BB68A39220E0A1F7EB210DD4E88B79F((bool)((((int32_t)L_18) == ((int32_t)L_19))? 1 : 0), L_21, /*hidden argument*/NULL);
			int32_t L_22 = V_3;
			int32_t L_23;
			L_23 = IntPtr_get_Size_mD8038A1C440DE87E685F4D879DC80A6704D9C77B(/*hidden argument*/NULL);
			V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_22, (int32_t)L_23));
			intptr_t L_24 = V_2;
			int32_t L_25 = V_3;
			intptr_t L_26;
			L_26 = Marshal_ReadIntPtr_mD346139A9C1580DC394446F749B49BD4E06FDA5F((intptr_t)L_24, L_25, /*hidden argument*/NULL);
			int32_t L_27;
			L_27 = IntPtr_op_Explicit_m9C2CBDF65A4D7B2C0DCF4D38A4174A2CC07A18E3((intptr_t)L_26, /*hidden argument*/NULL);
			V_5 = L_27;
			int32_t L_28 = V_3;
			int32_t L_29;
			L_29 = IntPtr_get_Size_mD8038A1C440DE87E685F4D879DC80A6704D9C77B(/*hidden argument*/NULL);
			V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_28, (int32_t)L_29));
			intptr_t L_30 = V_2;
			int32_t L_31 = V_3;
			intptr_t L_32;
			L_32 = Marshal_ReadIntPtr_mD346139A9C1580DC394446F749B49BD4E06FDA5F((intptr_t)L_30, L_31, /*hidden argument*/NULL);
			V_6 = (intptr_t)L_32;
			int32_t L_33 = V_3;
			int32_t L_34;
			L_34 = IntPtr_get_Size_mD8038A1C440DE87E685F4D879DC80A6704D9C77B(/*hidden argument*/NULL);
			V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_33, (int32_t)L_34));
			intptr_t L_35 = V_2;
			int32_t L_36 = V_3;
			intptr_t L_37;
			L_37 = Marshal_ReadIntPtr_mD346139A9C1580DC394446F749B49BD4E06FDA5F((intptr_t)L_35, L_36, /*hidden argument*/NULL);
			V_7 = (intptr_t)L_37;
			V_9 = 0;
			goto IL_0113;
		}

IL_00cf:
		{
			int32_t L_38;
			L_38 = IntPtr_get_Size_mD8038A1C440DE87E685F4D879DC80A6704D9C77B(/*hidden argument*/NULL);
			int32_t L_39 = V_9;
			V_3 = ((int32_t)il2cpp_codegen_multiply((int32_t)L_38, (int32_t)L_39));
			intptr_t L_40 = V_6;
			int32_t L_41 = V_3;
			IL2CPP_RUNTIME_CLASS_INIT(Marshal_tEBAFAE20369FCB1B38C49C4E27A8D8C2C4B55058_il2cpp_TypeInfo_var);
			intptr_t L_42;
			L_42 = Marshal_ReadIntPtr_mD346139A9C1580DC394446F749B49BD4E06FDA5F((intptr_t)L_40, L_41, /*hidden argument*/NULL);
			V_10 = (intptr_t)L_42;
			intptr_t L_43 = V_10;
			String_t* L_44;
			L_44 = Utf8StringMarshaler_MarshalNativeToManaged_mE524A0FA5B448795AFBC45096D889A5A647487D8((intptr_t)L_43, /*hidden argument*/NULL);
			V_11 = L_44;
			intptr_t L_45 = V_7;
			int32_t L_46 = V_3;
			intptr_t L_47;
			L_47 = Marshal_ReadIntPtr_mD346139A9C1580DC394446F749B49BD4E06FDA5F((intptr_t)L_45, L_46, /*hidden argument*/NULL);
			V_12 = (intptr_t)L_47;
			intptr_t L_48 = V_12;
			String_t* L_49;
			L_49 = Utf8StringMarshaler_MarshalNativeToManaged_mE524A0FA5B448795AFBC45096D889A5A647487D8((intptr_t)L_48, /*hidden argument*/NULL);
			V_13 = L_49;
			Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * L_50 = __this->get_translationTextResultMap_6();
			String_t* L_51 = V_11;
			String_t* L_52 = V_13;
			NullCheck(L_50);
			Dictionary_2_set_Item_m31C41E4FE938066440DAFD1E667C2F3986549668(L_50, L_51, L_52, /*hidden argument*/Dictionary_2_set_Item_m31C41E4FE938066440DAFD1E667C2F3986549668_RuntimeMethod_var);
			int32_t L_53 = V_9;
			V_9 = ((int32_t)il2cpp_codegen_add((int32_t)L_53, (int32_t)1));
		}

IL_0113:
		{
			int32_t L_54 = V_9;
			int32_t L_55 = V_5;
			if ((((int32_t)L_54) < ((int32_t)L_55)))
			{
				goto IL_00cf;
			}
		}

IL_0119:
		{
			IL2CPP_LEAVE(0x122, FINALLY_011b);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_011b;
	}

FINALLY_011b:
	{ // begin finally (depth: 1)
		intptr_t L_56 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(Marshal_tEBAFAE20369FCB1B38C49C4E27A8D8C2C4B55058_il2cpp_TypeInfo_var);
		Marshal_FreeHGlobal_m53FC4846F5D3106BA25B52C321005C227E424F72((intptr_t)L_56, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(283)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(283)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x122, IL_0122)
	}

IL_0122:
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
extern "C" void CDECL ReversePInvokeWrapper_TranslationRecognizer_FireEvent_Recognizing_mB199DD38F12DAD9246DD6B677A2E74490B49A52F(intptr_t ___hreco0, intptr_t ___hevent1, intptr_t ___pvContext2)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	TranslationRecognizer_FireEvent_Recognizing_mB199DD38F12DAD9246DD6B677A2E74490B49A52F(___hreco0, ___hevent1, ___pvContext2, NULL);

}
extern "C" void CDECL ReversePInvokeWrapper_TranslationRecognizer_FireEvent_Recognized_mDDE062FC556E989A6D9524FEDD5CB998F3B7283A(intptr_t ___hreco0, intptr_t ___hevent1, intptr_t ___pvContext2)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	TranslationRecognizer_FireEvent_Recognized_mDDE062FC556E989A6D9524FEDD5CB998F3B7283A(___hreco0, ___hevent1, ___pvContext2, NULL);

}
extern "C" void CDECL ReversePInvokeWrapper_TranslationRecognizer_FireEvent_Canceled_m07E5C0FDE0F3C15AE7DA029B15FAB7D3B20DEBA2(intptr_t ___hreco0, intptr_t ___hevent1, intptr_t ___pvContext2)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	TranslationRecognizer_FireEvent_Canceled_m07E5C0FDE0F3C15AE7DA029B15FAB7D3B20DEBA2(___hreco0, ___hevent1, ___pvContext2, NULL);

}
extern "C" void CDECL ReversePInvokeWrapper_TranslationRecognizer_FireEvent_SynthesisResult_mCE224C9BBD6BD727940FA60C9E032A92A4B3CB80(intptr_t ___hreco0, intptr_t ___hevent1, intptr_t ___pvContext2)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	TranslationRecognizer_FireEvent_SynthesisResult_mCE224C9BBD6BD727940FA60C9E032A92A4B3CB80(___hreco0, ___hevent1, ___pvContext2, NULL);

}
// System.Void Microsoft.CognitiveServices.Speech.Translation.TranslationRecognizer::add__Recognizing(System.EventHandler`1<Microsoft.CognitiveServices.Speech.Translation.TranslationRecognitionEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TranslationRecognizer_add__Recognizing_mAF65D8FC77E7A5C0A41FC9D0A26DEE67272F1254 (TranslationRecognizer_t5E2EA28023083A645CA9CB77906834987C4C9BFC * __this, EventHandler_1_t0304893ABC1043DC90AF47CDE2ACD2D6DB2B7487 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_t0304893ABC1043DC90AF47CDE2ACD2D6DB2B7487_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_t0304893ABC1043DC90AF47CDE2ACD2D6DB2B7487 * V_0 = NULL;
	EventHandler_1_t0304893ABC1043DC90AF47CDE2ACD2D6DB2B7487 * V_1 = NULL;
	EventHandler_1_t0304893ABC1043DC90AF47CDE2ACD2D6DB2B7487 * V_2 = NULL;
	{
		EventHandler_1_t0304893ABC1043DC90AF47CDE2ACD2D6DB2B7487 * L_0 = __this->get__Recognizing_19();
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_t0304893ABC1043DC90AF47CDE2ACD2D6DB2B7487 * L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_t0304893ABC1043DC90AF47CDE2ACD2D6DB2B7487 * L_2 = V_1;
		EventHandler_1_t0304893ABC1043DC90AF47CDE2ACD2D6DB2B7487 * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((EventHandler_1_t0304893ABC1043DC90AF47CDE2ACD2D6DB2B7487 *)CastclassSealed((RuntimeObject*)L_4, EventHandler_1_t0304893ABC1043DC90AF47CDE2ACD2D6DB2B7487_il2cpp_TypeInfo_var));
		EventHandler_1_t0304893ABC1043DC90AF47CDE2ACD2D6DB2B7487 ** L_5 = __this->get_address_of__Recognizing_19();
		EventHandler_1_t0304893ABC1043DC90AF47CDE2ACD2D6DB2B7487 * L_6 = V_2;
		EventHandler_1_t0304893ABC1043DC90AF47CDE2ACD2D6DB2B7487 * L_7 = V_1;
		EventHandler_1_t0304893ABC1043DC90AF47CDE2ACD2D6DB2B7487 * L_8;
		L_8 = InterlockedCompareExchangeImpl<EventHandler_1_t0304893ABC1043DC90AF47CDE2ACD2D6DB2B7487 *>((EventHandler_1_t0304893ABC1043DC90AF47CDE2ACD2D6DB2B7487 **)L_5, L_6, L_7);
		V_0 = L_8;
		EventHandler_1_t0304893ABC1043DC90AF47CDE2ACD2D6DB2B7487 * L_9 = V_0;
		EventHandler_1_t0304893ABC1043DC90AF47CDE2ACD2D6DB2B7487 * L_10 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_t0304893ABC1043DC90AF47CDE2ACD2D6DB2B7487 *)L_9) == ((RuntimeObject*)(EventHandler_1_t0304893ABC1043DC90AF47CDE2ACD2D6DB2B7487 *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.Translation.TranslationRecognizer::remove__Recognizing(System.EventHandler`1<Microsoft.CognitiveServices.Speech.Translation.TranslationRecognitionEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TranslationRecognizer_remove__Recognizing_m4D0BFE4BE97DF87F8DCC5E7707DE43C464AFBF1E (TranslationRecognizer_t5E2EA28023083A645CA9CB77906834987C4C9BFC * __this, EventHandler_1_t0304893ABC1043DC90AF47CDE2ACD2D6DB2B7487 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_t0304893ABC1043DC90AF47CDE2ACD2D6DB2B7487_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_t0304893ABC1043DC90AF47CDE2ACD2D6DB2B7487 * V_0 = NULL;
	EventHandler_1_t0304893ABC1043DC90AF47CDE2ACD2D6DB2B7487 * V_1 = NULL;
	EventHandler_1_t0304893ABC1043DC90AF47CDE2ACD2D6DB2B7487 * V_2 = NULL;
	{
		EventHandler_1_t0304893ABC1043DC90AF47CDE2ACD2D6DB2B7487 * L_0 = __this->get__Recognizing_19();
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_t0304893ABC1043DC90AF47CDE2ACD2D6DB2B7487 * L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_t0304893ABC1043DC90AF47CDE2ACD2D6DB2B7487 * L_2 = V_1;
		EventHandler_1_t0304893ABC1043DC90AF47CDE2ACD2D6DB2B7487 * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Remove_m8B4AD17254118B2904720D55C9B34FB3DCCBD7D4(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((EventHandler_1_t0304893ABC1043DC90AF47CDE2ACD2D6DB2B7487 *)CastclassSealed((RuntimeObject*)L_4, EventHandler_1_t0304893ABC1043DC90AF47CDE2ACD2D6DB2B7487_il2cpp_TypeInfo_var));
		EventHandler_1_t0304893ABC1043DC90AF47CDE2ACD2D6DB2B7487 ** L_5 = __this->get_address_of__Recognizing_19();
		EventHandler_1_t0304893ABC1043DC90AF47CDE2ACD2D6DB2B7487 * L_6 = V_2;
		EventHandler_1_t0304893ABC1043DC90AF47CDE2ACD2D6DB2B7487 * L_7 = V_1;
		EventHandler_1_t0304893ABC1043DC90AF47CDE2ACD2D6DB2B7487 * L_8;
		L_8 = InterlockedCompareExchangeImpl<EventHandler_1_t0304893ABC1043DC90AF47CDE2ACD2D6DB2B7487 *>((EventHandler_1_t0304893ABC1043DC90AF47CDE2ACD2D6DB2B7487 **)L_5, L_6, L_7);
		V_0 = L_8;
		EventHandler_1_t0304893ABC1043DC90AF47CDE2ACD2D6DB2B7487 * L_9 = V_0;
		EventHandler_1_t0304893ABC1043DC90AF47CDE2ACD2D6DB2B7487 * L_10 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_t0304893ABC1043DC90AF47CDE2ACD2D6DB2B7487 *)L_9) == ((RuntimeObject*)(EventHandler_1_t0304893ABC1043DC90AF47CDE2ACD2D6DB2B7487 *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.Translation.TranslationRecognizer::add__Recognized(System.EventHandler`1<Microsoft.CognitiveServices.Speech.Translation.TranslationRecognitionEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TranslationRecognizer_add__Recognized_m88F0D2B211CB1FB63A4488006301EA054F839A1A (TranslationRecognizer_t5E2EA28023083A645CA9CB77906834987C4C9BFC * __this, EventHandler_1_t0304893ABC1043DC90AF47CDE2ACD2D6DB2B7487 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_t0304893ABC1043DC90AF47CDE2ACD2D6DB2B7487_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_t0304893ABC1043DC90AF47CDE2ACD2D6DB2B7487 * V_0 = NULL;
	EventHandler_1_t0304893ABC1043DC90AF47CDE2ACD2D6DB2B7487 * V_1 = NULL;
	EventHandler_1_t0304893ABC1043DC90AF47CDE2ACD2D6DB2B7487 * V_2 = NULL;
	{
		EventHandler_1_t0304893ABC1043DC90AF47CDE2ACD2D6DB2B7487 * L_0 = __this->get__Recognized_20();
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_t0304893ABC1043DC90AF47CDE2ACD2D6DB2B7487 * L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_t0304893ABC1043DC90AF47CDE2ACD2D6DB2B7487 * L_2 = V_1;
		EventHandler_1_t0304893ABC1043DC90AF47CDE2ACD2D6DB2B7487 * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((EventHandler_1_t0304893ABC1043DC90AF47CDE2ACD2D6DB2B7487 *)CastclassSealed((RuntimeObject*)L_4, EventHandler_1_t0304893ABC1043DC90AF47CDE2ACD2D6DB2B7487_il2cpp_TypeInfo_var));
		EventHandler_1_t0304893ABC1043DC90AF47CDE2ACD2D6DB2B7487 ** L_5 = __this->get_address_of__Recognized_20();
		EventHandler_1_t0304893ABC1043DC90AF47CDE2ACD2D6DB2B7487 * L_6 = V_2;
		EventHandler_1_t0304893ABC1043DC90AF47CDE2ACD2D6DB2B7487 * L_7 = V_1;
		EventHandler_1_t0304893ABC1043DC90AF47CDE2ACD2D6DB2B7487 * L_8;
		L_8 = InterlockedCompareExchangeImpl<EventHandler_1_t0304893ABC1043DC90AF47CDE2ACD2D6DB2B7487 *>((EventHandler_1_t0304893ABC1043DC90AF47CDE2ACD2D6DB2B7487 **)L_5, L_6, L_7);
		V_0 = L_8;
		EventHandler_1_t0304893ABC1043DC90AF47CDE2ACD2D6DB2B7487 * L_9 = V_0;
		EventHandler_1_t0304893ABC1043DC90AF47CDE2ACD2D6DB2B7487 * L_10 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_t0304893ABC1043DC90AF47CDE2ACD2D6DB2B7487 *)L_9) == ((RuntimeObject*)(EventHandler_1_t0304893ABC1043DC90AF47CDE2ACD2D6DB2B7487 *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.Translation.TranslationRecognizer::remove__Recognized(System.EventHandler`1<Microsoft.CognitiveServices.Speech.Translation.TranslationRecognitionEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TranslationRecognizer_remove__Recognized_m90BC367941B41038250A67CBD727D2C25BFB6A6C (TranslationRecognizer_t5E2EA28023083A645CA9CB77906834987C4C9BFC * __this, EventHandler_1_t0304893ABC1043DC90AF47CDE2ACD2D6DB2B7487 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_t0304893ABC1043DC90AF47CDE2ACD2D6DB2B7487_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_t0304893ABC1043DC90AF47CDE2ACD2D6DB2B7487 * V_0 = NULL;
	EventHandler_1_t0304893ABC1043DC90AF47CDE2ACD2D6DB2B7487 * V_1 = NULL;
	EventHandler_1_t0304893ABC1043DC90AF47CDE2ACD2D6DB2B7487 * V_2 = NULL;
	{
		EventHandler_1_t0304893ABC1043DC90AF47CDE2ACD2D6DB2B7487 * L_0 = __this->get__Recognized_20();
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_t0304893ABC1043DC90AF47CDE2ACD2D6DB2B7487 * L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_t0304893ABC1043DC90AF47CDE2ACD2D6DB2B7487 * L_2 = V_1;
		EventHandler_1_t0304893ABC1043DC90AF47CDE2ACD2D6DB2B7487 * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Remove_m8B4AD17254118B2904720D55C9B34FB3DCCBD7D4(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((EventHandler_1_t0304893ABC1043DC90AF47CDE2ACD2D6DB2B7487 *)CastclassSealed((RuntimeObject*)L_4, EventHandler_1_t0304893ABC1043DC90AF47CDE2ACD2D6DB2B7487_il2cpp_TypeInfo_var));
		EventHandler_1_t0304893ABC1043DC90AF47CDE2ACD2D6DB2B7487 ** L_5 = __this->get_address_of__Recognized_20();
		EventHandler_1_t0304893ABC1043DC90AF47CDE2ACD2D6DB2B7487 * L_6 = V_2;
		EventHandler_1_t0304893ABC1043DC90AF47CDE2ACD2D6DB2B7487 * L_7 = V_1;
		EventHandler_1_t0304893ABC1043DC90AF47CDE2ACD2D6DB2B7487 * L_8;
		L_8 = InterlockedCompareExchangeImpl<EventHandler_1_t0304893ABC1043DC90AF47CDE2ACD2D6DB2B7487 *>((EventHandler_1_t0304893ABC1043DC90AF47CDE2ACD2D6DB2B7487 **)L_5, L_6, L_7);
		V_0 = L_8;
		EventHandler_1_t0304893ABC1043DC90AF47CDE2ACD2D6DB2B7487 * L_9 = V_0;
		EventHandler_1_t0304893ABC1043DC90AF47CDE2ACD2D6DB2B7487 * L_10 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_t0304893ABC1043DC90AF47CDE2ACD2D6DB2B7487 *)L_9) == ((RuntimeObject*)(EventHandler_1_t0304893ABC1043DC90AF47CDE2ACD2D6DB2B7487 *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.Translation.TranslationRecognizer::add__Canceled(System.EventHandler`1<Microsoft.CognitiveServices.Speech.Translation.TranslationRecognitionCanceledEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TranslationRecognizer_add__Canceled_m85B57C3A1EEFCED2ECC7DFE669DB36D185801416 (TranslationRecognizer_t5E2EA28023083A645CA9CB77906834987C4C9BFC * __this, EventHandler_1_t7D8AF3CB447F4C1AA3E3A0C2ABF74030E97A10FC * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_t7D8AF3CB447F4C1AA3E3A0C2ABF74030E97A10FC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_t7D8AF3CB447F4C1AA3E3A0C2ABF74030E97A10FC * V_0 = NULL;
	EventHandler_1_t7D8AF3CB447F4C1AA3E3A0C2ABF74030E97A10FC * V_1 = NULL;
	EventHandler_1_t7D8AF3CB447F4C1AA3E3A0C2ABF74030E97A10FC * V_2 = NULL;
	{
		EventHandler_1_t7D8AF3CB447F4C1AA3E3A0C2ABF74030E97A10FC * L_0 = __this->get__Canceled_21();
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_t7D8AF3CB447F4C1AA3E3A0C2ABF74030E97A10FC * L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_t7D8AF3CB447F4C1AA3E3A0C2ABF74030E97A10FC * L_2 = V_1;
		EventHandler_1_t7D8AF3CB447F4C1AA3E3A0C2ABF74030E97A10FC * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((EventHandler_1_t7D8AF3CB447F4C1AA3E3A0C2ABF74030E97A10FC *)CastclassSealed((RuntimeObject*)L_4, EventHandler_1_t7D8AF3CB447F4C1AA3E3A0C2ABF74030E97A10FC_il2cpp_TypeInfo_var));
		EventHandler_1_t7D8AF3CB447F4C1AA3E3A0C2ABF74030E97A10FC ** L_5 = __this->get_address_of__Canceled_21();
		EventHandler_1_t7D8AF3CB447F4C1AA3E3A0C2ABF74030E97A10FC * L_6 = V_2;
		EventHandler_1_t7D8AF3CB447F4C1AA3E3A0C2ABF74030E97A10FC * L_7 = V_1;
		EventHandler_1_t7D8AF3CB447F4C1AA3E3A0C2ABF74030E97A10FC * L_8;
		L_8 = InterlockedCompareExchangeImpl<EventHandler_1_t7D8AF3CB447F4C1AA3E3A0C2ABF74030E97A10FC *>((EventHandler_1_t7D8AF3CB447F4C1AA3E3A0C2ABF74030E97A10FC **)L_5, L_6, L_7);
		V_0 = L_8;
		EventHandler_1_t7D8AF3CB447F4C1AA3E3A0C2ABF74030E97A10FC * L_9 = V_0;
		EventHandler_1_t7D8AF3CB447F4C1AA3E3A0C2ABF74030E97A10FC * L_10 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_t7D8AF3CB447F4C1AA3E3A0C2ABF74030E97A10FC *)L_9) == ((RuntimeObject*)(EventHandler_1_t7D8AF3CB447F4C1AA3E3A0C2ABF74030E97A10FC *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.Translation.TranslationRecognizer::remove__Canceled(System.EventHandler`1<Microsoft.CognitiveServices.Speech.Translation.TranslationRecognitionCanceledEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TranslationRecognizer_remove__Canceled_m9C623054339BE0D96462B81AD3D3668949EA0AD9 (TranslationRecognizer_t5E2EA28023083A645CA9CB77906834987C4C9BFC * __this, EventHandler_1_t7D8AF3CB447F4C1AA3E3A0C2ABF74030E97A10FC * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_t7D8AF3CB447F4C1AA3E3A0C2ABF74030E97A10FC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_t7D8AF3CB447F4C1AA3E3A0C2ABF74030E97A10FC * V_0 = NULL;
	EventHandler_1_t7D8AF3CB447F4C1AA3E3A0C2ABF74030E97A10FC * V_1 = NULL;
	EventHandler_1_t7D8AF3CB447F4C1AA3E3A0C2ABF74030E97A10FC * V_2 = NULL;
	{
		EventHandler_1_t7D8AF3CB447F4C1AA3E3A0C2ABF74030E97A10FC * L_0 = __this->get__Canceled_21();
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_t7D8AF3CB447F4C1AA3E3A0C2ABF74030E97A10FC * L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_t7D8AF3CB447F4C1AA3E3A0C2ABF74030E97A10FC * L_2 = V_1;
		EventHandler_1_t7D8AF3CB447F4C1AA3E3A0C2ABF74030E97A10FC * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Remove_m8B4AD17254118B2904720D55C9B34FB3DCCBD7D4(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((EventHandler_1_t7D8AF3CB447F4C1AA3E3A0C2ABF74030E97A10FC *)CastclassSealed((RuntimeObject*)L_4, EventHandler_1_t7D8AF3CB447F4C1AA3E3A0C2ABF74030E97A10FC_il2cpp_TypeInfo_var));
		EventHandler_1_t7D8AF3CB447F4C1AA3E3A0C2ABF74030E97A10FC ** L_5 = __this->get_address_of__Canceled_21();
		EventHandler_1_t7D8AF3CB447F4C1AA3E3A0C2ABF74030E97A10FC * L_6 = V_2;
		EventHandler_1_t7D8AF3CB447F4C1AA3E3A0C2ABF74030E97A10FC * L_7 = V_1;
		EventHandler_1_t7D8AF3CB447F4C1AA3E3A0C2ABF74030E97A10FC * L_8;
		L_8 = InterlockedCompareExchangeImpl<EventHandler_1_t7D8AF3CB447F4C1AA3E3A0C2ABF74030E97A10FC *>((EventHandler_1_t7D8AF3CB447F4C1AA3E3A0C2ABF74030E97A10FC **)L_5, L_6, L_7);
		V_0 = L_8;
		EventHandler_1_t7D8AF3CB447F4C1AA3E3A0C2ABF74030E97A10FC * L_9 = V_0;
		EventHandler_1_t7D8AF3CB447F4C1AA3E3A0C2ABF74030E97A10FC * L_10 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_t7D8AF3CB447F4C1AA3E3A0C2ABF74030E97A10FC *)L_9) == ((RuntimeObject*)(EventHandler_1_t7D8AF3CB447F4C1AA3E3A0C2ABF74030E97A10FC *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.Translation.TranslationRecognizer::add_Recognizing(System.EventHandler`1<Microsoft.CognitiveServices.Speech.Translation.TranslationRecognitionEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TranslationRecognizer_add_Recognizing_m03063F2CFEC60E412DE797A3988F531B54CBC2AA (TranslationRecognizer_t5E2EA28023083A645CA9CB77906834987C4C9BFC * __this, EventHandler_1_t0304893ABC1043DC90AF47CDE2ACD2D6DB2B7487 * ___value0, const RuntimeMethod* method)
{
	{
		EventHandler_1_t0304893ABC1043DC90AF47CDE2ACD2D6DB2B7487 * L_0 = __this->get__Recognizing_19();
		if (L_0)
		{
			goto IL_0029;
		}
	}
	{
		InteropSafeHandle_tF14E3AD32AC904F5E38F4FAC0ED46417062386C6 * L_1 = ((Recognizer_tF1FAA5F9E223C619151C5DA96D83F0AF7E3C9E3E *)__this)->get_recoHandle_4();
		CallbackFunctionDelegate_tEDE2A24857EFCB03EE502D1E6E8A9E977030EAC4 * L_2 = __this->get_recognizingCallbackDelegate_24();
		GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603  L_3 = ((Recognizer_tF1FAA5F9E223C619151C5DA96D83F0AF7E3C9E3E *)__this)->get_gch_14();
		intptr_t L_4;
		L_4 = GCHandle_ToIntPtr_m017FBB27407865DD17A269CC03518EC518DE5AEA(L_3, /*hidden argument*/NULL);
		intptr_t L_5;
		L_5 = Recognizer_recognizer_recognizing_set_callback_m0FBD65D0735F5B286FE71E2DC91C04231297B466(L_1, L_2, (intptr_t)L_4, /*hidden argument*/NULL);
		SpxExceptionThrower_ThrowIfFail_m7269610C68DA4D960FE5E6208DF1BD9282C8F2DA((intptr_t)L_5, /*hidden argument*/NULL);
	}

IL_0029:
	{
		EventHandler_1_t0304893ABC1043DC90AF47CDE2ACD2D6DB2B7487 * L_6 = ___value0;
		TranslationRecognizer_add__Recognizing_mAF65D8FC77E7A5C0A41FC9D0A26DEE67272F1254(__this, L_6, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.Translation.TranslationRecognizer::remove_Recognizing(System.EventHandler`1<Microsoft.CognitiveServices.Speech.Translation.TranslationRecognitionEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TranslationRecognizer_remove_Recognizing_mC0B457860641D9D1E8AA147AD9A14E84365F05FC (TranslationRecognizer_t5E2EA28023083A645CA9CB77906834987C4C9BFC * __this, EventHandler_1_t0304893ABC1043DC90AF47CDE2ACD2D6DB2B7487 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		EventHandler_1_t0304893ABC1043DC90AF47CDE2ACD2D6DB2B7487 * L_0 = ___value0;
		TranslationRecognizer_remove__Recognizing_m4D0BFE4BE97DF87F8DCC5E7707DE43C464AFBF1E(__this, L_0, /*hidden argument*/NULL);
		EventHandler_1_t0304893ABC1043DC90AF47CDE2ACD2D6DB2B7487 * L_1 = __this->get__Recognizing_19();
		if (L_1)
		{
			goto IL_0025;
		}
	}
	{
		InteropSafeHandle_tF14E3AD32AC904F5E38F4FAC0ED46417062386C6 * L_2 = ((Recognizer_tF1FAA5F9E223C619151C5DA96D83F0AF7E3C9E3E *)__this)->get_recoHandle_4();
		intptr_t L_3;
		L_3 = Recognizer_recognizer_recognizing_set_callback_m0FBD65D0735F5B286FE71E2DC91C04231297B466(L_2, (CallbackFunctionDelegate_tEDE2A24857EFCB03EE502D1E6E8A9E977030EAC4 *)NULL, (intptr_t)(0), /*hidden argument*/NULL);
		SpxExceptionThrower_LogErrorIfFail_m752E6CB197597DAD0613E0AA21841F7EFD46D624((intptr_t)L_3, /*hidden argument*/NULL);
	}

IL_0025:
	{
		return;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.Translation.TranslationRecognizer::add_Recognized(System.EventHandler`1<Microsoft.CognitiveServices.Speech.Translation.TranslationRecognitionEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TranslationRecognizer_add_Recognized_m6213D96F154E22B291378B2E1F4A9BB18BC6F164 (TranslationRecognizer_t5E2EA28023083A645CA9CB77906834987C4C9BFC * __this, EventHandler_1_t0304893ABC1043DC90AF47CDE2ACD2D6DB2B7487 * ___value0, const RuntimeMethod* method)
{
	{
		EventHandler_1_t0304893ABC1043DC90AF47CDE2ACD2D6DB2B7487 * L_0 = __this->get__Recognized_20();
		if (L_0)
		{
			goto IL_0029;
		}
	}
	{
		InteropSafeHandle_tF14E3AD32AC904F5E38F4FAC0ED46417062386C6 * L_1 = ((Recognizer_tF1FAA5F9E223C619151C5DA96D83F0AF7E3C9E3E *)__this)->get_recoHandle_4();
		CallbackFunctionDelegate_tEDE2A24857EFCB03EE502D1E6E8A9E977030EAC4 * L_2 = __this->get_recognizedCallbackDelegate_25();
		GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603  L_3 = ((Recognizer_tF1FAA5F9E223C619151C5DA96D83F0AF7E3C9E3E *)__this)->get_gch_14();
		intptr_t L_4;
		L_4 = GCHandle_ToIntPtr_m017FBB27407865DD17A269CC03518EC518DE5AEA(L_3, /*hidden argument*/NULL);
		intptr_t L_5;
		L_5 = Recognizer_recognizer_recognized_set_callback_m262A0DD6A93CABB015B86E65229021E89C037FE9(L_1, L_2, (intptr_t)L_4, /*hidden argument*/NULL);
		SpxExceptionThrower_ThrowIfFail_m7269610C68DA4D960FE5E6208DF1BD9282C8F2DA((intptr_t)L_5, /*hidden argument*/NULL);
	}

IL_0029:
	{
		EventHandler_1_t0304893ABC1043DC90AF47CDE2ACD2D6DB2B7487 * L_6 = ___value0;
		TranslationRecognizer_add__Recognized_m88F0D2B211CB1FB63A4488006301EA054F839A1A(__this, L_6, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.Translation.TranslationRecognizer::remove_Recognized(System.EventHandler`1<Microsoft.CognitiveServices.Speech.Translation.TranslationRecognitionEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TranslationRecognizer_remove_Recognized_m95AACDD387B4FBCDBA8511AF2E761C435E45CA6E (TranslationRecognizer_t5E2EA28023083A645CA9CB77906834987C4C9BFC * __this, EventHandler_1_t0304893ABC1043DC90AF47CDE2ACD2D6DB2B7487 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		EventHandler_1_t0304893ABC1043DC90AF47CDE2ACD2D6DB2B7487 * L_0 = ___value0;
		TranslationRecognizer_remove__Recognized_m90BC367941B41038250A67CBD727D2C25BFB6A6C(__this, L_0, /*hidden argument*/NULL);
		EventHandler_1_t0304893ABC1043DC90AF47CDE2ACD2D6DB2B7487 * L_1 = __this->get__Recognized_20();
		if (L_1)
		{
			goto IL_0025;
		}
	}
	{
		InteropSafeHandle_tF14E3AD32AC904F5E38F4FAC0ED46417062386C6 * L_2 = ((Recognizer_tF1FAA5F9E223C619151C5DA96D83F0AF7E3C9E3E *)__this)->get_recoHandle_4();
		intptr_t L_3;
		L_3 = Recognizer_recognizer_recognized_set_callback_m262A0DD6A93CABB015B86E65229021E89C037FE9(L_2, (CallbackFunctionDelegate_tEDE2A24857EFCB03EE502D1E6E8A9E977030EAC4 *)NULL, (intptr_t)(0), /*hidden argument*/NULL);
		SpxExceptionThrower_LogErrorIfFail_m752E6CB197597DAD0613E0AA21841F7EFD46D624((intptr_t)L_3, /*hidden argument*/NULL);
	}

IL_0025:
	{
		return;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.Translation.TranslationRecognizer::add_Canceled(System.EventHandler`1<Microsoft.CognitiveServices.Speech.Translation.TranslationRecognitionCanceledEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TranslationRecognizer_add_Canceled_mB51A1268E44A3D8735717C5ABD37929026684406 (TranslationRecognizer_t5E2EA28023083A645CA9CB77906834987C4C9BFC * __this, EventHandler_1_t7D8AF3CB447F4C1AA3E3A0C2ABF74030E97A10FC * ___value0, const RuntimeMethod* method)
{
	{
		EventHandler_1_t7D8AF3CB447F4C1AA3E3A0C2ABF74030E97A10FC * L_0 = __this->get__Canceled_21();
		if (L_0)
		{
			goto IL_0029;
		}
	}
	{
		InteropSafeHandle_tF14E3AD32AC904F5E38F4FAC0ED46417062386C6 * L_1 = ((Recognizer_tF1FAA5F9E223C619151C5DA96D83F0AF7E3C9E3E *)__this)->get_recoHandle_4();
		CallbackFunctionDelegate_tEDE2A24857EFCB03EE502D1E6E8A9E977030EAC4 * L_2 = __this->get_canceledCallbackDelegate_26();
		GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603  L_3 = ((Recognizer_tF1FAA5F9E223C619151C5DA96D83F0AF7E3C9E3E *)__this)->get_gch_14();
		intptr_t L_4;
		L_4 = GCHandle_ToIntPtr_m017FBB27407865DD17A269CC03518EC518DE5AEA(L_3, /*hidden argument*/NULL);
		intptr_t L_5;
		L_5 = Recognizer_recognizer_canceled_set_callback_mC5295B5F4B2ED3207AB92D2DAA94B229509EDE60(L_1, L_2, (intptr_t)L_4, /*hidden argument*/NULL);
		SpxExceptionThrower_ThrowIfFail_m7269610C68DA4D960FE5E6208DF1BD9282C8F2DA((intptr_t)L_5, /*hidden argument*/NULL);
	}

IL_0029:
	{
		EventHandler_1_t7D8AF3CB447F4C1AA3E3A0C2ABF74030E97A10FC * L_6 = ___value0;
		TranslationRecognizer_add__Canceled_m85B57C3A1EEFCED2ECC7DFE669DB36D185801416(__this, L_6, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.Translation.TranslationRecognizer::remove_Canceled(System.EventHandler`1<Microsoft.CognitiveServices.Speech.Translation.TranslationRecognitionCanceledEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TranslationRecognizer_remove_Canceled_m11C30AAF9F33E2B107738B83928D604697FB1A7A (TranslationRecognizer_t5E2EA28023083A645CA9CB77906834987C4C9BFC * __this, EventHandler_1_t7D8AF3CB447F4C1AA3E3A0C2ABF74030E97A10FC * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		EventHandler_1_t7D8AF3CB447F4C1AA3E3A0C2ABF74030E97A10FC * L_0 = ___value0;
		TranslationRecognizer_remove__Canceled_m9C623054339BE0D96462B81AD3D3668949EA0AD9(__this, L_0, /*hidden argument*/NULL);
		EventHandler_1_t7D8AF3CB447F4C1AA3E3A0C2ABF74030E97A10FC * L_1 = __this->get__Canceled_21();
		if (L_1)
		{
			goto IL_0025;
		}
	}
	{
		InteropSafeHandle_tF14E3AD32AC904F5E38F4FAC0ED46417062386C6 * L_2 = ((Recognizer_tF1FAA5F9E223C619151C5DA96D83F0AF7E3C9E3E *)__this)->get_recoHandle_4();
		intptr_t L_3;
		L_3 = Recognizer_recognizer_canceled_set_callback_mC5295B5F4B2ED3207AB92D2DAA94B229509EDE60(L_2, (CallbackFunctionDelegate_tEDE2A24857EFCB03EE502D1E6E8A9E977030EAC4 *)NULL, (intptr_t)(0), /*hidden argument*/NULL);
		SpxExceptionThrower_LogErrorIfFail_m752E6CB197597DAD0613E0AA21841F7EFD46D624((intptr_t)L_3, /*hidden argument*/NULL);
	}

IL_0025:
	{
		return;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.Translation.TranslationRecognizer::.ctor(Microsoft.CognitiveServices.Speech.SpeechTranslationConfig)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TranslationRecognizer__ctor_m76B66A70B75C37221AA3F17855583A9DECE01B60 (TranslationRecognizer_t5E2EA28023083A645CA9CB77906834987C4C9BFC * __this, SpeechTranslationConfig_tFBB58FC53E2E75766C94D604CEF28A14CE72E90D * ___config0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GetRecognizerFromConfigDelegate_t2DC882A03ECDF618A982ED55B82B4ED3D829FACC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SpxFactory_recognizer_create_translation_recognizer_from_config_mBAA1FE887AC7E89AE3658F30F2307B65A5153BA6_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		GetRecognizerFromConfigDelegate_t2DC882A03ECDF618A982ED55B82B4ED3D829FACC * L_0 = (GetRecognizerFromConfigDelegate_t2DC882A03ECDF618A982ED55B82B4ED3D829FACC *)il2cpp_codegen_object_new(GetRecognizerFromConfigDelegate_t2DC882A03ECDF618A982ED55B82B4ED3D829FACC_il2cpp_TypeInfo_var);
		GetRecognizerFromConfigDelegate__ctor_m1D7851683A3D41399DB7BC5B6F36E32ABEBF62FC(L_0, NULL, (intptr_t)((intptr_t)SpxFactory_recognizer_create_translation_recognizer_from_config_mBAA1FE887AC7E89AE3658F30F2307B65A5153BA6_RuntimeMethod_var), /*hidden argument*/NULL);
		SpeechTranslationConfig_tFBB58FC53E2E75766C94D604CEF28A14CE72E90D * L_1 = ___config0;
		InteropSafeHandle_tF14E3AD32AC904F5E38F4FAC0ED46417062386C6 * L_2;
		L_2 = Recognizer_FromConfig_m60791AE2ACE591729B360D7615035FF13CAFBBF7(L_0, L_1, /*hidden argument*/NULL);
		TranslationRecognizer__ctor_m82F3D2B19A6FF788428C76193132BA4E8B8F3D8D(__this, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.Translation.TranslationRecognizer::.ctor(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TranslationRecognizer__ctor_m82F3D2B19A6FF788428C76193132BA4E8B8F3D8D (TranslationRecognizer_t5E2EA28023083A645CA9CB77906834987C4C9BFC * __this, InteropSafeHandle_tF14E3AD32AC904F5E38F4FAC0ED46417062386C6 * ___recoHandle0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CallbackFunctionDelegate_tEDE2A24857EFCB03EE502D1E6E8A9E977030EAC4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PropertyCollection_tD6D50793A0684647D5C7067381E1365EDB3AA920_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TranslationRecognizer_FireEvent_Canceled_m07E5C0FDE0F3C15AE7DA029B15FAB7D3B20DEBA2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TranslationRecognizer_FireEvent_Recognized_mDDE062FC556E989A6D9524FEDD5CB998F3B7283A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TranslationRecognizer_FireEvent_Recognizing_mB199DD38F12DAD9246DD6B677A2E74490B49A52F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TranslationRecognizer_FireEvent_SynthesisResult_mCE224C9BBD6BD727940FA60C9E032A92A4B3CB80_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7D62C11CCF10BDFC07ACE3D149248DE3F051849C);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		InteropSafeHandle_tF14E3AD32AC904F5E38F4FAC0ED46417062386C6 * L_0 = ___recoHandle0;
		Recognizer__ctor_m5707D0C68E07B4A737C753DDBA817377F0CDDF5E(__this, L_0, /*hidden argument*/NULL);
		CallbackFunctionDelegate_tEDE2A24857EFCB03EE502D1E6E8A9E977030EAC4 * L_1 = (CallbackFunctionDelegate_tEDE2A24857EFCB03EE502D1E6E8A9E977030EAC4 *)il2cpp_codegen_object_new(CallbackFunctionDelegate_tEDE2A24857EFCB03EE502D1E6E8A9E977030EAC4_il2cpp_TypeInfo_var);
		CallbackFunctionDelegate__ctor_m34250E2B4EB599FB96576EC76B41BA44F32482AB(L_1, NULL, (intptr_t)((intptr_t)TranslationRecognizer_FireEvent_Recognizing_mB199DD38F12DAD9246DD6B677A2E74490B49A52F_RuntimeMethod_var), /*hidden argument*/NULL);
		__this->set_recognizingCallbackDelegate_24(L_1);
		CallbackFunctionDelegate_tEDE2A24857EFCB03EE502D1E6E8A9E977030EAC4 * L_2 = (CallbackFunctionDelegate_tEDE2A24857EFCB03EE502D1E6E8A9E977030EAC4 *)il2cpp_codegen_object_new(CallbackFunctionDelegate_tEDE2A24857EFCB03EE502D1E6E8A9E977030EAC4_il2cpp_TypeInfo_var);
		CallbackFunctionDelegate__ctor_m34250E2B4EB599FB96576EC76B41BA44F32482AB(L_2, NULL, (intptr_t)((intptr_t)TranslationRecognizer_FireEvent_Recognized_mDDE062FC556E989A6D9524FEDD5CB998F3B7283A_RuntimeMethod_var), /*hidden argument*/NULL);
		__this->set_recognizedCallbackDelegate_25(L_2);
		CallbackFunctionDelegate_tEDE2A24857EFCB03EE502D1E6E8A9E977030EAC4 * L_3 = (CallbackFunctionDelegate_tEDE2A24857EFCB03EE502D1E6E8A9E977030EAC4 *)il2cpp_codegen_object_new(CallbackFunctionDelegate_tEDE2A24857EFCB03EE502D1E6E8A9E977030EAC4_il2cpp_TypeInfo_var);
		CallbackFunctionDelegate__ctor_m34250E2B4EB599FB96576EC76B41BA44F32482AB(L_3, NULL, (intptr_t)((intptr_t)TranslationRecognizer_FireEvent_Canceled_m07E5C0FDE0F3C15AE7DA029B15FAB7D3B20DEBA2_RuntimeMethod_var), /*hidden argument*/NULL);
		__this->set_canceledCallbackDelegate_26(L_3);
		CallbackFunctionDelegate_tEDE2A24857EFCB03EE502D1E6E8A9E977030EAC4 * L_4 = (CallbackFunctionDelegate_tEDE2A24857EFCB03EE502D1E6E8A9E977030EAC4 *)il2cpp_codegen_object_new(CallbackFunctionDelegate_tEDE2A24857EFCB03EE502D1E6E8A9E977030EAC4_il2cpp_TypeInfo_var);
		CallbackFunctionDelegate__ctor_m34250E2B4EB599FB96576EC76B41BA44F32482AB(L_4, NULL, (intptr_t)((intptr_t)TranslationRecognizer_FireEvent_SynthesisResult_mCE224C9BBD6BD727940FA60C9E032A92A4B3CB80_RuntimeMethod_var), /*hidden argument*/NULL);
		__this->set_translationSynthesisCallbackDelegate_27(L_4);
		InteropSafeHandle_tF14E3AD32AC904F5E38F4FAC0ED46417062386C6 * L_5 = ___recoHandle0;
		SpxExceptionThrower_ThrowIfNull_mC54EA71790A454E5785FC15C4FFBB6F457E772DB(L_5, _stringLiteral7D62C11CCF10BDFC07ACE3D149248DE3F051849C, /*hidden argument*/NULL);
		V_0 = (intptr_t)(0);
		InteropSafeHandle_tF14E3AD32AC904F5E38F4FAC0ED46417062386C6 * L_6 = ___recoHandle0;
		intptr_t L_7;
		L_7 = Recognizer_recognizer_get_property_bag_m52747647E843FD151DC9CFC39C0B3A32D58979F1(L_6, (intptr_t*)(&V_0), /*hidden argument*/NULL);
		SpxExceptionThrower_ThrowIfFail_m7269610C68DA4D960FE5E6208DF1BD9282C8F2DA((intptr_t)L_7, /*hidden argument*/NULL);
		intptr_t L_8 = V_0;
		PropertyCollection_tD6D50793A0684647D5C7067381E1365EDB3AA920 * L_9 = (PropertyCollection_tD6D50793A0684647D5C7067381E1365EDB3AA920 *)il2cpp_codegen_object_new(PropertyCollection_tD6D50793A0684647D5C7067381E1365EDB3AA920_il2cpp_TypeInfo_var);
		PropertyCollection__ctor_m298675719270993E505A055053F0D23293B517D2(L_9, (intptr_t)L_8, /*hidden argument*/NULL);
		TranslationRecognizer_set_Properties_mA93EEDAC48C7C7A2B3DC40A1B24E27DC0AF096D5_inline(__this, L_9, /*hidden argument*/NULL);
		return;
	}
}
// Microsoft.CognitiveServices.Speech.PropertyCollection Microsoft.CognitiveServices.Speech.Translation.TranslationRecognizer::get_Properties()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PropertyCollection_tD6D50793A0684647D5C7067381E1365EDB3AA920 * TranslationRecognizer_get_Properties_m05C6F57DF448914BF3B79B835985CAB57E05A845 (TranslationRecognizer_t5E2EA28023083A645CA9CB77906834987C4C9BFC * __this, const RuntimeMethod* method)
{
	{
		PropertyCollection_tD6D50793A0684647D5C7067381E1365EDB3AA920 * L_0 = __this->get_U3CPropertiesU3Ek__BackingField_23();
		return L_0;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.Translation.TranslationRecognizer::set_Properties(Microsoft.CognitiveServices.Speech.PropertyCollection)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TranslationRecognizer_set_Properties_mA93EEDAC48C7C7A2B3DC40A1B24E27DC0AF096D5 (TranslationRecognizer_t5E2EA28023083A645CA9CB77906834987C4C9BFC * __this, PropertyCollection_tD6D50793A0684647D5C7067381E1365EDB3AA920 * ___value0, const RuntimeMethod* method)
{
	{
		PropertyCollection_tD6D50793A0684647D5C7067381E1365EDB3AA920 * L_0 = ___value0;
		__this->set_U3CPropertiesU3Ek__BackingField_23(L_0);
		return;
	}
}
// System.Threading.Tasks.Task Microsoft.CognitiveServices.Speech.Translation.TranslationRecognizer::StartContinuousRecognitionAsync()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * TranslationRecognizer_StartContinuousRecognitionAsync_m75216A6022CED919F51387B819FE870F8E36829F (TranslationRecognizer_t5E2EA28023083A645CA9CB77906834987C4C9BFC * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TranslationRecognizer_U3CStartContinuousRecognitionAsyncU3Eb__45_0_mE07DE7033EAEA5EFA7E10E3C0EC5AAEDC9EE715A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_0 = (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)il2cpp_codegen_object_new(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		Action__ctor_m07BE5EE8A629FBBA52AE6356D57A0D371BE2574B(L_0, __this, (intptr_t)((intptr_t)TranslationRecognizer_U3CStartContinuousRecognitionAsyncU3Eb__45_0_mE07DE7033EAEA5EFA7E10E3C0EC5AAEDC9EE715A_RuntimeMethod_var), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_il2cpp_TypeInfo_var);
		Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * L_1;
		L_1 = Task_Run_m77F41B8D89AFD69BE94888BC2CAD5E3183A79B8D(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Threading.Tasks.Task Microsoft.CognitiveServices.Speech.Translation.TranslationRecognizer::StopContinuousRecognitionAsync()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * TranslationRecognizer_StopContinuousRecognitionAsync_m6F9636D3EC468F7CFC48094AD51173D5FF68C79E (TranslationRecognizer_t5E2EA28023083A645CA9CB77906834987C4C9BFC * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TranslationRecognizer_U3CStopContinuousRecognitionAsyncU3Eb__46_0_m28CECB898F8C69BEB9C3F8724DC2C0729EC64A8D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_0 = (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)il2cpp_codegen_object_new(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		Action__ctor_m07BE5EE8A629FBBA52AE6356D57A0D371BE2574B(L_0, __this, (intptr_t)((intptr_t)TranslationRecognizer_U3CStopContinuousRecognitionAsyncU3Eb__46_0_m28CECB898F8C69BEB9C3F8724DC2C0729EC64A8D_RuntimeMethod_var), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_il2cpp_TypeInfo_var);
		Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * L_1;
		L_1 = Task_Run_m77F41B8D89AFD69BE94888BC2CAD5E3183A79B8D(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.Translation.TranslationRecognizer::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TranslationRecognizer_Finalize_mF9ED487B22B35A0AA1D35799DFBB6919278C8B9E (TranslationRecognizer_t5E2EA28023083A645CA9CB77906834987C4C9BFC * __this, const RuntimeMethod* method)
{
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;

IL_0000:
	try
	{ // begin try (depth: 1)
		il2cpp_codegen_memory_barrier();
		((Recognizer_tF1FAA5F9E223C619151C5DA96D83F0AF7E3C9E3E *)__this)->set_isDisposing_16(1);
		VirtActionInvoker1< bool >::Invoke(5 /* System.Void Microsoft.CognitiveServices.Speech.Recognizer::Dispose(System.Boolean) */, __this, (bool)0);
		IL2CPP_LEAVE(0x19, FINALLY_0012);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0012;
	}

FINALLY_0012:
	{ // begin finally (depth: 1)
		Recognizer_Finalize_m20F81169F675CE0A27215591F1330A8853F916F8(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(18)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(18)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x19, IL_0019)
	}

IL_0019:
	{
		return;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.Translation.TranslationRecognizer::Dispose(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TranslationRecognizer_Dispose_mFB91400781FF245042A7B4852A721E149A7ECD45 (TranslationRecognizer_t5E2EA28023083A645CA9CB77906834987C4C9BFC * __this, bool ___disposing0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	InteropSafeHandle_tF14E3AD32AC904F5E38F4FAC0ED46417062386C6 * G_B7_0 = NULL;
	InteropSafeHandle_tF14E3AD32AC904F5E38F4FAC0ED46417062386C6 * G_B6_0 = NULL;
	PropertyCollection_tD6D50793A0684647D5C7067381E1365EDB3AA920 * G_B10_0 = NULL;
	PropertyCollection_tD6D50793A0684647D5C7067381E1365EDB3AA920 * G_B9_0 = NULL;
	{
		bool L_0 = ((Recognizer_tF1FAA5F9E223C619151C5DA96D83F0AF7E3C9E3E *)__this)->get_disposed_15();
		il2cpp_codegen_memory_barrier();
		if (!L_0)
		{
			goto IL_000b;
		}
	}
	{
		return;
	}

IL_000b:
	{
		InteropSafeHandle_tF14E3AD32AC904F5E38F4FAC0ED46417062386C6 * L_1 = ((Recognizer_tF1FAA5F9E223C619151C5DA96D83F0AF7E3C9E3E *)__this)->get_recoHandle_4();
		if (!L_1)
		{
			goto IL_00c6;
		}
	}
	{
		InteropSafeHandle_tF14E3AD32AC904F5E38F4FAC0ED46417062386C6 * L_2 = ((Recognizer_tF1FAA5F9E223C619151C5DA96D83F0AF7E3C9E3E *)__this)->get_recoHandle_4();
		intptr_t L_3;
		L_3 = Recognizer_recognizer_recognizing_set_callback_m0FBD65D0735F5B286FE71E2DC91C04231297B466(L_2, (CallbackFunctionDelegate_tEDE2A24857EFCB03EE502D1E6E8A9E977030EAC4 *)NULL, (intptr_t)(0), /*hidden argument*/NULL);
		SpxExceptionThrower_LogErrorIfFail_m752E6CB197597DAD0613E0AA21841F7EFD46D624((intptr_t)L_3, /*hidden argument*/NULL);
		InteropSafeHandle_tF14E3AD32AC904F5E38F4FAC0ED46417062386C6 * L_4 = ((Recognizer_tF1FAA5F9E223C619151C5DA96D83F0AF7E3C9E3E *)__this)->get_recoHandle_4();
		intptr_t L_5;
		L_5 = Recognizer_recognizer_recognized_set_callback_m262A0DD6A93CABB015B86E65229021E89C037FE9(L_4, (CallbackFunctionDelegate_tEDE2A24857EFCB03EE502D1E6E8A9E977030EAC4 *)NULL, (intptr_t)(0), /*hidden argument*/NULL);
		SpxExceptionThrower_LogErrorIfFail_m752E6CB197597DAD0613E0AA21841F7EFD46D624((intptr_t)L_5, /*hidden argument*/NULL);
		InteropSafeHandle_tF14E3AD32AC904F5E38F4FAC0ED46417062386C6 * L_6 = ((Recognizer_tF1FAA5F9E223C619151C5DA96D83F0AF7E3C9E3E *)__this)->get_recoHandle_4();
		intptr_t L_7;
		L_7 = Recognizer_recognizer_canceled_set_callback_mC5295B5F4B2ED3207AB92D2DAA94B229509EDE60(L_6, (CallbackFunctionDelegate_tEDE2A24857EFCB03EE502D1E6E8A9E977030EAC4 *)NULL, (intptr_t)(0), /*hidden argument*/NULL);
		SpxExceptionThrower_LogErrorIfFail_m752E6CB197597DAD0613E0AA21841F7EFD46D624((intptr_t)L_7, /*hidden argument*/NULL);
		InteropSafeHandle_tF14E3AD32AC904F5E38F4FAC0ED46417062386C6 * L_8 = ((Recognizer_tF1FAA5F9E223C619151C5DA96D83F0AF7E3C9E3E *)__this)->get_recoHandle_4();
		intptr_t L_9;
		L_9 = Recognizer_translator_synthesizing_audio_set_callback_m315338525553FEB680E20BCF2DB26D5542C432F6(L_8, (CallbackFunctionDelegate_tEDE2A24857EFCB03EE502D1E6E8A9E977030EAC4 *)NULL, (intptr_t)(0), /*hidden argument*/NULL);
		SpxExceptionThrower_LogErrorIfFail_m752E6CB197597DAD0613E0AA21841F7EFD46D624((intptr_t)L_9, /*hidden argument*/NULL);
		InteropSafeHandle_tF14E3AD32AC904F5E38F4FAC0ED46417062386C6 * L_10 = ((Recognizer_tF1FAA5F9E223C619151C5DA96D83F0AF7E3C9E3E *)__this)->get_recoHandle_4();
		intptr_t L_11;
		L_11 = Recognizer_recognizer_session_started_set_callback_m23B0AD337C8446036392FD763D5C81B4D43A8709(L_10, (CallbackFunctionDelegate_tEDE2A24857EFCB03EE502D1E6E8A9E977030EAC4 *)NULL, (intptr_t)(0), /*hidden argument*/NULL);
		SpxExceptionThrower_LogErrorIfFail_m752E6CB197597DAD0613E0AA21841F7EFD46D624((intptr_t)L_11, /*hidden argument*/NULL);
		InteropSafeHandle_tF14E3AD32AC904F5E38F4FAC0ED46417062386C6 * L_12 = ((Recognizer_tF1FAA5F9E223C619151C5DA96D83F0AF7E3C9E3E *)__this)->get_recoHandle_4();
		intptr_t L_13;
		L_13 = Recognizer_recognizer_session_stopped_set_callback_mEAD7E8432B82F964E1C5578C37DCDAD087A8C41B(L_12, (CallbackFunctionDelegate_tEDE2A24857EFCB03EE502D1E6E8A9E977030EAC4 *)NULL, (intptr_t)(0), /*hidden argument*/NULL);
		SpxExceptionThrower_LogErrorIfFail_m752E6CB197597DAD0613E0AA21841F7EFD46D624((intptr_t)L_13, /*hidden argument*/NULL);
		InteropSafeHandle_tF14E3AD32AC904F5E38F4FAC0ED46417062386C6 * L_14 = ((Recognizer_tF1FAA5F9E223C619151C5DA96D83F0AF7E3C9E3E *)__this)->get_recoHandle_4();
		intptr_t L_15;
		L_15 = Recognizer_recognizer_speech_start_detected_set_callback_m42E74A08ECDDA5E9BEA53AB98F170276324380F1(L_14, (CallbackFunctionDelegate_tEDE2A24857EFCB03EE502D1E6E8A9E977030EAC4 *)NULL, (intptr_t)(0), /*hidden argument*/NULL);
		SpxExceptionThrower_LogErrorIfFail_m752E6CB197597DAD0613E0AA21841F7EFD46D624((intptr_t)L_15, /*hidden argument*/NULL);
		InteropSafeHandle_tF14E3AD32AC904F5E38F4FAC0ED46417062386C6 * L_16 = ((Recognizer_tF1FAA5F9E223C619151C5DA96D83F0AF7E3C9E3E *)__this)->get_recoHandle_4();
		intptr_t L_17;
		L_17 = Recognizer_recognizer_speech_end_detected_set_callback_m54E9AA603B97AB97F61866B60D875BA4DDEC25CE(L_16, (CallbackFunctionDelegate_tEDE2A24857EFCB03EE502D1E6E8A9E977030EAC4 *)NULL, (intptr_t)(0), /*hidden argument*/NULL);
		SpxExceptionThrower_LogErrorIfFail_m752E6CB197597DAD0613E0AA21841F7EFD46D624((intptr_t)L_17, /*hidden argument*/NULL);
	}

IL_00c6:
	{
		bool L_18 = ___disposing0;
		if (!L_18)
		{
			goto IL_00eb;
		}
	}
	{
		InteropSafeHandle_tF14E3AD32AC904F5E38F4FAC0ED46417062386C6 * L_19 = ((Recognizer_tF1FAA5F9E223C619151C5DA96D83F0AF7E3C9E3E *)__this)->get_recoHandle_4();
		InteropSafeHandle_tF14E3AD32AC904F5E38F4FAC0ED46417062386C6 * L_20 = L_19;
		G_B6_0 = L_20;
		if (L_20)
		{
			G_B7_0 = L_20;
			goto IL_00d5;
		}
	}
	{
		goto IL_00da;
	}

IL_00d5:
	{
		NullCheck(G_B7_0);
		SafeHandle_Dispose_mFFFB9D0CAE3EEE02F0D3DA250D5E52F0DD51B098(G_B7_0, /*hidden argument*/NULL);
	}

IL_00da:
	{
		PropertyCollection_tD6D50793A0684647D5C7067381E1365EDB3AA920 * L_21;
		L_21 = TranslationRecognizer_get_Properties_m05C6F57DF448914BF3B79B835985CAB57E05A845_inline(__this, /*hidden argument*/NULL);
		PropertyCollection_tD6D50793A0684647D5C7067381E1365EDB3AA920 * L_22 = L_21;
		G_B9_0 = L_22;
		if (L_22)
		{
			G_B10_0 = L_22;
			goto IL_00e6;
		}
	}
	{
		goto IL_00eb;
	}

IL_00e6:
	{
		NullCheck(G_B10_0);
		VirtActionInvoker0::Invoke(4 /* System.Void Microsoft.CognitiveServices.Speech.PropertyCollection::Close() */, G_B10_0);
	}

IL_00eb:
	{
		__this->set_recognizingCallbackDelegate_24((CallbackFunctionDelegate_tEDE2A24857EFCB03EE502D1E6E8A9E977030EAC4 *)NULL);
		__this->set_recognizedCallbackDelegate_25((CallbackFunctionDelegate_tEDE2A24857EFCB03EE502D1E6E8A9E977030EAC4 *)NULL);
		__this->set_canceledCallbackDelegate_26((CallbackFunctionDelegate_tEDE2A24857EFCB03EE502D1E6E8A9E977030EAC4 *)NULL);
		__this->set_translationSynthesisCallbackDelegate_27((CallbackFunctionDelegate_tEDE2A24857EFCB03EE502D1E6E8A9E977030EAC4 *)NULL);
		__this->set_audioInputKeepAlive_28((AudioConfig_tF4EFBB8FE00E5C7569A7F087C11D4D85439A9E45 *)NULL);
		bool L_23 = ___disposing0;
		Recognizer_Dispose_m087FE4E3ED875BD3BF69DA66606404145E3C0400(__this, L_23, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.Translation.TranslationRecognizer::FireEvent_Recognizing(System.IntPtr,System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TranslationRecognizer_FireEvent_Recognizing_mB199DD38F12DAD9246DD6B677A2E74490B49A52F (intptr_t ___hreco0, intptr_t ___hevent1, intptr_t ___pvContext2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_Invoke_m737581193400ABBF01056D8B1A25FBA1CFE9698E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InteropSafeHandle_GetObjectFromWeakHandle_TisTranslationRecognizer_t5E2EA28023083A645CA9CB77906834987C4C9BFC_mD509A25F82BB62B50340FD5A38BA5CEC1E6E87AB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TranslationRecognitionEventArgs_t9801CC0D44EB6958FE731328096A8220591EB9E2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	TranslationRecognizer_t5E2EA28023083A645CA9CB77906834987C4C9BFC * V_0 = NULL;
	TranslationRecognitionEventArgs_t9801CC0D44EB6958FE731328096A8220591EB9E2 * V_1 = NULL;
	Exception_t * V_2 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 3> __leave_targets;
	EventHandler_1_t0304893ABC1043DC90AF47CDE2ACD2D6DB2B7487 * G_B5_0 = NULL;
	EventHandler_1_t0304893ABC1043DC90AF47CDE2ACD2D6DB2B7487 * G_B4_0 = NULL;

IL_0000:
	try
	{ // begin try (depth: 1)
		{
			intptr_t L_0 = ___pvContext2;
			TranslationRecognizer_t5E2EA28023083A645CA9CB77906834987C4C9BFC * L_1;
			L_1 = InteropSafeHandle_GetObjectFromWeakHandle_TisTranslationRecognizer_t5E2EA28023083A645CA9CB77906834987C4C9BFC_mD509A25F82BB62B50340FD5A38BA5CEC1E6E87AB((intptr_t)L_0, /*hidden argument*/InteropSafeHandle_GetObjectFromWeakHandle_TisTranslationRecognizer_t5E2EA28023083A645CA9CB77906834987C4C9BFC_mD509A25F82BB62B50340FD5A38BA5CEC1E6E87AB_RuntimeMethod_var);
			V_0 = L_1;
			TranslationRecognizer_t5E2EA28023083A645CA9CB77906834987C4C9BFC * L_2 = V_0;
			if (!L_2)
			{
				goto IL_0014;
			}
		}

IL_000a:
		{
			TranslationRecognizer_t5E2EA28023083A645CA9CB77906834987C4C9BFC * L_3 = V_0;
			NullCheck(L_3);
			bool L_4 = ((Recognizer_tF1FAA5F9E223C619151C5DA96D83F0AF7E3C9E3E *)L_3)->get_isDisposing_16();
			il2cpp_codegen_memory_barrier();
			if (!L_4)
			{
				goto IL_0016;
			}
		}

IL_0014:
		{
			goto IL_0040;
		}

IL_0016:
		{
			intptr_t L_5 = ___hevent1;
			TranslationRecognitionEventArgs_t9801CC0D44EB6958FE731328096A8220591EB9E2 * L_6 = (TranslationRecognitionEventArgs_t9801CC0D44EB6958FE731328096A8220591EB9E2 *)il2cpp_codegen_object_new(TranslationRecognitionEventArgs_t9801CC0D44EB6958FE731328096A8220591EB9E2_il2cpp_TypeInfo_var);
			TranslationRecognitionEventArgs__ctor_mE538F958D191E2A0ABAA76F0B10516C08846DD52(L_6, (intptr_t)L_5, /*hidden argument*/NULL);
			V_1 = L_6;
			TranslationRecognizer_t5E2EA28023083A645CA9CB77906834987C4C9BFC * L_7 = V_0;
			NullCheck(L_7);
			EventHandler_1_t0304893ABC1043DC90AF47CDE2ACD2D6DB2B7487 * L_8 = L_7->get__Recognizing_19();
			EventHandler_1_t0304893ABC1043DC90AF47CDE2ACD2D6DB2B7487 * L_9 = L_8;
			G_B4_0 = L_9;
			if (L_9)
			{
				G_B5_0 = L_9;
				goto IL_0029;
			}
		}

IL_0026:
		{
			goto IL_0030;
		}

IL_0029:
		{
			TranslationRecognizer_t5E2EA28023083A645CA9CB77906834987C4C9BFC * L_10 = V_0;
			TranslationRecognitionEventArgs_t9801CC0D44EB6958FE731328096A8220591EB9E2 * L_11 = V_1;
			NullCheck(G_B5_0);
			EventHandler_1_Invoke_m737581193400ABBF01056D8B1A25FBA1CFE9698E(G_B5_0, L_10, L_11, /*hidden argument*/EventHandler_1_Invoke_m737581193400ABBF01056D8B1A25FBA1CFE9698E_RuntimeMethod_var);
		}

IL_0030:
		{
			goto IL_0040;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0032;
		}
		throw e;
	}

CATCH_0032:
	{ // begin catch(System.Exception)
		V_2 = ((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *));
		Exception_t * L_12 = V_2;
		NullCheck(L_12);
		String_t* L_13;
		L_13 = VirtFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Exception::get_Message() */, L_12);
		SpxExceptionThrower_LogError_m238C27C8D305C674179F87D2C22B9F9780CA91E1(L_13, /*hidden argument*/NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0040;
	} // end catch (depth: 1)

IL_0040:
	{
		return;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.Translation.TranslationRecognizer::FireEvent_Recognized(System.IntPtr,System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TranslationRecognizer_FireEvent_Recognized_mDDE062FC556E989A6D9524FEDD5CB998F3B7283A (intptr_t ___hreco0, intptr_t ___hevent1, intptr_t ___pvContext2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_Invoke_m737581193400ABBF01056D8B1A25FBA1CFE9698E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InteropSafeHandle_GetObjectFromWeakHandle_TisTranslationRecognizer_t5E2EA28023083A645CA9CB77906834987C4C9BFC_mD509A25F82BB62B50340FD5A38BA5CEC1E6E87AB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TranslationRecognitionEventArgs_t9801CC0D44EB6958FE731328096A8220591EB9E2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	TranslationRecognizer_t5E2EA28023083A645CA9CB77906834987C4C9BFC * V_0 = NULL;
	TranslationRecognitionEventArgs_t9801CC0D44EB6958FE731328096A8220591EB9E2 * V_1 = NULL;
	Exception_t * V_2 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 3> __leave_targets;
	EventHandler_1_t0304893ABC1043DC90AF47CDE2ACD2D6DB2B7487 * G_B5_0 = NULL;
	EventHandler_1_t0304893ABC1043DC90AF47CDE2ACD2D6DB2B7487 * G_B4_0 = NULL;

IL_0000:
	try
	{ // begin try (depth: 1)
		{
			intptr_t L_0 = ___pvContext2;
			TranslationRecognizer_t5E2EA28023083A645CA9CB77906834987C4C9BFC * L_1;
			L_1 = InteropSafeHandle_GetObjectFromWeakHandle_TisTranslationRecognizer_t5E2EA28023083A645CA9CB77906834987C4C9BFC_mD509A25F82BB62B50340FD5A38BA5CEC1E6E87AB((intptr_t)L_0, /*hidden argument*/InteropSafeHandle_GetObjectFromWeakHandle_TisTranslationRecognizer_t5E2EA28023083A645CA9CB77906834987C4C9BFC_mD509A25F82BB62B50340FD5A38BA5CEC1E6E87AB_RuntimeMethod_var);
			V_0 = L_1;
			TranslationRecognizer_t5E2EA28023083A645CA9CB77906834987C4C9BFC * L_2 = V_0;
			if (!L_2)
			{
				goto IL_0014;
			}
		}

IL_000a:
		{
			TranslationRecognizer_t5E2EA28023083A645CA9CB77906834987C4C9BFC * L_3 = V_0;
			NullCheck(L_3);
			bool L_4 = ((Recognizer_tF1FAA5F9E223C619151C5DA96D83F0AF7E3C9E3E *)L_3)->get_isDisposing_16();
			il2cpp_codegen_memory_barrier();
			if (!L_4)
			{
				goto IL_0016;
			}
		}

IL_0014:
		{
			goto IL_0040;
		}

IL_0016:
		{
			intptr_t L_5 = ___hevent1;
			TranslationRecognitionEventArgs_t9801CC0D44EB6958FE731328096A8220591EB9E2 * L_6 = (TranslationRecognitionEventArgs_t9801CC0D44EB6958FE731328096A8220591EB9E2 *)il2cpp_codegen_object_new(TranslationRecognitionEventArgs_t9801CC0D44EB6958FE731328096A8220591EB9E2_il2cpp_TypeInfo_var);
			TranslationRecognitionEventArgs__ctor_mE538F958D191E2A0ABAA76F0B10516C08846DD52(L_6, (intptr_t)L_5, /*hidden argument*/NULL);
			V_1 = L_6;
			TranslationRecognizer_t5E2EA28023083A645CA9CB77906834987C4C9BFC * L_7 = V_0;
			NullCheck(L_7);
			EventHandler_1_t0304893ABC1043DC90AF47CDE2ACD2D6DB2B7487 * L_8 = L_7->get__Recognized_20();
			EventHandler_1_t0304893ABC1043DC90AF47CDE2ACD2D6DB2B7487 * L_9 = L_8;
			G_B4_0 = L_9;
			if (L_9)
			{
				G_B5_0 = L_9;
				goto IL_0029;
			}
		}

IL_0026:
		{
			goto IL_0030;
		}

IL_0029:
		{
			TranslationRecognizer_t5E2EA28023083A645CA9CB77906834987C4C9BFC * L_10 = V_0;
			TranslationRecognitionEventArgs_t9801CC0D44EB6958FE731328096A8220591EB9E2 * L_11 = V_1;
			NullCheck(G_B5_0);
			EventHandler_1_Invoke_m737581193400ABBF01056D8B1A25FBA1CFE9698E(G_B5_0, L_10, L_11, /*hidden argument*/EventHandler_1_Invoke_m737581193400ABBF01056D8B1A25FBA1CFE9698E_RuntimeMethod_var);
		}

IL_0030:
		{
			goto IL_0040;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0032;
		}
		throw e;
	}

CATCH_0032:
	{ // begin catch(System.Exception)
		V_2 = ((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *));
		Exception_t * L_12 = V_2;
		NullCheck(L_12);
		String_t* L_13;
		L_13 = VirtFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Exception::get_Message() */, L_12);
		SpxExceptionThrower_LogError_m238C27C8D305C674179F87D2C22B9F9780CA91E1(L_13, /*hidden argument*/NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0040;
	} // end catch (depth: 1)

IL_0040:
	{
		return;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.Translation.TranslationRecognizer::FireEvent_Canceled(System.IntPtr,System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TranslationRecognizer_FireEvent_Canceled_m07E5C0FDE0F3C15AE7DA029B15FAB7D3B20DEBA2 (intptr_t ___hreco0, intptr_t ___hevent1, intptr_t ___pvContext2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_Invoke_m543D7CD4DFE3F387FE31D570F06284F268EA3E65_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InteropSafeHandle_GetObjectFromWeakHandle_TisTranslationRecognizer_t5E2EA28023083A645CA9CB77906834987C4C9BFC_mD509A25F82BB62B50340FD5A38BA5CEC1E6E87AB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TranslationRecognitionCanceledEventArgs_tF8364DAABB1345D5D552BC9161B2681056902434_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	TranslationRecognizer_t5E2EA28023083A645CA9CB77906834987C4C9BFC * V_0 = NULL;
	TranslationRecognitionCanceledEventArgs_tF8364DAABB1345D5D552BC9161B2681056902434 * V_1 = NULL;
	Exception_t * V_2 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 3> __leave_targets;
	EventHandler_1_t7D8AF3CB447F4C1AA3E3A0C2ABF74030E97A10FC * G_B5_0 = NULL;
	EventHandler_1_t7D8AF3CB447F4C1AA3E3A0C2ABF74030E97A10FC * G_B4_0 = NULL;

IL_0000:
	try
	{ // begin try (depth: 1)
		{
			intptr_t L_0 = ___pvContext2;
			TranslationRecognizer_t5E2EA28023083A645CA9CB77906834987C4C9BFC * L_1;
			L_1 = InteropSafeHandle_GetObjectFromWeakHandle_TisTranslationRecognizer_t5E2EA28023083A645CA9CB77906834987C4C9BFC_mD509A25F82BB62B50340FD5A38BA5CEC1E6E87AB((intptr_t)L_0, /*hidden argument*/InteropSafeHandle_GetObjectFromWeakHandle_TisTranslationRecognizer_t5E2EA28023083A645CA9CB77906834987C4C9BFC_mD509A25F82BB62B50340FD5A38BA5CEC1E6E87AB_RuntimeMethod_var);
			V_0 = L_1;
			TranslationRecognizer_t5E2EA28023083A645CA9CB77906834987C4C9BFC * L_2 = V_0;
			if (!L_2)
			{
				goto IL_0014;
			}
		}

IL_000a:
		{
			TranslationRecognizer_t5E2EA28023083A645CA9CB77906834987C4C9BFC * L_3 = V_0;
			NullCheck(L_3);
			bool L_4 = ((Recognizer_tF1FAA5F9E223C619151C5DA96D83F0AF7E3C9E3E *)L_3)->get_isDisposing_16();
			il2cpp_codegen_memory_barrier();
			if (!L_4)
			{
				goto IL_0016;
			}
		}

IL_0014:
		{
			goto IL_0040;
		}

IL_0016:
		{
			intptr_t L_5 = ___hevent1;
			TranslationRecognitionCanceledEventArgs_tF8364DAABB1345D5D552BC9161B2681056902434 * L_6 = (TranslationRecognitionCanceledEventArgs_tF8364DAABB1345D5D552BC9161B2681056902434 *)il2cpp_codegen_object_new(TranslationRecognitionCanceledEventArgs_tF8364DAABB1345D5D552BC9161B2681056902434_il2cpp_TypeInfo_var);
			TranslationRecognitionCanceledEventArgs__ctor_m232ECE91C247E37F521EB16C1C0D6F83242D712E(L_6, (intptr_t)L_5, /*hidden argument*/NULL);
			V_1 = L_6;
			TranslationRecognizer_t5E2EA28023083A645CA9CB77906834987C4C9BFC * L_7 = V_0;
			NullCheck(L_7);
			EventHandler_1_t7D8AF3CB447F4C1AA3E3A0C2ABF74030E97A10FC * L_8 = L_7->get__Canceled_21();
			EventHandler_1_t7D8AF3CB447F4C1AA3E3A0C2ABF74030E97A10FC * L_9 = L_8;
			G_B4_0 = L_9;
			if (L_9)
			{
				G_B5_0 = L_9;
				goto IL_0029;
			}
		}

IL_0026:
		{
			goto IL_0030;
		}

IL_0029:
		{
			TranslationRecognizer_t5E2EA28023083A645CA9CB77906834987C4C9BFC * L_10 = V_0;
			TranslationRecognitionCanceledEventArgs_tF8364DAABB1345D5D552BC9161B2681056902434 * L_11 = V_1;
			NullCheck(G_B5_0);
			EventHandler_1_Invoke_m543D7CD4DFE3F387FE31D570F06284F268EA3E65(G_B5_0, L_10, L_11, /*hidden argument*/EventHandler_1_Invoke_m543D7CD4DFE3F387FE31D570F06284F268EA3E65_RuntimeMethod_var);
		}

IL_0030:
		{
			goto IL_0040;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0032;
		}
		throw e;
	}

CATCH_0032:
	{ // begin catch(System.Exception)
		V_2 = ((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *));
		Exception_t * L_12 = V_2;
		NullCheck(L_12);
		String_t* L_13;
		L_13 = VirtFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Exception::get_Message() */, L_12);
		SpxExceptionThrower_LogError_m238C27C8D305C674179F87D2C22B9F9780CA91E1(L_13, /*hidden argument*/NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0040;
	} // end catch (depth: 1)

IL_0040:
	{
		return;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.Translation.TranslationRecognizer::FireEvent_SynthesisResult(System.IntPtr,System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TranslationRecognizer_FireEvent_SynthesisResult_mCE224C9BBD6BD727940FA60C9E032A92A4B3CB80 (intptr_t ___hreco0, intptr_t ___hevent1, intptr_t ___pvContext2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_Invoke_m8062F2814E8CB7B00CA23C1A82B331E1738EDCE5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InteropSafeHandle_GetObjectFromWeakHandle_TisTranslationRecognizer_t5E2EA28023083A645CA9CB77906834987C4C9BFC_mD509A25F82BB62B50340FD5A38BA5CEC1E6E87AB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TranslationSynthesisEventArgs_t975B943C527D3EB226F627E98ACDC396F0ECDD36_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	TranslationRecognizer_t5E2EA28023083A645CA9CB77906834987C4C9BFC * V_0 = NULL;
	TranslationSynthesisEventArgs_t975B943C527D3EB226F627E98ACDC396F0ECDD36 * V_1 = NULL;
	Exception_t * V_2 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 3> __leave_targets;
	EventHandler_1_t3BEF748549CB01FA6B642C4A136FCCE2948599FF * G_B5_0 = NULL;
	EventHandler_1_t3BEF748549CB01FA6B642C4A136FCCE2948599FF * G_B4_0 = NULL;

IL_0000:
	try
	{ // begin try (depth: 1)
		{
			intptr_t L_0 = ___pvContext2;
			TranslationRecognizer_t5E2EA28023083A645CA9CB77906834987C4C9BFC * L_1;
			L_1 = InteropSafeHandle_GetObjectFromWeakHandle_TisTranslationRecognizer_t5E2EA28023083A645CA9CB77906834987C4C9BFC_mD509A25F82BB62B50340FD5A38BA5CEC1E6E87AB((intptr_t)L_0, /*hidden argument*/InteropSafeHandle_GetObjectFromWeakHandle_TisTranslationRecognizer_t5E2EA28023083A645CA9CB77906834987C4C9BFC_mD509A25F82BB62B50340FD5A38BA5CEC1E6E87AB_RuntimeMethod_var);
			V_0 = L_1;
			TranslationRecognizer_t5E2EA28023083A645CA9CB77906834987C4C9BFC * L_2 = V_0;
			if (!L_2)
			{
				goto IL_0014;
			}
		}

IL_000a:
		{
			TranslationRecognizer_t5E2EA28023083A645CA9CB77906834987C4C9BFC * L_3 = V_0;
			NullCheck(L_3);
			bool L_4 = ((Recognizer_tF1FAA5F9E223C619151C5DA96D83F0AF7E3C9E3E *)L_3)->get_isDisposing_16();
			il2cpp_codegen_memory_barrier();
			if (!L_4)
			{
				goto IL_0016;
			}
		}

IL_0014:
		{
			goto IL_0040;
		}

IL_0016:
		{
			intptr_t L_5 = ___hevent1;
			TranslationSynthesisEventArgs_t975B943C527D3EB226F627E98ACDC396F0ECDD36 * L_6 = (TranslationSynthesisEventArgs_t975B943C527D3EB226F627E98ACDC396F0ECDD36 *)il2cpp_codegen_object_new(TranslationSynthesisEventArgs_t975B943C527D3EB226F627E98ACDC396F0ECDD36_il2cpp_TypeInfo_var);
			TranslationSynthesisEventArgs__ctor_m4074DC4145DFBC5CEA391A5F19A4F2923D620323(L_6, (intptr_t)L_5, /*hidden argument*/NULL);
			V_1 = L_6;
			TranslationRecognizer_t5E2EA28023083A645CA9CB77906834987C4C9BFC * L_7 = V_0;
			NullCheck(L_7);
			EventHandler_1_t3BEF748549CB01FA6B642C4A136FCCE2948599FF * L_8 = L_7->get__Synthesizing_22();
			EventHandler_1_t3BEF748549CB01FA6B642C4A136FCCE2948599FF * L_9 = L_8;
			G_B4_0 = L_9;
			if (L_9)
			{
				G_B5_0 = L_9;
				goto IL_0029;
			}
		}

IL_0026:
		{
			goto IL_0030;
		}

IL_0029:
		{
			TranslationRecognizer_t5E2EA28023083A645CA9CB77906834987C4C9BFC * L_10 = V_0;
			TranslationSynthesisEventArgs_t975B943C527D3EB226F627E98ACDC396F0ECDD36 * L_11 = V_1;
			NullCheck(G_B5_0);
			EventHandler_1_Invoke_m8062F2814E8CB7B00CA23C1A82B331E1738EDCE5(G_B5_0, L_10, L_11, /*hidden argument*/EventHandler_1_Invoke_m8062F2814E8CB7B00CA23C1A82B331E1738EDCE5_RuntimeMethod_var);
		}

IL_0030:
		{
			goto IL_0040;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0032;
		}
		throw e;
	}

CATCH_0032:
	{ // begin catch(System.Exception)
		V_2 = ((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *));
		Exception_t * L_12 = V_2;
		NullCheck(L_12);
		String_t* L_13;
		L_13 = VirtFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Exception::get_Message() */, L_12);
		SpxExceptionThrower_LogError_m238C27C8D305C674179F87D2C22B9F9780CA91E1(L_13, /*hidden argument*/NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0040;
	} // end catch (depth: 1)

IL_0040:
	{
		return;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.Translation.TranslationRecognizer::<StartContinuousRecognitionAsync>b__45_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TranslationRecognizer_U3CStartContinuousRecognitionAsyncU3Eb__45_0_mE07DE7033EAEA5EFA7E10E3C0EC5AAEDC9EE715A (TranslationRecognizer_t5E2EA28023083A645CA9CB77906834987C4C9BFC * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Recognizer_StartContinuousRecognition_m619E72043511237D3E1C58D62E375DAA4F1ACA9C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_0 = (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)il2cpp_codegen_object_new(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		Action__ctor_m07BE5EE8A629FBBA52AE6356D57A0D371BE2574B(L_0, __this, (intptr_t)((intptr_t)Recognizer_StartContinuousRecognition_m619E72043511237D3E1C58D62E375DAA4F1ACA9C_RuntimeMethod_var), /*hidden argument*/NULL);
		Recognizer_DoAsyncRecognitionAction_m2268106F48438234958D981F40C8036136AFD5CF(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.Translation.TranslationRecognizer::<StopContinuousRecognitionAsync>b__46_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TranslationRecognizer_U3CStopContinuousRecognitionAsyncU3Eb__46_0_m28CECB898F8C69BEB9C3F8724DC2C0729EC64A8D (TranslationRecognizer_t5E2EA28023083A645CA9CB77906834987C4C9BFC * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Recognizer_StopContinuousRecognition_m31050BE671DCB3A02B2709C5D37B00422795AF30_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_0 = (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)il2cpp_codegen_object_new(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		Action__ctor_m07BE5EE8A629FBBA52AE6356D57A0D371BE2574B(L_0, __this, (intptr_t)((intptr_t)Recognizer_StopContinuousRecognition_m31050BE671DCB3A02B2709C5D37B00422795AF30_RuntimeMethod_var), /*hidden argument*/NULL);
		Recognizer_DoAsyncRecognitionAction_m2268106F48438234958D981F40C8036136AFD5CF(__this, L_0, /*hidden argument*/NULL);
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
// System.Void Microsoft.CognitiveServices.Speech.Translation.TranslationSynthesisEventArgs::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TranslationSynthesisEventArgs__ctor_m4074DC4145DFBC5CEA391A5F19A4F2923D620323 (TranslationSynthesisEventArgs_t975B943C527D3EB226F627E98ACDC396F0ECDD36 * __this, intptr_t ___eventHandlePtr0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TranslationSynthesisResult_t243554A291C3C9A4349B5A0F15AFD7B984E944EE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		intptr_t L_0 = ___eventHandlePtr0;
		SessionEventArgs__ctor_mA2BA5B62E7BCD52804ACA274FE514BF94DBB9891(__this, (intptr_t)L_0, /*hidden argument*/NULL);
		V_0 = (intptr_t)(0);
		InteropSafeHandle_tF14E3AD32AC904F5E38F4FAC0ED46417062386C6 * L_1 = ((SessionEventArgs_t720E6DA982AD7DE7933835DEBBECD8B78F28CAB1 *)__this)->get_eventHandle_1();
		intptr_t L_2;
		L_2 = Recognizer_recognizer_recognition_event_get_result_m95C54811DD6BF44F99C1BF4AFA3506EB119BFBA0(L_1, (intptr_t*)(&V_0), /*hidden argument*/NULL);
		SpxExceptionThrower_ThrowIfFail_m7269610C68DA4D960FE5E6208DF1BD9282C8F2DA((intptr_t)L_2, /*hidden argument*/NULL);
		intptr_t L_3 = V_0;
		TranslationSynthesisResult_t243554A291C3C9A4349B5A0F15AFD7B984E944EE * L_4 = (TranslationSynthesisResult_t243554A291C3C9A4349B5A0F15AFD7B984E944EE *)il2cpp_codegen_object_new(TranslationSynthesisResult_t243554A291C3C9A4349B5A0F15AFD7B984E944EE_il2cpp_TypeInfo_var);
		TranslationSynthesisResult__ctor_mE3EAA81170394CEC3F96EC51CD627DCCAB73BFE9(L_4, (intptr_t)L_3, /*hidden argument*/NULL);
		__this->set_U3CResultU3Ek__BackingField_5(L_4);
		return;
	}
}
// Microsoft.CognitiveServices.Speech.Translation.TranslationSynthesisResult Microsoft.CognitiveServices.Speech.Translation.TranslationSynthesisEventArgs::get_Result()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TranslationSynthesisResult_t243554A291C3C9A4349B5A0F15AFD7B984E944EE * TranslationSynthesisEventArgs_get_Result_mDB3D5F4D8AED490B08C9AAA14947499BEC7AFBD9 (TranslationSynthesisEventArgs_t975B943C527D3EB226F627E98ACDC396F0ECDD36 * __this, const RuntimeMethod* method)
{
	{
		TranslationSynthesisResult_t243554A291C3C9A4349B5A0F15AFD7B984E944EE * L_0 = __this->get_U3CResultU3Ek__BackingField_5();
		return L_0;
	}
}
// System.String Microsoft.CognitiveServices.Speech.Translation.TranslationSynthesisEventArgs::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* TranslationSynthesisEventArgs_ToString_m23837A1767AAA522620C5B996CD6FA86D1053442 (TranslationSynthesisEventArgs_t975B943C527D3EB226F627E98ACDC396F0ECDD36 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral07657094245180507A188C63C49A070BC8752EA2);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_il2cpp_TypeInfo_var);
		CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * L_0;
		L_0 = CultureInfo_get_InvariantCulture_m9FAAFAF8A00091EE1FCB7098AD3F163ECDF02164(/*hidden argument*/NULL);
		String_t* L_1;
		L_1 = SessionEventArgs_get_SessionId_m8C680FABDADC335561EA0F07CEA0F2F38A968960_inline(__this, /*hidden argument*/NULL);
		TranslationSynthesisResult_t243554A291C3C9A4349B5A0F15AFD7B984E944EE * L_2;
		L_2 = TranslationSynthesisEventArgs_get_Result_mDB3D5F4D8AED490B08C9AAA14947499BEC7AFBD9_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		String_t* L_3;
		L_3 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_2);
		String_t* L_4;
		L_4 = String_Format_m8892FAD3E9F1E11E6176840DC1EA0C40DF1F0C2B(L_0, _stringLiteral07657094245180507A188C63C49A070BC8752EA2, L_1, L_3, /*hidden argument*/NULL);
		return L_4;
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
// System.Void Microsoft.CognitiveServices.Speech.Translation.TranslationSynthesisResult::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TranslationSynthesisResult__ctor_mE3EAA81170394CEC3F96EC51CD627DCCAB73BFE9 (TranslationSynthesisResult_t243554A291C3C9A4349B5A0F15AFD7B984E944EE * __this, intptr_t ___resultPtr0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_m86406577D438B78D85E03BECFDC8AB3C7696A1E7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HandleRelease_t981DDC9B764758F8D9EAE886A7255AC109F86E59_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InteropSafeHandle_tF14E3AD32AC904F5E38F4FAC0ED46417062386C6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RecognitionResult_recognizer_result_handle_release_m2390D80CFD66650438F1B05545EB439A5CAD56EA_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0;
		L_0 = Array_Empty_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_m86406577D438B78D85E03BECFDC8AB3C7696A1E7_inline(/*hidden argument*/Array_Empty_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_m86406577D438B78D85E03BECFDC8AB3C7696A1E7_RuntimeMethod_var);
		__this->set_audio_1(L_0);
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		intptr_t L_1 = ___resultPtr0;
		SpxExceptionThrower_ThrowIfNull_m89216C9938C8E733BC6119E3B3F84252B0BB101B((intptr_t)L_1, (String_t*)NULL, /*hidden argument*/NULL);
		intptr_t L_2 = ___resultPtr0;
		HandleRelease_t981DDC9B764758F8D9EAE886A7255AC109F86E59 * L_3 = (HandleRelease_t981DDC9B764758F8D9EAE886A7255AC109F86E59 *)il2cpp_codegen_object_new(HandleRelease_t981DDC9B764758F8D9EAE886A7255AC109F86E59_il2cpp_TypeInfo_var);
		HandleRelease__ctor_m033F205B7379518DCCF337635EAC5AAC9B2A42E9(L_3, NULL, (intptr_t)((intptr_t)RecognitionResult_recognizer_result_handle_release_m2390D80CFD66650438F1B05545EB439A5CAD56EA_RuntimeMethod_var), /*hidden argument*/NULL);
		InteropSafeHandle_tF14E3AD32AC904F5E38F4FAC0ED46417062386C6 * L_4 = (InteropSafeHandle_tF14E3AD32AC904F5E38F4FAC0ED46417062386C6 *)il2cpp_codegen_object_new(InteropSafeHandle_tF14E3AD32AC904F5E38F4FAC0ED46417062386C6_il2cpp_TypeInfo_var);
		InteropSafeHandle__ctor_mEEBFD93E8F421872BAE76137A07486B9BBD3D156(L_4, (intptr_t)L_2, L_3, /*hidden argument*/NULL);
		__this->set_resultHandle_2(L_4);
		V_0 = 0;
		InteropSafeHandle_tF14E3AD32AC904F5E38F4FAC0ED46417062386C6 * L_5 = __this->get_resultHandle_2();
		intptr_t L_6;
		L_6 = RecognitionResult_result_get_reason_m56E4A15B2D6F95EFF1E69838F4A0F9B6CAF4CD8A(L_5, (int32_t*)(&V_0), /*hidden argument*/NULL);
		SpxExceptionThrower_ThrowIfFail_m7269610C68DA4D960FE5E6208DF1BD9282C8F2DA((intptr_t)L_6, /*hidden argument*/NULL);
		int32_t L_7 = V_0;
		__this->set_U3CReasonU3Ek__BackingField_0(L_7);
		InteropSafeHandle_tF14E3AD32AC904F5E38F4FAC0ED46417062386C6 * L_8 = __this->get_resultHandle_2();
		TranslationSynthesisResult_GetAudioData_m24E5A8CD2E73B2361238C220CE64BCB588611CC4(__this, L_8, /*hidden argument*/NULL);
		return;
	}
}
// Microsoft.CognitiveServices.Speech.ResultReason Microsoft.CognitiveServices.Speech.Translation.TranslationSynthesisResult::get_Reason()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TranslationSynthesisResult_get_Reason_mFDC37352957A9BB0B79CE705DB24CAC5AEC39AF7 (TranslationSynthesisResult_t243554A291C3C9A4349B5A0F15AFD7B984E944EE * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CReasonU3Ek__BackingField_0();
		return L_0;
	}
}
// System.String Microsoft.CognitiveServices.Speech.Translation.TranslationSynthesisResult::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* TranslationSynthesisResult_ToString_mA1C1AF2002DF897B5BDBEAEFD3A3D96DA7AC8949 (TranslationSynthesisResult_t243554A291C3C9A4349B5A0F15AFD7B984E944EE * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ResultReason_tB8FC6492BDC104DC14FE8E50C557C68A35466BF5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC6072FBFC31FE8C1C066271F63752A3B9B67AAD9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC7EBE4EAAB6D68E9347038ACD59F39A9DE2D2040);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_il2cpp_TypeInfo_var);
		CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * L_0;
		L_0 = CultureInfo_get_InvariantCulture_m9FAAFAF8A00091EE1FCB7098AD3F163ECDF02164(/*hidden argument*/NULL);
		int32_t L_1;
		L_1 = TranslationSynthesisResult_get_Reason_mFDC37352957A9BB0B79CE705DB24CAC5AEC39AF7_inline(__this, /*hidden argument*/NULL);
		int32_t L_2 = L_1;
		RuntimeObject * L_3 = Box(ResultReason_tB8FC6492BDC104DC14FE8E50C557C68A35466BF5_il2cpp_TypeInfo_var, &L_2);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_4 = __this->get_audio_1();
		NullCheck(L_4);
		int32_t L_5 = ((int32_t)((int32_t)(((RuntimeArray*)L_4)->max_length)));
		RuntimeObject * L_6 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_5);
		String_t* L_7;
		L_7 = String_Format_m8892FAD3E9F1E11E6176840DC1EA0C40DF1F0C2B(L_0, _stringLiteralC7EBE4EAAB6D68E9347038ACD59F39A9DE2D2040, L_3, L_6, /*hidden argument*/NULL);
		V_0 = L_7;
		int32_t L_8;
		L_8 = TranslationSynthesisResult_get_Reason_mFDC37352957A9BB0B79CE705DB24CAC5AEC39AF7_inline(__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_8) == ((uint32_t)((int32_t)9)))))
		{
			goto IL_004d;
		}
	}
	{
		String_t* L_9 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_il2cpp_TypeInfo_var);
		CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * L_10;
		L_10 = CultureInfo_get_InvariantCulture_m9FAAFAF8A00091EE1FCB7098AD3F163ECDF02164(/*hidden argument*/NULL);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_11;
		L_11 = Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_inline(/*hidden argument*/Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_RuntimeMethod_var);
		String_t* L_12;
		L_12 = String_Format_mF96F0621DC567D09C07F1EAC66B31AD261A9DC21(L_10, _stringLiteralC6072FBFC31FE8C1C066271F63752A3B9B67AAD9, L_11, /*hidden argument*/NULL);
		String_t* L_13;
		L_13 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(L_9, L_12, /*hidden argument*/NULL);
		V_0 = L_13;
	}

IL_004d:
	{
		String_t* L_14 = V_0;
		return L_14;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.Translation.TranslationSynthesisResult::GetAudioData(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TranslationSynthesisResult_GetAudioData_m24E5A8CD2E73B2361238C220CE64BCB588611CC4 (TranslationSynthesisResult_t243554A291C3C9A4349B5A0F15AFD7B984E944EE * __this, InteropSafeHandle_tF14E3AD32AC904F5E38F4FAC0ED46417062386C6 * ___resultHandle0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tEBAFAE20369FCB1B38C49C4E27A8D8C2C4B55058_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SpxError_tE3A37886AA69A2843CE24D52F59B1402D244731D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral84F70ACE509061C886C9B2FE8A2BF7B7FFC81F7F);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	intptr_t V_1;
	memset((&V_1), 0, sizeof(V_1));
	intptr_t V_2;
	memset((&V_2), 0, sizeof(V_2));
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		InteropSafeHandle_tF14E3AD32AC904F5E38F4FAC0ED46417062386C6 * L_0 = ___resultHandle0;
		SpxExceptionThrower_ThrowIfNull_mC54EA71790A454E5785FC15C4FFBB6F457E772DB(L_0, _stringLiteral84F70ACE509061C886C9B2FE8A2BF7B7FFC81F7F, /*hidden argument*/NULL);
		InteropSafeHandle_tF14E3AD32AC904F5E38F4FAC0ED46417062386C6 * L_1 = ___resultHandle0;
		bool L_2;
		L_2 = RecognitionResult_recognizer_result_handle_is_valid_mF7E78F30BD9373F5F3F4AEC1827F014FEEDDF062(L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_006f;
		}
	}
	{
		V_0 = 0;
		InteropSafeHandle_tF14E3AD32AC904F5E38F4FAC0ED46417062386C6 * L_3 = ___resultHandle0;
		intptr_t L_4;
		L_4 = RecognitionResult_translation_synthesis_result_get_audio_data_mFF0760AF3D2F8409841252FD33179D53E25CF4B9(L_3, (intptr_t)(0), (int32_t*)(&V_0), /*hidden argument*/NULL);
		V_1 = (intptr_t)L_4;
		intptr_t L_5 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(SpxError_tE3A37886AA69A2843CE24D52F59B1402D244731D_il2cpp_TypeInfo_var);
		intptr_t L_6 = ((SpxError_tE3A37886AA69A2843CE24D52F59B1402D244731D_StaticFields*)il2cpp_codegen_static_fields_for(SpxError_tE3A37886AA69A2843CE24D52F59B1402D244731D_il2cpp_TypeInfo_var))->get_BufferTooSmall_0();
		bool L_7;
		L_7 = IntPtr_op_Equality_mD94F3FE43A65684EFF984A7B95E70D2520C0AC73((intptr_t)L_5, (intptr_t)L_6, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_0069;
		}
	}
	{
		int32_t L_8 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Marshal_tEBAFAE20369FCB1B38C49C4E27A8D8C2C4B55058_il2cpp_TypeInfo_var);
		intptr_t L_9;
		L_9 = Marshal_AllocHGlobal_mED1B623D229DB8FAB58D187E4E73D3DA2E8AE6EC(L_8, /*hidden argument*/NULL);
		V_2 = (intptr_t)L_9;
	}

IL_0037:
	try
	{ // begin try (depth: 1)
		InteropSafeHandle_tF14E3AD32AC904F5E38F4FAC0ED46417062386C6 * L_10 = ___resultHandle0;
		intptr_t L_11 = V_2;
		intptr_t L_12;
		L_12 = RecognitionResult_translation_synthesis_result_get_audio_data_mFF0760AF3D2F8409841252FD33179D53E25CF4B9(L_10, (intptr_t)L_11, (int32_t*)(&V_0), /*hidden argument*/NULL);
		SpxExceptionThrower_ThrowIfFail_m7269610C68DA4D960FE5E6208DF1BD9282C8F2DA((intptr_t)L_12, /*hidden argument*/NULL);
		int32_t L_13 = V_0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_14 = (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)SZArrayNew(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var, (uint32_t)L_13);
		__this->set_audio_1(L_14);
		intptr_t L_15 = V_2;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_16 = __this->get_audio_1();
		int32_t L_17 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Marshal_tEBAFAE20369FCB1B38C49C4E27A8D8C2C4B55058_il2cpp_TypeInfo_var);
		Marshal_Copy_m057A8067BF7212A361510EA26B24022990A07AC0((intptr_t)L_15, L_16, 0, L_17, /*hidden argument*/NULL);
		IL2CPP_LEAVE(0x68, FINALLY_0061);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0061;
	}

FINALLY_0061:
	{ // begin finally (depth: 1)
		intptr_t L_18 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(Marshal_tEBAFAE20369FCB1B38C49C4E27A8D8C2C4B55058_il2cpp_TypeInfo_var);
		Marshal_FreeHGlobal_m53FC4846F5D3106BA25B52C321005C227E424F72((intptr_t)L_18, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(97)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(97)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x68, IL_0068)
	}

IL_0068:
	{
		return;
	}

IL_0069:
	{
		intptr_t L_19 = V_1;
		SpxExceptionThrower_ThrowIfFail_m7269610C68DA4D960FE5E6208DF1BD9282C8F2DA((intptr_t)L_19, /*hidden argument*/NULL);
	}

IL_006f:
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
// System.String Microsoft.CognitiveServices.Speech.Internal.Utf8StringMarshaler::MarshalNativeToManaged(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Utf8StringMarshaler_MarshalNativeToManaged_mE524A0FA5B448795AFBC45096D889A5A647487D8 (intptr_t ___native0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tEBAFAE20369FCB1B38C49C4E27A8D8C2C4B55058_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		intptr_t L_0 = ___native0;
		bool L_1;
		L_1 = IntPtr_op_Equality_mD94F3FE43A65684EFF984A7B95E70D2520C0AC73((intptr_t)L_0, (intptr_t)(0), /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		String_t* L_2 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		return L_2;
	}

IL_0013:
	{
		V_0 = 0;
		goto IL_001b;
	}

IL_0017:
	{
		int32_t L_3 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_3, (int32_t)1));
	}

IL_001b:
	{
		intptr_t L_4 = ___native0;
		int32_t L_5 = V_0;
		intptr_t L_6;
		L_6 = IntPtr_op_Addition_mEACE2385C17C1DDB2FCCBAF7DB5D585144C53BBD((intptr_t)L_4, L_5, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Marshal_tEBAFAE20369FCB1B38C49C4E27A8D8C2C4B55058_il2cpp_TypeInfo_var);
		uint8_t L_7;
		L_7 = Marshal_ReadByte_m86777C2D6B99630D8A034AF784C5B5944B3EAB0C((intptr_t)L_6, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_0031;
		}
	}
	{
		int32_t L_8 = V_0;
		if ((((int32_t)L_8) < ((int32_t)((int32_t)4194304))))
		{
			goto IL_0017;
		}
	}

IL_0031:
	{
		int32_t L_9 = V_0;
		if ((((int32_t)L_9) < ((int32_t)((int32_t)4194304))))
		{
			goto IL_0058;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_il2cpp_TypeInfo_var)));
		CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * L_10;
		L_10 = CultureInfo_get_InvariantCulture_m9FAAFAF8A00091EE1FCB7098AD3F163ECDF02164(/*hidden argument*/NULL);
		int32_t L_11 = ((int32_t)4194304);
		RuntimeObject * L_12 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var)), &L_11);
		String_t* L_13;
		L_13 = String_Format_m90ED4B078849D42FA1A7C5EB7AC7F74F235F6916(L_10, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral6CC1A826990E4F55C0AF3E80A72DC2D9003B1658)), L_12, /*hidden argument*/NULL);
		ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * L_14 = (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m2D35EAD113C2ADC99EB17B940A2097A93FD23EFC(L_14, L_13, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_14, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Utf8StringMarshaler_MarshalNativeToManaged_mE524A0FA5B448795AFBC45096D889A5A647487D8_RuntimeMethod_var)));
	}

IL_0058:
	{
		intptr_t L_15 = ___native0;
		int32_t L_16 = V_0;
		String_t* L_17;
		L_17 = Utf8StringMarshaler_MarshalNativeToManaged_m6969DAD0B884E1303F4D827C689B57890274E3B2((intptr_t)L_15, L_16, /*hidden argument*/NULL);
		return L_17;
	}
}
// System.String Microsoft.CognitiveServices.Speech.Internal.Utf8StringMarshaler::MarshalNativeToManaged(System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Utf8StringMarshaler_MarshalNativeToManaged_m6969DAD0B884E1303F4D827C689B57890274E3B2 (intptr_t ___native0, int32_t ___lengthInBytes1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tEBAFAE20369FCB1B38C49C4E27A8D8C2C4B55058_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* V_0 = NULL;
	{
		intptr_t L_0 = ___native0;
		bool L_1;
		L_1 = IntPtr_op_Equality_mD94F3FE43A65684EFF984A7B95E70D2520C0AC73((intptr_t)L_0, (intptr_t)(0), /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_000f;
		}
	}
	{
		return (String_t*)NULL;
	}

IL_000f:
	{
		int32_t L_2 = ___lengthInBytes1;
		if (L_2)
		{
			goto IL_0018;
		}
	}
	{
		String_t* L_3 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		return L_3;
	}

IL_0018:
	{
		int32_t L_4 = ___lengthInBytes1;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_5 = (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)SZArrayNew(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var, (uint32_t)L_4);
		V_0 = L_5;
		intptr_t L_6 = ___native0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_7 = V_0;
		int32_t L_8 = ___lengthInBytes1;
		IL2CPP_RUNTIME_CLASS_INIT(Marshal_tEBAFAE20369FCB1B38C49C4E27A8D8C2C4B55058_il2cpp_TypeInfo_var);
		Marshal_Copy_m057A8067BF7212A361510EA26B24022990A07AC0((intptr_t)L_6, L_7, 0, L_8, /*hidden argument*/NULL);
		Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * L_9;
		L_9 = Encoding_get_UTF8_mC877FB3137BBD566AEE7B15F9BF61DC4EF8F5E5E(/*hidden argument*/NULL);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_10 = V_0;
		NullCheck(L_9);
		String_t* L_11;
		L_11 = VirtFuncInvoker1< String_t*, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* >::Invoke(42 /* System.String System.Text.Encoding::GetString(System.Byte[]) */, L_9, L_10);
		return L_11;
	}
}
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.Utf8StringMarshaler::MarshalManagedToNative(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Utf8StringMarshaler_MarshalManagedToNative_m39FF2454E1147C76DAA8342418BA5DB669E98C5F (String_t* ___str0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		String_t* L_0 = ___str0;
		intptr_t L_1;
		L_1 = Utf8StringMarshaler_MarshalManagedToNative_m17FC3A91B217C0AEB7B33A5488E6FDC6E637E5FD(L_0, (int32_t*)(&V_0), /*hidden argument*/NULL);
		return (intptr_t)L_1;
	}
}
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.Utf8StringMarshaler::MarshalManagedToNative(System.String,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Utf8StringMarshaler_MarshalManagedToNative_m17FC3A91B217C0AEB7B33A5488E6FDC6E637E5FD (String_t* ___str0, int32_t* ___length1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tEBAFAE20369FCB1B38C49C4E27A8D8C2C4B55058_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* V_0 = NULL;
	intptr_t V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		String_t* L_0 = ___str0;
		if (L_0)
		{
			goto IL_000c;
		}
	}
	{
		int32_t* L_1 = ___length1;
		*((int32_t*)L_1) = (int32_t)0;
		return (intptr_t)(0);
	}

IL_000c:
	{
		Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * L_2;
		L_2 = Encoding_get_UTF8_mC877FB3137BBD566AEE7B15F9BF61DC4EF8F5E5E(/*hidden argument*/NULL);
		String_t* L_3 = ___str0;
		NullCheck(L_2);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_4;
		L_4 = VirtFuncInvoker1< ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, String_t* >::Invoke(25 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_2, L_3);
		V_0 = L_4;
		int32_t* L_5 = ___length1;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_6 = V_0;
		NullCheck(L_6);
		*((int32_t*)L_5) = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_6)->max_length))), (int32_t)1));
		int32_t* L_7 = ___length1;
		int32_t L_8 = *((int32_t*)L_7);
		IL2CPP_RUNTIME_CLASS_INIT(Marshal_tEBAFAE20369FCB1B38C49C4E27A8D8C2C4B55058_il2cpp_TypeInfo_var);
		intptr_t L_9;
		L_9 = Marshal_AllocHGlobal_mED1B623D229DB8FAB58D187E4E73D3DA2E8AE6EC(L_8, /*hidden argument*/NULL);
		V_1 = (intptr_t)L_9;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_10 = V_0;
		intptr_t L_11 = V_1;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_12 = V_0;
		NullCheck(L_12);
		Marshal_Copy_m05D5F5A9F9BA4C1B748AAE7266B3C0E9D9EE2012(L_10, 0, (intptr_t)L_11, ((int32_t)((int32_t)(((RuntimeArray*)L_12)->max_length))), /*hidden argument*/NULL);
		intptr_t L_13 = V_1;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_14 = V_0;
		NullCheck(L_14);
		intptr_t L_15;
		L_15 = IntPtr_op_Addition_mEACE2385C17C1DDB2FCCBAF7DB5D585144C53BBD((intptr_t)L_13, ((int32_t)((int32_t)(((RuntimeArray*)L_14)->max_length))), /*hidden argument*/NULL);
		Marshal_WriteByte_m764AA42DF08AA6DF06578369D7CA8000BD939E23((intptr_t)L_15, (uint8_t)0, /*hidden argument*/NULL);
		intptr_t L_16 = V_1;
		return (intptr_t)L_16;
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
IL2CPP_EXTERN_C  intptr_t DelegatePInvokeWrapper_GetRecognizerFromConfigDelegate_t2DC882A03ECDF618A982ED55B82B4ED3D829FACC (GetRecognizerFromConfigDelegate_t2DC882A03ECDF618A982ED55B82B4ED3D829FACC * __this, intptr_t* ___phreco0, InteropSafeHandle_tF14E3AD32AC904F5E38F4FAC0ED46417062386C6 * ___speechconfig1, InteropSafeHandle_tF14E3AD32AC904F5E38F4FAC0ED46417062386C6 * ___audioInput2, const RuntimeMethod* method)
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc)(intptr_t*, void*, void*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((RuntimeDelegate*)__this)->method->nativeFunction);

	// Marshaling of parameter '___speechconfig1' to native representation
	void* ____speechconfig1_marshaled = NULL;
	if (___speechconfig1 == NULL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_null_exception("speechconfig"), NULL);
	bool ___safeHandle_reference_incremented_for____speechconfig1 = false;
	SafeHandle_DangerousAddRef_mC65F001DAB84BADED6EA18B339BEA78962B978DB(___speechconfig1, (&___safeHandle_reference_incremented_for____speechconfig1), NULL);
	____speechconfig1_marshaled = reinterpret_cast<void*>((___speechconfig1)->get_handle_0());

	// Marshaling of parameter '___audioInput2' to native representation
	void* ____audioInput2_marshaled = NULL;
	if (___audioInput2 == NULL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_null_exception("audioInput"), NULL);
	bool ___safeHandle_reference_incremented_for____audioInput2 = false;
	SafeHandle_DangerousAddRef_mC65F001DAB84BADED6EA18B339BEA78962B978DB(___audioInput2, (&___safeHandle_reference_incremented_for____audioInput2), NULL);
	____audioInput2_marshaled = reinterpret_cast<void*>((___audioInput2)->get_handle_0());

	// Native function invocation
	intptr_t returnValue = il2cppPInvokeFunc(___phreco0, ____speechconfig1_marshaled, ____audioInput2_marshaled);

	// Marshaling cleanup of parameter '___speechconfig1' native representation
	if (___safeHandle_reference_incremented_for____speechconfig1)
	{
		SafeHandle_DangerousRelease_mD38F583FAFD30A50547FAA163FBE3C1D466174D4(___speechconfig1, NULL);
	}

	// Marshaling cleanup of parameter '___audioInput2' native representation
	if (___safeHandle_reference_incremented_for____audioInput2)
	{
		SafeHandle_DangerousRelease_mD38F583FAFD30A50547FAA163FBE3C1D466174D4(___audioInput2, NULL);
	}

	return returnValue;
}
// System.Void Microsoft.CognitiveServices.Speech.Recognizer/GetRecognizerFromConfigDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GetRecognizerFromConfigDelegate__ctor_m1D7851683A3D41399DB7BC5B6F36E32ABEBF62FC (GetRecognizerFromConfigDelegate_t2DC882A03ECDF618A982ED55B82B4ED3D829FACC * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.IntPtr Microsoft.CognitiveServices.Speech.Recognizer/GetRecognizerFromConfigDelegate::Invoke(System.IntPtr&,Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t GetRecognizerFromConfigDelegate_Invoke_m32859CB0B6CCD5497015D9506CA5B844EAFD185C (GetRecognizerFromConfigDelegate_t2DC882A03ECDF618A982ED55B82B4ED3D829FACC * __this, intptr_t* ___phreco0, InteropSafeHandle_tF14E3AD32AC904F5E38F4FAC0ED46417062386C6 * ___speechconfig1, InteropSafeHandle_tF14E3AD32AC904F5E38F4FAC0ED46417062386C6 * ___audioInput2, const RuntimeMethod* method)
{
	intptr_t result;
	memset((&result), 0, sizeof(result));
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 3)
			{
				// open
				typedef intptr_t (*FunctionPointerType) (intptr_t*, InteropSafeHandle_tF14E3AD32AC904F5E38F4FAC0ED46417062386C6 *, InteropSafeHandle_tF14E3AD32AC904F5E38F4FAC0ED46417062386C6 *, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___phreco0, ___speechconfig1, ___audioInput2, targetMethod);
			}
			else
			{
				// closed
				typedef intptr_t (*FunctionPointerType) (void*, intptr_t*, InteropSafeHandle_tF14E3AD32AC904F5E38F4FAC0ED46417062386C6 *, InteropSafeHandle_tF14E3AD32AC904F5E38F4FAC0ED46417062386C6 *, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___phreco0, ___speechconfig1, ___audioInput2, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = GenericInterfaceFuncInvoker3< intptr_t, intptr_t*, InteropSafeHandle_tF14E3AD32AC904F5E38F4FAC0ED46417062386C6 *, InteropSafeHandle_tF14E3AD32AC904F5E38F4FAC0ED46417062386C6 * >::Invoke(targetMethod, targetThis, ___phreco0, ___speechconfig1, ___audioInput2);
					else
						result = GenericVirtFuncInvoker3< intptr_t, intptr_t*, InteropSafeHandle_tF14E3AD32AC904F5E38F4FAC0ED46417062386C6 *, InteropSafeHandle_tF14E3AD32AC904F5E38F4FAC0ED46417062386C6 * >::Invoke(targetMethod, targetThis, ___phreco0, ___speechconfig1, ___audioInput2);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker3< intptr_t, intptr_t*, InteropSafeHandle_tF14E3AD32AC904F5E38F4FAC0ED46417062386C6 *, InteropSafeHandle_tF14E3AD32AC904F5E38F4FAC0ED46417062386C6 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___phreco0, ___speechconfig1, ___audioInput2);
					else
						result = VirtFuncInvoker3< intptr_t, intptr_t*, InteropSafeHandle_tF14E3AD32AC904F5E38F4FAC0ED46417062386C6 *, InteropSafeHandle_tF14E3AD32AC904F5E38F4FAC0ED46417062386C6 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___phreco0, ___speechconfig1, ___audioInput2);
				}
			}
			else
			{
				typedef intptr_t (*FunctionPointerType) (void*, intptr_t*, InteropSafeHandle_tF14E3AD32AC904F5E38F4FAC0ED46417062386C6 *, InteropSafeHandle_tF14E3AD32AC904F5E38F4FAC0ED46417062386C6 *, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___phreco0, ___speechconfig1, ___audioInput2, targetMethod);
			}
		}
	}
	return result;
}
// System.IAsyncResult Microsoft.CognitiveServices.Speech.Recognizer/GetRecognizerFromConfigDelegate::BeginInvoke(System.IntPtr&,Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GetRecognizerFromConfigDelegate_BeginInvoke_mA31572A6428BE63DCD46EDEFD80C59579C524FE5 (GetRecognizerFromConfigDelegate_t2DC882A03ECDF618A982ED55B82B4ED3D829FACC * __this, intptr_t* ___phreco0, InteropSafeHandle_tF14E3AD32AC904F5E38F4FAC0ED46417062386C6 * ___speechconfig1, InteropSafeHandle_tF14E3AD32AC904F5E38F4FAC0ED46417062386C6 * ___audioInput2, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback3, RuntimeObject * ___object4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[4] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &*___phreco0);
	__d_args[1] = ___speechconfig1;
	__d_args[2] = ___audioInput2;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback3, (RuntimeObject*)___object4);;
}
// System.IntPtr Microsoft.CognitiveServices.Speech.Recognizer/GetRecognizerFromConfigDelegate::EndInvoke(System.IntPtr&,System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t GetRecognizerFromConfigDelegate_EndInvoke_m6CB65E94ECFDAC2250C8C5D42B4D36370BF6E568 (GetRecognizerFromConfigDelegate_t2DC882A03ECDF618A982ED55B82B4ED3D829FACC * __this, intptr_t* ___phreco0, RuntimeObject* ___result1, const RuntimeMethod* method)
{
	void* ___out_args[] = {
	___phreco0,
	};
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result1, ___out_args);
	return *(intptr_t*)UnBox ((RuntimeObject*)__result);;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  intptr_t DelegatePInvokeWrapper_GetResultDelegate_tCE5D8A1E9C3A30C92902692A8F1576D09D4DCDE3 (GetResultDelegate_tCE5D8A1E9C3A30C92902692A8F1576D09D4DCDE3 * __this, InteropSafeHandle_tF14E3AD32AC904F5E38F4FAC0ED46417062386C6 * ___handle0, intptr_t ___result1, uint32_t ___maxCharCount2, const RuntimeMethod* method)
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc)(void*, intptr_t, uint32_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((RuntimeDelegate*)__this)->method->nativeFunction);

	// Marshaling of parameter '___handle0' to native representation
	void* ____handle0_marshaled = NULL;
	if (___handle0 == NULL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_null_exception("handle"), NULL);
	bool ___safeHandle_reference_incremented_for____handle0 = false;
	SafeHandle_DangerousAddRef_mC65F001DAB84BADED6EA18B339BEA78962B978DB(___handle0, (&___safeHandle_reference_incremented_for____handle0), NULL);
	____handle0_marshaled = reinterpret_cast<void*>((___handle0)->get_handle_0());

	// Native function invocation
	intptr_t returnValue = il2cppPInvokeFunc(____handle0_marshaled, ___result1, ___maxCharCount2);

	// Marshaling cleanup of parameter '___handle0' native representation
	if (___safeHandle_reference_incremented_for____handle0)
	{
		SafeHandle_DangerousRelease_mD38F583FAFD30A50547FAA163FBE3C1D466174D4(___handle0, NULL);
	}

	return returnValue;
}
// System.Void Microsoft.CognitiveServices.Speech.Internal.SpxFactory/GetResultDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GetResultDelegate__ctor_mD9674EEDEC07A1965D10AD6C172D61ADA8ABBAF0 (GetResultDelegate_tCE5D8A1E9C3A30C92902692A8F1576D09D4DCDE3 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.SpxFactory/GetResultDelegate::Invoke(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,System.IntPtr,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t GetResultDelegate_Invoke_m266129DD98B4319DC07D86FC58634BD716A09913 (GetResultDelegate_tCE5D8A1E9C3A30C92902692A8F1576D09D4DCDE3 * __this, InteropSafeHandle_tF14E3AD32AC904F5E38F4FAC0ED46417062386C6 * ___handle0, intptr_t ___result1, uint32_t ___maxCharCount2, const RuntimeMethod* method)
{
	intptr_t result;
	memset((&result), 0, sizeof(result));
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 3)
			{
				// open
				typedef intptr_t (*FunctionPointerType) (InteropSafeHandle_tF14E3AD32AC904F5E38F4FAC0ED46417062386C6 *, intptr_t, uint32_t, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___handle0, ___result1, ___maxCharCount2, targetMethod);
			}
			else
			{
				// closed
				typedef intptr_t (*FunctionPointerType) (void*, InteropSafeHandle_tF14E3AD32AC904F5E38F4FAC0ED46417062386C6 *, intptr_t, uint32_t, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___handle0, ___result1, ___maxCharCount2, targetMethod);
			}
		}
		else if (___parameterCount != 3)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = GenericInterfaceFuncInvoker2< intptr_t, intptr_t, uint32_t >::Invoke(targetMethod, ___handle0, ___result1, ___maxCharCount2);
					else
						result = GenericVirtFuncInvoker2< intptr_t, intptr_t, uint32_t >::Invoke(targetMethod, ___handle0, ___result1, ___maxCharCount2);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker2< intptr_t, intptr_t, uint32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___handle0, ___result1, ___maxCharCount2);
					else
						result = VirtFuncInvoker2< intptr_t, intptr_t, uint32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___handle0, ___result1, ___maxCharCount2);
				}
			}
			else
			{
				typedef intptr_t (*FunctionPointerType) (InteropSafeHandle_tF14E3AD32AC904F5E38F4FAC0ED46417062386C6 *, intptr_t, uint32_t, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___handle0, ___result1, ___maxCharCount2, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = GenericInterfaceFuncInvoker3< intptr_t, InteropSafeHandle_tF14E3AD32AC904F5E38F4FAC0ED46417062386C6 *, intptr_t, uint32_t >::Invoke(targetMethod, targetThis, ___handle0, ___result1, ___maxCharCount2);
					else
						result = GenericVirtFuncInvoker3< intptr_t, InteropSafeHandle_tF14E3AD32AC904F5E38F4FAC0ED46417062386C6 *, intptr_t, uint32_t >::Invoke(targetMethod, targetThis, ___handle0, ___result1, ___maxCharCount2);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker3< intptr_t, InteropSafeHandle_tF14E3AD32AC904F5E38F4FAC0ED46417062386C6 *, intptr_t, uint32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___handle0, ___result1, ___maxCharCount2);
					else
						result = VirtFuncInvoker3< intptr_t, InteropSafeHandle_tF14E3AD32AC904F5E38F4FAC0ED46417062386C6 *, intptr_t, uint32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___handle0, ___result1, ___maxCharCount2);
				}
			}
			else
			{
				if (targetThis == NULL)
				{
					typedef intptr_t (*FunctionPointerType) (InteropSafeHandle_tF14E3AD32AC904F5E38F4FAC0ED46417062386C6 *, intptr_t, uint32_t, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(___handle0, ___result1, ___maxCharCount2, targetMethod);
				}
				else
				{
					typedef intptr_t (*FunctionPointerType) (void*, InteropSafeHandle_tF14E3AD32AC904F5E38F4FAC0ED46417062386C6 *, intptr_t, uint32_t, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___handle0, ___result1, ___maxCharCount2, targetMethod);
				}
			}
		}
	}
	return result;
}
// System.IAsyncResult Microsoft.CognitiveServices.Speech.Internal.SpxFactory/GetResultDelegate::BeginInvoke(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,System.IntPtr,System.UInt32,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GetResultDelegate_BeginInvoke_mDDC49711463383C50240777E3D9FE0EF72B766AD (GetResultDelegate_tCE5D8A1E9C3A30C92902692A8F1576D09D4DCDE3 * __this, InteropSafeHandle_tF14E3AD32AC904F5E38F4FAC0ED46417062386C6 * ___handle0, intptr_t ___result1, uint32_t ___maxCharCount2, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback3, RuntimeObject * ___object4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32_tE60352A06233E4E69DD198BCC67142159F686B15_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[4] = {0};
	__d_args[0] = ___handle0;
	__d_args[1] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___result1);
	__d_args[2] = Box(UInt32_tE60352A06233E4E69DD198BCC67142159F686B15_il2cpp_TypeInfo_var, &___maxCharCount2);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback3, (RuntimeObject*)___object4);;
}
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.SpxFactory/GetResultDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t GetResultDelegate_EndInvoke_mD9E3A1886725A45CFEF6B091DCA7A6C112B9607F (GetResultDelegate_tCE5D8A1E9C3A30C92902692A8F1576D09D4DCDE3 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return *(intptr_t*)UnBox ((RuntimeObject*)__result);;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CancellationDetails_set_Reason_m6585C2DF7D2BF59B5FC062DF5258F079399CFE01_inline (CancellationDetails_t5D21A89C2CF88AB86DE6EF822F1DBF0FF3F678C9 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CReasonU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CancellationDetails_set_ErrorCode_mDC39567210408C52117E39FAD3930C916DA94F86_inline (CancellationDetails_t5D21A89C2CF88AB86DE6EF822F1DBF0FF3F678C9 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CErrorCodeU3Ek__BackingField_1(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CancellationDetails_set_ErrorDetails_mC97095A39BD0DB39495A59E1081EB3026F2BE140_inline (CancellationDetails_t5D21A89C2CF88AB86DE6EF822F1DBF0FF3F678C9 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CErrorDetailsU3Ek__BackingField_2(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t CancellationDetails_get_Reason_mEBCBE5F14B176F5574F4A4D6CBB2F3719CC51BA4_inline (CancellationDetails_t5D21A89C2CF88AB86DE6EF822F1DBF0FF3F678C9 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CReasonU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* CancellationDetails_get_ErrorDetails_m1BD08DCFD99497ADB4E6C05D337488538941B384_inline (CancellationDetails_t5D21A89C2CF88AB86DE6EF822F1DBF0FF3F678C9 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_U3CErrorDetailsU3Ek__BackingField_2();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SafeHandle_SetHandle_m3727BDA5C26E0220FA7BBE73C9E662774F5F1664_inline (SafeHandle_tC07DCA2CABF6988953342757EFB1547363E5A36B * __this, intptr_t ___handle0, const RuntimeMethod* method)
{
	{
		intptr_t L_0 = ___handle0;
		__this->set_handle_0((intptr_t)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* SessionEventArgs_get_SessionId_m8C680FABDADC335561EA0F07CEA0F2F38A968960_inline (SessionEventArgs_t720E6DA982AD7DE7933835DEBBECD8B78F28CAB1 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_U3CSessionIdU3Ek__BackingField_4();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint64_t RecognitionEventArgs_get_Offset_m5A20B9663DD26226E0D6B5BF93F0BAA30D04A870_inline (RecognitionEventArgs_tC7B8B5C317C90BF54CBE82BE86321F5359B98650 * __this, const RuntimeMethod* method)
{
	{
		uint64_t L_0 = __this->get_U3COffsetU3Ek__BackingField_5();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RecognitionResult_set_Properties_mC90D2FE65A44F87E80C5889C0E59A4CA2546FE33_inline (RecognitionResult_t29D2A304D192BFB246AB9E91297B54B2EB44DA06 * __this, PropertyCollection_tD6D50793A0684647D5C7067381E1365EDB3AA920 * ___value0, const RuntimeMethod* method)
{
	{
		PropertyCollection_tD6D50793A0684647D5C7067381E1365EDB3AA920 * L_0 = ___value0;
		__this->set_U3CPropertiesU3Ek__BackingField_3(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR SpeechRecognitionResult_t65860E5862B0CFC304215FF5084A2E59A1AA727F * SpeechRecognitionEventArgs_get_Result_m1389C14A09CF6A3065569F67F3E7B624EE5A1370_inline (SpeechRecognitionEventArgs_t1FB7CC9C07684BA7F03F63DF226A306D7C5F2CEA * __this, const RuntimeMethod* method)
{
	{
		SpeechRecognitionResult_t65860E5862B0CFC304215FF5084A2E59A1AA727F * L_0 = __this->get_U3CResultU3Ek__BackingField_6();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t CancellationDetails_get_ErrorCode_m86467B87546D6D75FF69D6190773F9F84CD94D98_inline (CancellationDetails_t5D21A89C2CF88AB86DE6EF822F1DBF0FF3F678C9 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CErrorCodeU3Ek__BackingField_1();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t SpeechRecognitionCanceledEventArgs_get_Reason_m20DC32313A577BF1BE92F6B0E2C094114A67E0BD_inline (SpeechRecognitionCanceledEventArgs_t35423FB7DA329C4D5CC9ED0B255C55C72F06E97C * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CReasonU3Ek__BackingField_7();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t SpeechRecognitionCanceledEventArgs_get_ErrorCode_mBA216DB0C26A6BC78DAB3557219137CBFF206253_inline (SpeechRecognitionCanceledEventArgs_t35423FB7DA329C4D5CC9ED0B255C55C72F06E97C * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CErrorCodeU3Ek__BackingField_8();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SpeechRecognizer_set_Properties_mF2118E137B1726D1BE3D31AF54617D3F6C79035A_inline (SpeechRecognizer_tD9F66F83FE18A3C87986B87E9108997AC919BF2A * __this, PropertyCollection_tD6D50793A0684647D5C7067381E1365EDB3AA920 * ___value0, const RuntimeMethod* method)
{
	{
		PropertyCollection_tD6D50793A0684647D5C7067381E1365EDB3AA920 * L_0 = ___value0;
		__this->set_U3CPropertiesU3Ek__BackingField_25(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR PropertyCollection_tD6D50793A0684647D5C7067381E1365EDB3AA920 * SpeechRecognizer_get_Properties_mBA0F85A8988F7921955F690761443143B7563EB3_inline (SpeechRecognizer_tD9F66F83FE18A3C87986B87E9108997AC919BF2A * __this, const RuntimeMethod* method)
{
	{
		PropertyCollection_tD6D50793A0684647D5C7067381E1365EDB3AA920 * L_0 = __this->get_U3CPropertiesU3Ek__BackingField_25();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TranslationRecognitionResult_tAF699D9A902DCE03B21D08BD562FE08544A089AD * TranslationRecognitionEventArgs_get_Result_mCD02FCF6C3C49D1B6288D1BDA24F06BEF2322F41_inline (TranslationRecognitionEventArgs_t9801CC0D44EB6958FE731328096A8220591EB9E2 * __this, const RuntimeMethod* method)
{
	{
		TranslationRecognitionResult_tAF699D9A902DCE03B21D08BD562FE08544A089AD * L_0 = __this->get_U3CResultU3Ek__BackingField_6();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t TranslationRecognitionCanceledEventArgs_get_Reason_m94F2A97E7FD6DD5B61DCDC9B305CD41D9432C318_inline (TranslationRecognitionCanceledEventArgs_tF8364DAABB1345D5D552BC9161B2681056902434 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CReasonU3Ek__BackingField_7();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t TranslationRecognitionCanceledEventArgs_get_ErrorCode_mDC791691BE24A75B18707DCAE11FDDB9A0CC2559_inline (TranslationRecognitionCanceledEventArgs_tF8364DAABB1345D5D552BC9161B2681056902434 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CErrorCodeU3Ek__BackingField_8();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* TranslationRecognitionResult_get_Translations_mFE7B704863AE1DFA972D7EBB13671D4D907ABE53_inline (TranslationRecognitionResult_tAF699D9A902DCE03B21D08BD562FE08544A089AD * __this, const RuntimeMethod* method)
{
	{
		Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * L_0 = __this->get_translationTextResultMap_6();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TranslationRecognizer_set_Properties_mA93EEDAC48C7C7A2B3DC40A1B24E27DC0AF096D5_inline (TranslationRecognizer_t5E2EA28023083A645CA9CB77906834987C4C9BFC * __this, PropertyCollection_tD6D50793A0684647D5C7067381E1365EDB3AA920 * ___value0, const RuntimeMethod* method)
{
	{
		PropertyCollection_tD6D50793A0684647D5C7067381E1365EDB3AA920 * L_0 = ___value0;
		__this->set_U3CPropertiesU3Ek__BackingField_23(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR PropertyCollection_tD6D50793A0684647D5C7067381E1365EDB3AA920 * TranslationRecognizer_get_Properties_m05C6F57DF448914BF3B79B835985CAB57E05A845_inline (TranslationRecognizer_t5E2EA28023083A645CA9CB77906834987C4C9BFC * __this, const RuntimeMethod* method)
{
	{
		PropertyCollection_tD6D50793A0684647D5C7067381E1365EDB3AA920 * L_0 = __this->get_U3CPropertiesU3Ek__BackingField_23();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TranslationSynthesisResult_t243554A291C3C9A4349B5A0F15AFD7B984E944EE * TranslationSynthesisEventArgs_get_Result_mDB3D5F4D8AED490B08C9AAA14947499BEC7AFBD9_inline (TranslationSynthesisEventArgs_t975B943C527D3EB226F627E98ACDC396F0ECDD36 * __this, const RuntimeMethod* method)
{
	{
		TranslationSynthesisResult_t243554A291C3C9A4349B5A0F15AFD7B984E944EE * L_0 = __this->get_U3CResultU3Ek__BackingField_5();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t TranslationSynthesisResult_get_Reason_mFDC37352957A9BB0B79CE705DB24CAC5AEC39AF7_inline (TranslationSynthesisResult_t243554A291C3C9A4349B5A0F15AFD7B984E944EE * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CReasonU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_gshared_inline (const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_0 = ((EmptyArray_1_tBF73225DFA890366D579424FE8F40073BF9FBAD4_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Value_0();
		return (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * KeyValuePair_2_get_Key_mCAD7B121DB998D7C56EB0281215A860EFE9DCD95_gshared_inline (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_key_0();
		return (RuntimeObject *)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * KeyValuePair_2_get_Value_m622223593F7461E7812C581DDB145270016ED303_gshared_inline (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_value_1();
		return (RuntimeObject *)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* Array_Empty_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_m86406577D438B78D85E03BECFDC8AB3C7696A1E7_gshared_inline (const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = ((EmptyArray_1_tB2402F7A8151EE5618C0BCC8815C169E00142333_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Value_0();
		return (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)L_0;
	}
}
