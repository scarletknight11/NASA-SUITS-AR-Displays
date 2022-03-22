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
template <typename R, typename T1, typename T2>
struct VirtualFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R>
struct GenericVirtualFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
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
template <typename T1>
struct InterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
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
template <typename T1, typename T2>
struct GenericInterfaceActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R>
struct GenericInterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// System.Action`1<System.Boolean>
struct Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C;
// System.Action`1<UnityEngine.XR.MeshGenerationResult>
struct Action_1_tC58438B06CEC83E8978FB47AC67764F80F55DEA8;
// System.Action`1<UnityEngine.XR.XRInputSubsystem>
struct Action_1_tC867D66471C553CFFF8707FF2C59FB7AAB03086A;
// Microsoft.MixedReality.Toolkit.BaseDataProvider`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem>
struct BaseDataProvider_1_t1C7B9F1707FEB27659F53B230E0A18282D2F7F20;
// Microsoft.MixedReality.Toolkit.BaseDataProvider`1<Microsoft.MixedReality.Toolkit.SpatialAwareness.IMixedRealitySpatialAwarenessSystem>
struct BaseDataProvider_1_tD2C6659D94D07FC49556BA26F6C62210EACE7F30;
// Microsoft.MixedReality.Toolkit.BaseDataProvider`1<System.Object>
struct BaseDataProvider_1_t8DC280A360428C68343AA5D6B95788F4A050196F;
// System.Collections.Generic.Dictionary`2<Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointer,System.UInt32>
struct Dictionary_2_t924EC80B88AF529C31B6BD658C27711A7B2B2A5E;
// System.Collections.Generic.Dictionary`2<UnityEngine.XR.InputDevice,Microsoft.MixedReality.Toolkit.XRSDK.Input.GenericXRSDKController>
struct Dictionary_2_t500395CB4236088AFBF004A0D9DD896F9DC12876;
// System.Collections.Generic.Dictionary`2<UnityEngine.XR.InputDevice,System.Object>
struct Dictionary_2_t71D6FBDC59C9F3896AA3D4E3FEBCEA1D877D10C5;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Object>
struct Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907;
// System.Collections.Generic.Dictionary`2<System.Int32,Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessMeshObject>
struct Dictionary_2_t0E31064CA2CAEBF8E2C6B82A38A6D432A0F91413;
// System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.BaseEventSystem/EventHandlerEntry>>
struct Dictionary_2_t18E076B12814DFAAD91B5BC1B163AAFAC0CADEFD;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.SpatialAwareness.IMixedRealitySpatialAwarenessObservationHandler`1<Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessMeshObject>>
struct EventFunction_1_tEBC0FE0CCBC0E2CED086EF11F4973BE9B1419E00;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Boundary.IMixedRealityBoundaryHandler>
struct EventFunction_1_t607625712441FEC3E35D99748197200C15B25ED5;
// System.Func`1<System.Boolean>
struct Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457;
// System.Collections.Generic.HashSet`1<UnityEngine.XR.Management.XRLoader>
struct HashSet_1_t174593AE6599738C19A33586587D63534CED9F0F;
// System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<UnityEngine.XR.InputDevice,Microsoft.MixedReality.Toolkit.XRSDK.Input.GenericXRSDKController>>
struct IEnumerable_1_t3FADB8838E5DC2BA0E19710A18BE6BF840759B81;
// System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<UnityEngine.XR.InputDevice,System.Object>>
struct IEnumerable_1_t6C8EE9BE6450F9C2BF9E5FEA91DE93C600CE0096;
// System.Collections.Generic.IEnumerable`1<UnityEngine.XR.InputDevice>
struct IEnumerable_1_t8A537A487D98572E934BE83328339216FC1B1199;
// System.Collections.Generic.IEnumerable`1<System.Int32>
struct IEnumerable_1_tCE758D940790D6D0D56B457E522C195F8C413AF2;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<UnityEngine.XR.InputDevice,Microsoft.MixedReality.Toolkit.XRSDK.Input.GenericXRSDKController>>
struct IEnumerator_1_t64A8530613207286B2C5E16B7143F931384C8DDB;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<UnityEngine.XR.InputDevice,System.Object>>
struct IEnumerator_1_t33FC520070EE6BE5C3A8EB107D670B3ECB6C0CD6;
// System.Collections.Generic.IEqualityComparer`1<UnityEngine.XR.InputDevice>
struct IEqualityComparer_1_tE36397949962FBA7295FD9601B752364AFB4B9BD;
// System.Collections.Generic.IEqualityComparer`1<System.Int32>
struct IEqualityComparer_1_tDBFC8496F14612776AF930DBF84AFE7D06D1F0E9;
// System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<UnityEngine.XR.InputDevice,Microsoft.MixedReality.Toolkit.XRSDK.Input.GenericXRSDKController>>
struct IList_1_tF806AAD483DA6008F99750527CA1DDBD2FBACF3D;
// Microsoft.MixedReality.Toolkit.SpatialAwareness.IMixedRealitySpatialAwarenessObservationHandler`1<Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessMeshObject>
struct IMixedRealitySpatialAwarenessObservationHandler_1_t92770D3EC6A2A2A1BCC5AFF6614A5CA110847BA4;
// System.Collections.Generic.IReadOnlyDictionary`2<System.Int32,Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessMeshObject>
struct IReadOnlyDictionary_2_t8399CE6ED0D6FE3873E2F4CC4BE5EEA54627167A;
// System.Collections.Generic.IReadOnlyList`1<Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver>
struct IReadOnlyList_1_t9F9234BC8DF4C655DBE288E0E99D8F2324A8F244;
// System.Collections.Generic.Dictionary`2/KeyCollection<UnityEngine.XR.InputDevice,Microsoft.MixedReality.Toolkit.XRSDK.Input.GenericXRSDKController>
struct KeyCollection_tAC459CF1D9D2C68BB347E1A1EF4519DCC3DD58A1;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessMeshObject>
struct KeyCollection_tD7EE5044ABBC844B6026FBADB76D38F3A619601B;
// System.Collections.Generic.List`1<System.Tuple`2<Microsoft.MixedReality.Toolkit.BaseEventSystem/Action,UnityEngine.GameObject>>
struct List_1_tADF7F1C5FADE0AE6D00BC928B20C4B63DDC8A3AD;
// System.Collections.Generic.List`1<System.Tuple`3<Microsoft.MixedReality.Toolkit.BaseEventSystem/Action,System.Type,UnityEngine.EventSystems.IEventSystemHandler>>
struct List_1_t51E625EDA46926814063BAC38407B110D9C48805;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B;
// System.Collections.Generic.List`1<UnityEngine.XR.InputDevice>
struct List_1_tB66D13E0427CA48C600AEA4DBA5B173C3734C6CE;
// System.Collections.Generic.List`1<UnityEngine.XR.InputDeviceCharacteristics>
struct List_1_tEA57E67D76DE7CBA7F472F399385BD853B825EB7;
// System.Collections.Generic.List`1<System.Int32>
struct List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73;
// System.Collections.Generic.List`1<UnityEngine.XR.MeshInfo>
struct List_1_tEE09D0BD215A518344AF2985829C519B609B7B17;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.List`1<System.UInt32Enum>
struct List_1_tE3A859FDD017A2D25E8161269BA1167C22EC7EB9;
// System.Collections.Generic.List`1<System.UInt64>
struct List_1_tB88E7361EE76DFB3EBB7FCD60CC59ACC3E48C284;
// System.Collections.Generic.List`1<UnityEngine.Vector3>
struct List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B;
// System.Collections.Generic.List`1<UnityEngine.XR.XRInputSubsystem>
struct List_1_t90832B88D7207769654164CC28440CF594CC397D;
// System.Collections.Generic.List`1<UnityEngine.XR.Management.XRLoader>
struct List_1_tA1A04BD6B1EE83992AE369D5DB31A028E9B57822;
// System.Collections.Generic.List`1<UnityEngine.XR.XRMeshSubsystemDescriptor>
struct List_1_tA9571B7847EA1D73E7B431473A8F7D19B9786E22;
// Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessEventData`1<System.Object>
struct MixedRealitySpatialAwarenessEventData_1_tC567213B97A595AE937609AA4DD48215B87D4A3C;
// Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessEventData`1<Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessMeshObject>
struct MixedRealitySpatialAwarenessEventData_1_tE46EB2E96DFDDF77196F0A24715743FD22640021;
// System.Collections.Generic.Queue`1<UnityEngine.XR.MeshId>
struct Queue_1_tCD897AEF7F66F282E6B86F78DCC03D0B51FBDF37;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<UnityEngine.XR.InputDevice,Microsoft.MixedReality.Toolkit.XRSDK.Input.GenericXRSDKController>>
struct ReadOnlyCollection_1_tEB4BE5E673E69CD3F9C8D17F224E7C888E5BEF5B;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<UnityEngine.XR.InputDevice,System.Object>>
struct ReadOnlyCollection_1_tDF77079EDD8BBAD519512EBD12E41ED00968AE59;
// System.Collections.Generic.Dictionary`2/ValueCollection<UnityEngine.XR.InputDevice,Microsoft.MixedReality.Toolkit.XRSDK.Input.GenericXRSDKController>
struct ValueCollection_t7F7DC8938D9D14C7F210BAD9F68B0A42D9383CCA;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessMeshObject>
struct ValueCollection_t96DC10F52F92545928756F40D9A1ED6B737238B0;
// System.Collections.Generic.Dictionary`2/Entry<UnityEngine.XR.InputDevice,Microsoft.MixedReality.Toolkit.XRSDK.Input.GenericXRSDKController>[]
struct EntryU5BU5D_t310105339EC5247A39CE52616910CF9376264EA2;
// System.Collections.Generic.Dictionary`2/Entry<System.Int32,Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessMeshObject>[]
struct EntryU5BU5D_tCDA876808A0DE87F626276F2AE0B52E1836167BF;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// Microsoft.MixedReality.Toolkit.Boundary.Edge[]
struct EdgeU5BU5D_t2FC69F7FE9B8B7E947E944523E1F7466DD4EA8EA;
// UnityEngine.XR.InputDevice[]
struct InputDeviceU5BU5D_t1361FC6DDFE12D211F933B024E51B7E5CF073F63;
// UnityEngine.XR.InputDeviceCharacteristics[]
struct InputDeviceCharacteristicsU5BU5D_t68DAA13EA6FC9C8D7BC5FF27CE4CEE8C3B9B6D2B;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// UnityEngine.XR.MeshId[]
struct MeshIdU5BU5D_t3E39DFB92817D0E90346DA8E65BFB634DC640E01;
// UnityEngine.XR.MeshInfo[]
struct MeshInfoU5BU5D_t66EC9A8E4264CBD53E136BF96628DEC22D660030;
// Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping[]
struct MixedRealityInteractionMappingU5BU5D_t689ED6694F3B293DEDEA6D5371268D36DC67AACE;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
// System.UInt32Enum[]
struct UInt32EnumU5BU5D_t98241E73F566A0C7C43B1F407869881BF951BE1A;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
// UnityEngine.XR.XRInputSubsystem[]
struct XRInputSubsystemU5BU5D_t224A541B4C0D2E3253E4D68ADF4F824AC587B11C;
// UnityEngine.XR.XRMeshSubsystemDescriptor[]
struct XRMeshSubsystemDescriptorU5BU5D_t3B992422B03C712E6A939E14D9CF3F3799D62E72;
// Microsoft.MixedReality.Toolkit.Input.BaseInputDeviceManager/PointerConfig[]
struct PointerConfigU5BU5D_tB0CE3BD4887D9B9BFC82FC1CA265B076BFD7B59F;
// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07;
// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C;
// Microsoft.MixedReality.Toolkit.Boundary.BaseBoundarySystem
struct BaseBoundarySystem_t17725CB18637398B438C3C2B6E27DA80B4B27413;
// Microsoft.MixedReality.Toolkit.CameraSystem.BaseCameraSettingsProfile
struct BaseCameraSettingsProfile_tDB8373232611B34628752DF4D284B938CFE32799;
// Microsoft.MixedReality.Toolkit.CameraSystem.BaseCameraSettingsProvider
struct BaseCameraSettingsProvider_tD700E49A18844AC7B08C84247430319CFEC93F46;
// Microsoft.MixedReality.Toolkit.Input.BaseController
struct BaseController_t1635F01D9B5000C345FAF98BAEEA495E97C32274;
// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F;
// Microsoft.MixedReality.Toolkit.Input.BaseInputDeviceManager
struct BaseInputDeviceManager_t1D055DB03D88FA053C00671FEA5040B944CC26BC;
// Microsoft.MixedReality.Toolkit.BaseMixedRealityProfile
struct BaseMixedRealityProfile_tB4FDEF58FFD17796C0DB7241630B71CDF38FA1D4;
// UnityEngine.Experimental.XR.Interaction.BasePoseProvider
struct BasePoseProvider_t55E2883DF2C8052200284D64B68471636876FA1D;
// Microsoft.MixedReality.Toolkit.BaseService
struct BaseService_tB7EC5C0F60DC5EE2DA122A608226D3887B6421D0;
// Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialAwarenessObject
struct BaseSpatialAwarenessObject_tD8B917300EF3EB525D1666D65D8A22226F935C55;
// Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialMeshObserver
struct BaseSpatialMeshObserver_t38C1251909F4D9DB3B4E3DA90CFC32670E925B46;
// Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialObserver
struct BaseSpatialObserver_tFBE4A1B3D5FCCB85BD0DC39709C1FCB7085D797B;
// System.Reflection.Binder
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
// Microsoft.MixedReality.Toolkit.Boundary.BoundaryEventData
struct BoundaryEventData_tD8FC73229A6B5612FFAEDAFF207FBEADA7934C41;
// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184;
// UnityEngine.Collider
struct Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// UnityEngine.EventSystems.EventSystem
struct EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707;
// System.Exception
struct Exception_t;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKCameraSettings
struct GenericXRSDKCameraSettings_tF9630B1F8A11581A51BEFE2C71E8D444D75052AB;
// Microsoft.MixedReality.Toolkit.XRSDK.Input.GenericXRSDKController
struct GenericXRSDKController_tB5136D037E3BD7D743A519016EA2710F7ED980DE;
// Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver
struct GenericXRSDKSpatialMeshObserver_t992F3640352E29648369A4DE1DDAC0FFB6EAC6D1;
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
// Microsoft.MixedReality.Toolkit.IMixedRealityEventSource
struct IMixedRealityEventSource_t9E9DFD08DEE578702833FF502590A1E0476E59E1;
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource
struct IMixedRealityInputSource_t9926A91DEC380AA837347E82976F5A6A9F9226C2;
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSourceDefinition
struct IMixedRealityInputSourceDefinition_tE7BF76E1A2D7019ADB64FA561FB5D5DC1965E835;
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem
struct IMixedRealityInputSystem_t73D9E8D52E761DF1CC230411D0EFD51104FF68B2;
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointer
struct IMixedRealityPointer_t6B17FD29F171D88877AB2EF9C59FEBB65ED6E446;
// Microsoft.MixedReality.Toolkit.IMixedRealityServiceRegistrar
struct IMixedRealityServiceRegistrar_t4B893B7CDAAC977211D826D02C8522ECA327D715;
// Microsoft.MixedReality.Toolkit.SpatialAwareness.IMixedRealitySpatialAwarenessObserver
struct IMixedRealitySpatialAwarenessObserver_t6897374ED60E2BA1C5A4ECAF099C486EF526FF15;
// Microsoft.MixedReality.Toolkit.SpatialAwareness.IMixedRealitySpatialAwarenessSystem
struct IMixedRealitySpatialAwarenessSystem_tF5F2975ACCFD98470DF1D17EC3850A257BF28817;
// UnityEngine.ISubsystemDescriptor
struct ISubsystemDescriptor_tEF29944D579CC7D70F52CB883150735991D54E6E;
// Microsoft.MixedReality.Toolkit.Boundary.InscribedRectangle
struct InscribedRectangle_t14EC555E1339374E9BE9805CDFF46F3D5CE448F1;
// UnityEngine.IntegratedSubsystem
struct IntegratedSubsystem_t990160A89854D87C0836DC589B720231C02D4CE3;
// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
// System.Reflection.MemberFilter
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4;
// UnityEngine.MeshCollider
struct MeshCollider_tB525E4DDE383252364ED0BDD32CF2B53914EE455;
// UnityEngine.MeshFilter
struct MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5;
// UnityEngine.MeshRenderer
struct MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// Microsoft.MixedReality.Toolkit.Boundary.MixedRealityBoundaryVisualizationProfile
struct MixedRealityBoundaryVisualizationProfile_t8696935F2FD43867A7389688367D5F2C41862E81;
// Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping
struct MixedRealityInteractionMapping_t10DB776EEA5255542F8F4AF0DC0BC566AF0095E0;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// UnityEngine.PhysicMaterial
struct PhysicMaterial_t4ECED34E04BB2148333467208361A5FBFDCD7131;
// UnityEngine.Renderer
struct Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessMeshObject
struct SpatialAwarenessMeshObject_t5577B6C05F0A1138C582A8F1B7A717B81AE11379;
// System.String
struct String_t;
// System.Threading.SynchronizationContext
struct SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0;
// System.Threading.Tasks.Task
struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572;
// UnityEngine.SpatialTracking.TrackedPoseDriver
struct TrackedPoseDriver_t5A2DEE7957ED76932DB7460383BF09AB1CB4CCCD;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// System.Type
struct Type_t;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityEngine.WaitUntil
struct WaitUntil_tA1CD487C5811E7C1F8C4ADA85DF5F4EFDC1D41BD;
// UnityEngine.XR.XRDisplaySubsystem
struct XRDisplaySubsystem_t4B00B0BF1894A039ACFA8DDC2C2EB9301118C1F1;
// UnityEngine.XR.Management.XRGeneralSettings
struct XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE;
// UnityEngine.XR.XRInputSubsystem
struct XRInputSubsystem_tFECE6683FCAEBF05BAD05E5D612690095D8BAD34;
// UnityEngine.XR.Management.XRLoader
struct XRLoader_t80B1B1934C40561C5352ABC95D567DC2A7C9C976;
// UnityEngine.XR.Management.XRManagerSettings
struct XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52;
// UnityEngine.XR.XRMeshSubsystem
struct XRMeshSubsystem_tDDC31EC10D4F0517542F9EB296428A0F7EC2C3B2;
// Microsoft.MixedReality.Toolkit.XRSDK.XRSDKBoundarySystem
struct XRSDKBoundarySystem_t968246960310390A317722A0F222895980A9F05D;
// Microsoft.MixedReality.Toolkit.XRSDK.Input.XRSDKDeviceManager
struct XRSDKDeviceManager_t9F5B097AEC5AA187C3083AE6F40B34E00E1BA583;
// Microsoft.MixedReality.Toolkit.Utilities.AwaiterExtensions/SimpleCoroutineAwaiter
struct SimpleCoroutineAwaiter_t9DF0277C21C7F3B9CE7C9563D257D9A4821B4898;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD;

IL2CPP_EXTERN_C RuntimeClass* Action_1_tC58438B06CEC83E8978FB47AC67764F80F55DEA8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BaseBoundarySystem_t17725CB18637398B438C3C2B6E27DA80B4B27413_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BaseInputDeviceManager_t1D055DB03D88FA053C00671FEA5040B944CC26BC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BaseSpatialMeshObserver_t38C1251909F4D9DB3B4E3DA90CFC32670E925B46_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CommonUsages_t9208F514F1E77BE70AC53EFEC94D57EDDAF3B8E1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CoreServices_tCB1FB80E338B89BCA07C52C15B876BC6D4B3439B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CustomUsages_t07BAB05B93FBB1D80AAD710042445ED8DDE3A476_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t500395CB4236088AFBF004A0D9DD896F9DC12876_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GenericXRSDKController_tB5136D037E3BD7D743A519016EA2710F7ED980DE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GenericXRSDKSpatialMeshObserver_t992F3640352E29648369A4DE1DDAC0FFB6EAC6D1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Handedness_t8F3D346D04DED9C8F19FDD0EAB3DFFF385E485FF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_1_tCE758D940790D6D0D56B457E522C195F8C413AF2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_t64A8530613207286B2C5E16B7143F931384C8DDB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_tD6A90A7446DA8E6CF865EDFBBF18C1200BB6D452_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IMixedRealityControllerVisualizer_t7B6B8F308ED8917976841E02F1525D6B7E478F7B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IMixedRealityDataProviderAccess_t48EF38CF377059EBAB2115CA90FE8900FC8558B8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IMixedRealityInputSource_t9926A91DEC380AA837347E82976F5A6A9F9226C2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IMixedRealityInputSystem_t73D9E8D52E761DF1CC230411D0EFD51104FF68B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IMixedRealityPointer_t6B17FD29F171D88877AB2EF9C59FEBB65ED6E446_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IMixedRealityServiceState_t516883E6EEF105E9B44DA2124786E742C9C146BE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IReadOnlyCollection_1_t50E090AA25FBA088237B972BABE04926634C5B64_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IReadOnlyDictionary_2_t8399CE6ED0D6FE3873E2F4CC4BE5EEA54627167A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IReadOnlyList_1_t9F9234BC8DF4C655DBE288E0E99D8F2324A8F244_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t90832B88D7207769654164CC28440CF594CC397D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tA9571B7847EA1D73E7B431473A8F7D19B9786E22_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tB66D13E0427CA48C600AEA4DBA5B173C3734C6CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tEA57E67D76DE7CBA7F472F399385BD853B825EB7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tEE09D0BD215A518344AF2985829C519B609B7B17_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Mathf_tE284D016E3B297B72311AAD9EB8F0E643F6A4682_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MeshId_t2CF122567F06D0AA4F80DDA5CB51E8CD3B7EA2AC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MixedRealityPose_tE60115C271AC50B8C11BA3B404BFCA99C7B2EFF5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Queue_1_tCD897AEF7F66F282E6B86F78DCC03D0B51FBDF37_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SimpleCoroutineAwaiter_t9DF0277C21C7F3B9CE7C9563D257D9A4821B4898_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SpatialAwarenessMeshObject_t5577B6C05F0A1138C582A8F1B7A717B81AE11379_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SubsystemManager_t9A7261E4D0B53B996F04B8707D8E1C33AB65E824_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SupportedControllerType_t7034E474866C3A89A0C6AF6A80510AE6E1674FAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TrackingState_tB08915AEC2FF4350F3AC932BE19B51F52B075313_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* VolumeType_t9A7ACEA16E36C915CD23D90AC0894AF29352F7CD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitUntil_tA1CD487C5811E7C1F8C4ADA85DF5F4EFDC1D41BD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XRSDKBoundarySystem_t968246960310390A317722A0F222895980A9F05D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XRSDKDeviceManager_t9F5B097AEC5AA187C3083AE6F40B34E00E1BA583_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XRSubsystemHelpers_t8E4DEBF56BAC982E1CF1519D46753203AD7CC427_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral00435861D6D058D74B680B29B0E3A2FBAFB3FB5A;
IL2CPP_EXTERN_C String_t* _stringLiteral100EAC20AECA8B5CD321250A1FF6AA934A803107;
IL2CPP_EXTERN_C String_t* _stringLiteral17B97FD629C4550F8A404BB3C486EA91CDABA97F;
IL2CPP_EXTERN_C String_t* _stringLiteral1E3510DB4821655396E1F2E952BD12C2B3B405E7;
IL2CPP_EXTERN_C String_t* _stringLiteral25AE702FFEA928066DA09FC11B4BC7B967DE10D4;
IL2CPP_EXTERN_C String_t* _stringLiteral2CFD4278E7555C6A660A18C41A2048C3B4A704E1;
IL2CPP_EXTERN_C String_t* _stringLiteral2DF7A5156925F5C5400D60BBBA1DBB1D4708F9C8;
IL2CPP_EXTERN_C String_t* _stringLiteral2F391D50F63A6FC48ECA55EDAD80B5FEBB55F14B;
IL2CPP_EXTERN_C String_t* _stringLiteral34F5EB88C9344AD2EF11835AB706991FCF81186E;
IL2CPP_EXTERN_C String_t* _stringLiteral3BF5BB21220D8CB3070E7A40BBB1BEF947166C4D;
IL2CPP_EXTERN_C String_t* _stringLiteral459F4A34D28361530436BDBA2A8D30629FB12A1A;
IL2CPP_EXTERN_C String_t* _stringLiteral5809513B2145A306FE3DBF1BAED5C85FC20543EA;
IL2CPP_EXTERN_C String_t* _stringLiteral6ADEB1C97F1408CD72A1A98F3D1A8119B9D34A54;
IL2CPP_EXTERN_C String_t* _stringLiteral6BC765E3D4BA1A9A049E296B224B2C2013EF2191;
IL2CPP_EXTERN_C String_t* _stringLiteral6EB285741C33824C27024778C8BEE281153B4786;
IL2CPP_EXTERN_C String_t* _stringLiteral83A5D26D7F7B772C9B2B7433282DB838A0458B02;
IL2CPP_EXTERN_C String_t* _stringLiteral8A0748277A228E387025D0FBFFFA94EF2E6E219B;
IL2CPP_EXTERN_C String_t* _stringLiteral8C28816060FEEE746B87E5941ABB43D404C80A1F;
IL2CPP_EXTERN_C String_t* _stringLiteral8DAF7C48D3FFAE986E4132CE79E47540CD8B7E78;
IL2CPP_EXTERN_C String_t* _stringLiteral911918F6AB4724DF725E5A151DF0C90CE52B9A5A;
IL2CPP_EXTERN_C String_t* _stringLiteral9F2C450604BC0A4EDB95D10405537D65414A600B;
IL2CPP_EXTERN_C String_t* _stringLiteralA019DC385C2052423E84D7B14DC0877F4B4E649B;
IL2CPP_EXTERN_C String_t* _stringLiteralA1ACF166974130A969D52A31275F6D3B68533987;
IL2CPP_EXTERN_C String_t* _stringLiteralA50155418AE606D101155853814C5E9E645A134D;
IL2CPP_EXTERN_C String_t* _stringLiteralA5935C2A28B34B7440328EC778E265A054EC3184;
IL2CPP_EXTERN_C String_t* _stringLiteralAB67961043E6A691CE0B1DF2893B07BEFCAD9C60;
IL2CPP_EXTERN_C String_t* _stringLiteralAC8432B096E67A1E3A1A1AE9FE6858ABA57598C5;
IL2CPP_EXTERN_C String_t* _stringLiteralB27FB187D8E7A9DA09A09AEC832C76EB7B2F40F8;
IL2CPP_EXTERN_C String_t* _stringLiteralBBABDBD5000A085E82E4D1F28B12069391E261AA;
IL2CPP_EXTERN_C String_t* _stringLiteralBC1690A7A8FDDC8138AAF739B6C7DC4B11F17E2F;
IL2CPP_EXTERN_C String_t* _stringLiteralBD4486AC00CC32467350EF386FF7169FB88B9A64;
IL2CPP_EXTERN_C String_t* _stringLiteralC2C604A03D20BDF641FF4B72AEF3DC61C4CD432F;
IL2CPP_EXTERN_C String_t* _stringLiteralD92CAA6D4FB249FBAAD0197B1EE8796D6F7A25D4;
IL2CPP_EXTERN_C String_t* _stringLiteralD97DB8E8CA849A2783B8DA9F426364AEBA3DC48C;
IL2CPP_EXTERN_C String_t* _stringLiteralDDD73C1F397FB2056DDA796B0B75FBF02D49F4AB;
IL2CPP_EXTERN_C String_t* _stringLiteralF08DC89A26A00217BD48D7ADBC9B771D3CCBDFED;
IL2CPP_EXTERN_C String_t* _stringLiteralF60B40C4DEA44E4EF9CB41310FC155C670E29C47;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncVoidMethodBuilder_AwaitOnCompleted_TisSimpleCoroutineAwaiter_t9DF0277C21C7F3B9CE7C9563D257D9A4821B4898_TisU3CEnableIfLoaderBecomesActiveU3Ed__5_tCBEE973659246124AEC4D1E7D137AF0A2F3A792C_mE304077E47AB07774FBBC1735435EAFB2BB941B0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncVoidMethodBuilder_Start_TisU3CEnableIfLoaderBecomesActiveU3Ed__5_tCBEE973659246124AEC4D1E7D137AF0A2F3A792C_m779BDDD2B166A44EB78961ABBE4FADA6A9D1DFD2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BaseDataProvider_1_get_Service_m886AE537D966101848DD8F8D348F366C71253B3B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BaseDataProvider_1_get_Service_mC6DAD45EF35B39E07955ABECAAA8C7520ABFBE5F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CollectionsExtensions_ToReadOnlyCollection_TisKeyValuePair_2_tE710683728FDE8F91586EA8926B0AD74F6E3C4CC_m583E26C7EE9DB00B9DE33BE361E37F10E248170C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisTrackedPoseDriver_t5A2DEE7957ED76932DB7460383BF09AB1CB4CCCD_mD66D58E941D95457A6D16D8674487EC5982E6293_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_m03479DF66EDA795A65A13DCB19BA8B98C15D78DC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_m59F621E299B2B5A5E0B1C56AF791A0394BF6479E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_ContainsKey_m49678D0E11E60CE005DD021DECFC686C20B0DA18_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_ContainsKey_mA68F42395FC066EDD30D2DE12D1A82F7E49D393B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Remove_m3FE21AD019B8AD4E0049631DC383A26CD5F61953_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Remove_mEC3BD6FA8D8A74CB98F57255A1DBC49D253F2EC6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_TryGetValue_m25D4D080ED23AA0277B14AEDB82A869D0BD4126C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_TryGetValue_m2B55736D191B5E6869AF55442ED83B834A066164_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_mD430149F4FD7C65B408B1ACAADF63E50832E908D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Item_m157DEDDB79773C39BD6CB57F5753E5C44DDD473C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Item_m5CC2CE4AA8CC3E60E913BE28E235D43F6FE6E7CD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m01B983AEF89C8F17DEFD740A0E013C0CA4AC81C7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m7B899035F29D732606CA6BA2253BEBD41BECD3DC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m984D421A36C91A4FA622218385CB4346C9411DF3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_mFC63500668995DCBE5E8A5D1FFAE271B6D7FF0C4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m43BF1149292892E0A147B31279D198F4ABA5D952_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m5267F7AD322ED3F12B552EC1C62F059932803E2E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m90ADBD16F657CC00F3AF082943F46163E000E526_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mAB2B6FFD31DB8BF5C1516AEDD3901373D9CD412C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m7D19F033982951230B318A08E829850451459AAE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m7F07A73616FDDCA31B342E8D987723D2CF2DCA9A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_mC0CE60FBC4FAA79C6D5B26DD275B4DA0DF7265E6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_mEBE35085F23AD21C6E36B9EFAED53B414317CE31_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisTrackedPoseDriver_t5A2DEE7957ED76932DB7460383BF09AB1CB4CCCD_mE15DFF8FCF4FB3ACD1041664452EA77D2E6E4B63_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GenericXRSDKSpatialMeshObserver_U3CEnableIfLoaderBecomesActiveU3Eb__5_0_mC23E261179757DB43F443181EDF5AED35955CCF6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GenericXRSDKSpatialMeshObserver_U3CRequestMeshU3Eb__28_0_m3309866C6730F77465FF5914746ED571A58B3EC5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IMixedRealityDataProviderAccess_GetDataProviders_TisGenericXRSDKSpatialMeshObserver_t992F3640352E29648369A4DE1DDAC0FFB6EAC6D1_m1D4532421F46EA41419AE1CF7A78A8FD8B069020_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IMixedRealityEventSystem_HandleEvent_TisIMixedRealitySpatialAwarenessObservationHandler_1_t92770D3EC6A2A2A1BCC5AFF6614A5CA110847BA4_m743EDACDCE8A868B6CDFB9D1C7AC29B2AF204395_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InputFeatureUsage_1__ctor_m14B4290F5C2B58B777726B4079A7CC2238176A08_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InputFeatureUsage_1__ctor_m4267CE5D9D4C8FFE0CD48B585565A9DCADFB4FDA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Key_m292805210F06C8F44A3560FD0FA62B12B20CD0D5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_AddRange_m1B2001B12A2C59D1AD98A08F63DEBAAC92584658_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mC1C4AF7B5A8BED202F4A3E28D1C866A8AB3829AF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mEECA639E710075828AEBC2083BBCF28184156831_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_m90BE1F9C540971223AE0CE4E333ACFC27CDA0275_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Contains_m1760B66FE5C90D9CEB94208DE54A4A0F999D5CF3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m099EE1B978423A69DAE032836B6FC9A39F7D1EE6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m468FAA4C99E6FF3C1756D6BD18FA8C2992355333_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_mD3D13B8E78F02CDE054E2FAB1754A9B774430EF6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_mD7750792B348A44331FAA1F78D8608F585823A50_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Remove_mD82B3FDD8ADF1CD3F4F6E5E3509D346EE7D03ACA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m220F44C9FEF5758AB2481BBB10DF60A9E1CECD55_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m277DBA8B46097B1BA355F0215F73E0DA16803756_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m7E6E0C4AE37ACBC1E9BDA9E56A8A7D8ACED3FD33_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mA2DD2929DEFD0FB15C436C1FEC952D5B092CBA23_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mC249FC827BC3BE999A938F8B5BD884F8AA0CB7FA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mCC0E71080DE343C1A527526A1AC2DBEC355CEA6C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mF7ACC153F11A3260DAACDCA56B0A70A4BFA61EA4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mD4911FFC74AE9258C87DB5BE000B1CF1698A8D7D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MixedRealitySpatialAwarenessEventData_1_Initialize_m739999E8A50EE7375EC939D2513D582FCA8C6B59_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_GetValueOrDefault_m86E1210429A6EA0082CC7806DD638E8B4555F148_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_GetValueOrDefault_m8D130DB7F2A1E694736B449176F9C26DB456597B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1__ctor_m141FA88563AC0B5179132FB929EABD02C47FF703_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1__ctor_m4FAA8281CB4EFFD8B817734351FB3AC20A0CD6F5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_HasValue_m6B76D139692C43B2AF7C695FAB044B16ACFAF355_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_Value_mE2C54C6AE9FC9F05BF44CD9D7D61DC6CD56E3E28_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1_Clear_m708B63A5C1A6954B31F3038FC2554E06255C683F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1_Dequeue_m41718952B8841D7EF796AA7A35D480BB010381E0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1_Enqueue_mB26DD8D99535CBFC7BBA16CC3DF8CD84C76518F7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1__ctor_m6AFEAC5BD499D4EDF263A4A4F2B70D51191DDD11_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1_get_Count_m64717BA990F1986260A2D23ED2E8E04C1B6FA6D1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReadOnlyCollection_1_GetEnumerator_m90B897A245E57D6B59E625784579E9B49981D6E6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SubsystemManager_GetInstances_TisXRInputSubsystem_tFECE6683FCAEBF05BAD05E5D612690095D8BAD34_mEF47974C54AA515C3180A0AD3418F3E4037983EE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SubsystemManager_GetSubsystemDescriptors_TisXRMeshSubsystemDescriptor_tD9814661B8661C69D5A0DBB76C9AF61778B9CEC1_m8261BB26A142C1942041262282FB3885674C0348_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityObjectExtensions_IsNull_TisIMixedRealityControllerVisualizer_t7B6B8F308ED8917976841E02F1525D6B7E478F7B_m1EF432E61E37A9A6C2AE45782C131AD713BE5F4A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XRLoader_GetLoadedSubsystem_TisXRMeshSubsystem_tDDC31EC10D4F0517542F9EB296428A0F7EC2C3B2_m081FBFB83316621ED3D69C9D27376B59CB646519_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* GenericXRSDKController_tB5136D037E3BD7D743A519016EA2710F7ED980DE_0_0_0_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct IMixedRealityPointerU5BU5D_t122E67DFE2F5B082397D95C08F6AA94DE36F86A4;
struct InputDeviceU5BU5D_t1361FC6DDFE12D211F933B024E51B7E5CF073F63;
struct MixedRealityInteractionMappingU5BU5D_t689ED6694F3B293DEDEA6D5371268D36DC67AACE;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct UInt32EnumU5BU5D_t98241E73F566A0C7C43B1F407869881BF951BE1A;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_t37FF63B385B79878D9A3082E773A5A288C543032 
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

// System.Collections.Generic.Dictionary`2<System.Int32,Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessMeshObject>
struct Dictionary_2_t0E31064CA2CAEBF8E2C6B82A38A6D432A0F91413  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_tCDA876808A0DE87F626276F2AE0B52E1836167BF* ____entries_1;
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
	KeyCollection_tD7EE5044ABBC844B6026FBADB76D38F3A619601B* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t96DC10F52F92545928756F40D9A1ED6B737238B0* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
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

// System.Collections.Generic.List`1<UnityEngine.XR.InputDeviceCharacteristics>
struct List_1_tEA57E67D76DE7CBA7F472F399385BD853B825EB7  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	InputDeviceCharacteristicsU5BU5D_t68DAA13EA6FC9C8D7BC5FF27CE4CEE8C3B9B6D2B* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tEA57E67D76DE7CBA7F472F399385BD853B825EB7_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	InputDeviceCharacteristicsU5BU5D_t68DAA13EA6FC9C8D7BC5FF27CE4CEE8C3B9B6D2B* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.Int32>
struct List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<UnityEngine.XR.MeshInfo>
struct List_1_tEE09D0BD215A518344AF2985829C519B609B7B17  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	MeshInfoU5BU5D_t66EC9A8E4264CBD53E136BF96628DEC22D660030* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tEE09D0BD215A518344AF2985829C519B609B7B17_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	MeshInfoU5BU5D_t66EC9A8E4264CBD53E136BF96628DEC22D660030* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.UInt32Enum>
struct List_1_tE3A859FDD017A2D25E8161269BA1167C22EC7EB9  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	UInt32EnumU5BU5D_t98241E73F566A0C7C43B1F407869881BF951BE1A* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tE3A859FDD017A2D25E8161269BA1167C22EC7EB9_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	UInt32EnumU5BU5D_t98241E73F566A0C7C43B1F407869881BF951BE1A* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<UnityEngine.Vector3>
struct List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<UnityEngine.XR.XRInputSubsystem>
struct List_1_t90832B88D7207769654164CC28440CF594CC397D  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	XRInputSubsystemU5BU5D_t224A541B4C0D2E3253E4D68ADF4F824AC587B11C* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t90832B88D7207769654164CC28440CF594CC397D_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	XRInputSubsystemU5BU5D_t224A541B4C0D2E3253E4D68ADF4F824AC587B11C* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<UnityEngine.XR.XRMeshSubsystemDescriptor>
struct List_1_tA9571B7847EA1D73E7B431473A8F7D19B9786E22  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	XRMeshSubsystemDescriptorU5BU5D_t3B992422B03C712E6A939E14D9CF3F3799D62E72* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tA9571B7847EA1D73E7B431473A8F7D19B9786E22_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	XRMeshSubsystemDescriptorU5BU5D_t3B992422B03C712E6A939E14D9CF3F3799D62E72* ___s_emptyArray_5;
};

// System.Collections.Generic.Queue`1<UnityEngine.XR.MeshId>
struct Queue_1_tCD897AEF7F66F282E6B86F78DCC03D0B51FBDF37  : public RuntimeObject
{
	// T[] System.Collections.Generic.Queue`1::_array
	MeshIdU5BU5D_t3E39DFB92817D0E90346DA8E65BFB634DC640E01* ____array_0;
	// System.Int32 System.Collections.Generic.Queue`1::_head
	int32_t ____head_1;
	// System.Int32 System.Collections.Generic.Queue`1::_tail
	int32_t ____tail_2;
	// System.Int32 System.Collections.Generic.Queue`1::_size
	int32_t ____size_3;
	// System.Int32 System.Collections.Generic.Queue`1::_version
	int32_t ____version_4;
	// System.Object System.Collections.Generic.Queue`1::_syncRoot
	RuntimeObject* ____syncRoot_5;
};

// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<UnityEngine.XR.InputDevice,Microsoft.MixedReality.Toolkit.XRSDK.Input.GenericXRSDKController>>
struct ReadOnlyCollection_1_tEB4BE5E673E69CD3F9C8D17F224E7C888E5BEF5B  : public RuntimeObject
{
	// System.Collections.Generic.IList`1<T> System.Collections.ObjectModel.ReadOnlyCollection`1::list
	RuntimeObject* ___list_0;
	// System.Object System.Collections.ObjectModel.ReadOnlyCollection`1::_syncRoot
	RuntimeObject* ____syncRoot_1;
};

// UnityEngine.EventSystems.AbstractEventData
struct AbstractEventData_tAE1A127ED657117548181D29FFE4B1B14D8E67F7  : public RuntimeObject
{
	// System.Boolean UnityEngine.EventSystems.AbstractEventData::m_Used
	bool ___m_Used_0;
};
struct Il2CppArrayBounds;

// Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialAwarenessObject
struct BaseSpatialAwarenessObject_tD8B917300EF3EB525D1666D65D8A22226F935C55  : public RuntimeObject
{
	// System.Int32 Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialAwarenessObject::<Id>k__BackingField
	int32_t ___U3CIdU3Ek__BackingField_0;
	// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialAwarenessObject::<GameObject>k__BackingField
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___U3CGameObjectU3Ek__BackingField_1;
	// UnityEngine.MeshRenderer Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialAwarenessObject::<Renderer>k__BackingField
	MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* ___U3CRendererU3Ek__BackingField_2;
	// UnityEngine.MeshFilter Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialAwarenessObject::<Filter>k__BackingField
	MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* ___U3CFilterU3Ek__BackingField_3;
};

// UnityEngine.CustomYieldInstruction
struct CustomYieldInstruction_t6B81A50D5D210C1ACAAE247FB53B65CDFFEB7617  : public RuntimeObject
{
};

// Microsoft.MixedReality.Toolkit.XRSDK.FlagsExtensions
struct FlagsExtensions_tCC536C9D56D816DD0F57FEE8F60756200358A294  : public RuntimeObject
{
};

// Microsoft.MixedReality.Toolkit.XRSDK.LoaderHelpers
struct LoaderHelpers_t6E3B9EC58A66C59614C61C43224C6E1BF94802EF  : public RuntimeObject
{
};

// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
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

// Microsoft.MixedReality.Toolkit.XRSDK.XRSDKSubsystemHelpers
struct XRSDKSubsystemHelpers_t57FD109CBA085C8DDC50A5549F54E9D3F264741C  : public RuntimeObject
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

// System.Collections.Generic.List`1/Enumerator<UnityEngine.XR.InputDeviceCharacteristics>
struct Enumerator_tCEF56BD591D4B69AB5839C3DA4792E9586319BB4 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_tEA57E67D76DE7CBA7F472F399385BD853B825EB7* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	uint32_t ____current_3;
};

// System.Collections.Generic.List`1/Enumerator<System.Object>
struct Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	RuntimeObject* ____current_3;
};

// System.Collections.Generic.List`1/Enumerator<System.UInt32Enum>
struct Enumerator_tFC54B69D62BA1CA29D8F4AB812D98BDDBC2910F5 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_tE3A859FDD017A2D25E8161269BA1167C22EC7EB9* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	uint32_t ____current_3;
};

// System.Collections.Generic.List`1/Enumerator<UnityEngine.XR.XRInputSubsystem>
struct Enumerator_t6A30CB77C3B8BF2729352F3BDF7E6FE8BE18B5D5 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_t90832B88D7207769654164CC28440CF594CC397D* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	XRInputSubsystem_tFECE6683FCAEBF05BAD05E5D612690095D8BAD34* ____current_3;
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

// System.Nullable`1<System.Single>
struct Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	float ___value_1;
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

// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F  : public AbstractEventData_tAE1A127ED657117548181D29FFE4B1B14D8E67F7
{
	// UnityEngine.EventSystems.EventSystem UnityEngine.EventSystems.BaseEventData::m_EventSystem
	EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* ___m_EventSystem_1;
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

// UnityEngine.XR.HapticCapabilities
struct HapticCapabilities_t4F7DFEDA7457938D39B877F6A86901F7A6788211 
{
	// System.UInt32 UnityEngine.XR.HapticCapabilities::m_NumChannels
	uint32_t ___m_NumChannels_0;
	// System.Boolean UnityEngine.XR.HapticCapabilities::m_SupportsImpulse
	bool ___m_SupportsImpulse_1;
	// System.Boolean UnityEngine.XR.HapticCapabilities::m_SupportsBuffer
	bool ___m_SupportsBuffer_2;
	// System.UInt32 UnityEngine.XR.HapticCapabilities::m_BufferFrequencyHz
	uint32_t ___m_BufferFrequencyHz_3;
	// System.UInt32 UnityEngine.XR.HapticCapabilities::m_BufferMaxSize
	uint32_t ___m_BufferMaxSize_4;
	// System.UInt32 UnityEngine.XR.HapticCapabilities::m_BufferOptimalSize
	uint32_t ___m_BufferOptimalSize_5;
};
// Native definition for P/Invoke marshalling of UnityEngine.XR.HapticCapabilities
struct HapticCapabilities_t4F7DFEDA7457938D39B877F6A86901F7A6788211_marshaled_pinvoke
{
	uint32_t ___m_NumChannels_0;
	int32_t ___m_SupportsImpulse_1;
	int32_t ___m_SupportsBuffer_2;
	uint32_t ___m_BufferFrequencyHz_3;
	uint32_t ___m_BufferMaxSize_4;
	uint32_t ___m_BufferOptimalSize_5;
};
// Native definition for COM marshalling of UnityEngine.XR.HapticCapabilities
struct HapticCapabilities_t4F7DFEDA7457938D39B877F6A86901F7A6788211_marshaled_com
{
	uint32_t ___m_NumChannels_0;
	int32_t ___m_SupportsImpulse_1;
	int32_t ___m_SupportsBuffer_2;
	uint32_t ___m_BufferFrequencyHz_3;
	uint32_t ___m_BufferMaxSize_4;
	uint32_t ___m_BufferOptimalSize_5;
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

// UnityEngine.XR.MeshId
struct MeshId_t2CF122567F06D0AA4F80DDA5CB51E8CD3B7EA2AC 
{
	// System.UInt64 UnityEngine.XR.MeshId::m_SubId1
	uint64_t ___m_SubId1_1;
	// System.UInt64 UnityEngine.XR.MeshId::m_SubId2
	uint64_t ___m_SubId2_2;
};

struct MeshId_t2CF122567F06D0AA4F80DDA5CB51E8CD3B7EA2AC_StaticFields
{
	// UnityEngine.XR.MeshId UnityEngine.XR.MeshId::s_InvalidId
	MeshId_t2CF122567F06D0AA4F80DDA5CB51E8CD3B7EA2AC ___s_InvalidId_0;
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

// Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessMeshObject
struct SpatialAwarenessMeshObject_t5577B6C05F0A1138C582A8F1B7A717B81AE11379  : public BaseSpatialAwarenessObject_tD8B917300EF3EB525D1666D65D8A22226F935C55
{
	// UnityEngine.MeshCollider Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessMeshObject::<Collider>k__BackingField
	MeshCollider_tB525E4DDE383252364ED0BDD32CF2B53914EE455* ___U3CColliderU3Ek__BackingField_5;
};

struct SpatialAwarenessMeshObject_t5577B6C05F0A1138C582A8F1B7A717B81AE11379_StaticFields
{
	// System.Type[] Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessMeshObject::RequiredMeshComponents
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___RequiredMeshComponents_4;
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

// System.Collections.Generic.List`1/Enumerator<UnityEngine.XR.InputDevice>
struct Enumerator_t2A0DD7C3F41DE0D8FD672B874BDDB066261ECB01 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_tB66D13E0427CA48C600AEA4DBA5B173C3734C6CE* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD ____current_3;
};

// System.Collections.Generic.KeyValuePair`2<UnityEngine.XR.InputDevice,Microsoft.MixedReality.Toolkit.XRSDK.Input.GenericXRSDKController>
struct KeyValuePair_2_tE710683728FDE8F91586EA8926B0AD74F6E3C4CC 
{
	// TKey System.Collections.Generic.KeyValuePair`2::key
	InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	GenericXRSDKController_tB5136D037E3BD7D743A519016EA2710F7ED980DE* ___value_1;
};

// System.Collections.Generic.KeyValuePair`2<UnityEngine.XR.InputDevice,System.Object>
struct KeyValuePair_2_t55A4D6848C39E45165F686753BD37E19B24D994E 
{
	// TKey System.Collections.Generic.KeyValuePair`2::key
	InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject* ___value_1;
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

// Microsoft.MixedReality.Toolkit.GenericBaseEventData
struct GenericBaseEventData_tA3C45766BDAC0A70B553C855E65F215F2E881687  : public BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F
{
	// Microsoft.MixedReality.Toolkit.IMixedRealityEventSource Microsoft.MixedReality.Toolkit.GenericBaseEventData::<EventSource>k__BackingField
	RuntimeObject* ___U3CEventSourceU3Ek__BackingField_2;
	// System.DateTime Microsoft.MixedReality.Toolkit.GenericBaseEventData::<EventTime>k__BackingField
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___U3CEventTimeU3Ek__BackingField_3;
	// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.GenericBaseEventData::<selectedObject>k__BackingField
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___U3CselectedObjectU3Ek__BackingField_4;
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

// UnityEngine.XR.MeshGenerationResult
struct MeshGenerationResult_tD5A6D639B2CF1A3F855AFB41861DEC48DC0D3A9C 
{
	// UnityEngine.XR.MeshId UnityEngine.XR.MeshGenerationResult::<MeshId>k__BackingField
	MeshId_t2CF122567F06D0AA4F80DDA5CB51E8CD3B7EA2AC ___U3CMeshIdU3Ek__BackingField_0;
	// UnityEngine.Mesh UnityEngine.XR.MeshGenerationResult::<Mesh>k__BackingField
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___U3CMeshU3Ek__BackingField_1;
	// UnityEngine.MeshCollider UnityEngine.XR.MeshGenerationResult::<MeshCollider>k__BackingField
	MeshCollider_tB525E4DDE383252364ED0BDD32CF2B53914EE455* ___U3CMeshColliderU3Ek__BackingField_2;
	// UnityEngine.XR.MeshGenerationStatus UnityEngine.XR.MeshGenerationResult::<Status>k__BackingField
	int32_t ___U3CStatusU3Ek__BackingField_3;
	// UnityEngine.XR.MeshVertexAttributes UnityEngine.XR.MeshGenerationResult::<Attributes>k__BackingField
	int32_t ___U3CAttributesU3Ek__BackingField_4;
	// System.UInt64 UnityEngine.XR.MeshGenerationResult::<Timestamp>k__BackingField
	uint64_t ___U3CTimestampU3Ek__BackingField_5;
	// UnityEngine.Vector3 UnityEngine.XR.MeshGenerationResult::<Position>k__BackingField
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CPositionU3Ek__BackingField_6;
	// UnityEngine.Quaternion UnityEngine.XR.MeshGenerationResult::<Rotation>k__BackingField
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___U3CRotationU3Ek__BackingField_7;
	// UnityEngine.Vector3 UnityEngine.XR.MeshGenerationResult::<Scale>k__BackingField
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CScaleU3Ek__BackingField_8;
};
// Native definition for P/Invoke marshalling of UnityEngine.XR.MeshGenerationResult
struct MeshGenerationResult_tD5A6D639B2CF1A3F855AFB41861DEC48DC0D3A9C_marshaled_pinvoke
{
	MeshId_t2CF122567F06D0AA4F80DDA5CB51E8CD3B7EA2AC ___U3CMeshIdU3Ek__BackingField_0;
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___U3CMeshU3Ek__BackingField_1;
	MeshCollider_tB525E4DDE383252364ED0BDD32CF2B53914EE455* ___U3CMeshColliderU3Ek__BackingField_2;
	int32_t ___U3CStatusU3Ek__BackingField_3;
	int32_t ___U3CAttributesU3Ek__BackingField_4;
	uint64_t ___U3CTimestampU3Ek__BackingField_5;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CPositionU3Ek__BackingField_6;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___U3CRotationU3Ek__BackingField_7;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CScaleU3Ek__BackingField_8;
};
// Native definition for COM marshalling of UnityEngine.XR.MeshGenerationResult
struct MeshGenerationResult_tD5A6D639B2CF1A3F855AFB41861DEC48DC0D3A9C_marshaled_com
{
	MeshId_t2CF122567F06D0AA4F80DDA5CB51E8CD3B7EA2AC ___U3CMeshIdU3Ek__BackingField_0;
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___U3CMeshU3Ek__BackingField_1;
	MeshCollider_tB525E4DDE383252364ED0BDD32CF2B53914EE455* ___U3CMeshColliderU3Ek__BackingField_2;
	int32_t ___U3CStatusU3Ek__BackingField_3;
	int32_t ___U3CAttributesU3Ek__BackingField_4;
	uint64_t ___U3CTimestampU3Ek__BackingField_5;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CPositionU3Ek__BackingField_6;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___U3CRotationU3Ek__BackingField_7;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CScaleU3Ek__BackingField_8;
};

// UnityEngine.XR.MeshInfo
struct MeshInfo_t0BB7A8C2C586FD5EAD40E9E4E1749150915FDFFA 
{
	// UnityEngine.XR.MeshId UnityEngine.XR.MeshInfo::<MeshId>k__BackingField
	MeshId_t2CF122567F06D0AA4F80DDA5CB51E8CD3B7EA2AC ___U3CMeshIdU3Ek__BackingField_0;
	// UnityEngine.XR.MeshChangeState UnityEngine.XR.MeshInfo::<ChangeState>k__BackingField
	int32_t ___U3CChangeStateU3Ek__BackingField_1;
	// System.Int32 UnityEngine.XR.MeshInfo::<PriorityHint>k__BackingField
	int32_t ___U3CPriorityHintU3Ek__BackingField_2;
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

// UnityEngine.Pose
struct Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 
{
	// UnityEngine.Vector3 UnityEngine.Pose::position
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position_0;
	// UnityEngine.Quaternion UnityEngine.Pose::rotation
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation_1;
};

struct Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971_StaticFields
{
	// UnityEngine.Pose UnityEngine.Pose::k_Identity
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___k_Identity_2;
};

// Unity.Profiling.ProfilerMarker
struct ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD 
{
	// System.IntPtr Unity.Profiling.ProfilerMarker::m_Ptr
	intptr_t ___m_Ptr_0;
};

// System.RuntimeTypeHandle
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;
};

// System.UInt32Enum
struct UInt32Enum_t7B4F5C6C14D2C4B2A5927C59620BE3868714DACF 
{
	// System.UInt32 System.UInt32Enum::value__
	uint32_t ___value___2;
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

// System.Collections.Generic.List`1/Enumerator<UnityEngine.XR.MeshInfo>
struct Enumerator_tEC6D4B278440969CB479B2E8E2B65B2681CA6CE3 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_tEE09D0BD215A518344AF2985829C519B609B7B17* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	MeshInfo_t0BB7A8C2C586FD5EAD40E9E4E1749150915FDFFA ____current_3;
};

// UnityEngine.IntegratedSubsystem`1<UnityEngine.XR.XRDisplaySubsystemDescriptor>
struct IntegratedSubsystem_1_t8312865F01EEA1EDE4B24A973E47ADD526616848  : public IntegratedSubsystem_t990160A89854D87C0836DC589B720231C02D4CE3
{
};

// UnityEngine.IntegratedSubsystem`1<UnityEngine.XR.XRInputSubsystemDescriptor>
struct IntegratedSubsystem_1_tF93BC76362E85BDD215312162457BE510FC76D3B  : public IntegratedSubsystem_t990160A89854D87C0836DC589B720231C02D4CE3
{
};

// UnityEngine.IntegratedSubsystem`1<UnityEngine.XR.XRMeshSubsystemDescriptor>
struct IntegratedSubsystem_1_t3AB3A9BAB10A4D1420E63EEA50D40FEE65F41C03  : public IntegratedSubsystem_t990160A89854D87C0836DC589B720231C02D4CE3
{
};

// Microsoft.MixedReality.Toolkit.BaseEventSystem
struct BaseEventSystem_tB9BD9711D545EEEF00D3162ED9A13EBDE4B1DEA1  : public BaseService_tB7EC5C0F60DC5EE2DA122A608226D3887B6421D0
{
	// System.Int32 Microsoft.MixedReality.Toolkit.BaseEventSystem::eventExecutionDepth
	int32_t ___eventExecutionDepth_13;
	// System.Type Microsoft.MixedReality.Toolkit.BaseEventSystem::eventSystemHandlerType
	Type_t* ___eventSystemHandlerType_14;
	// System.Collections.Generic.List`1<System.Tuple`3<Microsoft.MixedReality.Toolkit.BaseEventSystem/Action,System.Type,UnityEngine.EventSystems.IEventSystemHandler>> Microsoft.MixedReality.Toolkit.BaseEventSystem::postponedActions
	List_1_t51E625EDA46926814063BAC38407B110D9C48805* ___postponedActions_15;
	// System.Collections.Generic.List`1<System.Tuple`2<Microsoft.MixedReality.Toolkit.BaseEventSystem/Action,UnityEngine.GameObject>> Microsoft.MixedReality.Toolkit.BaseEventSystem::postponedObjectActions
	List_1_tADF7F1C5FADE0AE6D00BC928B20C4B63DDC8A3AD* ___postponedObjectActions_16;
	// System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.BaseEventSystem/EventHandlerEntry>> Microsoft.MixedReality.Toolkit.BaseEventSystem::<EventHandlersByType>k__BackingField
	Dictionary_2_t18E076B12814DFAAD91B5BC1B163AAFAC0CADEFD* ___U3CEventHandlersByTypeU3Ek__BackingField_17;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> Microsoft.MixedReality.Toolkit.BaseEventSystem::<EventListeners>k__BackingField
	List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* ___U3CEventListenersU3Ek__BackingField_18;
};

struct BaseEventSystem_tB9BD9711D545EEEF00D3162ED9A13EBDE4B1DEA1_StaticFields
{
	// System.Boolean Microsoft.MixedReality.Toolkit.BaseEventSystem::enableDanglingHandlerDiagnostics
	bool ___enableDanglingHandlerDiagnostics_12;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.BaseEventSystem::TraverseEventSystemHandlerHierarchyPerfMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___TraverseEventSystemHandlerHierarchyPerfMarker_19;
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

// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
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

// Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessEventData
struct MixedRealitySpatialAwarenessEventData_t665140146CE5C138E399BC73BA5802220AE76341  : public GenericBaseEventData_tA3C45766BDAC0A70B553C855E65F215F2E881687
{
	// System.Int32 Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessEventData::<Id>k__BackingField
	int32_t ___U3CIdU3Ek__BackingField_5;
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

// UnityEngine.PhysicMaterial
struct PhysicMaterial_t4ECED34E04BB2148333467208361A5FBFDCD7131  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
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

// Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver/<EnableIfLoaderBecomesActive>d__5
struct U3CEnableIfLoaderBecomesActiveU3Ed__5_tCBEE973659246124AEC4D1E7D137AF0A2F3A792C 
{
	// System.Int32 Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver/<EnableIfLoaderBecomesActive>d__5::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncVoidMethodBuilder Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver/<EnableIfLoaderBecomesActive>d__5::<>t__builder
	AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D ___U3CU3Et__builder_1;
	// Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver/<EnableIfLoaderBecomesActive>d__5::<>4__this
	GenericXRSDKSpatialMeshObserver_t992F3640352E29648369A4DE1DDAC0FFB6EAC6D1* ___U3CU3E4__this_2;
	// System.Object Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver/<EnableIfLoaderBecomesActive>d__5::<>u__1
	RuntimeObject* ___U3CU3Eu__1_3;
};

// System.Action`1<UnityEngine.XR.MeshGenerationResult>
struct Action_1_tC58438B06CEC83E8978FB47AC67764F80F55DEA8  : public MulticastDelegate_t
{
};

// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.SpatialAwareness.IMixedRealitySpatialAwarenessObservationHandler`1<Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessMeshObject>>
struct EventFunction_1_tEBC0FE0CCBC0E2CED086EF11F4973BE9B1419E00  : public MulticastDelegate_t
{
};

// System.Func`1<System.Boolean>
struct Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457  : public MulticastDelegate_t
{
};

// Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessEventData`1<Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessMeshObject>
struct MixedRealitySpatialAwarenessEventData_1_tE46EB2E96DFDDF77196F0A24715743FD22640021  : public MixedRealitySpatialAwarenessEventData_t665140146CE5C138E399BC73BA5802220AE76341
{
	// T Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessEventData`1::<SpatialObject>k__BackingField
	SpatialAwarenessMeshObject_t5577B6C05F0A1138C582A8F1B7A717B81AE11379* ___U3CSpatialObjectU3Ek__BackingField_6;
};

// Microsoft.MixedReality.Toolkit.CameraSystem.BaseCameraSettingsProvider
struct BaseCameraSettingsProvider_tD700E49A18844AC7B08C84247430319CFEC93F46  : public BaseDataProvider_1_t5511AC264C914065B4C84ECA02C3FC05D1C915B6
{
	// System.Boolean Microsoft.MixedReality.Toolkit.CameraSystem.BaseCameraSettingsProvider::<IsOpaque>k__BackingField
	bool ___U3CIsOpaqueU3Ek__BackingField_14;
};

// Microsoft.MixedReality.Toolkit.BaseCoreSystem
struct BaseCoreSystem_t9D02F9BBC05DAD6F987F647B666B37A062ACFAA6  : public BaseEventSystem_tB9BD9711D545EEEF00D3162ED9A13EBDE4B1DEA1
{
	// Microsoft.MixedReality.Toolkit.IMixedRealityServiceRegistrar Microsoft.MixedReality.Toolkit.BaseCoreSystem::<Registrar>k__BackingField
	RuntimeObject* ___U3CRegistrarU3Ek__BackingField_20;
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

// UnityEngine.Collider
struct Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.MeshFilter
struct MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Renderer
struct Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.XR.XRDisplaySubsystem
struct XRDisplaySubsystem_t4B00B0BF1894A039ACFA8DDC2C2EB9301118C1F1  : public IntegratedSubsystem_1_t8312865F01EEA1EDE4B24A973E47ADD526616848
{
	// System.Action`1<System.Boolean> UnityEngine.XR.XRDisplaySubsystem::displayFocusChanged
	Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* ___displayFocusChanged_2;
};

// UnityEngine.XR.Management.XRGeneralSettings
struct XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
	// UnityEngine.XR.Management.XRManagerSettings UnityEngine.XR.Management.XRGeneralSettings::m_LoaderManagerInstance
	XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52* ___m_LoaderManagerInstance_6;
	// System.Boolean UnityEngine.XR.Management.XRGeneralSettings::m_InitManagerOnStart
	bool ___m_InitManagerOnStart_7;
	// UnityEngine.XR.Management.XRManagerSettings UnityEngine.XR.Management.XRGeneralSettings::m_XRManager
	XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52* ___m_XRManager_8;
	// System.Boolean UnityEngine.XR.Management.XRGeneralSettings::m_ProviderIntialized
	bool ___m_ProviderIntialized_9;
	// System.Boolean UnityEngine.XR.Management.XRGeneralSettings::m_ProviderStarted
	bool ___m_ProviderStarted_10;
};

struct XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE_StaticFields
{
	// System.String UnityEngine.XR.Management.XRGeneralSettings::k_SettingsKey
	String_t* ___k_SettingsKey_4;
	// UnityEngine.XR.Management.XRGeneralSettings UnityEngine.XR.Management.XRGeneralSettings::s_RuntimeSettingsInstance
	XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE* ___s_RuntimeSettingsInstance_5;
};

// UnityEngine.XR.XRInputSubsystem
struct XRInputSubsystem_tFECE6683FCAEBF05BAD05E5D612690095D8BAD34  : public IntegratedSubsystem_1_tF93BC76362E85BDD215312162457BE510FC76D3B
{
	// System.Action`1<UnityEngine.XR.XRInputSubsystem> UnityEngine.XR.XRInputSubsystem::trackingOriginUpdated
	Action_1_tC867D66471C553CFFF8707FF2C59FB7AAB03086A* ___trackingOriginUpdated_2;
	// System.Action`1<UnityEngine.XR.XRInputSubsystem> UnityEngine.XR.XRInputSubsystem::boundaryChanged
	Action_1_tC867D66471C553CFFF8707FF2C59FB7AAB03086A* ___boundaryChanged_3;
	// System.Collections.Generic.List`1<System.UInt64> UnityEngine.XR.XRInputSubsystem::m_DeviceIdsCache
	List_1_tB88E7361EE76DFB3EBB7FCD60CC59ACC3E48C284* ___m_DeviceIdsCache_4;
};

// UnityEngine.XR.Management.XRLoader
struct XRLoader_t80B1B1934C40561C5352ABC95D567DC2A7C9C976  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
};

// UnityEngine.XR.Management.XRManagerSettings
struct XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
	// System.Boolean UnityEngine.XR.Management.XRManagerSettings::m_InitializationComplete
	bool ___m_InitializationComplete_4;
	// System.Boolean UnityEngine.XR.Management.XRManagerSettings::m_RequiresSettingsUpdate
	bool ___m_RequiresSettingsUpdate_5;
	// System.Boolean UnityEngine.XR.Management.XRManagerSettings::m_AutomaticLoading
	bool ___m_AutomaticLoading_6;
	// System.Boolean UnityEngine.XR.Management.XRManagerSettings::m_AutomaticRunning
	bool ___m_AutomaticRunning_7;
	// System.Collections.Generic.List`1<UnityEngine.XR.Management.XRLoader> UnityEngine.XR.Management.XRManagerSettings::m_Loaders
	List_1_tA1A04BD6B1EE83992AE369D5DB31A028E9B57822* ___m_Loaders_8;
	// System.Collections.Generic.HashSet`1<UnityEngine.XR.Management.XRLoader> UnityEngine.XR.Management.XRManagerSettings::m_RegisteredLoaders
	HashSet_1_t174593AE6599738C19A33586587D63534CED9F0F* ___m_RegisteredLoaders_9;
	// UnityEngine.XR.Management.XRLoader UnityEngine.XR.Management.XRManagerSettings::<activeLoader>k__BackingField
	XRLoader_t80B1B1934C40561C5352ABC95D567DC2A7C9C976* ___U3CactiveLoaderU3Ek__BackingField_10;
};

// UnityEngine.XR.XRMeshSubsystem
struct XRMeshSubsystem_tDDC31EC10D4F0517542F9EB296428A0F7EC2C3B2  : public IntegratedSubsystem_1_t3AB3A9BAB10A4D1420E63EEA50D40FEE65F41C03
{
};

// Microsoft.MixedReality.Toolkit.Boundary.BaseBoundarySystem
struct BaseBoundarySystem_t17725CB18637398B438C3C2B6E27DA80B4B27413  : public BaseCoreSystem_t9D02F9BBC05DAD6F987F647B666B37A062ACFAA6
{
	// System.Boolean Microsoft.MixedReality.Toolkit.Boundary.BaseBoundarySystem::<IsXRDevicePresent>k__BackingField
	bool ___U3CIsXRDevicePresentU3Ek__BackingField_21;
	// Microsoft.MixedReality.Toolkit.Boundary.MixedRealityBoundaryVisualizationProfile Microsoft.MixedReality.Toolkit.Boundary.BaseBoundarySystem::<BoundaryProfile>k__BackingField
	MixedRealityBoundaryVisualizationProfile_t8696935F2FD43867A7389688367D5F2C41862E81* ___U3CBoundaryProfileU3Ek__BackingField_22;
	// Microsoft.MixedReality.Toolkit.Boundary.BoundaryEventData Microsoft.MixedReality.Toolkit.Boundary.BaseBoundarySystem::boundaryEventData
	BoundaryEventData_tD8FC73229A6B5612FFAEDAFF207FBEADA7934C41* ___boundaryEventData_23;
	// System.String Microsoft.MixedReality.Toolkit.Boundary.BaseBoundarySystem::<Name>k__BackingField
	String_t* ___U3CNameU3Ek__BackingField_24;
	// System.UInt32 Microsoft.MixedReality.Toolkit.Boundary.BaseBoundarySystem::<SourceId>k__BackingField
	uint32_t ___U3CSourceIdU3Ek__BackingField_26;
	// System.String Microsoft.MixedReality.Toolkit.Boundary.BaseBoundarySystem::<SourceName>k__BackingField
	String_t* ___U3CSourceNameU3Ek__BackingField_27;
	// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.Boundary.BaseBoundarySystem::boundaryVisualizationParent
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___boundaryVisualizationParent_30;
	// System.Int32 Microsoft.MixedReality.Toolkit.Boundary.BaseBoundarySystem::ignoreRaycastLayerValue
	int32_t ___ignoreRaycastLayerValue_31;
	// Microsoft.MixedReality.Toolkit.Boundary.MixedRealityBoundaryVisualizationProfile Microsoft.MixedReality.Toolkit.Boundary.BaseBoundarySystem::boundaryVisualizationProfile
	MixedRealityBoundaryVisualizationProfile_t8696935F2FD43867A7389688367D5F2C41862E81* ___boundaryVisualizationProfile_32;
	// Microsoft.MixedReality.Toolkit.Utilities.ExperienceScale Microsoft.MixedReality.Toolkit.Boundary.BaseBoundarySystem::<Scale>k__BackingField
	int32_t ___U3CScaleU3Ek__BackingField_33;
	// System.Single Microsoft.MixedReality.Toolkit.Boundary.BaseBoundarySystem::<BoundaryHeight>k__BackingField
	float ___U3CBoundaryHeightU3Ek__BackingField_34;
	// System.Boolean Microsoft.MixedReality.Toolkit.Boundary.BaseBoundarySystem::showFloor
	bool ___showFloor_35;
	// System.Boolean Microsoft.MixedReality.Toolkit.Boundary.BaseBoundarySystem::showPlayArea
	bool ___showPlayArea_36;
	// System.Int32 Microsoft.MixedReality.Toolkit.Boundary.BaseBoundarySystem::floorPhysicsLayer
	int32_t ___floorPhysicsLayer_37;
	// System.Boolean Microsoft.MixedReality.Toolkit.Boundary.BaseBoundarySystem::showTrackedArea
	bool ___showTrackedArea_38;
	// System.Int32 Microsoft.MixedReality.Toolkit.Boundary.BaseBoundarySystem::playAreaPhysicsLayer
	int32_t ___playAreaPhysicsLayer_39;
	// System.Boolean Microsoft.MixedReality.Toolkit.Boundary.BaseBoundarySystem::showBoundaryWalls
	bool ___showBoundaryWalls_40;
	// System.Int32 Microsoft.MixedReality.Toolkit.Boundary.BaseBoundarySystem::trackedAreaPhysicsLayer
	int32_t ___trackedAreaPhysicsLayer_41;
	// System.Boolean Microsoft.MixedReality.Toolkit.Boundary.BaseBoundarySystem::showCeiling
	bool ___showCeiling_42;
	// System.Int32 Microsoft.MixedReality.Toolkit.Boundary.BaseBoundarySystem::boundaryWallsPhysicsLayer
	int32_t ___boundaryWallsPhysicsLayer_43;
	// System.Int32 Microsoft.MixedReality.Toolkit.Boundary.BaseBoundarySystem::ceilingPhysicsLayer
	int32_t ___ceilingPhysicsLayer_44;
	// Microsoft.MixedReality.Toolkit.Boundary.Edge[] Microsoft.MixedReality.Toolkit.Boundary.BaseBoundarySystem::<Bounds>k__BackingField
	EdgeU5BU5D_t2FC69F7FE9B8B7E947E944523E1F7466DD4EA8EA* ___U3CBoundsU3Ek__BackingField_45;
	// System.Nullable`1<System.Single> Microsoft.MixedReality.Toolkit.Boundary.BaseBoundarySystem::<FloorHeight>k__BackingField
	Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 ___U3CFloorHeightU3Ek__BackingField_46;
	// Microsoft.MixedReality.Toolkit.Boundary.InscribedRectangle Microsoft.MixedReality.Toolkit.Boundary.BaseBoundarySystem::RectangularBounds
	InscribedRectangle_t14EC555E1339374E9BE9805CDFF46F3D5CE448F1* ___RectangularBounds_47;
	// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.Boundary.BaseBoundarySystem::currentFloorObject
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___currentFloorObject_48;
	// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.Boundary.BaseBoundarySystem::currentPlayAreaObject
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___currentPlayAreaObject_49;
	// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.Boundary.BaseBoundarySystem::currentTrackedAreaObject
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___currentTrackedAreaObject_50;
	// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.Boundary.BaseBoundarySystem::currentBoundaryWallObject
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___currentBoundaryWallObject_51;
	// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.Boundary.BaseBoundarySystem::currentCeilingObject
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___currentCeilingObject_52;
};

struct BaseBoundarySystem_t17725CB18637398B438C3C2B6E27DA80B4B27413_StaticFields
{
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Boundary.IMixedRealityBoundaryHandler> Microsoft.MixedReality.Toolkit.Boundary.BaseBoundarySystem::OnVisualizationChanged
	EventFunction_1_t607625712441FEC3E35D99748197200C15B25ED5* ___OnVisualizationChanged_25;
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

// Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKCameraSettings
struct GenericXRSDKCameraSettings_tF9630B1F8A11581A51BEFE2C71E8D444D75052AB  : public BaseCameraSettingsProvider_tD700E49A18844AC7B08C84247430319CFEC93F46
{
	// UnityEngine.SpatialTracking.TrackedPoseDriver Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKCameraSettings::trackedPoseDriver
	TrackedPoseDriver_t5A2DEE7957ED76932DB7460383BF09AB1CB4CCCD* ___trackedPoseDriver_15;
};

// UnityEngine.MeshCollider
struct MeshCollider_tB525E4DDE383252364ED0BDD32CF2B53914EE455  : public Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76
{
};

// UnityEngine.MeshRenderer
struct MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE  : public Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF
{
};

// Microsoft.MixedReality.Toolkit.Boundary.MixedRealityBoundaryVisualizationProfile
struct MixedRealityBoundaryVisualizationProfile_t8696935F2FD43867A7389688367D5F2C41862E81  : public BaseMixedRealityProfile_tB4FDEF58FFD17796C0DB7241630B71CDF38FA1D4
{
	// System.Single Microsoft.MixedReality.Toolkit.Boundary.MixedRealityBoundaryVisualizationProfile::boundaryHeight
	float ___boundaryHeight_5;
	// System.Boolean Microsoft.MixedReality.Toolkit.Boundary.MixedRealityBoundaryVisualizationProfile::showFloor
	bool ___showFloor_6;
	// UnityEngine.Material Microsoft.MixedReality.Toolkit.Boundary.MixedRealityBoundaryVisualizationProfile::floorMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___floorMaterial_7;
	// System.Int32 Microsoft.MixedReality.Toolkit.Boundary.MixedRealityBoundaryVisualizationProfile::floorPhysicsLayer
	int32_t ___floorPhysicsLayer_8;
	// UnityEngine.Vector2 Microsoft.MixedReality.Toolkit.Boundary.MixedRealityBoundaryVisualizationProfile::floorScale
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___floorScale_9;
	// System.Boolean Microsoft.MixedReality.Toolkit.Boundary.MixedRealityBoundaryVisualizationProfile::showPlayArea
	bool ___showPlayArea_10;
	// UnityEngine.Material Microsoft.MixedReality.Toolkit.Boundary.MixedRealityBoundaryVisualizationProfile::playAreaMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___playAreaMaterial_11;
	// System.Int32 Microsoft.MixedReality.Toolkit.Boundary.MixedRealityBoundaryVisualizationProfile::playAreaPhysicsLayer
	int32_t ___playAreaPhysicsLayer_12;
	// System.Boolean Microsoft.MixedReality.Toolkit.Boundary.MixedRealityBoundaryVisualizationProfile::showTrackedArea
	bool ___showTrackedArea_13;
	// UnityEngine.Material Microsoft.MixedReality.Toolkit.Boundary.MixedRealityBoundaryVisualizationProfile::trackedAreaMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___trackedAreaMaterial_14;
	// System.Int32 Microsoft.MixedReality.Toolkit.Boundary.MixedRealityBoundaryVisualizationProfile::trackedAreaPhysicsLayer
	int32_t ___trackedAreaPhysicsLayer_15;
	// System.Boolean Microsoft.MixedReality.Toolkit.Boundary.MixedRealityBoundaryVisualizationProfile::showBoundaryWalls
	bool ___showBoundaryWalls_16;
	// UnityEngine.Material Microsoft.MixedReality.Toolkit.Boundary.MixedRealityBoundaryVisualizationProfile::boundaryWallMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___boundaryWallMaterial_17;
	// System.Int32 Microsoft.MixedReality.Toolkit.Boundary.MixedRealityBoundaryVisualizationProfile::boundaryWallsPhysicsLayer
	int32_t ___boundaryWallsPhysicsLayer_18;
	// System.Boolean Microsoft.MixedReality.Toolkit.Boundary.MixedRealityBoundaryVisualizationProfile::showBoundaryCeiling
	bool ___showBoundaryCeiling_19;
	// UnityEngine.Material Microsoft.MixedReality.Toolkit.Boundary.MixedRealityBoundaryVisualizationProfile::boundaryCeilingMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___boundaryCeilingMaterial_20;
	// System.Int32 Microsoft.MixedReality.Toolkit.Boundary.MixedRealityBoundaryVisualizationProfile::ceilingPhysicsLayer
	int32_t ___ceilingPhysicsLayer_21;
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
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

// UnityEngine.SpatialTracking.TrackedPoseDriver
struct TrackedPoseDriver_t5A2DEE7957ED76932DB7460383BF09AB1CB4CCCD  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.SpatialTracking.TrackedPoseDriver/DeviceType UnityEngine.SpatialTracking.TrackedPoseDriver::m_Device
	int32_t ___m_Device_4;
	// UnityEngine.SpatialTracking.TrackedPoseDriver/TrackedPose UnityEngine.SpatialTracking.TrackedPoseDriver::m_PoseSource
	int32_t ___m_PoseSource_5;
	// UnityEngine.Experimental.XR.Interaction.BasePoseProvider UnityEngine.SpatialTracking.TrackedPoseDriver::m_PoseProviderComponent
	BasePoseProvider_t55E2883DF2C8052200284D64B68471636876FA1D* ___m_PoseProviderComponent_6;
	// UnityEngine.SpatialTracking.TrackedPoseDriver/TrackingType UnityEngine.SpatialTracking.TrackedPoseDriver::m_TrackingType
	int32_t ___m_TrackingType_7;
	// UnityEngine.SpatialTracking.TrackedPoseDriver/UpdateType UnityEngine.SpatialTracking.TrackedPoseDriver::m_UpdateType
	int32_t ___m_UpdateType_8;
	// System.Boolean UnityEngine.SpatialTracking.TrackedPoseDriver::m_UseRelativeTransform
	bool ___m_UseRelativeTransform_9;
	// UnityEngine.Pose UnityEngine.SpatialTracking.TrackedPoseDriver::m_OriginPose
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___m_OriginPose_10;
};

// Microsoft.MixedReality.Toolkit.XRSDK.XRSDKBoundarySystem
struct XRSDKBoundarySystem_t968246960310390A317722A0F222895980A9F05D  : public BaseBoundarySystem_t17725CB18637398B438C3C2B6E27DA80B4B27413
{
	// System.String Microsoft.MixedReality.Toolkit.XRSDK.XRSDKBoundarySystem::<Name>k__BackingField
	String_t* ___U3CNameU3Ek__BackingField_54;
};

struct XRSDKBoundarySystem_t968246960310390A317722A0F222895980A9F05D_StaticFields
{
	// System.Collections.Generic.List`1<UnityEngine.XR.XRInputSubsystem> Microsoft.MixedReality.Toolkit.XRSDK.XRSDKBoundarySystem::XRInputSubsystems
	List_1_t90832B88D7207769654164CC28440CF594CC397D* ___XRInputSubsystems_53;
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
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointer[]
struct IMixedRealityPointerU5BU5D_t122E67DFE2F5B082397D95C08F6AA94DE36F86A4  : public RuntimeArray
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
// System.UInt32Enum[]
struct UInt32EnumU5BU5D_t98241E73F566A0C7C43B1F407869881BF951BE1A  : public RuntimeArray
{
	ALIGN_FIELD (8) uint32_t m_Items[1];

	inline uint32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint32_t value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.XR.InputDevice[]
struct InputDeviceU5BU5D_t1361FC6DDFE12D211F933B024E51B7E5CF073F63  : public RuntimeArray
{
	ALIGN_FIELD (8) InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD m_Items[1];

	inline InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD value)
	{
		m_Items[index] = value;
	}
};


// T UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::AddComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Queue`1<UnityEngine.XR.MeshId>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1__ctor_m6AFEAC5BD499D4EDF263A4A4F2B70D51191DDD11_gshared (Queue_1_tCD897AEF7F66F282E6B86F78DCC03D0B51FBDF37* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.XR.MeshInfo>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mA2DD2929DEFD0FB15C436C1FEC952D5B092CBA23_gshared (List_1_tEE09D0BD215A518344AF2985829C519B609B7B17* __this, const RuntimeMethod* method) ;
// T Microsoft.MixedReality.Toolkit.BaseDataProvider`1<System.Object>::get_Service()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* BaseDataProvider_1_get_Service_m9D57380441608DEC9ABF2199EA5585FC967E038F_gshared_inline (BaseDataProvider_1_t8DC280A360428C68343AA5D6B95788F4A050196F* __this, const RuntimeMethod* method) ;
// T System.Nullable`1<System.Boolean>::GetValueOrDefault()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_GetValueOrDefault_m86E1210429A6EA0082CC7806DD638E8B4555F148_gshared_inline (Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01* __this, const RuntimeMethod* method) ;
// System.Void System.Nullable`1<System.Boolean>::.ctor(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Nullable_1__ctor_m4FAA8281CB4EFFD8B817734351FB3AC20A0CD6F5_gshared (Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void System.Nullable`1<System.Int32>::.ctor(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Nullable_1__ctor_m141FA88563AC0B5179132FB929EABD02C47FF703_gshared (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* __this, int32_t ___value0, const RuntimeMethod* method) ;
// T System.Nullable`1<System.Int32>::GetValueOrDefault()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Nullable_1_GetValueOrDefault_m8D130DB7F2A1E694736B449176F9C26DB456597B_gshared_inline (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* __this, const RuntimeMethod* method) ;
// System.Boolean System.Nullable`1<System.Int32>::get_HasValue()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_gshared_inline (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* __this, const RuntimeMethod* method) ;
// System.Boolean System.Nullable`1<System.Boolean>::get_HasValue()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_m6B76D139692C43B2AF7C695FAB044B16ACFAF355_gshared_inline (Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01* __this, const RuntimeMethod* method) ;
// T System.Nullable`1<System.Boolean>::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Nullable_1_get_Value_mE2C54C6AE9FC9F05BF44CD9D7D61DC6CD56E3E28_gshared (Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::Start<Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver/<EnableIfLoaderBecomesActive>d__5>(TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_Start_TisU3CEnableIfLoaderBecomesActiveU3Ed__5_tCBEE973659246124AEC4D1E7D137AF0A2F3A792C_m779BDDD2B166A44EB78961ABBE4FADA6A9D1DFD2_gshared (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* __this, U3CEnableIfLoaderBecomesActiveU3Ed__5_tCBEE973659246124AEC4D1E7D137AF0A2F3A792C* ___stateMachine0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.SubsystemManager::GetSubsystemDescriptors<System.Object>(System.Collections.Generic.List`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SubsystemManager_GetSubsystemDescriptors_TisRuntimeObject_mB367027799C2BBCC2F1DDCD7F40EFEE84C74F9A1_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ___descriptors0, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Queue`1<UnityEngine.XR.MeshId>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_Clear_m708B63A5C1A6954B31F3038FC2554E06255C683F_gshared (Queue_1_tCD897AEF7F66F282E6B86F78DCC03D0B51FBDF37* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Int32>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mCC0E71080DE343C1A527526A1AC2DBEC355CEA6C_gshared (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, RuntimeObject* ___collection0, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.Queue`1<UnityEngine.XR.MeshId>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Queue_1_get_Count_m64717BA990F1986260A2D23ED2E8E04C1B6FA6D1_gshared_inline (Queue_1_tCD897AEF7F66F282E6B86F78DCC03D0B51FBDF37* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.Queue`1<UnityEngine.XR.MeshId>::Dequeue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MeshId_t2CF122567F06D0AA4F80DDA5CB51E8CD3B7EA2AC Queue_1_Dequeue_m41718952B8841D7EF796AA7A35D480BB010381E0_gshared (Queue_1_tCD897AEF7F66F282E6B86F78DCC03D0B51FBDF37* __this, const RuntimeMethod* method) ;
// System.Void System.Action`1<UnityEngine.XR.MeshGenerationResult>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_m62D287B08FD32117DDF0FA2BB669D66F788BF382_gshared (Action_1_tC58438B06CEC83E8978FB47AC67764F80F55DEA8* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::TryGetValue(TKey,TValue&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_m7316301B8CF47FB538886B229B2749EC160B9D5C_gshared (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* __this, int32_t ___key0, RuntimeObject** ___value1, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Remove(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_m12BAB2F82E34CAA21A7245AB61E48F106340C1A4_gshared (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* __this, int32_t ___key0, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessEventData`1<System.Object>::Initialize(Microsoft.MixedReality.Toolkit.SpatialAwareness.IMixedRealitySpatialAwarenessObserver,System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealitySpatialAwarenessEventData_1_Initialize_m25711510DBB2830BC300421A7829F447B6AA780C_gshared (MixedRealitySpatialAwarenessEventData_1_tC567213B97A595AE937609AA4DD48215B87D4A3C* __this, RuntimeObject* ___observer0, int32_t ___id1, RuntimeObject* ___spatialObject2, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.XR.MeshInfo>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tEC6D4B278440969CB479B2E8E2B65B2681CA6CE3 List_1_GetEnumerator_m468FAA4C99E6FF3C1756D6BD18FA8C2992355333_gshared (List_1_tEE09D0BD215A518344AF2985829C519B609B7B17* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.XR.MeshInfo>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_m01B983AEF89C8F17DEFD740A0E013C0CA4AC81C7_gshared (Enumerator_tEC6D4B278440969CB479B2E8E2B65B2681CA6CE3* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1/Enumerator<UnityEngine.XR.MeshInfo>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR MeshInfo_t0BB7A8C2C586FD5EAD40E9E4E1749150915FDFFA Enumerator_get_Current_mC0CE60FBC4FAA79C6D5B26DD275B4DA0DF7265E6_gshared_inline (Enumerator_tEC6D4B278440969CB479B2E8E2B65B2681CA6CE3* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Queue`1<UnityEngine.XR.MeshId>::Enqueue(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_Enqueue_mB26DD8D99535CBFC7BBA16CC3DF8CD84C76518F7_gshared (Queue_1_tCD897AEF7F66F282E6B86F78DCC03D0B51FBDF37* __this, MeshId_t2CF122567F06D0AA4F80DDA5CB51E8CD3B7EA2AC ___item0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.XR.MeshInfo>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mAB2B6FFD31DB8BF5C1516AEDD3901373D9CD412C_gshared (Enumerator_tEC6D4B278440969CB479B2E8E2B65B2681CA6CE3* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::ContainsKey(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_mED5C451F158CDDD2B3F4B0720CD248DA9DB27B25_gshared (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* __this, int32_t ___key0, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::get_Item(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_get_Item_mC3FEA647E750C27367C990777D8890E0E712E514_gshared (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* __this, int32_t ___key0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Add(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_mAF1EF7DA16BD70E252EA5C4B0F74DE519A02CBCD_gshared (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* __this, int32_t ___key0, RuntimeObject* ___value1, const RuntimeMethod* method) ;
// System.Void System.Func`1<System.Boolean>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_1__ctor_mDFFAE9C73346372438B5B04C4558AC42F1A3DA22_gshared (Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::AwaitOnCompleted<System.Object,Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver/<EnableIfLoaderBecomesActive>d__5>(TAwaiter&,TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_AwaitOnCompleted_TisRuntimeObject_TisU3CEnableIfLoaderBecomesActiveU3Ed__5_tCBEE973659246124AEC4D1E7D137AF0A2F3A792C_mEF5A863A17758518083AAAB27B69CAE54CDDA224_gshared (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* __this, RuntimeObject** ___awaiter0, U3CEnableIfLoaderBecomesActiveU3Ed__5_tCBEE973659246124AEC4D1E7D137AF0A2F3A792C* ___stateMachine1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7E6E0C4AE37ACBC1E9BDA9E56A8A7D8ACED3FD33_gshared (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, int32_t ___capacity0, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Vector3>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_gshared_inline (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.SubsystemManager::GetInstances<System.Object>(System.Collections.Generic.List`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SubsystemManager_GetInstances_TisRuntimeObject_m483A6D40AA7F54CA9B8E450BD763C2F4FB515A16_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ___subsystems0, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3>::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputFeatureUsage_1__ctor_m4267CE5D9D4C8FFE0CD48B585565A9DCADFB4FDA_gshared (InputFeatureUsage_1_t2E901FA41650EB29399194768CAA93D477CEBC58* __this, String_t* ___usageName0, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Quaternion>::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputFeatureUsage_1__ctor_m14B4290F5C2B58B777726B4079A7CC2238176A08_gshared (InputFeatureUsage_1_t8489CEC68B1EC178F2634079A9D7CD9E90D3CF5D* __this, String_t* ___usageName0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.XR.InputDevice>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mF7ACC153F11A3260DAACDCA56B0A70A4BFA61EA4_gshared (List_1_tB66D13E0427CA48C600AEA4DBA5B173C3734C6CE* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.UInt32Enum>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m4F6D130E835EF60168B463827A919872561B2CD2_gshared (List_1_tE3A859FDD017A2D25E8161269BA1167C22EC7EB9* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.UInt32Enum>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mD6A050A07715B63F87D5836164739C5F9B96AE4E_gshared_inline (List_1_tE3A859FDD017A2D25E8161269BA1167C22EC7EB9* __this, uint32_t ___item0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.XR.InputDevice>::Clear()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_m90BE1F9C540971223AE0CE4E333ACFC27CDA0275_gshared_inline (List_1_tB66D13E0427CA48C600AEA4DBA5B173C3734C6CE* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.UInt32Enum>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tFC54B69D62BA1CA29D8F4AB812D98BDDBC2910F5 List_1_GetEnumerator_mBE9E006CAA4A2B822E378029ABB68B93A915748C_gshared (List_1_tE3A859FDD017A2D25E8161269BA1167C22EC7EB9* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1/Enumerator<System.UInt32Enum>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mCBA5AFD2C01298ADFC3B9B6D08C8D1772A0C50B1_gshared (Enumerator_tFC54B69D62BA1CA29D8F4AB812D98BDDBC2910F5* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1/Enumerator<System.UInt32Enum>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint32_t Enumerator_get_Current_m233DF81DCAAB147DA040D40C2F51F462C087C913_gshared_inline (Enumerator_tFC54B69D62BA1CA29D8F4AB812D98BDDBC2910F5* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.XR.InputDevice>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t2A0DD7C3F41DE0D8FD672B874BDDB066261ECB01 List_1_GetEnumerator_m099EE1B978423A69DAE032836B6FC9A39F7D1EE6_gshared (List_1_tB66D13E0427CA48C600AEA4DBA5B173C3734C6CE* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.XR.InputDevice>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_m7B899035F29D732606CA6BA2253BEBD41BECD3DC_gshared (Enumerator_t2A0DD7C3F41DE0D8FD672B874BDDB066261ECB01* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1/Enumerator<UnityEngine.XR.InputDevice>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD Enumerator_get_Current_m7D19F033982951230B318A08E829850451459AAE_gshared_inline (Enumerator_t2A0DD7C3F41DE0D8FD672B874BDDB066261ECB01* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1<UnityEngine.XR.InputDevice>::Contains(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Contains_m1760B66FE5C90D9CEB94208DE54A4A0F999D5CF3_gshared (List_1_tB66D13E0427CA48C600AEA4DBA5B173C3734C6CE* __this, InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD ___item0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.XR.InputDevice>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEECA639E710075828AEBC2083BBCF28184156831_gshared_inline (List_1_tB66D13E0427CA48C600AEA4DBA5B173C3734C6CE* __this, InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD ___item0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.XR.InputDevice>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m5267F7AD322ED3F12B552EC1C62F059932803E2E_gshared (Enumerator_t2A0DD7C3F41DE0D8FD672B874BDDB066261ECB01* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.UInt32Enum>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m16DB67783D6417C6A2E4D3BEB586D8ED66AEABE2_gshared (Enumerator_tFC54B69D62BA1CA29D8F4AB812D98BDDBC2910F5* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1<UnityEngine.XR.InputDevice>::Remove(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Remove_mD82B3FDD8ADF1CD3F4F6E5E3509D346EE7D03ACA_gshared (List_1_tB66D13E0427CA48C600AEA4DBA5B173C3734C6CE* __this, InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD ___item0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.XR.InputDevice>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_AddRange_m1B2001B12A2C59D1AD98A08F63DEBAAC92584658_gshared (List_1_tB66D13E0427CA48C600AEA4DBA5B173C3734C6CE* __this, RuntimeObject* ___collection0, const RuntimeMethod* method) ;
// System.Collections.ObjectModel.ReadOnlyCollection`1<TElement> Microsoft.MixedReality.Toolkit.CollectionsExtensions::ToReadOnlyCollection<System.Collections.Generic.KeyValuePair`2<UnityEngine.XR.InputDevice,System.Object>>(System.Collections.Generic.IEnumerable`1<TElement>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlyCollection_1_tDF77079EDD8BBAD519512EBD12E41ED00968AE59* CollectionsExtensions_ToReadOnlyCollection_TisKeyValuePair_2_t55A4D6848C39E45165F686753BD37E19B24D994E_m9A866A51DA97178118FCE79499D4D9CCF38B14AC_gshared (RuntimeObject* ___elements0, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<UnityEngine.XR.InputDevice,System.Object>>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyCollection_1_GetEnumerator_m6237DDE3EC48DB0D085FB0BC719FAED30B2FEEDA_gshared (ReadOnlyCollection_1_tDF77079EDD8BBAD519512EBD12E41ED00968AE59* __this, const RuntimeMethod* method) ;
// TKey System.Collections.Generic.KeyValuePair`2<UnityEngine.XR.InputDevice,System.Object>::get_Key()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD KeyValuePair_2_get_Key_m749A3A8F4386C91708C0C4A5A65C3FCBDEFFE58F_gshared_inline (KeyValuePair_2_t55A4D6848C39E45165F686753BD37E19B24D994E* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.XR.InputDevice,System.Object>::ContainsKey(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_mD666285E70258F36167E291D368AF18634778C9A_gshared (Dictionary_2_t71D6FBDC59C9F3896AA3D4E3FEBCEA1D877D10C5* __this, InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD ___key0, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.Dictionary`2<UnityEngine.XR.InputDevice,System.Object>::get_Item(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_get_Item_mB74E30370773A3CE297583FC6F4F80C31F388CE1_gshared (Dictionary_2_t71D6FBDC59C9F3896AA3D4E3FEBCEA1D877D10C5* __this, InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD ___key0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.XR.InputDevice,System.Object>::Add(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m5F088D56D3C169743DC181479281FC3B83961F0A_gshared (Dictionary_2_t71D6FBDC59C9F3896AA3D4E3FEBCEA1D877D10C5* __this, InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD ___key0, RuntimeObject* ___value1, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.XR.InputDevice,System.Object>::TryGetValue(TKey,TValue&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_m16057058031F71CB4372AEA7E94F959FEE7D5C89_gshared (Dictionary_2_t71D6FBDC59C9F3896AA3D4E3FEBCEA1D877D10C5* __this, InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD ___key0, RuntimeObject** ___value1, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.XR.InputDevice,System.Object>::Remove(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_mD1E79CEA754A383395519C9B291D9D6C354CEF75_gshared (Dictionary_2_t71D6FBDC59C9F3896AA3D4E3FEBCEA1D877D10C5* __this, InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD ___key0, const RuntimeMethod* method) ;
// System.Boolean Microsoft.MixedReality.Toolkit.UnityObjectExtensions::IsNull<System.Object>(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnityObjectExtensions_IsNull_TisRuntimeObject_m6E617DC6DEE232D20C52C72A69E251ABAF82E5C2_gshared (RuntimeObject* ___interface0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.XR.InputDevice,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mF467392EF616E16CFD30145CC8B7D93154DE9129_gshared (Dictionary_2_t71D6FBDC59C9F3896AA3D4E3FEBCEA1D877D10C5* __this, const RuntimeMethod* method) ;

// System.Void Microsoft.MixedReality.Toolkit.CameraSystem.BaseCameraSettingsProvider::.ctor(Microsoft.MixedReality.Toolkit.CameraSystem.IMixedRealityCameraSystem,System.String,System.UInt32,Microsoft.MixedReality.Toolkit.CameraSystem.BaseCameraSettingsProfile)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseCameraSettingsProvider__ctor_mAFEF8A563BC57786947687B6BEF2F047EE81F8C8 (BaseCameraSettingsProvider_tD700E49A18844AC7B08C84247430319CFEC93F46* __this, RuntimeObject* ___cameraSystem0, String_t* ___name1, uint32_t ___priority2, BaseCameraSettingsProfile_tDB8373232611B34628752DF4D284B938CFE32799* ___profile3, const RuntimeMethod* method) ;
// UnityEngine.XR.XRDisplaySubsystem Microsoft.MixedReality.Toolkit.Utilities.XRSubsystemHelpers::get_DisplaySubsystem()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XRDisplaySubsystem_t4B00B0BF1894A039ACFA8DDC2C2EB9301118C1F1* XRSubsystemHelpers_get_DisplaySubsystem_m8EAE61D2871CD20E9BDF90940031D5F3A368D14A (const RuntimeMethod* method) ;
// System.Boolean UnityEngine.XR.XRDisplaySubsystem::get_displayOpaque()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRDisplaySubsystem_get_displayOpaque_m6D1368A243BF5187222D2F86E5C0582A0E2614D9 (XRDisplaySubsystem_t4B00B0BF1894A039ACFA8DDC2C2EB9301118C1F1* __this, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.BaseService::Enable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseService_Enable_mF054160CA265761A1223A3F8CFE50A976C7297E8 (BaseService_tB7EC5C0F60DC5EE2DA122A608226D3887B6421D0* __this, const RuntimeMethod* method) ;
// UnityEngine.Camera Microsoft.MixedReality.Toolkit.Utilities.CameraCache::get_Main()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* CameraCache_get_Main_m631CABB7F5A697F4C1D76F7CB02D6791C0DDCB9E (const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.SpatialTracking.TrackedPoseDriver>()
inline TrackedPoseDriver_t5A2DEE7957ED76932DB7460383BF09AB1CB4CCCD* Component_GetComponent_TisTrackedPoseDriver_t5A2DEE7957ED76932DB7460383BF09AB1CB4CCCD_mD66D58E941D95457A6D16D8674487EC5982E6293 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  TrackedPoseDriver_t5A2DEE7957ED76932DB7460383BF09AB1CB4CCCD* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Boolean UnityEngine.Object::op_Implicit(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___exists0, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::AddComponent<UnityEngine.SpatialTracking.TrackedPoseDriver>()
inline TrackedPoseDriver_t5A2DEE7957ED76932DB7460383BF09AB1CB4CCCD* GameObject_AddComponent_TisTrackedPoseDriver_t5A2DEE7957ED76932DB7460383BF09AB1CB4CCCD_mE15DFF8FCF4FB3ACD1041664452EA77D2E6E4B63 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  TrackedPoseDriver_t5A2DEE7957ED76932DB7460383BF09AB1CB4CCCD* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared)(__this, method);
}
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.UnityObjectExtensions::DestroyObject(UnityEngine.Object,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityObjectExtensions_DestroyObject_mD1D35D04EA32F02BB03FC23B5FE7069D098E8071 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___obj0, float ___t1, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.BaseService::Disable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseService_Disable_m75AA61136BE79E0C8EA4B058D1506882A56683C4 (BaseService_tB7EC5C0F60DC5EE2DA122A608226D3887B6421D0* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Queue`1<UnityEngine.XR.MeshId>::.ctor()
inline void Queue_1__ctor_m6AFEAC5BD499D4EDF263A4A4F2B70D51191DDD11 (Queue_1_tCD897AEF7F66F282E6B86F78DCC03D0B51FBDF37* __this, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_tCD897AEF7F66F282E6B86F78DCC03D0B51FBDF37*, const RuntimeMethod*))Queue_1__ctor_m6AFEAC5BD499D4EDF263A4A4F2B70D51191DDD11_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.XR.MeshInfo>::.ctor()
inline void List_1__ctor_mA2DD2929DEFD0FB15C436C1FEC952D5B092CBA23 (List_1_tEE09D0BD215A518344AF2985829C519B609B7B17* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tEE09D0BD215A518344AF2985829C519B609B7B17*, const RuntimeMethod*))List_1__ctor_mA2DD2929DEFD0FB15C436C1FEC952D5B092CBA23_gshared)(__this, method);
}
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline (const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialMeshObserver::.ctor(Microsoft.MixedReality.Toolkit.SpatialAwareness.IMixedRealitySpatialAwarenessSystem,System.String,System.UInt32,Microsoft.MixedReality.Toolkit.BaseMixedRealityProfile)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseSpatialMeshObserver__ctor_mBAFFCFF0AC0ED0F47E651689346BABE5E9842950 (BaseSpatialMeshObserver_t38C1251909F4D9DB3B4E3DA90CFC32670E925B46* __this, RuntimeObject* ___spatialAwarenessSystem0, String_t* ___name1, uint32_t ___priority2, BaseMixedRealityProfile_tB4FDEF58FFD17796C0DB7241630B71CDF38FA1D4* ___profile3, const RuntimeMethod* method) ;
// UnityEngine.XR.Management.XRGeneralSettings UnityEngine.XR.Management.XRGeneralSettings::get_Instance()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE* XRGeneralSettings_get_Instance_mF17EAF521849B0E007AEE3B009727D3DF9EF110F_inline (const RuntimeMethod* method) ;
// UnityEngine.XR.Management.XRManagerSettings UnityEngine.XR.Management.XRGeneralSettings::get_Manager()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52* XRGeneralSettings_get_Manager_m112FEB4E6DFB7B5F5C4A2DEC4E975CF2EBD51B42_inline (XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE* __this, const RuntimeMethod* method) ;
// UnityEngine.XR.Management.XRLoader UnityEngine.XR.Management.XRManagerSettings::get_activeLoader()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR XRLoader_t80B1B1934C40561C5352ABC95D567DC2A7C9C976* XRManagerSettings_get_activeLoader_mFB3B679005792D3DF871EAA7120DD86DCA1D5DEA_inline (XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52* __this, const RuntimeMethod* method) ;
// T Microsoft.MixedReality.Toolkit.BaseDataProvider`1<Microsoft.MixedReality.Toolkit.SpatialAwareness.IMixedRealitySpatialAwarenessSystem>::get_Service()
inline RuntimeObject* BaseDataProvider_1_get_Service_mC6DAD45EF35B39E07955ABECAAA8C7520ABFBE5F_inline (BaseDataProvider_1_tD2C6659D94D07FC49556BA26F6C62210EACE7F30* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (BaseDataProvider_1_tD2C6659D94D07FC49556BA26F6C62210EACE7F30*, const RuntimeMethod*))BaseDataProvider_1_get_Service_m9D57380441608DEC9ABF2199EA5585FC967E038F_gshared_inline)(__this, method);
}
// T System.Nullable`1<System.Boolean>::GetValueOrDefault()
inline bool Nullable_1_GetValueOrDefault_m86E1210429A6EA0082CC7806DD638E8B4555F148_inline (Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01*, const RuntimeMethod*))Nullable_1_GetValueOrDefault_m86E1210429A6EA0082CC7806DD638E8B4555F148_gshared_inline)(__this, method);
}
// System.Void System.Nullable`1<System.Boolean>::.ctor(T)
inline void Nullable_1__ctor_m4FAA8281CB4EFFD8B817734351FB3AC20A0CD6F5 (Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01* __this, bool ___value0, const RuntimeMethod* method)
{
	((  void (*) (Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01*, bool, const RuntimeMethod*))Nullable_1__ctor_m4FAA8281CB4EFFD8B817734351FB3AC20A0CD6F5_gshared)(__this, ___value0, method);
}
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
// System.Boolean System.Nullable`1<System.Boolean>::get_HasValue()
inline bool Nullable_1_get_HasValue_m6B76D139692C43B2AF7C695FAB044B16ACFAF355_inline (Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01*, const RuntimeMethod*))Nullable_1_get_HasValue_m6B76D139692C43B2AF7C695FAB044B16ACFAF355_gshared_inline)(__this, method);
}
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver::EnableIfLoaderBecomesActive()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GenericXRSDKSpatialMeshObserver_EnableIfLoaderBecomesActive_m6F1C7D9A26189A4F56E99BA1EC56696579333CF7 (GenericXRSDKSpatialMeshObserver_t992F3640352E29648369A4DE1DDAC0FFB6EAC6D1* __this, const RuntimeMethod* method) ;
// T System.Nullable`1<System.Boolean>::get_Value()
inline bool Nullable_1_get_Value_mE2C54C6AE9FC9F05BF44CD9D7D61DC6CD56E3E28 (Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01*, const RuntimeMethod*))Nullable_1_get_Value_mE2C54C6AE9FC9F05BF44CD9D7D61DC6CD56E3E28_gshared)(__this, method);
}
// System.Void Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialObserver::Enable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseSpatialObserver_Enable_mB59B3052CA05FCB76089CA329B9B15B6519E4500 (BaseSpatialObserver_tFBE4A1B3D5FCCB85BD0DC39709C1FCB7085D797B* __this, const RuntimeMethod* method) ;
// System.Runtime.CompilerServices.AsyncVoidMethodBuilder System.Runtime.CompilerServices.AsyncVoidMethodBuilder::Create()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D AsyncVoidMethodBuilder_Create_mE6D291637BF7B4B6D3F8BFCA14920B9200D7A502 (const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::Start<Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver/<EnableIfLoaderBecomesActive>d__5>(TStateMachine&)
inline void AsyncVoidMethodBuilder_Start_TisU3CEnableIfLoaderBecomesActiveU3Ed__5_tCBEE973659246124AEC4D1E7D137AF0A2F3A792C_m779BDDD2B166A44EB78961ABBE4FADA6A9D1DFD2 (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* __this, U3CEnableIfLoaderBecomesActiveU3Ed__5_tCBEE973659246124AEC4D1E7D137AF0A2F3A792C* ___stateMachine0, const RuntimeMethod* method)
{
	((  void (*) (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D*, U3CEnableIfLoaderBecomesActiveU3Ed__5_tCBEE973659246124AEC4D1E7D137AF0A2F3A792C*, const RuntimeMethod*))AsyncVoidMethodBuilder_Start_TisU3CEnableIfLoaderBecomesActiveU3Ed__5_tCBEE973659246124AEC4D1E7D137AF0A2F3A792C_m779BDDD2B166A44EB78961ABBE4FADA6A9D1DFD2_gshared)(__this, ___stateMachine0, method);
}
// System.Boolean UnityEngine.IntegratedSubsystem::get_running()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IntegratedSubsystem_get_running_m18AA0D7AD1CB593DC9EE5F3DC79643717509D6E8 (IntegratedSubsystem_t990160A89854D87C0836DC589B720231C02D4CE3* __this, const RuntimeMethod* method) ;
// System.Boolean Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialObserver::get_IsRunning()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool BaseSpatialObserver_get_IsRunning_mB13D2B9872E0700341E22CA4FBDA836108145134_inline (BaseSpatialObserver_tFBE4A1B3D5FCCB85BD0DC39709C1FCB7085D797B* __this, const RuntimeMethod* method) ;
// UnityEngine.XR.XRMeshSubsystem Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver::get_MeshSubsystem()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XRMeshSubsystem_tDDC31EC10D4F0517542F9EB296428A0F7EC2C3B2* GenericXRSDKSpatialMeshObserver_get_MeshSubsystem_m6AC67F5232D1623CB2B9FBC1F6EFA832A9D99B22 (GenericXRSDKSpatialMeshObserver_t992F3640352E29648369A4DE1DDAC0FFB6EAC6D1* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.XRMeshSubsystem::set_meshDensity(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRMeshSubsystem_set_meshDensity_mB3B23768DE704088634FCBEE3F21B9E0C869BE31 (XRMeshSubsystem_tDDC31EC10D4F0517542F9EB296428A0F7EC2C3B2* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.XR.XRMeshSubsystemDescriptor>::.ctor()
inline void List_1__ctor_m277DBA8B46097B1BA355F0215F73E0DA16803756 (List_1_tA9571B7847EA1D73E7B431473A8F7D19B9786E22* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tA9571B7847EA1D73E7B431473A8F7D19B9786E22*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void UnityEngine.SubsystemManager::GetSubsystemDescriptors<UnityEngine.XR.XRMeshSubsystemDescriptor>(System.Collections.Generic.List`1<T>)
inline void SubsystemManager_GetSubsystemDescriptors_TisXRMeshSubsystemDescriptor_tD9814661B8661C69D5A0DBB76C9AF61778B9CEC1_m8261BB26A142C1942041262282FB3885674C0348 (List_1_tA9571B7847EA1D73E7B431473A8F7D19B9786E22* ___descriptors0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tA9571B7847EA1D73E7B431473A8F7D19B9786E22*, const RuntimeMethod*))SubsystemManager_GetSubsystemDescriptors_TisRuntimeObject_mB367027799C2BBCC2F1DDCD7F40EFEE84C74F9A1_gshared)(___descriptors0, method);
}
// System.Int32 System.Collections.Generic.List`1<UnityEngine.XR.XRMeshSubsystemDescriptor>::get_Count()
inline int32_t List_1_get_Count_mD4911FFC74AE9258C87DB5BE000B1CF1698A8D7D_inline (List_1_tA9571B7847EA1D73E7B431473A8F7D19B9786E22* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tA9571B7847EA1D73E7B431473A8F7D19B9786E22*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// Unity.Profiling.ProfilerMarker/AutoScope Unity.Profiling.ProfilerMarker::Auto()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR AutoScope_tFB983697E28885CB10FFDB92D7EFD0615AEF3139 ProfilerMarker_Auto_m133FA724EB95D16187B37D2C8A501D7E989B1F8D_inline (ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD* __this, const RuntimeMethod* method) ;
// System.Void Unity.Profiling.ProfilerMarker/AutoScope::Dispose()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AutoScope_Dispose_mED763F3F51261EF8FB79DB32CD06E0A3F6C40481_inline (AutoScope_tFB983697E28885CB10FFDB92D7EFD0615AEF3139* __this, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.BaseService::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseService_Update_m07A22E1552ABDCD9AD86737D12D43DA27915370D (BaseService_tB7EC5C0F60DC5EE2DA122A608226D3887B6421D0* __this, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver::UpdateObserver()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GenericXRSDKSpatialMeshObserver_UpdateObserver_mA749C232404C327041D88E4901FF0CD7C3019676 (GenericXRSDKSpatialMeshObserver_t992F3640352E29648369A4DE1DDAC0FFB6EAC6D1* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogWarning(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogWarning_mEF15C6B17CE4E1FA7E379CDB82CE40FCD89A3F28 (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.Void UnityEngine.IntegratedSubsystem::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IntegratedSubsystem_Start_m2F871FE708687A50D8B078522D97C627D344CC34 (IntegratedSubsystem_t990160A89854D87C0836DC589B720231C02D4CE3* __this, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialObserver::set_IsRunning(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BaseSpatialObserver_set_IsRunning_m47FBE552E2B0BF2F7DD73DED421312874DA4710A_inline (BaseSpatialObserver_tFBE4A1B3D5FCCB85BD0DC39709C1FCB7085D797B* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.IntegratedSubsystem::Stop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IntegratedSubsystem_Stop_m4CFEE7A1C17893728205EAEEF9D5427622C794C4 (IntegratedSubsystem_t990160A89854D87C0836DC589B720231C02D4CE3* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Queue`1<UnityEngine.XR.MeshId>::Clear()
inline void Queue_1_Clear_m708B63A5C1A6954B31F3038FC2554E06255C683F (Queue_1_tCD897AEF7F66F282E6B86F78DCC03D0B51FBDF37* __this, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_tCD897AEF7F66F282E6B86F78DCC03D0B51FBDF37*, const RuntimeMethod*))Queue_1_Clear_m708B63A5C1A6954B31F3038FC2554E06255C683F_gshared)(__this, method);
}
// System.Collections.Generic.IReadOnlyDictionary`2<System.Int32,Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessMeshObject> Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialMeshObserver::get_Meshes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* BaseSpatialMeshObserver_get_Meshes_mF1EFD9EC62528A219260B766662951D8B9064534 (BaseSpatialMeshObserver_t38C1251909F4D9DB3B4E3DA90CFC32670E925B46* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Int32>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
inline void List_1__ctor_mCC0E71080DE343C1A527526A1AC2DBEC355CEA6C (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, RuntimeObject* ___collection0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*, RuntimeObject*, const RuntimeMethod*))List_1__ctor_mCC0E71080DE343C1A527526A1AC2DBEC355CEA6C_gshared)(__this, ___collection0, method);
}
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver::RemoveMeshObject(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GenericXRSDKSpatialMeshObserver_RemoveMeshObject_m0626D8534801EB9311D24F78397A5BBC532741BC (GenericXRSDKSpatialMeshObserver_t992F3640352E29648369A4DE1DDAC0FFB6EAC6D1* __this, int32_t ___id0, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.Queue`1<UnityEngine.XR.MeshId>::get_Count()
inline int32_t Queue_1_get_Count_m64717BA990F1986260A2D23ED2E8E04C1B6FA6D1_inline (Queue_1_tCD897AEF7F66F282E6B86F78DCC03D0B51FBDF37* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Queue_1_tCD897AEF7F66F282E6B86F78DCC03D0B51FBDF37*, const RuntimeMethod*))Queue_1_get_Count_m64717BA990F1986260A2D23ED2E8E04C1B6FA6D1_gshared_inline)(__this, method);
}
// T System.Collections.Generic.Queue`1<UnityEngine.XR.MeshId>::Dequeue()
inline MeshId_t2CF122567F06D0AA4F80DDA5CB51E8CD3B7EA2AC Queue_1_Dequeue_m41718952B8841D7EF796AA7A35D480BB010381E0 (Queue_1_tCD897AEF7F66F282E6B86F78DCC03D0B51FBDF37* __this, const RuntimeMethod* method)
{
	return ((  MeshId_t2CF122567F06D0AA4F80DDA5CB51E8CD3B7EA2AC (*) (Queue_1_tCD897AEF7F66F282E6B86F78DCC03D0B51FBDF37*, const RuntimeMethod*))Queue_1_Dequeue_m41718952B8841D7EF796AA7A35D480BB010381E0_gshared)(__this, method);
}
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver::RequestMesh(UnityEngine.XR.MeshId)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GenericXRSDKSpatialMeshObserver_RequestMesh_mE06EFD6A985F49A050BCE11266529157F7CA0F69 (GenericXRSDKSpatialMeshObserver_t992F3640352E29648369A4DE1DDAC0FFB6EAC6D1* __this, MeshId_t2CF122567F06D0AA4F80DDA5CB51E8CD3B7EA2AC ___meshId0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_time()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_time_m0BEE9AACD0723FE414465B77C9C64D12263675F3 (const RuntimeMethod* method) ;
// System.Single Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialObserver::get_UpdateInterval()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float BaseSpatialObserver_get_UpdateInterval_mCA5EC1733690C942FC0D32C203581D794E490896_inline (BaseSpatialObserver_tFBE4A1B3D5FCCB85BD0DC39709C1FCB7085D797B* __this, const RuntimeMethod* method) ;
// Microsoft.MixedReality.Toolkit.Utilities.VolumeType Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialObserver::get_ObserverVolumeType()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t BaseSpatialObserver_get_ObserverVolumeType_m03C1580AB6F33AE1FC3583BAA197A9DB8F63D3E1_inline (BaseSpatialObserver_tFBE4A1B3D5FCCB85BD0DC39709C1FCB7085D797B* __this, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Transform::get_rotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialObserver::set_ObserverRotation(UnityEngine.Quaternion)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BaseSpatialObserver_set_ObserverRotation_m4E1045D9617D11E133B536B5F35D1A02D079665B_inline (BaseSpatialObserver_tFBE4A1B3D5FCCB85BD0DC39709C1FCB7085D797B* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___value0, const RuntimeMethod* method) ;
// System.Boolean Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialObserver::get_IsStationaryObserver()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool BaseSpatialObserver_get_IsStationaryObserver_mA13036D4DE4D2BAB1CB905DB0FDF1CA17224002E_inline (BaseSpatialObserver_tFBE4A1B3D5FCCB85BD0DC39709C1FCB7085D797B* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialObserver::set_ObserverOrigin(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BaseSpatialObserver_set_ObserverOrigin_m198E1F47350F76383E77B197313E41F94019614D_inline (BaseSpatialObserver_tFBE4A1B3D5FCCB85BD0DC39709C1FCB7085D797B* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.XR.XRMeshSubsystem::TryGetMeshInfos(System.Collections.Generic.List`1<UnityEngine.XR.MeshInfo>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRMeshSubsystem_TryGetMeshInfos_m05F584066A873F286C16B99A929C4B3B9AB58FD2 (XRMeshSubsystem_tDDC31EC10D4F0517542F9EB296428A0F7EC2C3B2* __this, List_1_tEE09D0BD215A518344AF2985829C519B609B7B17* ___meshInfosOut0, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver::UpdateMeshes(System.Collections.Generic.List`1<UnityEngine.XR.MeshInfo>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GenericXRSDKSpatialMeshObserver_UpdateMeshes_m746769F6904BEAF0CDA6AB8D1C71277898495C36 (GenericXRSDKSpatialMeshObserver_t992F3640352E29648369A4DE1DDAC0FFB6EAC6D1* __this, List_1_tEE09D0BD215A518344AF2985829C519B609B7B17* ___meshInfos0, const RuntimeMethod* method) ;
// System.String UnityEngine.XR.MeshId::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* MeshId_ToString_m8D2D9206A924A86FF28CF6499B7C66941FD0E7D4 (MeshId_t2CF122567F06D0AA4F80DDA5CB51E8CD3B7EA2AC* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method) ;
// System.Int32 Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialMeshObserver::get_MeshPhysicsLayer()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t BaseSpatialMeshObserver_get_MeshPhysicsLayer_mDD04C90F8900FADBD6D3C5CD092DCB4FFD7C1187_inline (BaseSpatialMeshObserver_t38C1251909F4D9DB3B4E3DA90CFC32670E925B46* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.XR.MeshId::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MeshId_GetHashCode_mC6B6428EB5856505023C0D48879B92C2E3F062B0 (MeshId_t2CF122567F06D0AA4F80DDA5CB51E8CD3B7EA2AC* __this, const RuntimeMethod* method) ;
// Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessMeshObject Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessMeshObject::Create(UnityEngine.Mesh,System.Int32,System.String,System.Int32,UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SpatialAwarenessMeshObject_t5577B6C05F0A1138C582A8F1B7A717B81AE11379* SpatialAwarenessMeshObject_Create_mAA44309CC5759B309F1CA1D884E8CAAD069A1C79 (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___mesh0, int32_t ___layer1, String_t* ___name2, int32_t ___meshId3, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___meshParent4, const RuntimeMethod* method) ;
// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialAwarenessObject::get_GameObject()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* BaseSpatialAwarenessObject_get_GameObject_m9A7D5AD66EAFD693335D73289E08E4F62D15EB06_inline (BaseSpatialAwarenessObject_tD8B917300EF3EB525D1666D65D8A22226F935C55* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::set_name(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_set_name_mC79E6DC8FFD72479C90F0C4CC7F42A0FEAF5AE47 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialAwarenessObject::set_Id(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BaseSpatialAwarenessObject_set_Id_m934BABD378424930BFB496263790179DD0D8E9DA_inline (BaseSpatialAwarenessObject_tD8B917300EF3EB525D1666D65D8A22226F935C55* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, bool ___value0, const RuntimeMethod* method) ;
// UnityEngine.MeshFilter Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialAwarenessObject::get_Filter()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* BaseSpatialAwarenessObject_get_Filter_mFE56EA1F934330429B2F7ED30BC93B7E18C531A9_inline (BaseSpatialAwarenessObject_tD8B917300EF3EB525D1666D65D8A22226F935C55* __this, const RuntimeMethod* method) ;
// UnityEngine.Mesh UnityEngine.MeshFilter::get_mesh()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* MeshFilter_get_mesh_m13172D7EF6682861971817D0A47EE2BE49FBCB1C (MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* __this, const RuntimeMethod* method) ;
// UnityEngine.MeshCollider Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessMeshObject::get_Collider()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR MeshCollider_tB525E4DDE383252364ED0BDD32CF2B53914EE455* SpatialAwarenessMeshObject_get_Collider_m2A7709B01862765D3A3A02B613CD3AD5FEED0EC9_inline (SpatialAwarenessMeshObject_t5577B6C05F0A1138C582A8F1B7A717B81AE11379* __this, const RuntimeMethod* method) ;
// System.Void System.Action`1<UnityEngine.XR.MeshGenerationResult>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_m62D287B08FD32117DDF0FA2BB669D66F788BF382 (Action_1_tC58438B06CEC83E8978FB47AC67764F80F55DEA8* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tC58438B06CEC83E8978FB47AC67764F80F55DEA8*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_1__ctor_m62D287B08FD32117DDF0FA2BB669D66F788BF382_gshared)(__this, ___object0, ___method1, method);
}
// System.Void UnityEngine.XR.XRMeshSubsystem::GenerateMeshAsync(UnityEngine.XR.MeshId,UnityEngine.Mesh,UnityEngine.MeshCollider,UnityEngine.XR.MeshVertexAttributes,System.Action`1<UnityEngine.XR.MeshGenerationResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRMeshSubsystem_GenerateMeshAsync_m3DEA3C294695FD7C54D1186FF7DCE84A4BA1CFB7 (XRMeshSubsystem_tDDC31EC10D4F0517542F9EB296428A0F7EC2C3B2* __this, MeshId_t2CF122567F06D0AA4F80DDA5CB51E8CD3B7EA2AC ___meshId0, Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___mesh1, MeshCollider_tB525E4DDE383252364ED0BDD32CF2B53914EE455* ___meshCollider2, int32_t ___attributes3, Action_1_tC58438B06CEC83E8978FB47AC67764F80F55DEA8* ___onMeshGenerationComplete4, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessMeshObject>::TryGetValue(TKey,TValue&)
inline bool Dictionary_2_TryGetValue_m2B55736D191B5E6869AF55442ED83B834A066164 (Dictionary_2_t0E31064CA2CAEBF8E2C6B82A38A6D432A0F91413* __this, int32_t ___key0, SpatialAwarenessMeshObject_t5577B6C05F0A1138C582A8F1B7A717B81AE11379** ___value1, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t0E31064CA2CAEBF8E2C6B82A38A6D432A0F91413*, int32_t, SpatialAwarenessMeshObject_t5577B6C05F0A1138C582A8F1B7A717B81AE11379**, const RuntimeMethod*))Dictionary_2_TryGetValue_m7316301B8CF47FB538886B229B2749EC160B9D5C_gshared)(__this, ___key0, ___value1, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessMeshObject>::Remove(TKey)
inline bool Dictionary_2_Remove_mEC3BD6FA8D8A74CB98F57255A1DBC49D253F2EC6 (Dictionary_2_t0E31064CA2CAEBF8E2C6B82A38A6D432A0F91413* __this, int32_t ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t0E31064CA2CAEBF8E2C6B82A38A6D432A0F91413*, int32_t, const RuntimeMethod*))Dictionary_2_Remove_m12BAB2F82E34CAA21A7245AB61E48F106340C1A4_gshared)(__this, ___key0, method);
}
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver::ReclaimMeshObject(Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessMeshObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GenericXRSDKSpatialMeshObserver_ReclaimMeshObject_m4898743E17B3906BC85843AFD26CC11CFD29E66F (GenericXRSDKSpatialMeshObserver_t992F3640352E29648369A4DE1DDAC0FFB6EAC6D1* __this, SpatialAwarenessMeshObject_t5577B6C05F0A1138C582A8F1B7A717B81AE11379* ___availableMeshObject0, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessEventData`1<Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessMeshObject>::Initialize(Microsoft.MixedReality.Toolkit.SpatialAwareness.IMixedRealitySpatialAwarenessObserver,System.Int32,T)
inline void MixedRealitySpatialAwarenessEventData_1_Initialize_m739999E8A50EE7375EC939D2513D582FCA8C6B59 (MixedRealitySpatialAwarenessEventData_1_tE46EB2E96DFDDF77196F0A24715743FD22640021* __this, RuntimeObject* ___observer0, int32_t ___id1, SpatialAwarenessMeshObject_t5577B6C05F0A1138C582A8F1B7A717B81AE11379* ___spatialObject2, const RuntimeMethod* method)
{
	((  void (*) (MixedRealitySpatialAwarenessEventData_1_tE46EB2E96DFDDF77196F0A24715743FD22640021*, RuntimeObject*, int32_t, SpatialAwarenessMeshObject_t5577B6C05F0A1138C582A8F1B7A717B81AE11379*, const RuntimeMethod*))MixedRealitySpatialAwarenessEventData_1_Initialize_m25711510DBB2830BC300421A7829F447B6AA780C_gshared)(__this, ___observer0, ___id1, ___spatialObject2, method);
}
// System.Void Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessMeshObject::Cleanup(Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessMeshObject,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpatialAwarenessMeshObject_Cleanup_mDC632004282E0A16833B4565C91FFBC524F08774 (SpatialAwarenessMeshObject_t5577B6C05F0A1138C582A8F1B7A717B81AE11379* ___meshObject0, bool ___destroyGameObject1, bool ___destroyMeshes2, const RuntimeMethod* method) ;
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialObserver::get_ObserverOrigin()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 BaseSpatialObserver_get_ObserverOrigin_m42E71C81EB602959E4AF7C2A4EBB5B54007931B9_inline (BaseSpatialObserver_tFBE4A1B3D5FCCB85BD0DC39709C1FCB7085D797B* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Vector3::op_Equality(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector3_op_Equality_m15951D1B53E3BE36C9D265E229090020FBD72EBB_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___lhs0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rhs1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialObserver::get_ObservationExtents()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 BaseSpatialObserver_get_ObservationExtents_m55A4B302D753B342D0A02E86EFA8FE4FFA5E06DF_inline (BaseSpatialObserver_tFBE4A1B3D5FCCB85BD0DC39709C1FCB7085D797B* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.XR.XRMeshSubsystem::SetBoundingVolume(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRMeshSubsystem_SetBoundingVolume_mC2B3A3A003779328460EF482220BC94C71D40294 (XRMeshSubsystem_tDDC31EC10D4F0517542F9EB296428A0F7EC2C3B2* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___origin0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___extents1, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m8C122B26BC5AA10E2550AECA16E57DAE10F07E30 (String_t* ___format0, RuntimeObject* ___arg01, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_m059825802BB6AF7EA9693FEBEEB0D85F59A3E38E (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.XR.MeshInfo>::GetEnumerator()
inline Enumerator_tEC6D4B278440969CB479B2E8E2B65B2681CA6CE3 List_1_GetEnumerator_m468FAA4C99E6FF3C1756D6BD18FA8C2992355333 (List_1_tEE09D0BD215A518344AF2985829C519B609B7B17* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tEC6D4B278440969CB479B2E8E2B65B2681CA6CE3 (*) (List_1_tEE09D0BD215A518344AF2985829C519B609B7B17*, const RuntimeMethod*))List_1_GetEnumerator_m468FAA4C99E6FF3C1756D6BD18FA8C2992355333_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.XR.MeshInfo>::Dispose()
inline void Enumerator_Dispose_m01B983AEF89C8F17DEFD740A0E013C0CA4AC81C7 (Enumerator_tEC6D4B278440969CB479B2E8E2B65B2681CA6CE3* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tEC6D4B278440969CB479B2E8E2B65B2681CA6CE3*, const RuntimeMethod*))Enumerator_Dispose_m01B983AEF89C8F17DEFD740A0E013C0CA4AC81C7_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<UnityEngine.XR.MeshInfo>::get_Current()
inline MeshInfo_t0BB7A8C2C586FD5EAD40E9E4E1749150915FDFFA Enumerator_get_Current_mC0CE60FBC4FAA79C6D5B26DD275B4DA0DF7265E6_inline (Enumerator_tEC6D4B278440969CB479B2E8E2B65B2681CA6CE3* __this, const RuntimeMethod* method)
{
	return ((  MeshInfo_t0BB7A8C2C586FD5EAD40E9E4E1749150915FDFFA (*) (Enumerator_tEC6D4B278440969CB479B2E8E2B65B2681CA6CE3*, const RuntimeMethod*))Enumerator_get_Current_mC0CE60FBC4FAA79C6D5B26DD275B4DA0DF7265E6_gshared_inline)(__this, method);
}
// UnityEngine.XR.MeshChangeState UnityEngine.XR.MeshInfo::get_ChangeState()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t MeshInfo_get_ChangeState_mF366492B8EF4A9FC8F677E01A6BA4C6C75D3BF68_inline (MeshInfo_t0BB7A8C2C586FD5EAD40E9E4E1749150915FDFFA* __this, const RuntimeMethod* method) ;
// UnityEngine.XR.MeshId UnityEngine.XR.MeshInfo::get_MeshId()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR MeshId_t2CF122567F06D0AA4F80DDA5CB51E8CD3B7EA2AC MeshInfo_get_MeshId_m96D69F5BA60A596D7C9FAAF0931940452E3D8846_inline (MeshInfo_t0BB7A8C2C586FD5EAD40E9E4E1749150915FDFFA* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Queue`1<UnityEngine.XR.MeshId>::Enqueue(T)
inline void Queue_1_Enqueue_mB26DD8D99535CBFC7BBA16CC3DF8CD84C76518F7 (Queue_1_tCD897AEF7F66F282E6B86F78DCC03D0B51FBDF37* __this, MeshId_t2CF122567F06D0AA4F80DDA5CB51E8CD3B7EA2AC ___item0, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_tCD897AEF7F66F282E6B86F78DCC03D0B51FBDF37*, MeshId_t2CF122567F06D0AA4F80DDA5CB51E8CD3B7EA2AC, const RuntimeMethod*))Queue_1_Enqueue_mB26DD8D99535CBFC7BBA16CC3DF8CD84C76518F7_gshared)(__this, ___item0, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.XR.MeshInfo>::MoveNext()
inline bool Enumerator_MoveNext_mAB2B6FFD31DB8BF5C1516AEDD3901373D9CD412C (Enumerator_tEC6D4B278440969CB479B2E8E2B65B2681CA6CE3* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tEC6D4B278440969CB479B2E8E2B65B2681CA6CE3*, const RuntimeMethod*))Enumerator_MoveNext_mAB2B6FFD31DB8BF5C1516AEDD3901373D9CD412C_gshared)(__this, method);
}
// UnityEngine.XR.MeshId UnityEngine.XR.MeshGenerationResult::get_MeshId()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR MeshId_t2CF122567F06D0AA4F80DDA5CB51E8CD3B7EA2AC MeshGenerationResult_get_MeshId_m2260BF3F7EB6ED4F2CF0A8F6BEFDD2CD82B6751D_inline (MeshGenerationResult_tD5A6D639B2CF1A3F855AFB41861DEC48DC0D3A9C* __this, const RuntimeMethod* method) ;
// UnityEngine.XR.MeshGenerationStatus UnityEngine.XR.MeshGenerationResult::get_Status()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t MeshGenerationResult_get_Status_m392754927B1E28DB2E6078A212F8FCC013AC10C0_inline (MeshGenerationResult_tD5A6D639B2CF1A3F855AFB41861DEC48DC0D3A9C* __this, const RuntimeMethod* method) ;
// System.Int32 Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialAwarenessObject::get_Id()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t BaseSpatialAwarenessObject_get_Id_mF22F83B16AF2EB06B5A070F1232BBD4CE92E9882_inline (BaseSpatialAwarenessObject_tD8B917300EF3EB525D1666D65D8A22226F935C55* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessMeshObject>::ContainsKey(TKey)
inline bool Dictionary_2_ContainsKey_mA68F42395FC066EDD30D2DE12D1A82F7E49D393B (Dictionary_2_t0E31064CA2CAEBF8E2C6B82A38A6D432A0F91413* __this, int32_t ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t0E31064CA2CAEBF8E2C6B82A38A6D432A0F91413*, int32_t, const RuntimeMethod*))Dictionary_2_ContainsKey_mED5C451F158CDDD2B3F4B0720CD248DA9DB27B25_gshared)(__this, ___key0, method);
}
// Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessMeshDisplayOptions Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialMeshObserver::get_DisplayOption()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t BaseSpatialMeshObserver_get_DisplayOption_m39E37BB99BACF9803F14B4B39210CA237860B5F3_inline (BaseSpatialMeshObserver_t38C1251909F4D9DB3B4E3DA90CFC32670E925B46* __this, const RuntimeMethod* method) ;
// UnityEngine.Material Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialMeshObserver::get_VisibleMaterial()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* BaseSpatialMeshObserver_get_VisibleMaterial_m7828E04C0F97914DEEBE10F42C1B681BDC2B2390_inline (BaseSpatialMeshObserver_t38C1251909F4D9DB3B4E3DA90CFC32670E925B46* __this, const RuntimeMethod* method) ;
// UnityEngine.Material Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialMeshObserver::get_OcclusionMaterial()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* BaseSpatialMeshObserver_get_OcclusionMaterial_m0536D088856D146291B8805385B620509408CAC4_inline (BaseSpatialMeshObserver_t38C1251909F4D9DB3B4E3DA90CFC32670E925B46* __this, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.Dictionary`2<System.Int32,Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessMeshObject>::get_Item(TKey)
inline SpatialAwarenessMeshObject_t5577B6C05F0A1138C582A8F1B7A717B81AE11379* Dictionary_2_get_Item_m157DEDDB79773C39BD6CB57F5753E5C44DDD473C (Dictionary_2_t0E31064CA2CAEBF8E2C6B82A38A6D432A0F91413* __this, int32_t ___key0, const RuntimeMethod* method)
{
	return ((  SpatialAwarenessMeshObject_t5577B6C05F0A1138C582A8F1B7A717B81AE11379* (*) (Dictionary_2_t0E31064CA2CAEBF8E2C6B82A38A6D432A0F91413*, int32_t, const RuntimeMethod*))Dictionary_2_get_Item_mC3FEA647E750C27367C990777D8890E0E712E514_gshared)(__this, ___key0, method);
}
// UnityEngine.MeshRenderer Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialAwarenessObject::get_Renderer()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* BaseSpatialAwarenessObject_get_Renderer_mF9821B506AE27AADD6536A397AED15C9AA0E93DF_inline (BaseSpatialAwarenessObject_tD8B917300EF3EB525D1666D65D8A22226F935C55* __this, const RuntimeMethod* method) ;
// UnityEngine.Material UnityEngine.Renderer::get_sharedMaterial()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81 (Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Renderer::set_sharedMaterial(UnityEngine.Material)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Renderer_set_sharedMaterial_m5E842F9A06CFB7B77656EB319881CB4B3E8E4288 (Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* __this, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___value0, const RuntimeMethod* method) ;
// System.Boolean Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialMeshObserver::get_RecalculateNormals()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool BaseSpatialMeshObserver_get_RecalculateNormals_m484189F2CAE7A136C69AAE8932524A4B081134B8_inline (BaseSpatialMeshObserver_t38C1251909F4D9DB3B4E3DA90CFC32670E925B46* __this, const RuntimeMethod* method) ;
// UnityEngine.Mesh UnityEngine.MeshFilter::get_sharedMesh()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* MeshFilter_get_sharedMesh_mE4ED3E7E31C1DE5097E4980DA996E620F7D7CB8C (MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Mesh::RecalculateNormals()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_RecalculateNormals_m3AA2788914611444E030CA310E03E3CFE683902B (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Renderer::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Renderer_set_enabled_m015E6D7B825528A31182F267234CC6A925F71DA8 (Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Renderer::get_enabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Renderer_get_enabled_mFDDF363859AEC88105A925FA7EA341C077B09B54 (Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* __this, const RuntimeMethod* method) ;
// UnityEngine.PhysicMaterial Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialMeshObserver::get_PhysicsMaterial()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR PhysicMaterial_t4ECED34E04BB2148333467208361A5FBFDCD7131* BaseSpatialMeshObserver_get_PhysicsMaterial_m52E39C285B9F35E9116B59F69C71AA856D5A572E_inline (BaseSpatialMeshObserver_t38C1251909F4D9DB3B4E3DA90CFC32670E925B46* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Collider::set_material(UnityEngine.PhysicMaterial)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Collider_set_material_mE6FB0AA80863EA6746CD99606C90DB97DBBC4476 (Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* __this, PhysicMaterial_t4ECED34E04BB2148333467208361A5FBFDCD7131* ___value0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessMeshObject>::Add(TKey,TValue)
inline void Dictionary_2_Add_m03479DF66EDA795A65A13DCB19BA8B98C15D78DC (Dictionary_2_t0E31064CA2CAEBF8E2C6B82A38A6D432A0F91413* __this, int32_t ___key0, SpatialAwarenessMeshObject_t5577B6C05F0A1138C582A8F1B7A717B81AE11379* ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t0E31064CA2CAEBF8E2C6B82A38A6D432A0F91413*, int32_t, SpatialAwarenessMeshObject_t5577B6C05F0A1138C582A8F1B7A717B81AE11379*, const RuntimeMethod*))Dictionary_2_Add_mAF1EF7DA16BD70E252EA5C4B0F74DE519A02CBCD_gshared)(__this, ___key0, ___value1, method);
}
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::SetParent(UnityEngine.Transform,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_SetParent_m9BDD7B7476714B2D7919B10BDC22CE75C0A0A195 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___parent0, bool ___worldPositionStays1, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialMeshObserver::Initialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseSpatialMeshObserver_Initialize_m3E36BF701BCBB994EA4A494D7E4FC7E0E9B573BD (BaseSpatialMeshObserver_t38C1251909F4D9DB3B4E3DA90CFC32670E925B46* __this, const RuntimeMethod* method) ;
// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialMeshObserver::get_RuntimeSpatialMeshPrefab()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* BaseSpatialMeshObserver_get_RuntimeSpatialMeshPrefab_m74F19923F50D51C5EC1F947B73311F0B67F60998_inline (BaseSpatialMeshObserver_t38C1251909F4D9DB3B4E3DA90CFC32670E925B46* __this, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialMeshObserver::AddRuntimeSpatialMeshPrefabToHierarchy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseSpatialMeshObserver_AddRuntimeSpatialMeshPrefabToHierarchy_m344D9868965B9F08E71E4EF4BC4F3A296F674F24 (BaseSpatialMeshObserver_t38C1251909F4D9DB3B4E3DA90CFC32670E925B46* __this, const RuntimeMethod* method) ;
// System.Void Unity.Profiling.ProfilerMarker::.ctor(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ProfilerMarker__ctor_mDD68B0A8B71E0301F592AF8891560150E55699C8_inline (ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD* __this, String_t* ___name0, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver::MeshGenerationAction(UnityEngine.XR.MeshGenerationResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GenericXRSDKSpatialMeshObserver_MeshGenerationAction_m70D7E84CB7947DC969C8B12264FF50BA22174643 (GenericXRSDKSpatialMeshObserver_t992F3640352E29648369A4DE1DDAC0FFB6EAC6D1* __this, MeshGenerationResult_tD5A6D639B2CF1A3F855AFB41861DEC48DC0D3A9C ___meshGenerationResult0, const RuntimeMethod* method) ;
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
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::AwaitOnCompleted<Microsoft.MixedReality.Toolkit.Utilities.AwaiterExtensions/SimpleCoroutineAwaiter,Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver/<EnableIfLoaderBecomesActive>d__5>(TAwaiter&,TStateMachine&)
inline void AsyncVoidMethodBuilder_AwaitOnCompleted_TisSimpleCoroutineAwaiter_t9DF0277C21C7F3B9CE7C9563D257D9A4821B4898_TisU3CEnableIfLoaderBecomesActiveU3Ed__5_tCBEE973659246124AEC4D1E7D137AF0A2F3A792C_mE304077E47AB07774FBBC1735435EAFB2BB941B0 (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* __this, SimpleCoroutineAwaiter_t9DF0277C21C7F3B9CE7C9563D257D9A4821B4898** ___awaiter0, U3CEnableIfLoaderBecomesActiveU3Ed__5_tCBEE973659246124AEC4D1E7D137AF0A2F3A792C* ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D*, SimpleCoroutineAwaiter_t9DF0277C21C7F3B9CE7C9563D257D9A4821B4898**, U3CEnableIfLoaderBecomesActiveU3Ed__5_tCBEE973659246124AEC4D1E7D137AF0A2F3A792C*, const RuntimeMethod*))AsyncVoidMethodBuilder_AwaitOnCompleted_TisRuntimeObject_TisU3CEnableIfLoaderBecomesActiveU3Ed__5_tCBEE973659246124AEC4D1E7D137AF0A2F3A792C_mEF5A863A17758518083AAAB27B69CAE54CDDA224_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.AwaiterExtensions/SimpleCoroutineAwaiter::GetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleCoroutineAwaiter_GetResult_m6C94D94C7E24A27F954CF5B2BEC3F2DE4C204A4B (SimpleCoroutineAwaiter_t9DF0277C21C7F3B9CE7C9563D257D9A4821B4898* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::SetException(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_SetException_mD9A6F5D1A99A62AC9DF322901BFDE05193CB177B (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* __this, Exception_t* ___exception0, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::SetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_SetResult_m008490FDF057D5F5D871F537C7A58BE36027F3DC (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* __this, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver/<EnableIfLoaderBecomesActive>d__5::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CEnableIfLoaderBecomesActiveU3Ed__5_MoveNext_m4CF0063FCEA4F11EC5FD47A19A9684C54BB060B0 (U3CEnableIfLoaderBecomesActiveU3Ed__5_tCBEE973659246124AEC4D1E7D137AF0A2F3A792C* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_SetStateMachine_m48640FB81C34D4C2B5A5BBA7F5AE17DC50BF1A25 (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver/<EnableIfLoaderBecomesActive>d__5::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CEnableIfLoaderBecomesActiveU3Ed__5_SetStateMachine_m04E0D3144D43BB41FA61B916B1CCEAF2D22DC07E (U3CEnableIfLoaderBecomesActiveU3Ed__5_tCBEE973659246124AEC4D1E7D137AF0A2F3A792C* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method) ;
// System.String UnityEngine.Object::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* __this, const RuntimeMethod* method) ;
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0 (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.Boundary.BaseBoundarySystem::.ctor(Microsoft.MixedReality.Toolkit.Boundary.MixedRealityBoundaryVisualizationProfile,Microsoft.MixedReality.Toolkit.Utilities.ExperienceScale)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseBoundarySystem__ctor_m453F52B1343D5FDAD333E24887CCB84C23980C0D (BaseBoundarySystem_t17725CB18637398B438C3C2B6E27DA80B4B27413* __this, MixedRealityBoundaryVisualizationProfile_t8696935F2FD43867A7389688367D5F2C41862E81* ___profile0, int32_t ___scale1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::.ctor(System.Int32)
inline void List_1__ctor_m7E6E0C4AE37ACBC1E9BDA9E56A8A7D8ACED3FD33 (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, int32_t ___capacity0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B*, int32_t, const RuntimeMethod*))List_1__ctor_m7E6E0C4AE37ACBC1E9BDA9E56A8A7D8ACED3FD33_gshared)(__this, ___capacity0, method);
}
// UnityEngine.XR.XRInputSubsystem Microsoft.MixedReality.Toolkit.Utilities.XRSubsystemHelpers::get_InputSubsystem()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XRInputSubsystem_tFECE6683FCAEBF05BAD05E5D612690095D8BAD34* XRSubsystemHelpers_get_InputSubsystem_m0D37F2605CA0C34EC0F9A653C51721B6A503D342 (const RuntimeMethod* method) ;
// UnityEngine.XR.TrackingOriginModeFlags UnityEngine.XR.XRInputSubsystem::GetTrackingOriginMode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XRInputSubsystem_GetTrackingOriginMode_mBAFED615F74039A681825BB956AD3C8FA7DE45F2 (XRInputSubsystem_tFECE6683FCAEBF05BAD05E5D612690095D8BAD34* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.XR.XRInputSubsystem::TryGetBoundaryPoints(System.Collections.Generic.List`1<UnityEngine.Vector3>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRInputSubsystem_TryGetBoundaryPoints_m7FEEF524DD8B85151CE8C99378DD690825951C3B (XRInputSubsystem_tFECE6683FCAEBF05BAD05E5D612690095D8BAD34* __this, List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* ___boundaryPoints0, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Vector3>::get_Count()
inline int32_t List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_inline (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B*, const RuntimeMethod*))List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_gshared_inline)(__this, method);
}
// System.Void UnityEngine.SubsystemManager::GetInstances<UnityEngine.XR.XRInputSubsystem>(System.Collections.Generic.List`1<T>)
inline void SubsystemManager_GetInstances_TisXRInputSubsystem_tFECE6683FCAEBF05BAD05E5D612690095D8BAD34_mEF47974C54AA515C3180A0AD3418F3E4037983EE (List_1_t90832B88D7207769654164CC28440CF594CC397D* ___subsystems0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t90832B88D7207769654164CC28440CF594CC397D*, const RuntimeMethod*))SubsystemManager_GetInstances_TisRuntimeObject_m483A6D40AA7F54CA9B8E450BD763C2F4FB515A16_gshared)(___subsystems0, method);
}
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.XR.XRInputSubsystem>::GetEnumerator()
inline Enumerator_t6A30CB77C3B8BF2729352F3BDF7E6FE8BE18B5D5 List_1_GetEnumerator_mD7750792B348A44331FAA1F78D8608F585823A50 (List_1_t90832B88D7207769654164CC28440CF594CC397D* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t6A30CB77C3B8BF2729352F3BDF7E6FE8BE18B5D5 (*) (List_1_t90832B88D7207769654164CC28440CF594CC397D*, const RuntimeMethod*))List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.XR.XRInputSubsystem>::Dispose()
inline void Enumerator_Dispose_m984D421A36C91A4FA622218385CB4346C9411DF3 (Enumerator_t6A30CB77C3B8BF2729352F3BDF7E6FE8BE18B5D5* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t6A30CB77C3B8BF2729352F3BDF7E6FE8BE18B5D5*, const RuntimeMethod*))Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<UnityEngine.XR.XRInputSubsystem>::get_Current()
inline XRInputSubsystem_tFECE6683FCAEBF05BAD05E5D612690095D8BAD34* Enumerator_get_Current_mEBE35085F23AD21C6E36B9EFAED53B414317CE31_inline (Enumerator_t6A30CB77C3B8BF2729352F3BDF7E6FE8BE18B5D5* __this, const RuntimeMethod* method)
{
	return ((  XRInputSubsystem_tFECE6683FCAEBF05BAD05E5D612690095D8BAD34* (*) (Enumerator_t6A30CB77C3B8BF2729352F3BDF7E6FE8BE18B5D5*, const RuntimeMethod*))Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.XR.XRInputSubsystem>::MoveNext()
inline bool Enumerator_MoveNext_m43BF1149292892E0A147B31279D198F4ABA5D952 (Enumerator_t6A30CB77C3B8BF2729352F3BDF7E6FE8BE18B5D5* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t6A30CB77C3B8BF2729352F3BDF7E6FE8BE18B5D5*, const RuntimeMethod*))Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared)(__this, method);
}
// Microsoft.MixedReality.Toolkit.Utilities.ExperienceScale Microsoft.MixedReality.Toolkit.Boundary.BaseBoundarySystem::get_Scale()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t BaseBoundarySystem_get_Scale_mF65C1ED40640B98B1E2EBB3E6FBE749F8885F032_inline (BaseBoundarySystem_t17725CB18637398B438C3C2B6E27DA80B4B27413* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.XR.XRInputSubsystem::TrySetTrackingOriginMode(UnityEngine.XR.TrackingOriginModeFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRInputSubsystem_TrySetTrackingOriginMode_m132C190CEAE4403A381BF1C1C4B5FF349F2A3FA7 (XRInputSubsystem_tFECE6683FCAEBF05BAD05E5D612690095D8BAD34* __this, int32_t ___origin0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.XR.XRInputSubsystem>::.ctor()
inline void List_1__ctor_mC249FC827BC3BE999A938F8B5BD884F8AA0CB7FA (List_1_t90832B88D7207769654164CC28440CF594CC397D* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t90832B88D7207769654164CC28440CF594CC397D*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// UnityEngine.XR.XRMeshSubsystem Microsoft.MixedReality.Toolkit.Utilities.XRSubsystemHelpers::get_MeshSubsystem()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XRMeshSubsystem_tDDC31EC10D4F0517542F9EB296428A0F7EC2C3B2* XRSubsystemHelpers_get_MeshSubsystem_mDBFCB92D6E65A40C7988F016931073C290182B5F (const RuntimeMethod* method) ;
// Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose::get_ZeroIdentity()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR MixedRealityPose_tE60115C271AC50B8C11BA3B404BFCA99C7B2EFF5 MixedRealityPose_get_ZeroIdentity_m163137A55AEF8C8B0163D1F76197C5CCEDD943AD_inline (const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::get_identity()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_get_identity_mB9CAEEB21BC81352CBF32DB9664BFC06FA7EA27B_inline (const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.Input.BaseController::.ctor(Microsoft.MixedReality.Toolkit.TrackingState,Microsoft.MixedReality.Toolkit.Utilities.Handedness,Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource,Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping[],Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSourceDefinition)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseController__ctor_m3EFCFBDA83D596AD950970D621DF5EB8B006F2FE (BaseController_t1635F01D9B5000C345FAF98BAEEA495E97C32274* __this, int32_t ___trackingState0, uint8_t ___controllerHandedness1, RuntimeObject* ___inputSource2, MixedRealityInteractionMappingU5BU5D_t689ED6694F3B293DEDEA6D5371268D36DC67AACE* ___interactions3, RuntimeObject* ___definition4, const RuntimeMethod* method) ;
// System.Boolean Microsoft.MixedReality.Toolkit.Input.BaseController::get_Enabled()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool BaseController_get_Enabled_m2C7625D1C254DBCBE44B4493CE862C4BDADCAE4B_inline (BaseController_t1635F01D9B5000C345FAF98BAEEA495E97C32274* __this, const RuntimeMethod* method) ;
// Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping[] Microsoft.MixedReality.Toolkit.Input.BaseController::get_Interactions()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR MixedRealityInteractionMappingU5BU5D_t689ED6694F3B293DEDEA6D5371268D36DC67AACE* BaseController_get_Interactions_m0FDC472367761C254E7472EC21FE1251E7FA5A74_inline (BaseController_t1635F01D9B5000C345FAF98BAEEA495E97C32274* __this, const RuntimeMethod* method) ;
// System.Type System.Object::GetType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.Input.BaseController::set_Enabled(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BaseController_set_Enabled_m1D7DEE744E2031B9DE7EE85C13F570692D8E1CE1_inline (BaseController_t1635F01D9B5000C345FAF98BAEEA495E97C32274* __this, bool ___value0, const RuntimeMethod* method) ;
// Microsoft.MixedReality.Toolkit.Utilities.AxisType Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::get_AxisType()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t MixedRealityInteractionMapping_get_AxisType_mCD3EA297AACF47BE8DFCCDCEBB0ABD2F5933EA40_inline (MixedRealityInteractionMapping_t10DB776EEA5255542F8F4AF0DC0BC566AF0095E0* __this, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.Input.GenericXRSDKController::UpdateSourceData(UnityEngine.XR.InputDevice)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GenericXRSDKController_UpdateSourceData_m6DA434AA2C31EADCB2AF2D8E6EF086FC081975BC (GenericXRSDKController_tB5136D037E3BD7D743A519016EA2710F7ED980DE* __this, InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD ___inputDevice0, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.Input.GenericXRSDKController::UpdateVelocity(UnityEngine.XR.InputDevice)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GenericXRSDKController_UpdateVelocity_m2C66602D4C9178E95644BC6F42BF2AE8F453AA52 (GenericXRSDKController_tB5136D037E3BD7D743A519016EA2710F7ED980DE* __this, InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD ___inputDevice0, const RuntimeMethod* method) ;
// Microsoft.MixedReality.Toolkit.TrackingState Microsoft.MixedReality.Toolkit.Input.BaseController::get_TrackingState()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t BaseController_get_TrackingState_m96B4ACDD66C2B36616C6912B8A2BB6D4A521F2A9_inline (BaseController_t1635F01D9B5000C345FAF98BAEEA495E97C32274* __this, const RuntimeMethod* method) ;
// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose::op_Inequality(Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose,Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MixedRealityPose_op_Inequality_mB46067EFA5311CB251EF504055B6E138F787CE24 (MixedRealityPose_tE60115C271AC50B8C11BA3B404BFCA99C7B2EFF5 ___left0, MixedRealityPose_tE60115C271AC50B8C11BA3B404BFCA99C7B2EFF5 ___right1, const RuntimeMethod* method) ;
// System.Boolean Microsoft.MixedReality.Toolkit.Input.BaseController::get_IsPositionAvailable()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool BaseController_get_IsPositionAvailable_mBDD6728391E1791E6D984F112D4976601B2A8672_inline (BaseController_t1635F01D9B5000C345FAF98BAEEA495E97C32274* __this, const RuntimeMethod* method) ;
// System.Boolean Microsoft.MixedReality.Toolkit.Input.BaseController::get_IsRotationAvailable()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool BaseController_get_IsRotationAvailable_mC348B5D4A5F1A0A7644921DD496722DED92A57B5_inline (BaseController_t1635F01D9B5000C345FAF98BAEEA495E97C32274* __this, const RuntimeMethod* method) ;
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem Microsoft.MixedReality.Toolkit.CoreServices::get_InputSystem()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CoreServices_get_InputSystem_m47147418643299159BF4DF408F768844FDC33943 (const RuntimeMethod* method) ;
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource Microsoft.MixedReality.Toolkit.Input.BaseController::get_InputSource()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* BaseController_get_InputSource_m8FE11DBDF7B41338ACF8AFF3A0C8FAD83E5D2870_inline (BaseController_t1635F01D9B5000C345FAF98BAEEA495E97C32274* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.XR.InputDevice::TryGetFeatureValue(UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3>,UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InputDevice_TryGetFeatureValue_m472B5ECE996FB7440CACCF1E85722DA4963E3167 (InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* __this, InputFeatureUsage_1_t2E901FA41650EB29399194768CAA93D477CEBC58 ___usage0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___value1, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.Input.BaseController::set_IsPositionAvailable(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BaseController_set_IsPositionAvailable_m961439F02C7A664A0EEE36724AC8FDCE548E8FE9_inline (BaseController_t1635F01D9B5000C345FAF98BAEEA495E97C32274* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.Input.BaseController::set_IsPositionApproximate(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BaseController_set_IsPositionApproximate_mC91DE12C8BCDEA2CDA015ACD4315AFD2BA8AF148_inline (BaseController_t1635F01D9B5000C345FAF98BAEEA495E97C32274* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.XR.InputDevice::TryGetFeatureValue(UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Quaternion>,UnityEngine.Quaternion&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InputDevice_TryGetFeatureValue_m0C1A9761DD0D1C6D1EF4BAB2FAF1BC1A9541BB9F (InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* __this, InputFeatureUsage_1_t8489CEC68B1EC178F2634079A9D7CD9E90D3CF5D ___usage0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* ___value1, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.Input.BaseController::set_IsRotationAvailable(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BaseController_set_IsRotationAvailable_m134E4988FAD7264809AD1A9311413E4183C668D8_inline (BaseController_t1635F01D9B5000C345FAF98BAEEA495E97C32274* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.Input.BaseController::set_TrackingState(Microsoft.MixedReality.Toolkit.TrackingState)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BaseController_set_TrackingState_mF18CD7B38A10B07F9A70E04F23D51C4F342D1E97_inline (BaseController_t1635F01D9B5000C345FAF98BAEEA495E97C32274* __this, int32_t ___value0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.MixedRealityPlayspace::TransformPoint(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 MixedRealityPlayspace_TransformPoint_mF0F8AA899D9BBBA99FC4EBD1B8730F4174D15314 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___localPosition0, const RuntimeMethod* method) ;
// UnityEngine.Quaternion Microsoft.MixedReality.Toolkit.MixedRealityPlayspace::get_Rotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 MixedRealityPlayspace_get_Rotation_mB5DCE6258ADE65064084A771A277AD2CDEC98737 (const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::op_Multiply(UnityEngine.Quaternion,UnityEngine.Quaternion)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_op_Multiply_m5AC8B39C55015059BDD09122E04E47D4BFAB2276_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___lhs0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rhs1, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose::set_Position(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MixedRealityPose_set_Position_m9806379126B288614A363F39705935CA0D86888C_inline (MixedRealityPose_tE60115C271AC50B8C11BA3B404BFCA99C7B2EFF5* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose::set_Rotation(UnityEngine.Quaternion)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MixedRealityPose_set_Rotation_m090951B4A308155032C377FF0AE6BED025C39868_inline (MixedRealityPose_tE60115C271AC50B8C11BA3B404BFCA99C7B2EFF5* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___value0, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.Input.BaseController::set_Velocity(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BaseController_set_Velocity_m382E06808795EC60C83F87D99C2881D39902BD33_inline (BaseController_t1635F01D9B5000C345FAF98BAEEA495E97C32274* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.Input.BaseController::set_AngularVelocity(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BaseController_set_AngularVelocity_m9C82E80627D17EF9743A1102039674F4C3DD302E_inline (BaseController_t1635F01D9B5000C345FAF98BAEEA495E97C32274* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// Microsoft.MixedReality.Toolkit.Input.DeviceInputType Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::get_InputType()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t MixedRealityInteractionMapping_get_InputType_m431C40AD5149D4817FAA46DC0326A481FE348C8D_inline (MixedRealityInteractionMapping_t10DB776EEA5255542F8F4AF0DC0BC566AF0095E0* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.XR.InputDevice::TryGetFeatureValue(UnityEngine.XR.InputFeatureUsage`1<System.Single>,System.Single&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InputDevice_TryGetFeatureValue_m675D52240379FEF80D6499B5031941812FDFD081 (InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* __this, InputFeatureUsage_1_t311D0F42F1A7BF37D3CEAC15A53A1F24165F1848 ___usage0, float* ___value1, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Mathf::Approximately(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Mathf_Approximately_m1C8DD0BB6A2D22A7DCF09AD7F8EE9ABD12D3F620_inline (float ___a0, float ___b1, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::set_BoolData(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityInteractionMapping_set_BoolData_m216D4A26D41B17B7CB6D4C28A30A38D8D6349ADA (MixedRealityInteractionMapping_t10DB776EEA5255542F8F4AF0DC0BC566AF0095E0* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.XR.InputDevice::TryGetFeatureValue(UnityEngine.XR.InputFeatureUsage`1<System.Boolean>,System.Boolean&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InputDevice_TryGetFeatureValue_m24EC3B6C41AE4098269427232AD5F52E786BF884 (InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* __this, InputFeatureUsage_1_tE336B2F0B9AC721519BFA17A08D6353FD5221637 ___usage0, bool* ___value1, const RuntimeMethod* method) ;
// System.Boolean Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::get_Changed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MixedRealityInteractionMapping_get_Changed_mC98FFE1F0E915A3F03110D83000E473E7F05BC53 (MixedRealityInteractionMapping_t10DB776EEA5255542F8F4AF0DC0BC566AF0095E0* __this, const RuntimeMethod* method) ;
// System.Boolean Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::get_BoolData()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool MixedRealityInteractionMapping_get_BoolData_m69F4D6E88FF5DF204C3C38426A2BCD74AB7060CB_inline (MixedRealityInteractionMapping_t10DB776EEA5255542F8F4AF0DC0BC566AF0095E0* __this, const RuntimeMethod* method) ;
// Microsoft.MixedReality.Toolkit.Utilities.Handedness Microsoft.MixedReality.Toolkit.Input.BaseController::get_ControllerHandedness()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint8_t BaseController_get_ControllerHandedness_m739908CFF885DB452AD9A115F569C455BA46A3A1_inline (BaseController_t1635F01D9B5000C345FAF98BAEEA495E97C32274* __this, const RuntimeMethod* method) ;
// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::get_MixedRealityInputAction()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR MixedRealityInputAction_tD3B6E9CE7F20EFC9D066C519FAB848679FC62486 MixedRealityInteractionMapping_get_MixedRealityInputAction_mE813B3EBBA0A10F64E34EA6E5001D140D81141E9_inline (MixedRealityInteractionMapping_t10DB776EEA5255542F8F4AF0DC0BC566AF0095E0* __this, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::set_FloatData(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityInteractionMapping_set_FloatData_m066549958CEC53702E41C3E56E0A6E52056A0E4D (MixedRealityInteractionMapping_t10DB776EEA5255542F8F4AF0DC0BC566AF0095E0* __this, float ___value0, const RuntimeMethod* method) ;
// System.Single Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::get_FloatData()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float MixedRealityInteractionMapping_get_FloatData_m427535AC6E511D46014CADA75E2410FA4CE5C903_inline (MixedRealityInteractionMapping_t10DB776EEA5255542F8F4AF0DC0BC566AF0095E0* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.XR.InputDevice::TryGetFeatureValue(UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector2>,UnityEngine.Vector2&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InputDevice_TryGetFeatureValue_mB2C15D1FC747DA9FB5958FA17E77049886FB3BBA (InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* __this, InputFeatureUsage_1_tEB160A05BCDCCA4F96072CBA0866498D06B9A27C ___usage0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* ___value1, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::set_Vector2Data(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityInteractionMapping_set_Vector2Data_m393F740387B58C5A3BFF6FD7835A6D05F98C7456 (MixedRealityInteractionMapping_t10DB776EEA5255542F8F4AF0DC0BC566AF0095E0* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___value0, const RuntimeMethod* method) ;
// UnityEngine.Vector2 Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::get_Vector2Data()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 MixedRealityInteractionMapping_get_Vector2Data_m56249B37DF9ADDCEA3D131DB2916014185933C40_inline (MixedRealityInteractionMapping_t10DB776EEA5255542F8F4AF0DC0BC566AF0095E0* __this, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::set_PoseData(Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityInteractionMapping_set_PoseData_m2AD97DB2F27527268C645A037E7E358A8CDF3A90 (MixedRealityInteractionMapping_t10DB776EEA5255542F8F4AF0DC0BC566AF0095E0* __this, MixedRealityPose_tE60115C271AC50B8C11BA3B404BFCA99C7B2EFF5 ___value0, const RuntimeMethod* method) ;
// Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::get_PoseData()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR MixedRealityPose_tE60115C271AC50B8C11BA3B404BFCA99C7B2EFF5 MixedRealityInteractionMapping_get_PoseData_m90E4BA2D7413EC29B85B025AEE96C2F7662427B0_inline (MixedRealityInteractionMapping_t10DB776EEA5255542F8F4AF0DC0BC566AF0095E0* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.XR.InputDevice::TryGetHapticCapabilities(UnityEngine.XR.HapticCapabilities&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InputDevice_TryGetHapticCapabilities_mC97EE9A231941988E8B6FA8AF0CB310EFE1B77A3 (InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* __this, HapticCapabilities_t4F7DFEDA7457938D39B877F6A86901F7A6788211* ___capabilities0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.XR.HapticCapabilities::get_supportsImpulse()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HapticCapabilities_get_supportsImpulse_m855193672304BD935913E215B690B14952E0C59C (HapticCapabilities_t4F7DFEDA7457938D39B877F6A86901F7A6788211* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.XR.InputDevice::SendHapticImpulse(System.UInt32,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InputDevice_SendHapticImpulse_m7166A784508F8E0F3AE5BD88863171C7A905BC1B (InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* __this, uint32_t ___channel0, float ___amplitude1, float ___duration2, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.InputDevice::StopHaptics()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputDevice_StopHaptics_m816C765A638F5571FD884AEED49FFA74BD535080 (InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3>::.ctor(System.String)
inline void InputFeatureUsage_1__ctor_m4267CE5D9D4C8FFE0CD48B585565A9DCADFB4FDA (InputFeatureUsage_1_t2E901FA41650EB29399194768CAA93D477CEBC58* __this, String_t* ___usageName0, const RuntimeMethod* method)
{
	((  void (*) (InputFeatureUsage_1_t2E901FA41650EB29399194768CAA93D477CEBC58*, String_t*, const RuntimeMethod*))InputFeatureUsage_1__ctor_m4267CE5D9D4C8FFE0CD48B585565A9DCADFB4FDA_gshared)(__this, ___usageName0, method);
}
// System.Void UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Quaternion>::.ctor(System.String)
inline void InputFeatureUsage_1__ctor_m14B4290F5C2B58B777726B4079A7CC2238176A08 (InputFeatureUsage_1_t8489CEC68B1EC178F2634079A9D7CD9E90D3CF5D* __this, String_t* ___usageName0, const RuntimeMethod* method)
{
	((  void (*) (InputFeatureUsage_1_t8489CEC68B1EC178F2634079A9D7CD9E90D3CF5D*, String_t*, const RuntimeMethod*))InputFeatureUsage_1__ctor_m14B4290F5C2B58B777726B4079A7CC2238176A08_gshared)(__this, ___usageName0, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.XR.InputDevice>::.ctor()
inline void List_1__ctor_mF7ACC153F11A3260DAACDCA56B0A70A4BFA61EA4 (List_1_tB66D13E0427CA48C600AEA4DBA5B173C3734C6CE* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tB66D13E0427CA48C600AEA4DBA5B173C3734C6CE*, const RuntimeMethod*))List_1__ctor_mF7ACC153F11A3260DAACDCA56B0A70A4BFA61EA4_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.XR.InputDeviceCharacteristics>::.ctor()
inline void List_1__ctor_m220F44C9FEF5758AB2481BBB10DF60A9E1CECD55 (List_1_tEA57E67D76DE7CBA7F472F399385BD853B825EB7* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tEA57E67D76DE7CBA7F472F399385BD853B825EB7*, const RuntimeMethod*))List_1__ctor_m4F6D130E835EF60168B463827A919872561B2CD2_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.XR.InputDeviceCharacteristics>::Add(T)
inline void List_1_Add_mC1C4AF7B5A8BED202F4A3E28D1C866A8AB3829AF_inline (List_1_tEA57E67D76DE7CBA7F472F399385BD853B825EB7* __this, uint32_t ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tEA57E67D76DE7CBA7F472F399385BD853B825EB7*, uint32_t, const RuntimeMethod*))List_1_Add_mD6A050A07715B63F87D5836164739C5F9B96AE4E_gshared_inline)(__this, ___item0, method);
}
// System.Void Microsoft.MixedReality.Toolkit.Input.BaseInputDeviceManager::.ctor(Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem,System.String,System.UInt32,Microsoft.MixedReality.Toolkit.BaseMixedRealityProfile)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseInputDeviceManager__ctor_m55B7F2B3368B9234F956C7D94273E8CA0DBC15EC (BaseInputDeviceManager_t1D055DB03D88FA053C00671FEA5040B944CC26BC* __this, RuntimeObject* ___inputSystem0, String_t* ___name1, uint32_t ___priority2, BaseMixedRealityProfile_tB4FDEF58FFD17796C0DB7241630B71CDF38FA1D4* ___profile3, const RuntimeMethod* method) ;
// System.Nullable`1<System.Boolean> Microsoft.MixedReality.Toolkit.XRSDK.LoaderHelpers::IsLoaderActive(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 LoaderHelpers_IsLoaderActive_m0D7D7AB862B4AF044BB290C6623D837B36702138 (String_t* ___loaderName0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.XR.InputDevice>::Clear()
inline void List_1_Clear_m90BE1F9C540971223AE0CE4E333ACFC27CDA0275_inline (List_1_tB66D13E0427CA48C600AEA4DBA5B173C3734C6CE* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tB66D13E0427CA48C600AEA4DBA5B173C3734C6CE*, const RuntimeMethod*))List_1_Clear_m90BE1F9C540971223AE0CE4E333ACFC27CDA0275_gshared_inline)(__this, method);
}
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.XR.InputDeviceCharacteristics>::GetEnumerator()
inline Enumerator_tCEF56BD591D4B69AB5839C3DA4792E9586319BB4 List_1_GetEnumerator_mD3D13B8E78F02CDE054E2FAB1754A9B774430EF6 (List_1_tEA57E67D76DE7CBA7F472F399385BD853B825EB7* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tCEF56BD591D4B69AB5839C3DA4792E9586319BB4 (*) (List_1_tEA57E67D76DE7CBA7F472F399385BD853B825EB7*, const RuntimeMethod*))List_1_GetEnumerator_mBE9E006CAA4A2B822E378029ABB68B93A915748C_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.XR.InputDeviceCharacteristics>::Dispose()
inline void Enumerator_Dispose_mFC63500668995DCBE5E8A5D1FFAE271B6D7FF0C4 (Enumerator_tCEF56BD591D4B69AB5839C3DA4792E9586319BB4* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tCEF56BD591D4B69AB5839C3DA4792E9586319BB4*, const RuntimeMethod*))Enumerator_Dispose_mCBA5AFD2C01298ADFC3B9B6D08C8D1772A0C50B1_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<UnityEngine.XR.InputDeviceCharacteristics>::get_Current()
inline uint32_t Enumerator_get_Current_m7F07A73616FDDCA31B342E8D987723D2CF2DCA9A_inline (Enumerator_tCEF56BD591D4B69AB5839C3DA4792E9586319BB4* __this, const RuntimeMethod* method)
{
	return ((  uint32_t (*) (Enumerator_tCEF56BD591D4B69AB5839C3DA4792E9586319BB4*, const RuntimeMethod*))Enumerator_get_Current_m233DF81DCAAB147DA040D40C2F51F462C087C913_gshared_inline)(__this, method);
}
// System.Void UnityEngine.XR.InputDevices::GetDevicesWithCharacteristics(UnityEngine.XR.InputDeviceCharacteristics,System.Collections.Generic.List`1<UnityEngine.XR.InputDevice>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputDevices_GetDevicesWithCharacteristics_m2F1785592FF66FB69D72FFE1C1B821D4BD64094A (uint32_t ___desiredCharacteristics0, List_1_tB66D13E0427CA48C600AEA4DBA5B173C3734C6CE* ___inputDevices1, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.XR.InputDevice>::GetEnumerator()
inline Enumerator_t2A0DD7C3F41DE0D8FD672B874BDDB066261ECB01 List_1_GetEnumerator_m099EE1B978423A69DAE032836B6FC9A39F7D1EE6 (List_1_tB66D13E0427CA48C600AEA4DBA5B173C3734C6CE* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t2A0DD7C3F41DE0D8FD672B874BDDB066261ECB01 (*) (List_1_tB66D13E0427CA48C600AEA4DBA5B173C3734C6CE*, const RuntimeMethod*))List_1_GetEnumerator_m099EE1B978423A69DAE032836B6FC9A39F7D1EE6_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.XR.InputDevice>::Dispose()
inline void Enumerator_Dispose_m7B899035F29D732606CA6BA2253BEBD41BECD3DC (Enumerator_t2A0DD7C3F41DE0D8FD672B874BDDB066261ECB01* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t2A0DD7C3F41DE0D8FD672B874BDDB066261ECB01*, const RuntimeMethod*))Enumerator_Dispose_m7B899035F29D732606CA6BA2253BEBD41BECD3DC_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<UnityEngine.XR.InputDevice>::get_Current()
inline InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD Enumerator_get_Current_m7D19F033982951230B318A08E829850451459AAE_inline (Enumerator_t2A0DD7C3F41DE0D8FD672B874BDDB066261ECB01* __this, const RuntimeMethod* method)
{
	return ((  InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD (*) (Enumerator_t2A0DD7C3F41DE0D8FD672B874BDDB066261ECB01*, const RuntimeMethod*))Enumerator_get_Current_m7D19F033982951230B318A08E829850451459AAE_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.List`1<UnityEngine.XR.InputDevice>::Contains(T)
inline bool List_1_Contains_m1760B66FE5C90D9CEB94208DE54A4A0F999D5CF3 (List_1_tB66D13E0427CA48C600AEA4DBA5B173C3734C6CE* __this, InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_tB66D13E0427CA48C600AEA4DBA5B173C3734C6CE*, InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD, const RuntimeMethod*))List_1_Contains_m1760B66FE5C90D9CEB94208DE54A4A0F999D5CF3_gshared)(__this, ___item0, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.XR.InputDevice>::Add(T)
inline void List_1_Add_mEECA639E710075828AEBC2083BBCF28184156831_inline (List_1_tB66D13E0427CA48C600AEA4DBA5B173C3734C6CE* __this, InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tB66D13E0427CA48C600AEA4DBA5B173C3734C6CE*, InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD, const RuntimeMethod*))List_1_Add_mEECA639E710075828AEBC2083BBCF28184156831_gshared_inline)(__this, ___item0, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.XR.InputDevice>::MoveNext()
inline bool Enumerator_MoveNext_m5267F7AD322ED3F12B552EC1C62F059932803E2E (Enumerator_t2A0DD7C3F41DE0D8FD672B874BDDB066261ECB01* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t2A0DD7C3F41DE0D8FD672B874BDDB066261ECB01*, const RuntimeMethod*))Enumerator_MoveNext_m5267F7AD322ED3F12B552EC1C62F059932803E2E_gshared)(__this, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.XR.InputDeviceCharacteristics>::MoveNext()
inline bool Enumerator_MoveNext_m90ADBD16F657CC00F3AF082943F46163E000E526 (Enumerator_tCEF56BD591D4B69AB5839C3DA4792E9586319BB4* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tCEF56BD591D4B69AB5839C3DA4792E9586319BB4*, const RuntimeMethod*))Enumerator_MoveNext_m16DB67783D6417C6A2E4D3BEB586D8ED66AEABE2_gshared)(__this, method);
}
// System.Boolean UnityEngine.XR.InputDevice::get_isValid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InputDevice_get_isValid_mA908CF8195CECA44FF457430AFF9198C3FEC0948 (InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1<UnityEngine.XR.InputDevice>::Remove(T)
inline bool List_1_Remove_mD82B3FDD8ADF1CD3F4F6E5E3509D346EE7D03ACA (List_1_tB66D13E0427CA48C600AEA4DBA5B173C3734C6CE* __this, InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_tB66D13E0427CA48C600AEA4DBA5B173C3734C6CE*, InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD, const RuntimeMethod*))List_1_Remove_mD82B3FDD8ADF1CD3F4F6E5E3509D346EE7D03ACA_gshared)(__this, ___item0, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.XR.InputDevice>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
inline void List_1_AddRange_m1B2001B12A2C59D1AD98A08F63DEBAAC92584658 (List_1_tB66D13E0427CA48C600AEA4DBA5B173C3734C6CE* __this, RuntimeObject* ___collection0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tB66D13E0427CA48C600AEA4DBA5B173C3734C6CE*, RuntimeObject*, const RuntimeMethod*))List_1_AddRange_m1B2001B12A2C59D1AD98A08F63DEBAAC92584658_gshared)(__this, ___collection0, method);
}
// System.Collections.ObjectModel.ReadOnlyCollection`1<TElement> Microsoft.MixedReality.Toolkit.CollectionsExtensions::ToReadOnlyCollection<System.Collections.Generic.KeyValuePair`2<UnityEngine.XR.InputDevice,Microsoft.MixedReality.Toolkit.XRSDK.Input.GenericXRSDKController>>(System.Collections.Generic.IEnumerable`1<TElement>)
inline ReadOnlyCollection_1_tEB4BE5E673E69CD3F9C8D17F224E7C888E5BEF5B* CollectionsExtensions_ToReadOnlyCollection_TisKeyValuePair_2_tE710683728FDE8F91586EA8926B0AD74F6E3C4CC_m583E26C7EE9DB00B9DE33BE361E37F10E248170C (RuntimeObject* ___elements0, const RuntimeMethod* method)
{
	return ((  ReadOnlyCollection_1_tEB4BE5E673E69CD3F9C8D17F224E7C888E5BEF5B* (*) (RuntimeObject*, const RuntimeMethod*))CollectionsExtensions_ToReadOnlyCollection_TisKeyValuePair_2_t55A4D6848C39E45165F686753BD37E19B24D994E_m9A866A51DA97178118FCE79499D4D9CCF38B14AC_gshared)(___elements0, method);
}
// System.Collections.Generic.IEnumerator`1<T> System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<UnityEngine.XR.InputDevice,Microsoft.MixedReality.Toolkit.XRSDK.Input.GenericXRSDKController>>::GetEnumerator()
inline RuntimeObject* ReadOnlyCollection_1_GetEnumerator_m90B897A245E57D6B59E625784579E9B49981D6E6 (ReadOnlyCollection_1_tEB4BE5E673E69CD3F9C8D17F224E7C888E5BEF5B* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (ReadOnlyCollection_1_tEB4BE5E673E69CD3F9C8D17F224E7C888E5BEF5B*, const RuntimeMethod*))ReadOnlyCollection_1_GetEnumerator_m6237DDE3EC48DB0D085FB0BC719FAED30B2FEEDA_gshared)(__this, method);
}
// TKey System.Collections.Generic.KeyValuePair`2<UnityEngine.XR.InputDevice,Microsoft.MixedReality.Toolkit.XRSDK.Input.GenericXRSDKController>::get_Key()
inline InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD KeyValuePair_2_get_Key_m292805210F06C8F44A3560FD0FA62B12B20CD0D5_inline (KeyValuePair_2_tE710683728FDE8F91586EA8926B0AD74F6E3C4CC* __this, const RuntimeMethod* method)
{
	return ((  InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD (*) (KeyValuePair_2_tE710683728FDE8F91586EA8926B0AD74F6E3C4CC*, const RuntimeMethod*))KeyValuePair_2_get_Key_m749A3A8F4386C91708C0C4A5A65C3FCBDEFFE58F_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.XR.InputDevice,Microsoft.MixedReality.Toolkit.XRSDK.Input.GenericXRSDKController>::ContainsKey(TKey)
inline bool Dictionary_2_ContainsKey_m49678D0E11E60CE005DD021DECFC686C20B0DA18 (Dictionary_2_t500395CB4236088AFBF004A0D9DD896F9DC12876* __this, InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t500395CB4236088AFBF004A0D9DD896F9DC12876*, InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD, const RuntimeMethod*))Dictionary_2_ContainsKey_mD666285E70258F36167E291D368AF18634778C9A_gshared)(__this, ___key0, method);
}
// TValue System.Collections.Generic.Dictionary`2<UnityEngine.XR.InputDevice,Microsoft.MixedReality.Toolkit.XRSDK.Input.GenericXRSDKController>::get_Item(TKey)
inline GenericXRSDKController_tB5136D037E3BD7D743A519016EA2710F7ED980DE* Dictionary_2_get_Item_m5CC2CE4AA8CC3E60E913BE28E235D43F6FE6E7CD (Dictionary_2_t500395CB4236088AFBF004A0D9DD896F9DC12876* __this, InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD ___key0, const RuntimeMethod* method)
{
	return ((  GenericXRSDKController_tB5136D037E3BD7D743A519016EA2710F7ED980DE* (*) (Dictionary_2_t500395CB4236088AFBF004A0D9DD896F9DC12876*, InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD, const RuntimeMethod*))Dictionary_2_get_Item_mB74E30370773A3CE297583FC6F4F80C31F388CE1_gshared)(__this, ___key0, method);
}
// UnityEngine.XR.InputDeviceCharacteristics UnityEngine.XR.InputDevice::get_characteristics()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t InputDevice_get_characteristics_mEEDC9AB2254C155C47B48848FECF347A87925ADB (InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* __this, const RuntimeMethod* method) ;
// System.Boolean Microsoft.MixedReality.Toolkit.XRSDK.FlagsExtensions::IsMaskSet(UnityEngine.XR.InputDeviceCharacteristics,UnityEngine.XR.InputDeviceCharacteristics)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FlagsExtensions_IsMaskSet_mBBB9BEF18A073269AF4EF9EEFF109D11DAB2ED3A (uint32_t ___a0, uint32_t ___b1, const RuntimeMethod* method) ;
// System.Boolean System.Type::op_Equality(System.Type,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_op_Equality_mE6EDDDC900C50B222CF32BCD2AD027595F2D74B7 (Type_t* ___left0, Type_t* ___right1, const RuntimeMethod* method) ;
// T Microsoft.MixedReality.Toolkit.BaseDataProvider`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem>::get_Service()
inline RuntimeObject* BaseDataProvider_1_get_Service_m886AE537D966101848DD8F8D348F366C71253B3B_inline (BaseDataProvider_1_t1C7B9F1707FEB27659F53B230E0A18282D2F7F20* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (BaseDataProvider_1_t1C7B9F1707FEB27659F53B230E0A18282D2F7F20*, const RuntimeMethod*))BaseDataProvider_1_get_Service_m9D57380441608DEC9ABF2199EA5585FC967E038F_gshared_inline)(__this, method);
}
// System.String System.String::Format(System.String,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m9499958F4B0BB6089C75760AB647AB3CA4D55806 (String_t* ___format0, RuntimeObject* ___arg01, RuntimeObject* ___arg12, const RuntimeMethod* method) ;
// System.Object System.Activator::CreateInstance(System.Type,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Activator_CreateInstance_m978D6F745618B691D632E5D6E4AB8840541FC858 (Type_t* ___type0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0 (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.XR.InputDevice,Microsoft.MixedReality.Toolkit.XRSDK.Input.GenericXRSDKController>::Add(TKey,TValue)
inline void Dictionary_2_Add_m59F621E299B2B5A5E0B1C56AF791A0394BF6479E (Dictionary_2_t500395CB4236088AFBF004A0D9DD896F9DC12876* __this, InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD ___key0, GenericXRSDKController_tB5136D037E3BD7D743A519016EA2710F7ED980DE* ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t500395CB4236088AFBF004A0D9DD896F9DC12876*, InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD, GenericXRSDKController_tB5136D037E3BD7D743A519016EA2710F7ED980DE*, const RuntimeMethod*))Dictionary_2_Add_m5F088D56D3C169743DC181479281FC3B83961F0A_gshared)(__this, ___key0, ___value1, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.XR.InputDevice,Microsoft.MixedReality.Toolkit.XRSDK.Input.GenericXRSDKController>::TryGetValue(TKey,TValue&)
inline bool Dictionary_2_TryGetValue_m25D4D080ED23AA0277B14AEDB82A869D0BD4126C (Dictionary_2_t500395CB4236088AFBF004A0D9DD896F9DC12876* __this, InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD ___key0, GenericXRSDKController_tB5136D037E3BD7D743A519016EA2710F7ED980DE** ___value1, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t500395CB4236088AFBF004A0D9DD896F9DC12876*, InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD, GenericXRSDKController_tB5136D037E3BD7D743A519016EA2710F7ED980DE**, const RuntimeMethod*))Dictionary_2_TryGetValue_m16057058031F71CB4372AEA7E94F959FEE7D5C89_gshared)(__this, ___key0, ___value1, method);
}
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.Input.XRSDKDeviceManager::RemoveControllerFromScene(Microsoft.MixedReality.Toolkit.XRSDK.Input.GenericXRSDKController)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRSDKDeviceManager_RemoveControllerFromScene_m3AAA045ED7378873251EAA7E90741AA42C6A863D (XRSDKDeviceManager_t9F5B097AEC5AA187C3083AE6F40B34E00E1BA583* __this, GenericXRSDKController_tB5136D037E3BD7D743A519016EA2710F7ED980DE* ___controller0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.XR.InputDevice,Microsoft.MixedReality.Toolkit.XRSDK.Input.GenericXRSDKController>::Remove(TKey)
inline bool Dictionary_2_Remove_m3FE21AD019B8AD4E0049631DC383A26CD5F61953 (Dictionary_2_t500395CB4236088AFBF004A0D9DD896F9DC12876* __this, InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t500395CB4236088AFBF004A0D9DD896F9DC12876*, InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD, const RuntimeMethod*))Dictionary_2_Remove_mD1E79CEA754A383395519C9B291D9D6C354CEF75_gshared)(__this, ___key0, method);
}
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityControllerVisualizer Microsoft.MixedReality.Toolkit.Input.BaseController::get_Visualizer()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* BaseController_get_Visualizer_m59C3E1F9279CC6E60482564095AAB8B4E87131E2_inline (BaseController_t1635F01D9B5000C345FAF98BAEEA495E97C32274* __this, const RuntimeMethod* method) ;
// System.Boolean Microsoft.MixedReality.Toolkit.UnityObjectExtensions::IsNull<Microsoft.MixedReality.Toolkit.Input.IMixedRealityControllerVisualizer>(T)
inline bool UnityObjectExtensions_IsNull_TisIMixedRealityControllerVisualizer_t7B6B8F308ED8917976841E02F1525D6B7E478F7B_m1EF432E61E37A9A6C2AE45782C131AD713BE5F4A (RuntimeObject* ___interface0, const RuntimeMethod* method)
{
	return ((  bool (*) (RuntimeObject*, const RuntimeMethod*))UnityObjectExtensions_IsNull_TisRuntimeObject_m6E617DC6DEE232D20C52C72A69E251ABAF82E5C2_gshared)(___interface0, method);
}
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___handle0, const RuntimeMethod* method) ;
// System.String UnityEngine.XR.InputDevice::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* InputDevice_get_name_mAEA08A3755E715697022C54227556428CEF4E1CE (InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219 (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.XR.InputDevice,Microsoft.MixedReality.Toolkit.XRSDK.Input.GenericXRSDKController>::.ctor()
inline void Dictionary_2__ctor_mD430149F4FD7C65B408B1ACAADF63E50832E908D (Dictionary_2_t500395CB4236088AFBF004A0D9DD896F9DC12876* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t500395CB4236088AFBF004A0D9DD896F9DC12876*, const RuntimeMethod*))Dictionary_2__ctor_mF467392EF616E16CFD30145CC8B7D93154DE9129_gshared)(__this, method);
}
// System.Void Unity.Profiling.ProfilerMarker/AutoScope::.ctor(System.IntPtr)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AutoScope__ctor_m7F63A273E382CB6328736B6E7F321DDFA40EA9E3_inline (AutoScope_tFB983697E28885CB10FFDB92D7EFD0615AEF3139* __this, intptr_t ___markerPtr0, const RuntimeMethod* method) ;
// System.Void Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility::EndSample(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProfilerUnsafeUtility_EndSample_mE2F7A0DB4C52105F7CD135ED8816A2BB98E663CC (intptr_t ___markerPtr0, const RuntimeMethod* method) ;
// System.IntPtr Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility::CreateMarker(System.String,System.UInt16,Unity.Profiling.LowLevel.MarkerFlags,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t ProfilerUnsafeUtility_CreateMarker_m27DDE00D41B95677982DBFCE074D45B79E50C7CC (String_t* ___name0, uint16_t ___categoryId1, uint16_t ___flags2, int32_t ___metadataCount3, const RuntimeMethod* method) ;
// System.Void UnityEngine.Quaternion::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Quaternion__ctor_m868FD60AA65DD5A8AC0C5DEB0608381A8D85FCD8_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* __this, float ___x0, float ___y1, float ___z2, float ___w3, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Max(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Max_mA9DCA91E87D6D27034F56ABA52606A9090406016_inline (float ___a0, float ___b1, const RuntimeMethod* method) ;
// System.Void System.Array::Clear(System.Array,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Clear_m48B57EC27CADC3463CA98A33373D557DA587FF1B (RuntimeArray* ___array0, int32_t ___index1, int32_t ___length2, const RuntimeMethod* method) ;
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
// System.Boolean Microsoft.MixedReality.Toolkit.XRSDK.FlagsExtensions::IsMaskSet(UnityEngine.XR.InputDeviceCharacteristics,UnityEngine.XR.InputDeviceCharacteristics)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FlagsExtensions_IsMaskSet_mBBB9BEF18A073269AF4EF9EEFF109D11DAB2ED3A (uint32_t ___a0, uint32_t ___b1, const RuntimeMethod* method) 
{
	{
		// return (a & b) == b;
		uint32_t L_0 = ___a0;
		uint32_t L_1 = ___b1;
		uint32_t L_2 = ___b1;
		return (bool)((((int32_t)((int32_t)((int32_t)L_0&(int32_t)L_1))) == ((int32_t)L_2))? 1 : 0);
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.XRSDK.FlagsExtensions::IsMaskSet(UnityEngine.XR.TrackingOriginModeFlags,UnityEngine.XR.TrackingOriginModeFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FlagsExtensions_IsMaskSet_m1E63F573F7385F7F56EF6B6DF106AFD8CB0C2D6E (int32_t ___a0, int32_t ___b1, const RuntimeMethod* method) 
{
	{
		// return (a & b) == b;
		int32_t L_0 = ___a0;
		int32_t L_1 = ___b1;
		int32_t L_2 = ___b1;
		return (bool)((((int32_t)((int32_t)((int32_t)L_0&(int32_t)L_1))) == ((int32_t)L_2))? 1 : 0);
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
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKCameraSettings::.ctor(Microsoft.MixedReality.Toolkit.CameraSystem.IMixedRealityCameraSystem,System.String,System.UInt32,Microsoft.MixedReality.Toolkit.CameraSystem.BaseCameraSettingsProfile)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GenericXRSDKCameraSettings__ctor_mEB5DBB232A5AB8AC85137F8C4601FC589313A19F (GenericXRSDKCameraSettings_tF9630B1F8A11581A51BEFE2C71E8D444D75052AB* __this, RuntimeObject* ___cameraSystem0, String_t* ___name1, uint32_t ___priority2, BaseCameraSettingsProfile_tDB8373232611B34628752DF4D284B938CFE32799* ___profile3, const RuntimeMethod* method) 
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
// System.Boolean Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKCameraSettings::get_IsOpaque()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GenericXRSDKCameraSettings_get_IsOpaque_m67B764495219E1B8B0EC64BFDF5298D0AD7296CB (GenericXRSDKCameraSettings_tF9630B1F8A11581A51BEFE2C71E8D444D75052AB* __this, const RuntimeMethod* method) 
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
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKCameraSettings::Enable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GenericXRSDKCameraSettings_Enable_m532B451946844E33C6C4B7AD2C13C52B54060A09 (GenericXRSDKCameraSettings_tF9630B1F8A11581A51BEFE2C71E8D444D75052AB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisTrackedPoseDriver_t5A2DEE7957ED76932DB7460383BF09AB1CB4CCCD_mD66D58E941D95457A6D16D8674487EC5982E6293_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisTrackedPoseDriver_t5A2DEE7957ED76932DB7460383BF09AB1CB4CCCD_mE15DFF8FCF4FB3ACD1041664452EA77D2E6E4B63_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// base.Enable();
		BaseService_Enable_mF054160CA265761A1223A3F8CFE50A976C7297E8(__this, NULL);
		// if (!CameraCache.Main.GetComponent<TrackedPoseDriver>())
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_0;
		L_0 = CameraCache_get_Main_m631CABB7F5A697F4C1D76F7CB02D6791C0DDCB9E(NULL);
		NullCheck(L_0);
		TrackedPoseDriver_t5A2DEE7957ED76932DB7460383BF09AB1CB4CCCD* L_1;
		L_1 = Component_GetComponent_TisTrackedPoseDriver_t5A2DEE7957ED76932DB7460383BF09AB1CB4CCCD_mD66D58E941D95457A6D16D8674487EC5982E6293(L_0, Component_GetComponent_TisTrackedPoseDriver_t5A2DEE7957ED76932DB7460383BF09AB1CB4CCCD_mD66D58E941D95457A6D16D8674487EC5982E6293_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_1, NULL);
		if (L_2)
		{
			goto IL_002c;
		}
	}
	{
		// trackedPoseDriver = CameraCache.Main.gameObject.AddComponent<TrackedPoseDriver>();
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_3;
		L_3 = CameraCache_get_Main_m631CABB7F5A697F4C1D76F7CB02D6791C0DDCB9E(NULL);
		NullCheck(L_3);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4;
		L_4 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_3, NULL);
		NullCheck(L_4);
		TrackedPoseDriver_t5A2DEE7957ED76932DB7460383BF09AB1CB4CCCD* L_5;
		L_5 = GameObject_AddComponent_TisTrackedPoseDriver_t5A2DEE7957ED76932DB7460383BF09AB1CB4CCCD_mE15DFF8FCF4FB3ACD1041664452EA77D2E6E4B63(L_4, GameObject_AddComponent_TisTrackedPoseDriver_t5A2DEE7957ED76932DB7460383BF09AB1CB4CCCD_mE15DFF8FCF4FB3ACD1041664452EA77D2E6E4B63_RuntimeMethod_var);
		__this->___trackedPoseDriver_15 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___trackedPoseDriver_15), (void*)L_5);
	}

IL_002c:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKCameraSettings::Disable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GenericXRSDKCameraSettings_Disable_m9BAC8F28B10F1F61A0619F21BD834E7EFDF1E875 (GenericXRSDKCameraSettings_tF9630B1F8A11581A51BEFE2C71E8D444D75052AB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (trackedPoseDriver != null)
		TrackedPoseDriver_t5A2DEE7957ED76932DB7460383BF09AB1CB4CCCD* L_0 = __this->___trackedPoseDriver_15;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0025;
		}
	}
	{
		// UnityObjectExtensions.DestroyObject(trackedPoseDriver);
		TrackedPoseDriver_t5A2DEE7957ED76932DB7460383BF09AB1CB4CCCD* L_2 = __this->___trackedPoseDriver_15;
		UnityObjectExtensions_DestroyObject_mD1D35D04EA32F02BB03FC23B5FE7069D098E8071(L_2, (0.0f), NULL);
		// trackedPoseDriver = null;
		__this->___trackedPoseDriver_15 = (TrackedPoseDriver_t5A2DEE7957ED76932DB7460383BF09AB1CB4CCCD*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___trackedPoseDriver_15), (void*)(TrackedPoseDriver_t5A2DEE7957ED76932DB7460383BF09AB1CB4CCCD*)NULL);
	}

IL_0025:
	{
		// base.Disable();
		BaseService_Disable_m75AA61136BE79E0C8EA4B058D1506882A56683C4(__this, NULL);
		// }
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
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver::.ctor(Microsoft.MixedReality.Toolkit.SpatialAwareness.IMixedRealitySpatialAwarenessSystem,System.String,System.UInt32,Microsoft.MixedReality.Toolkit.BaseMixedRealityProfile)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GenericXRSDKSpatialMeshObserver__ctor_m15C1672A0A9458D66CD08CFC2F19534D891CE799 (GenericXRSDKSpatialMeshObserver_t992F3640352E29648369A4DE1DDAC0FFB6EAC6D1* __this, RuntimeObject* ___spatialAwarenessSystem0, String_t* ___name1, uint32_t ___priority2, BaseMixedRealityProfile_tB4FDEF58FFD17796C0DB7241630B71CDF38FA1D4* ___profile3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseSpatialMeshObserver_t38C1251909F4D9DB3B4E3DA90CFC32670E925B46_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mA2DD2929DEFD0FB15C436C1FEC952D5B092CBA23_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tEE09D0BD215A518344AF2985829C519B609B7B17_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1__ctor_m6AFEAC5BD499D4EDF263A4A4F2B70D51191DDD11_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_tCD897AEF7F66F282E6B86F78DCC03D0B51FBDF37_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private readonly Queue<MeshId> meshWorkQueue = new Queue<MeshId>();
		Queue_1_tCD897AEF7F66F282E6B86F78DCC03D0B51FBDF37* L_0 = (Queue_1_tCD897AEF7F66F282E6B86F78DCC03D0B51FBDF37*)il2cpp_codegen_object_new(Queue_1_tCD897AEF7F66F282E6B86F78DCC03D0B51FBDF37_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Queue_1__ctor_m6AFEAC5BD499D4EDF263A4A4F2B70D51191DDD11(L_0, Queue_1__ctor_m6AFEAC5BD499D4EDF263A4A4F2B70D51191DDD11_RuntimeMethod_var);
		__this->___meshWorkQueue_50 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___meshWorkQueue_50), (void*)L_0);
		// private readonly List<MeshInfo> meshInfos = new List<MeshInfo>();
		List_1_tEE09D0BD215A518344AF2985829C519B609B7B17* L_1 = (List_1_tEE09D0BD215A518344AF2985829C519B609B7B17*)il2cpp_codegen_object_new(List_1_tEE09D0BD215A518344AF2985829C519B609B7B17_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		List_1__ctor_mA2DD2929DEFD0FB15C436C1FEC952D5B092CBA23(L_1, List_1__ctor_mA2DD2929DEFD0FB15C436C1FEC952D5B092CBA23_RuntimeMethod_var);
		__this->___meshInfos_51 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___meshInfos_51), (void*)L_1);
		// private Vector3 oldObserverOrigin = Vector3.zero;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline(NULL);
		__this->___oldObserverOrigin_63 = L_2;
		// private Vector3 oldObservationExtents = Vector3.zero;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline(NULL);
		__this->___oldObservationExtents_64 = L_3;
		// BaseMixedRealityProfile profile = null) : base(spatialAwarenessSystem, name, priority, profile)
		RuntimeObject* L_4 = ___spatialAwarenessSystem0;
		String_t* L_5 = ___name1;
		uint32_t L_6 = ___priority2;
		BaseMixedRealityProfile_tB4FDEF58FFD17796C0DB7241630B71CDF38FA1D4* L_7 = ___profile3;
		il2cpp_codegen_runtime_class_init_inline(BaseSpatialMeshObserver_t38C1251909F4D9DB3B4E3DA90CFC32670E925B46_il2cpp_TypeInfo_var);
		BaseSpatialMeshObserver__ctor_mBAFFCFF0AC0ED0F47E651689346BABE5E9842950(__this, L_4, L_5, L_6, L_7, NULL);
		// { }
		return;
	}
}
// System.Nullable`1<System.Boolean> Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver::get_IsActiveLoader()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 GenericXRSDKSpatialMeshObserver_get_IsActiveLoader_mCED3F78219476585BD0B1E2111FB050061D8C6F2 (GenericXRSDKSpatialMeshObserver_t992F3640352E29648369A4DE1DDAC0FFB6EAC6D1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseDataProvider_1_get_Service_mC6DAD45EF35B39E07955ABECAAA8C7520ABFBE5F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealityDataProviderAccess_GetDataProviders_TisGenericXRSDKSpatialMeshObserver_t992F3640352E29648369A4DE1DDAC0FFB6EAC6D1_m1D4532421F46EA41419AE1CF7A78A8FD8B069020_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealityDataProviderAccess_t48EF38CF377059EBAB2115CA90FE8900FC8558B8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealityServiceState_t516883E6EEF105E9B44DA2124786E742C9C146BE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IReadOnlyCollection_1_t50E090AA25FBA088237B972BABE04926634C5B64_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IReadOnlyList_1_t9F9234BC8DF4C655DBE288E0E99D8F2324A8F244_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_GetValueOrDefault_m86E1210429A6EA0082CC7806DD638E8B4555F148_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_GetValueOrDefault_m8D130DB7F2A1E694736B449176F9C26DB456597B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1__ctor_m141FA88563AC0B5179132FB929EABD02C47FF703_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1__ctor_m4FAA8281CB4EFFD8B817734351FB3AC20A0CD6F5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	int32_t V_2 = 0;
	GenericXRSDKSpatialMeshObserver_t992F3640352E29648369A4DE1DDAC0FFB6EAC6D1* V_3 = NULL;
	Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 V_4;
	memset((&V_4), 0, sizeof(V_4));
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 V_5;
	memset((&V_5), 0, sizeof(V_5));
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 V_6;
	memset((&V_6), 0, sizeof(V_6));
	RuntimeObject* G_B16_0 = NULL;
	int32_t G_B16_1 = 0;
	RuntimeObject* G_B15_0 = NULL;
	int32_t G_B15_1 = 0;
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 G_B17_0;
	memset((&G_B17_0), 0, sizeof(G_B17_0));
	int32_t G_B17_1 = 0;
	{
		// if (XRGeneralSettings.Instance != null
		//     && XRGeneralSettings.Instance.Manager != null
		//     && XRGeneralSettings.Instance.Manager.activeLoader != null)
		il2cpp_codegen_runtime_class_init_inline(XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE_il2cpp_TypeInfo_var);
		XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE* L_0;
		L_0 = XRGeneralSettings_get_Instance_mF17EAF521849B0E007AEE3B009727D3DF9EF110F_inline(NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_00f4;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE_il2cpp_TypeInfo_var);
		XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE* L_2;
		L_2 = XRGeneralSettings_get_Instance_mF17EAF521849B0E007AEE3B009727D3DF9EF110F_inline(NULL);
		NullCheck(L_2);
		XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52* L_3;
		L_3 = XRGeneralSettings_get_Manager_m112FEB4E6DFB7B5F5C4A2DEC4E975CF2EBD51B42_inline(L_2, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_3, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_4)
		{
			goto IL_00f4;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE_il2cpp_TypeInfo_var);
		XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE* L_5;
		L_5 = XRGeneralSettings_get_Instance_mF17EAF521849B0E007AEE3B009727D3DF9EF110F_inline(NULL);
		NullCheck(L_5);
		XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52* L_6;
		L_6 = XRGeneralSettings_get_Manager_m112FEB4E6DFB7B5F5C4A2DEC4E975CF2EBD51B42_inline(L_5, NULL);
		NullCheck(L_6);
		XRLoader_t80B1B1934C40561C5352ABC95D567DC2A7C9C976* L_7;
		L_7 = XRManagerSettings_get_activeLoader_mFB3B679005792D3DF871EAA7120DD86DCA1D5DEA_inline(L_6, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_8;
		L_8 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_7, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_8)
		{
			goto IL_00f4;
		}
	}
	{
		// if ((observersCache == null || observersCache.Count == 0)
		//     && Service is IMixedRealityDataProviderAccess spatialAwarenessDataProviderAccess
		//     && Service is IMixedRealityServiceState spatialAwarenessState
		//     && spatialAwarenessState.IsInitialized)
		RuntimeObject* L_9 = __this->___observersCache_47;
		if (!L_9)
		{
			goto IL_0054;
		}
	}
	{
		RuntimeObject* L_10 = __this->___observersCache_47;
		NullCheck(L_10);
		int32_t L_11;
		L_11 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.IReadOnlyCollection`1<Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver>::get_Count() */, IReadOnlyCollection_1_t50E090AA25FBA088237B972BABE04926634C5B64_il2cpp_TypeInfo_var, L_10);
		if (L_11)
		{
			goto IL_0086;
		}
	}

IL_0054:
	{
		RuntimeObject* L_12;
		L_12 = BaseDataProvider_1_get_Service_mC6DAD45EF35B39E07955ABECAAA8C7520ABFBE5F_inline(__this, BaseDataProvider_1_get_Service_mC6DAD45EF35B39E07955ABECAAA8C7520ABFBE5F_RuntimeMethod_var);
		V_0 = ((RuntimeObject*)IsInst((RuntimeObject*)L_12, IMixedRealityDataProviderAccess_t48EF38CF377059EBAB2115CA90FE8900FC8558B8_il2cpp_TypeInfo_var));
		RuntimeObject* L_13 = V_0;
		if (!L_13)
		{
			goto IL_0086;
		}
	}
	{
		RuntimeObject* L_14;
		L_14 = BaseDataProvider_1_get_Service_mC6DAD45EF35B39E07955ABECAAA8C7520ABFBE5F_inline(__this, BaseDataProvider_1_get_Service_mC6DAD45EF35B39E07955ABECAAA8C7520ABFBE5F_RuntimeMethod_var);
		V_1 = ((RuntimeObject*)IsInst((RuntimeObject*)L_14, IMixedRealityServiceState_t516883E6EEF105E9B44DA2124786E742C9C146BE_il2cpp_TypeInfo_var));
		RuntimeObject* L_15 = V_1;
		if (!L_15)
		{
			goto IL_0086;
		}
	}
	{
		RuntimeObject* L_16 = V_1;
		NullCheck(L_16);
		bool L_17;
		L_17 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean Microsoft.MixedReality.Toolkit.IMixedRealityServiceState::get_IsInitialized() */, IMixedRealityServiceState_t516883E6EEF105E9B44DA2124786E742C9C146BE_il2cpp_TypeInfo_var, L_16);
		if (!L_17)
		{
			goto IL_0086;
		}
	}
	{
		// observersCache = spatialAwarenessDataProviderAccess.GetDataProviders<GenericXRSDKSpatialMeshObserver>();
		RuntimeObject* L_18 = V_0;
		NullCheck(L_18);
		RuntimeObject* L_19;
		L_19 = GenericInterfaceFuncInvoker0< RuntimeObject* >::Invoke(IMixedRealityDataProviderAccess_GetDataProviders_TisGenericXRSDKSpatialMeshObserver_t992F3640352E29648369A4DE1DDAC0FFB6EAC6D1_m1D4532421F46EA41419AE1CF7A78A8FD8B069020_RuntimeMethod_var, L_18);
		__this->___observersCache_47 = L_19;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___observersCache_47), (void*)L_19);
	}

IL_0086:
	{
		// for (int i = 0; i < observersCache?.Count; i++)
		V_2 = 0;
		goto IL_00b7;
	}

IL_008a:
	{
		// GenericXRSDKSpatialMeshObserver observer = observersCache[i];
		RuntimeObject* L_20 = __this->___observersCache_47;
		int32_t L_21 = V_2;
		NullCheck(L_20);
		GenericXRSDKSpatialMeshObserver_t992F3640352E29648369A4DE1DDAC0FFB6EAC6D1* L_22;
		L_22 = InterfaceFuncInvoker1< GenericXRSDKSpatialMeshObserver_t992F3640352E29648369A4DE1DDAC0FFB6EAC6D1*, int32_t >::Invoke(0 /* T System.Collections.Generic.IReadOnlyList`1<Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver>::get_Item(System.Int32) */, IReadOnlyList_1_t9F9234BC8DF4C655DBE288E0E99D8F2324A8F244_il2cpp_TypeInfo_var, L_20, L_21);
		V_3 = L_22;
		// if (observer != this && (observer.IsActiveLoader ?? false))
		GenericXRSDKSpatialMeshObserver_t992F3640352E29648369A4DE1DDAC0FFB6EAC6D1* L_23 = V_3;
		if ((((RuntimeObject*)(GenericXRSDKSpatialMeshObserver_t992F3640352E29648369A4DE1DDAC0FFB6EAC6D1*)L_23) == ((RuntimeObject*)(GenericXRSDKSpatialMeshObserver_t992F3640352E29648369A4DE1DDAC0FFB6EAC6D1*)__this)))
		{
			goto IL_00b3;
		}
	}
	{
		GenericXRSDKSpatialMeshObserver_t992F3640352E29648369A4DE1DDAC0FFB6EAC6D1* L_24 = V_3;
		NullCheck(L_24);
		Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 L_25;
		L_25 = VirtualFuncInvoker0< Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 >::Invoke(91 /* System.Nullable`1<System.Boolean> Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver::get_IsActiveLoader() */, L_24);
		V_4 = L_25;
		bool L_26;
		L_26 = Nullable_1_GetValueOrDefault_m86E1210429A6EA0082CC7806DD638E8B4555F148_inline((&V_4), Nullable_1_GetValueOrDefault_m86E1210429A6EA0082CC7806DD638E8B4555F148_RuntimeMethod_var);
		if (!L_26)
		{
			goto IL_00b3;
		}
	}
	{
		// return false;
		Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 L_27;
		memset((&L_27), 0, sizeof(L_27));
		Nullable_1__ctor_m4FAA8281CB4EFFD8B817734351FB3AC20A0CD6F5((&L_27), (bool)0, /*hidden argument*/Nullable_1__ctor_m4FAA8281CB4EFFD8B817734351FB3AC20A0CD6F5_RuntimeMethod_var);
		return L_27;
	}

IL_00b3:
	{
		// for (int i = 0; i < observersCache?.Count; i++)
		int32_t L_28 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_28, 1));
	}

IL_00b7:
	{
		// for (int i = 0; i < observersCache?.Count; i++)
		int32_t L_29 = V_2;
		RuntimeObject* L_30 = __this->___observersCache_47;
		RuntimeObject* L_31 = L_30;
		G_B15_0 = L_31;
		G_B15_1 = L_29;
		if (L_31)
		{
			G_B16_0 = L_31;
			G_B16_1 = L_29;
			goto IL_00ce;
		}
	}
	{
		il2cpp_codegen_initobj((&V_6), sizeof(Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28));
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 L_32 = V_6;
		G_B17_0 = L_32;
		G_B17_1 = G_B15_1;
		goto IL_00d8;
	}

IL_00ce:
	{
		NullCheck(G_B16_0);
		int32_t L_33;
		L_33 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.IReadOnlyCollection`1<Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver>::get_Count() */, IReadOnlyCollection_1_t50E090AA25FBA088237B972BABE04926634C5B64_il2cpp_TypeInfo_var, G_B16_0);
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 L_34;
		memset((&L_34), 0, sizeof(L_34));
		Nullable_1__ctor_m141FA88563AC0B5179132FB929EABD02C47FF703((&L_34), L_33, /*hidden argument*/Nullable_1__ctor_m141FA88563AC0B5179132FB929EABD02C47FF703_RuntimeMethod_var);
		G_B17_0 = L_34;
		G_B17_1 = G_B16_1;
	}

IL_00d8:
	{
		V_5 = G_B17_0;
		int32_t L_35;
		L_35 = Nullable_1_GetValueOrDefault_m8D130DB7F2A1E694736B449176F9C26DB456597B_inline((&V_5), Nullable_1_GetValueOrDefault_m8D130DB7F2A1E694736B449176F9C26DB456597B_RuntimeMethod_var);
		bool L_36;
		L_36 = Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_inline((&V_5), Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_RuntimeMethod_var);
		if (((int32_t)(((((int32_t)G_B17_1) < ((int32_t)L_35))? 1 : 0)&(int32_t)L_36)))
		{
			goto IL_008a;
		}
	}
	{
		// return true;
		Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 L_37;
		memset((&L_37), 0, sizeof(L_37));
		Nullable_1__ctor_m4FAA8281CB4EFFD8B817734351FB3AC20A0CD6F5((&L_37), (bool)1, /*hidden argument*/Nullable_1__ctor_m4FAA8281CB4EFFD8B817734351FB3AC20A0CD6F5_RuntimeMethod_var);
		return L_37;
	}

IL_00f4:
	{
		// return null;
		il2cpp_codegen_initobj((&V_4), sizeof(Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01));
		Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 L_38 = V_4;
		return L_38;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver::Enable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GenericXRSDKSpatialMeshObserver_Enable_m700352330A2A268D2BF685C4F15F3A27B19B01A0 (GenericXRSDKSpatialMeshObserver_t992F3640352E29648369A4DE1DDAC0FFB6EAC6D1* __this, const RuntimeMethod* method) 
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
		L_0 = VirtualFuncInvoker0< Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 >::Invoke(91 /* System.Nullable`1<System.Boolean> Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver::get_IsActiveLoader() */, __this);
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
		GenericXRSDKSpatialMeshObserver_EnableIfLoaderBecomesActive_m6F1C7D9A26189A4F56E99BA1EC56696579333CF7(__this, NULL);
		// return;
		return;
	}

IL_001e:
	{
		// else if (!IsActiveLoader.Value)
		Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 L_2;
		L_2 = VirtualFuncInvoker0< Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 >::Invoke(91 /* System.Nullable`1<System.Boolean> Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver::get_IsActiveLoader() */, __this);
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
		// ConfigureObserverVolume();
		VirtualActionInvoker0::Invoke(92 /* System.Void Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver::ConfigureObserverVolume() */, __this);
		// base.Enable();
		BaseSpatialObserver_Enable_mB59B3052CA05FCB76089CA329B9B15B6519E4500(__this, NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver::EnableIfLoaderBecomesActive()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GenericXRSDKSpatialMeshObserver_EnableIfLoaderBecomesActive_m6F1C7D9A26189A4F56E99BA1EC56696579333CF7 (GenericXRSDKSpatialMeshObserver_t992F3640352E29648369A4DE1DDAC0FFB6EAC6D1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncVoidMethodBuilder_Start_TisU3CEnableIfLoaderBecomesActiveU3Ed__5_tCBEE973659246124AEC4D1E7D137AF0A2F3A792C_m779BDDD2B166A44EB78961ABBE4FADA6A9D1DFD2_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CEnableIfLoaderBecomesActiveU3Ed__5_tCBEE973659246124AEC4D1E7D137AF0A2F3A792C V_0;
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
		AsyncVoidMethodBuilder_Start_TisU3CEnableIfLoaderBecomesActiveU3Ed__5_tCBEE973659246124AEC4D1E7D137AF0A2F3A792C_m779BDDD2B166A44EB78961ABBE4FADA6A9D1DFD2(L_1, (&V_0), AsyncVoidMethodBuilder_Start_TisU3CEnableIfLoaderBecomesActiveU3Ed__5_tCBEE973659246124AEC4D1E7D137AF0A2F3A792C_m779BDDD2B166A44EB78961ABBE4FADA6A9D1DFD2_RuntimeMethod_var);
		return;
	}
}
// UnityEngine.XR.XRMeshSubsystem Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver::get_MeshSubsystem()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XRMeshSubsystem_tDDC31EC10D4F0517542F9EB296428A0F7EC2C3B2* GenericXRSDKSpatialMeshObserver_get_MeshSubsystem_m6AC67F5232D1623CB2B9FBC1F6EFA832A9D99B22 (GenericXRSDKSpatialMeshObserver_t992F3640352E29648369A4DE1DDAC0FFB6EAC6D1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_GetValueOrDefault_m86E1210429A6EA0082CC7806DD638E8B4555F148_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRLoader_GetLoadedSubsystem_TisXRMeshSubsystem_tDDC31EC10D4F0517542F9EB296428A0F7EC2C3B2_m081FBFB83316621ED3D69C9D27376B59CB646519_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 V_0;
	memset((&V_0), 0, sizeof(V_0));
	XRMeshSubsystem_tDDC31EC10D4F0517542F9EB296428A0F7EC2C3B2* V_1 = NULL;
	GenericXRSDKSpatialMeshObserver_t992F3640352E29648369A4DE1DDAC0FFB6EAC6D1* G_B4_0 = NULL;
	GenericXRSDKSpatialMeshObserver_t992F3640352E29648369A4DE1DDAC0FFB6EAC6D1* G_B3_0 = NULL;
	XRMeshSubsystem_tDDC31EC10D4F0517542F9EB296428A0F7EC2C3B2* G_B5_0 = NULL;
	GenericXRSDKSpatialMeshObserver_t992F3640352E29648369A4DE1DDAC0FFB6EAC6D1* G_B5_1 = NULL;
	{
		//         private XRMeshSubsystem MeshSubsystem => meshSubsystem != null && meshSubsystem.running
		//             ? meshSubsystem :
		// #if XR_MANAGEMENT_ENABLED
		//             meshSubsystem = IsActiveLoader ?? false
		//                 ? XRGeneralSettings.Instance.Manager.activeLoader.GetLoadedSubsystem<XRMeshSubsystem>()
		//                 : null;
		XRMeshSubsystem_tDDC31EC10D4F0517542F9EB296428A0F7EC2C3B2* L_0 = __this->___meshSubsystem_48;
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		XRMeshSubsystem_tDDC31EC10D4F0517542F9EB296428A0F7EC2C3B2* L_1 = __this->___meshSubsystem_48;
		NullCheck(L_1);
		bool L_2;
		L_2 = IntegratedSubsystem_get_running_m18AA0D7AD1CB593DC9EE5F3DC79643717509D6E8(L_1, NULL);
		if (L_2)
		{
			goto IL_0046;
		}
	}

IL_0015:
	{
		Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 L_3;
		L_3 = VirtualFuncInvoker0< Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 >::Invoke(91 /* System.Nullable`1<System.Boolean> Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver::get_IsActiveLoader() */, __this);
		V_0 = L_3;
		bool L_4;
		L_4 = Nullable_1_GetValueOrDefault_m86E1210429A6EA0082CC7806DD638E8B4555F148_inline((&V_0), Nullable_1_GetValueOrDefault_m86E1210429A6EA0082CC7806DD638E8B4555F148_RuntimeMethod_var);
		G_B3_0 = __this;
		if (L_4)
		{
			G_B4_0 = __this;
			goto IL_0029;
		}
	}
	{
		G_B5_0 = ((XRMeshSubsystem_tDDC31EC10D4F0517542F9EB296428A0F7EC2C3B2*)(NULL));
		G_B5_1 = G_B3_0;
		goto IL_003d;
	}

IL_0029:
	{
		il2cpp_codegen_runtime_class_init_inline(XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE_il2cpp_TypeInfo_var);
		XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE* L_5;
		L_5 = XRGeneralSettings_get_Instance_mF17EAF521849B0E007AEE3B009727D3DF9EF110F_inline(NULL);
		NullCheck(L_5);
		XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52* L_6;
		L_6 = XRGeneralSettings_get_Manager_m112FEB4E6DFB7B5F5C4A2DEC4E975CF2EBD51B42_inline(L_5, NULL);
		NullCheck(L_6);
		XRLoader_t80B1B1934C40561C5352ABC95D567DC2A7C9C976* L_7;
		L_7 = XRManagerSettings_get_activeLoader_mFB3B679005792D3DF871EAA7120DD86DCA1D5DEA_inline(L_6, NULL);
		NullCheck(L_7);
		XRMeshSubsystem_tDDC31EC10D4F0517542F9EB296428A0F7EC2C3B2* L_8;
		L_8 = GenericVirtualFuncInvoker0< XRMeshSubsystem_tDDC31EC10D4F0517542F9EB296428A0F7EC2C3B2* >::Invoke(XRLoader_GetLoadedSubsystem_TisXRMeshSubsystem_tDDC31EC10D4F0517542F9EB296428A0F7EC2C3B2_m081FBFB83316621ED3D69C9D27376B59CB646519_RuntimeMethod_var, L_7);
		G_B5_0 = L_8;
		G_B5_1 = G_B4_0;
	}

IL_003d:
	{
		XRMeshSubsystem_tDDC31EC10D4F0517542F9EB296428A0F7EC2C3B2* L_9 = G_B5_0;
		V_1 = L_9;
		NullCheck(G_B5_1);
		G_B5_1->___meshSubsystem_48 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&G_B5_1->___meshSubsystem_48), (void*)L_9);
		XRMeshSubsystem_tDDC31EC10D4F0517542F9EB296428A0F7EC2C3B2* L_10 = V_1;
		return L_10;
	}

IL_0046:
	{
		XRMeshSubsystem_tDDC31EC10D4F0517542F9EB296428A0F7EC2C3B2* L_11 = __this->___meshSubsystem_48;
		return L_11;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver::CleanupObserver()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GenericXRSDKSpatialMeshObserver_CleanupObserver_m263329DA1B59303FE1E646FEABAFF01F45BD2B73 (GenericXRSDKSpatialMeshObserver_t992F3640352E29648369A4DE1DDAC0FFB6EAC6D1* __this, const RuntimeMethod* method) 
{
	{
		// if (IsRunning)
		bool L_0;
		L_0 = BaseSpatialObserver_get_IsRunning_mB13D2B9872E0700341E22CA4FBDA836108145134_inline(__this, NULL);
		if (!L_0)
		{
			goto IL_000e;
		}
	}
	{
		// Suspend();
		VirtualActionInvoker0::Invoke(64 /* System.Void Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialObserver::Suspend() */, __this);
	}

IL_000e:
	{
		// }
		return;
	}
}
// System.Int32 Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver::LookupTriangleDensity(Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessMeshLevelOfDetail)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GenericXRSDKSpatialMeshObserver_LookupTriangleDensity_m08E9418AACEA1ECA50416B30FC1D27DD52869704 (GenericXRSDKSpatialMeshObserver_t992F3640352E29648369A4DE1DDAC0FFB6EAC6D1* __this, int32_t ___levelOfDetail0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// int level = (int)levelOfDetail;
		int32_t L_0 = ___levelOfDetail0;
		V_0 = L_0;
		// if (MeshSubsystem != null)
		XRMeshSubsystem_tDDC31EC10D4F0517542F9EB296428A0F7EC2C3B2* L_1;
		L_1 = GenericXRSDKSpatialMeshObserver_get_MeshSubsystem_m6AC67F5232D1623CB2B9FBC1F6EFA832A9D99B22(__this, NULL);
		if (!L_1)
		{
			goto IL_0037;
		}
	}
	{
		// if (levelOfDetail == SpatialAwarenessMeshLevelOfDetail.Unlimited)
		int32_t L_2 = ___levelOfDetail0;
		if ((!(((uint32_t)L_2) == ((uint32_t)((int32_t)255)))))
		{
			goto IL_0024;
		}
	}
	{
		// MeshSubsystem.meshDensity = 1;
		XRMeshSubsystem_tDDC31EC10D4F0517542F9EB296428A0F7EC2C3B2* L_3;
		L_3 = GenericXRSDKSpatialMeshObserver_get_MeshSubsystem_m6AC67F5232D1623CB2B9FBC1F6EFA832A9D99B22(__this, NULL);
		NullCheck(L_3);
		XRMeshSubsystem_set_meshDensity_mB3B23768DE704088634FCBEE3F21B9E0C869BE31(L_3, (1.0f), NULL);
		goto IL_0037;
	}

IL_0024:
	{
		// MeshSubsystem.meshDensity = level / (float)SpatialAwarenessMeshLevelOfDetail.Fine; // For now, map Coarse to 0.0 and Fine to 1.0
		XRMeshSubsystem_tDDC31EC10D4F0517542F9EB296428A0F7EC2C3B2* L_4;
		L_4 = GenericXRSDKSpatialMeshObserver_get_MeshSubsystem_m6AC67F5232D1623CB2B9FBC1F6EFA832A9D99B22(__this, NULL);
		int32_t L_5 = V_0;
		NullCheck(L_4);
		XRMeshSubsystem_set_meshDensity_mB3B23768DE704088634FCBEE3F21B9E0C869BE31(L_4, ((float)(((float)L_5)/(2.0f))), NULL);
	}

IL_0037:
	{
		// return level;
		int32_t L_6 = V_0;
		return L_6;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver::CheckCapability(Microsoft.MixedReality.Toolkit.MixedRealityCapability)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GenericXRSDKSpatialMeshObserver_CheckCapability_m88D657B5199FFE0290C050F2AC8DDBE6B295361F (GenericXRSDKSpatialMeshObserver_t992F3640352E29648369A4DE1DDAC0FFB6EAC6D1* __this, int32_t ___capability0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m277DBA8B46097B1BA355F0215F73E0DA16803756_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mD4911FFC74AE9258C87DB5BE000B1CF1698A8D7D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tA9571B7847EA1D73E7B431473A8F7D19B9786E22_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_GetValueOrDefault_m86E1210429A6EA0082CC7806DD638E8B4555F148_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemManager_GetSubsystemDescriptors_TisXRMeshSubsystemDescriptor_tD9814661B8661C69D5A0DBB76C9AF61778B9CEC1_m8261BB26A142C1942041262282FB3885674C0348_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemManager_t9A7261E4D0B53B996F04B8707D8E1C33AB65E824_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (capability != MixedRealityCapability.SpatialAwarenessMesh)
		int32_t L_0 = ___capability0;
		if ((((int32_t)L_0) == ((int32_t)6)))
		{
			goto IL_0006;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_0006:
	{
		// var descriptors = new List<XRMeshSubsystemDescriptor>();
		List_1_tA9571B7847EA1D73E7B431473A8F7D19B9786E22* L_1 = (List_1_tA9571B7847EA1D73E7B431473A8F7D19B9786E22*)il2cpp_codegen_object_new(List_1_tA9571B7847EA1D73E7B431473A8F7D19B9786E22_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		List_1__ctor_m277DBA8B46097B1BA355F0215F73E0DA16803756(L_1, List_1__ctor_m277DBA8B46097B1BA355F0215F73E0DA16803756_RuntimeMethod_var);
		// SubsystemManager.GetSubsystemDescriptors(descriptors);
		List_1_tA9571B7847EA1D73E7B431473A8F7D19B9786E22* L_2 = L_1;
		il2cpp_codegen_runtime_class_init_inline(SubsystemManager_t9A7261E4D0B53B996F04B8707D8E1C33AB65E824_il2cpp_TypeInfo_var);
		SubsystemManager_GetSubsystemDescriptors_TisXRMeshSubsystemDescriptor_tD9814661B8661C69D5A0DBB76C9AF61778B9CEC1_m8261BB26A142C1942041262282FB3885674C0348(L_2, SubsystemManager_GetSubsystemDescriptors_TisXRMeshSubsystemDescriptor_tD9814661B8661C69D5A0DBB76C9AF61778B9CEC1_m8261BB26A142C1942041262282FB3885674C0348_RuntimeMethod_var);
		// return descriptors.Count > 0 && (IsActiveLoader ?? false);
		NullCheck(L_2);
		int32_t L_3;
		L_3 = List_1_get_Count_mD4911FFC74AE9258C87DB5BE000B1CF1698A8D7D_inline(L_2, List_1_get_Count_mD4911FFC74AE9258C87DB5BE000B1CF1698A8D7D_RuntimeMethod_var);
		if ((((int32_t)L_3) <= ((int32_t)0)))
		{
			goto IL_0028;
		}
	}
	{
		Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 L_4;
		L_4 = VirtualFuncInvoker0< Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 >::Invoke(91 /* System.Nullable`1<System.Boolean> Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver::get_IsActiveLoader() */, __this);
		V_0 = L_4;
		bool L_5;
		L_5 = Nullable_1_GetValueOrDefault_m86E1210429A6EA0082CC7806DD638E8B4555F148_inline((&V_0), Nullable_1_GetValueOrDefault_m86E1210429A6EA0082CC7806DD638E8B4555F148_RuntimeMethod_var);
		return L_5;
	}

IL_0028:
	{
		return (bool)0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GenericXRSDKSpatialMeshObserver_Update_mB9A75C5C7DF77C7837A7B8919430CE86B86ADD2C (GenericXRSDKSpatialMeshObserver_t992F3640352E29648369A4DE1DDAC0FFB6EAC6D1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GenericXRSDKSpatialMeshObserver_t992F3640352E29648369A4DE1DDAC0FFB6EAC6D1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	AutoScope_tFB983697E28885CB10FFDB92D7EFD0615AEF3139 V_0;
	memset((&V_0), 0, sizeof(V_0));
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// using (UpdatePerfMarker.Auto())
		il2cpp_codegen_runtime_class_init_inline(GenericXRSDKSpatialMeshObserver_t992F3640352E29648369A4DE1DDAC0FFB6EAC6D1_il2cpp_TypeInfo_var);
		ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD L_0 = ((GenericXRSDKSpatialMeshObserver_t992F3640352E29648369A4DE1DDAC0FFB6EAC6D1_StaticFields*)il2cpp_codegen_static_fields_for(GenericXRSDKSpatialMeshObserver_t992F3640352E29648369A4DE1DDAC0FFB6EAC6D1_il2cpp_TypeInfo_var))->___UpdatePerfMarker_49;
		V_1 = L_0;
		AutoScope_tFB983697E28885CB10FFDB92D7EFD0615AEF3139 L_1;
		L_1 = ProfilerMarker_Auto_m133FA724EB95D16187B37D2C8A501D7E989B1F8D_inline((&V_1), NULL);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0026:
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
					goto IL_0018_1;
				}
			}
			{
				// return;
				goto IL_0034;
			}

IL_0018_1:
			{
				// base.Update();
				BaseService_Update_m07A22E1552ABDCD9AD86737D12D43DA27915370D(__this, NULL);
				// UpdateObserver();
				GenericXRSDKSpatialMeshObserver_UpdateObserver_mA749C232404C327041D88E4901FF0CD7C3019676(__this, NULL);
				// }
				goto IL_0034;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0034:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver::Resume()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GenericXRSDKSpatialMeshObserver_Resume_m63C96D3FF872DFDDE484BA5CADED98A36400C594 (GenericXRSDKSpatialMeshObserver_t992F3640352E29648369A4DE1DDAC0FFB6EAC6D1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GenericXRSDKSpatialMeshObserver_t992F3640352E29648369A4DE1DDAC0FFB6EAC6D1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB27FB187D8E7A9DA09A09AEC832C76EB7B2F40F8);
		s_Il2CppMethodInitialized = true;
	}
	AutoScope_tFB983697E28885CB10FFDB92D7EFD0615AEF3139 V_0;
	memset((&V_0), 0, sizeof(V_0));
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// if (IsRunning)
		bool L_0;
		L_0 = BaseSpatialObserver_get_IsRunning_mB13D2B9872E0700341E22CA4FBDA836108145134_inline(__this, NULL);
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		// Debug.LogWarning("The XR SDK spatial observer is currently running.");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_mEF15C6B17CE4E1FA7E379CDB82CE40FCD89A3F28(_stringLiteralB27FB187D8E7A9DA09A09AEC832C76EB7B2F40F8, NULL);
		// return;
		return;
	}

IL_0013:
	{
		// using (ResumePerfMarker.Auto())
		il2cpp_codegen_runtime_class_init_inline(GenericXRSDKSpatialMeshObserver_t992F3640352E29648369A4DE1DDAC0FFB6EAC6D1_il2cpp_TypeInfo_var);
		ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD L_1 = ((GenericXRSDKSpatialMeshObserver_t992F3640352E29648369A4DE1DDAC0FFB6EAC6D1_StaticFields*)il2cpp_codegen_static_fields_for(GenericXRSDKSpatialMeshObserver_t992F3640352E29648369A4DE1DDAC0FFB6EAC6D1_il2cpp_TypeInfo_var))->___ResumePerfMarker_55;
		V_1 = L_1;
		AutoScope_tFB983697E28885CB10FFDB92D7EFD0615AEF3139 L_2;
		L_2 = ProfilerMarker_Auto_m133FA724EB95D16187B37D2C8A501D7E989B1F8D_inline((&V_1), NULL);
		V_0 = L_2;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0055:
			{// begin finally (depth: 1)
				AutoScope_Dispose_mED763F3F51261EF8FB79DB32CD06E0A3F6C40481_inline((&V_0), NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				// if (MeshSubsystem != null && !MeshSubsystem.running)
				XRMeshSubsystem_tDDC31EC10D4F0517542F9EB296428A0F7EC2C3B2* L_3;
				L_3 = GenericXRSDKSpatialMeshObserver_get_MeshSubsystem_m6AC67F5232D1623CB2B9FBC1F6EFA832A9D99B22(__this, NULL);
				if (!L_3)
				{
					goto IL_0041_1;
				}
			}
			{
				XRMeshSubsystem_tDDC31EC10D4F0517542F9EB296428A0F7EC2C3B2* L_4;
				L_4 = GenericXRSDKSpatialMeshObserver_get_MeshSubsystem_m6AC67F5232D1623CB2B9FBC1F6EFA832A9D99B22(__this, NULL);
				NullCheck(L_4);
				bool L_5;
				L_5 = IntegratedSubsystem_get_running_m18AA0D7AD1CB593DC9EE5F3DC79643717509D6E8(L_4, NULL);
				if (L_5)
				{
					goto IL_0041_1;
				}
			}
			{
				// MeshSubsystem.Start();
				XRMeshSubsystem_tDDC31EC10D4F0517542F9EB296428A0F7EC2C3B2* L_6;
				L_6 = GenericXRSDKSpatialMeshObserver_get_MeshSubsystem_m6AC67F5232D1623CB2B9FBC1F6EFA832A9D99B22(__this, NULL);
				NullCheck(L_6);
				IntegratedSubsystem_Start_m2F871FE708687A50D8B078522D97C627D344CC34(L_6, NULL);
			}

IL_0041_1:
			{
				// lastUpdated = 0;
				__this->___lastUpdated_54 = (0.0f);
				// IsRunning = true;
				BaseSpatialObserver_set_IsRunning_m47FBE552E2B0BF2F7DD73DED421312874DA4710A_inline(__this, (bool)1, NULL);
				// }
				goto IL_0063;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0063:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver::Suspend()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GenericXRSDKSpatialMeshObserver_Suspend_m1585435E23B2CC15B2A484476C9FF72D6ABD4DF2 (GenericXRSDKSpatialMeshObserver_t992F3640352E29648369A4DE1DDAC0FFB6EAC6D1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GenericXRSDKSpatialMeshObserver_t992F3640352E29648369A4DE1DDAC0FFB6EAC6D1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_Clear_m708B63A5C1A6954B31F3038FC2554E06255C683F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA1ACF166974130A969D52A31275F6D3B68533987);
		s_Il2CppMethodInitialized = true;
	}
	AutoScope_tFB983697E28885CB10FFDB92D7EFD0615AEF3139 V_0;
	memset((&V_0), 0, sizeof(V_0));
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// if (!IsRunning)
		bool L_0;
		L_0 = BaseSpatialObserver_get_IsRunning_mB13D2B9872E0700341E22CA4FBDA836108145134_inline(__this, NULL);
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		// Debug.LogWarning("The XR SDK spatial observer is currently stopped.");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_mEF15C6B17CE4E1FA7E379CDB82CE40FCD89A3F28(_stringLiteralA1ACF166974130A969D52A31275F6D3B68533987, NULL);
		// return;
		return;
	}

IL_0013:
	{
		// using (SuspendPerfMarker.Auto())
		il2cpp_codegen_runtime_class_init_inline(GenericXRSDKSpatialMeshObserver_t992F3640352E29648369A4DE1DDAC0FFB6EAC6D1_il2cpp_TypeInfo_var);
		ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD L_1 = ((GenericXRSDKSpatialMeshObserver_t992F3640352E29648369A4DE1DDAC0FFB6EAC6D1_StaticFields*)il2cpp_codegen_static_fields_for(GenericXRSDKSpatialMeshObserver_t992F3640352E29648369A4DE1DDAC0FFB6EAC6D1_il2cpp_TypeInfo_var))->___SuspendPerfMarker_56;
		V_1 = L_1;
		AutoScope_tFB983697E28885CB10FFDB92D7EFD0615AEF3139 L_2;
		L_2 = ProfilerMarker_Auto_m133FA724EB95D16187B37D2C8A501D7E989B1F8D_inline((&V_1), NULL);
		V_0 = L_2;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0055:
			{// begin finally (depth: 1)
				AutoScope_Dispose_mED763F3F51261EF8FB79DB32CD06E0A3F6C40481_inline((&V_0), NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				// if (MeshSubsystem != null && MeshSubsystem.running)
				XRMeshSubsystem_tDDC31EC10D4F0517542F9EB296428A0F7EC2C3B2* L_3;
				L_3 = GenericXRSDKSpatialMeshObserver_get_MeshSubsystem_m6AC67F5232D1623CB2B9FBC1F6EFA832A9D99B22(__this, NULL);
				if (!L_3)
				{
					goto IL_0041_1;
				}
			}
			{
				XRMeshSubsystem_tDDC31EC10D4F0517542F9EB296428A0F7EC2C3B2* L_4;
				L_4 = GenericXRSDKSpatialMeshObserver_get_MeshSubsystem_m6AC67F5232D1623CB2B9FBC1F6EFA832A9D99B22(__this, NULL);
				NullCheck(L_4);
				bool L_5;
				L_5 = IntegratedSubsystem_get_running_m18AA0D7AD1CB593DC9EE5F3DC79643717509D6E8(L_4, NULL);
				if (!L_5)
				{
					goto IL_0041_1;
				}
			}
			{
				// MeshSubsystem.Stop();
				XRMeshSubsystem_tDDC31EC10D4F0517542F9EB296428A0F7EC2C3B2* L_6;
				L_6 = GenericXRSDKSpatialMeshObserver_get_MeshSubsystem_m6AC67F5232D1623CB2B9FBC1F6EFA832A9D99B22(__this, NULL);
				NullCheck(L_6);
				IntegratedSubsystem_Stop_m4CFEE7A1C17893728205EAEEF9D5427622C794C4(L_6, NULL);
			}

IL_0041_1:
			{
				// IsRunning = false;
				BaseSpatialObserver_set_IsRunning_m47FBE552E2B0BF2F7DD73DED421312874DA4710A_inline(__this, (bool)0, NULL);
				// meshWorkQueue.Clear();
				Queue_1_tCD897AEF7F66F282E6B86F78DCC03D0B51FBDF37* L_7 = __this->___meshWorkQueue_50;
				NullCheck(L_7);
				Queue_1_Clear_m708B63A5C1A6954B31F3038FC2554E06255C683F(L_7, Queue_1_Clear_m708B63A5C1A6954B31F3038FC2554E06255C683F_RuntimeMethod_var);
				// }
				goto IL_0063;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0063:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver::ClearObservations()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GenericXRSDKSpatialMeshObserver_ClearObservations_m47F87E7F90C42AB1C87F5207C004CB3A3E84A479 (GenericXRSDKSpatialMeshObserver_t992F3640352E29648369A4DE1DDAC0FFB6EAC6D1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GenericXRSDKSpatialMeshObserver_t992F3640352E29648369A4DE1DDAC0FFB6EAC6D1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_tCE758D940790D6D0D56B457E522C195F8C413AF2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_tD6A90A7446DA8E6CF865EDFBBF18C1200BB6D452_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IReadOnlyDictionary_2_t8399CE6ED0D6FE3873E2F4CC4BE5EEA54627167A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mCC0E71080DE343C1A527526A1AC2DBEC355CEA6C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	AutoScope_tFB983697E28885CB10FFDB92D7EFD0615AEF3139 V_0;
	memset((&V_0), 0, sizeof(V_0));
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	RuntimeObject* V_3 = NULL;
	int32_t V_4 = 0;
	{
		// using (ClearObservationsPerfMarker.Auto())
		il2cpp_codegen_runtime_class_init_inline(GenericXRSDKSpatialMeshObserver_t992F3640352E29648369A4DE1DDAC0FFB6EAC6D1_il2cpp_TypeInfo_var);
		ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD L_0 = ((GenericXRSDKSpatialMeshObserver_t992F3640352E29648369A4DE1DDAC0FFB6EAC6D1_StaticFields*)il2cpp_codegen_static_fields_for(GenericXRSDKSpatialMeshObserver_t992F3640352E29648369A4DE1DDAC0FFB6EAC6D1_il2cpp_TypeInfo_var))->___ClearObservationsPerfMarker_57;
		V_1 = L_0;
		AutoScope_tFB983697E28885CB10FFDB92D7EFD0615AEF3139 L_1;
		L_1 = ProfilerMarker_Auto_m133FA724EB95D16187B37D2C8A501D7E989B1F8D_inline((&V_1), NULL);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0067:
			{// begin finally (depth: 1)
				AutoScope_Dispose_mED763F3F51261EF8FB79DB32CD06E0A3F6C40481_inline((&V_0), NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				// bool wasRunning = false;
				V_2 = (bool)0;
				// if (IsRunning)
				bool L_2;
				L_2 = BaseSpatialObserver_get_IsRunning_mB13D2B9872E0700341E22CA4FBDA836108145134_inline(__this, NULL);
				if (!L_2)
				{
					goto IL_0020_1;
				}
			}
			{
				// wasRunning = true;
				V_2 = (bool)1;
				// Suspend();
				VirtualActionInvoker0::Invoke(64 /* System.Void Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialObserver::Suspend() */, __this);
			}

IL_0020_1:
			{
				// IReadOnlyList<int> observations = new List<int>(Meshes.Keys);
				RuntimeObject* L_3;
				L_3 = BaseSpatialMeshObserver_get_Meshes_mF1EFD9EC62528A219260B766662951D8B9064534(__this, NULL);
				NullCheck(L_3);
				RuntimeObject* L_4;
				L_4 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(3 /* System.Collections.Generic.IEnumerable`1<TKey> System.Collections.Generic.IReadOnlyDictionary`2<System.Int32,Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessMeshObject>::get_Keys() */, IReadOnlyDictionary_2_t8399CE6ED0D6FE3873E2F4CC4BE5EEA54627167A_il2cpp_TypeInfo_var, L_3);
				List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_5 = (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*)il2cpp_codegen_object_new(List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73_il2cpp_TypeInfo_var);
				NullCheck(L_5);
				List_1__ctor_mCC0E71080DE343C1A527526A1AC2DBEC355CEA6C(L_5, L_4, List_1__ctor_mCC0E71080DE343C1A527526A1AC2DBEC355CEA6C_RuntimeMethod_var);
				// foreach (int meshId in observations)
				NullCheck(L_5);
				RuntimeObject* L_6;
				L_6 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Int32>::GetEnumerator() */, IEnumerable_1_tCE758D940790D6D0D56B457E522C195F8C413AF2_il2cpp_TypeInfo_var, L_5);
				V_3 = L_6;
			}
			{
				auto __finallyBlock = il2cpp::utils::Finally([&]
				{

FINALLY_0052_1:
					{// begin finally (depth: 2)
						{
							RuntimeObject* L_7 = V_3;
							if (!L_7)
							{
								goto IL_005b_1;
							}
						}
						{
							RuntimeObject* L_8 = V_3;
							NullCheck(L_8);
							InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_8);
						}

IL_005b_1:
						{
							return;
						}
					}// end finally (depth: 2)
				});
				try
				{// begin try (depth: 2)
					{
						goto IL_0048_2;
					}

IL_0038_2:
					{
						// foreach (int meshId in observations)
						RuntimeObject* L_9 = V_3;
						NullCheck(L_9);
						int32_t L_10;
						L_10 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<System.Int32>::get_Current() */, IEnumerator_1_tD6A90A7446DA8E6CF865EDFBBF18C1200BB6D452_il2cpp_TypeInfo_var, L_9);
						V_4 = L_10;
						// RemoveMeshObject(meshId);
						int32_t L_11 = V_4;
						GenericXRSDKSpatialMeshObserver_RemoveMeshObject_m0626D8534801EB9311D24F78397A5BBC532741BC(__this, L_11, NULL);
					}

IL_0048_2:
					{
						// foreach (int meshId in observations)
						RuntimeObject* L_12 = V_3;
						NullCheck(L_12);
						bool L_13;
						L_13 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_12);
						if (L_13)
						{
							goto IL_0038_2;
						}
					}
					{
						goto IL_005c_1;
					}
				}// end try (depth: 2)
				catch(Il2CppExceptionWrapper& e)
				{
					__finallyBlock.StoreException(e.ex);
				}
			}

IL_005c_1:
			{
				// if (wasRunning)
				bool L_14 = V_2;
				if (!L_14)
				{
					goto IL_0065_1;
				}
			}
			{
				// Resume();
				VirtualActionInvoker0::Invoke(63 /* System.Void Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialObserver::Resume() */, __this);
			}

IL_0065_1:
			{
				// }
				goto IL_0075;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0075:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver::UpdateObserver()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GenericXRSDKSpatialMeshObserver_UpdateObserver_mA749C232404C327041D88E4901FF0CD7C3019676 (GenericXRSDKSpatialMeshObserver_t992F3640352E29648369A4DE1DDAC0FFB6EAC6D1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseDataProvider_1_get_Service_mC6DAD45EF35B39E07955ABECAAA8C7520ABFBE5F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GenericXRSDKSpatialMeshObserver_t992F3640352E29648369A4DE1DDAC0FFB6EAC6D1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_Dequeue_m41718952B8841D7EF796AA7A35D480BB010381E0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_get_Count_m64717BA990F1986260A2D23ED2E8E04C1B6FA6D1_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	AutoScope_tFB983697E28885CB10FFDB92D7EFD0615AEF3139 V_0;
	memset((&V_0), 0, sizeof(V_0));
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// if (Service == null || MeshSubsystem == null) { return; }
		RuntimeObject* L_0;
		L_0 = BaseDataProvider_1_get_Service_mC6DAD45EF35B39E07955ABECAAA8C7520ABFBE5F_inline(__this, BaseDataProvider_1_get_Service_mC6DAD45EF35B39E07955ABECAAA8C7520ABFBE5F_RuntimeMethod_var);
		if (!L_0)
		{
			goto IL_0010;
		}
	}
	{
		XRMeshSubsystem_tDDC31EC10D4F0517542F9EB296428A0F7EC2C3B2* L_1;
		L_1 = GenericXRSDKSpatialMeshObserver_get_MeshSubsystem_m6AC67F5232D1623CB2B9FBC1F6EFA832A9D99B22(__this, NULL);
		if (L_1)
		{
			goto IL_0011;
		}
	}

IL_0010:
	{
		// if (Service == null || MeshSubsystem == null) { return; }
		return;
	}

IL_0011:
	{
		// using (UpdateObserverPerfMarker.Auto())
		il2cpp_codegen_runtime_class_init_inline(GenericXRSDKSpatialMeshObserver_t992F3640352E29648369A4DE1DDAC0FFB6EAC6D1_il2cpp_TypeInfo_var);
		ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD L_2 = ((GenericXRSDKSpatialMeshObserver_t992F3640352E29648369A4DE1DDAC0FFB6EAC6D1_StaticFields*)il2cpp_codegen_static_fields_for(GenericXRSDKSpatialMeshObserver_t992F3640352E29648369A4DE1DDAC0FFB6EAC6D1_il2cpp_TypeInfo_var))->___UpdateObserverPerfMarker_58;
		V_1 = L_2;
		AutoScope_tFB983697E28885CB10FFDB92D7EFD0615AEF3139 L_3;
		L_3 = ProfilerMarker_Auto_m133FA724EB95D16187B37D2C8A501D7E989B1F8D_inline((&V_1), NULL);
		V_0 = L_3;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00da:
			{// begin finally (depth: 1)
				AutoScope_Dispose_mED763F3F51261EF8FB79DB32CD06E0A3F6C40481_inline((&V_0), NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				// if (IsRunning && (outstandingMeshObject == null))
				bool L_4;
				L_4 = BaseSpatialObserver_get_IsRunning_mB13D2B9872E0700341E22CA4FBDA836108145134_inline(__this, NULL);
				if (!L_4)
				{
					goto IL_00d8_1;
				}
			}
			{
				SpatialAwarenessMeshObject_t5577B6C05F0A1138C582A8F1B7A717B81AE11379* L_5 = __this->___outstandingMeshObject_52;
				if (L_5)
				{
					goto IL_00d8_1;
				}
			}
			{
				// if (meshWorkQueue.Count > 0)
				Queue_1_tCD897AEF7F66F282E6B86F78DCC03D0B51FBDF37* L_6 = __this->___meshWorkQueue_50;
				NullCheck(L_6);
				int32_t L_7;
				L_7 = Queue_1_get_Count_m64717BA990F1986260A2D23ED2E8E04C1B6FA6D1_inline(L_6, Queue_1_get_Count_m64717BA990F1986260A2D23ED2E8E04C1B6FA6D1_RuntimeMethod_var);
				if ((((int32_t)L_7) <= ((int32_t)0)))
				{
					goto IL_0059_1;
				}
			}
			{
				// RequestMesh(meshWorkQueue.Dequeue());
				Queue_1_tCD897AEF7F66F282E6B86F78DCC03D0B51FBDF37* L_8 = __this->___meshWorkQueue_50;
				NullCheck(L_8);
				MeshId_t2CF122567F06D0AA4F80DDA5CB51E8CD3B7EA2AC L_9;
				L_9 = Queue_1_Dequeue_m41718952B8841D7EF796AA7A35D480BB010381E0(L_8, Queue_1_Dequeue_m41718952B8841D7EF796AA7A35D480BB010381E0_RuntimeMethod_var);
				GenericXRSDKSpatialMeshObserver_RequestMesh_mE06EFD6A985F49A050BCE11266529157F7CA0F69(__this, L_9, NULL);
				goto IL_00e8;
			}

IL_0059_1:
			{
				// else if (Time.time - lastUpdated >= UpdateInterval)
				float L_10;
				L_10 = Time_get_time_m0BEE9AACD0723FE414465B77C9C64D12263675F3(NULL);
				float L_11 = __this->___lastUpdated_54;
				float L_12;
				L_12 = BaseSpatialObserver_get_UpdateInterval_mCA5EC1733690C942FC0D32C203581D794E490896_inline(__this, NULL);
				if ((!(((float)((float)il2cpp_codegen_subtract(L_10, L_11))) >= ((float)L_12))))
				{
					goto IL_00d8_1;
				}
			}
			{
				// if (ObserverVolumeType == VolumeType.UserAlignedCube)
				int32_t L_13;
				L_13 = BaseSpatialObserver_get_ObserverVolumeType_m03C1580AB6F33AE1FC3583BAA197A9DB8F63D3E1_inline(__this, NULL);
				if ((!(((uint32_t)L_13) == ((uint32_t)2))))
				{
					goto IL_008b_1;
				}
			}
			{
				// ObserverRotation = CameraCache.Main.transform.rotation;
				Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_14;
				L_14 = CameraCache_get_Main_m631CABB7F5A697F4C1D76F7CB02D6791C0DDCB9E(NULL);
				NullCheck(L_14);
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_15;
				L_15 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_14, NULL);
				NullCheck(L_15);
				Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_16;
				L_16 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_15, NULL);
				BaseSpatialObserver_set_ObserverRotation_m4E1045D9617D11E133B536B5F35D1A02D079665B_inline(__this, L_16, NULL);
			}

IL_008b_1:
			{
				// if (!IsStationaryObserver)
				bool L_17;
				L_17 = BaseSpatialObserver_get_IsStationaryObserver_mA13036D4DE4D2BAB1CB905DB0FDF1CA17224002E_inline(__this, NULL);
				if (L_17)
				{
					goto IL_00a8_1;
				}
			}
			{
				// ObserverOrigin = CameraCache.Main.transform.position;
				Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_18;
				L_18 = CameraCache_get_Main_m631CABB7F5A697F4C1D76F7CB02D6791C0DDCB9E(NULL);
				NullCheck(L_18);
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_19;
				L_19 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_18, NULL);
				NullCheck(L_19);
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20;
				L_20 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_19, NULL);
				BaseSpatialObserver_set_ObserverOrigin_m198E1F47350F76383E77B197313E41F94019614D_inline(__this, L_20, NULL);
			}

IL_00a8_1:
			{
				// ConfigureObserverVolume();
				VirtualActionInvoker0::Invoke(92 /* System.Void Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver::ConfigureObserverVolume() */, __this);
				// if (MeshSubsystem.TryGetMeshInfos(meshInfos))
				XRMeshSubsystem_tDDC31EC10D4F0517542F9EB296428A0F7EC2C3B2* L_21;
				L_21 = GenericXRSDKSpatialMeshObserver_get_MeshSubsystem_m6AC67F5232D1623CB2B9FBC1F6EFA832A9D99B22(__this, NULL);
				List_1_tEE09D0BD215A518344AF2985829C519B609B7B17* L_22 = __this->___meshInfos_51;
				NullCheck(L_21);
				bool L_23;
				L_23 = XRMeshSubsystem_TryGetMeshInfos_m05F584066A873F286C16B99A929C4B3B9AB58FD2(L_21, L_22, NULL);
				if (!L_23)
				{
					goto IL_00cd_1;
				}
			}
			{
				// UpdateMeshes(meshInfos);
				List_1_tEE09D0BD215A518344AF2985829C519B609B7B17* L_24 = __this->___meshInfos_51;
				GenericXRSDKSpatialMeshObserver_UpdateMeshes_m746769F6904BEAF0CDA6AB8D1C71277898495C36(__this, L_24, NULL);
			}

IL_00cd_1:
			{
				// lastUpdated = Time.time;
				float L_25;
				L_25 = Time_get_time_m0BEE9AACD0723FE414465B77C9C64D12263675F3(NULL);
				__this->___lastUpdated_54 = L_25;
			}

IL_00d8_1:
			{
				// }
				goto IL_00e8;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00e8:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver::RequestMesh(UnityEngine.XR.MeshId)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GenericXRSDKSpatialMeshObserver_RequestMesh_mE06EFD6A985F49A050BCE11266529157F7CA0F69 (GenericXRSDKSpatialMeshObserver_t992F3640352E29648369A4DE1DDAC0FFB6EAC6D1* __this, MeshId_t2CF122567F06D0AA4F80DDA5CB51E8CD3B7EA2AC ___meshId0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tC58438B06CEC83E8978FB47AC67764F80F55DEA8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GenericXRSDKSpatialMeshObserver_U3CRequestMeshU3Eb__28_0_m3309866C6730F77465FF5914746ED571A58B3EC5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GenericXRSDKSpatialMeshObserver_t992F3640352E29648369A4DE1DDAC0FFB6EAC6D1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SpatialAwarenessMeshObject_t5577B6C05F0A1138C582A8F1B7A717B81AE11379_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral911918F6AB4724DF725E5A151DF0C90CE52B9A5A);
		s_Il2CppMethodInitialized = true;
	}
	AutoScope_tFB983697E28885CB10FFDB92D7EFD0615AEF3139 V_0;
	memset((&V_0), 0, sizeof(V_0));
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD V_1;
	memset((&V_1), 0, sizeof(V_1));
	String_t* V_2 = NULL;
	SpatialAwarenessMeshObject_t5577B6C05F0A1138C582A8F1B7A717B81AE11379* V_3 = NULL;
	MeshId_t2CF122567F06D0AA4F80DDA5CB51E8CD3B7EA2AC V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
		// using (RequestMeshPerfMarker.Auto())
		il2cpp_codegen_runtime_class_init_inline(GenericXRSDKSpatialMeshObserver_t992F3640352E29648369A4DE1DDAC0FFB6EAC6D1_il2cpp_TypeInfo_var);
		ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD L_0 = ((GenericXRSDKSpatialMeshObserver_t992F3640352E29648369A4DE1DDAC0FFB6EAC6D1_StaticFields*)il2cpp_codegen_static_fields_for(GenericXRSDKSpatialMeshObserver_t992F3640352E29648369A4DE1DDAC0FFB6EAC6D1_il2cpp_TypeInfo_var))->___RequestMeshPerfMarker_59;
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
				// string meshName = ("SpatialMesh - " + meshId);
				MeshId_t2CF122567F06D0AA4F80DDA5CB51E8CD3B7EA2AC L_2 = ___meshId0;
				V_4 = L_2;
				String_t* L_3;
				L_3 = MeshId_ToString_m8D2D9206A924A86FF28CF6499B7C66941FD0E7D4((&V_4), NULL);
				String_t* L_4;
				L_4 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteral911918F6AB4724DF725E5A151DF0C90CE52B9A5A, L_3, NULL);
				V_2 = L_4;
				// if (spareMeshObject == null)
				SpatialAwarenessMeshObject_t5577B6C05F0A1138C582A8F1B7A717B81AE11379* L_5 = __this->___spareMeshObject_53;
				if (L_5)
				{
					goto IL_004f_1;
				}
			}
			{
				// newMesh = SpatialAwarenessMeshObject.Create(
				//     null,
				//     MeshPhysicsLayer,
				//     meshName,
				//     meshId.GetHashCode());
				int32_t L_6;
				L_6 = BaseSpatialMeshObserver_get_MeshPhysicsLayer_mDD04C90F8900FADBD6D3C5CD092DCB4FFD7C1187_inline(__this, NULL);
				String_t* L_7 = V_2;
				int32_t L_8;
				L_8 = MeshId_GetHashCode_mC6B6428EB5856505023C0D48879B92C2E3F062B0((&___meshId0), NULL);
				il2cpp_codegen_runtime_class_init_inline(SpatialAwarenessMeshObject_t5577B6C05F0A1138C582A8F1B7A717B81AE11379_il2cpp_TypeInfo_var);
				SpatialAwarenessMeshObject_t5577B6C05F0A1138C582A8F1B7A717B81AE11379* L_9;
				L_9 = SpatialAwarenessMeshObject_Create_mAA44309CC5759B309F1CA1D884E8CAAD069A1C79((Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4*)NULL, L_6, L_7, L_8, (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)NULL, NULL);
				V_3 = L_9;
				goto IL_0088_1;
			}

IL_004f_1:
			{
				// newMesh = spareMeshObject;
				SpatialAwarenessMeshObject_t5577B6C05F0A1138C582A8F1B7A717B81AE11379* L_10 = __this->___spareMeshObject_53;
				V_3 = L_10;
				// spareMeshObject = null;
				__this->___spareMeshObject_53 = (SpatialAwarenessMeshObject_t5577B6C05F0A1138C582A8F1B7A717B81AE11379*)NULL;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___spareMeshObject_53), (void*)(SpatialAwarenessMeshObject_t5577B6C05F0A1138C582A8F1B7A717B81AE11379*)NULL);
				// newMesh.GameObject.name = meshName;
				SpatialAwarenessMeshObject_t5577B6C05F0A1138C582A8F1B7A717B81AE11379* L_11 = V_3;
				NullCheck(L_11);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_12;
				L_12 = BaseSpatialAwarenessObject_get_GameObject_m9A7D5AD66EAFD693335D73289E08E4F62D15EB06_inline(L_11, NULL);
				String_t* L_13 = V_2;
				NullCheck(L_12);
				Object_set_name_mC79E6DC8FFD72479C90F0C4CC7F42A0FEAF5AE47(L_12, L_13, NULL);
				// newMesh.Id = meshId.GetHashCode();
				SpatialAwarenessMeshObject_t5577B6C05F0A1138C582A8F1B7A717B81AE11379* L_14 = V_3;
				int32_t L_15;
				L_15 = MeshId_GetHashCode_mC6B6428EB5856505023C0D48879B92C2E3F062B0((&___meshId0), NULL);
				NullCheck(L_14);
				BaseSpatialAwarenessObject_set_Id_m934BABD378424930BFB496263790179DD0D8E9DA_inline(L_14, L_15, NULL);
				// newMesh.GameObject.SetActive(true);
				SpatialAwarenessMeshObject_t5577B6C05F0A1138C582A8F1B7A717B81AE11379* L_16 = V_3;
				NullCheck(L_16);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_17;
				L_17 = BaseSpatialAwarenessObject_get_GameObject_m9A7D5AD66EAFD693335D73289E08E4F62D15EB06_inline(L_16, NULL);
				NullCheck(L_17);
				GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_17, (bool)1, NULL);
			}

IL_0088_1:
			{
				// MeshSubsystem.GenerateMeshAsync(meshId, newMesh.Filter.mesh, newMesh.Collider, MeshVertexAttributes.Normals, (MeshGenerationResult meshGenerationResult) => MeshGenerationAction(meshGenerationResult));
				XRMeshSubsystem_tDDC31EC10D4F0517542F9EB296428A0F7EC2C3B2* L_18;
				L_18 = GenericXRSDKSpatialMeshObserver_get_MeshSubsystem_m6AC67F5232D1623CB2B9FBC1F6EFA832A9D99B22(__this, NULL);
				MeshId_t2CF122567F06D0AA4F80DDA5CB51E8CD3B7EA2AC L_19 = ___meshId0;
				SpatialAwarenessMeshObject_t5577B6C05F0A1138C582A8F1B7A717B81AE11379* L_20 = V_3;
				NullCheck(L_20);
				MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* L_21;
				L_21 = BaseSpatialAwarenessObject_get_Filter_mFE56EA1F934330429B2F7ED30BC93B7E18C531A9_inline(L_20, NULL);
				NullCheck(L_21);
				Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_22;
				L_22 = MeshFilter_get_mesh_m13172D7EF6682861971817D0A47EE2BE49FBCB1C(L_21, NULL);
				SpatialAwarenessMeshObject_t5577B6C05F0A1138C582A8F1B7A717B81AE11379* L_23 = V_3;
				NullCheck(L_23);
				MeshCollider_tB525E4DDE383252364ED0BDD32CF2B53914EE455* L_24;
				L_24 = SpatialAwarenessMeshObject_get_Collider_m2A7709B01862765D3A3A02B613CD3AD5FEED0EC9_inline(L_23, NULL);
				Action_1_tC58438B06CEC83E8978FB47AC67764F80F55DEA8* L_25 = (Action_1_tC58438B06CEC83E8978FB47AC67764F80F55DEA8*)il2cpp_codegen_object_new(Action_1_tC58438B06CEC83E8978FB47AC67764F80F55DEA8_il2cpp_TypeInfo_var);
				NullCheck(L_25);
				Action_1__ctor_m62D287B08FD32117DDF0FA2BB669D66F788BF382(L_25, __this, (intptr_t)((void*)GenericXRSDKSpatialMeshObserver_U3CRequestMeshU3Eb__28_0_m3309866C6730F77465FF5914746ED571A58B3EC5_RuntimeMethod_var), NULL);
				NullCheck(L_18);
				XRMeshSubsystem_GenerateMeshAsync_m3DEA3C294695FD7C54D1186FF7DCE84A4BA1CFB7(L_18, L_19, L_22, L_24, 1, L_25, NULL);
				// outstandingMeshObject = newMesh;
				SpatialAwarenessMeshObject_t5577B6C05F0A1138C582A8F1B7A717B81AE11379* L_26 = V_3;
				__this->___outstandingMeshObject_52 = L_26;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___outstandingMeshObject_52), (void*)L_26);
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
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver::RemoveMeshObject(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GenericXRSDKSpatialMeshObserver_RemoveMeshObject_m0626D8534801EB9311D24F78397A5BBC532741BC (GenericXRSDKSpatialMeshObserver_t992F3640352E29648369A4DE1DDAC0FFB6EAC6D1* __this, int32_t ___id0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseDataProvider_1_get_Service_mC6DAD45EF35B39E07955ABECAAA8C7520ABFBE5F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseSpatialMeshObserver_t38C1251909F4D9DB3B4E3DA90CFC32670E925B46_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Remove_mEC3BD6FA8D8A74CB98F57255A1DBC49D253F2EC6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_m2B55736D191B5E6869AF55442ED83B834A066164_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GenericXRSDKSpatialMeshObserver_t992F3640352E29648369A4DE1DDAC0FFB6EAC6D1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealityEventSystem_HandleEvent_TisIMixedRealitySpatialAwarenessObservationHandler_1_t92770D3EC6A2A2A1BCC5AFF6614A5CA110847BA4_m743EDACDCE8A868B6CDFB9D1C7AC29B2AF204395_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MixedRealitySpatialAwarenessEventData_1_Initialize_m739999E8A50EE7375EC939D2513D582FCA8C6B59_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	AutoScope_tFB983697E28885CB10FFDB92D7EFD0615AEF3139 V_0;
	memset((&V_0), 0, sizeof(V_0));
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD V_1;
	memset((&V_1), 0, sizeof(V_1));
	SpatialAwarenessMeshObject_t5577B6C05F0A1138C582A8F1B7A717B81AE11379* V_2 = NULL;
	RuntimeObject* G_B4_0 = NULL;
	RuntimeObject* G_B3_0 = NULL;
	{
		// using (RemoveMeshObjectPerfMarker.Auto())
		il2cpp_codegen_runtime_class_init_inline(GenericXRSDKSpatialMeshObserver_t992F3640352E29648369A4DE1DDAC0FFB6EAC6D1_il2cpp_TypeInfo_var);
		ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD L_0 = ((GenericXRSDKSpatialMeshObserver_t992F3640352E29648369A4DE1DDAC0FFB6EAC6D1_StaticFields*)il2cpp_codegen_static_fields_for(GenericXRSDKSpatialMeshObserver_t992F3640352E29648369A4DE1DDAC0FFB6EAC6D1_il2cpp_TypeInfo_var))->___RemoveMeshObjectPerfMarker_60;
		V_1 = L_0;
		AutoScope_tFB983697E28885CB10FFDB92D7EFD0615AEF3139 L_1;
		L_1 = ProfilerMarker_Auto_m133FA724EB95D16187B37D2C8A501D7E989B1F8D_inline((&V_1), NULL);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_005e:
			{// begin finally (depth: 1)
				AutoScope_Dispose_mED763F3F51261EF8FB79DB32CD06E0A3F6C40481_inline((&V_0), NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				// if (meshes.TryGetValue(id, out mesh))
				Dictionary_2_t0E31064CA2CAEBF8E2C6B82A38A6D432A0F91413* L_2 = ((BaseSpatialMeshObserver_t38C1251909F4D9DB3B4E3DA90CFC32670E925B46*)__this)->___meshes_39;
				int32_t L_3 = ___id0;
				NullCheck(L_2);
				bool L_4;
				L_4 = Dictionary_2_TryGetValue_m2B55736D191B5E6869AF55442ED83B834A066164(L_2, L_3, (&V_2), Dictionary_2_TryGetValue_m2B55736D191B5E6869AF55442ED83B834A066164_RuntimeMethod_var);
				if (!L_4)
				{
					goto IL_005c_1;
				}
			}
			{
				// meshes.Remove(id);
				Dictionary_2_t0E31064CA2CAEBF8E2C6B82A38A6D432A0F91413* L_5 = ((BaseSpatialMeshObserver_t38C1251909F4D9DB3B4E3DA90CFC32670E925B46*)__this)->___meshes_39;
				int32_t L_6 = ___id0;
				NullCheck(L_5);
				bool L_7;
				L_7 = Dictionary_2_Remove_mEC3BD6FA8D8A74CB98F57255A1DBC49D253F2EC6(L_5, L_6, Dictionary_2_Remove_mEC3BD6FA8D8A74CB98F57255A1DBC49D253F2EC6_RuntimeMethod_var);
				// ReclaimMeshObject(mesh);
				SpatialAwarenessMeshObject_t5577B6C05F0A1138C582A8F1B7A717B81AE11379* L_8 = V_2;
				GenericXRSDKSpatialMeshObserver_ReclaimMeshObject_m4898743E17B3906BC85843AFD26CC11CFD29E66F(__this, L_8, NULL);
				// meshEventData.Initialize(this, id, null);
				MixedRealitySpatialAwarenessEventData_1_tE46EB2E96DFDDF77196F0A24715743FD22640021* L_9 = ((BaseSpatialMeshObserver_t38C1251909F4D9DB3B4E3DA90CFC32670E925B46*)__this)->___meshEventData_26;
				int32_t L_10 = ___id0;
				NullCheck(L_9);
				MixedRealitySpatialAwarenessEventData_1_Initialize_m739999E8A50EE7375EC939D2513D582FCA8C6B59(L_9, __this, L_10, (SpatialAwarenessMeshObject_t5577B6C05F0A1138C582A8F1B7A717B81AE11379*)NULL, MixedRealitySpatialAwarenessEventData_1_Initialize_m739999E8A50EE7375EC939D2513D582FCA8C6B59_RuntimeMethod_var);
				// Service?.HandleEvent(meshEventData, OnMeshRemoved);
				RuntimeObject* L_11;
				L_11 = BaseDataProvider_1_get_Service_mC6DAD45EF35B39E07955ABECAAA8C7520ABFBE5F_inline(__this, BaseDataProvider_1_get_Service_mC6DAD45EF35B39E07955ABECAAA8C7520ABFBE5F_RuntimeMethod_var);
				RuntimeObject* L_12 = L_11;
				G_B3_0 = L_12;
				if (L_12)
				{
					G_B4_0 = L_12;
					goto IL_004c_1;
				}
			}
			{
				goto IL_006c;
			}

IL_004c_1:
			{
				MixedRealitySpatialAwarenessEventData_1_tE46EB2E96DFDDF77196F0A24715743FD22640021* L_13 = ((BaseSpatialMeshObserver_t38C1251909F4D9DB3B4E3DA90CFC32670E925B46*)__this)->___meshEventData_26;
				il2cpp_codegen_runtime_class_init_inline(BaseSpatialMeshObserver_t38C1251909F4D9DB3B4E3DA90CFC32670E925B46_il2cpp_TypeInfo_var);
				EventFunction_1_tEBC0FE0CCBC0E2CED086EF11F4973BE9B1419E00* L_14 = ((BaseSpatialMeshObserver_t38C1251909F4D9DB3B4E3DA90CFC32670E925B46_StaticFields*)il2cpp_codegen_static_fields_for(BaseSpatialMeshObserver_t38C1251909F4D9DB3B4E3DA90CFC32670E925B46_il2cpp_TypeInfo_var))->___OnMeshRemoved_36;
				NullCheck(G_B4_0);
				GenericInterfaceActionInvoker2< BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F*, EventFunction_1_tEBC0FE0CCBC0E2CED086EF11F4973BE9B1419E00* >::Invoke(IMixedRealityEventSystem_HandleEvent_TisIMixedRealitySpatialAwarenessObservationHandler_1_t92770D3EC6A2A2A1BCC5AFF6614A5CA110847BA4_m743EDACDCE8A868B6CDFB9D1C7AC29B2AF204395_RuntimeMethod_var, G_B4_0, L_13, L_14);
			}

IL_005c_1:
			{
				// }
				goto IL_006c;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_006c:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver::ReclaimMeshObject(Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessMeshObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GenericXRSDKSpatialMeshObserver_ReclaimMeshObject_m4898743E17B3906BC85843AFD26CC11CFD29E66F (GenericXRSDKSpatialMeshObserver_t992F3640352E29648369A4DE1DDAC0FFB6EAC6D1* __this, SpatialAwarenessMeshObject_t5577B6C05F0A1138C582A8F1B7A717B81AE11379* ___availableMeshObject0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GenericXRSDKSpatialMeshObserver_t992F3640352E29648369A4DE1DDAC0FFB6EAC6D1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SpatialAwarenessMeshObject_t5577B6C05F0A1138C582A8F1B7A717B81AE11379_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAC8432B096E67A1E3A1A1AE9FE6858ABA57598C5);
		s_Il2CppMethodInitialized = true;
	}
	AutoScope_tFB983697E28885CB10FFDB92D7EFD0615AEF3139 V_0;
	memset((&V_0), 0, sizeof(V_0));
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// using (ReclaimMeshObjectPerfMarker.Auto())
		il2cpp_codegen_runtime_class_init_inline(GenericXRSDKSpatialMeshObserver_t992F3640352E29648369A4DE1DDAC0FFB6EAC6D1_il2cpp_TypeInfo_var);
		ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD L_0 = ((GenericXRSDKSpatialMeshObserver_t992F3640352E29648369A4DE1DDAC0FFB6EAC6D1_StaticFields*)il2cpp_codegen_static_fields_for(GenericXRSDKSpatialMeshObserver_t992F3640352E29648369A4DE1DDAC0FFB6EAC6D1_il2cpp_TypeInfo_var))->___ReclaimMeshObjectPerfMarker_61;
		V_1 = L_0;
		AutoScope_tFB983697E28885CB10FFDB92D7EFD0615AEF3139 L_1;
		L_1 = ProfilerMarker_Auto_m133FA724EB95D16187B37D2C8A501D7E989B1F8D_inline((&V_1), NULL);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_004d:
			{// begin finally (depth: 1)
				AutoScope_Dispose_mED763F3F51261EF8FB79DB32CD06E0A3F6C40481_inline((&V_0), NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				// if (spareMeshObject == null)
				SpatialAwarenessMeshObject_t5577B6C05F0A1138C582A8F1B7A717B81AE11379* L_2 = __this->___spareMeshObject_53;
				if (L_2)
				{
					goto IL_0043_1;
				}
			}
			{
				// SpatialAwarenessMeshObject.Cleanup(availableMeshObject, false);
				SpatialAwarenessMeshObject_t5577B6C05F0A1138C582A8F1B7A717B81AE11379* L_3 = ___availableMeshObject0;
				il2cpp_codegen_runtime_class_init_inline(SpatialAwarenessMeshObject_t5577B6C05F0A1138C582A8F1B7A717B81AE11379_il2cpp_TypeInfo_var);
				SpatialAwarenessMeshObject_Cleanup_mDC632004282E0A16833B4565C91FFBC524F08774(L_3, (bool)0, (bool)1, NULL);
				// availableMeshObject.GameObject.name = "Unused Spatial Mesh";
				SpatialAwarenessMeshObject_t5577B6C05F0A1138C582A8F1B7A717B81AE11379* L_4 = ___availableMeshObject0;
				NullCheck(L_4);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5;
				L_5 = BaseSpatialAwarenessObject_get_GameObject_m9A7D5AD66EAFD693335D73289E08E4F62D15EB06_inline(L_4, NULL);
				NullCheck(L_5);
				Object_set_name_mC79E6DC8FFD72479C90F0C4CC7F42A0FEAF5AE47(L_5, _stringLiteralAC8432B096E67A1E3A1A1AE9FE6858ABA57598C5, NULL);
				// availableMeshObject.GameObject.SetActive(false);
				SpatialAwarenessMeshObject_t5577B6C05F0A1138C582A8F1B7A717B81AE11379* L_6 = ___availableMeshObject0;
				NullCheck(L_6);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7;
				L_7 = BaseSpatialAwarenessObject_get_GameObject_m9A7D5AD66EAFD693335D73289E08E4F62D15EB06_inline(L_6, NULL);
				NullCheck(L_7);
				GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_7, (bool)0, NULL);
				// spareMeshObject = availableMeshObject;
				SpatialAwarenessMeshObject_t5577B6C05F0A1138C582A8F1B7A717B81AE11379* L_8 = ___availableMeshObject0;
				__this->___spareMeshObject_53 = L_8;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___spareMeshObject_53), (void*)L_8);
				goto IL_005b;
			}

IL_0043_1:
			{
				// SpatialAwarenessMeshObject.Cleanup(availableMeshObject);
				SpatialAwarenessMeshObject_t5577B6C05F0A1138C582A8F1B7A717B81AE11379* L_9 = ___availableMeshObject0;
				il2cpp_codegen_runtime_class_init_inline(SpatialAwarenessMeshObject_t5577B6C05F0A1138C582A8F1B7A717B81AE11379_il2cpp_TypeInfo_var);
				SpatialAwarenessMeshObject_Cleanup_mDC632004282E0A16833B4565C91FFBC524F08774(L_9, (bool)1, (bool)1, NULL);
				// }
				goto IL_005b;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_005b:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver::ConfigureObserverVolume()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GenericXRSDKSpatialMeshObserver_ConfigureObserverVolume_m40F453F800CD16C6A7CA3AFA19D73EDC86559607 (GenericXRSDKSpatialMeshObserver_t992F3640352E29648369A4DE1DDAC0FFB6EAC6D1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GenericXRSDKSpatialMeshObserver_t992F3640352E29648369A4DE1DDAC0FFB6EAC6D1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VolumeType_t9A7ACEA16E36C915CD23D90AC0894AF29352F7CD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD97DB8E8CA849A2783B8DA9F426364AEBA3DC48C);
		s_Il2CppMethodInitialized = true;
	}
	AutoScope_tFB983697E28885CB10FFDB92D7EFD0615AEF3139 V_0;
	memset((&V_0), 0, sizeof(V_0));
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// if (MeshSubsystem == null
		//     || (oldObserverOrigin == ObserverOrigin
		//     && oldObservationExtents == ObservationExtents
		//     && oldObserverVolumeType == ObserverVolumeType))
		XRMeshSubsystem_tDDC31EC10D4F0517542F9EB296428A0F7EC2C3B2* L_0;
		L_0 = GenericXRSDKSpatialMeshObserver_get_MeshSubsystem_m6AC67F5232D1623CB2B9FBC1F6EFA832A9D99B22(__this, NULL);
		if (!L_0)
		{
			goto IL_003c;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = __this->___oldObserverOrigin_63;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = BaseSpatialObserver_get_ObserverOrigin_m42E71C81EB602959E4AF7C2A4EBB5B54007931B9_inline(__this, NULL);
		bool L_3;
		L_3 = Vector3_op_Equality_m15951D1B53E3BE36C9D265E229090020FBD72EBB_inline(L_1, L_2, NULL);
		if (!L_3)
		{
			goto IL_003d;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = __this->___oldObservationExtents_64;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = BaseSpatialObserver_get_ObservationExtents_m55A4B302D753B342D0A02E86EFA8FE4FFA5E06DF_inline(__this, NULL);
		bool L_6;
		L_6 = Vector3_op_Equality_m15951D1B53E3BE36C9D265E229090020FBD72EBB_inline(L_4, L_5, NULL);
		if (!L_6)
		{
			goto IL_003d;
		}
	}
	{
		int32_t L_7 = __this->___oldObserverVolumeType_65;
		int32_t L_8;
		L_8 = BaseSpatialObserver_get_ObserverVolumeType_m03C1580AB6F33AE1FC3583BAA197A9DB8F63D3E1_inline(__this, NULL);
		if ((!(((uint32_t)L_7) == ((uint32_t)L_8))))
		{
			goto IL_003d;
		}
	}

IL_003c:
	{
		// return;
		return;
	}

IL_003d:
	{
		// using (ConfigureObserverVolumePerfMarker.Auto())
		il2cpp_codegen_runtime_class_init_inline(GenericXRSDKSpatialMeshObserver_t992F3640352E29648369A4DE1DDAC0FFB6EAC6D1_il2cpp_TypeInfo_var);
		ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD L_9 = ((GenericXRSDKSpatialMeshObserver_t992F3640352E29648369A4DE1DDAC0FFB6EAC6D1_StaticFields*)il2cpp_codegen_static_fields_for(GenericXRSDKSpatialMeshObserver_t992F3640352E29648369A4DE1DDAC0FFB6EAC6D1_il2cpp_TypeInfo_var))->___ConfigureObserverVolumePerfMarker_62;
		V_1 = L_9;
		AutoScope_tFB983697E28885CB10FFDB92D7EFD0615AEF3139 L_10;
		L_10 = ProfilerMarker_Auto_m133FA724EB95D16187B37D2C8A501D7E989B1F8D_inline((&V_1), NULL);
		V_0 = L_10;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00ae:
			{// begin finally (depth: 1)
				AutoScope_Dispose_mED763F3F51261EF8FB79DB32CD06E0A3F6C40481_inline((&V_0), NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				// switch (ObserverVolumeType)
				int32_t L_11;
				L_11 = BaseSpatialObserver_get_ObserverVolumeType_m03C1580AB6F33AE1FC3583BAA197A9DB8F63D3E1_inline(__this, NULL);
				if ((!(((uint32_t)L_11) == ((uint32_t)1))))
				{
					goto IL_006e_1;
				}
			}
			{
				// MeshSubsystem.SetBoundingVolume(ObserverOrigin, ObservationExtents);
				XRMeshSubsystem_tDDC31EC10D4F0517542F9EB296428A0F7EC2C3B2* L_12;
				L_12 = GenericXRSDKSpatialMeshObserver_get_MeshSubsystem_m6AC67F5232D1623CB2B9FBC1F6EFA832A9D99B22(__this, NULL);
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
				L_13 = BaseSpatialObserver_get_ObserverOrigin_m42E71C81EB602959E4AF7C2A4EBB5B54007931B9_inline(__this, NULL);
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
				L_14 = BaseSpatialObserver_get_ObservationExtents_m55A4B302D753B342D0A02E86EFA8FE4FFA5E06DF_inline(__this, NULL);
				NullCheck(L_12);
				bool L_15;
				L_15 = XRMeshSubsystem_SetBoundingVolume_mC2B3A3A003779328460EF482220BC94C71D40294(L_12, L_13, L_14, NULL);
				// break;
				goto IL_0088_1;
			}

IL_006e_1:
			{
				// Debug.LogError($"Unsupported ObserverVolumeType value {ObserverVolumeType}");
				int32_t L_16;
				L_16 = BaseSpatialObserver_get_ObserverVolumeType_m03C1580AB6F33AE1FC3583BAA197A9DB8F63D3E1_inline(__this, NULL);
				int32_t L_17 = L_16;
				RuntimeObject* L_18 = Box(VolumeType_t9A7ACEA16E36C915CD23D90AC0894AF29352F7CD_il2cpp_TypeInfo_var, &L_17);
				String_t* L_19;
				L_19 = String_Format_m8C122B26BC5AA10E2550AECA16E57DAE10F07E30(_stringLiteralD97DB8E8CA849A2783B8DA9F426364AEBA3DC48C, L_18, NULL);
				il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
				Debug_LogError_m059825802BB6AF7EA9693FEBEEB0D85F59A3E38E(L_19, NULL);
			}

IL_0088_1:
			{
				// oldObserverOrigin = ObserverOrigin;
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20;
				L_20 = BaseSpatialObserver_get_ObserverOrigin_m42E71C81EB602959E4AF7C2A4EBB5B54007931B9_inline(__this, NULL);
				__this->___oldObserverOrigin_63 = L_20;
				// oldObservationExtents = ObservationExtents;
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21;
				L_21 = BaseSpatialObserver_get_ObservationExtents_m55A4B302D753B342D0A02E86EFA8FE4FFA5E06DF_inline(__this, NULL);
				__this->___oldObservationExtents_64 = L_21;
				// oldObserverVolumeType = ObserverVolumeType;
				int32_t L_22;
				L_22 = BaseSpatialObserver_get_ObserverVolumeType_m03C1580AB6F33AE1FC3583BAA197A9DB8F63D3E1_inline(__this, NULL);
				__this->___oldObserverVolumeType_65 = L_22;
				// }
				goto IL_00bc;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00bc:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver::UpdateMeshes(System.Collections.Generic.List`1<UnityEngine.XR.MeshInfo>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GenericXRSDKSpatialMeshObserver_UpdateMeshes_m746769F6904BEAF0CDA6AB8D1C71277898495C36 (GenericXRSDKSpatialMeshObserver_t992F3640352E29648369A4DE1DDAC0FFB6EAC6D1* __this, List_1_tEE09D0BD215A518344AF2985829C519B609B7B17* ___meshInfos0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m01B983AEF89C8F17DEFD740A0E013C0CA4AC81C7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mAB2B6FFD31DB8BF5C1516AEDD3901373D9CD412C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mC0CE60FBC4FAA79C6D5B26DD275B4DA0DF7265E6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GenericXRSDKSpatialMeshObserver_t992F3640352E29648369A4DE1DDAC0FFB6EAC6D1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m468FAA4C99E6FF3C1756D6BD18FA8C2992355333_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_Enqueue_mB26DD8D99535CBFC7BBA16CC3DF8CD84C76518F7_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	AutoScope_tFB983697E28885CB10FFDB92D7EFD0615AEF3139 V_0;
	memset((&V_0), 0, sizeof(V_0));
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD V_1;
	memset((&V_1), 0, sizeof(V_1));
	Enumerator_tEC6D4B278440969CB479B2E8E2B65B2681CA6CE3 V_2;
	memset((&V_2), 0, sizeof(V_2));
	MeshInfo_t0BB7A8C2C586FD5EAD40E9E4E1749150915FDFFA V_3;
	memset((&V_3), 0, sizeof(V_3));
	int32_t V_4 = 0;
	MeshId_t2CF122567F06D0AA4F80DDA5CB51E8CD3B7EA2AC V_5;
	memset((&V_5), 0, sizeof(V_5));
	{
		// if (!IsRunning) { return; }
		bool L_0;
		L_0 = BaseSpatialObserver_get_IsRunning_mB13D2B9872E0700341E22CA4FBDA836108145134_inline(__this, NULL);
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		// if (!IsRunning) { return; }
		return;
	}

IL_0009:
	{
		// using (UpdateMeshesPerfMarker.Auto())
		il2cpp_codegen_runtime_class_init_inline(GenericXRSDKSpatialMeshObserver_t992F3640352E29648369A4DE1DDAC0FFB6EAC6D1_il2cpp_TypeInfo_var);
		ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD L_1 = ((GenericXRSDKSpatialMeshObserver_t992F3640352E29648369A4DE1DDAC0FFB6EAC6D1_StaticFields*)il2cpp_codegen_static_fields_for(GenericXRSDKSpatialMeshObserver_t992F3640352E29648369A4DE1DDAC0FFB6EAC6D1_il2cpp_TypeInfo_var))->___UpdateMeshesPerfMarker_66;
		V_1 = L_1;
		AutoScope_tFB983697E28885CB10FFDB92D7EFD0615AEF3139 L_2;
		L_2 = ProfilerMarker_Auto_m133FA724EB95D16187B37D2C8A501D7E989B1F8D_inline((&V_1), NULL);
		V_0 = L_2;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0086:
			{// begin finally (depth: 1)
				AutoScope_Dispose_mED763F3F51261EF8FB79DB32CD06E0A3F6C40481_inline((&V_0), NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				// foreach (MeshInfo meshInfo in meshInfos)
				List_1_tEE09D0BD215A518344AF2985829C519B609B7B17* L_3 = ___meshInfos0;
				NullCheck(L_3);
				Enumerator_tEC6D4B278440969CB479B2E8E2B65B2681CA6CE3 L_4;
				L_4 = List_1_GetEnumerator_m468FAA4C99E6FF3C1756D6BD18FA8C2992355333(L_3, List_1_GetEnumerator_m468FAA4C99E6FF3C1756D6BD18FA8C2992355333_RuntimeMethod_var);
				V_2 = L_4;
			}
			{
				auto __finallyBlock = il2cpp::utils::Finally([&]
				{

FINALLY_0078_1:
					{// begin finally (depth: 2)
						Enumerator_Dispose_m01B983AEF89C8F17DEFD740A0E013C0CA4AC81C7((&V_2), Enumerator_Dispose_m01B983AEF89C8F17DEFD740A0E013C0CA4AC81C7_RuntimeMethod_var);
						return;
					}// end finally (depth: 2)
				});
				try
				{// begin try (depth: 2)
					{
						goto IL_006d_2;
					}

IL_0020_2:
					{
						// foreach (MeshInfo meshInfo in meshInfos)
						MeshInfo_t0BB7A8C2C586FD5EAD40E9E4E1749150915FDFFA L_5;
						L_5 = Enumerator_get_Current_mC0CE60FBC4FAA79C6D5B26DD275B4DA0DF7265E6_inline((&V_2), Enumerator_get_Current_mC0CE60FBC4FAA79C6D5B26DD275B4DA0DF7265E6_RuntimeMethod_var);
						V_3 = L_5;
						// switch (meshInfo.ChangeState)
						int32_t L_6;
						L_6 = MeshInfo_get_ChangeState_mF366492B8EF4A9FC8F677E01A6BA4C6C75D3BF68_inline((&V_3), NULL);
						V_4 = L_6;
						int32_t L_7 = V_4;
						if ((!(((uint32_t)L_7) > ((uint32_t)1))))
						{
							goto IL_003d_2;
						}
					}
					{
						int32_t L_8 = V_4;
						if ((((int32_t)L_8) == ((int32_t)2)))
						{
							goto IL_0051_2;
						}
					}
					{
						goto IL_006d_2;
					}

IL_003d_2:
					{
						// meshWorkQueue.Enqueue(meshInfo.MeshId);
						Queue_1_tCD897AEF7F66F282E6B86F78DCC03D0B51FBDF37* L_9 = __this->___meshWorkQueue_50;
						MeshId_t2CF122567F06D0AA4F80DDA5CB51E8CD3B7EA2AC L_10;
						L_10 = MeshInfo_get_MeshId_m96D69F5BA60A596D7C9FAAF0931940452E3D8846_inline((&V_3), NULL);
						NullCheck(L_9);
						Queue_1_Enqueue_mB26DD8D99535CBFC7BBA16CC3DF8CD84C76518F7(L_9, L_10, Queue_1_Enqueue_mB26DD8D99535CBFC7BBA16CC3DF8CD84C76518F7_RuntimeMethod_var);
						// break;
						goto IL_006d_2;
					}

IL_0051_2:
					{
						// RemoveMeshObject(meshInfo.MeshId.GetHashCode());
						MeshId_t2CF122567F06D0AA4F80DDA5CB51E8CD3B7EA2AC L_11;
						L_11 = MeshInfo_get_MeshId_m96D69F5BA60A596D7C9FAAF0931940452E3D8846_inline((&V_3), NULL);
						V_5 = L_11;
						int32_t L_12;
						L_12 = MeshId_GetHashCode_mC6B6428EB5856505023C0D48879B92C2E3F062B0((&V_5), NULL);
						GenericXRSDKSpatialMeshObserver_RemoveMeshObject_m0626D8534801EB9311D24F78397A5BBC532741BC(__this, L_12, NULL);
					}

IL_006d_2:
					{
						// foreach (MeshInfo meshInfo in meshInfos)
						bool L_13;
						L_13 = Enumerator_MoveNext_mAB2B6FFD31DB8BF5C1516AEDD3901373D9CD412C((&V_2), Enumerator_MoveNext_mAB2B6FFD31DB8BF5C1516AEDD3901373D9CD412C_RuntimeMethod_var);
						if (L_13)
						{
							goto IL_0020_2;
						}
					}
					{
						goto IL_0094;
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

IL_0094:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver::MeshGenerationAction(UnityEngine.XR.MeshGenerationResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GenericXRSDKSpatialMeshObserver_MeshGenerationAction_m70D7E84CB7947DC969C8B12264FF50BA22174643 (GenericXRSDKSpatialMeshObserver_t992F3640352E29648369A4DE1DDAC0FFB6EAC6D1* __this, MeshGenerationResult_tD5A6D639B2CF1A3F855AFB41861DEC48DC0D3A9C ___meshGenerationResult0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseDataProvider_1_get_Service_mC6DAD45EF35B39E07955ABECAAA8C7520ABFBE5F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseSpatialMeshObserver_t38C1251909F4D9DB3B4E3DA90CFC32670E925B46_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m03479DF66EDA795A65A13DCB19BA8B98C15D78DC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_mA68F42395FC066EDD30D2DE12D1A82F7E49D393B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Remove_mEC3BD6FA8D8A74CB98F57255A1DBC49D253F2EC6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m157DEDDB79773C39BD6CB57F5753E5C44DDD473C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GenericXRSDKSpatialMeshObserver_t992F3640352E29648369A4DE1DDAC0FFB6EAC6D1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealityEventSystem_HandleEvent_TisIMixedRealitySpatialAwarenessObservationHandler_1_t92770D3EC6A2A2A1BCC5AFF6614A5CA110847BA4_m743EDACDCE8A868B6CDFB9D1C7AC29B2AF204395_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MeshId_t2CF122567F06D0AA4F80DDA5CB51E8CD3B7EA2AC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MixedRealitySpatialAwarenessEventData_1_Initialize_m739999E8A50EE7375EC939D2513D582FCA8C6B59_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3BF5BB21220D8CB3070E7A40BBB1BEF947166C4D);
		s_Il2CppMethodInitialized = true;
	}
	AutoScope_tFB983697E28885CB10FFDB92D7EFD0615AEF3139 V_0;
	memset((&V_0), 0, sizeof(V_0));
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD V_1;
	memset((&V_1), 0, sizeof(V_1));
	SpatialAwarenessMeshObject_t5577B6C05F0A1138C582A8F1B7A717B81AE11379* V_2 = NULL;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* V_3 = NULL;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* V_4 = NULL;
	int32_t V_5 = 0;
	MeshId_t2CF122567F06D0AA4F80DDA5CB51E8CD3B7EA2AC V_6;
	memset((&V_6), 0, sizeof(V_6));
	bool G_B10_0 = false;
	bool G_B9_0 = false;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* G_B11_0 = NULL;
	bool G_B11_1 = false;
	bool G_B13_0 = false;
	bool G_B12_0 = false;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* G_B14_0 = NULL;
	bool G_B14_1 = false;
	bool G_B16_0 = false;
	bool G_B15_0 = false;
	bool G_B18_0 = false;
	bool G_B17_0 = false;
	bool G_B20_0 = false;
	bool G_B19_0 = false;
	bool G_B22_0 = false;
	bool G_B21_0 = false;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* G_B23_0 = NULL;
	bool G_B23_1 = false;
	RuntimeObject* G_B26_0 = NULL;
	RuntimeObject* G_B25_0 = NULL;
	RuntimeObject* G_B29_0 = NULL;
	RuntimeObject* G_B28_0 = NULL;
	{
		// if (!IsRunning) { return; }
		bool L_0;
		L_0 = BaseSpatialObserver_get_IsRunning_mB13D2B9872E0700341E22CA4FBDA836108145134_inline(__this, NULL);
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		// if (!IsRunning) { return; }
		return;
	}

IL_0009:
	{
		// using (MeshGenerationActionPerfMarker.Auto())
		il2cpp_codegen_runtime_class_init_inline(GenericXRSDKSpatialMeshObserver_t992F3640352E29648369A4DE1DDAC0FFB6EAC6D1_il2cpp_TypeInfo_var);
		ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD L_1 = ((GenericXRSDKSpatialMeshObserver_t992F3640352E29648369A4DE1DDAC0FFB6EAC6D1_StaticFields*)il2cpp_codegen_static_fields_for(GenericXRSDKSpatialMeshObserver_t992F3640352E29648369A4DE1DDAC0FFB6EAC6D1_il2cpp_TypeInfo_var))->___MeshGenerationActionPerfMarker_67;
		V_1 = L_1;
		AutoScope_tFB983697E28885CB10FFDB92D7EFD0615AEF3139 L_2;
		L_2 = ProfilerMarker_Auto_m133FA724EB95D16187B37D2C8A501D7E989B1F8D_inline((&V_1), NULL);
		V_0 = L_2;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0204:
			{// begin finally (depth: 1)
				AutoScope_Dispose_mED763F3F51261EF8FB79DB32CD06E0A3F6C40481_inline((&V_0), NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				// if (outstandingMeshObject == null)
				SpatialAwarenessMeshObject_t5577B6C05F0A1138C582A8F1B7A717B81AE11379* L_3 = __this->___outstandingMeshObject_52;
				if (L_3)
				{
					goto IL_003f_1;
				}
			}
			{
				// Debug.LogWarning($"MeshGenerationAction called for mesh id {meshGenerationResult.MeshId} while no request was outstanding.");
				MeshId_t2CF122567F06D0AA4F80DDA5CB51E8CD3B7EA2AC L_4;
				L_4 = MeshGenerationResult_get_MeshId_m2260BF3F7EB6ED4F2CF0A8F6BEFDD2CD82B6751D_inline((&___meshGenerationResult0), NULL);
				MeshId_t2CF122567F06D0AA4F80DDA5CB51E8CD3B7EA2AC L_5 = L_4;
				RuntimeObject* L_6 = Box(MeshId_t2CF122567F06D0AA4F80DDA5CB51E8CD3B7EA2AC_il2cpp_TypeInfo_var, &L_5);
				String_t* L_7;
				L_7 = String_Format_m8C122B26BC5AA10E2550AECA16E57DAE10F07E30(_stringLiteral3BF5BB21220D8CB3070E7A40BBB1BEF947166C4D, L_6, NULL);
				il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
				Debug_LogWarning_mEF15C6B17CE4E1FA7E379CDB82CE40FCD89A3F28(L_7, NULL);
				// return;
				goto IL_0212;
			}

IL_003f_1:
			{
				// switch (meshGenerationResult.Status)
				int32_t L_8;
				L_8 = MeshGenerationResult_get_Status_m392754927B1E28DB2E6078A212F8FCC013AC10C0_inline((&___meshGenerationResult0), NULL);
				V_5 = L_8;
				int32_t L_9 = V_5;
				switch (L_9)
				{
					case 0:
					{
						goto IL_0074_1;
					}
					case 1:
					{
						goto IL_0068_1;
					}
					case 2:
					{
						goto IL_0202_1;
					}
					case 3:
					{
						goto IL_0068_1;
					}
					case 4:
					{
						goto IL_0068_1;
					}
				}
			}
			{
				goto IL_0202_1;
			}

IL_0068_1:
			{
				// outstandingMeshObject = null;
				__this->___outstandingMeshObject_52 = (SpatialAwarenessMeshObject_t5577B6C05F0A1138C582A8F1B7A717B81AE11379*)NULL;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___outstandingMeshObject_52), (void*)(SpatialAwarenessMeshObject_t5577B6C05F0A1138C582A8F1B7A717B81AE11379*)NULL);
				// break;
				goto IL_0202_1;
			}

IL_0074_1:
			{
				// SpatialAwarenessMeshObject meshObject = outstandingMeshObject;
				SpatialAwarenessMeshObject_t5577B6C05F0A1138C582A8F1B7A717B81AE11379* L_10 = __this->___outstandingMeshObject_52;
				V_2 = L_10;
				// meshObject.Id = meshGenerationResult.MeshId.GetHashCode();
				SpatialAwarenessMeshObject_t5577B6C05F0A1138C582A8F1B7A717B81AE11379* L_11 = V_2;
				MeshId_t2CF122567F06D0AA4F80DDA5CB51E8CD3B7EA2AC L_12;
				L_12 = MeshGenerationResult_get_MeshId_m2260BF3F7EB6ED4F2CF0A8F6BEFDD2CD82B6751D_inline((&___meshGenerationResult0), NULL);
				V_6 = L_12;
				int32_t L_13;
				L_13 = MeshId_GetHashCode_mC6B6428EB5856505023C0D48879B92C2E3F062B0((&V_6), NULL);
				NullCheck(L_11);
				BaseSpatialAwarenessObject_set_Id_m934BABD378424930BFB496263790179DD0D8E9DA_inline(L_11, L_13, NULL);
				// outstandingMeshObject = null;
				__this->___outstandingMeshObject_52 = (SpatialAwarenessMeshObject_t5577B6C05F0A1138C582A8F1B7A717B81AE11379*)NULL;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___outstandingMeshObject_52), (void*)(SpatialAwarenessMeshObject_t5577B6C05F0A1138C582A8F1B7A717B81AE11379*)NULL);
				// bool isMeshUpdate = meshes.ContainsKey(meshObject.Id);
				Dictionary_2_t0E31064CA2CAEBF8E2C6B82A38A6D432A0F91413* L_14 = ((BaseSpatialMeshObserver_t38C1251909F4D9DB3B4E3DA90CFC32670E925B46*)__this)->___meshes_39;
				SpatialAwarenessMeshObject_t5577B6C05F0A1138C582A8F1B7A717B81AE11379* L_15 = V_2;
				NullCheck(L_15);
				int32_t L_16;
				L_16 = BaseSpatialAwarenessObject_get_Id_mF22F83B16AF2EB06B5A070F1232BBD4CE92E9882_inline(L_15, NULL);
				NullCheck(L_14);
				bool L_17;
				L_17 = Dictionary_2_ContainsKey_mA68F42395FC066EDD30D2DE12D1A82F7E49D393B(L_14, L_16, Dictionary_2_ContainsKey_mA68F42395FC066EDD30D2DE12D1A82F7E49D393B_RuntimeMethod_var);
				// Material material = (DisplayOption == SpatialAwarenessMeshDisplayOptions.Occlusion) ?
				//     OcclusionMaterial : VisibleMaterial;
				int32_t L_18;
				L_18 = BaseSpatialMeshObserver_get_DisplayOption_m39E37BB99BACF9803F14B4B39210CA237860B5F3_inline(__this, NULL);
				G_B9_0 = L_17;
				if ((((int32_t)L_18) == ((int32_t)2)))
				{
					G_B10_0 = L_17;
					goto IL_00c0_1;
				}
			}
			{
				Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_19;
				L_19 = BaseSpatialMeshObserver_get_VisibleMaterial_m7828E04C0F97914DEEBE10F42C1B681BDC2B2390_inline(__this, NULL);
				G_B11_0 = L_19;
				G_B11_1 = G_B9_0;
				goto IL_00c6_1;
			}

IL_00c0_1:
			{
				Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_20;
				L_20 = BaseSpatialMeshObserver_get_OcclusionMaterial_m0536D088856D146291B8805385B620509408CAC4_inline(__this, NULL);
				G_B11_0 = L_20;
				G_B11_1 = G_B10_0;
			}

IL_00c6_1:
			{
				V_3 = G_B11_0;
				// material = isMeshUpdate ? meshes[meshObject.Id].Renderer.sharedMaterial : material;
				bool L_21 = G_B11_1;
				G_B12_0 = L_21;
				if (L_21)
				{
					G_B13_0 = L_21;
					goto IL_00cd_1;
				}
			}
			{
				Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_22 = V_3;
				G_B14_0 = L_22;
				G_B14_1 = G_B12_0;
				goto IL_00e8_1;
			}

IL_00cd_1:
			{
				Dictionary_2_t0E31064CA2CAEBF8E2C6B82A38A6D432A0F91413* L_23 = ((BaseSpatialMeshObserver_t38C1251909F4D9DB3B4E3DA90CFC32670E925B46*)__this)->___meshes_39;
				SpatialAwarenessMeshObject_t5577B6C05F0A1138C582A8F1B7A717B81AE11379* L_24 = V_2;
				NullCheck(L_24);
				int32_t L_25;
				L_25 = BaseSpatialAwarenessObject_get_Id_mF22F83B16AF2EB06B5A070F1232BBD4CE92E9882_inline(L_24, NULL);
				NullCheck(L_23);
				SpatialAwarenessMeshObject_t5577B6C05F0A1138C582A8F1B7A717B81AE11379* L_26;
				L_26 = Dictionary_2_get_Item_m157DEDDB79773C39BD6CB57F5753E5C44DDD473C(L_23, L_25, Dictionary_2_get_Item_m157DEDDB79773C39BD6CB57F5753E5C44DDD473C_RuntimeMethod_var);
				NullCheck(L_26);
				MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_27;
				L_27 = BaseSpatialAwarenessObject_get_Renderer_mF9821B506AE27AADD6536A397AED15C9AA0E93DF_inline(L_26, NULL);
				NullCheck(L_27);
				Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_28;
				L_28 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_27, NULL);
				G_B14_0 = L_28;
				G_B14_1 = G_B13_0;
			}

IL_00e8_1:
			{
				V_3 = G_B14_0;
				// meshObject.Renderer.sharedMaterial = material;
				SpatialAwarenessMeshObject_t5577B6C05F0A1138C582A8F1B7A717B81AE11379* L_29 = V_2;
				NullCheck(L_29);
				MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_30;
				L_30 = BaseSpatialAwarenessObject_get_Renderer_mF9821B506AE27AADD6536A397AED15C9AA0E93DF_inline(L_29, NULL);
				Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_31 = V_3;
				NullCheck(L_30);
				Renderer_set_sharedMaterial_m5E842F9A06CFB7B77656EB319881CB4B3E8E4288(L_30, L_31, NULL);
				// if (RecalculateNormals)
				bool L_32;
				L_32 = BaseSpatialMeshObserver_get_RecalculateNormals_m484189F2CAE7A136C69AAE8932524A4B081134B8_inline(__this, NULL);
				G_B15_0 = G_B14_1;
				if (!L_32)
				{
					G_B16_0 = G_B14_1;
					goto IL_010d_1;
				}
			}
			{
				// meshObject.Filter.sharedMesh.RecalculateNormals();
				SpatialAwarenessMeshObject_t5577B6C05F0A1138C582A8F1B7A717B81AE11379* L_33 = V_2;
				NullCheck(L_33);
				MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* L_34;
				L_34 = BaseSpatialAwarenessObject_get_Filter_mFE56EA1F934330429B2F7ED30BC93B7E18C531A9_inline(L_33, NULL);
				NullCheck(L_34);
				Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_35;
				L_35 = MeshFilter_get_sharedMesh_mE4ED3E7E31C1DE5097E4980DA996E620F7D7CB8C(L_34, NULL);
				NullCheck(L_35);
				Mesh_RecalculateNormals_m3AA2788914611444E030CA310E03E3CFE683902B(L_35, NULL);
				G_B16_0 = G_B15_0;
			}

IL_010d_1:
			{
				// meshObject.Renderer.enabled = (DisplayOption != SpatialAwarenessMeshDisplayOptions.None);
				SpatialAwarenessMeshObject_t5577B6C05F0A1138C582A8F1B7A717B81AE11379* L_36 = V_2;
				NullCheck(L_36);
				MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_37;
				L_37 = BaseSpatialAwarenessObject_get_Renderer_mF9821B506AE27AADD6536A397AED15C9AA0E93DF_inline(L_36, NULL);
				int32_t L_38;
				L_38 = BaseSpatialMeshObserver_get_DisplayOption_m39E37BB99BACF9803F14B4B39210CA237860B5F3_inline(__this, NULL);
				NullCheck(L_37);
				Renderer_set_enabled_m015E6D7B825528A31182F267234CC6A925F71DA8(L_37, (bool)((!(((uint32_t)L_38) <= ((uint32_t)0)))? 1 : 0), NULL);
				// if (meshObject.Renderer.enabled)
				SpatialAwarenessMeshObject_t5577B6C05F0A1138C582A8F1B7A717B81AE11379* L_39 = V_2;
				NullCheck(L_39);
				MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_40;
				L_40 = BaseSpatialAwarenessObject_get_Renderer_mF9821B506AE27AADD6536A397AED15C9AA0E93DF_inline(L_39, NULL);
				NullCheck(L_40);
				bool L_41;
				L_41 = Renderer_get_enabled_mFDDF363859AEC88105A925FA7EA341C077B09B54(L_40, NULL);
				G_B17_0 = G_B16_0;
				if (!L_41)
				{
					G_B18_0 = G_B16_0;
					goto IL_013f_1;
				}
			}
			{
				// meshObject.Collider.material = PhysicsMaterial;
				SpatialAwarenessMeshObject_t5577B6C05F0A1138C582A8F1B7A717B81AE11379* L_42 = V_2;
				NullCheck(L_42);
				MeshCollider_tB525E4DDE383252364ED0BDD32CF2B53914EE455* L_43;
				L_43 = SpatialAwarenessMeshObject_get_Collider_m2A7709B01862765D3A3A02B613CD3AD5FEED0EC9_inline(L_42, NULL);
				PhysicMaterial_t4ECED34E04BB2148333467208361A5FBFDCD7131* L_44;
				L_44 = BaseSpatialMeshObserver_get_PhysicsMaterial_m52E39C285B9F35E9116B59F69C71AA856D5A572E_inline(__this, NULL);
				NullCheck(L_43);
				Collider_set_material_mE6FB0AA80863EA6746CD99606C90DB97DBBC4476(L_43, L_44, NULL);
				G_B18_0 = G_B17_0;
			}

IL_013f_1:
			{
				// if (isMeshUpdate)
				bool L_45 = G_B18_0;
				G_B19_0 = L_45;
				if (!L_45)
				{
					G_B20_0 = L_45;
					goto IL_016b_1;
				}
			}
			{
				// ReclaimMeshObject(meshes[meshObject.Id]);
				Dictionary_2_t0E31064CA2CAEBF8E2C6B82A38A6D432A0F91413* L_46 = ((BaseSpatialMeshObserver_t38C1251909F4D9DB3B4E3DA90CFC32670E925B46*)__this)->___meshes_39;
				SpatialAwarenessMeshObject_t5577B6C05F0A1138C582A8F1B7A717B81AE11379* L_47 = V_2;
				NullCheck(L_47);
				int32_t L_48;
				L_48 = BaseSpatialAwarenessObject_get_Id_mF22F83B16AF2EB06B5A070F1232BBD4CE92E9882_inline(L_47, NULL);
				NullCheck(L_46);
				SpatialAwarenessMeshObject_t5577B6C05F0A1138C582A8F1B7A717B81AE11379* L_49;
				L_49 = Dictionary_2_get_Item_m157DEDDB79773C39BD6CB57F5753E5C44DDD473C(L_46, L_48, Dictionary_2_get_Item_m157DEDDB79773C39BD6CB57F5753E5C44DDD473C_RuntimeMethod_var);
				GenericXRSDKSpatialMeshObserver_ReclaimMeshObject_m4898743E17B3906BC85843AFD26CC11CFD29E66F(__this, L_49, NULL);
				// meshes.Remove(meshObject.Id);
				Dictionary_2_t0E31064CA2CAEBF8E2C6B82A38A6D432A0F91413* L_50 = ((BaseSpatialMeshObserver_t38C1251909F4D9DB3B4E3DA90CFC32670E925B46*)__this)->___meshes_39;
				SpatialAwarenessMeshObject_t5577B6C05F0A1138C582A8F1B7A717B81AE11379* L_51 = V_2;
				NullCheck(L_51);
				int32_t L_52;
				L_52 = BaseSpatialAwarenessObject_get_Id_mF22F83B16AF2EB06B5A070F1232BBD4CE92E9882_inline(L_51, NULL);
				NullCheck(L_50);
				bool L_53;
				L_53 = Dictionary_2_Remove_mEC3BD6FA8D8A74CB98F57255A1DBC49D253F2EC6(L_50, L_52, Dictionary_2_Remove_mEC3BD6FA8D8A74CB98F57255A1DBC49D253F2EC6_RuntimeMethod_var);
				G_B20_0 = G_B19_0;
			}

IL_016b_1:
			{
				// meshes.Add(meshObject.Id, meshObject);
				Dictionary_2_t0E31064CA2CAEBF8E2C6B82A38A6D432A0F91413* L_54 = ((BaseSpatialMeshObserver_t38C1251909F4D9DB3B4E3DA90CFC32670E925B46*)__this)->___meshes_39;
				SpatialAwarenessMeshObject_t5577B6C05F0A1138C582A8F1B7A717B81AE11379* L_55 = V_2;
				NullCheck(L_55);
				int32_t L_56;
				L_56 = BaseSpatialAwarenessObject_get_Id_mF22F83B16AF2EB06B5A070F1232BBD4CE92E9882_inline(L_55, NULL);
				SpatialAwarenessMeshObject_t5577B6C05F0A1138C582A8F1B7A717B81AE11379* L_57 = V_2;
				NullCheck(L_54);
				Dictionary_2_Add_m03479DF66EDA795A65A13DCB19BA8B98C15D78DC(L_54, L_56, L_57, Dictionary_2_Add_m03479DF66EDA795A65A13DCB19BA8B98C15D78DC_RuntimeMethod_var);
				// Transform meshObjectParent = (ObservedObjectParent.transform != null) ? ObservedObjectParent.transform : null;
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_58;
				L_58 = VirtualFuncInvoker0< GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* >::Invoke(84 /* UnityEngine.GameObject Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialMeshObserver::get_ObservedObjectParent() */, __this);
				NullCheck(L_58);
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_59;
				L_59 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_58, NULL);
				il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
				bool L_60;
				L_60 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_59, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
				G_B21_0 = G_B20_0;
				if (L_60)
				{
					G_B22_0 = G_B20_0;
					goto IL_0193_1;
				}
			}
			{
				G_B23_0 = ((Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)(NULL));
				G_B23_1 = G_B21_0;
				goto IL_019e_1;
			}

IL_0193_1:
			{
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_61;
				L_61 = VirtualFuncInvoker0< GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* >::Invoke(84 /* UnityEngine.GameObject Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialMeshObserver::get_ObservedObjectParent() */, __this);
				NullCheck(L_61);
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_62;
				L_62 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_61, NULL);
				G_B23_0 = L_62;
				G_B23_1 = G_B22_0;
			}

IL_019e_1:
			{
				V_4 = G_B23_0;
				// meshObject.GameObject.transform.SetParent(meshObjectParent, false);
				SpatialAwarenessMeshObject_t5577B6C05F0A1138C582A8F1B7A717B81AE11379* L_63 = V_2;
				NullCheck(L_63);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_64;
				L_64 = BaseSpatialAwarenessObject_get_GameObject_m9A7D5AD66EAFD693335D73289E08E4F62D15EB06_inline(L_63, NULL);
				NullCheck(L_64);
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_65;
				L_65 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_64, NULL);
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_66 = V_4;
				NullCheck(L_65);
				Transform_SetParent_m9BDD7B7476714B2D7919B10BDC22CE75C0A0A195(L_65, L_66, (bool)0, NULL);
				// meshEventData.Initialize(this, meshObject.Id, meshObject);
				MixedRealitySpatialAwarenessEventData_1_tE46EB2E96DFDDF77196F0A24715743FD22640021* L_67 = ((BaseSpatialMeshObserver_t38C1251909F4D9DB3B4E3DA90CFC32670E925B46*)__this)->___meshEventData_26;
				SpatialAwarenessMeshObject_t5577B6C05F0A1138C582A8F1B7A717B81AE11379* L_68 = V_2;
				NullCheck(L_68);
				int32_t L_69;
				L_69 = BaseSpatialAwarenessObject_get_Id_mF22F83B16AF2EB06B5A070F1232BBD4CE92E9882_inline(L_68, NULL);
				SpatialAwarenessMeshObject_t5577B6C05F0A1138C582A8F1B7A717B81AE11379* L_70 = V_2;
				NullCheck(L_67);
				MixedRealitySpatialAwarenessEventData_1_Initialize_m739999E8A50EE7375EC939D2513D582FCA8C6B59(L_67, __this, L_69, L_70, MixedRealitySpatialAwarenessEventData_1_Initialize_m739999E8A50EE7375EC939D2513D582FCA8C6B59_RuntimeMethod_var);
				// if (isMeshUpdate)
				if (!G_B23_1)
				{
					goto IL_01e6_1;
				}
			}
			{
				// Service?.HandleEvent(meshEventData, OnMeshUpdated);
				RuntimeObject* L_71;
				L_71 = BaseDataProvider_1_get_Service_mC6DAD45EF35B39E07955ABECAAA8C7520ABFBE5F_inline(__this, BaseDataProvider_1_get_Service_mC6DAD45EF35B39E07955ABECAAA8C7520ABFBE5F_RuntimeMethod_var);
				RuntimeObject* L_72 = L_71;
				G_B25_0 = L_72;
				if (L_72)
				{
					G_B26_0 = L_72;
					goto IL_01d4_1;
				}
			}
			{
				goto IL_0212;
			}

IL_01d4_1:
			{
				MixedRealitySpatialAwarenessEventData_1_tE46EB2E96DFDDF77196F0A24715743FD22640021* L_73 = ((BaseSpatialMeshObserver_t38C1251909F4D9DB3B4E3DA90CFC32670E925B46*)__this)->___meshEventData_26;
				il2cpp_codegen_runtime_class_init_inline(BaseSpatialMeshObserver_t38C1251909F4D9DB3B4E3DA90CFC32670E925B46_il2cpp_TypeInfo_var);
				EventFunction_1_tEBC0FE0CCBC0E2CED086EF11F4973BE9B1419E00* L_74 = ((BaseSpatialMeshObserver_t38C1251909F4D9DB3B4E3DA90CFC32670E925B46_StaticFields*)il2cpp_codegen_static_fields_for(BaseSpatialMeshObserver_t38C1251909F4D9DB3B4E3DA90CFC32670E925B46_il2cpp_TypeInfo_var))->___OnMeshUpdated_34;
				NullCheck(G_B26_0);
				GenericInterfaceActionInvoker2< BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F*, EventFunction_1_tEBC0FE0CCBC0E2CED086EF11F4973BE9B1419E00* >::Invoke(IMixedRealityEventSystem_HandleEvent_TisIMixedRealitySpatialAwarenessObservationHandler_1_t92770D3EC6A2A2A1BCC5AFF6614A5CA110847BA4_m743EDACDCE8A868B6CDFB9D1C7AC29B2AF204395_RuntimeMethod_var, G_B26_0, L_73, L_74);
				goto IL_0212;
			}

IL_01e6_1:
			{
				// Service?.HandleEvent(meshEventData, OnMeshAdded);
				RuntimeObject* L_75;
				L_75 = BaseDataProvider_1_get_Service_mC6DAD45EF35B39E07955ABECAAA8C7520ABFBE5F_inline(__this, BaseDataProvider_1_get_Service_mC6DAD45EF35B39E07955ABECAAA8C7520ABFBE5F_RuntimeMethod_var);
				RuntimeObject* L_76 = L_75;
				G_B28_0 = L_76;
				if (L_76)
				{
					G_B29_0 = L_76;
					goto IL_01f2_1;
				}
			}
			{
				goto IL_0212;
			}

IL_01f2_1:
			{
				MixedRealitySpatialAwarenessEventData_1_tE46EB2E96DFDDF77196F0A24715743FD22640021* L_77 = ((BaseSpatialMeshObserver_t38C1251909F4D9DB3B4E3DA90CFC32670E925B46*)__this)->___meshEventData_26;
				il2cpp_codegen_runtime_class_init_inline(BaseSpatialMeshObserver_t38C1251909F4D9DB3B4E3DA90CFC32670E925B46_il2cpp_TypeInfo_var);
				EventFunction_1_tEBC0FE0CCBC0E2CED086EF11F4973BE9B1419E00* L_78 = ((BaseSpatialMeshObserver_t38C1251909F4D9DB3B4E3DA90CFC32670E925B46_StaticFields*)il2cpp_codegen_static_fields_for(BaseSpatialMeshObserver_t38C1251909F4D9DB3B4E3DA90CFC32670E925B46_il2cpp_TypeInfo_var))->___OnMeshAdded_32;
				NullCheck(G_B29_0);
				GenericInterfaceActionInvoker2< BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F*, EventFunction_1_tEBC0FE0CCBC0E2CED086EF11F4973BE9B1419E00* >::Invoke(IMixedRealityEventSystem_HandleEvent_TisIMixedRealitySpatialAwarenessObservationHandler_1_t92770D3EC6A2A2A1BCC5AFF6614A5CA110847BA4_m743EDACDCE8A868B6CDFB9D1C7AC29B2AF204395_RuntimeMethod_var, G_B29_0, L_77, L_78);
			}

IL_0202_1:
			{
				// }
				goto IL_0212;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0212:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver::Initialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GenericXRSDKSpatialMeshObserver_Initialize_m82B916FC299693FEEF7448194B7D03B4E5F5D7AB (GenericXRSDKSpatialMeshObserver_t992F3640352E29648369A4DE1DDAC0FFB6EAC6D1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseDataProvider_1_get_Service_mC6DAD45EF35B39E07955ABECAAA8C7520ABFBE5F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// base.Initialize();
		BaseSpatialMeshObserver_Initialize_m3E36BF701BCBB994EA4A494D7E4FC7E0E9B573BD(__this, NULL);
		// if (Service == null || MeshSubsystem == null) { return; }
		RuntimeObject* L_0;
		L_0 = BaseDataProvider_1_get_Service_mC6DAD45EF35B39E07955ABECAAA8C7520ABFBE5F_inline(__this, BaseDataProvider_1_get_Service_mC6DAD45EF35B39E07955ABECAAA8C7520ABFBE5F_RuntimeMethod_var);
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		XRMeshSubsystem_tDDC31EC10D4F0517542F9EB296428A0F7EC2C3B2* L_1;
		L_1 = GenericXRSDKSpatialMeshObserver_get_MeshSubsystem_m6AC67F5232D1623CB2B9FBC1F6EFA832A9D99B22(__this, NULL);
		if (L_1)
		{
			goto IL_0017;
		}
	}

IL_0016:
	{
		// if (Service == null || MeshSubsystem == null) { return; }
		return;
	}

IL_0017:
	{
		// if (RuntimeSpatialMeshPrefab != null)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2;
		L_2 = BaseSpatialMeshObserver_get_RuntimeSpatialMeshPrefab_m74F19923F50D51C5EC1F947B73311F0B67F60998_inline(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_2, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_3)
		{
			goto IL_002b;
		}
	}
	{
		// AddRuntimeSpatialMeshPrefabToHierarchy();
		BaseSpatialMeshObserver_AddRuntimeSpatialMeshPrefabToHierarchy_m344D9868965B9F08E71E4EF4BC4F3A296F674F24(__this, NULL);
	}

IL_002b:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GenericXRSDKSpatialMeshObserver__cctor_m1055C9A271379EE2924E2E4A64FBE5601617DF88 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GenericXRSDKSpatialMeshObserver_t992F3640352E29648369A4DE1DDAC0FFB6EAC6D1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2DF7A5156925F5C5400D60BBBA1DBB1D4708F9C8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2F391D50F63A6FC48ECA55EDAD80B5FEBB55F14B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral459F4A34D28361530436BDBA2A8D30629FB12A1A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral83A5D26D7F7B772C9B2B7433282DB838A0458B02);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8C28816060FEEE746B87E5941ABB43D404C80A1F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA50155418AE606D101155853814C5E9E645A134D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA5935C2A28B34B7440328EC778E265A054EC3184);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBC1690A7A8FDDC8138AAF739B6C7DC4B11F17E2F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDDD73C1F397FB2056DDA796B0B75FBF02D49F4AB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF08DC89A26A00217BD48D7ADBC9B771D3CCBDFED);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF60B40C4DEA44E4EF9CB41310FC155C670E29C47);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static readonly ProfilerMarker UpdatePerfMarker = new ProfilerMarker("[MRTK] GenericXRSDKSpatialMeshObserver.Update");
		ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD L_0;
		memset((&L_0), 0, sizeof(L_0));
		ProfilerMarker__ctor_mDD68B0A8B71E0301F592AF8891560150E55699C8_inline((&L_0), _stringLiteral2DF7A5156925F5C5400D60BBBA1DBB1D4708F9C8, /*hidden argument*/NULL);
		((GenericXRSDKSpatialMeshObserver_t992F3640352E29648369A4DE1DDAC0FFB6EAC6D1_StaticFields*)il2cpp_codegen_static_fields_for(GenericXRSDKSpatialMeshObserver_t992F3640352E29648369A4DE1DDAC0FFB6EAC6D1_il2cpp_TypeInfo_var))->___UpdatePerfMarker_49 = L_0;
		// private static readonly ProfilerMarker ResumePerfMarker = new ProfilerMarker("[MRTK] GenericXRSDKSpatialMeshObserver.Resume");
		ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD L_1;
		memset((&L_1), 0, sizeof(L_1));
		ProfilerMarker__ctor_mDD68B0A8B71E0301F592AF8891560150E55699C8_inline((&L_1), _stringLiteral83A5D26D7F7B772C9B2B7433282DB838A0458B02, /*hidden argument*/NULL);
		((GenericXRSDKSpatialMeshObserver_t992F3640352E29648369A4DE1DDAC0FFB6EAC6D1_StaticFields*)il2cpp_codegen_static_fields_for(GenericXRSDKSpatialMeshObserver_t992F3640352E29648369A4DE1DDAC0FFB6EAC6D1_il2cpp_TypeInfo_var))->___ResumePerfMarker_55 = L_1;
		// private static readonly ProfilerMarker SuspendPerfMarker = new ProfilerMarker("[MRTK] GenericXRSDKSpatialMeshObserver.Suspend");
		ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD L_2;
		memset((&L_2), 0, sizeof(L_2));
		ProfilerMarker__ctor_mDD68B0A8B71E0301F592AF8891560150E55699C8_inline((&L_2), _stringLiteralBC1690A7A8FDDC8138AAF739B6C7DC4B11F17E2F, /*hidden argument*/NULL);
		((GenericXRSDKSpatialMeshObserver_t992F3640352E29648369A4DE1DDAC0FFB6EAC6D1_StaticFields*)il2cpp_codegen_static_fields_for(GenericXRSDKSpatialMeshObserver_t992F3640352E29648369A4DE1DDAC0FFB6EAC6D1_il2cpp_TypeInfo_var))->___SuspendPerfMarker_56 = L_2;
		// private static readonly ProfilerMarker ClearObservationsPerfMarker = new ProfilerMarker("[MRTK] GenericXRSDKSpatialMeshObserver.ClearObservations");
		ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD L_3;
		memset((&L_3), 0, sizeof(L_3));
		ProfilerMarker__ctor_mDD68B0A8B71E0301F592AF8891560150E55699C8_inline((&L_3), _stringLiteralA5935C2A28B34B7440328EC778E265A054EC3184, /*hidden argument*/NULL);
		((GenericXRSDKSpatialMeshObserver_t992F3640352E29648369A4DE1DDAC0FFB6EAC6D1_StaticFields*)il2cpp_codegen_static_fields_for(GenericXRSDKSpatialMeshObserver_t992F3640352E29648369A4DE1DDAC0FFB6EAC6D1_il2cpp_TypeInfo_var))->___ClearObservationsPerfMarker_57 = L_3;
		// private static readonly ProfilerMarker UpdateObserverPerfMarker = new ProfilerMarker("[MRTK] GenericXRSDKSpatialMeshObserver.UpdateObserver");
		ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD L_4;
		memset((&L_4), 0, sizeof(L_4));
		ProfilerMarker__ctor_mDD68B0A8B71E0301F592AF8891560150E55699C8_inline((&L_4), _stringLiteral2F391D50F63A6FC48ECA55EDAD80B5FEBB55F14B, /*hidden argument*/NULL);
		((GenericXRSDKSpatialMeshObserver_t992F3640352E29648369A4DE1DDAC0FFB6EAC6D1_StaticFields*)il2cpp_codegen_static_fields_for(GenericXRSDKSpatialMeshObserver_t992F3640352E29648369A4DE1DDAC0FFB6EAC6D1_il2cpp_TypeInfo_var))->___UpdateObserverPerfMarker_58 = L_4;
		// private static readonly ProfilerMarker RequestMeshPerfMarker = new ProfilerMarker("[MRTK] GenericXRSDKSpatialMeshObserver.RequestMesh");
		ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD L_5;
		memset((&L_5), 0, sizeof(L_5));
		ProfilerMarker__ctor_mDD68B0A8B71E0301F592AF8891560150E55699C8_inline((&L_5), _stringLiteral8C28816060FEEE746B87E5941ABB43D404C80A1F, /*hidden argument*/NULL);
		((GenericXRSDKSpatialMeshObserver_t992F3640352E29648369A4DE1DDAC0FFB6EAC6D1_StaticFields*)il2cpp_codegen_static_fields_for(GenericXRSDKSpatialMeshObserver_t992F3640352E29648369A4DE1DDAC0FFB6EAC6D1_il2cpp_TypeInfo_var))->___RequestMeshPerfMarker_59 = L_5;
		// private static readonly ProfilerMarker RemoveMeshObjectPerfMarker = new ProfilerMarker("[MRTK] GenericXRSDKSpatialMeshObserver.RemoveMeshObject");
		ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD L_6;
		memset((&L_6), 0, sizeof(L_6));
		ProfilerMarker__ctor_mDD68B0A8B71E0301F592AF8891560150E55699C8_inline((&L_6), _stringLiteralF08DC89A26A00217BD48D7ADBC9B771D3CCBDFED, /*hidden argument*/NULL);
		((GenericXRSDKSpatialMeshObserver_t992F3640352E29648369A4DE1DDAC0FFB6EAC6D1_StaticFields*)il2cpp_codegen_static_fields_for(GenericXRSDKSpatialMeshObserver_t992F3640352E29648369A4DE1DDAC0FFB6EAC6D1_il2cpp_TypeInfo_var))->___RemoveMeshObjectPerfMarker_60 = L_6;
		// private static readonly ProfilerMarker ReclaimMeshObjectPerfMarker = new ProfilerMarker("[MRTK] GenericXRSDKSpatialMeshObserver.ReclaimMeshObject");
		ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD L_7;
		memset((&L_7), 0, sizeof(L_7));
		ProfilerMarker__ctor_mDD68B0A8B71E0301F592AF8891560150E55699C8_inline((&L_7), _stringLiteralDDD73C1F397FB2056DDA796B0B75FBF02D49F4AB, /*hidden argument*/NULL);
		((GenericXRSDKSpatialMeshObserver_t992F3640352E29648369A4DE1DDAC0FFB6EAC6D1_StaticFields*)il2cpp_codegen_static_fields_for(GenericXRSDKSpatialMeshObserver_t992F3640352E29648369A4DE1DDAC0FFB6EAC6D1_il2cpp_TypeInfo_var))->___ReclaimMeshObjectPerfMarker_61 = L_7;
		// private static readonly ProfilerMarker ConfigureObserverVolumePerfMarker = new ProfilerMarker("[MRTK] GenericXRSDKSpatialMeshObserver.ConfigureObserverVolume");
		ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD L_8;
		memset((&L_8), 0, sizeof(L_8));
		ProfilerMarker__ctor_mDD68B0A8B71E0301F592AF8891560150E55699C8_inline((&L_8), _stringLiteral459F4A34D28361530436BDBA2A8D30629FB12A1A, /*hidden argument*/NULL);
		((GenericXRSDKSpatialMeshObserver_t992F3640352E29648369A4DE1DDAC0FFB6EAC6D1_StaticFields*)il2cpp_codegen_static_fields_for(GenericXRSDKSpatialMeshObserver_t992F3640352E29648369A4DE1DDAC0FFB6EAC6D1_il2cpp_TypeInfo_var))->___ConfigureObserverVolumePerfMarker_62 = L_8;
		// private static readonly ProfilerMarker UpdateMeshesPerfMarker = new ProfilerMarker("[MRTK] GenericXRSDKSpatialMeshObserver.UpdateMeshes");
		ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD L_9;
		memset((&L_9), 0, sizeof(L_9));
		ProfilerMarker__ctor_mDD68B0A8B71E0301F592AF8891560150E55699C8_inline((&L_9), _stringLiteralA50155418AE606D101155853814C5E9E645A134D, /*hidden argument*/NULL);
		((GenericXRSDKSpatialMeshObserver_t992F3640352E29648369A4DE1DDAC0FFB6EAC6D1_StaticFields*)il2cpp_codegen_static_fields_for(GenericXRSDKSpatialMeshObserver_t992F3640352E29648369A4DE1DDAC0FFB6EAC6D1_il2cpp_TypeInfo_var))->___UpdateMeshesPerfMarker_66 = L_9;
		// private static readonly ProfilerMarker MeshGenerationActionPerfMarker = new ProfilerMarker("[MRTK] GenericXRSDKSpatialMeshObserver.MeshGenerationAction");
		ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD L_10;
		memset((&L_10), 0, sizeof(L_10));
		ProfilerMarker__ctor_mDD68B0A8B71E0301F592AF8891560150E55699C8_inline((&L_10), _stringLiteralF60B40C4DEA44E4EF9CB41310FC155C670E29C47, /*hidden argument*/NULL);
		((GenericXRSDKSpatialMeshObserver_t992F3640352E29648369A4DE1DDAC0FFB6EAC6D1_StaticFields*)il2cpp_codegen_static_fields_for(GenericXRSDKSpatialMeshObserver_t992F3640352E29648369A4DE1DDAC0FFB6EAC6D1_il2cpp_TypeInfo_var))->___MeshGenerationActionPerfMarker_67 = L_10;
		return;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver::<EnableIfLoaderBecomesActive>b__5_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GenericXRSDKSpatialMeshObserver_U3CEnableIfLoaderBecomesActiveU3Eb__5_0_mC23E261179757DB43F443181EDF5AED35955CCF6 (GenericXRSDKSpatialMeshObserver_t992F3640352E29648369A4DE1DDAC0FFB6EAC6D1* __this, const RuntimeMethod* method) 
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
		L_0 = VirtualFuncInvoker0< Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 >::Invoke(91 /* System.Nullable`1<System.Boolean> Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver::get_IsActiveLoader() */, __this);
		V_0 = L_0;
		bool L_1;
		L_1 = Nullable_1_get_HasValue_m6B76D139692C43B2AF7C695FAB044B16ACFAF355_inline((&V_0), Nullable_1_get_HasValue_m6B76D139692C43B2AF7C695FAB044B16ACFAF355_RuntimeMethod_var);
		return L_1;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver::<RequestMesh>b__28_0(UnityEngine.XR.MeshGenerationResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GenericXRSDKSpatialMeshObserver_U3CRequestMeshU3Eb__28_0_m3309866C6730F77465FF5914746ED571A58B3EC5 (GenericXRSDKSpatialMeshObserver_t992F3640352E29648369A4DE1DDAC0FFB6EAC6D1* __this, MeshGenerationResult_tD5A6D639B2CF1A3F855AFB41861DEC48DC0D3A9C ___meshGenerationResult0, const RuntimeMethod* method) 
{
	{
		// MeshSubsystem.GenerateMeshAsync(meshId, newMesh.Filter.mesh, newMesh.Collider, MeshVertexAttributes.Normals, (MeshGenerationResult meshGenerationResult) => MeshGenerationAction(meshGenerationResult));
		MeshGenerationResult_tD5A6D639B2CF1A3F855AFB41861DEC48DC0D3A9C L_0 = ___meshGenerationResult0;
		GenericXRSDKSpatialMeshObserver_MeshGenerationAction_m70D7E84CB7947DC969C8B12264FF50BA22174643(__this, L_0, NULL);
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
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver/<EnableIfLoaderBecomesActive>d__5::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CEnableIfLoaderBecomesActiveU3Ed__5_MoveNext_m4CF0063FCEA4F11EC5FD47A19A9684C54BB060B0 (U3CEnableIfLoaderBecomesActiveU3Ed__5_tCBEE973659246124AEC4D1E7D137AF0A2F3A792C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncVoidMethodBuilder_AwaitOnCompleted_TisSimpleCoroutineAwaiter_t9DF0277C21C7F3B9CE7C9563D257D9A4821B4898_TisU3CEnableIfLoaderBecomesActiveU3Ed__5_tCBEE973659246124AEC4D1E7D137AF0A2F3A792C_mE304077E47AB07774FBBC1735435EAFB2BB941B0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GenericXRSDKSpatialMeshObserver_U3CEnableIfLoaderBecomesActiveU3Eb__5_0_mC23E261179757DB43F443181EDF5AED35955CCF6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_Value_mE2C54C6AE9FC9F05BF44CD9D7D61DC6CD56E3E28_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SimpleCoroutineAwaiter_t9DF0277C21C7F3B9CE7C9563D257D9A4821B4898_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitUntil_tA1CD487C5811E7C1F8C4ADA85DF5F4EFDC1D41BD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	GenericXRSDKSpatialMeshObserver_t992F3640352E29648369A4DE1DDAC0FFB6EAC6D1* V_1 = NULL;
	SimpleCoroutineAwaiter_t9DF0277C21C7F3B9CE7C9563D257D9A4821B4898* V_2 = NULL;
	Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 V_3;
	memset((&V_3), 0, sizeof(V_3));
	Exception_t* V_4 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		GenericXRSDKSpatialMeshObserver_t992F3640352E29648369A4DE1DDAC0FFB6EAC6D1* L_1 = __this->___U3CU3E4__this_2;
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
			GenericXRSDKSpatialMeshObserver_t992F3640352E29648369A4DE1DDAC0FFB6EAC6D1* L_3 = V_1;
			Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* L_4 = (Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457*)il2cpp_codegen_object_new(Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457_il2cpp_TypeInfo_var);
			NullCheck(L_4);
			Func_1__ctor_mDFFAE9C73346372438B5B04C4558AC42F1A3DA22(L_4, L_3, (intptr_t)((void*)GenericXRSDKSpatialMeshObserver_U3CEnableIfLoaderBecomesActiveU3Eb__5_0_mC23E261179757DB43F443181EDF5AED35955CCF6_RuntimeMethod_var), NULL);
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
			AsyncVoidMethodBuilder_AwaitOnCompleted_TisSimpleCoroutineAwaiter_t9DF0277C21C7F3B9CE7C9563D257D9A4821B4898_TisU3CEnableIfLoaderBecomesActiveU3Ed__5_tCBEE973659246124AEC4D1E7D137AF0A2F3A792C_mE304077E47AB07774FBBC1735435EAFB2BB941B0(L_11, (&V_2), __this, AsyncVoidMethodBuilder_AwaitOnCompleted_TisSimpleCoroutineAwaiter_t9DF0277C21C7F3B9CE7C9563D257D9A4821B4898_TisU3CEnableIfLoaderBecomesActiveU3Ed__5_tCBEE973659246124AEC4D1E7D137AF0A2F3A792C_mE304077E47AB07774FBBC1735435EAFB2BB941B0_RuntimeMethod_var);
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
			GenericXRSDKSpatialMeshObserver_t992F3640352E29648369A4DE1DDAC0FFB6EAC6D1* L_15 = V_1;
			NullCheck(L_15);
			Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 L_16;
			L_16 = VirtualFuncInvoker0< Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 >::Invoke(91 /* System.Nullable`1<System.Boolean> Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver::get_IsActiveLoader() */, L_15);
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
			GenericXRSDKSpatialMeshObserver_t992F3640352E29648369A4DE1DDAC0FFB6EAC6D1* L_18 = V_1;
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
IL2CPP_EXTERN_C  void U3CEnableIfLoaderBecomesActiveU3Ed__5_MoveNext_m4CF0063FCEA4F11EC5FD47A19A9684C54BB060B0_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	U3CEnableIfLoaderBecomesActiveU3Ed__5_tCBEE973659246124AEC4D1E7D137AF0A2F3A792C* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CEnableIfLoaderBecomesActiveU3Ed__5_tCBEE973659246124AEC4D1E7D137AF0A2F3A792C*>(__this + _offset);
	U3CEnableIfLoaderBecomesActiveU3Ed__5_MoveNext_m4CF0063FCEA4F11EC5FD47A19A9684C54BB060B0(_thisAdjusted, method);
}
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver/<EnableIfLoaderBecomesActive>d__5::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CEnableIfLoaderBecomesActiveU3Ed__5_SetStateMachine_m04E0D3144D43BB41FA61B916B1CCEAF2D22DC07E (U3CEnableIfLoaderBecomesActiveU3Ed__5_tCBEE973659246124AEC4D1E7D137AF0A2F3A792C* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method) 
{
	{
		AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* L_0 = (&__this->___U3CU3Et__builder_1);
		RuntimeObject* L_1 = ___stateMachine0;
		AsyncVoidMethodBuilder_SetStateMachine_m48640FB81C34D4C2B5A5BBA7F5AE17DC50BF1A25(L_0, L_1, NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CEnableIfLoaderBecomesActiveU3Ed__5_SetStateMachine_m04E0D3144D43BB41FA61B916B1CCEAF2D22DC07E_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	U3CEnableIfLoaderBecomesActiveU3Ed__5_tCBEE973659246124AEC4D1E7D137AF0A2F3A792C* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CEnableIfLoaderBecomesActiveU3Ed__5_tCBEE973659246124AEC4D1E7D137AF0A2F3A792C*>(__this + _offset);
	U3CEnableIfLoaderBecomesActiveU3Ed__5_SetStateMachine_m04E0D3144D43BB41FA61B916B1CCEAF2D22DC07E(_thisAdjusted, ___stateMachine0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Nullable`1<System.Boolean> Microsoft.MixedReality.Toolkit.XRSDK.LoaderHelpers::IsLoaderActive(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 LoaderHelpers_IsLoaderActive_m0D7D7AB862B4AF044BB290C6623D837B36702138 (String_t* ___loaderName0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1__ctor_m4FAA8281CB4EFFD8B817734351FB3AC20A0CD6F5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (XRGeneralSettings.Instance != null
		//     && XRGeneralSettings.Instance.Manager != null
		//     && XRGeneralSettings.Instance.Manager.activeLoader != null)
		il2cpp_codegen_runtime_class_init_inline(XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE_il2cpp_TypeInfo_var);
		XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE* L_0;
		L_0 = XRGeneralSettings_get_Instance_mF17EAF521849B0E007AEE3B009727D3DF9EF110F_inline(NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0056;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE_il2cpp_TypeInfo_var);
		XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE* L_2;
		L_2 = XRGeneralSettings_get_Instance_mF17EAF521849B0E007AEE3B009727D3DF9EF110F_inline(NULL);
		NullCheck(L_2);
		XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52* L_3;
		L_3 = XRGeneralSettings_get_Manager_m112FEB4E6DFB7B5F5C4A2DEC4E975CF2EBD51B42_inline(L_2, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_3, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_4)
		{
			goto IL_0056;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE_il2cpp_TypeInfo_var);
		XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE* L_5;
		L_5 = XRGeneralSettings_get_Instance_mF17EAF521849B0E007AEE3B009727D3DF9EF110F_inline(NULL);
		NullCheck(L_5);
		XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52* L_6;
		L_6 = XRGeneralSettings_get_Manager_m112FEB4E6DFB7B5F5C4A2DEC4E975CF2EBD51B42_inline(L_5, NULL);
		NullCheck(L_6);
		XRLoader_t80B1B1934C40561C5352ABC95D567DC2A7C9C976* L_7;
		L_7 = XRManagerSettings_get_activeLoader_mFB3B679005792D3DF871EAA7120DD86DCA1D5DEA_inline(L_6, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_8;
		L_8 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_7, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_8)
		{
			goto IL_0056;
		}
	}
	{
		// return XRGeneralSettings.Instance.Manager.activeLoader.name == loaderName;
		il2cpp_codegen_runtime_class_init_inline(XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE_il2cpp_TypeInfo_var);
		XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE* L_9;
		L_9 = XRGeneralSettings_get_Instance_mF17EAF521849B0E007AEE3B009727D3DF9EF110F_inline(NULL);
		NullCheck(L_9);
		XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52* L_10;
		L_10 = XRGeneralSettings_get_Manager_m112FEB4E6DFB7B5F5C4A2DEC4E975CF2EBD51B42_inline(L_9, NULL);
		NullCheck(L_10);
		XRLoader_t80B1B1934C40561C5352ABC95D567DC2A7C9C976* L_11;
		L_11 = XRManagerSettings_get_activeLoader_mFB3B679005792D3DF871EAA7120DD86DCA1D5DEA_inline(L_10, NULL);
		NullCheck(L_11);
		String_t* L_12;
		L_12 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_11, NULL);
		String_t* L_13 = ___loaderName0;
		bool L_14;
		L_14 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_12, L_13, NULL);
		Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 L_15;
		memset((&L_15), 0, sizeof(L_15));
		Nullable_1__ctor_m4FAA8281CB4EFFD8B817734351FB3AC20A0CD6F5((&L_15), L_14, /*hidden argument*/Nullable_1__ctor_m4FAA8281CB4EFFD8B817734351FB3AC20A0CD6F5_RuntimeMethod_var);
		return L_15;
	}

IL_0056:
	{
		// return null;
		il2cpp_codegen_initobj((&V_0), sizeof(Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01));
		Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 L_16 = V_0;
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
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.XRSDKBoundarySystem::.ctor(Microsoft.MixedReality.Toolkit.Boundary.MixedRealityBoundaryVisualizationProfile,Microsoft.MixedReality.Toolkit.Utilities.ExperienceScale)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRSDKBoundarySystem__ctor_mF06D566EA053F5FD1C775E51E556BBB86C050EA4 (XRSDKBoundarySystem_t968246960310390A317722A0F222895980A9F05D* __this, MixedRealityBoundaryVisualizationProfile_t8696935F2FD43867A7389688367D5F2C41862E81* ___profile0, int32_t ___scale1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseBoundarySystem_t17725CB18637398B438C3C2B6E27DA80B4B27413_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAB67961043E6A691CE0B1DF2893B07BEFCAD9C60);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public override string Name { get; protected set; } = "XR SDK Boundary System";
		__this->___U3CNameU3Ek__BackingField_54 = _stringLiteralAB67961043E6A691CE0B1DF2893B07BEFCAD9C60;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CNameU3Ek__BackingField_54), (void*)_stringLiteralAB67961043E6A691CE0B1DF2893B07BEFCAD9C60);
		// ExperienceScale scale) : base(profile, scale)
		MixedRealityBoundaryVisualizationProfile_t8696935F2FD43867A7389688367D5F2C41862E81* L_0 = ___profile0;
		int32_t L_1 = ___scale1;
		il2cpp_codegen_runtime_class_init_inline(BaseBoundarySystem_t17725CB18637398B438C3C2B6E27DA80B4B27413_il2cpp_TypeInfo_var);
		BaseBoundarySystem__ctor_m453F52B1343D5FDAD333E24887CCB84C23980C0D(__this, L_0, L_1, NULL);
		// }
		return;
	}
}
// System.String Microsoft.MixedReality.Toolkit.XRSDK.XRSDKBoundarySystem::get_Name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* XRSDKBoundarySystem_get_Name_m29DCA5C456502B6125A4E01E373C38A6AD11CA02 (XRSDKBoundarySystem_t968246960310390A317722A0F222895980A9F05D* __this, const RuntimeMethod* method) 
{
	{
		// public override string Name { get; protected set; } = "XR SDK Boundary System";
		String_t* L_0 = __this->___U3CNameU3Ek__BackingField_54;
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.XRSDKBoundarySystem::set_Name(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRSDKBoundarySystem_set_Name_m896E6A42ECB3F310E2245DE07812559D13897CE8 (XRSDKBoundarySystem_t968246960310390A317722A0F222895980A9F05D* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public override string Name { get; protected set; } = "XR SDK Boundary System";
		String_t* L_0 = ___value0;
		__this->___U3CNameU3Ek__BackingField_54 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CNameU3Ek__BackingField_54), (void*)L_0);
		return;
	}
}
// System.Collections.Generic.List`1<UnityEngine.Vector3> Microsoft.MixedReality.Toolkit.XRSDK.XRSDKBoundarySystem::GetBoundaryGeometry()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* XRSDKBoundarySystem_GetBoundaryGeometry_m77770992B8F0594C7ACBDD221FA95CA54E89A7B9 (XRSDKBoundarySystem_t968246960310390A317722A0F222895980A9F05D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m984D421A36C91A4FA622218385CB4346C9411DF3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m43BF1149292892E0A147B31279D198F4ABA5D952_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mEBE35085F23AD21C6E36B9EFAED53B414317CE31_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_mD7750792B348A44331FAA1F78D8608F585823A50_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m7E6E0C4AE37ACBC1E9BDA9E56A8A7D8ACED3FD33_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemManager_GetInstances_TisXRInputSubsystem_tFECE6683FCAEBF05BAD05E5D612690095D8BAD34_mEF47974C54AA515C3180A0AD3418F3E4037983EE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemManager_t9A7261E4D0B53B996F04B8707D8E1C33AB65E824_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRSDKBoundarySystem_t968246960310390A317722A0F222895980A9F05D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRSubsystemHelpers_t8E4DEBF56BAC982E1CF1519D46753203AD7CC427_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* V_0 = NULL;
	Enumerator_t6A30CB77C3B8BF2729352F3BDF7E6FE8BE18B5D5 V_1;
	memset((&V_1), 0, sizeof(V_1));
	XRInputSubsystem_tFECE6683FCAEBF05BAD05E5D612690095D8BAD34* V_2 = NULL;
	XRInputSubsystem_tFECE6683FCAEBF05BAD05E5D612690095D8BAD34* G_B2_0 = NULL;
	XRInputSubsystem_tFECE6683FCAEBF05BAD05E5D612690095D8BAD34* G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	{
		// var boundaryGeometry = new List<Vector3>(0);
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_0 = (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B*)il2cpp_codegen_object_new(List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_m7E6E0C4AE37ACBC1E9BDA9E56A8A7D8ACED3FD33(L_0, 0, List_1__ctor_m7E6E0C4AE37ACBC1E9BDA9E56A8A7D8ACED3FD33_RuntimeMethod_var);
		V_0 = L_0;
		// if (XRSubsystemHelpers.InputSubsystem?.GetTrackingOriginMode() != TrackingOriginModeFlags.Floor
		//     || !XRSubsystemHelpers.InputSubsystem.TryGetBoundaryPoints(boundaryGeometry)
		//     || boundaryGeometry.Count == 0)
		il2cpp_codegen_runtime_class_init_inline(XRSubsystemHelpers_t8E4DEBF56BAC982E1CF1519D46753203AD7CC427_il2cpp_TypeInfo_var);
		XRInputSubsystem_tFECE6683FCAEBF05BAD05E5D612690095D8BAD34* L_1;
		L_1 = XRSubsystemHelpers_get_InputSubsystem_m0D37F2605CA0C34EC0F9A653C51721B6A503D342(NULL);
		XRInputSubsystem_tFECE6683FCAEBF05BAD05E5D612690095D8BAD34* L_2 = L_1;
		G_B1_0 = L_2;
		if (L_2)
		{
			G_B2_0 = L_2;
			goto IL_0013;
		}
	}
	{
		G_B3_0 = 1;
		goto IL_001e;
	}

IL_0013:
	{
		NullCheck(G_B2_0);
		int32_t L_3;
		L_3 = XRInputSubsystem_GetTrackingOriginMode_mBAFED615F74039A681825BB956AD3C8FA7DE45F2(G_B2_0, NULL);
		G_B3_0 = ((((int32_t)((((int32_t)L_3) == ((int32_t)2))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_001e:
	{
		if (G_B3_0)
		{
			goto IL_0035;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(XRSubsystemHelpers_t8E4DEBF56BAC982E1CF1519D46753203AD7CC427_il2cpp_TypeInfo_var);
		XRInputSubsystem_tFECE6683FCAEBF05BAD05E5D612690095D8BAD34* L_4;
		L_4 = XRSubsystemHelpers_get_InputSubsystem_m0D37F2605CA0C34EC0F9A653C51721B6A503D342(NULL);
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_5 = V_0;
		NullCheck(L_4);
		bool L_6;
		L_6 = XRInputSubsystem_TryGetBoundaryPoints_m7FEEF524DD8B85151CE8C99378DD690825951C3B(L_4, L_5, NULL);
		if (!L_6)
		{
			goto IL_0035;
		}
	}
	{
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_7 = V_0;
		NullCheck(L_7);
		int32_t L_8;
		L_8 = List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_inline(L_7, List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_RuntimeMethod_var);
		if (L_8)
		{
			goto IL_0092;
		}
	}

IL_0035:
	{
		// SubsystemManager.GetInstances(XRInputSubsystems);
		il2cpp_codegen_runtime_class_init_inline(XRSDKBoundarySystem_t968246960310390A317722A0F222895980A9F05D_il2cpp_TypeInfo_var);
		List_1_t90832B88D7207769654164CC28440CF594CC397D* L_9 = ((XRSDKBoundarySystem_t968246960310390A317722A0F222895980A9F05D_StaticFields*)il2cpp_codegen_static_fields_for(XRSDKBoundarySystem_t968246960310390A317722A0F222895980A9F05D_il2cpp_TypeInfo_var))->___XRInputSubsystems_53;
		il2cpp_codegen_runtime_class_init_inline(SubsystemManager_t9A7261E4D0B53B996F04B8707D8E1C33AB65E824_il2cpp_TypeInfo_var);
		SubsystemManager_GetInstances_TisXRInputSubsystem_tFECE6683FCAEBF05BAD05E5D612690095D8BAD34_mEF47974C54AA515C3180A0AD3418F3E4037983EE(L_9, SubsystemManager_GetInstances_TisXRInputSubsystem_tFECE6683FCAEBF05BAD05E5D612690095D8BAD34_mEF47974C54AA515C3180A0AD3418F3E4037983EE_RuntimeMethod_var);
		// foreach (XRInputSubsystem xrInputSubsystem in XRInputSubsystems)
		List_1_t90832B88D7207769654164CC28440CF594CC397D* L_10 = ((XRSDKBoundarySystem_t968246960310390A317722A0F222895980A9F05D_StaticFields*)il2cpp_codegen_static_fields_for(XRSDKBoundarySystem_t968246960310390A317722A0F222895980A9F05D_il2cpp_TypeInfo_var))->___XRInputSubsystems_53;
		NullCheck(L_10);
		Enumerator_t6A30CB77C3B8BF2729352F3BDF7E6FE8BE18B5D5 L_11;
		L_11 = List_1_GetEnumerator_mD7750792B348A44331FAA1F78D8608F585823A50(L_10, List_1_GetEnumerator_mD7750792B348A44331FAA1F78D8608F585823A50_RuntimeMethod_var);
		V_1 = L_11;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0084:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m984D421A36C91A4FA622218385CB4346C9411DF3((&V_1), Enumerator_Dispose_m984D421A36C91A4FA622218385CB4346C9411DF3_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0079_1;
			}

IL_004c_1:
			{
				// foreach (XRInputSubsystem xrInputSubsystem in XRInputSubsystems)
				XRInputSubsystem_tFECE6683FCAEBF05BAD05E5D612690095D8BAD34* L_12;
				L_12 = Enumerator_get_Current_mEBE35085F23AD21C6E36B9EFAED53B414317CE31_inline((&V_1), Enumerator_get_Current_mEBE35085F23AD21C6E36B9EFAED53B414317CE31_RuntimeMethod_var);
				V_2 = L_12;
				// if (xrInputSubsystem.running
				//     && xrInputSubsystem.GetTrackingOriginMode() == TrackingOriginModeFlags.Floor
				//     && xrInputSubsystem.TryGetBoundaryPoints(boundaryGeometry)
				//     && boundaryGeometry.Count > 0)
				XRInputSubsystem_tFECE6683FCAEBF05BAD05E5D612690095D8BAD34* L_13 = V_2;
				NullCheck(L_13);
				bool L_14;
				L_14 = IntegratedSubsystem_get_running_m18AA0D7AD1CB593DC9EE5F3DC79643717509D6E8(L_13, NULL);
				if (!L_14)
				{
					goto IL_0079_1;
				}
			}
			{
				XRInputSubsystem_tFECE6683FCAEBF05BAD05E5D612690095D8BAD34* L_15 = V_2;
				NullCheck(L_15);
				int32_t L_16;
				L_16 = XRInputSubsystem_GetTrackingOriginMode_mBAFED615F74039A681825BB956AD3C8FA7DE45F2(L_15, NULL);
				if ((!(((uint32_t)L_16) == ((uint32_t)2))))
				{
					goto IL_0079_1;
				}
			}
			{
				XRInputSubsystem_tFECE6683FCAEBF05BAD05E5D612690095D8BAD34* L_17 = V_2;
				List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_18 = V_0;
				NullCheck(L_17);
				bool L_19;
				L_19 = XRInputSubsystem_TryGetBoundaryPoints_m7FEEF524DD8B85151CE8C99378DD690825951C3B(L_17, L_18, NULL);
				if (!L_19)
				{
					goto IL_0079_1;
				}
			}
			{
				List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_20 = V_0;
				NullCheck(L_20);
				int32_t L_21;
				L_21 = List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_inline(L_20, List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_RuntimeMethod_var);
				if ((((int32_t)L_21) <= ((int32_t)0)))
				{
					goto IL_0079_1;
				}
			}
			{
				// break;
				goto IL_0092;
			}

IL_0079_1:
			{
				// foreach (XRInputSubsystem xrInputSubsystem in XRInputSubsystems)
				bool L_22;
				L_22 = Enumerator_MoveNext_m43BF1149292892E0A147B31279D198F4ABA5D952((&V_1), Enumerator_MoveNext_m43BF1149292892E0A147B31279D198F4ABA5D952_RuntimeMethod_var);
				if (L_22)
				{
					goto IL_004c_1;
				}
			}
			{
				goto IL_0092;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0092:
	{
		// return boundaryGeometry;
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_23 = V_0;
		return L_23;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.XRSDKBoundarySystem::SetTrackingSpace()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRSDKBoundarySystem_SetTrackingSpace_m9D5A46E1B932DC4C1FFBB60C9D41B794156ECF8B (XRSDKBoundarySystem_t968246960310390A317722A0F222895980A9F05D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m984D421A36C91A4FA622218385CB4346C9411DF3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m43BF1149292892E0A147B31279D198F4ABA5D952_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mEBE35085F23AD21C6E36B9EFAED53B414317CE31_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_mD7750792B348A44331FAA1F78D8608F585823A50_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemManager_GetInstances_TisXRInputSubsystem_tFECE6683FCAEBF05BAD05E5D612690095D8BAD34_mEF47974C54AA515C3180A0AD3418F3E4037983EE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemManager_t9A7261E4D0B53B996F04B8707D8E1C33AB65E824_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRSDKBoundarySystem_t968246960310390A317722A0F222895980A9F05D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRSubsystemHelpers_t8E4DEBF56BAC982E1CF1519D46753203AD7CC427_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6ADEB1C97F1408CD72A1A98F3D1A8119B9D34A54);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9F2C450604BC0A4EDB95D10405537D65414A600B);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Enumerator_t6A30CB77C3B8BF2729352F3BDF7E6FE8BE18B5D5 V_2;
	memset((&V_2), 0, sizeof(V_2));
	XRInputSubsystem_tFECE6683FCAEBF05BAD05E5D612690095D8BAD34* V_3 = NULL;
	{
		// switch (Scale)
		int32_t L_0;
		L_0 = BaseBoundarySystem_get_Scale_mF65C1ED40640B98B1E2EBB3E6FBE749F8885F032_inline(__this, NULL);
		V_1 = L_0;
		int32_t L_1 = V_1;
		switch (L_1)
		{
			case 0:
			{
				goto IL_0027;
			}
			case 1:
			{
				goto IL_0027;
			}
			case 2:
			{
				goto IL_0023;
			}
			case 3:
			{
				goto IL_0023;
			}
			case 4:
			{
				goto IL_0027;
			}
		}
	}
	{
		goto IL_002b;
	}

IL_0023:
	{
		// trackingOriginMode = TrackingOriginModeFlags.Floor;
		V_0 = 2;
		// break;
		goto IL_0037;
	}

IL_0027:
	{
		// trackingOriginMode = TrackingOriginModeFlags.Device;
		V_0 = 1;
		// break;
		goto IL_0037;
	}

IL_002b:
	{
		// trackingOriginMode = TrackingOriginModeFlags.Device;
		V_0 = 1;
		// Debug.LogWarning("Unknown / unsupported ExperienceScale. Defaulting to Device tracking space.");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_mEF15C6B17CE4E1FA7E379CDB82CE40FCD89A3F28(_stringLiteral6ADEB1C97F1408CD72A1A98F3D1A8119B9D34A54, NULL);
	}

IL_0037:
	{
		// if (XRSubsystemHelpers.InputSubsystem == null || !XRSubsystemHelpers.InputSubsystem.TrySetTrackingOriginMode(trackingOriginMode))
		il2cpp_codegen_runtime_class_init_inline(XRSubsystemHelpers_t8E4DEBF56BAC982E1CF1519D46753203AD7CC427_il2cpp_TypeInfo_var);
		XRInputSubsystem_tFECE6683FCAEBF05BAD05E5D612690095D8BAD34* L_2;
		L_2 = XRSubsystemHelpers_get_InputSubsystem_m0D37F2605CA0C34EC0F9A653C51721B6A503D342(NULL);
		if (!L_2)
		{
			goto IL_004b;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(XRSubsystemHelpers_t8E4DEBF56BAC982E1CF1519D46753203AD7CC427_il2cpp_TypeInfo_var);
		XRInputSubsystem_tFECE6683FCAEBF05BAD05E5D612690095D8BAD34* L_3;
		L_3 = XRSubsystemHelpers_get_InputSubsystem_m0D37F2605CA0C34EC0F9A653C51721B6A503D342(NULL);
		int32_t L_4 = V_0;
		NullCheck(L_3);
		bool L_5;
		L_5 = XRInputSubsystem_TrySetTrackingOriginMode_m132C190CEAE4403A381BF1C1C4B5FF349F2A3FA7(L_3, L_4, NULL);
		if (L_5)
		{
			goto IL_00a0;
		}
	}

IL_004b:
	{
		// SubsystemManager.GetInstances(XRInputSubsystems);
		il2cpp_codegen_runtime_class_init_inline(XRSDKBoundarySystem_t968246960310390A317722A0F222895980A9F05D_il2cpp_TypeInfo_var);
		List_1_t90832B88D7207769654164CC28440CF594CC397D* L_6 = ((XRSDKBoundarySystem_t968246960310390A317722A0F222895980A9F05D_StaticFields*)il2cpp_codegen_static_fields_for(XRSDKBoundarySystem_t968246960310390A317722A0F222895980A9F05D_il2cpp_TypeInfo_var))->___XRInputSubsystems_53;
		il2cpp_codegen_runtime_class_init_inline(SubsystemManager_t9A7261E4D0B53B996F04B8707D8E1C33AB65E824_il2cpp_TypeInfo_var);
		SubsystemManager_GetInstances_TisXRInputSubsystem_tFECE6683FCAEBF05BAD05E5D612690095D8BAD34_mEF47974C54AA515C3180A0AD3418F3E4037983EE(L_6, SubsystemManager_GetInstances_TisXRInputSubsystem_tFECE6683FCAEBF05BAD05E5D612690095D8BAD34_mEF47974C54AA515C3180A0AD3418F3E4037983EE_RuntimeMethod_var);
		// foreach (XRInputSubsystem xrInputSubsystem in XRInputSubsystems)
		List_1_t90832B88D7207769654164CC28440CF594CC397D* L_7 = ((XRSDKBoundarySystem_t968246960310390A317722A0F222895980A9F05D_StaticFields*)il2cpp_codegen_static_fields_for(XRSDKBoundarySystem_t968246960310390A317722A0F222895980A9F05D_il2cpp_TypeInfo_var))->___XRInputSubsystems_53;
		NullCheck(L_7);
		Enumerator_t6A30CB77C3B8BF2729352F3BDF7E6FE8BE18B5D5 L_8;
		L_8 = List_1_GetEnumerator_mD7750792B348A44331FAA1F78D8608F585823A50(L_7, List_1_GetEnumerator_mD7750792B348A44331FAA1F78D8608F585823A50_RuntimeMethod_var);
		V_2 = L_8;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0088:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m984D421A36C91A4FA622218385CB4346C9411DF3((&V_2), Enumerator_Dispose_m984D421A36C91A4FA622218385CB4346C9411DF3_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_007d_1;
			}

IL_0062_1:
			{
				// foreach (XRInputSubsystem xrInputSubsystem in XRInputSubsystems)
				XRInputSubsystem_tFECE6683FCAEBF05BAD05E5D612690095D8BAD34* L_9;
				L_9 = Enumerator_get_Current_mEBE35085F23AD21C6E36B9EFAED53B414317CE31_inline((&V_2), Enumerator_get_Current_mEBE35085F23AD21C6E36B9EFAED53B414317CE31_RuntimeMethod_var);
				V_3 = L_9;
				// if (xrInputSubsystem.running && xrInputSubsystem.TrySetTrackingOriginMode(trackingOriginMode))
				XRInputSubsystem_tFECE6683FCAEBF05BAD05E5D612690095D8BAD34* L_10 = V_3;
				NullCheck(L_10);
				bool L_11;
				L_11 = IntegratedSubsystem_get_running_m18AA0D7AD1CB593DC9EE5F3DC79643717509D6E8(L_10, NULL);
				if (!L_11)
				{
					goto IL_007d_1;
				}
			}
			{
				XRInputSubsystem_tFECE6683FCAEBF05BAD05E5D612690095D8BAD34* L_12 = V_3;
				int32_t L_13 = V_0;
				NullCheck(L_12);
				bool L_14;
				L_14 = XRInputSubsystem_TrySetTrackingOriginMode_m132C190CEAE4403A381BF1C1C4B5FF349F2A3FA7(L_12, L_13, NULL);
				if (!L_14)
				{
					goto IL_007d_1;
				}
			}
			{
				// return;
				goto IL_00a0;
			}

IL_007d_1:
			{
				// foreach (XRInputSubsystem xrInputSubsystem in XRInputSubsystems)
				bool L_15;
				L_15 = Enumerator_MoveNext_m43BF1149292892E0A147B31279D198F4ABA5D952((&V_2), Enumerator_MoveNext_m43BF1149292892E0A147B31279D198F4ABA5D952_RuntimeMethod_var);
				if (L_15)
				{
					goto IL_0062_1;
				}
			}
			{
				goto IL_0096;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0096:
	{
		// Debug.LogWarning("Tracking origin unable to be set.");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_mEF15C6B17CE4E1FA7E379CDB82CE40FCD89A3F28(_stringLiteral9F2C450604BC0A4EDB95D10405537D65414A600B, NULL);
	}

IL_00a0:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.XRSDKBoundarySystem::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRSDKBoundarySystem__cctor_m550EFC76938BCB8E7B3389B83ECCDD45B14830C3 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mC249FC827BC3BE999A938F8B5BD884F8AA0CB7FA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t90832B88D7207769654164CC28440CF594CC397D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRSDKBoundarySystem_t968246960310390A317722A0F222895980A9F05D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static readonly List<XRInputSubsystem> XRInputSubsystems = new List<XRInputSubsystem>();
		List_1_t90832B88D7207769654164CC28440CF594CC397D* L_0 = (List_1_t90832B88D7207769654164CC28440CF594CC397D*)il2cpp_codegen_object_new(List_1_t90832B88D7207769654164CC28440CF594CC397D_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_mC249FC827BC3BE999A938F8B5BD884F8AA0CB7FA(L_0, List_1__ctor_mC249FC827BC3BE999A938F8B5BD884F8AA0CB7FA_RuntimeMethod_var);
		((XRSDKBoundarySystem_t968246960310390A317722A0F222895980A9F05D_StaticFields*)il2cpp_codegen_static_fields_for(XRSDKBoundarySystem_t968246960310390A317722A0F222895980A9F05D_il2cpp_TypeInfo_var))->___XRInputSubsystems_53 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((XRSDKBoundarySystem_t968246960310390A317722A0F222895980A9F05D_StaticFields*)il2cpp_codegen_static_fields_for(XRSDKBoundarySystem_t968246960310390A317722A0F222895980A9F05D_il2cpp_TypeInfo_var))->___XRInputSubsystems_53), (void*)L_0);
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
// UnityEngine.XR.XRInputSubsystem Microsoft.MixedReality.Toolkit.XRSDK.XRSDKSubsystemHelpers::get_InputSubsystem()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XRInputSubsystem_tFECE6683FCAEBF05BAD05E5D612690095D8BAD34* XRSDKSubsystemHelpers_get_InputSubsystem_m82AD9DD51D3297EE3670701FCAFFAA63776F7764 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRSubsystemHelpers_t8E4DEBF56BAC982E1CF1519D46753203AD7CC427_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static XRInputSubsystem InputSubsystem => XRSubsystemHelpers.InputSubsystem;
		il2cpp_codegen_runtime_class_init_inline(XRSubsystemHelpers_t8E4DEBF56BAC982E1CF1519D46753203AD7CC427_il2cpp_TypeInfo_var);
		XRInputSubsystem_tFECE6683FCAEBF05BAD05E5D612690095D8BAD34* L_0;
		L_0 = XRSubsystemHelpers_get_InputSubsystem_m0D37F2605CA0C34EC0F9A653C51721B6A503D342(NULL);
		return L_0;
	}
}
// UnityEngine.XR.XRMeshSubsystem Microsoft.MixedReality.Toolkit.XRSDK.XRSDKSubsystemHelpers::get_MeshSubsystem()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XRMeshSubsystem_tDDC31EC10D4F0517542F9EB296428A0F7EC2C3B2* XRSDKSubsystemHelpers_get_MeshSubsystem_mFB72DCE87C6811CBF1EA3DC6B412AC5CEE6E2766 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRSubsystemHelpers_t8E4DEBF56BAC982E1CF1519D46753203AD7CC427_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static XRMeshSubsystem MeshSubsystem => XRSubsystemHelpers.MeshSubsystem;
		il2cpp_codegen_runtime_class_init_inline(XRSubsystemHelpers_t8E4DEBF56BAC982E1CF1519D46753203AD7CC427_il2cpp_TypeInfo_var);
		XRMeshSubsystem_tDDC31EC10D4F0517542F9EB296428A0F7EC2C3B2* L_0;
		L_0 = XRSubsystemHelpers_get_MeshSubsystem_mDBFCB92D6E65A40C7988F016931073C290182B5F(NULL);
		return L_0;
	}
}
// UnityEngine.XR.XRDisplaySubsystem Microsoft.MixedReality.Toolkit.XRSDK.XRSDKSubsystemHelpers::get_DisplaySubsystem()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XRDisplaySubsystem_t4B00B0BF1894A039ACFA8DDC2C2EB9301118C1F1* XRSDKSubsystemHelpers_get_DisplaySubsystem_mCCA3B52C04B15F80C92F38CCBFD1D32A9399EEDB (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRSubsystemHelpers_t8E4DEBF56BAC982E1CF1519D46753203AD7CC427_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static XRDisplaySubsystem DisplaySubsystem => XRSubsystemHelpers.DisplaySubsystem;
		il2cpp_codegen_runtime_class_init_inline(XRSubsystemHelpers_t8E4DEBF56BAC982E1CF1519D46753203AD7CC427_il2cpp_TypeInfo_var);
		XRDisplaySubsystem_t4B00B0BF1894A039ACFA8DDC2C2EB9301118C1F1* L_0;
		L_0 = XRSubsystemHelpers_get_DisplaySubsystem_m8EAE61D2871CD20E9BDF90940031D5F3A368D14A(NULL);
		return L_0;
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
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.Input.GenericXRSDKController::.ctor(Microsoft.MixedReality.Toolkit.TrackingState,Microsoft.MixedReality.Toolkit.Utilities.Handedness,Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource,Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping[],Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSourceDefinition)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GenericXRSDKController__ctor_m2DDE7A2D1AAB218E2B62049681DE0D6B03FFD2C1 (GenericXRSDKController_tB5136D037E3BD7D743A519016EA2710F7ED980DE* __this, int32_t ___trackingState0, uint8_t ___controllerHandedness1, RuntimeObject* ___inputSource2, MixedRealityInteractionMappingU5BU5D_t689ED6694F3B293DEDEA6D5371268D36DC67AACE* ___interactions3, RuntimeObject* ___definition4, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MixedRealityPose_tE60115C271AC50B8C11BA3B404BFCA99C7B2EFF5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// protected MixedRealityPose CurrentControllerPose = MixedRealityPose.ZeroIdentity;
		il2cpp_codegen_runtime_class_init_inline(MixedRealityPose_tE60115C271AC50B8C11BA3B404BFCA99C7B2EFF5_il2cpp_TypeInfo_var);
		MixedRealityPose_tE60115C271AC50B8C11BA3B404BFCA99C7B2EFF5 L_0;
		L_0 = MixedRealityPose_get_ZeroIdentity_m163137A55AEF8C8B0163D1F76197C5CCEDD943AD_inline(NULL);
		__this->___CurrentControllerPose_12 = L_0;
		// protected MixedRealityPose LastControllerPose = MixedRealityPose.ZeroIdentity;
		MixedRealityPose_tE60115C271AC50B8C11BA3B404BFCA99C7B2EFF5 L_1;
		L_1 = MixedRealityPose_get_ZeroIdentity_m163137A55AEF8C8B0163D1F76197C5CCEDD943AD_inline(NULL);
		__this->___LastControllerPose_13 = L_1;
		// protected Vector3 CurrentControllerPosition = Vector3.zero;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline(NULL);
		__this->___CurrentControllerPosition_14 = L_2;
		// protected Quaternion CurrentControllerRotation = Quaternion.identity;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_3;
		L_3 = Quaternion_get_identity_mB9CAEEB21BC81352CBF32DB9664BFC06FA7EA27B_inline(NULL);
		__this->___CurrentControllerRotation_15 = L_3;
		// : base(trackingState, controllerHandedness, inputSource, interactions, definition)
		int32_t L_4 = ___trackingState0;
		uint8_t L_5 = ___controllerHandedness1;
		RuntimeObject* L_6 = ___inputSource2;
		MixedRealityInteractionMappingU5BU5D_t689ED6694F3B293DEDEA6D5371268D36DC67AACE* L_7 = ___interactions3;
		RuntimeObject* L_8 = ___definition4;
		BaseController__ctor_m3EFCFBDA83D596AD950970D621DF5EB8B006F2FE(__this, L_4, L_5, L_6, L_7, L_8, NULL);
		// { }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.Input.GenericXRSDKController::UpdateController(UnityEngine.XR.InputDevice)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GenericXRSDKController_UpdateController_mFC51C2B0A354ADDBE54C9343733825B9A8AB69ED (GenericXRSDKController_tB5136D037E3BD7D743A519016EA2710F7ED980DE* __this, InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD ___inputDevice0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GenericXRSDKController_tB5136D037E3BD7D743A519016EA2710F7ED980DE_il2cpp_TypeInfo_var);
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
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 V_4;
	memset((&V_4), 0, sizeof(V_4));
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 V_5;
	memset((&V_5), 0, sizeof(V_5));
	MixedRealityInteractionMappingU5BU5D_t689ED6694F3B293DEDEA6D5371268D36DC67AACE* G_B14_0 = NULL;
	int32_t G_B14_1 = 0;
	MixedRealityInteractionMappingU5BU5D_t689ED6694F3B293DEDEA6D5371268D36DC67AACE* G_B13_0 = NULL;
	int32_t G_B13_1 = 0;
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 G_B15_0;
	memset((&G_B15_0), 0, sizeof(G_B15_0));
	int32_t G_B15_1 = 0;
	{
		// using (UpdateControllerPerfMarker.Auto())
		il2cpp_codegen_runtime_class_init_inline(GenericXRSDKController_tB5136D037E3BD7D743A519016EA2710F7ED980DE_il2cpp_TypeInfo_var);
		ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD L_0 = ((GenericXRSDKController_tB5136D037E3BD7D743A519016EA2710F7ED980DE_StaticFields*)il2cpp_codegen_static_fields_for(GenericXRSDKController_tB5136D037E3BD7D743A519016EA2710F7ED980DE_il2cpp_TypeInfo_var))->___UpdateControllerPerfMarker_17;
		V_1 = L_0;
		AutoScope_tFB983697E28885CB10FFDB92D7EFD0615AEF3139 L_1;
		L_1 = ProfilerMarker_Auto_m133FA724EB95D16187B37D2C8A501D7E989B1F8D_inline((&V_1), NULL);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00ed:
			{// begin finally (depth: 1)
				AutoScope_Dispose_mED763F3F51261EF8FB79DB32CD06E0A3F6C40481_inline((&V_0), NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				// if (!Enabled) { return; }
				bool L_2;
				L_2 = BaseController_get_Enabled_m2C7625D1C254DBCBE44B4493CE862C4BDADCAE4B_inline(__this, NULL);
				if (L_2)
				{
					goto IL_001b_1;
				}
			}
			{
				// if (!Enabled) { return; }
				goto IL_00fb;
			}

IL_001b_1:
			{
				// if (Interactions == null)
				MixedRealityInteractionMappingU5BU5D_t689ED6694F3B293DEDEA6D5371268D36DC67AACE* L_3;
				L_3 = BaseController_get_Interactions_m0FDC472367761C254E7472EC21FE1251E7FA5A74_inline(__this, NULL);
				if (L_3)
				{
					goto IL_0044_1;
				}
			}
			{
				// Debug.LogError($"No interaction configuration for {GetType().Name}");
				Type_t* L_4;
				L_4 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(__this, NULL);
				NullCheck(L_4);
				String_t* L_5;
				L_5 = VirtualFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_4);
				String_t* L_6;
				L_6 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteralBBABDBD5000A085E82E4D1F28B12069391E261AA, L_5, NULL);
				il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
				Debug_LogError_m059825802BB6AF7EA9693FEBEEB0D85F59A3E38E(L_6, NULL);
				// Enabled = false;
				BaseController_set_Enabled_m1D7DEE744E2031B9DE7EE85C13F570692D8E1CE1_inline(__this, (bool)0, NULL);
			}

IL_0044_1:
			{
				// UpdateSixDofData(inputDevice);
				InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD L_7 = ___inputDevice0;
				VirtualActionInvoker1< InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD >::Invoke(28 /* System.Void Microsoft.MixedReality.Toolkit.XRSDK.Input.GenericXRSDKController::UpdateSixDofData(UnityEngine.XR.InputDevice) */, __this, L_7);
				// for (int i = 0; i < Interactions?.Length; i++)
				V_2 = 0;
				goto IL_00ae_1;
			}

IL_004f_1:
			{
				// switch (Interactions[i].AxisType)
				MixedRealityInteractionMappingU5BU5D_t689ED6694F3B293DEDEA6D5371268D36DC67AACE* L_8;
				L_8 = BaseController_get_Interactions_m0FDC472367761C254E7472EC21FE1251E7FA5A74_inline(__this, NULL);
				int32_t L_9 = V_2;
				NullCheck(L_8);
				int32_t L_10 = L_9;
				MixedRealityInteractionMapping_t10DB776EEA5255542F8F4AF0DC0BC566AF0095E0* L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
				NullCheck(L_11);
				int32_t L_12;
				L_12 = MixedRealityInteractionMapping_get_AxisType_mCD3EA297AACF47BE8DFCCDCEBB0ABD2F5933EA40_inline(L_11, NULL);
				V_3 = L_12;
				int32_t L_13 = V_3;
				switch (L_13)
				{
					case 0:
					{
						goto IL_00aa_1;
					}
					case 1:
					{
						goto IL_00aa_1;
					}
					case 2:
					{
						goto IL_0079_1;
					}
					case 3:
					{
						goto IL_008a_1;
					}
					case 4:
					{
						goto IL_009b_1;
					}
				}
			}
			{
				goto IL_00aa_1;
			}

IL_0079_1:
			{
				// UpdateButtonData(Interactions[i], inputDevice);
				MixedRealityInteractionMappingU5BU5D_t689ED6694F3B293DEDEA6D5371268D36DC67AACE* L_14;
				L_14 = BaseController_get_Interactions_m0FDC472367761C254E7472EC21FE1251E7FA5A74_inline(__this, NULL);
				int32_t L_15 = V_2;
				NullCheck(L_14);
				int32_t L_16 = L_15;
				MixedRealityInteractionMapping_t10DB776EEA5255542F8F4AF0DC0BC566AF0095E0* L_17 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
				InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD L_18 = ___inputDevice0;
				VirtualActionInvoker2< MixedRealityInteractionMapping_t10DB776EEA5255542F8F4AF0DC0BC566AF0095E0*, InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD >::Invoke(29 /* System.Void Microsoft.MixedReality.Toolkit.XRSDK.Input.GenericXRSDKController::UpdateButtonData(Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping,UnityEngine.XR.InputDevice) */, __this, L_17, L_18);
				// break;
				goto IL_00aa_1;
			}

IL_008a_1:
			{
				// UpdateSingleAxisData(Interactions[i], inputDevice);
				MixedRealityInteractionMappingU5BU5D_t689ED6694F3B293DEDEA6D5371268D36DC67AACE* L_19;
				L_19 = BaseController_get_Interactions_m0FDC472367761C254E7472EC21FE1251E7FA5A74_inline(__this, NULL);
				int32_t L_20 = V_2;
				NullCheck(L_19);
				int32_t L_21 = L_20;
				MixedRealityInteractionMapping_t10DB776EEA5255542F8F4AF0DC0BC566AF0095E0* L_22 = (L_19)->GetAt(static_cast<il2cpp_array_size_t>(L_21));
				InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD L_23 = ___inputDevice0;
				VirtualActionInvoker2< MixedRealityInteractionMapping_t10DB776EEA5255542F8F4AF0DC0BC566AF0095E0*, InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD >::Invoke(30 /* System.Void Microsoft.MixedReality.Toolkit.XRSDK.Input.GenericXRSDKController::UpdateSingleAxisData(Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping,UnityEngine.XR.InputDevice) */, __this, L_22, L_23);
				// break;
				goto IL_00aa_1;
			}

IL_009b_1:
			{
				// UpdateDualAxisData(Interactions[i], inputDevice);
				MixedRealityInteractionMappingU5BU5D_t689ED6694F3B293DEDEA6D5371268D36DC67AACE* L_24;
				L_24 = BaseController_get_Interactions_m0FDC472367761C254E7472EC21FE1251E7FA5A74_inline(__this, NULL);
				int32_t L_25 = V_2;
				NullCheck(L_24);
				int32_t L_26 = L_25;
				MixedRealityInteractionMapping_t10DB776EEA5255542F8F4AF0DC0BC566AF0095E0* L_27 = (L_24)->GetAt(static_cast<il2cpp_array_size_t>(L_26));
				InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD L_28 = ___inputDevice0;
				VirtualActionInvoker2< MixedRealityInteractionMapping_t10DB776EEA5255542F8F4AF0DC0BC566AF0095E0*, InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD >::Invoke(31 /* System.Void Microsoft.MixedReality.Toolkit.XRSDK.Input.GenericXRSDKController::UpdateDualAxisData(Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping,UnityEngine.XR.InputDevice) */, __this, L_27, L_28);
			}

IL_00aa_1:
			{
				// for (int i = 0; i < Interactions?.Length; i++)
				int32_t L_29 = V_2;
				V_2 = ((int32_t)il2cpp_codegen_add(L_29, 1));
			}

IL_00ae_1:
			{
				// for (int i = 0; i < Interactions?.Length; i++)
				int32_t L_30 = V_2;
				MixedRealityInteractionMappingU5BU5D_t689ED6694F3B293DEDEA6D5371268D36DC67AACE* L_31;
				L_31 = BaseController_get_Interactions_m0FDC472367761C254E7472EC21FE1251E7FA5A74_inline(__this, NULL);
				MixedRealityInteractionMappingU5BU5D_t689ED6694F3B293DEDEA6D5371268D36DC67AACE* L_32 = L_31;
				G_B13_0 = L_32;
				G_B13_1 = L_30;
				if (L_32)
				{
					G_B14_0 = L_32;
					G_B14_1 = L_30;
					goto IL_00c5_1;
				}
			}
			{
				il2cpp_codegen_initobj((&V_5), sizeof(Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28));
				Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 L_33 = V_5;
				G_B15_0 = L_33;
				G_B15_1 = G_B13_1;
				goto IL_00cc_1;
			}

IL_00c5_1:
			{
				NullCheck(G_B14_0);
				Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 L_34;
				memset((&L_34), 0, sizeof(L_34));
				Nullable_1__ctor_m141FA88563AC0B5179132FB929EABD02C47FF703((&L_34), ((int32_t)(((RuntimeArray*)G_B14_0)->max_length)), /*hidden argument*/Nullable_1__ctor_m141FA88563AC0B5179132FB929EABD02C47FF703_RuntimeMethod_var);
				G_B15_0 = L_34;
				G_B15_1 = G_B14_1;
			}

IL_00cc_1:
			{
				V_4 = G_B15_0;
				int32_t L_35;
				L_35 = Nullable_1_GetValueOrDefault_m8D130DB7F2A1E694736B449176F9C26DB456597B_inline((&V_4), Nullable_1_GetValueOrDefault_m8D130DB7F2A1E694736B449176F9C26DB456597B_RuntimeMethod_var);
				bool L_36;
				L_36 = Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_inline((&V_4), Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_RuntimeMethod_var);
				if (((int32_t)(((((int32_t)G_B15_1) < ((int32_t)L_35))? 1 : 0)&(int32_t)L_36)))
				{
					goto IL_004f_1;
				}
			}
			{
				// lastInputDevice = inputDevice;
				InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD L_37 = ___inputDevice0;
				__this->___lastInputDevice_16 = L_37;
				// }
				goto IL_00fb;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00fb:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.Input.GenericXRSDKController::UpdateSixDofData(UnityEngine.XR.InputDevice)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GenericXRSDKController_UpdateSixDofData_mE5B3FE6B42E4FCCAE679F6BC712C4CD1B95A8D42 (GenericXRSDKController_tB5136D037E3BD7D743A519016EA2710F7ED980DE* __this, InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD ___inputDevice0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CoreServices_tCB1FB80E338B89BCA07C52C15B876BC6D4B3439B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealityInputSystem_t73D9E8D52E761DF1CC230411D0EFD51104FF68B2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MixedRealityPose_tE60115C271AC50B8C11BA3B404BFCA99C7B2EFF5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_GetValueOrDefault_m8D130DB7F2A1E694736B449176F9C26DB456597B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1__ctor_m141FA88563AC0B5179132FB929EABD02C47FF703_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 V_2;
	memset((&V_2), 0, sizeof(V_2));
	RuntimeObject* G_B6_0 = NULL;
	RuntimeObject* G_B5_0 = NULL;
	RuntimeObject* G_B11_0 = NULL;
	RuntimeObject* G_B10_0 = NULL;
	RuntimeObject* G_B16_0 = NULL;
	RuntimeObject* G_B15_0 = NULL;
	MixedRealityInteractionMappingU5BU5D_t689ED6694F3B293DEDEA6D5371268D36DC67AACE* G_B23_0 = NULL;
	int32_t G_B23_1 = 0;
	MixedRealityInteractionMappingU5BU5D_t689ED6694F3B293DEDEA6D5371268D36DC67AACE* G_B22_0 = NULL;
	int32_t G_B22_1 = 0;
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 G_B24_0;
	memset((&G_B24_0), 0, sizeof(G_B24_0));
	int32_t G_B24_1 = 0;
	{
		// UpdateSourceData(inputDevice);
		InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD L_0 = ___inputDevice0;
		GenericXRSDKController_UpdateSourceData_m6DA434AA2C31EADCB2AF2D8E6EF086FC081975BC(__this, L_0, NULL);
		// UpdateVelocity(inputDevice);
		InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD L_1 = ___inputDevice0;
		GenericXRSDKController_UpdateVelocity_m2C66602D4C9178E95644BC6F42BF2AE8F453AA52(__this, L_1, NULL);
		// if (TrackingState == TrackingState.Tracked && LastControllerPose != CurrentControllerPose)
		int32_t L_2;
		L_2 = BaseController_get_TrackingState_m96B4ACDD66C2B36616C6912B8A2BB6D4A521F2A9_inline(__this, NULL);
		if ((!(((uint32_t)L_2) == ((uint32_t)2))))
		{
			goto IL_00bb;
		}
	}
	{
		MixedRealityPose_tE60115C271AC50B8C11BA3B404BFCA99C7B2EFF5 L_3 = __this->___LastControllerPose_13;
		MixedRealityPose_tE60115C271AC50B8C11BA3B404BFCA99C7B2EFF5 L_4 = __this->___CurrentControllerPose_12;
		il2cpp_codegen_runtime_class_init_inline(MixedRealityPose_tE60115C271AC50B8C11BA3B404BFCA99C7B2EFF5_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = MixedRealityPose_op_Inequality_mB46067EFA5311CB251EF504055B6E138F787CE24(L_3, L_4, NULL);
		if (!L_5)
		{
			goto IL_00bb;
		}
	}
	{
		// if (IsPositionAvailable && IsRotationAvailable)
		bool L_6;
		L_6 = BaseController_get_IsPositionAvailable_mBDD6728391E1791E6D984F112D4976601B2A8672_inline(__this, NULL);
		if (!L_6)
		{
			goto IL_005f;
		}
	}
	{
		bool L_7;
		L_7 = BaseController_get_IsRotationAvailable_mC348B5D4A5F1A0A7644921DD496722DED92A57B5_inline(__this, NULL);
		if (!L_7)
		{
			goto IL_005f;
		}
	}
	{
		// CoreServices.InputSystem?.RaiseSourcePoseChanged(InputSource, this, CurrentControllerPose);
		il2cpp_codegen_runtime_class_init_inline(CoreServices_tCB1FB80E338B89BCA07C52C15B876BC6D4B3439B_il2cpp_TypeInfo_var);
		RuntimeObject* L_8;
		L_8 = CoreServices_get_InputSystem_m47147418643299159BF4DF408F768844FDC33943(NULL);
		RuntimeObject* L_9 = L_8;
		G_B5_0 = L_9;
		if (L_9)
		{
			G_B6_0 = L_9;
			goto IL_004b;
		}
	}
	{
		goto IL_00bb;
	}

IL_004b:
	{
		RuntimeObject* L_10;
		L_10 = BaseController_get_InputSource_m8FE11DBDF7B41338ACF8AFF3A0C8FAD83E5D2870_inline(__this, NULL);
		MixedRealityPose_tE60115C271AC50B8C11BA3B404BFCA99C7B2EFF5 L_11 = __this->___CurrentControllerPose_12;
		NullCheck(G_B6_0);
		InterfaceActionInvoker3< RuntimeObject*, RuntimeObject*, MixedRealityPose_tE60115C271AC50B8C11BA3B404BFCA99C7B2EFF5 >::Invoke(30 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem::RaiseSourcePoseChanged(Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource,Microsoft.MixedReality.Toolkit.Input.IMixedRealityController,Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose) */, IMixedRealityInputSystem_t73D9E8D52E761DF1CC230411D0EFD51104FF68B2_il2cpp_TypeInfo_var, G_B6_0, L_10, __this, L_11);
		goto IL_00bb;
	}

IL_005f:
	{
		// else if (IsPositionAvailable && !IsRotationAvailable)
		bool L_12;
		L_12 = BaseController_get_IsPositionAvailable_mBDD6728391E1791E6D984F112D4976601B2A8672_inline(__this, NULL);
		if (!L_12)
		{
			goto IL_008e;
		}
	}
	{
		bool L_13;
		L_13 = BaseController_get_IsRotationAvailable_mC348B5D4A5F1A0A7644921DD496722DED92A57B5_inline(__this, NULL);
		if (L_13)
		{
			goto IL_008e;
		}
	}
	{
		// CoreServices.InputSystem?.RaiseSourcePositionChanged(InputSource, this, CurrentControllerPosition);
		il2cpp_codegen_runtime_class_init_inline(CoreServices_tCB1FB80E338B89BCA07C52C15B876BC6D4B3439B_il2cpp_TypeInfo_var);
		RuntimeObject* L_14;
		L_14 = CoreServices_get_InputSystem_m47147418643299159BF4DF408F768844FDC33943(NULL);
		RuntimeObject* L_15 = L_14;
		G_B10_0 = L_15;
		if (L_15)
		{
			G_B11_0 = L_15;
			goto IL_007a;
		}
	}
	{
		goto IL_00bb;
	}

IL_007a:
	{
		RuntimeObject* L_16;
		L_16 = BaseController_get_InputSource_m8FE11DBDF7B41338ACF8AFF3A0C8FAD83E5D2870_inline(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17 = __this->___CurrentControllerPosition_14;
		NullCheck(G_B11_0);
		InterfaceActionInvoker3< RuntimeObject*, RuntimeObject*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 >::Invoke(28 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem::RaiseSourcePositionChanged(Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource,Microsoft.MixedReality.Toolkit.Input.IMixedRealityController,UnityEngine.Vector3) */, IMixedRealityInputSystem_t73D9E8D52E761DF1CC230411D0EFD51104FF68B2_il2cpp_TypeInfo_var, G_B11_0, L_16, __this, L_17);
		goto IL_00bb;
	}

IL_008e:
	{
		// else if (!IsPositionAvailable && IsRotationAvailable)
		bool L_18;
		L_18 = BaseController_get_IsPositionAvailable_mBDD6728391E1791E6D984F112D4976601B2A8672_inline(__this, NULL);
		if (L_18)
		{
			goto IL_00bb;
		}
	}
	{
		bool L_19;
		L_19 = BaseController_get_IsRotationAvailable_mC348B5D4A5F1A0A7644921DD496722DED92A57B5_inline(__this, NULL);
		if (!L_19)
		{
			goto IL_00bb;
		}
	}
	{
		// CoreServices.InputSystem?.RaiseSourceRotationChanged(InputSource, this, CurrentControllerRotation);
		il2cpp_codegen_runtime_class_init_inline(CoreServices_tCB1FB80E338B89BCA07C52C15B876BC6D4B3439B_il2cpp_TypeInfo_var);
		RuntimeObject* L_20;
		L_20 = CoreServices_get_InputSystem_m47147418643299159BF4DF408F768844FDC33943(NULL);
		RuntimeObject* L_21 = L_20;
		G_B15_0 = L_21;
		if (L_21)
		{
			G_B16_0 = L_21;
			goto IL_00a9;
		}
	}
	{
		goto IL_00bb;
	}

IL_00a9:
	{
		RuntimeObject* L_22;
		L_22 = BaseController_get_InputSource_m8FE11DBDF7B41338ACF8AFF3A0C8FAD83E5D2870_inline(__this, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_23 = __this->___CurrentControllerRotation_15;
		NullCheck(G_B16_0);
		InterfaceActionInvoker3< RuntimeObject*, RuntimeObject*, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 >::Invoke(29 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem::RaiseSourceRotationChanged(Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource,Microsoft.MixedReality.Toolkit.Input.IMixedRealityController,UnityEngine.Quaternion) */, IMixedRealityInputSystem_t73D9E8D52E761DF1CC230411D0EFD51104FF68B2_il2cpp_TypeInfo_var, G_B16_0, L_22, __this, L_23);
	}

IL_00bb:
	{
		// for (int i = 0; i < Interactions?.Length; i++)
		V_0 = 0;
		goto IL_00e2;
	}

IL_00bf:
	{
		// switch (Interactions[i].AxisType)
		MixedRealityInteractionMappingU5BU5D_t689ED6694F3B293DEDEA6D5371268D36DC67AACE* L_24;
		L_24 = BaseController_get_Interactions_m0FDC472367761C254E7472EC21FE1251E7FA5A74_inline(__this, NULL);
		int32_t L_25 = V_0;
		NullCheck(L_24);
		int32_t L_26 = L_25;
		MixedRealityInteractionMapping_t10DB776EEA5255542F8F4AF0DC0BC566AF0095E0* L_27 = (L_24)->GetAt(static_cast<il2cpp_array_size_t>(L_26));
		NullCheck(L_27);
		int32_t L_28;
		L_28 = MixedRealityInteractionMapping_get_AxisType_mCD3EA297AACF47BE8DFCCDCEBB0ABD2F5933EA40_inline(L_27, NULL);
		if ((!(((uint32_t)L_28) == ((uint32_t)7))))
		{
			goto IL_00de;
		}
	}
	{
		// UpdatePoseData(Interactions[i], inputDevice);
		MixedRealityInteractionMappingU5BU5D_t689ED6694F3B293DEDEA6D5371268D36DC67AACE* L_29;
		L_29 = BaseController_get_Interactions_m0FDC472367761C254E7472EC21FE1251E7FA5A74_inline(__this, NULL);
		int32_t L_30 = V_0;
		NullCheck(L_29);
		int32_t L_31 = L_30;
		MixedRealityInteractionMapping_t10DB776EEA5255542F8F4AF0DC0BC566AF0095E0* L_32 = (L_29)->GetAt(static_cast<il2cpp_array_size_t>(L_31));
		InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD L_33 = ___inputDevice0;
		VirtualActionInvoker2< MixedRealityInteractionMapping_t10DB776EEA5255542F8F4AF0DC0BC566AF0095E0*, InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD >::Invoke(32 /* System.Void Microsoft.MixedReality.Toolkit.XRSDK.Input.GenericXRSDKController::UpdatePoseData(Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping,UnityEngine.XR.InputDevice) */, __this, L_32, L_33);
	}

IL_00de:
	{
		// for (int i = 0; i < Interactions?.Length; i++)
		int32_t L_34 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_34, 1));
	}

IL_00e2:
	{
		// for (int i = 0; i < Interactions?.Length; i++)
		int32_t L_35 = V_0;
		MixedRealityInteractionMappingU5BU5D_t689ED6694F3B293DEDEA6D5371268D36DC67AACE* L_36;
		L_36 = BaseController_get_Interactions_m0FDC472367761C254E7472EC21FE1251E7FA5A74_inline(__this, NULL);
		MixedRealityInteractionMappingU5BU5D_t689ED6694F3B293DEDEA6D5371268D36DC67AACE* L_37 = L_36;
		G_B22_0 = L_37;
		G_B22_1 = L_35;
		if (L_37)
		{
			G_B23_0 = L_37;
			G_B23_1 = L_35;
			goto IL_00f8;
		}
	}
	{
		il2cpp_codegen_initobj((&V_2), sizeof(Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28));
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 L_38 = V_2;
		G_B24_0 = L_38;
		G_B24_1 = G_B22_1;
		goto IL_00ff;
	}

IL_00f8:
	{
		NullCheck(G_B23_0);
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 L_39;
		memset((&L_39), 0, sizeof(L_39));
		Nullable_1__ctor_m141FA88563AC0B5179132FB929EABD02C47FF703((&L_39), ((int32_t)(((RuntimeArray*)G_B23_0)->max_length)), /*hidden argument*/Nullable_1__ctor_m141FA88563AC0B5179132FB929EABD02C47FF703_RuntimeMethod_var);
		G_B24_0 = L_39;
		G_B24_1 = G_B23_1;
	}

IL_00ff:
	{
		V_1 = G_B24_0;
		int32_t L_40;
		L_40 = Nullable_1_GetValueOrDefault_m8D130DB7F2A1E694736B449176F9C26DB456597B_inline((&V_1), Nullable_1_GetValueOrDefault_m8D130DB7F2A1E694736B449176F9C26DB456597B_RuntimeMethod_var);
		bool L_41;
		L_41 = Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_inline((&V_1), Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_RuntimeMethod_var);
		if (((int32_t)(((((int32_t)G_B24_1) < ((int32_t)L_40))? 1 : 0)&(int32_t)L_41)))
		{
			goto IL_00bf;
		}
	}
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.Input.GenericXRSDKController::UpdateSourceData(UnityEngine.XR.InputDevice)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GenericXRSDKController_UpdateSourceData_m6DA434AA2C31EADCB2AF2D8E6EF086FC081975BC (GenericXRSDKController_tB5136D037E3BD7D743A519016EA2710F7ED980DE* __this, InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD ___inputDevice0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CommonUsages_t9208F514F1E77BE70AC53EFEC94D57EDDAF3B8E1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CoreServices_tCB1FB80E338B89BCA07C52C15B876BC6D4B3439B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GenericXRSDKController_tB5136D037E3BD7D743A519016EA2710F7ED980DE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealityInputSystem_t73D9E8D52E761DF1CC230411D0EFD51104FF68B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	AutoScope_tFB983697E28885CB10FFDB92D7EFD0615AEF3139 V_0;
	memset((&V_0), 0, sizeof(V_0));
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD V_1;
	memset((&V_1), 0, sizeof(V_1));
	GenericXRSDKController_tB5136D037E3BD7D743A519016EA2710F7ED980DE* G_B4_0 = NULL;
	int32_t G_B4_1 = 0;
	GenericXRSDKController_tB5136D037E3BD7D743A519016EA2710F7ED980DE* G_B2_0 = NULL;
	int32_t G_B2_1 = 0;
	GenericXRSDKController_tB5136D037E3BD7D743A519016EA2710F7ED980DE* G_B3_0 = NULL;
	int32_t G_B3_1 = 0;
	int32_t G_B5_0 = 0;
	GenericXRSDKController_tB5136D037E3BD7D743A519016EA2710F7ED980DE* G_B5_1 = NULL;
	int32_t G_B5_2 = 0;
	RuntimeObject* G_B8_0 = NULL;
	RuntimeObject* G_B7_0 = NULL;
	{
		// using (UpdateSourceDataPerfMarker.Auto())
		il2cpp_codegen_runtime_class_init_inline(GenericXRSDKController_tB5136D037E3BD7D743A519016EA2710F7ED980DE_il2cpp_TypeInfo_var);
		ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD L_0 = ((GenericXRSDKController_tB5136D037E3BD7D743A519016EA2710F7ED980DE_StaticFields*)il2cpp_codegen_static_fields_for(GenericXRSDKController_tB5136D037E3BD7D743A519016EA2710F7ED980DE_il2cpp_TypeInfo_var))->___UpdateSourceDataPerfMarker_18;
		V_1 = L_0;
		AutoScope_tFB983697E28885CB10FFDB92D7EFD0615AEF3139 L_1;
		L_1 = ProfilerMarker_Auto_m133FA724EB95D16187B37D2C8A501D7E989B1F8D_inline((&V_1), NULL);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00e1:
			{// begin finally (depth: 1)
				AutoScope_Dispose_mED763F3F51261EF8FB79DB32CD06E0A3F6C40481_inline((&V_0), NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				// var lastState = TrackingState;
				int32_t L_2;
				L_2 = BaseController_get_TrackingState_m96B4ACDD66C2B36616C6912B8A2BB6D4A521F2A9_inline(__this, NULL);
				// LastControllerPose = CurrentControllerPose;
				MixedRealityPose_tE60115C271AC50B8C11BA3B404BFCA99C7B2EFF5 L_3 = __this->___CurrentControllerPose_12;
				__this->___LastControllerPose_13 = L_3;
				// IsPositionAvailable = inputDevice.TryGetFeatureValue(CommonUsages.devicePosition, out CurrentControllerPosition);
				il2cpp_codegen_runtime_class_init_inline(CommonUsages_t9208F514F1E77BE70AC53EFEC94D57EDDAF3B8E1_il2cpp_TypeInfo_var);
				InputFeatureUsage_1_t2E901FA41650EB29399194768CAA93D477CEBC58 L_4 = ((CommonUsages_t9208F514F1E77BE70AC53EFEC94D57EDDAF3B8E1_StaticFields*)il2cpp_codegen_static_fields_for(CommonUsages_t9208F514F1E77BE70AC53EFEC94D57EDDAF3B8E1_il2cpp_TypeInfo_var))->___devicePosition_19;
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_5 = (&__this->___CurrentControllerPosition_14);
				bool L_6;
				L_6 = InputDevice_TryGetFeatureValue_m472B5ECE996FB7440CACCF1E85722DA4963E3167((&___inputDevice0), L_4, L_5, NULL);
				BaseController_set_IsPositionAvailable_m961439F02C7A664A0EEE36724AC8FDCE548E8FE9_inline(__this, L_6, NULL);
				// IsPositionApproximate = false;
				BaseController_set_IsPositionApproximate_mC91DE12C8BCDEA2CDA015ACD4315AFD2BA8AF148_inline(__this, (bool)0, NULL);
				// IsRotationAvailable = inputDevice.TryGetFeatureValue(CommonUsages.deviceRotation, out CurrentControllerRotation);
				InputFeatureUsage_1_t8489CEC68B1EC178F2634079A9D7CD9E90D3CF5D L_7 = ((CommonUsages_t9208F514F1E77BE70AC53EFEC94D57EDDAF3B8E1_StaticFields*)il2cpp_codegen_static_fields_for(CommonUsages_t9208F514F1E77BE70AC53EFEC94D57EDDAF3B8E1_il2cpp_TypeInfo_var))->___deviceRotation_44;
				Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* L_8 = (&__this->___CurrentControllerRotation_15);
				bool L_9;
				L_9 = InputDevice_TryGetFeatureValue_m0C1A9761DD0D1C6D1EF4BAB2FAF1BC1A9541BB9F((&___inputDevice0), L_7, L_8, NULL);
				BaseController_set_IsRotationAvailable_m134E4988FAD7264809AD1A9311413E4183C668D8_inline(__this, L_9, NULL);
				// TrackingState = (IsPositionAvailable || IsRotationAvailable) ? TrackingState.Tracked : TrackingState.NotTracked;
				bool L_10;
				L_10 = BaseController_get_IsPositionAvailable_mBDD6728391E1791E6D984F112D4976601B2A8672_inline(__this, NULL);
				G_B2_0 = __this;
				G_B2_1 = L_2;
				if (L_10)
				{
					G_B4_0 = __this;
					G_B4_1 = L_2;
					goto IL_006b_1;
				}
			}
			{
				bool L_11;
				L_11 = BaseController_get_IsRotationAvailable_mC348B5D4A5F1A0A7644921DD496722DED92A57B5_inline(__this, NULL);
				G_B3_0 = G_B2_0;
				G_B3_1 = G_B2_1;
				if (L_11)
				{
					G_B4_0 = G_B2_0;
					G_B4_1 = G_B2_1;
					goto IL_006b_1;
				}
			}
			{
				G_B5_0 = 1;
				G_B5_1 = G_B3_0;
				G_B5_2 = G_B3_1;
				goto IL_006c_1;
			}

IL_006b_1:
			{
				G_B5_0 = 2;
				G_B5_1 = G_B4_0;
				G_B5_2 = G_B4_1;
			}

IL_006c_1:
			{
				NullCheck(G_B5_1);
				BaseController_set_TrackingState_mF18CD7B38A10B07F9A70E04F23D51C4F342D1E97_inline(G_B5_1, G_B5_0, NULL);
				// CurrentControllerPosition = MixedRealityPlayspace.TransformPoint(CurrentControllerPosition);
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12 = __this->___CurrentControllerPosition_14;
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
				L_13 = MixedRealityPlayspace_TransformPoint_mF0F8AA899D9BBBA99FC4EBD1B8730F4174D15314(L_12, NULL);
				__this->___CurrentControllerPosition_14 = L_13;
				// CurrentControllerRotation = MixedRealityPlayspace.Rotation * CurrentControllerRotation;
				Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_14;
				L_14 = MixedRealityPlayspace_get_Rotation_mB5DCE6258ADE65064084A771A277AD2CDEC98737(NULL);
				Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_15 = __this->___CurrentControllerRotation_15;
				Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_16;
				L_16 = Quaternion_op_Multiply_m5AC8B39C55015059BDD09122E04E47D4BFAB2276_inline(L_14, L_15, NULL);
				__this->___CurrentControllerRotation_15 = L_16;
				// CurrentControllerPose.Position = CurrentControllerPosition;
				MixedRealityPose_tE60115C271AC50B8C11BA3B404BFCA99C7B2EFF5* L_17 = (&__this->___CurrentControllerPose_12);
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18 = __this->___CurrentControllerPosition_14;
				MixedRealityPose_set_Position_m9806379126B288614A363F39705935CA0D86888C_inline(L_17, L_18, NULL);
				// CurrentControllerPose.Rotation = CurrentControllerRotation;
				MixedRealityPose_tE60115C271AC50B8C11BA3B404BFCA99C7B2EFF5* L_19 = (&__this->___CurrentControllerPose_12);
				Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_20 = __this->___CurrentControllerRotation_15;
				MixedRealityPose_set_Rotation_m090951B4A308155032C377FF0AE6BED025C39868_inline(L_19, L_20, NULL);
				// if (lastState != TrackingState)
				int32_t L_21;
				L_21 = BaseController_get_TrackingState_m96B4ACDD66C2B36616C6912B8A2BB6D4A521F2A9_inline(__this, NULL);
				if ((((int32_t)G_B5_2) == ((int32_t)L_21)))
				{
					goto IL_00df_1;
				}
			}
			{
				// CoreServices.InputSystem?.RaiseSourceTrackingStateChanged(InputSource, this, TrackingState);
				il2cpp_codegen_runtime_class_init_inline(CoreServices_tCB1FB80E338B89BCA07C52C15B876BC6D4B3439B_il2cpp_TypeInfo_var);
				RuntimeObject* L_22;
				L_22 = CoreServices_get_InputSystem_m47147418643299159BF4DF408F768844FDC33943(NULL);
				RuntimeObject* L_23 = L_22;
				G_B7_0 = L_23;
				if (L_23)
				{
					G_B8_0 = L_23;
					goto IL_00cd_1;
				}
			}
			{
				goto IL_00ef;
			}

IL_00cd_1:
			{
				RuntimeObject* L_24;
				L_24 = BaseController_get_InputSource_m8FE11DBDF7B41338ACF8AFF3A0C8FAD83E5D2870_inline(__this, NULL);
				int32_t L_25;
				L_25 = BaseController_get_TrackingState_m96B4ACDD66C2B36616C6912B8A2BB6D4A521F2A9_inline(__this, NULL);
				NullCheck(G_B8_0);
				InterfaceActionInvoker3< RuntimeObject*, RuntimeObject*, int32_t >::Invoke(26 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem::RaiseSourceTrackingStateChanged(Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource,Microsoft.MixedReality.Toolkit.Input.IMixedRealityController,Microsoft.MixedReality.Toolkit.TrackingState) */, IMixedRealityInputSystem_t73D9E8D52E761DF1CC230411D0EFD51104FF68B2_il2cpp_TypeInfo_var, G_B8_0, L_24, __this, L_25);
			}

IL_00df_1:
			{
				// }
				goto IL_00ef;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00ef:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.Input.GenericXRSDKController::UpdateVelocity(UnityEngine.XR.InputDevice)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GenericXRSDKController_UpdateVelocity_m2C66602D4C9178E95644BC6F42BF2AE8F453AA52 (GenericXRSDKController_tB5136D037E3BD7D743A519016EA2710F7ED980DE* __this, InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD ___inputDevice0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CommonUsages_t9208F514F1E77BE70AC53EFEC94D57EDDAF3B8E1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GenericXRSDKController_tB5136D037E3BD7D743A519016EA2710F7ED980DE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	AutoScope_tFB983697E28885CB10FFDB92D7EFD0615AEF3139 V_0;
	memset((&V_0), 0, sizeof(V_0));
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		// using (UpdateVelocityPerfMarker.Auto())
		il2cpp_codegen_runtime_class_init_inline(GenericXRSDKController_tB5136D037E3BD7D743A519016EA2710F7ED980DE_il2cpp_TypeInfo_var);
		ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD L_0 = ((GenericXRSDKController_tB5136D037E3BD7D743A519016EA2710F7ED980DE_StaticFields*)il2cpp_codegen_static_fields_for(GenericXRSDKController_tB5136D037E3BD7D743A519016EA2710F7ED980DE_il2cpp_TypeInfo_var))->___UpdateVelocityPerfMarker_19;
		V_1 = L_0;
		AutoScope_tFB983697E28885CB10FFDB92D7EFD0615AEF3139 L_1;
		L_1 = ProfilerMarker_Auto_m133FA724EB95D16187B37D2C8A501D7E989B1F8D_inline((&V_1), NULL);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_003e:
			{// begin finally (depth: 1)
				AutoScope_Dispose_mED763F3F51261EF8FB79DB32CD06E0A3F6C40481_inline((&V_0), NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				// if (inputDevice.TryGetFeatureValue(CommonUsages.deviceVelocity, out newVelocity))
				il2cpp_codegen_runtime_class_init_inline(CommonUsages_t9208F514F1E77BE70AC53EFEC94D57EDDAF3B8E1_il2cpp_TypeInfo_var);
				InputFeatureUsage_1_t2E901FA41650EB29399194768CAA93D477CEBC58 L_2 = ((CommonUsages_t9208F514F1E77BE70AC53EFEC94D57EDDAF3B8E1_StaticFields*)il2cpp_codegen_static_fields_for(CommonUsages_t9208F514F1E77BE70AC53EFEC94D57EDDAF3B8E1_il2cpp_TypeInfo_var))->___deviceVelocity_24;
				bool L_3;
				L_3 = InputDevice_TryGetFeatureValue_m472B5ECE996FB7440CACCF1E85722DA4963E3167((&___inputDevice0), L_2, (&V_2), NULL);
				if (!L_3)
				{
					goto IL_0025_1;
				}
			}
			{
				// Velocity = newVelocity;
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = V_2;
				BaseController_set_Velocity_m382E06808795EC60C83F87D99C2881D39902BD33_inline(__this, L_4, NULL);
			}

IL_0025_1:
			{
				// if (inputDevice.TryGetFeatureValue(CommonUsages.deviceAngularVelocity, out newAngularVelocity))
				il2cpp_codegen_runtime_class_init_inline(CommonUsages_t9208F514F1E77BE70AC53EFEC94D57EDDAF3B8E1_il2cpp_TypeInfo_var);
				InputFeatureUsage_1_t2E901FA41650EB29399194768CAA93D477CEBC58 L_5 = ((CommonUsages_t9208F514F1E77BE70AC53EFEC94D57EDDAF3B8E1_StaticFields*)il2cpp_codegen_static_fields_for(CommonUsages_t9208F514F1E77BE70AC53EFEC94D57EDDAF3B8E1_il2cpp_TypeInfo_var))->___deviceAngularVelocity_25;
				bool L_6;
				L_6 = InputDevice_TryGetFeatureValue_m472B5ECE996FB7440CACCF1E85722DA4963E3167((&___inputDevice0), L_5, (&V_3), NULL);
				if (!L_6)
				{
					goto IL_003c_1;
				}
			}
			{
				// AngularVelocity = newAngularVelocity;
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = V_3;
				BaseController_set_AngularVelocity_m9C82E80627D17EF9743A1102039674F4C3DD302E_inline(__this, L_7, NULL);
			}

IL_003c_1:
			{
				// }
				goto IL_004c;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_004c:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.Input.GenericXRSDKController::UpdateButtonData(Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping,UnityEngine.XR.InputDevice)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GenericXRSDKController_UpdateButtonData_mAF5A0412DE08EAC269E797FDE5F08A9177635673 (GenericXRSDKController_tB5136D037E3BD7D743A519016EA2710F7ED980DE* __this, MixedRealityInteractionMapping_t10DB776EEA5255542F8F4AF0DC0BC566AF0095E0* ___interactionMapping0, InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD ___inputDevice1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CommonUsages_t9208F514F1E77BE70AC53EFEC94D57EDDAF3B8E1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CoreServices_tCB1FB80E338B89BCA07C52C15B876BC6D4B3439B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GenericXRSDKController_tB5136D037E3BD7D743A519016EA2710F7ED980DE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealityInputSystem_t73D9E8D52E761DF1CC230411D0EFD51104FF68B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	AutoScope_tFB983697E28885CB10FFDB92D7EFD0615AEF3139 V_0;
	memset((&V_0), 0, sizeof(V_0));
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD V_1;
	memset((&V_1), 0, sizeof(V_1));
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	InputFeatureUsage_1_tE336B2F0B9AC721519BFA17A08D6353FD5221637 V_4;
	memset((&V_4), 0, sizeof(V_4));
	bool V_5 = false;
	int32_t V_6 = 0;
	RuntimeObject* G_B32_0 = NULL;
	RuntimeObject* G_B31_0 = NULL;
	RuntimeObject* G_B35_0 = NULL;
	RuntimeObject* G_B34_0 = NULL;
	{
		// using (UpdateButtonDataPerfMarker.Auto())
		il2cpp_codegen_runtime_class_init_inline(GenericXRSDKController_tB5136D037E3BD7D743A519016EA2710F7ED980DE_il2cpp_TypeInfo_var);
		ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD L_0 = ((GenericXRSDKController_tB5136D037E3BD7D743A519016EA2710F7ED980DE_StaticFields*)il2cpp_codegen_static_fields_for(GenericXRSDKController_tB5136D037E3BD7D743A519016EA2710F7ED980DE_il2cpp_TypeInfo_var))->___UpdateButtonDataPerfMarker_20;
		V_1 = L_0;
		AutoScope_tFB983697E28885CB10FFDB92D7EFD0615AEF3139 L_1;
		L_1 = ProfilerMarker_Auto_m133FA724EB95D16187B37D2C8A501D7E989B1F8D_inline((&V_1), NULL);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0199:
			{// begin finally (depth: 1)
				AutoScope_Dispose_mED763F3F51261EF8FB79DB32CD06E0A3F6C40481_inline((&V_0), NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				// if (interactionMapping.InputType == DeviceInputType.TriggerTouch
				//     && inputDevice.TryGetFeatureValue(CommonUsages.trigger, out float triggerData))
				MixedRealityInteractionMapping_t10DB776EEA5255542F8F4AF0DC0BC566AF0095E0* L_2 = ___interactionMapping0;
				NullCheck(L_2);
				int32_t L_3;
				L_3 = MixedRealityInteractionMapping_get_InputType_m431C40AD5149D4817FAA46DC0326A481FE348C8D_inline(L_2, NULL);
				if ((!(((uint32_t)L_3) == ((uint32_t)((int32_t)11)))))
				{
					goto IL_0041_1;
				}
			}
			{
				il2cpp_codegen_runtime_class_init_inline(CommonUsages_t9208F514F1E77BE70AC53EFEC94D57EDDAF3B8E1_il2cpp_TypeInfo_var);
				InputFeatureUsage_1_t311D0F42F1A7BF37D3CEAC15A53A1F24165F1848 L_4 = ((CommonUsages_t9208F514F1E77BE70AC53EFEC94D57EDDAF3B8E1_StaticFields*)il2cpp_codegen_static_fields_for(CommonUsages_t9208F514F1E77BE70AC53EFEC94D57EDDAF3B8E1_il2cpp_TypeInfo_var))->___trigger_15;
				bool L_5;
				L_5 = InputDevice_TryGetFeatureValue_m675D52240379FEF80D6499B5031941812FDFD081((&___inputDevice1), L_4, (&V_2), NULL);
				if (!L_5)
				{
					goto IL_0041_1;
				}
			}
			{
				// interactionMapping.BoolData = !Mathf.Approximately(triggerData, 0.0f);
				MixedRealityInteractionMapping_t10DB776EEA5255542F8F4AF0DC0BC566AF0095E0* L_6 = ___interactionMapping0;
				float L_7 = V_2;
				bool L_8;
				L_8 = Mathf_Approximately_m1C8DD0BB6A2D22A7DCF09AD7F8EE9ABD12D3F620_inline(L_7, (0.0f), NULL);
				NullCheck(L_6);
				MixedRealityInteractionMapping_set_BoolData_m216D4A26D41B17B7CB6D4C28A30A38D8D6349ADA(L_6, (bool)((((int32_t)L_8) == ((int32_t)0))? 1 : 0), NULL);
				goto IL_0141_1;
			}

IL_0041_1:
			{
				// else if (interactionMapping.InputType == DeviceInputType.GripTouch
				//     && inputDevice.TryGetFeatureValue(CommonUsages.grip, out float gripData))
				MixedRealityInteractionMapping_t10DB776EEA5255542F8F4AF0DC0BC566AF0095E0* L_9 = ___interactionMapping0;
				NullCheck(L_9);
				int32_t L_10;
				L_10 = MixedRealityInteractionMapping_get_InputType_m431C40AD5149D4817FAA46DC0326A481FE348C8D_inline(L_9, NULL);
				if ((!(((uint32_t)L_10) == ((uint32_t)((int32_t)58)))))
				{
					goto IL_0074_1;
				}
			}
			{
				il2cpp_codegen_runtime_class_init_inline(CommonUsages_t9208F514F1E77BE70AC53EFEC94D57EDDAF3B8E1_il2cpp_TypeInfo_var);
				InputFeatureUsage_1_t311D0F42F1A7BF37D3CEAC15A53A1F24165F1848 L_11 = ((CommonUsages_t9208F514F1E77BE70AC53EFEC94D57EDDAF3B8E1_StaticFields*)il2cpp_codegen_static_fields_for(CommonUsages_t9208F514F1E77BE70AC53EFEC94D57EDDAF3B8E1_il2cpp_TypeInfo_var))->___grip_16;
				bool L_12;
				L_12 = InputDevice_TryGetFeatureValue_m675D52240379FEF80D6499B5031941812FDFD081((&___inputDevice1), L_11, (&V_3), NULL);
				if (!L_12)
				{
					goto IL_0074_1;
				}
			}
			{
				// interactionMapping.BoolData = !Mathf.Approximately(gripData, 0.0f);
				MixedRealityInteractionMapping_t10DB776EEA5255542F8F4AF0DC0BC566AF0095E0* L_13 = ___interactionMapping0;
				float L_14 = V_3;
				bool L_15;
				L_15 = Mathf_Approximately_m1C8DD0BB6A2D22A7DCF09AD7F8EE9ABD12D3F620_inline(L_14, (0.0f), NULL);
				NullCheck(L_13);
				MixedRealityInteractionMapping_set_BoolData_m216D4A26D41B17B7CB6D4C28A30A38D8D6349ADA(L_13, (bool)((((int32_t)L_15) == ((int32_t)0))? 1 : 0), NULL);
				goto IL_0141_1;
			}

IL_0074_1:
			{
				// switch (interactionMapping.InputType)
				MixedRealityInteractionMapping_t10DB776EEA5255542F8F4AF0DC0BC566AF0095E0* L_16 = ___interactionMapping0;
				NullCheck(L_16);
				int32_t L_17;
				L_17 = MixedRealityInteractionMapping_get_InputType_m431C40AD5149D4817FAA46DC0326A481FE348C8D_inline(L_16, NULL);
				V_6 = L_17;
				int32_t L_18 = V_6;
				if ((((int32_t)L_18) > ((int32_t)((int32_t)27))))
				{
					goto IL_00c3_1;
				}
			}
			{
				int32_t L_19 = V_6;
				if ((((int32_t)L_19) == ((int32_t)7)))
				{
					goto IL_00eb_1;
				}
			}
			{
				int32_t L_20 = V_6;
				if ((!(((uint32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_20, ((int32_t)12)))) > ((uint32_t)1))))
				{
					goto IL_00d9_1;
				}
			}
			{
				int32_t L_21 = V_6;
				switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_21, ((int32_t)18))))
				{
					case 0:
					{
						goto IL_0121_1;
					}
					case 1:
					{
						goto IL_0118_1;
					}
					case 2:
					{
						goto IL_012a_1;
					}
					case 3:
					{
						goto IL_012a_1;
					}
					case 4:
					{
						goto IL_00fd_1;
					}
					case 5:
					{
						goto IL_012a_1;
					}
					case 6:
					{
						goto IL_0106_1;
					}
					case 7:
					{
						goto IL_00d9_1;
					}
					case 8:
					{
						goto IL_012a_1;
					}
					case 9:
					{
						goto IL_010f_1;
					}
				}
			}
			{
				goto IL_012a_1;
			}

IL_00c3_1:
			{
				int32_t L_22 = V_6;
				if ((((int32_t)L_22) == ((int32_t)((int32_t)51))))
				{
					goto IL_00eb_1;
				}
			}
			{
				int32_t L_23 = V_6;
				if ((((int32_t)L_23) == ((int32_t)((int32_t)54))))
				{
					goto IL_00f4_1;
				}
			}
			{
				int32_t L_24 = V_6;
				if ((!(((uint32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_24, ((int32_t)59)))) > ((uint32_t)1))))
				{
					goto IL_00e2_1;
				}
			}
			{
				goto IL_012a_1;
			}

IL_00d9_1:
			{
				// buttonUsage = CommonUsages.triggerButton;
				il2cpp_codegen_runtime_class_init_inline(CommonUsages_t9208F514F1E77BE70AC53EFEC94D57EDDAF3B8E1_il2cpp_TypeInfo_var);
				InputFeatureUsage_1_tE336B2F0B9AC721519BFA17A08D6353FD5221637 L_25 = ((CommonUsages_t9208F514F1E77BE70AC53EFEC94D57EDDAF3B8E1_StaticFields*)il2cpp_codegen_static_fields_for(CommonUsages_t9208F514F1E77BE70AC53EFEC94D57EDDAF3B8E1_il2cpp_TypeInfo_var))->___triggerButton_6;
				V_4 = L_25;
				// break;
				goto IL_012c_1;
			}

IL_00e2_1:
			{
				// buttonUsage = CommonUsages.gripButton;
				il2cpp_codegen_runtime_class_init_inline(CommonUsages_t9208F514F1E77BE70AC53EFEC94D57EDDAF3B8E1_il2cpp_TypeInfo_var);
				InputFeatureUsage_1_tE336B2F0B9AC721519BFA17A08D6353FD5221637 L_26 = ((CommonUsages_t9208F514F1E77BE70AC53EFEC94D57EDDAF3B8E1_StaticFields*)il2cpp_codegen_static_fields_for(CommonUsages_t9208F514F1E77BE70AC53EFEC94D57EDDAF3B8E1_il2cpp_TypeInfo_var))->___gripButton_5;
				V_4 = L_26;
				// break;
				goto IL_012c_1;
			}

IL_00eb_1:
			{
				// buttonUsage = CommonUsages.primaryButton;
				il2cpp_codegen_runtime_class_init_inline(CommonUsages_t9208F514F1E77BE70AC53EFEC94D57EDDAF3B8E1_il2cpp_TypeInfo_var);
				InputFeatureUsage_1_tE336B2F0B9AC721519BFA17A08D6353FD5221637 L_27 = ((CommonUsages_t9208F514F1E77BE70AC53EFEC94D57EDDAF3B8E1_StaticFields*)il2cpp_codegen_static_fields_for(CommonUsages_t9208F514F1E77BE70AC53EFEC94D57EDDAF3B8E1_il2cpp_TypeInfo_var))->___primaryButton_1;
				V_4 = L_27;
				// break;
				goto IL_012c_1;
			}

IL_00f4_1:
			{
				// buttonUsage = CommonUsages.secondaryButton;
				il2cpp_codegen_runtime_class_init_inline(CommonUsages_t9208F514F1E77BE70AC53EFEC94D57EDDAF3B8E1_il2cpp_TypeInfo_var);
				InputFeatureUsage_1_tE336B2F0B9AC721519BFA17A08D6353FD5221637 L_28 = ((CommonUsages_t9208F514F1E77BE70AC53EFEC94D57EDDAF3B8E1_StaticFields*)il2cpp_codegen_static_fields_for(CommonUsages_t9208F514F1E77BE70AC53EFEC94D57EDDAF3B8E1_il2cpp_TypeInfo_var))->___secondaryButton_3;
				V_4 = L_28;
				// break;
				goto IL_012c_1;
			}

IL_00fd_1:
			{
				// buttonUsage = CommonUsages.secondary2DAxisTouch;
				il2cpp_codegen_runtime_class_init_inline(CommonUsages_t9208F514F1E77BE70AC53EFEC94D57EDDAF3B8E1_il2cpp_TypeInfo_var);
				InputFeatureUsage_1_tE336B2F0B9AC721519BFA17A08D6353FD5221637 L_29 = ((CommonUsages_t9208F514F1E77BE70AC53EFEC94D57EDDAF3B8E1_StaticFields*)il2cpp_codegen_static_fields_for(CommonUsages_t9208F514F1E77BE70AC53EFEC94D57EDDAF3B8E1_il2cpp_TypeInfo_var))->___secondary2DAxisTouch_11;
				V_4 = L_29;
				// break;
				goto IL_012c_1;
			}

IL_0106_1:
			{
				// buttonUsage = CommonUsages.secondary2DAxisClick;
				il2cpp_codegen_runtime_class_init_inline(CommonUsages_t9208F514F1E77BE70AC53EFEC94D57EDDAF3B8E1_il2cpp_TypeInfo_var);
				InputFeatureUsage_1_tE336B2F0B9AC721519BFA17A08D6353FD5221637 L_30 = ((CommonUsages_t9208F514F1E77BE70AC53EFEC94D57EDDAF3B8E1_StaticFields*)il2cpp_codegen_static_fields_for(CommonUsages_t9208F514F1E77BE70AC53EFEC94D57EDDAF3B8E1_il2cpp_TypeInfo_var))->___secondary2DAxisClick_10;
				V_4 = L_30;
				// break;
				goto IL_012c_1;
			}

IL_010f_1:
			{
				// buttonUsage = CommonUsages.menuButton;
				il2cpp_codegen_runtime_class_init_inline(CommonUsages_t9208F514F1E77BE70AC53EFEC94D57EDDAF3B8E1_il2cpp_TypeInfo_var);
				InputFeatureUsage_1_tE336B2F0B9AC721519BFA17A08D6353FD5221637 L_31 = ((CommonUsages_t9208F514F1E77BE70AC53EFEC94D57EDDAF3B8E1_StaticFields*)il2cpp_codegen_static_fields_for(CommonUsages_t9208F514F1E77BE70AC53EFEC94D57EDDAF3B8E1_il2cpp_TypeInfo_var))->___menuButton_7;
				V_4 = L_31;
				// break;
				goto IL_012c_1;
			}

IL_0118_1:
			{
				// buttonUsage = CommonUsages.primary2DAxisTouch;
				il2cpp_codegen_runtime_class_init_inline(CommonUsages_t9208F514F1E77BE70AC53EFEC94D57EDDAF3B8E1_il2cpp_TypeInfo_var);
				InputFeatureUsage_1_tE336B2F0B9AC721519BFA17A08D6353FD5221637 L_32 = ((CommonUsages_t9208F514F1E77BE70AC53EFEC94D57EDDAF3B8E1_StaticFields*)il2cpp_codegen_static_fields_for(CommonUsages_t9208F514F1E77BE70AC53EFEC94D57EDDAF3B8E1_il2cpp_TypeInfo_var))->___primary2DAxisTouch_9;
				V_4 = L_32;
				// break;
				goto IL_012c_1;
			}

IL_0121_1:
			{
				// buttonUsage = CommonUsages.primary2DAxisClick;
				il2cpp_codegen_runtime_class_init_inline(CommonUsages_t9208F514F1E77BE70AC53EFEC94D57EDDAF3B8E1_il2cpp_TypeInfo_var);
				InputFeatureUsage_1_tE336B2F0B9AC721519BFA17A08D6353FD5221637 L_33 = ((CommonUsages_t9208F514F1E77BE70AC53EFEC94D57EDDAF3B8E1_StaticFields*)il2cpp_codegen_static_fields_for(CommonUsages_t9208F514F1E77BE70AC53EFEC94D57EDDAF3B8E1_il2cpp_TypeInfo_var))->___primary2DAxisClick_8;
				V_4 = L_33;
				// break;
				goto IL_012c_1;
			}

IL_012a_1:
			{
				// return;
				goto IL_01a7;
			}

IL_012c_1:
			{
				// if (inputDevice.TryGetFeatureValue(buttonUsage, out bool buttonPressed))
				InputFeatureUsage_1_tE336B2F0B9AC721519BFA17A08D6353FD5221637 L_34 = V_4;
				bool L_35;
				L_35 = InputDevice_TryGetFeatureValue_m24EC3B6C41AE4098269427232AD5F52E786BF884((&___inputDevice1), L_34, (&V_5), NULL);
				if (!L_35)
				{
					goto IL_0141_1;
				}
			}
			{
				// interactionMapping.BoolData = buttonPressed;
				MixedRealityInteractionMapping_t10DB776EEA5255542F8F4AF0DC0BC566AF0095E0* L_36 = ___interactionMapping0;
				bool L_37 = V_5;
				NullCheck(L_36);
				MixedRealityInteractionMapping_set_BoolData_m216D4A26D41B17B7CB6D4C28A30A38D8D6349ADA(L_36, L_37, NULL);
			}

IL_0141_1:
			{
				// if (interactionMapping.Changed)
				MixedRealityInteractionMapping_t10DB776EEA5255542F8F4AF0DC0BC566AF0095E0* L_38 = ___interactionMapping0;
				NullCheck(L_38);
				bool L_39;
				L_39 = MixedRealityInteractionMapping_get_Changed_mC98FFE1F0E915A3F03110D83000E473E7F05BC53(L_38, NULL);
				if (!L_39)
				{
					goto IL_0197_1;
				}
			}
			{
				// if (interactionMapping.BoolData)
				MixedRealityInteractionMapping_t10DB776EEA5255542F8F4AF0DC0BC566AF0095E0* L_40 = ___interactionMapping0;
				NullCheck(L_40);
				bool L_41;
				L_41 = MixedRealityInteractionMapping_get_BoolData_m69F4D6E88FF5DF204C3C38426A2BCD74AB7060CB_inline(L_40, NULL);
				if (!L_41)
				{
					goto IL_0175_1;
				}
			}
			{
				// CoreServices.InputSystem?.RaiseOnInputDown(InputSource, ControllerHandedness, interactionMapping.MixedRealityInputAction);
				il2cpp_codegen_runtime_class_init_inline(CoreServices_tCB1FB80E338B89BCA07C52C15B876BC6D4B3439B_il2cpp_TypeInfo_var);
				RuntimeObject* L_42;
				L_42 = CoreServices_get_InputSystem_m47147418643299159BF4DF408F768844FDC33943(NULL);
				RuntimeObject* L_43 = L_42;
				G_B31_0 = L_43;
				if (L_43)
				{
					G_B32_0 = L_43;
					goto IL_015c_1;
				}
			}
			{
				goto IL_01a7;
			}

IL_015c_1:
			{
				RuntimeObject* L_44;
				L_44 = BaseController_get_InputSource_m8FE11DBDF7B41338ACF8AFF3A0C8FAD83E5D2870_inline(__this, NULL);
				uint8_t L_45;
				L_45 = BaseController_get_ControllerHandedness_m739908CFF885DB452AD9A115F569C455BA46A3A1_inline(__this, NULL);
				MixedRealityInteractionMapping_t10DB776EEA5255542F8F4AF0DC0BC566AF0095E0* L_46 = ___interactionMapping0;
				NullCheck(L_46);
				MixedRealityInputAction_tD3B6E9CE7F20EFC9D066C519FAB848679FC62486 L_47;
				L_47 = MixedRealityInteractionMapping_get_MixedRealityInputAction_mE813B3EBBA0A10F64E34EA6E5001D140D81141E9_inline(L_46, NULL);
				NullCheck(G_B32_0);
				InterfaceActionInvoker3< RuntimeObject*, uint8_t, MixedRealityInputAction_tD3B6E9CE7F20EFC9D066C519FAB848679FC62486 >::Invoke(39 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem::RaiseOnInputDown(Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource,Microsoft.MixedReality.Toolkit.Utilities.Handedness,Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction) */, IMixedRealityInputSystem_t73D9E8D52E761DF1CC230411D0EFD51104FF68B2_il2cpp_TypeInfo_var, G_B32_0, L_44, L_45, L_47);
				goto IL_01a7;
			}

IL_0175_1:
			{
				// CoreServices.InputSystem?.RaiseOnInputUp(InputSource, ControllerHandedness, interactionMapping.MixedRealityInputAction);
				il2cpp_codegen_runtime_class_init_inline(CoreServices_tCB1FB80E338B89BCA07C52C15B876BC6D4B3439B_il2cpp_TypeInfo_var);
				RuntimeObject* L_48;
				L_48 = CoreServices_get_InputSystem_m47147418643299159BF4DF408F768844FDC33943(NULL);
				RuntimeObject* L_49 = L_48;
				G_B34_0 = L_49;
				if (L_49)
				{
					G_B35_0 = L_49;
					goto IL_0180_1;
				}
			}
			{
				goto IL_01a7;
			}

IL_0180_1:
			{
				RuntimeObject* L_50;
				L_50 = BaseController_get_InputSource_m8FE11DBDF7B41338ACF8AFF3A0C8FAD83E5D2870_inline(__this, NULL);
				uint8_t L_51;
				L_51 = BaseController_get_ControllerHandedness_m739908CFF885DB452AD9A115F569C455BA46A3A1_inline(__this, NULL);
				MixedRealityInteractionMapping_t10DB776EEA5255542F8F4AF0DC0BC566AF0095E0* L_52 = ___interactionMapping0;
				NullCheck(L_52);
				MixedRealityInputAction_tD3B6E9CE7F20EFC9D066C519FAB848679FC62486 L_53;
				L_53 = MixedRealityInteractionMapping_get_MixedRealityInputAction_mE813B3EBBA0A10F64E34EA6E5001D140D81141E9_inline(L_52, NULL);
				NullCheck(G_B35_0);
				InterfaceActionInvoker3< RuntimeObject*, uint8_t, MixedRealityInputAction_tD3B6E9CE7F20EFC9D066C519FAB848679FC62486 >::Invoke(40 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem::RaiseOnInputUp(Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource,Microsoft.MixedReality.Toolkit.Utilities.Handedness,Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction) */, IMixedRealityInputSystem_t73D9E8D52E761DF1CC230411D0EFD51104FF68B2_il2cpp_TypeInfo_var, G_B35_0, L_50, L_51, L_53);
			}

IL_0197_1:
			{
				// }
				goto IL_01a7;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_01a7:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.Input.GenericXRSDKController::UpdateSingleAxisData(Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping,UnityEngine.XR.InputDevice)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GenericXRSDKController_UpdateSingleAxisData_m811ACD65931669AC8A285214F0EB83D0E0E9ADA0 (GenericXRSDKController_tB5136D037E3BD7D743A519016EA2710F7ED980DE* __this, MixedRealityInteractionMapping_t10DB776EEA5255542F8F4AF0DC0BC566AF0095E0* ___interactionMapping0, InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD ___inputDevice1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CommonUsages_t9208F514F1E77BE70AC53EFEC94D57EDDAF3B8E1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CoreServices_tCB1FB80E338B89BCA07C52C15B876BC6D4B3439B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GenericXRSDKController_tB5136D037E3BD7D743A519016EA2710F7ED980DE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealityInputSystem_t73D9E8D52E761DF1CC230411D0EFD51104FF68B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	AutoScope_tFB983697E28885CB10FFDB92D7EFD0615AEF3139 V_0;
	memset((&V_0), 0, sizeof(V_0));
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	bool V_3 = false;
	int32_t V_4 = 0;
	float V_5 = 0.0f;
	float V_6 = 0.0f;
	RuntimeObject* G_B12_0 = NULL;
	RuntimeObject* G_B11_0 = NULL;
	RuntimeObject* G_B15_0 = NULL;
	RuntimeObject* G_B14_0 = NULL;
	RuntimeObject* G_B26_0 = NULL;
	RuntimeObject* G_B25_0 = NULL;
	{
		// using (UpdateSingleAxisDataPerfMarker.Auto())
		il2cpp_codegen_runtime_class_init_inline(GenericXRSDKController_tB5136D037E3BD7D743A519016EA2710F7ED980DE_il2cpp_TypeInfo_var);
		ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD L_0 = ((GenericXRSDKController_tB5136D037E3BD7D743A519016EA2710F7ED980DE_StaticFields*)il2cpp_codegen_static_fields_for(GenericXRSDKController_tB5136D037E3BD7D743A519016EA2710F7ED980DE_il2cpp_TypeInfo_var))->___UpdateSingleAxisDataPerfMarker_21;
		V_1 = L_0;
		AutoScope_tFB983697E28885CB10FFDB92D7EFD0615AEF3139 L_1;
		L_1 = ProfilerMarker_Auto_m133FA724EB95D16187B37D2C8A501D7E989B1F8D_inline((&V_1), NULL);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0124:
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
				V_4 = L_3;
				int32_t L_4 = V_4;
				if ((((int32_t)L_4) == ((int32_t)((int32_t)13))))
				{
					goto IL_0024_1;
				}
			}
			{
				int32_t L_5 = V_4;
				if ((((int32_t)L_5) == ((int32_t)((int32_t)60))))
				{
					goto IL_003d_1;
				}
			}
			{
				goto IL_0054_1;
			}

IL_0024_1:
			{
				// if (inputDevice.TryGetFeatureValue(CommonUsages.triggerButton, out bool triggerPressed))
				il2cpp_codegen_runtime_class_init_inline(CommonUsages_t9208F514F1E77BE70AC53EFEC94D57EDDAF3B8E1_il2cpp_TypeInfo_var);
				InputFeatureUsage_1_tE336B2F0B9AC721519BFA17A08D6353FD5221637 L_6 = ((CommonUsages_t9208F514F1E77BE70AC53EFEC94D57EDDAF3B8E1_StaticFields*)il2cpp_codegen_static_fields_for(CommonUsages_t9208F514F1E77BE70AC53EFEC94D57EDDAF3B8E1_il2cpp_TypeInfo_var))->___triggerButton_6;
				bool L_7;
				L_7 = InputDevice_TryGetFeatureValue_m24EC3B6C41AE4098269427232AD5F52E786BF884((&___inputDevice1), L_6, (&V_2), NULL);
				if (!L_7)
				{
					goto IL_0054_1;
				}
			}
			{
				// interactionMapping.BoolData = triggerPressed;
				MixedRealityInteractionMapping_t10DB776EEA5255542F8F4AF0DC0BC566AF0095E0* L_8 = ___interactionMapping0;
				bool L_9 = V_2;
				NullCheck(L_8);
				MixedRealityInteractionMapping_set_BoolData_m216D4A26D41B17B7CB6D4C28A30A38D8D6349ADA(L_8, L_9, NULL);
				// break;
				goto IL_0054_1;
			}

IL_003d_1:
			{
				// if (inputDevice.TryGetFeatureValue(CommonUsages.gripButton, out bool gripPressed))
				il2cpp_codegen_runtime_class_init_inline(CommonUsages_t9208F514F1E77BE70AC53EFEC94D57EDDAF3B8E1_il2cpp_TypeInfo_var);
				InputFeatureUsage_1_tE336B2F0B9AC721519BFA17A08D6353FD5221637 L_10 = ((CommonUsages_t9208F514F1E77BE70AC53EFEC94D57EDDAF3B8E1_StaticFields*)il2cpp_codegen_static_fields_for(CommonUsages_t9208F514F1E77BE70AC53EFEC94D57EDDAF3B8E1_il2cpp_TypeInfo_var))->___gripButton_5;
				bool L_11;
				L_11 = InputDevice_TryGetFeatureValue_m24EC3B6C41AE4098269427232AD5F52E786BF884((&___inputDevice1), L_10, (&V_3), NULL);
				if (!L_11)
				{
					goto IL_0054_1;
				}
			}
			{
				// interactionMapping.BoolData = gripPressed;
				MixedRealityInteractionMapping_t10DB776EEA5255542F8F4AF0DC0BC566AF0095E0* L_12 = ___interactionMapping0;
				bool L_13 = V_3;
				NullCheck(L_12);
				MixedRealityInteractionMapping_set_BoolData_m216D4A26D41B17B7CB6D4C28A30A38D8D6349ADA(L_12, L_13, NULL);
			}

IL_0054_1:
			{
				// if (interactionMapping.Changed)
				MixedRealityInteractionMapping_t10DB776EEA5255542F8F4AF0DC0BC566AF0095E0* L_14 = ___interactionMapping0;
				NullCheck(L_14);
				bool L_15;
				L_15 = MixedRealityInteractionMapping_get_Changed_mC98FFE1F0E915A3F03110D83000E473E7F05BC53(L_14, NULL);
				if (!L_15)
				{
					goto IL_00aa_1;
				}
			}
			{
				// if (interactionMapping.BoolData)
				MixedRealityInteractionMapping_t10DB776EEA5255542F8F4AF0DC0BC566AF0095E0* L_16 = ___interactionMapping0;
				NullCheck(L_16);
				bool L_17;
				L_17 = MixedRealityInteractionMapping_get_BoolData_m69F4D6E88FF5DF204C3C38426A2BCD74AB7060CB_inline(L_16, NULL);
				if (!L_17)
				{
					goto IL_0088_1;
				}
			}
			{
				// CoreServices.InputSystem?.RaiseOnInputDown(InputSource, ControllerHandedness, interactionMapping.MixedRealityInputAction);
				il2cpp_codegen_runtime_class_init_inline(CoreServices_tCB1FB80E338B89BCA07C52C15B876BC6D4B3439B_il2cpp_TypeInfo_var);
				RuntimeObject* L_18;
				L_18 = CoreServices_get_InputSystem_m47147418643299159BF4DF408F768844FDC33943(NULL);
				RuntimeObject* L_19 = L_18;
				G_B11_0 = L_19;
				if (L_19)
				{
					G_B12_0 = L_19;
					goto IL_006f_1;
				}
			}
			{
				goto IL_00aa_1;
			}

IL_006f_1:
			{
				RuntimeObject* L_20;
				L_20 = BaseController_get_InputSource_m8FE11DBDF7B41338ACF8AFF3A0C8FAD83E5D2870_inline(__this, NULL);
				uint8_t L_21;
				L_21 = BaseController_get_ControllerHandedness_m739908CFF885DB452AD9A115F569C455BA46A3A1_inline(__this, NULL);
				MixedRealityInteractionMapping_t10DB776EEA5255542F8F4AF0DC0BC566AF0095E0* L_22 = ___interactionMapping0;
				NullCheck(L_22);
				MixedRealityInputAction_tD3B6E9CE7F20EFC9D066C519FAB848679FC62486 L_23;
				L_23 = MixedRealityInteractionMapping_get_MixedRealityInputAction_mE813B3EBBA0A10F64E34EA6E5001D140D81141E9_inline(L_22, NULL);
				NullCheck(G_B12_0);
				InterfaceActionInvoker3< RuntimeObject*, uint8_t, MixedRealityInputAction_tD3B6E9CE7F20EFC9D066C519FAB848679FC62486 >::Invoke(39 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem::RaiseOnInputDown(Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource,Microsoft.MixedReality.Toolkit.Utilities.Handedness,Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction) */, IMixedRealityInputSystem_t73D9E8D52E761DF1CC230411D0EFD51104FF68B2_il2cpp_TypeInfo_var, G_B12_0, L_20, L_21, L_23);
				goto IL_00aa_1;
			}

IL_0088_1:
			{
				// CoreServices.InputSystem?.RaiseOnInputUp(InputSource, ControllerHandedness, interactionMapping.MixedRealityInputAction);
				il2cpp_codegen_runtime_class_init_inline(CoreServices_tCB1FB80E338B89BCA07C52C15B876BC6D4B3439B_il2cpp_TypeInfo_var);
				RuntimeObject* L_24;
				L_24 = CoreServices_get_InputSystem_m47147418643299159BF4DF408F768844FDC33943(NULL);
				RuntimeObject* L_25 = L_24;
				G_B14_0 = L_25;
				if (L_25)
				{
					G_B15_0 = L_25;
					goto IL_0093_1;
				}
			}
			{
				goto IL_00aa_1;
			}

IL_0093_1:
			{
				RuntimeObject* L_26;
				L_26 = BaseController_get_InputSource_m8FE11DBDF7B41338ACF8AFF3A0C8FAD83E5D2870_inline(__this, NULL);
				uint8_t L_27;
				L_27 = BaseController_get_ControllerHandedness_m739908CFF885DB452AD9A115F569C455BA46A3A1_inline(__this, NULL);
				MixedRealityInteractionMapping_t10DB776EEA5255542F8F4AF0DC0BC566AF0095E0* L_28 = ___interactionMapping0;
				NullCheck(L_28);
				MixedRealityInputAction_tD3B6E9CE7F20EFC9D066C519FAB848679FC62486 L_29;
				L_29 = MixedRealityInteractionMapping_get_MixedRealityInputAction_mE813B3EBBA0A10F64E34EA6E5001D140D81141E9_inline(L_28, NULL);
				NullCheck(G_B15_0);
				InterfaceActionInvoker3< RuntimeObject*, uint8_t, MixedRealityInputAction_tD3B6E9CE7F20EFC9D066C519FAB848679FC62486 >::Invoke(40 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem::RaiseOnInputUp(Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource,Microsoft.MixedReality.Toolkit.Utilities.Handedness,Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction) */, IMixedRealityInputSystem_t73D9E8D52E761DF1CC230411D0EFD51104FF68B2_il2cpp_TypeInfo_var, G_B15_0, L_26, L_27, L_29);
			}

IL_00aa_1:
			{
				// switch (interactionMapping.InputType)
				MixedRealityInteractionMapping_t10DB776EEA5255542F8F4AF0DC0BC566AF0095E0* L_30 = ___interactionMapping0;
				NullCheck(L_30);
				int32_t L_31;
				L_31 = MixedRealityInteractionMapping_get_InputType_m431C40AD5149D4817FAA46DC0326A481FE348C8D_inline(L_30, NULL);
				V_4 = L_31;
				int32_t L_32 = V_4;
				if ((((int32_t)L_32) == ((int32_t)((int32_t)10))))
				{
					goto IL_00c0_1;
				}
			}
			{
				int32_t L_33 = V_4;
				if ((((int32_t)L_33) == ((int32_t)((int32_t)57))))
				{
					goto IL_00da_1;
				}
			}
			{
				goto IL_0132;
			}

IL_00c0_1:
			{
				// if (inputDevice.TryGetFeatureValue(CommonUsages.trigger, out float triggerData))
				il2cpp_codegen_runtime_class_init_inline(CommonUsages_t9208F514F1E77BE70AC53EFEC94D57EDDAF3B8E1_il2cpp_TypeInfo_var);
				InputFeatureUsage_1_t311D0F42F1A7BF37D3CEAC15A53A1F24165F1848 L_34 = ((CommonUsages_t9208F514F1E77BE70AC53EFEC94D57EDDAF3B8E1_StaticFields*)il2cpp_codegen_static_fields_for(CommonUsages_t9208F514F1E77BE70AC53EFEC94D57EDDAF3B8E1_il2cpp_TypeInfo_var))->___trigger_15;
				bool L_35;
				L_35 = InputDevice_TryGetFeatureValue_m675D52240379FEF80D6499B5031941812FDFD081((&___inputDevice1), L_34, (&V_5), NULL);
				if (!L_35)
				{
					goto IL_00f2_1;
				}
			}
			{
				// interactionMapping.FloatData = triggerData;
				MixedRealityInteractionMapping_t10DB776EEA5255542F8F4AF0DC0BC566AF0095E0* L_36 = ___interactionMapping0;
				float L_37 = V_5;
				NullCheck(L_36);
				MixedRealityInteractionMapping_set_FloatData_m066549958CEC53702E41C3E56E0A6E52056A0E4D(L_36, L_37, NULL);
				// break;
				goto IL_00f2_1;
			}

IL_00da_1:
			{
				// if (inputDevice.TryGetFeatureValue(CommonUsages.grip, out float gripData))
				il2cpp_codegen_runtime_class_init_inline(CommonUsages_t9208F514F1E77BE70AC53EFEC94D57EDDAF3B8E1_il2cpp_TypeInfo_var);
				InputFeatureUsage_1_t311D0F42F1A7BF37D3CEAC15A53A1F24165F1848 L_38 = ((CommonUsages_t9208F514F1E77BE70AC53EFEC94D57EDDAF3B8E1_StaticFields*)il2cpp_codegen_static_fields_for(CommonUsages_t9208F514F1E77BE70AC53EFEC94D57EDDAF3B8E1_il2cpp_TypeInfo_var))->___grip_16;
				bool L_39;
				L_39 = InputDevice_TryGetFeatureValue_m675D52240379FEF80D6499B5031941812FDFD081((&___inputDevice1), L_38, (&V_6), NULL);
				if (!L_39)
				{
					goto IL_00f2_1;
				}
			}
			{
				// interactionMapping.FloatData = gripData;
				MixedRealityInteractionMapping_t10DB776EEA5255542F8F4AF0DC0BC566AF0095E0* L_40 = ___interactionMapping0;
				float L_41 = V_6;
				NullCheck(L_40);
				MixedRealityInteractionMapping_set_FloatData_m066549958CEC53702E41C3E56E0A6E52056A0E4D(L_40, L_41, NULL);
			}

IL_00f2_1:
			{
				// if (interactionMapping.Changed)
				MixedRealityInteractionMapping_t10DB776EEA5255542F8F4AF0DC0BC566AF0095E0* L_42 = ___interactionMapping0;
				NullCheck(L_42);
				bool L_43;
				L_43 = MixedRealityInteractionMapping_get_Changed_mC98FFE1F0E915A3F03110D83000E473E7F05BC53(L_42, NULL);
				if (!L_43)
				{
					goto IL_0122_1;
				}
			}
			{
				// CoreServices.InputSystem?.RaiseFloatInputChanged(InputSource, ControllerHandedness, interactionMapping.MixedRealityInputAction, interactionMapping.FloatData);
				il2cpp_codegen_runtime_class_init_inline(CoreServices_tCB1FB80E338B89BCA07C52C15B876BC6D4B3439B_il2cpp_TypeInfo_var);
				RuntimeObject* L_44;
				L_44 = CoreServices_get_InputSystem_m47147418643299159BF4DF408F768844FDC33943(NULL);
				RuntimeObject* L_45 = L_44;
				G_B25_0 = L_45;
				if (L_45)
				{
					G_B26_0 = L_45;
					goto IL_0105_1;
				}
			}
			{
				goto IL_0132;
			}

IL_0105_1:
			{
				RuntimeObject* L_46;
				L_46 = BaseController_get_InputSource_m8FE11DBDF7B41338ACF8AFF3A0C8FAD83E5D2870_inline(__this, NULL);
				uint8_t L_47;
				L_47 = BaseController_get_ControllerHandedness_m739908CFF885DB452AD9A115F569C455BA46A3A1_inline(__this, NULL);
				MixedRealityInteractionMapping_t10DB776EEA5255542F8F4AF0DC0BC566AF0095E0* L_48 = ___interactionMapping0;
				NullCheck(L_48);
				MixedRealityInputAction_tD3B6E9CE7F20EFC9D066C519FAB848679FC62486 L_49;
				L_49 = MixedRealityInteractionMapping_get_MixedRealityInputAction_mE813B3EBBA0A10F64E34EA6E5001D140D81141E9_inline(L_48, NULL);
				MixedRealityInteractionMapping_t10DB776EEA5255542F8F4AF0DC0BC566AF0095E0* L_50 = ___interactionMapping0;
				NullCheck(L_50);
				float L_51;
				L_51 = MixedRealityInteractionMapping_get_FloatData_m427535AC6E511D46014CADA75E2410FA4CE5C903_inline(L_50, NULL);
				NullCheck(G_B26_0);
				InterfaceActionInvoker4< RuntimeObject*, uint8_t, MixedRealityInputAction_tD3B6E9CE7F20EFC9D066C519FAB848679FC62486, float >::Invoke(41 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem::RaiseFloatInputChanged(Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource,Microsoft.MixedReality.Toolkit.Utilities.Handedness,Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction,System.Single) */, IMixedRealityInputSystem_t73D9E8D52E761DF1CC230411D0EFD51104FF68B2_il2cpp_TypeInfo_var, G_B26_0, L_46, L_47, L_49, L_51);
			}

IL_0122_1:
			{
				// }
				goto IL_0132;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0132:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.Input.GenericXRSDKController::UpdateDualAxisData(Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping,UnityEngine.XR.InputDevice)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GenericXRSDKController_UpdateDualAxisData_m87455ECD59EA7E3E5730959F7277BC574D62CA22 (GenericXRSDKController_tB5136D037E3BD7D743A519016EA2710F7ED980DE* __this, MixedRealityInteractionMapping_t10DB776EEA5255542F8F4AF0DC0BC566AF0095E0* ___interactionMapping0, InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD ___inputDevice1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CommonUsages_t9208F514F1E77BE70AC53EFEC94D57EDDAF3B8E1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CoreServices_tCB1FB80E338B89BCA07C52C15B876BC6D4B3439B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GenericXRSDKController_tB5136D037E3BD7D743A519016EA2710F7ED980DE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealityInputSystem_t73D9E8D52E761DF1CC230411D0EFD51104FF68B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	AutoScope_tFB983697E28885CB10FFDB92D7EFD0615AEF3139 V_0;
	memset((&V_0), 0, sizeof(V_0));
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD V_1;
	memset((&V_1), 0, sizeof(V_1));
	InputFeatureUsage_1_tEB160A05BCDCCA4F96072CBA0866498D06B9A27C V_2;
	memset((&V_2), 0, sizeof(V_2));
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_3;
	memset((&V_3), 0, sizeof(V_3));
	int32_t V_4 = 0;
	RuntimeObject* G_B11_0 = NULL;
	RuntimeObject* G_B10_0 = NULL;
	{
		// using (UpdateDualAxisDataPerfMarker.Auto())
		il2cpp_codegen_runtime_class_init_inline(GenericXRSDKController_tB5136D037E3BD7D743A519016EA2710F7ED980DE_il2cpp_TypeInfo_var);
		ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD L_0 = ((GenericXRSDKController_tB5136D037E3BD7D743A519016EA2710F7ED980DE_StaticFields*)il2cpp_codegen_static_fields_for(GenericXRSDKController_tB5136D037E3BD7D743A519016EA2710F7ED980DE_il2cpp_TypeInfo_var))->___UpdateDualAxisDataPerfMarker_22;
		V_1 = L_0;
		AutoScope_tFB983697E28885CB10FFDB92D7EFD0615AEF3139 L_1;
		L_1 = ProfilerMarker_Auto_m133FA724EB95D16187B37D2C8A501D7E989B1F8D_inline((&V_1), NULL);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0077:
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
				V_4 = L_3;
				int32_t L_4 = V_4;
				if ((((int32_t)L_4) == ((int32_t)((int32_t)17))))
				{
					goto IL_0024_1;
				}
			}
			{
				int32_t L_5 = V_4;
				if ((((int32_t)L_5) == ((int32_t)((int32_t)21))))
				{
					goto IL_002c_1;
				}
			}
			{
				goto IL_0085;
			}

IL_0024_1:
			{
				// axisUsage = CommonUsages.primary2DAxis;
				il2cpp_codegen_runtime_class_init_inline(CommonUsages_t9208F514F1E77BE70AC53EFEC94D57EDDAF3B8E1_il2cpp_TypeInfo_var);
				InputFeatureUsage_1_tEB160A05BCDCCA4F96072CBA0866498D06B9A27C L_6 = ((CommonUsages_t9208F514F1E77BE70AC53EFEC94D57EDDAF3B8E1_StaticFields*)il2cpp_codegen_static_fields_for(CommonUsages_t9208F514F1E77BE70AC53EFEC94D57EDDAF3B8E1_il2cpp_TypeInfo_var))->___primary2DAxis_17;
				V_2 = L_6;
				// break;
				goto IL_0032_1;
			}

IL_002c_1:
			{
				// axisUsage = CommonUsages.secondary2DAxis;
				il2cpp_codegen_runtime_class_init_inline(CommonUsages_t9208F514F1E77BE70AC53EFEC94D57EDDAF3B8E1_il2cpp_TypeInfo_var);
				InputFeatureUsage_1_tEB160A05BCDCCA4F96072CBA0866498D06B9A27C L_7 = ((CommonUsages_t9208F514F1E77BE70AC53EFEC94D57EDDAF3B8E1_StaticFields*)il2cpp_codegen_static_fields_for(CommonUsages_t9208F514F1E77BE70AC53EFEC94D57EDDAF3B8E1_il2cpp_TypeInfo_var))->___secondary2DAxis_18;
				V_2 = L_7;
			}

IL_0032_1:
			{
				// if (inputDevice.TryGetFeatureValue(axisUsage, out Vector2 axisData))
				InputFeatureUsage_1_tEB160A05BCDCCA4F96072CBA0866498D06B9A27C L_8 = V_2;
				bool L_9;
				L_9 = InputDevice_TryGetFeatureValue_mB2C15D1FC747DA9FB5958FA17E77049886FB3BBA((&___inputDevice1), L_8, (&V_3), NULL);
				if (!L_9)
				{
					goto IL_0045_1;
				}
			}
			{
				// interactionMapping.Vector2Data = axisData;
				MixedRealityInteractionMapping_t10DB776EEA5255542F8F4AF0DC0BC566AF0095E0* L_10 = ___interactionMapping0;
				Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_11 = V_3;
				NullCheck(L_10);
				MixedRealityInteractionMapping_set_Vector2Data_m393F740387B58C5A3BFF6FD7835A6D05F98C7456(L_10, L_11, NULL);
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
					goto IL_0075_1;
				}
			}
			{
				// CoreServices.InputSystem?.RaisePositionInputChanged(InputSource, ControllerHandedness, interactionMapping.MixedRealityInputAction, interactionMapping.Vector2Data);
				il2cpp_codegen_runtime_class_init_inline(CoreServices_tCB1FB80E338B89BCA07C52C15B876BC6D4B3439B_il2cpp_TypeInfo_var);
				RuntimeObject* L_14;
				L_14 = CoreServices_get_InputSystem_m47147418643299159BF4DF408F768844FDC33943(NULL);
				RuntimeObject* L_15 = L_14;
				G_B10_0 = L_15;
				if (L_15)
				{
					G_B11_0 = L_15;
					goto IL_0058_1;
				}
			}
			{
				goto IL_0085;
			}

IL_0058_1:
			{
				RuntimeObject* L_16;
				L_16 = BaseController_get_InputSource_m8FE11DBDF7B41338ACF8AFF3A0C8FAD83E5D2870_inline(__this, NULL);
				uint8_t L_17;
				L_17 = BaseController_get_ControllerHandedness_m739908CFF885DB452AD9A115F569C455BA46A3A1_inline(__this, NULL);
				MixedRealityInteractionMapping_t10DB776EEA5255542F8F4AF0DC0BC566AF0095E0* L_18 = ___interactionMapping0;
				NullCheck(L_18);
				MixedRealityInputAction_tD3B6E9CE7F20EFC9D066C519FAB848679FC62486 L_19;
				L_19 = MixedRealityInteractionMapping_get_MixedRealityInputAction_mE813B3EBBA0A10F64E34EA6E5001D140D81141E9_inline(L_18, NULL);
				MixedRealityInteractionMapping_t10DB776EEA5255542F8F4AF0DC0BC566AF0095E0* L_20 = ___interactionMapping0;
				NullCheck(L_20);
				Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_21;
				L_21 = MixedRealityInteractionMapping_get_Vector2Data_m56249B37DF9ADDCEA3D131DB2916014185933C40_inline(L_20, NULL);
				NullCheck(G_B11_0);
				InterfaceActionInvoker4< RuntimeObject*, uint8_t, MixedRealityInputAction_tD3B6E9CE7F20EFC9D066C519FAB848679FC62486, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 >::Invoke(42 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem::RaisePositionInputChanged(Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource,Microsoft.MixedReality.Toolkit.Utilities.Handedness,Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction,UnityEngine.Vector2) */, IMixedRealityInputSystem_t73D9E8D52E761DF1CC230411D0EFD51104FF68B2_il2cpp_TypeInfo_var, G_B11_0, L_16, L_17, L_19, L_21);
			}

IL_0075_1:
			{
				// }
				goto IL_0085;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0085:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.Input.GenericXRSDKController::UpdatePoseData(Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping,UnityEngine.XR.InputDevice)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GenericXRSDKController_UpdatePoseData_mD6B1481BC7BABD3265AA994D47789B80369054C9 (GenericXRSDKController_tB5136D037E3BD7D743A519016EA2710F7ED980DE* __this, MixedRealityInteractionMapping_t10DB776EEA5255542F8F4AF0DC0BC566AF0095E0* ___interactionMapping0, InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD ___inputDevice1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CoreServices_tCB1FB80E338B89BCA07C52C15B876BC6D4B3439B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GenericXRSDKController_tB5136D037E3BD7D743A519016EA2710F7ED980DE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealityInputSystem_t73D9E8D52E761DF1CC230411D0EFD51104FF68B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	AutoScope_tFB983697E28885CB10FFDB92D7EFD0615AEF3139 V_0;
	memset((&V_0), 0, sizeof(V_0));
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	RuntimeObject* G_B7_0 = NULL;
	RuntimeObject* G_B6_0 = NULL;
	{
		// using (UpdatePoseDataPerfMarker.Auto())
		il2cpp_codegen_runtime_class_init_inline(GenericXRSDKController_tB5136D037E3BD7D743A519016EA2710F7ED980DE_il2cpp_TypeInfo_var);
		ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD L_0 = ((GenericXRSDKController_tB5136D037E3BD7D743A519016EA2710F7ED980DE_StaticFields*)il2cpp_codegen_static_fields_for(GenericXRSDKController_tB5136D037E3BD7D743A519016EA2710F7ED980DE_il2cpp_TypeInfo_var))->___UpdatePoseDataPerfMarker_23;
		V_1 = L_0;
		AutoScope_tFB983697E28885CB10FFDB92D7EFD0615AEF3139 L_1;
		L_1 = ProfilerMarker_Auto_m133FA724EB95D16187B37D2C8A501D7E989B1F8D_inline((&V_1), NULL);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_005e:
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
					goto IL_0020_1;
				}
			}
			{
				int32_t L_5 = V_2;
				if ((((int32_t)L_5) == ((int32_t)((int32_t)14))))
				{
					goto IL_0020_1;
				}
			}
			{
				goto IL_006c;
			}

IL_0020_1:
			{
				// interactionMapping.PoseData = CurrentControllerPose;
				MixedRealityInteractionMapping_t10DB776EEA5255542F8F4AF0DC0BC566AF0095E0* L_6 = ___interactionMapping0;
				MixedRealityPose_tE60115C271AC50B8C11BA3B404BFCA99C7B2EFF5 L_7 = __this->___CurrentControllerPose_12;
				NullCheck(L_6);
				MixedRealityInteractionMapping_set_PoseData_m2AD97DB2F27527268C645A037E7E358A8CDF3A90(L_6, L_7, NULL);
				// if (interactionMapping.Changed)
				MixedRealityInteractionMapping_t10DB776EEA5255542F8F4AF0DC0BC566AF0095E0* L_8 = ___interactionMapping0;
				NullCheck(L_8);
				bool L_9;
				L_9 = MixedRealityInteractionMapping_get_Changed_mC98FFE1F0E915A3F03110D83000E473E7F05BC53(L_8, NULL);
				if (!L_9)
				{
					goto IL_005c_1;
				}
			}
			{
				// CoreServices.InputSystem?.RaisePoseInputChanged(InputSource, ControllerHandedness, interactionMapping.MixedRealityInputAction, interactionMapping.PoseData);
				il2cpp_codegen_runtime_class_init_inline(CoreServices_tCB1FB80E338B89BCA07C52C15B876BC6D4B3439B_il2cpp_TypeInfo_var);
				RuntimeObject* L_10;
				L_10 = CoreServices_get_InputSystem_m47147418643299159BF4DF408F768844FDC33943(NULL);
				RuntimeObject* L_11 = L_10;
				G_B6_0 = L_11;
				if (L_11)
				{
					G_B7_0 = L_11;
					goto IL_003f_1;
				}
			}
			{
				goto IL_006c;
			}

IL_003f_1:
			{
				RuntimeObject* L_12;
				L_12 = BaseController_get_InputSource_m8FE11DBDF7B41338ACF8AFF3A0C8FAD83E5D2870_inline(__this, NULL);
				uint8_t L_13;
				L_13 = BaseController_get_ControllerHandedness_m739908CFF885DB452AD9A115F569C455BA46A3A1_inline(__this, NULL);
				MixedRealityInteractionMapping_t10DB776EEA5255542F8F4AF0DC0BC566AF0095E0* L_14 = ___interactionMapping0;
				NullCheck(L_14);
				MixedRealityInputAction_tD3B6E9CE7F20EFC9D066C519FAB848679FC62486 L_15;
				L_15 = MixedRealityInteractionMapping_get_MixedRealityInputAction_mE813B3EBBA0A10F64E34EA6E5001D140D81141E9_inline(L_14, NULL);
				MixedRealityInteractionMapping_t10DB776EEA5255542F8F4AF0DC0BC566AF0095E0* L_16 = ___interactionMapping0;
				NullCheck(L_16);
				MixedRealityPose_tE60115C271AC50B8C11BA3B404BFCA99C7B2EFF5 L_17;
				L_17 = MixedRealityInteractionMapping_get_PoseData_m90E4BA2D7413EC29B85B025AEE96C2F7662427B0_inline(L_16, NULL);
				NullCheck(G_B7_0);
				InterfaceActionInvoker4< RuntimeObject*, uint8_t, MixedRealityInputAction_tD3B6E9CE7F20EFC9D066C519FAB848679FC62486, MixedRealityPose_tE60115C271AC50B8C11BA3B404BFCA99C7B2EFF5 >::Invoke(45 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem::RaisePoseInputChanged(Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource,Microsoft.MixedReality.Toolkit.Utilities.Handedness,Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction,Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose) */, IMixedRealityInputSystem_t73D9E8D52E761DF1CC230411D0EFD51104FF68B2_il2cpp_TypeInfo_var, G_B7_0, L_12, L_13, L_15, L_17);
			}

IL_005c_1:
			{
				// }
				goto IL_006c;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_006c:
	{
		// }
		return;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.XRSDK.Input.GenericXRSDKController::StartHapticImpulse(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GenericXRSDKController_StartHapticImpulse_m9F2920F56E6BCA20DC9226DEEF85C33B35A47C89 (GenericXRSDKController_tB5136D037E3BD7D743A519016EA2710F7ED980DE* __this, float ___intensity0, float ___durationInSeconds1, const RuntimeMethod* method) 
{
	HapticCapabilities_t4F7DFEDA7457938D39B877F6A86901F7A6788211 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (lastInputDevice.TryGetHapticCapabilities(out HapticCapabilities hapticCapabilities) && hapticCapabilities.supportsImpulse)
		InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* L_0 = (&__this->___lastInputDevice_16);
		bool L_1;
		L_1 = InputDevice_TryGetHapticCapabilities_mC97EE9A231941988E8B6FA8AF0CB310EFE1B77A3(L_0, (&V_0), NULL);
		if (!L_1)
		{
			goto IL_004b;
		}
	}
	{
		bool L_2;
		L_2 = HapticCapabilities_get_supportsImpulse_m855193672304BD935913E215B690B14952E0C59C((&V_0), NULL);
		if (!L_2)
		{
			goto IL_004b;
		}
	}
	{
		// if (Mathf.Approximately(durationInSeconds, float.MaxValue))
		float L_3 = ___durationInSeconds1;
		bool L_4;
		L_4 = Mathf_Approximately_m1C8DD0BB6A2D22A7DCF09AD7F8EE9ABD12D3F620_inline(L_3, ((std::numeric_limits<float>::max)()), NULL);
		if (!L_4)
		{
			goto IL_003a;
		}
	}
	{
		// lastInputDevice.SendHapticImpulse(0, intensity);
		InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* L_5 = (&__this->___lastInputDevice_16);
		float L_6 = ___intensity0;
		bool L_7;
		L_7 = InputDevice_SendHapticImpulse_m7166A784508F8E0F3AE5BD88863171C7A905BC1B(L_5, 0, L_6, (1.0f), NULL);
		goto IL_0049;
	}

IL_003a:
	{
		// lastInputDevice.SendHapticImpulse(0, intensity, durationInSeconds);
		InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* L_8 = (&__this->___lastInputDevice_16);
		float L_9 = ___intensity0;
		float L_10 = ___durationInSeconds1;
		bool L_11;
		L_11 = InputDevice_SendHapticImpulse_m7166A784508F8E0F3AE5BD88863171C7A905BC1B(L_8, 0, L_9, L_10, NULL);
	}

IL_0049:
	{
		// return true;
		return (bool)1;
	}

IL_004b:
	{
		// return false;
		return (bool)0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.Input.GenericXRSDKController::StopHapticFeedback()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GenericXRSDKController_StopHapticFeedback_m4DBBED0CFF755B10B82C657B7E61FAE680E0D015 (GenericXRSDKController_tB5136D037E3BD7D743A519016EA2710F7ED980DE* __this, const RuntimeMethod* method) 
{
	{
		// public void StopHapticFeedback() => lastInputDevice.StopHaptics();
		InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* L_0 = (&__this->___lastInputDevice_16);
		InputDevice_StopHaptics_m816C765A638F5571FD884AEED49FFA74BD535080(L_0, NULL);
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.Input.GenericXRSDKController::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GenericXRSDKController__cctor_m9D8AA93D4E4502EC8285733AD415F7D10AE09B31 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GenericXRSDKController_tB5136D037E3BD7D743A519016EA2710F7ED980DE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral100EAC20AECA8B5CD321250A1FF6AA934A803107);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral17B97FD629C4550F8A404BB3C486EA91CDABA97F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1E3510DB4821655396E1F2E952BD12C2B3B405E7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2CFD4278E7555C6A660A18C41A2048C3B4A704E1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5809513B2145A306FE3DBF1BAED5C85FC20543EA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6BC765E3D4BA1A9A049E296B224B2C2013EF2191);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD92CAA6D4FB249FBAAD0197B1EE8796D6F7A25D4);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static readonly ProfilerMarker UpdateControllerPerfMarker = new ProfilerMarker("[MRTK] GenericXRSDKController.UpdateController");
		ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD L_0;
		memset((&L_0), 0, sizeof(L_0));
		ProfilerMarker__ctor_mDD68B0A8B71E0301F592AF8891560150E55699C8_inline((&L_0), _stringLiteral100EAC20AECA8B5CD321250A1FF6AA934A803107, /*hidden argument*/NULL);
		((GenericXRSDKController_tB5136D037E3BD7D743A519016EA2710F7ED980DE_StaticFields*)il2cpp_codegen_static_fields_for(GenericXRSDKController_tB5136D037E3BD7D743A519016EA2710F7ED980DE_il2cpp_TypeInfo_var))->___UpdateControllerPerfMarker_17 = L_0;
		// private static readonly ProfilerMarker UpdateSourceDataPerfMarker = new ProfilerMarker("[MRTK] BaseWindowsMixedRealitySource.UpdateSourceData");
		ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD L_1;
		memset((&L_1), 0, sizeof(L_1));
		ProfilerMarker__ctor_mDD68B0A8B71E0301F592AF8891560150E55699C8_inline((&L_1), _stringLiteral17B97FD629C4550F8A404BB3C486EA91CDABA97F, /*hidden argument*/NULL);
		((GenericXRSDKController_tB5136D037E3BD7D743A519016EA2710F7ED980DE_StaticFields*)il2cpp_codegen_static_fields_for(GenericXRSDKController_tB5136D037E3BD7D743A519016EA2710F7ED980DE_il2cpp_TypeInfo_var))->___UpdateSourceDataPerfMarker_18 = L_1;
		// private static readonly ProfilerMarker UpdateVelocityPerfMarker = new ProfilerMarker("[MRTK] GenericXRSDKController.UpdateVelocity");
		ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD L_2;
		memset((&L_2), 0, sizeof(L_2));
		ProfilerMarker__ctor_mDD68B0A8B71E0301F592AF8891560150E55699C8_inline((&L_2), _stringLiteral6BC765E3D4BA1A9A049E296B224B2C2013EF2191, /*hidden argument*/NULL);
		((GenericXRSDKController_tB5136D037E3BD7D743A519016EA2710F7ED980DE_StaticFields*)il2cpp_codegen_static_fields_for(GenericXRSDKController_tB5136D037E3BD7D743A519016EA2710F7ED980DE_il2cpp_TypeInfo_var))->___UpdateVelocityPerfMarker_19 = L_2;
		// private static readonly ProfilerMarker UpdateButtonDataPerfMarker = new ProfilerMarker("[MRTK] GenericXRSDKController.UpdateButtonData");
		ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD L_3;
		memset((&L_3), 0, sizeof(L_3));
		ProfilerMarker__ctor_mDD68B0A8B71E0301F592AF8891560150E55699C8_inline((&L_3), _stringLiteralD92CAA6D4FB249FBAAD0197B1EE8796D6F7A25D4, /*hidden argument*/NULL);
		((GenericXRSDKController_tB5136D037E3BD7D743A519016EA2710F7ED980DE_StaticFields*)il2cpp_codegen_static_fields_for(GenericXRSDKController_tB5136D037E3BD7D743A519016EA2710F7ED980DE_il2cpp_TypeInfo_var))->___UpdateButtonDataPerfMarker_20 = L_3;
		// private static readonly ProfilerMarker UpdateSingleAxisDataPerfMarker = new ProfilerMarker("[MRTK] GenericXRSDKController.UpdateSingleAxisData");
		ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD L_4;
		memset((&L_4), 0, sizeof(L_4));
		ProfilerMarker__ctor_mDD68B0A8B71E0301F592AF8891560150E55699C8_inline((&L_4), _stringLiteral2CFD4278E7555C6A660A18C41A2048C3B4A704E1, /*hidden argument*/NULL);
		((GenericXRSDKController_tB5136D037E3BD7D743A519016EA2710F7ED980DE_StaticFields*)il2cpp_codegen_static_fields_for(GenericXRSDKController_tB5136D037E3BD7D743A519016EA2710F7ED980DE_il2cpp_TypeInfo_var))->___UpdateSingleAxisDataPerfMarker_21 = L_4;
		// private static readonly ProfilerMarker UpdateDualAxisDataPerfMarker = new ProfilerMarker("[MRTK] GenericXRSDKController.UpdateDualAxisData");
		ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD L_5;
		memset((&L_5), 0, sizeof(L_5));
		ProfilerMarker__ctor_mDD68B0A8B71E0301F592AF8891560150E55699C8_inline((&L_5), _stringLiteral5809513B2145A306FE3DBF1BAED5C85FC20543EA, /*hidden argument*/NULL);
		((GenericXRSDKController_tB5136D037E3BD7D743A519016EA2710F7ED980DE_StaticFields*)il2cpp_codegen_static_fields_for(GenericXRSDKController_tB5136D037E3BD7D743A519016EA2710F7ED980DE_il2cpp_TypeInfo_var))->___UpdateDualAxisDataPerfMarker_22 = L_5;
		// private static readonly ProfilerMarker UpdatePoseDataPerfMarker = new ProfilerMarker("[MRTK] GenericXRSDKController.UpdatePoseData");
		ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD L_6;
		memset((&L_6), 0, sizeof(L_6));
		ProfilerMarker__ctor_mDD68B0A8B71E0301F592AF8891560150E55699C8_inline((&L_6), _stringLiteral1E3510DB4821655396E1F2E952BD12C2B3B405E7, /*hidden argument*/NULL);
		((GenericXRSDKController_tB5136D037E3BD7D743A519016EA2710F7ED980DE_StaticFields*)il2cpp_codegen_static_fields_for(GenericXRSDKController_tB5136D037E3BD7D743A519016EA2710F7ED980DE_il2cpp_TypeInfo_var))->___UpdatePoseDataPerfMarker_23 = L_6;
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
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.Input.CustomUsages::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CustomUsages__cctor_mD0D70A7EF4A6A75497C19FB3B9FE7B3DD450F995 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CustomUsages_t07BAB05B93FBB1D80AAD710042445ED8DDE3A476_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputFeatureUsage_1__ctor_m14B4290F5C2B58B777726B4079A7CC2238176A08_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputFeatureUsage_1__ctor_m4267CE5D9D4C8FFE0CD48B585565A9DCADFB4FDA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral00435861D6D058D74B680B29B0E3A2FBAFB3FB5A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6EB285741C33824C27024778C8BEE281153B4786);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static readonly InputFeatureUsage<Vector3> PointerPosition = new InputFeatureUsage<Vector3>("PointerPosition");
		InputFeatureUsage_1_t2E901FA41650EB29399194768CAA93D477CEBC58 L_0;
		memset((&L_0), 0, sizeof(L_0));
		InputFeatureUsage_1__ctor_m4267CE5D9D4C8FFE0CD48B585565A9DCADFB4FDA((&L_0), _stringLiteral6EB285741C33824C27024778C8BEE281153B4786, /*hidden argument*/InputFeatureUsage_1__ctor_m4267CE5D9D4C8FFE0CD48B585565A9DCADFB4FDA_RuntimeMethod_var);
		((CustomUsages_t07BAB05B93FBB1D80AAD710042445ED8DDE3A476_StaticFields*)il2cpp_codegen_static_fields_for(CustomUsages_t07BAB05B93FBB1D80AAD710042445ED8DDE3A476_il2cpp_TypeInfo_var))->___PointerPosition_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)&(((&((CustomUsages_t07BAB05B93FBB1D80AAD710042445ED8DDE3A476_StaticFields*)il2cpp_codegen_static_fields_for(CustomUsages_t07BAB05B93FBB1D80AAD710042445ED8DDE3A476_il2cpp_TypeInfo_var))->___PointerPosition_0))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
		// public static readonly InputFeatureUsage<Quaternion> PointerRotation = new InputFeatureUsage<Quaternion>("PointerRotation");
		InputFeatureUsage_1_t8489CEC68B1EC178F2634079A9D7CD9E90D3CF5D L_1;
		memset((&L_1), 0, sizeof(L_1));
		InputFeatureUsage_1__ctor_m14B4290F5C2B58B777726B4079A7CC2238176A08((&L_1), _stringLiteral00435861D6D058D74B680B29B0E3A2FBAFB3FB5A, /*hidden argument*/InputFeatureUsage_1__ctor_m14B4290F5C2B58B777726B4079A7CC2238176A08_RuntimeMethod_var);
		((CustomUsages_t07BAB05B93FBB1D80AAD710042445ED8DDE3A476_StaticFields*)il2cpp_codegen_static_fields_for(CustomUsages_t07BAB05B93FBB1D80AAD710042445ED8DDE3A476_il2cpp_TypeInfo_var))->___PointerRotation_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)&(((&((CustomUsages_t07BAB05B93FBB1D80AAD710042445ED8DDE3A476_StaticFields*)il2cpp_codegen_static_fields_for(CustomUsages_t07BAB05B93FBB1D80AAD710042445ED8DDE3A476_il2cpp_TypeInfo_var))->___PointerRotation_1))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
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
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.Input.XRSDKDeviceManager::.ctor(Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem,System.String,System.UInt32,Microsoft.MixedReality.Toolkit.BaseMixedRealityProfile)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRSDKDeviceManager__ctor_m73C5A7C887DB58328810E99A4D9C120D5F17B1D3 (XRSDKDeviceManager_t9F5B097AEC5AA187C3083AE6F40B34E00E1BA583* __this, RuntimeObject* ___inputSystem0, String_t* ___name1, uint32_t ___priority2, BaseMixedRealityProfile_tB4FDEF58FFD17796C0DB7241630B71CDF38FA1D4* ___profile3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseInputDeviceManager_t1D055DB03D88FA053C00671FEA5040B944CC26BC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mC1C4AF7B5A8BED202F4A3E28D1C866A8AB3829AF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m220F44C9FEF5758AB2481BBB10DF60A9E1CECD55_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mF7ACC153F11A3260DAACDCA56B0A70A4BFA61EA4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tB66D13E0427CA48C600AEA4DBA5B173C3734C6CE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tEA57E67D76DE7CBA7F472F399385BD853B825EB7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private readonly List<InputDevice> inputDevices = new List<InputDevice>();
		List_1_tB66D13E0427CA48C600AEA4DBA5B173C3734C6CE* L_0 = (List_1_tB66D13E0427CA48C600AEA4DBA5B173C3734C6CE*)il2cpp_codegen_object_new(List_1_tB66D13E0427CA48C600AEA4DBA5B173C3734C6CE_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_mF7ACC153F11A3260DAACDCA56B0A70A4BFA61EA4(L_0, List_1__ctor_mF7ACC153F11A3260DAACDCA56B0A70A4BFA61EA4_RuntimeMethod_var);
		__this->___inputDevices_22 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___inputDevices_22), (void*)L_0);
		// private readonly List<InputDevice> inputDevicesSubset = new List<InputDevice>();
		List_1_tB66D13E0427CA48C600AEA4DBA5B173C3734C6CE* L_1 = (List_1_tB66D13E0427CA48C600AEA4DBA5B173C3734C6CE*)il2cpp_codegen_object_new(List_1_tB66D13E0427CA48C600AEA4DBA5B173C3734C6CE_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		List_1__ctor_mF7ACC153F11A3260DAACDCA56B0A70A4BFA61EA4(L_1, List_1__ctor_mF7ACC153F11A3260DAACDCA56B0A70A4BFA61EA4_RuntimeMethod_var);
		__this->___inputDevicesSubset_23 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___inputDevicesSubset_23), (void*)L_1);
		// private readonly List<InputDevice> lastInputDevices = new List<InputDevice>();
		List_1_tB66D13E0427CA48C600AEA4DBA5B173C3734C6CE* L_2 = (List_1_tB66D13E0427CA48C600AEA4DBA5B173C3734C6CE*)il2cpp_codegen_object_new(List_1_tB66D13E0427CA48C600AEA4DBA5B173C3734C6CE_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		List_1__ctor_mF7ACC153F11A3260DAACDCA56B0A70A4BFA61EA4(L_2, List_1__ctor_mF7ACC153F11A3260DAACDCA56B0A70A4BFA61EA4_RuntimeMethod_var);
		__this->___lastInputDevices_24 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___lastInputDevices_24), (void*)L_2);
		// protected virtual List<InputDeviceCharacteristics> DesiredInputCharacteristics { get; set; } = new List<InputDeviceCharacteristics>()
		// {
		//     InputDeviceCharacteristics.Controller,
		//     InputDeviceCharacteristics.HandTracking
		// };
		List_1_tEA57E67D76DE7CBA7F472F399385BD853B825EB7* L_3 = (List_1_tEA57E67D76DE7CBA7F472F399385BD853B825EB7*)il2cpp_codegen_object_new(List_1_tEA57E67D76DE7CBA7F472F399385BD853B825EB7_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		List_1__ctor_m220F44C9FEF5758AB2481BBB10DF60A9E1CECD55(L_3, List_1__ctor_m220F44C9FEF5758AB2481BBB10DF60A9E1CECD55_RuntimeMethod_var);
		List_1_tEA57E67D76DE7CBA7F472F399385BD853B825EB7* L_4 = L_3;
		NullCheck(L_4);
		List_1_Add_mC1C4AF7B5A8BED202F4A3E28D1C866A8AB3829AF_inline(L_4, ((int32_t)64), List_1_Add_mC1C4AF7B5A8BED202F4A3E28D1C866A8AB3829AF_RuntimeMethod_var);
		List_1_tEA57E67D76DE7CBA7F472F399385BD853B825EB7* L_5 = L_4;
		NullCheck(L_5);
		List_1_Add_mC1C4AF7B5A8BED202F4A3E28D1C866A8AB3829AF_inline(L_5, 8, List_1_Add_mC1C4AF7B5A8BED202F4A3E28D1C866A8AB3829AF_RuntimeMethod_var);
		__this->___U3CDesiredInputCharacteristicsU3Ek__BackingField_25 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CDesiredInputCharacteristicsU3Ek__BackingField_25), (void*)L_5);
		// BaseMixedRealityProfile profile = null) : base(inputSystem, name, priority, profile) { }
		RuntimeObject* L_6 = ___inputSystem0;
		String_t* L_7 = ___name1;
		uint32_t L_8 = ___priority2;
		BaseMixedRealityProfile_tB4FDEF58FFD17796C0DB7241630B71CDF38FA1D4* L_9 = ___profile3;
		il2cpp_codegen_runtime_class_init_inline(BaseInputDeviceManager_t1D055DB03D88FA053C00671FEA5040B944CC26BC_il2cpp_TypeInfo_var);
		BaseInputDeviceManager__ctor_m55B7F2B3368B9234F956C7D94273E8CA0DBC15EC(__this, L_6, L_7, L_8, L_9, NULL);
		// BaseMixedRealityProfile profile = null) : base(inputSystem, name, priority, profile) { }
		return;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.XRSDK.Input.XRSDKDeviceManager::CheckCapability(Microsoft.MixedReality.Toolkit.MixedRealityCapability)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRSDKDeviceManager_CheckCapability_mFEE81E57D09044CFAB6B4A8BD6E4983155EEC0EF (XRSDKDeviceManager_t9F5B097AEC5AA187C3083AE6F40B34E00E1BA583* __this, int32_t ___capability0, const RuntimeMethod* method) 
{
	{
		// return (capability == MixedRealityCapability.MotionController);
		int32_t L_0 = ___capability0;
		return (bool)((((int32_t)L_0) == ((int32_t)2))? 1 : 0);
	}
}
// System.Collections.Generic.List`1<UnityEngine.XR.InputDeviceCharacteristics> Microsoft.MixedReality.Toolkit.XRSDK.Input.XRSDKDeviceManager::get_DesiredInputCharacteristics()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tEA57E67D76DE7CBA7F472F399385BD853B825EB7* XRSDKDeviceManager_get_DesiredInputCharacteristics_mDC498E15F28A524F85D34E4EFB80E5485C5F5EFF (XRSDKDeviceManager_t9F5B097AEC5AA187C3083AE6F40B34E00E1BA583* __this, const RuntimeMethod* method) 
{
	{
		// protected virtual List<InputDeviceCharacteristics> DesiredInputCharacteristics { get; set; } = new List<InputDeviceCharacteristics>()
		List_1_tEA57E67D76DE7CBA7F472F399385BD853B825EB7* L_0 = __this->___U3CDesiredInputCharacteristicsU3Ek__BackingField_25;
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.Input.XRSDKDeviceManager::set_DesiredInputCharacteristics(System.Collections.Generic.List`1<UnityEngine.XR.InputDeviceCharacteristics>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRSDKDeviceManager_set_DesiredInputCharacteristics_m60E1600674E00824D066ED2B8C6E089273C12E2A (XRSDKDeviceManager_t9F5B097AEC5AA187C3083AE6F40B34E00E1BA583* __this, List_1_tEA57E67D76DE7CBA7F472F399385BD853B825EB7* ___value0, const RuntimeMethod* method) 
{
	{
		// protected virtual List<InputDeviceCharacteristics> DesiredInputCharacteristics { get; set; } = new List<InputDeviceCharacteristics>()
		List_1_tEA57E67D76DE7CBA7F472F399385BD853B825EB7* L_0 = ___value0;
		__this->___U3CDesiredInputCharacteristicsU3Ek__BackingField_25 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CDesiredInputCharacteristicsU3Ek__BackingField_25), (void*)L_0);
		return;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.XRSDK.Input.XRSDKDeviceManager::IsLoaderActive(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRSDKDeviceManager_IsLoaderActive_m7F6304A175996EF6BD621797993CDACF6C98481C (XRSDKDeviceManager_t9F5B097AEC5AA187C3083AE6F40B34E00E1BA583* __this, String_t* ___loaderName0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_GetValueOrDefault_m86E1210429A6EA0082CC7806DD638E8B4555F148_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// protected virtual bool IsLoaderActive(string loaderName) => LoaderHelpers.IsLoaderActive(loaderName) ?? false;
		String_t* L_0 = ___loaderName0;
		Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 L_1;
		L_1 = LoaderHelpers_IsLoaderActive_m0D7D7AB862B4AF044BB290C6623D837B36702138(L_0, NULL);
		V_0 = L_1;
		bool L_2;
		L_2 = Nullable_1_GetValueOrDefault_m86E1210429A6EA0082CC7806DD638E8B4555F148_inline((&V_0), Nullable_1_GetValueOrDefault_m86E1210429A6EA0082CC7806DD638E8B4555F148_RuntimeMethod_var);
		return L_2;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.Input.XRSDKDeviceManager::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRSDKDeviceManager_Update_m9C0DC13B08C374BAB3C9AC7736C266A763C6E6F9 (XRSDKDeviceManager_t9F5B097AEC5AA187C3083AE6F40B34E00E1BA583* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m7B899035F29D732606CA6BA2253BEBD41BECD3DC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mFC63500668995DCBE5E8A5D1FFAE271B6D7FF0C4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m5267F7AD322ED3F12B552EC1C62F059932803E2E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m90ADBD16F657CC00F3AF082943F46163E000E526_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m7D19F033982951230B318A08E829850451459AAE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m7F07A73616FDDCA31B342E8D987723D2CF2DCA9A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_AddRange_m1B2001B12A2C59D1AD98A08F63DEBAAC92584658_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mEECA639E710075828AEBC2083BBCF28184156831_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_m90BE1F9C540971223AE0CE4E333ACFC27CDA0275_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Contains_m1760B66FE5C90D9CEB94208DE54A4A0F999D5CF3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m099EE1B978423A69DAE032836B6FC9A39F7D1EE6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_mD3D13B8E78F02CDE054E2FAB1754A9B774430EF6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Remove_mD82B3FDD8ADF1CD3F4F6E5E3509D346EE7D03ACA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRSDKDeviceManager_t9F5B097AEC5AA187C3083AE6F40B34E00E1BA583_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRSubsystemHelpers_t8E4DEBF56BAC982E1CF1519D46753203AD7CC427_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	AutoScope_tFB983697E28885CB10FFDB92D7EFD0615AEF3139 V_0;
	memset((&V_0), 0, sizeof(V_0));
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD V_1;
	memset((&V_1), 0, sizeof(V_1));
	Enumerator_tCEF56BD591D4B69AB5839C3DA4792E9586319BB4 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Enumerator_t2A0DD7C3F41DE0D8FD672B874BDDB066261ECB01 V_3;
	memset((&V_3), 0, sizeof(V_3));
	InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD V_4;
	memset((&V_4), 0, sizeof(V_4));
	InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD V_5;
	memset((&V_5), 0, sizeof(V_5));
	GenericXRSDKController_tB5136D037E3BD7D743A519016EA2710F7ED980DE* V_6 = NULL;
	InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD V_7;
	memset((&V_7), 0, sizeof(V_7));
	{
		// using (UpdatePerfMarker.Auto())
		il2cpp_codegen_runtime_class_init_inline(XRSDKDeviceManager_t9F5B097AEC5AA187C3083AE6F40B34E00E1BA583_il2cpp_TypeInfo_var);
		ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD L_0 = ((XRSDKDeviceManager_t9F5B097AEC5AA187C3083AE6F40B34E00E1BA583_StaticFields*)il2cpp_codegen_static_fields_for(XRSDKDeviceManager_t9F5B097AEC5AA187C3083AE6F40B34E00E1BA583_il2cpp_TypeInfo_var))->___UpdatePerfMarker_26;
		V_1 = L_0;
		AutoScope_tFB983697E28885CB10FFDB92D7EFD0615AEF3139 L_1;
		L_1 = ProfilerMarker_Auto_m133FA724EB95D16187B37D2C8A501D7E989B1F8D_inline((&V_1), NULL);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_018c:
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
				goto IL_019a;
			}

IL_001b_1:
			{
				// base.Update();
				BaseService_Update_m07A22E1552ABDCD9AD86737D12D43DA27915370D(__this, NULL);
				// if (XRSubsystemHelpers.InputSubsystem == null || !XRSubsystemHelpers.InputSubsystem.running)
				il2cpp_codegen_runtime_class_init_inline(XRSubsystemHelpers_t8E4DEBF56BAC982E1CF1519D46753203AD7CC427_il2cpp_TypeInfo_var);
				XRInputSubsystem_tFECE6683FCAEBF05BAD05E5D612690095D8BAD34* L_3;
				L_3 = XRSubsystemHelpers_get_InputSubsystem_m0D37F2605CA0C34EC0F9A653C51721B6A503D342(NULL);
				if (!L_3)
				{
					goto IL_0034_1;
				}
			}
			{
				il2cpp_codegen_runtime_class_init_inline(XRSubsystemHelpers_t8E4DEBF56BAC982E1CF1519D46753203AD7CC427_il2cpp_TypeInfo_var);
				XRInputSubsystem_tFECE6683FCAEBF05BAD05E5D612690095D8BAD34* L_4;
				L_4 = XRSubsystemHelpers_get_InputSubsystem_m0D37F2605CA0C34EC0F9A653C51721B6A503D342(NULL);
				NullCheck(L_4);
				bool L_5;
				L_5 = IntegratedSubsystem_get_running_m18AA0D7AD1CB593DC9EE5F3DC79643717509D6E8(L_4, NULL);
				if (L_5)
				{
					goto IL_0039_1;
				}
			}

IL_0034_1:
			{
				// return;
				goto IL_019a;
			}

IL_0039_1:
			{
				// inputDevices.Clear();
				List_1_tB66D13E0427CA48C600AEA4DBA5B173C3734C6CE* L_6 = __this->___inputDevices_22;
				NullCheck(L_6);
				List_1_Clear_m90BE1F9C540971223AE0CE4E333ACFC27CDA0275_inline(L_6, List_1_Clear_m90BE1F9C540971223AE0CE4E333ACFC27CDA0275_RuntimeMethod_var);
				// foreach (InputDeviceCharacteristics inputDeviceCharacteristics in DesiredInputCharacteristics)
				List_1_tEA57E67D76DE7CBA7F472F399385BD853B825EB7* L_7;
				L_7 = VirtualFuncInvoker0< List_1_tEA57E67D76DE7CBA7F472F399385BD853B825EB7* >::Invoke(44 /* System.Collections.Generic.List`1<UnityEngine.XR.InputDeviceCharacteristics> Microsoft.MixedReality.Toolkit.XRSDK.Input.XRSDKDeviceManager::get_DesiredInputCharacteristics() */, __this);
				NullCheck(L_7);
				Enumerator_tCEF56BD591D4B69AB5839C3DA4792E9586319BB4 L_8;
				L_8 = List_1_GetEnumerator_mD3D13B8E78F02CDE054E2FAB1754A9B774430EF6(L_7, List_1_GetEnumerator_mD3D13B8E78F02CDE054E2FAB1754A9B774430EF6_RuntimeMethod_var);
				V_2 = L_8;
			}
			{
				auto __finallyBlock = il2cpp::utils::Finally([&]
				{

FINALLY_00bb_1:
					{// begin finally (depth: 2)
						Enumerator_Dispose_mFC63500668995DCBE5E8A5D1FFAE271B6D7FF0C4((&V_2), Enumerator_Dispose_mFC63500668995DCBE5E8A5D1FFAE271B6D7FF0C4_RuntimeMethod_var);
						return;
					}// end finally (depth: 2)
				});
				try
				{// begin try (depth: 2)
					{
						goto IL_00b0_2;
					}

IL_0052_2:
					{
						// foreach (InputDeviceCharacteristics inputDeviceCharacteristics in DesiredInputCharacteristics)
						uint32_t L_9;
						L_9 = Enumerator_get_Current_m7F07A73616FDDCA31B342E8D987723D2CF2DCA9A_inline((&V_2), Enumerator_get_Current_m7F07A73616FDDCA31B342E8D987723D2CF2DCA9A_RuntimeMethod_var);
						// InputDevices.GetDevicesWithCharacteristics(inputDeviceCharacteristics, inputDevicesSubset);
						List_1_tB66D13E0427CA48C600AEA4DBA5B173C3734C6CE* L_10 = __this->___inputDevicesSubset_23;
						InputDevices_GetDevicesWithCharacteristics_m2F1785592FF66FB69D72FFE1C1B821D4BD64094A(L_9, L_10, NULL);
						// foreach (InputDevice device in inputDevicesSubset)
						List_1_tB66D13E0427CA48C600AEA4DBA5B173C3734C6CE* L_11 = __this->___inputDevicesSubset_23;
						NullCheck(L_11);
						Enumerator_t2A0DD7C3F41DE0D8FD672B874BDDB066261ECB01 L_12;
						L_12 = List_1_GetEnumerator_m099EE1B978423A69DAE032836B6FC9A39F7D1EE6(L_11, List_1_GetEnumerator_m099EE1B978423A69DAE032836B6FC9A39F7D1EE6_RuntimeMethod_var);
						V_3 = L_12;
					}
					{
						auto __finallyBlock = il2cpp::utils::Finally([&]
						{

FINALLY_00a2_2:
							{// begin finally (depth: 3)
								Enumerator_Dispose_m7B899035F29D732606CA6BA2253BEBD41BECD3DC((&V_3), Enumerator_Dispose_m7B899035F29D732606CA6BA2253BEBD41BECD3DC_RuntimeMethod_var);
								return;
							}// end finally (depth: 3)
						});
						try
						{// begin try (depth: 3)
							{
								goto IL_0097_3;
							}

IL_0072_3:
							{
								// foreach (InputDevice device in inputDevicesSubset)
								InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD L_13;
								L_13 = Enumerator_get_Current_m7D19F033982951230B318A08E829850451459AAE_inline((&V_3), Enumerator_get_Current_m7D19F033982951230B318A08E829850451459AAE_RuntimeMethod_var);
								V_4 = L_13;
								// if (!inputDevices.Contains(device))
								List_1_tB66D13E0427CA48C600AEA4DBA5B173C3734C6CE* L_14 = __this->___inputDevices_22;
								InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD L_15 = V_4;
								NullCheck(L_14);
								bool L_16;
								L_16 = List_1_Contains_m1760B66FE5C90D9CEB94208DE54A4A0F999D5CF3(L_14, L_15, List_1_Contains_m1760B66FE5C90D9CEB94208DE54A4A0F999D5CF3_RuntimeMethod_var);
								if (L_16)
								{
									goto IL_0097_3;
								}
							}
							{
								// inputDevices.Add(device);
								List_1_tB66D13E0427CA48C600AEA4DBA5B173C3734C6CE* L_17 = __this->___inputDevices_22;
								InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD L_18 = V_4;
								NullCheck(L_17);
								List_1_Add_mEECA639E710075828AEBC2083BBCF28184156831_inline(L_17, L_18, List_1_Add_mEECA639E710075828AEBC2083BBCF28184156831_RuntimeMethod_var);
							}

IL_0097_3:
							{
								// foreach (InputDevice device in inputDevicesSubset)
								bool L_19;
								L_19 = Enumerator_MoveNext_m5267F7AD322ED3F12B552EC1C62F059932803E2E((&V_3), Enumerator_MoveNext_m5267F7AD322ED3F12B552EC1C62F059932803E2E_RuntimeMethod_var);
								if (L_19)
								{
									goto IL_0072_3;
								}
							}
							{
								goto IL_00b0_2;
							}
						}// end try (depth: 3)
						catch(Il2CppExceptionWrapper& e)
						{
							__finallyBlock.StoreException(e.ex);
						}
					}

IL_00b0_2:
					{
						// foreach (InputDeviceCharacteristics inputDeviceCharacteristics in DesiredInputCharacteristics)
						bool L_20;
						L_20 = Enumerator_MoveNext_m90ADBD16F657CC00F3AF082943F46163E000E526((&V_2), Enumerator_MoveNext_m90ADBD16F657CC00F3AF082943F46163E000E526_RuntimeMethod_var);
						if (L_20)
						{
							goto IL_0052_2;
						}
					}
					{
						goto IL_00c9_1;
					}
				}// end try (depth: 2)
				catch(Il2CppExceptionWrapper& e)
				{
					__finallyBlock.StoreException(e.ex);
				}
			}

IL_00c9_1:
			{
				// foreach (InputDevice device in inputDevices)
				List_1_tB66D13E0427CA48C600AEA4DBA5B173C3734C6CE* L_21 = __this->___inputDevices_22;
				NullCheck(L_21);
				Enumerator_t2A0DD7C3F41DE0D8FD672B874BDDB066261ECB01 L_22;
				L_22 = List_1_GetEnumerator_m099EE1B978423A69DAE032836B6FC9A39F7D1EE6(L_21, List_1_GetEnumerator_m099EE1B978423A69DAE032836B6FC9A39F7D1EE6_RuntimeMethod_var);
				V_3 = L_22;
			}
			{
				auto __finallyBlock = il2cpp::utils::Finally([&]
				{

FINALLY_0128_1:
					{// begin finally (depth: 2)
						Enumerator_Dispose_m7B899035F29D732606CA6BA2253BEBD41BECD3DC((&V_3), Enumerator_Dispose_m7B899035F29D732606CA6BA2253BEBD41BECD3DC_RuntimeMethod_var);
						return;
					}// end finally (depth: 2)
				});
				try
				{// begin try (depth: 2)
					{
						goto IL_011d_2;
					}

IL_00d7_2:
					{
						// foreach (InputDevice device in inputDevices)
						InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD L_23;
						L_23 = Enumerator_get_Current_m7D19F033982951230B318A08E829850451459AAE_inline((&V_3), Enumerator_get_Current_m7D19F033982951230B318A08E829850451459AAE_RuntimeMethod_var);
						V_5 = L_23;
						// if (device.isValid)
						bool L_24;
						L_24 = InputDevice_get_isValid_mA908CF8195CECA44FF457430AFF9198C3FEC0948((&V_5), NULL);
						if (!L_24)
						{
							goto IL_011d_2;
						}
					}
					{
						// GenericXRSDKController controller = GetOrAddController(device);
						InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD L_25 = V_5;
						GenericXRSDKController_tB5136D037E3BD7D743A519016EA2710F7ED980DE* L_26;
						L_26 = VirtualFuncInvoker1< GenericXRSDKController_tB5136D037E3BD7D743A519016EA2710F7ED980DE*, InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD >::Invoke(48 /* Microsoft.MixedReality.Toolkit.XRSDK.Input.GenericXRSDKController Microsoft.MixedReality.Toolkit.XRSDK.Input.XRSDKDeviceManager::GetOrAddController(UnityEngine.XR.InputDevice) */, __this, L_25);
						V_6 = L_26;
						// if (controller != null && lastInputDevices.Contains(device))
						GenericXRSDKController_tB5136D037E3BD7D743A519016EA2710F7ED980DE* L_27 = V_6;
						if (!L_27)
						{
							goto IL_011d_2;
						}
					}
					{
						List_1_tB66D13E0427CA48C600AEA4DBA5B173C3734C6CE* L_28 = __this->___lastInputDevices_24;
						InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD L_29 = V_5;
						NullCheck(L_28);
						bool L_30;
						L_30 = List_1_Contains_m1760B66FE5C90D9CEB94208DE54A4A0F999D5CF3(L_28, L_29, List_1_Contains_m1760B66FE5C90D9CEB94208DE54A4A0F999D5CF3_RuntimeMethod_var);
						if (!L_30)
						{
							goto IL_011d_2;
						}
					}
					{
						// lastInputDevices.Remove(device);
						List_1_tB66D13E0427CA48C600AEA4DBA5B173C3734C6CE* L_31 = __this->___lastInputDevices_24;
						InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD L_32 = V_5;
						NullCheck(L_31);
						bool L_33;
						L_33 = List_1_Remove_mD82B3FDD8ADF1CD3F4F6E5E3509D346EE7D03ACA(L_31, L_32, List_1_Remove_mD82B3FDD8ADF1CD3F4F6E5E3509D346EE7D03ACA_RuntimeMethod_var);
						// controller.UpdateController(device);
						GenericXRSDKController_tB5136D037E3BD7D743A519016EA2710F7ED980DE* L_34 = V_6;
						InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD L_35 = V_5;
						NullCheck(L_34);
						VirtualActionInvoker1< InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD >::Invoke(27 /* System.Void Microsoft.MixedReality.Toolkit.XRSDK.Input.GenericXRSDKController::UpdateController(UnityEngine.XR.InputDevice) */, L_34, L_35);
					}

IL_011d_2:
					{
						// foreach (InputDevice device in inputDevices)
						bool L_36;
						L_36 = Enumerator_MoveNext_m5267F7AD322ED3F12B552EC1C62F059932803E2E((&V_3), Enumerator_MoveNext_m5267F7AD322ED3F12B552EC1C62F059932803E2E_RuntimeMethod_var);
						if (L_36)
						{
							goto IL_00d7_2;
						}
					}
					{
						goto IL_0136_1;
					}
				}// end try (depth: 2)
				catch(Il2CppExceptionWrapper& e)
				{
					__finallyBlock.StoreException(e.ex);
				}
			}

IL_0136_1:
			{
				// foreach (InputDevice device in lastInputDevices)
				List_1_tB66D13E0427CA48C600AEA4DBA5B173C3734C6CE* L_37 = __this->___lastInputDevices_24;
				NullCheck(L_37);
				Enumerator_t2A0DD7C3F41DE0D8FD672B874BDDB066261ECB01 L_38;
				L_38 = List_1_GetEnumerator_m099EE1B978423A69DAE032836B6FC9A39F7D1EE6(L_37, List_1_GetEnumerator_m099EE1B978423A69DAE032836B6FC9A39F7D1EE6_RuntimeMethod_var);
				V_3 = L_38;
			}
			{
				auto __finallyBlock = il2cpp::utils::Finally([&]
				{

FINALLY_0160_1:
					{// begin finally (depth: 2)
						Enumerator_Dispose_m7B899035F29D732606CA6BA2253BEBD41BECD3DC((&V_3), Enumerator_Dispose_m7B899035F29D732606CA6BA2253BEBD41BECD3DC_RuntimeMethod_var);
						return;
					}// end finally (depth: 2)
				});
				try
				{// begin try (depth: 2)
					{
						goto IL_0155_2;
					}

IL_0144_2:
					{
						// foreach (InputDevice device in lastInputDevices)
						InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD L_39;
						L_39 = Enumerator_get_Current_m7D19F033982951230B318A08E829850451459AAE_inline((&V_3), Enumerator_get_Current_m7D19F033982951230B318A08E829850451459AAE_RuntimeMethod_var);
						V_7 = L_39;
						// RemoveController(device);
						InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD L_40 = V_7;
						VirtualActionInvoker1< InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD >::Invoke(49 /* System.Void Microsoft.MixedReality.Toolkit.XRSDK.Input.XRSDKDeviceManager::RemoveController(UnityEngine.XR.InputDevice) */, __this, L_40);
					}

IL_0155_2:
					{
						// foreach (InputDevice device in lastInputDevices)
						bool L_41;
						L_41 = Enumerator_MoveNext_m5267F7AD322ED3F12B552EC1C62F059932803E2E((&V_3), Enumerator_MoveNext_m5267F7AD322ED3F12B552EC1C62F059932803E2E_RuntimeMethod_var);
						if (L_41)
						{
							goto IL_0144_2;
						}
					}
					{
						goto IL_016e_1;
					}
				}// end try (depth: 2)
				catch(Il2CppExceptionWrapper& e)
				{
					__finallyBlock.StoreException(e.ex);
				}
			}

IL_016e_1:
			{
				// lastInputDevices.Clear();
				List_1_tB66D13E0427CA48C600AEA4DBA5B173C3734C6CE* L_42 = __this->___lastInputDevices_24;
				NullCheck(L_42);
				List_1_Clear_m90BE1F9C540971223AE0CE4E333ACFC27CDA0275_inline(L_42, List_1_Clear_m90BE1F9C540971223AE0CE4E333ACFC27CDA0275_RuntimeMethod_var);
				// lastInputDevices.AddRange(inputDevices);
				List_1_tB66D13E0427CA48C600AEA4DBA5B173C3734C6CE* L_43 = __this->___lastInputDevices_24;
				List_1_tB66D13E0427CA48C600AEA4DBA5B173C3734C6CE* L_44 = __this->___inputDevices_22;
				NullCheck(L_43);
				List_1_AddRange_m1B2001B12A2C59D1AD98A08F63DEBAAC92584658(L_43, L_44, List_1_AddRange_m1B2001B12A2C59D1AD98A08F63DEBAAC92584658_RuntimeMethod_var);
				// }
				goto IL_019a;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_019a:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.Input.XRSDKDeviceManager::Disable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRSDKDeviceManager_Disable_m62636F787ECA75DFE55BD50E5D2EAB4E08FA7C51 (XRSDKDeviceManager_t9F5B097AEC5AA187C3083AE6F40B34E00E1BA583* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CollectionsExtensions_ToReadOnlyCollection_TisKeyValuePair_2_tE710683728FDE8F91586EA8926B0AD74F6E3C4CC_m583E26C7EE9DB00B9DE33BE361E37F10E248170C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t64A8530613207286B2C5E16B7143F931384C8DDB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Key_m292805210F06C8F44A3560FD0FA62B12B20CD0D5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlyCollection_1_GetEnumerator_m90B897A245E57D6B59E625784579E9B49981D6E6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRSDKDeviceManager_t9F5B097AEC5AA187C3083AE6F40B34E00E1BA583_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	KeyValuePair_2_tE710683728FDE8F91586EA8926B0AD74F6E3C4CC V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// var controllersCopy = ActiveControllers.ToReadOnlyCollection();
		il2cpp_codegen_runtime_class_init_inline(XRSDKDeviceManager_t9F5B097AEC5AA187C3083AE6F40B34E00E1BA583_il2cpp_TypeInfo_var);
		Dictionary_2_t500395CB4236088AFBF004A0D9DD896F9DC12876* L_0 = ((XRSDKDeviceManager_t9F5B097AEC5AA187C3083AE6F40B34E00E1BA583_StaticFields*)il2cpp_codegen_static_fields_for(XRSDKDeviceManager_t9F5B097AEC5AA187C3083AE6F40B34E00E1BA583_il2cpp_TypeInfo_var))->___ActiveControllers_21;
		ReadOnlyCollection_1_tEB4BE5E673E69CD3F9C8D17F224E7C888E5BEF5B* L_1;
		L_1 = CollectionsExtensions_ToReadOnlyCollection_TisKeyValuePair_2_tE710683728FDE8F91586EA8926B0AD74F6E3C4CC_m583E26C7EE9DB00B9DE33BE361E37F10E248170C(L_0, CollectionsExtensions_ToReadOnlyCollection_TisKeyValuePair_2_tE710683728FDE8F91586EA8926B0AD74F6E3C4CC_m583E26C7EE9DB00B9DE33BE361E37F10E248170C_RuntimeMethod_var);
		// foreach (var controller in controllersCopy)
		NullCheck(L_1);
		RuntimeObject* L_2;
		L_2 = ReadOnlyCollection_1_GetEnumerator_m90B897A245E57D6B59E625784579E9B49981D6E6(L_1, ReadOnlyCollection_1_GetEnumerator_m90B897A245E57D6B59E625784579E9B49981D6E6_RuntimeMethod_var);
		V_0 = L_2;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0030:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_3 = V_0;
					if (!L_3)
					{
						goto IL_0039;
					}
				}
				{
					RuntimeObject* L_4 = V_0;
					NullCheck(L_4);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_4);
				}

IL_0039:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0026_1;
			}

IL_0012_1:
			{
				// foreach (var controller in controllersCopy)
				RuntimeObject* L_5 = V_0;
				NullCheck(L_5);
				KeyValuePair_2_tE710683728FDE8F91586EA8926B0AD74F6E3C4CC L_6;
				L_6 = InterfaceFuncInvoker0< KeyValuePair_2_tE710683728FDE8F91586EA8926B0AD74F6E3C4CC >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<UnityEngine.XR.InputDevice,Microsoft.MixedReality.Toolkit.XRSDK.Input.GenericXRSDKController>>::get_Current() */, IEnumerator_1_t64A8530613207286B2C5E16B7143F931384C8DDB_il2cpp_TypeInfo_var, L_5);
				V_1 = L_6;
				// RemoveController(controller.Key);
				InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD L_7;
				L_7 = KeyValuePair_2_get_Key_m292805210F06C8F44A3560FD0FA62B12B20CD0D5_inline((&V_1), KeyValuePair_2_get_Key_m292805210F06C8F44A3560FD0FA62B12B20CD0D5_RuntimeMethod_var);
				VirtualActionInvoker1< InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD >::Invoke(49 /* System.Void Microsoft.MixedReality.Toolkit.XRSDK.Input.XRSDKDeviceManager::RemoveController(UnityEngine.XR.InputDevice) */, __this, L_7);
			}

IL_0026_1:
			{
				// foreach (var controller in controllersCopy)
				RuntimeObject* L_8 = V_0;
				NullCheck(L_8);
				bool L_9;
				L_9 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_8);
				if (L_9)
				{
					goto IL_0012_1;
				}
			}
			{
				goto IL_003a;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_003a:
	{
		// base.Disable();
		BaseService_Disable_m75AA61136BE79E0C8EA4B058D1506882A56683C4(__this, NULL);
		// }
		return;
	}
}
// Microsoft.MixedReality.Toolkit.XRSDK.Input.GenericXRSDKController Microsoft.MixedReality.Toolkit.XRSDK.Input.XRSDKDeviceManager::GetOrAddController(UnityEngine.XR.InputDevice)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GenericXRSDKController_tB5136D037E3BD7D743A519016EA2710F7ED980DE* XRSDKDeviceManager_GetOrAddController_mDEC99430B4E2E3873F5A94475EAC519587667C7D (XRSDKDeviceManager_t9F5B097AEC5AA187C3083AE6F40B34E00E1BA583* __this, InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD ___inputDevice0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseDataProvider_1_get_Service_m886AE537D966101848DD8F8D348F366C71253B3B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m59F621E299B2B5A5E0B1C56AF791A0394BF6479E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_m49678D0E11E60CE005DD021DECFC686C20B0DA18_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m5CC2CE4AA8CC3E60E913BE28E235D43F6FE6E7CD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GenericXRSDKController_tB5136D037E3BD7D743A519016EA2710F7ED980DE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Handedness_t8F3D346D04DED9C8F19FDD0EAB3DFFF385E485FF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealityInputSource_t9926A91DEC380AA837347E82976F5A6A9F9226C2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealityInputSystem_t73D9E8D52E761DF1CC230411D0EFD51104FF68B2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealityPointer_t6B17FD29F171D88877AB2EF9C59FEBB65ED6E446_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_GetValueOrDefault_m8D130DB7F2A1E694736B449176F9C26DB456597B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1__ctor_m141FA88563AC0B5179132FB929EABD02C47FF703_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SupportedControllerType_t7034E474866C3A89A0C6AF6A80510AE6E1674FAB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TrackingState_tB08915AEC2FF4350F3AC932BE19B51F52B075313_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRSDKDeviceManager_t9F5B097AEC5AA187C3083AE6F40B34E00E1BA583_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral25AE702FFEA928066DA09FC11B4BC7B967DE10D4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8A0748277A228E387025D0FBFFFA94EF2E6E219B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC2C604A03D20BDF641FF4B72AEF3DC61C4CD432F);
		s_Il2CppMethodInitialized = true;
	}
	AutoScope_tFB983697E28885CB10FFDB92D7EFD0615AEF3139 V_0;
	memset((&V_0), 0, sizeof(V_0));
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD V_1;
	memset((&V_1), 0, sizeof(V_1));
	uint8_t V_2 = 0;
	int32_t V_3 = 0;
	Type_t* V_4 = NULL;
	int32_t V_5 = 0;
	IMixedRealityPointerU5BU5D_t122E67DFE2F5B082397D95C08F6AA94DE36F86A4* V_6 = NULL;
	RuntimeObject* V_7 = NULL;
	GenericXRSDKController_tB5136D037E3BD7D743A519016EA2710F7ED980DE* V_8 = NULL;
	GenericXRSDKController_tB5136D037E3BD7D743A519016EA2710F7ED980DE* V_9 = NULL;
	int32_t V_10 = 0;
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 V_11;
	memset((&V_11), 0, sizeof(V_11));
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 V_12;
	memset((&V_12), 0, sizeof(V_12));
	RuntimeObject* G_B12_0 = NULL;
	RuntimeObject* G_B11_0 = NULL;
	RuntimeObject* G_B13_0 = NULL;
	RuntimeObject* G_B20_0 = NULL;
	int32_t G_B20_1 = 0;
	RuntimeObject* G_B19_0 = NULL;
	int32_t G_B19_1 = 0;
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 G_B23_0;
	memset((&G_B23_0), 0, sizeof(G_B23_0));
	int32_t G_B23_1 = 0;
	IMixedRealityPointerU5BU5D_t122E67DFE2F5B082397D95C08F6AA94DE36F86A4* G_B22_0 = NULL;
	int32_t G_B22_1 = 0;
	IMixedRealityPointerU5BU5D_t122E67DFE2F5B082397D95C08F6AA94DE36F86A4* G_B21_0 = NULL;
	int32_t G_B21_1 = 0;
	RuntimeObject* G_B26_0 = NULL;
	RuntimeObject* G_B25_0 = NULL;
	{
		// using (GetOrAddControllerPerfMarker.Auto())
		il2cpp_codegen_runtime_class_init_inline(XRSDKDeviceManager_t9F5B097AEC5AA187C3083AE6F40B34E00E1BA583_il2cpp_TypeInfo_var);
		ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD L_0 = ((XRSDKDeviceManager_t9F5B097AEC5AA187C3083AE6F40B34E00E1BA583_StaticFields*)il2cpp_codegen_static_fields_for(XRSDKDeviceManager_t9F5B097AEC5AA187C3083AE6F40B34E00E1BA583_il2cpp_TypeInfo_var))->___GetOrAddControllerPerfMarker_27;
		V_1 = L_0;
		AutoScope_tFB983697E28885CB10FFDB92D7EFD0615AEF3139 L_1;
		L_1 = ProfilerMarker_Auto_m133FA724EB95D16187B37D2C8A501D7E989B1F8D_inline((&V_1), NULL);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_01b4:
			{// begin finally (depth: 1)
				AutoScope_Dispose_mED763F3F51261EF8FB79DB32CD06E0A3F6C40481_inline((&V_0), NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				// if (ActiveControllers.ContainsKey(inputDevice))
				il2cpp_codegen_runtime_class_init_inline(XRSDKDeviceManager_t9F5B097AEC5AA187C3083AE6F40B34E00E1BA583_il2cpp_TypeInfo_var);
				Dictionary_2_t500395CB4236088AFBF004A0D9DD896F9DC12876* L_2 = ((XRSDKDeviceManager_t9F5B097AEC5AA187C3083AE6F40B34E00E1BA583_StaticFields*)il2cpp_codegen_static_fields_for(XRSDKDeviceManager_t9F5B097AEC5AA187C3083AE6F40B34E00E1BA583_il2cpp_TypeInfo_var))->___ActiveControllers_21;
				InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD L_3 = ___inputDevice0;
				NullCheck(L_2);
				bool L_4;
				L_4 = Dictionary_2_ContainsKey_m49678D0E11E60CE005DD021DECFC686C20B0DA18(L_2, L_3, Dictionary_2_ContainsKey_m49678D0E11E60CE005DD021DECFC686C20B0DA18_RuntimeMethod_var);
				if (!L_4)
				{
					goto IL_002d_1;
				}
			}
			{
				// var controller = ActiveControllers[inputDevice];
				il2cpp_codegen_runtime_class_init_inline(XRSDKDeviceManager_t9F5B097AEC5AA187C3083AE6F40B34E00E1BA583_il2cpp_TypeInfo_var);
				Dictionary_2_t500395CB4236088AFBF004A0D9DD896F9DC12876* L_5 = ((XRSDKDeviceManager_t9F5B097AEC5AA187C3083AE6F40B34E00E1BA583_StaticFields*)il2cpp_codegen_static_fields_for(XRSDKDeviceManager_t9F5B097AEC5AA187C3083AE6F40B34E00E1BA583_il2cpp_TypeInfo_var))->___ActiveControllers_21;
				InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD L_6 = ___inputDevice0;
				NullCheck(L_5);
				GenericXRSDKController_tB5136D037E3BD7D743A519016EA2710F7ED980DE* L_7;
				L_7 = Dictionary_2_get_Item_m5CC2CE4AA8CC3E60E913BE28E235D43F6FE6E7CD(L_5, L_6, Dictionary_2_get_Item_m5CC2CE4AA8CC3E60E913BE28E235D43F6FE6E7CD_RuntimeMethod_var);
				// return controller;
				V_9 = L_7;
				goto IL_01c2;
			}

IL_002d_1:
			{
				// if (inputDevice.characteristics.IsMaskSet(InputDeviceCharacteristics.Left))
				uint32_t L_8;
				L_8 = InputDevice_get_characteristics_mEEDC9AB2254C155C47B48848FECF347A87925ADB((&___inputDevice0), NULL);
				bool L_9;
				L_9 = FlagsExtensions_IsMaskSet_mBBB9BEF18A073269AF4EF9EEFF109D11DAB2ED3A(L_8, ((int32_t)256), NULL);
				if (!L_9)
				{
					goto IL_0044_1;
				}
			}
			{
				// controllingHand = Handedness.Left;
				V_2 = 1;
				goto IL_005d_1;
			}

IL_0044_1:
			{
				// else if (inputDevice.characteristics.IsMaskSet(InputDeviceCharacteristics.Right))
				uint32_t L_10;
				L_10 = InputDevice_get_characteristics_mEEDC9AB2254C155C47B48848FECF347A87925ADB((&___inputDevice0), NULL);
				bool L_11;
				L_11 = FlagsExtensions_IsMaskSet_mBBB9BEF18A073269AF4EF9EEFF109D11DAB2ED3A(L_10, ((int32_t)512), NULL);
				if (!L_11)
				{
					goto IL_005b_1;
				}
			}
			{
				// controllingHand = Handedness.Right;
				V_2 = 2;
				goto IL_005d_1;
			}

IL_005b_1:
			{
				// controllingHand = Handedness.None;
				V_2 = 0;
			}

IL_005d_1:
			{
				// SupportedControllerType currentControllerType = GetCurrentControllerType(inputDevice);
				InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD L_12 = ___inputDevice0;
				int32_t L_13;
				L_13 = VirtualFuncInvoker1< int32_t, InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD >::Invoke(52 /* Microsoft.MixedReality.Toolkit.Input.SupportedControllerType Microsoft.MixedReality.Toolkit.XRSDK.Input.XRSDKDeviceManager::GetCurrentControllerType(UnityEngine.XR.InputDevice) */, __this, L_12);
				V_3 = L_13;
				// Type controllerType = GetControllerType(currentControllerType);
				int32_t L_14 = V_3;
				Type_t* L_15;
				L_15 = VirtualFuncInvoker1< Type_t*, int32_t >::Invoke(50 /* System.Type Microsoft.MixedReality.Toolkit.XRSDK.Input.XRSDKDeviceManager::GetControllerType(Microsoft.MixedReality.Toolkit.Input.SupportedControllerType) */, __this, L_14);
				V_4 = L_15;
				// if (controllerType == null)
				Type_t* L_16 = V_4;
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				bool L_17;
				L_17 = Type_op_Equality_mE6EDDDC900C50B222CF32BCD2AD027595F2D74B7(L_16, (Type_t*)NULL, NULL);
				if (!L_17)
				{
					goto IL_0080_1;
				}
			}
			{
				// return null;
				V_9 = (GenericXRSDKController_tB5136D037E3BD7D743A519016EA2710F7ED980DE*)NULL;
				goto IL_01c2;
			}

IL_0080_1:
			{
				// InputSourceType inputSourceType = GetInputSourceType(currentControllerType);
				int32_t L_18 = V_3;
				int32_t L_19;
				L_19 = VirtualFuncInvoker1< int32_t, int32_t >::Invoke(51 /* Microsoft.MixedReality.Toolkit.Input.InputSourceType Microsoft.MixedReality.Toolkit.XRSDK.Input.XRSDKDeviceManager::GetInputSourceType(Microsoft.MixedReality.Toolkit.Input.SupportedControllerType) */, __this, L_18);
				V_5 = L_19;
				// IMixedRealityPointer[] pointers = RequestPointers(currentControllerType, controllingHand);
				int32_t L_20 = V_3;
				uint8_t L_21 = V_2;
				IMixedRealityPointerU5BU5D_t122E67DFE2F5B082397D95C08F6AA94DE36F86A4* L_22;
				L_22 = VirtualFuncInvoker2< IMixedRealityPointerU5BU5D_t122E67DFE2F5B082397D95C08F6AA94DE36F86A4*, int32_t, uint8_t >::Invoke(40 /* Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointer[] Microsoft.MixedReality.Toolkit.Input.BaseInputDeviceManager::RequestPointers(Microsoft.MixedReality.Toolkit.Input.SupportedControllerType,Microsoft.MixedReality.Toolkit.Utilities.Handedness) */, __this, L_20, L_21);
				V_6 = L_22;
				// IMixedRealityInputSource inputSource = Service?.RequestNewGenericInputSource($"{currentControllerType} Controller {controllingHand}", pointers, inputSourceType);
				RuntimeObject* L_23;
				L_23 = BaseDataProvider_1_get_Service_m886AE537D966101848DD8F8D348F366C71253B3B_inline(__this, BaseDataProvider_1_get_Service_m886AE537D966101848DD8F8D348F366C71253B3B_RuntimeMethod_var);
				RuntimeObject* L_24 = L_23;
				G_B11_0 = L_24;
				if (L_24)
				{
					G_B12_0 = L_24;
					goto IL_00a0_1;
				}
			}
			{
				G_B13_0 = ((RuntimeObject*)(NULL));
				goto IL_00bf_1;
			}

IL_00a0_1:
			{
				int32_t L_25 = V_3;
				int32_t L_26 = L_25;
				RuntimeObject* L_27 = Box(SupportedControllerType_t7034E474866C3A89A0C6AF6A80510AE6E1674FAB_il2cpp_TypeInfo_var, &L_26);
				uint8_t L_28 = V_2;
				uint8_t L_29 = L_28;
				RuntimeObject* L_30 = Box(Handedness_t8F3D346D04DED9C8F19FDD0EAB3DFFF385E485FF_il2cpp_TypeInfo_var, &L_29);
				String_t* L_31;
				L_31 = String_Format_m9499958F4B0BB6089C75760AB647AB3CA4D55806(_stringLiteral8A0748277A228E387025D0FBFFFA94EF2E6E219B, L_27, L_30, NULL);
				IMixedRealityPointerU5BU5D_t122E67DFE2F5B082397D95C08F6AA94DE36F86A4* L_32 = V_6;
				int32_t L_33 = V_5;
				NullCheck(G_B12_0);
				RuntimeObject* L_34;
				L_34 = InterfaceFuncInvoker3< RuntimeObject*, String_t*, IMixedRealityPointerU5BU5D_t122E67DFE2F5B082397D95C08F6AA94DE36F86A4*, int32_t >::Invoke(22 /* Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem::RequestNewGenericInputSource(System.String,Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointer[],Microsoft.MixedReality.Toolkit.Input.InputSourceType) */, IMixedRealityInputSystem_t73D9E8D52E761DF1CC230411D0EFD51104FF68B2_il2cpp_TypeInfo_var, G_B12_0, L_31, L_32, L_33);
				G_B13_0 = L_34;
			}

IL_00bf_1:
			{
				V_7 = G_B13_0;
				// GenericXRSDKController detectedController = Activator.CreateInstance(controllerType, TrackingState.NotTracked, controllingHand, inputSource, null) as GenericXRSDKController;
				Type_t* L_35 = V_4;
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_36 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)4);
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_37 = L_36;
				int32_t L_38 = 1;
				RuntimeObject* L_39 = Box(TrackingState_tB08915AEC2FF4350F3AC932BE19B51F52B075313_il2cpp_TypeInfo_var, &L_38);
				NullCheck(L_37);
				ArrayElementTypeCheck (L_37, L_39);
				(L_37)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_39);
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_40 = L_37;
				uint8_t L_41 = V_2;
				uint8_t L_42 = L_41;
				RuntimeObject* L_43 = Box(Handedness_t8F3D346D04DED9C8F19FDD0EAB3DFFF385E485FF_il2cpp_TypeInfo_var, &L_42);
				NullCheck(L_40);
				ArrayElementTypeCheck (L_40, L_43);
				(L_40)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_43);
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_44 = L_40;
				RuntimeObject* L_45 = V_7;
				NullCheck(L_44);
				ArrayElementTypeCheck (L_44, L_45);
				(L_44)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_45);
				RuntimeObject* L_46;
				L_46 = Activator_CreateInstance_m978D6F745618B691D632E5D6E4AB8840541FC858(L_35, L_44, NULL);
				V_8 = ((GenericXRSDKController_tB5136D037E3BD7D743A519016EA2710F7ED980DE*)IsInstClass((RuntimeObject*)L_46, GenericXRSDKController_tB5136D037E3BD7D743A519016EA2710F7ED980DE_il2cpp_TypeInfo_var));
				// if (detectedController == null || !detectedController.Enabled)
				GenericXRSDKController_tB5136D037E3BD7D743A519016EA2710F7ED980DE* L_47 = V_8;
				if (!L_47)
				{
					goto IL_00f9_1;
				}
			}
			{
				GenericXRSDKController_tB5136D037E3BD7D743A519016EA2710F7ED980DE* L_48 = V_8;
				NullCheck(L_48);
				bool L_49;
				L_49 = BaseController_get_Enabled_m2C7625D1C254DBCBE44B4493CE862C4BDADCAE4B_inline(L_48, NULL);
				if (L_49)
				{
					goto IL_011c_1;
				}
			}

IL_00f9_1:
			{
				// Debug.LogError($"Failed to create {controllerType.Name} controller");
				Type_t* L_50 = V_4;
				NullCheck(L_50);
				String_t* L_51;
				L_51 = VirtualFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_50);
				String_t* L_52;
				L_52 = String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0(_stringLiteralC2C604A03D20BDF641FF4B72AEF3DC61C4CD432F, L_51, _stringLiteral25AE702FFEA928066DA09FC11B4BC7B967DE10D4, NULL);
				il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
				Debug_LogError_m059825802BB6AF7EA9693FEBEEB0D85F59A3E38E(L_52, NULL);
				// return null;
				V_9 = (GenericXRSDKController_tB5136D037E3BD7D743A519016EA2710F7ED980DE*)NULL;
				goto IL_01c2;
			}

IL_011c_1:
			{
				// for (int i = 0; i < detectedController.InputSource?.Pointers?.Length; i++)
				V_10 = 0;
				goto IL_013d_1;
			}

IL_0121_1:
			{
				// detectedController.InputSource.Pointers[i].Controller = detectedController;
				GenericXRSDKController_tB5136D037E3BD7D743A519016EA2710F7ED980DE* L_53 = V_8;
				NullCheck(L_53);
				RuntimeObject* L_54;
				L_54 = BaseController_get_InputSource_m8FE11DBDF7B41338ACF8AFF3A0C8FAD83E5D2870_inline(L_53, NULL);
				NullCheck(L_54);
				IMixedRealityPointerU5BU5D_t122E67DFE2F5B082397D95C08F6AA94DE36F86A4* L_55;
				L_55 = InterfaceFuncInvoker0< IMixedRealityPointerU5BU5D_t122E67DFE2F5B082397D95C08F6AA94DE36F86A4* >::Invoke(0 /* Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointer[] Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource::get_Pointers() */, IMixedRealityInputSource_t9926A91DEC380AA837347E82976F5A6A9F9226C2_il2cpp_TypeInfo_var, L_54);
				int32_t L_56 = V_10;
				NullCheck(L_55);
				int32_t L_57 = L_56;
				RuntimeObject* L_58 = (L_55)->GetAt(static_cast<il2cpp_array_size_t>(L_57));
				GenericXRSDKController_tB5136D037E3BD7D743A519016EA2710F7ED980DE* L_59 = V_8;
				NullCheck(L_58);
				InterfaceActionInvoker1< RuntimeObject* >::Invoke(1 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointer::set_Controller(Microsoft.MixedReality.Toolkit.Input.IMixedRealityController) */, IMixedRealityPointer_t6B17FD29F171D88877AB2EF9C59FEBB65ED6E446_il2cpp_TypeInfo_var, L_58, L_59);
				// for (int i = 0; i < detectedController.InputSource?.Pointers?.Length; i++)
				int32_t L_60 = V_10;
				V_10 = ((int32_t)il2cpp_codegen_add(L_60, 1));
			}

IL_013d_1:
			{
				// for (int i = 0; i < detectedController.InputSource?.Pointers?.Length; i++)
				int32_t L_61 = V_10;
				GenericXRSDKController_tB5136D037E3BD7D743A519016EA2710F7ED980DE* L_62 = V_8;
				NullCheck(L_62);
				RuntimeObject* L_63;
				L_63 = BaseController_get_InputSource_m8FE11DBDF7B41338ACF8AFF3A0C8FAD83E5D2870_inline(L_62, NULL);
				RuntimeObject* L_64 = L_63;
				G_B19_0 = L_64;
				G_B19_1 = L_61;
				if (L_64)
				{
					G_B20_0 = L_64;
					G_B20_1 = L_61;
					goto IL_0156_1;
				}
			}
			{
				il2cpp_codegen_initobj((&V_12), sizeof(Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28));
				Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 L_65 = V_12;
				G_B23_0 = L_65;
				G_B23_1 = G_B19_1;
				goto IL_0172_1;
			}

IL_0156_1:
			{
				NullCheck(G_B20_0);
				IMixedRealityPointerU5BU5D_t122E67DFE2F5B082397D95C08F6AA94DE36F86A4* L_66;
				L_66 = InterfaceFuncInvoker0< IMixedRealityPointerU5BU5D_t122E67DFE2F5B082397D95C08F6AA94DE36F86A4* >::Invoke(0 /* Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointer[] Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource::get_Pointers() */, IMixedRealityInputSource_t9926A91DEC380AA837347E82976F5A6A9F9226C2_il2cpp_TypeInfo_var, G_B20_0);
				IMixedRealityPointerU5BU5D_t122E67DFE2F5B082397D95C08F6AA94DE36F86A4* L_67 = L_66;
				G_B21_0 = L_67;
				G_B21_1 = G_B20_1;
				if (L_67)
				{
					G_B22_0 = L_67;
					G_B22_1 = G_B20_1;
					goto IL_016b_1;
				}
			}
			{
				il2cpp_codegen_initobj((&V_12), sizeof(Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28));
				Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 L_68 = V_12;
				G_B23_0 = L_68;
				G_B23_1 = G_B21_1;
				goto IL_0172_1;
			}

IL_016b_1:
			{
				NullCheck(G_B22_0);
				Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 L_69;
				memset((&L_69), 0, sizeof(L_69));
				Nullable_1__ctor_m141FA88563AC0B5179132FB929EABD02C47FF703((&L_69), ((int32_t)(((RuntimeArray*)G_B22_0)->max_length)), /*hidden argument*/Nullable_1__ctor_m141FA88563AC0B5179132FB929EABD02C47FF703_RuntimeMethod_var);
				G_B23_0 = L_69;
				G_B23_1 = G_B22_1;
			}

IL_0172_1:
			{
				V_11 = G_B23_0;
				int32_t L_70;
				L_70 = Nullable_1_GetValueOrDefault_m8D130DB7F2A1E694736B449176F9C26DB456597B_inline((&V_11), Nullable_1_GetValueOrDefault_m8D130DB7F2A1E694736B449176F9C26DB456597B_RuntimeMethod_var);
				bool L_71;
				L_71 = Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_inline((&V_11), Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_RuntimeMethod_var);
				if (((int32_t)(((((int32_t)G_B23_1) < ((int32_t)L_70))? 1 : 0)&(int32_t)L_71)))
				{
					goto IL_0121_1;
				}
			}
			{
				// ActiveControllers.Add(inputDevice, detectedController);
				il2cpp_codegen_runtime_class_init_inline(XRSDKDeviceManager_t9F5B097AEC5AA187C3083AE6F40B34E00E1BA583_il2cpp_TypeInfo_var);
				Dictionary_2_t500395CB4236088AFBF004A0D9DD896F9DC12876* L_72 = ((XRSDKDeviceManager_t9F5B097AEC5AA187C3083AE6F40B34E00E1BA583_StaticFields*)il2cpp_codegen_static_fields_for(XRSDKDeviceManager_t9F5B097AEC5AA187C3083AE6F40B34E00E1BA583_il2cpp_TypeInfo_var))->___ActiveControllers_21;
				InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD L_73 = ___inputDevice0;
				GenericXRSDKController_tB5136D037E3BD7D743A519016EA2710F7ED980DE* L_74 = V_8;
				NullCheck(L_72);
				Dictionary_2_Add_m59F621E299B2B5A5E0B1C56AF791A0394BF6479E(L_72, L_73, L_74, Dictionary_2_Add_m59F621E299B2B5A5E0B1C56AF791A0394BF6479E_RuntimeMethod_var);
				// Service?.RaiseSourceDetected(detectedController.InputSource, detectedController);
				RuntimeObject* L_75;
				L_75 = BaseDataProvider_1_get_Service_m886AE537D966101848DD8F8D348F366C71253B3B_inline(__this, BaseDataProvider_1_get_Service_m886AE537D966101848DD8F8D348F366C71253B3B_RuntimeMethod_var);
				RuntimeObject* L_76 = L_75;
				G_B25_0 = L_76;
				if (L_76)
				{
					G_B26_0 = L_76;
					goto IL_01a0_1;
				}
			}
			{
				goto IL_01ae_1;
			}

IL_01a0_1:
			{
				GenericXRSDKController_tB5136D037E3BD7D743A519016EA2710F7ED980DE* L_77 = V_8;
				NullCheck(L_77);
				RuntimeObject* L_78;
				L_78 = BaseController_get_InputSource_m8FE11DBDF7B41338ACF8AFF3A0C8FAD83E5D2870_inline(L_77, NULL);
				GenericXRSDKController_tB5136D037E3BD7D743A519016EA2710F7ED980DE* L_79 = V_8;
				NullCheck(G_B26_0);
				InterfaceActionInvoker2< RuntimeObject*, RuntimeObject* >::Invoke(24 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem::RaiseSourceDetected(Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource,Microsoft.MixedReality.Toolkit.Input.IMixedRealityController) */, IMixedRealityInputSystem_t73D9E8D52E761DF1CC230411D0EFD51104FF68B2_il2cpp_TypeInfo_var, G_B26_0, L_78, L_79);
			}

IL_01ae_1:
			{
				// return detectedController;
				GenericXRSDKController_tB5136D037E3BD7D743A519016EA2710F7ED980DE* L_80 = V_8;
				V_9 = L_80;
				goto IL_01c2;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_01c2:
	{
		// }
		GenericXRSDKController_tB5136D037E3BD7D743A519016EA2710F7ED980DE* L_81 = V_9;
		return L_81;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.Input.XRSDKDeviceManager::RemoveController(UnityEngine.XR.InputDevice)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRSDKDeviceManager_RemoveController_m453AC0046F3CB13E1BE83734FD811E8D3CF7F5D4 (XRSDKDeviceManager_t9F5B097AEC5AA187C3083AE6F40B34E00E1BA583* __this, InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD ___inputDevice0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Remove_m3FE21AD019B8AD4E0049631DC383A26CD5F61953_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_m25D4D080ED23AA0277B14AEDB82A869D0BD4126C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRSDKDeviceManager_t9F5B097AEC5AA187C3083AE6F40B34E00E1BA583_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	AutoScope_tFB983697E28885CB10FFDB92D7EFD0615AEF3139 V_0;
	memset((&V_0), 0, sizeof(V_0));
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD V_1;
	memset((&V_1), 0, sizeof(V_1));
	GenericXRSDKController_tB5136D037E3BD7D743A519016EA2710F7ED980DE* V_2 = NULL;
	{
		// using (RemoveControllerPerfMarker.Auto())
		il2cpp_codegen_runtime_class_init_inline(XRSDKDeviceManager_t9F5B097AEC5AA187C3083AE6F40B34E00E1BA583_il2cpp_TypeInfo_var);
		ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD L_0 = ((XRSDKDeviceManager_t9F5B097AEC5AA187C3083AE6F40B34E00E1BA583_StaticFields*)il2cpp_codegen_static_fields_for(XRSDKDeviceManager_t9F5B097AEC5AA187C3083AE6F40B34E00E1BA583_il2cpp_TypeInfo_var))->___RemoveControllerPerfMarker_28;
		V_1 = L_0;
		AutoScope_tFB983697E28885CB10FFDB92D7EFD0615AEF3139 L_1;
		L_1 = ProfilerMarker_Auto_m133FA724EB95D16187B37D2C8A501D7E989B1F8D_inline((&V_1), NULL);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0035:
			{// begin finally (depth: 1)
				AutoScope_Dispose_mED763F3F51261EF8FB79DB32CD06E0A3F6C40481_inline((&V_0), NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				// if (ActiveControllers.TryGetValue(inputDevice, out GenericXRSDKController controller))
				il2cpp_codegen_runtime_class_init_inline(XRSDKDeviceManager_t9F5B097AEC5AA187C3083AE6F40B34E00E1BA583_il2cpp_TypeInfo_var);
				Dictionary_2_t500395CB4236088AFBF004A0D9DD896F9DC12876* L_2 = ((XRSDKDeviceManager_t9F5B097AEC5AA187C3083AE6F40B34E00E1BA583_StaticFields*)il2cpp_codegen_static_fields_for(XRSDKDeviceManager_t9F5B097AEC5AA187C3083AE6F40B34E00E1BA583_il2cpp_TypeInfo_var))->___ActiveControllers_21;
				InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD L_3 = ___inputDevice0;
				NullCheck(L_2);
				bool L_4;
				L_4 = Dictionary_2_TryGetValue_m25D4D080ED23AA0277B14AEDB82A869D0BD4126C(L_2, L_3, (&V_2), Dictionary_2_TryGetValue_m25D4D080ED23AA0277B14AEDB82A869D0BD4126C_RuntimeMethod_var);
				if (!L_4)
				{
					goto IL_0033_1;
				}
			}
			{
				// if (controller != null)
				GenericXRSDKController_tB5136D037E3BD7D743A519016EA2710F7ED980DE* L_5 = V_2;
				if (!L_5)
				{
					goto IL_0027_1;
				}
			}
			{
				// RemoveControllerFromScene(controller);
				GenericXRSDKController_tB5136D037E3BD7D743A519016EA2710F7ED980DE* L_6 = V_2;
				XRSDKDeviceManager_RemoveControllerFromScene_m3AAA045ED7378873251EAA7E90741AA42C6A863D(__this, L_6, NULL);
			}

IL_0027_1:
			{
				// ActiveControllers.Remove(inputDevice);
				il2cpp_codegen_runtime_class_init_inline(XRSDKDeviceManager_t9F5B097AEC5AA187C3083AE6F40B34E00E1BA583_il2cpp_TypeInfo_var);
				Dictionary_2_t500395CB4236088AFBF004A0D9DD896F9DC12876* L_7 = ((XRSDKDeviceManager_t9F5B097AEC5AA187C3083AE6F40B34E00E1BA583_StaticFields*)il2cpp_codegen_static_fields_for(XRSDKDeviceManager_t9F5B097AEC5AA187C3083AE6F40B34E00E1BA583_il2cpp_TypeInfo_var))->___ActiveControllers_21;
				InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD L_8 = ___inputDevice0;
				NullCheck(L_7);
				bool L_9;
				L_9 = Dictionary_2_Remove_m3FE21AD019B8AD4E0049631DC383A26CD5F61953(L_7, L_8, Dictionary_2_Remove_m3FE21AD019B8AD4E0049631DC383A26CD5F61953_RuntimeMethod_var);
			}

IL_0033_1:
			{
				// }
				goto IL_0043;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0043:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.Input.XRSDKDeviceManager::RemoveControllerFromScene(Microsoft.MixedReality.Toolkit.XRSDK.Input.GenericXRSDKController)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRSDKDeviceManager_RemoveControllerFromScene_m3AAA045ED7378873251EAA7E90741AA42C6A863D (XRSDKDeviceManager_t9F5B097AEC5AA187C3083AE6F40B34E00E1BA583* __this, GenericXRSDKController_tB5136D037E3BD7D743A519016EA2710F7ED980DE* ___controller0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseDataProvider_1_get_Service_m886AE537D966101848DD8F8D348F366C71253B3B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealityControllerVisualizer_t7B6B8F308ED8917976841E02F1525D6B7E478F7B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealityInputSystem_t73D9E8D52E761DF1CC230411D0EFD51104FF68B2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityObjectExtensions_IsNull_TisIMixedRealityControllerVisualizer_t7B6B8F308ED8917976841E02F1525D6B7E478F7B_m1EF432E61E37A9A6C2AE45782C131AD713BE5F4A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	RuntimeObject* G_B2_0 = NULL;
	RuntimeObject* G_B1_0 = NULL;
	{
		// Service?.RaiseSourceLost(controller.InputSource, controller);
		RuntimeObject* L_0;
		L_0 = BaseDataProvider_1_get_Service_m886AE537D966101848DD8F8D348F366C71253B3B_inline(__this, BaseDataProvider_1_get_Service_m886AE537D966101848DD8F8D348F366C71253B3B_RuntimeMethod_var);
		RuntimeObject* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000c;
		}
	}
	{
		goto IL_0018;
	}

IL_000c:
	{
		GenericXRSDKController_tB5136D037E3BD7D743A519016EA2710F7ED980DE* L_2 = ___controller0;
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = BaseController_get_InputSource_m8FE11DBDF7B41338ACF8AFF3A0C8FAD83E5D2870_inline(L_2, NULL);
		GenericXRSDKController_tB5136D037E3BD7D743A519016EA2710F7ED980DE* L_4 = ___controller0;
		NullCheck(G_B2_0);
		InterfaceActionInvoker2< RuntimeObject*, RuntimeObject* >::Invoke(25 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem::RaiseSourceLost(Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource,Microsoft.MixedReality.Toolkit.Input.IMixedRealityController) */, IMixedRealityInputSystem_t73D9E8D52E761DF1CC230411D0EFD51104FF68B2_il2cpp_TypeInfo_var, G_B2_0, L_3, L_4);
	}

IL_0018:
	{
		// RecyclePointers(controller.InputSource);
		GenericXRSDKController_tB5136D037E3BD7D743A519016EA2710F7ED980DE* L_5 = ___controller0;
		NullCheck(L_5);
		RuntimeObject* L_6;
		L_6 = BaseController_get_InputSource_m8FE11DBDF7B41338ACF8AFF3A0C8FAD83E5D2870_inline(L_5, NULL);
		VirtualActionInvoker1< RuntimeObject* >::Invoke(41 /* System.Void Microsoft.MixedReality.Toolkit.Input.BaseInputDeviceManager::RecyclePointers(Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource) */, __this, L_6);
		// var visualizer = controller.Visualizer;
		GenericXRSDKController_tB5136D037E3BD7D743A519016EA2710F7ED980DE* L_7 = ___controller0;
		NullCheck(L_7);
		RuntimeObject* L_8;
		L_8 = BaseController_get_Visualizer_m59C3E1F9279CC6E60482564095AAB8B4E87131E2_inline(L_7, NULL);
		V_0 = L_8;
		// if (!visualizer.IsNull() &&
		//     visualizer.GameObjectProxy != null)
		RuntimeObject* L_9 = V_0;
		bool L_10;
		L_10 = UnityObjectExtensions_IsNull_TisIMixedRealityControllerVisualizer_t7B6B8F308ED8917976841E02F1525D6B7E478F7B_m1EF432E61E37A9A6C2AE45782C131AD713BE5F4A(L_9, UnityObjectExtensions_IsNull_TisIMixedRealityControllerVisualizer_t7B6B8F308ED8917976841E02F1525D6B7E478F7B_m1EF432E61E37A9A6C2AE45782C131AD713BE5F4A_RuntimeMethod_var);
		if (L_10)
		{
			goto IL_004d;
		}
	}
	{
		RuntimeObject* L_11 = V_0;
		NullCheck(L_11);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_12;
		L_12 = InterfaceFuncInvoker0< GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* >::Invoke(0 /* UnityEngine.GameObject Microsoft.MixedReality.Toolkit.Input.IMixedRealityControllerVisualizer::get_GameObjectProxy() */, IMixedRealityControllerVisualizer_t7B6B8F308ED8917976841E02F1525D6B7E478F7B_il2cpp_TypeInfo_var, L_11);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_13;
		L_13 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_12, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_13)
		{
			goto IL_004d;
		}
	}
	{
		// visualizer.GameObjectProxy.SetActive(false);
		RuntimeObject* L_14 = V_0;
		NullCheck(L_14);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_15;
		L_15 = InterfaceFuncInvoker0< GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* >::Invoke(0 /* UnityEngine.GameObject Microsoft.MixedReality.Toolkit.Input.IMixedRealityControllerVisualizer::get_GameObjectProxy() */, IMixedRealityControllerVisualizer_t7B6B8F308ED8917976841E02F1525D6B7E478F7B_il2cpp_TypeInfo_var, L_14);
		NullCheck(L_15);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_15, (bool)0, NULL);
	}

IL_004d:
	{
		// }
		return;
	}
}
// System.Type Microsoft.MixedReality.Toolkit.XRSDK.Input.XRSDKDeviceManager::GetControllerType(Microsoft.MixedReality.Toolkit.Input.SupportedControllerType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* XRSDKDeviceManager_GetControllerType_m522C09C1EB697825B1887F9313F33EE9DCF300E5 (XRSDKDeviceManager_t9F5B097AEC5AA187C3083AE6F40B34E00E1BA583* __this, int32_t ___supportedControllerType0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GenericXRSDKController_tB5136D037E3BD7D743A519016EA2710F7ED980DE_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return typeof(GenericXRSDKController);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (GenericXRSDKController_tB5136D037E3BD7D743A519016EA2710F7ED980DE_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_0, NULL);
		return L_1;
	}
}
// Microsoft.MixedReality.Toolkit.Input.InputSourceType Microsoft.MixedReality.Toolkit.XRSDK.Input.XRSDKDeviceManager::GetInputSourceType(Microsoft.MixedReality.Toolkit.Input.SupportedControllerType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XRSDKDeviceManager_GetInputSourceType_mBD2B9E852A29A0C49665A7BCA47EF9E3E0E26462 (XRSDKDeviceManager_t9F5B097AEC5AA187C3083AE6F40B34E00E1BA583* __this, int32_t ___supportedControllerType0, const RuntimeMethod* method) 
{
	{
		// return InputSourceType.Controller;
		return (int32_t)(2);
	}
}
// Microsoft.MixedReality.Toolkit.Input.SupportedControllerType Microsoft.MixedReality.Toolkit.XRSDK.Input.XRSDKDeviceManager::GetCurrentControllerType(UnityEngine.XR.InputDevice)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XRSDKDeviceManager_GetCurrentControllerType_m6AD3B233744B9393C4C8A0AE3D2E6706C627750B (XRSDKDeviceManager_t9F5B097AEC5AA187C3083AE6F40B34E00E1BA583* __this, InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD ___inputDevice0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8DAF7C48D3FFAE986E4132CE79E47540CD8B7E78);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log($"{inputDevice.name} does not have a defined controller type, falling back to generic controller type");
		String_t* L_0;
		L_0 = InputDevice_get_name_mAEA08A3755E715697022C54227556428CEF4E1CE((&___inputDevice0), NULL);
		String_t* L_1;
		L_1 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(L_0, _stringLiteral8DAF7C48D3FFAE986E4132CE79E47540CD8B7E78, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(L_1, NULL);
		// return SupportedControllerType.GenericUnity;
		return (int32_t)(((int32_t)64));
	}
}
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.Input.XRSDKDeviceManager::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRSDKDeviceManager__cctor_mB5637B770C9E6ECDB9FBF00F6680DA88FE4E7AFD (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mD430149F4FD7C65B408B1ACAADF63E50832E908D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t500395CB4236088AFBF004A0D9DD896F9DC12876_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRSDKDeviceManager_t9F5B097AEC5AA187C3083AE6F40B34E00E1BA583_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral34F5EB88C9344AD2EF11835AB706991FCF81186E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA019DC385C2052423E84D7B14DC0877F4B4E649B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBD4486AC00CC32467350EF386FF7169FB88B9A64);
		s_Il2CppMethodInitialized = true;
	}
	{
		// protected static readonly Dictionary<InputDevice, GenericXRSDKController> ActiveControllers = new Dictionary<InputDevice, GenericXRSDKController>();
		Dictionary_2_t500395CB4236088AFBF004A0D9DD896F9DC12876* L_0 = (Dictionary_2_t500395CB4236088AFBF004A0D9DD896F9DC12876*)il2cpp_codegen_object_new(Dictionary_2_t500395CB4236088AFBF004A0D9DD896F9DC12876_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Dictionary_2__ctor_mD430149F4FD7C65B408B1ACAADF63E50832E908D(L_0, Dictionary_2__ctor_mD430149F4FD7C65B408B1ACAADF63E50832E908D_RuntimeMethod_var);
		((XRSDKDeviceManager_t9F5B097AEC5AA187C3083AE6F40B34E00E1BA583_StaticFields*)il2cpp_codegen_static_fields_for(XRSDKDeviceManager_t9F5B097AEC5AA187C3083AE6F40B34E00E1BA583_il2cpp_TypeInfo_var))->___ActiveControllers_21 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((XRSDKDeviceManager_t9F5B097AEC5AA187C3083AE6F40B34E00E1BA583_StaticFields*)il2cpp_codegen_static_fields_for(XRSDKDeviceManager_t9F5B097AEC5AA187C3083AE6F40B34E00E1BA583_il2cpp_TypeInfo_var))->___ActiveControllers_21), (void*)L_0);
		// private static readonly ProfilerMarker UpdatePerfMarker = new ProfilerMarker("[MRTK] XRSDKDeviceManager.Update");
		ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD L_1;
		memset((&L_1), 0, sizeof(L_1));
		ProfilerMarker__ctor_mDD68B0A8B71E0301F592AF8891560150E55699C8_inline((&L_1), _stringLiteralBD4486AC00CC32467350EF386FF7169FB88B9A64, /*hidden argument*/NULL);
		((XRSDKDeviceManager_t9F5B097AEC5AA187C3083AE6F40B34E00E1BA583_StaticFields*)il2cpp_codegen_static_fields_for(XRSDKDeviceManager_t9F5B097AEC5AA187C3083AE6F40B34E00E1BA583_il2cpp_TypeInfo_var))->___UpdatePerfMarker_26 = L_1;
		// private static readonly ProfilerMarker GetOrAddControllerPerfMarker = new ProfilerMarker("[MRTK] XRSDKDeviceManager.GetOrAddController");
		ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD L_2;
		memset((&L_2), 0, sizeof(L_2));
		ProfilerMarker__ctor_mDD68B0A8B71E0301F592AF8891560150E55699C8_inline((&L_2), _stringLiteralA019DC385C2052423E84D7B14DC0877F4B4E649B, /*hidden argument*/NULL);
		((XRSDKDeviceManager_t9F5B097AEC5AA187C3083AE6F40B34E00E1BA583_StaticFields*)il2cpp_codegen_static_fields_for(XRSDKDeviceManager_t9F5B097AEC5AA187C3083AE6F40B34E00E1BA583_il2cpp_TypeInfo_var))->___GetOrAddControllerPerfMarker_27 = L_2;
		// private static readonly ProfilerMarker RemoveControllerPerfMarker = new ProfilerMarker("[MRTK] XRSDKDeviceManager.RemoveController");
		ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD L_3;
		memset((&L_3), 0, sizeof(L_3));
		ProfilerMarker__ctor_mDD68B0A8B71E0301F592AF8891560150E55699C8_inline((&L_3), _stringLiteral34F5EB88C9344AD2EF11835AB706991FCF81186E, /*hidden argument*/NULL);
		((XRSDKDeviceManager_t9F5B097AEC5AA187C3083AE6F40B34E00E1BA583_StaticFields*)il2cpp_codegen_static_fields_for(XRSDKDeviceManager_t9F5B097AEC5AA187C3083AE6F40B34E00E1BA583_il2cpp_TypeInfo_var))->___RemoveControllerPerfMarker_28 = L_3;
		return;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE* XRGeneralSettings_get_Instance_mF17EAF521849B0E007AEE3B009727D3DF9EF110F_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return s_RuntimeSettingsInstance;
		il2cpp_codegen_runtime_class_init_inline(XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE_il2cpp_TypeInfo_var);
		XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE* L_0 = ((XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE_StaticFields*)il2cpp_codegen_static_fields_for(XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE_il2cpp_TypeInfo_var))->___s_RuntimeSettingsInstance_5;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52* XRGeneralSettings_get_Manager_m112FEB4E6DFB7B5F5C4A2DEC4E975CF2EBD51B42_inline (XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE* __this, const RuntimeMethod* method) 
{
	{
		// get { return m_LoaderManagerInstance; }
		XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52* L_0 = __this->___m_LoaderManagerInstance_6;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR XRLoader_t80B1B1934C40561C5352ABC95D567DC2A7C9C976* XRManagerSettings_get_activeLoader_mFB3B679005792D3DF871EAA7120DD86DCA1D5DEA_inline (XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52* __this, const RuntimeMethod* method) 
{
	{
		// public XRLoader activeLoader { get; private set; }
		XRLoader_t80B1B1934C40561C5352ABC95D567DC2A7C9C976* L_0 = __this->___U3CactiveLoaderU3Ek__BackingField_10;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool BaseSpatialObserver_get_IsRunning_mB13D2B9872E0700341E22CA4FBDA836108145134_inline (BaseSpatialObserver_tFBE4A1B3D5FCCB85BD0DC39709C1FCB7085D797B* __this, const RuntimeMethod* method) 
{
	{
		// public bool IsRunning { get; protected set; } = false;
		bool L_0 = __this->___U3CIsRunningU3Ek__BackingField_19;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BaseSpatialObserver_set_IsRunning_m47FBE552E2B0BF2F7DD73DED421312874DA4710A_inline (BaseSpatialObserver_tFBE4A1B3D5FCCB85BD0DC39709C1FCB7085D797B* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// public bool IsRunning { get; protected set; } = false;
		bool L_0 = ___value0;
		__this->___U3CIsRunningU3Ek__BackingField_19 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float BaseSpatialObserver_get_UpdateInterval_mCA5EC1733690C942FC0D32C203581D794E490896_inline (BaseSpatialObserver_tFBE4A1B3D5FCCB85BD0DC39709C1FCB7085D797B* __this, const RuntimeMethod* method) 
{
	{
		// public float UpdateInterval { get; set; } = 3.5f; // 3.5 seconds
		float L_0 = __this->___U3CUpdateIntervalU3Ek__BackingField_25;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t BaseSpatialObserver_get_ObserverVolumeType_m03C1580AB6F33AE1FC3583BAA197A9DB8F63D3E1_inline (BaseSpatialObserver_tFBE4A1B3D5FCCB85BD0DC39709C1FCB7085D797B* __this, const RuntimeMethod* method) 
{
	{
		// public VolumeType ObserverVolumeType { get; set; } = VolumeType.AxisAlignedCube;
		int32_t L_0 = __this->___U3CObserverVolumeTypeU3Ek__BackingField_23;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BaseSpatialObserver_set_ObserverRotation_m4E1045D9617D11E133B536B5F35D1A02D079665B_inline (BaseSpatialObserver_tFBE4A1B3D5FCCB85BD0DC39709C1FCB7085D797B* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___value0, const RuntimeMethod* method) 
{
	{
		// public Quaternion ObserverRotation { get; set; } = Quaternion.identity;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = ___value0;
		__this->___U3CObserverRotationU3Ek__BackingField_21 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool BaseSpatialObserver_get_IsStationaryObserver_mA13036D4DE4D2BAB1CB905DB0FDF1CA17224002E_inline (BaseSpatialObserver_tFBE4A1B3D5FCCB85BD0DC39709C1FCB7085D797B* __this, const RuntimeMethod* method) 
{
	{
		// public bool IsStationaryObserver { get; set; } = false;
		bool L_0 = __this->___U3CIsStationaryObserverU3Ek__BackingField_20;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BaseSpatialObserver_set_ObserverOrigin_m198E1F47350F76383E77B197313E41F94019614D_inline (BaseSpatialObserver_tFBE4A1B3D5FCCB85BD0DC39709C1FCB7085D797B* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) 
{
	{
		// public Vector3 ObserverOrigin { get; set; } = Vector3.zero;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___value0;
		__this->___U3CObserverOriginU3Ek__BackingField_22 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t BaseSpatialMeshObserver_get_MeshPhysicsLayer_mDD04C90F8900FADBD6D3C5CD092DCB4FFD7C1187_inline (BaseSpatialMeshObserver_t38C1251909F4D9DB3B4E3DA90CFC32670E925B46* __this, const RuntimeMethod* method) 
{
	{
		// get { return meshPhysicsLayer; }
		int32_t L_0 = __this->___meshPhysicsLayer_40;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* BaseSpatialAwarenessObject_get_GameObject_m9A7D5AD66EAFD693335D73289E08E4F62D15EB06_inline (BaseSpatialAwarenessObject_tD8B917300EF3EB525D1666D65D8A22226F935C55* __this, const RuntimeMethod* method) 
{
	{
		// public GameObject GameObject { get; set; }
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___U3CGameObjectU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BaseSpatialAwarenessObject_set_Id_m934BABD378424930BFB496263790179DD0D8E9DA_inline (BaseSpatialAwarenessObject_tD8B917300EF3EB525D1666D65D8A22226F935C55* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		// public int Id { get; set; }
		int32_t L_0 = ___value0;
		__this->___U3CIdU3Ek__BackingField_0 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* BaseSpatialAwarenessObject_get_Filter_mFE56EA1F934330429B2F7ED30BC93B7E18C531A9_inline (BaseSpatialAwarenessObject_tD8B917300EF3EB525D1666D65D8A22226F935C55* __this, const RuntimeMethod* method) 
{
	{
		// public MeshFilter Filter { get; set; }
		MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* L_0 = __this->___U3CFilterU3Ek__BackingField_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR MeshCollider_tB525E4DDE383252364ED0BDD32CF2B53914EE455* SpatialAwarenessMeshObject_get_Collider_m2A7709B01862765D3A3A02B613CD3AD5FEED0EC9_inline (SpatialAwarenessMeshObject_t5577B6C05F0A1138C582A8F1B7A717B81AE11379* __this, const RuntimeMethod* method) 
{
	{
		// public MeshCollider Collider { get; set; }
		MeshCollider_tB525E4DDE383252364ED0BDD32CF2B53914EE455* L_0 = __this->___U3CColliderU3Ek__BackingField_5;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 BaseSpatialObserver_get_ObserverOrigin_m42E71C81EB602959E4AF7C2A4EBB5B54007931B9_inline (BaseSpatialObserver_tFBE4A1B3D5FCCB85BD0DC39709C1FCB7085D797B* __this, const RuntimeMethod* method) 
{
	{
		// public Vector3 ObserverOrigin { get; set; } = Vector3.zero;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = __this->___U3CObserverOriginU3Ek__BackingField_22;
		return L_0;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 BaseSpatialObserver_get_ObservationExtents_m55A4B302D753B342D0A02E86EFA8FE4FFA5E06DF_inline (BaseSpatialObserver_tFBE4A1B3D5FCCB85BD0DC39709C1FCB7085D797B* __this, const RuntimeMethod* method) 
{
	{
		// public Vector3 ObservationExtents { get; set; } = Vector3.one * 3f; // 3 meter sides / radius
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = __this->___U3CObservationExtentsU3Ek__BackingField_24;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t MeshInfo_get_ChangeState_mF366492B8EF4A9FC8F677E01A6BA4C6C75D3BF68_inline (MeshInfo_t0BB7A8C2C586FD5EAD40E9E4E1749150915FDFFA* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CChangeStateU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR MeshId_t2CF122567F06D0AA4F80DDA5CB51E8CD3B7EA2AC MeshInfo_get_MeshId_m96D69F5BA60A596D7C9FAAF0931940452E3D8846_inline (MeshInfo_t0BB7A8C2C586FD5EAD40E9E4E1749150915FDFFA* __this, const RuntimeMethod* method) 
{
	{
		MeshId_t2CF122567F06D0AA4F80DDA5CB51E8CD3B7EA2AC L_0 = __this->___U3CMeshIdU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR MeshId_t2CF122567F06D0AA4F80DDA5CB51E8CD3B7EA2AC MeshGenerationResult_get_MeshId_m2260BF3F7EB6ED4F2CF0A8F6BEFDD2CD82B6751D_inline (MeshGenerationResult_tD5A6D639B2CF1A3F855AFB41861DEC48DC0D3A9C* __this, const RuntimeMethod* method) 
{
	{
		MeshId_t2CF122567F06D0AA4F80DDA5CB51E8CD3B7EA2AC L_0 = __this->___U3CMeshIdU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t MeshGenerationResult_get_Status_m392754927B1E28DB2E6078A212F8FCC013AC10C0_inline (MeshGenerationResult_tD5A6D639B2CF1A3F855AFB41861DEC48DC0D3A9C* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CStatusU3Ek__BackingField_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t BaseSpatialAwarenessObject_get_Id_mF22F83B16AF2EB06B5A070F1232BBD4CE92E9882_inline (BaseSpatialAwarenessObject_tD8B917300EF3EB525D1666D65D8A22226F935C55* __this, const RuntimeMethod* method) 
{
	{
		// public int Id { get; set; }
		int32_t L_0 = __this->___U3CIdU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t BaseSpatialMeshObserver_get_DisplayOption_m39E37BB99BACF9803F14B4B39210CA237860B5F3_inline (BaseSpatialMeshObserver_t38C1251909F4D9DB3B4E3DA90CFC32670E925B46* __this, const RuntimeMethod* method) 
{
	{
		// get { return displayOption; }
		int32_t L_0 = __this->___displayOption_37;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* BaseSpatialMeshObserver_get_VisibleMaterial_m7828E04C0F97914DEEBE10F42C1B681BDC2B2390_inline (BaseSpatialMeshObserver_t38C1251909F4D9DB3B4E3DA90CFC32670E925B46* __this, const RuntimeMethod* method) 
{
	{
		// get { return visibleMaterial; }
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_0 = __this->___visibleMaterial_45;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* BaseSpatialMeshObserver_get_OcclusionMaterial_m0536D088856D146291B8805385B620509408CAC4_inline (BaseSpatialMeshObserver_t38C1251909F4D9DB3B4E3DA90CFC32670E925B46* __this, const RuntimeMethod* method) 
{
	{
		// get { return occlusionMaterial; }
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_0 = __this->___occlusionMaterial_43;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* BaseSpatialAwarenessObject_get_Renderer_mF9821B506AE27AADD6536A397AED15C9AA0E93DF_inline (BaseSpatialAwarenessObject_tD8B917300EF3EB525D1666D65D8A22226F935C55* __this, const RuntimeMethod* method) 
{
	{
		// public MeshRenderer Renderer { get; set; }
		MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_0 = __this->___U3CRendererU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool BaseSpatialMeshObserver_get_RecalculateNormals_m484189F2CAE7A136C69AAE8932524A4B081134B8_inline (BaseSpatialMeshObserver_t38C1251909F4D9DB3B4E3DA90CFC32670E925B46* __this, const RuntimeMethod* method) 
{
	{
		// public bool RecalculateNormals { get; set; } = true;
		bool L_0 = __this->___U3CRecalculateNormalsU3Ek__BackingField_41;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR PhysicMaterial_t4ECED34E04BB2148333467208361A5FBFDCD7131* BaseSpatialMeshObserver_get_PhysicsMaterial_m52E39C285B9F35E9116B59F69C71AA856D5A572E_inline (BaseSpatialMeshObserver_t38C1251909F4D9DB3B4E3DA90CFC32670E925B46* __this, const RuntimeMethod* method) 
{
	{
		// get { return physicsMaterial; }
		PhysicMaterial_t4ECED34E04BB2148333467208361A5FBFDCD7131* L_0 = __this->___physicsMaterial_44;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* BaseSpatialMeshObserver_get_RuntimeSpatialMeshPrefab_m74F19923F50D51C5EC1F947B73311F0B67F60998_inline (BaseSpatialMeshObserver_t38C1251909F4D9DB3B4E3DA90CFC32670E925B46* __this, const RuntimeMethod* method) 
{
	{
		// get { return runtimeSpatialMeshPrefab; }
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___runtimeSpatialMeshPrefab_46;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool SimpleCoroutineAwaiter_get_IsCompleted_m1F2F67907C96BE5BB23AF2F333A458FE3413D343_inline (SimpleCoroutineAwaiter_t9DF0277C21C7F3B9CE7C9563D257D9A4821B4898* __this, const RuntimeMethod* method) 
{
	{
		// public bool IsCompleted { get; private set; }
		bool L_0 = __this->___U3CIsCompletedU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t BaseBoundarySystem_get_Scale_mF65C1ED40640B98B1E2EBB3E6FBE749F8885F032_inline (BaseBoundarySystem_t17725CB18637398B438C3C2B6E27DA80B4B27413* __this, const RuntimeMethod* method) 
{
	{
		// public ExperienceScale Scale { get; set; }
		int32_t L_0 = __this->___U3CScaleU3Ek__BackingField_33;
		return L_0;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t BaseController_get_TrackingState_m96B4ACDD66C2B36616C6912B8A2BB6D4A521F2A9_inline (BaseController_t1635F01D9B5000C345FAF98BAEEA495E97C32274* __this, const RuntimeMethod* method) 
{
	{
		// public TrackingState TrackingState { get; protected set; }
		int32_t L_0 = __this->___U3CTrackingStateU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool BaseController_get_IsPositionAvailable_mBDD6728391E1791E6D984F112D4976601B2A8672_inline (BaseController_t1635F01D9B5000C345FAF98BAEEA495E97C32274* __this, const RuntimeMethod* method) 
{
	{
		// public bool IsPositionAvailable { get; protected set; }
		bool L_0 = __this->___U3CIsPositionAvailableU3Ek__BackingField_6;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool BaseController_get_IsRotationAvailable_mC348B5D4A5F1A0A7644921DD496722DED92A57B5_inline (BaseController_t1635F01D9B5000C345FAF98BAEEA495E97C32274* __this, const RuntimeMethod* method) 
{
	{
		// public bool IsRotationAvailable { get; protected set; }
		bool L_0 = __this->___U3CIsRotationAvailableU3Ek__BackingField_8;
		return L_0;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BaseController_set_IsPositionAvailable_m961439F02C7A664A0EEE36724AC8FDCE548E8FE9_inline (BaseController_t1635F01D9B5000C345FAF98BAEEA495E97C32274* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// public bool IsPositionAvailable { get; protected set; }
		bool L_0 = ___value0;
		__this->___U3CIsPositionAvailableU3Ek__BackingField_6 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BaseController_set_IsPositionApproximate_mC91DE12C8BCDEA2CDA015ACD4315AFD2BA8AF148_inline (BaseController_t1635F01D9B5000C345FAF98BAEEA495E97C32274* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// public bool IsPositionApproximate { get; protected set; }
		bool L_0 = ___value0;
		__this->___U3CIsPositionApproximateU3Ek__BackingField_7 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BaseController_set_IsRotationAvailable_m134E4988FAD7264809AD1A9311413E4183C668D8_inline (BaseController_t1635F01D9B5000C345FAF98BAEEA495E97C32274* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// public bool IsRotationAvailable { get; protected set; }
		bool L_0 = ___value0;
		__this->___U3CIsRotationAvailableU3Ek__BackingField_8 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BaseController_set_TrackingState_mF18CD7B38A10B07F9A70E04F23D51C4F342D1E97_inline (BaseController_t1635F01D9B5000C345FAF98BAEEA495E97C32274* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		// public TrackingState TrackingState { get; protected set; }
		int32_t L_0 = ___value0;
		__this->___U3CTrackingStateU3Ek__BackingField_2 = L_0;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BaseController_set_Velocity_m382E06808795EC60C83F87D99C2881D39902BD33_inline (BaseController_t1635F01D9B5000C345FAF98BAEEA495E97C32274* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) 
{
	{
		// public Vector3 Velocity { get; protected set; }
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___value0;
		__this->___U3CVelocityU3Ek__BackingField_11 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BaseController_set_AngularVelocity_m9C82E80627D17EF9743A1102039674F4C3DD302E_inline (BaseController_t1635F01D9B5000C345FAF98BAEEA495E97C32274* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) 
{
	{
		// public Vector3 AngularVelocity { get; protected set; }
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___value0;
		__this->___U3CAngularVelocityU3Ek__BackingField_10 = L_0;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float MixedRealityInteractionMapping_get_FloatData_m427535AC6E511D46014CADA75E2410FA4CE5C903_inline (MixedRealityInteractionMapping_t10DB776EEA5255542F8F4AF0DC0BC566AF0095E0* __this, const RuntimeMethod* method) 
{
	{
		// return floatData;
		float L_0 = __this->___floatData_13;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 MixedRealityInteractionMapping_get_Vector2Data_m56249B37DF9ADDCEA3D131DB2916014185933C40_inline (MixedRealityInteractionMapping_t10DB776EEA5255542F8F4AF0DC0BC566AF0095E0* __this, const RuntimeMethod* method) 
{
	{
		// return vector2Data;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = __this->___vector2Data_14;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* BaseController_get_Visualizer_m59C3E1F9279CC6E60482564095AAB8B4E87131E2_inline (BaseController_t1635F01D9B5000C345FAF98BAEEA495E97C32274* __this, const RuntimeMethod* method) 
{
	{
		// public IMixedRealityControllerVisualizer Visualizer { get; protected set; }
		RuntimeObject* L_0 = __this->___U3CVisualizerU3Ek__BackingField_5;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_GetValueOrDefault_m86E1210429A6EA0082CC7806DD638E8B4555F148_gshared_inline (Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = (bool)__this->___value_1;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_m6B76D139692C43B2AF7C695FAB044B16ACFAF355_gshared_inline (Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = (bool)__this->___hasValue_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Queue_1_get_Count_m64717BA990F1986260A2D23ED2E8E04C1B6FA6D1_gshared_inline (Queue_1_tCD897AEF7F66F282E6B86F78DCC03D0B51FBDF37* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR MeshInfo_t0BB7A8C2C586FD5EAD40E9E4E1749150915FDFFA Enumerator_get_Current_mC0CE60FBC4FAA79C6D5B26DD275B4DA0DF7265E6_gshared_inline (Enumerator_tEC6D4B278440969CB479B2E8E2B65B2681CA6CE3* __this, const RuntimeMethod* method) 
{
	{
		MeshInfo_t0BB7A8C2C586FD5EAD40E9E4E1749150915FDFFA L_0 = (MeshInfo_t0BB7A8C2C586FD5EAD40E9E4E1749150915FDFFA)__this->____current_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_gshared_inline (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->____current_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mD6A050A07715B63F87D5836164739C5F9B96AE4E_gshared_inline (List_1_tE3A859FDD017A2D25E8161269BA1167C22EC7EB9* __this, uint32_t ___item0, const RuntimeMethod* method) 
{
	UInt32EnumU5BU5D_t98241E73F566A0C7C43B1F407869881BF951BE1A* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		UInt32EnumU5BU5D_t98241E73F566A0C7C43B1F407869881BF951BE1A* L_1 = (UInt32EnumU5BU5D_t98241E73F566A0C7C43B1F407869881BF951BE1A*)__this->____items_1;
		V_0 = L_1;
		int32_t L_2 = (int32_t)__this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		UInt32EnumU5BU5D_t98241E73F566A0C7C43B1F407869881BF951BE1A* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		UInt32EnumU5BU5D_t98241E73F566A0C7C43B1F407869881BF951BE1A* L_6 = V_0;
		int32_t L_7 = V_1;
		uint32_t L_8 = ___item0;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (uint32_t)L_8);
		return;
	}

IL_0034:
	{
		uint32_t L_9 = ___item0;
		((  void (*) (List_1_tE3A859FDD017A2D25E8161269BA1167C22EC7EB9*, uint32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_m90BE1F9C540971223AE0CE4E333ACFC27CDA0275_gshared_inline (List_1_tB66D13E0427CA48C600AEA4DBA5B173C3734C6CE* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		if (!false)
		{
			goto IL_0035;
		}
	}
	{
		int32_t L_1 = (int32_t)__this->____size_2;
		V_0 = L_1;
		__this->____size_2 = 0;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_003c;
		}
	}
	{
		InputDeviceU5BU5D_t1361FC6DDFE12D211F933B024E51B7E5CF073F63* L_3 = (InputDeviceU5BU5D_t1361FC6DDFE12D211F933B024E51B7E5CF073F63*)__this->____items_1;
		int32_t L_4 = V_0;
		Array_Clear_m48B57EC27CADC3463CA98A33373D557DA587FF1B((RuntimeArray*)L_3, 0, L_4, NULL);
		return;
	}

IL_0035:
	{
		__this->____size_2 = 0;
	}

IL_003c:
	{
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint32_t Enumerator_get_Current_m233DF81DCAAB147DA040D40C2F51F462C087C913_gshared_inline (Enumerator_tFC54B69D62BA1CA29D8F4AB812D98BDDBC2910F5* __this, const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = (uint32_t)__this->____current_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD Enumerator_get_Current_m7D19F033982951230B318A08E829850451459AAE_gshared_inline (Enumerator_t2A0DD7C3F41DE0D8FD672B874BDDB066261ECB01* __this, const RuntimeMethod* method) 
{
	{
		InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD L_0 = (InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD)__this->____current_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEECA639E710075828AEBC2083BBCF28184156831_gshared_inline (List_1_tB66D13E0427CA48C600AEA4DBA5B173C3734C6CE* __this, InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD ___item0, const RuntimeMethod* method) 
{
	InputDeviceU5BU5D_t1361FC6DDFE12D211F933B024E51B7E5CF073F63* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		InputDeviceU5BU5D_t1361FC6DDFE12D211F933B024E51B7E5CF073F63* L_1 = (InputDeviceU5BU5D_t1361FC6DDFE12D211F933B024E51B7E5CF073F63*)__this->____items_1;
		V_0 = L_1;
		int32_t L_2 = (int32_t)__this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		InputDeviceU5BU5D_t1361FC6DDFE12D211F933B024E51B7E5CF073F63* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		InputDeviceU5BU5D_t1361FC6DDFE12D211F933B024E51B7E5CF073F63* L_6 = V_0;
		int32_t L_7 = V_1;
		InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD L_8 = ___item0;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD)L_8);
		return;
	}

IL_0034:
	{
		InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD L_9 = ___item0;
		((  void (*) (List_1_tB66D13E0427CA48C600AEA4DBA5B173C3734C6CE*, InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD KeyValuePair_2_get_Key_m749A3A8F4386C91708C0C4A5A65C3FCBDEFFE58F_gshared_inline (KeyValuePair_2_t55A4D6848C39E45165F686753BD37E19B24D994E* __this, const RuntimeMethod* method) 
{
	{
		InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD L_0 = (InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD)__this->___key_0;
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
