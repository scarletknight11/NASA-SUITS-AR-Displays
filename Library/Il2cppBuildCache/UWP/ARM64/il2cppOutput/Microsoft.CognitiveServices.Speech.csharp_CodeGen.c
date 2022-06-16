#include "pch-c.h"
#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include "codegen/il2cpp-codegen-metadata.h"


extern const RuntimeMethod* Recognizer_FireEvent_SetSessionStarted_mE1D278B2C1F2EA34E714D8E5F41CF8EA7E533F11_RuntimeMethod_var;
extern const RuntimeMethod* Recognizer_FireEvent_SetSessionStopped_mC49DC694FC309FDE44262E02039FB542A838CC78_RuntimeMethod_var;
extern const RuntimeMethod* Recognizer_FireEvent_SpeechEndDetected_mBD282262A151F5C473D1C49CFF74DEDDD71E7769_RuntimeMethod_var;
extern const RuntimeMethod* Recognizer_FireEvent_SpeechStartDetected_m6BA5E049E81970E282933AEEA38E42DC461AC29F_RuntimeMethod_var;
extern const RuntimeMethod* SpeechRecognizer_FireEvent_Canceled_m4DDE18DFD654DACBDE97F182D735A624B5E601F2_RuntimeMethod_var;
extern const RuntimeMethod* SpeechRecognizer_FireEvent_Recognized_m67E62803BF374C34B61CFC991DA73FE25AF287BF_RuntimeMethod_var;
extern const RuntimeMethod* SpeechRecognizer_FireEvent_Recognizing_m3BAA0548428B005FA57B77CB4B09D157F5D34E0F_RuntimeMethod_var;
extern const RuntimeMethod* TranslationRecognizer_FireEvent_Canceled_m07E5C0FDE0F3C15AE7DA029B15FAB7D3B20DEBA2_RuntimeMethod_var;
extern const RuntimeMethod* TranslationRecognizer_FireEvent_Recognized_mDDE062FC556E989A6D9524FEDD5CB998F3B7283A_RuntimeMethod_var;
extern const RuntimeMethod* TranslationRecognizer_FireEvent_Recognizing_mB199DD38F12DAD9246DD6B677A2E74490B49A52F_RuntimeMethod_var;
extern const RuntimeMethod* TranslationRecognizer_FireEvent_SynthesisResult_mCE224C9BBD6BD727940FA60C9E032A92A4B3CB80_RuntimeMethod_var;



