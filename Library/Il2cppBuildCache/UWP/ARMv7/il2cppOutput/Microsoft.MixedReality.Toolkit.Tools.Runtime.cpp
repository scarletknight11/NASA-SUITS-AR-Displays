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

// System.Action`1<Microsoft.MixedReality.Toolkit.Utilities.BaseObjectCollection>
struct Action_1_tD40E9B34D63DD268B34D8B9B982AF9BC1E44277F;
// System.Collections.Generic.HashSet`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityController>
struct HashSet_1_t6C975DF0A435FF942855BEA5D8D5ACD2A365DEF5;
// System.Collections.Generic.HashSet`1<System.Object>
struct HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885;
// System.Collections.Generic.IEnumerable`1<UnityEngine.XR.InputDevice>
struct IEnumerable_1_t8A537A487D98572E934BE83328339216FC1B1199;
// System.Collections.Generic.IEqualityComparer`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityController>
struct IEqualityComparer_1_tC211CB59CA97B343627BB9567F9978F7B0EDE52A;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t2CA7720C7ADCCDECD3B02E45878B4478619D5347;
// System.Collections.Generic.List`1<UnityEngine.XR.InputDevice>
struct List_1_tB66D13E0427CA48C600AEA4DBA5B173C3734C6CE;
// System.Collections.Generic.List`1<UnityEngine.XR.InputFeatureUsage>
struct List_1_t07514DE4C099E3518E38FC1CBA5156D78A6BFE6D;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.Utilities.ObjectCollectionNode>
struct List_1_t85280175D06D422D1719D9A245F824B6C0BB8638;
// System.Collections.Generic.List`1<UnityEngine.TextMesh>
struct List_1_t32CCFF13113DCEF594E35706966E2F153D513750;
// System.Collections.Generic.List`1<UnityEngine.XR.XRInputSubsystem>
struct List_1_t90832B88D7207769654164CC28440CF594CC397D;
// System.Collections.Generic.HashSet`1/Slot<Microsoft.MixedReality.Toolkit.Input.IMixedRealityController>[]
struct SlotU5BU5D_tA95A5B6D117238C58C72BC1727BB8C3CC97E5039;
// System.Collections.Generic.HashSet`1/Slot<System.Object>[]
struct SlotU5BU5D_tF596AD324082C553DB364C768406A40BB3C85343;
// UnityEngine.XR.InputDevice[]
struct InputDeviceU5BU5D_t1361FC6DDFE12D211F933B024E51B7E5CF073F63;
// UnityEngine.XR.InputFeatureUsage[]
struct InputFeatureUsageU5BU5D_tFD13D6C127DFF10CE7CC6D6DABF07C2C44021055;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// UnityEngine.TextMesh[]
struct TextMeshU5BU5D_tB11D93924D72DFB58F3CA12C9A37D6480B62C4B2;
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
// System.Reflection.Binder
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// Microsoft.MixedReality.Toolkit.Tools.Runtime.DisplayInputResult
struct DisplayInputResult_t1C00E6FCE3ED21107AF9BC77A5BCC2E3B8F36182;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// Microsoft.MixedReality.Toolkit.Utilities.GridObjectCollection
struct GridObjectCollection_t4305434DFFC4F42300B547540DE4C36DA2DE4B2A;
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityController
struct IMixedRealityController_t8BF4741E7DBA358A1DB46E1DD9EF33C9CDEB8BFA;
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem
struct IMixedRealityInputSystem_t73D9E8D52E761DF1CC230411D0EFD51104FF68B2;
// Microsoft.MixedReality.Toolkit.Tools.Runtime.ListInputFeatureUsages
struct ListInputFeatureUsages_tD00B5F00B5339AF25C3371FEBEB352C972E7C9A3;
// System.Reflection.MemberFilter
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4;
// Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping
struct MixedRealityInteractionMapping_t10DB776EEA5255542F8F4AF0DC0BC566AF0095E0;
// Microsoft.MixedReality.Toolkit.Tools.Runtime.MixedRealityInteractionTool
struct MixedRealityInteractionTool_t3ECD399A8C2F6AB137E3F569B44374898D0CAB6C;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37;
// System.String
struct String_t;
// UnityEngine.TextMesh
struct TextMesh_t7E1981C7B03E50D5CA5A3AD5B0D9BB0AB6EE91F8;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// System.Type
struct Type_t;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;

IL2CPP_EXTERN_C RuntimeClass* AxisType_tB348B2B7E813A5E50E48FF0B55E0751351C67FA9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CoreServices_tCB1FB80E338B89BCA07C52C15B876BC6D4B3439B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IMixedRealityController_t8BF4741E7DBA358A1DB46E1DD9EF33C9CDEB8BFA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IMixedRealityEventSource_t9E9DFD08DEE578702833FF502590A1E0476E59E1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IMixedRealityInputSystem_t73D9E8D52E761DF1CC230411D0EFD51104FF68B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InputTrackingState_tCBE220E8A09D62DA1C6BD96F76943FE90F15778D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t07514DE4C099E3518E38FC1CBA5156D78A6BFE6D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t32CCFF13113DCEF594E35706966E2F153D513750_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tB66D13E0427CA48C600AEA4DBA5B173C3734C6CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MixedRealityPose_tE60115C271AC50B8C11BA3B404BFCA99C7B2EFF5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral00B28FF06B788B9B67C6B259800F404F9F3761FD;
IL2CPP_EXTERN_C String_t* _stringLiteral0C2FD7F14008DC5A9704A71B5926F425273F6DFC;
IL2CPP_EXTERN_C String_t* _stringLiteral10F4DE454A7A7EDC63FFA330FCC744864D606F50;
IL2CPP_EXTERN_C String_t* _stringLiteral1653F9A5516D70F1640148CADCC97C572A62936F;
IL2CPP_EXTERN_C String_t* _stringLiteral1F613619221FE2A408DA1ED73F877E67BBD4C7A0;
IL2CPP_EXTERN_C String_t* _stringLiteral1FB9018D8BFC0FACF068B1067EF9E96C35FED1FE;
IL2CPP_EXTERN_C String_t* _stringLiteral2FB1273DCF301695744F96DE3A31C5DBDDB6DBB0;
IL2CPP_EXTERN_C String_t* _stringLiteral483E1DEC34B9D5362E7384C9F67FEBDC4970498B;
IL2CPP_EXTERN_C String_t* _stringLiteral5583A6C0598CF26694C21D7CA3666DD44488DFC5;
IL2CPP_EXTERN_C String_t* _stringLiteral80E8E33CFC68B6519B4050770677835060BEB5E8;
IL2CPP_EXTERN_C String_t* _stringLiteral876C4B39B6E4D0187090400768899C71D99DE90D;
IL2CPP_EXTERN_C String_t* _stringLiteral87E261F2D88CAAEDCD99354542725097ED590502;
IL2CPP_EXTERN_C String_t* _stringLiteralB69CD88CA44BBA6464A30CAFD46811605F0109DF;
IL2CPP_EXTERN_C String_t* _stringLiteralBB47B58026352318D44CEC93932BDFB273FEAF1C;
IL2CPP_EXTERN_C String_t* _stringLiteralBD2155E54D0A0EF69D6B035ACE4FB0D1E5C8A136;
IL2CPP_EXTERN_C String_t* _stringLiteralC2ABD53443E87B1D4332B55DE89F3F4C04D71253;
IL2CPP_EXTERN_C String_t* _stringLiteralCA604168AB048809605F0545853F2D2C30960F1F;
IL2CPP_EXTERN_C String_t* _stringLiteralCB6CE6B89F14D219960135E95D3D3A31031318C1;
IL2CPP_EXTERN_C String_t* _stringLiteralD098894B7802A8D5E690D40161CCBD3A3B74AB08;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralDAF2BD03270A51BF9C135F3694DCAD2D3E66F465;
IL2CPP_EXTERN_C String_t* _stringLiteralE166C9564FBDE461738077E3B1B506525EB6ACCC;
IL2CPP_EXTERN_C String_t* _stringLiteralF3193468E3E53BE1E41883B70A00F57ABFA77BFA;
IL2CPP_EXTERN_C const RuntimeMethod* Enum_TryParse_TisKeyCode_t75B9ECCC26D858F55040DDFF9523681E996D17E9_mC510628C37E0DEDE6B0FA0B2AE4D865B0953FA51_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_ToList_TisInputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD_m55A910C86334CDED2CF47E7BAF47636F70965860_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Union_TisInputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD_m4C37F90EBF7B96B1BE9A69A5402E8F96B8BB2CC8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m71CAA2062645DBD932D8214BDEDB18585DE55A54_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m877E93F2B90ACA5C41B6F351E477BB26D9CCA972_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m8B090EFB59282696217E0C4BF4772DF044BEBAAB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mD0B06E796C9B5956D3AFA9320F455C5F3DCBEBF1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m6EAF4461E14CE5F9CB03227860CC9713AA1B0BD3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m82FE574FEF92EE2D1465259DDBAB99634137B46F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponentInChildren_TisTextMesh_t7E1981C7B03E50D5CA5A3AD5B0D9BB0AB6EE91F8_m51D5BCF76E23E21ACAB1790A8E739AAE6328E395_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1_GetEnumerator_mFD270DB64CA6CFBBEC0204BA3883F03DEB325CCA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1_get_Count_m4695EFEF734593458C61F74A1CFC630896A38A07_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InputFeatureUsage_As_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFD6F2D908C709DA57082D70B7B9F79F7C9E45516_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InputFeatureUsage_As_TisInputTrackingState_tCBE220E8A09D62DA1C6BD96F76943FE90F15778D_m8B233B751F557C5278383CD5C038C33AC7D6B308_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InputFeatureUsage_As_TisQuaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_mC6A5F22BDA5183528F34A3C045584DD6D1F71A85_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InputFeatureUsage_As_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m2DBAFEB1C83704F62C7A889D7C8EDDE5091B1FCD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InputFeatureUsage_As_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_m9B758581CE3336E00136897833C090D2E923FB4F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InputFeatureUsage_As_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m9F82A2C55FF9B1D2B52D7B8FCD39DFA4705B52B5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InputFeatureUsage_As_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m0C661D4C160B057F77F0F3E0A4E8C43BA2E4593F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mA5A50B7F4881D91E55E1085DD477BEBFCFB94456_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_mD027F2A88B0D91F17C878C8C4E07FBB9395EBE7C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m2DE5D95945285F4FFBE7FD51D28BE675BC014D51_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m976C6FBF573FB120E4D1D7B06AE5589EBBD6E46D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mF7ACC153F11A3260DAACDCA56B0A70A4BFA61EA4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m0F3CFBBA46B1A2C1AE03AE6D34CED399412D542C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m9C3EC7FE1A9401268B3C9761A4D96A37197AD0E7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mC05067F62DBD6D4C8E9788C5A8BEC568D8043705_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m28309A8FBF51487121572D19B38937DD5B8572BB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_mB0ED54544433CE428ACEC0FE2E6FEE53E11EE6D2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1__ctor_m141FA88563AC0B5179132FB929EABD02C47FF703_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m002192C406088F7BA156339AAA9B1BB5D69BE934_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* InputTrackingState_tCBE220E8A09D62DA1C6BD96F76943FE90F15778D_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_0_0_0_var;

struct MixedRealityInteractionMappingU5BU5D_t689ED6694F3B293DEDEA6D5371268D36DC67AACE;
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
struct U3CModuleU3E_t12A9E9DD00F2E86F1E3460758E43AB0ACC0F9E5E 
{
};

// System.Collections.Generic.HashSet`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityController>
struct HashSet_1_t6C975DF0A435FF942855BEA5D8D5ACD2A365DEF5  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.HashSet`1::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_7;
	// System.Collections.Generic.HashSet`1/Slot<T>[] System.Collections.Generic.HashSet`1::_slots
	SlotU5BU5D_tA95A5B6D117238C58C72BC1727BB8C3CC97E5039* ____slots_8;
	// System.Int32 System.Collections.Generic.HashSet`1::_count
	int32_t ____count_9;
	// System.Int32 System.Collections.Generic.HashSet`1::_lastIndex
	int32_t ____lastIndex_10;
	// System.Int32 System.Collections.Generic.HashSet`1::_freeList
	int32_t ____freeList_11;
	// System.Collections.Generic.IEqualityComparer`1<T> System.Collections.Generic.HashSet`1::_comparer
	RuntimeObject* ____comparer_12;
	// System.Int32 System.Collections.Generic.HashSet`1::_version
	int32_t ____version_13;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.HashSet`1::_siInfo
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ____siInfo_14;
};

// System.Collections.Generic.HashSet`1<System.Object>
struct HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.HashSet`1::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_7;
	// System.Collections.Generic.HashSet`1/Slot<T>[] System.Collections.Generic.HashSet`1::_slots
	SlotU5BU5D_tF596AD324082C553DB364C768406A40BB3C85343* ____slots_8;
	// System.Int32 System.Collections.Generic.HashSet`1::_count
	int32_t ____count_9;
	// System.Int32 System.Collections.Generic.HashSet`1::_lastIndex
	int32_t ____lastIndex_10;
	// System.Int32 System.Collections.Generic.HashSet`1::_freeList
	int32_t ____freeList_11;
	// System.Collections.Generic.IEqualityComparer`1<T> System.Collections.Generic.HashSet`1::_comparer
	RuntimeObject* ____comparer_12;
	// System.Int32 System.Collections.Generic.HashSet`1::_version
	int32_t ____version_13;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.HashSet`1::_siInfo
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ____siInfo_14;
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

// System.Collections.Generic.List`1<UnityEngine.XR.InputFeatureUsage>
struct List_1_t07514DE4C099E3518E38FC1CBA5156D78A6BFE6D  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	InputFeatureUsageU5BU5D_tFD13D6C127DFF10CE7CC6D6DABF07C2C44021055* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t07514DE4C099E3518E38FC1CBA5156D78A6BFE6D_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	InputFeatureUsageU5BU5D_tFD13D6C127DFF10CE7CC6D6DABF07C2C44021055* ___s_emptyArray_5;
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

// System.Collections.Generic.List`1<UnityEngine.TextMesh>
struct List_1_t32CCFF13113DCEF594E35706966E2F153D513750  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	TextMeshU5BU5D_tB11D93924D72DFB58F3CA12C9A37D6480B62C4B2* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t32CCFF13113DCEF594E35706966E2F153D513750_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	TextMeshU5BU5D_tB11D93924D72DFB58F3CA12C9A37D6480B62C4B2* ___s_emptyArray_5;
};
struct Il2CppArrayBounds;

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

// System.Collections.Generic.HashSet`1/Enumerator<Microsoft.MixedReality.Toolkit.Input.IMixedRealityController>
struct Enumerator_t2F1D0A4895829A663556DF261FAA05673B05D540 
{
	// System.Collections.Generic.HashSet`1<T> System.Collections.Generic.HashSet`1/Enumerator::_set
	HashSet_1_t6C975DF0A435FF942855BEA5D8D5ACD2A365DEF5* ____set_0;
	// System.Int32 System.Collections.Generic.HashSet`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.HashSet`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.HashSet`1/Enumerator::_current
	RuntimeObject* ____current_3;
};

