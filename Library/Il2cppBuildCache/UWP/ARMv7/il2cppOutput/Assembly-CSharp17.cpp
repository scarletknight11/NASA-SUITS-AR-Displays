#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


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

// System.Threading.AsyncLocal`1<System.Globalization.CultureInfo>
struct AsyncLocal_1_t1D3339EA4C8650D2DEDDF9553E5C932B3DC2CCFD;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>
struct Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180;
// System.Collections.Generic.List`1<com.rfilkov.kinect.DepthSensorInterface>
struct List_1_t7EB4B3DD58095205A08A56A510A28738AA6D7A95;
// System.Collections.Generic.List`1<com.rfilkov.kinect.KinectInterop/BodyData>
struct List_1_t9FA3665509F8993907178FCA58DE3B92A3D0602B;
// System.Collections.Generic.List`1<com.rfilkov.kinect.KinectInterop/SensorData>
struct List_1_tADEF9E4C876CA48200A79DBC18A4E66F9A34F6DD;
// System.Collections.Generic.List`1<com.rfilkov.kinect.KinectManager/DisplayImageType>
struct List_1_tBD748F15E2C57234C3B7BF0402CBC90A40CEC31A;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// UnityEngine.CapsuleCollider[]
struct CapsuleColliderU5BU5D_t812EDDF9927ACFDDA87D5D99C525FCDDDCB4D1BC;
// Microsoft.Azure.Kinect.Sensor.Capture[]
struct CaptureU5BU5D_t6A4C32CD920289A011A4FAD997C7E246850B749C;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// UnityEngine.Color[]
struct ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// Microsoft.Azure.Kinect.Sensor.Extrinsics[]
struct ExtrinsicsU5BU5D_tC5C86DA4EF3E26611C4066FB86E915F86A4356F2;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// UnityEngine.Light[]
struct LightU5BU5D_tDA7C763E668D91E53318509D94BC0CF10B8AB990;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// UnityEngine.Quaternion[]
struct QuaternionU5BU5D_t3C088AFB0F3D2763228C9CAB227021C5DC462AF7;
// System.Single[]
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.UInt16[]
struct UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83;
// System.UInt64[]
struct UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
// UnityEngine.Vector4[]
struct Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD;
// Microsoft.Azure.Kinect.Sensor.k4abt_joint_t[]
struct k4abt_joint_tU5BU5D_tBD120709567170C1C0CCCBDEC0C6277A26AD664A;
// Microsoft.Azure.Kinect.Sensor.k4abt_skeleton_t[]
struct k4abt_skeleton_tU5BU5D_t5C23FA894EC14C63166951B164B26FD64783CBD5;
// com.rfilkov.components.FragmentLighting/PointLight[]
struct PointLightU5BU5D_tF78EC163262CD6B9FD8581958AFC2242F35B72D8;
// com.rfilkov.components.FragmentLighting/SpotLight[]
struct SpotLightU5BU5D_t88988C7F19ECEC1D979055BE799B63CD103A1F76;
// com.rfilkov.kinect.KinectInterop/BodyData[]
struct BodyDataU5BU5D_tB7ED4CAD880D8216A8900BF4105852DF6D972120;
// com.rfilkov.kinect.KinectInterop/TrackingState[]
struct TrackingStateU5BU5D_tBE3BA58B5633AF1BD85C14AC9419597AA87A0DDE;
// System.Threading.AutoResetEvent
struct AutoResetEvent_t7F792F3F7AD11BEF7B411E771D98E5266A8CE7C0;
// Microsoft.Azure.Kinect.Sensor.BodyTracking
struct BodyTracking_tDE65B520DD2EDF920EE06E83A5A1250C452D97F7;
// com.rfilkov.kinect.BoneOrientationConstraints
struct BoneOrientationConstraints_t83384E3BC3AA19A10D2275993FA2393BE3EC93F3;
// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184;
// UnityEngine.CapsuleCollider
struct CapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808;
// Microsoft.Azure.Kinect.Sensor.Capture
struct Capture_t7686D47AE8F0EC1671500B360BB9576019EA0F23;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// UnityEngine.ComputeBuffer
struct ComputeBuffer_t51EADA9015EBCC1B982C5584E9AB2734415A8233;
// UnityEngine.ComputeShader
struct ComputeShader_tA7BDD0F6EE879D149480F5890BA2E665C50CFBF8;
// System.Globalization.CultureInfo
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// com.rfilkov.kinect.DepthSensorBase
struct DepthSensorBase_tB644BCAB82289DCDB9290A9B3A6972F0F13B0774;
// com.rfilkov.kinect.DepthSensorInterface
struct DepthSensorInterface_t2FD8203480BF13E04977ED112CA9D0B67DCA1053;
// Microsoft.Azure.Kinect.Sensor.Device
struct Device_tC6A2DB1CD94C3983204161A53BD72F75DD5DAED6;
// System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2;
// System.Exception
struct Exception_t;
// System.Threading.ExecutionContext
struct ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710;
// com.rfilkov.components.FragmentLighting
struct FragmentLighting_tE9A6F75445DF103494C8BFA7BD9D600355F9CDDC;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Security.Principal.IPrincipal
struct IPrincipal_tE7AF5096287F6C3472585E124CB38FF2A51EAB5F;
// Microsoft.Azure.Kinect.Sensor.Image
struct Image_tC5AB10001052B841BBF2D69DF68A046BCF9FC1A2;
// Microsoft.Azure.Kinect.Sensor.ImuSample
struct ImuSample_t3F52813E67351E57E388C209AFA41116B660E2AB;
// System.Threading.InternalThread
struct InternalThread_tF40B7BFCBD60C82BD8475A22FF5186CA10293687;
// com.rfilkov.kinect.JointPositionsFilter
struct JointPositionsFilter_t70B58FF6580070879B7A03221D48370EC2266F54;
// com.rfilkov.kinect.JointVelocitiesFilter
struct JointVelocitiesFilter_t564D2BC560AF4C4A0027B810FB3FE90449651987;
// com.rfilkov.kinect.Kinect4AzureInterface
struct Kinect4AzureInterface_tE8F742F963998C50172CB09B419FB2340DFE9761;
// com.rfilkov.kinect.Kinect4AzureSyncher
struct Kinect4AzureSyncher_tF37A153318D437722F7D7CF53EB5AE21601D6FB2;
// com.rfilkov.kinect.KinectFloorDetector
struct KinectFloorDetector_t456A19A6B4E924992C3E411D2A23FBB3E7C424AF;
// com.rfilkov.kinect.KinectGestureManager
struct KinectGestureManager_tDF90B637AB862EA65E3133DC1769ADF627B33D0A;
// com.rfilkov.kinect.KinectManager
struct KinectManager_t6D168A1C710083948363282B0D862EDDFFD88211;
// com.rfilkov.kinect.KinectUserBodyMerger
struct KinectUserBodyMerger_tF4593FF342507DD0D96D811F871DF1EA9E76ECAA;
// com.rfilkov.kinect.KinectUserManager
struct KinectUserManager_t3056CC8578B4DF84953B7857B95A6EF1E565E897;
// UnityEngine.Light
struct Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3;
// System.LocalDataStoreHolder
struct LocalDataStoreHolder_t789DD474AE5141213C2105CE57830ECFC2D3C03F;
// System.LocalDataStoreMgr
struct LocalDataStoreMgr_t205F1783D5CC2B148E829B5882E5406FF9A3AC1E;
// AHRS.MahonyAHRS
struct MahonyAHRS_tCEB9F28C93984E10463A58F9BEB3F2DE3C294342;
// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4;
// UnityEngine.MeshCollider
struct MeshCollider_tB525E4DDE383252364ED0BDD32CF2B53914EE455;
// UnityEngine.MeshFilter
struct MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// System.MulticastDelegate
struct MulticastDelegate_t;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// Microsoft.Azure.Kinect.Sensor.Playback
struct Playback_t6FC439ACC2A2AE11DA385C116E5C4DA06529D63A;
// UnityEngine.RenderTexture
struct RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27;
// UnityEngine.Renderer
struct Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// com.rfilkov.components.SceneMeshRendererGpu
struct SceneMeshRendererGpu_t5E08B994ADA093F4C771151BE372410DAA8D238D;
// com.rfilkov.components.SensorPoseStartupEstimator
struct SensorPoseStartupEstimator_tFA5A8D4CA2DA8961BF7DB8E53A3EF98FB4311849;
// UnityEngine.Shader
struct Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692;
// UnityEngine.SphereCollider
struct SphereCollider_tBA111C542CE97F6873DE742757213D6265C7D275;
// System.String
struct String_t;
// UnityEngine.UI.Text
struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62;
// UnityEngine.Texture
struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700;
// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
// System.Threading.Thread
struct Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F;
// System.Threading.ThreadStart
struct ThreadStart_t7662D98F1793EDE90192D7304D1C3C44119328A2;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// Microsoft.Azure.Kinect.Sensor.Transformation
struct Transformation_t85B32D1488A01A7C69680798AF5CF476446E35AF;
// com.rfilkov.components.UserMeshRenderer
struct UserMeshRenderer_tE896EB6D7C675E98F5AF9306C25AAB1EF96A7E2F;
// com.rfilkov.components.UserMeshRendererGpu
struct UserMeshRendererGpu_tCA868CF70531660324A409C0EF918366C78D6E54;
// com.rfilkov.components.UserSkeletonCollider
struct UserSkeletonCollider_tF1FC02224E5642261B30831FD68E335DFA375818;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD;
// com.rfilkov.kinect.KinectInterop/CameraExtrinsics
struct CameraExtrinsics_t78E5FF4BC4F63B394053A70F6A00AE00E3035641;
// com.rfilkov.kinect.KinectInterop/CameraIntrinsics
struct CameraIntrinsics_t272DC8A0981DE0A132DFC4E7B48C942191D56EFF;
// com.rfilkov.kinect.KinectInterop/SensorData
struct SensorData_t889044994784020C5FA25311175FB3F8B715DD27;
// com.rfilkov.kinect.KinectManager/DepthSensorStartStopEvent
struct DepthSensorStartStopEvent_t8A0D3642F28C42CA0F15037227D5AF4041C56DDB;

IL2CPP_EXTERN_C RuntimeClass* ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CapsuleColliderU5BU5D_t812EDDF9927ACFDDA87D5D99C525FCDDDCB4D1BC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ComputeBuffer_t51EADA9015EBCC1B982C5584E9AB2734415A8233_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DepthSensorBase_tB644BCAB82289DCDB9290A9B3A6972F0F13B0774_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DepthSensorInterface_t2FD8203480BF13E04977ED112CA9D0B67DCA1053_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FragmentLighting_tE9A6F75445DF103494C8BFA7BD9D600355F9CDDC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* JointType_t678862A04475E9381F0E6A3C842D11CABC28108F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Kinect4AzureInterface_tE8F742F963998C50172CB09B419FB2340DFE9761_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* KinectInterop_t8231C68411373688AA650B978611F932EE5860F9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* KinectManager_t6D168A1C710083948363282B0D862EDDFFD88211_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ThreadStart_t7662D98F1793EDE90192D7304D1C3C44119328A2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* k4abt_sensor_orientation_t_tD83F5C508259D2E828B05D755BD53F4204095A7C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral089649C1D01E0D8F758492B4F4D2332C2167B6C1;
IL2CPP_EXTERN_C String_t* _stringLiteral2882AFDC9AFF078CA36446363C6C3AEB1FE725BA;
IL2CPP_EXTERN_C String_t* _stringLiteral28BBC4BDE4FD330B45DC7DD7CC37F01B777452E1;
IL2CPP_EXTERN_C String_t* _stringLiteral2B174F8C730455BB7F9CA693D27CD54342B6C8F7;
IL2CPP_EXTERN_C String_t* _stringLiteral37A8260E2CB0CCF955B515F359CCD60D4008D7A0;
IL2CPP_EXTERN_C String_t* _stringLiteral3D4887776042D73AD182766CDE2B5AE68B794B7D;
IL2CPP_EXTERN_C String_t* _stringLiteral42464E53254A84FBD1D0AE5C6DE78AE09075E109;
IL2CPP_EXTERN_C String_t* _stringLiteral430CE0466EFCD60F4DF5494346A24D04BF1432FB;
IL2CPP_EXTERN_C String_t* _stringLiteral459137C36C2D4B342C0C73E9F6B1A0DBFB4B8DF6;
IL2CPP_EXTERN_C String_t* _stringLiteral6CC53C5843954C61F83727CB529B9530F6113836;
IL2CPP_EXTERN_C String_t* _stringLiteral737C78925E3060931CE71D40F1BCD17738A7D47B;
IL2CPP_EXTERN_C String_t* _stringLiteral7A07A35A5AC61F7A6B0C09B942BEF52A9476A989;
IL2CPP_EXTERN_C String_t* _stringLiteral7A654FF8208F7E303716EF5E5E785A7B0C3683EB;
IL2CPP_EXTERN_C String_t* _stringLiteral7B15541EEA8A44CEE3ECC230191B03CE7FD444E8;
IL2CPP_EXTERN_C String_t* _stringLiteral7DE6F55FCE5B31ED1BF66F8EC3E72A8693E0A73B;
IL2CPP_EXTERN_C String_t* _stringLiteral7F5A1C307F51BE942F3E8F65D5936DCE694BD1E2;
IL2CPP_EXTERN_C String_t* _stringLiteral824D2FB95D3E084BCF750A3F23F885277F835E90;
IL2CPP_EXTERN_C String_t* _stringLiteral8C729D68F4DD351080E6B38FB15B3A52C5CB089B;
IL2CPP_EXTERN_C String_t* _stringLiteralA5567EB56F1812516E26E065887AD1D681D1C4C0;
IL2CPP_EXTERN_C String_t* _stringLiteralB305AB6ADB86227B3BC29383DF835E1D5F42CDFD;
IL2CPP_EXTERN_C String_t* _stringLiteralB54BFAEA034DCF47CD45F14AC8CBACA6671068F6;
IL2CPP_EXTERN_C String_t* _stringLiteralBF64DC23C4624B537144B1690C2E8D2113A16A1C;
IL2CPP_EXTERN_C String_t* _stringLiteralC821BB1D926D8A2077EC957529D986291F9D7A70;
IL2CPP_EXTERN_C String_t* _stringLiteralCF3849B6655176336DB3D84B127DDDBB1DCB56EE;
IL2CPP_EXTERN_C String_t* _stringLiteralD45BD41901F5DF0CED9D6EE8E596968BE15FC475;
IL2CPP_EXTERN_C String_t* _stringLiteralD8DA0A28C68461D5CAFDC3A6642F11CC60058662;
IL2CPP_EXTERN_C String_t* _stringLiteralDA29D557A88BE41D27E66EC259BAED325FF1177D;
IL2CPP_EXTERN_C String_t* _stringLiteralE694C9DFFF0C9DFC9399008A71BCF78B1CFDF4E4;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisMeshCollider_tB525E4DDE383252364ED0BDD32CF2B53914EE455_mFC0F02CCD26A6A186031CF43E92D7B60EA1CC370_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisMeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5_mB82F66059DFB5715DD85BDED1D90BC03A6C9E623_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisTransform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_m60E86366B3E431D4C4A549CF4FE5951087686F7F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisCapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808_mE9815ABBF56D4B7806C63F85A30AE9BBDE927BCF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisSphereCollider_tBA111C542CE97F6873DE742757213D6265C7D275_m3D05F19667844A2949840753F7A3287115BE029E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_FindObjectsOfType_TisLight_t1E68479B7782AF2050FAA02A5DC612FD034F18F3_m9B250477C56BC975B7285CA3DFD1C0A118A3B185_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UserMeshRenderer_BuildMesh_m0DF5C3034F416B9AE30F590C3FD57594CA399DA9_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;
struct Extrinsics_t69B98E243237E490B53B0269802186347B63BA28_marshaled_com;
struct Extrinsics_t69B98E243237E490B53B0269802186347B63BA28_marshaled_pinvoke;
struct k4abt_joint_t_t47F41C5F1D7F1DAECB80FCB7C4EBD3CA95E5C0EC;
struct k4abt_skeleton_t_t53E37DFE0F294467E640B9A7EFEF3D977D09E11A_marshaled_com;
struct k4abt_skeleton_t_t53E37DFE0F294467E640B9A7EFEF3D977D09E11A_marshaled_pinvoke;

struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct CapsuleColliderU5BU5D_t812EDDF9927ACFDDA87D5D99C525FCDDDCB4D1BC;
struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct LightU5BU5D_tDA7C763E668D91E53318509D94BC0CF10B8AB990;
struct UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83;
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA;
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
struct Il2CppArrayBounds;

// System.Runtime.ConstrainedExecution.CriticalFinalizerObject
struct CriticalFinalizerObject_t1DCAB623CAEA6529A96F5F3EDE3C7048A6E313C9  : public RuntimeObject
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

// com.rfilkov.kinect.KinectInterop/CameraExtrinsics
struct CameraExtrinsics_t78E5FF4BC4F63B394053A70F6A00AE00E3035641  : public RuntimeObject
{
	// System.Single[] com.rfilkov.kinect.KinectInterop/CameraExtrinsics::rotation
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___rotation_0;
	// System.Single[] com.rfilkov.kinect.KinectInterop/CameraExtrinsics::translation
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___translation_1;
};

// com.rfilkov.kinect.KinectInterop/CameraIntrinsics
struct CameraIntrinsics_t272DC8A0981DE0A132DFC4E7B48C942191D56EFF  : public RuntimeObject
{
	// System.Int32 com.rfilkov.kinect.KinectInterop/CameraIntrinsics::cameraType
	int32_t ___cameraType_0;
	// System.Int32 com.rfilkov.kinect.KinectInterop/CameraIntrinsics::width
	int32_t ___width_1;
	// System.Int32 com.rfilkov.kinect.KinectInterop/CameraIntrinsics::height
	int32_t ___height_2;
	// System.Single com.rfilkov.kinect.KinectInterop/CameraIntrinsics::ppx
	float ___ppx_3;
	// System.Single com.rfilkov.kinect.KinectInterop/CameraIntrinsics::ppy
	float ___ppy_4;
	// System.Single com.rfilkov.kinect.KinectInterop/CameraIntrinsics::fx
	float ___fx_5;
	// System.Single com.rfilkov.kinect.KinectInterop/CameraIntrinsics::fy
	float ___fy_6;
	// com.rfilkov.kinect.KinectInterop/DistortionType com.rfilkov.kinect.KinectInterop/CameraIntrinsics::distType
	int32_t ___distType_7;
	// System.Single[] com.rfilkov.kinect.KinectInterop/CameraIntrinsics::distCoeffs
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___distCoeffs_8;
	// System.Single com.rfilkov.kinect.KinectInterop/CameraIntrinsics::codx
	float ___codx_9;
	// System.Single com.rfilkov.kinect.KinectInterop/CameraIntrinsics::cody
	float ___cody_10;
	// System.Single com.rfilkov.kinect.KinectInterop/CameraIntrinsics::p2
	float ___p2_11;
	// System.Single com.rfilkov.kinect.KinectInterop/CameraIntrinsics::p1
	float ___p1_12;
	// System.Single com.rfilkov.kinect.KinectInterop/CameraIntrinsics::maxRadius
	float ___maxRadius_13;
	// System.Single com.rfilkov.kinect.KinectInterop/CameraIntrinsics::hFOV
	float ___hFOV_14;
	// System.Single com.rfilkov.kinect.KinectInterop/CameraIntrinsics::vFOV
	float ___vFOV_15;
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

// System.Char
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17 
{
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_0;
};

struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17_StaticFields
{
	// System.Byte[] System.Char::s_categoryForLatin1
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___s_categoryForLatin1_3;
};

// UnityEngine.Color
struct Color_tD001788D726C3A7F1379BEED0260B9591F440C1F 
{
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;
};

// System.Double
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	// System.Double System.Double::m_value
	double ___m_value_0;
};

// System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2  : public ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F
{
};

struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_StaticFields
{
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___enumSeperatorCharArray_0;
};
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_com
{
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

// Microsoft.Azure.Kinect.Sensor.KQuaternion
struct KQuaternion_tA32A7EF9BFE1BC1FFADCE467D717447C7DEF1718 
{
	// System.Single Microsoft.Azure.Kinect.Sensor.KQuaternion::W
	float ___W_0;
	// System.Single Microsoft.Azure.Kinect.Sensor.KQuaternion::X
	float ___X_1;
	// System.Single Microsoft.Azure.Kinect.Sensor.KQuaternion::Y
	float ___Y_2;
	// System.Single Microsoft.Azure.Kinect.Sensor.KQuaternion::Z
	float ___Z_3;
};

// UnityEngine.Matrix4x4
struct Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 
{
	// System.Single UnityEngine.Matrix4x4::m00
	float ___m00_0;
	// System.Single UnityEngine.Matrix4x4::m10
	float ___m10_1;
	// System.Single UnityEngine.Matrix4x4::m20
	float ___m20_2;
	// System.Single UnityEngine.Matrix4x4::m30
	float ___m30_3;
	// System.Single UnityEngine.Matrix4x4::m01
	float ___m01_4;
	// System.Single UnityEngine.Matrix4x4::m11
	float ___m11_5;
	// System.Single UnityEngine.Matrix4x4::m21
	float ___m21_6;
	// System.Single UnityEngine.Matrix4x4::m31
	float ___m31_7;
	// System.Single UnityEngine.Matrix4x4::m02
	float ___m02_8;
	// System.Single UnityEngine.Matrix4x4::m12
	float ___m12_9;
	// System.Single UnityEngine.Matrix4x4::m22
	float ___m22_10;
	// System.Single UnityEngine.Matrix4x4::m32
	float ___m32_11;
	// System.Single UnityEngine.Matrix4x4::m03
	float ___m03_12;
	// System.Single UnityEngine.Matrix4x4::m13
	float ___m13_13;
	// System.Single UnityEngine.Matrix4x4::m23
	float ___m23_14;
	// System.Single UnityEngine.Matrix4x4::m33
	float ___m33_15;
};

struct Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_StaticFields
{
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::zeroMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___zeroMatrix_16;
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::identityMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___identityMatrix_17;
};

// UnityEngine.Quaternion
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 
{
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;
};

struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields
{
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___identityQuaternion_4;
};

// UnityEngine.Rect
struct Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D 
{
	// System.Single UnityEngine.Rect::m_XMin
	float ___m_XMin_0;
	// System.Single UnityEngine.Rect::m_YMin
	float ___m_YMin_1;
	// System.Single UnityEngine.Rect::m_Width
	float ___m_Width_2;
	// System.Single UnityEngine.Rect::m_Height
	float ___m_Height_3;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// System.Threading.Thread
struct Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F  : public CriticalFinalizerObject_t1DCAB623CAEA6529A96F5F3EDE3C7048A6E313C9
{
	// System.Threading.InternalThread System.Threading.Thread::internal_thread
	InternalThread_tF40B7BFCBD60C82BD8475A22FF5186CA10293687* ___internal_thread_6;
	// System.Object System.Threading.Thread::m_ThreadStartArg
	RuntimeObject* ___m_ThreadStartArg_7;
	// System.Object System.Threading.Thread::pending_exception
	RuntimeObject* ___pending_exception_8;
	// System.MulticastDelegate System.Threading.Thread::m_Delegate
	MulticastDelegate_t* ___m_Delegate_10;
	// System.Threading.ExecutionContext System.Threading.Thread::m_ExecutionContext
	ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710* ___m_ExecutionContext_11;
	// System.Boolean System.Threading.Thread::m_ExecutionContextBelongsToOuterScope
	bool ___m_ExecutionContextBelongsToOuterScope_12;
	// System.Security.Principal.IPrincipal System.Threading.Thread::principal
	RuntimeObject* ___principal_13;
	// System.Int32 System.Threading.Thread::principal_version
	int32_t ___principal_version_14;
};

struct Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F_StaticFields
{
	// System.LocalDataStoreMgr System.Threading.Thread::s_LocalDataStoreMgr
	LocalDataStoreMgr_t205F1783D5CC2B148E829B5882E5406FF9A3AC1E* ___s_LocalDataStoreMgr_0;
	// System.Threading.AsyncLocal`1<System.Globalization.CultureInfo> System.Threading.Thread::s_asyncLocalCurrentCulture
	AsyncLocal_1_t1D3339EA4C8650D2DEDDF9553E5C932B3DC2CCFD* ___s_asyncLocalCurrentCulture_4;
	// System.Threading.AsyncLocal`1<System.Globalization.CultureInfo> System.Threading.Thread::s_asyncLocalCurrentUICulture
	AsyncLocal_1_t1D3339EA4C8650D2DEDDF9553E5C932B3DC2CCFD* ___s_asyncLocalCurrentUICulture_5;
};

struct Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F_ThreadStaticFields
{
	// System.LocalDataStoreHolder System.Threading.Thread::s_LocalDataStore
	LocalDataStoreHolder_t789DD474AE5141213C2105CE57830ECFC2D3C03F* ___s_LocalDataStore_1;
	// System.Globalization.CultureInfo System.Threading.Thread::m_CurrentCulture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___m_CurrentCulture_2;
	// System.Globalization.CultureInfo System.Threading.Thread::m_CurrentUICulture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___m_CurrentUICulture_3;
	// System.Threading.Thread System.Threading.Thread::current_thread
	Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F* ___current_thread_9;
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

// System.UInt64
struct UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF 
{
	// System.UInt64 System.UInt64::m_value
	uint64_t ___m_value_0;
};

// UnityEngine.Vector2
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 
{
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;
};

struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields
{
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___negativeInfinityVector_9;
};

// UnityEngine.Vector2Int
struct Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A 
{
	// System.Int32 UnityEngine.Vector2Int::m_X
	int32_t ___m_X_0;
	// System.Int32 UnityEngine.Vector2Int::m_Y
	int32_t ___m_Y_1;
};

struct Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A_StaticFields
{
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Zero
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___s_Zero_2;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_One
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___s_One_3;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Up
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___s_Up_4;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Down
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___s_Down_5;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Left
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___s_Left_6;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Right
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___s_Right_7;
};

// System.Numerics.Vector3
struct Vector3_tCC8562BAFFDC06A7846FD7D7B13397E3E8041E3D 
{
	// System.Single System.Numerics.Vector3::X
	float ___X_0;
	// System.Single System.Numerics.Vector3::Y
	float ___Y_1;
	// System.Single System.Numerics.Vector3::Z
	float ___Z_2;
};

// UnityEngine.Vector3
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 
{
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;
};

struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields
{
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___negativeInfinityVector_14;
};

// UnityEngine.Vector4
struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 
{
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;
};

struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_StaticFields
{
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___negativeInfinityVector_8;
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

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=100
struct __StaticArrayInitTypeSizeU3D100_tDC8423CC5C7CA372EDC2E1057F6B312876A06068 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D100_tDC8423CC5C7CA372EDC2E1057F6B312876A06068__padding[100];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=128
struct __StaticArrayInitTypeSizeU3D128_tF4DC60A802E7EAF26084A16B33B2CDCC817796AB 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D128_tF4DC60A802E7EAF26084A16B33B2CDCC817796AB__padding[128];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=15124
struct __StaticArrayInitTypeSizeU3D15124_t21C6CA5295193A14ACDAE178AB5C7CDA8C865B77 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D15124_t21C6CA5295193A14ACDAE178AB5C7CDA8C865B77__padding[15124];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=16
struct __StaticArrayInitTypeSizeU3D16_tFB2D94E174C3DFBC336BBEE6AD92E07462831A23 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D16_tFB2D94E174C3DFBC336BBEE6AD92E07462831A23__padding[16];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=32
struct __StaticArrayInitTypeSizeU3D32_tC3894D25C1E879699FE1C9BAB1BBF2787B405069 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D32_tC3894D25C1E879699FE1C9BAB1BBF2787B405069__padding[32];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=56
struct __StaticArrayInitTypeSizeU3D56_tF90903548CF34D92C9F741BD6D3F8DC6C822EF4E 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D56_tF90903548CF34D92C9F741BD6D3F8DC6C822EF4E__padding[56];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=76
struct __StaticArrayInitTypeSizeU3D76_tD26EB59D44A33303FCD119ABE6C31A2829EB22D6 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D76_tD26EB59D44A33303FCD119ABE6C31A2829EB22D6__padding[76];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=7924
struct __StaticArrayInitTypeSizeU3D7924_t82A2C93D47F36F6CDB0A331D748E1399E7AD9E8D 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D7924_t82A2C93D47F36F6CDB0A331D748E1399E7AD9E8D__padding[7924];
	};
};

// com.rfilkov.kinect.Kinect4AzureInterface/K4abtFrameData
struct K4abtFrameData_t49C1675DEB466170B7BF781B9A474305FB978B1D 
{
	// System.UInt64 com.rfilkov.kinect.Kinect4AzureInterface/K4abtFrameData::btFrameTimestamp
	uint64_t ___btFrameTimestamp_0;
	// Microsoft.Azure.Kinect.Sensor.Capture com.rfilkov.kinect.Kinect4AzureInterface/K4abtFrameData::btFrameCapture
	Capture_t7686D47AE8F0EC1671500B360BB9576019EA0F23* ___btFrameCapture_1;
	// Microsoft.Azure.Kinect.Sensor.Image com.rfilkov.kinect.Kinect4AzureInterface/K4abtFrameData::bodyIndexImage
	Image_tC5AB10001052B841BBF2D69DF68A046BCF9FC1A2* ___bodyIndexImage_2;
	// System.UInt32 com.rfilkov.kinect.Kinect4AzureInterface/K4abtFrameData::numberOfBodies
	uint32_t ___numberOfBodies_3;
	// System.UInt64[] com.rfilkov.kinect.Kinect4AzureInterface/K4abtFrameData::bodyIds
	UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___bodyIds_4;
	// Microsoft.Azure.Kinect.Sensor.k4abt_skeleton_t[] com.rfilkov.kinect.Kinect4AzureInterface/K4abtFrameData::bodySkeletons
	k4abt_skeleton_tU5BU5D_t5C23FA894EC14C63166951B164B26FD64783CBD5* ___bodySkeletons_5;
};
// Native definition for P/Invoke marshalling of com.rfilkov.kinect.Kinect4AzureInterface/K4abtFrameData
struct K4abtFrameData_t49C1675DEB466170B7BF781B9A474305FB978B1D_marshaled_pinvoke
{
	uint64_t ___btFrameTimestamp_0;
	Capture_t7686D47AE8F0EC1671500B360BB9576019EA0F23* ___btFrameCapture_1;
	Image_tC5AB10001052B841BBF2D69DF68A046BCF9FC1A2* ___bodyIndexImage_2;
	uint32_t ___numberOfBodies_3;
	Il2CppSafeArray/*NONE*/* ___bodyIds_4;
	k4abt_skeleton_t_t53E37DFE0F294467E640B9A7EFEF3D977D09E11A_marshaled_pinvoke* ___bodySkeletons_5;
};
// Native definition for COM marshalling of com.rfilkov.kinect.Kinect4AzureInterface/K4abtFrameData
struct K4abtFrameData_t49C1675DEB466170B7BF781B9A474305FB978B1D_marshaled_com
{
	uint64_t ___btFrameTimestamp_0;
	Capture_t7686D47AE8F0EC1671500B360BB9576019EA0F23* ___btFrameCapture_1;
	Image_tC5AB10001052B841BBF2D69DF68A046BCF9FC1A2* ___bodyIndexImage_2;
	uint32_t ___numberOfBodies_3;
	Il2CppSafeArray/*NONE*/* ___bodyIds_4;
	k4abt_skeleton_t_t53E37DFE0F294467E640B9A7EFEF3D977D09E11A_marshaled_com* ___bodySkeletons_5;
};

// <PrivateImplementationDetails>
struct U3CPrivateImplementationDetailsU3E_t0F5473E849A5A5185A9F4C5246F0C32816C49FCA  : public RuntimeObject
{
};

struct U3CPrivateImplementationDetailsU3E_t0F5473E849A5A5185A9F4C5246F0C32816C49FCA_StaticFields
{
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=7924 <PrivateImplementationDetails>::1331D8116A8A4CDA1D7B5D33D3ED34DAD03C2DFAEF63E55A6A702D1065C2ED82
	__StaticArrayInitTypeSizeU3D7924_t82A2C93D47F36F6CDB0A331D748E1399E7AD9E8D ___1331D8116A8A4CDA1D7B5D33D3ED34DAD03C2DFAEF63E55A6A702D1065C2ED82_0;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=76 <PrivateImplementationDetails>::346B68E81A9A7B684E28F13AB196C0ABA34CE6F93CA32CC88DA513DCA14451BD
	__StaticArrayInitTypeSizeU3D76_tD26EB59D44A33303FCD119ABE6C31A2829EB22D6 ___346B68E81A9A7B684E28F13AB196C0ABA34CE6F93CA32CC88DA513DCA14451BD_1;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=100 <PrivateImplementationDetails>::4B1551FD006555325BF9312FCDF668B8589D8495C24BEB3746862057A062FA43
	__StaticArrayInitTypeSizeU3D100_tDC8423CC5C7CA372EDC2E1057F6B312876A06068 ___4B1551FD006555325BF9312FCDF668B8589D8495C24BEB3746862057A062FA43_2;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=16 <PrivateImplementationDetails>::56314753044B50DF966E43C1BDB1204C8BDAA3F97A87DBCC78EAB613959BBE21
	__StaticArrayInitTypeSizeU3D16_tFB2D94E174C3DFBC336BBEE6AD92E07462831A23 ___56314753044B50DF966E43C1BDB1204C8BDAA3F97A87DBCC78EAB613959BBE21_3;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=56 <PrivateImplementationDetails>::78616D2ABD318AF695A568258391886A37432806BC6F6298189B3C8E02BC6CE4
	__StaticArrayInitTypeSizeU3D56_tF90903548CF34D92C9F741BD6D3F8DC6C822EF4E ___78616D2ABD318AF695A568258391886A37432806BC6F6298189B3C8E02BC6CE4_4;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=32 <PrivateImplementationDetails>::BA6D507AE7069E2F762C4872D81CB113C1D474EF345A88E9334C3F79DDF3B209
	__StaticArrayInitTypeSizeU3D32_tC3894D25C1E879699FE1C9BAB1BBF2787B405069 ___BA6D507AE7069E2F762C4872D81CB113C1D474EF345A88E9334C3F79DDF3B209_5;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=16 <PrivateImplementationDetails>::BAED642339816AFFB3FE8719792D0E4CE82F12DB72B7373D244EAA65445800FE
	__StaticArrayInitTypeSizeU3D16_tFB2D94E174C3DFBC336BBEE6AD92E07462831A23 ___BAED642339816AFFB3FE8719792D0E4CE82F12DB72B7373D244EAA65445800FE_6;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=15124 <PrivateImplementationDetails>::CB2198952EAA5BC7E43D950B9F2AA1966528063C7295C7262133E7FA0D3D564C
	__StaticArrayInitTypeSizeU3D15124_t21C6CA5295193A14ACDAE178AB5C7CDA8C865B77 ___CB2198952EAA5BC7E43D950B9F2AA1966528063C7295C7262133E7FA0D3D564C_7;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=128 <PrivateImplementationDetails>::D13A6BB8B7B4A4832E3EDBBFF42F7668D331790A098CFA3BE340DC3B1A5C2EA9
	__StaticArrayInitTypeSizeU3D128_tF4DC60A802E7EAF26084A16B33B2CDCC817796AB ___D13A6BB8B7B4A4832E3EDBBFF42F7668D331790A098CFA3BE340DC3B1A5C2EA9_8;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=16 <PrivateImplementationDetails>::F68E148E70B6BFBDF5687AC243823CCFE66F0BA41CEBDBD9DC74421EEEF39CEE
	__StaticArrayInitTypeSizeU3D16_tFB2D94E174C3DFBC336BBEE6AD92E07462831A23 ___F68E148E70B6BFBDF5687AC243823CCFE66F0BA41CEBDBD9DC74421EEEF39CEE_9;
};

// UnityEngine.Bounds
struct Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 
{
	// UnityEngine.Vector3 UnityEngine.Bounds::m_Center
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Center_0;
	// UnityEngine.Vector3 UnityEngine.Bounds::m_Extents
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Extents_1;
};

// UnityEngine.ComputeBuffer
struct ComputeBuffer_t51EADA9015EBCC1B982C5584E9AB2734415A8233  : public RuntimeObject
{
	// System.IntPtr UnityEngine.ComputeBuffer::m_Ptr
	intptr_t ___m_Ptr_0;
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

// Microsoft.Azure.Kinect.Sensor.Extrinsics
struct Extrinsics_t69B98E243237E490B53B0269802186347B63BA28 
{
	// System.Single[] Microsoft.Azure.Kinect.Sensor.Extrinsics::Rotation
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___Rotation_0;
	// System.Single[] Microsoft.Azure.Kinect.Sensor.Extrinsics::Translation
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___Translation_1;
};
// Native definition for P/Invoke marshalling of Microsoft.Azure.Kinect.Sensor.Extrinsics
struct Extrinsics_t69B98E243237E490B53B0269802186347B63BA28_marshaled_pinvoke
{
	float ___Rotation_0[9];
	float ___Translation_1[3];
};
// Native definition for COM marshalling of Microsoft.Azure.Kinect.Sensor.Extrinsics
struct Extrinsics_t69B98E243237E490B53B0269802186347B63BA28_marshaled_com
{
	float ___Rotation_0[9];
	float ___Translation_1[3];
};

// Microsoft.Azure.Kinect.Sensor.Intrinsics
struct Intrinsics_tB8E5E64F7D3574A70C8168289C79A4C6A226A6D6 
{
	// Microsoft.Azure.Kinect.Sensor.CalibrationModelType Microsoft.Azure.Kinect.Sensor.Intrinsics::Type
	int32_t ___Type_0;
	// System.Int32 Microsoft.Azure.Kinect.Sensor.Intrinsics::ParameterCount
	int32_t ___ParameterCount_1;
	// System.Single[] Microsoft.Azure.Kinect.Sensor.Intrinsics::Parameters
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___Parameters_2;
};
// Native definition for P/Invoke marshalling of Microsoft.Azure.Kinect.Sensor.Intrinsics
struct Intrinsics_tB8E5E64F7D3574A70C8168289C79A4C6A226A6D6_marshaled_pinvoke
{
	int32_t ___Type_0;
	int32_t ___ParameterCount_1;
	float ___Parameters_2[15];
};
// Native definition for COM marshalling of Microsoft.Azure.Kinect.Sensor.Intrinsics
struct Intrinsics_tB8E5E64F7D3574A70C8168289C79A4C6A226A6D6_marshaled_com
{
	int32_t ___Type_0;
	int32_t ___ParameterCount_1;
	float ___Parameters_2[15];
};

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;
};

struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// Microsoft.Azure.Kinect.Sensor.k4abt_joint_t
struct k4abt_joint_t_t47F41C5F1D7F1DAECB80FCB7C4EBD3CA95E5C0EC 
{
	// System.Numerics.Vector3 Microsoft.Azure.Kinect.Sensor.k4abt_joint_t::position
	Vector3_tCC8562BAFFDC06A7846FD7D7B13397E3E8041E3D ___position_0;
	// Microsoft.Azure.Kinect.Sensor.KQuaternion Microsoft.Azure.Kinect.Sensor.k4abt_joint_t::orientation
	KQuaternion_tA32A7EF9BFE1BC1FFADCE467D717447C7DEF1718 ___orientation_1;
	// Microsoft.Azure.Kinect.Sensor.k4abt_joint_confidence_level_t Microsoft.Azure.Kinect.Sensor.k4abt_joint_t::confidence_level
	int32_t ___confidence_level_2;
};

// com.rfilkov.kinect.KinectInterop/SensorData
struct SensorData_t889044994784020C5FA25311175FB3F8B715DD27  : public RuntimeObject
{
	// com.rfilkov.kinect.DepthSensorInterface com.rfilkov.kinect.KinectInterop/SensorData::sensorInterface
	RuntimeObject* ___sensorInterface_0;
	// com.rfilkov.kinect.KinectInterop/DepthSensorPlatform com.rfilkov.kinect.KinectInterop/SensorData::sensorIntPlatform
	int32_t ___sensorIntPlatform_1;
	// System.String com.rfilkov.kinect.KinectInterop/SensorData::sensorId
	String_t* ___sensorId_2;
	// System.String com.rfilkov.kinect.KinectInterop/SensorData::sensorName
	String_t* ___sensorName_3;
	// com.rfilkov.kinect.KinectInterop/FrameSource com.rfilkov.kinect.KinectInterop/SensorData::sensorCaps
	uint32_t ___sensorCaps_4;
	// System.Int64 com.rfilkov.kinect.KinectInterop/SensorData::startTimeOffset
	int64_t ___startTimeOffset_5;
	// System.Int32 com.rfilkov.kinect.KinectInterop/SensorData::sensorIndex
	int32_t ___sensorIndex_6;
	// System.Threading.Thread com.rfilkov.kinect.KinectInterop/SensorData::pollFramesThread
	Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F* ___pollFramesThread_7;
	// System.Threading.AutoResetEvent com.rfilkov.kinect.KinectInterop/SensorData::threadStopEvent
	AutoResetEvent_t7F792F3F7AD11BEF7B411E771D98E5266A8CE7C0* ___threadStopEvent_8;
	// com.rfilkov.kinect.KinectInterop/CameraIntrinsics com.rfilkov.kinect.KinectInterop/SensorData::depthCamIntr
	CameraIntrinsics_t272DC8A0981DE0A132DFC4E7B48C942191D56EFF* ___depthCamIntr_9;
	// com.rfilkov.kinect.KinectInterop/CameraIntrinsics com.rfilkov.kinect.KinectInterop/SensorData::colorCamIntr
	CameraIntrinsics_t272DC8A0981DE0A132DFC4E7B48C942191D56EFF* ___colorCamIntr_10;
	// com.rfilkov.kinect.KinectInterop/CameraExtrinsics com.rfilkov.kinect.KinectInterop/SensorData::depth2ColorExtr
	CameraExtrinsics_t78E5FF4BC4F63B394053A70F6A00AE00E3035641* ___depth2ColorExtr_11;
	// com.rfilkov.kinect.KinectInterop/CameraExtrinsics com.rfilkov.kinect.KinectInterop/SensorData::color2DepthExtr
	CameraExtrinsics_t78E5FF4BC4F63B394053A70F6A00AE00E3035641* ___color2DepthExtr_12;
	// UnityEngine.Vector3 com.rfilkov.kinect.KinectInterop/SensorData::colorImageScale
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___colorImageScale_13;
	// UnityEngine.Vector3 com.rfilkov.kinect.KinectInterop/SensorData::depthImageScale
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___depthImageScale_14;
	// UnityEngine.Vector3 com.rfilkov.kinect.KinectInterop/SensorData::infraredImageScale
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___infraredImageScale_15;
	// UnityEngine.Vector3 com.rfilkov.kinect.KinectInterop/SensorData::sensorSpaceScale
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___sensorSpaceScale_16;
	// System.Single com.rfilkov.kinect.KinectInterop/SensorData::unitToMeterFactor
	float ___unitToMeterFactor_17;
	// System.Int32 com.rfilkov.kinect.KinectInterop/SensorData::colorImageWidth
	int32_t ___colorImageWidth_18;
	// System.Int32 com.rfilkov.kinect.KinectInterop/SensorData::colorImageHeight
	int32_t ___colorImageHeight_19;
	// UnityEngine.TextureFormat com.rfilkov.kinect.KinectInterop/SensorData::colorImageFormat
	int32_t ___colorImageFormat_20;
	// System.Int32 com.rfilkov.kinect.KinectInterop/SensorData::colorImageStride
	int32_t ___colorImageStride_21;
	// UnityEngine.Texture com.rfilkov.kinect.KinectInterop/SensorData::colorImageTexture
	Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___colorImageTexture_22;
	// System.UInt64 com.rfilkov.kinect.KinectInterop/SensorData::lastColorFrameTime
	uint64_t ___lastColorFrameTime_23;
	// System.UInt64 com.rfilkov.kinect.KinectInterop/SensorData::prevColorFrameTime
	uint64_t ___prevColorFrameTime_24;
	// System.Int32 com.rfilkov.kinect.KinectInterop/SensorData::depthImageWidth
	int32_t ___depthImageWidth_25;
	// System.Int32 com.rfilkov.kinect.KinectInterop/SensorData::depthImageHeight
	int32_t ___depthImageHeight_26;
	// System.UInt16[] com.rfilkov.kinect.KinectInterop/SensorData::depthImage
	UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* ___depthImage_27;
	// System.UInt64 com.rfilkov.kinect.KinectInterop/SensorData::lastDepthFrameTime
	uint64_t ___lastDepthFrameTime_28;
	// System.UInt64 com.rfilkov.kinect.KinectInterop/SensorData::prevDepthFrameTime
	uint64_t ___prevDepthFrameTime_29;
	// System.UInt16[] com.rfilkov.kinect.KinectInterop/SensorData::infraredImage
	UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* ___infraredImage_30;
	// System.UInt64 com.rfilkov.kinect.KinectInterop/SensorData::lastInfraredFrameTime
	uint64_t ___lastInfraredFrameTime_31;
	// System.UInt64 com.rfilkov.kinect.KinectInterop/SensorData::prevInfraredFrameTime
	uint64_t ___prevInfraredFrameTime_32;
	// UnityEngine.Vector3 com.rfilkov.kinect.KinectInterop/SensorData::sensorPosePosition
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___sensorPosePosition_33;
	// UnityEngine.Quaternion com.rfilkov.kinect.KinectInterop/SensorData::sensorPoseRotation
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___sensorPoseRotation_34;
	// System.UInt64 com.rfilkov.kinect.KinectInterop/SensorData::lastSensorPoseFrameTime
	uint64_t ___lastSensorPoseFrameTime_35;
	// System.Byte[] com.rfilkov.kinect.KinectInterop/SensorData::bodyIndexImage
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___bodyIndexImage_36;
	// System.UInt64 com.rfilkov.kinect.KinectInterop/SensorData::lastBodyIndexFrameTime
	uint64_t ___lastBodyIndexFrameTime_37;
	// System.UInt32 com.rfilkov.kinect.KinectInterop/SensorData::trackedBodiesCount
	uint32_t ___trackedBodiesCount_38;
	// com.rfilkov.kinect.KinectInterop/BodyData[] com.rfilkov.kinect.KinectInterop/SensorData::alTrackedBodies
	BodyDataU5BU5D_tB7ED4CAD880D8216A8900BF4105852DF6D972120* ___alTrackedBodies_39;
	// System.UInt64 com.rfilkov.kinect.KinectInterop/SensorData::lastBodyFrameTime
	uint64_t ___lastBodyFrameTime_40;
	// UnityEngine.RenderTexture com.rfilkov.kinect.KinectInterop/SensorData::depthImageTexture
	RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___depthImageTexture_41;
	// UnityEngine.Material com.rfilkov.kinect.KinectInterop/SensorData::depthImageMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___depthImageMaterial_42;
	// UnityEngine.ComputeBuffer com.rfilkov.kinect.KinectInterop/SensorData::depthImageBuffer
	ComputeBuffer_t51EADA9015EBCC1B982C5584E9AB2734415A8233* ___depthImageBuffer_43;
	// UnityEngine.ComputeBuffer com.rfilkov.kinect.KinectInterop/SensorData::depthHistBuffer
	ComputeBuffer_t51EADA9015EBCC1B982C5584E9AB2734415A8233* ___depthHistBuffer_44;
	// System.UInt64 com.rfilkov.kinect.KinectInterop/SensorData::lastDepthImageTime
	uint64_t ___lastDepthImageTime_45;
	// UnityEngine.RenderTexture com.rfilkov.kinect.KinectInterop/SensorData::infraredImageTexture
	RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___infraredImageTexture_46;
	// UnityEngine.Material com.rfilkov.kinect.KinectInterop/SensorData::infraredImageMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___infraredImageMaterial_47;
	// UnityEngine.ComputeBuffer com.rfilkov.kinect.KinectInterop/SensorData::infraredImageBuffer
	ComputeBuffer_t51EADA9015EBCC1B982C5584E9AB2734415A8233* ___infraredImageBuffer_48;
	// System.UInt64 com.rfilkov.kinect.KinectInterop/SensorData::lastInfraredImageTime
	uint64_t ___lastInfraredImageTime_49;
	// UnityEngine.RenderTexture com.rfilkov.kinect.KinectInterop/SensorData::bodyImageTexture
	RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___bodyImageTexture_50;
	// UnityEngine.Material com.rfilkov.kinect.KinectInterop/SensorData::bodyImageMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___bodyImageMaterial_51;
	// UnityEngine.ComputeBuffer com.rfilkov.kinect.KinectInterop/SensorData::bodyIndexBuffer
	ComputeBuffer_t51EADA9015EBCC1B982C5584E9AB2734415A8233* ___bodyIndexBuffer_52;
	// UnityEngine.ComputeBuffer com.rfilkov.kinect.KinectInterop/SensorData::bodyHistBuffer
	ComputeBuffer_t51EADA9015EBCC1B982C5584E9AB2734415A8233* ___bodyHistBuffer_53;
	// System.UInt64 com.rfilkov.kinect.KinectInterop/SensorData::lastBodyImageTime
	uint64_t ___lastBodyImageTime_54;
	// System.UInt64 com.rfilkov.kinect.KinectInterop/SensorData::lastDepth2SpaceFrameTime
	uint64_t ___lastDepth2SpaceFrameTime_55;
	// UnityEngine.Texture com.rfilkov.kinect.KinectInterop/SensorData::depthCamColorImageTexture
	Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___depthCamColorImageTexture_56;
	// System.UInt64 com.rfilkov.kinect.KinectInterop/SensorData::lastDepthCamColorFrameTime
	uint64_t ___lastDepthCamColorFrameTime_57;
	// System.UInt16[] com.rfilkov.kinect.KinectInterop/SensorData::colorCamDepthImage
	UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* ___colorCamDepthImage_58;
	// System.UInt64 com.rfilkov.kinect.KinectInterop/SensorData::lastColorCamDepthFrameTime
	uint64_t ___lastColorCamDepthFrameTime_59;
	// System.UInt16[] com.rfilkov.kinect.KinectInterop/SensorData::colorCamInfraredImage
	UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* ___colorCamInfraredImage_60;
	// System.UInt64 com.rfilkov.kinect.KinectInterop/SensorData::lastColorCamInfraredFrameTime
	uint64_t ___lastColorCamInfraredFrameTime_61;
	// System.Byte[] com.rfilkov.kinect.KinectInterop/SensorData::colorCamBodyIndexImage
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___colorCamBodyIndexImage_62;
	// System.UInt64 com.rfilkov.kinect.KinectInterop/SensorData::lastColorCamBodyIndexFrameTime
	uint64_t ___lastColorCamBodyIndexFrameTime_63;
	// UnityEngine.ComputeBuffer com.rfilkov.kinect.KinectInterop/SensorData::colorDepthBuffer
	ComputeBuffer_t51EADA9015EBCC1B982C5584E9AB2734415A8233* ___colorDepthBuffer_64;
	// UnityEngine.RenderTexture com.rfilkov.kinect.KinectInterop/SensorData::colorDepthTexture
	RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___colorDepthTexture_65;
	// System.UInt64 com.rfilkov.kinect.KinectInterop/SensorData::lastColorDepthBufferTime
	uint64_t ___lastColorDepthBufferTime_66;
	// UnityEngine.ComputeBuffer com.rfilkov.kinect.KinectInterop/SensorData::colorInfraredBuffer
	ComputeBuffer_t51EADA9015EBCC1B982C5584E9AB2734415A8233* ___colorInfraredBuffer_67;
	// UnityEngine.RenderTexture com.rfilkov.kinect.KinectInterop/SensorData::colorInfraredTexture
	RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___colorInfraredTexture_68;
	// System.UInt64 com.rfilkov.kinect.KinectInterop/SensorData::lastColorInfraredBufferTime
	uint64_t ___lastColorInfraredBufferTime_69;
	// UnityEngine.Material com.rfilkov.kinect.KinectInterop/SensorData::colorInfraredMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___colorInfraredMaterial_70;
	// UnityEngine.ComputeBuffer com.rfilkov.kinect.KinectInterop/SensorData::colorBodyIndexBuffer
	ComputeBuffer_t51EADA9015EBCC1B982C5584E9AB2734415A8233* ___colorBodyIndexBuffer_71;
	// UnityEngine.RenderTexture com.rfilkov.kinect.KinectInterop/SensorData::colorBodyIndexTexture
	RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___colorBodyIndexTexture_72;
	// System.UInt64 com.rfilkov.kinect.KinectInterop/SensorData::lastColorBodyIndexBufferTime
	uint64_t ___lastColorBodyIndexBufferTime_73;
	// UnityEngine.RenderTexture com.rfilkov.kinect.KinectInterop/SensorData::depthTexTexture
	RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___depthTexTexture_74;
	// UnityEngine.Material com.rfilkov.kinect.KinectInterop/SensorData::depthTexMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___depthTexMaterial_75;
	// System.UInt64 com.rfilkov.kinect.KinectInterop/SensorData::lastDepthTexTime
	uint64_t ___lastDepthTexTime_76;
	// UnityEngine.RenderTexture com.rfilkov.kinect.KinectInterop/SensorData::infraredTexTexture
	RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___infraredTexTexture_77;
	// UnityEngine.Material com.rfilkov.kinect.KinectInterop/SensorData::infraredTexMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___infraredTexMaterial_78;
	// System.UInt64 com.rfilkov.kinect.KinectInterop/SensorData::lastInfraredTexTime
	uint64_t ___lastInfraredTexTime_79;
};

// Microsoft.Azure.Kinect.Sensor.CameraCalibration
struct CameraCalibration_t51FE985B1BDFF2A0272E903CB52055364E4AC9F1 
{
	// Microsoft.Azure.Kinect.Sensor.Extrinsics Microsoft.Azure.Kinect.Sensor.CameraCalibration::Extrinsics
	Extrinsics_t69B98E243237E490B53B0269802186347B63BA28 ___Extrinsics_0;
	// Microsoft.Azure.Kinect.Sensor.Intrinsics Microsoft.Azure.Kinect.Sensor.CameraCalibration::Intrinsics
	Intrinsics_tB8E5E64F7D3574A70C8168289C79A4C6A226A6D6 ___Intrinsics_1;
	// System.Int32 Microsoft.Azure.Kinect.Sensor.CameraCalibration::ResolutionWidth
	int32_t ___ResolutionWidth_2;
	// System.Int32 Microsoft.Azure.Kinect.Sensor.CameraCalibration::ResolutionHeight
	int32_t ___ResolutionHeight_3;
	// System.Single Microsoft.Azure.Kinect.Sensor.CameraCalibration::MetricRadius
	float ___MetricRadius_4;
};
// Native definition for P/Invoke marshalling of Microsoft.Azure.Kinect.Sensor.CameraCalibration
struct CameraCalibration_t51FE985B1BDFF2A0272E903CB52055364E4AC9F1_marshaled_pinvoke
{
	Extrinsics_t69B98E243237E490B53B0269802186347B63BA28_marshaled_pinvoke ___Extrinsics_0;
	Intrinsics_tB8E5E64F7D3574A70C8168289C79A4C6A226A6D6_marshaled_pinvoke ___Intrinsics_1;
	int32_t ___ResolutionWidth_2;
	int32_t ___ResolutionHeight_3;
	float ___MetricRadius_4;
};
// Native definition for COM marshalling of Microsoft.Azure.Kinect.Sensor.CameraCalibration
struct CameraCalibration_t51FE985B1BDFF2A0272E903CB52055364E4AC9F1_marshaled_com
{
	Extrinsics_t69B98E243237E490B53B0269802186347B63BA28_marshaled_com ___Extrinsics_0;
	Intrinsics_tB8E5E64F7D3574A70C8168289C79A4C6A226A6D6_marshaled_com ___Intrinsics_1;
	int32_t ___ResolutionWidth_2;
	int32_t ___ResolutionHeight_3;
	float ___MetricRadius_4;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// com.rfilkov.components.FragmentLighting
struct FragmentLighting_tE9A6F75445DF103494C8BFA7BD9D600355F9CDDC  : public RuntimeObject
{
	// UnityEngine.Light[] com.rfilkov.components.FragmentLighting::sceneLights
	LightU5BU5D_tDA7C763E668D91E53318509D94BC0CF10B8AB990* ___sceneLights_0;
	// UnityEngine.Bounds com.rfilkov.components.FragmentLighting::lightBounds
	Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 ___lightBounds_1;
	// UnityEngine.Vector4[] com.rfilkov.components.FragmentLighting::dirLightData
	Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* ___dirLightData_2;
	// com.rfilkov.components.FragmentLighting/PointLight[] com.rfilkov.components.FragmentLighting::pointLights
	PointLightU5BU5D_tF78EC163262CD6B9FD8581958AFC2242F35B72D8* ___pointLights_5;
	// UnityEngine.ComputeBuffer com.rfilkov.components.FragmentLighting::pointLightsBuffer
	ComputeBuffer_t51EADA9015EBCC1B982C5584E9AB2734415A8233* ___pointLightsBuffer_6;
	// System.Int32 com.rfilkov.components.FragmentLighting::pointLightsNumber
	int32_t ___pointLightsNumber_7;
	// com.rfilkov.components.FragmentLighting/SpotLight[] com.rfilkov.components.FragmentLighting::spotLights
	SpotLightU5BU5D_t88988C7F19ECEC1D979055BE799B63CD103A1F76* ___spotLights_10;
	// UnityEngine.ComputeBuffer com.rfilkov.components.FragmentLighting::spotLightsBuffer
	ComputeBuffer_t51EADA9015EBCC1B982C5584E9AB2734415A8233* ___spotLightsBuffer_11;
	// System.Int32 com.rfilkov.components.FragmentLighting::spotLightsNumber
	int32_t ___spotLightsNumber_12;
};

// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
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

// UnityEngine.Shader
struct Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.Texture
struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700_StaticFields
{
	// System.Int32 UnityEngine.Texture::GenerateAllMips
	int32_t ___GenerateAllMips_4;
};

// Microsoft.Azure.Kinect.Sensor.k4abt_skeleton_t
struct k4abt_skeleton_t_t53E37DFE0F294467E640B9A7EFEF3D977D09E11A 
{
	// Microsoft.Azure.Kinect.Sensor.k4abt_joint_t[] Microsoft.Azure.Kinect.Sensor.k4abt_skeleton_t::joints
	k4abt_joint_tU5BU5D_tBD120709567170C1C0CCCBDEC0C6277A26AD664A* ___joints_0;
};
// Native definition for P/Invoke marshalling of Microsoft.Azure.Kinect.Sensor.k4abt_skeleton_t
struct k4abt_skeleton_t_t53E37DFE0F294467E640B9A7EFEF3D977D09E11A_marshaled_pinvoke
{
	k4abt_joint_t_t47F41C5F1D7F1DAECB80FCB7C4EBD3CA95E5C0EC ___joints_0[32];
};
// Native definition for COM marshalling of Microsoft.Azure.Kinect.Sensor.k4abt_skeleton_t
struct k4abt_skeleton_t_t53E37DFE0F294467E640B9A7EFEF3D977D09E11A_marshaled_com
{
	k4abt_joint_t_t47F41C5F1D7F1DAECB80FCB7C4EBD3CA95E5C0EC ___joints_0[32];
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// Microsoft.Azure.Kinect.Sensor.Calibration
struct Calibration_t1E4A9872ADA4B8D9B6AEAF928EFB83979DD3FC57 
{
	// Microsoft.Azure.Kinect.Sensor.CameraCalibration Microsoft.Azure.Kinect.Sensor.Calibration::DepthCameraCalibration
	CameraCalibration_t51FE985B1BDFF2A0272E903CB52055364E4AC9F1 ___DepthCameraCalibration_0;
	// Microsoft.Azure.Kinect.Sensor.CameraCalibration Microsoft.Azure.Kinect.Sensor.Calibration::ColorCameraCalibration
	CameraCalibration_t51FE985B1BDFF2A0272E903CB52055364E4AC9F1 ___ColorCameraCalibration_1;
	// Microsoft.Azure.Kinect.Sensor.Extrinsics[] Microsoft.Azure.Kinect.Sensor.Calibration::DeviceExtrinsics
	ExtrinsicsU5BU5D_tC5C86DA4EF3E26611C4066FB86E915F86A4356F2* ___DeviceExtrinsics_2;
	// Microsoft.Azure.Kinect.Sensor.DepthMode Microsoft.Azure.Kinect.Sensor.Calibration::DepthMode
	int32_t ___DepthMode_3;
	// Microsoft.Azure.Kinect.Sensor.ColorResolution Microsoft.Azure.Kinect.Sensor.Calibration::ColorResolution
	int32_t ___ColorResolution_4;
};
// Native definition for P/Invoke marshalling of Microsoft.Azure.Kinect.Sensor.Calibration
struct Calibration_t1E4A9872ADA4B8D9B6AEAF928EFB83979DD3FC57_marshaled_pinvoke
{
	CameraCalibration_t51FE985B1BDFF2A0272E903CB52055364E4AC9F1_marshaled_pinvoke ___DepthCameraCalibration_0;
	CameraCalibration_t51FE985B1BDFF2A0272E903CB52055364E4AC9F1_marshaled_pinvoke ___ColorCameraCalibration_1;
	Extrinsics_t69B98E243237E490B53B0269802186347B63BA28_marshaled_pinvoke ___DeviceExtrinsics_2[16];
	int32_t ___DepthMode_3;
	int32_t ___ColorResolution_4;
};
// Native definition for COM marshalling of Microsoft.Azure.Kinect.Sensor.Calibration
struct Calibration_t1E4A9872ADA4B8D9B6AEAF928EFB83979DD3FC57_marshaled_com
{
	CameraCalibration_t51FE985B1BDFF2A0272E903CB52055364E4AC9F1_marshaled_com ___DepthCameraCalibration_0;
	CameraCalibration_t51FE985B1BDFF2A0272E903CB52055364E4AC9F1_marshaled_com ___ColorCameraCalibration_1;
	Extrinsics_t69B98E243237E490B53B0269802186347B63BA28_marshaled_com ___DeviceExtrinsics_2[16];
	int32_t ___DepthMode_3;
	int32_t ___ColorResolution_4;
};

// UnityEngine.Collider
struct Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.MeshFilter
struct MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.RenderTexture
struct RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27  : public Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700
{
};

// UnityEngine.Renderer
struct Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// System.Threading.ThreadStart
struct ThreadStart_t7662D98F1793EDE90192D7304D1C3C44119328A2  : public MulticastDelegate_t
{
};

// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_StaticFields
{
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreCull
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPreCull_4;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreRender
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPreRender_5;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPostRender
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPostRender_6;
};

// UnityEngine.CapsuleCollider
struct CapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808  : public Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76
{
};

// UnityEngine.Light
struct Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
	// System.Int32 UnityEngine.Light::m_BakedIndex
	int32_t ___m_BakedIndex_4;
};

// UnityEngine.MeshCollider
struct MeshCollider_tB525E4DDE383252364ED0BDD32CF2B53914EE455  : public Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76
{
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.SphereCollider
struct SphereCollider_tBA111C542CE97F6873DE742757213D6265C7D275  : public Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76
{
};

// com.rfilkov.kinect.DepthSensorBase
struct DepthSensorBase_tB644BCAB82289DCDB9290A9B3A6972F0F13B0774  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Boolean com.rfilkov.kinect.DepthSensorBase::getAllSensorFrames
	bool ___getAllSensorFrames_4;
	// com.rfilkov.kinect.KinectInterop/DeviceStreamingMode com.rfilkov.kinect.DepthSensorBase::deviceStreamingMode
	int32_t ___deviceStreamingMode_6;
	// System.Int32 com.rfilkov.kinect.DepthSensorBase::deviceIndex
	int32_t ___deviceIndex_7;
	// System.String com.rfilkov.kinect.DepthSensorBase::recordingFile
	String_t* ___recordingFile_8;
	// System.Single com.rfilkov.kinect.DepthSensorBase::minDepthDistance
	float ___minDepthDistance_9;
	// System.Single com.rfilkov.kinect.DepthSensorBase::maxDepthDistance
	float ___maxDepthDistance_10;
	// com.rfilkov.kinect.DepthSensorBase/PointCloudResolution com.rfilkov.kinect.DepthSensorBase::pointCloudResolution
	int32_t ___pointCloudResolution_11;
	// UnityEngine.RenderTexture com.rfilkov.kinect.DepthSensorBase::pointCloudVertexTexture
	RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___pointCloudVertexTexture_12;
	// UnityEngine.RenderTexture com.rfilkov.kinect.DepthSensorBase::pointCloudColorTexture
	RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___pointCloudColorTexture_13;
	// System.String com.rfilkov.kinect.DepthSensorBase::pointCloudPlayerList
	String_t* ___pointCloudPlayerList_14;
	// com.rfilkov.kinect.KinectInterop/FrameSource com.rfilkov.kinect.DepthSensorBase::frameSourceFlags
	uint32_t ___frameSourceFlags_15;
	// System.Boolean com.rfilkov.kinect.DepthSensorBase::isSyncDepthAndColor
	bool ___isSyncDepthAndColor_16;
	// System.Boolean com.rfilkov.kinect.DepthSensorBase::isSyncBodyAndDepth
	bool ___isSyncBodyAndDepth_17;
	// System.Boolean com.rfilkov.kinect.DepthSensorBase::consoleLogMessages
	bool ___consoleLogMessages_18;
	// System.String com.rfilkov.kinect.DepthSensorBase::sensorDeviceId
	String_t* ___sensorDeviceId_19;
	// com.rfilkov.kinect.KinectInterop/DepthSensorPlatform com.rfilkov.kinect.DepthSensorBase::sensorPlatform
	int32_t ___sensorPlatform_20;
	// UnityEngine.Vector3 com.rfilkov.kinect.DepthSensorBase::initialPosePosition
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___initialPosePosition_21;
	// UnityEngine.Quaternion com.rfilkov.kinect.DepthSensorBase::initialPoseRotation
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___initialPoseRotation_22;
	// UnityEngine.Matrix4x4 com.rfilkov.kinect.DepthSensorBase::matTransformPose
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___matTransformPose_23;
	// UnityEngine.Matrix4x4 com.rfilkov.kinect.DepthSensorBase::matLocalPose
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___matLocalPose_24;
	// System.Byte[] com.rfilkov.kinect.DepthSensorBase::rawColorImage
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___rawColorImage_25;
	// System.UInt64 com.rfilkov.kinect.DepthSensorBase::rawColorTimestamp
	uint64_t ___rawColorTimestamp_26;
	// System.UInt64 com.rfilkov.kinect.DepthSensorBase::currentColorTimestamp
	uint64_t ___currentColorTimestamp_27;
	// System.Object com.rfilkov.kinect.DepthSensorBase::colorFrameLock
	RuntimeObject* ___colorFrameLock_28;
	// System.UInt16[] com.rfilkov.kinect.DepthSensorBase::rawDepthImage
	UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* ___rawDepthImage_29;
	// System.UInt64 com.rfilkov.kinect.DepthSensorBase::rawDepthTimestamp
	uint64_t ___rawDepthTimestamp_30;
	// System.UInt64 com.rfilkov.kinect.DepthSensorBase::currentDepthTimestamp
	uint64_t ___currentDepthTimestamp_31;
	// System.Object com.rfilkov.kinect.DepthSensorBase::depthFrameLock
	RuntimeObject* ___depthFrameLock_32;
	// System.UInt16[] com.rfilkov.kinect.DepthSensorBase::rawInfraredImage
	UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* ___rawInfraredImage_33;
	// System.UInt64 com.rfilkov.kinect.DepthSensorBase::rawInfraredTimestamp
	uint64_t ___rawInfraredTimestamp_34;
	// System.UInt64 com.rfilkov.kinect.DepthSensorBase::currentInfraredTimestamp
	uint64_t ___currentInfraredTimestamp_35;
	// System.Object com.rfilkov.kinect.DepthSensorBase::infraredFrameLock
	RuntimeObject* ___infraredFrameLock_36;
	// UnityEngine.Vector3 com.rfilkov.kinect.DepthSensorBase::rawPosePosition
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rawPosePosition_37;
	// UnityEngine.Quaternion com.rfilkov.kinect.DepthSensorBase::rawPoseRotation
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rawPoseRotation_38;
	// System.UInt64 com.rfilkov.kinect.DepthSensorBase::rawPoseTimestamp
	uint64_t ___rawPoseTimestamp_39;
	// System.UInt64 com.rfilkov.kinect.DepthSensorBase::currentPoseTimestamp
	uint64_t ___currentPoseTimestamp_40;
	// System.Object com.rfilkov.kinect.DepthSensorBase::poseFrameLock
	RuntimeObject* ___poseFrameLock_41;
	// UnityEngine.Vector3 com.rfilkov.kinect.DepthSensorBase::sensorPosePosition
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___sensorPosePosition_42;
	// UnityEngine.Quaternion com.rfilkov.kinect.DepthSensorBase::sensorPoseRotation
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___sensorPoseRotation_43;
	// UnityEngine.Matrix4x4 com.rfilkov.kinect.DepthSensorBase::depth2colorCamMat
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___depth2colorCamMat_44;
	// UnityEngine.Vector3 com.rfilkov.kinect.DepthSensorBase::sensorRotOffset
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___sensorRotOffset_45;
	// System.Boolean com.rfilkov.kinect.DepthSensorBase::sensorRotFlipZ
	bool ___sensorRotFlipZ_46;
	// System.Boolean com.rfilkov.kinect.DepthSensorBase::sensorRotIgnoreY
	bool ___sensorRotIgnoreY_47;
	// System.Single com.rfilkov.kinect.DepthSensorBase::sensorRotValueY
	float ___sensorRotValueY_48;
	// System.Boolean com.rfilkov.kinect.DepthSensorBase::bIgnoreZCoordinates
	bool ___bIgnoreZCoordinates_49;
	// System.Boolean com.rfilkov.kinect.DepthSensorBase::bIgnoreInferredJoints
	bool ___bIgnoreInferredJoints_50;
	// System.Byte[] com.rfilkov.kinect.DepthSensorBase::rawBodyIndexImage
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___rawBodyIndexImage_51;
	// System.UInt32 com.rfilkov.kinect.DepthSensorBase::trackedBodiesCount
	uint32_t ___trackedBodiesCount_52;
	// System.Collections.Generic.List`1<com.rfilkov.kinect.KinectInterop/BodyData> com.rfilkov.kinect.DepthSensorBase::alTrackedBodies
	List_1_t9FA3665509F8993907178FCA58DE3B92A3D0602B* ___alTrackedBodies_53;
	// System.UInt64 com.rfilkov.kinect.DepthSensorBase::rawBodyTimestamp
	uint64_t ___rawBodyTimestamp_54;
	// System.UInt64 com.rfilkov.kinect.DepthSensorBase::rawBodyIndexTimestamp
	uint64_t ___rawBodyIndexTimestamp_55;
	// System.UInt64 com.rfilkov.kinect.DepthSensorBase::currentBodyTimestamp
	uint64_t ___currentBodyTimestamp_56;
	// System.UInt64 com.rfilkov.kinect.DepthSensorBase::currentBodyIndexTimestamp
	uint64_t ___currentBodyIndexTimestamp_57;
	// System.Object com.rfilkov.kinect.DepthSensorBase::bodyTrackerLock
	RuntimeObject* ___bodyTrackerLock_58;
	// System.Int32[] com.rfilkov.kinect.DepthSensorBase::depthHistBufferData
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___depthHistBufferData_59;
	// System.Int32[] com.rfilkov.kinect.DepthSensorBase::equalHistBufferData
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___equalHistBufferData_60;
	// System.Int32 com.rfilkov.kinect.DepthSensorBase::depthHistTotalPoints
	int32_t ___depthHistTotalPoints_61;
	// System.Single com.rfilkov.kinect.DepthSensorBase::minInfraredValue
	float ___minInfraredValue_62;
	// System.Single com.rfilkov.kinect.DepthSensorBase::maxInfraredValue
	float ___maxInfraredValue_63;
	// System.Int32[] com.rfilkov.kinect.DepthSensorBase::depthBodyBufferData
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___depthBodyBufferData_64;
	// System.Int32[] com.rfilkov.kinect.DepthSensorBase::equalBodyBufferData
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___equalBodyBufferData_65;
	// System.Int32 com.rfilkov.kinect.DepthSensorBase::bodyHistTotalPoints
	int32_t ___bodyHistTotalPoints_66;
	// System.UInt64 com.rfilkov.kinect.DepthSensorBase::lastDepthCoordFrameTime
	uint64_t ___lastDepthCoordFrameTime_67;
	// UnityEngine.ComputeShader com.rfilkov.kinect.DepthSensorBase::pointCloudVertexShader
	ComputeShader_tA7BDD0F6EE879D149480F5890BA2E665C50CFBF8* ___pointCloudVertexShader_68;
	// System.Int32 com.rfilkov.kinect.DepthSensorBase::pointCloudVertexKernel
	int32_t ___pointCloudVertexKernel_69;
	// UnityEngine.Vector2Int com.rfilkov.kinect.DepthSensorBase::pointCloudVertexRes
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___pointCloudVertexRes_70;
	// System.Int32[] com.rfilkov.kinect.DepthSensorBase::pointCloudPlayerIndices
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___pointCloudPlayerIndices_71;
	// System.Int32[] com.rfilkov.kinect.DepthSensorBase::pointCloudBodyIndices
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___pointCloudBodyIndices_72;
	// UnityEngine.RenderTexture com.rfilkov.kinect.DepthSensorBase::pointCloudVertexRT
	RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___pointCloudVertexRT_73;
	// UnityEngine.ComputeBuffer com.rfilkov.kinect.DepthSensorBase::pointCloudSpaceBuffer
	ComputeBuffer_t51EADA9015EBCC1B982C5584E9AB2734415A8233* ___pointCloudSpaceBuffer_74;
	// UnityEngine.ComputeBuffer com.rfilkov.kinect.DepthSensorBase::pointCloudDepthBuffer
	ComputeBuffer_t51EADA9015EBCC1B982C5584E9AB2734415A8233* ___pointCloudDepthBuffer_75;
	// UnityEngine.ComputeBuffer com.rfilkov.kinect.DepthSensorBase::pointCloudInfraredBuffer
	ComputeBuffer_t51EADA9015EBCC1B982C5584E9AB2734415A8233* ___pointCloudInfraredBuffer_76;
	// UnityEngine.ComputeBuffer com.rfilkov.kinect.DepthSensorBase::pointCloudBodyIndexBuffer
	ComputeBuffer_t51EADA9015EBCC1B982C5584E9AB2734415A8233* ___pointCloudBodyIndexBuffer_77;
	// UnityEngine.ComputeShader com.rfilkov.kinect.DepthSensorBase::pointCloudColorShader
	ComputeShader_tA7BDD0F6EE879D149480F5890BA2E665C50CFBF8* ___pointCloudColorShader_78;
	// System.Int32 com.rfilkov.kinect.DepthSensorBase::pointCloudColorKernel
	int32_t ___pointCloudColorKernel_79;
	// UnityEngine.Vector2Int com.rfilkov.kinect.DepthSensorBase::pointCloudColorRes
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___pointCloudColorRes_80;
	// UnityEngine.RenderTexture com.rfilkov.kinect.DepthSensorBase::pointCloudColorRT
	RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___pointCloudColorRT_81;
	// UnityEngine.ComputeBuffer com.rfilkov.kinect.DepthSensorBase::pointCloudCoordBuffer
	ComputeBuffer_t51EADA9015EBCC1B982C5584E9AB2734415A8233* ___pointCloudCoordBuffer_82;
	// UnityEngine.Texture2D com.rfilkov.kinect.DepthSensorBase::pointCloudAlignedColorTex
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___pointCloudAlignedColorTex_83;
	// UnityEngine.Vector3[] com.rfilkov.kinect.DepthSensorBase::depth2SpaceTable
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___depth2SpaceTable_84;
	// System.Int32 com.rfilkov.kinect.DepthSensorBase::depth2SpaceWidth
	int32_t ___depth2SpaceWidth_85;
	// System.Int32 com.rfilkov.kinect.DepthSensorBase::depth2SpaceHeight
	int32_t ___depth2SpaceHeight_86;
	// UnityEngine.Vector3[] com.rfilkov.kinect.DepthSensorBase::color2SpaceTable
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___color2SpaceTable_87;
	// System.Int32 com.rfilkov.kinect.DepthSensorBase::color2SpaceWidth
	int32_t ___color2SpaceWidth_88;
	// System.Int32 com.rfilkov.kinect.DepthSensorBase::color2SpaceHeight
	int32_t ___color2SpaceHeight_89;
	// System.Byte[] com.rfilkov.kinect.DepthSensorBase::depthCamColorDataFrame
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___depthCamColorDataFrame_90;
	// UnityEngine.Vector2[] com.rfilkov.kinect.DepthSensorBase::depthCamColorCoordFrame
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___depthCamColorCoordFrame_91;
	// System.UInt64 com.rfilkov.kinect.DepthSensorBase::lastDepthCamColorFrameTime
	uint64_t ___lastDepthCamColorFrameTime_92;
	// System.Object com.rfilkov.kinect.DepthSensorBase::depthCamColorFrameLock
	RuntimeObject* ___depthCamColorFrameLock_93;
	// System.UInt16[] com.rfilkov.kinect.DepthSensorBase::colorCamDepthDataFrame
	UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* ___colorCamDepthDataFrame_94;
	// UnityEngine.Vector2[] com.rfilkov.kinect.DepthSensorBase::colorCamDepthCoordFrame
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___colorCamDepthCoordFrame_95;
	// System.UInt64 com.rfilkov.kinect.DepthSensorBase::lastColorCamDepthFrameTime
	uint64_t ___lastColorCamDepthFrameTime_96;
	// System.Object com.rfilkov.kinect.DepthSensorBase::colorCamDepthFrameLock
	RuntimeObject* ___colorCamDepthFrameLock_97;
	// System.Byte[] com.rfilkov.kinect.DepthSensorBase::colorCamBodyIndexFrame
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___colorCamBodyIndexFrame_98;
	// System.UInt64 com.rfilkov.kinect.DepthSensorBase::lastColorCamBodyIndexFrameTime
	uint64_t ___lastColorCamBodyIndexFrameTime_99;
	// System.Object com.rfilkov.kinect.DepthSensorBase::colorCamBodyIndexFrameLock
	RuntimeObject* ___colorCamBodyIndexFrameLock_100;
	// System.UInt16[] com.rfilkov.kinect.DepthSensorBase::colorCamInfraredDataFrame
	UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* ___colorCamInfraredDataFrame_101;
	// System.UInt64 com.rfilkov.kinect.DepthSensorBase::lastColorCamInfraredFrameTime
	uint64_t ___lastColorCamInfraredFrameTime_102;
	// System.Object com.rfilkov.kinect.DepthSensorBase::colorCamInfraredFrameLock
	RuntimeObject* ___colorCamInfraredFrameLock_103;
	// UnityEngine.ComputeShader com.rfilkov.kinect.DepthSensorBase::colorDepthShader
	ComputeShader_tA7BDD0F6EE879D149480F5890BA2E665C50CFBF8* ___colorDepthShader_104;
	// System.Int32 com.rfilkov.kinect.DepthSensorBase::colorDepthKernel
	int32_t ___colorDepthKernel_105;
	// System.Boolean com.rfilkov.kinect.DepthSensorBase::colorDepthShaderInited
	bool ___colorDepthShaderInited_106;
	// UnityEngine.ComputeShader com.rfilkov.kinect.DepthSensorBase::colorInfraredShader
	ComputeShader_tA7BDD0F6EE879D149480F5890BA2E665C50CFBF8* ___colorInfraredShader_107;
	// System.Int32 com.rfilkov.kinect.DepthSensorBase::colorInfraredKernel
	int32_t ___colorInfraredKernel_108;
	// System.Boolean com.rfilkov.kinect.DepthSensorBase::colorInfraredShaderInited
	bool ___colorInfraredShaderInited_109;
	// UnityEngine.ComputeShader com.rfilkov.kinect.DepthSensorBase::colorBodyIndexShader
	ComputeShader_tA7BDD0F6EE879D149480F5890BA2E665C50CFBF8* ___colorBodyIndexShader_110;
	// System.Int32 com.rfilkov.kinect.DepthSensorBase::colorBodyIndexKernel
	int32_t ___colorBodyIndexKernel_111;
	// System.Boolean com.rfilkov.kinect.DepthSensorBase::colorBodyIndexShaderInited
	bool ___colorBodyIndexShaderInited_112;
	// UnityEngine.ComputeBuffer com.rfilkov.kinect.DepthSensorBase::bodyIndexBuffer
	ComputeBuffer_t51EADA9015EBCC1B982C5584E9AB2734415A8233* ___bodyIndexBuffer_113;
	// com.rfilkov.kinect.KinectUserBodyMerger com.rfilkov.kinect.DepthSensorBase::userBodyMerger
	KinectUserBodyMerger_tF4593FF342507DD0D96D811F871DF1EA9E76ECAA* ___userBodyMerger_114;
	// System.Boolean com.rfilkov.kinect.DepthSensorBase::userBodyMergerInited
	bool ___userBodyMergerInited_115;
	// com.rfilkov.kinect.JointPositionsFilter com.rfilkov.kinect.DepthSensorBase::jointPositionFilter
	JointPositionsFilter_t70B58FF6580070879B7A03221D48370EC2266F54* ___jointPositionFilter_116;
};

struct DepthSensorBase_tB644BCAB82289DCDB9290A9B3A6972F0F13B0774_StaticFields
{
	// UnityEngine.Vector3[] com.rfilkov.kinect.DepthSensorBase::KinectJointBaseDir
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___KinectJointBaseDir_117;
};

// com.rfilkov.kinect.KinectManager
struct KinectManager_t6D168A1C710083948363282B0D862EDDFFD88211  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Boolean com.rfilkov.kinect.KinectManager::useMultiCamConfig
	bool ___useMultiCamConfig_4;
	// System.Boolean com.rfilkov.kinect.KinectManager::syncMultiCamFrames
	bool ___syncMultiCamFrames_5;
	// com.rfilkov.kinect.KinectManager/DepthTextureType com.rfilkov.kinect.KinectManager::getDepthFrames
	int32_t ___getDepthFrames_6;
	// com.rfilkov.kinect.KinectManager/ColorTextureType com.rfilkov.kinect.KinectManager::getColorFrames
	int32_t ___getColorFrames_7;
	// com.rfilkov.kinect.KinectManager/InfraredTextureType com.rfilkov.kinect.KinectManager::getInfraredFrames
	int32_t ___getInfraredFrames_8;
	// com.rfilkov.kinect.KinectManager/PoseUsageType com.rfilkov.kinect.KinectManager::getPoseFrames
	int32_t ___getPoseFrames_9;
	// com.rfilkov.kinect.KinectManager/BodyTextureType com.rfilkov.kinect.KinectManager::getBodyFrames
	int32_t ___getBodyFrames_10;
	// System.Boolean com.rfilkov.kinect.KinectManager::pollFramesInThread
	bool ___pollFramesInThread_11;
	// System.Boolean com.rfilkov.kinect.KinectManager::syncDepthAndColor
	bool ___syncDepthAndColor_12;
	// System.Boolean com.rfilkov.kinect.KinectManager::syncBodyAndDepth
	bool ___syncBodyAndDepth_13;
	// System.Single com.rfilkov.kinect.KinectManager::minUserDistance
	float ___minUserDistance_14;
	// System.Single com.rfilkov.kinect.KinectManager::maxUserDistance
	float ___maxUserDistance_15;
	// System.Single com.rfilkov.kinect.KinectManager::maxLeftRightDistance
	float ___maxLeftRightDistance_16;
	// System.Int32 com.rfilkov.kinect.KinectManager::maxTrackedUsers
	int32_t ___maxTrackedUsers_17;
	// System.Boolean com.rfilkov.kinect.KinectManager::showAllowedUsersOnly
	bool ___showAllowedUsersOnly_18;
	// com.rfilkov.kinect.KinectManager/UserDetectionOrder com.rfilkov.kinect.KinectManager::userDetectionOrder
	int32_t ___userDetectionOrder_19;
	// System.Boolean com.rfilkov.kinect.KinectManager::ignoreInferredJoints
	bool ___ignoreInferredJoints_20;
	// System.Boolean com.rfilkov.kinect.KinectManager::ignoreZCoordinates
	bool ___ignoreZCoordinates_21;
	// com.rfilkov.kinect.SmoothingType com.rfilkov.kinect.KinectManager::jointPositionSmoothing
	int32_t ___jointPositionSmoothing_22;
	// System.Boolean com.rfilkov.kinect.KinectManager::estimateJointVelocities
	bool ___estimateJointVelocities_23;
	// com.rfilkov.kinect.SmoothingType com.rfilkov.kinect.KinectManager::jointVelocitySmoothing
	int32_t ___jointVelocitySmoothing_24;
	// System.Boolean com.rfilkov.kinect.KinectManager::boneOrientationConstraints
	bool ___boneOrientationConstraints_25;
	// System.Single com.rfilkov.kinect.KinectManager::waitTimeBeforeRemove
	float ___waitTimeBeforeRemove_26;
	// com.rfilkov.kinect.GestureType com.rfilkov.kinect.KinectManager::playerCalibrationPose
	int32_t ___playerCalibrationPose_27;
	// com.rfilkov.kinect.KinectUserManager com.rfilkov.kinect.KinectManager::userManager
	KinectUserManager_t3056CC8578B4DF84953B7857B95A6EF1E565E897* ___userManager_28;
	// com.rfilkov.kinect.KinectGestureManager com.rfilkov.kinect.KinectManager::gestureManager
	KinectGestureManager_tDF90B637AB862EA65E3133DC1769ADF627B33D0A* ___gestureManager_29;
	// System.Collections.Generic.List`1<com.rfilkov.kinect.KinectManager/DisplayImageType> com.rfilkov.kinect.KinectManager::displayImages
	List_1_tBD748F15E2C57234C3B7BF0402CBC90A40CEC31A* ___displayImages_30;
	// System.Single com.rfilkov.kinect.KinectManager::displayImageWidthPercent
	float ___displayImageWidthPercent_31;
	// UnityEngine.UI.Text com.rfilkov.kinect.KinectManager::statusInfoText
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___statusInfoText_32;
	// System.Boolean com.rfilkov.kinect.KinectManager::consoleLogMessages
	bool ___consoleLogMessages_33;
	// com.rfilkov.kinect.KinectManager/DepthSensorStartStopEvent com.rfilkov.kinect.KinectManager::OnDepthSensorsStarted
	DepthSensorStartStopEvent_t8A0D3642F28C42CA0F15037227D5AF4041C56DDB* ___OnDepthSensorsStarted_34;
	// com.rfilkov.kinect.KinectManager/DepthSensorStartStopEvent com.rfilkov.kinect.KinectManager::OnDepthSensorsStopped
	DepthSensorStartStopEvent_t8A0D3642F28C42CA0F15037227D5AF4041C56DDB* ___OnDepthSensorsStopped_35;
	// System.Boolean com.rfilkov.kinect.KinectManager::kinectInitialized
	bool ___kinectInitialized_36;
	// System.Collections.Generic.List`1<com.rfilkov.kinect.DepthSensorInterface> com.rfilkov.kinect.KinectManager::sensorInterfaces
	List_1_t7EB4B3DD58095205A08A56A510A28738AA6D7A95* ___sensorInterfaces_38;
	// System.Collections.Generic.List`1<com.rfilkov.kinect.KinectInterop/SensorData> com.rfilkov.kinect.KinectManager::sensorDatas
	List_1_tADEF9E4C876CA48200A79DBC18A4E66F9A34F6DD* ___sensorDatas_39;
	// System.UInt64 com.rfilkov.kinect.KinectManager::lastBodyFrameTime
	uint64_t ___lastBodyFrameTime_40;
	// System.UInt32 com.rfilkov.kinect.KinectManager::trackedBodiesCount
	uint32_t ___trackedBodiesCount_41;
	// com.rfilkov.kinect.KinectInterop/BodyData[] com.rfilkov.kinect.KinectManager::alTrackedBodies
	BodyDataU5BU5D_tB7ED4CAD880D8216A8900BF4105852DF6D972120* ___alTrackedBodies_42;
	// System.Int64 com.rfilkov.kinect.KinectManager::lastBodyFrameTicks
	int64_t ___lastBodyFrameTicks_43;
	// System.Int64 com.rfilkov.kinect.KinectManager::prevBodyFrameTicks
	int64_t ___prevBodyFrameTicks_44;
	// System.Int32 com.rfilkov.kinect.KinectManager::btSensorIndex
	int32_t ___btSensorIndex_45;
	// System.Int32 com.rfilkov.kinect.KinectManager::selectedBodyIndex
	int32_t ___selectedBodyIndex_46;
	// System.Boolean com.rfilkov.kinect.KinectManager::bLimitedUsers
	bool ___bLimitedUsers_47;
	// com.rfilkov.kinect.BoneOrientationConstraints com.rfilkov.kinect.KinectManager::boneConstraints
	BoneOrientationConstraints_t83384E3BC3AA19A10D2275993FA2393BE3EC93F3* ___boneConstraints_48;
	// com.rfilkov.kinect.KinectUserBodyMerger com.rfilkov.kinect.KinectManager::userBodyMerger
	KinectUserBodyMerger_tF4593FF342507DD0D96D811F871DF1EA9E76ECAA* ___userBodyMerger_49;
	// com.rfilkov.kinect.JointPositionsFilter com.rfilkov.kinect.KinectManager::jointPositionFilter
	JointPositionsFilter_t70B58FF6580070879B7A03221D48370EC2266F54* ___jointPositionFilter_50;
	// com.rfilkov.kinect.JointVelocitiesFilter com.rfilkov.kinect.KinectManager::jointVelocityFilter
	JointVelocitiesFilter_t564D2BC560AF4C4A0027B810FB3FE90449651987* ___jointVelocityFilter_51;
	// System.Boolean com.rfilkov.kinect.KinectManager::isPlayModeEnabled
	bool ___isPlayModeEnabled_52;
	// System.String com.rfilkov.kinect.KinectManager::playModeData
	String_t* ___playModeData_53;
	// UnityEngine.Color[] com.rfilkov.kinect.KinectManager::clrUsers
	ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* ___clrUsers_57;
};

struct KinectManager_t6D168A1C710083948363282B0D862EDDFFD88211_StaticFields
{
	// com.rfilkov.kinect.KinectManager com.rfilkov.kinect.KinectManager::instance
	KinectManager_t6D168A1C710083948363282B0D862EDDFFD88211* ___instance_37;
	// System.Int32[] com.rfilkov.kinect.KinectManager::UBB_Joints
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___UBB_Joints_54;
	// UnityEngine.Color com.rfilkov.kinect.KinectManager::_bodyColorNone
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ____bodyColorNone_55;
	// UnityEngine.Color[] com.rfilkov.kinect.KinectManager::_bodyIndexColors
	ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* ____bodyIndexColors_56;
	// UnityEngine.Color[] com.rfilkov.kinect.KinectManager::_initialBodyIndexColors
	ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* ____initialBodyIndexColors_58;
};

// com.rfilkov.components.SceneMeshRendererGpu
struct SceneMeshRendererGpu_t5E08B994ADA093F4C771151BE372410DAA8D238D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Int32 com.rfilkov.components.SceneMeshRendererGpu::sensorIndex
	int32_t ___sensorIndex_4;
	// com.rfilkov.kinect.DepthSensorBase/PointCloudResolution com.rfilkov.components.SceneMeshRendererGpu::sourceImageResolution
	int32_t ___sourceImageResolution_5;
	// System.Boolean com.rfilkov.components.SceneMeshRendererGpu::showAsPointCloud
	bool ___showAsPointCloud_6;
	// System.Int32 com.rfilkov.components.SceneMeshRendererGpu::coarseFactor
	int32_t ___coarseFactor_7;
	// System.Single com.rfilkov.components.SceneMeshRendererGpu::edgeCutoffFactor
	float ___edgeCutoffFactor_8;
	// com.rfilkov.components.SceneMeshRendererGpu/MeshTextureType com.rfilkov.components.SceneMeshRendererGpu::meshTexture
	int32_t ___meshTexture_9;
	// System.Single com.rfilkov.components.SceneMeshRendererGpu::xMin
	float ___xMin_10;
	// System.Single com.rfilkov.components.SceneMeshRendererGpu::xMax
	float ___xMax_11;
	// System.Single com.rfilkov.components.SceneMeshRendererGpu::yMin
	float ___yMin_12;
	// System.Single com.rfilkov.components.SceneMeshRendererGpu::yMax
	float ___yMax_13;
	// System.Single com.rfilkov.components.SceneMeshRendererGpu::zMin
	float ___zMin_14;
	// System.Single com.rfilkov.components.SceneMeshRendererGpu::zMax
	float ___zMax_15;
	// System.Single com.rfilkov.components.SceneMeshRendererGpu::updateMeshInterval
	float ___updateMeshInterval_16;
	// System.Single com.rfilkov.components.SceneMeshRendererGpu::updateColliderInterval
	float ___updateColliderInterval_17;
	// System.Boolean com.rfilkov.components.SceneMeshRendererGpu::applyLighting
	bool ___applyLighting_18;
	// UnityEngine.Mesh com.rfilkov.components.SceneMeshRendererGpu::mesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___mesh_19;
	// UnityEngine.Transform com.rfilkov.components.SceneMeshRendererGpu::trans
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___trans_20;
	// com.rfilkov.kinect.KinectManager com.rfilkov.components.SceneMeshRendererGpu::kinectManager
	KinectManager_t6D168A1C710083948363282B0D862EDDFFD88211* ___kinectManager_21;
	// com.rfilkov.kinect.KinectInterop/SensorData com.rfilkov.components.SceneMeshRendererGpu::sensorData
	SensorData_t889044994784020C5FA25311175FB3F8B715DD27* ___sensorData_22;
	// com.rfilkov.kinect.DepthSensorBase com.rfilkov.components.SceneMeshRendererGpu::sensorInt
	DepthSensorBase_tB644BCAB82289DCDB9290A9B3A6972F0F13B0774* ___sensorInt_23;
	// UnityEngine.Material com.rfilkov.components.SceneMeshRendererGpu::meshShaderMat
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___meshShaderMat_24;
	// UnityEngine.Vector3[] com.rfilkov.components.SceneMeshRendererGpu::spaceTable
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___spaceTable_25;
	// UnityEngine.ComputeBuffer com.rfilkov.components.SceneMeshRendererGpu::spaceTableBuffer
	ComputeBuffer_t51EADA9015EBCC1B982C5584E9AB2734415A8233* ___spaceTableBuffer_26;
	// UnityEngine.Vector3 com.rfilkov.components.SceneMeshRendererGpu::sensorSpaceScale
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___sensorSpaceScale_27;
	// System.UInt16[] com.rfilkov.components.SceneMeshRendererGpu::depthImageCopy
	UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* ___depthImageCopy_28;
	// UnityEngine.ComputeBuffer com.rfilkov.components.SceneMeshRendererGpu::depthImageBuffer
	ComputeBuffer_t51EADA9015EBCC1B982C5584E9AB2734415A8233* ___depthImageBuffer_29;
	// UnityEngine.RenderTexture com.rfilkov.components.SceneMeshRendererGpu::colorTexture
	RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___colorTexture_30;
	// UnityEngine.RenderTexture com.rfilkov.components.SceneMeshRendererGpu::colorTextureCopy
	RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___colorTextureCopy_31;
	// System.Boolean com.rfilkov.components.SceneMeshRendererGpu::colorTextureCreated
	bool ___colorTextureCreated_32;
	// System.UInt64 com.rfilkov.components.SceneMeshRendererGpu::lastDepthFrameTime
	uint64_t ___lastDepthFrameTime_33;
	// System.Single com.rfilkov.components.SceneMeshRendererGpu::lastMeshUpdateTime
	float ___lastMeshUpdateTime_34;
	// System.Single com.rfilkov.components.SceneMeshRendererGpu::lastColliderUpdateTime
	float ___lastColliderUpdateTime_35;
	// System.Int32 com.rfilkov.components.SceneMeshRendererGpu::imageWidth
	int32_t ___imageWidth_36;
	// System.Int32 com.rfilkov.components.SceneMeshRendererGpu::imageHeight
	int32_t ___imageHeight_37;
	// System.Boolean com.rfilkov.components.SceneMeshRendererGpu::bMeshInited
	bool ___bMeshInited_38;
	// System.Int32 com.rfilkov.components.SceneMeshRendererGpu::meshParamsCache
	int32_t ___meshParamsCache_39;
	// com.rfilkov.components.FragmentLighting com.rfilkov.components.SceneMeshRendererGpu::lighting
	FragmentLighting_tE9A6F75445DF103494C8BFA7BD9D600355F9CDDC* ___lighting_40;
};

// com.rfilkov.components.SensorPoseStartupEstimator
struct SensorPoseStartupEstimator_tFA5A8D4CA2DA8961BF7DB8E53A3EF98FB4311849  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Int32 com.rfilkov.components.SensorPoseStartupEstimator::sensorIndex
	int32_t ___sensorIndex_4;
	// System.Single com.rfilkov.components.SensorPoseStartupEstimator::duration
	float ___duration_5;
	// com.rfilkov.kinect.KinectManager com.rfilkov.components.SensorPoseStartupEstimator::kinectManager
	KinectManager_t6D168A1C710083948363282B0D862EDDFFD88211* ___kinectManager_6;
	// com.rfilkov.kinect.KinectInterop/SensorData com.rfilkov.components.SensorPoseStartupEstimator::sensorData
	SensorData_t889044994784020C5FA25311175FB3F8B715DD27* ___sensorData_7;
	// com.rfilkov.kinect.DepthSensorInterface com.rfilkov.components.SensorPoseStartupEstimator::sensorInterface
	RuntimeObject* ___sensorInterface_8;
	// com.rfilkov.kinect.KinectInterop/DepthSensorPlatform com.rfilkov.components.SensorPoseStartupEstimator::sensorPlatform
	int32_t ___sensorPlatform_9;
	// System.Boolean com.rfilkov.components.SensorPoseStartupEstimator::isEstimating
	bool ___isEstimating_10;
	// System.Boolean com.rfilkov.components.SensorPoseStartupEstimator::isCompleted
	bool ___isCompleted_11;
	// System.Single com.rfilkov.components.SensorPoseStartupEstimator::startTime
	float ___startTime_12;
};

// com.rfilkov.components.UserMeshRenderer
struct UserMeshRenderer_tE896EB6D7C675E98F5AF9306C25AAB1EF96A7E2F  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Int32 com.rfilkov.components.UserMeshRenderer::playerIndex
	int32_t ___playerIndex_4;
	// System.Int32 com.rfilkov.components.UserMeshRenderer::sensorIndex
	int32_t ___sensorIndex_5;
	// com.rfilkov.kinect.DepthSensorBase/PointCloudResolution com.rfilkov.components.UserMeshRenderer::sourceImageResolution
	int32_t ___sourceImageResolution_6;
	// System.Boolean com.rfilkov.components.UserMeshRenderer::showAsPointCloud
	bool ___showAsPointCloud_7;
	// System.Single com.rfilkov.components.UserMeshRenderer::updateMeshInterval
	float ___updateMeshInterval_8;
	// System.Single com.rfilkov.components.UserMeshRenderer::updateColliderInterval
	float ___updateColliderInterval_9;
	// UnityEngine.Mesh com.rfilkov.components.UserMeshRenderer::mesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___mesh_10;
	// com.rfilkov.kinect.KinectManager com.rfilkov.components.UserMeshRenderer::kinectManager
	KinectManager_t6D168A1C710083948363282B0D862EDDFFD88211* ___kinectManager_11;
	// com.rfilkov.kinect.KinectInterop/SensorData com.rfilkov.components.UserMeshRenderer::sensorData
	SensorData_t889044994784020C5FA25311175FB3F8B715DD27* ___sensorData_12;
	// com.rfilkov.kinect.DepthSensorBase com.rfilkov.components.UserMeshRenderer::sensorInt
	DepthSensorBase_tB644BCAB82289DCDB9290A9B3A6972F0F13B0774* ___sensorInt_13;
	// UnityEngine.Vector3 com.rfilkov.components.UserMeshRenderer::spaceScale
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___spaceScale_14;
	// UnityEngine.RenderTexture com.rfilkov.components.UserMeshRenderer::colorTexture
	RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___colorTexture_15;
	// UnityEngine.RenderTexture com.rfilkov.components.UserMeshRenderer::colorTextureBuildMesh
	RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___colorTextureBuildMesh_16;
	// UnityEngine.RenderTexture com.rfilkov.components.UserMeshRenderer::colorTextureUpdateMesh
	RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___colorTextureUpdateMesh_17;
	// System.Boolean com.rfilkov.components.UserMeshRenderer::colorTextureCreated
	bool ___colorTextureCreated_18;
	// System.Boolean com.rfilkov.components.UserMeshRenderer::bColorCamRes
	bool ___bColorCamRes_19;
	// System.UInt16[] com.rfilkov.components.UserMeshRenderer::tDepthImage
	UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* ___tDepthImage_20;
	// System.Byte[] com.rfilkov.components.UserMeshRenderer::tBodyIndexImage
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___tBodyIndexImage_21;
	// System.UInt64 com.rfilkov.components.UserMeshRenderer::lastSpaceCoordsTime
	uint64_t ___lastSpaceCoordsTime_22;
	// System.Single com.rfilkov.components.UserMeshRenderer::lastMeshUpdateTime
	float ___lastMeshUpdateTime_23;
	// System.Single com.rfilkov.components.UserMeshRenderer::lastColliderUpdateTime
	float ___lastColliderUpdateTime_24;
	// System.UInt64 com.rfilkov.components.UserMeshRenderer::userId
	uint64_t ___userId_25;
	// System.Byte com.rfilkov.components.UserMeshRenderer::userBodyIndex
	uint8_t ___userBodyIndex_26;
	// UnityEngine.Vector3 com.rfilkov.components.UserMeshRenderer::userBodyPos
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___userBodyPos_27;
	// System.Int32 com.rfilkov.components.UserMeshRenderer::imageWidth
	int32_t ___imageWidth_28;
	// System.Int32 com.rfilkov.components.UserMeshRenderer::imageHeight
	int32_t ___imageHeight_29;
	// UnityEngine.Vector3[] com.rfilkov.components.UserMeshRenderer::spaceTable
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___spaceTable_30;
	// UnityEngine.Vector3[] com.rfilkov.components.UserMeshRenderer::meshVertices
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___meshVertices_31;
	// System.Int32[] com.rfilkov.components.UserMeshRenderer::meshIndices
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___meshIndices_32;
	// System.Byte[] com.rfilkov.components.UserMeshRenderer::meshVertUsed
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___meshVertUsed_33;
	// System.Boolean com.rfilkov.components.UserMeshRenderer::bMeshInited
	bool ___bMeshInited_34;
	// System.Threading.Thread com.rfilkov.components.UserMeshRenderer::buildMeshThread
	Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F* ___buildMeshThread_35;
	// System.Boolean com.rfilkov.components.UserMeshRenderer::bStopThread
	bool ___bStopThread_36;
	// System.Boolean com.rfilkov.components.UserMeshRenderer::bBuildMesh
	bool ___bBuildMesh_37;
	// System.Boolean com.rfilkov.components.UserMeshRenderer::bUpdateMesh
	bool ___bUpdateMesh_38;
};

// com.rfilkov.components.UserMeshRendererGpu
struct UserMeshRendererGpu_tCA868CF70531660324A409C0EF918366C78D6E54  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Int32 com.rfilkov.components.UserMeshRendererGpu::playerIndex
	int32_t ___playerIndex_4;
	// System.Int32 com.rfilkov.components.UserMeshRendererGpu::sensorIndex
	int32_t ___sensorIndex_5;
	// com.rfilkov.kinect.DepthSensorBase/PointCloudResolution com.rfilkov.components.UserMeshRendererGpu::sourceImageResolution
	int32_t ___sourceImageResolution_6;
	// System.Boolean com.rfilkov.components.UserMeshRendererGpu::showAsPointCloud
	bool ___showAsPointCloud_7;
	// System.Int32 com.rfilkov.components.UserMeshRendererGpu::coarseFactor
	int32_t ___coarseFactor_8;
	// System.Single com.rfilkov.components.UserMeshRendererGpu::edgeCutoffFactor
	float ___edgeCutoffFactor_9;
	// com.rfilkov.components.UserMeshRendererGpu/MeshTextureType com.rfilkov.components.UserMeshRendererGpu::meshTexture
	int32_t ___meshTexture_10;
	// System.Single com.rfilkov.components.UserMeshRendererGpu::updateMeshInterval
	float ___updateMeshInterval_11;
	// System.Single com.rfilkov.components.UserMeshRendererGpu::updateColliderInterval
	float ___updateColliderInterval_12;
	// System.Boolean com.rfilkov.components.UserMeshRendererGpu::applyLighting
	bool ___applyLighting_13;
	// UnityEngine.Mesh com.rfilkov.components.UserMeshRendererGpu::mesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___mesh_14;
	// UnityEngine.Transform com.rfilkov.components.UserMeshRendererGpu::trans
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___trans_15;
	// com.rfilkov.kinect.KinectManager com.rfilkov.components.UserMeshRendererGpu::kinectManager
	KinectManager_t6D168A1C710083948363282B0D862EDDFFD88211* ___kinectManager_16;
	// com.rfilkov.kinect.KinectInterop/SensorData com.rfilkov.components.UserMeshRendererGpu::sensorData
	SensorData_t889044994784020C5FA25311175FB3F8B715DD27* ___sensorData_17;
	// com.rfilkov.kinect.DepthSensorBase com.rfilkov.components.UserMeshRendererGpu::sensorInt
	DepthSensorBase_tB644BCAB82289DCDB9290A9B3A6972F0F13B0774* ___sensorInt_18;
	// UnityEngine.Material com.rfilkov.components.UserMeshRendererGpu::meshShaderMat
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___meshShaderMat_19;
	// UnityEngine.Vector3[] com.rfilkov.components.UserMeshRendererGpu::spaceTable
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___spaceTable_20;
	// UnityEngine.ComputeBuffer com.rfilkov.components.UserMeshRendererGpu::spaceTableBuffer
	ComputeBuffer_t51EADA9015EBCC1B982C5584E9AB2734415A8233* ___spaceTableBuffer_21;
	// UnityEngine.Vector3 com.rfilkov.components.UserMeshRendererGpu::sensorSpaceScale
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___sensorSpaceScale_22;
	// System.UInt16[] com.rfilkov.components.UserMeshRendererGpu::depthImageCopy
	UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* ___depthImageCopy_23;
	// UnityEngine.ComputeBuffer com.rfilkov.components.UserMeshRendererGpu::depthImageBuffer
	ComputeBuffer_t51EADA9015EBCC1B982C5584E9AB2734415A8233* ___depthImageBuffer_24;
	// System.Byte[] com.rfilkov.components.UserMeshRendererGpu::bodyIndexCopy
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___bodyIndexCopy_25;
	// UnityEngine.ComputeBuffer com.rfilkov.components.UserMeshRendererGpu::bodyIndexBuffer
	ComputeBuffer_t51EADA9015EBCC1B982C5584E9AB2734415A8233* ___bodyIndexBuffer_26;
	// UnityEngine.RenderTexture com.rfilkov.components.UserMeshRendererGpu::colorTexture
	RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___colorTexture_27;
	// UnityEngine.RenderTexture com.rfilkov.components.UserMeshRendererGpu::colorTextureCopy
	RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___colorTextureCopy_28;
	// System.Boolean com.rfilkov.components.UserMeshRendererGpu::colorTextureCreated
	bool ___colorTextureCreated_29;
	// System.UInt64 com.rfilkov.components.UserMeshRendererGpu::lastDepthFrameTime
	uint64_t ___lastDepthFrameTime_30;
	// System.Single com.rfilkov.components.UserMeshRendererGpu::lastMeshUpdateTime
	float ___lastMeshUpdateTime_31;
	// System.Single com.rfilkov.components.UserMeshRendererGpu::lastColliderUpdateTime
	float ___lastColliderUpdateTime_32;
	// System.UInt64 com.rfilkov.components.UserMeshRendererGpu::userId
	uint64_t ___userId_33;
	// System.Int32 com.rfilkov.components.UserMeshRendererGpu::userBodyIndex
	int32_t ___userBodyIndex_34;
	// UnityEngine.Vector3 com.rfilkov.components.UserMeshRendererGpu::userBodyPos
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___userBodyPos_35;
	// System.Int32 com.rfilkov.components.UserMeshRendererGpu::imageWidth
	int32_t ___imageWidth_36;
	// System.Int32 com.rfilkov.components.UserMeshRendererGpu::imageHeight
	int32_t ___imageHeight_37;
	// System.Boolean com.rfilkov.components.UserMeshRendererGpu::bMeshInited
	bool ___bMeshInited_38;
	// System.Int32 com.rfilkov.components.UserMeshRendererGpu::meshParamsCache
	int32_t ___meshParamsCache_39;
	// com.rfilkov.components.FragmentLighting com.rfilkov.components.UserMeshRendererGpu::lighting
	FragmentLighting_tE9A6F75445DF103494C8BFA7BD9D600355F9CDDC* ___lighting_40;
};

// com.rfilkov.components.UserSkeletonCollider
struct UserSkeletonCollider_tF1FC02224E5642261B30831FD68E335DFA375818  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Int32 com.rfilkov.components.UserSkeletonCollider::playerIndex
	int32_t ___playerIndex_4;
	// System.Single com.rfilkov.components.UserSkeletonCollider::colliderRadius
	float ___colliderRadius_5;
	// UnityEngine.Transform com.rfilkov.components.UserSkeletonCollider::sensorTransform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___sensorTransform_6;
	// System.Int32 com.rfilkov.components.UserSkeletonCollider::sensorIndex
	int32_t ___sensorIndex_7;
	// com.rfilkov.components.UserSkeletonCollider/ReferencePose com.rfilkov.components.UserSkeletonCollider::referencePose
	int32_t ___referencePose_8;
	// UnityEngine.GameObject[] com.rfilkov.components.UserSkeletonCollider::joints
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ___joints_9;
	// UnityEngine.GameObject[] com.rfilkov.components.UserSkeletonCollider::lines
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ___lines_10;
	// UnityEngine.CapsuleCollider[] com.rfilkov.components.UserSkeletonCollider::lineColliders
	CapsuleColliderU5BU5D_t812EDDF9927ACFDDA87D5D99C525FCDDDCB4D1BC* ___lineColliders_11;
	// com.rfilkov.kinect.KinectManager com.rfilkov.components.UserSkeletonCollider::kinectManager
	KinectManager_t6D168A1C710083948363282B0D862EDDFFD88211* ___kinectManager_12;
};

// com.rfilkov.kinect.Kinect4AzureInterface
struct Kinect4AzureInterface_tE8F742F963998C50172CB09B419FB2340DFE9761  : public DepthSensorBase_tB644BCAB82289DCDB9290A9B3A6972F0F13B0774
{
	// com.rfilkov.kinect.Kinect4AzureInterface/ColorCameraMode com.rfilkov.kinect.Kinect4AzureInterface::colorCameraMode
	int32_t ___colorCameraMode_121;
	// com.rfilkov.kinect.Kinect4AzureInterface/DepthCameraMode com.rfilkov.kinect.Kinect4AzureInterface::depthCameraMode
	int32_t ___depthCameraMode_122;
	// com.rfilkov.kinect.Kinect4AzureInterface/CameraFPS com.rfilkov.kinect.Kinect4AzureInterface::cameraFPS
	int32_t ___cameraFPS_123;
	// Microsoft.Azure.Kinect.Sensor.WiredSyncMode com.rfilkov.kinect.Kinect4AzureInterface::deviceSyncMode
	int32_t ___deviceSyncMode_124;
	// System.Int32 com.rfilkov.kinect.Kinect4AzureInterface::subDeviceDelayUsec
	int32_t ___subDeviceDelayUsec_125;
	// System.Boolean com.rfilkov.kinect.Kinect4AzureInterface::flipImuRotation
	bool ___flipImuRotation_126;
	// System.Single com.rfilkov.kinect.Kinect4AzureInterface::bodyTemporalSmoothing
	float ___bodyTemporalSmoothing_127;
	// System.Single com.rfilkov.kinect.Kinect4AzureInterface::playbackPosSeconds
	float ___playbackPosSeconds_128;
	// System.Boolean com.rfilkov.kinect.Kinect4AzureInterface::loopPlayback
	bool ___loopPlayback_129;
	// Microsoft.Azure.Kinect.Sensor.k4abt_sensor_orientation_t com.rfilkov.kinect.Kinect4AzureInterface::bodyTrackingSensorOrientation
	int32_t ___bodyTrackingSensorOrientation_130;
	// Microsoft.Azure.Kinect.Sensor.k4abt_tracker_processing_mode_t com.rfilkov.kinect.Kinect4AzureInterface::bodyTrackingProcessingMode
	int32_t ___bodyTrackingProcessingMode_131;
	// com.rfilkov.kinect.Kinect4AzureInterface/BodyTrackingModelType com.rfilkov.kinect.Kinect4AzureInterface::bodyTrackingModelType
	int32_t ___bodyTrackingModelType_132;
	// System.Boolean com.rfilkov.kinect.Kinect4AzureInterface::detectFloorForPoseEstimation
	bool ___detectFloorForPoseEstimation_133;
	// Microsoft.Azure.Kinect.Sensor.Device com.rfilkov.kinect.Kinect4AzureInterface::kinectSensor
	Device_tC6A2DB1CD94C3983204161A53BD72F75DD5DAED6* ___kinectSensor_134;
	// Microsoft.Azure.Kinect.Sensor.Image com.rfilkov.kinect.Kinect4AzureInterface::d2cColorData
	Image_tC5AB10001052B841BBF2D69DF68A046BCF9FC1A2* ___d2cColorData_135;
	// Microsoft.Azure.Kinect.Sensor.Image com.rfilkov.kinect.Kinect4AzureInterface::c2dDepthData
	Image_tC5AB10001052B841BBF2D69DF68A046BCF9FC1A2* ___c2dDepthData_136;
	// Microsoft.Azure.Kinect.Sensor.Image com.rfilkov.kinect.Kinect4AzureInterface::c2dInfraredData
	Image_tC5AB10001052B841BBF2D69DF68A046BCF9FC1A2* ___c2dInfraredData_137;
	// Microsoft.Azure.Kinect.Sensor.Image com.rfilkov.kinect.Kinect4AzureInterface::c2IrDepthImage
	Image_tC5AB10001052B841BBF2D69DF68A046BCF9FC1A2* ___c2IrDepthImage_138;
	// Microsoft.Azure.Kinect.Sensor.Image com.rfilkov.kinect.Kinect4AzureInterface::c2IrCustomImage
	Image_tC5AB10001052B841BBF2D69DF68A046BCF9FC1A2* ___c2IrCustomImage_139;
	// Microsoft.Azure.Kinect.Sensor.Capture[] com.rfilkov.kinect.Kinect4AzureInterface::bufCaptures
	CaptureU5BU5D_t6A4C32CD920289A011A4FAD997C7E246850B749C* ___bufCaptures_141;
	// Microsoft.Azure.Kinect.Sensor.Capture com.rfilkov.kinect.Kinect4AzureInterface::sensorCapture
	Capture_t7686D47AE8F0EC1671500B360BB9576019EA0F23* ___sensorCapture_142;
	// System.Object com.rfilkov.kinect.Kinect4AzureInterface::sensorCaptureLock
	RuntimeObject* ___sensorCaptureLock_143;
	// System.Boolean com.rfilkov.kinect.Kinect4AzureInterface::isSensorMaster
	bool ___isSensorMaster_144;
	// System.Int64 com.rfilkov.kinect.Kinect4AzureInterface::lastPlayTime
	int64_t ___lastPlayTime_145;
	// System.Int32 com.rfilkov.kinect.Kinect4AzureInterface::syncSensorIndex
	int32_t ___syncSensorIndex_147;
	// System.Int64 com.rfilkov.kinect.Kinect4AzureInterface::expSensorDelay
	int64_t ___expSensorDelay_148;
	// System.Int64 com.rfilkov.kinect.Kinect4AzureInterface::startTimeOffset
	int64_t ___startTimeOffset_149;
	// Microsoft.Azure.Kinect.Sensor.Playback com.rfilkov.kinect.Kinect4AzureInterface::kinectPlayback
	Playback_t6FC439ACC2A2AE11DA385C116E5C4DA06529D63A* ___kinectPlayback_150;
	// System.Int64 com.rfilkov.kinect.Kinect4AzureInterface::playbackStartTime
	int64_t ___playbackStartTime_151;
	// System.Boolean com.rfilkov.kinect.Kinect4AzureInterface::isCamerasStarted
	bool ___isCamerasStarted_152;
	// System.Boolean com.rfilkov.kinect.Kinect4AzureInterface::isImuStarted
	bool ___isImuStarted_153;
	// System.TimeSpan com.rfilkov.kinect.Kinect4AzureInterface::timeToWait
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___timeToWait_154;
	// Microsoft.Azure.Kinect.Sensor.ImuSample com.rfilkov.kinect.Kinect4AzureInterface::lastImuSample
	ImuSample_t3F52813E67351E57E388C209AFA41116B660E2AB* ___lastImuSample_155;
	// Microsoft.Azure.Kinect.Sensor.ImuSample com.rfilkov.kinect.Kinect4AzureInterface::curImuSample
	ImuSample_t3F52813E67351E57E388C209AFA41116B660E2AB* ___curImuSample_156;
	// AHRS.MahonyAHRS com.rfilkov.kinect.Kinect4AzureInterface::imuAhrs
	MahonyAHRS_tCEB9F28C93984E10463A58F9BEB3F2DE3C294342* ___imuAhrs_157;
	// UnityEngine.Quaternion com.rfilkov.kinect.Kinect4AzureInterface::imuTurnRot1
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___imuTurnRot1_158;
	// UnityEngine.Quaternion com.rfilkov.kinect.Kinect4AzureInterface::imuTurnRot2
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___imuTurnRot2_159;
	// UnityEngine.Quaternion com.rfilkov.kinect.Kinect4AzureInterface::imuRotation
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___imuRotation_160;
	// System.Single com.rfilkov.kinect.Kinect4AzureInterface::prevRotZ
	float ___prevRotZ_161;
	// System.Single[] com.rfilkov.kinect.Kinect4AzureInterface::prevQuat
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___prevQuat_162;
	// UnityEngine.Vector3 com.rfilkov.kinect.Kinect4AzureInterface::imuYawAtStart
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___imuYawAtStart_163;
	// UnityEngine.Quaternion com.rfilkov.kinect.Kinect4AzureInterface::imuFixAtStart
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___imuFixAtStart_164;
	// System.Boolean com.rfilkov.kinect.Kinect4AzureInterface::imuYawAtStartSet
	bool ___imuYawAtStartSet_165;
	// com.rfilkov.kinect.KinectFloorDetector com.rfilkov.kinect.Kinect4AzureInterface::floorDetector
	KinectFloorDetector_t456A19A6B4E924992C3E411D2A23FBB3E7C424AF* ___floorDetector_166;
	// Microsoft.Azure.Kinect.Sensor.BodyTracking com.rfilkov.kinect.Kinect4AzureInterface::bodyTracker
	BodyTracking_tDE65B520DD2EDF920EE06E83A5A1250C452D97F7* ___bodyTracker_167;
	// Microsoft.Azure.Kinect.Sensor.k4abt_skeleton_t com.rfilkov.kinect.Kinect4AzureInterface::bodySkeletonData
	k4abt_skeleton_t_t53E37DFE0F294467E640B9A7EFEF3D977D09E11A ___bodySkeletonData_168;
	// System.Int32 com.rfilkov.kinect.Kinect4AzureInterface::btQueueCount
	int32_t ___btQueueCount_169;
	// System.Int32 com.rfilkov.kinect.Kinect4AzureInterface::btQueueWaitTime
	int32_t ___btQueueWaitTime_170;
	// System.UInt64 com.rfilkov.kinect.Kinect4AzureInterface::btQueueTime
	uint64_t ___btQueueTime_171;
	// System.Threading.Thread com.rfilkov.kinect.Kinect4AzureInterface::bodyTrackerThread
	Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F* ___bodyTrackerThread_172;
	// System.Threading.AutoResetEvent com.rfilkov.kinect.Kinect4AzureInterface::bodyTrackerStopEvent
	AutoResetEvent_t7F792F3F7AD11BEF7B411E771D98E5266A8CE7C0* ___bodyTrackerStopEvent_173;
	// Microsoft.Azure.Kinect.Sensor.Capture com.rfilkov.kinect.Kinect4AzureInterface::bodyOutputCapture
	Capture_t7686D47AE8F0EC1671500B360BB9576019EA0F23* ___bodyOutputCapture_174;
	// System.Object com.rfilkov.kinect.Kinect4AzureInterface::bodyCaptureLock
	RuntimeObject* ___bodyCaptureLock_175;
	// System.Single com.rfilkov.kinect.Kinect4AzureInterface::leftHandFingerAngle
	float ___leftHandFingerAngle_176;
	// System.Single com.rfilkov.kinect.Kinect4AzureInterface::rightHandFingerAngle
	float ___rightHandFingerAngle_177;
	// System.UInt64 com.rfilkov.kinect.Kinect4AzureInterface::lastHandStatesTimestamp
	uint64_t ___lastHandStatesTimestamp_178;
	// Microsoft.Azure.Kinect.Sensor.Calibration com.rfilkov.kinect.Kinect4AzureInterface::coordMapperCalib
	Calibration_t1E4A9872ADA4B8D9B6AEAF928EFB83979DD3FC57 ___coordMapperCalib_179;
	// Microsoft.Azure.Kinect.Sensor.Transformation com.rfilkov.kinect.Kinect4AzureInterface::coordMapperTransform
	Transformation_t85B32D1488A01A7C69680798AF5CF476446E35AF* ___coordMapperTransform_180;
	// Microsoft.Azure.Kinect.Sensor.Image com.rfilkov.kinect.Kinect4AzureInterface::c2BtDepthImage
	Image_tC5AB10001052B841BBF2D69DF68A046BCF9FC1A2* ___c2BtDepthImage_181;
	// Microsoft.Azure.Kinect.Sensor.Image com.rfilkov.kinect.Kinect4AzureInterface::c2BodyIndexImage
	Image_tC5AB10001052B841BBF2D69DF68A046BCF9FC1A2* ___c2BodyIndexImage_182;
	// Microsoft.Azure.Kinect.Sensor.Image com.rfilkov.kinect.Kinect4AzureInterface::bodyIndexImage
	Image_tC5AB10001052B841BBF2D69DF68A046BCF9FC1A2* ___bodyIndexImage_183;
	// com.rfilkov.kinect.Kinect4AzureInterface/K4abtFrameData com.rfilkov.kinect.Kinect4AzureInterface::btFrameData
	K4abtFrameData_t49C1675DEB466170B7BF781B9A474305FB978B1D ___btFrameData_184;
	// System.Single com.rfilkov.kinect.Kinect4AzureInterface::lastTemporalSmoothing
	float ___lastTemporalSmoothing_185;
};

struct Kinect4AzureInterface_tE8F742F963998C50172CB09B419FB2340DFE9761_StaticFields
{
	// com.rfilkov.kinect.Kinect4AzureSyncher com.rfilkov.kinect.Kinect4AzureInterface::sensorSyncher
	Kinect4AzureSyncher_tF37A153318D437722F7D7CF53EB5AE21601D6FB2* ___sensorSyncher_146;
	// com.rfilkov.kinect.KinectInterop/TrackingState[] com.rfilkov.kinect.Kinect4AzureInterface::BtConf2TrackingState
	TrackingStateU5BU5D_tBE3BA58B5633AF1BD85C14AC9419597AA87A0DDE* ___BtConf2TrackingState_187;
	// System.Int32[] com.rfilkov.kinect.Kinect4AzureInterface::BtJoint2JointType
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___BtJoint2JointType_188;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32> com.rfilkov.kinect.Kinect4AzureInterface::_Hand2ElbowJoint
	Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180* ____Hand2ElbowJoint_189;
	// UnityEngine.Quaternion[] com.rfilkov.kinect.Kinect4AzureInterface::_JointBaseOrient
	QuaternionU5BU5D_t3C088AFB0F3D2763228C9CAB227021C5DC462AF7* ____JointBaseOrient_190;
	// UnityEngine.Quaternion[] com.rfilkov.kinect.Kinect4AzureInterface::_JointTurnCS
	QuaternionU5BU5D_t3C088AFB0F3D2763228C9CAB227021C5DC462AF7* ____JointTurnCS_191;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// UnityEngine.Light[]
struct LightU5BU5D_tDA7C763E668D91E53318509D94BC0CF10B8AB990  : public RuntimeArray
{
	ALIGN_FIELD (8) Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* m_Items[1];

	inline Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.UInt16[]
struct UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83  : public RuntimeArray
{
	ALIGN_FIELD (8) uint16_t m_Items[1];

	inline uint16_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint16_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint16_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint16_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint16_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint16_t value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C  : public RuntimeArray
{
	ALIGN_FIELD (8) Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 m_Items[1];

	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA  : public RuntimeArray
{
	ALIGN_FIELD (8) Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 m_Items[1];

	inline Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 value)
	{
		m_Items[index] = value;
	}
};
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C  : public RuntimeArray
{
	ALIGN_FIELD (8) int32_t m_Items[1];

	inline int32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int32_t value)
	{
		m_Items[index] = value;
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
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF  : public RuntimeArray
{
	ALIGN_FIELD (8) GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* m_Items[1];

	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.CapsuleCollider[]
struct CapsuleColliderU5BU5D_t812EDDF9927ACFDDA87D5D99C525FCDDDCB4D1BC  : public RuntimeArray
{
	ALIGN_FIELD (8) CapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808* m_Items[1];

	inline CapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline CapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, CapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline CapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline CapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, CapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// T[] UnityEngine.Object::FindObjectsOfType<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Object_FindObjectsOfType_TisRuntimeObject_m1E6D851F6A46D646E0554A94729E9AAE79B0E87A_gshared (const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::AddComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;

// com.rfilkov.kinect.KinectManager com.rfilkov.kinect.KinectManager::get_Instance()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KinectManager_t6D168A1C710083948363282B0D862EDDFFD88211* KinectManager_get_Instance_mA12B1FCAF8167AF8235386FD868E43E15B29EC64_inline (const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// System.Boolean com.rfilkov.kinect.KinectManager::IsInitialized()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool KinectManager_IsInitialized_m4E8315ADDF5709A7239F26EAB7AC44392D77A179 (KinectManager_t6D168A1C710083948363282B0D862EDDFFD88211* __this, const RuntimeMethod* method) ;
// com.rfilkov.kinect.KinectInterop/SensorData com.rfilkov.kinect.KinectManager::GetSensorData(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SensorData_t889044994784020C5FA25311175FB3F8B715DD27* KinectManager_GetSensorData_m6280DCF2ABA874FCBAB6E7B0F7202C58AA2F4267 (KinectManager_t6D168A1C710083948363282B0D862EDDFFD88211* __this, int32_t ___sensorIndex0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Implicit(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___exists0, const RuntimeMethod* method) ;
// UnityEngine.Texture com.rfilkov.kinect.KinectManager::GetInfraredImageTex(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* KinectManager_GetInfraredImageTex_m01290B9F31B007E2CA70346A0A69397FB811209D (KinectManager_t6D168A1C710083948363282B0D862EDDFFD88211* __this, int32_t ___sensorIndex0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_m059825802BB6AF7EA9693FEBEEB0D85F59A3E38E (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// T[] UnityEngine.Object::FindObjectsOfType<UnityEngine.Light>()
inline LightU5BU5D_tDA7C763E668D91E53318509D94BC0CF10B8AB990* Object_FindObjectsOfType_TisLight_t1E68479B7782AF2050FAA02A5DC612FD034F18F3_m9B250477C56BC975B7285CA3DFD1C0A118A3B185 (const RuntimeMethod* method)
{
	return ((  LightU5BU5D_tDA7C763E668D91E53318509D94BC0CF10B8AB990* (*) (const RuntimeMethod*))Object_FindObjectsOfType_TisRuntimeObject_m1E6D851F6A46D646E0554A94729E9AAE79B0E87A_gshared)(method);
}
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) ;
// System.Void com.rfilkov.components.FragmentLighting::SetLightsAndBounds(UnityEngine.Light[],UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FragmentLighting_SetLightsAndBounds_mCC77891ED276DB7DA3C7D2F4560CB9A3AB2AE47A (FragmentLighting_tE9A6F75445DF103494C8BFA7BD9D600355F9CDDC* __this, LightU5BU5D_tDA7C763E668D91E53318509D94BC0CF10B8AB990* ___sceneLights0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___centerPos1, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___sizeBounds2, const RuntimeMethod* method) ;
// System.Void com.rfilkov.components.SceneMeshRendererGpu::FinishMesh()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneMeshRendererGpu_FinishMesh_m3E1553DA0A008A5C1FE6014CB5B062FBB570D848 (SceneMeshRendererGpu_t5E08B994ADA093F4C771151BE372410DAA8D238D* __this, const RuntimeMethod* method) ;
// System.Void com.rfilkov.components.FragmentLighting::ReleaseResources()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FragmentLighting_ReleaseResources_m8AB66F52E7123A9A0DC4E9D1951BCB30F3452A82 (FragmentLighting_tE9A6F75445DF103494C8BFA7BD9D600355F9CDDC* __this, const RuntimeMethod* method) ;
// System.Void com.rfilkov.components.SceneMeshRendererGpu::InitMesh()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneMeshRendererGpu_InitMesh_m7B7FDD8291CC774F3C30AE5CABCEA81F7F05E568 (SceneMeshRendererGpu_t5E08B994ADA093F4C771151BE372410DAA8D238D* __this, const RuntimeMethod* method) ;
// System.Void com.rfilkov.components.SceneMeshRendererGpu::UpdateMesh()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneMeshRendererGpu_UpdateMesh_mB7C74ACFF4938EF0CEA860CADC9B44E42CB19CEA (SceneMeshRendererGpu_t5E08B994ADA093F4C771151BE372410DAA8D238D* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Mesh::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh__ctor_m5A9AECEDDAFFD84811ED8928012BDE97A9CEBD00 (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, const RuntimeMethod* method) ;
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5 (int32_t* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::set_name(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_set_name_mC79E6DC8FFD72479C90F0C4CC7F42A0FEAF5AE47 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Mesh::set_indexFormat(UnityEngine.Rendering.IndexFormat)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_set_indexFormat_mCCC7837A0916FA7A272159DA6AF984B0022488F4 (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, int32_t ___value0, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.MeshFilter>()
inline MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* Component_GetComponent_TisMeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5_mB82F66059DFB5715DD85BDED1D90BC03A6C9E623 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Void UnityEngine.MeshFilter::set_mesh(UnityEngine.Mesh)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeshFilter_set_mesh_mD2988E2D835205FD6B6CD35A61E1592844D971F8 (MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* __this, Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogWarning(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogWarning_mEF15C6B17CE4E1FA7E379CDB82CE40FCD89A3F28 (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.Renderer>()
inline Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// UnityEngine.Shader UnityEngine.Shader::Find(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* Shader_Find_mFF2A8FC042B9CFAA9800679CA674D52859BF3A72 (String_t* ___name0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Material::.ctor(UnityEngine.Shader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material__ctor_m7FDF47105D66D19591BE505A0C42B0F90D88C9BF (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* ___shader0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Renderer::set_material(UnityEngine.Material)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Renderer_set_material_m21E88977071E0A914D62F3D9CFF0193B3117C45A (Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* __this, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___value0, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.Transform>()
inline Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Component_GetComponent_TisTransform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_m60E86366B3E431D4C4A549CF4FE5951087686F7F (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// UnityEngine.Vector2Int UnityEngine.Vector2Int::get_zero()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A Vector2Int_get_zero_mA4130E83BCF623B65B14574D496C6C0FB441D9FE_inline (const RuntimeMethod* method) ;
// UnityEngine.Vector3 com.rfilkov.kinect.KinectManager::GetSensorSpaceScale(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 KinectManager_GetSensorSpaceScale_m096BD92B11206702B2624831A40E3C8B5C6A49CB (KinectManager_t6D168A1C710083948363282B0D862EDDFFD88211* __this, int32_t ___sensorIndex0, const RuntimeMethod* method) ;
// System.Void com.rfilkov.components.SceneMeshRendererGpu::UpdateTexturesAndBuffers()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneMeshRendererGpu_UpdateTexturesAndBuffers_mF85062722A3E7748B45F50F422525124B8A70631 (SceneMeshRendererGpu_t5E08B994ADA093F4C771151BE372410DAA8D238D* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Vector2Int::get_x()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Vector2Int_get_x_mA2CACB1B6E6B5AD0CCC32B2CD2EDCE3ECEB50576_inline (Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Vector2Int::get_y()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Vector2Int_get_y_m48454163ECF0B463FB5A16A0C4FC4B14DB0768B3_inline (Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A* __this, const RuntimeMethod* method) ;
// UnityEngine.RenderTexture com.rfilkov.kinect.KinectInterop::CreateRenderTexture(UnityEngine.RenderTexture,System.Int32,System.Int32,UnityEngine.RenderTextureFormat)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* KinectInterop_CreateRenderTexture_m84068B60B5DE22E7D439F086D1312279950E7D5E (RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___currentTex0, int32_t ___width1, int32_t ___height2, int32_t ___texFormat3, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.ComputeBuffer::get_count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ComputeBuffer_get_count_m4DAA2D2714BA7A46F007697F601E4446F1049506 (ComputeBuffer_t51EADA9015EBCC1B982C5584E9AB2734415A8233* __this, const RuntimeMethod* method) ;
// UnityEngine.ComputeBuffer com.rfilkov.kinect.KinectInterop::CreateComputeBuffer(UnityEngine.ComputeBuffer,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ComputeBuffer_t51EADA9015EBCC1B982C5584E9AB2734415A8233* KinectInterop_CreateComputeBuffer_m56CEE7B21E1D61C4AE5E14E710017C1BA61E9475 (ComputeBuffer_t51EADA9015EBCC1B982C5584E9AB2734415A8233* ___currentBuf0, int32_t ___bufLen1, int32_t ___bufStride2, const RuntimeMethod* method) ;
// System.Void UnityEngine.ComputeBuffer::SetData(System.Array)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ComputeBuffer_SetData_m9F845E6B347CE028FA9A987D740FC642D828013A (ComputeBuffer_t51EADA9015EBCC1B982C5584E9AB2734415A8233* __this, RuntimeArray* ___data0, const RuntimeMethod* method) ;
// System.Void com.rfilkov.components.SceneMeshRendererGpu::CreateMeshVertInd(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneMeshRendererGpu_CreateMeshVertInd_m2C6FB83734BFB68959BD65A367748573C485276C (SceneMeshRendererGpu_t5E08B994ADA093F4C771151BE372410DAA8D238D* __this, int32_t ___imageWidth0, int32_t ___imageHeight1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Mesh::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_Clear_m0F95397EA143D31AD0B4D332E8C6FA25A7957BC0 (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___x0, float ___y1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Mesh::set_vertices(UnityEngine.Vector3[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_set_vertices_m5BB814D89E9ACA00DBF19F7D8E22CB73AC73FE5C (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Mesh::set_normals(UnityEngine.Vector3[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_set_normals_m85D73193C49211BE9FA135FF72D5749B16A4760B (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Mesh::set_uv(UnityEngine.Vector2[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_set_uv_m6ED9C50E0DA8166DD48AC40FD6C828B9AD2E9617 (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Mesh::SetIndices(System.Int32[],UnityEngine.MeshTopology,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_SetIndices_m2AE7ED76A6C77D218C37C011DDB948589FD45B97 (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___indices0, int32_t ___topology1, int32_t ___submesh2, const RuntimeMethod* method) ;
// System.Void UnityEngine.ComputeBuffer::Release()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ComputeBuffer_Release_mF1F157C929A0A5B2FDCD703A286EE09723450B72 (ComputeBuffer_t51EADA9015EBCC1B982C5584E9AB2734415A8233* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.ComputeBuffer::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ComputeBuffer_Dispose_mBCA0F8A5BE75A41C77E1FCFBCB4EAE84A45D6BF2 (ComputeBuffer_t51EADA9015EBCC1B982C5584E9AB2734415A8233* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.RenderTexture::Release()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderTexture_Release_mE7399D6187A0E38945D2913D0FFB41247143AB1E (RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_time()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_time_m0BEE9AACD0723FE414465B77C9C64D12263675F3 (const RuntimeMethod* method) ;
// System.Void com.rfilkov.kinect.KinectInterop::CopyBytes(System.Array,System.Int32,System.Array,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KinectInterop_CopyBytes_m393995130F2D35AAAD0AA07536EA2E9848D61D9F (RuntimeArray* ___srcArray0, int32_t ___srcElemSize1, RuntimeArray* ___dstArray2, int32_t ___dstElemSize3, const RuntimeMethod* method) ;
// System.Void com.rfilkov.kinect.KinectInterop::SetComputeBufferData(UnityEngine.ComputeBuffer,System.Array,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KinectInterop_SetComputeBufferData_m7747C88D8D9C44D03C1B7A485FFE3563F033EF66 (ComputeBuffer_t51EADA9015EBCC1B982C5584E9AB2734415A8233* ___computeBuffer0, RuntimeArray* ___data1, int32_t ___elemCount2, int32_t ___elemSize3, const RuntimeMethod* method) ;
// System.Void UnityEngine.Graphics::CopyTexture(UnityEngine.Texture,UnityEngine.Texture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Graphics_CopyTexture_m34BA416A531684743117976772DD8B218441DB93 (Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___src0, Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___dst1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Material::SetBuffer(System.String,UnityEngine.ComputeBuffer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_SetBuffer_mBE41E02CB7CE8817306B9F292A3EC786E1C84ED5 (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, String_t* ___name0, ComputeBuffer_t51EADA9015EBCC1B982C5584E9AB2734415A8233* ___value1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Material::SetTexture(System.String,UnityEngine.Texture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_SetTexture_m06083C3F52EF02FFB1177901D9907314F280F9A5 (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, String_t* ___name0, Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___value1, const RuntimeMethod* method) ;
// UnityEngine.Vector4 UnityEngine.Vector4::op_Implicit(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 Vector4_op_Implicit_mB05287DC52FC87A756AB80E837E1EC22FEEB3937_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___v0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Material::SetVector(System.String,UnityEngine.Vector4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_SetVector_m69444B8040D955821F241113446CC8713C9E12D1 (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, String_t* ___name0, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___value1, const RuntimeMethod* method) ;
// UnityEngine.Vector4 UnityEngine.Vector4::op_Implicit(UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 Vector4_op_Implicit_m6162D8136CFE97A5A8BD3B764F9074DB96AA5CD0_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___v0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Material::SetInt(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, String_t* ___name0, int32_t ___value1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Material::SetFloat(System.String,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836 (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, String_t* ___name0, float ___value1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Material::SetMatrix(System.String,UnityEngine.Matrix4x4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_SetMatrix_m1F4E20583C898A1C1DBA256868E1F98C539F13FB (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, String_t* ___name0, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___value1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Bounds::.ctor(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Bounds__ctor_mAF7B238B9FBF90C495E5D7951760085A93119C5A (Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___center0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___size1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Mesh::set_bounds(UnityEngine.Bounds)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_set_bounds_m2E526E9B61ACA77D644C22A9D8EB49583012B54E (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 ___value0, const RuntimeMethod* method) ;
// System.Void com.rfilkov.components.FragmentLighting::UpdateLighting(UnityEngine.Material,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FragmentLighting_UpdateLighting_m68B43ADAA66515951CEC61017EA858B9F2E02302 (FragmentLighting_tE9A6F75445DF103494C8BFA7BD9D600355F9CDDC* __this, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___matRenderer0, bool ___bApplyLighting1, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.MeshCollider>()
inline MeshCollider_tB525E4DDE383252364ED0BDD32CF2B53914EE455* Component_GetComponent_TisMeshCollider_tB525E4DDE383252364ED0BDD32CF2B53914EE455_mFC0F02CCD26A6A186031CF43E92D7B60EA1CC370 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  MeshCollider_tB525E4DDE383252364ED0BDD32CF2B53914EE455* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Void UnityEngine.MeshCollider::set_sharedMesh(UnityEngine.Mesh)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeshCollider_set_sharedMesh_m05F87B9AC04139285EBBCC159F77B51C6940E79C (MeshCollider_tB525E4DDE383252364ED0BDD32CF2B53914EE455* __this, Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___value0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline (const RuntimeMethod* method) ;
// System.Void com.rfilkov.components.FragmentLighting::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FragmentLighting__ctor_mB70E61F363E6EA460877AA85A4A2C95C10FB2B3A (FragmentLighting_tE9A6F75445DF103494C8BFA7BD9D600355F9CDDC* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// System.Void com.rfilkov.kinect.KinectManager::EnableSensorPoseData(System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KinectManager_EnableSensorPoseData_m24FCE866A91894EBBA323BD5FA6DFAF18DCCCBDB (KinectManager_t6D168A1C710083948363282B0D862EDDFFD88211* __this, int32_t ___sensorIndex0, bool ___isEnable1, const RuntimeMethod* method) ;
// System.String System.Single::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972 (float* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219 (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Transform::get_rotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Quaternion::get_eulerAngles()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Quaternion_get_eulerAngles_m2DB5158B5C3A71FD60FC8A6EE43D3AAA1CFED122_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* __this, const RuntimeMethod* method) ;
// System.Boolean com.rfilkov.kinect.Kinect4AzureInterface::InitBodyTracking(com.rfilkov.kinect.KinectInterop/FrameSource,com.rfilkov.kinect.KinectInterop/SensorData,Microsoft.Azure.Kinect.Sensor.Calibration,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Kinect4AzureInterface_InitBodyTracking_mDFE3C1F7289018FBDFB976E708CCC1C9D3F18732 (Kinect4AzureInterface_tE8F742F963998C50172CB09B419FB2340DFE9761* __this, uint32_t ___dwFlags0, SensorData_t889044994784020C5FA25311175FB3F8B715DD27* ___sensorData1, Calibration_t1E4A9872ADA4B8D9B6AEAF928EFB83979DD3FC57 ___calibration2, bool ___bCreateTracker3, const RuntimeMethod* method) ;
// System.String System.Enum::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void System.Threading.ThreadStart::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThreadStart__ctor_m35CE51F76358F20E4A0C8F2963C3AE14E5FF7E71 (ThreadStart_t7662D98F1793EDE90192D7304D1C3C44119328A2* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void System.Threading.Thread::.ctor(System.Threading.ThreadStart)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Thread__ctor_m1FA23A179DF4F5B659689D6FA40DE903086212E2 (Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F* __this, ThreadStart_t7662D98F1793EDE90192D7304D1C3C44119328A2* ___start0, const RuntimeMethod* method) ;
// System.Void System.Threading.Thread::set_IsBackground(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Thread_set_IsBackground_m45F00BD4C46F9B8A7C46A20A170B22BABB8FBA30 (Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void System.Threading.Thread::Start()
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void Thread_Start_m2230799AA331CA9ACEF49D5500281D0C1A9F72FA (Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F* __this, const RuntimeMethod* method) ;
// System.Void System.Threading.Thread::Join()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Thread_Join_mB756581AAF5EB028081256E0517892BC8867779F (Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F* __this, const RuntimeMethod* method) ;
// System.Void com.rfilkov.components.UserMeshRenderer::FinishMesh()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UserMeshRenderer_FinishMesh_mB2D05529B66E18588B6E2C8CA72BEF25034C7313 (UserMeshRenderer_tE896EB6D7C675E98F5AF9306C25AAB1EF96A7E2F* __this, const RuntimeMethod* method) ;
// System.Void com.rfilkov.components.UserMeshRenderer::InitMesh()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UserMeshRenderer_InitMesh_m154A0AE6F33649B7C7BA0E0184E87F0ED187116D (UserMeshRenderer_tE896EB6D7C675E98F5AF9306C25AAB1EF96A7E2F* __this, const RuntimeMethod* method) ;
// System.UInt64 com.rfilkov.kinect.KinectManager::GetUserIdByIndex(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t KinectManager_GetUserIdByIndex_m039C55595E67098180174E20E7F8A66D37FCD06C (KinectManager_t6D168A1C710083948363282B0D862EDDFFD88211* __this, int32_t ___i0, const RuntimeMethod* method) ;
// System.Int32 com.rfilkov.kinect.KinectManager::GetBodyIndexByUserId(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t KinectManager_GetBodyIndexByUserId_m102FDCC202FDCD9696DAB08CA644A0E52424FD20 (KinectManager_t6D168A1C710083948363282B0D862EDDFFD88211* __this, uint64_t ___userId0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 com.rfilkov.kinect.KinectManager::GetUserKinectPosition(System.UInt64,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 KinectManager_GetUserKinectPosition_m48B8695AAD72FBE804F2A955BD5B11489EF06F61 (KinectManager_t6D168A1C710083948363282B0D862EDDFFD88211* __this, uint64_t ___userId0, bool ___applySpaceScale1, const RuntimeMethod* method) ;
// System.Void com.rfilkov.components.UserMeshRenderer::UpdateMesh()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UserMeshRenderer_UpdateMesh_m4C1B5845CA899423379AC4B058C348B5A4062A4E (UserMeshRenderer_tE896EB6D7C675E98F5AF9306C25AAB1EF96A7E2F* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mF8B69BE42B5C5ABCAD3C176FBBE3010E0815D65D (String_t* ___str00, String_t* ___str11, String_t* ___str22, String_t* ___str33, const RuntimeMethod* method) ;
// UnityEngine.Material UnityEngine.Renderer::get_material()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* Renderer_get_material_m5BA2A00816C4CC66580D4B2E409CF10718C15656 (Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* __this, const RuntimeMethod* method) ;
// UnityEngine.Texture UnityEngine.Material::get_mainTexture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* Material_get_mainTexture_mC6C6B860B44321F0342AEFA0DD7702384334F37D (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Material::set_mainTexture(UnityEngine.Texture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_set_mainTexture_m389E048BA9C81B603EBF36BD792212B296317AC0 (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Mesh::RecalculateBounds()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_RecalculateBounds_mA9B293F57C6CD298AE2D2DB19061FC23B05AB90B (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, const RuntimeMethod* method) ;
// System.Void System.Array::Clear(System.Array,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Clear_m48B57EC27CADC3463CA98A33373D557DA587FF1B (RuntimeArray* ___array0, int32_t ___index1, int32_t ___length2, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Mathf::Abs(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_Abs_mEF48B2D15BEC6663A575693F563C6DC42C8135AE_inline (int32_t ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogException(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogException_m82E44FEC6B03BC34AFC2CAF6583051570C60CB9E (Exception_t* ___exception0, const RuntimeMethod* method) ;
// System.Void System.Threading.Thread::Sleep(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Thread_Sleep_m63B7D29DC735584F4D80373E48C91B34FF32D1A0 (int32_t ___millisecondsTimeout0, const RuntimeMethod* method) ;
// System.Void com.rfilkov.components.UserMeshRendererGpu::FinishMesh()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UserMeshRendererGpu_FinishMesh_m57A4DF940DAF05911E9CE8D3F71AFF4BBCB286D5 (UserMeshRendererGpu_tCA868CF70531660324A409C0EF918366C78D6E54* __this, const RuntimeMethod* method) ;
// System.Void com.rfilkov.components.UserMeshRendererGpu::InitMesh()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UserMeshRendererGpu_InitMesh_m237E3E51DB1830C88083CC0D0A5BC428240BC422 (UserMeshRendererGpu_tCA868CF70531660324A409C0EF918366C78D6E54* __this, const RuntimeMethod* method) ;
// System.Void com.rfilkov.components.UserMeshRendererGpu::UpdateMesh()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UserMeshRendererGpu_UpdateMesh_mCEC0A8587886F1D7899822AB4588E1001A2BE0F0 (UserMeshRendererGpu_tCA868CF70531660324A409C0EF918366C78D6E54* __this, const RuntimeMethod* method) ;
// System.Void com.rfilkov.components.UserMeshRendererGpu::UpdateTexturesAndBuffers()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UserMeshRendererGpu_UpdateTexturesAndBuffers_mF8FE91E153927AD29D6F1A975306A45AF328C892 (UserMeshRendererGpu_tCA868CF70531660324A409C0EF918366C78D6E54* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.ComputeBuffer::.ctor(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ComputeBuffer__ctor_mE40DE5EF5ADAC29B6B4DECBD1EE33E8526202617 (ComputeBuffer_t51EADA9015EBCC1B982C5584E9AB2734415A8233* __this, int32_t ___count0, int32_t ___stride1, const RuntimeMethod* method) ;
// System.Void com.rfilkov.components.UserMeshRendererGpu::CreateMeshVertInd(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UserMeshRendererGpu_CreateMeshVertInd_m0B1FFAFAC59A80F07D7231DC2ABE0CA2ED116431 (UserMeshRendererGpu_tCA868CF70531660324A409C0EF918366C78D6E54* __this, int32_t ___imageWidth0, int32_t ___imageHeight1, const RuntimeMethod* method) ;
// UnityEngine.Rect UnityEngine.Rect::get_zero()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D Rect_get_zero_mBA92EC8F405CC95A0F1ED05E66D9ABD3A61B7476 (const RuntimeMethod* method) ;
// System.Boolean com.rfilkov.kinect.KinectManager::GetUserBoundingBox(System.UInt64,UnityEngine.Camera,System.Int32,UnityEngine.Rect,UnityEngine.Vector3&,UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool KinectManager_GetUserBoundingBox_mEAC344C3874EE413CB94128B066A55FB4882F0D7 (KinectManager_t6D168A1C710083948363282B0D862EDDFFD88211* __this, uint64_t ___userId0, Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___foregroundCamera1, int32_t ___sensorIndex2, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___backgroundRect3, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___posMin4, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___posMax5, const RuntimeMethod* method) ;
// System.Int32 com.rfilkov.kinect.KinectManager::GetJointCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t KinectManager_GetJointCount_m5B153D150716D3FE7CB58D571CA9AE7FEBA7B405 (KinectManager_t6D168A1C710083948363282B0D862EDDFFD88211* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject__ctor_m37D512B05D292F954792225E6C6EEE95293A9B88 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, String_t* ___name0, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_parent(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_parent_m9BD5E563B539DD5BEC342736B03F97B38A243234 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___value0, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::AddComponent<UnityEngine.SphereCollider>()
inline SphereCollider_tBA111C542CE97F6873DE742757213D6265C7D275* GameObject_AddComponent_TisSphereCollider_tBA111C542CE97F6873DE742757213D6265C7D275_m3D05F19667844A2949840753F7A3287115BE029E (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  SphereCollider_tBA111C542CE97F6873DE742757213D6265C7D275* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared)(__this, method);
}
// System.Void UnityEngine.SphereCollider::set_radius(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SphereCollider_set_radius_m6119FE18C6739B077AB17334B1B53984911017FF (SphereCollider_tBA111C542CE97F6873DE742757213D6265C7D275* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Boolean com.rfilkov.kinect.KinectManager::IsUserDetected(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool KinectManager_IsUserDetected_m5544B8584195DC23FA1F4D9A75BBC4E6A74A4F0C (KinectManager_t6D168A1C710083948363282B0D862EDDFFD88211* __this, int32_t ___i0, const RuntimeMethod* method) ;
// System.Boolean com.rfilkov.kinect.KinectManager::IsJointTracked(System.UInt64,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool KinectManager_IsJointTracked_m6443A8E53DB47D1B218FBD805BD044171519DBDC (KinectManager_t6D168A1C710083948363282B0D862EDDFFD88211* __this, uint64_t ___userId0, int32_t ___joint1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 com.rfilkov.components.UserSkeletonCollider::GetJointPosition(System.UInt64,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 UserSkeletonCollider_GetJointPosition_mDBC67013D02DD8F86A24F28C66EBA2E180893341 (UserSkeletonCollider_tF1FC02224E5642261B30831FD68E335DFA375818* __this, uint64_t ___userId0, int32_t ___joint1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::TransformPoint(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_TransformPoint_m05BFF013DB830D7BFE44A007703694AE1062EE44 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Vector3::op_Inequality(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector3_op_Inequality_m6A7FB1C9E9DE194708997BFA24C6E238D92D908E_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___lhs0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rhs1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::AddComponent<UnityEngine.CapsuleCollider>()
inline CapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808* GameObject_AddComponent_TisCapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808_mE9815ABBF56D4B7806C63F85A30AE9BBDE927BCF (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  CapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared)(__this, method);
}
// System.Void UnityEngine.CapsuleCollider::set_radius(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CapsuleCollider_set_radius_mB301C0086FE0D251683512184B0F6DDE264BA985 (CapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808* __this, float ___value0, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.GameObject::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GameObject_get_gameObject_m0878015B8CF7F5D432B583C187725810D27B57DC (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// com.rfilkov.kinect.KinectInterop/JointType com.rfilkov.kinect.KinectManager::GetParentJoint(com.rfilkov.kinect.KinectInterop/JointType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t KinectManager_GetParentJoint_mCE553D01E5607320F2F3B011E7D4A42D034EB1FA (KinectManager_t6D168A1C710083948363282B0D862EDDFFD88211* __this, int32_t ___joint0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Subtraction(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Subtraction_m1690F44F6DC92B770A940B6CF8AE0535625A9824_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Division(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Division_mD7200D6D432BAFC4135C5B17A0B0A812203B0270_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_normalized()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_up(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_up_m1FBA5A97E5057747AC027AD5897EDE80A554D554 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::get_magnitude()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.CapsuleCollider::set_height(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CapsuleCollider_set_height_m5DAE3DC5AD851E30C5A29AC7A22F36BE1E205BBB (CapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808* __this, float ___value0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 com.rfilkov.kinect.KinectManager::GetSensorJointKinectPosition(System.Int32,System.Int32,System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 KinectManager_GetSensorJointKinectPosition_mA798D6C8A783FA148FCD2E2C0D3E33D4BFB3B57E (KinectManager_t6D168A1C710083948363282B0D862EDDFFD88211* __this, int32_t ___sensorIndex0, int32_t ___bodyIndex1, int32_t ___joint2, bool ___applySpaceScale3, const RuntimeMethod* method) ;
// UnityEngine.Vector3 com.rfilkov.kinect.KinectManager::SensorTransformPoint(System.Int32,com.rfilkov.kinect.KinectInterop/CameraExtrinsics,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 KinectManager_SensorTransformPoint_m86319A68B9B7E099E3201D330DA9995210D07866 (KinectManager_t6D168A1C710083948363282B0D862EDDFFD88211* __this, int32_t ___sensorIndex0, CameraExtrinsics_t78E5FF4BC4F63B394053A70F6A00AE00E3035641* ___extr1, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___point2, const RuntimeMethod* method) ;
// UnityEngine.Vector3 com.rfilkov.kinect.KinectManager::GetJointPosition(System.UInt64,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 KinectManager_GetJointPosition_m1A99D3ADB3A3C09BED43673B62C9406388BF80BE (KinectManager_t6D168A1C710083948363282B0D862EDDFFD88211* __this, uint64_t ___userId0, int32_t ___joint1, const RuntimeMethod* method) ;
// System.Char System.String::get_Chars(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3 (String_t* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Int32 System.String::get_Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector4::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* __this, float ___x0, float ___y1, float ___z2, float ___w3, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Quaternion::Internal_ToEulerRad(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Quaternion_Internal_ToEulerRad_m9B2C77284AEE6F2C43B6C42F1F888FB4FC904462 (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Quaternion::Internal_MakePositive(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Quaternion_Internal_MakePositive_m864320DA2D027C186C95B2A5BC2C66B0EB4A6C11 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___euler0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Vector3::op_Equality(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector3_op_Equality_m15951D1B53E3BE36C9D265E229090020FBD72EBB_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___lhs0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rhs1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::Normalize(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Normalize_m6120F119433C5B60BBB28731D3D4A0DA50A84DDD_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::Magnitude(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Magnitude_m6AD0BEBF88AAF98188A851E62D7A32CB5B7830EF_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___vector0, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void com.rfilkov.components.SceneMeshRendererGpu::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneMeshRendererGpu_Start_mCFB656E9F57CE7503F9A26018A49FBA380982DC8 (SceneMeshRendererGpu_t5E08B994ADA093F4C771151BE372410DAA8D238D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KinectManager_t6D168A1C710083948363282B0D862EDDFFD88211_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectsOfType_TisLight_t1E68479B7782AF2050FAA02A5DC612FD034F18F3_m9B250477C56BC975B7285CA3DFD1C0A118A3B185_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD45BD41901F5DF0CED9D6EE8E596968BE15FC475);
		s_Il2CppMethodInitialized = true;
	}
	LightU5BU5D_tDA7C763E668D91E53318509D94BC0CF10B8AB990* V_0 = NULL;
	SceneMeshRendererGpu_t5E08B994ADA093F4C771151BE372410DAA8D238D* G_B2_0 = NULL;
	SceneMeshRendererGpu_t5E08B994ADA093F4C771151BE372410DAA8D238D* G_B1_0 = NULL;
	SceneMeshRendererGpu_t5E08B994ADA093F4C771151BE372410DAA8D238D* G_B3_0 = NULL;
	SensorData_t889044994784020C5FA25311175FB3F8B715DD27* G_B4_0 = NULL;
	SceneMeshRendererGpu_t5E08B994ADA093F4C771151BE372410DAA8D238D* G_B4_1 = NULL;
	{
		// kinectManager = KinectManager.Instance;
		il2cpp_codegen_runtime_class_init_inline(KinectManager_t6D168A1C710083948363282B0D862EDDFFD88211_il2cpp_TypeInfo_var);
		KinectManager_t6D168A1C710083948363282B0D862EDDFFD88211* L_0;
		L_0 = KinectManager_get_Instance_mA12B1FCAF8167AF8235386FD868E43E15B29EC64_inline(NULL);
		__this->___kinectManager_21 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___kinectManager_21), (void*)L_0);
		// sensorData = (kinectManager != null && kinectManager.IsInitialized()) ? kinectManager.GetSensorData(sensorIndex) : null;
		KinectManager_t6D168A1C710083948363282B0D862EDDFFD88211* L_1 = __this->___kinectManager_21;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_1, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		G_B1_0 = __this;
		if (!L_2)
		{
			G_B2_0 = __this;
			goto IL_0027;
		}
	}
	{
		KinectManager_t6D168A1C710083948363282B0D862EDDFFD88211* L_3 = __this->___kinectManager_21;
		NullCheck(L_3);
		bool L_4;
		L_4 = KinectManager_IsInitialized_m4E8315ADDF5709A7239F26EAB7AC44392D77A179(L_3, NULL);
		G_B2_0 = G_B1_0;
		if (L_4)
		{
			G_B3_0 = G_B1_0;
			goto IL_002a;
		}
	}

IL_0027:
	{
		G_B4_0 = ((SensorData_t889044994784020C5FA25311175FB3F8B715DD27*)(NULL));
		G_B4_1 = G_B2_0;
		goto IL_003b;
	}

IL_002a:
	{
		KinectManager_t6D168A1C710083948363282B0D862EDDFFD88211* L_5 = __this->___kinectManager_21;
		int32_t L_6 = __this->___sensorIndex_4;
		NullCheck(L_5);
		SensorData_t889044994784020C5FA25311175FB3F8B715DD27* L_7;
		L_7 = KinectManager_GetSensorData_m6280DCF2ABA874FCBAB6E7B0F7202C58AA2F4267(L_5, L_6, NULL);
		G_B4_0 = L_7;
		G_B4_1 = G_B3_0;
	}

IL_003b:
	{
		NullCheck(G_B4_1);
		G_B4_1->___sensorData_22 = G_B4_0;
		Il2CppCodeGenWriteBarrier((void**)(&G_B4_1->___sensorData_22), (void*)G_B4_0);
		// if (meshTexture == MeshTextureType.InfraredTexture && kinectManager && kinectManager.GetInfraredImageTex(sensorIndex) == null)
		int32_t L_8 = __this->___meshTexture_9;
		if ((!(((uint32_t)L_8) == ((uint32_t)1))))
		{
			goto IL_0079;
		}
	}
	{
		KinectManager_t6D168A1C710083948363282B0D862EDDFFD88211* L_9 = __this->___kinectManager_21;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_10;
		L_10 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_9, NULL);
		if (!L_10)
		{
			goto IL_0079;
		}
	}
	{
		KinectManager_t6D168A1C710083948363282B0D862EDDFFD88211* L_11 = __this->___kinectManager_21;
		int32_t L_12 = __this->___sensorIndex_4;
		NullCheck(L_11);
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_13;
		L_13 = KinectManager_GetInfraredImageTex_m01290B9F31B007E2CA70346A0A69397FB811209D(L_11, L_12, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_14;
		L_14 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_13, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_14)
		{
			goto IL_0079;
		}
	}
	{
		// Debug.LogError("Please set the 'Get Infrared Frames'-setting of KinectManager to 'Infrared texture'.");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_m059825802BB6AF7EA9693FEBEEB0D85F59A3E38E(_stringLiteralD45BD41901F5DF0CED9D6EE8E596968BE15FC475, NULL);
	}

IL_0079:
	{
		// Light[] sceneLights = GameObject.FindObjectsOfType<Light>();
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		LightU5BU5D_tDA7C763E668D91E53318509D94BC0CF10B8AB990* L_15;
		L_15 = Object_FindObjectsOfType_TisLight_t1E68479B7782AF2050FAA02A5DC612FD034F18F3_m9B250477C56BC975B7285CA3DFD1C0A118A3B185(Object_FindObjectsOfType_TisLight_t1E68479B7782AF2050FAA02A5DC612FD034F18F3_m9B250477C56BC975B7285CA3DFD1C0A118A3B185_RuntimeMethod_var);
		V_0 = L_15;
		// lighting.SetLightsAndBounds(sceneLights, transform.position, new Vector3(20f, 20f, 20f));
		FragmentLighting_tE9A6F75445DF103494C8BFA7BD9D600355F9CDDC* L_16 = __this->___lighting_40;
		LightU5BU5D_tDA7C763E668D91E53318509D94BC0CF10B8AB990* L_17 = V_0;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_18;
		L_18 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_18);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19;
		L_19 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_18, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20;
		memset((&L_20), 0, sizeof(L_20));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_20), (20.0f), (20.0f), (20.0f), /*hidden argument*/NULL);
		NullCheck(L_16);
		FragmentLighting_SetLightsAndBounds_mCC77891ED276DB7DA3C7D2F4560CB9A3AB2AE47A(L_16, L_17, L_19, L_20, NULL);
		// }
		return;
	}
}
// System.Void com.rfilkov.components.SceneMeshRendererGpu::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneMeshRendererGpu_OnDestroy_m21AC05A36DBFE898093F4913402E7D1553DE74C8 (SceneMeshRendererGpu_t5E08B994ADA093F4C771151BE372410DAA8D238D* __this, const RuntimeMethod* method) 
{
	{
		// if (bMeshInited)
		bool L_0 = __this->___bMeshInited_38;
		if (!L_0)
		{
			goto IL_000e;
		}
	}
	{
		// FinishMesh();
		SceneMeshRendererGpu_FinishMesh_m3E1553DA0A008A5C1FE6014CB5B062FBB570D848(__this, NULL);
	}

IL_000e:
	{
		// lighting.ReleaseResources();
		FragmentLighting_tE9A6F75445DF103494C8BFA7BD9D600355F9CDDC* L_1 = __this->___lighting_40;
		NullCheck(L_1);
		FragmentLighting_ReleaseResources_m8AB66F52E7123A9A0DC4E9D1951BCB30F3452A82(L_1, NULL);
		// }
		return;
	}
}
// System.Void com.rfilkov.components.SceneMeshRendererGpu::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneMeshRendererGpu_Update_m9F967573F1222F0AF2AE358C60C1CD26421C117C (SceneMeshRendererGpu_t5E08B994ADA093F4C771151BE372410DAA8D238D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (mesh == null && sensorData != null && sensorData.depthCamIntr != null)
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_0 = __this->___mesh_19;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0029;
		}
	}
	{
		SensorData_t889044994784020C5FA25311175FB3F8B715DD27* L_2 = __this->___sensorData_22;
		if (!L_2)
		{
			goto IL_0029;
		}
	}
	{
		SensorData_t889044994784020C5FA25311175FB3F8B715DD27* L_3 = __this->___sensorData_22;
		NullCheck(L_3);
		CameraIntrinsics_t272DC8A0981DE0A132DFC4E7B48C942191D56EFF* L_4 = L_3->___depthCamIntr_9;
		if (!L_4)
		{
			goto IL_0029;
		}
	}
	{
		// InitMesh();
		SceneMeshRendererGpu_InitMesh_m7B7FDD8291CC774F3C30AE5CABCEA81F7F05E568(__this, NULL);
	}

IL_0029:
	{
		// if (bMeshInited)
		bool L_5 = __this->___bMeshInited_38;
		if (!L_5)
		{
			goto IL_0037;
		}
	}
	{
		// UpdateMesh();
		SceneMeshRendererGpu_UpdateMesh_mB7C74ACFF4938EF0CEA860CADC9B44E42CB19CEA(__this, NULL);
	}

IL_0037:
	{
		// }
		return;
	}
}
// System.Void com.rfilkov.components.SceneMeshRendererGpu::InitMesh()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneMeshRendererGpu_InitMesh_m7B7FDD8291CC774F3C30AE5CABCEA81F7F05E568 (SceneMeshRendererGpu_t5E08B994ADA093F4C771151BE372410DAA8D238D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisMeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5_mB82F66059DFB5715DD85BDED1D90BC03A6C9E623_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisTransform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_m60E86366B3E431D4C4A549CF4FE5951087686F7F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DepthSensorBase_tB644BCAB82289DCDB9290A9B3A6972F0F13B0774_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral42464E53254A84FBD1D0AE5C6DE78AE09075E109);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6CC53C5843954C61F83727CB529B9530F6113836);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7B15541EEA8A44CEE3ECC230191B03CE7FD444E8);
		s_Il2CppMethodInitialized = true;
	}
	MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* V_0 = NULL;
	Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* V_1 = NULL;
	Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* V_2 = NULL;
	SceneMeshRendererGpu_t5E08B994ADA093F4C771151BE372410DAA8D238D* G_B8_0 = NULL;
	SceneMeshRendererGpu_t5E08B994ADA093F4C771151BE372410DAA8D238D* G_B7_0 = NULL;
	DepthSensorBase_tB644BCAB82289DCDB9290A9B3A6972F0F13B0774* G_B9_0 = NULL;
	SceneMeshRendererGpu_t5E08B994ADA093F4C771151BE372410DAA8D238D* G_B9_1 = NULL;
	{
		// mesh = new Mesh
		// {
		//     name = "SceneMesh-Sensor" + sensorIndex,
		//     indexFormat = UnityEngine.Rendering.IndexFormat.UInt32
		// };
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_0 = (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4*)il2cpp_codegen_object_new(Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Mesh__ctor_m5A9AECEDDAFFD84811ED8928012BDE97A9CEBD00(L_0, NULL);
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_1 = L_0;
		int32_t* L_2 = (&__this->___sensorIndex_4);
		String_t* L_3;
		L_3 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_2, NULL);
		String_t* L_4;
		L_4 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteral6CC53C5843954C61F83727CB529B9530F6113836, L_3, NULL);
		NullCheck(L_1);
		Object_set_name_mC79E6DC8FFD72479C90F0C4CC7F42A0FEAF5AE47(L_1, L_4, NULL);
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_5 = L_1;
		NullCheck(L_5);
		Mesh_set_indexFormat_mCCC7837A0916FA7A272159DA6AF984B0022488F4(L_5, 1, NULL);
		__this->___mesh_19 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mesh_19), (void*)L_5);
		// MeshFilter meshFilter = GetComponent<MeshFilter>();
		MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* L_6;
		L_6 = Component_GetComponent_TisMeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5_mB82F66059DFB5715DD85BDED1D90BC03A6C9E623(__this, Component_GetComponent_TisMeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5_mB82F66059DFB5715DD85BDED1D90BC03A6C9E623_RuntimeMethod_var);
		V_0 = L_6;
		// if (meshFilter != null)
		MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* L_7 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_8;
		L_8 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_7, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_8)
		{
			goto IL_004b;
		}
	}
	{
		// meshFilter.mesh = mesh;
		MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* L_9 = V_0;
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_10 = __this->___mesh_19;
		NullCheck(L_9);
		MeshFilter_set_mesh_mD2988E2D835205FD6B6CD35A61E1592844D971F8(L_9, L_10, NULL);
		goto IL_0055;
	}

IL_004b:
	{
		// Debug.LogWarning("MeshFilter not found! You may not see the mesh on screen");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_mEF15C6B17CE4E1FA7E379CDB82CE40FCD89A3F28(_stringLiteral7B15541EEA8A44CEE3ECC230191B03CE7FD444E8, NULL);
	}

IL_0055:
	{
		// Renderer meshRenderer = GetComponent<Renderer>();
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_11;
		L_11 = Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8(__this, Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8_RuntimeMethod_var);
		V_1 = L_11;
		// if (meshRenderer)
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_12 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_13;
		L_13 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_12, NULL);
		if (!L_13)
		{
			goto IL_0090;
		}
	}
	{
		// Shader meshShader = Shader.Find("Kinect/SceneMeshUShader");
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_14;
		L_14 = Shader_Find_mFF2A8FC042B9CFAA9800679CA674D52859BF3A72(_stringLiteral42464E53254A84FBD1D0AE5C6DE78AE09075E109, NULL);
		V_2 = L_14;
		// if(meshShader != null)
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_15 = V_2;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_16;
		L_16 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_15, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_16)
		{
			goto IL_0090;
		}
	}
	{
		// meshShaderMat = new Material(meshShader);
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_17 = V_2;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_18 = (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3*)il2cpp_codegen_object_new(Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_il2cpp_TypeInfo_var);
		NullCheck(L_18);
		Material__ctor_m7FDF47105D66D19591BE505A0C42B0F90D88C9BF(L_18, L_17, NULL);
		__this->___meshShaderMat_24 = L_18;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___meshShaderMat_24), (void*)L_18);
		// meshRenderer.material = meshShaderMat;
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_19 = V_1;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_20 = __this->___meshShaderMat_24;
		NullCheck(L_19);
		Renderer_set_material_m21E88977071E0A914D62F3D9CFF0193B3117C45A(L_19, L_20, NULL);
	}

IL_0090:
	{
		// trans = GetComponent<Transform>();
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_21;
		L_21 = Component_GetComponent_TisTransform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_m60E86366B3E431D4C4A549CF4FE5951087686F7F(__this, Component_GetComponent_TisTransform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_m60E86366B3E431D4C4A549CF4FE5951087686F7F_RuntimeMethod_var);
		__this->___trans_20 = L_21;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___trans_20), (void*)L_21);
		// sensorInt = sensorData != null ? (DepthSensorBase)sensorData.sensorInterface : null;
		SensorData_t889044994784020C5FA25311175FB3F8B715DD27* L_22 = __this->___sensorData_22;
		G_B7_0 = __this;
		if (L_22)
		{
			G_B8_0 = __this;
			goto IL_00a8;
		}
	}
	{
		G_B9_0 = ((DepthSensorBase_tB644BCAB82289DCDB9290A9B3A6972F0F13B0774*)(NULL));
		G_B9_1 = G_B7_0;
		goto IL_00b8;
	}

IL_00a8:
	{
		SensorData_t889044994784020C5FA25311175FB3F8B715DD27* L_23 = __this->___sensorData_22;
		NullCheck(L_23);
		RuntimeObject* L_24 = L_23->___sensorInterface_0;
		G_B9_0 = ((DepthSensorBase_tB644BCAB82289DCDB9290A9B3A6972F0F13B0774*)CastclassClass((RuntimeObject*)L_24, DepthSensorBase_tB644BCAB82289DCDB9290A9B3A6972F0F13B0774_il2cpp_TypeInfo_var));
		G_B9_1 = G_B8_0;
	}

IL_00b8:
	{
		NullCheck(G_B9_1);
		G_B9_1->___sensorInt_23 = G_B9_0;
		Il2CppCodeGenWriteBarrier((void**)(&G_B9_1->___sensorInt_23), (void*)G_B9_0);
		// if (sensorData != null && sensorInt != null && meshShaderMat != null)
		SensorData_t889044994784020C5FA25311175FB3F8B715DD27* L_25 = __this->___sensorData_22;
		if (!L_25)
		{
			goto IL_018e;
		}
	}
	{
		DepthSensorBase_tB644BCAB82289DCDB9290A9B3A6972F0F13B0774* L_26 = __this->___sensorInt_23;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_27;
		L_27 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_26, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_27)
		{
			goto IL_018e;
		}
	}
	{
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_28 = __this->___meshShaderMat_24;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_29;
		L_29 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_28, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_29)
		{
			goto IL_018e;
		}
	}
	{
		// Vector2Int imageRes = Vector2Int.zero;
		Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A L_30;
		L_30 = Vector2Int_get_zero_mA4130E83BCF623B65B14574D496C6C0FB441D9FE_inline(NULL);
		// if (sensorInt.pointCloudColorTexture == null)
		DepthSensorBase_tB644BCAB82289DCDB9290A9B3A6972F0F13B0774* L_31 = __this->___sensorInt_23;
		NullCheck(L_31);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_32 = L_31->___pointCloudColorTexture_13;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_33;
		L_33 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_32, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_33)
		{
			goto IL_012f;
		}
	}
	{
		// sensorInt.pointCloudResolution = sourceImageResolution;
		DepthSensorBase_tB644BCAB82289DCDB9290A9B3A6972F0F13B0774* L_34 = __this->___sensorInt_23;
		int32_t L_35 = __this->___sourceImageResolution_5;
		NullCheck(L_34);
		L_34->___pointCloudResolution_11 = L_35;
		// imageRes = sensorInt.GetPointCloudTexResolution(sensorData);
		DepthSensorBase_tB644BCAB82289DCDB9290A9B3A6972F0F13B0774* L_36 = __this->___sensorInt_23;
		SensorData_t889044994784020C5FA25311175FB3F8B715DD27* L_37 = __this->___sensorData_22;
		NullCheck(L_36);
		Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A L_38;
		L_38 = VirtualFuncInvoker1< Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A, SensorData_t889044994784020C5FA25311175FB3F8B715DD27* >::Invoke(79 /* UnityEngine.Vector2Int com.rfilkov.kinect.DepthSensorBase::GetPointCloudTexResolution(com.rfilkov.kinect.KinectInterop/SensorData) */, L_36, L_37);
		// colorTextureCreated = true;
		__this->___colorTextureCreated_32 = (bool)1;
		goto IL_016a;
	}

IL_012f:
	{
		// sourceImageResolution = sensorInt.pointCloudResolution;
		DepthSensorBase_tB644BCAB82289DCDB9290A9B3A6972F0F13B0774* L_39 = __this->___sensorInt_23;
		NullCheck(L_39);
		int32_t L_40 = L_39->___pointCloudResolution_11;
		__this->___sourceImageResolution_5 = L_40;
		// imageRes = sensorInt.GetPointCloudTexResolution(sensorData);
		DepthSensorBase_tB644BCAB82289DCDB9290A9B3A6972F0F13B0774* L_41 = __this->___sensorInt_23;
		SensorData_t889044994784020C5FA25311175FB3F8B715DD27* L_42 = __this->___sensorData_22;
		NullCheck(L_41);
		Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A L_43;
		L_43 = VirtualFuncInvoker1< Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A, SensorData_t889044994784020C5FA25311175FB3F8B715DD27* >::Invoke(79 /* UnityEngine.Vector2Int com.rfilkov.kinect.DepthSensorBase::GetPointCloudTexResolution(com.rfilkov.kinect.KinectInterop/SensorData) */, L_41, L_42);
		// colorTexture = sensorInt.pointCloudColorTexture;
		DepthSensorBase_tB644BCAB82289DCDB9290A9B3A6972F0F13B0774* L_44 = __this->___sensorInt_23;
		NullCheck(L_44);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_45 = L_44->___pointCloudColorTexture_13;
		__this->___colorTexture_30 = L_45;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___colorTexture_30), (void*)L_45);
		// colorTextureCreated = false;
		__this->___colorTextureCreated_32 = (bool)0;
	}

IL_016a:
	{
		// sensorSpaceScale = kinectManager.GetSensorSpaceScale(sensorIndex);  // kinectManager.GetDepthImageScale(sensorIndex)
		KinectManager_t6D168A1C710083948363282B0D862EDDFFD88211* L_46 = __this->___kinectManager_21;
		int32_t L_47 = __this->___sensorIndex_4;
		NullCheck(L_46);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_48;
		L_48 = KinectManager_GetSensorSpaceScale_m096BD92B11206702B2624831A40E3C8B5C6A49CB(L_46, L_47, NULL);
		__this->___sensorSpaceScale_27 = L_48;
		// UpdateTexturesAndBuffers();
		SceneMeshRendererGpu_UpdateTexturesAndBuffers_mF85062722A3E7748B45F50F422525124B8A70631(__this, NULL);
		// bMeshInited = true;
		__this->___bMeshInited_38 = (bool)1;
	}

IL_018e:
	{
		// }
		return;
	}
}
// System.Void com.rfilkov.components.SceneMeshRendererGpu::UpdateTexturesAndBuffers()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneMeshRendererGpu_UpdateTexturesAndBuffers_mF85062722A3E7748B45F50F422525124B8A70631 (SceneMeshRendererGpu_t5E08B994ADA093F4C771151BE372410DAA8D238D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KinectInterop_t8231C68411373688AA650B978611F932EE5860F9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	SceneMeshRendererGpu_t5E08B994ADA093F4C771151BE372410DAA8D238D* G_B28_0 = NULL;
	SceneMeshRendererGpu_t5E08B994ADA093F4C771151BE372410DAA8D238D* G_B27_0 = NULL;
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* G_B29_0 = NULL;
	SceneMeshRendererGpu_t5E08B994ADA093F4C771151BE372410DAA8D238D* G_B29_1 = NULL;
	{
		// if (sensorData == null || sensorInt == null)
		SensorData_t889044994784020C5FA25311175FB3F8B715DD27* L_0 = __this->___sensorData_22;
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		DepthSensorBase_tB644BCAB82289DCDB9290A9B3A6972F0F13B0774* L_1 = __this->___sensorInt_23;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_1, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_2)
		{
			goto IL_0017;
		}
	}

IL_0016:
	{
		// return;
		return;
	}

IL_0017:
	{
		// Vector2Int imageRes = sensorInt.GetPointCloudTexResolution(sensorData);
		DepthSensorBase_tB644BCAB82289DCDB9290A9B3A6972F0F13B0774* L_3 = __this->___sensorInt_23;
		SensorData_t889044994784020C5FA25311175FB3F8B715DD27* L_4 = __this->___sensorData_22;
		NullCheck(L_3);
		Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A L_5;
		L_5 = VirtualFuncInvoker1< Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A, SensorData_t889044994784020C5FA25311175FB3F8B715DD27* >::Invoke(79 /* UnityEngine.Vector2Int com.rfilkov.kinect.DepthSensorBase::GetPointCloudTexResolution(com.rfilkov.kinect.KinectInterop/SensorData) */, L_3, L_4);
		V_0 = L_5;
		// if (colorTextureCreated && (colorTexture == null ||
		//     colorTexture.width != imageRes.x || colorTexture.height != imageRes.y))
		bool L_6 = __this->___colorTextureCreated_32;
		if (!L_6)
		{
			goto IL_0098;
		}
	}
	{
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_7 = __this->___colorTexture_30;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_8;
		L_8 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_7, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (L_8)
		{
			goto IL_0067;
		}
	}
	{
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_9 = __this->___colorTexture_30;
		NullCheck(L_9);
		int32_t L_10;
		L_10 = VirtualFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_9);
		int32_t L_11;
		L_11 = Vector2Int_get_x_mA2CACB1B6E6B5AD0CCC32B2CD2EDCE3ECEB50576_inline((&V_0), NULL);
		if ((!(((uint32_t)L_10) == ((uint32_t)L_11))))
		{
			goto IL_0067;
		}
	}
	{
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_12 = __this->___colorTexture_30;
		NullCheck(L_12);
		int32_t L_13;
		L_13 = VirtualFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Texture::get_height() */, L_12);
		int32_t L_14;
		L_14 = Vector2Int_get_y_m48454163ECF0B463FB5A16A0C4FC4B14DB0768B3_inline((&V_0), NULL);
		if ((((int32_t)L_13) == ((int32_t)L_14)))
		{
			goto IL_0098;
		}
	}

IL_0067:
	{
		// colorTexture = KinectInterop.CreateRenderTexture(colorTexture, imageRes.x, imageRes.y, RenderTextureFormat.ARGB32);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_15 = __this->___colorTexture_30;
		int32_t L_16;
		L_16 = Vector2Int_get_x_mA2CACB1B6E6B5AD0CCC32B2CD2EDCE3ECEB50576_inline((&V_0), NULL);
		int32_t L_17;
		L_17 = Vector2Int_get_y_m48454163ECF0B463FB5A16A0C4FC4B14DB0768B3_inline((&V_0), NULL);
		il2cpp_codegen_runtime_class_init_inline(KinectInterop_t8231C68411373688AA650B978611F932EE5860F9_il2cpp_TypeInfo_var);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_18;
		L_18 = KinectInterop_CreateRenderTexture_m84068B60B5DE22E7D439F086D1312279950E7D5E(L_15, L_16, L_17, 0, NULL);
		__this->___colorTexture_30 = L_18;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___colorTexture_30), (void*)L_18);
		// sensorInt.pointCloudColorTexture = colorTexture;
		DepthSensorBase_tB644BCAB82289DCDB9290A9B3A6972F0F13B0774* L_19 = __this->___sensorInt_23;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_20 = __this->___colorTexture_30;
		NullCheck(L_19);
		L_19->___pointCloudColorTexture_13 = L_20;
		Il2CppCodeGenWriteBarrier((void**)(&L_19->___pointCloudColorTexture_13), (void*)L_20);
	}

IL_0098:
	{
		// if (sourceImageResolution == DepthSensorBase.PointCloudResolution.DepthCameraResolution)
		int32_t L_21 = __this->___sourceImageResolution_5;
		if (L_21)
		{
			goto IL_00f9;
		}
	}
	{
		// int depthBufferLength = sensorData.depthImageWidth * sensorData.depthImageHeight >> 1;
		SensorData_t889044994784020C5FA25311175FB3F8B715DD27* L_22 = __this->___sensorData_22;
		NullCheck(L_22);
		int32_t L_23 = L_22->___depthImageWidth_25;
		SensorData_t889044994784020C5FA25311175FB3F8B715DD27* L_24 = __this->___sensorData_22;
		NullCheck(L_24);
		int32_t L_25 = L_24->___depthImageHeight_26;
		V_1 = ((int32_t)(((int32_t)il2cpp_codegen_multiply(L_23, L_25))>>1));
		// if (depthImageBuffer == null || depthImageBuffer.count != depthBufferLength)
		ComputeBuffer_t51EADA9015EBCC1B982C5584E9AB2734415A8233* L_26 = __this->___depthImageBuffer_29;
		if (!L_26)
		{
			goto IL_00d3;
		}
	}
	{
		ComputeBuffer_t51EADA9015EBCC1B982C5584E9AB2734415A8233* L_27 = __this->___depthImageBuffer_29;
		NullCheck(L_27);
		int32_t L_28;
		L_28 = ComputeBuffer_get_count_m4DAA2D2714BA7A46F007697F601E4446F1049506(L_27, NULL);
		int32_t L_29 = V_1;
		if ((((int32_t)L_28) == ((int32_t)L_29)))
		{
			goto IL_0196;
		}
	}

IL_00d3:
	{
		// depthImageCopy = new ushort[depthBufferLength << 1];
		int32_t L_30 = V_1;
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_31 = (UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83*)(UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83*)SZArrayNew(UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83_il2cpp_TypeInfo_var, (uint32_t)((int32_t)(L_30<<1)));
		__this->___depthImageCopy_28 = L_31;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___depthImageCopy_28), (void*)L_31);
		// depthImageBuffer = KinectInterop.CreateComputeBuffer(depthImageBuffer, depthBufferLength, sizeof(uint));
		ComputeBuffer_t51EADA9015EBCC1B982C5584E9AB2734415A8233* L_32 = __this->___depthImageBuffer_29;
		int32_t L_33 = V_1;
		il2cpp_codegen_runtime_class_init_inline(KinectInterop_t8231C68411373688AA650B978611F932EE5860F9_il2cpp_TypeInfo_var);
		ComputeBuffer_t51EADA9015EBCC1B982C5584E9AB2734415A8233* L_34;
		L_34 = KinectInterop_CreateComputeBuffer_m56CEE7B21E1D61C4AE5E14E710017C1BA61E9475(L_32, L_33, 4, NULL);
		__this->___depthImageBuffer_29 = L_34;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___depthImageBuffer_29), (void*)L_34);
		goto IL_0196;
	}

IL_00f9:
	{
		// int bufferLength = sensorData.colorImageWidth * sensorData.colorImageHeight >> 1;
		SensorData_t889044994784020C5FA25311175FB3F8B715DD27* L_35 = __this->___sensorData_22;
		NullCheck(L_35);
		int32_t L_36 = L_35->___colorImageWidth_18;
		SensorData_t889044994784020C5FA25311175FB3F8B715DD27* L_37 = __this->___sensorData_22;
		NullCheck(L_37);
		int32_t L_38 = L_37->___colorImageHeight_19;
		V_2 = ((int32_t)(((int32_t)il2cpp_codegen_multiply(L_36, L_38))>>1));
		// if (sensorData.colorDepthBuffer == null || sensorData.colorDepthBuffer.count != bufferLength)
		SensorData_t889044994784020C5FA25311175FB3F8B715DD27* L_39 = __this->___sensorData_22;
		NullCheck(L_39);
		ComputeBuffer_t51EADA9015EBCC1B982C5584E9AB2734415A8233* L_40 = L_39->___colorDepthBuffer_64;
		if (!L_40)
		{
			goto IL_0133;
		}
	}
	{
		SensorData_t889044994784020C5FA25311175FB3F8B715DD27* L_41 = __this->___sensorData_22;
		NullCheck(L_41);
		ComputeBuffer_t51EADA9015EBCC1B982C5584E9AB2734415A8233* L_42 = L_41->___colorDepthBuffer_64;
		NullCheck(L_42);
		int32_t L_43;
		L_43 = ComputeBuffer_get_count_m4DAA2D2714BA7A46F007697F601E4446F1049506(L_42, NULL);
		int32_t L_44 = V_2;
		if ((((int32_t)L_43) == ((int32_t)L_44)))
		{
			goto IL_0150;
		}
	}

IL_0133:
	{
		// sensorData.colorDepthBuffer = KinectInterop.CreateComputeBuffer(sensorData.colorDepthBuffer, bufferLength, sizeof(uint));
		SensorData_t889044994784020C5FA25311175FB3F8B715DD27* L_45 = __this->___sensorData_22;
		SensorData_t889044994784020C5FA25311175FB3F8B715DD27* L_46 = __this->___sensorData_22;
		NullCheck(L_46);
		ComputeBuffer_t51EADA9015EBCC1B982C5584E9AB2734415A8233* L_47 = L_46->___colorDepthBuffer_64;
		int32_t L_48 = V_2;
		il2cpp_codegen_runtime_class_init_inline(KinectInterop_t8231C68411373688AA650B978611F932EE5860F9_il2cpp_TypeInfo_var);
		ComputeBuffer_t51EADA9015EBCC1B982C5584E9AB2734415A8233* L_49;
		L_49 = KinectInterop_CreateComputeBuffer_m56CEE7B21E1D61C4AE5E14E710017C1BA61E9475(L_47, L_48, 4, NULL);
		NullCheck(L_45);
		L_45->___colorDepthBuffer_64 = L_49;
		Il2CppCodeGenWriteBarrier((void**)(&L_45->___colorDepthBuffer_64), (void*)L_49);
	}

IL_0150:
	{
		// if (meshTexture == MeshTextureType.InfraredTexture)
		int32_t L_50 = __this->___meshTexture_9;
		if ((!(((uint32_t)L_50) == ((uint32_t)1))))
		{
			goto IL_0196;
		}
	}
	{
		// if (sensorData.colorInfraredBuffer == null || sensorData.colorInfraredBuffer.count != bufferLength)
		SensorData_t889044994784020C5FA25311175FB3F8B715DD27* L_51 = __this->___sensorData_22;
		NullCheck(L_51);
		ComputeBuffer_t51EADA9015EBCC1B982C5584E9AB2734415A8233* L_52 = L_51->___colorInfraredBuffer_67;
		if (!L_52)
		{
			goto IL_0179;
		}
	}
	{
		SensorData_t889044994784020C5FA25311175FB3F8B715DD27* L_53 = __this->___sensorData_22;
		NullCheck(L_53);
		ComputeBuffer_t51EADA9015EBCC1B982C5584E9AB2734415A8233* L_54 = L_53->___colorInfraredBuffer_67;
		NullCheck(L_54);
		int32_t L_55;
		L_55 = ComputeBuffer_get_count_m4DAA2D2714BA7A46F007697F601E4446F1049506(L_54, NULL);
		int32_t L_56 = V_2;
		if ((((int32_t)L_55) == ((int32_t)L_56)))
		{
			goto IL_0196;
		}
	}

IL_0179:
	{
		// sensorData.colorInfraredBuffer = KinectInterop.CreateComputeBuffer(sensorData.colorInfraredBuffer, bufferLength, sizeof(uint));
		SensorData_t889044994784020C5FA25311175FB3F8B715DD27* L_57 = __this->___sensorData_22;
		SensorData_t889044994784020C5FA25311175FB3F8B715DD27* L_58 = __this->___sensorData_22;
		NullCheck(L_58);
		ComputeBuffer_t51EADA9015EBCC1B982C5584E9AB2734415A8233* L_59 = L_58->___colorInfraredBuffer_67;
		int32_t L_60 = V_2;
		il2cpp_codegen_runtime_class_init_inline(KinectInterop_t8231C68411373688AA650B978611F932EE5860F9_il2cpp_TypeInfo_var);
		ComputeBuffer_t51EADA9015EBCC1B982C5584E9AB2734415A8233* L_61;
		L_61 = KinectInterop_CreateComputeBuffer_m56CEE7B21E1D61C4AE5E14E710017C1BA61E9475(L_59, L_60, 4, NULL);
		NullCheck(L_57);
		L_57->___colorInfraredBuffer_67 = L_61;
		Il2CppCodeGenWriteBarrier((void**)(&L_57->___colorInfraredBuffer_67), (void*)L_61);
	}

IL_0196:
	{
		// if (colorTextureCopy == null || colorTextureCopy.width != imageRes.x || colorTextureCopy.height != imageRes.y)
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_62 = __this->___colorTextureCopy_31;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_63;
		L_63 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_62, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (L_63)
		{
			goto IL_01cc;
		}
	}
	{
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_64 = __this->___colorTextureCopy_31;
		NullCheck(L_64);
		int32_t L_65;
		L_65 = VirtualFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_64);
		int32_t L_66;
		L_66 = Vector2Int_get_x_mA2CACB1B6E6B5AD0CCC32B2CD2EDCE3ECEB50576_inline((&V_0), NULL);
		if ((!(((uint32_t)L_65) == ((uint32_t)L_66))))
		{
			goto IL_01cc;
		}
	}
	{
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_67 = __this->___colorTextureCopy_31;
		NullCheck(L_67);
		int32_t L_68;
		L_68 = VirtualFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Texture::get_height() */, L_67);
		int32_t L_69;
		L_69 = Vector2Int_get_y_m48454163ECF0B463FB5A16A0C4FC4B14DB0768B3_inline((&V_0), NULL);
		if ((((int32_t)L_68) == ((int32_t)L_69)))
		{
			goto IL_01ec;
		}
	}

IL_01cc:
	{
		// colorTextureCopy = KinectInterop.CreateRenderTexture(colorTextureCopy, imageRes.x, imageRes.y, RenderTextureFormat.ARGB32);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_70 = __this->___colorTextureCopy_31;
		int32_t L_71;
		L_71 = Vector2Int_get_x_mA2CACB1B6E6B5AD0CCC32B2CD2EDCE3ECEB50576_inline((&V_0), NULL);
		int32_t L_72;
		L_72 = Vector2Int_get_y_m48454163ECF0B463FB5A16A0C4FC4B14DB0768B3_inline((&V_0), NULL);
		il2cpp_codegen_runtime_class_init_inline(KinectInterop_t8231C68411373688AA650B978611F932EE5860F9_il2cpp_TypeInfo_var);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_73;
		L_73 = KinectInterop_CreateRenderTexture_m84068B60B5DE22E7D439F086D1312279950E7D5E(L_70, L_71, L_72, 0, NULL);
		__this->___colorTextureCopy_31 = L_73;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___colorTextureCopy_31), (void*)L_73);
	}

IL_01ec:
	{
		// if (spaceTableBuffer == null || imageWidth != imageRes.x || imageHeight != imageRes.y)
		ComputeBuffer_t51EADA9015EBCC1B982C5584E9AB2734415A8233* L_74 = __this->___spaceTableBuffer_26;
		if (!L_74)
		{
			goto IL_0212;
		}
	}
	{
		int32_t L_75 = __this->___imageWidth_36;
		int32_t L_76;
		L_76 = Vector2Int_get_x_mA2CACB1B6E6B5AD0CCC32B2CD2EDCE3ECEB50576_inline((&V_0), NULL);
		if ((!(((uint32_t)L_75) == ((uint32_t)L_76))))
		{
			goto IL_0212;
		}
	}
	{
		int32_t L_77 = __this->___imageHeight_37;
		int32_t L_78;
		L_78 = Vector2Int_get_y_m48454163ECF0B463FB5A16A0C4FC4B14DB0768B3_inline((&V_0), NULL);
		if ((((int32_t)L_77) == ((int32_t)L_78)))
		{
			goto IL_0286;
		}
	}

IL_0212:
	{
		// spaceTable = sensorInt.pointCloudResolution == DepthSensorBase.PointCloudResolution.DepthCameraResolution ?
		//     sensorInt.GetDepthCameraSpaceTable(sensorData) : sensorInt.GetColorCameraSpaceTable(sensorData);
		DepthSensorBase_tB644BCAB82289DCDB9290A9B3A6972F0F13B0774* L_79 = __this->___sensorInt_23;
		NullCheck(L_79);
		int32_t L_80 = L_79->___pointCloudResolution_11;
		G_B27_0 = __this;
		if (!L_80)
		{
			G_B28_0 = __this;
			goto IL_0233;
		}
	}
	{
		DepthSensorBase_tB644BCAB82289DCDB9290A9B3A6972F0F13B0774* L_81 = __this->___sensorInt_23;
		SensorData_t889044994784020C5FA25311175FB3F8B715DD27* L_82 = __this->___sensorData_22;
		NullCheck(L_81);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_83;
		L_83 = VirtualFuncInvoker1< Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*, SensorData_t889044994784020C5FA25311175FB3F8B715DD27* >::Invoke(111 /* UnityEngine.Vector3[] com.rfilkov.kinect.DepthSensorBase::GetColorCameraSpaceTable(com.rfilkov.kinect.KinectInterop/SensorData) */, L_81, L_82);
		G_B29_0 = L_83;
		G_B29_1 = G_B27_0;
		goto IL_0244;
	}

IL_0233:
	{
		DepthSensorBase_tB644BCAB82289DCDB9290A9B3A6972F0F13B0774* L_84 = __this->___sensorInt_23;
		SensorData_t889044994784020C5FA25311175FB3F8B715DD27* L_85 = __this->___sensorData_22;
		NullCheck(L_84);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_86;
		L_86 = VirtualFuncInvoker1< Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*, SensorData_t889044994784020C5FA25311175FB3F8B715DD27* >::Invoke(110 /* UnityEngine.Vector3[] com.rfilkov.kinect.DepthSensorBase::GetDepthCameraSpaceTable(com.rfilkov.kinect.KinectInterop/SensorData) */, L_84, L_85);
		G_B29_0 = L_86;
		G_B29_1 = G_B28_0;
	}

IL_0244:
	{
		NullCheck(G_B29_1);
		G_B29_1->___spaceTable_25 = G_B29_0;
		Il2CppCodeGenWriteBarrier((void**)(&G_B29_1->___spaceTable_25), (void*)G_B29_0);
		// int spaceBufferLength = imageRes.x * imageRes.y * 3;
		int32_t L_87;
		L_87 = Vector2Int_get_x_mA2CACB1B6E6B5AD0CCC32B2CD2EDCE3ECEB50576_inline((&V_0), NULL);
		int32_t L_88;
		L_88 = Vector2Int_get_y_m48454163ECF0B463FB5A16A0C4FC4B14DB0768B3_inline((&V_0), NULL);
		V_3 = ((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_multiply(L_87, L_88)), 3));
		// spaceTableBuffer = KinectInterop.CreateComputeBuffer(spaceTableBuffer, spaceBufferLength, sizeof(float));
		ComputeBuffer_t51EADA9015EBCC1B982C5584E9AB2734415A8233* L_89 = __this->___spaceTableBuffer_26;
		int32_t L_90 = V_3;
		il2cpp_codegen_runtime_class_init_inline(KinectInterop_t8231C68411373688AA650B978611F932EE5860F9_il2cpp_TypeInfo_var);
		ComputeBuffer_t51EADA9015EBCC1B982C5584E9AB2734415A8233* L_91;
		L_91 = KinectInterop_CreateComputeBuffer_m56CEE7B21E1D61C4AE5E14E710017C1BA61E9475(L_89, L_90, 4, NULL);
		__this->___spaceTableBuffer_26 = L_91;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___spaceTableBuffer_26), (void*)L_91);
		// spaceTableBuffer.SetData(spaceTable);
		ComputeBuffer_t51EADA9015EBCC1B982C5584E9AB2734415A8233* L_92 = __this->___spaceTableBuffer_26;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_93 = __this->___spaceTable_25;
		NullCheck(L_92);
		ComputeBuffer_SetData_m9F845E6B347CE028FA9A987D740FC642D828013A(L_92, (RuntimeArray*)L_93, NULL);
		// spaceTable = null;
		__this->___spaceTable_25 = (Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___spaceTable_25), (void*)(Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*)NULL);
	}

IL_0286:
	{
		// if (imageWidth != imageRes.x || imageHeight != imageRes.y)
		int32_t L_94 = __this->___imageWidth_36;
		int32_t L_95;
		L_95 = Vector2Int_get_x_mA2CACB1B6E6B5AD0CCC32B2CD2EDCE3ECEB50576_inline((&V_0), NULL);
		if ((!(((uint32_t)L_94) == ((uint32_t)L_95))))
		{
			goto IL_02a4;
		}
	}
	{
		int32_t L_96 = __this->___imageHeight_37;
		int32_t L_97;
		L_97 = Vector2Int_get_y_m48454163ECF0B463FB5A16A0C4FC4B14DB0768B3_inline((&V_0), NULL);
		if ((((int32_t)L_96) == ((int32_t)L_97)))
		{
			goto IL_02b8;
		}
	}

IL_02a4:
	{
		// CreateMeshVertInd(imageRes.x, imageRes.y);
		int32_t L_98;
		L_98 = Vector2Int_get_x_mA2CACB1B6E6B5AD0CCC32B2CD2EDCE3ECEB50576_inline((&V_0), NULL);
		int32_t L_99;
		L_99 = Vector2Int_get_y_m48454163ECF0B463FB5A16A0C4FC4B14DB0768B3_inline((&V_0), NULL);
		SceneMeshRendererGpu_CreateMeshVertInd_m2C6FB83734BFB68959BD65A367748573C485276C(__this, L_98, L_99, NULL);
	}

IL_02b8:
	{
		// imageWidth = imageRes.x;
		int32_t L_100;
		L_100 = Vector2Int_get_x_mA2CACB1B6E6B5AD0CCC32B2CD2EDCE3ECEB50576_inline((&V_0), NULL);
		__this->___imageWidth_36 = L_100;
		// imageHeight = imageRes.y;
		int32_t L_101;
		L_101 = Vector2Int_get_y_m48454163ECF0B463FB5A16A0C4FC4B14DB0768B3_inline((&V_0), NULL);
		__this->___imageHeight_37 = L_101;
		// }
		return;
	}
}
// System.Void com.rfilkov.components.SceneMeshRendererGpu::CreateMeshVertInd(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneMeshRendererGpu_CreateMeshVertInd_m2C6FB83734BFB68959BD65A367748573C485276C (SceneMeshRendererGpu_t5E08B994ADA093F4C771151BE372410DAA8D238D* __this, int32_t ___imageWidth0, int32_t ___imageHeight1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* V_3 = NULL;
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* V_4 = NULL;
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* V_5 = NULL;
	float V_6 = 0.0f;
	float V_7 = 0.0f;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	int32_t V_10 = 0;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_11 = NULL;
	int32_t V_12 = 0;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_13 = NULL;
	int32_t V_14 = 0;
	int32_t V_15 = 0;
	int32_t V_16 = 0;
	int32_t G_B20_0 = 0;
	SceneMeshRendererGpu_t5E08B994ADA093F4C771151BE372410DAA8D238D* G_B20_1 = NULL;
	int32_t G_B19_0 = 0;
	SceneMeshRendererGpu_t5E08B994ADA093F4C771151BE372410DAA8D238D* G_B19_1 = NULL;
	int32_t G_B21_0 = 0;
	int32_t G_B21_1 = 0;
	SceneMeshRendererGpu_t5E08B994ADA093F4C771151BE372410DAA8D238D* G_B21_2 = NULL;
	{
		// int xVerts = (imageWidth / coarseFactor); // + 1;
		int32_t L_0 = ___imageWidth0;
		int32_t L_1 = __this->___coarseFactor_7;
		V_0 = ((int32_t)(L_0/L_1));
		// int yVerts = (imageHeight / coarseFactor); // + 1;
		int32_t L_2 = ___imageHeight1;
		int32_t L_3 = __this->___coarseFactor_7;
		V_1 = ((int32_t)(L_2/L_3));
		// int vCount = xVerts * yVerts;
		int32_t L_4 = V_0;
		int32_t L_5 = V_1;
		V_2 = ((int32_t)il2cpp_codegen_multiply(L_4, L_5));
		// mesh.Clear();
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_6 = __this->___mesh_19;
		NullCheck(L_6);
		Mesh_Clear_m0F95397EA143D31AD0B4D332E8C6FA25A7957BC0(L_6, NULL);
		// mesh.indexFormat = UnityEngine.Rendering.IndexFormat.UInt32;
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_7 = __this->___mesh_19;
		NullCheck(L_7);
		Mesh_set_indexFormat_mCCC7837A0916FA7A272159DA6AF984B0022488F4(L_7, 1, NULL);
		// Vector3[] meshVertices = new Vector3[vCount];
		int32_t L_8 = V_2;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_9 = (Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*)(Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*)SZArrayNew(Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C_il2cpp_TypeInfo_var, (uint32_t)L_8);
		V_3 = L_9;
		// Vector3[] meshNormals = new Vector3[vCount];
		int32_t L_10 = V_2;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_11 = (Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*)(Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*)SZArrayNew(Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C_il2cpp_TypeInfo_var, (uint32_t)L_10);
		V_4 = L_11;
		// Vector2[] meshUv = new Vector2[vCount];
		int32_t L_12 = V_2;
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_13 = (Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA*)(Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA*)SZArrayNew(Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA_il2cpp_TypeInfo_var, (uint32_t)L_12);
		V_5 = L_13;
		// float vsx = (float)coarseFactor / (float)imageWidth;
		int32_t L_14 = __this->___coarseFactor_7;
		int32_t L_15 = ___imageWidth0;
		V_6 = ((float)(((float)L_14)/((float)L_15)));
		// float vsy = (float)coarseFactor / (float)imageHeight;
		int32_t L_16 = __this->___coarseFactor_7;
		int32_t L_17 = ___imageHeight1;
		V_7 = ((float)(((float)L_16)/((float)L_17)));
		// for (int y = 0, vi = 0; y < yVerts; y++)
		V_8 = 0;
		// for (int y = 0, vi = 0; y < yVerts; y++)
		V_9 = 0;
		goto IL_00d5;
	}

IL_0064:
	{
		// for (int x = 0; x < xVerts; x++, vi++)
		V_10 = 0;
		goto IL_00ca;
	}

IL_0069:
	{
		// meshVertices[vi] = new Vector3(x * vsx, y * vsy, 0f);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_18 = V_3;
		int32_t L_19 = V_9;
		int32_t L_20 = V_10;
		float L_21 = V_6;
		int32_t L_22 = V_8;
		float L_23 = V_7;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24;
		memset((&L_24), 0, sizeof(L_24));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_24), ((float)il2cpp_codegen_multiply(((float)L_20), L_21)), ((float)il2cpp_codegen_multiply(((float)L_22), L_23)), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_18);
		(L_18)->SetAt(static_cast<il2cpp_array_size_t>(L_19), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_24);
		// meshNormals[vi] = new Vector3(0f, 1f, 0f);  // 0f, 0f, -1f
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_25 = V_4;
		int32_t L_26 = V_9;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_27;
		memset((&L_27), 0, sizeof(L_27));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_27), (0.0f), (1.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_25);
		(L_25)->SetAt(static_cast<il2cpp_array_size_t>(L_26), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_27);
		// meshUv[vi] = new Vector2(x * vsx, y * vsy);
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_28 = V_5;
		int32_t L_29 = V_9;
		int32_t L_30 = V_10;
		float L_31 = V_6;
		int32_t L_32 = V_8;
		float L_33 = V_7;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_34;
		memset((&L_34), 0, sizeof(L_34));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_34), ((float)il2cpp_codegen_multiply(((float)L_30), L_31)), ((float)il2cpp_codegen_multiply(((float)L_32), L_33)), /*hidden argument*/NULL);
		NullCheck(L_28);
		(L_28)->SetAt(static_cast<il2cpp_array_size_t>(L_29), (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7)L_34);
		// for (int x = 0; x < xVerts; x++, vi++)
		int32_t L_35 = V_10;
		V_10 = ((int32_t)il2cpp_codegen_add(L_35, 1));
		// for (int x = 0; x < xVerts; x++, vi++)
		int32_t L_36 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_add(L_36, 1));
	}

IL_00ca:
	{
		// for (int x = 0; x < xVerts; x++, vi++)
		int32_t L_37 = V_10;
		int32_t L_38 = V_0;
		if ((((int32_t)L_37) < ((int32_t)L_38)))
		{
			goto IL_0069;
		}
	}
	{
		// for (int y = 0, vi = 0; y < yVerts; y++)
		int32_t L_39 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add(L_39, 1));
	}

IL_00d5:
	{
		// for (int y = 0, vi = 0; y < yVerts; y++)
		int32_t L_40 = V_8;
		int32_t L_41 = V_1;
		if ((((int32_t)L_40) < ((int32_t)L_41)))
		{
			goto IL_0064;
		}
	}
	{
		// mesh.vertices = meshVertices;
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_42 = __this->___mesh_19;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_43 = V_3;
		NullCheck(L_42);
		Mesh_set_vertices_m5BB814D89E9ACA00DBF19F7D8E22CB73AC73FE5C(L_42, L_43, NULL);
		// mesh.normals = meshNormals;
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_44 = __this->___mesh_19;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_45 = V_4;
		NullCheck(L_44);
		Mesh_set_normals_m85D73193C49211BE9FA135FF72D5749B16A4760B(L_44, L_45, NULL);
		// mesh.uv = meshUv;
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_46 = __this->___mesh_19;
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_47 = V_5;
		NullCheck(L_46);
		Mesh_set_uv_m6ED9C50E0DA8166DD48AC40FD6C828B9AD2E9617(L_46, L_47, NULL);
		// if (showAsPointCloud)
		bool L_48 = __this->___showAsPointCloud_6;
		if (!L_48)
		{
			goto IL_013b;
		}
	}
	{
		// int[] meshIndices = new int[vCount];
		int32_t L_49 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_50 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_49);
		V_11 = L_50;
		// for (int i = 0; i < vCount; i++)
		V_12 = 0;
		goto IL_0122;
	}

IL_0115:
	{
		// meshIndices[i] = i;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_51 = V_11;
		int32_t L_52 = V_12;
		int32_t L_53 = V_12;
		NullCheck(L_51);
		(L_51)->SetAt(static_cast<il2cpp_array_size_t>(L_52), (int32_t)L_53);
		// for (int i = 0; i < vCount; i++)
		int32_t L_54 = V_12;
		V_12 = ((int32_t)il2cpp_codegen_add(L_54, 1));
	}

IL_0122:
	{
		// for (int i = 0; i < vCount; i++)
		int32_t L_55 = V_12;
		int32_t L_56 = V_2;
		if ((((int32_t)L_55) < ((int32_t)L_56)))
		{
			goto IL_0115;
		}
	}
	{
		// mesh.SetIndices(meshIndices, MeshTopology.Points, 0);
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_57 = __this->___mesh_19;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_58 = V_11;
		NullCheck(L_57);
		Mesh_SetIndices_m2AE7ED76A6C77D218C37C011DDB948589FD45B97(L_57, L_58, 5, 0, NULL);
		goto IL_01f9;
	}

IL_013b:
	{
		// int[] meshIndices = new int[(xVerts - 1) * (yVerts - 1) * 6];
		int32_t L_59 = V_0;
		int32_t L_60 = V_1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_61 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_subtract(L_59, 1)), ((int32_t)il2cpp_codegen_subtract(L_60, 1)))), 6)));
		V_13 = L_61;
		// for (int y = 0, ii = 0; y < (yVerts - 1); y++)
		V_14 = 0;
		// for (int y = 0, ii = 0; y < (yVerts - 1); y++)
		V_15 = 0;
		goto IL_01e0;
	}

IL_0156:
	{
		// for (int x = 0; x < (xVerts - 1); x++)
		V_16 = 0;
		goto IL_01d3;
	}

IL_015b:
	{
		// meshIndices[ii++] = (y + 1) * xVerts + x;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_62 = V_13;
		int32_t L_63 = V_15;
		int32_t L_64 = L_63;
		V_15 = ((int32_t)il2cpp_codegen_add(L_64, 1));
		int32_t L_65 = V_14;
		int32_t L_66 = V_0;
		int32_t L_67 = V_16;
		NullCheck(L_62);
		(L_62)->SetAt(static_cast<il2cpp_array_size_t>(L_64), (int32_t)((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_add(L_65, 1)), L_66)), L_67)));
		// meshIndices[ii++] = y * xVerts + x + 1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_68 = V_13;
		int32_t L_69 = V_15;
		int32_t L_70 = L_69;
		V_15 = ((int32_t)il2cpp_codegen_add(L_70, 1));
		int32_t L_71 = V_14;
		int32_t L_72 = V_0;
		int32_t L_73 = V_16;
		NullCheck(L_68);
		(L_68)->SetAt(static_cast<il2cpp_array_size_t>(L_70), (int32_t)((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_71, L_72)), L_73)), 1)));
		// meshIndices[ii++] = y * xVerts + x;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_74 = V_13;
		int32_t L_75 = V_15;
		int32_t L_76 = L_75;
		V_15 = ((int32_t)il2cpp_codegen_add(L_76, 1));
		int32_t L_77 = V_14;
		int32_t L_78 = V_0;
		int32_t L_79 = V_16;
		NullCheck(L_74);
		(L_74)->SetAt(static_cast<il2cpp_array_size_t>(L_76), (int32_t)((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_77, L_78)), L_79)));
		// meshIndices[ii++] = (y + 1) * xVerts + x + 1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_80 = V_13;
		int32_t L_81 = V_15;
		int32_t L_82 = L_81;
		V_15 = ((int32_t)il2cpp_codegen_add(L_82, 1));
		int32_t L_83 = V_14;
		int32_t L_84 = V_0;
		int32_t L_85 = V_16;
		NullCheck(L_80);
		(L_80)->SetAt(static_cast<il2cpp_array_size_t>(L_82), (int32_t)((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_add(L_83, 1)), L_84)), L_85)), 1)));
		// meshIndices[ii++] = y * xVerts + x + 1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_86 = V_13;
		int32_t L_87 = V_15;
		int32_t L_88 = L_87;
		V_15 = ((int32_t)il2cpp_codegen_add(L_88, 1));
		int32_t L_89 = V_14;
		int32_t L_90 = V_0;
		int32_t L_91 = V_16;
		NullCheck(L_86);
		(L_86)->SetAt(static_cast<il2cpp_array_size_t>(L_88), (int32_t)((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_89, L_90)), L_91)), 1)));
		// meshIndices[ii++] = (y + 1) * xVerts + x;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_92 = V_13;
		int32_t L_93 = V_15;
		int32_t L_94 = L_93;
		V_15 = ((int32_t)il2cpp_codegen_add(L_94, 1));
		int32_t L_95 = V_14;
		int32_t L_96 = V_0;
		int32_t L_97 = V_16;
		NullCheck(L_92);
		(L_92)->SetAt(static_cast<il2cpp_array_size_t>(L_94), (int32_t)((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_add(L_95, 1)), L_96)), L_97)));
		// for (int x = 0; x < (xVerts - 1); x++)
		int32_t L_98 = V_16;
		V_16 = ((int32_t)il2cpp_codegen_add(L_98, 1));
	}

IL_01d3:
	{
		// for (int x = 0; x < (xVerts - 1); x++)
		int32_t L_99 = V_16;
		int32_t L_100 = V_0;
		if ((((int32_t)L_99) < ((int32_t)((int32_t)il2cpp_codegen_subtract(L_100, 1)))))
		{
			goto IL_015b;
		}
	}
	{
		// for (int y = 0, ii = 0; y < (yVerts - 1); y++)
		int32_t L_101 = V_14;
		V_14 = ((int32_t)il2cpp_codegen_add(L_101, 1));
	}

IL_01e0:
	{
		// for (int y = 0, ii = 0; y < (yVerts - 1); y++)
		int32_t L_102 = V_14;
		int32_t L_103 = V_1;
		if ((((int32_t)L_102) < ((int32_t)((int32_t)il2cpp_codegen_subtract(L_103, 1)))))
		{
			goto IL_0156;
		}
	}
	{
		// mesh.SetIndices(meshIndices, MeshTopology.Triangles, 0);
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_104 = __this->___mesh_19;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_105 = V_13;
		NullCheck(L_104);
		Mesh_SetIndices_m2AE7ED76A6C77D218C37C011DDB948589FD45B97(L_104, L_105, 0, 0, NULL);
	}

IL_01f9:
	{
		// meshParamsCache = coarseFactor + (showAsPointCloud ? 10 : 0);
		int32_t L_106 = __this->___coarseFactor_7;
		bool L_107 = __this->___showAsPointCloud_6;
		G_B19_0 = L_106;
		G_B19_1 = __this;
		if (L_107)
		{
			G_B20_0 = L_106;
			G_B20_1 = __this;
			goto IL_020b;
		}
	}
	{
		G_B21_0 = 0;
		G_B21_1 = G_B19_0;
		G_B21_2 = G_B19_1;
		goto IL_020d;
	}

IL_020b:
	{
		G_B21_0 = ((int32_t)10);
		G_B21_1 = G_B20_0;
		G_B21_2 = G_B20_1;
	}

IL_020d:
	{
		NullCheck(G_B21_2);
		G_B21_2->___meshParamsCache_39 = ((int32_t)il2cpp_codegen_add(G_B21_1, G_B21_0));
		// }
		return;
	}
}
// System.Void com.rfilkov.components.SceneMeshRendererGpu::FinishMesh()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneMeshRendererGpu_FinishMesh_m3E1553DA0A008A5C1FE6014CB5B062FBB570D848 (SceneMeshRendererGpu_t5E08B994ADA093F4C771151BE372410DAA8D238D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (sensorInt)
		DepthSensorBase_tB644BCAB82289DCDB9290A9B3A6972F0F13B0774* L_0 = __this->___sensorInt_23;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_0, NULL);
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		// sensorInt.pointCloudColorTexture = null;
		DepthSensorBase_tB644BCAB82289DCDB9290A9B3A6972F0F13B0774* L_2 = __this->___sensorInt_23;
		NullCheck(L_2);
		L_2->___pointCloudColorTexture_13 = (RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&L_2->___pointCloudColorTexture_13), (void*)(RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27*)NULL);
	}

IL_0019:
	{
		// if(depthImageBuffer != null /**&& depthBufferCreated*/)
		ComputeBuffer_t51EADA9015EBCC1B982C5584E9AB2734415A8233* L_3 = __this->___depthImageBuffer_29;
		if (!L_3)
		{
			goto IL_0045;
		}
	}
	{
		// depthImageCopy = null;
		__this->___depthImageCopy_28 = (UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___depthImageCopy_28), (void*)(UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83*)NULL);
		// depthImageBuffer.Release();
		ComputeBuffer_t51EADA9015EBCC1B982C5584E9AB2734415A8233* L_4 = __this->___depthImageBuffer_29;
		NullCheck(L_4);
		ComputeBuffer_Release_mF1F157C929A0A5B2FDCD703A286EE09723450B72(L_4, NULL);
		// depthImageBuffer.Dispose();
		ComputeBuffer_t51EADA9015EBCC1B982C5584E9AB2734415A8233* L_5 = __this->___depthImageBuffer_29;
		NullCheck(L_5);
		ComputeBuffer_Dispose_mBCA0F8A5BE75A41C77E1FCFBCB4EAE84A45D6BF2(L_5, NULL);
		// depthImageBuffer = null;
		__this->___depthImageBuffer_29 = (ComputeBuffer_t51EADA9015EBCC1B982C5584E9AB2734415A8233*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___depthImageBuffer_29), (void*)(ComputeBuffer_t51EADA9015EBCC1B982C5584E9AB2734415A8233*)NULL);
	}

IL_0045:
	{
		// if (sensorData.colorDepthBuffer != null /**&& depthBufferCreated*/)
		SensorData_t889044994784020C5FA25311175FB3F8B715DD27* L_6 = __this->___sensorData_22;
		NullCheck(L_6);
		ComputeBuffer_t51EADA9015EBCC1B982C5584E9AB2734415A8233* L_7 = L_6->___colorDepthBuffer_64;
		if (!L_7)
		{
			goto IL_007e;
		}
	}
	{
		// sensorData.colorDepthBuffer.Release();
		SensorData_t889044994784020C5FA25311175FB3F8B715DD27* L_8 = __this->___sensorData_22;
		NullCheck(L_8);
		ComputeBuffer_t51EADA9015EBCC1B982C5584E9AB2734415A8233* L_9 = L_8->___colorDepthBuffer_64;
		NullCheck(L_9);
		ComputeBuffer_Release_mF1F157C929A0A5B2FDCD703A286EE09723450B72(L_9, NULL);
		// sensorData.colorDepthBuffer.Dispose();
		SensorData_t889044994784020C5FA25311175FB3F8B715DD27* L_10 = __this->___sensorData_22;
		NullCheck(L_10);
		ComputeBuffer_t51EADA9015EBCC1B982C5584E9AB2734415A8233* L_11 = L_10->___colorDepthBuffer_64;
		NullCheck(L_11);
		ComputeBuffer_Dispose_mBCA0F8A5BE75A41C77E1FCFBCB4EAE84A45D6BF2(L_11, NULL);
		// sensorData.colorDepthBuffer = null;
		SensorData_t889044994784020C5FA25311175FB3F8B715DD27* L_12 = __this->___sensorData_22;
		NullCheck(L_12);
		L_12->___colorDepthBuffer_64 = (ComputeBuffer_t51EADA9015EBCC1B982C5584E9AB2734415A8233*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&L_12->___colorDepthBuffer_64), (void*)(ComputeBuffer_t51EADA9015EBCC1B982C5584E9AB2734415A8233*)NULL);
	}

IL_007e:
	{
		// if(sensorData.colorInfraredBuffer != null)
		SensorData_t889044994784020C5FA25311175FB3F8B715DD27* L_13 = __this->___sensorData_22;
		NullCheck(L_13);
		ComputeBuffer_t51EADA9015EBCC1B982C5584E9AB2734415A8233* L_14 = L_13->___colorInfraredBuffer_67;
		if (!L_14)
		{
			goto IL_00b7;
		}
	}
	{
		// sensorData.colorInfraredBuffer.Release();
		SensorData_t889044994784020C5FA25311175FB3F8B715DD27* L_15 = __this->___sensorData_22;
		NullCheck(L_15);
		ComputeBuffer_t51EADA9015EBCC1B982C5584E9AB2734415A8233* L_16 = L_15->___colorInfraredBuffer_67;
		NullCheck(L_16);
		ComputeBuffer_Release_mF1F157C929A0A5B2FDCD703A286EE09723450B72(L_16, NULL);
		// sensorData.colorInfraredBuffer.Dispose();
		SensorData_t889044994784020C5FA25311175FB3F8B715DD27* L_17 = __this->___sensorData_22;
		NullCheck(L_17);
		ComputeBuffer_t51EADA9015EBCC1B982C5584E9AB2734415A8233* L_18 = L_17->___colorInfraredBuffer_67;
		NullCheck(L_18);
		ComputeBuffer_Dispose_mBCA0F8A5BE75A41C77E1FCFBCB4EAE84A45D6BF2(L_18, NULL);
		// sensorData.colorInfraredBuffer = null;
		SensorData_t889044994784020C5FA25311175FB3F8B715DD27* L_19 = __this->___sensorData_22;
		NullCheck(L_19);
		L_19->___colorInfraredBuffer_67 = (ComputeBuffer_t51EADA9015EBCC1B982C5584E9AB2734415A8233*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&L_19->___colorInfraredBuffer_67), (void*)(ComputeBuffer_t51EADA9015EBCC1B982C5584E9AB2734415A8233*)NULL);
	}

IL_00b7:
	{
		// if (colorTexture && colorTextureCreated)
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_20 = __this->___colorTexture_30;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_21;
		L_21 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_20, NULL);
		if (!L_21)
		{
			goto IL_00de;
		}
	}
	{
		bool L_22 = __this->___colorTextureCreated_32;
		if (!L_22)
		{
			goto IL_00de;
		}
	}
	{
		// colorTexture.Release();
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_23 = __this->___colorTexture_30;
		NullCheck(L_23);
		RenderTexture_Release_mE7399D6187A0E38945D2913D0FFB41247143AB1E(L_23, NULL);
		// colorTexture = null;
		__this->___colorTexture_30 = (RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___colorTexture_30), (void*)(RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27*)NULL);
	}

IL_00de:
	{
		// if (colorTextureCopy)
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_24 = __this->___colorTextureCopy_31;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_25;
		L_25 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_24, NULL);
		if (!L_25)
		{
			goto IL_00fd;
		}
	}
	{
		// colorTextureCopy.Release();
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_26 = __this->___colorTextureCopy_31;
		NullCheck(L_26);
		RenderTexture_Release_mE7399D6187A0E38945D2913D0FFB41247143AB1E(L_26, NULL);
		// colorTextureCopy = null;
		__this->___colorTextureCopy_31 = (RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___colorTextureCopy_31), (void*)(RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27*)NULL);
	}

IL_00fd:
	{
		// if (spaceTableBuffer != null)
		ComputeBuffer_t51EADA9015EBCC1B982C5584E9AB2734415A8233* L_27 = __this->___spaceTableBuffer_26;
		if (!L_27)
		{
			goto IL_0117;
		}
	}
	{
		// spaceTableBuffer.Dispose();
		ComputeBuffer_t51EADA9015EBCC1B982C5584E9AB2734415A8233* L_28 = __this->___spaceTableBuffer_26;
		NullCheck(L_28);
		ComputeBuffer_Dispose_mBCA0F8A5BE75A41C77E1FCFBCB4EAE84A45D6BF2(L_28, NULL);
		// spaceTableBuffer = null;
		__this->___spaceTableBuffer_26 = (ComputeBuffer_t51EADA9015EBCC1B982C5584E9AB2734415A8233*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___spaceTableBuffer_26), (void*)(ComputeBuffer_t51EADA9015EBCC1B982C5584E9AB2734415A8233*)NULL);
	}

IL_0117:
	{
		// bMeshInited = false;
		__this->___bMeshInited_38 = (bool)0;
		// }
		return;
	}
}
// System.Void com.rfilkov.components.SceneMeshRendererGpu::UpdateMesh()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneMeshRendererGpu_UpdateMesh_mB7C74ACFF4938EF0CEA860CADC9B44E42CB19CEA (SceneMeshRendererGpu_t5E08B994ADA093F4C771151BE372410DAA8D238D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisMeshCollider_tB525E4DDE383252364ED0BDD32CF2B53914EE455_mFC0F02CCD26A6A186031CF43E92D7B60EA1CC370_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KinectInterop_t8231C68411373688AA650B978611F932EE5860F9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2882AFDC9AFF078CA36446363C6C3AEB1FE725BA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral28BBC4BDE4FD330B45DC7DD7CC37F01B777452E1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral37A8260E2CB0CCF955B515F359CCD60D4008D7A0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral430CE0466EFCD60F4DF5494346A24D04BF1432FB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7A07A35A5AC61F7A6B0C09B942BEF52A9476A989);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7A654FF8208F7E303716EF5E5E785A7B0C3683EB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB305AB6ADB86227B3BC29383DF835E1D5F42CDFD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC821BB1D926D8A2077EC957529D986291F9D7A70);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD8DA0A28C68461D5CAFDC3A6642F11CC60058662);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA29D557A88BE41D27E66EC259BAED325FF1177D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE694C9DFFF0C9DFC9399008A71BCF78B1CFDF4E4);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* V_4 = NULL;
	int32_t V_5 = 0;
	MeshCollider_tB525E4DDE383252364ED0BDD32CF2B53914EE455* V_6 = NULL;
	int32_t G_B8_0 = 0;
	int32_t G_B7_0 = 0;
	int32_t G_B9_0 = 0;
	int32_t G_B9_1 = 0;
	RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* G_B22_0 = NULL;
	String_t* G_B29_0 = NULL;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* G_B29_1 = NULL;
	String_t* G_B28_0 = NULL;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* G_B28_1 = NULL;
	int32_t G_B30_0 = 0;
	String_t* G_B30_1 = NULL;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* G_B30_2 = NULL;
	{
		// if (bMeshInited && sensorData.depthImage != null && sensorData.depthCamIntr != null && meshShaderMat != null &&
		//     lastDepthFrameTime != sensorData.lastDepthFrameTime && (Time.time - lastMeshUpdateTime) >= updateMeshInterval)
		bool L_0 = __this->___bMeshInited_38;
		if (!L_0)
		{
			goto IL_03e6;
		}
	}
	{
		SensorData_t889044994784020C5FA25311175FB3F8B715DD27* L_1 = __this->___sensorData_22;
		NullCheck(L_1);
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_2 = L_1->___depthImage_27;
		if (!L_2)
		{
			goto IL_03e6;
		}
	}
	{
		SensorData_t889044994784020C5FA25311175FB3F8B715DD27* L_3 = __this->___sensorData_22;
		NullCheck(L_3);
		CameraIntrinsics_t272DC8A0981DE0A132DFC4E7B48C942191D56EFF* L_4 = L_3->___depthCamIntr_9;
		if (!L_4)
		{
			goto IL_03e6;
		}
	}
	{
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_5 = __this->___meshShaderMat_24;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_6;
		L_6 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_5, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_6)
		{
			goto IL_03e6;
		}
	}
	{
		uint64_t L_7 = __this->___lastDepthFrameTime_33;
		SensorData_t889044994784020C5FA25311175FB3F8B715DD27* L_8 = __this->___sensorData_22;
		NullCheck(L_8);
		uint64_t L_9 = L_8->___lastDepthFrameTime_28;
		if ((((int64_t)L_7) == ((int64_t)L_9)))
		{
			goto IL_03e6;
		}
	}
	{
		float L_10;
		L_10 = Time_get_time_m0BEE9AACD0723FE414465B77C9C64D12263675F3(NULL);
		float L_11 = __this->___lastMeshUpdateTime_34;
		float L_12 = __this->___updateMeshInterval_16;
		if ((!(((float)((float)il2cpp_codegen_subtract(L_10, L_11))) >= ((float)L_12))))
		{
			goto IL_03e6;
		}
	}
	{
		// lastDepthFrameTime = sensorData.lastDepthFrameTime;
		SensorData_t889044994784020C5FA25311175FB3F8B715DD27* L_13 = __this->___sensorData_22;
		NullCheck(L_13);
		uint64_t L_14 = L_13->___lastDepthFrameTime_28;
		__this->___lastDepthFrameTime_33 = L_14;
		// lastMeshUpdateTime = Time.time;
		float L_15;
		L_15 = Time_get_time_m0BEE9AACD0723FE414465B77C9C64D12263675F3(NULL);
		__this->___lastMeshUpdateTime_34 = L_15;
		// UpdateTexturesAndBuffers();
		SceneMeshRendererGpu_UpdateTexturesAndBuffers_mF85062722A3E7748B45F50F422525124B8A70631(__this, NULL);
		// int paramsCache = coarseFactor + (showAsPointCloud ? 10 : 0);
		int32_t L_16 = __this->___coarseFactor_7;
		bool L_17 = __this->___showAsPointCloud_6;
		G_B7_0 = L_16;
		if (L_17)
		{
			G_B8_0 = L_16;
			goto IL_009c;
		}
	}
	{
		G_B9_0 = 0;
		G_B9_1 = G_B7_0;
		goto IL_009e;
	}

IL_009c:
	{
		G_B9_0 = ((int32_t)10);
		G_B9_1 = G_B8_0;
	}

IL_009e:
	{
		V_0 = ((int32_t)il2cpp_codegen_add(G_B9_1, G_B9_0));
		// if(meshParamsCache != paramsCache)
		int32_t L_18 = __this->___meshParamsCache_39;
		int32_t L_19 = V_0;
		if ((((int32_t)L_18) == ((int32_t)L_19)))
		{
			goto IL_00bb;
		}
	}
	{
		// CreateMeshVertInd(imageWidth, imageHeight);
		int32_t L_20 = __this->___imageWidth_36;
		int32_t L_21 = __this->___imageHeight_37;
		SceneMeshRendererGpu_CreateMeshVertInd_m2C6FB83734BFB68959BD65A367748573C485276C(__this, L_20, L_21, NULL);
	}

IL_00bb:
	{
		// if (depthImageBuffer != null && sensorData.depthImage != null /**&& depthBufferCreated*/)
		ComputeBuffer_t51EADA9015EBCC1B982C5584E9AB2734415A8233* L_22 = __this->___depthImageBuffer_29;
		if (!L_22)
		{
			goto IL_0115;
		}
	}
	{
		SensorData_t889044994784020C5FA25311175FB3F8B715DD27* L_23 = __this->___sensorData_22;
		NullCheck(L_23);
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_24 = L_23->___depthImage_27;
		if (!L_24)
		{
			goto IL_0115;
		}
	}
	{
		// KinectInterop.CopyBytes(sensorData.depthImage, sizeof(ushort), depthImageCopy, sizeof(ushort));
		SensorData_t889044994784020C5FA25311175FB3F8B715DD27* L_25 = __this->___sensorData_22;
		NullCheck(L_25);
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_26 = L_25->___depthImage_27;
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_27 = __this->___depthImageCopy_28;
		il2cpp_codegen_runtime_class_init_inline(KinectInterop_t8231C68411373688AA650B978611F932EE5860F9_il2cpp_TypeInfo_var);
		KinectInterop_CopyBytes_m393995130F2D35AAAD0AA07536EA2E9848D61D9F((RuntimeArray*)L_26, 2, (RuntimeArray*)L_27, 2, NULL);
		// int depthBufferLength = sensorData.depthImageWidth * sensorData.depthImageHeight / 2;
		SensorData_t889044994784020C5FA25311175FB3F8B715DD27* L_28 = __this->___sensorData_22;
		NullCheck(L_28);
		int32_t L_29 = L_28->___depthImageWidth_25;
		SensorData_t889044994784020C5FA25311175FB3F8B715DD27* L_30 = __this->___sensorData_22;
		NullCheck(L_30);
		int32_t L_31 = L_30->___depthImageHeight_26;
		V_3 = ((int32_t)(((int32_t)il2cpp_codegen_multiply(L_29, L_31))/2));
		// KinectInterop.SetComputeBufferData(depthImageBuffer, depthImageCopy, depthBufferLength, sizeof(uint));
		ComputeBuffer_t51EADA9015EBCC1B982C5584E9AB2734415A8233* L_32 = __this->___depthImageBuffer_29;
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_33 = __this->___depthImageCopy_28;
		int32_t L_34 = V_3;
		KinectInterop_SetComputeBufferData_m7747C88D8D9C44D03C1B7A485FFE3563F033EF66(L_32, (RuntimeArray*)L_33, L_34, 4, NULL);
	}

IL_0115:
	{
		// switch(meshTexture)
		int32_t L_35 = __this->___meshTexture_9;
		V_5 = L_35;
		int32_t L_36 = V_5;
		if (!L_36)
		{
			goto IL_0128;
		}
	}
	{
		int32_t L_37 = V_5;
		if ((((int32_t)L_37) == ((int32_t)1)))
		{
			goto IL_0149;
		}
	}
	{
		goto IL_0187;
	}

IL_0128:
	{
		// if(colorTexture != null)
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_38 = __this->___colorTexture_30;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_39;
		L_39 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_38, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_39)
		{
			goto IL_0187;
		}
	}
	{
		// Graphics.CopyTexture(colorTexture, colorTextureCopy);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_40 = __this->___colorTexture_30;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_41 = __this->___colorTextureCopy_31;
		il2cpp_codegen_runtime_class_init_inline(Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var);
		Graphics_CopyTexture_m34BA416A531684743117976772DD8B218441DB93(L_40, L_41, NULL);
		// break;
		goto IL_0187;
	}

IL_0149:
	{
		// Texture infraredTexture = sensorInt.pointCloudResolution == DepthSensorBase.PointCloudResolution.DepthCameraResolution ?
		//     sensorData.infraredImageTexture : sensorData.colorInfraredTexture;
		DepthSensorBase_tB644BCAB82289DCDB9290A9B3A6972F0F13B0774* L_42 = __this->___sensorInt_23;
		NullCheck(L_42);
		int32_t L_43 = L_42->___pointCloudResolution_11;
		if (!L_43)
		{
			goto IL_0163;
		}
	}
	{
		SensorData_t889044994784020C5FA25311175FB3F8B715DD27* L_44 = __this->___sensorData_22;
		NullCheck(L_44);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_45 = L_44->___colorInfraredTexture_68;
		G_B22_0 = L_45;
		goto IL_016e;
	}

IL_0163:
	{
		SensorData_t889044994784020C5FA25311175FB3F8B715DD27* L_46 = __this->___sensorData_22;
		NullCheck(L_46);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_47 = L_46->___infraredImageTexture_46;
		G_B22_0 = L_47;
	}

IL_016e:
	{
		V_4 = G_B22_0;
		// if(infraredTexture != null)
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_48 = V_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_49;
		L_49 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_48, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_49)
		{
			goto IL_0187;
		}
	}
	{
		// Graphics.CopyTexture(infraredTexture, colorTextureCopy);
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_50 = V_4;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_51 = __this->___colorTextureCopy_31;
		il2cpp_codegen_runtime_class_init_inline(Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var);
		Graphics_CopyTexture_m34BA416A531684743117976772DD8B218441DB93(L_50, L_51, NULL);
	}

IL_0187:
	{
		// if (sourceImageResolution == DepthSensorBase.PointCloudResolution.DepthCameraResolution)
		int32_t L_52 = __this->___sourceImageResolution_5;
		// if (sourceImageResolution == DepthSensorBase.PointCloudResolution.DepthCameraResolution)
		int32_t L_53 = __this->___sourceImageResolution_5;
		if (L_53)
		{
			goto IL_01ae;
		}
	}
	{
		// meshShaderMat.SetBuffer("_DepthMap", depthImageBuffer);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_54 = __this->___meshShaderMat_24;
		ComputeBuffer_t51EADA9015EBCC1B982C5584E9AB2734415A8233* L_55 = __this->___depthImageBuffer_29;
		NullCheck(L_54);
		Material_SetBuffer_mBE41E02CB7CE8817306B9F292A3EC786E1C84ED5(L_54, _stringLiteral2882AFDC9AFF078CA36446363C6C3AEB1FE725BA, L_55, NULL);
		goto IL_01c9;
	}

IL_01ae:
	{
		// meshShaderMat.SetBuffer("_DepthMap", sensorData.colorDepthBuffer);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_56 = __this->___meshShaderMat_24;
		SensorData_t889044994784020C5FA25311175FB3F8B715DD27* L_57 = __this->___sensorData_22;
		NullCheck(L_57);
		ComputeBuffer_t51EADA9015EBCC1B982C5584E9AB2734415A8233* L_58 = L_57->___colorDepthBuffer_64;
		NullCheck(L_56);
		Material_SetBuffer_mBE41E02CB7CE8817306B9F292A3EC786E1C84ED5(L_56, _stringLiteral2882AFDC9AFF078CA36446363C6C3AEB1FE725BA, L_58, NULL);
	}

IL_01c9:
	{
		// meshShaderMat.SetTexture("_ColorTex", colorTextureCopy);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_59 = __this->___meshShaderMat_24;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_60 = __this->___colorTextureCopy_31;
		NullCheck(L_59);
		Material_SetTexture_m06083C3F52EF02FFB1177901D9907314F280F9A5(L_59, _stringLiteralC821BB1D926D8A2077EC957529D986291F9D7A70, L_60, NULL);
		// meshShaderMat.SetVector("_SpaceScale", sensorSpaceScale);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_61 = __this->___meshShaderMat_24;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_62 = __this->___sensorSpaceScale_27;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_63;
		L_63 = Vector4_op_Implicit_mB05287DC52FC87A756AB80E837E1EC22FEEB3937_inline(L_62, NULL);
		NullCheck(L_61);
		Material_SetVector_m69444B8040D955821F241113446CC8713C9E12D1(L_61, _stringLiteralB305AB6ADB86227B3BC29383DF835E1D5F42CDFD, L_63, NULL);
		// meshShaderMat.SetBuffer("_SpaceTable", spaceTableBuffer);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_64 = __this->___meshShaderMat_24;
		ComputeBuffer_t51EADA9015EBCC1B982C5584E9AB2734415A8233* L_65 = __this->___spaceTableBuffer_26;
		NullCheck(L_64);
		Material_SetBuffer_mBE41E02CB7CE8817306B9F292A3EC786E1C84ED5(L_64, _stringLiteralD8DA0A28C68461D5CAFDC3A6642F11CC60058662, L_65, NULL);
		// meshShaderMat.SetVector("_TexRes", new Vector2(imageWidth, imageHeight));
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_66 = __this->___meshShaderMat_24;
		int32_t L_67 = __this->___imageWidth_36;
		int32_t L_68 = __this->___imageHeight_37;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_69;
		memset((&L_69), 0, sizeof(L_69));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_69), ((float)L_67), ((float)L_68), /*hidden argument*/NULL);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_70;
		L_70 = Vector4_op_Implicit_m6162D8136CFE97A5A8BD3B764F9074DB96AA5CD0_inline(L_69, NULL);
		NullCheck(L_66);
		Material_SetVector_m69444B8040D955821F241113446CC8713C9E12D1(L_66, _stringLiteral430CE0466EFCD60F4DF5494346A24D04BF1432FB, L_70, NULL);
		// meshShaderMat.SetInt("_CoarseFactor", coarseFactor);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_71 = __this->___meshShaderMat_24;
		int32_t L_72 = __this->___coarseFactor_7;
		NullCheck(L_71);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_71, _stringLiteralDA29D557A88BE41D27E66EC259BAED325FF1177D, L_72, NULL);
		// meshShaderMat.SetInt("_IsPointCloud", showAsPointCloud ? 1 : 0);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_73 = __this->___meshShaderMat_24;
		bool L_74 = __this->___showAsPointCloud_6;
		G_B28_0 = _stringLiteral7A654FF8208F7E303716EF5E5E785A7B0C3683EB;
		G_B28_1 = L_73;
		if (L_74)
		{
			G_B29_0 = _stringLiteral7A654FF8208F7E303716EF5E5E785A7B0C3683EB;
			G_B29_1 = L_73;
			goto IL_0264;
		}
	}
	{
		G_B30_0 = 0;
		G_B30_1 = G_B28_0;
		G_B30_2 = G_B28_1;
		goto IL_0265;
	}

IL_0264:
	{
		G_B30_0 = 1;
		G_B30_1 = G_B29_0;
		G_B30_2 = G_B29_1;
	}

IL_0265:
	{
		NullCheck(G_B30_2);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(G_B30_2, G_B30_1, G_B30_0, NULL);
		// meshShaderMat.SetFloat("_CutoffFactor", Mathf.Pow(edgeCutoffFactor, 6));
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_75 = __this->___meshShaderMat_24;
		float L_76 = __this->___edgeCutoffFactor_8;
		float L_77;
		L_77 = powf(L_76, (6.0f));
		NullCheck(L_75);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_75, _stringLiteral37A8260E2CB0CCF955B515F359CCD60D4008D7A0, L_77, NULL);
		// meshShaderMat.SetMatrix("_Transform", sensorInt.GetSensorToWorldMatrix());
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_78 = __this->___meshShaderMat_24;
		DepthSensorBase_tB644BCAB82289DCDB9290A9B3A6972F0F13B0774* L_79 = __this->___sensorInt_23;
		NullCheck(L_79);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_80;
		L_80 = VirtualFuncInvoker0< Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 >::Invoke(103 /* UnityEngine.Matrix4x4 com.rfilkov.kinect.DepthSensorBase::GetSensorToWorldMatrix() */, L_79);
		NullCheck(L_78);
		Material_SetMatrix_m1F4E20583C898A1C1DBA256868E1F98C539F13FB(L_78, _stringLiteral28BBC4BDE4FD330B45DC7DD7CC37F01B777452E1, L_80, NULL);
		// meshShaderMat.SetVector("_PosMin", new Vector3(xMin, yMin, zMin));
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_81 = __this->___meshShaderMat_24;
		float L_82 = __this->___xMin_10;
		float L_83 = __this->___yMin_12;
		float L_84 = __this->___zMin_14;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_85;
		memset((&L_85), 0, sizeof(L_85));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_85), L_82, L_83, L_84, /*hidden argument*/NULL);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_86;
		L_86 = Vector4_op_Implicit_mB05287DC52FC87A756AB80E837E1EC22FEEB3937_inline(L_85, NULL);
		NullCheck(L_81);
		Material_SetVector_m69444B8040D955821F241113446CC8713C9E12D1(L_81, _stringLiteralE694C9DFFF0C9DFC9399008A71BCF78B1CFDF4E4, L_86, NULL);
		// meshShaderMat.SetVector("_PosMax", new Vector3(xMax, yMax, zMax));
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_87 = __this->___meshShaderMat_24;
		float L_88 = __this->___xMax_11;
		float L_89 = __this->___yMax_13;
		float L_90 = __this->___zMax_15;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_91;
		memset((&L_91), 0, sizeof(L_91));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_91), L_88, L_89, L_90, /*hidden argument*/NULL);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_92;
		L_92 = Vector4_op_Implicit_mB05287DC52FC87A756AB80E837E1EC22FEEB3937_inline(L_91, NULL);
		NullCheck(L_87);
		Material_SetVector_m69444B8040D955821F241113446CC8713C9E12D1(L_87, _stringLiteral7A07A35A5AC61F7A6B0C09B942BEF52A9476A989, L_92, NULL);
		// Vector3 boundsCenter = new Vector3((xMax - xMin) / 2f, (yMax - yMin) / 2f, (zMax - zMin) / 2f);
		float L_93 = __this->___xMax_11;
		float L_94 = __this->___xMin_10;
		float L_95 = __this->___yMax_13;
		float L_96 = __this->___yMin_12;
		float L_97 = __this->___zMax_15;
		float L_98 = __this->___zMin_14;
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&V_1), ((float)(((float)il2cpp_codegen_subtract(L_93, L_94))/(2.0f))), ((float)(((float)il2cpp_codegen_subtract(L_95, L_96))/(2.0f))), ((float)(((float)il2cpp_codegen_subtract(L_97, L_98))/(2.0f))), NULL);
		// Vector3 boundsSize = new Vector3((xMax - xMin), (yMax - yMin), (zMax - zMin));
		float L_99 = __this->___xMax_11;
		float L_100 = __this->___xMin_10;
		float L_101 = __this->___yMax_13;
		float L_102 = __this->___yMin_12;
		float L_103 = __this->___zMax_15;
		float L_104 = __this->___zMin_14;
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&V_2), ((float)il2cpp_codegen_subtract(L_99, L_100)), ((float)il2cpp_codegen_subtract(L_101, L_102)), ((float)il2cpp_codegen_subtract(L_103, L_104)), NULL);
		// mesh.bounds = new Bounds(boundsCenter, boundsSize);
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_105 = __this->___mesh_19;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_106 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_107 = V_2;
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 L_108;
		memset((&L_108), 0, sizeof(L_108));
		Bounds__ctor_mAF7B238B9FBF90C495E5D7951760085A93119C5A((&L_108), L_106, L_107, /*hidden argument*/NULL);
		NullCheck(L_105);
		Mesh_set_bounds_m2E526E9B61ACA77D644C22A9D8EB49583012B54E(L_105, L_108, NULL);
		// lighting.UpdateLighting(meshShaderMat, applyLighting);
		FragmentLighting_tE9A6F75445DF103494C8BFA7BD9D600355F9CDDC* L_109 = __this->___lighting_40;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_110 = __this->___meshShaderMat_24;
		bool L_111 = __this->___applyLighting_18;
		NullCheck(L_109);
		FragmentLighting_UpdateLighting_m68B43ADAA66515951CEC61017EA858B9F2E02302(L_109, L_110, L_111, NULL);
		// if (updateColliderInterval > 0 && (Time.time - lastColliderUpdateTime) >= updateColliderInterval)
		float L_112 = __this->___updateColliderInterval_17;
		if ((!(((float)L_112) > ((float)(0.0f)))))
		{
			goto IL_03e6;
		}
	}
	{
		float L_113;
		L_113 = Time_get_time_m0BEE9AACD0723FE414465B77C9C64D12263675F3(NULL);
		float L_114 = __this->___lastColliderUpdateTime_35;
		float L_115 = __this->___updateColliderInterval_17;
		if ((!(((float)((float)il2cpp_codegen_subtract(L_113, L_114))) >= ((float)L_115))))
		{
			goto IL_03e6;
		}
	}
	{
		// lastColliderUpdateTime = Time.time;
		float L_116;
		L_116 = Time_get_time_m0BEE9AACD0723FE414465B77C9C64D12263675F3(NULL);
		__this->___lastColliderUpdateTime_35 = L_116;
		// MeshCollider meshCollider = GetComponent<MeshCollider>();
		MeshCollider_tB525E4DDE383252364ED0BDD32CF2B53914EE455* L_117;
		L_117 = Component_GetComponent_TisMeshCollider_tB525E4DDE383252364ED0BDD32CF2B53914EE455_mFC0F02CCD26A6A186031CF43E92D7B60EA1CC370(__this, Component_GetComponent_TisMeshCollider_tB525E4DDE383252364ED0BDD32CF2B53914EE455_mFC0F02CCD26A6A186031CF43E92D7B60EA1CC370_RuntimeMethod_var);
		V_6 = L_117;
		// if (meshCollider)
		MeshCollider_tB525E4DDE383252364ED0BDD32CF2B53914EE455* L_118 = V_6;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_119;
		L_119 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_118, NULL);
		if (!L_119)
		{
			goto IL_03e6;
		}
	}
	{
		// meshCollider.sharedMesh = null;
		MeshCollider_tB525E4DDE383252364ED0BDD32CF2B53914EE455* L_120 = V_6;
		NullCheck(L_120);
		MeshCollider_set_sharedMesh_m05F87B9AC04139285EBBCC159F77B51C6940E79C(L_120, (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4*)NULL, NULL);
		// meshCollider.sharedMesh = mesh;
		MeshCollider_tB525E4DDE383252364ED0BDD32CF2B53914EE455* L_121 = V_6;
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_122 = __this->___mesh_19;
		NullCheck(L_121);
		MeshCollider_set_sharedMesh_m05F87B9AC04139285EBBCC159F77B51C6940E79C(L_121, L_122, NULL);
	}

IL_03e6:
	{
		// }
		return;
	}
}
// System.Void com.rfilkov.components.SceneMeshRendererGpu::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneMeshRendererGpu__ctor_mED0DBB7E780E54D8A53563D3FDF151CFBD256798 (SceneMeshRendererGpu_t5E08B994ADA093F4C771151BE372410DAA8D238D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FragmentLighting_tE9A6F75445DF103494C8BFA7BD9D600355F9CDDC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public bool showAsPointCloud = true;
		__this->___showAsPointCloud_6 = (bool)1;
		// public int coarseFactor = 1;
		__this->___coarseFactor_7 = 1;
		// public float edgeCutoffFactor = 0.5f;
		__this->___edgeCutoffFactor_8 = (0.5f);
		// public float xMin = -2f;
		__this->___xMin_10 = (-2.0f);
		// public float xMax = 2f;
		__this->___xMax_11 = (2.0f);
		// public float yMax = 2.5f;
		__this->___yMax_13 = (2.5f);
		// public float zMin = 1f;
		__this->___zMin_14 = (1.0f);
		// public float zMax = 3f;
		__this->___zMax_15 = (3.0f);
		// private Vector3 sensorSpaceScale = Vector3.zero;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		L_0 = Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline(NULL);
		__this->___sensorSpaceScale_27 = L_0;
		// private FragmentLighting lighting = new FragmentLighting();
		FragmentLighting_tE9A6F75445DF103494C8BFA7BD9D600355F9CDDC* L_1 = (FragmentLighting_tE9A6F75445DF103494C8BFA7BD9D600355F9CDDC*)il2cpp_codegen_object_new(FragmentLighting_tE9A6F75445DF103494C8BFA7BD9D600355F9CDDC_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		FragmentLighting__ctor_mB70E61F363E6EA460877AA85A4A2C95C10FB2B3A(L_1, NULL);
		__this->___lighting_40 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___lighting_40), (void*)L_1);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void com.rfilkov.components.SensorPoseStartupEstimator::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SensorPoseStartupEstimator_Start_mEA6099B10B1273389DBF95ACBF4F5F798FFD513A (SensorPoseStartupEstimator_tFA5A8D4CA2DA8961BF7DB8E53A3EF98FB4311849* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KinectManager_t6D168A1C710083948363282B0D862EDDFFD88211_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// kinectManager = KinectManager.Instance;
		il2cpp_codegen_runtime_class_init_inline(KinectManager_t6D168A1C710083948363282B0D862EDDFFD88211_il2cpp_TypeInfo_var);
		KinectManager_t6D168A1C710083948363282B0D862EDDFFD88211* L_0;
		L_0 = KinectManager_get_Instance_mA12B1FCAF8167AF8235386FD868E43E15B29EC64_inline(NULL);
		__this->___kinectManager_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___kinectManager_6), (void*)L_0);
		// startTime = Time.time;
		float L_1;
		L_1 = Time_get_time_m0BEE9AACD0723FE414465B77C9C64D12263675F3(NULL);
		__this->___startTime_12 = L_1;
		// }
		return;
	}
}
// System.Void com.rfilkov.components.SensorPoseStartupEstimator::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SensorPoseStartupEstimator_Update_m892B54DCC520DC61486720CC6263E78F0FF1F9A8 (SensorPoseStartupEstimator_tFA5A8D4CA2DA8961BF7DB8E53A3EF98FB4311849* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Kinect4AzureInterface_tE8F742F963998C50172CB09B419FB2340DFE9761_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2B174F8C730455BB7F9CA693D27CD54342B6C8F7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA5567EB56F1812516E26E065887AD1D681D1C4C0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB54BFAEA034DCF47CD45F14AC8CBACA6671068F6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBF64DC23C4624B537144B1690C2E8D2113A16A1C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&k4abt_sensor_orientation_t_tD83F5C508259D2E828B05D755BD53F4204095A7C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	int32_t V_2 = 0;
	Kinect4AzureInterface_tE8F742F963998C50172CB09B419FB2340DFE9761* V_3 = NULL;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_4;
	memset((&V_4), 0, sizeof(V_4));
	SensorPoseStartupEstimator_tFA5A8D4CA2DA8961BF7DB8E53A3EF98FB4311849* G_B9_0 = NULL;
	SensorPoseStartupEstimator_tFA5A8D4CA2DA8961BF7DB8E53A3EF98FB4311849* G_B8_0 = NULL;
	RuntimeObject* G_B10_0 = NULL;
	SensorPoseStartupEstimator_tFA5A8D4CA2DA8961BF7DB8E53A3EF98FB4311849* G_B10_1 = NULL;
	SensorPoseStartupEstimator_tFA5A8D4CA2DA8961BF7DB8E53A3EF98FB4311849* G_B12_0 = NULL;
	SensorPoseStartupEstimator_tFA5A8D4CA2DA8961BF7DB8E53A3EF98FB4311849* G_B11_0 = NULL;
	int32_t G_B13_0 = 0;
	SensorPoseStartupEstimator_tFA5A8D4CA2DA8961BF7DB8E53A3EF98FB4311849* G_B13_1 = NULL;
	{
		// if(!isCompleted && kinectManager != null && kinectManager.IsInitialized())
		bool L_0 = __this->___isCompleted_11;
		if (L_0)
		{
			goto IL_023b;
		}
	}
	{
		KinectManager_t6D168A1C710083948363282B0D862EDDFFD88211* L_1 = __this->___kinectManager_6;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_1, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_2)
		{
			goto IL_023b;
		}
	}
	{
		KinectManager_t6D168A1C710083948363282B0D862EDDFFD88211* L_3 = __this->___kinectManager_6;
		NullCheck(L_3);
		bool L_4;
		L_4 = KinectManager_IsInitialized_m4E8315ADDF5709A7239F26EAB7AC44392D77A179(L_3, NULL);
		if (!L_4)
		{
			goto IL_023b;
		}
	}
	{
		// if(!isEstimating)
		bool L_5 = __this->___isEstimating_10;
		if (L_5)
		{
			goto IL_00e9;
		}
	}
	{
		// if(kinectManager.getPoseFrames != KinectManager.PoseUsageType.UpdateTransform)
		KinectManager_t6D168A1C710083948363282B0D862EDDFFD88211* L_6 = __this->___kinectManager_6;
		NullCheck(L_6);
		int32_t L_7 = L_6->___getPoseFrames_9;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)20))))
		{
			goto IL_0070;
		}
	}
	{
		// kinectManager.EnableSensorPoseData(sensorIndex, true);
		KinectManager_t6D168A1C710083948363282B0D862EDDFFD88211* L_8 = __this->___kinectManager_6;
		int32_t L_9 = __this->___sensorIndex_4;
		NullCheck(L_8);
		KinectManager_EnableSensorPoseData_m24FCE866A91894EBBA323BD5FA6DFAF18DCCCBDB(L_8, L_9, (bool)1, NULL);
		// kinectManager.getPoseFrames = KinectManager.PoseUsageType.UpdateTransform;
		KinectManager_t6D168A1C710083948363282B0D862EDDFFD88211* L_10 = __this->___kinectManager_6;
		NullCheck(L_10);
		L_10->___getPoseFrames_9 = ((int32_t)20);
		// startTime = Time.time;
		float L_11;
		L_11 = Time_get_time_m0BEE9AACD0723FE414465B77C9C64D12263675F3(NULL);
		__this->___startTime_12 = L_11;
	}

IL_0070:
	{
		// if(sensorInterface == null)
		RuntimeObject* L_12 = __this->___sensorInterface_8;
		if (L_12)
		{
			goto IL_00c7;
		}
	}
	{
		// sensorData = kinectManager.GetSensorData(sensorIndex);
		KinectManager_t6D168A1C710083948363282B0D862EDDFFD88211* L_13 = __this->___kinectManager_6;
		int32_t L_14 = __this->___sensorIndex_4;
		NullCheck(L_13);
		SensorData_t889044994784020C5FA25311175FB3F8B715DD27* L_15;
		L_15 = KinectManager_GetSensorData_m6280DCF2ABA874FCBAB6E7B0F7202C58AA2F4267(L_13, L_14, NULL);
		__this->___sensorData_7 = L_15;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___sensorData_7), (void*)L_15);
		// sensorInterface = sensorData != null ? sensorData.sensorInterface : null;
		SensorData_t889044994784020C5FA25311175FB3F8B715DD27* L_16 = __this->___sensorData_7;
		G_B8_0 = __this;
		if (L_16)
		{
			G_B9_0 = __this;
			goto IL_009b;
		}
	}
	{
		G_B10_0 = ((RuntimeObject*)(NULL));
		G_B10_1 = G_B8_0;
		goto IL_00a6;
	}

IL_009b:
	{
		SensorData_t889044994784020C5FA25311175FB3F8B715DD27* L_17 = __this->___sensorData_7;
		NullCheck(L_17);
		RuntimeObject* L_18 = L_17->___sensorInterface_0;
		G_B10_0 = L_18;
		G_B10_1 = G_B9_0;
	}

IL_00a6:
	{
		NullCheck(G_B10_1);
		G_B10_1->___sensorInterface_8 = G_B10_0;
		Il2CppCodeGenWriteBarrier((void**)(&G_B10_1->___sensorInterface_8), (void*)G_B10_0);
		// sensorPlatform = sensorData != null ? sensorData.sensorIntPlatform : KinectInterop.DepthSensorPlatform.None;
		SensorData_t889044994784020C5FA25311175FB3F8B715DD27* L_19 = __this->___sensorData_7;
		G_B11_0 = __this;
		if (L_19)
		{
			G_B12_0 = __this;
			goto IL_00b7;
		}
	}
	{
		G_B13_0 = 0;
		G_B13_1 = G_B11_0;
		goto IL_00c2;
	}

IL_00b7:
	{
		SensorData_t889044994784020C5FA25311175FB3F8B715DD27* L_20 = __this->___sensorData_7;
		NullCheck(L_20);
		int32_t L_21 = L_20->___sensorIntPlatform_1;
		G_B13_0 = ((int32_t)(L_21));
		G_B13_1 = G_B12_0;
	}

IL_00c2:
	{
		NullCheck(G_B13_1);
		G_B13_1->___sensorPlatform_9 = G_B13_0;
	}

IL_00c7:
	{
		// isEstimating = true;
		__this->___isEstimating_10 = (bool)1;
		// Debug.Log("Pose estimation started. StartTime: " + startTime);
		float* L_22 = (&__this->___startTime_12);
		String_t* L_23;
		L_23 = Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972(L_22, NULL);
		String_t* L_24;
		L_24 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteralBF64DC23C4624B537144B1690C2E8D2113A16A1C, L_23, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(L_24, NULL);
		return;
	}

IL_00e9:
	{
		// else if(duration > 0f && (Time.time - startTime) >= duration)
		float L_25 = __this->___duration_5;
		if ((!(((float)L_25) > ((float)(0.0f)))))
		{
			goto IL_014c;
		}
	}
	{
		float L_26;
		L_26 = Time_get_time_m0BEE9AACD0723FE414465B77C9C64D12263675F3(NULL);
		float L_27 = __this->___startTime_12;
		float L_28 = __this->___duration_5;
		if ((!(((float)((float)il2cpp_codegen_subtract(L_26, L_27))) >= ((float)L_28))))
		{
			goto IL_014c;
		}
	}
	{
		// kinectManager.EnableSensorPoseData(sensorIndex, false);
		KinectManager_t6D168A1C710083948363282B0D862EDDFFD88211* L_29 = __this->___kinectManager_6;
		int32_t L_30 = __this->___sensorIndex_4;
		NullCheck(L_29);
		KinectManager_EnableSensorPoseData_m24FCE866A91894EBBA323BD5FA6DFAF18DCCCBDB(L_29, L_30, (bool)0, NULL);
		// kinectManager.getPoseFrames = KinectManager.PoseUsageType.None;
		KinectManager_t6D168A1C710083948363282B0D862EDDFFD88211* L_31 = __this->___kinectManager_6;
		NullCheck(L_31);
		L_31->___getPoseFrames_9 = 0;
		// isCompleted = true;
		__this->___isCompleted_11 = (bool)1;
		// Debug.Log("Pose estimation stopped. StopTime: " + Time.time);
		float L_32;
		L_32 = Time_get_time_m0BEE9AACD0723FE414465B77C9C64D12263675F3(NULL);
		V_0 = L_32;
		String_t* L_33;
		L_33 = Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972((&V_0), NULL);
		String_t* L_34;
		L_34 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteral2B174F8C730455BB7F9CA693D27CD54342B6C8F7, L_33, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(L_34, NULL);
		return;
	}

IL_014c:
	{
		// else if(sensorPlatform == KinectInterop.DepthSensorPlatform.Kinect4Azure)
		int32_t L_35 = __this->___sensorPlatform_9;
		if ((!(((uint32_t)L_35) == ((uint32_t)4))))
		{
			goto IL_023b;
		}
	}
	{
		// float zRot = ((MonoBehaviour)sensorInterface).transform.rotation.eulerAngles.z;
		RuntimeObject* L_36 = __this->___sensorInterface_8;
		NullCheck(((MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*)CastclassClass((RuntimeObject*)L_36, MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71_il2cpp_TypeInfo_var)));
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_37;
		L_37 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(((MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*)CastclassClass((RuntimeObject*)L_36, MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71_il2cpp_TypeInfo_var)), NULL);
		NullCheck(L_37);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_38;
		L_38 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_37, NULL);
		V_4 = L_38;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_39;
		L_39 = Quaternion_get_eulerAngles_m2DB5158B5C3A71FD60FC8A6EE43D3AAA1CFED122_inline((&V_4), NULL);
		float L_40 = L_39.___z_4;
		V_1 = L_40;
		// if (zRot < 0f)
		float L_41 = V_1;
		if ((!(((float)L_41) < ((float)(0.0f)))))
		{
			goto IL_018c;
		}
	}
	{
		// zRot += 360f;
		float L_42 = V_1;
		V_1 = ((float)il2cpp_codegen_add(L_42, (360.0f)));
	}

IL_018c:
	{
		// Microsoft.Azure.Kinect.Sensor.k4abt_sensor_orientation_t btOriHint = Microsoft.Azure.Kinect.Sensor.k4abt_sensor_orientation_t.K4ABT_SENSOR_ORIENTATION_DEFAULT;
		V_2 = 0;
		// if (zRot > 70f && zRot < 110f)
		float L_43 = V_1;
		if ((!(((float)L_43) > ((float)(70.0f)))))
		{
			goto IL_01a2;
		}
	}
	{
		float L_44 = V_1;
		if ((!(((float)L_44) < ((float)(110.0f)))))
		{
			goto IL_01a2;
		}
	}
	{
		// btOriHint = Microsoft.Azure.Kinect.Sensor.k4abt_sensor_orientation_t.K4ABT_SENSOR_ORIENTATION_COUNTERCLOCKWISE90;
		V_2 = 2;
		goto IL_01c8;
	}

IL_01a2:
	{
		// else if (zRot > 160f && zRot < 200f)
		float L_45 = V_1;
		if ((!(((float)L_45) > ((float)(160.0f)))))
		{
			goto IL_01b6;
		}
	}
	{
		float L_46 = V_1;
		if ((!(((float)L_46) < ((float)(200.0f)))))
		{
			goto IL_01b6;
		}
	}
	{
		// btOriHint = Microsoft.Azure.Kinect.Sensor.k4abt_sensor_orientation_t.K4ABT_SENSOR_ORIENTATION_FLIP180;
		V_2 = 3;
		goto IL_01c8;
	}

IL_01b6:
	{
		// else if (zRot >= 250f && zRot <= 290f)
		float L_47 = V_1;
		if ((!(((float)L_47) >= ((float)(250.0f)))))
		{
			goto IL_01c8;
		}
	}
	{
		float L_48 = V_1;
		if ((!(((float)L_48) <= ((float)(290.0f)))))
		{
			goto IL_01c8;
		}
	}
	{
		// btOriHint = Microsoft.Azure.Kinect.Sensor.k4abt_sensor_orientation_t.K4ABT_SENSOR_ORIENTATION_CLOCKWISE90;
		V_2 = 1;
	}

IL_01c8:
	{
		// Kinect4AzureInterface k4aInt = (Kinect4AzureInterface)sensorInterface;
		RuntimeObject* L_49 = __this->___sensorInterface_8;
		V_3 = ((Kinect4AzureInterface_tE8F742F963998C50172CB09B419FB2340DFE9761*)CastclassClass((RuntimeObject*)L_49, Kinect4AzureInterface_tE8F742F963998C50172CB09B419FB2340DFE9761_il2cpp_TypeInfo_var));
		// if(btOriHint != k4aInt.bodyTrackingSensorOrientation && (int)(k4aInt.frameSourceFlags & KinectInterop.FrameSource.TypeBody) != 0)
		int32_t L_50 = V_2;
		Kinect4AzureInterface_tE8F742F963998C50172CB09B419FB2340DFE9761* L_51 = V_3;
		NullCheck(L_51);
		int32_t L_52 = L_51->___bodyTrackingSensorOrientation_130;
		if ((((int32_t)L_50) == ((int32_t)L_52)))
		{
			goto IL_023b;
		}
	}
	{
		Kinect4AzureInterface_tE8F742F963998C50172CB09B419FB2340DFE9761* L_53 = V_3;
		NullCheck(L_53);
		uint32_t L_54 = ((DepthSensorBase_tB644BCAB82289DCDB9290A9B3A6972F0F13B0774*)L_53)->___frameSourceFlags_15;
		if (!((int32_t)((int32_t)L_54&((int32_t)32))))
		{
			goto IL_023b;
		}
	}
	{
		// Debug.Log("  stopping k4a body tracker...");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(_stringLiteralA5567EB56F1812516E26E065887AD1D681D1C4C0, NULL);
		// k4aInt.StopBodyTracking(sensorData);
		Kinect4AzureInterface_tE8F742F963998C50172CB09B419FB2340DFE9761* L_55 = V_3;
		SensorData_t889044994784020C5FA25311175FB3F8B715DD27* L_56 = __this->___sensorData_7;
		NullCheck(L_55);
		VirtualActionInvoker1< SensorData_t889044994784020C5FA25311175FB3F8B715DD27* >::Invoke(119 /* System.Void com.rfilkov.kinect.DepthSensorBase::StopBodyTracking(com.rfilkov.kinect.KinectInterop/SensorData) */, L_55, L_56);
		// k4aInt.bodyTrackingSensorOrientation = btOriHint;
		Kinect4AzureInterface_tE8F742F963998C50172CB09B419FB2340DFE9761* L_57 = V_3;
		int32_t L_58 = V_2;
		NullCheck(L_57);
		L_57->___bodyTrackingSensorOrientation_130 = L_58;
		// k4aInt.InitBodyTracking(k4aInt.frameSourceFlags, sensorData, k4aInt.coordMapperCalib, true);
		Kinect4AzureInterface_tE8F742F963998C50172CB09B419FB2340DFE9761* L_59 = V_3;
		Kinect4AzureInterface_tE8F742F963998C50172CB09B419FB2340DFE9761* L_60 = V_3;
		NullCheck(L_60);
		uint32_t L_61 = ((DepthSensorBase_tB644BCAB82289DCDB9290A9B3A6972F0F13B0774*)L_60)->___frameSourceFlags_15;
		SensorData_t889044994784020C5FA25311175FB3F8B715DD27* L_62 = __this->___sensorData_7;
		Kinect4AzureInterface_tE8F742F963998C50172CB09B419FB2340DFE9761* L_63 = V_3;
		NullCheck(L_63);
		Calibration_t1E4A9872ADA4B8D9B6AEAF928EFB83979DD3FC57 L_64 = L_63->___coordMapperCalib_179;
		NullCheck(L_59);
		bool L_65;
		L_65 = Kinect4AzureInterface_InitBodyTracking_mDFE3C1F7289018FBDFB976E708CCC1C9D3F18732(L_59, L_61, L_62, L_64, (bool)1, NULL);
		// Debug.Log("  k4a body tracker restarted with sensor orientation: " + btOriHint);
		Il2CppFakeBox<int32_t> L_66(k4abt_sensor_orientation_t_tD83F5C508259D2E828B05D755BD53F4204095A7C_il2cpp_TypeInfo_var, (&V_2));
		String_t* L_67;
		L_67 = Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)(&L_66), NULL);
		String_t* L_68;
		L_68 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteralB54BFAEA034DCF47CD45F14AC8CBACA6671068F6, L_67, NULL);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(L_68, NULL);
	}

IL_023b:
	{
		// }
		return;
	}
}
// System.Void com.rfilkov.components.SensorPoseStartupEstimator::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SensorPoseStartupEstimator__ctor_m5E78022EB4B04AA5BF79606F33F944965B0D42CA (SensorPoseStartupEstimator_tFA5A8D4CA2DA8961BF7DB8E53A3EF98FB4311849* __this, const RuntimeMethod* method) 
{
	{
		// public float duration = 10f;
		__this->___duration_5 = (10.0f);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void com.rfilkov.components.UserMeshRenderer::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UserMeshRenderer_Start_m8977576729D2EC644E27EEE8483799CDD43CF55A (UserMeshRenderer_tE896EB6D7C675E98F5AF9306C25AAB1EF96A7E2F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KinectManager_t6D168A1C710083948363282B0D862EDDFFD88211_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ThreadStart_t7662D98F1793EDE90192D7304D1C3C44119328A2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UserMeshRenderer_BuildMesh_m0DF5C3034F416B9AE30F590C3FD57594CA399DA9_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	UserMeshRenderer_tE896EB6D7C675E98F5AF9306C25AAB1EF96A7E2F* G_B2_0 = NULL;
	UserMeshRenderer_tE896EB6D7C675E98F5AF9306C25AAB1EF96A7E2F* G_B1_0 = NULL;
	UserMeshRenderer_tE896EB6D7C675E98F5AF9306C25AAB1EF96A7E2F* G_B3_0 = NULL;
	SensorData_t889044994784020C5FA25311175FB3F8B715DD27* G_B4_0 = NULL;
	UserMeshRenderer_tE896EB6D7C675E98F5AF9306C25AAB1EF96A7E2F* G_B4_1 = NULL;
	{
		// kinectManager = KinectManager.Instance;
		il2cpp_codegen_runtime_class_init_inline(KinectManager_t6D168A1C710083948363282B0D862EDDFFD88211_il2cpp_TypeInfo_var);
		KinectManager_t6D168A1C710083948363282B0D862EDDFFD88211* L_0;
		L_0 = KinectManager_get_Instance_mA12B1FCAF8167AF8235386FD868E43E15B29EC64_inline(NULL);
		__this->___kinectManager_11 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___kinectManager_11), (void*)L_0);
		// sensorData = (kinectManager != null && kinectManager.IsInitialized()) ? kinectManager.GetSensorData(sensorIndex) : null;
		KinectManager_t6D168A1C710083948363282B0D862EDDFFD88211* L_1 = __this->___kinectManager_11;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_1, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		G_B1_0 = __this;
		if (!L_2)
		{
			G_B2_0 = __this;
			goto IL_0027;
		}
	}
	{
		KinectManager_t6D168A1C710083948363282B0D862EDDFFD88211* L_3 = __this->___kinectManager_11;
		NullCheck(L_3);
		bool L_4;
		L_4 = KinectManager_IsInitialized_m4E8315ADDF5709A7239F26EAB7AC44392D77A179(L_3, NULL);
		G_B2_0 = G_B1_0;
		if (L_4)
		{
			G_B3_0 = G_B1_0;
			goto IL_002a;
		}
	}

IL_0027:
	{
		G_B4_0 = ((SensorData_t889044994784020C5FA25311175FB3F8B715DD27*)(NULL));
		G_B4_1 = G_B2_0;
		goto IL_003b;
	}

IL_002a:
	{
		KinectManager_t6D168A1C710083948363282B0D862EDDFFD88211* L_5 = __this->___kinectManager_11;
		int32_t L_6 = __this->___sensorIndex_5;
		NullCheck(L_5);
		SensorData_t889044994784020C5FA25311175FB3F8B715DD27* L_7;
		L_7 = KinectManager_GetSensorData_m6280DCF2ABA874FCBAB6E7B0F7202C58AA2F4267(L_5, L_6, NULL);
		G_B4_0 = L_7;
		G_B4_1 = G_B3_0;
	}

IL_003b:
	{
		NullCheck(G_B4_1);
		G_B4_1->___sensorData_12 = G_B4_0;
		Il2CppCodeGenWriteBarrier((void**)(&G_B4_1->___sensorData_12), (void*)G_B4_0);
		// buildMeshThread = new System.Threading.Thread(new System.Threading.ThreadStart(BuildMesh));
		ThreadStart_t7662D98F1793EDE90192D7304D1C3C44119328A2* L_8 = (ThreadStart_t7662D98F1793EDE90192D7304D1C3C44119328A2*)il2cpp_codegen_object_new(ThreadStart_t7662D98F1793EDE90192D7304D1C3C44119328A2_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		ThreadStart__ctor_m35CE51F76358F20E4A0C8F2963C3AE14E5FF7E71(L_8, __this, (intptr_t)((void*)UserMeshRenderer_BuildMesh_m0DF5C3034F416B9AE30F590C3FD57594CA399DA9_RuntimeMethod_var), NULL);
		Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F* L_9 = (Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F*)il2cpp_codegen_object_new(Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F_il2cpp_TypeInfo_var);
		NullCheck(L_9);
		Thread__ctor_m1FA23A179DF4F5B659689D6FA40DE903086212E2(L_9, L_8, NULL);
		__this->___buildMeshThread_35 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___buildMeshThread_35), (void*)L_9);
		// buildMeshThread.IsBackground = true;
		Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F* L_10 = __this->___buildMeshThread_35;
		NullCheck(L_10);
		Thread_set_IsBackground_m45F00BD4C46F9B8A7C46A20A170B22BABB8FBA30(L_10, (bool)1, NULL);
		// buildMeshThread.Start();
		Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F* L_11 = __this->___buildMeshThread_35;
		NullCheck(L_11);
		Thread_Start_m2230799AA331CA9ACEF49D5500281D0C1A9F72FA(L_11, NULL);
		// }
		return;
	}
}
// System.Void com.rfilkov.components.UserMeshRenderer::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UserMeshRenderer_OnDestroy_m2BB86B833F1CA4D1730B7D0CB778793D4644DC2D (UserMeshRenderer_tE896EB6D7C675E98F5AF9306C25AAB1EF96A7E2F* __this, const RuntimeMethod* method) 
{
	{
		// if (buildMeshThread != null)
		Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F* L_0 = __this->___buildMeshThread_35;
		if (!L_0)
		{
			goto IL_0021;
		}
	}
	{
		// bStopThread = true;
		__this->___bStopThread_36 = (bool)1;
		// buildMeshThread.Join();
		Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F* L_1 = __this->___buildMeshThread_35;
		NullCheck(L_1);
		Thread_Join_mB756581AAF5EB028081256E0517892BC8867779F(L_1, NULL);
		// buildMeshThread = null;
		__this->___buildMeshThread_35 = (Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___buildMeshThread_35), (void*)(Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F*)NULL);
	}

IL_0021:
	{
		// if (bMeshInited)
		bool L_2 = __this->___bMeshInited_34;
		if (!L_2)
		{
			goto IL_002f;
		}
	}
	{
		// FinishMesh();
		UserMeshRenderer_FinishMesh_mB2D05529B66E18588B6E2C8CA72BEF25034C7313(__this, NULL);
	}

IL_002f:
	{
		// }
		return;
	}
}
// System.Void com.rfilkov.components.UserMeshRenderer::LateUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UserMeshRenderer_LateUpdate_m8518FDA347E16F229090207662A68720F87E4BB1 (UserMeshRenderer_tE896EB6D7C675E98F5AF9306C25AAB1EF96A7E2F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	UserMeshRenderer_tE896EB6D7C675E98F5AF9306C25AAB1EF96A7E2F* G_B7_0 = NULL;
	UserMeshRenderer_tE896EB6D7C675E98F5AF9306C25AAB1EF96A7E2F* G_B6_0 = NULL;
	int32_t G_B8_0 = 0;
	UserMeshRenderer_tE896EB6D7C675E98F5AF9306C25AAB1EF96A7E2F* G_B8_1 = NULL;
	UserMeshRenderer_tE896EB6D7C675E98F5AF9306C25AAB1EF96A7E2F* G_B10_0 = NULL;
	UserMeshRenderer_tE896EB6D7C675E98F5AF9306C25AAB1EF96A7E2F* G_B9_0 = NULL;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 G_B11_0;
	memset((&G_B11_0), 0, sizeof(G_B11_0));
	UserMeshRenderer_tE896EB6D7C675E98F5AF9306C25AAB1EF96A7E2F* G_B11_1 = NULL;
	{
		// if (mesh == null && sensorData != null && sensorData.depthCamIntr != null)
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_0 = __this->___mesh_10;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0029;
		}
	}
	{
		SensorData_t889044994784020C5FA25311175FB3F8B715DD27* L_2 = __this->___sensorData_12;
		if (!L_2)
		{
			goto IL_0029;
		}
	}
	{
		SensorData_t889044994784020C5FA25311175FB3F8B715DD27* L_3 = __this->___sensorData_12;
		NullCheck(L_3);
		CameraIntrinsics_t272DC8A0981DE0A132DFC4E7B48C942191D56EFF* L_4 = L_3->___depthCamIntr_9;
		if (!L_4)
		{
			goto IL_0029;
		}
	}
	{
		// InitMesh();
		UserMeshRenderer_InitMesh_m154A0AE6F33649B7C7BA0E0184E87F0ED187116D(__this, NULL);
	}

IL_0029:
	{
		// if (bMeshInited)
		bool L_5 = __this->___bMeshInited_34;
		if (!L_5)
		{
			goto IL_009c;
		}
	}
	{
		// userId = kinectManager.GetUserIdByIndex(playerIndex);
		KinectManager_t6D168A1C710083948363282B0D862EDDFFD88211* L_6 = __this->___kinectManager_11;
		int32_t L_7 = __this->___playerIndex_4;
		NullCheck(L_6);
		uint64_t L_8;
		L_8 = KinectManager_GetUserIdByIndex_m039C55595E67098180174E20E7F8A66D37FCD06C(L_6, L_7, NULL);
		__this->___userId_25 = L_8;
		// userBodyIndex = (byte)(userId != 0 ? kinectManager.GetBodyIndexByUserId(userId) : 255);
		uint64_t L_9 = __this->___userId_25;
		G_B6_0 = __this;
		if (L_9)
		{
			G_B7_0 = __this;
			goto IL_0058;
		}
	}
	{
		G_B8_0 = ((int32_t)255);
		G_B8_1 = G_B6_0;
		goto IL_0069;
	}

IL_0058:
	{
		KinectManager_t6D168A1C710083948363282B0D862EDDFFD88211* L_10 = __this->___kinectManager_11;
		uint64_t L_11 = __this->___userId_25;
		NullCheck(L_10);
		int32_t L_12;
		L_12 = KinectManager_GetBodyIndexByUserId_m102FDCC202FDCD9696DAB08CA644A0E52424FD20(L_10, L_11, NULL);
		G_B8_0 = L_12;
		G_B8_1 = G_B7_0;
	}

IL_0069:
	{
		NullCheck(G_B8_1);
		G_B8_1->___userBodyIndex_26 = (uint8_t)((int32_t)(uint8_t)G_B8_0);
		// userBodyPos = userId != 0 ? kinectManager.GetUserKinectPosition(userId, true) : Vector3.zero;
		uint64_t L_13 = __this->___userId_25;
		G_B9_0 = __this;
		if (L_13)
		{
			G_B10_0 = __this;
			goto IL_007f;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		L_14 = Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline(NULL);
		G_B11_0 = L_14;
		G_B11_1 = G_B9_0;
		goto IL_0091;
	}

IL_007f:
	{
		KinectManager_t6D168A1C710083948363282B0D862EDDFFD88211* L_15 = __this->___kinectManager_11;
		uint64_t L_16 = __this->___userId_25;
		NullCheck(L_15);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17;
		L_17 = KinectManager_GetUserKinectPosition_m48B8695AAD72FBE804F2A955BD5B11489EF06F61(L_15, L_16, (bool)1, NULL);
		G_B11_0 = L_17;
		G_B11_1 = G_B10_0;
	}

IL_0091:
	{
		NullCheck(G_B11_1);
		G_B11_1->___userBodyPos_27 = G_B11_0;
		// UpdateMesh();
		UserMeshRenderer_UpdateMesh_m4C1B5845CA899423379AC4B058C348B5A4062A4E(__this, NULL);
	}

IL_009c:
	{
		// }
		return;
	}
}
// System.Void com.rfilkov.components.UserMeshRenderer::InitMesh()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UserMeshRenderer_InitMesh_m154A0AE6F33649B7C7BA0E0184E87F0ED187116D (UserMeshRenderer_tE896EB6D7C675E98F5AF9306C25AAB1EF96A7E2F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisMeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5_mB82F66059DFB5715DD85BDED1D90BC03A6C9E623_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DepthSensorBase_tB644BCAB82289DCDB9290A9B3A6972F0F13B0774_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DepthSensorInterface_t2FD8203480BF13E04977ED112CA9D0B67DCA1053_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KinectInterop_t8231C68411373688AA650B978611F932EE5860F9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3D4887776042D73AD182766CDE2B5AE68B794B7D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7B15541EEA8A44CEE3ECC230191B03CE7FD444E8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7F5A1C307F51BE942F3E8F65D5936DCE694BD1E2);
		s_Il2CppMethodInitialized = true;
	}
	MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* V_0 = NULL;
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A V_1;
	memset((&V_1), 0, sizeof(V_1));
	Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* V_2 = NULL;
	int32_t V_3 = 0;
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* V_4 = NULL;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_8;
	memset((&V_8), 0, sizeof(V_8));
	int32_t V_9 = 0;
	UserMeshRenderer_tE896EB6D7C675E98F5AF9306C25AAB1EF96A7E2F* G_B17_0 = NULL;
	UserMeshRenderer_tE896EB6D7C675E98F5AF9306C25AAB1EF96A7E2F* G_B16_0 = NULL;
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* G_B18_0 = NULL;
	UserMeshRenderer_tE896EB6D7C675E98F5AF9306C25AAB1EF96A7E2F* G_B18_1 = NULL;
	{
		// mesh = new Mesh
		// {
		//     name = "User" + playerIndex + "Mesh-S" + sensorIndex,
		//     indexFormat = UnityEngine.Rendering.IndexFormat.UInt32
		// };
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_0 = (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4*)il2cpp_codegen_object_new(Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Mesh__ctor_m5A9AECEDDAFFD84811ED8928012BDE97A9CEBD00(L_0, NULL);
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_1 = L_0;
		int32_t* L_2 = (&__this->___playerIndex_4);
		String_t* L_3;
		L_3 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_2, NULL);
		int32_t* L_4 = (&__this->___sensorIndex_5);
		String_t* L_5;
		L_5 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_4, NULL);
		String_t* L_6;
		L_6 = String_Concat_mF8B69BE42B5C5ABCAD3C176FBBE3010E0815D65D(_stringLiteral3D4887776042D73AD182766CDE2B5AE68B794B7D, L_3, _stringLiteral7F5A1C307F51BE942F3E8F65D5936DCE694BD1E2, L_5, NULL);
		NullCheck(L_1);
		Object_set_name_mC79E6DC8FFD72479C90F0C4CC7F42A0FEAF5AE47(L_1, L_6, NULL);
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_7 = L_1;
		NullCheck(L_7);
		Mesh_set_indexFormat_mCCC7837A0916FA7A272159DA6AF984B0022488F4(L_7, 1, NULL);
		__this->___mesh_10 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mesh_10), (void*)L_7);
		// MeshFilter meshFilter = GetComponent<MeshFilter>();
		MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* L_8;
		L_8 = Component_GetComponent_TisMeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5_mB82F66059DFB5715DD85BDED1D90BC03A6C9E623(__this, Component_GetComponent_TisMeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5_mB82F66059DFB5715DD85BDED1D90BC03A6C9E623_RuntimeMethod_var);
		V_0 = L_8;
		// if (meshFilter != null)
		MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* L_9 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_10;
		L_10 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_9, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_10)
		{
			goto IL_005b;
		}
	}
	{
		// meshFilter.mesh = mesh;
		MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* L_11 = V_0;
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_12 = __this->___mesh_10;
		NullCheck(L_11);
		MeshFilter_set_mesh_mD2988E2D835205FD6B6CD35A61E1592844D971F8(L_11, L_12, NULL);
		goto IL_0065;
	}

IL_005b:
	{
		// Debug.LogWarning("MeshFilter not found! You may not see the mesh on screen");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_mEF15C6B17CE4E1FA7E379CDB82CE40FCD89A3F28(_stringLiteral7B15541EEA8A44CEE3ECC230191B03CE7FD444E8, NULL);
	}

IL_0065:
	{
		// if (sensorData != null && sensorData.sensorInterface != null)
		SensorData_t889044994784020C5FA25311175FB3F8B715DD27* L_13 = __this->___sensorData_12;
		if (!L_13)
		{
			goto IL_0414;
		}
	}
	{
		SensorData_t889044994784020C5FA25311175FB3F8B715DD27* L_14 = __this->___sensorData_12;
		NullCheck(L_14);
		RuntimeObject* L_15 = L_14->___sensorInterface_0;
		if (!L_15)
		{
			goto IL_0414;
		}
	}
	{
		// sensorInt = (DepthSensorBase)sensorData.sensorInterface;
		SensorData_t889044994784020C5FA25311175FB3F8B715DD27* L_16 = __this->___sensorData_12;
		NullCheck(L_16);
		RuntimeObject* L_17 = L_16->___sensorInterface_0;
		__this->___sensorInt_13 = ((DepthSensorBase_tB644BCAB82289DCDB9290A9B3A6972F0F13B0774*)CastclassClass((RuntimeObject*)L_17, DepthSensorBase_tB644BCAB82289DCDB9290A9B3A6972F0F13B0774_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&__this->___sensorInt_13), (void*)((DepthSensorBase_tB644BCAB82289DCDB9290A9B3A6972F0F13B0774*)CastclassClass((RuntimeObject*)L_17, DepthSensorBase_tB644BCAB82289DCDB9290A9B3A6972F0F13B0774_il2cpp_TypeInfo_var)));
		// Vector2Int imageRes = Vector2Int.zero;
		Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A L_18;
		L_18 = Vector2Int_get_zero_mA4130E83BCF623B65B14574D496C6C0FB441D9FE_inline(NULL);
		V_1 = L_18;
		// if (sensorInt.pointCloudColorTexture == null)
		DepthSensorBase_tB644BCAB82289DCDB9290A9B3A6972F0F13B0774* L_19 = __this->___sensorInt_13;
		NullCheck(L_19);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_20 = L_19->___pointCloudColorTexture_13;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_21;
		L_21 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_20, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_21)
		{
			goto IL_010c;
		}
	}
	{
		// sensorInt.pointCloudResolution = sourceImageResolution;
		DepthSensorBase_tB644BCAB82289DCDB9290A9B3A6972F0F13B0774* L_22 = __this->___sensorInt_13;
		int32_t L_23 = __this->___sourceImageResolution_6;
		NullCheck(L_22);
		L_22->___pointCloudResolution_11 = L_23;
		// imageRes = sensorInt.GetPointCloudTexResolution(sensorData);
		DepthSensorBase_tB644BCAB82289DCDB9290A9B3A6972F0F13B0774* L_24 = __this->___sensorInt_13;
		SensorData_t889044994784020C5FA25311175FB3F8B715DD27* L_25 = __this->___sensorData_12;
		NullCheck(L_24);
		Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A L_26;
		L_26 = VirtualFuncInvoker1< Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A, SensorData_t889044994784020C5FA25311175FB3F8B715DD27* >::Invoke(79 /* UnityEngine.Vector2Int com.rfilkov.kinect.DepthSensorBase::GetPointCloudTexResolution(com.rfilkov.kinect.KinectInterop/SensorData) */, L_24, L_25);
		V_1 = L_26;
		// colorTexture = KinectInterop.CreateRenderTexture(colorTexture, imageRes.x, imageRes.y, RenderTextureFormat.ARGB32);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_27 = __this->___colorTexture_15;
		int32_t L_28;
		L_28 = Vector2Int_get_x_mA2CACB1B6E6B5AD0CCC32B2CD2EDCE3ECEB50576_inline((&V_1), NULL);
		int32_t L_29;
		L_29 = Vector2Int_get_y_m48454163ECF0B463FB5A16A0C4FC4B14DB0768B3_inline((&V_1), NULL);
		il2cpp_codegen_runtime_class_init_inline(KinectInterop_t8231C68411373688AA650B978611F932EE5860F9_il2cpp_TypeInfo_var);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_30;
		L_30 = KinectInterop_CreateRenderTexture_m84068B60B5DE22E7D439F086D1312279950E7D5E(L_27, L_28, L_29, 0, NULL);
		__this->___colorTexture_15 = L_30;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___colorTexture_15), (void*)L_30);
		// sensorInt.pointCloudColorTexture = colorTexture;
		DepthSensorBase_tB644BCAB82289DCDB9290A9B3A6972F0F13B0774* L_31 = __this->___sensorInt_13;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_32 = __this->___colorTexture_15;
		NullCheck(L_31);
		L_31->___pointCloudColorTexture_13 = L_32;
		Il2CppCodeGenWriteBarrier((void**)(&L_31->___pointCloudColorTexture_13), (void*)L_32);
		// colorTextureCreated = true;
		__this->___colorTextureCreated_18 = (bool)1;
		goto IL_0136;
	}

IL_010c:
	{
		// imageRes = sensorInt.GetPointCloudTexResolution(sensorData);
		DepthSensorBase_tB644BCAB82289DCDB9290A9B3A6972F0F13B0774* L_33 = __this->___sensorInt_13;
		SensorData_t889044994784020C5FA25311175FB3F8B715DD27* L_34 = __this->___sensorData_12;
		NullCheck(L_33);
		Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A L_35;
		L_35 = VirtualFuncInvoker1< Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A, SensorData_t889044994784020C5FA25311175FB3F8B715DD27* >::Invoke(79 /* UnityEngine.Vector2Int com.rfilkov.kinect.DepthSensorBase::GetPointCloudTexResolution(com.rfilkov.kinect.KinectInterop/SensorData) */, L_33, L_34);
		V_1 = L_35;
		// colorTexture = sensorInt.pointCloudColorTexture;
		DepthSensorBase_tB644BCAB82289DCDB9290A9B3A6972F0F13B0774* L_36 = __this->___sensorInt_13;
		NullCheck(L_36);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_37 = L_36->___pointCloudColorTexture_13;
		__this->___colorTexture_15 = L_37;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___colorTexture_15), (void*)L_37);
		// colorTextureCreated = false;
		__this->___colorTextureCreated_18 = (bool)0;
	}

IL_0136:
	{
		// bColorCamRes = sensorInt.pointCloudResolution == DepthSensorBase.PointCloudResolution.ColorCameraResolution;
		DepthSensorBase_tB644BCAB82289DCDB9290A9B3A6972F0F13B0774* L_38 = __this->___sensorInt_13;
		NullCheck(L_38);
		int32_t L_39 = L_38->___pointCloudResolution_11;
		__this->___bColorCamRes_19 = (bool)((((int32_t)L_39) == ((int32_t)1))? 1 : 0);
		// if (bColorCamRes)
		bool L_40 = __this->___bColorCamRes_19;
		if (!L_40)
		{
			goto IL_01c6;
		}
	}
	{
		// tDepthImage = new ushort[sensorData.colorImageWidth * sensorData.colorImageHeight];
		SensorData_t889044994784020C5FA25311175FB3F8B715DD27* L_41 = __this->___sensorData_12;
		NullCheck(L_41);
		int32_t L_42 = L_41->___colorImageWidth_18;
		SensorData_t889044994784020C5FA25311175FB3F8B715DD27* L_43 = __this->___sensorData_12;
		NullCheck(L_43);
		int32_t L_44 = L_43->___colorImageHeight_19;
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_45 = (UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83*)(UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83*)SZArrayNew(UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_multiply(L_42, L_44)));
		__this->___tDepthImage_20 = L_45;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___tDepthImage_20), (void*)L_45);
		// tBodyIndexImage = new byte[sensorData.colorImageWidth * sensorData.colorImageHeight];
		SensorData_t889044994784020C5FA25311175FB3F8B715DD27* L_46 = __this->___sensorData_12;
		NullCheck(L_46);
		int32_t L_47 = L_46->___colorImageWidth_18;
		SensorData_t889044994784020C5FA25311175FB3F8B715DD27* L_48 = __this->___sensorData_12;
		NullCheck(L_48);
		int32_t L_49 = L_48->___colorImageHeight_19;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_50 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_multiply(L_47, L_49)));
		__this->___tBodyIndexImage_21 = L_50;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___tBodyIndexImage_21), (void*)L_50);
		// sensorData.sensorInterface.EnableColorCameraDepthFrame(sensorData, true);
		SensorData_t889044994784020C5FA25311175FB3F8B715DD27* L_51 = __this->___sensorData_12;
		NullCheck(L_51);
		RuntimeObject* L_52 = L_51->___sensorInterface_0;
		SensorData_t889044994784020C5FA25311175FB3F8B715DD27* L_53 = __this->___sensorData_12;
		NullCheck(L_52);
		InterfaceActionInvoker2< SensorData_t889044994784020C5FA25311175FB3F8B715DD27*, bool >::Invoke(43 /* System.Void com.rfilkov.kinect.DepthSensorInterface::EnableColorCameraDepthFrame(com.rfilkov.kinect.KinectInterop/SensorData,System.Boolean) */, DepthSensorInterface_t2FD8203480BF13E04977ED112CA9D0B67DCA1053_il2cpp_TypeInfo_var, L_52, L_53, (bool)1);
		// sensorData.sensorInterface.EnableColorCameraBodyIndexFrame(sensorData, true);
		SensorData_t889044994784020C5FA25311175FB3F8B715DD27* L_54 = __this->___sensorData_12;
		NullCheck(L_54);
		RuntimeObject* L_55 = L_54->___sensorInterface_0;
		SensorData_t889044994784020C5FA25311175FB3F8B715DD27* L_56 = __this->___sensorData_12;
		NullCheck(L_55);
		InterfaceActionInvoker2< SensorData_t889044994784020C5FA25311175FB3F8B715DD27*, bool >::Invoke(49 /* System.Void com.rfilkov.kinect.DepthSensorInterface::EnableColorCameraBodyIndexFrame(com.rfilkov.kinect.KinectInterop/SensorData,System.Boolean) */, DepthSensorInterface_t2FD8203480BF13E04977ED112CA9D0B67DCA1053_il2cpp_TypeInfo_var, L_55, L_56, (bool)1);
		goto IL_020a;
	}

IL_01c6:
	{
		// tDepthImage = new ushort[sensorData.depthImageWidth * sensorData.depthImageHeight];
		SensorData_t889044994784020C5FA25311175FB3F8B715DD27* L_57 = __this->___sensorData_12;
		NullCheck(L_57);
		int32_t L_58 = L_57->___depthImageWidth_25;
		SensorData_t889044994784020C5FA25311175FB3F8B715DD27* L_59 = __this->___sensorData_12;
		NullCheck(L_59);
		int32_t L_60 = L_59->___depthImageHeight_26;
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_61 = (UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83*)(UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83*)SZArrayNew(UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_multiply(L_58, L_60)));
		__this->___tDepthImage_20 = L_61;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___tDepthImage_20), (void*)L_61);
		// tBodyIndexImage = new byte[sensorData.depthImageWidth * sensorData.depthImageHeight];
		SensorData_t889044994784020C5FA25311175FB3F8B715DD27* L_62 = __this->___sensorData_12;
		NullCheck(L_62);
		int32_t L_63 = L_62->___depthImageWidth_25;
		SensorData_t889044994784020C5FA25311175FB3F8B715DD27* L_64 = __this->___sensorData_12;
		NullCheck(L_64);
		int32_t L_65 = L_64->___depthImageHeight_26;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_66 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_multiply(L_63, L_65)));
		__this->___tBodyIndexImage_21 = L_66;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___tBodyIndexImage_21), (void*)L_66);
	}

IL_020a:
	{
		// colorTextureBuildMesh = KinectInterop.CreateRenderTexture(colorTextureBuildMesh, imageRes.x, imageRes.y, RenderTextureFormat.ARGB32);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_67 = __this->___colorTextureBuildMesh_16;
		int32_t L_68;
		L_68 = Vector2Int_get_x_mA2CACB1B6E6B5AD0CCC32B2CD2EDCE3ECEB50576_inline((&V_1), NULL);
		int32_t L_69;
		L_69 = Vector2Int_get_y_m48454163ECF0B463FB5A16A0C4FC4B14DB0768B3_inline((&V_1), NULL);
		il2cpp_codegen_runtime_class_init_inline(KinectInterop_t8231C68411373688AA650B978611F932EE5860F9_il2cpp_TypeInfo_var);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_70;
		L_70 = KinectInterop_CreateRenderTexture_m84068B60B5DE22E7D439F086D1312279950E7D5E(L_67, L_68, L_69, 0, NULL);
		__this->___colorTextureBuildMesh_16 = L_70;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___colorTextureBuildMesh_16), (void*)L_70);
		// colorTextureUpdateMesh = KinectInterop.CreateRenderTexture(colorTextureUpdateMesh, imageRes.x, imageRes.y, RenderTextureFormat.ARGB32);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_71 = __this->___colorTextureUpdateMesh_17;
		int32_t L_72;
		L_72 = Vector2Int_get_x_mA2CACB1B6E6B5AD0CCC32B2CD2EDCE3ECEB50576_inline((&V_1), NULL);
		int32_t L_73;
		L_73 = Vector2Int_get_y_m48454163ECF0B463FB5A16A0C4FC4B14DB0768B3_inline((&V_1), NULL);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_74;
		L_74 = KinectInterop_CreateRenderTexture_m84068B60B5DE22E7D439F086D1312279950E7D5E(L_71, L_72, L_73, 0, NULL);
		__this->___colorTextureUpdateMesh_17 = L_74;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___colorTextureUpdateMesh_17), (void*)L_74);
		// Renderer meshRenderer = GetComponent<Renderer>();
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_75;
		L_75 = Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8(__this, Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8_RuntimeMethod_var);
		V_2 = L_75;
		// if (meshRenderer && meshRenderer.material && meshRenderer.material.mainTexture == null)
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_76 = V_2;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_77;
		L_77 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_76, NULL);
		if (!L_77)
		{
			goto IL_028a;
		}
	}
	{
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_78 = V_2;
		NullCheck(L_78);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_79;
		L_79 = Renderer_get_material_m5BA2A00816C4CC66580D4B2E409CF10718C15656(L_78, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_80;
		L_80 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_79, NULL);
		if (!L_80)
		{
			goto IL_028a;
		}
	}
	{
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_81 = V_2;
		NullCheck(L_81);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_82;
		L_82 = Renderer_get_material_m5BA2A00816C4CC66580D4B2E409CF10718C15656(L_81, NULL);
		NullCheck(L_82);
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_83;
		L_83 = Material_get_mainTexture_mC6C6B860B44321F0342AEFA0DD7702384334F37D(L_82, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_84;
		L_84 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_83, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_84)
		{
			goto IL_028a;
		}
	}
	{
		// meshRenderer.material.mainTexture = colorTextureUpdateMesh; // sensorInt.pointCloudColorTexture;
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_85 = V_2;
		NullCheck(L_85);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_86;
		L_86 = Renderer_get_material_m5BA2A00816C4CC66580D4B2E409CF10718C15656(L_85, NULL);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_87 = __this->___colorTextureUpdateMesh_17;
		NullCheck(L_86);
		Material_set_mainTexture_m389E048BA9C81B603EBF36BD792212B296317AC0(L_86, L_87, NULL);
	}

IL_028a:
	{
		// imageWidth = imageRes.x;
		int32_t L_88;
		L_88 = Vector2Int_get_x_mA2CACB1B6E6B5AD0CCC32B2CD2EDCE3ECEB50576_inline((&V_1), NULL);
		__this->___imageWidth_28 = L_88;
		// imageHeight = imageRes.y;
		int32_t L_89;
		L_89 = Vector2Int_get_y_m48454163ECF0B463FB5A16A0C4FC4B14DB0768B3_inline((&V_1), NULL);
		__this->___imageHeight_29 = L_89;
		// int pointCount = imageWidth * imageHeight;
		int32_t L_90 = __this->___imageWidth_28;
		int32_t L_91 = __this->___imageHeight_29;
		V_3 = ((int32_t)il2cpp_codegen_multiply(L_90, L_91));
		// meshVertices = new Vector3[pointCount];
		int32_t L_92 = V_3;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_93 = (Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*)(Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*)SZArrayNew(Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C_il2cpp_TypeInfo_var, (uint32_t)L_92);
		__this->___meshVertices_31 = L_93;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___meshVertices_31), (void*)L_93);
		// meshIndices = new int[6 * pointCount];  // 2 triangles per vertex, last row and column excluded
		int32_t L_94 = V_3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_95 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_multiply(6, L_94)));
		__this->___meshIndices_32 = L_95;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___meshIndices_32), (void*)L_95);
		// meshVertUsed = new byte[pointCount];
		int32_t L_96 = V_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_97 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_96);
		__this->___meshVertUsed_33 = L_97;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___meshVertUsed_33), (void*)L_97);
		// spaceScale = kinectManager.GetSensorSpaceScale(sensorIndex);
		KinectManager_t6D168A1C710083948363282B0D862EDDFFD88211* L_98 = __this->___kinectManager_11;
		int32_t L_99 = __this->___sensorIndex_5;
		NullCheck(L_98);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_100;
		L_100 = KinectManager_GetSensorSpaceScale_m096BD92B11206702B2624831A40E3C8B5C6A49CB(L_98, L_99, NULL);
		__this->___spaceScale_14 = L_100;
		// spaceTable = sensorInt.pointCloudResolution == DepthSensorBase.PointCloudResolution.DepthCameraResolution ?
		//     sensorInt.GetDepthCameraSpaceTable(sensorData) : sensorInt.GetColorCameraSpaceTable(sensorData);
		DepthSensorBase_tB644BCAB82289DCDB9290A9B3A6972F0F13B0774* L_101 = __this->___sensorInt_13;
		NullCheck(L_101);
		int32_t L_102 = L_101->___pointCloudResolution_11;
		G_B16_0 = __this;
		if (!L_102)
		{
			G_B17_0 = __this;
			goto IL_0310;
		}
	}
	{
		DepthSensorBase_tB644BCAB82289DCDB9290A9B3A6972F0F13B0774* L_103 = __this->___sensorInt_13;
		SensorData_t889044994784020C5FA25311175FB3F8B715DD27* L_104 = __this->___sensorData_12;
		NullCheck(L_103);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_105;
		L_105 = VirtualFuncInvoker1< Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*, SensorData_t889044994784020C5FA25311175FB3F8B715DD27* >::Invoke(111 /* UnityEngine.Vector3[] com.rfilkov.kinect.DepthSensorBase::GetColorCameraSpaceTable(com.rfilkov.kinect.KinectInterop/SensorData) */, L_103, L_104);
		G_B18_0 = L_105;
		G_B18_1 = G_B16_0;
		goto IL_0321;
	}

IL_0310:
	{
		DepthSensorBase_tB644BCAB82289DCDB9290A9B3A6972F0F13B0774* L_106 = __this->___sensorInt_13;
		SensorData_t889044994784020C5FA25311175FB3F8B715DD27* L_107 = __this->___sensorData_12;
		NullCheck(L_106);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_108;
		L_108 = VirtualFuncInvoker1< Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*, SensorData_t889044994784020C5FA25311175FB3F8B715DD27* >::Invoke(110 /* UnityEngine.Vector3[] com.rfilkov.kinect.DepthSensorBase::GetDepthCameraSpaceTable(com.rfilkov.kinect.KinectInterop/SensorData) */, L_106, L_107);
		G_B18_0 = L_108;
		G_B18_1 = G_B17_0;
	}

IL_0321:
	{
		NullCheck(G_B18_1);
		G_B18_1->___spaceTable_30 = G_B18_0;
		Il2CppCodeGenWriteBarrier((void**)(&G_B18_1->___spaceTable_30), (void*)G_B18_0);
		// Vector2[] meshUv = new Vector2[pointCount];
		int32_t L_109 = V_3;
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_110 = (Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA*)(Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA*)SZArrayNew(Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA_il2cpp_TypeInfo_var, (uint32_t)L_109);
		V_4 = L_110;
		// for (int y = 0, i = 0; y < imageHeight; y++)
		V_5 = 0;
		// for (int y = 0, i = 0; y < imageHeight; y++)
		V_6 = 0;
		goto IL_0390;
	}

IL_0336:
	{
		// for (int x = 0; x < imageWidth; x++, i++)
		V_7 = 0;
		goto IL_0380;
	}

IL_033b:
	{
		// Vector2 imagePos = new Vector2(x, y);
		int32_t L_111 = V_7;
		int32_t L_112 = V_5;
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&V_8), ((float)L_111), ((float)L_112), NULL);
		// meshUv[i] = new Vector2(imagePos.x / imageWidth, imagePos.y / imageHeight);
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_113 = V_4;
		int32_t L_114 = V_6;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_115 = V_8;
		float L_116 = L_115.___x_0;
		int32_t L_117 = __this->___imageWidth_28;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_118 = V_8;
		float L_119 = L_118.___y_1;
		int32_t L_120 = __this->___imageHeight_29;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_121;
		memset((&L_121), 0, sizeof(L_121));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_121), ((float)(L_116/((float)L_117))), ((float)(L_119/((float)L_120))), /*hidden argument*/NULL);
		NullCheck(L_113);
		(L_113)->SetAt(static_cast<il2cpp_array_size_t>(L_114), (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7)L_121);
		// for (int x = 0; x < imageWidth; x++, i++)
		int32_t L_122 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add(L_122, 1));
		// for (int x = 0; x < imageWidth; x++, i++)
		int32_t L_123 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add(L_123, 1));
	}

IL_0380:
	{
		// for (int x = 0; x < imageWidth; x++, i++)
		int32_t L_124 = V_7;
		int32_t L_125 = __this->___imageWidth_28;
		if ((((int32_t)L_124) < ((int32_t)L_125)))
		{
			goto IL_033b;
		}
	}
	{
		// for (int y = 0, i = 0; y < imageHeight; y++)
		int32_t L_126 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_126, 1));
	}

IL_0390:
	{
		// for (int y = 0, i = 0; y < imageHeight; y++)
		int32_t L_127 = V_5;
		int32_t L_128 = __this->___imageHeight_29;
		if ((((int32_t)L_127) < ((int32_t)L_128)))
		{
			goto IL_0336;
		}
	}
	{
		// mesh.vertices = meshVertices;
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_129 = __this->___mesh_10;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_130 = __this->___meshVertices_31;
		NullCheck(L_129);
		Mesh_set_vertices_m5BB814D89E9ACA00DBF19F7D8E22CB73AC73FE5C(L_129, L_130, NULL);
		// mesh.SetIndices(meshIndices, MeshTopology.Triangles, 0);
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_131 = __this->___mesh_10;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_132 = __this->___meshIndices_32;
		NullCheck(L_131);
		Mesh_SetIndices_m2AE7ED76A6C77D218C37C011DDB948589FD45B97(L_131, L_132, 0, 0, NULL);
		// mesh.uv = meshUv;
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_133 = __this->___mesh_10;
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_134 = V_4;
		NullCheck(L_133);
		Mesh_set_uv_m6ED9C50E0DA8166DD48AC40FD6C828B9AD2E9617(L_133, L_134, NULL);
		// if (showAsPointCloud)
		bool L_135 = __this->___showAsPointCloud_7;
		if (!L_135)
		{
			goto IL_040d;
		}
	}
	{
		// meshIndices = new int[pointCount];
		int32_t L_136 = V_3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_137 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_136);
		__this->___meshIndices_32 = L_137;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___meshIndices_32), (void*)L_137);
		// for (int i = 0; i < pointCount; i++)
		V_9 = 0;
		goto IL_03f5;
	}

IL_03e4:
	{
		// meshIndices[i] = i;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_138 = __this->___meshIndices_32;
		int32_t L_139 = V_9;
		int32_t L_140 = V_9;
		NullCheck(L_138);
		(L_138)->SetAt(static_cast<il2cpp_array_size_t>(L_139), (int32_t)L_140);
		// for (int i = 0; i < pointCount; i++)
		int32_t L_141 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_add(L_141, 1));
	}

IL_03f5:
	{
		// for (int i = 0; i < pointCount; i++)
		int32_t L_142 = V_9;
		int32_t L_143 = V_3;
		if ((((int32_t)L_142) < ((int32_t)L_143)))
		{
			goto IL_03e4;
		}
	}
	{
		// mesh.SetIndices(meshIndices, MeshTopology.Points, 0);
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_144 = __this->___mesh_10;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_145 = __this->___meshIndices_32;
		NullCheck(L_144);
		Mesh_SetIndices_m2AE7ED76A6C77D218C37C011DDB948589FD45B97(L_144, L_145, 5, 0, NULL);
	}

IL_040d:
	{
		// bMeshInited = true;
		__this->___bMeshInited_34 = (bool)1;
	}

IL_0414:
	{
		// }
		return;
	}
}
// System.Void com.rfilkov.components.UserMeshRenderer::FinishMesh()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UserMeshRenderer_FinishMesh_mB2D05529B66E18588B6E2C8CA72BEF25034C7313 (UserMeshRenderer_tE896EB6D7C675E98F5AF9306C25AAB1EF96A7E2F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DepthSensorInterface_t2FD8203480BF13E04977ED112CA9D0B67DCA1053_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (sensorInt)
		DepthSensorBase_tB644BCAB82289DCDB9290A9B3A6972F0F13B0774* L_0 = __this->___sensorInt_13;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_0, NULL);
		if (!L_1)
		{
			goto IL_0055;
		}
	}
	{
		// if (sensorInt.pointCloudResolution == DepthSensorBase.PointCloudResolution.ColorCameraResolution)
		DepthSensorBase_tB644BCAB82289DCDB9290A9B3A6972F0F13B0774* L_2 = __this->___sensorInt_13;
		NullCheck(L_2);
		int32_t L_3 = L_2->___pointCloudResolution_11;
		if ((!(((uint32_t)L_3) == ((uint32_t)1))))
		{
			goto IL_0049;
		}
	}
	{
		// sensorData.sensorInterface.EnableColorCameraDepthFrame(sensorData, false);
		SensorData_t889044994784020C5FA25311175FB3F8B715DD27* L_4 = __this->___sensorData_12;
		NullCheck(L_4);
		RuntimeObject* L_5 = L_4->___sensorInterface_0;
		SensorData_t889044994784020C5FA25311175FB3F8B715DD27* L_6 = __this->___sensorData_12;
		NullCheck(L_5);
		InterfaceActionInvoker2< SensorData_t889044994784020C5FA25311175FB3F8B715DD27*, bool >::Invoke(43 /* System.Void com.rfilkov.kinect.DepthSensorInterface::EnableColorCameraDepthFrame(com.rfilkov.kinect.KinectInterop/SensorData,System.Boolean) */, DepthSensorInterface_t2FD8203480BF13E04977ED112CA9D0B67DCA1053_il2cpp_TypeInfo_var, L_5, L_6, (bool)0);
		// sensorData.sensorInterface.EnableColorCameraBodyIndexFrame(sensorData, false);
		SensorData_t889044994784020C5FA25311175FB3F8B715DD27* L_7 = __this->___sensorData_12;
		NullCheck(L_7);
		RuntimeObject* L_8 = L_7->___sensorInterface_0;
		SensorData_t889044994784020C5FA25311175FB3F8B715DD27* L_9 = __this->___sensorData_12;
		NullCheck(L_8);
		InterfaceActionInvoker2< SensorData_t889044994784020C5FA25311175FB3F8B715DD27*, bool >::Invoke(49 /* System.Void com.rfilkov.kinect.DepthSensorInterface::EnableColorCameraBodyIndexFrame(com.rfilkov.kinect.KinectInterop/SensorData,System.Boolean) */, DepthSensorInterface_t2FD8203480BF13E04977ED112CA9D0B67DCA1053_il2cpp_TypeInfo_var, L_8, L_9, (bool)0);
	}

IL_0049:
	{
		// sensorInt.pointCloudColorTexture = null;
		DepthSensorBase_tB644BCAB82289DCDB9290A9B3A6972F0F13B0774* L_10 = __this->___sensorInt_13;
		NullCheck(L_10);
		L_10->___pointCloudColorTexture_13 = (RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&L_10->___pointCloudColorTexture_13), (void*)(RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27*)NULL);
	}

IL_0055:
	{
		// if (colorTexture && colorTextureCreated)
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_11 = __this->___colorTexture_15;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_12;
		L_12 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_11, NULL);
		if (!L_12)
		{
			goto IL_007c;
		}
	}
	{
		bool L_13 = __this->___colorTextureCreated_18;
		if (!L_13)
		{
			goto IL_007c;
		}
	}
	{
		// colorTexture.Release();
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_14 = __this->___colorTexture_15;
		NullCheck(L_14);
		RenderTexture_Release_mE7399D6187A0E38945D2913D0FFB41247143AB1E(L_14, NULL);
		// colorTexture = null;
		__this->___colorTexture_15 = (RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___colorTexture_15), (void*)(RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27*)NULL);
	}

IL_007c:
	{
		// if (colorTextureBuildMesh)
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_15 = __this->___colorTextureBuildMesh_16;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_16;
		L_16 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_15, NULL);
		if (!L_16)
		{
			goto IL_009b;
		}
	}
	{
		// colorTextureBuildMesh.Release();
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_17 = __this->___colorTextureBuildMesh_16;
		NullCheck(L_17);
		RenderTexture_Release_mE7399D6187A0E38945D2913D0FFB41247143AB1E(L_17, NULL);
		// colorTextureBuildMesh = null;
		__this->___colorTextureBuildMesh_16 = (RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___colorTextureBuildMesh_16), (void*)(RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27*)NULL);
	}

IL_009b:
	{
		// if (colorTextureUpdateMesh)
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_18 = __this->___colorTextureUpdateMesh_17;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_19;
		L_19 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_18, NULL);
		if (!L_19)
		{
			goto IL_00ba;
		}
	}
	{
		// colorTextureUpdateMesh.Release();
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_20 = __this->___colorTextureUpdateMesh_17;
		NullCheck(L_20);
		RenderTexture_Release_mE7399D6187A0E38945D2913D0FFB41247143AB1E(L_20, NULL);
		// colorTextureUpdateMesh = null;
		__this->___colorTextureUpdateMesh_17 = (RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___colorTextureUpdateMesh_17), (void*)(RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27*)NULL);
	}

IL_00ba:
	{
		// spaceTable = null;
		__this->___spaceTable_30 = (Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___spaceTable_30), (void*)(Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*)NULL);
		// tDepthImage = null;
		__this->___tDepthImage_20 = (UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___tDepthImage_20), (void*)(UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83*)NULL);
		// tBodyIndexImage = null;
		__this->___tBodyIndexImage_21 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___tBodyIndexImage_21), (void*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)NULL);
		// meshVertices = null;
		__this->___meshVertices_31 = (Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___meshVertices_31), (void*)(Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*)NULL);
		// meshIndices = null;
		__this->___meshIndices_32 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___meshIndices_32), (void*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL);
		// meshVertUsed = null;
		__this->___meshVertUsed_33 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___meshVertUsed_33), (void*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)NULL);
		// bMeshInited = false;
		__this->___bMeshInited_34 = (bool)0;
		// }
		return;
	}
}
// System.Void com.rfilkov.components.UserMeshRenderer::UpdateMesh()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UserMeshRenderer_UpdateMesh_m4C1B5845CA899423379AC4B058C348B5A4062A4E (UserMeshRenderer_tE896EB6D7C675E98F5AF9306C25AAB1EF96A7E2F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisMeshCollider_tB525E4DDE383252364ED0BDD32CF2B53914EE455_mFC0F02CCD26A6A186031CF43E92D7B60EA1CC370_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DepthSensorInterface_t2FD8203480BF13E04977ED112CA9D0B67DCA1053_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KinectInterop_t8231C68411373688AA650B978611F932EE5860F9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint64_t V_0 = 0;
	uint64_t V_1 = 0;
	MeshCollider_tB525E4DDE383252364ED0BDD32CF2B53914EE455* V_2 = NULL;
	{
		// if (!bBuildMesh && (Time.time - lastMeshUpdateTime) >= updateMeshInterval)
		bool L_0 = __this->___bBuildMesh_37;
		if (L_0)
		{
			goto IL_00c3;
		}
	}
	{
		float L_1;
		L_1 = Time_get_time_m0BEE9AACD0723FE414465B77C9C64D12263675F3(NULL);
		float L_2 = __this->___lastMeshUpdateTime_23;
		float L_3 = __this->___updateMeshInterval_8;
		if ((!(((float)((float)il2cpp_codegen_subtract(L_1, L_2))) >= ((float)L_3))))
		{
			goto IL_00c3;
		}
	}
	{
		// lastMeshUpdateTime = Time.time;
		float L_4;
		L_4 = Time_get_time_m0BEE9AACD0723FE414465B77C9C64D12263675F3(NULL);
		__this->___lastMeshUpdateTime_23 = L_4;
		// Graphics.CopyTexture(colorTexture, colorTextureBuildMesh);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_5 = __this->___colorTexture_15;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_6 = __this->___colorTextureBuildMesh_16;
		il2cpp_codegen_runtime_class_init_inline(Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var);
		Graphics_CopyTexture_m34BA416A531684743117976772DD8B218441DB93(L_5, L_6, NULL);
		// if (bColorCamRes)
		bool L_7 = __this->___bColorCamRes_19;
		if (!L_7)
		{
			goto IL_008c;
		}
	}
	{
		// ulong tDepthFrameTime = 0;
		V_0 = ((int64_t)0);
		// sensorData.sensorInterface.GetColorCameraDepthFrame(sensorData, ref tDepthImage, ref tDepthFrameTime);
		SensorData_t889044994784020C5FA25311175FB3F8B715DD27* L_8 = __this->___sensorData_12;
		NullCheck(L_8);
		RuntimeObject* L_9 = L_8->___sensorInterface_0;
		SensorData_t889044994784020C5FA25311175FB3F8B715DD27* L_10 = __this->___sensorData_12;
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83** L_11 = (&__this->___tDepthImage_20);
		NullCheck(L_9);
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_12;
		L_12 = InterfaceFuncInvoker3< UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83*, SensorData_t889044994784020C5FA25311175FB3F8B715DD27*, UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83**, uint64_t* >::Invoke(44 /* System.UInt16[] com.rfilkov.kinect.DepthSensorInterface::GetColorCameraDepthFrame(com.rfilkov.kinect.KinectInterop/SensorData,System.UInt16[]&,System.UInt64&) */, DepthSensorInterface_t2FD8203480BF13E04977ED112CA9D0B67DCA1053_il2cpp_TypeInfo_var, L_9, L_10, L_11, (&V_0));
		// ulong tBiFrameTime = 0;
		V_1 = ((int64_t)0);
		// sensorData.sensorInterface.GetColorCameraBodyIndexFrame(sensorData, ref tBodyIndexImage, ref tBiFrameTime);
		SensorData_t889044994784020C5FA25311175FB3F8B715DD27* L_13 = __this->___sensorData_12;
		NullCheck(L_13);
		RuntimeObject* L_14 = L_13->___sensorInterface_0;
		SensorData_t889044994784020C5FA25311175FB3F8B715DD27* L_15 = __this->___sensorData_12;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031** L_16 = (&__this->___tBodyIndexImage_21);
		NullCheck(L_14);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_17;
		L_17 = InterfaceFuncInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, SensorData_t889044994784020C5FA25311175FB3F8B715DD27*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031**, uint64_t* >::Invoke(50 /* System.Byte[] com.rfilkov.kinect.DepthSensorInterface::GetColorCameraBodyIndexFrame(com.rfilkov.kinect.KinectInterop/SensorData,System.Byte[]&,System.UInt64&) */, DepthSensorInterface_t2FD8203480BF13E04977ED112CA9D0B67DCA1053_il2cpp_TypeInfo_var, L_14, L_15, L_16, (&V_1));
		goto IL_00bc;
	}

IL_008c:
	{
		// KinectInterop.CopyBytes(sensorData.depthImage, sizeof(ushort), tDepthImage, sizeof(ushort));
		SensorData_t889044994784020C5FA25311175FB3F8B715DD27* L_18 = __this->___sensorData_12;
		NullCheck(L_18);
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_19 = L_18->___depthImage_27;
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_20 = __this->___tDepthImage_20;
		il2cpp_codegen_runtime_class_init_inline(KinectInterop_t8231C68411373688AA650B978611F932EE5860F9_il2cpp_TypeInfo_var);
		KinectInterop_CopyBytes_m393995130F2D35AAAD0AA07536EA2E9848D61D9F((RuntimeArray*)L_19, 2, (RuntimeArray*)L_20, 2, NULL);
		// KinectInterop.CopyBytes(sensorData.bodyIndexImage, sizeof(byte), tBodyIndexImage, sizeof(byte));
		SensorData_t889044994784020C5FA25311175FB3F8B715DD27* L_21 = __this->___sensorData_12;
		NullCheck(L_21);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_22 = L_21->___bodyIndexImage_36;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_23 = __this->___tBodyIndexImage_21;
		KinectInterop_CopyBytes_m393995130F2D35AAAD0AA07536EA2E9848D61D9F((RuntimeArray*)L_22, 1, (RuntimeArray*)L_23, 1, NULL);
	}

IL_00bc:
	{
		// bBuildMesh = true;
		__this->___bBuildMesh_37 = (bool)1;
	}

IL_00c3:
	{
		// if (bUpdateMesh)
		bool L_24 = __this->___bUpdateMesh_38;
		if (!L_24)
		{
			goto IL_016b;
		}
	}
	{
		// Graphics.CopyTexture(colorTextureBuildMesh, colorTextureUpdateMesh);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_25 = __this->___colorTextureBuildMesh_16;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_26 = __this->___colorTextureUpdateMesh_17;
		il2cpp_codegen_runtime_class_init_inline(Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var);
		Graphics_CopyTexture_m34BA416A531684743117976772DD8B218441DB93(L_25, L_26, NULL);
		// mesh.vertices = meshVertices;
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_27 = __this->___mesh_10;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_28 = __this->___meshVertices_31;
		NullCheck(L_27);
		Mesh_set_vertices_m5BB814D89E9ACA00DBF19F7D8E22CB73AC73FE5C(L_27, L_28, NULL);
		// if (!showAsPointCloud)
		bool L_29 = __this->___showAsPointCloud_7;
		if (L_29)
		{
			goto IL_010b;
		}
	}
	{
		// mesh.SetIndices(meshIndices, MeshTopology.Triangles, 0);
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_30 = __this->___mesh_10;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_31 = __this->___meshIndices_32;
		NullCheck(L_30);
		Mesh_SetIndices_m2AE7ED76A6C77D218C37C011DDB948589FD45B97(L_30, L_31, 0, 0, NULL);
	}

IL_010b:
	{
		// mesh.RecalculateBounds();
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_32 = __this->___mesh_10;
		NullCheck(L_32);
		Mesh_RecalculateBounds_mA9B293F57C6CD298AE2D2DB19061FC23B05AB90B(L_32, NULL);
		// bUpdateMesh = false;
		__this->___bUpdateMesh_38 = (bool)0;
		// if (updateColliderInterval > 0 && (Time.time - lastColliderUpdateTime) >= updateColliderInterval)
		float L_33 = __this->___updateColliderInterval_9;
		if ((!(((float)L_33) > ((float)(0.0f)))))
		{
			goto IL_016b;
		}
	}
	{
		float L_34;
		L_34 = Time_get_time_m0BEE9AACD0723FE414465B77C9C64D12263675F3(NULL);
		float L_35 = __this->___lastColliderUpdateTime_24;
		float L_36 = __this->___updateColliderInterval_9;
		if ((!(((float)((float)il2cpp_codegen_subtract(L_34, L_35))) >= ((float)L_36))))
		{
			goto IL_016b;
		}
	}
	{
		// lastColliderUpdateTime = Time.time;
		float L_37;
		L_37 = Time_get_time_m0BEE9AACD0723FE414465B77C9C64D12263675F3(NULL);
		__this->___lastColliderUpdateTime_24 = L_37;
		// MeshCollider meshCollider = GetComponent<MeshCollider>();
		MeshCollider_tB525E4DDE383252364ED0BDD32CF2B53914EE455* L_38;
		L_38 = Component_GetComponent_TisMeshCollider_tB525E4DDE383252364ED0BDD32CF2B53914EE455_mFC0F02CCD26A6A186031CF43E92D7B60EA1CC370(__this, Component_GetComponent_TisMeshCollider_tB525E4DDE383252364ED0BDD32CF2B53914EE455_mFC0F02CCD26A6A186031CF43E92D7B60EA1CC370_RuntimeMethod_var);
		V_2 = L_38;
		// if (meshCollider)
		MeshCollider_tB525E4DDE383252364ED0BDD32CF2B53914EE455* L_39 = V_2;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_40;
		L_40 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_39, NULL);
		if (!L_40)
		{
			goto IL_016b;
		}
	}
	{
		// meshCollider.sharedMesh = null;
		MeshCollider_tB525E4DDE383252364ED0BDD32CF2B53914EE455* L_41 = V_2;
		NullCheck(L_41);
		MeshCollider_set_sharedMesh_m05F87B9AC04139285EBBCC159F77B51C6940E79C(L_41, (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4*)NULL, NULL);
		// meshCollider.sharedMesh = mesh;
		MeshCollider_tB525E4DDE383252364ED0BDD32CF2B53914EE455* L_42 = V_2;
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_43 = __this->___mesh_10;
		NullCheck(L_42);
		MeshCollider_set_sharedMesh_m05F87B9AC04139285EBBCC159F77B51C6940E79C(L_42, L_43, NULL);
	}

IL_016b:
	{
		// }
		return;
	}
}
// System.Void com.rfilkov.components.UserMeshRenderer::BuildMesh()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UserMeshRenderer_BuildMesh_m0DF5C3034F416B9AE30F590C3FD57594CA399DA9 (UserMeshRenderer_tE896EB6D7C675E98F5AF9306C25AAB1EF96A7E2F* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	uint16_t V_7 = 0;
	uint8_t V_8 = 0x0;
	bool V_9 = false;
	bool V_10 = false;
	float V_11 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_12;
	memset((&V_12), 0, sizeof(V_12));
	int32_t V_13 = 0;
	uint16_t V_14 = 0;
	int32_t V_15 = 0;
	uint16_t V_16 = 0;
	int32_t V_17 = 0;
	uint16_t V_18 = 0;
	int32_t V_19 = 0;
	uint16_t V_20 = 0;
	uint8_t V_21 = 0x0;
	uint8_t V_22 = 0x0;
	uint8_t V_23 = 0x0;
	float V_24 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_25;
	memset((&V_25), 0, sizeof(V_25));
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	int32_t G_B14_0 = 0;
	int32_t G_B17_0 = 0;
	int32_t G_B21_0 = 0;
	int32_t G_B25_0 = 0;
	int32_t G_B33_0 = 0;
	int32_t G_B36_0 = 0;
	int32_t G_B39_0 = 0;
	int32_t G_B42_0 = 0;
	int32_t G_B44_0 = 0;
	int32_t G_B43_0 = 0;
	int32_t G_B45_0 = 0;
	int32_t G_B45_1 = 0;
	int32_t G_B47_0 = 0;
	int32_t G_B46_0 = 0;
	int32_t G_B48_0 = 0;
	int32_t G_B48_1 = 0;
	int32_t G_B55_0 = 0;
	int32_t G_B59_0 = 0;
	int32_t G_B56_0 = 0;
	int32_t G_B57_0 = 0;
	int32_t G_B58_0 = 0;
	{
		goto IL_047c;
	}

IL_0005:
	{
		// if(!bUpdateMesh)
		bool L_0 = __this->___bUpdateMesh_38;
		if (L_0)
		{
			goto IL_047c;
		}
	}
	{
		// if (bMeshInited && sensorData.depthImage != null && lastSpaceCoordsTime != sensorData.lastDepthFrameTime)
		bool L_1 = __this->___bMeshInited_34;
		if (!L_1)
		{
			goto IL_0476;
		}
	}
	{
		SensorData_t889044994784020C5FA25311175FB3F8B715DD27* L_2 = __this->___sensorData_12;
		NullCheck(L_2);
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_3 = L_2->___depthImage_27;
		if (!L_3)
		{
			goto IL_0476;
		}
	}
	{
		uint64_t L_4 = __this->___lastSpaceCoordsTime_22;
		SensorData_t889044994784020C5FA25311175FB3F8B715DD27* L_5 = __this->___sensorData_12;
		NullCheck(L_5);
		uint64_t L_6 = L_5->___lastDepthFrameTime_28;
		if ((((int64_t)L_4) == ((int64_t)L_6)))
		{
			goto IL_0476;
		}
	}
	{
		// if (bBuildMesh)
		bool L_7 = __this->___bBuildMesh_37;
		if (!L_7)
		{
			goto IL_0476;
		}
	}
	{
		// lastSpaceCoordsTime = sensorData.lastDepthFrameTime;
		SensorData_t889044994784020C5FA25311175FB3F8B715DD27* L_8 = __this->___sensorData_12;
		NullCheck(L_8);
		uint64_t L_9 = L_8->___lastDepthFrameTime_28;
		__this->___lastSpaceCoordsTime_22 = L_9;
	}
	try
	{// begin try (depth: 1)
		{
			// int imageWidth1 = imageWidth - 1, imageHeight1 = imageHeight - 1;
			int32_t L_10 = __this->___imageWidth_28;
			V_0 = ((int32_t)il2cpp_codegen_subtract(L_10, 1));
			// int imageWidth1 = imageWidth - 1, imageHeight1 = imageHeight - 1;
			int32_t L_11 = __this->___imageHeight_29;
			V_1 = ((int32_t)il2cpp_codegen_subtract(L_11, 1));
			// int userPosDepth = (int)(userBodyPos.z * 1000f);
			Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_12 = (&__this->___userBodyPos_27);
			float L_13 = L_12->___z_4;
			V_2 = il2cpp_codegen_cast_double_to_int<int32_t>(((float)il2cpp_codegen_multiply(L_13, (1000.0f))));
			// if (!showAsPointCloud)
			bool L_14 = __this->___showAsPointCloud_7;
			if (L_14)
			{
				goto IL_00b2_1;
			}
		}
		{
			// System.Array.Clear(meshIndices, 0, meshIndices.Length);
			Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_15 = __this->___meshIndices_32;
			Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_16 = __this->___meshIndices_32;
			NullCheck(L_16);
			Array_Clear_m48B57EC27CADC3463CA98A33373D557DA587FF1B((RuntimeArray*)L_15, 0, ((int32_t)(((RuntimeArray*)L_16)->max_length)), NULL);
			// System.Array.Clear(meshVertUsed, 0, meshVertUsed.Length);
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_17 = __this->___meshVertUsed_33;
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_18 = __this->___meshVertUsed_33;
			NullCheck(L_18);
			Array_Clear_m48B57EC27CADC3463CA98A33373D557DA587FF1B((RuntimeArray*)L_17, 0, ((int32_t)(((RuntimeArray*)L_18)->max_length)), NULL);
		}

IL_00b2_1:
		{
			// for (int y = 0, di = 0, ti = 0; y < imageHeight; y++)
			V_3 = 0;
			// for (int y = 0, di = 0, ti = 0; y < imageHeight; y++)
			V_4 = 0;
			// for (int y = 0, di = 0, ti = 0; y < imageHeight; y++)
			V_5 = 0;
			goto IL_0453_1;
		}

IL_00bf_1:
		{
			// for (int x = 0; x < imageWidth; x++, di++, ti += 6)
			V_6 = 0;
			goto IL_0442_1;
		}

IL_00c7_1:
		{
			// ushort depth = tDepthImage != null ? tDepthImage[di] : (ushort)0;
			UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_19 = __this->___tDepthImage_20;
			if (L_19)
			{
				goto IL_00d2_1;
			}
		}
		{
			G_B14_0 = 0;
			goto IL_00db_1;
		}

IL_00d2_1:
		{
			UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_20 = __this->___tDepthImage_20;
			int32_t L_21 = V_4;
			NullCheck(L_20);
			int32_t L_22 = L_21;
			uint16_t L_23 = (L_20)->GetAt(static_cast<il2cpp_array_size_t>(L_22));
			G_B14_0 = ((int32_t)(L_23));
		}

IL_00db_1:
		{
			V_7 = (uint16_t)G_B14_0;
			// byte bodyIndex = tBodyIndexImage != null ? tBodyIndexImage[di] : (byte)0;
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_24 = __this->___tBodyIndexImage_21;
			if (L_24)
			{
				goto IL_00e8_1;
			}
		}
		{
			G_B17_0 = 0;
			goto IL_00f1_1;
		}

IL_00e8_1:
		{
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_25 = __this->___tBodyIndexImage_21;
			int32_t L_26 = V_4;
			NullCheck(L_25);
			int32_t L_27 = L_26;
			uint8_t L_28 = (L_25)->GetAt(static_cast<il2cpp_array_size_t>(L_27));
			G_B17_0 = ((int32_t)(L_28));
		}

IL_00f1_1:
		{
			V_8 = (uint8_t)G_B17_0;
			// bool isValidBodyPixel = userId != 0 && bodyIndex == userBodyIndex && Mathf.Abs(depth - userPosDepth) <= maxPosDistMm;
			uint64_t L_29 = __this->___userId_25;
			if (!L_29)
			{
				goto IL_011a_1;
			}
		}
		{
			uint8_t L_30 = V_8;
			uint8_t L_31 = __this->___userBodyIndex_26;
			if ((!(((uint32_t)L_30) == ((uint32_t)L_31))))
			{
				goto IL_011a_1;
			}
		}
		{
			uint16_t L_32 = V_7;
			int32_t L_33 = V_2;
			int32_t L_34;
			L_34 = Mathf_Abs_mEF48B2D15BEC6663A575693F563C6DC42C8135AE_inline(((int32_t)il2cpp_codegen_subtract((int32_t)L_32, L_33)), NULL);
			G_B21_0 = ((((int32_t)((((int32_t)L_34) > ((int32_t)((int32_t)1000)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
			goto IL_011b_1;
		}

IL_011a_1:
		{
			G_B21_0 = 0;
		}

IL_011b_1:
		{
			V_9 = (bool)G_B21_0;
			// bool bVertexSet = false;
			V_10 = (bool)0;
			// if (isValidBodyPixel)
			bool L_35 = V_9;
			if (!L_35)
			{
				goto IL_039f_1;
			}
		}
		{
			// float fDepth = (float)depth * 0.001f;
			uint16_t L_36 = V_7;
			V_11 = ((float)il2cpp_codegen_multiply(((float)L_36), (0.00100000005f)));
			// Vector3 vVertex = new Vector3(spaceTable[di].x * fDepth * spaceScale.x, spaceTable[di].y * fDepth * spaceScale.y, fDepth);
			Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_37 = __this->___spaceTable_30;
			int32_t L_38 = V_4;
			NullCheck(L_37);
			float L_39 = ((L_37)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_38)))->___x_2;
			float L_40 = V_11;
			Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_41 = (&__this->___spaceScale_14);
			float L_42 = L_41->___x_2;
			Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_43 = __this->___spaceTable_30;
			int32_t L_44 = V_4;
			NullCheck(L_43);
			float L_45 = ((L_43)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_44)))->___y_3;
			float L_46 = V_11;
			Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_47 = (&__this->___spaceScale_14);
			float L_48 = L_47->___y_3;
			float L_49 = V_11;
			Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&V_12), ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(L_39, L_40)), L_42)), ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(L_45, L_46)), L_48)), L_49, NULL);
			// bool bUsedVertex = !showAsPointCloud && meshVertUsed[di] != 0;
			bool L_50 = __this->___showAsPointCloud_7;
			if (L_50)
			{
				goto IL_0193_1;
			}
		}
		{
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_51 = __this->___meshVertUsed_33;
			int32_t L_52 = V_4;
			NullCheck(L_51);
			int32_t L_53 = L_52;
			uint8_t L_54 = (L_51)->GetAt(static_cast<il2cpp_array_size_t>(L_53));
			G_B25_0 = ((!(((uint32_t)L_54) <= ((uint32_t)0)))? 1 : 0);
			goto IL_0194_1;
		}

IL_0193_1:
		{
			G_B25_0 = 0;
		}

IL_0194_1:
		{
			// if (bUsedVertex || isValidBodyPixel)
			bool L_55 = V_9;
			if (!((int32_t)(G_B25_0|(int32_t)L_55)))
			{
				goto IL_039f_1;
			}
		}
		{
			// meshVertices[di] = vVertex;
			Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_56 = __this->___meshVertices_31;
			int32_t L_57 = V_4;
			Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_58 = V_12;
			NullCheck(L_56);
			(L_56)->SetAt(static_cast<il2cpp_array_size_t>(L_57), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_58);
			// if (!showAsPointCloud)
			bool L_59 = __this->___showAsPointCloud_7;
			if (L_59)
			{
				goto IL_039c_1;
			}
		}
		{
			// meshVertUsed[di] = 1;
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_60 = __this->___meshVertUsed_33;
			int32_t L_61 = V_4;
			NullCheck(L_60);
			(L_60)->SetAt(static_cast<il2cpp_array_size_t>(L_61), (uint8_t)1);
			// if (isValidBodyPixel && x < imageWidth1 && y < imageHeight1)
			bool L_62 = V_9;
			if (!L_62)
			{
				goto IL_039c_1;
			}
		}
		{
			int32_t L_63 = V_6;
			int32_t L_64 = V_0;
			if ((((int32_t)L_63) >= ((int32_t)L_64)))
			{
				goto IL_039c_1;
			}
		}
		{
			int32_t L_65 = V_3;
			int32_t L_66 = V_1;
			if ((((int32_t)L_65) >= ((int32_t)L_66)))
			{
				goto IL_039c_1;
			}
		}
		{
			// int tl = di; ushort tld = depth;
			int32_t L_67 = V_4;
			V_13 = L_67;
			// int tl = di; ushort tld = depth;
			uint16_t L_68 = V_7;
			V_14 = L_68;
			// int tr = tl + 1; ushort trd = tDepthImage != null ? tDepthImage[tr] : (ushort)0;
			int32_t L_69 = V_13;
			V_15 = ((int32_t)il2cpp_codegen_add(L_69, 1));
			// int tr = tl + 1; ushort trd = tDepthImage != null ? tDepthImage[tr] : (ushort)0;
			UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_70 = __this->___tDepthImage_20;
			if (L_70)
			{
				goto IL_01ef_1;
			}
		}
		{
			G_B33_0 = 0;
			goto IL_01f8_1;
		}

IL_01ef_1:
		{
			UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_71 = __this->___tDepthImage_20;
			int32_t L_72 = V_15;
			NullCheck(L_71);
			int32_t L_73 = L_72;
			uint16_t L_74 = (L_71)->GetAt(static_cast<il2cpp_array_size_t>(L_73));
			G_B33_0 = ((int32_t)(L_74));
		}

IL_01f8_1:
		{
			V_16 = (uint16_t)G_B33_0;
			// int bl = tl + imageWidth; ushort bld = tDepthImage != null ? tDepthImage[bl] : (ushort)0;
			int32_t L_75 = V_13;
			int32_t L_76 = __this->___imageWidth_28;
			V_17 = ((int32_t)il2cpp_codegen_add(L_75, L_76));
			// int bl = tl + imageWidth; ushort bld = tDepthImage != null ? tDepthImage[bl] : (ushort)0;
			UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_77 = __this->___tDepthImage_20;
			if (L_77)
			{
				goto IL_0210_1;
			}
		}
		{
			G_B36_0 = 0;
			goto IL_0219_1;
		}

IL_0210_1:
		{
			UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_78 = __this->___tDepthImage_20;
			int32_t L_79 = V_17;
			NullCheck(L_78);
			int32_t L_80 = L_79;
			uint16_t L_81 = (L_78)->GetAt(static_cast<il2cpp_array_size_t>(L_80));
			G_B36_0 = ((int32_t)(L_81));
		}

IL_0219_1:
		{
			V_18 = (uint16_t)G_B36_0;
			// int br = bl + 1; ushort brd = tDepthImage != null ? tDepthImage[br] : (ushort)0;
			int32_t L_82 = V_17;
			V_19 = ((int32_t)il2cpp_codegen_add(L_82, 1));
			// int br = bl + 1; ushort brd = tDepthImage != null ? tDepthImage[br] : (ushort)0;
			UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_83 = __this->___tDepthImage_20;
			if (L_83)
			{
				goto IL_022c_1;
			}
		}
		{
			G_B39_0 = 0;
			goto IL_0235_1;
		}

IL_022c_1:
		{
			UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_84 = __this->___tDepthImage_20;
			int32_t L_85 = V_19;
			NullCheck(L_84);
			int32_t L_86 = L_85;
			uint16_t L_87 = (L_84)->GetAt(static_cast<il2cpp_array_size_t>(L_86));
			G_B39_0 = ((int32_t)(L_87));
		}

IL_0235_1:
		{
			V_20 = (uint16_t)G_B39_0;
			// byte trbi = tBodyIndexImage != null ? tBodyIndexImage[tr] : (byte)0;
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_88 = __this->___tBodyIndexImage_21;
			if (L_88)
			{
				goto IL_0242_1;
			}
		}
		{
			G_B42_0 = 0;
			goto IL_024b_1;
		}

IL_0242_1:
		{
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_89 = __this->___tBodyIndexImage_21;
			int32_t L_90 = V_15;
			NullCheck(L_89);
			int32_t L_91 = L_90;
			uint8_t L_92 = (L_89)->GetAt(static_cast<il2cpp_array_size_t>(L_91));
			G_B42_0 = ((int32_t)(L_92));
		}

IL_024b_1:
		{
			// byte blbi = tBodyIndexImage != null ? tBodyIndexImage[bl] : (byte)0;
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_93 = __this->___tBodyIndexImage_21;
			G_B43_0 = G_B42_0;
			if (L_93)
			{
				G_B44_0 = G_B42_0;
				goto IL_0256_1;
			}
		}
		{
			G_B45_0 = 0;
			G_B45_1 = G_B43_0;
			goto IL_025f_1;
		}

IL_0256_1:
		{
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_94 = __this->___tBodyIndexImage_21;
			int32_t L_95 = V_17;
			NullCheck(L_94);
			int32_t L_96 = L_95;
			uint8_t L_97 = (L_94)->GetAt(static_cast<il2cpp_array_size_t>(L_96));
			G_B45_0 = ((int32_t)(L_97));
			G_B45_1 = G_B44_0;
		}

IL_025f_1:
		{
			V_21 = (uint8_t)G_B45_0;
			// byte brbi = tBodyIndexImage != null ? tBodyIndexImage[br] : (byte)0;
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_98 = __this->___tBodyIndexImage_21;
			G_B46_0 = G_B45_1;
			if (L_98)
			{
				G_B47_0 = G_B45_1;
				goto IL_026c_1;
			}
		}
		{
			G_B48_0 = 0;
			G_B48_1 = G_B46_0;
			goto IL_0275_1;
		}

IL_026c_1:
		{
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_99 = __this->___tBodyIndexImage_21;
			int32_t L_100 = V_19;
			NullCheck(L_99);
			int32_t L_101 = L_100;
			uint8_t L_102 = (L_99)->GetAt(static_cast<il2cpp_array_size_t>(L_101));
			G_B48_0 = ((int32_t)(L_102));
			G_B48_1 = G_B47_0;
		}

IL_0275_1:
		{
			V_22 = (uint8_t)G_B48_0;
			// bool isValidBodyQuad =
			//     trbi == userBodyIndex && Mathf.Abs(trd - userPosDepth) <= maxPosDistMm &&
			//     blbi == userBodyIndex && Mathf.Abs(bld - userPosDepth) <= maxPosDistMm &&
			//     brbi == userBodyIndex && Mathf.Abs(brd - userPosDepth) <= maxPosDistMm;
			uint8_t L_103 = __this->___userBodyIndex_26;
			if ((!(((uint32_t)G_B48_1) == ((uint32_t)L_103))))
			{
				goto IL_02c8_1;
			}
		}
		{
			uint16_t L_104 = V_16;
			int32_t L_105 = V_2;
			int32_t L_106;
			L_106 = Mathf_Abs_mEF48B2D15BEC6663A575693F563C6DC42C8135AE_inline(((int32_t)il2cpp_codegen_subtract((int32_t)L_104, L_105)), NULL);
			if ((((int32_t)L_106) > ((int32_t)((int32_t)1000))))
			{
				goto IL_02c8_1;
			}
		}
		{
			uint8_t L_107 = V_21;
			uint8_t L_108 = __this->___userBodyIndex_26;
			if ((!(((uint32_t)L_107) == ((uint32_t)L_108))))
			{
				goto IL_02c8_1;
			}
		}
		{
			uint16_t L_109 = V_18;
			int32_t L_110 = V_2;
			int32_t L_111;
			L_111 = Mathf_Abs_mEF48B2D15BEC6663A575693F563C6DC42C8135AE_inline(((int32_t)il2cpp_codegen_subtract((int32_t)L_109, L_110)), NULL);
			if ((((int32_t)L_111) > ((int32_t)((int32_t)1000))))
			{
				goto IL_02c8_1;
			}
		}
		{
			uint8_t L_112 = V_22;
			uint8_t L_113 = __this->___userBodyIndex_26;
			if ((!(((uint32_t)L_112) == ((uint32_t)L_113))))
			{
				goto IL_02c8_1;
			}
		}
		{
			uint16_t L_114 = V_20;
			int32_t L_115 = V_2;
			int32_t L_116;
			L_116 = Mathf_Abs_mEF48B2D15BEC6663A575693F563C6DC42C8135AE_inline(((int32_t)il2cpp_codegen_subtract((int32_t)L_114, L_115)), NULL);
			G_B55_0 = ((((int32_t)((((int32_t)L_116) > ((int32_t)((int32_t)1000)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
			goto IL_02c9_1;
		}

IL_02c8_1:
		{
			G_B55_0 = 0;
		}

IL_02c9_1:
		{
			// if (isValidBodyQuad &&
			//     Mathf.Abs(trd - tld) < maxDistMm && Mathf.Abs(bld - tld) < maxDistMm)
			int32_t L_117 = G_B55_0;
			G_B56_0 = L_117;
			if (!L_117)
			{
				G_B59_0 = L_117;
				goto IL_032b_1;
			}
		}
		{
			uint16_t L_118 = V_16;
			uint16_t L_119 = V_14;
			int32_t L_120;
			L_120 = Mathf_Abs_mEF48B2D15BEC6663A575693F563C6DC42C8135AE_inline(((int32_t)il2cpp_codegen_subtract((int32_t)L_118, (int32_t)L_119)), NULL);
			G_B57_0 = G_B56_0;
			if ((((int32_t)L_120) >= ((int32_t)((int32_t)200))))
			{
				G_B59_0 = G_B56_0;
				goto IL_032b_1;
			}
		}
		{
			uint16_t L_121 = V_18;
			uint16_t L_122 = V_14;
			int32_t L_123;
			L_123 = Mathf_Abs_mEF48B2D15BEC6663A575693F563C6DC42C8135AE_inline(((int32_t)il2cpp_codegen_subtract((int32_t)L_121, (int32_t)L_122)), NULL);
			G_B58_0 = G_B57_0;
			if ((((int32_t)L_123) >= ((int32_t)((int32_t)200))))
			{
				G_B59_0 = G_B57_0;
				goto IL_032b_1;
			}
		}
		{
			// meshIndices[ti] = bl;
			Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_124 = __this->___meshIndices_32;
			int32_t L_125 = V_5;
			int32_t L_126 = V_17;
			NullCheck(L_124);
			(L_124)->SetAt(static_cast<il2cpp_array_size_t>(L_125), (int32_t)L_126);
			// meshIndices[ti + 1] = tr;
			Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_127 = __this->___meshIndices_32;
			int32_t L_128 = V_5;
			int32_t L_129 = V_15;
			NullCheck(L_127);
			(L_127)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_128, 1))), (int32_t)L_129);
			// meshIndices[ti + 2] = tl;
			Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_130 = __this->___meshIndices_32;
			int32_t L_131 = V_5;
			int32_t L_132 = V_13;
			NullCheck(L_130);
			(L_130)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_131, 2))), (int32_t)L_132);
			// meshVertUsed[tr] = meshVertUsed[bl] = 1;
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_133 = __this->___meshVertUsed_33;
			int32_t L_134 = V_15;
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_135 = __this->___meshVertUsed_33;
			int32_t L_136 = V_17;
			int32_t L_137 = 1;
			V_23 = (uint8_t)L_137;
			NullCheck(L_135);
			(L_135)->SetAt(static_cast<il2cpp_array_size_t>(L_136), (uint8_t)L_137);
			uint8_t L_138 = V_23;
			NullCheck(L_133);
			(L_133)->SetAt(static_cast<il2cpp_array_size_t>(L_134), (uint8_t)L_138);
			G_B59_0 = G_B58_0;
		}

IL_032b_1:
		{
			// if (isValidBodyQuad &&
			//     Mathf.Abs(trd - bld) < maxDistMm && Mathf.Abs(brd - bld) < maxDistMm)
			if (!G_B59_0)
			{
				goto IL_039c_1;
			}
		}
		{
			uint16_t L_139 = V_16;
			uint16_t L_140 = V_18;
			int32_t L_141;
			L_141 = Mathf_Abs_mEF48B2D15BEC6663A575693F563C6DC42C8135AE_inline(((int32_t)il2cpp_codegen_subtract((int32_t)L_139, (int32_t)L_140)), NULL);
			if ((((int32_t)L_141) >= ((int32_t)((int32_t)200))))
			{
				goto IL_039c_1;
			}
		}
		{
			uint16_t L_142 = V_20;
			uint16_t L_143 = V_18;
			int32_t L_144;
			L_144 = Mathf_Abs_mEF48B2D15BEC6663A575693F563C6DC42C8135AE_inline(((int32_t)il2cpp_codegen_subtract((int32_t)L_142, (int32_t)L_143)), NULL);
			if ((((int32_t)L_144) >= ((int32_t)((int32_t)200))))
			{
				goto IL_039c_1;
			}
		}
		{
			// meshIndices[ti + 3] = br;
			Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_145 = __this->___meshIndices_32;
			int32_t L_146 = V_5;
			int32_t L_147 = V_19;
			NullCheck(L_145);
			(L_145)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_146, 3))), (int32_t)L_147);
			// meshIndices[ti + 4] = tr;
			Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_148 = __this->___meshIndices_32;
			int32_t L_149 = V_5;
			int32_t L_150 = V_15;
			NullCheck(L_148);
			(L_148)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_149, 4))), (int32_t)L_150);
			// meshIndices[ti + 5] = bl;
			Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_151 = __this->___meshIndices_32;
			int32_t L_152 = V_5;
			int32_t L_153 = V_17;
			NullCheck(L_151);
			(L_151)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_152, 5))), (int32_t)L_153);
			// meshVertUsed[bl] = meshVertUsed[tr] = meshVertUsed[br] = 1;
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_154 = __this->___meshVertUsed_33;
			int32_t L_155 = V_17;
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_156 = __this->___meshVertUsed_33;
			int32_t L_157 = V_15;
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_158 = __this->___meshVertUsed_33;
			int32_t L_159 = V_19;
			int32_t L_160 = 1;
			V_23 = (uint8_t)L_160;
			NullCheck(L_158);
			(L_158)->SetAt(static_cast<il2cpp_array_size_t>(L_159), (uint8_t)L_160);
			uint8_t L_161 = V_23;
			uint8_t L_162 = L_161;
			V_23 = L_162;
			NullCheck(L_156);
			(L_156)->SetAt(static_cast<il2cpp_array_size_t>(L_157), (uint8_t)L_162);
			uint8_t L_163 = V_23;
			NullCheck(L_154);
			(L_154)->SetAt(static_cast<il2cpp_array_size_t>(L_155), (uint8_t)L_163);
		}

IL_039c_1:
		{
			// bVertexSet = true;
			V_10 = (bool)1;
		}

IL_039f_1:
		{
			// if (!bVertexSet)
			bool L_164 = V_10;
			if (L_164)
			{
				goto IL_0430_1;
			}
		}
		{
			// meshVertices[di] = Vector3.zero;
			Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_165 = __this->___meshVertices_31;
			int32_t L_166 = V_4;
			Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_167;
			L_167 = Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline(NULL);
			NullCheck(L_165);
			(L_165)->SetAt(static_cast<il2cpp_array_size_t>(L_166), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_167);
			// if (!showAsPointCloud)
			bool L_168 = __this->___showAsPointCloud_7;
			if (L_168)
			{
				goto IL_0430_1;
			}
		}
		{
			// if (meshVertUsed[di] != 0)
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_169 = __this->___meshVertUsed_33;
			int32_t L_170 = V_4;
			NullCheck(L_169);
			int32_t L_171 = L_170;
			uint8_t L_172 = (L_169)->GetAt(static_cast<il2cpp_array_size_t>(L_171));
			if (!L_172)
			{
				goto IL_0430_1;
			}
		}
		{
			// float fDepth = (float)depth * 0.001f;
			uint16_t L_173 = V_7;
			V_24 = ((float)il2cpp_codegen_multiply(((float)L_173), (0.00100000005f)));
			// Vector3 vVertex = new Vector3(spaceTable[di].x * fDepth * spaceScale.x, spaceTable[di].y * fDepth * spaceScale.y, fDepth);
			Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_174 = __this->___spaceTable_30;
			int32_t L_175 = V_4;
			NullCheck(L_174);
			float L_176 = ((L_174)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_175)))->___x_2;
			float L_177 = V_24;
			Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_178 = (&__this->___spaceScale_14);
			float L_179 = L_178->___x_2;
			Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_180 = __this->___spaceTable_30;
			int32_t L_181 = V_4;
			NullCheck(L_180);
			float L_182 = ((L_180)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_181)))->___y_3;
			float L_183 = V_24;
			Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_184 = (&__this->___spaceScale_14);
			float L_185 = L_184->___y_3;
			float L_186 = V_24;
			Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&V_25), ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(L_176, L_177)), L_179)), ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(L_182, L_183)), L_185)), L_186, NULL);
			// meshVertices[di] = vVertex;
			Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_187 = __this->___meshVertices_31;
			int32_t L_188 = V_4;
			Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_189 = V_25;
			NullCheck(L_187);
			(L_187)->SetAt(static_cast<il2cpp_array_size_t>(L_188), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_189);
		}

IL_0430_1:
		{
			// for (int x = 0; x < imageWidth; x++, di++, ti += 6)
			int32_t L_190 = V_6;
			V_6 = ((int32_t)il2cpp_codegen_add(L_190, 1));
			// for (int x = 0; x < imageWidth; x++, di++, ti += 6)
			int32_t L_191 = V_4;
			V_4 = ((int32_t)il2cpp_codegen_add(L_191, 1));
			// for (int x = 0; x < imageWidth; x++, di++, ti += 6)
			int32_t L_192 = V_5;
			V_5 = ((int32_t)il2cpp_codegen_add(L_192, 6));
		}

IL_0442_1:
		{
			// for (int x = 0; x < imageWidth; x++, di++, ti += 6)
			int32_t L_193 = V_6;
			int32_t L_194 = __this->___imageWidth_28;
			if ((((int32_t)L_193) < ((int32_t)L_194)))
			{
				goto IL_00c7_1;
			}
		}
		{
			// for (int y = 0, di = 0, ti = 0; y < imageHeight; y++)
			int32_t L_195 = V_3;
			V_3 = ((int32_t)il2cpp_codegen_add(L_195, 1));
		}

IL_0453_1:
		{
			// for (int y = 0, di = 0, ti = 0; y < imageHeight; y++)
			int32_t L_196 = V_3;
			int32_t L_197 = __this->___imageHeight_29;
			if ((((int32_t)L_196) < ((int32_t)L_197)))
			{
				goto IL_00bf_1;
			}
		}
		{
			// bBuildMesh = false;
			__this->___bBuildMesh_37 = (bool)0;
			// bUpdateMesh = true;
			__this->___bUpdateMesh_38 = (bool)1;
			// }
			goto IL_0476;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_046f;
		}
		throw e;
	}

CATCH_046f:
	{// begin catch(System.Exception)
		// Debug.LogException(ex);
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var)));
		Debug_LogException_m82E44FEC6B03BC34AFC2CAF6583051570C60CB9E(((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*)), NULL);
		// }
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0476;
	}// end catch (depth: 1)

IL_0476:
	{
		// System.Threading.Thread.Sleep(KinectInterop.THREAD_SLEEP_TIME_MS);
		Thread_Sleep_m63B7D29DC735584F4D80373E48C91B34FF32D1A0(5, NULL);
	}

IL_047c:
	{
		// while(!bStopThread)
		bool L_198 = __this->___bStopThread_36;
		if (!L_198)
		{
			goto IL_0005;
		}
	}
	{
		// }
		return;
	}
}
// System.Void com.rfilkov.components.UserMeshRenderer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UserMeshRenderer__ctor_m9E2287A6DDE9D49E596848DEFE4177E44B94F9DD (UserMeshRenderer_tE896EB6D7C675E98F5AF9306C25AAB1EF96A7E2F* __this, const RuntimeMethod* method) 
{
	{
		// public bool showAsPointCloud = true;
		__this->___showAsPointCloud_7 = (bool)1;
		// private Vector3 spaceScale = Vector3.zero;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		L_0 = Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline(NULL);
		__this->___spaceScale_14 = L_0;
		// private byte userBodyIndex = 255;
		__this->___userBodyIndex_26 = (uint8_t)((int32_t)255);
		// private Vector3 userBodyPos = Vector3.zero;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline(NULL);
		__this->___userBodyPos_27 = L_1;
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void com.rfilkov.components.UserMeshRendererGpu::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UserMeshRendererGpu_Start_mD953D04D0FFA50382FF58ED17079CDC3FEA976AA (UserMeshRendererGpu_tCA868CF70531660324A409C0EF918366C78D6E54* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KinectManager_t6D168A1C710083948363282B0D862EDDFFD88211_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectsOfType_TisLight_t1E68479B7782AF2050FAA02A5DC612FD034F18F3_m9B250477C56BC975B7285CA3DFD1C0A118A3B185_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD45BD41901F5DF0CED9D6EE8E596968BE15FC475);
		s_Il2CppMethodInitialized = true;
	}
	LightU5BU5D_tDA7C763E668D91E53318509D94BC0CF10B8AB990* V_0 = NULL;
	UserMeshRendererGpu_tCA868CF70531660324A409C0EF918366C78D6E54* G_B2_0 = NULL;
	UserMeshRendererGpu_tCA868CF70531660324A409C0EF918366C78D6E54* G_B1_0 = NULL;
	UserMeshRendererGpu_tCA868CF70531660324A409C0EF918366C78D6E54* G_B3_0 = NULL;
	SensorData_t889044994784020C5FA25311175FB3F8B715DD27* G_B4_0 = NULL;
	UserMeshRendererGpu_tCA868CF70531660324A409C0EF918366C78D6E54* G_B4_1 = NULL;
	{
		// kinectManager = KinectManager.Instance;
		il2cpp_codegen_runtime_class_init_inline(KinectManager_t6D168A1C710083948363282B0D862EDDFFD88211_il2cpp_TypeInfo_var);
		KinectManager_t6D168A1C710083948363282B0D862EDDFFD88211* L_0;
		L_0 = KinectManager_get_Instance_mA12B1FCAF8167AF8235386FD868E43E15B29EC64_inline(NULL);
		__this->___kinectManager_16 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___kinectManager_16), (void*)L_0);
		// sensorData = (kinectManager != null && kinectManager.IsInitialized()) ? kinectManager.GetSensorData(sensorIndex) : null;
		KinectManager_t6D168A1C710083948363282B0D862EDDFFD88211* L_1 = __this->___kinectManager_16;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_1, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		G_B1_0 = __this;
		if (!L_2)
		{
			G_B2_0 = __this;
			goto IL_0027;
		}
	}
	{
		KinectManager_t6D168A1C710083948363282B0D862EDDFFD88211* L_3 = __this->___kinectManager_16;
		NullCheck(L_3);
		bool L_4;
		L_4 = KinectManager_IsInitialized_m4E8315ADDF5709A7239F26EAB7AC44392D77A179(L_3, NULL);
		G_B2_0 = G_B1_0;
		if (L_4)
		{
			G_B3_0 = G_B1_0;
			goto IL_002a;
		}
	}

IL_0027:
	{
		G_B4_0 = ((SensorData_t889044994784020C5FA25311175FB3F8B715DD27*)(NULL));
		G_B4_1 = G_B2_0;
		goto IL_003b;
	}

IL_002a:
	{
		KinectManager_t6D168A1C710083948363282B0D862EDDFFD88211* L_5 = __this->___kinectManager_16;
		int32_t L_6 = __this->___sensorIndex_5;
		NullCheck(L_5);
		SensorData_t889044994784020C5FA25311175FB3F8B715DD27* L_7;
		L_7 = KinectManager_GetSensorData_m6280DCF2ABA874FCBAB6E7B0F7202C58AA2F4267(L_5, L_6, NULL);
		G_B4_0 = L_7;
		G_B4_1 = G_B3_0;
	}

IL_003b:
	{
		NullCheck(G_B4_1);
		G_B4_1->___sensorData_17 = G_B4_0;
		Il2CppCodeGenWriteBarrier((void**)(&G_B4_1->___sensorData_17), (void*)G_B4_0);
		// if (meshTexture == MeshTextureType.InfraredTexture && kinectManager && kinectManager.GetInfraredImageTex(sensorIndex) == null)
		int32_t L_8 = __this->___meshTexture_10;
		if ((!(((uint32_t)L_8) == ((uint32_t)1))))
		{
			goto IL_0079;
		}
	}
	{
		KinectManager_t6D168A1C710083948363282B0D862EDDFFD88211* L_9 = __this->___kinectManager_16;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_10;
		L_10 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_9, NULL);
		if (!L_10)
		{
			goto IL_0079;
		}
	}
	{
		KinectManager_t6D168A1C710083948363282B0D862EDDFFD88211* L_11 = __this->___kinectManager_16;
		int32_t L_12 = __this->___sensorIndex_5;
		NullCheck(L_11);
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_13;
		L_13 = KinectManager_GetInfraredImageTex_m01290B9F31B007E2CA70346A0A69397FB811209D(L_11, L_12, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_14;
		L_14 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_13, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_14)
		{
			goto IL_0079;
		}
	}
	{
		// Debug.LogError("Please set the 'Get Infrared Frames'-setting of KinectManager to 'Infrared texture'.");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_m059825802BB6AF7EA9693FEBEEB0D85F59A3E38E(_stringLiteralD45BD41901F5DF0CED9D6EE8E596968BE15FC475, NULL);
	}

IL_0079:
	{
		// Light[] sceneLights = GameObject.FindObjectsOfType<Light>();
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		LightU5BU5D_tDA7C763E668D91E53318509D94BC0CF10B8AB990* L_15;
		L_15 = Object_FindObjectsOfType_TisLight_t1E68479B7782AF2050FAA02A5DC612FD034F18F3_m9B250477C56BC975B7285CA3DFD1C0A118A3B185(Object_FindObjectsOfType_TisLight_t1E68479B7782AF2050FAA02A5DC612FD034F18F3_m9B250477C56BC975B7285CA3DFD1C0A118A3B185_RuntimeMethod_var);
		V_0 = L_15;
		// lighting.SetLightsAndBounds(sceneLights, transform.position, new Vector3(20f, 20f, 20f));
		FragmentLighting_tE9A6F75445DF103494C8BFA7BD9D600355F9CDDC* L_16 = __this->___lighting_40;
		LightU5BU5D_tDA7C763E668D91E53318509D94BC0CF10B8AB990* L_17 = V_0;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_18;
		L_18 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_18);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19;
		L_19 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_18, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20;
		memset((&L_20), 0, sizeof(L_20));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_20), (20.0f), (20.0f), (20.0f), /*hidden argument*/NULL);
		NullCheck(L_16);
		FragmentLighting_SetLightsAndBounds_mCC77891ED276DB7DA3C7D2F4560CB9A3AB2AE47A(L_16, L_17, L_19, L_20, NULL);
		// }
		return;
	}
}
// System.Void com.rfilkov.components.UserMeshRendererGpu::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UserMeshRendererGpu_OnDestroy_m16EE1595EDA51E97CAF8909C54AD25563F281813 (UserMeshRendererGpu_tCA868CF70531660324A409C0EF918366C78D6E54* __this, const RuntimeMethod* method) 
{
	{
		// if (bMeshInited)
		bool L_0 = __this->___bMeshInited_38;
		if (!L_0)
		{
			goto IL_000e;
		}
	}
	{
		// FinishMesh();
		UserMeshRendererGpu_FinishMesh_m57A4DF940DAF05911E9CE8D3F71AFF4BBCB286D5(__this, NULL);
	}

IL_000e:
	{
		// lighting.ReleaseResources();
		FragmentLighting_tE9A6F75445DF103494C8BFA7BD9D600355F9CDDC* L_1 = __this->___lighting_40;
		NullCheck(L_1);
		FragmentLighting_ReleaseResources_m8AB66F52E7123A9A0DC4E9D1951BCB30F3452A82(L_1, NULL);
		// }
		return;
	}
}
// System.Void com.rfilkov.components.UserMeshRendererGpu::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UserMeshRendererGpu_Update_m5DA501AAB151596259B428ED2807570AF75D4D41 (UserMeshRendererGpu_tCA868CF70531660324A409C0EF918366C78D6E54* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	UserMeshRendererGpu_tCA868CF70531660324A409C0EF918366C78D6E54* G_B7_0 = NULL;
	UserMeshRendererGpu_tCA868CF70531660324A409C0EF918366C78D6E54* G_B6_0 = NULL;
	int32_t G_B8_0 = 0;
	UserMeshRendererGpu_tCA868CF70531660324A409C0EF918366C78D6E54* G_B8_1 = NULL;
	UserMeshRendererGpu_tCA868CF70531660324A409C0EF918366C78D6E54* G_B10_0 = NULL;
	UserMeshRendererGpu_tCA868CF70531660324A409C0EF918366C78D6E54* G_B9_0 = NULL;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 G_B11_0;
	memset((&G_B11_0), 0, sizeof(G_B11_0));
	UserMeshRendererGpu_tCA868CF70531660324A409C0EF918366C78D6E54* G_B11_1 = NULL;
	{
		// if (mesh == null && sensorData != null && sensorData.depthCamIntr != null)
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_0 = __this->___mesh_14;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0029;
		}
	}
	{
		SensorData_t889044994784020C5FA25311175FB3F8B715DD27* L_2 = __this->___sensorData_17;
		if (!L_2)
		{
			goto IL_0029;
		}
	}
	{
		SensorData_t889044994784020C5FA25311175FB3F8B715DD27* L_3 = __this->___sensorData_17;
		NullCheck(L_3);
		CameraIntrinsics_t272DC8A0981DE0A132DFC4E7B48C942191D56EFF* L_4 = L_3->___depthCamIntr_9;
		if (!L_4)
		{
			goto IL_0029;
		}
	}
	{
		// InitMesh();
		UserMeshRendererGpu_InitMesh_m237E3E51DB1830C88083CC0D0A5BC428240BC422(__this, NULL);
	}

IL_0029:
	{
		// if (bMeshInited)
		bool L_5 = __this->___bMeshInited_38;
		if (!L_5)
		{
			goto IL_009b;
		}
	}
	{
		// userId = kinectManager.GetUserIdByIndex(playerIndex);
		KinectManager_t6D168A1C710083948363282B0D862EDDFFD88211* L_6 = __this->___kinectManager_16;
		int32_t L_7 = __this->___playerIndex_4;
		NullCheck(L_6);
		uint64_t L_8;
		L_8 = KinectManager_GetUserIdByIndex_m039C55595E67098180174E20E7F8A66D37FCD06C(L_6, L_7, NULL);
		__this->___userId_33 = L_8;
		// userBodyIndex = userId != 0 ? kinectManager.GetBodyIndexByUserId(userId) : 255;
		uint64_t L_9 = __this->___userId_33;
		G_B6_0 = __this;
		if (L_9)
		{
			G_B7_0 = __this;
			goto IL_0058;
		}
	}
	{
		G_B8_0 = ((int32_t)255);
		G_B8_1 = G_B6_0;
		goto IL_0069;
	}

IL_0058:
	{
		KinectManager_t6D168A1C710083948363282B0D862EDDFFD88211* L_10 = __this->___kinectManager_16;
		uint64_t L_11 = __this->___userId_33;
		NullCheck(L_10);
		int32_t L_12;
		L_12 = KinectManager_GetBodyIndexByUserId_m102FDCC202FDCD9696DAB08CA644A0E52424FD20(L_10, L_11, NULL);
		G_B8_0 = L_12;
		G_B8_1 = G_B7_0;
	}

IL_0069:
	{
		NullCheck(G_B8_1);
		G_B8_1->___userBodyIndex_34 = G_B8_0;
		// userBodyPos = userId != 0 ? kinectManager.GetUserKinectPosition(userId, true) : Vector3.zero;
		uint64_t L_13 = __this->___userId_33;
		G_B9_0 = __this;
		if (L_13)
		{
			G_B10_0 = __this;
			goto IL_007e;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		L_14 = Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline(NULL);
		G_B11_0 = L_14;
		G_B11_1 = G_B9_0;
		goto IL_0090;
	}

IL_007e:
	{
		KinectManager_t6D168A1C710083948363282B0D862EDDFFD88211* L_15 = __this->___kinectManager_16;
		uint64_t L_16 = __this->___userId_33;
		NullCheck(L_15);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17;
		L_17 = KinectManager_GetUserKinectPosition_m48B8695AAD72FBE804F2A955BD5B11489EF06F61(L_15, L_16, (bool)1, NULL);
		G_B11_0 = L_17;
		G_B11_1 = G_B10_0;
	}

IL_0090:
	{
		NullCheck(G_B11_1);
		G_B11_1->___userBodyPos_35 = G_B11_0;
		// UpdateMesh();
		UserMeshRendererGpu_UpdateMesh_mCEC0A8587886F1D7899822AB4588E1001A2BE0F0(__this, NULL);
	}

IL_009b:
	{
		// }
		return;
	}
}
// System.Void com.rfilkov.components.UserMeshRendererGpu::InitMesh()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UserMeshRendererGpu_InitMesh_m237E3E51DB1830C88083CC0D0A5BC428240BC422 (UserMeshRendererGpu_tCA868CF70531660324A409C0EF918366C78D6E54* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisMeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5_mB82F66059DFB5715DD85BDED1D90BC03A6C9E623_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisTransform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_m60E86366B3E431D4C4A549CF4FE5951087686F7F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DepthSensorBase_tB644BCAB82289DCDB9290A9B3A6972F0F13B0774_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3D4887776042D73AD182766CDE2B5AE68B794B7D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7B15541EEA8A44CEE3ECC230191B03CE7FD444E8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7DE6F55FCE5B31ED1BF66F8EC3E72A8693E0A73B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7F5A1C307F51BE942F3E8F65D5936DCE694BD1E2);
		s_Il2CppMethodInitialized = true;
	}
	MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* V_0 = NULL;
	Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* V_1 = NULL;
	Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* V_2 = NULL;
	UserMeshRendererGpu_tCA868CF70531660324A409C0EF918366C78D6E54* G_B9_0 = NULL;
	UserMeshRendererGpu_tCA868CF70531660324A409C0EF918366C78D6E54* G_B8_0 = NULL;
	DepthSensorBase_tB644BCAB82289DCDB9290A9B3A6972F0F13B0774* G_B10_0 = NULL;
	UserMeshRendererGpu_tCA868CF70531660324A409C0EF918366C78D6E54* G_B10_1 = NULL;
	{
		// mesh = new Mesh
		// {
		//     name = "User" + playerIndex + "Mesh-S" + sensorIndex,
		//     indexFormat = UnityEngine.Rendering.IndexFormat.UInt32
		// };
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_0 = (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4*)il2cpp_codegen_object_new(Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Mesh__ctor_m5A9AECEDDAFFD84811ED8928012BDE97A9CEBD00(L_0, NULL);
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_1 = L_0;
		int32_t* L_2 = (&__this->___playerIndex_4);
		String_t* L_3;
		L_3 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_2, NULL);
		int32_t* L_4 = (&__this->___sensorIndex_5);
		String_t* L_5;
		L_5 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_4, NULL);
		String_t* L_6;
		L_6 = String_Concat_mF8B69BE42B5C5ABCAD3C176FBBE3010E0815D65D(_stringLiteral3D4887776042D73AD182766CDE2B5AE68B794B7D, L_3, _stringLiteral7F5A1C307F51BE942F3E8F65D5936DCE694BD1E2, L_5, NULL);
		NullCheck(L_1);
		Object_set_name_mC79E6DC8FFD72479C90F0C4CC7F42A0FEAF5AE47(L_1, L_6, NULL);
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_7 = L_1;
		NullCheck(L_7);
		Mesh_set_indexFormat_mCCC7837A0916FA7A272159DA6AF984B0022488F4(L_7, 1, NULL);
		__this->___mesh_14 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mesh_14), (void*)L_7);
		// MeshFilter meshFilter = GetComponent<MeshFilter>();
		MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* L_8;
		L_8 = Component_GetComponent_TisMeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5_mB82F66059DFB5715DD85BDED1D90BC03A6C9E623(__this, Component_GetComponent_TisMeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5_mB82F66059DFB5715DD85BDED1D90BC03A6C9E623_RuntimeMethod_var);
		V_0 = L_8;
		// if (meshFilter != null)
		MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* L_9 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_10;
		L_10 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_9, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_10)
		{
			goto IL_005b;
		}
	}
	{
		// meshFilter.mesh = mesh;
		MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* L_11 = V_0;
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_12 = __this->___mesh_14;
		NullCheck(L_11);
		MeshFilter_set_mesh_mD2988E2D835205FD6B6CD35A61E1592844D971F8(L_11, L_12, NULL);
		goto IL_0065;
	}

IL_005b:
	{
		// Debug.LogWarning("MeshFilter not found! You may not see the mesh on screen");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_mEF15C6B17CE4E1FA7E379CDB82CE40FCD89A3F28(_stringLiteral7B15541EEA8A44CEE3ECC230191B03CE7FD444E8, NULL);
	}

IL_0065:
	{
		// Renderer meshRenderer = GetComponent<Renderer>();
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_13;
		L_13 = Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8(__this, Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8_RuntimeMethod_var);
		V_1 = L_13;
		// if (meshRenderer && meshRenderer.material /**&& meshRenderer.material.mainTexture == null*/)
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_14 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_15;
		L_15 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_14, NULL);
		if (!L_15)
		{
			goto IL_00ad;
		}
	}
	{
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_16 = V_1;
		NullCheck(L_16);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_17;
		L_17 = Renderer_get_material_m5BA2A00816C4CC66580D4B2E409CF10718C15656(L_16, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_18;
		L_18 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_17, NULL);
		if (!L_18)
		{
			goto IL_00ad;
		}
	}
	{
		// Shader meshShader = Shader.Find("Kinect/UserMeshUShader");  // Kinect/UserMeshVShader
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_19;
		L_19 = Shader_Find_mFF2A8FC042B9CFAA9800679CA674D52859BF3A72(_stringLiteral7DE6F55FCE5B31ED1BF66F8EC3E72A8693E0A73B, NULL);
		V_2 = L_19;
		// if (meshShader != null)
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_20 = V_2;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_21;
		L_21 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_20, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_21)
		{
			goto IL_00ad;
		}
	}
	{
		// meshShaderMat = new Material(meshShader);
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_22 = V_2;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_23 = (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3*)il2cpp_codegen_object_new(Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_il2cpp_TypeInfo_var);
		NullCheck(L_23);
		Material__ctor_m7FDF47105D66D19591BE505A0C42B0F90D88C9BF(L_23, L_22, NULL);
		__this->___meshShaderMat_19 = L_23;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___meshShaderMat_19), (void*)L_23);
		// meshRenderer.material = meshShaderMat;
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_24 = V_1;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_25 = __this->___meshShaderMat_19;
		NullCheck(L_24);
		Renderer_set_material_m21E88977071E0A914D62F3D9CFF0193B3117C45A(L_24, L_25, NULL);
	}

IL_00ad:
	{
		// trans = GetComponent<Transform>();
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_26;
		L_26 = Component_GetComponent_TisTransform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_m60E86366B3E431D4C4A549CF4FE5951087686F7F(__this, Component_GetComponent_TisTransform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_m60E86366B3E431D4C4A549CF4FE5951087686F7F_RuntimeMethod_var);
		__this->___trans_15 = L_26;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___trans_15), (void*)L_26);
		// sensorInt = sensorData != null ? (DepthSensorBase)sensorData.sensorInterface : null;
		SensorData_t889044994784020C5FA25311175FB3F8B715DD27* L_27 = __this->___sensorData_17;
		G_B8_0 = __this;
		if (L_27)
		{
			G_B9_0 = __this;
			goto IL_00c5;
		}
	}
	{
		G_B10_0 = ((DepthSensorBase_tB644BCAB82289DCDB9290A9B3A6972F0F13B0774*)(NULL));
		G_B10_1 = G_B8_0;
		goto IL_00d5;
	}

IL_00c5:
	{
		SensorData_t889044994784020C5FA25311175FB3F8B715DD27* L_28 = __this->___sensorData_17;
		NullCheck(L_28);
		RuntimeObject* L_29 = L_28->___sensorInterface_0;
		G_B10_0 = ((DepthSensorBase_tB644BCAB82289DCDB9290A9B3A6972F0F13B0774*)CastclassClass((RuntimeObject*)L_29, DepthSensorBase_tB644BCAB82289DCDB9290A9B3A6972F0F13B0774_il2cpp_TypeInfo_var));
		G_B10_1 = G_B9_0;
	}

IL_00d5:
	{
		NullCheck(G_B10_1);
		G_B10_1->___sensorInt_18 = G_B10_0;
		Il2CppCodeGenWriteBarrier((void**)(&G_B10_1->___sensorInt_18), (void*)G_B10_0);
		// if (sensorData != null && sensorInt != null && meshShaderMat != null)
		SensorData_t889044994784020C5FA25311175FB3F8B715DD27* L_30 = __this->___sensorData_17;
		if (!L_30)
		{
			goto IL_01ab;
		}
	}
	{
		DepthSensorBase_tB644BCAB82289DCDB9290A9B3A6972F0F13B0774* L_31 = __this->___sensorInt_18;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_32;
		L_32 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_31, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_32)
		{
			goto IL_01ab;
		}
	}
	{
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_33 = __this->___meshShaderMat_19;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_34;
		L_34 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_33, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_34)
		{
			goto IL_01ab;
		}
	}
	{
		// Vector2Int imageRes = Vector2Int.zero;
		Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A L_35;
		L_35 = Vector2Int_get_zero_mA4130E83BCF623B65B14574D496C6C0FB441D9FE_inline(NULL);
		// if (sensorInt.pointCloudColorTexture == null)
		DepthSensorBase_tB644BCAB82289DCDB9290A9B3A6972F0F13B0774* L_36 = __this->___sensorInt_18;
		NullCheck(L_36);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_37 = L_36->___pointCloudColorTexture_13;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_38;
		L_38 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_37, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_38)
		{
			goto IL_014c;
		}
	}
	{
		// sensorInt.pointCloudResolution = sourceImageResolution;
		DepthSensorBase_tB644BCAB82289DCDB9290A9B3A6972F0F13B0774* L_39 = __this->___sensorInt_18;
		int32_t L_40 = __this->___sourceImageResolution_6;
		NullCheck(L_39);
		L_39->___pointCloudResolution_11 = L_40;
		// imageRes = sensorInt.GetPointCloudTexResolution(sensorData);
		DepthSensorBase_tB644BCAB82289DCDB9290A9B3A6972F0F13B0774* L_41 = __this->___sensorInt_18;
		SensorData_t889044994784020C5FA25311175FB3F8B715DD27* L_42 = __this->___sensorData_17;
		NullCheck(L_41);
		Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A L_43;
		L_43 = VirtualFuncInvoker1< Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A, SensorData_t889044994784020C5FA25311175FB3F8B715DD27* >::Invoke(79 /* UnityEngine.Vector2Int com.rfilkov.kinect.DepthSensorBase::GetPointCloudTexResolution(com.rfilkov.kinect.KinectInterop/SensorData) */, L_41, L_42);
		// colorTextureCreated = true;
		__this->___colorTextureCreated_29 = (bool)1;
		goto IL_0187;
	}

IL_014c:
	{
		// sourceImageResolution = sensorInt.pointCloudResolution;
		DepthSensorBase_tB644BCAB82289DCDB9290A9B3A6972F0F13B0774* L_44 = __this->___sensorInt_18;
		NullCheck(L_44);
		int32_t L_45 = L_44->___pointCloudResolution_11;
		__this->___sourceImageResolution_6 = L_45;
		// imageRes = sensorInt.GetPointCloudTexResolution(sensorData);
		DepthSensorBase_tB644BCAB82289DCDB9290A9B3A6972F0F13B0774* L_46 = __this->___sensorInt_18;
		SensorData_t889044994784020C5FA25311175FB3F8B715DD27* L_47 = __this->___sensorData_17;
		NullCheck(L_46);
		Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A L_48;
		L_48 = VirtualFuncInvoker1< Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A, SensorData_t889044994784020C5FA25311175FB3F8B715DD27* >::Invoke(79 /* UnityEngine.Vector2Int com.rfilkov.kinect.DepthSensorBase::GetPointCloudTexResolution(com.rfilkov.kinect.KinectInterop/SensorData) */, L_46, L_47);
		// colorTexture = sensorInt.pointCloudColorTexture;
		DepthSensorBase_tB644BCAB82289DCDB9290A9B3A6972F0F13B0774* L_49 = __this->___sensorInt_18;
		NullCheck(L_49);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_50 = L_49->___pointCloudColorTexture_13;
		__this->___colorTexture_27 = L_50;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___colorTexture_27), (void*)L_50);
		// colorTextureCreated = false;
		__this->___colorTextureCreated_29 = (bool)0;
	}

IL_0187:
	{
		// sensorSpaceScale = kinectManager.GetSensorSpaceScale(sensorIndex);  // kinectManager.GetDepthImageScale(sensorIndex)
		KinectManager_t6D168A1C710083948363282B0D862EDDFFD88211* L_51 = __this->___kinectManager_16;
		int32_t L_52 = __this->___sensorIndex_5;
		NullCheck(L_51);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_53;
		L_53 = KinectManager_GetSensorSpaceScale_m096BD92B11206702B2624831A40E3C8B5C6A49CB(L_51, L_52, NULL);
		__this->___sensorSpaceScale_22 = L_53;
		// UpdateTexturesAndBuffers();
		UserMeshRendererGpu_UpdateTexturesAndBuffers_mF8FE91E153927AD29D6F1A975306A45AF328C892(__this, NULL);
		// bMeshInited = true;
		__this->___bMeshInited_38 = (bool)1;
	}

IL_01ab:
	{
		// }
		return;
	}
}
// System.Void com.rfilkov.components.UserMeshRendererGpu::UpdateTexturesAndBuffers()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UserMeshRendererGpu_UpdateTexturesAndBuffers_mF8FE91E153927AD29D6F1A975306A45AF328C892 (UserMeshRendererGpu_tCA868CF70531660324A409C0EF918366C78D6E54* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ComputeBuffer_t51EADA9015EBCC1B982C5584E9AB2734415A8233_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KinectInterop_t8231C68411373688AA650B978611F932EE5860F9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	UserMeshRendererGpu_tCA868CF70531660324A409C0EF918366C78D6E54* G_B35_0 = NULL;
	UserMeshRendererGpu_tCA868CF70531660324A409C0EF918366C78D6E54* G_B34_0 = NULL;
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* G_B36_0 = NULL;
	UserMeshRendererGpu_tCA868CF70531660324A409C0EF918366C78D6E54* G_B36_1 = NULL;
	{
		// if (sensorData == null || sensorInt == null)
		SensorData_t889044994784020C5FA25311175FB3F8B715DD27* L_0 = __this->___sensorData_17;
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		DepthSensorBase_tB644BCAB82289DCDB9290A9B3A6972F0F13B0774* L_1 = __this->___sensorInt_18;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_1, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_2)
		{
			goto IL_0017;
		}
	}

IL_0016:
	{
		// return;
		return;
	}

IL_0017:
	{
		// Vector2Int imageRes = sensorInt.GetPointCloudTexResolution(sensorData);
		DepthSensorBase_tB644BCAB82289DCDB9290A9B3A6972F0F13B0774* L_3 = __this->___sensorInt_18;
		SensorData_t889044994784020C5FA25311175FB3F8B715DD27* L_4 = __this->___sensorData_17;
		NullCheck(L_3);
		Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A L_5;
		L_5 = VirtualFuncInvoker1< Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A, SensorData_t889044994784020C5FA25311175FB3F8B715DD27* >::Invoke(79 /* UnityEngine.Vector2Int com.rfilkov.kinect.DepthSensorBase::GetPointCloudTexResolution(com.rfilkov.kinect.KinectInterop/SensorData) */, L_3, L_4);
		V_0 = L_5;
		// if (colorTextureCreated && (colorTexture == null ||
		//     colorTexture.width != imageRes.x || colorTexture.height != imageRes.y))
		bool L_6 = __this->___colorTextureCreated_29;
		if (!L_6)
		{
			goto IL_0098;
		}
	}
	{
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_7 = __this->___colorTexture_27;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_8;
		L_8 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_7, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (L_8)
		{
			goto IL_0067;
		}
	}
	{
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_9 = __this->___colorTexture_27;
		NullCheck(L_9);
		int32_t L_10;
		L_10 = VirtualFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_9);
		int32_t L_11;
		L_11 = Vector2Int_get_x_mA2CACB1B6E6B5AD0CCC32B2CD2EDCE3ECEB50576_inline((&V_0), NULL);
		if ((!(((uint32_t)L_10) == ((uint32_t)L_11))))
		{
			goto IL_0067;
		}
	}
	{
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_12 = __this->___colorTexture_27;
		NullCheck(L_12);
		int32_t L_13;
		L_13 = VirtualFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Texture::get_height() */, L_12);
		int32_t L_14;
		L_14 = Vector2Int_get_y_m48454163ECF0B463FB5A16A0C4FC4B14DB0768B3_inline((&V_0), NULL);
		if ((((int32_t)L_13) == ((int32_t)L_14)))
		{
			goto IL_0098;
		}
	}

IL_0067:
	{
		// colorTexture = KinectInterop.CreateRenderTexture(colorTexture, imageRes.x, imageRes.y, RenderTextureFormat.ARGB32);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_15 = __this->___colorTexture_27;
		int32_t L_16;
		L_16 = Vector2Int_get_x_mA2CACB1B6E6B5AD0CCC32B2CD2EDCE3ECEB50576_inline((&V_0), NULL);
		int32_t L_17;
		L_17 = Vector2Int_get_y_m48454163ECF0B463FB5A16A0C4FC4B14DB0768B3_inline((&V_0), NULL);
		il2cpp_codegen_runtime_class_init_inline(KinectInterop_t8231C68411373688AA650B978611F932EE5860F9_il2cpp_TypeInfo_var);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_18;
		L_18 = KinectInterop_CreateRenderTexture_m84068B60B5DE22E7D439F086D1312279950E7D5E(L_15, L_16, L_17, 0, NULL);
		__this->___colorTexture_27 = L_18;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___colorTexture_27), (void*)L_18);
		// sensorInt.pointCloudColorTexture = colorTexture;
		DepthSensorBase_tB644BCAB82289DCDB9290A9B3A6972F0F13B0774* L_19 = __this->___sensorInt_18;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_20 = __this->___colorTexture_27;
		NullCheck(L_19);
		L_19->___pointCloudColorTexture_13 = L_20;
		Il2CppCodeGenWriteBarrier((void**)(&L_19->___pointCloudColorTexture_13), (void*)L_20);
	}

IL_0098:
	{
		// if (sourceImageResolution == DepthSensorBase.PointCloudResolution.DepthCameraResolution)
		int32_t L_21 = __this->___sourceImageResolution_6;
		if (L_21)
		{
			goto IL_00f9;
		}
	}
	{
		// int depthBufferLength = sensorData.depthImageWidth * sensorData.depthImageHeight >> 1;
		SensorData_t889044994784020C5FA25311175FB3F8B715DD27* L_22 = __this->___sensorData_17;
		NullCheck(L_22);
		int32_t L_23 = L_22->___depthImageWidth_25;
		SensorData_t889044994784020C5FA25311175FB3F8B715DD27* L_24 = __this->___sensorData_17;
		NullCheck(L_24);
		int32_t L_25 = L_24->___depthImageHeight_26;
		V_1 = ((int32_t)(((int32_t)il2cpp_codegen_multiply(L_23, L_25))>>1));
		// if (depthImageBuffer == null || depthImageBuffer.count != depthBufferLength)
		ComputeBuffer_t51EADA9015EBCC1B982C5584E9AB2734415A8233* L_26 = __this->___depthImageBuffer_24;
		if (!L_26)
		{
			goto IL_00d3;
		}
	}
	{
		ComputeBuffer_t51EADA9015EBCC1B982C5584E9AB2734415A8233* L_27 = __this->___depthImageBuffer_24;
		NullCheck(L_27);
		int32_t L_28;
		L_28 = ComputeBuffer_get_count_m4DAA2D2714BA7A46F007697F601E4446F1049506(L_27, NULL);
		int32_t L_29 = V_1;
		if ((((int32_t)L_28) == ((int32_t)L_29)))
		{
			goto IL_0196;
		}
	}

IL_00d3:
	{
		// depthImageCopy = new ushort[depthBufferLength << 1];
		int32_t L_30 = V_1;
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_31 = (UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83*)(UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83*)SZArrayNew(UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83_il2cpp_TypeInfo_var, (uint32_t)((int32_t)(L_30<<1)));
		__this->___depthImageCopy_23 = L_31;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___depthImageCopy_23), (void*)L_31);
		// depthImageBuffer = KinectInterop.CreateComputeBuffer(depthImageBuffer, depthBufferLength, sizeof(uint));
		ComputeBuffer_t51EADA9015EBCC1B982C5584E9AB2734415A8233* L_32 = __this->___depthImageBuffer_24;
		int32_t L_33 = V_1;
		il2cpp_codegen_runtime_class_init_inline(KinectInterop_t8231C68411373688AA650B978611F932EE5860F9_il2cpp_TypeInfo_var);
		ComputeBuffer_t51EADA9015EBCC1B982C5584E9AB2734415A8233* L_34;
		L_34 = KinectInterop_CreateComputeBuffer_m56CEE7B21E1D61C4AE5E14E710017C1BA61E9475(L_32, L_33, 4, NULL);
		__this->___depthImageBuffer_24 = L_34;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___depthImageBuffer_24), (void*)L_34);
		goto IL_0196;
	}

IL_00f9:
	{
		// int bufferLength = sensorData.colorImageWidth * sensorData.colorImageHeight >> 1;
		SensorData_t889044994784020C5FA25311175FB3F8B715DD27* L_35 = __this->___sensorData_17;
		NullCheck(L_35);
		int32_t L_36 = L_35->___colorImageWidth_18;
		SensorData_t889044994784020C5FA25311175FB3F8B715DD27* L_37 = __this->___sensorData_17;
		NullCheck(L_37);
		int32_t L_38 = L_37->___colorImageHeight_19;
		V_2 = ((int32_t)(((int32_t)il2cpp_codegen_multiply(L_36, L_38))>>1));
		// if (sensorData.colorDepthBuffer == null || sensorData.colorDepthBuffer.count != bufferLength)
		SensorData_t889044994784020C5FA25311175FB3F8B715DD27* L_39 = __this->___sensorData_17;
		NullCheck(L_39);
		ComputeBuffer_t51EADA9015EBCC1B982C5584E9AB2734415A8233* L_40 = L_39->___colorDepthBuffer_64;
		if (!L_40)
		{
			goto IL_0133;
		}
	}
	{
		SensorData_t889044994784020C5FA25311175FB3F8B715DD27* L_41 = __this->___sensorData_17;
		NullCheck(L_41);
		ComputeBuffer_t51EADA9015EBCC1B982C5584E9AB2734415A8233* L_42 = L_41->___colorDepthBuffer_64;
		NullCheck(L_42);
		int32_t L_43;
		L_43 = ComputeBuffer_get_count_m4DAA2D2714BA7A46F007697F601E4446F1049506(L_42, NULL);
		int32_t L_44 = V_2;
		if ((((int32_t)L_43) == ((int32_t)L_44)))
		{
			goto IL_0150;
		}
	}

IL_0133:
	{
		// sensorData.colorDepthBuffer = KinectInterop.CreateComputeBuffer(sensorData.colorDepthBuffer, bufferLength, sizeof(uint));
		SensorData_t889044994784020C5FA25311175FB3F8B715DD27* L_45 = __this->___sensorData_17;
		SensorData_t889044994784020C5FA25311175FB3F8B715DD27* L_46 = __this->___sensorData_17;
		NullCheck(L_46);
		ComputeBuffer_t51EADA9015EBCC1B982C5584E9AB2734415A8233* L_47 = L_46->___colorDepthBuffer_64;
		int32_t L_48 = V_2;
		il2cpp_codegen_runtime_class_init_inline(KinectInterop_t8231C68411373688AA650B978611F932EE5860F9_il2cpp_TypeInfo_var);
		ComputeBuffer_t51EADA9015EBCC1B982C5584E9AB2734415A8233* L_49;
		L_49 = KinectInterop_CreateComputeBuffer_m56CEE7B21E1D61C4AE5E14E710017C1BA61E9475(L_47, L_48, 4, NULL);
		NullCheck(L_45);
		L_45->___colorDepthBuffer_64 = L_49;
		Il2CppCodeGenWriteBarrier((void**)(&L_45->___colorDepthBuffer_64), (void*)L_49);
	}

IL_0150:
	{
		// if (meshTexture == MeshTextureType.InfraredTexture)
		int32_t L_50 = __this->___meshTexture_10;
		if ((!(((uint32_t)L_50) == ((uint32_t)1))))
		{
			goto IL_0196;
		}
	}
	{
		// if (sensorData.colorInfraredBuffer == null || sensorData.colorInfraredBuffer.count != bufferLength)
		SensorData_t889044994784020C5FA25311175FB3F8B715DD27* L_51 = __this->___sensorData_17;
		NullCheck(L_51);
		ComputeBuffer_t51EADA9015EBCC1B982C5584E9AB2734415A8233* L_52 = L_51->___colorInfraredBuffer_67;
		if (!L_52)
		{
			goto IL_0179;
		}
	}
	{
		SensorData_t889044994784020C5FA25311175FB3F8B715DD27* L_53 = __this->___sensorData_17;
		NullCheck(L_53);
		ComputeBuffer_t51EADA9015EBCC1B982C5584E9AB2734415A8233* L_54 = L_53->___colorInfraredBuffer_67;
		NullCheck(L_54);
		int32_t L_55;
		L_55 = ComputeBuffer_get_count_m4DAA2D2714BA7A46F007697F601E4446F1049506(L_54, NULL);
		int32_t L_56 = V_2;
		if ((((int32_t)L_55) == ((int32_t)L_56)))
		{
			goto IL_0196;
		}
	}

IL_0179:
	{
		// sensorData.colorInfraredBuffer = KinectInterop.CreateComputeBuffer(sensorData.colorInfraredBuffer, bufferLength, sizeof(uint));
		SensorData_t889044994784020C5FA25311175FB3F8B715DD27* L_57 = __this->___sensorData_17;
		SensorData_t889044994784020C5FA25311175FB3F8B715DD27* L_58 = __this->___sensorData_17;
		NullCheck(L_58);
		ComputeBuffer_t51EADA9015EBCC1B982C5584E9AB2734415A8233* L_59 = L_58->___colorInfraredBuffer_67;
		int32_t L_60 = V_2;
		il2cpp_codegen_runtime_class_init_inline(KinectInterop_t8231C68411373688AA650B978611F932EE5860F9_il2cpp_TypeInfo_var);
		ComputeBuffer_t51EADA9015EBCC1B982C5584E9AB2734415A8233* L_61;
		L_61 = KinectInterop_CreateComputeBuffer_m56CEE7B21E1D61C4AE5E14E710017C1BA61E9475(L_59, L_60, 4, NULL);
		NullCheck(L_57);
		L_57->___colorInfraredBuffer_67 = L_61;
		Il2CppCodeGenWriteBarrier((void**)(&L_57->___colorInfraredBuffer_67), (void*)L_61);
	}

IL_0196:
	{
		// if (sourceImageResolution == DepthSensorBase.PointCloudResolution.DepthCameraResolution)
		int32_t L_62 = __this->___sourceImageResolution_6;
		if (L_62)
		{
			goto IL_01f1;
		}
	}
	{
		// int bodyIndexBufferLength = sensorData.depthImageWidth * sensorData.depthImageHeight >> 2;
		SensorData_t889044994784020C5FA25311175FB3F8B715DD27* L_63 = __this->___sensorData_17;
		NullCheck(L_63);
		int32_t L_64 = L_63->___depthImageWidth_25;
		SensorData_t889044994784020C5FA25311175FB3F8B715DD27* L_65 = __this->___sensorData_17;
		NullCheck(L_65);
		int32_t L_66 = L_65->___depthImageHeight_26;
		V_3 = ((int32_t)(((int32_t)il2cpp_codegen_multiply(L_64, L_66))>>2));
		// if (bodyIndexBuffer == null || bodyIndexBuffer.count != bodyIndexBufferLength)
		ComputeBuffer_t51EADA9015EBCC1B982C5584E9AB2734415A8233* L_67 = __this->___bodyIndexBuffer_26;
		if (!L_67)
		{
			goto IL_01ce;
		}
	}
	{
		ComputeBuffer_t51EADA9015EBCC1B982C5584E9AB2734415A8233* L_68 = __this->___bodyIndexBuffer_26;
		NullCheck(L_68);
		int32_t L_69;
		L_69 = ComputeBuffer_get_count_m4DAA2D2714BA7A46F007697F601E4446F1049506(L_68, NULL);
		int32_t L_70 = V_3;
		if ((((int32_t)L_69) == ((int32_t)L_70)))
		{
			goto IL_0240;
		}
	}

IL_01ce:
	{
		// bodyIndexCopy = new byte[bodyIndexBufferLength << 2];
		int32_t L_71 = V_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_72 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)(L_71<<2)));
		__this->___bodyIndexCopy_25 = L_72;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___bodyIndexCopy_25), (void*)L_72);
		// bodyIndexBuffer = KinectInterop.CreateComputeBuffer(bodyIndexBuffer, bodyIndexBufferLength, sizeof(uint));
		ComputeBuffer_t51EADA9015EBCC1B982C5584E9AB2734415A8233* L_73 = __this->___bodyIndexBuffer_26;
		int32_t L_74 = V_3;
		il2cpp_codegen_runtime_class_init_inline(KinectInterop_t8231C68411373688AA650B978611F932EE5860F9_il2cpp_TypeInfo_var);
		ComputeBuffer_t51EADA9015EBCC1B982C5584E9AB2734415A8233* L_75;
		L_75 = KinectInterop_CreateComputeBuffer_m56CEE7B21E1D61C4AE5E14E710017C1BA61E9475(L_73, L_74, 4, NULL);
		__this->___bodyIndexBuffer_26 = L_75;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___bodyIndexBuffer_26), (void*)L_75);
		goto IL_0240;
	}

IL_01f1:
	{
		// int bufferLength = sensorData.colorImageWidth * sensorData.colorImageHeight >> 2;
		SensorData_t889044994784020C5FA25311175FB3F8B715DD27* L_76 = __this->___sensorData_17;
		NullCheck(L_76);
		int32_t L_77 = L_76->___colorImageWidth_18;
		SensorData_t889044994784020C5FA25311175FB3F8B715DD27* L_78 = __this->___sensorData_17;
		NullCheck(L_78);
		int32_t L_79 = L_78->___colorImageHeight_19;
		V_4 = ((int32_t)(((int32_t)il2cpp_codegen_multiply(L_77, L_79))>>2));
		// if (sensorData.colorBodyIndexBuffer == null || sensorData.colorBodyIndexBuffer.count != bufferLength)
		SensorData_t889044994784020C5FA25311175FB3F8B715DD27* L_80 = __this->___sensorData_17;
		NullCheck(L_80);
		ComputeBuffer_t51EADA9015EBCC1B982C5584E9AB2734415A8233* L_81 = L_80->___colorBodyIndexBuffer_71;
		if (!L_81)
		{
			goto IL_022d;
		}
	}
	{
		SensorData_t889044994784020C5FA25311175FB3F8B715DD27* L_82 = __this->___sensorData_17;
		NullCheck(L_82);
		ComputeBuffer_t51EADA9015EBCC1B982C5584E9AB2734415A8233* L_83 = L_82->___colorBodyIndexBuffer_71;
		NullCheck(L_83);
		int32_t L_84;
		L_84 = ComputeBuffer_get_count_m4DAA2D2714BA7A46F007697F601E4446F1049506(L_83, NULL);
		int32_t L_85 = V_4;
		if ((((int32_t)L_84) == ((int32_t)L_85)))
		{
			goto IL_0240;
		}
	}

IL_022d:
	{
		// sensorData.colorBodyIndexBuffer = new ComputeBuffer(bufferLength, sizeof(uint));
		SensorData_t889044994784020C5FA25311175FB3F8B715DD27* L_86 = __this->___sensorData_17;
		int32_t L_87 = V_4;
		ComputeBuffer_t51EADA9015EBCC1B982C5584E9AB2734415A8233* L_88 = (ComputeBuffer_t51EADA9015EBCC1B982C5584E9AB2734415A8233*)il2cpp_codegen_object_new(ComputeBuffer_t51EADA9015EBCC1B982C5584E9AB2734415A8233_il2cpp_TypeInfo_var);
		NullCheck(L_88);
		ComputeBuffer__ctor_mE40DE5EF5ADAC29B6B4DECBD1EE33E8526202617(L_88, L_87, 4, NULL);
		NullCheck(L_86);
		L_86->___colorBodyIndexBuffer_71 = L_88;
		Il2CppCodeGenWriteBarrier((void**)(&L_86->___colorBodyIndexBuffer_71), (void*)L_88);
	}

IL_0240:
	{
		// if (colorTextureCopy == null || colorTextureCopy.width != imageRes.x || colorTextureCopy.height != imageRes.y)
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_89 = __this->___colorTextureCopy_28;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_90;
		L_90 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_89, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (L_90)
		{
			goto IL_0276;
		}
	}
	{
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_91 = __this->___colorTextureCopy_28;
		NullCheck(L_91);
		int32_t L_92;
		L_92 = VirtualFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_91);
		int32_t L_93;
		L_93 = Vector2Int_get_x_mA2CACB1B6E6B5AD0CCC32B2CD2EDCE3ECEB50576_inline((&V_0), NULL);
		if ((!(((uint32_t)L_92) == ((uint32_t)L_93))))
		{
			goto IL_0276;
		}
	}
	{
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_94 = __this->___colorTextureCopy_28;
		NullCheck(L_94);
		int32_t L_95;
		L_95 = VirtualFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Texture::get_height() */, L_94);
		int32_t L_96;
		L_96 = Vector2Int_get_y_m48454163ECF0B463FB5A16A0C4FC4B14DB0768B3_inline((&V_0), NULL);
		if ((((int32_t)L_95) == ((int32_t)L_96)))
		{
			goto IL_0296;
		}
	}

IL_0276:
	{
		// colorTextureCopy = KinectInterop.CreateRenderTexture(colorTextureCopy, imageRes.x, imageRes.y, RenderTextureFormat.ARGB32);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_97 = __this->___colorTextureCopy_28;
		int32_t L_98;
		L_98 = Vector2Int_get_x_mA2CACB1B6E6B5AD0CCC32B2CD2EDCE3ECEB50576_inline((&V_0), NULL);
		int32_t L_99;
		L_99 = Vector2Int_get_y_m48454163ECF0B463FB5A16A0C4FC4B14DB0768B3_inline((&V_0), NULL);
		il2cpp_codegen_runtime_class_init_inline(KinectInterop_t8231C68411373688AA650B978611F932EE5860F9_il2cpp_TypeInfo_var);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_100;
		L_100 = KinectInterop_CreateRenderTexture_m84068B60B5DE22E7D439F086D1312279950E7D5E(L_97, L_98, L_99, 0, NULL);
		__this->___colorTextureCopy_28 = L_100;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___colorTextureCopy_28), (void*)L_100);
	}

IL_0296:
	{
		// if (spaceTableBuffer == null || imageWidth != imageRes.x || imageHeight != imageRes.y)
		ComputeBuffer_t51EADA9015EBCC1B982C5584E9AB2734415A8233* L_101 = __this->___spaceTableBuffer_21;
		if (!L_101)
		{
			goto IL_02bc;
		}
	}
	{
		int32_t L_102 = __this->___imageWidth_36;
		int32_t L_103;
		L_103 = Vector2Int_get_x_mA2CACB1B6E6B5AD0CCC32B2CD2EDCE3ECEB50576_inline((&V_0), NULL);
		if ((!(((uint32_t)L_102) == ((uint32_t)L_103))))
		{
			goto IL_02bc;
		}
	}
	{
		int32_t L_104 = __this->___imageHeight_37;
		int32_t L_105;
		L_105 = Vector2Int_get_y_m48454163ECF0B463FB5A16A0C4FC4B14DB0768B3_inline((&V_0), NULL);
		if ((((int32_t)L_104) == ((int32_t)L_105)))
		{
			goto IL_0332;
		}
	}

IL_02bc:
	{
		// spaceTable = sensorInt.pointCloudResolution == DepthSensorBase.PointCloudResolution.DepthCameraResolution ?
		//     sensorInt.GetDepthCameraSpaceTable(sensorData) : sensorInt.GetColorCameraSpaceTable(sensorData);
		DepthSensorBase_tB644BCAB82289DCDB9290A9B3A6972F0F13B0774* L_106 = __this->___sensorInt_18;
		NullCheck(L_106);
		int32_t L_107 = L_106->___pointCloudResolution_11;
		G_B34_0 = __this;
		if (!L_107)
		{
			G_B35_0 = __this;
			goto IL_02dd;
		}
	}
	{
		DepthSensorBase_tB644BCAB82289DCDB9290A9B3A6972F0F13B0774* L_108 = __this->___sensorInt_18;
		SensorData_t889044994784020C5FA25311175FB3F8B715DD27* L_109 = __this->___sensorData_17;
		NullCheck(L_108);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_110;
		L_110 = VirtualFuncInvoker1< Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*, SensorData_t889044994784020C5FA25311175FB3F8B715DD27* >::Invoke(111 /* UnityEngine.Vector3[] com.rfilkov.kinect.DepthSensorBase::GetColorCameraSpaceTable(com.rfilkov.kinect.KinectInterop/SensorData) */, L_108, L_109);
		G_B36_0 = L_110;
		G_B36_1 = G_B34_0;
		goto IL_02ee;
	}

IL_02dd:
	{
		DepthSensorBase_tB644BCAB82289DCDB9290A9B3A6972F0F13B0774* L_111 = __this->___sensorInt_18;
		SensorData_t889044994784020C5FA25311175FB3F8B715DD27* L_112 = __this->___sensorData_17;
		NullCheck(L_111);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_113;
		L_113 = VirtualFuncInvoker1< Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*, SensorData_t889044994784020C5FA25311175FB3F8B715DD27* >::Invoke(110 /* UnityEngine.Vector3[] com.rfilkov.kinect.DepthSensorBase::GetDepthCameraSpaceTable(com.rfilkov.kinect.KinectInterop/SensorData) */, L_111, L_112);
		G_B36_0 = L_113;
		G_B36_1 = G_B35_0;
	}

IL_02ee:
	{
		NullCheck(G_B36_1);
		G_B36_1->___spaceTable_20 = G_B36_0;
		Il2CppCodeGenWriteBarrier((void**)(&G_B36_1->___spaceTable_20), (void*)G_B36_0);
		// int spaceBufferLength = imageRes.x * imageRes.y * 3;
		int32_t L_114;
		L_114 = Vector2Int_get_x_mA2CACB1B6E6B5AD0CCC32B2CD2EDCE3ECEB50576_inline((&V_0), NULL);
		int32_t L_115;
		L_115 = Vector2Int_get_y_m48454163ECF0B463FB5A16A0C4FC4B14DB0768B3_inline((&V_0), NULL);
		V_5 = ((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_multiply(L_114, L_115)), 3));
		// spaceTableBuffer = KinectInterop.CreateComputeBuffer(spaceTableBuffer, spaceBufferLength, sizeof(float));
		ComputeBuffer_t51EADA9015EBCC1B982C5584E9AB2734415A8233* L_116 = __this->___spaceTableBuffer_21;
		int32_t L_117 = V_5;
		il2cpp_codegen_runtime_class_init_inline(KinectInterop_t8231C68411373688AA650B978611F932EE5860F9_il2cpp_TypeInfo_var);
		ComputeBuffer_t51EADA9015EBCC1B982C5584E9AB2734415A8233* L_118;
		L_118 = KinectInterop_CreateComputeBuffer_m56CEE7B21E1D61C4AE5E14E710017C1BA61E9475(L_116, L_117, 4, NULL);
		__this->___spaceTableBuffer_21 = L_118;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___spaceTableBuffer_21), (void*)L_118);
		// spaceTableBuffer.SetData(spaceTable);
		ComputeBuffer_t51EADA9015EBCC1B982C5584E9AB2734415A8233* L_119 = __this->___spaceTableBuffer_21;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_120 = __this->___spaceTable_20;
		NullCheck(L_119);
		ComputeBuffer_SetData_m9F845E6B347CE028FA9A987D740FC642D828013A(L_119, (RuntimeArray*)L_120, NULL);
		// spaceTable = null;
		__this->___spaceTable_20 = (Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___spaceTable_20), (void*)(Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*)NULL);
	}

IL_0332:
	{
		// if (imageWidth != imageRes.x || imageHeight != imageRes.y)
		int32_t L_121 = __this->___imageWidth_36;
		int32_t L_122;
		L_122 = Vector2Int_get_x_mA2CACB1B6E6B5AD0CCC32B2CD2EDCE3ECEB50576_inline((&V_0), NULL);
		if ((!(((uint32_t)L_121) == ((uint32_t)L_122))))
		{
			goto IL_0350;
		}
	}
	{
		int32_t L_123 = __this->___imageHeight_37;
		int32_t L_124;
		L_124 = Vector2Int_get_y_m48454163ECF0B463FB5A16A0C4FC4B14DB0768B3_inline((&V_0), NULL);
		if ((((int32_t)L_123) == ((int32_t)L_124)))
		{
			goto IL_0364;
		}
	}

IL_0350:
	{
		// CreateMeshVertInd(imageRes.x, imageRes.y);
		int32_t L_125;
		L_125 = Vector2Int_get_x_mA2CACB1B6E6B5AD0CCC32B2CD2EDCE3ECEB50576_inline((&V_0), NULL);
		int32_t L_126;
		L_126 = Vector2Int_get_y_m48454163ECF0B463FB5A16A0C4FC4B14DB0768B3_inline((&V_0), NULL);
		UserMeshRendererGpu_CreateMeshVertInd_m0B1FFAFAC59A80F07D7231DC2ABE0CA2ED116431(__this, L_125, L_126, NULL);
	}

IL_0364:
	{
		// imageWidth = imageRes.x;
		int32_t L_127;
		L_127 = Vector2Int_get_x_mA2CACB1B6E6B5AD0CCC32B2CD2EDCE3ECEB50576_inline((&V_0), NULL);
		__this->___imageWidth_36 = L_127;
		// imageHeight = imageRes.y;
		int32_t L_128;
		L_128 = Vector2Int_get_y_m48454163ECF0B463FB5A16A0C4FC4B14DB0768B3_inline((&V_0), NULL);
		__this->___imageHeight_37 = L_128;
		// }
		return;
	}
}
// System.Void com.rfilkov.components.UserMeshRendererGpu::CreateMeshVertInd(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UserMeshRendererGpu_CreateMeshVertInd_m0B1FFAFAC59A80F07D7231DC2ABE0CA2ED116431 (UserMeshRendererGpu_tCA868CF70531660324A409C0EF918366C78D6E54* __this, int32_t ___imageWidth0, int32_t ___imageHeight1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* V_3 = NULL;
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* V_4 = NULL;
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* V_5 = NULL;
	float V_6 = 0.0f;
	float V_7 = 0.0f;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	int32_t V_10 = 0;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_11 = NULL;
	int32_t V_12 = 0;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_13 = NULL;
	int32_t V_14 = 0;
	int32_t V_15 = 0;
	int32_t V_16 = 0;
	int32_t G_B20_0 = 0;
	UserMeshRendererGpu_tCA868CF70531660324A409C0EF918366C78D6E54* G_B20_1 = NULL;
	int32_t G_B19_0 = 0;
	UserMeshRendererGpu_tCA868CF70531660324A409C0EF918366C78D6E54* G_B19_1 = NULL;
	int32_t G_B21_0 = 0;
	int32_t G_B21_1 = 0;
	UserMeshRendererGpu_tCA868CF70531660324A409C0EF918366C78D6E54* G_B21_2 = NULL;
	{
		// int xVerts = (imageWidth / coarseFactor); // + 1;
		int32_t L_0 = ___imageWidth0;
		int32_t L_1 = __this->___coarseFactor_8;
		V_0 = ((int32_t)(L_0/L_1));
		// int yVerts = (imageHeight / coarseFactor); // + 1;
		int32_t L_2 = ___imageHeight1;
		int32_t L_3 = __this->___coarseFactor_8;
		V_1 = ((int32_t)(L_2/L_3));
		// int vCount = xVerts * yVerts;
		int32_t L_4 = V_0;
		int32_t L_5 = V_1;
		V_2 = ((int32_t)il2cpp_codegen_multiply(L_4, L_5));
		// mesh.Clear();
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_6 = __this->___mesh_14;
		NullCheck(L_6);
		Mesh_Clear_m0F95397EA143D31AD0B4D332E8C6FA25A7957BC0(L_6, NULL);
		// mesh.indexFormat = UnityEngine.Rendering.IndexFormat.UInt32;
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_7 = __this->___mesh_14;
		NullCheck(L_7);
		Mesh_set_indexFormat_mCCC7837A0916FA7A272159DA6AF984B0022488F4(L_7, 1, NULL);
		// Vector3[] meshVertices = new Vector3[vCount];
		int32_t L_8 = V_2;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_9 = (Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*)(Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*)SZArrayNew(Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C_il2cpp_TypeInfo_var, (uint32_t)L_8);
		V_3 = L_9;
		// Vector3[] meshNormals = new Vector3[vCount];
		int32_t L_10 = V_2;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_11 = (Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*)(Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*)SZArrayNew(Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C_il2cpp_TypeInfo_var, (uint32_t)L_10);
		V_4 = L_11;
		// Vector2[] meshUv = new Vector2[vCount];
		int32_t L_12 = V_2;
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_13 = (Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA*)(Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA*)SZArrayNew(Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA_il2cpp_TypeInfo_var, (uint32_t)L_12);
		V_5 = L_13;
		// float vsx = (float)coarseFactor / (float)imageWidth;
		int32_t L_14 = __this->___coarseFactor_8;
		int32_t L_15 = ___imageWidth0;
		V_6 = ((float)(((float)L_14)/((float)L_15)));
		// float vsy = (float)coarseFactor / (float)imageHeight;
		int32_t L_16 = __this->___coarseFactor_8;
		int32_t L_17 = ___imageHeight1;
		V_7 = ((float)(((float)L_16)/((float)L_17)));
		// for (int y = 0, vi = 0; y < yVerts; y++)
		V_8 = 0;
		// for (int y = 0, vi = 0; y < yVerts; y++)
		V_9 = 0;
		goto IL_00d5;
	}

IL_0064:
	{
		// for (int x = 0; x < xVerts; x++, vi++)
		V_10 = 0;
		goto IL_00ca;
	}

IL_0069:
	{
		// meshVertices[vi] = new Vector3(x * vsx, y * vsy, 0f);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_18 = V_3;
		int32_t L_19 = V_9;
		int32_t L_20 = V_10;
		float L_21 = V_6;
		int32_t L_22 = V_8;
		float L_23 = V_7;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24;
		memset((&L_24), 0, sizeof(L_24));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_24), ((float)il2cpp_codegen_multiply(((float)L_20), L_21)), ((float)il2cpp_codegen_multiply(((float)L_22), L_23)), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_18);
		(L_18)->SetAt(static_cast<il2cpp_array_size_t>(L_19), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_24);
		// meshNormals[vi] = new Vector3(0f, 1f, 0f);  // 0f, 0f, -1f
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_25 = V_4;
		int32_t L_26 = V_9;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_27;
		memset((&L_27), 0, sizeof(L_27));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_27), (0.0f), (1.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_25);
		(L_25)->SetAt(static_cast<il2cpp_array_size_t>(L_26), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_27);
		// meshUv[vi] = new Vector2(x * vsx, y * vsy);
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_28 = V_5;
		int32_t L_29 = V_9;
		int32_t L_30 = V_10;
		float L_31 = V_6;
		int32_t L_32 = V_8;
		float L_33 = V_7;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_34;
		memset((&L_34), 0, sizeof(L_34));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_34), ((float)il2cpp_codegen_multiply(((float)L_30), L_31)), ((float)il2cpp_codegen_multiply(((float)L_32), L_33)), /*hidden argument*/NULL);
		NullCheck(L_28);
		(L_28)->SetAt(static_cast<il2cpp_array_size_t>(L_29), (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7)L_34);
		// for (int x = 0; x < xVerts; x++, vi++)
		int32_t L_35 = V_10;
		V_10 = ((int32_t)il2cpp_codegen_add(L_35, 1));
		// for (int x = 0; x < xVerts; x++, vi++)
		int32_t L_36 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_add(L_36, 1));
	}

IL_00ca:
	{
		// for (int x = 0; x < xVerts; x++, vi++)
		int32_t L_37 = V_10;
		int32_t L_38 = V_0;
		if ((((int32_t)L_37) < ((int32_t)L_38)))
		{
			goto IL_0069;
		}
	}
	{
		// for (int y = 0, vi = 0; y < yVerts; y++)
		int32_t L_39 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add(L_39, 1));
	}

IL_00d5:
	{
		// for (int y = 0, vi = 0; y < yVerts; y++)
		int32_t L_40 = V_8;
		int32_t L_41 = V_1;
		if ((((int32_t)L_40) < ((int32_t)L_41)))
		{
			goto IL_0064;
		}
	}
	{
		// mesh.vertices = meshVertices;
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_42 = __this->___mesh_14;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_43 = V_3;
		NullCheck(L_42);
		Mesh_set_vertices_m5BB814D89E9ACA00DBF19F7D8E22CB73AC73FE5C(L_42, L_43, NULL);
		// mesh.normals = meshNormals;
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_44 = __this->___mesh_14;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_45 = V_4;
		NullCheck(L_44);
		Mesh_set_normals_m85D73193C49211BE9FA135FF72D5749B16A4760B(L_44, L_45, NULL);
		// mesh.uv = meshUv;
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_46 = __this->___mesh_14;
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_47 = V_5;
		NullCheck(L_46);
		Mesh_set_uv_m6ED9C50E0DA8166DD48AC40FD6C828B9AD2E9617(L_46, L_47, NULL);
		// if (showAsPointCloud)
		bool L_48 = __this->___showAsPointCloud_7;
		if (!L_48)
		{
			goto IL_013b;
		}
	}
	{
		// int[] meshIndices = new int[vCount];
		int32_t L_49 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_50 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_49);
		V_11 = L_50;
		// for (int i = 0; i < vCount; i++)
		V_12 = 0;
		goto IL_0122;
	}

IL_0115:
	{
		// meshIndices[i] = i;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_51 = V_11;
		int32_t L_52 = V_12;
		int32_t L_53 = V_12;
		NullCheck(L_51);
		(L_51)->SetAt(static_cast<il2cpp_array_size_t>(L_52), (int32_t)L_53);
		// for (int i = 0; i < vCount; i++)
		int32_t L_54 = V_12;
		V_12 = ((int32_t)il2cpp_codegen_add(L_54, 1));
	}

IL_0122:
	{
		// for (int i = 0; i < vCount; i++)
		int32_t L_55 = V_12;
		int32_t L_56 = V_2;
		if ((((int32_t)L_55) < ((int32_t)L_56)))
		{
			goto IL_0115;
		}
	}
	{
		// mesh.SetIndices(meshIndices, MeshTopology.Points, 0);
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_57 = __this->___mesh_14;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_58 = V_11;
		NullCheck(L_57);
		Mesh_SetIndices_m2AE7ED76A6C77D218C37C011DDB948589FD45B97(L_57, L_58, 5, 0, NULL);
		goto IL_01f9;
	}

IL_013b:
	{
		// int[] meshIndices = new int[(xVerts - 1) * (yVerts - 1) * 6];
		int32_t L_59 = V_0;
		int32_t L_60 = V_1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_61 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_subtract(L_59, 1)), ((int32_t)il2cpp_codegen_subtract(L_60, 1)))), 6)));
		V_13 = L_61;
		// for (int y = 0, ii = 0; y < (yVerts - 1); y++)
		V_14 = 0;
		// for (int y = 0, ii = 0; y < (yVerts - 1); y++)
		V_15 = 0;
		goto IL_01e0;
	}

IL_0156:
	{
		// for (int x = 0; x < (xVerts - 1); x++)
		V_16 = 0;
		goto IL_01d3;
	}

IL_015b:
	{
		// meshIndices[ii++] = (y + 1) * xVerts + x;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_62 = V_13;
		int32_t L_63 = V_15;
		int32_t L_64 = L_63;
		V_15 = ((int32_t)il2cpp_codegen_add(L_64, 1));
		int32_t L_65 = V_14;
		int32_t L_66 = V_0;
		int32_t L_67 = V_16;
		NullCheck(L_62);
		(L_62)->SetAt(static_cast<il2cpp_array_size_t>(L_64), (int32_t)((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_add(L_65, 1)), L_66)), L_67)));
		// meshIndices[ii++] = y * xVerts + x + 1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_68 = V_13;
		int32_t L_69 = V_15;
		int32_t L_70 = L_69;
		V_15 = ((int32_t)il2cpp_codegen_add(L_70, 1));
		int32_t L_71 = V_14;
		int32_t L_72 = V_0;
		int32_t L_73 = V_16;
		NullCheck(L_68);
		(L_68)->SetAt(static_cast<il2cpp_array_size_t>(L_70), (int32_t)((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_71, L_72)), L_73)), 1)));
		// meshIndices[ii++] = y * xVerts + x;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_74 = V_13;
		int32_t L_75 = V_15;
		int32_t L_76 = L_75;
		V_15 = ((int32_t)il2cpp_codegen_add(L_76, 1));
		int32_t L_77 = V_14;
		int32_t L_78 = V_0;
		int32_t L_79 = V_16;
		NullCheck(L_74);
		(L_74)->SetAt(static_cast<il2cpp_array_size_t>(L_76), (int32_t)((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_77, L_78)), L_79)));
		// meshIndices[ii++] = (y + 1) * xVerts + x + 1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_80 = V_13;
		int32_t L_81 = V_15;
		int32_t L_82 = L_81;
		V_15 = ((int32_t)il2cpp_codegen_add(L_82, 1));
		int32_t L_83 = V_14;
		int32_t L_84 = V_0;
		int32_t L_85 = V_16;
		NullCheck(L_80);
		(L_80)->SetAt(static_cast<il2cpp_array_size_t>(L_82), (int32_t)((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_add(L_83, 1)), L_84)), L_85)), 1)));
		// meshIndices[ii++] = y * xVerts + x + 1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_86 = V_13;
		int32_t L_87 = V_15;
		int32_t L_88 = L_87;
		V_15 = ((int32_t)il2cpp_codegen_add(L_88, 1));
		int32_t L_89 = V_14;
		int32_t L_90 = V_0;
		int32_t L_91 = V_16;
		NullCheck(L_86);
		(L_86)->SetAt(static_cast<il2cpp_array_size_t>(L_88), (int32_t)((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_89, L_90)), L_91)), 1)));
		// meshIndices[ii++] = (y + 1) * xVerts + x;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_92 = V_13;
		int32_t L_93 = V_15;
		int32_t L_94 = L_93;
		V_15 = ((int32_t)il2cpp_codegen_add(L_94, 1));
		int32_t L_95 = V_14;
		int32_t L_96 = V_0;
		int32_t L_97 = V_16;
		NullCheck(L_92);
		(L_92)->SetAt(static_cast<il2cpp_array_size_t>(L_94), (int32_t)((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_add(L_95, 1)), L_96)), L_97)));
		// for (int x = 0; x < (xVerts - 1); x++)
		int32_t L_98 = V_16;
		V_16 = ((int32_t)il2cpp_codegen_add(L_98, 1));
	}

IL_01d3:
	{
		// for (int x = 0; x < (xVerts - 1); x++)
		int32_t L_99 = V_16;
		int32_t L_100 = V_0;
		if ((((int32_t)L_99) < ((int32_t)((int32_t)il2cpp_codegen_subtract(L_100, 1)))))
		{
			goto IL_015b;
		}
	}
	{
		// for (int y = 0, ii = 0; y < (yVerts - 1); y++)
		int32_t L_101 = V_14;
		V_14 = ((int32_t)il2cpp_codegen_add(L_101, 1));
	}

IL_01e0:
	{
		// for (int y = 0, ii = 0; y < (yVerts - 1); y++)
		int32_t L_102 = V_14;
		int32_t L_103 = V_1;
		if ((((int32_t)L_102) < ((int32_t)((int32_t)il2cpp_codegen_subtract(L_103, 1)))))
		{
			goto IL_0156;
		}
	}
	{
		// mesh.SetIndices(meshIndices, MeshTopology.Triangles, 0);
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_104 = __this->___mesh_14;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_105 = V_13;
		NullCheck(L_104);
		Mesh_SetIndices_m2AE7ED76A6C77D218C37C011DDB948589FD45B97(L_104, L_105, 0, 0, NULL);
	}

IL_01f9:
	{
		// meshParamsCache = coarseFactor + (showAsPointCloud ? 10 : 0);
		int32_t L_106 = __this->___coarseFactor_8;
		bool L_107 = __this->___showAsPointCloud_7;
		G_B19_0 = L_106;
		G_B19_1 = __this;
		if (L_107)
		{
			G_B20_0 = L_106;
			G_B20_1 = __this;
			goto IL_020b;
		}
	}
	{
		G_B21_0 = 0;
		G_B21_1 = G_B19_0;
		G_B21_2 = G_B19_1;
		goto IL_020d;
	}

IL_020b:
	{
		G_B21_0 = ((int32_t)10);
		G_B21_1 = G_B20_0;
		G_B21_2 = G_B20_1;
	}

IL_020d:
	{
		NullCheck(G_B21_2);
		G_B21_2->___meshParamsCache_39 = ((int32_t)il2cpp_codegen_add(G_B21_1, G_B21_0));
		// }
		return;
	}
}
// System.Void com.rfilkov.components.UserMeshRendererGpu::FinishMesh()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UserMeshRendererGpu_FinishMesh_m57A4DF940DAF05911E9CE8D3F71AFF4BBCB286D5 (UserMeshRendererGpu_tCA868CF70531660324A409C0EF918366C78D6E54* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (sensorInt)
		DepthSensorBase_tB644BCAB82289DCDB9290A9B3A6972F0F13B0774* L_0 = __this->___sensorInt_18;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_0, NULL);
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		// sensorInt.pointCloudColorTexture = null;
		DepthSensorBase_tB644BCAB82289DCDB9290A9B3A6972F0F13B0774* L_2 = __this->___sensorInt_18;
		NullCheck(L_2);
		L_2->___pointCloudColorTexture_13 = (RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&L_2->___pointCloudColorTexture_13), (void*)(RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27*)NULL);
	}

IL_0019:
	{
		// if(depthImageBuffer != null /**&& depthBufferCreated*/)
		ComputeBuffer_t51EADA9015EBCC1B982C5584E9AB2734415A8233* L_3 = __this->___depthImageBuffer_24;
		if (!L_3)
		{
			goto IL_0045;
		}
	}
	{
		// depthImageCopy = null;
		__this->___depthImageCopy_23 = (UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___depthImageCopy_23), (void*)(UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83*)NULL);
		// depthImageBuffer.Release();
		ComputeBuffer_t51EADA9015EBCC1B982C5584E9AB2734415A8233* L_4 = __this->___depthImageBuffer_24;
		NullCheck(L_4);
		ComputeBuffer_Release_mF1F157C929A0A5B2FDCD703A286EE09723450B72(L_4, NULL);
		// depthImageBuffer.Dispose();
		ComputeBuffer_t51EADA9015EBCC1B982C5584E9AB2734415A8233* L_5 = __this->___depthImageBuffer_24;
		NullCheck(L_5);
		ComputeBuffer_Dispose_mBCA0F8A5BE75A41C77E1FCFBCB4EAE84A45D6BF2(L_5, NULL);
		// depthImageBuffer = null;
		__this->___depthImageBuffer_24 = (ComputeBuffer_t51EADA9015EBCC1B982C5584E9AB2734415A8233*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___depthImageBuffer_24), (void*)(ComputeBuffer_t51EADA9015EBCC1B982C5584E9AB2734415A8233*)NULL);
	}

IL_0045:
	{
		// if (sensorData.colorDepthBuffer != null /**&& depthBufferCreated*/)
		SensorData_t889044994784020C5FA25311175FB3F8B715DD27* L_6 = __this->___sensorData_17;
		NullCheck(L_6);
		ComputeBuffer_t51EADA9015EBCC1B982C5584E9AB2734415A8233* L_7 = L_6->___colorDepthBuffer_64;
		if (!L_7)
		{
			goto IL_007e;
		}
	}
	{
		// sensorData.colorDepthBuffer.Release();
		SensorData_t889044994784020C5FA25311175FB3F8B715DD27* L_8 = __this->___sensorData_17;
		NullCheck(L_8);
		ComputeBuffer_t51EADA9015EBCC1B982C5584E9AB2734415A8233* L_9 = L_8->___colorDepthBuffer_64;
		NullCheck(L_9);
		ComputeBuffer_Release_mF1F157C929A0A5B2FDCD703A286EE09723450B72(L_9, NULL);
		// sensorData.colorDepthBuffer.Dispose();
		SensorData_t889044994784020C5FA25311175FB3F8B715DD27* L_10 = __this->___sensorData_17;
		NullCheck(L_10);
		ComputeBuffer_t51EADA9015EBCC1B982C5584E9AB2734415A8233* L_11 = L_10->___colorDepthBuffer_64;
		NullCheck(L_11);
		ComputeBuffer_Dispose_mBCA0F8A5BE75A41C77E1FCFBCB4EAE84A45D6BF2(L_11, NULL);
		// sensorData.colorDepthBuffer = null;
		SensorData_t889044994784020C5FA25311175FB3F8B715DD27* L_12 = __this->___sensorData_17;
		NullCheck(L_12);
		L_12->___colorDepthBuffer_64 = (ComputeBuffer_t51EADA9015EBCC1B982C5584E9AB2734415A8233*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&L_12->___colorDepthBuffer_64), (void*)(ComputeBuffer_t51EADA9015EBCC1B982C5584E9AB2734415A8233*)NULL);
	}

IL_007e:
	{
		// if (sensorData.colorInfraredBuffer != null)
		SensorData_t889044994784020C5FA25311175FB3F8B715DD27* L_13 = __this->___sensorData_17;
		NullCheck(L_13);
		ComputeBuffer_t51EADA9015EBCC1B982C5584E9AB2734415A8233* L_14 = L_13->___colorInfraredBuffer_67;
		if (!L_14)
		{
			goto IL_00b7;
		}
	}
	{
		// sensorData.colorInfraredBuffer.Release();
		SensorData_t889044994784020C5FA25311175FB3F8B715DD27* L_15 = __this->___sensorData_17;
		NullCheck(L_15);
		ComputeBuffer_t51EADA9015EBCC1B982C5584E9AB2734415A8233* L_16 = L_15->___colorInfraredBuffer_67;
		NullCheck(L_16);
		ComputeBuffer_Release_mF1F157C929A0A5B2FDCD703A286EE09723450B72(L_16, NULL);
		// sensorData.colorInfraredBuffer.Dispose();
		SensorData_t889044994784020C5FA25311175FB3F8B715DD27* L_17 = __this->___sensorData_17;
		NullCheck(L_17);
		ComputeBuffer_t51EADA9015EBCC1B982C5584E9AB2734415A8233* L_18 = L_17->___colorInfraredBuffer_67;
		NullCheck(L_18);
		ComputeBuffer_Dispose_mBCA0F8A5BE75A41C77E1FCFBCB4EAE84A45D6BF2(L_18, NULL);
		// sensorData.colorInfraredBuffer = null;
		SensorData_t889044994784020C5FA25311175FB3F8B715DD27* L_19 = __this->___sensorData_17;
		NullCheck(L_19);
		L_19->___colorInfraredBuffer_67 = (ComputeBuffer_t51EADA9015EBCC1B982C5584E9AB2734415A8233*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&L_19->___colorInfraredBuffer_67), (void*)(ComputeBuffer_t51EADA9015EBCC1B982C5584E9AB2734415A8233*)NULL);
	}

IL_00b7:
	{
		// if (bodyIndexBuffer != null /**&& bodyIndexBufferCreated*/)
		ComputeBuffer_t51EADA9015EBCC1B982C5584E9AB2734415A8233* L_20 = __this->___bodyIndexBuffer_26;
		if (!L_20)
		{
			goto IL_00e3;
		}
	}
	{
		// bodyIndexCopy = null;
		__this->___bodyIndexCopy_25 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___bodyIndexCopy_25), (void*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)NULL);
		// bodyIndexBuffer.Release();
		ComputeBuffer_t51EADA9015EBCC1B982C5584E9AB2734415A8233* L_21 = __this->___bodyIndexBuffer_26;
		NullCheck(L_21);
		ComputeBuffer_Release_mF1F157C929A0A5B2FDCD703A286EE09723450B72(L_21, NULL);
		// bodyIndexBuffer.Dispose();
		ComputeBuffer_t51EADA9015EBCC1B982C5584E9AB2734415A8233* L_22 = __this->___bodyIndexBuffer_26;
		NullCheck(L_22);
		ComputeBuffer_Dispose_mBCA0F8A5BE75A41C77E1FCFBCB4EAE84A45D6BF2(L_22, NULL);
		// bodyIndexBuffer = null;
		__this->___bodyIndexBuffer_26 = (ComputeBuffer_t51EADA9015EBCC1B982C5584E9AB2734415A8233*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___bodyIndexBuffer_26), (void*)(ComputeBuffer_t51EADA9015EBCC1B982C5584E9AB2734415A8233*)NULL);
	}

IL_00e3:
	{
		// if (sensorData.colorBodyIndexBuffer != null /**&& bodyIndexBufferCreated*/)
		SensorData_t889044994784020C5FA25311175FB3F8B715DD27* L_23 = __this->___sensorData_17;
		NullCheck(L_23);
		ComputeBuffer_t51EADA9015EBCC1B982C5584E9AB2734415A8233* L_24 = L_23->___colorBodyIndexBuffer_71;
		if (!L_24)
		{
			goto IL_011c;
		}
	}
	{
		// sensorData.colorBodyIndexBuffer.Release();
		SensorData_t889044994784020C5FA25311175FB3F8B715DD27* L_25 = __this->___sensorData_17;
		NullCheck(L_25);
		ComputeBuffer_t51EADA9015EBCC1B982C5584E9AB2734415A8233* L_26 = L_25->___colorBodyIndexBuffer_71;
		NullCheck(L_26);
		ComputeBuffer_Release_mF1F157C929A0A5B2FDCD703A286EE09723450B72(L_26, NULL);
		// sensorData.colorBodyIndexBuffer.Dispose();
		SensorData_t889044994784020C5FA25311175FB3F8B715DD27* L_27 = __this->___sensorData_17;
		NullCheck(L_27);
		ComputeBuffer_t51EADA9015EBCC1B982C5584E9AB2734415A8233* L_28 = L_27->___colorBodyIndexBuffer_71;
		NullCheck(L_28);
		ComputeBuffer_Dispose_mBCA0F8A5BE75A41C77E1FCFBCB4EAE84A45D6BF2(L_28, NULL);
		// sensorData.colorBodyIndexBuffer = null;
		SensorData_t889044994784020C5FA25311175FB3F8B715DD27* L_29 = __this->___sensorData_17;
		NullCheck(L_29);
		L_29->___colorBodyIndexBuffer_71 = (ComputeBuffer_t51EADA9015EBCC1B982C5584E9AB2734415A8233*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&L_29->___colorBodyIndexBuffer_71), (void*)(ComputeBuffer_t51EADA9015EBCC1B982C5584E9AB2734415A8233*)NULL);
	}

IL_011c:
	{
		// if (colorTexture && colorTextureCreated)
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_30 = __this->___colorTexture_27;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_31;
		L_31 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_30, NULL);
		if (!L_31)
		{
			goto IL_0143;
		}
	}
	{
		bool L_32 = __this->___colorTextureCreated_29;
		if (!L_32)
		{
			goto IL_0143;
		}
	}
	{
		// colorTexture.Release();
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_33 = __this->___colorTexture_27;
		NullCheck(L_33);
		RenderTexture_Release_mE7399D6187A0E38945D2913D0FFB41247143AB1E(L_33, NULL);
		// colorTexture = null;
		__this->___colorTexture_27 = (RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___colorTexture_27), (void*)(RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27*)NULL);
	}

IL_0143:
	{
		// if (colorTextureCopy)
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_34 = __this->___colorTextureCopy_28;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_35;
		L_35 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_34, NULL);
		if (!L_35)
		{
			goto IL_0162;
		}
	}
	{
		// colorTextureCopy.Release();
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_36 = __this->___colorTextureCopy_28;
		NullCheck(L_36);
		RenderTexture_Release_mE7399D6187A0E38945D2913D0FFB41247143AB1E(L_36, NULL);
		// colorTextureCopy = null;
		__this->___colorTextureCopy_28 = (RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___colorTextureCopy_28), (void*)(RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27*)NULL);
	}

IL_0162:
	{
		// if (spaceTableBuffer != null)
		ComputeBuffer_t51EADA9015EBCC1B982C5584E9AB2734415A8233* L_37 = __this->___spaceTableBuffer_21;
		if (!L_37)
		{
			goto IL_017c;
		}
	}
	{
		// spaceTableBuffer.Dispose();
		ComputeBuffer_t51EADA9015EBCC1B982C5584E9AB2734415A8233* L_38 = __this->___spaceTableBuffer_21;
		NullCheck(L_38);
		ComputeBuffer_Dispose_mBCA0F8A5BE75A41C77E1FCFBCB4EAE84A45D6BF2(L_38, NULL);
		// spaceTableBuffer = null;
		__this->___spaceTableBuffer_21 = (ComputeBuffer_t51EADA9015EBCC1B982C5584E9AB2734415A8233*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___spaceTableBuffer_21), (void*)(ComputeBuffer_t51EADA9015EBCC1B982C5584E9AB2734415A8233*)NULL);
	}

IL_017c:
	{
		// bMeshInited = false;
		__this->___bMeshInited_38 = (bool)0;
		// }
		return;
	}
}
// System.Void com.rfilkov.components.UserMeshRendererGpu::UpdateMesh()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UserMeshRendererGpu_UpdateMesh_mCEC0A8587886F1D7899822AB4588E1001A2BE0F0 (UserMeshRendererGpu_tCA868CF70531660324A409C0EF918366C78D6E54* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisMeshCollider_tB525E4DDE383252364ED0BDD32CF2B53914EE455_mFC0F02CCD26A6A186031CF43E92D7B60EA1CC370_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KinectInterop_t8231C68411373688AA650B978611F932EE5860F9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2882AFDC9AFF078CA36446363C6C3AEB1FE725BA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral28BBC4BDE4FD330B45DC7DD7CC37F01B777452E1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral37A8260E2CB0CCF955B515F359CCD60D4008D7A0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral430CE0466EFCD60F4DF5494346A24D04BF1432FB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral459137C36C2D4B342C0C73E9F6B1A0DBFB4B8DF6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral737C78925E3060931CE71D40F1BCD17738A7D47B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7A654FF8208F7E303716EF5E5E785A7B0C3683EB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8C729D68F4DD351080E6B38FB15B3A52C5CB089B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB305AB6ADB86227B3BC29383DF835E1D5F42CDFD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC821BB1D926D8A2077EC957529D986291F9D7A70);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCF3849B6655176336DB3D84B127DDDBB1DCB56EE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD8DA0A28C68461D5CAFDC3A6642F11CC60058662);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA29D557A88BE41D27E66EC259BAED325FF1177D);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* V_5 = NULL;
	int32_t V_6 = 0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_7;
	memset((&V_7), 0, sizeof(V_7));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_8;
	memset((&V_8), 0, sizeof(V_8));
	MeshCollider_tB525E4DDE383252364ED0BDD32CF2B53914EE455* V_9 = NULL;
	int32_t G_B9_0 = 0;
	int32_t G_B8_0 = 0;
	int32_t G_B10_0 = 0;
	int32_t G_B10_1 = 0;
	RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* G_B26_0 = NULL;
	String_t* G_B33_0 = NULL;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* G_B33_1 = NULL;
	String_t* G_B32_0 = NULL;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* G_B32_1 = NULL;
	int32_t G_B34_0 = 0;
	String_t* G_B34_1 = NULL;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* G_B34_2 = NULL;
	String_t* G_B36_0 = NULL;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* G_B36_1 = NULL;
	String_t* G_B35_0 = NULL;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* G_B35_1 = NULL;
	int32_t G_B37_0 = 0;
	String_t* G_B37_1 = NULL;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* G_B37_2 = NULL;
	{
		// if (bMeshInited && colorTexture != null && sensorData.depthImage != null && sensorData.depthCamIntr != null && meshShaderMat != null &&
		//     lastDepthFrameTime != sensorData.lastDepthFrameTime && (Time.time - lastMeshUpdateTime) >= updateMeshInterval)
		bool L_0 = __this->___bMeshInited_38;
		if (!L_0)
		{
			goto IL_049b;
		}
	}
	{
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_1 = __this->___colorTexture_27;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_1, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_2)
		{
			goto IL_049b;
		}
	}
	{
		SensorData_t889044994784020C5FA25311175FB3F8B715DD27* L_3 = __this->___sensorData_17;
		NullCheck(L_3);
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_4 = L_3->___depthImage_27;
		if (!L_4)
		{
			goto IL_049b;
		}
	}
	{
		SensorData_t889044994784020C5FA25311175FB3F8B715DD27* L_5 = __this->___sensorData_17;
		NullCheck(L_5);
		CameraIntrinsics_t272DC8A0981DE0A132DFC4E7B48C942191D56EFF* L_6 = L_5->___depthCamIntr_9;
		if (!L_6)
		{
			goto IL_049b;
		}
	}
	{
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_7 = __this->___meshShaderMat_19;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_8;
		L_8 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_7, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_8)
		{
			goto IL_049b;
		}
	}
	{
		uint64_t L_9 = __this->___lastDepthFrameTime_30;
		SensorData_t889044994784020C5FA25311175FB3F8B715DD27* L_10 = __this->___sensorData_17;
		NullCheck(L_10);
		uint64_t L_11 = L_10->___lastDepthFrameTime_28;
		if ((((int64_t)L_9) == ((int64_t)L_11)))
		{
			goto IL_049b;
		}
	}
	{
		float L_12;
		L_12 = Time_get_time_m0BEE9AACD0723FE414465B77C9C64D12263675F3(NULL);
		float L_13 = __this->___lastMeshUpdateTime_31;
		float L_14 = __this->___updateMeshInterval_11;
		if ((!(((float)((float)il2cpp_codegen_subtract(L_12, L_13))) >= ((float)L_14))))
		{
			goto IL_049b;
		}
	}
	{
		// lastDepthFrameTime = sensorData.lastDepthFrameTime;
		SensorData_t889044994784020C5FA25311175FB3F8B715DD27* L_15 = __this->___sensorData_17;
		NullCheck(L_15);
		uint64_t L_16 = L_15->___lastDepthFrameTime_28;
		__this->___lastDepthFrameTime_30 = L_16;
		// lastMeshUpdateTime = Time.time;
		float L_17;
		L_17 = Time_get_time_m0BEE9AACD0723FE414465B77C9C64D12263675F3(NULL);
		__this->___lastMeshUpdateTime_31 = L_17;
		// UpdateTexturesAndBuffers();
		UserMeshRendererGpu_UpdateTexturesAndBuffers_mF8FE91E153927AD29D6F1A975306A45AF328C892(__this, NULL);
		// int paramsCache = coarseFactor + (showAsPointCloud ? 10 : 0);
		int32_t L_18 = __this->___coarseFactor_8;
		bool L_19 = __this->___showAsPointCloud_7;
		G_B8_0 = L_18;
		if (L_19)
		{
			G_B9_0 = L_18;
			goto IL_00ad;
		}
	}
	{
		G_B10_0 = 0;
		G_B10_1 = G_B8_0;
		goto IL_00af;
	}

IL_00ad:
	{
		G_B10_0 = ((int32_t)10);
		G_B10_1 = G_B9_0;
	}

IL_00af:
	{
		V_0 = ((int32_t)il2cpp_codegen_add(G_B10_1, G_B10_0));
		// if(meshParamsCache != paramsCache)
		int32_t L_20 = __this->___meshParamsCache_39;
		int32_t L_21 = V_0;
		if ((((int32_t)L_20) == ((int32_t)L_21)))
		{
			goto IL_00cc;
		}
	}
	{
		// CreateMeshVertInd(imageWidth, imageHeight);
		int32_t L_22 = __this->___imageWidth_36;
		int32_t L_23 = __this->___imageHeight_37;
		UserMeshRendererGpu_CreateMeshVertInd_m0B1FFAFAC59A80F07D7231DC2ABE0CA2ED116431(__this, L_22, L_23, NULL);
	}

IL_00cc:
	{
		// if (depthImageBuffer != null && sensorData.depthImage != null /**&& depthBufferCreated*/)
		ComputeBuffer_t51EADA9015EBCC1B982C5584E9AB2734415A8233* L_24 = __this->___depthImageBuffer_24;
		if (!L_24)
		{
			goto IL_0126;
		}
	}
	{
		SensorData_t889044994784020C5FA25311175FB3F8B715DD27* L_25 = __this->___sensorData_17;
		NullCheck(L_25);
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_26 = L_25->___depthImage_27;
		if (!L_26)
		{
			goto IL_0126;
		}
	}
	{
		// KinectInterop.CopyBytes(sensorData.depthImage, sizeof(ushort), depthImageCopy, sizeof(ushort));
		SensorData_t889044994784020C5FA25311175FB3F8B715DD27* L_27 = __this->___sensorData_17;
		NullCheck(L_27);
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_28 = L_27->___depthImage_27;
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_29 = __this->___depthImageCopy_23;
		il2cpp_codegen_runtime_class_init_inline(KinectInterop_t8231C68411373688AA650B978611F932EE5860F9_il2cpp_TypeInfo_var);
		KinectInterop_CopyBytes_m393995130F2D35AAAD0AA07536EA2E9848D61D9F((RuntimeArray*)L_28, 2, (RuntimeArray*)L_29, 2, NULL);
		// int depthBufferLength = sensorData.depthImageWidth * sensorData.depthImageHeight / 2;
		SensorData_t889044994784020C5FA25311175FB3F8B715DD27* L_30 = __this->___sensorData_17;
		NullCheck(L_30);
		int32_t L_31 = L_30->___depthImageWidth_25;
		SensorData_t889044994784020C5FA25311175FB3F8B715DD27* L_32 = __this->___sensorData_17;
		NullCheck(L_32);
		int32_t L_33 = L_32->___depthImageHeight_26;
		V_3 = ((int32_t)(((int32_t)il2cpp_codegen_multiply(L_31, L_33))/2));
		// KinectInterop.SetComputeBufferData(depthImageBuffer, depthImageCopy, depthBufferLength, sizeof(uint));
		ComputeBuffer_t51EADA9015EBCC1B982C5584E9AB2734415A8233* L_34 = __this->___depthImageBuffer_24;
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_35 = __this->___depthImageCopy_23;
		int32_t L_36 = V_3;
		KinectInterop_SetComputeBufferData_m7747C88D8D9C44D03C1B7A485FFE3563F033EF66(L_34, (RuntimeArray*)L_35, L_36, 4, NULL);
	}

IL_0126:
	{
		// if (bodyIndexBuffer != null && sensorData.bodyIndexImage != null /**&& bodyIndexBufferCreated*/)
		ComputeBuffer_t51EADA9015EBCC1B982C5584E9AB2734415A8233* L_37 = __this->___bodyIndexBuffer_26;
		if (!L_37)
		{
			goto IL_0182;
		}
	}
	{
		SensorData_t889044994784020C5FA25311175FB3F8B715DD27* L_38 = __this->___sensorData_17;
		NullCheck(L_38);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_39 = L_38->___bodyIndexImage_36;
		if (!L_39)
		{
			goto IL_0182;
		}
	}
	{
		// KinectInterop.CopyBytes(sensorData.bodyIndexImage, sizeof(byte), bodyIndexCopy, sizeof(byte));
		SensorData_t889044994784020C5FA25311175FB3F8B715DD27* L_40 = __this->___sensorData_17;
		NullCheck(L_40);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_41 = L_40->___bodyIndexImage_36;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_42 = __this->___bodyIndexCopy_25;
		il2cpp_codegen_runtime_class_init_inline(KinectInterop_t8231C68411373688AA650B978611F932EE5860F9_il2cpp_TypeInfo_var);
		KinectInterop_CopyBytes_m393995130F2D35AAAD0AA07536EA2E9848D61D9F((RuntimeArray*)L_41, 1, (RuntimeArray*)L_42, 1, NULL);
		// int bodyIndexBufferLength = sensorData.depthImageWidth * sensorData.depthImageHeight / 4;
		SensorData_t889044994784020C5FA25311175FB3F8B715DD27* L_43 = __this->___sensorData_17;
		NullCheck(L_43);
		int32_t L_44 = L_43->___depthImageWidth_25;
		SensorData_t889044994784020C5FA25311175FB3F8B715DD27* L_45 = __this->___sensorData_17;
		NullCheck(L_45);
		int32_t L_46 = L_45->___depthImageHeight_26;
		V_4 = ((int32_t)(((int32_t)il2cpp_codegen_multiply(L_44, L_46))/4));
		// KinectInterop.SetComputeBufferData(bodyIndexBuffer, bodyIndexCopy, bodyIndexBufferLength, sizeof(uint));
		ComputeBuffer_t51EADA9015EBCC1B982C5584E9AB2734415A8233* L_47 = __this->___bodyIndexBuffer_26;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_48 = __this->___bodyIndexCopy_25;
		int32_t L_49 = V_4;
		KinectInterop_SetComputeBufferData_m7747C88D8D9C44D03C1B7A485FFE3563F033EF66(L_47, (RuntimeArray*)L_48, L_49, 4, NULL);
	}

IL_0182:
	{
		// switch (meshTexture)
		int32_t L_50 = __this->___meshTexture_10;
		V_6 = L_50;
		int32_t L_51 = V_6;
		if (!L_51)
		{
			goto IL_0195;
		}
	}
	{
		int32_t L_52 = V_6;
		if ((((int32_t)L_52) == ((int32_t)1)))
		{
			goto IL_01b6;
		}
	}
	{
		goto IL_01f4;
	}

IL_0195:
	{
		// if (colorTexture != null)
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_53 = __this->___colorTexture_27;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_54;
		L_54 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_53, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_54)
		{
			goto IL_01f4;
		}
	}
	{
		// Graphics.CopyTexture(colorTexture, colorTextureCopy);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_55 = __this->___colorTexture_27;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_56 = __this->___colorTextureCopy_28;
		il2cpp_codegen_runtime_class_init_inline(Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var);
		Graphics_CopyTexture_m34BA416A531684743117976772DD8B218441DB93(L_55, L_56, NULL);
		// break;
		goto IL_01f4;
	}

IL_01b6:
	{
		// Texture infraredTexture = sensorInt.pointCloudResolution == DepthSensorBase.PointCloudResolution.DepthCameraResolution ?
		//     sensorData.infraredImageTexture : sensorData.colorInfraredTexture;
		DepthSensorBase_tB644BCAB82289DCDB9290A9B3A6972F0F13B0774* L_57 = __this->___sensorInt_18;
		NullCheck(L_57);
		int32_t L_58 = L_57->___pointCloudResolution_11;
		if (!L_58)
		{
			goto IL_01d0;
		}
	}
	{
		SensorData_t889044994784020C5FA25311175FB3F8B715DD27* L_59 = __this->___sensorData_17;
		NullCheck(L_59);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_60 = L_59->___colorInfraredTexture_68;
		G_B26_0 = L_60;
		goto IL_01db;
	}

IL_01d0:
	{
		SensorData_t889044994784020C5FA25311175FB3F8B715DD27* L_61 = __this->___sensorData_17;
		NullCheck(L_61);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_62 = L_61->___infraredImageTexture_46;
		G_B26_0 = L_62;
	}

IL_01db:
	{
		V_5 = G_B26_0;
		// if (infraredTexture != null)
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_63 = V_5;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_64;
		L_64 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_63, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_64)
		{
			goto IL_01f4;
		}
	}
	{
		// Graphics.CopyTexture(infraredTexture, colorTextureCopy);
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_65 = V_5;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_66 = __this->___colorTextureCopy_28;
		il2cpp_codegen_runtime_class_init_inline(Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var);
		Graphics_CopyTexture_m34BA416A531684743117976772DD8B218441DB93(L_65, L_66, NULL);
	}

IL_01f4:
	{
		// if (sourceImageResolution == DepthSensorBase.PointCloudResolution.DepthCameraResolution)
		int32_t L_67 = __this->___sourceImageResolution_6;
		if (L_67)
		{
			goto IL_022a;
		}
	}
	{
		// meshShaderMat.SetBuffer("_DepthMap", depthImageBuffer);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_68 = __this->___meshShaderMat_19;
		ComputeBuffer_t51EADA9015EBCC1B982C5584E9AB2734415A8233* L_69 = __this->___depthImageBuffer_24;
		NullCheck(L_68);
		Material_SetBuffer_mBE41E02CB7CE8817306B9F292A3EC786E1C84ED5(L_68, _stringLiteral2882AFDC9AFF078CA36446363C6C3AEB1FE725BA, L_69, NULL);
		// meshShaderMat.SetBuffer("_BodyIndexMap", bodyIndexBuffer);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_70 = __this->___meshShaderMat_19;
		ComputeBuffer_t51EADA9015EBCC1B982C5584E9AB2734415A8233* L_71 = __this->___bodyIndexBuffer_26;
		NullCheck(L_70);
		Material_SetBuffer_mBE41E02CB7CE8817306B9F292A3EC786E1C84ED5(L_70, _stringLiteralCF3849B6655176336DB3D84B127DDDBB1DCB56EE, L_71, NULL);
		goto IL_0260;
	}

IL_022a:
	{
		// meshShaderMat.SetBuffer("_DepthMap", sensorData.colorDepthBuffer);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_72 = __this->___meshShaderMat_19;
		SensorData_t889044994784020C5FA25311175FB3F8B715DD27* L_73 = __this->___sensorData_17;
		NullCheck(L_73);
		ComputeBuffer_t51EADA9015EBCC1B982C5584E9AB2734415A8233* L_74 = L_73->___colorDepthBuffer_64;
		NullCheck(L_72);
		Material_SetBuffer_mBE41E02CB7CE8817306B9F292A3EC786E1C84ED5(L_72, _stringLiteral2882AFDC9AFF078CA36446363C6C3AEB1FE725BA, L_74, NULL);
		// meshShaderMat.SetBuffer("_BodyIndexMap", sensorData.colorBodyIndexBuffer);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_75 = __this->___meshShaderMat_19;
		SensorData_t889044994784020C5FA25311175FB3F8B715DD27* L_76 = __this->___sensorData_17;
		NullCheck(L_76);
		ComputeBuffer_t51EADA9015EBCC1B982C5584E9AB2734415A8233* L_77 = L_76->___colorBodyIndexBuffer_71;
		NullCheck(L_75);
		Material_SetBuffer_mBE41E02CB7CE8817306B9F292A3EC786E1C84ED5(L_75, _stringLiteralCF3849B6655176336DB3D84B127DDDBB1DCB56EE, L_77, NULL);
	}

IL_0260:
	{
		// meshShaderMat.SetTexture("_ColorTex", colorTextureCopy);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_78 = __this->___meshShaderMat_19;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_79 = __this->___colorTextureCopy_28;
		NullCheck(L_78);
		Material_SetTexture_m06083C3F52EF02FFB1177901D9907314F280F9A5(L_78, _stringLiteralC821BB1D926D8A2077EC957529D986291F9D7A70, L_79, NULL);
		// meshShaderMat.SetVector("_SpaceScale", sensorSpaceScale);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_80 = __this->___meshShaderMat_19;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_81 = __this->___sensorSpaceScale_22;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_82;
		L_82 = Vector4_op_Implicit_mB05287DC52FC87A756AB80E837E1EC22FEEB3937_inline(L_81, NULL);
		NullCheck(L_80);
		Material_SetVector_m69444B8040D955821F241113446CC8713C9E12D1(L_80, _stringLiteralB305AB6ADB86227B3BC29383DF835E1D5F42CDFD, L_82, NULL);
		// meshShaderMat.SetBuffer("_SpaceTable", spaceTableBuffer);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_83 = __this->___meshShaderMat_19;
		ComputeBuffer_t51EADA9015EBCC1B982C5584E9AB2734415A8233* L_84 = __this->___spaceTableBuffer_21;
		NullCheck(L_83);
		Material_SetBuffer_mBE41E02CB7CE8817306B9F292A3EC786E1C84ED5(L_83, _stringLiteralD8DA0A28C68461D5CAFDC3A6642F11CC60058662, L_84, NULL);
		// meshShaderMat.SetVector("_TexRes", new Vector2(imageWidth, imageHeight));
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_85 = __this->___meshShaderMat_19;
		int32_t L_86 = __this->___imageWidth_36;
		int32_t L_87 = __this->___imageHeight_37;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_88;
		memset((&L_88), 0, sizeof(L_88));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_88), ((float)L_86), ((float)L_87), /*hidden argument*/NULL);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_89;
		L_89 = Vector4_op_Implicit_m6162D8136CFE97A5A8BD3B764F9074DB96AA5CD0_inline(L_88, NULL);
		NullCheck(L_85);
		Material_SetVector_m69444B8040D955821F241113446CC8713C9E12D1(L_85, _stringLiteral430CE0466EFCD60F4DF5494346A24D04BF1432FB, L_89, NULL);
		// meshShaderMat.SetInt("_CoarseFactor", coarseFactor);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_90 = __this->___meshShaderMat_19;
		int32_t L_91 = __this->___coarseFactor_8;
		NullCheck(L_90);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_90, _stringLiteralDA29D557A88BE41D27E66EC259BAED325FF1177D, L_91, NULL);
		// meshShaderMat.SetInt("_IsPointCloud", showAsPointCloud ? 1 : 0);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_92 = __this->___meshShaderMat_19;
		bool L_93 = __this->___showAsPointCloud_7;
		G_B32_0 = _stringLiteral7A654FF8208F7E303716EF5E5E785A7B0C3683EB;
		G_B32_1 = L_92;
		if (L_93)
		{
			G_B33_0 = _stringLiteral7A654FF8208F7E303716EF5E5E785A7B0C3683EB;
			G_B33_1 = L_92;
			goto IL_02fb;
		}
	}
	{
		G_B34_0 = 0;
		G_B34_1 = G_B32_0;
		G_B34_2 = G_B32_1;
		goto IL_02fc;
	}

IL_02fb:
	{
		G_B34_0 = 1;
		G_B34_1 = G_B33_0;
		G_B34_2 = G_B33_1;
	}

IL_02fc:
	{
		NullCheck(G_B34_2);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(G_B34_2, G_B34_1, G_B34_0, NULL);
		// meshShaderMat.SetFloat("_CutoffFactor", Mathf.Pow(edgeCutoffFactor, 6));
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_94 = __this->___meshShaderMat_19;
		float L_95 = __this->___edgeCutoffFactor_9;
		float L_96;
		L_96 = powf(L_95, (6.0f));
		NullCheck(L_94);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_94, _stringLiteral37A8260E2CB0CCF955B515F359CCD60D4008D7A0, L_96, NULL);
		// meshShaderMat.SetInt("_BodyIndexAll", playerIndex < 0 ? 1 : 0);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_97 = __this->___meshShaderMat_19;
		int32_t L_98 = __this->___playerIndex_4;
		G_B35_0 = _stringLiteral8C729D68F4DD351080E6B38FB15B3A52C5CB089B;
		G_B35_1 = L_97;
		if ((((int32_t)L_98) < ((int32_t)0)))
		{
			G_B36_0 = _stringLiteral8C729D68F4DD351080E6B38FB15B3A52C5CB089B;
			G_B36_1 = L_97;
			goto IL_0338;
		}
	}
	{
		G_B37_0 = 0;
		G_B37_1 = G_B35_0;
		G_B37_2 = G_B35_1;
		goto IL_0339;
	}

IL_0338:
	{
		G_B37_0 = 1;
		G_B37_1 = G_B36_0;
		G_B37_2 = G_B36_1;
	}

IL_0339:
	{
		NullCheck(G_B37_2);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(G_B37_2, G_B37_1, G_B37_0, NULL);
		// meshShaderMat.SetInt("_UserBodyIndex", userBodyIndex);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_99 = __this->___meshShaderMat_19;
		int32_t L_100 = __this->___userBodyIndex_34;
		NullCheck(L_99);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_99, _stringLiteral459137C36C2D4B342C0C73E9F6B1A0DBFB4B8DF6, L_100, NULL);
		// meshShaderMat.SetVector("_UserBodyPos", userBodyPos);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_101 = __this->___meshShaderMat_19;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_102 = __this->___userBodyPos_35;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_103;
		L_103 = Vector4_op_Implicit_mB05287DC52FC87A756AB80E837E1EC22FEEB3937_inline(L_102, NULL);
		NullCheck(L_101);
		Material_SetVector_m69444B8040D955821F241113446CC8713C9E12D1(L_101, _stringLiteral737C78925E3060931CE71D40F1BCD17738A7D47B, L_103, NULL);
		// meshShaderMat.SetMatrix("_Transform", sensorInt.GetSensorToWorldMatrix());
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_104 = __this->___meshShaderMat_19;
		DepthSensorBase_tB644BCAB82289DCDB9290A9B3A6972F0F13B0774* L_105 = __this->___sensorInt_18;
		NullCheck(L_105);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_106;
		L_106 = VirtualFuncInvoker0< Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 >::Invoke(103 /* UnityEngine.Matrix4x4 com.rfilkov.kinect.DepthSensorBase::GetSensorToWorldMatrix() */, L_105);
		NullCheck(L_104);
		Material_SetMatrix_m1F4E20583C898A1C1DBA256868E1F98C539F13FB(L_104, _stringLiteral28BBC4BDE4FD330B45DC7DD7CC37F01B777452E1, L_106, NULL);
		// if (kinectManager.GetUserBoundingBox(userId, null, sensorIndex, Rect.zero, out Vector3 posMin, out Vector3 posMax))
		KinectManager_t6D168A1C710083948363282B0D862EDDFFD88211* L_107 = __this->___kinectManager_16;
		uint64_t L_108 = __this->___userId_33;
		int32_t L_109 = __this->___sensorIndex_5;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_110;
		L_110 = Rect_get_zero_mBA92EC8F405CC95A0F1ED05E66D9ABD3A61B7476(NULL);
		NullCheck(L_107);
		bool L_111;
		L_111 = KinectManager_GetUserBoundingBox_mEAC344C3874EE413CB94128B066A55FB4882F0D7(L_107, L_108, (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184*)NULL, L_109, L_110, (&V_1), (&V_2), NULL);
		if (!L_111)
		{
			goto IL_0432;
		}
	}
	{
		// Vector3 boundsCenter = new Vector3((posMax.x - posMin.x) / 2f, (posMax.y - posMin.y) / 2f, (posMax.z - posMin.z) / 2f);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_112 = V_2;
		float L_113 = L_112.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_114 = V_1;
		float L_115 = L_114.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_116 = V_2;
		float L_117 = L_116.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_118 = V_1;
		float L_119 = L_118.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_120 = V_2;
		float L_121 = L_120.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_122 = V_1;
		float L_123 = L_122.___z_4;
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&V_7), ((float)(((float)il2cpp_codegen_subtract(L_113, L_115))/(2.0f))), ((float)(((float)il2cpp_codegen_subtract(L_117, L_119))/(2.0f))), ((float)(((float)il2cpp_codegen_subtract(L_121, L_123))/(2.0f))), NULL);
		// Vector3 boundsSize = new Vector3((posMax.x - posMin.x), (posMax.y - posMin.y), (posMax.z - posMin.z));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_124 = V_2;
		float L_125 = L_124.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_126 = V_1;
		float L_127 = L_126.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_128 = V_2;
		float L_129 = L_128.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_130 = V_1;
		float L_131 = L_130.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_132 = V_2;
		float L_133 = L_132.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_134 = V_1;
		float L_135 = L_134.___z_4;
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&V_8), ((float)il2cpp_codegen_subtract(L_125, L_127)), ((float)il2cpp_codegen_subtract(L_129, L_131)), ((float)il2cpp_codegen_subtract(L_133, L_135)), NULL);
		// mesh.bounds = new Bounds(boundsCenter, boundsSize);
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_136 = __this->___mesh_14;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_137 = V_7;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_138 = V_8;
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 L_139;
		memset((&L_139), 0, sizeof(L_139));
		Bounds__ctor_mAF7B238B9FBF90C495E5D7951760085A93119C5A((&L_139), L_137, L_138, /*hidden argument*/NULL);
		NullCheck(L_136);
		Mesh_set_bounds_m2E526E9B61ACA77D644C22A9D8EB49583012B54E(L_136, L_139, NULL);
	}

IL_0432:
	{
		// lighting.UpdateLighting(meshShaderMat, applyLighting);
		FragmentLighting_tE9A6F75445DF103494C8BFA7BD9D600355F9CDDC* L_140 = __this->___lighting_40;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_141 = __this->___meshShaderMat_19;
		bool L_142 = __this->___applyLighting_13;
		NullCheck(L_140);
		FragmentLighting_UpdateLighting_m68B43ADAA66515951CEC61017EA858B9F2E02302(L_140, L_141, L_142, NULL);
		// if (updateColliderInterval > 0 && (Time.time - lastColliderUpdateTime) >= updateColliderInterval)
		float L_143 = __this->___updateColliderInterval_12;
		if ((!(((float)L_143) > ((float)(0.0f)))))
		{
			goto IL_049b;
		}
	}
	{
		float L_144;
		L_144 = Time_get_time_m0BEE9AACD0723FE414465B77C9C64D12263675F3(NULL);
		float L_145 = __this->___lastColliderUpdateTime_32;
		float L_146 = __this->___updateColliderInterval_12;
		if ((!(((float)((float)il2cpp_codegen_subtract(L_144, L_145))) >= ((float)L_146))))
		{
			goto IL_049b;
		}
	}
	{
		// lastColliderUpdateTime = Time.time;
		float L_147;
		L_147 = Time_get_time_m0BEE9AACD0723FE414465B77C9C64D12263675F3(NULL);
		__this->___lastColliderUpdateTime_32 = L_147;
		// MeshCollider meshCollider = GetComponent<MeshCollider>();
		MeshCollider_tB525E4DDE383252364ED0BDD32CF2B53914EE455* L_148;
		L_148 = Component_GetComponent_TisMeshCollider_tB525E4DDE383252364ED0BDD32CF2B53914EE455_mFC0F02CCD26A6A186031CF43E92D7B60EA1CC370(__this, Component_GetComponent_TisMeshCollider_tB525E4DDE383252364ED0BDD32CF2B53914EE455_mFC0F02CCD26A6A186031CF43E92D7B60EA1CC370_RuntimeMethod_var);
		V_9 = L_148;
		// if (meshCollider)
		MeshCollider_tB525E4DDE383252364ED0BDD32CF2B53914EE455* L_149 = V_9;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_150;
		L_150 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_149, NULL);
		if (!L_150)
		{
			goto IL_049b;
		}
	}
	{
		// meshCollider.sharedMesh = null;
		MeshCollider_tB525E4DDE383252364ED0BDD32CF2B53914EE455* L_151 = V_9;
		NullCheck(L_151);
		MeshCollider_set_sharedMesh_m05F87B9AC04139285EBBCC159F77B51C6940E79C(L_151, (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4*)NULL, NULL);
		// meshCollider.sharedMesh = mesh;
		MeshCollider_tB525E4DDE383252364ED0BDD32CF2B53914EE455* L_152 = V_9;
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_153 = __this->___mesh_14;
		NullCheck(L_152);
		MeshCollider_set_sharedMesh_m05F87B9AC04139285EBBCC159F77B51C6940E79C(L_152, L_153, NULL);
	}

IL_049b:
	{
		// }
		return;
	}
}
// System.Void com.rfilkov.components.UserMeshRendererGpu::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UserMeshRendererGpu__ctor_m5CBAA77AFA1BC850A48229BEB8C4351CCA17480C (UserMeshRendererGpu_tCA868CF70531660324A409C0EF918366C78D6E54* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FragmentLighting_tE9A6F75445DF103494C8BFA7BD9D600355F9CDDC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public bool showAsPointCloud = true;
		__this->___showAsPointCloud_7 = (bool)1;
		// public int coarseFactor = 1;
		__this->___coarseFactor_8 = 1;
		// public float edgeCutoffFactor = 0.5f;
		__this->___edgeCutoffFactor_9 = (0.5f);
		// private Vector3 sensorSpaceScale = Vector3.zero;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		L_0 = Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline(NULL);
		__this->___sensorSpaceScale_22 = L_0;
		// private int userBodyIndex = 255;
		__this->___userBodyIndex_34 = ((int32_t)255);
		// private Vector3 userBodyPos = Vector3.zero;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline(NULL);
		__this->___userBodyPos_35 = L_1;
		// private FragmentLighting lighting = new FragmentLighting();
		FragmentLighting_tE9A6F75445DF103494C8BFA7BD9D600355F9CDDC* L_2 = (FragmentLighting_tE9A6F75445DF103494C8BFA7BD9D600355F9CDDC*)il2cpp_codegen_object_new(FragmentLighting_tE9A6F75445DF103494C8BFA7BD9D600355F9CDDC_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		FragmentLighting__ctor_mB70E61F363E6EA460877AA85A4A2C95C10FB2B3A(L_2, NULL);
		__this->___lighting_40 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___lighting_40), (void*)L_2);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void com.rfilkov.components.UserSkeletonCollider::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UserSkeletonCollider_Start_mC755A12FCA20514D50E5981695051279D9E147C8 (UserSkeletonCollider_tF1FC02224E5642261B30831FD68E335DFA375818* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CapsuleColliderU5BU5D_t812EDDF9927ACFDDA87D5D99C525FCDDDCB4D1BC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisSphereCollider_tBA111C542CE97F6873DE742757213D6265C7D275_m3D05F19667844A2949840753F7A3287115BE029E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JointType_t678862A04475E9381F0E6A3C842D11CABC28108F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KinectManager_t6D168A1C710083948363282B0D862EDDFFD88211_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral824D2FB95D3E084BCF750A3F23F885277F835E90);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	String_t* V_2 = NULL;
	int32_t V_3 = 0;
	{
		// kinectManager = KinectManager.Instance;
		il2cpp_codegen_runtime_class_init_inline(KinectManager_t6D168A1C710083948363282B0D862EDDFFD88211_il2cpp_TypeInfo_var);
		KinectManager_t6D168A1C710083948363282B0D862EDDFFD88211* L_0;
		L_0 = KinectManager_get_Instance_mA12B1FCAF8167AF8235386FD868E43E15B29EC64_inline(NULL);
		__this->___kinectManager_12 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___kinectManager_12), (void*)L_0);
		// if (kinectManager && kinectManager.IsInitialized())
		KinectManager_t6D168A1C710083948363282B0D862EDDFFD88211* L_1 = __this->___kinectManager_12;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_1, NULL);
		if (!L_2)
		{
			goto IL_00d4;
		}
	}
	{
		KinectManager_t6D168A1C710083948363282B0D862EDDFFD88211* L_3 = __this->___kinectManager_12;
		NullCheck(L_3);
		bool L_4;
		L_4 = KinectManager_IsInitialized_m4E8315ADDF5709A7239F26EAB7AC44392D77A179(L_3, NULL);
		if (!L_4)
		{
			goto IL_00d4;
		}
	}
	{
		// int jointCount = kinectManager.GetJointCount();
		KinectManager_t6D168A1C710083948363282B0D862EDDFFD88211* L_5 = __this->___kinectManager_12;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = KinectManager_GetJointCount_m5B153D150716D3FE7CB58D571CA9AE7FEBA7B405(L_5, NULL);
		V_0 = L_6;
		// joints = new GameObject[jointCount];
		int32_t L_7 = V_0;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_8 = (GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF*)(GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF*)SZArrayNew(GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF_il2cpp_TypeInfo_var, (uint32_t)L_7);
		__this->___joints_9 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___joints_9), (void*)L_8);
		// for (int i = 0; i < joints.Length; i++)
		V_1 = 0;
		goto IL_00b1;
	}

IL_0047:
	{
		// string sColObjectName = ((KinectInterop.JointType)i).ToString() + "JointCollider";
		int32_t L_9 = V_1;
		V_3 = L_9;
		Il2CppFakeBox<int32_t> L_10(JointType_t678862A04475E9381F0E6A3C842D11CABC28108F_il2cpp_TypeInfo_var, (&V_3));
		String_t* L_11;
		L_11 = Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)(&L_10), NULL);
		String_t* L_12;
		L_12 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(L_11, _stringLiteral824D2FB95D3E084BCF750A3F23F885277F835E90, NULL);
		V_2 = L_12;
		// joints[i] = new GameObject(sColObjectName);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_13 = __this->___joints_9;
		int32_t L_14 = V_1;
		String_t* L_15 = V_2;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_16 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)il2cpp_codegen_object_new(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		NullCheck(L_16);
		GameObject__ctor_m37D512B05D292F954792225E6C6EEE95293A9B88(L_16, L_15, NULL);
		NullCheck(L_13);
		ArrayElementTypeCheck (L_13, L_16);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(L_14), (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)L_16);
		// joints[i].transform.parent = transform;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_17 = __this->___joints_9;
		int32_t L_18 = V_1;
		NullCheck(L_17);
		int32_t L_19 = L_18;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_20 = (L_17)->GetAt(static_cast<il2cpp_array_size_t>(L_19));
		NullCheck(L_20);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_21;
		L_21 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_20, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_22;
		L_22 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_21);
		Transform_set_parent_m9BD5E563B539DD5BEC342736B03F97B38A243234(L_21, L_22, NULL);
		// SphereCollider collider = joints[i].AddComponent<SphereCollider>();
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_23 = __this->___joints_9;
		int32_t L_24 = V_1;
		NullCheck(L_23);
		int32_t L_25 = L_24;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_26 = (L_23)->GetAt(static_cast<il2cpp_array_size_t>(L_25));
		NullCheck(L_26);
		SphereCollider_tBA111C542CE97F6873DE742757213D6265C7D275* L_27;
		L_27 = GameObject_AddComponent_TisSphereCollider_tBA111C542CE97F6873DE742757213D6265C7D275_m3D05F19667844A2949840753F7A3287115BE029E(L_26, GameObject_AddComponent_TisSphereCollider_tBA111C542CE97F6873DE742757213D6265C7D275_m3D05F19667844A2949840753F7A3287115BE029E_RuntimeMethod_var);
		// collider.radius = colliderRadius;
		float L_28 = __this->___colliderRadius_5;
		NullCheck(L_27);
		SphereCollider_set_radius_m6119FE18C6739B077AB17334B1B53984911017FF(L_27, L_28, NULL);
		// joints[i].SetActive(false);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_29 = __this->___joints_9;
		int32_t L_30 = V_1;
		NullCheck(L_29);
		int32_t L_31 = L_30;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_32 = (L_29)->GetAt(static_cast<il2cpp_array_size_t>(L_31));
		NullCheck(L_32);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_32, (bool)0, NULL);
		// for (int i = 0; i < joints.Length; i++)
		int32_t L_33 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_33, 1));
	}

IL_00b1:
	{
		// for (int i = 0; i < joints.Length; i++)
		int32_t L_34 = V_1;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_35 = __this->___joints_9;
		NullCheck(L_35);
		if ((((int32_t)L_34) < ((int32_t)((int32_t)(((RuntimeArray*)L_35)->max_length)))))
		{
			goto IL_0047;
		}
	}
	{
		// lines = new GameObject[jointCount];
		int32_t L_36 = V_0;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_37 = (GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF*)(GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF*)SZArrayNew(GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF_il2cpp_TypeInfo_var, (uint32_t)L_36);
		__this->___lines_10 = L_37;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___lines_10), (void*)L_37);
		// lineColliders = new CapsuleCollider[jointCount];
		int32_t L_38 = V_0;
		CapsuleColliderU5BU5D_t812EDDF9927ACFDDA87D5D99C525FCDDDCB4D1BC* L_39 = (CapsuleColliderU5BU5D_t812EDDF9927ACFDDA87D5D99C525FCDDDCB4D1BC*)(CapsuleColliderU5BU5D_t812EDDF9927ACFDDA87D5D99C525FCDDDCB4D1BC*)SZArrayNew(CapsuleColliderU5BU5D_t812EDDF9927ACFDDA87D5D99C525FCDDDCB4D1BC_il2cpp_TypeInfo_var, (uint32_t)L_38);
		__this->___lineColliders_11 = L_39;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___lineColliders_11), (void*)L_39);
	}

IL_00d4:
	{
		// }
		return;
	}
}
// System.Void com.rfilkov.components.UserSkeletonCollider::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UserSkeletonCollider_Update_m587B149FABEA1318149CFE5B481B54E9759F207A (UserSkeletonCollider_tF1FC02224E5642261B30831FD68E335DFA375818* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisCapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808_mE9815ABBF56D4B7806C63F85A30AE9BBDE927BCF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JointType_t678862A04475E9381F0E6A3C842D11CABC28108F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral089649C1D01E0D8F758492B4F4D2332C2167B6C1);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	uint64_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_4;
	memset((&V_4), 0, sizeof(V_4));
	String_t* V_5 = NULL;
	CapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808* V_6 = NULL;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_9;
	memset((&V_9), 0, sizeof(V_9));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_10;
	memset((&V_10), 0, sizeof(V_10));
	int32_t V_11 = 0;
	{
		// if (kinectManager && kinectManager.IsInitialized())
		KinectManager_t6D168A1C710083948363282B0D862EDDFFD88211* L_0 = __this->___kinectManager_12;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_0, NULL);
		if (!L_1)
		{
			goto IL_0312;
		}
	}
	{
		KinectManager_t6D168A1C710083948363282B0D862EDDFFD88211* L_2 = __this->___kinectManager_12;
		NullCheck(L_2);
		bool L_3;
		L_3 = KinectManager_IsInitialized_m4E8315ADDF5709A7239F26EAB7AC44392D77A179(L_2, NULL);
		if (!L_3)
		{
			goto IL_0312;
		}
	}
	{
		// int jointsCount = kinectManager.GetJointCount();
		KinectManager_t6D168A1C710083948363282B0D862EDDFFD88211* L_4 = __this->___kinectManager_12;
		NullCheck(L_4);
		int32_t L_5;
		L_5 = KinectManager_GetJointCount_m5B153D150716D3FE7CB58D571CA9AE7FEBA7B405(L_4, NULL);
		V_0 = L_5;
		// if (kinectManager.IsUserDetected(playerIndex))
		KinectManager_t6D168A1C710083948363282B0D862EDDFFD88211* L_6 = __this->___kinectManager_12;
		int32_t L_7 = __this->___playerIndex_4;
		NullCheck(L_6);
		bool L_8;
		L_8 = KinectManager_IsUserDetected_m5544B8584195DC23FA1F4D9A75BBC4E6A74A4F0C(L_6, L_7, NULL);
		if (!L_8)
		{
			goto IL_02c6;
		}
	}
	{
		// ulong userId = kinectManager.GetUserIdByIndex(playerIndex);
		KinectManager_t6D168A1C710083948363282B0D862EDDFFD88211* L_9 = __this->___kinectManager_12;
		int32_t L_10 = __this->___playerIndex_4;
		NullCheck(L_9);
		uint64_t L_11;
		L_11 = KinectManager_GetUserIdByIndex_m039C55595E67098180174E20E7F8A66D37FCD06C(L_9, L_10, NULL);
		V_1 = L_11;
		// for (int i = 0; i < jointsCount; i++)
		V_2 = 0;
		goto IL_02be;
	}

IL_005b:
	{
		// int joint = i;
		int32_t L_12 = V_2;
		V_3 = L_12;
		// if (kinectManager.IsJointTracked(userId, joint))
		KinectManager_t6D168A1C710083948363282B0D862EDDFFD88211* L_13 = __this->___kinectManager_12;
		uint64_t L_14 = V_1;
		int32_t L_15 = V_3;
		NullCheck(L_13);
		bool L_16;
		L_16 = KinectManager_IsJointTracked_m6443A8E53DB47D1B218FBD805BD044171519DBDC(L_13, L_14, L_15, NULL);
		if (!L_16)
		{
			goto IL_0281;
		}
	}
	{
		// Vector3 posJoint = GetJointPosition(userId, joint);  // !sensorTransform ? kinectManager.GetJointPosition(userId, joint) : kinectManager.GetJointKinectPosition(userId, joint, true);
		uint64_t L_17 = V_1;
		int32_t L_18 = V_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19;
		L_19 = UserSkeletonCollider_GetJointPosition_mDBC67013D02DD8F86A24F28C66EBA2E180893341(__this, L_17, L_18, NULL);
		V_4 = L_19;
		// if (sensorTransform)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_20 = __this->___sensorTransform_6;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_21;
		L_21 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_20, NULL);
		if (!L_21)
		{
			goto IL_0095;
		}
	}
	{
		// posJoint = sensorTransform.TransformPoint(posJoint);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_22 = __this->___sensorTransform_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23 = V_4;
		NullCheck(L_22);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24;
		L_24 = Transform_TransformPoint_m05BFF013DB830D7BFE44A007703694AE1062EE44(L_22, L_23, NULL);
		V_4 = L_24;
	}

IL_0095:
	{
		// if (joints != null)
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_25 = __this->___joints_9;
		if (!L_25)
		{
			goto IL_00dd;
		}
	}
	{
		// if (posJoint != Vector3.zero)
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_26 = V_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_27;
		L_27 = Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline(NULL);
		bool L_28;
		L_28 = Vector3_op_Inequality_m6A7FB1C9E9DE194708997BFA24C6E238D92D908E_inline(L_26, L_27, NULL);
		if (!L_28)
		{
			goto IL_00cf;
		}
	}
	{
		// joints[i].SetActive(true);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_29 = __this->___joints_9;
		int32_t L_30 = V_2;
		NullCheck(L_29);
		int32_t L_31 = L_30;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_32 = (L_29)->GetAt(static_cast<il2cpp_array_size_t>(L_31));
		NullCheck(L_32);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_32, (bool)1, NULL);
		// joints[i].transform.position = posJoint;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_33 = __this->___joints_9;
		int32_t L_34 = V_2;
		NullCheck(L_33);
		int32_t L_35 = L_34;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_36 = (L_33)->GetAt(static_cast<il2cpp_array_size_t>(L_35));
		NullCheck(L_36);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_37;
		L_37 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_36, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_38 = V_4;
		NullCheck(L_37);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_37, L_38, NULL);
		goto IL_00dd;
	}

IL_00cf:
	{
		// joints[i].SetActive(false);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_39 = __this->___joints_9;
		int32_t L_40 = V_2;
		NullCheck(L_39);
		int32_t L_41 = L_40;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_42 = (L_39)->GetAt(static_cast<il2cpp_array_size_t>(L_41));
		NullCheck(L_42);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_42, (bool)0, NULL);
	}

IL_00dd:
	{
		// if (lines[i] == null)
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_43 = __this->___lines_10;
		int32_t L_44 = V_2;
		NullCheck(L_43);
		int32_t L_45 = L_44;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_46 = (L_43)->GetAt(static_cast<il2cpp_array_size_t>(L_45));
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_47;
		L_47 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_46, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_47)
		{
			goto IL_0169;
		}
	}
	{
		// string sColObjectName = ((KinectInterop.JointType)i).ToString() + "BoneCollider";
		int32_t L_48 = V_2;
		V_7 = L_48;
		Il2CppFakeBox<int32_t> L_49(JointType_t678862A04475E9381F0E6A3C842D11CABC28108F_il2cpp_TypeInfo_var, (&V_7));
		String_t* L_50;
		L_50 = Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)(&L_49), NULL);
		String_t* L_51;
		L_51 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(L_50, _stringLiteral089649C1D01E0D8F758492B4F4D2332C2167B6C1, NULL);
		V_5 = L_51;
		// lines[i] = new GameObject(sColObjectName);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_52 = __this->___lines_10;
		int32_t L_53 = V_2;
		String_t* L_54 = V_5;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_55 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)il2cpp_codegen_object_new(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		NullCheck(L_55);
		GameObject__ctor_m37D512B05D292F954792225E6C6EEE95293A9B88(L_55, L_54, NULL);
		NullCheck(L_52);
		ArrayElementTypeCheck (L_52, L_55);
		(L_52)->SetAt(static_cast<il2cpp_array_size_t>(L_53), (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)L_55);
		// lines[i].transform.parent = transform;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_56 = __this->___lines_10;
		int32_t L_57 = V_2;
		NullCheck(L_56);
		int32_t L_58 = L_57;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_59 = (L_56)->GetAt(static_cast<il2cpp_array_size_t>(L_58));
		NullCheck(L_59);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_60;
		L_60 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_59, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_61;
		L_61 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_60);
		Transform_set_parent_m9BD5E563B539DD5BEC342736B03F97B38A243234(L_60, L_61, NULL);
		// CapsuleCollider collider = lines[i].AddComponent<CapsuleCollider>();
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_62 = __this->___lines_10;
		int32_t L_63 = V_2;
		NullCheck(L_62);
		int32_t L_64 = L_63;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_65 = (L_62)->GetAt(static_cast<il2cpp_array_size_t>(L_64));
		NullCheck(L_65);
		CapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808* L_66;
		L_66 = GameObject_AddComponent_TisCapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808_mE9815ABBF56D4B7806C63F85A30AE9BBDE927BCF(L_65, GameObject_AddComponent_TisCapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808_mE9815ABBF56D4B7806C63F85A30AE9BBDE927BCF_RuntimeMethod_var);
		V_6 = L_66;
		// collider.radius = colliderRadius;
		CapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808* L_67 = V_6;
		float L_68 = __this->___colliderRadius_5;
		NullCheck(L_67);
		CapsuleCollider_set_radius_mB301C0086FE0D251683512184B0F6DDE264BA985(L_67, L_68, NULL);
		// lineColliders[i] = collider;
		CapsuleColliderU5BU5D_t812EDDF9927ACFDDA87D5D99C525FCDDDCB4D1BC* L_69 = __this->___lineColliders_11;
		int32_t L_70 = V_2;
		CapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808* L_71 = V_6;
		NullCheck(L_69);
		ArrayElementTypeCheck (L_69, L_71);
		(L_69)->SetAt(static_cast<il2cpp_array_size_t>(L_70), (CapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808*)L_71);
		// lines[i].gameObject.SetActive(false);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_72 = __this->___lines_10;
		int32_t L_73 = V_2;
		NullCheck(L_72);
		int32_t L_74 = L_73;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_75 = (L_72)->GetAt(static_cast<il2cpp_array_size_t>(L_74));
		NullCheck(L_75);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_76;
		L_76 = GameObject_get_gameObject_m0878015B8CF7F5D432B583C187725810D27B57DC(L_75, NULL);
		NullCheck(L_76);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_76, (bool)0, NULL);
	}

IL_0169:
	{
		// if (lines[i] != null)
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_77 = __this->___lines_10;
		int32_t L_78 = V_2;
		NullCheck(L_77);
		int32_t L_79 = L_78;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_80 = (L_77)->GetAt(static_cast<il2cpp_array_size_t>(L_79));
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_81;
		L_81 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_80, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_81)
		{
			goto IL_02ba;
		}
	}
	{
		// int jointParent = (int)kinectManager.GetParentJoint((KinectInterop.JointType)joint);
		KinectManager_t6D168A1C710083948363282B0D862EDDFFD88211* L_82 = __this->___kinectManager_12;
		int32_t L_83 = V_3;
		NullCheck(L_82);
		int32_t L_84;
		L_84 = KinectManager_GetParentJoint_mCE553D01E5607320F2F3B011E7D4A42D034EB1FA(L_82, L_83, NULL);
		V_8 = L_84;
		// Vector3 posParent = Vector3.zero;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_85;
		L_85 = Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline(NULL);
		V_9 = L_85;
		// if (kinectManager.IsJointTracked(userId, jointParent))
		KinectManager_t6D168A1C710083948363282B0D862EDDFFD88211* L_86 = __this->___kinectManager_12;
		uint64_t L_87 = V_1;
		int32_t L_88 = V_8;
		NullCheck(L_86);
		bool L_89;
		L_89 = KinectManager_IsJointTracked_m6443A8E53DB47D1B218FBD805BD044171519DBDC(L_86, L_87, L_88, NULL);
		if (!L_89)
		{
			goto IL_01c8;
		}
	}
	{
		// posParent = GetJointPosition(userId, jointParent);  // !sensorTransform ? kinectManager.GetJointPosition(userId, jointParent) : kinectManager.GetJointKinectPosition(userId, jointParent, true);
		uint64_t L_90 = V_1;
		int32_t L_91 = V_8;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_92;
		L_92 = UserSkeletonCollider_GetJointPosition_mDBC67013D02DD8F86A24F28C66EBA2E180893341(__this, L_90, L_91, NULL);
		V_9 = L_92;
		// if (sensorTransform)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_93 = __this->___sensorTransform_6;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_94;
		L_94 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_93, NULL);
		if (!L_94)
		{
			goto IL_01c8;
		}
	}
	{
		// posParent = sensorTransform.TransformPoint(posParent);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_95 = __this->___sensorTransform_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_96 = V_9;
		NullCheck(L_95);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_97;
		L_97 = Transform_TransformPoint_m05BFF013DB830D7BFE44A007703694AE1062EE44(L_95, L_96, NULL);
		V_9 = L_97;
	}

IL_01c8:
	{
		// if (posJoint != Vector3.zero && posParent != Vector3.zero)
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_98 = V_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_99;
		L_99 = Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline(NULL);
		bool L_100;
		L_100 = Vector3_op_Inequality_m6A7FB1C9E9DE194708997BFA24C6E238D92D908E_inline(L_98, L_99, NULL);
		if (!L_100)
		{
			goto IL_026c;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_101 = V_9;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_102;
		L_102 = Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline(NULL);
		bool L_103;
		L_103 = Vector3_op_Inequality_m6A7FB1C9E9DE194708997BFA24C6E238D92D908E_inline(L_101, L_102, NULL);
		if (!L_103)
		{
			goto IL_026c;
		}
	}
	{
		// lines[i].gameObject.SetActive(true);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_104 = __this->___lines_10;
		int32_t L_105 = V_2;
		NullCheck(L_104);
		int32_t L_106 = L_105;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_107 = (L_104)->GetAt(static_cast<il2cpp_array_size_t>(L_106));
		NullCheck(L_107);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_108;
		L_108 = GameObject_get_gameObject_m0878015B8CF7F5D432B583C187725810D27B57DC(L_107, NULL);
		NullCheck(L_108);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_108, (bool)1, NULL);
		// Vector3 dirFromParent = posJoint - posParent;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_109 = V_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_110 = V_9;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_111;
		L_111 = Vector3_op_Subtraction_m1690F44F6DC92B770A940B6CF8AE0535625A9824_inline(L_109, L_110, NULL);
		V_10 = L_111;
		// lines[i].transform.position = posParent + dirFromParent / 2f;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_112 = __this->___lines_10;
		int32_t L_113 = V_2;
		NullCheck(L_112);
		int32_t L_114 = L_113;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_115 = (L_112)->GetAt(static_cast<il2cpp_array_size_t>(L_114));
		NullCheck(L_115);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_116;
		L_116 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_115, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_117 = V_9;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_118 = V_10;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_119;
		L_119 = Vector3_op_Division_mD7200D6D432BAFC4135C5B17A0B0A812203B0270_inline(L_118, (2.0f), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_120;
		L_120 = Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline(L_117, L_119, NULL);
		NullCheck(L_116);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_116, L_120, NULL);
		// lines[i].transform.up = /**transform.rotation * */ dirFromParent.normalized;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_121 = __this->___lines_10;
		int32_t L_122 = V_2;
		NullCheck(L_121);
		int32_t L_123 = L_122;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_124 = (L_121)->GetAt(static_cast<il2cpp_array_size_t>(L_123));
		NullCheck(L_124);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_125;
		L_125 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_124, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_126;
		L_126 = Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline((&V_10), NULL);
		NullCheck(L_125);
		Transform_set_up_m1FBA5A97E5057747AC027AD5897EDE80A554D554(L_125, L_126, NULL);
		// if(lineColliders[i] != null)
		CapsuleColliderU5BU5D_t812EDDF9927ACFDDA87D5D99C525FCDDDCB4D1BC* L_127 = __this->___lineColliders_11;
		int32_t L_128 = V_2;
		NullCheck(L_127);
		int32_t L_129 = L_128;
		CapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808* L_130 = (L_127)->GetAt(static_cast<il2cpp_array_size_t>(L_129));
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_131;
		L_131 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_130, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_131)
		{
			goto IL_02ba;
		}
	}
	{
		// lineColliders[i].height = dirFromParent.magnitude;
		CapsuleColliderU5BU5D_t812EDDF9927ACFDDA87D5D99C525FCDDDCB4D1BC* L_132 = __this->___lineColliders_11;
		int32_t L_133 = V_2;
		NullCheck(L_132);
		int32_t L_134 = L_133;
		CapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808* L_135 = (L_132)->GetAt(static_cast<il2cpp_array_size_t>(L_134));
		float L_136;
		L_136 = Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline((&V_10), NULL);
		NullCheck(L_135);
		CapsuleCollider_set_height_m5DAE3DC5AD851E30C5A29AC7A22F36BE1E205BBB(L_135, L_136, NULL);
		goto IL_02ba;
	}

IL_026c:
	{
		// lines[i].gameObject.SetActive(false);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_137 = __this->___lines_10;
		int32_t L_138 = V_2;
		NullCheck(L_137);
		int32_t L_139 = L_138;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_140 = (L_137)->GetAt(static_cast<il2cpp_array_size_t>(L_139));
		NullCheck(L_140);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_141;
		L_141 = GameObject_get_gameObject_m0878015B8CF7F5D432B583C187725810D27B57DC(L_140, NULL);
		NullCheck(L_141);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_141, (bool)0, NULL);
		goto IL_02ba;
	}

IL_0281:
	{
		// if (joints != null)
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_142 = __this->___joints_9;
		if (!L_142)
		{
			goto IL_0297;
		}
	}
	{
		// joints[i].SetActive(false);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_143 = __this->___joints_9;
		int32_t L_144 = V_2;
		NullCheck(L_143);
		int32_t L_145 = L_144;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_146 = (L_143)->GetAt(static_cast<il2cpp_array_size_t>(L_145));
		NullCheck(L_146);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_146, (bool)0, NULL);
	}

IL_0297:
	{
		// if (lines[i] != null)
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_147 = __this->___lines_10;
		int32_t L_148 = V_2;
		NullCheck(L_147);
		int32_t L_149 = L_148;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_150 = (L_147)->GetAt(static_cast<il2cpp_array_size_t>(L_149));
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_151;
		L_151 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_150, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_151)
		{
			goto IL_02ba;
		}
	}
	{
		// lines[i].gameObject.SetActive(false);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_152 = __this->___lines_10;
		int32_t L_153 = V_2;
		NullCheck(L_152);
		int32_t L_154 = L_153;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_155 = (L_152)->GetAt(static_cast<il2cpp_array_size_t>(L_154));
		NullCheck(L_155);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_156;
		L_156 = GameObject_get_gameObject_m0878015B8CF7F5D432B583C187725810D27B57DC(L_155, NULL);
		NullCheck(L_156);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_156, (bool)0, NULL);
	}

IL_02ba:
	{
		// for (int i = 0; i < jointsCount; i++)
		int32_t L_157 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_157, 1));
	}

IL_02be:
	{
		// for (int i = 0; i < jointsCount; i++)
		int32_t L_158 = V_2;
		int32_t L_159 = V_0;
		if ((((int32_t)L_158) < ((int32_t)L_159)))
		{
			goto IL_005b;
		}
	}
	{
		return;
	}

IL_02c6:
	{
		// for (int i = 0; i < jointsCount; i++)
		V_11 = 0;
		goto IL_030d;
	}

IL_02cb:
	{
		// if (joints != null)
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_160 = __this->___joints_9;
		if (!L_160)
		{
			goto IL_02e2;
		}
	}
	{
		// joints[i].SetActive(false);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_161 = __this->___joints_9;
		int32_t L_162 = V_11;
		NullCheck(L_161);
		int32_t L_163 = L_162;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_164 = (L_161)->GetAt(static_cast<il2cpp_array_size_t>(L_163));
		NullCheck(L_164);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_164, (bool)0, NULL);
	}

IL_02e2:
	{
		// if (lines[i] != null)
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_165 = __this->___lines_10;
		int32_t L_166 = V_11;
		NullCheck(L_165);
		int32_t L_167 = L_166;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_168 = (L_165)->GetAt(static_cast<il2cpp_array_size_t>(L_167));
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_169;
		L_169 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_168, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_169)
		{
			goto IL_0307;
		}
	}
	{
		// lines[i].gameObject.SetActive(false);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_170 = __this->___lines_10;
		int32_t L_171 = V_11;
		NullCheck(L_170);
		int32_t L_172 = L_171;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_173 = (L_170)->GetAt(static_cast<il2cpp_array_size_t>(L_172));
		NullCheck(L_173);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_174;
		L_174 = GameObject_get_gameObject_m0878015B8CF7F5D432B583C187725810D27B57DC(L_173, NULL);
		NullCheck(L_174);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_174, (bool)0, NULL);
	}

IL_0307:
	{
		// for (int i = 0; i < jointsCount; i++)
		int32_t L_175 = V_11;
		V_11 = ((int32_t)il2cpp_codegen_add(L_175, 1));
	}

IL_030d:
	{
		// for (int i = 0; i < jointsCount; i++)
		int32_t L_176 = V_11;
		int32_t L_177 = V_0;
		if ((((int32_t)L_176) < ((int32_t)L_177)))
		{
			goto IL_02cb;
		}
	}

IL_0312:
	{
		// }
		return;
	}
}
// UnityEngine.Vector3 com.rfilkov.components.UserSkeletonCollider::GetJointPosition(System.UInt64,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 UserSkeletonCollider_GetJointPosition_mDBC67013D02DD8F86A24F28C66EBA2E180893341 (UserSkeletonCollider_tF1FC02224E5642261B30831FD68E335DFA375818* __this, uint64_t ___userId0, int32_t ___joint1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	SensorData_t889044994784020C5FA25311175FB3F8B715DD27* V_2 = NULL;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_3;
	memset((&V_3), 0, sizeof(V_3));
	float V_4 = 0.0f;
	float V_5 = 0.0f;
	{
		// Vector3 posJoint = Vector3.zero;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		L_0 = Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline(NULL);
		V_0 = L_0;
		// if (sensorTransform)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1 = __this->___sensorTransform_6;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_1, NULL);
		if (!L_2)
		{
			goto IL_00fe;
		}
	}
	{
		// int bodyIndex = kinectManager.GetBodyIndexByUserId(userId);
		KinectManager_t6D168A1C710083948363282B0D862EDDFFD88211* L_3 = __this->___kinectManager_12;
		uint64_t L_4 = ___userId0;
		NullCheck(L_3);
		int32_t L_5;
		L_5 = KinectManager_GetBodyIndexByUserId_m102FDCC202FDCD9696DAB08CA644A0E52424FD20(L_3, L_4, NULL);
		V_1 = L_5;
		// posJoint = kinectManager.GetSensorJointKinectPosition(sensorIndex, bodyIndex, joint, true);
		KinectManager_t6D168A1C710083948363282B0D862EDDFFD88211* L_6 = __this->___kinectManager_12;
		int32_t L_7 = __this->___sensorIndex_7;
		int32_t L_8 = V_1;
		int32_t L_9 = ___joint1;
		NullCheck(L_6);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = KinectManager_GetSensorJointKinectPosition_mA798D6C8A783FA148FCD2E2C0D3E33D4BFB3B57E(L_6, L_7, L_8, L_9, (bool)1, NULL);
		V_0 = L_10;
		// if(referencePose == ReferencePose.ColorCameraPose)
		int32_t L_11 = __this->___referencePose_8;
		if ((!(((uint32_t)L_11) == ((uint32_t)1))))
		{
			goto IL_010c;
		}
	}
	{
		// KinectInterop.SensorData sensorData = kinectManager.GetSensorData(sensorIndex);
		KinectManager_t6D168A1C710083948363282B0D862EDDFFD88211* L_12 = __this->___kinectManager_12;
		int32_t L_13 = __this->___sensorIndex_7;
		NullCheck(L_12);
		SensorData_t889044994784020C5FA25311175FB3F8B715DD27* L_14;
		L_14 = KinectManager_GetSensorData_m6280DCF2ABA874FCBAB6E7B0F7202C58AA2F4267(L_12, L_13, NULL);
		V_2 = L_14;
		// if(sensorData != null)
		SensorData_t889044994784020C5FA25311175FB3F8B715DD27* L_15 = V_2;
		if (!L_15)
		{
			goto IL_010c;
		}
	}
	{
		// Vector3 spaceScale = sensorData.sensorSpaceScale;
		SensorData_t889044994784020C5FA25311175FB3F8B715DD27* L_16 = V_2;
		NullCheck(L_16);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17 = L_16->___sensorSpaceScale_16;
		V_3 = L_17;
		// float u2mScale = sensorData.unitToMeterFactor;
		SensorData_t889044994784020C5FA25311175FB3F8B715DD27* L_18 = V_2;
		NullCheck(L_18);
		float L_19 = L_18->___unitToMeterFactor_17;
		V_4 = L_19;
		// float m2uScale = 1f / u2mScale;
		float L_20 = V_4;
		V_5 = ((float)((1.0f)/L_20));
		// posJoint = new Vector3(posJoint.x * spaceScale.x * m2uScale, posJoint.y * spaceScale.y * m2uScale, posJoint.z * spaceScale.z * m2uScale);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21 = V_0;
		float L_22 = L_21.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23 = V_3;
		float L_24 = L_23.___x_2;
		float L_25 = V_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_26 = V_0;
		float L_27 = L_26.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_28 = V_3;
		float L_29 = L_28.___y_3;
		float L_30 = V_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_31 = V_0;
		float L_32 = L_31.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_33 = V_3;
		float L_34 = L_33.___z_4;
		float L_35 = V_5;
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&V_0), ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(L_22, L_24)), L_25)), ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(L_27, L_29)), L_30)), ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(L_32, L_34)), L_35)), NULL);
		// posJoint = kinectManager.SensorTransformPoint(sensorIndex, sensorData.depth2ColorExtr, posJoint);
		KinectManager_t6D168A1C710083948363282B0D862EDDFFD88211* L_36 = __this->___kinectManager_12;
		int32_t L_37 = __this->___sensorIndex_7;
		SensorData_t889044994784020C5FA25311175FB3F8B715DD27* L_38 = V_2;
		NullCheck(L_38);
		CameraExtrinsics_t78E5FF4BC4F63B394053A70F6A00AE00E3035641* L_39 = L_38->___depth2ColorExtr_11;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_40 = V_0;
		NullCheck(L_36);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_41;
		L_41 = KinectManager_SensorTransformPoint_m86319A68B9B7E099E3201D330DA9995210D07866(L_36, L_37, L_39, L_40, NULL);
		V_0 = L_41;
		// posJoint = new Vector3(posJoint.x * spaceScale.x * u2mScale, posJoint.y * spaceScale.y * u2mScale, posJoint.z * spaceScale.z * u2mScale);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_42 = V_0;
		float L_43 = L_42.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_44 = V_3;
		float L_45 = L_44.___x_2;
		float L_46 = V_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_47 = V_0;
		float L_48 = L_47.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_49 = V_3;
		float L_50 = L_49.___y_3;
		float L_51 = V_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_52 = V_0;
		float L_53 = L_52.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_54 = V_3;
		float L_55 = L_54.___z_4;
		float L_56 = V_4;
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&V_0), ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(L_43, L_45)), L_46)), ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(L_48, L_50)), L_51)), ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(L_53, L_55)), L_56)), NULL);
		goto IL_010c;
	}

IL_00fe:
	{
		// posJoint = kinectManager.GetJointPosition(userId, joint);
		KinectManager_t6D168A1C710083948363282B0D862EDDFFD88211* L_57 = __this->___kinectManager_12;
		uint64_t L_58 = ___userId0;
		int32_t L_59 = ___joint1;
		NullCheck(L_57);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_60;
		L_60 = KinectManager_GetJointPosition_m1A99D3ADB3A3C09BED43673B62C9406388BF80BE(L_57, L_58, L_59, NULL);
		V_0 = L_60;
	}

IL_010c:
	{
		// return posJoint;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_61 = V_0;
		return L_61;
	}
}
// System.Void com.rfilkov.components.UserSkeletonCollider::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UserSkeletonCollider__ctor_mF4D157EB7C89E3927CED940FEEED06609BAA8FA9 (UserSkeletonCollider_tF1FC02224E5642261B30831FD68E335DFA375818* __this, const RuntimeMethod* method) 
{
	{
		// public float colliderRadius = 0.02f;
		__this->___colliderRadius_5 = (0.0199999996f);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.UInt32 <PrivateImplementationDetails>::ComputeStringHash(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t U3CPrivateImplementationDetailsU3E_ComputeStringHash_m9E43873DE0DF480D27EC1C2AA3C09E74EA77F75D (String_t* ___s0, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		String_t* L_0 = ___s0;
		if (!L_0)
		{
			goto IL_002a;
		}
	}
	{
		V_0 = ((int32_t)-2128831035);
		V_1 = 0;
		goto IL_0021;
	}

IL_000d:
	{
		String_t* L_1 = ___s0;
		int32_t L_2 = V_1;
		NullCheck(L_1);
		Il2CppChar L_3;
		L_3 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_1, L_2, NULL);
		uint32_t L_4 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_multiply(((int32_t)((int32_t)L_3^(int32_t)L_4)), ((int32_t)16777619)));
		int32_t L_5 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_5, 1));
	}

IL_0021:
	{
		int32_t L_6 = V_1;
		String_t* L_7 = ___s0;
		NullCheck(L_7);
		int32_t L_8;
		L_8 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_7, NULL);
		if ((((int32_t)L_6) < ((int32_t)L_8)))
		{
			goto IL_000d;
		}
	}

IL_002a:
	{
		uint32_t L_9 = V_0;
		return L_9;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KinectManager_t6D168A1C710083948363282B0D862EDDFFD88211* KinectManager_get_Instance_mA12B1FCAF8167AF8235386FD868E43E15B29EC64_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KinectManager_t6D168A1C710083948363282B0D862EDDFFD88211_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return instance;
		il2cpp_codegen_runtime_class_init_inline(KinectManager_t6D168A1C710083948363282B0D862EDDFFD88211_il2cpp_TypeInfo_var);
		KinectManager_t6D168A1C710083948363282B0D862EDDFFD88211* L_0 = ((KinectManager_t6D168A1C710083948363282B0D862EDDFFD88211_StaticFields*)il2cpp_codegen_static_fields_for(KinectManager_t6D168A1C710083948363282B0D862EDDFFD88211_il2cpp_TypeInfo_var))->___instance_37;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_2 = L_0;
		float L_1 = ___y1;
		__this->___y_3 = L_1;
		float L_2 = ___z2;
		__this->___z_4 = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A Vector2Int_get_zero_mA4130E83BCF623B65B14574D496C6C0FB441D9FE_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A L_0 = ((Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A_StaticFields*)il2cpp_codegen_static_fields_for(Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A_il2cpp_TypeInfo_var))->___s_Zero_2;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Vector2Int_get_x_mA2CACB1B6E6B5AD0CCC32B2CD2EDCE3ECEB50576_inline (Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___m_X_0;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Vector2Int_get_y_m48454163ECF0B463FB5A16A0C4FC4B14DB0768B3_inline (Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___m_Y_1;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___x0, float ___y1, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_0 = L_0;
		float L_1 = ___y1;
		__this->___y_1 = L_1;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 Vector4_op_Implicit_mB05287DC52FC87A756AB80E837E1EC22FEEB3937_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___v0, const RuntimeMethod* method) 
{
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___v0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___v0;
		float L_3 = L_2.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___v0;
		float L_5 = L_4.___z_4;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline((&L_6), L_1, L_3, L_5, (0.0f), /*hidden argument*/NULL);
		V_0 = L_6;
		goto IL_0020;
	}

IL_0020:
	{
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_7 = V_0;
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 Vector4_op_Implicit_m6162D8136CFE97A5A8BD3B764F9074DB96AA5CD0_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___v0, const RuntimeMethod* method) 
{
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___v0;
		float L_1 = L_0.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___v0;
		float L_3 = L_2.___y_1;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline((&L_4), L_1, L_3, (0.0f), (0.0f), /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_001f;
	}

IL_001f:
	{
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___zeroVector_5;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Quaternion_get_eulerAngles_m2DB5158B5C3A71FD60FC8A6EE43D3AAA1CFED122_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* __this, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = (*(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974*)__this);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Quaternion_Internal_ToEulerRad_m9B2C77284AEE6F2C43B6C42F1F888FB4FC904462(L_0, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_1, (57.2957802f), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Quaternion_Internal_MakePositive_m864320DA2D027C186C95B2A5BC2C66B0EB4A6C11(L_2, NULL);
		V_0 = L_3;
		goto IL_001e;
	}

IL_001e:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_Abs_mEF48B2D15BEC6663A575693F563C6DC42C8135AE_inline (int32_t ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___value0;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = il2cpp_codegen_abs(L_0);
		V_0 = L_1;
		goto IL_000a;
	}

IL_000a:
	{
		int32_t L_2 = V_0;
		return L_2;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector3_op_Inequality_m6A7FB1C9E9DE194708997BFA24C6E238D92D908E_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___lhs0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rhs1, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___lhs0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___rhs1;
		bool L_2;
		L_2 = Vector3_op_Equality_m15951D1B53E3BE36C9D265E229090020FBD72EBB_inline(L_0, L_1, NULL);
		V_0 = (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		goto IL_000e;
	}

IL_000e:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Subtraction_m1690F44F6DC92B770A940B6CF8AE0535625A9824_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___b1;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___a0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___b1;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___a0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___b1;
		float L_11 = L_10.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_12), ((float)il2cpp_codegen_subtract(L_1, L_3)), ((float)il2cpp_codegen_subtract(L_5, L_7)), ((float)il2cpp_codegen_subtract(L_9, L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Division_mD7200D6D432BAFC4135C5B17A0B0A812203B0270_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		float L_2 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___a0;
		float L_4 = L_3.___y_3;
		float L_5 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___a0;
		float L_7 = L_6.___z_4;
		float L_8 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_9), ((float)(L_1/L_2)), ((float)(L_4/L_5)), ((float)(L_7/L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___b1;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___a0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___b1;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___a0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___b1;
		float L_11 = L_10.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_12), ((float)il2cpp_codegen_add(L_1, L_3)), ((float)il2cpp_codegen_add(L_5, L_7)), ((float)il2cpp_codegen_add(L_9, L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = (*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)__this);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Vector3_Normalize_m6120F119433C5B60BBB28731D3D4A0DA50A84DDD_inline(L_0, NULL);
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = V_0;
		return L_2;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		float L_0 = __this->___x_2;
		float L_1 = __this->___x_2;
		float L_2 = __this->___y_3;
		float L_3 = __this->___y_3;
		float L_4 = __this->___z_4;
		float L_5 = __this->___z_4;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_6;
		L_6 = sqrt(((double)((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_0, L_1)), ((float)il2cpp_codegen_multiply(L_2, L_3)))), ((float)il2cpp_codegen_multiply(L_4, L_5))))));
		V_0 = ((float)L_6);
		goto IL_0034;
	}

IL_0034:
	{
		float L_7 = V_0;
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____stringLength_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* __this, float ___x0, float ___y1, float ___z2, float ___w3, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_1 = L_0;
		float L_1 = ___y1;
		__this->___y_2 = L_1;
		float L_2 = ___z2;
		__this->___z_3 = L_2;
		float L_3 = ___w3;
		__this->___w_4 = L_3;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		float L_2 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___a0;
		float L_4 = L_3.___y_3;
		float L_5 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___a0;
		float L_7 = L_6.___z_4;
		float L_8 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_9), ((float)il2cpp_codegen_multiply(L_1, L_2)), ((float)il2cpp_codegen_multiply(L_4, L_5)), ((float)il2cpp_codegen_multiply(L_7, L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector3_op_Equality_m15951D1B53E3BE36C9D265E229090020FBD72EBB_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___lhs0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rhs1, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	bool V_4 = false;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___lhs0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___rhs1;
		float L_3 = L_2.___x_2;
		V_0 = ((float)il2cpp_codegen_subtract(L_1, L_3));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___lhs0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___rhs1;
		float L_7 = L_6.___y_3;
		V_1 = ((float)il2cpp_codegen_subtract(L_5, L_7));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___lhs0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___rhs1;
		float L_11 = L_10.___z_4;
		V_2 = ((float)il2cpp_codegen_subtract(L_9, L_11));
		float L_12 = V_0;
		float L_13 = V_0;
		float L_14 = V_1;
		float L_15 = V_1;
		float L_16 = V_2;
		float L_17 = V_2;
		V_3 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_12, L_13)), ((float)il2cpp_codegen_multiply(L_14, L_15)))), ((float)il2cpp_codegen_multiply(L_16, L_17))));
		float L_18 = V_3;
		V_4 = (bool)((((float)L_18) < ((float)(9.99999944E-11f)))? 1 : 0);
		goto IL_0043;
	}

IL_0043:
	{
		bool L_19 = V_4;
		return L_19;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Normalize_m6120F119433C5B60BBB28731D3D4A0DA50A84DDD_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	bool V_1 = false;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___value0;
		float L_1;
		L_1 = Vector3_Magnitude_m6AD0BEBF88AAF98188A851E62D7A32CB5B7830EF_inline(L_0, NULL);
		V_0 = L_1;
		float L_2 = V_0;
		V_1 = (bool)((((float)L_2) > ((float)(9.99999975E-06f)))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_001e;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___value0;
		float L_5 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Vector3_op_Division_mD7200D6D432BAFC4135C5B17A0B0A812203B0270_inline(L_4, L_5, NULL);
		V_2 = L_6;
		goto IL_0026;
	}

IL_001e:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline(NULL);
		V_2 = L_7;
		goto IL_0026;
	}

IL_0026:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = V_2;
		return L_8;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Magnitude_m6AD0BEBF88AAF98188A851E62D7A32CB5B7830EF_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___vector0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___vector0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___vector0;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___vector0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___vector0;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___vector0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___vector0;
		float L_11 = L_10.___z_4;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_12;
		L_12 = sqrt(((double)((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_1, L_3)), ((float)il2cpp_codegen_multiply(L_5, L_7)))), ((float)il2cpp_codegen_multiply(L_9, L_11))))));
		V_0 = ((float)L_12);
		goto IL_0034;
	}

IL_0034:
	{
		float L_13 = V_0;
		return L_13;
	}
}
