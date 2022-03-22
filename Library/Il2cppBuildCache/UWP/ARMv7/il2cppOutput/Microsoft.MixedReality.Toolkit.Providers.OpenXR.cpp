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
template <typename T1, typename T2, typename T3, typename T4>
struct InterfaceActionInvoker4
{
	typedef void (*Action)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
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

// System.Action`1<System.Boolean>
struct Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C;
// System.Action`1<System.Object>
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87;
// Microsoft.MixedReality.Toolkit.BaseDataProvider`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem>
struct BaseDataProvider_1_t1C7B9F1707FEB27659F53B230E0A18282D2F7F20;
// Microsoft.MixedReality.Toolkit.BaseDataProvider`1<System.Object>
struct BaseDataProvider_1_t8DC280A360428C68343AA5D6B95788F4A050196F;
// System.Collections.Generic.Dictionary`2<Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointer,System.UInt32>
struct Dictionary_2_t924EC80B88AF529C31B6BD658C27711A7B2B2A5E;
// System.Collections.Generic.Dictionary`2<UnityEngine.XR.InputDevice,Microsoft.MixedReality.Toolkit.XRSDK.Input.GenericXRSDKController>
struct Dictionary_2_t500395CB4236088AFBF004A0D9DD896F9DC12876;
// System.Collections.Generic.Dictionary`2<UnityEngine.XR.InputDevice,System.Object>
struct Dictionary_2_t71D6FBDC59C9F3896AA3D4E3FEBCEA1D877D10C5;
// System.Collections.Generic.Dictionary`2<System.Int32,Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessMeshObject>
struct Dictionary_2_t0E31064CA2CAEBF8E2C6B82A38A6D432A0F91413;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task>
struct Dictionary_2_t403063CE4960B4F46C688912237C6A27E550FF55;
// System.Collections.Generic.Dictionary`2<System.Int32Enum,Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose>
struct Dictionary_2_t5BAA4B6E262AC9F9CA03BE0EB72876064BB73549;
// System.Collections.Generic.Dictionary`2<Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint,Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose>
struct Dictionary_2_t88261A8DE0EA7D536FD580182F6F73520708C1B7;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.SpatialAwareness.IMixedRealitySpatialAwarenessObservationHandler`1<Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessMeshObject>>
struct EventFunction_1_tEBC0FE0CCBC0E2CED086EF11F4973BE9B1419E00;
// System.Func`1<System.Boolean>
struct Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457;
// System.Func`1<System.Threading.Tasks.Task/ContingentProperties>
struct Func_1_tD59A12717D79BFB403BF973694B1BE5B85474BD1;
// System.Collections.Generic.IEqualityComparer`1<UnityEngine.XR.InputDevice>
struct IEqualityComparer_1_tE36397949962FBA7295FD9601B752364AFB4B9BD;
// System.Collections.Generic.IEqualityComparer`1<Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint>
struct IEqualityComparer_1_t6AFB4C240131CC78AE41EA29164522ADED0E9CD4;
// System.Collections.Generic.IReadOnlyList`1<Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver>
struct IReadOnlyList_1_t9F9234BC8DF4C655DBE288E0E99D8F2324A8F244;
// System.Collections.Generic.Dictionary`2/KeyCollection<UnityEngine.XR.InputDevice,Microsoft.MixedReality.Toolkit.XRSDK.Input.GenericXRSDKController>
struct KeyCollection_tAC459CF1D9D2C68BB347E1A1EF4519DCC3DD58A1;
// System.Collections.Generic.Dictionary`2/KeyCollection<UnityEngine.XR.InputDevice,System.Object>
struct KeyCollection_tF2D1EC54D3D8A791F792CE20D76ACCD9A26A5A64;
// System.Collections.Generic.Dictionary`2/KeyCollection<Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint,Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose>
struct KeyCollection_tBAEB035A4D3BD623AA6BAB4D446C25A2AD10C6C2;
// System.Collections.Generic.List`1<UnityEngine.XR.Bone>
struct List_1_t291997894B2B2DA81CD73E6D5913780EBFED4068;
// System.Collections.Generic.List`1<UnityEngine.XR.InputDevice>
struct List_1_tB66D13E0427CA48C600AEA4DBA5B173C3734C6CE;
// System.Collections.Generic.List`1<UnityEngine.XR.InputDeviceCharacteristics>
struct List_1_tEA57E67D76DE7CBA7F472F399385BD853B825EB7;
// System.Collections.Generic.List`1<UnityEngine.XR.MeshInfo>
struct List_1_tEE09D0BD215A518344AF2985829C519B609B7B17;
// System.Collections.Generic.List`1<UnityEngine.Ray>
struct List_1_tEC4759056ABBCCE15600D14832D9EFF79F822BE0;
// System.Collections.Generic.List`1<UnityEngine.XR.XRInputSubsystem>
struct List_1_t90832B88D7207769654164CC28440CF594CC397D;
// Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessEventData`1<Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessMeshObject>
struct MixedRealitySpatialAwarenessEventData_1_tE46EB2E96DFDDF77196F0A24715743FD22640021;
// System.Predicate`1<System.Object>
struct Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12;
// System.Predicate`1<System.Threading.Tasks.Task>
struct Predicate_1_t7F48518B008C1472339EEEBABA3DE203FE1F26ED;
// System.Collections.Generic.Queue`1<UnityEngine.XR.MeshId>
struct Queue_1_tCD897AEF7F66F282E6B86F78DCC03D0B51FBDF37;
// System.Threading.Tasks.TaskFactory`1<UnityEngine.GameObject>
struct TaskFactory_1_t319B003F17AE88C9B30313BA13576A8DC5AB9110;
// System.Threading.Tasks.Task`1<UnityEngine.GameObject>
struct Task_1_tE06D7E45E347567BB7775D8FB00F95DC55D14506;
// System.Threading.Tasks.Task`1<System.Object>
struct Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2;
// System.Collections.Generic.Dictionary`2/ValueCollection<UnityEngine.XR.InputDevice,Microsoft.MixedReality.Toolkit.XRSDK.Input.GenericXRSDKController>
struct ValueCollection_t7F7DC8938D9D14C7F210BAD9F68B0A42D9383CCA;
// System.Collections.Generic.Dictionary`2/ValueCollection<Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint,Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose>
struct ValueCollection_t2AE0264CE138FC2B8D8839AB6F8E4EE60442470B;
// System.Collections.Generic.Dictionary`2/Entry<UnityEngine.XR.InputDevice,Microsoft.MixedReality.Toolkit.XRSDK.Input.GenericXRSDKController>[]
struct EntryU5BU5D_t310105339EC5247A39CE52616910CF9376264EA2;
// System.Collections.Generic.Dictionary`2/Entry<Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint,Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose>[]
struct EntryU5BU5D_tA56099A91E38976C5903C65561AE117EDF312B57;
// UnityEngine.XR.Bone[]
struct BoneU5BU5D_t3F47FDB881D46DBD7A261AFFA7560DE03AD33DC2;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// UnityEngine.XR.HandFinger[]
struct HandFingerU5BU5D_t722717EF823803BD086286CBF1A2D5F4B8E05F45;
// UnityEngine.XR.InputDevice[]
struct InputDeviceU5BU5D_t1361FC6DDFE12D211F933B024E51B7E5CF073F63;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping[]
struct MixedRealityInteractionMappingU5BU5D_t689ED6694F3B293DEDEA6D5371268D36DC67AACE;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
// Microsoft.MixedReality.Toolkit.Input.BaseInputDeviceManager/PointerConfig[]
struct PointerConfigU5BU5D_tB0CE3BD4887D9B9BFC82FC1CA265B076BFD7B59F;
// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07;
// Microsoft.MixedReality.Toolkit.Input.ArticulatedHandDefinition
struct ArticulatedHandDefinition_t9B5E215D853BD6F61AF012898D07BBDE93B4AEC4;
// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C;
// Microsoft.MixedReality.Toolkit.CameraSystem.BaseCameraSettingsProfile
struct BaseCameraSettingsProfile_tDB8373232611B34628752DF4D284B938CFE32799;
// Microsoft.MixedReality.Toolkit.CameraSystem.BaseCameraSettingsProvider
struct BaseCameraSettingsProvider_tD700E49A18844AC7B08C84247430319CFEC93F46;
// Microsoft.MixedReality.Toolkit.Input.BaseController
struct BaseController_t1635F01D9B5000C345FAF98BAEEA495E97C32274;
// Microsoft.MixedReality.Toolkit.Input.BaseInputDeviceManager
struct BaseInputDeviceManager_t1D055DB03D88FA053C00671FEA5040B944CC26BC;
// Microsoft.MixedReality.Toolkit.BaseMixedRealityProfile
struct BaseMixedRealityProfile_tB4FDEF58FFD17796C0DB7241630B71CDF38FA1D4;
// Microsoft.MixedReality.Toolkit.BaseService
struct BaseService_tB7EC5C0F60DC5EE2DA122A608226D3887B6421D0;
// System.Reflection.Binder
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// System.Threading.ContextCallback
struct ContextCallback_tE8AFBDBFCC040FDA8DA8C1EEFE9BD66B16BDA007;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// System.Exception
struct Exception_t;
// Microsoft.MixedReality.Toolkit.Utilities.EyeGazeSmoother
struct EyeGazeSmoother_t694634D7A1E87E3409EB4E378F76454732CA1698;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// Microsoft.MixedReality.Toolkit.XRSDK.Input.GenericXRSDKController
struct GenericXRSDKController_tB5136D037E3BD7D743A519016EA2710F7ED980DE;
// Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver
struct GenericXRSDKSpatialMeshObserver_t992F3640352E29648369A4DE1DDAC0FFB6EAC6D1;
// Microsoft.MixedReality.Toolkit.Input.HPMotionControllerDefinition
struct HPMotionControllerDefinition_t5475B48AB19D09044334A500FD1D1F9616AA2E7F;
// Microsoft.MixedReality.Toolkit.XRSDK.OpenXR.HPReverbG2Controller
struct HPReverbG2Controller_tC92BB9012B3B951EDF062F795D81AB05B8F8BCAB;
// System.IAsyncResult
struct IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5;
// System.Runtime.CompilerServices.IAsyncStateMachine
struct IAsyncStateMachine_t0680C7F905C553076B552D5A1A6E39E2F0F36AA2;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// Microsoft.MixedReality.Toolkit.CameraSystem.IMixedRealityCameraSystem
struct IMixedRealityCameraSystem_tCB1C695B973C92DD68D0B561E01683EFFAE9044C;
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityControllerVisualizer
struct IMixedRealityControllerVisualizer_t7B6B8F308ED8917976841E02F1525D6B7E478F7B;
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityEyeSaccadeProvider
struct IMixedRealityEyeSaccadeProvider_t6E8388DA7E85908BC872D0AD4357F7833F8A6EDE;
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource
struct IMixedRealityInputSource_t9926A91DEC380AA837347E82976F5A6A9F9226C2;
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSourceDefinition
struct IMixedRealityInputSourceDefinition_tE7BF76E1A2D7019ADB64FA561FB5D5DC1965E835;
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem
struct IMixedRealityInputSystem_t73D9E8D52E761DF1CC230411D0EFD51104FF68B2;
// Microsoft.MixedReality.Toolkit.IMixedRealityServiceRegistrar
struct IMixedRealityServiceRegistrar_t4B893B7CDAAC977211D826D02C8522ECA327D715;
// Microsoft.MixedReality.Toolkit.SpatialAwareness.IMixedRealitySpatialAwarenessSystem
struct IMixedRealitySpatialAwarenessSystem_tF5F2975ACCFD98470DF1D17EC3850A257BF28817;
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityTeleportPointer
struct IMixedRealityTeleportPointer_tB6657B604BCBD6DF6AB2701CC909184BE15B4C5D;
// UnityEngine.ISubsystemDescriptor
struct ISubsystemDescriptor_tEF29944D579CC7D70F52CB883150735991D54E6E;
// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
// System.Reflection.MemberFilter
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// Microsoft.MixedReality.Toolkit.XRSDK.OpenXR.MicrosoftArticulatedHand
struct MicrosoftArticulatedHand_tFE375102CA3BF7EBD1CB6E1BD88C26C51F116CFB;
// Microsoft.MixedReality.Toolkit.XRSDK.OpenXR.MicrosoftControllerModelProvider
struct MicrosoftControllerModelProvider_tF65FFDFA9AC6B73CB968B37DC19BA25FE7D72204;
// Microsoft.MixedReality.Toolkit.XRSDK.OpenXR.MicrosoftMotionController
struct MicrosoftMotionController_tC3CCCF3F155F3A7D33CA0B6078E5750C7C2AAE8C;
// Microsoft.MixedReality.Toolkit.Input.MixedRealityEyeTrackingProfile
struct MixedRealityEyeTrackingProfile_tC934F1DEA6C01B8F9F282E6AE7987E7CD874411B;
// Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping
struct MixedRealityInteractionMapping_t10DB776EEA5255542F8F4AF0DC0BC566AF0095E0;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// Microsoft.MixedReality.Toolkit.XRSDK.OpenXR.OpenXRCameraSettings
struct OpenXRCameraSettings_t79033AFF7FDF1F549BD9331CD1E22FA7E955EF3F;
// Microsoft.MixedReality.Toolkit.XRSDK.OpenXR.OpenXRCameraSettingsProfile
struct OpenXRCameraSettingsProfile_t06E39687ABEB6884081EEB67DBC551239884CBD0;
// Microsoft.MixedReality.Toolkit.XRSDK.OpenXR.OpenXRDeviceManager
struct OpenXRDeviceManager_t0C31243398BC0C715BF745D6F2C7AA501C3DDA9A;
// Microsoft.MixedReality.Toolkit.XRSDK.OpenXR.OpenXREyeGazeDataProvider
struct OpenXREyeGazeDataProvider_t25F551318CABD265458042E84D190BF28F66A55F;
// Microsoft.MixedReality.Toolkit.XRSDK.OpenXR.OpenXRHandMeshProvider
struct OpenXRHandMeshProvider_t7E1EB4108CF655D3DB1CAF41AD048D7AE755B060;
// Microsoft.MixedReality.Toolkit.XRSDK.OpenXR.OpenXRReprojectionUpdater
struct OpenXRReprojectionUpdater_t0CE1222DFB4C9CCF7637817B8A3E9129315C5815;
// Microsoft.MixedReality.Toolkit.XRSDK.OpenXR.OpenXRSpatialAwarenessMeshObserver
struct OpenXRSpatialAwarenessMeshObserver_t5721727A2DB9C492722FA318D38FAB0608F14E11;
// UnityEngine.PhysicMaterial
struct PhysicMaterial_t4ECED34E04BB2148333467208361A5FBFDCD7131;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessMeshObject
struct SpatialAwarenessMeshObject_t5577B6C05F0A1138C582A8F1B7A717B81AE11379;
// System.Threading.Tasks.StackGuard
struct StackGuard_tACE063A1B7374BDF4AD472DE4585D05AD8745352;
// System.String
struct String_t;
// System.Threading.SynchronizationContext
struct SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0;
// System.Threading.Tasks.Task
struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572;
// System.Threading.Tasks.TaskFactory
struct TaskFactory_tF781BD37BE23917412AD83424D1497C7C1509DF0;
// System.Threading.Tasks.TaskScheduler
struct TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E;
// System.Type
struct Type_t;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityEngine.WaitUntil
struct WaitUntil_tA1CD487C5811E7C1F8C4ADA85DF5F4EFDC1D41BD;
// Microsoft.MixedReality.Toolkit.Input.WindowsMixedRealityControllerDefinition
struct WindowsMixedRealityControllerDefinition_tE3D0C6686E8565C58FA657AB2A2A3426765A3D71;
// UnityEngine.XR.XRDisplaySubsystem
struct XRDisplaySubsystem_t4B00B0BF1894A039ACFA8DDC2C2EB9301118C1F1;
// UnityEngine.XR.XRMeshSubsystem
struct XRMeshSubsystem_tDDC31EC10D4F0517542F9EB296428A0F7EC2C3B2;
// Microsoft.MixedReality.Toolkit.XRSDK.Input.XRSDKDeviceManager
struct XRSDKDeviceManager_t9F5B097AEC5AA187C3083AE6F40B34E00E1BA583;
// Microsoft.MixedReality.Toolkit.Utilities.AwaiterExtensions/SimpleCoroutineAwaiter
struct SimpleCoroutineAwaiter_t9DF0277C21C7F3B9CE7C9563D257D9A4821B4898;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD;
// System.Threading.Tasks.Task/ContingentProperties
struct ContingentProperties_t3FA59480914505CEA917B1002EC675F29D0CB540;

IL2CPP_EXTERN_C RuntimeClass* Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArticulatedHandDefinition_t9B5E215D853BD6F61AF012898D07BBDE93B4AEC4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AsyncTaskMethodBuilder_1_t39EED874134028D1D4331D5686AA19731E407868_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BaseInputDeviceManager_t1D055DB03D88FA053C00671FEA5040B944CC26BC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CommonUsages_t9208F514F1E77BE70AC53EFEC94D57EDDAF3B8E1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CoreServices_tCB1FB80E338B89BCA07C52C15B876BC6D4B3439B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CustomUsages_t07BAB05B93FBB1D80AAD710042445ED8DDE3A476_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t88261A8DE0EA7D536FD580182F6F73520708C1B7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EyeGazeSmoother_t694634D7A1E87E3409EB4E378F76454732CA1698_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EyeTrackingUsages_tD15D76EB6FE8970151F2F2ADF43C96B9110663FE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GenericXRSDKController_tB5136D037E3BD7D743A519016EA2710F7ED980DE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GenericXRSDKSpatialMeshObserver_t992F3640352E29648369A4DE1DDAC0FFB6EAC6D1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HPMotionControllerDefinition_t5475B48AB19D09044334A500FD1D1F9616AA2E7F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HPReverbG2Controller_tC92BB9012B3B951EDF062F795D81AB05B8F8BCAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HandFingerU5BU5D_t722717EF823803BD086286CBF1A2D5F4B8E05F45_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IMixedRealityEyeGazeProvider_tC69CFCA4497CFED3639A93E88CA9A6D175004416_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IMixedRealityInputSystem_t73D9E8D52E761DF1CC230411D0EFD51104FF68B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t291997894B2B2DA81CD73E6D5913780EBFED4068_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tB66D13E0427CA48C600AEA4DBA5B173C3734C6CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Mathf_tE284D016E3B297B72311AAD9EB8F0E643F6A4682_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MicrosoftArticulatedHand_tFE375102CA3BF7EBD1CB6E1BD88C26C51F116CFB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MicrosoftMotionController_tC3CCCF3F155F3A7D33CA0B6078E5750C7C2AAE8C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MixedRealityEyeTrackingProfile_tC934F1DEA6C01B8F9F282E6AE7987E7CD874411B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MixedRealityPose_tE60115C271AC50B8C11BA3B404BFCA99C7B2EFF5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OpenXRCameraSettingsProfile_t06E39687ABEB6884081EEB67DBC551239884CBD0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OpenXRDeviceManager_t0C31243398BC0C715BF745D6F2C7AA501C3DDA9A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OpenXREyeGazeDataProvider_t25F551318CABD265458042E84D190BF28F66A55F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OpenXRHandMeshProvider_t7E1EB4108CF655D3DB1CAF41AD048D7AE755B060_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SimpleCoroutineAwaiter_t9DF0277C21C7F3B9CE7C9563D257D9A4821B4898_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitUntil_tA1CD487C5811E7C1F8C4ADA85DF5F4EFDC1D41BD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WindowsMixedRealityControllerDefinition_tE3D0C6686E8565C58FA657AB2A2A3426765A3D71_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XRSDKDeviceManager_t9F5B097AEC5AA187C3083AE6F40B34E00E1BA583_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XRSubsystemHelpers_t8E4DEBF56BAC982E1CF1519D46753203AD7CC427_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral0A15B6B283C98B4F62B301AF4050963B9F35C000;
IL2CPP_EXTERN_C String_t* _stringLiteral52BA95C20C03ADFBDAF6B5C64272DD4A5C9D1FE0;
IL2CPP_EXTERN_C String_t* _stringLiteral612C3797426144C3C776DE00617309EF6A458B06;
IL2CPP_EXTERN_C String_t* _stringLiteral785C543519EB6E0B5983BDD07361B07451B939E6;
IL2CPP_EXTERN_C String_t* _stringLiteral80D1648E8FE647DFFDBAD4B89EC0DB2877CCB220;
IL2CPP_EXTERN_C String_t* _stringLiteral87645AC8450BCE81DEB59B1D37567DC26C625401;
IL2CPP_EXTERN_C String_t* _stringLiteral8F1A06D44AA46BA3D099F4AF2B341469C7B5F8DE;
IL2CPP_EXTERN_C String_t* _stringLiteralA99564B21D524436BCBDE413157922CDA544BA1B;
IL2CPP_EXTERN_C String_t* _stringLiteralB225114D2C3857BE9E73DA5D5C96CEF5957D1AC1;
IL2CPP_EXTERN_C String_t* _stringLiteralB3BA1DAEB772EC12A843CE87109432F8ACE760C0;
IL2CPP_EXTERN_C String_t* _stringLiteralB6B2CD42E6C5B2E5B6B1197528D0FEE4D0121EAB;
IL2CPP_EXTERN_C String_t* _stringLiteralBBABDBD5000A085E82E4D1F28B12069391E261AA;
IL2CPP_EXTERN_C String_t* _stringLiteralE5FA4BC17D3659FB38B6BBA49E9EC577A2E3A449;
IL2CPP_EXTERN_C String_t* _stringLiteralF6EED814CF57561BB951430F9A6E99A9476E9744;
IL2CPP_EXTERN_C String_t* _stringLiteralFA21F085857C25FA6633EF256DA63F630C4ACF75;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_Create_mCDF7C9C0134FCFC40D4C0ED9396204CAEF288FE8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_SetException_mAE0D2510C63C5BEB04AA77FB6114CD8B97C11FFE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_SetResult_mA747C28DBECF7C5751BF6E9628F176A9C50B2D05_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_SetStateMachine_m957BD84C77C5AAFE13A722DDFE9845DDF4DF5415_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_Start_TisU3CTryGenerateControllerModelFromPlatformSDKU3Ed__1_t634A2619353B2ADDB9D91D244F8D3FB5701728F8_mB80FE041ADB60FB4F574BE837AEAC0CB146D9040_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_get_Task_m19C84E9A0B26617DE9B32A186501CAC7AE6C895E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncVoidMethodBuilder_AwaitOnCompleted_TisSimpleCoroutineAwaiter_t9DF0277C21C7F3B9CE7C9563D257D9A4821B4898_TisU3CEnableIfLoaderBecomesActiveU3Ed__27_t6E741431DCE784A89F3E72D66000E57BB7966575_mA1970863B1EFA1AFDFE10E5A5DE792C1075A9B38_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncVoidMethodBuilder_AwaitOnCompleted_TisSimpleCoroutineAwaiter_t9DF0277C21C7F3B9CE7C9563D257D9A4821B4898_TisU3CEnableIfLoaderBecomesActiveU3Ed__4_tBEE69E1D11D867DAE899E661B1399BB7FE0463FD_m0941B9D040B923615844B60D20C56DB6DED99DB5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncVoidMethodBuilder_AwaitOnCompleted_TisSimpleCoroutineAwaiter_t9DF0277C21C7F3B9CE7C9563D257D9A4821B4898_TisU3CEnableIfLoaderBecomesActiveU3Ed__7_t55A622F0A215D46947C9F623BA27D2844AC94BA9_m300BD274EB5E3030F6C717F09BCB5BEBE16615D2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncVoidMethodBuilder_Start_TisU3CEnableIfLoaderBecomesActiveU3Ed__27_t6E741431DCE784A89F3E72D66000E57BB7966575_m8FDE3FA3806D1146AC02EF98D3F03479DF04D3C1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncVoidMethodBuilder_Start_TisU3CEnableIfLoaderBecomesActiveU3Ed__4_tBEE69E1D11D867DAE899E661B1399BB7FE0463FD_m26D778C7FB9AA545044BDE3F941F10A60279F857_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncVoidMethodBuilder_Start_TisU3CEnableIfLoaderBecomesActiveU3Ed__7_t55A622F0A215D46947C9F623BA27D2844AC94BA9_mA8F1E5BE7017B00A7E38A6BEE056C72F44CFCB30_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BaseDataProvider_1_get_Service_m886AE537D966101848DD8F8D348F366C71253B3B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ComponentExtensions_EnsureComponent_TisOpenXRReprojectionUpdater_t0CE1222DFB4C9CCF7637817B8A3E9129315C5815_mD279AB605A627BA2147A272C37E7B377FE3F73CD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_m59F621E299B2B5A5E0B1C56AF791A0394BF6479E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_ContainsKey_m49678D0E11E60CE005DD021DECFC686C20B0DA18_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Remove_m3FE21AD019B8AD4E0049631DC383A26CD5F61953_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_TryGetValue_m5BA3B1495D7A52D723E805C6272917A762BFF71B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_mB503ABA3C13679286D2C404B06C0F4C781873E4C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Item_m5CC2CE4AA8CC3E60E913BE28E235D43F6FE6E7CD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Keys_m6BA54FEB7A1DC9F37530EE530E783428CBA80148_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_mCA55C3E6813B3E8D1C814054AA423E553A26B4B1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m044BA768636CFC26F6615FB333B42A7DF8C6F3ED_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mAF547A63238FF65774DE78693B8B79270BF61D80_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m923A8C26E9A3F06386C1E59016BC27BDFCC50AF3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyCollection_GetEnumerator_m03E5076D095402E679C6DB5D11948821578C48A2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m2E21E77857A59DDCA977AE1BB52631B7D6FF16F9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mF7ACC153F11A3260DAACDCA56B0A70A4BFA61EA4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m828761CCE16645195ED82DCD06AD93CD44C905FD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m9C3EC7FE1A9401268B3C9761A4D96A37197AD0E7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m626280022A1933CC2CE133A8457F00D99C445275_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_mB0ED54544433CE428ACEC0FE2E6FEE53E11EE6D2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* LoaderHelpers_IsLoaderActive_TisOpenXRLoaderBase_t58BF6FC81FD9A7698FB65D651A0BB57EA7F47637_m8A7E36C8939A77CD18EB022010A767300C47069B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_GetValueOrDefault_m8D130DB7F2A1E694736B449176F9C26DB456597B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1__ctor_m141FA88563AC0B5179132FB929EABD02C47FF703_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1__ctor_m4FAA8281CB4EFFD8B817734351FB3AC20A0CD6F5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_HasValue_m6B76D139692C43B2AF7C695FAB044B16ACFAF355_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_Value_mE2C54C6AE9FC9F05BF44CD9D7D61DC6CD56E3E28_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* OpenXRCameraSettings_U3CEnableIfLoaderBecomesActiveU3Eb__7_0_m879285DD960476651349BA11AD6E05C1E5C13A67_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* OpenXRDeviceManager_U3CEnableIfLoaderBecomesActiveU3Eb__4_0_m8AE9CB93266786724113D69482E4B6CE5D3D793D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* OpenXREyeGazeDataProvider_GazeSmoother_OnSaccadeX_mBF7FF5BD97C50B1FBC56803B45F8A29C55E326F4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* OpenXREyeGazeDataProvider_GazeSmoother_OnSaccadeY_m19B7F8EE224C6C6AF939B1173C6CE427D5E53011_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* OpenXREyeGazeDataProvider_GazeSmoother_OnSaccade_m1BAD0D7197716189E3861BA88FA9E6FA06D5044C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* OpenXREyeGazeDataProvider_U3CEnableIfLoaderBecomesActiveU3Eb__27_0_mEF0774AF765A27BCFA634865396F6E2BF1FADC99_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* HPReverbG2Controller_tC92BB9012B3B951EDF062F795D81AB05B8F8BCAB_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* HandFinger_tD866B318803A5E7059DC88A19B5EE51922717949_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* MicrosoftArticulatedHand_tFE375102CA3BF7EBD1CB6E1BD88C26C51F116CFB_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* MicrosoftMotionController_tC3CCCF3F155F3A7D33CA0B6078E5750C7C2AAE8C_0_0_0_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct HandFingerU5BU5D_t722717EF823803BD086286CBF1A2D5F4B8E05F45;
struct MixedRealityInteractionMappingU5BU5D_t689ED6694F3B293DEDEA6D5371268D36DC67AACE;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_t6AFF898419B52566984E43996B52DFF34C02E60E 
{
};

// System.Collections.Generic.Dictionary`2<UnityEngine.XR.InputDevice,Microsoft.MixedReality.Toolkit.XRSDK.Input.GenericXRSDKController>
struct Dictionary_2_t500395CB4236088AFBF004A0D9DD896F9DC12876  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t310105339EC5247A39CE52616910CF9376264EA2* ____entries_1;
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
	KeyCollection_tAC459CF1D9D2C68BB347E1A1EF4519DCC3DD58A1* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t7F7DC8938D9D14C7F210BAD9F68B0A42D9383CCA* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Dictionary`2<Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint,Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose>
struct Dictionary_2_t88261A8DE0EA7D536FD580182F6F73520708C1B7  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_tA56099A91E38976C5903C65561AE117EDF312B57* ____entries_1;
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
	KeyCollection_tBAEB035A4D3BD623AA6BAB4D446C25A2AD10C6C2* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t2AE0264CE138FC2B8D8839AB6F8E4EE60442470B* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Dictionary`2/KeyCollection<UnityEngine.XR.InputDevice,Microsoft.MixedReality.Toolkit.XRSDK.Input.GenericXRSDKController>
struct KeyCollection_tAC459CF1D9D2C68BB347E1A1EF4519DCC3DD58A1  : public RuntimeObject
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/KeyCollection::_dictionary
	Dictionary_2_t500395CB4236088AFBF004A0D9DD896F9DC12876* ____dictionary_0;
};

// System.Collections.Generic.List`1<UnityEngine.XR.Bone>
struct List_1_t291997894B2B2DA81CD73E6D5913780EBFED4068  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	BoneU5BU5D_t3F47FDB881D46DBD7A261AFFA7560DE03AD33DC2* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t291997894B2B2DA81CD73E6D5913780EBFED4068_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	BoneU5BU5D_t3F47FDB881D46DBD7A261AFFA7560DE03AD33DC2* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<UnityEngine.XR.InputDevice>
struct List_1_tB66D13E0427CA48C600AEA4DBA5B173C3734C6CE  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	InputDeviceU5BU5D_t1361FC6DDFE12D211F933B024E51B7E5CF073F63* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tB66D13E0427CA48C600AEA4DBA5B173C3734C6CE_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	InputDeviceU5BU5D_t1361FC6DDFE12D211F933B024E51B7E5CF073F63* ___s_emptyArray_5;
};
struct Il2CppArrayBounds;

// Microsoft.MixedReality.Toolkit.Input.BaseInputSourceDefinition
struct BaseInputSourceDefinition_t3C7E26E809069FB4D48181384861DEC5E2EA36DB  : public RuntimeObject
{
	// Microsoft.MixedReality.Toolkit.Utilities.Handedness Microsoft.MixedReality.Toolkit.Input.BaseInputSourceDefinition::<Handedness>k__BackingField
	uint8_t ___U3CHandednessU3Ek__BackingField_0;
};

// UnityEngine.CustomYieldInstruction
struct CustomYieldInstruction_t6B81A50D5D210C1ACAAE247FB53B65CDFFEB7617  : public RuntimeObject
{
};

// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
};

// Microsoft.MixedReality.Toolkit.XRSDK.OpenXR.MicrosoftControllerModelProvider
struct MicrosoftControllerModelProvider_tF65FFDFA9AC6B73CB968B37DC19BA25FE7D72204  : public RuntimeObject
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
	RuntimeObject* ___m_continuationObject_23;
	// System.Threading.Tasks.Task/ContingentProperties modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_contingentProperties
	ContingentProperties_t3FA59480914505CEA917B1002EC675F29D0CB540* ___m_contingentProperties_26;
};

struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_StaticFields
{
	// System.Int32 System.Threading.Tasks.Task::s_taskIdCounter
	int32_t ___s_taskIdCounter_0;
	// System.Object System.Threading.Tasks.Task::s_taskCompletionSentinel
	RuntimeObject* ___s_taskCompletionSentinel_24;
	// System.Boolean System.Threading.Tasks.Task::s_asyncDebuggingEnabled
	bool ___s_asyncDebuggingEnabled_25;
	// System.Action`1<System.Object> System.Threading.Tasks.Task::s_taskCancelCallback
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___s_taskCancelCallback_27;
	// System.Func`1<System.Threading.Tasks.Task/ContingentProperties> System.Threading.Tasks.Task::s_createContingentProperties
	Func_1_tD59A12717D79BFB403BF973694B1BE5B85474BD1* ___s_createContingentProperties_30;
	// System.Threading.Tasks.TaskFactory System.Threading.Tasks.Task::<Factory>k__BackingField
	TaskFactory_tF781BD37BE23917412AD83424D1497C7C1509DF0* ___U3CFactoryU3Ek__BackingField_31;
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::<CompletedTask>k__BackingField
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___U3CCompletedTaskU3Ek__BackingField_32;
	// System.Predicate`1<System.Threading.Tasks.Task> System.Threading.Tasks.Task::s_IsExceptionObservedByParentPredicate
	Predicate_1_t7F48518B008C1472339EEEBABA3DE203FE1F26ED* ___s_IsExceptionObservedByParentPredicate_33;
	// System.Threading.ContextCallback System.Threading.Tasks.Task::s_ecCallback
	ContextCallback_tE8AFBDBFCC040FDA8DA8C1EEFE9BD66B16BDA007* ___s_ecCallback_34;
	// System.Predicate`1<System.Object> System.Threading.Tasks.Task::s_IsTaskContinuationNullPredicate
	Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12* ___s_IsTaskContinuationNullPredicate_35;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task> System.Threading.Tasks.Task::s_currentActiveTasks
	Dictionary_2_t403063CE4960B4F46C688912237C6A27E550FF55* ___s_currentActiveTasks_36;
	// System.Object System.Threading.Tasks.Task::s_activeTasksLock
	RuntimeObject* ___s_activeTasksLock_37;
};

struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_ThreadStaticFields
{
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::t_currentTask
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___t_currentTask_28;
	// System.Threading.Tasks.StackGuard System.Threading.Tasks.Task::t_stackGuard
	StackGuard_tACE063A1B7374BDF4AD472DE4585D05AD8745352* ___t_stackGuard_29;
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

// Microsoft.MixedReality.Toolkit.Utilities.AwaiterExtensions/SimpleCoroutineAwaiter
struct SimpleCoroutineAwaiter_t9DF0277C21C7F3B9CE7C9563D257D9A4821B4898  : public RuntimeObject
{
	// System.Exception Microsoft.MixedReality.Toolkit.Utilities.AwaiterExtensions/SimpleCoroutineAwaiter::exception
	Exception_t* ___exception_0;
	// System.Action Microsoft.MixedReality.Toolkit.Utilities.AwaiterExtensions/SimpleCoroutineAwaiter::continuation
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___continuation_1;
	// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.AwaiterExtensions/SimpleCoroutineAwaiter::<IsCompleted>k__BackingField
	bool ___U3CIsCompletedU3Ek__BackingField_2;
};

// UnityEngine.XR.InputFeatureUsage`1<System.Boolean>
struct InputFeatureUsage_1_tE336B2F0B9AC721519BFA17A08D6353FD5221637 
{
	// System.String UnityEngine.XR.InputFeatureUsage`1::<name>k__BackingField
	String_t* ___U3CnameU3Ek__BackingField_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.XR.InputFeatureUsage`1
#ifndef InputFeatureUsage_1_t66EDAF8AFFA2E9DDC0248C48B76ADAB8E2728858_marshaled_pinvoke_define
#define InputFeatureUsage_1_t66EDAF8AFFA2E9DDC0248C48B76ADAB8E2728858_marshaled_pinvoke_define
struct InputFeatureUsage_1_t66EDAF8AFFA2E9DDC0248C48B76ADAB8E2728858_marshaled_pinvoke
{
	char* ___U3CnameU3Ek__BackingField_0;
};
#endif
// Native definition for COM marshalling of UnityEngine.XR.InputFeatureUsage`1
#ifndef InputFeatureUsage_1_t66EDAF8AFFA2E9DDC0248C48B76ADAB8E2728858_marshaled_com_define
#define InputFeatureUsage_1_t66EDAF8AFFA2E9DDC0248C48B76ADAB8E2728858_marshaled_com_define
struct InputFeatureUsage_1_t66EDAF8AFFA2E9DDC0248C48B76ADAB8E2728858_marshaled_com
{
	Il2CppChar* ___U3CnameU3Ek__BackingField_0;
};
#endif

// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.XR.Eyes>
struct InputFeatureUsage_1_tD3FEDCAE0D7F51C7B42182162ACE726E68166B38 
{
	// System.String UnityEngine.XR.InputFeatureUsage`1::<name>k__BackingField
	String_t* ___U3CnameU3Ek__BackingField_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.XR.InputFeatureUsage`1
#ifndef InputFeatureUsage_1_t66EDAF8AFFA2E9DDC0248C48B76ADAB8E2728858_marshaled_pinvoke_define
#define InputFeatureUsage_1_t66EDAF8AFFA2E9DDC0248C48B76ADAB8E2728858_marshaled_pinvoke_define
struct InputFeatureUsage_1_t66EDAF8AFFA2E9DDC0248C48B76ADAB8E2728858_marshaled_pinvoke
{
	char* ___U3CnameU3Ek__BackingField_0;
};
#endif
// Native definition for COM marshalling of UnityEngine.XR.InputFeatureUsage`1
#ifndef InputFeatureUsage_1_t66EDAF8AFFA2E9DDC0248C48B76ADAB8E2728858_marshaled_com_define
#define InputFeatureUsage_1_t66EDAF8AFFA2E9DDC0248C48B76ADAB8E2728858_marshaled_com_define
struct InputFeatureUsage_1_t66EDAF8AFFA2E9DDC0248C48B76ADAB8E2728858_marshaled_com
{
	Il2CppChar* ___U3CnameU3Ek__BackingField_0;
};
#endif

// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.XR.Hand>
struct InputFeatureUsage_1_t64C1AA42D6E8BD57C54C7E891BD79A70A0F3A170 
{
	// System.String UnityEngine.XR.InputFeatureUsage`1::<name>k__BackingField
	String_t* ___U3CnameU3Ek__BackingField_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.XR.InputFeatureUsage`1
#ifndef InputFeatureUsage_1_t66EDAF8AFFA2E9DDC0248C48B76ADAB8E2728858_marshaled_pinvoke_define
#define InputFeatureUsage_1_t66EDAF8AFFA2E9DDC0248C48B76ADAB8E2728858_marshaled_pinvoke_define
struct InputFeatureUsage_1_t66EDAF8AFFA2E9DDC0248C48B76ADAB8E2728858_marshaled_pinvoke
{
	char* ___U3CnameU3Ek__BackingField_0;
};
#endif
// Native definition for COM marshalling of UnityEngine.XR.InputFeatureUsage`1
#ifndef InputFeatureUsage_1_t66EDAF8AFFA2E9DDC0248C48B76ADAB8E2728858_marshaled_com_define
#define InputFeatureUsage_1_t66EDAF8AFFA2E9DDC0248C48B76ADAB8E2728858_marshaled_com_define
struct InputFeatureUsage_1_t66EDAF8AFFA2E9DDC0248C48B76ADAB8E2728858_marshaled_com
{
	Il2CppChar* ___U3CnameU3Ek__BackingField_0;
};
#endif

// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.XR.InputTrackingState>
struct InputFeatureUsage_1_t4EF7DDCAC35EE23BA72694AC2AB76CF4A879FFD9 
{
	// System.String UnityEngine.XR.InputFeatureUsage`1::<name>k__BackingField
	String_t* ___U3CnameU3Ek__BackingField_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.XR.InputFeatureUsage`1
#ifndef InputFeatureUsage_1_t66EDAF8AFFA2E9DDC0248C48B76ADAB8E2728858_marshaled_pinvoke_define
#define InputFeatureUsage_1_t66EDAF8AFFA2E9DDC0248C48B76ADAB8E2728858_marshaled_pinvoke_define
struct InputFeatureUsage_1_t66EDAF8AFFA2E9DDC0248C48B76ADAB8E2728858_marshaled_pinvoke
{
	char* ___U3CnameU3Ek__BackingField_0;
};
#endif
// Native definition for COM marshalling of UnityEngine.XR.InputFeatureUsage`1
#ifndef InputFeatureUsage_1_t66EDAF8AFFA2E9DDC0248C48B76ADAB8E2728858_marshaled_com_define
#define InputFeatureUsage_1_t66EDAF8AFFA2E9DDC0248C48B76ADAB8E2728858_marshaled_com_define
struct InputFeatureUsage_1_t66EDAF8AFFA2E9DDC0248C48B76ADAB8E2728858_marshaled_com
{
	Il2CppChar* ___U3CnameU3Ek__BackingField_0;
};
#endif

// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Quaternion>
struct InputFeatureUsage_1_t8489CEC68B1EC178F2634079A9D7CD9E90D3CF5D 
{
	// System.String UnityEngine.XR.InputFeatureUsage`1::<name>k__BackingField
	String_t* ___U3CnameU3Ek__BackingField_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.XR.InputFeatureUsage`1
#ifndef InputFeatureUsage_1_t66EDAF8AFFA2E9DDC0248C48B76ADAB8E2728858_marshaled_pinvoke_define
#define InputFeatureUsage_1_t66EDAF8AFFA2E9DDC0248C48B76ADAB8E2728858_marshaled_pinvoke_define
struct InputFeatureUsage_1_t66EDAF8AFFA2E9DDC0248C48B76ADAB8E2728858_marshaled_pinvoke
{
	char* ___U3CnameU3Ek__BackingField_0;
};
#endif
// Native definition for COM marshalling of UnityEngine.XR.InputFeatureUsage`1
#ifndef InputFeatureUsage_1_t66EDAF8AFFA2E9DDC0248C48B76ADAB8E2728858_marshaled_com_define
#define InputFeatureUsage_1_t66EDAF8AFFA2E9DDC0248C48B76ADAB8E2728858_marshaled_com_define
struct InputFeatureUsage_1_t66EDAF8AFFA2E9DDC0248C48B76ADAB8E2728858_marshaled_com
{
	Il2CppChar* ___U3CnameU3Ek__BackingField_0;
};
#endif

// UnityEngine.XR.InputFeatureUsage`1<System.Single>
struct InputFeatureUsage_1_t311D0F42F1A7BF37D3CEAC15A53A1F24165F1848 
{
	// System.String UnityEngine.XR.InputFeatureUsage`1::<name>k__BackingField
	String_t* ___U3CnameU3Ek__BackingField_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.XR.InputFeatureUsage`1
#ifndef InputFeatureUsage_1_t66EDAF8AFFA2E9DDC0248C48B76ADAB8E2728858_marshaled_pinvoke_define
#define InputFeatureUsage_1_t66EDAF8AFFA2E9DDC0248C48B76ADAB8E2728858_marshaled_pinvoke_define
struct InputFeatureUsage_1_t66EDAF8AFFA2E9DDC0248C48B76ADAB8E2728858_marshaled_pinvoke
{
	char* ___U3CnameU3Ek__BackingField_0;
};
#endif
// Native definition for COM marshalling of UnityEngine.XR.InputFeatureUsage`1
#ifndef InputFeatureUsage_1_t66EDAF8AFFA2E9DDC0248C48B76ADAB8E2728858_marshaled_com_define
#define InputFeatureUsage_1_t66EDAF8AFFA2E9DDC0248C48B76ADAB8E2728858_marshaled_com_define
struct InputFeatureUsage_1_t66EDAF8AFFA2E9DDC0248C48B76ADAB8E2728858_marshaled_com
{
	Il2CppChar* ___U3CnameU3Ek__BackingField_0;
};
#endif

// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector2>
struct InputFeatureUsage_1_tEB160A05BCDCCA4F96072CBA0866498D06B9A27C 
{
	// System.String UnityEngine.XR.InputFeatureUsage`1::<name>k__BackingField
	String_t* ___U3CnameU3Ek__BackingField_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.XR.InputFeatureUsage`1
#ifndef InputFeatureUsage_1_t66EDAF8AFFA2E9DDC0248C48B76ADAB8E2728858_marshaled_pinvoke_define
#define InputFeatureUsage_1_t66EDAF8AFFA2E9DDC0248C48B76ADAB8E2728858_marshaled_pinvoke_define
struct InputFeatureUsage_1_t66EDAF8AFFA2E9DDC0248C48B76ADAB8E2728858_marshaled_pinvoke
{
	char* ___U3CnameU3Ek__BackingField_0;
};
#endif
// Native definition for COM marshalling of UnityEngine.XR.InputFeatureUsage`1
#ifndef InputFeatureUsage_1_t66EDAF8AFFA2E9DDC0248C48B76ADAB8E2728858_marshaled_com_define
#define InputFeatureUsage_1_t66EDAF8AFFA2E9DDC0248C48B76ADAB8E2728858_marshaled_com_define
struct InputFeatureUsage_1_t66EDAF8AFFA2E9DDC0248C48B76ADAB8E2728858_marshaled_com
{
	Il2CppChar* ___U3CnameU3Ek__BackingField_0;
};
#endif

// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3>
struct InputFeatureUsage_1_t2E901FA41650EB29399194768CAA93D477CEBC58 
{
	// System.String UnityEngine.XR.InputFeatureUsage`1::<name>k__BackingField
	String_t* ___U3CnameU3Ek__BackingField_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.XR.InputFeatureUsage`1
#ifndef InputFeatureUsage_1_t66EDAF8AFFA2E9DDC0248C48B76ADAB8E2728858_marshaled_pinvoke_define
#define InputFeatureUsage_1_t66EDAF8AFFA2E9DDC0248C48B76ADAB8E2728858_marshaled_pinvoke_define
struct InputFeatureUsage_1_t66EDAF8AFFA2E9DDC0248C48B76ADAB8E2728858_marshaled_pinvoke
{
	char* ___U3CnameU3Ek__BackingField_0;
};
#endif
// Native definition for COM marshalling of UnityEngine.XR.InputFeatureUsage`1
#ifndef InputFeatureUsage_1_t66EDAF8AFFA2E9DDC0248C48B76ADAB8E2728858_marshaled_com_define
#define InputFeatureUsage_1_t66EDAF8AFFA2E9DDC0248C48B76ADAB8E2728858_marshaled_com_define
struct InputFeatureUsage_1_t66EDAF8AFFA2E9DDC0248C48B76ADAB8E2728858_marshaled_com
{
	Il2CppChar* ___U3CnameU3Ek__BackingField_0;
};
#endif

// System.Nullable`1<System.Boolean>
struct Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	bool ___value_1;
};

// System.Nullable`1<System.Int32>
struct Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	int32_t ___value_1;
};

// System.Threading.Tasks.Task`1<UnityEngine.GameObject>
struct Task_1_tE06D7E45E347567BB7775D8FB00F95DC55D14506  : public Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572
{
	// TResult System.Threading.Tasks.Task`1::m_result
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_result_38;
};

struct Task_1_tE06D7E45E347567BB7775D8FB00F95DC55D14506_StaticFields
{
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_defaultFactory
	TaskFactory_1_t319B003F17AE88C9B30313BA13576A8DC5AB9110* ___s_defaultFactory_39;
};

// System.Runtime.CompilerServices.AsyncMethodBuilderCore
struct AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF 
{
	// System.Runtime.CompilerServices.IAsyncStateMachine System.Runtime.CompilerServices.AsyncMethodBuilderCore::m_stateMachine
	RuntimeObject* ___m_stateMachine_0;
	// System.Action System.Runtime.CompilerServices.AsyncMethodBuilderCore::m_defaultContextAction
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___m_defaultContextAction_1;
};
// Native definition for P/Invoke marshalling of System.Runtime.CompilerServices.AsyncMethodBuilderCore
struct AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF_marshaled_pinvoke
{
	RuntimeObject* ___m_stateMachine_0;
	Il2CppMethodPointer ___m_defaultContextAction_1;
};
// Native definition for COM marshalling of System.Runtime.CompilerServices.AsyncMethodBuilderCore
struct AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF_marshaled_com
{
	RuntimeObject* ___m_stateMachine_0;
	Il2CppMethodPointer ___m_defaultContextAction_1;
};

// UnityEngine.XR.Bone
struct Bone_t2558B1DD1E4F405EA4D76A3B8D5149CA16011975 
{
	// System.UInt64 UnityEngine.XR.Bone::m_DeviceId
	uint64_t ___m_DeviceId_0;
	// System.UInt32 UnityEngine.XR.Bone::m_FeatureIndex
	uint32_t ___m_FeatureIndex_1;
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

// System.DateTime
struct DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D 
{
	// System.UInt64 System.DateTime::_dateData
	uint64_t ____dateData_46;
};

struct DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_StaticFields
{
	// System.Int32[] System.DateTime::s_daysToMonth365
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___s_daysToMonth365_30;
	// System.Int32[] System.DateTime::s_daysToMonth366
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___s_daysToMonth366_31;
	// System.DateTime System.DateTime::MinValue
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___MinValue_32;
	// System.DateTime System.DateTime::MaxValue
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___MaxValue_33;
	// System.DateTime System.DateTime::UnixEpoch
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___UnixEpoch_34;
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

// Microsoft.MixedReality.Toolkit.Input.HPMotionControllerDefinition
struct HPMotionControllerDefinition_t5475B48AB19D09044334A500FD1D1F9616AA2E7F  : public BaseInputSourceDefinition_t3C7E26E809069FB4D48181384861DEC5E2EA36DB
{
};

// UnityEngine.XR.Hand
struct Hand_t67B90BC0D36CBC92DF7E38BD15463B925CB5912C 
{
	// System.UInt64 UnityEngine.XR.Hand::m_DeviceId
	uint64_t ___m_DeviceId_0;
	// System.UInt32 UnityEngine.XR.Hand::m_FeatureIndex
	uint32_t ___m_FeatureIndex_1;
};

// UnityEngine.XR.InputDevice
struct InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD 
{
	// System.UInt64 UnityEngine.XR.InputDevice::m_DeviceId
	uint64_t ___m_DeviceId_1;
	// System.Boolean UnityEngine.XR.InputDevice::m_Initialized
	bool ___m_Initialized_2;
};

struct InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD_StaticFields
{
	// System.Collections.Generic.List`1<UnityEngine.XR.XRInputSubsystem> UnityEngine.XR.InputDevice::s_InputSubsystemCache
	List_1_t90832B88D7207769654164CC28440CF594CC397D* ___s_InputSubsystemCache_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.XR.InputDevice
struct InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD_marshaled_pinvoke
{
	uint64_t ___m_DeviceId_1;
	int32_t ___m_Initialized_2;
};
// Native definition for COM marshalling of UnityEngine.XR.InputDevice
struct InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD_marshaled_com
{
	uint64_t ___m_DeviceId_1;
	int32_t ___m_Initialized_2;
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

// UnityEngine.Mathf
struct Mathf_tE284D016E3B297B72311AAD9EB8F0E643F6A4682 
{
	union
	{
		struct
		{
		};
		uint8_t Mathf_tE284D016E3B297B72311AAD9EB8F0E643F6A4682__padding[1];
	};
};

struct Mathf_tE284D016E3B297B72311AAD9EB8F0E643F6A4682_StaticFields
{
	// System.Single UnityEngine.Mathf::Epsilon
	float ___Epsilon_0;
};

// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction
struct MixedRealityInputAction_tD3B6E9CE7F20EFC9D066C519FAB848679FC62486 
{
	// System.UInt32 Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction::id
	uint32_t ___id_1;
	// System.String Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction::description
	String_t* ___description_2;
	// Microsoft.MixedReality.Toolkit.Utilities.AxisType Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction::axisConstraint
	int32_t ___axisConstraint_3;
};

struct MixedRealityInputAction_tD3B6E9CE7F20EFC9D066C519FAB848679FC62486_StaticFields
{
	// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction::<None>k__BackingField
	MixedRealityInputAction_tD3B6E9CE7F20EFC9D066C519FAB848679FC62486 ___U3CNoneU3Ek__BackingField_0;
};
// Native definition for P/Invoke marshalling of Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction
struct MixedRealityInputAction_tD3B6E9CE7F20EFC9D066C519FAB848679FC62486_marshaled_pinvoke
{
	uint32_t ___id_1;
	char* ___description_2;
	int32_t ___axisConstraint_3;
};
// Native definition for COM marshalling of Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction
struct MixedRealityInputAction_tD3B6E9CE7F20EFC9D066C519FAB848679FC62486_marshaled_com
{
	uint32_t ___id_1;
	Il2CppChar* ___description_2;
	int32_t ___axisConstraint_3;
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

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
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

// UnityEngine.WaitUntil
struct WaitUntil_tA1CD487C5811E7C1F8C4ADA85DF5F4EFDC1D41BD  : public CustomYieldInstruction_t6B81A50D5D210C1ACAAE247FB53B65CDFFEB7617
{
	// System.Func`1<System.Boolean> UnityEngine.WaitUntil::m_Predicate
	Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* ___m_Predicate_0;
};

// Microsoft.MixedReality.Toolkit.Input.WindowsMixedRealityControllerDefinition
struct WindowsMixedRealityControllerDefinition_tE3D0C6686E8565C58FA657AB2A2A3426765A3D71  : public BaseInputSourceDefinition_t3C7E26E809069FB4D48181384861DEC5E2EA36DB
{
};

// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<UnityEngine.GameObject>
struct AsyncTaskMethodBuilder_1_t39EED874134028D1D4331D5686AA19731E407868 
{
	// System.Runtime.CompilerServices.AsyncMethodBuilderCore System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_coreState
	AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF ___m_coreState_1;
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_task
	Task_1_tE06D7E45E347567BB7775D8FB00F95DC55D14506* ___m_task_2;
};

struct AsyncTaskMethodBuilder_1_t39EED874134028D1D4331D5686AA19731E407868_StaticFields
{
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::s_defaultResultTask
	Task_1_tE06D7E45E347567BB7775D8FB00F95DC55D14506* ___s_defaultResultTask_0;
};

// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>
struct AsyncTaskMethodBuilder_1_tE810F083929D7952F192036D298085BD4B048AD0 
{
	// System.Runtime.CompilerServices.AsyncMethodBuilderCore System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_coreState
	AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF ___m_coreState_1;
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_task
	Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* ___m_task_2;
};

struct AsyncTaskMethodBuilder_1_tE810F083929D7952F192036D298085BD4B048AD0_StaticFields
{
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::s_defaultResultTask
	Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* ___s_defaultResultTask_0;
};

// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<UnityEngine.XR.InputDevice,Microsoft.MixedReality.Toolkit.XRSDK.Input.GenericXRSDKController>
struct Enumerator_t361AB300DC1B3465BE162090AA60CFC65CF822CB 
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator::_dictionary
	Dictionary_2_t500395CB4236088AFBF004A0D9DD896F9DC12876* ____dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator::_version
	int32_t ____version_2;
	// TKey System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator::_currentKey
	InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD ____currentKey_3;
};

// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<UnityEngine.XR.InputDevice,System.Object>
struct Enumerator_t2F44BB49815829BA641EEC9E12F6258B3AB34AEE 
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator::_dictionary
	Dictionary_2_t71D6FBDC59C9F3896AA3D4E3FEBCEA1D877D10C5* ____dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator::_version
	int32_t ____version_2;
	// TKey System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator::_currentKey
	InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD ____currentKey_3;
};

// System.Runtime.CompilerServices.AsyncVoidMethodBuilder
struct AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D 
{
	// System.Threading.SynchronizationContext System.Runtime.CompilerServices.AsyncVoidMethodBuilder::m_synchronizationContext
	SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* ___m_synchronizationContext_0;
	// System.Runtime.CompilerServices.AsyncMethodBuilderCore System.Runtime.CompilerServices.AsyncVoidMethodBuilder::m_coreState
	AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF ___m_coreState_1;
	// System.Threading.Tasks.Task System.Runtime.CompilerServices.AsyncVoidMethodBuilder::m_task
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___m_task_2;
};
// Native definition for P/Invoke marshalling of System.Runtime.CompilerServices.AsyncVoidMethodBuilder
struct AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D_marshaled_pinvoke
{
	SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* ___m_synchronizationContext_0;
	AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF_marshaled_pinvoke ___m_coreState_1;
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___m_task_2;
};
// Native definition for COM marshalling of System.Runtime.CompilerServices.AsyncVoidMethodBuilder
struct AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D_marshaled_com
{
	SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* ___m_synchronizationContext_0;
	AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF_marshaled_com ___m_coreState_1;
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___m_task_2;
};

// Microsoft.MixedReality.Toolkit.Input.BaseController
struct BaseController_t1635F01D9B5000C345FAF98BAEEA495E97C32274  : public RuntimeObject
{
	// Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSourceDefinition Microsoft.MixedReality.Toolkit.Input.BaseController::<Definition>k__BackingField
	RuntimeObject* ___U3CDefinitionU3Ek__BackingField_0;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.BaseController::<Enabled>k__BackingField
	bool ___U3CEnabledU3Ek__BackingField_1;
	// Microsoft.MixedReality.Toolkit.TrackingState Microsoft.MixedReality.Toolkit.Input.BaseController::<TrackingState>k__BackingField
	int32_t ___U3CTrackingStateU3Ek__BackingField_2;
	// Microsoft.MixedReality.Toolkit.Utilities.Handedness Microsoft.MixedReality.Toolkit.Input.BaseController::<ControllerHandedness>k__BackingField
	uint8_t ___U3CControllerHandednessU3Ek__BackingField_3;
	// Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource Microsoft.MixedReality.Toolkit.Input.BaseController::<InputSource>k__BackingField
	RuntimeObject* ___U3CInputSourceU3Ek__BackingField_4;
	// Microsoft.MixedReality.Toolkit.Input.IMixedRealityControllerVisualizer Microsoft.MixedReality.Toolkit.Input.BaseController::<Visualizer>k__BackingField
	RuntimeObject* ___U3CVisualizerU3Ek__BackingField_5;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.BaseController::<IsPositionAvailable>k__BackingField
	bool ___U3CIsPositionAvailableU3Ek__BackingField_6;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.BaseController::<IsPositionApproximate>k__BackingField
	bool ___U3CIsPositionApproximateU3Ek__BackingField_7;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.BaseController::<IsRotationAvailable>k__BackingField
	bool ___U3CIsRotationAvailableU3Ek__BackingField_8;
	// Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping[] Microsoft.MixedReality.Toolkit.Input.BaseController::<Interactions>k__BackingField
	MixedRealityInteractionMappingU5BU5D_t689ED6694F3B293DEDEA6D5371268D36DC67AACE* ___U3CInteractionsU3Ek__BackingField_9;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Input.BaseController::<AngularVelocity>k__BackingField
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CAngularVelocityU3Ek__BackingField_10;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Input.BaseController::<Velocity>k__BackingField
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CVelocityU3Ek__BackingField_11;
};

// Microsoft.MixedReality.Toolkit.BaseService
struct BaseService_tB7EC5C0F60DC5EE2DA122A608226D3887B6421D0  : public RuntimeObject
{
	// System.String Microsoft.MixedReality.Toolkit.BaseService::<Name>k__BackingField
	String_t* ___U3CNameU3Ek__BackingField_1;
	// System.UInt32 Microsoft.MixedReality.Toolkit.BaseService::<Priority>k__BackingField
	uint32_t ___U3CPriorityU3Ek__BackingField_2;
	// Microsoft.MixedReality.Toolkit.BaseMixedRealityProfile Microsoft.MixedReality.Toolkit.BaseService::<ConfigurationProfile>k__BackingField
	BaseMixedRealityProfile_tB4FDEF58FFD17796C0DB7241630B71CDF38FA1D4* ___U3CConfigurationProfileU3Ek__BackingField_3;
	// System.Nullable`1<System.Boolean> Microsoft.MixedReality.Toolkit.BaseService::isInitialized
	Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 ___isInitialized_4;
	// System.String[] Microsoft.MixedReality.Toolkit.BaseService::typeName
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___typeName_5;
	// System.Nullable`1<System.Boolean> Microsoft.MixedReality.Toolkit.BaseService::isEnabled
	Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 ___isEnabled_9;
	// System.Nullable`1<System.Boolean> Microsoft.MixedReality.Toolkit.BaseService::isMarkedDestroyed
	Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 ___isMarkedDestroyed_10;
	// System.Boolean Microsoft.MixedReality.Toolkit.BaseService::disposed
	bool ___disposed_11;
};

// UnityEngine.XR.CommonUsages
struct CommonUsages_t9208F514F1E77BE70AC53EFEC94D57EDDAF3B8E1  : public RuntimeObject
{
};

struct CommonUsages_t9208F514F1E77BE70AC53EFEC94D57EDDAF3B8E1_StaticFields
{
	// UnityEngine.XR.InputFeatureUsage`1<System.Boolean> UnityEngine.XR.CommonUsages::isTracked
	InputFeatureUsage_1_tE336B2F0B9AC721519BFA17A08D6353FD5221637 ___isTracked_0;
	// UnityEngine.XR.InputFeatureUsage`1<System.Boolean> UnityEngine.XR.CommonUsages::primaryButton
	InputFeatureUsage_1_tE336B2F0B9AC721519BFA17A08D6353FD5221637 ___primaryButton_1;
	// UnityEngine.XR.InputFeatureUsage`1<System.Boolean> UnityEngine.XR.CommonUsages::primaryTouch
	InputFeatureUsage_1_tE336B2F0B9AC721519BFA17A08D6353FD5221637 ___primaryTouch_2;
	// UnityEngine.XR.InputFeatureUsage`1<System.Boolean> UnityEngine.XR.CommonUsages::secondaryButton
	InputFeatureUsage_1_tE336B2F0B9AC721519BFA17A08D6353FD5221637 ___secondaryButton_3;
	// UnityEngine.XR.InputFeatureUsage`1<System.Boolean> UnityEngine.XR.CommonUsages::secondaryTouch
	InputFeatureUsage_1_tE336B2F0B9AC721519BFA17A08D6353FD5221637 ___secondaryTouch_4;
	// UnityEngine.XR.InputFeatureUsage`1<System.Boolean> UnityEngine.XR.CommonUsages::gripButton
	InputFeatureUsage_1_tE336B2F0B9AC721519BFA17A08D6353FD5221637 ___gripButton_5;
	// UnityEngine.XR.InputFeatureUsage`1<System.Boolean> UnityEngine.XR.CommonUsages::triggerButton
	InputFeatureUsage_1_tE336B2F0B9AC721519BFA17A08D6353FD5221637 ___triggerButton_6;
	// UnityEngine.XR.InputFeatureUsage`1<System.Boolean> UnityEngine.XR.CommonUsages::menuButton
	InputFeatureUsage_1_tE336B2F0B9AC721519BFA17A08D6353FD5221637 ___menuButton_7;
	// UnityEngine.XR.InputFeatureUsage`1<System.Boolean> UnityEngine.XR.CommonUsages::primary2DAxisClick
	InputFeatureUsage_1_tE336B2F0B9AC721519BFA17A08D6353FD5221637 ___primary2DAxisClick_8;
	// UnityEngine.XR.InputFeatureUsage`1<System.Boolean> UnityEngine.XR.CommonUsages::primary2DAxisTouch
	InputFeatureUsage_1_tE336B2F0B9AC721519BFA17A08D6353FD5221637 ___primary2DAxisTouch_9;
	// UnityEngine.XR.InputFeatureUsage`1<System.Boolean> UnityEngine.XR.CommonUsages::secondary2DAxisClick
	InputFeatureUsage_1_tE336B2F0B9AC721519BFA17A08D6353FD5221637 ___secondary2DAxisClick_10;
	// UnityEngine.XR.InputFeatureUsage`1<System.Boolean> UnityEngine.XR.CommonUsages::secondary2DAxisTouch
	InputFeatureUsage_1_tE336B2F0B9AC721519BFA17A08D6353FD5221637 ___secondary2DAxisTouch_11;
	// UnityEngine.XR.InputFeatureUsage`1<System.Boolean> UnityEngine.XR.CommonUsages::userPresence
	InputFeatureUsage_1_tE336B2F0B9AC721519BFA17A08D6353FD5221637 ___userPresence_12;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.XR.InputTrackingState> UnityEngine.XR.CommonUsages::trackingState
	InputFeatureUsage_1_t4EF7DDCAC35EE23BA72694AC2AB76CF4A879FFD9 ___trackingState_13;
	// UnityEngine.XR.InputFeatureUsage`1<System.Single> UnityEngine.XR.CommonUsages::batteryLevel
	InputFeatureUsage_1_t311D0F42F1A7BF37D3CEAC15A53A1F24165F1848 ___batteryLevel_14;
	// UnityEngine.XR.InputFeatureUsage`1<System.Single> UnityEngine.XR.CommonUsages::trigger
	InputFeatureUsage_1_t311D0F42F1A7BF37D3CEAC15A53A1F24165F1848 ___trigger_15;
	// UnityEngine.XR.InputFeatureUsage`1<System.Single> UnityEngine.XR.CommonUsages::grip
	InputFeatureUsage_1_t311D0F42F1A7BF37D3CEAC15A53A1F24165F1848 ___grip_16;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector2> UnityEngine.XR.CommonUsages::primary2DAxis
	InputFeatureUsage_1_tEB160A05BCDCCA4F96072CBA0866498D06B9A27C ___primary2DAxis_17;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector2> UnityEngine.XR.CommonUsages::secondary2DAxis
	InputFeatureUsage_1_tEB160A05BCDCCA4F96072CBA0866498D06B9A27C ___secondary2DAxis_18;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3> UnityEngine.XR.CommonUsages::devicePosition
	InputFeatureUsage_1_t2E901FA41650EB29399194768CAA93D477CEBC58 ___devicePosition_19;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3> UnityEngine.XR.CommonUsages::leftEyePosition
	InputFeatureUsage_1_t2E901FA41650EB29399194768CAA93D477CEBC58 ___leftEyePosition_20;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3> UnityEngine.XR.CommonUsages::rightEyePosition
	InputFeatureUsage_1_t2E901FA41650EB29399194768CAA93D477CEBC58 ___rightEyePosition_21;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3> UnityEngine.XR.CommonUsages::centerEyePosition
	InputFeatureUsage_1_t2E901FA41650EB29399194768CAA93D477CEBC58 ___centerEyePosition_22;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3> UnityEngine.XR.CommonUsages::colorCameraPosition
	InputFeatureUsage_1_t2E901FA41650EB29399194768CAA93D477CEBC58 ___colorCameraPosition_23;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3> UnityEngine.XR.CommonUsages::deviceVelocity
	InputFeatureUsage_1_t2E901FA41650EB29399194768CAA93D477CEBC58 ___deviceVelocity_24;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3> UnityEngine.XR.CommonUsages::deviceAngularVelocity
	InputFeatureUsage_1_t2E901FA41650EB29399194768CAA93D477CEBC58 ___deviceAngularVelocity_25;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3> UnityEngine.XR.CommonUsages::leftEyeVelocity
	InputFeatureUsage_1_t2E901FA41650EB29399194768CAA93D477CEBC58 ___leftEyeVelocity_26;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3> UnityEngine.XR.CommonUsages::leftEyeAngularVelocity
	InputFeatureUsage_1_t2E901FA41650EB29399194768CAA93D477CEBC58 ___leftEyeAngularVelocity_27;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3> UnityEngine.XR.CommonUsages::rightEyeVelocity
	InputFeatureUsage_1_t2E901FA41650EB29399194768CAA93D477CEBC58 ___rightEyeVelocity_28;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3> UnityEngine.XR.CommonUsages::rightEyeAngularVelocity
	InputFeatureUsage_1_t2E901FA41650EB29399194768CAA93D477CEBC58 ___rightEyeAngularVelocity_29;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3> UnityEngine.XR.CommonUsages::centerEyeVelocity
	InputFeatureUsage_1_t2E901FA41650EB29399194768CAA93D477CEBC58 ___centerEyeVelocity_30;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3> UnityEngine.XR.CommonUsages::centerEyeAngularVelocity
	InputFeatureUsage_1_t2E901FA41650EB29399194768CAA93D477CEBC58 ___centerEyeAngularVelocity_31;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3> UnityEngine.XR.CommonUsages::colorCameraVelocity
	InputFeatureUsage_1_t2E901FA41650EB29399194768CAA93D477CEBC58 ___colorCameraVelocity_32;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3> UnityEngine.XR.CommonUsages::colorCameraAngularVelocity
	InputFeatureUsage_1_t2E901FA41650EB29399194768CAA93D477CEBC58 ___colorCameraAngularVelocity_33;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3> UnityEngine.XR.CommonUsages::deviceAcceleration
	InputFeatureUsage_1_t2E901FA41650EB29399194768CAA93D477CEBC58 ___deviceAcceleration_34;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3> UnityEngine.XR.CommonUsages::deviceAngularAcceleration
	InputFeatureUsage_1_t2E901FA41650EB29399194768CAA93D477CEBC58 ___deviceAngularAcceleration_35;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3> UnityEngine.XR.CommonUsages::leftEyeAcceleration
	InputFeatureUsage_1_t2E901FA41650EB29399194768CAA93D477CEBC58 ___leftEyeAcceleration_36;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3> UnityEngine.XR.CommonUsages::leftEyeAngularAcceleration
	InputFeatureUsage_1_t2E901FA41650EB29399194768CAA93D477CEBC58 ___leftEyeAngularAcceleration_37;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3> UnityEngine.XR.CommonUsages::rightEyeAcceleration
	InputFeatureUsage_1_t2E901FA41650EB29399194768CAA93D477CEBC58 ___rightEyeAcceleration_38;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3> UnityEngine.XR.CommonUsages::rightEyeAngularAcceleration
	InputFeatureUsage_1_t2E901FA41650EB29399194768CAA93D477CEBC58 ___rightEyeAngularAcceleration_39;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3> UnityEngine.XR.CommonUsages::centerEyeAcceleration
	InputFeatureUsage_1_t2E901FA41650EB29399194768CAA93D477CEBC58 ___centerEyeAcceleration_40;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3> UnityEngine.XR.CommonUsages::centerEyeAngularAcceleration
	InputFeatureUsage_1_t2E901FA41650EB29399194768CAA93D477CEBC58 ___centerEyeAngularAcceleration_41;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3> UnityEngine.XR.CommonUsages::colorCameraAcceleration
	InputFeatureUsage_1_t2E901FA41650EB29399194768CAA93D477CEBC58 ___colorCameraAcceleration_42;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3> UnityEngine.XR.CommonUsages::colorCameraAngularAcceleration
	InputFeatureUsage_1_t2E901FA41650EB29399194768CAA93D477CEBC58 ___colorCameraAngularAcceleration_43;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Quaternion> UnityEngine.XR.CommonUsages::deviceRotation
	InputFeatureUsage_1_t8489CEC68B1EC178F2634079A9D7CD9E90D3CF5D ___deviceRotation_44;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Quaternion> UnityEngine.XR.CommonUsages::leftEyeRotation
	InputFeatureUsage_1_t8489CEC68B1EC178F2634079A9D7CD9E90D3CF5D ___leftEyeRotation_45;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Quaternion> UnityEngine.XR.CommonUsages::rightEyeRotation
	InputFeatureUsage_1_t8489CEC68B1EC178F2634079A9D7CD9E90D3CF5D ___rightEyeRotation_46;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Quaternion> UnityEngine.XR.CommonUsages::centerEyeRotation
	InputFeatureUsage_1_t8489CEC68B1EC178F2634079A9D7CD9E90D3CF5D ___centerEyeRotation_47;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Quaternion> UnityEngine.XR.CommonUsages::colorCameraRotation
	InputFeatureUsage_1_t8489CEC68B1EC178F2634079A9D7CD9E90D3CF5D ___colorCameraRotation_48;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.XR.Hand> UnityEngine.XR.CommonUsages::handData
	InputFeatureUsage_1_t64C1AA42D6E8BD57C54C7E891BD79A70A0F3A170 ___handData_49;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.XR.Eyes> UnityEngine.XR.CommonUsages::eyesData
	InputFeatureUsage_1_tD3FEDCAE0D7F51C7B42182162ACE726E68166B38 ___eyesData_50;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector2> UnityEngine.XR.CommonUsages::dPad
	InputFeatureUsage_1_tEB160A05BCDCCA4F96072CBA0866498D06B9A27C ___dPad_51;
	// UnityEngine.XR.InputFeatureUsage`1<System.Single> UnityEngine.XR.CommonUsages::indexFinger
	InputFeatureUsage_1_t311D0F42F1A7BF37D3CEAC15A53A1F24165F1848 ___indexFinger_52;
	// UnityEngine.XR.InputFeatureUsage`1<System.Single> UnityEngine.XR.CommonUsages::middleFinger
	InputFeatureUsage_1_t311D0F42F1A7BF37D3CEAC15A53A1F24165F1848 ___middleFinger_53;
	// UnityEngine.XR.InputFeatureUsage`1<System.Single> UnityEngine.XR.CommonUsages::ringFinger
	InputFeatureUsage_1_t311D0F42F1A7BF37D3CEAC15A53A1F24165F1848 ___ringFinger_54;
	// UnityEngine.XR.InputFeatureUsage`1<System.Single> UnityEngine.XR.CommonUsages::pinkyFinger
	InputFeatureUsage_1_t311D0F42F1A7BF37D3CEAC15A53A1F24165F1848 ___pinkyFinger_55;
	// UnityEngine.XR.InputFeatureUsage`1<System.Boolean> UnityEngine.XR.CommonUsages::thumbrest
	InputFeatureUsage_1_tE336B2F0B9AC721519BFA17A08D6353FD5221637 ___thumbrest_56;
	// UnityEngine.XR.InputFeatureUsage`1<System.Single> UnityEngine.XR.CommonUsages::indexTouch
	InputFeatureUsage_1_t311D0F42F1A7BF37D3CEAC15A53A1F24165F1848 ___indexTouch_57;
	// UnityEngine.XR.InputFeatureUsage`1<System.Single> UnityEngine.XR.CommonUsages::thumbTouch
	InputFeatureUsage_1_t311D0F42F1A7BF37D3CEAC15A53A1F24165F1848 ___thumbTouch_58;
};

// Microsoft.MixedReality.Toolkit.XRSDK.Input.CustomUsages
struct CustomUsages_t07BAB05B93FBB1D80AAD710042445ED8DDE3A476  : public RuntimeObject
{
};

struct CustomUsages_t07BAB05B93FBB1D80AAD710042445ED8DDE3A476_StaticFields
{
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3> Microsoft.MixedReality.Toolkit.XRSDK.Input.CustomUsages::PointerPosition
	InputFeatureUsage_1_t2E901FA41650EB29399194768CAA93D477CEBC58 ___PointerPosition_0;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Quaternion> Microsoft.MixedReality.Toolkit.XRSDK.Input.CustomUsages::PointerRotation
	InputFeatureUsage_1_t8489CEC68B1EC178F2634079A9D7CD9E90D3CF5D ___PointerRotation_1;
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

// UnityEngine.XR.OpenXR.Features.Interactions.EyeTrackingUsages
struct EyeTrackingUsages_tD15D76EB6FE8970151F2F2ADF43C96B9110663FE  : public RuntimeObject
{
};

struct EyeTrackingUsages_tD15D76EB6FE8970151F2F2ADF43C96B9110663FE_StaticFields
{
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3> UnityEngine.XR.OpenXR.Features.Interactions.EyeTrackingUsages::gazePosition
	InputFeatureUsage_1_t2E901FA41650EB29399194768CAA93D477CEBC58 ___gazePosition_0;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Quaternion> UnityEngine.XR.OpenXR.Features.Interactions.EyeTrackingUsages::gazeRotation
	InputFeatureUsage_1_t8489CEC68B1EC178F2634079A9D7CD9E90D3CF5D ___gazeRotation_1;
};

// UnityEngine.XR.HandFinger
struct HandFinger_tD866B318803A5E7059DC88A19B5EE51922717949 
{
	// System.Int32 UnityEngine.XR.HandFinger::value__
	int32_t ___value___2;
};

// UnityEngine.IntegratedSubsystem
struct IntegratedSubsystem_t990160A89854D87C0836DC589B720231C02D4CE3  : public RuntimeObject
{
	// System.IntPtr UnityEngine.IntegratedSubsystem::m_Ptr
	intptr_t ___m_Ptr_0;
	// UnityEngine.ISubsystemDescriptor UnityEngine.IntegratedSubsystem::m_SubsystemDescriptor
	RuntimeObject* ___m_SubsystemDescriptor_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.IntegratedSubsystem
struct IntegratedSubsystem_t990160A89854D87C0836DC589B720231C02D4CE3_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	RuntimeObject* ___m_SubsystemDescriptor_1;
};
// Native definition for COM marshalling of UnityEngine.IntegratedSubsystem
struct IntegratedSubsystem_t990160A89854D87C0836DC589B720231C02D4CE3_marshaled_com
{
	intptr_t ___m_Ptr_0;
	RuntimeObject* ___m_SubsystemDescriptor_1;
};

// Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose
struct MixedRealityPose_tE60115C271AC50B8C11BA3B404BFCA99C7B2EFF5 
{
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose::position
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position_1;
	// UnityEngine.Quaternion Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose::rotation
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation_2;
};

struct MixedRealityPose_tE60115C271AC50B8C11BA3B404BFCA99C7B2EFF5_StaticFields
{
	// Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose::<ZeroIdentity>k__BackingField
	MixedRealityPose_tE60115C271AC50B8C11BA3B404BFCA99C7B2EFF5 ___U3CZeroIdentityU3Ek__BackingField_0;
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

// Unity.Profiling.ProfilerMarker
struct ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD 
{
	// System.IntPtr Unity.Profiling.ProfilerMarker::m_Ptr
	intptr_t ___m_Ptr_0;
};

// UnityEngine.Ray
struct Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 
{
	// UnityEngine.Vector3 UnityEngine.Ray::m_Origin
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Origin_0;
	// UnityEngine.Vector3 UnityEngine.Ray::m_Direction
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Direction_1;
};

// System.RuntimeTypeHandle
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;
};

// Unity.Profiling.ProfilerMarker/AutoScope
struct AutoScope_tFB983697E28885CB10FFDB92D7EFD0615AEF3139 
{
	// System.IntPtr Unity.Profiling.ProfilerMarker/AutoScope::m_Ptr
	intptr_t ___m_Ptr_0;
};

// Microsoft.MixedReality.Toolkit.BaseDataProvider`1<Microsoft.MixedReality.Toolkit.CameraSystem.IMixedRealityCameraSystem>
struct BaseDataProvider_1_t5511AC264C914065B4C84ECA02C3FC05D1C915B6  : public BaseService_tB7EC5C0F60DC5EE2DA122A608226D3887B6421D0
{
	// Microsoft.MixedReality.Toolkit.IMixedRealityServiceRegistrar Microsoft.MixedReality.Toolkit.BaseDataProvider`1::<Registrar>k__BackingField
	RuntimeObject* ___U3CRegistrarU3Ek__BackingField_12;
	// T Microsoft.MixedReality.Toolkit.BaseDataProvider`1::<Service>k__BackingField
	RuntimeObject* ___U3CServiceU3Ek__BackingField_13;
};

// Microsoft.MixedReality.Toolkit.BaseDataProvider`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem>
struct BaseDataProvider_1_t1C7B9F1707FEB27659F53B230E0A18282D2F7F20  : public BaseService_tB7EC5C0F60DC5EE2DA122A608226D3887B6421D0
{
	// Microsoft.MixedReality.Toolkit.IMixedRealityServiceRegistrar Microsoft.MixedReality.Toolkit.BaseDataProvider`1::<Registrar>k__BackingField
	RuntimeObject* ___U3CRegistrarU3Ek__BackingField_12;
	// T Microsoft.MixedReality.Toolkit.BaseDataProvider`1::<Service>k__BackingField
	RuntimeObject* ___U3CServiceU3Ek__BackingField_13;
};

// Microsoft.MixedReality.Toolkit.BaseDataProvider`1<Microsoft.MixedReality.Toolkit.SpatialAwareness.IMixedRealitySpatialAwarenessSystem>
struct BaseDataProvider_1_tD2C6659D94D07FC49556BA26F6C62210EACE7F30  : public BaseService_tB7EC5C0F60DC5EE2DA122A608226D3887B6421D0
{
	// Microsoft.MixedReality.Toolkit.IMixedRealityServiceRegistrar Microsoft.MixedReality.Toolkit.BaseDataProvider`1::<Registrar>k__BackingField
	RuntimeObject* ___U3CRegistrarU3Ek__BackingField_12;
	// T Microsoft.MixedReality.Toolkit.BaseDataProvider`1::<Service>k__BackingField
	RuntimeObject* ___U3CServiceU3Ek__BackingField_13;
};

// Microsoft.MixedReality.Toolkit.BaseDataProvider`1<System.Object>
struct BaseDataProvider_1_t8DC280A360428C68343AA5D6B95788F4A050196F  : public BaseService_tB7EC5C0F60DC5EE2DA122A608226D3887B6421D0
{
	// Microsoft.MixedReality.Toolkit.IMixedRealityServiceRegistrar Microsoft.MixedReality.Toolkit.BaseDataProvider`1::<Registrar>k__BackingField
	RuntimeObject* ___U3CRegistrarU3Ek__BackingField_12;
	// T Microsoft.MixedReality.Toolkit.BaseDataProvider`1::<Service>k__BackingField
	RuntimeObject* ___U3CServiceU3Ek__BackingField_13;
};

// UnityEngine.IntegratedSubsystem`1<UnityEngine.XR.XRDisplaySubsystemDescriptor>
struct IntegratedSubsystem_1_t8312865F01EEA1EDE4B24A973E47ADD526616848  : public IntegratedSubsystem_t990160A89854D87C0836DC589B720231C02D4CE3
{
};

// System.Nullable`1<UnityEngine.Ray>
struct Nullable_1_t4963285281B990B794CDEACB9C3CD3069B5FA768 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 ___value_1;
};

// Microsoft.MixedReality.Toolkit.Input.ArticulatedHandDefinition
struct ArticulatedHandDefinition_t9B5E215D853BD6F61AF012898D07BBDE93B4AEC4  : public BaseInputSourceDefinition_t3C7E26E809069FB4D48181384861DEC5E2EA36DB
{
	// Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource Microsoft.MixedReality.Toolkit.Input.ArticulatedHandDefinition::<InputSource>k__BackingField
	RuntimeObject* ___U3CInputSourceU3Ek__BackingField_1;
	// System.Single Microsoft.MixedReality.Toolkit.Input.ArticulatedHandDefinition::cursorBeamBackwardTolerance
	float ___cursorBeamBackwardTolerance_2;
	// System.Single Microsoft.MixedReality.Toolkit.Input.ArticulatedHandDefinition::cursorBeamUpTolerance
	float ___cursorBeamUpTolerance_3;
	// System.Collections.Generic.Dictionary`2<Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint,Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose> Microsoft.MixedReality.Toolkit.Input.ArticulatedHandDefinition::unityJointPoses
	Dictionary_2_t88261A8DE0EA7D536FD580182F6F73520708C1B7* ___unityJointPoses_4;
	// Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose Microsoft.MixedReality.Toolkit.Input.ArticulatedHandDefinition::currentIndexPose
	MixedRealityPose_tE60115C271AC50B8C11BA3B404BFCA99C7B2EFF5 ___currentIndexPose_5;
	// System.Single Microsoft.MixedReality.Toolkit.Input.ArticulatedHandDefinition::minimumPinchDistance
	float ___minimumPinchDistance_6;
	// System.Single Microsoft.MixedReality.Toolkit.Input.ArticulatedHandDefinition::maximumPinchDistance
	float ___maximumPinchDistance_7;
	// System.Single Microsoft.MixedReality.Toolkit.Input.ArticulatedHandDefinition::enterPinchDistance
	float ___enterPinchDistance_8;
	// System.Single Microsoft.MixedReality.Toolkit.Input.ArticulatedHandDefinition::exitPinchDistance
	float ___exitPinchDistance_9;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.ArticulatedHandDefinition::isPinching
	bool ___isPinching_10;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.ArticulatedHandDefinition::isIndexGrabbing
	bool ___isIndexGrabbing_11;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.ArticulatedHandDefinition::isMiddleGrabbing
	bool ___isMiddleGrabbing_12;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.ArticulatedHandDefinition::isThumbGrabbing
	bool ___isThumbGrabbing_13;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.ArticulatedHandDefinition::previousReadyToTeleport
	bool ___previousReadyToTeleport_16;
	// Microsoft.MixedReality.Toolkit.Input.IMixedRealityTeleportPointer Microsoft.MixedReality.Toolkit.Input.ArticulatedHandDefinition::teleportPointer
	RuntimeObject* ___teleportPointer_17;
};

struct ArticulatedHandDefinition_t9B5E215D853BD6F61AF012898D07BBDE93B4AEC4_StaticFields
{
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.ArticulatedHandDefinition::UpdateHandJointsPerfMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___UpdateHandJointsPerfMarker_14;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.ArticulatedHandDefinition::UpdateCurrentIndexPosePerfMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___UpdateCurrentIndexPosePerfMarker_15;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.ArticulatedHandDefinition::UpdateCurrentTeleportPosePerfMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___UpdateCurrentTeleportPosePerfMarker_18;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// Microsoft.MixedReality.Toolkit.XRSDK.Input.GenericXRSDKController
struct GenericXRSDKController_tB5136D037E3BD7D743A519016EA2710F7ED980DE  : public BaseController_t1635F01D9B5000C345FAF98BAEEA495E97C32274
{
	// Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose Microsoft.MixedReality.Toolkit.XRSDK.Input.GenericXRSDKController::CurrentControllerPose
	MixedRealityPose_tE60115C271AC50B8C11BA3B404BFCA99C7B2EFF5 ___CurrentControllerPose_12;
	// Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose Microsoft.MixedReality.Toolkit.XRSDK.Input.GenericXRSDKController::LastControllerPose
	MixedRealityPose_tE60115C271AC50B8C11BA3B404BFCA99C7B2EFF5 ___LastControllerPose_13;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.XRSDK.Input.GenericXRSDKController::CurrentControllerPosition
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___CurrentControllerPosition_14;
	// UnityEngine.Quaternion Microsoft.MixedReality.Toolkit.XRSDK.Input.GenericXRSDKController::CurrentControllerRotation
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___CurrentControllerRotation_15;
	// UnityEngine.XR.InputDevice Microsoft.MixedReality.Toolkit.XRSDK.Input.GenericXRSDKController::lastInputDevice
	InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD ___lastInputDevice_16;
};

struct GenericXRSDKController_tB5136D037E3BD7D743A519016EA2710F7ED980DE_StaticFields
{
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.XRSDK.Input.GenericXRSDKController::UpdateControllerPerfMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___UpdateControllerPerfMarker_17;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.XRSDK.Input.GenericXRSDKController::UpdateSourceDataPerfMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___UpdateSourceDataPerfMarker_18;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.XRSDK.Input.GenericXRSDKController::UpdateVelocityPerfMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___UpdateVelocityPerfMarker_19;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.XRSDK.Input.GenericXRSDKController::UpdateButtonDataPerfMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___UpdateButtonDataPerfMarker_20;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.XRSDK.Input.GenericXRSDKController::UpdateSingleAxisDataPerfMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___UpdateSingleAxisDataPerfMarker_21;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.XRSDK.Input.GenericXRSDKController::UpdateDualAxisDataPerfMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___UpdateDualAxisDataPerfMarker_22;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.XRSDK.Input.GenericXRSDKController::UpdatePoseDataPerfMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___UpdatePoseDataPerfMarker_23;
};

// Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping
struct MixedRealityInteractionMapping_t10DB776EEA5255542F8F4AF0DC0BC566AF0095E0  : public RuntimeObject
{
	// System.UInt32 Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::id
	uint32_t ___id_0;
	// System.String Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::description
	String_t* ___description_1;
	// Microsoft.MixedReality.Toolkit.Utilities.AxisType Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::axisType
	int32_t ___axisType_2;
	// Microsoft.MixedReality.Toolkit.Input.DeviceInputType Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::inputType
	int32_t ___inputType_3;
	// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::inputAction
	MixedRealityInputAction_tD3B6E9CE7F20EFC9D066C519FAB848679FC62486 ___inputAction_4;
	// UnityEngine.KeyCode Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::keyCode
	int32_t ___keyCode_5;
	// System.String Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::axisCodeX
	String_t* ___axisCodeX_6;
	// System.String Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::axisCodeY
	String_t* ___axisCodeY_7;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::invertXAxis
	bool ___invertXAxis_8;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::invertYAxis
	bool ___invertYAxis_9;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::changed
	bool ___changed_10;
	// System.Object Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::rawData
	RuntimeObject* ___rawData_11;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::boolData
	bool ___boolData_12;
	// System.Single Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::floatData
	float ___floatData_13;
	// UnityEngine.Vector2 Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::vector2Data
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___vector2Data_14;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::positionData
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___positionData_15;
	// UnityEngine.Quaternion Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::rotationData
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotationData_16;
	// Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::poseData
	MixedRealityPose_tE60115C271AC50B8C11BA3B404BFCA99C7B2EFF5 ___poseData_17;
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

// Microsoft.MixedReality.Toolkit.XRSDK.OpenXR.OpenXRHandMeshProvider
struct OpenXRHandMeshProvider_t7E1EB4108CF655D3DB1CAF41AD048D7AE755B060  : public RuntimeObject
{
	// Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource Microsoft.MixedReality.Toolkit.XRSDK.OpenXR.OpenXRHandMeshProvider::inputSource
	RuntimeObject* ___inputSource_2;
};

struct OpenXRHandMeshProvider_t7E1EB4108CF655D3DB1CAF41AD048D7AE755B060_StaticFields
{
	// Microsoft.MixedReality.Toolkit.XRSDK.OpenXR.OpenXRHandMeshProvider Microsoft.MixedReality.Toolkit.XRSDK.OpenXR.OpenXRHandMeshProvider::<Left>k__BackingField
	OpenXRHandMeshProvider_t7E1EB4108CF655D3DB1CAF41AD048D7AE755B060* ___U3CLeftU3Ek__BackingField_0;
	// Microsoft.MixedReality.Toolkit.XRSDK.OpenXR.OpenXRHandMeshProvider Microsoft.MixedReality.Toolkit.XRSDK.OpenXR.OpenXRHandMeshProvider::<Right>k__BackingField
	OpenXRHandMeshProvider_t7E1EB4108CF655D3DB1CAF41AD048D7AE755B060* ___U3CRightU3Ek__BackingField_1;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.XRSDK.OpenXR.OpenXRHandMeshProvider::UpdateHandMeshPerfMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___UpdateHandMeshPerfMarker_3;
};

// UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};
// Native definition for P/Invoke marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_marshaled_pinvoke : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_marshaled_com : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
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

// Microsoft.MixedReality.Toolkit.XRSDK.OpenXR.MicrosoftControllerModelProvider/<TryGenerateControllerModelFromPlatformSDK>d__1
struct U3CTryGenerateControllerModelFromPlatformSDKU3Ed__1_t634A2619353B2ADDB9D91D244F8D3FB5701728F8 
{
	// System.Int32 Microsoft.MixedReality.Toolkit.XRSDK.OpenXR.MicrosoftControllerModelProvider/<TryGenerateControllerModelFromPlatformSDK>d__1::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<UnityEngine.GameObject> Microsoft.MixedReality.Toolkit.XRSDK.OpenXR.MicrosoftControllerModelProvider/<TryGenerateControllerModelFromPlatformSDK>d__1::<>t__builder
	AsyncTaskMethodBuilder_1_t39EED874134028D1D4331D5686AA19731E407868 ___U3CU3Et__builder_1;
};

// Microsoft.MixedReality.Toolkit.XRSDK.OpenXR.OpenXRCameraSettings/<EnableIfLoaderBecomesActive>d__7
struct U3CEnableIfLoaderBecomesActiveU3Ed__7_t55A622F0A215D46947C9F623BA27D2844AC94BA9 
{
	// System.Int32 Microsoft.MixedReality.Toolkit.XRSDK.OpenXR.OpenXRCameraSettings/<EnableIfLoaderBecomesActive>d__7::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncVoidMethodBuilder Microsoft.MixedReality.Toolkit.XRSDK.OpenXR.OpenXRCameraSettings/<EnableIfLoaderBecomesActive>d__7::<>t__builder
	AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D ___U3CU3Et__builder_1;
	// Microsoft.MixedReality.Toolkit.XRSDK.OpenXR.OpenXRCameraSettings Microsoft.MixedReality.Toolkit.XRSDK.OpenXR.OpenXRCameraSettings/<EnableIfLoaderBecomesActive>d__7::<>4__this
	OpenXRCameraSettings_t79033AFF7FDF1F549BD9331CD1E22FA7E955EF3F* ___U3CU3E4__this_2;
	// System.Object Microsoft.MixedReality.Toolkit.XRSDK.OpenXR.OpenXRCameraSettings/<EnableIfLoaderBecomesActive>d__7::<>u__1
	RuntimeObject* ___U3CU3Eu__1_3;
};

// Microsoft.MixedReality.Toolkit.XRSDK.OpenXR.OpenXRDeviceManager/<EnableIfLoaderBecomesActive>d__4
struct U3CEnableIfLoaderBecomesActiveU3Ed__4_tBEE69E1D11D867DAE899E661B1399BB7FE0463FD 
{
	// System.Int32 Microsoft.MixedReality.Toolkit.XRSDK.OpenXR.OpenXRDeviceManager/<EnableIfLoaderBecomesActive>d__4::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncVoidMethodBuilder Microsoft.MixedReality.Toolkit.XRSDK.OpenXR.OpenXRDeviceManager/<EnableIfLoaderBecomesActive>d__4::<>t__builder
	AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D ___U3CU3Et__builder_1;
	// Microsoft.MixedReality.Toolkit.XRSDK.OpenXR.OpenXRDeviceManager Microsoft.MixedReality.Toolkit.XRSDK.OpenXR.OpenXRDeviceManager/<EnableIfLoaderBecomesActive>d__4::<>4__this
	OpenXRDeviceManager_t0C31243398BC0C715BF745D6F2C7AA501C3DDA9A* ___U3CU3E4__this_2;
	// System.Object Microsoft.MixedReality.Toolkit.XRSDK.OpenXR.OpenXRDeviceManager/<EnableIfLoaderBecomesActive>d__4::<>u__1
	RuntimeObject* ___U3CU3Eu__1_3;
};

// Microsoft.MixedReality.Toolkit.XRSDK.OpenXR.OpenXREyeGazeDataProvider/<EnableIfLoaderBecomesActive>d__27
struct U3CEnableIfLoaderBecomesActiveU3Ed__27_t6E741431DCE784A89F3E72D66000E57BB7966575 
{
	// System.Int32 Microsoft.MixedReality.Toolkit.XRSDK.OpenXR.OpenXREyeGazeDataProvider/<EnableIfLoaderBecomesActive>d__27::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncVoidMethodBuilder Microsoft.MixedReality.Toolkit.XRSDK.OpenXR.OpenXREyeGazeDataProvider/<EnableIfLoaderBecomesActive>d__27::<>t__builder
	AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D ___U3CU3Et__builder_1;
	// Microsoft.MixedReality.Toolkit.XRSDK.OpenXR.OpenXREyeGazeDataProvider Microsoft.MixedReality.Toolkit.XRSDK.OpenXR.OpenXREyeGazeDataProvider/<EnableIfLoaderBecomesActive>d__27::<>4__this
	OpenXREyeGazeDataProvider_t25F551318CABD265458042E84D190BF28F66A55F* ___U3CU3E4__this_2;
	// System.Object Microsoft.MixedReality.Toolkit.XRSDK.OpenXR.OpenXREyeGazeDataProvider/<EnableIfLoaderBecomesActive>d__27::<>u__1
	RuntimeObject* ___U3CU3Eu__1_3;
};

// System.Func`1<System.Boolean>
struct Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457  : public MulticastDelegate_t
{
};

// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07  : public MulticastDelegate_t
{
};

// Microsoft.MixedReality.Toolkit.CameraSystem.BaseCameraSettingsProvider
struct BaseCameraSettingsProvider_tD700E49A18844AC7B08C84247430319CFEC93F46  : public BaseDataProvider_1_t5511AC264C914065B4C84ECA02C3FC05D1C915B6
{
	// System.Boolean Microsoft.MixedReality.Toolkit.CameraSystem.BaseCameraSettingsProvider::<IsOpaque>k__BackingField
	bool ___U3CIsOpaqueU3Ek__BackingField_14;
};

// Microsoft.MixedReality.Toolkit.Input.BaseInputDeviceManager
struct BaseInputDeviceManager_t1D055DB03D88FA053C00671FEA5040B944CC26BC  : public BaseDataProvider_1_t1C7B9F1707FEB27659F53B230E0A18282D2F7F20
{
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.BaseInputDeviceManager::enablePointerCache
	bool ___enablePointerCache_14;
	// Microsoft.MixedReality.Toolkit.Input.BaseInputDeviceManager/PointerConfig[] Microsoft.MixedReality.Toolkit.Input.BaseInputDeviceManager::pointerConfigurations
	PointerConfigU5BU5D_tB0CE3BD4887D9B9BFC82FC1CA265B076BFD7B59F* ___pointerConfigurations_15;
	// System.Collections.Generic.Dictionary`2<Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointer,System.UInt32> Microsoft.MixedReality.Toolkit.Input.BaseInputDeviceManager::activePointersToConfig
	Dictionary_2_t924EC80B88AF529C31B6BD658C27711A7B2B2A5E* ___activePointersToConfig_17;
};

struct BaseInputDeviceManager_t1D055DB03D88FA053C00671FEA5040B944CC26BC_StaticFields
{
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.BaseInputDeviceManager::RequestPointersPerfMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___RequestPointersPerfMarker_16;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.BaseInputDeviceManager::RecyclePointersPerfMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___RecyclePointersPerfMarker_18;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.BaseInputDeviceManager::CreatePointerPerfMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___CreatePointerPerfMarker_19;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.BaseInputDeviceManager::CleanActivePointersPerfMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___CleanActivePointersPerfMarker_20;
};

// Microsoft.MixedReality.Toolkit.BaseMixedRealityProfile
struct BaseMixedRealityProfile_tB4FDEF58FFD17796C0DB7241630B71CDF38FA1D4  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
	// System.Boolean Microsoft.MixedReality.Toolkit.BaseMixedRealityProfile::isCustomProfile
	bool ___isCustomProfile_4;
};

// Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialObserver
struct BaseSpatialObserver_tFBE4A1B3D5FCCB85BD0DC39709C1FCB7085D797B  : public BaseDataProvider_1_tD2C6659D94D07FC49556BA26F6C62210EACE7F30
{
	// System.UInt32 Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialObserver::<SourceId>k__BackingField
	uint32_t ___U3CSourceIdU3Ek__BackingField_15;
	// System.String Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialObserver::<SourceName>k__BackingField
	String_t* ___U3CSourceNameU3Ek__BackingField_16;
	// Microsoft.MixedReality.Toolkit.Utilities.AutoStartBehavior Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialObserver::<StartupBehavior>k__BackingField
	int32_t ___U3CStartupBehaviorU3Ek__BackingField_17;
	// System.Int32 Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialObserver::<DefaultPhysicsLayer>k__BackingField
	int32_t ___U3CDefaultPhysicsLayerU3Ek__BackingField_18;
	// System.Boolean Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialObserver::<IsRunning>k__BackingField
	bool ___U3CIsRunningU3Ek__BackingField_19;
	// System.Boolean Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialObserver::<IsStationaryObserver>k__BackingField
	bool ___U3CIsStationaryObserverU3Ek__BackingField_20;
	// UnityEngine.Quaternion Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialObserver::<ObserverRotation>k__BackingField
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___U3CObserverRotationU3Ek__BackingField_21;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialObserver::<ObserverOrigin>k__BackingField
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CObserverOriginU3Ek__BackingField_22;
	// Microsoft.MixedReality.Toolkit.Utilities.VolumeType Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialObserver::<ObserverVolumeType>k__BackingField
	int32_t ___U3CObserverVolumeTypeU3Ek__BackingField_23;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialObserver::<ObservationExtents>k__BackingField
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CObservationExtentsU3Ek__BackingField_24;
	// System.Single Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialObserver::<UpdateInterval>k__BackingField
	float ___U3CUpdateIntervalU3Ek__BackingField_25;
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// Microsoft.MixedReality.Toolkit.Utilities.EyeGazeSmoother
struct EyeGazeSmoother_t694634D7A1E87E3409EB4E378F76454732CA1698  : public RuntimeObject
{
	// System.Action Microsoft.MixedReality.Toolkit.Utilities.EyeGazeSmoother::OnSaccade
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___OnSaccade_0;
	// System.Action Microsoft.MixedReality.Toolkit.Utilities.EyeGazeSmoother::OnSaccadeX
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___OnSaccadeX_1;
	// System.Action Microsoft.MixedReality.Toolkit.Utilities.EyeGazeSmoother::OnSaccadeY
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___OnSaccadeY_2;
	// System.Single Microsoft.MixedReality.Toolkit.Utilities.EyeGazeSmoother::smoothFactorNormalized
	float ___smoothFactorNormalized_3;
	// System.Single Microsoft.MixedReality.Toolkit.Utilities.EyeGazeSmoother::saccadeThreshInDegree
	float ___saccadeThreshInDegree_4;
	// System.Nullable`1<UnityEngine.Ray> Microsoft.MixedReality.Toolkit.Utilities.EyeGazeSmoother::oldGaze
	Nullable_1_t4963285281B990B794CDEACB9C3CD3069B5FA768 ___oldGaze_5;
	// System.Int32 Microsoft.MixedReality.Toolkit.Utilities.EyeGazeSmoother::confidenceOfSaccade
	int32_t ___confidenceOfSaccade_6;
	// System.Int32 Microsoft.MixedReality.Toolkit.Utilities.EyeGazeSmoother::confidenceOfSaccadeThreshold
	int32_t ___confidenceOfSaccadeThreshold_7;
	// UnityEngine.Ray Microsoft.MixedReality.Toolkit.Utilities.EyeGazeSmoother::saccade_initialGazePoint
	Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 ___saccade_initialGazePoint_8;
	// System.Collections.Generic.List`1<UnityEngine.Ray> Microsoft.MixedReality.Toolkit.Utilities.EyeGazeSmoother::saccade_newGazeCluster
	List_1_tEC4759056ABBCCE15600D14832D9EFF79F822BE0* ___saccade_newGazeCluster_9;
};

struct EyeGazeSmoother_t694634D7A1E87E3409EB4E378F76454732CA1698_StaticFields
{
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Utilities.EyeGazeSmoother::SmoothGazePerfMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___SmoothGazePerfMarker_10;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Utilities.EyeGazeSmoother::IsSaccadingPerfMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___IsSaccadingPerfMarker_11;
};

// Microsoft.MixedReality.Toolkit.XRSDK.OpenXR.HPReverbG2Controller
struct HPReverbG2Controller_tC92BB9012B3B951EDF062F795D81AB05B8F8BCAB  : public GenericXRSDKController_tB5136D037E3BD7D743A519016EA2710F7ED980DE
{
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.XRSDK.OpenXR.HPReverbG2Controller::currentPointerPosition
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___currentPointerPosition_24;
	// UnityEngine.Quaternion Microsoft.MixedReality.Toolkit.XRSDK.OpenXR.HPReverbG2Controller::currentPointerRotation
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___currentPointerRotation_25;
	// Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose Microsoft.MixedReality.Toolkit.XRSDK.OpenXR.HPReverbG2Controller::currentPointerPose
	MixedRealityPose_tE60115C271AC50B8C11BA3B404BFCA99C7B2EFF5 ___currentPointerPose_26;
};

struct HPReverbG2Controller_tC92BB9012B3B951EDF062F795D81AB05B8F8BCAB_StaticFields
{
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.XRSDK.OpenXR.HPReverbG2Controller::UpdatePoseDataPerfMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___UpdatePoseDataPerfMarker_27;
};

// Microsoft.MixedReality.Toolkit.XRSDK.OpenXR.MicrosoftArticulatedHand
struct MicrosoftArticulatedHand_tFE375102CA3BF7EBD1CB6E1BD88C26C51F116CFB  : public GenericXRSDKController_tB5136D037E3BD7D743A519016EA2710F7ED980DE
{
	// Microsoft.MixedReality.Toolkit.Input.ArticulatedHandDefinition Microsoft.MixedReality.Toolkit.XRSDK.OpenXR.MicrosoftArticulatedHand::handDefinition
	ArticulatedHandDefinition_t9B5E215D853BD6F61AF012898D07BBDE93B4AEC4* ___handDefinition_24;
	// Microsoft.MixedReality.Toolkit.XRSDK.OpenXR.OpenXRHandMeshProvider Microsoft.MixedReality.Toolkit.XRSDK.OpenXR.MicrosoftArticulatedHand::handMeshProvider
	OpenXRHandMeshProvider_t7E1EB4108CF655D3DB1CAF41AD048D7AE755B060* ___handMeshProvider_25;
	// System.Collections.Generic.Dictionary`2<Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint,Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose> Microsoft.MixedReality.Toolkit.XRSDK.OpenXR.MicrosoftArticulatedHand::unityJointPoses
	Dictionary_2_t88261A8DE0EA7D536FD580182F6F73520708C1B7* ___unityJointPoses_26;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.XRSDK.OpenXR.MicrosoftArticulatedHand::currentPointerPosition
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___currentPointerPosition_27;
	// UnityEngine.Quaternion Microsoft.MixedReality.Toolkit.XRSDK.OpenXR.MicrosoftArticulatedHand::currentPointerRotation
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___currentPointerRotation_28;
	// Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose Microsoft.MixedReality.Toolkit.XRSDK.OpenXR.MicrosoftArticulatedHand::currentPointerPose
	MixedRealityPose_tE60115C271AC50B8C11BA3B404BFCA99C7B2EFF5 ___currentPointerPose_29;
	// System.Collections.Generic.List`1<UnityEngine.XR.Bone> Microsoft.MixedReality.Toolkit.XRSDK.OpenXR.MicrosoftArticulatedHand::fingerBones
	List_1_t291997894B2B2DA81CD73E6D5913780EBFED4068* ___fingerBones_31;
};

struct MicrosoftArticulatedHand_tFE375102CA3BF7EBD1CB6E1BD88C26C51F116CFB_StaticFields
{
	// UnityEngine.XR.HandFinger[] Microsoft.MixedReality.Toolkit.XRSDK.OpenXR.MicrosoftArticulatedHand::handFingers
	HandFingerU5BU5D_t722717EF823803BD086286CBF1A2D5F4B8E05F45* ___handFingers_30;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.XRSDK.OpenXR.MicrosoftArticulatedHand::UpdateControllerPerfMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___UpdateControllerPerfMarker_32;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.XRSDK.OpenXR.MicrosoftArticulatedHand::UpdateSingleAxisDataPerfMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___UpdateSingleAxisDataPerfMarker_33;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.XRSDK.OpenXR.MicrosoftArticulatedHand::UpdateButtonDataPerfMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___UpdateButtonDataPerfMarker_34;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.XRSDK.OpenXR.MicrosoftArticulatedHand::UpdatePoseDataPerfMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___UpdatePoseDataPerfMarker_35;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.XRSDK.OpenXR.MicrosoftArticulatedHand::UpdateHandDataPerfMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___UpdateHandDataPerfMarker_36;
};

// Microsoft.MixedReality.Toolkit.XRSDK.OpenXR.MicrosoftMotionController
struct MicrosoftMotionController_tC3CCCF3F155F3A7D33CA0B6078E5750C7C2AAE8C  : public GenericXRSDKController_tB5136D037E3BD7D743A519016EA2710F7ED980DE
{
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.XRSDK.OpenXR.MicrosoftMotionController::currentPointerPosition
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___currentPointerPosition_24;
	// UnityEngine.Quaternion Microsoft.MixedReality.Toolkit.XRSDK.OpenXR.MicrosoftMotionController::currentPointerRotation
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___currentPointerRotation_25;
	// Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose Microsoft.MixedReality.Toolkit.XRSDK.OpenXR.MicrosoftMotionController::currentPointerPose
	MixedRealityPose_tE60115C271AC50B8C11BA3B404BFCA99C7B2EFF5 ___currentPointerPose_26;
};

struct MicrosoftMotionController_tC3CCCF3F155F3A7D33CA0B6078E5750C7C2AAE8C_StaticFields
{
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.XRSDK.OpenXR.MicrosoftMotionController::UpdatePoseDataPerfMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___UpdatePoseDataPerfMarker_27;
};

// UnityEngine.XR.XRDisplaySubsystem
struct XRDisplaySubsystem_t4B00B0BF1894A039ACFA8DDC2C2EB9301118C1F1  : public IntegratedSubsystem_1_t8312865F01EEA1EDE4B24A973E47ADD526616848
{
	// System.Action`1<System.Boolean> UnityEngine.XR.XRDisplaySubsystem::displayFocusChanged
	Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* ___displayFocusChanged_2;
};

// Microsoft.MixedReality.Toolkit.CameraSystem.BaseCameraSettingsProfile
struct BaseCameraSettingsProfile_tDB8373232611B34628752DF4D284B938CFE32799  : public BaseMixedRealityProfile_tB4FDEF58FFD17796C0DB7241630B71CDF38FA1D4
{
};

// Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialMeshObserver
struct BaseSpatialMeshObserver_t38C1251909F4D9DB3B4E3DA90CFC32670E925B46  : public BaseSpatialObserver_tFBE4A1B3D5FCCB85BD0DC39709C1FCB7085D797B
{
	// Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessEventData`1<Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessMeshObject> Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialMeshObserver::meshEventData
	MixedRealitySpatialAwarenessEventData_1_tE46EB2E96DFDDF77196F0A24715743FD22640021* ___meshEventData_26;
	// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialMeshObserver::observedObjectParent
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___observedObjectParent_27;
	// Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessMeshDisplayOptions Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialMeshObserver::displayOption
	int32_t ___displayOption_37;
	// Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessMeshLevelOfDetail Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialMeshObserver::levelOfDetail
	int32_t ___levelOfDetail_38;
	// System.Collections.Generic.Dictionary`2<System.Int32,Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessMeshObject> Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialMeshObserver::meshes
	Dictionary_2_t0E31064CA2CAEBF8E2C6B82A38A6D432A0F91413* ___meshes_39;
	// System.Int32 Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialMeshObserver::meshPhysicsLayer
	int32_t ___meshPhysicsLayer_40;
	// System.Boolean Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialMeshObserver::<RecalculateNormals>k__BackingField
	bool ___U3CRecalculateNormalsU3Ek__BackingField_41;
	// System.Int32 Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialMeshObserver::<TrianglesPerCubicMeter>k__BackingField
	int32_t ___U3CTrianglesPerCubicMeterU3Ek__BackingField_42;
	// UnityEngine.Material Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialMeshObserver::occlusionMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___occlusionMaterial_43;
	// UnityEngine.PhysicMaterial Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialMeshObserver::physicsMaterial
	PhysicMaterial_t4ECED34E04BB2148333467208361A5FBFDCD7131* ___physicsMaterial_44;
	// UnityEngine.Material Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialMeshObserver::visibleMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___visibleMaterial_45;
	// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialMeshObserver::runtimeSpatialMeshPrefab
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___runtimeSpatialMeshPrefab_46;
};

struct BaseSpatialMeshObserver_t38C1251909F4D9DB3B4E3DA90CFC32670E925B46_StaticFields
{
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialMeshObserver::ApplyUpdatedMeshDisplayOptionPerfMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___ApplyUpdatedMeshDisplayOptionPerfMarker_28;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialMeshObserver::ApplyUpdatedMeshPhysicsPerfMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___ApplyUpdatedMeshPhysicsPerfMarker_29;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialMeshObserver::ApplyUpdatedPhysicsLayerPerfMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___ApplyUpdatedPhysicsLayerPerfMarker_30;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialMeshObserver::OnMeshAddedPerfMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___OnMeshAddedPerfMarker_31;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.SpatialAwareness.IMixedRealitySpatialAwarenessObservationHandler`1<Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessMeshObject>> Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialMeshObserver::OnMeshAdded
	EventFunction_1_tEBC0FE0CCBC0E2CED086EF11F4973BE9B1419E00* ___OnMeshAdded_32;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialMeshObserver::OnMeshUpdatedPerfMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___OnMeshUpdatedPerfMarker_33;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.SpatialAwareness.IMixedRealitySpatialAwarenessObservationHandler`1<Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessMeshObject>> Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialMeshObserver::OnMeshUpdated
	EventFunction_1_tEBC0FE0CCBC0E2CED086EF11F4973BE9B1419E00* ___OnMeshUpdated_34;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialMeshObserver::OnMeshRemovedPerfMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___OnMeshRemovedPerfMarker_35;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.SpatialAwareness.IMixedRealitySpatialAwarenessObservationHandler`1<Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessMeshObject>> Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialMeshObserver::OnMeshRemoved
	EventFunction_1_tEBC0FE0CCBC0E2CED086EF11F4973BE9B1419E00* ___OnMeshRemoved_36;
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

// Microsoft.MixedReality.Toolkit.Input.MixedRealityEyeTrackingProfile
struct MixedRealityEyeTrackingProfile_tC934F1DEA6C01B8F9F282E6AE7987E7CD874411B  : public BaseMixedRealityProfile_tB4FDEF58FFD17796C0DB7241630B71CDF38FA1D4
{
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.MixedRealityEyeTrackingProfile::smoothEyeTracking
	bool ___smoothEyeTracking_5;
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// Microsoft.MixedReality.Toolkit.XRSDK.OpenXR.OpenXRCameraSettings
struct OpenXRCameraSettings_t79033AFF7FDF1F549BD9331CD1E22FA7E955EF3F  : public BaseCameraSettingsProvider_tD700E49A18844AC7B08C84247430319CFEC93F46
{
	// Microsoft.MixedReality.Toolkit.XRSDK.OpenXR.OpenXRReprojectionUpdater Microsoft.MixedReality.Toolkit.XRSDK.OpenXR.OpenXRCameraSettings::reprojectionUpdater
	OpenXRReprojectionUpdater_t0CE1222DFB4C9CCF7637817B8A3E9129315C5815* ___reprojectionUpdater_15;
};

// Microsoft.MixedReality.Toolkit.XRSDK.OpenXR.OpenXREyeGazeDataProvider
struct OpenXREyeGazeDataProvider_t25F551318CABD265458042E84D190BF28F66A55F  : public BaseInputDeviceManager_t1D055DB03D88FA053C00671FEA5040B944CC26BC
{
	// System.Boolean Microsoft.MixedReality.Toolkit.XRSDK.OpenXR.OpenXREyeGazeDataProvider::<SmoothEyeTracking>k__BackingField
	bool ___U3CSmoothEyeTrackingU3Ek__BackingField_21;
	// Microsoft.MixedReality.Toolkit.Utilities.EyeGazeSmoother Microsoft.MixedReality.Toolkit.XRSDK.OpenXR.OpenXREyeGazeDataProvider::gazeSmoother
	EyeGazeSmoother_t694634D7A1E87E3409EB4E378F76454732CA1698* ___gazeSmoother_22;
	// System.Action Microsoft.MixedReality.Toolkit.XRSDK.OpenXR.OpenXREyeGazeDataProvider::OnSaccade
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___OnSaccade_23;
	// System.Action Microsoft.MixedReality.Toolkit.XRSDK.OpenXR.OpenXREyeGazeDataProvider::OnSaccadeX
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___OnSaccadeX_24;
	// System.Action Microsoft.MixedReality.Toolkit.XRSDK.OpenXR.OpenXREyeGazeDataProvider::OnSaccadeY
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___OnSaccadeY_25;
	// UnityEngine.XR.InputDevice Microsoft.MixedReality.Toolkit.XRSDK.OpenXR.OpenXREyeGazeDataProvider::eyeTrackingDevice
	InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD ___eyeTrackingDevice_27;
};

struct OpenXREyeGazeDataProvider_t25F551318CABD265458042E84D190BF28F66A55F_StaticFields
{
	// System.Collections.Generic.List`1<UnityEngine.XR.InputDevice> Microsoft.MixedReality.Toolkit.XRSDK.OpenXR.OpenXREyeGazeDataProvider::InputDeviceList
	List_1_tB66D13E0427CA48C600AEA4DBA5B173C3734C6CE* ___InputDeviceList_26;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.XRSDK.OpenXR.OpenXREyeGazeDataProvider::UpdatePerfMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___UpdatePerfMarker_28;
};

// Microsoft.MixedReality.Toolkit.XRSDK.Input.XRSDKDeviceManager
struct XRSDKDeviceManager_t9F5B097AEC5AA187C3083AE6F40B34E00E1BA583  : public BaseInputDeviceManager_t1D055DB03D88FA053C00671FEA5040B944CC26BC
{
	// System.Collections.Generic.List`1<UnityEngine.XR.InputDevice> Microsoft.MixedReality.Toolkit.XRSDK.Input.XRSDKDeviceManager::inputDevices
	List_1_tB66D13E0427CA48C600AEA4DBA5B173C3734C6CE* ___inputDevices_22;
	// System.Collections.Generic.List`1<UnityEngine.XR.InputDevice> Microsoft.MixedReality.Toolkit.XRSDK.Input.XRSDKDeviceManager::inputDevicesSubset
	List_1_tB66D13E0427CA48C600AEA4DBA5B173C3734C6CE* ___inputDevicesSubset_23;
	// System.Collections.Generic.List`1<UnityEngine.XR.InputDevice> Microsoft.MixedReality.Toolkit.XRSDK.Input.XRSDKDeviceManager::lastInputDevices
	List_1_tB66D13E0427CA48C600AEA4DBA5B173C3734C6CE* ___lastInputDevices_24;
	// System.Collections.Generic.List`1<UnityEngine.XR.InputDeviceCharacteristics> Microsoft.MixedReality.Toolkit.XRSDK.Input.XRSDKDeviceManager::<DesiredInputCharacteristics>k__BackingField
	List_1_tEA57E67D76DE7CBA7F472F399385BD853B825EB7* ___U3CDesiredInputCharacteristicsU3Ek__BackingField_25;
};

struct XRSDKDeviceManager_t9F5B097AEC5AA187C3083AE6F40B34E00E1BA583_StaticFields
{
	// System.Collections.Generic.Dictionary`2<UnityEngine.XR.InputDevice,Microsoft.MixedReality.Toolkit.XRSDK.Input.GenericXRSDKController> Microsoft.MixedReality.Toolkit.XRSDK.Input.XRSDKDeviceManager::ActiveControllers
	Dictionary_2_t500395CB4236088AFBF004A0D9DD896F9DC12876* ___ActiveControllers_21;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.XRSDK.Input.XRSDKDeviceManager::UpdatePerfMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___UpdatePerfMarker_26;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.XRSDK.Input.XRSDKDeviceManager::GetOrAddControllerPerfMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___GetOrAddControllerPerfMarker_27;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.XRSDK.Input.XRSDKDeviceManager::RemoveControllerPerfMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___RemoveControllerPerfMarker_28;
};

// Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver
struct GenericXRSDKSpatialMeshObserver_t992F3640352E29648369A4DE1DDAC0FFB6EAC6D1  : public BaseSpatialMeshObserver_t38C1251909F4D9DB3B4E3DA90CFC32670E925B46
{
	// System.Collections.Generic.IReadOnlyList`1<Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver> Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver::observersCache
	RuntimeObject* ___observersCache_47;
	// UnityEngine.XR.XRMeshSubsystem Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver::meshSubsystem
	XRMeshSubsystem_tDDC31EC10D4F0517542F9EB296428A0F7EC2C3B2* ___meshSubsystem_48;
	// System.Collections.Generic.Queue`1<UnityEngine.XR.MeshId> Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver::meshWorkQueue
	Queue_1_tCD897AEF7F66F282E6B86F78DCC03D0B51FBDF37* ___meshWorkQueue_50;
	// System.Collections.Generic.List`1<UnityEngine.XR.MeshInfo> Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver::meshInfos
	List_1_tEE09D0BD215A518344AF2985829C519B609B7B17* ___meshInfos_51;
	// Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessMeshObject Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver::outstandingMeshObject
	SpatialAwarenessMeshObject_t5577B6C05F0A1138C582A8F1B7A717B81AE11379* ___outstandingMeshObject_52;
	// Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessMeshObject Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver::spareMeshObject
	SpatialAwarenessMeshObject_t5577B6C05F0A1138C582A8F1B7A717B81AE11379* ___spareMeshObject_53;
	// System.Single Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver::lastUpdated
	float ___lastUpdated_54;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver::oldObserverOrigin
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___oldObserverOrigin_63;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver::oldObservationExtents
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___oldObservationExtents_64;
	// Microsoft.MixedReality.Toolkit.Utilities.VolumeType Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver::oldObserverVolumeType
	int32_t ___oldObserverVolumeType_65;
};

struct GenericXRSDKSpatialMeshObserver_t992F3640352E29648369A4DE1DDAC0FFB6EAC6D1_StaticFields
{
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver::UpdatePerfMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___UpdatePerfMarker_49;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver::ResumePerfMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___ResumePerfMarker_55;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver::SuspendPerfMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___SuspendPerfMarker_56;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver::ClearObservationsPerfMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___ClearObservationsPerfMarker_57;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver::UpdateObserverPerfMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___UpdateObserverPerfMarker_58;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver::RequestMeshPerfMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___RequestMeshPerfMarker_59;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver::RemoveMeshObjectPerfMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___RemoveMeshObjectPerfMarker_60;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver::ReclaimMeshObjectPerfMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___ReclaimMeshObjectPerfMarker_61;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver::ConfigureObserverVolumePerfMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___ConfigureObserverVolumePerfMarker_62;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver::UpdateMeshesPerfMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___UpdateMeshesPerfMarker_66;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver::MeshGenerationActionPerfMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___MeshGenerationActionPerfMarker_67;
};

// Microsoft.MixedReality.Toolkit.XRSDK.OpenXR.OpenXRCameraSettingsProfile
struct OpenXRCameraSettingsProfile_t06E39687ABEB6884081EEB67DBC551239884CBD0  : public BaseCameraSettingsProfile_tDB8373232611B34628752DF4D284B938CFE32799
{
	// Microsoft.MixedReality.Toolkit.XRSDK.OpenXR.HolographicReprojectionMethod Microsoft.MixedReality.Toolkit.XRSDK.OpenXR.OpenXRCameraSettingsProfile::reprojectionMethod
	int32_t ___reprojectionMethod_5;
};

// Microsoft.MixedReality.Toolkit.XRSDK.OpenXR.OpenXRDeviceManager
struct OpenXRDeviceManager_t0C31243398BC0C715BF745D6F2C7AA501C3DDA9A  : public XRSDKDeviceManager_t9F5B097AEC5AA187C3083AE6F40B34E00E1BA583
{
};

struct OpenXRDeviceManager_t0C31243398BC0C715BF745D6F2C7AA501C3DDA9A_StaticFields
{
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.XRSDK.OpenXR.OpenXRDeviceManager::GetOrAddControllerPerfMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___GetOrAddControllerPerfMarker_29;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.XRSDK.OpenXR.OpenXRDeviceManager::RemoveControllerPerfMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___RemoveControllerPerfMarker_30;
};

// Microsoft.MixedReality.Toolkit.XRSDK.OpenXR.OpenXRReprojectionUpdater
struct OpenXRReprojectionUpdater_t0CE1222DFB4C9CCF7637817B8A3E9129315C5815  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// Microsoft.MixedReality.Toolkit.XRSDK.OpenXR.HolographicReprojectionMethod Microsoft.MixedReality.Toolkit.XRSDK.OpenXR.OpenXRReprojectionUpdater::<ReprojectionMethod>k__BackingField
	int32_t ___U3CReprojectionMethodU3Ek__BackingField_4;
};

// Microsoft.MixedReality.Toolkit.XRSDK.OpenXR.OpenXRSpatialAwarenessMeshObserver
struct OpenXRSpatialAwarenessMeshObserver_t5721727A2DB9C492722FA318D38FAB0608F14E11  : public GenericXRSDKSpatialMeshObserver_t992F3640352E29648369A4DE1DDAC0FFB6EAC6D1
{
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping[]
struct MixedRealityInteractionMappingU5BU5D_t689ED6694F3B293DEDEA6D5371268D36DC67AACE  : public RuntimeArray
{
	ALIGN_FIELD (8) MixedRealityInteractionMapping_t10DB776EEA5255542F8F4AF0DC0BC566AF0095E0* m_Items[1];

	inline MixedRealityInteractionMapping_t10DB776EEA5255542F8F4AF0DC0BC566AF0095E0* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline MixedRealityInteractionMapping_t10DB776EEA5255542F8F4AF0DC0BC566AF0095E0** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, MixedRealityInteractionMapping_t10DB776EEA5255542F8F4AF0DC0BC566AF0095E0* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline MixedRealityInteractionMapping_t10DB776EEA5255542F8F4AF0DC0BC566AF0095E0* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline MixedRealityInteractionMapping_t10DB776EEA5255542F8F4AF0DC0BC566AF0095E0** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, MixedRealityInteractionMapping_t10DB776EEA5255542F8F4AF0DC0BC566AF0095E0* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.XR.HandFinger[]
struct HandFingerU5BU5D_t722717EF823803BD086286CBF1A2D5F4B8E05F45  : public RuntimeArray
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


// System.Void System.Collections.Generic.Dictionary`2<System.Int32Enum,Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m08987FA83DC951816545323EACF7050568F58233_gshared (Dictionary_2_t5BAA4B6E262AC9F9CA03BE0EB72876064BB73549* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.XR.Bone>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m2E21E77857A59DDCA977AE1BB52631B7D6FF16F9_gshared (List_1_t291997894B2B2DA81CD73E6D5913780EBFED4068* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32Enum,Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose>::TryGetValue(TKey,TValue&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_mB5D5552765DD7F333FDBF60A4F6108900A3440D1_gshared (Dictionary_2_t5BAA4B6E262AC9F9CA03BE0EB72876064BB73549* __this, int32_t ___key0, MixedRealityPose_tE60115C271AC50B8C11BA3B404BFCA99C7B2EFF5* ___value1, const RuntimeMethod* method) ;
// System.Void System.Nullable`1<System.Int32>::.ctor(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Nullable_1__ctor_m141FA88563AC0B5179132FB929EABD02C47FF703_gshared (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* __this, int32_t ___value0, const RuntimeMethod* method) ;
// T System.Nullable`1<System.Int32>::GetValueOrDefault()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Nullable_1_GetValueOrDefault_m8D130DB7F2A1E694736B449176F9C26DB456597B_gshared_inline (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* __this, const RuntimeMethod* method) ;
// System.Boolean System.Nullable`1<System.Int32>::get_HasValue()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_gshared_inline (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<UnityEngine.XR.Bone>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Bone_t2558B1DD1E4F405EA4D76A3B8D5149CA16011975 List_1_get_Item_m626280022A1933CC2CE133A8457F00D99C445275_gshared (List_1_t291997894B2B2DA81CD73E6D5913780EBFED4068* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<UnityEngine.XR.Bone>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m828761CCE16645195ED82DCD06AD93CD44C905FD_gshared_inline (List_1_t291997894B2B2DA81CD73E6D5913780EBFED4068* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32Enum,Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose>::set_Item(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m7AF5405DB160A5A3DA78E3DB91A1A6D4D498078A_gshared (Dictionary_2_t5BAA4B6E262AC9F9CA03BE0EB72876064BB73549* __this, int32_t ___key0, MixedRealityPose_tE60115C271AC50B8C11BA3B404BFCA99C7B2EFF5 ___value1, const RuntimeMethod* method) ;
// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::Create()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AsyncTaskMethodBuilder_1_tE810F083929D7952F192036D298085BD4B048AD0 AsyncTaskMethodBuilder_1_Create_mAFCDBB3F3D94DC87243FAB2D72DD85D1EFB68441_gshared (const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::Start<Microsoft.MixedReality.Toolkit.XRSDK.OpenXR.MicrosoftControllerModelProvider/<TryGenerateControllerModelFromPlatformSDK>d__1>(TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_Start_TisU3CTryGenerateControllerModelFromPlatformSDKU3Ed__1_t634A2619353B2ADDB9D91D244F8D3FB5701728F8_mFA94733CEE5554DA63ABE769D6E79593E4BEC79A_gshared (AsyncTaskMethodBuilder_1_tE810F083929D7952F192036D298085BD4B048AD0* __this, U3CTryGenerateControllerModelFromPlatformSDKU3Ed__1_t634A2619353B2ADDB9D91D244F8D3FB5701728F8* ___stateMachine0, const RuntimeMethod* method) ;
// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::get_Task()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* AsyncTaskMethodBuilder_1_get_Task_mEA092EC6F1324A9D694CF6056FA8583F2A2BDC89_gshared (AsyncTaskMethodBuilder_1_tE810F083929D7952F192036D298085BD4B048AD0* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::SetException(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_SetException_mC2F74B26F5303F9F960965220E2866D777F1A5C6_gshared (AsyncTaskMethodBuilder_1_tE810F083929D7952F192036D298085BD4B048AD0* __this, Exception_t* ___exception0, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::SetResult(TResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_SetResult_m0D83195F995F9825D7A6DCDC3835D6917C43B5A6_gshared (AsyncTaskMethodBuilder_1_tE810F083929D7952F192036D298085BD4B048AD0* __this, RuntimeObject* ___result0, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_SetStateMachine_m3BE54983634ABF5BE05200C7894AD0F9F20BDD65_gshared (AsyncTaskMethodBuilder_1_tE810F083929D7952F192036D298085BD4B048AD0* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method) ;
// System.Nullable`1<System.Boolean> Microsoft.MixedReality.Toolkit.XRSDK.LoaderHelpers::IsLoaderActive<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 LoaderHelpers_IsLoaderActive_TisRuntimeObject_mD505BBF78057D13A4EAA28CD31C17AFE287DEAEC_gshared (const RuntimeMethod* method) ;
// System.Boolean System.Nullable`1<System.Boolean>::get_HasValue()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_m6B76D139692C43B2AF7C695FAB044B16ACFAF355_gshared_inline (Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01* __this, const RuntimeMethod* method) ;
// T System.Nullable`1<System.Boolean>::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Nullable_1_get_Value_mE2C54C6AE9FC9F05BF44CD9D7D61DC6CD56E3E28_gshared (Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::Start<Microsoft.MixedReality.Toolkit.XRSDK.OpenXR.OpenXRCameraSettings/<EnableIfLoaderBecomesActive>d__7>(TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_Start_TisU3CEnableIfLoaderBecomesActiveU3Ed__7_t55A622F0A215D46947C9F623BA27D2844AC94BA9_mA8F1E5BE7017B00A7E38A6BEE056C72F44CFCB30_gshared (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* __this, U3CEnableIfLoaderBecomesActiveU3Ed__7_t55A622F0A215D46947C9F623BA27D2844AC94BA9* ___stateMachine0, const RuntimeMethod* method) ;
// T Microsoft.MixedReality.Toolkit.ComponentExtensions::EnsureComponent<System.Object>(UnityEngine.Component)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ComponentExtensions_EnsureComponent_TisRuntimeObject_mB083D5B8A33EF17A22560D0070FF444623C14B7F_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* ___component0, const RuntimeMethod* method) ;
// System.Void System.Func`1<System.Boolean>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_1__ctor_mDFFAE9C73346372438B5B04C4558AC42F1A3DA22_gshared (Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::AwaitOnCompleted<System.Object,Microsoft.MixedReality.Toolkit.XRSDK.OpenXR.OpenXRCameraSettings/<EnableIfLoaderBecomesActive>d__7>(TAwaiter&,TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_AwaitOnCompleted_TisRuntimeObject_TisU3CEnableIfLoaderBecomesActiveU3Ed__7_t55A622F0A215D46947C9F623BA27D2844AC94BA9_m5CFB0D6C5D020A5DA99E4C3EE04C0106B82969A8_gshared (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* __this, RuntimeObject** ___awaiter0, U3CEnableIfLoaderBecomesActiveU3Ed__7_t55A622F0A215D46947C9F623BA27D2844AC94BA9* ___stateMachine1, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::Start<Microsoft.MixedReality.Toolkit.XRSDK.OpenXR.OpenXRDeviceManager/<EnableIfLoaderBecomesActive>d__4>(TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_Start_TisU3CEnableIfLoaderBecomesActiveU3Ed__4_tBEE69E1D11D867DAE899E661B1399BB7FE0463FD_m26D778C7FB9AA545044BDE3F941F10A60279F857_gshared (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* __this, U3CEnableIfLoaderBecomesActiveU3Ed__4_tBEE69E1D11D867DAE899E661B1399BB7FE0463FD* ___stateMachine0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.XR.InputDevice,System.Object>::ContainsKey(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_mD666285E70258F36167E291D368AF18634778C9A_gshared (Dictionary_2_t71D6FBDC59C9F3896AA3D4E3FEBCEA1D877D10C5* __this, InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD ___key0, const RuntimeMethod* method) ;
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<UnityEngine.XR.InputDevice,System.Object>::get_Keys()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyCollection_tF2D1EC54D3D8A791F792CE20D76ACCD9A26A5A64* Dictionary_2_get_Keys_mA8B83B933EAC0980074153B13C8695B650295FF9_gshared (Dictionary_2_t71D6FBDC59C9F3896AA3D4E3FEBCEA1D877D10C5* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/KeyCollection<UnityEngine.XR.InputDevice,System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t2F44BB49815829BA641EEC9E12F6258B3AB34AEE KeyCollection_GetEnumerator_m137B9EBA182D25AE139F57920AE127FD480C78B0_gshared (KeyCollection_tF2D1EC54D3D8A791F792CE20D76ACCD9A26A5A64* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<UnityEngine.XR.InputDevice,System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_m69DC23D472B9869709595C26F77FE90CBDE4371B_gshared (Enumerator_t2F44BB49815829BA641EEC9E12F6258B3AB34AEE* __this, const RuntimeMethod* method) ;
// TKey System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<UnityEngine.XR.InputDevice,System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD Enumerator_get_Current_mA273BA593E927E11AB13038A0951F0BA23BE9218_gshared_inline (Enumerator_t2F44BB49815829BA641EEC9E12F6258B3AB34AEE* __this, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.Dictionary`2<UnityEngine.XR.InputDevice,System.Object>::get_Item(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_get_Item_mB74E30370773A3CE297583FC6F4F80C31F388CE1_gshared (Dictionary_2_t71D6FBDC59C9F3896AA3D4E3FEBCEA1D877D10C5* __this, InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD ___key0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.XR.InputDevice,System.Object>::Add(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m5F088D56D3C169743DC181479281FC3B83961F0A_gshared (Dictionary_2_t71D6FBDC59C9F3896AA3D4E3FEBCEA1D877D10C5* __this, InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD ___key0, RuntimeObject* ___value1, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<UnityEngine.XR.InputDevice,System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mDE562F1AF34A12456B61CE081BA2788D71640502_gshared (Enumerator_t2F44BB49815829BA641EEC9E12F6258B3AB34AEE* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.XR.InputDevice,System.Object>::Remove(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_mD1E79CEA754A383395519C9B291D9D6C354CEF75_gshared (Dictionary_2_t71D6FBDC59C9F3896AA3D4E3FEBCEA1D877D10C5* __this, InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD ___key0, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::AwaitOnCompleted<System.Object,Microsoft.MixedReality.Toolkit.XRSDK.OpenXR.OpenXRDeviceManager/<EnableIfLoaderBecomesActive>d__4>(TAwaiter&,TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_AwaitOnCompleted_TisRuntimeObject_TisU3CEnableIfLoaderBecomesActiveU3Ed__4_tBEE69E1D11D867DAE899E661B1399BB7FE0463FD_mF6687CBCD133ED9008999A2DDC013208BCC793F6_gshared (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* __this, RuntimeObject** ___awaiter0, U3CEnableIfLoaderBecomesActiveU3Ed__4_tBEE69E1D11D867DAE899E661B1399BB7FE0463FD* ___stateMachine1, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::Start<Microsoft.MixedReality.Toolkit.XRSDK.OpenXR.OpenXREyeGazeDataProvider/<EnableIfLoaderBecomesActive>d__27>(TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_Start_TisU3CEnableIfLoaderBecomesActiveU3Ed__27_t6E741431DCE784A89F3E72D66000E57BB7966575_m8FDE3FA3806D1146AC02EF98D3F03479DF04D3C1_gshared (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* __this, U3CEnableIfLoaderBecomesActiveU3Ed__27_t6E741431DCE784A89F3E72D66000E57BB7966575* ___stateMachine0, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<UnityEngine.XR.InputDevice>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m9C3EC7FE1A9401268B3C9761A4D96A37197AD0E7_gshared_inline (List_1_tB66D13E0427CA48C600AEA4DBA5B173C3734C6CE* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<UnityEngine.XR.InputDevice>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD List_1_get_Item_mB0ED54544433CE428ACEC0FE2E6FEE53E11EE6D2_gshared (List_1_tB66D13E0427CA48C600AEA4DBA5B173C3734C6CE* __this, int32_t ___index0, const RuntimeMethod* method) ;
// T Microsoft.MixedReality.Toolkit.BaseDataProvider`1<System.Object>::get_Service()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* BaseDataProvider_1_get_Service_m9D57380441608DEC9ABF2199EA5585FC967E038F_gshared_inline (BaseDataProvider_1_t8DC280A360428C68343AA5D6B95788F4A050196F* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.XR.InputDevice>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mF7ACC153F11A3260DAACDCA56B0A70A4BFA61EA4_gshared (List_1_tB66D13E0427CA48C600AEA4DBA5B173C3734C6CE* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::AwaitOnCompleted<System.Object,Microsoft.MixedReality.Toolkit.XRSDK.OpenXR.OpenXREyeGazeDataProvider/<EnableIfLoaderBecomesActive>d__27>(TAwaiter&,TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_AwaitOnCompleted_TisRuntimeObject_TisU3CEnableIfLoaderBecomesActiveU3Ed__27_t6E741431DCE784A89F3E72D66000E57BB7966575_mC6747657C8645E35647814EF68C7813E972D8670_gshared (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* __this, RuntimeObject** ___awaiter0, U3CEnableIfLoaderBecomesActiveU3Ed__27_t6E741431DCE784A89F3E72D66000E57BB7966575* ___stateMachine1, const RuntimeMethod* method) ;
// System.Void System.Nullable`1<System.Boolean>::.ctor(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Nullable_1__ctor_m4FAA8281CB4EFFD8B817734351FB3AC20A0CD6F5_gshared (Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01* __this, bool ___value0, const RuntimeMethod* method) ;

// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline (const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::get_identity()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_get_identity_mB9CAEEB21BC81352CBF32DB9664BFC06FA7EA27B_inline (const RuntimeMethod* method) ;
// Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose::get_ZeroIdentity()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR MixedRealityPose_tE60115C271AC50B8C11BA3B404BFCA99C7B2EFF5 MixedRealityPose_get_ZeroIdentity_m163137A55AEF8C8B0163D1F76197C5CCEDD943AD_inline (const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.Input.HPMotionControllerDefinition::.ctor(Microsoft.MixedReality.Toolkit.Utilities.Handedness)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HPMotionControllerDefinition__ctor_mB272C4840D6F1DEF5644119EC6226AB0FF83D09B (HPMotionControllerDefinition_t5475B48AB19D09044334A500FD1D1F9616AA2E7F* __this, uint8_t ___handedness0, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.Input.GenericXRSDKController::.ctor(Microsoft.MixedReality.Toolkit.TrackingState,Microsoft.MixedReality.Toolkit.Utilities.Handedness,Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource,Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping[],Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSourceDefinition)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GenericXRSDKController__ctor_m2DDE7A2D1AAB218E2B62049681DE0D6B03FFD2C1 (GenericXRSDKController_tB5136D037E3BD7D743A519016EA2710F7ED980DE* __this, int32_t ___trackingState0, uint8_t ___controllerHandedness1, RuntimeObject* ___inputSource2, MixedRealityInteractionMappingU5BU5D_t689ED6694F3B293DEDEA6D5371268D36DC67AACE* ___interactions3, RuntimeObject* ___definition4, const RuntimeMethod* method) ;
// Unity.Profiling.ProfilerMarker/AutoScope Unity.Profiling.ProfilerMarker::Auto()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR AutoScope_tFB983697E28885CB10FFDB92D7EFD0615AEF3139 ProfilerMarker_Auto_m133FA724EB95D16187B37D2C8A501D7E989B1F8D_inline (ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD* __this, const RuntimeMethod* method) ;
// System.Void Unity.Profiling.ProfilerMarker/AutoScope::Dispose()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AutoScope_Dispose_mED763F3F51261EF8FB79DB32CD06E0A3F6C40481_inline (AutoScope_tFB983697E28885CB10FFDB92D7EFD0615AEF3139* __this, const RuntimeMethod* method) ;
// Microsoft.MixedReality.Toolkit.Input.DeviceInputType Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::get_InputType()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t MixedRealityInteractionMapping_get_InputType_m431C40AD5149D4817FAA46DC0326A481FE348C8D_inline (MixedRealityInteractionMapping_t10DB776EEA5255542F8F4AF0DC0BC566AF0095E0* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.XR.InputDevice::TryGetFeatureValue(UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3>,UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InputDevice_TryGetFeatureValue_m472B5ECE996FB7440CACCF1E85722DA4963E3167 (InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* __this, InputFeatureUsage_1_t2E901FA41650EB29399194768CAA93D477CEBC58 ___usage0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___value1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.MixedRealityPlayspace::TransformPoint(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 MixedRealityPlayspace_TransformPoint_mF0F8AA899D9BBBA99FC4EBD1B8730F4174D15314 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___localPosition0, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose::set_Position(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MixedRealityPose_set_Position_m9806379126B288614A363F39705935CA0D86888C_inline (MixedRealityPose_tE60115C271AC50B8C11BA3B404BFCA99C7B2EFF5* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.XR.InputDevice::TryGetFeatureValue(UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Quaternion>,UnityEngine.Quaternion&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InputDevice_TryGetFeatureValue_m0C1A9761DD0D1C6D1EF4BAB2FAF1BC1A9541BB9F (InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* __this, InputFeatureUsage_1_t8489CEC68B1EC178F2634079A9D7CD9E90D3CF5D ___usage0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* ___value1, const RuntimeMethod* method) ;
// UnityEngine.Quaternion Microsoft.MixedReality.Toolkit.MixedRealityPlayspace::get_Rotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 MixedRealityPlayspace_get_Rotation_mB5DCE6258ADE65064084A771A277AD2CDEC98737 (const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::op_Multiply(UnityEngine.Quaternion,UnityEngine.Quaternion)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_op_Multiply_m5AC8B39C55015059BDD09122E04E47D4BFAB2276_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___lhs0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rhs1, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose::set_Rotation(UnityEngine.Quaternion)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MixedRealityPose_set_Rotation_m090951B4A308155032C377FF0AE6BED025C39868_inline (MixedRealityPose_tE60115C271AC50B8C11BA3B404BFCA99C7B2EFF5* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___value0, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::set_PoseData(Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityInteractionMapping_set_PoseData_m2AD97DB2F27527268C645A037E7E358A8CDF3A90 (MixedRealityInteractionMapping_t10DB776EEA5255542F8F4AF0DC0BC566AF0095E0* __this, MixedRealityPose_tE60115C271AC50B8C11BA3B404BFCA99C7B2EFF5 ___value0, const RuntimeMethod* method) ;
// System.Boolean Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::get_Changed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MixedRealityInteractionMapping_get_Changed_mC98FFE1F0E915A3F03110D83000E473E7F05BC53 (MixedRealityInteractionMapping_t10DB776EEA5255542F8F4AF0DC0BC566AF0095E0* __this, const RuntimeMethod* method) ;
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem Microsoft.MixedReality.Toolkit.CoreServices::get_InputSystem()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CoreServices_get_InputSystem_m47147418643299159BF4DF408F768844FDC33943 (const RuntimeMethod* method) ;
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource Microsoft.MixedReality.Toolkit.Input.BaseController::get_InputSource()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* BaseController_get_InputSource_m8FE11DBDF7B41338ACF8AFF3A0C8FAD83E5D2870_inline (BaseController_t1635F01D9B5000C345FAF98BAEEA495E97C32274* __this, const RuntimeMethod* method) ;
// Microsoft.MixedReality.Toolkit.Utilities.Handedness Microsoft.MixedReality.Toolkit.Input.BaseController::get_ControllerHandedness()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint8_t BaseController_get_ControllerHandedness_m739908CFF885DB452AD9A115F569C455BA46A3A1_inline (BaseController_t1635F01D9B5000C345FAF98BAEEA495E97C32274* __this, const RuntimeMethod* method) ;
// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::get_MixedRealityInputAction()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR MixedRealityInputAction_tD3B6E9CE7F20EFC9D066C519FAB848679FC62486 MixedRealityInteractionMapping_get_MixedRealityInputAction_mE813B3EBBA0A10F64E34EA6E5001D140D81141E9_inline (MixedRealityInteractionMapping_t10DB776EEA5255542F8F4AF0DC0BC566AF0095E0* __this, const RuntimeMethod* method) ;
// Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::get_PoseData()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR MixedRealityPose_tE60115C271AC50B8C11BA3B404BFCA99C7B2EFF5 MixedRealityInteractionMapping_get_PoseData_m90E4BA2D7413EC29B85B025AEE96C2F7662427B0_inline (MixedRealityInteractionMapping_t10DB776EEA5255542F8F4AF0DC0BC566AF0095E0* __this, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.Input.GenericXRSDKController::UpdatePoseData(Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping,UnityEngine.XR.InputDevice)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GenericXRSDKController_UpdatePoseData_mD6B1481BC7BABD3265AA994D47789B80369054C9 (GenericXRSDKController_tB5136D037E3BD7D743A519016EA2710F7ED980DE* __this, MixedRealityInteractionMapping_t10DB776EEA5255542F8F4AF0DC0BC566AF0095E0* ___interactionMapping0, InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD ___inputDevice1, const RuntimeMethod* method) ;
// System.Void Unity.Profiling.ProfilerMarker::.ctor(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ProfilerMarker__ctor_mDD68B0A8B71E0301F592AF8891560150E55699C8_inline (ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD* __this, String_t* ___name0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint,Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose>::.ctor()
inline void Dictionary_2__ctor_mB503ABA3C13679286D2C404B06C0F4C781873E4C (Dictionary_2_t88261A8DE0EA7D536FD580182F6F73520708C1B7* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t88261A8DE0EA7D536FD580182F6F73520708C1B7*, const RuntimeMethod*))Dictionary_2__ctor_m08987FA83DC951816545323EACF7050568F58233_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.XR.Bone>::.ctor()
inline void List_1__ctor_m2E21E77857A59DDCA977AE1BB52631B7D6FF16F9 (List_1_t291997894B2B2DA81CD73E6D5913780EBFED4068* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t291997894B2B2DA81CD73E6D5913780EBFED4068*, const RuntimeMethod*))List_1__ctor_m2E21E77857A59DDCA977AE1BB52631B7D6FF16F9_gshared)(__this, method);
}
// System.Void Microsoft.MixedReality.Toolkit.Input.ArticulatedHandDefinition::.ctor(Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource,Microsoft.MixedReality.Toolkit.Utilities.Handedness)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArticulatedHandDefinition__ctor_m5F09BA89BFED449D09327359D69A39981B3ED210 (ArticulatedHandDefinition_t9B5E215D853BD6F61AF012898D07BBDE93B4AEC4* __this, RuntimeObject* ___source0, uint8_t ___handedness1, const RuntimeMethod* method) ;
// Microsoft.MixedReality.Toolkit.XRSDK.OpenXR.OpenXRHandMeshProvider Microsoft.MixedReality.Toolkit.XRSDK.OpenXR.OpenXRHandMeshProvider::get_Right()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR OpenXRHandMeshProvider_t7E1EB4108CF655D3DB1CAF41AD048D7AE755B060* OpenXRHandMeshProvider_get_Right_m95E73FC1A14FA52D4557E230F8F3F254CFA2B856_inline (const RuntimeMethod* method) ;
// Microsoft.MixedReality.Toolkit.XRSDK.OpenXR.OpenXRHandMeshProvider Microsoft.MixedReality.Toolkit.XRSDK.OpenXR.OpenXRHandMeshProvider::get_Left()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR OpenXRHandMeshProvider_t7E1EB4108CF655D3DB1CAF41AD048D7AE755B060* OpenXRHandMeshProvider_get_Left_mA2D4A13AD50B19E12EEABA8C8F4055DDD1D50EDB_inline (const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.OpenXR.OpenXRHandMeshProvider::SetInputSource(Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OpenXRHandMeshProvider_SetInputSource_mF13BFDF25DA36932B4F78D6717FB251E4E0889BB_inline (OpenXRHandMeshProvider_t7E1EB4108CF655D3DB1CAF41AD048D7AE755B060* __this, RuntimeObject* ___inputSource0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint,Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose>::TryGetValue(TKey,TValue&)
inline bool Dictionary_2_TryGetValue_m5BA3B1495D7A52D723E805C6272917A762BFF71B (Dictionary_2_t88261A8DE0EA7D536FD580182F6F73520708C1B7* __this, int32_t ___key0, MixedRealityPose_tE60115C271AC50B8C11BA3B404BFCA99C7B2EFF5* ___value1, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t88261A8DE0EA7D536FD580182F6F73520708C1B7*, int32_t, MixedRealityPose_tE60115C271AC50B8C11BA3B404BFCA99C7B2EFF5*, const RuntimeMethod*))Dictionary_2_TryGetValue_mB5D5552765DD7F333FDBF60A4F6108900A3440D1_gshared)(__this, ___key0, ___value1, method);
}
// System.Boolean Microsoft.MixedReality.Toolkit.Input.ArticulatedHandDefinition::get_IsInPointingPose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ArticulatedHandDefinition_get_IsInPointingPose_mD8FEABCD5F41D504F53D345CB579814C1031DED1 (ArticulatedHandDefinition_t9B5E215D853BD6F61AF012898D07BBDE93B4AEC4* __this, const RuntimeMethod* method) ;
// System.Boolean Microsoft.MixedReality.Toolkit.Input.BaseController::get_Enabled()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool BaseController_get_Enabled_m2C7625D1C254DBCBE44B4493CE862C4BDADCAE4B_inline (BaseController_t1635F01D9B5000C345FAF98BAEEA495E97C32274* __this, const RuntimeMethod* method) ;
// Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping[] Microsoft.MixedReality.Toolkit.Input.BaseController::get_Interactions()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR MixedRealityInteractionMappingU5BU5D_t689ED6694F3B293DEDEA6D5371268D36DC67AACE* BaseController_get_Interactions_m0FDC472367761C254E7472EC21FE1251E7FA5A74_inline (BaseController_t1635F01D9B5000C345FAF98BAEEA495E97C32274* __this, const RuntimeMethod* method) ;
// System.Type System.Object::GetType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_m059825802BB6AF7EA9693FEBEEB0D85F59A3E38E (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.Input.BaseController::set_Enabled(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BaseController_set_Enabled_m1D7DEE744E2031B9DE7EE85C13F570692D8E1CE1_inline (BaseController_t1635F01D9B5000C345FAF98BAEEA495E97C32274* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.Input.GenericXRSDKController::UpdateController(UnityEngine.XR.InputDevice)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GenericXRSDKController_UpdateController_mFC51C2B0A354ADDBE54C9343733825B9A8AB69ED (GenericXRSDKController_tB5136D037E3BD7D743A519016EA2710F7ED980DE* __this, InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD ___inputDevice0, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.OpenXR.MicrosoftArticulatedHand::UpdateHandData(UnityEngine.XR.InputDevice)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MicrosoftArticulatedHand_UpdateHandData_m61B675B0DBD1F42249FCF62F8F60A9AF4B431AE6 (MicrosoftArticulatedHand_tFE375102CA3BF7EBD1CB6E1BD88C26C51F116CFB* __this, InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD ___inputDevice0, const RuntimeMethod* method) ;
// Microsoft.MixedReality.Toolkit.Utilities.AxisType Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::get_AxisType()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t MixedRealityInteractionMapping_get_AxisType_mCD3EA297AACF47BE8DFCCDCEBB0ABD2F5933EA40_inline (MixedRealityInteractionMapping_t10DB776EEA5255542F8F4AF0DC0BC566AF0095E0* __this, const RuntimeMethod* method) ;
// System.Void System.Nullable`1<System.Int32>::.ctor(T)
inline void Nullable_1__ctor_m141FA88563AC0B5179132FB929EABD02C47FF703 (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* __this, int32_t ___value0, const RuntimeMethod* method)
{
	((  void (*) (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28*, int32_t, const RuntimeMethod*))Nullable_1__ctor_m141FA88563AC0B5179132FB929EABD02C47FF703_gshared)(__this, ___value0, method);
}
// T System.Nullable`1<System.Int32>::GetValueOrDefault()
inline int32_t Nullable_1_GetValueOrDefault_m8D130DB7F2A1E694736B449176F9C26DB456597B_inline (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28*, const RuntimeMethod*))Nullable_1_GetValueOrDefault_m8D130DB7F2A1E694736B449176F9C26DB456597B_gshared_inline)(__this, method);
}
// System.Boolean System.Nullable`1<System.Int32>::get_HasValue()
inline bool Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_inline (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28*, const RuntimeMethod*))Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_gshared_inline)(__this, method);
}
// System.Boolean UnityEngine.XR.InputDevice::TryGetFeatureValue(UnityEngine.XR.InputFeatureUsage`1<System.Single>,System.Single&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InputDevice_TryGetFeatureValue_m675D52240379FEF80D6499B5031941812FDFD081 (InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* __this, InputFeatureUsage_1_t311D0F42F1A7BF37D3CEAC15A53A1F24165F1848 ___usage0, float* ___value1, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Mathf::Approximately(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Mathf_Approximately_m1C8DD0BB6A2D22A7DCF09AD7F8EE9ABD12D3F620_inline (float ___a0, float ___b1, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::set_BoolData(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityInteractionMapping_set_BoolData_m216D4A26D41B17B7CB6D4C28A30A38D8D6349ADA (MixedRealityInteractionMapping_t10DB776EEA5255542F8F4AF0DC0BC566AF0095E0* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.Input.GenericXRSDKController::UpdateSingleAxisData(Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping,UnityEngine.XR.InputDevice)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GenericXRSDKController_UpdateSingleAxisData_m811ACD65931669AC8A285214F0EB83D0E0E9ADA0 (GenericXRSDKController_tB5136D037E3BD7D743A519016EA2710F7ED980DE* __this, MixedRealityInteractionMapping_t10DB776EEA5255542F8F4AF0DC0BC566AF0095E0* ___interactionMapping0, InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD ___inputDevice1, const RuntimeMethod* method) ;
// System.Boolean Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::get_BoolData()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool MixedRealityInteractionMapping_get_BoolData_m69F4D6E88FF5DF204C3C38426A2BCD74AB7060CB_inline (MixedRealityInteractionMapping_t10DB776EEA5255542F8F4AF0DC0BC566AF0095E0* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.XR.InputDevice::TryGetFeatureValue(UnityEngine.XR.InputFeatureUsage`1<System.Boolean>,System.Boolean&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InputDevice_TryGetFeatureValue_m24EC3B6C41AE4098269427232AD5F52E786BF884 (InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* __this, InputFeatureUsage_1_tE336B2F0B9AC721519BFA17A08D6353FD5221637 ___usage0, bool* ___value1, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.Input.GenericXRSDKController::UpdateButtonData(Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping,UnityEngine.XR.InputDevice)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GenericXRSDKController_UpdateButtonData_mAF5A0412DE08EAC269E797FDE5F08A9177635673 (GenericXRSDKController_tB5136D037E3BD7D743A519016EA2710F7ED980DE* __this, MixedRealityInteractionMapping_t10DB776EEA5255542F8F4AF0DC0BC566AF0095E0* ___interactionMapping0, InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD ___inputDevice1, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.Input.ArticulatedHandDefinition::UpdateCurrentIndexPose(Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArticulatedHandDefinition_UpdateCurrentIndexPose_mDD4013C404622EC298ACDA6BB4FE26A9BF728637 (ArticulatedHandDefinition_t9B5E215D853BD6F61AF012898D07BBDE93B4AEC4* __this, MixedRealityInteractionMapping_t10DB776EEA5255542F8F4AF0DC0BC566AF0095E0* ___interactionMapping0, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.OpenXR.OpenXRHandMeshProvider::UpdateHandMesh()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OpenXRHandMeshProvider_UpdateHandMesh_m1EFA3799E4150D08765F121DFDE57064720ED3CE (OpenXRHandMeshProvider_t7E1EB4108CF655D3DB1CAF41AD048D7AE755B060* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.XR.InputDevice::TryGetFeatureValue(UnityEngine.XR.InputFeatureUsage`1<UnityEngine.XR.Hand>,UnityEngine.XR.Hand&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InputDevice_TryGetFeatureValue_mC30F276811E65A010BC493B2C7707837CF52396C (InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* __this, InputFeatureUsage_1_t64C1AA42D6E8BD57C54C7E891BD79A70A0F3A170 ___usage0, Hand_t67B90BC0D36CBC92DF7E38BD15463B925CB5912C* ___value1, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.XR.Hand::TryGetRootBone(UnityEngine.XR.Bone&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Hand_TryGetRootBone_m57751D162BB60316E15C09608D4365C4C8FFB346 (Hand_t67B90BC0D36CBC92DF7E38BD15463B925CB5912C* __this, Bone_t2558B1DD1E4F405EA4D76A3B8D5149CA16011975* ___boneOut0, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.OpenXR.MicrosoftArticulatedHand::ReadHandJoint(Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint,UnityEngine.XR.Bone)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MicrosoftArticulatedHand_ReadHandJoint_m665830FB9CB4CB3226D5F5784771B6BA0916D7FC (MicrosoftArticulatedHand_tFE375102CA3BF7EBD1CB6E1BD88C26C51F116CFB* __this, int32_t ___trackedHandJoint0, Bone_t2558B1DD1E4F405EA4D76A3B8D5149CA16011975 ___bone1, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.XR.Hand::TryGetFingerBones(UnityEngine.XR.HandFinger,System.Collections.Generic.List`1<UnityEngine.XR.Bone>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Hand_TryGetFingerBones_m62D184582CD2EC6FE21C6B70DB9CBEA1B4FADAE4 (Hand_t67B90BC0D36CBC92DF7E38BD15463B925CB5912C* __this, int32_t ___finger0, List_1_t291997894B2B2DA81CD73E6D5913780EBFED4068* ___bonesOut1, const RuntimeMethod* method) ;
// Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint Microsoft.MixedReality.Toolkit.XRSDK.OpenXR.MicrosoftArticulatedHand::ConvertToTrackedHandJoint(UnityEngine.XR.HandFinger,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MicrosoftArticulatedHand_ConvertToTrackedHandJoint_mEC7E6035D1371F283AE374B8A390CB863951E8B1 (MicrosoftArticulatedHand_tFE375102CA3BF7EBD1CB6E1BD88C26C51F116CFB* __this, int32_t ___finger0, int32_t ___index1, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<UnityEngine.XR.Bone>::get_Item(System.Int32)
inline Bone_t2558B1DD1E4F405EA4D76A3B8D5149CA16011975 List_1_get_Item_m626280022A1933CC2CE133A8457F00D99C445275 (List_1_t291997894B2B2DA81CD73E6D5913780EBFED4068* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  Bone_t2558B1DD1E4F405EA4D76A3B8D5149CA16011975 (*) (List_1_t291997894B2B2DA81CD73E6D5913780EBFED4068*, int32_t, const RuntimeMethod*))List_1_get_Item_m626280022A1933CC2CE133A8457F00D99C445275_gshared)(__this, ___index0, method);
}
// System.Int32 System.Collections.Generic.List`1<UnityEngine.XR.Bone>::get_Count()
inline int32_t List_1_get_Count_m828761CCE16645195ED82DCD06AD93CD44C905FD_inline (List_1_t291997894B2B2DA81CD73E6D5913780EBFED4068* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t291997894B2B2DA81CD73E6D5913780EBFED4068*, const RuntimeMethod*))List_1_get_Count_m828761CCE16645195ED82DCD06AD93CD44C905FD_gshared_inline)(__this, method);
}
// System.Void Microsoft.MixedReality.Toolkit.Input.ArticulatedHandDefinition::UpdateHandJoints(System.Collections.Generic.Dictionary`2<Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint,Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArticulatedHandDefinition_UpdateHandJoints_m4B2FAE405389005DD547E819BE1550BCE94DAB94 (ArticulatedHandDefinition_t9B5E215D853BD6F61AF012898D07BBDE93B4AEC4* __this, Dictionary_2_t88261A8DE0EA7D536FD580182F6F73520708C1B7* ___jointPoses0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.XR.Bone::TryGetPosition(UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Bone_TryGetPosition_m995E6BD44A081407B8FA2B4BB1B6223C1526E8D7 (Bone_t2558B1DD1E4F405EA4D76A3B8D5149CA16011975* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___position0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.XR.Bone::TryGetRotation(UnityEngine.Quaternion&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Bone_TryGetRotation_mBCD1D06C58E9C28F9C8F2A24A454D6B90ED6EB65 (Bone_t2558B1DD1E4F405EA4D76A3B8D5149CA16011975* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* ___rotation0, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose::.ctor(UnityEngine.Vector3,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityPose__ctor_mA9F8CDFA80771B30CB085958B1AE0526919755F0 (MixedRealityPose_tE60115C271AC50B8C11BA3B404BFCA99C7B2EFF5* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint,Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose>::set_Item(TKey,TValue)
inline void Dictionary_2_set_Item_mCA55C3E6813B3E8D1C814054AA423E553A26B4B1 (Dictionary_2_t88261A8DE0EA7D536FD580182F6F73520708C1B7* __this, int32_t ___key0, MixedRealityPose_tE60115C271AC50B8C11BA3B404BFCA99C7B2EFF5 ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t88261A8DE0EA7D536FD580182F6F73520708C1B7*, int32_t, MixedRealityPose_tE60115C271AC50B8C11BA3B404BFCA99C7B2EFF5, const RuntimeMethod*))Dictionary_2_set_Item_m7AF5405DB160A5A3DA78E3DB91A1A6D4D498078A_gshared)(__this, ___key0, ___value1, method);
}
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___handle0, const RuntimeMethod* method) ;
// System.Array System.Enum::GetValues(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeArray* Enum_GetValues_mE24D2214E046914DA4CAFB6D1DA830B76C501293 (Type_t* ___enumType0, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<UnityEngine.GameObject>::Create()
inline AsyncTaskMethodBuilder_1_t39EED874134028D1D4331D5686AA19731E407868 AsyncTaskMethodBuilder_1_Create_mCDF7C9C0134FCFC40D4C0ED9396204CAEF288FE8 (const RuntimeMethod* method)
{
	return ((  AsyncTaskMethodBuilder_1_t39EED874134028D1D4331D5686AA19731E407868 (*) (const RuntimeMethod*))AsyncTaskMethodBuilder_1_Create_mAFCDBB3F3D94DC87243FAB2D72DD85D1EFB68441_gshared)(method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<UnityEngine.GameObject>::Start<Microsoft.MixedReality.Toolkit.XRSDK.OpenXR.MicrosoftControllerModelProvider/<TryGenerateControllerModelFromPlatformSDK>d__1>(TStateMachine&)
inline void AsyncTaskMethodBuilder_1_Start_TisU3CTryGenerateControllerModelFromPlatformSDKU3Ed__1_t634A2619353B2ADDB9D91D244F8D3FB5701728F8_mB80FE041ADB60FB4F574BE837AEAC0CB146D9040 (AsyncTaskMethodBuilder_1_t39EED874134028D1D4331D5686AA19731E407868* __this, U3CTryGenerateControllerModelFromPlatformSDKU3Ed__1_t634A2619353B2ADDB9D91D244F8D3FB5701728F8* ___stateMachine0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t39EED874134028D1D4331D5686AA19731E407868*, U3CTryGenerateControllerModelFromPlatformSDKU3Ed__1_t634A2619353B2ADDB9D91D244F8D3FB5701728F8*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_Start_TisU3CTryGenerateControllerModelFromPlatformSDKU3Ed__1_t634A2619353B2ADDB9D91D244F8D3FB5701728F8_mFA94733CEE5554DA63ABE769D6E79593E4BEC79A_gshared)(__this, ___stateMachine0, method);
}
// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<UnityEngine.GameObject>::get_Task()
inline Task_1_tE06D7E45E347567BB7775D8FB00F95DC55D14506* AsyncTaskMethodBuilder_1_get_Task_m19C84E9A0B26617DE9B32A186501CAC7AE6C895E (AsyncTaskMethodBuilder_1_t39EED874134028D1D4331D5686AA19731E407868* __this, const RuntimeMethod* method)
{
	return ((  Task_1_tE06D7E45E347567BB7775D8FB00F95DC55D14506* (*) (AsyncTaskMethodBuilder_1_t39EED874134028D1D4331D5686AA19731E407868*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_get_Task_mEA092EC6F1324A9D694CF6056FA8583F2A2BDC89_gshared)(__this, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<UnityEngine.GameObject>::SetException(System.Exception)
inline void AsyncTaskMethodBuilder_1_SetException_mAE0D2510C63C5BEB04AA77FB6114CD8B97C11FFE (AsyncTaskMethodBuilder_1_t39EED874134028D1D4331D5686AA19731E407868* __this, Exception_t* ___exception0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t39EED874134028D1D4331D5686AA19731E407868*, Exception_t*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetException_mC2F74B26F5303F9F960965220E2866D777F1A5C6_gshared)(__this, ___exception0, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<UnityEngine.GameObject>::SetResult(TResult)
inline void AsyncTaskMethodBuilder_1_SetResult_mA747C28DBECF7C5751BF6E9628F176A9C50B2D05 (AsyncTaskMethodBuilder_1_t39EED874134028D1D4331D5686AA19731E407868* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___result0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t39EED874134028D1D4331D5686AA19731E407868*, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetResult_m0D83195F995F9825D7A6DCDC3835D6917C43B5A6_gshared)(__this, ___result0, method);
}
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.OpenXR.MicrosoftControllerModelProvider/<TryGenerateControllerModelFromPlatformSDK>d__1::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CTryGenerateControllerModelFromPlatformSDKU3Ed__1_MoveNext_m9630B8FE43373CE7C9CB2A3B0619AA4276EAF8D8 (U3CTryGenerateControllerModelFromPlatformSDKU3Ed__1_t634A2619353B2ADDB9D91D244F8D3FB5701728F8* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<UnityEngine.GameObject>::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
inline void AsyncTaskMethodBuilder_1_SetStateMachine_m957BD84C77C5AAFE13A722DDFE9845DDF4DF5415 (AsyncTaskMethodBuilder_1_t39EED874134028D1D4331D5686AA19731E407868* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t39EED874134028D1D4331D5686AA19731E407868*, RuntimeObject*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetStateMachine_m3BE54983634ABF5BE05200C7894AD0F9F20BDD65_gshared)(__this, ___stateMachine0, method);
}
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.OpenXR.MicrosoftControllerModelProvider/<TryGenerateControllerModelFromPlatformSDK>d__1::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CTryGenerateControllerModelFromPlatformSDKU3Ed__1_SetStateMachine_m581F6E22CB7FC65C8D1817828F7BCCBF3BB0FDAB (U3CTryGenerateControllerModelFromPlatformSDKU3Ed__1_t634A2619353B2ADDB9D91D244F8D3FB5701728F8* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.Input.WindowsMixedRealityControllerDefinition::.ctor(Microsoft.MixedReality.Toolkit.Utilities.Handedness)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsMixedRealityControllerDefinition__ctor_m4B6BBE1452F723BD8E1407C8FE9E3427EA3D13DD (WindowsMixedRealityControllerDefinition_tE3D0C6686E8565C58FA657AB2A2A3426765A3D71* __this, uint8_t ___handedness0, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.CameraSystem.BaseCameraSettingsProvider::.ctor(Microsoft.MixedReality.Toolkit.CameraSystem.IMixedRealityCameraSystem,System.String,System.UInt32,Microsoft.MixedReality.Toolkit.CameraSystem.BaseCameraSettingsProfile)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseCameraSettingsProvider__ctor_mAFEF8A563BC57786947687B6BEF2F047EE81F8C8 (BaseCameraSettingsProvider_tD700E49A18844AC7B08C84247430319CFEC93F46* __this, RuntimeObject* ___cameraSystem0, String_t* ___name1, uint32_t ___priority2, BaseCameraSettingsProfile_tDB8373232611B34628752DF4D284B938CFE32799* ___profile3, const RuntimeMethod* method) ;
// System.Nullable`1<System.Boolean> Microsoft.MixedReality.Toolkit.XRSDK.LoaderHelpers::IsLoaderActive<UnityEngine.XR.OpenXR.OpenXRLoaderBase>()
inline Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 LoaderHelpers_IsLoaderActive_TisOpenXRLoaderBase_t58BF6FC81FD9A7698FB65D651A0BB57EA7F47637_m8A7E36C8939A77CD18EB022010A767300C47069B (const RuntimeMethod* method)
{
	return ((  Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 (*) (const RuntimeMethod*))LoaderHelpers_IsLoaderActive_TisRuntimeObject_mD505BBF78057D13A4EAA28CD31C17AFE287DEAEC_gshared)(method);
}
// System.Nullable`1<System.Boolean> Microsoft.MixedReality.Toolkit.XRSDK.OpenXR.OpenXRCameraSettings::get_IsActiveLoader()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 OpenXRCameraSettings_get_IsActiveLoader_mAC8E93AF1B3560E5D6A302F17C6008F6165CE20C (OpenXRCameraSettings_t79033AFF7FDF1F549BD9331CD1E22FA7E955EF3F* __this, const RuntimeMethod* method) ;
// System.Boolean System.Nullable`1<System.Boolean>::get_HasValue()
inline bool Nullable_1_get_HasValue_m6B76D139692C43B2AF7C695FAB044B16ACFAF355_inline (Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01*, const RuntimeMethod*))Nullable_1_get_HasValue_m6B76D139692C43B2AF7C695FAB044B16ACFAF355_gshared_inline)(__this, method);
}
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.OpenXR.OpenXRCameraSettings::EnableIfLoaderBecomesActive()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OpenXRCameraSettings_EnableIfLoaderBecomesActive_m2D4CD635C80ED775A1F9A0FFFE7E6EFF63FF6C63 (OpenXRCameraSettings_t79033AFF7FDF1F549BD9331CD1E22FA7E955EF3F* __this, const RuntimeMethod* method) ;
// T System.Nullable`1<System.Boolean>::get_Value()
inline bool Nullable_1_get_Value_mE2C54C6AE9FC9F05BF44CD9D7D61DC6CD56E3E28 (Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01*, const RuntimeMethod*))Nullable_1_get_Value_mE2C54C6AE9FC9F05BF44CD9D7D61DC6CD56E3E28_gshared)(__this, method);
}
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.OpenXR.OpenXRCameraSettings::InitializeReprojectionUpdater()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OpenXRCameraSettings_InitializeReprojectionUpdater_mCA5FA5C216CB26ADCEE37B2B04F1701360A47F48 (OpenXRCameraSettings_t79033AFF7FDF1F549BD9331CD1E22FA7E955EF3F* __this, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.BaseService::Enable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseService_Enable_mF054160CA265761A1223A3F8CFE50A976C7297E8 (BaseService_tB7EC5C0F60DC5EE2DA122A608226D3887B6421D0* __this, const RuntimeMethod* method) ;
// System.Runtime.CompilerServices.AsyncVoidMethodBuilder System.Runtime.CompilerServices.AsyncVoidMethodBuilder::Create()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D AsyncVoidMethodBuilder_Create_mE6D291637BF7B4B6D3F8BFCA14920B9200D7A502 (const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::Start<Microsoft.MixedReality.Toolkit.XRSDK.OpenXR.OpenXRCameraSettings/<EnableIfLoaderBecomesActive>d__7>(TStateMachine&)
inline void AsyncVoidMethodBuilder_Start_TisU3CEnableIfLoaderBecomesActiveU3Ed__7_t55A622F0A215D46947C9F623BA27D2844AC94BA9_mA8F1E5BE7017B00A7E38A6BEE056C72F44CFCB30 (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* __this, U3CEnableIfLoaderBecomesActiveU3Ed__7_t55A622F0A215D46947C9F623BA27D2844AC94BA9* ___stateMachine0, const RuntimeMethod* method)
{
	((  void (*) (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D*, U3CEnableIfLoaderBecomesActiveU3Ed__7_t55A622F0A215D46947C9F623BA27D2844AC94BA9*, const RuntimeMethod*))AsyncVoidMethodBuilder_Start_TisU3CEnableIfLoaderBecomesActiveU3Ed__7_t55A622F0A215D46947C9F623BA27D2844AC94BA9_mA8F1E5BE7017B00A7E38A6BEE056C72F44CFCB30_gshared)(__this, ___stateMachine0, method);
}
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.OpenXR.OpenXRCameraSettings::UninitializeReprojectionUpdater()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OpenXRCameraSettings_UninitializeReprojectionUpdater_mC70F33D0AF09454216E04B6B4B5A2415E347311F (OpenXRCameraSettings_t79033AFF7FDF1F549BD9331CD1E22FA7E955EF3F* __this, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.BaseService::Disable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseService_Disable_m75AA61136BE79E0C8EA4B058D1506882A56683C4 (BaseService_tB7EC5C0F60DC5EE2DA122A608226D3887B6421D0* __this, const RuntimeMethod* method) ;
// UnityEngine.XR.XRDisplaySubsystem Microsoft.MixedReality.Toolkit.Utilities.XRSubsystemHelpers::get_DisplaySubsystem()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XRDisplaySubsystem_t4B00B0BF1894A039ACFA8DDC2C2EB9301118C1F1* XRSubsystemHelpers_get_DisplaySubsystem_m8EAE61D2871CD20E9BDF90940031D5F3A368D14A (const RuntimeMethod* method) ;
// System.Boolean UnityEngine.XR.XRDisplaySubsystem::get_displayOpaque()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRDisplaySubsystem_get_displayOpaque_m6D1368A243BF5187222D2F86E5C0582A0E2614D9 (XRDisplaySubsystem_t4B00B0BF1894A039ACFA8DDC2C2EB9301118C1F1* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// Microsoft.MixedReality.Toolkit.XRSDK.OpenXR.OpenXRCameraSettingsProfile Microsoft.MixedReality.Toolkit.XRSDK.OpenXR.OpenXRCameraSettings::get_Profile()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR OpenXRCameraSettingsProfile_t06E39687ABEB6884081EEB67DBC551239884CBD0* OpenXRCameraSettings_get_Profile_m629549EAA08C74C5ADB1B7BF48C8BD457F9823F6 (OpenXRCameraSettings_t79033AFF7FDF1F549BD9331CD1E22FA7E955EF3F* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// UnityEngine.Camera Microsoft.MixedReality.Toolkit.Utilities.CameraCache::get_Main()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* CameraCache_get_Main_m631CABB7F5A697F4C1D76F7CB02D6791C0DDCB9E (const RuntimeMethod* method) ;
// T Microsoft.MixedReality.Toolkit.ComponentExtensions::EnsureComponent<Microsoft.MixedReality.Toolkit.XRSDK.OpenXR.OpenXRReprojectionUpdater>(UnityEngine.Component)
inline OpenXRReprojectionUpdater_t0CE1222DFB4C9CCF7637817B8A3E9129315C5815* ComponentExtensions_EnsureComponent_TisOpenXRReprojectionUpdater_t0CE1222DFB4C9CCF7637817B8A3E9129315C5815_mD279AB605A627BA2147A272C37E7B377FE3F73CD (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* ___component0, const RuntimeMethod* method)
{
	return ((  OpenXRReprojectionUpdater_t0CE1222DFB4C9CCF7637817B8A3E9129315C5815* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))ComponentExtensions_EnsureComponent_TisRuntimeObject_mB083D5B8A33EF17A22560D0070FF444623C14B7F_gshared)(___component0, method);
}
// Microsoft.MixedReality.Toolkit.XRSDK.OpenXR.HolographicReprojectionMethod Microsoft.MixedReality.Toolkit.XRSDK.OpenXR.OpenXRCameraSettingsProfile::get_ReprojectionMethod()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t OpenXRCameraSettingsProfile_get_ReprojectionMethod_mC5A8CD3922E76B3CB4111EB9234AB08794269C48_inline (OpenXRCameraSettingsProfile_t06E39687ABEB6884081EEB67DBC551239884CBD0* __this, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.OpenXR.OpenXRReprojectionUpdater::set_ReprojectionMethod(Microsoft.MixedReality.Toolkit.XRSDK.OpenXR.HolographicReprojectionMethod)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OpenXRReprojectionUpdater_set_ReprojectionMethod_m79D17016F9A334113095A3D33F251C4205FA4298_inline (OpenXRReprojectionUpdater_t0CE1222DFB4C9CCF7637817B8A3E9129315C5815* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.UnityObjectExtensions::DestroyObject(UnityEngine.Object,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityObjectExtensions_DestroyObject_mD1D35D04EA32F02BB03FC23B5FE7069D098E8071 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___obj0, float ___t1, const RuntimeMethod* method) ;
// System.Void System.Func`1<System.Boolean>::.ctor(System.Object,System.IntPtr)
inline void Func_1__ctor_mDFFAE9C73346372438B5B04C4558AC42F1A3DA22 (Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_1__ctor_mDFFAE9C73346372438B5B04C4558AC42F1A3DA22_gshared)(__this, ___object0, ___method1, method);
}
// System.Void UnityEngine.WaitUntil::.ctor(System.Func`1<System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitUntil__ctor_m2C925CF39695C35F4CB1AC997531F203AE1434DF (WaitUntil_tA1CD487C5811E7C1F8C4ADA85DF5F4EFDC1D41BD* __this, Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* ___predicate0, const RuntimeMethod* method) ;
// Microsoft.MixedReality.Toolkit.Utilities.AwaiterExtensions/SimpleCoroutineAwaiter Microsoft.MixedReality.Toolkit.Utilities.AwaiterExtensions::GetAwaiter(UnityEngine.WaitUntil)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SimpleCoroutineAwaiter_t9DF0277C21C7F3B9CE7C9563D257D9A4821B4898* AwaiterExtensions_GetAwaiter_m9ABD8BB8BEF36E0AC2DE8346ECFC5B1D991FAD1F (WaitUntil_tA1CD487C5811E7C1F8C4ADA85DF5F4EFDC1D41BD* ___instruction0, const RuntimeMethod* method) ;
// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.AwaiterExtensions/SimpleCoroutineAwaiter::get_IsCompleted()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool SimpleCoroutineAwaiter_get_IsCompleted_m1F2F67907C96BE5BB23AF2F333A458FE3413D343_inline (SimpleCoroutineAwaiter_t9DF0277C21C7F3B9CE7C9563D257D9A4821B4898* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::AwaitOnCompleted<Microsoft.MixedReality.Toolkit.Utilities.AwaiterExtensions/SimpleCoroutineAwaiter,Microsoft.MixedReality.Toolkit.XRSDK.OpenXR.OpenXRCameraSettings/<EnableIfLoaderBecomesActive>d__7>(TAwaiter&,TStateMachine&)
inline void AsyncVoidMethodBuilder_AwaitOnCompleted_TisSimpleCoroutineAwaiter_t9DF0277C21C7F3B9CE7C9563D257D9A4821B4898_TisU3CEnableIfLoaderBecomesActiveU3Ed__7_t55A622F0A215D46947C9F623BA27D2844AC94BA9_m300BD274EB5E3030F6C717F09BCB5BEBE16615D2 (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* __this, SimpleCoroutineAwaiter_t9DF0277C21C7F3B9CE7C9563D257D9A4821B4898** ___awaiter0, U3CEnableIfLoaderBecomesActiveU3Ed__7_t55A622F0A215D46947C9F623BA27D2844AC94BA9* ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D*, SimpleCoroutineAwaiter_t9DF0277C21C7F3B9CE7C9563D257D9A4821B4898**, U3CEnableIfLoaderBecomesActiveU3Ed__7_t55A622F0A215D46947C9F623BA27D2844AC94BA9*, const RuntimeMethod*))AsyncVoidMethodBuilder_AwaitOnCompleted_TisRuntimeObject_TisU3CEnableIfLoaderBecomesActiveU3Ed__7_t55A622F0A215D46947C9F623BA27D2844AC94BA9_m5CFB0D6C5D020A5DA99E4C3EE04C0106B82969A8_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.AwaiterExtensions/SimpleCoroutineAwaiter::GetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleCoroutineAwaiter_GetResult_m6C94D94C7E24A27F954CF5B2BEC3F2DE4C204A4B (SimpleCoroutineAwaiter_t9DF0277C21C7F3B9CE7C9563D257D9A4821B4898* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::SetException(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_SetException_mD9A6F5D1A99A62AC9DF322901BFDE05193CB177B (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* __this, Exception_t* ___exception0, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::SetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_SetResult_m008490FDF057D5F5D871F537C7A58BE36027F3DC (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* __this, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.OpenXR.OpenXRCameraSettings/<EnableIfLoaderBecomesActive>d__7::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CEnableIfLoaderBecomesActiveU3Ed__7_MoveNext_mF9949531800666AB5965809D30250F7AEFFCEB5E (U3CEnableIfLoaderBecomesActiveU3Ed__7_t55A622F0A215D46947C9F623BA27D2844AC94BA9* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_SetStateMachine_m48640FB81C34D4C2B5A5BBA7F5AE17DC50BF1A25 (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.OpenXR.OpenXRCameraSettings/<EnableIfLoaderBecomesActive>d__7::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CEnableIfLoaderBecomesActiveU3Ed__7_SetStateMachine_m0C3E3383A1AE9AA2201D2BF4E2F1864ABF104B97 (U3CEnableIfLoaderBecomesActiveU3Ed__7_t55A622F0A215D46947C9F623BA27D2844AC94BA9* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.CameraSystem.BaseCameraSettingsProfile::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseCameraSettingsProfile__ctor_m1A7C4C1E005080B92C890C41B6130A70836E0EE8 (BaseCameraSettingsProfile_tDB8373232611B34628752DF4D284B938CFE32799* __this, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.Input.XRSDKDeviceManager::.ctor(Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem,System.String,System.UInt32,Microsoft.MixedReality.Toolkit.BaseMixedRealityProfile)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRSDKDeviceManager__ctor_m73C5A7C887DB58328810E99A4D9C120D5F17B1D3 (XRSDKDeviceManager_t9F5B097AEC5AA187C3083AE6F40B34E00E1BA583* __this, RuntimeObject* ___inputSystem0, String_t* ___name1, uint32_t ___priority2, BaseMixedRealityProfile_tB4FDEF58FFD17796C0DB7241630B71CDF38FA1D4* ___profile3, const RuntimeMethod* method) ;
// System.Nullable`1<System.Boolean> Microsoft.MixedReality.Toolkit.XRSDK.OpenXR.OpenXRDeviceManager::get_IsActiveLoader()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 OpenXRDeviceManager_get_IsActiveLoader_mD67CD8F7C978F23E5A0DB3B042B55A72624A3B25 (OpenXRDeviceManager_t0C31243398BC0C715BF745D6F2C7AA501C3DDA9A* __this, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.OpenXR.OpenXRDeviceManager::EnableIfLoaderBecomesActive()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OpenXRDeviceManager_EnableIfLoaderBecomesActive_mF7CF41EDF8D857E28A6122A9E9097F17AC664837 (OpenXRDeviceManager_t0C31243398BC0C715BF745D6F2C7AA501C3DDA9A* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::Start<Microsoft.MixedReality.Toolkit.XRSDK.OpenXR.OpenXRDeviceManager/<EnableIfLoaderBecomesActive>d__4>(TStateMachine&)
inline void AsyncVoidMethodBuilder_Start_TisU3CEnableIfLoaderBecomesActiveU3Ed__4_tBEE69E1D11D867DAE899E661B1399BB7FE0463FD_m26D778C7FB9AA545044BDE3F941F10A60279F857 (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* __this, U3CEnableIfLoaderBecomesActiveU3Ed__4_tBEE69E1D11D867DAE899E661B1399BB7FE0463FD* ___stateMachine0, const RuntimeMethod* method)
{
	((  void (*) (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D*, U3CEnableIfLoaderBecomesActiveU3Ed__4_tBEE69E1D11D867DAE899E661B1399BB7FE0463FD*, const RuntimeMethod*))AsyncVoidMethodBuilder_Start_TisU3CEnableIfLoaderBecomesActiveU3Ed__4_tBEE69E1D11D867DAE899E661B1399BB7FE0463FD_m26D778C7FB9AA545044BDE3F941F10A60279F857_gshared)(__this, ___stateMachine0, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.XR.InputDevice,Microsoft.MixedReality.Toolkit.XRSDK.Input.GenericXRSDKController>::ContainsKey(TKey)
inline bool Dictionary_2_ContainsKey_m49678D0E11E60CE005DD021DECFC686C20B0DA18 (Dictionary_2_t500395CB4236088AFBF004A0D9DD896F9DC12876* __this, InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t500395CB4236088AFBF004A0D9DD896F9DC12876*, InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD, const RuntimeMethod*))Dictionary_2_ContainsKey_mD666285E70258F36167E291D368AF18634778C9A_gshared)(__this, ___key0, method);
}
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<UnityEngine.XR.InputDevice,Microsoft.MixedReality.Toolkit.XRSDK.Input.GenericXRSDKController>::get_Keys()
inline KeyCollection_tAC459CF1D9D2C68BB347E1A1EF4519DCC3DD58A1* Dictionary_2_get_Keys_m6BA54FEB7A1DC9F37530EE530E783428CBA80148 (Dictionary_2_t500395CB4236088AFBF004A0D9DD896F9DC12876* __this, const RuntimeMethod* method)
{
	return ((  KeyCollection_tAC459CF1D9D2C68BB347E1A1EF4519DCC3DD58A1* (*) (Dictionary_2_t500395CB4236088AFBF004A0D9DD896F9DC12876*, const RuntimeMethod*))Dictionary_2_get_Keys_mA8B83B933EAC0980074153B13C8695B650295FF9_gshared)(__this, method);
}
// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/KeyCollection<UnityEngine.XR.InputDevice,Microsoft.MixedReality.Toolkit.XRSDK.Input.GenericXRSDKController>::GetEnumerator()
inline Enumerator_t361AB300DC1B3465BE162090AA60CFC65CF822CB KeyCollection_GetEnumerator_m03E5076D095402E679C6DB5D11948821578C48A2 (KeyCollection_tAC459CF1D9D2C68BB347E1A1EF4519DCC3DD58A1* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t361AB300DC1B3465BE162090AA60CFC65CF822CB (*) (KeyCollection_tAC459CF1D9D2C68BB347E1A1EF4519DCC3DD58A1*, const RuntimeMethod*))KeyCollection_GetEnumerator_m137B9EBA182D25AE139F57920AE127FD480C78B0_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<UnityEngine.XR.InputDevice,Microsoft.MixedReality.Toolkit.XRSDK.Input.GenericXRSDKController>::Dispose()
inline void Enumerator_Dispose_m044BA768636CFC26F6615FB333B42A7DF8C6F3ED (Enumerator_t361AB300DC1B3465BE162090AA60CFC65CF822CB* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t361AB300DC1B3465BE162090AA60CFC65CF822CB*, const RuntimeMethod*))Enumerator_Dispose_m69DC23D472B9869709595C26F77FE90CBDE4371B_gshared)(__this, method);
}
// TKey System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<UnityEngine.XR.InputDevice,Microsoft.MixedReality.Toolkit.XRSDK.Input.GenericXRSDKController>::get_Current()
inline InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD Enumerator_get_Current_m923A8C26E9A3F06386C1E59016BC27BDFCC50AF3_inline (Enumerator_t361AB300DC1B3465BE162090AA60CFC65CF822CB* __this, const RuntimeMethod* method)
{
	return ((  InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD (*) (Enumerator_t361AB300DC1B3465BE162090AA60CFC65CF822CB*, const RuntimeMethod*))Enumerator_get_Current_mA273BA593E927E11AB13038A0951F0BA23BE9218_gshared_inline)(__this, method);
}
// UnityEngine.XR.InputDeviceCharacteristics UnityEngine.XR.InputDevice::get_characteristics()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t InputDevice_get_characteristics_mEEDC9AB2254C155C47B48848FECF347A87925ADB (InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* __this, const RuntimeMethod* method) ;
// System.Boolean Microsoft.MixedReality.Toolkit.XRSDK.FlagsExtensions::IsMaskSet(UnityEngine.XR.InputDeviceCharacteristics,UnityEngine.XR.InputDeviceCharacteristics)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FlagsExtensions_IsMaskSet_mBBB9BEF18A073269AF4EF9EEFF109D11DAB2ED3A (uint32_t ___a0, uint32_t ___b1, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.Dictionary`2<UnityEngine.XR.InputDevice,Microsoft.MixedReality.Toolkit.XRSDK.Input.GenericXRSDKController>::get_Item(TKey)
inline GenericXRSDKController_tB5136D037E3BD7D743A519016EA2710F7ED980DE* Dictionary_2_get_Item_m5CC2CE4AA8CC3E60E913BE28E235D43F6FE6E7CD (Dictionary_2_t500395CB4236088AFBF004A0D9DD896F9DC12876* __this, InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD ___key0, const RuntimeMethod* method)
{
	return ((  GenericXRSDKController_tB5136D037E3BD7D743A519016EA2710F7ED980DE* (*) (Dictionary_2_t500395CB4236088AFBF004A0D9DD896F9DC12876*, InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD, const RuntimeMethod*))Dictionary_2_get_Item_mB74E30370773A3CE297583FC6F4F80C31F388CE1_gshared)(__this, ___key0, method);
}
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.XR.InputDevice,Microsoft.MixedReality.Toolkit.XRSDK.Input.GenericXRSDKController>::Add(TKey,TValue)
inline void Dictionary_2_Add_m59F621E299B2B5A5E0B1C56AF791A0394BF6479E (Dictionary_2_t500395CB4236088AFBF004A0D9DD896F9DC12876* __this, InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD ___key0, GenericXRSDKController_tB5136D037E3BD7D743A519016EA2710F7ED980DE* ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t500395CB4236088AFBF004A0D9DD896F9DC12876*, InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD, GenericXRSDKController_tB5136D037E3BD7D743A519016EA2710F7ED980DE*, const RuntimeMethod*))Dictionary_2_Add_m5F088D56D3C169743DC181479281FC3B83961F0A_gshared)(__this, ___key0, ___value1, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<UnityEngine.XR.InputDevice,Microsoft.MixedReality.Toolkit.XRSDK.Input.GenericXRSDKController>::MoveNext()
inline bool Enumerator_MoveNext_mAF547A63238FF65774DE78693B8B79270BF61D80 (Enumerator_t361AB300DC1B3465BE162090AA60CFC65CF822CB* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t361AB300DC1B3465BE162090AA60CFC65CF822CB*, const RuntimeMethod*))Enumerator_MoveNext_mDE562F1AF34A12456B61CE081BA2788D71640502_gshared)(__this, method);
}
// Microsoft.MixedReality.Toolkit.XRSDK.Input.GenericXRSDKController Microsoft.MixedReality.Toolkit.XRSDK.Input.XRSDKDeviceManager::GetOrAddController(UnityEngine.XR.InputDevice)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GenericXRSDKController_tB5136D037E3BD7D743A519016EA2710F7ED980DE* XRSDKDeviceManager_GetOrAddController_mDEC99430B4E2E3873F5A94475EAC519587667C7D (XRSDKDeviceManager_t9F5B097AEC5AA187C3083AE6F40B34E00E1BA583* __this, InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD ___inputDevice0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.XR.InputDevice::op_Inequality(UnityEngine.XR.InputDevice,UnityEngine.XR.InputDevice)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InputDevice_op_Inequality_m941C10D2987FCEFDB4FA37B74C2652C917685772 (InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD ___a0, InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD ___b1, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.XR.InputDevice,Microsoft.MixedReality.Toolkit.XRSDK.Input.GenericXRSDKController>::Remove(TKey)
inline bool Dictionary_2_Remove_m3FE21AD019B8AD4E0049631DC383A26CD5F61953 (Dictionary_2_t500395CB4236088AFBF004A0D9DD896F9DC12876* __this, InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t500395CB4236088AFBF004A0D9DD896F9DC12876*, InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD, const RuntimeMethod*))Dictionary_2_Remove_mD1E79CEA754A383395519C9B291D9D6C354CEF75_gshared)(__this, ___key0, method);
}
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.Input.XRSDKDeviceManager::RemoveController(UnityEngine.XR.InputDevice)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRSDKDeviceManager_RemoveController_m453AC0046F3CB13E1BE83734FD811E8D3CF7F5D4 (XRSDKDeviceManager_t9F5B097AEC5AA187C3083AE6F40B34E00E1BA583* __this, InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD ___inputDevice0, const RuntimeMethod* method) ;
// System.Type Microsoft.MixedReality.Toolkit.XRSDK.Input.XRSDKDeviceManager::GetControllerType(Microsoft.MixedReality.Toolkit.Input.SupportedControllerType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* XRSDKDeviceManager_GetControllerType_m522C09C1EB697825B1887F9313F33EE9DCF300E5 (XRSDKDeviceManager_t9F5B097AEC5AA187C3083AE6F40B34E00E1BA583* __this, int32_t ___supportedControllerType0, const RuntimeMethod* method) ;
// Microsoft.MixedReality.Toolkit.Input.InputSourceType Microsoft.MixedReality.Toolkit.XRSDK.Input.XRSDKDeviceManager::GetInputSourceType(Microsoft.MixedReality.Toolkit.Input.SupportedControllerType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XRSDKDeviceManager_GetInputSourceType_mBD2B9E852A29A0C49665A7BCA47EF9E3E0E26462 (XRSDKDeviceManager_t9F5B097AEC5AA187C3083AE6F40B34E00E1BA583* __this, int32_t ___supportedControllerType0, const RuntimeMethod* method) ;
// System.String UnityEngine.XR.InputDevice::get_manufacturer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* InputDevice_get_manufacturer_mABBD3690895EC6A8FE86094CCFA4E0B081C102BB (InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* __this, const RuntimeMethod* method) ;
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0 (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method) ;
// Microsoft.MixedReality.Toolkit.Input.SupportedControllerType Microsoft.MixedReality.Toolkit.XRSDK.Input.XRSDKDeviceManager::GetCurrentControllerType(UnityEngine.XR.InputDevice)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XRSDKDeviceManager_GetCurrentControllerType_m6AD3B233744B9393C4C8A0AE3D2E6706C627750B (XRSDKDeviceManager_t9F5B097AEC5AA187C3083AE6F40B34E00E1BA583* __this, InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD ___inputDevice0, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::AwaitOnCompleted<Microsoft.MixedReality.Toolkit.Utilities.AwaiterExtensions/SimpleCoroutineAwaiter,Microsoft.MixedReality.Toolkit.XRSDK.OpenXR.OpenXRDeviceManager/<EnableIfLoaderBecomesActive>d__4>(TAwaiter&,TStateMachine&)
inline void AsyncVoidMethodBuilder_AwaitOnCompleted_TisSimpleCoroutineAwaiter_t9DF0277C21C7F3B9CE7C9563D257D9A4821B4898_TisU3CEnableIfLoaderBecomesActiveU3Ed__4_tBEE69E1D11D867DAE899E661B1399BB7FE0463FD_m0941B9D040B923615844B60D20C56DB6DED99DB5 (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* __this, SimpleCoroutineAwaiter_t9DF0277C21C7F3B9CE7C9563D257D9A4821B4898** ___awaiter0, U3CEnableIfLoaderBecomesActiveU3Ed__4_tBEE69E1D11D867DAE899E661B1399BB7FE0463FD* ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D*, SimpleCoroutineAwaiter_t9DF0277C21C7F3B9CE7C9563D257D9A4821B4898**, U3CEnableIfLoaderBecomesActiveU3Ed__4_tBEE69E1D11D867DAE899E661B1399BB7FE0463FD*, const RuntimeMethod*))AsyncVoidMethodBuilder_AwaitOnCompleted_TisRuntimeObject_TisU3CEnableIfLoaderBecomesActiveU3Ed__4_tBEE69E1D11D867DAE899E661B1399BB7FE0463FD_mF6687CBCD133ED9008999A2DDC013208BCC793F6_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.OpenXR.OpenXRDeviceManager/<EnableIfLoaderBecomesActive>d__4::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CEnableIfLoaderBecomesActiveU3Ed__4_MoveNext_m473E1042A82E1DD0297DC60F95C108B6388B05A1 (U3CEnableIfLoaderBecomesActiveU3Ed__4_tBEE69E1D11D867DAE899E661B1399BB7FE0463FD* __this, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.OpenXR.OpenXRDeviceManager/<EnableIfLoaderBecomesActive>d__4::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CEnableIfLoaderBecomesActiveU3Ed__4_SetStateMachine_mBD34502FCDAC819B9CAAFA2601179CEA0EAC976F (U3CEnableIfLoaderBecomesActiveU3Ed__4_tBEE69E1D11D867DAE899E661B1399BB7FE0463FD* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.Input.BaseInputDeviceManager::.ctor(Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem,System.String,System.UInt32,Microsoft.MixedReality.Toolkit.BaseMixedRealityProfile)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseInputDeviceManager__ctor_m55B7F2B3368B9234F956C7D94273E8CA0DBC15EC (BaseInputDeviceManager_t1D055DB03D88FA053C00671FEA5040B944CC26BC* __this, RuntimeObject* ___inputSystem0, String_t* ___name1, uint32_t ___priority2, BaseMixedRealityProfile_tB4FDEF58FFD17796C0DB7241630B71CDF38FA1D4* ___profile3, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.Utilities.EyeGazeSmoother::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EyeGazeSmoother__ctor_mAF18EF31C887004D45BAAA9BA4D4D0CAE534E802 (EyeGazeSmoother_t694634D7A1E87E3409EB4E378F76454732CA1698* __this, const RuntimeMethod* method) ;
// System.Void System.Action::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.Utilities.EyeGazeSmoother::add_OnSaccade(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EyeGazeSmoother_add_OnSaccade_m0AC3F02987BA3F38D2C09EDFFF6ED86140D767E2 (EyeGazeSmoother_t694634D7A1E87E3409EB4E378F76454732CA1698* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___value0, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.Utilities.EyeGazeSmoother::add_OnSaccadeX(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EyeGazeSmoother_add_OnSaccadeX_mA526BED31648C7527D080B3EDB6706B9B6D30452 (EyeGazeSmoother_t694634D7A1E87E3409EB4E378F76454732CA1698* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___value0, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.Utilities.EyeGazeSmoother::add_OnSaccadeY(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EyeGazeSmoother_add_OnSaccadeY_m4E6B6F951D40DC1FA4F81BF7269EA7EF6044BB9D (EyeGazeSmoother_t694634D7A1E87E3409EB4E378F76454732CA1698* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___value0, const RuntimeMethod* method) ;
// System.Delegate System.Delegate::Combine(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Combine_m8B9D24CED35033C7FC56501DFE650F5CB7FF012C (Delegate_t* ___a0, Delegate_t* ___b1, const RuntimeMethod* method) ;
// System.Delegate System.Delegate::Remove(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Remove_m40506877934EC1AD4ADAE57F5E97AF0BC0F96116 (Delegate_t* ___source0, Delegate_t* ___value1, const RuntimeMethod* method) ;
// System.Void System.Action::Invoke()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.XR.InputDevice::get_isValid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InputDevice_get_isValid_mA908CF8195CECA44FF457430AFF9198C3FEC0948 (InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Application::get_isPlaying()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Application_get_isPlaying_m0B3B501E1093739F8887A0DAC5F61D9CB49CC337 (const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.OpenXR.OpenXREyeGazeDataProvider::ReadProfile()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OpenXREyeGazeDataProvider_ReadProfile_m8AA4E49E2A18B1CD4AC1511B3F31C1294846437A (OpenXREyeGazeDataProvider_t25F551318CABD265458042E84D190BF28F66A55F* __this, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.Input.BaseInputDeviceManager::Initialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseInputDeviceManager_Initialize_m0FCF7D20EB201C9BAC011D2DA67361676BF7294F (BaseInputDeviceManager_t1D055DB03D88FA053C00671FEA5040B944CC26BC* __this, const RuntimeMethod* method) ;
// System.Nullable`1<System.Boolean> Microsoft.MixedReality.Toolkit.XRSDK.OpenXR.OpenXREyeGazeDataProvider::get_IsActiveLoader()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 OpenXREyeGazeDataProvider_get_IsActiveLoader_mC7F22199690AE773DA8D978E5A40EEEE0D309E0C (OpenXREyeGazeDataProvider_t25F551318CABD265458042E84D190BF28F66A55F* __this, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.OpenXR.OpenXREyeGazeDataProvider::EnableIfLoaderBecomesActive()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OpenXREyeGazeDataProvider_EnableIfLoaderBecomesActive_m2FB6D7FA20DBB8251FFE33D60DABCD1F5AA1C3D7 (OpenXREyeGazeDataProvider_t25F551318CABD265458042E84D190BF28F66A55F* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::Start<Microsoft.MixedReality.Toolkit.XRSDK.OpenXR.OpenXREyeGazeDataProvider/<EnableIfLoaderBecomesActive>d__27>(TStateMachine&)
inline void AsyncVoidMethodBuilder_Start_TisU3CEnableIfLoaderBecomesActiveU3Ed__27_t6E741431DCE784A89F3E72D66000E57BB7966575_m8FDE3FA3806D1146AC02EF98D3F03479DF04D3C1 (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* __this, U3CEnableIfLoaderBecomesActiveU3Ed__27_t6E741431DCE784A89F3E72D66000E57BB7966575* ___stateMachine0, const RuntimeMethod* method)
{
	((  void (*) (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D*, U3CEnableIfLoaderBecomesActiveU3Ed__27_t6E741431DCE784A89F3E72D66000E57BB7966575*, const RuntimeMethod*))AsyncVoidMethodBuilder_Start_TisU3CEnableIfLoaderBecomesActiveU3Ed__27_t6E741431DCE784A89F3E72D66000E57BB7966575_m8FDE3FA3806D1146AC02EF98D3F03479DF04D3C1_gshared)(__this, ___stateMachine0, method);
}
// System.Boolean Microsoft.MixedReality.Toolkit.Input.MixedRealityEyeTrackingProfile::get_SmoothEyeTracking()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool MixedRealityEyeTrackingProfile_get_SmoothEyeTracking_mA573E1715A6366BB4B07E62F5A35D74F142611C4_inline (MixedRealityEyeTrackingProfile_tC934F1DEA6C01B8F9F282E6AE7987E7CD874411B* __this, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.OpenXR.OpenXREyeGazeDataProvider::set_SmoothEyeTracking(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OpenXREyeGazeDataProvider_set_SmoothEyeTracking_mF45788340BD1A481C0C6AD98E149FDC891D81458_inline (OpenXREyeGazeDataProvider_t25F551318CABD265458042E84D190BF28F66A55F* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.InputDevices::GetDevicesWithCharacteristics(UnityEngine.XR.InputDeviceCharacteristics,System.Collections.Generic.List`1<UnityEngine.XR.InputDevice>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputDevices_GetDevicesWithCharacteristics_m2F1785592FF66FB69D72FFE1C1B821D4BD64094A (uint32_t ___desiredCharacteristics0, List_1_tB66D13E0427CA48C600AEA4DBA5B173C3734C6CE* ___inputDevices1, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<UnityEngine.XR.InputDevice>::get_Count()
inline int32_t List_1_get_Count_m9C3EC7FE1A9401268B3C9761A4D96A37197AD0E7_inline (List_1_tB66D13E0427CA48C600AEA4DBA5B173C3734C6CE* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tB66D13E0427CA48C600AEA4DBA5B173C3734C6CE*, const RuntimeMethod*))List_1_get_Count_m9C3EC7FE1A9401268B3C9761A4D96A37197AD0E7_gshared_inline)(__this, method);
}
// T System.Collections.Generic.List`1<UnityEngine.XR.InputDevice>::get_Item(System.Int32)
inline InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD List_1_get_Item_mB0ED54544433CE428ACEC0FE2E6FEE53E11EE6D2 (List_1_tB66D13E0427CA48C600AEA4DBA5B173C3734C6CE* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD (*) (List_1_tB66D13E0427CA48C600AEA4DBA5B173C3734C6CE*, int32_t, const RuntimeMethod*))List_1_get_Item_mB0ED54544433CE428ACEC0FE2E6FEE53E11EE6D2_gshared)(__this, ___index0, method);
}
// T Microsoft.MixedReality.Toolkit.BaseDataProvider`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem>::get_Service()
inline RuntimeObject* BaseDataProvider_1_get_Service_m886AE537D966101848DD8F8D348F366C71253B3B_inline (BaseDataProvider_1_t1C7B9F1707FEB27659F53B230E0A18282D2F7F20* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (BaseDataProvider_1_t1C7B9F1707FEB27659F53B230E0A18282D2F7F20*, const RuntimeMethod*))BaseDataProvider_1_get_Service_m9D57380441608DEC9ABF2199EA5585FC967E038F_gshared_inline)(__this, method);
}
// UnityEngine.Vector3 UnityEngine.Vector3::get_forward()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_forward_mEBAB24D77FC02FC88ED880738C3B1D47C758B3EB_inline (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Quaternion::op_Multiply(UnityEngine.Quaternion,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Quaternion_op_Multiply_mF1348668A6CCD46FBFF98D39182F89358ED74AC0 (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___point1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.MixedRealityPlayspace::TransformDirection(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 MixedRealityPlayspace_TransformDirection_mEE323CCE16A8F9DC22A952BF02EA768F8348E772 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___localDirection0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Ray::.ctor(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ray__ctor_mE298992FD10A3894C38373198385F345C58BD64C (Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___origin0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___direction1, const RuntimeMethod* method) ;
// System.Boolean Microsoft.MixedReality.Toolkit.XRSDK.OpenXR.OpenXREyeGazeDataProvider::get_SmoothEyeTracking()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool OpenXREyeGazeDataProvider_get_SmoothEyeTracking_m2D09B00C53489A1EED38805CA488A2AA929470C9_inline (OpenXREyeGazeDataProvider_t25F551318CABD265458042E84D190BF28F66A55F* __this, const RuntimeMethod* method) ;
// UnityEngine.Ray Microsoft.MixedReality.Toolkit.Utilities.EyeGazeSmoother::SmoothGaze(UnityEngine.Ray)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 EyeGazeSmoother_SmoothGaze_mB040093FDC74594A3B8633133437D57EC02A7B3C (EyeGazeSmoother_t694634D7A1E87E3409EB4E378F76454732CA1698* __this, Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 ___newGaze0, const RuntimeMethod* method) ;
// System.DateTime System.DateTime::get_UtcNow()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D DateTime_get_UtcNow_m5D776FFEBC81592B361E4C7AF373297C5DFB46FD (const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.XR.InputDevice>::.ctor()
inline void List_1__ctor_mF7ACC153F11A3260DAACDCA56B0A70A4BFA61EA4 (List_1_tB66D13E0427CA48C600AEA4DBA5B173C3734C6CE* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tB66D13E0427CA48C600AEA4DBA5B173C3734C6CE*, const RuntimeMethod*))List_1__ctor_mF7ACC153F11A3260DAACDCA56B0A70A4BFA61EA4_gshared)(__this, method);
}
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::AwaitOnCompleted<Microsoft.MixedReality.Toolkit.Utilities.AwaiterExtensions/SimpleCoroutineAwaiter,Microsoft.MixedReality.Toolkit.XRSDK.OpenXR.OpenXREyeGazeDataProvider/<EnableIfLoaderBecomesActive>d__27>(TAwaiter&,TStateMachine&)
inline void AsyncVoidMethodBuilder_AwaitOnCompleted_TisSimpleCoroutineAwaiter_t9DF0277C21C7F3B9CE7C9563D257D9A4821B4898_TisU3CEnableIfLoaderBecomesActiveU3Ed__27_t6E741431DCE784A89F3E72D66000E57BB7966575_mA1970863B1EFA1AFDFE10E5A5DE792C1075A9B38 (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* __this, SimpleCoroutineAwaiter_t9DF0277C21C7F3B9CE7C9563D257D9A4821B4898** ___awaiter0, U3CEnableIfLoaderBecomesActiveU3Ed__27_t6E741431DCE784A89F3E72D66000E57BB7966575* ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D*, SimpleCoroutineAwaiter_t9DF0277C21C7F3B9CE7C9563D257D9A4821B4898**, U3CEnableIfLoaderBecomesActiveU3Ed__27_t6E741431DCE784A89F3E72D66000E57BB7966575*, const RuntimeMethod*))AsyncVoidMethodBuilder_AwaitOnCompleted_TisRuntimeObject_TisU3CEnableIfLoaderBecomesActiveU3Ed__27_t6E741431DCE784A89F3E72D66000E57BB7966575_mC6747657C8645E35647814EF68C7813E972D8670_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.OpenXR.OpenXREyeGazeDataProvider/<EnableIfLoaderBecomesActive>d__27::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CEnableIfLoaderBecomesActiveU3Ed__27_MoveNext_mC36F3FC5F5BB85D0393C3F5FDADC4A86564BAFA8 (U3CEnableIfLoaderBecomesActiveU3Ed__27_t6E741431DCE784A89F3E72D66000E57BB7966575* __this, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.OpenXR.OpenXREyeGazeDataProvider/<EnableIfLoaderBecomesActive>d__27::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CEnableIfLoaderBecomesActiveU3Ed__27_SetStateMachine_mE3F6765B397D256B26DAE9F865FA65990E84423C (U3CEnableIfLoaderBecomesActiveU3Ed__27_t6E741431DCE784A89F3E72D66000E57BB7966575* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver::.ctor(Microsoft.MixedReality.Toolkit.SpatialAwareness.IMixedRealitySpatialAwarenessSystem,System.String,System.UInt32,Microsoft.MixedReality.Toolkit.BaseMixedRealityProfile)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GenericXRSDKSpatialMeshObserver__ctor_m15C1672A0A9458D66CD08CFC2F19534D891CE799 (GenericXRSDKSpatialMeshObserver_t992F3640352E29648369A4DE1DDAC0FFB6EAC6D1* __this, RuntimeObject* ___spatialAwarenessSystem0, String_t* ___name1, uint32_t ___priority2, BaseMixedRealityProfile_tB4FDEF58FFD17796C0DB7241630B71CDF38FA1D4* ___profile3, const RuntimeMethod* method) ;
// System.Void System.Nullable`1<System.Boolean>::.ctor(T)
inline void Nullable_1__ctor_m4FAA8281CB4EFFD8B817734351FB3AC20A0CD6F5 (Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01* __this, bool ___value0, const RuntimeMethod* method)
{
	((  void (*) (Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01*, bool, const RuntimeMethod*))Nullable_1__ctor_m4FAA8281CB4EFFD8B817734351FB3AC20A0CD6F5_gshared)(__this, ___value0, method);
}
// System.Void Unity.Profiling.ProfilerMarker/AutoScope::.ctor(System.IntPtr)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AutoScope__ctor_m7F63A273E382CB6328736B6E7F321DDFA40EA9E3_inline (AutoScope_tFB983697E28885CB10FFDB92D7EFD0615AEF3139* __this, intptr_t ___markerPtr0, const RuntimeMethod* method) ;
// System.Void Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility::EndSample(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProfilerUnsafeUtility_EndSample_mE2F7A0DB4C52105F7CD135ED8816A2BB98E663CC (intptr_t ___markerPtr0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Quaternion::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Quaternion__ctor_m868FD60AA65DD5A8AC0C5DEB0608381A8D85FCD8_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* __this, float ___x0, float ___y1, float ___z2, float ___w3, const RuntimeMethod* method) ;
// System.IntPtr Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility::CreateMarker(System.String,System.UInt16,Unity.Profiling.LowLevel.MarkerFlags,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t ProfilerUnsafeUtility_CreateMarker_m27DDE00D41B95677982DBFCE074D45B79E50C7CC (String_t* ___name0, uint16_t ___categoryId1, uint16_t ___flags2, int32_t ___metadataCount3, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Max(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Max_mA9DCA91E87D6D27034F56ABA52606A9090406016_inline (float ___a0, float ___b1, const RuntimeMethod* method) ;
// System.Void Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility::BeginSample(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProfilerUnsafeUtility_BeginSample_m1C6D6ED1C8E0CB2FD0934EB6EA333276F67C14F6 (intptr_t ___markerPtr0, const RuntimeMethod* method) ;
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
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.OpenXR.HPReverbG2Controller::.ctor(Microsoft.MixedReality.Toolkit.TrackingState,Microsoft.MixedReality.Toolkit.Utilities.Handedness,Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource,Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HPReverbG2Controller__ctor_m37C8DF4F046AB0CD1C9206A0A43E6454995AF4A5 (HPReverbG2Controller_tC92BB9012B3B951EDF062F795D81AB05B8F8BCAB* __this, int32_t ___trackingState0, uint8_t ___controllerHandedness1, RuntimeObject* ___inputSource2, MixedRealityInteractionMappingU5BU5D_t689ED6694F3B293DEDEA6D5371268D36DC67AACE* ___interactions3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GenericXRSDKController_tB5136D037E3BD7D743A519016EA2710F7ED980DE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HPMotionControllerDefinition_t5475B48AB19D09044334A500FD1D1F9616AA2E7F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MixedRealityPose_tE60115C271AC50B8C11BA3B404BFCA99C7B2EFF5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private Vector3 currentPointerPosition = Vector3.zero;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		L_0 = Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline(NULL);
		__this->___currentPointerPosition_24 = L_0;
		// private Quaternion currentPointerRotation = Quaternion.identity;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_1;
		L_1 = Quaternion_get_identity_mB9CAEEB21BC81352CBF32DB9664BFC06FA7EA27B_inline(NULL);
		__this->___currentPointerRotation_25 = L_1;
		// private MixedRealityPose currentPointerPose = MixedRealityPose.ZeroIdentity;
		il2cpp_codegen_runtime_class_init_inline(MixedRealityPose_tE60115C271AC50B8C11BA3B404BFCA99C7B2EFF5_il2cpp_TypeInfo_var);
		MixedRealityPose_tE60115C271AC50B8C11BA3B404BFCA99C7B2EFF5 L_2;
		L_2 = MixedRealityPose_get_ZeroIdentity_m163137A55AEF8C8B0163D1F76197C5CCEDD943AD_inline(NULL);
		__this->___currentPointerPose_26 = L_2;
		// : base(trackingState, controllerHandedness, inputSource, interactions, new HPMotionControllerDefinition(controllerHandedness))
		int32_t L_3 = ___trackingState0;
		uint8_t L_4 = ___controllerHandedness1;
		RuntimeObject* L_5 = ___inputSource2;
		MixedRealityInteractionMappingU5BU5D_t689ED6694F3B293DEDEA6D5371268D36DC67AACE* L_6 = ___interactions3;
		uint8_t L_7 = ___controllerHandedness1;
		HPMotionControllerDefinition_t5475B48AB19D09044334A500FD1D1F9616AA2E7F* L_8 = (HPMotionControllerDefinition_t5475B48AB19D09044334A500FD1D1F9616AA2E7F*)il2cpp_codegen_object_new(HPMotionControllerDefinition_t5475B48AB19D09044334A500FD1D1F9616AA2E7F_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		HPMotionControllerDefinition__ctor_mB272C4840D6F1DEF5644119EC6226AB0FF83D09B(L_8, L_7, NULL);
		il2cpp_codegen_runtime_class_init_inline(GenericXRSDKController_tB5136D037E3BD7D743A519016EA2710F7ED980DE_il2cpp_TypeInfo_var);
		GenericXRSDKController__ctor_m2DDE7A2D1AAB218E2B62049681DE0D6B03FFD2C1(__this, L_3, L_4, L_5, L_6, L_8, NULL);
		// { }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.OpenXR.HPReverbG2Controller::UpdatePoseData(Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping,UnityEngine.XR.InputDevice)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HPReverbG2Controller_UpdatePoseData_m59CCAEDDC04E03E75542F6F5D4DE703B53796ED1 (HPReverbG2Controller_tC92BB9012B3B951EDF062F795D81AB05B8F8BCAB* __this, MixedRealityInteractionMapping_t10DB776EEA5255542F8F4AF0DC0BC566AF0095E0* ___interactionMapping0, InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD ___inputDevice1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CoreServices_tCB1FB80E338B89BCA07C52C15B876BC6D4B3439B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CustomUsages_t07BAB05B93FBB1D80AAD710042445ED8DDE3A476_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HPReverbG2Controller_tC92BB9012B3B951EDF062F795D81AB05B8F8BCAB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealityInputSystem_t73D9E8D52E761DF1CC230411D0EFD51104FF68B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	AutoScope_tFB983697E28885CB10FFDB92D7EFD0615AEF3139 V_0;
	memset((&V_0), 0, sizeof(V_0));
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD V_1;
	memset((&V_1), 0, sizeof(V_1));
	RuntimeObject* G_B9_0 = NULL;
	RuntimeObject* G_B8_0 = NULL;
	{
		// using (UpdatePoseDataPerfMarker.Auto())
		il2cpp_codegen_runtime_class_init_inline(HPReverbG2Controller_tC92BB9012B3B951EDF062F795D81AB05B8F8BCAB_il2cpp_TypeInfo_var);
		ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD L_0 = ((HPReverbG2Controller_tC92BB9012B3B951EDF062F795D81AB05B8F8BCAB_StaticFields*)il2cpp_codegen_static_fields_for(HPReverbG2Controller_tC92BB9012B3B951EDF062F795D81AB05B8F8BCAB_il2cpp_TypeInfo_var))->___UpdatePoseDataPerfMarker_27;
		V_1 = L_0;
		AutoScope_tFB983697E28885CB10FFDB92D7EFD0615AEF3139 L_1;
		L_1 = ProfilerMarker_Auto_m133FA724EB95D16187B37D2C8A501D7E989B1F8D_inline((&V_1), NULL);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00bb:
			{// begin finally (depth: 1)
				AutoScope_Dispose_mED763F3F51261EF8FB79DB32CD06E0A3F6C40481_inline((&V_0), NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				// switch (interactionMapping.InputType)
				MixedRealityInteractionMapping_t10DB776EEA5255542F8F4AF0DC0BC566AF0095E0* L_2 = ___interactionMapping0;
				NullCheck(L_2);
				int32_t L_3;
				L_3 = MixedRealityInteractionMapping_get_InputType_m431C40AD5149D4817FAA46DC0326A481FE348C8D_inline(L_2, NULL);
				if ((!(((uint32_t)L_3) == ((uint32_t)3))))
				{
					goto IL_00b1_1;
				}
			}
			{
				// if (inputDevice.TryGetFeatureValue(CustomUsages.PointerPosition, out currentPointerPosition))
				il2cpp_codegen_runtime_class_init_inline(CustomUsages_t07BAB05B93FBB1D80AAD710042445ED8DDE3A476_il2cpp_TypeInfo_var);
				InputFeatureUsage_1_t2E901FA41650EB29399194768CAA93D477CEBC58 L_4 = ((CustomUsages_t07BAB05B93FBB1D80AAD710042445ED8DDE3A476_StaticFields*)il2cpp_codegen_static_fields_for(CustomUsages_t07BAB05B93FBB1D80AAD710042445ED8DDE3A476_il2cpp_TypeInfo_var))->___PointerPosition_0;
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_5 = (&__this->___currentPointerPosition_24);
				bool L_6;
				L_6 = InputDevice_TryGetFeatureValue_m472B5ECE996FB7440CACCF1E85722DA4963E3167((&___inputDevice1), L_4, L_5, NULL);
				if (!L_6)
				{
					goto IL_0044_1;
				}
			}
			{
				// currentPointerPose.Position = MixedRealityPlayspace.TransformPoint(currentPointerPosition);
				MixedRealityPose_tE60115C271AC50B8C11BA3B404BFCA99C7B2EFF5* L_7 = (&__this->___currentPointerPose_26);
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = __this->___currentPointerPosition_24;
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
				L_9 = MixedRealityPlayspace_TransformPoint_mF0F8AA899D9BBBA99FC4EBD1B8730F4174D15314(L_8, NULL);
				MixedRealityPose_set_Position_m9806379126B288614A363F39705935CA0D86888C_inline(L_7, L_9, NULL);
			}

IL_0044_1:
			{
				// if (inputDevice.TryGetFeatureValue(CustomUsages.PointerRotation, out currentPointerRotation))
				il2cpp_codegen_runtime_class_init_inline(CustomUsages_t07BAB05B93FBB1D80AAD710042445ED8DDE3A476_il2cpp_TypeInfo_var);
				InputFeatureUsage_1_t8489CEC68B1EC178F2634079A9D7CD9E90D3CF5D L_10 = ((CustomUsages_t07BAB05B93FBB1D80AAD710042445ED8DDE3A476_StaticFields*)il2cpp_codegen_static_fields_for(CustomUsages_t07BAB05B93FBB1D80AAD710042445ED8DDE3A476_il2cpp_TypeInfo_var))->___PointerRotation_1;
				Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* L_11 = (&__this->___currentPointerRotation_25);
				bool L_12;
				L_12 = InputDevice_TryGetFeatureValue_m0C1A9761DD0D1C6D1EF4BAB2FAF1BC1A9541BB9F((&___inputDevice1), L_10, L_11, NULL);
				if (!L_12)
				{
					goto IL_0073_1;
				}
			}
			{
				// currentPointerPose.Rotation = MixedRealityPlayspace.Rotation * currentPointerRotation;
				MixedRealityPose_tE60115C271AC50B8C11BA3B404BFCA99C7B2EFF5* L_13 = (&__this->___currentPointerPose_26);
				Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_14;
				L_14 = MixedRealityPlayspace_get_Rotation_mB5DCE6258ADE65064084A771A277AD2CDEC98737(NULL);
				Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_15 = __this->___currentPointerRotation_25;
				Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_16;
				L_16 = Quaternion_op_Multiply_m5AC8B39C55015059BDD09122E04E47D4BFAB2276_inline(L_14, L_15, NULL);
				MixedRealityPose_set_Rotation_m090951B4A308155032C377FF0AE6BED025C39868_inline(L_13, L_16, NULL);
			}

IL_0073_1:
			{
				// interactionMapping.PoseData = currentPointerPose;
				MixedRealityInteractionMapping_t10DB776EEA5255542F8F4AF0DC0BC566AF0095E0* L_17 = ___interactionMapping0;
				MixedRealityPose_tE60115C271AC50B8C11BA3B404BFCA99C7B2EFF5 L_18 = __this->___currentPointerPose_26;
				NullCheck(L_17);
				MixedRealityInteractionMapping_set_PoseData_m2AD97DB2F27527268C645A037E7E358A8CDF3A90(L_17, L_18, NULL);
				// if (interactionMapping.Changed)
				MixedRealityInteractionMapping_t10DB776EEA5255542F8F4AF0DC0BC566AF0095E0* L_19 = ___interactionMapping0;
				NullCheck(L_19);
				bool L_20;
				L_20 = MixedRealityInteractionMapping_get_Changed_mC98FFE1F0E915A3F03110D83000E473E7F05BC53(L_19, NULL);
				if (!L_20)
				{
					goto IL_00b9_1;
				}
			}
			{
				// CoreServices.InputSystem?.RaisePoseInputChanged(InputSource, ControllerHandedness, interactionMapping.MixedRealityInputAction, interactionMapping.PoseData);
				il2cpp_codegen_runtime_class_init_inline(CoreServices_tCB1FB80E338B89BCA07C52C15B876BC6D4B3439B_il2cpp_TypeInfo_var);
				RuntimeObject* L_21;
				L_21 = CoreServices_get_InputSystem_m47147418643299159BF4DF408F768844FDC33943(NULL);
				RuntimeObject* L_22 = L_21;
				G_B8_0 = L_22;
				if (L_22)
				{
					G_B9_0 = L_22;
					goto IL_0092_1;
				}
			}
			{
				goto IL_00c9;
			}

IL_0092_1:
			{
				RuntimeObject* L_23;
				L_23 = BaseController_get_InputSource_m8FE11DBDF7B41338ACF8AFF3A0C8FAD83E5D2870_inline(__this, NULL);
				uint8_t L_24;
				L_24 = BaseController_get_ControllerHandedness_m739908CFF885DB452AD9A115F569C455BA46A3A1_inline(__this, NULL);
				MixedRealityInteractionMapping_t10DB776EEA5255542F8F4AF0DC0BC566AF0095E0* L_25 = ___interactionMapping0;
				NullCheck(L_25);
				MixedRealityInputAction_tD3B6E9CE7F20EFC9D066C519FAB848679FC62486 L_26;
				L_26 = MixedRealityInteractionMapping_get_MixedRealityInputAction_mE813B3EBBA0A10F64E34EA6E5001D140D81141E9_inline(L_25, NULL);
				MixedRealityInteractionMapping_t10DB776EEA5255542F8F4AF0DC0BC566AF0095E0* L_27 = ___interactionMapping0;
				NullCheck(L_27);
				MixedRealityPose_tE60115C271AC50B8C11BA3B404BFCA99C7B2EFF5 L_28;
				L_28 = MixedRealityInteractionMapping_get_PoseData_m90E4BA2D7413EC29B85B025AEE96C2F7662427B0_inline(L_27, NULL);
				NullCheck(G_B9_0);
				InterfaceActionInvoker4< RuntimeObject*, uint8_t, MixedRealityInputAction_tD3B6E9CE7F20EFC9D066C519FAB848679FC62486, MixedRealityPose_tE60115C271AC50B8C11BA3B404BFCA99C7B2EFF5 >::Invoke(45 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem::RaisePoseInputChanged(Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource,Microsoft.MixedReality.Toolkit.Utilities.Handedness,Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction,Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose) */, IMixedRealityInputSystem_t73D9E8D52E761DF1CC230411D0EFD51104FF68B2_il2cpp_TypeInfo_var, G_B9_0, L_23, L_24, L_26, L_28);
				// break;
				goto IL_00c9;
			}

IL_00b1_1:
			{
				// base.UpdatePoseData(interactionMapping, inputDevice);
				MixedRealityInteractionMapping_t10DB776EEA5255542F8F4AF0DC0BC566AF0095E0* L_29 = ___interactionMapping0;
				InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD L_30 = ___inputDevice1;
				GenericXRSDKController_UpdatePoseData_mD6B1481BC7BABD3265AA994D47789B80369054C9(__this, L_29, L_30, NULL);
			}

IL_00b9_1:
			{
				// }
				goto IL_00c9;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00c9:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.OpenXR.HPReverbG2Controller::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HPReverbG2Controller__cctor_m69E2E9AB2F9205AE1106F579A03E8F258D1D5628 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HPReverbG2Controller_tC92BB9012B3B951EDF062F795D81AB05B8F8BCAB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE5FA4BC17D3659FB38B6BBA49E9EC577A2E3A449);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static readonly ProfilerMarker UpdatePoseDataPerfMarker = new ProfilerMarker("[MRTK] HPReverbG2Controller.UpdatePoseData");
		ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD L_0;
		memset((&L_0), 0, sizeof(L_0));
		ProfilerMarker__ctor_mDD68B0A8B71E0301F592AF8891560150E55699C8_inline((&L_0), _stringLiteralE5FA4BC17D3659FB38B6BBA49E9EC577A2E3A449, /*hidden argument*/NULL);
		((HPReverbG2Controller_tC92BB9012B3B951EDF062F795D81AB05B8F8BCAB_StaticFields*)il2cpp_codegen_static_fields_for(HPReverbG2Controller_tC92BB9012B3B951EDF062F795D81AB05B8F8BCAB_il2cpp_TypeInfo_var))->___UpdatePoseDataPerfMarker_27 = L_0;
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
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.OpenXR.MicrosoftArticulatedHand::.ctor(Microsoft.MixedReality.Toolkit.TrackingState,Microsoft.MixedReality.Toolkit.Utilities.Handedness,Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource,Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MicrosoftArticulatedHand__ctor_m5A9E1F71F10747EEA18F1AA9FA4A4CE9171B3CBC (MicrosoftArticulatedHand_tFE375102CA3BF7EBD1CB6E1BD88C26C51F116CFB* __this, int32_t ___trackingState0, uint8_t ___controllerHandedness1, RuntimeObject* ___inputSource2, MixedRealityInteractionMappingU5BU5D_t689ED6694F3B293DEDEA6D5371268D36DC67AACE* ___interactions3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArticulatedHandDefinition_t9B5E215D853BD6F61AF012898D07BBDE93B4AEC4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mB503ABA3C13679286D2C404B06C0F4C781873E4C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t88261A8DE0EA7D536FD580182F6F73520708C1B7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GenericXRSDKController_tB5136D037E3BD7D743A519016EA2710F7ED980DE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m2E21E77857A59DDCA977AE1BB52631B7D6FF16F9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t291997894B2B2DA81CD73E6D5913780EBFED4068_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MixedRealityPose_tE60115C271AC50B8C11BA3B404BFCA99C7B2EFF5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OpenXRHandMeshProvider_t7E1EB4108CF655D3DB1CAF41AD048D7AE755B060_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	MicrosoftArticulatedHand_tFE375102CA3BF7EBD1CB6E1BD88C26C51F116CFB* G_B2_0 = NULL;
	MicrosoftArticulatedHand_tFE375102CA3BF7EBD1CB6E1BD88C26C51F116CFB* G_B1_0 = NULL;
	OpenXRHandMeshProvider_t7E1EB4108CF655D3DB1CAF41AD048D7AE755B060* G_B3_0 = NULL;
	MicrosoftArticulatedHand_tFE375102CA3BF7EBD1CB6E1BD88C26C51F116CFB* G_B3_1 = NULL;
	OpenXRHandMeshProvider_t7E1EB4108CF655D3DB1CAF41AD048D7AE755B060* G_B5_0 = NULL;
	OpenXRHandMeshProvider_t7E1EB4108CF655D3DB1CAF41AD048D7AE755B060* G_B4_0 = NULL;
	{
		// protected readonly Dictionary<TrackedHandJoint, MixedRealityPose> unityJointPoses = new Dictionary<TrackedHandJoint, MixedRealityPose>();
		Dictionary_2_t88261A8DE0EA7D536FD580182F6F73520708C1B7* L_0 = (Dictionary_2_t88261A8DE0EA7D536FD580182F6F73520708C1B7*)il2cpp_codegen_object_new(Dictionary_2_t88261A8DE0EA7D536FD580182F6F73520708C1B7_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Dictionary_2__ctor_mB503ABA3C13679286D2C404B06C0F4C781873E4C(L_0, Dictionary_2__ctor_mB503ABA3C13679286D2C404B06C0F4C781873E4C_RuntimeMethod_var);
		__this->___unityJointPoses_26 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___unityJointPoses_26), (void*)L_0);
		// private Vector3 currentPointerPosition = Vector3.zero;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline(NULL);
		__this->___currentPointerPosition_27 = L_1;
		// private Quaternion currentPointerRotation = Quaternion.identity;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_2;
		L_2 = Quaternion_get_identity_mB9CAEEB21BC81352CBF32DB9664BFC06FA7EA27B_inline(NULL);
		__this->___currentPointerRotation_28 = L_2;
		// private MixedRealityPose currentPointerPose = MixedRealityPose.ZeroIdentity;
		il2cpp_codegen_runtime_class_init_inline(MixedRealityPose_tE60115C271AC50B8C11BA3B404BFCA99C7B2EFF5_il2cpp_TypeInfo_var);
		MixedRealityPose_tE60115C271AC50B8C11BA3B404BFCA99C7B2EFF5 L_3;
		L_3 = MixedRealityPose_get_ZeroIdentity_m163137A55AEF8C8B0163D1F76197C5CCEDD943AD_inline(NULL);
		__this->___currentPointerPose_29 = L_3;
		// private readonly List<Bone> fingerBones = new List<Bone>();
		List_1_t291997894B2B2DA81CD73E6D5913780EBFED4068* L_4 = (List_1_t291997894B2B2DA81CD73E6D5913780EBFED4068*)il2cpp_codegen_object_new(List_1_t291997894B2B2DA81CD73E6D5913780EBFED4068_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		List_1__ctor_m2E21E77857A59DDCA977AE1BB52631B7D6FF16F9(L_4, List_1__ctor_m2E21E77857A59DDCA977AE1BB52631B7D6FF16F9_RuntimeMethod_var);
		__this->___fingerBones_31 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___fingerBones_31), (void*)L_4);
		// : base(trackingState, controllerHandedness, inputSource, interactions, new ArticulatedHandDefinition(inputSource, controllerHandedness))
		int32_t L_5 = ___trackingState0;
		uint8_t L_6 = ___controllerHandedness1;
		RuntimeObject* L_7 = ___inputSource2;
		MixedRealityInteractionMappingU5BU5D_t689ED6694F3B293DEDEA6D5371268D36DC67AACE* L_8 = ___interactions3;
		RuntimeObject* L_9 = ___inputSource2;
		uint8_t L_10 = ___controllerHandedness1;
		ArticulatedHandDefinition_t9B5E215D853BD6F61AF012898D07BBDE93B4AEC4* L_11 = (ArticulatedHandDefinition_t9B5E215D853BD6F61AF012898D07BBDE93B4AEC4*)il2cpp_codegen_object_new(ArticulatedHandDefinition_t9B5E215D853BD6F61AF012898D07BBDE93B4AEC4_il2cpp_TypeInfo_var);
		NullCheck(L_11);
		ArticulatedHandDefinition__ctor_m5F09BA89BFED449D09327359D69A39981B3ED210(L_11, L_9, L_10, NULL);
		il2cpp_codegen_runtime_class_init_inline(GenericXRSDKController_tB5136D037E3BD7D743A519016EA2710F7ED980DE_il2cpp_TypeInfo_var);
		GenericXRSDKController__ctor_m2DDE7A2D1AAB218E2B62049681DE0D6B03FFD2C1(__this, L_5, L_6, L_7, L_8, L_11, NULL);
		// handDefinition = Definition as ArticulatedHandDefinition;
		RuntimeObject* L_12;
		L_12 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(20 /* Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSourceDefinition Microsoft.MixedReality.Toolkit.Input.BaseController::get_Definition() */, __this);
		__this->___handDefinition_24 = ((ArticulatedHandDefinition_t9B5E215D853BD6F61AF012898D07BBDE93B4AEC4*)IsInstClass((RuntimeObject*)L_12, ArticulatedHandDefinition_t9B5E215D853BD6F61AF012898D07BBDE93B4AEC4_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&__this->___handDefinition_24), (void*)((ArticulatedHandDefinition_t9B5E215D853BD6F61AF012898D07BBDE93B4AEC4*)IsInstClass((RuntimeObject*)L_12, ArticulatedHandDefinition_t9B5E215D853BD6F61AF012898D07BBDE93B4AEC4_il2cpp_TypeInfo_var)));
		// handMeshProvider = controllerHandedness == Handedness.Left ? OpenXRHandMeshProvider.Left : OpenXRHandMeshProvider.Right;
		uint8_t L_13 = ___controllerHandedness1;
		G_B1_0 = __this;
		if ((((int32_t)L_13) == ((int32_t)1)))
		{
			G_B2_0 = __this;
			goto IL_0066;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(OpenXRHandMeshProvider_t7E1EB4108CF655D3DB1CAF41AD048D7AE755B060_il2cpp_TypeInfo_var);
		OpenXRHandMeshProvider_t7E1EB4108CF655D3DB1CAF41AD048D7AE755B060* L_14;
		L_14 = OpenXRHandMeshProvider_get_Right_m95E73FC1A14FA52D4557E230F8F3F254CFA2B856_inline(NULL);
		G_B3_0 = L_14;
		G_B3_1 = G_B1_0;
		goto IL_006b;
	}

IL_0066:
	{
		il2cpp_codegen_runtime_class_init_inline(OpenXRHandMeshProvider_t7E1EB4108CF655D3DB1CAF41AD048D7AE755B060_il2cpp_TypeInfo_var);
		OpenXRHandMeshProvider_t7E1EB4108CF655D3DB1CAF41AD048D7AE755B060* L_15;
		L_15 = OpenXRHandMeshProvider_get_Left_mA2D4A13AD50B19E12EEABA8C8F4055DDD1D50EDB_inline(NULL);
		G_B3_0 = L_15;
		G_B3_1 = G_B2_0;
	}

IL_006b:
	{
		NullCheck(G_B3_1);
		G_B3_1->___handMeshProvider_25 = G_B3_0;
		Il2CppCodeGenWriteBarrier((void**)(&G_B3_1->___handMeshProvider_25), (void*)G_B3_0);
		// handMeshProvider?.SetInputSource(inputSource);
		OpenXRHandMeshProvider_t7E1EB4108CF655D3DB1CAF41AD048D7AE755B060* L_16 = __this->___handMeshProvider_25;
		OpenXRHandMeshProvider_t7E1EB4108CF655D3DB1CAF41AD048D7AE755B060* L_17 = L_16;
		G_B4_0 = L_17;
		if (L_17)
		{
			G_B5_0 = L_17;
			goto IL_007b;
		}
	}
	{
		return;
	}

IL_007b:
	{
		RuntimeObject* L_18 = ___inputSource2;
		NullCheck(G_B5_0);
		OpenXRHandMeshProvider_SetInputSource_mF13BFDF25DA36932B4F78D6717FB251E4E0889BB_inline(G_B5_0, L_18, NULL);
		// }
		return;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.XRSDK.OpenXR.MicrosoftArticulatedHand::TryGetJoint(Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint,Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MicrosoftArticulatedHand_TryGetJoint_m8FFD77134B3B8F140EADD57582DB75C37BF28BCE (MicrosoftArticulatedHand_tFE375102CA3BF7EBD1CB6E1BD88C26C51F116CFB* __this, int32_t ___joint0, MixedRealityPose_tE60115C271AC50B8C11BA3B404BFCA99C7B2EFF5* ___pose1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_m5BA3B1495D7A52D723E805C6272917A762BFF71B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public bool TryGetJoint(TrackedHandJoint joint, out MixedRealityPose pose) => unityJointPoses.TryGetValue(joint, out pose);
		Dictionary_2_t88261A8DE0EA7D536FD580182F6F73520708C1B7* L_0 = __this->___unityJointPoses_26;
		int32_t L_1 = ___joint0;
		MixedRealityPose_tE60115C271AC50B8C11BA3B404BFCA99C7B2EFF5* L_2 = ___pose1;
		NullCheck(L_0);
		bool L_3;
		L_3 = Dictionary_2_TryGetValue_m5BA3B1495D7A52D723E805C6272917A762BFF71B(L_0, L_1, L_2, Dictionary_2_TryGetValue_m5BA3B1495D7A52D723E805C6272917A762BFF71B_RuntimeMethod_var);
		return L_3;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.XRSDK.OpenXR.MicrosoftArticulatedHand::get_IsInPointingPose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MicrosoftArticulatedHand_get_IsInPointingPose_m3AF10B054CACEB78FE8BBCBCFEB603562874F19D (MicrosoftArticulatedHand_tFE375102CA3BF7EBD1CB6E1BD88C26C51F116CFB* __this, const RuntimeMethod* method) 
{
	{
		// public override bool IsInPointingPose => handDefinition.IsInPointingPose;
		ArticulatedHandDefinition_t9B5E215D853BD6F61AF012898D07BBDE93B4AEC4* L_0 = __this->___handDefinition_24;
		NullCheck(L_0);
		bool L_1;
		L_1 = ArticulatedHandDefinition_get_IsInPointingPose_mD8FEABCD5F41D504F53D345CB579814C1031DED1(L_0, NULL);
		return L_1;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.OpenXR.MicrosoftArticulatedHand::UpdateController(UnityEngine.XR.InputDevice)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MicrosoftArticulatedHand_UpdateController_m5E8330677044653EB983A9A8F2CE0B885602E2A5 (MicrosoftArticulatedHand_tFE375102CA3BF7EBD1CB6E1BD88C26C51F116CFB* __this, InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD ___inputDevice0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CommonUsages_t9208F514F1E77BE70AC53EFEC94D57EDDAF3B8E1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MicrosoftArticulatedHand_tFE375102CA3BF7EBD1CB6E1BD88C26C51F116CFB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_GetValueOrDefault_m8D130DB7F2A1E694736B449176F9C26DB456597B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1__ctor_m141FA88563AC0B5179132FB929EABD02C47FF703_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBBABDBD5000A085E82E4D1F28B12069391E261AA);
		s_Il2CppMethodInitialized = true;
	}
	AutoScope_tFB983697E28885CB10FFDB92D7EFD0615AEF3139 V_0;
	memset((&V_0), 0, sizeof(V_0));
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 V_4;
	memset((&V_4), 0, sizeof(V_4));
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 V_5;
	memset((&V_5), 0, sizeof(V_5));
	MixedRealityInteractionMappingU5BU5D_t689ED6694F3B293DEDEA6D5371268D36DC67AACE* G_B13_0 = NULL;
	int32_t G_B13_1 = 0;
	MixedRealityInteractionMappingU5BU5D_t689ED6694F3B293DEDEA6D5371268D36DC67AACE* G_B12_0 = NULL;
	int32_t G_B12_1 = 0;
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 G_B14_0;
	memset((&G_B14_0), 0, sizeof(G_B14_0));
	int32_t G_B14_1 = 0;
	{
		// if (!Enabled) { return; }
		bool L_0;
		L_0 = BaseController_get_Enabled_m2C7625D1C254DBCBE44B4493CE862C4BDADCAE4B_inline(__this, NULL);
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		// if (!Enabled) { return; }
		return;
	}

IL_0009:
	{
		// if (Interactions == null)
		MixedRealityInteractionMappingU5BU5D_t689ED6694F3B293DEDEA6D5371268D36DC67AACE* L_1;
		L_1 = BaseController_get_Interactions_m0FDC472367761C254E7472EC21FE1251E7FA5A74_inline(__this, NULL);
		if (L_1)
		{
			goto IL_0032;
		}
	}
	{
		// Debug.LogError($"No interaction configuration for {GetType().Name}");
		Type_t* L_2;
		L_2 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(__this, NULL);
		NullCheck(L_2);
		String_t* L_3;
		L_3 = VirtualFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_2);
		String_t* L_4;
		L_4 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteralBBABDBD5000A085E82E4D1F28B12069391E261AA, L_3, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_m059825802BB6AF7EA9693FEBEEB0D85F59A3E38E(L_4, NULL);
		// Enabled = false;
		BaseController_set_Enabled_m1D7DEE744E2031B9DE7EE85C13F570692D8E1CE1_inline(__this, (bool)0, NULL);
	}

IL_0032:
	{
		// using (UpdateControllerPerfMarker.Auto())
		il2cpp_codegen_runtime_class_init_inline(MicrosoftArticulatedHand_tFE375102CA3BF7EBD1CB6E1BD88C26C51F116CFB_il2cpp_TypeInfo_var);
		ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD L_5 = ((MicrosoftArticulatedHand_tFE375102CA3BF7EBD1CB6E1BD88C26C51F116CFB_StaticFields*)il2cpp_codegen_static_fields_for(MicrosoftArticulatedHand_tFE375102CA3BF7EBD1CB6E1BD88C26C51F116CFB_il2cpp_TypeInfo_var))->___UpdateControllerPerfMarker_32;
		V_1 = L_5;
		AutoScope_tFB983697E28885CB10FFDB92D7EFD0615AEF3139 L_6;
		L_6 = ProfilerMarker_Auto_m133FA724EB95D16187B37D2C8A501D7E989B1F8D_inline((&V_1), NULL);
		V_0 = L_6;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00bc:
			{// begin finally (depth: 1)
				AutoScope_Dispose_mED763F3F51261EF8FB79DB32CD06E0A3F6C40481_inline((&V_0), NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				// if (inputDevice.TryGetFeatureValue(CommonUsages.devicePosition, out Vector3 _))
				il2cpp_codegen_runtime_class_init_inline(CommonUsages_t9208F514F1E77BE70AC53EFEC94D57EDDAF3B8E1_il2cpp_TypeInfo_var);
				InputFeatureUsage_1_t2E901FA41650EB29399194768CAA93D477CEBC58 L_7 = ((CommonUsages_t9208F514F1E77BE70AC53EFEC94D57EDDAF3B8E1_StaticFields*)il2cpp_codegen_static_fields_for(CommonUsages_t9208F514F1E77BE70AC53EFEC94D57EDDAF3B8E1_il2cpp_TypeInfo_var))->___devicePosition_19;
				bool L_8;
				L_8 = InputDevice_TryGetFeatureValue_m472B5ECE996FB7440CACCF1E85722DA4963E3167((&___inputDevice0), L_7, (&V_2), NULL);
				if (!L_8)
				{
					goto IL_0059_1;
				}
			}
			{
				// base.UpdateController(inputDevice);
				InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD L_9 = ___inputDevice0;
				GenericXRSDKController_UpdateController_mFC51C2B0A354ADDBE54C9343733825B9A8AB69ED(__this, L_9, NULL);
				goto IL_00ca;
			}

IL_0059_1:
			{
				// UpdateHandData(inputDevice);
				InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD L_10 = ___inputDevice0;
				MicrosoftArticulatedHand_UpdateHandData_m61B675B0DBD1F42249FCF62F8F60A9AF4B431AE6(__this, L_10, NULL);
				// for (int i = 0; i < Interactions?.Length; i++)
				V_3 = 0;
				goto IL_0087_1;
			}

IL_0064_1:
			{
				// switch (Interactions[i].AxisType)
				MixedRealityInteractionMappingU5BU5D_t689ED6694F3B293DEDEA6D5371268D36DC67AACE* L_11;
				L_11 = BaseController_get_Interactions_m0FDC472367761C254E7472EC21FE1251E7FA5A74_inline(__this, NULL);
				int32_t L_12 = V_3;
				NullCheck(L_11);
				int32_t L_13 = L_12;
				MixedRealityInteractionMapping_t10DB776EEA5255542F8F4AF0DC0BC566AF0095E0* L_14 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
				NullCheck(L_14);
				int32_t L_15;
				L_15 = MixedRealityInteractionMapping_get_AxisType_mCD3EA297AACF47BE8DFCCDCEBB0ABD2F5933EA40_inline(L_14, NULL);
				if ((!(((uint32_t)L_15) == ((uint32_t)7))))
				{
					goto IL_0083_1;
				}
			}
			{
				// UpdatePoseData(Interactions[i], inputDevice);
				MixedRealityInteractionMappingU5BU5D_t689ED6694F3B293DEDEA6D5371268D36DC67AACE* L_16;
				L_16 = BaseController_get_Interactions_m0FDC472367761C254E7472EC21FE1251E7FA5A74_inline(__this, NULL);
				int32_t L_17 = V_3;
				NullCheck(L_16);
				int32_t L_18 = L_17;
				MixedRealityInteractionMapping_t10DB776EEA5255542F8F4AF0DC0BC566AF0095E0* L_19 = (L_16)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
				InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD L_20 = ___inputDevice0;
				VirtualActionInvoker2< MixedRealityInteractionMapping_t10DB776EEA5255542F8F4AF0DC0BC566AF0095E0*, InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD >::Invoke(32 /* System.Void Microsoft.MixedReality.Toolkit.XRSDK.Input.GenericXRSDKController::UpdatePoseData(Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping,UnityEngine.XR.InputDevice) */, __this, L_19, L_20);
			}

IL_0083_1:
			{
				// for (int i = 0; i < Interactions?.Length; i++)
				int32_t L_21 = V_3;
				V_3 = ((int32_t)il2cpp_codegen_add(L_21, 1));
			}

IL_0087_1:
			{
				// for (int i = 0; i < Interactions?.Length; i++)
				int32_t L_22 = V_3;
				MixedRealityInteractionMappingU5BU5D_t689ED6694F3B293DEDEA6D5371268D36DC67AACE* L_23;
				L_23 = BaseController_get_Interactions_m0FDC472367761C254E7472EC21FE1251E7FA5A74_inline(__this, NULL);
				MixedRealityInteractionMappingU5BU5D_t689ED6694F3B293DEDEA6D5371268D36DC67AACE* L_24 = L_23;
				G_B12_0 = L_24;
				G_B12_1 = L_22;
				if (L_24)
				{
					G_B13_0 = L_24;
					G_B13_1 = L_22;
					goto IL_009e_1;
				}
			}
			{
				il2cpp_codegen_initobj((&V_5), sizeof(Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28));
				Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 L_25 = V_5;
				G_B14_0 = L_25;
				G_B14_1 = G_B12_1;
				goto IL_00a5_1;
			}

IL_009e_1:
			{
				NullCheck(G_B13_0);
				Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 L_26;
				memset((&L_26), 0, sizeof(L_26));
				Nullable_1__ctor_m141FA88563AC0B5179132FB929EABD02C47FF703((&L_26), ((int32_t)(((RuntimeArray*)G_B13_0)->max_length)), /*hidden argument*/Nullable_1__ctor_m141FA88563AC0B5179132FB929EABD02C47FF703_RuntimeMethod_var);
				G_B14_0 = L_26;
				G_B14_1 = G_B13_1;
			}

IL_00a5_1:
			{
				V_4 = G_B14_0;
				int32_t L_27;
				L_27 = Nullable_1_GetValueOrDefault_m8D130DB7F2A1E694736B449176F9C26DB456597B_inline((&V_4), Nullable_1_GetValueOrDefault_m8D130DB7F2A1E694736B449176F9C26DB456597B_RuntimeMethod_var);
				bool L_28;
				L_28 = Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_inline((&V_4), Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_RuntimeMethod_var);
				if (((int32_t)(((((int32_t)G_B14_1) < ((int32_t)L_27))? 1 : 0)&(int32_t)L_28)))
				{
					goto IL_0064_1;
				}
			}
			{
				// }
				goto IL_00ca;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00ca:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.OpenXR.MicrosoftArticulatedHand::UpdateSingleAxisData(Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping,UnityEngine.XR.InputDevice)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MicrosoftArticulatedHand_UpdateSingleAxisData_mCE25938815AFD54FE09B9058189CCEDD48BA221B (MicrosoftArticulatedHand_tFE375102CA3BF7EBD1CB6E1BD88C26C51F116CFB* __this, MixedRealityInteractionMapping_t10DB776EEA5255542F8F4AF0DC0BC566AF0095E0* ___interactionMapping0, InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD ___inputDevice1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CommonUsages_t9208F514F1E77BE70AC53EFEC94D57EDDAF3B8E1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CoreServices_tCB1FB80E338B89BCA07C52C15B876BC6D4B3439B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealityInputSystem_t73D9E8D52E761DF1CC230411D0EFD51104FF68B2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MicrosoftArticulatedHand_tFE375102CA3BF7EBD1CB6E1BD88C26C51F116CFB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	AutoScope_tFB983697E28885CB10FFDB92D7EFD0615AEF3139 V_0;
	memset((&V_0), 0, sizeof(V_0));
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD V_1;
	memset((&V_1), 0, sizeof(V_1));
	float V_2 = 0.0f;
	int32_t V_3 = 0;
	RuntimeObject* G_B10_0 = NULL;
	RuntimeObject* G_B9_0 = NULL;
	RuntimeObject* G_B13_0 = NULL;
	RuntimeObject* G_B12_0 = NULL;
	{
		// using (UpdateSingleAxisDataPerfMarker.Auto())
		il2cpp_codegen_runtime_class_init_inline(MicrosoftArticulatedHand_tFE375102CA3BF7EBD1CB6E1BD88C26C51F116CFB_il2cpp_TypeInfo_var);
		ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD L_0 = ((MicrosoftArticulatedHand_tFE375102CA3BF7EBD1CB6E1BD88C26C51F116CFB_StaticFields*)il2cpp_codegen_static_fields_for(MicrosoftArticulatedHand_tFE375102CA3BF7EBD1CB6E1BD88C26C51F116CFB_il2cpp_TypeInfo_var))->___UpdateSingleAxisDataPerfMarker_33;
		V_1 = L_0;
		AutoScope_tFB983697E28885CB10FFDB92D7EFD0615AEF3139 L_1;
		L_1 = ProfilerMarker_Auto_m133FA724EB95D16187B37D2C8A501D7E989B1F8D_inline((&V_1), NULL);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00a4:
			{// begin finally (depth: 1)
				AutoScope_Dispose_mED763F3F51261EF8FB79DB32CD06E0A3F6C40481_inline((&V_0), NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				// switch (interactionMapping.InputType)
				MixedRealityInteractionMapping_t10DB776EEA5255542F8F4AF0DC0BC566AF0095E0* L_2 = ___interactionMapping0;
				NullCheck(L_2);
				int32_t L_3;
				L_3 = MixedRealityInteractionMapping_get_InputType_m431C40AD5149D4817FAA46DC0326A481FE348C8D_inline(L_2, NULL);
				V_3 = L_3;
				int32_t L_4 = V_3;
				if ((((int32_t)L_4) == ((int32_t)((int32_t)13))))
				{
					goto IL_001f_1;
				}
			}
			{
				int32_t L_5 = V_3;
				if ((!(((uint32_t)L_5) == ((uint32_t)((int32_t)60)))))
				{
					goto IL_0042_1;
				}
			}

IL_001f_1:
			{
				// if (inputDevice.TryGetFeatureValue(CommonUsages.grip, out float gripAmount))
				il2cpp_codegen_runtime_class_init_inline(CommonUsages_t9208F514F1E77BE70AC53EFEC94D57EDDAF3B8E1_il2cpp_TypeInfo_var);
				InputFeatureUsage_1_t311D0F42F1A7BF37D3CEAC15A53A1F24165F1848 L_6 = ((CommonUsages_t9208F514F1E77BE70AC53EFEC94D57EDDAF3B8E1_StaticFields*)il2cpp_codegen_static_fields_for(CommonUsages_t9208F514F1E77BE70AC53EFEC94D57EDDAF3B8E1_il2cpp_TypeInfo_var))->___grip_16;
				bool L_7;
				L_7 = InputDevice_TryGetFeatureValue_m675D52240379FEF80D6499B5031941812FDFD081((&___inputDevice1), L_6, (&V_2), NULL);
				if (!L_7)
				{
					goto IL_004c_1;
				}
			}
			{
				// interactionMapping.BoolData = Mathf.Approximately(gripAmount, 1.0f);
				MixedRealityInteractionMapping_t10DB776EEA5255542F8F4AF0DC0BC566AF0095E0* L_8 = ___interactionMapping0;
				float L_9 = V_2;
				bool L_10;
				L_10 = Mathf_Approximately_m1C8DD0BB6A2D22A7DCF09AD7F8EE9ABD12D3F620_inline(L_9, (1.0f), NULL);
				NullCheck(L_8);
				MixedRealityInteractionMapping_set_BoolData_m216D4A26D41B17B7CB6D4C28A30A38D8D6349ADA(L_8, L_10, NULL);
				// break;
				goto IL_004c_1;
			}

IL_0042_1:
			{
				// base.UpdateSingleAxisData(interactionMapping, inputDevice);
				MixedRealityInteractionMapping_t10DB776EEA5255542F8F4AF0DC0BC566AF0095E0* L_11 = ___interactionMapping0;
				InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD L_12 = ___inputDevice1;
				GenericXRSDKController_UpdateSingleAxisData_m811ACD65931669AC8A285214F0EB83D0E0E9ADA0(__this, L_11, L_12, NULL);
				// return;
				goto IL_00b2;
			}

IL_004c_1:
			{
				// if (interactionMapping.Changed)
				MixedRealityInteractionMapping_t10DB776EEA5255542F8F4AF0DC0BC566AF0095E0* L_13 = ___interactionMapping0;
				NullCheck(L_13);
				bool L_14;
				L_14 = MixedRealityInteractionMapping_get_Changed_mC98FFE1F0E915A3F03110D83000E473E7F05BC53(L_13, NULL);
				if (!L_14)
				{
					goto IL_00a2_1;
				}
			}
			{
				// if (interactionMapping.BoolData)
				MixedRealityInteractionMapping_t10DB776EEA5255542F8F4AF0DC0BC566AF0095E0* L_15 = ___interactionMapping0;
				NullCheck(L_15);
				bool L_16;
				L_16 = MixedRealityInteractionMapping_get_BoolData_m69F4D6E88FF5DF204C3C38426A2BCD74AB7060CB_inline(L_15, NULL);
				if (!L_16)
				{
					goto IL_0080_1;
				}
			}
			{
				// CoreServices.InputSystem?.RaiseOnInputDown(InputSource, ControllerHandedness, interactionMapping.MixedRealityInputAction);
				il2cpp_codegen_runtime_class_init_inline(CoreServices_tCB1FB80E338B89BCA07C52C15B876BC6D4B3439B_il2cpp_TypeInfo_var);
				RuntimeObject* L_17;
				L_17 = CoreServices_get_InputSystem_m47147418643299159BF4DF408F768844FDC33943(NULL);
				RuntimeObject* L_18 = L_17;
				G_B9_0 = L_18;
				if (L_18)
				{
					G_B10_0 = L_18;
					goto IL_0067_1;
				}
			}
			{
				goto IL_00b2;
			}

IL_0067_1:
			{
				RuntimeObject* L_19;
				L_19 = BaseController_get_InputSource_m8FE11DBDF7B41338ACF8AFF3A0C8FAD83E5D2870_inline(__this, NULL);
				uint8_t L_20;
				L_20 = BaseController_get_ControllerHandedness_m739908CFF885DB452AD9A115F569C455BA46A3A1_inline(__this, NULL);
				MixedRealityInteractionMapping_t10DB776EEA5255542F8F4AF0DC0BC566AF0095E0* L_21 = ___interactionMapping0;
				NullCheck(L_21);
				MixedRealityInputAction_tD3B6E9CE7F20EFC9D066C519FAB848679FC62486 L_22;
				L_22 = MixedRealityInteractionMapping_get_MixedRealityInputAction_mE813B3EBBA0A10F64E34EA6E5001D140D81141E9_inline(L_21, NULL);
				NullCheck(G_B10_0);
				InterfaceActionInvoker3< RuntimeObject*, uint8_t, MixedRealityInputAction_tD3B6E9CE7F20EFC9D066C519FAB848679FC62486 >::Invoke(39 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem::RaiseOnInputDown(Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource,Microsoft.MixedReality.Toolkit.Utilities.Handedness,Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction) */, IMixedRealityInputSystem_t73D9E8D52E761DF1CC230411D0EFD51104FF68B2_il2cpp_TypeInfo_var, G_B10_0, L_19, L_20, L_22);
				goto IL_00b2;
			}

IL_0080_1:
			{
				// CoreServices.InputSystem?.RaiseOnInputUp(InputSource, ControllerHandedness, interactionMapping.MixedRealityInputAction);
				il2cpp_codegen_runtime_class_init_inline(CoreServices_tCB1FB80E338B89BCA07C52C15B876BC6D4B3439B_il2cpp_TypeInfo_var);
				RuntimeObject* L_23;
				L_23 = CoreServices_get_InputSystem_m47147418643299159BF4DF408F768844FDC33943(NULL);
				RuntimeObject* L_24 = L_23;
				G_B12_0 = L_24;
				if (L_24)
				{
					G_B13_0 = L_24;
					goto IL_008b_1;
				}
			}
			{
				goto IL_00b2;
			}

IL_008b_1:
			{
				RuntimeObject* L_25;
				L_25 = BaseController_get_InputSource_m8FE11DBDF7B41338ACF8AFF3A0C8FAD83E5D2870_inline(__this, NULL);
				uint8_t L_26;
				L_26 = BaseController_get_ControllerHandedness_m739908CFF885DB452AD9A115F569C455BA46A3A1_inline(__this, NULL);
				MixedRealityInteractionMapping_t10DB776EEA5255542F8F4AF0DC0BC566AF0095E0* L_27 = ___interactionMapping0;
				NullCheck(L_27);
				MixedRealityInputAction_tD3B6E9CE7F20EFC9D066C519FAB848679FC62486 L_28;
				L_28 = MixedRealityInteractionMapping_get_MixedRealityInputAction_mE813B3EBBA0A10F64E34EA6E5001D140D81141E9_inline(L_27, NULL);
				NullCheck(G_B13_0);
				InterfaceActionInvoker3< RuntimeObject*, uint8_t, MixedRealityInputAction_tD3B6E9CE7F20EFC9D066C519FAB848679FC62486 >::Invoke(40 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem::RaiseOnInputUp(Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource,Microsoft.MixedReality.Toolkit.Utilities.Handedness,Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction) */, IMixedRealityInputSystem_t73D9E8D52E761DF1CC230411D0EFD51104FF68B2_il2cpp_TypeInfo_var, G_B13_0, L_25, L_26, L_28);
			}

IL_00a2_1:
			{
				// }
				goto IL_00b2;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00b2:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.OpenXR.MicrosoftArticulatedHand::UpdateButtonData(Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping,UnityEngine.XR.InputDevice)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MicrosoftArticulatedHand_UpdateButtonData_mD07A95761902E4DE008D347CABCADAE4F215D2F6 (MicrosoftArticulatedHand_tFE375102CA3BF7EBD1CB6E1BD88C26C51F116CFB* __this, MixedRealityInteractionMapping_t10DB776EEA5255542F8F4AF0DC0BC566AF0095E0* ___interactionMapping0, InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD ___inputDevice1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CommonUsages_t9208F514F1E77BE70AC53EFEC94D57EDDAF3B8E1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CoreServices_tCB1FB80E338B89BCA07C52C15B876BC6D4B3439B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealityInputSystem_t73D9E8D52E761DF1CC230411D0EFD51104FF68B2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MicrosoftArticulatedHand_tFE375102CA3BF7EBD1CB6E1BD88C26C51F116CFB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	AutoScope_tFB983697E28885CB10FFDB92D7EFD0615AEF3139 V_0;
	memset((&V_0), 0, sizeof(V_0));
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	RuntimeObject* G_B10_0 = NULL;
	RuntimeObject* G_B9_0 = NULL;
	RuntimeObject* G_B13_0 = NULL;
	RuntimeObject* G_B12_0 = NULL;
	{
		// using (UpdateButtonDataPerfMarker.Auto())
		il2cpp_codegen_runtime_class_init_inline(MicrosoftArticulatedHand_tFE375102CA3BF7EBD1CB6E1BD88C26C51F116CFB_il2cpp_TypeInfo_var);
		ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD L_0 = ((MicrosoftArticulatedHand_tFE375102CA3BF7EBD1CB6E1BD88C26C51F116CFB_StaticFields*)il2cpp_codegen_static_fields_for(MicrosoftArticulatedHand_tFE375102CA3BF7EBD1CB6E1BD88C26C51F116CFB_il2cpp_TypeInfo_var))->___UpdateButtonDataPerfMarker_34;
		V_1 = L_0;
		AutoScope_tFB983697E28885CB10FFDB92D7EFD0615AEF3139 L_1;
		L_1 = ProfilerMarker_Auto_m133FA724EB95D16187B37D2C8A501D7E989B1F8D_inline((&V_1), NULL);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_009d:
			{// begin finally (depth: 1)
				AutoScope_Dispose_mED763F3F51261EF8FB79DB32CD06E0A3F6C40481_inline((&V_0), NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				// switch (interactionMapping.InputType)
				MixedRealityInteractionMapping_t10DB776EEA5255542F8F4AF0DC0BC566AF0095E0* L_2 = ___interactionMapping0;
				NullCheck(L_2);
				int32_t L_3;
				L_3 = MixedRealityInteractionMapping_get_InputType_m431C40AD5149D4817FAA46DC0326A481FE348C8D_inline(L_2, NULL);
				if ((!(((uint32_t)L_3) == ((uint32_t)((int32_t)25)))))
				{
					goto IL_003b_1;
				}
			}
			{
				// if (inputDevice.TryGetFeatureValue(CommonUsages.primaryButton, out bool buttonPressed))
				il2cpp_codegen_runtime_class_init_inline(CommonUsages_t9208F514F1E77BE70AC53EFEC94D57EDDAF3B8E1_il2cpp_TypeInfo_var);
				InputFeatureUsage_1_tE336B2F0B9AC721519BFA17A08D6353FD5221637 L_4 = ((CommonUsages_t9208F514F1E77BE70AC53EFEC94D57EDDAF3B8E1_StaticFields*)il2cpp_codegen_static_fields_for(CommonUsages_t9208F514F1E77BE70AC53EFEC94D57EDDAF3B8E1_il2cpp_TypeInfo_var))->___primaryButton_1;
				bool L_5;
				L_5 = InputDevice_TryGetFeatureValue_m24EC3B6C41AE4098269427232AD5F52E786BF884((&___inputDevice1), L_4, (&V_2), NULL);
				if (!L_5)
				{
					goto IL_0031_1;
				}
			}
			{
				// interactionMapping.BoolData = buttonPressed;
				MixedRealityInteractionMapping_t10DB776EEA5255542F8F4AF0DC0BC566AF0095E0* L_6 = ___interactionMapping0;
				bool L_7 = V_2;
				NullCheck(L_6);
				MixedRealityInteractionMapping_set_BoolData_m216D4A26D41B17B7CB6D4C28A30A38D8D6349ADA(L_6, L_7, NULL);
				goto IL_0045_1;
			}

IL_0031_1:
			{
				// base.UpdateButtonData(interactionMapping, inputDevice);
				MixedRealityInteractionMapping_t10DB776EEA5255542F8F4AF0DC0BC566AF0095E0* L_8 = ___interactionMapping0;
				InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD L_9 = ___inputDevice1;
				GenericXRSDKController_UpdateButtonData_mAF5A0412DE08EAC269E797FDE5F08A9177635673(__this, L_8, L_9, NULL);
				// return;
				goto IL_00ab;
			}

IL_003b_1:
			{
				// base.UpdateButtonData(interactionMapping, inputDevice);
				MixedRealityInteractionMapping_t10DB776EEA5255542F8F4AF0DC0BC566AF0095E0* L_10 = ___interactionMapping0;
				InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD L_11 = ___inputDevice1;
				GenericXRSDKController_UpdateButtonData_mAF5A0412DE08EAC269E797FDE5F08A9177635673(__this, L_10, L_11, NULL);
				// return;
				goto IL_00ab;
			}

IL_0045_1:
			{
				// if (interactionMapping.Changed)
				MixedRealityInteractionMapping_t10DB776EEA5255542F8F4AF0DC0BC566AF0095E0* L_12 = ___interactionMapping0;
				NullCheck(L_12);
				bool L_13;
				L_13 = MixedRealityInteractionMapping_get_Changed_mC98FFE1F0E915A3F03110D83000E473E7F05BC53(L_12, NULL);
				if (!L_13)
				{
					goto IL_009b_1;
				}
			}
			{
				// if (interactionMapping.BoolData)
				MixedRealityInteractionMapping_t10DB776EEA5255542F8F4AF0DC0BC566AF0095E0* L_14 = ___interactionMapping0;
				NullCheck(L_14);
				bool L_15;
				L_15 = MixedRealityInteractionMapping_get_BoolData_m69F4D6E88FF5DF204C3C38426A2BCD74AB7060CB_inline(L_14, NULL);
				if (!L_15)
				{
					goto IL_0079_1;
				}
			}
			{
				// CoreServices.InputSystem?.RaiseOnInputDown(InputSource, ControllerHandedness, interactionMapping.MixedRealityInputAction);
				il2cpp_codegen_runtime_class_init_inline(CoreServices_tCB1FB80E338B89BCA07C52C15B876BC6D4B3439B_il2cpp_TypeInfo_var);
				RuntimeObject* L_16;
				L_16 = CoreServices_get_InputSystem_m47147418643299159BF4DF408F768844FDC33943(NULL);
				RuntimeObject* L_17 = L_16;
				G_B9_0 = L_17;
				if (L_17)
				{
					G_B10_0 = L_17;
					goto IL_0060_1;
				}
			}
			{
				goto IL_00ab;
			}

IL_0060_1:
			{
				RuntimeObject* L_18;
				L_18 = BaseController_get_InputSource_m8FE11DBDF7B41338ACF8AFF3A0C8FAD83E5D2870_inline(__this, NULL);
				uint8_t L_19;
				L_19 = BaseController_get_ControllerHandedness_m739908CFF885DB452AD9A115F569C455BA46A3A1_inline(__this, NULL);
				MixedRealityInteractionMapping_t10DB776EEA5255542F8F4AF0DC0BC566AF0095E0* L_20 = ___interactionMapping0;
				NullCheck(L_20);
				MixedRealityInputAction_tD3B6E9CE7F20EFC9D066C519FAB848679FC62486 L_21;
				L_21 = MixedRealityInteractionMapping_get_MixedRealityInputAction_mE813B3EBBA0A10F64E34EA6E5001D140D81141E9_inline(L_20, NULL);
				NullCheck(G_B10_0);
				InterfaceActionInvoker3< RuntimeObject*, uint8_t, MixedRealityInputAction_tD3B6E9CE7F20EFC9D066C519FAB848679FC62486 >::Invoke(39 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem::RaiseOnInputDown(Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource,Microsoft.MixedReality.Toolkit.Utilities.Handedness,Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction) */, IMixedRealityInputSystem_t73D9E8D52E761DF1CC230411D0EFD51104FF68B2_il2cpp_TypeInfo_var, G_B10_0, L_18, L_19, L_21);
				goto IL_00ab;
			}

IL_0079_1:
			{
				// CoreServices.InputSystem?.RaiseOnInputUp(InputSource, ControllerHandedness, interactionMapping.MixedRealityInputAction);
				il2cpp_codegen_runtime_class_init_inline(CoreServices_tCB1FB80E338B89BCA07C52C15B876BC6D4B3439B_il2cpp_TypeInfo_var);
				RuntimeObject* L_22;
				L_22 = CoreServices_get_InputSystem_m47147418643299159BF4DF408F768844FDC33943(NULL);
				RuntimeObject* L_23 = L_22;
				G_B12_0 = L_23;
				if (L_23)
				{
					G_B13_0 = L_23;
					goto IL_0084_1;
				}
			}
			{
				goto IL_00ab;
			}

IL_0084_1:
			{
				RuntimeObject* L_24;
				L_24 = BaseController_get_InputSource_m8FE11DBDF7B41338ACF8AFF3A0C8FAD83E5D2870_inline(__this, NULL);
				uint8_t L_25;
				L_25 = BaseController_get_ControllerHandedness_m739908CFF885DB452AD9A115F569C455BA46A3A1_inline(__this, NULL);
				MixedRealityInteractionMapping_t10DB776EEA5255542F8F4AF0DC0BC566AF0095E0* L_26 = ___interactionMapping0;
				NullCheck(L_26);
				MixedRealityInputAction_tD3B6E9CE7F20EFC9D066C519FAB848679FC62486 L_27;
				L_27 = MixedRealityInteractionMapping_get_MixedRealityInputAction_mE813B3EBBA0A10F64E34EA6E5001D140D81141E9_inline(L_26, NULL);
				NullCheck(G_B13_0);
				InterfaceActionInvoker3< RuntimeObject*, uint8_t, MixedRealityInputAction_tD3B6E9CE7F20EFC9D066C519FAB848679FC62486 >::Invoke(40 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem::RaiseOnInputUp(Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource,Microsoft.MixedReality.Toolkit.Utilities.Handedness,Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction) */, IMixedRealityInputSystem_t73D9E8D52E761DF1CC230411D0EFD51104FF68B2_il2cpp_TypeInfo_var, G_B13_0, L_24, L_25, L_27);
			}

IL_009b_1:
			{
				// }
				goto IL_00ab;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00ab:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.OpenXR.MicrosoftArticulatedHand::UpdatePoseData(Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping,UnityEngine.XR.InputDevice)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MicrosoftArticulatedHand_UpdatePoseData_m9DB7BD4B2E8D69D168A73A0C07867C1C92FF2F64 (MicrosoftArticulatedHand_tFE375102CA3BF7EBD1CB6E1BD88C26C51F116CFB* __this, MixedRealityInteractionMapping_t10DB776EEA5255542F8F4AF0DC0BC566AF0095E0* ___interactionMapping0, InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD ___inputDevice1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CoreServices_tCB1FB80E338B89BCA07C52C15B876BC6D4B3439B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CustomUsages_t07BAB05B93FBB1D80AAD710042445ED8DDE3A476_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealityInputSystem_t73D9E8D52E761DF1CC230411D0EFD51104FF68B2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MicrosoftArticulatedHand_tFE375102CA3BF7EBD1CB6E1BD88C26C51F116CFB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	AutoScope_tFB983697E28885CB10FFDB92D7EFD0615AEF3139 V_0;
	memset((&V_0), 0, sizeof(V_0));
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	ArticulatedHandDefinition_t9B5E215D853BD6F61AF012898D07BBDE93B4AEC4* G_B5_0 = NULL;
	ArticulatedHandDefinition_t9B5E215D853BD6F61AF012898D07BBDE93B4AEC4* G_B4_0 = NULL;
	RuntimeObject* G_B13_0 = NULL;
	RuntimeObject* G_B12_0 = NULL;
	{
		// using (UpdatePoseDataPerfMarker.Auto())
		il2cpp_codegen_runtime_class_init_inline(MicrosoftArticulatedHand_tFE375102CA3BF7EBD1CB6E1BD88C26C51F116CFB_il2cpp_TypeInfo_var);
		ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD L_0 = ((MicrosoftArticulatedHand_tFE375102CA3BF7EBD1CB6E1BD88C26C51F116CFB_StaticFields*)il2cpp_codegen_static_fields_for(MicrosoftArticulatedHand_tFE375102CA3BF7EBD1CB6E1BD88C26C51F116CFB_il2cpp_TypeInfo_var))->___UpdatePoseDataPerfMarker_35;
		V_1 = L_0;
		AutoScope_tFB983697E28885CB10FFDB92D7EFD0615AEF3139 L_1;
		L_1 = ProfilerMarker_Auto_m133FA724EB95D16187B37D2C8A501D7E989B1F8D_inline((&V_1), NULL);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00dc:
			{// begin finally (depth: 1)
				AutoScope_Dispose_mED763F3F51261EF8FB79DB32CD06E0A3F6C40481_inline((&V_0), NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				// switch (interactionMapping.InputType)
				MixedRealityInteractionMapping_t10DB776EEA5255542F8F4AF0DC0BC566AF0095E0* L_2 = ___interactionMapping0;
				NullCheck(L_2);
				int32_t L_3;
				L_3 = MixedRealityInteractionMapping_get_InputType_m431C40AD5149D4817FAA46DC0326A481FE348C8D_inline(L_2, NULL);
				V_2 = L_3;
				int32_t L_4 = V_2;
				if ((((int32_t)L_4) == ((int32_t)3)))
				{
					goto IL_003b_1;
				}
			}
			{
				int32_t L_5 = V_2;
				if ((!(((uint32_t)L_5) == ((uint32_t)((int32_t)33)))))
				{
					goto IL_00d2_1;
				}
			}
			{
				// handDefinition?.UpdateCurrentIndexPose(interactionMapping);
				ArticulatedHandDefinition_t9B5E215D853BD6F61AF012898D07BBDE93B4AEC4* L_6 = __this->___handDefinition_24;
				ArticulatedHandDefinition_t9B5E215D853BD6F61AF012898D07BBDE93B4AEC4* L_7 = L_6;
				G_B4_0 = L_7;
				if (L_7)
				{
					G_B5_0 = L_7;
					goto IL_0030_1;
				}
			}
			{
				goto IL_00ea;
			}

IL_0030_1:
			{
				MixedRealityInteractionMapping_t10DB776EEA5255542F8F4AF0DC0BC566AF0095E0* L_8 = ___interactionMapping0;
				NullCheck(G_B5_0);
				ArticulatedHandDefinition_UpdateCurrentIndexPose_mDD4013C404622EC298ACDA6BB4FE26A9BF728637(G_B5_0, L_8, NULL);
				// break;
				goto IL_00ea;
			}

IL_003b_1:
			{
				// if (inputDevice.TryGetFeatureValue(CustomUsages.PointerPosition, out currentPointerPosition))
				il2cpp_codegen_runtime_class_init_inline(CustomUsages_t07BAB05B93FBB1D80AAD710042445ED8DDE3A476_il2cpp_TypeInfo_var);
				InputFeatureUsage_1_t2E901FA41650EB29399194768CAA93D477CEBC58 L_9 = ((CustomUsages_t07BAB05B93FBB1D80AAD710042445ED8DDE3A476_StaticFields*)il2cpp_codegen_static_fields_for(CustomUsages_t07BAB05B93FBB1D80AAD710042445ED8DDE3A476_il2cpp_TypeInfo_var))->___PointerPosition_0;
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_10 = (&__this->___currentPointerPosition_27);
				bool L_11;
				L_11 = InputDevice_TryGetFeatureValue_m472B5ECE996FB7440CACCF1E85722DA4963E3167((&___inputDevice1), L_9, L_10, NULL);
				if (!L_11)
				{
					goto IL_0065_1;
				}
			}
			{
				// currentPointerPose.Position = MixedRealityPlayspace.TransformPoint(currentPointerPosition);
				MixedRealityPose_tE60115C271AC50B8C11BA3B404BFCA99C7B2EFF5* L_12 = (&__this->___currentPointerPose_29);
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = __this->___currentPointerPosition_27;
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
				L_14 = MixedRealityPlayspace_TransformPoint_mF0F8AA899D9BBBA99FC4EBD1B8730F4174D15314(L_13, NULL);
				MixedRealityPose_set_Position_m9806379126B288614A363F39705935CA0D86888C_inline(L_12, L_14, NULL);
			}

IL_0065_1:
			{
				// if (inputDevice.TryGetFeatureValue(CustomUsages.PointerRotation, out currentPointerRotation))
				il2cpp_codegen_runtime_class_init_inline(CustomUsages_t07BAB05B93FBB1D80AAD710042445ED8DDE3A476_il2cpp_TypeInfo_var);
				InputFeatureUsage_1_t8489CEC68B1EC178F2634079A9D7CD9E90D3CF5D L_15 = ((CustomUsages_t07BAB05B93FBB1D80AAD710042445ED8DDE3A476_StaticFields*)il2cpp_codegen_static_fields_for(CustomUsages_t07BAB05B93FBB1D80AAD710042445ED8DDE3A476_il2cpp_TypeInfo_var))->___PointerRotation_1;
				Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* L_16 = (&__this->___currentPointerRotation_28);
				bool L_17;
				L_17 = InputDevice_TryGetFeatureValue_m0C1A9761DD0D1C6D1EF4BAB2FAF1BC1A9541BB9F((&___inputDevice1), L_15, L_16, NULL);
				if (!L_17)
				{
					goto IL_0094_1;
				}
			}
			{
				// currentPointerPose.Rotation = MixedRealityPlayspace.Rotation * currentPointerRotation;
				MixedRealityPose_tE60115C271AC50B8C11BA3B404BFCA99C7B2EFF5* L_18 = (&__this->___currentPointerPose_29);
				Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_19;
				L_19 = MixedRealityPlayspace_get_Rotation_mB5DCE6258ADE65064084A771A277AD2CDEC98737(NULL);
				Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_20 = __this->___currentPointerRotation_28;
				Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_21;
				L_21 = Quaternion_op_Multiply_m5AC8B39C55015059BDD09122E04E47D4BFAB2276_inline(L_19, L_20, NULL);
				MixedRealityPose_set_Rotation_m090951B4A308155032C377FF0AE6BED025C39868_inline(L_18, L_21, NULL);
			}

IL_0094_1:
			{
				// interactionMapping.PoseData = currentPointerPose;
				MixedRealityInteractionMapping_t10DB776EEA5255542F8F4AF0DC0BC566AF0095E0* L_22 = ___interactionMapping0;
				MixedRealityPose_tE60115C271AC50B8C11BA3B404BFCA99C7B2EFF5 L_23 = __this->___currentPointerPose_29;
				NullCheck(L_22);
				MixedRealityInteractionMapping_set_PoseData_m2AD97DB2F27527268C645A037E7E358A8CDF3A90(L_22, L_23, NULL);
				// if (interactionMapping.Changed)
				MixedRealityInteractionMapping_t10DB776EEA5255542F8F4AF0DC0BC566AF0095E0* L_24 = ___interactionMapping0;
				NullCheck(L_24);
				bool L_25;
				L_25 = MixedRealityInteractionMapping_get_Changed_mC98FFE1F0E915A3F03110D83000E473E7F05BC53(L_24, NULL);
				if (!L_25)
				{
					goto IL_00da_1;
				}
			}
			{
				// CoreServices.InputSystem?.RaisePoseInputChanged(InputSource, ControllerHandedness, interactionMapping.MixedRealityInputAction, interactionMapping.PoseData);
				il2cpp_codegen_runtime_class_init_inline(CoreServices_tCB1FB80E338B89BCA07C52C15B876BC6D4B3439B_il2cpp_TypeInfo_var);
				RuntimeObject* L_26;
				L_26 = CoreServices_get_InputSystem_m47147418643299159BF4DF408F768844FDC33943(NULL);
				RuntimeObject* L_27 = L_26;
				G_B12_0 = L_27;
				if (L_27)
				{
					G_B13_0 = L_27;
					goto IL_00b3_1;
				}
			}
			{
				goto IL_00ea;
			}

IL_00b3_1:
			{
				RuntimeObject* L_28;
				L_28 = BaseController_get_InputSource_m8FE11DBDF7B41338ACF8AFF3A0C8FAD83E5D2870_inline(__this, NULL);
				uint8_t L_29;
				L_29 = BaseController_get_ControllerHandedness_m739908CFF885DB452AD9A115F569C455BA46A3A1_inline(__this, NULL);
				MixedRealityInteractionMapping_t10DB776EEA5255542F8F4AF0DC0BC566AF0095E0* L_30 = ___interactionMapping0;
				NullCheck(L_30);
				MixedRealityInputAction_tD3B6E9CE7F20EFC9D066C519FAB848679FC62486 L_31;
				L_31 = MixedRealityInteractionMapping_get_MixedRealityInputAction_mE813B3EBBA0A10F64E34EA6E5001D140D81141E9_inline(L_30, NULL);
				MixedRealityInteractionMapping_t10DB776EEA5255542F8F4AF0DC0BC566AF0095E0* L_32 = ___interactionMapping0;
				NullCheck(L_32);
				MixedRealityPose_tE60115C271AC50B8C11BA3B404BFCA99C7B2EFF5 L_33;
				L_33 = MixedRealityInteractionMapping_get_PoseData_m90E4BA2D7413EC29B85B025AEE96C2F7662427B0_inline(L_32, NULL);
				NullCheck(G_B13_0);
				InterfaceActionInvoker4< RuntimeObject*, uint8_t, MixedRealityInputAction_tD3B6E9CE7F20EFC9D066C519FAB848679FC62486, MixedRealityPose_tE60115C271AC50B8C11BA3B404BFCA99C7B2EFF5 >::Invoke(45 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem::RaisePoseInputChanged(Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource,Microsoft.MixedReality.Toolkit.Utilities.Handedness,Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction,Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose) */, IMixedRealityInputSystem_t73D9E8D52E761DF1CC230411D0EFD51104FF68B2_il2cpp_TypeInfo_var, G_B13_0, L_28, L_29, L_31, L_33);
				// break;
				goto IL_00ea;
			}

IL_00d2_1:
			{
				// base.UpdatePoseData(interactionMapping, inputDevice);
				MixedRealityInteractionMapping_t10DB776EEA5255542F8F4AF0DC0BC566AF0095E0* L_34 = ___interactionMapping0;
				InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD L_35 = ___inputDevice1;
				GenericXRSDKController_UpdatePoseData_mD6B1481BC7BABD3265AA994D47789B80369054C9(__this, L_34, L_35, NULL);
			}

IL_00da_1:
			{
				// }
				goto IL_00ea;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00ea:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.OpenXR.MicrosoftArticulatedHand::UpdateHandData(UnityEngine.XR.InputDevice)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MicrosoftArticulatedHand_UpdateHandData_m61B675B0DBD1F42249FCF62F8F60A9AF4B431AE6 (MicrosoftArticulatedHand_tFE375102CA3BF7EBD1CB6E1BD88C26C51F116CFB* __this, InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD ___inputDevice0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CommonUsages_t9208F514F1E77BE70AC53EFEC94D57EDDAF3B8E1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m828761CCE16645195ED82DCD06AD93CD44C905FD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m626280022A1933CC2CE133A8457F00D99C445275_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MicrosoftArticulatedHand_tFE375102CA3BF7EBD1CB6E1BD88C26C51F116CFB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	AutoScope_tFB983697E28885CB10FFDB92D7EFD0615AEF3139 V_0;
	memset((&V_0), 0, sizeof(V_0));
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD V_1;
	memset((&V_1), 0, sizeof(V_1));
	Hand_t67B90BC0D36CBC92DF7E38BD15463B925CB5912C V_2;
	memset((&V_2), 0, sizeof(V_2));
	HandFingerU5BU5D_t722717EF823803BD086286CBF1A2D5F4B8E05F45* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	Bone_t2558B1DD1E4F405EA4D76A3B8D5149CA16011975 V_6;
	memset((&V_6), 0, sizeof(V_6));
	int32_t V_7 = 0;
	OpenXRHandMeshProvider_t7E1EB4108CF655D3DB1CAF41AD048D7AE755B060* G_B3_0 = NULL;
	OpenXRHandMeshProvider_t7E1EB4108CF655D3DB1CAF41AD048D7AE755B060* G_B2_0 = NULL;
	ArticulatedHandDefinition_t9B5E215D853BD6F61AF012898D07BBDE93B4AEC4* G_B16_0 = NULL;
	ArticulatedHandDefinition_t9B5E215D853BD6F61AF012898D07BBDE93B4AEC4* G_B15_0 = NULL;
	{
		// using (UpdateHandDataPerfMarker.Auto())
		il2cpp_codegen_runtime_class_init_inline(MicrosoftArticulatedHand_tFE375102CA3BF7EBD1CB6E1BD88C26C51F116CFB_il2cpp_TypeInfo_var);
		ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD L_0 = ((MicrosoftArticulatedHand_tFE375102CA3BF7EBD1CB6E1BD88C26C51F116CFB_StaticFields*)il2cpp_codegen_static_fields_for(MicrosoftArticulatedHand_tFE375102CA3BF7EBD1CB6E1BD88C26C51F116CFB_il2cpp_TypeInfo_var))->___UpdateHandDataPerfMarker_36;
		V_1 = L_0;
		AutoScope_tFB983697E28885CB10FFDB92D7EFD0615AEF3139 L_1;
		L_1 = ProfilerMarker_Auto_m133FA724EB95D16187B37D2C8A501D7E989B1F8D_inline((&V_1), NULL);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00c5:
			{// begin finally (depth: 1)
				AutoScope_Dispose_mED763F3F51261EF8FB79DB32CD06E0A3F6C40481_inline((&V_0), NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				// handMeshProvider?.UpdateHandMesh();
				OpenXRHandMeshProvider_t7E1EB4108CF655D3DB1CAF41AD048D7AE755B060* L_2 = __this->___handMeshProvider_25;
				OpenXRHandMeshProvider_t7E1EB4108CF655D3DB1CAF41AD048D7AE755B060* L_3 = L_2;
				G_B2_0 = L_3;
				if (L_3)
				{
					G_B3_0 = L_3;
					goto IL_001a_1;
				}
			}
			{
				goto IL_001f_1;
			}

IL_001a_1:
			{
				NullCheck(G_B3_0);
				OpenXRHandMeshProvider_UpdateHandMesh_m1EFA3799E4150D08765F121DFDE57064720ED3CE(G_B3_0, NULL);
			}

IL_001f_1:
			{
				// if (inputDevice.TryGetFeatureValue(CommonUsages.handData, out Hand hand))
				il2cpp_codegen_runtime_class_init_inline(CommonUsages_t9208F514F1E77BE70AC53EFEC94D57EDDAF3B8E1_il2cpp_TypeInfo_var);
				InputFeatureUsage_1_t64C1AA42D6E8BD57C54C7E891BD79A70A0F3A170 L_4 = ((CommonUsages_t9208F514F1E77BE70AC53EFEC94D57EDDAF3B8E1_StaticFields*)il2cpp_codegen_static_fields_for(CommonUsages_t9208F514F1E77BE70AC53EFEC94D57EDDAF3B8E1_il2cpp_TypeInfo_var))->___handData_49;
				bool L_5;
				L_5 = InputDevice_TryGetFeatureValue_mC30F276811E65A010BC493B2C7707837CF52396C((&___inputDevice0), L_4, (&V_2), NULL);
				if (!L_5)
				{
					goto IL_00c3_1;
				}
			}
			{
				// foreach (HandFinger finger in handFingers)
				il2cpp_codegen_runtime_class_init_inline(MicrosoftArticulatedHand_tFE375102CA3BF7EBD1CB6E1BD88C26C51F116CFB_il2cpp_TypeInfo_var);
				HandFingerU5BU5D_t722717EF823803BD086286CBF1A2D5F4B8E05F45* L_6 = ((MicrosoftArticulatedHand_tFE375102CA3BF7EBD1CB6E1BD88C26C51F116CFB_StaticFields*)il2cpp_codegen_static_fields_for(MicrosoftArticulatedHand_tFE375102CA3BF7EBD1CB6E1BD88C26C51F116CFB_il2cpp_TypeInfo_var))->___handFingers_30;
				V_3 = L_6;
				V_4 = 0;
				goto IL_00a5_1;
			}

IL_003d_1:
			{
				// foreach (HandFinger finger in handFingers)
				HandFingerU5BU5D_t722717EF823803BD086286CBF1A2D5F4B8E05F45* L_7 = V_3;
				int32_t L_8 = V_4;
				NullCheck(L_7);
				int32_t L_9 = L_8;
				int32_t L_10 = (int32_t)(L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
				V_5 = L_10;
				// if (hand.TryGetRootBone(out Bone rootBone))
				bool L_11;
				L_11 = Hand_TryGetRootBone_m57751D162BB60316E15C09608D4365C4C8FFB346((&V_2), (&V_6), NULL);
				if (!L_11)
				{
					goto IL_0057_1;
				}
			}
			{
				// ReadHandJoint(TrackedHandJoint.Wrist, rootBone);
				Bone_t2558B1DD1E4F405EA4D76A3B8D5149CA16011975 L_12 = V_6;
				MicrosoftArticulatedHand_ReadHandJoint_m665830FB9CB4CB3226D5F5784771B6BA0916D7FC(__this, 1, L_12, NULL);
			}

IL_0057_1:
			{
				// if (hand.TryGetFingerBones(finger, fingerBones))
				int32_t L_13 = V_5;
				List_1_t291997894B2B2DA81CD73E6D5913780EBFED4068* L_14 = __this->___fingerBones_31;
				bool L_15;
				L_15 = Hand_TryGetFingerBones_m62D184582CD2EC6FE21C6B70DB9CBEA1B4FADAE4((&V_2), L_13, L_14, NULL);
				if (!L_15)
				{
					goto IL_009f_1;
				}
			}
			{
				// for (int i = 0; i < fingerBones.Count; i++)
				V_7 = 0;
				goto IL_0090_1;
			}

IL_006d_1:
			{
				// ReadHandJoint(ConvertToTrackedHandJoint(finger, i), fingerBones[i]);
				int32_t L_16 = V_5;
				int32_t L_17 = V_7;
				int32_t L_18;
				L_18 = MicrosoftArticulatedHand_ConvertToTrackedHandJoint_mEC7E6035D1371F283AE374B8A390CB863951E8B1(__this, L_16, L_17, NULL);
				List_1_t291997894B2B2DA81CD73E6D5913780EBFED4068* L_19 = __this->___fingerBones_31;
				int32_t L_20 = V_7;
				NullCheck(L_19);
				Bone_t2558B1DD1E4F405EA4D76A3B8D5149CA16011975 L_21;
				L_21 = List_1_get_Item_m626280022A1933CC2CE133A8457F00D99C445275(L_19, L_20, List_1_get_Item_m626280022A1933CC2CE133A8457F00D99C445275_RuntimeMethod_var);
				MicrosoftArticulatedHand_ReadHandJoint_m665830FB9CB4CB3226D5F5784771B6BA0916D7FC(__this, L_18, L_21, NULL);
				// for (int i = 0; i < fingerBones.Count; i++)
				int32_t L_22 = V_7;
				V_7 = ((int32_t)il2cpp_codegen_add(L_22, 1));
			}

IL_0090_1:
			{
				// for (int i = 0; i < fingerBones.Count; i++)
				int32_t L_23 = V_7;
				List_1_t291997894B2B2DA81CD73E6D5913780EBFED4068* L_24 = __this->___fingerBones_31;
				NullCheck(L_24);
				int32_t L_25;
				L_25 = List_1_get_Count_m828761CCE16645195ED82DCD06AD93CD44C905FD_inline(L_24, List_1_get_Count_m828761CCE16645195ED82DCD06AD93CD44C905FD_RuntimeMethod_var);
				if ((((int32_t)L_23) < ((int32_t)L_25)))
				{
					goto IL_006d_1;
				}
			}

IL_009f_1:
			{
				int32_t L_26 = V_4;
				V_4 = ((int32_t)il2cpp_codegen_add(L_26, 1));
			}

IL_00a5_1:
			{
				// foreach (HandFinger finger in handFingers)
				int32_t L_27 = V_4;
				HandFingerU5BU5D_t722717EF823803BD086286CBF1A2D5F4B8E05F45* L_28 = V_3;
				NullCheck(L_28);
				if ((((int32_t)L_27) < ((int32_t)((int32_t)(((RuntimeArray*)L_28)->max_length)))))
				{
					goto IL_003d_1;
				}
			}
			{
				// handDefinition?.UpdateHandJoints(unityJointPoses);
				ArticulatedHandDefinition_t9B5E215D853BD6F61AF012898D07BBDE93B4AEC4* L_29 = __this->___handDefinition_24;
				ArticulatedHandDefinition_t9B5E215D853BD6F61AF012898D07BBDE93B4AEC4* L_30 = L_29;
				G_B15_0 = L_30;
				if (L_30)
				{
					G_B16_0 = L_30;
					goto IL_00b8_1;
				}
			}
			{
				goto IL_00d3;
			}

IL_00b8_1:
			{
				Dictionary_2_t88261A8DE0EA7D536FD580182F6F73520708C1B7* L_31 = __this->___unityJointPoses_26;
				NullCheck(G_B16_0);
				ArticulatedHandDefinition_UpdateHandJoints_m4B2FAE405389005DD547E819BE1550BCE94DAB94(G_B16_0, L_31, NULL);
			}

IL_00c3_1:
			{
				// }
				goto IL_00d3;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00d3:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.OpenXR.MicrosoftArticulatedHand::ReadHandJoint(Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint,UnityEngine.XR.Bone)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MicrosoftArticulatedHand_ReadHandJoint_m665830FB9CB4CB3226D5F5784771B6BA0916D7FC (MicrosoftArticulatedHand_tFE375102CA3BF7EBD1CB6E1BD88C26C51F116CFB* __this, int32_t ___trackedHandJoint0, Bone_t2558B1DD1E4F405EA4D76A3B8D5149CA16011975 ___bone1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_mCA55C3E6813B3E8D1C814054AA423E553A26B4B1_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// bool positionAvailable = bone.TryGetPosition(out Vector3 position);
		bool L_0;
		L_0 = Bone_TryGetPosition_m995E6BD44A081407B8FA2B4BB1B6223C1526E8D7((&___bone1), (&V_0), NULL);
		// bool rotationAvailable = bone.TryGetRotation(out Quaternion rotation);
		bool L_1;
		L_1 = Bone_TryGetRotation_mBCD1D06C58E9C28F9C8F2A24A454D6B90ED6EB65((&___bone1), (&V_2), NULL);
		V_1 = L_1;
		// if (positionAvailable && rotationAvailable)
		bool L_2 = V_1;
		if (!((int32_t)((int32_t)L_0&(int32_t)L_2)))
		{
			goto IL_003d;
		}
	}
	{
		// position = MixedRealityPlayspace.TransformPoint(position);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = MixedRealityPlayspace_TransformPoint_mF0F8AA899D9BBBA99FC4EBD1B8730F4174D15314(L_3, NULL);
		V_0 = L_4;
		// rotation = MixedRealityPlayspace.Rotation * rotation;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_5;
		L_5 = MixedRealityPlayspace_get_Rotation_mB5DCE6258ADE65064084A771A277AD2CDEC98737(NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_6 = V_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_7;
		L_7 = Quaternion_op_Multiply_m5AC8B39C55015059BDD09122E04E47D4BFAB2276_inline(L_5, L_6, NULL);
		V_2 = L_7;
		// unityJointPoses[trackedHandJoint] = new MixedRealityPose(position, rotation);
		Dictionary_2_t88261A8DE0EA7D536FD580182F6F73520708C1B7* L_8 = __this->___unityJointPoses_26;
		int32_t L_9 = ___trackedHandJoint0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_11 = V_2;
		MixedRealityPose_tE60115C271AC50B8C11BA3B404BFCA99C7B2EFF5 L_12;
		memset((&L_12), 0, sizeof(L_12));
		MixedRealityPose__ctor_mA9F8CDFA80771B30CB085958B1AE0526919755F0((&L_12), L_10, L_11, /*hidden argument*/NULL);
		NullCheck(L_8);
		Dictionary_2_set_Item_mCA55C3E6813B3E8D1C814054AA423E553A26B4B1(L_8, L_9, L_12, Dictionary_2_set_Item_mCA55C3E6813B3E8D1C814054AA423E553A26B4B1_RuntimeMethod_var);
	}

IL_003d:
	{
		// }
		return;
	}
}
// Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint Microsoft.MixedReality.Toolkit.XRSDK.OpenXR.MicrosoftArticulatedHand::ConvertToTrackedHandJoint(UnityEngine.XR.HandFinger,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MicrosoftArticulatedHand_ConvertToTrackedHandJoint_mEC7E6035D1371F283AE374B8A390CB863951E8B1 (MicrosoftArticulatedHand_tFE375102CA3BF7EBD1CB6E1BD88C26C51F116CFB* __this, int32_t ___finger0, int32_t ___index1, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___finger0;
		switch (L_0)
		{
			case 0:
			{
				goto IL_001c;
			}
			case 1:
			{
				goto IL_0020;
			}
			case 2:
			{
				goto IL_0024;
			}
			case 3:
			{
				goto IL_0029;
			}
			case 4:
			{
				goto IL_002e;
			}
		}
	}
	{
		goto IL_0033;
	}

IL_001c:
	{
		// case HandFinger.Thumb: return TrackedHandJoint.ThumbMetacarpalJoint + index;
		int32_t L_1 = ___index1;
		return (int32_t)(((int32_t)il2cpp_codegen_add(3, L_1)));
	}

IL_0020:
	{
		// case HandFinger.Index: return TrackedHandJoint.IndexMetacarpal + index;
		int32_t L_2 = ___index1;
		return (int32_t)(((int32_t)il2cpp_codegen_add(7, L_2)));
	}

IL_0024:
	{
		// case HandFinger.Middle: return TrackedHandJoint.MiddleMetacarpal + index;
		int32_t L_3 = ___index1;
		return (int32_t)(((int32_t)il2cpp_codegen_add(((int32_t)12), L_3)));
	}

IL_0029:
	{
		// case HandFinger.Ring: return TrackedHandJoint.RingMetacarpal + index;
		int32_t L_4 = ___index1;
		return (int32_t)(((int32_t)il2cpp_codegen_add(((int32_t)17), L_4)));
	}

IL_002e:
	{
		// case HandFinger.Pinky: return TrackedHandJoint.PinkyMetacarpal + index;
		int32_t L_5 = ___index1;
		return (int32_t)(((int32_t)il2cpp_codegen_add(((int32_t)22), L_5)));
	}

IL_0033:
	{
		// default: return TrackedHandJoint.None;
		return (int32_t)(0);
	}
}
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.OpenXR.MicrosoftArticulatedHand::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MicrosoftArticulatedHand__cctor_m376D7F2D88BF5F755B6F2FBE40AF85DC4501811D (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HandFingerU5BU5D_t722717EF823803BD086286CBF1A2D5F4B8E05F45_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HandFinger_tD866B318803A5E7059DC88A19B5EE51922717949_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MicrosoftArticulatedHand_tFE375102CA3BF7EBD1CB6E1BD88C26C51F116CFB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral785C543519EB6E0B5983BDD07361B07451B939E6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral80D1648E8FE647DFFDBAD4B89EC0DB2877CCB220);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB225114D2C3857BE9E73DA5D5C96CEF5957D1AC1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB3BA1DAEB772EC12A843CE87109432F8ACE760C0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF6EED814CF57561BB951430F9A6E99A9476E9744);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static readonly HandFinger[] handFingers = Enum.GetValues(typeof(HandFinger)) as HandFinger[];
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (HandFinger_tD866B318803A5E7059DC88A19B5EE51922717949_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_il2cpp_TypeInfo_var);
		RuntimeArray* L_2;
		L_2 = Enum_GetValues_mE24D2214E046914DA4CAFB6D1DA830B76C501293(L_1, NULL);
		((MicrosoftArticulatedHand_tFE375102CA3BF7EBD1CB6E1BD88C26C51F116CFB_StaticFields*)il2cpp_codegen_static_fields_for(MicrosoftArticulatedHand_tFE375102CA3BF7EBD1CB6E1BD88C26C51F116CFB_il2cpp_TypeInfo_var))->___handFingers_30 = ((HandFingerU5BU5D_t722717EF823803BD086286CBF1A2D5F4B8E05F45*)IsInst((RuntimeObject*)L_2, HandFingerU5BU5D_t722717EF823803BD086286CBF1A2D5F4B8E05F45_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&((MicrosoftArticulatedHand_tFE375102CA3BF7EBD1CB6E1BD88C26C51F116CFB_StaticFields*)il2cpp_codegen_static_fields_for(MicrosoftArticulatedHand_tFE375102CA3BF7EBD1CB6E1BD88C26C51F116CFB_il2cpp_TypeInfo_var))->___handFingers_30), (void*)((HandFingerU5BU5D_t722717EF823803BD086286CBF1A2D5F4B8E05F45*)IsInst((RuntimeObject*)L_2, HandFingerU5BU5D_t722717EF823803BD086286CBF1A2D5F4B8E05F45_il2cpp_TypeInfo_var)));
		// private static readonly ProfilerMarker UpdateControllerPerfMarker = new ProfilerMarker("[MRTK] MicrosoftArticulatedHand.UpdateController");
		ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD L_3;
		memset((&L_3), 0, sizeof(L_3));
		ProfilerMarker__ctor_mDD68B0A8B71E0301F592AF8891560150E55699C8_inline((&L_3), _stringLiteralB225114D2C3857BE9E73DA5D5C96CEF5957D1AC1, /*hidden argument*/NULL);
		((MicrosoftArticulatedHand_tFE375102CA3BF7EBD1CB6E1BD88C26C51F116CFB_StaticFields*)il2cpp_codegen_static_fields_for(MicrosoftArticulatedHand_tFE375102CA3BF7EBD1CB6E1BD88C26C51F116CFB_il2cpp_TypeInfo_var))->___UpdateControllerPerfMarker_32 = L_3;
		// private static readonly ProfilerMarker UpdateSingleAxisDataPerfMarker = new ProfilerMarker("[MRTK] MicrosoftArticulatedHand.UpdateSingleAxisData");
		ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD L_4;
		memset((&L_4), 0, sizeof(L_4));
		ProfilerMarker__ctor_mDD68B0A8B71E0301F592AF8891560150E55699C8_inline((&L_4), _stringLiteral80D1648E8FE647DFFDBAD4B89EC0DB2877CCB220, /*hidden argument*/NULL);
		((MicrosoftArticulatedHand_tFE375102CA3BF7EBD1CB6E1BD88C26C51F116CFB_StaticFields*)il2cpp_codegen_static_fields_for(MicrosoftArticulatedHand_tFE375102CA3BF7EBD1CB6E1BD88C26C51F116CFB_il2cpp_TypeInfo_var))->___UpdateSingleAxisDataPerfMarker_33 = L_4;
		// private static readonly ProfilerMarker UpdateButtonDataPerfMarker = new ProfilerMarker("[MRTK] MicrosoftArticulatedHand.UpdateButtonData");
		ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD L_5;
		memset((&L_5), 0, sizeof(L_5));
		ProfilerMarker__ctor_mDD68B0A8B71E0301F592AF8891560150E55699C8_inline((&L_5), _stringLiteral785C543519EB6E0B5983BDD07361B07451B939E6, /*hidden argument*/NULL);
		((MicrosoftArticulatedHand_tFE375102CA3BF7EBD1CB6E1BD88C26C51F116CFB_StaticFields*)il2cpp_codegen_static_fields_for(MicrosoftArticulatedHand_tFE375102CA3BF7EBD1CB6E1BD88C26C51F116CFB_il2cpp_TypeInfo_var))->___UpdateButtonDataPerfMarker_34 = L_5;
		// private static readonly ProfilerMarker UpdatePoseDataPerfMarker = new ProfilerMarker("[MRTK] MicrosoftArticulatedHand.UpdatePoseData");
		ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD L_6;
		memset((&L_6), 0, sizeof(L_6));
		ProfilerMarker__ctor_mDD68B0A8B71E0301F592AF8891560150E55699C8_inline((&L_6), _stringLiteralF6EED814CF57561BB951430F9A6E99A9476E9744, /*hidden argument*/NULL);
		((MicrosoftArticulatedHand_tFE375102CA3BF7EBD1CB6E1BD88C26C51F116CFB_StaticFields*)il2cpp_codegen_static_fields_for(MicrosoftArticulatedHand_tFE375102CA3BF7EBD1CB6E1BD88C26C51F116CFB_il2cpp_TypeInfo_var))->___UpdatePoseDataPerfMarker_35 = L_6;
		// private static readonly ProfilerMarker UpdateHandDataPerfMarker = new ProfilerMarker("[MRTK] MicrosoftArticulatedHand.UpdateHandData");
		ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD L_7;
		memset((&L_7), 0, sizeof(L_7));
		ProfilerMarker__ctor_mDD68B0A8B71E0301F592AF8891560150E55699C8_inline((&L_7), _stringLiteralB3BA1DAEB772EC12A843CE87109432F8ACE760C0, /*hidden argument*/NULL);
		((MicrosoftArticulatedHand_tFE375102CA3BF7EBD1CB6E1BD88C26C51F116CFB_StaticFields*)il2cpp_codegen_static_fields_for(MicrosoftArticulatedHand_tFE375102CA3BF7EBD1CB6E1BD88C26C51F116CFB_il2cpp_TypeInfo_var))->___UpdateHandDataPerfMarker_36 = L_7;
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
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.OpenXR.MicrosoftControllerModelProvider::.ctor(Microsoft.MixedReality.Toolkit.Utilities.Handedness)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MicrosoftControllerModelProvider__ctor_mC3EBDBE3EBC5B5ABAFE7B96E15ECE6CCDCF85E04 (MicrosoftControllerModelProvider_tF65FFDFA9AC6B73CB968B37DC19BA25FE7D72204* __this, uint8_t ___handedness0, const RuntimeMethod* method) 
{
	{
		// public MicrosoftControllerModelProvider(Utilities.Handedness handedness)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// }
		return;
	}
}
// System.Threading.Tasks.Task`1<UnityEngine.GameObject> Microsoft.MixedReality.Toolkit.XRSDK.OpenXR.MicrosoftControllerModelProvider::TryGenerateControllerModelFromPlatformSDK()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_tE06D7E45E347567BB7775D8FB00F95DC55D14506* MicrosoftControllerModelProvider_TryGenerateControllerModelFromPlatformSDK_mA7D82862D67A3E889115DAE80AD55A1807C9BA13 (MicrosoftControllerModelProvider_tF65FFDFA9AC6B73CB968B37DC19BA25FE7D72204* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_Create_mCDF7C9C0134FCFC40D4C0ED9396204CAEF288FE8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_Start_TisU3CTryGenerateControllerModelFromPlatformSDKU3Ed__1_t634A2619353B2ADDB9D91D244F8D3FB5701728F8_mB80FE041ADB60FB4F574BE837AEAC0CB146D9040_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_get_Task_m19C84E9A0B26617DE9B32A186501CAC7AE6C895E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_t39EED874134028D1D4331D5686AA19731E407868_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CTryGenerateControllerModelFromPlatformSDKU3Ed__1_t634A2619353B2ADDB9D91D244F8D3FB5701728F8 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_runtime_class_init_inline(AsyncTaskMethodBuilder_1_t39EED874134028D1D4331D5686AA19731E407868_il2cpp_TypeInfo_var);
		AsyncTaskMethodBuilder_1_t39EED874134028D1D4331D5686AA19731E407868 L_0;
		L_0 = AsyncTaskMethodBuilder_1_Create_mCDF7C9C0134FCFC40D4C0ED9396204CAEF288FE8(AsyncTaskMethodBuilder_1_Create_mCDF7C9C0134FCFC40D4C0ED9396204CAEF288FE8_RuntimeMethod_var);
		(&V_0)->___U3CU3Et__builder_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&(&V_0)->___U3CU3Et__builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&(&V_0)->___U3CU3Et__builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&(&V_0)->___U3CU3Et__builder_1))->___m_task_2), (void*)NULL);
		#endif
		(&V_0)->___U3CU3E1__state_0 = (-1);
		AsyncTaskMethodBuilder_1_t39EED874134028D1D4331D5686AA19731E407868* L_1 = (&(&V_0)->___U3CU3Et__builder_1);
		AsyncTaskMethodBuilder_1_Start_TisU3CTryGenerateControllerModelFromPlatformSDKU3Ed__1_t634A2619353B2ADDB9D91D244F8D3FB5701728F8_mB80FE041ADB60FB4F574BE837AEAC0CB146D9040(L_1, (&V_0), AsyncTaskMethodBuilder_1_Start_TisU3CTryGenerateControllerModelFromPlatformSDKU3Ed__1_t634A2619353B2ADDB9D91D244F8D3FB5701728F8_mB80FE041ADB60FB4F574BE837AEAC0CB146D9040_RuntimeMethod_var);
		AsyncTaskMethodBuilder_1_t39EED874134028D1D4331D5686AA19731E407868* L_2 = (&(&V_0)->___U3CU3Et__builder_1);
		Task_1_tE06D7E45E347567BB7775D8FB00F95DC55D14506* L_3;
		L_3 = AsyncTaskMethodBuilder_1_get_Task_m19C84E9A0B26617DE9B32A186501CAC7AE6C895E(L_2, AsyncTaskMethodBuilder_1_get_Task_m19C84E9A0B26617DE9B32A186501CAC7AE6C895E_RuntimeMethod_var);
		return L_3;
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
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.OpenXR.MicrosoftControllerModelProvider/<TryGenerateControllerModelFromPlatformSDK>d__1::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CTryGenerateControllerModelFromPlatformSDKU3Ed__1_MoveNext_m9630B8FE43373CE7C9CB2A3B0619AA4276EAF8D8 (U3CTryGenerateControllerModelFromPlatformSDKU3Ed__1_t634A2619353B2ADDB9D91D244F8D3FB5701728F8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_SetResult_mA747C28DBECF7C5751BF6E9628F176A9C50B2D05_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_0 = NULL;
	Exception_t* V_1 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	try
	{// begin try (depth: 1)
		// GameObject gltfGameObject = null;
		// return gltfGameObject;
		V_0 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)NULL;
		goto IL_001b;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0004;
		}
		throw e;
	}

CATCH_0004:
	{// begin catch(System.Exception)
		V_1 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncTaskMethodBuilder_1_t39EED874134028D1D4331D5686AA19731E407868* L_0 = (&__this->___U3CU3Et__builder_1);
		Exception_t* L_1 = V_1;
		AsyncTaskMethodBuilder_1_SetException_mAE0D2510C63C5BEB04AA77FB6114CD8B97C11FFE(L_0, L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AsyncTaskMethodBuilder_1_SetException_mAE0D2510C63C5BEB04AA77FB6114CD8B97C11FFE_RuntimeMethod_var)));
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_002f;
	}// end catch (depth: 1)

IL_001b:
	{
		// }
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncTaskMethodBuilder_1_t39EED874134028D1D4331D5686AA19731E407868* L_2 = (&__this->___U3CU3Et__builder_1);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = V_0;
		AsyncTaskMethodBuilder_1_SetResult_mA747C28DBECF7C5751BF6E9628F176A9C50B2D05(L_2, L_3, AsyncTaskMethodBuilder_1_SetResult_mA747C28DBECF7C5751BF6E9628F176A9C50B2D05_RuntimeMethod_var);
	}

IL_002f:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CTryGenerateControllerModelFromPlatformSDKU3Ed__1_MoveNext_m9630B8FE43373CE7C9CB2A3B0619AA4276EAF8D8_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	U3CTryGenerateControllerModelFromPlatformSDKU3Ed__1_t634A2619353B2ADDB9D91D244F8D3FB5701728F8* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CTryGenerateControllerModelFromPlatformSDKU3Ed__1_t634A2619353B2ADDB9D91D244F8D3FB5701728F8*>(__this + _offset);
	U3CTryGenerateControllerModelFromPlatformSDKU3Ed__1_MoveNext_m9630B8FE43373CE7C9CB2A3B0619AA4276EAF8D8(_thisAdjusted, method);
}
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.OpenXR.MicrosoftControllerModelProvider/<TryGenerateControllerModelFromPlatformSDK>d__1::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CTryGenerateControllerModelFromPlatformSDKU3Ed__1_SetStateMachine_m581F6E22CB7FC65C8D1817828F7BCCBF3BB0FDAB (U3CTryGenerateControllerModelFromPlatformSDKU3Ed__1_t634A2619353B2ADDB9D91D244F8D3FB5701728F8* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_SetStateMachine_m957BD84C77C5AAFE13A722DDFE9845DDF4DF5415_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		AsyncTaskMethodBuilder_1_t39EED874134028D1D4331D5686AA19731E407868* L_0 = (&__this->___U3CU3Et__builder_1);
		RuntimeObject* L_1 = ___stateMachine0;
		AsyncTaskMethodBuilder_1_SetStateMachine_m957BD84C77C5AAFE13A722DDFE9845DDF4DF5415(L_0, L_1, AsyncTaskMethodBuilder_1_SetStateMachine_m957BD84C77C5AAFE13A722DDFE9845DDF4DF5415_RuntimeMethod_var);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CTryGenerateControllerModelFromPlatformSDKU3Ed__1_SetStateMachine_m581F6E22CB7FC65C8D1817828F7BCCBF3BB0FDAB_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	U3CTryGenerateControllerModelFromPlatformSDKU3Ed__1_t634A2619353B2ADDB9D91D244F8D3FB5701728F8* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CTryGenerateControllerModelFromPlatformSDKU3Ed__1_t634A2619353B2ADDB9D91D244F8D3FB5701728F8*>(__this + _offset);
	U3CTryGenerateControllerModelFromPlatformSDKU3Ed__1_SetStateMachine_m581F6E22CB7FC65C8D1817828F7BCCBF3BB0FDAB(_thisAdjusted, ___stateMachine0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.OpenXR.MicrosoftMotionController::.ctor(Microsoft.MixedReality.Toolkit.TrackingState,Microsoft.MixedReality.Toolkit.Utilities.Handedness,Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource,Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MicrosoftMotionController__ctor_m92B9D611A27FB15BAC2C49CF6CC72B821B01918C (MicrosoftMotionController_tC3CCCF3F155F3A7D33CA0B6078E5750C7C2AAE8C* __this, int32_t ___trackingState0, uint8_t ___controllerHandedness1, RuntimeObject* ___inputSource2, MixedRealityInteractionMappingU5BU5D_t689ED6694F3B293DEDEA6D5371268D36DC67AACE* ___interactions3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GenericXRSDKController_tB5136D037E3BD7D743A519016EA2710F7ED980DE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MixedRealityPose_tE60115C271AC50B8C11BA3B404BFCA99C7B2EFF5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WindowsMixedRealityControllerDefinition_tE3D0C6686E8565C58FA657AB2A2A3426765A3D71_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private Vector3 currentPointerPosition = Vector3.zero;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		L_0 = Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline(NULL);
		__this->___currentPointerPosition_24 = L_0;
		// private Quaternion currentPointerRotation = Quaternion.identity;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_1;
		L_1 = Quaternion_get_identity_mB9CAEEB21BC81352CBF32DB9664BFC06FA7EA27B_inline(NULL);
		__this->___currentPointerRotation_25 = L_1;
		// private MixedRealityPose currentPointerPose = MixedRealityPose.ZeroIdentity;
		il2cpp_codegen_runtime_class_init_inline(MixedRealityPose_tE60115C271AC50B8C11BA3B404BFCA99C7B2EFF5_il2cpp_TypeInfo_var);
		MixedRealityPose_tE60115C271AC50B8C11BA3B404BFCA99C7B2EFF5 L_2;
		L_2 = MixedRealityPose_get_ZeroIdentity_m163137A55AEF8C8B0163D1F76197C5CCEDD943AD_inline(NULL);
		__this->___currentPointerPose_26 = L_2;
		// : base(trackingState, controllerHandedness, inputSource, interactions, new WindowsMixedRealityControllerDefinition(controllerHandedness))
		int32_t L_3 = ___trackingState0;
		uint8_t L_4 = ___controllerHandedness1;
		RuntimeObject* L_5 = ___inputSource2;
		MixedRealityInteractionMappingU5BU5D_t689ED6694F3B293DEDEA6D5371268D36DC67AACE* L_6 = ___interactions3;
		uint8_t L_7 = ___controllerHandedness1;
		WindowsMixedRealityControllerDefinition_tE3D0C6686E8565C58FA657AB2A2A3426765A3D71* L_8 = (WindowsMixedRealityControllerDefinition_tE3D0C6686E8565C58FA657AB2A2A3426765A3D71*)il2cpp_codegen_object_new(WindowsMixedRealityControllerDefinition_tE3D0C6686E8565C58FA657AB2A2A3426765A3D71_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		WindowsMixedRealityControllerDefinition__ctor_m4B6BBE1452F723BD8E1407C8FE9E3427EA3D13DD(L_8, L_7, NULL);
		il2cpp_codegen_runtime_class_init_inline(GenericXRSDKController_tB5136D037E3BD7D743A519016EA2710F7ED980DE_il2cpp_TypeInfo_var);
		GenericXRSDKController__ctor_m2DDE7A2D1AAB218E2B62049681DE0D6B03FFD2C1(__this, L_3, L_4, L_5, L_6, L_8, NULL);
		// { }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.OpenXR.MicrosoftMotionController::UpdatePoseData(Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping,UnityEngine.XR.InputDevice)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MicrosoftMotionController_UpdatePoseData_m1AFF9AA8FCA9B58DDCF164FB32F6B859D4506506 (MicrosoftMotionController_tC3CCCF3F155F3A7D33CA0B6078E5750C7C2AAE8C* __this, MixedRealityInteractionMapping_t10DB776EEA5255542F8F4AF0DC0BC566AF0095E0* ___interactionMapping0, InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD ___inputDevice1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CoreServices_tCB1FB80E338B89BCA07C52C15B876BC6D4B3439B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CustomUsages_t07BAB05B93FBB1D80AAD710042445ED8DDE3A476_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealityInputSystem_t73D9E8D52E761DF1CC230411D0EFD51104FF68B2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MicrosoftMotionController_tC3CCCF3F155F3A7D33CA0B6078E5750C7C2AAE8C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	AutoScope_tFB983697E28885CB10FFDB92D7EFD0615AEF3139 V_0;
	memset((&V_0), 0, sizeof(V_0));
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD V_1;
	memset((&V_1), 0, sizeof(V_1));
	RuntimeObject* G_B9_0 = NULL;
	RuntimeObject* G_B8_0 = NULL;
	{
		// using (UpdatePoseDataPerfMarker.Auto())
		il2cpp_codegen_runtime_class_init_inline(MicrosoftMotionController_tC3CCCF3F155F3A7D33CA0B6078E5750C7C2AAE8C_il2cpp_TypeInfo_var);
		ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD L_0 = ((MicrosoftMotionController_tC3CCCF3F155F3A7D33CA0B6078E5750C7C2AAE8C_StaticFields*)il2cpp_codegen_static_fields_for(MicrosoftMotionController_tC3CCCF3F155F3A7D33CA0B6078E5750C7C2AAE8C_il2cpp_TypeInfo_var))->___UpdatePoseDataPerfMarker_27;
		V_1 = L_0;
		AutoScope_tFB983697E28885CB10FFDB92D7EFD0615AEF3139 L_1;
		L_1 = ProfilerMarker_Auto_m133FA724EB95D16187B37D2C8A501D7E989B1F8D_inline((&V_1), NULL);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00bb:
			{// begin finally (depth: 1)
				AutoScope_Dispose_mED763F3F51261EF8FB79DB32CD06E0A3F6C40481_inline((&V_0), NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				// switch (interactionMapping.InputType)
				MixedRealityInteractionMapping_t10DB776EEA5255542F8F4AF0DC0BC566AF0095E0* L_2 = ___interactionMapping0;
				NullCheck(L_2);
				int32_t L_3;
				L_3 = MixedRealityInteractionMapping_get_InputType_m431C40AD5149D4817FAA46DC0326A481FE348C8D_inline(L_2, NULL);
				if ((!(((uint32_t)L_3) == ((uint32_t)3))))
				{
					goto IL_00b1_1;
				}
			}
			{
				// if (inputDevice.TryGetFeatureValue(CustomUsages.PointerPosition, out currentPointerPosition))
				il2cpp_codegen_runtime_class_init_inline(CustomUsages_t07BAB05B93FBB1D80AAD710042445ED8DDE3A476_il2cpp_TypeInfo_var);
				InputFeatureUsage_1_t2E901FA41650EB29399194768CAA93D477CEBC58 L_4 = ((CustomUsages_t07BAB05B93FBB1D80AAD710042445ED8DDE3A476_StaticFields*)il2cpp_codegen_static_fields_for(CustomUsages_t07BAB05B93FBB1D80AAD710042445ED8DDE3A476_il2cpp_TypeInfo_var))->___PointerPosition_0;
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_5 = (&__this->___currentPointerPosition_24);
				bool L_6;
				L_6 = InputDevice_TryGetFeatureValue_m472B5ECE996FB7440CACCF1E85722DA4963E3167((&___inputDevice1), L_4, L_5, NULL);
				if (!L_6)
				{
					goto IL_0044_1;
				}
			}
			{
				// currentPointerPose.Position = MixedRealityPlayspace.TransformPoint(currentPointerPosition);
				MixedRealityPose_tE60115C271AC50B8C11BA3B404BFCA99C7B2EFF5* L_7 = (&__this->___currentPointerPose_26);
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = __this->___currentPointerPosition_24;
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
				L_9 = MixedRealityPlayspace_TransformPoint_mF0F8AA899D9BBBA99FC4EBD1B8730F4174D15314(L_8, NULL);
				MixedRealityPose_set_Position_m9806379126B288614A363F39705935CA0D86888C_inline(L_7, L_9, NULL);
			}

IL_0044_1:
			{
				// if (inputDevice.TryGetFeatureValue(CustomUsages.PointerRotation, out currentPointerRotation))
				il2cpp_codegen_runtime_class_init_inline(CustomUsages_t07BAB05B93FBB1D80AAD710042445ED8DDE3A476_il2cpp_TypeInfo_var);
				InputFeatureUsage_1_t8489CEC68B1EC178F2634079A9D7CD9E90D3CF5D L_10 = ((CustomUsages_t07BAB05B93FBB1D80AAD710042445ED8DDE3A476_StaticFields*)il2cpp_codegen_static_fields_for(CustomUsages_t07BAB05B93FBB1D80AAD710042445ED8DDE3A476_il2cpp_TypeInfo_var))->___PointerRotation_1;
				Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* L_11 = (&__this->___currentPointerRotation_25);
				bool L_12;
				L_12 = InputDevice_TryGetFeatureValue_m0C1A9761DD0D1C6D1EF4BAB2FAF1BC1A9541BB9F((&___inputDevice1), L_10, L_11, NULL);
				if (!L_12)
				{
					goto IL_0073_1;
				}
			}
			{
				// currentPointerPose.Rotation = MixedRealityPlayspace.Rotation * currentPointerRotation;
				MixedRealityPose_tE60115C271AC50B8C11BA3B404BFCA99C7B2EFF5* L_13 = (&__this->___currentPointerPose_26);
				Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_14;
				L_14 = MixedRealityPlayspace_get_Rotation_mB5DCE6258ADE65064084A771A277AD2CDEC98737(NULL);
				Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_15 = __this->___currentPointerRotation_25;
				Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_16;
				L_16 = Quaternion_op_Multiply_m5AC8B39C55015059BDD09122E04E47D4BFAB2276_inline(L_14, L_15, NULL);
				MixedRealityPose_set_Rotation_m090951B4A308155032C377FF0AE6BED025C39868_inline(L_13, L_16, NULL);
			}

IL_0073_1:
			{
				// interactionMapping.PoseData = currentPointerPose;
				MixedRealityInteractionMapping_t10DB776EEA5255542F8F4AF0DC0BC566AF0095E0* L_17 = ___interactionMapping0;
				MixedRealityPose_tE60115C271AC50B8C11BA3B404BFCA99C7B2EFF5 L_18 = __this->___currentPointerPose_26;
				NullCheck(L_17);
				MixedRealityInteractionMapping_set_PoseData_m2AD97DB2F27527268C645A037E7E358A8CDF3A90(L_17, L_18, NULL);
				// if (interactionMapping.Changed)
				MixedRealityInteractionMapping_t10DB776EEA5255542F8F4AF0DC0BC566AF0095E0* L_19 = ___interactionMapping0;
				NullCheck(L_19);
				bool L_20;
				L_20 = MixedRealityInteractionMapping_get_Changed_mC98FFE1F0E915A3F03110D83000E473E7F05BC53(L_19, NULL);
				if (!L_20)
				{
					goto IL_00b9_1;
				}
			}
			{
				// CoreServices.InputSystem?.RaisePoseInputChanged(InputSource, ControllerHandedness, interactionMapping.MixedRealityInputAction, interactionMapping.PoseData);
				il2cpp_codegen_runtime_class_init_inline(CoreServices_tCB1FB80E338B89BCA07C52C15B876BC6D4B3439B_il2cpp_TypeInfo_var);
				RuntimeObject* L_21;
				L_21 = CoreServices_get_InputSystem_m47147418643299159BF4DF408F768844FDC33943(NULL);
				RuntimeObject* L_22 = L_21;
				G_B8_0 = L_22;
				if (L_22)
				{
					G_B9_0 = L_22;
					goto IL_0092_1;
				}
			}
			{
				goto IL_00c9;
			}

IL_0092_1:
			{
				RuntimeObject* L_23;
				L_23 = BaseController_get_InputSource_m8FE11DBDF7B41338ACF8AFF3A0C8FAD83E5D2870_inline(__this, NULL);
				uint8_t L_24;
				L_24 = BaseController_get_ControllerHandedness_m739908CFF885DB452AD9A115F569C455BA46A3A1_inline(__this, NULL);
				MixedRealityInteractionMapping_t10DB776EEA5255542F8F4AF0DC0BC566AF0095E0* L_25 = ___interactionMapping0;
				NullCheck(L_25);
				MixedRealityInputAction_tD3B6E9CE7F20EFC9D066C519FAB848679FC62486 L_26;
				L_26 = MixedRealityInteractionMapping_get_MixedRealityInputAction_mE813B3EBBA0A10F64E34EA6E5001D140D81141E9_inline(L_25, NULL);
				MixedRealityInteractionMapping_t10DB776EEA5255542F8F4AF0DC0BC566AF0095E0* L_27 = ___interactionMapping0;
				NullCheck(L_27);
				MixedRealityPose_tE60115C271AC50B8C11BA3B404BFCA99C7B2EFF5 L_28;
				L_28 = MixedRealityInteractionMapping_get_PoseData_m90E4BA2D7413EC29B85B025AEE96C2F7662427B0_inline(L_27, NULL);
				NullCheck(G_B9_0);
				InterfaceActionInvoker4< RuntimeObject*, uint8_t, MixedRealityInputAction_tD3B6E9CE7F20EFC9D066C519FAB848679FC62486, MixedRealityPose_tE60115C271AC50B8C11BA3B404BFCA99C7B2EFF5 >::Invoke(45 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem::RaisePoseInputChanged(Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource,Microsoft.MixedReality.Toolkit.Utilities.Handedness,Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction,Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose) */, IMixedRealityInputSystem_t73D9E8D52E761DF1CC230411D0EFD51104FF68B2_il2cpp_TypeInfo_var, G_B9_0, L_23, L_24, L_26, L_28);
				// break;
				goto IL_00c9;
			}

IL_00b1_1:
			{
				// base.UpdatePoseData(interactionMapping, inputDevice);
				MixedRealityInteractionMapping_t10DB776EEA5255542F8F4AF0DC0BC566AF0095E0* L_29 = ___interactionMapping0;
				InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD L_30 = ___inputDevice1;
				GenericXRSDKController_UpdatePoseData_mD6B1481BC7BABD3265AA994D47789B80369054C9(__this, L_29, L_30, NULL);
			}

IL_00b9_1:
			{
				// }
				goto IL_00c9;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00c9:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.OpenXR.MicrosoftMotionController::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MicrosoftMotionController__cctor_m76E7B23AAB4E75473BE162A370A1D6075377EF13 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MicrosoftMotionController_tC3CCCF3F155F3A7D33CA0B6078E5750C7C2AAE8C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral52BA95C20C03ADFBDAF6B5C64272DD4A5C9D1FE0);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static readonly ProfilerMarker UpdatePoseDataPerfMarker = new ProfilerMarker("[MRTK] WindowsMixedRealityOpenXRController.UpdatePoseData");
		ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD L_0;
		memset((&L_0), 0, sizeof(L_0));
		ProfilerMarker__ctor_mDD68B0A8B71E0301F592AF8891560150E55699C8_inline((&L_0), _stringLiteral52BA95C20C03ADFBDAF6B5C64272DD4A5C9D1FE0, /*hidden argument*/NULL);
		((MicrosoftMotionController_tC3CCCF3F155F3A7D33CA0B6078E5750C7C2AAE8C_StaticFields*)il2cpp_codegen_static_fields_for(MicrosoftMotionController_tC3CCCF3F155F3A7D33CA0B6078E5750C7C2AAE8C_il2cpp_TypeInfo_var))->___UpdatePoseDataPerfMarker_27 = L_0;
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
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.OpenXR.OpenXRCameraSettings::.ctor(Microsoft.MixedReality.Toolkit.CameraSystem.IMixedRealityCameraSystem,System.String,System.UInt32,Microsoft.MixedReality.Toolkit.CameraSystem.BaseCameraSettingsProfile)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OpenXRCameraSettings__ctor_m42D671C1FA3EB95E86E94276086CD68AD47ADCD0 (OpenXRCameraSettings_t79033AFF7FDF1F549BD9331CD1E22FA7E955EF3F* __this, RuntimeObject* ___cameraSystem0, String_t* ___name1, uint32_t ___priority2, BaseCameraSettingsProfile_tDB8373232611B34628752DF4D284B938CFE32799* ___profile3, const RuntimeMethod* method) 
{
	{
		// BaseCameraSettingsProfile profile = null) : base(cameraSystem, name, priority, profile)
		RuntimeObject* L_0 = ___cameraSystem0;
		String_t* L_1 = ___name1;
		uint32_t L_2 = ___priority2;
		BaseCameraSettingsProfile_tDB8373232611B34628752DF4D284B938CFE32799* L_3 = ___profile3;
		BaseCameraSettingsProvider__ctor_mAFEF8A563BC57786947687B6BEF2F047EE81F8C8(__this, L_0, L_1, L_2, L_3, NULL);
		// { }
		return;
	}
}
// System.Nullable`1<System.Boolean> Microsoft.MixedReality.Toolkit.XRSDK.OpenXR.OpenXRCameraSettings::get_IsActiveLoader()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 OpenXRCameraSettings_get_IsActiveLoader_mAC8E93AF1B3560E5D6A302F17C6008F6165CE20C (OpenXRCameraSettings_t79033AFF7FDF1F549BD9331CD1E22FA7E955EF3F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LoaderHelpers_IsLoaderActive_TisOpenXRLoaderBase_t58BF6FC81FD9A7698FB65D651A0BB57EA7F47637_m8A7E36C8939A77CD18EB022010A767300C47069B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// LoaderHelpers.IsLoaderActive<OpenXRLoaderBase>();
		Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 L_0;
		L_0 = LoaderHelpers_IsLoaderActive_TisOpenXRLoaderBase_t58BF6FC81FD9A7698FB65D651A0BB57EA7F47637_m8A7E36C8939A77CD18EB022010A767300C47069B(LoaderHelpers_IsLoaderActive_TisOpenXRLoaderBase_t58BF6FC81FD9A7698FB65D651A0BB57EA7F47637_m8A7E36C8939A77CD18EB022010A767300C47069B_RuntimeMethod_var);
		return L_0;
	}
}
// Microsoft.MixedReality.Toolkit.XRSDK.OpenXR.OpenXRCameraSettingsProfile Microsoft.MixedReality.Toolkit.XRSDK.OpenXR.OpenXRCameraSettings::get_Profile()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR OpenXRCameraSettingsProfile_t06E39687ABEB6884081EEB67DBC551239884CBD0* OpenXRCameraSettings_get_Profile_m629549EAA08C74C5ADB1B7BF48C8BD457F9823F6 (OpenXRCameraSettings_t79033AFF7FDF1F549BD9331CD1E22FA7E955EF3F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OpenXRCameraSettingsProfile_t06E39687ABEB6884081EEB67DBC551239884CBD0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private OpenXRCameraSettingsProfile Profile => ConfigurationProfile as OpenXRCameraSettingsProfile;
		BaseMixedRealityProfile_tB4FDEF58FFD17796C0DB7241630B71CDF38FA1D4* L_0;
		L_0 = VirtualFuncInvoker0< BaseMixedRealityProfile_tB4FDEF58FFD17796C0DB7241630B71CDF38FA1D4* >::Invoke(22 /* Microsoft.MixedReality.Toolkit.BaseMixedRealityProfile Microsoft.MixedReality.Toolkit.BaseService::get_ConfigurationProfile() */, __this);
		return ((OpenXRCameraSettingsProfile_t06E39687ABEB6884081EEB67DBC551239884CBD0*)IsInstClass((RuntimeObject*)L_0, OpenXRCameraSettingsProfile_t06E39687ABEB6884081EEB67DBC551239884CBD0_il2cpp_TypeInfo_var));
	}
}
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.OpenXR.OpenXRCameraSettings::Enable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OpenXRCameraSettings_Enable_m6DFD5402B4C96C3C5E67D6C25CA3917948EBF5CA (OpenXRCameraSettings_t79033AFF7FDF1F549BD9331CD1E22FA7E955EF3F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_HasValue_m6B76D139692C43B2AF7C695FAB044B16ACFAF355_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_Value_mE2C54C6AE9FC9F05BF44CD9D7D61DC6CD56E3E28_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (!IsActiveLoader.HasValue)
		Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 L_0;
		L_0 = OpenXRCameraSettings_get_IsActiveLoader_mAC8E93AF1B3560E5D6A302F17C6008F6165CE20C(__this, NULL);
		V_0 = L_0;
		bool L_1;
		L_1 = Nullable_1_get_HasValue_m6B76D139692C43B2AF7C695FAB044B16ACFAF355_inline((&V_0), Nullable_1_get_HasValue_m6B76D139692C43B2AF7C695FAB044B16ACFAF355_RuntimeMethod_var);
		if (L_1)
		{
			goto IL_001e;
		}
	}
	{
		// IsEnabled = false;
		VirtualActionInvoker1< bool >::Invoke(34 /* System.Void Microsoft.MixedReality.Toolkit.BaseService::set_IsEnabled(System.Boolean) */, __this, (bool)0);
		// EnableIfLoaderBecomesActive();
		OpenXRCameraSettings_EnableIfLoaderBecomesActive_m2D4CD635C80ED775A1F9A0FFFE7E6EFF63FF6C63(__this, NULL);
		// return;
		return;
	}

IL_001e:
	{
		// else if (!IsActiveLoader.Value)
		Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 L_2;
		L_2 = OpenXRCameraSettings_get_IsActiveLoader_mAC8E93AF1B3560E5D6A302F17C6008F6165CE20C(__this, NULL);
		V_0 = L_2;
		bool L_3;
		L_3 = Nullable_1_get_Value_mE2C54C6AE9FC9F05BF44CD9D7D61DC6CD56E3E28((&V_0), Nullable_1_get_Value_mE2C54C6AE9FC9F05BF44CD9D7D61DC6CD56E3E28_RuntimeMethod_var);
		if (L_3)
		{
			goto IL_0036;
		}
	}
	{
		// IsEnabled = false;
		VirtualActionInvoker1< bool >::Invoke(34 /* System.Void Microsoft.MixedReality.Toolkit.BaseService::set_IsEnabled(System.Boolean) */, __this, (bool)0);
		// return;
		return;
	}

IL_0036:
	{
		// InitializeReprojectionUpdater();
		OpenXRCameraSettings_InitializeReprojectionUpdater_mCA5FA5C216CB26ADCEE37B2B04F1701360A47F48(__this, NULL);
		// base.Enable();
		BaseService_Enable_mF054160CA265761A1223A3F8CFE50A976C7297E8(__this, NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.OpenXR.OpenXRCameraSettings::EnableIfLoaderBecomesActive()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OpenXRCameraSettings_EnableIfLoaderBecomesActive_m2D4CD635C80ED775A1F9A0FFFE7E6EFF63FF6C63 (OpenXRCameraSettings_t79033AFF7FDF1F549BD9331CD1E22FA7E955EF3F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncVoidMethodBuilder_Start_TisU3CEnableIfLoaderBecomesActiveU3Ed__7_t55A622F0A215D46947C9F623BA27D2844AC94BA9_mA8F1E5BE7017B00A7E38A6BEE056C72F44CFCB30_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CEnableIfLoaderBecomesActiveU3Ed__7_t55A622F0A215D46947C9F623BA27D2844AC94BA9 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D L_0;
		L_0 = AsyncVoidMethodBuilder_Create_mE6D291637BF7B4B6D3F8BFCA14920B9200D7A502(NULL);
		(&V_0)->___U3CU3Et__builder_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)&(((&(&V_0)->___U3CU3Et__builder_1))->___m_synchronizationContext_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&(&V_0)->___U3CU3Et__builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&(&V_0)->___U3CU3Et__builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&(&V_0)->___U3CU3Et__builder_1))->___m_task_2), (void*)NULL);
		#endif
		(&V_0)->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___U3CU3E4__this_2), (void*)__this);
		(&V_0)->___U3CU3E1__state_0 = (-1);
		AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* L_1 = (&(&V_0)->___U3CU3Et__builder_1);
		AsyncVoidMethodBuilder_Start_TisU3CEnableIfLoaderBecomesActiveU3Ed__7_t55A622F0A215D46947C9F623BA27D2844AC94BA9_mA8F1E5BE7017B00A7E38A6BEE056C72F44CFCB30(L_1, (&V_0), AsyncVoidMethodBuilder_Start_TisU3CEnableIfLoaderBecomesActiveU3Ed__7_t55A622F0A215D46947C9F623BA27D2844AC94BA9_mA8F1E5BE7017B00A7E38A6BEE056C72F44CFCB30_RuntimeMethod_var);
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.OpenXR.OpenXRCameraSettings::Disable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OpenXRCameraSettings_Disable_mDA06796B3B8DCA4C6379D8CFCCDF98C176E41566 (OpenXRCameraSettings_t79033AFF7FDF1F549BD9331CD1E22FA7E955EF3F* __this, const RuntimeMethod* method) 
{
	{
		// UninitializeReprojectionUpdater();
		OpenXRCameraSettings_UninitializeReprojectionUpdater_mC70F33D0AF09454216E04B6B4B5A2415E347311F(__this, NULL);
		// base.Disable();
		BaseService_Disable_m75AA61136BE79E0C8EA4B058D1506882A56683C4(__this, NULL);
		// }
		return;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.XRSDK.OpenXR.OpenXRCameraSettings::get_IsOpaque()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool OpenXRCameraSettings_get_IsOpaque_m52F8095143C9FD20A4B105F07C6FBE846C6D58C0 (OpenXRCameraSettings_t79033AFF7FDF1F549BD9331CD1E22FA7E955EF3F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRSubsystemHelpers_t8E4DEBF56BAC982E1CF1519D46753203AD7CC427_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	XRDisplaySubsystem_t4B00B0BF1894A039ACFA8DDC2C2EB9301118C1F1* G_B2_0 = NULL;
	XRDisplaySubsystem_t4B00B0BF1894A039ACFA8DDC2C2EB9301118C1F1* G_B1_0 = NULL;
	{
		// public override bool IsOpaque => XRSubsystemHelpers.DisplaySubsystem?.displayOpaque ?? true;
		il2cpp_codegen_runtime_class_init_inline(XRSubsystemHelpers_t8E4DEBF56BAC982E1CF1519D46753203AD7CC427_il2cpp_TypeInfo_var);
		XRDisplaySubsystem_t4B00B0BF1894A039ACFA8DDC2C2EB9301118C1F1* L_0;
		L_0 = XRSubsystemHelpers_get_DisplaySubsystem_m8EAE61D2871CD20E9BDF90940031D5F3A368D14A(NULL);
		XRDisplaySubsystem_t4B00B0BF1894A039ACFA8DDC2C2EB9301118C1F1* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000b;
		}
	}
	{
		return (bool)1;
	}

IL_000b:
	{
		NullCheck(G_B2_0);
		bool L_2;
		L_2 = XRDisplaySubsystem_get_displayOpaque_m6D1368A243BF5187222D2F86E5C0582A0E2614D9(G_B2_0, NULL);
		return L_2;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.OpenXR.OpenXRCameraSettings::InitializeReprojectionUpdater()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OpenXRCameraSettings_InitializeReprojectionUpdater_mCA5FA5C216CB26ADCEE37B2B04F1701360A47F48 (OpenXRCameraSettings_t79033AFF7FDF1F549BD9331CD1E22FA7E955EF3F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ComponentExtensions_EnsureComponent_TisOpenXRReprojectionUpdater_t0CE1222DFB4C9CCF7637817B8A3E9129315C5815_mD279AB605A627BA2147A272C37E7B377FE3F73CD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (reprojectionUpdater == null && Profile != null)
		OpenXRReprojectionUpdater_t0CE1222DFB4C9CCF7637817B8A3E9129315C5815* L_0 = __this->___reprojectionUpdater_15;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0042;
		}
	}
	{
		OpenXRCameraSettingsProfile_t06E39687ABEB6884081EEB67DBC551239884CBD0* L_2;
		L_2 = OpenXRCameraSettings_get_Profile_m629549EAA08C74C5ADB1B7BF48C8BD457F9823F6(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_2, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_3)
		{
			goto IL_0042;
		}
	}
	{
		// reprojectionUpdater = CameraCache.Main.EnsureComponent<OpenXRReprojectionUpdater>();
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_4;
		L_4 = CameraCache_get_Main_m631CABB7F5A697F4C1D76F7CB02D6791C0DDCB9E(NULL);
		OpenXRReprojectionUpdater_t0CE1222DFB4C9CCF7637817B8A3E9129315C5815* L_5;
		L_5 = ComponentExtensions_EnsureComponent_TisOpenXRReprojectionUpdater_t0CE1222DFB4C9CCF7637817B8A3E9129315C5815_mD279AB605A627BA2147A272C37E7B377FE3F73CD(L_4, ComponentExtensions_EnsureComponent_TisOpenXRReprojectionUpdater_t0CE1222DFB4C9CCF7637817B8A3E9129315C5815_mD279AB605A627BA2147A272C37E7B377FE3F73CD_RuntimeMethod_var);
		__this->___reprojectionUpdater_15 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___reprojectionUpdater_15), (void*)L_5);
		// reprojectionUpdater.ReprojectionMethod = Profile.ReprojectionMethod;
		OpenXRReprojectionUpdater_t0CE1222DFB4C9CCF7637817B8A3E9129315C5815* L_6 = __this->___reprojectionUpdater_15;
		OpenXRCameraSettingsProfile_t06E39687ABEB6884081EEB67DBC551239884CBD0* L_7;
		L_7 = OpenXRCameraSettings_get_Profile_m629549EAA08C74C5ADB1B7BF48C8BD457F9823F6(__this, NULL);
		NullCheck(L_7);
		int32_t L_8;
		L_8 = OpenXRCameraSettingsProfile_get_ReprojectionMethod_mC5A8CD3922E76B3CB4111EB9234AB08794269C48_inline(L_7, NULL);
		NullCheck(L_6);
		OpenXRReprojectionUpdater_set_ReprojectionMethod_m79D17016F9A334113095A3D33F251C4205FA4298_inline(L_6, L_8, NULL);
	}

IL_0042:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.OpenXR.OpenXRCameraSettings::UninitializeReprojectionUpdater()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OpenXRCameraSettings_UninitializeReprojectionUpdater_mC70F33D0AF09454216E04B6B4B5A2415E347311F (OpenXRCameraSettings_t79033AFF7FDF1F549BD9331CD1E22FA7E955EF3F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (reprojectionUpdater != null)
		OpenXRReprojectionUpdater_t0CE1222DFB4C9CCF7637817B8A3E9129315C5815* L_0 = __this->___reprojectionUpdater_15;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0025;
		}
	}
	{
		// UnityObjectExtensions.DestroyObject(reprojectionUpdater);
		OpenXRReprojectionUpdater_t0CE1222DFB4C9CCF7637817B8A3E9129315C5815* L_2 = __this->___reprojectionUpdater_15;
		UnityObjectExtensions_DestroyObject_mD1D35D04EA32F02BB03FC23B5FE7069D098E8071(L_2, (0.0f), NULL);
		// reprojectionUpdater = null;
		__this->___reprojectionUpdater_15 = (OpenXRReprojectionUpdater_t0CE1222DFB4C9CCF7637817B8A3E9129315C5815*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___reprojectionUpdater_15), (void*)(OpenXRReprojectionUpdater_t0CE1222DFB4C9CCF7637817B8A3E9129315C5815*)NULL);
	}

IL_0025:
	{
		// }
		return;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.XRSDK.OpenXR.OpenXRCameraSettings::<EnableIfLoaderBecomesActive>b__7_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool OpenXRCameraSettings_U3CEnableIfLoaderBecomesActiveU3Eb__7_0_m879285DD960476651349BA11AD6E05C1E5C13A67 (OpenXRCameraSettings_t79033AFF7FDF1F549BD9331CD1E22FA7E955EF3F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_HasValue_m6B76D139692C43B2AF7C695FAB044B16ACFAF355_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// await new WaitUntil(() => IsActiveLoader.HasValue);
		Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 L_0;
		L_0 = OpenXRCameraSettings_get_IsActiveLoader_mAC8E93AF1B3560E5D6A302F17C6008F6165CE20C(__this, NULL);
		V_0 = L_0;
		bool L_1;
		L_1 = Nullable_1_get_HasValue_m6B76D139692C43B2AF7C695FAB044B16ACFAF355_inline((&V_0), Nullable_1_get_HasValue_m6B76D139692C43B2AF7C695FAB044B16ACFAF355_RuntimeMethod_var);
		return L_1;
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
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.OpenXR.OpenXRCameraSettings/<EnableIfLoaderBecomesActive>d__7::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CEnableIfLoaderBecomesActiveU3Ed__7_MoveNext_mF9949531800666AB5965809D30250F7AEFFCEB5E (U3CEnableIfLoaderBecomesActiveU3Ed__7_t55A622F0A215D46947C9F623BA27D2844AC94BA9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncVoidMethodBuilder_AwaitOnCompleted_TisSimpleCoroutineAwaiter_t9DF0277C21C7F3B9CE7C9563D257D9A4821B4898_TisU3CEnableIfLoaderBecomesActiveU3Ed__7_t55A622F0A215D46947C9F623BA27D2844AC94BA9_m300BD274EB5E3030F6C717F09BCB5BEBE16615D2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_Value_mE2C54C6AE9FC9F05BF44CD9D7D61DC6CD56E3E28_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OpenXRCameraSettings_U3CEnableIfLoaderBecomesActiveU3Eb__7_0_m879285DD960476651349BA11AD6E05C1E5C13A67_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SimpleCoroutineAwaiter_t9DF0277C21C7F3B9CE7C9563D257D9A4821B4898_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitUntil_tA1CD487C5811E7C1F8C4ADA85DF5F4EFDC1D41BD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	OpenXRCameraSettings_t79033AFF7FDF1F549BD9331CD1E22FA7E955EF3F* V_1 = NULL;
	SimpleCoroutineAwaiter_t9DF0277C21C7F3B9CE7C9563D257D9A4821B4898* V_2 = NULL;
	Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 V_3;
	memset((&V_3), 0, sizeof(V_3));
	Exception_t* V_4 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		OpenXRCameraSettings_t79033AFF7FDF1F549BD9331CD1E22FA7E955EF3F* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
	}
	try
	{// begin try (depth: 1)
		{
			int32_t L_2 = V_0;
			if (!L_2)
			{
				goto IL_0050_1;
			}
		}
		{
			// await new WaitUntil(() => IsActiveLoader.HasValue);
			OpenXRCameraSettings_t79033AFF7FDF1F549BD9331CD1E22FA7E955EF3F* L_3 = V_1;
			Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* L_4 = (Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457*)il2cpp_codegen_object_new(Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457_il2cpp_TypeInfo_var);
			NullCheck(L_4);
			Func_1__ctor_mDFFAE9C73346372438B5B04C4558AC42F1A3DA22(L_4, L_3, (intptr_t)((void*)OpenXRCameraSettings_U3CEnableIfLoaderBecomesActiveU3Eb__7_0_m879285DD960476651349BA11AD6E05C1E5C13A67_RuntimeMethod_var), NULL);
			WaitUntil_tA1CD487C5811E7C1F8C4ADA85DF5F4EFDC1D41BD* L_5 = (WaitUntil_tA1CD487C5811E7C1F8C4ADA85DF5F4EFDC1D41BD*)il2cpp_codegen_object_new(WaitUntil_tA1CD487C5811E7C1F8C4ADA85DF5F4EFDC1D41BD_il2cpp_TypeInfo_var);
			NullCheck(L_5);
			WaitUntil__ctor_m2C925CF39695C35F4CB1AC997531F203AE1434DF(L_5, L_4, NULL);
			SimpleCoroutineAwaiter_t9DF0277C21C7F3B9CE7C9563D257D9A4821B4898* L_6;
			L_6 = AwaiterExtensions_GetAwaiter_m9ABD8BB8BEF36E0AC2DE8346ECFC5B1D991FAD1F(L_5, NULL);
			V_2 = L_6;
			SimpleCoroutineAwaiter_t9DF0277C21C7F3B9CE7C9563D257D9A4821B4898* L_7 = V_2;
			NullCheck(L_7);
			bool L_8;
			L_8 = SimpleCoroutineAwaiter_get_IsCompleted_m1F2F67907C96BE5BB23AF2F333A458FE3413D343_inline(L_7, NULL);
			if (L_8)
			{
				goto IL_006c_1;
			}
		}
		{
			int32_t L_9 = 0;
			V_0 = L_9;
			__this->___U3CU3E1__state_0 = L_9;
			SimpleCoroutineAwaiter_t9DF0277C21C7F3B9CE7C9563D257D9A4821B4898* L_10 = V_2;
			__this->___U3CU3Eu__1_3 = L_10;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Eu__1_3), (void*)L_10);
			AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* L_11 = (&__this->___U3CU3Et__builder_1);
			AsyncVoidMethodBuilder_AwaitOnCompleted_TisSimpleCoroutineAwaiter_t9DF0277C21C7F3B9CE7C9563D257D9A4821B4898_TisU3CEnableIfLoaderBecomesActiveU3Ed__7_t55A622F0A215D46947C9F623BA27D2844AC94BA9_m300BD274EB5E3030F6C717F09BCB5BEBE16615D2(L_11, (&V_2), __this, AsyncVoidMethodBuilder_AwaitOnCompleted_TisSimpleCoroutineAwaiter_t9DF0277C21C7F3B9CE7C9563D257D9A4821B4898_TisU3CEnableIfLoaderBecomesActiveU3Ed__7_t55A622F0A215D46947C9F623BA27D2844AC94BA9_m300BD274EB5E3030F6C717F09BCB5BEBE16615D2_RuntimeMethod_var);
			goto IL_00b6;
		}

IL_0050_1:
		{
			RuntimeObject* L_12 = __this->___U3CU3Eu__1_3;
			V_2 = ((SimpleCoroutineAwaiter_t9DF0277C21C7F3B9CE7C9563D257D9A4821B4898*)CastclassClass((RuntimeObject*)L_12, SimpleCoroutineAwaiter_t9DF0277C21C7F3B9CE7C9563D257D9A4821B4898_il2cpp_TypeInfo_var));
			__this->___U3CU3Eu__1_3 = NULL;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Eu__1_3), (void*)NULL);
			int32_t L_13 = (-1);
			V_0 = L_13;
			__this->___U3CU3E1__state_0 = L_13;
		}

IL_006c_1:
		{
			SimpleCoroutineAwaiter_t9DF0277C21C7F3B9CE7C9563D257D9A4821B4898* L_14 = V_2;
			NullCheck(L_14);
			SimpleCoroutineAwaiter_GetResult_m6C94D94C7E24A27F954CF5B2BEC3F2DE4C204A4B(L_14, NULL);
			// if (IsActiveLoader.Value)
			OpenXRCameraSettings_t79033AFF7FDF1F549BD9331CD1E22FA7E955EF3F* L_15 = V_1;
			NullCheck(L_15);
			Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 L_16;
			L_16 = OpenXRCameraSettings_get_IsActiveLoader_mAC8E93AF1B3560E5D6A302F17C6008F6165CE20C(L_15, NULL);
			V_3 = L_16;
			bool L_17;
			L_17 = Nullable_1_get_Value_mE2C54C6AE9FC9F05BF44CD9D7D61DC6CD56E3E28((&V_3), Nullable_1_get_Value_mE2C54C6AE9FC9F05BF44CD9D7D61DC6CD56E3E28_RuntimeMethod_var);
			if (!L_17)
			{
				goto IL_0088_1;
			}
		}
		{
			// Enable();
			OpenXRCameraSettings_t79033AFF7FDF1F549BD9331CD1E22FA7E955EF3F* L_18 = V_1;
			NullCheck(L_18);
			VirtualActionInvoker0::Invoke(26 /* System.Void Microsoft.MixedReality.Toolkit.BaseService::Enable() */, L_18);
		}

IL_0088_1:
		{
			goto IL_00a3;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_008a;
		}
		throw e;
	}

CATCH_008a:
	{// begin catch(System.Exception)
		V_4 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* L_19 = (&__this->___U3CU3Et__builder_1);
		Exception_t* L_20 = V_4;
		AsyncVoidMethodBuilder_SetException_mD9A6F5D1A99A62AC9DF322901BFDE05193CB177B(L_19, L_20, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_00b6;
	}// end catch (depth: 1)

IL_00a3:
	{
		// }
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* L_21 = (&__this->___U3CU3Et__builder_1);
		AsyncVoidMethodBuilder_SetResult_m008490FDF057D5F5D871F537C7A58BE36027F3DC(L_21, NULL);
	}

IL_00b6:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CEnableIfLoaderBecomesActiveU3Ed__7_MoveNext_mF9949531800666AB5965809D30250F7AEFFCEB5E_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	U3CEnableIfLoaderBecomesActiveU3Ed__7_t55A622F0A215D46947C9F623BA27D2844AC94BA9* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CEnableIfLoaderBecomesActiveU3Ed__7_t55A622F0A215D46947C9F623BA27D2844AC94BA9*>(__this + _offset);
	U3CEnableIfLoaderBecomesActiveU3Ed__7_MoveNext_mF9949531800666AB5965809D30250F7AEFFCEB5E(_thisAdjusted, method);
}
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.OpenXR.OpenXRCameraSettings/<EnableIfLoaderBecomesActive>d__7::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CEnableIfLoaderBecomesActiveU3Ed__7_SetStateMachine_m0C3E3383A1AE9AA2201D2BF4E2F1864ABF104B97 (U3CEnableIfLoaderBecomesActiveU3Ed__7_t55A622F0A215D46947C9F623BA27D2844AC94BA9* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method) 
{
	{
		AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* L_0 = (&__this->___U3CU3Et__builder_1);
		RuntimeObject* L_1 = ___stateMachine0;
		AsyncVoidMethodBuilder_SetStateMachine_m48640FB81C34D4C2B5A5BBA7F5AE17DC50BF1A25(L_0, L_1, NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CEnableIfLoaderBecomesActiveU3Ed__7_SetStateMachine_m0C3E3383A1AE9AA2201D2BF4E2F1864ABF104B97_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	U3CEnableIfLoaderBecomesActiveU3Ed__7_t55A622F0A215D46947C9F623BA27D2844AC94BA9* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CEnableIfLoaderBecomesActiveU3Ed__7_t55A622F0A215D46947C9F623BA27D2844AC94BA9*>(__this + _offset);
	U3CEnableIfLoaderBecomesActiveU3Ed__7_SetStateMachine_m0C3E3383A1AE9AA2201D2BF4E2F1864ABF104B97(_thisAdjusted, ___stateMachine0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Microsoft.MixedReality.Toolkit.XRSDK.OpenXR.HolographicReprojectionMethod Microsoft.MixedReality.Toolkit.XRSDK.OpenXR.OpenXRCameraSettingsProfile::get_ReprojectionMethod()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t OpenXRCameraSettingsProfile_get_ReprojectionMethod_mC5A8CD3922E76B3CB4111EB9234AB08794269C48 (OpenXRCameraSettingsProfile_t06E39687ABEB6884081EEB67DBC551239884CBD0* __this, const RuntimeMethod* method) 
{
	{
		// public HolographicReprojectionMethod ReprojectionMethod => reprojectionMethod;
		int32_t L_0 = __this->___reprojectionMethod_5;
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.OpenXR.OpenXRCameraSettingsProfile::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OpenXRCameraSettingsProfile__ctor_m4730970CFE10C3D4E544E8DD571DBBB8FB200173 (OpenXRCameraSettingsProfile_t06E39687ABEB6884081EEB67DBC551239884CBD0* __this, const RuntimeMethod* method) 
{
	{
		BaseCameraSettingsProfile__ctor_m1A7C4C1E005080B92C890C41B6130A70836E0EE8(__this, NULL);
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
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.OpenXR.OpenXRDeviceManager::.ctor(Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem,System.String,System.UInt32,Microsoft.MixedReality.Toolkit.BaseMixedRealityProfile)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OpenXRDeviceManager__ctor_mBBC60BB6F2CDAD8D88156729DC2072054D16BCBC (OpenXRDeviceManager_t0C31243398BC0C715BF745D6F2C7AA501C3DDA9A* __this, RuntimeObject* ___inputSystem0, String_t* ___name1, uint32_t ___priority2, BaseMixedRealityProfile_tB4FDEF58FFD17796C0DB7241630B71CDF38FA1D4* ___profile3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRSDKDeviceManager_t9F5B097AEC5AA187C3083AE6F40B34E00E1BA583_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// BaseMixedRealityProfile profile = null) : base(inputSystem, name, priority, profile) { }
		RuntimeObject* L_0 = ___inputSystem0;
		String_t* L_1 = ___name1;
		uint32_t L_2 = ___priority2;
		BaseMixedRealityProfile_tB4FDEF58FFD17796C0DB7241630B71CDF38FA1D4* L_3 = ___profile3;
		il2cpp_codegen_runtime_class_init_inline(XRSDKDeviceManager_t9F5B097AEC5AA187C3083AE6F40B34E00E1BA583_il2cpp_TypeInfo_var);
		XRSDKDeviceManager__ctor_m73C5A7C887DB58328810E99A4D9C120D5F17B1D3(__this, L_0, L_1, L_2, L_3, NULL);
		// BaseMixedRealityProfile profile = null) : base(inputSystem, name, priority, profile) { }
		return;
	}
}
// System.Nullable`1<System.Boolean> Microsoft.MixedReality.Toolkit.XRSDK.OpenXR.OpenXRDeviceManager::get_IsActiveLoader()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 OpenXRDeviceManager_get_IsActiveLoader_mD67CD8F7C978F23E5A0DB3B042B55A72624A3B25 (OpenXRDeviceManager_t0C31243398BC0C715BF745D6F2C7AA501C3DDA9A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LoaderHelpers_IsLoaderActive_TisOpenXRLoaderBase_t58BF6FC81FD9A7698FB65D651A0BB57EA7F47637_m8A7E36C8939A77CD18EB022010A767300C47069B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// LoaderHelpers.IsLoaderActive<OpenXRLoaderBase>();
		Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 L_0;
		L_0 = LoaderHelpers_IsLoaderActive_TisOpenXRLoaderBase_t58BF6FC81FD9A7698FB65D651A0BB57EA7F47637_m8A7E36C8939A77CD18EB022010A767300C47069B(LoaderHelpers_IsLoaderActive_TisOpenXRLoaderBase_t58BF6FC81FD9A7698FB65D651A0BB57EA7F47637_m8A7E36C8939A77CD18EB022010A767300C47069B_RuntimeMethod_var);
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.OpenXR.OpenXRDeviceManager::Enable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OpenXRDeviceManager_Enable_mA8A0581EA41B4E648324CD8ED026A9863627C167 (OpenXRDeviceManager_t0C31243398BC0C715BF745D6F2C7AA501C3DDA9A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_HasValue_m6B76D139692C43B2AF7C695FAB044B16ACFAF355_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_Value_mE2C54C6AE9FC9F05BF44CD9D7D61DC6CD56E3E28_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (!IsActiveLoader.HasValue)
		Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 L_0;
		L_0 = OpenXRDeviceManager_get_IsActiveLoader_mD67CD8F7C978F23E5A0DB3B042B55A72624A3B25(__this, NULL);
		V_0 = L_0;
		bool L_1;
		L_1 = Nullable_1_get_HasValue_m6B76D139692C43B2AF7C695FAB044B16ACFAF355_inline((&V_0), Nullable_1_get_HasValue_m6B76D139692C43B2AF7C695FAB044B16ACFAF355_RuntimeMethod_var);
		if (L_1)
		{
			goto IL_001e;
		}
	}
	{
		// IsEnabled = false;
		VirtualActionInvoker1< bool >::Invoke(34 /* System.Void Microsoft.MixedReality.Toolkit.BaseService::set_IsEnabled(System.Boolean) */, __this, (bool)0);
		// EnableIfLoaderBecomesActive();
		OpenXRDeviceManager_EnableIfLoaderBecomesActive_mF7CF41EDF8D857E28A6122A9E9097F17AC664837(__this, NULL);
		// return;
		return;
	}

IL_001e:
	{
		// else if (!IsActiveLoader.Value)
		Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 L_2;
		L_2 = OpenXRDeviceManager_get_IsActiveLoader_mD67CD8F7C978F23E5A0DB3B042B55A72624A3B25(__this, NULL);
		V_0 = L_2;
		bool L_3;
		L_3 = Nullable_1_get_Value_mE2C54C6AE9FC9F05BF44CD9D7D61DC6CD56E3E28((&V_0), Nullable_1_get_Value_mE2C54C6AE9FC9F05BF44CD9D7D61DC6CD56E3E28_RuntimeMethod_var);
		if (L_3)
		{
			goto IL_0036;
		}
	}
	{
		// IsEnabled = false;
		VirtualActionInvoker1< bool >::Invoke(34 /* System.Void Microsoft.MixedReality.Toolkit.BaseService::set_IsEnabled(System.Boolean) */, __this, (bool)0);
		// return;
		return;
	}

IL_0036:
	{
		// base.Enable();
		BaseService_Enable_mF054160CA265761A1223A3F8CFE50A976C7297E8(__this, NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.OpenXR.OpenXRDeviceManager::EnableIfLoaderBecomesActive()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OpenXRDeviceManager_EnableIfLoaderBecomesActive_mF7CF41EDF8D857E28A6122A9E9097F17AC664837 (OpenXRDeviceManager_t0C31243398BC0C715BF745D6F2C7AA501C3DDA9A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncVoidMethodBuilder_Start_TisU3CEnableIfLoaderBecomesActiveU3Ed__4_tBEE69E1D11D867DAE899E661B1399BB7FE0463FD_m26D778C7FB9AA545044BDE3F941F10A60279F857_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CEnableIfLoaderBecomesActiveU3Ed__4_tBEE69E1D11D867DAE899E661B1399BB7FE0463FD V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D L_0;
		L_0 = AsyncVoidMethodBuilder_Create_mE6D291637BF7B4B6D3F8BFCA14920B9200D7A502(NULL);
		(&V_0)->___U3CU3Et__builder_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)&(((&(&V_0)->___U3CU3Et__builder_1))->___m_synchronizationContext_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&(&V_0)->___U3CU3Et__builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&(&V_0)->___U3CU3Et__builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&(&V_0)->___U3CU3Et__builder_1))->___m_task_2), (void*)NULL);
		#endif
		(&V_0)->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___U3CU3E4__this_2), (void*)__this);
		(&V_0)->___U3CU3E1__state_0 = (-1);
		AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* L_1 = (&(&V_0)->___U3CU3Et__builder_1);
		AsyncVoidMethodBuilder_Start_TisU3CEnableIfLoaderBecomesActiveU3Ed__4_tBEE69E1D11D867DAE899E661B1399BB7FE0463FD_m26D778C7FB9AA545044BDE3F941F10A60279F857(L_1, (&V_0), AsyncVoidMethodBuilder_Start_TisU3CEnableIfLoaderBecomesActiveU3Ed__4_tBEE69E1D11D867DAE899E661B1399BB7FE0463FD_m26D778C7FB9AA545044BDE3F941F10A60279F857_RuntimeMethod_var);
		return;
	}
}
// Microsoft.MixedReality.Toolkit.XRSDK.Input.GenericXRSDKController Microsoft.MixedReality.Toolkit.XRSDK.OpenXR.OpenXRDeviceManager::GetOrAddController(UnityEngine.XR.InputDevice)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GenericXRSDKController_tB5136D037E3BD7D743A519016EA2710F7ED980DE* OpenXRDeviceManager_GetOrAddController_m5C588AB159527810A2BB9E53680B8218C8290A61 (OpenXRDeviceManager_t0C31243398BC0C715BF745D6F2C7AA501C3DDA9A* __this, InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD ___inputDevice0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CommonUsages_t9208F514F1E77BE70AC53EFEC94D57EDDAF3B8E1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m59F621E299B2B5A5E0B1C56AF791A0394BF6479E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_m49678D0E11E60CE005DD021DECFC686C20B0DA18_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m5CC2CE4AA8CC3E60E913BE28E235D43F6FE6E7CD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Keys_m6BA54FEB7A1DC9F37530EE530E783428CBA80148_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m044BA768636CFC26F6615FB333B42A7DF8C6F3ED_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mAF547A63238FF65774DE78693B8B79270BF61D80_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m923A8C26E9A3F06386C1E59016BC27BDFCC50AF3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyCollection_GetEnumerator_m03E5076D095402E679C6DB5D11948821578C48A2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OpenXRDeviceManager_t0C31243398BC0C715BF745D6F2C7AA501C3DDA9A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRSDKDeviceManager_t9F5B097AEC5AA187C3083AE6F40B34E00E1BA583_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	AutoScope_tFB983697E28885CB10FFDB92D7EFD0615AEF3139 V_0;
	memset((&V_0), 0, sizeof(V_0));
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	Enumerator_t361AB300DC1B3465BE162090AA60CFC65CF822CB V_3;
	memset((&V_3), 0, sizeof(V_3));
	InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD V_4;
	memset((&V_4), 0, sizeof(V_4));
	GenericXRSDKController_tB5136D037E3BD7D743A519016EA2710F7ED980DE* V_5 = NULL;
	{
		// using (GetOrAddControllerPerfMarker.Auto())
		il2cpp_codegen_runtime_class_init_inline(OpenXRDeviceManager_t0C31243398BC0C715BF745D6F2C7AA501C3DDA9A_il2cpp_TypeInfo_var);
		ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD L_0 = ((OpenXRDeviceManager_t0C31243398BC0C715BF745D6F2C7AA501C3DDA9A_StaticFields*)il2cpp_codegen_static_fields_for(OpenXRDeviceManager_t0C31243398BC0C715BF745D6F2C7AA501C3DDA9A_il2cpp_TypeInfo_var))->___GetOrAddControllerPerfMarker_29;
		V_1 = L_0;
		AutoScope_tFB983697E28885CB10FFDB92D7EFD0615AEF3139 L_1;
		L_1 = ProfilerMarker_Auto_m133FA724EB95D16187B37D2C8A501D7E989B1F8D_inline((&V_1), NULL);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_012d:
			{// begin finally (depth: 1)
				AutoScope_Dispose_mED763F3F51261EF8FB79DB32CD06E0A3F6C40481_inline((&V_0), NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				// if (!ActiveControllers.ContainsKey(inputDevice))
				il2cpp_codegen_runtime_class_init_inline(XRSDKDeviceManager_t9F5B097AEC5AA187C3083AE6F40B34E00E1BA583_il2cpp_TypeInfo_var);
				Dictionary_2_t500395CB4236088AFBF004A0D9DD896F9DC12876* L_2 = ((XRSDKDeviceManager_t9F5B097AEC5AA187C3083AE6F40B34E00E1BA583_StaticFields*)il2cpp_codegen_static_fields_for(XRSDKDeviceManager_t9F5B097AEC5AA187C3083AE6F40B34E00E1BA583_il2cpp_TypeInfo_var))->___ActiveControllers_21;
				InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD L_3 = ___inputDevice0;
				NullCheck(L_2);
				bool L_4;
				L_4 = Dictionary_2_ContainsKey_m49678D0E11E60CE005DD021DECFC686C20B0DA18(L_2, L_3, Dictionary_2_ContainsKey_m49678D0E11E60CE005DD021DECFC686C20B0DA18_RuntimeMethod_var);
				if (L_4)
				{
					goto IL_00fb_1;
				}
			}
			{
				// foreach (InputDevice device in ActiveControllers.Keys)
				il2cpp_codegen_runtime_class_init_inline(XRSDKDeviceManager_t9F5B097AEC5AA187C3083AE6F40B34E00E1BA583_il2cpp_TypeInfo_var);
				Dictionary_2_t500395CB4236088AFBF004A0D9DD896F9DC12876* L_5 = ((XRSDKDeviceManager_t9F5B097AEC5AA187C3083AE6F40B34E00E1BA583_StaticFields*)il2cpp_codegen_static_fields_for(XRSDKDeviceManager_t9F5B097AEC5AA187C3083AE6F40B34E00E1BA583_il2cpp_TypeInfo_var))->___ActiveControllers_21;
				NullCheck(L_5);
				KeyCollection_tAC459CF1D9D2C68BB347E1A1EF4519DCC3DD58A1* L_6;
				L_6 = Dictionary_2_get_Keys_m6BA54FEB7A1DC9F37530EE530E783428CBA80148(L_5, Dictionary_2_get_Keys_m6BA54FEB7A1DC9F37530EE530E783428CBA80148_RuntimeMethod_var);
				NullCheck(L_6);
				Enumerator_t361AB300DC1B3465BE162090AA60CFC65CF822CB L_7;
				L_7 = KeyCollection_GetEnumerator_m03E5076D095402E679C6DB5D11948821578C48A2(L_6, KeyCollection_GetEnumerator_m03E5076D095402E679C6DB5D11948821578C48A2_RuntimeMethod_var);
				V_3 = L_7;
			}
			{
				auto __finallyBlock = il2cpp::utils::Finally([&]
				{

FINALLY_00ed_1:
					{// begin finally (depth: 2)
						Enumerator_Dispose_m044BA768636CFC26F6615FB333B42A7DF8C6F3ED((&V_3), Enumerator_Dispose_m044BA768636CFC26F6615FB333B42A7DF8C6F3ED_RuntimeMethod_var);
						return;
					}// end finally (depth: 2)
				});
				try
				{// begin try (depth: 2)
					{
						goto IL_00df_2;
					}

IL_0033_2:
					{
						// foreach (InputDevice device in ActiveControllers.Keys)
						InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD L_8;
						L_8 = Enumerator_get_Current_m923A8C26E9A3F06386C1E59016BC27BDFCC50AF3_inline((&V_3), Enumerator_get_Current_m923A8C26E9A3F06386C1E59016BC27BDFCC50AF3_RuntimeMethod_var);
						V_4 = L_8;
						// if (((device.characteristics.IsMaskSet(InputDeviceCharacteristics.Controller) && inputDevice.characteristics.IsMaskSet(InputDeviceCharacteristics.Controller))
						//     || (device.characteristics.IsMaskSet(InputDeviceCharacteristics.HandTracking) && inputDevice.characteristics.IsMaskSet(InputDeviceCharacteristics.HandTracking)))
						//     && ((device.characteristics.IsMaskSet(InputDeviceCharacteristics.Left) && inputDevice.characteristics.IsMaskSet(InputDeviceCharacteristics.Left))
						//     || (device.characteristics.IsMaskSet(InputDeviceCharacteristics.Right) && inputDevice.characteristics.IsMaskSet(InputDeviceCharacteristics.Right))))
						uint32_t L_9;
						L_9 = InputDevice_get_characteristics_mEEDC9AB2254C155C47B48848FECF347A87925ADB((&V_4), NULL);
						bool L_10;
						L_10 = FlagsExtensions_IsMaskSet_mBBB9BEF18A073269AF4EF9EEFF109D11DAB2ED3A(L_9, ((int32_t)64), NULL);
						if (!L_10)
						{
							goto IL_005c_2;
						}
					}
					{
						uint32_t L_11;
						L_11 = InputDevice_get_characteristics_mEEDC9AB2254C155C47B48848FECF347A87925ADB((&___inputDevice0), NULL);
						bool L_12;
						L_12 = FlagsExtensions_IsMaskSet_mBBB9BEF18A073269AF4EF9EEFF109D11DAB2ED3A(L_11, ((int32_t)64), NULL);
						if (L_12)
						{
							goto IL_007a_2;
						}
					}

IL_005c_2:
					{
						uint32_t L_13;
						L_13 = InputDevice_get_characteristics_mEEDC9AB2254C155C47B48848FECF347A87925ADB((&V_4), NULL);
						bool L_14;
						L_14 = FlagsExtensions_IsMaskSet_mBBB9BEF18A073269AF4EF9EEFF109D11DAB2ED3A(L_13, 8, NULL);
						if (!L_14)
						{
							goto IL_00df_2;
						}
					}
					{
						uint32_t L_15;
						L_15 = InputDevice_get_characteristics_mEEDC9AB2254C155C47B48848FECF347A87925ADB((&___inputDevice0), NULL);
						bool L_16;
						L_16 = FlagsExtensions_IsMaskSet_mBBB9BEF18A073269AF4EF9EEFF109D11DAB2ED3A(L_15, 8, NULL);
						if (!L_16)
						{
							goto IL_00df_2;
						}
					}

IL_007a_2:
					{
						uint32_t L_17;
						L_17 = InputDevice_get_characteristics_mEEDC9AB2254C155C47B48848FECF347A87925ADB((&V_4), NULL);
						bool L_18;
						L_18 = FlagsExtensions_IsMaskSet_mBBB9BEF18A073269AF4EF9EEFF109D11DAB2ED3A(L_17, ((int32_t)256), NULL);
						if (!L_18)
						{
							goto IL_00a0_2;
						}
					}
					{
						uint32_t L_19;
						L_19 = InputDevice_get_characteristics_mEEDC9AB2254C155C47B48848FECF347A87925ADB((&___inputDevice0), NULL);
						bool L_20;
						L_20 = FlagsExtensions_IsMaskSet_mBBB9BEF18A073269AF4EF9EEFF109D11DAB2ED3A(L_19, ((int32_t)256), NULL);
						if (L_20)
						{
							goto IL_00c6_2;
						}
					}

IL_00a0_2:
					{
						uint32_t L_21;
						L_21 = InputDevice_get_characteristics_mEEDC9AB2254C155C47B48848FECF347A87925ADB((&V_4), NULL);
						bool L_22;
						L_22 = FlagsExtensions_IsMaskSet_mBBB9BEF18A073269AF4EF9EEFF109D11DAB2ED3A(L_21, ((int32_t)512), NULL);
						if (!L_22)
						{
							goto IL_00df_2;
						}
					}
					{
						uint32_t L_23;
						L_23 = InputDevice_get_characteristics_mEEDC9AB2254C155C47B48848FECF347A87925ADB((&___inputDevice0), NULL);
						bool L_24;
						L_24 = FlagsExtensions_IsMaskSet_mBBB9BEF18A073269AF4EF9EEFF109D11DAB2ED3A(L_23, ((int32_t)512), NULL);
						if (!L_24)
						{
							goto IL_00df_2;
						}
					}

IL_00c6_2:
					{
						// ActiveControllers.Add(inputDevice, ActiveControllers[device]);
						il2cpp_codegen_runtime_class_init_inline(XRSDKDeviceManager_t9F5B097AEC5AA187C3083AE6F40B34E00E1BA583_il2cpp_TypeInfo_var);
						Dictionary_2_t500395CB4236088AFBF004A0D9DD896F9DC12876* L_25 = ((XRSDKDeviceManager_t9F5B097AEC5AA187C3083AE6F40B34E00E1BA583_StaticFields*)il2cpp_codegen_static_fields_for(XRSDKDeviceManager_t9F5B097AEC5AA187C3083AE6F40B34E00E1BA583_il2cpp_TypeInfo_var))->___ActiveControllers_21;
						InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD L_26 = ___inputDevice0;
						Dictionary_2_t500395CB4236088AFBF004A0D9DD896F9DC12876* L_27 = ((XRSDKDeviceManager_t9F5B097AEC5AA187C3083AE6F40B34E00E1BA583_StaticFields*)il2cpp_codegen_static_fields_for(XRSDKDeviceManager_t9F5B097AEC5AA187C3083AE6F40B34E00E1BA583_il2cpp_TypeInfo_var))->___ActiveControllers_21;
						InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD L_28 = V_4;
						NullCheck(L_27);
						GenericXRSDKController_tB5136D037E3BD7D743A519016EA2710F7ED980DE* L_29;
						L_29 = Dictionary_2_get_Item_m5CC2CE4AA8CC3E60E913BE28E235D43F6FE6E7CD(L_27, L_28, Dictionary_2_get_Item_m5CC2CE4AA8CC3E60E913BE28E235D43F6FE6E7CD_RuntimeMethod_var);
						NullCheck(L_25);
						Dictionary_2_Add_m59F621E299B2B5A5E0B1C56AF791A0394BF6479E(L_25, L_26, L_29, Dictionary_2_Add_m59F621E299B2B5A5E0B1C56AF791A0394BF6479E_RuntimeMethod_var);
						// break;
						goto IL_00fb_1;
					}

IL_00df_2:
					{
						// foreach (InputDevice device in ActiveControllers.Keys)
						bool L_30;
						L_30 = Enumerator_MoveNext_mAF547A63238FF65774DE78693B8B79270BF61D80((&V_3), Enumerator_MoveNext_mAF547A63238FF65774DE78693B8B79270BF61D80_RuntimeMethod_var);
						if (L_30)
						{
							goto IL_0033_2;
						}
					}
					{
						goto IL_00fb_1;
					}
				}// end try (depth: 2)
				catch(Il2CppExceptionWrapper& e)
				{
					__finallyBlock.StoreException(e.ex);
				}
			}

IL_00fb_1:
			{
				// if (inputDevice.characteristics.IsMaskSet(InputDeviceCharacteristics.HandTracking)
				//     && inputDevice.TryGetFeatureValue(CommonUsages.isTracked, out bool isTracked)
				//     && !isTracked)
				uint32_t L_31;
				L_31 = InputDevice_get_characteristics_mEEDC9AB2254C155C47B48848FECF347A87925ADB((&___inputDevice0), NULL);
				bool L_32;
				L_32 = FlagsExtensions_IsMaskSet_mBBB9BEF18A073269AF4EF9EEFF109D11DAB2ED3A(L_31, 8, NULL);
				if (!L_32)
				{
					goto IL_0122_1;
				}
			}
			{
				il2cpp_codegen_runtime_class_init_inline(CommonUsages_t9208F514F1E77BE70AC53EFEC94D57EDDAF3B8E1_il2cpp_TypeInfo_var);
				InputFeatureUsage_1_tE336B2F0B9AC721519BFA17A08D6353FD5221637 L_33 = ((CommonUsages_t9208F514F1E77BE70AC53EFEC94D57EDDAF3B8E1_StaticFields*)il2cpp_codegen_static_fields_for(CommonUsages_t9208F514F1E77BE70AC53EFEC94D57EDDAF3B8E1_il2cpp_TypeInfo_var))->___isTracked_0;
				bool L_34;
				L_34 = InputDevice_TryGetFeatureValue_m24EC3B6C41AE4098269427232AD5F52E786BF884((&___inputDevice0), L_33, (&V_2), NULL);
				if (!L_34)
				{
					goto IL_0122_1;
				}
			}
			{
				bool L_35 = V_2;
				if (L_35)
				{
					goto IL_0122_1;
				}
			}
			{
				// return null;
				V_5 = (GenericXRSDKController_tB5136D037E3BD7D743A519016EA2710F7ED980DE*)NULL;
				goto IL_013b;
			}

IL_0122_1:
			{
				// return base.GetOrAddController(inputDevice);
				InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD L_36 = ___inputDevice0;
				GenericXRSDKController_tB5136D037E3BD7D743A519016EA2710F7ED980DE* L_37;
				L_37 = XRSDKDeviceManager_GetOrAddController_mDEC99430B4E2E3873F5A94475EAC519587667C7D(__this, L_36, NULL);
				V_5 = L_37;
				goto IL_013b;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_013b:
	{
		// }
		GenericXRSDKController_tB5136D037E3BD7D743A519016EA2710F7ED980DE* L_38 = V_5;
		return L_38;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.OpenXR.OpenXRDeviceManager::RemoveController(UnityEngine.XR.InputDevice)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OpenXRDeviceManager_RemoveController_mAB2139499F434B6E73A6E5CC50FB1A7153A7A1B1 (OpenXRDeviceManager_t0C31243398BC0C715BF745D6F2C7AA501C3DDA9A* __this, InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD ___inputDevice0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Remove_m3FE21AD019B8AD4E0049631DC383A26CD5F61953_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Keys_m6BA54FEB7A1DC9F37530EE530E783428CBA80148_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m044BA768636CFC26F6615FB333B42A7DF8C6F3ED_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mAF547A63238FF65774DE78693B8B79270BF61D80_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m923A8C26E9A3F06386C1E59016BC27BDFCC50AF3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyCollection_GetEnumerator_m03E5076D095402E679C6DB5D11948821578C48A2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OpenXRDeviceManager_t0C31243398BC0C715BF745D6F2C7AA501C3DDA9A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRSDKDeviceManager_t9F5B097AEC5AA187C3083AE6F40B34E00E1BA583_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	AutoScope_tFB983697E28885CB10FFDB92D7EFD0615AEF3139 V_0;
	memset((&V_0), 0, sizeof(V_0));
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD V_1;
	memset((&V_1), 0, sizeof(V_1));
	Enumerator_t361AB300DC1B3465BE162090AA60CFC65CF822CB V_2;
	memset((&V_2), 0, sizeof(V_2));
	InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		// using (RemoveControllerPerfMarker.Auto())
		il2cpp_codegen_runtime_class_init_inline(OpenXRDeviceManager_t0C31243398BC0C715BF745D6F2C7AA501C3DDA9A_il2cpp_TypeInfo_var);
		ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD L_0 = ((OpenXRDeviceManager_t0C31243398BC0C715BF745D6F2C7AA501C3DDA9A_StaticFields*)il2cpp_codegen_static_fields_for(OpenXRDeviceManager_t0C31243398BC0C715BF745D6F2C7AA501C3DDA9A_il2cpp_TypeInfo_var))->___RemoveControllerPerfMarker_30;
		V_1 = L_0;
		AutoScope_tFB983697E28885CB10FFDB92D7EFD0615AEF3139 L_1;
		L_1 = ProfilerMarker_Auto_m133FA724EB95D16187B37D2C8A501D7E989B1F8D_inline((&V_1), NULL);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00f4:
			{// begin finally (depth: 1)
				AutoScope_Dispose_mED763F3F51261EF8FB79DB32CD06E0A3F6C40481_inline((&V_0), NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				// foreach (InputDevice device in ActiveControllers.Keys)
				il2cpp_codegen_runtime_class_init_inline(XRSDKDeviceManager_t9F5B097AEC5AA187C3083AE6F40B34E00E1BA583_il2cpp_TypeInfo_var);
				Dictionary_2_t500395CB4236088AFBF004A0D9DD896F9DC12876* L_2 = ((XRSDKDeviceManager_t9F5B097AEC5AA187C3083AE6F40B34E00E1BA583_StaticFields*)il2cpp_codegen_static_fields_for(XRSDKDeviceManager_t9F5B097AEC5AA187C3083AE6F40B34E00E1BA583_il2cpp_TypeInfo_var))->___ActiveControllers_21;
				NullCheck(L_2);
				KeyCollection_tAC459CF1D9D2C68BB347E1A1EF4519DCC3DD58A1* L_3;
				L_3 = Dictionary_2_get_Keys_m6BA54FEB7A1DC9F37530EE530E783428CBA80148(L_2, Dictionary_2_get_Keys_m6BA54FEB7A1DC9F37530EE530E783428CBA80148_RuntimeMethod_var);
				NullCheck(L_3);
				Enumerator_t361AB300DC1B3465BE162090AA60CFC65CF822CB L_4;
				L_4 = KeyCollection_GetEnumerator_m03E5076D095402E679C6DB5D11948821578C48A2(L_3, KeyCollection_GetEnumerator_m03E5076D095402E679C6DB5D11948821578C48A2_RuntimeMethod_var);
				V_2 = L_4;
			}
			{
				auto __finallyBlock = il2cpp::utils::Finally([&]
				{

FINALLY_00dd_1:
					{// begin finally (depth: 2)
						Enumerator_Dispose_m044BA768636CFC26F6615FB333B42A7DF8C6F3ED((&V_2), Enumerator_Dispose_m044BA768636CFC26F6615FB333B42A7DF8C6F3ED_RuntimeMethod_var);
						return;
					}// end finally (depth: 2)
				});
				try
				{// begin try (depth: 2)
					{
						goto IL_00cf_2;
					}

IL_0023_2:
					{
						// foreach (InputDevice device in ActiveControllers.Keys)
						InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD L_5;
						L_5 = Enumerator_get_Current_m923A8C26E9A3F06386C1E59016BC27BDFCC50AF3_inline((&V_2), Enumerator_get_Current_m923A8C26E9A3F06386C1E59016BC27BDFCC50AF3_RuntimeMethod_var);
						V_3 = L_5;
						// if (device != inputDevice
						//     && ((device.characteristics.IsMaskSet(InputDeviceCharacteristics.Controller) && inputDevice.characteristics.IsMaskSet(InputDeviceCharacteristics.Controller))
						//     || (device.characteristics.IsMaskSet(InputDeviceCharacteristics.HandTracking) && inputDevice.characteristics.IsMaskSet(InputDeviceCharacteristics.HandTracking)))
						//     && ((device.characteristics.IsMaskSet(InputDeviceCharacteristics.Left) && inputDevice.characteristics.IsMaskSet(InputDeviceCharacteristics.Left))
						//     || (device.characteristics.IsMaskSet(InputDeviceCharacteristics.Right) && inputDevice.characteristics.IsMaskSet(InputDeviceCharacteristics.Right))))
						InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD L_6 = V_3;
						InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD L_7 = ___inputDevice0;
						bool L_8;
						L_8 = InputDevice_op_Inequality_m941C10D2987FCEFDB4FA37B74C2652C917685772(L_6, L_7, NULL);
						if (!L_8)
						{
							goto IL_00cf_2;
						}
					}
					{
						uint32_t L_9;
						L_9 = InputDevice_get_characteristics_mEEDC9AB2254C155C47B48848FECF347A87925ADB((&V_3), NULL);
						bool L_10;
						L_10 = FlagsExtensions_IsMaskSet_mBBB9BEF18A073269AF4EF9EEFF109D11DAB2ED3A(L_9, ((int32_t)64), NULL);
						if (!L_10)
						{
							goto IL_0057_2;
						}
					}
					{
						uint32_t L_11;
						L_11 = InputDevice_get_characteristics_mEEDC9AB2254C155C47B48848FECF347A87925ADB((&___inputDevice0), NULL);
						bool L_12;
						L_12 = FlagsExtensions_IsMaskSet_mBBB9BEF18A073269AF4EF9EEFF109D11DAB2ED3A(L_11, ((int32_t)64), NULL);
						if (L_12)
						{
							goto IL_0075_2;
						}
					}

IL_0057_2:
					{
						uint32_t L_13;
						L_13 = InputDevice_get_characteristics_mEEDC9AB2254C155C47B48848FECF347A87925ADB((&V_3), NULL);
						bool L_14;
						L_14 = FlagsExtensions_IsMaskSet_mBBB9BEF18A073269AF4EF9EEFF109D11DAB2ED3A(L_13, 8, NULL);
						if (!L_14)
						{
							goto IL_00cf_2;
						}
					}
					{
						uint32_t L_15;
						L_15 = InputDevice_get_characteristics_mEEDC9AB2254C155C47B48848FECF347A87925ADB((&___inputDevice0), NULL);
						bool L_16;
						L_16 = FlagsExtensions_IsMaskSet_mBBB9BEF18A073269AF4EF9EEFF109D11DAB2ED3A(L_15, 8, NULL);
						if (!L_16)
						{
							goto IL_00cf_2;
						}
					}

IL_0075_2:
					{
						uint32_t L_17;
						L_17 = InputDevice_get_characteristics_mEEDC9AB2254C155C47B48848FECF347A87925ADB((&V_3), NULL);
						bool L_18;
						L_18 = FlagsExtensions_IsMaskSet_mBBB9BEF18A073269AF4EF9EEFF109D11DAB2ED3A(L_17, ((int32_t)256), NULL);
						if (!L_18)
						{
							goto IL_009b_2;
						}
					}
					{
						uint32_t L_19;
						L_19 = InputDevice_get_characteristics_mEEDC9AB2254C155C47B48848FECF347A87925ADB((&___inputDevice0), NULL);
						bool L_20;
						L_20 = FlagsExtensions_IsMaskSet_mBBB9BEF18A073269AF4EF9EEFF109D11DAB2ED3A(L_19, ((int32_t)256), NULL);
						if (L_20)
						{
							goto IL_00c1_2;
						}
					}

IL_009b_2:
					{
						uint32_t L_21;
						L_21 = InputDevice_get_characteristics_mEEDC9AB2254C155C47B48848FECF347A87925ADB((&V_3), NULL);
						bool L_22;
						L_22 = FlagsExtensions_IsMaskSet_mBBB9BEF18A073269AF4EF9EEFF109D11DAB2ED3A(L_21, ((int32_t)512), NULL);
						if (!L_22)
						{
							goto IL_00cf_2;
						}
					}
					{
						uint32_t L_23;
						L_23 = InputDevice_get_characteristics_mEEDC9AB2254C155C47B48848FECF347A87925ADB((&___inputDevice0), NULL);
						bool L_24;
						L_24 = FlagsExtensions_IsMaskSet_mBBB9BEF18A073269AF4EF9EEFF109D11DAB2ED3A(L_23, ((int32_t)512), NULL);
						if (!L_24)
						{
							goto IL_00cf_2;
						}
					}

IL_00c1_2:
					{
						// ActiveControllers.Remove(inputDevice);
						il2cpp_codegen_runtime_class_init_inline(XRSDKDeviceManager_t9F5B097AEC5AA187C3083AE6F40B34E00E1BA583_il2cpp_TypeInfo_var);
						Dictionary_2_t500395CB4236088AFBF004A0D9DD896F9DC12876* L_25 = ((XRSDKDeviceManager_t9F5B097AEC5AA187C3083AE6F40B34E00E1BA583_StaticFields*)il2cpp_codegen_static_fields_for(XRSDKDeviceManager_t9F5B097AEC5AA187C3083AE6F40B34E00E1BA583_il2cpp_TypeInfo_var))->___ActiveControllers_21;
						InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD L_26 = ___inputDevice0;
						NullCheck(L_25);
						bool L_27;
						L_27 = Dictionary_2_Remove_m3FE21AD019B8AD4E0049631DC383A26CD5F61953(L_25, L_26, Dictionary_2_Remove_m3FE21AD019B8AD4E0049631DC383A26CD5F61953_RuntimeMethod_var);
						// return;
						goto IL_0102;
					}

IL_00cf_2:
					{
						// foreach (InputDevice device in ActiveControllers.Keys)
						bool L_28;
						L_28 = Enumerator_MoveNext_mAF547A63238FF65774DE78693B8B79270BF61D80((&V_2), Enumerator_MoveNext_mAF547A63238FF65774DE78693B8B79270BF61D80_RuntimeMethod_var);
						if (L_28)
						{
							goto IL_0023_2;
						}
					}
					{
						goto IL_00eb_1;
					}
				}// end try (depth: 2)
				catch(Il2CppExceptionWrapper& e)
				{
					__finallyBlock.StoreException(e.ex);
				}
			}

IL_00eb_1:
			{
				// base.RemoveController(inputDevice);
				InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD L_29 = ___inputDevice0;
				XRSDKDeviceManager_RemoveController_m453AC0046F3CB13E1BE83734FD811E8D3CF7F5D4(__this, L_29, NULL);
				// }
				goto IL_0102;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0102:
	{
		// }
		return;
	}
}
// System.Type Microsoft.MixedReality.Toolkit.XRSDK.OpenXR.OpenXRDeviceManager::GetControllerType(Microsoft.MixedReality.Toolkit.Input.SupportedControllerType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* OpenXRDeviceManager_GetControllerType_m137F5B70ADCCF40C3C96715627493ECF99B40643 (OpenXRDeviceManager_t0C31243398BC0C715BF745D6F2C7AA501C3DDA9A* __this, int32_t ___supportedControllerType0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HPReverbG2Controller_tC92BB9012B3B951EDF062F795D81AB05B8F8BCAB_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MicrosoftArticulatedHand_tFE375102CA3BF7EBD1CB6E1BD88C26C51F116CFB_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MicrosoftMotionController_tC3CCCF3F155F3A7D33CA0B6078E5750C7C2AAE8C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___supportedControllerType0;
		if ((((int32_t)L_0) == ((int32_t)((int32_t)32))))
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_1 = ___supportedControllerType0;
		if ((((int32_t)L_1) == ((int32_t)((int32_t)1024))))
		{
			goto IL_002d;
		}
	}
	{
		int32_t L_2 = ___supportedControllerType0;
		if ((((int32_t)L_2) == ((int32_t)((int32_t)4096))))
		{
			goto IL_0022;
		}
	}
	{
		goto IL_0038;
	}

IL_0017:
	{
		// return typeof(MicrosoftMotionController);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (MicrosoftMotionController_tC3CCCF3F155F3A7D33CA0B6078E5750C7C2AAE8C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_3, NULL);
		return L_4;
	}

IL_0022:
	{
		// return typeof(HPReverbG2Controller);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_5 = { reinterpret_cast<intptr_t> (HPReverbG2Controller_tC92BB9012B3B951EDF062F795D81AB05B8F8BCAB_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_6;
		L_6 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_5, NULL);
		return L_6;
	}

IL_002d:
	{
		// return typeof(MicrosoftArticulatedHand);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (MicrosoftArticulatedHand_tFE375102CA3BF7EBD1CB6E1BD88C26C51F116CFB_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_7, NULL);
		return L_8;
	}

IL_0038:
	{
		// return base.GetControllerType(supportedControllerType);
		int32_t L_9 = ___supportedControllerType0;
		Type_t* L_10;
		L_10 = XRSDKDeviceManager_GetControllerType_m522C09C1EB697825B1887F9313F33EE9DCF300E5(__this, L_9, NULL);
		return L_10;
	}
}
// Microsoft.MixedReality.Toolkit.Input.InputSourceType Microsoft.MixedReality.Toolkit.XRSDK.OpenXR.OpenXRDeviceManager::GetInputSourceType(Microsoft.MixedReality.Toolkit.Input.SupportedControllerType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t OpenXRDeviceManager_GetInputSourceType_mA2C4E106E7FF8A0E60E6B6D55CB8F8904E898E8D (OpenXRDeviceManager_t0C31243398BC0C715BF745D6F2C7AA501C3DDA9A* __this, int32_t ___supportedControllerType0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___supportedControllerType0;
		if ((((int32_t)L_0) == ((int32_t)((int32_t)32))))
		{
			goto IL_0015;
		}
	}
	{
		int32_t L_1 = ___supportedControllerType0;
		if ((((int32_t)L_1) == ((int32_t)((int32_t)1024))))
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_2 = ___supportedControllerType0;
		if ((!(((uint32_t)L_2) == ((uint32_t)((int32_t)4096)))))
		{
			goto IL_0019;
		}
	}

IL_0015:
	{
		// return InputSourceType.Controller;
		return (int32_t)(2);
	}

IL_0017:
	{
		// return InputSourceType.Hand;
		return (int32_t)(1);
	}

IL_0019:
	{
		// return base.GetInputSourceType(supportedControllerType);
		int32_t L_3 = ___supportedControllerType0;
		int32_t L_4;
		L_4 = XRSDKDeviceManager_GetInputSourceType_mBD2B9E852A29A0C49665A7BCA47EF9E3E0E26462(__this, L_3, NULL);
		return L_4;
	}
}
// Microsoft.MixedReality.Toolkit.Input.SupportedControllerType Microsoft.MixedReality.Toolkit.XRSDK.OpenXR.OpenXRDeviceManager::GetCurrentControllerType(UnityEngine.XR.InputDevice)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t OpenXRDeviceManager_GetCurrentControllerType_mDA23FFD17230C2EFF50F30A9C44A3F419928E94C (OpenXRDeviceManager_t0C31243398BC0C715BF745D6F2C7AA501C3DDA9A* __this, InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD ___inputDevice0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral612C3797426144C3C776DE00617309EF6A458B06);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (inputDevice.characteristics.IsMaskSet(InputDeviceCharacteristics.HandTracking))
		uint32_t L_0;
		L_0 = InputDevice_get_characteristics_mEEDC9AB2254C155C47B48848FECF347A87925ADB((&___inputDevice0), NULL);
		bool L_1;
		L_1 = FlagsExtensions_IsMaskSet_mBBB9BEF18A073269AF4EF9EEFF109D11DAB2ED3A(L_0, 8, NULL);
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		// return SupportedControllerType.ArticulatedHand;
		return (int32_t)(((int32_t)1024));
	}

IL_0015:
	{
		// if (inputDevice.characteristics.IsMaskSet(InputDeviceCharacteristics.Controller))
		uint32_t L_2;
		L_2 = InputDevice_get_characteristics_mEEDC9AB2254C155C47B48848FECF347A87925ADB((&___inputDevice0), NULL);
		bool L_3;
		L_3 = FlagsExtensions_IsMaskSet_mBBB9BEF18A073269AF4EF9EEFF109D11DAB2ED3A(L_2, ((int32_t)64), NULL);
		if (!L_3)
		{
			goto IL_0041;
		}
	}
	{
		// if (inputDevice.manufacturer == "HP")
		String_t* L_4;
		L_4 = InputDevice_get_manufacturer_mABBD3690895EC6A8FE86094CCFA4E0B081C102BB((&___inputDevice0), NULL);
		bool L_5;
		L_5 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_4, _stringLiteral612C3797426144C3C776DE00617309EF6A458B06, NULL);
		if (!L_5)
		{
			goto IL_003e;
		}
	}
	{
		// return SupportedControllerType.HPMotionController;
		return (int32_t)(((int32_t)4096));
	}

IL_003e:
	{
		// return SupportedControllerType.WindowsMixedReality;
		return (int32_t)(((int32_t)32));
	}

IL_0041:
	{
		// return base.GetCurrentControllerType(inputDevice);
		InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD L_6 = ___inputDevice0;
		int32_t L_7;
		L_7 = XRSDKDeviceManager_GetCurrentControllerType_m6AD3B233744B9393C4C8A0AE3D2E6706C627750B(__this, L_6, NULL);
		return L_7;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.OpenXR.OpenXRDeviceManager::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OpenXRDeviceManager__cctor_m15C6D714545FE5F11112D122B6D7444AB40772E8 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OpenXRDeviceManager_t0C31243398BC0C715BF745D6F2C7AA501C3DDA9A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0A15B6B283C98B4F62B301AF4050963B9F35C000);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral87645AC8450BCE81DEB59B1D37567DC26C625401);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static readonly ProfilerMarker GetOrAddControllerPerfMarker = new ProfilerMarker("[MRTK] OpenXRDeviceManager.GetOrAddController");
		ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD L_0;
		memset((&L_0), 0, sizeof(L_0));
		ProfilerMarker__ctor_mDD68B0A8B71E0301F592AF8891560150E55699C8_inline((&L_0), _stringLiteral87645AC8450BCE81DEB59B1D37567DC26C625401, /*hidden argument*/NULL);
		((OpenXRDeviceManager_t0C31243398BC0C715BF745D6F2C7AA501C3DDA9A_StaticFields*)il2cpp_codegen_static_fields_for(OpenXRDeviceManager_t0C31243398BC0C715BF745D6F2C7AA501C3DDA9A_il2cpp_TypeInfo_var))->___GetOrAddControllerPerfMarker_29 = L_0;
		// private static readonly ProfilerMarker RemoveControllerPerfMarker = new ProfilerMarker("[MRTK] OpenXRDeviceManager.RemoveController");
		ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD L_1;
		memset((&L_1), 0, sizeof(L_1));
		ProfilerMarker__ctor_mDD68B0A8B71E0301F592AF8891560150E55699C8_inline((&L_1), _stringLiteral0A15B6B283C98B4F62B301AF4050963B9F35C000, /*hidden argument*/NULL);
		((OpenXRDeviceManager_t0C31243398BC0C715BF745D6F2C7AA501C3DDA9A_StaticFields*)il2cpp_codegen_static_fields_for(OpenXRDeviceManager_t0C31243398BC0C715BF745D6F2C7AA501C3DDA9A_il2cpp_TypeInfo_var))->___RemoveControllerPerfMarker_30 = L_1;
		return;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.XRSDK.OpenXR.OpenXRDeviceManager::<EnableIfLoaderBecomesActive>b__4_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool OpenXRDeviceManager_U3CEnableIfLoaderBecomesActiveU3Eb__4_0_m8AE9CB93266786724113D69482E4B6CE5D3D793D (OpenXRDeviceManager_t0C31243398BC0C715BF745D6F2C7AA501C3DDA9A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_HasValue_m6B76D139692C43B2AF7C695FAB044B16ACFAF355_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// await new WaitUntil(() => IsActiveLoader.HasValue);
		Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 L_0;
		L_0 = OpenXRDeviceManager_get_IsActiveLoader_mD67CD8F7C978F23E5A0DB3B042B55A72624A3B25(__this, NULL);
		V_0 = L_0;
		bool L_1;
		L_1 = Nullable_1_get_HasValue_m6B76D139692C43B2AF7C695FAB044B16ACFAF355_inline((&V_0), Nullable_1_get_HasValue_m6B76D139692C43B2AF7C695FAB044B16ACFAF355_RuntimeMethod_var);
		return L_1;
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
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.OpenXR.OpenXRDeviceManager/<EnableIfLoaderBecomesActive>d__4::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CEnableIfLoaderBecomesActiveU3Ed__4_MoveNext_m473E1042A82E1DD0297DC60F95C108B6388B05A1 (U3CEnableIfLoaderBecomesActiveU3Ed__4_tBEE69E1D11D867DAE899E661B1399BB7FE0463FD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncVoidMethodBuilder_AwaitOnCompleted_TisSimpleCoroutineAwaiter_t9DF0277C21C7F3B9CE7C9563D257D9A4821B4898_TisU3CEnableIfLoaderBecomesActiveU3Ed__4_tBEE69E1D11D867DAE899E661B1399BB7FE0463FD_m0941B9D040B923615844B60D20C56DB6DED99DB5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_Value_mE2C54C6AE9FC9F05BF44CD9D7D61DC6CD56E3E28_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OpenXRDeviceManager_U3CEnableIfLoaderBecomesActiveU3Eb__4_0_m8AE9CB93266786724113D69482E4B6CE5D3D793D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SimpleCoroutineAwaiter_t9DF0277C21C7F3B9CE7C9563D257D9A4821B4898_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitUntil_tA1CD487C5811E7C1F8C4ADA85DF5F4EFDC1D41BD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	OpenXRDeviceManager_t0C31243398BC0C715BF745D6F2C7AA501C3DDA9A* V_1 = NULL;
	SimpleCoroutineAwaiter_t9DF0277C21C7F3B9CE7C9563D257D9A4821B4898* V_2 = NULL;
	Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 V_3;
	memset((&V_3), 0, sizeof(V_3));
	Exception_t* V_4 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		OpenXRDeviceManager_t0C31243398BC0C715BF745D6F2C7AA501C3DDA9A* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
	}
	try
	{// begin try (depth: 1)
		{
			int32_t L_2 = V_0;
			if (!L_2)
			{
				goto IL_0050_1;
			}
		}
		{
			// await new WaitUntil(() => IsActiveLoader.HasValue);
			OpenXRDeviceManager_t0C31243398BC0C715BF745D6F2C7AA501C3DDA9A* L_3 = V_1;
			Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* L_4 = (Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457*)il2cpp_codegen_object_new(Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457_il2cpp_TypeInfo_var);
			NullCheck(L_4);
			Func_1__ctor_mDFFAE9C73346372438B5B04C4558AC42F1A3DA22(L_4, L_3, (intptr_t)((void*)OpenXRDeviceManager_U3CEnableIfLoaderBecomesActiveU3Eb__4_0_m8AE9CB93266786724113D69482E4B6CE5D3D793D_RuntimeMethod_var), NULL);
			WaitUntil_tA1CD487C5811E7C1F8C4ADA85DF5F4EFDC1D41BD* L_5 = (WaitUntil_tA1CD487C5811E7C1F8C4ADA85DF5F4EFDC1D41BD*)il2cpp_codegen_object_new(WaitUntil_tA1CD487C5811E7C1F8C4ADA85DF5F4EFDC1D41BD_il2cpp_TypeInfo_var);
			NullCheck(L_5);
			WaitUntil__ctor_m2C925CF39695C35F4CB1AC997531F203AE1434DF(L_5, L_4, NULL);
			SimpleCoroutineAwaiter_t9DF0277C21C7F3B9CE7C9563D257D9A4821B4898* L_6;
			L_6 = AwaiterExtensions_GetAwaiter_m9ABD8BB8BEF36E0AC2DE8346ECFC5B1D991FAD1F(L_5, NULL);
			V_2 = L_6;
			SimpleCoroutineAwaiter_t9DF0277C21C7F3B9CE7C9563D257D9A4821B4898* L_7 = V_2;
			NullCheck(L_7);
			bool L_8;
			L_8 = SimpleCoroutineAwaiter_get_IsCompleted_m1F2F67907C96BE5BB23AF2F333A458FE3413D343_inline(L_7, NULL);
			if (L_8)
			{
				goto IL_006c_1;
			}
		}
		{
			int32_t L_9 = 0;
			V_0 = L_9;
			__this->___U3CU3E1__state_0 = L_9;
			SimpleCoroutineAwaiter_t9DF0277C21C7F3B9CE7C9563D257D9A4821B4898* L_10 = V_2;
			__this->___U3CU3Eu__1_3 = L_10;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Eu__1_3), (void*)L_10);
			AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* L_11 = (&__this->___U3CU3Et__builder_1);
			AsyncVoidMethodBuilder_AwaitOnCompleted_TisSimpleCoroutineAwaiter_t9DF0277C21C7F3B9CE7C9563D257D9A4821B4898_TisU3CEnableIfLoaderBecomesActiveU3Ed__4_tBEE69E1D11D867DAE899E661B1399BB7FE0463FD_m0941B9D040B923615844B60D20C56DB6DED99DB5(L_11, (&V_2), __this, AsyncVoidMethodBuilder_AwaitOnCompleted_TisSimpleCoroutineAwaiter_t9DF0277C21C7F3B9CE7C9563D257D9A4821B4898_TisU3CEnableIfLoaderBecomesActiveU3Ed__4_tBEE69E1D11D867DAE899E661B1399BB7FE0463FD_m0941B9D040B923615844B60D20C56DB6DED99DB5_RuntimeMethod_var);
			goto IL_00b6;
		}

IL_0050_1:
		{
			RuntimeObject* L_12 = __this->___U3CU3Eu__1_3;
			V_2 = ((SimpleCoroutineAwaiter_t9DF0277C21C7F3B9CE7C9563D257D9A4821B4898*)CastclassClass((RuntimeObject*)L_12, SimpleCoroutineAwaiter_t9DF0277C21C7F3B9CE7C9563D257D9A4821B4898_il2cpp_TypeInfo_var));
			__this->___U3CU3Eu__1_3 = NULL;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Eu__1_3), (void*)NULL);
			int32_t L_13 = (-1);
			V_0 = L_13;
			__this->___U3CU3E1__state_0 = L_13;
		}

IL_006c_1:
		{
			SimpleCoroutineAwaiter_t9DF0277C21C7F3B9CE7C9563D257D9A4821B4898* L_14 = V_2;
			NullCheck(L_14);
			SimpleCoroutineAwaiter_GetResult_m6C94D94C7E24A27F954CF5B2BEC3F2DE4C204A4B(L_14, NULL);
			// if (IsActiveLoader.Value)
			OpenXRDeviceManager_t0C31243398BC0C715BF745D6F2C7AA501C3DDA9A* L_15 = V_1;
			NullCheck(L_15);
			Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 L_16;
			L_16 = OpenXRDeviceManager_get_IsActiveLoader_mD67CD8F7C978F23E5A0DB3B042B55A72624A3B25(L_15, NULL);
			V_3 = L_16;
			bool L_17;
			L_17 = Nullable_1_get_Value_mE2C54C6AE9FC9F05BF44CD9D7D61DC6CD56E3E28((&V_3), Nullable_1_get_Value_mE2C54C6AE9FC9F05BF44CD9D7D61DC6CD56E3E28_RuntimeMethod_var);
			if (!L_17)
			{
				goto IL_0088_1;
			}
		}
		{
			// Enable();
			OpenXRDeviceManager_t0C31243398BC0C715BF745D6F2C7AA501C3DDA9A* L_18 = V_1;
			NullCheck(L_18);
			VirtualActionInvoker0::Invoke(26 /* System.Void Microsoft.MixedReality.Toolkit.BaseService::Enable() */, L_18);
		}

IL_0088_1:
		{
			goto IL_00a3;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_008a;
		}
		throw e;
	}

CATCH_008a:
	{// begin catch(System.Exception)
		V_4 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* L_19 = (&__this->___U3CU3Et__builder_1);
		Exception_t* L_20 = V_4;
		AsyncVoidMethodBuilder_SetException_mD9A6F5D1A99A62AC9DF322901BFDE05193CB177B(L_19, L_20, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_00b6;
	}// end catch (depth: 1)

IL_00a3:
	{
		// }
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* L_21 = (&__this->___U3CU3Et__builder_1);
		AsyncVoidMethodBuilder_SetResult_m008490FDF057D5F5D871F537C7A58BE36027F3DC(L_21, NULL);
	}

IL_00b6:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CEnableIfLoaderBecomesActiveU3Ed__4_MoveNext_m473E1042A82E1DD0297DC60F95C108B6388B05A1_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	U3CEnableIfLoaderBecomesActiveU3Ed__4_tBEE69E1D11D867DAE899E661B1399BB7FE0463FD* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CEnableIfLoaderBecomesActiveU3Ed__4_tBEE69E1D11D867DAE899E661B1399BB7FE0463FD*>(__this + _offset);
	U3CEnableIfLoaderBecomesActiveU3Ed__4_MoveNext_m473E1042A82E1DD0297DC60F95C108B6388B05A1(_thisAdjusted, method);
}
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.OpenXR.OpenXRDeviceManager/<EnableIfLoaderBecomesActive>d__4::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CEnableIfLoaderBecomesActiveU3Ed__4_SetStateMachine_mBD34502FCDAC819B9CAAFA2601179CEA0EAC976F (U3CEnableIfLoaderBecomesActiveU3Ed__4_tBEE69E1D11D867DAE899E661B1399BB7FE0463FD* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method) 
{
	{
		AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* L_0 = (&__this->___U3CU3Et__builder_1);
		RuntimeObject* L_1 = ___stateMachine0;
		AsyncVoidMethodBuilder_SetStateMachine_m48640FB81C34D4C2B5A5BBA7F5AE17DC50BF1A25(L_0, L_1, NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CEnableIfLoaderBecomesActiveU3Ed__4_SetStateMachine_mBD34502FCDAC819B9CAAFA2601179CEA0EAC976F_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	U3CEnableIfLoaderBecomesActiveU3Ed__4_tBEE69E1D11D867DAE899E661B1399BB7FE0463FD* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CEnableIfLoaderBecomesActiveU3Ed__4_tBEE69E1D11D867DAE899E661B1399BB7FE0463FD*>(__this + _offset);
	U3CEnableIfLoaderBecomesActiveU3Ed__4_SetStateMachine_mBD34502FCDAC819B9CAAFA2601179CEA0EAC976F(_thisAdjusted, ___stateMachine0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.OpenXR.OpenXREyeGazeDataProvider::.ctor(Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem,System.String,System.UInt32,Microsoft.MixedReality.Toolkit.BaseMixedRealityProfile)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OpenXREyeGazeDataProvider__ctor_m1AD0520CEACDE00DBC8A20AAD9D71D1CFE40C191 (OpenXREyeGazeDataProvider_t25F551318CABD265458042E84D190BF28F66A55F* __this, RuntimeObject* ___inputSystem0, String_t* ___name1, uint32_t ___priority2, BaseMixedRealityProfile_tB4FDEF58FFD17796C0DB7241630B71CDF38FA1D4* ___profile3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseInputDeviceManager_t1D055DB03D88FA053C00671FEA5040B944CC26BC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EyeGazeSmoother_t694634D7A1E87E3409EB4E378F76454732CA1698_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OpenXREyeGazeDataProvider_GazeSmoother_OnSaccadeX_mBF7FF5BD97C50B1FBC56803B45F8A29C55E326F4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OpenXREyeGazeDataProvider_GazeSmoother_OnSaccadeY_m19B7F8EE224C6C6AF939B1173C6CE427D5E53011_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OpenXREyeGazeDataProvider_GazeSmoother_OnSaccade_m1BAD0D7197716189E3861BA88FA9E6FA06D5044C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// BaseMixedRealityProfile profile) : base(inputSystem, name, priority, profile)
		RuntimeObject* L_0 = ___inputSystem0;
		String_t* L_1 = ___name1;
		uint32_t L_2 = ___priority2;
		BaseMixedRealityProfile_tB4FDEF58FFD17796C0DB7241630B71CDF38FA1D4* L_3 = ___profile3;
		il2cpp_codegen_runtime_class_init_inline(BaseInputDeviceManager_t1D055DB03D88FA053C00671FEA5040B944CC26BC_il2cpp_TypeInfo_var);
		BaseInputDeviceManager__ctor_m55B7F2B3368B9234F956C7D94273E8CA0DBC15EC(__this, L_0, L_1, L_2, L_3, NULL);
		// gazeSmoother = new EyeGazeSmoother();
		EyeGazeSmoother_t694634D7A1E87E3409EB4E378F76454732CA1698* L_4 = (EyeGazeSmoother_t694634D7A1E87E3409EB4E378F76454732CA1698*)il2cpp_codegen_object_new(EyeGazeSmoother_t694634D7A1E87E3409EB4E378F76454732CA1698_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		EyeGazeSmoother__ctor_mAF18EF31C887004D45BAAA9BA4D4D0CAE534E802(L_4, NULL);
		__this->___gazeSmoother_22 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___gazeSmoother_22), (void*)L_4);
		// gazeSmoother.OnSaccade += GazeSmoother_OnSaccade;
		EyeGazeSmoother_t694634D7A1E87E3409EB4E378F76454732CA1698* L_5 = __this->___gazeSmoother_22;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_6 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_6, __this, (intptr_t)((void*)OpenXREyeGazeDataProvider_GazeSmoother_OnSaccade_m1BAD0D7197716189E3861BA88FA9E6FA06D5044C_RuntimeMethod_var), NULL);
		NullCheck(L_5);
		EyeGazeSmoother_add_OnSaccade_m0AC3F02987BA3F38D2C09EDFFF6ED86140D767E2(L_5, L_6, NULL);
		// gazeSmoother.OnSaccadeX += GazeSmoother_OnSaccadeX;
		EyeGazeSmoother_t694634D7A1E87E3409EB4E378F76454732CA1698* L_7 = __this->___gazeSmoother_22;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_8 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_8, __this, (intptr_t)((void*)OpenXREyeGazeDataProvider_GazeSmoother_OnSaccadeX_mBF7FF5BD97C50B1FBC56803B45F8A29C55E326F4_RuntimeMethod_var), NULL);
		NullCheck(L_7);
		EyeGazeSmoother_add_OnSaccadeX_mA526BED31648C7527D080B3EDB6706B9B6D30452(L_7, L_8, NULL);
		// gazeSmoother.OnSaccadeY += GazeSmoother_OnSaccadeY;
		EyeGazeSmoother_t694634D7A1E87E3409EB4E378F76454732CA1698* L_9 = __this->___gazeSmoother_22;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_10 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_10);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_10, __this, (intptr_t)((void*)OpenXREyeGazeDataProvider_GazeSmoother_OnSaccadeY_m19B7F8EE224C6C6AF939B1173C6CE427D5E53011_RuntimeMethod_var), NULL);
		NullCheck(L_9);
		EyeGazeSmoother_add_OnSaccadeY_m4E6B6F951D40DC1FA4F81BF7269EA7EF6044BB9D(L_9, L_10, NULL);
		// }
		return;
	}
}
// System.Nullable`1<System.Boolean> Microsoft.MixedReality.Toolkit.XRSDK.OpenXR.OpenXREyeGazeDataProvider::get_IsActiveLoader()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 OpenXREyeGazeDataProvider_get_IsActiveLoader_mC7F22199690AE773DA8D978E5A40EEEE0D309E0C (OpenXREyeGazeDataProvider_t25F551318CABD265458042E84D190BF28F66A55F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LoaderHelpers_IsLoaderActive_TisOpenXRLoaderBase_t58BF6FC81FD9A7698FB65D651A0BB57EA7F47637_m8A7E36C8939A77CD18EB022010A767300C47069B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// LoaderHelpers.IsLoaderActive<OpenXRLoaderBase>();
		Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 L_0;
		L_0 = LoaderHelpers_IsLoaderActive_TisOpenXRLoaderBase_t58BF6FC81FD9A7698FB65D651A0BB57EA7F47637_m8A7E36C8939A77CD18EB022010A767300C47069B(LoaderHelpers_IsLoaderActive_TisOpenXRLoaderBase_t58BF6FC81FD9A7698FB65D651A0BB57EA7F47637_m8A7E36C8939A77CD18EB022010A767300C47069B_RuntimeMethod_var);
		return L_0;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.XRSDK.OpenXR.OpenXREyeGazeDataProvider::get_SmoothEyeTracking()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool OpenXREyeGazeDataProvider_get_SmoothEyeTracking_m2D09B00C53489A1EED38805CA488A2AA929470C9 (OpenXREyeGazeDataProvider_t25F551318CABD265458042E84D190BF28F66A55F* __this, const RuntimeMethod* method) 
{
	{
		// public bool SmoothEyeTracking { get; set; } = false;
		bool L_0 = __this->___U3CSmoothEyeTrackingU3Ek__BackingField_21;
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.OpenXR.OpenXREyeGazeDataProvider::set_SmoothEyeTracking(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OpenXREyeGazeDataProvider_set_SmoothEyeTracking_mF45788340BD1A481C0C6AD98E149FDC891D81458 (OpenXREyeGazeDataProvider_t25F551318CABD265458042E84D190BF28F66A55F* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// public bool SmoothEyeTracking { get; set; } = false;
		bool L_0 = ___value0;
		__this->___U3CSmoothEyeTrackingU3Ek__BackingField_21 = L_0;
		return;
	}
}
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityEyeSaccadeProvider Microsoft.MixedReality.Toolkit.XRSDK.OpenXR.OpenXREyeGazeDataProvider::get_SaccadeProvider()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* OpenXREyeGazeDataProvider_get_SaccadeProvider_m4245FA6A982AE283EAE40E4549E632DE99F6368B (OpenXREyeGazeDataProvider_t25F551318CABD265458042E84D190BF28F66A55F* __this, const RuntimeMethod* method) 
{
	{
		// public IMixedRealityEyeSaccadeProvider SaccadeProvider => gazeSmoother;
		EyeGazeSmoother_t694634D7A1E87E3409EB4E378F76454732CA1698* L_0 = __this->___gazeSmoother_22;
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.OpenXR.OpenXREyeGazeDataProvider::add_OnSaccade(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OpenXREyeGazeDataProvider_add_OnSaccade_m467D7328CA91E3B87D5CC133A08DB07B4D62DC86 (OpenXREyeGazeDataProvider_t25F551318CABD265458042E84D190BF28F66A55F* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_0 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_1 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_2 = NULL;
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = __this->___OnSaccade_23;
		V_0 = L_0;
	}

IL_0007:
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_1 = V_0;
		V_1 = L_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_2 = V_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m8B9D24CED35033C7FC56501DFE650F5CB7FF012C(L_2, L_3, NULL);
		V_2 = ((Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)CastclassSealed((RuntimeObject*)L_4, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var));
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07** L_5 = (&__this->___OnSaccade_23);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_6 = V_2;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_7 = V_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_8;
		L_8 = InterlockedCompareExchangeImpl<Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*>(L_5, L_6, L_7);
		V_0 = L_8;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_9 = V_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_10 = V_1;
		if ((!(((RuntimeObject*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)L_9) == ((RuntimeObject*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.OpenXR.OpenXREyeGazeDataProvider::remove_OnSaccade(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OpenXREyeGazeDataProvider_remove_OnSaccade_mB0A7D1F204E0BD9D1E539AB6847555015C0AA770 (OpenXREyeGazeDataProvider_t25F551318CABD265458042E84D190BF28F66A55F* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_0 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_1 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_2 = NULL;
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = __this->___OnSaccade_23;
		V_0 = L_0;
	}

IL_0007:
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_1 = V_0;
		V_1 = L_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_2 = V_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m40506877934EC1AD4ADAE57F5E97AF0BC0F96116(L_2, L_3, NULL);
		V_2 = ((Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)CastclassSealed((RuntimeObject*)L_4, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var));
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07** L_5 = (&__this->___OnSaccade_23);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_6 = V_2;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_7 = V_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_8;
		L_8 = InterlockedCompareExchangeImpl<Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*>(L_5, L_6, L_7);
		V_0 = L_8;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_9 = V_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_10 = V_1;
		if ((!(((RuntimeObject*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)L_9) == ((RuntimeObject*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.OpenXR.OpenXREyeGazeDataProvider::GazeSmoother_OnSaccade()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OpenXREyeGazeDataProvider_GazeSmoother_OnSaccade_m1BAD0D7197716189E3861BA88FA9E6FA06D5044C (OpenXREyeGazeDataProvider_t25F551318CABD265458042E84D190BF28F66A55F* __this, const RuntimeMethod* method) 
{
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* G_B2_0 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* G_B1_0 = NULL;
	{
		// private void GazeSmoother_OnSaccade() => OnSaccade?.Invoke();
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = __this->___OnSaccade_23;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000b;
		}
	}
	{
		return;
	}

IL_000b:
	{
		NullCheck(G_B2_0);
		Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline(G_B2_0, NULL);
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.OpenXR.OpenXREyeGazeDataProvider::add_OnSaccadeX(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OpenXREyeGazeDataProvider_add_OnSaccadeX_m50FEDF1CD3BA9EF5F233660B90CBC4A6D92E510F (OpenXREyeGazeDataProvider_t25F551318CABD265458042E84D190BF28F66A55F* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_0 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_1 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_2 = NULL;
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = __this->___OnSaccadeX_24;
		V_0 = L_0;
	}

IL_0007:
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_1 = V_0;
		V_1 = L_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_2 = V_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m8B9D24CED35033C7FC56501DFE650F5CB7FF012C(L_2, L_3, NULL);
		V_2 = ((Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)CastclassSealed((RuntimeObject*)L_4, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var));
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07** L_5 = (&__this->___OnSaccadeX_24);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_6 = V_2;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_7 = V_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_8;
		L_8 = InterlockedCompareExchangeImpl<Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*>(L_5, L_6, L_7);
		V_0 = L_8;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_9 = V_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_10 = V_1;
		if ((!(((RuntimeObject*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)L_9) == ((RuntimeObject*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.OpenXR.OpenXREyeGazeDataProvider::remove_OnSaccadeX(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OpenXREyeGazeDataProvider_remove_OnSaccadeX_m2BFF13E853D438B0CF4C89960AF81BAD7392556D (OpenXREyeGazeDataProvider_t25F551318CABD265458042E84D190BF28F66A55F* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_0 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_1 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_2 = NULL;
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = __this->___OnSaccadeX_24;
		V_0 = L_0;
	}

IL_0007:
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_1 = V_0;
		V_1 = L_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_2 = V_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m40506877934EC1AD4ADAE57F5E97AF0BC0F96116(L_2, L_3, NULL);
		V_2 = ((Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)CastclassSealed((RuntimeObject*)L_4, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var));
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07** L_5 = (&__this->___OnSaccadeX_24);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_6 = V_2;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_7 = V_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_8;
		L_8 = InterlockedCompareExchangeImpl<Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*>(L_5, L_6, L_7);
		V_0 = L_8;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_9 = V_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_10 = V_1;
		if ((!(((RuntimeObject*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)L_9) == ((RuntimeObject*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.OpenXR.OpenXREyeGazeDataProvider::GazeSmoother_OnSaccadeX()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OpenXREyeGazeDataProvider_GazeSmoother_OnSaccadeX_mBF7FF5BD97C50B1FBC56803B45F8A29C55E326F4 (OpenXREyeGazeDataProvider_t25F551318CABD265458042E84D190BF28F66A55F* __this, const RuntimeMethod* method) 
{
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* G_B2_0 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* G_B1_0 = NULL;
	{
		// private void GazeSmoother_OnSaccadeX() => OnSaccadeX?.Invoke();
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = __this->___OnSaccadeX_24;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000b;
		}
	}
	{
		return;
	}

IL_000b:
	{
		NullCheck(G_B2_0);
		Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline(G_B2_0, NULL);
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.OpenXR.OpenXREyeGazeDataProvider::add_OnSaccadeY(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OpenXREyeGazeDataProvider_add_OnSaccadeY_m6F1D634FDBA715262BFC41C389D5706A469A245A (OpenXREyeGazeDataProvider_t25F551318CABD265458042E84D190BF28F66A55F* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_0 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_1 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_2 = NULL;
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = __this->___OnSaccadeY_25;
		V_0 = L_0;
	}

IL_0007:
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_1 = V_0;
		V_1 = L_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_2 = V_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m8B9D24CED35033C7FC56501DFE650F5CB7FF012C(L_2, L_3, NULL);
		V_2 = ((Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)CastclassSealed((RuntimeObject*)L_4, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var));
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07** L_5 = (&__this->___OnSaccadeY_25);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_6 = V_2;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_7 = V_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_8;
		L_8 = InterlockedCompareExchangeImpl<Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*>(L_5, L_6, L_7);
		V_0 = L_8;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_9 = V_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_10 = V_1;
		if ((!(((RuntimeObject*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)L_9) == ((RuntimeObject*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.OpenXR.OpenXREyeGazeDataProvider::remove_OnSaccadeY(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OpenXREyeGazeDataProvider_remove_OnSaccadeY_m7C985A18985DF46CB70D06D44510E29BC479C0AD (OpenXREyeGazeDataProvider_t25F551318CABD265458042E84D190BF28F66A55F* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_0 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_1 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_2 = NULL;
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = __this->___OnSaccadeY_25;
		V_0 = L_0;
	}

IL_0007:
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_1 = V_0;
		V_1 = L_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_2 = V_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m40506877934EC1AD4ADAE57F5E97AF0BC0F96116(L_2, L_3, NULL);
		V_2 = ((Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)CastclassSealed((RuntimeObject*)L_4, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var));
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07** L_5 = (&__this->___OnSaccadeY_25);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_6 = V_2;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_7 = V_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_8;
		L_8 = InterlockedCompareExchangeImpl<Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*>(L_5, L_6, L_7);
		V_0 = L_8;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_9 = V_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_10 = V_1;
		if ((!(((RuntimeObject*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)L_9) == ((RuntimeObject*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.OpenXR.OpenXREyeGazeDataProvider::GazeSmoother_OnSaccadeY()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OpenXREyeGazeDataProvider_GazeSmoother_OnSaccadeY_m19B7F8EE224C6C6AF939B1173C6CE427D5E53011 (OpenXREyeGazeDataProvider_t25F551318CABD265458042E84D190BF28F66A55F* __this, const RuntimeMethod* method) 
{
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* G_B2_0 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* G_B1_0 = NULL;
	{
		// private void GazeSmoother_OnSaccadeY() => OnSaccadeY?.Invoke();
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = __this->___OnSaccadeY_25;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000b;
		}
	}
	{
		return;
	}

IL_000b:
	{
		NullCheck(G_B2_0);
		Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline(G_B2_0, NULL);
		return;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.XRSDK.OpenXR.OpenXREyeGazeDataProvider::CheckCapability(Microsoft.MixedReality.Toolkit.MixedRealityCapability)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool OpenXREyeGazeDataProvider_CheckCapability_m547F9DD860EAFB70E781629DED7015C8450578CE (OpenXREyeGazeDataProvider_t25F551318CABD265458042E84D190BF28F66A55F* __this, int32_t ___capability0, const RuntimeMethod* method) 
{
	{
		// public bool CheckCapability(MixedRealityCapability capability) => eyeTrackingDevice.isValid && capability == MixedRealityCapability.EyeTracking;
		InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* L_0 = (&__this->___eyeTrackingDevice_27);
		bool L_1;
		L_1 = InputDevice_get_isValid_mA908CF8195CECA44FF457430AFF9198C3FEC0948(L_0, NULL);
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		int32_t L_2 = ___capability0;
		return (bool)((((int32_t)L_2) == ((int32_t)3))? 1 : 0);
	}

IL_0012:
	{
		return (bool)0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.OpenXR.OpenXREyeGazeDataProvider::Initialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OpenXREyeGazeDataProvider_Initialize_mDB3ABA91E8B068226E9C2FA9FD38AE264DEF2835 (OpenXREyeGazeDataProvider_t25F551318CABD265458042E84D190BF28F66A55F* __this, const RuntimeMethod* method) 
{
	{
		// if (Application.isPlaying)
		bool L_0;
		L_0 = Application_get_isPlaying_m0B3B501E1093739F8887A0DAC5F61D9CB49CC337(NULL);
		if (!L_0)
		{
			goto IL_000d;
		}
	}
	{
		// ReadProfile();
		OpenXREyeGazeDataProvider_ReadProfile_m8AA4E49E2A18B1CD4AC1511B3F31C1294846437A(__this, NULL);
	}

IL_000d:
	{
		// base.Initialize();
		BaseInputDeviceManager_Initialize_m0FCF7D20EB201C9BAC011D2DA67361676BF7294F(__this, NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.OpenXR.OpenXREyeGazeDataProvider::Enable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OpenXREyeGazeDataProvider_Enable_m33E4E3E6658C17911F48BCF4DC92DD823870A931 (OpenXREyeGazeDataProvider_t25F551318CABD265458042E84D190BF28F66A55F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_HasValue_m6B76D139692C43B2AF7C695FAB044B16ACFAF355_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_Value_mE2C54C6AE9FC9F05BF44CD9D7D61DC6CD56E3E28_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (!IsActiveLoader.HasValue)
		Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 L_0;
		L_0 = OpenXREyeGazeDataProvider_get_IsActiveLoader_mC7F22199690AE773DA8D978E5A40EEEE0D309E0C(__this, NULL);
		V_0 = L_0;
		bool L_1;
		L_1 = Nullable_1_get_HasValue_m6B76D139692C43B2AF7C695FAB044B16ACFAF355_inline((&V_0), Nullable_1_get_HasValue_m6B76D139692C43B2AF7C695FAB044B16ACFAF355_RuntimeMethod_var);
		if (L_1)
		{
			goto IL_001e;
		}
	}
	{
		// IsEnabled = false;
		VirtualActionInvoker1< bool >::Invoke(34 /* System.Void Microsoft.MixedReality.Toolkit.BaseService::set_IsEnabled(System.Boolean) */, __this, (bool)0);
		// EnableIfLoaderBecomesActive();
		OpenXREyeGazeDataProvider_EnableIfLoaderBecomesActive_m2FB6D7FA20DBB8251FFE33D60DABCD1F5AA1C3D7(__this, NULL);
		// return;
		return;
	}

IL_001e:
	{
		// else if (!IsActiveLoader.Value)
		Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 L_2;
		L_2 = OpenXREyeGazeDataProvider_get_IsActiveLoader_mC7F22199690AE773DA8D978E5A40EEEE0D309E0C(__this, NULL);
		V_0 = L_2;
		bool L_3;
		L_3 = Nullable_1_get_Value_mE2C54C6AE9FC9F05BF44CD9D7D61DC6CD56E3E28((&V_0), Nullable_1_get_Value_mE2C54C6AE9FC9F05BF44CD9D7D61DC6CD56E3E28_RuntimeMethod_var);
		if (L_3)
		{
			goto IL_0036;
		}
	}
	{
		// IsEnabled = false;
		VirtualActionInvoker1< bool >::Invoke(34 /* System.Void Microsoft.MixedReality.Toolkit.BaseService::set_IsEnabled(System.Boolean) */, __this, (bool)0);
		// return;
		return;
	}

IL_0036:
	{
		// base.Enable();
		BaseService_Enable_mF054160CA265761A1223A3F8CFE50A976C7297E8(__this, NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.OpenXR.OpenXREyeGazeDataProvider::EnableIfLoaderBecomesActive()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OpenXREyeGazeDataProvider_EnableIfLoaderBecomesActive_m2FB6D7FA20DBB8251FFE33D60DABCD1F5AA1C3D7 (OpenXREyeGazeDataProvider_t25F551318CABD265458042E84D190BF28F66A55F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncVoidMethodBuilder_Start_TisU3CEnableIfLoaderBecomesActiveU3Ed__27_t6E741431DCE784A89F3E72D66000E57BB7966575_m8FDE3FA3806D1146AC02EF98D3F03479DF04D3C1_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CEnableIfLoaderBecomesActiveU3Ed__27_t6E741431DCE784A89F3E72D66000E57BB7966575 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D L_0;
		L_0 = AsyncVoidMethodBuilder_Create_mE6D291637BF7B4B6D3F8BFCA14920B9200D7A502(NULL);
		(&V_0)->___U3CU3Et__builder_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)&(((&(&V_0)->___U3CU3Et__builder_1))->___m_synchronizationContext_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&(&V_0)->___U3CU3Et__builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&(&V_0)->___U3CU3Et__builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&(&V_0)->___U3CU3Et__builder_1))->___m_task_2), (void*)NULL);
		#endif
		(&V_0)->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___U3CU3E4__this_2), (void*)__this);
		(&V_0)->___U3CU3E1__state_0 = (-1);
		AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* L_1 = (&(&V_0)->___U3CU3Et__builder_1);
		AsyncVoidMethodBuilder_Start_TisU3CEnableIfLoaderBecomesActiveU3Ed__27_t6E741431DCE784A89F3E72D66000E57BB7966575_m8FDE3FA3806D1146AC02EF98D3F03479DF04D3C1(L_1, (&V_0), AsyncVoidMethodBuilder_Start_TisU3CEnableIfLoaderBecomesActiveU3Ed__27_t6E741431DCE784A89F3E72D66000E57BB7966575_m8FDE3FA3806D1146AC02EF98D3F03479DF04D3C1_RuntimeMethod_var);
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.OpenXR.OpenXREyeGazeDataProvider::ReadProfile()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OpenXREyeGazeDataProvider_ReadProfile_m8AA4E49E2A18B1CD4AC1511B3F31C1294846437A (OpenXREyeGazeDataProvider_t25F551318CABD265458042E84D190BF28F66A55F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MixedRealityEyeTrackingProfile_tC934F1DEA6C01B8F9F282E6AE7987E7CD874411B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8F1A06D44AA46BA3D099F4AF2B341469C7B5F8DE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA99564B21D524436BCBDE413157922CDA544BA1B);
		s_Il2CppMethodInitialized = true;
	}
	MixedRealityEyeTrackingProfile_tC934F1DEA6C01B8F9F282E6AE7987E7CD874411B* V_0 = NULL;
	{
		// if (ConfigurationProfile == null)
		BaseMixedRealityProfile_tB4FDEF58FFD17796C0DB7241630B71CDF38FA1D4* L_0;
		L_0 = VirtualFuncInvoker0< BaseMixedRealityProfile_tB4FDEF58FFD17796C0DB7241630B71CDF38FA1D4* >::Invoke(22 /* Microsoft.MixedReality.Toolkit.BaseMixedRealityProfile Microsoft.MixedReality.Toolkit.BaseService::get_ConfigurationProfile() */, __this);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0024;
		}
	}
	{
		// Debug.LogError($"{Name} requires a configuration profile to run properly.");
		String_t* L_2;
		L_2 = VirtualFuncInvoker0< String_t* >::Invoke(18 /* System.String Microsoft.MixedReality.Toolkit.BaseService::get_Name() */, __this);
		String_t* L_3;
		L_3 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(L_2, _stringLiteralA99564B21D524436BCBDE413157922CDA544BA1B, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_m059825802BB6AF7EA9693FEBEEB0D85F59A3E38E(L_3, NULL);
		// return;
		return;
	}

IL_0024:
	{
		// MixedRealityEyeTrackingProfile profile = ConfigurationProfile as MixedRealityEyeTrackingProfile;
		BaseMixedRealityProfile_tB4FDEF58FFD17796C0DB7241630B71CDF38FA1D4* L_4;
		L_4 = VirtualFuncInvoker0< BaseMixedRealityProfile_tB4FDEF58FFD17796C0DB7241630B71CDF38FA1D4* >::Invoke(22 /* Microsoft.MixedReality.Toolkit.BaseMixedRealityProfile Microsoft.MixedReality.Toolkit.BaseService::get_ConfigurationProfile() */, __this);
		V_0 = ((MixedRealityEyeTrackingProfile_tC934F1DEA6C01B8F9F282E6AE7987E7CD874411B*)IsInstClass((RuntimeObject*)L_4, MixedRealityEyeTrackingProfile_tC934F1DEA6C01B8F9F282E6AE7987E7CD874411B_il2cpp_TypeInfo_var));
		// if (profile == null)
		MixedRealityEyeTrackingProfile_tC934F1DEA6C01B8F9F282E6AE7987E7CD874411B* L_5 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_6;
		L_6 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_5, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_6)
		{
			goto IL_004f;
		}
	}
	{
		// Debug.LogError($"{Name}'s configuration profile must be a MixedRealityEyeTrackingProfile.");
		String_t* L_7;
		L_7 = VirtualFuncInvoker0< String_t* >::Invoke(18 /* System.String Microsoft.MixedReality.Toolkit.BaseService::get_Name() */, __this);
		String_t* L_8;
		L_8 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(L_7, _stringLiteral8F1A06D44AA46BA3D099F4AF2B341469C7B5F8DE, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_m059825802BB6AF7EA9693FEBEEB0D85F59A3E38E(L_8, NULL);
		// return;
		return;
	}

IL_004f:
	{
		// SmoothEyeTracking = profile.SmoothEyeTracking;
		MixedRealityEyeTrackingProfile_tC934F1DEA6C01B8F9F282E6AE7987E7CD874411B* L_9 = V_0;
		NullCheck(L_9);
		bool L_10;
		L_10 = MixedRealityEyeTrackingProfile_get_SmoothEyeTracking_mA573E1715A6366BB4B07E62F5A35D74F142611C4_inline(L_9, NULL);
		OpenXREyeGazeDataProvider_set_SmoothEyeTracking_mF45788340BD1A481C0C6AD98E149FDC891D81458_inline(__this, L_10, NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.OpenXR.OpenXREyeGazeDataProvider::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OpenXREyeGazeDataProvider_Update_m26F3EBA1CE7B90620C91A80DC201156A83D206A4 (OpenXREyeGazeDataProvider_t25F551318CABD265458042E84D190BF28F66A55F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseDataProvider_1_get_Service_m886AE537D966101848DD8F8D348F366C71253B3B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CommonUsages_t9208F514F1E77BE70AC53EFEC94D57EDDAF3B8E1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EyeTrackingUsages_tD15D76EB6FE8970151F2F2ADF43C96B9110663FE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealityEyeGazeProvider_tC69CFCA4497CFED3639A93E88CA9A6D175004416_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealityInputSystem_t73D9E8D52E761DF1CC230411D0EFD51104FF68B2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m9C3EC7FE1A9401268B3C9761A4D96A37197AD0E7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mB0ED54544433CE428ACEC0FE2E6FEE53E11EE6D2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OpenXREyeGazeDataProvider_t25F551318CABD265458042E84D190BF28F66A55F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	AutoScope_tFB983697E28885CB10FFDB92D7EFD0615AEF3139 V_0;
	memset((&V_0), 0, sizeof(V_0));
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_3;
	memset((&V_3), 0, sizeof(V_3));
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_4;
	memset((&V_4), 0, sizeof(V_4));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_5;
	memset((&V_5), 0, sizeof(V_5));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_6;
	memset((&V_6), 0, sizeof(V_6));
	Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 V_7;
	memset((&V_7), 0, sizeof(V_7));
	RuntimeObject* G_B9_0 = NULL;
	RuntimeObject* G_B8_0 = NULL;
	RuntimeObject* G_B11_0 = NULL;
	RuntimeObject* G_B10_0 = NULL;
	RuntimeObject* G_B14_0 = NULL;
	RuntimeObject* G_B13_0 = NULL;
	RuntimeObject* G_B16_0 = NULL;
	RuntimeObject* G_B15_0 = NULL;
	RuntimeObject* G_B24_0 = NULL;
	RuntimeObject* G_B23_0 = NULL;
	RuntimeObject* G_B26_0 = NULL;
	RuntimeObject* G_B25_0 = NULL;
	{
		// using (UpdatePerfMarker.Auto())
		il2cpp_codegen_runtime_class_init_inline(OpenXREyeGazeDataProvider_t25F551318CABD265458042E84D190BF28F66A55F_il2cpp_TypeInfo_var);
		ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD L_0 = ((OpenXREyeGazeDataProvider_t25F551318CABD265458042E84D190BF28F66A55F_StaticFields*)il2cpp_codegen_static_fields_for(OpenXREyeGazeDataProvider_t25F551318CABD265458042E84D190BF28F66A55F_il2cpp_TypeInfo_var))->___UpdatePerfMarker_28;
		V_1 = L_0;
		AutoScope_tFB983697E28885CB10FFDB92D7EFD0615AEF3139 L_1;
		L_1 = ProfilerMarker_Auto_m133FA724EB95D16187B37D2C8A501D7E989B1F8D_inline((&V_1), NULL);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_014a:
			{// begin finally (depth: 1)
				AutoScope_Dispose_mED763F3F51261EF8FB79DB32CD06E0A3F6C40481_inline((&V_0), NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				// if (!IsEnabled)
				bool L_2;
				L_2 = VirtualFuncInvoker0< bool >::Invoke(33 /* System.Boolean Microsoft.MixedReality.Toolkit.BaseService::get_IsEnabled() */, __this);
				if (L_2)
				{
					goto IL_001b_1;
				}
			}
			{
				// return;
				goto IL_0158;
			}

IL_001b_1:
			{
				// if (!eyeTrackingDevice.isValid)
				InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* L_3 = (&__this->___eyeTrackingDevice_27);
				bool L_4;
				L_4 = InputDevice_get_isValid_mA908CF8195CECA44FF457430AFF9198C3FEC0948(L_3, NULL);
				if (L_4)
				{
					goto IL_0088_1;
				}
			}
			{
				// InputDevices.GetDevicesWithCharacteristics(InputDeviceCharacteristics.EyeTracking, InputDeviceList);
				il2cpp_codegen_runtime_class_init_inline(OpenXREyeGazeDataProvider_t25F551318CABD265458042E84D190BF28F66A55F_il2cpp_TypeInfo_var);
				List_1_tB66D13E0427CA48C600AEA4DBA5B173C3734C6CE* L_5 = ((OpenXREyeGazeDataProvider_t25F551318CABD265458042E84D190BF28F66A55F_StaticFields*)il2cpp_codegen_static_fields_for(OpenXREyeGazeDataProvider_t25F551318CABD265458042E84D190BF28F66A55F_il2cpp_TypeInfo_var))->___InputDeviceList_26;
				InputDevices_GetDevicesWithCharacteristics_m2F1785592FF66FB69D72FFE1C1B821D4BD64094A(((int32_t)16), L_5, NULL);
				// if (InputDeviceList.Count > 0)
				List_1_tB66D13E0427CA48C600AEA4DBA5B173C3734C6CE* L_6 = ((OpenXREyeGazeDataProvider_t25F551318CABD265458042E84D190BF28F66A55F_StaticFields*)il2cpp_codegen_static_fields_for(OpenXREyeGazeDataProvider_t25F551318CABD265458042E84D190BF28F66A55F_il2cpp_TypeInfo_var))->___InputDeviceList_26;
				NullCheck(L_6);
				int32_t L_7;
				L_7 = List_1_get_Count_m9C3EC7FE1A9401268B3C9761A4D96A37197AD0E7_inline(L_6, List_1_get_Count_m9C3EC7FE1A9401268B3C9761A4D96A37197AD0E7_RuntimeMethod_var);
				if ((((int32_t)L_7) <= ((int32_t)0)))
				{
					goto IL_0052_1;
				}
			}
			{
				// eyeTrackingDevice = InputDeviceList[0];
				il2cpp_codegen_runtime_class_init_inline(OpenXREyeGazeDataProvider_t25F551318CABD265458042E84D190BF28F66A55F_il2cpp_TypeInfo_var);
				List_1_tB66D13E0427CA48C600AEA4DBA5B173C3734C6CE* L_8 = ((OpenXREyeGazeDataProvider_t25F551318CABD265458042E84D190BF28F66A55F_StaticFields*)il2cpp_codegen_static_fields_for(OpenXREyeGazeDataProvider_t25F551318CABD265458042E84D190BF28F66A55F_il2cpp_TypeInfo_var))->___InputDeviceList_26;
				NullCheck(L_8);
				InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD L_9;
				L_9 = List_1_get_Item_mB0ED54544433CE428ACEC0FE2E6FEE53E11EE6D2(L_8, 0, List_1_get_Item_mB0ED54544433CE428ACEC0FE2E6FEE53E11EE6D2_RuntimeMethod_var);
				__this->___eyeTrackingDevice_27 = L_9;
			}

IL_0052_1:
			{
				// if (!eyeTrackingDevice.isValid)
				InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* L_10 = (&__this->___eyeTrackingDevice_27);
				bool L_11;
				L_11 = InputDevice_get_isValid_mA908CF8195CECA44FF457430AFF9198C3FEC0948(L_10, NULL);
				if (L_11)
				{
					goto IL_0088_1;
				}
			}
			{
				// Service?.EyeGazeProvider?.UpdateEyeTrackingStatus(this, false);
				RuntimeObject* L_12;
				L_12 = BaseDataProvider_1_get_Service_m886AE537D966101848DD8F8D348F366C71253B3B_inline(__this, BaseDataProvider_1_get_Service_m886AE537D966101848DD8F8D348F366C71253B3B_RuntimeMethod_var);
				RuntimeObject* L_13 = L_12;
				G_B8_0 = L_13;
				if (L_13)
				{
					G_B9_0 = L_13;
					goto IL_006e_1;
				}
			}
			{
				goto IL_0158;
			}

IL_006e_1:
			{
				NullCheck(G_B9_0);
				RuntimeObject* L_14;
				L_14 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(10 /* Microsoft.MixedReality.Toolkit.Input.IMixedRealityEyeGazeProvider Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem::get_EyeGazeProvider() */, IMixedRealityInputSystem_t73D9E8D52E761DF1CC230411D0EFD51104FF68B2_il2cpp_TypeInfo_var, G_B9_0);
				RuntimeObject* L_15 = L_14;
				G_B10_0 = L_15;
				if (L_15)
				{
					G_B11_0 = L_15;
					goto IL_007c_1;
				}
			}
			{
				goto IL_0158;
			}

IL_007c_1:
			{
				NullCheck(G_B11_0);
				InterfaceActionInvoker2< RuntimeObject*, bool >::Invoke(8 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityEyeGazeProvider::UpdateEyeTrackingStatus(Microsoft.MixedReality.Toolkit.Input.IMixedRealityEyeGazeDataProvider,System.Boolean) */, IMixedRealityEyeGazeProvider_tC69CFCA4497CFED3639A93E88CA9A6D175004416_il2cpp_TypeInfo_var, G_B11_0, __this, (bool)0);
				// return;
				goto IL_0158;
			}

IL_0088_1:
			{
				// Service?.EyeGazeProvider?.UpdateEyeTrackingStatus(this, true);
				RuntimeObject* L_16;
				L_16 = BaseDataProvider_1_get_Service_m886AE537D966101848DD8F8D348F366C71253B3B_inline(__this, BaseDataProvider_1_get_Service_m886AE537D966101848DD8F8D348F366C71253B3B_RuntimeMethod_var);
				RuntimeObject* L_17 = L_16;
				G_B13_0 = L_17;
				if (L_17)
				{
					G_B14_0 = L_17;
					goto IL_0094_1;
				}
			}
			{
				goto IL_00a6_1;
			}

IL_0094_1:
			{
				NullCheck(G_B14_0);
				RuntimeObject* L_18;
				L_18 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(10 /* Microsoft.MixedReality.Toolkit.Input.IMixedRealityEyeGazeProvider Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem::get_EyeGazeProvider() */, IMixedRealityInputSystem_t73D9E8D52E761DF1CC230411D0EFD51104FF68B2_il2cpp_TypeInfo_var, G_B14_0);
				RuntimeObject* L_19 = L_18;
				G_B15_0 = L_19;
				if (L_19)
				{
					G_B16_0 = L_19;
					goto IL_009f_1;
				}
			}
			{
				goto IL_00a6_1;
			}

IL_009f_1:
			{
				NullCheck(G_B16_0);
				InterfaceActionInvoker2< RuntimeObject*, bool >::Invoke(8 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityEyeGazeProvider::UpdateEyeTrackingStatus(Microsoft.MixedReality.Toolkit.Input.IMixedRealityEyeGazeDataProvider,System.Boolean) */, IMixedRealityEyeGazeProvider_tC69CFCA4497CFED3639A93E88CA9A6D175004416_il2cpp_TypeInfo_var, G_B16_0, __this, (bool)1);
			}

IL_00a6_1:
			{
				// if (eyeTrackingDevice.TryGetFeatureValue(CommonUsages.isTracked, out bool gazeTracked)
				//     && gazeTracked
				//     && eyeTrackingDevice.TryGetFeatureValue(EyeTrackingUsages.gazePosition, out Vector3 eyeGazePosition)
				//     && eyeTrackingDevice.TryGetFeatureValue(EyeTrackingUsages.gazeRotation, out Quaternion eyeGazeRotation))
				InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* L_20 = (&__this->___eyeTrackingDevice_27);
				il2cpp_codegen_runtime_class_init_inline(CommonUsages_t9208F514F1E77BE70AC53EFEC94D57EDDAF3B8E1_il2cpp_TypeInfo_var);
				InputFeatureUsage_1_tE336B2F0B9AC721519BFA17A08D6353FD5221637 L_21 = ((CommonUsages_t9208F514F1E77BE70AC53EFEC94D57EDDAF3B8E1_StaticFields*)il2cpp_codegen_static_fields_for(CommonUsages_t9208F514F1E77BE70AC53EFEC94D57EDDAF3B8E1_il2cpp_TypeInfo_var))->___isTracked_0;
				bool L_22;
				L_22 = InputDevice_TryGetFeatureValue_m24EC3B6C41AE4098269427232AD5F52E786BF884(L_20, L_21, (&V_2), NULL);
				bool L_23 = V_2;
				if (!((int32_t)((int32_t)L_22&(int32_t)L_23)))
				{
					goto IL_0148_1;
				}
			}
			{
				InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* L_24 = (&__this->___eyeTrackingDevice_27);
				il2cpp_codegen_runtime_class_init_inline(EyeTrackingUsages_tD15D76EB6FE8970151F2F2ADF43C96B9110663FE_il2cpp_TypeInfo_var);
				InputFeatureUsage_1_t2E901FA41650EB29399194768CAA93D477CEBC58 L_25 = ((EyeTrackingUsages_tD15D76EB6FE8970151F2F2ADF43C96B9110663FE_StaticFields*)il2cpp_codegen_static_fields_for(EyeTrackingUsages_tD15D76EB6FE8970151F2F2ADF43C96B9110663FE_il2cpp_TypeInfo_var))->___gazePosition_0;
				bool L_26;
				L_26 = InputDevice_TryGetFeatureValue_m472B5ECE996FB7440CACCF1E85722DA4963E3167(L_24, L_25, (&V_3), NULL);
				if (!L_26)
				{
					goto IL_0148_1;
				}
			}
			{
				InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* L_27 = (&__this->___eyeTrackingDevice_27);
				il2cpp_codegen_runtime_class_init_inline(EyeTrackingUsages_tD15D76EB6FE8970151F2F2ADF43C96B9110663FE_il2cpp_TypeInfo_var);
				InputFeatureUsage_1_t8489CEC68B1EC178F2634079A9D7CD9E90D3CF5D L_28 = ((EyeTrackingUsages_tD15D76EB6FE8970151F2F2ADF43C96B9110663FE_StaticFields*)il2cpp_codegen_static_fields_for(EyeTrackingUsages_tD15D76EB6FE8970151F2F2ADF43C96B9110663FE_il2cpp_TypeInfo_var))->___gazeRotation_1;
				bool L_29;
				L_29 = InputDevice_TryGetFeatureValue_m0C1A9761DD0D1C6D1EF4BAB2FAF1BC1A9541BB9F(L_27, L_28, (&V_4), NULL);
				if (!L_29)
				{
					goto IL_0148_1;
				}
			}
			{
				// Vector3 worldPosition = MixedRealityPlayspace.TransformPoint(eyeGazePosition);
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_30 = V_3;
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_31;
				L_31 = MixedRealityPlayspace_TransformPoint_mF0F8AA899D9BBBA99FC4EBD1B8730F4174D15314(L_30, NULL);
				V_5 = L_31;
				// Vector3 worldRotation = MixedRealityPlayspace.TransformDirection(eyeGazeRotation * Vector3.forward);
				Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_32 = V_4;
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_33;
				L_33 = Vector3_get_forward_mEBAB24D77FC02FC88ED880738C3B1D47C758B3EB_inline(NULL);
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_34;
				L_34 = Quaternion_op_Multiply_mF1348668A6CCD46FBFF98D39182F89358ED74AC0(L_32, L_33, NULL);
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_35;
				L_35 = MixedRealityPlayspace_TransformDirection_mEE323CCE16A8F9DC22A952BF02EA768F8348E772(L_34, NULL);
				V_6 = L_35;
				// Ray newGaze = new Ray(worldPosition, worldRotation);
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_36 = V_5;
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_37 = V_6;
				Ray__ctor_mE298992FD10A3894C38373198385F345C58BD64C((&V_7), L_36, L_37, NULL);
				// if (SmoothEyeTracking)
				bool L_38;
				L_38 = OpenXREyeGazeDataProvider_get_SmoothEyeTracking_m2D09B00C53489A1EED38805CA488A2AA929470C9_inline(__this, NULL);
				if (!L_38)
				{
					goto IL_0124_1;
				}
			}
			{
				// newGaze = gazeSmoother.SmoothGaze(newGaze);
				EyeGazeSmoother_t694634D7A1E87E3409EB4E378F76454732CA1698* L_39 = __this->___gazeSmoother_22;
				Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 L_40 = V_7;
				NullCheck(L_39);
				Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 L_41;
				L_41 = EyeGazeSmoother_SmoothGaze_mB040093FDC74594A3B8633133437D57EC02A7B3C(L_39, L_40, NULL);
				V_7 = L_41;
			}

IL_0124_1:
			{
				// Service?.EyeGazeProvider?.UpdateEyeGaze(this, newGaze, DateTime.UtcNow);
				RuntimeObject* L_42;
				L_42 = BaseDataProvider_1_get_Service_m886AE537D966101848DD8F8D348F366C71253B3B_inline(__this, BaseDataProvider_1_get_Service_m886AE537D966101848DD8F8D348F366C71253B3B_RuntimeMethod_var);
				RuntimeObject* L_43 = L_42;
				G_B23_0 = L_43;
				if (L_43)
				{
					G_B24_0 = L_43;
					goto IL_0130_1;
				}
			}
			{
				goto IL_0158;
			}

IL_0130_1:
			{
				NullCheck(G_B24_0);
				RuntimeObject* L_44;
				L_44 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(10 /* Microsoft.MixedReality.Toolkit.Input.IMixedRealityEyeGazeProvider Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem::get_EyeGazeProvider() */, IMixedRealityInputSystem_t73D9E8D52E761DF1CC230411D0EFD51104FF68B2_il2cpp_TypeInfo_var, G_B24_0);
				RuntimeObject* L_45 = L_44;
				G_B25_0 = L_45;
				if (L_45)
				{
					G_B26_0 = L_45;
					goto IL_013b_1;
				}
			}
			{
				goto IL_0158;
			}

IL_013b_1:
			{
				Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 L_46 = V_7;
				il2cpp_codegen_runtime_class_init_inline(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
				DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_47;
				L_47 = DateTime_get_UtcNow_m5D776FFEBC81592B361E4C7AF373297C5DFB46FD(NULL);
				NullCheck(G_B26_0);
				InterfaceActionInvoker3< RuntimeObject*, Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00, DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D >::Invoke(7 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityEyeGazeProvider::UpdateEyeGaze(Microsoft.MixedReality.Toolkit.Input.IMixedRealityEyeGazeDataProvider,UnityEngine.Ray,System.DateTime) */, IMixedRealityEyeGazeProvider_tC69CFCA4497CFED3639A93E88CA9A6D175004416_il2cpp_TypeInfo_var, G_B26_0, __this, L_46, L_47);
			}

IL_0148_1:
			{
				// }
				goto IL_0158;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0158:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.OpenXR.OpenXREyeGazeDataProvider::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OpenXREyeGazeDataProvider__cctor_mB5FC8641CACCD1B1BEC5F45522F1CBDBE30B7A2D (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mF7ACC153F11A3260DAACDCA56B0A70A4BFA61EA4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tB66D13E0427CA48C600AEA4DBA5B173C3734C6CE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OpenXREyeGazeDataProvider_t25F551318CABD265458042E84D190BF28F66A55F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB6B2CD42E6C5B2E5B6B1197528D0FEE4D0121EAB);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static readonly List<InputDevice> InputDeviceList = new List<InputDevice>();
		List_1_tB66D13E0427CA48C600AEA4DBA5B173C3734C6CE* L_0 = (List_1_tB66D13E0427CA48C600AEA4DBA5B173C3734C6CE*)il2cpp_codegen_object_new(List_1_tB66D13E0427CA48C600AEA4DBA5B173C3734C6CE_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_mF7ACC153F11A3260DAACDCA56B0A70A4BFA61EA4(L_0, List_1__ctor_mF7ACC153F11A3260DAACDCA56B0A70A4BFA61EA4_RuntimeMethod_var);
		((OpenXREyeGazeDataProvider_t25F551318CABD265458042E84D190BF28F66A55F_StaticFields*)il2cpp_codegen_static_fields_for(OpenXREyeGazeDataProvider_t25F551318CABD265458042E84D190BF28F66A55F_il2cpp_TypeInfo_var))->___InputDeviceList_26 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((OpenXREyeGazeDataProvider_t25F551318CABD265458042E84D190BF28F66A55F_StaticFields*)il2cpp_codegen_static_fields_for(OpenXREyeGazeDataProvider_t25F551318CABD265458042E84D190BF28F66A55F_il2cpp_TypeInfo_var))->___InputDeviceList_26), (void*)L_0);
		// private static readonly ProfilerMarker UpdatePerfMarker = new ProfilerMarker("[MRTK] OpenXREyeGazeDataProvider.Update");
		ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD L_1;
		memset((&L_1), 0, sizeof(L_1));
		ProfilerMarker__ctor_mDD68B0A8B71E0301F592AF8891560150E55699C8_inline((&L_1), _stringLiteralB6B2CD42E6C5B2E5B6B1197528D0FEE4D0121EAB, /*hidden argument*/NULL);
		((OpenXREyeGazeDataProvider_t25F551318CABD265458042E84D190BF28F66A55F_StaticFields*)il2cpp_codegen_static_fields_for(OpenXREyeGazeDataProvider_t25F551318CABD265458042E84D190BF28F66A55F_il2cpp_TypeInfo_var))->___UpdatePerfMarker_28 = L_1;
		return;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.XRSDK.OpenXR.OpenXREyeGazeDataProvider::<EnableIfLoaderBecomesActive>b__27_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool OpenXREyeGazeDataProvider_U3CEnableIfLoaderBecomesActiveU3Eb__27_0_mEF0774AF765A27BCFA634865396F6E2BF1FADC99 (OpenXREyeGazeDataProvider_t25F551318CABD265458042E84D190BF28F66A55F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_HasValue_m6B76D139692C43B2AF7C695FAB044B16ACFAF355_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// await new WaitUntil(() => IsActiveLoader.HasValue);
		Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 L_0;
		L_0 = OpenXREyeGazeDataProvider_get_IsActiveLoader_mC7F22199690AE773DA8D978E5A40EEEE0D309E0C(__this, NULL);
		V_0 = L_0;
		bool L_1;
		L_1 = Nullable_1_get_HasValue_m6B76D139692C43B2AF7C695FAB044B16ACFAF355_inline((&V_0), Nullable_1_get_HasValue_m6B76D139692C43B2AF7C695FAB044B16ACFAF355_RuntimeMethod_var);
		return L_1;
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
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.OpenXR.OpenXREyeGazeDataProvider/<EnableIfLoaderBecomesActive>d__27::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CEnableIfLoaderBecomesActiveU3Ed__27_MoveNext_mC36F3FC5F5BB85D0393C3F5FDADC4A86564BAFA8 (U3CEnableIfLoaderBecomesActiveU3Ed__27_t6E741431DCE784A89F3E72D66000E57BB7966575* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncVoidMethodBuilder_AwaitOnCompleted_TisSimpleCoroutineAwaiter_t9DF0277C21C7F3B9CE7C9563D257D9A4821B4898_TisU3CEnableIfLoaderBecomesActiveU3Ed__27_t6E741431DCE784A89F3E72D66000E57BB7966575_mA1970863B1EFA1AFDFE10E5A5DE792C1075A9B38_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_Value_mE2C54C6AE9FC9F05BF44CD9D7D61DC6CD56E3E28_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OpenXREyeGazeDataProvider_U3CEnableIfLoaderBecomesActiveU3Eb__27_0_mEF0774AF765A27BCFA634865396F6E2BF1FADC99_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SimpleCoroutineAwaiter_t9DF0277C21C7F3B9CE7C9563D257D9A4821B4898_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitUntil_tA1CD487C5811E7C1F8C4ADA85DF5F4EFDC1D41BD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	OpenXREyeGazeDataProvider_t25F551318CABD265458042E84D190BF28F66A55F* V_1 = NULL;
	SimpleCoroutineAwaiter_t9DF0277C21C7F3B9CE7C9563D257D9A4821B4898* V_2 = NULL;
	Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 V_3;
	memset((&V_3), 0, sizeof(V_3));
	Exception_t* V_4 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		OpenXREyeGazeDataProvider_t25F551318CABD265458042E84D190BF28F66A55F* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
	}
	try
	{// begin try (depth: 1)
		{
			int32_t L_2 = V_0;
			if (!L_2)
			{
				goto IL_0050_1;
			}
		}
		{
			// await new WaitUntil(() => IsActiveLoader.HasValue);
			OpenXREyeGazeDataProvider_t25F551318CABD265458042E84D190BF28F66A55F* L_3 = V_1;
			Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* L_4 = (Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457*)il2cpp_codegen_object_new(Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457_il2cpp_TypeInfo_var);
			NullCheck(L_4);
			Func_1__ctor_mDFFAE9C73346372438B5B04C4558AC42F1A3DA22(L_4, L_3, (intptr_t)((void*)OpenXREyeGazeDataProvider_U3CEnableIfLoaderBecomesActiveU3Eb__27_0_mEF0774AF765A27BCFA634865396F6E2BF1FADC99_RuntimeMethod_var), NULL);
			WaitUntil_tA1CD487C5811E7C1F8C4ADA85DF5F4EFDC1D41BD* L_5 = (WaitUntil_tA1CD487C5811E7C1F8C4ADA85DF5F4EFDC1D41BD*)il2cpp_codegen_object_new(WaitUntil_tA1CD487C5811E7C1F8C4ADA85DF5F4EFDC1D41BD_il2cpp_TypeInfo_var);
			NullCheck(L_5);
			WaitUntil__ctor_m2C925CF39695C35F4CB1AC997531F203AE1434DF(L_5, L_4, NULL);
			SimpleCoroutineAwaiter_t9DF0277C21C7F3B9CE7C9563D257D9A4821B4898* L_6;
			L_6 = AwaiterExtensions_GetAwaiter_m9ABD8BB8BEF36E0AC2DE8346ECFC5B1D991FAD1F(L_5, NULL);
			V_2 = L_6;
			SimpleCoroutineAwaiter_t9DF0277C21C7F3B9CE7C9563D257D9A4821B4898* L_7 = V_2;
			NullCheck(L_7);
			bool L_8;
			L_8 = SimpleCoroutineAwaiter_get_IsCompleted_m1F2F67907C96BE5BB23AF2F333A458FE3413D343_inline(L_7, NULL);
			if (L_8)
			{
				goto IL_006c_1;
			}
		}
		{
			int32_t L_9 = 0;
			V_0 = L_9;
			__this->___U3CU3E1__state_0 = L_9;
			SimpleCoroutineAwaiter_t9DF0277C21C7F3B9CE7C9563D257D9A4821B4898* L_10 = V_2;
			__this->___U3CU3Eu__1_3 = L_10;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Eu__1_3), (void*)L_10);
			AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* L_11 = (&__this->___U3CU3Et__builder_1);
			AsyncVoidMethodBuilder_AwaitOnCompleted_TisSimpleCoroutineAwaiter_t9DF0277C21C7F3B9CE7C9563D257D9A4821B4898_TisU3CEnableIfLoaderBecomesActiveU3Ed__27_t6E741431DCE784A89F3E72D66000E57BB7966575_mA1970863B1EFA1AFDFE10E5A5DE792C1075A9B38(L_11, (&V_2), __this, AsyncVoidMethodBuilder_AwaitOnCompleted_TisSimpleCoroutineAwaiter_t9DF0277C21C7F3B9CE7C9563D257D9A4821B4898_TisU3CEnableIfLoaderBecomesActiveU3Ed__27_t6E741431DCE784A89F3E72D66000E57BB7966575_mA1970863B1EFA1AFDFE10E5A5DE792C1075A9B38_RuntimeMethod_var);
			goto IL_00b6;
		}

IL_0050_1:
		{
			RuntimeObject* L_12 = __this->___U3CU3Eu__1_3;
			V_2 = ((SimpleCoroutineAwaiter_t9DF0277C21C7F3B9CE7C9563D257D9A4821B4898*)CastclassClass((RuntimeObject*)L_12, SimpleCoroutineAwaiter_t9DF0277C21C7F3B9CE7C9563D257D9A4821B4898_il2cpp_TypeInfo_var));
			__this->___U3CU3Eu__1_3 = NULL;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Eu__1_3), (void*)NULL);
			int32_t L_13 = (-1);
			V_0 = L_13;
			__this->___U3CU3E1__state_0 = L_13;
		}

IL_006c_1:
		{
			SimpleCoroutineAwaiter_t9DF0277C21C7F3B9CE7C9563D257D9A4821B4898* L_14 = V_2;
			NullCheck(L_14);
			SimpleCoroutineAwaiter_GetResult_m6C94D94C7E24A27F954CF5B2BEC3F2DE4C204A4B(L_14, NULL);
			// if (IsActiveLoader.Value)
			OpenXREyeGazeDataProvider_t25F551318CABD265458042E84D190BF28F66A55F* L_15 = V_1;
			NullCheck(L_15);
			Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 L_16;
			L_16 = OpenXREyeGazeDataProvider_get_IsActiveLoader_mC7F22199690AE773DA8D978E5A40EEEE0D309E0C(L_15, NULL);
			V_3 = L_16;
			bool L_17;
			L_17 = Nullable_1_get_Value_mE2C54C6AE9FC9F05BF44CD9D7D61DC6CD56E3E28((&V_3), Nullable_1_get_Value_mE2C54C6AE9FC9F05BF44CD9D7D61DC6CD56E3E28_RuntimeMethod_var);
			if (!L_17)
			{
				goto IL_0088_1;
			}
		}
		{
			// Enable();
			OpenXREyeGazeDataProvider_t25F551318CABD265458042E84D190BF28F66A55F* L_18 = V_1;
			NullCheck(L_18);
			VirtualActionInvoker0::Invoke(26 /* System.Void Microsoft.MixedReality.Toolkit.BaseService::Enable() */, L_18);
		}

IL_0088_1:
		{
			goto IL_00a3;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_008a;
		}
		throw e;
	}

CATCH_008a:
	{// begin catch(System.Exception)
		V_4 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* L_19 = (&__this->___U3CU3Et__builder_1);
		Exception_t* L_20 = V_4;
		AsyncVoidMethodBuilder_SetException_mD9A6F5D1A99A62AC9DF322901BFDE05193CB177B(L_19, L_20, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_00b6;
	}// end catch (depth: 1)

IL_00a3:
	{
		// }
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* L_21 = (&__this->___U3CU3Et__builder_1);
		AsyncVoidMethodBuilder_SetResult_m008490FDF057D5F5D871F537C7A58BE36027F3DC(L_21, NULL);
	}

IL_00b6:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CEnableIfLoaderBecomesActiveU3Ed__27_MoveNext_mC36F3FC5F5BB85D0393C3F5FDADC4A86564BAFA8_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	U3CEnableIfLoaderBecomesActiveU3Ed__27_t6E741431DCE784A89F3E72D66000E57BB7966575* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CEnableIfLoaderBecomesActiveU3Ed__27_t6E741431DCE784A89F3E72D66000E57BB7966575*>(__this + _offset);
	U3CEnableIfLoaderBecomesActiveU3Ed__27_MoveNext_mC36F3FC5F5BB85D0393C3F5FDADC4A86564BAFA8(_thisAdjusted, method);
}
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.OpenXR.OpenXREyeGazeDataProvider/<EnableIfLoaderBecomesActive>d__27::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CEnableIfLoaderBecomesActiveU3Ed__27_SetStateMachine_mE3F6765B397D256B26DAE9F865FA65990E84423C (U3CEnableIfLoaderBecomesActiveU3Ed__27_t6E741431DCE784A89F3E72D66000E57BB7966575* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method) 
{
	{
		AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* L_0 = (&__this->___U3CU3Et__builder_1);
		RuntimeObject* L_1 = ___stateMachine0;
		AsyncVoidMethodBuilder_SetStateMachine_m48640FB81C34D4C2B5A5BBA7F5AE17DC50BF1A25(L_0, L_1, NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CEnableIfLoaderBecomesActiveU3Ed__27_SetStateMachine_mE3F6765B397D256B26DAE9F865FA65990E84423C_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	U3CEnableIfLoaderBecomesActiveU3Ed__27_t6E741431DCE784A89F3E72D66000E57BB7966575* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CEnableIfLoaderBecomesActiveU3Ed__27_t6E741431DCE784A89F3E72D66000E57BB7966575*>(__this + _offset);
	U3CEnableIfLoaderBecomesActiveU3Ed__27_SetStateMachine_mE3F6765B397D256B26DAE9F865FA65990E84423C(_thisAdjusted, ___stateMachine0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Microsoft.MixedReality.Toolkit.XRSDK.OpenXR.OpenXRHandMeshProvider Microsoft.MixedReality.Toolkit.XRSDK.OpenXR.OpenXRHandMeshProvider::get_Left()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR OpenXRHandMeshProvider_t7E1EB4108CF655D3DB1CAF41AD048D7AE755B060* OpenXRHandMeshProvider_get_Left_mA2D4A13AD50B19E12EEABA8C8F4055DDD1D50EDB (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OpenXRHandMeshProvider_t7E1EB4108CF655D3DB1CAF41AD048D7AE755B060_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static OpenXRHandMeshProvider Left { get; } =
		il2cpp_codegen_runtime_class_init_inline(OpenXRHandMeshProvider_t7E1EB4108CF655D3DB1CAF41AD048D7AE755B060_il2cpp_TypeInfo_var);
		OpenXRHandMeshProvider_t7E1EB4108CF655D3DB1CAF41AD048D7AE755B060* L_0 = ((OpenXRHandMeshProvider_t7E1EB4108CF655D3DB1CAF41AD048D7AE755B060_StaticFields*)il2cpp_codegen_static_fields_for(OpenXRHandMeshProvider_t7E1EB4108CF655D3DB1CAF41AD048D7AE755B060_il2cpp_TypeInfo_var))->___U3CLeftU3Ek__BackingField_0;
		return L_0;
	}
}
// Microsoft.MixedReality.Toolkit.XRSDK.OpenXR.OpenXRHandMeshProvider Microsoft.MixedReality.Toolkit.XRSDK.OpenXR.OpenXRHandMeshProvider::get_Right()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR OpenXRHandMeshProvider_t7E1EB4108CF655D3DB1CAF41AD048D7AE755B060* OpenXRHandMeshProvider_get_Right_m95E73FC1A14FA52D4557E230F8F3F254CFA2B856 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OpenXRHandMeshProvider_t7E1EB4108CF655D3DB1CAF41AD048D7AE755B060_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static OpenXRHandMeshProvider Right { get; } =
		il2cpp_codegen_runtime_class_init_inline(OpenXRHandMeshProvider_t7E1EB4108CF655D3DB1CAF41AD048D7AE755B060_il2cpp_TypeInfo_var);
		OpenXRHandMeshProvider_t7E1EB4108CF655D3DB1CAF41AD048D7AE755B060* L_0 = ((OpenXRHandMeshProvider_t7E1EB4108CF655D3DB1CAF41AD048D7AE755B060_StaticFields*)il2cpp_codegen_static_fields_for(OpenXRHandMeshProvider_t7E1EB4108CF655D3DB1CAF41AD048D7AE755B060_il2cpp_TypeInfo_var))->___U3CRightU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.OpenXR.OpenXRHandMeshProvider::SetInputSource(Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OpenXRHandMeshProvider_SetInputSource_mF13BFDF25DA36932B4F78D6717FB251E4E0889BB (OpenXRHandMeshProvider_t7E1EB4108CF655D3DB1CAF41AD048D7AE755B060* __this, RuntimeObject* ___inputSource0, const RuntimeMethod* method) 
{
	{
		// public void SetInputSource(IMixedRealityInputSource inputSource) => this.inputSource = inputSource;
		RuntimeObject* L_0 = ___inputSource0;
		__this->___inputSource_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___inputSource_2), (void*)L_0);
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.OpenXR.OpenXRHandMeshProvider::UpdateHandMesh()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OpenXRHandMeshProvider_UpdateHandMesh_m1EFA3799E4150D08765F121DFDE57064720ED3CE (OpenXRHandMeshProvider_t7E1EB4108CF655D3DB1CAF41AD048D7AE755B060* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.OpenXR.OpenXRHandMeshProvider::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OpenXRHandMeshProvider__ctor_m971F8E6C5AA1958BA45103BFE20BC235B3B1F079 (OpenXRHandMeshProvider_t7E1EB4108CF655D3DB1CAF41AD048D7AE755B060* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.OpenXR.OpenXRHandMeshProvider::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OpenXRHandMeshProvider__cctor_m31189EFA67992FAB401E3D3FA0D3AB5C07AA4691 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OpenXRHandMeshProvider_t7E1EB4108CF655D3DB1CAF41AD048D7AE755B060_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFA21F085857C25FA6633EF256DA63F630C4ACF75);
		s_Il2CppMethodInitialized = true;
	}
	{
		// null;
		((OpenXRHandMeshProvider_t7E1EB4108CF655D3DB1CAF41AD048D7AE755B060_StaticFields*)il2cpp_codegen_static_fields_for(OpenXRHandMeshProvider_t7E1EB4108CF655D3DB1CAF41AD048D7AE755B060_il2cpp_TypeInfo_var))->___U3CLeftU3Ek__BackingField_0 = (OpenXRHandMeshProvider_t7E1EB4108CF655D3DB1CAF41AD048D7AE755B060*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&((OpenXRHandMeshProvider_t7E1EB4108CF655D3DB1CAF41AD048D7AE755B060_StaticFields*)il2cpp_codegen_static_fields_for(OpenXRHandMeshProvider_t7E1EB4108CF655D3DB1CAF41AD048D7AE755B060_il2cpp_TypeInfo_var))->___U3CLeftU3Ek__BackingField_0), (void*)(OpenXRHandMeshProvider_t7E1EB4108CF655D3DB1CAF41AD048D7AE755B060*)NULL);
		// null;
		((OpenXRHandMeshProvider_t7E1EB4108CF655D3DB1CAF41AD048D7AE755B060_StaticFields*)il2cpp_codegen_static_fields_for(OpenXRHandMeshProvider_t7E1EB4108CF655D3DB1CAF41AD048D7AE755B060_il2cpp_TypeInfo_var))->___U3CRightU3Ek__BackingField_1 = (OpenXRHandMeshProvider_t7E1EB4108CF655D3DB1CAF41AD048D7AE755B060*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&((OpenXRHandMeshProvider_t7E1EB4108CF655D3DB1CAF41AD048D7AE755B060_StaticFields*)il2cpp_codegen_static_fields_for(OpenXRHandMeshProvider_t7E1EB4108CF655D3DB1CAF41AD048D7AE755B060_il2cpp_TypeInfo_var))->___U3CRightU3Ek__BackingField_1), (void*)(OpenXRHandMeshProvider_t7E1EB4108CF655D3DB1CAF41AD048D7AE755B060*)NULL);
		// private static readonly ProfilerMarker UpdateHandMeshPerfMarker = new ProfilerMarker($"[MRTK] {nameof(OpenXRHandMeshProvider)}.UpdateHandMesh");
		ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD L_0;
		memset((&L_0), 0, sizeof(L_0));
		ProfilerMarker__ctor_mDD68B0A8B71E0301F592AF8891560150E55699C8_inline((&L_0), _stringLiteralFA21F085857C25FA6633EF256DA63F630C4ACF75, /*hidden argument*/NULL);
		((OpenXRHandMeshProvider_t7E1EB4108CF655D3DB1CAF41AD048D7AE755B060_StaticFields*)il2cpp_codegen_static_fields_for(OpenXRHandMeshProvider_t7E1EB4108CF655D3DB1CAF41AD048D7AE755B060_il2cpp_TypeInfo_var))->___UpdateHandMeshPerfMarker_3 = L_0;
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
// Microsoft.MixedReality.Toolkit.XRSDK.OpenXR.HolographicReprojectionMethod Microsoft.MixedReality.Toolkit.XRSDK.OpenXR.OpenXRReprojectionUpdater::get_ReprojectionMethod()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t OpenXRReprojectionUpdater_get_ReprojectionMethod_m7AED4AF08E9DFA1A4BED6876BD0831B0641D99D6 (OpenXRReprojectionUpdater_t0CE1222DFB4C9CCF7637817B8A3E9129315C5815* __this, const RuntimeMethod* method) 
{
	{
		// public HolographicReprojectionMethod ReprojectionMethod { get; set; }
		int32_t L_0 = __this->___U3CReprojectionMethodU3Ek__BackingField_4;
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.OpenXR.OpenXRReprojectionUpdater::set_ReprojectionMethod(Microsoft.MixedReality.Toolkit.XRSDK.OpenXR.HolographicReprojectionMethod)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OpenXRReprojectionUpdater_set_ReprojectionMethod_m79D17016F9A334113095A3D33F251C4205FA4298 (OpenXRReprojectionUpdater_t0CE1222DFB4C9CCF7637817B8A3E9129315C5815* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		// public HolographicReprojectionMethod ReprojectionMethod { get; set; }
		int32_t L_0 = ___value0;
		__this->___U3CReprojectionMethodU3Ek__BackingField_4 = L_0;
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.OpenXR.OpenXRReprojectionUpdater::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OpenXRReprojectionUpdater__ctor_mE368A8D72594E21E713D4A93E33C86A95E26652A (OpenXRReprojectionUpdater_t0CE1222DFB4C9CCF7637817B8A3E9129315C5815* __this, const RuntimeMethod* method) 
{
	{
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
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.OpenXR.OpenXRSpatialAwarenessMeshObserver::.ctor(Microsoft.MixedReality.Toolkit.SpatialAwareness.IMixedRealitySpatialAwarenessSystem,System.String,System.UInt32,Microsoft.MixedReality.Toolkit.BaseMixedRealityProfile)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OpenXRSpatialAwarenessMeshObserver__ctor_m95B3C209FC50309DE705601382653516321ACC5E (OpenXRSpatialAwarenessMeshObserver_t5721727A2DB9C492722FA318D38FAB0608F14E11* __this, RuntimeObject* ___spatialAwarenessSystem0, String_t* ___name1, uint32_t ___priority2, BaseMixedRealityProfile_tB4FDEF58FFD17796C0DB7241630B71CDF38FA1D4* ___profile3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GenericXRSDKSpatialMeshObserver_t992F3640352E29648369A4DE1DDAC0FFB6EAC6D1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// BaseMixedRealityProfile profile = null) : base(spatialAwarenessSystem, name, priority, profile)
		RuntimeObject* L_0 = ___spatialAwarenessSystem0;
		String_t* L_1 = ___name1;
		uint32_t L_2 = ___priority2;
		BaseMixedRealityProfile_tB4FDEF58FFD17796C0DB7241630B71CDF38FA1D4* L_3 = ___profile3;
		il2cpp_codegen_runtime_class_init_inline(GenericXRSDKSpatialMeshObserver_t992F3640352E29648369A4DE1DDAC0FFB6EAC6D1_il2cpp_TypeInfo_var);
		GenericXRSDKSpatialMeshObserver__ctor_m15C1672A0A9458D66CD08CFC2F19534D891CE799(__this, L_0, L_1, L_2, L_3, NULL);
		// { }
		return;
	}
}
// System.Nullable`1<System.Boolean> Microsoft.MixedReality.Toolkit.XRSDK.OpenXR.OpenXRSpatialAwarenessMeshObserver::get_IsActiveLoader()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 OpenXRSpatialAwarenessMeshObserver_get_IsActiveLoader_mD34B00EBFE638FBAFD2635FC2464D30A9DA7EFAE (OpenXRSpatialAwarenessMeshObserver_t5721727A2DB9C492722FA318D38FAB0608F14E11* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1__ctor_m4FAA8281CB4EFFD8B817734351FB3AC20A0CD6F5_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// false;
		Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Nullable_1__ctor_m4FAA8281CB4EFFD8B817734351FB3AC20A0CD6F5((&L_0), (bool)0, /*hidden argument*/Nullable_1__ctor_m4FAA8281CB4EFFD8B817734351FB3AC20A0CD6F5_RuntimeMethod_var);
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_get_identity_mB9CAEEB21BC81352CBF32DB9664BFC06FA7EA27B_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = ((Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields*)il2cpp_codegen_static_fields_for(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var))->___identityQuaternion_4;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR MixedRealityPose_tE60115C271AC50B8C11BA3B404BFCA99C7B2EFF5 MixedRealityPose_get_ZeroIdentity_m163137A55AEF8C8B0163D1F76197C5CCEDD943AD_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MixedRealityPose_tE60115C271AC50B8C11BA3B404BFCA99C7B2EFF5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static MixedRealityPose ZeroIdentity { get; } = new MixedRealityPose(Vector3.zero, Quaternion.identity);
		il2cpp_codegen_runtime_class_init_inline(MixedRealityPose_tE60115C271AC50B8C11BA3B404BFCA99C7B2EFF5_il2cpp_TypeInfo_var);
		MixedRealityPose_tE60115C271AC50B8C11BA3B404BFCA99C7B2EFF5 L_0 = ((MixedRealityPose_tE60115C271AC50B8C11BA3B404BFCA99C7B2EFF5_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealityPose_tE60115C271AC50B8C11BA3B404BFCA99C7B2EFF5_il2cpp_TypeInfo_var))->___U3CZeroIdentityU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR AutoScope_tFB983697E28885CB10FFDB92D7EFD0615AEF3139 ProfilerMarker_Auto_m133FA724EB95D16187B37D2C8A501D7E989B1F8D_inline (ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD* __this, const RuntimeMethod* method) 
{
	AutoScope_tFB983697E28885CB10FFDB92D7EFD0615AEF3139 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		intptr_t L_0 = __this->___m_Ptr_0;
		AutoScope_tFB983697E28885CB10FFDB92D7EFD0615AEF3139 L_1;
		memset((&L_1), 0, sizeof(L_1));
		AutoScope__ctor_m7F63A273E382CB6328736B6E7F321DDFA40EA9E3_inline((&L_1), L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		AutoScope_tFB983697E28885CB10FFDB92D7EFD0615AEF3139 L_2 = V_0;
		return L_2;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AutoScope_Dispose_mED763F3F51261EF8FB79DB32CD06E0A3F6C40481_inline (AutoScope_tFB983697E28885CB10FFDB92D7EFD0615AEF3139* __this, const RuntimeMethod* method) 
{
	{
		intptr_t L_0 = __this->___m_Ptr_0;
		ProfilerUnsafeUtility_EndSample_mE2F7A0DB4C52105F7CD135ED8816A2BB98E663CC(L_0, NULL);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t MixedRealityInteractionMapping_get_InputType_m431C40AD5149D4817FAA46DC0326A481FE348C8D_inline (MixedRealityInteractionMapping_t10DB776EEA5255542F8F4AF0DC0BC566AF0095E0* __this, const RuntimeMethod* method) 
{
	{
		// public DeviceInputType InputType => inputType;
		int32_t L_0 = __this->___inputType_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MixedRealityPose_set_Position_m9806379126B288614A363F39705935CA0D86888C_inline (MixedRealityPose_tE60115C271AC50B8C11BA3B404BFCA99C7B2EFF5* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) 
{
	{
		// public Vector3 Position { get { return position; } set { position = value; } }
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___value0;
		__this->___position_1 = L_0;
		// public Vector3 Position { get { return position; } set { position = value; } }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_op_Multiply_m5AC8B39C55015059BDD09122E04E47D4BFAB2276_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___lhs0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rhs1, const RuntimeMethod* method) 
{
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = ___lhs0;
		float L_1 = L_0.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_2 = ___rhs1;
		float L_3 = L_2.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_4 = ___lhs0;
		float L_5 = L_4.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_6 = ___rhs1;
		float L_7 = L_6.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_8 = ___lhs0;
		float L_9 = L_8.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_10 = ___rhs1;
		float L_11 = L_10.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_12 = ___lhs0;
		float L_13 = L_12.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_14 = ___rhs1;
		float L_15 = L_14.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_16 = ___lhs0;
		float L_17 = L_16.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_18 = ___rhs1;
		float L_19 = L_18.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_20 = ___lhs0;
		float L_21 = L_20.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_22 = ___rhs1;
		float L_23 = L_22.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_24 = ___lhs0;
		float L_25 = L_24.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_26 = ___rhs1;
		float L_27 = L_26.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_28 = ___lhs0;
		float L_29 = L_28.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_30 = ___rhs1;
		float L_31 = L_30.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_32 = ___lhs0;
		float L_33 = L_32.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_34 = ___rhs1;
		float L_35 = L_34.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_36 = ___lhs0;
		float L_37 = L_36.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_38 = ___rhs1;
		float L_39 = L_38.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_40 = ___lhs0;
		float L_41 = L_40.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_42 = ___rhs1;
		float L_43 = L_42.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_44 = ___lhs0;
		float L_45 = L_44.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_46 = ___rhs1;
		float L_47 = L_46.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_48 = ___lhs0;
		float L_49 = L_48.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_50 = ___rhs1;
		float L_51 = L_50.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_52 = ___lhs0;
		float L_53 = L_52.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_54 = ___rhs1;
		float L_55 = L_54.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_56 = ___lhs0;
		float L_57 = L_56.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_58 = ___rhs1;
		float L_59 = L_58.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_60 = ___lhs0;
		float L_61 = L_60.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_62 = ___rhs1;
		float L_63 = L_62.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_64;
		memset((&L_64), 0, sizeof(L_64));
		Quaternion__ctor_m868FD60AA65DD5A8AC0C5DEB0608381A8D85FCD8_inline((&L_64), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_1, L_3)), ((float)il2cpp_codegen_multiply(L_5, L_7)))), ((float)il2cpp_codegen_multiply(L_9, L_11)))), ((float)il2cpp_codegen_multiply(L_13, L_15)))), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_17, L_19)), ((float)il2cpp_codegen_multiply(L_21, L_23)))), ((float)il2cpp_codegen_multiply(L_25, L_27)))), ((float)il2cpp_codegen_multiply(L_29, L_31)))), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_33, L_35)), ((float)il2cpp_codegen_multiply(L_37, L_39)))), ((float)il2cpp_codegen_multiply(L_41, L_43)))), ((float)il2cpp_codegen_multiply(L_45, L_47)))), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply(L_49, L_51)), ((float)il2cpp_codegen_multiply(L_53, L_55)))), ((float)il2cpp_codegen_multiply(L_57, L_59)))), ((float)il2cpp_codegen_multiply(L_61, L_63)))), /*hidden argument*/NULL);
		V_0 = L_64;
		goto IL_00e5;
	}

IL_00e5:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_65 = V_0;
		return L_65;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MixedRealityPose_set_Rotation_m090951B4A308155032C377FF0AE6BED025C39868_inline (MixedRealityPose_tE60115C271AC50B8C11BA3B404BFCA99C7B2EFF5* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___value0, const RuntimeMethod* method) 
{
	{
		// public Quaternion Rotation { get { return rotation; } set { rotation = value; } }
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = ___value0;
		__this->___rotation_2 = L_0;
		// public Quaternion Rotation { get { return rotation; } set { rotation = value; } }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* BaseController_get_InputSource_m8FE11DBDF7B41338ACF8AFF3A0C8FAD83E5D2870_inline (BaseController_t1635F01D9B5000C345FAF98BAEEA495E97C32274* __this, const RuntimeMethod* method) 
{
	{
		// public IMixedRealityInputSource InputSource { get; }
		RuntimeObject* L_0 = __this->___U3CInputSourceU3Ek__BackingField_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint8_t BaseController_get_ControllerHandedness_m739908CFF885DB452AD9A115F569C455BA46A3A1_inline (BaseController_t1635F01D9B5000C345FAF98BAEEA495E97C32274* __this, const RuntimeMethod* method) 
{
	{
		// public Handedness ControllerHandedness { get; }
		uint8_t L_0 = __this->___U3CControllerHandednessU3Ek__BackingField_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR MixedRealityInputAction_tD3B6E9CE7F20EFC9D066C519FAB848679FC62486 MixedRealityInteractionMapping_get_MixedRealityInputAction_mE813B3EBBA0A10F64E34EA6E5001D140D81141E9_inline (MixedRealityInteractionMapping_t10DB776EEA5255542F8F4AF0DC0BC566AF0095E0* __this, const RuntimeMethod* method) 
{
	{
		// get { return inputAction; }
		MixedRealityInputAction_tD3B6E9CE7F20EFC9D066C519FAB848679FC62486 L_0 = __this->___inputAction_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR MixedRealityPose_tE60115C271AC50B8C11BA3B404BFCA99C7B2EFF5 MixedRealityInteractionMapping_get_PoseData_m90E4BA2D7413EC29B85B025AEE96C2F7662427B0_inline (MixedRealityInteractionMapping_t10DB776EEA5255542F8F4AF0DC0BC566AF0095E0* __this, const RuntimeMethod* method) 
{
	{
		// return poseData;
		MixedRealityPose_tE60115C271AC50B8C11BA3B404BFCA99C7B2EFF5 L_0 = __this->___poseData_17;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ProfilerMarker__ctor_mDD68B0A8B71E0301F592AF8891560150E55699C8_inline (ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD* __this, String_t* ___name0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___name0;
		intptr_t L_1;
		L_1 = ProfilerUnsafeUtility_CreateMarker_m27DDE00D41B95677982DBFCE074D45B79E50C7CC(L_0, (uint16_t)1, 0, 0, NULL);
		__this->___m_Ptr_0 = L_1;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR OpenXRHandMeshProvider_t7E1EB4108CF655D3DB1CAF41AD048D7AE755B060* OpenXRHandMeshProvider_get_Right_m95E73FC1A14FA52D4557E230F8F3F254CFA2B856_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OpenXRHandMeshProvider_t7E1EB4108CF655D3DB1CAF41AD048D7AE755B060_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static OpenXRHandMeshProvider Right { get; } =
		il2cpp_codegen_runtime_class_init_inline(OpenXRHandMeshProvider_t7E1EB4108CF655D3DB1CAF41AD048D7AE755B060_il2cpp_TypeInfo_var);
		OpenXRHandMeshProvider_t7E1EB4108CF655D3DB1CAF41AD048D7AE755B060* L_0 = ((OpenXRHandMeshProvider_t7E1EB4108CF655D3DB1CAF41AD048D7AE755B060_StaticFields*)il2cpp_codegen_static_fields_for(OpenXRHandMeshProvider_t7E1EB4108CF655D3DB1CAF41AD048D7AE755B060_il2cpp_TypeInfo_var))->___U3CRightU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR OpenXRHandMeshProvider_t7E1EB4108CF655D3DB1CAF41AD048D7AE755B060* OpenXRHandMeshProvider_get_Left_mA2D4A13AD50B19E12EEABA8C8F4055DDD1D50EDB_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OpenXRHandMeshProvider_t7E1EB4108CF655D3DB1CAF41AD048D7AE755B060_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static OpenXRHandMeshProvider Left { get; } =
		il2cpp_codegen_runtime_class_init_inline(OpenXRHandMeshProvider_t7E1EB4108CF655D3DB1CAF41AD048D7AE755B060_il2cpp_TypeInfo_var);
		OpenXRHandMeshProvider_t7E1EB4108CF655D3DB1CAF41AD048D7AE755B060* L_0 = ((OpenXRHandMeshProvider_t7E1EB4108CF655D3DB1CAF41AD048D7AE755B060_StaticFields*)il2cpp_codegen_static_fields_for(OpenXRHandMeshProvider_t7E1EB4108CF655D3DB1CAF41AD048D7AE755B060_il2cpp_TypeInfo_var))->___U3CLeftU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OpenXRHandMeshProvider_SetInputSource_mF13BFDF25DA36932B4F78D6717FB251E4E0889BB_inline (OpenXRHandMeshProvider_t7E1EB4108CF655D3DB1CAF41AD048D7AE755B060* __this, RuntimeObject* ___inputSource0, const RuntimeMethod* method) 
{
	{
		// public void SetInputSource(IMixedRealityInputSource inputSource) => this.inputSource = inputSource;
		RuntimeObject* L_0 = ___inputSource0;
		__this->___inputSource_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___inputSource_2), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool BaseController_get_Enabled_m2C7625D1C254DBCBE44B4493CE862C4BDADCAE4B_inline (BaseController_t1635F01D9B5000C345FAF98BAEEA495E97C32274* __this, const RuntimeMethod* method) 
{
	{
		// public bool Enabled { get; set; }
		bool L_0 = __this->___U3CEnabledU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR MixedRealityInteractionMappingU5BU5D_t689ED6694F3B293DEDEA6D5371268D36DC67AACE* BaseController_get_Interactions_m0FDC472367761C254E7472EC21FE1251E7FA5A74_inline (BaseController_t1635F01D9B5000C345FAF98BAEEA495E97C32274* __this, const RuntimeMethod* method) 
{
	{
		// public MixedRealityInteractionMapping[] Interactions { get; private set; } = null;
		MixedRealityInteractionMappingU5BU5D_t689ED6694F3B293DEDEA6D5371268D36DC67AACE* L_0 = __this->___U3CInteractionsU3Ek__BackingField_9;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BaseController_set_Enabled_m1D7DEE744E2031B9DE7EE85C13F570692D8E1CE1_inline (BaseController_t1635F01D9B5000C345FAF98BAEEA495E97C32274* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// public bool Enabled { get; set; }
		bool L_0 = ___value0;
		__this->___U3CEnabledU3Ek__BackingField_1 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t MixedRealityInteractionMapping_get_AxisType_mCD3EA297AACF47BE8DFCCDCEBB0ABD2F5933EA40_inline (MixedRealityInteractionMapping_t10DB776EEA5255542F8F4AF0DC0BC566AF0095E0* __this, const RuntimeMethod* method) 
{
	{
		// public AxisType AxisType => axisType;
		int32_t L_0 = __this->___axisType_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Mathf_Approximately_m1C8DD0BB6A2D22A7DCF09AD7F8EE9ABD12D3F620_inline (float ___a0, float ___b1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Mathf_tE284D016E3B297B72311AAD9EB8F0E643F6A4682_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		float L_0 = ___b1;
		float L_1 = ___a0;
		float L_2;
		L_2 = fabsf(((float)il2cpp_codegen_subtract(L_0, L_1)));
		float L_3 = ___a0;
		float L_4;
		L_4 = fabsf(L_3);
		float L_5 = ___b1;
		float L_6;
		L_6 = fabsf(L_5);
		float L_7;
		L_7 = Mathf_Max_mA9DCA91E87D6D27034F56ABA52606A9090406016_inline(L_4, L_6, NULL);
		float L_8 = ((Mathf_tE284D016E3B297B72311AAD9EB8F0E643F6A4682_StaticFields*)il2cpp_codegen_static_fields_for(Mathf_tE284D016E3B297B72311AAD9EB8F0E643F6A4682_il2cpp_TypeInfo_var))->___Epsilon_0;
		float L_9;
		L_9 = Mathf_Max_mA9DCA91E87D6D27034F56ABA52606A9090406016_inline(((float)il2cpp_codegen_multiply((9.99999997E-07f), L_7)), ((float)il2cpp_codegen_multiply(L_8, (8.0f))), NULL);
		V_0 = (bool)((((float)L_2) < ((float)L_9))? 1 : 0);
		goto IL_0035;
	}

IL_0035:
	{
		bool L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool MixedRealityInteractionMapping_get_BoolData_m69F4D6E88FF5DF204C3C38426A2BCD74AB7060CB_inline (MixedRealityInteractionMapping_t10DB776EEA5255542F8F4AF0DC0BC566AF0095E0* __this, const RuntimeMethod* method) 
{
	{
		// return boolData;
		bool L_0 = __this->___boolData_12;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t OpenXRCameraSettingsProfile_get_ReprojectionMethod_mC5A8CD3922E76B3CB4111EB9234AB08794269C48_inline (OpenXRCameraSettingsProfile_t06E39687ABEB6884081EEB67DBC551239884CBD0* __this, const RuntimeMethod* method) 
{
	{
		// public HolographicReprojectionMethod ReprojectionMethod => reprojectionMethod;
		int32_t L_0 = __this->___reprojectionMethod_5;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OpenXRReprojectionUpdater_set_ReprojectionMethod_m79D17016F9A334113095A3D33F251C4205FA4298_inline (OpenXRReprojectionUpdater_t0CE1222DFB4C9CCF7637817B8A3E9129315C5815* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		// public HolographicReprojectionMethod ReprojectionMethod { get; set; }
		int32_t L_0 = ___value0;
		__this->___U3CReprojectionMethodU3Ek__BackingField_4 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool SimpleCoroutineAwaiter_get_IsCompleted_m1F2F67907C96BE5BB23AF2F333A458FE3413D343_inline (SimpleCoroutineAwaiter_t9DF0277C21C7F3B9CE7C9563D257D9A4821B4898* __this, const RuntimeMethod* method) 
{
	{
		// public bool IsCompleted { get; private set; }
		bool L_0 = __this->___U3CIsCompletedU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool MixedRealityEyeTrackingProfile_get_SmoothEyeTracking_mA573E1715A6366BB4B07E62F5A35D74F142611C4_inline (MixedRealityEyeTrackingProfile_tC934F1DEA6C01B8F9F282E6AE7987E7CD874411B* __this, const RuntimeMethod* method) 
{
	{
		// public bool SmoothEyeTracking => smoothEyeTracking;
		bool L_0 = __this->___smoothEyeTracking_5;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OpenXREyeGazeDataProvider_set_SmoothEyeTracking_mF45788340BD1A481C0C6AD98E149FDC891D81458_inline (OpenXREyeGazeDataProvider_t25F551318CABD265458042E84D190BF28F66A55F* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// public bool SmoothEyeTracking { get; set; } = false;
		bool L_0 = ___value0;
		__this->___U3CSmoothEyeTrackingU3Ek__BackingField_21 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_forward_mEBAB24D77FC02FC88ED880738C3B1D47C758B3EB_inline (const RuntimeMethod* method) 
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
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___forwardVector_11;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool OpenXREyeGazeDataProvider_get_SmoothEyeTracking_m2D09B00C53489A1EED38805CA488A2AA929470C9_inline (OpenXREyeGazeDataProvider_t25F551318CABD265458042E84D190BF28F66A55F* __this, const RuntimeMethod* method) 
{
	{
		// public bool SmoothEyeTracking { get; set; } = false;
		bool L_0 = __this->___U3CSmoothEyeTrackingU3Ek__BackingField_21;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Nullable_1_GetValueOrDefault_m8D130DB7F2A1E694736B449176F9C26DB456597B_gshared_inline (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->___value_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_gshared_inline (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = (bool)__this->___hasValue_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m828761CCE16645195ED82DCD06AD93CD44C905FD_gshared_inline (List_1_t291997894B2B2DA81CD73E6D5913780EBFED4068* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_m6B76D139692C43B2AF7C695FAB044B16ACFAF355_gshared_inline (Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = (bool)__this->___hasValue_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD Enumerator_get_Current_mA273BA593E927E11AB13038A0951F0BA23BE9218_gshared_inline (Enumerator_t2F44BB49815829BA641EEC9E12F6258B3AB34AEE* __this, const RuntimeMethod* method) 
{
	{
		InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD L_0 = (InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD)__this->____currentKey_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m9C3EC7FE1A9401268B3C9761A4D96A37197AD0E7_gshared_inline (List_1_tB66D13E0427CA48C600AEA4DBA5B173C3734C6CE* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* BaseDataProvider_1_get_Service_m9D57380441608DEC9ABF2199EA5585FC967E038F_gshared_inline (BaseDataProvider_1_t8DC280A360428C68343AA5D6B95788F4A050196F* __this, const RuntimeMethod* method) 
{
	{
		// protected T Service { get; set; } = default(T);
		RuntimeObject* L_0 = (RuntimeObject*)__this->___U3CServiceU3Ek__BackingField_13;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AutoScope__ctor_m7F63A273E382CB6328736B6E7F321DDFA40EA9E3_inline (AutoScope_tFB983697E28885CB10FFDB92D7EFD0615AEF3139* __this, intptr_t ___markerPtr0, const RuntimeMethod* method) 
{
	{
		intptr_t L_0 = ___markerPtr0;
		__this->___m_Ptr_0 = L_0;
		intptr_t L_1 = ___markerPtr0;
		ProfilerUnsafeUtility_BeginSample_m1C6D6ED1C8E0CB2FD0934EB6EA333276F67C14F6(L_1, NULL);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Quaternion__ctor_m868FD60AA65DD5A8AC0C5DEB0608381A8D85FCD8_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* __this, float ___x0, float ___y1, float ___z2, float ___w3, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_0 = L_0;
		float L_1 = ___y1;
		__this->___y_1 = L_1;
		float L_2 = ___z2;
		__this->___z_2 = L_2;
		float L_3 = ___w3;
		__this->___w_3 = L_3;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Max_mA9DCA91E87D6D27034F56ABA52606A9090406016_inline (float ___a0, float ___b1, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float G_B3_0 = 0.0f;
	{
		float L_0 = ___a0;
		float L_1 = ___b1;
		if ((((float)L_0) > ((float)L_1)))
		{
			goto IL_0008;
		}
	}
	{
		float L_2 = ___b1;
		G_B3_0 = L_2;
		goto IL_0009;
	}

IL_0008:
	{
		float L_3 = ___a0;
		G_B3_0 = L_3;
	}

IL_0009:
	{
		V_0 = G_B3_0;
		goto IL_000c;
	}

IL_000c:
	{
		float L_4 = V_0;
		return L_4;
	}
}