// System.Collections.Generic.HashSet`1/Enumerator<System.Object>
struct Enumerator_t72556E98D7DDBE118A973D782D523D15A96461C8 
{
	// System.Collections.Generic.HashSet`1<T> System.Collections.Generic.HashSet`1/Enumerator::_set
	HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* ____set_0;
	// System.Int32 System.Collections.Generic.HashSet`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.HashSet`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.HashSet`1/Enumerator::_current
	RuntimeObject* ____current_3;
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

// UnityEngine.XR.InputFeatureUsage`1<System.UInt32>
struct InputFeatureUsage_1_tD73AC74B29139087A83959CB3395A0580A2128AE 
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

// UnityEngine.XR.InputFeatureUsage`1<System.UInt32Enum>
struct InputFeatureUsage_1_t26D677E09A2D69C099167C381EE1EBFD5E8BDD48 
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

// System.Nullable`1<System.Int32>
struct Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	int32_t ___value_1;
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

// UnityEngine.XR.InputFeatureUsage
struct InputFeatureUsage_t1E251DC4F8CD697080F0F5D98388955AF8B87599 
{
	// System.String UnityEngine.XR.InputFeatureUsage::m_Name
	String_t* ___m_Name_0;
	// UnityEngine.XR.InputFeatureType UnityEngine.XR.InputFeatureUsage::m_InternalType
	uint32_t ___m_InternalType_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.XR.InputFeatureUsage
struct InputFeatureUsage_t1E251DC4F8CD697080F0F5D98388955AF8B87599_marshaled_pinvoke
{
	char* ___m_Name_0;
	uint32_t ___m_InternalType_1;
};
// Native definition for COM marshalling of UnityEngine.XR.InputFeatureUsage
struct InputFeatureUsage_t1E251DC4F8CD697080F0F5D98388955AF8B87599_marshaled_com
{
	Il2CppChar* ___m_Name_0;
	uint32_t ___m_InternalType_1;
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

// System.Collections.Generic.List`1/Enumerator<UnityEngine.XR.InputFeatureUsage>
struct Enumerator_t80524DF0E134D5C143E44173399F812156A31C8D 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_t07514DE4C099E3518E38FC1CBA5156D78A6BFE6D* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	InputFeatureUsage_t1E251DC4F8CD697080F0F5D98388955AF8B87599 ____current_3;
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

// System.RuntimeTypeHandle
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
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

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.TextMesh
struct TextMesh_t7E1981C7B03E50D5CA5A3AD5B0D9BB0AB6EE91F8  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// Microsoft.MixedReality.Toolkit.Utilities.BaseObjectCollection
struct BaseObjectCollection_t056687101DB443615AC20656C99C37C2A3272AEB  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Action`1<Microsoft.MixedReality.Toolkit.Utilities.BaseObjectCollection> Microsoft.MixedReality.Toolkit.Utilities.BaseObjectCollection::<OnCollectionUpdated>k__BackingField
	Action_1_tD40E9B34D63DD268B34D8B9B982AF9BC1E44277F* ___U3COnCollectionUpdatedU3Ek__BackingField_4;
	// System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.Utilities.ObjectCollectionNode> Microsoft.MixedReality.Toolkit.Utilities.BaseObjectCollection::nodeList
	List_1_t85280175D06D422D1719D9A245F824B6C0BB8638* ___nodeList_5;
	// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.BaseObjectCollection::ignoreInactiveTransforms
	bool ___ignoreInactiveTransforms_6;
	// Microsoft.MixedReality.Toolkit.Utilities.CollationOrder Microsoft.MixedReality.Toolkit.Utilities.BaseObjectCollection::sortType
	int32_t ___sortType_7;
};

// Microsoft.MixedReality.Toolkit.Tools.Runtime.DisplayInputResult
struct DisplayInputResult_t1C00E6FCE3ED21107AF9BC77A5BCC2E3B8F36182  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.TextMesh Microsoft.MixedReality.Toolkit.Tools.Runtime.DisplayInputResult::displayTextMesh
	TextMesh_t7E1981C7B03E50D5CA5A3AD5B0D9BB0AB6EE91F8* ___displayTextMesh_4;
	// Microsoft.MixedReality.Toolkit.Utilities.AxisType Microsoft.MixedReality.Toolkit.Tools.Runtime.DisplayInputResult::inputType
	int32_t ___inputType_5;
	// System.Int32 Microsoft.MixedReality.Toolkit.Tools.Runtime.DisplayInputResult::axisNumber
	int32_t ___axisNumber_6;
	// System.Int32 Microsoft.MixedReality.Toolkit.Tools.Runtime.DisplayInputResult::buttonNumber
	int32_t ___buttonNumber_7;
	// Microsoft.MixedReality.Toolkit.Tools.Runtime.DisplayInputResult/DisplayType Microsoft.MixedReality.Toolkit.Tools.Runtime.DisplayInputResult::displayType
	int32_t ___displayType_8;
};

// Microsoft.MixedReality.Toolkit.Tools.Runtime.ListInputFeatureUsages
struct ListInputFeatureUsages_tD00B5F00B5339AF25C3371FEBEB352C972E7C9A3  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.TextMesh Microsoft.MixedReality.Toolkit.Tools.Runtime.ListInputFeatureUsages::listInputDevicesTextMesh
	TextMesh_t7E1981C7B03E50D5CA5A3AD5B0D9BB0AB6EE91F8* ___listInputDevicesTextMesh_4;
	// Microsoft.MixedReality.Toolkit.Utilities.GridObjectCollection Microsoft.MixedReality.Toolkit.Tools.Runtime.ListInputFeatureUsages::gridObjectCollection
	GridObjectCollection_t4305434DFFC4F42300B547540DE4C36DA2DE4B2A* ___gridObjectCollection_5;
	// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.Tools.Runtime.ListInputFeatureUsages::displayFeatureUsagesPrefab
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___displayFeatureUsagesPrefab_6;
	// System.Collections.Generic.List`1<UnityEngine.XR.InputDevice> Microsoft.MixedReality.Toolkit.Tools.Runtime.ListInputFeatureUsages::leftInputDevices
	List_1_tB66D13E0427CA48C600AEA4DBA5B173C3734C6CE* ___leftInputDevices_7;
	// System.Collections.Generic.List`1<UnityEngine.XR.InputDevice> Microsoft.MixedReality.Toolkit.Tools.Runtime.ListInputFeatureUsages::rightInputDevices
	List_1_tB66D13E0427CA48C600AEA4DBA5B173C3734C6CE* ___rightInputDevices_8;
	// System.Collections.Generic.List`1<UnityEngine.XR.InputFeatureUsage> Microsoft.MixedReality.Toolkit.Tools.Runtime.ListInputFeatureUsages::featureUsages
	List_1_t07514DE4C099E3518E38FC1CBA5156D78A6BFE6D* ___featureUsages_9;
	// System.Collections.Generic.List`1<UnityEngine.TextMesh> Microsoft.MixedReality.Toolkit.Tools.Runtime.ListInputFeatureUsages::displayFeatureUsagesTextMeshes
	List_1_t32CCFF13113DCEF594E35706966E2F153D513750* ___displayFeatureUsagesTextMeshes_10;
};

// Microsoft.MixedReality.Toolkit.Tools.Runtime.MixedRealityInteractionTool
struct MixedRealityInteractionTool_t3ECD399A8C2F6AB137E3F569B44374898D0CAB6C  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.TextMesh Microsoft.MixedReality.Toolkit.Tools.Runtime.MixedRealityInteractionTool::listControllersTextMesh
	TextMesh_t7E1981C7B03E50D5CA5A3AD5B0D9BB0AB6EE91F8* ___listControllersTextMesh_4;
	// UnityEngine.TextMesh Microsoft.MixedReality.Toolkit.Tools.Runtime.MixedRealityInteractionTool::leftHandedControllerTextMesh
	TextMesh_t7E1981C7B03E50D5CA5A3AD5B0D9BB0AB6EE91F8* ___leftHandedControllerTextMesh_5;
	// UnityEngine.TextMesh Microsoft.MixedReality.Toolkit.Tools.Runtime.MixedRealityInteractionTool::rightHandedControllerTextMesh
	TextMesh_t7E1981C7B03E50D5CA5A3AD5B0D9BB0AB6EE91F8* ___rightHandedControllerTextMesh_6;
};

// Microsoft.MixedReality.Toolkit.Utilities.GridObjectCollection
struct GridObjectCollection_t4305434DFFC4F42300B547540DE4C36DA2DE4B2A  : public BaseObjectCollection_t056687101DB443615AC20656C99C37C2A3272AEB
{
	// Microsoft.MixedReality.Toolkit.Utilities.ObjectOrientationSurfaceType Microsoft.MixedReality.Toolkit.Utilities.GridObjectCollection::surfaceType
	int32_t ___surfaceType_8;
	// Microsoft.MixedReality.Toolkit.Utilities.OrientationType Microsoft.MixedReality.Toolkit.Utilities.GridObjectCollection::orientType
	int32_t ___orientType_9;
	// Microsoft.MixedReality.Toolkit.Utilities.LayoutOrder Microsoft.MixedReality.Toolkit.Utilities.GridObjectCollection::layout
	int32_t ___layout_10;
	// Microsoft.MixedReality.Toolkit.Utilities.LayoutAnchor Microsoft.MixedReality.Toolkit.Utilities.GridObjectCollection::anchor
	int32_t ___anchor_11;
	// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.GridObjectCollection::anchorAlongAxis
	bool ___anchorAlongAxis_12;
	// Microsoft.MixedReality.Toolkit.Utilities.LayoutHorizontalAlignment Microsoft.MixedReality.Toolkit.Utilities.GridObjectCollection::columnAlignment
	int32_t ___columnAlignment_13;
	// Microsoft.MixedReality.Toolkit.Utilities.LayoutVerticalAlignment Microsoft.MixedReality.Toolkit.Utilities.GridObjectCollection::rowAlignment
	int32_t ___rowAlignment_14;
	// System.Single Microsoft.MixedReality.Toolkit.Utilities.GridObjectCollection::radius
	float ___radius_15;
	// System.Single Microsoft.MixedReality.Toolkit.Utilities.GridObjectCollection::radialRange
	float ___radialRange_16;
	// System.Single Microsoft.MixedReality.Toolkit.Utilities.GridObjectCollection::distance
	float ___distance_17;
	// System.Int32 Microsoft.MixedReality.Toolkit.Utilities.GridObjectCollection::rows
	int32_t ___rows_19;
	// System.Int32 Microsoft.MixedReality.Toolkit.Utilities.GridObjectCollection::columns
	int32_t ___columns_20;
	// System.Single Microsoft.MixedReality.Toolkit.Utilities.GridObjectCollection::cellWidth
	float ___cellWidth_21;
	// System.Single Microsoft.MixedReality.Toolkit.Utilities.GridObjectCollection::cellHeight
	float ___cellHeight_22;
	// UnityEngine.Mesh Microsoft.MixedReality.Toolkit.Utilities.GridObjectCollection::<SphereMesh>k__BackingField
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___U3CSphereMeshU3Ek__BackingField_23;
	// UnityEngine.Mesh Microsoft.MixedReality.Toolkit.Utilities.GridObjectCollection::<CylinderMesh>k__BackingField
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___U3CCylinderMeshU3Ek__BackingField_24;
	// UnityEngine.Vector2 Microsoft.MixedReality.Toolkit.Utilities.GridObjectCollection::HalfCell
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___HalfCell_25;
	// System.Int32 Microsoft.MixedReality.Toolkit.Utilities.GridObjectCollection::assetVersion
	int32_t ___assetVersion_27;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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


// System.Boolean System.Enum::TryParse<System.Int32Enum>(System.String,TEnum&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enum_TryParse_TisInt32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_mCDE088AE8ED4EA53AF329E4CB920F6C6BF4A0E22_gshared (String_t* ___value0, int32_t* ___result1, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Union<UnityEngine.XR.InputDevice>(System.Collections.Generic.IEnumerable`1<TSource>,System.Collections.Generic.IEnumerable`1<TSource>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_Union_TisInputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD_m4C37F90EBF7B96B1BE9A69A5402E8F96B8BB2CC8_gshared (RuntimeObject* ___first0, RuntimeObject* ___second1, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable::ToList<UnityEngine.XR.InputDevice>(System.Collections.Generic.IEnumerable`1<TSource>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tB66D13E0427CA48C600AEA4DBA5B173C3734C6CE* Enumerable_ToList_TisInputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD_m55A910C86334CDED2CF47E7BAF47636F70965860_gshared (RuntimeObject* ___source0, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<UnityEngine.XR.InputDevice>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m9C3EC7FE1A9401268B3C9761A4D96A37197AD0E7_gshared_inline (List_1_tB66D13E0427CA48C600AEA4DBA5B173C3734C6CE* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<System.Object>(T,UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_Instantiate_TisRuntimeObject_m872899879F710B2E55BC157F35464F03877C8DFA_gshared (RuntimeObject* ___original0, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___parent1, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponentInChildren<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_GetComponentInChildren_TisRuntimeObject_mED181B37054A10395CA356010754C7DFC685893C_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___index0, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<UnityEngine.XR.InputDevice>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD List_1_get_Item_mB0ED54544433CE428ACEC0FE2E6FEE53E11EE6D2_gshared (List_1_tB66D13E0427CA48C600AEA4DBA5B173C3734C6CE* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.XR.InputFeatureUsage>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t80524DF0E134D5C143E44173399F812156A31C8D List_1_GetEnumerator_mD027F2A88B0D91F17C878C8C4E07FBB9395EBE7C_gshared (List_1_t07514DE4C099E3518E38FC1CBA5156D78A6BFE6D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.XR.InputFeatureUsage>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_m877E93F2B90ACA5C41B6F351E477BB26D9CCA972_gshared (Enumerator_t80524DF0E134D5C143E44173399F812156A31C8D* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1/Enumerator<UnityEngine.XR.InputFeatureUsage>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR InputFeatureUsage_t1E251DC4F8CD697080F0F5D98388955AF8B87599 Enumerator_get_Current_m6EAF4461E14CE5F9CB03227860CC9713AA1B0BD3_gshared_inline (Enumerator_t80524DF0E134D5C143E44173399F812156A31C8D* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<UnityEngine.XR.InputFeatureUsage>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m0F3CFBBA46B1A2C1AE03AE6D34CED399412D542C_gshared_inline (List_1_t07514DE4C099E3518E38FC1CBA5156D78A6BFE6D* __this, const RuntimeMethod* method) ;
// UnityEngine.XR.InputFeatureUsage`1<T> UnityEngine.XR.InputFeatureUsage::As<System.Boolean>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputFeatureUsage_1_tE336B2F0B9AC721519BFA17A08D6353FD5221637 InputFeatureUsage_As_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFD6F2D908C709DA57082D70B7B9F79F7C9E45516_gshared (InputFeatureUsage_t1E251DC4F8CD697080F0F5D98388955AF8B87599* __this, const RuntimeMethod* method) ;
// UnityEngine.XR.InputFeatureUsage`1<T> UnityEngine.XR.InputFeatureUsage::As<System.UInt32>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputFeatureUsage_1_tD73AC74B29139087A83959CB3395A0580A2128AE InputFeatureUsage_As_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_m9B758581CE3336E00136897833C090D2E923FB4F_gshared (InputFeatureUsage_t1E251DC4F8CD697080F0F5D98388955AF8B87599* __this, const RuntimeMethod* method) ;
// UnityEngine.XR.InputFeatureUsage`1<T> UnityEngine.XR.InputFeatureUsage::As<System.Single>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputFeatureUsage_1_t311D0F42F1A7BF37D3CEAC15A53A1F24165F1848 InputFeatureUsage_As_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m2DBAFEB1C83704F62C7A889D7C8EDDE5091B1FCD_gshared (InputFeatureUsage_t1E251DC4F8CD697080F0F5D98388955AF8B87599* __this, const RuntimeMethod* method) ;
// UnityEngine.XR.InputFeatureUsage`1<T> UnityEngine.XR.InputFeatureUsage::As<UnityEngine.Vector2>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputFeatureUsage_1_tEB160A05BCDCCA4F96072CBA0866498D06B9A27C InputFeatureUsage_As_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m9F82A2C55FF9B1D2B52D7B8FCD39DFA4705B52B5_gshared (InputFeatureUsage_t1E251DC4F8CD697080F0F5D98388955AF8B87599* __this, const RuntimeMethod* method) ;
// UnityEngine.XR.InputFeatureUsage`1<T> UnityEngine.XR.InputFeatureUsage::As<UnityEngine.Vector3>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputFeatureUsage_1_t2E901FA41650EB29399194768CAA93D477CEBC58 InputFeatureUsage_As_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m0C661D4C160B057F77F0F3E0A4E8C43BA2E4593F_gshared (InputFeatureUsage_t1E251DC4F8CD697080F0F5D98388955AF8B87599* __this, const RuntimeMethod* method) ;
// UnityEngine.XR.InputFeatureUsage`1<T> UnityEngine.XR.InputFeatureUsage::As<UnityEngine.Quaternion>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputFeatureUsage_1_t8489CEC68B1EC178F2634079A9D7CD9E90D3CF5D InputFeatureUsage_As_TisQuaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_mC6A5F22BDA5183528F34A3C045584DD6D1F71A85_gshared (InputFeatureUsage_t1E251DC4F8CD697080F0F5D98388955AF8B87599* __this, const RuntimeMethod* method) ;
// UnityEngine.XR.InputFeatureUsage`1<T> UnityEngine.XR.InputFeatureUsage::As<System.UInt32Enum>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputFeatureUsage_1_t26D677E09A2D69C099167C381EE1EBFD5E8BDD48 InputFeatureUsage_As_TisUInt32Enum_t7B4F5C6C14D2C4B2A5927C59620BE3868714DACF_mC3AB421817C6C97600E9B493B79608CA97A8A742_gshared (InputFeatureUsage_t1E251DC4F8CD697080F0F5D98388955AF8B87599* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.XR.InputFeatureUsage>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mD0B06E796C9B5956D3AFA9320F455C5F3DCBEBF1_gshared (Enumerator_t80524DF0E134D5C143E44173399F812156A31C8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.XR.InputDevice>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mF7ACC153F11A3260DAACDCA56B0A70A4BFA61EA4_gshared (List_1_tB66D13E0427CA48C600AEA4DBA5B173C3734C6CE* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.XR.InputFeatureUsage>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m2DE5D95945285F4FFBE7FD51D28BE675BC014D51_gshared (List_1_t07514DE4C099E3518E38FC1CBA5156D78A6BFE6D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.HashSet`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t HashSet_1_get_Count_m41CC85EEB7855CEFA3BC7A32F115387939318ED3_gshared_inline (HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* __this, const RuntimeMethod* method) ;
// System.Void System.Nullable`1<System.Int32>::.ctor(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Nullable_1__ctor_m141FA88563AC0B5179132FB929EABD02C47FF703_gshared (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Collections.Generic.HashSet`1/Enumerator<T> System.Collections.Generic.HashSet`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t72556E98D7DDBE118A973D782D523D15A96461C8 HashSet_1_GetEnumerator_m143B98FEED7E9CABA2C494AB2F04DAD60A504635_gshared (HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.HashSet`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mFB582AEAA2E73F3128B5571197BEDE256A83F657_gshared (Enumerator_t72556E98D7DDBE118A973D782D523D15A96461C8* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.HashSet`1/Enumerator<System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m139A176CD271A0532D75BE08DA7831C8C45CE28F_gshared_inline (Enumerator_t72556E98D7DDBE118A973D782D523D15A96461C8* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.HashSet`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m27565F5ACCCC75C3DD34CC4CAE3E6AEFEB9144A6_gshared (Enumerator_t72556E98D7DDBE118A973D782D523D15A96461C8* __this, const RuntimeMethod* method) ;

// System.String System.String::Format(System.String,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m9499958F4B0BB6089C75760AB647AB3CA4D55806 (String_t* ___format0, RuntimeObject* ___arg01, RuntimeObject* ___arg12, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::set_name(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_set_name_mC79E6DC8FFD72479C90F0C4CC7F42A0FEAF5AE47 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m8C122B26BC5AA10E2550AECA16E57DAE10F07E30 (String_t* ___format0, RuntimeObject* ___arg01, const RuntimeMethod* method) ;
// System.Single UnityEngine.Input::GetAxis(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Input_GetAxis_m1F49B26F24032F45FB4583C95FB24E6771A161D4 (String_t* ___axisName0, const RuntimeMethod* method) ;
// System.Void UnityEngine.TextMesh::set_text(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextMesh_set_text_mDF79D39638ED82797D0B0B3BB9E6B10712F8EA9E (TextMesh_t7E1981C7B03E50D5CA5A3AD5B0D9BB0AB6EE91F8* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Boolean System.Enum::TryParse<UnityEngine.KeyCode>(System.String,TEnum&)
inline bool Enum_TryParse_TisKeyCode_t75B9ECCC26D858F55040DDFF9523681E996D17E9_mC510628C37E0DEDE6B0FA0B2AE4D865B0953FA51 (String_t* ___value0, int32_t* ___result1, const RuntimeMethod* method)
{
	return ((  bool (*) (String_t*, int32_t*, const RuntimeMethod*))Enum_TryParse_TisInt32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_mCDE088AE8ED4EA53AF329E4CB920F6C6BF4A0E22_gshared)(___value0, ___result1, method);
}
// System.Boolean UnityEngine.Input::GetKey(UnityEngine.KeyCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetKey_m0BF0499CADC378F02B6BEE2399FB945AB929B81A (int32_t ___key0, const RuntimeMethod* method) ;
// System.String UnityEngine.TextMesh::get_text()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* TextMesh_get_text_mB3E900AED17390DE50DFC984428BC29EB1CA60A2 (TextMesh_t7E1981C7B03E50D5CA5A3AD5B0D9BB0AB6EE91F8* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method) ;
// System.String[] UnityEngine.Input::GetJoystickNames()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* Input_GetJoystickNames_m398DA6DE3281D480F35E06AA92F746D4C82C9DC5 (const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0 (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.InputDevices::GetDevicesWithCharacteristics(UnityEngine.XR.InputDeviceCharacteristics,System.Collections.Generic.List`1<UnityEngine.XR.InputDevice>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputDevices_GetDevicesWithCharacteristics_m2F1785592FF66FB69D72FFE1C1B821D4BD64094A (uint32_t ___desiredCharacteristics0, List_1_tB66D13E0427CA48C600AEA4DBA5B173C3734C6CE* ___inputDevices1, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Union<UnityEngine.XR.InputDevice>(System.Collections.Generic.IEnumerable`1<TSource>,System.Collections.Generic.IEnumerable`1<TSource>)
inline RuntimeObject* Enumerable_Union_TisInputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD_m4C37F90EBF7B96B1BE9A69A5402E8F96B8BB2CC8 (RuntimeObject* ___first0, RuntimeObject* ___second1, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, RuntimeObject*, const RuntimeMethod*))Enumerable_Union_TisInputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD_m4C37F90EBF7B96B1BE9A69A5402E8F96B8BB2CC8_gshared)(___first0, ___second1, method);
}
// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable::ToList<UnityEngine.XR.InputDevice>(System.Collections.Generic.IEnumerable`1<TSource>)
inline List_1_tB66D13E0427CA48C600AEA4DBA5B173C3734C6CE* Enumerable_ToList_TisInputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD_m55A910C86334CDED2CF47E7BAF47636F70965860 (RuntimeObject* ___source0, const RuntimeMethod* method)
{
	return ((  List_1_tB66D13E0427CA48C600AEA4DBA5B173C3734C6CE* (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_ToList_TisInputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD_m55A910C86334CDED2CF47E7BAF47636F70965860_gshared)(___source0, method);
}
// System.Int32 System.Collections.Generic.List`1<UnityEngine.XR.InputDevice>::get_Count()
inline int32_t List_1_get_Count_m9C3EC7FE1A9401268B3C9761A4D96A37197AD0E7_inline (List_1_tB66D13E0427CA48C600AEA4DBA5B173C3734C6CE* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tB66D13E0427CA48C600AEA4DBA5B173C3734C6CE*, const RuntimeMethod*))List_1_get_Count_m9C3EC7FE1A9401268B3C9761A4D96A37197AD0E7_gshared_inline)(__this, method);
}
// System.Int32 System.Collections.Generic.List`1<UnityEngine.TextMesh>::get_Count()
inline int32_t List_1_get_Count_mC05067F62DBD6D4C8E9788C5A8BEC568D8043705_inline (List_1_t32CCFF13113DCEF594E35706966E2F153D513750* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t32CCFF13113DCEF594E35706966E2F153D513750*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<UnityEngine.GameObject>(T,UnityEngine.Transform)
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m002192C406088F7BA156339AAA9B1BB5D69BE934 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___original0, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___parent1, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m872899879F710B2E55BC157F35464F03877C8DFA_gshared)(___original0, ___parent1, method);
}
// T UnityEngine.GameObject::GetComponentInChildren<UnityEngine.TextMesh>()
inline TextMesh_t7E1981C7B03E50D5CA5A3AD5B0D9BB0AB6EE91F8* GameObject_GetComponentInChildren_TisTextMesh_t7E1981C7B03E50D5CA5A3AD5B0D9BB0AB6EE91F8_m51D5BCF76E23E21ACAB1790A8E739AAE6328E395 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  TextMesh_t7E1981C7B03E50D5CA5A3AD5B0D9BB0AB6EE91F8* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponentInChildren_TisRuntimeObject_mED181B37054A10395CA356010754C7DFC685893C_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.TextMesh>::Add(T)
inline void List_1_Add_mA5A50B7F4881D91E55E1085DD477BEBFCFB94456_inline (List_1_t32CCFF13113DCEF594E35706966E2F153D513750* __this, TextMesh_t7E1981C7B03E50D5CA5A3AD5B0D9BB0AB6EE91F8* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t32CCFF13113DCEF594E35706966E2F153D513750*, TextMesh_t7E1981C7B03E50D5CA5A3AD5B0D9BB0AB6EE91F8*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// T System.Collections.Generic.List`1<UnityEngine.TextMesh>::get_Item(System.Int32)
inline TextMesh_t7E1981C7B03E50D5CA5A3AD5B0D9BB0AB6EE91F8* List_1_get_Item_m28309A8FBF51487121572D19B38937DD5B8572BB (List_1_t32CCFF13113DCEF594E35706966E2F153D513750* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  TextMesh_t7E1981C7B03E50D5CA5A3AD5B0D9BB0AB6EE91F8* (*) (List_1_t32CCFF13113DCEF594E35706966E2F153D513750*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___index0, method);
}
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Transform::get_parent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Transform_get_parent_m65354E28A4C94EC00EBCF03532F7B0718380791E (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.GameObject::get_activeSelf()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GameObject_get_activeSelf_m4F3E5240E138B66AAA080EA30759A3D0517DA368 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, bool ___value0, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<UnityEngine.XR.InputDevice>::get_Item(System.Int32)
inline InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD List_1_get_Item_mB0ED54544433CE428ACEC0FE2E6FEE53E11EE6D2 (List_1_tB66D13E0427CA48C600AEA4DBA5B173C3734C6CE* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD (*) (List_1_tB66D13E0427CA48C600AEA4DBA5B173C3734C6CE*, int32_t, const RuntimeMethod*))List_1_get_Item_mB0ED54544433CE428ACEC0FE2E6FEE53E11EE6D2_gshared)(__this, ___index0, method);
}
// System.String UnityEngine.XR.InputDevice::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* InputDevice_get_name_mAEA08A3755E715697022C54227556428CEF4E1CE (InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* __this, const RuntimeMethod* method) ;
// System.Boolean System.String::StartsWith(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_StartsWith_mF75DBA1EB709811E711B44E26FF919C88A8E65C0 (String_t* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.String UnityEngine.XR.InputDevice::get_manufacturer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* InputDevice_get_manufacturer_mABBD3690895EC6A8FE86094CCFA4E0B081C102BB (InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m6B0734B65813C8EA093D78E5C2D16534EB6FE8C0 (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___values0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.XR.InputDevice::TryGetFeatureUsages(System.Collections.Generic.List`1<UnityEngine.XR.InputFeatureUsage>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InputDevice_TryGetFeatureUsages_mFD9F3CE1465177544260CEB32E1821AA0FDD24AC (InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* __this, List_1_t07514DE4C099E3518E38FC1CBA5156D78A6BFE6D* ___featureUsages0, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.XR.InputFeatureUsage>::GetEnumerator()
inline Enumerator_t80524DF0E134D5C143E44173399F812156A31C8D List_1_GetEnumerator_mD027F2A88B0D91F17C878C8C4E07FBB9395EBE7C (List_1_t07514DE4C099E3518E38FC1CBA5156D78A6BFE6D* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t80524DF0E134D5C143E44173399F812156A31C8D (*) (List_1_t07514DE4C099E3518E38FC1CBA5156D78A6BFE6D*, const RuntimeMethod*))List_1_GetEnumerator_mD027F2A88B0D91F17C878C8C4E07FBB9395EBE7C_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.XR.InputFeatureUsage>::Dispose()
inline void Enumerator_Dispose_m877E93F2B90ACA5C41B6F351E477BB26D9CCA972 (Enumerator_t80524DF0E134D5C143E44173399F812156A31C8D* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t80524DF0E134D5C143E44173399F812156A31C8D*, const RuntimeMethod*))Enumerator_Dispose_m877E93F2B90ACA5C41B6F351E477BB26D9CCA972_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<UnityEngine.XR.InputFeatureUsage>::get_Current()
inline InputFeatureUsage_t1E251DC4F8CD697080F0F5D98388955AF8B87599 Enumerator_get_Current_m6EAF4461E14CE5F9CB03227860CC9713AA1B0BD3_inline (Enumerator_t80524DF0E134D5C143E44173399F812156A31C8D* __this, const RuntimeMethod* method)
{
	return ((  InputFeatureUsage_t1E251DC4F8CD697080F0F5D98388955AF8B87599 (*) (Enumerator_t80524DF0E134D5C143E44173399F812156A31C8D*, const RuntimeMethod*))Enumerator_get_Current_m6EAF4461E14CE5F9CB03227860CC9713AA1B0BD3_gshared_inline)(__this, method);
}
// UnityEngine.Transform UnityEngine.Transform::GetChild(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<UnityEngine.XR.InputFeatureUsage>::get_Count()
inline int32_t List_1_get_Count_m0F3CFBBA46B1A2C1AE03AE6D34CED399412D542C_inline (List_1_t07514DE4C099E3518E38FC1CBA5156D78A6BFE6D* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t07514DE4C099E3518E38FC1CBA5156D78A6BFE6D*, const RuntimeMethod*))List_1_get_Count_m0F3CFBBA46B1A2C1AE03AE6D34CED399412D542C_gshared_inline)(__this, method);
}
// UnityEngine.Vector3 UnityEngine.Transform::get_localScale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_localScale(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.String UnityEngine.XR.InputFeatureUsage::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* InputFeatureUsage_get_name_mA51C7B42F66E87B3527CBD061D1E6944058FE085 (InputFeatureUsage_t1E251DC4F8CD697080F0F5D98388955AF8B87599* __this, const RuntimeMethod* method) ;
// System.Type UnityEngine.XR.InputFeatureUsage::get_type()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* InputFeatureUsage_get_type_mD9697C1BFA3EA57E89A23A06019AAB73CB24326D (InputFeatureUsage_t1E251DC4F8CD697080F0F5D98388955AF8B87599* __this, const RuntimeMethod* method) ;
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___handle0, const RuntimeMethod* method) ;
// UnityEngine.XR.InputFeatureUsage`1<T> UnityEngine.XR.InputFeatureUsage::As<System.Boolean>()
inline InputFeatureUsage_1_tE336B2F0B9AC721519BFA17A08D6353FD5221637 InputFeatureUsage_As_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFD6F2D908C709DA57082D70B7B9F79F7C9E45516 (InputFeatureUsage_t1E251DC4F8CD697080F0F5D98388955AF8B87599* __this, const RuntimeMethod* method)
{
	return ((  InputFeatureUsage_1_tE336B2F0B9AC721519BFA17A08D6353FD5221637 (*) (InputFeatureUsage_t1E251DC4F8CD697080F0F5D98388955AF8B87599*, const RuntimeMethod*))InputFeatureUsage_As_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFD6F2D908C709DA57082D70B7B9F79F7C9E45516_gshared)(__this, method);
}
// System.Boolean UnityEngine.XR.InputDevice::TryGetFeatureValue(UnityEngine.XR.InputFeatureUsage`1<System.Boolean>,System.Boolean&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InputDevice_TryGetFeatureValue_m24EC3B6C41AE4098269427232AD5F52E786BF884 (InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* __this, InputFeatureUsage_1_tE336B2F0B9AC721519BFA17A08D6353FD5221637 ___usage0, bool* ___value1, const RuntimeMethod* method) ;
// UnityEngine.XR.InputFeatureUsage`1<T> UnityEngine.XR.InputFeatureUsage::As<System.UInt32>()
inline InputFeatureUsage_1_tD73AC74B29139087A83959CB3395A0580A2128AE InputFeatureUsage_As_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_m9B758581CE3336E00136897833C090D2E923FB4F (InputFeatureUsage_t1E251DC4F8CD697080F0F5D98388955AF8B87599* __this, const RuntimeMethod* method)
{
	return ((  InputFeatureUsage_1_tD73AC74B29139087A83959CB3395A0580A2128AE (*) (InputFeatureUsage_t1E251DC4F8CD697080F0F5D98388955AF8B87599*, const RuntimeMethod*))InputFeatureUsage_As_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_m9B758581CE3336E00136897833C090D2E923FB4F_gshared)(__this, method);
}
// System.Boolean UnityEngine.XR.InputDevice::TryGetFeatureValue(UnityEngine.XR.InputFeatureUsage`1<System.UInt32>,System.UInt32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InputDevice_TryGetFeatureValue_m9FC969BEFF0E5BAB78DD9F2130F437788D20068C (InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* __this, InputFeatureUsage_1_tD73AC74B29139087A83959CB3395A0580A2128AE ___usage0, uint32_t* ___value1, const RuntimeMethod* method) ;
// UnityEngine.XR.InputFeatureUsage`1<T> UnityEngine.XR.InputFeatureUsage::As<System.Single>()
inline InputFeatureUsage_1_t311D0F42F1A7BF37D3CEAC15A53A1F24165F1848 InputFeatureUsage_As_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m2DBAFEB1C83704F62C7A889D7C8EDDE5091B1FCD (InputFeatureUsage_t1E251DC4F8CD697080F0F5D98388955AF8B87599* __this, const RuntimeMethod* method)
{
	return ((  InputFeatureUsage_1_t311D0F42F1A7BF37D3CEAC15A53A1F24165F1848 (*) (InputFeatureUsage_t1E251DC4F8CD697080F0F5D98388955AF8B87599*, const RuntimeMethod*))InputFeatureUsage_As_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m2DBAFEB1C83704F62C7A889D7C8EDDE5091B1FCD_gshared)(__this, method);
}
// System.Boolean UnityEngine.XR.InputDevice::TryGetFeatureValue(UnityEngine.XR.InputFeatureUsage`1<System.Single>,System.Single&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InputDevice_TryGetFeatureValue_m675D52240379FEF80D6499B5031941812FDFD081 (InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* __this, InputFeatureUsage_1_t311D0F42F1A7BF37D3CEAC15A53A1F24165F1848 ___usage0, float* ___value1, const RuntimeMethod* method) ;
// UnityEngine.XR.InputFeatureUsage`1<T> UnityEngine.XR.InputFeatureUsage::As<UnityEngine.Vector2>()
inline InputFeatureUsage_1_tEB160A05BCDCCA4F96072CBA0866498D06B9A27C InputFeatureUsage_As_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m9F82A2C55FF9B1D2B52D7B8FCD39DFA4705B52B5 (InputFeatureUsage_t1E251DC4F8CD697080F0F5D98388955AF8B87599* __this, const RuntimeMethod* method)
{
	return ((  InputFeatureUsage_1_tEB160A05BCDCCA4F96072CBA0866498D06B9A27C (*) (InputFeatureUsage_t1E251DC4F8CD697080F0F5D98388955AF8B87599*, const RuntimeMethod*))InputFeatureUsage_As_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m9F82A2C55FF9B1D2B52D7B8FCD39DFA4705B52B5_gshared)(__this, method);
}
// System.Boolean UnityEngine.XR.InputDevice::TryGetFeatureValue(UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector2>,UnityEngine.Vector2&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InputDevice_TryGetFeatureValue_mB2C15D1FC747DA9FB5958FA17E77049886FB3BBA (InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* __this, InputFeatureUsage_1_tEB160A05BCDCCA4F96072CBA0866498D06B9A27C ___usage0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* ___value1, const RuntimeMethod* method) ;
// UnityEngine.XR.InputFeatureUsage`1<T> UnityEngine.XR.InputFeatureUsage::As<UnityEngine.Vector3>()
inline InputFeatureUsage_1_t2E901FA41650EB29399194768CAA93D477CEBC58 InputFeatureUsage_As_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m0C661D4C160B057F77F0F3E0A4E8C43BA2E4593F (InputFeatureUsage_t1E251DC4F8CD697080F0F5D98388955AF8B87599* __this, const RuntimeMethod* method)
{
	return ((  InputFeatureUsage_1_t2E901FA41650EB29399194768CAA93D477CEBC58 (*) (InputFeatureUsage_t1E251DC4F8CD697080F0F5D98388955AF8B87599*, const RuntimeMethod*))InputFeatureUsage_As_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m0C661D4C160B057F77F0F3E0A4E8C43BA2E4593F_gshared)(__this, method);
}
// System.Boolean UnityEngine.XR.InputDevice::TryGetFeatureValue(UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3>,UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InputDevice_TryGetFeatureValue_m472B5ECE996FB7440CACCF1E85722DA4963E3167 (InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* __this, InputFeatureUsage_1_t2E901FA41650EB29399194768CAA93D477CEBC58 ___usage0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___value1, const RuntimeMethod* method) ;
// UnityEngine.XR.InputFeatureUsage`1<T> UnityEngine.XR.InputFeatureUsage::As<UnityEngine.Quaternion>()
inline InputFeatureUsage_1_t8489CEC68B1EC178F2634079A9D7CD9E90D3CF5D InputFeatureUsage_As_TisQuaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_mC6A5F22BDA5183528F34A3C045584DD6D1F71A85 (InputFeatureUsage_t1E251DC4F8CD697080F0F5D98388955AF8B87599* __this, const RuntimeMethod* method)
{
	return ((  InputFeatureUsage_1_t8489CEC68B1EC178F2634079A9D7CD9E90D3CF5D (*) (InputFeatureUsage_t1E251DC4F8CD697080F0F5D98388955AF8B87599*, const RuntimeMethod*))InputFeatureUsage_As_TisQuaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_mC6A5F22BDA5183528F34A3C045584DD6D1F71A85_gshared)(__this, method);
}
// System.Boolean UnityEngine.XR.InputDevice::TryGetFeatureValue(UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Quaternion>,UnityEngine.Quaternion&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InputDevice_TryGetFeatureValue_m0C1A9761DD0D1C6D1EF4BAB2FAF1BC1A9541BB9F (InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* __this, InputFeatureUsage_1_t8489CEC68B1EC178F2634079A9D7CD9E90D3CF5D ___usage0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* ___value1, const RuntimeMethod* method) ;
// UnityEngine.XR.InputFeatureUsage`1<T> UnityEngine.XR.InputFeatureUsage::As<UnityEngine.XR.InputTrackingState>()
inline InputFeatureUsage_1_t4EF7DDCAC35EE23BA72694AC2AB76CF4A879FFD9 InputFeatureUsage_As_TisInputTrackingState_tCBE220E8A09D62DA1C6BD96F76943FE90F15778D_m8B233B751F557C5278383CD5C038C33AC7D6B308 (InputFeatureUsage_t1E251DC4F8CD697080F0F5D98388955AF8B87599* __this, const RuntimeMethod* method)
{
	return ((  InputFeatureUsage_1_t4EF7DDCAC35EE23BA72694AC2AB76CF4A879FFD9 (*) (InputFeatureUsage_t1E251DC4F8CD697080F0F5D98388955AF8B87599*, const RuntimeMethod*))InputFeatureUsage_As_TisUInt32Enum_t7B4F5C6C14D2C4B2A5927C59620BE3868714DACF_mC3AB421817C6C97600E9B493B79608CA97A8A742_gshared)(__this, method);
}
// System.Boolean UnityEngine.XR.InputDevice::TryGetFeatureValue(UnityEngine.XR.InputFeatureUsage`1<UnityEngine.XR.InputTrackingState>,UnityEngine.XR.InputTrackingState&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InputDevice_TryGetFeatureValue_m8A01F07356DC85042F6BB7C6258A75C3EC3C4E11 (InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* __this, InputFeatureUsage_1_t4EF7DDCAC35EE23BA72694AC2AB76CF4A879FFD9 ___usage0, uint32_t* ___value1, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.XR.InputFeatureUsage>::MoveNext()
inline bool Enumerator_MoveNext_mD0B06E796C9B5956D3AFA9320F455C5F3DCBEBF1 (Enumerator_t80524DF0E134D5C143E44173399F812156A31C8D* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t80524DF0E134D5C143E44173399F812156A31C8D*, const RuntimeMethod*))Enumerator_MoveNext_mD0B06E796C9B5956D3AFA9320F455C5F3DCBEBF1_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.XR.InputDevice>::.ctor()
inline void List_1__ctor_mF7ACC153F11A3260DAACDCA56B0A70A4BFA61EA4 (List_1_tB66D13E0427CA48C600AEA4DBA5B173C3734C6CE* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tB66D13E0427CA48C600AEA4DBA5B173C3734C6CE*, const RuntimeMethod*))List_1__ctor_mF7ACC153F11A3260DAACDCA56B0A70A4BFA61EA4_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.XR.InputFeatureUsage>::.ctor()
inline void List_1__ctor_m2DE5D95945285F4FFBE7FD51D28BE675BC014D51 (List_1_t07514DE4C099E3518E38FC1CBA5156D78A6BFE6D* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t07514DE4C099E3518E38FC1CBA5156D78A6BFE6D*, const RuntimeMethod*))List_1__ctor_m2DE5D95945285F4FFBE7FD51D28BE675BC014D51_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.TextMesh>::.ctor()
inline void List_1__ctor_m976C6FBF573FB120E4D1D7B06AE5589EBBD6E46D (List_1_t32CCFF13113DCEF594E35706966E2F153D513750* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t32CCFF13113DCEF594E35706966E2F153D513750*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem Microsoft.MixedReality.Toolkit.CoreServices::get_InputSystem()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CoreServices_get_InputSystem_m47147418643299159BF4DF408F768844FDC33943 (const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.HashSet`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityController>::get_Count()
inline int32_t HashSet_1_get_Count_m4695EFEF734593458C61F74A1CFC630896A38A07_inline (HashSet_1_t6C975DF0A435FF942855BEA5D8D5ACD2A365DEF5* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (HashSet_1_t6C975DF0A435FF942855BEA5D8D5ACD2A365DEF5*, const RuntimeMethod*))HashSet_1_get_Count_m41CC85EEB7855CEFA3BC7A32F115387939318ED3_gshared_inline)(__this, method);
}
// System.Void System.Nullable`1<System.Int32>::.ctor(T)
inline void Nullable_1__ctor_m141FA88563AC0B5179132FB929EABD02C47FF703 (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* __this, int32_t ___value0, const RuntimeMethod* method)
{
	((  void (*) (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28*, int32_t, const RuntimeMethod*))Nullable_1__ctor_m141FA88563AC0B5179132FB929EABD02C47FF703_gshared)(__this, ___value0, method);
}
// System.Collections.Generic.HashSet`1/Enumerator<T> System.Collections.Generic.HashSet`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityController>::GetEnumerator()
inline Enumerator_t2F1D0A4895829A663556DF261FAA05673B05D540 HashSet_1_GetEnumerator_mFD270DB64CA6CFBBEC0204BA3883F03DEB325CCA (HashSet_1_t6C975DF0A435FF942855BEA5D8D5ACD2A365DEF5* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t2F1D0A4895829A663556DF261FAA05673B05D540 (*) (HashSet_1_t6C975DF0A435FF942855BEA5D8D5ACD2A365DEF5*, const RuntimeMethod*))HashSet_1_GetEnumerator_m143B98FEED7E9CABA2C494AB2F04DAD60A504635_gshared)(__this, method);
}
// System.Void System.Collections.Generic.HashSet`1/Enumerator<Microsoft.MixedReality.Toolkit.Input.IMixedRealityController>::Dispose()
inline void Enumerator_Dispose_m71CAA2062645DBD932D8214BDEDB18585DE55A54 (Enumerator_t2F1D0A4895829A663556DF261FAA05673B05D540* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t2F1D0A4895829A663556DF261FAA05673B05D540*, const RuntimeMethod*))Enumerator_Dispose_mFB582AEAA2E73F3128B5571197BEDE256A83F657_gshared)(__this, method);
}
// T System.Collections.Generic.HashSet`1/Enumerator<Microsoft.MixedReality.Toolkit.Input.IMixedRealityController>::get_Current()
inline RuntimeObject* Enumerator_get_Current_m82FE574FEF92EE2D1465259DDBAB99634137B46F_inline (Enumerator_t2F1D0A4895829A663556DF261FAA05673B05D540* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (Enumerator_t2F1D0A4895829A663556DF261FAA05673B05D540*, const RuntimeMethod*))Enumerator_get_Current_m139A176CD271A0532D75BE08DA7831C8C45CE28F_gshared_inline)(__this, method);
}
// System.String Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::get_Description()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* MixedRealityInteractionMapping_get_Description_mB4C6619EF2F1E6AEE57C98A24F2C90A0FBCACD50_inline (MixedRealityInteractionMapping_t10DB776EEA5255542F8F4AF0DC0BC566AF0095E0* __this, const RuntimeMethod* method) ;
// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::get_MixedRealityInputAction()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR MixedRealityInputAction_tD3B6E9CE7F20EFC9D066C519FAB848679FC62486 MixedRealityInteractionMapping_get_MixedRealityInputAction_mE813B3EBBA0A10F64E34EA6E5001D140D81141E9_inline (MixedRealityInteractionMapping_t10DB776EEA5255542F8F4AF0DC0BC566AF0095E0* __this, const RuntimeMethod* method) ;
// System.String Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction::get_Description()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* MixedRealityInputAction_get_Description_m5AD88A40A36F727F7D93C9EF01CE99577686F2F2_inline (MixedRealityInputAction_tD3B6E9CE7F20EFC9D066C519FAB848679FC62486* __this, const RuntimeMethod* method) ;
// Microsoft.MixedReality.Toolkit.Input.DeviceInputType Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::get_InputType()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t MixedRealityInteractionMapping_get_InputType_m431C40AD5149D4817FAA46DC0326A481FE348C8D_inline (MixedRealityInteractionMapping_t10DB776EEA5255542F8F4AF0DC0BC566AF0095E0* __this, const RuntimeMethod* method) ;
// Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::get_PoseData()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR MixedRealityPose_tE60115C271AC50B8C11BA3B404BFCA99C7B2EFF5 MixedRealityInteractionMapping_get_PoseData_m90E4BA2D7413EC29B85B025AEE96C2F7662427B0_inline (MixedRealityInteractionMapping_t10DB776EEA5255542F8F4AF0DC0BC566AF0095E0* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::get_PositionData()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 MixedRealityInteractionMapping_get_PositionData_m189D602B6846B225CBFBAB5C64699469900972E5_inline (MixedRealityInteractionMapping_t10DB776EEA5255542F8F4AF0DC0BC566AF0095E0* __this, const RuntimeMethod* method) ;
// UnityEngine.Quaternion Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::get_RotationData()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 MixedRealityInteractionMapping_get_RotationData_m37593A681A7F3DF462819D9576EF74F8FE7DD43D_inline (MixedRealityInteractionMapping_t10DB776EEA5255542F8F4AF0DC0BC566AF0095E0* __this, const RuntimeMethod* method) ;
// System.Boolean Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::get_BoolData()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool MixedRealityInteractionMapping_get_BoolData_m69F4D6E88FF5DF204C3C38426A2BCD74AB7060CB_inline (MixedRealityInteractionMapping_t10DB776EEA5255542F8F4AF0DC0BC566AF0095E0* __this, const RuntimeMethod* method) ;
// System.Single Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::get_FloatData()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float MixedRealityInteractionMapping_get_FloatData_m427535AC6E511D46014CADA75E2410FA4CE5C903_inline (MixedRealityInteractionMapping_t10DB776EEA5255542F8F4AF0DC0BC566AF0095E0* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2 Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::get_Vector2Data()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 MixedRealityInteractionMapping_get_Vector2Data_m56249B37DF9ADDCEA3D131DB2916014185933C40_inline (MixedRealityInteractionMapping_t10DB776EEA5255542F8F4AF0DC0BC566AF0095E0* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.HashSet`1/Enumerator<Microsoft.MixedReality.Toolkit.Input.IMixedRealityController>::MoveNext()
inline bool Enumerator_MoveNext_m8B090EFB59282696217E0C4BF4772DF044BEBAAB (Enumerator_t2F1D0A4895829A663556DF261FAA05673B05D540* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t2F1D0A4895829A663556DF261FAA05673B05D540*, const RuntimeMethod*))Enumerator_MoveNext_m27565F5ACCCC75C3DD34CC4CAE3E6AEFEB9144A6_gshared)(__this, method);
}
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
// System.Void Microsoft.MixedReality.Toolkit.Tools.Runtime.DisplayInputResult::OnValidate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DisplayInputResult_OnValidate_m467ACC8B2115466A59CD2E42FFE9C65E7A76E4BF (DisplayInputResult_t1C00E6FCE3ED21107AF9BC77A5BCC2E3B8F36182* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AxisType_tB348B2B7E813A5E50E48FF0B55E0751351C67FA9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1653F9A5516D70F1640148CADCC97C572A62936F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1FB9018D8BFC0FACF068B1067EF9E96C35FED1FE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF3193468E3E53BE1E41883B70A00F57ABFA77BFA);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// if (displayType == DisplayType.InputAxes)
		int32_t L_0 = __this->___displayType_8;
		if (L_0)
		{
			goto IL_0080;
		}
	}
	{
		// switch (inputType)
		int32_t L_1 = __this->___inputType_5;
		V_0 = L_1;
		int32_t L_2 = V_0;
		switch (L_2)
		{
			case 0:
			{
				goto IL_0074;
			}
			case 1:
			{
				goto IL_0094;
			}
			case 2:
			{
				goto IL_004d;
			}
			case 3:
			{
				goto IL_0026;
			}
		}
	}
	{
		return;
	}

