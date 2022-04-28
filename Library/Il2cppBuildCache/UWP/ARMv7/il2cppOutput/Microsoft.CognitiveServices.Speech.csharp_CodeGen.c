#include "pch-c.h"
#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include "codegen/il2cpp-codegen-metadata.h"


extern const RuntimeMethod* Recognizer_FireEvent_SetSessionStarted_m52E09A4B81972BF98DDFF6F1901AF63188C91629_RuntimeMethod_var;
extern const RuntimeMethod* Recognizer_FireEvent_SetSessionStopped_m1925D97F4E29071799739DAE667160A804385C25_RuntimeMethod_var;
extern const RuntimeMethod* Recognizer_FireEvent_SpeechEndDetected_m855530988936AC915A4277BF08A8EF863933990E_RuntimeMethod_var;
extern const RuntimeMethod* Recognizer_FireEvent_SpeechStartDetected_mBBD9DA4BDE0F8E8E8545C4BACEC0068B86F16DAF_RuntimeMethod_var;
extern const RuntimeMethod* SpeechRecognizer_FireEvent_Canceled_m2034F62D22C618A305A7E5E7DCB416439CDD3F6E_RuntimeMethod_var;
extern const RuntimeMethod* SpeechRecognizer_FireEvent_Recognized_m1C49575EF31FF9111D7CC4CC679D1582B525F886_RuntimeMethod_var;
extern const RuntimeMethod* SpeechRecognizer_FireEvent_Recognizing_m5F41324B4925637FC1859240D793E0038ABE9EA4_RuntimeMethod_var;
extern const RuntimeMethod* TranslationRecognizer_FireEvent_Canceled_m7875F1D6DA9BCA902CF05D571D55EF1055AB2E82_RuntimeMethod_var;
extern const RuntimeMethod* TranslationRecognizer_FireEvent_Recognized_m37BF6A7CAA9794E1DBFAFB10D294B7DB958B9836_RuntimeMethod_var;
extern const RuntimeMethod* TranslationRecognizer_FireEvent_Recognizing_m9C07BDADD03B380A822B8C7C96CD90C471447E4C_RuntimeMethod_var;
extern const RuntimeMethod* TranslationRecognizer_FireEvent_SynthesisResult_m6AE445D95E7487065CAB7589BDD9616335B69737_RuntimeMethod_var;



