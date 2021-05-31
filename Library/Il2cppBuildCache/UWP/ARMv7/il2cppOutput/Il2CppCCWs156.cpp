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
struct VirtFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.BaseEventSystem/EventHandlerEntry>>
struct Dictionary_2_t6D9E31AD9163B3A97AA0E83AC606775912490ABD;
// System.Collections.Generic.Dictionary`2<System.Type,System.Object>
struct Dictionary_2_t1BCBBB8B077DB2EE009E3E0992AEAA34875A70FE;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityGestureHandler`1<Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose>>
struct EventFunction_1_tAEC84A3419EA0BD79A66A2818950D44B1787383F;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityGestureHandler`1<UnityEngine.Quaternion>>
struct EventFunction_1_tA271F0C7F32FEAC4972FB9EE8995F053EEE4DC18;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityGestureHandler`1<UnityEngine.Vector2>>
struct EventFunction_1_tB58B3057E0CC1C08A66D71D8A15653913FFEFF68;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityGestureHandler`1<UnityEngine.Vector3>>
struct EventFunction_1_t57976825B4E6CDE53D51C864DC3BDB7FF6488E14;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputHandler`1<Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose>>
struct EventFunction_1_tA90947B91567263334011AA055D0E4D10E433C51;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputHandler`1<UnityEngine.Quaternion>>
struct EventFunction_1_t3741013856ACBA6170BA0506B00EBEB4A73B4C5C;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputHandler`1<System.Single>>
struct EventFunction_1_tFF383DC5859C3F505C05CDC060A32D6DAE236472;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputHandler`1<UnityEngine.Vector2>>
struct EventFunction_1_tB51BC8CA70F939E869F063E94FF47C143D68E1D6;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputHandler`1<UnityEngine.Vector3>>
struct EventFunction_1_t06A6015DB33482FA1728EAB615DEC69DE0CBB31A;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityBaseInputHandler>
struct EventFunction_1_t44117366BBF11D3CCB711E8B061BCE3183EC11CE;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Diagnostics.IMixedRealityDiagnosticsHandler>
struct EventFunction_1_tBF7061B5260F5AB89ED09B309BB9A0AD1985BFFE;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityDictationHandler>
struct EventFunction_1_t0A259C57B4518D821C66F1D54F5F28546D4EF00B;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityFocusChangedHandler>
struct EventFunction_1_t1B9490AC5D4E3C163258769C0B118BE2F2B7F1DC;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityFocusHandler>
struct EventFunction_1_t206E29E95D8C165388DAAAA7D3EAF08A675E2D32;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityGestureHandler>
struct EventFunction_1_tD3CF862953EF38C6CEC96E113C8BE4F6060C0B41;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityHandJointHandler>
struct EventFunction_1_t40825EE839F00BCBC1FBFCFEEFDABD2E053CD2C6;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityHandMeshHandler>
struct EventFunction_1_t30558523BD63B0ED422F3492242DD501792A0344;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputHandler>
struct EventFunction_1_t5E50649990A6F0C0F66D53E65EC344A07EDA6B38;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointerHandler>
struct EventFunction_1_tF264EDDAD7A0259A372F473BB6B301A63A5766CD;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealitySourcePoseHandler>
struct EventFunction_1_t4572EE92EA05D85B98404721FF20C8E1022E206A;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealitySourceStateHandler>
struct EventFunction_1_t34E9A016805FA482E7D0BC22943103098871012B;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealitySpeechHandler>
struct EventFunction_1_t19E2F0124E935AADF61940326CD4D988C74F5B40;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityTouchHandler>
struct EventFunction_1_t28980A47E1D1F187CF30BD1ECA66486220C8483A;
// System.Collections.Generic.HashSet`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityController>
struct HashSet_1_t85E64382C5CCBB900CA960D1CEF4DE8ECE1E4837;
// System.Collections.Generic.HashSet`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource>
struct HashSet_1_t2B48F2A2DDD8E60200B3F7E2CE833007064C7D1D;
// Microsoft.MixedReality.Toolkit.Input.InputEventData`1<System.Collections.Generic.IDictionary`2<Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint,Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose>>
struct InputEventData_1_tA3E23BA23CC298011AFF57EAB3FF273C629C34D0;
// Microsoft.MixedReality.Toolkit.Input.InputEventData`1<Microsoft.MixedReality.Toolkit.Input.HandMeshInfo>
struct InputEventData_1_tD59A3B348C4DB876BF80E4B0424713C679DEEB91;
// Microsoft.MixedReality.Toolkit.Input.InputEventData`1<Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose>
struct InputEventData_1_tFE70533D81F944C1BF32FC74B351651DA68C5AF5;
// Microsoft.MixedReality.Toolkit.Input.InputEventData`1<UnityEngine.Quaternion>
struct InputEventData_1_tD8D18B60C214076FA42F3F0D74493E73E42088E4;
// Microsoft.MixedReality.Toolkit.Input.InputEventData`1<System.Single>
struct InputEventData_1_tDB463B85E4DBD65434118084E8C52FF4EA5B3A3C;
// Microsoft.MixedReality.Toolkit.Input.InputEventData`1<UnityEngine.Vector2>
struct InputEventData_1_t75B4D8E000254E97AC29E980DA3441BDC61A35AA;
// Microsoft.MixedReality.Toolkit.Input.InputEventData`1<UnityEngine.Vector3>
struct InputEventData_1_tBD80452CA7323F7AF9D81BE4F33F4929EE29FB91;
// System.Collections.Generic.List`1<System.Tuple`2<Microsoft.MixedReality.Toolkit.BaseEventSystem/Action,UnityEngine.GameObject>>
struct List_1_tB1588C2E431B5ADA40379D5DC18919A72BEA44F3;
// System.Collections.Generic.List`1<System.Tuple`3<Microsoft.MixedReality.Toolkit.BaseEventSystem/Action,System.Type,UnityEngine.EventSystems.IEventSystemHandler>>
struct List_1_t331224EB72BAB582E19076DBEBCE04C263DA6FEE;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5;
// System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.IMixedRealityDataProvider>
struct List_1_tFC0217D5D6209725AA94300B5EC0FE4AB71BCC81;
// Microsoft.MixedReality.Toolkit.Input.SourcePoseEventData`1<Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose>
struct SourcePoseEventData_1_t0EC0F5B247C5FB6867885FD9F549C26B609E36FE;
// Microsoft.MixedReality.Toolkit.Input.SourcePoseEventData`1<UnityEngine.Quaternion>
struct SourcePoseEventData_1_t3A7D7BBDE63A4DD8D7CD6BCB340C47A544C94E87;
// Microsoft.MixedReality.Toolkit.Input.SourcePoseEventData`1<Microsoft.MixedReality.Toolkit.TrackingState>
struct SourcePoseEventData_1_t3BE0ED408F0D7326991F4F4EC8B11F9FC5D35821;
// Microsoft.MixedReality.Toolkit.Input.SourcePoseEventData`1<UnityEngine.Vector2>
struct SourcePoseEventData_1_t1159A092B1D54CCCB3312D43916D9D913210176F;
// Microsoft.MixedReality.Toolkit.Input.SourcePoseEventData`1<UnityEngine.Vector3>
struct SourcePoseEventData_1_t5A336A07D67DEF2AAEE8F7FCC44E3BB2C6455564;
// System.Collections.Generic.Stack`1<UnityEngine.GameObject>
struct Stack_1_tAE566EECB2D3565C2EDCA60875D2F6444CC3F9AE;
// System.Threading.Tasks.Task`1<System.Int32>
struct Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725;
// System.Byte[]
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
// System.Action
struct Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6;
// System.Collections.ArrayList
struct ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575;
// Microsoft.MixedReality.Toolkit.BaseMixedRealityProfile
struct BaseMixedRealityProfile_tE425D8D64B2631D5C8C82A49805613264FA9D9A3;
// Microsoft.MixedReality.Toolkit.Diagnostics.DiagnosticsEventData
struct DiagnosticsEventData_t26B7291E6F4A3D00DC0A1BF47144FC19C2D19C15;
// Microsoft.MixedReality.Toolkit.Input.DictationEventData
struct DictationEventData_tA7164975AD6B3420DAC57401B980789CC52CB80A;
// Microsoft.MixedReality.Toolkit.Input.FocusEventData
struct FocusEventData_tB86FBD326E3B9EFEB5284D55CD0413CC83327F06;
// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319;
// Microsoft.MixedReality.Toolkit.Input.HandTrackingInputEventData
struct HandTrackingInputEventData_tF8B3370C187545FD614D62A33B7509615F7E925F;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// UniRx.IMessageBroker
struct IMessageBroker_t916DB1322D868A9D68B9DE7DE324069C1F41FABC;
// System.Runtime.Remoting.Messaging.IMethodMessage
struct IMethodMessage_tF1E8AAA822A4BC884BC20CAB4B84F5826BBE282C;
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityEyeGazeProvider
struct IMixedRealityEyeGazeProvider_t94E9985535D4320877762D61BCFEDD43660EEBE1;
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityGazeProvider
struct IMixedRealityGazeProvider_t98527512D6642718D9415CAC4D8AE465E69D0D55;
// Microsoft.MixedReality.Toolkit.IMixedRealityServiceRegistrar
struct IMixedRealityServiceRegistrar_t279804348C19FFBAC1249ADF9359629F9AC1C873;
// Microsoft.MixedReality.Toolkit.Input.InputEventData
struct InputEventData_tC89213D733BAC80CB214D6C99D989B0A0BB78C0F;
// OpenCvSharp.Mat
struct Mat_t384A6BE55DC2EC885B4728CACEEE992D74F3DD4D;
// Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsProfile
struct MixedRealityDiagnosticsProfile_tD6686340295AF53408C5366276E8F1DBFDC502D4;
// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputActionRulesProfile
struct MixedRealityInputActionRulesProfile_tF2708C51AAF3894A860028C79DB05A44D6EDD64F;
// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputModule
struct MixedRealityInputModule_t7D2934E0000C5E8CC1FCAFE055DAF780F833C63C;
// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystemProfile
struct MixedRealityInputSystemProfile_tD94F4B1680EFF39B21E58E438A8EDE6FF8B8BA0C;
// Microsoft.MixedReality.Toolkit.Input.MixedRealityPointerEventData
struct MixedRealityPointerEventData_t4E73A7D4CF106B1B66A18BEA6339E99BCA708AC9;
// Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler
struct MixedRealityToolkitVisualProfiler_tA99AEF8DE83DBBA54EF0EE72E6D1F159755E4374;
// System.Security.Cryptography.RandomNumberGenerator
struct RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50;
// System.Text.RegularExpressions.Regex
struct Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F;
// System.Threading.SemaphoreSlim
struct SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385;
// Microsoft.MixedReality.Toolkit.Input.SourceStateEventData
struct SourceStateEventData_t9B7FE1063C45FBE41CED4CD246D43E05D0961576;
// Microsoft.MixedReality.Toolkit.Input.SpeechEventData
struct SpeechEventData_tC9299B14E15592447DC7EB234BDD59A1F1BBB4B4;
// System.String
struct String_t;
// System.Type
struct Type_t;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// OpenCvSharp.Mat/ColExprIndexer
struct ColExprIndexer_t7BE98B3E69BC45B27EF78858459AA2A47A7F632F;
// OpenCvSharp.Mat/ColIndexer
struct ColIndexer_t31825B233FA28DD352A86C1AEF2302E34B7ADD3F;
// OpenCvSharp.Mat/MatExprIndexer
struct MatExprIndexer_t974E175CB4E3337A66B0BA3E7A0BDFBB2428840E;
// OpenCvSharp.Mat/RowExprIndexer
struct RowExprIndexer_t9F0095829DDB9D709C2B312482BBA5B7B2DA2C6F;
// OpenCvSharp.Mat/RowIndexer
struct RowIndexer_tAC3682A4FD16D8EAD29F8B0C5C1589C3CEE58456;
// OpenCvSharp.MatExpr/ColIndexer
struct ColIndexer_t88637B73E8E96D676FF51CC4805E65ADF708D436;
// OpenCvSharp.MatExpr/RowIndexer
struct RowIndexer_t28CD5015FC4AC913EB9B9FCC1FF82C11DD550287;
// System.IO.Stream/ReadWriteTask
struct ReadWriteTask_t32CD2C230786712954C1DB518DBE420A1F4C7974;

IL2CPP_EXTERN_C RuntimeClass* Matrix4x4_t5B627955C6D80AF8F1D97A6466CB337DCEEB3504_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Matrix4x4_tCA3F3FDAF7C260FCEFC8AE7347180927246F3D82_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
struct DateTime_t7C967DBDDE4CAEAA8B5AEB61E36309BCD7D26B8C ;
struct Guid_t ;
struct IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB;
struct IIterator_1_t53A3C573D4888D0C268E9C0D9515A4BDAD329CCC;
struct IIterator_1_t59FD14BF237AECD1747A302E02AE952CAC73C11D;
struct IIterator_1_t6A965FDCA7EF0FD28DFA23C03C7491D6F48B19FC;
struct IIterator_1_t77754FBD9492B03AC4E17184F2DAA6B37722F19D;
struct IIterator_1_t9B59C65AF91E97002623682A0C306DEBB34D8DE1;
struct IIterator_1_tFF647CAD19D34FD0606CDD3425C431F82B94589C;
struct Point_t155CCDBE84DC37ABFA2CBB4649526701CA3A5578 ;
struct Rect_tC45F1DDF39812623644DE296D8057A4958176627 ;
struct Size_tDA924E69AB75296FE3B5E81811B78FD56173BB92 ;
struct TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 ;


IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Windows.Foundation.Collections.IIterable`1<System.Byte>
struct NOVTABLE IIterable_1_tD0597EBCA288E19261E4CD889A045D4DED68F0D5 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IIterable_1_First_mFB95F2845D73300049FCB9B21FE7ACC3473E5E66(IIterator_1_t6A965FDCA7EF0FD28DFA23C03C7491D6F48B19FC** comReturnValue) = 0;
};
// Windows.Foundation.Collections.IIterable`1<System.Double>
struct NOVTABLE IIterable_1_t4464DD78E1BE52C59BBF4333178B62D903ABACEA : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m4C15B56B4F649EA2A68C0591FF33164F3F101C72(IIterator_1_t59FD14BF237AECD1747A302E02AE952CAC73C11D** comReturnValue) = 0;
};
// Windows.Foundation.Collections.IIterable`1<System.Int16>
struct NOVTABLE IIterable_1_tFF30A9E323D222B8189CEBCAC40464562B38A0C8 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m3B459B11C7ABAED5258B394614E5D1C20BEE5F93(IIterator_1_t9B59C65AF91E97002623682A0C306DEBB34D8DE1** comReturnValue) = 0;
};
// Windows.Foundation.Collections.IIterable`1<System.Int32>
struct NOVTABLE IIterable_1_t3FD1FB01310262788B2A8868AA7395E023511050 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IIterable_1_First_mC1E90957AD904E68CE3F84D1EF22D5EFACE8C2D5(IIterator_1_tFF647CAD19D34FD0606CDD3425C431F82B94589C** comReturnValue) = 0;
};
// Windows.Foundation.Collections.IIterable`1<System.Single>
struct NOVTABLE IIterable_1_t0EA6FF8BF23034840DB9F5189AF1D72411992F7E : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IIterable_1_First_mBD8D20BBA2E9F188C15175F2C9AB4039C6400ED1(IIterator_1_t53A3C573D4888D0C268E9C0D9515A4BDAD329CCC** comReturnValue) = 0;
};
// Windows.Foundation.Collections.IIterable`1<System.UInt16>
struct NOVTABLE IIterable_1_t0FFEA449A5FB48BF7695F277FD277D7159E9F452 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m71D30C8522D86FA59BF041E5B3CE17F4CA7B5B92(IIterator_1_t77754FBD9492B03AC4E17184F2DAA6B37722F19D** comReturnValue) = 0;
};
// Windows.UI.Xaml.Interop.IBindableIterable
struct NOVTABLE IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) = 0;
};
// Windows.Foundation.IClosable
struct NOVTABLE IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() = 0;
};

// System.Object


// System.MarshalByRefObject
struct MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8  : public RuntimeObject
{
public:
	// System.Object System.MarshalByRefObject::_identity
	RuntimeObject * ____identity_0;

public:
	inline static int32_t get_offset_of__identity_0() { return static_cast<int32_t>(offsetof(MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8, ____identity_0)); }
	inline RuntimeObject * get__identity_0() const { return ____identity_0; }
	inline RuntimeObject ** get_address_of__identity_0() { return &____identity_0; }
	inline void set__identity_0(RuntimeObject * value)
	{
		____identity_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____identity_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.MarshalByRefObject
struct MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8_marshaled_pinvoke
{
	Il2CppIUnknown* ____identity_0;
};
// Native definition for COM marshalling of System.MarshalByRefObject
struct MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8_marshaled_com
{
	Il2CppIUnknown* ____identity_0;
};

// OpenCvSharp.MatProxy
struct MatProxy_tDBAD4A63FFFD15B0CEDFD8564792BABFB56D38A2  : public RuntimeObject
{
public:
	// System.Byte[] OpenCvSharp.MatProxy::<ImageData>k__BackingField
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___U3CImageDataU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CImageDataU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(MatProxy_tDBAD4A63FFFD15B0CEDFD8564792BABFB56D38A2, ___U3CImageDataU3Ek__BackingField_0)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_U3CImageDataU3Ek__BackingField_0() const { return ___U3CImageDataU3Ek__BackingField_0; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_U3CImageDataU3Ek__BackingField_0() { return &___U3CImageDataU3Ek__BackingField_0; }
	inline void set_U3CImageDataU3Ek__BackingField_0(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___U3CImageDataU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CImageDataU3Ek__BackingField_0), (void*)value);
	}
};


// System.Text.RegularExpressions.MatchCollection
struct MatchCollection_tC2C84E59658F73C90FD36007DE73C869BADEFF3E  : public RuntimeObject
{
public:
	// System.Text.RegularExpressions.Regex System.Text.RegularExpressions.MatchCollection::_regex
	Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F * ____regex_0;
	// System.Collections.ArrayList System.Text.RegularExpressions.MatchCollection::_matches
	ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 * ____matches_1;
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

public:
	inline static int32_t get_offset_of__regex_0() { return static_cast<int32_t>(offsetof(MatchCollection_tC2C84E59658F73C90FD36007DE73C869BADEFF3E, ____regex_0)); }
	inline Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F * get__regex_0() const { return ____regex_0; }
	inline Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F ** get_address_of__regex_0() { return &____regex_0; }
	inline void set__regex_0(Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F * value)
	{
		____regex_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____regex_0), (void*)value);
	}

	inline static int32_t get_offset_of__matches_1() { return static_cast<int32_t>(offsetof(MatchCollection_tC2C84E59658F73C90FD36007DE73C869BADEFF3E, ____matches_1)); }
	inline ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 * get__matches_1() const { return ____matches_1; }
	inline ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 ** get_address_of__matches_1() { return &____matches_1; }
	inline void set__matches_1(ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 * value)
	{
		____matches_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____matches_1), (void*)value);
	}

	inline static int32_t get_offset_of__done_2() { return static_cast<int32_t>(offsetof(MatchCollection_tC2C84E59658F73C90FD36007DE73C869BADEFF3E, ____done_2)); }
	inline bool get__done_2() const { return ____done_2; }
	inline bool* get_address_of__done_2() { return &____done_2; }
	inline void set__done_2(bool value)
	{
		____done_2 = value;
	}

	inline static int32_t get_offset_of__input_3() { return static_cast<int32_t>(offsetof(MatchCollection_tC2C84E59658F73C90FD36007DE73C869BADEFF3E, ____input_3)); }
	inline String_t* get__input_3() const { return ____input_3; }
	inline String_t** get_address_of__input_3() { return &____input_3; }
	inline void set__input_3(String_t* value)
	{
		____input_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____input_3), (void*)value);
	}

	inline static int32_t get_offset_of__beginning_4() { return static_cast<int32_t>(offsetof(MatchCollection_tC2C84E59658F73C90FD36007DE73C869BADEFF3E, ____beginning_4)); }
	inline int32_t get__beginning_4() const { return ____beginning_4; }
	inline int32_t* get_address_of__beginning_4() { return &____beginning_4; }
	inline void set__beginning_4(int32_t value)
	{
		____beginning_4 = value;
	}

	inline static int32_t get_offset_of__length_5() { return static_cast<int32_t>(offsetof(MatchCollection_tC2C84E59658F73C90FD36007DE73C869BADEFF3E, ____length_5)); }
	inline int32_t get__length_5() const { return ____length_5; }
	inline int32_t* get_address_of__length_5() { return &____length_5; }
	inline void set__length_5(int32_t value)
	{
		____length_5 = value;
	}

	inline static int32_t get_offset_of__startat_6() { return static_cast<int32_t>(offsetof(MatchCollection_tC2C84E59658F73C90FD36007DE73C869BADEFF3E, ____startat_6)); }
	inline int32_t get__startat_6() const { return ____startat_6; }
	inline int32_t* get_address_of__startat_6() { return &____startat_6; }
	inline void set__startat_6(int32_t value)
	{
		____startat_6 = value;
	}

	inline static int32_t get_offset_of__prevlen_7() { return static_cast<int32_t>(offsetof(MatchCollection_tC2C84E59658F73C90FD36007DE73C869BADEFF3E, ____prevlen_7)); }
	inline int32_t get__prevlen_7() const { return ____prevlen_7; }
	inline int32_t* get_address_of__prevlen_7() { return &____prevlen_7; }
	inline void set__prevlen_7(int32_t value)
	{
		____prevlen_7 = value;
	}
};

struct MatchCollection_tC2C84E59658F73C90FD36007DE73C869BADEFF3E_StaticFields
{
public:
	// System.Int32 System.Text.RegularExpressions.MatchCollection::infinite
	int32_t ___infinite_8;

public:
	inline static int32_t get_offset_of_infinite_8() { return static_cast<int32_t>(offsetof(MatchCollection_tC2C84E59658F73C90FD36007DE73C869BADEFF3E_StaticFields, ___infinite_8)); }
	inline int32_t get_infinite_8() const { return ___infinite_8; }
	inline int32_t* get_address_of_infinite_8() { return &___infinite_8; }
	inline void set_infinite_8(int32_t value)
	{
		___infinite_8 = value;
	}
};


// UniRx.MessageBroker
struct MessageBroker_tDD695434EA5766CAEB852571934168C7847CC1DA  : public RuntimeObject
{
public:
	// System.Boolean UniRx.MessageBroker::isDisposed
	bool ___isDisposed_1;
	// System.Collections.Generic.Dictionary`2<System.Type,System.Object> UniRx.MessageBroker::notifiers
	Dictionary_2_t1BCBBB8B077DB2EE009E3E0992AEAA34875A70FE * ___notifiers_2;

public:
	inline static int32_t get_offset_of_isDisposed_1() { return static_cast<int32_t>(offsetof(MessageBroker_tDD695434EA5766CAEB852571934168C7847CC1DA, ___isDisposed_1)); }
	inline bool get_isDisposed_1() const { return ___isDisposed_1; }
	inline bool* get_address_of_isDisposed_1() { return &___isDisposed_1; }
	inline void set_isDisposed_1(bool value)
	{
		___isDisposed_1 = value;
	}

	inline static int32_t get_offset_of_notifiers_2() { return static_cast<int32_t>(offsetof(MessageBroker_tDD695434EA5766CAEB852571934168C7847CC1DA, ___notifiers_2)); }
	inline Dictionary_2_t1BCBBB8B077DB2EE009E3E0992AEAA34875A70FE * get_notifiers_2() const { return ___notifiers_2; }
	inline Dictionary_2_t1BCBBB8B077DB2EE009E3E0992AEAA34875A70FE ** get_address_of_notifiers_2() { return &___notifiers_2; }
	inline void set_notifiers_2(Dictionary_2_t1BCBBB8B077DB2EE009E3E0992AEAA34875A70FE * value)
	{
		___notifiers_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___notifiers_2), (void*)value);
	}
};

struct MessageBroker_tDD695434EA5766CAEB852571934168C7847CC1DA_StaticFields
{
public:
	// UniRx.IMessageBroker UniRx.MessageBroker::Default
	RuntimeObject* ___Default_0;

public:
	inline static int32_t get_offset_of_Default_0() { return static_cast<int32_t>(offsetof(MessageBroker_tDD695434EA5766CAEB852571934168C7847CC1DA_StaticFields, ___Default_0)); }
	inline RuntimeObject* get_Default_0() const { return ___Default_0; }
	inline RuntimeObject** get_address_of_Default_0() { return &___Default_0; }
	inline void set_Default_0(RuntimeObject* value)
	{
		___Default_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Default_0), (void*)value);
	}
};


// System.Runtime.Remoting.Messaging.MessageDictionary
struct MessageDictionary_tF87E1D8408337642172945A13C9C116D7F9336BE  : public RuntimeObject
{
public:
	// System.Collections.IDictionary System.Runtime.Remoting.Messaging.MessageDictionary::_internalProperties
	RuntimeObject* ____internalProperties_0;
	// System.Runtime.Remoting.Messaging.IMethodMessage System.Runtime.Remoting.Messaging.MessageDictionary::_message
	RuntimeObject* ____message_1;
	// System.String[] System.Runtime.Remoting.Messaging.MessageDictionary::_methodKeys
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ____methodKeys_2;
	// System.Boolean System.Runtime.Remoting.Messaging.MessageDictionary::_ownProperties
	bool ____ownProperties_3;

public:
	inline static int32_t get_offset_of__internalProperties_0() { return static_cast<int32_t>(offsetof(MessageDictionary_tF87E1D8408337642172945A13C9C116D7F9336BE, ____internalProperties_0)); }
	inline RuntimeObject* get__internalProperties_0() const { return ____internalProperties_0; }
	inline RuntimeObject** get_address_of__internalProperties_0() { return &____internalProperties_0; }
	inline void set__internalProperties_0(RuntimeObject* value)
	{
		____internalProperties_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____internalProperties_0), (void*)value);
	}

	inline static int32_t get_offset_of__message_1() { return static_cast<int32_t>(offsetof(MessageDictionary_tF87E1D8408337642172945A13C9C116D7F9336BE, ____message_1)); }
	inline RuntimeObject* get__message_1() const { return ____message_1; }
	inline RuntimeObject** get_address_of__message_1() { return &____message_1; }
	inline void set__message_1(RuntimeObject* value)
	{
		____message_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____message_1), (void*)value);
	}

	inline static int32_t get_offset_of__methodKeys_2() { return static_cast<int32_t>(offsetof(MessageDictionary_tF87E1D8408337642172945A13C9C116D7F9336BE, ____methodKeys_2)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get__methodKeys_2() const { return ____methodKeys_2; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of__methodKeys_2() { return &____methodKeys_2; }
	inline void set__methodKeys_2(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		____methodKeys_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____methodKeys_2), (void*)value);
	}

	inline static int32_t get_offset_of__ownProperties_3() { return static_cast<int32_t>(offsetof(MessageDictionary_tF87E1D8408337642172945A13C9C116D7F9336BE, ____ownProperties_3)); }
	inline bool get__ownProperties_3() const { return ____ownProperties_3; }
	inline bool* get_address_of__ownProperties_3() { return &____ownProperties_3; }
	inline void set__ownProperties_3(bool value)
	{
		____ownProperties_3 = value;
	}
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

// System.Nullable`1<System.Boolean>
struct Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3 
{
public:
	// T System.Nullable`1::value
	bool ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3, ___value_0)); }
	inline bool get_value_0() const { return ___value_0; }
	inline bool* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(bool value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
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


// Windows.Foundation.DateTime
struct DateTime_t7C967DBDDE4CAEAA8B5AEB61E36309BCD7D26B8C 
{
public:
	// System.Int64 Windows.Foundation.DateTime::UniversalTime
	int64_t ___UniversalTime_0;

public:
	inline static int32_t get_offset_of_UniversalTime_0() { return static_cast<int32_t>(offsetof(DateTime_t7C967DBDDE4CAEAA8B5AEB61E36309BCD7D26B8C, ___UniversalTime_0)); }
	inline int64_t get_UniversalTime_0() const { return ___UniversalTime_0; }
	inline int64_t* get_address_of_UniversalTime_0() { return &___UniversalTime_0; }
	inline void set_UniversalTime_0(int64_t value)
	{
		___UniversalTime_0 = value;
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


// System.Guid
struct Guid_t 
{
public:
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

public:
	inline static int32_t get_offset_of__a_1() { return static_cast<int32_t>(offsetof(Guid_t, ____a_1)); }
	inline int32_t get__a_1() const { return ____a_1; }
	inline int32_t* get_address_of__a_1() { return &____a_1; }
	inline void set__a_1(int32_t value)
	{
		____a_1 = value;
	}

	inline static int32_t get_offset_of__b_2() { return static_cast<int32_t>(offsetof(Guid_t, ____b_2)); }
	inline int16_t get__b_2() const { return ____b_2; }
	inline int16_t* get_address_of__b_2() { return &____b_2; }
	inline void set__b_2(int16_t value)
	{
		____b_2 = value;
	}

	inline static int32_t get_offset_of__c_3() { return static_cast<int32_t>(offsetof(Guid_t, ____c_3)); }
	inline int16_t get__c_3() const { return ____c_3; }
	inline int16_t* get_address_of__c_3() { return &____c_3; }
	inline void set__c_3(int16_t value)
	{
		____c_3 = value;
	}

	inline static int32_t get_offset_of__d_4() { return static_cast<int32_t>(offsetof(Guid_t, ____d_4)); }
	inline uint8_t get__d_4() const { return ____d_4; }
	inline uint8_t* get_address_of__d_4() { return &____d_4; }
	inline void set__d_4(uint8_t value)
	{
		____d_4 = value;
	}

	inline static int32_t get_offset_of__e_5() { return static_cast<int32_t>(offsetof(Guid_t, ____e_5)); }
	inline uint8_t get__e_5() const { return ____e_5; }
	inline uint8_t* get_address_of__e_5() { return &____e_5; }
	inline void set__e_5(uint8_t value)
	{
		____e_5 = value;
	}

	inline static int32_t get_offset_of__f_6() { return static_cast<int32_t>(offsetof(Guid_t, ____f_6)); }
	inline uint8_t get__f_6() const { return ____f_6; }
	inline uint8_t* get_address_of__f_6() { return &____f_6; }
	inline void set__f_6(uint8_t value)
	{
		____f_6 = value;
	}

	inline static int32_t get_offset_of__g_7() { return static_cast<int32_t>(offsetof(Guid_t, ____g_7)); }
	inline uint8_t get__g_7() const { return ____g_7; }
	inline uint8_t* get_address_of__g_7() { return &____g_7; }
	inline void set__g_7(uint8_t value)
	{
		____g_7 = value;
	}

	inline static int32_t get_offset_of__h_8() { return static_cast<int32_t>(offsetof(Guid_t, ____h_8)); }
	inline uint8_t get__h_8() const { return ____h_8; }
	inline uint8_t* get_address_of__h_8() { return &____h_8; }
	inline void set__h_8(uint8_t value)
	{
		____h_8 = value;
	}

	inline static int32_t get_offset_of__i_9() { return static_cast<int32_t>(offsetof(Guid_t, ____i_9)); }
	inline uint8_t get__i_9() const { return ____i_9; }
	inline uint8_t* get_address_of__i_9() { return &____i_9; }
	inline void set__i_9(uint8_t value)
	{
		____i_9 = value;
	}

	inline static int32_t get_offset_of__j_10() { return static_cast<int32_t>(offsetof(Guid_t, ____j_10)); }
	inline uint8_t get__j_10() const { return ____j_10; }
	inline uint8_t* get_address_of__j_10() { return &____j_10; }
	inline void set__j_10(uint8_t value)
	{
		____j_10 = value;
	}

	inline static int32_t get_offset_of__k_11() { return static_cast<int32_t>(offsetof(Guid_t, ____k_11)); }
	inline uint8_t get__k_11() const { return ____k_11; }
	inline uint8_t* get_address_of__k_11() { return &____k_11; }
	inline void set__k_11(uint8_t value)
	{
		____k_11 = value;
	}
};

struct Guid_t_StaticFields
{
public:
	// System.Guid System.Guid::Empty
	Guid_t  ___Empty_0;
	// System.Object System.Guid::_rngAccess
	RuntimeObject * ____rngAccess_12;
	// System.Security.Cryptography.RandomNumberGenerator System.Guid::_rng
	RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 * ____rng_13;
	// System.Security.Cryptography.RandomNumberGenerator System.Guid::_fastRng
	RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 * ____fastRng_14;

public:
	inline static int32_t get_offset_of_Empty_0() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ___Empty_0)); }
	inline Guid_t  get_Empty_0() const { return ___Empty_0; }
	inline Guid_t * get_address_of_Empty_0() { return &___Empty_0; }
	inline void set_Empty_0(Guid_t  value)
	{
		___Empty_0 = value;
	}

	inline static int32_t get_offset_of__rngAccess_12() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ____rngAccess_12)); }
	inline RuntimeObject * get__rngAccess_12() const { return ____rngAccess_12; }
	inline RuntimeObject ** get_address_of__rngAccess_12() { return &____rngAccess_12; }
	inline void set__rngAccess_12(RuntimeObject * value)
	{
		____rngAccess_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____rngAccess_12), (void*)value);
	}

	inline static int32_t get_offset_of__rng_13() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ____rng_13)); }
	inline RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 * get__rng_13() const { return ____rng_13; }
	inline RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 ** get_address_of__rng_13() { return &____rng_13; }
	inline void set__rng_13(RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 * value)
	{
		____rng_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____rng_13), (void*)value);
	}

	inline static int32_t get_offset_of__fastRng_14() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ____fastRng_14)); }
	inline RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 * get__fastRng_14() const { return ____fastRng_14; }
	inline RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 ** get_address_of__fastRng_14() { return &____fastRng_14; }
	inline void set__fastRng_14(RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 * value)
	{
		____fastRng_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____fastRng_14), (void*)value);
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


// OpenCvSharp.MatType
struct MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523 
{
public:
	// System.Int32 OpenCvSharp.MatType::Value
	int32_t ___Value_0;

public:
	inline static int32_t get_offset_of_Value_0() { return static_cast<int32_t>(offsetof(MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523, ___Value_0)); }
	inline int32_t get_Value_0() const { return ___Value_0; }
	inline int32_t* get_address_of_Value_0() { return &___Value_0; }
	inline void set_Value_0(int32_t value)
	{
		___Value_0 = value;
	}
};

struct MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523_StaticFields
{
public:
	// OpenCvSharp.MatType OpenCvSharp.MatType::CV_8UC1
	MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523  ___CV_8UC1_12;
	// OpenCvSharp.MatType OpenCvSharp.MatType::CV_8UC2
	MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523  ___CV_8UC2_13;
	// OpenCvSharp.MatType OpenCvSharp.MatType::CV_8UC3
	MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523  ___CV_8UC3_14;
	// OpenCvSharp.MatType OpenCvSharp.MatType::CV_8UC4
	MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523  ___CV_8UC4_15;
	// OpenCvSharp.MatType OpenCvSharp.MatType::CV_8SC1
	MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523  ___CV_8SC1_16;
	// OpenCvSharp.MatType OpenCvSharp.MatType::CV_8SC2
	MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523  ___CV_8SC2_17;
	// OpenCvSharp.MatType OpenCvSharp.MatType::CV_8SC3
	MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523  ___CV_8SC3_18;
	// OpenCvSharp.MatType OpenCvSharp.MatType::CV_8SC4
	MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523  ___CV_8SC4_19;
	// OpenCvSharp.MatType OpenCvSharp.MatType::CV_16UC1
	MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523  ___CV_16UC1_20;
	// OpenCvSharp.MatType OpenCvSharp.MatType::CV_16UC2
	MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523  ___CV_16UC2_21;
	// OpenCvSharp.MatType OpenCvSharp.MatType::CV_16UC3
	MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523  ___CV_16UC3_22;
	// OpenCvSharp.MatType OpenCvSharp.MatType::CV_16UC4
	MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523  ___CV_16UC4_23;
	// OpenCvSharp.MatType OpenCvSharp.MatType::CV_16SC1
	MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523  ___CV_16SC1_24;
	// OpenCvSharp.MatType OpenCvSharp.MatType::CV_16SC2
	MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523  ___CV_16SC2_25;
	// OpenCvSharp.MatType OpenCvSharp.MatType::CV_16SC3
	MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523  ___CV_16SC3_26;
	// OpenCvSharp.MatType OpenCvSharp.MatType::CV_16SC4
	MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523  ___CV_16SC4_27;
	// OpenCvSharp.MatType OpenCvSharp.MatType::CV_32SC1
	MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523  ___CV_32SC1_28;
	// OpenCvSharp.MatType OpenCvSharp.MatType::CV_32SC2
	MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523  ___CV_32SC2_29;
	// OpenCvSharp.MatType OpenCvSharp.MatType::CV_32SC3
	MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523  ___CV_32SC3_30;
	// OpenCvSharp.MatType OpenCvSharp.MatType::CV_32SC4
	MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523  ___CV_32SC4_31;
	// OpenCvSharp.MatType OpenCvSharp.MatType::CV_32FC1
	MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523  ___CV_32FC1_32;
	// OpenCvSharp.MatType OpenCvSharp.MatType::CV_32FC2
	MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523  ___CV_32FC2_33;
	// OpenCvSharp.MatType OpenCvSharp.MatType::CV_32FC3
	MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523  ___CV_32FC3_34;
	// OpenCvSharp.MatType OpenCvSharp.MatType::CV_32FC4
	MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523  ___CV_32FC4_35;
	// OpenCvSharp.MatType OpenCvSharp.MatType::CV_64FC1
	MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523  ___CV_64FC1_36;
	// OpenCvSharp.MatType OpenCvSharp.MatType::CV_64FC2
	MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523  ___CV_64FC2_37;
	// OpenCvSharp.MatType OpenCvSharp.MatType::CV_64FC3
	MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523  ___CV_64FC3_38;
	// OpenCvSharp.MatType OpenCvSharp.MatType::CV_64FC4
	MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523  ___CV_64FC4_39;

public:
	inline static int32_t get_offset_of_CV_8UC1_12() { return static_cast<int32_t>(offsetof(MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523_StaticFields, ___CV_8UC1_12)); }
	inline MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523  get_CV_8UC1_12() const { return ___CV_8UC1_12; }
	inline MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523 * get_address_of_CV_8UC1_12() { return &___CV_8UC1_12; }
	inline void set_CV_8UC1_12(MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523  value)
	{
		___CV_8UC1_12 = value;
	}

	inline static int32_t get_offset_of_CV_8UC2_13() { return static_cast<int32_t>(offsetof(MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523_StaticFields, ___CV_8UC2_13)); }
	inline MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523  get_CV_8UC2_13() const { return ___CV_8UC2_13; }
	inline MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523 * get_address_of_CV_8UC2_13() { return &___CV_8UC2_13; }
	inline void set_CV_8UC2_13(MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523  value)
	{
		___CV_8UC2_13 = value;
	}

	inline static int32_t get_offset_of_CV_8UC3_14() { return static_cast<int32_t>(offsetof(MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523_StaticFields, ___CV_8UC3_14)); }
	inline MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523  get_CV_8UC3_14() const { return ___CV_8UC3_14; }
	inline MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523 * get_address_of_CV_8UC3_14() { return &___CV_8UC3_14; }
	inline void set_CV_8UC3_14(MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523  value)
	{
		___CV_8UC3_14 = value;
	}

	inline static int32_t get_offset_of_CV_8UC4_15() { return static_cast<int32_t>(offsetof(MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523_StaticFields, ___CV_8UC4_15)); }
	inline MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523  get_CV_8UC4_15() const { return ___CV_8UC4_15; }
	inline MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523 * get_address_of_CV_8UC4_15() { return &___CV_8UC4_15; }
	inline void set_CV_8UC4_15(MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523  value)
	{
		___CV_8UC4_15 = value;
	}

	inline static int32_t get_offset_of_CV_8SC1_16() { return static_cast<int32_t>(offsetof(MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523_StaticFields, ___CV_8SC1_16)); }
	inline MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523  get_CV_8SC1_16() const { return ___CV_8SC1_16; }
	inline MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523 * get_address_of_CV_8SC1_16() { return &___CV_8SC1_16; }
	inline void set_CV_8SC1_16(MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523  value)
	{
		___CV_8SC1_16 = value;
	}

	inline static int32_t get_offset_of_CV_8SC2_17() { return static_cast<int32_t>(offsetof(MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523_StaticFields, ___CV_8SC2_17)); }
	inline MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523  get_CV_8SC2_17() const { return ___CV_8SC2_17; }
	inline MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523 * get_address_of_CV_8SC2_17() { return &___CV_8SC2_17; }
	inline void set_CV_8SC2_17(MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523  value)
	{
		___CV_8SC2_17 = value;
	}

	inline static int32_t get_offset_of_CV_8SC3_18() { return static_cast<int32_t>(offsetof(MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523_StaticFields, ___CV_8SC3_18)); }
	inline MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523  get_CV_8SC3_18() const { return ___CV_8SC3_18; }
	inline MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523 * get_address_of_CV_8SC3_18() { return &___CV_8SC3_18; }
	inline void set_CV_8SC3_18(MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523  value)
	{
		___CV_8SC3_18 = value;
	}

	inline static int32_t get_offset_of_CV_8SC4_19() { return static_cast<int32_t>(offsetof(MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523_StaticFields, ___CV_8SC4_19)); }
	inline MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523  get_CV_8SC4_19() const { return ___CV_8SC4_19; }
	inline MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523 * get_address_of_CV_8SC4_19() { return &___CV_8SC4_19; }
	inline void set_CV_8SC4_19(MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523  value)
	{
		___CV_8SC4_19 = value;
	}

	inline static int32_t get_offset_of_CV_16UC1_20() { return static_cast<int32_t>(offsetof(MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523_StaticFields, ___CV_16UC1_20)); }
	inline MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523  get_CV_16UC1_20() const { return ___CV_16UC1_20; }
	inline MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523 * get_address_of_CV_16UC1_20() { return &___CV_16UC1_20; }
	inline void set_CV_16UC1_20(MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523  value)
	{
		___CV_16UC1_20 = value;
	}

	inline static int32_t get_offset_of_CV_16UC2_21() { return static_cast<int32_t>(offsetof(MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523_StaticFields, ___CV_16UC2_21)); }
	inline MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523  get_CV_16UC2_21() const { return ___CV_16UC2_21; }
	inline MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523 * get_address_of_CV_16UC2_21() { return &___CV_16UC2_21; }
	inline void set_CV_16UC2_21(MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523  value)
	{
		___CV_16UC2_21 = value;
	}

	inline static int32_t get_offset_of_CV_16UC3_22() { return static_cast<int32_t>(offsetof(MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523_StaticFields, ___CV_16UC3_22)); }
	inline MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523  get_CV_16UC3_22() const { return ___CV_16UC3_22; }
	inline MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523 * get_address_of_CV_16UC3_22() { return &___CV_16UC3_22; }
	inline void set_CV_16UC3_22(MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523  value)
	{
		___CV_16UC3_22 = value;
	}

	inline static int32_t get_offset_of_CV_16UC4_23() { return static_cast<int32_t>(offsetof(MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523_StaticFields, ___CV_16UC4_23)); }
	inline MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523  get_CV_16UC4_23() const { return ___CV_16UC4_23; }
	inline MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523 * get_address_of_CV_16UC4_23() { return &___CV_16UC4_23; }
	inline void set_CV_16UC4_23(MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523  value)
	{
		___CV_16UC4_23 = value;
	}

	inline static int32_t get_offset_of_CV_16SC1_24() { return static_cast<int32_t>(offsetof(MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523_StaticFields, ___CV_16SC1_24)); }
	inline MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523  get_CV_16SC1_24() const { return ___CV_16SC1_24; }
	inline MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523 * get_address_of_CV_16SC1_24() { return &___CV_16SC1_24; }
	inline void set_CV_16SC1_24(MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523  value)
	{
		___CV_16SC1_24 = value;
	}

	inline static int32_t get_offset_of_CV_16SC2_25() { return static_cast<int32_t>(offsetof(MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523_StaticFields, ___CV_16SC2_25)); }
	inline MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523  get_CV_16SC2_25() const { return ___CV_16SC2_25; }
	inline MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523 * get_address_of_CV_16SC2_25() { return &___CV_16SC2_25; }
	inline void set_CV_16SC2_25(MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523  value)
	{
		___CV_16SC2_25 = value;
	}

	inline static int32_t get_offset_of_CV_16SC3_26() { return static_cast<int32_t>(offsetof(MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523_StaticFields, ___CV_16SC3_26)); }
	inline MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523  get_CV_16SC3_26() const { return ___CV_16SC3_26; }
	inline MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523 * get_address_of_CV_16SC3_26() { return &___CV_16SC3_26; }
	inline void set_CV_16SC3_26(MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523  value)
	{
		___CV_16SC3_26 = value;
	}

	inline static int32_t get_offset_of_CV_16SC4_27() { return static_cast<int32_t>(offsetof(MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523_StaticFields, ___CV_16SC4_27)); }
	inline MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523  get_CV_16SC4_27() const { return ___CV_16SC4_27; }
	inline MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523 * get_address_of_CV_16SC4_27() { return &___CV_16SC4_27; }
	inline void set_CV_16SC4_27(MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523  value)
	{
		___CV_16SC4_27 = value;
	}

	inline static int32_t get_offset_of_CV_32SC1_28() { return static_cast<int32_t>(offsetof(MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523_StaticFields, ___CV_32SC1_28)); }
	inline MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523  get_CV_32SC1_28() const { return ___CV_32SC1_28; }
	inline MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523 * get_address_of_CV_32SC1_28() { return &___CV_32SC1_28; }
	inline void set_CV_32SC1_28(MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523  value)
	{
		___CV_32SC1_28 = value;
	}

	inline static int32_t get_offset_of_CV_32SC2_29() { return static_cast<int32_t>(offsetof(MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523_StaticFields, ___CV_32SC2_29)); }
	inline MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523  get_CV_32SC2_29() const { return ___CV_32SC2_29; }
	inline MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523 * get_address_of_CV_32SC2_29() { return &___CV_32SC2_29; }
	inline void set_CV_32SC2_29(MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523  value)
	{
		___CV_32SC2_29 = value;
	}

	inline static int32_t get_offset_of_CV_32SC3_30() { return static_cast<int32_t>(offsetof(MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523_StaticFields, ___CV_32SC3_30)); }
	inline MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523  get_CV_32SC3_30() const { return ___CV_32SC3_30; }
	inline MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523 * get_address_of_CV_32SC3_30() { return &___CV_32SC3_30; }
	inline void set_CV_32SC3_30(MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523  value)
	{
		___CV_32SC3_30 = value;
	}

	inline static int32_t get_offset_of_CV_32SC4_31() { return static_cast<int32_t>(offsetof(MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523_StaticFields, ___CV_32SC4_31)); }
	inline MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523  get_CV_32SC4_31() const { return ___CV_32SC4_31; }
	inline MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523 * get_address_of_CV_32SC4_31() { return &___CV_32SC4_31; }
	inline void set_CV_32SC4_31(MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523  value)
	{
		___CV_32SC4_31 = value;
	}

	inline static int32_t get_offset_of_CV_32FC1_32() { return static_cast<int32_t>(offsetof(MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523_StaticFields, ___CV_32FC1_32)); }
	inline MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523  get_CV_32FC1_32() const { return ___CV_32FC1_32; }
	inline MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523 * get_address_of_CV_32FC1_32() { return &___CV_32FC1_32; }
	inline void set_CV_32FC1_32(MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523  value)
	{
		___CV_32FC1_32 = value;
	}

	inline static int32_t get_offset_of_CV_32FC2_33() { return static_cast<int32_t>(offsetof(MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523_StaticFields, ___CV_32FC2_33)); }
	inline MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523  get_CV_32FC2_33() const { return ___CV_32FC2_33; }
	inline MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523 * get_address_of_CV_32FC2_33() { return &___CV_32FC2_33; }
	inline void set_CV_32FC2_33(MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523  value)
	{
		___CV_32FC2_33 = value;
	}

	inline static int32_t get_offset_of_CV_32FC3_34() { return static_cast<int32_t>(offsetof(MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523_StaticFields, ___CV_32FC3_34)); }
	inline MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523  get_CV_32FC3_34() const { return ___CV_32FC3_34; }
	inline MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523 * get_address_of_CV_32FC3_34() { return &___CV_32FC3_34; }
	inline void set_CV_32FC3_34(MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523  value)
	{
		___CV_32FC3_34 = value;
	}

	inline static int32_t get_offset_of_CV_32FC4_35() { return static_cast<int32_t>(offsetof(MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523_StaticFields, ___CV_32FC4_35)); }
	inline MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523  get_CV_32FC4_35() const { return ___CV_32FC4_35; }
	inline MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523 * get_address_of_CV_32FC4_35() { return &___CV_32FC4_35; }
	inline void set_CV_32FC4_35(MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523  value)
	{
		___CV_32FC4_35 = value;
	}

	inline static int32_t get_offset_of_CV_64FC1_36() { return static_cast<int32_t>(offsetof(MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523_StaticFields, ___CV_64FC1_36)); }
	inline MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523  get_CV_64FC1_36() const { return ___CV_64FC1_36; }
	inline MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523 * get_address_of_CV_64FC1_36() { return &___CV_64FC1_36; }
	inline void set_CV_64FC1_36(MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523  value)
	{
		___CV_64FC1_36 = value;
	}

	inline static int32_t get_offset_of_CV_64FC2_37() { return static_cast<int32_t>(offsetof(MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523_StaticFields, ___CV_64FC2_37)); }
	inline MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523  get_CV_64FC2_37() const { return ___CV_64FC2_37; }
	inline MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523 * get_address_of_CV_64FC2_37() { return &___CV_64FC2_37; }
	inline void set_CV_64FC2_37(MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523  value)
	{
		___CV_64FC2_37 = value;
	}

	inline static int32_t get_offset_of_CV_64FC3_38() { return static_cast<int32_t>(offsetof(MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523_StaticFields, ___CV_64FC3_38)); }
	inline MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523  get_CV_64FC3_38() const { return ___CV_64FC3_38; }
	inline MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523 * get_address_of_CV_64FC3_38() { return &___CV_64FC3_38; }
	inline void set_CV_64FC3_38(MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523  value)
	{
		___CV_64FC3_38 = value;
	}

	inline static int32_t get_offset_of_CV_64FC4_39() { return static_cast<int32_t>(offsetof(MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523_StaticFields, ___CV_64FC4_39)); }
	inline MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523  get_CV_64FC4_39() const { return ___CV_64FC4_39; }
	inline MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523 * get_address_of_CV_64FC4_39() { return &___CV_64FC4_39; }
	inline void set_CV_64FC4_39(MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523  value)
	{
		___CV_64FC4_39 = value;
	}
};


// System.Numerics.Matrix4x4
struct Matrix4x4_t5B627955C6D80AF8F1D97A6466CB337DCEEB3504 
{
public:
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

public:
	inline static int32_t get_offset_of_M11_0() { return static_cast<int32_t>(offsetof(Matrix4x4_t5B627955C6D80AF8F1D97A6466CB337DCEEB3504, ___M11_0)); }
	inline float get_M11_0() const { return ___M11_0; }
	inline float* get_address_of_M11_0() { return &___M11_0; }
	inline void set_M11_0(float value)
	{
		___M11_0 = value;
	}

	inline static int32_t get_offset_of_M12_1() { return static_cast<int32_t>(offsetof(Matrix4x4_t5B627955C6D80AF8F1D97A6466CB337DCEEB3504, ___M12_1)); }
	inline float get_M12_1() const { return ___M12_1; }
	inline float* get_address_of_M12_1() { return &___M12_1; }
	inline void set_M12_1(float value)
	{
		___M12_1 = value;
	}

	inline static int32_t get_offset_of_M13_2() { return static_cast<int32_t>(offsetof(Matrix4x4_t5B627955C6D80AF8F1D97A6466CB337DCEEB3504, ___M13_2)); }
	inline float get_M13_2() const { return ___M13_2; }
	inline float* get_address_of_M13_2() { return &___M13_2; }
	inline void set_M13_2(float value)
	{
		___M13_2 = value;
	}

	inline static int32_t get_offset_of_M14_3() { return static_cast<int32_t>(offsetof(Matrix4x4_t5B627955C6D80AF8F1D97A6466CB337DCEEB3504, ___M14_3)); }
	inline float get_M14_3() const { return ___M14_3; }
	inline float* get_address_of_M14_3() { return &___M14_3; }
	inline void set_M14_3(float value)
	{
		___M14_3 = value;
	}

	inline static int32_t get_offset_of_M21_4() { return static_cast<int32_t>(offsetof(Matrix4x4_t5B627955C6D80AF8F1D97A6466CB337DCEEB3504, ___M21_4)); }
	inline float get_M21_4() const { return ___M21_4; }
	inline float* get_address_of_M21_4() { return &___M21_4; }
	inline void set_M21_4(float value)
	{
		___M21_4 = value;
	}

	inline static int32_t get_offset_of_M22_5() { return static_cast<int32_t>(offsetof(Matrix4x4_t5B627955C6D80AF8F1D97A6466CB337DCEEB3504, ___M22_5)); }
	inline float get_M22_5() const { return ___M22_5; }
	inline float* get_address_of_M22_5() { return &___M22_5; }
	inline void set_M22_5(float value)
	{
		___M22_5 = value;
	}

	inline static int32_t get_offset_of_M23_6() { return static_cast<int32_t>(offsetof(Matrix4x4_t5B627955C6D80AF8F1D97A6466CB337DCEEB3504, ___M23_6)); }
	inline float get_M23_6() const { return ___M23_6; }
	inline float* get_address_of_M23_6() { return &___M23_6; }
	inline void set_M23_6(float value)
	{
		___M23_6 = value;
	}

	inline static int32_t get_offset_of_M24_7() { return static_cast<int32_t>(offsetof(Matrix4x4_t5B627955C6D80AF8F1D97A6466CB337DCEEB3504, ___M24_7)); }
	inline float get_M24_7() const { return ___M24_7; }
	inline float* get_address_of_M24_7() { return &___M24_7; }
	inline void set_M24_7(float value)
	{
		___M24_7 = value;
	}

	inline static int32_t get_offset_of_M31_8() { return static_cast<int32_t>(offsetof(Matrix4x4_t5B627955C6D80AF8F1D97A6466CB337DCEEB3504, ___M31_8)); }
	inline float get_M31_8() const { return ___M31_8; }
	inline float* get_address_of_M31_8() { return &___M31_8; }
	inline void set_M31_8(float value)
	{
		___M31_8 = value;
	}

	inline static int32_t get_offset_of_M32_9() { return static_cast<int32_t>(offsetof(Matrix4x4_t5B627955C6D80AF8F1D97A6466CB337DCEEB3504, ___M32_9)); }
	inline float get_M32_9() const { return ___M32_9; }
	inline float* get_address_of_M32_9() { return &___M32_9; }
	inline void set_M32_9(float value)
	{
		___M32_9 = value;
	}

	inline static int32_t get_offset_of_M33_10() { return static_cast<int32_t>(offsetof(Matrix4x4_t5B627955C6D80AF8F1D97A6466CB337DCEEB3504, ___M33_10)); }
	inline float get_M33_10() const { return ___M33_10; }
	inline float* get_address_of_M33_10() { return &___M33_10; }
	inline void set_M33_10(float value)
	{
		___M33_10 = value;
	}

	inline static int32_t get_offset_of_M34_11() { return static_cast<int32_t>(offsetof(Matrix4x4_t5B627955C6D80AF8F1D97A6466CB337DCEEB3504, ___M34_11)); }
	inline float get_M34_11() const { return ___M34_11; }
	inline float* get_address_of_M34_11() { return &___M34_11; }
	inline void set_M34_11(float value)
	{
		___M34_11 = value;
	}

	inline static int32_t get_offset_of_M41_12() { return static_cast<int32_t>(offsetof(Matrix4x4_t5B627955C6D80AF8F1D97A6466CB337DCEEB3504, ___M41_12)); }
	inline float get_M41_12() const { return ___M41_12; }
	inline float* get_address_of_M41_12() { return &___M41_12; }
	inline void set_M41_12(float value)
	{
		___M41_12 = value;
	}

	inline static int32_t get_offset_of_M42_13() { return static_cast<int32_t>(offsetof(Matrix4x4_t5B627955C6D80AF8F1D97A6466CB337DCEEB3504, ___M42_13)); }
	inline float get_M42_13() const { return ___M42_13; }
	inline float* get_address_of_M42_13() { return &___M42_13; }
	inline void set_M42_13(float value)
	{
		___M42_13 = value;
	}

	inline static int32_t get_offset_of_M43_14() { return static_cast<int32_t>(offsetof(Matrix4x4_t5B627955C6D80AF8F1D97A6466CB337DCEEB3504, ___M43_14)); }
	inline float get_M43_14() const { return ___M43_14; }
	inline float* get_address_of_M43_14() { return &___M43_14; }
	inline void set_M43_14(float value)
	{
		___M43_14 = value;
	}

	inline static int32_t get_offset_of_M44_15() { return static_cast<int32_t>(offsetof(Matrix4x4_t5B627955C6D80AF8F1D97A6466CB337DCEEB3504, ___M44_15)); }
	inline float get_M44_15() const { return ___M44_15; }
	inline float* get_address_of_M44_15() { return &___M44_15; }
	inline void set_M44_15(float value)
	{
		___M44_15 = value;
	}
};

struct Matrix4x4_t5B627955C6D80AF8F1D97A6466CB337DCEEB3504_StaticFields
{
public:
	// System.Numerics.Matrix4x4 System.Numerics.Matrix4x4::_identity
	Matrix4x4_t5B627955C6D80AF8F1D97A6466CB337DCEEB3504  ____identity_16;

public:
	inline static int32_t get_offset_of__identity_16() { return static_cast<int32_t>(offsetof(Matrix4x4_t5B627955C6D80AF8F1D97A6466CB337DCEEB3504_StaticFields, ____identity_16)); }
	inline Matrix4x4_t5B627955C6D80AF8F1D97A6466CB337DCEEB3504  get__identity_16() const { return ____identity_16; }
	inline Matrix4x4_t5B627955C6D80AF8F1D97A6466CB337DCEEB3504 * get_address_of__identity_16() { return &____identity_16; }
	inline void set__identity_16(Matrix4x4_t5B627955C6D80AF8F1D97A6466CB337DCEEB3504  value)
	{
		____identity_16 = value;
	}
};


// Windows.Foundation.Numerics.Matrix4x4
struct Matrix4x4_tCA3F3FDAF7C260FCEFC8AE7347180927246F3D82 
{
public:
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

public:
	inline static int32_t get_offset_of_M11_0() { return static_cast<int32_t>(offsetof(Matrix4x4_tCA3F3FDAF7C260FCEFC8AE7347180927246F3D82, ___M11_0)); }
	inline float get_M11_0() const { return ___M11_0; }
	inline float* get_address_of_M11_0() { return &___M11_0; }
	inline void set_M11_0(float value)
	{
		___M11_0 = value;
	}

	inline static int32_t get_offset_of_M12_1() { return static_cast<int32_t>(offsetof(Matrix4x4_tCA3F3FDAF7C260FCEFC8AE7347180927246F3D82, ___M12_1)); }
	inline float get_M12_1() const { return ___M12_1; }
	inline float* get_address_of_M12_1() { return &___M12_1; }
	inline void set_M12_1(float value)
	{
		___M12_1 = value;
	}

	inline static int32_t get_offset_of_M13_2() { return static_cast<int32_t>(offsetof(Matrix4x4_tCA3F3FDAF7C260FCEFC8AE7347180927246F3D82, ___M13_2)); }
	inline float get_M13_2() const { return ___M13_2; }
	inline float* get_address_of_M13_2() { return &___M13_2; }
	inline void set_M13_2(float value)
	{
		___M13_2 = value;
	}

	inline static int32_t get_offset_of_M14_3() { return static_cast<int32_t>(offsetof(Matrix4x4_tCA3F3FDAF7C260FCEFC8AE7347180927246F3D82, ___M14_3)); }
	inline float get_M14_3() const { return ___M14_3; }
	inline float* get_address_of_M14_3() { return &___M14_3; }
	inline void set_M14_3(float value)
	{
		___M14_3 = value;
	}

	inline static int32_t get_offset_of_M21_4() { return static_cast<int32_t>(offsetof(Matrix4x4_tCA3F3FDAF7C260FCEFC8AE7347180927246F3D82, ___M21_4)); }
	inline float get_M21_4() const { return ___M21_4; }
	inline float* get_address_of_M21_4() { return &___M21_4; }
	inline void set_M21_4(float value)
	{
		___M21_4 = value;
	}

	inline static int32_t get_offset_of_M22_5() { return static_cast<int32_t>(offsetof(Matrix4x4_tCA3F3FDAF7C260FCEFC8AE7347180927246F3D82, ___M22_5)); }
	inline float get_M22_5() const { return ___M22_5; }
	inline float* get_address_of_M22_5() { return &___M22_5; }
	inline void set_M22_5(float value)
	{
		___M22_5 = value;
	}

	inline static int32_t get_offset_of_M23_6() { return static_cast<int32_t>(offsetof(Matrix4x4_tCA3F3FDAF7C260FCEFC8AE7347180927246F3D82, ___M23_6)); }
	inline float get_M23_6() const { return ___M23_6; }
	inline float* get_address_of_M23_6() { return &___M23_6; }
	inline void set_M23_6(float value)
	{
		___M23_6 = value;
	}

	inline static int32_t get_offset_of_M24_7() { return static_cast<int32_t>(offsetof(Matrix4x4_tCA3F3FDAF7C260FCEFC8AE7347180927246F3D82, ___M24_7)); }
	inline float get_M24_7() const { return ___M24_7; }
	inline float* get_address_of_M24_7() { return &___M24_7; }
	inline void set_M24_7(float value)
	{
		___M24_7 = value;
	}

	inline static int32_t get_offset_of_M31_8() { return static_cast<int32_t>(offsetof(Matrix4x4_tCA3F3FDAF7C260FCEFC8AE7347180927246F3D82, ___M31_8)); }
	inline float get_M31_8() const { return ___M31_8; }
	inline float* get_address_of_M31_8() { return &___M31_8; }
	inline void set_M31_8(float value)
	{
		___M31_8 = value;
	}

	inline static int32_t get_offset_of_M32_9() { return static_cast<int32_t>(offsetof(Matrix4x4_tCA3F3FDAF7C260FCEFC8AE7347180927246F3D82, ___M32_9)); }
	inline float get_M32_9() const { return ___M32_9; }
	inline float* get_address_of_M32_9() { return &___M32_9; }
	inline void set_M32_9(float value)
	{
		___M32_9 = value;
	}

	inline static int32_t get_offset_of_M33_10() { return static_cast<int32_t>(offsetof(Matrix4x4_tCA3F3FDAF7C260FCEFC8AE7347180927246F3D82, ___M33_10)); }
	inline float get_M33_10() const { return ___M33_10; }
	inline float* get_address_of_M33_10() { return &___M33_10; }
	inline void set_M33_10(float value)
	{
		___M33_10 = value;
	}

	inline static int32_t get_offset_of_M34_11() { return static_cast<int32_t>(offsetof(Matrix4x4_tCA3F3FDAF7C260FCEFC8AE7347180927246F3D82, ___M34_11)); }
	inline float get_M34_11() const { return ___M34_11; }
	inline float* get_address_of_M34_11() { return &___M34_11; }
	inline void set_M34_11(float value)
	{
		___M34_11 = value;
	}

	inline static int32_t get_offset_of_M41_12() { return static_cast<int32_t>(offsetof(Matrix4x4_tCA3F3FDAF7C260FCEFC8AE7347180927246F3D82, ___M41_12)); }
	inline float get_M41_12() const { return ___M41_12; }
	inline float* get_address_of_M41_12() { return &___M41_12; }
	inline void set_M41_12(float value)
	{
		___M41_12 = value;
	}

	inline static int32_t get_offset_of_M42_13() { return static_cast<int32_t>(offsetof(Matrix4x4_tCA3F3FDAF7C260FCEFC8AE7347180927246F3D82, ___M42_13)); }
	inline float get_M42_13() const { return ___M42_13; }
	inline float* get_address_of_M42_13() { return &___M42_13; }
	inline void set_M42_13(float value)
	{
		___M42_13 = value;
	}

	inline static int32_t get_offset_of_M43_14() { return static_cast<int32_t>(offsetof(Matrix4x4_tCA3F3FDAF7C260FCEFC8AE7347180927246F3D82, ___M43_14)); }
	inline float get_M43_14() const { return ___M43_14; }
	inline float* get_address_of_M43_14() { return &___M43_14; }
	inline void set_M43_14(float value)
	{
		___M43_14 = value;
	}

	inline static int32_t get_offset_of_M44_15() { return static_cast<int32_t>(offsetof(Matrix4x4_tCA3F3FDAF7C260FCEFC8AE7347180927246F3D82, ___M44_15)); }
	inline float get_M44_15() const { return ___M44_15; }
	inline float* get_address_of_M44_15() { return &___M44_15; }
	inline void set_M44_15(float value)
	{
		___M44_15 = value;
	}
};


// System.Runtime.Remoting.Messaging.MethodReturnDictionary
struct MethodReturnDictionary_tCD3B3B0F69F53EF7653CB5E6B175628E8FD54531  : public MessageDictionary_tF87E1D8408337642172945A13C9C116D7F9336BE
{
public:

public:
};

struct MethodReturnDictionary_tCD3B3B0F69F53EF7653CB5E6B175628E8FD54531_StaticFields
{
public:
	// System.String[] System.Runtime.Remoting.Messaging.MethodReturnDictionary::InternalReturnKeys
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___InternalReturnKeys_4;
	// System.String[] System.Runtime.Remoting.Messaging.MethodReturnDictionary::InternalExceptionKeys
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___InternalExceptionKeys_5;

public:
	inline static int32_t get_offset_of_InternalReturnKeys_4() { return static_cast<int32_t>(offsetof(MethodReturnDictionary_tCD3B3B0F69F53EF7653CB5E6B175628E8FD54531_StaticFields, ___InternalReturnKeys_4)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_InternalReturnKeys_4() const { return ___InternalReturnKeys_4; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_InternalReturnKeys_4() { return &___InternalReturnKeys_4; }
	inline void set_InternalReturnKeys_4(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___InternalReturnKeys_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___InternalReturnKeys_4), (void*)value);
	}

	inline static int32_t get_offset_of_InternalExceptionKeys_5() { return static_cast<int32_t>(offsetof(MethodReturnDictionary_tCD3B3B0F69F53EF7653CB5E6B175628E8FD54531_StaticFields, ___InternalExceptionKeys_5)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_InternalExceptionKeys_5() const { return ___InternalExceptionKeys_5; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_InternalExceptionKeys_5() { return &___InternalExceptionKeys_5; }
	inline void set_InternalExceptionKeys_5(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___InternalExceptionKeys_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___InternalExceptionKeys_5), (void*)value);
	}
};


// Windows.Foundation.Point
struct Point_t155CCDBE84DC37ABFA2CBB4649526701CA3A5578 
{
public:
	// System.Single Windows.Foundation.Point::_x
	float ____x_0;
	// System.Single Windows.Foundation.Point::_y
	float ____y_1;

public:
	inline static int32_t get_offset_of__x_0() { return static_cast<int32_t>(offsetof(Point_t155CCDBE84DC37ABFA2CBB4649526701CA3A5578, ____x_0)); }
	inline float get__x_0() const { return ____x_0; }
	inline float* get_address_of__x_0() { return &____x_0; }
	inline void set__x_0(float value)
	{
		____x_0 = value;
	}

	inline static int32_t get_offset_of__y_1() { return static_cast<int32_t>(offsetof(Point_t155CCDBE84DC37ABFA2CBB4649526701CA3A5578, ____y_1)); }
	inline float get__y_1() const { return ____y_1; }
	inline float* get_address_of__y_1() { return &____y_1; }
	inline void set__y_1(float value)
	{
		____y_1 = value;
	}
};


// Windows.Foundation.Rect
struct Rect_tC45F1DDF39812623644DE296D8057A4958176627 
{
public:
	// System.Single Windows.Foundation.Rect::_x
	float ____x_0;
	// System.Single Windows.Foundation.Rect::_y
	float ____y_1;
	// System.Single Windows.Foundation.Rect::_width
	float ____width_2;
	// System.Single Windows.Foundation.Rect::_height
	float ____height_3;

public:
	inline static int32_t get_offset_of__x_0() { return static_cast<int32_t>(offsetof(Rect_tC45F1DDF39812623644DE296D8057A4958176627, ____x_0)); }
	inline float get__x_0() const { return ____x_0; }
	inline float* get_address_of__x_0() { return &____x_0; }
	inline void set__x_0(float value)
	{
		____x_0 = value;
	}

	inline static int32_t get_offset_of__y_1() { return static_cast<int32_t>(offsetof(Rect_tC45F1DDF39812623644DE296D8057A4958176627, ____y_1)); }
	inline float get__y_1() const { return ____y_1; }
	inline float* get_address_of__y_1() { return &____y_1; }
	inline void set__y_1(float value)
	{
		____y_1 = value;
	}

	inline static int32_t get_offset_of__width_2() { return static_cast<int32_t>(offsetof(Rect_tC45F1DDF39812623644DE296D8057A4958176627, ____width_2)); }
	inline float get__width_2() const { return ____width_2; }
	inline float* get_address_of__width_2() { return &____width_2; }
	inline void set__width_2(float value)
	{
		____width_2 = value;
	}

	inline static int32_t get_offset_of__height_3() { return static_cast<int32_t>(offsetof(Rect_tC45F1DDF39812623644DE296D8057A4958176627, ____height_3)); }
	inline float get__height_3() const { return ____height_3; }
	inline float* get_address_of__height_3() { return &____height_3; }
	inline void set__height_3(float value)
	{
		____height_3 = value;
	}
};


// Windows.Foundation.Size
struct Size_tDA924E69AB75296FE3B5E81811B78FD56173BB92 
{
public:
	// System.Single Windows.Foundation.Size::_width
	float ____width_0;
	// System.Single Windows.Foundation.Size::_height
	float ____height_1;

public:
	inline static int32_t get_offset_of__width_0() { return static_cast<int32_t>(offsetof(Size_tDA924E69AB75296FE3B5E81811B78FD56173BB92, ____width_0)); }
	inline float get__width_0() const { return ____width_0; }
	inline float* get_address_of__width_0() { return &____width_0; }
	inline void set__width_0(float value)
	{
		____width_0 = value;
	}

	inline static int32_t get_offset_of__height_1() { return static_cast<int32_t>(offsetof(Size_tDA924E69AB75296FE3B5E81811B78FD56173BB92, ____height_1)); }
	inline float get__height_1() const { return ____height_1; }
	inline float* get_address_of__height_1() { return &____height_1; }
	inline void set__height_1(float value)
	{
		____height_1 = value;
	}
};


// System.IO.Stream
struct Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB  : public MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8
{
public:
	// System.IO.Stream/ReadWriteTask System.IO.Stream::_activeReadWriteTask
	ReadWriteTask_t32CD2C230786712954C1DB518DBE420A1F4C7974 * ____activeReadWriteTask_2;
	// System.Threading.SemaphoreSlim System.IO.Stream::_asyncActiveSemaphore
	SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385 * ____asyncActiveSemaphore_3;

public:
	inline static int32_t get_offset_of__activeReadWriteTask_2() { return static_cast<int32_t>(offsetof(Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB, ____activeReadWriteTask_2)); }
	inline ReadWriteTask_t32CD2C230786712954C1DB518DBE420A1F4C7974 * get__activeReadWriteTask_2() const { return ____activeReadWriteTask_2; }
	inline ReadWriteTask_t32CD2C230786712954C1DB518DBE420A1F4C7974 ** get_address_of__activeReadWriteTask_2() { return &____activeReadWriteTask_2; }
	inline void set__activeReadWriteTask_2(ReadWriteTask_t32CD2C230786712954C1DB518DBE420A1F4C7974 * value)
	{
		____activeReadWriteTask_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____activeReadWriteTask_2), (void*)value);
	}

	inline static int32_t get_offset_of__asyncActiveSemaphore_3() { return static_cast<int32_t>(offsetof(Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB, ____asyncActiveSemaphore_3)); }
	inline SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385 * get__asyncActiveSemaphore_3() const { return ____asyncActiveSemaphore_3; }
	inline SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385 ** get_address_of__asyncActiveSemaphore_3() { return &____asyncActiveSemaphore_3; }
	inline void set__asyncActiveSemaphore_3(SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385 * value)
	{
		____asyncActiveSemaphore_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____asyncActiveSemaphore_3), (void*)value);
	}
};

struct Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB_StaticFields
{
public:
	// System.IO.Stream System.IO.Stream::Null
	Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * ___Null_1;

public:
	inline static int32_t get_offset_of_Null_1() { return static_cast<int32_t>(offsetof(Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB_StaticFields, ___Null_1)); }
	inline Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * get_Null_1() const { return ___Null_1; }
	inline Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB ** get_address_of_Null_1() { return &___Null_1; }
	inline void set_Null_1(Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * value)
	{
		___Null_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Null_1), (void*)value);
	}
};


// UnityEngine.Vector2
struct Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 
{
public:
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}
};

struct Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields
{
public:
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___negativeInfinityVector_9;

public:
	inline static int32_t get_offset_of_zeroVector_2() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___zeroVector_2)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_zeroVector_2() const { return ___zeroVector_2; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_zeroVector_2() { return &___zeroVector_2; }
	inline void set_zeroVector_2(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___zeroVector_2 = value;
	}

	inline static int32_t get_offset_of_oneVector_3() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___oneVector_3)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_oneVector_3() const { return ___oneVector_3; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_oneVector_3() { return &___oneVector_3; }
	inline void set_oneVector_3(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___oneVector_3 = value;
	}

	inline static int32_t get_offset_of_upVector_4() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___upVector_4)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_upVector_4() const { return ___upVector_4; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_upVector_4() { return &___upVector_4; }
	inline void set_upVector_4(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___upVector_4 = value;
	}

	inline static int32_t get_offset_of_downVector_5() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___downVector_5)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_downVector_5() const { return ___downVector_5; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_downVector_5() { return &___downVector_5; }
	inline void set_downVector_5(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___downVector_5 = value;
	}

	inline static int32_t get_offset_of_leftVector_6() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___leftVector_6)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_leftVector_6() const { return ___leftVector_6; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_leftVector_6() { return &___leftVector_6; }
	inline void set_leftVector_6(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___leftVector_6 = value;
	}

	inline static int32_t get_offset_of_rightVector_7() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___rightVector_7)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_rightVector_7() const { return ___rightVector_7; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_rightVector_7() { return &___rightVector_7; }
	inline void set_rightVector_7(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___rightVector_7 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___positiveInfinityVector_8)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_positiveInfinityVector_8() const { return ___positiveInfinityVector_8; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_positiveInfinityVector_8() { return &___positiveInfinityVector_8; }
	inline void set_positiveInfinityVector_8(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___positiveInfinityVector_8 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_9() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___negativeInfinityVector_9)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_negativeInfinityVector_9() const { return ___negativeInfinityVector_9; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_negativeInfinityVector_9() { return &___negativeInfinityVector_9; }
	inline void set_negativeInfinityVector_9(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___negativeInfinityVector_9 = value;
	}
};

// Windows.Foundation.IReference`1<System.Numerics.Matrix4x4>
struct NOVTABLE IReference_1_t97B2873C86B7742F03D17D1D0BC7B456F90D09E2 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IReference_1_get_Value_mA1E3E5D81B89D3EA702FD87A063F5C5CBDD3949B(Matrix4x4_t5B627955C6D80AF8F1D97A6466CB337DCEEB3504 * comReturnValue) = 0;
};
// Windows.Foundation.IReference`1<Windows.Foundation.Numerics.Matrix4x4>
struct NOVTABLE IReference_1_t8A0A795D67A1984F24F971A8C797A86DDD5FD8D4 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IReference_1_get_Value_mB1385E16B3DF2EBB57B6A2953C5ACFFB0F57E766(Matrix4x4_tCA3F3FDAF7C260FCEFC8AE7347180927246F3D82 * comReturnValue) = 0;
};

// Microsoft.MixedReality.Toolkit.BaseService
struct BaseService_t793754DF90682F7505A073585FC34F790A7CD7DB  : public RuntimeObject
{
public:
	// System.String Microsoft.MixedReality.Toolkit.BaseService::<Name>k__BackingField
	String_t* ___U3CNameU3Ek__BackingField_1;
	// System.UInt32 Microsoft.MixedReality.Toolkit.BaseService::<Priority>k__BackingField
	uint32_t ___U3CPriorityU3Ek__BackingField_2;
	// Microsoft.MixedReality.Toolkit.BaseMixedRealityProfile Microsoft.MixedReality.Toolkit.BaseService::<ConfigurationProfile>k__BackingField
	BaseMixedRealityProfile_tE425D8D64B2631D5C8C82A49805613264FA9D9A3 * ___U3CConfigurationProfileU3Ek__BackingField_3;
	// System.Nullable`1<System.Boolean> Microsoft.MixedReality.Toolkit.BaseService::isInitialized
	Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  ___isInitialized_4;
	// System.Nullable`1<System.Boolean> Microsoft.MixedReality.Toolkit.BaseService::isEnabled
	Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  ___isEnabled_5;
	// System.Nullable`1<System.Boolean> Microsoft.MixedReality.Toolkit.BaseService::isMarkedDestroyed
	Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  ___isMarkedDestroyed_6;
	// System.Boolean Microsoft.MixedReality.Toolkit.BaseService::disposed
	bool ___disposed_7;

public:
	inline static int32_t get_offset_of_U3CNameU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(BaseService_t793754DF90682F7505A073585FC34F790A7CD7DB, ___U3CNameU3Ek__BackingField_1)); }
	inline String_t* get_U3CNameU3Ek__BackingField_1() const { return ___U3CNameU3Ek__BackingField_1; }
	inline String_t** get_address_of_U3CNameU3Ek__BackingField_1() { return &___U3CNameU3Ek__BackingField_1; }
	inline void set_U3CNameU3Ek__BackingField_1(String_t* value)
	{
		___U3CNameU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CNameU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CPriorityU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(BaseService_t793754DF90682F7505A073585FC34F790A7CD7DB, ___U3CPriorityU3Ek__BackingField_2)); }
	inline uint32_t get_U3CPriorityU3Ek__BackingField_2() const { return ___U3CPriorityU3Ek__BackingField_2; }
	inline uint32_t* get_address_of_U3CPriorityU3Ek__BackingField_2() { return &___U3CPriorityU3Ek__BackingField_2; }
	inline void set_U3CPriorityU3Ek__BackingField_2(uint32_t value)
	{
		___U3CPriorityU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_U3CConfigurationProfileU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(BaseService_t793754DF90682F7505A073585FC34F790A7CD7DB, ___U3CConfigurationProfileU3Ek__BackingField_3)); }
	inline BaseMixedRealityProfile_tE425D8D64B2631D5C8C82A49805613264FA9D9A3 * get_U3CConfigurationProfileU3Ek__BackingField_3() const { return ___U3CConfigurationProfileU3Ek__BackingField_3; }
	inline BaseMixedRealityProfile_tE425D8D64B2631D5C8C82A49805613264FA9D9A3 ** get_address_of_U3CConfigurationProfileU3Ek__BackingField_3() { return &___U3CConfigurationProfileU3Ek__BackingField_3; }
	inline void set_U3CConfigurationProfileU3Ek__BackingField_3(BaseMixedRealityProfile_tE425D8D64B2631D5C8C82A49805613264FA9D9A3 * value)
	{
		___U3CConfigurationProfileU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CConfigurationProfileU3Ek__BackingField_3), (void*)value);
	}

	inline static int32_t get_offset_of_isInitialized_4() { return static_cast<int32_t>(offsetof(BaseService_t793754DF90682F7505A073585FC34F790A7CD7DB, ___isInitialized_4)); }
	inline Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  get_isInitialized_4() const { return ___isInitialized_4; }
	inline Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3 * get_address_of_isInitialized_4() { return &___isInitialized_4; }
	inline void set_isInitialized_4(Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  value)
	{
		___isInitialized_4 = value;
	}

	inline static int32_t get_offset_of_isEnabled_5() { return static_cast<int32_t>(offsetof(BaseService_t793754DF90682F7505A073585FC34F790A7CD7DB, ___isEnabled_5)); }
	inline Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  get_isEnabled_5() const { return ___isEnabled_5; }
	inline Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3 * get_address_of_isEnabled_5() { return &___isEnabled_5; }
	inline void set_isEnabled_5(Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  value)
	{
		___isEnabled_5 = value;
	}

	inline static int32_t get_offset_of_isMarkedDestroyed_6() { return static_cast<int32_t>(offsetof(BaseService_t793754DF90682F7505A073585FC34F790A7CD7DB, ___isMarkedDestroyed_6)); }
	inline Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  get_isMarkedDestroyed_6() const { return ___isMarkedDestroyed_6; }
	inline Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3 * get_address_of_isMarkedDestroyed_6() { return &___isMarkedDestroyed_6; }
	inline void set_isMarkedDestroyed_6(Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  value)
	{
		___isMarkedDestroyed_6 = value;
	}

	inline static int32_t get_offset_of_disposed_7() { return static_cast<int32_t>(offsetof(BaseService_t793754DF90682F7505A073585FC34F790A7CD7DB, ___disposed_7)); }
	inline bool get_disposed_7() const { return ___disposed_7; }
	inline bool* get_address_of_disposed_7() { return &___disposed_7; }
	inline void set_disposed_7(bool value)
	{
		___disposed_7 = value;
	}
};


// Microsoft.MixedReality.Toolkit.CameraSystem.DisplayType
struct DisplayType_t8D603586174A92DD8F95CD66B08C67ABA8B58644 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.CameraSystem.DisplayType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(DisplayType_t8D603586174A92DD8F95CD66B08C67ABA8B58644, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// OpenCvSharp.DisposableObject
struct DisposableObject_t758F1156DE1B13B9AC4682BFA359D84880799115  : public RuntimeObject
{
public:
	// System.Boolean OpenCvSharp.DisposableObject::<IsDisposed>k__BackingField
	bool ___U3CIsDisposedU3Ek__BackingField_0;
	// System.Boolean OpenCvSharp.DisposableObject::<IsEnabledDispose>k__BackingField
	bool ___U3CIsEnabledDisposeU3Ek__BackingField_1;
	// System.Runtime.InteropServices.GCHandle OpenCvSharp.DisposableObject::dataHandle
	GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603  ___dataHandle_2;
	// System.IntPtr OpenCvSharp.DisposableObject::<AllocatedMemory>k__BackingField
	intptr_t ___U3CAllocatedMemoryU3Ek__BackingField_3;
	// System.Int64 OpenCvSharp.DisposableObject::<AllocatedMemorySize>k__BackingField
	int64_t ___U3CAllocatedMemorySizeU3Ek__BackingField_4;

public:
	inline static int32_t get_offset_of_U3CIsDisposedU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(DisposableObject_t758F1156DE1B13B9AC4682BFA359D84880799115, ___U3CIsDisposedU3Ek__BackingField_0)); }
	inline bool get_U3CIsDisposedU3Ek__BackingField_0() const { return ___U3CIsDisposedU3Ek__BackingField_0; }
	inline bool* get_address_of_U3CIsDisposedU3Ek__BackingField_0() { return &___U3CIsDisposedU3Ek__BackingField_0; }
	inline void set_U3CIsDisposedU3Ek__BackingField_0(bool value)
	{
		___U3CIsDisposedU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CIsEnabledDisposeU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(DisposableObject_t758F1156DE1B13B9AC4682BFA359D84880799115, ___U3CIsEnabledDisposeU3Ek__BackingField_1)); }
	inline bool get_U3CIsEnabledDisposeU3Ek__BackingField_1() const { return ___U3CIsEnabledDisposeU3Ek__BackingField_1; }
	inline bool* get_address_of_U3CIsEnabledDisposeU3Ek__BackingField_1() { return &___U3CIsEnabledDisposeU3Ek__BackingField_1; }
	inline void set_U3CIsEnabledDisposeU3Ek__BackingField_1(bool value)
	{
		___U3CIsEnabledDisposeU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_dataHandle_2() { return static_cast<int32_t>(offsetof(DisposableObject_t758F1156DE1B13B9AC4682BFA359D84880799115, ___dataHandle_2)); }
	inline GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603  get_dataHandle_2() const { return ___dataHandle_2; }
	inline GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603 * get_address_of_dataHandle_2() { return &___dataHandle_2; }
	inline void set_dataHandle_2(GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603  value)
	{
		___dataHandle_2 = value;
	}

	inline static int32_t get_offset_of_U3CAllocatedMemoryU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(DisposableObject_t758F1156DE1B13B9AC4682BFA359D84880799115, ___U3CAllocatedMemoryU3Ek__BackingField_3)); }
	inline intptr_t get_U3CAllocatedMemoryU3Ek__BackingField_3() const { return ___U3CAllocatedMemoryU3Ek__BackingField_3; }
	inline intptr_t* get_address_of_U3CAllocatedMemoryU3Ek__BackingField_3() { return &___U3CAllocatedMemoryU3Ek__BackingField_3; }
	inline void set_U3CAllocatedMemoryU3Ek__BackingField_3(intptr_t value)
	{
		___U3CAllocatedMemoryU3Ek__BackingField_3 = value;
	}

	inline static int32_t get_offset_of_U3CAllocatedMemorySizeU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(DisposableObject_t758F1156DE1B13B9AC4682BFA359D84880799115, ___U3CAllocatedMemorySizeU3Ek__BackingField_4)); }
	inline int64_t get_U3CAllocatedMemorySizeU3Ek__BackingField_4() const { return ___U3CAllocatedMemorySizeU3Ek__BackingField_4; }
	inline int64_t* get_address_of_U3CAllocatedMemorySizeU3Ek__BackingField_4() { return &___U3CAllocatedMemorySizeU3Ek__BackingField_4; }
	inline void set_U3CAllocatedMemorySizeU3Ek__BackingField_4(int64_t value)
	{
		___U3CAllocatedMemorySizeU3Ek__BackingField_4 = value;
	}
};


// System.IO.MemoryStream
struct MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C  : public Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB
{
public:
	// System.Byte[] System.IO.MemoryStream::_buffer
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ____buffer_4;
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
	Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725 * ____lastReadTask_13;

public:
	inline static int32_t get_offset_of__buffer_4() { return static_cast<int32_t>(offsetof(MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C, ____buffer_4)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get__buffer_4() const { return ____buffer_4; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of__buffer_4() { return &____buffer_4; }
	inline void set__buffer_4(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		____buffer_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____buffer_4), (void*)value);
	}

	inline static int32_t get_offset_of__origin_5() { return static_cast<int32_t>(offsetof(MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C, ____origin_5)); }
	inline int32_t get__origin_5() const { return ____origin_5; }
	inline int32_t* get_address_of__origin_5() { return &____origin_5; }
	inline void set__origin_5(int32_t value)
	{
		____origin_5 = value;
	}

	inline static int32_t get_offset_of__position_6() { return static_cast<int32_t>(offsetof(MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C, ____position_6)); }
	inline int32_t get__position_6() const { return ____position_6; }
	inline int32_t* get_address_of__position_6() { return &____position_6; }
	inline void set__position_6(int32_t value)
	{
		____position_6 = value;
	}

	inline static int32_t get_offset_of__length_7() { return static_cast<int32_t>(offsetof(MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C, ____length_7)); }
	inline int32_t get__length_7() const { return ____length_7; }
	inline int32_t* get_address_of__length_7() { return &____length_7; }
	inline void set__length_7(int32_t value)
	{
		____length_7 = value;
	}

	inline static int32_t get_offset_of__capacity_8() { return static_cast<int32_t>(offsetof(MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C, ____capacity_8)); }
	inline int32_t get__capacity_8() const { return ____capacity_8; }
	inline int32_t* get_address_of__capacity_8() { return &____capacity_8; }
	inline void set__capacity_8(int32_t value)
	{
		____capacity_8 = value;
	}

	inline static int32_t get_offset_of__expandable_9() { return static_cast<int32_t>(offsetof(MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C, ____expandable_9)); }
	inline bool get__expandable_9() const { return ____expandable_9; }
	inline bool* get_address_of__expandable_9() { return &____expandable_9; }
	inline void set__expandable_9(bool value)
	{
		____expandable_9 = value;
	}

	inline static int32_t get_offset_of__writable_10() { return static_cast<int32_t>(offsetof(MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C, ____writable_10)); }
	inline bool get__writable_10() const { return ____writable_10; }
	inline bool* get_address_of__writable_10() { return &____writable_10; }
	inline void set__writable_10(bool value)
	{
		____writable_10 = value;
	}

	inline static int32_t get_offset_of__exposable_11() { return static_cast<int32_t>(offsetof(MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C, ____exposable_11)); }
	inline bool get__exposable_11() const { return ____exposable_11; }
	inline bool* get_address_of__exposable_11() { return &____exposable_11; }
	inline void set__exposable_11(bool value)
	{
		____exposable_11 = value;
	}

	inline static int32_t get_offset_of__isOpen_12() { return static_cast<int32_t>(offsetof(MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C, ____isOpen_12)); }
	inline bool get__isOpen_12() const { return ____isOpen_12; }
	inline bool* get_address_of__isOpen_12() { return &____isOpen_12; }
	inline void set__isOpen_12(bool value)
	{
		____isOpen_12 = value;
	}

	inline static int32_t get_offset_of__lastReadTask_13() { return static_cast<int32_t>(offsetof(MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C, ____lastReadTask_13)); }
	inline Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725 * get__lastReadTask_13() const { return ____lastReadTask_13; }
	inline Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725 ** get_address_of__lastReadTask_13() { return &____lastReadTask_13; }
	inline void set__lastReadTask_13(Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725 * value)
	{
		____lastReadTask_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____lastReadTask_13), (void*)value);
	}
};


// Unity.Profiling.ProfilerMarker
struct ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 
{
public:
	// System.IntPtr Unity.Profiling.ProfilerMarker::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};


// Windows.Foundation.PropertyType
struct PropertyType_tE0EA93A7BFC9AC532D4D960D9F87C6E0B5C4F808 
{
public:
	// System.Int32 Windows.Foundation.PropertyType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(PropertyType_tE0EA93A7BFC9AC532D4D960D9F87C6E0B5C4F808, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.TextAnchor
struct TextAnchor_tA4C88E77C2D7312F43412275B01E1341A7CB2232 
{
public:
	// System.Int32 UnityEngine.TextAnchor::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TextAnchor_tA4C88E77C2D7312F43412275B01E1341A7CB2232, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.TimeSpan
struct TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 
{
public:
	// System.Int64 System.TimeSpan::_ticks
	int64_t ____ticks_3;

public:
	inline static int32_t get_offset_of__ticks_3() { return static_cast<int32_t>(offsetof(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203, ____ticks_3)); }
	inline int64_t get__ticks_3() const { return ____ticks_3; }
	inline int64_t* get_address_of__ticks_3() { return &____ticks_3; }
	inline void set__ticks_3(int64_t value)
	{
		____ticks_3 = value;
	}
};

struct TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields
{
public:
	// System.TimeSpan System.TimeSpan::Zero
	TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  ___Zero_0;
	// System.TimeSpan System.TimeSpan::MaxValue
	TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  ___MaxValue_1;
	// System.TimeSpan System.TimeSpan::MinValue
	TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  ___MinValue_2;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.TimeSpan::_legacyConfigChecked
	bool ____legacyConfigChecked_4;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.TimeSpan::_legacyMode
	bool ____legacyMode_5;

public:
	inline static int32_t get_offset_of_Zero_0() { return static_cast<int32_t>(offsetof(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields, ___Zero_0)); }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  get_Zero_0() const { return ___Zero_0; }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * get_address_of_Zero_0() { return &___Zero_0; }
	inline void set_Zero_0(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  value)
	{
		___Zero_0 = value;
	}

	inline static int32_t get_offset_of_MaxValue_1() { return static_cast<int32_t>(offsetof(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields, ___MaxValue_1)); }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  get_MaxValue_1() const { return ___MaxValue_1; }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * get_address_of_MaxValue_1() { return &___MaxValue_1; }
	inline void set_MaxValue_1(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  value)
	{
		___MaxValue_1 = value;
	}

	inline static int32_t get_offset_of_MinValue_2() { return static_cast<int32_t>(offsetof(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields, ___MinValue_2)); }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  get_MinValue_2() const { return ___MinValue_2; }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * get_address_of_MinValue_2() { return &___MinValue_2; }
	inline void set_MinValue_2(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  value)
	{
		___MinValue_2 = value;
	}

	inline static int32_t get_offset_of__legacyConfigChecked_4() { return static_cast<int32_t>(offsetof(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields, ____legacyConfigChecked_4)); }
	inline bool get__legacyConfigChecked_4() const { return ____legacyConfigChecked_4; }
	inline bool* get_address_of__legacyConfigChecked_4() { return &____legacyConfigChecked_4; }
	inline void set__legacyConfigChecked_4(bool value)
	{
		____legacyConfigChecked_4 = value;
	}

	inline static int32_t get_offset_of__legacyMode_5() { return static_cast<int32_t>(offsetof(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields, ____legacyMode_5)); }
	inline bool get__legacyMode_5() const { return ____legacyMode_5; }
	inline bool* get_address_of__legacyMode_5() { return &____legacyMode_5; }
	inline void set__legacyMode_5(bool value)
	{
		____legacyMode_5 = value;
	}
};


// Microsoft.MixedReality.Toolkit.BaseEventSystem
struct BaseEventSystem_tD71DC37BB97BE80E19B3775A6EF130D83F699419  : public BaseService_t793754DF90682F7505A073585FC34F790A7CD7DB
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.BaseEventSystem::eventExecutionDepth
	int32_t ___eventExecutionDepth_9;
	// System.Type Microsoft.MixedReality.Toolkit.BaseEventSystem::eventSystemHandlerType
	Type_t * ___eventSystemHandlerType_10;
	// System.Collections.Generic.List`1<System.Tuple`3<Microsoft.MixedReality.Toolkit.BaseEventSystem/Action,System.Type,UnityEngine.EventSystems.IEventSystemHandler>> Microsoft.MixedReality.Toolkit.BaseEventSystem::postponedActions
	List_1_t331224EB72BAB582E19076DBEBCE04C263DA6FEE * ___postponedActions_11;
	// System.Collections.Generic.List`1<System.Tuple`2<Microsoft.MixedReality.Toolkit.BaseEventSystem/Action,UnityEngine.GameObject>> Microsoft.MixedReality.Toolkit.BaseEventSystem::postponedObjectActions
	List_1_tB1588C2E431B5ADA40379D5DC18919A72BEA44F3 * ___postponedObjectActions_12;
	// System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.BaseEventSystem/EventHandlerEntry>> Microsoft.MixedReality.Toolkit.BaseEventSystem::<EventHandlersByType>k__BackingField
	Dictionary_2_t6D9E31AD9163B3A97AA0E83AC606775912490ABD * ___U3CEventHandlersByTypeU3Ek__BackingField_13;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> Microsoft.MixedReality.Toolkit.BaseEventSystem::<EventListeners>k__BackingField
	List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * ___U3CEventListenersU3Ek__BackingField_14;

public:
	inline static int32_t get_offset_of_eventExecutionDepth_9() { return static_cast<int32_t>(offsetof(BaseEventSystem_tD71DC37BB97BE80E19B3775A6EF130D83F699419, ___eventExecutionDepth_9)); }
	inline int32_t get_eventExecutionDepth_9() const { return ___eventExecutionDepth_9; }
	inline int32_t* get_address_of_eventExecutionDepth_9() { return &___eventExecutionDepth_9; }
	inline void set_eventExecutionDepth_9(int32_t value)
	{
		___eventExecutionDepth_9 = value;
	}

	inline static int32_t get_offset_of_eventSystemHandlerType_10() { return static_cast<int32_t>(offsetof(BaseEventSystem_tD71DC37BB97BE80E19B3775A6EF130D83F699419, ___eventSystemHandlerType_10)); }
	inline Type_t * get_eventSystemHandlerType_10() const { return ___eventSystemHandlerType_10; }
	inline Type_t ** get_address_of_eventSystemHandlerType_10() { return &___eventSystemHandlerType_10; }
	inline void set_eventSystemHandlerType_10(Type_t * value)
	{
		___eventSystemHandlerType_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___eventSystemHandlerType_10), (void*)value);
	}

	inline static int32_t get_offset_of_postponedActions_11() { return static_cast<int32_t>(offsetof(BaseEventSystem_tD71DC37BB97BE80E19B3775A6EF130D83F699419, ___postponedActions_11)); }
	inline List_1_t331224EB72BAB582E19076DBEBCE04C263DA6FEE * get_postponedActions_11() const { return ___postponedActions_11; }
	inline List_1_t331224EB72BAB582E19076DBEBCE04C263DA6FEE ** get_address_of_postponedActions_11() { return &___postponedActions_11; }
	inline void set_postponedActions_11(List_1_t331224EB72BAB582E19076DBEBCE04C263DA6FEE * value)
	{
		___postponedActions_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___postponedActions_11), (void*)value);
	}

	inline static int32_t get_offset_of_postponedObjectActions_12() { return static_cast<int32_t>(offsetof(BaseEventSystem_tD71DC37BB97BE80E19B3775A6EF130D83F699419, ___postponedObjectActions_12)); }
	inline List_1_tB1588C2E431B5ADA40379D5DC18919A72BEA44F3 * get_postponedObjectActions_12() const { return ___postponedObjectActions_12; }
	inline List_1_tB1588C2E431B5ADA40379D5DC18919A72BEA44F3 ** get_address_of_postponedObjectActions_12() { return &___postponedObjectActions_12; }
	inline void set_postponedObjectActions_12(List_1_tB1588C2E431B5ADA40379D5DC18919A72BEA44F3 * value)
	{
		___postponedObjectActions_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___postponedObjectActions_12), (void*)value);
	}

	inline static int32_t get_offset_of_U3CEventHandlersByTypeU3Ek__BackingField_13() { return static_cast<int32_t>(offsetof(BaseEventSystem_tD71DC37BB97BE80E19B3775A6EF130D83F699419, ___U3CEventHandlersByTypeU3Ek__BackingField_13)); }
	inline Dictionary_2_t6D9E31AD9163B3A97AA0E83AC606775912490ABD * get_U3CEventHandlersByTypeU3Ek__BackingField_13() const { return ___U3CEventHandlersByTypeU3Ek__BackingField_13; }
	inline Dictionary_2_t6D9E31AD9163B3A97AA0E83AC606775912490ABD ** get_address_of_U3CEventHandlersByTypeU3Ek__BackingField_13() { return &___U3CEventHandlersByTypeU3Ek__BackingField_13; }
	inline void set_U3CEventHandlersByTypeU3Ek__BackingField_13(Dictionary_2_t6D9E31AD9163B3A97AA0E83AC606775912490ABD * value)
	{
		___U3CEventHandlersByTypeU3Ek__BackingField_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CEventHandlersByTypeU3Ek__BackingField_13), (void*)value);
	}

	inline static int32_t get_offset_of_U3CEventListenersU3Ek__BackingField_14() { return static_cast<int32_t>(offsetof(BaseEventSystem_tD71DC37BB97BE80E19B3775A6EF130D83F699419, ___U3CEventListenersU3Ek__BackingField_14)); }
	inline List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * get_U3CEventListenersU3Ek__BackingField_14() const { return ___U3CEventListenersU3Ek__BackingField_14; }
	inline List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 ** get_address_of_U3CEventListenersU3Ek__BackingField_14() { return &___U3CEventListenersU3Ek__BackingField_14; }
	inline void set_U3CEventListenersU3Ek__BackingField_14(List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * value)
	{
		___U3CEventListenersU3Ek__BackingField_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CEventListenersU3Ek__BackingField_14), (void*)value);
	}
};

struct BaseEventSystem_tD71DC37BB97BE80E19B3775A6EF130D83F699419_StaticFields
{
public:
	// System.Boolean Microsoft.MixedReality.Toolkit.BaseEventSystem::enableDanglingHandlerDiagnostics
	bool ___enableDanglingHandlerDiagnostics_8;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.BaseEventSystem::TraverseEventSystemHandlerHierarchyPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___TraverseEventSystemHandlerHierarchyPerfMarker_15;

public:
	inline static int32_t get_offset_of_enableDanglingHandlerDiagnostics_8() { return static_cast<int32_t>(offsetof(BaseEventSystem_tD71DC37BB97BE80E19B3775A6EF130D83F699419_StaticFields, ___enableDanglingHandlerDiagnostics_8)); }
	inline bool get_enableDanglingHandlerDiagnostics_8() const { return ___enableDanglingHandlerDiagnostics_8; }
	inline bool* get_address_of_enableDanglingHandlerDiagnostics_8() { return &___enableDanglingHandlerDiagnostics_8; }
	inline void set_enableDanglingHandlerDiagnostics_8(bool value)
	{
		___enableDanglingHandlerDiagnostics_8 = value;
	}

	inline static int32_t get_offset_of_TraverseEventSystemHandlerHierarchyPerfMarker_15() { return static_cast<int32_t>(offsetof(BaseEventSystem_tD71DC37BB97BE80E19B3775A6EF130D83F699419_StaticFields, ___TraverseEventSystemHandlerHierarchyPerfMarker_15)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_TraverseEventSystemHandlerHierarchyPerfMarker_15() const { return ___TraverseEventSystemHandlerHierarchyPerfMarker_15; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_TraverseEventSystemHandlerHierarchyPerfMarker_15() { return &___TraverseEventSystemHandlerHierarchyPerfMarker_15; }
	inline void set_TraverseEventSystemHandlerHierarchyPerfMarker_15(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___TraverseEventSystemHandlerHierarchyPerfMarker_15 = value;
	}
};


// OpenCvSharp.DisposableCvObject
struct DisposableCvObject_t5E39751FAD49CA698F2EECA50A93C2D9AD4A4775  : public DisposableObject_t758F1156DE1B13B9AC4682BFA359D84880799115
{
public:
	// System.IntPtr OpenCvSharp.DisposableCvObject::ptr
	intptr_t ___ptr_5;
	// System.Boolean OpenCvSharp.DisposableCvObject::disposed
	bool ___disposed_6;

public:
	inline static int32_t get_offset_of_ptr_5() { return static_cast<int32_t>(offsetof(DisposableCvObject_t5E39751FAD49CA698F2EECA50A93C2D9AD4A4775, ___ptr_5)); }
	inline intptr_t get_ptr_5() const { return ___ptr_5; }
	inline intptr_t* get_address_of_ptr_5() { return &___ptr_5; }
	inline void set_ptr_5(intptr_t value)
	{
		___ptr_5 = value;
	}

	inline static int32_t get_offset_of_disposed_6() { return static_cast<int32_t>(offsetof(DisposableCvObject_t5E39751FAD49CA698F2EECA50A93C2D9AD4A4775, ___disposed_6)); }
	inline bool get_disposed_6() const { return ___disposed_6; }
	inline bool* get_address_of_disposed_6() { return &___disposed_6; }
	inline void set_disposed_6(bool value)
	{
		___disposed_6 = value;
	}
};

// Windows.Foundation.IPropertyValue
struct NOVTABLE IPropertyValue_t2D61E5557FBCC9F0476CC32B5738B21EFFA483E8 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_get_Type_m2BC440F5119A133BE4DD895657519ADAA3B34272(int32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_get_IsNumericScalar_mC8DE97926668A5F2EA3F4A9B128E966CBC7B0D60(bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt8_m25D96C5F9AC133BF7B682C59FE83EE05A0075B05(uint8_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt16_mBE4A7DC8A2B92F83EE058AE7515E84DADFA206AE(int16_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt16_mCF513D800195CA7050FD5AFB4E710FB0CFB531B5(uint16_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt32_mDE5543C20D3D3C9E773CB6EDBDBC789D12CC59BA(int32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt32_mD48C2097876EAE6D1E218D9123F58F168B374205(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt64_m4BAC154BEC3584DF3E34EDA6033EEF3DB6D4132E(int64_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt64_m981379F85C0C44EDBDD830A293693BE0BB3F62CA(uint64_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetSingle_mED031D57B17B0F7BD3B4B250821D070155889F1F(float* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetDouble_mA0880A7E89CE09C2639D6F8065B18E8F77EB082F(double* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetChar16_m7B2226E30F72B0CCAE54B8EDB1AC4ACF1BE860A8(Il2CppChar* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetBoolean_m21FCEEA690B32CD86A36D40FB837FC7D894D5587(bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetString_m8D5702E4E1C67366D65DA23CA2812D6572DF819C(Il2CppHString* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetGuid_m885F2850B49DB4B046564BC5FE414256801D9A11(Guid_t * comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetDateTime_m023A766ED6FC58B347CF6F777F5C18C6AE246A3C(DateTime_t7C967DBDDE4CAEAA8B5AEB61E36309BCD7D26B8C * comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetTimeSpan_m063CE76264EDAF37A1DA3CA5C9CF4AF85D8FC239(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetPoint_m014D5E859273BA28DE642E38438EDCC64AB5C41B(Point_t155CCDBE84DC37ABFA2CBB4649526701CA3A5578 * comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetSize_m0A952D186E59BEA03E6185EDEBAC26D544AFADAC(Size_tDA924E69AB75296FE3B5E81811B78FD56173BB92 * comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetRect_m0A96600149C7E6A493B8420CB316938AEF9A1A06(Rect_tC45F1DDF39812623644DE296D8057A4958176627 * comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt8Array_m540E0503D8CFAE2579D449884B6AA883509C79D1(uint32_t* ___value0ArraySize, uint8_t** ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt16Array_m279C289854DE8A2D45A6B6B09112DD9D2F0DF849(uint32_t* ___value0ArraySize, int16_t** ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt16Array_m090AA712F6BB39F869BCC5CB90236377EE8673B1(uint32_t* ___value0ArraySize, uint16_t** ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt32Array_mADF499B8CD16185128795A7B74D63E8CFE692B9A(uint32_t* ___value0ArraySize, int32_t** ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt32Array_m9B44B8D2EA2907A9A96ED653ACEF04873D9483F8(uint32_t* ___value0ArraySize, uint32_t** ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt64Array_m9A04AC5F477463928280B42E2C40F13B15A1D564(uint32_t* ___value0ArraySize, int64_t** ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt64Array_m776484C9C41D5A03991D89401FF84F9D425D6A5E(uint32_t* ___value0ArraySize, uint64_t** ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetSingleArray_m1E9CE76FA942B3AFA8995FBAE605E84733917B57(uint32_t* ___value0ArraySize, float** ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetDoubleArray_m5DAB086BEB4816CAF7553E325B91A4B0B07953A5(uint32_t* ___value0ArraySize, double** ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetChar16Array_m2C69248F68D7705FE44FA8F777B061FA77C706A1(uint32_t* ___value0ArraySize, Il2CppChar** ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetBooleanArray_m083CB5579BC465B4D1BD84CE8382CB747A9FCC8C(uint32_t* ___value0ArraySize, bool** ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetStringArray_m680617C6226187D28C4978B710AFBB8581AAC98F(uint32_t* ___value0ArraySize, Il2CppHString** ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInspectableArray_m6DCBE370A8CAC129E6D6BD91C6503D14A8109F79(uint32_t* ___value0ArraySize, Il2CppIInspectable*** ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetGuidArray_mE9983D9B5EE9AC1935C3EBD2F9E82DC7188E1D07(uint32_t* ___value0ArraySize, Guid_t ** ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetDateTimeArray_mEECFC6C321405CDBC425D321E2A8EF3E7BC306A7(uint32_t* ___value0ArraySize, DateTime_t7C967DBDDE4CAEAA8B5AEB61E36309BCD7D26B8C ** ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetTimeSpanArray_mEAF3CA18AA928DAF3046F0F530B9324711650167(uint32_t* ___value0ArraySize, TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 ** ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetPointArray_mD4ACB0F49C7BFEC1C03A4EE4263B23B2040CECD0(uint32_t* ___value0ArraySize, Point_t155CCDBE84DC37ABFA2CBB4649526701CA3A5578 ** ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetSizeArray_m3C079B4191330FAC3B2131D308C825BC72A5F0DC(uint32_t* ___value0ArraySize, Size_tDA924E69AB75296FE3B5E81811B78FD56173BB92 ** ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetRectArray_m09598924D31716E1E653AE941186F8B16EA11A87(uint32_t* ___value0ArraySize, Rect_tC45F1DDF39812623644DE296D8057A4958176627 ** ___value0) = 0;
};

// Microsoft.MixedReality.Toolkit.BaseCoreSystem
struct BaseCoreSystem_tE610AEADB105DC3093B76E8BF1DA11EE1BFA3954  : public BaseEventSystem_tD71DC37BB97BE80E19B3775A6EF130D83F699419
{
public:
	// Microsoft.MixedReality.Toolkit.IMixedRealityServiceRegistrar Microsoft.MixedReality.Toolkit.BaseCoreSystem::<Registrar>k__BackingField
	RuntimeObject* ___U3CRegistrarU3Ek__BackingField_16;

public:
	inline static int32_t get_offset_of_U3CRegistrarU3Ek__BackingField_16() { return static_cast<int32_t>(offsetof(BaseCoreSystem_tE610AEADB105DC3093B76E8BF1DA11EE1BFA3954, ___U3CRegistrarU3Ek__BackingField_16)); }
	inline RuntimeObject* get_U3CRegistrarU3Ek__BackingField_16() const { return ___U3CRegistrarU3Ek__BackingField_16; }
	inline RuntimeObject** get_address_of_U3CRegistrarU3Ek__BackingField_16() { return &___U3CRegistrarU3Ek__BackingField_16; }
	inline void set_U3CRegistrarU3Ek__BackingField_16(RuntimeObject* value)
	{
		___U3CRegistrarU3Ek__BackingField_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CRegistrarU3Ek__BackingField_16), (void*)value);
	}
};


// OpenCvSharp.Mat
struct Mat_t384A6BE55DC2EC885B4728CACEEE992D74F3DD4D  : public DisposableCvObject_t5E39751FAD49CA698F2EECA50A93C2D9AD4A4775
{
public:
	// System.Boolean OpenCvSharp.Mat::disposed
	bool ___disposed_7;
	// OpenCvSharp.Mat/MatExprIndexer OpenCvSharp.Mat::matExprIndexer
	MatExprIndexer_t974E175CB4E3337A66B0BA3E7A0BDFBB2428840E * ___matExprIndexer_9;
	// OpenCvSharp.Mat/ColExprIndexer OpenCvSharp.Mat::colExprIndexer
	ColExprIndexer_t7BE98B3E69BC45B27EF78858459AA2A47A7F632F * ___colExprIndexer_10;
	// OpenCvSharp.Mat/RowExprIndexer OpenCvSharp.Mat::rowExprIndexer
	RowExprIndexer_t9F0095829DDB9D709C2B312482BBA5B7B2DA2C6F * ___rowExprIndexer_11;
	// OpenCvSharp.Mat/ColIndexer OpenCvSharp.Mat::colIndexer
	ColIndexer_t31825B233FA28DD352A86C1AEF2302E34B7ADD3F * ___colIndexer_12;
	// OpenCvSharp.Mat/RowIndexer OpenCvSharp.Mat::rowIndexer
	RowIndexer_tAC3682A4FD16D8EAD29F8B0C5C1589C3CEE58456 * ___rowIndexer_13;

public:
	inline static int32_t get_offset_of_disposed_7() { return static_cast<int32_t>(offsetof(Mat_t384A6BE55DC2EC885B4728CACEEE992D74F3DD4D, ___disposed_7)); }
	inline bool get_disposed_7() const { return ___disposed_7; }
	inline bool* get_address_of_disposed_7() { return &___disposed_7; }
	inline void set_disposed_7(bool value)
	{
		___disposed_7 = value;
	}

	inline static int32_t get_offset_of_matExprIndexer_9() { return static_cast<int32_t>(offsetof(Mat_t384A6BE55DC2EC885B4728CACEEE992D74F3DD4D, ___matExprIndexer_9)); }
	inline MatExprIndexer_t974E175CB4E3337A66B0BA3E7A0BDFBB2428840E * get_matExprIndexer_9() const { return ___matExprIndexer_9; }
	inline MatExprIndexer_t974E175CB4E3337A66B0BA3E7A0BDFBB2428840E ** get_address_of_matExprIndexer_9() { return &___matExprIndexer_9; }
	inline void set_matExprIndexer_9(MatExprIndexer_t974E175CB4E3337A66B0BA3E7A0BDFBB2428840E * value)
	{
		___matExprIndexer_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___matExprIndexer_9), (void*)value);
	}

	inline static int32_t get_offset_of_colExprIndexer_10() { return static_cast<int32_t>(offsetof(Mat_t384A6BE55DC2EC885B4728CACEEE992D74F3DD4D, ___colExprIndexer_10)); }
	inline ColExprIndexer_t7BE98B3E69BC45B27EF78858459AA2A47A7F632F * get_colExprIndexer_10() const { return ___colExprIndexer_10; }
	inline ColExprIndexer_t7BE98B3E69BC45B27EF78858459AA2A47A7F632F ** get_address_of_colExprIndexer_10() { return &___colExprIndexer_10; }
	inline void set_colExprIndexer_10(ColExprIndexer_t7BE98B3E69BC45B27EF78858459AA2A47A7F632F * value)
	{
		___colExprIndexer_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___colExprIndexer_10), (void*)value);
	}

	inline static int32_t get_offset_of_rowExprIndexer_11() { return static_cast<int32_t>(offsetof(Mat_t384A6BE55DC2EC885B4728CACEEE992D74F3DD4D, ___rowExprIndexer_11)); }
	inline RowExprIndexer_t9F0095829DDB9D709C2B312482BBA5B7B2DA2C6F * get_rowExprIndexer_11() const { return ___rowExprIndexer_11; }
	inline RowExprIndexer_t9F0095829DDB9D709C2B312482BBA5B7B2DA2C6F ** get_address_of_rowExprIndexer_11() { return &___rowExprIndexer_11; }
	inline void set_rowExprIndexer_11(RowExprIndexer_t9F0095829DDB9D709C2B312482BBA5B7B2DA2C6F * value)
	{
		___rowExprIndexer_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___rowExprIndexer_11), (void*)value);
	}

	inline static int32_t get_offset_of_colIndexer_12() { return static_cast<int32_t>(offsetof(Mat_t384A6BE55DC2EC885B4728CACEEE992D74F3DD4D, ___colIndexer_12)); }
	inline ColIndexer_t31825B233FA28DD352A86C1AEF2302E34B7ADD3F * get_colIndexer_12() const { return ___colIndexer_12; }
	inline ColIndexer_t31825B233FA28DD352A86C1AEF2302E34B7ADD3F ** get_address_of_colIndexer_12() { return &___colIndexer_12; }
	inline void set_colIndexer_12(ColIndexer_t31825B233FA28DD352A86C1AEF2302E34B7ADD3F * value)
	{
		___colIndexer_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___colIndexer_12), (void*)value);
	}

	inline static int32_t get_offset_of_rowIndexer_13() { return static_cast<int32_t>(offsetof(Mat_t384A6BE55DC2EC885B4728CACEEE992D74F3DD4D, ___rowIndexer_13)); }
	inline RowIndexer_tAC3682A4FD16D8EAD29F8B0C5C1589C3CEE58456 * get_rowIndexer_13() const { return ___rowIndexer_13; }
	inline RowIndexer_tAC3682A4FD16D8EAD29F8B0C5C1589C3CEE58456 ** get_address_of_rowIndexer_13() { return &___rowIndexer_13; }
	inline void set_rowIndexer_13(RowIndexer_tAC3682A4FD16D8EAD29F8B0C5C1589C3CEE58456 * value)
	{
		___rowIndexer_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___rowIndexer_13), (void*)value);
	}
};

struct Mat_t384A6BE55DC2EC885B4728CACEEE992D74F3DD4D_StaticFields
{
public:
	// System.Int32 OpenCvSharp.Mat::SizeOf
	int32_t ___SizeOf_8;

public:
	inline static int32_t get_offset_of_SizeOf_8() { return static_cast<int32_t>(offsetof(Mat_t384A6BE55DC2EC885B4728CACEEE992D74F3DD4D_StaticFields, ___SizeOf_8)); }
	inline int32_t get_SizeOf_8() const { return ___SizeOf_8; }
	inline int32_t* get_address_of_SizeOf_8() { return &___SizeOf_8; }
	inline void set_SizeOf_8(int32_t value)
	{
		___SizeOf_8 = value;
	}
};


// OpenCvSharp.MatExpr
struct MatExpr_t6436346F446DB1028255F0E5D865452E9AB25A22  : public DisposableCvObject_t5E39751FAD49CA698F2EECA50A93C2D9AD4A4775
{
public:
	// System.Boolean OpenCvSharp.MatExpr::disposed
	bool ___disposed_7;
	// OpenCvSharp.MatExpr/ColIndexer OpenCvSharp.MatExpr::col
	ColIndexer_t88637B73E8E96D676FF51CC4805E65ADF708D436 * ___col_8;
	// OpenCvSharp.MatExpr/RowIndexer OpenCvSharp.MatExpr::row
	RowIndexer_t28CD5015FC4AC913EB9B9FCC1FF82C11DD550287 * ___row_9;

public:
	inline static int32_t get_offset_of_disposed_7() { return static_cast<int32_t>(offsetof(MatExpr_t6436346F446DB1028255F0E5D865452E9AB25A22, ___disposed_7)); }
	inline bool get_disposed_7() const { return ___disposed_7; }
	inline bool* get_address_of_disposed_7() { return &___disposed_7; }
	inline void set_disposed_7(bool value)
	{
		___disposed_7 = value;
	}

	inline static int32_t get_offset_of_col_8() { return static_cast<int32_t>(offsetof(MatExpr_t6436346F446DB1028255F0E5D865452E9AB25A22, ___col_8)); }
	inline ColIndexer_t88637B73E8E96D676FF51CC4805E65ADF708D436 * get_col_8() const { return ___col_8; }
	inline ColIndexer_t88637B73E8E96D676FF51CC4805E65ADF708D436 ** get_address_of_col_8() { return &___col_8; }
	inline void set_col_8(ColIndexer_t88637B73E8E96D676FF51CC4805E65ADF708D436 * value)
	{
		___col_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___col_8), (void*)value);
	}

	inline static int32_t get_offset_of_row_9() { return static_cast<int32_t>(offsetof(MatExpr_t6436346F446DB1028255F0E5D865452E9AB25A22, ___row_9)); }
	inline RowIndexer_t28CD5015FC4AC913EB9B9FCC1FF82C11DD550287 * get_row_9() const { return ___row_9; }
	inline RowIndexer_t28CD5015FC4AC913EB9B9FCC1FF82C11DD550287 ** get_address_of_row_9() { return &___row_9; }
	inline void set_row_9(RowIndexer_t28CD5015FC4AC913EB9B9FCC1FF82C11DD550287 * value)
	{
		___row_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___row_9), (void*)value);
	}
};


// OpenCvSharp.Mat`2<System.Byte,OpenCvSharp.MatOfByte>
struct Mat_2_t577D9874F8E1F4BC4927EFAD70792F713BF0E599  : public Mat_t384A6BE55DC2EC885B4728CACEEE992D74F3DD4D
{
public:
	// System.Boolean OpenCvSharp.Mat`2::disposed
	bool ___disposed_14;
	// OpenCvSharp.Mat OpenCvSharp.Mat`2::sourceMat
	Mat_t384A6BE55DC2EC885B4728CACEEE992D74F3DD4D * ___sourceMat_15;

public:
	inline static int32_t get_offset_of_disposed_14() { return static_cast<int32_t>(offsetof(Mat_2_t577D9874F8E1F4BC4927EFAD70792F713BF0E599, ___disposed_14)); }
	inline bool get_disposed_14() const { return ___disposed_14; }
	inline bool* get_address_of_disposed_14() { return &___disposed_14; }
	inline void set_disposed_14(bool value)
	{
		___disposed_14 = value;
	}

	inline static int32_t get_offset_of_sourceMat_15() { return static_cast<int32_t>(offsetof(Mat_2_t577D9874F8E1F4BC4927EFAD70792F713BF0E599, ___sourceMat_15)); }
	inline Mat_t384A6BE55DC2EC885B4728CACEEE992D74F3DD4D * get_sourceMat_15() const { return ___sourceMat_15; }
	inline Mat_t384A6BE55DC2EC885B4728CACEEE992D74F3DD4D ** get_address_of_sourceMat_15() { return &___sourceMat_15; }
	inline void set_sourceMat_15(Mat_t384A6BE55DC2EC885B4728CACEEE992D74F3DD4D * value)
	{
		___sourceMat_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sourceMat_15), (void*)value);
	}
};


// OpenCvSharp.Mat`2<OpenCvSharp.DMatch,OpenCvSharp.MatOfDMatch>
struct Mat_2_tB50B8E9B98A5FC586B6C84C1A8FF7A9571252AE9  : public Mat_t384A6BE55DC2EC885B4728CACEEE992D74F3DD4D
{
public:
	// System.Boolean OpenCvSharp.Mat`2::disposed
	bool ___disposed_14;
	// OpenCvSharp.Mat OpenCvSharp.Mat`2::sourceMat
	Mat_t384A6BE55DC2EC885B4728CACEEE992D74F3DD4D * ___sourceMat_15;

public:
	inline static int32_t get_offset_of_disposed_14() { return static_cast<int32_t>(offsetof(Mat_2_tB50B8E9B98A5FC586B6C84C1A8FF7A9571252AE9, ___disposed_14)); }
	inline bool get_disposed_14() const { return ___disposed_14; }
	inline bool* get_address_of_disposed_14() { return &___disposed_14; }
	inline void set_disposed_14(bool value)
	{
		___disposed_14 = value;
	}

	inline static int32_t get_offset_of_sourceMat_15() { return static_cast<int32_t>(offsetof(Mat_2_tB50B8E9B98A5FC586B6C84C1A8FF7A9571252AE9, ___sourceMat_15)); }
	inline Mat_t384A6BE55DC2EC885B4728CACEEE992D74F3DD4D * get_sourceMat_15() const { return ___sourceMat_15; }
	inline Mat_t384A6BE55DC2EC885B4728CACEEE992D74F3DD4D ** get_address_of_sourceMat_15() { return &___sourceMat_15; }
	inline void set_sourceMat_15(Mat_t384A6BE55DC2EC885B4728CACEEE992D74F3DD4D * value)
	{
		___sourceMat_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sourceMat_15), (void*)value);
	}
};


// OpenCvSharp.Mat`2<System.Double,OpenCvSharp.MatOfDouble>
struct Mat_2_t05BFBEEE1CF84EFC1985D9E25A9B598305A5221D  : public Mat_t384A6BE55DC2EC885B4728CACEEE992D74F3DD4D
{
public:
	// System.Boolean OpenCvSharp.Mat`2::disposed
	bool ___disposed_14;
	// OpenCvSharp.Mat OpenCvSharp.Mat`2::sourceMat
	Mat_t384A6BE55DC2EC885B4728CACEEE992D74F3DD4D * ___sourceMat_15;

public:
	inline static int32_t get_offset_of_disposed_14() { return static_cast<int32_t>(offsetof(Mat_2_t05BFBEEE1CF84EFC1985D9E25A9B598305A5221D, ___disposed_14)); }
	inline bool get_disposed_14() const { return ___disposed_14; }
	inline bool* get_address_of_disposed_14() { return &___disposed_14; }
	inline void set_disposed_14(bool value)
	{
		___disposed_14 = value;
	}

	inline static int32_t get_offset_of_sourceMat_15() { return static_cast<int32_t>(offsetof(Mat_2_t05BFBEEE1CF84EFC1985D9E25A9B598305A5221D, ___sourceMat_15)); }
	inline Mat_t384A6BE55DC2EC885B4728CACEEE992D74F3DD4D * get_sourceMat_15() const { return ___sourceMat_15; }
	inline Mat_t384A6BE55DC2EC885B4728CACEEE992D74F3DD4D ** get_address_of_sourceMat_15() { return &___sourceMat_15; }
	inline void set_sourceMat_15(Mat_t384A6BE55DC2EC885B4728CACEEE992D74F3DD4D * value)
	{
		___sourceMat_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sourceMat_15), (void*)value);
	}
};


// OpenCvSharp.Mat`2<System.Int16,OpenCvSharp.MatOfShort>
struct Mat_2_tBC798EFAB446FF347F1BEDE5860F3337071655BB  : public Mat_t384A6BE55DC2EC885B4728CACEEE992D74F3DD4D
{
public:
	// System.Boolean OpenCvSharp.Mat`2::disposed
	bool ___disposed_14;
	// OpenCvSharp.Mat OpenCvSharp.Mat`2::sourceMat
	Mat_t384A6BE55DC2EC885B4728CACEEE992D74F3DD4D * ___sourceMat_15;

public:
	inline static int32_t get_offset_of_disposed_14() { return static_cast<int32_t>(offsetof(Mat_2_tBC798EFAB446FF347F1BEDE5860F3337071655BB, ___disposed_14)); }
	inline bool get_disposed_14() const { return ___disposed_14; }
	inline bool* get_address_of_disposed_14() { return &___disposed_14; }
	inline void set_disposed_14(bool value)
	{
		___disposed_14 = value;
	}

	inline static int32_t get_offset_of_sourceMat_15() { return static_cast<int32_t>(offsetof(Mat_2_tBC798EFAB446FF347F1BEDE5860F3337071655BB, ___sourceMat_15)); }
	inline Mat_t384A6BE55DC2EC885B4728CACEEE992D74F3DD4D * get_sourceMat_15() const { return ___sourceMat_15; }
	inline Mat_t384A6BE55DC2EC885B4728CACEEE992D74F3DD4D ** get_address_of_sourceMat_15() { return &___sourceMat_15; }
	inline void set_sourceMat_15(Mat_t384A6BE55DC2EC885B4728CACEEE992D74F3DD4D * value)
	{
		___sourceMat_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sourceMat_15), (void*)value);
	}
};


// OpenCvSharp.Mat`2<System.Int32,OpenCvSharp.MatOfInt>
struct Mat_2_t57A9B5AB416408D572ABA2A54FE2821D71165E7E  : public Mat_t384A6BE55DC2EC885B4728CACEEE992D74F3DD4D
{
public:
	// System.Boolean OpenCvSharp.Mat`2::disposed
	bool ___disposed_14;
	// OpenCvSharp.Mat OpenCvSharp.Mat`2::sourceMat
	Mat_t384A6BE55DC2EC885B4728CACEEE992D74F3DD4D * ___sourceMat_15;

public:
	inline static int32_t get_offset_of_disposed_14() { return static_cast<int32_t>(offsetof(Mat_2_t57A9B5AB416408D572ABA2A54FE2821D71165E7E, ___disposed_14)); }
	inline bool get_disposed_14() const { return ___disposed_14; }
	inline bool* get_address_of_disposed_14() { return &___disposed_14; }
	inline void set_disposed_14(bool value)
	{
		___disposed_14 = value;
	}

	inline static int32_t get_offset_of_sourceMat_15() { return static_cast<int32_t>(offsetof(Mat_2_t57A9B5AB416408D572ABA2A54FE2821D71165E7E, ___sourceMat_15)); }
	inline Mat_t384A6BE55DC2EC885B4728CACEEE992D74F3DD4D * get_sourceMat_15() const { return ___sourceMat_15; }
	inline Mat_t384A6BE55DC2EC885B4728CACEEE992D74F3DD4D ** get_address_of_sourceMat_15() { return &___sourceMat_15; }
	inline void set_sourceMat_15(Mat_t384A6BE55DC2EC885B4728CACEEE992D74F3DD4D * value)
	{
		___sourceMat_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sourceMat_15), (void*)value);
	}
};


// OpenCvSharp.Mat`2<OpenCvSharp.Point,OpenCvSharp.MatOfPoint>
struct Mat_2_tB9DDE9A96822AC034DEA30C65C5BA2B1CF3C8F41  : public Mat_t384A6BE55DC2EC885B4728CACEEE992D74F3DD4D
{
public:
	// System.Boolean OpenCvSharp.Mat`2::disposed
	bool ___disposed_14;
	// OpenCvSharp.Mat OpenCvSharp.Mat`2::sourceMat
	Mat_t384A6BE55DC2EC885B4728CACEEE992D74F3DD4D * ___sourceMat_15;

public:
	inline static int32_t get_offset_of_disposed_14() { return static_cast<int32_t>(offsetof(Mat_2_tB9DDE9A96822AC034DEA30C65C5BA2B1CF3C8F41, ___disposed_14)); }
	inline bool get_disposed_14() const { return ___disposed_14; }
	inline bool* get_address_of_disposed_14() { return &___disposed_14; }
	inline void set_disposed_14(bool value)
	{
		___disposed_14 = value;
	}

	inline static int32_t get_offset_of_sourceMat_15() { return static_cast<int32_t>(offsetof(Mat_2_tB9DDE9A96822AC034DEA30C65C5BA2B1CF3C8F41, ___sourceMat_15)); }
	inline Mat_t384A6BE55DC2EC885B4728CACEEE992D74F3DD4D * get_sourceMat_15() const { return ___sourceMat_15; }
	inline Mat_t384A6BE55DC2EC885B4728CACEEE992D74F3DD4D ** get_address_of_sourceMat_15() { return &___sourceMat_15; }
	inline void set_sourceMat_15(Mat_t384A6BE55DC2EC885B4728CACEEE992D74F3DD4D * value)
	{
		___sourceMat_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sourceMat_15), (void*)value);
	}
};


// OpenCvSharp.Mat`2<OpenCvSharp.Point2d,OpenCvSharp.MatOfPoint2d>
struct Mat_2_tCF4D3F969A7F61EFBDD6E2F10D0D059092B07925  : public Mat_t384A6BE55DC2EC885B4728CACEEE992D74F3DD4D
{
public:
	// System.Boolean OpenCvSharp.Mat`2::disposed
	bool ___disposed_14;
	// OpenCvSharp.Mat OpenCvSharp.Mat`2::sourceMat
	Mat_t384A6BE55DC2EC885B4728CACEEE992D74F3DD4D * ___sourceMat_15;

public:
	inline static int32_t get_offset_of_disposed_14() { return static_cast<int32_t>(offsetof(Mat_2_tCF4D3F969A7F61EFBDD6E2F10D0D059092B07925, ___disposed_14)); }
	inline bool get_disposed_14() const { return ___disposed_14; }
	inline bool* get_address_of_disposed_14() { return &___disposed_14; }
	inline void set_disposed_14(bool value)
	{
		___disposed_14 = value;
	}

	inline static int32_t get_offset_of_sourceMat_15() { return static_cast<int32_t>(offsetof(Mat_2_tCF4D3F969A7F61EFBDD6E2F10D0D059092B07925, ___sourceMat_15)); }
	inline Mat_t384A6BE55DC2EC885B4728CACEEE992D74F3DD4D * get_sourceMat_15() const { return ___sourceMat_15; }
	inline Mat_t384A6BE55DC2EC885B4728CACEEE992D74F3DD4D ** get_address_of_sourceMat_15() { return &___sourceMat_15; }
	inline void set_sourceMat_15(Mat_t384A6BE55DC2EC885B4728CACEEE992D74F3DD4D * value)
	{
		___sourceMat_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sourceMat_15), (void*)value);
	}
};


// OpenCvSharp.Mat`2<OpenCvSharp.Point2f,OpenCvSharp.MatOfPoint2f>
struct Mat_2_tF7C77215F0A53AAC89D7B3460E9FFF856248CBAF  : public Mat_t384A6BE55DC2EC885B4728CACEEE992D74F3DD4D
{
public:
	// System.Boolean OpenCvSharp.Mat`2::disposed
	bool ___disposed_14;
	// OpenCvSharp.Mat OpenCvSharp.Mat`2::sourceMat
	Mat_t384A6BE55DC2EC885B4728CACEEE992D74F3DD4D * ___sourceMat_15;

public:
	inline static int32_t get_offset_of_disposed_14() { return static_cast<int32_t>(offsetof(Mat_2_tF7C77215F0A53AAC89D7B3460E9FFF856248CBAF, ___disposed_14)); }
	inline bool get_disposed_14() const { return ___disposed_14; }
	inline bool* get_address_of_disposed_14() { return &___disposed_14; }
	inline void set_disposed_14(bool value)
	{
		___disposed_14 = value;
	}

	inline static int32_t get_offset_of_sourceMat_15() { return static_cast<int32_t>(offsetof(Mat_2_tF7C77215F0A53AAC89D7B3460E9FFF856248CBAF, ___sourceMat_15)); }
	inline Mat_t384A6BE55DC2EC885B4728CACEEE992D74F3DD4D * get_sourceMat_15() const { return ___sourceMat_15; }
	inline Mat_t384A6BE55DC2EC885B4728CACEEE992D74F3DD4D ** get_address_of_sourceMat_15() { return &___sourceMat_15; }
	inline void set_sourceMat_15(Mat_t384A6BE55DC2EC885B4728CACEEE992D74F3DD4D * value)
	{
		___sourceMat_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sourceMat_15), (void*)value);
	}
};


// OpenCvSharp.Mat`2<OpenCvSharp.Point3d,OpenCvSharp.MatOfPoint3d>
struct Mat_2_tD66CC047B8A60CC33CAB3670371B871CC2ED8E0E  : public Mat_t384A6BE55DC2EC885B4728CACEEE992D74F3DD4D
{
public:
	// System.Boolean OpenCvSharp.Mat`2::disposed
	bool ___disposed_14;
	// OpenCvSharp.Mat OpenCvSharp.Mat`2::sourceMat
	Mat_t384A6BE55DC2EC885B4728CACEEE992D74F3DD4D * ___sourceMat_15;

public:
	inline static int32_t get_offset_of_disposed_14() { return static_cast<int32_t>(offsetof(Mat_2_tD66CC047B8A60CC33CAB3670371B871CC2ED8E0E, ___disposed_14)); }
	inline bool get_disposed_14() const { return ___disposed_14; }
	inline bool* get_address_of_disposed_14() { return &___disposed_14; }
	inline void set_disposed_14(bool value)
	{
		___disposed_14 = value;
	}

	inline static int32_t get_offset_of_sourceMat_15() { return static_cast<int32_t>(offsetof(Mat_2_tD66CC047B8A60CC33CAB3670371B871CC2ED8E0E, ___sourceMat_15)); }
	inline Mat_t384A6BE55DC2EC885B4728CACEEE992D74F3DD4D * get_sourceMat_15() const { return ___sourceMat_15; }
	inline Mat_t384A6BE55DC2EC885B4728CACEEE992D74F3DD4D ** get_address_of_sourceMat_15() { return &___sourceMat_15; }
	inline void set_sourceMat_15(Mat_t384A6BE55DC2EC885B4728CACEEE992D74F3DD4D * value)
	{
		___sourceMat_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sourceMat_15), (void*)value);
	}
};


// OpenCvSharp.Mat`2<OpenCvSharp.Point3f,OpenCvSharp.MatOfPoint3f>
struct Mat_2_t086BE661F2051387A2B0D68F380C221CFE40F759  : public Mat_t384A6BE55DC2EC885B4728CACEEE992D74F3DD4D
{
public:
	// System.Boolean OpenCvSharp.Mat`2::disposed
	bool ___disposed_14;
	// OpenCvSharp.Mat OpenCvSharp.Mat`2::sourceMat
	Mat_t384A6BE55DC2EC885B4728CACEEE992D74F3DD4D * ___sourceMat_15;

public:
	inline static int32_t get_offset_of_disposed_14() { return static_cast<int32_t>(offsetof(Mat_2_t086BE661F2051387A2B0D68F380C221CFE40F759, ___disposed_14)); }
	inline bool get_disposed_14() const { return ___disposed_14; }
	inline bool* get_address_of_disposed_14() { return &___disposed_14; }
	inline void set_disposed_14(bool value)
	{
		___disposed_14 = value;
	}

	inline static int32_t get_offset_of_sourceMat_15() { return static_cast<int32_t>(offsetof(Mat_2_t086BE661F2051387A2B0D68F380C221CFE40F759, ___sourceMat_15)); }
	inline Mat_t384A6BE55DC2EC885B4728CACEEE992D74F3DD4D * get_sourceMat_15() const { return ___sourceMat_15; }
	inline Mat_t384A6BE55DC2EC885B4728CACEEE992D74F3DD4D ** get_address_of_sourceMat_15() { return &___sourceMat_15; }
	inline void set_sourceMat_15(Mat_t384A6BE55DC2EC885B4728CACEEE992D74F3DD4D * value)
	{
		___sourceMat_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sourceMat_15), (void*)value);
	}
};


// OpenCvSharp.Mat`2<OpenCvSharp.Point3i,OpenCvSharp.MatOfPoint3i>
struct Mat_2_t7D59020B74665CE02B8FC78A25AA29C0162465DF  : public Mat_t384A6BE55DC2EC885B4728CACEEE992D74F3DD4D
{
public:
	// System.Boolean OpenCvSharp.Mat`2::disposed
	bool ___disposed_14;
	// OpenCvSharp.Mat OpenCvSharp.Mat`2::sourceMat
	Mat_t384A6BE55DC2EC885B4728CACEEE992D74F3DD4D * ___sourceMat_15;

public:
	inline static int32_t get_offset_of_disposed_14() { return static_cast<int32_t>(offsetof(Mat_2_t7D59020B74665CE02B8FC78A25AA29C0162465DF, ___disposed_14)); }
	inline bool get_disposed_14() const { return ___disposed_14; }
	inline bool* get_address_of_disposed_14() { return &___disposed_14; }
	inline void set_disposed_14(bool value)
	{
		___disposed_14 = value;
	}

	inline static int32_t get_offset_of_sourceMat_15() { return static_cast<int32_t>(offsetof(Mat_2_t7D59020B74665CE02B8FC78A25AA29C0162465DF, ___sourceMat_15)); }
	inline Mat_t384A6BE55DC2EC885B4728CACEEE992D74F3DD4D * get_sourceMat_15() const { return ___sourceMat_15; }
	inline Mat_t384A6BE55DC2EC885B4728CACEEE992D74F3DD4D ** get_address_of_sourceMat_15() { return &___sourceMat_15; }
	inline void set_sourceMat_15(Mat_t384A6BE55DC2EC885B4728CACEEE992D74F3DD4D * value)
	{
		___sourceMat_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sourceMat_15), (void*)value);
	}
};


// OpenCvSharp.Mat`2<OpenCvSharp.Rect,OpenCvSharp.MatOfRect>
struct Mat_2_tCB0FEDCA2B5B54A6DCA4E53F64E2E98C03B2BE60  : public Mat_t384A6BE55DC2EC885B4728CACEEE992D74F3DD4D
{
public:
	// System.Boolean OpenCvSharp.Mat`2::disposed
	bool ___disposed_14;
	// OpenCvSharp.Mat OpenCvSharp.Mat`2::sourceMat
	Mat_t384A6BE55DC2EC885B4728CACEEE992D74F3DD4D * ___sourceMat_15;

public:
	inline static int32_t get_offset_of_disposed_14() { return static_cast<int32_t>(offsetof(Mat_2_tCB0FEDCA2B5B54A6DCA4E53F64E2E98C03B2BE60, ___disposed_14)); }
	inline bool get_disposed_14() const { return ___disposed_14; }
	inline bool* get_address_of_disposed_14() { return &___disposed_14; }
	inline void set_disposed_14(bool value)
	{
		___disposed_14 = value;
	}

	inline static int32_t get_offset_of_sourceMat_15() { return static_cast<int32_t>(offsetof(Mat_2_tCB0FEDCA2B5B54A6DCA4E53F64E2E98C03B2BE60, ___sourceMat_15)); }
	inline Mat_t384A6BE55DC2EC885B4728CACEEE992D74F3DD4D * get_sourceMat_15() const { return ___sourceMat_15; }
	inline Mat_t384A6BE55DC2EC885B4728CACEEE992D74F3DD4D ** get_address_of_sourceMat_15() { return &___sourceMat_15; }
	inline void set_sourceMat_15(Mat_t384A6BE55DC2EC885B4728CACEEE992D74F3DD4D * value)
	{
		___sourceMat_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sourceMat_15), (void*)value);
	}
};


// OpenCvSharp.Mat`2<System.Single,OpenCvSharp.MatOfFloat>
struct Mat_2_t33BE1D12D6933D03374FAA394735E27EE5B6B9CB  : public Mat_t384A6BE55DC2EC885B4728CACEEE992D74F3DD4D
{
public:
	// System.Boolean OpenCvSharp.Mat`2::disposed
	bool ___disposed_14;
	// OpenCvSharp.Mat OpenCvSharp.Mat`2::sourceMat
	Mat_t384A6BE55DC2EC885B4728CACEEE992D74F3DD4D * ___sourceMat_15;

public:
	inline static int32_t get_offset_of_disposed_14() { return static_cast<int32_t>(offsetof(Mat_2_t33BE1D12D6933D03374FAA394735E27EE5B6B9CB, ___disposed_14)); }
	inline bool get_disposed_14() const { return ___disposed_14; }
	inline bool* get_address_of_disposed_14() { return &___disposed_14; }
	inline void set_disposed_14(bool value)
	{
		___disposed_14 = value;
	}

	inline static int32_t get_offset_of_sourceMat_15() { return static_cast<int32_t>(offsetof(Mat_2_t33BE1D12D6933D03374FAA394735E27EE5B6B9CB, ___sourceMat_15)); }
	inline Mat_t384A6BE55DC2EC885B4728CACEEE992D74F3DD4D * get_sourceMat_15() const { return ___sourceMat_15; }
	inline Mat_t384A6BE55DC2EC885B4728CACEEE992D74F3DD4D ** get_address_of_sourceMat_15() { return &___sourceMat_15; }
	inline void set_sourceMat_15(Mat_t384A6BE55DC2EC885B4728CACEEE992D74F3DD4D * value)
	{
		___sourceMat_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sourceMat_15), (void*)value);
	}
};


// OpenCvSharp.Mat`2<System.UInt16,OpenCvSharp.MatOfUShort>
struct Mat_2_tAA8BE7A642C61DC4CA959CFC74FA415632034F15  : public Mat_t384A6BE55DC2EC885B4728CACEEE992D74F3DD4D
{
public:
	// System.Boolean OpenCvSharp.Mat`2::disposed
	bool ___disposed_14;
	// OpenCvSharp.Mat OpenCvSharp.Mat`2::sourceMat
	Mat_t384A6BE55DC2EC885B4728CACEEE992D74F3DD4D * ___sourceMat_15;

public:
	inline static int32_t get_offset_of_disposed_14() { return static_cast<int32_t>(offsetof(Mat_2_tAA8BE7A642C61DC4CA959CFC74FA415632034F15, ___disposed_14)); }
	inline bool get_disposed_14() const { return ___disposed_14; }
	inline bool* get_address_of_disposed_14() { return &___disposed_14; }
	inline void set_disposed_14(bool value)
	{
		___disposed_14 = value;
	}

	inline static int32_t get_offset_of_sourceMat_15() { return static_cast<int32_t>(offsetof(Mat_2_tAA8BE7A642C61DC4CA959CFC74FA415632034F15, ___sourceMat_15)); }
	inline Mat_t384A6BE55DC2EC885B4728CACEEE992D74F3DD4D * get_sourceMat_15() const { return ___sourceMat_15; }
	inline Mat_t384A6BE55DC2EC885B4728CACEEE992D74F3DD4D ** get_address_of_sourceMat_15() { return &___sourceMat_15; }
	inline void set_sourceMat_15(Mat_t384A6BE55DC2EC885B4728CACEEE992D74F3DD4D * value)
	{
		___sourceMat_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sourceMat_15), (void*)value);
	}
};


// OpenCvSharp.Mat`2<OpenCvSharp.Vec3b,OpenCvSharp.MatOfByte3>
struct Mat_2_tC7874E30F904315D6C4E6948E9230AF664913190  : public Mat_t384A6BE55DC2EC885B4728CACEEE992D74F3DD4D
{
public:
	// System.Boolean OpenCvSharp.Mat`2::disposed
	bool ___disposed_14;
	// OpenCvSharp.Mat OpenCvSharp.Mat`2::sourceMat
	Mat_t384A6BE55DC2EC885B4728CACEEE992D74F3DD4D * ___sourceMat_15;

public:
	inline static int32_t get_offset_of_disposed_14() { return static_cast<int32_t>(offsetof(Mat_2_tC7874E30F904315D6C4E6948E9230AF664913190, ___disposed_14)); }
	inline bool get_disposed_14() const { return ___disposed_14; }
	inline bool* get_address_of_disposed_14() { return &___disposed_14; }
	inline void set_disposed_14(bool value)
	{
		___disposed_14 = value;
	}

	inline static int32_t get_offset_of_sourceMat_15() { return static_cast<int32_t>(offsetof(Mat_2_tC7874E30F904315D6C4E6948E9230AF664913190, ___sourceMat_15)); }
	inline Mat_t384A6BE55DC2EC885B4728CACEEE992D74F3DD4D * get_sourceMat_15() const { return ___sourceMat_15; }
	inline Mat_t384A6BE55DC2EC885B4728CACEEE992D74F3DD4D ** get_address_of_sourceMat_15() { return &___sourceMat_15; }
	inline void set_sourceMat_15(Mat_t384A6BE55DC2EC885B4728CACEEE992D74F3DD4D * value)
	{
		___sourceMat_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sourceMat_15), (void*)value);
	}
};


// OpenCvSharp.Mat`2<OpenCvSharp.Vec3d,OpenCvSharp.MatOfDouble3>
struct Mat_2_tFED73C9AB6906B0A64C4092F4E9F543DD15A8A8E  : public Mat_t384A6BE55DC2EC885B4728CACEEE992D74F3DD4D
{
public:
	// System.Boolean OpenCvSharp.Mat`2::disposed
	bool ___disposed_14;
	// OpenCvSharp.Mat OpenCvSharp.Mat`2::sourceMat
	Mat_t384A6BE55DC2EC885B4728CACEEE992D74F3DD4D * ___sourceMat_15;

public:
	inline static int32_t get_offset_of_disposed_14() { return static_cast<int32_t>(offsetof(Mat_2_tFED73C9AB6906B0A64C4092F4E9F543DD15A8A8E, ___disposed_14)); }
	inline bool get_disposed_14() const { return ___disposed_14; }
	inline bool* get_address_of_disposed_14() { return &___disposed_14; }
	inline void set_disposed_14(bool value)
	{
		___disposed_14 = value;
	}

	inline static int32_t get_offset_of_sourceMat_15() { return static_cast<int32_t>(offsetof(Mat_2_tFED73C9AB6906B0A64C4092F4E9F543DD15A8A8E, ___sourceMat_15)); }
	inline Mat_t384A6BE55DC2EC885B4728CACEEE992D74F3DD4D * get_sourceMat_15() const { return ___sourceMat_15; }
	inline Mat_t384A6BE55DC2EC885B4728CACEEE992D74F3DD4D ** get_address_of_sourceMat_15() { return &___sourceMat_15; }
	inline void set_sourceMat_15(Mat_t384A6BE55DC2EC885B4728CACEEE992D74F3DD4D * value)
	{
		___sourceMat_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sourceMat_15), (void*)value);
	}
};


// OpenCvSharp.Mat`2<OpenCvSharp.Vec4f,OpenCvSharp.MatOfFloat4>
struct Mat_2_tB3368472AB38BB6D1A2934130418B05DFB44F9A7  : public Mat_t384A6BE55DC2EC885B4728CACEEE992D74F3DD4D
{
public:
	// System.Boolean OpenCvSharp.Mat`2::disposed
	bool ___disposed_14;
	// OpenCvSharp.Mat OpenCvSharp.Mat`2::sourceMat
	Mat_t384A6BE55DC2EC885B4728CACEEE992D74F3DD4D * ___sourceMat_15;

public:
	inline static int32_t get_offset_of_disposed_14() { return static_cast<int32_t>(offsetof(Mat_2_tB3368472AB38BB6D1A2934130418B05DFB44F9A7, ___disposed_14)); }
	inline bool get_disposed_14() const { return ___disposed_14; }
	inline bool* get_address_of_disposed_14() { return &___disposed_14; }
	inline void set_disposed_14(bool value)
	{
		___disposed_14 = value;
	}

	inline static int32_t get_offset_of_sourceMat_15() { return static_cast<int32_t>(offsetof(Mat_2_tB3368472AB38BB6D1A2934130418B05DFB44F9A7, ___sourceMat_15)); }
	inline Mat_t384A6BE55DC2EC885B4728CACEEE992D74F3DD4D * get_sourceMat_15() const { return ___sourceMat_15; }
	inline Mat_t384A6BE55DC2EC885B4728CACEEE992D74F3DD4D ** get_address_of_sourceMat_15() { return &___sourceMat_15; }
	inline void set_sourceMat_15(Mat_t384A6BE55DC2EC885B4728CACEEE992D74F3DD4D * value)
	{
		___sourceMat_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sourceMat_15), (void*)value);
	}
};


// OpenCvSharp.Mat`2<OpenCvSharp.Vec4i,OpenCvSharp.MatOfInt4>
struct Mat_2_t6D19A3841D43AB0A2198320E8F940C502DBFF60E  : public Mat_t384A6BE55DC2EC885B4728CACEEE992D74F3DD4D
{
public:
	// System.Boolean OpenCvSharp.Mat`2::disposed
	bool ___disposed_14;
	// OpenCvSharp.Mat OpenCvSharp.Mat`2::sourceMat
	Mat_t384A6BE55DC2EC885B4728CACEEE992D74F3DD4D * ___sourceMat_15;

public:
	inline static int32_t get_offset_of_disposed_14() { return static_cast<int32_t>(offsetof(Mat_2_t6D19A3841D43AB0A2198320E8F940C502DBFF60E, ___disposed_14)); }
	inline bool get_disposed_14() const { return ___disposed_14; }
	inline bool* get_address_of_disposed_14() { return &___disposed_14; }
	inline void set_disposed_14(bool value)
	{
		___disposed_14 = value;
	}

	inline static int32_t get_offset_of_sourceMat_15() { return static_cast<int32_t>(offsetof(Mat_2_t6D19A3841D43AB0A2198320E8F940C502DBFF60E, ___sourceMat_15)); }
	inline Mat_t384A6BE55DC2EC885B4728CACEEE992D74F3DD4D * get_sourceMat_15() const { return ___sourceMat_15; }
	inline Mat_t384A6BE55DC2EC885B4728CACEEE992D74F3DD4D ** get_address_of_sourceMat_15() { return &___sourceMat_15; }
	inline void set_sourceMat_15(Mat_t384A6BE55DC2EC885B4728CACEEE992D74F3DD4D * value)
	{
		___sourceMat_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sourceMat_15), (void*)value);
	}
};


// OpenCvSharp.Mat`2<OpenCvSharp.Vec6f,OpenCvSharp.MatOfFloat6>
struct Mat_2_t377C3E137377929917F9D9D33DF35660FAF40B30  : public Mat_t384A6BE55DC2EC885B4728CACEEE992D74F3DD4D
{
public:
	// System.Boolean OpenCvSharp.Mat`2::disposed
	bool ___disposed_14;
	// OpenCvSharp.Mat OpenCvSharp.Mat`2::sourceMat
	Mat_t384A6BE55DC2EC885B4728CACEEE992D74F3DD4D * ___sourceMat_15;

public:
	inline static int32_t get_offset_of_disposed_14() { return static_cast<int32_t>(offsetof(Mat_2_t377C3E137377929917F9D9D33DF35660FAF40B30, ___disposed_14)); }
	inline bool get_disposed_14() const { return ___disposed_14; }
	inline bool* get_address_of_disposed_14() { return &___disposed_14; }
	inline void set_disposed_14(bool value)
	{
		___disposed_14 = value;
	}

	inline static int32_t get_offset_of_sourceMat_15() { return static_cast<int32_t>(offsetof(Mat_2_t377C3E137377929917F9D9D33DF35660FAF40B30, ___sourceMat_15)); }
	inline Mat_t384A6BE55DC2EC885B4728CACEEE992D74F3DD4D * get_sourceMat_15() const { return ___sourceMat_15; }
	inline Mat_t384A6BE55DC2EC885B4728CACEEE992D74F3DD4D ** get_address_of_sourceMat_15() { return &___sourceMat_15; }
	inline void set_sourceMat_15(Mat_t384A6BE55DC2EC885B4728CACEEE992D74F3DD4D * value)
	{
		___sourceMat_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sourceMat_15), (void*)value);
	}
};


// Microsoft.MixedReality.Toolkit.BaseDataProviderAccessCoreSystem
struct BaseDataProviderAccessCoreSystem_t6670D57488477D007C9B1BEDB29AE1A620D557B7  : public BaseCoreSystem_tE610AEADB105DC3093B76E8BF1DA11EE1BFA3954
{
public:
	// System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.IMixedRealityDataProvider> Microsoft.MixedReality.Toolkit.BaseDataProviderAccessCoreSystem::dataProviders
	List_1_tFC0217D5D6209725AA94300B5EC0FE4AB71BCC81 * ___dataProviders_17;

public:
	inline static int32_t get_offset_of_dataProviders_17() { return static_cast<int32_t>(offsetof(BaseDataProviderAccessCoreSystem_t6670D57488477D007C9B1BEDB29AE1A620D557B7, ___dataProviders_17)); }
	inline List_1_tFC0217D5D6209725AA94300B5EC0FE4AB71BCC81 * get_dataProviders_17() const { return ___dataProviders_17; }
	inline List_1_tFC0217D5D6209725AA94300B5EC0FE4AB71BCC81 ** get_address_of_dataProviders_17() { return &___dataProviders_17; }
	inline void set_dataProviders_17(List_1_tFC0217D5D6209725AA94300B5EC0FE4AB71BCC81 * value)
	{
		___dataProviders_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dataProviders_17), (void*)value);
	}
};

struct BaseDataProviderAccessCoreSystem_t6670D57488477D007C9B1BEDB29AE1A620D557B7_StaticFields
{
public:
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.BaseDataProviderAccessCoreSystem::UpdatePerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___UpdatePerfMarker_18;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.BaseDataProviderAccessCoreSystem::LateUpdatePerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___LateUpdatePerfMarker_19;

public:
	inline static int32_t get_offset_of_UpdatePerfMarker_18() { return static_cast<int32_t>(offsetof(BaseDataProviderAccessCoreSystem_t6670D57488477D007C9B1BEDB29AE1A620D557B7_StaticFields, ___UpdatePerfMarker_18)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_UpdatePerfMarker_18() const { return ___UpdatePerfMarker_18; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_UpdatePerfMarker_18() { return &___UpdatePerfMarker_18; }
	inline void set_UpdatePerfMarker_18(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___UpdatePerfMarker_18 = value;
	}

	inline static int32_t get_offset_of_LateUpdatePerfMarker_19() { return static_cast<int32_t>(offsetof(BaseDataProviderAccessCoreSystem_t6670D57488477D007C9B1BEDB29AE1A620D557B7_StaticFields, ___LateUpdatePerfMarker_19)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_LateUpdatePerfMarker_19() const { return ___LateUpdatePerfMarker_19; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_LateUpdatePerfMarker_19() { return &___LateUpdatePerfMarker_19; }
	inline void set_LateUpdatePerfMarker_19(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___LateUpdatePerfMarker_19 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem
struct MixedRealityDiagnosticsSystem_tF384487A35FEA15C9F1337619F6FCBDB61C3B6B3  : public BaseCoreSystem_tE610AEADB105DC3093B76E8BF1DA11EE1BFA3954
{
public:
	// System.String Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem::<Name>k__BackingField
	String_t* ___U3CNameU3Ek__BackingField_17;
	// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem::diagnosticVisualizationParent
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___diagnosticVisualizationParent_18;
	// Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem::visualProfiler
	MixedRealityToolkitVisualProfiler_tA99AEF8DE83DBBA54EF0EE72E6D1F159755E4374 * ___visualProfiler_19;
	// Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsProfile Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem::diagnosticsSystemProfile
	MixedRealityDiagnosticsProfile_tD6686340295AF53408C5366276E8F1DBFDC502D4 * ___diagnosticsSystemProfile_20;
	// System.Boolean Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem::showDiagnostics
	bool ___showDiagnostics_21;
	// System.Boolean Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem::showProfiler
	bool ___showProfiler_22;
	// System.Boolean Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem::showFrameInfo
	bool ___showFrameInfo_23;
	// System.Boolean Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem::showMemoryStats
	bool ___showMemoryStats_24;
	// System.Single Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem::frameSampleRate
	float ___frameSampleRate_25;
	// Microsoft.MixedReality.Toolkit.Diagnostics.DiagnosticsEventData Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem::eventData
	DiagnosticsEventData_t26B7291E6F4A3D00DC0A1BF47144FC19C2D19C15 * ___eventData_26;
	// UnityEngine.TextAnchor Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem::windowAnchor
	int32_t ___windowAnchor_29;
	// UnityEngine.Vector2 Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem::windowOffset
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___windowOffset_30;
	// System.Single Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem::windowScale
	float ___windowScale_31;
	// System.Single Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem::windowFollowSpeed
	float ___windowFollowSpeed_32;
	// System.Boolean Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem::showProfilerDuringMRC
	bool ___showProfilerDuringMRC_33;

public:
	inline static int32_t get_offset_of_U3CNameU3Ek__BackingField_17() { return static_cast<int32_t>(offsetof(MixedRealityDiagnosticsSystem_tF384487A35FEA15C9F1337619F6FCBDB61C3B6B3, ___U3CNameU3Ek__BackingField_17)); }
	inline String_t* get_U3CNameU3Ek__BackingField_17() const { return ___U3CNameU3Ek__BackingField_17; }
	inline String_t** get_address_of_U3CNameU3Ek__BackingField_17() { return &___U3CNameU3Ek__BackingField_17; }
	inline void set_U3CNameU3Ek__BackingField_17(String_t* value)
	{
		___U3CNameU3Ek__BackingField_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CNameU3Ek__BackingField_17), (void*)value);
	}

	inline static int32_t get_offset_of_diagnosticVisualizationParent_18() { return static_cast<int32_t>(offsetof(MixedRealityDiagnosticsSystem_tF384487A35FEA15C9F1337619F6FCBDB61C3B6B3, ___diagnosticVisualizationParent_18)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_diagnosticVisualizationParent_18() const { return ___diagnosticVisualizationParent_18; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_diagnosticVisualizationParent_18() { return &___diagnosticVisualizationParent_18; }
	inline void set_diagnosticVisualizationParent_18(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___diagnosticVisualizationParent_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___diagnosticVisualizationParent_18), (void*)value);
	}

	inline static int32_t get_offset_of_visualProfiler_19() { return static_cast<int32_t>(offsetof(MixedRealityDiagnosticsSystem_tF384487A35FEA15C9F1337619F6FCBDB61C3B6B3, ___visualProfiler_19)); }
	inline MixedRealityToolkitVisualProfiler_tA99AEF8DE83DBBA54EF0EE72E6D1F159755E4374 * get_visualProfiler_19() const { return ___visualProfiler_19; }
	inline MixedRealityToolkitVisualProfiler_tA99AEF8DE83DBBA54EF0EE72E6D1F159755E4374 ** get_address_of_visualProfiler_19() { return &___visualProfiler_19; }
	inline void set_visualProfiler_19(MixedRealityToolkitVisualProfiler_tA99AEF8DE83DBBA54EF0EE72E6D1F159755E4374 * value)
	{
		___visualProfiler_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___visualProfiler_19), (void*)value);
	}

	inline static int32_t get_offset_of_diagnosticsSystemProfile_20() { return static_cast<int32_t>(offsetof(MixedRealityDiagnosticsSystem_tF384487A35FEA15C9F1337619F6FCBDB61C3B6B3, ___diagnosticsSystemProfile_20)); }
	inline MixedRealityDiagnosticsProfile_tD6686340295AF53408C5366276E8F1DBFDC502D4 * get_diagnosticsSystemProfile_20() const { return ___diagnosticsSystemProfile_20; }
	inline MixedRealityDiagnosticsProfile_tD6686340295AF53408C5366276E8F1DBFDC502D4 ** get_address_of_diagnosticsSystemProfile_20() { return &___diagnosticsSystemProfile_20; }
	inline void set_diagnosticsSystemProfile_20(MixedRealityDiagnosticsProfile_tD6686340295AF53408C5366276E8F1DBFDC502D4 * value)
	{
		___diagnosticsSystemProfile_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___diagnosticsSystemProfile_20), (void*)value);
	}

	inline static int32_t get_offset_of_showDiagnostics_21() { return static_cast<int32_t>(offsetof(MixedRealityDiagnosticsSystem_tF384487A35FEA15C9F1337619F6FCBDB61C3B6B3, ___showDiagnostics_21)); }
	inline bool get_showDiagnostics_21() const { return ___showDiagnostics_21; }
	inline bool* get_address_of_showDiagnostics_21() { return &___showDiagnostics_21; }
	inline void set_showDiagnostics_21(bool value)
	{
		___showDiagnostics_21 = value;
	}

	inline static int32_t get_offset_of_showProfiler_22() { return static_cast<int32_t>(offsetof(MixedRealityDiagnosticsSystem_tF384487A35FEA15C9F1337619F6FCBDB61C3B6B3, ___showProfiler_22)); }
	inline bool get_showProfiler_22() const { return ___showProfiler_22; }
	inline bool* get_address_of_showProfiler_22() { return &___showProfiler_22; }
	inline void set_showProfiler_22(bool value)
	{
		___showProfiler_22 = value;
	}

	inline static int32_t get_offset_of_showFrameInfo_23() { return static_cast<int32_t>(offsetof(MixedRealityDiagnosticsSystem_tF384487A35FEA15C9F1337619F6FCBDB61C3B6B3, ___showFrameInfo_23)); }
	inline bool get_showFrameInfo_23() const { return ___showFrameInfo_23; }
	inline bool* get_address_of_showFrameInfo_23() { return &___showFrameInfo_23; }
	inline void set_showFrameInfo_23(bool value)
	{
		___showFrameInfo_23 = value;
	}

	inline static int32_t get_offset_of_showMemoryStats_24() { return static_cast<int32_t>(offsetof(MixedRealityDiagnosticsSystem_tF384487A35FEA15C9F1337619F6FCBDB61C3B6B3, ___showMemoryStats_24)); }
	inline bool get_showMemoryStats_24() const { return ___showMemoryStats_24; }
	inline bool* get_address_of_showMemoryStats_24() { return &___showMemoryStats_24; }
	inline void set_showMemoryStats_24(bool value)
	{
		___showMemoryStats_24 = value;
	}

	inline static int32_t get_offset_of_frameSampleRate_25() { return static_cast<int32_t>(offsetof(MixedRealityDiagnosticsSystem_tF384487A35FEA15C9F1337619F6FCBDB61C3B6B3, ___frameSampleRate_25)); }
	inline float get_frameSampleRate_25() const { return ___frameSampleRate_25; }
	inline float* get_address_of_frameSampleRate_25() { return &___frameSampleRate_25; }
	inline void set_frameSampleRate_25(float value)
	{
		___frameSampleRate_25 = value;
	}

	inline static int32_t get_offset_of_eventData_26() { return static_cast<int32_t>(offsetof(MixedRealityDiagnosticsSystem_tF384487A35FEA15C9F1337619F6FCBDB61C3B6B3, ___eventData_26)); }
	inline DiagnosticsEventData_t26B7291E6F4A3D00DC0A1BF47144FC19C2D19C15 * get_eventData_26() const { return ___eventData_26; }
	inline DiagnosticsEventData_t26B7291E6F4A3D00DC0A1BF47144FC19C2D19C15 ** get_address_of_eventData_26() { return &___eventData_26; }
	inline void set_eventData_26(DiagnosticsEventData_t26B7291E6F4A3D00DC0A1BF47144FC19C2D19C15 * value)
	{
		___eventData_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___eventData_26), (void*)value);
	}

	inline static int32_t get_offset_of_windowAnchor_29() { return static_cast<int32_t>(offsetof(MixedRealityDiagnosticsSystem_tF384487A35FEA15C9F1337619F6FCBDB61C3B6B3, ___windowAnchor_29)); }
	inline int32_t get_windowAnchor_29() const { return ___windowAnchor_29; }
	inline int32_t* get_address_of_windowAnchor_29() { return &___windowAnchor_29; }
	inline void set_windowAnchor_29(int32_t value)
	{
		___windowAnchor_29 = value;
	}

	inline static int32_t get_offset_of_windowOffset_30() { return static_cast<int32_t>(offsetof(MixedRealityDiagnosticsSystem_tF384487A35FEA15C9F1337619F6FCBDB61C3B6B3, ___windowOffset_30)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_windowOffset_30() const { return ___windowOffset_30; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_windowOffset_30() { return &___windowOffset_30; }
	inline void set_windowOffset_30(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___windowOffset_30 = value;
	}

	inline static int32_t get_offset_of_windowScale_31() { return static_cast<int32_t>(offsetof(MixedRealityDiagnosticsSystem_tF384487A35FEA15C9F1337619F6FCBDB61C3B6B3, ___windowScale_31)); }
	inline float get_windowScale_31() const { return ___windowScale_31; }
	inline float* get_address_of_windowScale_31() { return &___windowScale_31; }
	inline void set_windowScale_31(float value)
	{
		___windowScale_31 = value;
	}

	inline static int32_t get_offset_of_windowFollowSpeed_32() { return static_cast<int32_t>(offsetof(MixedRealityDiagnosticsSystem_tF384487A35FEA15C9F1337619F6FCBDB61C3B6B3, ___windowFollowSpeed_32)); }
	inline float get_windowFollowSpeed_32() const { return ___windowFollowSpeed_32; }
	inline float* get_address_of_windowFollowSpeed_32() { return &___windowFollowSpeed_32; }
	inline void set_windowFollowSpeed_32(float value)
	{
		___windowFollowSpeed_32 = value;
	}

	inline static int32_t get_offset_of_showProfilerDuringMRC_33() { return static_cast<int32_t>(offsetof(MixedRealityDiagnosticsSystem_tF384487A35FEA15C9F1337619F6FCBDB61C3B6B3, ___showProfilerDuringMRC_33)); }
	inline bool get_showProfilerDuringMRC_33() const { return ___showProfilerDuringMRC_33; }
	inline bool* get_address_of_showProfilerDuringMRC_33() { return &___showProfilerDuringMRC_33; }
	inline void set_showProfilerDuringMRC_33(bool value)
	{
		___showProfilerDuringMRC_33 = value;
	}
};

struct MixedRealityDiagnosticsSystem_tF384487A35FEA15C9F1337619F6FCBDB61C3B6B3_StaticFields
{
public:
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem::OnDiagnosticsChangedPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___OnDiagnosticsChangedPerfMarker_27;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Diagnostics.IMixedRealityDiagnosticsHandler> Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem::OnDiagnosticsChanged
	EventFunction_1_tBF7061B5260F5AB89ED09B309BB9A0AD1985BFFE * ___OnDiagnosticsChanged_28;

public:
	inline static int32_t get_offset_of_OnDiagnosticsChangedPerfMarker_27() { return static_cast<int32_t>(offsetof(MixedRealityDiagnosticsSystem_tF384487A35FEA15C9F1337619F6FCBDB61C3B6B3_StaticFields, ___OnDiagnosticsChangedPerfMarker_27)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_OnDiagnosticsChangedPerfMarker_27() const { return ___OnDiagnosticsChangedPerfMarker_27; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_OnDiagnosticsChangedPerfMarker_27() { return &___OnDiagnosticsChangedPerfMarker_27; }
	inline void set_OnDiagnosticsChangedPerfMarker_27(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___OnDiagnosticsChangedPerfMarker_27 = value;
	}

	inline static int32_t get_offset_of_OnDiagnosticsChanged_28() { return static_cast<int32_t>(offsetof(MixedRealityDiagnosticsSystem_tF384487A35FEA15C9F1337619F6FCBDB61C3B6B3_StaticFields, ___OnDiagnosticsChanged_28)); }
	inline EventFunction_1_tBF7061B5260F5AB89ED09B309BB9A0AD1985BFFE * get_OnDiagnosticsChanged_28() const { return ___OnDiagnosticsChanged_28; }
	inline EventFunction_1_tBF7061B5260F5AB89ED09B309BB9A0AD1985BFFE ** get_address_of_OnDiagnosticsChanged_28() { return &___OnDiagnosticsChanged_28; }
	inline void set_OnDiagnosticsChanged_28(EventFunction_1_tBF7061B5260F5AB89ED09B309BB9A0AD1985BFFE * value)
	{
		___OnDiagnosticsChanged_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnDiagnosticsChanged_28), (void*)value);
	}
};


// OpenCvSharp.MatOfByte
struct MatOfByte_t68642FB2D7441D87F5694564902953FDCE3395B0  : public Mat_2_t577D9874F8E1F4BC4927EFAD70792F713BF0E599
{
public:

public:
};

struct MatOfByte_t68642FB2D7441D87F5694564902953FDCE3395B0_StaticFields
{
public:
	// OpenCvSharp.MatType OpenCvSharp.MatOfByte::ThisType
	MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523  ___ThisType_16;

public:
	inline static int32_t get_offset_of_ThisType_16() { return static_cast<int32_t>(offsetof(MatOfByte_t68642FB2D7441D87F5694564902953FDCE3395B0_StaticFields, ___ThisType_16)); }
	inline MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523  get_ThisType_16() const { return ___ThisType_16; }
	inline MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523 * get_address_of_ThisType_16() { return &___ThisType_16; }
	inline void set_ThisType_16(MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523  value)
	{
		___ThisType_16 = value;
	}
};


// OpenCvSharp.MatOfByte3
struct MatOfByte3_t38A4C9D9F3BD3A472BBB52412AB2D161A8DED9D9  : public Mat_2_tC7874E30F904315D6C4E6948E9230AF664913190
{
public:

public:
};

struct MatOfByte3_t38A4C9D9F3BD3A472BBB52412AB2D161A8DED9D9_StaticFields
{
public:
	// OpenCvSharp.MatType OpenCvSharp.MatOfByte3::ThisType
	MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523  ___ThisType_16;

public:
	inline static int32_t get_offset_of_ThisType_16() { return static_cast<int32_t>(offsetof(MatOfByte3_t38A4C9D9F3BD3A472BBB52412AB2D161A8DED9D9_StaticFields, ___ThisType_16)); }
	inline MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523  get_ThisType_16() const { return ___ThisType_16; }
	inline MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523 * get_address_of_ThisType_16() { return &___ThisType_16; }
	inline void set_ThisType_16(MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523  value)
	{
		___ThisType_16 = value;
	}
};


// OpenCvSharp.MatOfDMatch
struct MatOfDMatch_t2B2BF0D6362711FAF6A8B31498A1A39B3469417E  : public Mat_2_tB50B8E9B98A5FC586B6C84C1A8FF7A9571252AE9
{
public:

public:
};

struct MatOfDMatch_t2B2BF0D6362711FAF6A8B31498A1A39B3469417E_StaticFields
{
public:
	// OpenCvSharp.MatType OpenCvSharp.MatOfDMatch::ThisType
	MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523  ___ThisType_16;

public:
	inline static int32_t get_offset_of_ThisType_16() { return static_cast<int32_t>(offsetof(MatOfDMatch_t2B2BF0D6362711FAF6A8B31498A1A39B3469417E_StaticFields, ___ThisType_16)); }
	inline MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523  get_ThisType_16() const { return ___ThisType_16; }
	inline MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523 * get_address_of_ThisType_16() { return &___ThisType_16; }
	inline void set_ThisType_16(MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523  value)
	{
		___ThisType_16 = value;
	}
};


// OpenCvSharp.MatOfDouble
struct MatOfDouble_tA65BB18DA81D92CC5A26855BB62EAD0D84B6852E  : public Mat_2_t05BFBEEE1CF84EFC1985D9E25A9B598305A5221D
{
public:

public:
};

struct MatOfDouble_tA65BB18DA81D92CC5A26855BB62EAD0D84B6852E_StaticFields
{
public:
	// OpenCvSharp.MatType OpenCvSharp.MatOfDouble::ThisType
	MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523  ___ThisType_16;

public:
	inline static int32_t get_offset_of_ThisType_16() { return static_cast<int32_t>(offsetof(MatOfDouble_tA65BB18DA81D92CC5A26855BB62EAD0D84B6852E_StaticFields, ___ThisType_16)); }
	inline MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523  get_ThisType_16() const { return ___ThisType_16; }
	inline MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523 * get_address_of_ThisType_16() { return &___ThisType_16; }
	inline void set_ThisType_16(MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523  value)
	{
		___ThisType_16 = value;
	}
};


// OpenCvSharp.MatOfDouble3
struct MatOfDouble3_tB9E01D95106E4B541A1BBEA9599808BA3A682F37  : public Mat_2_tFED73C9AB6906B0A64C4092F4E9F543DD15A8A8E
{
public:

public:
};

struct MatOfDouble3_tB9E01D95106E4B541A1BBEA9599808BA3A682F37_StaticFields
{
public:
	// OpenCvSharp.MatType OpenCvSharp.MatOfDouble3::ThisType
	MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523  ___ThisType_16;

public:
	inline static int32_t get_offset_of_ThisType_16() { return static_cast<int32_t>(offsetof(MatOfDouble3_tB9E01D95106E4B541A1BBEA9599808BA3A682F37_StaticFields, ___ThisType_16)); }
	inline MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523  get_ThisType_16() const { return ___ThisType_16; }
	inline MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523 * get_address_of_ThisType_16() { return &___ThisType_16; }
	inline void set_ThisType_16(MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523  value)
	{
		___ThisType_16 = value;
	}
};


// OpenCvSharp.MatOfFloat
struct MatOfFloat_t1B02C89C5152A26A4FB7A04C847E8353A52805B1  : public Mat_2_t33BE1D12D6933D03374FAA394735E27EE5B6B9CB
{
public:

public:
};

struct MatOfFloat_t1B02C89C5152A26A4FB7A04C847E8353A52805B1_StaticFields
{
public:
	// OpenCvSharp.MatType OpenCvSharp.MatOfFloat::ThisType
	MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523  ___ThisType_16;

public:
	inline static int32_t get_offset_of_ThisType_16() { return static_cast<int32_t>(offsetof(MatOfFloat_t1B02C89C5152A26A4FB7A04C847E8353A52805B1_StaticFields, ___ThisType_16)); }
	inline MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523  get_ThisType_16() const { return ___ThisType_16; }
	inline MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523 * get_address_of_ThisType_16() { return &___ThisType_16; }
	inline void set_ThisType_16(MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523  value)
	{
		___ThisType_16 = value;
	}
};


// OpenCvSharp.MatOfFloat4
struct MatOfFloat4_t813258A1EAA3DF92647631021C2E8861070C87DD  : public Mat_2_tB3368472AB38BB6D1A2934130418B05DFB44F9A7
{
public:

public:
};

struct MatOfFloat4_t813258A1EAA3DF92647631021C2E8861070C87DD_StaticFields
{
public:
	// OpenCvSharp.MatType OpenCvSharp.MatOfFloat4::ThisType
	MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523  ___ThisType_16;

public:
	inline static int32_t get_offset_of_ThisType_16() { return static_cast<int32_t>(offsetof(MatOfFloat4_t813258A1EAA3DF92647631021C2E8861070C87DD_StaticFields, ___ThisType_16)); }
	inline MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523  get_ThisType_16() const { return ___ThisType_16; }
	inline MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523 * get_address_of_ThisType_16() { return &___ThisType_16; }
	inline void set_ThisType_16(MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523  value)
	{
		___ThisType_16 = value;
	}
};


// OpenCvSharp.MatOfFloat6
struct MatOfFloat6_t9F95B4631607BBEB117420923DB69080F249A597  : public Mat_2_t377C3E137377929917F9D9D33DF35660FAF40B30
{
public:

public:
};

struct MatOfFloat6_t9F95B4631607BBEB117420923DB69080F249A597_StaticFields
{
public:
	// OpenCvSharp.MatType OpenCvSharp.MatOfFloat6::ThisType
	MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523  ___ThisType_16;

public:
	inline static int32_t get_offset_of_ThisType_16() { return static_cast<int32_t>(offsetof(MatOfFloat6_t9F95B4631607BBEB117420923DB69080F249A597_StaticFields, ___ThisType_16)); }
	inline MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523  get_ThisType_16() const { return ___ThisType_16; }
	inline MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523 * get_address_of_ThisType_16() { return &___ThisType_16; }
	inline void set_ThisType_16(MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523  value)
	{
		___ThisType_16 = value;
	}
};


// OpenCvSharp.MatOfInt
struct MatOfInt_tE786CAFD1207F521D4B7B521BB5ABA525E7402AC  : public Mat_2_t57A9B5AB416408D572ABA2A54FE2821D71165E7E
{
public:

public:
};

struct MatOfInt_tE786CAFD1207F521D4B7B521BB5ABA525E7402AC_StaticFields
{
public:
	// OpenCvSharp.MatType OpenCvSharp.MatOfInt::ThisType
	MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523  ___ThisType_16;

public:
	inline static int32_t get_offset_of_ThisType_16() { return static_cast<int32_t>(offsetof(MatOfInt_tE786CAFD1207F521D4B7B521BB5ABA525E7402AC_StaticFields, ___ThisType_16)); }
	inline MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523  get_ThisType_16() const { return ___ThisType_16; }
	inline MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523 * get_address_of_ThisType_16() { return &___ThisType_16; }
	inline void set_ThisType_16(MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523  value)
	{
		___ThisType_16 = value;
	}
};


// OpenCvSharp.MatOfInt4
struct MatOfInt4_t8E142A1C1F0B8546B46E6FF0062AC49DB592D453  : public Mat_2_t6D19A3841D43AB0A2198320E8F940C502DBFF60E
{
public:

public:
};

struct MatOfInt4_t8E142A1C1F0B8546B46E6FF0062AC49DB592D453_StaticFields
{
public:
	// OpenCvSharp.MatType OpenCvSharp.MatOfInt4::ThisType
	MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523  ___ThisType_16;

public:
	inline static int32_t get_offset_of_ThisType_16() { return static_cast<int32_t>(offsetof(MatOfInt4_t8E142A1C1F0B8546B46E6FF0062AC49DB592D453_StaticFields, ___ThisType_16)); }
	inline MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523  get_ThisType_16() const { return ___ThisType_16; }
	inline MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523 * get_address_of_ThisType_16() { return &___ThisType_16; }
	inline void set_ThisType_16(MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523  value)
	{
		___ThisType_16 = value;
	}
};


// OpenCvSharp.MatOfPoint
struct MatOfPoint_t82C8154594BF2C9235DACF5887B3F2D0F327FC67  : public Mat_2_tB9DDE9A96822AC034DEA30C65C5BA2B1CF3C8F41
{
public:

public:
};

struct MatOfPoint_t82C8154594BF2C9235DACF5887B3F2D0F327FC67_StaticFields
{
public:
	// OpenCvSharp.MatType OpenCvSharp.MatOfPoint::ThisType
	MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523  ___ThisType_16;

public:
	inline static int32_t get_offset_of_ThisType_16() { return static_cast<int32_t>(offsetof(MatOfPoint_t82C8154594BF2C9235DACF5887B3F2D0F327FC67_StaticFields, ___ThisType_16)); }
	inline MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523  get_ThisType_16() const { return ___ThisType_16; }
	inline MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523 * get_address_of_ThisType_16() { return &___ThisType_16; }
	inline void set_ThisType_16(MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523  value)
	{
		___ThisType_16 = value;
	}
};


// OpenCvSharp.MatOfPoint2d
struct MatOfPoint2d_t05A49A8807EC14E587A8A209E7E8A81046F47441  : public Mat_2_tCF4D3F969A7F61EFBDD6E2F10D0D059092B07925
{
public:

public:
};

struct MatOfPoint2d_t05A49A8807EC14E587A8A209E7E8A81046F47441_StaticFields
{
public:
	// OpenCvSharp.MatType OpenCvSharp.MatOfPoint2d::ThisType
	MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523  ___ThisType_16;

public:
	inline static int32_t get_offset_of_ThisType_16() { return static_cast<int32_t>(offsetof(MatOfPoint2d_t05A49A8807EC14E587A8A209E7E8A81046F47441_StaticFields, ___ThisType_16)); }
	inline MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523  get_ThisType_16() const { return ___ThisType_16; }
	inline MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523 * get_address_of_ThisType_16() { return &___ThisType_16; }
	inline void set_ThisType_16(MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523  value)
	{
		___ThisType_16 = value;
	}
};


// OpenCvSharp.MatOfPoint2f
struct MatOfPoint2f_tE73AA96EE9187F7241A79602C4F4C5331A7F1AAC  : public Mat_2_tF7C77215F0A53AAC89D7B3460E9FFF856248CBAF
{
public:

public:
};

struct MatOfPoint2f_tE73AA96EE9187F7241A79602C4F4C5331A7F1AAC_StaticFields
{
public:
	// OpenCvSharp.MatType OpenCvSharp.MatOfPoint2f::ThisType
	MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523  ___ThisType_16;

public:
	inline static int32_t get_offset_of_ThisType_16() { return static_cast<int32_t>(offsetof(MatOfPoint2f_tE73AA96EE9187F7241A79602C4F4C5331A7F1AAC_StaticFields, ___ThisType_16)); }
	inline MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523  get_ThisType_16() const { return ___ThisType_16; }
	inline MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523 * get_address_of_ThisType_16() { return &___ThisType_16; }
	inline void set_ThisType_16(MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523  value)
	{
		___ThisType_16 = value;
	}
};


// OpenCvSharp.MatOfPoint3d
struct MatOfPoint3d_tE9CD2531A5B2980FDEC56EF7B27F0BD471729BDA  : public Mat_2_tD66CC047B8A60CC33CAB3670371B871CC2ED8E0E
{
public:

public:
};

struct MatOfPoint3d_tE9CD2531A5B2980FDEC56EF7B27F0BD471729BDA_StaticFields
{
public:
	// OpenCvSharp.MatType OpenCvSharp.MatOfPoint3d::ThisType
	MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523  ___ThisType_16;

public:
	inline static int32_t get_offset_of_ThisType_16() { return static_cast<int32_t>(offsetof(MatOfPoint3d_tE9CD2531A5B2980FDEC56EF7B27F0BD471729BDA_StaticFields, ___ThisType_16)); }
	inline MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523  get_ThisType_16() const { return ___ThisType_16; }
	inline MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523 * get_address_of_ThisType_16() { return &___ThisType_16; }
	inline void set_ThisType_16(MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523  value)
	{
		___ThisType_16 = value;
	}
};


// OpenCvSharp.MatOfPoint3f
struct MatOfPoint3f_tD631AF69C09EE50CED965E0DAD29DED485BF98BC  : public Mat_2_t086BE661F2051387A2B0D68F380C221CFE40F759
{
public:

public:
};

struct MatOfPoint3f_tD631AF69C09EE50CED965E0DAD29DED485BF98BC_StaticFields
{
public:
	// OpenCvSharp.MatType OpenCvSharp.MatOfPoint3f::ThisType
	MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523  ___ThisType_16;

public:
	inline static int32_t get_offset_of_ThisType_16() { return static_cast<int32_t>(offsetof(MatOfPoint3f_tD631AF69C09EE50CED965E0DAD29DED485BF98BC_StaticFields, ___ThisType_16)); }
	inline MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523  get_ThisType_16() const { return ___ThisType_16; }
	inline MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523 * get_address_of_ThisType_16() { return &___ThisType_16; }
	inline void set_ThisType_16(MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523  value)
	{
		___ThisType_16 = value;
	}
};


// OpenCvSharp.MatOfPoint3i
struct MatOfPoint3i_tC19C5BB5EC783471498BC5FD022C0E861EB10863  : public Mat_2_t7D59020B74665CE02B8FC78A25AA29C0162465DF
{
public:

public:
};

struct MatOfPoint3i_tC19C5BB5EC783471498BC5FD022C0E861EB10863_StaticFields
{
public:
	// OpenCvSharp.MatType OpenCvSharp.MatOfPoint3i::ThisType
	MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523  ___ThisType_16;

public:
	inline static int32_t get_offset_of_ThisType_16() { return static_cast<int32_t>(offsetof(MatOfPoint3i_tC19C5BB5EC783471498BC5FD022C0E861EB10863_StaticFields, ___ThisType_16)); }
	inline MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523  get_ThisType_16() const { return ___ThisType_16; }
	inline MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523 * get_address_of_ThisType_16() { return &___ThisType_16; }
	inline void set_ThisType_16(MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523  value)
	{
		___ThisType_16 = value;
	}
};


// OpenCvSharp.MatOfRect
struct MatOfRect_tF10CAD3460A9E8C6910DDDA5E2DD774BFE3AD56A  : public Mat_2_tCB0FEDCA2B5B54A6DCA4E53F64E2E98C03B2BE60
{
public:

public:
};

struct MatOfRect_tF10CAD3460A9E8C6910DDDA5E2DD774BFE3AD56A_StaticFields
{
public:
	// OpenCvSharp.MatType OpenCvSharp.MatOfRect::ThisType
	MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523  ___ThisType_16;

public:
	inline static int32_t get_offset_of_ThisType_16() { return static_cast<int32_t>(offsetof(MatOfRect_tF10CAD3460A9E8C6910DDDA5E2DD774BFE3AD56A_StaticFields, ___ThisType_16)); }
	inline MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523  get_ThisType_16() const { return ___ThisType_16; }
	inline MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523 * get_address_of_ThisType_16() { return &___ThisType_16; }
	inline void set_ThisType_16(MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523  value)
	{
		___ThisType_16 = value;
	}
};


// OpenCvSharp.MatOfShort
struct MatOfShort_tA5FC7959635C29649626A2D3427799645D3A244E  : public Mat_2_tBC798EFAB446FF347F1BEDE5860F3337071655BB
{
public:

public:
};

struct MatOfShort_tA5FC7959635C29649626A2D3427799645D3A244E_StaticFields
{
public:
	// OpenCvSharp.MatType OpenCvSharp.MatOfShort::ThisType
	MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523  ___ThisType_16;

public:
	inline static int32_t get_offset_of_ThisType_16() { return static_cast<int32_t>(offsetof(MatOfShort_tA5FC7959635C29649626A2D3427799645D3A244E_StaticFields, ___ThisType_16)); }
	inline MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523  get_ThisType_16() const { return ___ThisType_16; }
	inline MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523 * get_address_of_ThisType_16() { return &___ThisType_16; }
	inline void set_ThisType_16(MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523  value)
	{
		___ThisType_16 = value;
	}
};


// OpenCvSharp.MatOfUShort
struct MatOfUShort_t21F85688DF91E44422B3C189B9F5BABD4DD54FFD  : public Mat_2_tAA8BE7A642C61DC4CA959CFC74FA415632034F15
{
public:

public:
};

struct MatOfUShort_t21F85688DF91E44422B3C189B9F5BABD4DD54FFD_StaticFields
{
public:
	// OpenCvSharp.MatType OpenCvSharp.MatOfUShort::ThisType
	MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523  ___ThisType_16;

public:
	inline static int32_t get_offset_of_ThisType_16() { return static_cast<int32_t>(offsetof(MatOfUShort_t21F85688DF91E44422B3C189B9F5BABD4DD54FFD_StaticFields, ___ThisType_16)); }
	inline MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523  get_ThisType_16() const { return ___ThisType_16; }
	inline MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523 * get_address_of_ThisType_16() { return &___ThisType_16; }
	inline void set_ThisType_16(MatType_t8F6920597787294411C6DD5A81883DE9ECA5D523  value)
	{
		___ThisType_16 = value;
	}
};


// Microsoft.MixedReality.Toolkit.CameraSystem.MixedRealityCameraSystem
struct MixedRealityCameraSystem_t6CF808C08DBDBA71D5BD96EAEF18BEDEFFA45054  : public BaseDataProviderAccessCoreSystem_t6670D57488477D007C9B1BEDB29AE1A620D557B7
{
public:
	// System.String Microsoft.MixedReality.Toolkit.CameraSystem.MixedRealityCameraSystem::<Name>k__BackingField
	String_t* ___U3CNameU3Ek__BackingField_20;
	// System.UInt32 Microsoft.MixedReality.Toolkit.CameraSystem.MixedRealityCameraSystem::<SourceId>k__BackingField
	uint32_t ___U3CSourceIdU3Ek__BackingField_21;
	// System.String Microsoft.MixedReality.Toolkit.CameraSystem.MixedRealityCameraSystem::<SourceName>k__BackingField
	String_t* ___U3CSourceNameU3Ek__BackingField_22;
	// Microsoft.MixedReality.Toolkit.CameraSystem.DisplayType Microsoft.MixedReality.Toolkit.CameraSystem.MixedRealityCameraSystem::currentDisplayType
	int32_t ___currentDisplayType_23;
	// System.Boolean Microsoft.MixedReality.Toolkit.CameraSystem.MixedRealityCameraSystem::cameraOpaqueLastFrame
	bool ___cameraOpaqueLastFrame_24;
	// System.Boolean Microsoft.MixedReality.Toolkit.CameraSystem.MixedRealityCameraSystem::useFallbackBehavior
	bool ___useFallbackBehavior_25;

public:
	inline static int32_t get_offset_of_U3CNameU3Ek__BackingField_20() { return static_cast<int32_t>(offsetof(MixedRealityCameraSystem_t6CF808C08DBDBA71D5BD96EAEF18BEDEFFA45054, ___U3CNameU3Ek__BackingField_20)); }
	inline String_t* get_U3CNameU3Ek__BackingField_20() const { return ___U3CNameU3Ek__BackingField_20; }
	inline String_t** get_address_of_U3CNameU3Ek__BackingField_20() { return &___U3CNameU3Ek__BackingField_20; }
	inline void set_U3CNameU3Ek__BackingField_20(String_t* value)
	{
		___U3CNameU3Ek__BackingField_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CNameU3Ek__BackingField_20), (void*)value);
	}

	inline static int32_t get_offset_of_U3CSourceIdU3Ek__BackingField_21() { return static_cast<int32_t>(offsetof(MixedRealityCameraSystem_t6CF808C08DBDBA71D5BD96EAEF18BEDEFFA45054, ___U3CSourceIdU3Ek__BackingField_21)); }
	inline uint32_t get_U3CSourceIdU3Ek__BackingField_21() const { return ___U3CSourceIdU3Ek__BackingField_21; }
	inline uint32_t* get_address_of_U3CSourceIdU3Ek__BackingField_21() { return &___U3CSourceIdU3Ek__BackingField_21; }
	inline void set_U3CSourceIdU3Ek__BackingField_21(uint32_t value)
	{
		___U3CSourceIdU3Ek__BackingField_21 = value;
	}

	inline static int32_t get_offset_of_U3CSourceNameU3Ek__BackingField_22() { return static_cast<int32_t>(offsetof(MixedRealityCameraSystem_t6CF808C08DBDBA71D5BD96EAEF18BEDEFFA45054, ___U3CSourceNameU3Ek__BackingField_22)); }
	inline String_t* get_U3CSourceNameU3Ek__BackingField_22() const { return ___U3CSourceNameU3Ek__BackingField_22; }
	inline String_t** get_address_of_U3CSourceNameU3Ek__BackingField_22() { return &___U3CSourceNameU3Ek__BackingField_22; }
	inline void set_U3CSourceNameU3Ek__BackingField_22(String_t* value)
	{
		___U3CSourceNameU3Ek__BackingField_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CSourceNameU3Ek__BackingField_22), (void*)value);
	}

	inline static int32_t get_offset_of_currentDisplayType_23() { return static_cast<int32_t>(offsetof(MixedRealityCameraSystem_t6CF808C08DBDBA71D5BD96EAEF18BEDEFFA45054, ___currentDisplayType_23)); }
	inline int32_t get_currentDisplayType_23() const { return ___currentDisplayType_23; }
	inline int32_t* get_address_of_currentDisplayType_23() { return &___currentDisplayType_23; }
	inline void set_currentDisplayType_23(int32_t value)
	{
		___currentDisplayType_23 = value;
	}

	inline static int32_t get_offset_of_cameraOpaqueLastFrame_24() { return static_cast<int32_t>(offsetof(MixedRealityCameraSystem_t6CF808C08DBDBA71D5BD96EAEF18BEDEFFA45054, ___cameraOpaqueLastFrame_24)); }
	inline bool get_cameraOpaqueLastFrame_24() const { return ___cameraOpaqueLastFrame_24; }
	inline bool* get_address_of_cameraOpaqueLastFrame_24() { return &___cameraOpaqueLastFrame_24; }
	inline void set_cameraOpaqueLastFrame_24(bool value)
	{
		___cameraOpaqueLastFrame_24 = value;
	}

	inline static int32_t get_offset_of_useFallbackBehavior_25() { return static_cast<int32_t>(offsetof(MixedRealityCameraSystem_t6CF808C08DBDBA71D5BD96EAEF18BEDEFFA45054, ___useFallbackBehavior_25)); }
	inline bool get_useFallbackBehavior_25() const { return ___useFallbackBehavior_25; }
	inline bool* get_address_of_useFallbackBehavior_25() { return &___useFallbackBehavior_25; }
	inline void set_useFallbackBehavior_25(bool value)
	{
		___useFallbackBehavior_25 = value;
	}
};

struct MixedRealityCameraSystem_t6CF808C08DBDBA71D5BD96EAEF18BEDEFFA45054_StaticFields
{
public:
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.CameraSystem.MixedRealityCameraSystem::UpdatePerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___UpdatePerfMarker_26;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.CameraSystem.MixedRealityCameraSystem::ApplySettingsForOpaquePerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___ApplySettingsForOpaquePerfMarker_27;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.CameraSystem.MixedRealityCameraSystem::ApplySettingsForTransparentPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___ApplySettingsForTransparentPerfMarker_28;

public:
	inline static int32_t get_offset_of_UpdatePerfMarker_26() { return static_cast<int32_t>(offsetof(MixedRealityCameraSystem_t6CF808C08DBDBA71D5BD96EAEF18BEDEFFA45054_StaticFields, ___UpdatePerfMarker_26)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_UpdatePerfMarker_26() const { return ___UpdatePerfMarker_26; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_UpdatePerfMarker_26() { return &___UpdatePerfMarker_26; }
	inline void set_UpdatePerfMarker_26(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___UpdatePerfMarker_26 = value;
	}

	inline static int32_t get_offset_of_ApplySettingsForOpaquePerfMarker_27() { return static_cast<int32_t>(offsetof(MixedRealityCameraSystem_t6CF808C08DBDBA71D5BD96EAEF18BEDEFFA45054_StaticFields, ___ApplySettingsForOpaquePerfMarker_27)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_ApplySettingsForOpaquePerfMarker_27() const { return ___ApplySettingsForOpaquePerfMarker_27; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_ApplySettingsForOpaquePerfMarker_27() { return &___ApplySettingsForOpaquePerfMarker_27; }
	inline void set_ApplySettingsForOpaquePerfMarker_27(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___ApplySettingsForOpaquePerfMarker_27 = value;
	}

	inline static int32_t get_offset_of_ApplySettingsForTransparentPerfMarker_28() { return static_cast<int32_t>(offsetof(MixedRealityCameraSystem_t6CF808C08DBDBA71D5BD96EAEF18BEDEFFA45054_StaticFields, ___ApplySettingsForTransparentPerfMarker_28)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_ApplySettingsForTransparentPerfMarker_28() const { return ___ApplySettingsForTransparentPerfMarker_28; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_ApplySettingsForTransparentPerfMarker_28() { return &___ApplySettingsForTransparentPerfMarker_28; }
	inline void set_ApplySettingsForTransparentPerfMarker_28(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___ApplySettingsForTransparentPerfMarker_28 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem
struct MixedRealityInputSystem_tEA69EFC7CCC70EFD1283AE13DA6AA9674517EB8F  : public BaseDataProviderAccessCoreSystem_t6670D57488477D007C9B1BEDB29AE1A620D557B7
{
public:
	// System.String Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::<Name>k__BackingField
	String_t* ___U3CNameU3Ek__BackingField_21;
	// System.Action Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::InputEnabled
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___InputEnabled_22;
	// System.Action Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::InputDisabled
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___InputDisabled_23;
	// System.Collections.Generic.HashSet`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::<DetectedInputSources>k__BackingField
	HashSet_1_t2B48F2A2DDD8E60200B3F7E2CE833007064C7D1D * ___U3CDetectedInputSourcesU3Ek__BackingField_24;
	// System.Collections.Generic.HashSet`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityController> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::<DetectedControllers>k__BackingField
	HashSet_1_t85E64382C5CCBB900CA960D1CEF4DE8ECE1E4837 * ___U3CDetectedControllersU3Ek__BackingField_25;
	// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystemProfile Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::inputSystemProfile
	MixedRealityInputSystemProfile_tD94F4B1680EFF39B21E58E438A8EDE6FF8B8BA0C * ___inputSystemProfile_26;
	// Microsoft.MixedReality.Toolkit.Input.IMixedRealityGazeProvider Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::<GazeProvider>k__BackingField
	RuntimeObject* ___U3CGazeProviderU3Ek__BackingField_27;
	// Microsoft.MixedReality.Toolkit.Input.IMixedRealityEyeGazeProvider Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::<EyeGazeProvider>k__BackingField
	RuntimeObject* ___U3CEyeGazeProviderU3Ek__BackingField_28;
	// System.Collections.Generic.Stack`1<UnityEngine.GameObject> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::modalInputStack
	Stack_1_tAE566EECB2D3565C2EDCA60875D2F6444CC3F9AE * ___modalInputStack_29;
	// System.Collections.Generic.Stack`1<UnityEngine.GameObject> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::fallbackInputStack
	Stack_1_tAE566EECB2D3565C2EDCA60875D2F6444CC3F9AE * ___fallbackInputStack_30;
	// System.Int32 Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::disabledRefCount
	int32_t ___disabledRefCount_31;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::isInputModuleAdded
	bool ___isInputModuleAdded_32;
	// Microsoft.MixedReality.Toolkit.Input.SourceStateEventData Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::sourceStateEventData
	SourceStateEventData_t9B7FE1063C45FBE41CED4CD246D43E05D0961576 * ___sourceStateEventData_33;
	// Microsoft.MixedReality.Toolkit.Input.SourcePoseEventData`1<Microsoft.MixedReality.Toolkit.TrackingState> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::sourceTrackingEventData
	SourcePoseEventData_1_t3BE0ED408F0D7326991F4F4EC8B11F9FC5D35821 * ___sourceTrackingEventData_34;
	// Microsoft.MixedReality.Toolkit.Input.SourcePoseEventData`1<UnityEngine.Vector2> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::sourceVector2EventData
	SourcePoseEventData_1_t1159A092B1D54CCCB3312D43916D9D913210176F * ___sourceVector2EventData_35;
	// Microsoft.MixedReality.Toolkit.Input.SourcePoseEventData`1<UnityEngine.Vector3> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::sourcePositionEventData
	SourcePoseEventData_1_t5A336A07D67DEF2AAEE8F7FCC44E3BB2C6455564 * ___sourcePositionEventData_36;
	// Microsoft.MixedReality.Toolkit.Input.SourcePoseEventData`1<UnityEngine.Quaternion> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::sourceRotationEventData
	SourcePoseEventData_1_t3A7D7BBDE63A4DD8D7CD6BCB340C47A544C94E87 * ___sourceRotationEventData_37;
	// Microsoft.MixedReality.Toolkit.Input.SourcePoseEventData`1<Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::sourcePoseEventData
	SourcePoseEventData_1_t0EC0F5B247C5FB6867885FD9F549C26B609E36FE * ___sourcePoseEventData_38;
	// Microsoft.MixedReality.Toolkit.Input.FocusEventData Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::focusEventData
	FocusEventData_tB86FBD326E3B9EFEB5284D55CD0413CC83327F06 * ___focusEventData_39;
	// Microsoft.MixedReality.Toolkit.Input.InputEventData Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::inputEventData
	InputEventData_tC89213D733BAC80CB214D6C99D989B0A0BB78C0F * ___inputEventData_40;
	// Microsoft.MixedReality.Toolkit.Input.MixedRealityPointerEventData Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::pointerEventData
	MixedRealityPointerEventData_t4E73A7D4CF106B1B66A18BEA6339E99BCA708AC9 * ___pointerEventData_41;
	// Microsoft.MixedReality.Toolkit.Input.InputEventData`1<System.Single> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::floatInputEventData
	InputEventData_1_tDB463B85E4DBD65434118084E8C52FF4EA5B3A3C * ___floatInputEventData_42;
	// Microsoft.MixedReality.Toolkit.Input.InputEventData`1<UnityEngine.Vector2> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::vector2InputEventData
	InputEventData_1_t75B4D8E000254E97AC29E980DA3441BDC61A35AA * ___vector2InputEventData_43;
	// Microsoft.MixedReality.Toolkit.Input.InputEventData`1<UnityEngine.Vector3> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::positionInputEventData
	InputEventData_1_tBD80452CA7323F7AF9D81BE4F33F4929EE29FB91 * ___positionInputEventData_44;
	// Microsoft.MixedReality.Toolkit.Input.InputEventData`1<UnityEngine.Quaternion> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::rotationInputEventData
	InputEventData_1_tD8D18B60C214076FA42F3F0D74493E73E42088E4 * ___rotationInputEventData_45;
	// Microsoft.MixedReality.Toolkit.Input.InputEventData`1<Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::poseInputEventData
	InputEventData_1_tFE70533D81F944C1BF32FC74B351651DA68C5AF5 * ___poseInputEventData_46;
	// Microsoft.MixedReality.Toolkit.Input.InputEventData`1<System.Collections.Generic.IDictionary`2<Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint,Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose>> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::jointPoseInputEventData
	InputEventData_1_tA3E23BA23CC298011AFF57EAB3FF273C629C34D0 * ___jointPoseInputEventData_47;
	// Microsoft.MixedReality.Toolkit.Input.InputEventData`1<Microsoft.MixedReality.Toolkit.Input.HandMeshInfo> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::handMeshInputEventData
	InputEventData_1_tD59A3B348C4DB876BF80E4B0424713C679DEEB91 * ___handMeshInputEventData_48;
	// Microsoft.MixedReality.Toolkit.Input.SpeechEventData Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::speechEventData
	SpeechEventData_tC9299B14E15592447DC7EB234BDD59A1F1BBB4B4 * ___speechEventData_49;
	// Microsoft.MixedReality.Toolkit.Input.DictationEventData Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::dictationEventData
	DictationEventData_tA7164975AD6B3420DAC57401B980789CC52CB80A * ___dictationEventData_50;
	// Microsoft.MixedReality.Toolkit.Input.HandTrackingInputEventData Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::handTrackingInputEventData
	HandTrackingInputEventData_tF8B3370C187545FD614D62A33B7509615F7E925F * ___handTrackingInputEventData_51;
	// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputActionRulesProfile Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::<CurrentInputActionRulesProfile>k__BackingField
	MixedRealityInputActionRulesProfile_tF2708C51AAF3894A860028C79DB05A44D6EDD64F * ___U3CCurrentInputActionRulesProfileU3Ek__BackingField_52;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::inputModuleChecked
	bool ___inputModuleChecked_53;
	// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputModule Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::inputModule
	MixedRealityInputModule_t7D2934E0000C5E8CC1FCAFE055DAF780F833C63C * ___inputModule_54;

public:
	inline static int32_t get_offset_of_U3CNameU3Ek__BackingField_21() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_tEA69EFC7CCC70EFD1283AE13DA6AA9674517EB8F, ___U3CNameU3Ek__BackingField_21)); }
	inline String_t* get_U3CNameU3Ek__BackingField_21() const { return ___U3CNameU3Ek__BackingField_21; }
	inline String_t** get_address_of_U3CNameU3Ek__BackingField_21() { return &___U3CNameU3Ek__BackingField_21; }
	inline void set_U3CNameU3Ek__BackingField_21(String_t* value)
	{
		___U3CNameU3Ek__BackingField_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CNameU3Ek__BackingField_21), (void*)value);
	}

	inline static int32_t get_offset_of_InputEnabled_22() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_tEA69EFC7CCC70EFD1283AE13DA6AA9674517EB8F, ___InputEnabled_22)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_InputEnabled_22() const { return ___InputEnabled_22; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_InputEnabled_22() { return &___InputEnabled_22; }
	inline void set_InputEnabled_22(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___InputEnabled_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___InputEnabled_22), (void*)value);
	}

	inline static int32_t get_offset_of_InputDisabled_23() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_tEA69EFC7CCC70EFD1283AE13DA6AA9674517EB8F, ___InputDisabled_23)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_InputDisabled_23() const { return ___InputDisabled_23; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_InputDisabled_23() { return &___InputDisabled_23; }
	inline void set_InputDisabled_23(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___InputDisabled_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___InputDisabled_23), (void*)value);
	}

	inline static int32_t get_offset_of_U3CDetectedInputSourcesU3Ek__BackingField_24() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_tEA69EFC7CCC70EFD1283AE13DA6AA9674517EB8F, ___U3CDetectedInputSourcesU3Ek__BackingField_24)); }
	inline HashSet_1_t2B48F2A2DDD8E60200B3F7E2CE833007064C7D1D * get_U3CDetectedInputSourcesU3Ek__BackingField_24() const { return ___U3CDetectedInputSourcesU3Ek__BackingField_24; }
	inline HashSet_1_t2B48F2A2DDD8E60200B3F7E2CE833007064C7D1D ** get_address_of_U3CDetectedInputSourcesU3Ek__BackingField_24() { return &___U3CDetectedInputSourcesU3Ek__BackingField_24; }
	inline void set_U3CDetectedInputSourcesU3Ek__BackingField_24(HashSet_1_t2B48F2A2DDD8E60200B3F7E2CE833007064C7D1D * value)
	{
		___U3CDetectedInputSourcesU3Ek__BackingField_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CDetectedInputSourcesU3Ek__BackingField_24), (void*)value);
	}

	inline static int32_t get_offset_of_U3CDetectedControllersU3Ek__BackingField_25() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_tEA69EFC7CCC70EFD1283AE13DA6AA9674517EB8F, ___U3CDetectedControllersU3Ek__BackingField_25)); }
	inline HashSet_1_t85E64382C5CCBB900CA960D1CEF4DE8ECE1E4837 * get_U3CDetectedControllersU3Ek__BackingField_25() const { return ___U3CDetectedControllersU3Ek__BackingField_25; }
	inline HashSet_1_t85E64382C5CCBB900CA960D1CEF4DE8ECE1E4837 ** get_address_of_U3CDetectedControllersU3Ek__BackingField_25() { return &___U3CDetectedControllersU3Ek__BackingField_25; }
	inline void set_U3CDetectedControllersU3Ek__BackingField_25(HashSet_1_t85E64382C5CCBB900CA960D1CEF4DE8ECE1E4837 * value)
	{
		___U3CDetectedControllersU3Ek__BackingField_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CDetectedControllersU3Ek__BackingField_25), (void*)value);
	}

	inline static int32_t get_offset_of_inputSystemProfile_26() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_tEA69EFC7CCC70EFD1283AE13DA6AA9674517EB8F, ___inputSystemProfile_26)); }
	inline MixedRealityInputSystemProfile_tD94F4B1680EFF39B21E58E438A8EDE6FF8B8BA0C * get_inputSystemProfile_26() const { return ___inputSystemProfile_26; }
	inline MixedRealityInputSystemProfile_tD94F4B1680EFF39B21E58E438A8EDE6FF8B8BA0C ** get_address_of_inputSystemProfile_26() { return &___inputSystemProfile_26; }
	inline void set_inputSystemProfile_26(MixedRealityInputSystemProfile_tD94F4B1680EFF39B21E58E438A8EDE6FF8B8BA0C * value)
	{
		___inputSystemProfile_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___inputSystemProfile_26), (void*)value);
	}

	inline static int32_t get_offset_of_U3CGazeProviderU3Ek__BackingField_27() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_tEA69EFC7CCC70EFD1283AE13DA6AA9674517EB8F, ___U3CGazeProviderU3Ek__BackingField_27)); }
	inline RuntimeObject* get_U3CGazeProviderU3Ek__BackingField_27() const { return ___U3CGazeProviderU3Ek__BackingField_27; }
	inline RuntimeObject** get_address_of_U3CGazeProviderU3Ek__BackingField_27() { return &___U3CGazeProviderU3Ek__BackingField_27; }
	inline void set_U3CGazeProviderU3Ek__BackingField_27(RuntimeObject* value)
	{
		___U3CGazeProviderU3Ek__BackingField_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CGazeProviderU3Ek__BackingField_27), (void*)value);
	}

	inline static int32_t get_offset_of_U3CEyeGazeProviderU3Ek__BackingField_28() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_tEA69EFC7CCC70EFD1283AE13DA6AA9674517EB8F, ___U3CEyeGazeProviderU3Ek__BackingField_28)); }
	inline RuntimeObject* get_U3CEyeGazeProviderU3Ek__BackingField_28() const { return ___U3CEyeGazeProviderU3Ek__BackingField_28; }
	inline RuntimeObject** get_address_of_U3CEyeGazeProviderU3Ek__BackingField_28() { return &___U3CEyeGazeProviderU3Ek__BackingField_28; }
	inline void set_U3CEyeGazeProviderU3Ek__BackingField_28(RuntimeObject* value)
	{
		___U3CEyeGazeProviderU3Ek__BackingField_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CEyeGazeProviderU3Ek__BackingField_28), (void*)value);
	}

	inline static int32_t get_offset_of_modalInputStack_29() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_tEA69EFC7CCC70EFD1283AE13DA6AA9674517EB8F, ___modalInputStack_29)); }
	inline Stack_1_tAE566EECB2D3565C2EDCA60875D2F6444CC3F9AE * get_modalInputStack_29() const { return ___modalInputStack_29; }
	inline Stack_1_tAE566EECB2D3565C2EDCA60875D2F6444CC3F9AE ** get_address_of_modalInputStack_29() { return &___modalInputStack_29; }
	inline void set_modalInputStack_29(Stack_1_tAE566EECB2D3565C2EDCA60875D2F6444CC3F9AE * value)
	{
		___modalInputStack_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___modalInputStack_29), (void*)value);
	}

	inline static int32_t get_offset_of_fallbackInputStack_30() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_tEA69EFC7CCC70EFD1283AE13DA6AA9674517EB8F, ___fallbackInputStack_30)); }
	inline Stack_1_tAE566EECB2D3565C2EDCA60875D2F6444CC3F9AE * get_fallbackInputStack_30() const { return ___fallbackInputStack_30; }
	inline Stack_1_tAE566EECB2D3565C2EDCA60875D2F6444CC3F9AE ** get_address_of_fallbackInputStack_30() { return &___fallbackInputStack_30; }
	inline void set_fallbackInputStack_30(Stack_1_tAE566EECB2D3565C2EDCA60875D2F6444CC3F9AE * value)
	{
		___fallbackInputStack_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___fallbackInputStack_30), (void*)value);
	}

	inline static int32_t get_offset_of_disabledRefCount_31() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_tEA69EFC7CCC70EFD1283AE13DA6AA9674517EB8F, ___disabledRefCount_31)); }
	inline int32_t get_disabledRefCount_31() const { return ___disabledRefCount_31; }
	inline int32_t* get_address_of_disabledRefCount_31() { return &___disabledRefCount_31; }
	inline void set_disabledRefCount_31(int32_t value)
	{
		___disabledRefCount_31 = value;
	}

	inline static int32_t get_offset_of_isInputModuleAdded_32() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_tEA69EFC7CCC70EFD1283AE13DA6AA9674517EB8F, ___isInputModuleAdded_32)); }
	inline bool get_isInputModuleAdded_32() const { return ___isInputModuleAdded_32; }
	inline bool* get_address_of_isInputModuleAdded_32() { return &___isInputModuleAdded_32; }
	inline void set_isInputModuleAdded_32(bool value)
	{
		___isInputModuleAdded_32 = value;
	}

	inline static int32_t get_offset_of_sourceStateEventData_33() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_tEA69EFC7CCC70EFD1283AE13DA6AA9674517EB8F, ___sourceStateEventData_33)); }
	inline SourceStateEventData_t9B7FE1063C45FBE41CED4CD246D43E05D0961576 * get_sourceStateEventData_33() const { return ___sourceStateEventData_33; }
	inline SourceStateEventData_t9B7FE1063C45FBE41CED4CD246D43E05D0961576 ** get_address_of_sourceStateEventData_33() { return &___sourceStateEventData_33; }
	inline void set_sourceStateEventData_33(SourceStateEventData_t9B7FE1063C45FBE41CED4CD246D43E05D0961576 * value)
	{
		___sourceStateEventData_33 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sourceStateEventData_33), (void*)value);
	}

	inline static int32_t get_offset_of_sourceTrackingEventData_34() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_tEA69EFC7CCC70EFD1283AE13DA6AA9674517EB8F, ___sourceTrackingEventData_34)); }
	inline SourcePoseEventData_1_t3BE0ED408F0D7326991F4F4EC8B11F9FC5D35821 * get_sourceTrackingEventData_34() const { return ___sourceTrackingEventData_34; }
	inline SourcePoseEventData_1_t3BE0ED408F0D7326991F4F4EC8B11F9FC5D35821 ** get_address_of_sourceTrackingEventData_34() { return &___sourceTrackingEventData_34; }
	inline void set_sourceTrackingEventData_34(SourcePoseEventData_1_t3BE0ED408F0D7326991F4F4EC8B11F9FC5D35821 * value)
	{
		___sourceTrackingEventData_34 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sourceTrackingEventData_34), (void*)value);
	}

	inline static int32_t get_offset_of_sourceVector2EventData_35() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_tEA69EFC7CCC70EFD1283AE13DA6AA9674517EB8F, ___sourceVector2EventData_35)); }
	inline SourcePoseEventData_1_t1159A092B1D54CCCB3312D43916D9D913210176F * get_sourceVector2EventData_35() const { return ___sourceVector2EventData_35; }
	inline SourcePoseEventData_1_t1159A092B1D54CCCB3312D43916D9D913210176F ** get_address_of_sourceVector2EventData_35() { return &___sourceVector2EventData_35; }
	inline void set_sourceVector2EventData_35(SourcePoseEventData_1_t1159A092B1D54CCCB3312D43916D9D913210176F * value)
	{
		___sourceVector2EventData_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sourceVector2EventData_35), (void*)value);
	}

	inline static int32_t get_offset_of_sourcePositionEventData_36() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_tEA69EFC7CCC70EFD1283AE13DA6AA9674517EB8F, ___sourcePositionEventData_36)); }
	inline SourcePoseEventData_1_t5A336A07D67DEF2AAEE8F7FCC44E3BB2C6455564 * get_sourcePositionEventData_36() const { return ___sourcePositionEventData_36; }
	inline SourcePoseEventData_1_t5A336A07D67DEF2AAEE8F7FCC44E3BB2C6455564 ** get_address_of_sourcePositionEventData_36() { return &___sourcePositionEventData_36; }
	inline void set_sourcePositionEventData_36(SourcePoseEventData_1_t5A336A07D67DEF2AAEE8F7FCC44E3BB2C6455564 * value)
	{
		___sourcePositionEventData_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sourcePositionEventData_36), (void*)value);
	}

	inline static int32_t get_offset_of_sourceRotationEventData_37() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_tEA69EFC7CCC70EFD1283AE13DA6AA9674517EB8F, ___sourceRotationEventData_37)); }
	inline SourcePoseEventData_1_t3A7D7BBDE63A4DD8D7CD6BCB340C47A544C94E87 * get_sourceRotationEventData_37() const { return ___sourceRotationEventData_37; }
	inline SourcePoseEventData_1_t3A7D7BBDE63A4DD8D7CD6BCB340C47A544C94E87 ** get_address_of_sourceRotationEventData_37() { return &___sourceRotationEventData_37; }
	inline void set_sourceRotationEventData_37(SourcePoseEventData_1_t3A7D7BBDE63A4DD8D7CD6BCB340C47A544C94E87 * value)
	{
		___sourceRotationEventData_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sourceRotationEventData_37), (void*)value);
	}

	inline static int32_t get_offset_of_sourcePoseEventData_38() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_tEA69EFC7CCC70EFD1283AE13DA6AA9674517EB8F, ___sourcePoseEventData_38)); }
	inline SourcePoseEventData_1_t0EC0F5B247C5FB6867885FD9F549C26B609E36FE * get_sourcePoseEventData_38() const { return ___sourcePoseEventData_38; }
	inline SourcePoseEventData_1_t0EC0F5B247C5FB6867885FD9F549C26B609E36FE ** get_address_of_sourcePoseEventData_38() { return &___sourcePoseEventData_38; }
	inline void set_sourcePoseEventData_38(SourcePoseEventData_1_t0EC0F5B247C5FB6867885FD9F549C26B609E36FE * value)
	{
		___sourcePoseEventData_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sourcePoseEventData_38), (void*)value);
	}

	inline static int32_t get_offset_of_focusEventData_39() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_tEA69EFC7CCC70EFD1283AE13DA6AA9674517EB8F, ___focusEventData_39)); }
	inline FocusEventData_tB86FBD326E3B9EFEB5284D55CD0413CC83327F06 * get_focusEventData_39() const { return ___focusEventData_39; }
	inline FocusEventData_tB86FBD326E3B9EFEB5284D55CD0413CC83327F06 ** get_address_of_focusEventData_39() { return &___focusEventData_39; }
	inline void set_focusEventData_39(FocusEventData_tB86FBD326E3B9EFEB5284D55CD0413CC83327F06 * value)
	{
		___focusEventData_39 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___focusEventData_39), (void*)value);
	}

	inline static int32_t get_offset_of_inputEventData_40() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_tEA69EFC7CCC70EFD1283AE13DA6AA9674517EB8F, ___inputEventData_40)); }
	inline InputEventData_tC89213D733BAC80CB214D6C99D989B0A0BB78C0F * get_inputEventData_40() const { return ___inputEventData_40; }
	inline InputEventData_tC89213D733BAC80CB214D6C99D989B0A0BB78C0F ** get_address_of_inputEventData_40() { return &___inputEventData_40; }
	inline void set_inputEventData_40(InputEventData_tC89213D733BAC80CB214D6C99D989B0A0BB78C0F * value)
	{
		___inputEventData_40 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___inputEventData_40), (void*)value);
	}

	inline static int32_t get_offset_of_pointerEventData_41() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_tEA69EFC7CCC70EFD1283AE13DA6AA9674517EB8F, ___pointerEventData_41)); }
	inline MixedRealityPointerEventData_t4E73A7D4CF106B1B66A18BEA6339E99BCA708AC9 * get_pointerEventData_41() const { return ___pointerEventData_41; }
	inline MixedRealityPointerEventData_t4E73A7D4CF106B1B66A18BEA6339E99BCA708AC9 ** get_address_of_pointerEventData_41() { return &___pointerEventData_41; }
	inline void set_pointerEventData_41(MixedRealityPointerEventData_t4E73A7D4CF106B1B66A18BEA6339E99BCA708AC9 * value)
	{
		___pointerEventData_41 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___pointerEventData_41), (void*)value);
	}

	inline static int32_t get_offset_of_floatInputEventData_42() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_tEA69EFC7CCC70EFD1283AE13DA6AA9674517EB8F, ___floatInputEventData_42)); }
	inline InputEventData_1_tDB463B85E4DBD65434118084E8C52FF4EA5B3A3C * get_floatInputEventData_42() const { return ___floatInputEventData_42; }
	inline InputEventData_1_tDB463B85E4DBD65434118084E8C52FF4EA5B3A3C ** get_address_of_floatInputEventData_42() { return &___floatInputEventData_42; }
	inline void set_floatInputEventData_42(InputEventData_1_tDB463B85E4DBD65434118084E8C52FF4EA5B3A3C * value)
	{
		___floatInputEventData_42 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___floatInputEventData_42), (void*)value);
	}

	inline static int32_t get_offset_of_vector2InputEventData_43() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_tEA69EFC7CCC70EFD1283AE13DA6AA9674517EB8F, ___vector2InputEventData_43)); }
	inline InputEventData_1_t75B4D8E000254E97AC29E980DA3441BDC61A35AA * get_vector2InputEventData_43() const { return ___vector2InputEventData_43; }
	inline InputEventData_1_t75B4D8E000254E97AC29E980DA3441BDC61A35AA ** get_address_of_vector2InputEventData_43() { return &___vector2InputEventData_43; }
	inline void set_vector2InputEventData_43(InputEventData_1_t75B4D8E000254E97AC29E980DA3441BDC61A35AA * value)
	{
		___vector2InputEventData_43 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___vector2InputEventData_43), (void*)value);
	}

	inline static int32_t get_offset_of_positionInputEventData_44() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_tEA69EFC7CCC70EFD1283AE13DA6AA9674517EB8F, ___positionInputEventData_44)); }
	inline InputEventData_1_tBD80452CA7323F7AF9D81BE4F33F4929EE29FB91 * get_positionInputEventData_44() const { return ___positionInputEventData_44; }
	inline InputEventData_1_tBD80452CA7323F7AF9D81BE4F33F4929EE29FB91 ** get_address_of_positionInputEventData_44() { return &___positionInputEventData_44; }
	inline void set_positionInputEventData_44(InputEventData_1_tBD80452CA7323F7AF9D81BE4F33F4929EE29FB91 * value)
	{
		___positionInputEventData_44 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___positionInputEventData_44), (void*)value);
	}

	inline static int32_t get_offset_of_rotationInputEventData_45() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_tEA69EFC7CCC70EFD1283AE13DA6AA9674517EB8F, ___rotationInputEventData_45)); }
	inline InputEventData_1_tD8D18B60C214076FA42F3F0D74493E73E42088E4 * get_rotationInputEventData_45() const { return ___rotationInputEventData_45; }
	inline InputEventData_1_tD8D18B60C214076FA42F3F0D74493E73E42088E4 ** get_address_of_rotationInputEventData_45() { return &___rotationInputEventData_45; }
	inline void set_rotationInputEventData_45(InputEventData_1_tD8D18B60C214076FA42F3F0D74493E73E42088E4 * value)
	{
		___rotationInputEventData_45 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___rotationInputEventData_45), (void*)value);
	}

	inline static int32_t get_offset_of_poseInputEventData_46() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_tEA69EFC7CCC70EFD1283AE13DA6AA9674517EB8F, ___poseInputEventData_46)); }
	inline InputEventData_1_tFE70533D81F944C1BF32FC74B351651DA68C5AF5 * get_poseInputEventData_46() const { return ___poseInputEventData_46; }
	inline InputEventData_1_tFE70533D81F944C1BF32FC74B351651DA68C5AF5 ** get_address_of_poseInputEventData_46() { return &___poseInputEventData_46; }
	inline void set_poseInputEventData_46(InputEventData_1_tFE70533D81F944C1BF32FC74B351651DA68C5AF5 * value)
	{
		___poseInputEventData_46 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___poseInputEventData_46), (void*)value);
	}

	inline static int32_t get_offset_of_jointPoseInputEventData_47() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_tEA69EFC7CCC70EFD1283AE13DA6AA9674517EB8F, ___jointPoseInputEventData_47)); }
	inline InputEventData_1_tA3E23BA23CC298011AFF57EAB3FF273C629C34D0 * get_jointPoseInputEventData_47() const { return ___jointPoseInputEventData_47; }
	inline InputEventData_1_tA3E23BA23CC298011AFF57EAB3FF273C629C34D0 ** get_address_of_jointPoseInputEventData_47() { return &___jointPoseInputEventData_47; }
	inline void set_jointPoseInputEventData_47(InputEventData_1_tA3E23BA23CC298011AFF57EAB3FF273C629C34D0 * value)
	{
		___jointPoseInputEventData_47 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___jointPoseInputEventData_47), (void*)value);
	}

	inline static int32_t get_offset_of_handMeshInputEventData_48() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_tEA69EFC7CCC70EFD1283AE13DA6AA9674517EB8F, ___handMeshInputEventData_48)); }
	inline InputEventData_1_tD59A3B348C4DB876BF80E4B0424713C679DEEB91 * get_handMeshInputEventData_48() const { return ___handMeshInputEventData_48; }
	inline InputEventData_1_tD59A3B348C4DB876BF80E4B0424713C679DEEB91 ** get_address_of_handMeshInputEventData_48() { return &___handMeshInputEventData_48; }
	inline void set_handMeshInputEventData_48(InputEventData_1_tD59A3B348C4DB876BF80E4B0424713C679DEEB91 * value)
	{
		___handMeshInputEventData_48 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___handMeshInputEventData_48), (void*)value);
	}

	inline static int32_t get_offset_of_speechEventData_49() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_tEA69EFC7CCC70EFD1283AE13DA6AA9674517EB8F, ___speechEventData_49)); }
	inline SpeechEventData_tC9299B14E15592447DC7EB234BDD59A1F1BBB4B4 * get_speechEventData_49() const { return ___speechEventData_49; }
	inline SpeechEventData_tC9299B14E15592447DC7EB234BDD59A1F1BBB4B4 ** get_address_of_speechEventData_49() { return &___speechEventData_49; }
	inline void set_speechEventData_49(SpeechEventData_tC9299B14E15592447DC7EB234BDD59A1F1BBB4B4 * value)
	{
		___speechEventData_49 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___speechEventData_49), (void*)value);
	}

	inline static int32_t get_offset_of_dictationEventData_50() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_tEA69EFC7CCC70EFD1283AE13DA6AA9674517EB8F, ___dictationEventData_50)); }
	inline DictationEventData_tA7164975AD6B3420DAC57401B980789CC52CB80A * get_dictationEventData_50() const { return ___dictationEventData_50; }
	inline DictationEventData_tA7164975AD6B3420DAC57401B980789CC52CB80A ** get_address_of_dictationEventData_50() { return &___dictationEventData_50; }
	inline void set_dictationEventData_50(DictationEventData_tA7164975AD6B3420DAC57401B980789CC52CB80A * value)
	{
		___dictationEventData_50 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dictationEventData_50), (void*)value);
	}

	inline static int32_t get_offset_of_handTrackingInputEventData_51() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_tEA69EFC7CCC70EFD1283AE13DA6AA9674517EB8F, ___handTrackingInputEventData_51)); }
	inline HandTrackingInputEventData_tF8B3370C187545FD614D62A33B7509615F7E925F * get_handTrackingInputEventData_51() const { return ___handTrackingInputEventData_51; }
	inline HandTrackingInputEventData_tF8B3370C187545FD614D62A33B7509615F7E925F ** get_address_of_handTrackingInputEventData_51() { return &___handTrackingInputEventData_51; }
	inline void set_handTrackingInputEventData_51(HandTrackingInputEventData_tF8B3370C187545FD614D62A33B7509615F7E925F * value)
	{
		___handTrackingInputEventData_51 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___handTrackingInputEventData_51), (void*)value);
	}

	inline static int32_t get_offset_of_U3CCurrentInputActionRulesProfileU3Ek__BackingField_52() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_tEA69EFC7CCC70EFD1283AE13DA6AA9674517EB8F, ___U3CCurrentInputActionRulesProfileU3Ek__BackingField_52)); }
	inline MixedRealityInputActionRulesProfile_tF2708C51AAF3894A860028C79DB05A44D6EDD64F * get_U3CCurrentInputActionRulesProfileU3Ek__BackingField_52() const { return ___U3CCurrentInputActionRulesProfileU3Ek__BackingField_52; }
	inline MixedRealityInputActionRulesProfile_tF2708C51AAF3894A860028C79DB05A44D6EDD64F ** get_address_of_U3CCurrentInputActionRulesProfileU3Ek__BackingField_52() { return &___U3CCurrentInputActionRulesProfileU3Ek__BackingField_52; }
	inline void set_U3CCurrentInputActionRulesProfileU3Ek__BackingField_52(MixedRealityInputActionRulesProfile_tF2708C51AAF3894A860028C79DB05A44D6EDD64F * value)
	{
		___U3CCurrentInputActionRulesProfileU3Ek__BackingField_52 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CCurrentInputActionRulesProfileU3Ek__BackingField_52), (void*)value);
	}

	inline static int32_t get_offset_of_inputModuleChecked_53() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_tEA69EFC7CCC70EFD1283AE13DA6AA9674517EB8F, ___inputModuleChecked_53)); }
	inline bool get_inputModuleChecked_53() const { return ___inputModuleChecked_53; }
	inline bool* get_address_of_inputModuleChecked_53() { return &___inputModuleChecked_53; }
	inline void set_inputModuleChecked_53(bool value)
	{
		___inputModuleChecked_53 = value;
	}

	inline static int32_t get_offset_of_inputModule_54() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_tEA69EFC7CCC70EFD1283AE13DA6AA9674517EB8F, ___inputModule_54)); }
	inline MixedRealityInputModule_t7D2934E0000C5E8CC1FCAFE055DAF780F833C63C * get_inputModule_54() const { return ___inputModule_54; }
	inline MixedRealityInputModule_t7D2934E0000C5E8CC1FCAFE055DAF780F833C63C ** get_address_of_inputModule_54() { return &___inputModule_54; }
	inline void set_inputModule_54(MixedRealityInputModule_t7D2934E0000C5E8CC1FCAFE055DAF780F833C63C * value)
	{
		___inputModule_54 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___inputModule_54), (void*)value);
	}
};

struct MixedRealityInputSystem_tEA69EFC7CCC70EFD1283AE13DA6AA9674517EB8F_StaticFields
{
public:
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::ExecuteHierarchyPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___ExecuteHierarchyPerfMarker_20;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::HandleEventPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___HandleEventPerfMarker_55;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::HandleFocusChangedEventsPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___HandleFocusChangedEventsPerfMarker_56;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::HandleFocusEventPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___HandleFocusEventPerfMarker_57;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::HandlePointerEventPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___HandlePointerEventPerfMarker_58;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::DispatchEventToGlobalListenersPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___DispatchEventToGlobalListenersPerfMarker_59;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::DispatchEventToFallbackHandlersPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___DispatchEventToFallbackHandlersPerfMarker_60;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::DispatchEventToObjectFocusedPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___DispatchEventToObjectFocusedPerfMarker_61;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::DispatchModalEventPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___DispatchModalEventPerfMarker_62;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::RaiseSourceDetectedPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___RaiseSourceDetectedPerfMarker_63;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealitySourceStateHandler> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::OnSourceDetectedEventHandler
	EventFunction_1_t34E9A016805FA482E7D0BC22943103098871012B * ___OnSourceDetectedEventHandler_64;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::RaiseSourceLostPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___RaiseSourceLostPerfMarker_65;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealitySourceStateHandler> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::OnSourceLostEventHandler
	EventFunction_1_t34E9A016805FA482E7D0BC22943103098871012B * ___OnSourceLostEventHandler_66;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::RaiseSourceTrackingStateChangedPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___RaiseSourceTrackingStateChangedPerfMarker_67;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealitySourcePoseHandler> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::OnSourceTrackingChangedEventHandler
	EventFunction_1_t4572EE92EA05D85B98404721FF20C8E1022E206A * ___OnSourceTrackingChangedEventHandler_68;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::RaiseSourcePositionChangedPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___RaiseSourcePositionChangedPerfMarker_69;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealitySourcePoseHandler> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::OnSourcePoseVector2ChangedEventHandler
	EventFunction_1_t4572EE92EA05D85B98404721FF20C8E1022E206A * ___OnSourcePoseVector2ChangedEventHandler_70;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealitySourcePoseHandler> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::OnSourcePositionChangedEventHandler
	EventFunction_1_t4572EE92EA05D85B98404721FF20C8E1022E206A * ___OnSourcePositionChangedEventHandler_71;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::RaiseSourceRotationChangedPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___RaiseSourceRotationChangedPerfMarker_72;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealitySourcePoseHandler> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::OnSourceRotationChangedEventHandler
	EventFunction_1_t4572EE92EA05D85B98404721FF20C8E1022E206A * ___OnSourceRotationChangedEventHandler_73;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::RaiseSourcePoseChangedPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___RaiseSourcePoseChangedPerfMarker_74;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealitySourcePoseHandler> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::OnSourcePoseChangedEventHandler
	EventFunction_1_t4572EE92EA05D85B98404721FF20C8E1022E206A * ___OnSourcePoseChangedEventHandler_75;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::RaisePreFocusChangedPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___RaisePreFocusChangedPerfMarker_76;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityFocusChangedHandler> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::OnPreFocusChangedHandler
	EventFunction_1_t1B9490AC5D4E3C163258769C0B118BE2F2B7F1DC * ___OnPreFocusChangedHandler_77;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::RaiseFocusChangedPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___RaiseFocusChangedPerfMarker_78;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityFocusChangedHandler> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::OnFocusChangedHandler
	EventFunction_1_t1B9490AC5D4E3C163258769C0B118BE2F2B7F1DC * ___OnFocusChangedHandler_79;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::RaiseFocusEnterPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___RaiseFocusEnterPerfMarker_80;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityFocusHandler> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::OnFocusEnterEventHandler
	EventFunction_1_t206E29E95D8C165388DAAAA7D3EAF08A675E2D32 * ___OnFocusEnterEventHandler_81;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::RaiseFocusExitPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___RaiseFocusExitPerfMarker_82;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityFocusHandler> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::OnFocusExitEventHandler
	EventFunction_1_t206E29E95D8C165388DAAAA7D3EAF08A675E2D32 * ___OnFocusExitEventHandler_83;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointerHandler> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::OnPointerDownEventHandler
	EventFunction_1_tF264EDDAD7A0259A372F473BB6B301A63A5766CD * ___OnPointerDownEventHandler_84;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::RaisePointerDownPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___RaisePointerDownPerfMarker_85;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointerHandler> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::OnPointerDraggedEventHandler
	EventFunction_1_tF264EDDAD7A0259A372F473BB6B301A63A5766CD * ___OnPointerDraggedEventHandler_86;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::RaisePointerDraggedPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___RaisePointerDraggedPerfMarker_87;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointerHandler> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::OnInputClickedEventHandler
	EventFunction_1_tF264EDDAD7A0259A372F473BB6B301A63A5766CD * ___OnInputClickedEventHandler_88;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::RaisePointerClickedPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___RaisePointerClickedPerfMarker_89;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointerHandler> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::OnPointerUpEventHandler
	EventFunction_1_tF264EDDAD7A0259A372F473BB6B301A63A5766CD * ___OnPointerUpEventHandler_90;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::RaisePointerUpPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___RaisePointerUpPerfMarker_91;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputHandler> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::OnInputDownEventHandler
	EventFunction_1_t5E50649990A6F0C0F66D53E65EC344A07EDA6B38 * ___OnInputDownEventHandler_92;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityBaseInputHandler> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::OnInputDownWithActionEventHandler
	EventFunction_1_t44117366BBF11D3CCB711E8B061BCE3183EC11CE * ___OnInputDownWithActionEventHandler_93;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::RaiseOnInputDownPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___RaiseOnInputDownPerfMarker_94;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputHandler> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::OnInputUpEventHandler
	EventFunction_1_t5E50649990A6F0C0F66D53E65EC344A07EDA6B38 * ___OnInputUpEventHandler_95;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityBaseInputHandler> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::OnInputUpWithActionEventHandler
	EventFunction_1_t44117366BBF11D3CCB711E8B061BCE3183EC11CE * ___OnInputUpWithActionEventHandler_96;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::RaiseOnInputUpPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___RaiseOnInputUpPerfMarker_97;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputHandler`1<System.Single>> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::OnFloatInputChanged
	EventFunction_1_tFF383DC5859C3F505C05CDC060A32D6DAE236472 * ___OnFloatInputChanged_98;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::RaiseFloatInputChangedPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___RaiseFloatInputChangedPerfMarker_99;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputHandler`1<UnityEngine.Vector2>> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::OnTwoDoFInputChanged
	EventFunction_1_tB51BC8CA70F939E869F063E94FF47C143D68E1D6 * ___OnTwoDoFInputChanged_100;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::RaisePositionInputChangedPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___RaisePositionInputChangedPerfMarker_101;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputHandler`1<UnityEngine.Vector3>> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::OnPositionInputChanged
	EventFunction_1_t06A6015DB33482FA1728EAB615DEC69DE0CBB31A * ___OnPositionInputChanged_102;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputHandler`1<UnityEngine.Quaternion>> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::OnRotationInputChanged
	EventFunction_1_t3741013856ACBA6170BA0506B00EBEB4A73B4C5C * ___OnRotationInputChanged_103;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::RaiseRotationInputChangedPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___RaiseRotationInputChangedPerfMarker_104;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputHandler`1<Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose>> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::OnPoseInputChanged
	EventFunction_1_tA90947B91567263334011AA055D0E4D10E433C51 * ___OnPoseInputChanged_105;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::RaisePoseInputChangedPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___RaisePoseInputChangedPerfMarker_106;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityGestureHandler> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::OnGestureStarted
	EventFunction_1_tD3CF862953EF38C6CEC96E113C8BE4F6060C0B41 * ___OnGestureStarted_107;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityBaseInputHandler> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::OnGestureStartedWithAction
	EventFunction_1_t44117366BBF11D3CCB711E8B061BCE3183EC11CE * ___OnGestureStartedWithAction_108;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::RaiseGestureStartedPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___RaiseGestureStartedPerfMarker_109;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityGestureHandler> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::OnGestureUpdated
	EventFunction_1_tD3CF862953EF38C6CEC96E113C8BE4F6060C0B41 * ___OnGestureUpdated_110;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::RaiseGestureUpdatedPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___RaiseGestureUpdatedPerfMarker_111;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityGestureHandler`1<UnityEngine.Vector2>> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::OnGestureVector2PositionUpdated
	EventFunction_1_tB58B3057E0CC1C08A66D71D8A15653913FFEFF68 * ___OnGestureVector2PositionUpdated_112;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityGestureHandler`1<UnityEngine.Vector3>> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::OnGesturePositionUpdated
	EventFunction_1_t57976825B4E6CDE53D51C864DC3BDB7FF6488E14 * ___OnGesturePositionUpdated_113;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityGestureHandler`1<UnityEngine.Quaternion>> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::OnGestureRotationUpdated
	EventFunction_1_tA271F0C7F32FEAC4972FB9EE8995F053EEE4DC18 * ___OnGestureRotationUpdated_114;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityGestureHandler`1<Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose>> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::OnGesturePoseUpdated
	EventFunction_1_tAEC84A3419EA0BD79A66A2818950D44B1787383F * ___OnGesturePoseUpdated_115;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityGestureHandler> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::OnGestureCompleted
	EventFunction_1_tD3CF862953EF38C6CEC96E113C8BE4F6060C0B41 * ___OnGestureCompleted_116;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityBaseInputHandler> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::OnGestureCompletedWithAction
	EventFunction_1_t44117366BBF11D3CCB711E8B061BCE3183EC11CE * ___OnGestureCompletedWithAction_117;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::RaiseGestureCompletedPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___RaiseGestureCompletedPerfMarker_118;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityGestureHandler`1<UnityEngine.Vector2>> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::OnGestureVector2PositionCompleted
	EventFunction_1_tB58B3057E0CC1C08A66D71D8A15653913FFEFF68 * ___OnGestureVector2PositionCompleted_119;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityGestureHandler`1<UnityEngine.Vector3>> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::OnGesturePositionCompleted
	EventFunction_1_t57976825B4E6CDE53D51C864DC3BDB7FF6488E14 * ___OnGesturePositionCompleted_120;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityGestureHandler`1<UnityEngine.Quaternion>> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::OnGestureRotationCompleted
	EventFunction_1_tA271F0C7F32FEAC4972FB9EE8995F053EEE4DC18 * ___OnGestureRotationCompleted_121;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityGestureHandler`1<Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose>> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::OnGesturePoseCompleted
	EventFunction_1_tAEC84A3419EA0BD79A66A2818950D44B1787383F * ___OnGesturePoseCompleted_122;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityGestureHandler> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::OnGestureCanceled
	EventFunction_1_tD3CF862953EF38C6CEC96E113C8BE4F6060C0B41 * ___OnGestureCanceled_123;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::RaiseGestureCanceledPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___RaiseGestureCanceledPerfMarker_124;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealitySpeechHandler> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::OnSpeechKeywordRecognizedEventHandler
	EventFunction_1_t19E2F0124E935AADF61940326CD4D988C74F5B40 * ___OnSpeechKeywordRecognizedEventHandler_125;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityBaseInputHandler> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::OnSpeechKeywordRecognizedWithActionEventHandler
	EventFunction_1_t44117366BBF11D3CCB711E8B061BCE3183EC11CE * ___OnSpeechKeywordRecognizedWithActionEventHandler_126;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::RaiseSpeechCommandRecognizedPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___RaiseSpeechCommandRecognizedPerfMarker_127;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityDictationHandler> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::OnDictationHypothesisEventHandler
	EventFunction_1_t0A259C57B4518D821C66F1D54F5F28546D4EF00B * ___OnDictationHypothesisEventHandler_128;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::RaiseDictationHypothesisPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___RaiseDictationHypothesisPerfMarker_129;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityDictationHandler> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::OnDictationResultEventHandler
	EventFunction_1_t0A259C57B4518D821C66F1D54F5F28546D4EF00B * ___OnDictationResultEventHandler_130;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::RaiseDictationResultPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___RaiseDictationResultPerfMarker_131;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityDictationHandler> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::OnDictationCompleteEventHandler
	EventFunction_1_t0A259C57B4518D821C66F1D54F5F28546D4EF00B * ___OnDictationCompleteEventHandler_132;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::RaiseDictationCompletePerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___RaiseDictationCompletePerfMarker_133;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityDictationHandler> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::OnDictationErrorEventHandler
	EventFunction_1_t0A259C57B4518D821C66F1D54F5F28546D4EF00B * ___OnDictationErrorEventHandler_134;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::RaiseDictationErrorPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___RaiseDictationErrorPerfMarker_135;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityHandJointHandler> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::OnHandJointsUpdatedEventHandler
	EventFunction_1_t40825EE839F00BCBC1FBFCFEEFDABD2E053CD2C6 * ___OnHandJointsUpdatedEventHandler_136;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::RaiseHandJointsUpdatedPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___RaiseHandJointsUpdatedPerfMarker_137;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityHandMeshHandler> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::OnHandMeshUpdatedEventHandler
	EventFunction_1_t30558523BD63B0ED422F3492242DD501792A0344 * ___OnHandMeshUpdatedEventHandler_138;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::RaiseHandMeshUpdatedPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___RaiseHandMeshUpdatedPerfMarker_139;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityTouchHandler> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::OnTouchStartedEventHandler
	EventFunction_1_t28980A47E1D1F187CF30BD1ECA66486220C8483A * ___OnTouchStartedEventHandler_140;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::RaiseOnTouchStartedPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___RaiseOnTouchStartedPerfMarker_141;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityTouchHandler> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::OnTouchCompletedEventHandler
	EventFunction_1_t28980A47E1D1F187CF30BD1ECA66486220C8483A * ___OnTouchCompletedEventHandler_142;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::RaiseOnTouchCompletedPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___RaiseOnTouchCompletedPerfMarker_143;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityTouchHandler> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::OnTouchUpdatedEventHandler
	EventFunction_1_t28980A47E1D1F187CF30BD1ECA66486220C8483A * ___OnTouchUpdatedEventHandler_144;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::RaiseOnTouchUpdatedPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___RaiseOnTouchUpdatedPerfMarker_145;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::ProcessRulesInternalPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___ProcessRulesInternalPerfMarker_146;

public:
	inline static int32_t get_offset_of_ExecuteHierarchyPerfMarker_20() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_tEA69EFC7CCC70EFD1283AE13DA6AA9674517EB8F_StaticFields, ___ExecuteHierarchyPerfMarker_20)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_ExecuteHierarchyPerfMarker_20() const { return ___ExecuteHierarchyPerfMarker_20; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_ExecuteHierarchyPerfMarker_20() { return &___ExecuteHierarchyPerfMarker_20; }
	inline void set_ExecuteHierarchyPerfMarker_20(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___ExecuteHierarchyPerfMarker_20 = value;
	}

	inline static int32_t get_offset_of_HandleEventPerfMarker_55() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_tEA69EFC7CCC70EFD1283AE13DA6AA9674517EB8F_StaticFields, ___HandleEventPerfMarker_55)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_HandleEventPerfMarker_55() const { return ___HandleEventPerfMarker_55; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_HandleEventPerfMarker_55() { return &___HandleEventPerfMarker_55; }
	inline void set_HandleEventPerfMarker_55(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___HandleEventPerfMarker_55 = value;
	}

	inline static int32_t get_offset_of_HandleFocusChangedEventsPerfMarker_56() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_tEA69EFC7CCC70EFD1283AE13DA6AA9674517EB8F_StaticFields, ___HandleFocusChangedEventsPerfMarker_56)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_HandleFocusChangedEventsPerfMarker_56() const { return ___HandleFocusChangedEventsPerfMarker_56; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_HandleFocusChangedEventsPerfMarker_56() { return &___HandleFocusChangedEventsPerfMarker_56; }
	inline void set_HandleFocusChangedEventsPerfMarker_56(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___HandleFocusChangedEventsPerfMarker_56 = value;
	}

	inline static int32_t get_offset_of_HandleFocusEventPerfMarker_57() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_tEA69EFC7CCC70EFD1283AE13DA6AA9674517EB8F_StaticFields, ___HandleFocusEventPerfMarker_57)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_HandleFocusEventPerfMarker_57() const { return ___HandleFocusEventPerfMarker_57; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_HandleFocusEventPerfMarker_57() { return &___HandleFocusEventPerfMarker_57; }
	inline void set_HandleFocusEventPerfMarker_57(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___HandleFocusEventPerfMarker_57 = value;
	}

	inline static int32_t get_offset_of_HandlePointerEventPerfMarker_58() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_tEA69EFC7CCC70EFD1283AE13DA6AA9674517EB8F_StaticFields, ___HandlePointerEventPerfMarker_58)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_HandlePointerEventPerfMarker_58() const { return ___HandlePointerEventPerfMarker_58; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_HandlePointerEventPerfMarker_58() { return &___HandlePointerEventPerfMarker_58; }
	inline void set_HandlePointerEventPerfMarker_58(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___HandlePointerEventPerfMarker_58 = value;
	}

	inline static int32_t get_offset_of_DispatchEventToGlobalListenersPerfMarker_59() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_tEA69EFC7CCC70EFD1283AE13DA6AA9674517EB8F_StaticFields, ___DispatchEventToGlobalListenersPerfMarker_59)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_DispatchEventToGlobalListenersPerfMarker_59() const { return ___DispatchEventToGlobalListenersPerfMarker_59; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_DispatchEventToGlobalListenersPerfMarker_59() { return &___DispatchEventToGlobalListenersPerfMarker_59; }
	inline void set_DispatchEventToGlobalListenersPerfMarker_59(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___DispatchEventToGlobalListenersPerfMarker_59 = value;
	}

	inline static int32_t get_offset_of_DispatchEventToFallbackHandlersPerfMarker_60() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_tEA69EFC7CCC70EFD1283AE13DA6AA9674517EB8F_StaticFields, ___DispatchEventToFallbackHandlersPerfMarker_60)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_DispatchEventToFallbackHandlersPerfMarker_60() const { return ___DispatchEventToFallbackHandlersPerfMarker_60; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_DispatchEventToFallbackHandlersPerfMarker_60() { return &___DispatchEventToFallbackHandlersPerfMarker_60; }
	inline void set_DispatchEventToFallbackHandlersPerfMarker_60(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___DispatchEventToFallbackHandlersPerfMarker_60 = value;
	}

	inline static int32_t get_offset_of_DispatchEventToObjectFocusedPerfMarker_61() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_tEA69EFC7CCC70EFD1283AE13DA6AA9674517EB8F_StaticFields, ___DispatchEventToObjectFocusedPerfMarker_61)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_DispatchEventToObjectFocusedPerfMarker_61() const { return ___DispatchEventToObjectFocusedPerfMarker_61; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_DispatchEventToObjectFocusedPerfMarker_61() { return &___DispatchEventToObjectFocusedPerfMarker_61; }
	inline void set_DispatchEventToObjectFocusedPerfMarker_61(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___DispatchEventToObjectFocusedPerfMarker_61 = value;
	}

	inline static int32_t get_offset_of_DispatchModalEventPerfMarker_62() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_tEA69EFC7CCC70EFD1283AE13DA6AA9674517EB8F_StaticFields, ___DispatchModalEventPerfMarker_62)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_DispatchModalEventPerfMarker_62() const { return ___DispatchModalEventPerfMarker_62; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_DispatchModalEventPerfMarker_62() { return &___DispatchModalEventPerfMarker_62; }
	inline void set_DispatchModalEventPerfMarker_62(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___DispatchModalEventPerfMarker_62 = value;
	}

	inline static int32_t get_offset_of_RaiseSourceDetectedPerfMarker_63() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_tEA69EFC7CCC70EFD1283AE13DA6AA9674517EB8F_StaticFields, ___RaiseSourceDetectedPerfMarker_63)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_RaiseSourceDetectedPerfMarker_63() const { return ___RaiseSourceDetectedPerfMarker_63; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_RaiseSourceDetectedPerfMarker_63() { return &___RaiseSourceDetectedPerfMarker_63; }
	inline void set_RaiseSourceDetectedPerfMarker_63(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___RaiseSourceDetectedPerfMarker_63 = value;
	}

	inline static int32_t get_offset_of_OnSourceDetectedEventHandler_64() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_tEA69EFC7CCC70EFD1283AE13DA6AA9674517EB8F_StaticFields, ___OnSourceDetectedEventHandler_64)); }
	inline EventFunction_1_t34E9A016805FA482E7D0BC22943103098871012B * get_OnSourceDetectedEventHandler_64() const { return ___OnSourceDetectedEventHandler_64; }
	inline EventFunction_1_t34E9A016805FA482E7D0BC22943103098871012B ** get_address_of_OnSourceDetectedEventHandler_64() { return &___OnSourceDetectedEventHandler_64; }
	inline void set_OnSourceDetectedEventHandler_64(EventFunction_1_t34E9A016805FA482E7D0BC22943103098871012B * value)
	{
		___OnSourceDetectedEventHandler_64 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnSourceDetectedEventHandler_64), (void*)value);
	}

	inline static int32_t get_offset_of_RaiseSourceLostPerfMarker_65() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_tEA69EFC7CCC70EFD1283AE13DA6AA9674517EB8F_StaticFields, ___RaiseSourceLostPerfMarker_65)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_RaiseSourceLostPerfMarker_65() const { return ___RaiseSourceLostPerfMarker_65; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_RaiseSourceLostPerfMarker_65() { return &___RaiseSourceLostPerfMarker_65; }
	inline void set_RaiseSourceLostPerfMarker_65(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___RaiseSourceLostPerfMarker_65 = value;
	}

	inline static int32_t get_offset_of_OnSourceLostEventHandler_66() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_tEA69EFC7CCC70EFD1283AE13DA6AA9674517EB8F_StaticFields, ___OnSourceLostEventHandler_66)); }
	inline EventFunction_1_t34E9A016805FA482E7D0BC22943103098871012B * get_OnSourceLostEventHandler_66() const { return ___OnSourceLostEventHandler_66; }
	inline EventFunction_1_t34E9A016805FA482E7D0BC22943103098871012B ** get_address_of_OnSourceLostEventHandler_66() { return &___OnSourceLostEventHandler_66; }
	inline void set_OnSourceLostEventHandler_66(EventFunction_1_t34E9A016805FA482E7D0BC22943103098871012B * value)
	{
		___OnSourceLostEventHandler_66 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnSourceLostEventHandler_66), (void*)value);
	}

	inline static int32_t get_offset_of_RaiseSourceTrackingStateChangedPerfMarker_67() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_tEA69EFC7CCC70EFD1283AE13DA6AA9674517EB8F_StaticFields, ___RaiseSourceTrackingStateChangedPerfMarker_67)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_RaiseSourceTrackingStateChangedPerfMarker_67() const { return ___RaiseSourceTrackingStateChangedPerfMarker_67; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_RaiseSourceTrackingStateChangedPerfMarker_67() { return &___RaiseSourceTrackingStateChangedPerfMarker_67; }
	inline void set_RaiseSourceTrackingStateChangedPerfMarker_67(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___RaiseSourceTrackingStateChangedPerfMarker_67 = value;
	}

	inline static int32_t get_offset_of_OnSourceTrackingChangedEventHandler_68() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_tEA69EFC7CCC70EFD1283AE13DA6AA9674517EB8F_StaticFields, ___OnSourceTrackingChangedEventHandler_68)); }
	inline EventFunction_1_t4572EE92EA05D85B98404721FF20C8E1022E206A * get_OnSourceTrackingChangedEventHandler_68() const { return ___OnSourceTrackingChangedEventHandler_68; }
	inline EventFunction_1_t4572EE92EA05D85B98404721FF20C8E1022E206A ** get_address_of_OnSourceTrackingChangedEventHandler_68() { return &___OnSourceTrackingChangedEventHandler_68; }
	inline void set_OnSourceTrackingChangedEventHandler_68(EventFunction_1_t4572EE92EA05D85B98404721FF20C8E1022E206A * value)
	{
		___OnSourceTrackingChangedEventHandler_68 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnSourceTrackingChangedEventHandler_68), (void*)value);
	}

	inline static int32_t get_offset_of_RaiseSourcePositionChangedPerfMarker_69() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_tEA69EFC7CCC70EFD1283AE13DA6AA9674517EB8F_StaticFields, ___RaiseSourcePositionChangedPerfMarker_69)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_RaiseSourcePositionChangedPerfMarker_69() const { return ___RaiseSourcePositionChangedPerfMarker_69; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_RaiseSourcePositionChangedPerfMarker_69() { return &___RaiseSourcePositionChangedPerfMarker_69; }
	inline void set_RaiseSourcePositionChangedPerfMarker_69(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___RaiseSourcePositionChangedPerfMarker_69 = value;
	}

	inline static int32_t get_offset_of_OnSourcePoseVector2ChangedEventHandler_70() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_tEA69EFC7CCC70EFD1283AE13DA6AA9674517EB8F_StaticFields, ___OnSourcePoseVector2ChangedEventHandler_70)); }
	inline EventFunction_1_t4572EE92EA05D85B98404721FF20C8E1022E206A * get_OnSourcePoseVector2ChangedEventHandler_70() const { return ___OnSourcePoseVector2ChangedEventHandler_70; }
	inline EventFunction_1_t4572EE92EA05D85B98404721FF20C8E1022E206A ** get_address_of_OnSourcePoseVector2ChangedEventHandler_70() { return &___OnSourcePoseVector2ChangedEventHandler_70; }
	inline void set_OnSourcePoseVector2ChangedEventHandler_70(EventFunction_1_t4572EE92EA05D85B98404721FF20C8E1022E206A * value)
	{
		___OnSourcePoseVector2ChangedEventHandler_70 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnSourcePoseVector2ChangedEventHandler_70), (void*)value);
	}

	inline static int32_t get_offset_of_OnSourcePositionChangedEventHandler_71() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_tEA69EFC7CCC70EFD1283AE13DA6AA9674517EB8F_StaticFields, ___OnSourcePositionChangedEventHandler_71)); }
	inline EventFunction_1_t4572EE92EA05D85B98404721FF20C8E1022E206A * get_OnSourcePositionChangedEventHandler_71() const { return ___OnSourcePositionChangedEventHandler_71; }
	inline EventFunction_1_t4572EE92EA05D85B98404721FF20C8E1022E206A ** get_address_of_OnSourcePositionChangedEventHandler_71() { return &___OnSourcePositionChangedEventHandler_71; }
	inline void set_OnSourcePositionChangedEventHandler_71(EventFunction_1_t4572EE92EA05D85B98404721FF20C8E1022E206A * value)
	{
		___OnSourcePositionChangedEventHandler_71 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnSourcePositionChangedEventHandler_71), (void*)value);
	}

	inline static int32_t get_offset_of_RaiseSourceRotationChangedPerfMarker_72() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_tEA69EFC7CCC70EFD1283AE13DA6AA9674517EB8F_StaticFields, ___RaiseSourceRotationChangedPerfMarker_72)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_RaiseSourceRotationChangedPerfMarker_72() const { return ___RaiseSourceRotationChangedPerfMarker_72; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_RaiseSourceRotationChangedPerfMarker_72() { return &___RaiseSourceRotationChangedPerfMarker_72; }
	inline void set_RaiseSourceRotationChangedPerfMarker_72(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___RaiseSourceRotationChangedPerfMarker_72 = value;
	}

	inline static int32_t get_offset_of_OnSourceRotationChangedEventHandler_73() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_tEA69EFC7CCC70EFD1283AE13DA6AA9674517EB8F_StaticFields, ___OnSourceRotationChangedEventHandler_73)); }
	inline EventFunction_1_t4572EE92EA05D85B98404721FF20C8E1022E206A * get_OnSourceRotationChangedEventHandler_73() const { return ___OnSourceRotationChangedEventHandler_73; }
	inline EventFunction_1_t4572EE92EA05D85B98404721FF20C8E1022E206A ** get_address_of_OnSourceRotationChangedEventHandler_73() { return &___OnSourceRotationChangedEventHandler_73; }
	inline void set_OnSourceRotationChangedEventHandler_73(EventFunction_1_t4572EE92EA05D85B98404721FF20C8E1022E206A * value)
	{
		___OnSourceRotationChangedEventHandler_73 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnSourceRotationChangedEventHandler_73), (void*)value);
	}

	inline static int32_t get_offset_of_RaiseSourcePoseChangedPerfMarker_74() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_tEA69EFC7CCC70EFD1283AE13DA6AA9674517EB8F_StaticFields, ___RaiseSourcePoseChangedPerfMarker_74)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_RaiseSourcePoseChangedPerfMarker_74() const { return ___RaiseSourcePoseChangedPerfMarker_74; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_RaiseSourcePoseChangedPerfMarker_74() { return &___RaiseSourcePoseChangedPerfMarker_74; }
	inline void set_RaiseSourcePoseChangedPerfMarker_74(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___RaiseSourcePoseChangedPerfMarker_74 = value;
	}

	inline static int32_t get_offset_of_OnSourcePoseChangedEventHandler_75() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_tEA69EFC7CCC70EFD1283AE13DA6AA9674517EB8F_StaticFields, ___OnSourcePoseChangedEventHandler_75)); }
	inline EventFunction_1_t4572EE92EA05D85B98404721FF20C8E1022E206A * get_OnSourcePoseChangedEventHandler_75() const { return ___OnSourcePoseChangedEventHandler_75; }
	inline EventFunction_1_t4572EE92EA05D85B98404721FF20C8E1022E206A ** get_address_of_OnSourcePoseChangedEventHandler_75() { return &___OnSourcePoseChangedEventHandler_75; }
	inline void set_OnSourcePoseChangedEventHandler_75(EventFunction_1_t4572EE92EA05D85B98404721FF20C8E1022E206A * value)
	{
		___OnSourcePoseChangedEventHandler_75 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnSourcePoseChangedEventHandler_75), (void*)value);
	}

	inline static int32_t get_offset_of_RaisePreFocusChangedPerfMarker_76() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_tEA69EFC7CCC70EFD1283AE13DA6AA9674517EB8F_StaticFields, ___RaisePreFocusChangedPerfMarker_76)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_RaisePreFocusChangedPerfMarker_76() const { return ___RaisePreFocusChangedPerfMarker_76; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_RaisePreFocusChangedPerfMarker_76() { return &___RaisePreFocusChangedPerfMarker_76; }
	inline void set_RaisePreFocusChangedPerfMarker_76(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___RaisePreFocusChangedPerfMarker_76 = value;
	}

	inline static int32_t get_offset_of_OnPreFocusChangedHandler_77() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_tEA69EFC7CCC70EFD1283AE13DA6AA9674517EB8F_StaticFields, ___OnPreFocusChangedHandler_77)); }
	inline EventFunction_1_t1B9490AC5D4E3C163258769C0B118BE2F2B7F1DC * get_OnPreFocusChangedHandler_77() const { return ___OnPreFocusChangedHandler_77; }
	inline EventFunction_1_t1B9490AC5D4E3C163258769C0B118BE2F2B7F1DC ** get_address_of_OnPreFocusChangedHandler_77() { return &___OnPreFocusChangedHandler_77; }
	inline void set_OnPreFocusChangedHandler_77(EventFunction_1_t1B9490AC5D4E3C163258769C0B118BE2F2B7F1DC * value)
	{
		___OnPreFocusChangedHandler_77 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnPreFocusChangedHandler_77), (void*)value);
	}

	inline static int32_t get_offset_of_RaiseFocusChangedPerfMarker_78() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_tEA69EFC7CCC70EFD1283AE13DA6AA9674517EB8F_StaticFields, ___RaiseFocusChangedPerfMarker_78)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_RaiseFocusChangedPerfMarker_78() const { return ___RaiseFocusChangedPerfMarker_78; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_RaiseFocusChangedPerfMarker_78() { return &___RaiseFocusChangedPerfMarker_78; }
	inline void set_RaiseFocusChangedPerfMarker_78(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___RaiseFocusChangedPerfMarker_78 = value;
	}

	inline static int32_t get_offset_of_OnFocusChangedHandler_79() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_tEA69EFC7CCC70EFD1283AE13DA6AA9674517EB8F_StaticFields, ___OnFocusChangedHandler_79)); }
	inline EventFunction_1_t1B9490AC5D4E3C163258769C0B118BE2F2B7F1DC * get_OnFocusChangedHandler_79() const { return ___OnFocusChangedHandler_79; }
	inline EventFunction_1_t1B9490AC5D4E3C163258769C0B118BE2F2B7F1DC ** get_address_of_OnFocusChangedHandler_79() { return &___OnFocusChangedHandler_79; }
	inline void set_OnFocusChangedHandler_79(EventFunction_1_t1B9490AC5D4E3C163258769C0B118BE2F2B7F1DC * value)
	{
		___OnFocusChangedHandler_79 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnFocusChangedHandler_79), (void*)value);
	}

	inline static int32_t get_offset_of_RaiseFocusEnterPerfMarker_80() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_tEA69EFC7CCC70EFD1283AE13DA6AA9674517EB8F_StaticFields, ___RaiseFocusEnterPerfMarker_80)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_RaiseFocusEnterPerfMarker_80() const { return ___RaiseFocusEnterPerfMarker_80; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_RaiseFocusEnterPerfMarker_80() { return &___RaiseFocusEnterPerfMarker_80; }
	inline void set_RaiseFocusEnterPerfMarker_80(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___RaiseFocusEnterPerfMarker_80 = value;
	}

	inline static int32_t get_offset_of_OnFocusEnterEventHandler_81() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_tEA69EFC7CCC70EFD1283AE13DA6AA9674517EB8F_StaticFields, ___OnFocusEnterEventHandler_81)); }
	inline EventFunction_1_t206E29E95D8C165388DAAAA7D3EAF08A675E2D32 * get_OnFocusEnterEventHandler_81() const { return ___OnFocusEnterEventHandler_81; }
	inline EventFunction_1_t206E29E95D8C165388DAAAA7D3EAF08A675E2D32 ** get_address_of_OnFocusEnterEventHandler_81() { return &___OnFocusEnterEventHandler_81; }
	inline void set_OnFocusEnterEventHandler_81(EventFunction_1_t206E29E95D8C165388DAAAA7D3EAF08A675E2D32 * value)
	{
		___OnFocusEnterEventHandler_81 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnFocusEnterEventHandler_81), (void*)value);
	}

	inline static int32_t get_offset_of_RaiseFocusExitPerfMarker_82() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_tEA69EFC7CCC70EFD1283AE13DA6AA9674517EB8F_StaticFields, ___RaiseFocusExitPerfMarker_82)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_RaiseFocusExitPerfMarker_82() const { return ___RaiseFocusExitPerfMarker_82; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_RaiseFocusExitPerfMarker_82() { return &___RaiseFocusExitPerfMarker_82; }
	inline void set_RaiseFocusExitPerfMarker_82(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___RaiseFocusExitPerfMarker_82 = value;
	}

	inline static int32_t get_offset_of_OnFocusExitEventHandler_83() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_tEA69EFC7CCC70EFD1283AE13DA6AA9674517EB8F_StaticFields, ___OnFocusExitEventHandler_83)); }
	inline EventFunction_1_t206E29E95D8C165388DAAAA7D3EAF08A675E2D32 * get_OnFocusExitEventHandler_83() const { return ___OnFocusExitEventHandler_83; }
	inline EventFunction_1_t206E29E95D8C165388DAAAA7D3EAF08A675E2D32 ** get_address_of_OnFocusExitEventHandler_83() { return &___OnFocusExitEventHandler_83; }
	inline void set_OnFocusExitEventHandler_83(EventFunction_1_t206E29E95D8C165388DAAAA7D3EAF08A675E2D32 * value)
	{
		___OnFocusExitEventHandler_83 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnFocusExitEventHandler_83), (void*)value);
	}

	inline static int32_t get_offset_of_OnPointerDownEventHandler_84() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_tEA69EFC7CCC70EFD1283AE13DA6AA9674517EB8F_StaticFields, ___OnPointerDownEventHandler_84)); }
	inline EventFunction_1_tF264EDDAD7A0259A372F473BB6B301A63A5766CD * get_OnPointerDownEventHandler_84() const { return ___OnPointerDownEventHandler_84; }
	inline EventFunction_1_tF264EDDAD7A0259A372F473BB6B301A63A5766CD ** get_address_of_OnPointerDownEventHandler_84() { return &___OnPointerDownEventHandler_84; }
	inline void set_OnPointerDownEventHandler_84(EventFunction_1_tF264EDDAD7A0259A372F473BB6B301A63A5766CD * value)
	{
		___OnPointerDownEventHandler_84 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnPointerDownEventHandler_84), (void*)value);
	}

	inline static int32_t get_offset_of_RaisePointerDownPerfMarker_85() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_tEA69EFC7CCC70EFD1283AE13DA6AA9674517EB8F_StaticFields, ___RaisePointerDownPerfMarker_85)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_RaisePointerDownPerfMarker_85() const { return ___RaisePointerDownPerfMarker_85; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_RaisePointerDownPerfMarker_85() { return &___RaisePointerDownPerfMarker_85; }
	inline void set_RaisePointerDownPerfMarker_85(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___RaisePointerDownPerfMarker_85 = value;
	}

	inline static int32_t get_offset_of_OnPointerDraggedEventHandler_86() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_tEA69EFC7CCC70EFD1283AE13DA6AA9674517EB8F_StaticFields, ___OnPointerDraggedEventHandler_86)); }
	inline EventFunction_1_tF264EDDAD7A0259A372F473BB6B301A63A5766CD * get_OnPointerDraggedEventHandler_86() const { return ___OnPointerDraggedEventHandler_86; }
	inline EventFunction_1_tF264EDDAD7A0259A372F473BB6B301A63A5766CD ** get_address_of_OnPointerDraggedEventHandler_86() { return &___OnPointerDraggedEventHandler_86; }
	inline void set_OnPointerDraggedEventHandler_86(EventFunction_1_tF264EDDAD7A0259A372F473BB6B301A63A5766CD * value)
	{
		___OnPointerDraggedEventHandler_86 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnPointerDraggedEventHandler_86), (void*)value);
	}

	inline static int32_t get_offset_of_RaisePointerDraggedPerfMarker_87() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_tEA69EFC7CCC70EFD1283AE13DA6AA9674517EB8F_StaticFields, ___RaisePointerDraggedPerfMarker_87)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_RaisePointerDraggedPerfMarker_87() const { return ___RaisePointerDraggedPerfMarker_87; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_RaisePointerDraggedPerfMarker_87() { return &___RaisePointerDraggedPerfMarker_87; }
	inline void set_RaisePointerDraggedPerfMarker_87(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___RaisePointerDraggedPerfMarker_87 = value;
	}

	inline static int32_t get_offset_of_OnInputClickedEventHandler_88() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_tEA69EFC7CCC70EFD1283AE13DA6AA9674517EB8F_StaticFields, ___OnInputClickedEventHandler_88)); }
	inline EventFunction_1_tF264EDDAD7A0259A372F473BB6B301A63A5766CD * get_OnInputClickedEventHandler_88() const { return ___OnInputClickedEventHandler_88; }
	inline EventFunction_1_tF264EDDAD7A0259A372F473BB6B301A63A5766CD ** get_address_of_OnInputClickedEventHandler_88() { return &___OnInputClickedEventHandler_88; }
	inline void set_OnInputClickedEventHandler_88(EventFunction_1_tF264EDDAD7A0259A372F473BB6B301A63A5766CD * value)
	{
		___OnInputClickedEventHandler_88 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnInputClickedEventHandler_88), (void*)value);
	}

	inline static int32_t get_offset_of_RaisePointerClickedPerfMarker_89() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_tEA69EFC7CCC70EFD1283AE13DA6AA9674517EB8F_StaticFields, ___RaisePointerClickedPerfMarker_89)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_RaisePointerClickedPerfMarker_89() const { return ___RaisePointerClickedPerfMarker_89; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_RaisePointerClickedPerfMarker_89() { return &___RaisePointerClickedPerfMarker_89; }
	inline void set_RaisePointerClickedPerfMarker_89(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___RaisePointerClickedPerfMarker_89 = value;
	}

	inline static int32_t get_offset_of_OnPointerUpEventHandler_90() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_tEA69EFC7CCC70EFD1283AE13DA6AA9674517EB8F_StaticFields, ___OnPointerUpEventHandler_90)); }
	inline EventFunction_1_tF264EDDAD7A0259A372F473BB6B301A63A5766CD * get_OnPointerUpEventHandler_90() const { return ___OnPointerUpEventHandler_90; }
	inline EventFunction_1_tF264EDDAD7A0259A372F473BB6B301A63A5766CD ** get_address_of_OnPointerUpEventHandler_90() { return &___OnPointerUpEventHandler_90; }
	inline void set_OnPointerUpEventHandler_90(EventFunction_1_tF264EDDAD7A0259A372F473BB6B301A63A5766CD * value)
	{
		___OnPointerUpEventHandler_90 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnPointerUpEventHandler_90), (void*)value);
	}

	inline static int32_t get_offset_of_RaisePointerUpPerfMarker_91() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_tEA69EFC7CCC70EFD1283AE13DA6AA9674517EB8F_StaticFields, ___RaisePointerUpPerfMarker_91)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_RaisePointerUpPerfMarker_91() const { return ___RaisePointerUpPerfMarker_91; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_RaisePointerUpPerfMarker_91() { return &___RaisePointerUpPerfMarker_91; }
	inline void set_RaisePointerUpPerfMarker_91(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___RaisePointerUpPerfMarker_91 = value;
	}

	inline static int32_t get_offset_of_OnInputDownEventHandler_92() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_tEA69EFC7CCC70EFD1283AE13DA6AA9674517EB8F_StaticFields, ___OnInputDownEventHandler_92)); }
	inline EventFunction_1_t5E50649990A6F0C0F66D53E65EC344A07EDA6B38 * get_OnInputDownEventHandler_92() const { return ___OnInputDownEventHandler_92; }
	inline EventFunction_1_t5E50649990A6F0C0F66D53E65EC344A07EDA6B38 ** get_address_of_OnInputDownEventHandler_92() { return &___OnInputDownEventHandler_92; }
	inline void set_OnInputDownEventHandler_92(EventFunction_1_t5E50649990A6F0C0F66D53E65EC344A07EDA6B38 * value)
	{
		___OnInputDownEventHandler_92 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnInputDownEventHandler_92), (void*)value);
	}

	inline static int32_t get_offset_of_OnInputDownWithActionEventHandler_93() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_tEA69EFC7CCC70EFD1283AE13DA6AA9674517EB8F_StaticFields, ___OnInputDownWithActionEventHandler_93)); }
	inline EventFunction_1_t44117366BBF11D3CCB711E8B061BCE3183EC11CE * get_OnInputDownWithActionEventHandler_93() const { return ___OnInputDownWithActionEventHandler_93; }
	inline EventFunction_1_t44117366BBF11D3CCB711E8B061BCE3183EC11CE ** get_address_of_OnInputDownWithActionEventHandler_93() { return &___OnInputDownWithActionEventHandler_93; }
	inline void set_OnInputDownWithActionEventHandler_93(EventFunction_1_t44117366BBF11D3CCB711E8B061BCE3183EC11CE * value)
	{
		___OnInputDownWithActionEventHandler_93 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnInputDownWithActionEventHandler_93), (void*)value);
	}

	inline static int32_t get_offset_of_RaiseOnInputDownPerfMarker_94() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_tEA69EFC7CCC70EFD1283AE13DA6AA9674517EB8F_StaticFields, ___RaiseOnInputDownPerfMarker_94)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_RaiseOnInputDownPerfMarker_94() const { return ___RaiseOnInputDownPerfMarker_94; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_RaiseOnInputDownPerfMarker_94() { return &___RaiseOnInputDownPerfMarker_94; }
	inline void set_RaiseOnInputDownPerfMarker_94(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___RaiseOnInputDownPerfMarker_94 = value;
	}

	inline static int32_t get_offset_of_OnInputUpEventHandler_95() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_tEA69EFC7CCC70EFD1283AE13DA6AA9674517EB8F_StaticFields, ___OnInputUpEventHandler_95)); }
	inline EventFunction_1_t5E50649990A6F0C0F66D53E65EC344A07EDA6B38 * get_OnInputUpEventHandler_95() const { return ___OnInputUpEventHandler_95; }
	inline EventFunction_1_t5E50649990A6F0C0F66D53E65EC344A07EDA6B38 ** get_address_of_OnInputUpEventHandler_95() { return &___OnInputUpEventHandler_95; }
	inline void set_OnInputUpEventHandler_95(EventFunction_1_t5E50649990A6F0C0F66D53E65EC344A07EDA6B38 * value)
	{
		___OnInputUpEventHandler_95 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnInputUpEventHandler_95), (void*)value);
	}

	inline static int32_t get_offset_of_OnInputUpWithActionEventHandler_96() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_tEA69EFC7CCC70EFD1283AE13DA6AA9674517EB8F_StaticFields, ___OnInputUpWithActionEventHandler_96)); }
	inline EventFunction_1_t44117366BBF11D3CCB711E8B061BCE3183EC11CE * get_OnInputUpWithActionEventHandler_96() const { return ___OnInputUpWithActionEventHandler_96; }
	inline EventFunction_1_t44117366BBF11D3CCB711E8B061BCE3183EC11CE ** get_address_of_OnInputUpWithActionEventHandler_96() { return &___OnInputUpWithActionEventHandler_96; }
	inline void set_OnInputUpWithActionEventHandler_96(EventFunction_1_t44117366BBF11D3CCB711E8B061BCE3183EC11CE * value)
	{
		___OnInputUpWithActionEventHandler_96 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnInputUpWithActionEventHandler_96), (void*)value);
	}

	inline static int32_t get_offset_of_RaiseOnInputUpPerfMarker_97() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_tEA69EFC7CCC70EFD1283AE13DA6AA9674517EB8F_StaticFields, ___RaiseOnInputUpPerfMarker_97)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_RaiseOnInputUpPerfMarker_97() const { return ___RaiseOnInputUpPerfMarker_97; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_RaiseOnInputUpPerfMarker_97() { return &___RaiseOnInputUpPerfMarker_97; }
	inline void set_RaiseOnInputUpPerfMarker_97(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___RaiseOnInputUpPerfMarker_97 = value;
	}

	inline static int32_t get_offset_of_OnFloatInputChanged_98() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_tEA69EFC7CCC70EFD1283AE13DA6AA9674517EB8F_StaticFields, ___OnFloatInputChanged_98)); }
	inline EventFunction_1_tFF383DC5859C3F505C05CDC060A32D6DAE236472 * get_OnFloatInputChanged_98() const { return ___OnFloatInputChanged_98; }
	inline EventFunction_1_tFF383DC5859C3F505C05CDC060A32D6DAE236472 ** get_address_of_OnFloatInputChanged_98() { return &___OnFloatInputChanged_98; }
	inline void set_OnFloatInputChanged_98(EventFunction_1_tFF383DC5859C3F505C05CDC060A32D6DAE236472 * value)
	{
		___OnFloatInputChanged_98 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnFloatInputChanged_98), (void*)value);
	}

	inline static int32_t get_offset_of_RaiseFloatInputChangedPerfMarker_99() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_tEA69EFC7CCC70EFD1283AE13DA6AA9674517EB8F_StaticFields, ___RaiseFloatInputChangedPerfMarker_99)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_RaiseFloatInputChangedPerfMarker_99() const { return ___RaiseFloatInputChangedPerfMarker_99; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_RaiseFloatInputChangedPerfMarker_99() { return &___RaiseFloatInputChangedPerfMarker_99; }
	inline void set_RaiseFloatInputChangedPerfMarker_99(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___RaiseFloatInputChangedPerfMarker_99 = value;
	}

	inline static int32_t get_offset_of_OnTwoDoFInputChanged_100() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_tEA69EFC7CCC70EFD1283AE13DA6AA9674517EB8F_StaticFields, ___OnTwoDoFInputChanged_100)); }
	inline EventFunction_1_tB51BC8CA70F939E869F063E94FF47C143D68E1D6 * get_OnTwoDoFInputChanged_100() const { return ___OnTwoDoFInputChanged_100; }
	inline EventFunction_1_tB51BC8CA70F939E869F063E94FF47C143D68E1D6 ** get_address_of_OnTwoDoFInputChanged_100() { return &___OnTwoDoFInputChanged_100; }
	inline void set_OnTwoDoFInputChanged_100(EventFunction_1_tB51BC8CA70F939E869F063E94FF47C143D68E1D6 * value)
	{
		___OnTwoDoFInputChanged_100 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnTwoDoFInputChanged_100), (void*)value);
	}

	inline static int32_t get_offset_of_RaisePositionInputChangedPerfMarker_101() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_tEA69EFC7CCC70EFD1283AE13DA6AA9674517EB8F_StaticFields, ___RaisePositionInputChangedPerfMarker_101)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_RaisePositionInputChangedPerfMarker_101() const { return ___RaisePositionInputChangedPerfMarker_101; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_RaisePositionInputChangedPerfMarker_101() { return &___RaisePositionInputChangedPerfMarker_101; }
	inline void set_RaisePositionInputChangedPerfMarker_101(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___RaisePositionInputChangedPerfMarker_101 = value;
	}

	inline static int32_t get_offset_of_OnPositionInputChanged_102() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_tEA69EFC7CCC70EFD1283AE13DA6AA9674517EB8F_StaticFields, ___OnPositionInputChanged_102)); }
	inline EventFunction_1_t06A6015DB33482FA1728EAB615DEC69DE0CBB31A * get_OnPositionInputChanged_102() const { return ___OnPositionInputChanged_102; }
	inline EventFunction_1_t06A6015DB33482FA1728EAB615DEC69DE0CBB31A ** get_address_of_OnPositionInputChanged_102() { return &___OnPositionInputChanged_102; }
	inline void set_OnPositionInputChanged_102(EventFunction_1_t06A6015DB33482FA1728EAB615DEC69DE0CBB31A * value)
	{
		___OnPositionInputChanged_102 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnPositionInputChanged_102), (void*)value);
	}

	inline static int32_t get_offset_of_OnRotationInputChanged_103() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_tEA69EFC7CCC70EFD1283AE13DA6AA9674517EB8F_StaticFields, ___OnRotationInputChanged_103)); }
	inline EventFunction_1_t3741013856ACBA6170BA0506B00EBEB4A73B4C5C * get_OnRotationInputChanged_103() const { return ___OnRotationInputChanged_103; }
	inline EventFunction_1_t3741013856ACBA6170BA0506B00EBEB4A73B4C5C ** get_address_of_OnRotationInputChanged_103() { return &___OnRotationInputChanged_103; }
	inline void set_OnRotationInputChanged_103(EventFunction_1_t3741013856ACBA6170BA0506B00EBEB4A73B4C5C * value)
	{
		___OnRotationInputChanged_103 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnRotationInputChanged_103), (void*)value);
	}

	inline static int32_t get_offset_of_RaiseRotationInputChangedPerfMarker_104() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_tEA69EFC7CCC70EFD1283AE13DA6AA9674517EB8F_StaticFields, ___RaiseRotationInputChangedPerfMarker_104)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_RaiseRotationInputChangedPerfMarker_104() const { return ___RaiseRotationInputChangedPerfMarker_104; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_RaiseRotationInputChangedPerfMarker_104() { return &___RaiseRotationInputChangedPerfMarker_104; }
	inline void set_RaiseRotationInputChangedPerfMarker_104(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___RaiseRotationInputChangedPerfMarker_104 = value;
	}

	inline static int32_t get_offset_of_OnPoseInputChanged_105() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_tEA69EFC7CCC70EFD1283AE13DA6AA9674517EB8F_StaticFields, ___OnPoseInputChanged_105)); }
	inline EventFunction_1_tA90947B91567263334011AA055D0E4D10E433C51 * get_OnPoseInputChanged_105() const { return ___OnPoseInputChanged_105; }
	inline EventFunction_1_tA90947B91567263334011AA055D0E4D10E433C51 ** get_address_of_OnPoseInputChanged_105() { return &___OnPoseInputChanged_105; }
	inline void set_OnPoseInputChanged_105(EventFunction_1_tA90947B91567263334011AA055D0E4D10E433C51 * value)
	{
		___OnPoseInputChanged_105 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnPoseInputChanged_105), (void*)value);
	}

	inline static int32_t get_offset_of_RaisePoseInputChangedPerfMarker_106() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_tEA69EFC7CCC70EFD1283AE13DA6AA9674517EB8F_StaticFields, ___RaisePoseInputChangedPerfMarker_106)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_RaisePoseInputChangedPerfMarker_106() const { return ___RaisePoseInputChangedPerfMarker_106; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_RaisePoseInputChangedPerfMarker_106() { return &___RaisePoseInputChangedPerfMarker_106; }
	inline void set_RaisePoseInputChangedPerfMarker_106(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___RaisePoseInputChangedPerfMarker_106 = value;
	}

	inline static int32_t get_offset_of_OnGestureStarted_107() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_tEA69EFC7CCC70EFD1283AE13DA6AA9674517EB8F_StaticFields, ___OnGestureStarted_107)); }
	inline EventFunction_1_tD3CF862953EF38C6CEC96E113C8BE4F6060C0B41 * get_OnGestureStarted_107() const { return ___OnGestureStarted_107; }
	inline EventFunction_1_tD3CF862953EF38C6CEC96E113C8BE4F6060C0B41 ** get_address_of_OnGestureStarted_107() { return &___OnGestureStarted_107; }
	inline void set_OnGestureStarted_107(EventFunction_1_tD3CF862953EF38C6CEC96E113C8BE4F6060C0B41 * value)
	{
		___OnGestureStarted_107 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnGestureStarted_107), (void*)value);
	}

	inline static int32_t get_offset_of_OnGestureStartedWithAction_108() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_tEA69EFC7CCC70EFD1283AE13DA6AA9674517EB8F_StaticFields, ___OnGestureStartedWithAction_108)); }
	inline EventFunction_1_t44117366BBF11D3CCB711E8B061BCE3183EC11CE * get_OnGestureStartedWithAction_108() const { return ___OnGestureStartedWithAction_108; }
	inline EventFunction_1_t44117366BBF11D3CCB711E8B061BCE3183EC11CE ** get_address_of_OnGestureStartedWithAction_108() { return &___OnGestureStartedWithAction_108; }
	inline void set_OnGestureStartedWithAction_108(EventFunction_1_t44117366BBF11D3CCB711E8B061BCE3183EC11CE * value)
	{
		___OnGestureStartedWithAction_108 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnGestureStartedWithAction_108), (void*)value);
	}

	inline static int32_t get_offset_of_RaiseGestureStartedPerfMarker_109() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_tEA69EFC7CCC70EFD1283AE13DA6AA9674517EB8F_StaticFields, ___RaiseGestureStartedPerfMarker_109)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_RaiseGestureStartedPerfMarker_109() const { return ___RaiseGestureStartedPerfMarker_109; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_RaiseGestureStartedPerfMarker_109() { return &___RaiseGestureStartedPerfMarker_109; }
	inline void set_RaiseGestureStartedPerfMarker_109(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___RaiseGestureStartedPerfMarker_109 = value;
	}

	inline static int32_t get_offset_of_OnGestureUpdated_110() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_tEA69EFC7CCC70EFD1283AE13DA6AA9674517EB8F_StaticFields, ___OnGestureUpdated_110)); }
	inline EventFunction_1_tD3CF862953EF38C6CEC96E113C8BE4F6060C0B41 * get_OnGestureUpdated_110() const { return ___OnGestureUpdated_110; }
	inline EventFunction_1_tD3CF862953EF38C6CEC96E113C8BE4F6060C0B41 ** get_address_of_OnGestureUpdated_110() { return &___OnGestureUpdated_110; }
	inline void set_OnGestureUpdated_110(EventFunction_1_tD3CF862953EF38C6CEC96E113C8BE4F6060C0B41 * value)
	{
		___OnGestureUpdated_110 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnGestureUpdated_110), (void*)value);
	}

	inline static int32_t get_offset_of_RaiseGestureUpdatedPerfMarker_111() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_tEA69EFC7CCC70EFD1283AE13DA6AA9674517EB8F_StaticFields, ___RaiseGestureUpdatedPerfMarker_111)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_RaiseGestureUpdatedPerfMarker_111() const { return ___RaiseGestureUpdatedPerfMarker_111; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_RaiseGestureUpdatedPerfMarker_111() { return &___RaiseGestureUpdatedPerfMarker_111; }
	inline void set_RaiseGestureUpdatedPerfMarker_111(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___RaiseGestureUpdatedPerfMarker_111 = value;
	}

	inline static int32_t get_offset_of_OnGestureVector2PositionUpdated_112() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_tEA69EFC7CCC70EFD1283AE13DA6AA9674517EB8F_StaticFields, ___OnGestureVector2PositionUpdated_112)); }
	inline EventFunction_1_tB58B3057E0CC1C08A66D71D8A15653913FFEFF68 * get_OnGestureVector2PositionUpdated_112() const { return ___OnGestureVector2PositionUpdated_112; }
	inline EventFunction_1_tB58B3057E0CC1C08A66D71D8A15653913FFEFF68 ** get_address_of_OnGestureVector2PositionUpdated_112() { return &___OnGestureVector2PositionUpdated_112; }
	inline void set_OnGestureVector2PositionUpdated_112(EventFunction_1_tB58B3057E0CC1C08A66D71D8A15653913FFEFF68 * value)
	{
		___OnGestureVector2PositionUpdated_112 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnGestureVector2PositionUpdated_112), (void*)value);
	}

	inline static int32_t get_offset_of_OnGesturePositionUpdated_113() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_tEA69EFC7CCC70EFD1283AE13DA6AA9674517EB8F_StaticFields, ___OnGesturePositionUpdated_113)); }
	inline EventFunction_1_t57976825B4E6CDE53D51C864DC3BDB7FF6488E14 * get_OnGesturePositionUpdated_113() const { return ___OnGesturePositionUpdated_113; }
	inline EventFunction_1_t57976825B4E6CDE53D51C864DC3BDB7FF6488E14 ** get_address_of_OnGesturePositionUpdated_113() { return &___OnGesturePositionUpdated_113; }
	inline void set_OnGesturePositionUpdated_113(EventFunction_1_t57976825B4E6CDE53D51C864DC3BDB7FF6488E14 * value)
	{
		___OnGesturePositionUpdated_113 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnGesturePositionUpdated_113), (void*)value);
	}

	inline static int32_t get_offset_of_OnGestureRotationUpdated_114() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_tEA69EFC7CCC70EFD1283AE13DA6AA9674517EB8F_StaticFields, ___OnGestureRotationUpdated_114)); }
	inline EventFunction_1_tA271F0C7F32FEAC4972FB9EE8995F053EEE4DC18 * get_OnGestureRotationUpdated_114() const { return ___OnGestureRotationUpdated_114; }
	inline EventFunction_1_tA271F0C7F32FEAC4972FB9EE8995F053EEE4DC18 ** get_address_of_OnGestureRotationUpdated_114() { return &___OnGestureRotationUpdated_114; }
	inline void set_OnGestureRotationUpdated_114(EventFunction_1_tA271F0C7F32FEAC4972FB9EE8995F053EEE4DC18 * value)
	{
		___OnGestureRotationUpdated_114 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnGestureRotationUpdated_114), (void*)value);
	}

	inline static int32_t get_offset_of_OnGesturePoseUpdated_115() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_tEA69EFC7CCC70EFD1283AE13DA6AA9674517EB8F_StaticFields, ___OnGesturePoseUpdated_115)); }
	inline EventFunction_1_tAEC84A3419EA0BD79A66A2818950D44B1787383F * get_OnGesturePoseUpdated_115() const { return ___OnGesturePoseUpdated_115; }
	inline EventFunction_1_tAEC84A3419EA0BD79A66A2818950D44B1787383F ** get_address_of_OnGesturePoseUpdated_115() { return &___OnGesturePoseUpdated_115; }
	inline void set_OnGesturePoseUpdated_115(EventFunction_1_tAEC84A3419EA0BD79A66A2818950D44B1787383F * value)
	{
		___OnGesturePoseUpdated_115 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnGesturePoseUpdated_115), (void*)value);
	}

	inline static int32_t get_offset_of_OnGestureCompleted_116() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_tEA69EFC7CCC70EFD1283AE13DA6AA9674517EB8F_StaticFields, ___OnGestureCompleted_116)); }
	inline EventFunction_1_tD3CF862953EF38C6CEC96E113C8BE4F6060C0B41 * get_OnGestureCompleted_116() const { return ___OnGestureCompleted_116; }
	inline EventFunction_1_tD3CF862953EF38C6CEC96E113C8BE4F6060C0B41 ** get_address_of_OnGestureCompleted_116() { return &___OnGestureCompleted_116; }
	inline void set_OnGestureCompleted_116(EventFunction_1_tD3CF862953EF38C6CEC96E113C8BE4F6060C0B41 * value)
	{
		___OnGestureCompleted_116 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnGestureCompleted_116), (void*)value);
	}

	inline static int32_t get_offset_of_OnGestureCompletedWithAction_117() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_tEA69EFC7CCC70EFD1283AE13DA6AA9674517EB8F_StaticFields, ___OnGestureCompletedWithAction_117)); }
	inline EventFunction_1_t44117366BBF11D3CCB711E8B061BCE3183EC11CE * get_OnGestureCompletedWithAction_117() const { return ___OnGestureCompletedWithAction_117; }
	inline EventFunction_1_t44117366BBF11D3CCB711E8B061BCE3183EC11CE ** get_address_of_OnGestureCompletedWithAction_117() { return &___OnGestureCompletedWithAction_117; }
	inline void set_OnGestureCompletedWithAction_117(EventFunction_1_t44117366BBF11D3CCB711E8B061BCE3183EC11CE * value)
	{
		___OnGestureCompletedWithAction_117 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnGestureCompletedWithAction_117), (void*)value);
	}

	inline static int32_t get_offset_of_RaiseGestureCompletedPerfMarker_118() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_tEA69EFC7CCC70EFD1283AE13DA6AA9674517EB8F_StaticFields, ___RaiseGestureCompletedPerfMarker_118)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_RaiseGestureCompletedPerfMarker_118() const { return ___RaiseGestureCompletedPerfMarker_118; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_RaiseGestureCompletedPerfMarker_118() { return &___RaiseGestureCompletedPerfMarker_118; }
	inline void set_RaiseGestureCompletedPerfMarker_118(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___RaiseGestureCompletedPerfMarker_118 = value;
	}

	inline static int32_t get_offset_of_OnGestureVector2PositionCompleted_119() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_tEA69EFC7CCC70EFD1283AE13DA6AA9674517EB8F_StaticFields, ___OnGestureVector2PositionCompleted_119)); }
	inline EventFunction_1_tB58B3057E0CC1C08A66D71D8A15653913FFEFF68 * get_OnGestureVector2PositionCompleted_119() const { return ___OnGestureVector2PositionCompleted_119; }
	inline EventFunction_1_tB58B3057E0CC1C08A66D71D8A15653913FFEFF68 ** get_address_of_OnGestureVector2PositionCompleted_119() { return &___OnGestureVector2PositionCompleted_119; }
	inline void set_OnGestureVector2PositionCompleted_119(EventFunction_1_tB58B3057E0CC1C08A66D71D8A15653913FFEFF68 * value)
	{
		___OnGestureVector2PositionCompleted_119 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnGestureVector2PositionCompleted_119), (void*)value);
	}

	inline static int32_t get_offset_of_OnGesturePositionCompleted_120() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_tEA69EFC7CCC70EFD1283AE13DA6AA9674517EB8F_StaticFields, ___OnGesturePositionCompleted_120)); }
	inline EventFunction_1_t57976825B4E6CDE53D51C864DC3BDB7FF6488E14 * get_OnGesturePositionCompleted_120() const { return ___OnGesturePositionCompleted_120; }
	inline EventFunction_1_t57976825B4E6CDE53D51C864DC3BDB7FF6488E14 ** get_address_of_OnGesturePositionCompleted_120() { return &___OnGesturePositionCompleted_120; }
	inline void set_OnGesturePositionCompleted_120(EventFunction_1_t57976825B4E6CDE53D51C864DC3BDB7FF6488E14 * value)
	{
		___OnGesturePositionCompleted_120 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnGesturePositionCompleted_120), (void*)value);
	}

	inline static int32_t get_offset_of_OnGestureRotationCompleted_121() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_tEA69EFC7CCC70EFD1283AE13DA6AA9674517EB8F_StaticFields, ___OnGestureRotationCompleted_121)); }
	inline EventFunction_1_tA271F0C7F32FEAC4972FB9EE8995F053EEE4DC18 * get_OnGestureRotationCompleted_121() const { return ___OnGestureRotationCompleted_121; }
	inline EventFunction_1_tA271F0C7F32FEAC4972FB9EE8995F053EEE4DC18 ** get_address_of_OnGestureRotationCompleted_121() { return &___OnGestureRotationCompleted_121; }
	inline void set_OnGestureRotationCompleted_121(EventFunction_1_tA271F0C7F32FEAC4972FB9EE8995F053EEE4DC18 * value)
	{
		___OnGestureRotationCompleted_121 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnGestureRotationCompleted_121), (void*)value);
	}

	inline static int32_t get_offset_of_OnGesturePoseCompleted_122() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_tEA69EFC7CCC70EFD1283AE13DA6AA9674517EB8F_StaticFields, ___OnGesturePoseCompleted_122)); }
	inline EventFunction_1_tAEC84A3419EA0BD79A66A2818950D44B1787383F * get_OnGesturePoseCompleted_122() const { return ___OnGesturePoseCompleted_122; }
	inline EventFunction_1_tAEC84A3419EA0BD79A66A2818950D44B1787383F ** get_address_of_OnGesturePoseCompleted_122() { return &___OnGesturePoseCompleted_122; }
	inline void set_OnGesturePoseCompleted_122(EventFunction_1_tAEC84A3419EA0BD79A66A2818950D44B1787383F * value)
	{
		___OnGesturePoseCompleted_122 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnGesturePoseCompleted_122), (void*)value);
	}

	inline static int32_t get_offset_of_OnGestureCanceled_123() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_tEA69EFC7CCC70EFD1283AE13DA6AA9674517EB8F_StaticFields, ___OnGestureCanceled_123)); }
	inline EventFunction_1_tD3CF862953EF38C6CEC96E113C8BE4F6060C0B41 * get_OnGestureCanceled_123() const { return ___OnGestureCanceled_123; }
	inline EventFunction_1_tD3CF862953EF38C6CEC96E113C8BE4F6060C0B41 ** get_address_of_OnGestureCanceled_123() { return &___OnGestureCanceled_123; }
	inline void set_OnGestureCanceled_123(EventFunction_1_tD3CF862953EF38C6CEC96E113C8BE4F6060C0B41 * value)
	{
		___OnGestureCanceled_123 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnGestureCanceled_123), (void*)value);
	}

	inline static int32_t get_offset_of_RaiseGestureCanceledPerfMarker_124() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_tEA69EFC7CCC70EFD1283AE13DA6AA9674517EB8F_StaticFields, ___RaiseGestureCanceledPerfMarker_124)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_RaiseGestureCanceledPerfMarker_124() const { return ___RaiseGestureCanceledPerfMarker_124; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_RaiseGestureCanceledPerfMarker_124() { return &___RaiseGestureCanceledPerfMarker_124; }
	inline void set_RaiseGestureCanceledPerfMarker_124(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___RaiseGestureCanceledPerfMarker_124 = value;
	}

	inline static int32_t get_offset_of_OnSpeechKeywordRecognizedEventHandler_125() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_tEA69EFC7CCC70EFD1283AE13DA6AA9674517EB8F_StaticFields, ___OnSpeechKeywordRecognizedEventHandler_125)); }
	inline EventFunction_1_t19E2F0124E935AADF61940326CD4D988C74F5B40 * get_OnSpeechKeywordRecognizedEventHandler_125() const { return ___OnSpeechKeywordRecognizedEventHandler_125; }
	inline EventFunction_1_t19E2F0124E935AADF61940326CD4D988C74F5B40 ** get_address_of_OnSpeechKeywordRecognizedEventHandler_125() { return &___OnSpeechKeywordRecognizedEventHandler_125; }
	inline void set_OnSpeechKeywordRecognizedEventHandler_125(EventFunction_1_t19E2F0124E935AADF61940326CD4D988C74F5B40 * value)
	{
		___OnSpeechKeywordRecognizedEventHandler_125 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnSpeechKeywordRecognizedEventHandler_125), (void*)value);
	}

	inline static int32_t get_offset_of_OnSpeechKeywordRecognizedWithActionEventHandler_126() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_tEA69EFC7CCC70EFD1283AE13DA6AA9674517EB8F_StaticFields, ___OnSpeechKeywordRecognizedWithActionEventHandler_126)); }
	inline EventFunction_1_t44117366BBF11D3CCB711E8B061BCE3183EC11CE * get_OnSpeechKeywordRecognizedWithActionEventHandler_126() const { return ___OnSpeechKeywordRecognizedWithActionEventHandler_126; }
	inline EventFunction_1_t44117366BBF11D3CCB711E8B061BCE3183EC11CE ** get_address_of_OnSpeechKeywordRecognizedWithActionEventHandler_126() { return &___OnSpeechKeywordRecognizedWithActionEventHandler_126; }
	inline void set_OnSpeechKeywordRecognizedWithActionEventHandler_126(EventFunction_1_t44117366BBF11D3CCB711E8B061BCE3183EC11CE * value)
	{
		___OnSpeechKeywordRecognizedWithActionEventHandler_126 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnSpeechKeywordRecognizedWithActionEventHandler_126), (void*)value);
	}

	inline static int32_t get_offset_of_RaiseSpeechCommandRecognizedPerfMarker_127() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_tEA69EFC7CCC70EFD1283AE13DA6AA9674517EB8F_StaticFields, ___RaiseSpeechCommandRecognizedPerfMarker_127)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_RaiseSpeechCommandRecognizedPerfMarker_127() const { return ___RaiseSpeechCommandRecognizedPerfMarker_127; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_RaiseSpeechCommandRecognizedPerfMarker_127() { return &___RaiseSpeechCommandRecognizedPerfMarker_127; }
	inline void set_RaiseSpeechCommandRecognizedPerfMarker_127(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___RaiseSpeechCommandRecognizedPerfMarker_127 = value;
	}

	inline static int32_t get_offset_of_OnDictationHypothesisEventHandler_128() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_tEA69EFC7CCC70EFD1283AE13DA6AA9674517EB8F_StaticFields, ___OnDictationHypothesisEventHandler_128)); }
	inline EventFunction_1_t0A259C57B4518D821C66F1D54F5F28546D4EF00B * get_OnDictationHypothesisEventHandler_128() const { return ___OnDictationHypothesisEventHandler_128; }
	inline EventFunction_1_t0A259C57B4518D821C66F1D54F5F28546D4EF00B ** get_address_of_OnDictationHypothesisEventHandler_128() { return &___OnDictationHypothesisEventHandler_128; }
	inline void set_OnDictationHypothesisEventHandler_128(EventFunction_1_t0A259C57B4518D821C66F1D54F5F28546D4EF00B * value)
	{
		___OnDictationHypothesisEventHandler_128 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnDictationHypothesisEventHandler_128), (void*)value);
	}

	inline static int32_t get_offset_of_RaiseDictationHypothesisPerfMarker_129() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_tEA69EFC7CCC70EFD1283AE13DA6AA9674517EB8F_StaticFields, ___RaiseDictationHypothesisPerfMarker_129)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_RaiseDictationHypothesisPerfMarker_129() const { return ___RaiseDictationHypothesisPerfMarker_129; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_RaiseDictationHypothesisPerfMarker_129() { return &___RaiseDictationHypothesisPerfMarker_129; }
	inline void set_RaiseDictationHypothesisPerfMarker_129(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___RaiseDictationHypothesisPerfMarker_129 = value;
	}

	inline static int32_t get_offset_of_OnDictationResultEventHandler_130() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_tEA69EFC7CCC70EFD1283AE13DA6AA9674517EB8F_StaticFields, ___OnDictationResultEventHandler_130)); }
	inline EventFunction_1_t0A259C57B4518D821C66F1D54F5F28546D4EF00B * get_OnDictationResultEventHandler_130() const { return ___OnDictationResultEventHandler_130; }
	inline EventFunction_1_t0A259C57B4518D821C66F1D54F5F28546D4EF00B ** get_address_of_OnDictationResultEventHandler_130() { return &___OnDictationResultEventHandler_130; }
	inline void set_OnDictationResultEventHandler_130(EventFunction_1_t0A259C57B4518D821C66F1D54F5F28546D4EF00B * value)
	{
		___OnDictationResultEventHandler_130 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnDictationResultEventHandler_130), (void*)value);
	}

	inline static int32_t get_offset_of_RaiseDictationResultPerfMarker_131() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_tEA69EFC7CCC70EFD1283AE13DA6AA9674517EB8F_StaticFields, ___RaiseDictationResultPerfMarker_131)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_RaiseDictationResultPerfMarker_131() const { return ___RaiseDictationResultPerfMarker_131; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_RaiseDictationResultPerfMarker_131() { return &___RaiseDictationResultPerfMarker_131; }
	inline void set_RaiseDictationResultPerfMarker_131(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___RaiseDictationResultPerfMarker_131 = value;
	}

	inline static int32_t get_offset_of_OnDictationCompleteEventHandler_132() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_tEA69EFC7CCC70EFD1283AE13DA6AA9674517EB8F_StaticFields, ___OnDictationCompleteEventHandler_132)); }
	inline EventFunction_1_t0A259C57B4518D821C66F1D54F5F28546D4EF00B * get_OnDictationCompleteEventHandler_132() const { return ___OnDictationCompleteEventHandler_132; }
	inline EventFunction_1_t0A259C57B4518D821C66F1D54F5F28546D4EF00B ** get_address_of_OnDictationCompleteEventHandler_132() { return &___OnDictationCompleteEventHandler_132; }
	inline void set_OnDictationCompleteEventHandler_132(EventFunction_1_t0A259C57B4518D821C66F1D54F5F28546D4EF00B * value)
	{
		___OnDictationCompleteEventHandler_132 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnDictationCompleteEventHandler_132), (void*)value);
	}

	inline static int32_t get_offset_of_RaiseDictationCompletePerfMarker_133() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_tEA69EFC7CCC70EFD1283AE13DA6AA9674517EB8F_StaticFields, ___RaiseDictationCompletePerfMarker_133)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_RaiseDictationCompletePerfMarker_133() const { return ___RaiseDictationCompletePerfMarker_133; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_RaiseDictationCompletePerfMarker_133() { return &___RaiseDictationCompletePerfMarker_133; }
	inline void set_RaiseDictationCompletePerfMarker_133(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___RaiseDictationCompletePerfMarker_133 = value;
	}

	inline static int32_t get_offset_of_OnDictationErrorEventHandler_134() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_tEA69EFC7CCC70EFD1283AE13DA6AA9674517EB8F_StaticFields, ___OnDictationErrorEventHandler_134)); }
	inline EventFunction_1_t0A259C57B4518D821C66F1D54F5F28546D4EF00B * get_OnDictationErrorEventHandler_134() const { return ___OnDictationErrorEventHandler_134; }
	inline EventFunction_1_t0A259C57B4518D821C66F1D54F5F28546D4EF00B ** get_address_of_OnDictationErrorEventHandler_134() { return &___OnDictationErrorEventHandler_134; }
	inline void set_OnDictationErrorEventHandler_134(EventFunction_1_t0A259C57B4518D821C66F1D54F5F28546D4EF00B * value)
	{
		___OnDictationErrorEventHandler_134 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnDictationErrorEventHandler_134), (void*)value);
	}

	inline static int32_t get_offset_of_RaiseDictationErrorPerfMarker_135() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_tEA69EFC7CCC70EFD1283AE13DA6AA9674517EB8F_StaticFields, ___RaiseDictationErrorPerfMarker_135)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_RaiseDictationErrorPerfMarker_135() const { return ___RaiseDictationErrorPerfMarker_135; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_RaiseDictationErrorPerfMarker_135() { return &___RaiseDictationErrorPerfMarker_135; }
	inline void set_RaiseDictationErrorPerfMarker_135(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___RaiseDictationErrorPerfMarker_135 = value;
	}

	inline static int32_t get_offset_of_OnHandJointsUpdatedEventHandler_136() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_tEA69EFC7CCC70EFD1283AE13DA6AA9674517EB8F_StaticFields, ___OnHandJointsUpdatedEventHandler_136)); }
	inline EventFunction_1_t40825EE839F00BCBC1FBFCFEEFDABD2E053CD2C6 * get_OnHandJointsUpdatedEventHandler_136() const { return ___OnHandJointsUpdatedEventHandler_136; }
	inline EventFunction_1_t40825EE839F00BCBC1FBFCFEEFDABD2E053CD2C6 ** get_address_of_OnHandJointsUpdatedEventHandler_136() { return &___OnHandJointsUpdatedEventHandler_136; }
	inline void set_OnHandJointsUpdatedEventHandler_136(EventFunction_1_t40825EE839F00BCBC1FBFCFEEFDABD2E053CD2C6 * value)
	{
		___OnHandJointsUpdatedEventHandler_136 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnHandJointsUpdatedEventHandler_136), (void*)value);
	}

	inline static int32_t get_offset_of_RaiseHandJointsUpdatedPerfMarker_137() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_tEA69EFC7CCC70EFD1283AE13DA6AA9674517EB8F_StaticFields, ___RaiseHandJointsUpdatedPerfMarker_137)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_RaiseHandJointsUpdatedPerfMarker_137() const { return ___RaiseHandJointsUpdatedPerfMarker_137; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_RaiseHandJointsUpdatedPerfMarker_137() { return &___RaiseHandJointsUpdatedPerfMarker_137; }
	inline void set_RaiseHandJointsUpdatedPerfMarker_137(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___RaiseHandJointsUpdatedPerfMarker_137 = value;
	}

	inline static int32_t get_offset_of_OnHandMeshUpdatedEventHandler_138() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_tEA69EFC7CCC70EFD1283AE13DA6AA9674517EB8F_StaticFields, ___OnHandMeshUpdatedEventHandler_138)); }
	inline EventFunction_1_t30558523BD63B0ED422F3492242DD501792A0344 * get_OnHandMeshUpdatedEventHandler_138() const { return ___OnHandMeshUpdatedEventHandler_138; }
	inline EventFunction_1_t30558523BD63B0ED422F3492242DD501792A0344 ** get_address_of_OnHandMeshUpdatedEventHandler_138() { return &___OnHandMeshUpdatedEventHandler_138; }
	inline void set_OnHandMeshUpdatedEventHandler_138(EventFunction_1_t30558523BD63B0ED422F3492242DD501792A0344 * value)
	{
		___OnHandMeshUpdatedEventHandler_138 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnHandMeshUpdatedEventHandler_138), (void*)value);
	}

	inline static int32_t get_offset_of_RaiseHandMeshUpdatedPerfMarker_139() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_tEA69EFC7CCC70EFD1283AE13DA6AA9674517EB8F_StaticFields, ___RaiseHandMeshUpdatedPerfMarker_139)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_RaiseHandMeshUpdatedPerfMarker_139() const { return ___RaiseHandMeshUpdatedPerfMarker_139; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_RaiseHandMeshUpdatedPerfMarker_139() { return &___RaiseHandMeshUpdatedPerfMarker_139; }
	inline void set_RaiseHandMeshUpdatedPerfMarker_139(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___RaiseHandMeshUpdatedPerfMarker_139 = value;
	}

	inline static int32_t get_offset_of_OnTouchStartedEventHandler_140() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_tEA69EFC7CCC70EFD1283AE13DA6AA9674517EB8F_StaticFields, ___OnTouchStartedEventHandler_140)); }
	inline EventFunction_1_t28980A47E1D1F187CF30BD1ECA66486220C8483A * get_OnTouchStartedEventHandler_140() const { return ___OnTouchStartedEventHandler_140; }
	inline EventFunction_1_t28980A47E1D1F187CF30BD1ECA66486220C8483A ** get_address_of_OnTouchStartedEventHandler_140() { return &___OnTouchStartedEventHandler_140; }
	inline void set_OnTouchStartedEventHandler_140(EventFunction_1_t28980A47E1D1F187CF30BD1ECA66486220C8483A * value)
	{
		___OnTouchStartedEventHandler_140 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnTouchStartedEventHandler_140), (void*)value);
	}

	inline static int32_t get_offset_of_RaiseOnTouchStartedPerfMarker_141() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_tEA69EFC7CCC70EFD1283AE13DA6AA9674517EB8F_StaticFields, ___RaiseOnTouchStartedPerfMarker_141)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_RaiseOnTouchStartedPerfMarker_141() const { return ___RaiseOnTouchStartedPerfMarker_141; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_RaiseOnTouchStartedPerfMarker_141() { return &___RaiseOnTouchStartedPerfMarker_141; }
	inline void set_RaiseOnTouchStartedPerfMarker_141(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___RaiseOnTouchStartedPerfMarker_141 = value;
	}

	inline static int32_t get_offset_of_OnTouchCompletedEventHandler_142() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_tEA69EFC7CCC70EFD1283AE13DA6AA9674517EB8F_StaticFields, ___OnTouchCompletedEventHandler_142)); }
	inline EventFunction_1_t28980A47E1D1F187CF30BD1ECA66486220C8483A * get_OnTouchCompletedEventHandler_142() const { return ___OnTouchCompletedEventHandler_142; }
	inline EventFunction_1_t28980A47E1D1F187CF30BD1ECA66486220C8483A ** get_address_of_OnTouchCompletedEventHandler_142() { return &___OnTouchCompletedEventHandler_142; }
	inline void set_OnTouchCompletedEventHandler_142(EventFunction_1_t28980A47E1D1F187CF30BD1ECA66486220C8483A * value)
	{
		___OnTouchCompletedEventHandler_142 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnTouchCompletedEventHandler_142), (void*)value);
	}

	inline static int32_t get_offset_of_RaiseOnTouchCompletedPerfMarker_143() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_tEA69EFC7CCC70EFD1283AE13DA6AA9674517EB8F_StaticFields, ___RaiseOnTouchCompletedPerfMarker_143)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_RaiseOnTouchCompletedPerfMarker_143() const { return ___RaiseOnTouchCompletedPerfMarker_143; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_RaiseOnTouchCompletedPerfMarker_143() { return &___RaiseOnTouchCompletedPerfMarker_143; }
	inline void set_RaiseOnTouchCompletedPerfMarker_143(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___RaiseOnTouchCompletedPerfMarker_143 = value;
	}

	inline static int32_t get_offset_of_OnTouchUpdatedEventHandler_144() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_tEA69EFC7CCC70EFD1283AE13DA6AA9674517EB8F_StaticFields, ___OnTouchUpdatedEventHandler_144)); }
	inline EventFunction_1_t28980A47E1D1F187CF30BD1ECA66486220C8483A * get_OnTouchUpdatedEventHandler_144() const { return ___OnTouchUpdatedEventHandler_144; }
	inline EventFunction_1_t28980A47E1D1F187CF30BD1ECA66486220C8483A ** get_address_of_OnTouchUpdatedEventHandler_144() { return &___OnTouchUpdatedEventHandler_144; }
	inline void set_OnTouchUpdatedEventHandler_144(EventFunction_1_t28980A47E1D1F187CF30BD1ECA66486220C8483A * value)
	{
		___OnTouchUpdatedEventHandler_144 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnTouchUpdatedEventHandler_144), (void*)value);
	}

	inline static int32_t get_offset_of_RaiseOnTouchUpdatedPerfMarker_145() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_tEA69EFC7CCC70EFD1283AE13DA6AA9674517EB8F_StaticFields, ___RaiseOnTouchUpdatedPerfMarker_145)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_RaiseOnTouchUpdatedPerfMarker_145() const { return ___RaiseOnTouchUpdatedPerfMarker_145; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_RaiseOnTouchUpdatedPerfMarker_145() { return &___RaiseOnTouchUpdatedPerfMarker_145; }
	inline void set_RaiseOnTouchUpdatedPerfMarker_145(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___RaiseOnTouchUpdatedPerfMarker_145 = value;
	}

	inline static int32_t get_offset_of_ProcessRulesInternalPerfMarker_146() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_tEA69EFC7CCC70EFD1283AE13DA6AA9674517EB8F_StaticFields, ___ProcessRulesInternalPerfMarker_146)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_ProcessRulesInternalPerfMarker_146() const { return ___ProcessRulesInternalPerfMarker_146; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_ProcessRulesInternalPerfMarker_146() { return &___ProcessRulesInternalPerfMarker_146; }
	inline void set_ProcessRulesInternalPerfMarker_146(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___ProcessRulesInternalPerfMarker_146 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

il2cpp_hresult_t IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(RuntimeObject* __this);
il2cpp_hresult_t IIterable_1_First_mFB95F2845D73300049FCB9B21FE7ACC3473E5E66_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IIterator_1_t6A965FDCA7EF0FD28DFA23C03C7491D6F48B19FC** comReturnValue);
il2cpp_hresult_t IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue);
il2cpp_hresult_t IIterable_1_First_m4C15B56B4F649EA2A68C0591FF33164F3F101C72_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IIterator_1_t59FD14BF237AECD1747A302E02AE952CAC73C11D** comReturnValue);
il2cpp_hresult_t IIterable_1_First_mBD8D20BBA2E9F188C15175F2C9AB4039C6400ED1_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IIterator_1_t53A3C573D4888D0C268E9C0D9515A4BDAD329CCC** comReturnValue);
il2cpp_hresult_t IIterable_1_First_mC1E90957AD904E68CE3F84D1EF22D5EFACE8C2D5_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IIterator_1_tFF647CAD19D34FD0606CDD3425C431F82B94589C** comReturnValue);
il2cpp_hresult_t IIterable_1_First_m3B459B11C7ABAED5258B394614E5D1C20BEE5F93_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IIterator_1_t9B59C65AF91E97002623682A0C306DEBB34D8DE1** comReturnValue);
il2cpp_hresult_t IIterable_1_First_m71D30C8522D86FA59BF041E5B3CE17F4CA7B5B92_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IIterator_1_t77754FBD9492B03AC4E17184F2DAA6B37722F19D** comReturnValue);



// COM Callable Wrapper for OpenCvSharp.MatExpr
struct MatExpr_t6436346F446DB1028255F0E5D865452E9AB25A22_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<MatExpr_t6436346F446DB1028255F0E5D865452E9AB25A22_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline MatExpr_t6436346F446DB1028255F0E5D865452E9AB25A22_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<MatExpr_t6436346F446DB1028255F0E5D865452E9AB25A22_ComCallableWrapper>(obj) {}

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

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
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
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

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

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_MatExpr_t6436346F446DB1028255F0E5D865452E9AB25A22(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(MatExpr_t6436346F446DB1028255F0E5D865452E9AB25A22_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) MatExpr_t6436346F446DB1028255F0E5D865452E9AB25A22_ComCallableWrapper(obj));
}

// COM Callable Wrapper for OpenCvSharp.MatOfByte
struct MatOfByte_t68642FB2D7441D87F5694564902953FDCE3395B0_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<MatOfByte_t68642FB2D7441D87F5694564902953FDCE3395B0_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953, IIterable_1_tD0597EBCA288E19261E4CD889A045D4DED68F0D5, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8
{
	inline MatOfByte_t68642FB2D7441D87F5694564902953FDCE3395B0_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<MatOfByte_t68642FB2D7441D87F5694564902953FDCE3395B0_ComCallableWrapper>(obj) {}

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

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IIterable_1_tD0597EBCA288E19261E4CD889A045D4DED68F0D5::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_tD0597EBCA288E19261E4CD889A045D4DED68F0D5*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8*>(this);
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
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;
		interfaceIds[1] = IIterable_1_tD0597EBCA288E19261E4CD889A045D4DED68F0D5::IID;
		interfaceIds[2] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;

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

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_mFB95F2845D73300049FCB9B21FE7ACC3473E5E66(IIterator_1_t6A965FDCA7EF0FD28DFA23C03C7491D6F48B19FC** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_mFB95F2845D73300049FCB9B21FE7ACC3473E5E66_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_MatOfByte_t68642FB2D7441D87F5694564902953FDCE3395B0(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(MatOfByte_t68642FB2D7441D87F5694564902953FDCE3395B0_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) MatOfByte_t68642FB2D7441D87F5694564902953FDCE3395B0_ComCallableWrapper(obj));
}

// COM Callable Wrapper for OpenCvSharp.MatOfByte3
struct MatOfByte3_t38A4C9D9F3BD3A472BBB52412AB2D161A8DED9D9_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<MatOfByte3_t38A4C9D9F3BD3A472BBB52412AB2D161A8DED9D9_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8
{
	inline MatOfByte3_t38A4C9D9F3BD3A472BBB52412AB2D161A8DED9D9_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<MatOfByte3_t38A4C9D9F3BD3A472BBB52412AB2D161A8DED9D9_ComCallableWrapper>(obj) {}

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

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8*>(this);
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
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;
		interfaceIds[1] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;

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

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_MatOfByte3_t38A4C9D9F3BD3A472BBB52412AB2D161A8DED9D9(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(MatOfByte3_t38A4C9D9F3BD3A472BBB52412AB2D161A8DED9D9_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) MatOfByte3_t38A4C9D9F3BD3A472BBB52412AB2D161A8DED9D9_ComCallableWrapper(obj));
}

// COM Callable Wrapper for OpenCvSharp.MatOfDMatch
struct MatOfDMatch_t2B2BF0D6362711FAF6A8B31498A1A39B3469417E_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<MatOfDMatch_t2B2BF0D6362711FAF6A8B31498A1A39B3469417E_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8
{
	inline MatOfDMatch_t2B2BF0D6362711FAF6A8B31498A1A39B3469417E_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<MatOfDMatch_t2B2BF0D6362711FAF6A8B31498A1A39B3469417E_ComCallableWrapper>(obj) {}

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

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8*>(this);
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
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;
		interfaceIds[1] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;

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

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_MatOfDMatch_t2B2BF0D6362711FAF6A8B31498A1A39B3469417E(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(MatOfDMatch_t2B2BF0D6362711FAF6A8B31498A1A39B3469417E_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) MatOfDMatch_t2B2BF0D6362711FAF6A8B31498A1A39B3469417E_ComCallableWrapper(obj));
}

// COM Callable Wrapper for OpenCvSharp.MatOfDouble
struct MatOfDouble_tA65BB18DA81D92CC5A26855BB62EAD0D84B6852E_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<MatOfDouble_tA65BB18DA81D92CC5A26855BB62EAD0D84B6852E_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953, IIterable_1_t4464DD78E1BE52C59BBF4333178B62D903ABACEA, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8
{
	inline MatOfDouble_tA65BB18DA81D92CC5A26855BB62EAD0D84B6852E_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<MatOfDouble_tA65BB18DA81D92CC5A26855BB62EAD0D84B6852E_ComCallableWrapper>(obj) {}

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

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IIterable_1_t4464DD78E1BE52C59BBF4333178B62D903ABACEA::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_t4464DD78E1BE52C59BBF4333178B62D903ABACEA*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8*>(this);
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
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;
		interfaceIds[1] = IIterable_1_t4464DD78E1BE52C59BBF4333178B62D903ABACEA::IID;
		interfaceIds[2] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;

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

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m4C15B56B4F649EA2A68C0591FF33164F3F101C72(IIterator_1_t59FD14BF237AECD1747A302E02AE952CAC73C11D** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_m4C15B56B4F649EA2A68C0591FF33164F3F101C72_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_MatOfDouble_tA65BB18DA81D92CC5A26855BB62EAD0D84B6852E(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(MatOfDouble_tA65BB18DA81D92CC5A26855BB62EAD0D84B6852E_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) MatOfDouble_tA65BB18DA81D92CC5A26855BB62EAD0D84B6852E_ComCallableWrapper(obj));
}

// COM Callable Wrapper for OpenCvSharp.MatOfDouble3
struct MatOfDouble3_tB9E01D95106E4B541A1BBEA9599808BA3A682F37_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<MatOfDouble3_tB9E01D95106E4B541A1BBEA9599808BA3A682F37_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8
{
	inline MatOfDouble3_tB9E01D95106E4B541A1BBEA9599808BA3A682F37_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<MatOfDouble3_tB9E01D95106E4B541A1BBEA9599808BA3A682F37_ComCallableWrapper>(obj) {}

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

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8*>(this);
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
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;
		interfaceIds[1] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;

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

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_MatOfDouble3_tB9E01D95106E4B541A1BBEA9599808BA3A682F37(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(MatOfDouble3_tB9E01D95106E4B541A1BBEA9599808BA3A682F37_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) MatOfDouble3_tB9E01D95106E4B541A1BBEA9599808BA3A682F37_ComCallableWrapper(obj));
}

// COM Callable Wrapper for OpenCvSharp.MatOfFloat
struct MatOfFloat_t1B02C89C5152A26A4FB7A04C847E8353A52805B1_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<MatOfFloat_t1B02C89C5152A26A4FB7A04C847E8353A52805B1_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953, IIterable_1_t0EA6FF8BF23034840DB9F5189AF1D72411992F7E, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8
{
	inline MatOfFloat_t1B02C89C5152A26A4FB7A04C847E8353A52805B1_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<MatOfFloat_t1B02C89C5152A26A4FB7A04C847E8353A52805B1_ComCallableWrapper>(obj) {}

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

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IIterable_1_t0EA6FF8BF23034840DB9F5189AF1D72411992F7E::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_t0EA6FF8BF23034840DB9F5189AF1D72411992F7E*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8*>(this);
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
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;
		interfaceIds[1] = IIterable_1_t0EA6FF8BF23034840DB9F5189AF1D72411992F7E::IID;
		interfaceIds[2] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;

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

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_mBD8D20BBA2E9F188C15175F2C9AB4039C6400ED1(IIterator_1_t53A3C573D4888D0C268E9C0D9515A4BDAD329CCC** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_mBD8D20BBA2E9F188C15175F2C9AB4039C6400ED1_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_MatOfFloat_t1B02C89C5152A26A4FB7A04C847E8353A52805B1(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(MatOfFloat_t1B02C89C5152A26A4FB7A04C847E8353A52805B1_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) MatOfFloat_t1B02C89C5152A26A4FB7A04C847E8353A52805B1_ComCallableWrapper(obj));
}

// COM Callable Wrapper for OpenCvSharp.MatOfFloat4
struct MatOfFloat4_t813258A1EAA3DF92647631021C2E8861070C87DD_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<MatOfFloat4_t813258A1EAA3DF92647631021C2E8861070C87DD_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8
{
	inline MatOfFloat4_t813258A1EAA3DF92647631021C2E8861070C87DD_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<MatOfFloat4_t813258A1EAA3DF92647631021C2E8861070C87DD_ComCallableWrapper>(obj) {}

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

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8*>(this);
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
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;
		interfaceIds[1] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;

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

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_MatOfFloat4_t813258A1EAA3DF92647631021C2E8861070C87DD(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(MatOfFloat4_t813258A1EAA3DF92647631021C2E8861070C87DD_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) MatOfFloat4_t813258A1EAA3DF92647631021C2E8861070C87DD_ComCallableWrapper(obj));
}

// COM Callable Wrapper for OpenCvSharp.MatOfFloat6
struct MatOfFloat6_t9F95B4631607BBEB117420923DB69080F249A597_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<MatOfFloat6_t9F95B4631607BBEB117420923DB69080F249A597_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8
{
	inline MatOfFloat6_t9F95B4631607BBEB117420923DB69080F249A597_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<MatOfFloat6_t9F95B4631607BBEB117420923DB69080F249A597_ComCallableWrapper>(obj) {}

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

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8*>(this);
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
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;
		interfaceIds[1] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;

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

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_MatOfFloat6_t9F95B4631607BBEB117420923DB69080F249A597(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(MatOfFloat6_t9F95B4631607BBEB117420923DB69080F249A597_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) MatOfFloat6_t9F95B4631607BBEB117420923DB69080F249A597_ComCallableWrapper(obj));
}

// COM Callable Wrapper for OpenCvSharp.MatOfInt
struct MatOfInt_tE786CAFD1207F521D4B7B521BB5ABA525E7402AC_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<MatOfInt_tE786CAFD1207F521D4B7B521BB5ABA525E7402AC_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953, IIterable_1_t3FD1FB01310262788B2A8868AA7395E023511050, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8
{
	inline MatOfInt_tE786CAFD1207F521D4B7B521BB5ABA525E7402AC_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<MatOfInt_tE786CAFD1207F521D4B7B521BB5ABA525E7402AC_ComCallableWrapper>(obj) {}

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

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IIterable_1_t3FD1FB01310262788B2A8868AA7395E023511050::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_t3FD1FB01310262788B2A8868AA7395E023511050*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8*>(this);
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
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;
		interfaceIds[1] = IIterable_1_t3FD1FB01310262788B2A8868AA7395E023511050::IID;
		interfaceIds[2] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;

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

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_mC1E90957AD904E68CE3F84D1EF22D5EFACE8C2D5(IIterator_1_tFF647CAD19D34FD0606CDD3425C431F82B94589C** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_mC1E90957AD904E68CE3F84D1EF22D5EFACE8C2D5_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_MatOfInt_tE786CAFD1207F521D4B7B521BB5ABA525E7402AC(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(MatOfInt_tE786CAFD1207F521D4B7B521BB5ABA525E7402AC_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) MatOfInt_tE786CAFD1207F521D4B7B521BB5ABA525E7402AC_ComCallableWrapper(obj));
}

// COM Callable Wrapper for OpenCvSharp.MatOfInt4
struct MatOfInt4_t8E142A1C1F0B8546B46E6FF0062AC49DB592D453_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<MatOfInt4_t8E142A1C1F0B8546B46E6FF0062AC49DB592D453_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8
{
	inline MatOfInt4_t8E142A1C1F0B8546B46E6FF0062AC49DB592D453_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<MatOfInt4_t8E142A1C1F0B8546B46E6FF0062AC49DB592D453_ComCallableWrapper>(obj) {}

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

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8*>(this);
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
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;
		interfaceIds[1] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;

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

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_MatOfInt4_t8E142A1C1F0B8546B46E6FF0062AC49DB592D453(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(MatOfInt4_t8E142A1C1F0B8546B46E6FF0062AC49DB592D453_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) MatOfInt4_t8E142A1C1F0B8546B46E6FF0062AC49DB592D453_ComCallableWrapper(obj));
}

// COM Callable Wrapper for OpenCvSharp.MatOfPoint
struct MatOfPoint_t82C8154594BF2C9235DACF5887B3F2D0F327FC67_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<MatOfPoint_t82C8154594BF2C9235DACF5887B3F2D0F327FC67_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8
{
	inline MatOfPoint_t82C8154594BF2C9235DACF5887B3F2D0F327FC67_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<MatOfPoint_t82C8154594BF2C9235DACF5887B3F2D0F327FC67_ComCallableWrapper>(obj) {}

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

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8*>(this);
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
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;
		interfaceIds[1] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;

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

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_MatOfPoint_t82C8154594BF2C9235DACF5887B3F2D0F327FC67(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(MatOfPoint_t82C8154594BF2C9235DACF5887B3F2D0F327FC67_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) MatOfPoint_t82C8154594BF2C9235DACF5887B3F2D0F327FC67_ComCallableWrapper(obj));
}

// COM Callable Wrapper for OpenCvSharp.MatOfPoint2d
struct MatOfPoint2d_t05A49A8807EC14E587A8A209E7E8A81046F47441_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<MatOfPoint2d_t05A49A8807EC14E587A8A209E7E8A81046F47441_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8
{
	inline MatOfPoint2d_t05A49A8807EC14E587A8A209E7E8A81046F47441_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<MatOfPoint2d_t05A49A8807EC14E587A8A209E7E8A81046F47441_ComCallableWrapper>(obj) {}

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

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8*>(this);
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
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;
		interfaceIds[1] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;

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

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_MatOfPoint2d_t05A49A8807EC14E587A8A209E7E8A81046F47441(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(MatOfPoint2d_t05A49A8807EC14E587A8A209E7E8A81046F47441_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) MatOfPoint2d_t05A49A8807EC14E587A8A209E7E8A81046F47441_ComCallableWrapper(obj));
}

// COM Callable Wrapper for OpenCvSharp.MatOfPoint2f
struct MatOfPoint2f_tE73AA96EE9187F7241A79602C4F4C5331A7F1AAC_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<MatOfPoint2f_tE73AA96EE9187F7241A79602C4F4C5331A7F1AAC_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8
{
	inline MatOfPoint2f_tE73AA96EE9187F7241A79602C4F4C5331A7F1AAC_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<MatOfPoint2f_tE73AA96EE9187F7241A79602C4F4C5331A7F1AAC_ComCallableWrapper>(obj) {}

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

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8*>(this);
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
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;
		interfaceIds[1] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;

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

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_MatOfPoint2f_tE73AA96EE9187F7241A79602C4F4C5331A7F1AAC(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(MatOfPoint2f_tE73AA96EE9187F7241A79602C4F4C5331A7F1AAC_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) MatOfPoint2f_tE73AA96EE9187F7241A79602C4F4C5331A7F1AAC_ComCallableWrapper(obj));
}

// COM Callable Wrapper for OpenCvSharp.MatOfPoint3d
struct MatOfPoint3d_tE9CD2531A5B2980FDEC56EF7B27F0BD471729BDA_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<MatOfPoint3d_tE9CD2531A5B2980FDEC56EF7B27F0BD471729BDA_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8
{
	inline MatOfPoint3d_tE9CD2531A5B2980FDEC56EF7B27F0BD471729BDA_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<MatOfPoint3d_tE9CD2531A5B2980FDEC56EF7B27F0BD471729BDA_ComCallableWrapper>(obj) {}

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

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8*>(this);
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
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;
		interfaceIds[1] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;

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

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_MatOfPoint3d_tE9CD2531A5B2980FDEC56EF7B27F0BD471729BDA(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(MatOfPoint3d_tE9CD2531A5B2980FDEC56EF7B27F0BD471729BDA_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) MatOfPoint3d_tE9CD2531A5B2980FDEC56EF7B27F0BD471729BDA_ComCallableWrapper(obj));
}

// COM Callable Wrapper for OpenCvSharp.MatOfPoint3f
struct MatOfPoint3f_tD631AF69C09EE50CED965E0DAD29DED485BF98BC_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<MatOfPoint3f_tD631AF69C09EE50CED965E0DAD29DED485BF98BC_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8
{
	inline MatOfPoint3f_tD631AF69C09EE50CED965E0DAD29DED485BF98BC_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<MatOfPoint3f_tD631AF69C09EE50CED965E0DAD29DED485BF98BC_ComCallableWrapper>(obj) {}

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

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8*>(this);
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
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;
		interfaceIds[1] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;

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

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_MatOfPoint3f_tD631AF69C09EE50CED965E0DAD29DED485BF98BC(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(MatOfPoint3f_tD631AF69C09EE50CED965E0DAD29DED485BF98BC_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) MatOfPoint3f_tD631AF69C09EE50CED965E0DAD29DED485BF98BC_ComCallableWrapper(obj));
}

// COM Callable Wrapper for OpenCvSharp.MatOfPoint3i
struct MatOfPoint3i_tC19C5BB5EC783471498BC5FD022C0E861EB10863_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<MatOfPoint3i_tC19C5BB5EC783471498BC5FD022C0E861EB10863_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8
{
	inline MatOfPoint3i_tC19C5BB5EC783471498BC5FD022C0E861EB10863_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<MatOfPoint3i_tC19C5BB5EC783471498BC5FD022C0E861EB10863_ComCallableWrapper>(obj) {}

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

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8*>(this);
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
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;
		interfaceIds[1] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;

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

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_MatOfPoint3i_tC19C5BB5EC783471498BC5FD022C0E861EB10863(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(MatOfPoint3i_tC19C5BB5EC783471498BC5FD022C0E861EB10863_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) MatOfPoint3i_tC19C5BB5EC783471498BC5FD022C0E861EB10863_ComCallableWrapper(obj));
}

// COM Callable Wrapper for OpenCvSharp.MatOfRect
struct MatOfRect_tF10CAD3460A9E8C6910DDDA5E2DD774BFE3AD56A_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<MatOfRect_tF10CAD3460A9E8C6910DDDA5E2DD774BFE3AD56A_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8
{
	inline MatOfRect_tF10CAD3460A9E8C6910DDDA5E2DD774BFE3AD56A_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<MatOfRect_tF10CAD3460A9E8C6910DDDA5E2DD774BFE3AD56A_ComCallableWrapper>(obj) {}

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

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8*>(this);
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
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;
		interfaceIds[1] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;

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

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_MatOfRect_tF10CAD3460A9E8C6910DDDA5E2DD774BFE3AD56A(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(MatOfRect_tF10CAD3460A9E8C6910DDDA5E2DD774BFE3AD56A_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) MatOfRect_tF10CAD3460A9E8C6910DDDA5E2DD774BFE3AD56A_ComCallableWrapper(obj));
}

// COM Callable Wrapper for OpenCvSharp.MatOfShort
struct MatOfShort_tA5FC7959635C29649626A2D3427799645D3A244E_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<MatOfShort_tA5FC7959635C29649626A2D3427799645D3A244E_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953, IIterable_1_tFF30A9E323D222B8189CEBCAC40464562B38A0C8, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8
{
	inline MatOfShort_tA5FC7959635C29649626A2D3427799645D3A244E_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<MatOfShort_tA5FC7959635C29649626A2D3427799645D3A244E_ComCallableWrapper>(obj) {}

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

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IIterable_1_tFF30A9E323D222B8189CEBCAC40464562B38A0C8::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_tFF30A9E323D222B8189CEBCAC40464562B38A0C8*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8*>(this);
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
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;
		interfaceIds[1] = IIterable_1_tFF30A9E323D222B8189CEBCAC40464562B38A0C8::IID;
		interfaceIds[2] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;

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

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m3B459B11C7ABAED5258B394614E5D1C20BEE5F93(IIterator_1_t9B59C65AF91E97002623682A0C306DEBB34D8DE1** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_m3B459B11C7ABAED5258B394614E5D1C20BEE5F93_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_MatOfShort_tA5FC7959635C29649626A2D3427799645D3A244E(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(MatOfShort_tA5FC7959635C29649626A2D3427799645D3A244E_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) MatOfShort_tA5FC7959635C29649626A2D3427799645D3A244E_ComCallableWrapper(obj));
}

// COM Callable Wrapper for OpenCvSharp.MatOfUShort
struct MatOfUShort_t21F85688DF91E44422B3C189B9F5BABD4DD54FFD_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<MatOfUShort_t21F85688DF91E44422B3C189B9F5BABD4DD54FFD_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953, IIterable_1_t0FFEA449A5FB48BF7695F277FD277D7159E9F452, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8
{
	inline MatOfUShort_t21F85688DF91E44422B3C189B9F5BABD4DD54FFD_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<MatOfUShort_t21F85688DF91E44422B3C189B9F5BABD4DD54FFD_ComCallableWrapper>(obj) {}

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

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IIterable_1_t0FFEA449A5FB48BF7695F277FD277D7159E9F452::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_t0FFEA449A5FB48BF7695F277FD277D7159E9F452*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8*>(this);
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
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;
		interfaceIds[1] = IIterable_1_t0FFEA449A5FB48BF7695F277FD277D7159E9F452::IID;
		interfaceIds[2] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;

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

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m71D30C8522D86FA59BF041E5B3CE17F4CA7B5B92(IIterator_1_t77754FBD9492B03AC4E17184F2DAA6B37722F19D** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_m71D30C8522D86FA59BF041E5B3CE17F4CA7B5B92_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_MatOfUShort_t21F85688DF91E44422B3C189B9F5BABD4DD54FFD(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(MatOfUShort_t21F85688DF91E44422B3C189B9F5BABD4DD54FFD_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) MatOfUShort_t21F85688DF91E44422B3C189B9F5BABD4DD54FFD_ComCallableWrapper(obj));
}

// COM Callable Wrapper for OpenCvSharp.MatProxy
struct MatProxy_tDBAD4A63FFFD15B0CEDFD8564792BABFB56D38A2_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<MatProxy_tDBAD4A63FFFD15B0CEDFD8564792BABFB56D38A2_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline MatProxy_tDBAD4A63FFFD15B0CEDFD8564792BABFB56D38A2_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<MatProxy_tDBAD4A63FFFD15B0CEDFD8564792BABFB56D38A2_ComCallableWrapper>(obj) {}

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

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
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
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

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

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_MatProxy_tDBAD4A63FFFD15B0CEDFD8564792BABFB56D38A2(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(MatProxy_tDBAD4A63FFFD15B0CEDFD8564792BABFB56D38A2_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) MatProxy_tDBAD4A63FFFD15B0CEDFD8564792BABFB56D38A2_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Text.RegularExpressions.MatchCollection
struct MatchCollection_tC2C84E59658F73C90FD36007DE73C869BADEFF3E_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<MatchCollection_tC2C84E59658F73C90FD36007DE73C869BADEFF3E_ComCallableWrapper>, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8
{
	inline MatchCollection_tC2C84E59658F73C90FD36007DE73C869BADEFF3E_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<MatchCollection_tC2C84E59658F73C90FD36007DE73C869BADEFF3E_ComCallableWrapper>(obj) {}

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

		if (::memcmp(&iid, &IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8*>(this);
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
		interfaceIds[0] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;

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

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_MatchCollection_tC2C84E59658F73C90FD36007DE73C869BADEFF3E(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(MatchCollection_tC2C84E59658F73C90FD36007DE73C869BADEFF3E_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) MatchCollection_tC2C84E59658F73C90FD36007DE73C869BADEFF3E_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Numerics.Matrix4x4
struct Matrix4x4_t5B627955C6D80AF8F1D97A6466CB337DCEEB3504_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Matrix4x4_t5B627955C6D80AF8F1D97A6466CB337DCEEB3504_ComCallableWrapper>, IReference_1_t97B2873C86B7742F03D17D1D0BC7B456F90D09E2, IPropertyValue_t2D61E5557FBCC9F0476CC32B5738B21EFFA483E8
{
	inline Matrix4x4_t5B627955C6D80AF8F1D97A6466CB337DCEEB3504_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Matrix4x4_t5B627955C6D80AF8F1D97A6466CB337DCEEB3504_ComCallableWrapper>(obj) {}

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

		if (::memcmp(&iid, &IReference_1_t97B2873C86B7742F03D17D1D0BC7B456F90D09E2::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IReference_1_t97B2873C86B7742F03D17D1D0BC7B456F90D09E2*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IPropertyValue_t2D61E5557FBCC9F0476CC32B5738B21EFFA483E8::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IPropertyValue_t2D61E5557FBCC9F0476CC32B5738B21EFFA483E8*>(this);
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
		interfaceIds[0] = IReference_1_t97B2873C86B7742F03D17D1D0BC7B456F90D09E2::IID;
		interfaceIds[1] = IPropertyValue_t2D61E5557FBCC9F0476CC32B5738B21EFFA483E8::IID;

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

	virtual il2cpp_hresult_t STDCALL IReference_1_get_Value_mA1E3E5D81B89D3EA702FD87A063F5C5CBDD3949B(Matrix4x4_t5B627955C6D80AF8F1D97A6466CB337DCEEB3504 * comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Matrix4x4_t5B627955C6D80AF8F1D97A6466CB337DCEEB3504_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		Matrix4x4_t5B627955C6D80AF8F1D97A6466CB337DCEEB3504  returnValue;
		try
		{
			returnValue = *static_cast<Matrix4x4_t5B627955C6D80AF8F1D97A6466CB337DCEEB3504 *>(UnBox(GetManagedObjectInline(), Matrix4x4_t5B627955C6D80AF8F1D97A6466CB337DCEEB3504_il2cpp_TypeInfo_var));
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_get_Type_m2BC440F5119A133BE4DD895657519ADAA3B34272(int32_t* comReturnValue) IL2CPP_OVERRIDE
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
				exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_get_IsNumericScalar_mC8DE97926668A5F2EA3F4A9B128E966CBC7B0D60(bool* comReturnValue) IL2CPP_OVERRIDE
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
				exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt8_m25D96C5F9AC133BF7B682C59FE83EE05A0075B05(uint8_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Byte");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt16_mBE4A7DC8A2B92F83EE058AE7515E84DADFA206AE(int16_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Int16");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt16_mCF513D800195CA7050FD5AFB4E710FB0CFB531B5(uint16_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "UInt16");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt32_mDE5543C20D3D3C9E773CB6EDBDBC789D12CC59BA(int32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Int32");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt32_mD48C2097876EAE6D1E218D9123F58F168B374205(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "UInt32");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt64_m4BAC154BEC3584DF3E34EDA6033EEF3DB6D4132E(int64_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Int64");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt64_m981379F85C0C44EDBDD830A293693BE0BB3F62CA(uint64_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "UInt64");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetSingle_mED031D57B17B0F7BD3B4B250821D070155889F1F(float* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Single");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetDouble_mA0880A7E89CE09C2639D6F8065B18E8F77EB082F(double* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Double");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetChar16_m7B2226E30F72B0CCAE54B8EDB1AC4ACF1BE860A8(Il2CppChar* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Char16");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetBoolean_m21FCEEA690B32CD86A36D40FB837FC7D894D5587(bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Boolean");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetString_m8D5702E4E1C67366D65DA23CA2812D6572DF819C(Il2CppHString* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "String");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetGuid_m885F2850B49DB4B046564BC5FE414256801D9A11(Guid_t * comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Guid");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetDateTime_m023A766ED6FC58B347CF6F777F5C18C6AE246A3C(DateTime_t7C967DBDDE4CAEAA8B5AEB61E36309BCD7D26B8C * comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "DateTime");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetTimeSpan_m063CE76264EDAF37A1DA3CA5C9CF4AF85D8FC239(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "TimeSpan");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetPoint_m014D5E859273BA28DE642E38438EDCC64AB5C41B(Point_t155CCDBE84DC37ABFA2CBB4649526701CA3A5578 * comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Point");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetSize_m0A952D186E59BEA03E6185EDEBAC26D544AFADAC(Size_tDA924E69AB75296FE3B5E81811B78FD56173BB92 * comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Size");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetRect_m0A96600149C7E6A493B8420CB316938AEF9A1A06(Rect_tC45F1DDF39812623644DE296D8057A4958176627 * comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Rect");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt8Array_m540E0503D8CFAE2579D449884B6AA883509C79D1(uint32_t* ___value0ArraySize, uint8_t** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Byte[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt16Array_m279C289854DE8A2D45A6B6B09112DD9D2F0DF849(uint32_t* ___value0ArraySize, int16_t** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Int16[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt16Array_m090AA712F6BB39F869BCC5CB90236377EE8673B1(uint32_t* ___value0ArraySize, uint16_t** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "UInt16[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt32Array_mADF499B8CD16185128795A7B74D63E8CFE692B9A(uint32_t* ___value0ArraySize, int32_t** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Int32[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt32Array_m9B44B8D2EA2907A9A96ED653ACEF04873D9483F8(uint32_t* ___value0ArraySize, uint32_t** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "UInt32[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt64Array_m9A04AC5F477463928280B42E2C40F13B15A1D564(uint32_t* ___value0ArraySize, int64_t** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Int64[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt64Array_m776484C9C41D5A03991D89401FF84F9D425D6A5E(uint32_t* ___value0ArraySize, uint64_t** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "UInt64[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetSingleArray_m1E9CE76FA942B3AFA8995FBAE605E84733917B57(uint32_t* ___value0ArraySize, float** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Single[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetDoubleArray_m5DAB086BEB4816CAF7553E325B91A4B0B07953A5(uint32_t* ___value0ArraySize, double** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Double[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetChar16Array_m2C69248F68D7705FE44FA8F777B061FA77C706A1(uint32_t* ___value0ArraySize, Il2CppChar** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Char16[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetBooleanArray_m083CB5579BC465B4D1BD84CE8382CB747A9FCC8C(uint32_t* ___value0ArraySize, bool** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Boolean[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetStringArray_m680617C6226187D28C4978B710AFBB8581AAC98F(uint32_t* ___value0ArraySize, Il2CppHString** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "String[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInspectableArray_m6DCBE370A8CAC129E6D6BD91C6503D14A8109F79(uint32_t* ___value0ArraySize, Il2CppIInspectable*** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Inspectable[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetGuidArray_mE9983D9B5EE9AC1935C3EBD2F9E82DC7188E1D07(uint32_t* ___value0ArraySize, Guid_t ** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Guid[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetDateTimeArray_mEECFC6C321405CDBC425D321E2A8EF3E7BC306A7(uint32_t* ___value0ArraySize, DateTime_t7C967DBDDE4CAEAA8B5AEB61E36309BCD7D26B8C ** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "DateTimeOffset[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetTimeSpanArray_mEAF3CA18AA928DAF3046F0F530B9324711650167(uint32_t* ___value0ArraySize, TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 ** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "TimeSpan[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetPointArray_mD4ACB0F49C7BFEC1C03A4EE4263B23B2040CECD0(uint32_t* ___value0ArraySize, Point_t155CCDBE84DC37ABFA2CBB4649526701CA3A5578 ** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Point[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetSizeArray_m3C079B4191330FAC3B2131D308C825BC72A5F0DC(uint32_t* ___value0ArraySize, Size_tDA924E69AB75296FE3B5E81811B78FD56173BB92 ** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Size[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetRectArray_m09598924D31716E1E653AE941186F8B16EA11A87(uint32_t* ___value0ArraySize, Rect_tC45F1DDF39812623644DE296D8057A4958176627 ** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Rect[]");
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Matrix4x4_t5B627955C6D80AF8F1D97A6466CB337DCEEB3504(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Matrix4x4_t5B627955C6D80AF8F1D97A6466CB337DCEEB3504_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Matrix4x4_t5B627955C6D80AF8F1D97A6466CB337DCEEB3504_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Windows.Foundation.Numerics.Matrix4x4
struct Matrix4x4_tCA3F3FDAF7C260FCEFC8AE7347180927246F3D82_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Matrix4x4_tCA3F3FDAF7C260FCEFC8AE7347180927246F3D82_ComCallableWrapper>, IReference_1_t8A0A795D67A1984F24F971A8C797A86DDD5FD8D4, IPropertyValue_t2D61E5557FBCC9F0476CC32B5738B21EFFA483E8
{
	inline Matrix4x4_tCA3F3FDAF7C260FCEFC8AE7347180927246F3D82_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Matrix4x4_tCA3F3FDAF7C260FCEFC8AE7347180927246F3D82_ComCallableWrapper>(obj) {}

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

		if (::memcmp(&iid, &IReference_1_t8A0A795D67A1984F24F971A8C797A86DDD5FD8D4::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IReference_1_t8A0A795D67A1984F24F971A8C797A86DDD5FD8D4*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IPropertyValue_t2D61E5557FBCC9F0476CC32B5738B21EFFA483E8::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IPropertyValue_t2D61E5557FBCC9F0476CC32B5738B21EFFA483E8*>(this);
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
		interfaceIds[0] = IReference_1_t8A0A795D67A1984F24F971A8C797A86DDD5FD8D4::IID;
		interfaceIds[1] = IPropertyValue_t2D61E5557FBCC9F0476CC32B5738B21EFFA483E8::IID;

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

	virtual il2cpp_hresult_t STDCALL IReference_1_get_Value_mB1385E16B3DF2EBB57B6A2953C5ACFFB0F57E766(Matrix4x4_tCA3F3FDAF7C260FCEFC8AE7347180927246F3D82 * comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Matrix4x4_tCA3F3FDAF7C260FCEFC8AE7347180927246F3D82_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		Matrix4x4_tCA3F3FDAF7C260FCEFC8AE7347180927246F3D82  returnValue;
		try
		{
			returnValue = *static_cast<Matrix4x4_tCA3F3FDAF7C260FCEFC8AE7347180927246F3D82 *>(UnBox(GetManagedObjectInline(), Matrix4x4_tCA3F3FDAF7C260FCEFC8AE7347180927246F3D82_il2cpp_TypeInfo_var));
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_get_Type_m2BC440F5119A133BE4DD895657519ADAA3B34272(int32_t* comReturnValue) IL2CPP_OVERRIDE
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
				exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_get_IsNumericScalar_mC8DE97926668A5F2EA3F4A9B128E966CBC7B0D60(bool* comReturnValue) IL2CPP_OVERRIDE
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
				exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt8_m25D96C5F9AC133BF7B682C59FE83EE05A0075B05(uint8_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Byte");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt16_mBE4A7DC8A2B92F83EE058AE7515E84DADFA206AE(int16_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Int16");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt16_mCF513D800195CA7050FD5AFB4E710FB0CFB531B5(uint16_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "UInt16");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt32_mDE5543C20D3D3C9E773CB6EDBDBC789D12CC59BA(int32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Int32");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt32_mD48C2097876EAE6D1E218D9123F58F168B374205(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "UInt32");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt64_m4BAC154BEC3584DF3E34EDA6033EEF3DB6D4132E(int64_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Int64");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt64_m981379F85C0C44EDBDD830A293693BE0BB3F62CA(uint64_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "UInt64");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetSingle_mED031D57B17B0F7BD3B4B250821D070155889F1F(float* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Single");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetDouble_mA0880A7E89CE09C2639D6F8065B18E8F77EB082F(double* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Double");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetChar16_m7B2226E30F72B0CCAE54B8EDB1AC4ACF1BE860A8(Il2CppChar* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Char16");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetBoolean_m21FCEEA690B32CD86A36D40FB837FC7D894D5587(bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Boolean");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetString_m8D5702E4E1C67366D65DA23CA2812D6572DF819C(Il2CppHString* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "String");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetGuid_m885F2850B49DB4B046564BC5FE414256801D9A11(Guid_t * comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Guid");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetDateTime_m023A766ED6FC58B347CF6F777F5C18C6AE246A3C(DateTime_t7C967DBDDE4CAEAA8B5AEB61E36309BCD7D26B8C * comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "DateTime");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetTimeSpan_m063CE76264EDAF37A1DA3CA5C9CF4AF85D8FC239(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "TimeSpan");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetPoint_m014D5E859273BA28DE642E38438EDCC64AB5C41B(Point_t155CCDBE84DC37ABFA2CBB4649526701CA3A5578 * comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Point");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetSize_m0A952D186E59BEA03E6185EDEBAC26D544AFADAC(Size_tDA924E69AB75296FE3B5E81811B78FD56173BB92 * comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Size");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetRect_m0A96600149C7E6A493B8420CB316938AEF9A1A06(Rect_tC45F1DDF39812623644DE296D8057A4958176627 * comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Rect");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt8Array_m540E0503D8CFAE2579D449884B6AA883509C79D1(uint32_t* ___value0ArraySize, uint8_t** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Byte[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt16Array_m279C289854DE8A2D45A6B6B09112DD9D2F0DF849(uint32_t* ___value0ArraySize, int16_t** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Int16[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt16Array_m090AA712F6BB39F869BCC5CB90236377EE8673B1(uint32_t* ___value0ArraySize, uint16_t** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "UInt16[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt32Array_mADF499B8CD16185128795A7B74D63E8CFE692B9A(uint32_t* ___value0ArraySize, int32_t** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Int32[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt32Array_m9B44B8D2EA2907A9A96ED653ACEF04873D9483F8(uint32_t* ___value0ArraySize, uint32_t** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "UInt32[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt64Array_m9A04AC5F477463928280B42E2C40F13B15A1D564(uint32_t* ___value0ArraySize, int64_t** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Int64[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt64Array_m776484C9C41D5A03991D89401FF84F9D425D6A5E(uint32_t* ___value0ArraySize, uint64_t** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "UInt64[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetSingleArray_m1E9CE76FA942B3AFA8995FBAE605E84733917B57(uint32_t* ___value0ArraySize, float** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Single[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetDoubleArray_m5DAB086BEB4816CAF7553E325B91A4B0B07953A5(uint32_t* ___value0ArraySize, double** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Double[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetChar16Array_m2C69248F68D7705FE44FA8F777B061FA77C706A1(uint32_t* ___value0ArraySize, Il2CppChar** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Char16[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetBooleanArray_m083CB5579BC465B4D1BD84CE8382CB747A9FCC8C(uint32_t* ___value0ArraySize, bool** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Boolean[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetStringArray_m680617C6226187D28C4978B710AFBB8581AAC98F(uint32_t* ___value0ArraySize, Il2CppHString** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "String[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInspectableArray_m6DCBE370A8CAC129E6D6BD91C6503D14A8109F79(uint32_t* ___value0ArraySize, Il2CppIInspectable*** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Inspectable[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetGuidArray_mE9983D9B5EE9AC1935C3EBD2F9E82DC7188E1D07(uint32_t* ___value0ArraySize, Guid_t ** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Guid[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetDateTimeArray_mEECFC6C321405CDBC425D321E2A8EF3E7BC306A7(uint32_t* ___value0ArraySize, DateTime_t7C967DBDDE4CAEAA8B5AEB61E36309BCD7D26B8C ** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "DateTimeOffset[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetTimeSpanArray_mEAF3CA18AA928DAF3046F0F530B9324711650167(uint32_t* ___value0ArraySize, TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 ** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "TimeSpan[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetPointArray_mD4ACB0F49C7BFEC1C03A4EE4263B23B2040CECD0(uint32_t* ___value0ArraySize, Point_t155CCDBE84DC37ABFA2CBB4649526701CA3A5578 ** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Point[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetSizeArray_m3C079B4191330FAC3B2131D308C825BC72A5F0DC(uint32_t* ___value0ArraySize, Size_tDA924E69AB75296FE3B5E81811B78FD56173BB92 ** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Size[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetRectArray_m09598924D31716E1E653AE941186F8B16EA11A87(uint32_t* ___value0ArraySize, Rect_tC45F1DDF39812623644DE296D8057A4958176627 ** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Rect[]");
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Matrix4x4_tCA3F3FDAF7C260FCEFC8AE7347180927246F3D82(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Matrix4x4_tCA3F3FDAF7C260FCEFC8AE7347180927246F3D82_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Matrix4x4_tCA3F3FDAF7C260FCEFC8AE7347180927246F3D82_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.IO.MemoryStream
struct MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C_ComCallableWrapper>(obj) {}

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

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
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
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

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

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C_ComCallableWrapper(obj));
}

// COM Callable Wrapper for UniRx.MessageBroker
struct MessageBroker_tDD695434EA5766CAEB852571934168C7847CC1DA_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<MessageBroker_tDD695434EA5766CAEB852571934168C7847CC1DA_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline MessageBroker_tDD695434EA5766CAEB852571934168C7847CC1DA_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<MessageBroker_tDD695434EA5766CAEB852571934168C7847CC1DA_ComCallableWrapper>(obj) {}

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

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
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
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

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

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_MessageBroker_tDD695434EA5766CAEB852571934168C7847CC1DA(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(MessageBroker_tDD695434EA5766CAEB852571934168C7847CC1DA_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) MessageBroker_tDD695434EA5766CAEB852571934168C7847CC1DA_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Runtime.Remoting.Messaging.MessageDictionary
struct MessageDictionary_tF87E1D8408337642172945A13C9C116D7F9336BE_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<MessageDictionary_tF87E1D8408337642172945A13C9C116D7F9336BE_ComCallableWrapper>, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8
{
	inline MessageDictionary_tF87E1D8408337642172945A13C9C116D7F9336BE_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<MessageDictionary_tF87E1D8408337642172945A13C9C116D7F9336BE_ComCallableWrapper>(obj) {}

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

		if (::memcmp(&iid, &IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8*>(this);
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
		interfaceIds[0] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;

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

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_MessageDictionary_tF87E1D8408337642172945A13C9C116D7F9336BE(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(MessageDictionary_tF87E1D8408337642172945A13C9C116D7F9336BE_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) MessageDictionary_tF87E1D8408337642172945A13C9C116D7F9336BE_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Runtime.Remoting.Messaging.MethodReturnDictionary
struct MethodReturnDictionary_tCD3B3B0F69F53EF7653CB5E6B175628E8FD54531_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<MethodReturnDictionary_tCD3B3B0F69F53EF7653CB5E6B175628E8FD54531_ComCallableWrapper>, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8
{
	inline MethodReturnDictionary_tCD3B3B0F69F53EF7653CB5E6B175628E8FD54531_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<MethodReturnDictionary_tCD3B3B0F69F53EF7653CB5E6B175628E8FD54531_ComCallableWrapper>(obj) {}

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

		if (::memcmp(&iid, &IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8*>(this);
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
		interfaceIds[0] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;

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

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_MethodReturnDictionary_tCD3B3B0F69F53EF7653CB5E6B175628E8FD54531(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(MethodReturnDictionary_tCD3B3B0F69F53EF7653CB5E6B175628E8FD54531_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) MethodReturnDictionary_tCD3B3B0F69F53EF7653CB5E6B175628E8FD54531_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Microsoft.MixedReality.Toolkit.CameraSystem.MixedRealityCameraSystem
struct MixedRealityCameraSystem_t6CF808C08DBDBA71D5BD96EAEF18BEDEFFA45054_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<MixedRealityCameraSystem_t6CF808C08DBDBA71D5BD96EAEF18BEDEFFA45054_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline MixedRealityCameraSystem_t6CF808C08DBDBA71D5BD96EAEF18BEDEFFA45054_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<MixedRealityCameraSystem_t6CF808C08DBDBA71D5BD96EAEF18BEDEFFA45054_ComCallableWrapper>(obj) {}

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

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
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
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

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

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_MixedRealityCameraSystem_t6CF808C08DBDBA71D5BD96EAEF18BEDEFFA45054(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(MixedRealityCameraSystem_t6CF808C08DBDBA71D5BD96EAEF18BEDEFFA45054_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) MixedRealityCameraSystem_t6CF808C08DBDBA71D5BD96EAEF18BEDEFFA45054_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem
struct MixedRealityDiagnosticsSystem_tF384487A35FEA15C9F1337619F6FCBDB61C3B6B3_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<MixedRealityDiagnosticsSystem_tF384487A35FEA15C9F1337619F6FCBDB61C3B6B3_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline MixedRealityDiagnosticsSystem_tF384487A35FEA15C9F1337619F6FCBDB61C3B6B3_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<MixedRealityDiagnosticsSystem_tF384487A35FEA15C9F1337619F6FCBDB61C3B6B3_ComCallableWrapper>(obj) {}

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

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
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
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

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

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_MixedRealityDiagnosticsSystem_tF384487A35FEA15C9F1337619F6FCBDB61C3B6B3(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(MixedRealityDiagnosticsSystem_tF384487A35FEA15C9F1337619F6FCBDB61C3B6B3_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) MixedRealityDiagnosticsSystem_tF384487A35FEA15C9F1337619F6FCBDB61C3B6B3_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem
struct MixedRealityInputSystem_tEA69EFC7CCC70EFD1283AE13DA6AA9674517EB8F_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<MixedRealityInputSystem_tEA69EFC7CCC70EFD1283AE13DA6AA9674517EB8F_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline MixedRealityInputSystem_tEA69EFC7CCC70EFD1283AE13DA6AA9674517EB8F_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<MixedRealityInputSystem_tEA69EFC7CCC70EFD1283AE13DA6AA9674517EB8F_ComCallableWrapper>(obj) {}

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

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
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
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

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

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_MixedRealityInputSystem_tEA69EFC7CCC70EFD1283AE13DA6AA9674517EB8F(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(MixedRealityInputSystem_tEA69EFC7CCC70EFD1283AE13DA6AA9674517EB8F_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) MixedRealityInputSystem_tEA69EFC7CCC70EFD1283AE13DA6AA9674517EB8F_ComCallableWrapper(obj));
}