IL_0026:
	{
		// name = $"{inputType}{axisNumber}";
		int32_t L_3 = __this->___inputType_5;
		int32_t L_4 = L_3;
		RuntimeObject* L_5 = Box(AxisType_tB348B2B7E813A5E50E48FF0B55E0751351C67FA9_il2cpp_TypeInfo_var, &L_4);
		int32_t L_6 = __this->___axisNumber_6;
		int32_t L_7 = L_6;
		RuntimeObject* L_8 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_7);
		String_t* L_9;
		L_9 = String_Format_m9499958F4B0BB6089C75760AB647AB3CA4D55806(_stringLiteral1FB9018D8BFC0FACF068B1067EF9E96C35FED1FE, L_5, L_8, NULL);
		Object_set_name_mC79E6DC8FFD72479C90F0C4CC7F42A0FEAF5AE47(__this, L_9, NULL);
		// break;
		return;
	}

IL_004d:
	{
		// name = $"{inputType}{buttonNumber}";
		int32_t L_10 = __this->___inputType_5;
		int32_t L_11 = L_10;
		RuntimeObject* L_12 = Box(AxisType_tB348B2B7E813A5E50E48FF0B55E0751351C67FA9_il2cpp_TypeInfo_var, &L_11);
		int32_t L_13 = __this->___buttonNumber_7;
		int32_t L_14 = L_13;
		RuntimeObject* L_15 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_14);
		String_t* L_16;
		L_16 = String_Format_m9499958F4B0BB6089C75760AB647AB3CA4D55806(_stringLiteral1FB9018D8BFC0FACF068B1067EF9E96C35FED1FE, L_12, L_15, NULL);
		Object_set_name_mC79E6DC8FFD72479C90F0C4CC7F42A0FEAF5AE47(__this, L_16, NULL);
		// break;
		return;
	}

IL_0074:
	{
		// name = "AllActiveAxes";
		Object_set_name_mC79E6DC8FFD72479C90F0C4CC7F42A0FEAF5AE47(__this, _stringLiteralF3193468E3E53BE1E41883B70A00F57ABFA77BFA, NULL);
		// break;
		return;
	}

IL_0080:
	{
		// else if (displayType == DisplayType.JoystickNames)
		int32_t L_17 = __this->___displayType_8;
		if ((!(((uint32_t)L_17) == ((uint32_t)1))))
		{
			goto IL_0094;
		}
	}
	{
		// name = "JoystickNames";
		Object_set_name_mC79E6DC8FFD72479C90F0C4CC7F42A0FEAF5AE47(__this, _stringLiteral1653F9A5516D70F1640148CADCC97C572A62936F, NULL);
	}