// 0x00000001 System.Void Microsoft.CognitiveServices.Speech.PropertyCollection::.ctor(System.IntPtr)
extern void PropertyCollection__ctor_m8F53EB9B9655888D9E2B7AEBB9460B49265618B7 (void);
// 0x00000002 System.Void Microsoft.CognitiveServices.Speech.PropertyCollection::Close()
extern void PropertyCollection_Close_mD3C12EE3FDB07C2A9D8C5E7C35C968E5A299BD9F (void);
// 0x00000003 System.String Microsoft.CognitiveServices.Speech.PropertyCollection::GetProperty(Microsoft.CognitiveServices.Speech.PropertyId)
extern void PropertyCollection_GetProperty_mC3CEE491F6DF720BDAE92D54A47E6420DCF146B5 (void);
// 0x00000004 System.Void Microsoft.CognitiveServices.Speech.PropertyCollection::SetProperty(Microsoft.CognitiveServices.Speech.PropertyId,System.String)
extern void PropertyCollection_SetProperty_mA4F3EDF9EE715D7F2C052E11948FCF36A4400024 (void);
// 0x00000005 System.Void Microsoft.CognitiveServices.Speech.PropertyCollection::SetProperty(System.String,System.String)
extern void PropertyCollection_SetProperty_m32FCC0FEE788D8E7BC18427D47C37535F389EC94 (void);
// 0x00000006 System.String Microsoft.CognitiveServices.Speech.PropertyCollection::GetPropertyString(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,System.Int32,System.String,System.String)
extern void PropertyCollection_GetPropertyString_mE4586EBDDDD6EAAC938A0717F3ED064BF55EB83A (void);
// 0x00000007 System.Void Microsoft.CognitiveServices.Speech.RecognitionEventArgs::.ctor(System.IntPtr)
extern void RecognitionEventArgs__ctor_m16B7E8B089A37C27BC87BEA572A1E4B2EA9E7B34 (void);
// 0x00000008 System.UInt64 Microsoft.CognitiveServices.Speech.RecognitionEventArgs::get_Offset()
extern void RecognitionEventArgs_get_Offset_m7518854BD1D37BB220A79F81301A0A07E7D791A9 (void);
// 0x00000009 System.String Microsoft.CognitiveServices.Speech.RecognitionEventArgs::ToString()
extern void RecognitionEventArgs_ToString_mF2E5686250B94CC3327CD6EB9EC1F89F365E8788 (void);
// 0x0000000A System.Void Microsoft.CognitiveServices.Speech.RecognitionResult::.ctor(System.IntPtr)
extern void RecognitionResult__ctor_mF52685BDF0D0D81056CF4F2D7929B837D3E4504E (void);
// 0x0000000B System.String Microsoft.CognitiveServices.Speech.RecognitionResult::get_ResultId()
extern void RecognitionResult_get_ResultId_m9CF0F0A305756122CEFD17C636900B33C167A973 (void);
// 0x0000000C Microsoft.CognitiveServices.Speech.ResultReason Microsoft.CognitiveServices.Speech.RecognitionResult::get_Reason()
extern void RecognitionResult_get_Reason_m066811BCC260ED5344D289BE7930228203781E67 (void);
// 0x0000000D System.String Microsoft.CognitiveServices.Speech.RecognitionResult::get_Text()
extern void RecognitionResult_get_Text_mDC9F2CE6BE9519B218C81FECCC1BC35CA7274836 (void);
// 0x0000000E Microsoft.CognitiveServices.Speech.PropertyCollection Microsoft.CognitiveServices.Speech.RecognitionResult::get_Properties()
extern void RecognitionResult_get_Properties_mBC89268B2B6560AC90F7EE6837AB6E3657B212D3 (void);
// 0x0000000F System.Void Microsoft.CognitiveServices.Speech.RecognitionResult::set_Properties(Microsoft.CognitiveServices.Speech.PropertyCollection)
extern void RecognitionResult_set_Properties_m4882E5F4FF2BD9889CA0D982BA14CB48E6936468 (void);
// 0x00000010 System.String Microsoft.CognitiveServices.Speech.RecognitionResult::ToString()
extern void RecognitionResult_ToString_m7C6EE65B05B5F984DB102F9041EFDA7403547F95 (void);
// 0x00000011 Microsoft.CognitiveServices.Speech.CancellationDetails Microsoft.CognitiveServices.Speech.CancellationDetails::FromResult(Microsoft.CognitiveServices.Speech.RecognitionResult)
extern void CancellationDetails_FromResult_m6C75E2AD2521230D540BA1BCF5515ECC29DBF968 (void);
// 0x00000012 System.Void Microsoft.CognitiveServices.Speech.CancellationDetails::.ctor(Microsoft.CognitiveServices.Speech.RecognitionResult)
extern void CancellationDetails__ctor_m5ECA54A2F0D76D1BF8E39C7AEF5DCC99D8672E26 (void);
// 0x00000013 Microsoft.CognitiveServices.Speech.CancellationReason Microsoft.CognitiveServices.Speech.CancellationDetails::get_Reason()
extern void CancellationDetails_get_Reason_m353778943984FF273C594BBB7D83D519C0B58180 (void);
// 0x00000014 System.Void Microsoft.CognitiveServices.Speech.CancellationDetails::set_Reason(Microsoft.CognitiveServices.Speech.CancellationReason)
extern void CancellationDetails_set_Reason_m12D27884D7BBCF9EC1908A1DFF49066DEF4EF2B5 (void);
// 0x00000015 Microsoft.CognitiveServices.Speech.CancellationErrorCode Microsoft.CognitiveServices.Speech.CancellationDetails::get_ErrorCode()
extern void CancellationDetails_get_ErrorCode_m01B8889CC68F1443F822B1E8082F6B8378C723AF (void);
// 0x00000016 System.Void Microsoft.CognitiveServices.Speech.CancellationDetails::set_ErrorCode(Microsoft.CognitiveServices.Speech.CancellationErrorCode)
extern void CancellationDetails_set_ErrorCode_m78B75A1457D448E18D427A192E95A964218C8A74 (void);
// 0x00000017 System.String Microsoft.CognitiveServices.Speech.CancellationDetails::get_ErrorDetails()
extern void CancellationDetails_get_ErrorDetails_mB3C4D6386464A3C5168B7EEFAAE45EC62EF95636 (void);
// 0x00000018 System.Void Microsoft.CognitiveServices.Speech.CancellationDetails::set_ErrorDetails(System.String)
extern void CancellationDetails_set_ErrorDetails_m22095079546C7E7DC32D28BB7D2271B3E68ACE93 (void);
// 0x00000019 System.String Microsoft.CognitiveServices.Speech.CancellationDetails::ToString()
extern void CancellationDetails_ToString_m5E209DF29443488B64A6A0635234FD138DA3853B (void);
// 0x0000001A System.Void Microsoft.CognitiveServices.Speech.Recognizer::add__SessionStarted(System.EventHandler`1<Microsoft.CognitiveServices.Speech.SessionEventArgs>)
extern void Recognizer_add__SessionStarted_m631F4CB4BF55A534C3A8CB8EAEC57EE7139BE4CD (void);
// 0x0000001B System.Void Microsoft.CognitiveServices.Speech.Recognizer::remove__SessionStarted(System.EventHandler`1<Microsoft.CognitiveServices.Speech.SessionEventArgs>)
extern void Recognizer_remove__SessionStarted_m1FB4C79584D375A664EFB1916F4127D741FBA016 (void);
// 0x0000001C System.Void Microsoft.CognitiveServices.Speech.Recognizer::add__SessionStopped(System.EventHandler`1<Microsoft.CognitiveServices.Speech.SessionEventArgs>)
extern void Recognizer_add__SessionStopped_mC531DA001A86C34512638EC7AD42682AD216D32E (void);
// 0x0000001D System.Void Microsoft.CognitiveServices.Speech.Recognizer::remove__SessionStopped(System.EventHandler`1<Microsoft.CognitiveServices.Speech.SessionEventArgs>)
extern void Recognizer_remove__SessionStopped_m75B4EAF7FE72A73C707DD5AD1CD02D2A82F48AAA (void);
// 0x0000001E System.Void Microsoft.CognitiveServices.Speech.Recognizer::add__SpeechStartDetected(System.EventHandler`1<Microsoft.CognitiveServices.Speech.RecognitionEventArgs>)
extern void Recognizer_add__SpeechStartDetected_mC7B7A06E0F81282B1A983A1B99887C9E558BB750 (void);
// 0x0000001F System.Void Microsoft.CognitiveServices.Speech.Recognizer::remove__SpeechStartDetected(System.EventHandler`1<Microsoft.CognitiveServices.Speech.RecognitionEventArgs>)
extern void Recognizer_remove__SpeechStartDetected_m3DB6ED1521289E1BCB5BF3032F68C2452A2F8830 (void);
// 0x00000020 System.Void Microsoft.CognitiveServices.Speech.Recognizer::add__SpeechEndDetected(System.EventHandler`1<Microsoft.CognitiveServices.Speech.RecognitionEventArgs>)
extern void Recognizer_add__SpeechEndDetected_m22831739B45057F6783CF4C784E8829A1A7D27A3 (void);
// 0x00000021 System.Void Microsoft.CognitiveServices.Speech.Recognizer::remove__SpeechEndDetected(System.EventHandler`1<Microsoft.CognitiveServices.Speech.RecognitionEventArgs>)
extern void Recognizer_remove__SpeechEndDetected_m335107F7B597E13480CF0F21EB83795CFFC9B4D8 (void);
// 0x00000022 System.Void Microsoft.CognitiveServices.Speech.Recognizer::add_SessionStarted(System.EventHandler`1<Microsoft.CognitiveServices.Speech.SessionEventArgs>)
extern void Recognizer_add_SessionStarted_mB7176B7EFAA7EF6CC237B3D46C760A7C309968BD (void);
// 0x00000023 System.Void Microsoft.CognitiveServices.Speech.Recognizer::remove_SessionStarted(System.EventHandler`1<Microsoft.CognitiveServices.Speech.SessionEventArgs>)
extern void Recognizer_remove_SessionStarted_m80E3AA294063F4AC3B94DFC9268FB59E4ACEE3AC (void);
// 0x00000024 System.Void Microsoft.CognitiveServices.Speech.Recognizer::add_SessionStopped(System.EventHandler`1<Microsoft.CognitiveServices.Speech.SessionEventArgs>)
extern void Recognizer_add_SessionStopped_mE532CD715B13EE7A206285576688D2F091B716AA (void);
// 0x00000025 System.Void Microsoft.CognitiveServices.Speech.Recognizer::remove_SessionStopped(System.EventHandler`1<Microsoft.CognitiveServices.Speech.SessionEventArgs>)
extern void Recognizer_remove_SessionStopped_m07F4261BD9721CA3EBEB2322AF5887A3089D04B7 (void);
// 0x00000026 System.Void Microsoft.CognitiveServices.Speech.Recognizer::add_SpeechStartDetected(System.EventHandler`1<Microsoft.CognitiveServices.Speech.RecognitionEventArgs>)
extern void Recognizer_add_SpeechStartDetected_mA70F8631EF165EC1924C86E7DE622BAEC1A84EC6 (void);
// 0x00000027 System.Void Microsoft.CognitiveServices.Speech.Recognizer::remove_SpeechStartDetected(System.EventHandler`1<Microsoft.CognitiveServices.Speech.RecognitionEventArgs>)
extern void Recognizer_remove_SpeechStartDetected_m36A954D8D9CEA2A39057AE2D3E23FB0BA262B8C1 (void);
// 0x00000028 System.Void Microsoft.CognitiveServices.Speech.Recognizer::add_SpeechEndDetected(System.EventHandler`1<Microsoft.CognitiveServices.Speech.RecognitionEventArgs>)
extern void Recognizer_add_SpeechEndDetected_mD340F4717F391593D8DB5A538E983F114F9079F7 (void);
// 0x00000029 System.Void Microsoft.CognitiveServices.Speech.Recognizer::remove_SpeechEndDetected(System.EventHandler`1<Microsoft.CognitiveServices.Speech.RecognitionEventArgs>)
extern void Recognizer_remove_SpeechEndDetected_mAC602E23E1C084A837A4068BB933C82A6329EBA4 (void);
// 0x0000002A System.Void Microsoft.CognitiveServices.Speech.Recognizer::.ctor(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle)
extern void Recognizer__ctor_mB448C82F7106784983B2332E0C35FAC613A10A05 (void);
// 0x0000002B System.Void Microsoft.CognitiveServices.Speech.Recognizer::Finalize()
extern void Recognizer_Finalize_m65C041518559BC7332B58EC3BD23603D6FAEA7F5 (void);
// 0x0000002C System.Void Microsoft.CognitiveServices.Speech.Recognizer::Dispose()
extern void Recognizer_Dispose_m53C30ACE1A7745127F79CB19F92894F67407E7CF (void);
// 0x0000002D System.Void Microsoft.CognitiveServices.Speech.Recognizer::Dispose(System.Boolean)
extern void Recognizer_Dispose_m41B4467C6470F75AD4C81138860A38D98B55E31B (void);
// 0x0000002E System.Void Microsoft.CognitiveServices.Speech.Recognizer::FireEvent_SetSessionStarted(System.IntPtr,System.IntPtr,System.IntPtr)
extern void Recognizer_FireEvent_SetSessionStarted_m52E09A4B81972BF98DDFF6F1901AF63188C91629 (void);
// 0x0000002F System.Void Microsoft.CognitiveServices.Speech.Recognizer::FireEvent_SetSessionStopped(System.IntPtr,System.IntPtr,System.IntPtr)
extern void Recognizer_FireEvent_SetSessionStopped_m1925D97F4E29071799739DAE667160A804385C25 (void);
// 0x00000030 System.Void Microsoft.CognitiveServices.Speech.Recognizer::FireEvent_SpeechStartDetected(System.IntPtr,System.IntPtr,System.IntPtr)
extern void Recognizer_FireEvent_SpeechStartDetected_mBBD9DA4BDE0F8E8E8545C4BACEC0068B86F16DAF (void);
// 0x00000031 System.Void Microsoft.CognitiveServices.Speech.Recognizer::FireEvent_SpeechEndDetected(System.IntPtr,System.IntPtr,System.IntPtr)
extern void Recognizer_FireEvent_SpeechEndDetected_m855530988936AC915A4277BF08A8EF863933990E (void);
// 0x00000032 System.Void Microsoft.CognitiveServices.Speech.Recognizer::DoAsyncRecognitionAction(System.Action)
extern void Recognizer_DoAsyncRecognitionAction_m83046B03472BABA6160D5C56198373502725FE84 (void);
// 0x00000033 System.Void Microsoft.CognitiveServices.Speech.Recognizer::StartContinuousRecognition()
extern void Recognizer_StartContinuousRecognition_mB8E850543B3369010BFDC121ADC45B7F4D3EB0C2 (void);
// 0x00000034 System.Void Microsoft.CognitiveServices.Speech.Recognizer::StopContinuousRecognition()
extern void Recognizer_StopContinuousRecognition_mAB43FB36FA7F893031EE6EF33D7E980474FAE6D8 (void);
// 0x00000035 Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle Microsoft.CognitiveServices.Speech.Recognizer::FromConfig(Microsoft.CognitiveServices.Speech.Recognizer/GetRecognizerFromConfigDelegate,Microsoft.CognitiveServices.Speech.SpeechConfig)
extern void Recognizer_FromConfig_m987A4CFBF642C006F1CCC60AE435E7C825B55F64 (void);
// 0x00000036 System.Void Microsoft.CognitiveServices.Speech.Recognizer/GetRecognizerFromConfigDelegate::.ctor(System.Object,System.IntPtr)
extern void GetRecognizerFromConfigDelegate__ctor_m8225A337DC771AF4368C036689A77F76D48D4567 (void);
// 0x00000037 System.IntPtr Microsoft.CognitiveServices.Speech.Recognizer/GetRecognizerFromConfigDelegate::Invoke(System.IntPtr&,Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle)
extern void GetRecognizerFromConfigDelegate_Invoke_m186F198255E0AFC6B9A20C2689202A1BFF62C4FD (void);
// 0x00000038 System.Void Microsoft.CognitiveServices.Speech.SessionEventArgs::.ctor(System.IntPtr)
extern void SessionEventArgs__ctor_m240C60ECA28570ED5A8FF624C62BAE2EBA25A5AA (void);
// 0x00000039 System.String Microsoft.CognitiveServices.Speech.SessionEventArgs::get_SessionId()
extern void SessionEventArgs_get_SessionId_m8963B1EBE96E2EC946789DE47BBC4A17292FDF33 (void);
// 0x0000003A System.String Microsoft.CognitiveServices.Speech.SessionEventArgs::ToString()
extern void SessionEventArgs_ToString_m7F7FB7E1EC6F286538A7AC9B79D9354A0C57938C (void);
// 0x0000003B System.Void Microsoft.CognitiveServices.Speech.SpeechConfig::.ctor(System.IntPtr)
extern void SpeechConfig__ctor_m586768B4614A1778822601DF07F0319758E1BBE9 (void);
// 0x0000003C Microsoft.CognitiveServices.Speech.SpeechConfig Microsoft.CognitiveServices.Speech.SpeechConfig::FromSubscription(System.String,System.String)
extern void SpeechConfig_FromSubscription_m237D37C3C6EB687440438E8A3E505875BD3427A6 (void);
// 0x0000003D System.Void Microsoft.CognitiveServices.Speech.SpeechConfig::set_SpeechRecognitionLanguage(System.String)
extern void SpeechConfig_set_SpeechRecognitionLanguage_mD940965AA416B034AFFF01838B52C9E4A751AF41 (void);
// 0x0000003E System.Void Microsoft.CognitiveServices.Speech.SpeechConfig::SetProperty(System.String,System.String)
extern void SpeechConfig_SetProperty_m9E79AA2A21F823E849F29921DA476988C2C4DF1C (void);
// 0x0000003F System.Void Microsoft.CognitiveServices.Speech.SpeechRecognitionResult::.ctor(System.IntPtr)
extern void SpeechRecognitionResult__ctor_mCCFDE1F4008AF5CEDAF8D163E8475887565BD056 (void);
// 0x00000040 System.Void Microsoft.CognitiveServices.Speech.SpeechRecognitionEventArgs::.ctor(System.IntPtr)
extern void SpeechRecognitionEventArgs__ctor_mA12E8F0CEF640C514871ED1481C46B54CE92EE64 (void);
// 0x00000041 Microsoft.CognitiveServices.Speech.SpeechRecognitionResult Microsoft.CognitiveServices.Speech.SpeechRecognitionEventArgs::get_Result()
extern void SpeechRecognitionEventArgs_get_Result_m775B21D1681EC803EE52F6FA345D0B5AB14D40D9 (void);
// 0x00000042 System.String Microsoft.CognitiveServices.Speech.SpeechRecognitionEventArgs::ToString()
extern void SpeechRecognitionEventArgs_ToString_m16F0AE8AF18D2C923DA643953109C5012CB3306D (void);
// 0x00000043 System.Void Microsoft.CognitiveServices.Speech.SpeechRecognitionCanceledEventArgs::.ctor(System.IntPtr)
extern void SpeechRecognitionCanceledEventArgs__ctor_mE27E61BE7835AF73A8C25DD3FA2205632C9DC107 (void);
// 0x00000044 Microsoft.CognitiveServices.Speech.CancellationReason Microsoft.CognitiveServices.Speech.SpeechRecognitionCanceledEventArgs::get_Reason()
extern void SpeechRecognitionCanceledEventArgs_get_Reason_m43CDCCC1311B234FB9F7C31BF966478DEB156815 (void);
// 0x00000045 Microsoft.CognitiveServices.Speech.CancellationErrorCode Microsoft.CognitiveServices.Speech.SpeechRecognitionCanceledEventArgs::get_ErrorCode()
extern void SpeechRecognitionCanceledEventArgs_get_ErrorCode_m54BF697777056D1E09CEDB6E005095970A48B5D2 (void);
// 0x00000046 System.String Microsoft.CognitiveServices.Speech.SpeechRecognitionCanceledEventArgs::ToString()
extern void SpeechRecognitionCanceledEventArgs_ToString_m4254A5E0769BEA2D983E83418E6F2645DC371EFF (void);
// 0x00000047 System.Void Microsoft.CognitiveServices.Speech.SpeechRecognizer::add__Recognizing(System.EventHandler`1<Microsoft.CognitiveServices.Speech.SpeechRecognitionEventArgs>)
extern void SpeechRecognizer_add__Recognizing_m16447A0416973172AB4D0CBAF6A8FC554B1E9294 (void);
// 0x00000048 System.Void Microsoft.CognitiveServices.Speech.SpeechRecognizer::remove__Recognizing(System.EventHandler`1<Microsoft.CognitiveServices.Speech.SpeechRecognitionEventArgs>)
extern void SpeechRecognizer_remove__Recognizing_m5C73B8CE847979E6475EAC3240E7357FCA1F3E5F (void);
// 0x00000049 System.Void Microsoft.CognitiveServices.Speech.SpeechRecognizer::add__Recognized(System.EventHandler`1<Microsoft.CognitiveServices.Speech.SpeechRecognitionEventArgs>)
extern void SpeechRecognizer_add__Recognized_mD50B625785C24BEBFF41F06CEB5D10434F934B83 (void);
// 0x0000004A System.Void Microsoft.CognitiveServices.Speech.SpeechRecognizer::remove__Recognized(System.EventHandler`1<Microsoft.CognitiveServices.Speech.SpeechRecognitionEventArgs>)
extern void SpeechRecognizer_remove__Recognized_mD722671640B2B0B316AF08C40613843C781E17C0 (void);
// 0x0000004B System.Void Microsoft.CognitiveServices.Speech.SpeechRecognizer::add__Canceled(System.EventHandler`1<Microsoft.CognitiveServices.Speech.SpeechRecognitionCanceledEventArgs>)
extern void SpeechRecognizer_add__Canceled_mCCA4C9985A5482241673E5F9DFAF8669412BA14B (void);
// 0x0000004C System.Void Microsoft.CognitiveServices.Speech.SpeechRecognizer::remove__Canceled(System.EventHandler`1<Microsoft.CognitiveServices.Speech.SpeechRecognitionCanceledEventArgs>)
extern void SpeechRecognizer_remove__Canceled_m7AA55C10EEAE710C0581D5B235852FB30D142CB9 (void);
// 0x0000004D System.Void Microsoft.CognitiveServices.Speech.SpeechRecognizer::add_Recognizing(System.EventHandler`1<Microsoft.CognitiveServices.Speech.SpeechRecognitionEventArgs>)
extern void SpeechRecognizer_add_Recognizing_m889A7D105299CCC15B4C3D692703D12319E8AE2E (void);
// 0x0000004E System.Void Microsoft.CognitiveServices.Speech.SpeechRecognizer::remove_Recognizing(System.EventHandler`1<Microsoft.CognitiveServices.Speech.SpeechRecognitionEventArgs>)
extern void SpeechRecognizer_remove_Recognizing_mF69D0A164312B4697C2E10348F5AD94E4900032F (void);
// 0x0000004F System.Void Microsoft.CognitiveServices.Speech.SpeechRecognizer::add_Recognized(System.EventHandler`1<Microsoft.CognitiveServices.Speech.SpeechRecognitionEventArgs>)
extern void SpeechRecognizer_add_Recognized_mB6FFEF74D120F94577CEC4D793A63E77E571D3BE (void);
// 0x00000050 System.Void Microsoft.CognitiveServices.Speech.SpeechRecognizer::remove_Recognized(System.EventHandler`1<Microsoft.CognitiveServices.Speech.SpeechRecognitionEventArgs>)
extern void SpeechRecognizer_remove_Recognized_m1AC5A080571B5A7CD4032CFCC5334FF9129C6FFD (void);
// 0x00000051 System.Void Microsoft.CognitiveServices.Speech.SpeechRecognizer::add_Canceled(System.EventHandler`1<Microsoft.CognitiveServices.Speech.SpeechRecognitionCanceledEventArgs>)
extern void SpeechRecognizer_add_Canceled_m714F909F5101C0292E0FA4814214E31F8AA6A216 (void);
// 0x00000052 System.Void Microsoft.CognitiveServices.Speech.SpeechRecognizer::remove_Canceled(System.EventHandler`1<Microsoft.CognitiveServices.Speech.SpeechRecognitionCanceledEventArgs>)
extern void SpeechRecognizer_remove_Canceled_m434BFE60418B882CEDA616FA1CADCD2F8C6DD962 (void);
// 0x00000053 System.Void Microsoft.CognitiveServices.Speech.SpeechRecognizer::.ctor(Microsoft.CognitiveServices.Speech.SpeechConfig)
extern void SpeechRecognizer__ctor_m305BDA5F9788FBA4F444E31437F6C67589A11488 (void);
// 0x00000054 System.Void Microsoft.CognitiveServices.Speech.SpeechRecognizer::.ctor(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle)
extern void SpeechRecognizer__ctor_m8136931FE9EB168C0F793BDF081194CEED40BE0A (void);
// 0x00000055 Microsoft.CognitiveServices.Speech.PropertyCollection Microsoft.CognitiveServices.Speech.SpeechRecognizer::get_Properties()
extern void SpeechRecognizer_get_Properties_m1C0886BAAE462E98012C7EF3CED1E0314E341024 (void);
// 0x00000056 System.Void Microsoft.CognitiveServices.Speech.SpeechRecognizer::set_Properties(Microsoft.CognitiveServices.Speech.PropertyCollection)
extern void SpeechRecognizer_set_Properties_mCEEEDD714A579195CF49B0F9E4609DFD1EE2C7FC (void);
// 0x00000057 System.Threading.Tasks.Task Microsoft.CognitiveServices.Speech.SpeechRecognizer::StartContinuousRecognitionAsync()
extern void SpeechRecognizer_StartContinuousRecognitionAsync_m1A15C93FACB936A88F8CF23F44FDEE3DE801AE09 (void);
// 0x00000058 System.Threading.Tasks.Task Microsoft.CognitiveServices.Speech.SpeechRecognizer::StopContinuousRecognitionAsync()
extern void SpeechRecognizer_StopContinuousRecognitionAsync_m470900781885522C896DF9884EDBCFB8990B5864 (void);
// 0x00000059 System.Void Microsoft.CognitiveServices.Speech.SpeechRecognizer::Finalize()
extern void SpeechRecognizer_Finalize_m0DFC88D31A9612EB8E79AEFC3CAEACEDDF014C50 (void);
// 0x0000005A System.Void Microsoft.CognitiveServices.Speech.SpeechRecognizer::Dispose(System.Boolean)
extern void SpeechRecognizer_Dispose_mC62D82CBFB64A864B774FD0D2E3067C1428B7999 (void);
// 0x0000005B System.Void Microsoft.CognitiveServices.Speech.SpeechRecognizer::FireEvent_Recognizing(System.IntPtr,System.IntPtr,System.IntPtr)
extern void SpeechRecognizer_FireEvent_Recognizing_m5F41324B4925637FC1859240D793E0038ABE9EA4 (void);
// 0x0000005C System.Void Microsoft.CognitiveServices.Speech.SpeechRecognizer::FireEvent_Recognized(System.IntPtr,System.IntPtr,System.IntPtr)
extern void SpeechRecognizer_FireEvent_Recognized_m1C49575EF31FF9111D7CC4CC679D1582B525F886 (void);
// 0x0000005D System.Void Microsoft.CognitiveServices.Speech.SpeechRecognizer::FireEvent_Canceled(System.IntPtr,System.IntPtr,System.IntPtr)
extern void SpeechRecognizer_FireEvent_Canceled_m2034F62D22C618A305A7E5E7DCB416439CDD3F6E (void);
// 0x0000005E System.Void Microsoft.CognitiveServices.Speech.SpeechRecognizer::<StartContinuousRecognitionAsync>b__48_0()
extern void SpeechRecognizer_U3CStartContinuousRecognitionAsyncU3Eb__48_0_m04FE3F14272D20010FE93F0E93DBBDCE0CF49BA8 (void);
// 0x0000005F System.Void Microsoft.CognitiveServices.Speech.SpeechRecognizer::<StopContinuousRecognitionAsync>b__49_0()
extern void SpeechRecognizer_U3CStopContinuousRecognitionAsyncU3Eb__49_0_m35203AF7CC7FE3FA3E39B1F7B184E700F4A22B65 (void);
// 0x00000060 System.Void Microsoft.CognitiveServices.Speech.SpeechTranslationConfig::.ctor(System.IntPtr)
extern void SpeechTranslationConfig__ctor_m49EEA16B549465C7EB65801FC0687EA30E6F7D5E (void);
// 0x00000061 Microsoft.CognitiveServices.Speech.SpeechTranslationConfig Microsoft.CognitiveServices.Speech.SpeechTranslationConfig::FromSubscription(System.String,System.String)
extern void SpeechTranslationConfig_FromSubscription_m06C876CA2EAFCCA6CD32E91C95EFED8C6711305F (void);
// 0x00000062 System.Void Microsoft.CognitiveServices.Speech.SpeechTranslationConfig::AddTargetLanguage(System.String)
extern void SpeechTranslationConfig_AddTargetLanguage_m3A3E70E5FC18C24A5BA78D4AA646AD9294550713 (void);
// 0x00000063 System.Void Microsoft.CognitiveServices.Speech.Translation.TranslationRecognitionResult::.ctor(System.IntPtr)
extern void TranslationRecognitionResult__ctor_mEC410E2929DA5612330E8C4521CD1363E7105CA1 (void);
// 0x00000064 System.Collections.Generic.IReadOnlyDictionary`2<System.String,System.String> Microsoft.CognitiveServices.Speech.Translation.TranslationRecognitionResult::get_Translations()
extern void TranslationRecognitionResult_get_Translations_mF40040BB24857FB1E87A6ACAEE7901DA628709F3 (void);
// 0x00000065 System.String Microsoft.CognitiveServices.Speech.Translation.TranslationRecognitionResult::ToString()
extern void TranslationRecognitionResult_ToString_m8B3AEE6468E0C7285288A622C0F0CA53307F45C8 (void);
// 0x00000066 System.Void Microsoft.CognitiveServices.Speech.Translation.TranslationRecognitionResult::GetTranslationTexts()
extern void TranslationRecognitionResult_GetTranslationTexts_m080C1A8E4A40D60797BC62D07B58E27AAB1A6687 (void);
// 0x00000067 System.Void Microsoft.CognitiveServices.Speech.Translation.TranslationRecognizer::add__Recognizing(System.EventHandler`1<Microsoft.CognitiveServices.Speech.Translation.TranslationRecognitionEventArgs>)
extern void TranslationRecognizer_add__Recognizing_m7F06A14055F7EA343EDB417019887749F95204BD (void);
// 0x00000068 System.Void Microsoft.CognitiveServices.Speech.Translation.TranslationRecognizer::remove__Recognizing(System.EventHandler`1<Microsoft.CognitiveServices.Speech.Translation.TranslationRecognitionEventArgs>)
extern void TranslationRecognizer_remove__Recognizing_mDFCC6818686A988C4401D429A450539CDEAA1653 (void);
// 0x00000069 System.Void Microsoft.CognitiveServices.Speech.Translation.TranslationRecognizer::add__Recognized(System.EventHandler`1<Microsoft.CognitiveServices.Speech.Translation.TranslationRecognitionEventArgs>)
extern void TranslationRecognizer_add__Recognized_mC948CE4C633F0B3989AB538E48CED770EAA2AB24 (void);
// 0x0000006A System.Void Microsoft.CognitiveServices.Speech.Translation.TranslationRecognizer::remove__Recognized(System.EventHandler`1<Microsoft.CognitiveServices.Speech.Translation.TranslationRecognitionEventArgs>)
extern void TranslationRecognizer_remove__Recognized_mFA887E35EAAE84E06620A043A51B69403DDF9288 (void);
// 0x0000006B System.Void Microsoft.CognitiveServices.Speech.Translation.TranslationRecognizer::add__Canceled(System.EventHandler`1<Microsoft.CognitiveServices.Speech.Translation.TranslationRecognitionCanceledEventArgs>)
extern void TranslationRecognizer_add__Canceled_mBC507ED133CE7C79ED21D94FCBDD56491F8DC04F (void);
// 0x0000006C System.Void Microsoft.CognitiveServices.Speech.Translation.TranslationRecognizer::remove__Canceled(System.EventHandler`1<Microsoft.CognitiveServices.Speech.Translation.TranslationRecognitionCanceledEventArgs>)
extern void TranslationRecognizer_remove__Canceled_m9764030E5C9EFF7B4C48AE21DD87E5BBC5E0640F (void);
// 0x0000006D System.Void Microsoft.CognitiveServices.Speech.Translation.TranslationRecognizer::add_Recognizing(System.EventHandler`1<Microsoft.CognitiveServices.Speech.Translation.TranslationRecognitionEventArgs>)
extern void TranslationRecognizer_add_Recognizing_m5BAB5839D879D81073F27CA53AE6CB8337885B76 (void);
// 0x0000006E System.Void Microsoft.CognitiveServices.Speech.Translation.TranslationRecognizer::remove_Recognizing(System.EventHandler`1<Microsoft.CognitiveServices.Speech.Translation.TranslationRecognitionEventArgs>)
extern void TranslationRecognizer_remove_Recognizing_m932338A39761F4AC1E5F2928F029A33922DE2183 (void);
// 0x0000006F System.Void Microsoft.CognitiveServices.Speech.Translation.TranslationRecognizer::add_Recognized(System.EventHandler`1<Microsoft.CognitiveServices.Speech.Translation.TranslationRecognitionEventArgs>)
extern void TranslationRecognizer_add_Recognized_m1437E58C0813C018974685E579477BE1D1333BC9 (void);
// 0x00000070 System.Void Microsoft.CognitiveServices.Speech.Translation.TranslationRecognizer::remove_Recognized(System.EventHandler`1<Microsoft.CognitiveServices.Speech.Translation.TranslationRecognitionEventArgs>)
extern void TranslationRecognizer_remove_Recognized_mB68B184148E7F584F9B332A3576FC8C43678D082 (void);
// 0x00000071 System.Void Microsoft.CognitiveServices.Speech.Translation.TranslationRecognizer::add_Canceled(System.EventHandler`1<Microsoft.CognitiveServices.Speech.Translation.TranslationRecognitionCanceledEventArgs>)
extern void TranslationRecognizer_add_Canceled_mEE6EEF70DDDFD5CE94781584D40C4B5644068EC0 (void);
// 0x00000072 System.Void Microsoft.CognitiveServices.Speech.Translation.TranslationRecognizer::remove_Canceled(System.EventHandler`1<Microsoft.CognitiveServices.Speech.Translation.TranslationRecognitionCanceledEventArgs>)
extern void TranslationRecognizer_remove_Canceled_mDE5EE8C9CA497FA63C4FED58130FCE8D4F840BA6 (void);
// 0x00000073 System.Void Microsoft.CognitiveServices.Speech.Translation.TranslationRecognizer::.ctor(Microsoft.CognitiveServices.Speech.SpeechTranslationConfig)
extern void TranslationRecognizer__ctor_mE8AE805843C9D9A8663E4BA1AD18BE52928173DF (void);
// 0x00000074 System.Void Microsoft.CognitiveServices.Speech.Translation.TranslationRecognizer::.ctor(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle)
extern void TranslationRecognizer__ctor_m9474B62F13778D537B18BB26C58D7CD4DD2B13D6 (void);
// 0x00000075 Microsoft.CognitiveServices.Speech.PropertyCollection Microsoft.CognitiveServices.Speech.Translation.TranslationRecognizer::get_Properties()
extern void TranslationRecognizer_get_Properties_m041ED0EC39816383C2789C9784B00B7F50589ABF (void);
// 0x00000076 System.Void Microsoft.CognitiveServices.Speech.Translation.TranslationRecognizer::set_Properties(Microsoft.CognitiveServices.Speech.PropertyCollection)
extern void TranslationRecognizer_set_Properties_m5576585D06ED00C702202DE79DA2E1DE600CA8C0 (void);
// 0x00000077 System.Threading.Tasks.Task Microsoft.CognitiveServices.Speech.Translation.TranslationRecognizer::StartContinuousRecognitionAsync()
extern void TranslationRecognizer_StartContinuousRecognitionAsync_m55412EFDF34D83FA6C1137AEACBF4971C98B3281 (void);
// 0x00000078 System.Threading.Tasks.Task Microsoft.CognitiveServices.Speech.Translation.TranslationRecognizer::StopContinuousRecognitionAsync()
extern void TranslationRecognizer_StopContinuousRecognitionAsync_m49E04468A3D122A341D532A8CEA61B770251AB13 (void);
// 0x00000079 System.Void Microsoft.CognitiveServices.Speech.Translation.TranslationRecognizer::Finalize()
extern void TranslationRecognizer_Finalize_mBD2AC4D93AB98B81003D56FC50214FF0531461D4 (void);
// 0x0000007A System.Void Microsoft.CognitiveServices.Speech.Translation.TranslationRecognizer::Dispose(System.Boolean)
extern void TranslationRecognizer_Dispose_m319D91F26DCDA18C518359CA919A4B7D453F43F1 (void);
// 0x0000007B System.Void Microsoft.CognitiveServices.Speech.Translation.TranslationRecognizer::FireEvent_Recognizing(System.IntPtr,System.IntPtr,System.IntPtr)
extern void TranslationRecognizer_FireEvent_Recognizing_m9C07BDADD03B380A822B8C7C96CD90C471447E4C (void);
// 0x0000007C System.Void Microsoft.CognitiveServices.Speech.Translation.TranslationRecognizer::FireEvent_Recognized(System.IntPtr,System.IntPtr,System.IntPtr)
extern void TranslationRecognizer_FireEvent_Recognized_m37BF6A7CAA9794E1DBFAFB10D294B7DB958B9836 (void);
// 0x0000007D System.Void Microsoft.CognitiveServices.Speech.Translation.TranslationRecognizer::FireEvent_Canceled(System.IntPtr,System.IntPtr,System.IntPtr)
extern void TranslationRecognizer_FireEvent_Canceled_m7875F1D6DA9BCA902CF05D571D55EF1055AB2E82 (void);
// 0x0000007E System.Void Microsoft.CognitiveServices.Speech.Translation.TranslationRecognizer::FireEvent_SynthesisResult(System.IntPtr,System.IntPtr,System.IntPtr)
extern void TranslationRecognizer_FireEvent_SynthesisResult_m6AE445D95E7487065CAB7589BDD9616335B69737 (void);
// 0x0000007F System.Void Microsoft.CognitiveServices.Speech.Translation.TranslationRecognizer::<StartContinuousRecognitionAsync>b__45_0()
extern void TranslationRecognizer_U3CStartContinuousRecognitionAsyncU3Eb__45_0_m3949BB584774853669A563EA6FB965124D0C9A73 (void);
// 0x00000080 System.Void Microsoft.CognitiveServices.Speech.Translation.TranslationRecognizer::<StopContinuousRecognitionAsync>b__46_0()
extern void TranslationRecognizer_U3CStopContinuousRecognitionAsyncU3Eb__46_0_m9271ACFBD9A2A2C9B9533BFEDE4A84847763AE07 (void);
// 0x00000081 System.Void Microsoft.CognitiveServices.Speech.Translation.TranslationSynthesisResult::.ctor(System.IntPtr)
extern void TranslationSynthesisResult__ctor_m5504E3A57CC4B725D64C1981A97FB918F653847F (void);
// 0x00000082 Microsoft.CognitiveServices.Speech.ResultReason Microsoft.CognitiveServices.Speech.Translation.TranslationSynthesisResult::get_Reason()
extern void TranslationSynthesisResult_get_Reason_mA851E1881441C4F278FA28AF75BE94B21DFC327F (void);
// 0x00000083 System.String Microsoft.CognitiveServices.Speech.Translation.TranslationSynthesisResult::ToString()
extern void TranslationSynthesisResult_ToString_mC7A69F16165D4A7BB5622414AEA7CA34418E2CF4 (void);
// 0x00000084 System.Void Microsoft.CognitiveServices.Speech.Translation.TranslationSynthesisResult::GetAudioData(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle)
extern void TranslationSynthesisResult_GetAudioData_mC7C4FABC68E4574F59A8D91513C4B4F560226DED (void);
// 0x00000085 System.Void Microsoft.CognitiveServices.Speech.Translation.TranslationSynthesisEventArgs::.ctor(System.IntPtr)
extern void TranslationSynthesisEventArgs__ctor_m0A5A5BCAA5952B55D937B2971ED4AB6F46AFA100 (void);
// 0x00000086 Microsoft.CognitiveServices.Speech.Translation.TranslationSynthesisResult Microsoft.CognitiveServices.Speech.Translation.TranslationSynthesisEventArgs::get_Result()
extern void TranslationSynthesisEventArgs_get_Result_mCA8BD226299930517C948A066CB4B247A304C515 (void);
// 0x00000087 System.String Microsoft.CognitiveServices.Speech.Translation.TranslationSynthesisEventArgs::ToString()
extern void TranslationSynthesisEventArgs_ToString_mE16282A6E080C3529B776C47B3DDF7C4501CD096 (void);
// 0x00000088 System.Void Microsoft.CognitiveServices.Speech.Translation.TranslationRecognitionEventArgs::.ctor(System.IntPtr)
extern void TranslationRecognitionEventArgs__ctor_m8AF9A74DEA81084992DC783C79D2DFC81A1230A7 (void);
// 0x00000089 Microsoft.CognitiveServices.Speech.Translation.TranslationRecognitionResult Microsoft.CognitiveServices.Speech.Translation.TranslationRecognitionEventArgs::get_Result()
extern void TranslationRecognitionEventArgs_get_Result_m047C28B1FF5C9231EF5D9CE4957C05CD2E4B5CDD (void);
// 0x0000008A System.String Microsoft.CognitiveServices.Speech.Translation.TranslationRecognitionEventArgs::ToString()
extern void TranslationRecognitionEventArgs_ToString_mA6B067D8D6C5D0DAB3C26670987B1BE548B6827A (void);
// 0x0000008B System.Void Microsoft.CognitiveServices.Speech.Translation.TranslationRecognitionCanceledEventArgs::.ctor(System.IntPtr)
extern void TranslationRecognitionCanceledEventArgs__ctor_mC0DAD5191F911E2119197BF1876B9DFD46B7E630 (void);
// 0x0000008C Microsoft.CognitiveServices.Speech.CancellationReason Microsoft.CognitiveServices.Speech.Translation.TranslationRecognitionCanceledEventArgs::get_Reason()
extern void TranslationRecognitionCanceledEventArgs_get_Reason_m93D03951586AFFFF3DF9AD531E90A6A6AC5A2809 (void);
// 0x0000008D Microsoft.CognitiveServices.Speech.CancellationErrorCode Microsoft.CognitiveServices.Speech.Translation.TranslationRecognitionCanceledEventArgs::get_ErrorCode()
extern void TranslationRecognitionCanceledEventArgs_get_ErrorCode_mCD275DF83031DDBD93498938B45A578946631D24 (void);
// 0x0000008E System.String Microsoft.CognitiveServices.Speech.Translation.TranslationRecognitionCanceledEventArgs::ToString()
extern void TranslationRecognitionCanceledEventArgs_ToString_m9DCCAC9E91B16CE2A22B213F823A0A32EDE8DFA9 (void);
// 0x0000008F System.Object[] Microsoft.CognitiveServices.Speech.Internal.Diagnostics::Args(System.Object[])
extern void Diagnostics_Args_m66A8E4AC0D0D0C2C854A969BFCE1C409BFF58556 (void);
// 0x00000090 System.Void Microsoft.CognitiveServices.Speech.Internal.Diagnostics::SPX_TRACE_VERBOSE(System.String,System.Int32,System.String,System.String)
extern void Diagnostics_SPX_TRACE_VERBOSE_m9618B77BD67A243B856AE5D2E73CB87D57D1DA6E (void);
// 0x00000091 System.Void Microsoft.CognitiveServices.Speech.Internal.Diagnostics::SPX_TRACE_VERBOSE(System.String,System.Object[],System.Int32,System.String,System.String)
extern void Diagnostics_SPX_TRACE_VERBOSE_mB66498BCE9FE52C0C1C41B5F06ACF3FBA58AE529 (void);
// 0x00000092 System.IntPtr Microsoft.CognitiveServices.Speech.Internal.CancellationDetails::result_get_reason_canceled(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,Microsoft.CognitiveServices.Speech.CancellationReason&)
extern void CancellationDetails_result_get_reason_canceled_mB6B75B4486D05ADF2F85CDFD0F60E8DC61FB9800 (void);
// 0x00000093 System.IntPtr Microsoft.CognitiveServices.Speech.Internal.CancellationDetails::result_get_canceled_error_code(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,Microsoft.CognitiveServices.Speech.CancellationErrorCode&)
extern void CancellationDetails_result_get_canceled_error_code_m8469A5D13BF7FBEAC7552AB749BE0E63258F87A0 (void);
// 0x00000094 System.IntPtr Microsoft.CognitiveServices.Speech.Internal.SpeechConfig::speech_config_from_subscription(System.IntPtr&,System.String,System.String)
extern void SpeechConfig_speech_config_from_subscription_mB1ABBE414549A4855CF3CE0AD87E832209A701E0 (void);
// 0x00000095 System.IntPtr Microsoft.CognitiveServices.Speech.Internal.SpeechConfig::speech_config_release(System.IntPtr)
extern void SpeechConfig_speech_config_release_m02C3D503C5141ADD5F9075D27204DD1AD5E9274A (void);
// 0x00000096 System.IntPtr Microsoft.CognitiveServices.Speech.Internal.SpeechConfig::speech_config_get_property_bag(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,System.IntPtr&)
extern void SpeechConfig_speech_config_get_property_bag_mAD34CF04C0FD498FECA8D218D58D8C39431FD207 (void);
// 0x00000097 System.IntPtr Microsoft.CognitiveServices.Speech.Internal.SpeechTranslationConfig::speech_translation_config_from_subscription(System.IntPtr&,System.String,System.String)
extern void SpeechTranslationConfig_speech_translation_config_from_subscription_mE64E8DB2A53A0CC70C6D8CAC467A39451949F1A4 (void);
// 0x00000098 System.IntPtr Microsoft.CognitiveServices.Speech.Internal.SpeechTranslationConfig::speech_translation_config_add_target_language(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,System.String)
extern void SpeechTranslationConfig_speech_translation_config_add_target_language_m7CBDFA258DA86801344705139992591D7AF3A450 (void);
// 0x00000099 System.Void Microsoft.CognitiveServices.Speech.Internal.DiagnosticsInterop::diagnostics_log_trace_string(System.Int32,System.String,System.String,System.Int32,System.String)
extern void DiagnosticsInterop_diagnostics_log_trace_string_mFE0702C2B29033AF9782E2687FAEF40471DB9896 (void);
// 0x0000009A System.String Microsoft.CognitiveServices.Speech.Internal.SpxError::GetMessage(System.IntPtr)
extern void SpxError_GetMessage_m56F8CB8D3FCC6E557B4C0F7B8542AFF7CE76B14C (void);
// 0x0000009B System.Int32 Microsoft.CognitiveServices.Speech.Internal.SpxError::GetErrorCode(System.IntPtr)
extern void SpxError_GetErrorCode_m59998B5738166F75D78A901464B8653BF1718492 (void);
// 0x0000009C System.Void Microsoft.CognitiveServices.Speech.Internal.SpxError::Release(System.IntPtr)
extern void SpxError_Release_mA9AC9D63595F70D08E078D5C6AD340B22A701301 (void);
// 0x0000009D System.Boolean Microsoft.CognitiveServices.Speech.Internal.SpxError::ReleaseNoThrow(System.IntPtr)
extern void SpxError_ReleaseNoThrow_m33343325EA373B0D5AF143C101C92C64211E359F (void);
// 0x0000009E System.IntPtr Microsoft.CognitiveServices.Speech.Internal.SpxError::error_get_message(System.IntPtr)
extern void SpxError_error_get_message_mF6E912B67C4C33E52A5734B4185F5093BC4EFB2D (void);
// 0x0000009F System.IntPtr Microsoft.CognitiveServices.Speech.Internal.SpxError::error_get_error_code(System.IntPtr)
extern void SpxError_error_get_error_code_m90FAF28F9F681E57DC432BB3406486932F2FC305 (void);
// 0x000000A0 System.IntPtr Microsoft.CognitiveServices.Speech.Internal.SpxError::error_release(System.IntPtr)
extern void SpxError_error_release_m849336C474D38F6418F8F87E3F62A667401DD6FD (void);
// 0x000000A1 System.Void Microsoft.CognitiveServices.Speech.Internal.SpxError::.cctor()
extern void SpxError__cctor_m52E236EE6E93EB40B6B5634B2746964D74BD3C85 (void);
// 0x000000A2 System.IntPtr Microsoft.CognitiveServices.Speech.Internal.EventArgs::recognizer_event_handle_release(System.IntPtr)
extern void EventArgs_recognizer_event_handle_release_mB10E833E44DE8B942BA131D02EAA83C76170287B (void);
// 0x000000A3 System.Void Microsoft.CognitiveServices.Speech.Internal.MonoPInvokeCallbackAttribute::.ctor(System.Type)
extern void MonoPInvokeCallbackAttribute__ctor_mCD6247FB473E269B565E8D2DFF089C409A664062 (void);
// 0x000000A4 System.Void Microsoft.CognitiveServices.Speech.Internal.HandleRelease::.ctor(System.Object,System.IntPtr)
extern void HandleRelease__ctor_m5265A47915D90FC04F512F3D1BC68A711343A4E7 (void);
// 0x000000A5 System.IntPtr Microsoft.CognitiveServices.Speech.Internal.HandleRelease::Invoke(System.IntPtr)
extern void HandleRelease_Invoke_m5A6CE4A6071A868B9695E55991957B8C520128EB (void);
// 0x000000A6 System.Void Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle::.ctor(System.IntPtr,Microsoft.CognitiveServices.Speech.Internal.HandleRelease)
extern void InteropSafeHandle__ctor_mC37ECE3504FFCF1C3A565E45B1659808FD310B62 (void);
// 0x000000A7 System.Boolean Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle::get_IsInvalid()
extern void InteropSafeHandle_get_IsInvalid_m0C613C6DFCD587AC5C04CE6F23DCECFB223233EA (void);
// 0x000000A8 System.Boolean Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle::ReleaseHandle()
extern void InteropSafeHandle_ReleaseHandle_m2F321C7B0B2E77403444A781A5279CC74038AE3E (void);
// 0x000000A9 System.Void Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle::Dispose(System.Boolean)
extern void InteropSafeHandle_Dispose_mC58913907DC7D23E82426AC45B50333CD885BDFC (void);
// 0x000000AA T Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle::GetObjectFromWeakHandle(System.IntPtr)
// 0x000000AB System.String Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle::ToString()
extern void InteropSafeHandle_ToString_m1A7805107A6C1BB682B234E53FDCBC8C06604CC9 (void);
// 0x000000AC System.Void Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle::Finalize()
extern void InteropSafeHandle_Finalize_m83ABB6C2604BB75B5BB1A007DEF8ED9D78620503 (void);
// 0x000000AD System.String Microsoft.CognitiveServices.Speech.Internal.SpxFactory::GetDataFromHandleUsingDelegate(Microsoft.CognitiveServices.Speech.Internal.SpxFactory/GetResultDelegate,Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,System.Int32)
extern void SpxFactory_GetDataFromHandleUsingDelegate_m2292A32ABAA69783218EFADD6C6269D5527378CD (void);
// 0x000000AE System.IntPtr Microsoft.CognitiveServices.Speech.Internal.SpxFactory::recognizer_create_speech_recognizer_from_config(System.IntPtr&,Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle)
extern void SpxFactory_recognizer_create_speech_recognizer_from_config_mA2AA5F624FF8DE29D2444E8D8C197B8849BC5416 (void);
// 0x000000AF System.IntPtr Microsoft.CognitiveServices.Speech.Internal.SpxFactory::recognizer_create_translation_recognizer_from_config(System.IntPtr&,Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle)
extern void SpxFactory_recognizer_create_translation_recognizer_from_config_m0C8864D041B6404EFDEDA573E1265683CD7FC31F (void);
// 0x000000B0 System.Void Microsoft.CognitiveServices.Speech.Internal.SpxFactory/GetResultDelegate::.ctor(System.Object,System.IntPtr)
extern void GetResultDelegate__ctor_mE4D38F6D4B3F9FBE85FE26118D690DD00A195314 (void);
// 0x000000B1 System.IntPtr Microsoft.CognitiveServices.Speech.Internal.SpxFactory/GetResultDelegate::Invoke(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,System.IntPtr,System.UInt32)
extern void GetResultDelegate_Invoke_mB1E1810F9B48533717B0A387D1AEEDE06AFDD280 (void);
// 0x000000B2 System.IntPtr Microsoft.CognitiveServices.Speech.Internal.PropertyCollection::property_bag_set_string(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,System.Int32,System.IntPtr,System.IntPtr)
extern void PropertyCollection_property_bag_set_string_m3B3493AE6E2894BE2258E427938B0FE52490AF64 (void);
// 0x000000B3 System.IntPtr Microsoft.CognitiveServices.Speech.Internal.PropertyCollection::property_bag_get_string(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,System.Int32,System.IntPtr,System.IntPtr)
extern void PropertyCollection_property_bag_get_string_mE4B57B59FFF4B01AB9A63785B5702904C03BB581 (void);
// 0x000000B4 System.IntPtr Microsoft.CognitiveServices.Speech.Internal.PropertyCollection::property_bag_free_string(System.IntPtr)
extern void PropertyCollection_property_bag_free_string_m4B23B011D0B261E565A1E8AB841EDAC0AE48D9C4 (void);
// 0x000000B5 System.IntPtr Microsoft.CognitiveServices.Speech.Internal.PropertyCollection::property_bag_release(System.IntPtr)
extern void PropertyCollection_property_bag_release_mEA272951A28D37AE294DE83DED63D32185E99E01 (void);
// 0x000000B6 System.IntPtr Microsoft.CognitiveServices.Speech.Internal.RecognitionResult::result_get_reason(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,Microsoft.CognitiveServices.Speech.ResultReason&)
extern void RecognitionResult_result_get_reason_m24BBA306606BC3C381D4A4393ACB71DD4D2050DF (void);
// 0x000000B7 System.IntPtr Microsoft.CognitiveServices.Speech.Internal.RecognitionResult::result_get_result_id(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,System.IntPtr,System.UInt32)
extern void RecognitionResult_result_get_result_id_m0BFA3A72D4CAA06A4E41F7FC5DD49DC9EB786AB7 (void);
// 0x000000B8 System.IntPtr Microsoft.CognitiveServices.Speech.Internal.RecognitionResult::result_get_text(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,System.IntPtr,System.UInt32)
extern void RecognitionResult_result_get_text_mE0BD740D8672D17924AFE52A56DA353AF8F9E2D8 (void);
// 0x000000B9 System.IntPtr Microsoft.CognitiveServices.Speech.Internal.RecognitionResult::result_get_property_bag(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,System.IntPtr&)
extern void RecognitionResult_result_get_property_bag_m5D8123FA8E1448FC52D27AA615145767ACF533C5 (void);
// 0x000000BA System.Boolean Microsoft.CognitiveServices.Speech.Internal.RecognitionResult::recognizer_result_handle_is_valid(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle)
extern void RecognitionResult_recognizer_result_handle_is_valid_mD2EAC27E610A8715E49F1626367788A9865CE82B (void);
// 0x000000BB System.IntPtr Microsoft.CognitiveServices.Speech.Internal.RecognitionResult::recognizer_result_handle_release(System.IntPtr)
extern void RecognitionResult_recognizer_result_handle_release_mD7241DA94329C30FC7576690F6090CB9083B1388 (void);
// 0x000000BC System.IntPtr Microsoft.CognitiveServices.Speech.Internal.RecognitionResult::translation_text_result_get_translation_text_buffer_header(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,System.IntPtr,System.Int32&)
extern void RecognitionResult_translation_text_result_get_translation_text_buffer_header_mCDAF142354F6B22AF7E7A3D58665D260DB2A22C8 (void);
// 0x000000BD System.IntPtr Microsoft.CognitiveServices.Speech.Internal.RecognitionResult::translation_synthesis_result_get_audio_data(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,System.IntPtr,System.Int32&)
extern void RecognitionResult_translation_synthesis_result_get_audio_data_m49A524C78B5BBBAD2093F4C61344AC81B0428D3B (void);
// 0x000000BE System.Void Microsoft.CognitiveServices.Speech.Internal.CallbackFunctionDelegate::.ctor(System.Object,System.IntPtr)
extern void CallbackFunctionDelegate__ctor_m242A4949B6999B19FDCBCCB89CBBD60A2D8AB7A6 (void);
// 0x000000BF System.Void Microsoft.CognitiveServices.Speech.Internal.CallbackFunctionDelegate::Invoke(System.IntPtr,System.IntPtr,System.IntPtr)
extern void CallbackFunctionDelegate_Invoke_m2DB00DC2A53AF471906D80BFF8EC4378B6F81EE7 (void);
// 0x000000C0 System.IntPtr Microsoft.CognitiveServices.Speech.Internal.Recognizer::recognizer_get_property_bag(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,System.IntPtr&)
extern void Recognizer_recognizer_get_property_bag_m4D30FE9EBED74424FCE805136396F8EDC8A81D17 (void);
// 0x000000C1 System.IntPtr Microsoft.CognitiveServices.Speech.Internal.Recognizer::recognizer_handle_release(System.IntPtr)
extern void Recognizer_recognizer_handle_release_m6D4F7C9482D6618B26EF7AA1E0BF48B64986FCEF (void);
// 0x000000C2 System.IntPtr Microsoft.CognitiveServices.Speech.Internal.Recognizer::recognizer_start_continuous_recognition_async(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,System.IntPtr&)
extern void Recognizer_recognizer_start_continuous_recognition_async_m441C21EB7505A97E5F91536E25509FD729083C16 (void);
// 0x000000C3 System.IntPtr Microsoft.CognitiveServices.Speech.Internal.Recognizer::recognizer_start_continuous_recognition_async_wait_for(System.IntPtr,System.UInt32)
extern void Recognizer_recognizer_start_continuous_recognition_async_wait_for_mBB675A57CCEF423FF45B679C2878E6407C1C824C (void);
// 0x000000C4 System.IntPtr Microsoft.CognitiveServices.Speech.Internal.Recognizer::recognizer_stop_continuous_recognition_async(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,System.IntPtr&)
extern void Recognizer_recognizer_stop_continuous_recognition_async_m35C65D620FD71FE342E909F031267E73D24179EA (void);
// 0x000000C5 System.IntPtr Microsoft.CognitiveServices.Speech.Internal.Recognizer::recognizer_stop_continuous_recognition_async_wait_for(System.IntPtr,System.UInt32)
extern void Recognizer_recognizer_stop_continuous_recognition_async_wait_for_mD01776BA308DDA07554942288BD247FF8E10ABE7 (void);
// 0x000000C6 System.IntPtr Microsoft.CognitiveServices.Speech.Internal.Recognizer::recognizer_async_handle_release(System.IntPtr)
extern void Recognizer_recognizer_async_handle_release_m308FA74E4DC2A3B70602A6EB0B36B75293C45707 (void);
// 0x000000C7 System.IntPtr Microsoft.CognitiveServices.Speech.Internal.Recognizer::recognizer_recognition_event_get_offset(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,System.UInt64&)
extern void Recognizer_recognizer_recognition_event_get_offset_m5798A68CFDD94101E91CEFD84C3E747272521543 (void);
// 0x000000C8 System.IntPtr Microsoft.CognitiveServices.Speech.Internal.Recognizer::recognizer_session_event_get_session_id(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,System.IntPtr,System.UInt32)
extern void Recognizer_recognizer_session_event_get_session_id_mD4D0B7CC2B238EA5B51AC263ECEE64F8EB5F2EC6 (void);
// 0x000000C9 System.IntPtr Microsoft.CognitiveServices.Speech.Internal.Recognizer::recognizer_recognition_event_get_result(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,System.IntPtr&)
extern void Recognizer_recognizer_recognition_event_get_result_mE8BE83DD8F3C6758A018AE4FB17DE38006C874C3 (void);
// 0x000000CA System.IntPtr Microsoft.CognitiveServices.Speech.Internal.Recognizer::recognizer_session_started_set_callback(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,Microsoft.CognitiveServices.Speech.Internal.CallbackFunctionDelegate,System.IntPtr)
extern void Recognizer_recognizer_session_started_set_callback_mC6D2C10D6BAC95F8F7CB9C37E2015F99C54C800D (void);
// 0x000000CB System.IntPtr Microsoft.CognitiveServices.Speech.Internal.Recognizer::recognizer_session_stopped_set_callback(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,Microsoft.CognitiveServices.Speech.Internal.CallbackFunctionDelegate,System.IntPtr)
extern void Recognizer_recognizer_session_stopped_set_callback_mBED30C2B5B024A07E3E927F9913FF1910123184E (void);
// 0x000000CC System.IntPtr Microsoft.CognitiveServices.Speech.Internal.Recognizer::recognizer_speech_start_detected_set_callback(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,Microsoft.CognitiveServices.Speech.Internal.CallbackFunctionDelegate,System.IntPtr)
extern void Recognizer_recognizer_speech_start_detected_set_callback_mBA32FFE729A32C15079566B581EEF67EB701C41B (void);
// 0x000000CD System.IntPtr Microsoft.CognitiveServices.Speech.Internal.Recognizer::recognizer_speech_end_detected_set_callback(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,Microsoft.CognitiveServices.Speech.Internal.CallbackFunctionDelegate,System.IntPtr)
extern void Recognizer_recognizer_speech_end_detected_set_callback_mC09E537CCD4C6224A0301E8C90B827A599F37B9F (void);
// 0x000000CE System.IntPtr Microsoft.CognitiveServices.Speech.Internal.Recognizer::recognizer_recognizing_set_callback(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,Microsoft.CognitiveServices.Speech.Internal.CallbackFunctionDelegate,System.IntPtr)
extern void Recognizer_recognizer_recognizing_set_callback_mE5F4F2773A2E1F7F7960F065D7146F9BA9320B84 (void);
// 0x000000CF System.IntPtr Microsoft.CognitiveServices.Speech.Internal.Recognizer::recognizer_recognized_set_callback(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,Microsoft.CognitiveServices.Speech.Internal.CallbackFunctionDelegate,System.IntPtr)
extern void Recognizer_recognizer_recognized_set_callback_mEAB056E12958EBCB0B3AE4361560D8B496A5C831 (void);
// 0x000000D0 System.IntPtr Microsoft.CognitiveServices.Speech.Internal.Recognizer::recognizer_canceled_set_callback(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,Microsoft.CognitiveServices.Speech.Internal.CallbackFunctionDelegate,System.IntPtr)
extern void Recognizer_recognizer_canceled_set_callback_m12409EB36F1DF4917D9CB80C148DF8623C1E55CD (void);
// 0x000000D1 System.IntPtr Microsoft.CognitiveServices.Speech.Internal.Recognizer::translator_synthesizing_audio_set_callback(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,Microsoft.CognitiveServices.Speech.Internal.CallbackFunctionDelegate,System.IntPtr)
extern void Recognizer_translator_synthesizing_audio_set_callback_mED636C5146933A0496BC5B9240FE1E5AC9EBC88C (void);
// 0x000000D2 System.Void Microsoft.CognitiveServices.Speech.Internal.SpxExceptionThrower::ThrowIfFail(System.IntPtr)
extern void SpxExceptionThrower_ThrowIfFail_m80558DF4FFB9A961C7CCC15CD13AF53F5437BA21 (void);
// 0x000000D3 System.Void Microsoft.CognitiveServices.Speech.Internal.SpxExceptionThrower::ThrowIfNull(System.Object,System.String)
extern void SpxExceptionThrower_ThrowIfNull_m5C9E05F3DEDEE273B1049A6052813A5870C4F223 (void);
// 0x000000D4 System.Void Microsoft.CognitiveServices.Speech.Internal.SpxExceptionThrower::ThrowIfNull(System.IntPtr,System.String)
extern void SpxExceptionThrower_ThrowIfNull_mD0AA28085EF6376F8CA07F13EE43542C501050C4 (void);
// 0x000000D5 System.Void Microsoft.CognitiveServices.Speech.Internal.SpxExceptionThrower::ThrowIfFalse(System.Boolean,System.Int32)
extern void SpxExceptionThrower_ThrowIfFalse_m6FA4EA1F0EDB900A2F7371E78F573DDC0D735FAF (void);
// 0x000000D6 System.Void Microsoft.CognitiveServices.Speech.Internal.SpxExceptionThrower::LogErrorIfFail(System.IntPtr)
extern void SpxExceptionThrower_LogErrorIfFail_mAD982B53E803B83F9B30CA838B8CDB1210FE1747 (void);
// 0x000000D7 System.Void Microsoft.CognitiveServices.Speech.Internal.SpxExceptionThrower::LogError(System.String)
extern void SpxExceptionThrower_LogError_m37A2018CF9E9DCD40E8EE95F37097192A2DC184A (void);
// 0x000000D8 System.String Microsoft.CognitiveServices.Speech.Internal.Utf8StringMarshaler::MarshalNativeToManaged(System.IntPtr)
extern void Utf8StringMarshaler_MarshalNativeToManaged_m102420BD438247158F21E76982168D6DD1EB7066 (void);
// 0x000000D9 System.String Microsoft.CognitiveServices.Speech.Internal.Utf8StringMarshaler::MarshalNativeToManaged(System.IntPtr,System.Int32)
extern void Utf8StringMarshaler_MarshalNativeToManaged_m83BBBA155F00B4E965BA9374B19D66C60CD1C5C5 (void);
// 0x000000DA System.IntPtr Microsoft.CognitiveServices.Speech.Internal.Utf8StringMarshaler::MarshalManagedToNative(System.String)
extern void Utf8StringMarshaler_MarshalManagedToNative_m9048724C7EA2DE6AB4263E09D6B7C3942BD936B1 (void);
// 0x000000DB System.IntPtr Microsoft.CognitiveServices.Speech.Internal.Utf8StringMarshaler::MarshalManagedToNative(System.String,System.Int32&)
extern void Utf8StringMarshaler_MarshalManagedToNative_m095E9D243061701D480D09FEA28256912FAC5ACA (void);
static Il2CppMethodPointer s_methodPointers[219] = 
{
	PropertyCollection__ctor_m8F53EB9B9655888D9E2B7AEBB9460B49265618B7,
	PropertyCollection_Close_mD3C12EE3FDB07C2A9D8C5E7C35C968E5A299BD9F,
	PropertyCollection_GetProperty_mC3CEE491F6DF720BDAE92D54A47E6420DCF146B5,
	PropertyCollection_SetProperty_mA4F3EDF9EE715D7F2C052E11948FCF36A4400024,
	PropertyCollection_SetProperty_m32FCC0FEE788D8E7BC18427D47C37535F389EC94,
	PropertyCollection_GetPropertyString_mE4586EBDDDD6EAAC938A0717F3ED064BF55EB83A,
	RecognitionEventArgs__ctor_m16B7E8B089A37C27BC87BEA572A1E4B2EA9E7B34,
	RecognitionEventArgs_get_Offset_m7518854BD1D37BB220A79F81301A0A07E7D791A9,
	RecognitionEventArgs_ToString_mF2E5686250B94CC3327CD6EB9EC1F89F365E8788,
	RecognitionResult__ctor_mF52685BDF0D0D81056CF4F2D7929B837D3E4504E,
	RecognitionResult_get_ResultId_m9CF0F0A305756122CEFD17C636900B33C167A973,
	RecognitionResult_get_Reason_m066811BCC260ED5344D289BE7930228203781E67,
	RecognitionResult_get_Text_mDC9F2CE6BE9519B218C81FECCC1BC35CA7274836,
	RecognitionResult_get_Properties_mBC89268B2B6560AC90F7EE6837AB6E3657B212D3,
	RecognitionResult_set_Properties_m4882E5F4FF2BD9889CA0D982BA14CB48E6936468,
	RecognitionResult_ToString_m7C6EE65B05B5F984DB102F9041EFDA7403547F95,
	CancellationDetails_FromResult_m6C75E2AD2521230D540BA1BCF5515ECC29DBF968,
	CancellationDetails__ctor_m5ECA54A2F0D76D1BF8E39C7AEF5DCC99D8672E26,
	CancellationDetails_get_Reason_m353778943984FF273C594BBB7D83D519C0B58180,
	CancellationDetails_set_Reason_m12D27884D7BBCF9EC1908A1DFF49066DEF4EF2B5,
	CancellationDetails_get_ErrorCode_m01B8889CC68F1443F822B1E8082F6B8378C723AF,
	CancellationDetails_set_ErrorCode_m78B75A1457D448E18D427A192E95A964218C8A74,
	CancellationDetails_get_ErrorDetails_mB3C4D6386464A3C5168B7EEFAAE45EC62EF95636,
	CancellationDetails_set_ErrorDetails_m22095079546C7E7DC32D28BB7D2271B3E68ACE93,
	CancellationDetails_ToString_m5E209DF29443488B64A6A0635234FD138DA3853B,
	Recognizer_add__SessionStarted_m631F4CB4BF55A534C3A8CB8EAEC57EE7139BE4CD,
	Recognizer_remove__SessionStarted_m1FB4C79584D375A664EFB1916F4127D741FBA016,
	Recognizer_add__SessionStopped_mC531DA001A86C34512638EC7AD42682AD216D32E,
	Recognizer_remove__SessionStopped_m75B4EAF7FE72A73C707DD5AD1CD02D2A82F48AAA,
	Recognizer_add__SpeechStartDetected_mC7B7A06E0F81282B1A983A1B99887C9E558BB750,
	Recognizer_remove__SpeechStartDetected_m3DB6ED1521289E1BCB5BF3032F68C2452A2F8830,
	Recognizer_add__SpeechEndDetected_m22831739B45057F6783CF4C784E8829A1A7D27A3,
	Recognizer_remove__SpeechEndDetected_m335107F7B597E13480CF0F21EB83795CFFC9B4D8,
	Recognizer_add_SessionStarted_mB7176B7EFAA7EF6CC237B3D46C760A7C309968BD,
	Recognizer_remove_SessionStarted_m80E3AA294063F4AC3B94DFC9268FB59E4ACEE3AC,
	Recognizer_add_SessionStopped_mE532CD715B13EE7A206285576688D2F091B716AA,
	Recognizer_remove_SessionStopped_m07F4261BD9721CA3EBEB2322AF5887A3089D04B7,
	Recognizer_add_SpeechStartDetected_mA70F8631EF165EC1924C86E7DE622BAEC1A84EC6,
	Recognizer_remove_SpeechStartDetected_m36A954D8D9CEA2A39057AE2D3E23FB0BA262B8C1,
	Recognizer_add_SpeechEndDetected_mD340F4717F391593D8DB5A538E983F114F9079F7,
	Recognizer_remove_SpeechEndDetected_mAC602E23E1C084A837A4068BB933C82A6329EBA4,
	Recognizer__ctor_mB448C82F7106784983B2332E0C35FAC613A10A05,
	Recognizer_Finalize_m65C041518559BC7332B58EC3BD23603D6FAEA7F5,
	Recognizer_Dispose_m53C30ACE1A7745127F79CB19F92894F67407E7CF,
	Recognizer_Dispose_m41B4467C6470F75AD4C81138860A38D98B55E31B,
	Recognizer_FireEvent_SetSessionStarted_m52E09A4B81972BF98DDFF6F1901AF63188C91629,
	Recognizer_FireEvent_SetSessionStopped_m1925D97F4E29071799739DAE667160A804385C25,
	Recognizer_FireEvent_SpeechStartDetected_mBBD9DA4BDE0F8E8E8545C4BACEC0068B86F16DAF,
	Recognizer_FireEvent_SpeechEndDetected_m855530988936AC915A4277BF08A8EF863933990E,
	Recognizer_DoAsyncRecognitionAction_m83046B03472BABA6160D5C56198373502725FE84,
	Recognizer_StartContinuousRecognition_mB8E850543B3369010BFDC121ADC45B7F4D3EB0C2,
	Recognizer_StopContinuousRecognition_mAB43FB36FA7F893031EE6EF33D7E980474FAE6D8,
	Recognizer_FromConfig_m987A4CFBF642C006F1CCC60AE435E7C825B55F64,
	GetRecognizerFromConfigDelegate__ctor_m8225A337DC771AF4368C036689A77F76D48D4567,
	GetRecognizerFromConfigDelegate_Invoke_m186F198255E0AFC6B9A20C2689202A1BFF62C4FD,
	SessionEventArgs__ctor_m240C60ECA28570ED5A8FF624C62BAE2EBA25A5AA,
	SessionEventArgs_get_SessionId_m8963B1EBE96E2EC946789DE47BBC4A17292FDF33,
	SessionEventArgs_ToString_m7F7FB7E1EC6F286538A7AC9B79D9354A0C57938C,
	SpeechConfig__ctor_m586768B4614A1778822601DF07F0319758E1BBE9,
	SpeechConfig_FromSubscription_m237D37C3C6EB687440438E8A3E505875BD3427A6,
	SpeechConfig_set_SpeechRecognitionLanguage_mD940965AA416B034AFFF01838B52C9E4A751AF41,
	SpeechConfig_SetProperty_m9E79AA2A21F823E849F29921DA476988C2C4DF1C,
	SpeechRecognitionResult__ctor_mCCFDE1F4008AF5CEDAF8D163E8475887565BD056,
	SpeechRecognitionEventArgs__ctor_mA12E8F0CEF640C514871ED1481C46B54CE92EE64,
	SpeechRecognitionEventArgs_get_Result_m775B21D1681EC803EE52F6FA345D0B5AB14D40D9,
	SpeechRecognitionEventArgs_ToString_m16F0AE8AF18D2C923DA643953109C5012CB3306D,
	SpeechRecognitionCanceledEventArgs__ctor_mE27E61BE7835AF73A8C25DD3FA2205632C9DC107,
	SpeechRecognitionCanceledEventArgs_get_Reason_m43CDCCC1311B234FB9F7C31BF966478DEB156815,
	SpeechRecognitionCanceledEventArgs_get_ErrorCode_m54BF697777056D1E09CEDB6E005095970A48B5D2,
	SpeechRecognitionCanceledEventArgs_ToString_m4254A5E0769BEA2D983E83418E6F2645DC371EFF,
	SpeechRecognizer_add__Recognizing_m16447A0416973172AB4D0CBAF6A8FC554B1E9294,
	SpeechRecognizer_remove__Recognizing_m5C73B8CE847979E6475EAC3240E7357FCA1F3E5F,
	SpeechRecognizer_add__Recognized_mD50B625785C24BEBFF41F06CEB5D10434F934B83,
	SpeechRecognizer_remove__Recognized_mD722671640B2B0B316AF08C40613843C781E17C0,
	SpeechRecognizer_add__Canceled_mCCA4C9985A5482241673E5F9DFAF8669412BA14B,
	SpeechRecognizer_remove__Canceled_m7AA55C10EEAE710C0581D5B235852FB30D142CB9,
	SpeechRecognizer_add_Recognizing_m889A7D105299CCC15B4C3D692703D12319E8AE2E,
	SpeechRecognizer_remove_Recognizing_mF69D0A164312B4697C2E10348F5AD94E4900032F,
	SpeechRecognizer_add_Recognized_mB6FFEF74D120F94577CEC4D793A63E77E571D3BE,
	SpeechRecognizer_remove_Recognized_m1AC5A080571B5A7CD4032CFCC5334FF9129C6FFD,
	SpeechRecognizer_add_Canceled_m714F909F5101C0292E0FA4814214E31F8AA6A216,
	SpeechRecognizer_remove_Canceled_m434BFE60418B882CEDA616FA1CADCD2F8C6DD962,
	SpeechRecognizer__ctor_m305BDA5F9788FBA4F444E31437F6C67589A11488,
	SpeechRecognizer__ctor_m8136931FE9EB168C0F793BDF081194CEED40BE0A,
	SpeechRecognizer_get_Properties_m1C0886BAAE462E98012C7EF3CED1E0314E341024,
	SpeechRecognizer_set_Properties_mCEEEDD714A579195CF49B0F9E4609DFD1EE2C7FC,
	SpeechRecognizer_StartContinuousRecognitionAsync_m1A15C93FACB936A88F8CF23F44FDEE3DE801AE09,
	SpeechRecognizer_StopContinuousRecognitionAsync_m470900781885522C896DF9884EDBCFB8990B5864,
	SpeechRecognizer_Finalize_m0DFC88D31A9612EB8E79AEFC3CAEACEDDF014C50,
	SpeechRecognizer_Dispose_mC62D82CBFB64A864B774FD0D2E3067C1428B7999,
	SpeechRecognizer_FireEvent_Recognizing_m5F41324B4925637FC1859240D793E0038ABE9EA4,
	SpeechRecognizer_FireEvent_Recognized_m1C49575EF31FF9111D7CC4CC679D1582B525F886,
	SpeechRecognizer_FireEvent_Canceled_m2034F62D22C618A305A7E5E7DCB416439CDD3F6E,
	SpeechRecognizer_U3CStartContinuousRecognitionAsyncU3Eb__48_0_m04FE3F14272D20010FE93F0E93DBBDCE0CF49BA8,
	SpeechRecognizer_U3CStopContinuousRecognitionAsyncU3Eb__49_0_m35203AF7CC7FE3FA3E39B1F7B184E700F4A22B65,
	SpeechTranslationConfig__ctor_m49EEA16B549465C7EB65801FC0687EA30E6F7D5E,
	SpeechTranslationConfig_FromSubscription_m06C876CA2EAFCCA6CD32E91C95EFED8C6711305F,
	SpeechTranslationConfig_AddTargetLanguage_m3A3E70E5FC18C24A5BA78D4AA646AD9294550713,
	TranslationRecognitionResult__ctor_mEC410E2929DA5612330E8C4521CD1363E7105CA1,
	TranslationRecognitionResult_get_Translations_mF40040BB24857FB1E87A6ACAEE7901DA628709F3,
	TranslationRecognitionResult_ToString_m8B3AEE6468E0C7285288A622C0F0CA53307F45C8,
	TranslationRecognitionResult_GetTranslationTexts_m080C1A8E4A40D60797BC62D07B58E27AAB1A6687,
	TranslationRecognizer_add__Recognizing_m7F06A14055F7EA343EDB417019887749F95204BD,
	TranslationRecognizer_remove__Recognizing_mDFCC6818686A988C4401D429A450539CDEAA1653,
	TranslationRecognizer_add__Recognized_mC948CE4C633F0B3989AB538E48CED770EAA2AB24,
	TranslationRecognizer_remove__Recognized_mFA887E35EAAE84E06620A043A51B69403DDF9288,
	TranslationRecognizer_add__Canceled_mBC507ED133CE7C79ED21D94FCBDD56491F8DC04F,
	TranslationRecognizer_remove__Canceled_m9764030E5C9EFF7B4C48AE21DD87E5BBC5E0640F,
	TranslationRecognizer_add_Recognizing_m5BAB5839D879D81073F27CA53AE6CB8337885B76,
	TranslationRecognizer_remove_Recognizing_m932338A39761F4AC1E5F2928F029A33922DE2183,
	TranslationRecognizer_add_Recognized_m1437E58C0813C018974685E579477BE1D1333BC9,
	TranslationRecognizer_remove_Recognized_mB68B184148E7F584F9B332A3576FC8C43678D082,
	TranslationRecognizer_add_Canceled_mEE6EEF70DDDFD5CE94781584D40C4B5644068EC0,
	TranslationRecognizer_remove_Canceled_mDE5EE8C9CA497FA63C4FED58130FCE8D4F840BA6,
	TranslationRecognizer__ctor_mE8AE805843C9D9A8663E4BA1AD18BE52928173DF,
	TranslationRecognizer__ctor_m9474B62F13778D537B18BB26C58D7CD4DD2B13D6,
	TranslationRecognizer_get_Properties_m041ED0EC39816383C2789C9784B00B7F50589ABF,
	TranslationRecognizer_set_Properties_m5576585D06ED00C702202DE79DA2E1DE600CA8C0,
	TranslationRecognizer_StartContinuousRecognitionAsync_m55412EFDF34D83FA6C1137AEACBF4971C98B3281,
	TranslationRecognizer_StopContinuousRecognitionAsync_m49E04468A3D122A341D532A8CEA61B770251AB13,
	TranslationRecognizer_Finalize_mBD2AC4D93AB98B81003D56FC50214FF0531461D4,
	TranslationRecognizer_Dispose_m319D91F26DCDA18C518359CA919A4B7D453F43F1,
	TranslationRecognizer_FireEvent_Recognizing_m9C07BDADD03B380A822B8C7C96CD90C471447E4C,
	TranslationRecognizer_FireEvent_Recognized_m37BF6A7CAA9794E1DBFAFB10D294B7DB958B9836,
	TranslationRecognizer_FireEvent_Canceled_m7875F1D6DA9BCA902CF05D571D55EF1055AB2E82,
	TranslationRecognizer_FireEvent_SynthesisResult_m6AE445D95E7487065CAB7589BDD9616335B69737,
	TranslationRecognizer_U3CStartContinuousRecognitionAsyncU3Eb__45_0_m3949BB584774853669A563EA6FB965124D0C9A73,
	TranslationRecognizer_U3CStopContinuousRecognitionAsyncU3Eb__46_0_m9271ACFBD9A2A2C9B9533BFEDE4A84847763AE07,
	TranslationSynthesisResult__ctor_m5504E3A57CC4B725D64C1981A97FB918F653847F,
	TranslationSynthesisResult_get_Reason_mA851E1881441C4F278FA28AF75BE94B21DFC327F,
	TranslationSynthesisResult_ToString_mC7A69F16165D4A7BB5622414AEA7CA34418E2CF4,
	TranslationSynthesisResult_GetAudioData_mC7C4FABC68E4574F59A8D91513C4B4F560226DED,
	TranslationSynthesisEventArgs__ctor_m0A5A5BCAA5952B55D937B2971ED4AB6F46AFA100,
	TranslationSynthesisEventArgs_get_Result_mCA8BD226299930517C948A066CB4B247A304C515,
	TranslationSynthesisEventArgs_ToString_mE16282A6E080C3529B776C47B3DDF7C4501CD096,
	TranslationRecognitionEventArgs__ctor_m8AF9A74DEA81084992DC783C79D2DFC81A1230A7,
	TranslationRecognitionEventArgs_get_Result_m047C28B1FF5C9231EF5D9CE4957C05CD2E4B5CDD,
	TranslationRecognitionEventArgs_ToString_mA6B067D8D6C5D0DAB3C26670987B1BE548B6827A,
	TranslationRecognitionCanceledEventArgs__ctor_mC0DAD5191F911E2119197BF1876B9DFD46B7E630,
	TranslationRecognitionCanceledEventArgs_get_Reason_m93D03951586AFFFF3DF9AD531E90A6A6AC5A2809,
	TranslationRecognitionCanceledEventArgs_get_ErrorCode_mCD275DF83031DDBD93498938B45A578946631D24,
	TranslationRecognitionCanceledEventArgs_ToString_m9DCCAC9E91B16CE2A22B213F823A0A32EDE8DFA9,
	Diagnostics_Args_m66A8E4AC0D0D0C2C854A969BFCE1C409BFF58556,
	Diagnostics_SPX_TRACE_VERBOSE_m9618B77BD67A243B856AE5D2E73CB87D57D1DA6E,
	Diagnostics_SPX_TRACE_VERBOSE_mB66498BCE9FE52C0C1C41B5F06ACF3FBA58AE529,
	CancellationDetails_result_get_reason_canceled_mB6B75B4486D05ADF2F85CDFD0F60E8DC61FB9800,
	CancellationDetails_result_get_canceled_error_code_m8469A5D13BF7FBEAC7552AB749BE0E63258F87A0,
	SpeechConfig_speech_config_from_subscription_mB1ABBE414549A4855CF3CE0AD87E832209A701E0,
	SpeechConfig_speech_config_release_m02C3D503C5141ADD5F9075D27204DD1AD5E9274A,
	SpeechConfig_speech_config_get_property_bag_mAD34CF04C0FD498FECA8D218D58D8C39431FD207,
	SpeechTranslationConfig_speech_translation_config_from_subscription_mE64E8DB2A53A0CC70C6D8CAC467A39451949F1A4,
	SpeechTranslationConfig_speech_translation_config_add_target_language_m7CBDFA258DA86801344705139992591D7AF3A450,
	DiagnosticsInterop_diagnostics_log_trace_string_mFE0702C2B29033AF9782E2687FAEF40471DB9896,
	SpxError_GetMessage_m56F8CB8D3FCC6E557B4C0F7B8542AFF7CE76B14C,
	SpxError_GetErrorCode_m59998B5738166F75D78A901464B8653BF1718492,
	SpxError_Release_mA9AC9D63595F70D08E078D5C6AD340B22A701301,
	SpxError_ReleaseNoThrow_m33343325EA373B0D5AF143C101C92C64211E359F,
	SpxError_error_get_message_mF6E912B67C4C33E52A5734B4185F5093BC4EFB2D,
	SpxError_error_get_error_code_m90FAF28F9F681E57DC432BB3406486932F2FC305,
	SpxError_error_release_m849336C474D38F6418F8F87E3F62A667401DD6FD,
	SpxError__cctor_m52E236EE6E93EB40B6B5634B2746964D74BD3C85,
	EventArgs_recognizer_event_handle_release_mB10E833E44DE8B942BA131D02EAA83C76170287B,
	MonoPInvokeCallbackAttribute__ctor_mCD6247FB473E269B565E8D2DFF089C409A664062,
	HandleRelease__ctor_m5265A47915D90FC04F512F3D1BC68A711343A4E7,
	HandleRelease_Invoke_m5A6CE4A6071A868B9695E55991957B8C520128EB,
	InteropSafeHandle__ctor_mC37ECE3504FFCF1C3A565E45B1659808FD310B62,
	InteropSafeHandle_get_IsInvalid_m0C613C6DFCD587AC5C04CE6F23DCECFB223233EA,
	InteropSafeHandle_ReleaseHandle_m2F321C7B0B2E77403444A781A5279CC74038AE3E,
	InteropSafeHandle_Dispose_mC58913907DC7D23E82426AC45B50333CD885BDFC,
	NULL,
	InteropSafeHandle_ToString_m1A7805107A6C1BB682B234E53FDCBC8C06604CC9,
	InteropSafeHandle_Finalize_m83ABB6C2604BB75B5BB1A007DEF8ED9D78620503,
	SpxFactory_GetDataFromHandleUsingDelegate_m2292A32ABAA69783218EFADD6C6269D5527378CD,
	SpxFactory_recognizer_create_speech_recognizer_from_config_mA2AA5F624FF8DE29D2444E8D8C197B8849BC5416,
	SpxFactory_recognizer_create_translation_recognizer_from_config_m0C8864D041B6404EFDEDA573E1265683CD7FC31F,
	GetResultDelegate__ctor_mE4D38F6D4B3F9FBE85FE26118D690DD00A195314,
	GetResultDelegate_Invoke_mB1E1810F9B48533717B0A387D1AEEDE06AFDD280,
	PropertyCollection_property_bag_set_string_m3B3493AE6E2894BE2258E427938B0FE52490AF64,
	PropertyCollection_property_bag_get_string_mE4B57B59FFF4B01AB9A63785B5702904C03BB581,
	PropertyCollection_property_bag_free_string_m4B23B011D0B261E565A1E8AB841EDAC0AE48D9C4,
	PropertyCollection_property_bag_release_mEA272951A28D37AE294DE83DED63D32185E99E01,
	RecognitionResult_result_get_reason_m24BBA306606BC3C381D4A4393ACB71DD4D2050DF,
	RecognitionResult_result_get_result_id_m0BFA3A72D4CAA06A4E41F7FC5DD49DC9EB786AB7,
	RecognitionResult_result_get_text_mE0BD740D8672D17924AFE52A56DA353AF8F9E2D8,
	RecognitionResult_result_get_property_bag_m5D8123FA8E1448FC52D27AA615145767ACF533C5,
	RecognitionResult_recognizer_result_handle_is_valid_mD2EAC27E610A8715E49F1626367788A9865CE82B,
	RecognitionResult_recognizer_result_handle_release_mD7241DA94329C30FC7576690F6090CB9083B1388,
	RecognitionResult_translation_text_result_get_translation_text_buffer_header_mCDAF142354F6B22AF7E7A3D58665D260DB2A22C8,
	RecognitionResult_translation_synthesis_result_get_audio_data_m49A524C78B5BBBAD2093F4C61344AC81B0428D3B,
	CallbackFunctionDelegate__ctor_m242A4949B6999B19FDCBCCB89CBBD60A2D8AB7A6,
	CallbackFunctionDelegate_Invoke_m2DB00DC2A53AF471906D80BFF8EC4378B6F81EE7,
	Recognizer_recognizer_get_property_bag_m4D30FE9EBED74424FCE805136396F8EDC8A81D17,
	Recognizer_recognizer_handle_release_m6D4F7C9482D6618B26EF7AA1E0BF48B64986FCEF,
	Recognizer_recognizer_start_continuous_recognition_async_m441C21EB7505A97E5F91536E25509FD729083C16,
	Recognizer_recognizer_start_continuous_recognition_async_wait_for_mBB675A57CCEF423FF45B679C2878E6407C1C824C,
	Recognizer_recognizer_stop_continuous_recognition_async_m35C65D620FD71FE342E909F031267E73D24179EA,
	Recognizer_recognizer_stop_continuous_recognition_async_wait_for_mD01776BA308DDA07554942288BD247FF8E10ABE7,
	Recognizer_recognizer_async_handle_release_m308FA74E4DC2A3B70602A6EB0B36B75293C45707,
	Recognizer_recognizer_recognition_event_get_offset_m5798A68CFDD94101E91CEFD84C3E747272521543,
	Recognizer_recognizer_session_event_get_session_id_mD4D0B7CC2B238EA5B51AC263ECEE64F8EB5F2EC6,
	Recognizer_recognizer_recognition_event_get_result_mE8BE83DD8F3C6758A018AE4FB17DE38006C874C3,
	Recognizer_recognizer_session_started_set_callback_mC6D2C10D6BAC95F8F7CB9C37E2015F99C54C800D,
	Recognizer_recognizer_session_stopped_set_callback_mBED30C2B5B024A07E3E927F9913FF1910123184E,
	Recognizer_recognizer_speech_start_detected_set_callback_mBA32FFE729A32C15079566B581EEF67EB701C41B,
	Recognizer_recognizer_speech_end_detected_set_callback_mC09E537CCD4C6224A0301E8C90B827A599F37B9F,
	Recognizer_recognizer_recognizing_set_callback_mE5F4F2773A2E1F7F7960F065D7146F9BA9320B84,
	Recognizer_recognizer_recognized_set_callback_mEAB056E12958EBCB0B3AE4361560D8B496A5C831,
	Recognizer_recognizer_canceled_set_callback_m12409EB36F1DF4917D9CB80C148DF8623C1E55CD,
	Recognizer_translator_synthesizing_audio_set_callback_mED636C5146933A0496BC5B9240FE1E5AC9EBC88C,
	SpxExceptionThrower_ThrowIfFail_m80558DF4FFB9A961C7CCC15CD13AF53F5437BA21,
	SpxExceptionThrower_ThrowIfNull_m5C9E05F3DEDEE273B1049A6052813A5870C4F223,
	SpxExceptionThrower_ThrowIfNull_mD0AA28085EF6376F8CA07F13EE43542C501050C4,
	SpxExceptionThrower_ThrowIfFalse_m6FA4EA1F0EDB900A2F7371E78F573DDC0D735FAF,
	SpxExceptionThrower_LogErrorIfFail_mAD982B53E803B83F9B30CA838B8CDB1210FE1747,
	SpxExceptionThrower_LogError_m37A2018CF9E9DCD40E8EE95F37097192A2DC184A,
	Utf8StringMarshaler_MarshalNativeToManaged_m102420BD438247158F21E76982168D6DD1EB7066,
	Utf8StringMarshaler_MarshalNativeToManaged_m83BBBA155F00B4E965BA9374B19D66C60CD1C5C5,
	Utf8StringMarshaler_MarshalManagedToNative_m9048724C7EA2DE6AB4263E09D6B7C3942BD936B1,
	Utf8StringMarshaler_MarshalManagedToNative_m095E9D243061701D480D09FEA28256912FAC5ACA,
};
static const int32_t s_InvokerIndices[219] = 
{
	8616,
	10659,
	7713,
	4692,
	5061,
	1768,
	8616,
	10628,
	10468,
	8616,
	10468,
	10407,
	10468,
	10468,
	8671,
	10468,
	16680,
	8671,
	10407,
	8613,
	10407,
	8613,
	10468,
	8671,
	10468,
	8671,
	8671,
	8671,
	8671,
	8671,
	8671,
	8671,
	8671,
	8671,
	8671,
	8671,
	8671,
	8671,
	8671,
	8671,
	8671,
	8671,
	10659,
	10659,
	8510,
	14851,
	14851,
	14851,
	14851,
	8671,
	10659,
	10659,
	15603,
	5053,
	2355,
	8616,
	10468,
	10468,
	8616,
	15603,
	8671,
	5061,
	8616,
	8616,
	10468,
	10468,
	8616,
	10407,
	10407,
	10468,
	8671,
	8671,
	8671,
	8671,
	8671,
	8671,
	8671,
	8671,
	8671,
	8671,
	8671,
	8671,
	8671,
	8671,
	10468,
	8671,
	10468,
	10468,
	10659,
	8510,
	14851,
	14851,
	14851,
	10659,
	10659,
	8616,
	15603,
	8671,
	8616,
	10468,
	10468,
	10659,
	8671,
	8671,
	8671,
	8671,
	8671,
	8671,
	8671,
	8671,
	8671,
	8671,
	8671,
	8671,
	8671,
	8671,
	10468,
	8671,
	10468,
	10468,
	10659,
	8510,
	14851,
	14851,
	14851,
	14851,
	10659,
	10659,
	8616,
	10407,
	10468,
	8671,
	8616,
	10468,
	10468,
	8616,
	10468,
	10468,
	8616,
	10407,
	10407,
	10468,
	16680,
	13919,
	13104,
	15510,
	15510,
	14330,
	16536,
	15510,
	14330,
	15514,
	12958,
	16678,
	16496,
	16999,
	16347,
	16536,
	16536,
	16536,
	17252,
	16536,
	8671,
	5053,
	7574,
	5001,
	10304,
	10304,
	8510,
	0,
	10468,
	10659,
	14487,
	14330,
	14330,
	5053,
	2361,
	13605,
	13605,
	16536,
	16536,
	15510,
	14379,
	14379,
	15510,
	16351,
	16536,
	14376,
	14376,
	5053,
	2696,
	15510,
	16536,
	15510,
	15509,
	15510,
	15509,
	16536,
	15510,
	14379,
	15510,
	14381,
	14381,
	14381,
	14381,
	14381,
	14381,
	14381,
	14381,
	16999,
	16038,
	15930,
	15905,
	16999,
	17002,
	16678,
	15579,
	16537,
	15510,
};
static const Il2CppTokenIndexMethodTuple s_reversePInvokeIndices[11] = 
{
	{ 0x0600002E, 27,  (void**)&Recognizer_FireEvent_SetSessionStarted_m52E09A4B81972BF98DDFF6F1901AF63188C91629_RuntimeMethod_var, 0 },
	{ 0x0600002F, 28,  (void**)&Recognizer_FireEvent_SetSessionStopped_m1925D97F4E29071799739DAE667160A804385C25_RuntimeMethod_var, 0 },
	{ 0x06000030, 30,  (void**)&Recognizer_FireEvent_SpeechStartDetected_mBBD9DA4BDE0F8E8E8545C4BACEC0068B86F16DAF_RuntimeMethod_var, 0 },
	{ 0x06000031, 29,  (void**)&Recognizer_FireEvent_SpeechEndDetected_m855530988936AC915A4277BF08A8EF863933990E_RuntimeMethod_var, 0 },
	{ 0x0600005B, 33,  (void**)&SpeechRecognizer_FireEvent_Recognizing_m5F41324B4925637FC1859240D793E0038ABE9EA4_RuntimeMethod_var, 0 },
	{ 0x0600005C, 32,  (void**)&SpeechRecognizer_FireEvent_Recognized_m1C49575EF31FF9111D7CC4CC679D1582B525F886_RuntimeMethod_var, 0 },
	{ 0x0600005D, 31,  (void**)&SpeechRecognizer_FireEvent_Canceled_m2034F62D22C618A305A7E5E7DCB416439CDD3F6E_RuntimeMethod_var, 0 },
	{ 0x0600007B, 36,  (void**)&TranslationRecognizer_FireEvent_Recognizing_m9C07BDADD03B380A822B8C7C96CD90C471447E4C_RuntimeMethod_var, 0 },
	{ 0x0600007C, 35,  (void**)&TranslationRecognizer_FireEvent_Recognized_m37BF6A7CAA9794E1DBFAFB10D294B7DB958B9836_RuntimeMethod_var, 0 },
	{ 0x0600007D, 34,  (void**)&TranslationRecognizer_FireEvent_Canceled_m7875F1D6DA9BCA902CF05D571D55EF1055AB2E82_RuntimeMethod_var, 0 },
	{ 0x0600007E, 37,  (void**)&TranslationRecognizer_FireEvent_SynthesisResult_m6AE445D95E7487065CAB7589BDD9616335B69737_RuntimeMethod_var, 0 },
};
static const Il2CppTokenRangePair s_rgctxIndices[1] = 
{
	{ 0x060000AA, { 0, 1 } },
};
extern const uint32_t g_rgctx_T_tE9646694A37216A66FBE133D3AF2762065FC0F42;
static const Il2CppRGCTXDefinition s_rgctxValues[1] = 
{
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_T_tE9646694A37216A66FBE133D3AF2762065FC0F42 },
};
IL2CPP_EXTERN_C const Il2CppCodeGenModule g_Microsoft_CognitiveServices_Speech_csharp_CodeGenModule;
const Il2CppCodeGenModule g_Microsoft_CognitiveServices_Speech_csharp_CodeGenModule = 
{
	"Microsoft.CognitiveServices.Speech.csharp.dll",
	219,
	s_methodPointers,
	0,
	NULL,
	s_InvokerIndices,
	11,
	s_reversePInvokeIndices,
	1,
	s_rgctxIndices,
	1,
	s_rgctxValues,
	NULL,
	NULL, // module initializer,
	NULL,
	NULL,
	NULL,
};
