#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


struct VirtualActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
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
template <typename T1, typename T2>
struct VirtualActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
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
template <typename R, typename T1>
struct VirtualFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
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
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1 p1, T2 p2, T3 p3)
	{
		void* params[3] = { &p1, &p2, &p3 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1, typename T2, typename T3, typename T4>
struct InvokerActionInvoker4;
template <typename T1, typename T2, typename T3, typename T4>
struct InvokerActionInvoker4<T1*, T2, T3, T4>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2, T3 p3, T4 p4)
	{
		void* params[4] = { p1, &p2, &p3, &p4 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename R, typename T1>
struct InvokerFuncInvoker1
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1 p1)
	{
		R ret;
		void* params[1] = { &p1 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2>
struct InvokerFuncInvoker2;
template <typename R, typename T1, typename T2>
struct InvokerFuncInvoker2<R, T1*, T2>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2)
	{
		R ret;
		void* params[2] = { p1, &p2 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct InvokerFuncInvoker3;
template <typename R, typename T1, typename T2, typename T3>
struct InvokerFuncInvoker3<R, T1*, T2, T3>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2, T3 p3)
	{
		R ret;
		void* params[3] = { p1, &p2, &p3 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct InvokerFuncInvoker3<R, T1*, T2*, T3*>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2, T3* p3)
	{
		R ret;
		void* params[3] = { p1, p2, p3 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4>
struct InvokerFuncInvoker4;
template <typename R, typename T1, typename T2, typename T3, typename T4>
struct InvokerFuncInvoker4<R, T1*, T2*, T3, T4>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2, T3 p3, T4 p4)
	{
		R ret;
		void* params[4] = { p1, p2, &p3, &p4 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4>
struct InvokerFuncInvoker4<R, T1*, T2*, T3*, T4*>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2, T3* p3, T4* p4)
	{
		R ret;
		void* params[4] = { p1, p2, p3, p4 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};

// System.Action`1<System.Object>
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Globalization.CultureInfo>
struct Dictionary_2_t9FA6D82CAFC18769F7515BB51D1C56DAE09381C3;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Text.Encoding>
struct Dictionary_2_t87EDE08B2E48F793A22DE50D6B3CC2E7EBB2DB54;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task>
struct Dictionary_2_t403063CE4960B4F46C688912237C6A27E550FF55;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA;
// System.Collections.Generic.Dictionary`2<System.String,System.Globalization.CultureInfo>
struct Dictionary_2_tE1603CE612C16451D1E56FF4D4859D4FE4087C28;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83;
// System.EventHandler`1<System.Object>
struct EventHandler_1_tD8C4A5BE1F7C91B1A7E99AE87AFD2F5432C38746;
// System.EventHandler`1<Microsoft.CognitiveServices.Speech.RecognitionEventArgs>
struct EventHandler_1_t4457009845FA4C1ABCF83D7E00C38F13807F18F0;
// System.EventHandler`1<Microsoft.CognitiveServices.Speech.SessionEventArgs>
struct EventHandler_1_tB44EB3A3EAA7B1B7ED121BF2DF6360B62B13EA07;
// System.EventHandler`1<Microsoft.CognitiveServices.Speech.SpeechRecognitionCanceledEventArgs>
struct EventHandler_1_t8FB3884B878D3DEA670EAAD761B40C42B82E3F46;
// System.EventHandler`1<Microsoft.CognitiveServices.Speech.SpeechRecognitionEventArgs>
struct EventHandler_1_tFE5F3A49257B61DC2A2C46D8D8C0CE7A76F99979;
// System.EventHandler`1<Microsoft.CognitiveServices.Speech.Translation.TranslationRecognitionCanceledEventArgs>
struct EventHandler_1_t529E119B11382401540BF02D1C8026AC460279A8;
// System.EventHandler`1<Microsoft.CognitiveServices.Speech.Translation.TranslationRecognitionEventArgs>
struct EventHandler_1_t008E3F55CF18E8D623598A49DFBC452B2DD6E698;
// System.EventHandler`1<Microsoft.CognitiveServices.Speech.Translation.TranslationSynthesisEventArgs>
struct EventHandler_1_tB299EE0561708ADFB5D5F63E18C58E89D72E7E6E;
// System.Func`1<System.Threading.Tasks.Task/ContingentProperties>
struct Func_1_tD59A12717D79BFB403BF973694B1BE5B85474BD1;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_tAE94C8F24AD5B94D4EE85CA9FC59E3409D41CAF7;
// System.Collections.Generic.IReadOnlyDictionary`2<System.String,System.String>
struct IReadOnlyDictionary_2_t8FD5C7F0C22A371C71196C9A42D80E0E47EAC1C8;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.String>
struct KeyCollection_t2EDD317F5771E575ACB63527B5AFB71291040342;
// System.Predicate`1<System.Object>
struct Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12;
// System.Predicate`1<System.Threading.Tasks.Task>
struct Predicate_1_t7F48518B008C1472339EEEBABA3DE203FE1F26ED;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.String>
struct ValueCollection_t238D0D2427C6B841A01F522A41540165A2C4AE76;
// System.Collections.Generic.Dictionary`2/Entry<System.String,System.String>[]
struct EntryU5BU5D_t1AF33AD0B7330843448956EC4277517081658AE7;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07;
// System.ApplicationException
struct ApplicationException_tA744BED4E90266BD255285CD4CF909BAB3EE811A;
// System.ArgumentException
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263;
// System.ArgumentNullException
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129;
// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C;
// System.Attribute
struct Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA;
// Microsoft.CognitiveServices.Speech.Audio.AudioConfig
struct AudioConfig_t97C98F0F764C263046543A14EE6C8CD02B57F4F3;
// System.Reflection.Binder
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
// System.Globalization.Calendar
struct Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B;
// Microsoft.CognitiveServices.Speech.Internal.CallbackFunctionDelegate
struct CallbackFunctionDelegate_tC745A2B557EE8241DF1F7ABD3BFC1C8F3A2E81AA;
// Microsoft.CognitiveServices.Speech.CancellationDetails
struct CancellationDetails_t3A257E993FAECAD1A9866267C438E47CFA1D308A;
// System.Globalization.CodePageDataItem
struct CodePageDataItem_t52460FA30AE37F4F26ACB81055E58002262F19F2;
// System.Globalization.CompareInfo
struct CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57;
// System.Threading.ContextCallback
struct ContextCallback_tE8AFBDBFCC040FDA8DA8C1EEFE9BD66B16BDA007;
// System.Globalization.CultureData
struct CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D;
// System.Globalization.CultureInfo
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0;
// System.Globalization.DateTimeFormatInfo
struct DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A;
// System.Text.DecoderFallback
struct DecoderFallback_t7324102215E4ED41EC065C02EB501CB0BC23CD90;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// System.Text.EncoderFallback
struct EncoderFallback_tD2C40CE114AA9D8E1F7196608B2D088548015293;
// System.Text.Encoding
struct Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095;
// System.EventArgs
struct EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377;
// Microsoft.CognitiveServices.Speech.Internal.HandleRelease
struct HandleRelease_tDA5C5C8C145FFFB7E9AE3ADB1506118017AC70F9;
// System.IAsyncResult
struct IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.IDisposable
struct IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5;
// System.IFormatProvider
struct IFormatProvider_tC202922D43BFF3525109ABF3FB79625F5646AB52;
// Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle
struct InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D;
// System.InvalidOperationException
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB;
// System.Reflection.MemberFilter
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// Microsoft.CognitiveServices.Speech.Internal.MonoPInvokeCallbackAttribute
struct MonoPInvokeCallbackAttribute_tCAE7DBDDEE93BF80011F064297B9B66A3719DCE8;
// System.Globalization.NumberFormatInfo
struct NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472;
// System.ObjectDisposedException
struct ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB;
// Microsoft.CognitiveServices.Speech.PropertyCollection
struct PropertyCollection_tD2FEDF489ECC1689767DEE33A0152F1FA719AA53;
// Microsoft.CognitiveServices.Speech.RecognitionEventArgs
struct RecognitionEventArgs_tF3045EA40FBF0ACD26A0B6F7D4144036AA7D05F9;
// Microsoft.CognitiveServices.Speech.RecognitionResult
struct RecognitionResult_t900FA7A9A16DB8B9FDE5395B1B773BDC63BE474F;
// Microsoft.CognitiveServices.Speech.Recognizer
struct Recognizer_tCA087D63D8BDE21D877CECAAF536BDCCFE54729A;
// System.Runtime.InteropServices.SafeHandle
struct SafeHandle_tC1A4DA80DA89B867CC011B707A07275230321BF7;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// Microsoft.CognitiveServices.Speech.SessionEventArgs
struct SessionEventArgs_t06C8DB22E01F18F0B45A4E719BECB043B4D961BC;
// Microsoft.CognitiveServices.Speech.SpeechConfig
struct SpeechConfig_tAE8FEC093B21AA957B784250CF237DE1C3760DEE;
// Microsoft.CognitiveServices.Speech.SpeechRecognitionCanceledEventArgs
struct SpeechRecognitionCanceledEventArgs_t5FB6DBEE3C3E77AE97C05A03CE7CBC0BD387CA86;
// Microsoft.CognitiveServices.Speech.SpeechRecognitionEventArgs
struct SpeechRecognitionEventArgs_tA7F1649E47FF3239DACE11D5537ECC0AC23E94BD;
// Microsoft.CognitiveServices.Speech.SpeechRecognitionResult
struct SpeechRecognitionResult_tBA76D21E6D62BB6B2CDC9F83766BB1E791649D94;
// Microsoft.CognitiveServices.Speech.SpeechRecognizer
struct SpeechRecognizer_t949CB7F9294C8FD93325B16A1791A28325C2203B;
// Microsoft.CognitiveServices.Speech.SpeechTranslationConfig
struct SpeechTranslationConfig_t1EEE80E7A3DA15D83DEBF70B9B811498B739CE8B;
// System.Threading.Tasks.StackGuard
struct StackGuard_tACE063A1B7374BDF4AD472DE4585D05AD8745352;
// System.String
struct String_t;
// System.Threading.Tasks.Task
struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572;
// System.Threading.Tasks.TaskFactory
struct TaskFactory_tF781BD37BE23917412AD83424D1497C7C1509DF0;
// System.Threading.Tasks.TaskScheduler
struct TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E;
// System.Globalization.TextInfo
struct TextInfo_tD3BAFCFD77418851E7D5CB8D2588F47019E414B4;
// Microsoft.CognitiveServices.Speech.Translation.TranslationRecognitionCanceledEventArgs
struct TranslationRecognitionCanceledEventArgs_tD5827BE8533B28001EA604E99F9C8E73FFD0B853;
// Microsoft.CognitiveServices.Speech.Translation.TranslationRecognitionEventArgs
struct TranslationRecognitionEventArgs_t0F1D46343AA090830357DA90FD500DC7FC75BEF0;
// Microsoft.CognitiveServices.Speech.Translation.TranslationRecognitionResult
struct TranslationRecognitionResult_tE95FF320EDD627570B9D1B3C710EB7925CC54D19;
// Microsoft.CognitiveServices.Speech.Translation.TranslationRecognizer
struct TranslationRecognizer_tAEE1F79841E087D238E7450755C96DD589BE0168;
// Microsoft.CognitiveServices.Speech.Translation.TranslationSynthesisEventArgs
struct TranslationSynthesisEventArgs_t8FB96FD526982A583F5A91C6EF7CB17C1210A59F;
// Microsoft.CognitiveServices.Speech.Translation.TranslationSynthesisResult
struct TranslationSynthesisResult_tCCE322C2C7FDC0F193CFD38F27E107E88FAF48D2;
// System.Type
struct Type_t;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// Microsoft.CognitiveServices.Speech.Recognizer/GetRecognizerFromConfigDelegate
struct GetRecognizerFromConfigDelegate_t17EEE1C5E4305DB57FCBE2C975DB62B9BA4B584D;
// Microsoft.CognitiveServices.Speech.Internal.SpxFactory/GetResultDelegate
struct GetResultDelegate_t678B8552898C76C54DA3B9B56C14C65BDE7D434B;
// System.Threading.Tasks.Task/ContingentProperties
struct ContingentProperties_t3FA59480914505CEA917B1002EC675F29D0CB540;

IL2CPP_EXTERN_C RuntimeClass* Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ApplicationException_tA744BED4E90266BD255285CD4CF909BAB3EE811A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CallbackFunctionDelegate_tC745A2B557EE8241DF1F7ABD3BFC1C8F3A2E81AA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CancellationDetails_t3A257E993FAECAD1A9866267C438E47CFA1D308A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CancellationErrorCode_tA7E793829617AB6327A122CC40E657792C4D9402_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CancellationReason_t51FBE96029389530BF9FEE71742677C3DFF019A5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventHandler_1_t008E3F55CF18E8D623598A49DFBC452B2DD6E698_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventHandler_1_t4457009845FA4C1ABCF83D7E00C38F13807F18F0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventHandler_1_t529E119B11382401540BF02D1C8026AC460279A8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventHandler_1_t8FB3884B878D3DEA670EAAD761B40C42B82E3F46_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventHandler_1_tB44EB3A3EAA7B1B7ED121BF2DF6360B62B13EA07_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventHandler_1_tFE5F3A49257B61DC2A2C46D8D8C0CE7A76F99979_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GetRecognizerFromConfigDelegate_t17EEE1C5E4305DB57FCBE2C975DB62B9BA4B584D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GetResultDelegate_t678B8552898C76C54DA3B9B56C14C65BDE7D434B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HandleRelease_tDA5C5C8C145FFFB7E9AE3ADB1506118017AC70F9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_1_t3C6913E067AB1171D9894C79A396D8A8E90E311B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_t174BFB804F1D416642CD11B72858B43316D8B26D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IntPtr_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PropertyCollection_tD2FEDF489ECC1689767DEE33A0152F1FA719AA53_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RecognitionEventArgs_tF3045EA40FBF0ACD26A0B6F7D4144036AA7D05F9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ResultReason_tC944C305A2A069DB2A7F5C6112F43FA8A4405A54_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RuntimeObject_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SessionEventArgs_t06C8DB22E01F18F0B45A4E719BECB043B4D961BC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SpeechConfig_tAE8FEC093B21AA957B784250CF237DE1C3760DEE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SpeechRecognitionCanceledEventArgs_t5FB6DBEE3C3E77AE97C05A03CE7CBC0BD387CA86_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SpeechRecognitionEventArgs_tA7F1649E47FF3239DACE11D5537ECC0AC23E94BD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SpeechRecognitionResult_tBA76D21E6D62BB6B2CDC9F83766BB1E791649D94_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SpeechTranslationConfig_t1EEE80E7A3DA15D83DEBF70B9B811498B739CE8B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SpxError_t1CCB290F01587A895B752386C959C6E0346321AD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TranslationRecognitionCanceledEventArgs_tD5827BE8533B28001EA604E99F9C8E73FFD0B853_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TranslationRecognitionEventArgs_t0F1D46343AA090830357DA90FD500DC7FC75BEF0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TranslationRecognitionResult_tE95FF320EDD627570B9D1B3C710EB7925CC54D19_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TranslationSynthesisEventArgs_t8FB96FD526982A583F5A91C6EF7CB17C1210A59F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TranslationSynthesisResult_tCCE322C2C7FDC0F193CFD38F27E107E88FAF48D2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var;
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
IL2CPP_EXTERN_C const RuntimeMethod* Array_Empty_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m89F7B056854DF715AA3E2B78EB84D5FA3878E474_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_m9BF625649E96E60C1509898A992A6447E351D1A2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EventArgs_recognizer_event_handle_release_mB10E833E44DE8B942BA131D02EAA83C76170287B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InteropSafeHandle_GetObjectFromWeakHandle_TisRecognizer_tCA087D63D8BDE21D877CECAAF536BDCCFE54729A_mBD3D6EABCBDAD29C419965D792E526B664EB6DF3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InteropSafeHandle_GetObjectFromWeakHandle_TisSpeechRecognizer_t949CB7F9294C8FD93325B16A1791A28325C2203B_mCA8F08B5C7236A0FCB9E693A4EB4054FC439250C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InteropSafeHandle_GetObjectFromWeakHandle_TisTranslationRecognizer_tAEE1F79841E087D238E7450755C96DD589BE0168_m7DD03405D0CCC1C47FA8CA25B4FD502827C7D16F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Key_m654BCCAE2F20CB11D8E8C2D2C886A0C8A13EB1C4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Value_m7345512A32CB4DCAA0643050B18DC8DCD71B927A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PropertyCollection_property_bag_release_mEA272951A28D37AE294DE83DED63D32185E99E01_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RecognitionResult_recognizer_result_handle_release_mD7241DA94329C30FC7576690F6090CB9083B1388_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RecognitionResult_result_get_result_id_m0BFA3A72D4CAA06A4E41F7FC5DD49DC9EB786AB7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RecognitionResult_result_get_text_mE0BD740D8672D17924AFE52A56DA353AF8F9E2D8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Recognizer_Dispose_m53C30ACE1A7745127F79CB19F92894F67407E7CF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Recognizer_DoAsyncRecognitionAction_m83046B03472BABA6160D5C56198373502725FE84_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Recognizer_FireEvent_SetSessionStarted_m52E09A4B81972BF98DDFF6F1901AF63188C91629_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Recognizer_FireEvent_SetSessionStopped_m1925D97F4E29071799739DAE667160A804385C25_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Recognizer_FireEvent_SpeechEndDetected_m855530988936AC915A4277BF08A8EF863933990E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Recognizer_FireEvent_SpeechStartDetected_mBBD9DA4BDE0F8E8E8545C4BACEC0068B86F16DAF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Recognizer_FromConfig_m987A4CFBF642C006F1CCC60AE435E7C825B55F64_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Recognizer_StartContinuousRecognition_mB8E850543B3369010BFDC121ADC45B7F4D3EB0C2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Recognizer_StopContinuousRecognition_mAB43FB36FA7F893031EE6EF33D7E980474FAE6D8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Recognizer_recognizer_handle_release_m6D4F7C9482D6618B26EF7AA1E0BF48B64986FCEF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Recognizer_recognizer_session_event_get_session_id_mD4D0B7CC2B238EA5B51AC263ECEE64F8EB5F2EC6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SpeechConfig_speech_config_release_m02C3D503C5141ADD5F9075D27204DD1AD5E9274A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SpeechRecognizer_FireEvent_Canceled_m2034F62D22C618A305A7E5E7DCB416439CDD3F6E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SpeechRecognizer_FireEvent_Recognized_m1C49575EF31FF9111D7CC4CC679D1582B525F886_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SpeechRecognizer_FireEvent_Recognizing_m5F41324B4925637FC1859240D793E0038ABE9EA4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SpeechRecognizer_U3CStartContinuousRecognitionAsyncU3Eb__48_0_m04FE3F14272D20010FE93F0E93DBBDCE0CF49BA8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SpeechRecognizer_U3CStopContinuousRecognitionAsyncU3Eb__49_0_m35203AF7CC7FE3FA3E39B1F7B184E700F4A22B65_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SpxExceptionThrower_ThrowIfFail_m80558DF4FFB9A961C7CCC15CD13AF53F5437BA21_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SpxExceptionThrower_ThrowIfFalse_m6FA4EA1F0EDB900A2F7371E78F573DDC0D735FAF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SpxExceptionThrower_ThrowIfNull_m5C9E05F3DEDEE273B1049A6052813A5870C4F223_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SpxFactory_recognizer_create_speech_recognizer_from_config_mA2AA5F624FF8DE29D2444E8D8C197B8849BC5416_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SpxFactory_recognizer_create_translation_recognizer_from_config_m0C8864D041B6404EFDEDA573E1265683CD7FC31F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TranslationRecognizer_FireEvent_Canceled_m7875F1D6DA9BCA902CF05D571D55EF1055AB2E82_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TranslationRecognizer_FireEvent_Recognized_m37BF6A7CAA9794E1DBFAFB10D294B7DB958B9836_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TranslationRecognizer_FireEvent_Recognizing_m9C07BDADD03B380A822B8C7C96CD90C471447E4C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TranslationRecognizer_FireEvent_SynthesisResult_m6AE445D95E7487065CAB7589BDD9616335B69737_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TranslationRecognizer_U3CStartContinuousRecognitionAsyncU3Eb__45_0_m3949BB584774853669A563EA6FB965124D0C9A73_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TranslationRecognizer_U3CStopContinuousRecognitionAsyncU3Eb__46_0_m9271ACFBD9A2A2C9B9533BFEDE4A84847763AE07_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Utf8StringMarshaler_MarshalNativeToManaged_m102420BD438247158F21E76982168D6DD1EB7066_RuntimeMethod_var;
struct CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshaled_com;
struct CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshaled_pinvoke;
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_com;
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_pinvoke;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_t4B71144DD958900B2F50C53B47A66308A0261701 
{
};

// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t1AF33AD0B7330843448956EC4277517081658AE7* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_t2EDD317F5771E575ACB63527B5AFB71291040342* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t238D0D2427C6B841A01F522A41540165A2C4AE76* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.EmptyArray`1<System.Byte>
struct EmptyArray_1_t7187E746F328254739F076CFBCAABB28D4B4554C  : public RuntimeObject
{
};

struct EmptyArray_1_t7187E746F328254739F076CFBCAABB28D4B4554C_StaticFields
{
	// T[] System.EmptyArray`1::Value
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___Value_0;
};

// System.EmptyArray`1<System.Object>
struct EmptyArray_1_tDF0DD7256B115243AA6BD5558417387A734240EE  : public RuntimeObject
{
};

struct EmptyArray_1_tDF0DD7256B115243AA6BD5558417387A734240EE_StaticFields
{
	// T[] System.EmptyArray`1::Value
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___Value_0;
};
struct Il2CppArrayBounds;

// System.Attribute
struct Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA  : public RuntimeObject
{
};

// Microsoft.CognitiveServices.Speech.Audio.AudioConfig
struct AudioConfig_t97C98F0F764C263046543A14EE6C8CD02B57F4F3  : public RuntimeObject
{
	// System.Boolean Microsoft.CognitiveServices.Speech.Audio.AudioConfig::disposed
	bool ___disposed_0;
	// System.IDisposable Microsoft.CognitiveServices.Speech.Audio.AudioConfig::streamKeepAlive
	RuntimeObject* ___streamKeepAlive_1;
	// System.Boolean Microsoft.CognitiveServices.Speech.Audio.AudioConfig::disposeStream
	bool ___disposeStream_2;
	// Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle Microsoft.CognitiveServices.Speech.Audio.AudioConfig::configHandle
	InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* ___configHandle_3;
	// Microsoft.CognitiveServices.Speech.PropertyCollection Microsoft.CognitiveServices.Speech.Audio.AudioConfig::propBag
	PropertyCollection_tD2FEDF489ECC1689767DEE33A0152F1FA719AA53* ___propBag_4;
};

// Microsoft.CognitiveServices.Speech.CancellationDetails
struct CancellationDetails_t3A257E993FAECAD1A9866267C438E47CFA1D308A  : public RuntimeObject
{
	// Microsoft.CognitiveServices.Speech.CancellationReason Microsoft.CognitiveServices.Speech.CancellationDetails::<Reason>k__BackingField
	int32_t ___U3CReasonU3Ek__BackingField_0;
	// Microsoft.CognitiveServices.Speech.CancellationErrorCode Microsoft.CognitiveServices.Speech.CancellationDetails::<ErrorCode>k__BackingField
	int32_t ___U3CErrorCodeU3Ek__BackingField_1;
	// System.String Microsoft.CognitiveServices.Speech.CancellationDetails::<ErrorDetails>k__BackingField
	String_t* ___U3CErrorDetailsU3Ek__BackingField_2;
	// Microsoft.CognitiveServices.Speech.RecognitionResult Microsoft.CognitiveServices.Speech.CancellationDetails::recognitionResult
	RecognitionResult_t900FA7A9A16DB8B9FDE5395B1B773BDC63BE474F* ___recognitionResult_3;
};

// Microsoft.CognitiveServices.Speech.Internal.CancellationDetails
struct CancellationDetails_tA3D676EDF1007208DD29A9E1C9FAE252FA7AC481  : public RuntimeObject
{
};

// System.Runtime.ConstrainedExecution.CriticalFinalizerObject
struct CriticalFinalizerObject_t1DCAB623CAEA6529A96F5F3EDE3C7048A6E313C9  : public RuntimeObject
{
};

// System.Globalization.CultureInfo
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0  : public RuntimeObject
{
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
	NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* ___numInfo_10;
	// System.Globalization.DateTimeFormatInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::dateTimeInfo
	DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* ___dateTimeInfo_11;
	// System.Globalization.TextInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::textInfo
	TextInfo_tD3BAFCFD77418851E7D5CB8D2588F47019E414B4* ___textInfo_12;
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
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___native_calendar_names_20;
	// System.Globalization.CompareInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::compareInfo
	CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57* ___compareInfo_21;
	// System.Void* System.Globalization.CultureInfo::textinfo_data
	void* ___textinfo_data_22;
	// System.Int32 System.Globalization.CultureInfo::m_dataItem
	int32_t ___m_dataItem_23;
	// System.Globalization.Calendar System.Globalization.CultureInfo::calendar
	Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B* ___calendar_24;
	// System.Globalization.CultureInfo System.Globalization.CultureInfo::parent_culture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___parent_culture_25;
	// System.Boolean System.Globalization.CultureInfo::constructed
	bool ___constructed_26;
	// System.Byte[] System.Globalization.CultureInfo::cached_serialized_form
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___cached_serialized_form_27;
	// System.Globalization.CultureData System.Globalization.CultureInfo::m_cultureData
	CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D* ___m_cultureData_28;
	// System.Boolean System.Globalization.CultureInfo::m_isInherited
	bool ___m_isInherited_29;
};

struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_StaticFields
{
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::invariant_culture_info
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___invariant_culture_info_0;
	// System.Object System.Globalization.CultureInfo::shared_table_lock
	RuntimeObject* ___shared_table_lock_1;
	// System.Globalization.CultureInfo System.Globalization.CultureInfo::default_current_culture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___default_current_culture_2;
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::s_DefaultThreadCurrentUICulture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___s_DefaultThreadCurrentUICulture_34;
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::s_DefaultThreadCurrentCulture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___s_DefaultThreadCurrentCulture_35;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Globalization.CultureInfo> System.Globalization.CultureInfo::shared_by_number
	Dictionary_2_t9FA6D82CAFC18769F7515BB51D1C56DAE09381C3* ___shared_by_number_36;
	// System.Collections.Generic.Dictionary`2<System.String,System.Globalization.CultureInfo> System.Globalization.CultureInfo::shared_by_name
	Dictionary_2_tE1603CE612C16451D1E56FF4D4859D4FE4087C28* ___shared_by_name_37;
	// System.Globalization.CultureInfo System.Globalization.CultureInfo::s_UserPreferredCultureInfoInAppX
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___s_UserPreferredCultureInfoInAppX_38;
	// System.Boolean System.Globalization.CultureInfo::IsTaiwanSku
	bool ___IsTaiwanSku_39;
};
// Native definition for P/Invoke marshalling of System.Globalization.CultureInfo
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_pinvoke
{
	int32_t ___m_isReadOnly_3;
	int32_t ___cultureID_4;
	int32_t ___parent_lcid_5;
	int32_t ___datetime_index_6;
	int32_t ___number_index_7;
	int32_t ___default_calendar_type_8;
	int32_t ___m_useUserOverride_9;
	NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* ___numInfo_10;
	DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* ___dateTimeInfo_11;
	TextInfo_tD3BAFCFD77418851E7D5CB8D2588F47019E414B4* ___textInfo_12;
	char* ___m_name_13;
	char* ___englishname_14;
	char* ___nativename_15;
	char* ___iso3lang_16;
	char* ___iso2lang_17;
	char* ___win3lang_18;
	char* ___territory_19;
	char** ___native_calendar_names_20;
	CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57* ___compareInfo_21;
	void* ___textinfo_data_22;
	int32_t ___m_dataItem_23;
	Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B* ___calendar_24;
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_pinvoke* ___parent_culture_25;
	int32_t ___constructed_26;
	Il2CppSafeArray/*NONE*/* ___cached_serialized_form_27;
	CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshaled_pinvoke* ___m_cultureData_28;
	int32_t ___m_isInherited_29;
};
// Native definition for COM marshalling of System.Globalization.CultureInfo
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_com
{
	int32_t ___m_isReadOnly_3;
	int32_t ___cultureID_4;
	int32_t ___parent_lcid_5;
	int32_t ___datetime_index_6;
	int32_t ___number_index_7;
	int32_t ___default_calendar_type_8;
	int32_t ___m_useUserOverride_9;
	NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* ___numInfo_10;
	DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* ___dateTimeInfo_11;
	TextInfo_tD3BAFCFD77418851E7D5CB8D2588F47019E414B4* ___textInfo_12;
	Il2CppChar* ___m_name_13;
	Il2CppChar* ___englishname_14;
	Il2CppChar* ___nativename_15;
	Il2CppChar* ___iso3lang_16;
	Il2CppChar* ___iso2lang_17;
	Il2CppChar* ___win3lang_18;
	Il2CppChar* ___territory_19;
	Il2CppChar** ___native_calendar_names_20;
	CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57* ___compareInfo_21;
	void* ___textinfo_data_22;
	int32_t ___m_dataItem_23;
	Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B* ___calendar_24;
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_com* ___parent_culture_25;
	int32_t ___constructed_26;
	Il2CppSafeArray/*NONE*/* ___cached_serialized_form_27;
	CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshaled_com* ___m_cultureData_28;
	int32_t ___m_isInherited_29;
};

// Microsoft.CognitiveServices.Speech.Internal.Diagnostics
struct Diagnostics_t3FA9C63DF2124EF11754F978D11B2A7A784CED0F  : public RuntimeObject
{
};

// Microsoft.CognitiveServices.Speech.Internal.DiagnosticsInterop
struct DiagnosticsInterop_tA8D399C1F3B54CEE9AD0E92152924D0D77596050  : public RuntimeObject
{
};

// System.Text.Encoding
struct Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095  : public RuntimeObject
{
	// System.Int32 System.Text.Encoding::m_codePage
	int32_t ___m_codePage_9;
	// System.Globalization.CodePageDataItem System.Text.Encoding::dataItem
	CodePageDataItem_t52460FA30AE37F4F26ACB81055E58002262F19F2* ___dataItem_10;
	// System.Boolean System.Text.Encoding::m_deserializedFromEverett
	bool ___m_deserializedFromEverett_11;
	// System.Boolean System.Text.Encoding::m_isReadOnly
	bool ___m_isReadOnly_12;
	// System.Text.EncoderFallback System.Text.Encoding::encoderFallback
	EncoderFallback_tD2C40CE114AA9D8E1F7196608B2D088548015293* ___encoderFallback_13;
	// System.Text.DecoderFallback System.Text.Encoding::decoderFallback
	DecoderFallback_t7324102215E4ED41EC065C02EB501CB0BC23CD90* ___decoderFallback_14;
};

struct Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095_StaticFields
{
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::defaultEncoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___defaultEncoding_0;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::unicodeEncoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___unicodeEncoding_1;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::bigEndianUnicode
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___bigEndianUnicode_2;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf7Encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___utf7Encoding_3;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf8Encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___utf8Encoding_4;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf32Encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___utf32Encoding_5;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::asciiEncoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___asciiEncoding_6;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::latin1Encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___latin1Encoding_7;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Text.Encoding> modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::encodings
	Dictionary_2_t87EDE08B2E48F793A22DE50D6B3CC2E7EBB2DB54* ___encodings_8;
	// System.Object System.Text.Encoding::s_InternalSyncObject
	RuntimeObject* ___s_InternalSyncObject_15;
};

// Microsoft.CognitiveServices.Speech.Internal.EventArgs
struct EventArgs_t8D97A306218CF4538968C67C8EF6DB40C09F6A54  : public RuntimeObject
{
};

// System.EventArgs
struct EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377  : public RuntimeObject
{
};

struct EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_StaticFields
{
	// System.EventArgs System.EventArgs::Empty
	EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377* ___Empty_0;
};

// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
};

// Microsoft.CognitiveServices.Speech.PropertyCollection
struct PropertyCollection_tD2FEDF489ECC1689767DEE33A0152F1FA719AA53  : public RuntimeObject
{
	// Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle Microsoft.CognitiveServices.Speech.PropertyCollection::propbagHandle
	InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* ___propbagHandle_0;
};

// Microsoft.CognitiveServices.Speech.Internal.PropertyCollection
struct PropertyCollection_tA36C6976925F4EAA7A7EC5B6753E9DFB8B45ADAE  : public RuntimeObject
{
};

// Microsoft.CognitiveServices.Speech.RecognitionResult
struct RecognitionResult_t900FA7A9A16DB8B9FDE5395B1B773BDC63BE474F  : public RuntimeObject
{
	// System.String Microsoft.CognitiveServices.Speech.RecognitionResult::<ResultId>k__BackingField
	String_t* ___U3CResultIdU3Ek__BackingField_0;
	// Microsoft.CognitiveServices.Speech.ResultReason Microsoft.CognitiveServices.Speech.RecognitionResult::<Reason>k__BackingField
	int32_t ___U3CReasonU3Ek__BackingField_1;
	// System.String Microsoft.CognitiveServices.Speech.RecognitionResult::<Text>k__BackingField
	String_t* ___U3CTextU3Ek__BackingField_2;
	// Microsoft.CognitiveServices.Speech.PropertyCollection Microsoft.CognitiveServices.Speech.RecognitionResult::<Properties>k__BackingField
	PropertyCollection_tD2FEDF489ECC1689767DEE33A0152F1FA719AA53* ___U3CPropertiesU3Ek__BackingField_3;
	// Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle Microsoft.CognitiveServices.Speech.RecognitionResult::resultHandle
	InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* ___resultHandle_4;
};

// Microsoft.CognitiveServices.Speech.Internal.RecognitionResult
struct RecognitionResult_t1921BD961EE6E7BC5A34A80B51BADA8479F9F4B7  : public RuntimeObject
{
};

// Microsoft.CognitiveServices.Speech.Internal.Recognizer
struct Recognizer_t5CF9ED1A4463BECEAA89CA3C159DC1F9505B6F45  : public RuntimeObject
{
};

// Microsoft.CognitiveServices.Speech.SpeechConfig
struct SpeechConfig_tAE8FEC093B21AA957B784250CF237DE1C3760DEE  : public RuntimeObject
{
	// Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle Microsoft.CognitiveServices.Speech.SpeechConfig::configHandle
	InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* ___configHandle_0;
	// Microsoft.CognitiveServices.Speech.PropertyCollection Microsoft.CognitiveServices.Speech.SpeechConfig::progBag
	PropertyCollection_tD2FEDF489ECC1689767DEE33A0152F1FA719AA53* ___progBag_1;
};

// Microsoft.CognitiveServices.Speech.Internal.SpeechConfig
struct SpeechConfig_t7654F04EE4DFBA3E6BC32B6FC37E7154828483B9  : public RuntimeObject
{
};

// Microsoft.CognitiveServices.Speech.Internal.SpeechTranslationConfig
struct SpeechTranslationConfig_t6280A39FCA67A20B208CD312B25DE9A5F12589DE  : public RuntimeObject
{
};

// Microsoft.CognitiveServices.Speech.Internal.SpxExceptionThrower
struct SpxExceptionThrower_t7089A8D1D67637C6D033489493B093A2B8E94491  : public RuntimeObject
{
};

// Microsoft.CognitiveServices.Speech.Internal.SpxFactory
struct SpxFactory_tDF81CF05B58700E3E2E2A3A983E93B35C40C355B  : public RuntimeObject
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

// System.Threading.Tasks.Task
struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572  : public RuntimeObject
{
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_taskId
	int32_t ___m_taskId_1;
	// System.Delegate System.Threading.Tasks.Task::m_action
	Delegate_t* ___m_action_2;
	// System.Object System.Threading.Tasks.Task::m_stateObject
	RuntimeObject* ___m_stateObject_3;
	// System.Threading.Tasks.TaskScheduler System.Threading.Tasks.Task::m_taskScheduler
	TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* ___m_taskScheduler_4;
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::m_parent
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___m_parent_5;
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_stateFlags
	int32_t ___m_stateFlags_6;
	// System.Object modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_continuationObject
	RuntimeObject* ___m_continuationObject_7;
	// System.Threading.Tasks.Task/ContingentProperties modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_contingentProperties
	ContingentProperties_t3FA59480914505CEA917B1002EC675F29D0CB540* ___m_contingentProperties_10;
};

struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_StaticFields
{
	// System.Int32 System.Threading.Tasks.Task::s_taskIdCounter
	int32_t ___s_taskIdCounter_0;
	// System.Object System.Threading.Tasks.Task::s_taskCompletionSentinel
	RuntimeObject* ___s_taskCompletionSentinel_8;
	// System.Boolean System.Threading.Tasks.Task::s_asyncDebuggingEnabled
	bool ___s_asyncDebuggingEnabled_9;
	// System.Action`1<System.Object> System.Threading.Tasks.Task::s_taskCancelCallback
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___s_taskCancelCallback_11;
	// System.Func`1<System.Threading.Tasks.Task/ContingentProperties> System.Threading.Tasks.Task::s_createContingentProperties
	Func_1_tD59A12717D79BFB403BF973694B1BE5B85474BD1* ___s_createContingentProperties_14;
	// System.Threading.Tasks.TaskFactory System.Threading.Tasks.Task::<Factory>k__BackingField
	TaskFactory_tF781BD37BE23917412AD83424D1497C7C1509DF0* ___U3CFactoryU3Ek__BackingField_15;
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::<CompletedTask>k__BackingField
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___U3CCompletedTaskU3Ek__BackingField_16;
	// System.Predicate`1<System.Threading.Tasks.Task> System.Threading.Tasks.Task::s_IsExceptionObservedByParentPredicate
	Predicate_1_t7F48518B008C1472339EEEBABA3DE203FE1F26ED* ___s_IsExceptionObservedByParentPredicate_17;
	// System.Threading.ContextCallback System.Threading.Tasks.Task::s_ecCallback
	ContextCallback_tE8AFBDBFCC040FDA8DA8C1EEFE9BD66B16BDA007* ___s_ecCallback_18;
	// System.Predicate`1<System.Object> System.Threading.Tasks.Task::s_IsTaskContinuationNullPredicate
	Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12* ___s_IsTaskContinuationNullPredicate_19;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task> System.Threading.Tasks.Task::s_currentActiveTasks
	Dictionary_2_t403063CE4960B4F46C688912237C6A27E550FF55* ___s_currentActiveTasks_20;
	// System.Object System.Threading.Tasks.Task::s_activeTasksLock
	RuntimeObject* ___s_activeTasksLock_21;
};

struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_ThreadStaticFields
{
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::t_currentTask
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___t_currentTask_12;
	// System.Threading.Tasks.StackGuard System.Threading.Tasks.Task::t_stackGuard
	StackGuard_tACE063A1B7374BDF4AD472DE4585D05AD8745352* ___t_stackGuard_13;
};

// Microsoft.CognitiveServices.Speech.Translation.TranslationSynthesisResult
struct TranslationSynthesisResult_tCCE322C2C7FDC0F193CFD38F27E107E88FAF48D2  : public RuntimeObject
{
	// Microsoft.CognitiveServices.Speech.ResultReason Microsoft.CognitiveServices.Speech.Translation.TranslationSynthesisResult::<Reason>k__BackingField
	int32_t ___U3CReasonU3Ek__BackingField_0;
	// System.Byte[] Microsoft.CognitiveServices.Speech.Translation.TranslationSynthesisResult::audio
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___audio_1;
	// Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle Microsoft.CognitiveServices.Speech.Translation.TranslationSynthesisResult::resultHandle
	InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* ___resultHandle_2;
};

// Microsoft.CognitiveServices.Speech.Internal.Utf8StringMarshaler
struct Utf8StringMarshaler_t05B5825C33FC825D08D4E781E0DF7CB3AFE2E3EF  : public RuntimeObject
{
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

// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
struct KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 
{
	// TKey System.Collections.Generic.KeyValuePair`2::key
	RuntimeObject* ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject* ___value_1;
};

// System.Collections.Generic.KeyValuePair`2<System.String,System.String>
struct KeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A 
{
	// TKey System.Collections.Generic.KeyValuePair`2::key
	String_t* ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	String_t* ___value_1;
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

// Microsoft.CognitiveServices.Speech.Internal.MonoPInvokeCallbackAttribute
struct MonoPInvokeCallbackAttribute_tCAE7DBDDEE93BF80011F064297B9B66A3719DCE8  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
	// System.Type Microsoft.CognitiveServices.Speech.Internal.MonoPInvokeCallbackAttribute::type
	Type_t* ___type_0;
};

// Microsoft.CognitiveServices.Speech.SessionEventArgs
struct SessionEventArgs_t06C8DB22E01F18F0B45A4E719BECB043B4D961BC  : public EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377
{
	// Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle Microsoft.CognitiveServices.Speech.SessionEventArgs::eventHandle
	InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* ___eventHandle_1;
	// System.String Microsoft.CognitiveServices.Speech.SessionEventArgs::<SessionId>k__BackingField
	String_t* ___U3CSessionIdU3Ek__BackingField_4;
};

// Microsoft.CognitiveServices.Speech.SpeechRecognitionResult
struct SpeechRecognitionResult_tBA76D21E6D62BB6B2CDC9F83766BB1E791649D94  : public RecognitionResult_t900FA7A9A16DB8B9FDE5395B1B773BDC63BE474F
{
};

// Microsoft.CognitiveServices.Speech.SpeechTranslationConfig
struct SpeechTranslationConfig_t1EEE80E7A3DA15D83DEBF70B9B811498B739CE8B  : public SpeechConfig_tAE8FEC093B21AA957B784250CF237DE1C3760DEE
{
	// System.String Microsoft.CognitiveServices.Speech.SpeechTranslationConfig::targetLanguages
	String_t* ___targetLanguages_2;
};

// Microsoft.CognitiveServices.Speech.Translation.TranslationRecognitionResult
struct TranslationRecognitionResult_tE95FF320EDD627570B9D1B3C710EB7925CC54D19  : public RecognitionResult_t900FA7A9A16DB8B9FDE5395B1B773BDC63BE474F
{
	// System.Collections.Generic.Dictionary`2<System.String,System.String> Microsoft.CognitiveServices.Speech.Translation.TranslationRecognitionResult::translationTextResultMap
	Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ___translationTextResultMap_6;
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

// System.Runtime.InteropServices.GCHandle
struct GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC 
{
	// System.IntPtr System.Runtime.InteropServices.GCHandle::handle
	intptr_t ___handle_0;
};

// Microsoft.CognitiveServices.Speech.RecognitionEventArgs
struct RecognitionEventArgs_tF3045EA40FBF0ACD26A0B6F7D4144036AA7D05F9  : public SessionEventArgs_t06C8DB22E01F18F0B45A4E719BECB043B4D961BC
{
	// System.UInt64 Microsoft.CognitiveServices.Speech.RecognitionEventArgs::<Offset>k__BackingField
	uint64_t ___U3COffsetU3Ek__BackingField_5;
};

// System.RuntimeTypeHandle
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;
};

// System.Runtime.InteropServices.SafeHandle
struct SafeHandle_tC1A4DA80DA89B867CC011B707A07275230321BF7  : public CriticalFinalizerObject_t1DCAB623CAEA6529A96F5F3EDE3C7048A6E313C9
{
	// System.IntPtr System.Runtime.InteropServices.SafeHandle::handle
	intptr_t ___handle_0;
	// System.Int32 System.Runtime.InteropServices.SafeHandle::_state
	int32_t ____state_1;
	// System.Boolean System.Runtime.InteropServices.SafeHandle::_ownsHandle
	bool ____ownsHandle_2;
	// System.Boolean System.Runtime.InteropServices.SafeHandle::_fullyInitialized
	bool ____fullyInitialized_3;
};

// Microsoft.CognitiveServices.Speech.Internal.SpxError
struct SpxError_t1CCB290F01587A895B752386C959C6E0346321AD  : public RuntimeObject
{
};

struct SpxError_t1CCB290F01587A895B752386C959C6E0346321AD_StaticFields
{
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
};

// Microsoft.CognitiveServices.Speech.Translation.TranslationSynthesisEventArgs
struct TranslationSynthesisEventArgs_t8FB96FD526982A583F5A91C6EF7CB17C1210A59F  : public SessionEventArgs_t06C8DB22E01F18F0B45A4E719BECB043B4D961BC
{
	// Microsoft.CognitiveServices.Speech.Translation.TranslationSynthesisResult Microsoft.CognitiveServices.Speech.Translation.TranslationSynthesisEventArgs::<Result>k__BackingField
	TranslationSynthesisResult_tCCE322C2C7FDC0F193CFD38F27E107E88FAF48D2* ___U3CResultU3Ek__BackingField_5;
};

// System.ApplicationException
struct ApplicationException_tA744BED4E90266BD255285CD4CF909BAB3EE811A  : public Exception_t
{
};

// Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle
struct InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D  : public SafeHandle_tC1A4DA80DA89B867CC011B707A07275230321BF7
{
	// Microsoft.CognitiveServices.Speech.Internal.HandleRelease Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle::releaseHandleFunc
	HandleRelease_tDA5C5C8C145FFFB7E9AE3ADB1506118017AC70F9* ___releaseHandleFunc_6;
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

// Microsoft.CognitiveServices.Speech.Recognizer
struct Recognizer_tCA087D63D8BDE21D877CECAAF536BDCCFE54729A  : public RuntimeObject
{
	// System.EventHandler`1<Microsoft.CognitiveServices.Speech.SessionEventArgs> Microsoft.CognitiveServices.Speech.Recognizer::_SessionStarted
	EventHandler_1_tB44EB3A3EAA7B1B7ED121BF2DF6360B62B13EA07* ____SessionStarted_0;
	// System.EventHandler`1<Microsoft.CognitiveServices.Speech.SessionEventArgs> Microsoft.CognitiveServices.Speech.Recognizer::_SessionStopped
	EventHandler_1_tB44EB3A3EAA7B1B7ED121BF2DF6360B62B13EA07* ____SessionStopped_1;
	// System.EventHandler`1<Microsoft.CognitiveServices.Speech.RecognitionEventArgs> Microsoft.CognitiveServices.Speech.Recognizer::_SpeechStartDetected
	EventHandler_1_t4457009845FA4C1ABCF83D7E00C38F13807F18F0* ____SpeechStartDetected_2;
	// System.EventHandler`1<Microsoft.CognitiveServices.Speech.RecognitionEventArgs> Microsoft.CognitiveServices.Speech.Recognizer::_SpeechEndDetected
	EventHandler_1_t4457009845FA4C1ABCF83D7E00C38F13807F18F0* ____SpeechEndDetected_3;
	// Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle Microsoft.CognitiveServices.Speech.Recognizer::recoHandle
	InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* ___recoHandle_4;
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
	CallbackFunctionDelegate_tC745A2B557EE8241DF1F7ABD3BFC1C8F3A2E81AA* ___speechStartDetectedCallbackDelegate_10;
	// Microsoft.CognitiveServices.Speech.Internal.CallbackFunctionDelegate Microsoft.CognitiveServices.Speech.Recognizer::speechEndDetectedCallbackDelegate
	CallbackFunctionDelegate_tC745A2B557EE8241DF1F7ABD3BFC1C8F3A2E81AA* ___speechEndDetectedCallbackDelegate_11;
	// Microsoft.CognitiveServices.Speech.Internal.CallbackFunctionDelegate Microsoft.CognitiveServices.Speech.Recognizer::sessionStartedCallbackDelegate
	CallbackFunctionDelegate_tC745A2B557EE8241DF1F7ABD3BFC1C8F3A2E81AA* ___sessionStartedCallbackDelegate_12;
	// Microsoft.CognitiveServices.Speech.Internal.CallbackFunctionDelegate Microsoft.CognitiveServices.Speech.Recognizer::sessionStoppedCallbackDelegate
	CallbackFunctionDelegate_tC745A2B557EE8241DF1F7ABD3BFC1C8F3A2E81AA* ___sessionStoppedCallbackDelegate_13;
	// System.Runtime.InteropServices.GCHandle Microsoft.CognitiveServices.Speech.Recognizer::gch
	GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC ___gch_14;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) Microsoft.CognitiveServices.Speech.Recognizer::disposed
	bool ___disposed_15;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) Microsoft.CognitiveServices.Speech.Recognizer::isDisposing
	bool ___isDisposing_16;
	// System.Object Microsoft.CognitiveServices.Speech.Recognizer::recognizerLock
	RuntimeObject* ___recognizerLock_17;
	// System.Int32 Microsoft.CognitiveServices.Speech.Recognizer::activeAsyncRecognitionCounter
	int32_t ___activeAsyncRecognitionCounter_18;
};

// Microsoft.CognitiveServices.Speech.SpeechRecognitionEventArgs
struct SpeechRecognitionEventArgs_tA7F1649E47FF3239DACE11D5537ECC0AC23E94BD  : public RecognitionEventArgs_tF3045EA40FBF0ACD26A0B6F7D4144036AA7D05F9
{
	// Microsoft.CognitiveServices.Speech.SpeechRecognitionResult Microsoft.CognitiveServices.Speech.SpeechRecognitionEventArgs::<Result>k__BackingField
	SpeechRecognitionResult_tBA76D21E6D62BB6B2CDC9F83766BB1E791649D94* ___U3CResultU3Ek__BackingField_6;
};

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// Microsoft.CognitiveServices.Speech.Translation.TranslationRecognitionEventArgs
struct TranslationRecognitionEventArgs_t0F1D46343AA090830357DA90FD500DC7FC75BEF0  : public RecognitionEventArgs_tF3045EA40FBF0ACD26A0B6F7D4144036AA7D05F9
{
	// Microsoft.CognitiveServices.Speech.Translation.TranslationRecognitionResult Microsoft.CognitiveServices.Speech.Translation.TranslationRecognitionEventArgs::<Result>k__BackingField
	TranslationRecognitionResult_tE95FF320EDD627570B9D1B3C710EB7925CC54D19* ___U3CResultU3Ek__BackingField_6;
};

// System.Type
struct Type_t  : public MemberInfo_t
{
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl_8;
};

struct Type_t_StaticFields
{
	// System.Reflection.Binder modreq(System.Runtime.CompilerServices.IsVolatile) System.Type::s_defaultBinder
	Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235* ___s_defaultBinder_0;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_1;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___EmptyTypes_2;
	// System.Object System.Type::Missing
	RuntimeObject* ___Missing_3;
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterAttribute_4;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterName_5;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterNameIgnoreCase_6;
};

// System.EventHandler`1<System.Object>
struct EventHandler_1_tD8C4A5BE1F7C91B1A7E99AE87AFD2F5432C38746  : public MulticastDelegate_t
{
};
// COM Callable Wrapper interface definition for System.EventHandler`1<System.Object>
struct IEventHandler_1_tD8C4A5BE1F7C91B1A7E99AE87AFD2F5432C38746_ComCallableWrapper : Il2CppIUnknown
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL Invoke(Il2CppIInspectable* ___sender0, Il2CppIInspectable* ___e1) = 0;
};


// System.EventHandler`1<Microsoft.CognitiveServices.Speech.RecognitionEventArgs>
struct EventHandler_1_t4457009845FA4C1ABCF83D7E00C38F13807F18F0  : public MulticastDelegate_t
{
};

// System.EventHandler`1<Microsoft.CognitiveServices.Speech.SessionEventArgs>
struct EventHandler_1_tB44EB3A3EAA7B1B7ED121BF2DF6360B62B13EA07  : public MulticastDelegate_t
{
};

// System.EventHandler`1<Microsoft.CognitiveServices.Speech.SpeechRecognitionCanceledEventArgs>
struct EventHandler_1_t8FB3884B878D3DEA670EAAD761B40C42B82E3F46  : public MulticastDelegate_t
{
};

// System.EventHandler`1<Microsoft.CognitiveServices.Speech.SpeechRecognitionEventArgs>
struct EventHandler_1_tFE5F3A49257B61DC2A2C46D8D8C0CE7A76F99979  : public MulticastDelegate_t
{
};

// System.EventHandler`1<Microsoft.CognitiveServices.Speech.Translation.TranslationRecognitionCanceledEventArgs>
struct EventHandler_1_t529E119B11382401540BF02D1C8026AC460279A8  : public MulticastDelegate_t
{
};

// System.EventHandler`1<Microsoft.CognitiveServices.Speech.Translation.TranslationRecognitionEventArgs>
struct EventHandler_1_t008E3F55CF18E8D623598A49DFBC452B2DD6E698  : public MulticastDelegate_t
{
};

// System.EventHandler`1<Microsoft.CognitiveServices.Speech.Translation.TranslationSynthesisEventArgs>
struct EventHandler_1_tB299EE0561708ADFB5D5F63E18C58E89D72E7E6E  : public MulticastDelegate_t
{
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

// Microsoft.CognitiveServices.Speech.Internal.CallbackFunctionDelegate
struct CallbackFunctionDelegate_tC745A2B557EE8241DF1F7ABD3BFC1C8F3A2E81AA  : public MulticastDelegate_t
{
};

// Microsoft.CognitiveServices.Speech.Internal.HandleRelease
struct HandleRelease_tDA5C5C8C145FFFB7E9AE3ADB1506118017AC70F9  : public MulticastDelegate_t
{
};

// System.InvalidOperationException
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// Microsoft.CognitiveServices.Speech.SpeechRecognitionCanceledEventArgs
struct SpeechRecognitionCanceledEventArgs_t5FB6DBEE3C3E77AE97C05A03CE7CBC0BD387CA86  : public SpeechRecognitionEventArgs_tA7F1649E47FF3239DACE11D5537ECC0AC23E94BD
{
	// Microsoft.CognitiveServices.Speech.CancellationReason Microsoft.CognitiveServices.Speech.SpeechRecognitionCanceledEventArgs::<Reason>k__BackingField
	int32_t ___U3CReasonU3Ek__BackingField_7;
	// Microsoft.CognitiveServices.Speech.CancellationErrorCode Microsoft.CognitiveServices.Speech.SpeechRecognitionCanceledEventArgs::<ErrorCode>k__BackingField
	int32_t ___U3CErrorCodeU3Ek__BackingField_8;
	// System.String Microsoft.CognitiveServices.Speech.SpeechRecognitionCanceledEventArgs::<ErrorDetails>k__BackingField
	String_t* ___U3CErrorDetailsU3Ek__BackingField_9;
};

// Microsoft.CognitiveServices.Speech.SpeechRecognizer
struct SpeechRecognizer_t949CB7F9294C8FD93325B16A1791A28325C2203B  : public Recognizer_tCA087D63D8BDE21D877CECAAF536BDCCFE54729A
{
	// System.EventHandler`1<Microsoft.CognitiveServices.Speech.SpeechRecognitionEventArgs> Microsoft.CognitiveServices.Speech.SpeechRecognizer::_Recognizing
	EventHandler_1_tFE5F3A49257B61DC2A2C46D8D8C0CE7A76F99979* ____Recognizing_19;
	// System.EventHandler`1<Microsoft.CognitiveServices.Speech.SpeechRecognitionEventArgs> Microsoft.CognitiveServices.Speech.SpeechRecognizer::_Recognized
	EventHandler_1_tFE5F3A49257B61DC2A2C46D8D8C0CE7A76F99979* ____Recognized_20;
	// System.EventHandler`1<Microsoft.CognitiveServices.Speech.SpeechRecognitionCanceledEventArgs> Microsoft.CognitiveServices.Speech.SpeechRecognizer::_Canceled
	EventHandler_1_t8FB3884B878D3DEA670EAAD761B40C42B82E3F46* ____Canceled_21;
	// Microsoft.CognitiveServices.Speech.Internal.CallbackFunctionDelegate Microsoft.CognitiveServices.Speech.SpeechRecognizer::recognizingCallbackDelegate
	CallbackFunctionDelegate_tC745A2B557EE8241DF1F7ABD3BFC1C8F3A2E81AA* ___recognizingCallbackDelegate_22;
	// Microsoft.CognitiveServices.Speech.Internal.CallbackFunctionDelegate Microsoft.CognitiveServices.Speech.SpeechRecognizer::recognizedCallbackDelegate
	CallbackFunctionDelegate_tC745A2B557EE8241DF1F7ABD3BFC1C8F3A2E81AA* ___recognizedCallbackDelegate_23;
	// Microsoft.CognitiveServices.Speech.Internal.CallbackFunctionDelegate Microsoft.CognitiveServices.Speech.SpeechRecognizer::canceledCallbackDelegate
	CallbackFunctionDelegate_tC745A2B557EE8241DF1F7ABD3BFC1C8F3A2E81AA* ___canceledCallbackDelegate_24;
	// Microsoft.CognitiveServices.Speech.PropertyCollection Microsoft.CognitiveServices.Speech.SpeechRecognizer::<Properties>k__BackingField
	PropertyCollection_tD2FEDF489ECC1689767DEE33A0152F1FA719AA53* ___U3CPropertiesU3Ek__BackingField_25;
	// Microsoft.CognitiveServices.Speech.Audio.AudioConfig Microsoft.CognitiveServices.Speech.SpeechRecognizer::audioInputKeepAlive
	AudioConfig_t97C98F0F764C263046543A14EE6C8CD02B57F4F3* ___audioInputKeepAlive_26;
};

// Microsoft.CognitiveServices.Speech.Translation.TranslationRecognitionCanceledEventArgs
struct TranslationRecognitionCanceledEventArgs_tD5827BE8533B28001EA604E99F9C8E73FFD0B853  : public TranslationRecognitionEventArgs_t0F1D46343AA090830357DA90FD500DC7FC75BEF0
{
	// Microsoft.CognitiveServices.Speech.CancellationReason Microsoft.CognitiveServices.Speech.Translation.TranslationRecognitionCanceledEventArgs::<Reason>k__BackingField
	int32_t ___U3CReasonU3Ek__BackingField_7;
	// Microsoft.CognitiveServices.Speech.CancellationErrorCode Microsoft.CognitiveServices.Speech.Translation.TranslationRecognitionCanceledEventArgs::<ErrorCode>k__BackingField
	int32_t ___U3CErrorCodeU3Ek__BackingField_8;
	// System.String Microsoft.CognitiveServices.Speech.Translation.TranslationRecognitionCanceledEventArgs::<ErrorDetails>k__BackingField
	String_t* ___U3CErrorDetailsU3Ek__BackingField_9;
};

// Microsoft.CognitiveServices.Speech.Translation.TranslationRecognizer
struct TranslationRecognizer_tAEE1F79841E087D238E7450755C96DD589BE0168  : public Recognizer_tCA087D63D8BDE21D877CECAAF536BDCCFE54729A
{
	// System.EventHandler`1<Microsoft.CognitiveServices.Speech.Translation.TranslationRecognitionEventArgs> Microsoft.CognitiveServices.Speech.Translation.TranslationRecognizer::_Recognizing
	EventHandler_1_t008E3F55CF18E8D623598A49DFBC452B2DD6E698* ____Recognizing_19;
	// System.EventHandler`1<Microsoft.CognitiveServices.Speech.Translation.TranslationRecognitionEventArgs> Microsoft.CognitiveServices.Speech.Translation.TranslationRecognizer::_Recognized
	EventHandler_1_t008E3F55CF18E8D623598A49DFBC452B2DD6E698* ____Recognized_20;
	// System.EventHandler`1<Microsoft.CognitiveServices.Speech.Translation.TranslationRecognitionCanceledEventArgs> Microsoft.CognitiveServices.Speech.Translation.TranslationRecognizer::_Canceled
	EventHandler_1_t529E119B11382401540BF02D1C8026AC460279A8* ____Canceled_21;
	// System.EventHandler`1<Microsoft.CognitiveServices.Speech.Translation.TranslationSynthesisEventArgs> Microsoft.CognitiveServices.Speech.Translation.TranslationRecognizer::_Synthesizing
	EventHandler_1_tB299EE0561708ADFB5D5F63E18C58E89D72E7E6E* ____Synthesizing_22;
	// Microsoft.CognitiveServices.Speech.PropertyCollection Microsoft.CognitiveServices.Speech.Translation.TranslationRecognizer::<Properties>k__BackingField
	PropertyCollection_tD2FEDF489ECC1689767DEE33A0152F1FA719AA53* ___U3CPropertiesU3Ek__BackingField_23;
	// Microsoft.CognitiveServices.Speech.Internal.CallbackFunctionDelegate Microsoft.CognitiveServices.Speech.Translation.TranslationRecognizer::recognizingCallbackDelegate
	CallbackFunctionDelegate_tC745A2B557EE8241DF1F7ABD3BFC1C8F3A2E81AA* ___recognizingCallbackDelegate_24;
	// Microsoft.CognitiveServices.Speech.Internal.CallbackFunctionDelegate Microsoft.CognitiveServices.Speech.Translation.TranslationRecognizer::recognizedCallbackDelegate
	CallbackFunctionDelegate_tC745A2B557EE8241DF1F7ABD3BFC1C8F3A2E81AA* ___recognizedCallbackDelegate_25;
	// Microsoft.CognitiveServices.Speech.Internal.CallbackFunctionDelegate Microsoft.CognitiveServices.Speech.Translation.TranslationRecognizer::canceledCallbackDelegate
	CallbackFunctionDelegate_tC745A2B557EE8241DF1F7ABD3BFC1C8F3A2E81AA* ___canceledCallbackDelegate_26;
	// Microsoft.CognitiveServices.Speech.Internal.CallbackFunctionDelegate Microsoft.CognitiveServices.Speech.Translation.TranslationRecognizer::translationSynthesisCallbackDelegate
	CallbackFunctionDelegate_tC745A2B557EE8241DF1F7ABD3BFC1C8F3A2E81AA* ___translationSynthesisCallbackDelegate_27;
	// Microsoft.CognitiveServices.Speech.Audio.AudioConfig Microsoft.CognitiveServices.Speech.Translation.TranslationRecognizer::audioInputKeepAlive
	AudioConfig_t97C98F0F764C263046543A14EE6C8CD02B57F4F3* ___audioInputKeepAlive_28;
};

// Microsoft.CognitiveServices.Speech.Recognizer/GetRecognizerFromConfigDelegate
struct GetRecognizerFromConfigDelegate_t17EEE1C5E4305DB57FCBE2C975DB62B9BA4B584D  : public MulticastDelegate_t
{
};

// Microsoft.CognitiveServices.Speech.Internal.SpxFactory/GetResultDelegate
struct GetResultDelegate_t678B8552898C76C54DA3B9B56C14C65BDE7D434B  : public MulticastDelegate_t
{
};

// System.ArgumentNullException
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129  : public ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263
{
};

// System.ObjectDisposedException
struct ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB  : public InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB
{
	// System.String System.ObjectDisposedException::_objectName
	String_t* ____objectName_18;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918  : public RuntimeArray
{
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

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


// T Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle::GetObjectFromWeakHandle<System.Object>(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* InteropSafeHandle_GetObjectFromWeakHandle_TisRuntimeObject_m48577DAC91C9A8DC985418E2F15C255AAB70A856_gshared (intptr_t ___nativeHandle0, const RuntimeMethod* method) ;
// System.Void System.EventHandler`1<System.Object>::Invoke(System.Object,TEventArgs)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void EventHandler_1_Invoke_mBD72C04FF5A08A2EA93DFD21037CD1C27A48D07A_gshared_inline (EventHandler_1_tD8C4A5BE1F7C91B1A7E99AE87AFD2F5432C38746* __this, RuntimeObject* ___sender0, RuntimeObject* ___e1, const RuntimeMethod* method) ;
// TKey System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::get_Key()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Key_mBD8EA7557C27E6956F2AF29DA3F7499B2F51A282_gshared_inline (KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* __this, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::get_Value()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Value_mC6BD8075F9C9DDEF7B4D731E5C38EC19103988E7_gshared_inline (KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::set_Item(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m1A840355E8EDAECEA9D0C6F5E51B248FAA449CBD_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___key0, RuntimeObject* ___value1, const RuntimeMethod* method) ;
// T[] System.Array::Empty<System.Byte>()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* Array_Empty_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m89F7B056854DF715AA3E2B78EB84D5FA3878E474_gshared_inline (const RuntimeMethod* method) ;
// T[] System.Array::Empty<System.Object>()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_gshared_inline (const RuntimeMethod* method) ;

// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Boolean System.IntPtr::op_Inequality(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IntPtr_op_Inequality_m2F715312CBFCE7E1A81D0689F68B97218E37E5D1 (intptr_t ___value10, intptr_t ___value21, const RuntimeMethod* method) ;
// System.Void Microsoft.CognitiveServices.Speech.Internal.HandleRelease::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandleRelease__ctor_m5265A47915D90FC04F512F3D1BC68A711343A4E7 (HandleRelease_tDA5C5C8C145FFFB7E9AE3ADB1506118017AC70F9* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle::.ctor(System.IntPtr,Microsoft.CognitiveServices.Speech.Internal.HandleRelease)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InteropSafeHandle__ctor_mC37ECE3504FFCF1C3A565E45B1659808FD310B62 (InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* __this, intptr_t ___handle0, HandleRelease_tDA5C5C8C145FFFB7E9AE3ADB1506118017AC70F9* ___releaseHandle1, const RuntimeMethod* method) ;
// System.Void System.Runtime.InteropServices.SafeHandle::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SafeHandle_Dispose_m4FB5B8A7ED78B90757F1B570D4025F3BA26A39F3 (SafeHandle_tC1A4DA80DA89B867CC011B707A07275230321BF7* __this, const RuntimeMethod* method) ;
// System.Void Microsoft.CognitiveServices.Speech.Internal.SpxExceptionThrower::ThrowIfNull(System.Object,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpxExceptionThrower_ThrowIfNull_m5C9E05F3DEDEE273B1049A6052813A5870C4F223 (RuntimeObject* ___item0, String_t* ___message1, const RuntimeMethod* method) ;
// System.String Microsoft.CognitiveServices.Speech.PropertyCollection::GetPropertyString(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,System.Int32,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* PropertyCollection_GetPropertyString_mE4586EBDDDD6EAAC938A0717F3ED064BF55EB83A (PropertyCollection_tD2FEDF489ECC1689767DEE33A0152F1FA719AA53* __this, InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* ___propHandle0, int32_t ___id1, String_t* ___name2, String_t* ___defaultValue3, const RuntimeMethod* method) ;
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.Utf8StringMarshaler::MarshalManagedToNative(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Utf8StringMarshaler_MarshalManagedToNative_m9048724C7EA2DE6AB4263E09D6B7C3942BD936B1 (String_t* ___str0, const RuntimeMethod* method) ;
// System.Void System.Runtime.InteropServices.Marshal::FreeHGlobal(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Marshal_FreeHGlobal_m691596E1E19CB74918F8FF871A05E4BE80748BCC (intptr_t ___hglobal0, const RuntimeMethod* method) ;
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.PropertyCollection::property_bag_set_string(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,System.Int32,System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t PropertyCollection_property_bag_set_string_m3B3493AE6E2894BE2258E427938B0FE52490AF64 (InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* ___propbag0, int32_t ___id1, intptr_t ___name2, intptr_t ___value3, const RuntimeMethod* method) ;
// System.Void Microsoft.CognitiveServices.Speech.Internal.SpxExceptionThrower::ThrowIfFail(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpxExceptionThrower_ThrowIfFail_m80558DF4FFB9A961C7CCC15CD13AF53F5437BA21 (intptr_t ___hr0, const RuntimeMethod* method) ;
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.PropertyCollection::property_bag_get_string(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,System.Int32,System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t PropertyCollection_property_bag_get_string_mE4B57B59FFF4B01AB9A63785B5702904C03BB581 (InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* ___propbag0, int32_t ___id1, intptr_t ___name2, intptr_t ___defaultValue3, const RuntimeMethod* method) ;
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.PropertyCollection::property_bag_free_string(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t PropertyCollection_property_bag_free_string_m4B23B011D0B261E565A1E8AB841EDAC0AE48D9C4 (intptr_t ___ptr0, const RuntimeMethod* method) ;
// System.String Microsoft.CognitiveServices.Speech.Internal.Utf8StringMarshaler::MarshalNativeToManaged(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Utf8StringMarshaler_MarshalNativeToManaged_m102420BD438247158F21E76982168D6DD1EB7066 (intptr_t ___native0, const RuntimeMethod* method) ;
// System.Void Microsoft.CognitiveServices.Speech.SessionEventArgs::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SessionEventArgs__ctor_m240C60ECA28570ED5A8FF624C62BAE2EBA25A5AA (SessionEventArgs_t06C8DB22E01F18F0B45A4E719BECB043B4D961BC* __this, intptr_t ___eventHandlePtr0, const RuntimeMethod* method) ;
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.Recognizer::recognizer_recognition_event_get_offset(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,System.UInt64&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Recognizer_recognizer_recognition_event_get_offset_m5798A68CFDD94101E91CEFD84C3E747272521543 (InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* ___eventHandle0, uint64_t* ___offset1, const RuntimeMethod* method) ;
// System.Globalization.CultureInfo System.Globalization.CultureInfo::get_InvariantCulture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* CultureInfo_get_InvariantCulture_m78DAB8CBE8766445310782B6E61FB7A9983AD425 (const RuntimeMethod* method) ;
// System.String Microsoft.CognitiveServices.Speech.SessionEventArgs::get_SessionId()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* SessionEventArgs_get_SessionId_m8963B1EBE96E2EC946789DE47BBC4A17292FDF33_inline (SessionEventArgs_t06C8DB22E01F18F0B45A4E719BECB043B4D961BC* __this, const RuntimeMethod* method) ;
// System.UInt64 Microsoft.CognitiveServices.Speech.RecognitionEventArgs::get_Offset()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint64_t RecognitionEventArgs_get_Offset_m7518854BD1D37BB220A79F81301A0A07E7D791A9_inline (RecognitionEventArgs_tF3045EA40FBF0ACD26A0B6F7D4144036AA7D05F9* __this, const RuntimeMethod* method) ;
// System.String System.String::Format(System.IFormatProvider,System.String,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m69D52D3917F3D1BAC76B506B9BAA68A41B483DEF (RuntimeObject* ___provider0, String_t* ___format1, RuntimeObject* ___arg02, RuntimeObject* ___arg13, const RuntimeMethod* method) ;
// System.Void Microsoft.CognitiveServices.Speech.Internal.SpxFactory/GetResultDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GetResultDelegate__ctor_mE4D38F6D4B3F9FBE85FE26118D690DD00A195314 (GetResultDelegate_t678B8552898C76C54DA3B9B56C14C65BDE7D434B* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.String Microsoft.CognitiveServices.Speech.Internal.SpxFactory::GetDataFromHandleUsingDelegate(Microsoft.CognitiveServices.Speech.Internal.SpxFactory/GetResultDelegate,Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SpxFactory_GetDataFromHandleUsingDelegate_m2292A32ABAA69783218EFADD6C6269D5527378CD (GetResultDelegate_t678B8552898C76C54DA3B9B56C14C65BDE7D434B* ___functionPtr0, InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* ___handle1, int32_t ___maxCharCount2, const RuntimeMethod* method) ;
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.RecognitionResult::result_get_reason(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,Microsoft.CognitiveServices.Speech.ResultReason&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t RecognitionResult_result_get_reason_m24BBA306606BC3C381D4A4393ACB71DD4D2050DF (InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* ___result0, int32_t* ___reason1, const RuntimeMethod* method) ;
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.RecognitionResult::result_get_property_bag(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,System.IntPtr&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t RecognitionResult_result_get_property_bag_m5D8123FA8E1448FC52D27AA615145767ACF533C5 (InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* ___result0, intptr_t* ___hpropbag1, const RuntimeMethod* method) ;
// System.Void Microsoft.CognitiveServices.Speech.PropertyCollection::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertyCollection__ctor_m8F53EB9B9655888D9E2B7AEBB9460B49265618B7 (PropertyCollection_tD2FEDF489ECC1689767DEE33A0152F1FA719AA53* __this, intptr_t ___propertyBagPtr0, const RuntimeMethod* method) ;
// System.Void Microsoft.CognitiveServices.Speech.RecognitionResult::set_Properties(Microsoft.CognitiveServices.Speech.PropertyCollection)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RecognitionResult_set_Properties_m4882E5F4FF2BD9889CA0D982BA14CB48E6936468_inline (RecognitionResult_t900FA7A9A16DB8B9FDE5395B1B773BDC63BE474F* __this, PropertyCollection_tD2FEDF489ECC1689767DEE33A0152F1FA719AA53* ___value0, const RuntimeMethod* method) ;
// System.String System.String::Format(System.IFormatProvider,System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mBFACD7FE8657957CE3D5DA54D519AB418AF421E7 (RuntimeObject* ___provider0, String_t* ___format1, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args2, const RuntimeMethod* method) ;
// System.Void Microsoft.CognitiveServices.Speech.CancellationDetails::.ctor(Microsoft.CognitiveServices.Speech.RecognitionResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CancellationDetails__ctor_m5ECA54A2F0D76D1BF8E39C7AEF5DCC99D8672E26 (CancellationDetails_t3A257E993FAECAD1A9866267C438E47CFA1D308A* __this, RecognitionResult_t900FA7A9A16DB8B9FDE5395B1B773BDC63BE474F* ___result0, const RuntimeMethod* method) ;
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.CancellationDetails::result_get_reason_canceled(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,Microsoft.CognitiveServices.Speech.CancellationReason&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t CancellationDetails_result_get_reason_canceled_mB6B75B4486D05ADF2F85CDFD0F60E8DC61FB9800 (InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* ___result0, int32_t* ___reason1, const RuntimeMethod* method) ;
// System.Void Microsoft.CognitiveServices.Speech.CancellationDetails::set_Reason(Microsoft.CognitiveServices.Speech.CancellationReason)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CancellationDetails_set_Reason_m12D27884D7BBCF9EC1908A1DFF49066DEF4EF2B5_inline (CancellationDetails_t3A257E993FAECAD1A9866267C438E47CFA1D308A* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.CancellationDetails::result_get_canceled_error_code(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,Microsoft.CognitiveServices.Speech.CancellationErrorCode&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t CancellationDetails_result_get_canceled_error_code_m8469A5D13BF7FBEAC7552AB749BE0E63258F87A0 (InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* ___result0, int32_t* ___errorCode1, const RuntimeMethod* method) ;
// System.Void Microsoft.CognitiveServices.Speech.CancellationDetails::set_ErrorCode(Microsoft.CognitiveServices.Speech.CancellationErrorCode)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CancellationDetails_set_ErrorCode_m78B75A1457D448E18D427A192E95A964218C8A74_inline (CancellationDetails_t3A257E993FAECAD1A9866267C438E47CFA1D308A* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void Microsoft.CognitiveServices.Speech.CancellationDetails::set_ErrorDetails(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CancellationDetails_set_ErrorDetails_m22095079546C7E7DC32D28BB7D2271B3E68ACE93_inline (CancellationDetails_t3A257E993FAECAD1A9866267C438E47CFA1D308A* __this, String_t* ___value0, const RuntimeMethod* method) ;
// Microsoft.CognitiveServices.Speech.CancellationReason Microsoft.CognitiveServices.Speech.CancellationDetails::get_Reason()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t CancellationDetails_get_Reason_m353778943984FF273C594BBB7D83D519C0B58180_inline (CancellationDetails_t3A257E993FAECAD1A9866267C438E47CFA1D308A* __this, const RuntimeMethod* method) ;
// System.String Microsoft.CognitiveServices.Speech.CancellationDetails::get_ErrorDetails()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* CancellationDetails_get_ErrorDetails_mB3C4D6386464A3C5168B7EEFAAE45EC62EF95636_inline (CancellationDetails_t3A257E993FAECAD1A9866267C438E47CFA1D308A* __this, const RuntimeMethod* method) ;
// System.Void Microsoft.CognitiveServices.Speech.Recognizer::FireEvent_SetSessionStarted(System.IntPtr,System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Recognizer_FireEvent_SetSessionStarted_m52E09A4B81972BF98DDFF6F1901AF63188C91629 (intptr_t ___hreco0, intptr_t ___hevent1, intptr_t ___pvContext2, const RuntimeMethod* method) ;
// System.Void Microsoft.CognitiveServices.Speech.Recognizer::FireEvent_SetSessionStopped(System.IntPtr,System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Recognizer_FireEvent_SetSessionStopped_m1925D97F4E29071799739DAE667160A804385C25 (intptr_t ___hreco0, intptr_t ___hevent1, intptr_t ___pvContext2, const RuntimeMethod* method) ;
// System.Void Microsoft.CognitiveServices.Speech.Recognizer::FireEvent_SpeechStartDetected(System.IntPtr,System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Recognizer_FireEvent_SpeechStartDetected_mBBD9DA4BDE0F8E8E8545C4BACEC0068B86F16DAF (intptr_t ___hreco0, intptr_t ___hevent1, intptr_t ___pvContext2, const RuntimeMethod* method) ;
// System.Void Microsoft.CognitiveServices.Speech.Recognizer::FireEvent_SpeechEndDetected(System.IntPtr,System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Recognizer_FireEvent_SpeechEndDetected_m855530988936AC915A4277BF08A8EF863933990E (intptr_t ___hreco0, intptr_t ___hevent1, intptr_t ___pvContext2, const RuntimeMethod* method) ;
// System.Delegate System.Delegate::Combine(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Combine_m8B9D24CED35033C7FC56501DFE650F5CB7FF012C (Delegate_t* ___a0, Delegate_t* ___b1, const RuntimeMethod* method) ;
// System.Delegate System.Delegate::Remove(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Remove_m40506877934EC1AD4ADAE57F5E97AF0BC0F96116 (Delegate_t* ___source0, Delegate_t* ___value1, const RuntimeMethod* method) ;
// System.IntPtr System.Runtime.InteropServices.GCHandle::ToIntPtr(System.Runtime.InteropServices.GCHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t GCHandle_ToIntPtr_m4895C6E6C93FD6CEE9867C8A32C9E06A5DE5C5DC (GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC ___value0, const RuntimeMethod* method) ;
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.Recognizer::recognizer_session_started_set_callback(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,Microsoft.CognitiveServices.Speech.Internal.CallbackFunctionDelegate,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Recognizer_recognizer_session_started_set_callback_mC6D2C10D6BAC95F8F7CB9C37E2015F99C54C800D (InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* ___recoHandle0, CallbackFunctionDelegate_tC745A2B557EE8241DF1F7ABD3BFC1C8F3A2E81AA* ___callback1, intptr_t ___context2, const RuntimeMethod* method) ;
// System.Void Microsoft.CognitiveServices.Speech.Recognizer::add__SessionStarted(System.EventHandler`1<Microsoft.CognitiveServices.Speech.SessionEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Recognizer_add__SessionStarted_m631F4CB4BF55A534C3A8CB8EAEC57EE7139BE4CD (Recognizer_tCA087D63D8BDE21D877CECAAF536BDCCFE54729A* __this, EventHandler_1_tB44EB3A3EAA7B1B7ED121BF2DF6360B62B13EA07* ___value0, const RuntimeMethod* method) ;
// System.Void Microsoft.CognitiveServices.Speech.Recognizer::remove__SessionStarted(System.EventHandler`1<Microsoft.CognitiveServices.Speech.SessionEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Recognizer_remove__SessionStarted_m1FB4C79584D375A664EFB1916F4127D741FBA016 (Recognizer_tCA087D63D8BDE21D877CECAAF536BDCCFE54729A* __this, EventHandler_1_tB44EB3A3EAA7B1B7ED121BF2DF6360B62B13EA07* ___value0, const RuntimeMethod* method) ;
// System.Void Microsoft.CognitiveServices.Speech.Internal.SpxExceptionThrower::LogErrorIfFail(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpxExceptionThrower_LogErrorIfFail_mAD982B53E803B83F9B30CA838B8CDB1210FE1747 (intptr_t ___hr0, const RuntimeMethod* method) ;
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.Recognizer::recognizer_session_stopped_set_callback(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,Microsoft.CognitiveServices.Speech.Internal.CallbackFunctionDelegate,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Recognizer_recognizer_session_stopped_set_callback_mBED30C2B5B024A07E3E927F9913FF1910123184E (InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* ___recoHandle0, CallbackFunctionDelegate_tC745A2B557EE8241DF1F7ABD3BFC1C8F3A2E81AA* ___callback1, intptr_t ___context2, const RuntimeMethod* method) ;
// System.Void Microsoft.CognitiveServices.Speech.Recognizer::add__SessionStopped(System.EventHandler`1<Microsoft.CognitiveServices.Speech.SessionEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Recognizer_add__SessionStopped_mC531DA001A86C34512638EC7AD42682AD216D32E (Recognizer_tCA087D63D8BDE21D877CECAAF536BDCCFE54729A* __this, EventHandler_1_tB44EB3A3EAA7B1B7ED121BF2DF6360B62B13EA07* ___value0, const RuntimeMethod* method) ;
// System.Void Microsoft.CognitiveServices.Speech.Recognizer::remove__SessionStopped(System.EventHandler`1<Microsoft.CognitiveServices.Speech.SessionEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Recognizer_remove__SessionStopped_m75B4EAF7FE72A73C707DD5AD1CD02D2A82F48AAA (Recognizer_tCA087D63D8BDE21D877CECAAF536BDCCFE54729A* __this, EventHandler_1_tB44EB3A3EAA7B1B7ED121BF2DF6360B62B13EA07* ___value0, const RuntimeMethod* method) ;
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.Recognizer::recognizer_speech_start_detected_set_callback(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,Microsoft.CognitiveServices.Speech.Internal.CallbackFunctionDelegate,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Recognizer_recognizer_speech_start_detected_set_callback_mBA32FFE729A32C15079566B581EEF67EB701C41B (InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* ___recoHandle0, CallbackFunctionDelegate_tC745A2B557EE8241DF1F7ABD3BFC1C8F3A2E81AA* ___callback1, intptr_t ___context2, const RuntimeMethod* method) ;
// System.Void Microsoft.CognitiveServices.Speech.Recognizer::add__SpeechStartDetected(System.EventHandler`1<Microsoft.CognitiveServices.Speech.RecognitionEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Recognizer_add__SpeechStartDetected_mC7B7A06E0F81282B1A983A1B99887C9E558BB750 (Recognizer_tCA087D63D8BDE21D877CECAAF536BDCCFE54729A* __this, EventHandler_1_t4457009845FA4C1ABCF83D7E00C38F13807F18F0* ___value0, const RuntimeMethod* method) ;
// System.Void Microsoft.CognitiveServices.Speech.Recognizer::remove__SpeechStartDetected(System.EventHandler`1<Microsoft.CognitiveServices.Speech.RecognitionEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Recognizer_remove__SpeechStartDetected_m3DB6ED1521289E1BCB5BF3032F68C2452A2F8830 (Recognizer_tCA087D63D8BDE21D877CECAAF536BDCCFE54729A* __this, EventHandler_1_t4457009845FA4C1ABCF83D7E00C38F13807F18F0* ___value0, const RuntimeMethod* method) ;
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.Recognizer::recognizer_speech_end_detected_set_callback(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,Microsoft.CognitiveServices.Speech.Internal.CallbackFunctionDelegate,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Recognizer_recognizer_speech_end_detected_set_callback_mC09E537CCD4C6224A0301E8C90B827A599F37B9F (InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* ___recoHandle0, CallbackFunctionDelegate_tC745A2B557EE8241DF1F7ABD3BFC1C8F3A2E81AA* ___callback1, intptr_t ___context2, const RuntimeMethod* method) ;
// System.Void Microsoft.CognitiveServices.Speech.Recognizer::add__SpeechEndDetected(System.EventHandler`1<Microsoft.CognitiveServices.Speech.RecognitionEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Recognizer_add__SpeechEndDetected_m22831739B45057F6783CF4C784E8829A1A7D27A3 (Recognizer_tCA087D63D8BDE21D877CECAAF536BDCCFE54729A* __this, EventHandler_1_t4457009845FA4C1ABCF83D7E00C38F13807F18F0* ___value0, const RuntimeMethod* method) ;
// System.Void Microsoft.CognitiveServices.Speech.Recognizer::remove__SpeechEndDetected(System.EventHandler`1<Microsoft.CognitiveServices.Speech.RecognitionEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Recognizer_remove__SpeechEndDetected_m335107F7B597E13480CF0F21EB83795CFFC9B4D8 (Recognizer_tCA087D63D8BDE21D877CECAAF536BDCCFE54729A* __this, EventHandler_1_t4457009845FA4C1ABCF83D7E00C38F13807F18F0* ___value0, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method) ;
// System.Void Microsoft.CognitiveServices.Speech.Internal.Diagnostics::SPX_TRACE_VERBOSE(System.String,System.Int32,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Diagnostics_SPX_TRACE_VERBOSE_m9618B77BD67A243B856AE5D2E73CB87D57D1DA6E (String_t* ___message0, int32_t ___line1, String_t* ___caller2, String_t* ___file3, const RuntimeMethod* method) ;
// System.Runtime.InteropServices.GCHandle System.Runtime.InteropServices.GCHandle::Alloc(System.Object,System.Runtime.InteropServices.GCHandleType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC GCHandle_Alloc_m1FC35418B654D3F48B4F70D525EBD6A208A59075 (RuntimeObject* ___value0, int32_t ___type1, const RuntimeMethod* method) ;
// System.Void Microsoft.CognitiveServices.Speech.Internal.CallbackFunctionDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CallbackFunctionDelegate__ctor_m242A4949B6999B19FDCBCCB89CBBD60A2D8AB7A6 (CallbackFunctionDelegate_tC745A2B557EE8241DF1F7ABD3BFC1C8F3A2E81AA* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void System.Object::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Finalize_mC98C96301CCABFE00F1A7EF8E15DF507CACD42B2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void System.GC::SuppressFinalize(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GC_SuppressFinalize_m3352E2F2119EB46913B51B7AAE2F217C63C35F2A (RuntimeObject* ___obj0, const RuntimeMethod* method) ;
// System.Void System.Threading.Monitor::Exit(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Exit_m25A154960F91391E10E4CDA245ECDF4BA94D56A9 (RuntimeObject* ___obj0, const RuntimeMethod* method) ;
// System.Void System.Threading.Monitor::Enter(System.Object,System.Boolean&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Enter_m00506757392936AA62DBE2C5FFBEE69EE920C4D4 (RuntimeObject* ___obj0, bool* ___lockTaken1, const RuntimeMethod* method) ;
// System.Void System.InvalidOperationException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162 (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m9499958F4B0BB6089C75760AB647AB3CA4D55806 (String_t* ___format0, RuntimeObject* ___arg01, RuntimeObject* ___arg12, const RuntimeMethod* method) ;
// System.Boolean System.Runtime.InteropServices.GCHandle::get_IsAllocated()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GCHandle_get_IsAllocated_m241908103D8D867E11CCAB73C918729825E86843 (GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.InteropServices.GCHandle::Free()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GCHandle_Free_m1320A260E487EB1EA6D95F9E54BFFCB5A4EF83A3 (GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC* __this, const RuntimeMethod* method) ;
// T Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle::GetObjectFromWeakHandle<Microsoft.CognitiveServices.Speech.Recognizer>(System.IntPtr)
inline Recognizer_tCA087D63D8BDE21D877CECAAF536BDCCFE54729A* InteropSafeHandle_GetObjectFromWeakHandle_TisRecognizer_tCA087D63D8BDE21D877CECAAF536BDCCFE54729A_mBD3D6EABCBDAD29C419965D792E526B664EB6DF3 (intptr_t ___nativeHandle0, const RuntimeMethod* method)
{
	return ((  Recognizer_tCA087D63D8BDE21D877CECAAF536BDCCFE54729A* (*) (intptr_t, const RuntimeMethod*))InteropSafeHandle_GetObjectFromWeakHandle_TisRuntimeObject_m48577DAC91C9A8DC985418E2F15C255AAB70A856_gshared)(___nativeHandle0, method);
}
// System.Void System.EventHandler`1<Microsoft.CognitiveServices.Speech.SessionEventArgs>::Invoke(System.Object,TEventArgs)
inline void EventHandler_1_Invoke_m50F62D5F079DA3B408B05AEAA4CA07254840B5F5_inline (EventHandler_1_tB44EB3A3EAA7B1B7ED121BF2DF6360B62B13EA07* __this, RuntimeObject* ___sender0, SessionEventArgs_t06C8DB22E01F18F0B45A4E719BECB043B4D961BC* ___e1, const RuntimeMethod* method)
{
	((  void (*) (EventHandler_1_tB44EB3A3EAA7B1B7ED121BF2DF6360B62B13EA07*, RuntimeObject*, SessionEventArgs_t06C8DB22E01F18F0B45A4E719BECB043B4D961BC*, const RuntimeMethod*))EventHandler_1_Invoke_mBD72C04FF5A08A2EA93DFD21037CD1C27A48D07A_gshared_inline)(__this, ___sender0, ___e1, method);
}
// System.Void Microsoft.CognitiveServices.Speech.Internal.SpxExceptionThrower::LogError(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpxExceptionThrower_LogError_m37A2018CF9E9DCD40E8EE95F37097192A2DC184A (String_t* ___message0, const RuntimeMethod* method) ;
// System.Void Microsoft.CognitiveServices.Speech.RecognitionEventArgs::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RecognitionEventArgs__ctor_m16B7E8B089A37C27BC87BEA572A1E4B2EA9E7B34 (RecognitionEventArgs_tF3045EA40FBF0ACD26A0B6F7D4144036AA7D05F9* __this, intptr_t ___eventHandlePtr0, const RuntimeMethod* method) ;
// System.Void System.EventHandler`1<Microsoft.CognitiveServices.Speech.RecognitionEventArgs>::Invoke(System.Object,TEventArgs)
inline void EventHandler_1_Invoke_mE007A9C567558111C4423757C653BB921489BC4B_inline (EventHandler_1_t4457009845FA4C1ABCF83D7E00C38F13807F18F0* __this, RuntimeObject* ___sender0, RecognitionEventArgs_tF3045EA40FBF0ACD26A0B6F7D4144036AA7D05F9* ___e1, const RuntimeMethod* method)
{
	((  void (*) (EventHandler_1_t4457009845FA4C1ABCF83D7E00C38F13807F18F0*, RuntimeObject*, RecognitionEventArgs_tF3045EA40FBF0ACD26A0B6F7D4144036AA7D05F9*, const RuntimeMethod*))EventHandler_1_Invoke_mBD72C04FF5A08A2EA93DFD21037CD1C27A48D07A_gshared_inline)(__this, ___sender0, ___e1, method);
}
// System.Type System.Object::GetType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void System.ObjectDisposedException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectDisposedException__ctor_mB2C8582279AF3F0C1CF9AA52DA7331BF848DFD48 (ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB* __this, String_t* ___objectName0, const RuntimeMethod* method) ;
// System.Void System.Action::Invoke()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, const RuntimeMethod* method) ;
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.Recognizer::recognizer_async_handle_release(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Recognizer_recognizer_async_handle_release_m308FA74E4DC2A3B70602A6EB0B36B75293C45707 (intptr_t ___asyncHandle0, const RuntimeMethod* method) ;
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.Recognizer::recognizer_start_continuous_recognition_async(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,System.IntPtr&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Recognizer_recognizer_start_continuous_recognition_async_m441C21EB7505A97E5F91536E25509FD729083C16 (InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* ___recoHandle0, intptr_t* ___asyncHandle1, const RuntimeMethod* method) ;
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.Recognizer::recognizer_start_continuous_recognition_async_wait_for(System.IntPtr,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Recognizer_recognizer_start_continuous_recognition_async_wait_for_mBB675A57CCEF423FF45B679C2878E6407C1C824C (intptr_t ___asyncHandle0, uint32_t ___milliseconds1, const RuntimeMethod* method) ;
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.Recognizer::recognizer_stop_continuous_recognition_async(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,System.IntPtr&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Recognizer_recognizer_stop_continuous_recognition_async_m35C65D620FD71FE342E909F031267E73D24179EA (InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* ___recoHandle0, intptr_t* ___asyncHandle1, const RuntimeMethod* method) ;
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.Recognizer::recognizer_stop_continuous_recognition_async_wait_for(System.IntPtr,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Recognizer_recognizer_stop_continuous_recognition_async_wait_for_mD01776BA308DDA07554942288BD247FF8E10ABE7 (intptr_t ___asyncHandle0, uint32_t ___milliseconds1, const RuntimeMethod* method) ;
// System.Void System.ArgumentNullException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* __this, String_t* ___paramName0, const RuntimeMethod* method) ;
// System.IntPtr Microsoft.CognitiveServices.Speech.Recognizer/GetRecognizerFromConfigDelegate::Invoke(System.IntPtr&,Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR intptr_t GetRecognizerFromConfigDelegate_Invoke_m186F198255E0AFC6B9A20C2689202A1BFF62C4FD_inline (GetRecognizerFromConfigDelegate_t17EEE1C5E4305DB57FCBE2C975DB62B9BA4B584D* __this, intptr_t* ___phreco0, InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* ___speechconfig1, InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* ___audioInput2, const RuntimeMethod* method) ;
// System.Void System.GC::KeepAlive(System.Object)
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void GC_KeepAlive_mA4BE2995EF7EF1A0C97391D40A445040BBBCCE2C (RuntimeObject* ___obj0, const RuntimeMethod* method) ;
// System.Void System.Runtime.InteropServices.SafeHandle::DangerousAddRef(System.Boolean&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SafeHandle_DangerousAddRef_m9FA46208A92D8B33059B8E8712F49AE45BB5E922 (SafeHandle_tC1A4DA80DA89B867CC011B707A07275230321BF7* __this, bool* ___success0, const RuntimeMethod* method) ;
// System.Void System.Runtime.InteropServices.SafeHandle::DangerousRelease()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SafeHandle_DangerousRelease_m30A8B4E5BEA935C8925BC2115CD0AD13B937953E (SafeHandle_tC1A4DA80DA89B867CC011B707A07275230321BF7* __this, const RuntimeMethod* method) ;
// System.Void System.EventArgs::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventArgs__ctor_mC6F9412D03203ADEF854117542C8EBF61624C8C3 (EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377* __this, const RuntimeMethod* method) ;
// System.Void Microsoft.CognitiveServices.Speech.Internal.SpxExceptionThrower::ThrowIfNull(System.IntPtr,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpxExceptionThrower_ThrowIfNull_mD0AA28085EF6376F8CA07F13EE43542C501050C4 (intptr_t ___item0, String_t* ___message1, const RuntimeMethod* method) ;
// System.String System.String::Format(System.IFormatProvider,System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m75580778A544C5C8DA0F2ACEE7972A2AC944063A (RuntimeObject* ___provider0, String_t* ___format1, RuntimeObject* ___arg02, const RuntimeMethod* method) ;
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.SpeechConfig::speech_config_get_property_bag(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,System.IntPtr&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t SpeechConfig_speech_config_get_property_bag_mAD34CF04C0FD498FECA8D218D58D8C39431FD207 (InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* ___config0, intptr_t* ___propbag1, const RuntimeMethod* method) ;
// System.Void Microsoft.CognitiveServices.Speech.SpeechConfig::SetProperty(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpeechConfig_SetProperty_m9E79AA2A21F823E849F29921DA476988C2C4DF1C (SpeechConfig_tAE8FEC093B21AA957B784250CF237DE1C3760DEE* __this, String_t* ___name0, String_t* ___value1, const RuntimeMethod* method) ;
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.SpeechConfig::speech_config_from_subscription(System.IntPtr&,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t SpeechConfig_speech_config_from_subscription_mB1ABBE414549A4855CF3CE0AD87E832209A701E0 (intptr_t* ___config0, String_t* ___subscriptionKey1, String_t* ___region2, const RuntimeMethod* method) ;
// System.Void Microsoft.CognitiveServices.Speech.SpeechConfig::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpeechConfig__ctor_m586768B4614A1778822601DF07F0319758E1BBE9 (SpeechConfig_tAE8FEC093B21AA957B784250CF237DE1C3760DEE* __this, intptr_t ___configPtr0, const RuntimeMethod* method) ;
// System.Void Microsoft.CognitiveServices.Speech.RecognitionResult::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RecognitionResult__ctor_mF52685BDF0D0D81056CF4F2D7929B837D3E4504E (RecognitionResult_t900FA7A9A16DB8B9FDE5395B1B773BDC63BE474F* __this, intptr_t ___resultHandlePtr0, const RuntimeMethod* method) ;
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.Recognizer::recognizer_recognition_event_get_result(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,System.IntPtr&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Recognizer_recognizer_recognition_event_get_result_mE8BE83DD8F3C6758A018AE4FB17DE38006C874C3 (InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* ___eventHandle0, intptr_t* ___result1, const RuntimeMethod* method) ;
// System.Void Microsoft.CognitiveServices.Speech.SpeechRecognitionResult::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpeechRecognitionResult__ctor_mCCFDE1F4008AF5CEDAF8D163E8475887565BD056 (SpeechRecognitionResult_tBA76D21E6D62BB6B2CDC9F83766BB1E791649D94* __this, intptr_t ___resultPtr0, const RuntimeMethod* method) ;
// Microsoft.CognitiveServices.Speech.SpeechRecognitionResult Microsoft.CognitiveServices.Speech.SpeechRecognitionEventArgs::get_Result()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR SpeechRecognitionResult_tBA76D21E6D62BB6B2CDC9F83766BB1E791649D94* SpeechRecognitionEventArgs_get_Result_m775B21D1681EC803EE52F6FA345D0B5AB14D40D9_inline (SpeechRecognitionEventArgs_tA7F1649E47FF3239DACE11D5537ECC0AC23E94BD* __this, const RuntimeMethod* method) ;
// System.Void Microsoft.CognitiveServices.Speech.SpeechRecognitionEventArgs::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpeechRecognitionEventArgs__ctor_mA12E8F0CEF640C514871ED1481C46B54CE92EE64 (SpeechRecognitionEventArgs_tA7F1649E47FF3239DACE11D5537ECC0AC23E94BD* __this, intptr_t ___eventHandlePtr0, const RuntimeMethod* method) ;
// Microsoft.CognitiveServices.Speech.CancellationDetails Microsoft.CognitiveServices.Speech.CancellationDetails::FromResult(Microsoft.CognitiveServices.Speech.RecognitionResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CancellationDetails_t3A257E993FAECAD1A9866267C438E47CFA1D308A* CancellationDetails_FromResult_m6C75E2AD2521230D540BA1BCF5515ECC29DBF968 (RecognitionResult_t900FA7A9A16DB8B9FDE5395B1B773BDC63BE474F* ___result0, const RuntimeMethod* method) ;
// Microsoft.CognitiveServices.Speech.CancellationErrorCode Microsoft.CognitiveServices.Speech.CancellationDetails::get_ErrorCode()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t CancellationDetails_get_ErrorCode_m01B8889CC68F1443F822B1E8082F6B8378C723AF_inline (CancellationDetails_t3A257E993FAECAD1A9866267C438E47CFA1D308A* __this, const RuntimeMethod* method) ;
// Microsoft.CognitiveServices.Speech.CancellationReason Microsoft.CognitiveServices.Speech.SpeechRecognitionCanceledEventArgs::get_Reason()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t SpeechRecognitionCanceledEventArgs_get_Reason_m43CDCCC1311B234FB9F7C31BF966478DEB156815_inline (SpeechRecognitionCanceledEventArgs_t5FB6DBEE3C3E77AE97C05A03CE7CBC0BD387CA86* __this, const RuntimeMethod* method) ;
// Microsoft.CognitiveServices.Speech.CancellationErrorCode Microsoft.CognitiveServices.Speech.SpeechRecognitionCanceledEventArgs::get_ErrorCode()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t SpeechRecognitionCanceledEventArgs_get_ErrorCode_m54BF697777056D1E09CEDB6E005095970A48B5D2_inline (SpeechRecognitionCanceledEventArgs_t5FB6DBEE3C3E77AE97C05A03CE7CBC0BD387CA86* __this, const RuntimeMethod* method) ;
// System.Void Microsoft.CognitiveServices.Speech.SpeechRecognizer::FireEvent_Recognizing(System.IntPtr,System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpeechRecognizer_FireEvent_Recognizing_m5F41324B4925637FC1859240D793E0038ABE9EA4 (intptr_t ___hreco0, intptr_t ___hevent1, intptr_t ___pvContext2, const RuntimeMethod* method) ;
// System.Void Microsoft.CognitiveServices.Speech.SpeechRecognizer::FireEvent_Recognized(System.IntPtr,System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpeechRecognizer_FireEvent_Recognized_m1C49575EF31FF9111D7CC4CC679D1582B525F886 (intptr_t ___hreco0, intptr_t ___hevent1, intptr_t ___pvContext2, const RuntimeMethod* method) ;
// System.Void Microsoft.CognitiveServices.Speech.SpeechRecognizer::FireEvent_Canceled(System.IntPtr,System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpeechRecognizer_FireEvent_Canceled_m2034F62D22C618A305A7E5E7DCB416439CDD3F6E (intptr_t ___hreco0, intptr_t ___hevent1, intptr_t ___pvContext2, const RuntimeMethod* method) ;
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.Recognizer::recognizer_recognizing_set_callback(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,Microsoft.CognitiveServices.Speech.Internal.CallbackFunctionDelegate,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Recognizer_recognizer_recognizing_set_callback_mE5F4F2773A2E1F7F7960F065D7146F9BA9320B84 (InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* ___recoHandle0, CallbackFunctionDelegate_tC745A2B557EE8241DF1F7ABD3BFC1C8F3A2E81AA* ___callback1, intptr_t ___context2, const RuntimeMethod* method) ;
// System.Void Microsoft.CognitiveServices.Speech.SpeechRecognizer::add__Recognizing(System.EventHandler`1<Microsoft.CognitiveServices.Speech.SpeechRecognitionEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpeechRecognizer_add__Recognizing_m16447A0416973172AB4D0CBAF6A8FC554B1E9294 (SpeechRecognizer_t949CB7F9294C8FD93325B16A1791A28325C2203B* __this, EventHandler_1_tFE5F3A49257B61DC2A2C46D8D8C0CE7A76F99979* ___value0, const RuntimeMethod* method) ;
// System.Void Microsoft.CognitiveServices.Speech.SpeechRecognizer::remove__Recognizing(System.EventHandler`1<Microsoft.CognitiveServices.Speech.SpeechRecognitionEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpeechRecognizer_remove__Recognizing_m5C73B8CE847979E6475EAC3240E7357FCA1F3E5F (SpeechRecognizer_t949CB7F9294C8FD93325B16A1791A28325C2203B* __this, EventHandler_1_tFE5F3A49257B61DC2A2C46D8D8C0CE7A76F99979* ___value0, const RuntimeMethod* method) ;
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.Recognizer::recognizer_recognized_set_callback(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,Microsoft.CognitiveServices.Speech.Internal.CallbackFunctionDelegate,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Recognizer_recognizer_recognized_set_callback_mEAB056E12958EBCB0B3AE4361560D8B496A5C831 (InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* ___recoHandle0, CallbackFunctionDelegate_tC745A2B557EE8241DF1F7ABD3BFC1C8F3A2E81AA* ___callback1, intptr_t ___context2, const RuntimeMethod* method) ;
// System.Void Microsoft.CognitiveServices.Speech.SpeechRecognizer::add__Recognized(System.EventHandler`1<Microsoft.CognitiveServices.Speech.SpeechRecognitionEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpeechRecognizer_add__Recognized_mD50B625785C24BEBFF41F06CEB5D10434F934B83 (SpeechRecognizer_t949CB7F9294C8FD93325B16A1791A28325C2203B* __this, EventHandler_1_tFE5F3A49257B61DC2A2C46D8D8C0CE7A76F99979* ___value0, const RuntimeMethod* method) ;
// System.Void Microsoft.CognitiveServices.Speech.SpeechRecognizer::remove__Recognized(System.EventHandler`1<Microsoft.CognitiveServices.Speech.SpeechRecognitionEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpeechRecognizer_remove__Recognized_mD722671640B2B0B316AF08C40613843C781E17C0 (SpeechRecognizer_t949CB7F9294C8FD93325B16A1791A28325C2203B* __this, EventHandler_1_tFE5F3A49257B61DC2A2C46D8D8C0CE7A76F99979* ___value0, const RuntimeMethod* method) ;
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.Recognizer::recognizer_canceled_set_callback(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,Microsoft.CognitiveServices.Speech.Internal.CallbackFunctionDelegate,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Recognizer_recognizer_canceled_set_callback_m12409EB36F1DF4917D9CB80C148DF8623C1E55CD (InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* ___recoHandle0, CallbackFunctionDelegate_tC745A2B557EE8241DF1F7ABD3BFC1C8F3A2E81AA* ___callback1, intptr_t ___context2, const RuntimeMethod* method) ;
// System.Void Microsoft.CognitiveServices.Speech.SpeechRecognizer::add__Canceled(System.EventHandler`1<Microsoft.CognitiveServices.Speech.SpeechRecognitionCanceledEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpeechRecognizer_add__Canceled_mCCA4C9985A5482241673E5F9DFAF8669412BA14B (SpeechRecognizer_t949CB7F9294C8FD93325B16A1791A28325C2203B* __this, EventHandler_1_t8FB3884B878D3DEA670EAAD761B40C42B82E3F46* ___value0, const RuntimeMethod* method) ;
// System.Void Microsoft.CognitiveServices.Speech.SpeechRecognizer::remove__Canceled(System.EventHandler`1<Microsoft.CognitiveServices.Speech.SpeechRecognitionCanceledEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpeechRecognizer_remove__Canceled_m7AA55C10EEAE710C0581D5B235852FB30D142CB9 (SpeechRecognizer_t949CB7F9294C8FD93325B16A1791A28325C2203B* __this, EventHandler_1_t8FB3884B878D3DEA670EAAD761B40C42B82E3F46* ___value0, const RuntimeMethod* method) ;
// System.Void Microsoft.CognitiveServices.Speech.Recognizer/GetRecognizerFromConfigDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GetRecognizerFromConfigDelegate__ctor_m8225A337DC771AF4368C036689A77F76D48D4567 (GetRecognizerFromConfigDelegate_t17EEE1C5E4305DB57FCBE2C975DB62B9BA4B584D* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle Microsoft.CognitiveServices.Speech.Recognizer::FromConfig(Microsoft.CognitiveServices.Speech.Recognizer/GetRecognizerFromConfigDelegate,Microsoft.CognitiveServices.Speech.SpeechConfig)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* Recognizer_FromConfig_m987A4CFBF642C006F1CCC60AE435E7C825B55F64 (GetRecognizerFromConfigDelegate_t17EEE1C5E4305DB57FCBE2C975DB62B9BA4B584D* ___fromConfig0, SpeechConfig_tAE8FEC093B21AA957B784250CF237DE1C3760DEE* ___speechConfig1, const RuntimeMethod* method) ;
// System.Void Microsoft.CognitiveServices.Speech.SpeechRecognizer::.ctor(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpeechRecognizer__ctor_m8136931FE9EB168C0F793BDF081194CEED40BE0A (SpeechRecognizer_t949CB7F9294C8FD93325B16A1791A28325C2203B* __this, InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* ___recoHandle0, const RuntimeMethod* method) ;
// System.Void Microsoft.CognitiveServices.Speech.Recognizer::.ctor(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Recognizer__ctor_mB448C82F7106784983B2332E0C35FAC613A10A05 (Recognizer_tCA087D63D8BDE21D877CECAAF536BDCCFE54729A* __this, InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* ___recoPtr0, const RuntimeMethod* method) ;
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.Recognizer::recognizer_get_property_bag(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,System.IntPtr&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Recognizer_recognizer_get_property_bag_m4D30FE9EBED74424FCE805136396F8EDC8A81D17 (InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* ___recoHandle0, intptr_t* ___propbag1, const RuntimeMethod* method) ;
// System.Void Microsoft.CognitiveServices.Speech.SpeechRecognizer::set_Properties(Microsoft.CognitiveServices.Speech.PropertyCollection)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SpeechRecognizer_set_Properties_mCEEEDD714A579195CF49B0F9E4609DFD1EE2C7FC_inline (SpeechRecognizer_t949CB7F9294C8FD93325B16A1791A28325C2203B* __this, PropertyCollection_tD2FEDF489ECC1689767DEE33A0152F1FA719AA53* ___value0, const RuntimeMethod* method) ;
// System.Void System.Action::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Threading.Tasks.Task System.Threading.Tasks.Task::Run(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* Task_Run_mBD6EF33232D13F2183A43D0A526A220C4F0181B4 (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___action0, const RuntimeMethod* method) ;
// System.Void Microsoft.CognitiveServices.Speech.Recognizer::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Recognizer_Finalize_m65C041518559BC7332B58EC3BD23603D6FAEA7F5 (Recognizer_tCA087D63D8BDE21D877CECAAF536BDCCFE54729A* __this, const RuntimeMethod* method) ;
// Microsoft.CognitiveServices.Speech.PropertyCollection Microsoft.CognitiveServices.Speech.SpeechRecognizer::get_Properties()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR PropertyCollection_tD2FEDF489ECC1689767DEE33A0152F1FA719AA53* SpeechRecognizer_get_Properties_m1C0886BAAE462E98012C7EF3CED1E0314E341024_inline (SpeechRecognizer_t949CB7F9294C8FD93325B16A1791A28325C2203B* __this, const RuntimeMethod* method) ;
// System.Void Microsoft.CognitiveServices.Speech.Recognizer::Dispose(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Recognizer_Dispose_m41B4467C6470F75AD4C81138860A38D98B55E31B (Recognizer_tCA087D63D8BDE21D877CECAAF536BDCCFE54729A* __this, bool ___disposing0, const RuntimeMethod* method) ;
// T Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle::GetObjectFromWeakHandle<Microsoft.CognitiveServices.Speech.SpeechRecognizer>(System.IntPtr)
inline SpeechRecognizer_t949CB7F9294C8FD93325B16A1791A28325C2203B* InteropSafeHandle_GetObjectFromWeakHandle_TisSpeechRecognizer_t949CB7F9294C8FD93325B16A1791A28325C2203B_mCA8F08B5C7236A0FCB9E693A4EB4054FC439250C (intptr_t ___nativeHandle0, const RuntimeMethod* method)
{
	return ((  SpeechRecognizer_t949CB7F9294C8FD93325B16A1791A28325C2203B* (*) (intptr_t, const RuntimeMethod*))InteropSafeHandle_GetObjectFromWeakHandle_TisRuntimeObject_m48577DAC91C9A8DC985418E2F15C255AAB70A856_gshared)(___nativeHandle0, method);
}
// System.Void System.EventHandler`1<Microsoft.CognitiveServices.Speech.SpeechRecognitionEventArgs>::Invoke(System.Object,TEventArgs)
inline void EventHandler_1_Invoke_m81C94EA828C27A6F431E8F4B7679EAF346BCAB56_inline (EventHandler_1_tFE5F3A49257B61DC2A2C46D8D8C0CE7A76F99979* __this, RuntimeObject* ___sender0, SpeechRecognitionEventArgs_tA7F1649E47FF3239DACE11D5537ECC0AC23E94BD* ___e1, const RuntimeMethod* method)
{
	((  void (*) (EventHandler_1_tFE5F3A49257B61DC2A2C46D8D8C0CE7A76F99979*, RuntimeObject*, SpeechRecognitionEventArgs_tA7F1649E47FF3239DACE11D5537ECC0AC23E94BD*, const RuntimeMethod*))EventHandler_1_Invoke_mBD72C04FF5A08A2EA93DFD21037CD1C27A48D07A_gshared_inline)(__this, ___sender0, ___e1, method);
}
// System.Void Microsoft.CognitiveServices.Speech.SpeechRecognitionCanceledEventArgs::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpeechRecognitionCanceledEventArgs__ctor_mE27E61BE7835AF73A8C25DD3FA2205632C9DC107 (SpeechRecognitionCanceledEventArgs_t5FB6DBEE3C3E77AE97C05A03CE7CBC0BD387CA86* __this, intptr_t ___eventHandlePtr0, const RuntimeMethod* method) ;
// System.Void System.EventHandler`1<Microsoft.CognitiveServices.Speech.SpeechRecognitionCanceledEventArgs>::Invoke(System.Object,TEventArgs)
inline void EventHandler_1_Invoke_mBEDD561ECE0E8BE4C5E4D2C38542F5EA87F2483A_inline (EventHandler_1_t8FB3884B878D3DEA670EAAD761B40C42B82E3F46* __this, RuntimeObject* ___sender0, SpeechRecognitionCanceledEventArgs_t5FB6DBEE3C3E77AE97C05A03CE7CBC0BD387CA86* ___e1, const RuntimeMethod* method)
{
	((  void (*) (EventHandler_1_t8FB3884B878D3DEA670EAAD761B40C42B82E3F46*, RuntimeObject*, SpeechRecognitionCanceledEventArgs_t5FB6DBEE3C3E77AE97C05A03CE7CBC0BD387CA86*, const RuntimeMethod*))EventHandler_1_Invoke_mBD72C04FF5A08A2EA93DFD21037CD1C27A48D07A_gshared_inline)(__this, ___sender0, ___e1, method);
}
// System.Void Microsoft.CognitiveServices.Speech.Recognizer::DoAsyncRecognitionAction(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Recognizer_DoAsyncRecognitionAction_m83046B03472BABA6160D5C56198373502725FE84 (Recognizer_tCA087D63D8BDE21D877CECAAF536BDCCFE54729A* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___recoImplAction0, const RuntimeMethod* method) ;
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.SpeechTranslationConfig::speech_translation_config_from_subscription(System.IntPtr&,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t SpeechTranslationConfig_speech_translation_config_from_subscription_mE64E8DB2A53A0CC70C6D8CAC467A39451949F1A4 (intptr_t* ___config0, String_t* ___subscriptionKey1, String_t* ___region2, const RuntimeMethod* method) ;
// System.Void Microsoft.CognitiveServices.Speech.SpeechTranslationConfig::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpeechTranslationConfig__ctor_m49EEA16B549465C7EB65801FC0687EA30E6F7D5E (SpeechTranslationConfig_t1EEE80E7A3DA15D83DEBF70B9B811498B739CE8B* __this, intptr_t ___configPtr0, const RuntimeMethod* method) ;
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.SpeechTranslationConfig::speech_translation_config_add_target_language(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t SpeechTranslationConfig_speech_translation_config_add_target_language_m7CBDFA258DA86801344705139992591D7AF3A450 (InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* ___config0, String_t* ___language1, const RuntimeMethod* method) ;
// System.Void Microsoft.CognitiveServices.Speech.Translation.TranslationRecognitionResult::GetTranslationTexts()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TranslationRecognitionResult_GetTranslationTexts_m080C1A8E4A40D60797BC62D07B58E27AAB1A6687 (TranslationRecognitionResult_tE95FF320EDD627570B9D1B3C710EB7925CC54D19* __this, const RuntimeMethod* method) ;
// System.String System.String::Format(System.IFormatProvider,System.String,System.Object,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m47B2846E44214E013BF3069B0F9015AD223FF16E (RuntimeObject* ___provider0, String_t* ___format1, RuntimeObject* ___arg02, RuntimeObject* ___arg13, RuntimeObject* ___arg24, const RuntimeMethod* method) ;
// System.Collections.Generic.IReadOnlyDictionary`2<System.String,System.String> Microsoft.CognitiveServices.Speech.Translation.TranslationRecognitionResult::get_Translations()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* TranslationRecognitionResult_get_Translations_mF40040BB24857FB1E87A6ACAEE7901DA628709F3_inline (TranslationRecognitionResult_tE95FF320EDD627570B9D1B3C710EB7925CC54D19* __this, const RuntimeMethod* method) ;
// TKey System.Collections.Generic.KeyValuePair`2<System.String,System.String>::get_Key()
inline String_t* KeyValuePair_2_get_Key_m654BCCAE2F20CB11D8E8C2D2C886A0C8A13EB1C4_inline (KeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A* __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (KeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A*, const RuntimeMethod*))KeyValuePair_2_get_Key_mBD8EA7557C27E6956F2AF29DA3F7499B2F51A282_gshared_inline)(__this, method);
}
// TValue System.Collections.Generic.KeyValuePair`2<System.String,System.String>::get_Value()
inline String_t* KeyValuePair_2_get_Value_m7345512A32CB4DCAA0643050B18DC8DCD71B927A_inline (KeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A* __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (KeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A*, const RuntimeMethod*))KeyValuePair_2_get_Value_mC6BD8075F9C9DDEF7B4D731E5C38EC19103988E7_gshared_inline)(__this, method);
}
// System.String System.String::Concat(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m6B0734B65813C8EA093D78E5C2D16534EB6FE8C0 (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___values0, const RuntimeMethod* method) ;
// System.Boolean Microsoft.CognitiveServices.Speech.Internal.RecognitionResult::recognizer_result_handle_is_valid(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RecognitionResult_recognizer_result_handle_is_valid_mD2EAC27E610A8715E49F1626367788A9865CE82B (InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* ___result0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::.ctor()
inline void Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052 (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83*, const RuntimeMethod*))Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared)(__this, method);
}
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.RecognitionResult::translation_text_result_get_translation_text_buffer_header(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,System.IntPtr,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t RecognitionResult_translation_text_result_get_translation_text_buffer_header_mCDAF142354F6B22AF7E7A3D58665D260DB2A22C8 (InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* ___handle0, intptr_t ___translationResultBuffer1, int32_t* ___lengthPointer2, const RuntimeMethod* method) ;
// System.Boolean System.IntPtr::op_Equality(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IntPtr_op_Equality_m73759B51FE326460AC87A0E386480226EF2FABED (intptr_t ___value10, intptr_t ___value21, const RuntimeMethod* method) ;
// System.IntPtr System.Runtime.InteropServices.Marshal::AllocHGlobal(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Marshal_AllocHGlobal_m0187620AAB78B85416CE4C948B60B6A76CA84CAC (int32_t ___cb0, const RuntimeMethod* method) ;
// System.IntPtr System.Runtime.InteropServices.Marshal::ReadIntPtr(System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Marshal_ReadIntPtr_mFC19D4C04BF9018E1BF846CF5185EAF4B7A25D97 (intptr_t ___ptr0, int32_t ___ofs1, const RuntimeMethod* method) ;
// System.Int32 System.IntPtr::op_Explicit(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t IntPtr_op_Explicit_m358ACBBA288C56CC429F39D4D481669D0620B590 (intptr_t ___value0, const RuntimeMethod* method) ;
// System.Int32 System.IntPtr::ToInt32()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t IntPtr_ToInt32_mD53B5D2C73C7E4BE5ADEBC5D187EACC83D5BB292 (intptr_t* __this, const RuntimeMethod* method) ;
// System.Void Microsoft.CognitiveServices.Speech.Internal.SpxExceptionThrower::ThrowIfFalse(System.Boolean,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpxExceptionThrower_ThrowIfFalse_m6FA4EA1F0EDB900A2F7371E78F573DDC0D735FAF (bool ___item0, int32_t ___error1, const RuntimeMethod* method) ;
// System.Int32 System.IntPtr::get_Size()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t IntPtr_get_Size_mF11301B9A665D54B8DC89DC6AFE37728B91E6F10 (const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::set_Item(TKey,TValue)
inline void Dictionary_2_set_Item_m9BF625649E96E60C1509898A992A6447E351D1A2 (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* __this, String_t* ___key0, String_t* ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83*, String_t*, String_t*, const RuntimeMethod*))Dictionary_2_set_Item_m1A840355E8EDAECEA9D0C6F5E51B248FAA449CBD_gshared)(__this, ___key0, ___value1, method);
}
// System.Void Microsoft.CognitiveServices.Speech.Translation.TranslationRecognizer::FireEvent_Recognizing(System.IntPtr,System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TranslationRecognizer_FireEvent_Recognizing_m9C07BDADD03B380A822B8C7C96CD90C471447E4C (intptr_t ___hreco0, intptr_t ___hevent1, intptr_t ___pvContext2, const RuntimeMethod* method) ;
// System.Void Microsoft.CognitiveServices.Speech.Translation.TranslationRecognizer::FireEvent_Recognized(System.IntPtr,System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TranslationRecognizer_FireEvent_Recognized_m37BF6A7CAA9794E1DBFAFB10D294B7DB958B9836 (intptr_t ___hreco0, intptr_t ___hevent1, intptr_t ___pvContext2, const RuntimeMethod* method) ;
// System.Void Microsoft.CognitiveServices.Speech.Translation.TranslationRecognizer::FireEvent_Canceled(System.IntPtr,System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TranslationRecognizer_FireEvent_Canceled_m7875F1D6DA9BCA902CF05D571D55EF1055AB2E82 (intptr_t ___hreco0, intptr_t ___hevent1, intptr_t ___pvContext2, const RuntimeMethod* method) ;
// System.Void Microsoft.CognitiveServices.Speech.Translation.TranslationRecognizer::FireEvent_SynthesisResult(System.IntPtr,System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TranslationRecognizer_FireEvent_SynthesisResult_m6AE445D95E7487065CAB7589BDD9616335B69737 (intptr_t ___hreco0, intptr_t ___hevent1, intptr_t ___pvContext2, const RuntimeMethod* method) ;
// System.Void Microsoft.CognitiveServices.Speech.Translation.TranslationRecognizer::add__Recognizing(System.EventHandler`1<Microsoft.CognitiveServices.Speech.Translation.TranslationRecognitionEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TranslationRecognizer_add__Recognizing_m7F06A14055F7EA343EDB417019887749F95204BD (TranslationRecognizer_tAEE1F79841E087D238E7450755C96DD589BE0168* __this, EventHandler_1_t008E3F55CF18E8D623598A49DFBC452B2DD6E698* ___value0, const RuntimeMethod* method) ;
// System.Void Microsoft.CognitiveServices.Speech.Translation.TranslationRecognizer::remove__Recognizing(System.EventHandler`1<Microsoft.CognitiveServices.Speech.Translation.TranslationRecognitionEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TranslationRecognizer_remove__Recognizing_mDFCC6818686A988C4401D429A450539CDEAA1653 (TranslationRecognizer_tAEE1F79841E087D238E7450755C96DD589BE0168* __this, EventHandler_1_t008E3F55CF18E8D623598A49DFBC452B2DD6E698* ___value0, const RuntimeMethod* method) ;
// System.Void Microsoft.CognitiveServices.Speech.Translation.TranslationRecognizer::add__Recognized(System.EventHandler`1<Microsoft.CognitiveServices.Speech.Translation.TranslationRecognitionEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TranslationRecognizer_add__Recognized_mC948CE4C633F0B3989AB538E48CED770EAA2AB24 (TranslationRecognizer_tAEE1F79841E087D238E7450755C96DD589BE0168* __this, EventHandler_1_t008E3F55CF18E8D623598A49DFBC452B2DD6E698* ___value0, const RuntimeMethod* method) ;
// System.Void Microsoft.CognitiveServices.Speech.Translation.TranslationRecognizer::remove__Recognized(System.EventHandler`1<Microsoft.CognitiveServices.Speech.Translation.TranslationRecognitionEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TranslationRecognizer_remove__Recognized_mFA887E35EAAE84E06620A043A51B69403DDF9288 (TranslationRecognizer_tAEE1F79841E087D238E7450755C96DD589BE0168* __this, EventHandler_1_t008E3F55CF18E8D623598A49DFBC452B2DD6E698* ___value0, const RuntimeMethod* method) ;
// System.Void Microsoft.CognitiveServices.Speech.Translation.TranslationRecognizer::add__Canceled(System.EventHandler`1<Microsoft.CognitiveServices.Speech.Translation.TranslationRecognitionCanceledEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TranslationRecognizer_add__Canceled_mBC507ED133CE7C79ED21D94FCBDD56491F8DC04F (TranslationRecognizer_tAEE1F79841E087D238E7450755C96DD589BE0168* __this, EventHandler_1_t529E119B11382401540BF02D1C8026AC460279A8* ___value0, const RuntimeMethod* method) ;
// System.Void Microsoft.CognitiveServices.Speech.Translation.TranslationRecognizer::remove__Canceled(System.EventHandler`1<Microsoft.CognitiveServices.Speech.Translation.TranslationRecognitionCanceledEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TranslationRecognizer_remove__Canceled_m9764030E5C9EFF7B4C48AE21DD87E5BBC5E0640F (TranslationRecognizer_tAEE1F79841E087D238E7450755C96DD589BE0168* __this, EventHandler_1_t529E119B11382401540BF02D1C8026AC460279A8* ___value0, const RuntimeMethod* method) ;
// System.Void Microsoft.CognitiveServices.Speech.Translation.TranslationRecognizer::.ctor(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TranslationRecognizer__ctor_m9474B62F13778D537B18BB26C58D7CD4DD2B13D6 (TranslationRecognizer_tAEE1F79841E087D238E7450755C96DD589BE0168* __this, InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* ___recoHandle0, const RuntimeMethod* method) ;
// System.Void Microsoft.CognitiveServices.Speech.Translation.TranslationRecognizer::set_Properties(Microsoft.CognitiveServices.Speech.PropertyCollection)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TranslationRecognizer_set_Properties_m5576585D06ED00C702202DE79DA2E1DE600CA8C0_inline (TranslationRecognizer_tAEE1F79841E087D238E7450755C96DD589BE0168* __this, PropertyCollection_tD2FEDF489ECC1689767DEE33A0152F1FA719AA53* ___value0, const RuntimeMethod* method) ;
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.Recognizer::translator_synthesizing_audio_set_callback(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,Microsoft.CognitiveServices.Speech.Internal.CallbackFunctionDelegate,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Recognizer_translator_synthesizing_audio_set_callback_mED636C5146933A0496BC5B9240FE1E5AC9EBC88C (InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* ___recoHandle0, CallbackFunctionDelegate_tC745A2B557EE8241DF1F7ABD3BFC1C8F3A2E81AA* ___callback1, intptr_t ___context2, const RuntimeMethod* method) ;
// Microsoft.CognitiveServices.Speech.PropertyCollection Microsoft.CognitiveServices.Speech.Translation.TranslationRecognizer::get_Properties()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR PropertyCollection_tD2FEDF489ECC1689767DEE33A0152F1FA719AA53* TranslationRecognizer_get_Properties_m041ED0EC39816383C2789C9784B00B7F50589ABF_inline (TranslationRecognizer_tAEE1F79841E087D238E7450755C96DD589BE0168* __this, const RuntimeMethod* method) ;
// T Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle::GetObjectFromWeakHandle<Microsoft.CognitiveServices.Speech.Translation.TranslationRecognizer>(System.IntPtr)
inline TranslationRecognizer_tAEE1F79841E087D238E7450755C96DD589BE0168* InteropSafeHandle_GetObjectFromWeakHandle_TisTranslationRecognizer_tAEE1F79841E087D238E7450755C96DD589BE0168_m7DD03405D0CCC1C47FA8CA25B4FD502827C7D16F (intptr_t ___nativeHandle0, const RuntimeMethod* method)
{
	return ((  TranslationRecognizer_tAEE1F79841E087D238E7450755C96DD589BE0168* (*) (intptr_t, const RuntimeMethod*))InteropSafeHandle_GetObjectFromWeakHandle_TisRuntimeObject_m48577DAC91C9A8DC985418E2F15C255AAB70A856_gshared)(___nativeHandle0, method);
}
// System.Void Microsoft.CognitiveServices.Speech.Translation.TranslationRecognitionEventArgs::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TranslationRecognitionEventArgs__ctor_m8AF9A74DEA81084992DC783C79D2DFC81A1230A7 (TranslationRecognitionEventArgs_t0F1D46343AA090830357DA90FD500DC7FC75BEF0* __this, intptr_t ___eventHandlePtr0, const RuntimeMethod* method) ;
// System.Void System.EventHandler`1<Microsoft.CognitiveServices.Speech.Translation.TranslationRecognitionEventArgs>::Invoke(System.Object,TEventArgs)
inline void EventHandler_1_Invoke_m7605B37CD34250471B68BAA9242577D08297680A_inline (EventHandler_1_t008E3F55CF18E8D623598A49DFBC452B2DD6E698* __this, RuntimeObject* ___sender0, TranslationRecognitionEventArgs_t0F1D46343AA090830357DA90FD500DC7FC75BEF0* ___e1, const RuntimeMethod* method)
{
	((  void (*) (EventHandler_1_t008E3F55CF18E8D623598A49DFBC452B2DD6E698*, RuntimeObject*, TranslationRecognitionEventArgs_t0F1D46343AA090830357DA90FD500DC7FC75BEF0*, const RuntimeMethod*))EventHandler_1_Invoke_mBD72C04FF5A08A2EA93DFD21037CD1C27A48D07A_gshared_inline)(__this, ___sender0, ___e1, method);
}
// System.Void Microsoft.CognitiveServices.Speech.Translation.TranslationRecognitionCanceledEventArgs::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TranslationRecognitionCanceledEventArgs__ctor_mC0DAD5191F911E2119197BF1876B9DFD46B7E630 (TranslationRecognitionCanceledEventArgs_tD5827BE8533B28001EA604E99F9C8E73FFD0B853* __this, intptr_t ___eventHandlePtr0, const RuntimeMethod* method) ;
// System.Void System.EventHandler`1<Microsoft.CognitiveServices.Speech.Translation.TranslationRecognitionCanceledEventArgs>::Invoke(System.Object,TEventArgs)
inline void EventHandler_1_Invoke_mA79A2261291A05C83B4486D0FE2D7D1865B3A0F8_inline (EventHandler_1_t529E119B11382401540BF02D1C8026AC460279A8* __this, RuntimeObject* ___sender0, TranslationRecognitionCanceledEventArgs_tD5827BE8533B28001EA604E99F9C8E73FFD0B853* ___e1, const RuntimeMethod* method)
{
	((  void (*) (EventHandler_1_t529E119B11382401540BF02D1C8026AC460279A8*, RuntimeObject*, TranslationRecognitionCanceledEventArgs_tD5827BE8533B28001EA604E99F9C8E73FFD0B853*, const RuntimeMethod*))EventHandler_1_Invoke_mBD72C04FF5A08A2EA93DFD21037CD1C27A48D07A_gshared_inline)(__this, ___sender0, ___e1, method);
}
// System.Void Microsoft.CognitiveServices.Speech.Translation.TranslationSynthesisEventArgs::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TranslationSynthesisEventArgs__ctor_m0A5A5BCAA5952B55D937B2971ED4AB6F46AFA100 (TranslationSynthesisEventArgs_t8FB96FD526982A583F5A91C6EF7CB17C1210A59F* __this, intptr_t ___eventHandlePtr0, const RuntimeMethod* method) ;
// System.Void System.EventHandler`1<Microsoft.CognitiveServices.Speech.Translation.TranslationSynthesisEventArgs>::Invoke(System.Object,TEventArgs)
inline void EventHandler_1_Invoke_m26037260B36BA3D3C83D40C0FE919586B24E9553_inline (EventHandler_1_tB299EE0561708ADFB5D5F63E18C58E89D72E7E6E* __this, RuntimeObject* ___sender0, TranslationSynthesisEventArgs_t8FB96FD526982A583F5A91C6EF7CB17C1210A59F* ___e1, const RuntimeMethod* method)
{
	((  void (*) (EventHandler_1_tB299EE0561708ADFB5D5F63E18C58E89D72E7E6E*, RuntimeObject*, TranslationSynthesisEventArgs_t8FB96FD526982A583F5A91C6EF7CB17C1210A59F*, const RuntimeMethod*))EventHandler_1_Invoke_mBD72C04FF5A08A2EA93DFD21037CD1C27A48D07A_gshared_inline)(__this, ___sender0, ___e1, method);
}
// T[] System.Array::Empty<System.Byte>()
inline ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* Array_Empty_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m89F7B056854DF715AA3E2B78EB84D5FA3878E474_inline (const RuntimeMethod* method)
{
	return ((  ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* (*) (const RuntimeMethod*))Array_Empty_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m89F7B056854DF715AA3E2B78EB84D5FA3878E474_gshared_inline)(method);
}
// System.Void Microsoft.CognitiveServices.Speech.Translation.TranslationSynthesisResult::GetAudioData(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TranslationSynthesisResult_GetAudioData_mC7C4FABC68E4574F59A8D91513C4B4F560226DED (TranslationSynthesisResult_tCCE322C2C7FDC0F193CFD38F27E107E88FAF48D2* __this, InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* ___resultHandle0, const RuntimeMethod* method) ;
// Microsoft.CognitiveServices.Speech.ResultReason Microsoft.CognitiveServices.Speech.Translation.TranslationSynthesisResult::get_Reason()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t TranslationSynthesisResult_get_Reason_mA851E1881441C4F278FA28AF75BE94B21DFC327F_inline (TranslationSynthesisResult_tCCE322C2C7FDC0F193CFD38F27E107E88FAF48D2* __this, const RuntimeMethod* method) ;
// T[] System.Array::Empty<System.Object>()
inline ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_inline (const RuntimeMethod* method)
{
	return ((  ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* (*) (const RuntimeMethod*))Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_gshared_inline)(method);
}
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.RecognitionResult::translation_synthesis_result_get_audio_data(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,System.IntPtr,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t RecognitionResult_translation_synthesis_result_get_audio_data_m49A524C78B5BBBAD2093F4C61344AC81B0428D3B (InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* ___handle0, intptr_t ___audioBuffer1, int32_t* ___lengthPointer2, const RuntimeMethod* method) ;
// System.Void System.Runtime.InteropServices.Marshal::Copy(System.IntPtr,System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Marshal_Copy_m92700C9E60BAB2FDAF6CE02C16EFE9DCB7D6035E (intptr_t ___source0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___destination1, int32_t ___startIndex2, int32_t ___length3, const RuntimeMethod* method) ;
// System.Void Microsoft.CognitiveServices.Speech.Translation.TranslationSynthesisResult::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TranslationSynthesisResult__ctor_m5504E3A57CC4B725D64C1981A97FB918F653847F (TranslationSynthesisResult_tCCE322C2C7FDC0F193CFD38F27E107E88FAF48D2* __this, intptr_t ___resultPtr0, const RuntimeMethod* method) ;
// Microsoft.CognitiveServices.Speech.Translation.TranslationSynthesisResult Microsoft.CognitiveServices.Speech.Translation.TranslationSynthesisEventArgs::get_Result()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TranslationSynthesisResult_tCCE322C2C7FDC0F193CFD38F27E107E88FAF48D2* TranslationSynthesisEventArgs_get_Result_mCA8BD226299930517C948A066CB4B247A304C515_inline (TranslationSynthesisEventArgs_t8FB96FD526982A583F5A91C6EF7CB17C1210A59F* __this, const RuntimeMethod* method) ;
// System.Void Microsoft.CognitiveServices.Speech.Translation.TranslationRecognitionResult::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TranslationRecognitionResult__ctor_mEC410E2929DA5612330E8C4521CD1363E7105CA1 (TranslationRecognitionResult_tE95FF320EDD627570B9D1B3C710EB7925CC54D19* __this, intptr_t ___resultPtr0, const RuntimeMethod* method) ;
// Microsoft.CognitiveServices.Speech.Translation.TranslationRecognitionResult Microsoft.CognitiveServices.Speech.Translation.TranslationRecognitionEventArgs::get_Result()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TranslationRecognitionResult_tE95FF320EDD627570B9D1B3C710EB7925CC54D19* TranslationRecognitionEventArgs_get_Result_m047C28B1FF5C9231EF5D9CE4957C05CD2E4B5CDD_inline (TranslationRecognitionEventArgs_t0F1D46343AA090830357DA90FD500DC7FC75BEF0* __this, const RuntimeMethod* method) ;
// Microsoft.CognitiveServices.Speech.CancellationReason Microsoft.CognitiveServices.Speech.Translation.TranslationRecognitionCanceledEventArgs::get_Reason()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t TranslationRecognitionCanceledEventArgs_get_Reason_m93D03951586AFFFF3DF9AD531E90A6A6AC5A2809_inline (TranslationRecognitionCanceledEventArgs_tD5827BE8533B28001EA604E99F9C8E73FFD0B853* __this, const RuntimeMethod* method) ;
// Microsoft.CognitiveServices.Speech.CancellationErrorCode Microsoft.CognitiveServices.Speech.Translation.TranslationRecognitionCanceledEventArgs::get_ErrorCode()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t TranslationRecognitionCanceledEventArgs_get_ErrorCode_mCD275DF83031DDBD93498938B45A578946631D24_inline (TranslationRecognitionCanceledEventArgs_tD5827BE8533B28001EA604E99F9C8E73FFD0B853* __this, const RuntimeMethod* method) ;
// System.Object[] Microsoft.CognitiveServices.Speech.Internal.Diagnostics::Args(System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Diagnostics_Args_m66A8E4AC0D0D0C2C854A969BFCE1C409BFF58556 (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args0, const RuntimeMethod* method) ;
// System.Void Microsoft.CognitiveServices.Speech.Internal.Diagnostics::SPX_TRACE_VERBOSE(System.String,System.Object[],System.Int32,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Diagnostics_SPX_TRACE_VERBOSE_mB66498BCE9FE52C0C1C41B5F06ACF3FBA58AE529 (String_t* ___format0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, int32_t ___line2, String_t* ___caller3, String_t* ___file4, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m74FC0A1259DFA02F3DF6538FC7F3ACF3E1AF0C55 (String_t* ___format0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method) ;
// System.Void Microsoft.CognitiveServices.Speech.Internal.DiagnosticsInterop::diagnostics_log_trace_string(System.Int32,System.String,System.String,System.Int32,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DiagnosticsInterop_diagnostics_log_trace_string_mFE0702C2B29033AF9782E2687FAEF40471DB9896 (int32_t ___level0, String_t* ___title1, String_t* ___fileName2, int32_t ___lineNumber3, String_t* ___message4, const RuntimeMethod* method) ;
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.SpxError::error_get_message(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t SpxError_error_get_message_mF6E912B67C4C33E52A5734B4185F5093BC4EFB2D (intptr_t ___errorHandle0, const RuntimeMethod* method) ;
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.SpxError::error_get_error_code(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t SpxError_error_get_error_code_m90FAF28F9F681E57DC432BB3406486932F2FC305 (intptr_t ___errorHandle0, const RuntimeMethod* method) ;
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.SpxError::error_release(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t SpxError_error_release_m849336C474D38F6418F8F87E3F62A667401DD6FD (intptr_t ___errorHandle0, const RuntimeMethod* method) ;
// System.IntPtr System.IntPtr::op_Explicit(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t IntPtr_op_Explicit_mB06D1B6CFBA72B5C55FBEC1BA3BC25958AB60EB1 (int32_t ___value0, const RuntimeMethod* method) ;
// System.Void System.Attribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2 (Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.InteropServices.SafeHandle::.ctor(System.IntPtr,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SafeHandle__ctor_m23E44C94503043292DCD4E87818082CFC09A7F4B (SafeHandle_tC1A4DA80DA89B867CC011B707A07275230321BF7* __this, intptr_t ___invalidHandleValue0, bool ___ownsHandle1, const RuntimeMethod* method) ;
// System.Void System.Runtime.InteropServices.SafeHandle::SetHandle(System.IntPtr)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SafeHandle_SetHandle_m003D64748F9DFBA1E3C0B23798C23BA81AA21C2A_inline (SafeHandle_tC1A4DA80DA89B867CC011B707A07275230321BF7* __this, intptr_t ___handle0, const RuntimeMethod* method) ;
// System.Void System.IntPtr::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IntPtr__ctor_m20A566609A091311C734617C699E61F545250AC7 (intptr_t* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.HandleRelease::Invoke(System.IntPtr)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR intptr_t HandleRelease_Invoke_m5A6CE4A6071A868B9695E55991957B8C520128EB_inline (HandleRelease_tDA5C5C8C145FFFB7E9AE3ADB1506118017AC70F9* __this, intptr_t ___hresult0, const RuntimeMethod* method) ;
// System.String System.IntPtr::ToString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* IntPtr_ToString_m4B664F765633183265DE764BECD5D78FCCA20A13 (intptr_t* __this, String_t* ___format0, const RuntimeMethod* method) ;
// System.Void System.Runtime.InteropServices.SafeHandle::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SafeHandle_Finalize_m37C72FD2FE3D87E32CB41FAA2FC1C6B03510337B (SafeHandle_tC1A4DA80DA89B867CC011B707A07275230321BF7* __this, const RuntimeMethod* method) ;
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.SpxFactory/GetResultDelegate::Invoke(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,System.IntPtr,System.UInt32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR intptr_t GetResultDelegate_Invoke_mB1E1810F9B48533717B0A387D1AEEDE06AFDD280_inline (GetResultDelegate_t678B8552898C76C54DA3B9B56C14C65BDE7D434B* __this, InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* ___handle0, intptr_t ___result1, uint32_t ___maxCharCount2, const RuntimeMethod* method) ;
// System.Int32 Microsoft.CognitiveServices.Speech.Internal.SpxError::GetErrorCode(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SpxError_GetErrorCode_m59998B5738166F75D78A901464B8653BF1718492 (intptr_t ___errorHandle0, const RuntimeMethod* method) ;
// System.String Microsoft.CognitiveServices.Speech.Internal.SpxError::GetMessage(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SpxError_GetMessage_m56F8CB8D3FCC6E557B4C0F7B8542AFF7CE76B14C (intptr_t ___errorHandle0, const RuntimeMethod* method) ;
// System.Boolean System.String::IsNullOrWhiteSpace(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_IsNullOrWhiteSpace_m360E06F52DEE3AD60832FAE8D32E499B6F9B386B (String_t* ___value0, const RuntimeMethod* method) ;
// System.Globalization.CultureInfo System.Globalization.CultureInfo::get_CurrentCulture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* CultureInfo_get_CurrentCulture_m43D1E4E50AB1F62ADC7C1884F28F918B53871522 (const RuntimeMethod* method) ;
// System.String System.Int32::ToString(System.String,System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_mE871810BC163EE4EF88E7C7682A6AD39911173B8 (int32_t* __this, String_t* ___format0, RuntimeObject* ___provider1, const RuntimeMethod* method) ;
// System.String System.String::ToLower(System.Globalization.CultureInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_ToLower_mD22E5D18F36015484078F5BA0F1687DA95904D1E (String_t* __this, CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___culture0, const RuntimeMethod* method) ;
// System.Boolean Microsoft.CognitiveServices.Speech.Internal.SpxError::ReleaseNoThrow(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SpxError_ReleaseNoThrow_m33343325EA373B0D5AF143C101C92C64211E359F (intptr_t ___errorHandle0, const RuntimeMethod* method) ;
// System.Void System.ApplicationException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ApplicationException__ctor_mE51100DFCDB0A0DF23B482CC43EC8E396BE7BE82 (ApplicationException_tA744BED4E90266BD255285CD4CF909BAB3EE811A* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.Boolean System.String::IsNullOrEmpty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_IsNullOrEmpty_m54CF0907E7C4F3AFB2E796A13DC751ECBB8DB64A (String_t* ___value0, const RuntimeMethod* method) ;
// System.Void Microsoft.CognitiveServices.Speech.Internal.SpxError::Release(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpxError_Release_mA9AC9D63595F70D08E078D5C6AD340B22A701301 (intptr_t ___errorHandle0, const RuntimeMethod* method) ;
// System.IntPtr System.IntPtr::op_Addition(System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t IntPtr_op_Addition_mC0EBEFD80883C26CF2FE4BFD7DEDECAD61480CFE (intptr_t ___pointer0, int32_t ___offset1, const RuntimeMethod* method) ;
// System.Byte System.Runtime.InteropServices.Marshal::ReadByte(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t Marshal_ReadByte_m81C17C73C3AC80E0A9B30C893834AC71FDC1FAF4 (intptr_t ___ptr0, const RuntimeMethod* method) ;
// System.Void System.ArgumentException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465 (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.String Microsoft.CognitiveServices.Speech.Internal.Utf8StringMarshaler::MarshalNativeToManaged(System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Utf8StringMarshaler_MarshalNativeToManaged_m83BBBA155F00B4E965BA9374B19D66C60CD1C5C5 (intptr_t ___native0, int32_t ___lengthInBytes1, const RuntimeMethod* method) ;
// System.Text.Encoding System.Text.Encoding::get_UTF8()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* Encoding_get_UTF8_m9700ADA8E0F244002B2A89B483F1B2133B8FE336 (const RuntimeMethod* method) ;
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.Utf8StringMarshaler::MarshalManagedToNative(System.String,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Utf8StringMarshaler_MarshalManagedToNative_m095E9D243061701D480D09FEA28256912FAC5ACA (String_t* ___str0, int32_t* ___length1, const RuntimeMethod* method) ;
// System.Void System.Runtime.InteropServices.Marshal::Copy(System.Byte[],System.Int32,System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Marshal_Copy_mB1CECEA99856A7296FF33D2C9C51CC7E7150E5F8 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___source0, int32_t ___startIndex1, intptr_t ___destination2, int32_t ___length3, const RuntimeMethod* method) ;
// System.Void System.Runtime.InteropServices.Marshal::WriteByte(System.IntPtr,System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Marshal_WriteByte_m317EFB098D04227DE39B0776847758BFA108224E (intptr_t ___ptr0, uint8_t ___val1, const RuntimeMethod* method) ;
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_Microsoft_CognitiveServices_Speech_core_INTERNAL
IL2CPP_EXTERN_C intptr_t STDCALL result_get_reason_canceled(void*, int32_t*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_Microsoft_CognitiveServices_Speech_core_INTERNAL
IL2CPP_EXTERN_C intptr_t STDCALL result_get_canceled_error_code(void*, int32_t*);
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
IL2CPP_EXTERN_C void STDCALL diagnostics_log_trace_string(int32_t, char*, char*, int32_t, char*);
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
IL2CPP_EXTERN_C intptr_t STDCALL recognizer_event_handle_release(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_Microsoft_CognitiveServices_Speech_core_INTERNAL
IL2CPP_EXTERN_C intptr_t STDCALL recognizer_create_speech_recognizer_from_config(intptr_t*, void*, void*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_Microsoft_CognitiveServices_Speech_core_INTERNAL
IL2CPP_EXTERN_C intptr_t STDCALL recognizer_create_translation_recognizer_from_config(intptr_t*, void*, void*);
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
// System.Void Microsoft.CognitiveServices.Speech.PropertyCollection::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertyCollection__ctor_m8F53EB9B9655888D9E2B7AEBB9460B49265618B7 (PropertyCollection_tD2FEDF489ECC1689767DEE33A0152F1FA719AA53* __this, intptr_t ___propertyBagPtr0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HandleRelease_tDA5C5C8C145FFFB7E9AE3ADB1506118017AC70F9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PropertyCollection_property_bag_release_mEA272951A28D37AE294DE83DED63D32185E99E01_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		intptr_t L_0 = ___propertyBagPtr0;
		bool L_1;
		L_1 = IntPtr_op_Inequality_m2F715312CBFCE7E1A81D0689F68B97218E37E5D1(L_0, (0), NULL);
		if (!L_1)
		{
			goto IL_002b;
		}
	}
	{
		intptr_t L_2 = ___propertyBagPtr0;
		HandleRelease_tDA5C5C8C145FFFB7E9AE3ADB1506118017AC70F9* L_3 = (HandleRelease_tDA5C5C8C145FFFB7E9AE3ADB1506118017AC70F9*)il2cpp_codegen_object_new(HandleRelease_tDA5C5C8C145FFFB7E9AE3ADB1506118017AC70F9_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		HandleRelease__ctor_m5265A47915D90FC04F512F3D1BC68A711343A4E7(L_3, NULL, (intptr_t)((void*)PropertyCollection_property_bag_release_mEA272951A28D37AE294DE83DED63D32185E99E01_RuntimeMethod_var), NULL);
		InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* L_4 = (InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D*)il2cpp_codegen_object_new(InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		InteropSafeHandle__ctor_mC37ECE3504FFCF1C3A565E45B1659808FD310B62(L_4, L_2, L_3, NULL);
		__this->___propbagHandle_0 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___propbagHandle_0), (void*)L_4);
	}

IL_002b:
	{
		return;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.PropertyCollection::Close()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertyCollection_Close_mD3C12EE3FDB07C2A9D8C5E7C35C968E5A299BD9F (PropertyCollection_tD2FEDF489ECC1689767DEE33A0152F1FA719AA53* __this, const RuntimeMethod* method) 
{
	{
		InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* L_0 = __this->___propbagHandle_0;
		NullCheck(L_0);
		SafeHandle_Dispose_m4FB5B8A7ED78B90757F1B570D4025F3BA26A39F3(L_0, NULL);
		return;
	}
}
// System.String Microsoft.CognitiveServices.Speech.PropertyCollection::GetProperty(Microsoft.CognitiveServices.Speech.PropertyId)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* PropertyCollection_GetProperty_mC3CEE491F6DF720BDAE92D54A47E6420DCF146B5 (PropertyCollection_tD2FEDF489ECC1689767DEE33A0152F1FA719AA53* __this, int32_t ___id0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	{
		InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* L_0 = __this->___propbagHandle_0;
		SpxExceptionThrower_ThrowIfNull_m5C9E05F3DEDEE273B1049A6052813A5870C4F223(L_0, (String_t*)NULL, NULL);
		InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* L_1 = __this->___propbagHandle_0;
		int32_t L_2 = ___id0;
		String_t* L_3;
		L_3 = PropertyCollection_GetPropertyString_mE4586EBDDDD6EAAC938A0717F3ED064BF55EB83A(__this, L_1, L_2, (String_t*)NULL, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, NULL);
		return L_3;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.PropertyCollection::SetProperty(Microsoft.CognitiveServices.Speech.PropertyId,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertyCollection_SetProperty_mA4F3EDF9EE715D7F2C052E11948FCF36A4400024 (PropertyCollection_tD2FEDF489ECC1689767DEE33A0152F1FA719AA53* __this, int32_t ___id0, String_t* ___value1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* L_0 = __this->___propbagHandle_0;
		SpxExceptionThrower_ThrowIfNull_m5C9E05F3DEDEE273B1049A6052813A5870C4F223(L_0, (String_t*)NULL, NULL);
		String_t* L_1 = ___value1;
		intptr_t L_2;
		L_2 = Utf8StringMarshaler_MarshalManagedToNative_m9048724C7EA2DE6AB4263E09D6B7C3942BD936B1(L_1, NULL);
		V_0 = L_2;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_002c:
			{// begin finally (depth: 1)
				intptr_t L_3 = V_0;
				il2cpp_codegen_runtime_class_init_inline(Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
				Marshal_FreeHGlobal_m691596E1E19CB74918F8FF871A05E4BE80748BCC(L_3, NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* L_4 = __this->___propbagHandle_0;
			int32_t L_5 = ___id0;
			intptr_t L_6 = V_0;
			intptr_t L_7;
			L_7 = PropertyCollection_property_bag_set_string_m3B3493AE6E2894BE2258E427938B0FE52490AF64(L_4, L_5, (0), L_6, NULL);
			SpxExceptionThrower_ThrowIfFail_m80558DF4FFB9A961C7CCC15CD13AF53F5437BA21(L_7, NULL);
			goto IL_0033;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0033:
	{
		return;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.PropertyCollection::SetProperty(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertyCollection_SetProperty_m32FCC0FEE788D8E7BC18427D47C37535F389EC94 (PropertyCollection_tD2FEDF489ECC1689767DEE33A0152F1FA719AA53* __this, String_t* ___propertyName0, String_t* ___value1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	intptr_t V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* L_0 = __this->___propbagHandle_0;
		SpxExceptionThrower_ThrowIfNull_m5C9E05F3DEDEE273B1049A6052813A5870C4F223(L_0, (String_t*)NULL, NULL);
		String_t* L_1 = ___value1;
		intptr_t L_2;
		L_2 = Utf8StringMarshaler_MarshalManagedToNative_m9048724C7EA2DE6AB4263E09D6B7C3942BD936B1(L_1, NULL);
		V_0 = L_2;
		String_t* L_3 = ___propertyName0;
		intptr_t L_4;
		L_4 = Utf8StringMarshaler_MarshalManagedToNative_m9048724C7EA2DE6AB4263E09D6B7C3942BD936B1(L_3, NULL);
		V_1 = L_4;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_002f:
			{// begin finally (depth: 1)
				intptr_t L_5 = V_0;
				il2cpp_codegen_runtime_class_init_inline(Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
				Marshal_FreeHGlobal_m691596E1E19CB74918F8FF871A05E4BE80748BCC(L_5, NULL);
				intptr_t L_6 = V_1;
				Marshal_FreeHGlobal_m691596E1E19CB74918F8FF871A05E4BE80748BCC(L_6, NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* L_7 = __this->___propbagHandle_0;
			intptr_t L_8 = V_1;
			intptr_t L_9 = V_0;
			intptr_t L_10;
			L_10 = PropertyCollection_property_bag_set_string_m3B3493AE6E2894BE2258E427938B0FE52490AF64(L_7, (-1), L_8, L_9, NULL);
			SpxExceptionThrower_ThrowIfFail_m80558DF4FFB9A961C7CCC15CD13AF53F5437BA21(L_10, NULL);
			goto IL_003c;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_003c:
	{
		return;
	}
}
// System.String Microsoft.CognitiveServices.Speech.PropertyCollection::GetPropertyString(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,System.Int32,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* PropertyCollection_GetPropertyString_mE4586EBDDDD6EAAC938A0717F3ED064BF55EB83A (PropertyCollection_tD2FEDF489ECC1689767DEE33A0152F1FA719AA53* __this, InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* ___propHandle0, int32_t ___id1, String_t* ___name2, String_t* ___defaultValue3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
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
	{
		String_t* L_0 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		V_0 = L_0;
		String_t* L_1 = ___name2;
		intptr_t L_2;
		L_2 = Utf8StringMarshaler_MarshalManagedToNative_m9048724C7EA2DE6AB4263E09D6B7C3942BD936B1(L_1, NULL);
		V_1 = L_2;
		String_t* L_3 = ___defaultValue3;
		intptr_t L_4;
		L_4 = Utf8StringMarshaler_MarshalManagedToNative_m9048724C7EA2DE6AB4263E09D6B7C3942BD936B1(L_3, NULL);
		V_2 = L_4;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0043:
			{// begin finally (depth: 1)
				intptr_t L_5 = V_1;
				il2cpp_codegen_runtime_class_init_inline(Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
				Marshal_FreeHGlobal_m691596E1E19CB74918F8FF871A05E4BE80748BCC(L_5, NULL);
				intptr_t L_6 = V_2;
				Marshal_FreeHGlobal_m691596E1E19CB74918F8FF871A05E4BE80748BCC(L_6, NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* L_7 = ___propHandle0;
				int32_t L_8 = ___id1;
				intptr_t L_9 = V_1;
				intptr_t L_10 = V_2;
				intptr_t L_11;
				L_11 = PropertyCollection_property_bag_get_string_mE4B57B59FFF4B01AB9A63785B5702904C03BB581(L_7, L_8, L_9, L_10, NULL);
				V_3 = L_11;
				intptr_t L_12 = V_3;
				bool L_13;
				L_13 = IntPtr_op_Inequality_m2F715312CBFCE7E1A81D0689F68B97218E37E5D1(L_12, (0), NULL);
				if (!L_13)
				{
					goto IL_0041_1;
				}
			}
			{
				auto __finallyBlock = il2cpp::utils::Finally([&]
				{

FINALLY_0035_1:
					{// begin finally (depth: 2)
						intptr_t L_14 = V_3;
						intptr_t L_15;
						L_15 = PropertyCollection_property_bag_free_string_m4B23B011D0B261E565A1E8AB841EDAC0AE48D9C4(L_14, NULL);
						SpxExceptionThrower_ThrowIfFail_m80558DF4FFB9A961C7CCC15CD13AF53F5437BA21(L_15, NULL);
						return;
					}// end finally (depth: 2)
				});
				try
				{// begin try (depth: 2)
					intptr_t L_16 = V_3;
					String_t* L_17;
					L_17 = Utf8StringMarshaler_MarshalNativeToManaged_m102420BD438247158F21E76982168D6DD1EB7066(L_16, NULL);
					V_0 = L_17;
					goto IL_0050;
				}// end try (depth: 2)
				catch(Il2CppExceptionWrapper& e)
				{
					__finallyBlock.StoreException(e.ex);
				}
			}

IL_0041_1:
			{
				goto IL_0050;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
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
// System.Void Microsoft.CognitiveServices.Speech.RecognitionEventArgs::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RecognitionEventArgs__ctor_m16B7E8B089A37C27BC87BEA572A1E4B2EA9E7B34 (RecognitionEventArgs_tF3045EA40FBF0ACD26A0B6F7D4144036AA7D05F9* __this, intptr_t ___eventHandlePtr0, const RuntimeMethod* method) 
{
	uint64_t V_0 = 0;
	{
		intptr_t L_0 = ___eventHandlePtr0;
		SessionEventArgs__ctor_m240C60ECA28570ED5A8FF624C62BAE2EBA25A5AA(__this, L_0, NULL);
		InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* L_1 = ((SessionEventArgs_t06C8DB22E01F18F0B45A4E719BECB043B4D961BC*)__this)->___eventHandle_1;
		SpxExceptionThrower_ThrowIfNull_m5C9E05F3DEDEE273B1049A6052813A5870C4F223(L_1, (String_t*)NULL, NULL);
		V_0 = ((int64_t)0);
		InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* L_2 = ((SessionEventArgs_t06C8DB22E01F18F0B45A4E719BECB043B4D961BC*)__this)->___eventHandle_1;
		intptr_t L_3;
		L_3 = Recognizer_recognizer_recognition_event_get_offset_m5798A68CFDD94101E91CEFD84C3E747272521543(L_2, (&V_0), NULL);
		SpxExceptionThrower_ThrowIfFail_m80558DF4FFB9A961C7CCC15CD13AF53F5437BA21(L_3, NULL);
		uint64_t L_4 = V_0;
		__this->___U3COffsetU3Ek__BackingField_5 = L_4;
		return;
	}
}
// System.UInt64 Microsoft.CognitiveServices.Speech.RecognitionEventArgs::get_Offset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t RecognitionEventArgs_get_Offset_m7518854BD1D37BB220A79F81301A0A07E7D791A9 (RecognitionEventArgs_tF3045EA40FBF0ACD26A0B6F7D4144036AA7D05F9* __this, const RuntimeMethod* method) 
{
	{
		uint64_t L_0 = __this->___U3COffsetU3Ek__BackingField_5;
		return L_0;
	}
}
// System.String Microsoft.CognitiveServices.Speech.RecognitionEventArgs::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* RecognitionEventArgs_ToString_mF2E5686250B94CC3327CD6EB9EC1F89F365E8788 (RecognitionEventArgs_tF3045EA40FBF0ACD26A0B6F7D4144036AA7D05F9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral74950E71ECDE7F282725B371C332DD6851AC6CDE);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_0;
		L_0 = CultureInfo_get_InvariantCulture_m78DAB8CBE8766445310782B6E61FB7A9983AD425(NULL);
		String_t* L_1;
		L_1 = SessionEventArgs_get_SessionId_m8963B1EBE96E2EC946789DE47BBC4A17292FDF33_inline(__this, NULL);
		uint64_t L_2;
		L_2 = RecognitionEventArgs_get_Offset_m7518854BD1D37BB220A79F81301A0A07E7D791A9_inline(__this, NULL);
		uint64_t L_3 = L_2;
		RuntimeObject* L_4 = Box(UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var, &L_3);
		String_t* L_5;
		L_5 = String_Format_m69D52D3917F3D1BAC76B506B9BAA68A41B483DEF(L_0, _stringLiteral74950E71ECDE7F282725B371C332DD6851AC6CDE, L_1, L_4, NULL);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RecognitionResult__ctor_mF52685BDF0D0D81056CF4F2D7929B837D3E4504E (RecognitionResult_t900FA7A9A16DB8B9FDE5395B1B773BDC63BE474F* __this, intptr_t ___resultHandlePtr0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GetResultDelegate_t678B8552898C76C54DA3B9B56C14C65BDE7D434B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HandleRelease_tDA5C5C8C145FFFB7E9AE3ADB1506118017AC70F9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PropertyCollection_tD2FEDF489ECC1689767DEE33A0152F1FA719AA53_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RecognitionResult_recognizer_result_handle_release_mD7241DA94329C30FC7576690F6090CB9083B1388_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RecognitionResult_result_get_result_id_m0BFA3A72D4CAA06A4E41F7FC5DD49DC9EB786AB7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RecognitionResult_result_get_text_mE0BD740D8672D17924AFE52A56DA353AF8F9E2D8_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	intptr_t V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		intptr_t L_0 = ___resultHandlePtr0;
		bool L_1;
		L_1 = IntPtr_op_Inequality_m2F715312CBFCE7E1A81D0689F68B97218E37E5D1(L_0, (0), NULL);
		if (!L_1)
		{
			goto IL_00b1;
		}
	}
	{
		intptr_t L_2 = ___resultHandlePtr0;
		HandleRelease_tDA5C5C8C145FFFB7E9AE3ADB1506118017AC70F9* L_3 = (HandleRelease_tDA5C5C8C145FFFB7E9AE3ADB1506118017AC70F9*)il2cpp_codegen_object_new(HandleRelease_tDA5C5C8C145FFFB7E9AE3ADB1506118017AC70F9_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		HandleRelease__ctor_m5265A47915D90FC04F512F3D1BC68A711343A4E7(L_3, NULL, (intptr_t)((void*)RecognitionResult_recognizer_result_handle_release_mD7241DA94329C30FC7576690F6090CB9083B1388_RuntimeMethod_var), NULL);
		InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* L_4 = (InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D*)il2cpp_codegen_object_new(InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		InteropSafeHandle__ctor_mC37ECE3504FFCF1C3A565E45B1659808FD310B62(L_4, L_2, L_3, NULL);
		__this->___resultHandle_4 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___resultHandle_4), (void*)L_4);
		GetResultDelegate_t678B8552898C76C54DA3B9B56C14C65BDE7D434B* L_5 = (GetResultDelegate_t678B8552898C76C54DA3B9B56C14C65BDE7D434B*)il2cpp_codegen_object_new(GetResultDelegate_t678B8552898C76C54DA3B9B56C14C65BDE7D434B_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		GetResultDelegate__ctor_mE4D38F6D4B3F9FBE85FE26118D690DD00A195314(L_5, NULL, (intptr_t)((void*)RecognitionResult_result_get_result_id_m0BFA3A72D4CAA06A4E41F7FC5DD49DC9EB786AB7_RuntimeMethod_var), NULL);
		InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* L_6 = __this->___resultHandle_4;
		String_t* L_7;
		L_7 = SpxFactory_GetDataFromHandleUsingDelegate_m2292A32ABAA69783218EFADD6C6269D5527378CD(L_5, L_6, ((int32_t)2048), NULL);
		__this->___U3CResultIdU3Ek__BackingField_0 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CResultIdU3Ek__BackingField_0), (void*)L_7);
		GetResultDelegate_t678B8552898C76C54DA3B9B56C14C65BDE7D434B* L_8 = (GetResultDelegate_t678B8552898C76C54DA3B9B56C14C65BDE7D434B*)il2cpp_codegen_object_new(GetResultDelegate_t678B8552898C76C54DA3B9B56C14C65BDE7D434B_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		GetResultDelegate__ctor_mE4D38F6D4B3F9FBE85FE26118D690DD00A195314(L_8, NULL, (intptr_t)((void*)RecognitionResult_result_get_text_mE0BD740D8672D17924AFE52A56DA353AF8F9E2D8_RuntimeMethod_var), NULL);
		InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* L_9 = __this->___resultHandle_4;
		String_t* L_10;
		L_10 = SpxFactory_GetDataFromHandleUsingDelegate_m2292A32ABAA69783218EFADD6C6269D5527378CD(L_8, L_9, ((int32_t)2048), NULL);
		__this->___U3CTextU3Ek__BackingField_2 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTextU3Ek__BackingField_2), (void*)L_10);
		V_0 = 0;
		InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* L_11 = __this->___resultHandle_4;
		intptr_t L_12;
		L_12 = RecognitionResult_result_get_reason_m24BBA306606BC3C381D4A4393ACB71DD4D2050DF(L_11, (&V_0), NULL);
		SpxExceptionThrower_ThrowIfFail_m80558DF4FFB9A961C7CCC15CD13AF53F5437BA21(L_12, NULL);
		int32_t L_13 = V_0;
		__this->___U3CReasonU3Ek__BackingField_1 = L_13;
		V_1 = (0);
		InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* L_14 = __this->___resultHandle_4;
		intptr_t L_15;
		L_15 = RecognitionResult_result_get_property_bag_m5D8123FA8E1448FC52D27AA615145767ACF533C5(L_14, (&V_1), NULL);
		SpxExceptionThrower_ThrowIfFail_m80558DF4FFB9A961C7CCC15CD13AF53F5437BA21(L_15, NULL);
		intptr_t L_16 = V_1;
		PropertyCollection_tD2FEDF489ECC1689767DEE33A0152F1FA719AA53* L_17 = (PropertyCollection_tD2FEDF489ECC1689767DEE33A0152F1FA719AA53*)il2cpp_codegen_object_new(PropertyCollection_tD2FEDF489ECC1689767DEE33A0152F1FA719AA53_il2cpp_TypeInfo_var);
		NullCheck(L_17);
		PropertyCollection__ctor_m8F53EB9B9655888D9E2B7AEBB9460B49265618B7(L_17, L_16, NULL);
		RecognitionResult_set_Properties_m4882E5F4FF2BD9889CA0D982BA14CB48E6936468_inline(__this, L_17, NULL);
	}

IL_00b1:
	{
		return;
	}
}
// System.String Microsoft.CognitiveServices.Speech.RecognitionResult::get_ResultId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* RecognitionResult_get_ResultId_m9CF0F0A305756122CEFD17C636900B33C167A973 (RecognitionResult_t900FA7A9A16DB8B9FDE5395B1B773BDC63BE474F* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CResultIdU3Ek__BackingField_0;
		return L_0;
	}
}
// Microsoft.CognitiveServices.Speech.ResultReason Microsoft.CognitiveServices.Speech.RecognitionResult::get_Reason()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RecognitionResult_get_Reason_m066811BCC260ED5344D289BE7930228203781E67 (RecognitionResult_t900FA7A9A16DB8B9FDE5395B1B773BDC63BE474F* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CReasonU3Ek__BackingField_1;
		return L_0;
	}
}
// System.String Microsoft.CognitiveServices.Speech.RecognitionResult::get_Text()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* RecognitionResult_get_Text_mDC9F2CE6BE9519B218C81FECCC1BC35CA7274836 (RecognitionResult_t900FA7A9A16DB8B9FDE5395B1B773BDC63BE474F* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CTextU3Ek__BackingField_2;
		return L_0;
	}
}
// Microsoft.CognitiveServices.Speech.PropertyCollection Microsoft.CognitiveServices.Speech.RecognitionResult::get_Properties()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PropertyCollection_tD2FEDF489ECC1689767DEE33A0152F1FA719AA53* RecognitionResult_get_Properties_mBC89268B2B6560AC90F7EE6837AB6E3657B212D3 (RecognitionResult_t900FA7A9A16DB8B9FDE5395B1B773BDC63BE474F* __this, const RuntimeMethod* method) 
{
	{
		PropertyCollection_tD2FEDF489ECC1689767DEE33A0152F1FA719AA53* L_0 = __this->___U3CPropertiesU3Ek__BackingField_3;
		return L_0;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.RecognitionResult::set_Properties(Microsoft.CognitiveServices.Speech.PropertyCollection)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RecognitionResult_set_Properties_m4882E5F4FF2BD9889CA0D982BA14CB48E6936468 (RecognitionResult_t900FA7A9A16DB8B9FDE5395B1B773BDC63BE474F* __this, PropertyCollection_tD2FEDF489ECC1689767DEE33A0152F1FA719AA53* ___value0, const RuntimeMethod* method) 
{
	{
		PropertyCollection_tD2FEDF489ECC1689767DEE33A0152F1FA719AA53* L_0 = ___value0;
		__this->___U3CPropertiesU3Ek__BackingField_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CPropertiesU3Ek__BackingField_3), (void*)L_0);
		return;
	}
}
// System.String Microsoft.CognitiveServices.Speech.RecognitionResult::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* RecognitionResult_ToString_m7C6EE65B05B5F984DB102F9041EFDA7403547F95 (RecognitionResult_t900FA7A9A16DB8B9FDE5395B1B773BDC63BE474F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ResultReason_tC944C305A2A069DB2A7F5C6112F43FA8A4405A54_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6260956A285A95B964811F944839C8CA994BAAD8);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_0;
		L_0 = CultureInfo_get_InvariantCulture_m78DAB8CBE8766445310782B6E61FB7A9983AD425(NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)4);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = L_1;
		String_t* L_3;
		L_3 = VirtualFuncInvoker0< String_t* >::Invoke(4 /* System.String Microsoft.CognitiveServices.Speech.RecognitionResult::get_ResultId() */, __this);
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_3);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = L_2;
		int32_t L_5;
		L_5 = VirtualFuncInvoker0< int32_t >::Invoke(5 /* Microsoft.CognitiveServices.Speech.ResultReason Microsoft.CognitiveServices.Speech.RecognitionResult::get_Reason() */, __this);
		int32_t L_6 = L_5;
		RuntimeObject* L_7 = Box(ResultReason_tC944C305A2A069DB2A7F5C6112F43FA8A4405A54_il2cpp_TypeInfo_var, &L_6);
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_7);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_7);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_8 = L_4;
		String_t* L_9;
		L_9 = VirtualFuncInvoker0< String_t* >::Invoke(6 /* System.String Microsoft.CognitiveServices.Speech.RecognitionResult::get_Text() */, __this);
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, L_9);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_9);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_10 = L_8;
		PropertyCollection_tD2FEDF489ECC1689767DEE33A0152F1FA719AA53* L_11;
		L_11 = VirtualFuncInvoker0< PropertyCollection_tD2FEDF489ECC1689767DEE33A0152F1FA719AA53* >::Invoke(7 /* Microsoft.CognitiveServices.Speech.PropertyCollection Microsoft.CognitiveServices.Speech.RecognitionResult::get_Properties() */, __this);
		NullCheck(L_11);
		String_t* L_12;
		L_12 = VirtualFuncInvoker1< String_t*, int32_t >::Invoke(5 /* System.String Microsoft.CognitiveServices.Speech.PropertyCollection::GetProperty(Microsoft.CognitiveServices.Speech.PropertyId) */, L_11, ((int32_t)5000));
		NullCheck(L_10);
		ArrayElementTypeCheck (L_10, L_12);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject*)L_12);
		String_t* L_13;
		L_13 = String_Format_mBFACD7FE8657957CE3D5DA54D519AB418AF421E7(L_0, _stringLiteral6260956A285A95B964811F944839C8CA994BAAD8, L_10, NULL);
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
// Microsoft.CognitiveServices.Speech.CancellationDetails Microsoft.CognitiveServices.Speech.CancellationDetails::FromResult(Microsoft.CognitiveServices.Speech.RecognitionResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CancellationDetails_t3A257E993FAECAD1A9866267C438E47CFA1D308A* CancellationDetails_FromResult_m6C75E2AD2521230D540BA1BCF5515ECC29DBF968 (RecognitionResult_t900FA7A9A16DB8B9FDE5395B1B773BDC63BE474F* ___result0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CancellationDetails_t3A257E993FAECAD1A9866267C438E47CFA1D308A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RecognitionResult_t900FA7A9A16DB8B9FDE5395B1B773BDC63BE474F* L_0 = ___result0;
		CancellationDetails_t3A257E993FAECAD1A9866267C438E47CFA1D308A* L_1 = (CancellationDetails_t3A257E993FAECAD1A9866267C438E47CFA1D308A*)il2cpp_codegen_object_new(CancellationDetails_t3A257E993FAECAD1A9866267C438E47CFA1D308A_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		CancellationDetails__ctor_m5ECA54A2F0D76D1BF8E39C7AEF5DCC99D8672E26(L_1, L_0, NULL);
		return L_1;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.CancellationDetails::.ctor(Microsoft.CognitiveServices.Speech.RecognitionResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CancellationDetails__ctor_m5ECA54A2F0D76D1BF8E39C7AEF5DCC99D8672E26 (CancellationDetails_t3A257E993FAECAD1A9866267C438E47CFA1D308A* __this, RecognitionResult_t900FA7A9A16DB8B9FDE5395B1B773BDC63BE474F* ___result0, const RuntimeMethod* method) 
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
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		RecognitionResult_t900FA7A9A16DB8B9FDE5395B1B773BDC63BE474F* L_0 = ___result0;
		SpxExceptionThrower_ThrowIfNull_m5C9E05F3DEDEE273B1049A6052813A5870C4F223(L_0, (String_t*)NULL, NULL);
		RecognitionResult_t900FA7A9A16DB8B9FDE5395B1B773BDC63BE474F* L_1 = ___result0;
		__this->___recognitionResult_3 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___recognitionResult_3), (void*)L_1);
		RecognitionResult_t900FA7A9A16DB8B9FDE5395B1B773BDC63BE474F* L_2 = __this->___recognitionResult_3;
		NullCheck(L_2);
		InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* L_3 = L_2->___resultHandle_4;
		SpxExceptionThrower_ThrowIfNull_m5C9E05F3DEDEE273B1049A6052813A5870C4F223(L_3, _stringLiteralF28770BAFF3BD72A14677B13D79FE1286316B04C, NULL);
		RecognitionResult_t900FA7A9A16DB8B9FDE5395B1B773BDC63BE474F* L_4 = __this->___recognitionResult_3;
		NullCheck(L_4);
		InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* L_5 = L_4->___resultHandle_4;
		intptr_t L_6;
		L_6 = CancellationDetails_result_get_reason_canceled_mB6B75B4486D05ADF2F85CDFD0F60E8DC61FB9800(L_5, (&V_0), NULL);
		SpxExceptionThrower_ThrowIfFail_m80558DF4FFB9A961C7CCC15CD13AF53F5437BA21(L_6, NULL);
		int32_t L_7 = V_0;
		CancellationDetails_set_Reason_m12D27884D7BBCF9EC1908A1DFF49066DEF4EF2B5_inline(__this, L_7, NULL);
		RecognitionResult_t900FA7A9A16DB8B9FDE5395B1B773BDC63BE474F* L_8 = __this->___recognitionResult_3;
		NullCheck(L_8);
		InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* L_9 = L_8->___resultHandle_4;
		intptr_t L_10;
		L_10 = CancellationDetails_result_get_canceled_error_code_m8469A5D13BF7FBEAC7552AB749BE0E63258F87A0(L_9, (&V_1), NULL);
		SpxExceptionThrower_ThrowIfFail_m80558DF4FFB9A961C7CCC15CD13AF53F5437BA21(L_10, NULL);
		int32_t L_11 = V_1;
		CancellationDetails_set_ErrorCode_m78B75A1457D448E18D427A192E95A964218C8A74_inline(__this, L_11, NULL);
		RecognitionResult_t900FA7A9A16DB8B9FDE5395B1B773BDC63BE474F* L_12 = __this->___recognitionResult_3;
		NullCheck(L_12);
		PropertyCollection_tD2FEDF489ECC1689767DEE33A0152F1FA719AA53* L_13;
		L_13 = VirtualFuncInvoker0< PropertyCollection_tD2FEDF489ECC1689767DEE33A0152F1FA719AA53* >::Invoke(7 /* Microsoft.CognitiveServices.Speech.PropertyCollection Microsoft.CognitiveServices.Speech.RecognitionResult::get_Properties() */, L_12);
		NullCheck(L_13);
		String_t* L_14;
		L_14 = VirtualFuncInvoker1< String_t*, int32_t >::Invoke(5 /* System.String Microsoft.CognitiveServices.Speech.PropertyCollection::GetProperty(Microsoft.CognitiveServices.Speech.PropertyId) */, L_13, ((int32_t)5001));
		CancellationDetails_set_ErrorDetails_m22095079546C7E7DC32D28BB7D2271B3E68ACE93_inline(__this, L_14, NULL);
		return;
	}
}
// Microsoft.CognitiveServices.Speech.CancellationReason Microsoft.CognitiveServices.Speech.CancellationDetails::get_Reason()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CancellationDetails_get_Reason_m353778943984FF273C594BBB7D83D519C0B58180 (CancellationDetails_t3A257E993FAECAD1A9866267C438E47CFA1D308A* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CReasonU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.CancellationDetails::set_Reason(Microsoft.CognitiveServices.Speech.CancellationReason)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CancellationDetails_set_Reason_m12D27884D7BBCF9EC1908A1DFF49066DEF4EF2B5 (CancellationDetails_t3A257E993FAECAD1A9866267C438E47CFA1D308A* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___value0;
		__this->___U3CReasonU3Ek__BackingField_0 = L_0;
		return;
	}
}
// Microsoft.CognitiveServices.Speech.CancellationErrorCode Microsoft.CognitiveServices.Speech.CancellationDetails::get_ErrorCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CancellationDetails_get_ErrorCode_m01B8889CC68F1443F822B1E8082F6B8378C723AF (CancellationDetails_t3A257E993FAECAD1A9866267C438E47CFA1D308A* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CErrorCodeU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.CancellationDetails::set_ErrorCode(Microsoft.CognitiveServices.Speech.CancellationErrorCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CancellationDetails_set_ErrorCode_m78B75A1457D448E18D427A192E95A964218C8A74 (CancellationDetails_t3A257E993FAECAD1A9866267C438E47CFA1D308A* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___value0;
		__this->___U3CErrorCodeU3Ek__BackingField_1 = L_0;
		return;
	}
}
// System.String Microsoft.CognitiveServices.Speech.CancellationDetails::get_ErrorDetails()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* CancellationDetails_get_ErrorDetails_mB3C4D6386464A3C5168B7EEFAAE45EC62EF95636 (CancellationDetails_t3A257E993FAECAD1A9866267C438E47CFA1D308A* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CErrorDetailsU3Ek__BackingField_2;
		return L_0;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.CancellationDetails::set_ErrorDetails(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CancellationDetails_set_ErrorDetails_m22095079546C7E7DC32D28BB7D2271B3E68ACE93 (CancellationDetails_t3A257E993FAECAD1A9866267C438E47CFA1D308A* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___value0;
		__this->___U3CErrorDetailsU3Ek__BackingField_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CErrorDetailsU3Ek__BackingField_2), (void*)L_0);
		return;
	}
}
// System.String Microsoft.CognitiveServices.Speech.CancellationDetails::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* CancellationDetails_ToString_m5E209DF29443488B64A6A0635234FD138DA3853B (CancellationDetails_t3A257E993FAECAD1A9866267C438E47CFA1D308A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CancellationReason_t51FBE96029389530BF9FEE71742677C3DFF019A5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8E8084C52A356BA811825A26D2A68087D1EE1AE6);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_0;
		L_0 = CultureInfo_get_InvariantCulture_m78DAB8CBE8766445310782B6E61FB7A9983AD425(NULL);
		int32_t L_1;
		L_1 = CancellationDetails_get_Reason_m353778943984FF273C594BBB7D83D519C0B58180_inline(__this, NULL);
		int32_t L_2 = L_1;
		RuntimeObject* L_3 = Box(CancellationReason_t51FBE96029389530BF9FEE71742677C3DFF019A5_il2cpp_TypeInfo_var, &L_2);
		String_t* L_4;
		L_4 = CancellationDetails_get_ErrorDetails_mB3C4D6386464A3C5168B7EEFAAE45EC62EF95636_inline(__this, NULL);
		String_t* L_5;
		L_5 = String_Format_m69D52D3917F3D1BAC76B506B9BAA68A41B483DEF(L_0, _stringLiteral8E8084C52A356BA811825A26D2A68087D1EE1AE6, L_3, L_4, NULL);
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
extern "C" void CDECL ReversePInvokeWrapper_Recognizer_FireEvent_SetSessionStarted_m52E09A4B81972BF98DDFF6F1901AF63188C91629(intptr_t ___hreco0, intptr_t ___hevent1, intptr_t ___pvContext2)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	Recognizer_FireEvent_SetSessionStarted_m52E09A4B81972BF98DDFF6F1901AF63188C91629(___hreco0, ___hevent1, ___pvContext2, NULL);

}
extern "C" void CDECL ReversePInvokeWrapper_Recognizer_FireEvent_SetSessionStopped_m1925D97F4E29071799739DAE667160A804385C25(intptr_t ___hreco0, intptr_t ___hevent1, intptr_t ___pvContext2)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	Recognizer_FireEvent_SetSessionStopped_m1925D97F4E29071799739DAE667160A804385C25(___hreco0, ___hevent1, ___pvContext2, NULL);

}
extern "C" void CDECL ReversePInvokeWrapper_Recognizer_FireEvent_SpeechStartDetected_mBBD9DA4BDE0F8E8E8545C4BACEC0068B86F16DAF(intptr_t ___hreco0, intptr_t ___hevent1, intptr_t ___pvContext2)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	Recognizer_FireEvent_SpeechStartDetected_mBBD9DA4BDE0F8E8E8545C4BACEC0068B86F16DAF(___hreco0, ___hevent1, ___pvContext2, NULL);

}
extern "C" void CDECL ReversePInvokeWrapper_Recognizer_FireEvent_SpeechEndDetected_m855530988936AC915A4277BF08A8EF863933990E(intptr_t ___hreco0, intptr_t ___hevent1, intptr_t ___pvContext2)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	Recognizer_FireEvent_SpeechEndDetected_m855530988936AC915A4277BF08A8EF863933990E(___hreco0, ___hevent1, ___pvContext2, NULL);

}
// System.Void Microsoft.CognitiveServices.Speech.Recognizer::add__SessionStarted(System.EventHandler`1<Microsoft.CognitiveServices.Speech.SessionEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Recognizer_add__SessionStarted_m631F4CB4BF55A534C3A8CB8EAEC57EE7139BE4CD (Recognizer_tCA087D63D8BDE21D877CECAAF536BDCCFE54729A* __this, EventHandler_1_tB44EB3A3EAA7B1B7ED121BF2DF6360B62B13EA07* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tB44EB3A3EAA7B1B7ED121BF2DF6360B62B13EA07_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_tB44EB3A3EAA7B1B7ED121BF2DF6360B62B13EA07* V_0 = NULL;
	EventHandler_1_tB44EB3A3EAA7B1B7ED121BF2DF6360B62B13EA07* V_1 = NULL;
	EventHandler_1_tB44EB3A3EAA7B1B7ED121BF2DF6360B62B13EA07* V_2 = NULL;
	{
		EventHandler_1_tB44EB3A3EAA7B1B7ED121BF2DF6360B62B13EA07* L_0 = __this->____SessionStarted_0;
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_tB44EB3A3EAA7B1B7ED121BF2DF6360B62B13EA07* L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_tB44EB3A3EAA7B1B7ED121BF2DF6360B62B13EA07* L_2 = V_1;
		EventHandler_1_tB44EB3A3EAA7B1B7ED121BF2DF6360B62B13EA07* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m8B9D24CED35033C7FC56501DFE650F5CB7FF012C(L_2, L_3, NULL);
		V_2 = ((EventHandler_1_tB44EB3A3EAA7B1B7ED121BF2DF6360B62B13EA07*)Castclass((RuntimeObject*)L_4, EventHandler_1_tB44EB3A3EAA7B1B7ED121BF2DF6360B62B13EA07_il2cpp_TypeInfo_var));
		EventHandler_1_tB44EB3A3EAA7B1B7ED121BF2DF6360B62B13EA07** L_5 = (&__this->____SessionStarted_0);
		EventHandler_1_tB44EB3A3EAA7B1B7ED121BF2DF6360B62B13EA07* L_6 = V_2;
		EventHandler_1_tB44EB3A3EAA7B1B7ED121BF2DF6360B62B13EA07* L_7 = V_1;
		EventHandler_1_tB44EB3A3EAA7B1B7ED121BF2DF6360B62B13EA07* L_8;
		L_8 = InterlockedCompareExchangeImpl<EventHandler_1_tB44EB3A3EAA7B1B7ED121BF2DF6360B62B13EA07*>(L_5, L_6, L_7);
		V_0 = L_8;
		EventHandler_1_tB44EB3A3EAA7B1B7ED121BF2DF6360B62B13EA07* L_9 = V_0;
		EventHandler_1_tB44EB3A3EAA7B1B7ED121BF2DF6360B62B13EA07* L_10 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_tB44EB3A3EAA7B1B7ED121BF2DF6360B62B13EA07*)L_9) == ((RuntimeObject*)(EventHandler_1_tB44EB3A3EAA7B1B7ED121BF2DF6360B62B13EA07*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.Recognizer::remove__SessionStarted(System.EventHandler`1<Microsoft.CognitiveServices.Speech.SessionEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Recognizer_remove__SessionStarted_m1FB4C79584D375A664EFB1916F4127D741FBA016 (Recognizer_tCA087D63D8BDE21D877CECAAF536BDCCFE54729A* __this, EventHandler_1_tB44EB3A3EAA7B1B7ED121BF2DF6360B62B13EA07* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tB44EB3A3EAA7B1B7ED121BF2DF6360B62B13EA07_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_tB44EB3A3EAA7B1B7ED121BF2DF6360B62B13EA07* V_0 = NULL;
	EventHandler_1_tB44EB3A3EAA7B1B7ED121BF2DF6360B62B13EA07* V_1 = NULL;
	EventHandler_1_tB44EB3A3EAA7B1B7ED121BF2DF6360B62B13EA07* V_2 = NULL;
	{
		EventHandler_1_tB44EB3A3EAA7B1B7ED121BF2DF6360B62B13EA07* L_0 = __this->____SessionStarted_0;
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_tB44EB3A3EAA7B1B7ED121BF2DF6360B62B13EA07* L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_tB44EB3A3EAA7B1B7ED121BF2DF6360B62B13EA07* L_2 = V_1;
		EventHandler_1_tB44EB3A3EAA7B1B7ED121BF2DF6360B62B13EA07* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m40506877934EC1AD4ADAE57F5E97AF0BC0F96116(L_2, L_3, NULL);
		V_2 = ((EventHandler_1_tB44EB3A3EAA7B1B7ED121BF2DF6360B62B13EA07*)Castclass((RuntimeObject*)L_4, EventHandler_1_tB44EB3A3EAA7B1B7ED121BF2DF6360B62B13EA07_il2cpp_TypeInfo_var));
		EventHandler_1_tB44EB3A3EAA7B1B7ED121BF2DF6360B62B13EA07** L_5 = (&__this->____SessionStarted_0);
		EventHandler_1_tB44EB3A3EAA7B1B7ED121BF2DF6360B62B13EA07* L_6 = V_2;
		EventHandler_1_tB44EB3A3EAA7B1B7ED121BF2DF6360B62B13EA07* L_7 = V_1;
		EventHandler_1_tB44EB3A3EAA7B1B7ED121BF2DF6360B62B13EA07* L_8;
		L_8 = InterlockedCompareExchangeImpl<EventHandler_1_tB44EB3A3EAA7B1B7ED121BF2DF6360B62B13EA07*>(L_5, L_6, L_7);
		V_0 = L_8;
		EventHandler_1_tB44EB3A3EAA7B1B7ED121BF2DF6360B62B13EA07* L_9 = V_0;
		EventHandler_1_tB44EB3A3EAA7B1B7ED121BF2DF6360B62B13EA07* L_10 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_tB44EB3A3EAA7B1B7ED121BF2DF6360B62B13EA07*)L_9) == ((RuntimeObject*)(EventHandler_1_tB44EB3A3EAA7B1B7ED121BF2DF6360B62B13EA07*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.Recognizer::add__SessionStopped(System.EventHandler`1<Microsoft.CognitiveServices.Speech.SessionEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Recognizer_add__SessionStopped_mC531DA001A86C34512638EC7AD42682AD216D32E (Recognizer_tCA087D63D8BDE21D877CECAAF536BDCCFE54729A* __this, EventHandler_1_tB44EB3A3EAA7B1B7ED121BF2DF6360B62B13EA07* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tB44EB3A3EAA7B1B7ED121BF2DF6360B62B13EA07_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_tB44EB3A3EAA7B1B7ED121BF2DF6360B62B13EA07* V_0 = NULL;
	EventHandler_1_tB44EB3A3EAA7B1B7ED121BF2DF6360B62B13EA07* V_1 = NULL;
	EventHandler_1_tB44EB3A3EAA7B1B7ED121BF2DF6360B62B13EA07* V_2 = NULL;
	{
		EventHandler_1_tB44EB3A3EAA7B1B7ED121BF2DF6360B62B13EA07* L_0 = __this->____SessionStopped_1;
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_tB44EB3A3EAA7B1B7ED121BF2DF6360B62B13EA07* L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_tB44EB3A3EAA7B1B7ED121BF2DF6360B62B13EA07* L_2 = V_1;
		EventHandler_1_tB44EB3A3EAA7B1B7ED121BF2DF6360B62B13EA07* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m8B9D24CED35033C7FC56501DFE650F5CB7FF012C(L_2, L_3, NULL);
		V_2 = ((EventHandler_1_tB44EB3A3EAA7B1B7ED121BF2DF6360B62B13EA07*)Castclass((RuntimeObject*)L_4, EventHandler_1_tB44EB3A3EAA7B1B7ED121BF2DF6360B62B13EA07_il2cpp_TypeInfo_var));
		EventHandler_1_tB44EB3A3EAA7B1B7ED121BF2DF6360B62B13EA07** L_5 = (&__this->____SessionStopped_1);
		EventHandler_1_tB44EB3A3EAA7B1B7ED121BF2DF6360B62B13EA07* L_6 = V_2;
		EventHandler_1_tB44EB3A3EAA7B1B7ED121BF2DF6360B62B13EA07* L_7 = V_1;
		EventHandler_1_tB44EB3A3EAA7B1B7ED121BF2DF6360B62B13EA07* L_8;
		L_8 = InterlockedCompareExchangeImpl<EventHandler_1_tB44EB3A3EAA7B1B7ED121BF2DF6360B62B13EA07*>(L_5, L_6, L_7);
		V_0 = L_8;
		EventHandler_1_tB44EB3A3EAA7B1B7ED121BF2DF6360B62B13EA07* L_9 = V_0;
		EventHandler_1_tB44EB3A3EAA7B1B7ED121BF2DF6360B62B13EA07* L_10 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_tB44EB3A3EAA7B1B7ED121BF2DF6360B62B13EA07*)L_9) == ((RuntimeObject*)(EventHandler_1_tB44EB3A3EAA7B1B7ED121BF2DF6360B62B13EA07*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.Recognizer::remove__SessionStopped(System.EventHandler`1<Microsoft.CognitiveServices.Speech.SessionEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Recognizer_remove__SessionStopped_m75B4EAF7FE72A73C707DD5AD1CD02D2A82F48AAA (Recognizer_tCA087D63D8BDE21D877CECAAF536BDCCFE54729A* __this, EventHandler_1_tB44EB3A3EAA7B1B7ED121BF2DF6360B62B13EA07* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tB44EB3A3EAA7B1B7ED121BF2DF6360B62B13EA07_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_tB44EB3A3EAA7B1B7ED121BF2DF6360B62B13EA07* V_0 = NULL;
	EventHandler_1_tB44EB3A3EAA7B1B7ED121BF2DF6360B62B13EA07* V_1 = NULL;
	EventHandler_1_tB44EB3A3EAA7B1B7ED121BF2DF6360B62B13EA07* V_2 = NULL;
	{
		EventHandler_1_tB44EB3A3EAA7B1B7ED121BF2DF6360B62B13EA07* L_0 = __this->____SessionStopped_1;
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_tB44EB3A3EAA7B1B7ED121BF2DF6360B62B13EA07* L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_tB44EB3A3EAA7B1B7ED121BF2DF6360B62B13EA07* L_2 = V_1;
		EventHandler_1_tB44EB3A3EAA7B1B7ED121BF2DF6360B62B13EA07* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m40506877934EC1AD4ADAE57F5E97AF0BC0F96116(L_2, L_3, NULL);
		V_2 = ((EventHandler_1_tB44EB3A3EAA7B1B7ED121BF2DF6360B62B13EA07*)Castclass((RuntimeObject*)L_4, EventHandler_1_tB44EB3A3EAA7B1B7ED121BF2DF6360B62B13EA07_il2cpp_TypeInfo_var));
		EventHandler_1_tB44EB3A3EAA7B1B7ED121BF2DF6360B62B13EA07** L_5 = (&__this->____SessionStopped_1);
		EventHandler_1_tB44EB3A3EAA7B1B7ED121BF2DF6360B62B13EA07* L_6 = V_2;
		EventHandler_1_tB44EB3A3EAA7B1B7ED121BF2DF6360B62B13EA07* L_7 = V_1;
		EventHandler_1_tB44EB3A3EAA7B1B7ED121BF2DF6360B62B13EA07* L_8;
		L_8 = InterlockedCompareExchangeImpl<EventHandler_1_tB44EB3A3EAA7B1B7ED121BF2DF6360B62B13EA07*>(L_5, L_6, L_7);
		V_0 = L_8;
		EventHandler_1_tB44EB3A3EAA7B1B7ED121BF2DF6360B62B13EA07* L_9 = V_0;
		EventHandler_1_tB44EB3A3EAA7B1B7ED121BF2DF6360B62B13EA07* L_10 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_tB44EB3A3EAA7B1B7ED121BF2DF6360B62B13EA07*)L_9) == ((RuntimeObject*)(EventHandler_1_tB44EB3A3EAA7B1B7ED121BF2DF6360B62B13EA07*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.Recognizer::add__SpeechStartDetected(System.EventHandler`1<Microsoft.CognitiveServices.Speech.RecognitionEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Recognizer_add__SpeechStartDetected_mC7B7A06E0F81282B1A983A1B99887C9E558BB750 (Recognizer_tCA087D63D8BDE21D877CECAAF536BDCCFE54729A* __this, EventHandler_1_t4457009845FA4C1ABCF83D7E00C38F13807F18F0* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_t4457009845FA4C1ABCF83D7E00C38F13807F18F0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_t4457009845FA4C1ABCF83D7E00C38F13807F18F0* V_0 = NULL;
	EventHandler_1_t4457009845FA4C1ABCF83D7E00C38F13807F18F0* V_1 = NULL;
	EventHandler_1_t4457009845FA4C1ABCF83D7E00C38F13807F18F0* V_2 = NULL;
	{
		EventHandler_1_t4457009845FA4C1ABCF83D7E00C38F13807F18F0* L_0 = __this->____SpeechStartDetected_2;
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_t4457009845FA4C1ABCF83D7E00C38F13807F18F0* L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_t4457009845FA4C1ABCF83D7E00C38F13807F18F0* L_2 = V_1;
		EventHandler_1_t4457009845FA4C1ABCF83D7E00C38F13807F18F0* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m8B9D24CED35033C7FC56501DFE650F5CB7FF012C(L_2, L_3, NULL);
		V_2 = ((EventHandler_1_t4457009845FA4C1ABCF83D7E00C38F13807F18F0*)Castclass((RuntimeObject*)L_4, EventHandler_1_t4457009845FA4C1ABCF83D7E00C38F13807F18F0_il2cpp_TypeInfo_var));
		EventHandler_1_t4457009845FA4C1ABCF83D7E00C38F13807F18F0** L_5 = (&__this->____SpeechStartDetected_2);
		EventHandler_1_t4457009845FA4C1ABCF83D7E00C38F13807F18F0* L_6 = V_2;
		EventHandler_1_t4457009845FA4C1ABCF83D7E00C38F13807F18F0* L_7 = V_1;
		EventHandler_1_t4457009845FA4C1ABCF83D7E00C38F13807F18F0* L_8;
		L_8 = InterlockedCompareExchangeImpl<EventHandler_1_t4457009845FA4C1ABCF83D7E00C38F13807F18F0*>(L_5, L_6, L_7);
		V_0 = L_8;
		EventHandler_1_t4457009845FA4C1ABCF83D7E00C38F13807F18F0* L_9 = V_0;
		EventHandler_1_t4457009845FA4C1ABCF83D7E00C38F13807F18F0* L_10 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_t4457009845FA4C1ABCF83D7E00C38F13807F18F0*)L_9) == ((RuntimeObject*)(EventHandler_1_t4457009845FA4C1ABCF83D7E00C38F13807F18F0*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.Recognizer::remove__SpeechStartDetected(System.EventHandler`1<Microsoft.CognitiveServices.Speech.RecognitionEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Recognizer_remove__SpeechStartDetected_m3DB6ED1521289E1BCB5BF3032F68C2452A2F8830 (Recognizer_tCA087D63D8BDE21D877CECAAF536BDCCFE54729A* __this, EventHandler_1_t4457009845FA4C1ABCF83D7E00C38F13807F18F0* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_t4457009845FA4C1ABCF83D7E00C38F13807F18F0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_t4457009845FA4C1ABCF83D7E00C38F13807F18F0* V_0 = NULL;
	EventHandler_1_t4457009845FA4C1ABCF83D7E00C38F13807F18F0* V_1 = NULL;
	EventHandler_1_t4457009845FA4C1ABCF83D7E00C38F13807F18F0* V_2 = NULL;
	{
		EventHandler_1_t4457009845FA4C1ABCF83D7E00C38F13807F18F0* L_0 = __this->____SpeechStartDetected_2;
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_t4457009845FA4C1ABCF83D7E00C38F13807F18F0* L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_t4457009845FA4C1ABCF83D7E00C38F13807F18F0* L_2 = V_1;
		EventHandler_1_t4457009845FA4C1ABCF83D7E00C38F13807F18F0* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m40506877934EC1AD4ADAE57F5E97AF0BC0F96116(L_2, L_3, NULL);
		V_2 = ((EventHandler_1_t4457009845FA4C1ABCF83D7E00C38F13807F18F0*)Castclass((RuntimeObject*)L_4, EventHandler_1_t4457009845FA4C1ABCF83D7E00C38F13807F18F0_il2cpp_TypeInfo_var));
		EventHandler_1_t4457009845FA4C1ABCF83D7E00C38F13807F18F0** L_5 = (&__this->____SpeechStartDetected_2);
		EventHandler_1_t4457009845FA4C1ABCF83D7E00C38F13807F18F0* L_6 = V_2;
		EventHandler_1_t4457009845FA4C1ABCF83D7E00C38F13807F18F0* L_7 = V_1;
		EventHandler_1_t4457009845FA4C1ABCF83D7E00C38F13807F18F0* L_8;
		L_8 = InterlockedCompareExchangeImpl<EventHandler_1_t4457009845FA4C1ABCF83D7E00C38F13807F18F0*>(L_5, L_6, L_7);
		V_0 = L_8;
		EventHandler_1_t4457009845FA4C1ABCF83D7E00C38F13807F18F0* L_9 = V_0;
		EventHandler_1_t4457009845FA4C1ABCF83D7E00C38F13807F18F0* L_10 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_t4457009845FA4C1ABCF83D7E00C38F13807F18F0*)L_9) == ((RuntimeObject*)(EventHandler_1_t4457009845FA4C1ABCF83D7E00C38F13807F18F0*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.Recognizer::add__SpeechEndDetected(System.EventHandler`1<Microsoft.CognitiveServices.Speech.RecognitionEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Recognizer_add__SpeechEndDetected_m22831739B45057F6783CF4C784E8829A1A7D27A3 (Recognizer_tCA087D63D8BDE21D877CECAAF536BDCCFE54729A* __this, EventHandler_1_t4457009845FA4C1ABCF83D7E00C38F13807F18F0* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_t4457009845FA4C1ABCF83D7E00C38F13807F18F0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_t4457009845FA4C1ABCF83D7E00C38F13807F18F0* V_0 = NULL;
	EventHandler_1_t4457009845FA4C1ABCF83D7E00C38F13807F18F0* V_1 = NULL;
	EventHandler_1_t4457009845FA4C1ABCF83D7E00C38F13807F18F0* V_2 = NULL;
	{
		EventHandler_1_t4457009845FA4C1ABCF83D7E00C38F13807F18F0* L_0 = __this->____SpeechEndDetected_3;
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_t4457009845FA4C1ABCF83D7E00C38F13807F18F0* L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_t4457009845FA4C1ABCF83D7E00C38F13807F18F0* L_2 = V_1;
		EventHandler_1_t4457009845FA4C1ABCF83D7E00C38F13807F18F0* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m8B9D24CED35033C7FC56501DFE650F5CB7FF012C(L_2, L_3, NULL);
		V_2 = ((EventHandler_1_t4457009845FA4C1ABCF83D7E00C38F13807F18F0*)Castclass((RuntimeObject*)L_4, EventHandler_1_t4457009845FA4C1ABCF83D7E00C38F13807F18F0_il2cpp_TypeInfo_var));
		EventHandler_1_t4457009845FA4C1ABCF83D7E00C38F13807F18F0** L_5 = (&__this->____SpeechEndDetected_3);
		EventHandler_1_t4457009845FA4C1ABCF83D7E00C38F13807F18F0* L_6 = V_2;
		EventHandler_1_t4457009845FA4C1ABCF83D7E00C38F13807F18F0* L_7 = V_1;
		EventHandler_1_t4457009845FA4C1ABCF83D7E00C38F13807F18F0* L_8;
		L_8 = InterlockedCompareExchangeImpl<EventHandler_1_t4457009845FA4C1ABCF83D7E00C38F13807F18F0*>(L_5, L_6, L_7);
		V_0 = L_8;
		EventHandler_1_t4457009845FA4C1ABCF83D7E00C38F13807F18F0* L_9 = V_0;
		EventHandler_1_t4457009845FA4C1ABCF83D7E00C38F13807F18F0* L_10 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_t4457009845FA4C1ABCF83D7E00C38F13807F18F0*)L_9) == ((RuntimeObject*)(EventHandler_1_t4457009845FA4C1ABCF83D7E00C38F13807F18F0*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.Recognizer::remove__SpeechEndDetected(System.EventHandler`1<Microsoft.CognitiveServices.Speech.RecognitionEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Recognizer_remove__SpeechEndDetected_m335107F7B597E13480CF0F21EB83795CFFC9B4D8 (Recognizer_tCA087D63D8BDE21D877CECAAF536BDCCFE54729A* __this, EventHandler_1_t4457009845FA4C1ABCF83D7E00C38F13807F18F0* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_t4457009845FA4C1ABCF83D7E00C38F13807F18F0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_t4457009845FA4C1ABCF83D7E00C38F13807F18F0* V_0 = NULL;
	EventHandler_1_t4457009845FA4C1ABCF83D7E00C38F13807F18F0* V_1 = NULL;
	EventHandler_1_t4457009845FA4C1ABCF83D7E00C38F13807F18F0* V_2 = NULL;
	{
		EventHandler_1_t4457009845FA4C1ABCF83D7E00C38F13807F18F0* L_0 = __this->____SpeechEndDetected_3;
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_t4457009845FA4C1ABCF83D7E00C38F13807F18F0* L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_t4457009845FA4C1ABCF83D7E00C38F13807F18F0* L_2 = V_1;
		EventHandler_1_t4457009845FA4C1ABCF83D7E00C38F13807F18F0* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m40506877934EC1AD4ADAE57F5E97AF0BC0F96116(L_2, L_3, NULL);
		V_2 = ((EventHandler_1_t4457009845FA4C1ABCF83D7E00C38F13807F18F0*)Castclass((RuntimeObject*)L_4, EventHandler_1_t4457009845FA4C1ABCF83D7E00C38F13807F18F0_il2cpp_TypeInfo_var));
		EventHandler_1_t4457009845FA4C1ABCF83D7E00C38F13807F18F0** L_5 = (&__this->____SpeechEndDetected_3);
		EventHandler_1_t4457009845FA4C1ABCF83D7E00C38F13807F18F0* L_6 = V_2;
		EventHandler_1_t4457009845FA4C1ABCF83D7E00C38F13807F18F0* L_7 = V_1;
		EventHandler_1_t4457009845FA4C1ABCF83D7E00C38F13807F18F0* L_8;
		L_8 = InterlockedCompareExchangeImpl<EventHandler_1_t4457009845FA4C1ABCF83D7E00C38F13807F18F0*>(L_5, L_6, L_7);
		V_0 = L_8;
		EventHandler_1_t4457009845FA4C1ABCF83D7E00C38F13807F18F0* L_9 = V_0;
		EventHandler_1_t4457009845FA4C1ABCF83D7E00C38F13807F18F0* L_10 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_t4457009845FA4C1ABCF83D7E00C38F13807F18F0*)L_9) == ((RuntimeObject*)(EventHandler_1_t4457009845FA4C1ABCF83D7E00C38F13807F18F0*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.Recognizer::add_SessionStarted(System.EventHandler`1<Microsoft.CognitiveServices.Speech.SessionEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Recognizer_add_SessionStarted_mB7176B7EFAA7EF6CC237B3D46C760A7C309968BD (Recognizer_tCA087D63D8BDE21D877CECAAF536BDCCFE54729A* __this, EventHandler_1_tB44EB3A3EAA7B1B7ED121BF2DF6360B62B13EA07* ___value0, const RuntimeMethod* method) 
{
	{
		EventHandler_1_tB44EB3A3EAA7B1B7ED121BF2DF6360B62B13EA07* L_0 = __this->____SessionStarted_0;
		if (L_0)
		{
			goto IL_0029;
		}
	}
	{
		InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* L_1 = __this->___recoHandle_4;
		CallbackFunctionDelegate_tC745A2B557EE8241DF1F7ABD3BFC1C8F3A2E81AA* L_2 = __this->___sessionStartedCallbackDelegate_12;
		GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC L_3 = __this->___gch_14;
		intptr_t L_4;
		L_4 = GCHandle_ToIntPtr_m4895C6E6C93FD6CEE9867C8A32C9E06A5DE5C5DC(L_3, NULL);
		intptr_t L_5;
		L_5 = Recognizer_recognizer_session_started_set_callback_mC6D2C10D6BAC95F8F7CB9C37E2015F99C54C800D(L_1, L_2, L_4, NULL);
		SpxExceptionThrower_ThrowIfFail_m80558DF4FFB9A961C7CCC15CD13AF53F5437BA21(L_5, NULL);
	}

IL_0029:
	{
		EventHandler_1_tB44EB3A3EAA7B1B7ED121BF2DF6360B62B13EA07* L_6 = ___value0;
		Recognizer_add__SessionStarted_m631F4CB4BF55A534C3A8CB8EAEC57EE7139BE4CD(__this, L_6, NULL);
		return;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.Recognizer::remove_SessionStarted(System.EventHandler`1<Microsoft.CognitiveServices.Speech.SessionEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Recognizer_remove_SessionStarted_m80E3AA294063F4AC3B94DFC9268FB59E4ACEE3AC (Recognizer_tCA087D63D8BDE21D877CECAAF536BDCCFE54729A* __this, EventHandler_1_tB44EB3A3EAA7B1B7ED121BF2DF6360B62B13EA07* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		EventHandler_1_tB44EB3A3EAA7B1B7ED121BF2DF6360B62B13EA07* L_0 = ___value0;
		Recognizer_remove__SessionStarted_m1FB4C79584D375A664EFB1916F4127D741FBA016(__this, L_0, NULL);
		EventHandler_1_tB44EB3A3EAA7B1B7ED121BF2DF6360B62B13EA07* L_1 = __this->____SessionStarted_0;
		if (L_1)
		{
			goto IL_0025;
		}
	}
	{
		InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* L_2 = __this->___recoHandle_4;
		intptr_t L_3;
		L_3 = Recognizer_recognizer_session_started_set_callback_mC6D2C10D6BAC95F8F7CB9C37E2015F99C54C800D(L_2, (CallbackFunctionDelegate_tC745A2B557EE8241DF1F7ABD3BFC1C8F3A2E81AA*)NULL, (0), NULL);
		SpxExceptionThrower_LogErrorIfFail_mAD982B53E803B83F9B30CA838B8CDB1210FE1747(L_3, NULL);
	}

IL_0025:
	{
		return;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.Recognizer::add_SessionStopped(System.EventHandler`1<Microsoft.CognitiveServices.Speech.SessionEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Recognizer_add_SessionStopped_mE532CD715B13EE7A206285576688D2F091B716AA (Recognizer_tCA087D63D8BDE21D877CECAAF536BDCCFE54729A* __this, EventHandler_1_tB44EB3A3EAA7B1B7ED121BF2DF6360B62B13EA07* ___value0, const RuntimeMethod* method) 
{
	{
		EventHandler_1_tB44EB3A3EAA7B1B7ED121BF2DF6360B62B13EA07* L_0 = __this->____SessionStopped_1;
		if (L_0)
		{
			goto IL_0029;
		}
	}
	{
		InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* L_1 = __this->___recoHandle_4;
		CallbackFunctionDelegate_tC745A2B557EE8241DF1F7ABD3BFC1C8F3A2E81AA* L_2 = __this->___sessionStoppedCallbackDelegate_13;
		GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC L_3 = __this->___gch_14;
		intptr_t L_4;
		L_4 = GCHandle_ToIntPtr_m4895C6E6C93FD6CEE9867C8A32C9E06A5DE5C5DC(L_3, NULL);
		intptr_t L_5;
		L_5 = Recognizer_recognizer_session_stopped_set_callback_mBED30C2B5B024A07E3E927F9913FF1910123184E(L_1, L_2, L_4, NULL);
		SpxExceptionThrower_ThrowIfFail_m80558DF4FFB9A961C7CCC15CD13AF53F5437BA21(L_5, NULL);
	}

IL_0029:
	{
		EventHandler_1_tB44EB3A3EAA7B1B7ED121BF2DF6360B62B13EA07* L_6 = ___value0;
		Recognizer_add__SessionStopped_mC531DA001A86C34512638EC7AD42682AD216D32E(__this, L_6, NULL);
		return;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.Recognizer::remove_SessionStopped(System.EventHandler`1<Microsoft.CognitiveServices.Speech.SessionEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Recognizer_remove_SessionStopped_m07F4261BD9721CA3EBEB2322AF5887A3089D04B7 (Recognizer_tCA087D63D8BDE21D877CECAAF536BDCCFE54729A* __this, EventHandler_1_tB44EB3A3EAA7B1B7ED121BF2DF6360B62B13EA07* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		EventHandler_1_tB44EB3A3EAA7B1B7ED121BF2DF6360B62B13EA07* L_0 = ___value0;
		Recognizer_remove__SessionStopped_m75B4EAF7FE72A73C707DD5AD1CD02D2A82F48AAA(__this, L_0, NULL);
		EventHandler_1_tB44EB3A3EAA7B1B7ED121BF2DF6360B62B13EA07* L_1 = __this->____SessionStopped_1;
		if (L_1)
		{
			goto IL_0025;
		}
	}
	{
		InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* L_2 = __this->___recoHandle_4;
		intptr_t L_3;
		L_3 = Recognizer_recognizer_session_stopped_set_callback_mBED30C2B5B024A07E3E927F9913FF1910123184E(L_2, (CallbackFunctionDelegate_tC745A2B557EE8241DF1F7ABD3BFC1C8F3A2E81AA*)NULL, (0), NULL);
		SpxExceptionThrower_LogErrorIfFail_mAD982B53E803B83F9B30CA838B8CDB1210FE1747(L_3, NULL);
	}

IL_0025:
	{
		return;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.Recognizer::add_SpeechStartDetected(System.EventHandler`1<Microsoft.CognitiveServices.Speech.RecognitionEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Recognizer_add_SpeechStartDetected_mA70F8631EF165EC1924C86E7DE622BAEC1A84EC6 (Recognizer_tCA087D63D8BDE21D877CECAAF536BDCCFE54729A* __this, EventHandler_1_t4457009845FA4C1ABCF83D7E00C38F13807F18F0* ___value0, const RuntimeMethod* method) 
{
	{
		EventHandler_1_t4457009845FA4C1ABCF83D7E00C38F13807F18F0* L_0 = __this->____SpeechStartDetected_2;
		if (L_0)
		{
			goto IL_0029;
		}
	}
	{
		InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* L_1 = __this->___recoHandle_4;
		CallbackFunctionDelegate_tC745A2B557EE8241DF1F7ABD3BFC1C8F3A2E81AA* L_2 = __this->___speechStartDetectedCallbackDelegate_10;
		GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC L_3 = __this->___gch_14;
		intptr_t L_4;
		L_4 = GCHandle_ToIntPtr_m4895C6E6C93FD6CEE9867C8A32C9E06A5DE5C5DC(L_3, NULL);
		intptr_t L_5;
		L_5 = Recognizer_recognizer_speech_start_detected_set_callback_mBA32FFE729A32C15079566B581EEF67EB701C41B(L_1, L_2, L_4, NULL);
		SpxExceptionThrower_ThrowIfFail_m80558DF4FFB9A961C7CCC15CD13AF53F5437BA21(L_5, NULL);
	}

IL_0029:
	{
		EventHandler_1_t4457009845FA4C1ABCF83D7E00C38F13807F18F0* L_6 = ___value0;
		Recognizer_add__SpeechStartDetected_mC7B7A06E0F81282B1A983A1B99887C9E558BB750(__this, L_6, NULL);
		return;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.Recognizer::remove_SpeechStartDetected(System.EventHandler`1<Microsoft.CognitiveServices.Speech.RecognitionEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Recognizer_remove_SpeechStartDetected_m36A954D8D9CEA2A39057AE2D3E23FB0BA262B8C1 (Recognizer_tCA087D63D8BDE21D877CECAAF536BDCCFE54729A* __this, EventHandler_1_t4457009845FA4C1ABCF83D7E00C38F13807F18F0* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		EventHandler_1_t4457009845FA4C1ABCF83D7E00C38F13807F18F0* L_0 = ___value0;
		Recognizer_remove__SpeechStartDetected_m3DB6ED1521289E1BCB5BF3032F68C2452A2F8830(__this, L_0, NULL);
		EventHandler_1_t4457009845FA4C1ABCF83D7E00C38F13807F18F0* L_1 = __this->____SpeechStartDetected_2;
		if (L_1)
		{
			goto IL_0025;
		}
	}
	{
		InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* L_2 = __this->___recoHandle_4;
		intptr_t L_3;
		L_3 = Recognizer_recognizer_speech_start_detected_set_callback_mBA32FFE729A32C15079566B581EEF67EB701C41B(L_2, (CallbackFunctionDelegate_tC745A2B557EE8241DF1F7ABD3BFC1C8F3A2E81AA*)NULL, (0), NULL);
		SpxExceptionThrower_LogErrorIfFail_mAD982B53E803B83F9B30CA838B8CDB1210FE1747(L_3, NULL);
	}

IL_0025:
	{
		return;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.Recognizer::add_SpeechEndDetected(System.EventHandler`1<Microsoft.CognitiveServices.Speech.RecognitionEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Recognizer_add_SpeechEndDetected_mD340F4717F391593D8DB5A538E983F114F9079F7 (Recognizer_tCA087D63D8BDE21D877CECAAF536BDCCFE54729A* __this, EventHandler_1_t4457009845FA4C1ABCF83D7E00C38F13807F18F0* ___value0, const RuntimeMethod* method) 
{
	{
		EventHandler_1_t4457009845FA4C1ABCF83D7E00C38F13807F18F0* L_0 = __this->____SpeechEndDetected_3;
		if (L_0)
		{
			goto IL_0029;
		}
	}
	{
		InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* L_1 = __this->___recoHandle_4;
		CallbackFunctionDelegate_tC745A2B557EE8241DF1F7ABD3BFC1C8F3A2E81AA* L_2 = __this->___speechEndDetectedCallbackDelegate_11;
		GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC L_3 = __this->___gch_14;
		intptr_t L_4;
		L_4 = GCHandle_ToIntPtr_m4895C6E6C93FD6CEE9867C8A32C9E06A5DE5C5DC(L_3, NULL);
		intptr_t L_5;
		L_5 = Recognizer_recognizer_speech_end_detected_set_callback_mC09E537CCD4C6224A0301E8C90B827A599F37B9F(L_1, L_2, L_4, NULL);
		SpxExceptionThrower_ThrowIfFail_m80558DF4FFB9A961C7CCC15CD13AF53F5437BA21(L_5, NULL);
	}

IL_0029:
	{
		EventHandler_1_t4457009845FA4C1ABCF83D7E00C38F13807F18F0* L_6 = ___value0;
		Recognizer_add__SpeechEndDetected_m22831739B45057F6783CF4C784E8829A1A7D27A3(__this, L_6, NULL);
		return;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.Recognizer::remove_SpeechEndDetected(System.EventHandler`1<Microsoft.CognitiveServices.Speech.RecognitionEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Recognizer_remove_SpeechEndDetected_mAC602E23E1C084A837A4068BB933C82A6329EBA4 (Recognizer_tCA087D63D8BDE21D877CECAAF536BDCCFE54729A* __this, EventHandler_1_t4457009845FA4C1ABCF83D7E00C38F13807F18F0* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		EventHandler_1_t4457009845FA4C1ABCF83D7E00C38F13807F18F0* L_0 = ___value0;
		Recognizer_remove__SpeechEndDetected_m335107F7B597E13480CF0F21EB83795CFFC9B4D8(__this, L_0, NULL);
		EventHandler_1_t4457009845FA4C1ABCF83D7E00C38F13807F18F0* L_1 = __this->____SpeechEndDetected_3;
		if (L_1)
		{
			goto IL_0025;
		}
	}
	{
		InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* L_2 = __this->___recoHandle_4;
		intptr_t L_3;
		L_3 = Recognizer_recognizer_speech_end_detected_set_callback_mC09E537CCD4C6224A0301E8C90B827A599F37B9F(L_2, (CallbackFunctionDelegate_tC745A2B557EE8241DF1F7ABD3BFC1C8F3A2E81AA*)NULL, (0), NULL);
		SpxExceptionThrower_LogErrorIfFail_mAD982B53E803B83F9B30CA838B8CDB1210FE1747(L_3, NULL);
	}

IL_0025:
	{
		return;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.Recognizer::.ctor(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Recognizer__ctor_mB448C82F7106784983B2332E0C35FAC613A10A05 (Recognizer_tCA087D63D8BDE21D877CECAAF536BDCCFE54729A* __this, InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* ___recoPtr0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CallbackFunctionDelegate_tC745A2B557EE8241DF1F7ABD3BFC1C8F3A2E81AA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Recognizer_FireEvent_SetSessionStarted_m52E09A4B81972BF98DDFF6F1901AF63188C91629_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Recognizer_FireEvent_SetSessionStopped_m1925D97F4E29071799739DAE667160A804385C25_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Recognizer_FireEvent_SpeechEndDetected_m855530988936AC915A4277BF08A8EF863933990E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Recognizer_FireEvent_SpeechStartDetected_mBBD9DA4BDE0F8E8E8545C4BACEC0068B86F16DAF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1532A53696EE625AE3777874840B492D52037C8E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral31514D8FFE6EBD8A160985B5C25BE0F2A7BEF863);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBEE1F32E38A053DAC1C8FBB1F39277CA0C67EB06);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->___asyncStartContinuousHandle_6 = (0);
		__this->___asyncStopContinuousHandle_7 = (0);
		__this->___asyncStartKeywordHandle_8 = (0);
		__this->___asyncStopKeywordHandle_9 = (0);
		RuntimeObject* L_0 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_0, NULL);
		__this->___recognizerLock_17 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___recognizerLock_17), (void*)L_0);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* L_1 = ___recoPtr0;
		SpxExceptionThrower_ThrowIfNull_m5C9E05F3DEDEE273B1049A6052813A5870C4F223(L_1, (String_t*)NULL, NULL);
		InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* L_2 = ___recoPtr0;
		__this->___recoHandle_4 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___recoHandle_4), (void*)L_2);
		InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* L_3 = ___recoPtr0;
		NullCheck(L_3);
		String_t* L_4;
		L_4 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_3);
		__this->___pointerHandle_5 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___pointerHandle_5), (void*)L_4);
		String_t* L_5 = __this->___pointerHandle_5;
		String_t* L_6;
		L_6 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteralBEE1F32E38A053DAC1C8FBB1F39277CA0C67EB06, L_5, NULL);
		Diagnostics_SPX_TRACE_VERBOSE_m9618B77BD67A243B856AE5D2E73CB87D57D1DA6E(L_6, ((int32_t)120), _stringLiteral31514D8FFE6EBD8A160985B5C25BE0F2A7BEF863, _stringLiteral1532A53696EE625AE3777874840B492D52037C8E, NULL);
		GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC L_7;
		L_7 = GCHandle_Alloc_m1FC35418B654D3F48B4F70D525EBD6A208A59075(__this, 0, NULL);
		__this->___gch_14 = L_7;
		CallbackFunctionDelegate_tC745A2B557EE8241DF1F7ABD3BFC1C8F3A2E81AA* L_8 = (CallbackFunctionDelegate_tC745A2B557EE8241DF1F7ABD3BFC1C8F3A2E81AA*)il2cpp_codegen_object_new(CallbackFunctionDelegate_tC745A2B557EE8241DF1F7ABD3BFC1C8F3A2E81AA_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		CallbackFunctionDelegate__ctor_m242A4949B6999B19FDCBCCB89CBBD60A2D8AB7A6(L_8, NULL, (intptr_t)((void*)Recognizer_FireEvent_SpeechStartDetected_mBBD9DA4BDE0F8E8E8545C4BACEC0068B86F16DAF_RuntimeMethod_var), NULL);
		__this->___speechStartDetectedCallbackDelegate_10 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___speechStartDetectedCallbackDelegate_10), (void*)L_8);
		CallbackFunctionDelegate_tC745A2B557EE8241DF1F7ABD3BFC1C8F3A2E81AA* L_9 = (CallbackFunctionDelegate_tC745A2B557EE8241DF1F7ABD3BFC1C8F3A2E81AA*)il2cpp_codegen_object_new(CallbackFunctionDelegate_tC745A2B557EE8241DF1F7ABD3BFC1C8F3A2E81AA_il2cpp_TypeInfo_var);
		NullCheck(L_9);
		CallbackFunctionDelegate__ctor_m242A4949B6999B19FDCBCCB89CBBD60A2D8AB7A6(L_9, NULL, (intptr_t)((void*)Recognizer_FireEvent_SpeechEndDetected_m855530988936AC915A4277BF08A8EF863933990E_RuntimeMethod_var), NULL);
		__this->___speechEndDetectedCallbackDelegate_11 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___speechEndDetectedCallbackDelegate_11), (void*)L_9);
		CallbackFunctionDelegate_tC745A2B557EE8241DF1F7ABD3BFC1C8F3A2E81AA* L_10 = (CallbackFunctionDelegate_tC745A2B557EE8241DF1F7ABD3BFC1C8F3A2E81AA*)il2cpp_codegen_object_new(CallbackFunctionDelegate_tC745A2B557EE8241DF1F7ABD3BFC1C8F3A2E81AA_il2cpp_TypeInfo_var);
		NullCheck(L_10);
		CallbackFunctionDelegate__ctor_m242A4949B6999B19FDCBCCB89CBBD60A2D8AB7A6(L_10, NULL, (intptr_t)((void*)Recognizer_FireEvent_SetSessionStarted_m52E09A4B81972BF98DDFF6F1901AF63188C91629_RuntimeMethod_var), NULL);
		__this->___sessionStartedCallbackDelegate_12 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___sessionStartedCallbackDelegate_12), (void*)L_10);
		CallbackFunctionDelegate_tC745A2B557EE8241DF1F7ABD3BFC1C8F3A2E81AA* L_11 = (CallbackFunctionDelegate_tC745A2B557EE8241DF1F7ABD3BFC1C8F3A2E81AA*)il2cpp_codegen_object_new(CallbackFunctionDelegate_tC745A2B557EE8241DF1F7ABD3BFC1C8F3A2E81AA_il2cpp_TypeInfo_var);
		NullCheck(L_11);
		CallbackFunctionDelegate__ctor_m242A4949B6999B19FDCBCCB89CBBD60A2D8AB7A6(L_11, NULL, (intptr_t)((void*)Recognizer_FireEvent_SetSessionStopped_m1925D97F4E29071799739DAE667160A804385C25_RuntimeMethod_var), NULL);
		__this->___sessionStoppedCallbackDelegate_13 = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___sessionStoppedCallbackDelegate_13), (void*)L_11);
		return;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.Recognizer::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Recognizer_Finalize_m65C041518559BC7332B58EC3BD23603D6FAEA7F5 (Recognizer_tCA087D63D8BDE21D877CECAAF536BDCCFE54729A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1532A53696EE625AE3777874840B492D52037C8E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral990E9465081709697449AFB110415A8629DE2E13);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF00BD984FE2440EACF0054D39EEEAE818E9EBB32);
		s_Il2CppMethodInitialized = true;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0036:
			{// begin finally (depth: 1)
				Object_Finalize_mC98C96301CCABFE00F1A7EF8E15DF507CACD42B2(__this, NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			String_t* L_0 = __this->___pointerHandle_5;
			String_t* L_1;
			L_1 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteral990E9465081709697449AFB110415A8629DE2E13, L_0, NULL);
			Diagnostics_SPX_TRACE_VERBOSE_m9618B77BD67A243B856AE5D2E73CB87D57D1DA6E(L_1, ((int32_t)131), _stringLiteralF00BD984FE2440EACF0054D39EEEAE818E9EBB32, _stringLiteral1532A53696EE625AE3777874840B492D52037C8E, NULL);
			il2cpp_codegen_memory_barrier();
			__this->___isDisposing_16 = (bool)1;
			VirtualActionInvoker1< bool >::Invoke(5 /* System.Void Microsoft.CognitiveServices.Speech.Recognizer::Dispose(System.Boolean) */, __this, (bool)0);
			goto IL_003d;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_003d:
	{
		return;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.Recognizer::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Recognizer_Dispose_m53C30ACE1A7745127F79CB19F92894F67407E7CF (Recognizer_tCA087D63D8BDE21D877CECAAF536BDCCFE54729A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0039:
			{// begin finally (depth: 1)
				VirtualActionInvoker1< bool >::Invoke(5 /* System.Void Microsoft.CognitiveServices.Speech.Recognizer::Dispose(System.Boolean) */, __this, (bool)1);
				il2cpp_codegen_runtime_class_init_inline(GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_il2cpp_TypeInfo_var);
				GC_SuppressFinalize_m3352E2F2119EB46913B51B7AAE2F217C63C35F2A(__this, NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				il2cpp_codegen_memory_barrier();
				__this->___isDisposing_16 = (bool)1;
				RuntimeObject* L_0 = __this->___recognizerLock_17;
				V_0 = L_0;
				V_1 = (bool)0;
			}
			{
				auto __finallyBlock = il2cpp::utils::Finally([&]
				{

FINALLY_002f_1:
					{// begin finally (depth: 2)
						{
							bool L_1 = V_1;
							if (!L_1)
							{
								goto IL_0038_1;
							}
						}
						{
							RuntimeObject* L_2 = V_0;
							Monitor_Exit_m25A154960F91391E10E4CDA245ECDF4BA94D56A9(L_2, NULL);
						}

IL_0038_1:
						{
							return;
						}
					}// end finally (depth: 2)
				});
				try
				{// begin try (depth: 2)
					{
						RuntimeObject* L_3 = V_0;
						Monitor_Enter_m00506757392936AA62DBE2C5FFBEE69EE920C4D4(L_3, (&V_1), NULL);
						int32_t L_4 = __this->___activeAsyncRecognitionCounter_18;
						if (!L_4)
						{
							goto IL_002d_2;
						}
					}
					{
						InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_5 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
						NullCheck(L_5);
						InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_5, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral263D04BA595C06ADC50CF667EA6F2290337CDAC0)), NULL);
						IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Recognizer_Dispose_m53C30ACE1A7745127F79CB19F92894F67407E7CF_RuntimeMethod_var)));
					}

IL_002d_2:
					{
						goto IL_0047;
					}
				}// end try (depth: 2)
				catch(Il2CppExceptionWrapper& e)
				{
					__finallyBlock.StoreException(e.ex);
				}
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0047:
	{
		return;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.Recognizer::Dispose(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Recognizer_Dispose_m41B4467C6470F75AD4C81138860A38D98B55E31B (Recognizer_tCA087D63D8BDE21D877CECAAF536BDCCFE54729A* __this, bool ___disposing0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0E113F97D77FF0E45934C610A144C2819DC64A04);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1532A53696EE625AE3777874840B492D52037C8E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2DAEEF072FFF48537E5ED531F51D87E1CF74D643);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = ___disposing0;
		bool L_1 = L_0;
		RuntimeObject* L_2 = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &L_1);
		String_t* L_3 = __this->___pointerHandle_5;
		String_t* L_4;
		L_4 = String_Format_m9499958F4B0BB6089C75760AB647AB3CA4D55806(_stringLiteral2DAEEF072FFF48537E5ED531F51D87E1CF74D643, L_2, L_3, NULL);
		Diagnostics_SPX_TRACE_VERBOSE_m9618B77BD67A243B856AE5D2E73CB87D57D1DA6E(L_4, ((int32_t)169), _stringLiteral0E113F97D77FF0E45934C610A144C2819DC64A04, _stringLiteral1532A53696EE625AE3777874840B492D52037C8E, NULL);
		bool L_5 = __this->___disposed_15;
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
		__this->___speechStartDetectedCallbackDelegate_10 = (CallbackFunctionDelegate_tC745A2B557EE8241DF1F7ABD3BFC1C8F3A2E81AA*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___speechStartDetectedCallbackDelegate_10), (void*)(CallbackFunctionDelegate_tC745A2B557EE8241DF1F7ABD3BFC1C8F3A2E81AA*)NULL);
		__this->___speechEndDetectedCallbackDelegate_11 = (CallbackFunctionDelegate_tC745A2B557EE8241DF1F7ABD3BFC1C8F3A2E81AA*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___speechEndDetectedCallbackDelegate_11), (void*)(CallbackFunctionDelegate_tC745A2B557EE8241DF1F7ABD3BFC1C8F3A2E81AA*)NULL);
		__this->___sessionStartedCallbackDelegate_12 = (CallbackFunctionDelegate_tC745A2B557EE8241DF1F7ABD3BFC1C8F3A2E81AA*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___sessionStartedCallbackDelegate_12), (void*)(CallbackFunctionDelegate_tC745A2B557EE8241DF1F7ABD3BFC1C8F3A2E81AA*)NULL);
		__this->___sessionStoppedCallbackDelegate_13 = (CallbackFunctionDelegate_tC745A2B557EE8241DF1F7ABD3BFC1C8F3A2E81AA*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___sessionStoppedCallbackDelegate_13), (void*)(CallbackFunctionDelegate_tC745A2B557EE8241DF1F7ABD3BFC1C8F3A2E81AA*)NULL);
		GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC* L_6 = (&__this->___gch_14);
		bool L_7;
		L_7 = GCHandle_get_IsAllocated_m241908103D8D867E11CCAB73C918729825E86843(L_6, NULL);
		if (!L_7)
		{
			goto IL_0069;
		}
	}
	{
		GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC* L_8 = (&__this->___gch_14);
		GCHandle_Free_m1320A260E487EB1EA6D95F9E54BFFCB5A4EF83A3(L_8, NULL);
	}

IL_0069:
	{
		il2cpp_codegen_memory_barrier();
		__this->___disposed_15 = (bool)1;
		return;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.Recognizer::FireEvent_SetSessionStarted(System.IntPtr,System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Recognizer_FireEvent_SetSessionStarted_m52E09A4B81972BF98DDFF6F1901AF63188C91629 (intptr_t ___hreco0, intptr_t ___hevent1, intptr_t ___pvContext2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InteropSafeHandle_GetObjectFromWeakHandle_TisRecognizer_tCA087D63D8BDE21D877CECAAF536BDCCFE54729A_mBD3D6EABCBDAD29C419965D792E526B664EB6DF3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SessionEventArgs_t06C8DB22E01F18F0B45A4E719BECB043B4D961BC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Recognizer_tCA087D63D8BDE21D877CECAAF536BDCCFE54729A* V_0 = NULL;
	SessionEventArgs_t06C8DB22E01F18F0B45A4E719BECB043B4D961BC* V_1 = NULL;
	Exception_t* V_2 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	EventHandler_1_tB44EB3A3EAA7B1B7ED121BF2DF6360B62B13EA07* G_B5_0 = NULL;
	EventHandler_1_tB44EB3A3EAA7B1B7ED121BF2DF6360B62B13EA07* G_B4_0 = NULL;
	try
	{// begin try (depth: 1)
		{
			intptr_t L_0 = ___pvContext2;
			Recognizer_tCA087D63D8BDE21D877CECAAF536BDCCFE54729A* L_1;
			L_1 = InteropSafeHandle_GetObjectFromWeakHandle_TisRecognizer_tCA087D63D8BDE21D877CECAAF536BDCCFE54729A_mBD3D6EABCBDAD29C419965D792E526B664EB6DF3(L_0, InteropSafeHandle_GetObjectFromWeakHandle_TisRecognizer_tCA087D63D8BDE21D877CECAAF536BDCCFE54729A_mBD3D6EABCBDAD29C419965D792E526B664EB6DF3_RuntimeMethod_var);
			V_0 = L_1;
			Recognizer_tCA087D63D8BDE21D877CECAAF536BDCCFE54729A* L_2 = V_0;
			if (!L_2)
			{
				goto IL_0014_1;
			}
		}
		{
			Recognizer_tCA087D63D8BDE21D877CECAAF536BDCCFE54729A* L_3 = V_0;
			NullCheck(L_3);
			bool L_4 = L_3->___isDisposing_16;
			il2cpp_codegen_memory_barrier();
			if (!L_4)
			{
				goto IL_0016_1;
			}
		}

IL_0014_1:
		{
			goto IL_0040;
		}

IL_0016_1:
		{
			intptr_t L_5 = ___hevent1;
			SessionEventArgs_t06C8DB22E01F18F0B45A4E719BECB043B4D961BC* L_6 = (SessionEventArgs_t06C8DB22E01F18F0B45A4E719BECB043B4D961BC*)il2cpp_codegen_object_new(SessionEventArgs_t06C8DB22E01F18F0B45A4E719BECB043B4D961BC_il2cpp_TypeInfo_var);
			NullCheck(L_6);
			SessionEventArgs__ctor_m240C60ECA28570ED5A8FF624C62BAE2EBA25A5AA(L_6, L_5, NULL);
			V_1 = L_6;
			Recognizer_tCA087D63D8BDE21D877CECAAF536BDCCFE54729A* L_7 = V_0;
			NullCheck(L_7);
			EventHandler_1_tB44EB3A3EAA7B1B7ED121BF2DF6360B62B13EA07* L_8 = L_7->____SessionStarted_0;
			EventHandler_1_tB44EB3A3EAA7B1B7ED121BF2DF6360B62B13EA07* L_9 = L_8;
			G_B4_0 = L_9;
			if (L_9)
			{
				G_B5_0 = L_9;
				goto IL_0029_1;
			}
		}
		{
			goto IL_0030_1;
		}

IL_0029_1:
		{
			Recognizer_tCA087D63D8BDE21D877CECAAF536BDCCFE54729A* L_10 = V_0;
			SessionEventArgs_t06C8DB22E01F18F0B45A4E719BECB043B4D961BC* L_11 = V_1;
			NullCheck(G_B5_0);
			EventHandler_1_Invoke_m50F62D5F079DA3B408B05AEAA4CA07254840B5F5_inline(G_B5_0, L_10, L_11, NULL);
		}

IL_0030_1:
		{
			goto IL_0040;
		}
	}// end try (depth: 1)
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
	{// begin catch(System.Exception)
		V_2 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		Exception_t* L_12 = V_2;
		NullCheck(L_12);
		String_t* L_13;
		L_13 = VirtualFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Exception::get_Message() */, L_12);
		SpxExceptionThrower_LogError_m37A2018CF9E9DCD40E8EE95F37097192A2DC184A(L_13, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0040;
	}// end catch (depth: 1)

IL_0040:
	{
		return;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.Recognizer::FireEvent_SetSessionStopped(System.IntPtr,System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Recognizer_FireEvent_SetSessionStopped_m1925D97F4E29071799739DAE667160A804385C25 (intptr_t ___hreco0, intptr_t ___hevent1, intptr_t ___pvContext2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InteropSafeHandle_GetObjectFromWeakHandle_TisRecognizer_tCA087D63D8BDE21D877CECAAF536BDCCFE54729A_mBD3D6EABCBDAD29C419965D792E526B664EB6DF3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SessionEventArgs_t06C8DB22E01F18F0B45A4E719BECB043B4D961BC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Recognizer_tCA087D63D8BDE21D877CECAAF536BDCCFE54729A* V_0 = NULL;
	SessionEventArgs_t06C8DB22E01F18F0B45A4E719BECB043B4D961BC* V_1 = NULL;
	Exception_t* V_2 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	EventHandler_1_tB44EB3A3EAA7B1B7ED121BF2DF6360B62B13EA07* G_B5_0 = NULL;
	EventHandler_1_tB44EB3A3EAA7B1B7ED121BF2DF6360B62B13EA07* G_B4_0 = NULL;
	try
	{// begin try (depth: 1)
		{
			intptr_t L_0 = ___pvContext2;
			Recognizer_tCA087D63D8BDE21D877CECAAF536BDCCFE54729A* L_1;
			L_1 = InteropSafeHandle_GetObjectFromWeakHandle_TisRecognizer_tCA087D63D8BDE21D877CECAAF536BDCCFE54729A_mBD3D6EABCBDAD29C419965D792E526B664EB6DF3(L_0, InteropSafeHandle_GetObjectFromWeakHandle_TisRecognizer_tCA087D63D8BDE21D877CECAAF536BDCCFE54729A_mBD3D6EABCBDAD29C419965D792E526B664EB6DF3_RuntimeMethod_var);
			V_0 = L_1;
			Recognizer_tCA087D63D8BDE21D877CECAAF536BDCCFE54729A* L_2 = V_0;
			if (!L_2)
			{
				goto IL_0014_1;
			}
		}
		{
			Recognizer_tCA087D63D8BDE21D877CECAAF536BDCCFE54729A* L_3 = V_0;
			NullCheck(L_3);
			bool L_4 = L_3->___isDisposing_16;
			il2cpp_codegen_memory_barrier();
			if (!L_4)
			{
				goto IL_0016_1;
			}
		}

IL_0014_1:
		{
			goto IL_0040;
		}

IL_0016_1:
		{
			intptr_t L_5 = ___hevent1;
			SessionEventArgs_t06C8DB22E01F18F0B45A4E719BECB043B4D961BC* L_6 = (SessionEventArgs_t06C8DB22E01F18F0B45A4E719BECB043B4D961BC*)il2cpp_codegen_object_new(SessionEventArgs_t06C8DB22E01F18F0B45A4E719BECB043B4D961BC_il2cpp_TypeInfo_var);
			NullCheck(L_6);
			SessionEventArgs__ctor_m240C60ECA28570ED5A8FF624C62BAE2EBA25A5AA(L_6, L_5, NULL);
			V_1 = L_6;
			Recognizer_tCA087D63D8BDE21D877CECAAF536BDCCFE54729A* L_7 = V_0;
			NullCheck(L_7);
			EventHandler_1_tB44EB3A3EAA7B1B7ED121BF2DF6360B62B13EA07* L_8 = L_7->____SessionStopped_1;
			EventHandler_1_tB44EB3A3EAA7B1B7ED121BF2DF6360B62B13EA07* L_9 = L_8;
			G_B4_0 = L_9;
			if (L_9)
			{
				G_B5_0 = L_9;
				goto IL_0029_1;
			}
		}
		{
			goto IL_0030_1;
		}

IL_0029_1:
		{
			Recognizer_tCA087D63D8BDE21D877CECAAF536BDCCFE54729A* L_10 = V_0;
			SessionEventArgs_t06C8DB22E01F18F0B45A4E719BECB043B4D961BC* L_11 = V_1;
			NullCheck(G_B5_0);
			EventHandler_1_Invoke_m50F62D5F079DA3B408B05AEAA4CA07254840B5F5_inline(G_B5_0, L_10, L_11, NULL);
		}

IL_0030_1:
		{
			goto IL_0040;
		}
	}// end try (depth: 1)
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
	{// begin catch(System.Exception)
		V_2 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		Exception_t* L_12 = V_2;
		NullCheck(L_12);
		String_t* L_13;
		L_13 = VirtualFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Exception::get_Message() */, L_12);
		SpxExceptionThrower_LogError_m37A2018CF9E9DCD40E8EE95F37097192A2DC184A(L_13, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0040;
	}// end catch (depth: 1)

IL_0040:
	{
		return;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.Recognizer::FireEvent_SpeechStartDetected(System.IntPtr,System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Recognizer_FireEvent_SpeechStartDetected_mBBD9DA4BDE0F8E8E8545C4BACEC0068B86F16DAF (intptr_t ___hreco0, intptr_t ___hevent1, intptr_t ___pvContext2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InteropSafeHandle_GetObjectFromWeakHandle_TisRecognizer_tCA087D63D8BDE21D877CECAAF536BDCCFE54729A_mBD3D6EABCBDAD29C419965D792E526B664EB6DF3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RecognitionEventArgs_tF3045EA40FBF0ACD26A0B6F7D4144036AA7D05F9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Recognizer_tCA087D63D8BDE21D877CECAAF536BDCCFE54729A* V_0 = NULL;
	RecognitionEventArgs_tF3045EA40FBF0ACD26A0B6F7D4144036AA7D05F9* V_1 = NULL;
	Exception_t* V_2 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	EventHandler_1_t4457009845FA4C1ABCF83D7E00C38F13807F18F0* G_B5_0 = NULL;
	EventHandler_1_t4457009845FA4C1ABCF83D7E00C38F13807F18F0* G_B4_0 = NULL;
	try
	{// begin try (depth: 1)
		{
			intptr_t L_0 = ___pvContext2;
			Recognizer_tCA087D63D8BDE21D877CECAAF536BDCCFE54729A* L_1;
			L_1 = InteropSafeHandle_GetObjectFromWeakHandle_TisRecognizer_tCA087D63D8BDE21D877CECAAF536BDCCFE54729A_mBD3D6EABCBDAD29C419965D792E526B664EB6DF3(L_0, InteropSafeHandle_GetObjectFromWeakHandle_TisRecognizer_tCA087D63D8BDE21D877CECAAF536BDCCFE54729A_mBD3D6EABCBDAD29C419965D792E526B664EB6DF3_RuntimeMethod_var);
			V_0 = L_1;
			Recognizer_tCA087D63D8BDE21D877CECAAF536BDCCFE54729A* L_2 = V_0;
			if (!L_2)
			{
				goto IL_0014_1;
			}
		}
		{
			Recognizer_tCA087D63D8BDE21D877CECAAF536BDCCFE54729A* L_3 = V_0;
			NullCheck(L_3);
			bool L_4 = L_3->___isDisposing_16;
			il2cpp_codegen_memory_barrier();
			if (!L_4)
			{
				goto IL_0016_1;
			}
		}

IL_0014_1:
		{
			goto IL_0040;
		}

IL_0016_1:
		{
			intptr_t L_5 = ___hevent1;
			RecognitionEventArgs_tF3045EA40FBF0ACD26A0B6F7D4144036AA7D05F9* L_6 = (RecognitionEventArgs_tF3045EA40FBF0ACD26A0B6F7D4144036AA7D05F9*)il2cpp_codegen_object_new(RecognitionEventArgs_tF3045EA40FBF0ACD26A0B6F7D4144036AA7D05F9_il2cpp_TypeInfo_var);
			NullCheck(L_6);
			RecognitionEventArgs__ctor_m16B7E8B089A37C27BC87BEA572A1E4B2EA9E7B34(L_6, L_5, NULL);
			V_1 = L_6;
			Recognizer_tCA087D63D8BDE21D877CECAAF536BDCCFE54729A* L_7 = V_0;
			NullCheck(L_7);
			EventHandler_1_t4457009845FA4C1ABCF83D7E00C38F13807F18F0* L_8 = L_7->____SpeechStartDetected_2;
			EventHandler_1_t4457009845FA4C1ABCF83D7E00C38F13807F18F0* L_9 = L_8;
			G_B4_0 = L_9;
			if (L_9)
			{
				G_B5_0 = L_9;
				goto IL_0029_1;
			}
		}
		{
			goto IL_0030_1;
		}

IL_0029_1:
		{
			Recognizer_tCA087D63D8BDE21D877CECAAF536BDCCFE54729A* L_10 = V_0;
			RecognitionEventArgs_tF3045EA40FBF0ACD26A0B6F7D4144036AA7D05F9* L_11 = V_1;
			NullCheck(G_B5_0);
			EventHandler_1_Invoke_mE007A9C567558111C4423757C653BB921489BC4B_inline(G_B5_0, L_10, L_11, NULL);
		}

IL_0030_1:
		{
			goto IL_0040;
		}
	}// end try (depth: 1)
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
	{// begin catch(System.Exception)
		V_2 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		Exception_t* L_12 = V_2;
		NullCheck(L_12);
		String_t* L_13;
		L_13 = VirtualFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Exception::get_Message() */, L_12);
		SpxExceptionThrower_LogError_m37A2018CF9E9DCD40E8EE95F37097192A2DC184A(L_13, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0040;
	}// end catch (depth: 1)

IL_0040:
	{
		return;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.Recognizer::FireEvent_SpeechEndDetected(System.IntPtr,System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Recognizer_FireEvent_SpeechEndDetected_m855530988936AC915A4277BF08A8EF863933990E (intptr_t ___hreco0, intptr_t ___hevent1, intptr_t ___pvContext2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InteropSafeHandle_GetObjectFromWeakHandle_TisRecognizer_tCA087D63D8BDE21D877CECAAF536BDCCFE54729A_mBD3D6EABCBDAD29C419965D792E526B664EB6DF3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RecognitionEventArgs_tF3045EA40FBF0ACD26A0B6F7D4144036AA7D05F9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Recognizer_tCA087D63D8BDE21D877CECAAF536BDCCFE54729A* V_0 = NULL;
	RecognitionEventArgs_tF3045EA40FBF0ACD26A0B6F7D4144036AA7D05F9* V_1 = NULL;
	Exception_t* V_2 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	EventHandler_1_t4457009845FA4C1ABCF83D7E00C38F13807F18F0* G_B5_0 = NULL;
	EventHandler_1_t4457009845FA4C1ABCF83D7E00C38F13807F18F0* G_B4_0 = NULL;
	try
	{// begin try (depth: 1)
		{
			intptr_t L_0 = ___pvContext2;
			Recognizer_tCA087D63D8BDE21D877CECAAF536BDCCFE54729A* L_1;
			L_1 = InteropSafeHandle_GetObjectFromWeakHandle_TisRecognizer_tCA087D63D8BDE21D877CECAAF536BDCCFE54729A_mBD3D6EABCBDAD29C419965D792E526B664EB6DF3(L_0, InteropSafeHandle_GetObjectFromWeakHandle_TisRecognizer_tCA087D63D8BDE21D877CECAAF536BDCCFE54729A_mBD3D6EABCBDAD29C419965D792E526B664EB6DF3_RuntimeMethod_var);
			V_0 = L_1;
			Recognizer_tCA087D63D8BDE21D877CECAAF536BDCCFE54729A* L_2 = V_0;
			if (!L_2)
			{
				goto IL_0014_1;
			}
		}
		{
			Recognizer_tCA087D63D8BDE21D877CECAAF536BDCCFE54729A* L_3 = V_0;
			NullCheck(L_3);
			bool L_4 = L_3->___isDisposing_16;
			il2cpp_codegen_memory_barrier();
			if (!L_4)
			{
				goto IL_0016_1;
			}
		}

IL_0014_1:
		{
			goto IL_0040;
		}

IL_0016_1:
		{
			intptr_t L_5 = ___hevent1;
			RecognitionEventArgs_tF3045EA40FBF0ACD26A0B6F7D4144036AA7D05F9* L_6 = (RecognitionEventArgs_tF3045EA40FBF0ACD26A0B6F7D4144036AA7D05F9*)il2cpp_codegen_object_new(RecognitionEventArgs_tF3045EA40FBF0ACD26A0B6F7D4144036AA7D05F9_il2cpp_TypeInfo_var);
			NullCheck(L_6);
			RecognitionEventArgs__ctor_m16B7E8B089A37C27BC87BEA572A1E4B2EA9E7B34(L_6, L_5, NULL);
			V_1 = L_6;
			Recognizer_tCA087D63D8BDE21D877CECAAF536BDCCFE54729A* L_7 = V_0;
			NullCheck(L_7);
			EventHandler_1_t4457009845FA4C1ABCF83D7E00C38F13807F18F0* L_8 = L_7->____SpeechEndDetected_3;
			EventHandler_1_t4457009845FA4C1ABCF83D7E00C38F13807F18F0* L_9 = L_8;
			G_B4_0 = L_9;
			if (L_9)
			{
				G_B5_0 = L_9;
				goto IL_0029_1;
			}
		}
		{
			goto IL_0030_1;
		}

IL_0029_1:
		{
			Recognizer_tCA087D63D8BDE21D877CECAAF536BDCCFE54729A* L_10 = V_0;
			RecognitionEventArgs_tF3045EA40FBF0ACD26A0B6F7D4144036AA7D05F9* L_11 = V_1;
			NullCheck(G_B5_0);
			EventHandler_1_Invoke_mE007A9C567558111C4423757C653BB921489BC4B_inline(G_B5_0, L_10, L_11, NULL);
		}

IL_0030_1:
		{
			goto IL_0040;
		}
	}// end try (depth: 1)
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
	{// begin catch(System.Exception)
		V_2 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		Exception_t* L_12 = V_2;
		NullCheck(L_12);
		String_t* L_13;
		L_13 = VirtualFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Exception::get_Message() */, L_12);
		SpxExceptionThrower_LogError_m37A2018CF9E9DCD40E8EE95F37097192A2DC184A(L_13, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0040;
	}// end catch (depth: 1)

IL_0040:
	{
		return;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.Recognizer::DoAsyncRecognitionAction(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Recognizer_DoAsyncRecognitionAction_m83046B03472BABA6160D5C56198373502725FE84 (Recognizer_tCA087D63D8BDE21D877CECAAF536BDCCFE54729A* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___recoImplAction0, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	RuntimeObject* V_2 = NULL;
	bool V_3 = false;
	{
		RuntimeObject* L_0 = __this->___recognizerLock_17;
		V_0 = L_0;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0021:
			{// begin finally (depth: 1)
				{
					bool L_1 = V_1;
					if (!L_1)
					{
						goto IL_002a;
					}
				}
				{
					RuntimeObject* L_2 = V_0;
					Monitor_Exit_m25A154960F91391E10E4CDA245ECDF4BA94D56A9(L_2, NULL);
				}

IL_002a:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			RuntimeObject* L_3 = V_0;
			Monitor_Enter_m00506757392936AA62DBE2C5FFBEE69EE920C4D4(L_3, (&V_1), NULL);
			int32_t L_4 = __this->___activeAsyncRecognitionCounter_18;
			__this->___activeAsyncRecognitionCounter_18 = ((int32_t)il2cpp_codegen_add(L_4, 1));
			goto IL_002b;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_002b:
	{
		bool L_5 = __this->___disposed_15;
		il2cpp_codegen_memory_barrier();
		if (L_5)
		{
			goto IL_003f;
		}
	}
	{
		bool L_6 = __this->___isDisposing_16;
		il2cpp_codegen_memory_barrier();
		if (!L_6)
		{
			goto IL_0050;
		}
	}

IL_003f:
	{
		Type_t* L_7;
		L_7 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(__this, NULL);
		NullCheck(L_7);
		String_t* L_8;
		L_8 = VirtualFuncInvoker0< String_t* >::Invoke(13 /* System.String System.Reflection.MemberInfo::get_Name() */, L_7);
		ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB* L_9 = (ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB_il2cpp_TypeInfo_var)));
		NullCheck(L_9);
		ObjectDisposedException__ctor_mB2C8582279AF3F0C1CF9AA52DA7331BF848DFD48(L_9, L_8, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Recognizer_DoAsyncRecognitionAction_m83046B03472BABA6160D5C56198373502725FE84_RuntimeMethod_var)));
	}

IL_0050:
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0060:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_10 = __this->___recognizerLock_17;
					V_2 = L_10;
					V_3 = (bool)0;
				}
				{
					auto __finallyBlock = il2cpp::utils::Finally([&]
					{

FINALLY_0081:
						{// begin finally (depth: 2)
							{
								bool L_11 = V_3;
								if (!L_11)
								{
									goto IL_008a;
								}
							}
							{
								RuntimeObject* L_12 = V_2;
								Monitor_Exit_m25A154960F91391E10E4CDA245ECDF4BA94D56A9(L_12, NULL);
							}

IL_008a:
							{
								return;
							}
						}// end finally (depth: 2)
					});
					try
					{// begin try (depth: 2)
						RuntimeObject* L_13 = V_2;
						Monitor_Enter_m00506757392936AA62DBE2C5FFBEE69EE920C4D4(L_13, (&V_3), NULL);
						int32_t L_14 = __this->___activeAsyncRecognitionCounter_18;
						__this->___activeAsyncRecognitionCounter_18 = ((int32_t)il2cpp_codegen_subtract(L_14, 1));
						goto IL_008b;
					}// end try (depth: 2)
					catch(Il2CppExceptionWrapper& e)
					{
						__finallyBlock.StoreException(e.ex);
					}
				}

IL_008b:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_15 = ___recoImplAction0;
			SpxExceptionThrower_ThrowIfNull_m5C9E05F3DEDEE273B1049A6052813A5870C4F223(L_15, (String_t*)NULL, NULL);
			Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_16 = ___recoImplAction0;
			NullCheck(L_16);
			Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline(L_16, NULL);
			goto IL_008c;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_008c:
	{
		return;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.Recognizer::StartContinuousRecognition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Recognizer_StartContinuousRecognition_mB8E850543B3369010BFDC121ADC45B7F4D3EB0C2 (Recognizer_tCA087D63D8BDE21D877CECAAF536BDCCFE54729A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7D62C11CCF10BDFC07ACE3D149248DE3F051849C);
		s_Il2CppMethodInitialized = true;
	}
	{
		intptr_t L_0 = __this->___asyncStartContinuousHandle_6;
		bool L_1;
		L_1 = IntPtr_op_Inequality_m2F715312CBFCE7E1A81D0689F68B97218E37E5D1(L_0, (0), NULL);
		if (!L_1)
		{
			goto IL_0022;
		}
	}
	{
		intptr_t L_2 = __this->___asyncStartContinuousHandle_6;
		intptr_t L_3;
		L_3 = Recognizer_recognizer_async_handle_release_m308FA74E4DC2A3B70602A6EB0B36B75293C45707(L_2, NULL);
		SpxExceptionThrower_ThrowIfFail_m80558DF4FFB9A961C7CCC15CD13AF53F5437BA21(L_3, NULL);
	}

IL_0022:
	{
		InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* L_4 = __this->___recoHandle_4;
		SpxExceptionThrower_ThrowIfNull_m5C9E05F3DEDEE273B1049A6052813A5870C4F223(L_4, _stringLiteral7D62C11CCF10BDFC07ACE3D149248DE3F051849C, NULL);
		InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* L_5 = __this->___recoHandle_4;
		intptr_t* L_6 = (&__this->___asyncStartContinuousHandle_6);
		intptr_t L_7;
		L_7 = Recognizer_recognizer_start_continuous_recognition_async_m441C21EB7505A97E5F91536E25509FD729083C16(L_5, L_6, NULL);
		SpxExceptionThrower_ThrowIfFail_m80558DF4FFB9A961C7CCC15CD13AF53F5437BA21(L_7, NULL);
		intptr_t L_8 = __this->___asyncStartContinuousHandle_6;
		intptr_t L_9;
		L_9 = Recognizer_recognizer_start_continuous_recognition_async_wait_for_mBB675A57CCEF423FF45B679C2878E6407C1C824C(L_8, (-1), NULL);
		SpxExceptionThrower_ThrowIfFail_m80558DF4FFB9A961C7CCC15CD13AF53F5437BA21(L_9, NULL);
		intptr_t L_10 = __this->___asyncStartContinuousHandle_6;
		intptr_t L_11;
		L_11 = Recognizer_recognizer_async_handle_release_m308FA74E4DC2A3B70602A6EB0B36B75293C45707(L_10, NULL);
		SpxExceptionThrower_ThrowIfFail_m80558DF4FFB9A961C7CCC15CD13AF53F5437BA21(L_11, NULL);
		__this->___asyncStartContinuousHandle_6 = (0);
		return;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.Recognizer::StopContinuousRecognition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Recognizer_StopContinuousRecognition_mAB43FB36FA7F893031EE6EF33D7E980474FAE6D8 (Recognizer_tCA087D63D8BDE21D877CECAAF536BDCCFE54729A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7D62C11CCF10BDFC07ACE3D149248DE3F051849C);
		s_Il2CppMethodInitialized = true;
	}
	{
		intptr_t L_0 = __this->___asyncStopContinuousHandle_7;
		bool L_1;
		L_1 = IntPtr_op_Inequality_m2F715312CBFCE7E1A81D0689F68B97218E37E5D1(L_0, (0), NULL);
		if (!L_1)
		{
			goto IL_0022;
		}
	}
	{
		intptr_t L_2 = __this->___asyncStopContinuousHandle_7;
		intptr_t L_3;
		L_3 = Recognizer_recognizer_async_handle_release_m308FA74E4DC2A3B70602A6EB0B36B75293C45707(L_2, NULL);
		SpxExceptionThrower_ThrowIfFail_m80558DF4FFB9A961C7CCC15CD13AF53F5437BA21(L_3, NULL);
	}

IL_0022:
	{
		InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* L_4 = __this->___recoHandle_4;
		SpxExceptionThrower_ThrowIfNull_m5C9E05F3DEDEE273B1049A6052813A5870C4F223(L_4, _stringLiteral7D62C11CCF10BDFC07ACE3D149248DE3F051849C, NULL);
		InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* L_5 = __this->___recoHandle_4;
		intptr_t* L_6 = (&__this->___asyncStopContinuousHandle_7);
		intptr_t L_7;
		L_7 = Recognizer_recognizer_stop_continuous_recognition_async_m35C65D620FD71FE342E909F031267E73D24179EA(L_5, L_6, NULL);
		SpxExceptionThrower_ThrowIfFail_m80558DF4FFB9A961C7CCC15CD13AF53F5437BA21(L_7, NULL);
		intptr_t L_8 = __this->___asyncStopContinuousHandle_7;
		intptr_t L_9;
		L_9 = Recognizer_recognizer_stop_continuous_recognition_async_wait_for_mD01776BA308DDA07554942288BD247FF8E10ABE7(L_8, (-1), NULL);
		SpxExceptionThrower_ThrowIfFail_m80558DF4FFB9A961C7CCC15CD13AF53F5437BA21(L_9, NULL);
		intptr_t L_10 = __this->___asyncStopContinuousHandle_7;
		intptr_t L_11;
		L_11 = Recognizer_recognizer_async_handle_release_m308FA74E4DC2A3B70602A6EB0B36B75293C45707(L_10, NULL);
		SpxExceptionThrower_ThrowIfFail_m80558DF4FFB9A961C7CCC15CD13AF53F5437BA21(L_11, NULL);
		__this->___asyncStopContinuousHandle_7 = (0);
		return;
	}
}
// Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle Microsoft.CognitiveServices.Speech.Recognizer::FromConfig(Microsoft.CognitiveServices.Speech.Recognizer/GetRecognizerFromConfigDelegate,Microsoft.CognitiveServices.Speech.SpeechConfig)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* Recognizer_FromConfig_m987A4CFBF642C006F1CCC60AE435E7C825B55F64 (GetRecognizerFromConfigDelegate_t17EEE1C5E4305DB57FCBE2C975DB62B9BA4B584D* ___fromConfig0, SpeechConfig_tAE8FEC093B21AA957B784250CF237DE1C3760DEE* ___speechConfig1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HandleRelease_tDA5C5C8C145FFFB7E9AE3ADB1506118017AC70F9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Recognizer_recognizer_handle_release_m6D4F7C9482D6618B26EF7AA1E0BF48B64986FCEF_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* V_1 = NULL;
	intptr_t V_2;
	memset((&V_2), 0, sizeof(V_2));
	InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* V_3 = NULL;
	InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* V_4 = NULL;
	{
		SpeechConfig_tAE8FEC093B21AA957B784250CF237DE1C3760DEE* L_0 = ___speechConfig1;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral355878A388870DC1779B9524DFC7806DF3F6E3EF)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Recognizer_FromConfig_m987A4CFBF642C006F1CCC60AE435E7C825B55F64_RuntimeMethod_var)));
	}

IL_000e:
	{
		V_0 = (0);
		intptr_t L_2 = V_0;
		InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* L_3 = (InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D*)il2cpp_codegen_object_new(InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		InteropSafeHandle__ctor_mC37ECE3504FFCF1C3A565E45B1659808FD310B62(L_3, L_2, (HandleRelease_tDA5C5C8C145FFFB7E9AE3ADB1506118017AC70F9*)NULL, NULL);
		V_1 = L_3;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0054:
			{// begin finally (depth: 1)
				{
					InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* L_4 = V_1;
					if (!L_4)
					{
						goto IL_005d;
					}
				}
				{
					InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* L_5 = V_1;
					NullCheck(L_5);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_5);
				}

IL_005d:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			V_2 = (0);
			GetRecognizerFromConfigDelegate_t17EEE1C5E4305DB57FCBE2C975DB62B9BA4B584D* L_6 = ___fromConfig0;
			SpeechConfig_tAE8FEC093B21AA957B784250CF237DE1C3760DEE* L_7 = ___speechConfig1;
			NullCheck(L_7);
			InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* L_8 = L_7->___configHandle_0;
			InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* L_9 = V_1;
			NullCheck(L_6);
			intptr_t L_10;
			L_10 = GetRecognizerFromConfigDelegate_Invoke_m186F198255E0AFC6B9A20C2689202A1BFF62C4FD_inline(L_6, (&V_2), L_8, L_9, NULL);
			SpxExceptionThrower_ThrowIfFail_m80558DF4FFB9A961C7CCC15CD13AF53F5437BA21(L_10, NULL);
			intptr_t L_11 = V_2;
			HandleRelease_tDA5C5C8C145FFFB7E9AE3ADB1506118017AC70F9* L_12 = (HandleRelease_tDA5C5C8C145FFFB7E9AE3ADB1506118017AC70F9*)il2cpp_codegen_object_new(HandleRelease_tDA5C5C8C145FFFB7E9AE3ADB1506118017AC70F9_il2cpp_TypeInfo_var);
			NullCheck(L_12);
			HandleRelease__ctor_m5265A47915D90FC04F512F3D1BC68A711343A4E7(L_12, NULL, (intptr_t)((void*)Recognizer_recognizer_handle_release_m6D4F7C9482D6618B26EF7AA1E0BF48B64986FCEF_RuntimeMethod_var), NULL);
			InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* L_13 = (InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D*)il2cpp_codegen_object_new(InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D_il2cpp_TypeInfo_var);
			NullCheck(L_13);
			InteropSafeHandle__ctor_mC37ECE3504FFCF1C3A565E45B1659808FD310B62(L_13, L_11, L_12, NULL);
			V_3 = L_13;
			SpeechConfig_tAE8FEC093B21AA957B784250CF237DE1C3760DEE* L_14 = ___speechConfig1;
			il2cpp_codegen_runtime_class_init_inline(GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_il2cpp_TypeInfo_var);
			GC_KeepAlive_mA4BE2995EF7EF1A0C97391D40A445040BBBCCE2C(L_14, NULL);
			InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* L_15 = V_3;
			V_4 = L_15;
			goto IL_005e;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_005e:
	{
		InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* L_16 = V_4;
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
intptr_t GetRecognizerFromConfigDelegate_Invoke_m186F198255E0AFC6B9A20C2689202A1BFF62C4FD_Multicast(GetRecognizerFromConfigDelegate_t17EEE1C5E4305DB57FCBE2C975DB62B9BA4B584D* __this, intptr_t* ___phreco0, InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* ___speechconfig1, InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* ___audioInput2, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	intptr_t retVal;
	memset((&retVal), 0, sizeof(retVal));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		GetRecognizerFromConfigDelegate_t17EEE1C5E4305DB57FCBE2C975DB62B9BA4B584D* currentDelegate = reinterpret_cast<GetRecognizerFromConfigDelegate_t17EEE1C5E4305DB57FCBE2C975DB62B9BA4B584D*>(delegatesToInvoke[i]);
		typedef intptr_t (*FunctionPointerType) (RuntimeObject*, intptr_t*, InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D*, InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D*, const RuntimeMethod*);
		retVal = ((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___phreco0, ___speechconfig1, ___audioInput2, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
	return retVal;
}
intptr_t GetRecognizerFromConfigDelegate_Invoke_m186F198255E0AFC6B9A20C2689202A1BFF62C4FD_Open(GetRecognizerFromConfigDelegate_t17EEE1C5E4305DB57FCBE2C975DB62B9BA4B584D* __this, intptr_t* ___phreco0, InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* ___speechconfig1, InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* ___audioInput2, const RuntimeMethod* method)
{
	typedef intptr_t (*FunctionPointerType) (intptr_t*, InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D*, InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___phreco0, ___speechconfig1, ___audioInput2, method);
}
intptr_t GetRecognizerFromConfigDelegate_Invoke_m186F198255E0AFC6B9A20C2689202A1BFF62C4FD_OpenStaticInvoker(GetRecognizerFromConfigDelegate_t17EEE1C5E4305DB57FCBE2C975DB62B9BA4B584D* __this, intptr_t* ___phreco0, InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* ___speechconfig1, InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* ___audioInput2, const RuntimeMethod* method)
{
	return InvokerFuncInvoker3< intptr_t, intptr_t*, InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D*, InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* >::Invoke(__this->___method_ptr_0, method, NULL, ___phreco0, ___speechconfig1, ___audioInput2);
}
intptr_t GetRecognizerFromConfigDelegate_Invoke_m186F198255E0AFC6B9A20C2689202A1BFF62C4FD_ClosedStaticInvoker(GetRecognizerFromConfigDelegate_t17EEE1C5E4305DB57FCBE2C975DB62B9BA4B584D* __this, intptr_t* ___phreco0, InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* ___speechconfig1, InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* ___audioInput2, const RuntimeMethod* method)
{
	return InvokerFuncInvoker4< intptr_t, RuntimeObject*, intptr_t*, InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D*, InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___phreco0, ___speechconfig1, ___audioInput2);
}
IL2CPP_EXTERN_C  intptr_t DelegatePInvokeWrapper_GetRecognizerFromConfigDelegate_t17EEE1C5E4305DB57FCBE2C975DB62B9BA4B584D (GetRecognizerFromConfigDelegate_t17EEE1C5E4305DB57FCBE2C975DB62B9BA4B584D* __this, intptr_t* ___phreco0, InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* ___speechconfig1, InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* ___audioInput2, const RuntimeMethod* method)
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc)(intptr_t*, void*, void*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Marshaling of parameter '___speechconfig1' to native representation
	void* ____speechconfig1_marshaled = NULL;
	if (___speechconfig1 == NULL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_null_exception("speechconfig"), NULL);
	bool ___safeHandle_reference_incremented_for____speechconfig1 = false;
	SafeHandle_DangerousAddRef_m9FA46208A92D8B33059B8E8712F49AE45BB5E922(___speechconfig1, (&___safeHandle_reference_incremented_for____speechconfig1), NULL);
	____speechconfig1_marshaled = reinterpret_cast<void*>((___speechconfig1)->___handle_0);

	// Marshaling of parameter '___audioInput2' to native representation
	void* ____audioInput2_marshaled = NULL;
	if (___audioInput2 == NULL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_null_exception("audioInput"), NULL);
	bool ___safeHandle_reference_incremented_for____audioInput2 = false;
	SafeHandle_DangerousAddRef_m9FA46208A92D8B33059B8E8712F49AE45BB5E922(___audioInput2, (&___safeHandle_reference_incremented_for____audioInput2), NULL);
	____audioInput2_marshaled = reinterpret_cast<void*>((___audioInput2)->___handle_0);

	// Native function invocation
	intptr_t returnValue = il2cppPInvokeFunc(___phreco0, ____speechconfig1_marshaled, ____audioInput2_marshaled);

	// Marshaling cleanup of parameter '___speechconfig1' native representation
	if (___safeHandle_reference_incremented_for____speechconfig1)
	{
		SafeHandle_DangerousRelease_m30A8B4E5BEA935C8925BC2115CD0AD13B937953E(___speechconfig1, NULL);
	}

	// Marshaling cleanup of parameter '___audioInput2' native representation
	if (___safeHandle_reference_incremented_for____audioInput2)
	{
		SafeHandle_DangerousRelease_m30A8B4E5BEA935C8925BC2115CD0AD13B937953E(___audioInput2, NULL);
	}

	return returnValue;
}
// System.Void Microsoft.CognitiveServices.Speech.Recognizer/GetRecognizerFromConfigDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GetRecognizerFromConfigDelegate__ctor_m8225A337DC771AF4368C036689A77F76D48D4567 (GetRecognizerFromConfigDelegate_t17EEE1C5E4305DB57FCBE2C975DB62B9BA4B584D* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 3;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&GetRecognizerFromConfigDelegate_Invoke_m186F198255E0AFC6B9A20C2689202A1BFF62C4FD_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&GetRecognizerFromConfigDelegate_Invoke_m186F198255E0AFC6B9A20C2689202A1BFF62C4FD_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&GetRecognizerFromConfigDelegate_Invoke_m186F198255E0AFC6B9A20C2689202A1BFF62C4FD_Open;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 2;
		if (isOpen)
		{
			__this->___invoke_impl_1 = (intptr_t)&GetRecognizerFromConfigDelegate_Invoke_m186F198255E0AFC6B9A20C2689202A1BFF62C4FD_Open;
		}
		else
		{
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&GetRecognizerFromConfigDelegate_Invoke_m186F198255E0AFC6B9A20C2689202A1BFF62C4FD_Multicast;
}
// System.IntPtr Microsoft.CognitiveServices.Speech.Recognizer/GetRecognizerFromConfigDelegate::Invoke(System.IntPtr&,Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t GetRecognizerFromConfigDelegate_Invoke_m186F198255E0AFC6B9A20C2689202A1BFF62C4FD (GetRecognizerFromConfigDelegate_t17EEE1C5E4305DB57FCBE2C975DB62B9BA4B584D* __this, intptr_t* ___phreco0, InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* ___speechconfig1, InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* ___audioInput2, const RuntimeMethod* method) 
{
	typedef intptr_t (*FunctionPointerType) (RuntimeObject*, intptr_t*, InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D*, InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___phreco0, ___speechconfig1, ___audioInput2, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Microsoft.CognitiveServices.Speech.SessionEventArgs::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SessionEventArgs__ctor_m240C60ECA28570ED5A8FF624C62BAE2EBA25A5AA (SessionEventArgs_t06C8DB22E01F18F0B45A4E719BECB043B4D961BC* __this, intptr_t ___eventHandlePtr0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventArgs_recognizer_event_handle_release_mB10E833E44DE8B942BA131D02EAA83C76170287B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GetResultDelegate_t678B8552898C76C54DA3B9B56C14C65BDE7D434B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HandleRelease_tDA5C5C8C145FFFB7E9AE3ADB1506118017AC70F9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Recognizer_recognizer_session_event_get_session_id_mD4D0B7CC2B238EA5B51AC263ECEE64F8EB5F2EC6_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_il2cpp_TypeInfo_var);
		EventArgs__ctor_mC6F9412D03203ADEF854117542C8EBF61624C8C3(__this, NULL);
		intptr_t L_0 = ___eventHandlePtr0;
		SpxExceptionThrower_ThrowIfNull_mD0AA28085EF6376F8CA07F13EE43542C501050C4(L_0, (String_t*)NULL, NULL);
		intptr_t L_1 = ___eventHandlePtr0;
		HandleRelease_tDA5C5C8C145FFFB7E9AE3ADB1506118017AC70F9* L_2 = (HandleRelease_tDA5C5C8C145FFFB7E9AE3ADB1506118017AC70F9*)il2cpp_codegen_object_new(HandleRelease_tDA5C5C8C145FFFB7E9AE3ADB1506118017AC70F9_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		HandleRelease__ctor_m5265A47915D90FC04F512F3D1BC68A711343A4E7(L_2, NULL, (intptr_t)((void*)EventArgs_recognizer_event_handle_release_mB10E833E44DE8B942BA131D02EAA83C76170287B_RuntimeMethod_var), NULL);
		InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* L_3 = (InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D*)il2cpp_codegen_object_new(InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		InteropSafeHandle__ctor_mC37ECE3504FFCF1C3A565E45B1659808FD310B62(L_3, L_1, L_2, NULL);
		__this->___eventHandle_1 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___eventHandle_1), (void*)L_3);
		GetResultDelegate_t678B8552898C76C54DA3B9B56C14C65BDE7D434B* L_4 = (GetResultDelegate_t678B8552898C76C54DA3B9B56C14C65BDE7D434B*)il2cpp_codegen_object_new(GetResultDelegate_t678B8552898C76C54DA3B9B56C14C65BDE7D434B_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		GetResultDelegate__ctor_mE4D38F6D4B3F9FBE85FE26118D690DD00A195314(L_4, NULL, (intptr_t)((void*)Recognizer_recognizer_session_event_get_session_id_mD4D0B7CC2B238EA5B51AC263ECEE64F8EB5F2EC6_RuntimeMethod_var), NULL);
		InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* L_5 = __this->___eventHandle_1;
		String_t* L_6;
		L_6 = SpxFactory_GetDataFromHandleUsingDelegate_m2292A32ABAA69783218EFADD6C6269D5527378CD(L_4, L_5, ((int32_t)37), NULL);
		__this->___U3CSessionIdU3Ek__BackingField_4 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CSessionIdU3Ek__BackingField_4), (void*)L_6);
		return;
	}
}
// System.String Microsoft.CognitiveServices.Speech.SessionEventArgs::get_SessionId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SessionEventArgs_get_SessionId_m8963B1EBE96E2EC946789DE47BBC4A17292FDF33 (SessionEventArgs_t06C8DB22E01F18F0B45A4E719BECB043B4D961BC* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CSessionIdU3Ek__BackingField_4;
		return L_0;
	}
}
// System.String Microsoft.CognitiveServices.Speech.SessionEventArgs::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SessionEventArgs_ToString_m7F7FB7E1EC6F286538A7AC9B79D9354A0C57938C (SessionEventArgs_t06C8DB22E01F18F0B45A4E719BECB043B4D961BC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAD1646DD3BCB50D02405E092BF9F99967377E943);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_0;
		L_0 = CultureInfo_get_InvariantCulture_m78DAB8CBE8766445310782B6E61FB7A9983AD425(NULL);
		String_t* L_1;
		L_1 = SessionEventArgs_get_SessionId_m8963B1EBE96E2EC946789DE47BBC4A17292FDF33_inline(__this, NULL);
		String_t* L_2;
		L_2 = String_Format_m75580778A544C5C8DA0F2ACEE7972A2AC944063A(L_0, _stringLiteralAD1646DD3BCB50D02405E092BF9F99967377E943, L_1, NULL);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpeechConfig__ctor_m586768B4614A1778822601DF07F0319758E1BBE9 (SpeechConfig_tAE8FEC093B21AA957B784250CF237DE1C3760DEE* __this, intptr_t ___configPtr0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HandleRelease_tDA5C5C8C145FFFB7E9AE3ADB1506118017AC70F9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PropertyCollection_tD2FEDF489ECC1689767DEE33A0152F1FA719AA53_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SpeechConfig_speech_config_release_m02C3D503C5141ADD5F9075D27204DD1AD5E9274A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4A7AB2F6B4BB9763BDAE9F4B653E5CA8E25A19F9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD6EFEA28911C05150F90CA0C3A902792E8F9D73C);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		intptr_t L_0 = ___configPtr0;
		SpxExceptionThrower_ThrowIfNull_mD0AA28085EF6376F8CA07F13EE43542C501050C4(L_0, (String_t*)NULL, NULL);
		intptr_t L_1 = ___configPtr0;
		HandleRelease_tDA5C5C8C145FFFB7E9AE3ADB1506118017AC70F9* L_2 = (HandleRelease_tDA5C5C8C145FFFB7E9AE3ADB1506118017AC70F9*)il2cpp_codegen_object_new(HandleRelease_tDA5C5C8C145FFFB7E9AE3ADB1506118017AC70F9_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		HandleRelease__ctor_m5265A47915D90FC04F512F3D1BC68A711343A4E7(L_2, NULL, (intptr_t)((void*)SpeechConfig_speech_config_release_m02C3D503C5141ADD5F9075D27204DD1AD5E9274A_RuntimeMethod_var), NULL);
		InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* L_3 = (InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D*)il2cpp_codegen_object_new(InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		InteropSafeHandle__ctor_mC37ECE3504FFCF1C3A565E45B1659808FD310B62(L_3, L_1, L_2, NULL);
		__this->___configHandle_0 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___configHandle_0), (void*)L_3);
		V_0 = (0);
		InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* L_4 = __this->___configHandle_0;
		intptr_t L_5;
		L_5 = SpeechConfig_speech_config_get_property_bag_mAD34CF04C0FD498FECA8D218D58D8C39431FD207(L_4, (&V_0), NULL);
		SpxExceptionThrower_ThrowIfFail_m80558DF4FFB9A961C7CCC15CD13AF53F5437BA21(L_5, NULL);
		intptr_t L_6 = V_0;
		PropertyCollection_tD2FEDF489ECC1689767DEE33A0152F1FA719AA53* L_7 = (PropertyCollection_tD2FEDF489ECC1689767DEE33A0152F1FA719AA53*)il2cpp_codegen_object_new(PropertyCollection_tD2FEDF489ECC1689767DEE33A0152F1FA719AA53_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		PropertyCollection__ctor_m8F53EB9B9655888D9E2B7AEBB9460B49265618B7(L_7, L_6, NULL);
		__this->___progBag_1 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___progBag_1), (void*)L_7);
		SpeechConfig_SetProperty_m9E79AA2A21F823E849F29921DA476988C2C4DF1C(__this, _stringLiteral4A7AB2F6B4BB9763BDAE9F4B653E5CA8E25A19F9, _stringLiteralD6EFEA28911C05150F90CA0C3A902792E8F9D73C, NULL);
		return;
	}
}
// Microsoft.CognitiveServices.Speech.SpeechConfig Microsoft.CognitiveServices.Speech.SpeechConfig::FromSubscription(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SpeechConfig_tAE8FEC093B21AA957B784250CF237DE1C3760DEE* SpeechConfig_FromSubscription_m237D37C3C6EB687440438E8A3E505875BD3427A6 (String_t* ___subscriptionKey0, String_t* ___region1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SpeechConfig_tAE8FEC093B21AA957B784250CF237DE1C3760DEE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		V_0 = (0);
		String_t* L_0 = ___subscriptionKey0;
		String_t* L_1 = ___region1;
		intptr_t L_2;
		L_2 = SpeechConfig_speech_config_from_subscription_mB1ABBE414549A4855CF3CE0AD87E832209A701E0((&V_0), L_0, L_1, NULL);
		SpxExceptionThrower_ThrowIfFail_m80558DF4FFB9A961C7CCC15CD13AF53F5437BA21(L_2, NULL);
		intptr_t L_3 = V_0;
		SpeechConfig_tAE8FEC093B21AA957B784250CF237DE1C3760DEE* L_4 = (SpeechConfig_tAE8FEC093B21AA957B784250CF237DE1C3760DEE*)il2cpp_codegen_object_new(SpeechConfig_tAE8FEC093B21AA957B784250CF237DE1C3760DEE_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		SpeechConfig__ctor_m586768B4614A1778822601DF07F0319758E1BBE9(L_4, L_3, NULL);
		return L_4;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.SpeechConfig::set_SpeechRecognitionLanguage(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpeechConfig_set_SpeechRecognitionLanguage_mD940965AA416B034AFFF01838B52C9E4A751AF41 (SpeechConfig_tAE8FEC093B21AA957B784250CF237DE1C3760DEE* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		PropertyCollection_tD2FEDF489ECC1689767DEE33A0152F1FA719AA53* L_0 = __this->___progBag_1;
		String_t* L_1 = ___value0;
		NullCheck(L_0);
		VirtualActionInvoker2< int32_t, String_t* >::Invoke(6 /* System.Void Microsoft.CognitiveServices.Speech.PropertyCollection::SetProperty(Microsoft.CognitiveServices.Speech.PropertyId,System.String) */, L_0, ((int32_t)3001), L_1);
		return;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.SpeechConfig::SetProperty(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpeechConfig_SetProperty_m9E79AA2A21F823E849F29921DA476988C2C4DF1C (SpeechConfig_tAE8FEC093B21AA957B784250CF237DE1C3760DEE* __this, String_t* ___name0, String_t* ___value1, const RuntimeMethod* method) 
{
	{
		PropertyCollection_tD2FEDF489ECC1689767DEE33A0152F1FA719AA53* L_0 = __this->___progBag_1;
		String_t* L_1 = ___name0;
		String_t* L_2 = ___value1;
		NullCheck(L_0);
		VirtualActionInvoker2< String_t*, String_t* >::Invoke(7 /* System.Void Microsoft.CognitiveServices.Speech.PropertyCollection::SetProperty(System.String,System.String) */, L_0, L_1, L_2);
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
// System.Void Microsoft.CognitiveServices.Speech.SpeechRecognitionResult::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpeechRecognitionResult__ctor_mCCFDE1F4008AF5CEDAF8D163E8475887565BD056 (SpeechRecognitionResult_tBA76D21E6D62BB6B2CDC9F83766BB1E791649D94* __this, intptr_t ___resultPtr0, const RuntimeMethod* method) 
{
	{
		intptr_t L_0 = ___resultPtr0;
		RecognitionResult__ctor_mF52685BDF0D0D81056CF4F2D7929B837D3E4504E(__this, L_0, NULL);
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
// System.Void Microsoft.CognitiveServices.Speech.SpeechRecognitionEventArgs::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpeechRecognitionEventArgs__ctor_mA12E8F0CEF640C514871ED1481C46B54CE92EE64 (SpeechRecognitionEventArgs_tA7F1649E47FF3239DACE11D5537ECC0AC23E94BD* __this, intptr_t ___eventHandlePtr0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SpeechRecognitionResult_tBA76D21E6D62BB6B2CDC9F83766BB1E791649D94_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		intptr_t L_0 = ___eventHandlePtr0;
		RecognitionEventArgs__ctor_m16B7E8B089A37C27BC87BEA572A1E4B2EA9E7B34(__this, L_0, NULL);
		V_0 = (0);
		InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* L_1 = ((SessionEventArgs_t06C8DB22E01F18F0B45A4E719BECB043B4D961BC*)__this)->___eventHandle_1;
		intptr_t L_2;
		L_2 = Recognizer_recognizer_recognition_event_get_result_mE8BE83DD8F3C6758A018AE4FB17DE38006C874C3(L_1, (&V_0), NULL);
		SpxExceptionThrower_ThrowIfFail_m80558DF4FFB9A961C7CCC15CD13AF53F5437BA21(L_2, NULL);
		intptr_t L_3 = V_0;
		SpeechRecognitionResult_tBA76D21E6D62BB6B2CDC9F83766BB1E791649D94* L_4 = (SpeechRecognitionResult_tBA76D21E6D62BB6B2CDC9F83766BB1E791649D94*)il2cpp_codegen_object_new(SpeechRecognitionResult_tBA76D21E6D62BB6B2CDC9F83766BB1E791649D94_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		SpeechRecognitionResult__ctor_mCCFDE1F4008AF5CEDAF8D163E8475887565BD056(L_4, L_3, NULL);
		__this->___U3CResultU3Ek__BackingField_6 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CResultU3Ek__BackingField_6), (void*)L_4);
		return;
	}
}
// Microsoft.CognitiveServices.Speech.SpeechRecognitionResult Microsoft.CognitiveServices.Speech.SpeechRecognitionEventArgs::get_Result()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SpeechRecognitionResult_tBA76D21E6D62BB6B2CDC9F83766BB1E791649D94* SpeechRecognitionEventArgs_get_Result_m775B21D1681EC803EE52F6FA345D0B5AB14D40D9 (SpeechRecognitionEventArgs_tA7F1649E47FF3239DACE11D5537ECC0AC23E94BD* __this, const RuntimeMethod* method) 
{
	{
		SpeechRecognitionResult_tBA76D21E6D62BB6B2CDC9F83766BB1E791649D94* L_0 = __this->___U3CResultU3Ek__BackingField_6;
		return L_0;
	}
}
// System.String Microsoft.CognitiveServices.Speech.SpeechRecognitionEventArgs::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SpeechRecognitionEventArgs_ToString_m16F0AE8AF18D2C923DA643953109C5012CB3306D (SpeechRecognitionEventArgs_tA7F1649E47FF3239DACE11D5537ECC0AC23E94BD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ResultReason_tC944C305A2A069DB2A7F5C6112F43FA8A4405A54_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1F16CCC8B5C539FDA6D18899BE786616CC0A66C9);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_0;
		L_0 = CultureInfo_get_InvariantCulture_m78DAB8CBE8766445310782B6E61FB7A9983AD425(NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)4);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = L_1;
		String_t* L_3;
		L_3 = SessionEventArgs_get_SessionId_m8963B1EBE96E2EC946789DE47BBC4A17292FDF33_inline(__this, NULL);
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_3);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = L_2;
		SpeechRecognitionResult_tBA76D21E6D62BB6B2CDC9F83766BB1E791649D94* L_5;
		L_5 = SpeechRecognitionEventArgs_get_Result_m775B21D1681EC803EE52F6FA345D0B5AB14D40D9_inline(__this, NULL);
		NullCheck(L_5);
		String_t* L_6;
		L_6 = VirtualFuncInvoker0< String_t* >::Invoke(4 /* System.String Microsoft.CognitiveServices.Speech.RecognitionResult::get_ResultId() */, L_5);
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_6);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_6);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_7 = L_4;
		SpeechRecognitionResult_tBA76D21E6D62BB6B2CDC9F83766BB1E791649D94* L_8;
		L_8 = SpeechRecognitionEventArgs_get_Result_m775B21D1681EC803EE52F6FA345D0B5AB14D40D9_inline(__this, NULL);
		NullCheck(L_8);
		int32_t L_9;
		L_9 = VirtualFuncInvoker0< int32_t >::Invoke(5 /* Microsoft.CognitiveServices.Speech.ResultReason Microsoft.CognitiveServices.Speech.RecognitionResult::get_Reason() */, L_8);
		int32_t L_10 = L_9;
		RuntimeObject* L_11 = Box(ResultReason_tC944C305A2A069DB2A7F5C6112F43FA8A4405A54_il2cpp_TypeInfo_var, &L_10);
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, L_11);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_11);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_12 = L_7;
		SpeechRecognitionResult_tBA76D21E6D62BB6B2CDC9F83766BB1E791649D94* L_13;
		L_13 = SpeechRecognitionEventArgs_get_Result_m775B21D1681EC803EE52F6FA345D0B5AB14D40D9_inline(__this, NULL);
		NullCheck(L_13);
		String_t* L_14;
		L_14 = VirtualFuncInvoker0< String_t* >::Invoke(6 /* System.String Microsoft.CognitiveServices.Speech.RecognitionResult::get_Text() */, L_13);
		NullCheck(L_12);
		ArrayElementTypeCheck (L_12, L_14);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject*)L_14);
		String_t* L_15;
		L_15 = String_Format_mBFACD7FE8657957CE3D5DA54D519AB418AF421E7(L_0, _stringLiteral1F16CCC8B5C539FDA6D18899BE786616CC0A66C9, L_12, NULL);
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
// System.Void Microsoft.CognitiveServices.Speech.SpeechRecognitionCanceledEventArgs::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpeechRecognitionCanceledEventArgs__ctor_mE27E61BE7835AF73A8C25DD3FA2205632C9DC107 (SpeechRecognitionCanceledEventArgs_t5FB6DBEE3C3E77AE97C05A03CE7CBC0BD387CA86* __this, intptr_t ___eventHandlePtr0, const RuntimeMethod* method) 
{
	CancellationDetails_t3A257E993FAECAD1A9866267C438E47CFA1D308A* V_0 = NULL;
	{
		intptr_t L_0 = ___eventHandlePtr0;
		SpeechRecognitionEventArgs__ctor_mA12E8F0CEF640C514871ED1481C46B54CE92EE64(__this, L_0, NULL);
		SpeechRecognitionResult_tBA76D21E6D62BB6B2CDC9F83766BB1E791649D94* L_1;
		L_1 = SpeechRecognitionEventArgs_get_Result_m775B21D1681EC803EE52F6FA345D0B5AB14D40D9_inline(__this, NULL);
		CancellationDetails_t3A257E993FAECAD1A9866267C438E47CFA1D308A* L_2;
		L_2 = CancellationDetails_FromResult_m6C75E2AD2521230D540BA1BCF5515ECC29DBF968(L_1, NULL);
		V_0 = L_2;
		CancellationDetails_t3A257E993FAECAD1A9866267C438E47CFA1D308A* L_3 = V_0;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = CancellationDetails_get_Reason_m353778943984FF273C594BBB7D83D519C0B58180_inline(L_3, NULL);
		__this->___U3CReasonU3Ek__BackingField_7 = L_4;
		CancellationDetails_t3A257E993FAECAD1A9866267C438E47CFA1D308A* L_5 = V_0;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = CancellationDetails_get_ErrorCode_m01B8889CC68F1443F822B1E8082F6B8378C723AF_inline(L_5, NULL);
		__this->___U3CErrorCodeU3Ek__BackingField_8 = L_6;
		CancellationDetails_t3A257E993FAECAD1A9866267C438E47CFA1D308A* L_7 = V_0;
		NullCheck(L_7);
		String_t* L_8;
		L_8 = CancellationDetails_get_ErrorDetails_mB3C4D6386464A3C5168B7EEFAAE45EC62EF95636_inline(L_7, NULL);
		__this->___U3CErrorDetailsU3Ek__BackingField_9 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CErrorDetailsU3Ek__BackingField_9), (void*)L_8);
		return;
	}
}
// Microsoft.CognitiveServices.Speech.CancellationReason Microsoft.CognitiveServices.Speech.SpeechRecognitionCanceledEventArgs::get_Reason()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SpeechRecognitionCanceledEventArgs_get_Reason_m43CDCCC1311B234FB9F7C31BF966478DEB156815 (SpeechRecognitionCanceledEventArgs_t5FB6DBEE3C3E77AE97C05A03CE7CBC0BD387CA86* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CReasonU3Ek__BackingField_7;
		return L_0;
	}
}
// Microsoft.CognitiveServices.Speech.CancellationErrorCode Microsoft.CognitiveServices.Speech.SpeechRecognitionCanceledEventArgs::get_ErrorCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SpeechRecognitionCanceledEventArgs_get_ErrorCode_m54BF697777056D1E09CEDB6E005095970A48B5D2 (SpeechRecognitionCanceledEventArgs_t5FB6DBEE3C3E77AE97C05A03CE7CBC0BD387CA86* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CErrorCodeU3Ek__BackingField_8;
		return L_0;
	}
}
// System.String Microsoft.CognitiveServices.Speech.SpeechRecognitionCanceledEventArgs::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SpeechRecognitionCanceledEventArgs_ToString_m4254A5E0769BEA2D983E83418E6F2645DC371EFF (SpeechRecognitionCanceledEventArgs_t5FB6DBEE3C3E77AE97C05A03CE7CBC0BD387CA86* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CancellationErrorCode_tA7E793829617AB6327A122CC40E657792C4D9402_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CancellationReason_t51FBE96029389530BF9FEE71742677C3DFF019A5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral94ACA2C81E052FAFABB8EF261D2A67595EE46C0E);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_0;
		L_0 = CultureInfo_get_InvariantCulture_m78DAB8CBE8766445310782B6E61FB7A9983AD425(NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)4);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = L_1;
		String_t* L_3;
		L_3 = SessionEventArgs_get_SessionId_m8963B1EBE96E2EC946789DE47BBC4A17292FDF33_inline(__this, NULL);
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_3);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = L_2;
		SpeechRecognitionResult_tBA76D21E6D62BB6B2CDC9F83766BB1E791649D94* L_5;
		L_5 = SpeechRecognitionEventArgs_get_Result_m775B21D1681EC803EE52F6FA345D0B5AB14D40D9_inline(__this, NULL);
		NullCheck(L_5);
		String_t* L_6;
		L_6 = VirtualFuncInvoker0< String_t* >::Invoke(4 /* System.String Microsoft.CognitiveServices.Speech.RecognitionResult::get_ResultId() */, L_5);
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_6);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_6);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_7 = L_4;
		int32_t L_8;
		L_8 = SpeechRecognitionCanceledEventArgs_get_Reason_m43CDCCC1311B234FB9F7C31BF966478DEB156815_inline(__this, NULL);
		int32_t L_9 = L_8;
		RuntimeObject* L_10 = Box(CancellationReason_t51FBE96029389530BF9FEE71742677C3DFF019A5_il2cpp_TypeInfo_var, &L_9);
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, L_10);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_10);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_11 = L_7;
		int32_t L_12;
		L_12 = SpeechRecognitionCanceledEventArgs_get_ErrorCode_m54BF697777056D1E09CEDB6E005095970A48B5D2_inline(__this, NULL);
		int32_t L_13 = L_12;
		RuntimeObject* L_14 = Box(CancellationErrorCode_tA7E793829617AB6327A122CC40E657792C4D9402_il2cpp_TypeInfo_var, &L_13);
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, L_14);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject*)L_14);
		String_t* L_15;
		L_15 = String_Format_mBFACD7FE8657957CE3D5DA54D519AB418AF421E7(L_0, _stringLiteral94ACA2C81E052FAFABB8EF261D2A67595EE46C0E, L_11, NULL);
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
extern "C" void CDECL ReversePInvokeWrapper_SpeechRecognizer_FireEvent_Recognizing_m5F41324B4925637FC1859240D793E0038ABE9EA4(intptr_t ___hreco0, intptr_t ___hevent1, intptr_t ___pvContext2)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	SpeechRecognizer_FireEvent_Recognizing_m5F41324B4925637FC1859240D793E0038ABE9EA4(___hreco0, ___hevent1, ___pvContext2, NULL);

}
extern "C" void CDECL ReversePInvokeWrapper_SpeechRecognizer_FireEvent_Recognized_m1C49575EF31FF9111D7CC4CC679D1582B525F886(intptr_t ___hreco0, intptr_t ___hevent1, intptr_t ___pvContext2)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	SpeechRecognizer_FireEvent_Recognized_m1C49575EF31FF9111D7CC4CC679D1582B525F886(___hreco0, ___hevent1, ___pvContext2, NULL);

}
extern "C" void CDECL ReversePInvokeWrapper_SpeechRecognizer_FireEvent_Canceled_m2034F62D22C618A305A7E5E7DCB416439CDD3F6E(intptr_t ___hreco0, intptr_t ___hevent1, intptr_t ___pvContext2)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	SpeechRecognizer_FireEvent_Canceled_m2034F62D22C618A305A7E5E7DCB416439CDD3F6E(___hreco0, ___hevent1, ___pvContext2, NULL);

}
// System.Void Microsoft.CognitiveServices.Speech.SpeechRecognizer::add__Recognizing(System.EventHandler`1<Microsoft.CognitiveServices.Speech.SpeechRecognitionEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpeechRecognizer_add__Recognizing_m16447A0416973172AB4D0CBAF6A8FC554B1E9294 (SpeechRecognizer_t949CB7F9294C8FD93325B16A1791A28325C2203B* __this, EventHandler_1_tFE5F3A49257B61DC2A2C46D8D8C0CE7A76F99979* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tFE5F3A49257B61DC2A2C46D8D8C0CE7A76F99979_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_tFE5F3A49257B61DC2A2C46D8D8C0CE7A76F99979* V_0 = NULL;
	EventHandler_1_tFE5F3A49257B61DC2A2C46D8D8C0CE7A76F99979* V_1 = NULL;
	EventHandler_1_tFE5F3A49257B61DC2A2C46D8D8C0CE7A76F99979* V_2 = NULL;
	{
		EventHandler_1_tFE5F3A49257B61DC2A2C46D8D8C0CE7A76F99979* L_0 = __this->____Recognizing_19;
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_tFE5F3A49257B61DC2A2C46D8D8C0CE7A76F99979* L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_tFE5F3A49257B61DC2A2C46D8D8C0CE7A76F99979* L_2 = V_1;
		EventHandler_1_tFE5F3A49257B61DC2A2C46D8D8C0CE7A76F99979* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m8B9D24CED35033C7FC56501DFE650F5CB7FF012C(L_2, L_3, NULL);
		V_2 = ((EventHandler_1_tFE5F3A49257B61DC2A2C46D8D8C0CE7A76F99979*)Castclass((RuntimeObject*)L_4, EventHandler_1_tFE5F3A49257B61DC2A2C46D8D8C0CE7A76F99979_il2cpp_TypeInfo_var));
		EventHandler_1_tFE5F3A49257B61DC2A2C46D8D8C0CE7A76F99979** L_5 = (&__this->____Recognizing_19);
		EventHandler_1_tFE5F3A49257B61DC2A2C46D8D8C0CE7A76F99979* L_6 = V_2;
		EventHandler_1_tFE5F3A49257B61DC2A2C46D8D8C0CE7A76F99979* L_7 = V_1;
		EventHandler_1_tFE5F3A49257B61DC2A2C46D8D8C0CE7A76F99979* L_8;
		L_8 = InterlockedCompareExchangeImpl<EventHandler_1_tFE5F3A49257B61DC2A2C46D8D8C0CE7A76F99979*>(L_5, L_6, L_7);
		V_0 = L_8;
		EventHandler_1_tFE5F3A49257B61DC2A2C46D8D8C0CE7A76F99979* L_9 = V_0;
		EventHandler_1_tFE5F3A49257B61DC2A2C46D8D8C0CE7A76F99979* L_10 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_tFE5F3A49257B61DC2A2C46D8D8C0CE7A76F99979*)L_9) == ((RuntimeObject*)(EventHandler_1_tFE5F3A49257B61DC2A2C46D8D8C0CE7A76F99979*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.SpeechRecognizer::remove__Recognizing(System.EventHandler`1<Microsoft.CognitiveServices.Speech.SpeechRecognitionEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpeechRecognizer_remove__Recognizing_m5C73B8CE847979E6475EAC3240E7357FCA1F3E5F (SpeechRecognizer_t949CB7F9294C8FD93325B16A1791A28325C2203B* __this, EventHandler_1_tFE5F3A49257B61DC2A2C46D8D8C0CE7A76F99979* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tFE5F3A49257B61DC2A2C46D8D8C0CE7A76F99979_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_tFE5F3A49257B61DC2A2C46D8D8C0CE7A76F99979* V_0 = NULL;
	EventHandler_1_tFE5F3A49257B61DC2A2C46D8D8C0CE7A76F99979* V_1 = NULL;
	EventHandler_1_tFE5F3A49257B61DC2A2C46D8D8C0CE7A76F99979* V_2 = NULL;
	{
		EventHandler_1_tFE5F3A49257B61DC2A2C46D8D8C0CE7A76F99979* L_0 = __this->____Recognizing_19;
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_tFE5F3A49257B61DC2A2C46D8D8C0CE7A76F99979* L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_tFE5F3A49257B61DC2A2C46D8D8C0CE7A76F99979* L_2 = V_1;
		EventHandler_1_tFE5F3A49257B61DC2A2C46D8D8C0CE7A76F99979* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m40506877934EC1AD4ADAE57F5E97AF0BC0F96116(L_2, L_3, NULL);
		V_2 = ((EventHandler_1_tFE5F3A49257B61DC2A2C46D8D8C0CE7A76F99979*)Castclass((RuntimeObject*)L_4, EventHandler_1_tFE5F3A49257B61DC2A2C46D8D8C0CE7A76F99979_il2cpp_TypeInfo_var));
		EventHandler_1_tFE5F3A49257B61DC2A2C46D8D8C0CE7A76F99979** L_5 = (&__this->____Recognizing_19);
		EventHandler_1_tFE5F3A49257B61DC2A2C46D8D8C0CE7A76F99979* L_6 = V_2;
		EventHandler_1_tFE5F3A49257B61DC2A2C46D8D8C0CE7A76F99979* L_7 = V_1;
		EventHandler_1_tFE5F3A49257B61DC2A2C46D8D8C0CE7A76F99979* L_8;
		L_8 = InterlockedCompareExchangeImpl<EventHandler_1_tFE5F3A49257B61DC2A2C46D8D8C0CE7A76F99979*>(L_5, L_6, L_7);
		V_0 = L_8;
		EventHandler_1_tFE5F3A49257B61DC2A2C46D8D8C0CE7A76F99979* L_9 = V_0;
		EventHandler_1_tFE5F3A49257B61DC2A2C46D8D8C0CE7A76F99979* L_10 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_tFE5F3A49257B61DC2A2C46D8D8C0CE7A76F99979*)L_9) == ((RuntimeObject*)(EventHandler_1_tFE5F3A49257B61DC2A2C46D8D8C0CE7A76F99979*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.SpeechRecognizer::add__Recognized(System.EventHandler`1<Microsoft.CognitiveServices.Speech.SpeechRecognitionEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpeechRecognizer_add__Recognized_mD50B625785C24BEBFF41F06CEB5D10434F934B83 (SpeechRecognizer_t949CB7F9294C8FD93325B16A1791A28325C2203B* __this, EventHandler_1_tFE5F3A49257B61DC2A2C46D8D8C0CE7A76F99979* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tFE5F3A49257B61DC2A2C46D8D8C0CE7A76F99979_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_tFE5F3A49257B61DC2A2C46D8D8C0CE7A76F99979* V_0 = NULL;
	EventHandler_1_tFE5F3A49257B61DC2A2C46D8D8C0CE7A76F99979* V_1 = NULL;
	EventHandler_1_tFE5F3A49257B61DC2A2C46D8D8C0CE7A76F99979* V_2 = NULL;
	{
		EventHandler_1_tFE5F3A49257B61DC2A2C46D8D8C0CE7A76F99979* L_0 = __this->____Recognized_20;
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_tFE5F3A49257B61DC2A2C46D8D8C0CE7A76F99979* L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_tFE5F3A49257B61DC2A2C46D8D8C0CE7A76F99979* L_2 = V_1;
		EventHandler_1_tFE5F3A49257B61DC2A2C46D8D8C0CE7A76F99979* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m8B9D24CED35033C7FC56501DFE650F5CB7FF012C(L_2, L_3, NULL);
		V_2 = ((EventHandler_1_tFE5F3A49257B61DC2A2C46D8D8C0CE7A76F99979*)Castclass((RuntimeObject*)L_4, EventHandler_1_tFE5F3A49257B61DC2A2C46D8D8C0CE7A76F99979_il2cpp_TypeInfo_var));
		EventHandler_1_tFE5F3A49257B61DC2A2C46D8D8C0CE7A76F99979** L_5 = (&__this->____Recognized_20);
		EventHandler_1_tFE5F3A49257B61DC2A2C46D8D8C0CE7A76F99979* L_6 = V_2;
		EventHandler_1_tFE5F3A49257B61DC2A2C46D8D8C0CE7A76F99979* L_7 = V_1;
		EventHandler_1_tFE5F3A49257B61DC2A2C46D8D8C0CE7A76F99979* L_8;
		L_8 = InterlockedCompareExchangeImpl<EventHandler_1_tFE5F3A49257B61DC2A2C46D8D8C0CE7A76F99979*>(L_5, L_6, L_7);
		V_0 = L_8;
		EventHandler_1_tFE5F3A49257B61DC2A2C46D8D8C0CE7A76F99979* L_9 = V_0;
		EventHandler_1_tFE5F3A49257B61DC2A2C46D8D8C0CE7A76F99979* L_10 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_tFE5F3A49257B61DC2A2C46D8D8C0CE7A76F99979*)L_9) == ((RuntimeObject*)(EventHandler_1_tFE5F3A49257B61DC2A2C46D8D8C0CE7A76F99979*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.SpeechRecognizer::remove__Recognized(System.EventHandler`1<Microsoft.CognitiveServices.Speech.SpeechRecognitionEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpeechRecognizer_remove__Recognized_mD722671640B2B0B316AF08C40613843C781E17C0 (SpeechRecognizer_t949CB7F9294C8FD93325B16A1791A28325C2203B* __this, EventHandler_1_tFE5F3A49257B61DC2A2C46D8D8C0CE7A76F99979* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tFE5F3A49257B61DC2A2C46D8D8C0CE7A76F99979_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_tFE5F3A49257B61DC2A2C46D8D8C0CE7A76F99979* V_0 = NULL;
	EventHandler_1_tFE5F3A49257B61DC2A2C46D8D8C0CE7A76F99979* V_1 = NULL;
	EventHandler_1_tFE5F3A49257B61DC2A2C46D8D8C0CE7A76F99979* V_2 = NULL;
	{
		EventHandler_1_tFE5F3A49257B61DC2A2C46D8D8C0CE7A76F99979* L_0 = __this->____Recognized_20;
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_tFE5F3A49257B61DC2A2C46D8D8C0CE7A76F99979* L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_tFE5F3A49257B61DC2A2C46D8D8C0CE7A76F99979* L_2 = V_1;
		EventHandler_1_tFE5F3A49257B61DC2A2C46D8D8C0CE7A76F99979* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m40506877934EC1AD4ADAE57F5E97AF0BC0F96116(L_2, L_3, NULL);
		V_2 = ((EventHandler_1_tFE5F3A49257B61DC2A2C46D8D8C0CE7A76F99979*)Castclass((RuntimeObject*)L_4, EventHandler_1_tFE5F3A49257B61DC2A2C46D8D8C0CE7A76F99979_il2cpp_TypeInfo_var));
		EventHandler_1_tFE5F3A49257B61DC2A2C46D8D8C0CE7A76F99979** L_5 = (&__this->____Recognized_20);
		EventHandler_1_tFE5F3A49257B61DC2A2C46D8D8C0CE7A76F99979* L_6 = V_2;
		EventHandler_1_tFE5F3A49257B61DC2A2C46D8D8C0CE7A76F99979* L_7 = V_1;
		EventHandler_1_tFE5F3A49257B61DC2A2C46D8D8C0CE7A76F99979* L_8;
		L_8 = InterlockedCompareExchangeImpl<EventHandler_1_tFE5F3A49257B61DC2A2C46D8D8C0CE7A76F99979*>(L_5, L_6, L_7);
		V_0 = L_8;
		EventHandler_1_tFE5F3A49257B61DC2A2C46D8D8C0CE7A76F99979* L_9 = V_0;
		EventHandler_1_tFE5F3A49257B61DC2A2C46D8D8C0CE7A76F99979* L_10 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_tFE5F3A49257B61DC2A2C46D8D8C0CE7A76F99979*)L_9) == ((RuntimeObject*)(EventHandler_1_tFE5F3A49257B61DC2A2C46D8D8C0CE7A76F99979*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.SpeechRecognizer::add__Canceled(System.EventHandler`1<Microsoft.CognitiveServices.Speech.SpeechRecognitionCanceledEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpeechRecognizer_add__Canceled_mCCA4C9985A5482241673E5F9DFAF8669412BA14B (SpeechRecognizer_t949CB7F9294C8FD93325B16A1791A28325C2203B* __this, EventHandler_1_t8FB3884B878D3DEA670EAAD761B40C42B82E3F46* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_t8FB3884B878D3DEA670EAAD761B40C42B82E3F46_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_t8FB3884B878D3DEA670EAAD761B40C42B82E3F46* V_0 = NULL;
	EventHandler_1_t8FB3884B878D3DEA670EAAD761B40C42B82E3F46* V_1 = NULL;
	EventHandler_1_t8FB3884B878D3DEA670EAAD761B40C42B82E3F46* V_2 = NULL;
	{
		EventHandler_1_t8FB3884B878D3DEA670EAAD761B40C42B82E3F46* L_0 = __this->____Canceled_21;
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_t8FB3884B878D3DEA670EAAD761B40C42B82E3F46* L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_t8FB3884B878D3DEA670EAAD761B40C42B82E3F46* L_2 = V_1;
		EventHandler_1_t8FB3884B878D3DEA670EAAD761B40C42B82E3F46* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m8B9D24CED35033C7FC56501DFE650F5CB7FF012C(L_2, L_3, NULL);
		V_2 = ((EventHandler_1_t8FB3884B878D3DEA670EAAD761B40C42B82E3F46*)Castclass((RuntimeObject*)L_4, EventHandler_1_t8FB3884B878D3DEA670EAAD761B40C42B82E3F46_il2cpp_TypeInfo_var));
		EventHandler_1_t8FB3884B878D3DEA670EAAD761B40C42B82E3F46** L_5 = (&__this->____Canceled_21);
		EventHandler_1_t8FB3884B878D3DEA670EAAD761B40C42B82E3F46* L_6 = V_2;
		EventHandler_1_t8FB3884B878D3DEA670EAAD761B40C42B82E3F46* L_7 = V_1;
		EventHandler_1_t8FB3884B878D3DEA670EAAD761B40C42B82E3F46* L_8;
		L_8 = InterlockedCompareExchangeImpl<EventHandler_1_t8FB3884B878D3DEA670EAAD761B40C42B82E3F46*>(L_5, L_6, L_7);
		V_0 = L_8;
		EventHandler_1_t8FB3884B878D3DEA670EAAD761B40C42B82E3F46* L_9 = V_0;
		EventHandler_1_t8FB3884B878D3DEA670EAAD761B40C42B82E3F46* L_10 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_t8FB3884B878D3DEA670EAAD761B40C42B82E3F46*)L_9) == ((RuntimeObject*)(EventHandler_1_t8FB3884B878D3DEA670EAAD761B40C42B82E3F46*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.SpeechRecognizer::remove__Canceled(System.EventHandler`1<Microsoft.CognitiveServices.Speech.SpeechRecognitionCanceledEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpeechRecognizer_remove__Canceled_m7AA55C10EEAE710C0581D5B235852FB30D142CB9 (SpeechRecognizer_t949CB7F9294C8FD93325B16A1791A28325C2203B* __this, EventHandler_1_t8FB3884B878D3DEA670EAAD761B40C42B82E3F46* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_t8FB3884B878D3DEA670EAAD761B40C42B82E3F46_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_t8FB3884B878D3DEA670EAAD761B40C42B82E3F46* V_0 = NULL;
	EventHandler_1_t8FB3884B878D3DEA670EAAD761B40C42B82E3F46* V_1 = NULL;
	EventHandler_1_t8FB3884B878D3DEA670EAAD761B40C42B82E3F46* V_2 = NULL;
	{
		EventHandler_1_t8FB3884B878D3DEA670EAAD761B40C42B82E3F46* L_0 = __this->____Canceled_21;
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_t8FB3884B878D3DEA670EAAD761B40C42B82E3F46* L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_t8FB3884B878D3DEA670EAAD761B40C42B82E3F46* L_2 = V_1;
		EventHandler_1_t8FB3884B878D3DEA670EAAD761B40C42B82E3F46* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m40506877934EC1AD4ADAE57F5E97AF0BC0F96116(L_2, L_3, NULL);
		V_2 = ((EventHandler_1_t8FB3884B878D3DEA670EAAD761B40C42B82E3F46*)Castclass((RuntimeObject*)L_4, EventHandler_1_t8FB3884B878D3DEA670EAAD761B40C42B82E3F46_il2cpp_TypeInfo_var));
		EventHandler_1_t8FB3884B878D3DEA670EAAD761B40C42B82E3F46** L_5 = (&__this->____Canceled_21);
		EventHandler_1_t8FB3884B878D3DEA670EAAD761B40C42B82E3F46* L_6 = V_2;
		EventHandler_1_t8FB3884B878D3DEA670EAAD761B40C42B82E3F46* L_7 = V_1;
		EventHandler_1_t8FB3884B878D3DEA670EAAD761B40C42B82E3F46* L_8;
		L_8 = InterlockedCompareExchangeImpl<EventHandler_1_t8FB3884B878D3DEA670EAAD761B40C42B82E3F46*>(L_5, L_6, L_7);
		V_0 = L_8;
		EventHandler_1_t8FB3884B878D3DEA670EAAD761B40C42B82E3F46* L_9 = V_0;
		EventHandler_1_t8FB3884B878D3DEA670EAAD761B40C42B82E3F46* L_10 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_t8FB3884B878D3DEA670EAAD761B40C42B82E3F46*)L_9) == ((RuntimeObject*)(EventHandler_1_t8FB3884B878D3DEA670EAAD761B40C42B82E3F46*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.SpeechRecognizer::add_Recognizing(System.EventHandler`1<Microsoft.CognitiveServices.Speech.SpeechRecognitionEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpeechRecognizer_add_Recognizing_m889A7D105299CCC15B4C3D692703D12319E8AE2E (SpeechRecognizer_t949CB7F9294C8FD93325B16A1791A28325C2203B* __this, EventHandler_1_tFE5F3A49257B61DC2A2C46D8D8C0CE7A76F99979* ___value0, const RuntimeMethod* method) 
{
	{
		EventHandler_1_tFE5F3A49257B61DC2A2C46D8D8C0CE7A76F99979* L_0 = __this->____Recognizing_19;
		if (L_0)
		{
			goto IL_0029;
		}
	}
	{
		InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* L_1 = ((Recognizer_tCA087D63D8BDE21D877CECAAF536BDCCFE54729A*)__this)->___recoHandle_4;
		CallbackFunctionDelegate_tC745A2B557EE8241DF1F7ABD3BFC1C8F3A2E81AA* L_2 = __this->___recognizingCallbackDelegate_22;
		GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC L_3 = ((Recognizer_tCA087D63D8BDE21D877CECAAF536BDCCFE54729A*)__this)->___gch_14;
		intptr_t L_4;
		L_4 = GCHandle_ToIntPtr_m4895C6E6C93FD6CEE9867C8A32C9E06A5DE5C5DC(L_3, NULL);
		intptr_t L_5;
		L_5 = Recognizer_recognizer_recognizing_set_callback_mE5F4F2773A2E1F7F7960F065D7146F9BA9320B84(L_1, L_2, L_4, NULL);
		SpxExceptionThrower_ThrowIfFail_m80558DF4FFB9A961C7CCC15CD13AF53F5437BA21(L_5, NULL);
	}

IL_0029:
	{
		EventHandler_1_tFE5F3A49257B61DC2A2C46D8D8C0CE7A76F99979* L_6 = ___value0;
		SpeechRecognizer_add__Recognizing_m16447A0416973172AB4D0CBAF6A8FC554B1E9294(__this, L_6, NULL);
		return;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.SpeechRecognizer::remove_Recognizing(System.EventHandler`1<Microsoft.CognitiveServices.Speech.SpeechRecognitionEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpeechRecognizer_remove_Recognizing_mF69D0A164312B4697C2E10348F5AD94E4900032F (SpeechRecognizer_t949CB7F9294C8FD93325B16A1791A28325C2203B* __this, EventHandler_1_tFE5F3A49257B61DC2A2C46D8D8C0CE7A76F99979* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		EventHandler_1_tFE5F3A49257B61DC2A2C46D8D8C0CE7A76F99979* L_0 = ___value0;
		SpeechRecognizer_remove__Recognizing_m5C73B8CE847979E6475EAC3240E7357FCA1F3E5F(__this, L_0, NULL);
		EventHandler_1_tFE5F3A49257B61DC2A2C46D8D8C0CE7A76F99979* L_1 = __this->____Recognizing_19;
		if (L_1)
		{
			goto IL_0025;
		}
	}
	{
		InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* L_2 = ((Recognizer_tCA087D63D8BDE21D877CECAAF536BDCCFE54729A*)__this)->___recoHandle_4;
		intptr_t L_3;
		L_3 = Recognizer_recognizer_recognizing_set_callback_mE5F4F2773A2E1F7F7960F065D7146F9BA9320B84(L_2, (CallbackFunctionDelegate_tC745A2B557EE8241DF1F7ABD3BFC1C8F3A2E81AA*)NULL, (0), NULL);
		SpxExceptionThrower_LogErrorIfFail_mAD982B53E803B83F9B30CA838B8CDB1210FE1747(L_3, NULL);
	}

IL_0025:
	{
		return;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.SpeechRecognizer::add_Recognized(System.EventHandler`1<Microsoft.CognitiveServices.Speech.SpeechRecognitionEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpeechRecognizer_add_Recognized_mB6FFEF74D120F94577CEC4D793A63E77E571D3BE (SpeechRecognizer_t949CB7F9294C8FD93325B16A1791A28325C2203B* __this, EventHandler_1_tFE5F3A49257B61DC2A2C46D8D8C0CE7A76F99979* ___value0, const RuntimeMethod* method) 
{
	{
		EventHandler_1_tFE5F3A49257B61DC2A2C46D8D8C0CE7A76F99979* L_0 = __this->____Recognized_20;
		if (L_0)
		{
			goto IL_0029;
		}
	}
	{
		InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* L_1 = ((Recognizer_tCA087D63D8BDE21D877CECAAF536BDCCFE54729A*)__this)->___recoHandle_4;
		CallbackFunctionDelegate_tC745A2B557EE8241DF1F7ABD3BFC1C8F3A2E81AA* L_2 = __this->___recognizedCallbackDelegate_23;
		GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC L_3 = ((Recognizer_tCA087D63D8BDE21D877CECAAF536BDCCFE54729A*)__this)->___gch_14;
		intptr_t L_4;
		L_4 = GCHandle_ToIntPtr_m4895C6E6C93FD6CEE9867C8A32C9E06A5DE5C5DC(L_3, NULL);
		intptr_t L_5;
		L_5 = Recognizer_recognizer_recognized_set_callback_mEAB056E12958EBCB0B3AE4361560D8B496A5C831(L_1, L_2, L_4, NULL);
		SpxExceptionThrower_ThrowIfFail_m80558DF4FFB9A961C7CCC15CD13AF53F5437BA21(L_5, NULL);
	}

IL_0029:
	{
		EventHandler_1_tFE5F3A49257B61DC2A2C46D8D8C0CE7A76F99979* L_6 = ___value0;
		SpeechRecognizer_add__Recognized_mD50B625785C24BEBFF41F06CEB5D10434F934B83(__this, L_6, NULL);
		return;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.SpeechRecognizer::remove_Recognized(System.EventHandler`1<Microsoft.CognitiveServices.Speech.SpeechRecognitionEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpeechRecognizer_remove_Recognized_m1AC5A080571B5A7CD4032CFCC5334FF9129C6FFD (SpeechRecognizer_t949CB7F9294C8FD93325B16A1791A28325C2203B* __this, EventHandler_1_tFE5F3A49257B61DC2A2C46D8D8C0CE7A76F99979* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		EventHandler_1_tFE5F3A49257B61DC2A2C46D8D8C0CE7A76F99979* L_0 = ___value0;
		SpeechRecognizer_remove__Recognized_mD722671640B2B0B316AF08C40613843C781E17C0(__this, L_0, NULL);
		EventHandler_1_tFE5F3A49257B61DC2A2C46D8D8C0CE7A76F99979* L_1 = __this->____Recognized_20;
		if (L_1)
		{
			goto IL_0025;
		}
	}
	{
		InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* L_2 = ((Recognizer_tCA087D63D8BDE21D877CECAAF536BDCCFE54729A*)__this)->___recoHandle_4;
		intptr_t L_3;
		L_3 = Recognizer_recognizer_recognized_set_callback_mEAB056E12958EBCB0B3AE4361560D8B496A5C831(L_2, (CallbackFunctionDelegate_tC745A2B557EE8241DF1F7ABD3BFC1C8F3A2E81AA*)NULL, (0), NULL);
		SpxExceptionThrower_LogErrorIfFail_mAD982B53E803B83F9B30CA838B8CDB1210FE1747(L_3, NULL);
	}

IL_0025:
	{
		return;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.SpeechRecognizer::add_Canceled(System.EventHandler`1<Microsoft.CognitiveServices.Speech.SpeechRecognitionCanceledEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpeechRecognizer_add_Canceled_m714F909F5101C0292E0FA4814214E31F8AA6A216 (SpeechRecognizer_t949CB7F9294C8FD93325B16A1791A28325C2203B* __this, EventHandler_1_t8FB3884B878D3DEA670EAAD761B40C42B82E3F46* ___value0, const RuntimeMethod* method) 
{
	{
		EventHandler_1_t8FB3884B878D3DEA670EAAD761B40C42B82E3F46* L_0 = __this->____Canceled_21;
		if (L_0)
		{
			goto IL_0029;
		}
	}
	{
		InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* L_1 = ((Recognizer_tCA087D63D8BDE21D877CECAAF536BDCCFE54729A*)__this)->___recoHandle_4;
		CallbackFunctionDelegate_tC745A2B557EE8241DF1F7ABD3BFC1C8F3A2E81AA* L_2 = __this->___canceledCallbackDelegate_24;
		GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC L_3 = ((Recognizer_tCA087D63D8BDE21D877CECAAF536BDCCFE54729A*)__this)->___gch_14;
		intptr_t L_4;
		L_4 = GCHandle_ToIntPtr_m4895C6E6C93FD6CEE9867C8A32C9E06A5DE5C5DC(L_3, NULL);
		intptr_t L_5;
		L_5 = Recognizer_recognizer_canceled_set_callback_m12409EB36F1DF4917D9CB80C148DF8623C1E55CD(L_1, L_2, L_4, NULL);
		SpxExceptionThrower_ThrowIfFail_m80558DF4FFB9A961C7CCC15CD13AF53F5437BA21(L_5, NULL);
	}

IL_0029:
	{
		EventHandler_1_t8FB3884B878D3DEA670EAAD761B40C42B82E3F46* L_6 = ___value0;
		SpeechRecognizer_add__Canceled_mCCA4C9985A5482241673E5F9DFAF8669412BA14B(__this, L_6, NULL);
		return;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.SpeechRecognizer::remove_Canceled(System.EventHandler`1<Microsoft.CognitiveServices.Speech.SpeechRecognitionCanceledEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpeechRecognizer_remove_Canceled_m434BFE60418B882CEDA616FA1CADCD2F8C6DD962 (SpeechRecognizer_t949CB7F9294C8FD93325B16A1791A28325C2203B* __this, EventHandler_1_t8FB3884B878D3DEA670EAAD761B40C42B82E3F46* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		EventHandler_1_t8FB3884B878D3DEA670EAAD761B40C42B82E3F46* L_0 = ___value0;
		SpeechRecognizer_remove__Canceled_m7AA55C10EEAE710C0581D5B235852FB30D142CB9(__this, L_0, NULL);
		EventHandler_1_t8FB3884B878D3DEA670EAAD761B40C42B82E3F46* L_1 = __this->____Canceled_21;
		if (L_1)
		{
			goto IL_0025;
		}
	}
	{
		InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* L_2 = ((Recognizer_tCA087D63D8BDE21D877CECAAF536BDCCFE54729A*)__this)->___recoHandle_4;
		intptr_t L_3;
		L_3 = Recognizer_recognizer_canceled_set_callback_m12409EB36F1DF4917D9CB80C148DF8623C1E55CD(L_2, (CallbackFunctionDelegate_tC745A2B557EE8241DF1F7ABD3BFC1C8F3A2E81AA*)NULL, (0), NULL);
		SpxExceptionThrower_LogErrorIfFail_mAD982B53E803B83F9B30CA838B8CDB1210FE1747(L_3, NULL);
	}

IL_0025:
	{
		return;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.SpeechRecognizer::.ctor(Microsoft.CognitiveServices.Speech.SpeechConfig)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpeechRecognizer__ctor_m305BDA5F9788FBA4F444E31437F6C67589A11488 (SpeechRecognizer_t949CB7F9294C8FD93325B16A1791A28325C2203B* __this, SpeechConfig_tAE8FEC093B21AA957B784250CF237DE1C3760DEE* ___speechConfig0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GetRecognizerFromConfigDelegate_t17EEE1C5E4305DB57FCBE2C975DB62B9BA4B584D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SpxFactory_recognizer_create_speech_recognizer_from_config_mA2AA5F624FF8DE29D2444E8D8C197B8849BC5416_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		GetRecognizerFromConfigDelegate_t17EEE1C5E4305DB57FCBE2C975DB62B9BA4B584D* L_0 = (GetRecognizerFromConfigDelegate_t17EEE1C5E4305DB57FCBE2C975DB62B9BA4B584D*)il2cpp_codegen_object_new(GetRecognizerFromConfigDelegate_t17EEE1C5E4305DB57FCBE2C975DB62B9BA4B584D_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		GetRecognizerFromConfigDelegate__ctor_m8225A337DC771AF4368C036689A77F76D48D4567(L_0, NULL, (intptr_t)((void*)SpxFactory_recognizer_create_speech_recognizer_from_config_mA2AA5F624FF8DE29D2444E8D8C197B8849BC5416_RuntimeMethod_var), NULL);
		SpeechConfig_tAE8FEC093B21AA957B784250CF237DE1C3760DEE* L_1 = ___speechConfig0;
		InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* L_2;
		L_2 = Recognizer_FromConfig_m987A4CFBF642C006F1CCC60AE435E7C825B55F64(L_0, L_1, NULL);
		SpeechRecognizer__ctor_m8136931FE9EB168C0F793BDF081194CEED40BE0A(__this, L_2, NULL);
		return;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.SpeechRecognizer::.ctor(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpeechRecognizer__ctor_m8136931FE9EB168C0F793BDF081194CEED40BE0A (SpeechRecognizer_t949CB7F9294C8FD93325B16A1791A28325C2203B* __this, InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* ___recoHandle0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CallbackFunctionDelegate_tC745A2B557EE8241DF1F7ABD3BFC1C8F3A2E81AA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PropertyCollection_tD2FEDF489ECC1689767DEE33A0152F1FA719AA53_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SpeechRecognizer_FireEvent_Canceled_m2034F62D22C618A305A7E5E7DCB416439CDD3F6E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SpeechRecognizer_FireEvent_Recognized_m1C49575EF31FF9111D7CC4CC679D1582B525F886_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SpeechRecognizer_FireEvent_Recognizing_m5F41324B4925637FC1859240D793E0038ABE9EA4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7D62C11CCF10BDFC07ACE3D149248DE3F051849C);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* L_0 = ___recoHandle0;
		Recognizer__ctor_mB448C82F7106784983B2332E0C35FAC613A10A05(__this, L_0, NULL);
		InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* L_1 = ___recoHandle0;
		SpxExceptionThrower_ThrowIfNull_m5C9E05F3DEDEE273B1049A6052813A5870C4F223(L_1, _stringLiteral7D62C11CCF10BDFC07ACE3D149248DE3F051849C, NULL);
		CallbackFunctionDelegate_tC745A2B557EE8241DF1F7ABD3BFC1C8F3A2E81AA* L_2 = (CallbackFunctionDelegate_tC745A2B557EE8241DF1F7ABD3BFC1C8F3A2E81AA*)il2cpp_codegen_object_new(CallbackFunctionDelegate_tC745A2B557EE8241DF1F7ABD3BFC1C8F3A2E81AA_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		CallbackFunctionDelegate__ctor_m242A4949B6999B19FDCBCCB89CBBD60A2D8AB7A6(L_2, NULL, (intptr_t)((void*)SpeechRecognizer_FireEvent_Recognizing_m5F41324B4925637FC1859240D793E0038ABE9EA4_RuntimeMethod_var), NULL);
		__this->___recognizingCallbackDelegate_22 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___recognizingCallbackDelegate_22), (void*)L_2);
		CallbackFunctionDelegate_tC745A2B557EE8241DF1F7ABD3BFC1C8F3A2E81AA* L_3 = (CallbackFunctionDelegate_tC745A2B557EE8241DF1F7ABD3BFC1C8F3A2E81AA*)il2cpp_codegen_object_new(CallbackFunctionDelegate_tC745A2B557EE8241DF1F7ABD3BFC1C8F3A2E81AA_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		CallbackFunctionDelegate__ctor_m242A4949B6999B19FDCBCCB89CBBD60A2D8AB7A6(L_3, NULL, (intptr_t)((void*)SpeechRecognizer_FireEvent_Recognized_m1C49575EF31FF9111D7CC4CC679D1582B525F886_RuntimeMethod_var), NULL);
		__this->___recognizedCallbackDelegate_23 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___recognizedCallbackDelegate_23), (void*)L_3);
		CallbackFunctionDelegate_tC745A2B557EE8241DF1F7ABD3BFC1C8F3A2E81AA* L_4 = (CallbackFunctionDelegate_tC745A2B557EE8241DF1F7ABD3BFC1C8F3A2E81AA*)il2cpp_codegen_object_new(CallbackFunctionDelegate_tC745A2B557EE8241DF1F7ABD3BFC1C8F3A2E81AA_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		CallbackFunctionDelegate__ctor_m242A4949B6999B19FDCBCCB89CBBD60A2D8AB7A6(L_4, NULL, (intptr_t)((void*)SpeechRecognizer_FireEvent_Canceled_m2034F62D22C618A305A7E5E7DCB416439CDD3F6E_RuntimeMethod_var), NULL);
		__this->___canceledCallbackDelegate_24 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___canceledCallbackDelegate_24), (void*)L_4);
		V_0 = (0);
		InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* L_5 = ___recoHandle0;
		intptr_t L_6;
		L_6 = Recognizer_recognizer_get_property_bag_m4D30FE9EBED74424FCE805136396F8EDC8A81D17(L_5, (&V_0), NULL);
		SpxExceptionThrower_ThrowIfFail_m80558DF4FFB9A961C7CCC15CD13AF53F5437BA21(L_6, NULL);
		intptr_t L_7 = V_0;
		PropertyCollection_tD2FEDF489ECC1689767DEE33A0152F1FA719AA53* L_8 = (PropertyCollection_tD2FEDF489ECC1689767DEE33A0152F1FA719AA53*)il2cpp_codegen_object_new(PropertyCollection_tD2FEDF489ECC1689767DEE33A0152F1FA719AA53_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		PropertyCollection__ctor_m8F53EB9B9655888D9E2B7AEBB9460B49265618B7(L_8, L_7, NULL);
		SpeechRecognizer_set_Properties_mCEEEDD714A579195CF49B0F9E4609DFD1EE2C7FC_inline(__this, L_8, NULL);
		return;
	}
}
// Microsoft.CognitiveServices.Speech.PropertyCollection Microsoft.CognitiveServices.Speech.SpeechRecognizer::get_Properties()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PropertyCollection_tD2FEDF489ECC1689767DEE33A0152F1FA719AA53* SpeechRecognizer_get_Properties_m1C0886BAAE462E98012C7EF3CED1E0314E341024 (SpeechRecognizer_t949CB7F9294C8FD93325B16A1791A28325C2203B* __this, const RuntimeMethod* method) 
{
	{
		PropertyCollection_tD2FEDF489ECC1689767DEE33A0152F1FA719AA53* L_0 = __this->___U3CPropertiesU3Ek__BackingField_25;
		return L_0;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.SpeechRecognizer::set_Properties(Microsoft.CognitiveServices.Speech.PropertyCollection)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpeechRecognizer_set_Properties_mCEEEDD714A579195CF49B0F9E4609DFD1EE2C7FC (SpeechRecognizer_t949CB7F9294C8FD93325B16A1791A28325C2203B* __this, PropertyCollection_tD2FEDF489ECC1689767DEE33A0152F1FA719AA53* ___value0, const RuntimeMethod* method) 
{
	{
		PropertyCollection_tD2FEDF489ECC1689767DEE33A0152F1FA719AA53* L_0 = ___value0;
		__this->___U3CPropertiesU3Ek__BackingField_25 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CPropertiesU3Ek__BackingField_25), (void*)L_0);
		return;
	}
}
// System.Threading.Tasks.Task Microsoft.CognitiveServices.Speech.SpeechRecognizer::StartContinuousRecognitionAsync()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* SpeechRecognizer_StartContinuousRecognitionAsync_m1A15C93FACB936A88F8CF23F44FDEE3DE801AE09 (SpeechRecognizer_t949CB7F9294C8FD93325B16A1791A28325C2203B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SpeechRecognizer_U3CStartContinuousRecognitionAsyncU3Eb__48_0_m04FE3F14272D20010FE93F0E93DBBDCE0CF49BA8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_0, __this, (intptr_t)((void*)SpeechRecognizer_U3CStartContinuousRecognitionAsyncU3Eb__48_0_m04FE3F14272D20010FE93F0E93DBBDCE0CF49BA8_RuntimeMethod_var), NULL);
		il2cpp_codegen_runtime_class_init_inline(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_1;
		L_1 = Task_Run_mBD6EF33232D13F2183A43D0A526A220C4F0181B4(L_0, NULL);
		return L_1;
	}
}
// System.Threading.Tasks.Task Microsoft.CognitiveServices.Speech.SpeechRecognizer::StopContinuousRecognitionAsync()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* SpeechRecognizer_StopContinuousRecognitionAsync_m470900781885522C896DF9884EDBCFB8990B5864 (SpeechRecognizer_t949CB7F9294C8FD93325B16A1791A28325C2203B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SpeechRecognizer_U3CStopContinuousRecognitionAsyncU3Eb__49_0_m35203AF7CC7FE3FA3E39B1F7B184E700F4A22B65_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_0, __this, (intptr_t)((void*)SpeechRecognizer_U3CStopContinuousRecognitionAsyncU3Eb__49_0_m35203AF7CC7FE3FA3E39B1F7B184E700F4A22B65_RuntimeMethod_var), NULL);
		il2cpp_codegen_runtime_class_init_inline(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_1;
		L_1 = Task_Run_mBD6EF33232D13F2183A43D0A526A220C4F0181B4(L_0, NULL);
		return L_1;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.SpeechRecognizer::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpeechRecognizer_Finalize_m0DFC88D31A9612EB8E79AEFC3CAEACEDDF014C50 (SpeechRecognizer_t949CB7F9294C8FD93325B16A1791A28325C2203B* __this, const RuntimeMethod* method) 
{
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0012:
			{// begin finally (depth: 1)
				Recognizer_Finalize_m65C041518559BC7332B58EC3BD23603D6FAEA7F5(__this, NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			il2cpp_codegen_memory_barrier();
			((Recognizer_tCA087D63D8BDE21D877CECAAF536BDCCFE54729A*)__this)->___isDisposing_16 = (bool)1;
			VirtualActionInvoker1< bool >::Invoke(5 /* System.Void Microsoft.CognitiveServices.Speech.Recognizer::Dispose(System.Boolean) */, __this, (bool)0);
			goto IL_0019;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0019:
	{
		return;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.SpeechRecognizer::Dispose(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpeechRecognizer_Dispose_mC62D82CBFB64A864B774FD0D2E3067C1428B7999 (SpeechRecognizer_t949CB7F9294C8FD93325B16A1791A28325C2203B* __this, bool ___disposing0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* G_B7_0 = NULL;
	InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* G_B6_0 = NULL;
	PropertyCollection_tD2FEDF489ECC1689767DEE33A0152F1FA719AA53* G_B10_0 = NULL;
	PropertyCollection_tD2FEDF489ECC1689767DEE33A0152F1FA719AA53* G_B9_0 = NULL;
	{
		bool L_0 = ((Recognizer_tCA087D63D8BDE21D877CECAAF536BDCCFE54729A*)__this)->___disposed_15;
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
		InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* L_1 = ((Recognizer_tCA087D63D8BDE21D877CECAAF536BDCCFE54729A*)__this)->___recoHandle_4;
		if (!L_1)
		{
			goto IL_00b0;
		}
	}
	{
		InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* L_2 = ((Recognizer_tCA087D63D8BDE21D877CECAAF536BDCCFE54729A*)__this)->___recoHandle_4;
		intptr_t L_3;
		L_3 = Recognizer_recognizer_recognizing_set_callback_mE5F4F2773A2E1F7F7960F065D7146F9BA9320B84(L_2, (CallbackFunctionDelegate_tC745A2B557EE8241DF1F7ABD3BFC1C8F3A2E81AA*)NULL, (0), NULL);
		SpxExceptionThrower_LogErrorIfFail_mAD982B53E803B83F9B30CA838B8CDB1210FE1747(L_3, NULL);
		InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* L_4 = ((Recognizer_tCA087D63D8BDE21D877CECAAF536BDCCFE54729A*)__this)->___recoHandle_4;
		intptr_t L_5;
		L_5 = Recognizer_recognizer_recognized_set_callback_mEAB056E12958EBCB0B3AE4361560D8B496A5C831(L_4, (CallbackFunctionDelegate_tC745A2B557EE8241DF1F7ABD3BFC1C8F3A2E81AA*)NULL, (0), NULL);
		SpxExceptionThrower_LogErrorIfFail_mAD982B53E803B83F9B30CA838B8CDB1210FE1747(L_5, NULL);
		InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* L_6 = ((Recognizer_tCA087D63D8BDE21D877CECAAF536BDCCFE54729A*)__this)->___recoHandle_4;
		intptr_t L_7;
		L_7 = Recognizer_recognizer_canceled_set_callback_m12409EB36F1DF4917D9CB80C148DF8623C1E55CD(L_6, (CallbackFunctionDelegate_tC745A2B557EE8241DF1F7ABD3BFC1C8F3A2E81AA*)NULL, (0), NULL);
		SpxExceptionThrower_LogErrorIfFail_mAD982B53E803B83F9B30CA838B8CDB1210FE1747(L_7, NULL);
		InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* L_8 = ((Recognizer_tCA087D63D8BDE21D877CECAAF536BDCCFE54729A*)__this)->___recoHandle_4;
		intptr_t L_9;
		L_9 = Recognizer_recognizer_session_started_set_callback_mC6D2C10D6BAC95F8F7CB9C37E2015F99C54C800D(L_8, (CallbackFunctionDelegate_tC745A2B557EE8241DF1F7ABD3BFC1C8F3A2E81AA*)NULL, (0), NULL);
		SpxExceptionThrower_LogErrorIfFail_mAD982B53E803B83F9B30CA838B8CDB1210FE1747(L_9, NULL);
		InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* L_10 = ((Recognizer_tCA087D63D8BDE21D877CECAAF536BDCCFE54729A*)__this)->___recoHandle_4;
		intptr_t L_11;
		L_11 = Recognizer_recognizer_session_stopped_set_callback_mBED30C2B5B024A07E3E927F9913FF1910123184E(L_10, (CallbackFunctionDelegate_tC745A2B557EE8241DF1F7ABD3BFC1C8F3A2E81AA*)NULL, (0), NULL);
		SpxExceptionThrower_LogErrorIfFail_mAD982B53E803B83F9B30CA838B8CDB1210FE1747(L_11, NULL);
		InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* L_12 = ((Recognizer_tCA087D63D8BDE21D877CECAAF536BDCCFE54729A*)__this)->___recoHandle_4;
		intptr_t L_13;
		L_13 = Recognizer_recognizer_speech_start_detected_set_callback_mBA32FFE729A32C15079566B581EEF67EB701C41B(L_12, (CallbackFunctionDelegate_tC745A2B557EE8241DF1F7ABD3BFC1C8F3A2E81AA*)NULL, (0), NULL);
		SpxExceptionThrower_LogErrorIfFail_mAD982B53E803B83F9B30CA838B8CDB1210FE1747(L_13, NULL);
		InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* L_14 = ((Recognizer_tCA087D63D8BDE21D877CECAAF536BDCCFE54729A*)__this)->___recoHandle_4;
		intptr_t L_15;
		L_15 = Recognizer_recognizer_speech_end_detected_set_callback_mC09E537CCD4C6224A0301E8C90B827A599F37B9F(L_14, (CallbackFunctionDelegate_tC745A2B557EE8241DF1F7ABD3BFC1C8F3A2E81AA*)NULL, (0), NULL);
		SpxExceptionThrower_LogErrorIfFail_mAD982B53E803B83F9B30CA838B8CDB1210FE1747(L_15, NULL);
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
		InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* L_17 = ((Recognizer_tCA087D63D8BDE21D877CECAAF536BDCCFE54729A*)__this)->___recoHandle_4;
		InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* L_18 = L_17;
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
		SafeHandle_Dispose_m4FB5B8A7ED78B90757F1B570D4025F3BA26A39F3(G_B7_0, NULL);
	}

IL_00c4:
	{
		PropertyCollection_tD2FEDF489ECC1689767DEE33A0152F1FA719AA53* L_19;
		L_19 = SpeechRecognizer_get_Properties_m1C0886BAAE462E98012C7EF3CED1E0314E341024_inline(__this, NULL);
		PropertyCollection_tD2FEDF489ECC1689767DEE33A0152F1FA719AA53* L_20 = L_19;
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
		VirtualActionInvoker0::Invoke(4 /* System.Void Microsoft.CognitiveServices.Speech.PropertyCollection::Close() */, G_B10_0);
	}

IL_00d5:
	{
		__this->___recognizingCallbackDelegate_22 = (CallbackFunctionDelegate_tC745A2B557EE8241DF1F7ABD3BFC1C8F3A2E81AA*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___recognizingCallbackDelegate_22), (void*)(CallbackFunctionDelegate_tC745A2B557EE8241DF1F7ABD3BFC1C8F3A2E81AA*)NULL);
		__this->___recognizedCallbackDelegate_23 = (CallbackFunctionDelegate_tC745A2B557EE8241DF1F7ABD3BFC1C8F3A2E81AA*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___recognizedCallbackDelegate_23), (void*)(CallbackFunctionDelegate_tC745A2B557EE8241DF1F7ABD3BFC1C8F3A2E81AA*)NULL);
		__this->___canceledCallbackDelegate_24 = (CallbackFunctionDelegate_tC745A2B557EE8241DF1F7ABD3BFC1C8F3A2E81AA*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___canceledCallbackDelegate_24), (void*)(CallbackFunctionDelegate_tC745A2B557EE8241DF1F7ABD3BFC1C8F3A2E81AA*)NULL);
		__this->___audioInputKeepAlive_26 = (AudioConfig_t97C98F0F764C263046543A14EE6C8CD02B57F4F3*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___audioInputKeepAlive_26), (void*)(AudioConfig_t97C98F0F764C263046543A14EE6C8CD02B57F4F3*)NULL);
		bool L_21 = ___disposing0;
		Recognizer_Dispose_m41B4467C6470F75AD4C81138860A38D98B55E31B(__this, L_21, NULL);
		return;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.SpeechRecognizer::FireEvent_Recognizing(System.IntPtr,System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpeechRecognizer_FireEvent_Recognizing_m5F41324B4925637FC1859240D793E0038ABE9EA4 (intptr_t ___hreco0, intptr_t ___hevent1, intptr_t ___pvContext2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InteropSafeHandle_GetObjectFromWeakHandle_TisSpeechRecognizer_t949CB7F9294C8FD93325B16A1791A28325C2203B_mCA8F08B5C7236A0FCB9E693A4EB4054FC439250C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SpeechRecognitionEventArgs_tA7F1649E47FF3239DACE11D5537ECC0AC23E94BD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SpeechRecognizer_t949CB7F9294C8FD93325B16A1791A28325C2203B* V_0 = NULL;
	SpeechRecognitionEventArgs_tA7F1649E47FF3239DACE11D5537ECC0AC23E94BD* V_1 = NULL;
	Exception_t* V_2 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	EventHandler_1_tFE5F3A49257B61DC2A2C46D8D8C0CE7A76F99979* G_B5_0 = NULL;
	EventHandler_1_tFE5F3A49257B61DC2A2C46D8D8C0CE7A76F99979* G_B4_0 = NULL;
	try
	{// begin try (depth: 1)
		{
			intptr_t L_0 = ___pvContext2;
			SpeechRecognizer_t949CB7F9294C8FD93325B16A1791A28325C2203B* L_1;
			L_1 = InteropSafeHandle_GetObjectFromWeakHandle_TisSpeechRecognizer_t949CB7F9294C8FD93325B16A1791A28325C2203B_mCA8F08B5C7236A0FCB9E693A4EB4054FC439250C(L_0, InteropSafeHandle_GetObjectFromWeakHandle_TisSpeechRecognizer_t949CB7F9294C8FD93325B16A1791A28325C2203B_mCA8F08B5C7236A0FCB9E693A4EB4054FC439250C_RuntimeMethod_var);
			V_0 = L_1;
			SpeechRecognizer_t949CB7F9294C8FD93325B16A1791A28325C2203B* L_2 = V_0;
			if (!L_2)
			{
				goto IL_0014_1;
			}
		}
		{
			SpeechRecognizer_t949CB7F9294C8FD93325B16A1791A28325C2203B* L_3 = V_0;
			NullCheck(L_3);
			bool L_4 = ((Recognizer_tCA087D63D8BDE21D877CECAAF536BDCCFE54729A*)L_3)->___isDisposing_16;
			il2cpp_codegen_memory_barrier();
			if (!L_4)
			{
				goto IL_0016_1;
			}
		}

IL_0014_1:
		{
			goto IL_0040;
		}

IL_0016_1:
		{
			intptr_t L_5 = ___hevent1;
			SpeechRecognitionEventArgs_tA7F1649E47FF3239DACE11D5537ECC0AC23E94BD* L_6 = (SpeechRecognitionEventArgs_tA7F1649E47FF3239DACE11D5537ECC0AC23E94BD*)il2cpp_codegen_object_new(SpeechRecognitionEventArgs_tA7F1649E47FF3239DACE11D5537ECC0AC23E94BD_il2cpp_TypeInfo_var);
			NullCheck(L_6);
			SpeechRecognitionEventArgs__ctor_mA12E8F0CEF640C514871ED1481C46B54CE92EE64(L_6, L_5, NULL);
			V_1 = L_6;
			SpeechRecognizer_t949CB7F9294C8FD93325B16A1791A28325C2203B* L_7 = V_0;
			NullCheck(L_7);
			EventHandler_1_tFE5F3A49257B61DC2A2C46D8D8C0CE7A76F99979* L_8 = L_7->____Recognizing_19;
			EventHandler_1_tFE5F3A49257B61DC2A2C46D8D8C0CE7A76F99979* L_9 = L_8;
			G_B4_0 = L_9;
			if (L_9)
			{
				G_B5_0 = L_9;
				goto IL_0029_1;
			}
		}
		{
			goto IL_0030_1;
		}

IL_0029_1:
		{
			SpeechRecognizer_t949CB7F9294C8FD93325B16A1791A28325C2203B* L_10 = V_0;
			SpeechRecognitionEventArgs_tA7F1649E47FF3239DACE11D5537ECC0AC23E94BD* L_11 = V_1;
			NullCheck(G_B5_0);
			EventHandler_1_Invoke_m81C94EA828C27A6F431E8F4B7679EAF346BCAB56_inline(G_B5_0, L_10, L_11, NULL);
		}

IL_0030_1:
		{
			goto IL_0040;
		}
	}// end try (depth: 1)
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
	{// begin catch(System.Exception)
		V_2 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		Exception_t* L_12 = V_2;
		NullCheck(L_12);
		String_t* L_13;
		L_13 = VirtualFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Exception::get_Message() */, L_12);
		SpxExceptionThrower_LogError_m37A2018CF9E9DCD40E8EE95F37097192A2DC184A(L_13, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0040;
	}// end catch (depth: 1)

IL_0040:
	{
		return;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.SpeechRecognizer::FireEvent_Recognized(System.IntPtr,System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpeechRecognizer_FireEvent_Recognized_m1C49575EF31FF9111D7CC4CC679D1582B525F886 (intptr_t ___hreco0, intptr_t ___hevent1, intptr_t ___pvContext2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InteropSafeHandle_GetObjectFromWeakHandle_TisSpeechRecognizer_t949CB7F9294C8FD93325B16A1791A28325C2203B_mCA8F08B5C7236A0FCB9E693A4EB4054FC439250C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SpeechRecognitionEventArgs_tA7F1649E47FF3239DACE11D5537ECC0AC23E94BD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SpeechRecognizer_t949CB7F9294C8FD93325B16A1791A28325C2203B* V_0 = NULL;
	SpeechRecognitionEventArgs_tA7F1649E47FF3239DACE11D5537ECC0AC23E94BD* V_1 = NULL;
	Exception_t* V_2 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	EventHandler_1_tFE5F3A49257B61DC2A2C46D8D8C0CE7A76F99979* G_B5_0 = NULL;
	EventHandler_1_tFE5F3A49257B61DC2A2C46D8D8C0CE7A76F99979* G_B4_0 = NULL;
	try
	{// begin try (depth: 1)
		{
			intptr_t L_0 = ___pvContext2;
			SpeechRecognizer_t949CB7F9294C8FD93325B16A1791A28325C2203B* L_1;
			L_1 = InteropSafeHandle_GetObjectFromWeakHandle_TisSpeechRecognizer_t949CB7F9294C8FD93325B16A1791A28325C2203B_mCA8F08B5C7236A0FCB9E693A4EB4054FC439250C(L_0, InteropSafeHandle_GetObjectFromWeakHandle_TisSpeechRecognizer_t949CB7F9294C8FD93325B16A1791A28325C2203B_mCA8F08B5C7236A0FCB9E693A4EB4054FC439250C_RuntimeMethod_var);
			V_0 = L_1;
			SpeechRecognizer_t949CB7F9294C8FD93325B16A1791A28325C2203B* L_2 = V_0;
			if (!L_2)
			{
				goto IL_0014_1;
			}
		}
		{
			SpeechRecognizer_t949CB7F9294C8FD93325B16A1791A28325C2203B* L_3 = V_0;
			NullCheck(L_3);
			bool L_4 = ((Recognizer_tCA087D63D8BDE21D877CECAAF536BDCCFE54729A*)L_3)->___isDisposing_16;
			il2cpp_codegen_memory_barrier();
			if (!L_4)
			{
				goto IL_0016_1;
			}
		}

IL_0014_1:
		{
			goto IL_0040;
		}

IL_0016_1:
		{
			intptr_t L_5 = ___hevent1;
			SpeechRecognitionEventArgs_tA7F1649E47FF3239DACE11D5537ECC0AC23E94BD* L_6 = (SpeechRecognitionEventArgs_tA7F1649E47FF3239DACE11D5537ECC0AC23E94BD*)il2cpp_codegen_object_new(SpeechRecognitionEventArgs_tA7F1649E47FF3239DACE11D5537ECC0AC23E94BD_il2cpp_TypeInfo_var);
			NullCheck(L_6);
			SpeechRecognitionEventArgs__ctor_mA12E8F0CEF640C514871ED1481C46B54CE92EE64(L_6, L_5, NULL);
			V_1 = L_6;
			SpeechRecognizer_t949CB7F9294C8FD93325B16A1791A28325C2203B* L_7 = V_0;
			NullCheck(L_7);
			EventHandler_1_tFE5F3A49257B61DC2A2C46D8D8C0CE7A76F99979* L_8 = L_7->____Recognized_20;
			EventHandler_1_tFE5F3A49257B61DC2A2C46D8D8C0CE7A76F99979* L_9 = L_8;
			G_B4_0 = L_9;
			if (L_9)
			{
				G_B5_0 = L_9;
				goto IL_0029_1;
			}
		}
		{
			goto IL_0030_1;
		}

IL_0029_1:
		{
			SpeechRecognizer_t949CB7F9294C8FD93325B16A1791A28325C2203B* L_10 = V_0;
			SpeechRecognitionEventArgs_tA7F1649E47FF3239DACE11D5537ECC0AC23E94BD* L_11 = V_1;
			NullCheck(G_B5_0);
			EventHandler_1_Invoke_m81C94EA828C27A6F431E8F4B7679EAF346BCAB56_inline(G_B5_0, L_10, L_11, NULL);
		}

IL_0030_1:
		{
			goto IL_0040;
		}
	}// end try (depth: 1)
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
	{// begin catch(System.Exception)
		V_2 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		Exception_t* L_12 = V_2;
		NullCheck(L_12);
		String_t* L_13;
		L_13 = VirtualFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Exception::get_Message() */, L_12);
		SpxExceptionThrower_LogError_m37A2018CF9E9DCD40E8EE95F37097192A2DC184A(L_13, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0040;
	}// end catch (depth: 1)

IL_0040:
	{
		return;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.SpeechRecognizer::FireEvent_Canceled(System.IntPtr,System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpeechRecognizer_FireEvent_Canceled_m2034F62D22C618A305A7E5E7DCB416439CDD3F6E (intptr_t ___hreco0, intptr_t ___hevent1, intptr_t ___pvContext2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InteropSafeHandle_GetObjectFromWeakHandle_TisSpeechRecognizer_t949CB7F9294C8FD93325B16A1791A28325C2203B_mCA8F08B5C7236A0FCB9E693A4EB4054FC439250C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SpeechRecognitionCanceledEventArgs_t5FB6DBEE3C3E77AE97C05A03CE7CBC0BD387CA86_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SpeechRecognizer_t949CB7F9294C8FD93325B16A1791A28325C2203B* V_0 = NULL;
	SpeechRecognitionCanceledEventArgs_t5FB6DBEE3C3E77AE97C05A03CE7CBC0BD387CA86* V_1 = NULL;
	Exception_t* V_2 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	EventHandler_1_t8FB3884B878D3DEA670EAAD761B40C42B82E3F46* G_B5_0 = NULL;
	EventHandler_1_t8FB3884B878D3DEA670EAAD761B40C42B82E3F46* G_B4_0 = NULL;
	try
	{// begin try (depth: 1)
		{
			intptr_t L_0 = ___pvContext2;
			SpeechRecognizer_t949CB7F9294C8FD93325B16A1791A28325C2203B* L_1;
			L_1 = InteropSafeHandle_GetObjectFromWeakHandle_TisSpeechRecognizer_t949CB7F9294C8FD93325B16A1791A28325C2203B_mCA8F08B5C7236A0FCB9E693A4EB4054FC439250C(L_0, InteropSafeHandle_GetObjectFromWeakHandle_TisSpeechRecognizer_t949CB7F9294C8FD93325B16A1791A28325C2203B_mCA8F08B5C7236A0FCB9E693A4EB4054FC439250C_RuntimeMethod_var);
			V_0 = L_1;
			SpeechRecognizer_t949CB7F9294C8FD93325B16A1791A28325C2203B* L_2 = V_0;
			if (!L_2)
			{
				goto IL_0014_1;
			}
		}
		{
			SpeechRecognizer_t949CB7F9294C8FD93325B16A1791A28325C2203B* L_3 = V_0;
			NullCheck(L_3);
			bool L_4 = ((Recognizer_tCA087D63D8BDE21D877CECAAF536BDCCFE54729A*)L_3)->___isDisposing_16;
			il2cpp_codegen_memory_barrier();
			if (!L_4)
			{
				goto IL_0016_1;
			}
		}

IL_0014_1:
		{
			goto IL_0040;
		}

IL_0016_1:
		{
			intptr_t L_5 = ___hevent1;
			SpeechRecognitionCanceledEventArgs_t5FB6DBEE3C3E77AE97C05A03CE7CBC0BD387CA86* L_6 = (SpeechRecognitionCanceledEventArgs_t5FB6DBEE3C3E77AE97C05A03CE7CBC0BD387CA86*)il2cpp_codegen_object_new(SpeechRecognitionCanceledEventArgs_t5FB6DBEE3C3E77AE97C05A03CE7CBC0BD387CA86_il2cpp_TypeInfo_var);
			NullCheck(L_6);
			SpeechRecognitionCanceledEventArgs__ctor_mE27E61BE7835AF73A8C25DD3FA2205632C9DC107(L_6, L_5, NULL);
			V_1 = L_6;
			SpeechRecognizer_t949CB7F9294C8FD93325B16A1791A28325C2203B* L_7 = V_0;
			NullCheck(L_7);
			EventHandler_1_t8FB3884B878D3DEA670EAAD761B40C42B82E3F46* L_8 = L_7->____Canceled_21;
			EventHandler_1_t8FB3884B878D3DEA670EAAD761B40C42B82E3F46* L_9 = L_8;
			G_B4_0 = L_9;
			if (L_9)
			{
				G_B5_0 = L_9;
				goto IL_0029_1;
			}
		}
		{
			goto IL_0030_1;
		}

IL_0029_1:
		{
			SpeechRecognizer_t949CB7F9294C8FD93325B16A1791A28325C2203B* L_10 = V_0;
			SpeechRecognitionCanceledEventArgs_t5FB6DBEE3C3E77AE97C05A03CE7CBC0BD387CA86* L_11 = V_1;
			NullCheck(G_B5_0);
			EventHandler_1_Invoke_mBEDD561ECE0E8BE4C5E4D2C38542F5EA87F2483A_inline(G_B5_0, L_10, L_11, NULL);
		}

IL_0030_1:
		{
			goto IL_0040;
		}
	}// end try (depth: 1)
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
	{// begin catch(System.Exception)
		V_2 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		Exception_t* L_12 = V_2;
		NullCheck(L_12);
		String_t* L_13;
		L_13 = VirtualFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Exception::get_Message() */, L_12);
		SpxExceptionThrower_LogError_m37A2018CF9E9DCD40E8EE95F37097192A2DC184A(L_13, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0040;
	}// end catch (depth: 1)

IL_0040:
	{
		return;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.SpeechRecognizer::<StartContinuousRecognitionAsync>b__48_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpeechRecognizer_U3CStartContinuousRecognitionAsyncU3Eb__48_0_m04FE3F14272D20010FE93F0E93DBBDCE0CF49BA8 (SpeechRecognizer_t949CB7F9294C8FD93325B16A1791A28325C2203B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Recognizer_StartContinuousRecognition_mB8E850543B3369010BFDC121ADC45B7F4D3EB0C2_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_0, __this, (intptr_t)((void*)Recognizer_StartContinuousRecognition_mB8E850543B3369010BFDC121ADC45B7F4D3EB0C2_RuntimeMethod_var), NULL);
		Recognizer_DoAsyncRecognitionAction_m83046B03472BABA6160D5C56198373502725FE84(__this, L_0, NULL);
		return;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.SpeechRecognizer::<StopContinuousRecognitionAsync>b__49_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpeechRecognizer_U3CStopContinuousRecognitionAsyncU3Eb__49_0_m35203AF7CC7FE3FA3E39B1F7B184E700F4A22B65 (SpeechRecognizer_t949CB7F9294C8FD93325B16A1791A28325C2203B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Recognizer_StopContinuousRecognition_mAB43FB36FA7F893031EE6EF33D7E980474FAE6D8_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_0, __this, (intptr_t)((void*)Recognizer_StopContinuousRecognition_mAB43FB36FA7F893031EE6EF33D7E980474FAE6D8_RuntimeMethod_var), NULL);
		Recognizer_DoAsyncRecognitionAction_m83046B03472BABA6160D5C56198373502725FE84(__this, L_0, NULL);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpeechTranslationConfig__ctor_m49EEA16B549465C7EB65801FC0687EA30E6F7D5E (SpeechTranslationConfig_t1EEE80E7A3DA15D83DEBF70B9B811498B739CE8B* __this, intptr_t ___configPtr0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		__this->___targetLanguages_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___targetLanguages_2), (void*)L_0);
		intptr_t L_1 = ___configPtr0;
		SpeechConfig__ctor_m586768B4614A1778822601DF07F0319758E1BBE9(__this, L_1, NULL);
		return;
	}
}
// Microsoft.CognitiveServices.Speech.SpeechTranslationConfig Microsoft.CognitiveServices.Speech.SpeechTranslationConfig::FromSubscription(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SpeechTranslationConfig_t1EEE80E7A3DA15D83DEBF70B9B811498B739CE8B* SpeechTranslationConfig_FromSubscription_m06C876CA2EAFCCA6CD32E91C95EFED8C6711305F (String_t* ___subscriptionKey0, String_t* ___region1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SpeechTranslationConfig_t1EEE80E7A3DA15D83DEBF70B9B811498B739CE8B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		V_0 = (0);
		String_t* L_0 = ___subscriptionKey0;
		String_t* L_1 = ___region1;
		intptr_t L_2;
		L_2 = SpeechTranslationConfig_speech_translation_config_from_subscription_mE64E8DB2A53A0CC70C6D8CAC467A39451949F1A4((&V_0), L_0, L_1, NULL);
		SpxExceptionThrower_ThrowIfFail_m80558DF4FFB9A961C7CCC15CD13AF53F5437BA21(L_2, NULL);
		intptr_t L_3 = V_0;
		SpeechTranslationConfig_t1EEE80E7A3DA15D83DEBF70B9B811498B739CE8B* L_4 = (SpeechTranslationConfig_t1EEE80E7A3DA15D83DEBF70B9B811498B739CE8B*)il2cpp_codegen_object_new(SpeechTranslationConfig_t1EEE80E7A3DA15D83DEBF70B9B811498B739CE8B_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		SpeechTranslationConfig__ctor_m49EEA16B549465C7EB65801FC0687EA30E6F7D5E(L_4, L_3, NULL);
		return L_4;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.SpeechTranslationConfig::AddTargetLanguage(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpeechTranslationConfig_AddTargetLanguage_m3A3E70E5FC18C24A5BA78D4AA646AD9294550713 (SpeechTranslationConfig_t1EEE80E7A3DA15D83DEBF70B9B811498B739CE8B* __this, String_t* ___language0, const RuntimeMethod* method) 
{
	{
		InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* L_0 = ((SpeechConfig_tAE8FEC093B21AA957B784250CF237DE1C3760DEE*)__this)->___configHandle_0;
		String_t* L_1 = ___language0;
		intptr_t L_2;
		L_2 = SpeechTranslationConfig_speech_translation_config_add_target_language_m7CBDFA258DA86801344705139992591D7AF3A450(L_0, L_1, NULL);
		SpxExceptionThrower_ThrowIfFail_m80558DF4FFB9A961C7CCC15CD13AF53F5437BA21(L_2, NULL);
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
// System.Void Microsoft.CognitiveServices.Speech.Translation.TranslationRecognitionResult::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TranslationRecognitionResult__ctor_mEC410E2929DA5612330E8C4521CD1363E7105CA1 (TranslationRecognitionResult_tE95FF320EDD627570B9D1B3C710EB7925CC54D19* __this, intptr_t ___resultPtr0, const RuntimeMethod* method) 
{
	{
		intptr_t L_0 = ___resultPtr0;
		RecognitionResult__ctor_mF52685BDF0D0D81056CF4F2D7929B837D3E4504E(__this, L_0, NULL);
		TranslationRecognitionResult_GetTranslationTexts_m080C1A8E4A40D60797BC62D07B58E27AAB1A6687(__this, NULL);
		return;
	}
}
// System.Collections.Generic.IReadOnlyDictionary`2<System.String,System.String> Microsoft.CognitiveServices.Speech.Translation.TranslationRecognitionResult::get_Translations()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TranslationRecognitionResult_get_Translations_mF40040BB24857FB1E87A6ACAEE7901DA628709F3 (TranslationRecognitionResult_tE95FF320EDD627570B9D1B3C710EB7925CC54D19* __this, const RuntimeMethod* method) 
{
	{
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_0 = __this->___translationTextResultMap_6;
		return L_0;
	}
}
// System.String Microsoft.CognitiveServices.Speech.Translation.TranslationRecognitionResult::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* TranslationRecognitionResult_ToString_m8B3AEE6468E0C7285288A622C0F0CA53307F45C8 (TranslationRecognitionResult_tE95FF320EDD627570B9D1B3C710EB7925CC54D19* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_t3C6913E067AB1171D9894C79A396D8A8E90E311B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t174BFB804F1D416642CD11B72858B43316D8B26D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Key_m654BCCAE2F20CB11D8E8C2D2C886A0C8A13EB1C4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Value_m7345512A32CB4DCAA0643050B18DC8DCD71B927A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ResultReason_tC944C305A2A069DB2A7F5C6112F43FA8A4405A54_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral39F33B0FE4D2999B413004105B540E9BDC49D767);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral66B8240E15500AD983CC6249A0313DD49E22940E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral67E3003FE5B0C609EB2073B105C585694FED0280);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC9242117927E8C104F78807A56EFE624837EF5BB);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	KeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_runtime_class_init_inline(CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_0;
		L_0 = CultureInfo_get_InvariantCulture_m78DAB8CBE8766445310782B6E61FB7A9983AD425(NULL);
		String_t* L_1;
		L_1 = VirtualFuncInvoker0< String_t* >::Invoke(4 /* System.String Microsoft.CognitiveServices.Speech.RecognitionResult::get_ResultId() */, __this);
		int32_t L_2;
		L_2 = VirtualFuncInvoker0< int32_t >::Invoke(5 /* Microsoft.CognitiveServices.Speech.ResultReason Microsoft.CognitiveServices.Speech.RecognitionResult::get_Reason() */, __this);
		int32_t L_3 = L_2;
		RuntimeObject* L_4 = Box(ResultReason_tC944C305A2A069DB2A7F5C6112F43FA8A4405A54_il2cpp_TypeInfo_var, &L_3);
		String_t* L_5;
		L_5 = VirtualFuncInvoker0< String_t* >::Invoke(6 /* System.String Microsoft.CognitiveServices.Speech.RecognitionResult::get_Text() */, __this);
		String_t* L_6;
		L_6 = String_Format_m47B2846E44214E013BF3069B0F9015AD223FF16E(L_0, _stringLiteral66B8240E15500AD983CC6249A0313DD49E22940E, L_1, L_4, L_5, NULL);
		V_0 = L_6;
		RuntimeObject* L_7;
		L_7 = TranslationRecognitionResult_get_Translations_mF40040BB24857FB1E87A6ACAEE7901DA628709F3_inline(__this, NULL);
		NullCheck(L_7);
		RuntimeObject* L_8;
		L_8 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.String,System.String>>::GetEnumerator() */, IEnumerable_1_t3C6913E067AB1171D9894C79A396D8A8E90E311B_il2cpp_TypeInfo_var, L_7);
		V_1 = L_8;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0082:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_9 = V_1;
					if (!L_9)
					{
						goto IL_008b;
					}
				}
				{
					RuntimeObject* L_10 = V_1;
					NullCheck(L_10);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_10);
				}

IL_008b:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0078_1;
			}

IL_0035_1:
			{
				RuntimeObject* L_11 = V_1;
				NullCheck(L_11);
				KeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A L_12;
				L_12 = InterfaceFuncInvoker0< KeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.String>>::get_Current() */, IEnumerator_1_t174BFB804F1D416642CD11B72858B43316D8B26D_il2cpp_TypeInfo_var, L_11);
				V_2 = L_12;
				StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_13 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)6);
				StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_14 = L_13;
				String_t* L_15 = V_0;
				NullCheck(L_14);
				ArrayElementTypeCheck (L_14, L_15);
				(L_14)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)L_15);
				StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_16 = L_14;
				NullCheck(L_16);
				ArrayElementTypeCheck (L_16, _stringLiteral67E3003FE5B0C609EB2073B105C585694FED0280);
				(L_16)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteral67E3003FE5B0C609EB2073B105C585694FED0280);
				StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_17 = L_16;
				String_t* L_18;
				L_18 = KeyValuePair_2_get_Key_m654BCCAE2F20CB11D8E8C2D2C886A0C8A13EB1C4_inline((&V_2), KeyValuePair_2_get_Key_m654BCCAE2F20CB11D8E8C2D2C886A0C8A13EB1C4_RuntimeMethod_var);
				NullCheck(L_17);
				ArrayElementTypeCheck (L_17, L_18);
				(L_17)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)L_18);
				StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_19 = L_17;
				NullCheck(L_19);
				ArrayElementTypeCheck (L_19, _stringLiteral39F33B0FE4D2999B413004105B540E9BDC49D767);
				(L_19)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)_stringLiteral39F33B0FE4D2999B413004105B540E9BDC49D767);
				StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_20 = L_19;
				String_t* L_21;
				L_21 = KeyValuePair_2_get_Value_m7345512A32CB4DCAA0643050B18DC8DCD71B927A_inline((&V_2), KeyValuePair_2_get_Value_m7345512A32CB4DCAA0643050B18DC8DCD71B927A_RuntimeMethod_var);
				NullCheck(L_20);
				ArrayElementTypeCheck (L_20, L_21);
				(L_20)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)L_21);
				StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_22 = L_20;
				NullCheck(L_22);
				ArrayElementTypeCheck (L_22, _stringLiteralC9242117927E8C104F78807A56EFE624837EF5BB);
				(L_22)->SetAt(static_cast<il2cpp_array_size_t>(5), (String_t*)_stringLiteralC9242117927E8C104F78807A56EFE624837EF5BB);
				String_t* L_23;
				L_23 = String_Concat_m6B0734B65813C8EA093D78E5C2D16534EB6FE8C0(L_22, NULL);
				V_0 = L_23;
			}

IL_0078_1:
			{
				RuntimeObject* L_24 = V_1;
				NullCheck(L_24);
				bool L_25;
				L_25 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_24);
				if (L_25)
				{
					goto IL_0035_1;
				}
			}
			{
				goto IL_008c;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_008c:
	{
		String_t* L_26 = V_0;
		return L_26;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.Translation.TranslationRecognitionResult::GetTranslationTexts()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TranslationRecognitionResult_GetTranslationTexts_m080C1A8E4A40D60797BC62D07B58E27AAB1A6687 (TranslationRecognitionResult_tE95FF320EDD627570B9D1B3C710EB7925CC54D19* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_m9BF625649E96E60C1509898A992A6447E351D1A2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SpxError_t1CCB290F01587A895B752386C959C6E0346321AD_il2cpp_TypeInfo_var);
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
	{
		InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* L_0 = ((RecognitionResult_t900FA7A9A16DB8B9FDE5395B1B773BDC63BE474F*)__this)->___resultHandle_4;
		SpxExceptionThrower_ThrowIfNull_m5C9E05F3DEDEE273B1049A6052813A5870C4F223(L_0, _stringLiteral5CB81742644CCEA2B53FE5D7E08731904CD84E08, NULL);
		InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* L_1 = ((RecognitionResult_t900FA7A9A16DB8B9FDE5395B1B773BDC63BE474F*)__this)->___resultHandle_4;
		bool L_2;
		L_2 = RecognitionResult_recognizer_result_handle_is_valid_mD2EAC27E610A8715E49F1626367788A9865CE82B(L_1, NULL);
		if (!L_2)
		{
			goto IL_0122;
		}
	}
	{
		V_0 = 0;
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_3 = (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83*)il2cpp_codegen_object_new(Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052(L_3, Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052_RuntimeMethod_var);
		__this->___translationTextResultMap_6 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___translationTextResultMap_6), (void*)L_3);
		InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* L_4 = ((RecognitionResult_t900FA7A9A16DB8B9FDE5395B1B773BDC63BE474F*)__this)->___resultHandle_4;
		intptr_t L_5;
		L_5 = RecognitionResult_translation_text_result_get_translation_text_buffer_header_mCDAF142354F6B22AF7E7A3D58665D260DB2A22C8(L_4, (0), (&V_0), NULL);
		V_1 = L_5;
		intptr_t L_6 = V_1;
		il2cpp_codegen_runtime_class_init_inline(SpxError_t1CCB290F01587A895B752386C959C6E0346321AD_il2cpp_TypeInfo_var);
		intptr_t L_7 = ((SpxError_t1CCB290F01587A895B752386C959C6E0346321AD_StaticFields*)il2cpp_codegen_static_fields_for(SpxError_t1CCB290F01587A895B752386C959C6E0346321AD_il2cpp_TypeInfo_var))->___BufferTooSmall_0;
		bool L_8;
		L_8 = IntPtr_op_Equality_m73759B51FE326460AC87A0E386480226EF2FABED(L_6, L_7, NULL);
		if (!L_8)
		{
			goto IL_0122;
		}
	}
	{
		int32_t L_9 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		intptr_t L_10;
		L_10 = Marshal_AllocHGlobal_m0187620AAB78B85416CE4C948B60B6A76CA84CAC(L_9, NULL);
		V_2 = L_10;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_011b:
			{// begin finally (depth: 1)
				intptr_t L_11 = V_2;
				il2cpp_codegen_runtime_class_init_inline(Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
				Marshal_FreeHGlobal_m691596E1E19CB74918F8FF871A05E4BE80748BCC(L_11, NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* L_12 = ((RecognitionResult_t900FA7A9A16DB8B9FDE5395B1B773BDC63BE474F*)__this)->___resultHandle_4;
				intptr_t L_13 = V_2;
				intptr_t L_14;
				L_14 = RecognitionResult_translation_text_result_get_translation_text_buffer_header_mCDAF142354F6B22AF7E7A3D58665D260DB2A22C8(L_12, L_13, (&V_0), NULL);
				SpxExceptionThrower_ThrowIfFail_m80558DF4FFB9A961C7CCC15CD13AF53F5437BA21(L_14, NULL);
				V_3 = 0;
				intptr_t L_15 = V_2;
				int32_t L_16 = V_3;
				il2cpp_codegen_runtime_class_init_inline(Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
				intptr_t L_17;
				L_17 = Marshal_ReadIntPtr_mFC19D4C04BF9018E1BF846CF5185EAF4B7A25D97(L_15, L_16, NULL);
				int32_t L_18;
				L_18 = IntPtr_op_Explicit_m358ACBBA288C56CC429F39D4D481669D0620B590(L_17, NULL);
				V_4 = L_18;
				int32_t L_19 = V_4;
				int32_t L_20 = V_0;
				il2cpp_codegen_runtime_class_init_inline(SpxError_t1CCB290F01587A895B752386C959C6E0346321AD_il2cpp_TypeInfo_var);
				intptr_t L_21 = ((SpxError_t1CCB290F01587A895B752386C959C6E0346321AD_StaticFields*)il2cpp_codegen_static_fields_for(SpxError_t1CCB290F01587A895B752386C959C6E0346321AD_il2cpp_TypeInfo_var))->___RuntimeError_1;
				V_8 = L_21;
				int32_t L_22;
				L_22 = IntPtr_ToInt32_mD53B5D2C73C7E4BE5ADEBC5D187EACC83D5BB292((&V_8), NULL);
				SpxExceptionThrower_ThrowIfFalse_m6FA4EA1F0EDB900A2F7371E78F573DDC0D735FAF((bool)((((int32_t)L_19) == ((int32_t)L_20))? 1 : 0), L_22, NULL);
				int32_t L_23 = V_3;
				int32_t L_24;
				L_24 = IntPtr_get_Size_mF11301B9A665D54B8DC89DC6AFE37728B91E6F10(NULL);
				V_3 = ((int32_t)il2cpp_codegen_add(L_23, L_24));
				intptr_t L_25 = V_2;
				int32_t L_26 = V_3;
				intptr_t L_27;
				L_27 = Marshal_ReadIntPtr_mFC19D4C04BF9018E1BF846CF5185EAF4B7A25D97(L_25, L_26, NULL);
				int32_t L_28;
				L_28 = IntPtr_op_Explicit_m358ACBBA288C56CC429F39D4D481669D0620B590(L_27, NULL);
				V_5 = L_28;
				int32_t L_29 = V_3;
				int32_t L_30;
				L_30 = IntPtr_get_Size_mF11301B9A665D54B8DC89DC6AFE37728B91E6F10(NULL);
				V_3 = ((int32_t)il2cpp_codegen_add(L_29, L_30));
				intptr_t L_31 = V_2;
				int32_t L_32 = V_3;
				intptr_t L_33;
				L_33 = Marshal_ReadIntPtr_mFC19D4C04BF9018E1BF846CF5185EAF4B7A25D97(L_31, L_32, NULL);
				V_6 = L_33;
				int32_t L_34 = V_3;
				int32_t L_35;
				L_35 = IntPtr_get_Size_mF11301B9A665D54B8DC89DC6AFE37728B91E6F10(NULL);
				V_3 = ((int32_t)il2cpp_codegen_add(L_34, L_35));
				intptr_t L_36 = V_2;
				int32_t L_37 = V_3;
				intptr_t L_38;
				L_38 = Marshal_ReadIntPtr_mFC19D4C04BF9018E1BF846CF5185EAF4B7A25D97(L_36, L_37, NULL);
				V_7 = L_38;
				V_9 = 0;
				goto IL_0113_1;
			}

IL_00cf_1:
			{
				int32_t L_39;
				L_39 = IntPtr_get_Size_mF11301B9A665D54B8DC89DC6AFE37728B91E6F10(NULL);
				int32_t L_40 = V_9;
				V_3 = ((int32_t)il2cpp_codegen_multiply(L_39, L_40));
				intptr_t L_41 = V_6;
				int32_t L_42 = V_3;
				il2cpp_codegen_runtime_class_init_inline(Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
				intptr_t L_43;
				L_43 = Marshal_ReadIntPtr_mFC19D4C04BF9018E1BF846CF5185EAF4B7A25D97(L_41, L_42, NULL);
				V_10 = L_43;
				intptr_t L_44 = V_10;
				String_t* L_45;
				L_45 = Utf8StringMarshaler_MarshalNativeToManaged_m102420BD438247158F21E76982168D6DD1EB7066(L_44, NULL);
				V_11 = L_45;
				intptr_t L_46 = V_7;
				int32_t L_47 = V_3;
				intptr_t L_48;
				L_48 = Marshal_ReadIntPtr_mFC19D4C04BF9018E1BF846CF5185EAF4B7A25D97(L_46, L_47, NULL);
				V_12 = L_48;
				intptr_t L_49 = V_12;
				String_t* L_50;
				L_50 = Utf8StringMarshaler_MarshalNativeToManaged_m102420BD438247158F21E76982168D6DD1EB7066(L_49, NULL);
				V_13 = L_50;
				Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_51 = __this->___translationTextResultMap_6;
				String_t* L_52 = V_11;
				String_t* L_53 = V_13;
				NullCheck(L_51);
				Dictionary_2_set_Item_m9BF625649E96E60C1509898A992A6447E351D1A2(L_51, L_52, L_53, Dictionary_2_set_Item_m9BF625649E96E60C1509898A992A6447E351D1A2_RuntimeMethod_var);
				int32_t L_54 = V_9;
				V_9 = ((int32_t)il2cpp_codegen_add(L_54, 1));
			}

IL_0113_1:
			{
				int32_t L_55 = V_9;
				int32_t L_56 = V_5;
				if ((((int32_t)L_55) < ((int32_t)L_56)))
				{
					goto IL_00cf_1;
				}
			}
			{
				goto IL_0122;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
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
extern "C" void CDECL ReversePInvokeWrapper_TranslationRecognizer_FireEvent_Recognizing_m9C07BDADD03B380A822B8C7C96CD90C471447E4C(intptr_t ___hreco0, intptr_t ___hevent1, intptr_t ___pvContext2)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	TranslationRecognizer_FireEvent_Recognizing_m9C07BDADD03B380A822B8C7C96CD90C471447E4C(___hreco0, ___hevent1, ___pvContext2, NULL);

}
extern "C" void CDECL ReversePInvokeWrapper_TranslationRecognizer_FireEvent_Recognized_m37BF6A7CAA9794E1DBFAFB10D294B7DB958B9836(intptr_t ___hreco0, intptr_t ___hevent1, intptr_t ___pvContext2)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	TranslationRecognizer_FireEvent_Recognized_m37BF6A7CAA9794E1DBFAFB10D294B7DB958B9836(___hreco0, ___hevent1, ___pvContext2, NULL);

}
extern "C" void CDECL ReversePInvokeWrapper_TranslationRecognizer_FireEvent_Canceled_m7875F1D6DA9BCA902CF05D571D55EF1055AB2E82(intptr_t ___hreco0, intptr_t ___hevent1, intptr_t ___pvContext2)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	TranslationRecognizer_FireEvent_Canceled_m7875F1D6DA9BCA902CF05D571D55EF1055AB2E82(___hreco0, ___hevent1, ___pvContext2, NULL);

}
extern "C" void CDECL ReversePInvokeWrapper_TranslationRecognizer_FireEvent_SynthesisResult_m6AE445D95E7487065CAB7589BDD9616335B69737(intptr_t ___hreco0, intptr_t ___hevent1, intptr_t ___pvContext2)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	TranslationRecognizer_FireEvent_SynthesisResult_m6AE445D95E7487065CAB7589BDD9616335B69737(___hreco0, ___hevent1, ___pvContext2, NULL);

}
// System.Void Microsoft.CognitiveServices.Speech.Translation.TranslationRecognizer::add__Recognizing(System.EventHandler`1<Microsoft.CognitiveServices.Speech.Translation.TranslationRecognitionEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TranslationRecognizer_add__Recognizing_m7F06A14055F7EA343EDB417019887749F95204BD (TranslationRecognizer_tAEE1F79841E087D238E7450755C96DD589BE0168* __this, EventHandler_1_t008E3F55CF18E8D623598A49DFBC452B2DD6E698* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_t008E3F55CF18E8D623598A49DFBC452B2DD6E698_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_t008E3F55CF18E8D623598A49DFBC452B2DD6E698* V_0 = NULL;
	EventHandler_1_t008E3F55CF18E8D623598A49DFBC452B2DD6E698* V_1 = NULL;
	EventHandler_1_t008E3F55CF18E8D623598A49DFBC452B2DD6E698* V_2 = NULL;
	{
		EventHandler_1_t008E3F55CF18E8D623598A49DFBC452B2DD6E698* L_0 = __this->____Recognizing_19;
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_t008E3F55CF18E8D623598A49DFBC452B2DD6E698* L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_t008E3F55CF18E8D623598A49DFBC452B2DD6E698* L_2 = V_1;
		EventHandler_1_t008E3F55CF18E8D623598A49DFBC452B2DD6E698* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m8B9D24CED35033C7FC56501DFE650F5CB7FF012C(L_2, L_3, NULL);
		V_2 = ((EventHandler_1_t008E3F55CF18E8D623598A49DFBC452B2DD6E698*)Castclass((RuntimeObject*)L_4, EventHandler_1_t008E3F55CF18E8D623598A49DFBC452B2DD6E698_il2cpp_TypeInfo_var));
		EventHandler_1_t008E3F55CF18E8D623598A49DFBC452B2DD6E698** L_5 = (&__this->____Recognizing_19);
		EventHandler_1_t008E3F55CF18E8D623598A49DFBC452B2DD6E698* L_6 = V_2;
		EventHandler_1_t008E3F55CF18E8D623598A49DFBC452B2DD6E698* L_7 = V_1;
		EventHandler_1_t008E3F55CF18E8D623598A49DFBC452B2DD6E698* L_8;
		L_8 = InterlockedCompareExchangeImpl<EventHandler_1_t008E3F55CF18E8D623598A49DFBC452B2DD6E698*>(L_5, L_6, L_7);
		V_0 = L_8;
		EventHandler_1_t008E3F55CF18E8D623598A49DFBC452B2DD6E698* L_9 = V_0;
		EventHandler_1_t008E3F55CF18E8D623598A49DFBC452B2DD6E698* L_10 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_t008E3F55CF18E8D623598A49DFBC452B2DD6E698*)L_9) == ((RuntimeObject*)(EventHandler_1_t008E3F55CF18E8D623598A49DFBC452B2DD6E698*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.Translation.TranslationRecognizer::remove__Recognizing(System.EventHandler`1<Microsoft.CognitiveServices.Speech.Translation.TranslationRecognitionEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TranslationRecognizer_remove__Recognizing_mDFCC6818686A988C4401D429A450539CDEAA1653 (TranslationRecognizer_tAEE1F79841E087D238E7450755C96DD589BE0168* __this, EventHandler_1_t008E3F55CF18E8D623598A49DFBC452B2DD6E698* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_t008E3F55CF18E8D623598A49DFBC452B2DD6E698_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_t008E3F55CF18E8D623598A49DFBC452B2DD6E698* V_0 = NULL;
	EventHandler_1_t008E3F55CF18E8D623598A49DFBC452B2DD6E698* V_1 = NULL;
	EventHandler_1_t008E3F55CF18E8D623598A49DFBC452B2DD6E698* V_2 = NULL;
	{
		EventHandler_1_t008E3F55CF18E8D623598A49DFBC452B2DD6E698* L_0 = __this->____Recognizing_19;
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_t008E3F55CF18E8D623598A49DFBC452B2DD6E698* L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_t008E3F55CF18E8D623598A49DFBC452B2DD6E698* L_2 = V_1;
		EventHandler_1_t008E3F55CF18E8D623598A49DFBC452B2DD6E698* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m40506877934EC1AD4ADAE57F5E97AF0BC0F96116(L_2, L_3, NULL);
		V_2 = ((EventHandler_1_t008E3F55CF18E8D623598A49DFBC452B2DD6E698*)Castclass((RuntimeObject*)L_4, EventHandler_1_t008E3F55CF18E8D623598A49DFBC452B2DD6E698_il2cpp_TypeInfo_var));
		EventHandler_1_t008E3F55CF18E8D623598A49DFBC452B2DD6E698** L_5 = (&__this->____Recognizing_19);
		EventHandler_1_t008E3F55CF18E8D623598A49DFBC452B2DD6E698* L_6 = V_2;
		EventHandler_1_t008E3F55CF18E8D623598A49DFBC452B2DD6E698* L_7 = V_1;
		EventHandler_1_t008E3F55CF18E8D623598A49DFBC452B2DD6E698* L_8;
		L_8 = InterlockedCompareExchangeImpl<EventHandler_1_t008E3F55CF18E8D623598A49DFBC452B2DD6E698*>(L_5, L_6, L_7);
		V_0 = L_8;
		EventHandler_1_t008E3F55CF18E8D623598A49DFBC452B2DD6E698* L_9 = V_0;
		EventHandler_1_t008E3F55CF18E8D623598A49DFBC452B2DD6E698* L_10 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_t008E3F55CF18E8D623598A49DFBC452B2DD6E698*)L_9) == ((RuntimeObject*)(EventHandler_1_t008E3F55CF18E8D623598A49DFBC452B2DD6E698*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.Translation.TranslationRecognizer::add__Recognized(System.EventHandler`1<Microsoft.CognitiveServices.Speech.Translation.TranslationRecognitionEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TranslationRecognizer_add__Recognized_mC948CE4C633F0B3989AB538E48CED770EAA2AB24 (TranslationRecognizer_tAEE1F79841E087D238E7450755C96DD589BE0168* __this, EventHandler_1_t008E3F55CF18E8D623598A49DFBC452B2DD6E698* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_t008E3F55CF18E8D623598A49DFBC452B2DD6E698_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_t008E3F55CF18E8D623598A49DFBC452B2DD6E698* V_0 = NULL;
	EventHandler_1_t008E3F55CF18E8D623598A49DFBC452B2DD6E698* V_1 = NULL;
	EventHandler_1_t008E3F55CF18E8D623598A49DFBC452B2DD6E698* V_2 = NULL;
	{
		EventHandler_1_t008E3F55CF18E8D623598A49DFBC452B2DD6E698* L_0 = __this->____Recognized_20;
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_t008E3F55CF18E8D623598A49DFBC452B2DD6E698* L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_t008E3F55CF18E8D623598A49DFBC452B2DD6E698* L_2 = V_1;
		EventHandler_1_t008E3F55CF18E8D623598A49DFBC452B2DD6E698* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m8B9D24CED35033C7FC56501DFE650F5CB7FF012C(L_2, L_3, NULL);
		V_2 = ((EventHandler_1_t008E3F55CF18E8D623598A49DFBC452B2DD6E698*)Castclass((RuntimeObject*)L_4, EventHandler_1_t008E3F55CF18E8D623598A49DFBC452B2DD6E698_il2cpp_TypeInfo_var));
		EventHandler_1_t008E3F55CF18E8D623598A49DFBC452B2DD6E698** L_5 = (&__this->____Recognized_20);
		EventHandler_1_t008E3F55CF18E8D623598A49DFBC452B2DD6E698* L_6 = V_2;
		EventHandler_1_t008E3F55CF18E8D623598A49DFBC452B2DD6E698* L_7 = V_1;
		EventHandler_1_t008E3F55CF18E8D623598A49DFBC452B2DD6E698* L_8;
		L_8 = InterlockedCompareExchangeImpl<EventHandler_1_t008E3F55CF18E8D623598A49DFBC452B2DD6E698*>(L_5, L_6, L_7);
		V_0 = L_8;
		EventHandler_1_t008E3F55CF18E8D623598A49DFBC452B2DD6E698* L_9 = V_0;
		EventHandler_1_t008E3F55CF18E8D623598A49DFBC452B2DD6E698* L_10 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_t008E3F55CF18E8D623598A49DFBC452B2DD6E698*)L_9) == ((RuntimeObject*)(EventHandler_1_t008E3F55CF18E8D623598A49DFBC452B2DD6E698*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.Translation.TranslationRecognizer::remove__Recognized(System.EventHandler`1<Microsoft.CognitiveServices.Speech.Translation.TranslationRecognitionEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TranslationRecognizer_remove__Recognized_mFA887E35EAAE84E06620A043A51B69403DDF9288 (TranslationRecognizer_tAEE1F79841E087D238E7450755C96DD589BE0168* __this, EventHandler_1_t008E3F55CF18E8D623598A49DFBC452B2DD6E698* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_t008E3F55CF18E8D623598A49DFBC452B2DD6E698_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_t008E3F55CF18E8D623598A49DFBC452B2DD6E698* V_0 = NULL;
	EventHandler_1_t008E3F55CF18E8D623598A49DFBC452B2DD6E698* V_1 = NULL;
	EventHandler_1_t008E3F55CF18E8D623598A49DFBC452B2DD6E698* V_2 = NULL;
	{
		EventHandler_1_t008E3F55CF18E8D623598A49DFBC452B2DD6E698* L_0 = __this->____Recognized_20;
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_t008E3F55CF18E8D623598A49DFBC452B2DD6E698* L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_t008E3F55CF18E8D623598A49DFBC452B2DD6E698* L_2 = V_1;
		EventHandler_1_t008E3F55CF18E8D623598A49DFBC452B2DD6E698* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m40506877934EC1AD4ADAE57F5E97AF0BC0F96116(L_2, L_3, NULL);
		V_2 = ((EventHandler_1_t008E3F55CF18E8D623598A49DFBC452B2DD6E698*)Castclass((RuntimeObject*)L_4, EventHandler_1_t008E3F55CF18E8D623598A49DFBC452B2DD6E698_il2cpp_TypeInfo_var));
		EventHandler_1_t008E3F55CF18E8D623598A49DFBC452B2DD6E698** L_5 = (&__this->____Recognized_20);
		EventHandler_1_t008E3F55CF18E8D623598A49DFBC452B2DD6E698* L_6 = V_2;
		EventHandler_1_t008E3F55CF18E8D623598A49DFBC452B2DD6E698* L_7 = V_1;
		EventHandler_1_t008E3F55CF18E8D623598A49DFBC452B2DD6E698* L_8;
		L_8 = InterlockedCompareExchangeImpl<EventHandler_1_t008E3F55CF18E8D623598A49DFBC452B2DD6E698*>(L_5, L_6, L_7);
		V_0 = L_8;
		EventHandler_1_t008E3F55CF18E8D623598A49DFBC452B2DD6E698* L_9 = V_0;
		EventHandler_1_t008E3F55CF18E8D623598A49DFBC452B2DD6E698* L_10 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_t008E3F55CF18E8D623598A49DFBC452B2DD6E698*)L_9) == ((RuntimeObject*)(EventHandler_1_t008E3F55CF18E8D623598A49DFBC452B2DD6E698*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.Translation.TranslationRecognizer::add__Canceled(System.EventHandler`1<Microsoft.CognitiveServices.Speech.Translation.TranslationRecognitionCanceledEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TranslationRecognizer_add__Canceled_mBC507ED133CE7C79ED21D94FCBDD56491F8DC04F (TranslationRecognizer_tAEE1F79841E087D238E7450755C96DD589BE0168* __this, EventHandler_1_t529E119B11382401540BF02D1C8026AC460279A8* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_t529E119B11382401540BF02D1C8026AC460279A8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_t529E119B11382401540BF02D1C8026AC460279A8* V_0 = NULL;
	EventHandler_1_t529E119B11382401540BF02D1C8026AC460279A8* V_1 = NULL;
	EventHandler_1_t529E119B11382401540BF02D1C8026AC460279A8* V_2 = NULL;
	{
		EventHandler_1_t529E119B11382401540BF02D1C8026AC460279A8* L_0 = __this->____Canceled_21;
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_t529E119B11382401540BF02D1C8026AC460279A8* L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_t529E119B11382401540BF02D1C8026AC460279A8* L_2 = V_1;
		EventHandler_1_t529E119B11382401540BF02D1C8026AC460279A8* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m8B9D24CED35033C7FC56501DFE650F5CB7FF012C(L_2, L_3, NULL);
		V_2 = ((EventHandler_1_t529E119B11382401540BF02D1C8026AC460279A8*)Castclass((RuntimeObject*)L_4, EventHandler_1_t529E119B11382401540BF02D1C8026AC460279A8_il2cpp_TypeInfo_var));
		EventHandler_1_t529E119B11382401540BF02D1C8026AC460279A8** L_5 = (&__this->____Canceled_21);
		EventHandler_1_t529E119B11382401540BF02D1C8026AC460279A8* L_6 = V_2;
		EventHandler_1_t529E119B11382401540BF02D1C8026AC460279A8* L_7 = V_1;
		EventHandler_1_t529E119B11382401540BF02D1C8026AC460279A8* L_8;
		L_8 = InterlockedCompareExchangeImpl<EventHandler_1_t529E119B11382401540BF02D1C8026AC460279A8*>(L_5, L_6, L_7);
		V_0 = L_8;
		EventHandler_1_t529E119B11382401540BF02D1C8026AC460279A8* L_9 = V_0;
		EventHandler_1_t529E119B11382401540BF02D1C8026AC460279A8* L_10 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_t529E119B11382401540BF02D1C8026AC460279A8*)L_9) == ((RuntimeObject*)(EventHandler_1_t529E119B11382401540BF02D1C8026AC460279A8*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.Translation.TranslationRecognizer::remove__Canceled(System.EventHandler`1<Microsoft.CognitiveServices.Speech.Translation.TranslationRecognitionCanceledEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TranslationRecognizer_remove__Canceled_m9764030E5C9EFF7B4C48AE21DD87E5BBC5E0640F (TranslationRecognizer_tAEE1F79841E087D238E7450755C96DD589BE0168* __this, EventHandler_1_t529E119B11382401540BF02D1C8026AC460279A8* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_t529E119B11382401540BF02D1C8026AC460279A8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_t529E119B11382401540BF02D1C8026AC460279A8* V_0 = NULL;
	EventHandler_1_t529E119B11382401540BF02D1C8026AC460279A8* V_1 = NULL;
	EventHandler_1_t529E119B11382401540BF02D1C8026AC460279A8* V_2 = NULL;
	{
		EventHandler_1_t529E119B11382401540BF02D1C8026AC460279A8* L_0 = __this->____Canceled_21;
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_t529E119B11382401540BF02D1C8026AC460279A8* L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_t529E119B11382401540BF02D1C8026AC460279A8* L_2 = V_1;
		EventHandler_1_t529E119B11382401540BF02D1C8026AC460279A8* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m40506877934EC1AD4ADAE57F5E97AF0BC0F96116(L_2, L_3, NULL);
		V_2 = ((EventHandler_1_t529E119B11382401540BF02D1C8026AC460279A8*)Castclass((RuntimeObject*)L_4, EventHandler_1_t529E119B11382401540BF02D1C8026AC460279A8_il2cpp_TypeInfo_var));
		EventHandler_1_t529E119B11382401540BF02D1C8026AC460279A8** L_5 = (&__this->____Canceled_21);
		EventHandler_1_t529E119B11382401540BF02D1C8026AC460279A8* L_6 = V_2;
		EventHandler_1_t529E119B11382401540BF02D1C8026AC460279A8* L_7 = V_1;
		EventHandler_1_t529E119B11382401540BF02D1C8026AC460279A8* L_8;
		L_8 = InterlockedCompareExchangeImpl<EventHandler_1_t529E119B11382401540BF02D1C8026AC460279A8*>(L_5, L_6, L_7);
		V_0 = L_8;
		EventHandler_1_t529E119B11382401540BF02D1C8026AC460279A8* L_9 = V_0;
		EventHandler_1_t529E119B11382401540BF02D1C8026AC460279A8* L_10 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_t529E119B11382401540BF02D1C8026AC460279A8*)L_9) == ((RuntimeObject*)(EventHandler_1_t529E119B11382401540BF02D1C8026AC460279A8*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.Translation.TranslationRecognizer::add_Recognizing(System.EventHandler`1<Microsoft.CognitiveServices.Speech.Translation.TranslationRecognitionEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TranslationRecognizer_add_Recognizing_m5BAB5839D879D81073F27CA53AE6CB8337885B76 (TranslationRecognizer_tAEE1F79841E087D238E7450755C96DD589BE0168* __this, EventHandler_1_t008E3F55CF18E8D623598A49DFBC452B2DD6E698* ___value0, const RuntimeMethod* method) 
{
	{
		EventHandler_1_t008E3F55CF18E8D623598A49DFBC452B2DD6E698* L_0 = __this->____Recognizing_19;
		if (L_0)
		{
			goto IL_0029;
		}
	}
	{
		InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* L_1 = ((Recognizer_tCA087D63D8BDE21D877CECAAF536BDCCFE54729A*)__this)->___recoHandle_4;
		CallbackFunctionDelegate_tC745A2B557EE8241DF1F7ABD3BFC1C8F3A2E81AA* L_2 = __this->___recognizingCallbackDelegate_24;
		GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC L_3 = ((Recognizer_tCA087D63D8BDE21D877CECAAF536BDCCFE54729A*)__this)->___gch_14;
		intptr_t L_4;
		L_4 = GCHandle_ToIntPtr_m4895C6E6C93FD6CEE9867C8A32C9E06A5DE5C5DC(L_3, NULL);
		intptr_t L_5;
		L_5 = Recognizer_recognizer_recognizing_set_callback_mE5F4F2773A2E1F7F7960F065D7146F9BA9320B84(L_1, L_2, L_4, NULL);
		SpxExceptionThrower_ThrowIfFail_m80558DF4FFB9A961C7CCC15CD13AF53F5437BA21(L_5, NULL);
	}

IL_0029:
	{
		EventHandler_1_t008E3F55CF18E8D623598A49DFBC452B2DD6E698* L_6 = ___value0;
		TranslationRecognizer_add__Recognizing_m7F06A14055F7EA343EDB417019887749F95204BD(__this, L_6, NULL);
		return;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.Translation.TranslationRecognizer::remove_Recognizing(System.EventHandler`1<Microsoft.CognitiveServices.Speech.Translation.TranslationRecognitionEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TranslationRecognizer_remove_Recognizing_m932338A39761F4AC1E5F2928F029A33922DE2183 (TranslationRecognizer_tAEE1F79841E087D238E7450755C96DD589BE0168* __this, EventHandler_1_t008E3F55CF18E8D623598A49DFBC452B2DD6E698* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		EventHandler_1_t008E3F55CF18E8D623598A49DFBC452B2DD6E698* L_0 = ___value0;
		TranslationRecognizer_remove__Recognizing_mDFCC6818686A988C4401D429A450539CDEAA1653(__this, L_0, NULL);
		EventHandler_1_t008E3F55CF18E8D623598A49DFBC452B2DD6E698* L_1 = __this->____Recognizing_19;
		if (L_1)
		{
			goto IL_0025;
		}
	}
	{
		InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* L_2 = ((Recognizer_tCA087D63D8BDE21D877CECAAF536BDCCFE54729A*)__this)->___recoHandle_4;
		intptr_t L_3;
		L_3 = Recognizer_recognizer_recognizing_set_callback_mE5F4F2773A2E1F7F7960F065D7146F9BA9320B84(L_2, (CallbackFunctionDelegate_tC745A2B557EE8241DF1F7ABD3BFC1C8F3A2E81AA*)NULL, (0), NULL);
		SpxExceptionThrower_LogErrorIfFail_mAD982B53E803B83F9B30CA838B8CDB1210FE1747(L_3, NULL);
	}

IL_0025:
	{
		return;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.Translation.TranslationRecognizer::add_Recognized(System.EventHandler`1<Microsoft.CognitiveServices.Speech.Translation.TranslationRecognitionEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TranslationRecognizer_add_Recognized_m1437E58C0813C018974685E579477BE1D1333BC9 (TranslationRecognizer_tAEE1F79841E087D238E7450755C96DD589BE0168* __this, EventHandler_1_t008E3F55CF18E8D623598A49DFBC452B2DD6E698* ___value0, const RuntimeMethod* method) 
{
	{
		EventHandler_1_t008E3F55CF18E8D623598A49DFBC452B2DD6E698* L_0 = __this->____Recognized_20;
		if (L_0)
		{
			goto IL_0029;
		}
	}
	{
		InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* L_1 = ((Recognizer_tCA087D63D8BDE21D877CECAAF536BDCCFE54729A*)__this)->___recoHandle_4;
		CallbackFunctionDelegate_tC745A2B557EE8241DF1F7ABD3BFC1C8F3A2E81AA* L_2 = __this->___recognizedCallbackDelegate_25;
		GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC L_3 = ((Recognizer_tCA087D63D8BDE21D877CECAAF536BDCCFE54729A*)__this)->___gch_14;
		intptr_t L_4;
		L_4 = GCHandle_ToIntPtr_m4895C6E6C93FD6CEE9867C8A32C9E06A5DE5C5DC(L_3, NULL);
		intptr_t L_5;
		L_5 = Recognizer_recognizer_recognized_set_callback_mEAB056E12958EBCB0B3AE4361560D8B496A5C831(L_1, L_2, L_4, NULL);
		SpxExceptionThrower_ThrowIfFail_m80558DF4FFB9A961C7CCC15CD13AF53F5437BA21(L_5, NULL);
	}

IL_0029:
	{
		EventHandler_1_t008E3F55CF18E8D623598A49DFBC452B2DD6E698* L_6 = ___value0;
		TranslationRecognizer_add__Recognized_mC948CE4C633F0B3989AB538E48CED770EAA2AB24(__this, L_6, NULL);
		return;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.Translation.TranslationRecognizer::remove_Recognized(System.EventHandler`1<Microsoft.CognitiveServices.Speech.Translation.TranslationRecognitionEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TranslationRecognizer_remove_Recognized_mB68B184148E7F584F9B332A3576FC8C43678D082 (TranslationRecognizer_tAEE1F79841E087D238E7450755C96DD589BE0168* __this, EventHandler_1_t008E3F55CF18E8D623598A49DFBC452B2DD6E698* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		EventHandler_1_t008E3F55CF18E8D623598A49DFBC452B2DD6E698* L_0 = ___value0;
		TranslationRecognizer_remove__Recognized_mFA887E35EAAE84E06620A043A51B69403DDF9288(__this, L_0, NULL);
		EventHandler_1_t008E3F55CF18E8D623598A49DFBC452B2DD6E698* L_1 = __this->____Recognized_20;
		if (L_1)
		{
			goto IL_0025;
		}
	}
	{
		InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* L_2 = ((Recognizer_tCA087D63D8BDE21D877CECAAF536BDCCFE54729A*)__this)->___recoHandle_4;
		intptr_t L_3;
		L_3 = Recognizer_recognizer_recognized_set_callback_mEAB056E12958EBCB0B3AE4361560D8B496A5C831(L_2, (CallbackFunctionDelegate_tC745A2B557EE8241DF1F7ABD3BFC1C8F3A2E81AA*)NULL, (0), NULL);
		SpxExceptionThrower_LogErrorIfFail_mAD982B53E803B83F9B30CA838B8CDB1210FE1747(L_3, NULL);
	}

IL_0025:
	{
		return;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.Translation.TranslationRecognizer::add_Canceled(System.EventHandler`1<Microsoft.CognitiveServices.Speech.Translation.TranslationRecognitionCanceledEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TranslationRecognizer_add_Canceled_mEE6EEF70DDDFD5CE94781584D40C4B5644068EC0 (TranslationRecognizer_tAEE1F79841E087D238E7450755C96DD589BE0168* __this, EventHandler_1_t529E119B11382401540BF02D1C8026AC460279A8* ___value0, const RuntimeMethod* method) 
{
	{
		EventHandler_1_t529E119B11382401540BF02D1C8026AC460279A8* L_0 = __this->____Canceled_21;
		if (L_0)
		{
			goto IL_0029;
		}
	}
	{
		InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* L_1 = ((Recognizer_tCA087D63D8BDE21D877CECAAF536BDCCFE54729A*)__this)->___recoHandle_4;
		CallbackFunctionDelegate_tC745A2B557EE8241DF1F7ABD3BFC1C8F3A2E81AA* L_2 = __this->___canceledCallbackDelegate_26;
		GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC L_3 = ((Recognizer_tCA087D63D8BDE21D877CECAAF536BDCCFE54729A*)__this)->___gch_14;
		intptr_t L_4;
		L_4 = GCHandle_ToIntPtr_m4895C6E6C93FD6CEE9867C8A32C9E06A5DE5C5DC(L_3, NULL);
		intptr_t L_5;
		L_5 = Recognizer_recognizer_canceled_set_callback_m12409EB36F1DF4917D9CB80C148DF8623C1E55CD(L_1, L_2, L_4, NULL);
		SpxExceptionThrower_ThrowIfFail_m80558DF4FFB9A961C7CCC15CD13AF53F5437BA21(L_5, NULL);
	}

IL_0029:
	{
		EventHandler_1_t529E119B11382401540BF02D1C8026AC460279A8* L_6 = ___value0;
		TranslationRecognizer_add__Canceled_mBC507ED133CE7C79ED21D94FCBDD56491F8DC04F(__this, L_6, NULL);
		return;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.Translation.TranslationRecognizer::remove_Canceled(System.EventHandler`1<Microsoft.CognitiveServices.Speech.Translation.TranslationRecognitionCanceledEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TranslationRecognizer_remove_Canceled_mDE5EE8C9CA497FA63C4FED58130FCE8D4F840BA6 (TranslationRecognizer_tAEE1F79841E087D238E7450755C96DD589BE0168* __this, EventHandler_1_t529E119B11382401540BF02D1C8026AC460279A8* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		EventHandler_1_t529E119B11382401540BF02D1C8026AC460279A8* L_0 = ___value0;
		TranslationRecognizer_remove__Canceled_m9764030E5C9EFF7B4C48AE21DD87E5BBC5E0640F(__this, L_0, NULL);
		EventHandler_1_t529E119B11382401540BF02D1C8026AC460279A8* L_1 = __this->____Canceled_21;
		if (L_1)
		{
			goto IL_0025;
		}
	}
	{
		InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* L_2 = ((Recognizer_tCA087D63D8BDE21D877CECAAF536BDCCFE54729A*)__this)->___recoHandle_4;
		intptr_t L_3;
		L_3 = Recognizer_recognizer_canceled_set_callback_m12409EB36F1DF4917D9CB80C148DF8623C1E55CD(L_2, (CallbackFunctionDelegate_tC745A2B557EE8241DF1F7ABD3BFC1C8F3A2E81AA*)NULL, (0), NULL);
		SpxExceptionThrower_LogErrorIfFail_mAD982B53E803B83F9B30CA838B8CDB1210FE1747(L_3, NULL);
	}

IL_0025:
	{
		return;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.Translation.TranslationRecognizer::.ctor(Microsoft.CognitiveServices.Speech.SpeechTranslationConfig)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TranslationRecognizer__ctor_mE8AE805843C9D9A8663E4BA1AD18BE52928173DF (TranslationRecognizer_tAEE1F79841E087D238E7450755C96DD589BE0168* __this, SpeechTranslationConfig_t1EEE80E7A3DA15D83DEBF70B9B811498B739CE8B* ___config0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GetRecognizerFromConfigDelegate_t17EEE1C5E4305DB57FCBE2C975DB62B9BA4B584D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SpxFactory_recognizer_create_translation_recognizer_from_config_m0C8864D041B6404EFDEDA573E1265683CD7FC31F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		GetRecognizerFromConfigDelegate_t17EEE1C5E4305DB57FCBE2C975DB62B9BA4B584D* L_0 = (GetRecognizerFromConfigDelegate_t17EEE1C5E4305DB57FCBE2C975DB62B9BA4B584D*)il2cpp_codegen_object_new(GetRecognizerFromConfigDelegate_t17EEE1C5E4305DB57FCBE2C975DB62B9BA4B584D_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		GetRecognizerFromConfigDelegate__ctor_m8225A337DC771AF4368C036689A77F76D48D4567(L_0, NULL, (intptr_t)((void*)SpxFactory_recognizer_create_translation_recognizer_from_config_m0C8864D041B6404EFDEDA573E1265683CD7FC31F_RuntimeMethod_var), NULL);
		SpeechTranslationConfig_t1EEE80E7A3DA15D83DEBF70B9B811498B739CE8B* L_1 = ___config0;
		InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* L_2;
		L_2 = Recognizer_FromConfig_m987A4CFBF642C006F1CCC60AE435E7C825B55F64(L_0, L_1, NULL);
		TranslationRecognizer__ctor_m9474B62F13778D537B18BB26C58D7CD4DD2B13D6(__this, L_2, NULL);
		return;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.Translation.TranslationRecognizer::.ctor(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TranslationRecognizer__ctor_m9474B62F13778D537B18BB26C58D7CD4DD2B13D6 (TranslationRecognizer_tAEE1F79841E087D238E7450755C96DD589BE0168* __this, InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* ___recoHandle0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CallbackFunctionDelegate_tC745A2B557EE8241DF1F7ABD3BFC1C8F3A2E81AA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PropertyCollection_tD2FEDF489ECC1689767DEE33A0152F1FA719AA53_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TranslationRecognizer_FireEvent_Canceled_m7875F1D6DA9BCA902CF05D571D55EF1055AB2E82_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TranslationRecognizer_FireEvent_Recognized_m37BF6A7CAA9794E1DBFAFB10D294B7DB958B9836_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TranslationRecognizer_FireEvent_Recognizing_m9C07BDADD03B380A822B8C7C96CD90C471447E4C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TranslationRecognizer_FireEvent_SynthesisResult_m6AE445D95E7487065CAB7589BDD9616335B69737_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7D62C11CCF10BDFC07ACE3D149248DE3F051849C);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* L_0 = ___recoHandle0;
		Recognizer__ctor_mB448C82F7106784983B2332E0C35FAC613A10A05(__this, L_0, NULL);
		CallbackFunctionDelegate_tC745A2B557EE8241DF1F7ABD3BFC1C8F3A2E81AA* L_1 = (CallbackFunctionDelegate_tC745A2B557EE8241DF1F7ABD3BFC1C8F3A2E81AA*)il2cpp_codegen_object_new(CallbackFunctionDelegate_tC745A2B557EE8241DF1F7ABD3BFC1C8F3A2E81AA_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		CallbackFunctionDelegate__ctor_m242A4949B6999B19FDCBCCB89CBBD60A2D8AB7A6(L_1, NULL, (intptr_t)((void*)TranslationRecognizer_FireEvent_Recognizing_m9C07BDADD03B380A822B8C7C96CD90C471447E4C_RuntimeMethod_var), NULL);
		__this->___recognizingCallbackDelegate_24 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___recognizingCallbackDelegate_24), (void*)L_1);
		CallbackFunctionDelegate_tC745A2B557EE8241DF1F7ABD3BFC1C8F3A2E81AA* L_2 = (CallbackFunctionDelegate_tC745A2B557EE8241DF1F7ABD3BFC1C8F3A2E81AA*)il2cpp_codegen_object_new(CallbackFunctionDelegate_tC745A2B557EE8241DF1F7ABD3BFC1C8F3A2E81AA_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		CallbackFunctionDelegate__ctor_m242A4949B6999B19FDCBCCB89CBBD60A2D8AB7A6(L_2, NULL, (intptr_t)((void*)TranslationRecognizer_FireEvent_Recognized_m37BF6A7CAA9794E1DBFAFB10D294B7DB958B9836_RuntimeMethod_var), NULL);
		__this->___recognizedCallbackDelegate_25 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___recognizedCallbackDelegate_25), (void*)L_2);
		CallbackFunctionDelegate_tC745A2B557EE8241DF1F7ABD3BFC1C8F3A2E81AA* L_3 = (CallbackFunctionDelegate_tC745A2B557EE8241DF1F7ABD3BFC1C8F3A2E81AA*)il2cpp_codegen_object_new(CallbackFunctionDelegate_tC745A2B557EE8241DF1F7ABD3BFC1C8F3A2E81AA_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		CallbackFunctionDelegate__ctor_m242A4949B6999B19FDCBCCB89CBBD60A2D8AB7A6(L_3, NULL, (intptr_t)((void*)TranslationRecognizer_FireEvent_Canceled_m7875F1D6DA9BCA902CF05D571D55EF1055AB2E82_RuntimeMethod_var), NULL);
		__this->___canceledCallbackDelegate_26 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___canceledCallbackDelegate_26), (void*)L_3);
		CallbackFunctionDelegate_tC745A2B557EE8241DF1F7ABD3BFC1C8F3A2E81AA* L_4 = (CallbackFunctionDelegate_tC745A2B557EE8241DF1F7ABD3BFC1C8F3A2E81AA*)il2cpp_codegen_object_new(CallbackFunctionDelegate_tC745A2B557EE8241DF1F7ABD3BFC1C8F3A2E81AA_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		CallbackFunctionDelegate__ctor_m242A4949B6999B19FDCBCCB89CBBD60A2D8AB7A6(L_4, NULL, (intptr_t)((void*)TranslationRecognizer_FireEvent_SynthesisResult_m6AE445D95E7487065CAB7589BDD9616335B69737_RuntimeMethod_var), NULL);
		__this->___translationSynthesisCallbackDelegate_27 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___translationSynthesisCallbackDelegate_27), (void*)L_4);
		InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* L_5 = ___recoHandle0;
		SpxExceptionThrower_ThrowIfNull_m5C9E05F3DEDEE273B1049A6052813A5870C4F223(L_5, _stringLiteral7D62C11CCF10BDFC07ACE3D149248DE3F051849C, NULL);
		V_0 = (0);
		InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* L_6 = ___recoHandle0;
		intptr_t L_7;
		L_7 = Recognizer_recognizer_get_property_bag_m4D30FE9EBED74424FCE805136396F8EDC8A81D17(L_6, (&V_0), NULL);
		SpxExceptionThrower_ThrowIfFail_m80558DF4FFB9A961C7CCC15CD13AF53F5437BA21(L_7, NULL);
		intptr_t L_8 = V_0;
		PropertyCollection_tD2FEDF489ECC1689767DEE33A0152F1FA719AA53* L_9 = (PropertyCollection_tD2FEDF489ECC1689767DEE33A0152F1FA719AA53*)il2cpp_codegen_object_new(PropertyCollection_tD2FEDF489ECC1689767DEE33A0152F1FA719AA53_il2cpp_TypeInfo_var);
		NullCheck(L_9);
		PropertyCollection__ctor_m8F53EB9B9655888D9E2B7AEBB9460B49265618B7(L_9, L_8, NULL);
		TranslationRecognizer_set_Properties_m5576585D06ED00C702202DE79DA2E1DE600CA8C0_inline(__this, L_9, NULL);
		return;
	}
}
// Microsoft.CognitiveServices.Speech.PropertyCollection Microsoft.CognitiveServices.Speech.Translation.TranslationRecognizer::get_Properties()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PropertyCollection_tD2FEDF489ECC1689767DEE33A0152F1FA719AA53* TranslationRecognizer_get_Properties_m041ED0EC39816383C2789C9784B00B7F50589ABF (TranslationRecognizer_tAEE1F79841E087D238E7450755C96DD589BE0168* __this, const RuntimeMethod* method) 
{
	{
		PropertyCollection_tD2FEDF489ECC1689767DEE33A0152F1FA719AA53* L_0 = __this->___U3CPropertiesU3Ek__BackingField_23;
		return L_0;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.Translation.TranslationRecognizer::set_Properties(Microsoft.CognitiveServices.Speech.PropertyCollection)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TranslationRecognizer_set_Properties_m5576585D06ED00C702202DE79DA2E1DE600CA8C0 (TranslationRecognizer_tAEE1F79841E087D238E7450755C96DD589BE0168* __this, PropertyCollection_tD2FEDF489ECC1689767DEE33A0152F1FA719AA53* ___value0, const RuntimeMethod* method) 
{
	{
		PropertyCollection_tD2FEDF489ECC1689767DEE33A0152F1FA719AA53* L_0 = ___value0;
		__this->___U3CPropertiesU3Ek__BackingField_23 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CPropertiesU3Ek__BackingField_23), (void*)L_0);
		return;
	}
}
// System.Threading.Tasks.Task Microsoft.CognitiveServices.Speech.Translation.TranslationRecognizer::StartContinuousRecognitionAsync()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* TranslationRecognizer_StartContinuousRecognitionAsync_m55412EFDF34D83FA6C1137AEACBF4971C98B3281 (TranslationRecognizer_tAEE1F79841E087D238E7450755C96DD589BE0168* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TranslationRecognizer_U3CStartContinuousRecognitionAsyncU3Eb__45_0_m3949BB584774853669A563EA6FB965124D0C9A73_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_0, __this, (intptr_t)((void*)TranslationRecognizer_U3CStartContinuousRecognitionAsyncU3Eb__45_0_m3949BB584774853669A563EA6FB965124D0C9A73_RuntimeMethod_var), NULL);
		il2cpp_codegen_runtime_class_init_inline(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_1;
		L_1 = Task_Run_mBD6EF33232D13F2183A43D0A526A220C4F0181B4(L_0, NULL);
		return L_1;
	}
}
// System.Threading.Tasks.Task Microsoft.CognitiveServices.Speech.Translation.TranslationRecognizer::StopContinuousRecognitionAsync()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* TranslationRecognizer_StopContinuousRecognitionAsync_m49E04468A3D122A341D532A8CEA61B770251AB13 (TranslationRecognizer_tAEE1F79841E087D238E7450755C96DD589BE0168* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TranslationRecognizer_U3CStopContinuousRecognitionAsyncU3Eb__46_0_m9271ACFBD9A2A2C9B9533BFEDE4A84847763AE07_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_0, __this, (intptr_t)((void*)TranslationRecognizer_U3CStopContinuousRecognitionAsyncU3Eb__46_0_m9271ACFBD9A2A2C9B9533BFEDE4A84847763AE07_RuntimeMethod_var), NULL);
		il2cpp_codegen_runtime_class_init_inline(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_1;
		L_1 = Task_Run_mBD6EF33232D13F2183A43D0A526A220C4F0181B4(L_0, NULL);
		return L_1;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.Translation.TranslationRecognizer::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TranslationRecognizer_Finalize_mBD2AC4D93AB98B81003D56FC50214FF0531461D4 (TranslationRecognizer_tAEE1F79841E087D238E7450755C96DD589BE0168* __this, const RuntimeMethod* method) 
{
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0012:
			{// begin finally (depth: 1)
				Recognizer_Finalize_m65C041518559BC7332B58EC3BD23603D6FAEA7F5(__this, NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			il2cpp_codegen_memory_barrier();
			((Recognizer_tCA087D63D8BDE21D877CECAAF536BDCCFE54729A*)__this)->___isDisposing_16 = (bool)1;
			VirtualActionInvoker1< bool >::Invoke(5 /* System.Void Microsoft.CognitiveServices.Speech.Recognizer::Dispose(System.Boolean) */, __this, (bool)0);
			goto IL_0019;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0019:
	{
		return;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.Translation.TranslationRecognizer::Dispose(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TranslationRecognizer_Dispose_m319D91F26DCDA18C518359CA919A4B7D453F43F1 (TranslationRecognizer_tAEE1F79841E087D238E7450755C96DD589BE0168* __this, bool ___disposing0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* G_B7_0 = NULL;
	InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* G_B6_0 = NULL;
	PropertyCollection_tD2FEDF489ECC1689767DEE33A0152F1FA719AA53* G_B10_0 = NULL;
	PropertyCollection_tD2FEDF489ECC1689767DEE33A0152F1FA719AA53* G_B9_0 = NULL;
	{
		bool L_0 = ((Recognizer_tCA087D63D8BDE21D877CECAAF536BDCCFE54729A*)__this)->___disposed_15;
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
		InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* L_1 = ((Recognizer_tCA087D63D8BDE21D877CECAAF536BDCCFE54729A*)__this)->___recoHandle_4;
		if (!L_1)
		{
			goto IL_00c6;
		}
	}
	{
		InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* L_2 = ((Recognizer_tCA087D63D8BDE21D877CECAAF536BDCCFE54729A*)__this)->___recoHandle_4;
		intptr_t L_3;
		L_3 = Recognizer_recognizer_recognizing_set_callback_mE5F4F2773A2E1F7F7960F065D7146F9BA9320B84(L_2, (CallbackFunctionDelegate_tC745A2B557EE8241DF1F7ABD3BFC1C8F3A2E81AA*)NULL, (0), NULL);
		SpxExceptionThrower_LogErrorIfFail_mAD982B53E803B83F9B30CA838B8CDB1210FE1747(L_3, NULL);
		InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* L_4 = ((Recognizer_tCA087D63D8BDE21D877CECAAF536BDCCFE54729A*)__this)->___recoHandle_4;
		intptr_t L_5;
		L_5 = Recognizer_recognizer_recognized_set_callback_mEAB056E12958EBCB0B3AE4361560D8B496A5C831(L_4, (CallbackFunctionDelegate_tC745A2B557EE8241DF1F7ABD3BFC1C8F3A2E81AA*)NULL, (0), NULL);
		SpxExceptionThrower_LogErrorIfFail_mAD982B53E803B83F9B30CA838B8CDB1210FE1747(L_5, NULL);
		InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* L_6 = ((Recognizer_tCA087D63D8BDE21D877CECAAF536BDCCFE54729A*)__this)->___recoHandle_4;
		intptr_t L_7;
		L_7 = Recognizer_recognizer_canceled_set_callback_m12409EB36F1DF4917D9CB80C148DF8623C1E55CD(L_6, (CallbackFunctionDelegate_tC745A2B557EE8241DF1F7ABD3BFC1C8F3A2E81AA*)NULL, (0), NULL);
		SpxExceptionThrower_LogErrorIfFail_mAD982B53E803B83F9B30CA838B8CDB1210FE1747(L_7, NULL);
		InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* L_8 = ((Recognizer_tCA087D63D8BDE21D877CECAAF536BDCCFE54729A*)__this)->___recoHandle_4;
		intptr_t L_9;
		L_9 = Recognizer_translator_synthesizing_audio_set_callback_mED636C5146933A0496BC5B9240FE1E5AC9EBC88C(L_8, (CallbackFunctionDelegate_tC745A2B557EE8241DF1F7ABD3BFC1C8F3A2E81AA*)NULL, (0), NULL);
		SpxExceptionThrower_LogErrorIfFail_mAD982B53E803B83F9B30CA838B8CDB1210FE1747(L_9, NULL);
		InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* L_10 = ((Recognizer_tCA087D63D8BDE21D877CECAAF536BDCCFE54729A*)__this)->___recoHandle_4;
		intptr_t L_11;
		L_11 = Recognizer_recognizer_session_started_set_callback_mC6D2C10D6BAC95F8F7CB9C37E2015F99C54C800D(L_10, (CallbackFunctionDelegate_tC745A2B557EE8241DF1F7ABD3BFC1C8F3A2E81AA*)NULL, (0), NULL);
		SpxExceptionThrower_LogErrorIfFail_mAD982B53E803B83F9B30CA838B8CDB1210FE1747(L_11, NULL);
		InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* L_12 = ((Recognizer_tCA087D63D8BDE21D877CECAAF536BDCCFE54729A*)__this)->___recoHandle_4;
		intptr_t L_13;
		L_13 = Recognizer_recognizer_session_stopped_set_callback_mBED30C2B5B024A07E3E927F9913FF1910123184E(L_12, (CallbackFunctionDelegate_tC745A2B557EE8241DF1F7ABD3BFC1C8F3A2E81AA*)NULL, (0), NULL);
		SpxExceptionThrower_LogErrorIfFail_mAD982B53E803B83F9B30CA838B8CDB1210FE1747(L_13, NULL);
		InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* L_14 = ((Recognizer_tCA087D63D8BDE21D877CECAAF536BDCCFE54729A*)__this)->___recoHandle_4;
		intptr_t L_15;
		L_15 = Recognizer_recognizer_speech_start_detected_set_callback_mBA32FFE729A32C15079566B581EEF67EB701C41B(L_14, (CallbackFunctionDelegate_tC745A2B557EE8241DF1F7ABD3BFC1C8F3A2E81AA*)NULL, (0), NULL);
		SpxExceptionThrower_LogErrorIfFail_mAD982B53E803B83F9B30CA838B8CDB1210FE1747(L_15, NULL);
		InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* L_16 = ((Recognizer_tCA087D63D8BDE21D877CECAAF536BDCCFE54729A*)__this)->___recoHandle_4;
		intptr_t L_17;
		L_17 = Recognizer_recognizer_speech_end_detected_set_callback_mC09E537CCD4C6224A0301E8C90B827A599F37B9F(L_16, (CallbackFunctionDelegate_tC745A2B557EE8241DF1F7ABD3BFC1C8F3A2E81AA*)NULL, (0), NULL);
		SpxExceptionThrower_LogErrorIfFail_mAD982B53E803B83F9B30CA838B8CDB1210FE1747(L_17, NULL);
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
		InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* L_19 = ((Recognizer_tCA087D63D8BDE21D877CECAAF536BDCCFE54729A*)__this)->___recoHandle_4;
		InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* L_20 = L_19;
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
		SafeHandle_Dispose_m4FB5B8A7ED78B90757F1B570D4025F3BA26A39F3(G_B7_0, NULL);
	}

IL_00da:
	{
		PropertyCollection_tD2FEDF489ECC1689767DEE33A0152F1FA719AA53* L_21;
		L_21 = TranslationRecognizer_get_Properties_m041ED0EC39816383C2789C9784B00B7F50589ABF_inline(__this, NULL);
		PropertyCollection_tD2FEDF489ECC1689767DEE33A0152F1FA719AA53* L_22 = L_21;
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
		VirtualActionInvoker0::Invoke(4 /* System.Void Microsoft.CognitiveServices.Speech.PropertyCollection::Close() */, G_B10_0);
	}

IL_00eb:
	{
		__this->___recognizingCallbackDelegate_24 = (CallbackFunctionDelegate_tC745A2B557EE8241DF1F7ABD3BFC1C8F3A2E81AA*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___recognizingCallbackDelegate_24), (void*)(CallbackFunctionDelegate_tC745A2B557EE8241DF1F7ABD3BFC1C8F3A2E81AA*)NULL);
		__this->___recognizedCallbackDelegate_25 = (CallbackFunctionDelegate_tC745A2B557EE8241DF1F7ABD3BFC1C8F3A2E81AA*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___recognizedCallbackDelegate_25), (void*)(CallbackFunctionDelegate_tC745A2B557EE8241DF1F7ABD3BFC1C8F3A2E81AA*)NULL);
		__this->___canceledCallbackDelegate_26 = (CallbackFunctionDelegate_tC745A2B557EE8241DF1F7ABD3BFC1C8F3A2E81AA*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___canceledCallbackDelegate_26), (void*)(CallbackFunctionDelegate_tC745A2B557EE8241DF1F7ABD3BFC1C8F3A2E81AA*)NULL);
		__this->___translationSynthesisCallbackDelegate_27 = (CallbackFunctionDelegate_tC745A2B557EE8241DF1F7ABD3BFC1C8F3A2E81AA*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___translationSynthesisCallbackDelegate_27), (void*)(CallbackFunctionDelegate_tC745A2B557EE8241DF1F7ABD3BFC1C8F3A2E81AA*)NULL);
		__this->___audioInputKeepAlive_28 = (AudioConfig_t97C98F0F764C263046543A14EE6C8CD02B57F4F3*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___audioInputKeepAlive_28), (void*)(AudioConfig_t97C98F0F764C263046543A14EE6C8CD02B57F4F3*)NULL);
		bool L_23 = ___disposing0;
		Recognizer_Dispose_m41B4467C6470F75AD4C81138860A38D98B55E31B(__this, L_23, NULL);
		return;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.Translation.TranslationRecognizer::FireEvent_Recognizing(System.IntPtr,System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TranslationRecognizer_FireEvent_Recognizing_m9C07BDADD03B380A822B8C7C96CD90C471447E4C (intptr_t ___hreco0, intptr_t ___hevent1, intptr_t ___pvContext2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InteropSafeHandle_GetObjectFromWeakHandle_TisTranslationRecognizer_tAEE1F79841E087D238E7450755C96DD589BE0168_m7DD03405D0CCC1C47FA8CA25B4FD502827C7D16F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TranslationRecognitionEventArgs_t0F1D46343AA090830357DA90FD500DC7FC75BEF0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	TranslationRecognizer_tAEE1F79841E087D238E7450755C96DD589BE0168* V_0 = NULL;
	TranslationRecognitionEventArgs_t0F1D46343AA090830357DA90FD500DC7FC75BEF0* V_1 = NULL;
	Exception_t* V_2 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	EventHandler_1_t008E3F55CF18E8D623598A49DFBC452B2DD6E698* G_B5_0 = NULL;
	EventHandler_1_t008E3F55CF18E8D623598A49DFBC452B2DD6E698* G_B4_0 = NULL;
	try
	{// begin try (depth: 1)
		{
			intptr_t L_0 = ___pvContext2;
			TranslationRecognizer_tAEE1F79841E087D238E7450755C96DD589BE0168* L_1;
			L_1 = InteropSafeHandle_GetObjectFromWeakHandle_TisTranslationRecognizer_tAEE1F79841E087D238E7450755C96DD589BE0168_m7DD03405D0CCC1C47FA8CA25B4FD502827C7D16F(L_0, InteropSafeHandle_GetObjectFromWeakHandle_TisTranslationRecognizer_tAEE1F79841E087D238E7450755C96DD589BE0168_m7DD03405D0CCC1C47FA8CA25B4FD502827C7D16F_RuntimeMethod_var);
			V_0 = L_1;
			TranslationRecognizer_tAEE1F79841E087D238E7450755C96DD589BE0168* L_2 = V_0;
			if (!L_2)
			{
				goto IL_0014_1;
			}
		}
		{
			TranslationRecognizer_tAEE1F79841E087D238E7450755C96DD589BE0168* L_3 = V_0;
			NullCheck(L_3);
			bool L_4 = ((Recognizer_tCA087D63D8BDE21D877CECAAF536BDCCFE54729A*)L_3)->___isDisposing_16;
			il2cpp_codegen_memory_barrier();
			if (!L_4)
			{
				goto IL_0016_1;
			}
		}

IL_0014_1:
		{
			goto IL_0040;
		}

IL_0016_1:
		{
			intptr_t L_5 = ___hevent1;
			TranslationRecognitionEventArgs_t0F1D46343AA090830357DA90FD500DC7FC75BEF0* L_6 = (TranslationRecognitionEventArgs_t0F1D46343AA090830357DA90FD500DC7FC75BEF0*)il2cpp_codegen_object_new(TranslationRecognitionEventArgs_t0F1D46343AA090830357DA90FD500DC7FC75BEF0_il2cpp_TypeInfo_var);
			NullCheck(L_6);
			TranslationRecognitionEventArgs__ctor_m8AF9A74DEA81084992DC783C79D2DFC81A1230A7(L_6, L_5, NULL);
			V_1 = L_6;
			TranslationRecognizer_tAEE1F79841E087D238E7450755C96DD589BE0168* L_7 = V_0;
			NullCheck(L_7);
			EventHandler_1_t008E3F55CF18E8D623598A49DFBC452B2DD6E698* L_8 = L_7->____Recognizing_19;
			EventHandler_1_t008E3F55CF18E8D623598A49DFBC452B2DD6E698* L_9 = L_8;
			G_B4_0 = L_9;
			if (L_9)
			{
				G_B5_0 = L_9;
				goto IL_0029_1;
			}
		}
		{
			goto IL_0030_1;
		}

IL_0029_1:
		{
			TranslationRecognizer_tAEE1F79841E087D238E7450755C96DD589BE0168* L_10 = V_0;
			TranslationRecognitionEventArgs_t0F1D46343AA090830357DA90FD500DC7FC75BEF0* L_11 = V_1;
			NullCheck(G_B5_0);
			EventHandler_1_Invoke_m7605B37CD34250471B68BAA9242577D08297680A_inline(G_B5_0, L_10, L_11, NULL);
		}

IL_0030_1:
		{
			goto IL_0040;
		}
	}// end try (depth: 1)
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
	{// begin catch(System.Exception)
		V_2 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		Exception_t* L_12 = V_2;
		NullCheck(L_12);
		String_t* L_13;
		L_13 = VirtualFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Exception::get_Message() */, L_12);
		SpxExceptionThrower_LogError_m37A2018CF9E9DCD40E8EE95F37097192A2DC184A(L_13, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0040;
	}// end catch (depth: 1)

IL_0040:
	{
		return;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.Translation.TranslationRecognizer::FireEvent_Recognized(System.IntPtr,System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TranslationRecognizer_FireEvent_Recognized_m37BF6A7CAA9794E1DBFAFB10D294B7DB958B9836 (intptr_t ___hreco0, intptr_t ___hevent1, intptr_t ___pvContext2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InteropSafeHandle_GetObjectFromWeakHandle_TisTranslationRecognizer_tAEE1F79841E087D238E7450755C96DD589BE0168_m7DD03405D0CCC1C47FA8CA25B4FD502827C7D16F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TranslationRecognitionEventArgs_t0F1D46343AA090830357DA90FD500DC7FC75BEF0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	TranslationRecognizer_tAEE1F79841E087D238E7450755C96DD589BE0168* V_0 = NULL;
	TranslationRecognitionEventArgs_t0F1D46343AA090830357DA90FD500DC7FC75BEF0* V_1 = NULL;
	Exception_t* V_2 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	EventHandler_1_t008E3F55CF18E8D623598A49DFBC452B2DD6E698* G_B5_0 = NULL;
	EventHandler_1_t008E3F55CF18E8D623598A49DFBC452B2DD6E698* G_B4_0 = NULL;
	try
	{// begin try (depth: 1)
		{
			intptr_t L_0 = ___pvContext2;
			TranslationRecognizer_tAEE1F79841E087D238E7450755C96DD589BE0168* L_1;
			L_1 = InteropSafeHandle_GetObjectFromWeakHandle_TisTranslationRecognizer_tAEE1F79841E087D238E7450755C96DD589BE0168_m7DD03405D0CCC1C47FA8CA25B4FD502827C7D16F(L_0, InteropSafeHandle_GetObjectFromWeakHandle_TisTranslationRecognizer_tAEE1F79841E087D238E7450755C96DD589BE0168_m7DD03405D0CCC1C47FA8CA25B4FD502827C7D16F_RuntimeMethod_var);
			V_0 = L_1;
			TranslationRecognizer_tAEE1F79841E087D238E7450755C96DD589BE0168* L_2 = V_0;
			if (!L_2)
			{
				goto IL_0014_1;
			}
		}
		{
			TranslationRecognizer_tAEE1F79841E087D238E7450755C96DD589BE0168* L_3 = V_0;
			NullCheck(L_3);
			bool L_4 = ((Recognizer_tCA087D63D8BDE21D877CECAAF536BDCCFE54729A*)L_3)->___isDisposing_16;
			il2cpp_codegen_memory_barrier();
			if (!L_4)
			{
				goto IL_0016_1;
			}
		}

IL_0014_1:
		{
			goto IL_0040;
		}

IL_0016_1:
		{
			intptr_t L_5 = ___hevent1;
			TranslationRecognitionEventArgs_t0F1D46343AA090830357DA90FD500DC7FC75BEF0* L_6 = (TranslationRecognitionEventArgs_t0F1D46343AA090830357DA90FD500DC7FC75BEF0*)il2cpp_codegen_object_new(TranslationRecognitionEventArgs_t0F1D46343AA090830357DA90FD500DC7FC75BEF0_il2cpp_TypeInfo_var);
			NullCheck(L_6);
			TranslationRecognitionEventArgs__ctor_m8AF9A74DEA81084992DC783C79D2DFC81A1230A7(L_6, L_5, NULL);
			V_1 = L_6;
			TranslationRecognizer_tAEE1F79841E087D238E7450755C96DD589BE0168* L_7 = V_0;
			NullCheck(L_7);
			EventHandler_1_t008E3F55CF18E8D623598A49DFBC452B2DD6E698* L_8 = L_7->____Recognized_20;
			EventHandler_1_t008E3F55CF18E8D623598A49DFBC452B2DD6E698* L_9 = L_8;
			G_B4_0 = L_9;
			if (L_9)
			{
				G_B5_0 = L_9;
				goto IL_0029_1;
			}
		}
		{
			goto IL_0030_1;
		}

IL_0029_1:
		{
			TranslationRecognizer_tAEE1F79841E087D238E7450755C96DD589BE0168* L_10 = V_0;
			TranslationRecognitionEventArgs_t0F1D46343AA090830357DA90FD500DC7FC75BEF0* L_11 = V_1;
			NullCheck(G_B5_0);
			EventHandler_1_Invoke_m7605B37CD34250471B68BAA9242577D08297680A_inline(G_B5_0, L_10, L_11, NULL);
		}

IL_0030_1:
		{
			goto IL_0040;
		}
	}// end try (depth: 1)
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
	{// begin catch(System.Exception)
		V_2 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		Exception_t* L_12 = V_2;
		NullCheck(L_12);
		String_t* L_13;
		L_13 = VirtualFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Exception::get_Message() */, L_12);
		SpxExceptionThrower_LogError_m37A2018CF9E9DCD40E8EE95F37097192A2DC184A(L_13, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0040;
	}// end catch (depth: 1)

IL_0040:
	{
		return;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.Translation.TranslationRecognizer::FireEvent_Canceled(System.IntPtr,System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TranslationRecognizer_FireEvent_Canceled_m7875F1D6DA9BCA902CF05D571D55EF1055AB2E82 (intptr_t ___hreco0, intptr_t ___hevent1, intptr_t ___pvContext2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InteropSafeHandle_GetObjectFromWeakHandle_TisTranslationRecognizer_tAEE1F79841E087D238E7450755C96DD589BE0168_m7DD03405D0CCC1C47FA8CA25B4FD502827C7D16F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TranslationRecognitionCanceledEventArgs_tD5827BE8533B28001EA604E99F9C8E73FFD0B853_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	TranslationRecognizer_tAEE1F79841E087D238E7450755C96DD589BE0168* V_0 = NULL;
	TranslationRecognitionCanceledEventArgs_tD5827BE8533B28001EA604E99F9C8E73FFD0B853* V_1 = NULL;
	Exception_t* V_2 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	EventHandler_1_t529E119B11382401540BF02D1C8026AC460279A8* G_B5_0 = NULL;
	EventHandler_1_t529E119B11382401540BF02D1C8026AC460279A8* G_B4_0 = NULL;
	try
	{// begin try (depth: 1)
		{
			intptr_t L_0 = ___pvContext2;
			TranslationRecognizer_tAEE1F79841E087D238E7450755C96DD589BE0168* L_1;
			L_1 = InteropSafeHandle_GetObjectFromWeakHandle_TisTranslationRecognizer_tAEE1F79841E087D238E7450755C96DD589BE0168_m7DD03405D0CCC1C47FA8CA25B4FD502827C7D16F(L_0, InteropSafeHandle_GetObjectFromWeakHandle_TisTranslationRecognizer_tAEE1F79841E087D238E7450755C96DD589BE0168_m7DD03405D0CCC1C47FA8CA25B4FD502827C7D16F_RuntimeMethod_var);
			V_0 = L_1;
			TranslationRecognizer_tAEE1F79841E087D238E7450755C96DD589BE0168* L_2 = V_0;
			if (!L_2)
			{
				goto IL_0014_1;
			}
		}
		{
			TranslationRecognizer_tAEE1F79841E087D238E7450755C96DD589BE0168* L_3 = V_0;
			NullCheck(L_3);
			bool L_4 = ((Recognizer_tCA087D63D8BDE21D877CECAAF536BDCCFE54729A*)L_3)->___isDisposing_16;
			il2cpp_codegen_memory_barrier();
			if (!L_4)
			{
				goto IL_0016_1;
			}
		}

IL_0014_1:
		{
			goto IL_0040;
		}

IL_0016_1:
		{
			intptr_t L_5 = ___hevent1;
			TranslationRecognitionCanceledEventArgs_tD5827BE8533B28001EA604E99F9C8E73FFD0B853* L_6 = (TranslationRecognitionCanceledEventArgs_tD5827BE8533B28001EA604E99F9C8E73FFD0B853*)il2cpp_codegen_object_new(TranslationRecognitionCanceledEventArgs_tD5827BE8533B28001EA604E99F9C8E73FFD0B853_il2cpp_TypeInfo_var);
			NullCheck(L_6);
			TranslationRecognitionCanceledEventArgs__ctor_mC0DAD5191F911E2119197BF1876B9DFD46B7E630(L_6, L_5, NULL);
			V_1 = L_6;
			TranslationRecognizer_tAEE1F79841E087D238E7450755C96DD589BE0168* L_7 = V_0;
			NullCheck(L_7);
			EventHandler_1_t529E119B11382401540BF02D1C8026AC460279A8* L_8 = L_7->____Canceled_21;
			EventHandler_1_t529E119B11382401540BF02D1C8026AC460279A8* L_9 = L_8;
			G_B4_0 = L_9;
			if (L_9)
			{
				G_B5_0 = L_9;
				goto IL_0029_1;
			}
		}
		{
			goto IL_0030_1;
		}

IL_0029_1:
		{
			TranslationRecognizer_tAEE1F79841E087D238E7450755C96DD589BE0168* L_10 = V_0;
			TranslationRecognitionCanceledEventArgs_tD5827BE8533B28001EA604E99F9C8E73FFD0B853* L_11 = V_1;
			NullCheck(G_B5_0);
			EventHandler_1_Invoke_mA79A2261291A05C83B4486D0FE2D7D1865B3A0F8_inline(G_B5_0, L_10, L_11, NULL);
		}

IL_0030_1:
		{
			goto IL_0040;
		}
	}// end try (depth: 1)
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
	{// begin catch(System.Exception)
		V_2 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		Exception_t* L_12 = V_2;
		NullCheck(L_12);
		String_t* L_13;
		L_13 = VirtualFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Exception::get_Message() */, L_12);
		SpxExceptionThrower_LogError_m37A2018CF9E9DCD40E8EE95F37097192A2DC184A(L_13, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0040;
	}// end catch (depth: 1)

IL_0040:
	{
		return;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.Translation.TranslationRecognizer::FireEvent_SynthesisResult(System.IntPtr,System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TranslationRecognizer_FireEvent_SynthesisResult_m6AE445D95E7487065CAB7589BDD9616335B69737 (intptr_t ___hreco0, intptr_t ___hevent1, intptr_t ___pvContext2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InteropSafeHandle_GetObjectFromWeakHandle_TisTranslationRecognizer_tAEE1F79841E087D238E7450755C96DD589BE0168_m7DD03405D0CCC1C47FA8CA25B4FD502827C7D16F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TranslationSynthesisEventArgs_t8FB96FD526982A583F5A91C6EF7CB17C1210A59F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	TranslationRecognizer_tAEE1F79841E087D238E7450755C96DD589BE0168* V_0 = NULL;
	TranslationSynthesisEventArgs_t8FB96FD526982A583F5A91C6EF7CB17C1210A59F* V_1 = NULL;
	Exception_t* V_2 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	EventHandler_1_tB299EE0561708ADFB5D5F63E18C58E89D72E7E6E* G_B5_0 = NULL;
	EventHandler_1_tB299EE0561708ADFB5D5F63E18C58E89D72E7E6E* G_B4_0 = NULL;
	try
	{// begin try (depth: 1)
		{
			intptr_t L_0 = ___pvContext2;
			TranslationRecognizer_tAEE1F79841E087D238E7450755C96DD589BE0168* L_1;
			L_1 = InteropSafeHandle_GetObjectFromWeakHandle_TisTranslationRecognizer_tAEE1F79841E087D238E7450755C96DD589BE0168_m7DD03405D0CCC1C47FA8CA25B4FD502827C7D16F(L_0, InteropSafeHandle_GetObjectFromWeakHandle_TisTranslationRecognizer_tAEE1F79841E087D238E7450755C96DD589BE0168_m7DD03405D0CCC1C47FA8CA25B4FD502827C7D16F_RuntimeMethod_var);
			V_0 = L_1;
			TranslationRecognizer_tAEE1F79841E087D238E7450755C96DD589BE0168* L_2 = V_0;
			if (!L_2)
			{
				goto IL_0014_1;
			}
		}
		{
			TranslationRecognizer_tAEE1F79841E087D238E7450755C96DD589BE0168* L_3 = V_0;
			NullCheck(L_3);
			bool L_4 = ((Recognizer_tCA087D63D8BDE21D877CECAAF536BDCCFE54729A*)L_3)->___isDisposing_16;
			il2cpp_codegen_memory_barrier();
			if (!L_4)
			{
				goto IL_0016_1;
			}
		}

IL_0014_1:
		{
			goto IL_0040;
		}

IL_0016_1:
		{
			intptr_t L_5 = ___hevent1;
			TranslationSynthesisEventArgs_t8FB96FD526982A583F5A91C6EF7CB17C1210A59F* L_6 = (TranslationSynthesisEventArgs_t8FB96FD526982A583F5A91C6EF7CB17C1210A59F*)il2cpp_codegen_object_new(TranslationSynthesisEventArgs_t8FB96FD526982A583F5A91C6EF7CB17C1210A59F_il2cpp_TypeInfo_var);
			NullCheck(L_6);
			TranslationSynthesisEventArgs__ctor_m0A5A5BCAA5952B55D937B2971ED4AB6F46AFA100(L_6, L_5, NULL);
			V_1 = L_6;
			TranslationRecognizer_tAEE1F79841E087D238E7450755C96DD589BE0168* L_7 = V_0;
			NullCheck(L_7);
			EventHandler_1_tB299EE0561708ADFB5D5F63E18C58E89D72E7E6E* L_8 = L_7->____Synthesizing_22;
			EventHandler_1_tB299EE0561708ADFB5D5F63E18C58E89D72E7E6E* L_9 = L_8;
			G_B4_0 = L_9;
			if (L_9)
			{
				G_B5_0 = L_9;
				goto IL_0029_1;
			}
		}
		{
			goto IL_0030_1;
		}

IL_0029_1:
		{
			TranslationRecognizer_tAEE1F79841E087D238E7450755C96DD589BE0168* L_10 = V_0;
			TranslationSynthesisEventArgs_t8FB96FD526982A583F5A91C6EF7CB17C1210A59F* L_11 = V_1;
			NullCheck(G_B5_0);
			EventHandler_1_Invoke_m26037260B36BA3D3C83D40C0FE919586B24E9553_inline(G_B5_0, L_10, L_11, NULL);
		}

IL_0030_1:
		{
			goto IL_0040;
		}
	}// end try (depth: 1)
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
	{// begin catch(System.Exception)
		V_2 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		Exception_t* L_12 = V_2;
		NullCheck(L_12);
		String_t* L_13;
		L_13 = VirtualFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Exception::get_Message() */, L_12);
		SpxExceptionThrower_LogError_m37A2018CF9E9DCD40E8EE95F37097192A2DC184A(L_13, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0040;
	}// end catch (depth: 1)

IL_0040:
	{
		return;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.Translation.TranslationRecognizer::<StartContinuousRecognitionAsync>b__45_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TranslationRecognizer_U3CStartContinuousRecognitionAsyncU3Eb__45_0_m3949BB584774853669A563EA6FB965124D0C9A73 (TranslationRecognizer_tAEE1F79841E087D238E7450755C96DD589BE0168* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Recognizer_StartContinuousRecognition_mB8E850543B3369010BFDC121ADC45B7F4D3EB0C2_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_0, __this, (intptr_t)((void*)Recognizer_StartContinuousRecognition_mB8E850543B3369010BFDC121ADC45B7F4D3EB0C2_RuntimeMethod_var), NULL);
		Recognizer_DoAsyncRecognitionAction_m83046B03472BABA6160D5C56198373502725FE84(__this, L_0, NULL);
		return;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.Translation.TranslationRecognizer::<StopContinuousRecognitionAsync>b__46_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TranslationRecognizer_U3CStopContinuousRecognitionAsyncU3Eb__46_0_m9271ACFBD9A2A2C9B9533BFEDE4A84847763AE07 (TranslationRecognizer_tAEE1F79841E087D238E7450755C96DD589BE0168* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Recognizer_StopContinuousRecognition_mAB43FB36FA7F893031EE6EF33D7E980474FAE6D8_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_0, __this, (intptr_t)((void*)Recognizer_StopContinuousRecognition_mAB43FB36FA7F893031EE6EF33D7E980474FAE6D8_RuntimeMethod_var), NULL);
		Recognizer_DoAsyncRecognitionAction_m83046B03472BABA6160D5C56198373502725FE84(__this, L_0, NULL);
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
// System.Void Microsoft.CognitiveServices.Speech.Translation.TranslationSynthesisResult::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TranslationSynthesisResult__ctor_m5504E3A57CC4B725D64C1981A97FB918F653847F (TranslationSynthesisResult_tCCE322C2C7FDC0F193CFD38F27E107E88FAF48D2* __this, intptr_t ___resultPtr0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m89F7B056854DF715AA3E2B78EB84D5FA3878E474_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HandleRelease_tDA5C5C8C145FFFB7E9AE3ADB1506118017AC70F9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RecognitionResult_recognizer_result_handle_release_mD7241DA94329C30FC7576690F6090CB9083B1388_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0;
		L_0 = Array_Empty_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m89F7B056854DF715AA3E2B78EB84D5FA3878E474_inline(Array_Empty_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m89F7B056854DF715AA3E2B78EB84D5FA3878E474_RuntimeMethod_var);
		__this->___audio_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___audio_1), (void*)L_0);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		intptr_t L_1 = ___resultPtr0;
		SpxExceptionThrower_ThrowIfNull_mD0AA28085EF6376F8CA07F13EE43542C501050C4(L_1, (String_t*)NULL, NULL);
		intptr_t L_2 = ___resultPtr0;
		HandleRelease_tDA5C5C8C145FFFB7E9AE3ADB1506118017AC70F9* L_3 = (HandleRelease_tDA5C5C8C145FFFB7E9AE3ADB1506118017AC70F9*)il2cpp_codegen_object_new(HandleRelease_tDA5C5C8C145FFFB7E9AE3ADB1506118017AC70F9_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		HandleRelease__ctor_m5265A47915D90FC04F512F3D1BC68A711343A4E7(L_3, NULL, (intptr_t)((void*)RecognitionResult_recognizer_result_handle_release_mD7241DA94329C30FC7576690F6090CB9083B1388_RuntimeMethod_var), NULL);
		InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* L_4 = (InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D*)il2cpp_codegen_object_new(InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		InteropSafeHandle__ctor_mC37ECE3504FFCF1C3A565E45B1659808FD310B62(L_4, L_2, L_3, NULL);
		__this->___resultHandle_2 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___resultHandle_2), (void*)L_4);
		V_0 = 0;
		InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* L_5 = __this->___resultHandle_2;
		intptr_t L_6;
		L_6 = RecognitionResult_result_get_reason_m24BBA306606BC3C381D4A4393ACB71DD4D2050DF(L_5, (&V_0), NULL);
		SpxExceptionThrower_ThrowIfFail_m80558DF4FFB9A961C7CCC15CD13AF53F5437BA21(L_6, NULL);
		int32_t L_7 = V_0;
		__this->___U3CReasonU3Ek__BackingField_0 = L_7;
		InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* L_8 = __this->___resultHandle_2;
		TranslationSynthesisResult_GetAudioData_mC7C4FABC68E4574F59A8D91513C4B4F560226DED(__this, L_8, NULL);
		return;
	}
}
// Microsoft.CognitiveServices.Speech.ResultReason Microsoft.CognitiveServices.Speech.Translation.TranslationSynthesisResult::get_Reason()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TranslationSynthesisResult_get_Reason_mA851E1881441C4F278FA28AF75BE94B21DFC327F (TranslationSynthesisResult_tCCE322C2C7FDC0F193CFD38F27E107E88FAF48D2* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CReasonU3Ek__BackingField_0;
		return L_0;
	}
}
// System.String Microsoft.CognitiveServices.Speech.Translation.TranslationSynthesisResult::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* TranslationSynthesisResult_ToString_mC7A69F16165D4A7BB5622414AEA7CA34418E2CF4 (TranslationSynthesisResult_tCCE322C2C7FDC0F193CFD38F27E107E88FAF48D2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ResultReason_tC944C305A2A069DB2A7F5C6112F43FA8A4405A54_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC6072FBFC31FE8C1C066271F63752A3B9B67AAD9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC7EBE4EAAB6D68E9347038ACD59F39A9DE2D2040);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_0;
		L_0 = CultureInfo_get_InvariantCulture_m78DAB8CBE8766445310782B6E61FB7A9983AD425(NULL);
		int32_t L_1;
		L_1 = TranslationSynthesisResult_get_Reason_mA851E1881441C4F278FA28AF75BE94B21DFC327F_inline(__this, NULL);
		int32_t L_2 = L_1;
		RuntimeObject* L_3 = Box(ResultReason_tC944C305A2A069DB2A7F5C6112F43FA8A4405A54_il2cpp_TypeInfo_var, &L_2);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = __this->___audio_1;
		NullCheck(L_4);
		int32_t L_5 = ((int32_t)(((RuntimeArray*)L_4)->max_length));
		RuntimeObject* L_6 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_5);
		String_t* L_7;
		L_7 = String_Format_m69D52D3917F3D1BAC76B506B9BAA68A41B483DEF(L_0, _stringLiteralC7EBE4EAAB6D68E9347038ACD59F39A9DE2D2040, L_3, L_6, NULL);
		V_0 = L_7;
		int32_t L_8;
		L_8 = TranslationSynthesisResult_get_Reason_mA851E1881441C4F278FA28AF75BE94B21DFC327F_inline(__this, NULL);
		if ((!(((uint32_t)L_8) == ((uint32_t)((int32_t)9)))))
		{
			goto IL_004d;
		}
	}
	{
		String_t* L_9 = V_0;
		il2cpp_codegen_runtime_class_init_inline(CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_10;
		L_10 = CultureInfo_get_InvariantCulture_m78DAB8CBE8766445310782B6E61FB7A9983AD425(NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_11;
		L_11 = Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_inline(Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_RuntimeMethod_var);
		String_t* L_12;
		L_12 = String_Format_mBFACD7FE8657957CE3D5DA54D519AB418AF421E7(L_10, _stringLiteralC6072FBFC31FE8C1C066271F63752A3B9B67AAD9, L_11, NULL);
		String_t* L_13;
		L_13 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(L_9, L_12, NULL);
		V_0 = L_13;
	}

IL_004d:
	{
		String_t* L_14 = V_0;
		return L_14;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.Translation.TranslationSynthesisResult::GetAudioData(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TranslationSynthesisResult_GetAudioData_mC7C4FABC68E4574F59A8D91513C4B4F560226DED (TranslationSynthesisResult_tCCE322C2C7FDC0F193CFD38F27E107E88FAF48D2* __this, InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* ___resultHandle0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SpxError_t1CCB290F01587A895B752386C959C6E0346321AD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral84F70ACE509061C886C9B2FE8A2BF7B7FFC81F7F);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	intptr_t V_1;
	memset((&V_1), 0, sizeof(V_1));
	intptr_t V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* L_0 = ___resultHandle0;
		SpxExceptionThrower_ThrowIfNull_m5C9E05F3DEDEE273B1049A6052813A5870C4F223(L_0, _stringLiteral84F70ACE509061C886C9B2FE8A2BF7B7FFC81F7F, NULL);
		InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* L_1 = ___resultHandle0;
		bool L_2;
		L_2 = RecognitionResult_recognizer_result_handle_is_valid_mD2EAC27E610A8715E49F1626367788A9865CE82B(L_1, NULL);
		if (!L_2)
		{
			goto IL_006f;
		}
	}
	{
		V_0 = 0;
		InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* L_3 = ___resultHandle0;
		intptr_t L_4;
		L_4 = RecognitionResult_translation_synthesis_result_get_audio_data_m49A524C78B5BBBAD2093F4C61344AC81B0428D3B(L_3, (0), (&V_0), NULL);
		V_1 = L_4;
		intptr_t L_5 = V_1;
		il2cpp_codegen_runtime_class_init_inline(SpxError_t1CCB290F01587A895B752386C959C6E0346321AD_il2cpp_TypeInfo_var);
		intptr_t L_6 = ((SpxError_t1CCB290F01587A895B752386C959C6E0346321AD_StaticFields*)il2cpp_codegen_static_fields_for(SpxError_t1CCB290F01587A895B752386C959C6E0346321AD_il2cpp_TypeInfo_var))->___BufferTooSmall_0;
		bool L_7;
		L_7 = IntPtr_op_Equality_m73759B51FE326460AC87A0E386480226EF2FABED(L_5, L_6, NULL);
		if (!L_7)
		{
			goto IL_0069;
		}
	}
	{
		int32_t L_8 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		intptr_t L_9;
		L_9 = Marshal_AllocHGlobal_m0187620AAB78B85416CE4C948B60B6A76CA84CAC(L_8, NULL);
		V_2 = L_9;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0061:
			{// begin finally (depth: 1)
				intptr_t L_10 = V_2;
				il2cpp_codegen_runtime_class_init_inline(Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
				Marshal_FreeHGlobal_m691596E1E19CB74918F8FF871A05E4BE80748BCC(L_10, NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* L_11 = ___resultHandle0;
			intptr_t L_12 = V_2;
			intptr_t L_13;
			L_13 = RecognitionResult_translation_synthesis_result_get_audio_data_m49A524C78B5BBBAD2093F4C61344AC81B0428D3B(L_11, L_12, (&V_0), NULL);
			SpxExceptionThrower_ThrowIfFail_m80558DF4FFB9A961C7CCC15CD13AF53F5437BA21(L_13, NULL);
			int32_t L_14 = V_0;
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_15 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_14);
			__this->___audio_1 = L_15;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___audio_1), (void*)L_15);
			intptr_t L_16 = V_2;
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_17 = __this->___audio_1;
			int32_t L_18 = V_0;
			il2cpp_codegen_runtime_class_init_inline(Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
			Marshal_Copy_m92700C9E60BAB2FDAF6CE02C16EFE9DCB7D6035E(L_16, L_17, 0, L_18, NULL);
			goto IL_0068;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0068:
	{
		return;
	}

IL_0069:
	{
		intptr_t L_19 = V_1;
		SpxExceptionThrower_ThrowIfFail_m80558DF4FFB9A961C7CCC15CD13AF53F5437BA21(L_19, NULL);
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
// System.Void Microsoft.CognitiveServices.Speech.Translation.TranslationSynthesisEventArgs::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TranslationSynthesisEventArgs__ctor_m0A5A5BCAA5952B55D937B2971ED4AB6F46AFA100 (TranslationSynthesisEventArgs_t8FB96FD526982A583F5A91C6EF7CB17C1210A59F* __this, intptr_t ___eventHandlePtr0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TranslationSynthesisResult_tCCE322C2C7FDC0F193CFD38F27E107E88FAF48D2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		intptr_t L_0 = ___eventHandlePtr0;
		SessionEventArgs__ctor_m240C60ECA28570ED5A8FF624C62BAE2EBA25A5AA(__this, L_0, NULL);
		V_0 = (0);
		InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* L_1 = ((SessionEventArgs_t06C8DB22E01F18F0B45A4E719BECB043B4D961BC*)__this)->___eventHandle_1;
		intptr_t L_2;
		L_2 = Recognizer_recognizer_recognition_event_get_result_mE8BE83DD8F3C6758A018AE4FB17DE38006C874C3(L_1, (&V_0), NULL);
		SpxExceptionThrower_ThrowIfFail_m80558DF4FFB9A961C7CCC15CD13AF53F5437BA21(L_2, NULL);
		intptr_t L_3 = V_0;
		TranslationSynthesisResult_tCCE322C2C7FDC0F193CFD38F27E107E88FAF48D2* L_4 = (TranslationSynthesisResult_tCCE322C2C7FDC0F193CFD38F27E107E88FAF48D2*)il2cpp_codegen_object_new(TranslationSynthesisResult_tCCE322C2C7FDC0F193CFD38F27E107E88FAF48D2_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		TranslationSynthesisResult__ctor_m5504E3A57CC4B725D64C1981A97FB918F653847F(L_4, L_3, NULL);
		__this->___U3CResultU3Ek__BackingField_5 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CResultU3Ek__BackingField_5), (void*)L_4);
		return;
	}
}
// Microsoft.CognitiveServices.Speech.Translation.TranslationSynthesisResult Microsoft.CognitiveServices.Speech.Translation.TranslationSynthesisEventArgs::get_Result()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TranslationSynthesisResult_tCCE322C2C7FDC0F193CFD38F27E107E88FAF48D2* TranslationSynthesisEventArgs_get_Result_mCA8BD226299930517C948A066CB4B247A304C515 (TranslationSynthesisEventArgs_t8FB96FD526982A583F5A91C6EF7CB17C1210A59F* __this, const RuntimeMethod* method) 
{
	{
		TranslationSynthesisResult_tCCE322C2C7FDC0F193CFD38F27E107E88FAF48D2* L_0 = __this->___U3CResultU3Ek__BackingField_5;
		return L_0;
	}
}
// System.String Microsoft.CognitiveServices.Speech.Translation.TranslationSynthesisEventArgs::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* TranslationSynthesisEventArgs_ToString_mE16282A6E080C3529B776C47B3DDF7C4501CD096 (TranslationSynthesisEventArgs_t8FB96FD526982A583F5A91C6EF7CB17C1210A59F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral07657094245180507A188C63C49A070BC8752EA2);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_0;
		L_0 = CultureInfo_get_InvariantCulture_m78DAB8CBE8766445310782B6E61FB7A9983AD425(NULL);
		String_t* L_1;
		L_1 = SessionEventArgs_get_SessionId_m8963B1EBE96E2EC946789DE47BBC4A17292FDF33_inline(__this, NULL);
		TranslationSynthesisResult_tCCE322C2C7FDC0F193CFD38F27E107E88FAF48D2* L_2;
		L_2 = TranslationSynthesisEventArgs_get_Result_mCA8BD226299930517C948A066CB4B247A304C515_inline(__this, NULL);
		NullCheck(L_2);
		String_t* L_3;
		L_3 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_2);
		String_t* L_4;
		L_4 = String_Format_m69D52D3917F3D1BAC76B506B9BAA68A41B483DEF(L_0, _stringLiteral07657094245180507A188C63C49A070BC8752EA2, L_1, L_3, NULL);
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
// System.Void Microsoft.CognitiveServices.Speech.Translation.TranslationRecognitionEventArgs::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TranslationRecognitionEventArgs__ctor_m8AF9A74DEA81084992DC783C79D2DFC81A1230A7 (TranslationRecognitionEventArgs_t0F1D46343AA090830357DA90FD500DC7FC75BEF0* __this, intptr_t ___eventHandlePtr0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TranslationRecognitionResult_tE95FF320EDD627570B9D1B3C710EB7925CC54D19_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		intptr_t L_0 = ___eventHandlePtr0;
		RecognitionEventArgs__ctor_m16B7E8B089A37C27BC87BEA572A1E4B2EA9E7B34(__this, L_0, NULL);
		V_0 = (0);
		InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* L_1 = ((SessionEventArgs_t06C8DB22E01F18F0B45A4E719BECB043B4D961BC*)__this)->___eventHandle_1;
		intptr_t L_2;
		L_2 = Recognizer_recognizer_recognition_event_get_result_mE8BE83DD8F3C6758A018AE4FB17DE38006C874C3(L_1, (&V_0), NULL);
		SpxExceptionThrower_ThrowIfFail_m80558DF4FFB9A961C7CCC15CD13AF53F5437BA21(L_2, NULL);
		intptr_t L_3 = V_0;
		TranslationRecognitionResult_tE95FF320EDD627570B9D1B3C710EB7925CC54D19* L_4 = (TranslationRecognitionResult_tE95FF320EDD627570B9D1B3C710EB7925CC54D19*)il2cpp_codegen_object_new(TranslationRecognitionResult_tE95FF320EDD627570B9D1B3C710EB7925CC54D19_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		TranslationRecognitionResult__ctor_mEC410E2929DA5612330E8C4521CD1363E7105CA1(L_4, L_3, NULL);
		__this->___U3CResultU3Ek__BackingField_6 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CResultU3Ek__BackingField_6), (void*)L_4);
		return;
	}
}
// Microsoft.CognitiveServices.Speech.Translation.TranslationRecognitionResult Microsoft.CognitiveServices.Speech.Translation.TranslationRecognitionEventArgs::get_Result()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TranslationRecognitionResult_tE95FF320EDD627570B9D1B3C710EB7925CC54D19* TranslationRecognitionEventArgs_get_Result_m047C28B1FF5C9231EF5D9CE4957C05CD2E4B5CDD (TranslationRecognitionEventArgs_t0F1D46343AA090830357DA90FD500DC7FC75BEF0* __this, const RuntimeMethod* method) 
{
	{
		TranslationRecognitionResult_tE95FF320EDD627570B9D1B3C710EB7925CC54D19* L_0 = __this->___U3CResultU3Ek__BackingField_6;
		return L_0;
	}
}
// System.String Microsoft.CognitiveServices.Speech.Translation.TranslationRecognitionEventArgs::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* TranslationRecognitionEventArgs_ToString_mA6B067D8D6C5D0DAB3C26670987B1BE548B6827A (TranslationRecognitionEventArgs_t0F1D46343AA090830357DA90FD500DC7FC75BEF0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral07657094245180507A188C63C49A070BC8752EA2);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_0;
		L_0 = CultureInfo_get_InvariantCulture_m78DAB8CBE8766445310782B6E61FB7A9983AD425(NULL);
		String_t* L_1;
		L_1 = SessionEventArgs_get_SessionId_m8963B1EBE96E2EC946789DE47BBC4A17292FDF33_inline(__this, NULL);
		TranslationRecognitionResult_tE95FF320EDD627570B9D1B3C710EB7925CC54D19* L_2;
		L_2 = TranslationRecognitionEventArgs_get_Result_m047C28B1FF5C9231EF5D9CE4957C05CD2E4B5CDD_inline(__this, NULL);
		NullCheck(L_2);
		String_t* L_3;
		L_3 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_2);
		String_t* L_4;
		L_4 = String_Format_m69D52D3917F3D1BAC76B506B9BAA68A41B483DEF(L_0, _stringLiteral07657094245180507A188C63C49A070BC8752EA2, L_1, L_3, NULL);
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
// System.Void Microsoft.CognitiveServices.Speech.Translation.TranslationRecognitionCanceledEventArgs::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TranslationRecognitionCanceledEventArgs__ctor_mC0DAD5191F911E2119197BF1876B9DFD46B7E630 (TranslationRecognitionCanceledEventArgs_tD5827BE8533B28001EA604E99F9C8E73FFD0B853* __this, intptr_t ___eventHandlePtr0, const RuntimeMethod* method) 
{
	CancellationDetails_t3A257E993FAECAD1A9866267C438E47CFA1D308A* V_0 = NULL;
	{
		intptr_t L_0 = ___eventHandlePtr0;
		TranslationRecognitionEventArgs__ctor_m8AF9A74DEA81084992DC783C79D2DFC81A1230A7(__this, L_0, NULL);
		TranslationRecognitionResult_tE95FF320EDD627570B9D1B3C710EB7925CC54D19* L_1;
		L_1 = TranslationRecognitionEventArgs_get_Result_m047C28B1FF5C9231EF5D9CE4957C05CD2E4B5CDD_inline(__this, NULL);
		CancellationDetails_t3A257E993FAECAD1A9866267C438E47CFA1D308A* L_2;
		L_2 = CancellationDetails_FromResult_m6C75E2AD2521230D540BA1BCF5515ECC29DBF968(L_1, NULL);
		V_0 = L_2;
		CancellationDetails_t3A257E993FAECAD1A9866267C438E47CFA1D308A* L_3 = V_0;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = CancellationDetails_get_Reason_m353778943984FF273C594BBB7D83D519C0B58180_inline(L_3, NULL);
		__this->___U3CReasonU3Ek__BackingField_7 = L_4;
		CancellationDetails_t3A257E993FAECAD1A9866267C438E47CFA1D308A* L_5 = V_0;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = CancellationDetails_get_ErrorCode_m01B8889CC68F1443F822B1E8082F6B8378C723AF_inline(L_5, NULL);
		__this->___U3CErrorCodeU3Ek__BackingField_8 = L_6;
		CancellationDetails_t3A257E993FAECAD1A9866267C438E47CFA1D308A* L_7 = V_0;
		NullCheck(L_7);
		String_t* L_8;
		L_8 = CancellationDetails_get_ErrorDetails_mB3C4D6386464A3C5168B7EEFAAE45EC62EF95636_inline(L_7, NULL);
		__this->___U3CErrorDetailsU3Ek__BackingField_9 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CErrorDetailsU3Ek__BackingField_9), (void*)L_8);
		return;
	}
}
// Microsoft.CognitiveServices.Speech.CancellationReason Microsoft.CognitiveServices.Speech.Translation.TranslationRecognitionCanceledEventArgs::get_Reason()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TranslationRecognitionCanceledEventArgs_get_Reason_m93D03951586AFFFF3DF9AD531E90A6A6AC5A2809 (TranslationRecognitionCanceledEventArgs_tD5827BE8533B28001EA604E99F9C8E73FFD0B853* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CReasonU3Ek__BackingField_7;
		return L_0;
	}
}
// Microsoft.CognitiveServices.Speech.CancellationErrorCode Microsoft.CognitiveServices.Speech.Translation.TranslationRecognitionCanceledEventArgs::get_ErrorCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TranslationRecognitionCanceledEventArgs_get_ErrorCode_mCD275DF83031DDBD93498938B45A578946631D24 (TranslationRecognitionCanceledEventArgs_tD5827BE8533B28001EA604E99F9C8E73FFD0B853* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CErrorCodeU3Ek__BackingField_8;
		return L_0;
	}
}
// System.String Microsoft.CognitiveServices.Speech.Translation.TranslationRecognitionCanceledEventArgs::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* TranslationRecognitionCanceledEventArgs_ToString_m9DCCAC9E91B16CE2A22B213F823A0A32EDE8DFA9 (TranslationRecognitionCanceledEventArgs_tD5827BE8533B28001EA604E99F9C8E73FFD0B853* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CancellationErrorCode_tA7E793829617AB6327A122CC40E657792C4D9402_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CancellationReason_t51FBE96029389530BF9FEE71742677C3DFF019A5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral94ACA2C81E052FAFABB8EF261D2A67595EE46C0E);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_0;
		L_0 = CultureInfo_get_InvariantCulture_m78DAB8CBE8766445310782B6E61FB7A9983AD425(NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)4);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = L_1;
		String_t* L_3;
		L_3 = SessionEventArgs_get_SessionId_m8963B1EBE96E2EC946789DE47BBC4A17292FDF33_inline(__this, NULL);
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_3);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = L_2;
		TranslationRecognitionResult_tE95FF320EDD627570B9D1B3C710EB7925CC54D19* L_5;
		L_5 = TranslationRecognitionEventArgs_get_Result_m047C28B1FF5C9231EF5D9CE4957C05CD2E4B5CDD_inline(__this, NULL);
		NullCheck(L_5);
		String_t* L_6;
		L_6 = VirtualFuncInvoker0< String_t* >::Invoke(4 /* System.String Microsoft.CognitiveServices.Speech.RecognitionResult::get_ResultId() */, L_5);
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_6);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_6);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_7 = L_4;
		int32_t L_8;
		L_8 = TranslationRecognitionCanceledEventArgs_get_Reason_m93D03951586AFFFF3DF9AD531E90A6A6AC5A2809_inline(__this, NULL);
		int32_t L_9 = L_8;
		RuntimeObject* L_10 = Box(CancellationReason_t51FBE96029389530BF9FEE71742677C3DFF019A5_il2cpp_TypeInfo_var, &L_9);
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, L_10);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_10);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_11 = L_7;
		int32_t L_12;
		L_12 = TranslationRecognitionCanceledEventArgs_get_ErrorCode_mCD275DF83031DDBD93498938B45A578946631D24_inline(__this, NULL);
		int32_t L_13 = L_12;
		RuntimeObject* L_14 = Box(CancellationErrorCode_tA7E793829617AB6327A122CC40E657792C4D9402_il2cpp_TypeInfo_var, &L_13);
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, L_14);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject*)L_14);
		String_t* L_15;
		L_15 = String_Format_mBFACD7FE8657957CE3D5DA54D519AB418AF421E7(L_0, _stringLiteral94ACA2C81E052FAFABB8EF261D2A67595EE46C0E, L_11, NULL);
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
// System.Object[] Microsoft.CognitiveServices.Speech.Internal.Diagnostics::Args(System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Diagnostics_Args_m66A8E4AC0D0D0C2C854A969BFCE1C409BFF58556 (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args0, const RuntimeMethod* method) 
{
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = ___args0;
		return L_0;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.Internal.Diagnostics::SPX_TRACE_VERBOSE(System.String,System.Int32,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Diagnostics_SPX_TRACE_VERBOSE_m9618B77BD67A243B856AE5D2E73CB87D57D1DA6E (String_t* ___message0, int32_t ___line1, String_t* ___caller2, String_t* ___file3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___message0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1;
		L_1 = Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_inline(Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_RuntimeMethod_var);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2;
		L_2 = Diagnostics_Args_m66A8E4AC0D0D0C2C854A969BFCE1C409BFF58556(L_1, NULL);
		int32_t L_3 = ___line1;
		String_t* L_4 = ___caller2;
		String_t* L_5 = ___file3;
		Diagnostics_SPX_TRACE_VERBOSE_mB66498BCE9FE52C0C1C41B5F06ACF3FBA58AE529(L_0, L_2, L_3, L_4, L_5, NULL);
		return;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.Internal.Diagnostics::SPX_TRACE_VERBOSE(System.String,System.Object[],System.Int32,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Diagnostics_SPX_TRACE_VERBOSE_mB66498BCE9FE52C0C1C41B5F06ACF3FBA58AE529 (String_t* ___format0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, int32_t ___line2, String_t* ___caller3, String_t* ___file4, const RuntimeMethod* method) 
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
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = ___args1;
		String_t* L_2;
		L_2 = String_Format_m74FC0A1259DFA02F3DF6538FC7F3ACF3E1AF0C55(L_0, L_1, NULL);
		V_0 = L_2;
		String_t* L_3 = ___file4;
		int32_t L_4 = ___line2;
		String_t* L_5 = V_0;
		DiagnosticsInterop_diagnostics_log_trace_string_mFE0702C2B29033AF9782E2687FAEF40471DB9896(((int32_t)16), _stringLiteralF5276AA6769ABD877AC10339C332B2ECF5459404, L_3, L_4, L_5, NULL);
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
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.CancellationDetails::result_get_reason_canceled(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,Microsoft.CognitiveServices.Speech.CancellationReason&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t CancellationDetails_result_get_reason_canceled_mB6B75B4486D05ADF2F85CDFD0F60E8DC61FB9800 (InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* ___result0, int32_t* ___reason1, const RuntimeMethod* method) 
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
	SafeHandle_DangerousAddRef_m9FA46208A92D8B33059B8E8712F49AE45BB5E922(___result0, (&___safeHandle_reference_incremented_for____result0), NULL);
	____result0_marshaled = reinterpret_cast<void*>((___result0)->___handle_0);

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_Microsoft_CognitiveServices_Speech_core_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(result_get_reason_canceled)(____result0_marshaled, ___reason1);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(____result0_marshaled, ___reason1);
	#endif

	// Marshaling cleanup of parameter '___result0' native representation
	if (___safeHandle_reference_incremented_for____result0)
	{
		SafeHandle_DangerousRelease_m30A8B4E5BEA935C8925BC2115CD0AD13B937953E(___result0, NULL);
	}

	return returnValue;
}
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.CancellationDetails::result_get_canceled_error_code(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,Microsoft.CognitiveServices.Speech.CancellationErrorCode&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t CancellationDetails_result_get_canceled_error_code_m8469A5D13BF7FBEAC7552AB749BE0E63258F87A0 (InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* ___result0, int32_t* ___errorCode1, const RuntimeMethod* method) 
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
	SafeHandle_DangerousAddRef_m9FA46208A92D8B33059B8E8712F49AE45BB5E922(___result0, (&___safeHandle_reference_incremented_for____result0), NULL);
	____result0_marshaled = reinterpret_cast<void*>((___result0)->___handle_0);

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_Microsoft_CognitiveServices_Speech_core_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(result_get_canceled_error_code)(____result0_marshaled, ___errorCode1);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(____result0_marshaled, ___errorCode1);
	#endif

	// Marshaling cleanup of parameter '___result0' native representation
	if (___safeHandle_reference_incremented_for____result0)
	{
		SafeHandle_DangerousRelease_m30A8B4E5BEA935C8925BC2115CD0AD13B937953E(___result0, NULL);
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
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.SpeechConfig::speech_config_from_subscription(System.IntPtr&,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t SpeechConfig_speech_config_from_subscription_mB1ABBE414549A4855CF3CE0AD87E832209A701E0 (intptr_t* ___config0, String_t* ___subscriptionKey1, String_t* ___region2, const RuntimeMethod* method) 
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t SpeechConfig_speech_config_release_m02C3D503C5141ADD5F9075D27204DD1AD5E9274A (intptr_t ___config0, const RuntimeMethod* method) 
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t SpeechConfig_speech_config_get_property_bag_mAD34CF04C0FD498FECA8D218D58D8C39431FD207 (InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* ___config0, intptr_t* ___propbag1, const RuntimeMethod* method) 
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
	SafeHandle_DangerousAddRef_m9FA46208A92D8B33059B8E8712F49AE45BB5E922(___config0, (&___safeHandle_reference_incremented_for____config0), NULL);
	____config0_marshaled = reinterpret_cast<void*>((___config0)->___handle_0);

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_Microsoft_CognitiveServices_Speech_core_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(speech_config_get_property_bag)(____config0_marshaled, ___propbag1);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(____config0_marshaled, ___propbag1);
	#endif

	// Marshaling cleanup of parameter '___config0' native representation
	if (___safeHandle_reference_incremented_for____config0)
	{
		SafeHandle_DangerousRelease_m30A8B4E5BEA935C8925BC2115CD0AD13B937953E(___config0, NULL);
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
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.SpeechTranslationConfig::speech_translation_config_from_subscription(System.IntPtr&,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t SpeechTranslationConfig_speech_translation_config_from_subscription_mE64E8DB2A53A0CC70C6D8CAC467A39451949F1A4 (intptr_t* ___config0, String_t* ___subscriptionKey1, String_t* ___region2, const RuntimeMethod* method) 
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t SpeechTranslationConfig_speech_translation_config_add_target_language_m7CBDFA258DA86801344705139992591D7AF3A450 (InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* ___config0, String_t* ___language1, const RuntimeMethod* method) 
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
	SafeHandle_DangerousAddRef_m9FA46208A92D8B33059B8E8712F49AE45BB5E922(___config0, (&___safeHandle_reference_incremented_for____config0), NULL);
	____config0_marshaled = reinterpret_cast<void*>((___config0)->___handle_0);

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
		SafeHandle_DangerousRelease_m30A8B4E5BEA935C8925BC2115CD0AD13B937953E(___config0, NULL);
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
// System.Void Microsoft.CognitiveServices.Speech.Internal.DiagnosticsInterop::diagnostics_log_trace_string(System.Int32,System.String,System.String,System.Int32,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DiagnosticsInterop_diagnostics_log_trace_string_mFE0702C2B29033AF9782E2687FAEF40471DB9896 (int32_t ___level0, String_t* ___title1, String_t* ___fileName2, int32_t ___lineNumber3, String_t* ___message4, const RuntimeMethod* method) 
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
// System.String Microsoft.CognitiveServices.Speech.Internal.SpxError::GetMessage(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SpxError_GetMessage_m56F8CB8D3FCC6E557B4C0F7B8542AFF7CE76B14C (intptr_t ___errorHandle0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SpxError_t1CCB290F01587A895B752386C959C6E0346321AD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	intptr_t V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		String_t* L_0 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		V_0 = L_0;
		intptr_t L_1 = ___errorHandle0;
		il2cpp_codegen_runtime_class_init_inline(SpxError_t1CCB290F01587A895B752386C959C6E0346321AD_il2cpp_TypeInfo_var);
		intptr_t L_2;
		L_2 = SpxError_error_get_message_mF6E912B67C4C33E52A5734B4185F5093BC4EFB2D(L_1, NULL);
		V_1 = L_2;
		intptr_t L_3 = V_1;
		bool L_4;
		L_4 = IntPtr_op_Inequality_m2F715312CBFCE7E1A81D0689F68B97218E37E5D1(L_3, (0), NULL);
		if (!L_4)
		{
			goto IL_0021;
		}
	}
	{
		intptr_t L_5 = V_1;
		String_t* L_6;
		L_6 = Utf8StringMarshaler_MarshalNativeToManaged_m102420BD438247158F21E76982168D6DD1EB7066(L_5, NULL);
		V_0 = L_6;
	}

IL_0021:
	{
		String_t* L_7 = V_0;
		return L_7;
	}
}
// System.Int32 Microsoft.CognitiveServices.Speech.Internal.SpxError::GetErrorCode(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SpxError_GetErrorCode_m59998B5738166F75D78A901464B8653BF1718492 (intptr_t ___errorHandle0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SpxError_t1CCB290F01587A895B752386C959C6E0346321AD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		intptr_t L_0 = ___errorHandle0;
		il2cpp_codegen_runtime_class_init_inline(SpxError_t1CCB290F01587A895B752386C959C6E0346321AD_il2cpp_TypeInfo_var);
		intptr_t L_1;
		L_1 = SpxError_error_get_error_code_m90FAF28F9F681E57DC432BB3406486932F2FC305(L_0, NULL);
		int32_t L_2;
		L_2 = IntPtr_op_Explicit_m358ACBBA288C56CC429F39D4D481669D0620B590(L_1, NULL);
		V_0 = L_2;
		int32_t L_3 = V_0;
		if (L_3)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_4;
		L_4 = IntPtr_ToInt32_mD53B5D2C73C7E4BE5ADEBC5D187EACC83D5BB292((&___errorHandle0), NULL);
		return L_4;
	}

IL_0017:
	{
		int32_t L_5 = V_0;
		return L_5;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.Internal.SpxError::Release(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpxError_Release_mA9AC9D63595F70D08E078D5C6AD340B22A701301 (intptr_t ___errorHandle0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SpxError_t1CCB290F01587A895B752386C959C6E0346321AD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		intptr_t L_0 = ___errorHandle0;
		il2cpp_codegen_runtime_class_init_inline(SpxError_t1CCB290F01587A895B752386C959C6E0346321AD_il2cpp_TypeInfo_var);
		intptr_t L_1;
		L_1 = SpxError_error_release_m849336C474D38F6418F8F87E3F62A667401DD6FD(L_0, NULL);
		SpxExceptionThrower_ThrowIfFail_m80558DF4FFB9A961C7CCC15CD13AF53F5437BA21(L_1, NULL);
		return;
	}
}
// System.Boolean Microsoft.CognitiveServices.Speech.Internal.SpxError::ReleaseNoThrow(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SpxError_ReleaseNoThrow_m33343325EA373B0D5AF143C101C92C64211E359F (intptr_t ___errorHandle0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SpxError_t1CCB290F01587A895B752386C959C6E0346321AD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		intptr_t L_0 = ___errorHandle0;
		il2cpp_codegen_runtime_class_init_inline(SpxError_t1CCB290F01587A895B752386C959C6E0346321AD_il2cpp_TypeInfo_var);
		intptr_t L_1;
		L_1 = SpxError_error_release_m849336C474D38F6418F8F87E3F62A667401DD6FD(L_0, NULL);
		V_0 = L_1;
		intptr_t L_2 = V_0;
		bool L_3;
		L_3 = IntPtr_op_Equality_m73759B51FE326460AC87A0E386480226EF2FABED(L_2, (0), NULL);
		return L_3;
	}
}
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.SpxError::error_get_message(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t SpxError_error_get_message_mF6E912B67C4C33E52A5734B4185F5093BC4EFB2D (intptr_t ___errorHandle0, const RuntimeMethod* method) 
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t SpxError_error_get_error_code_m90FAF28F9F681E57DC432BB3406486932F2FC305 (intptr_t ___errorHandle0, const RuntimeMethod* method) 
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t SpxError_error_release_m849336C474D38F6418F8F87E3F62A667401DD6FD (intptr_t ___errorHandle0, const RuntimeMethod* method) 
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpxError__cctor_m52E236EE6E93EB40B6B5634B2746964D74BD3C85 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SpxError_t1CCB290F01587A895B752386C959C6E0346321AD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		intptr_t L_0;
		L_0 = IntPtr_op_Explicit_mB06D1B6CFBA72B5C55FBEC1BA3BC25958AB60EB1(((int32_t)25), NULL);
		((SpxError_t1CCB290F01587A895B752386C959C6E0346321AD_StaticFields*)il2cpp_codegen_static_fields_for(SpxError_t1CCB290F01587A895B752386C959C6E0346321AD_il2cpp_TypeInfo_var))->___BufferTooSmall_0 = L_0;
		intptr_t L_1;
		L_1 = IntPtr_op_Explicit_mB06D1B6CFBA72B5C55FBEC1BA3BC25958AB60EB1(((int32_t)27), NULL);
		((SpxError_t1CCB290F01587A895B752386C959C6E0346321AD_StaticFields*)il2cpp_codegen_static_fields_for(SpxError_t1CCB290F01587A895B752386C959C6E0346321AD_il2cpp_TypeInfo_var))->___RuntimeError_1 = L_1;
		intptr_t L_2;
		L_2 = IntPtr_op_Explicit_mB06D1B6CFBA72B5C55FBEC1BA3BC25958AB60EB1(((int32_t)33), NULL);
		((SpxError_t1CCB290F01587A895B752386C959C6E0346321AD_StaticFields*)il2cpp_codegen_static_fields_for(SpxError_t1CCB290F01587A895B752386C959C6E0346321AD_il2cpp_TypeInfo_var))->___InvalidHandle_2 = L_2;
		intptr_t L_3;
		L_3 = IntPtr_op_Explicit_mB06D1B6CFBA72B5C55FBEC1BA3BC25958AB60EB1(5, NULL);
		((SpxError_t1CCB290F01587A895B752386C959C6E0346321AD_StaticFields*)il2cpp_codegen_static_fields_for(SpxError_t1CCB290F01587A895B752386C959C6E0346321AD_il2cpp_TypeInfo_var))->___InvalidArgument_3 = L_3;
		intptr_t L_4;
		L_4 = IntPtr_op_Explicit_mB06D1B6CFBA72B5C55FBEC1BA3BC25958AB60EB1(4, NULL);
		((SpxError_t1CCB290F01587A895B752386C959C6E0346321AD_StaticFields*)il2cpp_codegen_static_fields_for(SpxError_t1CCB290F01587A895B752386C959C6E0346321AD_il2cpp_TypeInfo_var))->___NotFound_4 = L_4;
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
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.EventArgs::recognizer_event_handle_release(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t EventArgs_recognizer_event_handle_release_mB10E833E44DE8B942BA131D02EAA83C76170287B (intptr_t ___eventHandle0, const RuntimeMethod* method) 
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
// System.Void Microsoft.CognitiveServices.Speech.Internal.MonoPInvokeCallbackAttribute::.ctor(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoPInvokeCallbackAttribute__ctor_mCD6247FB473E269B565E8D2DFF089C409A664062 (MonoPInvokeCallbackAttribute_tCAE7DBDDEE93BF80011F064297B9B66A3719DCE8* __this, Type_t* ___t0, const RuntimeMethod* method) 
{
	{
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
		Type_t* L_0 = ___t0;
		__this->___type_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___type_0), (void*)L_0);
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
intptr_t HandleRelease_Invoke_m5A6CE4A6071A868B9695E55991957B8C520128EB_Multicast(HandleRelease_tDA5C5C8C145FFFB7E9AE3ADB1506118017AC70F9* __this, intptr_t ___hresult0, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	intptr_t retVal;
	memset((&retVal), 0, sizeof(retVal));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		HandleRelease_tDA5C5C8C145FFFB7E9AE3ADB1506118017AC70F9* currentDelegate = reinterpret_cast<HandleRelease_tDA5C5C8C145FFFB7E9AE3ADB1506118017AC70F9*>(delegatesToInvoke[i]);
		typedef intptr_t (*FunctionPointerType) (RuntimeObject*, intptr_t, const RuntimeMethod*);
		retVal = ((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___hresult0, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
	return retVal;
}
intptr_t HandleRelease_Invoke_m5A6CE4A6071A868B9695E55991957B8C520128EB_Open(HandleRelease_tDA5C5C8C145FFFB7E9AE3ADB1506118017AC70F9* __this, intptr_t ___hresult0, const RuntimeMethod* method)
{
	typedef intptr_t (*FunctionPointerType) (intptr_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___hresult0, method);
}
intptr_t HandleRelease_Invoke_m5A6CE4A6071A868B9695E55991957B8C520128EB_OpenStaticInvoker(HandleRelease_tDA5C5C8C145FFFB7E9AE3ADB1506118017AC70F9* __this, intptr_t ___hresult0, const RuntimeMethod* method)
{
	return InvokerFuncInvoker1< intptr_t, intptr_t >::Invoke(__this->___method_ptr_0, method, NULL, ___hresult0);
}
intptr_t HandleRelease_Invoke_m5A6CE4A6071A868B9695E55991957B8C520128EB_ClosedStaticInvoker(HandleRelease_tDA5C5C8C145FFFB7E9AE3ADB1506118017AC70F9* __this, intptr_t ___hresult0, const RuntimeMethod* method)
{
	return InvokerFuncInvoker2< intptr_t, RuntimeObject*, intptr_t >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___hresult0);
}
IL2CPP_EXTERN_C  intptr_t DelegatePInvokeWrapper_HandleRelease_tDA5C5C8C145FFFB7E9AE3ADB1506118017AC70F9 (HandleRelease_tDA5C5C8C145FFFB7E9AE3ADB1506118017AC70F9* __this, intptr_t ___hresult0, const RuntimeMethod* method)
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc)(intptr_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	intptr_t returnValue = il2cppPInvokeFunc(___hresult0);

	return returnValue;
}
// System.Void Microsoft.CognitiveServices.Speech.Internal.HandleRelease::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandleRelease__ctor_m5265A47915D90FC04F512F3D1BC68A711343A4E7 (HandleRelease_tDA5C5C8C145FFFB7E9AE3ADB1506118017AC70F9* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
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
				__this->___invoke_impl_1 = (intptr_t)&HandleRelease_Invoke_m5A6CE4A6071A868B9695E55991957B8C520128EB_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&HandleRelease_Invoke_m5A6CE4A6071A868B9695E55991957B8C520128EB_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&HandleRelease_Invoke_m5A6CE4A6071A868B9695E55991957B8C520128EB_Open;
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
	__this->___extra_arg_5 = (intptr_t)&HandleRelease_Invoke_m5A6CE4A6071A868B9695E55991957B8C520128EB_Multicast;
}
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.HandleRelease::Invoke(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t HandleRelease_Invoke_m5A6CE4A6071A868B9695E55991957B8C520128EB (HandleRelease_tDA5C5C8C145FFFB7E9AE3ADB1506118017AC70F9* __this, intptr_t ___hresult0, const RuntimeMethod* method) 
{
	typedef intptr_t (*FunctionPointerType) (RuntimeObject*, intptr_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___hresult0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InteropSafeHandle__ctor_mC37ECE3504FFCF1C3A565E45B1659808FD310B62 (InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* __this, intptr_t ___handle0, HandleRelease_tDA5C5C8C145FFFB7E9AE3ADB1506118017AC70F9* ___releaseHandle1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		SafeHandle__ctor_m23E44C94503043292DCD4E87818082CFC09A7F4B(__this, (0), (bool)1, NULL);
		HandleRelease_tDA5C5C8C145FFFB7E9AE3ADB1506118017AC70F9* L_0 = ___releaseHandle1;
		__this->___releaseHandleFunc_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___releaseHandleFunc_6), (void*)L_0);
		intptr_t L_1 = ___handle0;
		SafeHandle_SetHandle_m003D64748F9DFBA1E3C0B23798C23BA81AA21C2A_inline(__this, L_1, NULL);
		return;
	}
}
// System.Boolean Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle::get_IsInvalid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InteropSafeHandle_get_IsInvalid_m0C613C6DFCD587AC5C04CE6F23DCECFB223233EA (InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		intptr_t L_0 = ((SafeHandle_tC1A4DA80DA89B867CC011B707A07275230321BF7*)__this)->___handle_0;
		bool L_1;
		L_1 = IntPtr_op_Equality_m73759B51FE326460AC87A0E386480226EF2FABED(L_0, (0), NULL);
		if (L_1)
		{
			goto IL_0024;
		}
	}
	{
		intptr_t L_2 = ((SafeHandle_tC1A4DA80DA89B867CC011B707A07275230321BF7*)__this)->___handle_0;
		intptr_t L_3;
		memset((&L_3), 0, sizeof(L_3));
		IntPtr__ctor_m20A566609A091311C734617C699E61F545250AC7((&L_3), (-1), /*hidden argument*/NULL);
		bool L_4;
		L_4 = IntPtr_op_Equality_m73759B51FE326460AC87A0E386480226EF2FABED(L_2, L_3, NULL);
		return L_4;
	}

IL_0024:
	{
		return (bool)1;
	}
}
// System.Boolean Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle::ReleaseHandle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InteropSafeHandle_ReleaseHandle_m2F321C7B0B2E77403444A781A5279CC74038AE3E (InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		HandleRelease_tDA5C5C8C145FFFB7E9AE3ADB1506118017AC70F9* L_0 = __this->___releaseHandleFunc_6;
		if (!L_0)
		{
			goto IL_0030;
		}
	}
	{
		HandleRelease_tDA5C5C8C145FFFB7E9AE3ADB1506118017AC70F9* L_1 = __this->___releaseHandleFunc_6;
		intptr_t L_2 = ((SafeHandle_tC1A4DA80DA89B867CC011B707A07275230321BF7*)__this)->___handle_0;
		NullCheck(L_1);
		intptr_t L_3;
		L_3 = HandleRelease_Invoke_m5A6CE4A6071A868B9695E55991957B8C520128EB_inline(L_1, L_2, NULL);
		SpxExceptionThrower_LogErrorIfFail_mAD982B53E803B83F9B30CA838B8CDB1210FE1747(L_3, NULL);
		__this->___releaseHandleFunc_6 = (HandleRelease_tDA5C5C8C145FFFB7E9AE3ADB1506118017AC70F9*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___releaseHandleFunc_6), (void*)(HandleRelease_tDA5C5C8C145FFFB7E9AE3ADB1506118017AC70F9*)NULL);
		((SafeHandle_tC1A4DA80DA89B867CC011B707A07275230321BF7*)__this)->___handle_0 = (0);
	}

IL_0030:
	{
		return (bool)1;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle::Dispose(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InteropSafeHandle_Dispose_mC58913907DC7D23E82426AC45B50333CD885BDFC (InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* __this, bool ___disposing0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0E113F97D77FF0E45934C610A144C2819DC64A04);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2DAEEF072FFF48537E5ED531F51D87E1CF74D643);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA3E68153B91665DFE1E9EAC88F57E3E2533E594D);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = ___disposing0;
		bool L_1 = L_0;
		RuntimeObject* L_2 = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &L_1);
		String_t* L_3;
		L_3 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, __this);
		String_t* L_4;
		L_4 = String_Format_m9499958F4B0BB6089C75760AB647AB3CA4D55806(_stringLiteral2DAEEF072FFF48537E5ED531F51D87E1CF74D643, L_2, L_3, NULL);
		Diagnostics_SPX_TRACE_VERBOSE_m9618B77BD67A243B856AE5D2E73CB87D57D1DA6E(L_4, ((int32_t)83), _stringLiteral0E113F97D77FF0E45934C610A144C2819DC64A04, _stringLiteralA3E68153B91665DFE1E9EAC88F57E3E2533E594D, NULL);
		bool L_5;
		L_5 = VirtualFuncInvoker0< bool >::Invoke(7 /* System.Boolean System.Runtime.InteropServices.SafeHandle::ReleaseHandle() */, __this);
		return;
	}
}
// System.String Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* InteropSafeHandle_ToString_m1A7805107A6C1BB682B234E53FDCBC8C06604CC9 (InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7267B048CEDBB7AD42A5473F09940F2723B4506D);
		s_Il2CppMethodInitialized = true;
	}
	{
		intptr_t* L_0 = (&((SafeHandle_tC1A4DA80DA89B867CC011B707A07275230321BF7*)__this)->___handle_0);
		String_t* L_1;
		L_1 = IntPtr_ToString_m4B664F765633183265DE764BECD5D78FCCA20A13(L_0, _stringLiteral7267B048CEDBB7AD42A5473F09940F2723B4506D, NULL);
		return L_1;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InteropSafeHandle_Finalize_m83ABB6C2604BB75B5BB1A007DEF8ED9D78620503 (InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3A8100DC94EF854DE676FBF7FAD86E84873F3000);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA3E68153B91665DFE1E9EAC88F57E3E2533E594D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF00BD984FE2440EACF0054D39EEEAE818E9EBB32);
		s_Il2CppMethodInitialized = true;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_002a:
			{// begin finally (depth: 1)
				SafeHandle_Finalize_m37C72FD2FE3D87E32CB41FAA2FC1C6B03510337B(__this, NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			String_t* L_0;
			L_0 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, __this);
			String_t* L_1;
			L_1 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteral3A8100DC94EF854DE676FBF7FAD86E84873F3000, L_0, NULL);
			Diagnostics_SPX_TRACE_VERBOSE_m9618B77BD67A243B856AE5D2E73CB87D57D1DA6E(L_1, ((int32_t)104), _stringLiteralF00BD984FE2440EACF0054D39EEEAE818E9EBB32, _stringLiteralA3E68153B91665DFE1E9EAC88F57E3E2533E594D, NULL);
			VirtualActionInvoker1< bool >::Invoke(6 /* System.Void System.Runtime.InteropServices.SafeHandle::Dispose(System.Boolean) */, __this, (bool)0);
			goto IL_0031;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
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
// System.String Microsoft.CognitiveServices.Speech.Internal.SpxFactory::GetDataFromHandleUsingDelegate(Microsoft.CognitiveServices.Speech.Internal.SpxFactory/GetResultDelegate,Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SpxFactory_GetDataFromHandleUsingDelegate_m2292A32ABAA69783218EFADD6C6269D5527378CD (GetResultDelegate_t678B8552898C76C54DA3B9B56C14C65BDE7D434B* ___functionPtr0, InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* ___handle1, int32_t ___maxCharCount2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	intptr_t V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		String_t* L_0 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		V_0 = L_0;
		int32_t L_1 = ___maxCharCount2;
		il2cpp_codegen_runtime_class_init_inline(Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		intptr_t L_2;
		L_2 = Marshal_AllocHGlobal_m0187620AAB78B85416CE4C948B60B6A76CA84CAC(((int32_t)il2cpp_codegen_add(L_1, 1)), NULL);
		V_1 = L_2;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0026:
			{// begin finally (depth: 1)
				intptr_t L_3 = V_1;
				il2cpp_codegen_runtime_class_init_inline(Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
				Marshal_FreeHGlobal_m691596E1E19CB74918F8FF871A05E4BE80748BCC(L_3, NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			GetResultDelegate_t678B8552898C76C54DA3B9B56C14C65BDE7D434B* L_4 = ___functionPtr0;
			InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* L_5 = ___handle1;
			intptr_t L_6 = V_1;
			int32_t L_7 = ___maxCharCount2;
			NullCheck(L_4);
			intptr_t L_8;
			L_8 = GetResultDelegate_Invoke_mB1E1810F9B48533717B0A387D1AEEDE06AFDD280_inline(L_4, L_5, L_6, L_7, NULL);
			SpxExceptionThrower_ThrowIfFail_m80558DF4FFB9A961C7CCC15CD13AF53F5437BA21(L_8, NULL);
			intptr_t L_9 = V_1;
			String_t* L_10;
			L_10 = Utf8StringMarshaler_MarshalNativeToManaged_m102420BD438247158F21E76982168D6DD1EB7066(L_9, NULL);
			V_0 = L_10;
			goto IL_002d;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_002d:
	{
		String_t* L_11 = V_0;
		return L_11;
	}
}
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.SpxFactory::recognizer_create_speech_recognizer_from_config(System.IntPtr&,Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t SpxFactory_recognizer_create_speech_recognizer_from_config_mA2AA5F624FF8DE29D2444E8D8C197B8849BC5416 (intptr_t* ___recoHandle0, InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* ___speechconfig1, InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* ___audioInput2, const RuntimeMethod* method) 
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
	SafeHandle_DangerousAddRef_m9FA46208A92D8B33059B8E8712F49AE45BB5E922(___speechconfig1, (&___safeHandle_reference_incremented_for____speechconfig1), NULL);
	____speechconfig1_marshaled = reinterpret_cast<void*>((___speechconfig1)->___handle_0);

	// Marshaling of parameter '___audioInput2' to native representation
	void* ____audioInput2_marshaled = NULL;
	if (___audioInput2 == NULL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_null_exception("audioInput"), NULL);
	bool ___safeHandle_reference_incremented_for____audioInput2 = false;
	SafeHandle_DangerousAddRef_m9FA46208A92D8B33059B8E8712F49AE45BB5E922(___audioInput2, (&___safeHandle_reference_incremented_for____audioInput2), NULL);
	____audioInput2_marshaled = reinterpret_cast<void*>((___audioInput2)->___handle_0);

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_Microsoft_CognitiveServices_Speech_core_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(recognizer_create_speech_recognizer_from_config)(___recoHandle0, ____speechconfig1_marshaled, ____audioInput2_marshaled);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(___recoHandle0, ____speechconfig1_marshaled, ____audioInput2_marshaled);
	#endif

	// Marshaling cleanup of parameter '___speechconfig1' native representation
	if (___safeHandle_reference_incremented_for____speechconfig1)
	{
		SafeHandle_DangerousRelease_m30A8B4E5BEA935C8925BC2115CD0AD13B937953E(___speechconfig1, NULL);
	}

	// Marshaling cleanup of parameter '___audioInput2' native representation
	if (___safeHandle_reference_incremented_for____audioInput2)
	{
		SafeHandle_DangerousRelease_m30A8B4E5BEA935C8925BC2115CD0AD13B937953E(___audioInput2, NULL);
	}

	return returnValue;
}
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.SpxFactory::recognizer_create_translation_recognizer_from_config(System.IntPtr&,Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t SpxFactory_recognizer_create_translation_recognizer_from_config_m0C8864D041B6404EFDEDA573E1265683CD7FC31F (intptr_t* ___recoHandle0, InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* ___speechconfig1, InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* ___audioInput2, const RuntimeMethod* method) 
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
	SafeHandle_DangerousAddRef_m9FA46208A92D8B33059B8E8712F49AE45BB5E922(___speechconfig1, (&___safeHandle_reference_incremented_for____speechconfig1), NULL);
	____speechconfig1_marshaled = reinterpret_cast<void*>((___speechconfig1)->___handle_0);

	// Marshaling of parameter '___audioInput2' to native representation
	void* ____audioInput2_marshaled = NULL;
	if (___audioInput2 == NULL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_null_exception("audioInput"), NULL);
	bool ___safeHandle_reference_incremented_for____audioInput2 = false;
	SafeHandle_DangerousAddRef_m9FA46208A92D8B33059B8E8712F49AE45BB5E922(___audioInput2, (&___safeHandle_reference_incremented_for____audioInput2), NULL);
	____audioInput2_marshaled = reinterpret_cast<void*>((___audioInput2)->___handle_0);

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_Microsoft_CognitiveServices_Speech_core_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(recognizer_create_translation_recognizer_from_config)(___recoHandle0, ____speechconfig1_marshaled, ____audioInput2_marshaled);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(___recoHandle0, ____speechconfig1_marshaled, ____audioInput2_marshaled);
	#endif

	// Marshaling cleanup of parameter '___speechconfig1' native representation
	if (___safeHandle_reference_incremented_for____speechconfig1)
	{
		SafeHandle_DangerousRelease_m30A8B4E5BEA935C8925BC2115CD0AD13B937953E(___speechconfig1, NULL);
	}

	// Marshaling cleanup of parameter '___audioInput2' native representation
	if (___safeHandle_reference_incremented_for____audioInput2)
	{
		SafeHandle_DangerousRelease_m30A8B4E5BEA935C8925BC2115CD0AD13B937953E(___audioInput2, NULL);
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
intptr_t GetResultDelegate_Invoke_mB1E1810F9B48533717B0A387D1AEEDE06AFDD280_Multicast(GetResultDelegate_t678B8552898C76C54DA3B9B56C14C65BDE7D434B* __this, InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* ___handle0, intptr_t ___result1, uint32_t ___maxCharCount2, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	intptr_t retVal;
	memset((&retVal), 0, sizeof(retVal));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		GetResultDelegate_t678B8552898C76C54DA3B9B56C14C65BDE7D434B* currentDelegate = reinterpret_cast<GetResultDelegate_t678B8552898C76C54DA3B9B56C14C65BDE7D434B*>(delegatesToInvoke[i]);
		typedef intptr_t (*FunctionPointerType) (RuntimeObject*, InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D*, intptr_t, uint32_t, const RuntimeMethod*);
		retVal = ((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___handle0, ___result1, ___maxCharCount2, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
	return retVal;
}
intptr_t GetResultDelegate_Invoke_mB1E1810F9B48533717B0A387D1AEEDE06AFDD280_Open(GetResultDelegate_t678B8552898C76C54DA3B9B56C14C65BDE7D434B* __this, InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* ___handle0, intptr_t ___result1, uint32_t ___maxCharCount2, const RuntimeMethod* method)
{
	typedef intptr_t (*FunctionPointerType) (InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D*, intptr_t, uint32_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___handle0, ___result1, ___maxCharCount2, method);
}
intptr_t GetResultDelegate_Invoke_mB1E1810F9B48533717B0A387D1AEEDE06AFDD280_OpenStaticInvoker(GetResultDelegate_t678B8552898C76C54DA3B9B56C14C65BDE7D434B* __this, InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* ___handle0, intptr_t ___result1, uint32_t ___maxCharCount2, const RuntimeMethod* method)
{
	return InvokerFuncInvoker3< intptr_t, InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D*, intptr_t, uint32_t >::Invoke(__this->___method_ptr_0, method, NULL, ___handle0, ___result1, ___maxCharCount2);
}
intptr_t GetResultDelegate_Invoke_mB1E1810F9B48533717B0A387D1AEEDE06AFDD280_ClosedStaticInvoker(GetResultDelegate_t678B8552898C76C54DA3B9B56C14C65BDE7D434B* __this, InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* ___handle0, intptr_t ___result1, uint32_t ___maxCharCount2, const RuntimeMethod* method)
{
	return InvokerFuncInvoker4< intptr_t, RuntimeObject*, InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D*, intptr_t, uint32_t >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___handle0, ___result1, ___maxCharCount2);
}
IL2CPP_EXTERN_C  intptr_t DelegatePInvokeWrapper_GetResultDelegate_t678B8552898C76C54DA3B9B56C14C65BDE7D434B (GetResultDelegate_t678B8552898C76C54DA3B9B56C14C65BDE7D434B* __this, InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* ___handle0, intptr_t ___result1, uint32_t ___maxCharCount2, const RuntimeMethod* method)
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc)(void*, intptr_t, uint32_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Marshaling of parameter '___handle0' to native representation
	void* ____handle0_marshaled = NULL;
	if (___handle0 == NULL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_null_exception("handle"), NULL);
	bool ___safeHandle_reference_incremented_for____handle0 = false;
	SafeHandle_DangerousAddRef_m9FA46208A92D8B33059B8E8712F49AE45BB5E922(___handle0, (&___safeHandle_reference_incremented_for____handle0), NULL);
	____handle0_marshaled = reinterpret_cast<void*>((___handle0)->___handle_0);

	// Native function invocation
	intptr_t returnValue = il2cppPInvokeFunc(____handle0_marshaled, ___result1, ___maxCharCount2);

	// Marshaling cleanup of parameter '___handle0' native representation
	if (___safeHandle_reference_incremented_for____handle0)
	{
		SafeHandle_DangerousRelease_m30A8B4E5BEA935C8925BC2115CD0AD13B937953E(___handle0, NULL);
	}

	return returnValue;
}
// System.Void Microsoft.CognitiveServices.Speech.Internal.SpxFactory/GetResultDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GetResultDelegate__ctor_mE4D38F6D4B3F9FBE85FE26118D690DD00A195314 (GetResultDelegate_t678B8552898C76C54DA3B9B56C14C65BDE7D434B* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 3;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&GetResultDelegate_Invoke_mB1E1810F9B48533717B0A387D1AEEDE06AFDD280_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&GetResultDelegate_Invoke_mB1E1810F9B48533717B0A387D1AEEDE06AFDD280_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&GetResultDelegate_Invoke_mB1E1810F9B48533717B0A387D1AEEDE06AFDD280_Open;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 2;
		if (isOpen)
		{
			__this->___invoke_impl_1 = (intptr_t)&GetResultDelegate_Invoke_mB1E1810F9B48533717B0A387D1AEEDE06AFDD280_Open;
		}
		else
		{
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&GetResultDelegate_Invoke_mB1E1810F9B48533717B0A387D1AEEDE06AFDD280_Multicast;
}
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.SpxFactory/GetResultDelegate::Invoke(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,System.IntPtr,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t GetResultDelegate_Invoke_mB1E1810F9B48533717B0A387D1AEEDE06AFDD280 (GetResultDelegate_t678B8552898C76C54DA3B9B56C14C65BDE7D434B* __this, InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* ___handle0, intptr_t ___result1, uint32_t ___maxCharCount2, const RuntimeMethod* method) 
{
	typedef intptr_t (*FunctionPointerType) (RuntimeObject*, InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D*, intptr_t, uint32_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___handle0, ___result1, ___maxCharCount2, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t PropertyCollection_property_bag_set_string_m3B3493AE6E2894BE2258E427938B0FE52490AF64 (InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* ___propbag0, int32_t ___id1, intptr_t ___name2, intptr_t ___value3, const RuntimeMethod* method) 
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
	SafeHandle_DangerousAddRef_m9FA46208A92D8B33059B8E8712F49AE45BB5E922(___propbag0, (&___safeHandle_reference_incremented_for____propbag0), NULL);
	____propbag0_marshaled = reinterpret_cast<void*>((___propbag0)->___handle_0);

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_Microsoft_CognitiveServices_Speech_core_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(property_bag_set_string)(____propbag0_marshaled, ___id1, ___name2, ___value3);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(____propbag0_marshaled, ___id1, ___name2, ___value3);
	#endif

	// Marshaling cleanup of parameter '___propbag0' native representation
	if (___safeHandle_reference_incremented_for____propbag0)
	{
		SafeHandle_DangerousRelease_m30A8B4E5BEA935C8925BC2115CD0AD13B937953E(___propbag0, NULL);
	}

	return returnValue;
}
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.PropertyCollection::property_bag_get_string(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,System.Int32,System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t PropertyCollection_property_bag_get_string_mE4B57B59FFF4B01AB9A63785B5702904C03BB581 (InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* ___propbag0, int32_t ___id1, intptr_t ___name2, intptr_t ___defaultValue3, const RuntimeMethod* method) 
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
	SafeHandle_DangerousAddRef_m9FA46208A92D8B33059B8E8712F49AE45BB5E922(___propbag0, (&___safeHandle_reference_incremented_for____propbag0), NULL);
	____propbag0_marshaled = reinterpret_cast<void*>((___propbag0)->___handle_0);

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_Microsoft_CognitiveServices_Speech_core_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(property_bag_get_string)(____propbag0_marshaled, ___id1, ___name2, ___defaultValue3);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(____propbag0_marshaled, ___id1, ___name2, ___defaultValue3);
	#endif

	// Marshaling cleanup of parameter '___propbag0' native representation
	if (___safeHandle_reference_incremented_for____propbag0)
	{
		SafeHandle_DangerousRelease_m30A8B4E5BEA935C8925BC2115CD0AD13B937953E(___propbag0, NULL);
	}

	return returnValue;
}
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.PropertyCollection::property_bag_free_string(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t PropertyCollection_property_bag_free_string_m4B23B011D0B261E565A1E8AB841EDAC0AE48D9C4 (intptr_t ___ptr0, const RuntimeMethod* method) 
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t PropertyCollection_property_bag_release_mEA272951A28D37AE294DE83DED63D32185E99E01 (intptr_t ___propbag0, const RuntimeMethod* method) 
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
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.RecognitionResult::result_get_reason(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,Microsoft.CognitiveServices.Speech.ResultReason&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t RecognitionResult_result_get_reason_m24BBA306606BC3C381D4A4393ACB71DD4D2050DF (InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* ___result0, int32_t* ___reason1, const RuntimeMethod* method) 
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
	SafeHandle_DangerousAddRef_m9FA46208A92D8B33059B8E8712F49AE45BB5E922(___result0, (&___safeHandle_reference_incremented_for____result0), NULL);
	____result0_marshaled = reinterpret_cast<void*>((___result0)->___handle_0);

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_Microsoft_CognitiveServices_Speech_core_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(result_get_reason)(____result0_marshaled, ___reason1);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(____result0_marshaled, ___reason1);
	#endif

	// Marshaling cleanup of parameter '___result0' native representation
	if (___safeHandle_reference_incremented_for____result0)
	{
		SafeHandle_DangerousRelease_m30A8B4E5BEA935C8925BC2115CD0AD13B937953E(___result0, NULL);
	}

	return returnValue;
}
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.RecognitionResult::result_get_result_id(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,System.IntPtr,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t RecognitionResult_result_get_result_id_m0BFA3A72D4CAA06A4E41F7FC5DD49DC9EB786AB7 (InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* ___result0, intptr_t ___resultId1, uint32_t ___resultIdLength2, const RuntimeMethod* method) 
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
	SafeHandle_DangerousAddRef_m9FA46208A92D8B33059B8E8712F49AE45BB5E922(___result0, (&___safeHandle_reference_incremented_for____result0), NULL);
	____result0_marshaled = reinterpret_cast<void*>((___result0)->___handle_0);

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_Microsoft_CognitiveServices_Speech_core_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(result_get_result_id)(____result0_marshaled, ___resultId1, ___resultIdLength2);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(____result0_marshaled, ___resultId1, ___resultIdLength2);
	#endif

	// Marshaling cleanup of parameter '___result0' native representation
	if (___safeHandle_reference_incremented_for____result0)
	{
		SafeHandle_DangerousRelease_m30A8B4E5BEA935C8925BC2115CD0AD13B937953E(___result0, NULL);
	}

	return returnValue;
}
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.RecognitionResult::result_get_text(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,System.IntPtr,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t RecognitionResult_result_get_text_mE0BD740D8672D17924AFE52A56DA353AF8F9E2D8 (InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* ___result0, intptr_t ___text1, uint32_t ___textLength2, const RuntimeMethod* method) 
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
	SafeHandle_DangerousAddRef_m9FA46208A92D8B33059B8E8712F49AE45BB5E922(___result0, (&___safeHandle_reference_incremented_for____result0), NULL);
	____result0_marshaled = reinterpret_cast<void*>((___result0)->___handle_0);

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_Microsoft_CognitiveServices_Speech_core_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(result_get_text)(____result0_marshaled, ___text1, ___textLength2);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(____result0_marshaled, ___text1, ___textLength2);
	#endif

	// Marshaling cleanup of parameter '___result0' native representation
	if (___safeHandle_reference_incremented_for____result0)
	{
		SafeHandle_DangerousRelease_m30A8B4E5BEA935C8925BC2115CD0AD13B937953E(___result0, NULL);
	}

	return returnValue;
}
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.RecognitionResult::result_get_property_bag(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,System.IntPtr&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t RecognitionResult_result_get_property_bag_m5D8123FA8E1448FC52D27AA615145767ACF533C5 (InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* ___result0, intptr_t* ___hpropbag1, const RuntimeMethod* method) 
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
	SafeHandle_DangerousAddRef_m9FA46208A92D8B33059B8E8712F49AE45BB5E922(___result0, (&___safeHandle_reference_incremented_for____result0), NULL);
	____result0_marshaled = reinterpret_cast<void*>((___result0)->___handle_0);

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_Microsoft_CognitiveServices_Speech_core_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(result_get_property_bag)(____result0_marshaled, ___hpropbag1);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(____result0_marshaled, ___hpropbag1);
	#endif

	// Marshaling cleanup of parameter '___result0' native representation
	if (___safeHandle_reference_incremented_for____result0)
	{
		SafeHandle_DangerousRelease_m30A8B4E5BEA935C8925BC2115CD0AD13B937953E(___result0, NULL);
	}

	return returnValue;
}
// System.Boolean Microsoft.CognitiveServices.Speech.Internal.RecognitionResult::recognizer_result_handle_is_valid(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RecognitionResult_recognizer_result_handle_is_valid_mD2EAC27E610A8715E49F1626367788A9865CE82B (InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* ___result0, const RuntimeMethod* method) 
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
	SafeHandle_DangerousAddRef_m9FA46208A92D8B33059B8E8712F49AE45BB5E922(___result0, (&___safeHandle_reference_incremented_for____result0), NULL);
	____result0_marshaled = reinterpret_cast<void*>((___result0)->___handle_0);

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_Microsoft_CognitiveServices_Speech_core_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(recognizer_result_handle_is_valid)(____result0_marshaled);
	#else
	int32_t returnValue = il2cppPInvokeFunc(____result0_marshaled);
	#endif

	// Marshaling cleanup of parameter '___result0' native representation
	if (___safeHandle_reference_incremented_for____result0)
	{
		SafeHandle_DangerousRelease_m30A8B4E5BEA935C8925BC2115CD0AD13B937953E(___result0, NULL);
	}

	return static_cast<bool>(returnValue);
}
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.RecognitionResult::recognizer_result_handle_release(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t RecognitionResult_recognizer_result_handle_release_mD7241DA94329C30FC7576690F6090CB9083B1388 (intptr_t ___result0, const RuntimeMethod* method) 
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t RecognitionResult_translation_text_result_get_translation_text_buffer_header_mCDAF142354F6B22AF7E7A3D58665D260DB2A22C8 (InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* ___handle0, intptr_t ___translationResultBuffer1, int32_t* ___lengthPointer2, const RuntimeMethod* method) 
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
	SafeHandle_DangerousAddRef_m9FA46208A92D8B33059B8E8712F49AE45BB5E922(___handle0, (&___safeHandle_reference_incremented_for____handle0), NULL);
	____handle0_marshaled = reinterpret_cast<void*>((___handle0)->___handle_0);

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_Microsoft_CognitiveServices_Speech_core_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(translation_text_result_get_translation_text_buffer_header)(____handle0_marshaled, ___translationResultBuffer1, ___lengthPointer2);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(____handle0_marshaled, ___translationResultBuffer1, ___lengthPointer2);
	#endif

	// Marshaling cleanup of parameter '___handle0' native representation
	if (___safeHandle_reference_incremented_for____handle0)
	{
		SafeHandle_DangerousRelease_m30A8B4E5BEA935C8925BC2115CD0AD13B937953E(___handle0, NULL);
	}

	return returnValue;
}
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.RecognitionResult::translation_synthesis_result_get_audio_data(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,System.IntPtr,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t RecognitionResult_translation_synthesis_result_get_audio_data_m49A524C78B5BBBAD2093F4C61344AC81B0428D3B (InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* ___handle0, intptr_t ___audioBuffer1, int32_t* ___lengthPointer2, const RuntimeMethod* method) 
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
	SafeHandle_DangerousAddRef_m9FA46208A92D8B33059B8E8712F49AE45BB5E922(___handle0, (&___safeHandle_reference_incremented_for____handle0), NULL);
	____handle0_marshaled = reinterpret_cast<void*>((___handle0)->___handle_0);

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_Microsoft_CognitiveServices_Speech_core_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(translation_synthesis_result_get_audio_data)(____handle0_marshaled, ___audioBuffer1, ___lengthPointer2);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(____handle0_marshaled, ___audioBuffer1, ___lengthPointer2);
	#endif

	// Marshaling cleanup of parameter '___handle0' native representation
	if (___safeHandle_reference_incremented_for____handle0)
	{
		SafeHandle_DangerousRelease_m30A8B4E5BEA935C8925BC2115CD0AD13B937953E(___handle0, NULL);
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
void CallbackFunctionDelegate_Invoke_m2DB00DC2A53AF471906D80BFF8EC4378B6F81EE7_Multicast(CallbackFunctionDelegate_tC745A2B557EE8241DF1F7ABD3BFC1C8F3A2E81AA* __this, intptr_t ___hreco0, intptr_t ___hevent1, intptr_t ___context2, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		CallbackFunctionDelegate_tC745A2B557EE8241DF1F7ABD3BFC1C8F3A2E81AA* currentDelegate = reinterpret_cast<CallbackFunctionDelegate_tC745A2B557EE8241DF1F7ABD3BFC1C8F3A2E81AA*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, intptr_t, intptr_t, intptr_t, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___hreco0, ___hevent1, ___context2, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void CallbackFunctionDelegate_Invoke_m2DB00DC2A53AF471906D80BFF8EC4378B6F81EE7_Open(CallbackFunctionDelegate_tC745A2B557EE8241DF1F7ABD3BFC1C8F3A2E81AA* __this, intptr_t ___hreco0, intptr_t ___hevent1, intptr_t ___context2, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (intptr_t, intptr_t, intptr_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___hreco0, ___hevent1, ___context2, method);
}
void CallbackFunctionDelegate_Invoke_m2DB00DC2A53AF471906D80BFF8EC4378B6F81EE7_OpenStaticInvoker(CallbackFunctionDelegate_tC745A2B557EE8241DF1F7ABD3BFC1C8F3A2E81AA* __this, intptr_t ___hreco0, intptr_t ___hevent1, intptr_t ___context2, const RuntimeMethod* method)
{
	InvokerActionInvoker3< intptr_t, intptr_t, intptr_t >::Invoke(__this->___method_ptr_0, method, NULL, ___hreco0, ___hevent1, ___context2);
}
void CallbackFunctionDelegate_Invoke_m2DB00DC2A53AF471906D80BFF8EC4378B6F81EE7_ClosedStaticInvoker(CallbackFunctionDelegate_tC745A2B557EE8241DF1F7ABD3BFC1C8F3A2E81AA* __this, intptr_t ___hreco0, intptr_t ___hevent1, intptr_t ___context2, const RuntimeMethod* method)
{
	InvokerActionInvoker4< RuntimeObject*, intptr_t, intptr_t, intptr_t >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___hreco0, ___hevent1, ___context2);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_CallbackFunctionDelegate_tC745A2B557EE8241DF1F7ABD3BFC1C8F3A2E81AA (CallbackFunctionDelegate_tC745A2B557EE8241DF1F7ABD3BFC1C8F3A2E81AA* __this, intptr_t ___hreco0, intptr_t ___hevent1, intptr_t ___context2, const RuntimeMethod* method)
{
	typedef void (CDECL *PInvokeFunc)(intptr_t, intptr_t, intptr_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	il2cppPInvokeFunc(___hreco0, ___hevent1, ___context2);

}
// System.Void Microsoft.CognitiveServices.Speech.Internal.CallbackFunctionDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CallbackFunctionDelegate__ctor_m242A4949B6999B19FDCBCCB89CBBD60A2D8AB7A6 (CallbackFunctionDelegate_tC745A2B557EE8241DF1F7ABD3BFC1C8F3A2E81AA* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 3;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&CallbackFunctionDelegate_Invoke_m2DB00DC2A53AF471906D80BFF8EC4378B6F81EE7_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&CallbackFunctionDelegate_Invoke_m2DB00DC2A53AF471906D80BFF8EC4378B6F81EE7_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&CallbackFunctionDelegate_Invoke_m2DB00DC2A53AF471906D80BFF8EC4378B6F81EE7_Open;
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
	__this->___extra_arg_5 = (intptr_t)&CallbackFunctionDelegate_Invoke_m2DB00DC2A53AF471906D80BFF8EC4378B6F81EE7_Multicast;
}
// System.Void Microsoft.CognitiveServices.Speech.Internal.CallbackFunctionDelegate::Invoke(System.IntPtr,System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CallbackFunctionDelegate_Invoke_m2DB00DC2A53AF471906D80BFF8EC4378B6F81EE7 (CallbackFunctionDelegate_tC745A2B557EE8241DF1F7ABD3BFC1C8F3A2E81AA* __this, intptr_t ___hreco0, intptr_t ___hevent1, intptr_t ___context2, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, intptr_t, intptr_t, intptr_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___hreco0, ___hevent1, ___context2, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Recognizer_recognizer_get_property_bag_m4D30FE9EBED74424FCE805136396F8EDC8A81D17 (InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* ___recoHandle0, intptr_t* ___propbag1, const RuntimeMethod* method) 
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
	SafeHandle_DangerousAddRef_m9FA46208A92D8B33059B8E8712F49AE45BB5E922(___recoHandle0, (&___safeHandle_reference_incremented_for____recoHandle0), NULL);
	____recoHandle0_marshaled = reinterpret_cast<void*>((___recoHandle0)->___handle_0);

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_Microsoft_CognitiveServices_Speech_core_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(recognizer_get_property_bag)(____recoHandle0_marshaled, ___propbag1);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(____recoHandle0_marshaled, ___propbag1);
	#endif

	// Marshaling cleanup of parameter '___recoHandle0' native representation
	if (___safeHandle_reference_incremented_for____recoHandle0)
	{
		SafeHandle_DangerousRelease_m30A8B4E5BEA935C8925BC2115CD0AD13B937953E(___recoHandle0, NULL);
	}

	return returnValue;
}
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.Recognizer::recognizer_handle_release(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Recognizer_recognizer_handle_release_m6D4F7C9482D6618B26EF7AA1E0BF48B64986FCEF (intptr_t ___recoHandle0, const RuntimeMethod* method) 
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Recognizer_recognizer_start_continuous_recognition_async_m441C21EB7505A97E5F91536E25509FD729083C16 (InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* ___recoHandle0, intptr_t* ___asyncHandle1, const RuntimeMethod* method) 
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
	SafeHandle_DangerousAddRef_m9FA46208A92D8B33059B8E8712F49AE45BB5E922(___recoHandle0, (&___safeHandle_reference_incremented_for____recoHandle0), NULL);
	____recoHandle0_marshaled = reinterpret_cast<void*>((___recoHandle0)->___handle_0);

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_Microsoft_CognitiveServices_Speech_core_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(recognizer_start_continuous_recognition_async)(____recoHandle0_marshaled, ___asyncHandle1);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(____recoHandle0_marshaled, ___asyncHandle1);
	#endif

	// Marshaling cleanup of parameter '___recoHandle0' native representation
	if (___safeHandle_reference_incremented_for____recoHandle0)
	{
		SafeHandle_DangerousRelease_m30A8B4E5BEA935C8925BC2115CD0AD13B937953E(___recoHandle0, NULL);
	}

	return returnValue;
}
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.Recognizer::recognizer_start_continuous_recognition_async_wait_for(System.IntPtr,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Recognizer_recognizer_start_continuous_recognition_async_wait_for_mBB675A57CCEF423FF45B679C2878E6407C1C824C (intptr_t ___asyncHandle0, uint32_t ___milliseconds1, const RuntimeMethod* method) 
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Recognizer_recognizer_stop_continuous_recognition_async_m35C65D620FD71FE342E909F031267E73D24179EA (InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* ___recoHandle0, intptr_t* ___asyncHandle1, const RuntimeMethod* method) 
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
	SafeHandle_DangerousAddRef_m9FA46208A92D8B33059B8E8712F49AE45BB5E922(___recoHandle0, (&___safeHandle_reference_incremented_for____recoHandle0), NULL);
	____recoHandle0_marshaled = reinterpret_cast<void*>((___recoHandle0)->___handle_0);

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_Microsoft_CognitiveServices_Speech_core_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(recognizer_stop_continuous_recognition_async)(____recoHandle0_marshaled, ___asyncHandle1);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(____recoHandle0_marshaled, ___asyncHandle1);
	#endif

	// Marshaling cleanup of parameter '___recoHandle0' native representation
	if (___safeHandle_reference_incremented_for____recoHandle0)
	{
		SafeHandle_DangerousRelease_m30A8B4E5BEA935C8925BC2115CD0AD13B937953E(___recoHandle0, NULL);
	}

	return returnValue;
}
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.Recognizer::recognizer_stop_continuous_recognition_async_wait_for(System.IntPtr,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Recognizer_recognizer_stop_continuous_recognition_async_wait_for_mD01776BA308DDA07554942288BD247FF8E10ABE7 (intptr_t ___asyncHandle0, uint32_t ___milliseconds1, const RuntimeMethod* method) 
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Recognizer_recognizer_async_handle_release_m308FA74E4DC2A3B70602A6EB0B36B75293C45707 (intptr_t ___asyncHandle0, const RuntimeMethod* method) 
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Recognizer_recognizer_recognition_event_get_offset_m5798A68CFDD94101E91CEFD84C3E747272521543 (InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* ___eventHandle0, uint64_t* ___offset1, const RuntimeMethod* method) 
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
	SafeHandle_DangerousAddRef_m9FA46208A92D8B33059B8E8712F49AE45BB5E922(___eventHandle0, (&___safeHandle_reference_incremented_for____eventHandle0), NULL);
	____eventHandle0_marshaled = reinterpret_cast<void*>((___eventHandle0)->___handle_0);

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_Microsoft_CognitiveServices_Speech_core_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(recognizer_recognition_event_get_offset)(____eventHandle0_marshaled, ___offset1);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(____eventHandle0_marshaled, ___offset1);
	#endif

	// Marshaling cleanup of parameter '___eventHandle0' native representation
	if (___safeHandle_reference_incremented_for____eventHandle0)
	{
		SafeHandle_DangerousRelease_m30A8B4E5BEA935C8925BC2115CD0AD13B937953E(___eventHandle0, NULL);
	}

	return returnValue;
}
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.Recognizer::recognizer_session_event_get_session_id(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,System.IntPtr,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Recognizer_recognizer_session_event_get_session_id_mD4D0B7CC2B238EA5B51AC263ECEE64F8EB5F2EC6 (InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* ___eventHandle0, intptr_t ___sessionIdStr1, uint32_t ___sessionId2, const RuntimeMethod* method) 
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
	SafeHandle_DangerousAddRef_m9FA46208A92D8B33059B8E8712F49AE45BB5E922(___eventHandle0, (&___safeHandle_reference_incremented_for____eventHandle0), NULL);
	____eventHandle0_marshaled = reinterpret_cast<void*>((___eventHandle0)->___handle_0);

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_Microsoft_CognitiveServices_Speech_core_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(recognizer_session_event_get_session_id)(____eventHandle0_marshaled, ___sessionIdStr1, ___sessionId2);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(____eventHandle0_marshaled, ___sessionIdStr1, ___sessionId2);
	#endif

	// Marshaling cleanup of parameter '___eventHandle0' native representation
	if (___safeHandle_reference_incremented_for____eventHandle0)
	{
		SafeHandle_DangerousRelease_m30A8B4E5BEA935C8925BC2115CD0AD13B937953E(___eventHandle0, NULL);
	}

	return returnValue;
}
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.Recognizer::recognizer_recognition_event_get_result(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,System.IntPtr&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Recognizer_recognizer_recognition_event_get_result_mE8BE83DD8F3C6758A018AE4FB17DE38006C874C3 (InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* ___eventHandle0, intptr_t* ___result1, const RuntimeMethod* method) 
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
	SafeHandle_DangerousAddRef_m9FA46208A92D8B33059B8E8712F49AE45BB5E922(___eventHandle0, (&___safeHandle_reference_incremented_for____eventHandle0), NULL);
	____eventHandle0_marshaled = reinterpret_cast<void*>((___eventHandle0)->___handle_0);

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_Microsoft_CognitiveServices_Speech_core_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(recognizer_recognition_event_get_result)(____eventHandle0_marshaled, ___result1);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(____eventHandle0_marshaled, ___result1);
	#endif

	// Marshaling cleanup of parameter '___eventHandle0' native representation
	if (___safeHandle_reference_incremented_for____eventHandle0)
	{
		SafeHandle_DangerousRelease_m30A8B4E5BEA935C8925BC2115CD0AD13B937953E(___eventHandle0, NULL);
	}

	return returnValue;
}
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.Recognizer::recognizer_session_started_set_callback(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,Microsoft.CognitiveServices.Speech.Internal.CallbackFunctionDelegate,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Recognizer_recognizer_session_started_set_callback_mC6D2C10D6BAC95F8F7CB9C37E2015F99C54C800D (InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* ___recoHandle0, CallbackFunctionDelegate_tC745A2B557EE8241DF1F7ABD3BFC1C8F3A2E81AA* ___callback1, intptr_t ___context2, const RuntimeMethod* method) 
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
	SafeHandle_DangerousAddRef_m9FA46208A92D8B33059B8E8712F49AE45BB5E922(___recoHandle0, (&___safeHandle_reference_incremented_for____recoHandle0), NULL);
	____recoHandle0_marshaled = reinterpret_cast<void*>((___recoHandle0)->___handle_0);

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
		SafeHandle_DangerousRelease_m30A8B4E5BEA935C8925BC2115CD0AD13B937953E(___recoHandle0, NULL);
	}

	return returnValue;
}
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.Recognizer::recognizer_session_stopped_set_callback(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,Microsoft.CognitiveServices.Speech.Internal.CallbackFunctionDelegate,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Recognizer_recognizer_session_stopped_set_callback_mBED30C2B5B024A07E3E927F9913FF1910123184E (InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* ___recoHandle0, CallbackFunctionDelegate_tC745A2B557EE8241DF1F7ABD3BFC1C8F3A2E81AA* ___callback1, intptr_t ___context2, const RuntimeMethod* method) 
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
	SafeHandle_DangerousAddRef_m9FA46208A92D8B33059B8E8712F49AE45BB5E922(___recoHandle0, (&___safeHandle_reference_incremented_for____recoHandle0), NULL);
	____recoHandle0_marshaled = reinterpret_cast<void*>((___recoHandle0)->___handle_0);

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
		SafeHandle_DangerousRelease_m30A8B4E5BEA935C8925BC2115CD0AD13B937953E(___recoHandle0, NULL);
	}

	return returnValue;
}
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.Recognizer::recognizer_speech_start_detected_set_callback(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,Microsoft.CognitiveServices.Speech.Internal.CallbackFunctionDelegate,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Recognizer_recognizer_speech_start_detected_set_callback_mBA32FFE729A32C15079566B581EEF67EB701C41B (InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* ___recoHandle0, CallbackFunctionDelegate_tC745A2B557EE8241DF1F7ABD3BFC1C8F3A2E81AA* ___callback1, intptr_t ___context2, const RuntimeMethod* method) 
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
	SafeHandle_DangerousAddRef_m9FA46208A92D8B33059B8E8712F49AE45BB5E922(___recoHandle0, (&___safeHandle_reference_incremented_for____recoHandle0), NULL);
	____recoHandle0_marshaled = reinterpret_cast<void*>((___recoHandle0)->___handle_0);

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
		SafeHandle_DangerousRelease_m30A8B4E5BEA935C8925BC2115CD0AD13B937953E(___recoHandle0, NULL);
	}

	return returnValue;
}
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.Recognizer::recognizer_speech_end_detected_set_callback(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,Microsoft.CognitiveServices.Speech.Internal.CallbackFunctionDelegate,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Recognizer_recognizer_speech_end_detected_set_callback_mC09E537CCD4C6224A0301E8C90B827A599F37B9F (InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* ___recoHandle0, CallbackFunctionDelegate_tC745A2B557EE8241DF1F7ABD3BFC1C8F3A2E81AA* ___callback1, intptr_t ___context2, const RuntimeMethod* method) 
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
	SafeHandle_DangerousAddRef_m9FA46208A92D8B33059B8E8712F49AE45BB5E922(___recoHandle0, (&___safeHandle_reference_incremented_for____recoHandle0), NULL);
	____recoHandle0_marshaled = reinterpret_cast<void*>((___recoHandle0)->___handle_0);

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
		SafeHandle_DangerousRelease_m30A8B4E5BEA935C8925BC2115CD0AD13B937953E(___recoHandle0, NULL);
	}

	return returnValue;
}
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.Recognizer::recognizer_recognizing_set_callback(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,Microsoft.CognitiveServices.Speech.Internal.CallbackFunctionDelegate,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Recognizer_recognizer_recognizing_set_callback_mE5F4F2773A2E1F7F7960F065D7146F9BA9320B84 (InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* ___recoHandle0, CallbackFunctionDelegate_tC745A2B557EE8241DF1F7ABD3BFC1C8F3A2E81AA* ___callback1, intptr_t ___context2, const RuntimeMethod* method) 
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
	SafeHandle_DangerousAddRef_m9FA46208A92D8B33059B8E8712F49AE45BB5E922(___recoHandle0, (&___safeHandle_reference_incremented_for____recoHandle0), NULL);
	____recoHandle0_marshaled = reinterpret_cast<void*>((___recoHandle0)->___handle_0);

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
		SafeHandle_DangerousRelease_m30A8B4E5BEA935C8925BC2115CD0AD13B937953E(___recoHandle0, NULL);
	}

	return returnValue;
}
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.Recognizer::recognizer_recognized_set_callback(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,Microsoft.CognitiveServices.Speech.Internal.CallbackFunctionDelegate,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Recognizer_recognizer_recognized_set_callback_mEAB056E12958EBCB0B3AE4361560D8B496A5C831 (InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* ___recoHandle0, CallbackFunctionDelegate_tC745A2B557EE8241DF1F7ABD3BFC1C8F3A2E81AA* ___callback1, intptr_t ___context2, const RuntimeMethod* method) 
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
	SafeHandle_DangerousAddRef_m9FA46208A92D8B33059B8E8712F49AE45BB5E922(___recoHandle0, (&___safeHandle_reference_incremented_for____recoHandle0), NULL);
	____recoHandle0_marshaled = reinterpret_cast<void*>((___recoHandle0)->___handle_0);

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
		SafeHandle_DangerousRelease_m30A8B4E5BEA935C8925BC2115CD0AD13B937953E(___recoHandle0, NULL);
	}

	return returnValue;
}
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.Recognizer::recognizer_canceled_set_callback(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,Microsoft.CognitiveServices.Speech.Internal.CallbackFunctionDelegate,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Recognizer_recognizer_canceled_set_callback_m12409EB36F1DF4917D9CB80C148DF8623C1E55CD (InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* ___recoHandle0, CallbackFunctionDelegate_tC745A2B557EE8241DF1F7ABD3BFC1C8F3A2E81AA* ___callback1, intptr_t ___context2, const RuntimeMethod* method) 
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
	SafeHandle_DangerousAddRef_m9FA46208A92D8B33059B8E8712F49AE45BB5E922(___recoHandle0, (&___safeHandle_reference_incremented_for____recoHandle0), NULL);
	____recoHandle0_marshaled = reinterpret_cast<void*>((___recoHandle0)->___handle_0);

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
		SafeHandle_DangerousRelease_m30A8B4E5BEA935C8925BC2115CD0AD13B937953E(___recoHandle0, NULL);
	}

	return returnValue;
}
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.Recognizer::translator_synthesizing_audio_set_callback(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,Microsoft.CognitiveServices.Speech.Internal.CallbackFunctionDelegate,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Recognizer_translator_synthesizing_audio_set_callback_mED636C5146933A0496BC5B9240FE1E5AC9EBC88C (InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* ___recoHandle0, CallbackFunctionDelegate_tC745A2B557EE8241DF1F7ABD3BFC1C8F3A2E81AA* ___callback1, intptr_t ___context2, const RuntimeMethod* method) 
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
	SafeHandle_DangerousAddRef_m9FA46208A92D8B33059B8E8712F49AE45BB5E922(___recoHandle0, (&___safeHandle_reference_incremented_for____recoHandle0), NULL);
	____recoHandle0_marshaled = reinterpret_cast<void*>((___recoHandle0)->___handle_0);

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
		SafeHandle_DangerousRelease_m30A8B4E5BEA935C8925BC2115CD0AD13B937953E(___recoHandle0, NULL);
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
// System.Void Microsoft.CognitiveServices.Speech.Internal.SpxExceptionThrower::ThrowIfFail(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpxExceptionThrower_ThrowIfFail_m80558DF4FFB9A961C7CCC15CD13AF53F5437BA21 (intptr_t ___hr0, const RuntimeMethod* method) 
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
		L_1 = IntPtr_op_Inequality_m2F715312CBFCE7E1A81D0689F68B97218E37E5D1(L_0, (0), NULL);
		if (!L_1)
		{
			goto IL_005c;
		}
	}
	{
		intptr_t L_2 = ___hr0;
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SpxError_t1CCB290F01587A895B752386C959C6E0346321AD_il2cpp_TypeInfo_var)));
		int32_t L_3;
		L_3 = SpxError_GetErrorCode_m59998B5738166F75D78A901464B8653BF1718492(L_2, NULL);
		V_0 = L_3;
		intptr_t L_4 = ___hr0;
		String_t* L_5;
		L_5 = SpxError_GetMessage_m56F8CB8D3FCC6E557B4C0F7B8542AFF7CE76B14C(L_4, NULL);
		V_1 = L_5;
		String_t* L_6 = V_1;
		bool L_7;
		L_7 = String_IsNullOrWhiteSpace_m360E06F52DEE3AD60832FAE8D32E499B6F9B386B(L_6, NULL);
		if (!L_7)
		{
			goto IL_004e;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var)));
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_8;
		L_8 = CultureInfo_get_CurrentCulture_m43D1E4E50AB1F62ADC7C1884F28F918B53871522(NULL);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_9;
		L_9 = CultureInfo_get_CurrentCulture_m43D1E4E50AB1F62ADC7C1884F28F918B53871522(NULL);
		String_t* L_10;
		L_10 = Int32_ToString_mE871810BC163EE4EF88E7C7682A6AD39911173B8((&V_0), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD5D2875F228D651E1289522AEAAB8C492001C1BE)), L_9, NULL);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_11;
		L_11 = CultureInfo_get_CurrentCulture_m43D1E4E50AB1F62ADC7C1884F28F918B53871522(NULL);
		NullCheck(L_10);
		String_t* L_12;
		L_12 = String_ToLower_mD22E5D18F36015484078F5BA0F1687DA95904D1E(L_10, L_11, NULL);
		String_t* L_13;
		L_13 = String_Format_m75580778A544C5C8DA0F2ACEE7972A2AC944063A(L_8, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral9D994AF9D9226E9E4FB3842699E67F727590C94D)), L_12, NULL);
		V_1 = L_13;
	}

IL_004e:
	{
		intptr_t L_14 = ___hr0;
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SpxError_t1CCB290F01587A895B752386C959C6E0346321AD_il2cpp_TypeInfo_var)));
		bool L_15;
		L_15 = SpxError_ReleaseNoThrow_m33343325EA373B0D5AF143C101C92C64211E359F(L_14, NULL);
		String_t* L_16 = V_1;
		ApplicationException_tA744BED4E90266BD255285CD4CF909BAB3EE811A* L_17 = (ApplicationException_tA744BED4E90266BD255285CD4CF909BAB3EE811A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ApplicationException_tA744BED4E90266BD255285CD4CF909BAB3EE811A_il2cpp_TypeInfo_var)));
		NullCheck(L_17);
		ApplicationException__ctor_mE51100DFCDB0A0DF23B482CC43EC8E396BE7BE82(L_17, L_16, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_17, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SpxExceptionThrower_ThrowIfFail_m80558DF4FFB9A961C7CCC15CD13AF53F5437BA21_RuntimeMethod_var)));
	}

IL_005c:
	{
		return;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.Internal.SpxExceptionThrower::ThrowIfNull(System.Object,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpxExceptionThrower_ThrowIfNull_m5C9E05F3DEDEE273B1049A6052813A5870C4F223 (RuntimeObject* ___item0, String_t* ___message1, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___item0;
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		String_t* L_1 = ___message1;
		bool L_2;
		L_2 = String_IsNullOrEmpty_m54CF0907E7C4F3AFB2E796A13DC751ECBB8DB64A(L_1, NULL);
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
		ApplicationException_tA744BED4E90266BD255285CD4CF909BAB3EE811A* L_4 = (ApplicationException_tA744BED4E90266BD255285CD4CF909BAB3EE811A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ApplicationException_tA744BED4E90266BD255285CD4CF909BAB3EE811A_il2cpp_TypeInfo_var)));
		NullCheck(L_4);
		ApplicationException__ctor_mE51100DFCDB0A0DF23B482CC43EC8E396BE7BE82(L_4, L_3, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SpxExceptionThrower_ThrowIfNull_m5C9E05F3DEDEE273B1049A6052813A5870C4F223_RuntimeMethod_var)));
	}

IL_0019:
	{
		return;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.Internal.SpxExceptionThrower::ThrowIfNull(System.IntPtr,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpxExceptionThrower_ThrowIfNull_mD0AA28085EF6376F8CA07F13EE43542C501050C4 (intptr_t ___item0, String_t* ___message1, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.Internal.SpxExceptionThrower::ThrowIfFalse(System.Boolean,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpxExceptionThrower_ThrowIfFalse_m6FA4EA1F0EDB900A2F7371E78F573DDC0D735FAF (bool ___item0, int32_t ___error1, const RuntimeMethod* method) 
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
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var)));
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_1;
		L_1 = CultureInfo_get_CurrentCulture_m43D1E4E50AB1F62ADC7C1884F28F918B53871522(NULL);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_2;
		L_2 = CultureInfo_get_CurrentCulture_m43D1E4E50AB1F62ADC7C1884F28F918B53871522(NULL);
		String_t* L_3;
		L_3 = Int32_ToString_mE871810BC163EE4EF88E7C7682A6AD39911173B8((&___error1), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD5D2875F228D651E1289522AEAAB8C492001C1BE)), L_2, NULL);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_4;
		L_4 = CultureInfo_get_CurrentCulture_m43D1E4E50AB1F62ADC7C1884F28F918B53871522(NULL);
		NullCheck(L_3);
		String_t* L_5;
		L_5 = String_ToLower_mD22E5D18F36015484078F5BA0F1687DA95904D1E(L_3, L_4, NULL);
		String_t* L_6;
		L_6 = String_Format_m75580778A544C5C8DA0F2ACEE7972A2AC944063A(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB87D0C927E2633818FA2844668F5CCE68672A353)), L_5, NULL);
		V_0 = L_6;
		String_t* L_7 = V_0;
		ApplicationException_tA744BED4E90266BD255285CD4CF909BAB3EE811A* L_8 = (ApplicationException_tA744BED4E90266BD255285CD4CF909BAB3EE811A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ApplicationException_tA744BED4E90266BD255285CD4CF909BAB3EE811A_il2cpp_TypeInfo_var)));
		NullCheck(L_8);
		ApplicationException__ctor_mE51100DFCDB0A0DF23B482CC43EC8E396BE7BE82(L_8, L_7, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_8, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SpxExceptionThrower_ThrowIfFalse_m6FA4EA1F0EDB900A2F7371E78F573DDC0D735FAF_RuntimeMethod_var)));
	}

IL_0035:
	{
		return;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.Internal.SpxExceptionThrower::LogErrorIfFail(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpxExceptionThrower_LogErrorIfFail_mAD982B53E803B83F9B30CA838B8CDB1210FE1747 (intptr_t ___hr0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SpxError_t1CCB290F01587A895B752386C959C6E0346321AD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7BF1B4B734433B6AD600A9CCEB253AD568B4B6A7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD5D2875F228D651E1289522AEAAB8C492001C1BE);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	String_t* V_1 = NULL;
	{
		intptr_t L_0 = ___hr0;
		bool L_1;
		L_1 = IntPtr_op_Inequality_m2F715312CBFCE7E1A81D0689F68B97218E37E5D1(L_0, (0), NULL);
		if (!L_1)
		{
			goto IL_0045;
		}
	}
	{
		intptr_t L_2 = ___hr0;
		il2cpp_codegen_runtime_class_init_inline(SpxError_t1CCB290F01587A895B752386C959C6E0346321AD_il2cpp_TypeInfo_var);
		int32_t L_3;
		L_3 = SpxError_GetErrorCode_m59998B5738166F75D78A901464B8653BF1718492(L_2, NULL);
		V_0 = L_3;
		il2cpp_codegen_runtime_class_init_inline(CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_4;
		L_4 = CultureInfo_get_CurrentCulture_m43D1E4E50AB1F62ADC7C1884F28F918B53871522(NULL);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_5;
		L_5 = CultureInfo_get_CurrentCulture_m43D1E4E50AB1F62ADC7C1884F28F918B53871522(NULL);
		String_t* L_6;
		L_6 = Int32_ToString_mE871810BC163EE4EF88E7C7682A6AD39911173B8((&V_0), _stringLiteralD5D2875F228D651E1289522AEAAB8C492001C1BE, L_5, NULL);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_7;
		L_7 = CultureInfo_get_CurrentCulture_m43D1E4E50AB1F62ADC7C1884F28F918B53871522(NULL);
		NullCheck(L_6);
		String_t* L_8;
		L_8 = String_ToLower_mD22E5D18F36015484078F5BA0F1687DA95904D1E(L_6, L_7, NULL);
		String_t* L_9;
		L_9 = String_Format_m75580778A544C5C8DA0F2ACEE7972A2AC944063A(L_4, _stringLiteral7BF1B4B734433B6AD600A9CCEB253AD568B4B6A7, L_8, NULL);
		V_1 = L_9;
		intptr_t L_10 = ___hr0;
		SpxError_Release_mA9AC9D63595F70D08E078D5C6AD340B22A701301(L_10, NULL);
	}

IL_0045:
	{
		return;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.Internal.SpxExceptionThrower::LogError(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpxExceptionThrower_LogError_m37A2018CF9E9DCD40E8EE95F37097192A2DC184A (String_t* ___message0, const RuntimeMethod* method) 
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
// System.String Microsoft.CognitiveServices.Speech.Internal.Utf8StringMarshaler::MarshalNativeToManaged(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Utf8StringMarshaler_MarshalNativeToManaged_m102420BD438247158F21E76982168D6DD1EB7066 (intptr_t ___native0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		intptr_t L_0 = ___native0;
		bool L_1;
		L_1 = IntPtr_op_Equality_m73759B51FE326460AC87A0E386480226EF2FABED(L_0, (0), NULL);
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		String_t* L_2 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
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
		V_0 = ((int32_t)il2cpp_codegen_add(L_3, 1));
	}

IL_001b:
	{
		intptr_t L_4 = ___native0;
		int32_t L_5 = V_0;
		intptr_t L_6;
		L_6 = IntPtr_op_Addition_mC0EBEFD80883C26CF2FE4BFD7DEDECAD61480CFE(L_4, L_5, NULL);
		il2cpp_codegen_runtime_class_init_inline(Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		uint8_t L_7;
		L_7 = Marshal_ReadByte_m81C17C73C3AC80E0A9B30C893834AC71FDC1FAF4(L_6, NULL);
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
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var)));
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_10;
		L_10 = CultureInfo_get_InvariantCulture_m78DAB8CBE8766445310782B6E61FB7A9983AD425(NULL);
		int32_t L_11 = ((int32_t)4194304);
		RuntimeObject* L_12 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)), &L_11);
		String_t* L_13;
		L_13 = String_Format_m75580778A544C5C8DA0F2ACEE7972A2AC944063A(L_10, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral6CC1A826990E4F55C0AF3E80A72DC2D9003B1658)), L_12, NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_14 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_14);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_14, L_13, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_14, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Utf8StringMarshaler_MarshalNativeToManaged_m102420BD438247158F21E76982168D6DD1EB7066_RuntimeMethod_var)));
	}

IL_0058:
	{
		intptr_t L_15 = ___native0;
		int32_t L_16 = V_0;
		String_t* L_17;
		L_17 = Utf8StringMarshaler_MarshalNativeToManaged_m83BBBA155F00B4E965BA9374B19D66C60CD1C5C5(L_15, L_16, NULL);
		return L_17;
	}
}
// System.String Microsoft.CognitiveServices.Speech.Internal.Utf8StringMarshaler::MarshalNativeToManaged(System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Utf8StringMarshaler_MarshalNativeToManaged_m83BBBA155F00B4E965BA9374B19D66C60CD1C5C5 (intptr_t ___native0, int32_t ___lengthInBytes1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	{
		intptr_t L_0 = ___native0;
		bool L_1;
		L_1 = IntPtr_op_Equality_m73759B51FE326460AC87A0E386480226EF2FABED(L_0, (0), NULL);
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
		String_t* L_3 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		return L_3;
	}

IL_0018:
	{
		int32_t L_4 = ___lengthInBytes1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_4);
		V_0 = L_5;
		intptr_t L_6 = ___native0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = V_0;
		int32_t L_8 = ___lengthInBytes1;
		il2cpp_codegen_runtime_class_init_inline(Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		Marshal_Copy_m92700C9E60BAB2FDAF6CE02C16EFE9DCB7D6035E(L_6, L_7, 0, L_8, NULL);
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_9;
		L_9 = Encoding_get_UTF8_m9700ADA8E0F244002B2A89B483F1B2133B8FE336(NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = V_0;
		NullCheck(L_9);
		String_t* L_11;
		L_11 = VirtualFuncInvoker1< String_t*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(43 /* System.String System.Text.Encoding::GetString(System.Byte[]) */, L_9, L_10);
		return L_11;
	}
}
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.Utf8StringMarshaler::MarshalManagedToNative(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Utf8StringMarshaler_MarshalManagedToNative_m9048724C7EA2DE6AB4263E09D6B7C3942BD936B1 (String_t* ___str0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		String_t* L_0 = ___str0;
		intptr_t L_1;
		L_1 = Utf8StringMarshaler_MarshalManagedToNative_m095E9D243061701D480D09FEA28256912FAC5ACA(L_0, (&V_0), NULL);
		return L_1;
	}
}
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.Utf8StringMarshaler::MarshalManagedToNative(System.String,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Utf8StringMarshaler_MarshalManagedToNative_m095E9D243061701D480D09FEA28256912FAC5ACA (String_t* ___str0, int32_t* ___length1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
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
		return (0);
	}

IL_000c:
	{
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_2;
		L_2 = Encoding_get_UTF8_m9700ADA8E0F244002B2A89B483F1B2133B8FE336(NULL);
		String_t* L_3 = ___str0;
		NullCheck(L_2);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4;
		L_4 = VirtualFuncInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, String_t* >::Invoke(26 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_2, L_3);
		V_0 = L_4;
		int32_t* L_5 = ___length1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = V_0;
		NullCheck(L_6);
		*((int32_t*)L_5) = (int32_t)((int32_t)il2cpp_codegen_add(((int32_t)(((RuntimeArray*)L_6)->max_length)), 1));
		int32_t* L_7 = ___length1;
		int32_t L_8 = *((int32_t*)L_7);
		il2cpp_codegen_runtime_class_init_inline(Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		intptr_t L_9;
		L_9 = Marshal_AllocHGlobal_m0187620AAB78B85416CE4C948B60B6A76CA84CAC(L_8, NULL);
		V_1 = L_9;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = V_0;
		intptr_t L_11 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12 = V_0;
		NullCheck(L_12);
		Marshal_Copy_mB1CECEA99856A7296FF33D2C9C51CC7E7150E5F8(L_10, 0, L_11, ((int32_t)(((RuntimeArray*)L_12)->max_length)), NULL);
		intptr_t L_13 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14 = V_0;
		NullCheck(L_14);
		intptr_t L_15;
		L_15 = IntPtr_op_Addition_mC0EBEFD80883C26CF2FE4BFD7DEDECAD61480CFE(L_13, ((int32_t)(((RuntimeArray*)L_14)->max_length)), NULL);
		Marshal_WriteByte_m317EFB098D04227DE39B0776847758BFA108224E(L_15, (uint8_t)0, NULL);
		intptr_t L_16 = V_1;
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* SessionEventArgs_get_SessionId_m8963B1EBE96E2EC946789DE47BBC4A17292FDF33_inline (SessionEventArgs_t06C8DB22E01F18F0B45A4E719BECB043B4D961BC* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CSessionIdU3Ek__BackingField_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint64_t RecognitionEventArgs_get_Offset_m7518854BD1D37BB220A79F81301A0A07E7D791A9_inline (RecognitionEventArgs_tF3045EA40FBF0ACD26A0B6F7D4144036AA7D05F9* __this, const RuntimeMethod* method) 
{
	{
		uint64_t L_0 = __this->___U3COffsetU3Ek__BackingField_5;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RecognitionResult_set_Properties_m4882E5F4FF2BD9889CA0D982BA14CB48E6936468_inline (RecognitionResult_t900FA7A9A16DB8B9FDE5395B1B773BDC63BE474F* __this, PropertyCollection_tD2FEDF489ECC1689767DEE33A0152F1FA719AA53* ___value0, const RuntimeMethod* method) 
{
	{
		PropertyCollection_tD2FEDF489ECC1689767DEE33A0152F1FA719AA53* L_0 = ___value0;
		__this->___U3CPropertiesU3Ek__BackingField_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CPropertiesU3Ek__BackingField_3), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CancellationDetails_set_Reason_m12D27884D7BBCF9EC1908A1DFF49066DEF4EF2B5_inline (CancellationDetails_t3A257E993FAECAD1A9866267C438E47CFA1D308A* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___value0;
		__this->___U3CReasonU3Ek__BackingField_0 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CancellationDetails_set_ErrorCode_m78B75A1457D448E18D427A192E95A964218C8A74_inline (CancellationDetails_t3A257E993FAECAD1A9866267C438E47CFA1D308A* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___value0;
		__this->___U3CErrorCodeU3Ek__BackingField_1 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CancellationDetails_set_ErrorDetails_m22095079546C7E7DC32D28BB7D2271B3E68ACE93_inline (CancellationDetails_t3A257E993FAECAD1A9866267C438E47CFA1D308A* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___value0;
		__this->___U3CErrorDetailsU3Ek__BackingField_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CErrorDetailsU3Ek__BackingField_2), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t CancellationDetails_get_Reason_m353778943984FF273C594BBB7D83D519C0B58180_inline (CancellationDetails_t3A257E993FAECAD1A9866267C438E47CFA1D308A* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CReasonU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* CancellationDetails_get_ErrorDetails_mB3C4D6386464A3C5168B7EEFAAE45EC62EF95636_inline (CancellationDetails_t3A257E993FAECAD1A9866267C438E47CFA1D308A* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CErrorDetailsU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR intptr_t GetRecognizerFromConfigDelegate_Invoke_m186F198255E0AFC6B9A20C2689202A1BFF62C4FD_inline (GetRecognizerFromConfigDelegate_t17EEE1C5E4305DB57FCBE2C975DB62B9BA4B584D* __this, intptr_t* ___phreco0, InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* ___speechconfig1, InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* ___audioInput2, const RuntimeMethod* method) 
{
	typedef intptr_t (*FunctionPointerType) (RuntimeObject*, intptr_t*, InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D*, InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___phreco0, ___speechconfig1, ___audioInput2, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR SpeechRecognitionResult_tBA76D21E6D62BB6B2CDC9F83766BB1E791649D94* SpeechRecognitionEventArgs_get_Result_m775B21D1681EC803EE52F6FA345D0B5AB14D40D9_inline (SpeechRecognitionEventArgs_tA7F1649E47FF3239DACE11D5537ECC0AC23E94BD* __this, const RuntimeMethod* method) 
{
	{
		SpeechRecognitionResult_tBA76D21E6D62BB6B2CDC9F83766BB1E791649D94* L_0 = __this->___U3CResultU3Ek__BackingField_6;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t CancellationDetails_get_ErrorCode_m01B8889CC68F1443F822B1E8082F6B8378C723AF_inline (CancellationDetails_t3A257E993FAECAD1A9866267C438E47CFA1D308A* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CErrorCodeU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t SpeechRecognitionCanceledEventArgs_get_Reason_m43CDCCC1311B234FB9F7C31BF966478DEB156815_inline (SpeechRecognitionCanceledEventArgs_t5FB6DBEE3C3E77AE97C05A03CE7CBC0BD387CA86* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CReasonU3Ek__BackingField_7;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t SpeechRecognitionCanceledEventArgs_get_ErrorCode_m54BF697777056D1E09CEDB6E005095970A48B5D2_inline (SpeechRecognitionCanceledEventArgs_t5FB6DBEE3C3E77AE97C05A03CE7CBC0BD387CA86* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CErrorCodeU3Ek__BackingField_8;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SpeechRecognizer_set_Properties_mCEEEDD714A579195CF49B0F9E4609DFD1EE2C7FC_inline (SpeechRecognizer_t949CB7F9294C8FD93325B16A1791A28325C2203B* __this, PropertyCollection_tD2FEDF489ECC1689767DEE33A0152F1FA719AA53* ___value0, const RuntimeMethod* method) 
{
	{
		PropertyCollection_tD2FEDF489ECC1689767DEE33A0152F1FA719AA53* L_0 = ___value0;
		__this->___U3CPropertiesU3Ek__BackingField_25 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CPropertiesU3Ek__BackingField_25), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR PropertyCollection_tD2FEDF489ECC1689767DEE33A0152F1FA719AA53* SpeechRecognizer_get_Properties_m1C0886BAAE462E98012C7EF3CED1E0314E341024_inline (SpeechRecognizer_t949CB7F9294C8FD93325B16A1791A28325C2203B* __this, const RuntimeMethod* method) 
{
	{
		PropertyCollection_tD2FEDF489ECC1689767DEE33A0152F1FA719AA53* L_0 = __this->___U3CPropertiesU3Ek__BackingField_25;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* TranslationRecognitionResult_get_Translations_mF40040BB24857FB1E87A6ACAEE7901DA628709F3_inline (TranslationRecognitionResult_tE95FF320EDD627570B9D1B3C710EB7925CC54D19* __this, const RuntimeMethod* method) 
{
	{
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_0 = __this->___translationTextResultMap_6;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TranslationRecognizer_set_Properties_m5576585D06ED00C702202DE79DA2E1DE600CA8C0_inline (TranslationRecognizer_tAEE1F79841E087D238E7450755C96DD589BE0168* __this, PropertyCollection_tD2FEDF489ECC1689767DEE33A0152F1FA719AA53* ___value0, const RuntimeMethod* method) 
{
	{
		PropertyCollection_tD2FEDF489ECC1689767DEE33A0152F1FA719AA53* L_0 = ___value0;
		__this->___U3CPropertiesU3Ek__BackingField_23 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CPropertiesU3Ek__BackingField_23), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR PropertyCollection_tD2FEDF489ECC1689767DEE33A0152F1FA719AA53* TranslationRecognizer_get_Properties_m041ED0EC39816383C2789C9784B00B7F50589ABF_inline (TranslationRecognizer_tAEE1F79841E087D238E7450755C96DD589BE0168* __this, const RuntimeMethod* method) 
{
	{
		PropertyCollection_tD2FEDF489ECC1689767DEE33A0152F1FA719AA53* L_0 = __this->___U3CPropertiesU3Ek__BackingField_23;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t TranslationSynthesisResult_get_Reason_mA851E1881441C4F278FA28AF75BE94B21DFC327F_inline (TranslationSynthesisResult_tCCE322C2C7FDC0F193CFD38F27E107E88FAF48D2* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CReasonU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TranslationSynthesisResult_tCCE322C2C7FDC0F193CFD38F27E107E88FAF48D2* TranslationSynthesisEventArgs_get_Result_mCA8BD226299930517C948A066CB4B247A304C515_inline (TranslationSynthesisEventArgs_t8FB96FD526982A583F5A91C6EF7CB17C1210A59F* __this, const RuntimeMethod* method) 
{
	{
		TranslationSynthesisResult_tCCE322C2C7FDC0F193CFD38F27E107E88FAF48D2* L_0 = __this->___U3CResultU3Ek__BackingField_5;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TranslationRecognitionResult_tE95FF320EDD627570B9D1B3C710EB7925CC54D19* TranslationRecognitionEventArgs_get_Result_m047C28B1FF5C9231EF5D9CE4957C05CD2E4B5CDD_inline (TranslationRecognitionEventArgs_t0F1D46343AA090830357DA90FD500DC7FC75BEF0* __this, const RuntimeMethod* method) 
{
	{
		TranslationRecognitionResult_tE95FF320EDD627570B9D1B3C710EB7925CC54D19* L_0 = __this->___U3CResultU3Ek__BackingField_6;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t TranslationRecognitionCanceledEventArgs_get_Reason_m93D03951586AFFFF3DF9AD531E90A6A6AC5A2809_inline (TranslationRecognitionCanceledEventArgs_tD5827BE8533B28001EA604E99F9C8E73FFD0B853* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CReasonU3Ek__BackingField_7;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t TranslationRecognitionCanceledEventArgs_get_ErrorCode_mCD275DF83031DDBD93498938B45A578946631D24_inline (TranslationRecognitionCanceledEventArgs_tD5827BE8533B28001EA604E99F9C8E73FFD0B853* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CErrorCodeU3Ek__BackingField_8;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SafeHandle_SetHandle_m003D64748F9DFBA1E3C0B23798C23BA81AA21C2A_inline (SafeHandle_tC1A4DA80DA89B867CC011B707A07275230321BF7* __this, intptr_t ___handle0, const RuntimeMethod* method) 
{
	{
		intptr_t L_0 = ___handle0;
		__this->___handle_0 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR intptr_t HandleRelease_Invoke_m5A6CE4A6071A868B9695E55991957B8C520128EB_inline (HandleRelease_tDA5C5C8C145FFFB7E9AE3ADB1506118017AC70F9* __this, intptr_t ___hresult0, const RuntimeMethod* method) 
{
	typedef intptr_t (*FunctionPointerType) (RuntimeObject*, intptr_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___hresult0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR intptr_t GetResultDelegate_Invoke_mB1E1810F9B48533717B0A387D1AEEDE06AFDD280_inline (GetResultDelegate_t678B8552898C76C54DA3B9B56C14C65BDE7D434B* __this, InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* ___handle0, intptr_t ___result1, uint32_t ___maxCharCount2, const RuntimeMethod* method) 
{
	typedef intptr_t (*FunctionPointerType) (RuntimeObject*, InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D*, intptr_t, uint32_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___handle0, ___result1, ___maxCharCount2, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void EventHandler_1_Invoke_mBD72C04FF5A08A2EA93DFD21037CD1C27A48D07A_gshared_inline (EventHandler_1_tD8C4A5BE1F7C91B1A7E99AE87AFD2F5432C38746* __this, RuntimeObject* ___sender0, RuntimeObject* ___e1, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___sender0, ___e1, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Key_mBD8EA7557C27E6956F2AF29DA3F7499B2F51A282_gshared_inline (KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->___key_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Value_mC6BD8075F9C9DDEF7B4D731E5C38EC19103988E7_gshared_inline (KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->___value_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* Array_Empty_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m89F7B056854DF715AA3E2B78EB84D5FA3878E474_gshared_inline (const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 0));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ((EmptyArray_1_t7187E746F328254739F076CFBCAABB28D4B4554C_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 0)))->___Value_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_gshared_inline (const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 0));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = ((EmptyArray_1_tDF0DD7256B115243AA6BD5558417387A734240EE_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 0)))->___Value_0;
		return L_0;
	}
}