IL_0094:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Tools.Runtime.DisplayInputResult::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DisplayInputResult_Update_m805BFE83BF4A21410D82657D278BF293349C1B26 (DisplayInputResult_t1C00E6FCE3ED21107AF9BC77A5BCC2E3B8F36182* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enum_TryParse_TisKeyCode_t75B9ECCC26D858F55040DDFF9523681E996D17E9_mC510628C37E0DEDE6B0FA0B2AE4D865B0953FA51_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral00B28FF06B788B9B67C6B259800F404F9F3761FD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0C2FD7F14008DC5A9704A71B5926F425273F6DFC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral10F4DE454A7A7EDC63FFA330FCC744864D606F50);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2FB1273DCF301695744F96DE3A31C5DBDDB6DBB0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral80E8E33CFC68B6519B4050770677835060BEB5E8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral87E261F2D88CAAEDCD99354542725097ED590502);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB69CD88CA44BBA6464A30CAFD46811605F0109DF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCB6CE6B89F14D219960135E95D3D3A31031318C1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD098894B7802A8D5E690D40161CCBD3A3B74AB08);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDAF2BD03270A51BF9C135F3694DCAD2D3E66F465);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	float V_3 = 0.0f;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	bool V_6 = false;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* V_7 = NULL;
	int32_t V_8 = 0;
	RuntimeObject* G_B22_0 = NULL;
	String_t* G_B22_1 = NULL;
	TextMesh_t7E1981C7B03E50D5CA5A3AD5B0D9BB0AB6EE91F8* G_B22_2 = NULL;
	RuntimeObject* G_B21_0 = NULL;
	String_t* G_B21_1 = NULL;
	TextMesh_t7E1981C7B03E50D5CA5A3AD5B0D9BB0AB6EE91F8* G_B21_2 = NULL;
	String_t* G_B23_0 = NULL;
	RuntimeObject* G_B23_1 = NULL;
	String_t* G_B23_2 = NULL;
	TextMesh_t7E1981C7B03E50D5CA5A3AD5B0D9BB0AB6EE91F8* G_B23_3 = NULL;
	{
		// if (displayTextMesh == null)
		TextMesh_t7E1981C7B03E50D5CA5A3AD5B0D9BB0AB6EE91F8* L_0 = __this->___displayTextMesh_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_000f;
		}
	}
	{
		// return;
		return;
	}

IL_000f:
	{
		// if (displayType == DisplayType.InputAxes)
		int32_t L_2 = __this->___displayType_8;
		if (L_2)
		{
			goto IL_0198;
		}
	}
	{
		// switch (inputType)
		int32_t L_3 = __this->___inputType_5;
		V_1 = L_3;
		int32_t L_4 = V_1;
		switch (L_4)
		{
			case 0:
			{
				goto IL_00c5;
			}
			case 1:
			{
				goto IL_0203;
			}
			case 2:
			{
				goto IL_0078;
			}
			case 3:
			{
				goto IL_0038;
			}
		}
	}
	{
		return;
	}

IL_0038:
	{
		// displayTextMesh.text = $"Axis {axisNumber}: {UnityEngine.Input.GetAxis($"AXIS_{axisNumber}")}";
		TextMesh_t7E1981C7B03E50D5CA5A3AD5B0D9BB0AB6EE91F8* L_5 = __this->___displayTextMesh_4;
		int32_t L_6 = __this->___axisNumber_6;
		int32_t L_7 = L_6;
		RuntimeObject* L_8 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_7);
		int32_t L_9 = __this->___axisNumber_6;
		int32_t L_10 = L_9;
		RuntimeObject* L_11 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_10);
		String_t* L_12;
		L_12 = String_Format_m8C122B26BC5AA10E2550AECA16E57DAE10F07E30(_stringLiteral10F4DE454A7A7EDC63FFA330FCC744864D606F50, L_11, NULL);
		float L_13;
		L_13 = Input_GetAxis_m1F49B26F24032F45FB4583C95FB24E6771A161D4(L_12, NULL);
		float L_14 = L_13;
		RuntimeObject* L_15 = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &L_14);
		String_t* L_16;
		L_16 = String_Format_m9499958F4B0BB6089C75760AB647AB3CA4D55806(_stringLiteralD098894B7802A8D5E690D40161CCBD3A3B74AB08, L_8, L_15, NULL);
		NullCheck(L_5);
		TextMesh_set_text_mDF79D39638ED82797D0B0B3BB9E6B10712F8EA9E(L_5, L_16, NULL);
		// break;
		return;
	}

IL_0078:
	{
		// if (Enum.TryParse($"JoystickButton{buttonNumber}", out KeyCode keyCode))
		int32_t L_17 = __this->___buttonNumber_7;
		int32_t L_18 = L_17;
		RuntimeObject* L_19 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_18);
		String_t* L_20;
		L_20 = String_Format_m8C122B26BC5AA10E2550AECA16E57DAE10F07E30(_stringLiteralCB6CE6B89F14D219960135E95D3D3A31031318C1, L_19, NULL);
		il2cpp_codegen_runtime_class_init_inline(Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_il2cpp_TypeInfo_var);
		bool L_21;
		L_21 = Enum_TryParse_TisKeyCode_t75B9ECCC26D858F55040DDFF9523681E996D17E9_mC510628C37E0DEDE6B0FA0B2AE4D865B0953FA51(L_20, (&V_0), Enum_TryParse_TisKeyCode_t75B9ECCC26D858F55040DDFF9523681E996D17E9_mC510628C37E0DEDE6B0FA0B2AE4D865B0953FA51_RuntimeMethod_var);
		if (!L_21)
		{
			goto IL_0203;
		}
	}
	{
		// displayTextMesh.text = $"Button {buttonNumber}: {UnityEngine.Input.GetKey(keyCode)}";
		TextMesh_t7E1981C7B03E50D5CA5A3AD5B0D9BB0AB6EE91F8* L_22 = __this->___displayTextMesh_4;
		int32_t L_23 = __this->___buttonNumber_7;
		int32_t L_24 = L_23;
		RuntimeObject* L_25 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_24);
		int32_t L_26 = V_0;
		bool L_27;
		L_27 = Input_GetKey_m0BF0499CADC378F02B6BEE2399FB945AB929B81A(L_26, NULL);
		bool L_28 = L_27;
		RuntimeObject* L_29 = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &L_28);
		String_t* L_30;
		L_30 = String_Format_m9499958F4B0BB6089C75760AB647AB3CA4D55806(_stringLiteralB69CD88CA44BBA6464A30CAFD46811605F0109DF, L_25, L_29, NULL);
		NullCheck(L_22);
		TextMesh_set_text_mDF79D39638ED82797D0B0B3BB9E6B10712F8EA9E(L_22, L_30, NULL);
		// break;
		return;
	}

IL_00c5:
	{
		// displayTextMesh.text = "All active:\n";
		TextMesh_t7E1981C7B03E50D5CA5A3AD5B0D9BB0AB6EE91F8* L_31 = __this->___displayTextMesh_4;
		NullCheck(L_31);
		TextMesh_set_text_mDF79D39638ED82797D0B0B3BB9E6B10712F8EA9E(L_31, _stringLiteral2FB1273DCF301695744F96DE3A31C5DBDDB6DBB0, NULL);
		// for (int i = 1; i <= UnityInputAxisCount; i++)
		V_2 = 1;
		goto IL_012c;
	}

IL_00d9:
	{
		// float reading = UnityEngine.Input.GetAxis($"AXIS_{i}");
		int32_t L_32 = V_2;
		int32_t L_33 = L_32;
		RuntimeObject* L_34 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_33);
		String_t* L_35;
		L_35 = String_Format_m8C122B26BC5AA10E2550AECA16E57DAE10F07E30(_stringLiteral10F4DE454A7A7EDC63FFA330FCC744864D606F50, L_34, NULL);
		float L_36;
		L_36 = Input_GetAxis_m1F49B26F24032F45FB4583C95FB24E6771A161D4(L_35, NULL);
		V_3 = L_36;
		// if (reading != 0.0)
		float L_37 = V_3;
		if ((((double)((double)L_37)) == ((double)(0.0))))
		{
			goto IL_0128;
		}
	}
	{
		// displayTextMesh.text += $"Axis {i}: {reading}\n";
		TextMesh_t7E1981C7B03E50D5CA5A3AD5B0D9BB0AB6EE91F8* L_38 = __this->___displayTextMesh_4;
		TextMesh_t7E1981C7B03E50D5CA5A3AD5B0D9BB0AB6EE91F8* L_39 = L_38;
		NullCheck(L_39);
		String_t* L_40;
		L_40 = TextMesh_get_text_mB3E900AED17390DE50DFC984428BC29EB1CA60A2(L_39, NULL);
		int32_t L_41 = V_2;
		int32_t L_42 = L_41;
		RuntimeObject* L_43 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_42);
		float L_44 = V_3;
		float L_45 = L_44;
		RuntimeObject* L_46 = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &L_45);
		String_t* L_47;
		L_47 = String_Format_m9499958F4B0BB6089C75760AB647AB3CA4D55806(_stringLiteral87E261F2D88CAAEDCD99354542725097ED590502, L_43, L_46, NULL);
		String_t* L_48;
		L_48 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(L_40, L_47, NULL);
		NullCheck(L_39);
		TextMesh_set_text_mDF79D39638ED82797D0B0B3BB9E6B10712F8EA9E(L_39, L_48, NULL);
	}

IL_0128:
	{
		// for (int i = 1; i <= UnityInputAxisCount; i++)
		int32_t L_49 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_49, 1));
	}

IL_012c:
	{
		// for (int i = 1; i <= UnityInputAxisCount; i++)
		int32_t L_50 = V_2;
		if ((((int32_t)L_50) <= ((int32_t)((int32_t)28))))
		{
			goto IL_00d9;
		}
	}
	{
		// for (int i = 0; i < UnityInputButtonCount; i++)
		V_4 = 0;
		goto IL_0191;
	}

IL_0136:
	{
		// if (Enum.TryParse($"JoystickButton{i}", out KeyCode buttonCode))
		int32_t L_51 = V_4;
		int32_t L_52 = L_51;
		RuntimeObject* L_53 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_52);
		String_t* L_54;
		L_54 = String_Format_m8C122B26BC5AA10E2550AECA16E57DAE10F07E30(_stringLiteralCB6CE6B89F14D219960135E95D3D3A31031318C1, L_53, NULL);
		il2cpp_codegen_runtime_class_init_inline(Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_il2cpp_TypeInfo_var);
		bool L_55;
		L_55 = Enum_TryParse_TisKeyCode_t75B9ECCC26D858F55040DDFF9523681E996D17E9_mC510628C37E0DEDE6B0FA0B2AE4D865B0953FA51(L_54, (&V_5), Enum_TryParse_TisKeyCode_t75B9ECCC26D858F55040DDFF9523681E996D17E9_mC510628C37E0DEDE6B0FA0B2AE4D865B0953FA51_RuntimeMethod_var);
		if (!L_55)
		{
			goto IL_018b;
		}
	}
	{
		// bool isPressed = UnityEngine.Input.GetKey(buttonCode);
		int32_t L_56 = V_5;
		bool L_57;
		L_57 = Input_GetKey_m0BF0499CADC378F02B6BEE2399FB945AB929B81A(L_56, NULL);
		V_6 = L_57;
		// if (isPressed)
		bool L_58 = V_6;
		if (!L_58)
		{
			goto IL_018b;
		}
	}
	{
		// displayTextMesh.text += $"Button {i}: {isPressed}\n";
		TextMesh_t7E1981C7B03E50D5CA5A3AD5B0D9BB0AB6EE91F8* L_59 = __this->___displayTextMesh_4;
		TextMesh_t7E1981C7B03E50D5CA5A3AD5B0D9BB0AB6EE91F8* L_60 = L_59;
		NullCheck(L_60);
		String_t* L_61;
		L_61 = TextMesh_get_text_mB3E900AED17390DE50DFC984428BC29EB1CA60A2(L_60, NULL);
		int32_t L_62 = V_4;
		int32_t L_63 = L_62;
		RuntimeObject* L_64 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_63);
		bool L_65 = V_6;
		bool L_66 = L_65;
		RuntimeObject* L_67 = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &L_66);
		String_t* L_68;
		L_68 = String_Format_m9499958F4B0BB6089C75760AB647AB3CA4D55806(_stringLiteral80E8E33CFC68B6519B4050770677835060BEB5E8, L_64, L_67, NULL);
		String_t* L_69;
		L_69 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(L_61, L_68, NULL);
		NullCheck(L_60);
		TextMesh_set_text_mDF79D39638ED82797D0B0B3BB9E6B10712F8EA9E(L_60, L_69, NULL);
	}

IL_018b:
	{
		// for (int i = 0; i < UnityInputButtonCount; i++)
		int32_t L_70 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_70, 1));
	}

IL_0191:
	{
		// for (int i = 0; i < UnityInputButtonCount; i++)
		int32_t L_71 = V_4;
		if ((((int32_t)L_71) < ((int32_t)((int32_t)20))))
		{
			goto IL_0136;
		}
	}
	{
		// break;
		return;
	}

IL_0198:
	{
		// string[] joystickNames = UnityEngine.Input.GetJoystickNames();
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_72;
		L_72 = Input_GetJoystickNames_m398DA6DE3281D480F35E06AA92F746D4C82C9DC5(NULL);
		V_7 = L_72;
		// displayTextMesh.text = $"Detected {joystickNames.Length} controller{(joystickNames.Length != 1 ? "s" : "")}:\n";
		TextMesh_t7E1981C7B03E50D5CA5A3AD5B0D9BB0AB6EE91F8* L_73 = __this->___displayTextMesh_4;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_74 = V_7;
		NullCheck(L_74);
		int32_t L_75 = ((int32_t)(((RuntimeArray*)L_74)->max_length));
		RuntimeObject* L_76 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_75);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_77 = V_7;
		NullCheck(L_77);
		G_B21_0 = L_76;
		G_B21_1 = _stringLiteral0C2FD7F14008DC5A9704A71B5926F425273F6DFC;
		G_B21_2 = L_73;
		if ((!(((uint32_t)((int32_t)(((RuntimeArray*)L_77)->max_length))) == ((uint32_t)1))))
		{
			G_B22_0 = L_76;
			G_B22_1 = _stringLiteral0C2FD7F14008DC5A9704A71B5926F425273F6DFC;
			G_B22_2 = L_73;
			goto IL_01c1;
		}
	}
	{
		G_B23_0 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		G_B23_1 = G_B21_0;
		G_B23_2 = G_B21_1;
		G_B23_3 = G_B21_2;
		goto IL_01c6;
	}

IL_01c1:
	{
		G_B23_0 = _stringLiteralDAF2BD03270A51BF9C135F3694DCAD2D3E66F465;
		G_B23_1 = G_B22_0;
		G_B23_2 = G_B22_1;
		G_B23_3 = G_B22_2;
	}

IL_01c6:
	{
		String_t* L_78;
		L_78 = String_Format_m9499958F4B0BB6089C75760AB647AB3CA4D55806(G_B23_2, G_B23_1, G_B23_0, NULL);
		NullCheck(G_B23_3);
		TextMesh_set_text_mDF79D39638ED82797D0B0B3BB9E6B10712F8EA9E(G_B23_3, L_78, NULL);
		// for (int i = 0; i < joystickNames.Length; i++)
		V_8 = 0;
		goto IL_01fb;
	}

IL_01d5:
	{
		// displayTextMesh.text += $"{joystickNames[i]}\n";
		TextMesh_t7E1981C7B03E50D5CA5A3AD5B0D9BB0AB6EE91F8* L_79 = __this->___displayTextMesh_4;
		TextMesh_t7E1981C7B03E50D5CA5A3AD5B0D9BB0AB6EE91F8* L_80 = L_79;
		NullCheck(L_80);
		String_t* L_81;
		L_81 = TextMesh_get_text_mB3E900AED17390DE50DFC984428BC29EB1CA60A2(L_80, NULL);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_82 = V_7;
		int32_t L_83 = V_8;
		NullCheck(L_82);
		int32_t L_84 = L_83;
		String_t* L_85 = (L_82)->GetAt(static_cast<il2cpp_array_size_t>(L_84));
		String_t* L_86;
		L_86 = String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0(L_81, L_85, _stringLiteral00B28FF06B788B9B67C6B259800F404F9F3761FD, NULL);
		NullCheck(L_80);
		TextMesh_set_text_mDF79D39638ED82797D0B0B3BB9E6B10712F8EA9E(L_80, L_86, NULL);
		// for (int i = 0; i < joystickNames.Length; i++)
		int32_t L_87 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add(L_87, 1));
	}

IL_01fb:
	{
		// for (int i = 0; i < joystickNames.Length; i++)
		int32_t L_88 = V_8;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_89 = V_7;
		NullCheck(L_89);
		if ((((int32_t)L_88) < ((int32_t)((int32_t)(((RuntimeArray*)L_89)->max_length)))))
		{
			goto IL_01d5;
		}
	}

IL_0203:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Tools.Runtime.DisplayInputResult::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DisplayInputResult__ctor_m61F16F2BF5AD4A14CDA25466CD9D69ED6CA11DEB (DisplayInputResult_t1C00E6FCE3ED21107AF9BC77A5BCC2E3B8F36182* __this, const RuntimeMethod* method) 
{
	{
		// private int axisNumber = 1;
		__this->___axisNumber_6 = 1;
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
// System.Void Microsoft.MixedReality.Toolkit.Tools.Runtime.ListInputFeatureUsages::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ListInputFeatureUsages_Update_mCEFD64C606C118B9FA37C259D18C773AFBFC4B95 (ListInputFeatureUsages_tD00B5F00B5339AF25C3371FEBEB352C972E7C9A3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_ToList_TisInputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD_m55A910C86334CDED2CF47E7BAF47636F70965860_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Union_TisInputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD_m4C37F90EBF7B96B1BE9A69A5402E8F96B8BB2CC8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m877E93F2B90ACA5C41B6F351E477BB26D9CCA972_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mD0B06E796C9B5956D3AFA9320F455C5F3DCBEBF1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m6EAF4461E14CE5F9CB03227860CC9713AA1B0BD3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponentInChildren_TisTextMesh_t7E1981C7B03E50D5CA5A3AD5B0D9BB0AB6EE91F8_m51D5BCF76E23E21ACAB1790A8E739AAE6328E395_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputFeatureUsage_As_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFD6F2D908C709DA57082D70B7B9F79F7C9E45516_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputFeatureUsage_As_TisInputTrackingState_tCBE220E8A09D62DA1C6BD96F76943FE90F15778D_m8B233B751F557C5278383CD5C038C33AC7D6B308_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputFeatureUsage_As_TisQuaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_mC6A5F22BDA5183528F34A3C045584DD6D1F71A85_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputFeatureUsage_As_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m2DBAFEB1C83704F62C7A889D7C8EDDE5091B1FCD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputFeatureUsage_As_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_m9B758581CE3336E00136897833C090D2E923FB4F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputFeatureUsage_As_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m9F82A2C55FF9B1D2B52D7B8FCD39DFA4705B52B5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputFeatureUsage_As_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m0C661D4C160B057F77F0F3E0A4E8C43BA2E4593F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputTrackingState_tCBE220E8A09D62DA1C6BD96F76943FE90F15778D_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputTrackingState_tCBE220E8A09D62DA1C6BD96F76943FE90F15778D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mA5A50B7F4881D91E55E1085DD477BEBFCFB94456_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_mD027F2A88B0D91F17C878C8C4E07FBB9395EBE7C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m0F3CFBBA46B1A2C1AE03AE6D34CED399412D542C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m9C3EC7FE1A9401268B3C9761A4D96A37197AD0E7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mC05067F62DBD6D4C8E9788C5A8BEC568D8043705_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m28309A8FBF51487121572D19B38937DD5B8572BB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mB0ED54544433CE428ACEC0FE2E6FEE53E11EE6D2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m002192C406088F7BA156339AAA9B1BB5D69BE934_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral00B28FF06B788B9B67C6B259800F404F9F3761FD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral483E1DEC34B9D5362E7384C9F67FEBDC4970498B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral876C4B39B6E4D0187090400768899C71D99DE90D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBB47B58026352318D44CEC93932BDFB273FEAF1C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBD2155E54D0A0EF69D6B035ACE4FB0D1E5C8A136);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC2ABD53443E87B1D4332B55DE89F3F4C04D71253);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCA604168AB048809605F0545853F2D2C30960F1F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDAF2BD03270A51BF9C135F3694DCAD2D3E66F465);
		s_Il2CppMethodInitialized = true;
	}
	List_1_tB66D13E0427CA48C600AEA4DBA5B173C3734C6CE* V_0 = NULL;
	int32_t V_1 = 0;
	bool V_2 = false;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	TextMesh_t7E1981C7B03E50D5CA5A3AD5B0D9BB0AB6EE91F8* V_5 = NULL;
	InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD V_6;
	memset((&V_6), 0, sizeof(V_6));
	bool V_7 = false;
	TextMesh_t7E1981C7B03E50D5CA5A3AD5B0D9BB0AB6EE91F8* V_8 = NULL;
	Enumerator_t80524DF0E134D5C143E44173399F812156A31C8D V_9;
	memset((&V_9), 0, sizeof(V_9));
	InputFeatureUsage_t1E251DC4F8CD697080F0F5D98388955AF8B87599 V_10;
	memset((&V_10), 0, sizeof(V_10));
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* V_11 = NULL;
	float V_12 = 0.0f;
	bool V_13 = false;
	uint32_t V_14 = 0;
	float V_15 = 0.0f;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_16;
	memset((&V_16), 0, sizeof(V_16));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_17;
	memset((&V_17), 0, sizeof(V_17));
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_18;
	memset((&V_18), 0, sizeof(V_18));
	uint32_t V_19 = 0;
	RuntimeObject* G_B8_0 = NULL;
	String_t* G_B8_1 = NULL;
	TextMesh_t7E1981C7B03E50D5CA5A3AD5B0D9BB0AB6EE91F8* G_B8_2 = NULL;
	RuntimeObject* G_B5_0 = NULL;
	String_t* G_B5_1 = NULL;
	TextMesh_t7E1981C7B03E50D5CA5A3AD5B0D9BB0AB6EE91F8* G_B5_2 = NULL;
	RuntimeObject* G_B7_0 = NULL;
	String_t* G_B7_1 = NULL;
	TextMesh_t7E1981C7B03E50D5CA5A3AD5B0D9BB0AB6EE91F8* G_B7_2 = NULL;
	RuntimeObject* G_B6_0 = NULL;
	String_t* G_B6_1 = NULL;
	TextMesh_t7E1981C7B03E50D5CA5A3AD5B0D9BB0AB6EE91F8* G_B6_2 = NULL;
	String_t* G_B9_0 = NULL;
	RuntimeObject* G_B9_1 = NULL;
	String_t* G_B9_2 = NULL;
	TextMesh_t7E1981C7B03E50D5CA5A3AD5B0D9BB0AB6EE91F8* G_B9_3 = NULL;
	{
		// if (listInputDevicesTextMesh == null || gridObjectCollection == null || displayFeatureUsagesPrefab == null)
		TextMesh_t7E1981C7B03E50D5CA5A3AD5B0D9BB0AB6EE91F8* L_0 = __this->___listInputDevicesTextMesh_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (L_1)
		{
			goto IL_002a;
		}
	}
	{
		GridObjectCollection_t4305434DFFC4F42300B547540DE4C36DA2DE4B2A* L_2 = __this->___gridObjectCollection_5;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_2, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (L_3)
		{
			goto IL_002a;
		}
	}
	{
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = __this->___displayFeatureUsagesPrefab_6;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_4, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_5)
		{
			goto IL_002b;
		}
	}