// 0x00000001 System.Void Microsoft.CognitiveServices.Speech.PropertyCollection::.ctor(System.IntPtr)
extern void PropertyCollection__ctor_m298675719270993E505A055053F0D23293B517D2 (void);
// 0x00000002 System.Void Microsoft.CognitiveServices.Speech.PropertyCollection::Close()
extern void PropertyCollection_Close_m22F36396E1E74B44AA00267D1081F75ACBB9E09D (void);
// 0x00000003 System.String Microsoft.CognitiveServices.Speech.PropertyCollection::GetProperty(Microsoft.CognitiveServices.Speech.PropertyId)
extern void PropertyCollection_GetProperty_m6DBFA6C4953D6B5D1C4959E210A76B9BFA6A6D17 (void);
// 0x00000004 System.Void Microsoft.CognitiveServices.Speech.PropertyCollection::SetProperty(Microsoft.CognitiveServices.Speech.PropertyId,System.String)
extern void PropertyCollection_SetProperty_m8CB653598B175FAF913064E54671C09E74FCC336 (void);
// 0x00000005 System.Void Microsoft.CognitiveServices.Speech.PropertyCollection::SetProperty(System.String,System.String)
extern void PropertyCollection_SetProperty_mB875B4CF7E0AD52B5E988746EC19DB3CA3B573B6 (void);
// 0x00000006 System.String Microsoft.CognitiveServices.Speech.PropertyCollection::GetPropertyString(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,System.Int32,System.String,System.String)
extern void PropertyCollection_GetPropertyString_m42FE0F1232AE5118B58061A6222B07E5A27D9B54 (void);
// 0x00000007 System.Void Microsoft.CognitiveServices.Speech.RecognitionEventArgs::.ctor(System.IntPtr)
extern void RecognitionEventArgs__ctor_m31490D766642A01A99F86D9E037DEABFD21138FE (void);
// 0x00000008 System.UInt64 Microsoft.CognitiveServices.Speech.RecognitionEventArgs::get_Offset()
extern void RecognitionEventArgs_get_Offset_m5A20B9663DD26226E0D6B5BF93F0BAA30D04A870 (void);
// 0x00000009 System.String Microsoft.CognitiveServices.Speech.RecognitionEventArgs::ToString()
extern void RecognitionEventArgs_ToString_mE2C59AB25F8EDBED5DC757788376B9FEAEC0D7D0 (void);
// 0x0000000A System.Void Microsoft.CognitiveServices.Speech.RecognitionResult::.ctor(System.IntPtr)
extern void RecognitionResult__ctor_m7D01DA66AAD01DE820449823615BF686A33EC72E (void);
// 0x0000000B System.String Microsoft.CognitiveServices.Speech.RecognitionResult::get_ResultId()
extern void RecognitionResult_get_ResultId_mD03C9639D934585A68FA0DDA386A9A3787C5F390 (void);
// 0x0000000C Microsoft.CognitiveServices.Speech.ResultReason Microsoft.CognitiveServices.Speech.RecognitionResult::get_Reason()
extern void RecognitionResult_get_Reason_mC83682EB35ACDAC37F211E904C585EF187E94057 (void);
// 0x0000000D System.String Microsoft.CognitiveServices.Speech.RecognitionResult::get_Text()
extern void RecognitionResult_get_Text_mF0CFAB4D94ACC8B4E39FB5CCE4C1265F85FE84CD (void);
// 0x0000000E Microsoft.CognitiveServices.Speech.PropertyCollection Microsoft.CognitiveServices.Speech.RecognitionResult::get_Properties()
extern void RecognitionResult_get_Properties_m284ABEC168FBE8033594BCAF188A44ED976FD365 (void);
// 0x0000000F System.Void Microsoft.CognitiveServices.Speech.RecognitionResult::set_Properties(Microsoft.CognitiveServices.Speech.PropertyCollection)
extern void RecognitionResult_set_Properties_mC90D2FE65A44F87E80C5889C0E59A4CA2546FE33 (void);
// 0x00000010 System.String Microsoft.CognitiveServices.Speech.RecognitionResult::ToString()
extern void RecognitionResult_ToString_m5203323C2CC6CE545D52A784C9257CCBDCE80A4A (void);
// 0x00000011 Microsoft.CognitiveServices.Speech.CancellationDetails Microsoft.CognitiveServices.Speech.CancellationDetails::FromResult(Microsoft.CognitiveServices.Speech.RecognitionResult)
extern void CancellationDetails_FromResult_m4EB7D4D34AD85ACD568A2598EA91D0122D5DB718 (void);
// 0x00000012 System.Void Microsoft.CognitiveServices.Speech.CancellationDetails::.ctor(Microsoft.CognitiveServices.Speech.RecognitionResult)
extern void CancellationDetails__ctor_m03B6FD790EE0ADF4D46D724E5B59FA224385663B (void);
// 0x00000013 Microsoft.CognitiveServices.Speech.CancellationReason Microsoft.CognitiveServices.Speech.CancellationDetails::get_Reason()
extern void CancellationDetails_get_Reason_mEBCBE5F14B176F5574F4A4D6CBB2F3719CC51BA4 (void);
// 0x00000014 System.Void Microsoft.CognitiveServices.Speech.CancellationDetails::set_Reason(Microsoft.CognitiveServices.Speech.CancellationReason)
extern void CancellationDetails_set_Reason_m6585C2DF7D2BF59B5FC062DF5258F079399CFE01 (void);
// 0x00000015 Microsoft.CognitiveServices.Speech.CancellationErrorCode Microsoft.CognitiveServices.Speech.CancellationDetails::get_ErrorCode()
extern void CancellationDetails_get_ErrorCode_m86467B87546D6D75FF69D6190773F9F84CD94D98 (void);
// 0x00000016 System.Void Microsoft.CognitiveServices.Speech.CancellationDetails::set_ErrorCode(Microsoft.CognitiveServices.Speech.CancellationErrorCode)
extern void CancellationDetails_set_ErrorCode_mDC39567210408C52117E39FAD3930C916DA94F86 (void);
// 0x00000017 System.String Microsoft.CognitiveServices.Speech.CancellationDetails::get_ErrorDetails()
extern void CancellationDetails_get_ErrorDetails_m1BD08DCFD99497ADB4E6C05D337488538941B384 (void);
// 0x00000018 System.Void Microsoft.CognitiveServices.Speech.CancellationDetails::set_ErrorDetails(System.String)
extern void CancellationDetails_set_ErrorDetails_mC97095A39BD0DB39495A59E1081EB3026F2BE140 (void);
// 0x00000019 System.String Microsoft.CognitiveServices.Speech.CancellationDetails::ToString()
extern void CancellationDetails_ToString_m7A964C6C0A1527D7786D45DA24ABBA334C6CB337 (void);
// 0x0000001A System.Void Microsoft.CognitiveServices.Speech.Recognizer::add__SessionStarted(System.EventHandler`1<Microsoft.CognitiveServices.Speech.SessionEventArgs>)
extern void Recognizer_add__SessionStarted_m82C00A0B6456390DBDF96FE466647D964302FE08 (void);
// 0x0000001B System.Void Microsoft.CognitiveServices.Speech.Recognizer::remove__SessionStarted(System.EventHandler`1<Microsoft.CognitiveServices.Speech.SessionEventArgs>)
extern void Recognizer_remove__SessionStarted_mDE2352B8E75ECF0D16F283EB81A72D769F129A3B (void);
// 0x0000001C System.Void Microsoft.CognitiveServices.Speech.Recognizer::add__SessionStopped(System.EventHandler`1<Microsoft.CognitiveServices.Speech.SessionEventArgs>)
extern void Recognizer_add__SessionStopped_m72A41C93CFD304A89B9369D6E74D7E1D40D16D36 (void);
// 0x0000001D System.Void Microsoft.CognitiveServices.Speech.Recognizer::remove__SessionStopped(System.EventHandler`1<Microsoft.CognitiveServices.Speech.SessionEventArgs>)
extern void Recognizer_remove__SessionStopped_m5A5E96C40EA8CA9ADA763CEBF02573CAC0A32BC6 (void);
// 0x0000001E System.Void Microsoft.CognitiveServices.Speech.Recognizer::add__SpeechStartDetected(System.EventHandler`1<Microsoft.CognitiveServices.Speech.RecognitionEventArgs>)
extern void Recognizer_add__SpeechStartDetected_m0F0EC04B8F79FCE22C43242DF2A774E8AB57A737 (void);
// 0x0000001F System.Void Microsoft.CognitiveServices.Speech.Recognizer::remove__SpeechStartDetected(System.EventHandler`1<Microsoft.CognitiveServices.Speech.RecognitionEventArgs>)
extern void Recognizer_remove__SpeechStartDetected_m4647638FFD5518D8C6356FD0B788A2D8E123D705 (void);
// 0x00000020 System.Void Microsoft.CognitiveServices.Speech.Recognizer::add__SpeechEndDetected(System.EventHandler`1<Microsoft.CognitiveServices.Speech.RecognitionEventArgs>)
extern void Recognizer_add__SpeechEndDetected_m15AA9CD5EA864B18E1F29B21F3349E4EDE9899BB (void);
// 0x00000021 System.Void Microsoft.CognitiveServices.Speech.Recognizer::remove__SpeechEndDetected(System.EventHandler`1<Microsoft.CognitiveServices.Speech.RecognitionEventArgs>)
extern void Recognizer_remove__SpeechEndDetected_m41E1F529B192A8C325D9B8D40652BE2AC20FA480 (void);
// 0x00000022 System.Void Microsoft.CognitiveServices.Speech.Recognizer::add_SessionStarted(System.EventHandler`1<Microsoft.CognitiveServices.Speech.SessionEventArgs>)
extern void Recognizer_add_SessionStarted_m0AE6F1FEABDB92BBFBFAC1913766AF0C7C5EC181 (void);
// 0x00000023 System.Void Microsoft.CognitiveServices.Speech.Recognizer::remove_SessionStarted(System.EventHandler`1<Microsoft.CognitiveServices.Speech.SessionEventArgs>)
extern void Recognizer_remove_SessionStarted_mC51DC2F48770679D9EFD9903CA369DA470A2F805 (void);
// 0x00000024 System.Void Microsoft.CognitiveServices.Speech.Recognizer::add_SessionStopped(System.EventHandler`1<Microsoft.CognitiveServices.Speech.SessionEventArgs>)
extern void Recognizer_add_SessionStopped_m3CF6FD49B291A3D611BCAA757E9816CA566A6510 (void);
// 0x00000025 System.Void Microsoft.CognitiveServices.Speech.Recognizer::remove_SessionStopped(System.EventHandler`1<Microsoft.CognitiveServices.Speech.SessionEventArgs>)
extern void Recognizer_remove_SessionStopped_m7DB1219DB86C671AC5BC546493F6A61255796FC2 (void);
// 0x00000026 System.Void Microsoft.CognitiveServices.Speech.Recognizer::add_SpeechStartDetected(System.EventHandler`1<Microsoft.CognitiveServices.Speech.RecognitionEventArgs>)
extern void Recognizer_add_SpeechStartDetected_mD68D76AB0CC0A6341CF57207E7E07E23F63D3D67 (void);
// 0x00000027 System.Void Microsoft.CognitiveServices.Speech.Recognizer::remove_SpeechStartDetected(System.EventHandler`1<Microsoft.CognitiveServices.Speech.RecognitionEventArgs>)
extern void Recognizer_remove_SpeechStartDetected_mB9E6CC75B3A409F58BC5D9ACFDEC8F64E8F7FEB4 (void);
// 0x00000028 System.Void Microsoft.CognitiveServices.Speech.Recognizer::add_SpeechEndDetected(System.EventHandler`1<Microsoft.CognitiveServices.Speech.RecognitionEventArgs>)
extern void Recognizer_add_SpeechEndDetected_mFC27AE69D120DE02B47F67EB7DA0E13FB4070CA4 (void);
// 0x00000029 System.Void Microsoft.CognitiveServices.Speech.Recognizer::remove_SpeechEndDetected(System.EventHandler`1<Microsoft.CognitiveServices.Speech.RecognitionEventArgs>)
extern void Recognizer_remove_SpeechEndDetected_mA7AAD2BC5C7C3246953879E19F047A62D8CCC3FA (void);
// 0x0000002A System.Void Microsoft.CognitiveServices.Speech.Recognizer::.ctor(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle)
extern void Recognizer__ctor_m5707D0C68E07B4A737C753DDBA817377F0CDDF5E (void);
// 0x0000002B System.Void Microsoft.CognitiveServices.Speech.Recognizer::Finalize()
extern void Recognizer_Finalize_m20F81169F675CE0A27215591F1330A8853F916F8 (void);
// 0x0000002C System.Void Microsoft.CognitiveServices.Speech.Recognizer::Dispose()
extern void Recognizer_Dispose_m0808AC62F7D42E146FB7349FCB2C2E1D4776F994 (void);
// 0x0000002D System.Void Microsoft.CognitiveServices.Speech.Recognizer::Dispose(System.Boolean)
extern void Recognizer_Dispose_m087FE4E3ED875BD3BF69DA66606404145E3C0400 (void);
// 0x0000002E System.Void Microsoft.CognitiveServices.Speech.Recognizer::FireEvent_SetSessionStarted(System.IntPtr,System.IntPtr,System.IntPtr)
extern void Recognizer_FireEvent_SetSessionStarted_mE1D278B2C1F2EA34E714D8E5F41CF8EA7E533F11 (void);
// 0x0000002F System.Void Microsoft.CognitiveServices.Speech.Recognizer::FireEvent_SetSessionStopped(System.IntPtr,System.IntPtr,System.IntPtr)
extern void Recognizer_FireEvent_SetSessionStopped_mC49DC694FC309FDE44262E02039FB542A838CC78 (void);
// 0x00000030 System.Void Microsoft.CognitiveServices.Speech.Recognizer::FireEvent_SpeechStartDetected(System.IntPtr,System.IntPtr,System.IntPtr)
extern void Recognizer_FireEvent_SpeechStartDetected_m6BA5E049E81970E282933AEEA38E42DC461AC29F (void);
// 0x00000031 System.Void Microsoft.CognitiveServices.Speech.Recognizer::FireEvent_SpeechEndDetected(System.IntPtr,System.IntPtr,System.IntPtr)
extern void Recognizer_FireEvent_SpeechEndDetected_mBD282262A151F5C473D1C49CFF74DEDDD71E7769 (void);
// 0x00000032 System.Void Microsoft.CognitiveServices.Speech.Recognizer::DoAsyncRecognitionAction(System.Action)
extern void Recognizer_DoAsyncRecognitionAction_m2268106F48438234958D981F40C8036136AFD5CF (void);
// 0x00000033 System.Void Microsoft.CognitiveServices.Speech.Recognizer::StartContinuousRecognition()
extern void Recognizer_StartContinuousRecognition_m619E72043511237D3E1C58D62E375DAA4F1ACA9C (void);
// 0x00000034 System.Void Microsoft.CognitiveServices.Speech.Recognizer::StopContinuousRecognition()
extern void Recognizer_StopContinuousRecognition_m31050BE671DCB3A02B2709C5D37B00422795AF30 (void);
// 0x00000035 Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle Microsoft.CognitiveServices.Speech.Recognizer::FromConfig(Microsoft.CognitiveServices.Speech.Recognizer/GetRecognizerFromConfigDelegate,Microsoft.CognitiveServices.Speech.SpeechConfig)
extern void Recognizer_FromConfig_m60791AE2ACE591729B360D7615035FF13CAFBBF7 (void);
// 0x00000036 System.Void Microsoft.CognitiveServices.Speech.Recognizer/GetRecognizerFromConfigDelegate::.ctor(System.Object,System.IntPtr)
extern void GetRecognizerFromConfigDelegate__ctor_m1D7851683A3D41399DB7BC5B6F36E32ABEBF62FC (void);
// 0x00000037 System.IntPtr Microsoft.CognitiveServices.Speech.Recognizer/GetRecognizerFromConfigDelegate::Invoke(System.IntPtr&,Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle)
extern void GetRecognizerFromConfigDelegate_Invoke_m32859CB0B6CCD5497015D9506CA5B844EAFD185C (void);
// 0x00000038 System.IAsyncResult Microsoft.CognitiveServices.Speech.Recognizer/GetRecognizerFromConfigDelegate::BeginInvoke(System.IntPtr&,Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,System.AsyncCallback,System.Object)
extern void GetRecognizerFromConfigDelegate_BeginInvoke_mA31572A6428BE63DCD46EDEFD80C59579C524FE5 (void);
// 0x00000039 System.IntPtr Microsoft.CognitiveServices.Speech.Recognizer/GetRecognizerFromConfigDelegate::EndInvoke(System.IntPtr&,System.IAsyncResult)
extern void GetRecognizerFromConfigDelegate_EndInvoke_m6CB65E94ECFDAC2250C8C5D42B4D36370BF6E568 (void);
// 0x0000003A System.Void Microsoft.CognitiveServices.Speech.SessionEventArgs::.ctor(System.IntPtr)
extern void SessionEventArgs__ctor_mA2BA5B62E7BCD52804ACA274FE514BF94DBB9891 (void);
// 0x0000003B System.String Microsoft.CognitiveServices.Speech.SessionEventArgs::get_SessionId()
extern void SessionEventArgs_get_SessionId_m8C680FABDADC335561EA0F07CEA0F2F38A968960 (void);
// 0x0000003C System.String Microsoft.CognitiveServices.Speech.SessionEventArgs::ToString()
extern void SessionEventArgs_ToString_mD08F94960C71A7CDBDED121426F177E51DDED0E9 (void);
// 0x0000003D System.Void Microsoft.CognitiveServices.Speech.SpeechConfig::.ctor(System.IntPtr)
extern void SpeechConfig__ctor_m7E86AF6B9C5651B1FDA707458201F6A9058A46F5 (void);
// 0x0000003E Microsoft.CognitiveServices.Speech.SpeechConfig Microsoft.CognitiveServices.Speech.SpeechConfig::FromSubscription(System.String,System.String)
extern void SpeechConfig_FromSubscription_mDD9D18EE9C5A74BAD5AF00CDBCF279DA15CE4E4F (void);
// 0x0000003F System.Void Microsoft.CognitiveServices.Speech.SpeechConfig::set_SpeechRecognitionLanguage(System.String)
extern void SpeechConfig_set_SpeechRecognitionLanguage_m5D08C2F88C49CDC8F81DBECA0EA7C2D61AC2FD94 (void);
// 0x00000040 System.Void Microsoft.CognitiveServices.Speech.SpeechConfig::SetProperty(System.String,System.String)
extern void SpeechConfig_SetProperty_m73E31A4EE091A42C3719999B7CBAAED70BC14B34 (void);
// 0x00000041 System.Void Microsoft.CognitiveServices.Speech.SpeechRecognitionResult::.ctor(System.IntPtr)
extern void SpeechRecognitionResult__ctor_m55B5299672F300EDE742234DC6E0E39F51B33902 (void);
// 0x00000042 System.Void Microsoft.CognitiveServices.Speech.SpeechRecognitionEventArgs::.ctor(System.IntPtr)
extern void SpeechRecognitionEventArgs__ctor_mC3BF882EE32BECD77C0DEDD86F6203E24B864012 (void);
// 0x00000043 Microsoft.CognitiveServices.Speech.SpeechRecognitionResult Microsoft.CognitiveServices.Speech.SpeechRecognitionEventArgs::get_Result()
extern void SpeechRecognitionEventArgs_get_Result_m1389C14A09CF6A3065569F67F3E7B624EE5A1370 (void);
// 0x00000044 System.String Microsoft.CognitiveServices.Speech.SpeechRecognitionEventArgs::ToString()
extern void SpeechRecognitionEventArgs_ToString_mC9FBD260911606DE6CC8135FBC231385EE2E531A (void);
// 0x00000045 System.Void Microsoft.CognitiveServices.Speech.SpeechRecognitionCanceledEventArgs::.ctor(System.IntPtr)
extern void SpeechRecognitionCanceledEventArgs__ctor_mF09633F429C647ABCD7928A8568E3FFC4BB4854A (void);
// 0x00000046 Microsoft.CognitiveServices.Speech.CancellationReason Microsoft.CognitiveServices.Speech.SpeechRecognitionCanceledEventArgs::get_Reason()
extern void SpeechRecognitionCanceledEventArgs_get_Reason_m20DC32313A577BF1BE92F6B0E2C094114A67E0BD (void);
// 0x00000047 Microsoft.CognitiveServices.Speech.CancellationErrorCode Microsoft.CognitiveServices.Speech.SpeechRecognitionCanceledEventArgs::get_ErrorCode()
extern void SpeechRecognitionCanceledEventArgs_get_ErrorCode_mBA216DB0C26A6BC78DAB3557219137CBFF206253 (void);
// 0x00000048 System.String Microsoft.CognitiveServices.Speech.SpeechRecognitionCanceledEventArgs::ToString()
extern void SpeechRecognitionCanceledEventArgs_ToString_m30F1EF6D9EE29865814DD60BF64EFA5E4FA1031C (void);
// 0x00000049 System.Void Microsoft.CognitiveServices.Speech.SpeechRecognizer::add__Recognizing(System.EventHandler`1<Microsoft.CognitiveServices.Speech.SpeechRecognitionEventArgs>)
extern void SpeechRecognizer_add__Recognizing_m80E20BB088605524849E64F4BAB797E4659E3491 (void);
// 0x0000004A System.Void Microsoft.CognitiveServices.Speech.SpeechRecognizer::remove__Recognizing(System.EventHandler`1<Microsoft.CognitiveServices.Speech.SpeechRecognitionEventArgs>)
extern void SpeechRecognizer_remove__Recognizing_mCFA598D6668DFF893337F62828EAA61EB9F19723 (void);
// 0x0000004B System.Void Microsoft.CognitiveServices.Speech.SpeechRecognizer::add__Recognized(System.EventHandler`1<Microsoft.CognitiveServices.Speech.SpeechRecognitionEventArgs>)
extern void SpeechRecognizer_add__Recognized_m62E0B99053088A27A5BC428F2F268FB5B5A97943 (void);
// 0x0000004C System.Void Microsoft.CognitiveServices.Speech.SpeechRecognizer::remove__Recognized(System.EventHandler`1<Microsoft.CognitiveServices.Speech.SpeechRecognitionEventArgs>)
extern void SpeechRecognizer_remove__Recognized_mC29E517C3AF82C572F196C98DDDE1C41F52A1ABE (void);
// 0x0000004D System.Void Microsoft.CognitiveServices.Speech.SpeechRecognizer::add__Canceled(System.EventHandler`1<Microsoft.CognitiveServices.Speech.SpeechRecognitionCanceledEventArgs>)
extern void SpeechRecognizer_add__Canceled_m5E772F5E6AEFF1CD22296B9C9C4FC9B2A34FAC24 (void);
// 0x0000004E System.Void Microsoft.CognitiveServices.Speech.SpeechRecognizer::remove__Canceled(System.EventHandler`1<Microsoft.CognitiveServices.Speech.SpeechRecognitionCanceledEventArgs>)
extern void SpeechRecognizer_remove__Canceled_m27D7B44B127DC397623ECB5C380134E21AEA72EC (void);
// 0x0000004F System.Void Microsoft.CognitiveServices.Speech.SpeechRecognizer::add_Recognizing(System.EventHandler`1<Microsoft.CognitiveServices.Speech.SpeechRecognitionEventArgs>)
extern void SpeechRecognizer_add_Recognizing_mC9D14C5AEFBCB9075168AE43D00E3010CC82B384 (void);
// 0x00000050 System.Void Microsoft.CognitiveServices.Speech.SpeechRecognizer::remove_Recognizing(System.EventHandler`1<Microsoft.CognitiveServices.Speech.SpeechRecognitionEventArgs>)
extern void SpeechRecognizer_remove_Recognizing_mB5246A8D61D4FB0231F9E48F3ABBC25DE4813B38 (void);
// 0x00000051 System.Void Microsoft.CognitiveServices.Speech.SpeechRecognizer::add_Recognized(System.EventHandler`1<Microsoft.CognitiveServices.Speech.SpeechRecognitionEventArgs>)
extern void SpeechRecognizer_add_Recognized_m26A52181BB32A5B6B4ADDEB49ADD2F2434DD4833 (void);
// 0x00000052 System.Void Microsoft.CognitiveServices.Speech.SpeechRecognizer::remove_Recognized(System.EventHandler`1<Microsoft.CognitiveServices.Speech.SpeechRecognitionEventArgs>)
extern void SpeechRecognizer_remove_Recognized_m5146BC4962A53D0A357103D0F4CB6A4CA0E50E78 (void);
// 0x00000053 System.Void Microsoft.CognitiveServices.Speech.SpeechRecognizer::add_Canceled(System.EventHandler`1<Microsoft.CognitiveServices.Speech.SpeechRecognitionCanceledEventArgs>)
extern void SpeechRecognizer_add_Canceled_m3134FC776D0C6C9C476C55409754521DECB4A7B7 (void);
// 0x00000054 System.Void Microsoft.CognitiveServices.Speech.SpeechRecognizer::remove_Canceled(System.EventHandler`1<Microsoft.CognitiveServices.Speech.SpeechRecognitionCanceledEventArgs>)
extern void SpeechRecognizer_remove_Canceled_mE77B85775D47546C0653013364D3A47545D17085 (void);
// 0x00000055 System.Void Microsoft.CognitiveServices.Speech.SpeechRecognizer::.ctor(Microsoft.CognitiveServices.Speech.SpeechConfig)
extern void SpeechRecognizer__ctor_m81FDB924D464DAB21019D0EBDE866F493EB39F75 (void);
// 0x00000056 System.Void Microsoft.CognitiveServices.Speech.SpeechRecognizer::.ctor(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle)
extern void SpeechRecognizer__ctor_m030946A0C9CCF1B50A039FA14805EB86D9937720 (void);
// 0x00000057 Microsoft.CognitiveServices.Speech.PropertyCollection Microsoft.CognitiveServices.Speech.SpeechRecognizer::get_Properties()
extern void SpeechRecognizer_get_Properties_mBA0F85A8988F7921955F690761443143B7563EB3 (void);
// 0x00000058 System.Void Microsoft.CognitiveServices.Speech.SpeechRecognizer::set_Properties(Microsoft.CognitiveServices.Speech.PropertyCollection)
extern void SpeechRecognizer_set_Properties_mF2118E137B1726D1BE3D31AF54617D3F6C79035A (void);
// 0x00000059 System.Threading.Tasks.Task Microsoft.CognitiveServices.Speech.SpeechRecognizer::StartContinuousRecognitionAsync()
extern void SpeechRecognizer_StartContinuousRecognitionAsync_m615484E4AD977DD1C55C42B0A2D40C1DE021408C (void);
// 0x0000005A System.Threading.Tasks.Task Microsoft.CognitiveServices.Speech.SpeechRecognizer::StopContinuousRecognitionAsync()
extern void SpeechRecognizer_StopContinuousRecognitionAsync_m7DCC497073169C3BBE9384205A4294E6BDB1B203 (void);
// 0x0000005B System.Void Microsoft.CognitiveServices.Speech.SpeechRecognizer::Finalize()
extern void SpeechRecognizer_Finalize_m30391E2CE943D036EC33086BC06EC7514182B30B (void);
// 0x0000005C System.Void Microsoft.CognitiveServices.Speech.SpeechRecognizer::Dispose(System.Boolean)
extern void SpeechRecognizer_Dispose_mE42EDC7833BEA6625BFDD35CA197F8A4732C4B19 (void);
// 0x0000005D System.Void Microsoft.CognitiveServices.Speech.SpeechRecognizer::FireEvent_Recognizing(System.IntPtr,System.IntPtr,System.IntPtr)
extern void SpeechRecognizer_FireEvent_Recognizing_m3BAA0548428B005FA57B77CB4B09D157F5D34E0F (void);
// 0x0000005E System.Void Microsoft.CognitiveServices.Speech.SpeechRecognizer::FireEvent_Recognized(System.IntPtr,System.IntPtr,System.IntPtr)
extern void SpeechRecognizer_FireEvent_Recognized_m67E62803BF374C34B61CFC991DA73FE25AF287BF (void);
// 0x0000005F System.Void Microsoft.CognitiveServices.Speech.SpeechRecognizer::FireEvent_Canceled(System.IntPtr,System.IntPtr,System.IntPtr)
extern void SpeechRecognizer_FireEvent_Canceled_m4DDE18DFD654DACBDE97F182D735A624B5E601F2 (void);
// 0x00000060 System.Void Microsoft.CognitiveServices.Speech.SpeechRecognizer::<StartContinuousRecognitionAsync>b__48_0()
extern void SpeechRecognizer_U3CStartContinuousRecognitionAsyncU3Eb__48_0_m55F59D499889BA7B44BF8D1F3745BFF5B5AF0F82 (void);
// 0x00000061 System.Void Microsoft.CognitiveServices.Speech.SpeechRecognizer::<StopContinuousRecognitionAsync>b__49_0()
extern void SpeechRecognizer_U3CStopContinuousRecognitionAsyncU3Eb__49_0_m6F826EAC9DEF582418CBAD8D1425FBB0F1F35F09 (void);
// 0x00000062 System.Void Microsoft.CognitiveServices.Speech.SpeechTranslationConfig::.ctor(System.IntPtr)
extern void SpeechTranslationConfig__ctor_m69FF967879A65C258D38700C4B5BC4B7458C309B (void);
// 0x00000063 Microsoft.CognitiveServices.Speech.SpeechTranslationConfig Microsoft.CognitiveServices.Speech.SpeechTranslationConfig::FromSubscription(System.String,System.String)
extern void SpeechTranslationConfig_FromSubscription_m710089D3B1BA31D2C22234A84DEE17F55A8C134E (void);
// 0x00000064 System.Void Microsoft.CognitiveServices.Speech.SpeechTranslationConfig::AddTargetLanguage(System.String)
extern void SpeechTranslationConfig_AddTargetLanguage_mFA86AF17503F3269E1E0298702DAAFC520FE4D6A (void);
// 0x00000065 System.Void Microsoft.CognitiveServices.Speech.Translation.TranslationRecognitionResult::.ctor(System.IntPtr)
extern void TranslationRecognitionResult__ctor_m7DE44365A4CDD91182EAFBB15C5A09851BF9518A (void);
// 0x00000066 System.Collections.Generic.IReadOnlyDictionary`2<System.String,System.String> Microsoft.CognitiveServices.Speech.Translation.TranslationRecognitionResult::get_Translations()
extern void TranslationRecognitionResult_get_Translations_mFE7B704863AE1DFA972D7EBB13671D4D907ABE53 (void);
// 0x00000067 System.String Microsoft.CognitiveServices.Speech.Translation.TranslationRecognitionResult::ToString()
extern void TranslationRecognitionResult_ToString_m1546005CA76029FB43629ADBE5EE72F65B02B824 (void);
// 0x00000068 System.Void Microsoft.CognitiveServices.Speech.Translation.TranslationRecognitionResult::GetTranslationTexts()
extern void TranslationRecognitionResult_GetTranslationTexts_m8089C12281F2780B76AE5F52A7E56E722AE4D314 (void);
// 0x00000069 System.Void Microsoft.CognitiveServices.Speech.Translation.TranslationRecognizer::add__Recognizing(System.EventHandler`1<Microsoft.CognitiveServices.Speech.Translation.TranslationRecognitionEventArgs>)
extern void TranslationRecognizer_add__Recognizing_mAF65D8FC77E7A5C0A41FC9D0A26DEE67272F1254 (void);
// 0x0000006A System.Void Microsoft.CognitiveServices.Speech.Translation.TranslationRecognizer::remove__Recognizing(System.EventHandler`1<Microsoft.CognitiveServices.Speech.Translation.TranslationRecognitionEventArgs>)
extern void TranslationRecognizer_remove__Recognizing_m4D0BFE4BE97DF87F8DCC5E7707DE43C464AFBF1E (void);
// 0x0000006B System.Void Microsoft.CognitiveServices.Speech.Translation.TranslationRecognizer::add__Recognized(System.EventHandler`1<Microsoft.CognitiveServices.Speech.Translation.TranslationRecognitionEventArgs>)
extern void TranslationRecognizer_add__Recognized_m88F0D2B211CB1FB63A4488006301EA054F839A1A (void);
// 0x0000006C System.Void Microsoft.CognitiveServices.Speech.Translation.TranslationRecognizer::remove__Recognized(System.EventHandler`1<Microsoft.CognitiveServices.Speech.Translation.TranslationRecognitionEventArgs>)
extern void TranslationRecognizer_remove__Recognized_m90BC367941B41038250A67CBD727D2C25BFB6A6C (void);
// 0x0000006D System.Void Microsoft.CognitiveServices.Speech.Translation.TranslationRecognizer::add__Canceled(System.EventHandler`1<Microsoft.CognitiveServices.Speech.Translation.TranslationRecognitionCanceledEventArgs>)
extern void TranslationRecognizer_add__Canceled_m85B57C3A1EEFCED2ECC7DFE669DB36D185801416 (void);
// 0x0000006E System.Void Microsoft.CognitiveServices.Speech.Translation.TranslationRecognizer::remove__Canceled(System.EventHandler`1<Microsoft.CognitiveServices.Speech.Translation.TranslationRecognitionCanceledEventArgs>)
extern void TranslationRecognizer_remove__Canceled_m9C623054339BE0D96462B81AD3D3668949EA0AD9 (void);
// 0x0000006F System.Void Microsoft.CognitiveServices.Speech.Translation.TranslationRecognizer::add_Recognizing(System.EventHandler`1<Microsoft.CognitiveServices.Speech.Translation.TranslationRecognitionEventArgs>)
extern void TranslationRecognizer_add_Recognizing_m03063F2CFEC60E412DE797A3988F531B54CBC2AA (void);
// 0x00000070 System.Void Microsoft.CognitiveServices.Speech.Translation.TranslationRecognizer::remove_Recognizing(System.EventHandler`1<Microsoft.CognitiveServices.Speech.Translation.TranslationRecognitionEventArgs>)
extern void TranslationRecognizer_remove_Recognizing_mC0B457860641D9D1E8AA147AD9A14E84365F05FC (void);
// 0x00000071 System.Void Microsoft.CognitiveServices.Speech.Translation.TranslationRecognizer::add_Recognized(System.EventHandler`1<Microsoft.CognitiveServices.Speech.Translation.TranslationRecognitionEventArgs>)
extern void TranslationRecognizer_add_Recognized_m6213D96F154E22B291378B2E1F4A9BB18BC6F164 (void);
// 0x00000072 System.Void Microsoft.CognitiveServices.Speech.Translation.TranslationRecognizer::remove_Recognized(System.EventHandler`1<Microsoft.CognitiveServices.Speech.Translation.TranslationRecognitionEventArgs>)
extern void TranslationRecognizer_remove_Recognized_m95AACDD387B4FBCDBA8511AF2E761C435E45CA6E (void);
// 0x00000073 System.Void Microsoft.CognitiveServices.Speech.Translation.TranslationRecognizer::add_Canceled(System.EventHandler`1<Microsoft.CognitiveServices.Speech.Translation.TranslationRecognitionCanceledEventArgs>)
extern void TranslationRecognizer_add_Canceled_mB51A1268E44A3D8735717C5ABD37929026684406 (void);
// 0x00000074 System.Void Microsoft.CognitiveServices.Speech.Translation.TranslationRecognizer::remove_Canceled(System.EventHandler`1<Microsoft.CognitiveServices.Speech.Translation.TranslationRecognitionCanceledEventArgs>)
extern void TranslationRecognizer_remove_Canceled_m11C30AAF9F33E2B107738B83928D604697FB1A7A (void);
// 0x00000075 System.Void Microsoft.CognitiveServices.Speech.Translation.TranslationRecognizer::.ctor(Microsoft.CognitiveServices.Speech.SpeechTranslationConfig)
extern void TranslationRecognizer__ctor_m76B66A70B75C37221AA3F17855583A9DECE01B60 (void);
// 0x00000076 System.Void Microsoft.CognitiveServices.Speech.Translation.TranslationRecognizer::.ctor(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle)
extern void TranslationRecognizer__ctor_m82F3D2B19A6FF788428C76193132BA4E8B8F3D8D (void);
// 0x00000077 Microsoft.CognitiveServices.Speech.PropertyCollection Microsoft.CognitiveServices.Speech.Translation.TranslationRecognizer::get_Properties()
extern void TranslationRecognizer_get_Properties_m05C6F57DF448914BF3B79B835985CAB57E05A845 (void);
// 0x00000078 System.Void Microsoft.CognitiveServices.Speech.Translation.TranslationRecognizer::set_Properties(Microsoft.CognitiveServices.Speech.PropertyCollection)
extern void TranslationRecognizer_set_Properties_mA93EEDAC48C7C7A2B3DC40A1B24E27DC0AF096D5 (void);
// 0x00000079 System.Threading.Tasks.Task Microsoft.CognitiveServices.Speech.Translation.TranslationRecognizer::StartContinuousRecognitionAsync()
extern void TranslationRecognizer_StartContinuousRecognitionAsync_m75216A6022CED919F51387B819FE870F8E36829F (void);
// 0x0000007A System.Threading.Tasks.Task Microsoft.CognitiveServices.Speech.Translation.TranslationRecognizer::StopContinuousRecognitionAsync()
extern void TranslationRecognizer_StopContinuousRecognitionAsync_m6F9636D3EC468F7CFC48094AD51173D5FF68C79E (void);
// 0x0000007B System.Void Microsoft.CognitiveServices.Speech.Translation.TranslationRecognizer::Finalize()
extern void TranslationRecognizer_Finalize_mF9ED487B22B35A0AA1D35799DFBB6919278C8B9E (void);
// 0x0000007C System.Void Microsoft.CognitiveServices.Speech.Translation.TranslationRecognizer::Dispose(System.Boolean)
extern void TranslationRecognizer_Dispose_mFB91400781FF245042A7B4852A721E149A7ECD45 (void);
// 0x0000007D System.Void Microsoft.CognitiveServices.Speech.Translation.TranslationRecognizer::FireEvent_Recognizing(System.IntPtr,System.IntPtr,System.IntPtr)
extern void TranslationRecognizer_FireEvent_Recognizing_mB199DD38F12DAD9246DD6B677A2E74490B49A52F (void);
// 0x0000007E System.Void Microsoft.CognitiveServices.Speech.Translation.TranslationRecognizer::FireEvent_Recognized(System.IntPtr,System.IntPtr,System.IntPtr)
extern void TranslationRecognizer_FireEvent_Recognized_mDDE062FC556E989A6D9524FEDD5CB998F3B7283A (void);
// 0x0000007F System.Void Microsoft.CognitiveServices.Speech.Translation.TranslationRecognizer::FireEvent_Canceled(System.IntPtr,System.IntPtr,System.IntPtr)
extern void TranslationRecognizer_FireEvent_Canceled_m07E5C0FDE0F3C15AE7DA029B15FAB7D3B20DEBA2 (void);
// 0x00000080 System.Void Microsoft.CognitiveServices.Speech.Translation.TranslationRecognizer::FireEvent_SynthesisResult(System.IntPtr,System.IntPtr,System.IntPtr)
extern void TranslationRecognizer_FireEvent_SynthesisResult_mCE224C9BBD6BD727940FA60C9E032A92A4B3CB80 (void);
// 0x00000081 System.Void Microsoft.CognitiveServices.Speech.Translation.TranslationRecognizer::<StartContinuousRecognitionAsync>b__45_0()
extern void TranslationRecognizer_U3CStartContinuousRecognitionAsyncU3Eb__45_0_mE07DE7033EAEA5EFA7E10E3C0EC5AAEDC9EE715A (void);
// 0x00000082 System.Void Microsoft.CognitiveServices.Speech.Translation.TranslationRecognizer::<StopContinuousRecognitionAsync>b__46_0()
extern void TranslationRecognizer_U3CStopContinuousRecognitionAsyncU3Eb__46_0_m28CECB898F8C69BEB9C3F8724DC2C0729EC64A8D (void);
// 0x00000083 System.Void Microsoft.CognitiveServices.Speech.Translation.TranslationSynthesisResult::.ctor(System.IntPtr)
extern void TranslationSynthesisResult__ctor_mE3EAA81170394CEC3F96EC51CD627DCCAB73BFE9 (void);
// 0x00000084 Microsoft.CognitiveServices.Speech.ResultReason Microsoft.CognitiveServices.Speech.Translation.TranslationSynthesisResult::get_Reason()
extern void TranslationSynthesisResult_get_Reason_mFDC37352957A9BB0B79CE705DB24CAC5AEC39AF7 (void);
// 0x00000085 System.String Microsoft.CognitiveServices.Speech.Translation.TranslationSynthesisResult::ToString()
extern void TranslationSynthesisResult_ToString_mA1C1AF2002DF897B5BDBEAEFD3A3D96DA7AC8949 (void);
// 0x00000086 System.Void Microsoft.CognitiveServices.Speech.Translation.TranslationSynthesisResult::GetAudioData(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle)
extern void TranslationSynthesisResult_GetAudioData_m24E5A8CD2E73B2361238C220CE64BCB588611CC4 (void);
// 0x00000087 System.Void Microsoft.CognitiveServices.Speech.Translation.TranslationSynthesisEventArgs::.ctor(System.IntPtr)
extern void TranslationSynthesisEventArgs__ctor_m4074DC4145DFBC5CEA391A5F19A4F2923D620323 (void);
// 0x00000088 Microsoft.CognitiveServices.Speech.Translation.TranslationSynthesisResult Microsoft.CognitiveServices.Speech.Translation.TranslationSynthesisEventArgs::get_Result()
extern void TranslationSynthesisEventArgs_get_Result_mDB3D5F4D8AED490B08C9AAA14947499BEC7AFBD9 (void);
// 0x00000089 System.String Microsoft.CognitiveServices.Speech.Translation.TranslationSynthesisEventArgs::ToString()
extern void TranslationSynthesisEventArgs_ToString_m23837A1767AAA522620C5B996CD6FA86D1053442 (void);
// 0x0000008A System.Void Microsoft.CognitiveServices.Speech.Translation.TranslationRecognitionEventArgs::.ctor(System.IntPtr)
extern void TranslationRecognitionEventArgs__ctor_mE538F958D191E2A0ABAA76F0B10516C08846DD52 (void);
// 0x0000008B Microsoft.CognitiveServices.Speech.Translation.TranslationRecognitionResult Microsoft.CognitiveServices.Speech.Translation.TranslationRecognitionEventArgs::get_Result()
extern void TranslationRecognitionEventArgs_get_Result_mCD02FCF6C3C49D1B6288D1BDA24F06BEF2322F41 (void);
// 0x0000008C System.String Microsoft.CognitiveServices.Speech.Translation.TranslationRecognitionEventArgs::ToString()
extern void TranslationRecognitionEventArgs_ToString_m92738DB6325D6B60A2CED60DB7C0338255A13AC4 (void);
// 0x0000008D System.Void Microsoft.CognitiveServices.Speech.Translation.TranslationRecognitionCanceledEventArgs::.ctor(System.IntPtr)
extern void TranslationRecognitionCanceledEventArgs__ctor_m232ECE91C247E37F521EB16C1C0D6F83242D712E (void);
// 0x0000008E Microsoft.CognitiveServices.Speech.CancellationReason Microsoft.CognitiveServices.Speech.Translation.TranslationRecognitionCanceledEventArgs::get_Reason()
extern void TranslationRecognitionCanceledEventArgs_get_Reason_m94F2A97E7FD6DD5B61DCDC9B305CD41D9432C318 (void);
// 0x0000008F Microsoft.CognitiveServices.Speech.CancellationErrorCode Microsoft.CognitiveServices.Speech.Translation.TranslationRecognitionCanceledEventArgs::get_ErrorCode()
extern void TranslationRecognitionCanceledEventArgs_get_ErrorCode_mDC791691BE24A75B18707DCAE11FDDB9A0CC2559 (void);
// 0x00000090 System.String Microsoft.CognitiveServices.Speech.Translation.TranslationRecognitionCanceledEventArgs::ToString()
extern void TranslationRecognitionCanceledEventArgs_ToString_mBA3666F32F9CF255E740681B9226084264D3F7A9 (void);
// 0x00000091 System.Object[] Microsoft.CognitiveServices.Speech.Internal.Diagnostics::Args(System.Object[])
extern void Diagnostics_Args_m37BBD997F110D90D939A75BC082C8A09EBF5C20C (void);
// 0x00000092 System.Void Microsoft.CognitiveServices.Speech.Internal.Diagnostics::SPX_TRACE_VERBOSE(System.String,System.Int32,System.String,System.String)
extern void Diagnostics_SPX_TRACE_VERBOSE_mC8FE10F8F57265211C7A31D049321F461DF90400 (void);
// 0x00000093 System.Void Microsoft.CognitiveServices.Speech.Internal.Diagnostics::SPX_TRACE_VERBOSE(System.String,System.Object[],System.Int32,System.String,System.String)
extern void Diagnostics_SPX_TRACE_VERBOSE_m30E8360DBDD81703DC7247D7BE842D5F32A63E0A (void);
// 0x00000094 System.IntPtr Microsoft.CognitiveServices.Speech.Internal.CancellationDetails::result_get_reason_canceled(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,Microsoft.CognitiveServices.Speech.CancellationReason&)
extern void CancellationDetails_result_get_reason_canceled_m9DC6EAB40632EE1093689D38550E39CEBF2B27AD (void);
// 0x00000095 System.IntPtr Microsoft.CognitiveServices.Speech.Internal.CancellationDetails::result_get_canceled_error_code(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,Microsoft.CognitiveServices.Speech.CancellationErrorCode&)
extern void CancellationDetails_result_get_canceled_error_code_m426BD4822127A22E7176EBDB01020D9C27900CD2 (void);
// 0x00000096 System.IntPtr Microsoft.CognitiveServices.Speech.Internal.SpeechConfig::speech_config_from_subscription(System.IntPtr&,System.String,System.String)
extern void SpeechConfig_speech_config_from_subscription_m53E6A53D4F7099736BF503BC3C76EDC66B058153 (void);
// 0x00000097 System.IntPtr Microsoft.CognitiveServices.Speech.Internal.SpeechConfig::speech_config_release(System.IntPtr)
extern void SpeechConfig_speech_config_release_m211A119E8B4829F52735D15C1CE30B4E80EA6A08 (void);
// 0x00000098 System.IntPtr Microsoft.CognitiveServices.Speech.Internal.SpeechConfig::speech_config_get_property_bag(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,System.IntPtr&)
extern void SpeechConfig_speech_config_get_property_bag_m14C01802DDD84CBB3508ABD4B604E6A5DADE2F0E (void);
// 0x00000099 System.IntPtr Microsoft.CognitiveServices.Speech.Internal.SpeechTranslationConfig::speech_translation_config_from_subscription(System.IntPtr&,System.String,System.String)
extern void SpeechTranslationConfig_speech_translation_config_from_subscription_mFE0B7FFDFDA728CA2144AACCD1AA1069A9612C2B (void);
// 0x0000009A System.IntPtr Microsoft.CognitiveServices.Speech.Internal.SpeechTranslationConfig::speech_translation_config_add_target_language(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,System.String)
extern void SpeechTranslationConfig_speech_translation_config_add_target_language_mC6E21CF2A9D4149054774D48C7BE7DA84FBDA0BE (void);
// 0x0000009B System.Void Microsoft.CognitiveServices.Speech.Internal.DiagnosticsInterop::diagnostics_log_trace_string(System.Int32,System.String,System.String,System.Int32,System.String)
extern void DiagnosticsInterop_diagnostics_log_trace_string_mE2604DBBEC420974FEAACBA1C9D62FFF408A60E5 (void);
// 0x0000009C System.String Microsoft.CognitiveServices.Speech.Internal.SpxError::GetMessage(System.IntPtr)
extern void SpxError_GetMessage_mAE69502CC76A217D2802B96AE46446F55159F08C (void);
// 0x0000009D System.Int32 Microsoft.CognitiveServices.Speech.Internal.SpxError::GetErrorCode(System.IntPtr)
extern void SpxError_GetErrorCode_mA5D665FA8B9709452893CBDF4FF2D324C1F113B4 (void);
// 0x0000009E System.Void Microsoft.CognitiveServices.Speech.Internal.SpxError::Release(System.IntPtr)
extern void SpxError_Release_m8A4610A24E3E7CC631AB6B937A23D75D690368CA (void);
// 0x0000009F System.Boolean Microsoft.CognitiveServices.Speech.Internal.SpxError::ReleaseNoThrow(System.IntPtr)
extern void SpxError_ReleaseNoThrow_m56AF1911B28350AF579AA6A562FAC4DE2D9E1C86 (void);
// 0x000000A0 System.IntPtr Microsoft.CognitiveServices.Speech.Internal.SpxError::error_get_message(System.IntPtr)
extern void SpxError_error_get_message_mB89C50717DBBE7DD5748A3A4A3C1F94A2E73EAD3 (void);
// 0x000000A1 System.IntPtr Microsoft.CognitiveServices.Speech.Internal.SpxError::error_get_error_code(System.IntPtr)
extern void SpxError_error_get_error_code_m30AEFABD1655FE32BAC77F0EB19AA74D6F24A10B (void);
// 0x000000A2 System.IntPtr Microsoft.CognitiveServices.Speech.Internal.SpxError::error_release(System.IntPtr)
extern void SpxError_error_release_mCA135AF50E067E9909E8FF41CEBEBC311DAA8E73 (void);
// 0x000000A3 System.Void Microsoft.CognitiveServices.Speech.Internal.SpxError::.cctor()
extern void SpxError__cctor_mAFC3BB636CCA7D4D4E6B8D21876B84FDB74AD8FE (void);
// 0x000000A4 System.IntPtr Microsoft.CognitiveServices.Speech.Internal.EventArgs::recognizer_event_handle_release(System.IntPtr)
extern void EventArgs_recognizer_event_handle_release_m3D3A3B06F35570BE6EE52F14267BC94EFDCD4F7B (void);
// 0x000000A5 System.Void Microsoft.CognitiveServices.Speech.Internal.MonoPInvokeCallbackAttribute::.ctor(System.Type)
extern void MonoPInvokeCallbackAttribute__ctor_mC2B5B7C3A898F2DF9460D323CDC360B796BEC7AA (void);
// 0x000000A6 System.Void Microsoft.CognitiveServices.Speech.Internal.HandleRelease::.ctor(System.Object,System.IntPtr)
extern void HandleRelease__ctor_m033F205B7379518DCCF337635EAC5AAC9B2A42E9 (void);
// 0x000000A7 System.IntPtr Microsoft.CognitiveServices.Speech.Internal.HandleRelease::Invoke(System.IntPtr)
extern void HandleRelease_Invoke_m9C512BECA3AC902349BAB0C2394147051701C473 (void);
// 0x000000A8 System.IAsyncResult Microsoft.CognitiveServices.Speech.Internal.HandleRelease::BeginInvoke(System.IntPtr,System.AsyncCallback,System.Object)
extern void HandleRelease_BeginInvoke_m5D734617039DD379F6CC83437F7D3CF2E7F56270 (void);
// 0x000000A9 System.IntPtr Microsoft.CognitiveServices.Speech.Internal.HandleRelease::EndInvoke(System.IAsyncResult)
extern void HandleRelease_EndInvoke_m0B26DA7E4B2A0EF61297A32ACFBB4C7F149B0C1F (void);
// 0x000000AA System.Void Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle::.ctor(System.IntPtr,Microsoft.CognitiveServices.Speech.Internal.HandleRelease)
extern void InteropSafeHandle__ctor_mEEBFD93E8F421872BAE76137A07486B9BBD3D156 (void);
// 0x000000AB System.Boolean Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle::get_IsInvalid()
extern void InteropSafeHandle_get_IsInvalid_m9FC49868EDA0F0630E1BE420E75AB00192916B87 (void);
// 0x000000AC System.Boolean Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle::ReleaseHandle()
extern void InteropSafeHandle_ReleaseHandle_m7F33298C481FA9CA13417524742FB52F32C605F0 (void);
// 0x000000AD System.Void Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle::Dispose(System.Boolean)
extern void InteropSafeHandle_Dispose_m08B3D27C50197162A1C138BA967B4528977958CA (void);
// 0x000000AE T Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle::GetObjectFromWeakHandle(System.IntPtr)
// 0x000000AF System.String Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle::ToString()
extern void InteropSafeHandle_ToString_mF461A4025D4B940195524A30750A8E25FA75853B (void);
// 0x000000B0 System.Void Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle::Finalize()
extern void InteropSafeHandle_Finalize_m6628E8CADEC9898829BC194F6236B9D266F6007C (void);
// 0x000000B1 System.String Microsoft.CognitiveServices.Speech.Internal.SpxFactory::GetDataFromHandleUsingDelegate(Microsoft.CognitiveServices.Speech.Internal.SpxFactory/GetResultDelegate,Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,System.Int32)
extern void SpxFactory_GetDataFromHandleUsingDelegate_mE498329CDC2B03C0A628C2EDE8395F3F87FC605C (void);
// 0x000000B2 System.IntPtr Microsoft.CognitiveServices.Speech.Internal.SpxFactory::recognizer_create_speech_recognizer_from_config(System.IntPtr&,Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle)
extern void SpxFactory_recognizer_create_speech_recognizer_from_config_mEFA185528C9EF0F4C5883329D957F95566B57E8B (void);
// 0x000000B3 System.IntPtr Microsoft.CognitiveServices.Speech.Internal.SpxFactory::recognizer_create_translation_recognizer_from_config(System.IntPtr&,Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle)
extern void SpxFactory_recognizer_create_translation_recognizer_from_config_mBAA1FE887AC7E89AE3658F30F2307B65A5153BA6 (void);
// 0x000000B4 System.Void Microsoft.CognitiveServices.Speech.Internal.SpxFactory/GetResultDelegate::.ctor(System.Object,System.IntPtr)
extern void GetResultDelegate__ctor_mD9674EEDEC07A1965D10AD6C172D61ADA8ABBAF0 (void);
// 0x000000B5 System.IntPtr Microsoft.CognitiveServices.Speech.Internal.SpxFactory/GetResultDelegate::Invoke(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,System.IntPtr,System.UInt32)
extern void GetResultDelegate_Invoke_m266129DD98B4319DC07D86FC58634BD716A09913 (void);
// 0x000000B6 System.IAsyncResult Microsoft.CognitiveServices.Speech.Internal.SpxFactory/GetResultDelegate::BeginInvoke(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,System.IntPtr,System.UInt32,System.AsyncCallback,System.Object)
extern void GetResultDelegate_BeginInvoke_mDDC49711463383C50240777E3D9FE0EF72B766AD (void);
// 0x000000B7 System.IntPtr Microsoft.CognitiveServices.Speech.Internal.SpxFactory/GetResultDelegate::EndInvoke(System.IAsyncResult)
extern void GetResultDelegate_EndInvoke_mD9E3A1886725A45CFEF6B091DCA7A6C112B9607F (void);
// 0x000000B8 System.IntPtr Microsoft.CognitiveServices.Speech.Internal.PropertyCollection::property_bag_set_string(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,System.Int32,System.IntPtr,System.IntPtr)
extern void PropertyCollection_property_bag_set_string_m9F04396801AECB2614444B52E37ECE43859EDCE3 (void);
// 0x000000B9 System.IntPtr Microsoft.CognitiveServices.Speech.Internal.PropertyCollection::property_bag_get_string(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,System.Int32,System.IntPtr,System.IntPtr)
extern void PropertyCollection_property_bag_get_string_mD72C7BC68AA146B7B28E6D3BA2A34ACA1F3FB0A1 (void);
// 0x000000BA System.IntPtr Microsoft.CognitiveServices.Speech.Internal.PropertyCollection::property_bag_free_string(System.IntPtr)
extern void PropertyCollection_property_bag_free_string_mEFBE870DE678372D8DA91718476766F7761B5A4B (void);
// 0x000000BB System.IntPtr Microsoft.CognitiveServices.Speech.Internal.PropertyCollection::property_bag_release(System.IntPtr)
extern void PropertyCollection_property_bag_release_mAC9096678F4D9B7281A5EECCA5FCD7B794275755 (void);
// 0x000000BC System.IntPtr Microsoft.CognitiveServices.Speech.Internal.RecognitionResult::result_get_reason(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,Microsoft.CognitiveServices.Speech.ResultReason&)
extern void RecognitionResult_result_get_reason_m56E4A15B2D6F95EFF1E69838F4A0F9B6CAF4CD8A (void);
// 0x000000BD System.IntPtr Microsoft.CognitiveServices.Speech.Internal.RecognitionResult::result_get_result_id(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,System.IntPtr,System.UInt32)
extern void RecognitionResult_result_get_result_id_m996CCE6FB266EB35D1833A57DBF34628883A1D51 (void);
// 0x000000BE System.IntPtr Microsoft.CognitiveServices.Speech.Internal.RecognitionResult::result_get_text(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,System.IntPtr,System.UInt32)
extern void RecognitionResult_result_get_text_m84677F08CEF6433DA77AECACD5C5393B7ED1FC48 (void);
// 0x000000BF System.IntPtr Microsoft.CognitiveServices.Speech.Internal.RecognitionResult::result_get_property_bag(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,System.IntPtr&)
extern void RecognitionResult_result_get_property_bag_m75C375828C1506CA3A7F3B6DDB9C086ADD04A91A (void);
// 0x000000C0 System.Boolean Microsoft.CognitiveServices.Speech.Internal.RecognitionResult::recognizer_result_handle_is_valid(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle)
extern void RecognitionResult_recognizer_result_handle_is_valid_mF7E78F30BD9373F5F3F4AEC1827F014FEEDDF062 (void);
// 0x000000C1 System.IntPtr Microsoft.CognitiveServices.Speech.Internal.RecognitionResult::recognizer_result_handle_release(System.IntPtr)
extern void RecognitionResult_recognizer_result_handle_release_m2390D80CFD66650438F1B05545EB439A5CAD56EA (void);
// 0x000000C2 System.IntPtr Microsoft.CognitiveServices.Speech.Internal.RecognitionResult::translation_text_result_get_translation_text_buffer_header(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,System.IntPtr,System.Int32&)
extern void RecognitionResult_translation_text_result_get_translation_text_buffer_header_m836D5B5E0B1882639EF9E75125664188D7484BCF (void);
// 0x000000C3 System.IntPtr Microsoft.CognitiveServices.Speech.Internal.RecognitionResult::translation_synthesis_result_get_audio_data(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,System.IntPtr,System.Int32&)
extern void RecognitionResult_translation_synthesis_result_get_audio_data_mFF0760AF3D2F8409841252FD33179D53E25CF4B9 (void);
// 0x000000C4 System.Void Microsoft.CognitiveServices.Speech.Internal.CallbackFunctionDelegate::.ctor(System.Object,System.IntPtr)
extern void CallbackFunctionDelegate__ctor_m34250E2B4EB599FB96576EC76B41BA44F32482AB (void);
// 0x000000C5 System.Void Microsoft.CognitiveServices.Speech.Internal.CallbackFunctionDelegate::Invoke(System.IntPtr,System.IntPtr,System.IntPtr)
extern void CallbackFunctionDelegate_Invoke_m501C49800C8A0C75DA6BF2EEBC5D59DD90FEAB7F (void);
// 0x000000C6 System.IAsyncResult Microsoft.CognitiveServices.Speech.Internal.CallbackFunctionDelegate::BeginInvoke(System.IntPtr,System.IntPtr,System.IntPtr,System.AsyncCallback,System.Object)
extern void CallbackFunctionDelegate_BeginInvoke_m9C1D9AA45ADF55BC28D184D33DE3CB7E7C0B8879 (void);
// 0x000000C7 System.Void Microsoft.CognitiveServices.Speech.Internal.CallbackFunctionDelegate::EndInvoke(System.IAsyncResult)
extern void CallbackFunctionDelegate_EndInvoke_mC821E2106A14A66EB3FB5E320F0DF81841BA458E (void);
// 0x000000C8 System.IntPtr Microsoft.CognitiveServices.Speech.Internal.Recognizer::recognizer_get_property_bag(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,System.IntPtr&)
extern void Recognizer_recognizer_get_property_bag_m52747647E843FD151DC9CFC39C0B3A32D58979F1 (void);
// 0x000000C9 System.IntPtr Microsoft.CognitiveServices.Speech.Internal.Recognizer::recognizer_handle_release(System.IntPtr)
extern void Recognizer_recognizer_handle_release_m4F85CBC6A9242C997CEC5704FBA5D5D8AD486772 (void);
// 0x000000CA System.IntPtr Microsoft.CognitiveServices.Speech.Internal.Recognizer::recognizer_start_continuous_recognition_async(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,System.IntPtr&)
extern void Recognizer_recognizer_start_continuous_recognition_async_mE0D8A324AA83CC7914CF3A677770B702A0225CF7 (void);
// 0x000000CB System.IntPtr Microsoft.CognitiveServices.Speech.Internal.Recognizer::recognizer_start_continuous_recognition_async_wait_for(System.IntPtr,System.UInt32)
extern void Recognizer_recognizer_start_continuous_recognition_async_wait_for_m67B22C498B2E1C76189FF0CEBB430C8ED7D52AD9 (void);
// 0x000000CC System.IntPtr Microsoft.CognitiveServices.Speech.Internal.Recognizer::recognizer_stop_continuous_recognition_async(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,System.IntPtr&)
extern void Recognizer_recognizer_stop_continuous_recognition_async_m90B10E6C5A9EF8E54D22793254DE64E412B4FC80 (void);
// 0x000000CD System.IntPtr Microsoft.CognitiveServices.Speech.Internal.Recognizer::recognizer_stop_continuous_recognition_async_wait_for(System.IntPtr,System.UInt32)
extern void Recognizer_recognizer_stop_continuous_recognition_async_wait_for_m2A6AE149C72A46FEE1C9488C8F984079C618B73F (void);
// 0x000000CE System.IntPtr Microsoft.CognitiveServices.Speech.Internal.Recognizer::recognizer_async_handle_release(System.IntPtr)
extern void Recognizer_recognizer_async_handle_release_mB7E4B1D8EEA5B0FE097A95562D5E09B2F7740CBA (void);
// 0x000000CF System.IntPtr Microsoft.CognitiveServices.Speech.Internal.Recognizer::recognizer_recognition_event_get_offset(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,System.UInt64&)
extern void Recognizer_recognizer_recognition_event_get_offset_mCF53A1E91E882611247A461133DA78BE91F55CE8 (void);
// 0x000000D0 System.IntPtr Microsoft.CognitiveServices.Speech.Internal.Recognizer::recognizer_session_event_get_session_id(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,System.IntPtr,System.UInt32)
extern void Recognizer_recognizer_session_event_get_session_id_mEB659429C629D3E9E271BA22B3FD631BD54565B0 (void);
// 0x000000D1 System.IntPtr Microsoft.CognitiveServices.Speech.Internal.Recognizer::recognizer_recognition_event_get_result(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,System.IntPtr&)
extern void Recognizer_recognizer_recognition_event_get_result_m95C54811DD6BF44F99C1BF4AFA3506EB119BFBA0 (void);
// 0x000000D2 System.IntPtr Microsoft.CognitiveServices.Speech.Internal.Recognizer::recognizer_session_started_set_callback(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,Microsoft.CognitiveServices.Speech.Internal.CallbackFunctionDelegate,System.IntPtr)
extern void Recognizer_recognizer_session_started_set_callback_m23B0AD337C8446036392FD763D5C81B4D43A8709 (void);
// 0x000000D3 System.IntPtr Microsoft.CognitiveServices.Speech.Internal.Recognizer::recognizer_session_stopped_set_callback(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,Microsoft.CognitiveServices.Speech.Internal.CallbackFunctionDelegate,System.IntPtr)
extern void Recognizer_recognizer_session_stopped_set_callback_mEAD7E8432B82F964E1C5578C37DCDAD087A8C41B (void);
// 0x000000D4 System.IntPtr Microsoft.CognitiveServices.Speech.Internal.Recognizer::recognizer_speech_start_detected_set_callback(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,Microsoft.CognitiveServices.Speech.Internal.CallbackFunctionDelegate,System.IntPtr)
extern void Recognizer_recognizer_speech_start_detected_set_callback_m42E74A08ECDDA5E9BEA53AB98F170276324380F1 (void);
// 0x000000D5 System.IntPtr Microsoft.CognitiveServices.Speech.Internal.Recognizer::recognizer_speech_end_detected_set_callback(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,Microsoft.CognitiveServices.Speech.Internal.CallbackFunctionDelegate,System.IntPtr)
extern void Recognizer_recognizer_speech_end_detected_set_callback_m54E9AA603B97AB97F61866B60D875BA4DDEC25CE (void);
// 0x000000D6 System.IntPtr Microsoft.CognitiveServices.Speech.Internal.Recognizer::recognizer_recognizing_set_callback(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,Microsoft.CognitiveServices.Speech.Internal.CallbackFunctionDelegate,System.IntPtr)
extern void Recognizer_recognizer_recognizing_set_callback_m0FBD65D0735F5B286FE71E2DC91C04231297B466 (void);
// 0x000000D7 System.IntPtr Microsoft.CognitiveServices.Speech.Internal.Recognizer::recognizer_recognized_set_callback(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,Microsoft.CognitiveServices.Speech.Internal.CallbackFunctionDelegate,System.IntPtr)
extern void Recognizer_recognizer_recognized_set_callback_m262A0DD6A93CABB015B86E65229021E89C037FE9 (void);
// 0x000000D8 System.IntPtr Microsoft.CognitiveServices.Speech.Internal.Recognizer::recognizer_canceled_set_callback(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,Microsoft.CognitiveServices.Speech.Internal.CallbackFunctionDelegate,System.IntPtr)
extern void Recognizer_recognizer_canceled_set_callback_mC5295B5F4B2ED3207AB92D2DAA94B229509EDE60 (void);
// 0x000000D9 System.IntPtr Microsoft.CognitiveServices.Speech.Internal.Recognizer::translator_synthesizing_audio_set_callback(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,Microsoft.CognitiveServices.Speech.Internal.CallbackFunctionDelegate,System.IntPtr)
extern void Recognizer_translator_synthesizing_audio_set_callback_m315338525553FEB680E20BCF2DB26D5542C432F6 (void);
// 0x000000DA System.Void Microsoft.CognitiveServices.Speech.Internal.SpxExceptionThrower::ThrowIfFail(System.IntPtr)
extern void SpxExceptionThrower_ThrowIfFail_m7269610C68DA4D960FE5E6208DF1BD9282C8F2DA (void);
// 0x000000DB System.Void Microsoft.CognitiveServices.Speech.Internal.SpxExceptionThrower::ThrowIfNull(System.Object,System.String)
extern void SpxExceptionThrower_ThrowIfNull_mC54EA71790A454E5785FC15C4FFBB6F457E772DB (void);
// 0x000000DC System.Void Microsoft.CognitiveServices.Speech.Internal.SpxExceptionThrower::ThrowIfNull(System.IntPtr,System.String)
extern void SpxExceptionThrower_ThrowIfNull_m89216C9938C8E733BC6119E3B3F84252B0BB101B (void);
// 0x000000DD System.Void Microsoft.CognitiveServices.Speech.Internal.SpxExceptionThrower::ThrowIfFalse(System.Boolean,System.Int32)
extern void SpxExceptionThrower_ThrowIfFalse_mEE1FF4BD7BB68A39220E0A1F7EB210DD4E88B79F (void);
// 0x000000DE System.Void Microsoft.CognitiveServices.Speech.Internal.SpxExceptionThrower::LogErrorIfFail(System.IntPtr)
extern void SpxExceptionThrower_LogErrorIfFail_m752E6CB197597DAD0613E0AA21841F7EFD46D624 (void);
// 0x000000DF System.Void Microsoft.CognitiveServices.Speech.Internal.SpxExceptionThrower::LogError(System.String)
extern void SpxExceptionThrower_LogError_m238C27C8D305C674179F87D2C22B9F9780CA91E1 (void);
// 0x000000E0 System.String Microsoft.CognitiveServices.Speech.Internal.Utf8StringMarshaler::MarshalNativeToManaged(System.IntPtr)
extern void Utf8StringMarshaler_MarshalNativeToManaged_mE524A0FA5B448795AFBC45096D889A5A647487D8 (void);
// 0x000000E1 System.String Microsoft.CognitiveServices.Speech.Internal.Utf8StringMarshaler::MarshalNativeToManaged(System.IntPtr,System.Int32)
extern void Utf8StringMarshaler_MarshalNativeToManaged_m6969DAD0B884E1303F4D827C689B57890274E3B2 (void);
// 0x000000E2 System.IntPtr Microsoft.CognitiveServices.Speech.Internal.Utf8StringMarshaler::MarshalManagedToNative(System.String)
extern void Utf8StringMarshaler_MarshalManagedToNative_m39FF2454E1147C76DAA8342418BA5DB669E98C5F (void);
// 0x000000E3 System.IntPtr Microsoft.CognitiveServices.Speech.Internal.Utf8StringMarshaler::MarshalManagedToNative(System.String,System.Int32&)
extern void Utf8StringMarshaler_MarshalManagedToNative_m17FC3A91B217C0AEB7B33A5488E6FDC6E637E5FD (void);
static Il2CppMethodPointer s_methodPointers[227] = 
{
	PropertyCollection__ctor_m298675719270993E505A055053F0D23293B517D2,
	PropertyCollection_Close_m22F36396E1E74B44AA00267D1081F75ACBB9E09D,
	PropertyCollection_GetProperty_m6DBFA6C4953D6B5D1C4959E210A76B9BFA6A6D17,
	PropertyCollection_SetProperty_m8CB653598B175FAF913064E54671C09E74FCC336,
	PropertyCollection_SetProperty_mB875B4CF7E0AD52B5E988746EC19DB3CA3B573B6,
	PropertyCollection_GetPropertyString_m42FE0F1232AE5118B58061A6222B07E5A27D9B54,
	RecognitionEventArgs__ctor_m31490D766642A01A99F86D9E037DEABFD21138FE,
	RecognitionEventArgs_get_Offset_m5A20B9663DD26226E0D6B5BF93F0BAA30D04A870,
	RecognitionEventArgs_ToString_mE2C59AB25F8EDBED5DC757788376B9FEAEC0D7D0,
	RecognitionResult__ctor_m7D01DA66AAD01DE820449823615BF686A33EC72E,
	RecognitionResult_get_ResultId_mD03C9639D934585A68FA0DDA386A9A3787C5F390,
	RecognitionResult_get_Reason_mC83682EB35ACDAC37F211E904C585EF187E94057,
	RecognitionResult_get_Text_mF0CFAB4D94ACC8B4E39FB5CCE4C1265F85FE84CD,
	RecognitionResult_get_Properties_m284ABEC168FBE8033594BCAF188A44ED976FD365,
	RecognitionResult_set_Properties_mC90D2FE65A44F87E80C5889C0E59A4CA2546FE33,
	RecognitionResult_ToString_m5203323C2CC6CE545D52A784C9257CCBDCE80A4A,
	CancellationDetails_FromResult_m4EB7D4D34AD85ACD568A2598EA91D0122D5DB718,
	CancellationDetails__ctor_m03B6FD790EE0ADF4D46D724E5B59FA224385663B,
	CancellationDetails_get_Reason_mEBCBE5F14B176F5574F4A4D6CBB2F3719CC51BA4,
	CancellationDetails_set_Reason_m6585C2DF7D2BF59B5FC062DF5258F079399CFE01,
	CancellationDetails_get_ErrorCode_m86467B87546D6D75FF69D6190773F9F84CD94D98,
	CancellationDetails_set_ErrorCode_mDC39567210408C52117E39FAD3930C916DA94F86,
	CancellationDetails_get_ErrorDetails_m1BD08DCFD99497ADB4E6C05D337488538941B384,
	CancellationDetails_set_ErrorDetails_mC97095A39BD0DB39495A59E1081EB3026F2BE140,
	CancellationDetails_ToString_m7A964C6C0A1527D7786D45DA24ABBA334C6CB337,
	Recognizer_add__SessionStarted_m82C00A0B6456390DBDF96FE466647D964302FE08,
	Recognizer_remove__SessionStarted_mDE2352B8E75ECF0D16F283EB81A72D769F129A3B,
	Recognizer_add__SessionStopped_m72A41C93CFD304A89B9369D6E74D7E1D40D16D36,
	Recognizer_remove__SessionStopped_m5A5E96C40EA8CA9ADA763CEBF02573CAC0A32BC6,
	Recognizer_add__SpeechStartDetected_m0F0EC04B8F79FCE22C43242DF2A774E8AB57A737,
	Recognizer_remove__SpeechStartDetected_m4647638FFD5518D8C6356FD0B788A2D8E123D705,
	Recognizer_add__SpeechEndDetected_m15AA9CD5EA864B18E1F29B21F3349E4EDE9899BB,
	Recognizer_remove__SpeechEndDetected_m41E1F529B192A8C325D9B8D40652BE2AC20FA480,
	Recognizer_add_SessionStarted_m0AE6F1FEABDB92BBFBFAC1913766AF0C7C5EC181,
	Recognizer_remove_SessionStarted_mC51DC2F48770679D9EFD9903CA369DA470A2F805,
	Recognizer_add_SessionStopped_m3CF6FD49B291A3D611BCAA757E9816CA566A6510,
	Recognizer_remove_SessionStopped_m7DB1219DB86C671AC5BC546493F6A61255796FC2,
	Recognizer_add_SpeechStartDetected_mD68D76AB0CC0A6341CF57207E7E07E23F63D3D67,
	Recognizer_remove_SpeechStartDetected_mB9E6CC75B3A409F58BC5D9ACFDEC8F64E8F7FEB4,
	Recognizer_add_SpeechEndDetected_mFC27AE69D120DE02B47F67EB7DA0E13FB4070CA4,
	Recognizer_remove_SpeechEndDetected_mA7AAD2BC5C7C3246953879E19F047A62D8CCC3FA,
	Recognizer__ctor_m5707D0C68E07B4A737C753DDBA817377F0CDDF5E,
	Recognizer_Finalize_m20F81169F675CE0A27215591F1330A8853F916F8,
	Recognizer_Dispose_m0808AC62F7D42E146FB7349FCB2C2E1D4776F994,
	Recognizer_Dispose_m087FE4E3ED875BD3BF69DA66606404145E3C0400,
	Recognizer_FireEvent_SetSessionStarted_mE1D278B2C1F2EA34E714D8E5F41CF8EA7E533F11,
	Recognizer_FireEvent_SetSessionStopped_mC49DC694FC309FDE44262E02039FB542A838CC78,
	Recognizer_FireEvent_SpeechStartDetected_m6BA5E049E81970E282933AEEA38E42DC461AC29F,
	Recognizer_FireEvent_SpeechEndDetected_mBD282262A151F5C473D1C49CFF74DEDDD71E7769,
	Recognizer_DoAsyncRecognitionAction_m2268106F48438234958D981F40C8036136AFD5CF,
	Recognizer_StartContinuousRecognition_m619E72043511237D3E1C58D62E375DAA4F1ACA9C,
	Recognizer_StopContinuousRecognition_m31050BE671DCB3A02B2709C5D37B00422795AF30,
	Recognizer_FromConfig_m60791AE2ACE591729B360D7615035FF13CAFBBF7,
	GetRecognizerFromConfigDelegate__ctor_m1D7851683A3D41399DB7BC5B6F36E32ABEBF62FC,
	GetRecognizerFromConfigDelegate_Invoke_m32859CB0B6CCD5497015D9506CA5B844EAFD185C,
	GetRecognizerFromConfigDelegate_BeginInvoke_mA31572A6428BE63DCD46EDEFD80C59579C524FE5,
	GetRecognizerFromConfigDelegate_EndInvoke_m6CB65E94ECFDAC2250C8C5D42B4D36370BF6E568,
	SessionEventArgs__ctor_mA2BA5B62E7BCD52804ACA274FE514BF94DBB9891,
	SessionEventArgs_get_SessionId_m8C680FABDADC335561EA0F07CEA0F2F38A968960,
	SessionEventArgs_ToString_mD08F94960C71A7CDBDED121426F177E51DDED0E9,
	SpeechConfig__ctor_m7E86AF6B9C5651B1FDA707458201F6A9058A46F5,
	SpeechConfig_FromSubscription_mDD9D18EE9C5A74BAD5AF00CDBCF279DA15CE4E4F,
	SpeechConfig_set_SpeechRecognitionLanguage_m5D08C2F88C49CDC8F81DBECA0EA7C2D61AC2FD94,
	SpeechConfig_SetProperty_m73E31A4EE091A42C3719999B7CBAAED70BC14B34,
	SpeechRecognitionResult__ctor_m55B5299672F300EDE742234DC6E0E39F51B33902,
	SpeechRecognitionEventArgs__ctor_mC3BF882EE32BECD77C0DEDD86F6203E24B864012,
	SpeechRecognitionEventArgs_get_Result_m1389C14A09CF6A3065569F67F3E7B624EE5A1370,
	SpeechRecognitionEventArgs_ToString_mC9FBD260911606DE6CC8135FBC231385EE2E531A,
	SpeechRecognitionCanceledEventArgs__ctor_mF09633F429C647ABCD7928A8568E3FFC4BB4854A,
	SpeechRecognitionCanceledEventArgs_get_Reason_m20DC32313A577BF1BE92F6B0E2C094114A67E0BD,
	SpeechRecognitionCanceledEventArgs_get_ErrorCode_mBA216DB0C26A6BC78DAB3557219137CBFF206253,
	SpeechRecognitionCanceledEventArgs_ToString_m30F1EF6D9EE29865814DD60BF64EFA5E4FA1031C,
	SpeechRecognizer_add__Recognizing_m80E20BB088605524849E64F4BAB797E4659E3491,
	SpeechRecognizer_remove__Recognizing_mCFA598D6668DFF893337F62828EAA61EB9F19723,
	SpeechRecognizer_add__Recognized_m62E0B99053088A27A5BC428F2F268FB5B5A97943,
	SpeechRecognizer_remove__Recognized_mC29E517C3AF82C572F196C98DDDE1C41F52A1ABE,
	SpeechRecognizer_add__Canceled_m5E772F5E6AEFF1CD22296B9C9C4FC9B2A34FAC24,
	SpeechRecognizer_remove__Canceled_m27D7B44B127DC397623ECB5C380134E21AEA72EC,
	SpeechRecognizer_add_Recognizing_mC9D14C5AEFBCB9075168AE43D00E3010CC82B384,
	SpeechRecognizer_remove_Recognizing_mB5246A8D61D4FB0231F9E48F3ABBC25DE4813B38,
	SpeechRecognizer_add_Recognized_m26A52181BB32A5B6B4ADDEB49ADD2F2434DD4833,
	SpeechRecognizer_remove_Recognized_m5146BC4962A53D0A357103D0F4CB6A4CA0E50E78,
	SpeechRecognizer_add_Canceled_m3134FC776D0C6C9C476C55409754521DECB4A7B7,
	SpeechRecognizer_remove_Canceled_mE77B85775D47546C0653013364D3A47545D17085,
	SpeechRecognizer__ctor_m81FDB924D464DAB21019D0EBDE866F493EB39F75,
	SpeechRecognizer__ctor_m030946A0C9CCF1B50A039FA14805EB86D9937720,
	SpeechRecognizer_get_Properties_mBA0F85A8988F7921955F690761443143B7563EB3,
	SpeechRecognizer_set_Properties_mF2118E137B1726D1BE3D31AF54617D3F6C79035A,
	SpeechRecognizer_StartContinuousRecognitionAsync_m615484E4AD977DD1C55C42B0A2D40C1DE021408C,
	SpeechRecognizer_StopContinuousRecognitionAsync_m7DCC497073169C3BBE9384205A4294E6BDB1B203,
	SpeechRecognizer_Finalize_m30391E2CE943D036EC33086BC06EC7514182B30B,
	SpeechRecognizer_Dispose_mE42EDC7833BEA6625BFDD35CA197F8A4732C4B19,
	SpeechRecognizer_FireEvent_Recognizing_m3BAA0548428B005FA57B77CB4B09D157F5D34E0F,
	SpeechRecognizer_FireEvent_Recognized_m67E62803BF374C34B61CFC991DA73FE25AF287BF,
	SpeechRecognizer_FireEvent_Canceled_m4DDE18DFD654DACBDE97F182D735A624B5E601F2,
	SpeechRecognizer_U3CStartContinuousRecognitionAsyncU3Eb__48_0_m55F59D499889BA7B44BF8D1F3745BFF5B5AF0F82,
	SpeechRecognizer_U3CStopContinuousRecognitionAsyncU3Eb__49_0_m6F826EAC9DEF582418CBAD8D1425FBB0F1F35F09,
	SpeechTranslationConfig__ctor_m69FF967879A65C258D38700C4B5BC4B7458C309B,
	SpeechTranslationConfig_FromSubscription_m710089D3B1BA31D2C22234A84DEE17F55A8C134E,
	SpeechTranslationConfig_AddTargetLanguage_mFA86AF17503F3269E1E0298702DAAFC520FE4D6A,
	TranslationRecognitionResult__ctor_m7DE44365A4CDD91182EAFBB15C5A09851BF9518A,
	TranslationRecognitionResult_get_Translations_mFE7B704863AE1DFA972D7EBB13671D4D907ABE53,
	TranslationRecognitionResult_ToString_m1546005CA76029FB43629ADBE5EE72F65B02B824,
	TranslationRecognitionResult_GetTranslationTexts_m8089C12281F2780B76AE5F52A7E56E722AE4D314,
	TranslationRecognizer_add__Recognizing_mAF65D8FC77E7A5C0A41FC9D0A26DEE67272F1254,
	TranslationRecognizer_remove__Recognizing_m4D0BFE4BE97DF87F8DCC5E7707DE43C464AFBF1E,
	TranslationRecognizer_add__Recognized_m88F0D2B211CB1FB63A4488006301EA054F839A1A,
	TranslationRecognizer_remove__Recognized_m90BC367941B41038250A67CBD727D2C25BFB6A6C,
	TranslationRecognizer_add__Canceled_m85B57C3A1EEFCED2ECC7DFE669DB36D185801416,
	TranslationRecognizer_remove__Canceled_m9C623054339BE0D96462B81AD3D3668949EA0AD9,
	TranslationRecognizer_add_Recognizing_m03063F2CFEC60E412DE797A3988F531B54CBC2AA,
	TranslationRecognizer_remove_Recognizing_mC0B457860641D9D1E8AA147AD9A14E84365F05FC,
	TranslationRecognizer_add_Recognized_m6213D96F154E22B291378B2E1F4A9BB18BC6F164,
	TranslationRecognizer_remove_Recognized_m95AACDD387B4FBCDBA8511AF2E761C435E45CA6E,
	TranslationRecognizer_add_Canceled_mB51A1268E44A3D8735717C5ABD37929026684406,
	TranslationRecognizer_remove_Canceled_m11C30AAF9F33E2B107738B83928D604697FB1A7A,
	TranslationRecognizer__ctor_m76B66A70B75C37221AA3F17855583A9DECE01B60,
	TranslationRecognizer__ctor_m82F3D2B19A6FF788428C76193132BA4E8B8F3D8D,
	TranslationRecognizer_get_Properties_m05C6F57DF448914BF3B79B835985CAB57E05A845,
	TranslationRecognizer_set_Properties_mA93EEDAC48C7C7A2B3DC40A1B24E27DC0AF096D5,
	TranslationRecognizer_StartContinuousRecognitionAsync_m75216A6022CED919F51387B819FE870F8E36829F,
	TranslationRecognizer_StopContinuousRecognitionAsync_m6F9636D3EC468F7CFC48094AD51173D5FF68C79E,
	TranslationRecognizer_Finalize_mF9ED487B22B35A0AA1D35799DFBB6919278C8B9E,
	TranslationRecognizer_Dispose_mFB91400781FF245042A7B4852A721E149A7ECD45,
	TranslationRecognizer_FireEvent_Recognizing_mB199DD38F12DAD9246DD6B677A2E74490B49A52F,
	TranslationRecognizer_FireEvent_Recognized_mDDE062FC556E989A6D9524FEDD5CB998F3B7283A,
	TranslationRecognizer_FireEvent_Canceled_m07E5C0FDE0F3C15AE7DA029B15FAB7D3B20DEBA2,
	TranslationRecognizer_FireEvent_SynthesisResult_mCE224C9BBD6BD727940FA60C9E032A92A4B3CB80,
	TranslationRecognizer_U3CStartContinuousRecognitionAsyncU3Eb__45_0_mE07DE7033EAEA5EFA7E10E3C0EC5AAEDC9EE715A,
	TranslationRecognizer_U3CStopContinuousRecognitionAsyncU3Eb__46_0_m28CECB898F8C69BEB9C3F8724DC2C0729EC64A8D,
	TranslationSynthesisResult__ctor_mE3EAA81170394CEC3F96EC51CD627DCCAB73BFE9,
	TranslationSynthesisResult_get_Reason_mFDC37352957A9BB0B79CE705DB24CAC5AEC39AF7,
	TranslationSynthesisResult_ToString_mA1C1AF2002DF897B5BDBEAEFD3A3D96DA7AC8949,
	TranslationSynthesisResult_GetAudioData_m24E5A8CD2E73B2361238C220CE64BCB588611CC4,
	TranslationSynthesisEventArgs__ctor_m4074DC4145DFBC5CEA391A5F19A4F2923D620323,
	TranslationSynthesisEventArgs_get_Result_mDB3D5F4D8AED490B08C9AAA14947499BEC7AFBD9,
	TranslationSynthesisEventArgs_ToString_m23837A1767AAA522620C5B996CD6FA86D1053442,
	TranslationRecognitionEventArgs__ctor_mE538F958D191E2A0ABAA76F0B10516C08846DD52,
	TranslationRecognitionEventArgs_get_Result_mCD02FCF6C3C49D1B6288D1BDA24F06BEF2322F41,
	TranslationRecognitionEventArgs_ToString_m92738DB6325D6B60A2CED60DB7C0338255A13AC4,
	TranslationRecognitionCanceledEventArgs__ctor_m232ECE91C247E37F521EB16C1C0D6F83242D712E,
	TranslationRecognitionCanceledEventArgs_get_Reason_m94F2A97E7FD6DD5B61DCDC9B305CD41D9432C318,
	TranslationRecognitionCanceledEventArgs_get_ErrorCode_mDC791691BE24A75B18707DCAE11FDDB9A0CC2559,
	TranslationRecognitionCanceledEventArgs_ToString_mBA3666F32F9CF255E740681B9226084264D3F7A9,
	Diagnostics_Args_m37BBD997F110D90D939A75BC082C8A09EBF5C20C,
	Diagnostics_SPX_TRACE_VERBOSE_mC8FE10F8F57265211C7A31D049321F461DF90400,
	Diagnostics_SPX_TRACE_VERBOSE_m30E8360DBDD81703DC7247D7BE842D5F32A63E0A,
	CancellationDetails_result_get_reason_canceled_m9DC6EAB40632EE1093689D38550E39CEBF2B27AD,
	CancellationDetails_result_get_canceled_error_code_m426BD4822127A22E7176EBDB01020D9C27900CD2,
	SpeechConfig_speech_config_from_subscription_m53E6A53D4F7099736BF503BC3C76EDC66B058153,
	SpeechConfig_speech_config_release_m211A119E8B4829F52735D15C1CE30B4E80EA6A08,
	SpeechConfig_speech_config_get_property_bag_m14C01802DDD84CBB3508ABD4B604E6A5DADE2F0E,
	SpeechTranslationConfig_speech_translation_config_from_subscription_mFE0B7FFDFDA728CA2144AACCD1AA1069A9612C2B,
	SpeechTranslationConfig_speech_translation_config_add_target_language_mC6E21CF2A9D4149054774D48C7BE7DA84FBDA0BE,
	DiagnosticsInterop_diagnostics_log_trace_string_mE2604DBBEC420974FEAACBA1C9D62FFF408A60E5,
	SpxError_GetMessage_mAE69502CC76A217D2802B96AE46446F55159F08C,
	SpxError_GetErrorCode_mA5D665FA8B9709452893CBDF4FF2D324C1F113B4,
	SpxError_Release_m8A4610A24E3E7CC631AB6B937A23D75D690368CA,
	SpxError_ReleaseNoThrow_m56AF1911B28350AF579AA6A562FAC4DE2D9E1C86,
	SpxError_error_get_message_mB89C50717DBBE7DD5748A3A4A3C1F94A2E73EAD3,
	SpxError_error_get_error_code_m30AEFABD1655FE32BAC77F0EB19AA74D6F24A10B,
	SpxError_error_release_mCA135AF50E067E9909E8FF41CEBEBC311DAA8E73,
	SpxError__cctor_mAFC3BB636CCA7D4D4E6B8D21876B84FDB74AD8FE,
	EventArgs_recognizer_event_handle_release_m3D3A3B06F35570BE6EE52F14267BC94EFDCD4F7B,
	MonoPInvokeCallbackAttribute__ctor_mC2B5B7C3A898F2DF9460D323CDC360B796BEC7AA,
	HandleRelease__ctor_m033F205B7379518DCCF337635EAC5AAC9B2A42E9,
	HandleRelease_Invoke_m9C512BECA3AC902349BAB0C2394147051701C473,
	HandleRelease_BeginInvoke_m5D734617039DD379F6CC83437F7D3CF2E7F56270,
	HandleRelease_EndInvoke_m0B26DA7E4B2A0EF61297A32ACFBB4C7F149B0C1F,
	InteropSafeHandle__ctor_mEEBFD93E8F421872BAE76137A07486B9BBD3D156,
	InteropSafeHandle_get_IsInvalid_m9FC49868EDA0F0630E1BE420E75AB00192916B87,
	InteropSafeHandle_ReleaseHandle_m7F33298C481FA9CA13417524742FB52F32C605F0,
	InteropSafeHandle_Dispose_m08B3D27C50197162A1C138BA967B4528977958CA,
	NULL,
	InteropSafeHandle_ToString_mF461A4025D4B940195524A30750A8E25FA75853B,
	InteropSafeHandle_Finalize_m6628E8CADEC9898829BC194F6236B9D266F6007C,
	SpxFactory_GetDataFromHandleUsingDelegate_mE498329CDC2B03C0A628C2EDE8395F3F87FC605C,
	SpxFactory_recognizer_create_speech_recognizer_from_config_mEFA185528C9EF0F4C5883329D957F95566B57E8B,
	SpxFactory_recognizer_create_translation_recognizer_from_config_mBAA1FE887AC7E89AE3658F30F2307B65A5153BA6,
	GetResultDelegate__ctor_mD9674EEDEC07A1965D10AD6C172D61ADA8ABBAF0,
	GetResultDelegate_Invoke_m266129DD98B4319DC07D86FC58634BD716A09913,
	GetResultDelegate_BeginInvoke_mDDC49711463383C50240777E3D9FE0EF72B766AD,
	GetResultDelegate_EndInvoke_mD9E3A1886725A45CFEF6B091DCA7A6C112B9607F,
	PropertyCollection_property_bag_set_string_m9F04396801AECB2614444B52E37ECE43859EDCE3,
	PropertyCollection_property_bag_get_string_mD72C7BC68AA146B7B28E6D3BA2A34ACA1F3FB0A1,
	PropertyCollection_property_bag_free_string_mEFBE870DE678372D8DA91718476766F7761B5A4B,
	PropertyCollection_property_bag_release_mAC9096678F4D9B7281A5EECCA5FCD7B794275755,
	RecognitionResult_result_get_reason_m56E4A15B2D6F95EFF1E69838F4A0F9B6CAF4CD8A,
	RecognitionResult_result_get_result_id_m996CCE6FB266EB35D1833A57DBF34628883A1D51,
	RecognitionResult_result_get_text_m84677F08CEF6433DA77AECACD5C5393B7ED1FC48,
	RecognitionResult_result_get_property_bag_m75C375828C1506CA3A7F3B6DDB9C086ADD04A91A,
	RecognitionResult_recognizer_result_handle_is_valid_mF7E78F30BD9373F5F3F4AEC1827F014FEEDDF062,
	RecognitionResult_recognizer_result_handle_release_m2390D80CFD66650438F1B05545EB439A5CAD56EA,
	RecognitionResult_translation_text_result_get_translation_text_buffer_header_m836D5B5E0B1882639EF9E75125664188D7484BCF,
	RecognitionResult_translation_synthesis_result_get_audio_data_mFF0760AF3D2F8409841252FD33179D53E25CF4B9,
	CallbackFunctionDelegate__ctor_m34250E2B4EB599FB96576EC76B41BA44F32482AB,
	CallbackFunctionDelegate_Invoke_m501C49800C8A0C75DA6BF2EEBC5D59DD90FEAB7F,
	CallbackFunctionDelegate_BeginInvoke_m9C1D9AA45ADF55BC28D184D33DE3CB7E7C0B8879,
	CallbackFunctionDelegate_EndInvoke_mC821E2106A14A66EB3FB5E320F0DF81841BA458E,
	Recognizer_recognizer_get_property_bag_m52747647E843FD151DC9CFC39C0B3A32D58979F1,
	Recognizer_recognizer_handle_release_m4F85CBC6A9242C997CEC5704FBA5D5D8AD486772,
	Recognizer_recognizer_start_continuous_recognition_async_mE0D8A324AA83CC7914CF3A677770B702A0225CF7,
	Recognizer_recognizer_start_continuous_recognition_async_wait_for_m67B22C498B2E1C76189FF0CEBB430C8ED7D52AD9,
	Recognizer_recognizer_stop_continuous_recognition_async_m90B10E6C5A9EF8E54D22793254DE64E412B4FC80,
	Recognizer_recognizer_stop_continuous_recognition_async_wait_for_m2A6AE149C72A46FEE1C9488C8F984079C618B73F,
	Recognizer_recognizer_async_handle_release_mB7E4B1D8EEA5B0FE097A95562D5E09B2F7740CBA,
	Recognizer_recognizer_recognition_event_get_offset_mCF53A1E91E882611247A461133DA78BE91F55CE8,
	Recognizer_recognizer_session_event_get_session_id_mEB659429C629D3E9E271BA22B3FD631BD54565B0,
	Recognizer_recognizer_recognition_event_get_result_m95C54811DD6BF44F99C1BF4AFA3506EB119BFBA0,
	Recognizer_recognizer_session_started_set_callback_m23B0AD337C8446036392FD763D5C81B4D43A8709,
	Recognizer_recognizer_session_stopped_set_callback_mEAD7E8432B82F964E1C5578C37DCDAD087A8C41B,
	Recognizer_recognizer_speech_start_detected_set_callback_m42E74A08ECDDA5E9BEA53AB98F170276324380F1,
	Recognizer_recognizer_speech_end_detected_set_callback_m54E9AA603B97AB97F61866B60D875BA4DDEC25CE,
	Recognizer_recognizer_recognizing_set_callback_m0FBD65D0735F5B286FE71E2DC91C04231297B466,
	Recognizer_recognizer_recognized_set_callback_m262A0DD6A93CABB015B86E65229021E89C037FE9,
	Recognizer_recognizer_canceled_set_callback_mC5295B5F4B2ED3207AB92D2DAA94B229509EDE60,
	Recognizer_translator_synthesizing_audio_set_callback_m315338525553FEB680E20BCF2DB26D5542C432F6,
	SpxExceptionThrower_ThrowIfFail_m7269610C68DA4D960FE5E6208DF1BD9282C8F2DA,
	SpxExceptionThrower_ThrowIfNull_mC54EA71790A454E5785FC15C4FFBB6F457E772DB,
	SpxExceptionThrower_ThrowIfNull_m89216C9938C8E733BC6119E3B3F84252B0BB101B,
	SpxExceptionThrower_ThrowIfFalse_mEE1FF4BD7BB68A39220E0A1F7EB210DD4E88B79F,
	SpxExceptionThrower_LogErrorIfFail_m752E6CB197597DAD0613E0AA21841F7EFD46D624,
	SpxExceptionThrower_LogError_m238C27C8D305C674179F87D2C22B9F9780CA91E1,
	Utf8StringMarshaler_MarshalNativeToManaged_mE524A0FA5B448795AFBC45096D889A5A647487D8,
	Utf8StringMarshaler_MarshalNativeToManaged_m6969DAD0B884E1303F4D827C689B57890274E3B2,
	Utf8StringMarshaler_MarshalManagedToNative_m39FF2454E1147C76DAA8342418BA5DB669E98C5F,
	Utf8StringMarshaler_MarshalManagedToNative_m17FC3A91B217C0AEB7B33A5488E6FDC6E637E5FD,
};
static const int32_t s_InvokerIndices[227] = 
{
	6198,
	7584,
	5548,
	3433,
	3688,
	1228,
	6198,
	7569,
	7471,
	6198,
	7471,
	7425,
	7471,
	7471,
	6240,
	7471,
	10624,
	6240,
	7425,
	6195,
	7425,
	6195,
	7471,
	6240,
	7471,
	6240,
	6240,
	6240,
	6240,
	6240,
	6240,
	6240,
	6240,
	6240,
	6240,
	6240,
	6240,
	6240,
	6240,
	6240,
	6240,
	6240,
	7584,
	7584,
	6111,
	9413,
	9413,
	9413,
	9413,
	6240,
	7584,
	7584,
	9872,
	3682,
	1752,
	467,
	2950,
	6198,
	7471,
	7471,
	6198,
	9872,
	6240,
	3688,
	6198,
	6198,
	7471,
	7471,
	6198,
	7425,
	7425,
	7471,
	6240,
	6240,
	6240,
	6240,
	6240,
	6240,
	6240,
	6240,
	6240,
	6240,
	6240,
	6240,
	6240,
	6240,
	7471,
	6240,
	7471,
	7471,
	7584,
	6111,
	9413,
	9413,
	9413,
	7584,
	7584,
	6198,
	9872,
	6240,
	6198,
	7471,
	7471,
	7584,
	6240,
	6240,
	6240,
	6240,
	6240,
	6240,
	6240,
	6240,
	6240,
	6240,
	6240,
	6240,
	6240,
	6240,
	7471,
	6240,
	7471,
	7471,
	7584,
	6111,
	9413,
	9413,
	9413,
	9413,
	7584,
	7584,
	6198,
	7425,
	7471,
	6240,
	6198,
	7471,
	7471,
	6198,
	7471,
	7471,
	6198,
	7425,
	7425,
	7471,
	10624,
	8906,
	8442,
	9798,
	9798,
	9143,
	10510,
	9798,
	9143,
	9801,
	8405,
	10622,
	10468,
	10874,
	10334,
	10510,
	10510,
	10510,
	11049,
	10510,
	6240,
	3682,
	5428,
	1839,
	5432,
	3641,
	7340,
	7340,
	6111,
	-1,
	7471,
	7584,
	9219,
	9143,
	9143,
	3682,
	1755,
	514,
	5432,
	8739,
	8739,
	10510,
	10510,
	9798,
	9155,
	9155,
	9798,
	10338,
	10510,
	9153,
	9153,
	3682,
	2096,
	491,
	6240,
	9798,
	10510,
	9798,
	9797,
	9798,
	9797,
	10510,
	9798,
	9155,
	9798,
	9157,
	9157,
	9157,
	9157,
	9157,
	9157,
	9157,
	9157,
	10874,
	10121,
	10081,
	10062,
	10874,
	10877,
	10622,
	9853,
	10511,
	9798,
};
static const Il2CppTokenIndexMethodTuple s_reversePInvokeIndices[11] = 
{
	{ 0x0600002E, 18,  (void**)&Recognizer_FireEvent_SetSessionStarted_mE1D278B2C1F2EA34E714D8E5F41CF8EA7E533F11_RuntimeMethod_var, 0 },
	{ 0x0600002F, 19,  (void**)&Recognizer_FireEvent_SetSessionStopped_mC49DC694FC309FDE44262E02039FB542A838CC78_RuntimeMethod_var, 0 },
	{ 0x06000030, 21,  (void**)&Recognizer_FireEvent_SpeechStartDetected_m6BA5E049E81970E282933AEEA38E42DC461AC29F_RuntimeMethod_var, 0 },
	{ 0x06000031, 20,  (void**)&Recognizer_FireEvent_SpeechEndDetected_mBD282262A151F5C473D1C49CFF74DEDDD71E7769_RuntimeMethod_var, 0 },
	{ 0x0600005D, 24,  (void**)&SpeechRecognizer_FireEvent_Recognizing_m3BAA0548428B005FA57B77CB4B09D157F5D34E0F_RuntimeMethod_var, 0 },
	{ 0x0600005E, 23,  (void**)&SpeechRecognizer_FireEvent_Recognized_m67E62803BF374C34B61CFC991DA73FE25AF287BF_RuntimeMethod_var, 0 },
	{ 0x0600005F, 22,  (void**)&SpeechRecognizer_FireEvent_Canceled_m4DDE18DFD654DACBDE97F182D735A624B5E601F2_RuntimeMethod_var, 0 },
	{ 0x0600007D, 27,  (void**)&TranslationRecognizer_FireEvent_Recognizing_mB199DD38F12DAD9246DD6B677A2E74490B49A52F_RuntimeMethod_var, 0 },
	{ 0x0600007E, 26,  (void**)&TranslationRecognizer_FireEvent_Recognized_mDDE062FC556E989A6D9524FEDD5CB998F3B7283A_RuntimeMethod_var, 0 },
	{ 0x0600007F, 25,  (void**)&TranslationRecognizer_FireEvent_Canceled_m07E5C0FDE0F3C15AE7DA029B15FAB7D3B20DEBA2_RuntimeMethod_var, 0 },
	{ 0x06000080, 28,  (void**)&TranslationRecognizer_FireEvent_SynthesisResult_mCE224C9BBD6BD727940FA60C9E032A92A4B3CB80_RuntimeMethod_var, 0 },
};
static const Il2CppTokenRangePair s_rgctxIndices[1] = 
{
	{ 0x060000AE, { 0, 1 } },
};
static const Il2CppRGCTXDefinition s_rgctxValues[1] = 
{
	{ (Il2CppRGCTXDataType)2, 515 },
};
extern const CustomAttributesCacheGenerator g_Microsoft_CognitiveServices_Speech_csharp_AttributeGenerators[];
IL2CPP_EXTERN_C const Il2CppCodeGenModule g_Microsoft_CognitiveServices_Speech_csharp_CodeGenModule;
const Il2CppCodeGenModule g_Microsoft_CognitiveServices_Speech_csharp_CodeGenModule = 
{
	"Microsoft.CognitiveServices.Speech.csharp.dll",
	227,
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
	g_Microsoft_CognitiveServices_Speech_csharp_AttributeGenerators,
	NULL, // module initializer,
	NULL,
	NULL,
	NULL,
};
