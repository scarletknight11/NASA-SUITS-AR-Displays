#include "pch-c.h"
#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include "codegen/il2cpp-codegen-metadata.h"


extern const RuntimeMethod* Logger_OnDebugMessage_m51F67A9B23BE08511844BD1B232BBF8A29394B9E_RuntimeMethod_var;



// 0x00000001 System.Void Microsoft.Azure.Kinect.Sensor.BodyTracking::.ctor(Microsoft.Azure.Kinect.Sensor.Calibration,Microsoft.Azure.Kinect.Sensor.k4abt_tracker_configuration_t)
extern void BodyTracking__ctor_m40C72F20091BA32E6A725A09CC575C7B7DB24027 (void);
// 0x00000002 System.Void Microsoft.Azure.Kinect.Sensor.BodyTracking::SetTemporalSmoothing(System.Single)
extern void BodyTracking_SetTemporalSmoothing_m2A57F8FFF773ED7FE63A249434E1D47BB6CF9577 (void);
// 0x00000003 System.Single Microsoft.Azure.Kinect.Sensor.BodyTracking::GetSensorOrientationAngle()
extern void BodyTracking_GetSensorOrientationAngle_mD55A8FE8C7B185A6BA4B2AA9E6245F8C639CBCD9 (void);
// 0x00000004 System.Boolean Microsoft.Azure.Kinect.Sensor.BodyTracking::EnqueueCapture(Microsoft.Azure.Kinect.Sensor.Capture,System.Int32)
extern void BodyTracking_EnqueueCapture_mF106F641B7C7DFCA67FE89C31D2142D61B9DA216 (void);
// 0x00000005 System.IntPtr Microsoft.Azure.Kinect.Sensor.BodyTracking::PollBodyFrame(System.Int32)
extern void BodyTracking_PollBodyFrame_m7959F383423F9A4B8B2636D76A9B9DD391594CA1 (void);
// 0x00000006 System.Void Microsoft.Azure.Kinect.Sensor.BodyTracking::ShutdownBodyTracker()
extern void BodyTracking_ShutdownBodyTracker_m3A6F7DF243F1D1E22F59E14C9D370FCE1B44CD6B (void);
// 0x00000007 System.Void Microsoft.Azure.Kinect.Sensor.BodyTracking::ReleaseBodyFrame(System.IntPtr)
extern void BodyTracking_ReleaseBodyFrame_m21919272F1BAB659F0912C1CF39DE809F7775E98 (void);
// 0x00000008 System.UInt32 Microsoft.Azure.Kinect.Sensor.BodyTracking::GetNumberOfBodies(System.IntPtr)
extern void BodyTracking_GetNumberOfBodies_m8C3736575BD493699F9514B78CA04B7BF71E3C5D (void);
// 0x00000009 System.UInt64 Microsoft.Azure.Kinect.Sensor.BodyTracking::GetBodyId(System.IntPtr,System.UInt32)
extern void BodyTracking_GetBodyId_mF8E2BB6B5D1AC00312F31A40A68CC928D7882F38 (void);
// 0x0000000A Microsoft.Azure.Kinect.Sensor.k4abt_skeleton_t Microsoft.Azure.Kinect.Sensor.BodyTracking::CreateBodySkeleton()
extern void BodyTracking_CreateBodySkeleton_mB43D185CA149443700609F04A143815A1711C3C4 (void);
// 0x0000000B System.Boolean Microsoft.Azure.Kinect.Sensor.BodyTracking::GetBodySkeleton(System.IntPtr,System.UInt32,Microsoft.Azure.Kinect.Sensor.k4abt_skeleton_t&)
extern void BodyTracking_GetBodySkeleton_m946283F476715A64E164DA21C8E5D3D02C510411 (void);
// 0x0000000C System.UInt64 Microsoft.Azure.Kinect.Sensor.BodyTracking::GetBodyFrameTimestampUsec(System.IntPtr)
extern void BodyTracking_GetBodyFrameTimestampUsec_m4F326F8063CE7ABE69CCF3FF16EDCC2EA320D5B1 (void);
// 0x0000000D Microsoft.Azure.Kinect.Sensor.Image Microsoft.Azure.Kinect.Sensor.BodyTracking::GetBodyIndexMap(System.IntPtr)
extern void BodyTracking_GetBodyIndexMap_mDA4DFCEF1EFD20FEA00922017E5CF9C404B7CFE5 (void);
// 0x0000000E Microsoft.Azure.Kinect.Sensor.Capture Microsoft.Azure.Kinect.Sensor.BodyTracking::GetCapture(System.IntPtr)
extern void BodyTracking_GetCapture_m0BF546A443C37665493E047BF86E03B36DFDB41C (void);
// 0x0000000F System.Void Microsoft.Azure.Kinect.Sensor.BodyTracking::Dispose(System.Boolean)
extern void BodyTracking_Dispose_m95090FC64120954FC9ECF897D7B161A30597787E (void);
// 0x00000010 System.Void Microsoft.Azure.Kinect.Sensor.BodyTracking::Finalize()
extern void BodyTracking_Finalize_m7FFB60F427E22D75F8B4602670AF58FAB72F889E (void);
// 0x00000011 System.Void Microsoft.Azure.Kinect.Sensor.BodyTracking::Dispose()
extern void BodyTracking_Dispose_mDC7990CBF2CAE32DDCA56A52938598C97FF88365 (void);
// 0x00000012 System.Nullable`1<System.Numerics.Vector3> Microsoft.Azure.Kinect.Sensor.Calibration::TransformTo3D(System.Numerics.Vector2,System.Single,Microsoft.Azure.Kinect.Sensor.CalibrationDeviceType,Microsoft.Azure.Kinect.Sensor.CalibrationDeviceType)
extern void Calibration_TransformTo3D_mBE16FDE91D28AC521C2977ABABD22AB25FC3DF3E (void);
// 0x00000013 System.Nullable`1<System.Numerics.Vector2> Microsoft.Azure.Kinect.Sensor.Calibration::TransformTo2D(System.Numerics.Vector3,Microsoft.Azure.Kinect.Sensor.CalibrationDeviceType,Microsoft.Azure.Kinect.Sensor.CalibrationDeviceType)
extern void Calibration_TransformTo2D_mD6D7A844F49DF2D2501F98A2F923B3D5ABF5B070 (void);
// 0x00000014 Microsoft.Azure.Kinect.Sensor.Transformation Microsoft.Azure.Kinect.Sensor.Calibration::CreateTransformation()
extern void Calibration_CreateTransformation_mFF374A7E9913B285ED67AB9F4A73BC48961997CC (void);
// 0x00000015 System.Boolean Microsoft.Azure.Kinect.Sensor.Calibration::Equals(System.Object)
extern void Calibration_Equals_m6F5126408C375DEA0BDBF42FD753EE40B6534E49 (void);
// 0x00000016 System.Boolean Microsoft.Azure.Kinect.Sensor.Calibration::Equals(Microsoft.Azure.Kinect.Sensor.Calibration)
extern void Calibration_Equals_m920DA4A69370C90B1453BD4AAEE7123130DC40E1 (void);
// 0x00000017 System.Int32 Microsoft.Azure.Kinect.Sensor.Calibration::GetHashCode()
extern void Calibration_GetHashCode_m79108213DFE3457A7B34CE1F7AFF58EEBD8676F9 (void);
// 0x00000018 System.Boolean Microsoft.Azure.Kinect.Sensor.CameraCalibration::Equals(System.Object)
extern void CameraCalibration_Equals_m02E56112450EE5AF37497FF7454B2B4F9C75E4CE (void);
// 0x00000019 System.Boolean Microsoft.Azure.Kinect.Sensor.CameraCalibration::Equals(Microsoft.Azure.Kinect.Sensor.CameraCalibration)
extern void CameraCalibration_Equals_m15C307F171CF0847D54CF4F7BE04F9246F633575 (void);
// 0x0000001A System.Int32 Microsoft.Azure.Kinect.Sensor.CameraCalibration::GetHashCode()
extern void CameraCalibration_GetHashCode_m20976B888D06FC8B68C6BD7E06E08E0A88AD1618 (void);
// 0x0000001B System.Void Microsoft.Azure.Kinect.Sensor.Capture::.ctor(Microsoft.Azure.Kinect.Sensor.NativeMethods/k4a_capture_t)
extern void Capture__ctor_m067A1FE7CDED303ABFFAB4AD8F5F3CFD618B1AD8 (void);
// 0x0000001C Microsoft.Azure.Kinect.Sensor.Image Microsoft.Azure.Kinect.Sensor.Capture::get_Color()
extern void Capture_get_Color_m94B2E5C5AA059DF4EBBDD991F013F97D0F7E77DC (void);
// 0x0000001D Microsoft.Azure.Kinect.Sensor.Image Microsoft.Azure.Kinect.Sensor.Capture::get_Depth()
extern void Capture_get_Depth_m5D78EDE12253664CEECE57964DC1737024293385 (void);
// 0x0000001E Microsoft.Azure.Kinect.Sensor.Image Microsoft.Azure.Kinect.Sensor.Capture::get_IR()
extern void Capture_get_IR_m9592E779ACCB4AFD53164BE822A7BC081A32A15E (void);
// 0x0000001F System.Void Microsoft.Azure.Kinect.Sensor.Capture::Dispose()
extern void Capture_Dispose_m8FFDF006CC200960D381D776C2B230B7B66A2EAA (void);
// 0x00000020 Microsoft.Azure.Kinect.Sensor.NativeMethods/k4a_capture_t Microsoft.Azure.Kinect.Sensor.Capture::DangerousGetHandle()
extern void Capture_DangerousGetHandle_m9FACB2DA122144F20DC93DF907592A392E1EF0B3 (void);
// 0x00000021 System.Void Microsoft.Azure.Kinect.Sensor.Capture::Dispose(System.Boolean)
extern void Capture_Dispose_m17E015983FF9031475D8F8766A02BB3E771BE6AA (void);
// 0x00000022 System.Void Microsoft.Azure.Kinect.Sensor.Capture::UpdateImageWrapperAndDisposePrevious(System.Func`2<Microsoft.Azure.Kinect.Sensor.NativeMethods/k4a_capture_t,Microsoft.Azure.Kinect.Sensor.NativeMethods/k4a_image_t>,Microsoft.Azure.Kinect.Sensor.Image&)
extern void Capture_UpdateImageWrapperAndDisposePrevious_mABB19271210211F7FF0806EBAB839BFA5618F95F (void);
// 0x00000023 System.Void Microsoft.Azure.Kinect.Sensor.Device::.ctor(Microsoft.Azure.Kinect.Sensor.NativeMethods/k4a_device_t)
extern void Device__ctor_m5C48DDA20F7B9236C7E043220F85E9A2AA087392 (void);
// 0x00000024 System.String Microsoft.Azure.Kinect.Sensor.Device::get_SerialNum()
extern void Device_get_SerialNum_m6DE42B28D124AFDF2AF0B514FEA9FD6D2F3D4453 (void);
// 0x00000025 Microsoft.Azure.Kinect.Sensor.DepthMode Microsoft.Azure.Kinect.Sensor.Device::get_CurrentDepthMode()
extern void Device_get_CurrentDepthMode_mBBB7D0B91C8B5146412D8876347FA1F4D707496C (void);
// 0x00000026 System.Void Microsoft.Azure.Kinect.Sensor.Device::set_CurrentDepthMode(Microsoft.Azure.Kinect.Sensor.DepthMode)
extern void Device_set_CurrentDepthMode_m2F01BBC8B7507E1961B53316D8C3E143E90D4CBC (void);
// 0x00000027 Microsoft.Azure.Kinect.Sensor.ColorResolution Microsoft.Azure.Kinect.Sensor.Device::get_CurrentColorResolution()
extern void Device_get_CurrentColorResolution_m10757EC29BA03E872DEEE909971336AB108307B2 (void);
// 0x00000028 System.Void Microsoft.Azure.Kinect.Sensor.Device::set_CurrentColorResolution(Microsoft.Azure.Kinect.Sensor.ColorResolution)
extern void Device_set_CurrentColorResolution_m83F5C6BBD118221C0FAB5BEFD69214EE23D0B22D (void);
// 0x00000029 System.Int32 Microsoft.Azure.Kinect.Sensor.Device::GetInstalledCount()
extern void Device_GetInstalledCount_mF81E965EFD15956ABF78582E2438FFE0190C14E4 (void);
// 0x0000002A Microsoft.Azure.Kinect.Sensor.Device Microsoft.Azure.Kinect.Sensor.Device::Open(System.Int32)
extern void Device_Open_mB3B8B1B5F3B3470DE1339181A56F8A054BE1AEB6 (void);
// 0x0000002B Microsoft.Azure.Kinect.Sensor.Calibration Microsoft.Azure.Kinect.Sensor.Device::GetCalibration(Microsoft.Azure.Kinect.Sensor.DepthMode,Microsoft.Azure.Kinect.Sensor.ColorResolution)
extern void Device_GetCalibration_m670D3BDB981748774CC5A8045EE92DF950F55724 (void);
// 0x0000002C Microsoft.Azure.Kinect.Sensor.Calibration Microsoft.Azure.Kinect.Sensor.Device::GetCalibration()
extern void Device_GetCalibration_m7810CDE7BED72CE6E51662779B63E2593ED6D295 (void);
// 0x0000002D Microsoft.Azure.Kinect.Sensor.Capture Microsoft.Azure.Kinect.Sensor.Device::GetCapture(System.TimeSpan)
extern void Device_GetCapture_mE90DDF15B2687D90EDC0DAAEB07A2DA6F5D5716D (void);
// 0x0000002E Microsoft.Azure.Kinect.Sensor.ImuSample Microsoft.Azure.Kinect.Sensor.Device::GetImuSample(System.TimeSpan)
extern void Device_GetImuSample_m6F23D4B56569C967D57012D636B7B49567DC16E9 (void);
// 0x0000002F System.Void Microsoft.Azure.Kinect.Sensor.Device::StartCameras(Microsoft.Azure.Kinect.Sensor.DeviceConfiguration)
extern void Device_StartCameras_m9008EA7B8357D501B58E944D2EE993C70E2B1902 (void);
// 0x00000030 System.Void Microsoft.Azure.Kinect.Sensor.Device::StopCameras()
extern void Device_StopCameras_m5F761CAA7F796BE35C4AA82FD00DAC1F55CBA2D0 (void);
// 0x00000031 System.Void Microsoft.Azure.Kinect.Sensor.Device::StartImu()
extern void Device_StartImu_m9A8D7267A0D26F2670EEA2E5E9E87D57D4C5B351 (void);
// 0x00000032 System.Void Microsoft.Azure.Kinect.Sensor.Device::StopImu()
extern void Device_StopImu_m721716C29D359B730AC9E3D51D3273282EE2480A (void);
// 0x00000033 System.Void Microsoft.Azure.Kinect.Sensor.Device::Dispose()
extern void Device_Dispose_m0E96E6B1F4F3F81E1146654FE42783F7E49EA694 (void);
// 0x00000034 System.Void Microsoft.Azure.Kinect.Sensor.Device::Dispose(System.Boolean)
extern void Device_Dispose_mE9610ADAA6581CCC507BA2176168FCCB278FB250 (void);
// 0x00000035 Microsoft.Azure.Kinect.Sensor.NativeMethods/k4a_result_t Microsoft.Azure.Kinect.Sensor.Device::<StartImu>b__35_0()
extern void Device_U3CStartImuU3Eb__35_0_m15F65E0B9EFCB4A33F9DA4D4BBBA5466B82A415D (void);
// 0x00000036 System.Void Microsoft.Azure.Kinect.Sensor.Device/<>c__DisplayClass6_0::.ctor()
extern void U3CU3Ec__DisplayClass6_0__ctor_m4C4B9251F9FD0E5B6DCBB27F26BCC111A8131181 (void);
// 0x00000037 Microsoft.Azure.Kinect.Sensor.NativeMethods/k4a_buffer_result_t Microsoft.Azure.Kinect.Sensor.Device/<>c__DisplayClass6_0::<get_SerialNum>b__0()
extern void U3CU3Ec__DisplayClass6_0_U3Cget_SerialNumU3Eb__0_m29BE9AEB08EB85D7794A5F3024C3889DA2538CE7 (void);
// 0x00000038 System.Void Microsoft.Azure.Kinect.Sensor.Device/<>c__DisplayClass22_0::.ctor()
extern void U3CU3Ec__DisplayClass22_0__ctor_m1A39A2A2FFC982A1D1C78F8BAA77A3D809505372 (void);
// 0x00000039 Microsoft.Azure.Kinect.Sensor.NativeMethods/k4a_result_t Microsoft.Azure.Kinect.Sensor.Device/<>c__DisplayClass22_0::<Open>b__0()
extern void U3CU3Ec__DisplayClass22_0_U3COpenU3Eb__0_mC9F27A91A2924DDE01B5AD6E873F8835495C66A5 (void);
// 0x0000003A System.Void Microsoft.Azure.Kinect.Sensor.Device/<>c__DisplayClass23_0::.ctor()
extern void U3CU3Ec__DisplayClass23_0__ctor_mC04C984113742591A96F68061AB6ACDE43D4FE3F (void);
// 0x0000003B System.Void Microsoft.Azure.Kinect.Sensor.Device/<>c__DisplayClass23_1::.ctor()
extern void U3CU3Ec__DisplayClass23_1__ctor_m9D6B88B5F335AF128B805A47224DBF63A1F6D535 (void);
// 0x0000003C Microsoft.Azure.Kinect.Sensor.NativeMethods/k4a_result_t Microsoft.Azure.Kinect.Sensor.Device/<>c__DisplayClass23_1::<GetCalibration>b__0()
extern void U3CU3Ec__DisplayClass23_1_U3CGetCalibrationU3Eb__0_m8E36773E1D17152D91927CBEE90D906C620ED365 (void);
// 0x0000003D System.Void Microsoft.Azure.Kinect.Sensor.Device/<>c__DisplayClass33_0::.ctor()
extern void U3CU3Ec__DisplayClass33_0__ctor_m8727EEA3468BAA0C4B64329AE704F43083902178 (void);
// 0x0000003E Microsoft.Azure.Kinect.Sensor.NativeMethods/k4a_result_t Microsoft.Azure.Kinect.Sensor.Device/<>c__DisplayClass33_0::<StartCameras>b__0()
extern void U3CU3Ec__DisplayClass33_0_U3CStartCamerasU3Eb__0_m67F64D160FCEE119DF22EE9D229871AE274F1944 (void);
// 0x0000003F Microsoft.Azure.Kinect.Sensor.ImageFormat Microsoft.Azure.Kinect.Sensor.DeviceConfiguration::get_ColorFormat()
extern void DeviceConfiguration_get_ColorFormat_m74B67CB21E0C1649D0EF0B12AE426183E9A463B6 (void);
// 0x00000040 System.Void Microsoft.Azure.Kinect.Sensor.DeviceConfiguration::set_ColorFormat(Microsoft.Azure.Kinect.Sensor.ImageFormat)
extern void DeviceConfiguration_set_ColorFormat_m54D9BF7C766BB305634C17B5FA7DE46D7795F314 (void);
// 0x00000041 Microsoft.Azure.Kinect.Sensor.ColorResolution Microsoft.Azure.Kinect.Sensor.DeviceConfiguration::get_ColorResolution()
extern void DeviceConfiguration_get_ColorResolution_m6F800AE43C9BF9DA2786D006A684A4556489B632 (void);
// 0x00000042 System.Void Microsoft.Azure.Kinect.Sensor.DeviceConfiguration::set_ColorResolution(Microsoft.Azure.Kinect.Sensor.ColorResolution)
extern void DeviceConfiguration_set_ColorResolution_m74F06BB4A589C39604DAD830A8ECE75DF39B3662 (void);
// 0x00000043 Microsoft.Azure.Kinect.Sensor.DepthMode Microsoft.Azure.Kinect.Sensor.DeviceConfiguration::get_DepthMode()
extern void DeviceConfiguration_get_DepthMode_m53C1A2F7DB471D16A253E507911B68C22984368D (void);
// 0x00000044 System.Void Microsoft.Azure.Kinect.Sensor.DeviceConfiguration::set_DepthMode(Microsoft.Azure.Kinect.Sensor.DepthMode)
extern void DeviceConfiguration_set_DepthMode_mF9C80FC88D819F6A8D379CD650936C090CA73F80 (void);
// 0x00000045 Microsoft.Azure.Kinect.Sensor.FPS Microsoft.Azure.Kinect.Sensor.DeviceConfiguration::get_CameraFPS()
extern void DeviceConfiguration_get_CameraFPS_m853C2CCE0D545539A6A3A29A3CECF4A49FD870A3 (void);
// 0x00000046 System.Void Microsoft.Azure.Kinect.Sensor.DeviceConfiguration::set_CameraFPS(Microsoft.Azure.Kinect.Sensor.FPS)
extern void DeviceConfiguration_set_CameraFPS_mABDB8391CE64BF8857C3D243227835A7F5C70B71 (void);
// 0x00000047 System.Boolean Microsoft.Azure.Kinect.Sensor.DeviceConfiguration::get_SynchronizedImagesOnly()
extern void DeviceConfiguration_get_SynchronizedImagesOnly_m688A6CFFD3E66E27BFD77AB79E12E94E11487D35 (void);
// 0x00000048 System.Void Microsoft.Azure.Kinect.Sensor.DeviceConfiguration::set_SynchronizedImagesOnly(System.Boolean)
extern void DeviceConfiguration_set_SynchronizedImagesOnly_m6FA21641B831275FCB6EEE2A2F3C0869F690114A (void);
// 0x00000049 System.TimeSpan Microsoft.Azure.Kinect.Sensor.DeviceConfiguration::get_DepthDelayOffColor()
extern void DeviceConfiguration_get_DepthDelayOffColor_m40E5BDAAEBE75A6BFFD6D76F3E4D96B6488E5D82 (void);
// 0x0000004A Microsoft.Azure.Kinect.Sensor.WiredSyncMode Microsoft.Azure.Kinect.Sensor.DeviceConfiguration::get_WiredSyncMode()
extern void DeviceConfiguration_get_WiredSyncMode_mDC2ABF4463A3DCF3BF808FAF6DEB1A2587B75EBC (void);
// 0x0000004B System.Void Microsoft.Azure.Kinect.Sensor.DeviceConfiguration::set_WiredSyncMode(Microsoft.Azure.Kinect.Sensor.WiredSyncMode)
extern void DeviceConfiguration_set_WiredSyncMode_mBEA66EFEFAE477ABDFF6984E34BCA6FEA0822F9E (void);
// 0x0000004C System.TimeSpan Microsoft.Azure.Kinect.Sensor.DeviceConfiguration::get_SuboridinateDelayOffMaster()
extern void DeviceConfiguration_get_SuboridinateDelayOffMaster_m52384CC5901EA133E0094DAA91CB0604F73CD845 (void);
// 0x0000004D System.Void Microsoft.Azure.Kinect.Sensor.DeviceConfiguration::set_SuboridinateDelayOffMaster(System.TimeSpan)
extern void DeviceConfiguration_set_SuboridinateDelayOffMaster_m4ACA0F49F3C4B4BD7B81283CDCE0A5BDF9A9FB1A (void);
// 0x0000004E System.Boolean Microsoft.Azure.Kinect.Sensor.DeviceConfiguration::get_DisableStreamingIndicator()
extern void DeviceConfiguration_get_DisableStreamingIndicator_m5B7387356694513B57F6595336E92D577E5CD18D (void);
// 0x0000004F Microsoft.Azure.Kinect.Sensor.NativeMethods/k4a_device_configuration_t Microsoft.Azure.Kinect.Sensor.DeviceConfiguration::GetNativeConfiguration()
extern void DeviceConfiguration_GetNativeConfiguration_m44312D35F6ACA5327008F39DFBABD093C4156C75 (void);
// 0x00000050 System.Void Microsoft.Azure.Kinect.Sensor.DeviceConfiguration::.ctor()
extern void DeviceConfiguration__ctor_m522C8BD0CEB509FB05547507B91537D7580DCAE6 (void);
// 0x00000051 System.Void Microsoft.Azure.Kinect.Sensor.AzureKinectException::.ctor()
extern void AzureKinectException__ctor_m560DF33E31D3434B98138CB43AFC37B54B11B633 (void);
// 0x00000052 System.Void Microsoft.Azure.Kinect.Sensor.AzureKinectException::.ctor(System.String)
extern void AzureKinectException__ctor_m7D941D339F0CA43FE6722C1DA6A14049A485D2FD (void);
// 0x00000053 System.Void Microsoft.Azure.Kinect.Sensor.AzureKinectException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern void AzureKinectException__ctor_mDCFD6163B2BD2E5897BFFE57383E97731AE170D6 (void);
// 0x00000054 System.Void Microsoft.Azure.Kinect.Sensor.AzureKinectException::.ctor(System.String,System.Collections.Generic.ICollection`1<Microsoft.Azure.Kinect.Sensor.LogMessage>)
extern void AzureKinectException__ctor_m2A03D42EA352B735393ADF5F3BCE587427C2A6D9 (void);
// 0x00000055 System.Void Microsoft.Azure.Kinect.Sensor.AzureKinectException::ThrowIfNotSuccess(System.Func`1<T>)
// 0x00000056 System.Void Microsoft.Azure.Kinect.Sensor.AzureKinectException::ThrowIfNotSuccess(Microsoft.Azure.Kinect.Sensor.LoggingTracer,T)
// 0x00000057 System.Void Microsoft.Azure.Kinect.Sensor.AzureKinectException::ThrowIfNotSuccess(T)
// 0x00000058 System.Boolean Microsoft.Azure.Kinect.Sensor.AzureKinectException::IsSuccess(T)
// 0x00000059 System.Boolean Microsoft.Azure.Kinect.Sensor.AzureKinectException::IsSuccess(Microsoft.Azure.Kinect.Sensor.NativeMethods/k4a_result_t)
extern void AzureKinectException_IsSuccess_mA19190F945F3C5E671648669EAD13FE82AE8CF1C (void);
// 0x0000005A System.Boolean Microsoft.Azure.Kinect.Sensor.AzureKinectException::IsSuccess(Microsoft.Azure.Kinect.Sensor.NativeMethods/k4a_wait_result_t)
extern void AzureKinectException_IsSuccess_m459F78D7310F2840158042D05DC1DFF2BF437AF9 (void);
// 0x0000005B System.Boolean Microsoft.Azure.Kinect.Sensor.AzureKinectException::IsSuccess(Microsoft.Azure.Kinect.Sensor.NativeMethods/k4a_buffer_result_t)
extern void AzureKinectException_IsSuccess_mD572D4C4C670AAB25E36625AF656704504B163F2 (void);
// 0x0000005C System.Boolean Microsoft.Azure.Kinect.Sensor.AzureKinectException::IsSuccess(Microsoft.Azure.Kinect.Sensor.NativeMethods/k4a_stream_result_t)
extern void AzureKinectException_IsSuccess_mB32A2D1DDF49F416E5B0F7D8E8F95AC0807E5DE8 (void);
// 0x0000005D System.Void Microsoft.Azure.Kinect.Sensor.AzureKinectOpenDeviceException::.ctor()
extern void AzureKinectOpenDeviceException__ctor_mCF33956A1F645C29AE55A41DBEE36EA8267E4CF3 (void);
// 0x0000005E System.Void Microsoft.Azure.Kinect.Sensor.AzureKinectOpenDeviceException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern void AzureKinectOpenDeviceException__ctor_mE5307958BD89EB446BA3E2E97BD05031177A0EF7 (void);
// 0x0000005F System.Void Microsoft.Azure.Kinect.Sensor.AzureKinectOpenDeviceException::.ctor(System.String,System.Collections.Generic.ICollection`1<Microsoft.Azure.Kinect.Sensor.LogMessage>)
extern void AzureKinectOpenDeviceException__ctor_m2CE39FE7F1FE2CF0A58055B08F490AF88B4D6115 (void);
// 0x00000060 System.Void Microsoft.Azure.Kinect.Sensor.AzureKinectOpenDeviceException::ThrowIfNotSuccess(System.Func`1<T>)
// 0x00000061 System.Void Microsoft.Azure.Kinect.Sensor.AzureKinectStartCamerasException::.ctor()
extern void AzureKinectStartCamerasException__ctor_mD18CAB2D4A35232D3C774B006ACB18D43393EEAB (void);
// 0x00000062 System.Void Microsoft.Azure.Kinect.Sensor.AzureKinectStartCamerasException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern void AzureKinectStartCamerasException__ctor_m6A0E3E4D07F28777483A8AF5A162102F50437E97 (void);
// 0x00000063 System.Void Microsoft.Azure.Kinect.Sensor.AzureKinectStartCamerasException::.ctor(System.String,System.Collections.Generic.ICollection`1<Microsoft.Azure.Kinect.Sensor.LogMessage>)
extern void AzureKinectStartCamerasException__ctor_m96A40D66A463131E497DACAD1307AAF919B5A231 (void);
// 0x00000064 System.Void Microsoft.Azure.Kinect.Sensor.AzureKinectStartCamerasException::ThrowIfNotSuccess(System.Func`1<T>)
// 0x00000065 System.Void Microsoft.Azure.Kinect.Sensor.AzureKinectStartImuException::.ctor()
extern void AzureKinectStartImuException__ctor_mDEFC31C65D9E8C043BEFBAA1183DC5AEE3683C9F (void);
// 0x00000066 System.Void Microsoft.Azure.Kinect.Sensor.AzureKinectStartImuException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern void AzureKinectStartImuException__ctor_mF536B5929F074C8BDEF5C429A0D9AD9B13D22D19 (void);
// 0x00000067 System.Void Microsoft.Azure.Kinect.Sensor.AzureKinectStartImuException::.ctor(System.String,System.Collections.Generic.ICollection`1<Microsoft.Azure.Kinect.Sensor.LogMessage>)
extern void AzureKinectStartImuException__ctor_mC568CA507AE6EBAD7E5D8D35E9E26CD69E3AC136 (void);
// 0x00000068 System.Void Microsoft.Azure.Kinect.Sensor.AzureKinectStartImuException::ThrowIfNotSuccess(System.Func`1<T>)
// 0x00000069 System.Boolean Microsoft.Azure.Kinect.Sensor.Extrinsics::Equals(System.Object)
extern void Extrinsics_Equals_mE6BE22F4367643DE91BD9CD0CB93252492B56747 (void);
// 0x0000006A System.Boolean Microsoft.Azure.Kinect.Sensor.Extrinsics::Equals(Microsoft.Azure.Kinect.Sensor.Extrinsics)
extern void Extrinsics_Equals_m0C17C635841579DE9BA4E0567C1A168D06FC074D (void);
// 0x0000006B System.Int32 Microsoft.Azure.Kinect.Sensor.Extrinsics::GetHashCode()
extern void Extrinsics_GetHashCode_m810B26F7B976DEF2BAFF17B4B5E17AB3F90670B2 (void);
// 0x0000006C System.Void Microsoft.Azure.Kinect.Sensor.Image::.ctor(Microsoft.Azure.Kinect.Sensor.ImageFormat,System.Int32,System.Int32,System.Int32)
extern void Image__ctor_m90ED7E0405AC8A26FA2ADF0C561A8C110D165388 (void);
// 0x0000006D System.Void Microsoft.Azure.Kinect.Sensor.Image::.ctor(Microsoft.Azure.Kinect.Sensor.NativeMethods/k4a_image_t)
extern void Image__ctor_m7F91393DEF01AC6E50BA4C6ED778E037DC50FB34 (void);
// 0x0000006E System.Void Microsoft.Azure.Kinect.Sensor.Image::Finalize()
extern void Image_Finalize_m78224BFEDAF4756AE3FBDA3A0868B83C20A1A46F (void);
// 0x0000006F Microsoft.Azure.Kinect.Sensor.ImageFormat Microsoft.Azure.Kinect.Sensor.Image::get_Format()
extern void Image_get_Format_m6ADF8C0C38F985BAD84CA5C1CDDE5928BE5EAF5F (void);
// 0x00000070 System.Int32 Microsoft.Azure.Kinect.Sensor.Image::get_HeightPixels()
extern void Image_get_HeightPixels_m9E27E4604B2D497114A1A51EE1766872CC4B5E80 (void);
// 0x00000071 System.Int32 Microsoft.Azure.Kinect.Sensor.Image::get_WidthPixels()
extern void Image_get_WidthPixels_m4F000CC5DDD9C8732FF139DA8FD381CCE79ED943 (void);
// 0x00000072 System.Int32 Microsoft.Azure.Kinect.Sensor.Image::get_StrideBytes()
extern void Image_get_StrideBytes_mBCC87264A872E903760F409CEDB5780A955F9B35 (void);
// 0x00000073 System.Int64 Microsoft.Azure.Kinect.Sensor.Image::get_Size()
extern void Image_get_Size_mA2AA1FF840ECE0F08548039EE084366395E4F104 (void);
// 0x00000074 System.TimeSpan Microsoft.Azure.Kinect.Sensor.Image::get_DeviceTimestamp()
extern void Image_get_DeviceTimestamp_m5338B3814FBC85FE34815026FBA9BA5315CD6205 (void);
// 0x00000075 System.Void Microsoft.Azure.Kinect.Sensor.Image::CopyBytesFrom(System.IntPtr,System.Int32,System.Int32)
extern void Image_CopyBytesFrom_mEE6E5B4646465076908674507F8E2C104705B890 (void);
// 0x00000076 System.Void Microsoft.Azure.Kinect.Sensor.Image::CopyBytesFrom(System.Void*,System.Int32,System.Int32,System.Int32,System.Int32)
extern void Image_CopyBytesFrom_m1871A15395456154BAE50745491ED9933FED4A50 (void);
// 0x00000077 System.IntPtr Microsoft.Azure.Kinect.Sensor.Image::GetBuffer()
extern void Image_GetBuffer_m715A8161A62F6898FE0120E113BFB2475AC52442 (void);
// 0x00000078 Microsoft.Azure.Kinect.Sensor.Image Microsoft.Azure.Kinect.Sensor.Image::Reference()
extern void Image_Reference_mFF146CCD46FE337D9F0E8559308CF3710347A1A2 (void);
// 0x00000079 System.Void Microsoft.Azure.Kinect.Sensor.Image::Dispose()
extern void Image_Dispose_mDCFA3273D40D3F0439B746D8F785F9FC5363B675 (void);
// 0x0000007A System.Void* Microsoft.Azure.Kinect.Sensor.Image::GetUnsafeBuffer()
extern void Image_GetUnsafeBuffer_mCE0AC7F0CAA4171CC4318D517976FED5A2F820B7 (void);
// 0x0000007B System.Void Microsoft.Azure.Kinect.Sensor.Image::FlushMemory()
extern void Image_FlushMemory_m818D8CBF057D2304566E84F20AA53BFEE097700C (void);
// 0x0000007C System.Void Microsoft.Azure.Kinect.Sensor.Image::InvalidateMemory()
extern void Image_InvalidateMemory_mE27ADF89BD2B6FF5BDB5A78E0952E9BBD3203F5E (void);
// 0x0000007D Microsoft.Azure.Kinect.Sensor.NativeMethods/k4a_image_t Microsoft.Azure.Kinect.Sensor.Image::DangerousGetHandle()
extern void Image_DangerousGetHandle_mA472FD2376511FD0981FA028BD0967AF29A22A92 (void);
// 0x0000007E System.Void Microsoft.Azure.Kinect.Sensor.Image::Dispose(System.Boolean)
extern void Image_Dispose_m9E92CACB2588C78CC1255FE72E529B83284EBEAA (void);
// 0x0000007F System.Void Microsoft.Azure.Kinect.Sensor.Image/<>c__DisplayClass8_0::.ctor()
extern void U3CU3Ec__DisplayClass8_0__ctor_m24F7D8504EECA64EB19837D0050E6A090AF18615 (void);
// 0x00000080 Microsoft.Azure.Kinect.Sensor.NativeMethods/k4a_result_t Microsoft.Azure.Kinect.Sensor.Image/<>c__DisplayClass8_0::<.ctor>b__0()
extern void U3CU3Ec__DisplayClass8_0_U3C_ctorU3Eb__0_mD3D90311B0E76C1C635EF4B9AD3A9394EDBC3514 (void);
// 0x00000081 System.Void Microsoft.Azure.Kinect.Sensor.ImuSample::set_Temperature(System.Single)
extern void ImuSample_set_Temperature_mB3275FB9E57789ADC3D97618EF7E948F5A5A64FE (void);
// 0x00000082 System.Numerics.Vector3 Microsoft.Azure.Kinect.Sensor.ImuSample::get_AccelerometerSample()
extern void ImuSample_get_AccelerometerSample_m724954D4DEFAFDB382CE9D55DA3CE0C6A26C1D68 (void);
// 0x00000083 System.Void Microsoft.Azure.Kinect.Sensor.ImuSample::set_AccelerometerSample(System.Numerics.Vector3)
extern void ImuSample_set_AccelerometerSample_mB13A05EB24F75502F1F339622177F18C4448A316 (void);
// 0x00000084 System.TimeSpan Microsoft.Azure.Kinect.Sensor.ImuSample::get_AccelerometerTimestamp()
extern void ImuSample_get_AccelerometerTimestamp_mD65121906F6764BFCF9DE8576BB948BBD4894E9D (void);
// 0x00000085 System.Void Microsoft.Azure.Kinect.Sensor.ImuSample::set_AccelerometerTimestamp(System.TimeSpan)
extern void ImuSample_set_AccelerometerTimestamp_m8F1FC7AD272315990FE352287B104CBD838F9655 (void);
// 0x00000086 System.Numerics.Vector3 Microsoft.Azure.Kinect.Sensor.ImuSample::get_GyroSample()
extern void ImuSample_get_GyroSample_m8ABDD62707E7A33E3133F45E78C1472AD65AA59D (void);
// 0x00000087 System.Void Microsoft.Azure.Kinect.Sensor.ImuSample::set_GyroSample(System.Numerics.Vector3)
extern void ImuSample_set_GyroSample_m8309DD6A107896E4850D387B13E17D59C048D0F2 (void);
// 0x00000088 System.Void Microsoft.Azure.Kinect.Sensor.ImuSample::set_GyroTimestamp(System.TimeSpan)
extern void ImuSample_set_GyroTimestamp_m3D93533225013A0FF6F3B068BBFF56C1A620FAA1 (void);
// 0x00000089 System.Void Microsoft.Azure.Kinect.Sensor.ImuSample::.ctor()
extern void ImuSample__ctor_m21C200ECD4E4B8BF6C72683C9478EFC81CEC192F (void);
// 0x0000008A System.Boolean Microsoft.Azure.Kinect.Sensor.Intrinsics::Equals(System.Object)
extern void Intrinsics_Equals_m810D7FF24233A6A20B629747D76FD97012D1BBC5 (void);
// 0x0000008B System.Boolean Microsoft.Azure.Kinect.Sensor.Intrinsics::Equals(Microsoft.Azure.Kinect.Sensor.Intrinsics)
extern void Intrinsics_Equals_mA3D3F61A2BA6D21740BBE624E1F0A3E3E5E05E8C (void);
// 0x0000008C System.Int32 Microsoft.Azure.Kinect.Sensor.Intrinsics::GetHashCode()
extern void Intrinsics_GetHashCode_mE5E6D6591242546E0AC14A0A0B0078FB989E2405 (void);
// 0x0000008D System.Void Microsoft.Azure.Kinect.Sensor.Logger::add_LogMessageHandlers(System.Action`1<Microsoft.Azure.Kinect.Sensor.LogMessage>)
extern void Logger_add_LogMessageHandlers_m1C113906E85CE9404E499A39BFE5F0AAFA2D8AD6 (void);
// 0x0000008E System.Void Microsoft.Azure.Kinect.Sensor.Logger::remove_LogMessageHandlers(System.Action`1<Microsoft.Azure.Kinect.Sensor.LogMessage>)
extern void Logger_remove_LogMessageHandlers_m5884FAB5F7614DC8AF590136BC88ACA2993B43BE (void);
// 0x0000008F System.Void Microsoft.Azure.Kinect.Sensor.Logger::add_LogMessage(System.Action`1<Microsoft.Azure.Kinect.Sensor.LogMessage>)
extern void Logger_add_LogMessage_mE4EAC1F7BE7A0C096D43480FBD2DC783583FCC54 (void);
// 0x00000090 System.Void Microsoft.Azure.Kinect.Sensor.Logger::remove_LogMessage(System.Action`1<Microsoft.Azure.Kinect.Sensor.LogMessage>)
extern void Logger_remove_LogMessage_mD68C7E7D3A0F0C5194720A9F0F5F99AB0631E103 (void);
// 0x00000091 System.Void Microsoft.Azure.Kinect.Sensor.Logger::Initialize()
extern void Logger_Initialize_mE9A4BBFD00AF1D6D7AE5A1C0EE325C6F8CBA27D7 (void);
// 0x00000092 System.Void Microsoft.Azure.Kinect.Sensor.Logger::OnDebugMessage(System.IntPtr,Microsoft.Azure.Kinect.Sensor.LogLevel,System.String,System.Int32,System.String)
extern void Logger_OnDebugMessage_m51F67A9B23BE08511844BD1B232BBF8A29394B9E (void);
// 0x00000093 System.Void Microsoft.Azure.Kinect.Sensor.Logger::CurrentDomain_Exit(System.Object,System.EventArgs)
extern void Logger_CurrentDomain_Exit_mFD7334F123DCB4177B0C8D7679997B3EA49D1326 (void);
// 0x00000094 System.Void Microsoft.Azure.Kinect.Sensor.Logger::.cctor()
extern void Logger__cctor_m9EF4E58612767FDFF66989990123E7181D76B682 (void);
// 0x00000095 System.Void Microsoft.Azure.Kinect.Sensor.MonoPInvokeCallbackAttribute::.ctor(System.Type)
extern void MonoPInvokeCallbackAttribute__ctor_m4B5031EAC8BD7C3C3A5909FC7028842C0F81848D (void);
// 0x00000096 System.Void Microsoft.Azure.Kinect.Sensor.LogMessage::.ctor(System.DateTime,Microsoft.Azure.Kinect.Sensor.LogLevel,System.String,System.Int32,System.String)
extern void LogMessage__ctor_mCB5716D54558F8826AED70CD151D5D358DAA7822 (void);
// 0x00000097 System.String Microsoft.Azure.Kinect.Sensor.LogMessage::get_Message()
extern void LogMessage_get_Message_mB11B4156EC551025384A89A9DFF2298BEBC8C455 (void);
// 0x00000098 System.String Microsoft.Azure.Kinect.Sensor.LogMessage::ToString()
extern void LogMessage_ToString_m1568741E7A505CE40D1A380A1A252241DA5BBD0D (void);
// 0x00000099 System.Void Microsoft.Azure.Kinect.Sensor.LoggingTracer::.ctor()
extern void LoggingTracer__ctor_m800C33A40DDAB9E3E8AB153C59F5340C032D0D96 (void);
// 0x0000009A System.Collections.Generic.IList`1<Microsoft.Azure.Kinect.Sensor.LogMessage> Microsoft.Azure.Kinect.Sensor.LoggingTracer::get_LogMessages()
extern void LoggingTracer_get_LogMessages_m81489CB503C1C30514CE818912F766C55E093B3E (void);
// 0x0000009B System.Void Microsoft.Azure.Kinect.Sensor.LoggingTracer::Dispose()
extern void LoggingTracer_Dispose_mDD8F56428A40304F52B2D1119DB88912701949BA (void);
// 0x0000009C System.Void Microsoft.Azure.Kinect.Sensor.LoggingTracer::Dispose(System.Boolean)
extern void LoggingTracer_Dispose_m4B320A6747352F959C12B8F064AB42EEFF27D654 (void);
// 0x0000009D System.Void Microsoft.Azure.Kinect.Sensor.LoggingTracer::Logger_LogMessage(Microsoft.Azure.Kinect.Sensor.LogMessage)
extern void LoggingTracer_Logger_LogMessage_mE421ECCB53208F0F34704A5A00F144464B3F91F6 (void);
// 0x0000009E Microsoft.Azure.Kinect.Sensor.NativeMethods/k4a_result_t Microsoft.Azure.Kinect.Sensor.NativeMethods::k4a_calibration_2d_to_3d(Microsoft.Azure.Kinect.Sensor.Calibration&,System.Numerics.Vector2&,System.Single,Microsoft.Azure.Kinect.Sensor.CalibrationDeviceType,Microsoft.Azure.Kinect.Sensor.CalibrationDeviceType,System.Numerics.Vector3&,System.Boolean&)
extern void NativeMethods_k4a_calibration_2d_to_3d_m986259402179BD7C1B2C1C0F7DB5299546FA317F (void);
// 0x0000009F Microsoft.Azure.Kinect.Sensor.NativeMethods/k4a_result_t Microsoft.Azure.Kinect.Sensor.NativeMethods::k4a_calibration_3d_to_2d(Microsoft.Azure.Kinect.Sensor.Calibration&,System.Numerics.Vector3&,Microsoft.Azure.Kinect.Sensor.CalibrationDeviceType,Microsoft.Azure.Kinect.Sensor.CalibrationDeviceType,System.Numerics.Vector2&,System.Boolean&)
extern void NativeMethods_k4a_calibration_3d_to_2d_mBEB5B3F828C3D4FFF5E324693FC01117C80D8D41 (void);
// 0x000000A0 Microsoft.Azure.Kinect.Sensor.NativeMethods/k4a_transformation_t Microsoft.Azure.Kinect.Sensor.NativeMethods::k4a_transformation_create(Microsoft.Azure.Kinect.Sensor.Calibration&)
extern void NativeMethods_k4a_transformation_create_m70C01ECF958310A2F44FC161BCF26A3A7F939012 (void);
// 0x000000A1 System.Void Microsoft.Azure.Kinect.Sensor.NativeMethods::k4a_transformation_destroy(System.IntPtr)
extern void NativeMethods_k4a_transformation_destroy_m589DAFAC4D6ED9B41A3490D8BBABCF50C6B27ED3 (void);
// 0x000000A2 Microsoft.Azure.Kinect.Sensor.NativeMethods/k4a_result_t Microsoft.Azure.Kinect.Sensor.NativeMethods::k4a_transformation_depth_image_to_color_camera(Microsoft.Azure.Kinect.Sensor.NativeMethods/k4a_transformation_t,Microsoft.Azure.Kinect.Sensor.NativeMethods/k4a_image_t,Microsoft.Azure.Kinect.Sensor.NativeMethods/k4a_image_t)
extern void NativeMethods_k4a_transformation_depth_image_to_color_camera_m7D37A7553B5606E80621A61F9EB8F95B61888B69 (void);
// 0x000000A3 Microsoft.Azure.Kinect.Sensor.NativeMethods/k4a_result_t Microsoft.Azure.Kinect.Sensor.NativeMethods::k4a_transformation_depth_image_to_color_camera_custom(Microsoft.Azure.Kinect.Sensor.NativeMethods/k4a_transformation_t,Microsoft.Azure.Kinect.Sensor.NativeMethods/k4a_image_t,Microsoft.Azure.Kinect.Sensor.NativeMethods/k4a_image_t,Microsoft.Azure.Kinect.Sensor.NativeMethods/k4a_image_t,Microsoft.Azure.Kinect.Sensor.NativeMethods/k4a_image_t,Microsoft.Azure.Kinect.Sensor.TransformationInterpolationType,System.UInt32)
extern void NativeMethods_k4a_transformation_depth_image_to_color_camera_custom_m48C8B23C00C66BB3837CA9AA3840F13F1A4CFFC9 (void);
// 0x000000A4 Microsoft.Azure.Kinect.Sensor.NativeMethods/k4a_result_t Microsoft.Azure.Kinect.Sensor.NativeMethods::k4a_transformation_color_image_to_depth_camera(Microsoft.Azure.Kinect.Sensor.NativeMethods/k4a_transformation_t,Microsoft.Azure.Kinect.Sensor.NativeMethods/k4a_image_t,Microsoft.Azure.Kinect.Sensor.NativeMethods/k4a_image_t,Microsoft.Azure.Kinect.Sensor.NativeMethods/k4a_image_t)
extern void NativeMethods_k4a_transformation_color_image_to_depth_camera_m64D8A1C0B0EBCB81C5348FCB0DBA096C57B91DC0 (void);
// 0x000000A5 System.Void Microsoft.Azure.Kinect.Sensor.NativeMethods::k4a_device_close(System.IntPtr)
extern void NativeMethods_k4a_device_close_m71F5A0D5A020E69C2E51C54D3654FC60174EBD0E (void);
// 0x000000A6 Microsoft.Azure.Kinect.Sensor.NativeMethods/k4a_image_t Microsoft.Azure.Kinect.Sensor.NativeMethods::k4a_capture_get_color_image(Microsoft.Azure.Kinect.Sensor.NativeMethods/k4a_capture_t)
extern void NativeMethods_k4a_capture_get_color_image_m00DF4466C0A508A1860966415B7440EC097E82A4 (void);
// 0x000000A7 Microsoft.Azure.Kinect.Sensor.NativeMethods/k4a_image_t Microsoft.Azure.Kinect.Sensor.NativeMethods::k4a_capture_get_depth_image(Microsoft.Azure.Kinect.Sensor.NativeMethods/k4a_capture_t)
extern void NativeMethods_k4a_capture_get_depth_image_m47F732CD7F8ECEA9366B937D20ED719D225A3F6D (void);
// 0x000000A8 Microsoft.Azure.Kinect.Sensor.NativeMethods/k4a_image_t Microsoft.Azure.Kinect.Sensor.NativeMethods::k4a_capture_get_ir_image(Microsoft.Azure.Kinect.Sensor.NativeMethods/k4a_capture_t)
extern void NativeMethods_k4a_capture_get_ir_image_m7742198F1D94BBC53BA4E5A0B0D9FE6EA26774E5 (void);
// 0x000000A9 System.Void Microsoft.Azure.Kinect.Sensor.NativeMethods::k4a_capture_release(System.IntPtr)
extern void NativeMethods_k4a_capture_release_mE63078CF8FE78AF591C93F3E740FE12FCC6C467A (void);
// 0x000000AA Microsoft.Azure.Kinect.Sensor.NativeMethods/k4a_result_t Microsoft.Azure.Kinect.Sensor.NativeMethods::k4a_image_create(Microsoft.Azure.Kinect.Sensor.ImageFormat,System.Int32,System.Int32,System.Int32,Microsoft.Azure.Kinect.Sensor.NativeMethods/k4a_image_t&)
extern void NativeMethods_k4a_image_create_m00DC30E490E2D92575406B57350EA73512FCD9DA (void);
// 0x000000AB System.Void Microsoft.Azure.Kinect.Sensor.NativeMethods::k4a_image_reference(System.IntPtr)
extern void NativeMethods_k4a_image_reference_mE998B6493F761335F69A126D87D77D9D6BEDC5EB (void);
// 0x000000AC System.Void Microsoft.Azure.Kinect.Sensor.NativeMethods::k4a_image_release(System.IntPtr)
extern void NativeMethods_k4a_image_release_m739AB71517D6DD172C6156D6A926AD411CC6F1B2 (void);
// 0x000000AD System.UInt32 Microsoft.Azure.Kinect.Sensor.NativeMethods::k4a_device_get_installed_count()
extern void NativeMethods_k4a_device_get_installed_count_m8456658F9CB001B02840D4F40A137A1FA6A3D81E (void);
// 0x000000AE Microsoft.Azure.Kinect.Sensor.NativeMethods/k4a_result_t Microsoft.Azure.Kinect.Sensor.NativeMethods::k4a_device_get_calibration(Microsoft.Azure.Kinect.Sensor.NativeMethods/k4a_device_t,Microsoft.Azure.Kinect.Sensor.DepthMode,Microsoft.Azure.Kinect.Sensor.ColorResolution,Microsoft.Azure.Kinect.Sensor.Calibration&)
extern void NativeMethods_k4a_device_get_calibration_m391D7CED7BFC6B6F8A06AABCCF97F3E67952885B (void);
// 0x000000AF Microsoft.Azure.Kinect.Sensor.NativeMethods/k4a_wait_result_t Microsoft.Azure.Kinect.Sensor.NativeMethods::k4a_device_get_capture(Microsoft.Azure.Kinect.Sensor.NativeMethods/k4a_device_t,Microsoft.Azure.Kinect.Sensor.NativeMethods/k4a_capture_t&,System.Int32)
extern void NativeMethods_k4a_device_get_capture_m287BF1EEF3F1E3E5A6A04BB0F4FB17B882F9A809 (void);
// 0x000000B0 Microsoft.Azure.Kinect.Sensor.NativeMethods/k4a_wait_result_t Microsoft.Azure.Kinect.Sensor.NativeMethods::k4a_device_get_imu_sample(Microsoft.Azure.Kinect.Sensor.NativeMethods/k4a_device_t,Microsoft.Azure.Kinect.Sensor.NativeMethods/k4a_imu_sample_t,System.Int32)
extern void NativeMethods_k4a_device_get_imu_sample_m9C938611A3028BA5C6DBC2F6AC9EDA2950520D38 (void);
// 0x000000B1 Microsoft.Azure.Kinect.Sensor.NativeMethods/k4a_result_t Microsoft.Azure.Kinect.Sensor.NativeMethods::k4a_device_start_cameras(Microsoft.Azure.Kinect.Sensor.NativeMethods/k4a_device_t,Microsoft.Azure.Kinect.Sensor.NativeMethods/k4a_device_configuration_t&)
extern void NativeMethods_k4a_device_start_cameras_mC4A88E46AE26B262A00A3F21BC87114BDC3AC2E4 (void);
// 0x000000B2 System.Void Microsoft.Azure.Kinect.Sensor.NativeMethods::k4a_device_stop_cameras(Microsoft.Azure.Kinect.Sensor.NativeMethods/k4a_device_t)
extern void NativeMethods_k4a_device_stop_cameras_mC7894C6B26B01BF2731400DAB49DE13FC7260F91 (void);
// 0x000000B3 Microsoft.Azure.Kinect.Sensor.NativeMethods/k4a_result_t Microsoft.Azure.Kinect.Sensor.NativeMethods::k4a_device_start_imu(Microsoft.Azure.Kinect.Sensor.NativeMethods/k4a_device_t)
extern void NativeMethods_k4a_device_start_imu_m5A0C1ADECBF5476809DD1B3E1F9996279B52FBCE (void);
// 0x000000B4 System.Void Microsoft.Azure.Kinect.Sensor.NativeMethods::k4a_device_stop_imu(Microsoft.Azure.Kinect.Sensor.NativeMethods/k4a_device_t)
extern void NativeMethods_k4a_device_stop_imu_m67A7349ADA5F32EECCE8D6F3077FD2C22BBD5EDD (void);
// 0x000000B5 Microsoft.Azure.Kinect.Sensor.NativeMethods/k4a_result_t Microsoft.Azure.Kinect.Sensor.NativeMethods::k4a_device_open(System.UInt32,Microsoft.Azure.Kinect.Sensor.NativeMethods/k4a_device_t&)
extern void NativeMethods_k4a_device_open_mCB4F816A3AE786EF743D1019015191E3290545EF (void);
// 0x000000B6 Microsoft.Azure.Kinect.Sensor.NativeMethods/k4a_buffer_result_t Microsoft.Azure.Kinect.Sensor.NativeMethods::k4a_device_get_serialnum(Microsoft.Azure.Kinect.Sensor.NativeMethods/k4a_device_t,System.Text.StringBuilder,System.UIntPtr&)
extern void NativeMethods_k4a_device_get_serialnum_mBE0A10F86E5B25D1B9AA719DF8EBDF96F5DF7146 (void);
// 0x000000B7 Microsoft.Azure.Kinect.Sensor.ImageFormat Microsoft.Azure.Kinect.Sensor.NativeMethods::k4a_image_get_format(Microsoft.Azure.Kinect.Sensor.NativeMethods/k4a_image_t)
extern void NativeMethods_k4a_image_get_format_mF500450E2C328C6B444726D40925CB067BDBB379 (void);
// 0x000000B8 System.Int32 Microsoft.Azure.Kinect.Sensor.NativeMethods::k4a_image_get_height_pixels(Microsoft.Azure.Kinect.Sensor.NativeMethods/k4a_image_t)
extern void NativeMethods_k4a_image_get_height_pixels_mB275D7F132F9DB9A4C49D495A7AA4B9E6CA2A30F (void);
// 0x000000B9 System.Int32 Microsoft.Azure.Kinect.Sensor.NativeMethods::k4a_image_get_width_pixels(Microsoft.Azure.Kinect.Sensor.NativeMethods/k4a_image_t)
extern void NativeMethods_k4a_image_get_width_pixels_m1CAC4E924F26AE3E851BBB160F7BFDB1E25B2D29 (void);
// 0x000000BA System.Int32 Microsoft.Azure.Kinect.Sensor.NativeMethods::k4a_image_get_stride_bytes(Microsoft.Azure.Kinect.Sensor.NativeMethods/k4a_image_t)
extern void NativeMethods_k4a_image_get_stride_bytes_m905E7CA4EE0B9910DBAFDE27A51FC32CC714342F (void);
// 0x000000BB System.UIntPtr Microsoft.Azure.Kinect.Sensor.NativeMethods::k4a_image_get_size(Microsoft.Azure.Kinect.Sensor.NativeMethods/k4a_image_t)
extern void NativeMethods_k4a_image_get_size_mC53CE52DDFC4365048AE04205A7E5B6D49887D3E (void);
// 0x000000BC System.UInt64 Microsoft.Azure.Kinect.Sensor.NativeMethods::k4a_image_get_device_timestamp_usec(Microsoft.Azure.Kinect.Sensor.NativeMethods/k4a_image_t)
extern void NativeMethods_k4a_image_get_device_timestamp_usec_mE1A0DF6958F0117D0BAFE3E78EFC6A5E7896072F (void);
// 0x000000BD System.IntPtr Microsoft.Azure.Kinect.Sensor.NativeMethods::k4a_image_get_buffer(Microsoft.Azure.Kinect.Sensor.NativeMethods/k4a_image_t)
extern void NativeMethods_k4a_image_get_buffer_m616EFB06FA8C99C1D7B7A08F6F9088A3DBE1A956 (void);
// 0x000000BE Microsoft.Azure.Kinect.Sensor.NativeMethods/k4a_result_t Microsoft.Azure.Kinect.Sensor.NativeMethods::k4a_set_debug_message_handler(Microsoft.Azure.Kinect.Sensor.NativeMethods/k4a_logging_message_cb_t,System.IntPtr,Microsoft.Azure.Kinect.Sensor.LogLevel)
extern void NativeMethods_k4a_set_debug_message_handler_mED3E8FC82607DD19F9442FAD985B54D766A35A24 (void);
// 0x000000BF Microsoft.Azure.Kinect.Sensor.NativeMethods/k4a_result_t Microsoft.Azure.Kinect.Sensor.NativeMethods::k4a_playback_open(System.String,System.IntPtr&)
extern void NativeMethods_k4a_playback_open_m624434F1F9E4D643C9EB73BD04BED7BF19FCC74D (void);
// 0x000000C0 Microsoft.Azure.Kinect.Sensor.NativeMethods/k4a_result_t Microsoft.Azure.Kinect.Sensor.NativeMethods::k4a_playback_get_calibration(System.IntPtr,Microsoft.Azure.Kinect.Sensor.Calibration&)
extern void NativeMethods_k4a_playback_get_calibration_mBE386F62F2C9CD4BFDD33C322A0D5223D0A21833 (void);
// 0x000000C1 Microsoft.Azure.Kinect.Sensor.NativeMethods/k4a_result_t Microsoft.Azure.Kinect.Sensor.NativeMethods::k4a_playback_get_record_configuration(System.IntPtr,Microsoft.Azure.Kinect.Sensor.k4a_record_configuration_t&)
extern void NativeMethods_k4a_playback_get_record_configuration_m3F2BD8AB54173C71A25E8F69CFDBA6041BE4056C (void);
// 0x000000C2 Microsoft.Azure.Kinect.Sensor.NativeMethods/k4a_result_t Microsoft.Azure.Kinect.Sensor.NativeMethods::k4a_playback_set_color_conversion(System.IntPtr,Microsoft.Azure.Kinect.Sensor.ImageFormat)
extern void NativeMethods_k4a_playback_set_color_conversion_m81738E6504183A34A881F5ADF37FDFAFCB900995 (void);
// 0x000000C3 Microsoft.Azure.Kinect.Sensor.NativeMethods/k4a_stream_result_t Microsoft.Azure.Kinect.Sensor.NativeMethods::k4a_playback_get_next_capture(System.IntPtr,Microsoft.Azure.Kinect.Sensor.NativeMethods/k4a_capture_t&)
extern void NativeMethods_k4a_playback_get_next_capture_mB9E2D89D46349EAEE51094A25CC61C13647E93A2 (void);
// 0x000000C4 Microsoft.Azure.Kinect.Sensor.NativeMethods/k4a_result_t Microsoft.Azure.Kinect.Sensor.NativeMethods::k4a_playback_seek_timestamp(System.IntPtr,System.UInt64,Microsoft.Azure.Kinect.Sensor.PlaybackSeekOrigin)
extern void NativeMethods_k4a_playback_seek_timestamp_m6DA1E25B5D7B6667B8D01A2067A51A81A5C23941 (void);
// 0x000000C5 System.Void Microsoft.Azure.Kinect.Sensor.NativeMethods::k4a_playback_close(System.IntPtr)
extern void NativeMethods_k4a_playback_close_mE2C5C78F07DE0C21E38BCF6BC4D6D4B849B3DA31 (void);
// 0x000000C6 Microsoft.Azure.Kinect.Sensor.NativeMethods/k4a_result_t Microsoft.Azure.Kinect.Sensor.NativeMethods::k4abt_tracker_create(Microsoft.Azure.Kinect.Sensor.Calibration&,Microsoft.Azure.Kinect.Sensor.k4abt_tracker_configuration_t&,System.IntPtr&)
extern void NativeMethods_k4abt_tracker_create_m77DC6D417568952907EA2E7C3A52C3DF9F654EC1 (void);
// 0x000000C7 System.Void Microsoft.Azure.Kinect.Sensor.NativeMethods::k4abt_tracker_destroy(System.IntPtr)
extern void NativeMethods_k4abt_tracker_destroy_m1D38215EBE672BA3EAE996EC37D17DAF30298FE5 (void);
// 0x000000C8 System.Void Microsoft.Azure.Kinect.Sensor.NativeMethods::k4abt_tracker_set_temporal_smoothing(System.IntPtr,System.Single)
extern void NativeMethods_k4abt_tracker_set_temporal_smoothing_m191D76A97F8FB7B08A87A45C90A7323D562B3445 (void);
// 0x000000C9 Microsoft.Azure.Kinect.Sensor.NativeMethods/k4a_wait_result_t Microsoft.Azure.Kinect.Sensor.NativeMethods::k4abt_tracker_enqueue_capture(System.IntPtr,Microsoft.Azure.Kinect.Sensor.NativeMethods/k4a_capture_t,System.Int32)
extern void NativeMethods_k4abt_tracker_enqueue_capture_m48B79A65CE1FD547F6F16420B38753C8F7259462 (void);
// 0x000000CA Microsoft.Azure.Kinect.Sensor.NativeMethods/k4a_wait_result_t Microsoft.Azure.Kinect.Sensor.NativeMethods::k4abt_tracker_pop_result(System.IntPtr,System.IntPtr&,System.Int32)
extern void NativeMethods_k4abt_tracker_pop_result_m7872C7B8A86AD7F5A9E816116648049D1F7D57D8 (void);
// 0x000000CB System.Void Microsoft.Azure.Kinect.Sensor.NativeMethods::k4abt_tracker_shutdown(System.IntPtr)
extern void NativeMethods_k4abt_tracker_shutdown_mC9AD2AFCCC4210B9AD8725FD9077105B5E54B6C5 (void);
// 0x000000CC System.Void Microsoft.Azure.Kinect.Sensor.NativeMethods::k4abt_frame_release(System.IntPtr)
extern void NativeMethods_k4abt_frame_release_m3CBDE00E19E938FA1C2A3CBF3A7AAFFBEEF50011 (void);
// 0x000000CD System.UInt32 Microsoft.Azure.Kinect.Sensor.NativeMethods::k4abt_frame_get_num_bodies(System.IntPtr)
extern void NativeMethods_k4abt_frame_get_num_bodies_m7BAEBB842511A0E3C28A8F11A4D8144FE2F8A6AA (void);
// 0x000000CE Microsoft.Azure.Kinect.Sensor.NativeMethods/k4a_result_t Microsoft.Azure.Kinect.Sensor.NativeMethods::k4abt_frame_get_body_skeleton(System.IntPtr,System.UInt32,Microsoft.Azure.Kinect.Sensor.k4abt_skeleton_t&)
extern void NativeMethods_k4abt_frame_get_body_skeleton_mA173FFF0EFA966ECD3E5F0B7517EE7114B2B2225 (void);
// 0x000000CF System.UInt32 Microsoft.Azure.Kinect.Sensor.NativeMethods::k4abt_frame_get_body_id(System.IntPtr,System.UInt32)
extern void NativeMethods_k4abt_frame_get_body_id_m30801D1B0AE0708B0F96185620D96B0C2BBD9DBB (void);
// 0x000000D0 System.UInt64 Microsoft.Azure.Kinect.Sensor.NativeMethods::k4abt_frame_get_device_timestamp_usec(System.IntPtr)
extern void NativeMethods_k4abt_frame_get_device_timestamp_usec_m5A9B44906B99C1EA683590C69838E8CCBADFC161 (void);
// 0x000000D1 Microsoft.Azure.Kinect.Sensor.NativeMethods/k4a_image_t Microsoft.Azure.Kinect.Sensor.NativeMethods::k4abt_frame_get_body_index_map(System.IntPtr)
extern void NativeMethods_k4abt_frame_get_body_index_map_m12E056CC95E8C4AFB2ECBEA9B27D6622B04E0B7E (void);
// 0x000000D2 Microsoft.Azure.Kinect.Sensor.NativeMethods/k4a_capture_t Microsoft.Azure.Kinect.Sensor.NativeMethods::k4abt_frame_get_capture(System.IntPtr)
extern void NativeMethods_k4abt_frame_get_capture_mB6A25395E837EBDDB3B432436076B49ADFC4B4A8 (void);
// 0x000000D3 System.Void Microsoft.Azure.Kinect.Sensor.NativeMethods/k4a_logging_message_cb_t::.ctor(System.Object,System.IntPtr)
extern void k4a_logging_message_cb_t__ctor_m0EC9603B26E390BBE9F8B3E74A6D747A5310A3C4 (void);
// 0x000000D4 System.Void Microsoft.Azure.Kinect.Sensor.NativeMethods/k4a_logging_message_cb_t::Invoke(System.IntPtr,Microsoft.Azure.Kinect.Sensor.LogLevel,System.String,System.Int32,System.String)
extern void k4a_logging_message_cb_t_Invoke_m56228F317ADCB8F0C95864F973B6539335AA3D99 (void);
// 0x000000D5 System.Void Microsoft.Azure.Kinect.Sensor.NativeMethods/k4a_device_t::.ctor()
extern void k4a_device_t__ctor_mDA3147A081E23DC9367F750DD3CA3E73ABC93F34 (void);
// 0x000000D6 System.Boolean Microsoft.Azure.Kinect.Sensor.NativeMethods/k4a_device_t::ReleaseHandle()
extern void k4a_device_t_ReleaseHandle_mFE2902D1DCA0F35CB8D07ECED965FDEF2D5C38DA (void);
// 0x000000D7 System.Void Microsoft.Azure.Kinect.Sensor.NativeMethods/k4a_capture_t::.ctor()
extern void k4a_capture_t__ctor_m819BBE396295691F394193535D78FE70988ACA20 (void);
// 0x000000D8 System.Boolean Microsoft.Azure.Kinect.Sensor.NativeMethods/k4a_capture_t::ReleaseHandle()
extern void k4a_capture_t_ReleaseHandle_m73C972E4EDEA923E3BA084E06B05D72CD56A54E8 (void);
// 0x000000D9 System.Void Microsoft.Azure.Kinect.Sensor.NativeMethods/k4a_image_t::.ctor()
extern void k4a_image_t__ctor_mA1ACF6D7A8A7F78E5A586E688B735B7E0915E4D2 (void);
// 0x000000DA System.Void Microsoft.Azure.Kinect.Sensor.NativeMethods/k4a_image_t::.ctor(Microsoft.Azure.Kinect.Sensor.NativeMethods/k4a_image_t)
extern void k4a_image_t__ctor_mB3478400BC15F6B1EBA8B0A605DD97A09D0279EF (void);
// 0x000000DB Microsoft.Azure.Kinect.Sensor.NativeMethods/k4a_image_t Microsoft.Azure.Kinect.Sensor.NativeMethods/k4a_image_t::DuplicateReference()
extern void k4a_image_t_DuplicateReference_m62DB0D4102A12E31533ADA36A8910E26E6B0FD54 (void);
// 0x000000DC System.Boolean Microsoft.Azure.Kinect.Sensor.NativeMethods/k4a_image_t::ReleaseHandle()
extern void k4a_image_t_ReleaseHandle_mAE855BA4BDA6FA6FE92814BF81E59E694AB60FC7 (void);
// 0x000000DD System.Void Microsoft.Azure.Kinect.Sensor.NativeMethods/k4a_transformation_t::.ctor()
extern void k4a_transformation_t__ctor_m3E47C57A80F45AFC77D9517635D73A64E5AF11C2 (void);
// 0x000000DE System.Boolean Microsoft.Azure.Kinect.Sensor.NativeMethods/k4a_transformation_t::ReleaseHandle()
extern void k4a_transformation_t_ReleaseHandle_m98F166E6469BD6100FECCD99C2A51C88D700CEE7 (void);
// 0x000000DF System.Single Microsoft.Azure.Kinect.Sensor.NativeMethods/k4a_imu_sample_t::get_temperature()
extern void k4a_imu_sample_t_get_temperature_mBF1B6015F6D32DB2D7AC663DEDD947666108AC1E (void);
// 0x000000E0 System.Numerics.Vector3 Microsoft.Azure.Kinect.Sensor.NativeMethods/k4a_imu_sample_t::get_acc_sample()
extern void k4a_imu_sample_t_get_acc_sample_mC99DED701DEFD263D0B1AA2D6D73A93220FC2792 (void);
// 0x000000E1 System.UInt64 Microsoft.Azure.Kinect.Sensor.NativeMethods/k4a_imu_sample_t::get_acc_timestamp_usec()
extern void k4a_imu_sample_t_get_acc_timestamp_usec_m7A02ABF697914485EC8690C97058E4563509D01C (void);
// 0x000000E2 System.Numerics.Vector3 Microsoft.Azure.Kinect.Sensor.NativeMethods/k4a_imu_sample_t::get_gyro_sample()
extern void k4a_imu_sample_t_get_gyro_sample_mE73FDE30F4D1DCA5FE75D587CEDF35A7F0CAC066 (void);
// 0x000000E3 System.UInt64 Microsoft.Azure.Kinect.Sensor.NativeMethods/k4a_imu_sample_t::get_gyro_timestamp_usec()
extern void k4a_imu_sample_t_get_gyro_timestamp_usec_m4D5AEA2CA75353546D39B7149A498A985CF17C96 (void);
// 0x000000E4 Microsoft.Azure.Kinect.Sensor.ImuSample Microsoft.Azure.Kinect.Sensor.NativeMethods/k4a_imu_sample_t::ToImuSample()
extern void k4a_imu_sample_t_ToImuSample_m238195FCBB415B3FA57855C79105150F5ADC6881 (void);
// 0x000000E5 System.Void Microsoft.Azure.Kinect.Sensor.NativeMethods/k4a_imu_sample_t::.ctor()
extern void k4a_imu_sample_t__ctor_m6785ADECD130E433A8A84B962677928076F7A2A9 (void);
// 0x000000E6 System.Void Microsoft.Azure.Kinect.Sensor.k4abt_skeleton_t::.ctor(System.Int32)
extern void k4abt_skeleton_t__ctor_m0B8202070476168CA16BD4EA3080C73A4BF5C755 (void);
// 0x000000E7 System.Void Microsoft.Azure.Kinect.Sensor.Playback::.ctor(System.String)
extern void Playback__ctor_mED38CB4193351A054B8FCD55115E54E5E1E19A8C (void);
// 0x000000E8 System.Void Microsoft.Azure.Kinect.Sensor.Playback::OpenPlaybackFile(System.String)
extern void Playback_OpenPlaybackFile_mDE6E2EF6674F40419FD7A5EE51585C3B9AD6799D (void);
// 0x000000E9 Microsoft.Azure.Kinect.Sensor.Capture Microsoft.Azure.Kinect.Sensor.Playback::GetNextCapture()
extern void Playback_GetNextCapture_mB45E6261186265AB6F1A543E793BC0703F996C04 (void);
// 0x000000EA System.Boolean Microsoft.Azure.Kinect.Sensor.Playback::IsEndOfStream()
extern void Playback_IsEndOfStream_m5F24EE3368FD8AE92BD33A865A2A30FC8B8326F5 (void);
// 0x000000EB System.Boolean Microsoft.Azure.Kinect.Sensor.Playback::SeekTimestamp(System.UInt64)
extern void Playback_SeekTimestamp_m328FFD8ACC8214BDE221E8FE91ED97BE99254729 (void);
// 0x000000EC System.Void Microsoft.Azure.Kinect.Sensor.Playback::Dispose(System.Boolean)
extern void Playback_Dispose_mDB640A8C5F6A04AA31D5271363D192B5634BD65F (void);
// 0x000000ED System.Void Microsoft.Azure.Kinect.Sensor.Playback::Finalize()
extern void Playback_Finalize_mA728C84FFFBCF6421F6DC3755F77637BC659447A (void);
// 0x000000EE System.Void Microsoft.Azure.Kinect.Sensor.Playback::Dispose()
extern void Playback_Dispose_mC46BA97B5BBC73968DD52EFA67689C880C52F922 (void);
// 0x000000EF System.Void Microsoft.Azure.Kinect.Sensor.Transformation::.ctor(Microsoft.Azure.Kinect.Sensor.Calibration)
extern void Transformation__ctor_m7649C8B41A116783C171601D5E55AC8A2252C559 (void);
// 0x000000F0 System.Void Microsoft.Azure.Kinect.Sensor.Transformation::DepthImageToColorCamera(Microsoft.Azure.Kinect.Sensor.Image,Microsoft.Azure.Kinect.Sensor.Image)
extern void Transformation_DepthImageToColorCamera_mF72A010CF9DBBA71FCE3316A8F193F5F66B10BB7 (void);
// 0x000000F1 System.Void Microsoft.Azure.Kinect.Sensor.Transformation::DepthImageToColorCameraCustom(Microsoft.Azure.Kinect.Sensor.Image,Microsoft.Azure.Kinect.Sensor.Image,Microsoft.Azure.Kinect.Sensor.Image,Microsoft.Azure.Kinect.Sensor.Image,Microsoft.Azure.Kinect.Sensor.TransformationInterpolationType,System.UInt32)
extern void Transformation_DepthImageToColorCameraCustom_m284DAD90B2B940BC4B985D230C11421C05741592 (void);
// 0x000000F2 System.Void Microsoft.Azure.Kinect.Sensor.Transformation::ColorImageToDepthCamera(Microsoft.Azure.Kinect.Sensor.Image,Microsoft.Azure.Kinect.Sensor.Image,Microsoft.Azure.Kinect.Sensor.Image)
extern void Transformation_ColorImageToDepthCamera_mAF771DBA2AD073A62D9E529A362A84C381827F7E (void);
// 0x000000F3 System.Void Microsoft.Azure.Kinect.Sensor.Transformation::Dispose()
extern void Transformation_Dispose_m2A44FA199D8815677B65A99E767043D25C4C6803 (void);
// 0x000000F4 System.Void Microsoft.Azure.Kinect.Sensor.Transformation::Dispose(System.Boolean)
extern void Transformation_Dispose_m2E582845BC3CF4B7EA858D87EBE636DC4D3161F4 (void);
// 0x000000F5 System.Void Microsoft.Azure.Kinect.Sensor.Transformation/<>c__DisplayClass7_0::.ctor()
extern void U3CU3Ec__DisplayClass7_0__ctor_m0FA61A89B2D500CCC18EA3E0D34106B2BA77EE27 (void);
// 0x000000F6 System.Void Microsoft.Azure.Kinect.Sensor.Transformation/<>c__DisplayClass7_1::.ctor()
extern void U3CU3Ec__DisplayClass7_1__ctor_m3D5D776820CFAD1E8C0CF54C264E2067A18E80CC (void);
// 0x000000F7 Microsoft.Azure.Kinect.Sensor.NativeMethods/k4a_result_t Microsoft.Azure.Kinect.Sensor.Transformation/<>c__DisplayClass7_1::<DepthImageToColorCamera>b__0()
extern void U3CU3Ec__DisplayClass7_1_U3CDepthImageToColorCameraU3Eb__0_mAF1076C816D933107083D358BBAE1D4A4651F27C (void);
// 0x000000F8 System.Void Microsoft.Azure.Kinect.Sensor.Transformation/<>c__DisplayClass9_0::.ctor()
extern void U3CU3Ec__DisplayClass9_0__ctor_mE88BBF0D15D073872A4F18EDBCCF01907759BE67 (void);
// 0x000000F9 System.Void Microsoft.Azure.Kinect.Sensor.Transformation/<>c__DisplayClass9_1::.ctor()
extern void U3CU3Ec__DisplayClass9_1__ctor_mD2A28843C33EA157ABDE8E44F4799BF7A5004D91 (void);
// 0x000000FA System.Void Microsoft.Azure.Kinect.Sensor.Transformation/<>c__DisplayClass9_2::.ctor()
extern void U3CU3Ec__DisplayClass9_2__ctor_m6BBB6397A5951E18F777F9CF04740602EBABD151 (void);
// 0x000000FB System.Void Microsoft.Azure.Kinect.Sensor.Transformation/<>c__DisplayClass9_3::.ctor()
extern void U3CU3Ec__DisplayClass9_3__ctor_m38DEBFAE55C1CC24FE0A0CA0F8CF25B05D973273 (void);
// 0x000000FC System.Void Microsoft.Azure.Kinect.Sensor.Transformation/<>c__DisplayClass9_4::.ctor()
extern void U3CU3Ec__DisplayClass9_4__ctor_mD2C1953283DD5150689BED6570434AEBF87E98C9 (void);
// 0x000000FD Microsoft.Azure.Kinect.Sensor.NativeMethods/k4a_result_t Microsoft.Azure.Kinect.Sensor.Transformation/<>c__DisplayClass9_4::<DepthImageToColorCameraCustom>b__0()
extern void U3CU3Ec__DisplayClass9_4_U3CDepthImageToColorCameraCustomU3Eb__0_mCF2B9300B9AA987250CFBC5689B336A41A0308CB (void);
// 0x000000FE System.Void Microsoft.Azure.Kinect.Sensor.Transformation/<>c__DisplayClass13_0::.ctor()
extern void U3CU3Ec__DisplayClass13_0__ctor_m27CEA92C9BD457CD4BFCF65360A7081992453D10 (void);
// 0x000000FF System.Void Microsoft.Azure.Kinect.Sensor.Transformation/<>c__DisplayClass13_1::.ctor()
extern void U3CU3Ec__DisplayClass13_1__ctor_m0F34AC709E6392A2200C0E898057A1C3722E725A (void);
// 0x00000100 System.Void Microsoft.Azure.Kinect.Sensor.Transformation/<>c__DisplayClass13_2::.ctor()
extern void U3CU3Ec__DisplayClass13_2__ctor_m9644BD9E717055E78DCB7485774F6018660DDE47 (void);
// 0x00000101 Microsoft.Azure.Kinect.Sensor.NativeMethods/k4a_result_t Microsoft.Azure.Kinect.Sensor.Transformation/<>c__DisplayClass13_2::<ColorImageToDepthCamera>b__0()
extern void U3CU3Ec__DisplayClass13_2_U3CColorImageToDepthCameraU3Eb__0_m069495CEFD1B13B18403A150A98475CF13E2F3AF (void);
// 0x00000102 System.Void Microsoft.Azure.Kinect.Sensor.Native.NativeReferenceAttribute::.ctor()
extern void NativeReferenceAttribute__ctor_m95796A924CA6F31144EF4E7B8FFC3758F176DA3C (void);
// 0x00000103 System.Void Microsoft.Azure.Kinect.Sensor.Native.NativeReferenceAttribute::.ctor(System.String)
extern void NativeReferenceAttribute__ctor_m8E253F6C0CF5AE8D710E98715FAD4B1E7F9F0C19 (void);
// 0x00000104 System.Void Microsoft.Azure.Kinect.Sensor.Native.NativeReferenceAttribute::set_ReferenceName(System.String)
extern void NativeReferenceAttribute_set_ReferenceName_m07FB1F855C0E56FA278677A4C8AACA03CA51D751 (void);
static Il2CppMethodPointer s_methodPointers[260] = 
{
	BodyTracking__ctor_m40C72F20091BA32E6A725A09CC575C7B7DB24027,
	BodyTracking_SetTemporalSmoothing_m2A57F8FFF773ED7FE63A249434E1D47BB6CF9577,
	BodyTracking_GetSensorOrientationAngle_mD55A8FE8C7B185A6BA4B2AA9E6245F8C639CBCD9,
	BodyTracking_EnqueueCapture_mF106F641B7C7DFCA67FE89C31D2142D61B9DA216,
	BodyTracking_PollBodyFrame_m7959F383423F9A4B8B2636D76A9B9DD391594CA1,
	BodyTracking_ShutdownBodyTracker_m3A6F7DF243F1D1E22F59E14C9D370FCE1B44CD6B,
	BodyTracking_ReleaseBodyFrame_m21919272F1BAB659F0912C1CF39DE809F7775E98,
	BodyTracking_GetNumberOfBodies_m8C3736575BD493699F9514B78CA04B7BF71E3C5D,
	BodyTracking_GetBodyId_mF8E2BB6B5D1AC00312F31A40A68CC928D7882F38,
	BodyTracking_CreateBodySkeleton_mB43D185CA149443700609F04A143815A1711C3C4,
	BodyTracking_GetBodySkeleton_m946283F476715A64E164DA21C8E5D3D02C510411,
	BodyTracking_GetBodyFrameTimestampUsec_m4F326F8063CE7ABE69CCF3FF16EDCC2EA320D5B1,
	BodyTracking_GetBodyIndexMap_mDA4DFCEF1EFD20FEA00922017E5CF9C404B7CFE5,
	BodyTracking_GetCapture_m0BF546A443C37665493E047BF86E03B36DFDB41C,
	BodyTracking_Dispose_m95090FC64120954FC9ECF897D7B161A30597787E,
	BodyTracking_Finalize_m7FFB60F427E22D75F8B4602670AF58FAB72F889E,
	BodyTracking_Dispose_mDC7990CBF2CAE32DDCA56A52938598C97FF88365,
	Calibration_TransformTo3D_mBE16FDE91D28AC521C2977ABABD22AB25FC3DF3E,
	Calibration_TransformTo2D_mD6D7A844F49DF2D2501F98A2F923B3D5ABF5B070,
	Calibration_CreateTransformation_mFF374A7E9913B285ED67AB9F4A73BC48961997CC,
	Calibration_Equals_m6F5126408C375DEA0BDBF42FD753EE40B6534E49,
	Calibration_Equals_m920DA4A69370C90B1453BD4AAEE7123130DC40E1,
	Calibration_GetHashCode_m79108213DFE3457A7B34CE1F7AFF58EEBD8676F9,
	CameraCalibration_Equals_m02E56112450EE5AF37497FF7454B2B4F9C75E4CE,
	CameraCalibration_Equals_m15C307F171CF0847D54CF4F7BE04F9246F633575,
	CameraCalibration_GetHashCode_m20976B888D06FC8B68C6BD7E06E08E0A88AD1618,
	Capture__ctor_m067A1FE7CDED303ABFFAB4AD8F5F3CFD618B1AD8,
	Capture_get_Color_m94B2E5C5AA059DF4EBBDD991F013F97D0F7E77DC,
	Capture_get_Depth_m5D78EDE12253664CEECE57964DC1737024293385,
	Capture_get_IR_m9592E779ACCB4AFD53164BE822A7BC081A32A15E,
	Capture_Dispose_m8FFDF006CC200960D381D776C2B230B7B66A2EAA,
	Capture_DangerousGetHandle_m9FACB2DA122144F20DC93DF907592A392E1EF0B3,
	Capture_Dispose_m17E015983FF9031475D8F8766A02BB3E771BE6AA,
	Capture_UpdateImageWrapperAndDisposePrevious_mABB19271210211F7FF0806EBAB839BFA5618F95F,
	Device__ctor_m5C48DDA20F7B9236C7E043220F85E9A2AA087392,
	Device_get_SerialNum_m6DE42B28D124AFDF2AF0B514FEA9FD6D2F3D4453,
	Device_get_CurrentDepthMode_mBBB7D0B91C8B5146412D8876347FA1F4D707496C,
	Device_set_CurrentDepthMode_m2F01BBC8B7507E1961B53316D8C3E143E90D4CBC,
	Device_get_CurrentColorResolution_m10757EC29BA03E872DEEE909971336AB108307B2,
	Device_set_CurrentColorResolution_m83F5C6BBD118221C0FAB5BEFD69214EE23D0B22D,
	Device_GetInstalledCount_mF81E965EFD15956ABF78582E2438FFE0190C14E4,
	Device_Open_mB3B8B1B5F3B3470DE1339181A56F8A054BE1AEB6,
	Device_GetCalibration_m670D3BDB981748774CC5A8045EE92DF950F55724,
	Device_GetCalibration_m7810CDE7BED72CE6E51662779B63E2593ED6D295,
	Device_GetCapture_mE90DDF15B2687D90EDC0DAAEB07A2DA6F5D5716D,
	Device_GetImuSample_m6F23D4B56569C967D57012D636B7B49567DC16E9,
	Device_StartCameras_m9008EA7B8357D501B58E944D2EE993C70E2B1902,
	Device_StopCameras_m5F761CAA7F796BE35C4AA82FD00DAC1F55CBA2D0,
	Device_StartImu_m9A8D7267A0D26F2670EEA2E5E9E87D57D4C5B351,
	Device_StopImu_m721716C29D359B730AC9E3D51D3273282EE2480A,
	Device_Dispose_m0E96E6B1F4F3F81E1146654FE42783F7E49EA694,
	Device_Dispose_mE9610ADAA6581CCC507BA2176168FCCB278FB250,
	Device_U3CStartImuU3Eb__35_0_m15F65E0B9EFCB4A33F9DA4D4BBBA5466B82A415D,
	U3CU3Ec__DisplayClass6_0__ctor_m4C4B9251F9FD0E5B6DCBB27F26BCC111A8131181,
	U3CU3Ec__DisplayClass6_0_U3Cget_SerialNumU3Eb__0_m29BE9AEB08EB85D7794A5F3024C3889DA2538CE7,
	U3CU3Ec__DisplayClass22_0__ctor_m1A39A2A2FFC982A1D1C78F8BAA77A3D809505372,
	U3CU3Ec__DisplayClass22_0_U3COpenU3Eb__0_mC9F27A91A2924DDE01B5AD6E873F8835495C66A5,
	U3CU3Ec__DisplayClass23_0__ctor_mC04C984113742591A96F68061AB6ACDE43D4FE3F,
	U3CU3Ec__DisplayClass23_1__ctor_m9D6B88B5F335AF128B805A47224DBF63A1F6D535,
	U3CU3Ec__DisplayClass23_1_U3CGetCalibrationU3Eb__0_m8E36773E1D17152D91927CBEE90D906C620ED365,
	U3CU3Ec__DisplayClass33_0__ctor_m8727EEA3468BAA0C4B64329AE704F43083902178,
	U3CU3Ec__DisplayClass33_0_U3CStartCamerasU3Eb__0_m67F64D160FCEE119DF22EE9D229871AE274F1944,
	DeviceConfiguration_get_ColorFormat_m74B67CB21E0C1649D0EF0B12AE426183E9A463B6,
	DeviceConfiguration_set_ColorFormat_m54D9BF7C766BB305634C17B5FA7DE46D7795F314,
	DeviceConfiguration_get_ColorResolution_m6F800AE43C9BF9DA2786D006A684A4556489B632,
	DeviceConfiguration_set_ColorResolution_m74F06BB4A589C39604DAD830A8ECE75DF39B3662,
	DeviceConfiguration_get_DepthMode_m53C1A2F7DB471D16A253E507911B68C22984368D,
	DeviceConfiguration_set_DepthMode_mF9C80FC88D819F6A8D379CD650936C090CA73F80,
	DeviceConfiguration_get_CameraFPS_m853C2CCE0D545539A6A3A29A3CECF4A49FD870A3,
	DeviceConfiguration_set_CameraFPS_mABDB8391CE64BF8857C3D243227835A7F5C70B71,
	DeviceConfiguration_get_SynchronizedImagesOnly_m688A6CFFD3E66E27BFD77AB79E12E94E11487D35,
	DeviceConfiguration_set_SynchronizedImagesOnly_m6FA21641B831275FCB6EEE2A2F3C0869F690114A,
	DeviceConfiguration_get_DepthDelayOffColor_m40E5BDAAEBE75A6BFFD6D76F3E4D96B6488E5D82,
	DeviceConfiguration_get_WiredSyncMode_mDC2ABF4463A3DCF3BF808FAF6DEB1A2587B75EBC,
	DeviceConfiguration_set_WiredSyncMode_mBEA66EFEFAE477ABDFF6984E34BCA6FEA0822F9E,
	DeviceConfiguration_get_SuboridinateDelayOffMaster_m52384CC5901EA133E0094DAA91CB0604F73CD845,
	DeviceConfiguration_set_SuboridinateDelayOffMaster_m4ACA0F49F3C4B4BD7B81283CDCE0A5BDF9A9FB1A,
	DeviceConfiguration_get_DisableStreamingIndicator_m5B7387356694513B57F6595336E92D577E5CD18D,
	DeviceConfiguration_GetNativeConfiguration_m44312D35F6ACA5327008F39DFBABD093C4156C75,
	DeviceConfiguration__ctor_m522C8BD0CEB509FB05547507B91537D7580DCAE6,
	AzureKinectException__ctor_m560DF33E31D3434B98138CB43AFC37B54B11B633,
	AzureKinectException__ctor_m7D941D339F0CA43FE6722C1DA6A14049A485D2FD,
	AzureKinectException__ctor_mDCFD6163B2BD2E5897BFFE57383E97731AE170D6,
	AzureKinectException__ctor_m2A03D42EA352B735393ADF5F3BCE587427C2A6D9,
	NULL,
	NULL,
	NULL,
	NULL,
	AzureKinectException_IsSuccess_mA19190F945F3C5E671648669EAD13FE82AE8CF1C,
	AzureKinectException_IsSuccess_m459F78D7310F2840158042D05DC1DFF2BF437AF9,
	AzureKinectException_IsSuccess_mD572D4C4C670AAB25E36625AF656704504B163F2,
	AzureKinectException_IsSuccess_mB32A2D1DDF49F416E5B0F7D8E8F95AC0807E5DE8,
	AzureKinectOpenDeviceException__ctor_mCF33956A1F645C29AE55A41DBEE36EA8267E4CF3,
	AzureKinectOpenDeviceException__ctor_mE5307958BD89EB446BA3E2E97BD05031177A0EF7,
	AzureKinectOpenDeviceException__ctor_m2CE39FE7F1FE2CF0A58055B08F490AF88B4D6115,
	NULL,
	AzureKinectStartCamerasException__ctor_mD18CAB2D4A35232D3C774B006ACB18D43393EEAB,
	AzureKinectStartCamerasException__ctor_m6A0E3E4D07F28777483A8AF5A162102F50437E97,
	AzureKinectStartCamerasException__ctor_m96A40D66A463131E497DACAD1307AAF919B5A231,
	NULL,
	AzureKinectStartImuException__ctor_mDEFC31C65D9E8C043BEFBAA1183DC5AEE3683C9F,
	AzureKinectStartImuException__ctor_mF536B5929F074C8BDEF5C429A0D9AD9B13D22D19,
	AzureKinectStartImuException__ctor_mC568CA507AE6EBAD7E5D8D35E9E26CD69E3AC136,
	NULL,
	Extrinsics_Equals_mE6BE22F4367643DE91BD9CD0CB93252492B56747,
	Extrinsics_Equals_m0C17C635841579DE9BA4E0567C1A168D06FC074D,
	Extrinsics_GetHashCode_m810B26F7B976DEF2BAFF17B4B5E17AB3F90670B2,
	Image__ctor_m90ED7E0405AC8A26FA2ADF0C561A8C110D165388,
	Image__ctor_m7F91393DEF01AC6E50BA4C6ED778E037DC50FB34,
	Image_Finalize_m78224BFEDAF4756AE3FBDA3A0868B83C20A1A46F,
	Image_get_Format_m6ADF8C0C38F985BAD84CA5C1CDDE5928BE5EAF5F,
	Image_get_HeightPixels_m9E27E4604B2D497114A1A51EE1766872CC4B5E80,
	Image_get_WidthPixels_m4F000CC5DDD9C8732FF139DA8FD381CCE79ED943,
	Image_get_StrideBytes_mBCC87264A872E903760F409CEDB5780A955F9B35,
	Image_get_Size_mA2AA1FF840ECE0F08548039EE084366395E4F104,
	Image_get_DeviceTimestamp_m5338B3814FBC85FE34815026FBA9BA5315CD6205,
	Image_CopyBytesFrom_mEE6E5B4646465076908674507F8E2C104705B890,
	Image_CopyBytesFrom_m1871A15395456154BAE50745491ED9933FED4A50,
	Image_GetBuffer_m715A8161A62F6898FE0120E113BFB2475AC52442,
	Image_Reference_mFF146CCD46FE337D9F0E8559308CF3710347A1A2,
	Image_Dispose_mDCFA3273D40D3F0439B746D8F785F9FC5363B675,
	Image_GetUnsafeBuffer_mCE0AC7F0CAA4171CC4318D517976FED5A2F820B7,
	Image_FlushMemory_m818D8CBF057D2304566E84F20AA53BFEE097700C,
	Image_InvalidateMemory_mE27ADF89BD2B6FF5BDB5A78E0952E9BBD3203F5E,
	Image_DangerousGetHandle_mA472FD2376511FD0981FA028BD0967AF29A22A92,
	Image_Dispose_m9E92CACB2588C78CC1255FE72E529B83284EBEAA,
	U3CU3Ec__DisplayClass8_0__ctor_m24F7D8504EECA64EB19837D0050E6A090AF18615,
	U3CU3Ec__DisplayClass8_0_U3C_ctorU3Eb__0_mD3D90311B0E76C1C635EF4B9AD3A9394EDBC3514,
	ImuSample_set_Temperature_mB3275FB9E57789ADC3D97618EF7E948F5A5A64FE,
	ImuSample_get_AccelerometerSample_m724954D4DEFAFDB382CE9D55DA3CE0C6A26C1D68,
	ImuSample_set_AccelerometerSample_mB13A05EB24F75502F1F339622177F18C4448A316,
	ImuSample_get_AccelerometerTimestamp_mD65121906F6764BFCF9DE8576BB948BBD4894E9D,
	ImuSample_set_AccelerometerTimestamp_m8F1FC7AD272315990FE352287B104CBD838F9655,
	ImuSample_get_GyroSample_m8ABDD62707E7A33E3133F45E78C1472AD65AA59D,
	ImuSample_set_GyroSample_m8309DD6A107896E4850D387B13E17D59C048D0F2,
	ImuSample_set_GyroTimestamp_m3D93533225013A0FF6F3B068BBFF56C1A620FAA1,
	ImuSample__ctor_m21C200ECD4E4B8BF6C72683C9478EFC81CEC192F,
	Intrinsics_Equals_m810D7FF24233A6A20B629747D76FD97012D1BBC5,
	Intrinsics_Equals_mA3D3F61A2BA6D21740BBE624E1F0A3E3E5E05E8C,
	Intrinsics_GetHashCode_mE5E6D6591242546E0AC14A0A0B0078FB989E2405,
	Logger_add_LogMessageHandlers_m1C113906E85CE9404E499A39BFE5F0AAFA2D8AD6,
	Logger_remove_LogMessageHandlers_m5884FAB5F7614DC8AF590136BC88ACA2993B43BE,
	Logger_add_LogMessage_mE4EAC1F7BE7A0C096D43480FBD2DC783583FCC54,
	Logger_remove_LogMessage_mD68C7E7D3A0F0C5194720A9F0F5F99AB0631E103,
	Logger_Initialize_mE9A4BBFD00AF1D6D7AE5A1C0EE325C6F8CBA27D7,
	Logger_OnDebugMessage_m51F67A9B23BE08511844BD1B232BBF8A29394B9E,
	Logger_CurrentDomain_Exit_mFD7334F123DCB4177B0C8D7679997B3EA49D1326,
	Logger__cctor_m9EF4E58612767FDFF66989990123E7181D76B682,
	MonoPInvokeCallbackAttribute__ctor_m4B5031EAC8BD7C3C3A5909FC7028842C0F81848D,
	LogMessage__ctor_mCB5716D54558F8826AED70CD151D5D358DAA7822,
	LogMessage_get_Message_mB11B4156EC551025384A89A9DFF2298BEBC8C455,
	LogMessage_ToString_m1568741E7A505CE40D1A380A1A252241DA5BBD0D,
	LoggingTracer__ctor_m800C33A40DDAB9E3E8AB153C59F5340C032D0D96,
	LoggingTracer_get_LogMessages_m81489CB503C1C30514CE818912F766C55E093B3E,
	LoggingTracer_Dispose_mDD8F56428A40304F52B2D1119DB88912701949BA,
	LoggingTracer_Dispose_m4B320A6747352F959C12B8F064AB42EEFF27D654,
	LoggingTracer_Logger_LogMessage_mE421ECCB53208F0F34704A5A00F144464B3F91F6,
	NativeMethods_k4a_calibration_2d_to_3d_m986259402179BD7C1B2C1C0F7DB5299546FA317F,
	NativeMethods_k4a_calibration_3d_to_2d_mBEB5B3F828C3D4FFF5E324693FC01117C80D8D41,
	NativeMethods_k4a_transformation_create_m70C01ECF958310A2F44FC161BCF26A3A7F939012,
	NativeMethods_k4a_transformation_destroy_m589DAFAC4D6ED9B41A3490D8BBABCF50C6B27ED3,
	NativeMethods_k4a_transformation_depth_image_to_color_camera_m7D37A7553B5606E80621A61F9EB8F95B61888B69,
	NativeMethods_k4a_transformation_depth_image_to_color_camera_custom_m48C8B23C00C66BB3837CA9AA3840F13F1A4CFFC9,
	NativeMethods_k4a_transformation_color_image_to_depth_camera_m64D8A1C0B0EBCB81C5348FCB0DBA096C57B91DC0,
	NativeMethods_k4a_device_close_m71F5A0D5A020E69C2E51C54D3654FC60174EBD0E,
	NativeMethods_k4a_capture_get_color_image_m00DF4466C0A508A1860966415B7440EC097E82A4,
	NativeMethods_k4a_capture_get_depth_image_m47F732CD7F8ECEA9366B937D20ED719D225A3F6D,
	NativeMethods_k4a_capture_get_ir_image_m7742198F1D94BBC53BA4E5A0B0D9FE6EA26774E5,
	NativeMethods_k4a_capture_release_mE63078CF8FE78AF591C93F3E740FE12FCC6C467A,
	NativeMethods_k4a_image_create_m00DC30E490E2D92575406B57350EA73512FCD9DA,
	NativeMethods_k4a_image_reference_mE998B6493F761335F69A126D87D77D9D6BEDC5EB,
	NativeMethods_k4a_image_release_m739AB71517D6DD172C6156D6A926AD411CC6F1B2,
	NativeMethods_k4a_device_get_installed_count_m8456658F9CB001B02840D4F40A137A1FA6A3D81E,
	NativeMethods_k4a_device_get_calibration_m391D7CED7BFC6B6F8A06AABCCF97F3E67952885B,
	NativeMethods_k4a_device_get_capture_m287BF1EEF3F1E3E5A6A04BB0F4FB17B882F9A809,
	NativeMethods_k4a_device_get_imu_sample_m9C938611A3028BA5C6DBC2F6AC9EDA2950520D38,
	NativeMethods_k4a_device_start_cameras_mC4A88E46AE26B262A00A3F21BC87114BDC3AC2E4,
	NativeMethods_k4a_device_stop_cameras_mC7894C6B26B01BF2731400DAB49DE13FC7260F91,
	NativeMethods_k4a_device_start_imu_m5A0C1ADECBF5476809DD1B3E1F9996279B52FBCE,
	NativeMethods_k4a_device_stop_imu_m67A7349ADA5F32EECCE8D6F3077FD2C22BBD5EDD,
	NativeMethods_k4a_device_open_mCB4F816A3AE786EF743D1019015191E3290545EF,
	NativeMethods_k4a_device_get_serialnum_mBE0A10F86E5B25D1B9AA719DF8EBDF96F5DF7146,
	NativeMethods_k4a_image_get_format_mF500450E2C328C6B444726D40925CB067BDBB379,
	NativeMethods_k4a_image_get_height_pixels_mB275D7F132F9DB9A4C49D495A7AA4B9E6CA2A30F,
	NativeMethods_k4a_image_get_width_pixels_m1CAC4E924F26AE3E851BBB160F7BFDB1E25B2D29,
	NativeMethods_k4a_image_get_stride_bytes_m905E7CA4EE0B9910DBAFDE27A51FC32CC714342F,
	NativeMethods_k4a_image_get_size_mC53CE52DDFC4365048AE04205A7E5B6D49887D3E,
	NativeMethods_k4a_image_get_device_timestamp_usec_mE1A0DF6958F0117D0BAFE3E78EFC6A5E7896072F,
	NativeMethods_k4a_image_get_buffer_m616EFB06FA8C99C1D7B7A08F6F9088A3DBE1A956,
	NativeMethods_k4a_set_debug_message_handler_mED3E8FC82607DD19F9442FAD985B54D766A35A24,
	NativeMethods_k4a_playback_open_m624434F1F9E4D643C9EB73BD04BED7BF19FCC74D,
	NativeMethods_k4a_playback_get_calibration_mBE386F62F2C9CD4BFDD33C322A0D5223D0A21833,
	NativeMethods_k4a_playback_get_record_configuration_m3F2BD8AB54173C71A25E8F69CFDBA6041BE4056C,
	NativeMethods_k4a_playback_set_color_conversion_m81738E6504183A34A881F5ADF37FDFAFCB900995,
	NativeMethods_k4a_playback_get_next_capture_mB9E2D89D46349EAEE51094A25CC61C13647E93A2,
	NativeMethods_k4a_playback_seek_timestamp_m6DA1E25B5D7B6667B8D01A2067A51A81A5C23941,
	NativeMethods_k4a_playback_close_mE2C5C78F07DE0C21E38BCF6BC4D6D4B849B3DA31,
	NativeMethods_k4abt_tracker_create_m77DC6D417568952907EA2E7C3A52C3DF9F654EC1,
	NativeMethods_k4abt_tracker_destroy_m1D38215EBE672BA3EAE996EC37D17DAF30298FE5,
	NativeMethods_k4abt_tracker_set_temporal_smoothing_m191D76A97F8FB7B08A87A45C90A7323D562B3445,
	NativeMethods_k4abt_tracker_enqueue_capture_m48B79A65CE1FD547F6F16420B38753C8F7259462,
	NativeMethods_k4abt_tracker_pop_result_m7872C7B8A86AD7F5A9E816116648049D1F7D57D8,
	NativeMethods_k4abt_tracker_shutdown_mC9AD2AFCCC4210B9AD8725FD9077105B5E54B6C5,
	NativeMethods_k4abt_frame_release_m3CBDE00E19E938FA1C2A3CBF3A7AAFFBEEF50011,
	NativeMethods_k4abt_frame_get_num_bodies_m7BAEBB842511A0E3C28A8F11A4D8144FE2F8A6AA,
	NativeMethods_k4abt_frame_get_body_skeleton_mA173FFF0EFA966ECD3E5F0B7517EE7114B2B2225,
	NativeMethods_k4abt_frame_get_body_id_m30801D1B0AE0708B0F96185620D96B0C2BBD9DBB,
	NativeMethods_k4abt_frame_get_device_timestamp_usec_m5A9B44906B99C1EA683590C69838E8CCBADFC161,
	NativeMethods_k4abt_frame_get_body_index_map_m12E056CC95E8C4AFB2ECBEA9B27D6622B04E0B7E,
	NativeMethods_k4abt_frame_get_capture_mB6A25395E837EBDDB3B432436076B49ADFC4B4A8,
	k4a_logging_message_cb_t__ctor_m0EC9603B26E390BBE9F8B3E74A6D747A5310A3C4,
	k4a_logging_message_cb_t_Invoke_m56228F317ADCB8F0C95864F973B6539335AA3D99,
	k4a_device_t__ctor_mDA3147A081E23DC9367F750DD3CA3E73ABC93F34,
	k4a_device_t_ReleaseHandle_mFE2902D1DCA0F35CB8D07ECED965FDEF2D5C38DA,
	k4a_capture_t__ctor_m819BBE396295691F394193535D78FE70988ACA20,
	k4a_capture_t_ReleaseHandle_m73C972E4EDEA923E3BA084E06B05D72CD56A54E8,
	k4a_image_t__ctor_mA1ACF6D7A8A7F78E5A586E688B735B7E0915E4D2,
	k4a_image_t__ctor_mB3478400BC15F6B1EBA8B0A605DD97A09D0279EF,
	k4a_image_t_DuplicateReference_m62DB0D4102A12E31533ADA36A8910E26E6B0FD54,
	k4a_image_t_ReleaseHandle_mAE855BA4BDA6FA6FE92814BF81E59E694AB60FC7,
	k4a_transformation_t__ctor_m3E47C57A80F45AFC77D9517635D73A64E5AF11C2,
	k4a_transformation_t_ReleaseHandle_m98F166E6469BD6100FECCD99C2A51C88D700CEE7,
	k4a_imu_sample_t_get_temperature_mBF1B6015F6D32DB2D7AC663DEDD947666108AC1E,
	k4a_imu_sample_t_get_acc_sample_mC99DED701DEFD263D0B1AA2D6D73A93220FC2792,
	k4a_imu_sample_t_get_acc_timestamp_usec_m7A02ABF697914485EC8690C97058E4563509D01C,
	k4a_imu_sample_t_get_gyro_sample_mE73FDE30F4D1DCA5FE75D587CEDF35A7F0CAC066,
	k4a_imu_sample_t_get_gyro_timestamp_usec_m4D5AEA2CA75353546D39B7149A498A985CF17C96,
	k4a_imu_sample_t_ToImuSample_m238195FCBB415B3FA57855C79105150F5ADC6881,
	k4a_imu_sample_t__ctor_m6785ADECD130E433A8A84B962677928076F7A2A9,
	k4abt_skeleton_t__ctor_m0B8202070476168CA16BD4EA3080C73A4BF5C755,
	Playback__ctor_mED38CB4193351A054B8FCD55115E54E5E1E19A8C,
	Playback_OpenPlaybackFile_mDE6E2EF6674F40419FD7A5EE51585C3B9AD6799D,
	Playback_GetNextCapture_mB45E6261186265AB6F1A543E793BC0703F996C04,
	Playback_IsEndOfStream_m5F24EE3368FD8AE92BD33A865A2A30FC8B8326F5,
	Playback_SeekTimestamp_m328FFD8ACC8214BDE221E8FE91ED97BE99254729,
	Playback_Dispose_mDB640A8C5F6A04AA31D5271363D192B5634BD65F,
	Playback_Finalize_mA728C84FFFBCF6421F6DC3755F77637BC659447A,
	Playback_Dispose_mC46BA97B5BBC73968DD52EFA67689C880C52F922,
	Transformation__ctor_m7649C8B41A116783C171601D5E55AC8A2252C559,
	Transformation_DepthImageToColorCamera_mF72A010CF9DBBA71FCE3316A8F193F5F66B10BB7,
	Transformation_DepthImageToColorCameraCustom_m284DAD90B2B940BC4B985D230C11421C05741592,
	Transformation_ColorImageToDepthCamera_mAF771DBA2AD073A62D9E529A362A84C381827F7E,
	Transformation_Dispose_m2A44FA199D8815677B65A99E767043D25C4C6803,
	Transformation_Dispose_m2E582845BC3CF4B7EA858D87EBE636DC4D3161F4,
	U3CU3Ec__DisplayClass7_0__ctor_m0FA61A89B2D500CCC18EA3E0D34106B2BA77EE27,
	U3CU3Ec__DisplayClass7_1__ctor_m3D5D776820CFAD1E8C0CF54C264E2067A18E80CC,
	U3CU3Ec__DisplayClass7_1_U3CDepthImageToColorCameraU3Eb__0_mAF1076C816D933107083D358BBAE1D4A4651F27C,
	U3CU3Ec__DisplayClass9_0__ctor_mE88BBF0D15D073872A4F18EDBCCF01907759BE67,
	U3CU3Ec__DisplayClass9_1__ctor_mD2A28843C33EA157ABDE8E44F4799BF7A5004D91,
	U3CU3Ec__DisplayClass9_2__ctor_m6BBB6397A5951E18F777F9CF04740602EBABD151,
	U3CU3Ec__DisplayClass9_3__ctor_m38DEBFAE55C1CC24FE0A0CA0F8CF25B05D973273,
	U3CU3Ec__DisplayClass9_4__ctor_mD2C1953283DD5150689BED6570434AEBF87E98C9,
	U3CU3Ec__DisplayClass9_4_U3CDepthImageToColorCameraCustomU3Eb__0_mCF2B9300B9AA987250CFBC5689B336A41A0308CB,
	U3CU3Ec__DisplayClass13_0__ctor_m27CEA92C9BD457CD4BFCF65360A7081992453D10,
	U3CU3Ec__DisplayClass13_1__ctor_m0F34AC709E6392A2200C0E898057A1C3722E725A,
	U3CU3Ec__DisplayClass13_2__ctor_m9644BD9E717055E78DCB7485774F6018660DDE47,
	U3CU3Ec__DisplayClass13_2_U3CColorImageToDepthCameraU3Eb__0_m069495CEFD1B13B18403A150A98475CF13E2F3AF,
	NativeReferenceAttribute__ctor_m95796A924CA6F31144EF4E7B8FFC3758F176DA3C,
	NativeReferenceAttribute__ctor_m8E253F6C0CF5AE8D710E98715FAD4B1E7F9F0C19,
	NativeReferenceAttribute_set_ReferenceName_m07FB1F855C0E56FA278677A4C8AACA03CA51D751,
};
extern void Calibration_TransformTo3D_mBE16FDE91D28AC521C2977ABABD22AB25FC3DF3E_AdjustorThunk (void);
extern void Calibration_TransformTo2D_mD6D7A844F49DF2D2501F98A2F923B3D5ABF5B070_AdjustorThunk (void);
extern void Calibration_CreateTransformation_mFF374A7E9913B285ED67AB9F4A73BC48961997CC_AdjustorThunk (void);
extern void Calibration_Equals_m6F5126408C375DEA0BDBF42FD753EE40B6534E49_AdjustorThunk (void);
extern void Calibration_Equals_m920DA4A69370C90B1453BD4AAEE7123130DC40E1_AdjustorThunk (void);
extern void Calibration_GetHashCode_m79108213DFE3457A7B34CE1F7AFF58EEBD8676F9_AdjustorThunk (void);
extern void CameraCalibration_Equals_m02E56112450EE5AF37497FF7454B2B4F9C75E4CE_AdjustorThunk (void);
extern void CameraCalibration_Equals_m15C307F171CF0847D54CF4F7BE04F9246F633575_AdjustorThunk (void);
extern void CameraCalibration_GetHashCode_m20976B888D06FC8B68C6BD7E06E08E0A88AD1618_AdjustorThunk (void);
extern void Extrinsics_Equals_mE6BE22F4367643DE91BD9CD0CB93252492B56747_AdjustorThunk (void);
extern void Extrinsics_Equals_m0C17C635841579DE9BA4E0567C1A168D06FC074D_AdjustorThunk (void);
extern void Extrinsics_GetHashCode_m810B26F7B976DEF2BAFF17B4B5E17AB3F90670B2_AdjustorThunk (void);
extern void Intrinsics_Equals_m810D7FF24233A6A20B629747D76FD97012D1BBC5_AdjustorThunk (void);
extern void Intrinsics_Equals_mA3D3F61A2BA6D21740BBE624E1F0A3E3E5E05E8C_AdjustorThunk (void);
extern void Intrinsics_GetHashCode_mE5E6D6591242546E0AC14A0A0B0078FB989E2405_AdjustorThunk (void);
extern void k4abt_skeleton_t__ctor_m0B8202070476168CA16BD4EA3080C73A4BF5C755_AdjustorThunk (void);
static Il2CppTokenAdjustorThunkPair s_adjustorThunks[16] = 
{
	{ 0x06000012, Calibration_TransformTo3D_mBE16FDE91D28AC521C2977ABABD22AB25FC3DF3E_AdjustorThunk },
	{ 0x06000013, Calibration_TransformTo2D_mD6D7A844F49DF2D2501F98A2F923B3D5ABF5B070_AdjustorThunk },
	{ 0x06000014, Calibration_CreateTransformation_mFF374A7E9913B285ED67AB9F4A73BC48961997CC_AdjustorThunk },
	{ 0x06000015, Calibration_Equals_m6F5126408C375DEA0BDBF42FD753EE40B6534E49_AdjustorThunk },
	{ 0x06000016, Calibration_Equals_m920DA4A69370C90B1453BD4AAEE7123130DC40E1_AdjustorThunk },
	{ 0x06000017, Calibration_GetHashCode_m79108213DFE3457A7B34CE1F7AFF58EEBD8676F9_AdjustorThunk },
	{ 0x06000018, CameraCalibration_Equals_m02E56112450EE5AF37497FF7454B2B4F9C75E4CE_AdjustorThunk },
	{ 0x06000019, CameraCalibration_Equals_m15C307F171CF0847D54CF4F7BE04F9246F633575_AdjustorThunk },
	{ 0x0600001A, CameraCalibration_GetHashCode_m20976B888D06FC8B68C6BD7E06E08E0A88AD1618_AdjustorThunk },
	{ 0x06000069, Extrinsics_Equals_mE6BE22F4367643DE91BD9CD0CB93252492B56747_AdjustorThunk },
	{ 0x0600006A, Extrinsics_Equals_m0C17C635841579DE9BA4E0567C1A168D06FC074D_AdjustorThunk },
	{ 0x0600006B, Extrinsics_GetHashCode_m810B26F7B976DEF2BAFF17B4B5E17AB3F90670B2_AdjustorThunk },
	{ 0x0600008A, Intrinsics_Equals_m810D7FF24233A6A20B629747D76FD97012D1BBC5_AdjustorThunk },
	{ 0x0600008B, Intrinsics_Equals_mA3D3F61A2BA6D21740BBE624E1F0A3E3E5E05E8C_AdjustorThunk },
	{ 0x0600008C, Intrinsics_GetHashCode_mE5E6D6591242546E0AC14A0A0B0078FB989E2405_AdjustorThunk },
	{ 0x060000E6, k4abt_skeleton_t__ctor_m0B8202070476168CA16BD4EA3080C73A4BF5C755_AdjustorThunk },
};
static const int32_t s_InvokerIndices[260] = 
{
	3887,
	8066,
	9811,
	3524,
	6073,
	9911,
	7943,
	5716,
	3115,
	9943,
	2114,
	6068,
	6188,
	6188,
	8056,
	9911,
	9911,
	943,
	1892,
	9732,
	6879,
	6735,
	9672,
	6879,
	6736,
	9672,
	7996,
	9732,
	9732,
	9732,
	9911,
	9732,
	8056,
	4629,
	7996,
	9732,
	9672,
	7940,
	9672,
	7940,
	14882,
	14451,
	2621,
	9569,
	6211,
	6211,
	7996,
	9911,
	9911,
	9911,
	9911,
	8056,
	9672,
	9911,
	9672,
	9911,
	9672,
	9911,
	9911,
	9672,
	9911,
	9672,
	9672,
	7940,
	9672,
	7940,
	9672,
	7940,
	9672,
	7940,
	9800,
	8056,
	9861,
	9672,
	7940,
	9861,
	8110,
	9800,
	10048,
	9911,
	9911,
	7996,
	4676,
	4660,
	0,
	0,
	0,
	0,
	14577,
	14577,
	14577,
	14577,
	9911,
	4676,
	4660,
	0,
	9911,
	4676,
	4660,
	0,
	9911,
	4676,
	4660,
	0,
	6879,
	6775,
	9672,
	1660,
	7996,
	9911,
	9672,
	9672,
	9672,
	9672,
	9673,
	9861,
	2403,
	791,
	9675,
	9732,
	9911,
	9551,
	9911,
	9911,
	9732,
	8056,
	9911,
	9672,
	8066,
	9898,
	8144,
	9861,
	8110,
	9898,
	8144,
	8110,
	9911,
	6879,
	6834,
	9672,
	14717,
	14717,
	14717,
	14717,
	14947,
	11301,
	13936,
	14947,
	7996,
	799,
	9732,
	9732,
	9911,
	9732,
	9911,
	8056,
	7996,
	10359,
	10510,
	14435,
	14714,
	12313,
	10374,
	11606,
	14714,
	14456,
	14456,
	14456,
	14714,
	10751,
	14714,
	14714,
	14882,
	11573,
	12298,
	12312,
	13140,
	14717,
	14297,
	14717,
	13128,
	12311,
	14297,
	14297,
	14297,
	14297,
	14326,
	14316,
	14326,
	12310,
	13140,
	13134,
	13134,
	13135,
	13134,
	12288,
	14714,
	12263,
	14714,
	13848,
	12295,
	12283,
	14714,
	14714,
	14293,
	12285,
	13135,
	14315,
	14453,
	14453,
	4653,
	852,
	9911,
	9800,
	9911,
	9800,
	9911,
	7996,
	9732,
	9800,
	9911,
	9800,
	9811,
	9898,
	9673,
	9898,
	9673,
	9732,
	9911,
	7940,
	7996,
	7996,
	9732,
	9800,
	6826,
	8056,
	9911,
	9911,
	7836,
	4660,
	378,
	2483,
	9911,
	8056,
	9911,
	9911,
	9672,
	9911,
	9911,
	9911,
	9911,
	9911,
	9672,
	9911,
	9911,
	9911,
	9672,
	9911,
	7996,
	7996,
};
static const Il2CppTokenIndexMethodTuple s_reversePInvokeIndices[1] = 
{
	{ 0x06000092, 4,  (void**)&Logger_OnDebugMessage_m51F67A9B23BE08511844BD1B232BBF8A29394B9E_RuntimeMethod_var, 0 },
};
static const Il2CppTokenRangePair s_rgctxIndices[7] = 
{
	{ 0x06000055, { 0, 4 } },
	{ 0x06000056, { 4, 2 } },
	{ 0x06000057, { 6, 2 } },
	{ 0x06000058, { 8, 1 } },
	{ 0x06000060, { 9, 4 } },
	{ 0x06000064, { 13, 4 } },
	{ 0x06000068, { 17, 4 } },
};
extern const uint32_t g_rgctx_Func_1_t8D3A83F308EC2AC694A09AC1716ABCDFFD1FAC02;
extern const uint32_t g_rgctx_Func_1_Invoke_m8C356A23B156D9D9989188B1212479525A84BD84;
extern const uint32_t g_rgctx_AzureKinectException_IsSuccess_TisT_tE1C37A0290BE3DF0510AE9BFDC661473A719DD2C_m3D58024E39355B5B5895EA808EC1B1F6FF8CACC9;
extern const uint32_t g_rgctx_T_tE1C37A0290BE3DF0510AE9BFDC661473A719DD2C;
extern const uint32_t g_rgctx_AzureKinectException_IsSuccess_TisT_t95F0B77E16F8F24208444F3503B0555A3B47EAF8_mC9E3471B4B5616E8AE85E47A57BD88D68C789579;
extern const uint32_t g_rgctx_T_t95F0B77E16F8F24208444F3503B0555A3B47EAF8;
extern const uint32_t g_rgctx_AzureKinectException_IsSuccess_TisT_tFAADF239C1D5EF536C5EA4C4CD032FC5497DB6BE_mF3BB79B361B57C4F329AD93B63CF39002B9C05BF;
extern const uint32_t g_rgctx_T_tFAADF239C1D5EF536C5EA4C4CD032FC5497DB6BE;
extern const uint32_t g_rgctx_T_t8D60AB337E496244108B63A357FF73E8831F4C1C;
extern const uint32_t g_rgctx_Func_1_t0FF0921136D1B44821A089053DE9B8F20959F84E;
extern const uint32_t g_rgctx_Func_1_Invoke_mDCE368E03B85099EED56152F5A0A2D9AB7F7FB8B;
extern const uint32_t g_rgctx_AzureKinectException_IsSuccess_TisT_tF4B8E151A63603CDA919BAB60F68DF735F645000_m7973B823E6546BDFAB9CF3D45B4C983A7B388735;
extern const uint32_t g_rgctx_T_tF4B8E151A63603CDA919BAB60F68DF735F645000;
extern const uint32_t g_rgctx_Func_1_tE9F612FC261F1704F1AEC960D6744184B64A4877;
extern const uint32_t g_rgctx_Func_1_Invoke_m1F0839DCB7BBBA8BF4D05F90105DB7D8683FA74C;
extern const uint32_t g_rgctx_AzureKinectException_IsSuccess_TisT_t7EF59A42A1E6D234BE312E232FF340ACC43F1B67_mED84818517A94D0BD9E42C60773779D391A2456F;
extern const uint32_t g_rgctx_T_t7EF59A42A1E6D234BE312E232FF340ACC43F1B67;
extern const uint32_t g_rgctx_Func_1_tBCA0E5CB89A18B9579F49D3B57B50D5FE635AAB8;
extern const uint32_t g_rgctx_Func_1_Invoke_m97B8B80B4AE4622B78E7ABDF08701FCD5253E30D;
extern const uint32_t g_rgctx_AzureKinectException_IsSuccess_TisT_tDCB5D130B1523F19D6D791CBCB22CB1EB3339FAD_mF812CBB606902A44EA097736C9D3FDADD3C0C579;
extern const uint32_t g_rgctx_T_tDCB5D130B1523F19D6D791CBCB22CB1EB3339FAD;
static const Il2CppRGCTXDefinition s_rgctxValues[21] = 
{
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_Func_1_t8D3A83F308EC2AC694A09AC1716ABCDFFD1FAC02 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Func_1_Invoke_m8C356A23B156D9D9989188B1212479525A84BD84 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_AzureKinectException_IsSuccess_TisT_tE1C37A0290BE3DF0510AE9BFDC661473A719DD2C_m3D58024E39355B5B5895EA808EC1B1F6FF8CACC9 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_T_tE1C37A0290BE3DF0510AE9BFDC661473A719DD2C },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_AzureKinectException_IsSuccess_TisT_t95F0B77E16F8F24208444F3503B0555A3B47EAF8_mC9E3471B4B5616E8AE85E47A57BD88D68C789579 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_T_t95F0B77E16F8F24208444F3503B0555A3B47EAF8 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_AzureKinectException_IsSuccess_TisT_tFAADF239C1D5EF536C5EA4C4CD032FC5497DB6BE_mF3BB79B361B57C4F329AD93B63CF39002B9C05BF },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_T_tFAADF239C1D5EF536C5EA4C4CD032FC5497DB6BE },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_T_t8D60AB337E496244108B63A357FF73E8831F4C1C },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_Func_1_t0FF0921136D1B44821A089053DE9B8F20959F84E },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Func_1_Invoke_mDCE368E03B85099EED56152F5A0A2D9AB7F7FB8B },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_AzureKinectException_IsSuccess_TisT_tF4B8E151A63603CDA919BAB60F68DF735F645000_m7973B823E6546BDFAB9CF3D45B4C983A7B388735 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_T_tF4B8E151A63603CDA919BAB60F68DF735F645000 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_Func_1_tE9F612FC261F1704F1AEC960D6744184B64A4877 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Func_1_Invoke_m1F0839DCB7BBBA8BF4D05F90105DB7D8683FA74C },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_AzureKinectException_IsSuccess_TisT_t7EF59A42A1E6D234BE312E232FF340ACC43F1B67_mED84818517A94D0BD9E42C60773779D391A2456F },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_T_t7EF59A42A1E6D234BE312E232FF340ACC43F1B67 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_Func_1_tBCA0E5CB89A18B9579F49D3B57B50D5FE635AAB8 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Func_1_Invoke_m97B8B80B4AE4622B78E7ABDF08701FCD5253E30D },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_AzureKinectException_IsSuccess_TisT_tDCB5D130B1523F19D6D791CBCB22CB1EB3339FAD_mF812CBB606902A44EA097736C9D3FDADD3C0C579 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_T_tDCB5D130B1523F19D6D791CBCB22CB1EB3339FAD },
};
IL2CPP_EXTERN_C const Il2CppCodeGenModule g_Microsoft_Azure_Kinect_Sensor_CodeGenModule;
const Il2CppCodeGenModule g_Microsoft_Azure_Kinect_Sensor_CodeGenModule = 
{
	"Microsoft.Azure.Kinect.Sensor.dll",
	260,
	s_methodPointers,
	16,
	s_adjustorThunks,
	s_InvokerIndices,
	1,
	s_reversePInvokeIndices,
	7,
	s_rgctxIndices,
	21,
	s_rgctxValues,
	NULL,
	NULL, // module initializer,
	NULL,
	NULL,
	NULL,
};