IL_002a:
	{
		// return;
		return;
	}

IL_002b:
	{
		// InputDevices.GetDevicesWithCharacteristics(InputDeviceCharacteristics.Left, leftInputDevices);
		List_1_tB66D13E0427CA48C600AEA4DBA5B173C3734C6CE* L_6 = __this->___leftInputDevices_7;
		InputDevices_GetDevicesWithCharacteristics_m2F1785592FF66FB69D72FFE1C1B821D4BD64094A(((int32_t)256), L_6, NULL);
		// InputDevices.GetDevicesWithCharacteristics(InputDeviceCharacteristics.Right, rightInputDevices);
		List_1_tB66D13E0427CA48C600AEA4DBA5B173C3734C6CE* L_7 = __this->___rightInputDevices_8;
		InputDevices_GetDevicesWithCharacteristics_m2F1785592FF66FB69D72FFE1C1B821D4BD64094A(((int32_t)512), L_7, NULL);
		// List<InputDevice> inputDevices = leftInputDevices.Union(rightInputDevices).ToList();
		List_1_tB66D13E0427CA48C600AEA4DBA5B173C3734C6CE* L_8 = __this->___leftInputDevices_7;
		List_1_tB66D13E0427CA48C600AEA4DBA5B173C3734C6CE* L_9 = __this->___rightInputDevices_8;
		RuntimeObject* L_10;
		L_10 = Enumerable_Union_TisInputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD_m4C37F90EBF7B96B1BE9A69A5402E8F96B8BB2CC8(L_8, L_9, Enumerable_Union_TisInputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD_m4C37F90EBF7B96B1BE9A69A5402E8F96B8BB2CC8_RuntimeMethod_var);
		List_1_tB66D13E0427CA48C600AEA4DBA5B173C3734C6CE* L_11;
		L_11 = Enumerable_ToList_TisInputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD_m55A910C86334CDED2CF47E7BAF47636F70965860(L_10, Enumerable_ToList_TisInputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD_m55A910C86334CDED2CF47E7BAF47636F70965860_RuntimeMethod_var);
		V_0 = L_11;
		// int sourceCount = inputDevices.Count;
		List_1_tB66D13E0427CA48C600AEA4DBA5B173C3734C6CE* L_12 = V_0;
		NullCheck(L_12);
		int32_t L_13;
		L_13 = List_1_get_Count_m9C3EC7FE1A9401268B3C9761A4D96A37197AD0E7_inline(L_12, List_1_get_Count_m9C3EC7FE1A9401268B3C9761A4D96A37197AD0E7_RuntimeMethod_var);
		V_1 = L_13;
		// listInputDevicesTextMesh.text = $"Detected {sourceCount} input source{(sourceCount > 1 ? "s:" : sourceCount != 0 ? ":" : "s")}\n";
		TextMesh_t7E1981C7B03E50D5CA5A3AD5B0D9BB0AB6EE91F8* L_14 = __this->___listInputDevicesTextMesh_4;
		int32_t L_15 = V_1;
		int32_t L_16 = L_15;
		RuntimeObject* L_17 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_16);
		int32_t L_18 = V_1;
		G_B5_0 = L_17;
		G_B5_1 = _stringLiteralBB47B58026352318D44CEC93932BDFB273FEAF1C;
		G_B5_2 = L_14;
		if ((((int32_t)L_18) > ((int32_t)1)))
		{
			G_B8_0 = L_17;
			G_B8_1 = _stringLiteralBB47B58026352318D44CEC93932BDFB273FEAF1C;
			G_B8_2 = L_14;
			goto IL_008f;
		}
	}
	{
		int32_t L_19 = V_1;
		G_B6_0 = G_B5_0;
		G_B6_1 = G_B5_1;
		G_B6_2 = G_B5_2;
		if (L_19)
		{
			G_B7_0 = G_B5_0;
			G_B7_1 = G_B5_1;
			G_B7_2 = G_B5_2;
			goto IL_0088;
		}
	}
	{
		G_B9_0 = _stringLiteralDAF2BD03270A51BF9C135F3694DCAD2D3E66F465;
		G_B9_1 = G_B6_0;
		G_B9_2 = G_B6_1;
		G_B9_3 = G_B6_2;
		goto IL_0094;
	}

IL_0088:
	{
		G_B9_0 = _stringLiteral876C4B39B6E4D0187090400768899C71D99DE90D;
		G_B9_1 = G_B7_0;
		G_B9_2 = G_B7_1;
		G_B9_3 = G_B7_2;
		goto IL_0094;
	}

IL_008f:
	{
		G_B9_0 = _stringLiteralCA604168AB048809605F0545853F2D2C30960F1F;
		G_B9_1 = G_B8_0;
		G_B9_2 = G_B8_1;
		G_B9_3 = G_B8_2;
	}

IL_0094:
	{
		String_t* L_20;
		L_20 = String_Format_m9499958F4B0BB6089C75760AB647AB3CA4D55806(G_B9_2, G_B9_1, G_B9_0, NULL);
		NullCheck(G_B9_3);
		TextMesh_set_text_mDF79D39638ED82797D0B0B3BB9E6B10712F8EA9E(G_B9_3, L_20, NULL);
		// bool collectionNeedsUpdating = false;
		V_2 = (bool)0;
		// for (int i = displayFeatureUsagesTextMeshes.Count; i < sourceCount; i++)
		List_1_t32CCFF13113DCEF594E35706966E2F153D513750* L_21 = __this->___displayFeatureUsagesTextMeshes_10;
		NullCheck(L_21);
		int32_t L_22;
		L_22 = List_1_get_Count_mC05067F62DBD6D4C8E9788C5A8BEC568D8043705_inline(L_21, List_1_get_Count_mC05067F62DBD6D4C8E9788C5A8BEC568D8043705_RuntimeMethod_var);
		V_3 = L_22;
		goto IL_00da;
	}

IL_00ae:
	{
		// displayFeatureUsagesTextMeshes.Add(Instantiate(displayFeatureUsagesPrefab, gameObject.transform).GetComponentInChildren<TextMesh>());
		List_1_t32CCFF13113DCEF594E35706966E2F153D513750* L_23 = __this->___displayFeatureUsagesTextMeshes_10;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_24 = __this->___displayFeatureUsagesPrefab_6;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_25;
		L_25 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_25);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_26;
		L_26 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_25, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_27;
		L_27 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m002192C406088F7BA156339AAA9B1BB5D69BE934(L_24, L_26, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m002192C406088F7BA156339AAA9B1BB5D69BE934_RuntimeMethod_var);
		NullCheck(L_27);
		TextMesh_t7E1981C7B03E50D5CA5A3AD5B0D9BB0AB6EE91F8* L_28;
		L_28 = GameObject_GetComponentInChildren_TisTextMesh_t7E1981C7B03E50D5CA5A3AD5B0D9BB0AB6EE91F8_m51D5BCF76E23E21ACAB1790A8E739AAE6328E395(L_27, GameObject_GetComponentInChildren_TisTextMesh_t7E1981C7B03E50D5CA5A3AD5B0D9BB0AB6EE91F8_m51D5BCF76E23E21ACAB1790A8E739AAE6328E395_RuntimeMethod_var);
		NullCheck(L_23);
		List_1_Add_mA5A50B7F4881D91E55E1085DD477BEBFCFB94456_inline(L_23, L_28, List_1_Add_mA5A50B7F4881D91E55E1085DD477BEBFCFB94456_RuntimeMethod_var);
		// collectionNeedsUpdating = true;
		V_2 = (bool)1;
		// for (int i = displayFeatureUsagesTextMeshes.Count; i < sourceCount; i++)
		int32_t L_29 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_29, 1));
	}

IL_00da:
	{
		// for (int i = displayFeatureUsagesTextMeshes.Count; i < sourceCount; i++)
		int32_t L_30 = V_3;
		int32_t L_31 = V_1;
		if ((((int32_t)L_30) < ((int32_t)L_31)))
		{
			goto IL_00ae;
		}
	}
	{
		// for (int i = 0; i < displayFeatureUsagesTextMeshes.Count; i++)
		V_4 = 0;
		goto IL_0521;
	}

IL_00e6:
	{
		// TextMesh textMesh = displayFeatureUsagesTextMeshes[i];
		List_1_t32CCFF13113DCEF594E35706966E2F153D513750* L_32 = __this->___displayFeatureUsagesTextMeshes_10;
		int32_t L_33 = V_4;
		NullCheck(L_32);
		TextMesh_t7E1981C7B03E50D5CA5A3AD5B0D9BB0AB6EE91F8* L_34;
		L_34 = List_1_get_Item_m28309A8FBF51487121572D19B38937DD5B8572BB(L_32, L_33, List_1_get_Item_m28309A8FBF51487121572D19B38937DD5B8572BB_RuntimeMethod_var);
		V_5 = L_34;
		// if (textMesh == null)
		TextMesh_t7E1981C7B03E50D5CA5A3AD5B0D9BB0AB6EE91F8* L_35 = V_5;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_36;
		L_36 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_35, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (L_36)
		{
			goto IL_051b;
		}
	}
	{
		// if (i >= sourceCount)
		int32_t L_37 = V_4;
		int32_t L_38 = V_1;
		if ((((int32_t)L_37) < ((int32_t)L_38)))
		{
			goto IL_0140;
		}
	}
	{
		// if (textMesh.transform.parent.gameObject.activeSelf)
		TextMesh_t7E1981C7B03E50D5CA5A3AD5B0D9BB0AB6EE91F8* L_39 = V_5;
		NullCheck(L_39);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_40;
		L_40 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_39, NULL);
		NullCheck(L_40);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_41;
		L_41 = Transform_get_parent_m65354E28A4C94EC00EBCF03532F7B0718380791E(L_40, NULL);
		NullCheck(L_41);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_42;
		L_42 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_41, NULL);
		NullCheck(L_42);
		bool L_43;
		L_43 = GameObject_get_activeSelf_m4F3E5240E138B66AAA080EA30759A3D0517DA368(L_42, NULL);
		if (!L_43)
		{
			goto IL_051b;
		}
	}
	{
		// textMesh.transform.parent.gameObject.SetActive(false);
		TextMesh_t7E1981C7B03E50D5CA5A3AD5B0D9BB0AB6EE91F8* L_44 = V_5;
		NullCheck(L_44);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_45;
		L_45 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_44, NULL);
		NullCheck(L_45);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_46;
		L_46 = Transform_get_parent_m65354E28A4C94EC00EBCF03532F7B0718380791E(L_45, NULL);
		NullCheck(L_46);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_47;
		L_47 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_46, NULL);
		NullCheck(L_47);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_47, (bool)0, NULL);
		// collectionNeedsUpdating = true;
		V_2 = (bool)1;
		// continue;
		goto IL_051b;
	}

IL_0140:
	{
		// if (!textMesh.transform.parent.gameObject.activeSelf)
		TextMesh_t7E1981C7B03E50D5CA5A3AD5B0D9BB0AB6EE91F8* L_48 = V_5;
		NullCheck(L_48);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_49;
		L_49 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_48, NULL);
		NullCheck(L_49);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_50;
		L_50 = Transform_get_parent_m65354E28A4C94EC00EBCF03532F7B0718380791E(L_49, NULL);
		NullCheck(L_50);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_51;
		L_51 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_50, NULL);
		NullCheck(L_51);
		bool L_52;
		L_52 = GameObject_get_activeSelf_m4F3E5240E138B66AAA080EA30759A3D0517DA368(L_51, NULL);
		if (L_52)
		{
			goto IL_0171;
		}
	}
	{
		// textMesh.transform.parent.gameObject.SetActive(true);
		TextMesh_t7E1981C7B03E50D5CA5A3AD5B0D9BB0AB6EE91F8* L_53 = V_5;
		NullCheck(L_53);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_54;
		L_54 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_53, NULL);
		NullCheck(L_54);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_55;
		L_55 = Transform_get_parent_m65354E28A4C94EC00EBCF03532F7B0718380791E(L_54, NULL);
		NullCheck(L_55);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_56;
		L_56 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_55, NULL);
		NullCheck(L_56);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_56, (bool)1, NULL);
		// collectionNeedsUpdating = true;
		V_2 = (bool)1;
	}

IL_0171:
	{
		// InputDevice inputDevice = inputDevices[i];
		List_1_tB66D13E0427CA48C600AEA4DBA5B173C3734C6CE* L_57 = V_0;
		int32_t L_58 = V_4;
		NullCheck(L_57);
		InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD L_59;
		L_59 = List_1_get_Item_mB0ED54544433CE428ACEC0FE2E6FEE53E11EE6D2(L_57, L_58, List_1_get_Item_mB0ED54544433CE428ACEC0FE2E6FEE53E11EE6D2_RuntimeMethod_var);
		V_6 = L_59;
		// bool displayNeedsResizing = !textMesh.text.StartsWith(inputDevice.name);
		TextMesh_t7E1981C7B03E50D5CA5A3AD5B0D9BB0AB6EE91F8* L_60 = V_5;
		NullCheck(L_60);
		String_t* L_61;
		L_61 = TextMesh_get_text_mB3E900AED17390DE50DFC984428BC29EB1CA60A2(L_60, NULL);
		String_t* L_62;
		L_62 = InputDevice_get_name_mAEA08A3755E715697022C54227556428CEF4E1CE((&V_6), NULL);
		NullCheck(L_61);
		bool L_63;
		L_63 = String_StartsWith_mF75DBA1EB709811E711B44E26FF919C88A8E65C0(L_61, L_62, NULL);
		V_7 = (bool)((((int32_t)L_63) == ((int32_t)0))? 1 : 0);
		// listInputDevicesTextMesh.text += $"{inputDevice.name} | {inputDevice.manufacturer}\n";
		TextMesh_t7E1981C7B03E50D5CA5A3AD5B0D9BB0AB6EE91F8* L_64 = __this->___listInputDevicesTextMesh_4;
		V_8 = L_64;
		TextMesh_t7E1981C7B03E50D5CA5A3AD5B0D9BB0AB6EE91F8* L_65 = V_8;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_66 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)5);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_67 = L_66;
		TextMesh_t7E1981C7B03E50D5CA5A3AD5B0D9BB0AB6EE91F8* L_68 = V_8;
		NullCheck(L_68);
		String_t* L_69;
		L_69 = TextMesh_get_text_mB3E900AED17390DE50DFC984428BC29EB1CA60A2(L_68, NULL);
		NullCheck(L_67);
		ArrayElementTypeCheck (L_67, L_69);
		(L_67)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)L_69);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_70 = L_67;
		String_t* L_71;
		L_71 = InputDevice_get_name_mAEA08A3755E715697022C54227556428CEF4E1CE((&V_6), NULL);
		NullCheck(L_70);
		ArrayElementTypeCheck (L_70, L_71);
		(L_70)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)L_71);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_72 = L_70;
		NullCheck(L_72);
		ArrayElementTypeCheck (L_72, _stringLiteralBD2155E54D0A0EF69D6B035ACE4FB0D1E5C8A136);
		(L_72)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteralBD2155E54D0A0EF69D6B035ACE4FB0D1E5C8A136);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_73 = L_72;
		String_t* L_74;
		L_74 = InputDevice_get_manufacturer_mABBD3690895EC6A8FE86094CCFA4E0B081C102BB((&V_6), NULL);
		NullCheck(L_73);
		ArrayElementTypeCheck (L_73, L_74);
		(L_73)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)L_74);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_75 = L_73;
		NullCheck(L_75);
		ArrayElementTypeCheck (L_75, _stringLiteral00B28FF06B788B9B67C6B259800F404F9F3761FD);
		(L_75)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral00B28FF06B788B9B67C6B259800F404F9F3761FD);
		String_t* L_76;
		L_76 = String_Concat_m6B0734B65813C8EA093D78E5C2D16534EB6FE8C0(L_75, NULL);
		NullCheck(L_65);
		TextMesh_set_text_mDF79D39638ED82797D0B0B3BB9E6B10712F8EA9E(L_65, L_76, NULL);
		// textMesh.text = $"{inputDevice.name}\n\n";
		TextMesh_t7E1981C7B03E50D5CA5A3AD5B0D9BB0AB6EE91F8* L_77 = V_5;
		String_t* L_78;
		L_78 = InputDevice_get_name_mAEA08A3755E715697022C54227556428CEF4E1CE((&V_6), NULL);
		String_t* L_79;
		L_79 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(L_78, _stringLiteralC2ABD53443E87B1D4332B55DE89F3F4C04D71253, NULL);
		NullCheck(L_77);
		TextMesh_set_text_mDF79D39638ED82797D0B0B3BB9E6B10712F8EA9E(L_77, L_79, NULL);
		// if (inputDevice.TryGetFeatureUsages(featureUsages))
		List_1_t07514DE4C099E3518E38FC1CBA5156D78A6BFE6D* L_80 = __this->___featureUsages_9;
		bool L_81;
		L_81 = InputDevice_TryGetFeatureUsages_mFD9F3CE1465177544260CEB32E1821AA0FDD24AC((&V_6), L_80, NULL);
		if (!L_81)
		{
			goto IL_051b;
		}
	}
	{
		// foreach (InputFeatureUsage inputFeatureUsage in featureUsages)
		List_1_t07514DE4C099E3518E38FC1CBA5156D78A6BFE6D* L_82 = __this->___featureUsages_9;
		NullCheck(L_82);
		Enumerator_t80524DF0E134D5C143E44173399F812156A31C8D L_83;
		L_83 = List_1_GetEnumerator_mD027F2A88B0D91F17C878C8C4E07FBB9395EBE7C(L_82, List_1_GetEnumerator_mD027F2A88B0D91F17C878C8C4E07FBB9395EBE7C_RuntimeMethod_var);
		V_9 = L_83;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_050d:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m877E93F2B90ACA5C41B6F351E477BB26D9CCA972((&V_9), Enumerator_Dispose_m877E93F2B90ACA5C41B6F351E477BB26D9CCA972_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_04ff_1;
			}

IL_0217_1:
			{
				// foreach (InputFeatureUsage inputFeatureUsage in featureUsages)
				InputFeatureUsage_t1E251DC4F8CD697080F0F5D98388955AF8B87599 L_84;
				L_84 = Enumerator_get_Current_m6EAF4461E14CE5F9CB03227860CC9713AA1B0BD3_inline((&V_9), Enumerator_get_Current_m6EAF4461E14CE5F9CB03227860CC9713AA1B0BD3_RuntimeMethod_var);
				V_10 = L_84;
				// if (displayNeedsResizing)
				bool L_85 = V_7;
				if (!L_85)
				{
					goto IL_0285_1;
				}
			}
			{
				// Transform backingPanel = textMesh.gameObject.transform.parent.GetChild(0);
				TextMesh_t7E1981C7B03E50D5CA5A3AD5B0D9BB0AB6EE91F8* L_86 = V_5;
				NullCheck(L_86);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_87;
				L_87 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_86, NULL);
				NullCheck(L_87);
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_88;
				L_88 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_87, NULL);
				NullCheck(L_88);
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_89;
				L_89 = Transform_get_parent_m65354E28A4C94EC00EBCF03532F7B0718380791E(L_88, NULL);
				NullCheck(L_89);
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_90;
				L_90 = Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF(L_89, 0, NULL);
				V_11 = L_90;
				// float backingPanelHeight = BackingPanelMargin + (BackingPanelEntryHeight * (featureUsages.Count + 2)) + BackingPanelMargin;
				List_1_t07514DE4C099E3518E38FC1CBA5156D78A6BFE6D* L_91 = __this->___featureUsages_9;
				NullCheck(L_91);
				int32_t L_92;
				L_92 = List_1_get_Count_m0F3CFBBA46B1A2C1AE03AE6D34CED399412D542C_inline(L_91, List_1_get_Count_m0F3CFBBA46B1A2C1AE03AE6D34CED399412D542C_RuntimeMethod_var);
				V_12 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add((0.0500000007f), ((float)il2cpp_codegen_multiply((0.0299999993f), ((float)((int32_t)il2cpp_codegen_add(L_92, 2))))))), (0.0500000007f)));
				// backingPanel.localScale = new Vector3(backingPanel.localScale.x, backingPanelHeight, backingPanel.localScale.z);
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_93 = V_11;
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_94 = V_11;
				NullCheck(L_94);
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_95;
				L_95 = Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F(L_94, NULL);
				float L_96 = L_95.___x_2;
				float L_97 = V_12;
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_98 = V_11;
				NullCheck(L_98);
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_99;
				L_99 = Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F(L_98, NULL);
				float L_100 = L_99.___z_4;
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_101;
				memset((&L_101), 0, sizeof(L_101));
				Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_101), L_96, L_97, L_100, /*hidden argument*/NULL);
				NullCheck(L_93);
				Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_93, L_101, NULL);
			}

IL_0285_1:
			{
				// textMesh.text += $"{inputFeatureUsage.name}";
				TextMesh_t7E1981C7B03E50D5CA5A3AD5B0D9BB0AB6EE91F8* L_102 = V_5;
				TextMesh_t7E1981C7B03E50D5CA5A3AD5B0D9BB0AB6EE91F8* L_103 = L_102;
				NullCheck(L_103);
				String_t* L_104;
				L_104 = TextMesh_get_text_mB3E900AED17390DE50DFC984428BC29EB1CA60A2(L_103, NULL);
				String_t* L_105;
				L_105 = InputFeatureUsage_get_name_mA51C7B42F66E87B3527CBD061D1E6944058FE085((&V_10), NULL);
				String_t* L_106;
				L_106 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(L_104, L_105, NULL);
				NullCheck(L_103);
				TextMesh_set_text_mDF79D39638ED82797D0B0B3BB9E6B10712F8EA9E(L_103, L_106, NULL);
				// if (inputFeatureUsage.type.Equals(typeof(bool)))
				Type_t* L_107;
				L_107 = InputFeatureUsage_get_type_mD9697C1BFA3EA57E89A23A06019AAB73CB24326D((&V_10), NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_108 = { reinterpret_cast<intptr_t> (Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_109;
				L_109 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_108, NULL);
				NullCheck(L_107);
				bool L_110;
				L_110 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(126 /* System.Boolean System.Type::Equals(System.Type) */, L_107, L_109);
				if (!L_110)
				{
					goto IL_02f3_1;
				}
			}
			{
				// if (inputDevice.TryGetFeatureValue(inputFeatureUsage.As<bool>(), out bool data))
				InputFeatureUsage_1_tE336B2F0B9AC721519BFA17A08D6353FD5221637 L_111;
				L_111 = InputFeatureUsage_As_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFD6F2D908C709DA57082D70B7B9F79F7C9E45516((&V_10), InputFeatureUsage_As_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFD6F2D908C709DA57082D70B7B9F79F7C9E45516_RuntimeMethod_var);
				bool L_112;
				L_112 = InputDevice_TryGetFeatureValue_m24EC3B6C41AE4098269427232AD5F52E786BF884((&V_6), L_111, (&V_13), NULL);
				if (!L_112)
				{
					goto IL_04ff_1;
				}
			}
			{
				// textMesh.text += $": {data}\n";
				TextMesh_t7E1981C7B03E50D5CA5A3AD5B0D9BB0AB6EE91F8* L_113 = V_5;
				TextMesh_t7E1981C7B03E50D5CA5A3AD5B0D9BB0AB6EE91F8* L_114 = L_113;
				NullCheck(L_114);
				String_t* L_115;
				L_115 = TextMesh_get_text_mB3E900AED17390DE50DFC984428BC29EB1CA60A2(L_114, NULL);
				bool L_116 = V_13;
				bool L_117 = L_116;
				RuntimeObject* L_118 = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &L_117);
				String_t* L_119;
				L_119 = String_Format_m8C122B26BC5AA10E2550AECA16E57DAE10F07E30(_stringLiteral483E1DEC34B9D5362E7384C9F67FEBDC4970498B, L_118, NULL);
				String_t* L_120;
				L_120 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(L_115, L_119, NULL);
				NullCheck(L_114);
				TextMesh_set_text_mDF79D39638ED82797D0B0B3BB9E6B10712F8EA9E(L_114, L_120, NULL);
				goto IL_04ff_1;
			}

IL_02f3_1:
			{
				// else if (inputFeatureUsage.type.Equals(typeof(uint)))
				Type_t* L_121;
				L_121 = InputFeatureUsage_get_type_mD9697C1BFA3EA57E89A23A06019AAB73CB24326D((&V_10), NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_122 = { reinterpret_cast<intptr_t> (UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_0_0_0_var) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_123;
				L_123 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_122, NULL);
				NullCheck(L_121);
				bool L_124;
				L_124 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(126 /* System.Boolean System.Type::Equals(System.Type) */, L_121, L_123);
				if (!L_124)
				{
					goto IL_0348_1;
				}
			}
			{
				// if (inputDevice.TryGetFeatureValue(inputFeatureUsage.As<uint>(), out uint data))
				InputFeatureUsage_1_tD73AC74B29139087A83959CB3395A0580A2128AE L_125;
				L_125 = InputFeatureUsage_As_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_m9B758581CE3336E00136897833C090D2E923FB4F((&V_10), InputFeatureUsage_As_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_m9B758581CE3336E00136897833C090D2E923FB4F_RuntimeMethod_var);
				bool L_126;
				L_126 = InputDevice_TryGetFeatureValue_m9FC969BEFF0E5BAB78DD9F2130F437788D20068C((&V_6), L_125, (&V_14), NULL);
				if (!L_126)
				{
					goto IL_04ff_1;
				}
			}
			{
				// textMesh.text += $": {data}\n";
				TextMesh_t7E1981C7B03E50D5CA5A3AD5B0D9BB0AB6EE91F8* L_127 = V_5;
				TextMesh_t7E1981C7B03E50D5CA5A3AD5B0D9BB0AB6EE91F8* L_128 = L_127;
				NullCheck(L_128);
				String_t* L_129;
				L_129 = TextMesh_get_text_mB3E900AED17390DE50DFC984428BC29EB1CA60A2(L_128, NULL);
				uint32_t L_130 = V_14;
				uint32_t L_131 = L_130;
				RuntimeObject* L_132 = Box(UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_il2cpp_TypeInfo_var, &L_131);
				String_t* L_133;
				L_133 = String_Format_m8C122B26BC5AA10E2550AECA16E57DAE10F07E30(_stringLiteral483E1DEC34B9D5362E7384C9F67FEBDC4970498B, L_132, NULL);
				String_t* L_134;
				L_134 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(L_129, L_133, NULL);
				NullCheck(L_128);
				TextMesh_set_text_mDF79D39638ED82797D0B0B3BB9E6B10712F8EA9E(L_128, L_134, NULL);
				goto IL_04ff_1;
			}

IL_0348_1:
			{
				// else if (inputFeatureUsage.type.Equals(typeof(float)))
				Type_t* L_135;
				L_135 = InputFeatureUsage_get_type_mD9697C1BFA3EA57E89A23A06019AAB73CB24326D((&V_10), NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_136 = { reinterpret_cast<intptr_t> (Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_137;
				L_137 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_136, NULL);
				NullCheck(L_135);
				bool L_138;
				L_138 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(126 /* System.Boolean System.Type::Equals(System.Type) */, L_135, L_137);
				if (!L_138)
				{
					goto IL_039d_1;
				}
			}
			{
				// if (inputDevice.TryGetFeatureValue(inputFeatureUsage.As<float>(), out float data))
				InputFeatureUsage_1_t311D0F42F1A7BF37D3CEAC15A53A1F24165F1848 L_139;
				L_139 = InputFeatureUsage_As_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m2DBAFEB1C83704F62C7A889D7C8EDDE5091B1FCD((&V_10), InputFeatureUsage_As_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m2DBAFEB1C83704F62C7A889D7C8EDDE5091B1FCD_RuntimeMethod_var);
				bool L_140;
				L_140 = InputDevice_TryGetFeatureValue_m675D52240379FEF80D6499B5031941812FDFD081((&V_6), L_139, (&V_15), NULL);
				if (!L_140)
				{
					goto IL_04ff_1;
				}
			}
			{
				// textMesh.text += $": {data}\n";
				TextMesh_t7E1981C7B03E50D5CA5A3AD5B0D9BB0AB6EE91F8* L_141 = V_5;
				TextMesh_t7E1981C7B03E50D5CA5A3AD5B0D9BB0AB6EE91F8* L_142 = L_141;
				NullCheck(L_142);
				String_t* L_143;
				L_143 = TextMesh_get_text_mB3E900AED17390DE50DFC984428BC29EB1CA60A2(L_142, NULL);
				float L_144 = V_15;
				float L_145 = L_144;
				RuntimeObject* L_146 = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &L_145);
				String_t* L_147;
				L_147 = String_Format_m8C122B26BC5AA10E2550AECA16E57DAE10F07E30(_stringLiteral483E1DEC34B9D5362E7384C9F67FEBDC4970498B, L_146, NULL);
				String_t* L_148;
				L_148 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(L_143, L_147, NULL);
				NullCheck(L_142);
				TextMesh_set_text_mDF79D39638ED82797D0B0B3BB9E6B10712F8EA9E(L_142, L_148, NULL);
				goto IL_04ff_1;
			}

IL_039d_1:
			{
				// else if (inputFeatureUsage.type.Equals(typeof(Vector2)))
				Type_t* L_149;
				L_149 = InputFeatureUsage_get_type_mD9697C1BFA3EA57E89A23A06019AAB73CB24326D((&V_10), NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_150 = { reinterpret_cast<intptr_t> (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_0_0_0_var) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_151;
				L_151 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_150, NULL);
				NullCheck(L_149);
				bool L_152;
				L_152 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(126 /* System.Boolean System.Type::Equals(System.Type) */, L_149, L_151);
				if (!L_152)
				{
					goto IL_03f2_1;
				}
			}
			{
				// if (inputDevice.TryGetFeatureValue(inputFeatureUsage.As<Vector2>(), out Vector2 data))
				InputFeatureUsage_1_tEB160A05BCDCCA4F96072CBA0866498D06B9A27C L_153;
				L_153 = InputFeatureUsage_As_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m9F82A2C55FF9B1D2B52D7B8FCD39DFA4705B52B5((&V_10), InputFeatureUsage_As_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m9F82A2C55FF9B1D2B52D7B8FCD39DFA4705B52B5_RuntimeMethod_var);
				bool L_154;
				L_154 = InputDevice_TryGetFeatureValue_mB2C15D1FC747DA9FB5958FA17E77049886FB3BBA((&V_6), L_153, (&V_16), NULL);
				if (!L_154)
				{
					goto IL_04ff_1;
				}
			}
			{
				// textMesh.text += $": {data}\n";
				TextMesh_t7E1981C7B03E50D5CA5A3AD5B0D9BB0AB6EE91F8* L_155 = V_5;
				TextMesh_t7E1981C7B03E50D5CA5A3AD5B0D9BB0AB6EE91F8* L_156 = L_155;
				NullCheck(L_156);
				String_t* L_157;
				L_157 = TextMesh_get_text_mB3E900AED17390DE50DFC984428BC29EB1CA60A2(L_156, NULL);
				Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_158 = V_16;
				Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_159 = L_158;
				RuntimeObject* L_160 = Box(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var, &L_159);
				String_t* L_161;
				L_161 = String_Format_m8C122B26BC5AA10E2550AECA16E57DAE10F07E30(_stringLiteral483E1DEC34B9D5362E7384C9F67FEBDC4970498B, L_160, NULL);
				String_t* L_162;
				L_162 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(L_157, L_161, NULL);
				NullCheck(L_156);
				TextMesh_set_text_mDF79D39638ED82797D0B0B3BB9E6B10712F8EA9E(L_156, L_162, NULL);
				goto IL_04ff_1;
			}

IL_03f2_1:
			{
				// else if (inputFeatureUsage.type.Equals(typeof(Vector3)))
				Type_t* L_163;
				L_163 = InputFeatureUsage_get_type_mD9697C1BFA3EA57E89A23A06019AAB73CB24326D((&V_10), NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_164 = { reinterpret_cast<intptr_t> (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_0_0_0_var) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_165;
				L_165 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_164, NULL);
				NullCheck(L_163);
				bool L_166;
				L_166 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(126 /* System.Boolean System.Type::Equals(System.Type) */, L_163, L_165);
				if (!L_166)
				{
					goto IL_0447_1;
				}
			}
			{
				// if (inputDevice.TryGetFeatureValue(inputFeatureUsage.As<Vector3>(), out Vector3 data))
				InputFeatureUsage_1_t2E901FA41650EB29399194768CAA93D477CEBC58 L_167;
				L_167 = InputFeatureUsage_As_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m0C661D4C160B057F77F0F3E0A4E8C43BA2E4593F((&V_10), InputFeatureUsage_As_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m0C661D4C160B057F77F0F3E0A4E8C43BA2E4593F_RuntimeMethod_var);
				bool L_168;
				L_168 = InputDevice_TryGetFeatureValue_m472B5ECE996FB7440CACCF1E85722DA4963E3167((&V_6), L_167, (&V_17), NULL);
				if (!L_168)
				{
					goto IL_04ff_1;
				}
			}
			{
				// textMesh.text += $": {data}\n";
				TextMesh_t7E1981C7B03E50D5CA5A3AD5B0D9BB0AB6EE91F8* L_169 = V_5;
				TextMesh_t7E1981C7B03E50D5CA5A3AD5B0D9BB0AB6EE91F8* L_170 = L_169;
				NullCheck(L_170);
				String_t* L_171;
				L_171 = TextMesh_get_text_mB3E900AED17390DE50DFC984428BC29EB1CA60A2(L_170, NULL);
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_172 = V_17;
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_173 = L_172;
				RuntimeObject* L_174 = Box(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var, &L_173);
				String_t* L_175;
				L_175 = String_Format_m8C122B26BC5AA10E2550AECA16E57DAE10F07E30(_stringLiteral483E1DEC34B9D5362E7384C9F67FEBDC4970498B, L_174, NULL);
				String_t* L_176;
				L_176 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(L_171, L_175, NULL);
				NullCheck(L_170);
				TextMesh_set_text_mDF79D39638ED82797D0B0B3BB9E6B10712F8EA9E(L_170, L_176, NULL);
				goto IL_04ff_1;
			}

IL_0447_1:
			{
				// else if (inputFeatureUsage.type.Equals(typeof(Quaternion)))
				Type_t* L_177;
				L_177 = InputFeatureUsage_get_type_mD9697C1BFA3EA57E89A23A06019AAB73CB24326D((&V_10), NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_178 = { reinterpret_cast<intptr_t> (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_0_0_0_var) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_179;
				L_179 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_178, NULL);
				NullCheck(L_177);
				bool L_180;
				L_180 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(126 /* System.Boolean System.Type::Equals(System.Type) */, L_177, L_179);
				if (!L_180)
				{
					goto IL_0499_1;
				}
			}
			{
				// if (inputDevice.TryGetFeatureValue(inputFeatureUsage.As<Quaternion>(), out Quaternion data))
				InputFeatureUsage_1_t8489CEC68B1EC178F2634079A9D7CD9E90D3CF5D L_181;
				L_181 = InputFeatureUsage_As_TisQuaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_mC6A5F22BDA5183528F34A3C045584DD6D1F71A85((&V_10), InputFeatureUsage_As_TisQuaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_mC6A5F22BDA5183528F34A3C045584DD6D1F71A85_RuntimeMethod_var);
				bool L_182;
				L_182 = InputDevice_TryGetFeatureValue_m0C1A9761DD0D1C6D1EF4BAB2FAF1BC1A9541BB9F((&V_6), L_181, (&V_18), NULL);
				if (!L_182)
				{
					goto IL_04ff_1;
				}
			}
			{
				// textMesh.text += $": {data}\n";
				TextMesh_t7E1981C7B03E50D5CA5A3AD5B0D9BB0AB6EE91F8* L_183 = V_5;
				TextMesh_t7E1981C7B03E50D5CA5A3AD5B0D9BB0AB6EE91F8* L_184 = L_183;
				NullCheck(L_184);
				String_t* L_185;
				L_185 = TextMesh_get_text_mB3E900AED17390DE50DFC984428BC29EB1CA60A2(L_184, NULL);
				Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_186 = V_18;
				Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_187 = L_186;
				RuntimeObject* L_188 = Box(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var, &L_187);
				String_t* L_189;
				L_189 = String_Format_m8C122B26BC5AA10E2550AECA16E57DAE10F07E30(_stringLiteral483E1DEC34B9D5362E7384C9F67FEBDC4970498B, L_188, NULL);
				String_t* L_190;
				L_190 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(L_185, L_189, NULL);
				NullCheck(L_184);
				TextMesh_set_text_mDF79D39638ED82797D0B0B3BB9E6B10712F8EA9E(L_184, L_190, NULL);
				goto IL_04ff_1;
			}

IL_0499_1:
			{
				// else if (inputFeatureUsage.type.Equals(typeof(InputTrackingState)))
				Type_t* L_191;
				L_191 = InputFeatureUsage_get_type_mD9697C1BFA3EA57E89A23A06019AAB73CB24326D((&V_10), NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_192 = { reinterpret_cast<intptr_t> (InputTrackingState_tCBE220E8A09D62DA1C6BD96F76943FE90F15778D_0_0_0_var) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_193;
				L_193 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_192, NULL);
				NullCheck(L_191);
				bool L_194;
				L_194 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(126 /* System.Boolean System.Type::Equals(System.Type) */, L_191, L_193);
				if (!L_194)
				{
					goto IL_04e8_1;
				}
			}
			{
				// if (inputDevice.TryGetFeatureValue(inputFeatureUsage.As<InputTrackingState>(), out InputTrackingState data))
				InputFeatureUsage_1_t4EF7DDCAC35EE23BA72694AC2AB76CF4A879FFD9 L_195;
				L_195 = InputFeatureUsage_As_TisInputTrackingState_tCBE220E8A09D62DA1C6BD96F76943FE90F15778D_m8B233B751F557C5278383CD5C038C33AC7D6B308((&V_10), InputFeatureUsage_As_TisInputTrackingState_tCBE220E8A09D62DA1C6BD96F76943FE90F15778D_m8B233B751F557C5278383CD5C038C33AC7D6B308_RuntimeMethod_var);
				bool L_196;
				L_196 = InputDevice_TryGetFeatureValue_m8A01F07356DC85042F6BB7C6258A75C3EC3C4E11((&V_6), L_195, (&V_19), NULL);
				if (!L_196)
				{
					goto IL_04ff_1;
				}
			}
			{
				// textMesh.text += $": {data}\n";
				TextMesh_t7E1981C7B03E50D5CA5A3AD5B0D9BB0AB6EE91F8* L_197 = V_5;
				TextMesh_t7E1981C7B03E50D5CA5A3AD5B0D9BB0AB6EE91F8* L_198 = L_197;
				NullCheck(L_198);
				String_t* L_199;
				L_199 = TextMesh_get_text_mB3E900AED17390DE50DFC984428BC29EB1CA60A2(L_198, NULL);
				uint32_t L_200 = V_19;
				uint32_t L_201 = L_200;
				RuntimeObject* L_202 = Box(InputTrackingState_tCBE220E8A09D62DA1C6BD96F76943FE90F15778D_il2cpp_TypeInfo_var, &L_201);
				String_t* L_203;
				L_203 = String_Format_m8C122B26BC5AA10E2550AECA16E57DAE10F07E30(_stringLiteral483E1DEC34B9D5362E7384C9F67FEBDC4970498B, L_202, NULL);
				String_t* L_204;
				L_204 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(L_199, L_203, NULL);
				NullCheck(L_198);
				TextMesh_set_text_mDF79D39638ED82797D0B0B3BB9E6B10712F8EA9E(L_198, L_204, NULL);
				goto IL_04ff_1;
			}

IL_04e8_1:
			{
				// textMesh.text += $"\n";
				TextMesh_t7E1981C7B03E50D5CA5A3AD5B0D9BB0AB6EE91F8* L_205 = V_5;
				TextMesh_t7E1981C7B03E50D5CA5A3AD5B0D9BB0AB6EE91F8* L_206 = L_205;
				NullCheck(L_206);
				String_t* L_207;
				L_207 = TextMesh_get_text_mB3E900AED17390DE50DFC984428BC29EB1CA60A2(L_206, NULL);
				String_t* L_208;
				L_208 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(L_207, _stringLiteral00B28FF06B788B9B67C6B259800F404F9F3761FD, NULL);
				NullCheck(L_206);
				TextMesh_set_text_mDF79D39638ED82797D0B0B3BB9E6B10712F8EA9E(L_206, L_208, NULL);
			}

IL_04ff_1:
			{
				// foreach (InputFeatureUsage inputFeatureUsage in featureUsages)
				bool L_209;
				L_209 = Enumerator_MoveNext_mD0B06E796C9B5956D3AFA9320F455C5F3DCBEBF1((&V_9), Enumerator_MoveNext_mD0B06E796C9B5956D3AFA9320F455C5F3DCBEBF1_RuntimeMethod_var);
				if (L_209)
				{
					goto IL_0217_1;
				}
			}
			{
				goto IL_051b;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_051b:
	{
		// for (int i = 0; i < displayFeatureUsagesTextMeshes.Count; i++)
		int32_t L_210 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_210, 1));
	}

IL_0521:
	{
		// for (int i = 0; i < displayFeatureUsagesTextMeshes.Count; i++)
		int32_t L_211 = V_4;
		List_1_t32CCFF13113DCEF594E35706966E2F153D513750* L_212 = __this->___displayFeatureUsagesTextMeshes_10;
		NullCheck(L_212);
		int32_t L_213;
		L_213 = List_1_get_Count_mC05067F62DBD6D4C8E9788C5A8BEC568D8043705_inline(L_212, List_1_get_Count_mC05067F62DBD6D4C8E9788C5A8BEC568D8043705_RuntimeMethod_var);
		if ((((int32_t)L_211) < ((int32_t)L_213)))
		{
			goto IL_00e6;
		}
	}
	{
		// if (collectionNeedsUpdating)
		bool L_214 = V_2;
		if (!L_214)
		{
			goto IL_0541;
		}
	}
	{
		// gridObjectCollection.UpdateCollection();
		GridObjectCollection_t4305434DFFC4F42300B547540DE4C36DA2DE4B2A* L_215 = __this->___gridObjectCollection_5;
		NullCheck(L_215);
		VirtualActionInvoker0::Invoke(4 /* System.Void Microsoft.MixedReality.Toolkit.Utilities.BaseObjectCollection::UpdateCollection() */, L_215);
	}

IL_0541:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Tools.Runtime.ListInputFeatureUsages::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ListInputFeatureUsages__ctor_m2C3A14B769AAE2BE314A9CB9FDAD7EE2BB1DAA90 (ListInputFeatureUsages_tD00B5F00B5339AF25C3371FEBEB352C972E7C9A3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m2DE5D95945285F4FFBE7FD51D28BE675BC014D51_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m976C6FBF573FB120E4D1D7B06AE5589EBBD6E46D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mF7ACC153F11A3260DAACDCA56B0A70A4BFA61EA4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t07514DE4C099E3518E38FC1CBA5156D78A6BFE6D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t32CCFF13113DCEF594E35706966E2F153D513750_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tB66D13E0427CA48C600AEA4DBA5B173C3734C6CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private readonly List<InputDevice> leftInputDevices = new List<InputDevice>();
		List_1_tB66D13E0427CA48C600AEA4DBA5B173C3734C6CE* L_0 = (List_1_tB66D13E0427CA48C600AEA4DBA5B173C3734C6CE*)il2cpp_codegen_object_new(List_1_tB66D13E0427CA48C600AEA4DBA5B173C3734C6CE_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_mF7ACC153F11A3260DAACDCA56B0A70A4BFA61EA4(L_0, List_1__ctor_mF7ACC153F11A3260DAACDCA56B0A70A4BFA61EA4_RuntimeMethod_var);
		__this->___leftInputDevices_7 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___leftInputDevices_7), (void*)L_0);
		// private readonly List<InputDevice> rightInputDevices = new List<InputDevice>();
		List_1_tB66D13E0427CA48C600AEA4DBA5B173C3734C6CE* L_1 = (List_1_tB66D13E0427CA48C600AEA4DBA5B173C3734C6CE*)il2cpp_codegen_object_new(List_1_tB66D13E0427CA48C600AEA4DBA5B173C3734C6CE_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		List_1__ctor_mF7ACC153F11A3260DAACDCA56B0A70A4BFA61EA4(L_1, List_1__ctor_mF7ACC153F11A3260DAACDCA56B0A70A4BFA61EA4_RuntimeMethod_var);
		__this->___rightInputDevices_8 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___rightInputDevices_8), (void*)L_1);
		// private readonly List<InputFeatureUsage> featureUsages = new List<InputFeatureUsage>();
		List_1_t07514DE4C099E3518E38FC1CBA5156D78A6BFE6D* L_2 = (List_1_t07514DE4C099E3518E38FC1CBA5156D78A6BFE6D*)il2cpp_codegen_object_new(List_1_t07514DE4C099E3518E38FC1CBA5156D78A6BFE6D_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		List_1__ctor_m2DE5D95945285F4FFBE7FD51D28BE675BC014D51(L_2, List_1__ctor_m2DE5D95945285F4FFBE7FD51D28BE675BC014D51_RuntimeMethod_var);
		__this->___featureUsages_9 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___featureUsages_9), (void*)L_2);
		// private readonly List<TextMesh> displayFeatureUsagesTextMeshes = new List<TextMesh>();
		List_1_t32CCFF13113DCEF594E35706966E2F153D513750* L_3 = (List_1_t32CCFF13113DCEF594E35706966E2F153D513750*)il2cpp_codegen_object_new(List_1_t32CCFF13113DCEF594E35706966E2F153D513750_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		List_1__ctor_m976C6FBF573FB120E4D1D7B06AE5589EBBD6E46D(L_3, List_1__ctor_m976C6FBF573FB120E4D1D7B06AE5589EBBD6E46D_RuntimeMethod_var);
		__this->___displayFeatureUsagesTextMeshes_10 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___displayFeatureUsagesTextMeshes_10), (void*)L_3);
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
// System.Void Microsoft.MixedReality.Toolkit.Tools.Runtime.MixedRealityInteractionTool::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityInteractionTool_Update_m0B7020DB43A6B272228D2EE95ADBB2BFB53DD225 (MixedRealityInteractionTool_t3ECD399A8C2F6AB137E3F569B44374898D0CAB6C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CoreServices_tCB1FB80E338B89BCA07C52C15B876BC6D4B3439B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m71CAA2062645DBD932D8214BDEDB18585DE55A54_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m8B090EFB59282696217E0C4BF4772DF044BEBAAB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m82FE574FEF92EE2D1465259DDBAB99634137B46F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_GetEnumerator_mFD270DB64CA6CFBBEC0204BA3883F03DEB325CCA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_get_Count_m4695EFEF734593458C61F74A1CFC630896A38A07_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealityController_t8BF4741E7DBA358A1DB46E1DD9EF33C9CDEB8BFA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealityEventSource_t9E9DFD08DEE578702833FF502590A1E0476E59E1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealityInputSystem_t73D9E8D52E761DF1CC230411D0EFD51104FF68B2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MixedRealityPose_tE60115C271AC50B8C11BA3B404BFCA99C7B2EFF5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1__ctor_m141FA88563AC0B5179132FB929EABD02C47FF703_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral00B28FF06B788B9B67C6B259800F404F9F3761FD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1F613619221FE2A408DA1ED73F877E67BBD4C7A0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5583A6C0598CF26694C21D7CA3666DD44488DFC5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral876C4B39B6E4D0187090400768899C71D99DE90D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBB47B58026352318D44CEC93932BDFB273FEAF1C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC2ABD53443E87B1D4332B55DE89F3F4C04D71253);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCA604168AB048809605F0545853F2D2C30960F1F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDAF2BD03270A51BF9C135F3694DCAD2D3E66F465);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE166C9564FBDE461738077E3B1B506525EB6ACCC);
		s_Il2CppMethodInitialized = true;
	}
	HashSet_1_t6C975DF0A435FF942855BEA5D8D5ACD2A365DEF5* V_0 = NULL;
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Enumerator_t2F1D0A4895829A663556DF261FAA05673B05D540 V_2;
	memset((&V_2), 0, sizeof(V_2));
	RuntimeObject* V_3 = NULL;
	TextMesh_t7E1981C7B03E50D5CA5A3AD5B0D9BB0AB6EE91F8* V_4 = NULL;
	MixedRealityInteractionMappingU5BU5D_t689ED6694F3B293DEDEA6D5371268D36DC67AACE* V_5 = NULL;
	int32_t V_6 = 0;
	MixedRealityInteractionMapping_t10DB776EEA5255542F8F4AF0DC0BC566AF0095E0* V_7 = NULL;
	TextMesh_t7E1981C7B03E50D5CA5A3AD5B0D9BB0AB6EE91F8* V_8 = NULL;
	MixedRealityInputAction_tD3B6E9CE7F20EFC9D066C519FAB848679FC62486 V_9;
	memset((&V_9), 0, sizeof(V_9));
	int32_t V_10 = 0;
	RuntimeObject* G_B6_0 = NULL;
	RuntimeObject* G_B5_0 = NULL;
	HashSet_1_t6C975DF0A435FF942855BEA5D8D5ACD2A365DEF5* G_B7_0 = NULL;
	String_t* G_B9_0 = NULL;
	TextMesh_t7E1981C7B03E50D5CA5A3AD5B0D9BB0AB6EE91F8* G_B9_1 = NULL;
	String_t* G_B8_0 = NULL;
	TextMesh_t7E1981C7B03E50D5CA5A3AD5B0D9BB0AB6EE91F8* G_B8_1 = NULL;
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 G_B10_0;
	memset((&G_B10_0), 0, sizeof(G_B10_0));
	String_t* G_B10_1 = NULL;
	TextMesh_t7E1981C7B03E50D5CA5A3AD5B0D9BB0AB6EE91F8* G_B10_2 = NULL;
	RuntimeObject* G_B12_0 = NULL;
	String_t* G_B12_1 = NULL;
	TextMesh_t7E1981C7B03E50D5CA5A3AD5B0D9BB0AB6EE91F8* G_B12_2 = NULL;
	RuntimeObject* G_B11_0 = NULL;
	String_t* G_B11_1 = NULL;
	TextMesh_t7E1981C7B03E50D5CA5A3AD5B0D9BB0AB6EE91F8* G_B11_2 = NULL;
	RuntimeObject* G_B18_0 = NULL;
	String_t* G_B18_1 = NULL;
	TextMesh_t7E1981C7B03E50D5CA5A3AD5B0D9BB0AB6EE91F8* G_B18_2 = NULL;
	RuntimeObject* G_B14_0 = NULL;
	String_t* G_B14_1 = NULL;
	TextMesh_t7E1981C7B03E50D5CA5A3AD5B0D9BB0AB6EE91F8* G_B14_2 = NULL;
	RuntimeObject* G_B13_0 = NULL;
	String_t* G_B13_1 = NULL;
	TextMesh_t7E1981C7B03E50D5CA5A3AD5B0D9BB0AB6EE91F8* G_B13_2 = NULL;
	int32_t G_B15_0 = 0;
	RuntimeObject* G_B15_1 = NULL;
	String_t* G_B15_2 = NULL;
	TextMesh_t7E1981C7B03E50D5CA5A3AD5B0D9BB0AB6EE91F8* G_B15_3 = NULL;
	RuntimeObject* G_B17_0 = NULL;
	String_t* G_B17_1 = NULL;
	TextMesh_t7E1981C7B03E50D5CA5A3AD5B0D9BB0AB6EE91F8* G_B17_2 = NULL;
	RuntimeObject* G_B16_0 = NULL;
	String_t* G_B16_1 = NULL;
	TextMesh_t7E1981C7B03E50D5CA5A3AD5B0D9BB0AB6EE91F8* G_B16_2 = NULL;
	String_t* G_B19_0 = NULL;
	RuntimeObject* G_B19_1 = NULL;
	String_t* G_B19_2 = NULL;
	TextMesh_t7E1981C7B03E50D5CA5A3AD5B0D9BB0AB6EE91F8* G_B19_3 = NULL;
	{
		// if (listControllersTextMesh == null || leftHandedControllerTextMesh == null || rightHandedControllerTextMesh == null)
		TextMesh_t7E1981C7B03E50D5CA5A3AD5B0D9BB0AB6EE91F8* L_0 = __this->___listControllersTextMesh_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (L_1)
		{
			goto IL_002a;
		}
	}
	{
		TextMesh_t7E1981C7B03E50D5CA5A3AD5B0D9BB0AB6EE91F8* L_2 = __this->___leftHandedControllerTextMesh_5;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_2, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (L_3)
		{
			goto IL_002a;
		}
	}
	{
		TextMesh_t7E1981C7B03E50D5CA5A3AD5B0D9BB0AB6EE91F8* L_4 = __this->___rightHandedControllerTextMesh_6;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_4, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_5)
		{
			goto IL_002b;
		}
	}

IL_002a:
	{
		// return;
		return;
	}

IL_002b:
	{
		// listControllersTextMesh.text = string.Empty;
		TextMesh_t7E1981C7B03E50D5CA5A3AD5B0D9BB0AB6EE91F8* L_6 = __this->___listControllersTextMesh_4;
		String_t* L_7 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		NullCheck(L_6);
		TextMesh_set_text_mDF79D39638ED82797D0B0B3BB9E6B10712F8EA9E(L_6, L_7, NULL);
		// leftHandedControllerTextMesh.text = string.Empty;
		TextMesh_t7E1981C7B03E50D5CA5A3AD5B0D9BB0AB6EE91F8* L_8 = __this->___leftHandedControllerTextMesh_5;
		String_t* L_9 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		NullCheck(L_8);
		TextMesh_set_text_mDF79D39638ED82797D0B0B3BB9E6B10712F8EA9E(L_8, L_9, NULL);
		// rightHandedControllerTextMesh.text = string.Empty;
		TextMesh_t7E1981C7B03E50D5CA5A3AD5B0D9BB0AB6EE91F8* L_10 = __this->___rightHandedControllerTextMesh_6;
		String_t* L_11 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		NullCheck(L_10);
		TextMesh_set_text_mDF79D39638ED82797D0B0B3BB9E6B10712F8EA9E(L_10, L_11, NULL);
		// HashSet<IMixedRealityController> controllers = CoreServices.InputSystem?.DetectedControllers;
		il2cpp_codegen_runtime_class_init_inline(CoreServices_tCB1FB80E338B89BCA07C52C15B876BC6D4B3439B_il2cpp_TypeInfo_var);
		RuntimeObject* L_12;
		L_12 = CoreServices_get_InputSystem_m47147418643299159BF4DF408F768844FDC33943(NULL);
		RuntimeObject* L_13 = L_12;
		G_B5_0 = L_13;
		if (L_13)
		{
			G_B6_0 = L_13;
			goto IL_0067;
		}
	}
	{
		G_B7_0 = ((HashSet_1_t6C975DF0A435FF942855BEA5D8D5ACD2A365DEF5*)(NULL));
		goto IL_006c;
	}

IL_0067:
	{
		NullCheck(G_B6_0);
		HashSet_1_t6C975DF0A435FF942855BEA5D8D5ACD2A365DEF5* L_14;
		L_14 = InterfaceFuncInvoker0< HashSet_1_t6C975DF0A435FF942855BEA5D8D5ACD2A365DEF5* >::Invoke(5 /* System.Collections.Generic.HashSet`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityController> Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem::get_DetectedControllers() */, IMixedRealityInputSystem_t73D9E8D52E761DF1CC230411D0EFD51104FF68B2_il2cpp_TypeInfo_var, G_B6_0);
		G_B7_0 = L_14;
	}

IL_006c:
	{
		V_0 = G_B7_0;
		// listControllersTextMesh.text = $"Detected {controllers?.Count} input source{(controllers?.Count > 1 ? "s:" : controllers?.Count != 0 ? ":" : "s")}\n";
		TextMesh_t7E1981C7B03E50D5CA5A3AD5B0D9BB0AB6EE91F8* L_15 = __this->___listControllersTextMesh_4;
		HashSet_1_t6C975DF0A435FF942855BEA5D8D5ACD2A365DEF5* L_16 = V_0;
		G_B8_0 = _stringLiteralBB47B58026352318D44CEC93932BDFB273FEAF1C;
		G_B8_1 = L_15;
		if (L_16)
		{
			G_B9_0 = _stringLiteralBB47B58026352318D44CEC93932BDFB273FEAF1C;
			G_B9_1 = L_15;
			goto IL_0086;
		}
	}
	{
		il2cpp_codegen_initobj((&V_1), sizeof(Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28));
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 L_17 = V_1;
		G_B10_0 = L_17;
		G_B10_1 = G_B8_0;
		G_B10_2 = G_B8_1;
		goto IL_0091;
	}

IL_0086:
	{
		HashSet_1_t6C975DF0A435FF942855BEA5D8D5ACD2A365DEF5* L_18 = V_0;
		NullCheck(L_18);
		int32_t L_19;
		L_19 = HashSet_1_get_Count_m4695EFEF734593458C61F74A1CFC630896A38A07_inline(L_18, HashSet_1_get_Count_m4695EFEF734593458C61F74A1CFC630896A38A07_RuntimeMethod_var);
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 L_20;
		memset((&L_20), 0, sizeof(L_20));
		Nullable_1__ctor_m141FA88563AC0B5179132FB929EABD02C47FF703((&L_20), L_19, /*hidden argument*/Nullable_1__ctor_m141FA88563AC0B5179132FB929EABD02C47FF703_RuntimeMethod_var);
		G_B10_0 = L_20;
		G_B10_1 = G_B9_0;
		G_B10_2 = G_B9_1;
	}

IL_0091:
	{
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 L_21 = G_B10_0;
		RuntimeObject* L_22 = Box(Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28_il2cpp_TypeInfo_var, &L_21);
		HashSet_1_t6C975DF0A435FF942855BEA5D8D5ACD2A365DEF5* L_23 = V_0;
		G_B11_0 = L_22;
		G_B11_1 = G_B10_1;
		G_B11_2 = G_B10_2;
		if (!L_23)
		{
			G_B12_0 = L_22;
			G_B12_1 = G_B10_1;
			G_B12_2 = G_B10_2;
			goto IL_00a2;
		}
	}
	{
		HashSet_1_t6C975DF0A435FF942855BEA5D8D5ACD2A365DEF5* L_24 = V_0;
		NullCheck(L_24);
		int32_t L_25;
		L_25 = HashSet_1_get_Count_m4695EFEF734593458C61F74A1CFC630896A38A07_inline(L_24, HashSet_1_get_Count_m4695EFEF734593458C61F74A1CFC630896A38A07_RuntimeMethod_var);
		G_B12_0 = G_B11_0;
		G_B12_1 = G_B11_1;
		G_B12_2 = G_B11_2;
		if ((((int32_t)L_25) > ((int32_t)1)))
		{
			G_B18_0 = G_B11_0;
			G_B18_1 = G_B11_1;
			G_B18_2 = G_B11_2;
			goto IL_00c1;
		}
	}

IL_00a2:
	{
		HashSet_1_t6C975DF0A435FF942855BEA5D8D5ACD2A365DEF5* L_26 = V_0;
		G_B13_0 = G_B12_0;
		G_B13_1 = G_B12_1;
		G_B13_2 = G_B12_2;
		if (L_26)
		{
			G_B14_0 = G_B12_0;
			G_B14_1 = G_B12_1;
			G_B14_2 = G_B12_2;
			goto IL_00a8;
		}
	}
	{
		G_B15_0 = 1;
		G_B15_1 = G_B13_0;
		G_B15_2 = G_B13_1;
		G_B15_3 = G_B13_2;
		goto IL_00b1;
	}

IL_00a8:
	{
		HashSet_1_t6C975DF0A435FF942855BEA5D8D5ACD2A365DEF5* L_27 = V_0;
		NullCheck(L_27);
		int32_t L_28;
		L_28 = HashSet_1_get_Count_m4695EFEF734593458C61F74A1CFC630896A38A07_inline(L_27, HashSet_1_get_Count_m4695EFEF734593458C61F74A1CFC630896A38A07_RuntimeMethod_var);
		G_B15_0 = ((!(((uint32_t)L_28) <= ((uint32_t)0)))? 1 : 0);
		G_B15_1 = G_B14_0;
		G_B15_2 = G_B14_1;
		G_B15_3 = G_B14_2;
	}

IL_00b1:
	{
		G_B16_0 = G_B15_1;
		G_B16_1 = G_B15_2;
		G_B16_2 = G_B15_3;
		if (G_B15_0)
		{
			G_B17_0 = G_B15_1;
			G_B17_1 = G_B15_2;
			G_B17_2 = G_B15_3;
			goto IL_00ba;
		}
	}
	{
		G_B19_0 = _stringLiteralDAF2BD03270A51BF9C135F3694DCAD2D3E66F465;
		G_B19_1 = G_B16_0;
		G_B19_2 = G_B16_1;
		G_B19_3 = G_B16_2;
		goto IL_00c6;
	}

IL_00ba:
	{
		G_B19_0 = _stringLiteral876C4B39B6E4D0187090400768899C71D99DE90D;
		G_B19_1 = G_B17_0;
		G_B19_2 = G_B17_1;
		G_B19_3 = G_B17_2;
		goto IL_00c6;
	}

IL_00c1:
	{
		G_B19_0 = _stringLiteralCA604168AB048809605F0545853F2D2C30960F1F;
		G_B19_1 = G_B18_0;
		G_B19_2 = G_B18_1;
		G_B19_3 = G_B18_2;
	}

IL_00c6:
	{
		String_t* L_29;
		L_29 = String_Format_m9499958F4B0BB6089C75760AB647AB3CA4D55806(G_B19_2, G_B19_1, G_B19_0, NULL);
		NullCheck(G_B19_3);
		TextMesh_set_text_mDF79D39638ED82797D0B0B3BB9E6B10712F8EA9E(G_B19_3, L_29, NULL);
		// if (controllers == null)
		HashSet_1_t6C975DF0A435FF942855BEA5D8D5ACD2A365DEF5* L_30 = V_0;
		if (L_30)
		{
			goto IL_00d4;
		}
	}
	{
		// return;
		return;
	}

IL_00d4:
	{
		// foreach (IMixedRealityController controller in controllers)
		HashSet_1_t6C975DF0A435FF942855BEA5D8D5ACD2A365DEF5* L_31 = V_0;
		NullCheck(L_31);
		Enumerator_t2F1D0A4895829A663556DF261FAA05673B05D540 L_32;
		L_32 = HashSet_1_GetEnumerator_mFD270DB64CA6CFBBEC0204BA3883F03DEB325CCA(L_31, HashSet_1_GetEnumerator_mFD270DB64CA6CFBBEC0204BA3883F03DEB325CCA_RuntimeMethod_var);
		V_2 = L_32;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_03ea:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m71CAA2062645DBD932D8214BDEDB18585DE55A54((&V_2), Enumerator_Dispose_m71CAA2062645DBD932D8214BDEDB18585DE55A54_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_03dc_1;
			}

IL_00e0_1:
			{
				// foreach (IMixedRealityController controller in controllers)
				RuntimeObject* L_33;
				L_33 = Enumerator_get_Current_m82FE574FEF92EE2D1465259DDBAB99634137B46F_inline((&V_2), Enumerator_get_Current_m82FE574FEF92EE2D1465259DDBAB99634137B46F_RuntimeMethod_var);
				V_3 = L_33;
				// listControllersTextMesh.text += $"{controller.InputSource.SourceName}\n";
				TextMesh_t7E1981C7B03E50D5CA5A3AD5B0D9BB0AB6EE91F8* L_34 = __this->___listControllersTextMesh_4;
				TextMesh_t7E1981C7B03E50D5CA5A3AD5B0D9BB0AB6EE91F8* L_35 = L_34;
				NullCheck(L_35);
				String_t* L_36;
				L_36 = TextMesh_get_text_mB3E900AED17390DE50DFC984428BC29EB1CA60A2(L_35, NULL);
				RuntimeObject* L_37 = V_3;
				NullCheck(L_37);
				RuntimeObject* L_38;
				L_38 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(4 /* Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource Microsoft.MixedReality.Toolkit.Input.IMixedRealityController::get_InputSource() */, IMixedRealityController_t8BF4741E7DBA358A1DB46E1DD9EF33C9CDEB8BFA_il2cpp_TypeInfo_var, L_37);
				NullCheck(L_38);
				String_t* L_39;
				L_39 = InterfaceFuncInvoker0< String_t* >::Invoke(1 /* System.String Microsoft.MixedReality.Toolkit.IMixedRealityEventSource::get_SourceName() */, IMixedRealityEventSource_t9E9DFD08DEE578702833FF502590A1E0476E59E1_il2cpp_TypeInfo_var, L_38);
				String_t* L_40;
				L_40 = String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0(L_36, L_39, _stringLiteral00B28FF06B788B9B67C6B259800F404F9F3761FD, NULL);
				NullCheck(L_35);
				TextMesh_set_text_mDF79D39638ED82797D0B0B3BB9E6B10712F8EA9E(L_35, L_40, NULL);
				// if (controller.ControllerHandedness == Handedness.Left)
				RuntimeObject* L_41 = V_3;
				NullCheck(L_41);
				uint8_t L_42;
				L_42 = InterfaceFuncInvoker0< uint8_t >::Invoke(3 /* Microsoft.MixedReality.Toolkit.Utilities.Handedness Microsoft.MixedReality.Toolkit.Input.IMixedRealityController::get_ControllerHandedness() */, IMixedRealityController_t8BF4741E7DBA358A1DB46E1DD9EF33C9CDEB8BFA_il2cpp_TypeInfo_var, L_41);
				if ((!(((uint32_t)L_42) == ((uint32_t)1))))
				{
					goto IL_0121_1;
				}
			}
			{
				// textMesh = leftHandedControllerTextMesh;
				TextMesh_t7E1981C7B03E50D5CA5A3AD5B0D9BB0AB6EE91F8* L_43 = __this->___leftHandedControllerTextMesh_5;
				V_4 = L_43;
				goto IL_0135_1;
			}

IL_0121_1:
			{
				// else if (controller.ControllerHandedness == Handedness.Right)
				RuntimeObject* L_44 = V_3;
				NullCheck(L_44);
				uint8_t L_45;
				L_45 = InterfaceFuncInvoker0< uint8_t >::Invoke(3 /* Microsoft.MixedReality.Toolkit.Utilities.Handedness Microsoft.MixedReality.Toolkit.Input.IMixedRealityController::get_ControllerHandedness() */, IMixedRealityController_t8BF4741E7DBA358A1DB46E1DD9EF33C9CDEB8BFA_il2cpp_TypeInfo_var, L_44);
				if ((!(((uint32_t)L_45) == ((uint32_t)2))))
				{
					goto IL_03dc_1;
				}
			}
			{
				// textMesh = rightHandedControllerTextMesh;
				TextMesh_t7E1981C7B03E50D5CA5A3AD5B0D9BB0AB6EE91F8* L_46 = __this->___rightHandedControllerTextMesh_6;
				V_4 = L_46;
			}

IL_0135_1:
			{
				// textMesh.text = $"{controller.InputSource.SourceName}\n\n";
				TextMesh_t7E1981C7B03E50D5CA5A3AD5B0D9BB0AB6EE91F8* L_47 = V_4;
				RuntimeObject* L_48 = V_3;
				NullCheck(L_48);
				RuntimeObject* L_49;
				L_49 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(4 /* Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource Microsoft.MixedReality.Toolkit.Input.IMixedRealityController::get_InputSource() */, IMixedRealityController_t8BF4741E7DBA358A1DB46E1DD9EF33C9CDEB8BFA_il2cpp_TypeInfo_var, L_48);
				NullCheck(L_49);
				String_t* L_50;
				L_50 = InterfaceFuncInvoker0< String_t* >::Invoke(1 /* System.String Microsoft.MixedReality.Toolkit.IMixedRealityEventSource::get_SourceName() */, IMixedRealityEventSource_t9E9DFD08DEE578702833FF502590A1E0476E59E1_il2cpp_TypeInfo_var, L_49);
				String_t* L_51;
				L_51 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(L_50, _stringLiteralC2ABD53443E87B1D4332B55DE89F3F4C04D71253, NULL);
				NullCheck(L_47);
				TextMesh_set_text_mDF79D39638ED82797D0B0B3BB9E6B10712F8EA9E(L_47, L_51, NULL);
				// foreach (MixedRealityInteractionMapping interaction in controller.Interactions)
				RuntimeObject* L_52 = V_3;
				NullCheck(L_52);
				MixedRealityInteractionMappingU5BU5D_t689ED6694F3B293DEDEA6D5371268D36DC67AACE* L_53;
				L_53 = InterfaceFuncInvoker0< MixedRealityInteractionMappingU5BU5D_t689ED6694F3B293DEDEA6D5371268D36DC67AACE* >::Invoke(9 /* Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping[] Microsoft.MixedReality.Toolkit.Input.IMixedRealityController::get_Interactions() */, IMixedRealityController_t8BF4741E7DBA358A1DB46E1DD9EF33C9CDEB8BFA_il2cpp_TypeInfo_var, L_52);
				V_5 = L_53;
				V_6 = 0;
				goto IL_03d1_1;
			}

IL_0161_1:
			{
				// foreach (MixedRealityInteractionMapping interaction in controller.Interactions)
				MixedRealityInteractionMappingU5BU5D_t689ED6694F3B293DEDEA6D5371268D36DC67AACE* L_54 = V_5;
				int32_t L_55 = V_6;
				NullCheck(L_54);
				int32_t L_56 = L_55;
				MixedRealityInteractionMapping_t10DB776EEA5255542F8F4AF0DC0BC566AF0095E0* L_57 = (L_54)->GetAt(static_cast<il2cpp_array_size_t>(L_56));
				V_7 = L_57;
				// textMesh.text += $"{interaction.Description} [{interaction.MixedRealityInputAction.Description}]";
				TextMesh_t7E1981C7B03E50D5CA5A3AD5B0D9BB0AB6EE91F8* L_58 = V_4;
				V_8 = L_58;
				TextMesh_t7E1981C7B03E50D5CA5A3AD5B0D9BB0AB6EE91F8* L_59 = V_8;
				StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_60 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)5);
				StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_61 = L_60;
				TextMesh_t7E1981C7B03E50D5CA5A3AD5B0D9BB0AB6EE91F8* L_62 = V_8;
				NullCheck(L_62);
				String_t* L_63;
				L_63 = TextMesh_get_text_mB3E900AED17390DE50DFC984428BC29EB1CA60A2(L_62, NULL);
				NullCheck(L_61);
				ArrayElementTypeCheck (L_61, L_63);
				(L_61)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)L_63);
				StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_64 = L_61;
				MixedRealityInteractionMapping_t10DB776EEA5255542F8F4AF0DC0BC566AF0095E0* L_65 = V_7;
				NullCheck(L_65);
				String_t* L_66;
				L_66 = MixedRealityInteractionMapping_get_Description_mB4C6619EF2F1E6AEE57C98A24F2C90A0FBCACD50_inline(L_65, NULL);
				NullCheck(L_64);
				ArrayElementTypeCheck (L_64, L_66);
				(L_64)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)L_66);
				StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_67 = L_64;
				NullCheck(L_67);
				ArrayElementTypeCheck (L_67, _stringLiteral5583A6C0598CF26694C21D7CA3666DD44488DFC5);
				(L_67)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral5583A6C0598CF26694C21D7CA3666DD44488DFC5);
				StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_68 = L_67;
				MixedRealityInteractionMapping_t10DB776EEA5255542F8F4AF0DC0BC566AF0095E0* L_69 = V_7;
				NullCheck(L_69);
				MixedRealityInputAction_tD3B6E9CE7F20EFC9D066C519FAB848679FC62486 L_70;
				L_70 = MixedRealityInteractionMapping_get_MixedRealityInputAction_mE813B3EBBA0A10F64E34EA6E5001D140D81141E9_inline(L_69, NULL);
				V_9 = L_70;
				String_t* L_71;
				L_71 = MixedRealityInputAction_get_Description_m5AD88A40A36F727F7D93C9EF01CE99577686F2F2_inline((&V_9), NULL);
				NullCheck(L_68);
				ArrayElementTypeCheck (L_68, L_71);
				(L_68)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)L_71);
				StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_72 = L_68;
				NullCheck(L_72);
				ArrayElementTypeCheck (L_72, _stringLiteralE166C9564FBDE461738077E3B1B506525EB6ACCC);
				(L_72)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteralE166C9564FBDE461738077E3B1B506525EB6ACCC);
				String_t* L_73;
				L_73 = String_Concat_m6B0734B65813C8EA093D78E5C2D16534EB6FE8C0(L_72, NULL);
				NullCheck(L_59);
				TextMesh_set_text_mDF79D39638ED82797D0B0B3BB9E6B10712F8EA9E(L_59, L_73, NULL);
				// switch (interaction.InputType)
				MixedRealityInteractionMapping_t10DB776EEA5255542F8F4AF0DC0BC566AF0095E0* L_74 = V_7;
				NullCheck(L_74);
				int32_t L_75;
				L_75 = MixedRealityInteractionMapping_get_InputType_m431C40AD5149D4817FAA46DC0326A481FE348C8D_inline(L_74, NULL);
				V_10 = L_75;
				int32_t L_76 = V_10;
				switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_76, 3)))
				{
					case 0:
					{
						goto IL_02b4_1;
					}
					case 1:
					{
						goto IL_02e1_1;
					}
					case 2:
					{
						goto IL_030e_1;
					}
					case 3:
					{
						goto IL_0338_1;
					}
					case 4:
					{
						goto IL_0338_1;
					}
					case 5:
					{
						goto IL_0338_1;
					}
					case 6:
					{
						goto IL_0338_1;
					}
					case 7:
					{
						goto IL_0362_1;
					}
					case 8:
					{
						goto IL_0338_1;
					}
					case 9:
					{
						goto IL_0338_1;
					}
					case 10:
					{
						goto IL_0338_1;
					}
					case 11:
					{
						goto IL_02b4_1;
					}
					case 12:
					{
						goto IL_02e1_1;
					}
					case 13:
					{
						goto IL_030e_1;
					}
					case 14:
					{
						goto IL_038c_1;
					}
					case 15:
					{
						goto IL_0338_1;
					}
					case 16:
					{
						goto IL_0338_1;
					}
					case 17:
					{
						goto IL_0338_1;
					}
					case 18:
					{
						goto IL_038c_1;
					}
					case 19:
					{
						goto IL_0338_1;
					}
					case 20:
					{
						goto IL_0338_1;
					}
					case 21:
					{
						goto IL_0338_1;
					}
					case 22:
					{
						goto IL_0338_1;
					}
					case 23:
					{
						goto IL_0338_1;
					}
					case 24:
					{
						goto IL_0338_1;
					}
					case 25:
					{
						goto IL_03b4_1;
					}
					case 26:
					{
						goto IL_02b4_1;
					}
					case 27:
					{
						goto IL_03b4_1;
					}
					case 28:
					{
						goto IL_03b4_1;
					}
					case 29:
					{
						goto IL_03b4_1;
					}
					case 30:
					{
						goto IL_02b4_1;
					}
					case 31:
					{
						goto IL_03b4_1;
					}
					case 32:
					{
						goto IL_03b4_1;
					}
					case 33:
					{
						goto IL_03b4_1;
					}
					case 34:
					{
						goto IL_02b4_1;
					}
					case 35:
					{
						goto IL_03b4_1;
					}
					case 36:
					{
						goto IL_03b4_1;
					}
					case 37:
					{
						goto IL_03b4_1;
					}
					case 38:
					{
						goto IL_02b4_1;
					}
					case 39:
					{
						goto IL_03b4_1;
					}
					case 40:
					{
						goto IL_03b4_1;
					}
					case 41:
					{
						goto IL_03b4_1;
					}
					case 42:
					{
						goto IL_02b4_1;
					}
					case 43:
					{
						goto IL_03b4_1;
					}
					case 44:
					{
						goto IL_03b4_1;
					}
					case 45:
					{
						goto IL_03b4_1;
					}
					case 46:
					{
						goto IL_038c_1;
					}
					case 47:
					{
						goto IL_038c_1;
					}
					case 48:
					{
						goto IL_0338_1;
					}
					case 49:
					{
						goto IL_0338_1;
					}
					case 50:
					{
						goto IL_0338_1;
					}
					case 51:
					{
						goto IL_0338_1;
					}
					case 52:
					{
						goto IL_0338_1;
					}
					case 53:
					{
						goto IL_0338_1;
					}
					case 54:
					{
						goto IL_0362_1;
					}
					case 55:
					{
						goto IL_0338_1;
					}
					case 56:
					{
						goto IL_0338_1;
					}
					case 57:
					{
						goto IL_0338_1;
					}
				}
			}
			{
				goto IL_03b4_1;
			}

IL_02b4_1:
			{
				// textMesh.text += $": {interaction.PoseData}";
				TextMesh_t7E1981C7B03E50D5CA5A3AD5B0D9BB0AB6EE91F8* L_77 = V_4;
				TextMesh_t7E1981C7B03E50D5CA5A3AD5B0D9BB0AB6EE91F8* L_78 = L_77;
				NullCheck(L_78);
				String_t* L_79;
				L_79 = TextMesh_get_text_mB3E900AED17390DE50DFC984428BC29EB1CA60A2(L_78, NULL);
				MixedRealityInteractionMapping_t10DB776EEA5255542F8F4AF0DC0BC566AF0095E0* L_80 = V_7;
				NullCheck(L_80);
				MixedRealityPose_tE60115C271AC50B8C11BA3B404BFCA99C7B2EFF5 L_81;
				L_81 = MixedRealityInteractionMapping_get_PoseData_m90E4BA2D7413EC29B85B025AEE96C2F7662427B0_inline(L_80, NULL);
				MixedRealityPose_tE60115C271AC50B8C11BA3B404BFCA99C7B2EFF5 L_82 = L_81;
				RuntimeObject* L_83 = Box(MixedRealityPose_tE60115C271AC50B8C11BA3B404BFCA99C7B2EFF5_il2cpp_TypeInfo_var, &L_82);
				String_t* L_84;
				L_84 = String_Format_m8C122B26BC5AA10E2550AECA16E57DAE10F07E30(_stringLiteral1F613619221FE2A408DA1ED73F877E67BBD4C7A0, L_83, NULL);
				String_t* L_85;
				L_85 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(L_79, L_84, NULL);
				NullCheck(L_78);
				TextMesh_set_text_mDF79D39638ED82797D0B0B3BB9E6B10712F8EA9E(L_78, L_85, NULL);
				// break;
				goto IL_03b4_1;
			}

IL_02e1_1:
			{
				// textMesh.text += $": {interaction.PositionData}";
				TextMesh_t7E1981C7B03E50D5CA5A3AD5B0D9BB0AB6EE91F8* L_86 = V_4;
				TextMesh_t7E1981C7B03E50D5CA5A3AD5B0D9BB0AB6EE91F8* L_87 = L_86;
				NullCheck(L_87);
				String_t* L_88;
				L_88 = TextMesh_get_text_mB3E900AED17390DE50DFC984428BC29EB1CA60A2(L_87, NULL);
				MixedRealityInteractionMapping_t10DB776EEA5255542F8F4AF0DC0BC566AF0095E0* L_89 = V_7;
				NullCheck(L_89);
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_90;
				L_90 = MixedRealityInteractionMapping_get_PositionData_m189D602B6846B225CBFBAB5C64699469900972E5_inline(L_89, NULL);
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_91 = L_90;
				RuntimeObject* L_92 = Box(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var, &L_91);
				String_t* L_93;
				L_93 = String_Format_m8C122B26BC5AA10E2550AECA16E57DAE10F07E30(_stringLiteral1F613619221FE2A408DA1ED73F877E67BBD4C7A0, L_92, NULL);
				String_t* L_94;
				L_94 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(L_88, L_93, NULL);
				NullCheck(L_87);
				TextMesh_set_text_mDF79D39638ED82797D0B0B3BB9E6B10712F8EA9E(L_87, L_94, NULL);
				// break;
				goto IL_03b4_1;
			}

IL_030e_1:
			{
				// textMesh.text += $": {interaction.RotationData}";
				TextMesh_t7E1981C7B03E50D5CA5A3AD5B0D9BB0AB6EE91F8* L_95 = V_4;
				TextMesh_t7E1981C7B03E50D5CA5A3AD5B0D9BB0AB6EE91F8* L_96 = L_95;
				NullCheck(L_96);
				String_t* L_97;
				L_97 = TextMesh_get_text_mB3E900AED17390DE50DFC984428BC29EB1CA60A2(L_96, NULL);
				MixedRealityInteractionMapping_t10DB776EEA5255542F8F4AF0DC0BC566AF0095E0* L_98 = V_7;
				NullCheck(L_98);
				Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_99;
				L_99 = MixedRealityInteractionMapping_get_RotationData_m37593A681A7F3DF462819D9576EF74F8FE7DD43D_inline(L_98, NULL);
				Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_100 = L_99;
				RuntimeObject* L_101 = Box(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var, &L_100);
				String_t* L_102;
				L_102 = String_Format_m8C122B26BC5AA10E2550AECA16E57DAE10F07E30(_stringLiteral1F613619221FE2A408DA1ED73F877E67BBD4C7A0, L_101, NULL);
				String_t* L_103;
				L_103 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(L_97, L_102, NULL);
				NullCheck(L_96);
				TextMesh_set_text_mDF79D39638ED82797D0B0B3BB9E6B10712F8EA9E(L_96, L_103, NULL);
				// break;
				goto IL_03b4_1;
			}

IL_0338_1:
			{
				// textMesh.text += $": {interaction.BoolData}";
				TextMesh_t7E1981C7B03E50D5CA5A3AD5B0D9BB0AB6EE91F8* L_104 = V_4;
				TextMesh_t7E1981C7B03E50D5CA5A3AD5B0D9BB0AB6EE91F8* L_105 = L_104;
				NullCheck(L_105);
				String_t* L_106;
				L_106 = TextMesh_get_text_mB3E900AED17390DE50DFC984428BC29EB1CA60A2(L_105, NULL);
				MixedRealityInteractionMapping_t10DB776EEA5255542F8F4AF0DC0BC566AF0095E0* L_107 = V_7;
				NullCheck(L_107);
				bool L_108;
				L_108 = MixedRealityInteractionMapping_get_BoolData_m69F4D6E88FF5DF204C3C38426A2BCD74AB7060CB_inline(L_107, NULL);
				bool L_109 = L_108;
				RuntimeObject* L_110 = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &L_109);
				String_t* L_111;
				L_111 = String_Format_m8C122B26BC5AA10E2550AECA16E57DAE10F07E30(_stringLiteral1F613619221FE2A408DA1ED73F877E67BBD4C7A0, L_110, NULL);
				String_t* L_112;
				L_112 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(L_106, L_111, NULL);
				NullCheck(L_105);
				TextMesh_set_text_mDF79D39638ED82797D0B0B3BB9E6B10712F8EA9E(L_105, L_112, NULL);
				// break;
				goto IL_03b4_1;
			}

IL_0362_1:
			{
				// textMesh.text += $": {interaction.FloatData}";
				TextMesh_t7E1981C7B03E50D5CA5A3AD5B0D9BB0AB6EE91F8* L_113 = V_4;
				TextMesh_t7E1981C7B03E50D5CA5A3AD5B0D9BB0AB6EE91F8* L_114 = L_113;
				NullCheck(L_114);
				String_t* L_115;
				L_115 = TextMesh_get_text_mB3E900AED17390DE50DFC984428BC29EB1CA60A2(L_114, NULL);
				MixedRealityInteractionMapping_t10DB776EEA5255542F8F4AF0DC0BC566AF0095E0* L_116 = V_7;
				NullCheck(L_116);
				float L_117;
				L_117 = MixedRealityInteractionMapping_get_FloatData_m427535AC6E511D46014CADA75E2410FA4CE5C903_inline(L_116, NULL);
				float L_118 = L_117;
				RuntimeObject* L_119 = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &L_118);
				String_t* L_120;
				L_120 = String_Format_m8C122B26BC5AA10E2550AECA16E57DAE10F07E30(_stringLiteral1F613619221FE2A408DA1ED73F877E67BBD4C7A0, L_119, NULL);
				String_t* L_121;
				L_121 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(L_115, L_120, NULL);
				NullCheck(L_114);
				TextMesh_set_text_mDF79D39638ED82797D0B0B3BB9E6B10712F8EA9E(L_114, L_121, NULL);
				// break;
				goto IL_03b4_1;
			}

IL_038c_1:
			{
				// textMesh.text += $": {interaction.Vector2Data}";
				TextMesh_t7E1981C7B03E50D5CA5A3AD5B0D9BB0AB6EE91F8* L_122 = V_4;
				TextMesh_t7E1981C7B03E50D5CA5A3AD5B0D9BB0AB6EE91F8* L_123 = L_122;
				NullCheck(L_123);
				String_t* L_124;
				L_124 = TextMesh_get_text_mB3E900AED17390DE50DFC984428BC29EB1CA60A2(L_123, NULL);
				MixedRealityInteractionMapping_t10DB776EEA5255542F8F4AF0DC0BC566AF0095E0* L_125 = V_7;
				NullCheck(L_125);
				Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_126;
				L_126 = MixedRealityInteractionMapping_get_Vector2Data_m56249B37DF9ADDCEA3D131DB2916014185933C40_inline(L_125, NULL);
				Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_127 = L_126;
				RuntimeObject* L_128 = Box(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var, &L_127);
				String_t* L_129;
				L_129 = String_Format_m8C122B26BC5AA10E2550AECA16E57DAE10F07E30(_stringLiteral1F613619221FE2A408DA1ED73F877E67BBD4C7A0, L_128, NULL);
				String_t* L_130;
				L_130 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(L_124, L_129, NULL);
				NullCheck(L_123);
				TextMesh_set_text_mDF79D39638ED82797D0B0B3BB9E6B10712F8EA9E(L_123, L_130, NULL);
			}

IL_03b4_1:
			{
				// textMesh.text += "\n";
				TextMesh_t7E1981C7B03E50D5CA5A3AD5B0D9BB0AB6EE91F8* L_131 = V_4;
				TextMesh_t7E1981C7B03E50D5CA5A3AD5B0D9BB0AB6EE91F8* L_132 = L_131;
				NullCheck(L_132);
				String_t* L_133;
				L_133 = TextMesh_get_text_mB3E900AED17390DE50DFC984428BC29EB1CA60A2(L_132, NULL);
				String_t* L_134;
				L_134 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(L_133, _stringLiteral00B28FF06B788B9B67C6B259800F404F9F3761FD, NULL);
				NullCheck(L_132);
				TextMesh_set_text_mDF79D39638ED82797D0B0B3BB9E6B10712F8EA9E(L_132, L_134, NULL);
				int32_t L_135 = V_6;
				V_6 = ((int32_t)il2cpp_codegen_add(L_135, 1));
			}

IL_03d1_1:
			{
				// foreach (MixedRealityInteractionMapping interaction in controller.Interactions)
				int32_t L_136 = V_6;
				MixedRealityInteractionMappingU5BU5D_t689ED6694F3B293DEDEA6D5371268D36DC67AACE* L_137 = V_5;
				NullCheck(L_137);
				if ((((int32_t)L_136) < ((int32_t)((int32_t)(((RuntimeArray*)L_137)->max_length)))))
				{
					goto IL_0161_1;
				}
			}

IL_03dc_1:
			{
				// foreach (IMixedRealityController controller in controllers)
				bool L_138;
				L_138 = Enumerator_MoveNext_m8B090EFB59282696217E0C4BF4772DF044BEBAAB((&V_2), Enumerator_MoveNext_m8B090EFB59282696217E0C4BF4772DF044BEBAAB_RuntimeMethod_var);
				if (L_138)
				{
					goto IL_00e0_1;
				}
			}
			{
				goto IL_03f8;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_03f8:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Tools.Runtime.MixedRealityInteractionTool::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityInteractionTool__ctor_mCF66B5A8EC02F49E33449062D959FFC3CBCF15F7 (MixedRealityInteractionTool_t3ECD399A8C2F6AB137E3F569B44374898D0CAB6C* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* MixedRealityInteractionMapping_get_Description_mB4C6619EF2F1E6AEE57C98A24F2C90A0FBCACD50_inline (MixedRealityInteractionMapping_t10DB776EEA5255542F8F4AF0DC0BC566AF0095E0* __this, const RuntimeMethod* method) 
{
	{
		// public string Description => description;
		String_t* L_0 = __this->___description_1;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* MixedRealityInputAction_get_Description_m5AD88A40A36F727F7D93C9EF01CE99577686F2F2_inline (MixedRealityInputAction_tD3B6E9CE7F20EFC9D066C519FAB848679FC62486* __this, const RuntimeMethod* method) 
{
	{
		// public string Description => description;
		String_t* L_0 = __this->___description_2;
		return L_0;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR MixedRealityPose_tE60115C271AC50B8C11BA3B404BFCA99C7B2EFF5 MixedRealityInteractionMapping_get_PoseData_m90E4BA2D7413EC29B85B025AEE96C2F7662427B0_inline (MixedRealityInteractionMapping_t10DB776EEA5255542F8F4AF0DC0BC566AF0095E0* __this, const RuntimeMethod* method) 
{
	{
		// return poseData;
		MixedRealityPose_tE60115C271AC50B8C11BA3B404BFCA99C7B2EFF5 L_0 = __this->___poseData_17;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 MixedRealityInteractionMapping_get_PositionData_m189D602B6846B225CBFBAB5C64699469900972E5_inline (MixedRealityInteractionMapping_t10DB776EEA5255542F8F4AF0DC0BC566AF0095E0* __this, const RuntimeMethod* method) 
{
	{
		// return positionData;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = __this->___positionData_15;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 MixedRealityInteractionMapping_get_RotationData_m37593A681A7F3DF462819D9576EF74F8FE7DD43D_inline (MixedRealityInteractionMapping_t10DB776EEA5255542F8F4AF0DC0BC566AF0095E0* __this, const RuntimeMethod* method) 
{
	{
		// return rotationData;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = __this->___rotationData_16;
		return L_0;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m9C3EC7FE1A9401268B3C9761A4D96A37197AD0E7_gshared_inline (List_1_tB66D13E0427CA48C600AEA4DBA5B173C3734C6CE* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_2;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) 
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)__this->____items_1;
		V_0 = L_1;
		int32_t L_2 = (int32_t)__this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = V_0;
		int32_t L_7 = V_1;
		RuntimeObject* L_8 = ___item0;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (RuntimeObject*)L_8);
		return;
	}

IL_0034:
	{
		RuntimeObject* L_9 = ___item0;
		((  void (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR InputFeatureUsage_t1E251DC4F8CD697080F0F5D98388955AF8B87599 Enumerator_get_Current_m6EAF4461E14CE5F9CB03227860CC9713AA1B0BD3_gshared_inline (Enumerator_t80524DF0E134D5C143E44173399F812156A31C8D* __this, const RuntimeMethod* method) 
{
	{
		InputFeatureUsage_t1E251DC4F8CD697080F0F5D98388955AF8B87599 L_0 = (InputFeatureUsage_t1E251DC4F8CD697080F0F5D98388955AF8B87599)__this->____current_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m0F3CFBBA46B1A2C1AE03AE6D34CED399412D542C_gshared_inline (List_1_t07514DE4C099E3518E38FC1CBA5156D78A6BFE6D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t HashSet_1_get_Count_m41CC85EEB7855CEFA3BC7A32F115387939318ED3_gshared_inline (HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____count_9;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m139A176CD271A0532D75BE08DA7831C8C45CE28F_gshared_inline (Enumerator_t72556E98D7DDBE118A973D782D523D15A96461C8* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->____current_3;
		return L_0;
	}
}
