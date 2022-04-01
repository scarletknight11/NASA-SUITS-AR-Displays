#include "pch-c.h"
#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include "codegen/il2cpp-codegen-metadata.h"


extern const RuntimeMethod* ObjectInstance_ChangedStaticHandler_mEB88F54081FFA44FB88974C35BDC5E0FCDF26659_RuntimeMethod_var;
extern const RuntimeMethod* ProjectedObjectCache_ProjectedObjectCleanupHandler_mFAB3B7F3ADB8A72C0459177CA9E96FEEFD11A20B_RuntimeMethod_var;



// 0x00000001 System.Void Microsoft.Azure.ObjectAnchors.NativeLibraryHelpers::CheckStatus(Microsoft.Azure.ObjectAnchors.status)
extern void NativeLibraryHelpers_CheckStatus_mCD820C10B5FED975DFBCFF824F1866359E773A77 (void);
// 0x00000002 System.Void Microsoft.Azure.ObjectAnchors.NativeLibraryHelpers::CheckStatus(System.IntPtr,Microsoft.Azure.ObjectAnchors.status)
extern void NativeLibraryHelpers_CheckStatus_mA436F67CFB77F73D68FF26F8B3F5CD70E9947AFB (void);
// 0x00000003 System.UInt64 Microsoft.Azure.ObjectAnchors.ProjectedObjectHelpers::ConvertHandleToCookie(System.IntPtr)
extern void ProjectedObjectHelpers_ConvertHandleToCookie_m9FC9FB94EDD1116804A014E7AFAD40DA1C68C123 (void);
// 0x00000004 System.IntPtr Microsoft.Azure.ObjectAnchors.ProjectedObjectHelpers::ConvertCookieToHandle(System.UInt64)
extern void ProjectedObjectHelpers_ConvertCookieToHandle_m3DA1BA2237A712AB2ECBBEFD257E1DC573D49551 (void);
// 0x00000005 System.UInt64 Microsoft.Azure.ObjectAnchors.ICachedObject::get_Cookie()
// 0x00000006 System.Void Microsoft.Azure.ObjectAnchors.ProjectedObjectEventHandlerCache::AddEventHandler(Microsoft.Azure.ObjectAnchors.ICachedObject,System.String,T)
// 0x00000007 System.Void Microsoft.Azure.ObjectAnchors.ProjectedObjectEventHandlerCache::RemoveEventHandler(Microsoft.Azure.ObjectAnchors.ICachedObject,System.String,T)
// 0x00000008 T Microsoft.Azure.ObjectAnchors.ProjectedObjectEventHandlerCache::GetEventHandler(Microsoft.Azure.ObjectAnchors.ICachedObject,System.String)
// 0x00000009 System.Void Microsoft.Azure.ObjectAnchors.ProjectedObjectEventHandlerCache::Clear(System.UInt64)
extern void ProjectedObjectEventHandlerCache_Clear_m060BD3A20B6FBA81148FC0339EF165CEB5184BA5 (void);
// 0x0000000A System.Collections.Generic.IDictionary`2<System.String,System.Delegate> Microsoft.Azure.ObjectAnchors.ProjectedObjectEventHandlerCache::GetOrInitializeEvents(Microsoft.Azure.ObjectAnchors.ICachedObject)
extern void ProjectedObjectEventHandlerCache_GetOrInitializeEvents_mC420BAC6A5A78A15BBE0F159EC3741C41330A2D6 (void);
// 0x0000000B System.Void Microsoft.Azure.ObjectAnchors.ProjectedObjectEventHandlerCache::.cctor()
extern void ProjectedObjectEventHandlerCache__cctor_mC768755428F06ECEF6CC37E803B7F24904FADAEA (void);
// 0x0000000C System.Void Microsoft.Azure.ObjectAnchors.ProjectedObjectCache::.cctor()
extern void ProjectedObjectCache__cctor_mBE02F96BE80FF20486EF568B031D8F71B179F7EF (void);
// 0x0000000D System.Void Microsoft.Azure.ObjectAnchors.ProjectedObjectCache::Add(Microsoft.Azure.ObjectAnchors.ICachedObject)
extern void ProjectedObjectCache_Add_m0926A926B7DFB10EDF216C881B51A88A2B5E3E8A (void);
// 0x0000000E T Microsoft.Azure.ObjectAnchors.ProjectedObjectCache::GetOrCreate(System.UInt64,System.Func`2<System.UInt64,T>)
// 0x0000000F System.Void Microsoft.Azure.ObjectAnchors.ProjectedObjectCache::Remove(System.UInt64)
extern void ProjectedObjectCache_Remove_mB1955A9D59990322834DC9C56DF67FB286BBC99F (void);
// 0x00000010 System.Void Microsoft.Azure.ObjectAnchors.ProjectedObjectCache::ProjectedObjectCleanupHandler(System.IntPtr)
extern void ProjectedObjectCache_ProjectedObjectCleanupHandler_mFAB3B7F3ADB8A72C0459177CA9E96FEEFD11A20B (void);
// 0x00000011 System.Void Microsoft.Azure.ObjectAnchors.ObjectInstanceChangedHandlerNative::.ctor(System.Object,System.IntPtr)
extern void ObjectInstanceChangedHandlerNative__ctor_mCBDF90186A9DA49597A08DCEA847279DE0200C59 (void);
// 0x00000012 System.Void Microsoft.Azure.ObjectAnchors.ObjectInstanceChangedHandlerNative::Invoke(System.UInt64,System.IntPtr)
extern void ObjectInstanceChangedHandlerNative_Invoke_mBA3942B85189A958856284A76F7A2861AD58AAFE (void);
// 0x00000013 System.Void Microsoft.Azure.ObjectAnchors.ProjectedObjectCleanupNative::.ctor(System.Object,System.IntPtr)
extern void ProjectedObjectCleanupNative__ctor_m0C74DAC4ED07C9DC6A5196CCC2BF2DAE9841A8CC (void);
// 0x00000014 System.Void Microsoft.Azure.ObjectAnchors.ProjectedObjectCleanupNative::Invoke(System.IntPtr)
extern void ProjectedObjectCleanupNative_Invoke_m3354E24E969C5FDD77D8A6E2C5A94B7C9B47A664 (void);
// 0x00000015 Microsoft.Azure.ObjectAnchors.status Microsoft.Azure.ObjectAnchors.NativeLibrary::aoa_account_information_create_guid_account_id_string_account_key_string_account_domain(System.Guid,System.String,System.String,System.IntPtr&)
extern void NativeLibrary_aoa_account_information_create_guid_account_id_string_account_key_string_account_domain_mCEE363218EC4C887319DE66754BBD66FEE4DAE70 (void);
// 0x00000016 Microsoft.Azure.ObjectAnchors.status Microsoft.Azure.ObjectAnchors.NativeLibrary::aoa_account_information_release(System.IntPtr)
extern void NativeLibrary_aoa_account_information_release_mC96CA8BBDB53C886C293839985E5183A00735A7F (void);
// 0x00000017 Microsoft.Azure.ObjectAnchors.status Microsoft.Azure.ObjectAnchors.NativeLibrary::aoa_get_error_details(System.IntPtr,System.String&,System.String&,System.String&)
extern void NativeLibrary_aoa_get_error_details_m22D8E461DD43C7FA6A0755BE1ABF74C349DA7CA4 (void);
// 0x00000018 Microsoft.Azure.ObjectAnchors.status Microsoft.Azure.ObjectAnchors.NativeLibrary::aoa_ilist_object_instance_addref(System.IntPtr)
extern void NativeLibrary_aoa_ilist_object_instance_addref_mB98BA56B0D8DC23369B9D7CF35E5820591FF28FA (void);
// 0x00000019 Microsoft.Azure.ObjectAnchors.status Microsoft.Azure.ObjectAnchors.NativeLibrary::aoa_ilist_object_instance_get_count(System.IntPtr,System.Int32&)
extern void NativeLibrary_aoa_ilist_object_instance_get_count_m719ED779D6EB500F062B7F40257FFC989293AEB0 (void);
// 0x0000001A Microsoft.Azure.ObjectAnchors.status Microsoft.Azure.ObjectAnchors.NativeLibrary::aoa_ilist_object_instance_get_item(System.IntPtr,System.Int32,System.IntPtr&)
extern void NativeLibrary_aoa_ilist_object_instance_get_item_mC81FA995DBDDE9F528E01F7A84F44C4043379966 (void);
// 0x0000001B Microsoft.Azure.ObjectAnchors.status Microsoft.Azure.ObjectAnchors.NativeLibrary::aoa_ilist_object_instance_release(System.IntPtr)
extern void NativeLibrary_aoa_ilist_object_instance_release_m60C7A72597E9ABF4FB4C49FB2DF1596214C18A0F (void);
// 0x0000001C Microsoft.Azure.ObjectAnchors.status Microsoft.Azure.ObjectAnchors.NativeLibrary::aoa_ilist_object_instance_remove_item(System.IntPtr,System.Int32)
extern void NativeLibrary_aoa_ilist_object_instance_remove_item_mD1E0B9919CABBD051A435D79E6C11A23E6832DE4 (void);
// 0x0000001D Microsoft.Azure.ObjectAnchors.status Microsoft.Azure.ObjectAnchors.NativeLibrary::aoa_ilist_object_instance_set_item(System.IntPtr,System.Int32,System.IntPtr)
extern void NativeLibrary_aoa_ilist_object_instance_set_item_m41547EF771BC0D2981DABF7650D83959467341F7 (void);
// 0x0000001E Microsoft.Azure.ObjectAnchors.status Microsoft.Azure.ObjectAnchors.NativeLibrary::aoa_object_anchors_session_create_account_information_account_information(System.IntPtr,System.IntPtr&)
extern void NativeLibrary_aoa_object_anchors_session_create_account_information_account_information_m14998A47BABF92511C8A0F8F9A3812F3C3084B2C (void);
// 0x0000001F Microsoft.Azure.ObjectAnchors.status Microsoft.Azure.ObjectAnchors.NativeLibrary::aoa_object_anchors_session_create_object_observer(System.IntPtr,System.IntPtr&)
extern void NativeLibrary_aoa_object_anchors_session_create_object_observer_m59D2064BD75B91EDC4AF8DD4D6A2086296914C01 (void);
// 0x00000020 Microsoft.Azure.ObjectAnchors.status Microsoft.Azure.ObjectAnchors.NativeLibrary::aoa_object_anchors_session_release(System.IntPtr)
extern void NativeLibrary_aoa_object_anchors_session_release_mF2F891B8C3730FF8B045A55391AC38DDC2C86F8D (void);
// 0x00000021 Microsoft.Azure.ObjectAnchors.status Microsoft.Azure.ObjectAnchors.NativeLibrary::aoa_object_instance_addref(System.IntPtr)
extern void NativeLibrary_aoa_object_instance_addref_m08F2CAF645E85D5941B41720AC281275AB9C323D (void);
// 0x00000022 Microsoft.Azure.ObjectAnchors.status Microsoft.Azure.ObjectAnchors.NativeLibrary::aoa_object_instance_changed_event_args_addref(System.IntPtr)
extern void NativeLibrary_aoa_object_instance_changed_event_args_addref_m0D73C8327FA4230DAD480D34E67B3DA5D528E3E8 (void);
// 0x00000023 Microsoft.Azure.ObjectAnchors.status Microsoft.Azure.ObjectAnchors.NativeLibrary::aoa_object_instance_changed_event_args_release(System.IntPtr)
extern void NativeLibrary_aoa_object_instance_changed_event_args_release_m90D0B57A13BEA56E4F0FB5075D733266C74C4DF7 (void);
// 0x00000024 Microsoft.Azure.ObjectAnchors.status Microsoft.Azure.ObjectAnchors.NativeLibrary::aoa_object_instance_dispose(System.IntPtr)
extern void NativeLibrary_aoa_object_instance_dispose_mA5D33C08A23DA635471A9589A6D2AFB6D1863FFF (void);
// 0x00000025 Microsoft.Azure.ObjectAnchors.status Microsoft.Azure.ObjectAnchors.NativeLibrary::aoa_object_instance_get_mode(System.IntPtr,Microsoft.Azure.ObjectAnchors.ObjectInstanceTrackingMode&)
extern void NativeLibrary_aoa_object_instance_get_mode_mBF16F81D305A07262A960EE207BF88D540354037 (void);
// 0x00000026 Microsoft.Azure.ObjectAnchors.status Microsoft.Azure.ObjectAnchors.NativeLibrary::aoa_object_instance_get_model_id(System.IntPtr,System.Guid&)
extern void NativeLibrary_aoa_object_instance_get_model_id_mDCF3BDFC9ECF4973BDE5F51E5DF2BEA943621AF5 (void);
// 0x00000027 Microsoft.Azure.ObjectAnchors.status Microsoft.Azure.ObjectAnchors.NativeLibrary::aoa_object_instance_placement_addref(System.IntPtr)
extern void NativeLibrary_aoa_object_instance_placement_addref_m566D9522FD374E17D3A8C35A3345F8A9882B8622 (void);
// 0x00000028 Microsoft.Azure.ObjectAnchors.status Microsoft.Azure.ObjectAnchors.NativeLibrary::aoa_object_instance_placement_compute_model_pose_for_view(System.IntPtr,Microsoft.Azure.ObjectAnchors.SpatialGraph.SpatialPose,System.Numerics.Matrix4x4,Microsoft.Azure.ObjectAnchors.SpatialGraph.SpatialPose&)
extern void NativeLibrary_aoa_object_instance_placement_compute_model_pose_for_view_m2E43F617665C8DACA243324011557950B3A1E720 (void);
// 0x00000029 Microsoft.Azure.ObjectAnchors.status Microsoft.Azure.ObjectAnchors.NativeLibrary::aoa_object_instance_placement_get_state(System.IntPtr,Microsoft.Azure.ObjectAnchors.ObjectInstanceStateAbi&)
extern void NativeLibrary_aoa_object_instance_placement_get_state_m8B9E2349546B291FFE91CAF1A711A5B5300888EC (void);
// 0x0000002A Microsoft.Azure.ObjectAnchors.status Microsoft.Azure.ObjectAnchors.NativeLibrary::aoa_object_instance_placement_release(System.IntPtr)
extern void NativeLibrary_aoa_object_instance_placement_release_mB04DA7ACE49AA87DBFFA15B02E49A8B52F23E662 (void);
// 0x0000002B Microsoft.Azure.ObjectAnchors.status Microsoft.Azure.ObjectAnchors.NativeLibrary::aoa_object_instance_release(System.IntPtr)
extern void NativeLibrary_aoa_object_instance_release_m9711006A16A58188D5D1565512200F1C57C78FB4 (void);
// 0x0000002C Microsoft.Azure.ObjectAnchors.status Microsoft.Azure.ObjectAnchors.NativeLibrary::aoa_object_instance_set_changed(System.IntPtr,System.UInt64,Microsoft.Azure.ObjectAnchors.ObjectInstanceChangedHandlerNative)
extern void NativeLibrary_aoa_object_instance_set_changed_m02EF625B1034F88695B1A8A4DA19AEBBD20887A7 (void);
// 0x0000002D Microsoft.Azure.ObjectAnchors.status Microsoft.Azure.ObjectAnchors.NativeLibrary::aoa_object_instance_set_mode(System.IntPtr,Microsoft.Azure.ObjectAnchors.ObjectInstanceTrackingMode)
extern void NativeLibrary_aoa_object_instance_set_mode_mE6879BBC6E68369B1CB052D1F8FCD27895D8ECD3 (void);
// 0x0000002E Microsoft.Azure.ObjectAnchors.status Microsoft.Azure.ObjectAnchors.NativeLibrary::aoa_object_instance_try_get_current_placement(System.IntPtr,Microsoft.Azure.ObjectAnchors.SpatialGraph.SpatialGraphCoordinateSystem,System.IntPtr&)
extern void NativeLibrary_aoa_object_instance_try_get_current_placement_mC6180EC67035C0414FCF082EF7CE5733687A6B50 (void);
// 0x0000002F Microsoft.Azure.ObjectAnchors.status Microsoft.Azure.ObjectAnchors.NativeLibrary::aoa_object_model_addref(System.IntPtr)
extern void NativeLibrary_aoa_object_model_addref_m87A9CCA92D1B15211F2513F5FD5A05EBAB2FECD9 (void);
// 0x00000030 Microsoft.Azure.ObjectAnchors.status Microsoft.Azure.ObjectAnchors.NativeLibrary::aoa_object_model_dispose(System.IntPtr)
extern void NativeLibrary_aoa_object_model_dispose_mB73C9B64E3C592ACCE38EF1E2F5E4EDD27A9759D (void);
// 0x00000031 Microsoft.Azure.ObjectAnchors.status Microsoft.Azure.ObjectAnchors.NativeLibrary::aoa_object_model_get_bounding_box(System.IntPtr,Microsoft.Azure.ObjectAnchors.SpatialGraph.SpatialOrientedBox&)
extern void NativeLibrary_aoa_object_model_get_bounding_box_m45877AE3762D332A45285F9C498AA2E19C30083D (void);
// 0x00000032 Microsoft.Azure.ObjectAnchors.status Microsoft.Azure.ObjectAnchors.NativeLibrary::aoa_object_model_get_id(System.IntPtr,System.Guid&)
extern void NativeLibrary_aoa_object_model_get_id_mBF006274146112F3D206FA6658A67D18703140F6 (void);
// 0x00000033 Microsoft.Azure.ObjectAnchors.status Microsoft.Azure.ObjectAnchors.NativeLibrary::aoa_object_model_get_origin_to_center_transform(System.IntPtr,System.Numerics.Matrix4x4&)
extern void NativeLibrary_aoa_object_model_get_origin_to_center_transform_m5D557735182BFFF5E8024E75B8670841B9E96988 (void);
// 0x00000034 Microsoft.Azure.ObjectAnchors.status Microsoft.Azure.ObjectAnchors.NativeLibrary::aoa_object_model_get_triangle_index_count(System.IntPtr,System.UInt32&)
extern void NativeLibrary_aoa_object_model_get_triangle_index_count_mBE802EDABD3B8B9160FF7E40DC6B127382709898 (void);
// 0x00000035 Microsoft.Azure.ObjectAnchors.status Microsoft.Azure.ObjectAnchors.NativeLibrary::aoa_object_model_get_triangle_indices(System.IntPtr,System.UInt32[],System.Int32)
extern void NativeLibrary_aoa_object_model_get_triangle_indices_m156B0606D0490F23C654647BE389BAF8AC7AD19E (void);
// 0x00000036 Microsoft.Azure.ObjectAnchors.status Microsoft.Azure.ObjectAnchors.NativeLibrary::aoa_object_model_get_vertex_count(System.IntPtr,System.UInt32&)
extern void NativeLibrary_aoa_object_model_get_vertex_count_mC1B3F22E718218E5410444CFFD343BA656989839 (void);
// 0x00000037 Microsoft.Azure.ObjectAnchors.status Microsoft.Azure.ObjectAnchors.NativeLibrary::aoa_object_model_get_vertex_normals(System.IntPtr,System.Numerics.Vector3[],System.Int32)
extern void NativeLibrary_aoa_object_model_get_vertex_normals_mBE66DB92738424D3908FD4B2AE8890F6B6A6BF41 (void);
// 0x00000038 Microsoft.Azure.ObjectAnchors.status Microsoft.Azure.ObjectAnchors.NativeLibrary::aoa_object_model_get_vertex_positions(System.IntPtr,System.Numerics.Vector3[],System.Int32)
extern void NativeLibrary_aoa_object_model_get_vertex_positions_m2BBD475029775596409415E48136E4AD93038D48 (void);
// 0x00000039 Microsoft.Azure.ObjectAnchors.status Microsoft.Azure.ObjectAnchors.NativeLibrary::aoa_object_model_release(System.IntPtr)
extern void NativeLibrary_aoa_object_model_release_mD83F3B7281613B3E965B3C13DCECAE3971962DC9 (void);
// 0x0000003A Microsoft.Azure.ObjectAnchors.status Microsoft.Azure.ObjectAnchors.NativeLibrary::aoa_object_observer_addref(System.IntPtr)
extern void NativeLibrary_aoa_object_observer_addref_mE359F199F967E6752EBB0631488FE8F6AD1E6BDD (void);
// 0x0000003B Microsoft.Azure.ObjectAnchors.status Microsoft.Azure.ObjectAnchors.NativeLibrary::aoa_object_observer_detect_async_queries(System.IntPtr,System.IntPtr[],System.Int32,System.IntPtr&)
extern void NativeLibrary_aoa_object_observer_detect_async_queries_m32486523BD829751B6B210889F3ED9770B2DCFAC (void);
// 0x0000003C Microsoft.Azure.ObjectAnchors.status Microsoft.Azure.ObjectAnchors.NativeLibrary::aoa_object_observer_dispose(System.IntPtr)
extern void NativeLibrary_aoa_object_observer_dispose_m5032321832411E82F05F1160D4953992C15479C1 (void);
// 0x0000003D Microsoft.Azure.ObjectAnchors.status Microsoft.Azure.ObjectAnchors.NativeLibrary::aoa_object_observer_is_supported(System.Boolean&)
extern void NativeLibrary_aoa_object_observer_is_supported_mE1BC7B524BD51A824A8137468C8D1F0B2001641A (void);
// 0x0000003E Microsoft.Azure.ObjectAnchors.status Microsoft.Azure.ObjectAnchors.NativeLibrary::aoa_object_observer_load_object_model_async(System.IntPtr,System.Byte[],System.Int32,System.IntPtr&)
extern void NativeLibrary_aoa_object_observer_load_object_model_async_mAC60626C1FC9366F59E886708607481BD1183106 (void);
// 0x0000003F Microsoft.Azure.ObjectAnchors.status Microsoft.Azure.ObjectAnchors.NativeLibrary::aoa_object_observer_release(System.IntPtr)
extern void NativeLibrary_aoa_object_observer_release_m7AF67C557974D455064642647E81B5F5AED580AA (void);
// 0x00000040 Microsoft.Azure.ObjectAnchors.status Microsoft.Azure.ObjectAnchors.NativeLibrary::aoa_object_observer_request_access_async(Microsoft.Azure.ObjectAnchors.ObjectObserverAccessStatus&)
extern void NativeLibrary_aoa_object_observer_request_access_async_m23C8FEED89C15364833C24C1B64FD5FDB8F43977 (void);
// 0x00000041 Microsoft.Azure.ObjectAnchors.status Microsoft.Azure.ObjectAnchors.NativeLibrary::aoa_object_query_create_object_model_model(System.IntPtr,System.IntPtr&)
extern void NativeLibrary_aoa_object_query_create_object_model_model_m4C12CB6CC284AE1F97764F43062E1DA034B00685 (void);
// 0x00000042 Microsoft.Azure.ObjectAnchors.status Microsoft.Azure.ObjectAnchors.NativeLibrary::aoa_object_query_create_object_model_model_object_observation_mode_observation_mode(System.IntPtr,Microsoft.Azure.ObjectAnchors.ObjectObservationMode,System.IntPtr&)
extern void NativeLibrary_aoa_object_query_create_object_model_model_object_observation_mode_observation_mode_mBFBC13FED236586E7C684BAD7FB78BABC1DAB1EB (void);
// 0x00000043 Microsoft.Azure.ObjectAnchors.status Microsoft.Azure.ObjectAnchors.NativeLibrary::aoa_object_query_dispose(System.IntPtr)
extern void NativeLibrary_aoa_object_query_dispose_m97B46870B2A0D2C75E0F767543B156964596E0FC (void);
// 0x00000044 Microsoft.Azure.ObjectAnchors.status Microsoft.Azure.ObjectAnchors.NativeLibrary::aoa_object_query_release(System.IntPtr)
extern void NativeLibrary_aoa_object_query_release_mC2D906282E18EC8D1E5FCAF5CF0A73CF6F7B5948 (void);
// 0x00000045 Microsoft.Azure.ObjectAnchors.status Microsoft.Azure.ObjectAnchors.NativeLibrary::aoa_set_projected_object_cleanup(Microsoft.Azure.ObjectAnchors.ProjectedObjectCleanupNative)
extern void NativeLibrary_aoa_set_projected_object_cleanup_m2D9E612165EF1477AE96D257FCA5B3C8DBE0C324 (void);
// 0x00000046 System.Int32 Microsoft.Azure.ObjectAnchors.BasePrivateList`1::InternalGetCount()
// 0x00000047 T Microsoft.Azure.ObjectAnchors.BasePrivateList`1::InternalGetItem(System.Int32)
// 0x00000048 System.Void Microsoft.Azure.ObjectAnchors.BasePrivateList`1::InternalSetItem(System.Int32,T)
// 0x00000049 System.Void Microsoft.Azure.ObjectAnchors.BasePrivateList`1::InternalRemoveItem(System.Int32)
// 0x0000004A System.Int32 Microsoft.Azure.ObjectAnchors.BasePrivateList`1::get_Count()
// 0x0000004B System.Boolean Microsoft.Azure.ObjectAnchors.BasePrivateList`1::get_IsReadOnly()
// 0x0000004C T Microsoft.Azure.ObjectAnchors.BasePrivateList`1::get_Item(System.Int32)
// 0x0000004D System.Void Microsoft.Azure.ObjectAnchors.BasePrivateList`1::set_Item(System.Int32,T)
// 0x0000004E System.Int32 Microsoft.Azure.ObjectAnchors.BasePrivateList`1::IndexOf(T)
// 0x0000004F System.Void Microsoft.Azure.ObjectAnchors.BasePrivateList`1::Insert(System.Int32,T)
// 0x00000050 System.Void Microsoft.Azure.ObjectAnchors.BasePrivateList`1::RemoveAt(System.Int32)
// 0x00000051 System.Void Microsoft.Azure.ObjectAnchors.BasePrivateList`1::Add(T)
// 0x00000052 System.Void Microsoft.Azure.ObjectAnchors.BasePrivateList`1::Clear()
// 0x00000053 System.Boolean Microsoft.Azure.ObjectAnchors.BasePrivateList`1::Contains(T)
// 0x00000054 System.Void Microsoft.Azure.ObjectAnchors.BasePrivateList`1::CopyTo(T[],System.Int32)
// 0x00000055 System.Boolean Microsoft.Azure.ObjectAnchors.BasePrivateList`1::Remove(T)
// 0x00000056 System.Collections.Generic.IEnumerator`1<T> Microsoft.Azure.ObjectAnchors.BasePrivateList`1::GetEnumerator()
// 0x00000057 System.Collections.IEnumerator Microsoft.Azure.ObjectAnchors.BasePrivateList`1::System.Collections.IEnumerable.GetEnumerator()
// 0x00000058 System.Void Microsoft.Azure.ObjectAnchors.BasePrivateList`1::.ctor()
// 0x00000059 System.Void Microsoft.Azure.ObjectAnchors.BasePrivateList`1/<GetEnumerator>d__19::.ctor(System.Int32)
// 0x0000005A System.Void Microsoft.Azure.ObjectAnchors.BasePrivateList`1/<GetEnumerator>d__19::System.IDisposable.Dispose()
// 0x0000005B System.Boolean Microsoft.Azure.ObjectAnchors.BasePrivateList`1/<GetEnumerator>d__19::MoveNext()
// 0x0000005C T Microsoft.Azure.ObjectAnchors.BasePrivateList`1/<GetEnumerator>d__19::System.Collections.Generic.IEnumerator<T>.get_Current()
// 0x0000005D System.Void Microsoft.Azure.ObjectAnchors.BasePrivateList`1/<GetEnumerator>d__19::System.Collections.IEnumerator.Reset()
// 0x0000005E System.Object Microsoft.Azure.ObjectAnchors.BasePrivateList`1/<GetEnumerator>d__19::System.Collections.IEnumerator.get_Current()
// 0x0000005F System.Void Microsoft.Azure.ObjectAnchors.BasePrivateList`1/<System-Collections-IEnumerable-GetEnumerator>d__20::.ctor(System.Int32)
// 0x00000060 System.Void Microsoft.Azure.ObjectAnchors.BasePrivateList`1/<System-Collections-IEnumerable-GetEnumerator>d__20::System.IDisposable.Dispose()
// 0x00000061 System.Boolean Microsoft.Azure.ObjectAnchors.BasePrivateList`1/<System-Collections-IEnumerable-GetEnumerator>d__20::MoveNext()
// 0x00000062 System.Object Microsoft.Azure.ObjectAnchors.BasePrivateList`1/<System-Collections-IEnumerable-GetEnumerator>d__20::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
// 0x00000063 System.Void Microsoft.Azure.ObjectAnchors.BasePrivateList`1/<System-Collections-IEnumerable-GetEnumerator>d__20::System.Collections.IEnumerator.Reset()
// 0x00000064 System.Object Microsoft.Azure.ObjectAnchors.BasePrivateList`1/<System-Collections-IEnumerable-GetEnumerator>d__20::System.Collections.IEnumerator.get_Current()
// 0x00000065 System.Void Microsoft.Azure.ObjectAnchors.IList_ObjectInstance::.ctor(System.IntPtr,System.Boolean)
extern void IList_ObjectInstance__ctor_m30F424DA7B6668866EB71AB0335F7171B814DDEC (void);
// 0x00000066 System.Void Microsoft.Azure.ObjectAnchors.IList_ObjectInstance::Finalize()
extern void IList_ObjectInstance_Finalize_m80AFB06BC5407C1849A7C1AF68D1DE7EF54C01B2 (void);
// 0x00000067 System.Int32 Microsoft.Azure.ObjectAnchors.IList_ObjectInstance::InternalGetCount()
extern void IList_ObjectInstance_InternalGetCount_mB59DEE215A76B07E94CA92BBDE56095565A58BB8 (void);
// 0x00000068 Microsoft.Azure.ObjectAnchors.ObjectInstance Microsoft.Azure.ObjectAnchors.IList_ObjectInstance::InternalGetItem(System.Int32)
extern void IList_ObjectInstance_InternalGetItem_m217561A705A44458F0F2DA5B755CE0B6F6F208EC (void);
// 0x00000069 System.Void Microsoft.Azure.ObjectAnchors.IList_ObjectInstance::InternalSetItem(System.Int32,Microsoft.Azure.ObjectAnchors.ObjectInstance)
extern void IList_ObjectInstance_InternalSetItem_mE6F6E69C827690596C87A2D5A1540840E15DC2C3 (void);
// 0x0000006A System.Void Microsoft.Azure.ObjectAnchors.IList_ObjectInstance::InternalRemoveItem(System.Int32)
extern void IList_ObjectInstance_InternalRemoveItem_mA7F6704A39ECFF5FEECADBCBB1D7903939E203AB (void);
// 0x0000006B Microsoft.Azure.ObjectAnchors.ObjectInstanceState Microsoft.Azure.ObjectAnchors.ObjectInstanceStateAbi::Convert()
extern void ObjectInstanceStateAbi_Convert_mFF2544AB3B8ED1234C773C24A53200631AF92D9D (void);
// 0x0000006C Microsoft.Azure.ObjectAnchors.ObjectInstanceState Microsoft.Azure.ObjectAnchors.ObjectInstanceStateAbi::Convert(Microsoft.Azure.ObjectAnchors.ObjectInstanceStateAbi)
extern void ObjectInstanceStateAbi_Convert_m0B8112EF736B31C6EAD63D072606F9871E1A3B14 (void);
// 0x0000006D System.Void Microsoft.Azure.ObjectAnchors.ObjectInstanceChangedHandler::.ctor(System.Object,System.IntPtr)
extern void ObjectInstanceChangedHandler__ctor_mD0BF7FA01667A271E68E345E99C36DB0CB0DEC0F (void);
// 0x0000006E System.Void Microsoft.Azure.ObjectAnchors.ObjectInstanceChangedHandler::Invoke(System.Object,Microsoft.Azure.ObjectAnchors.ObjectInstanceChangedEventArgs)
extern void ObjectInstanceChangedHandler_Invoke_mD236E264042F702BDD18448503BA51440EE0F926 (void);
// 0x0000006F System.Void Microsoft.Azure.ObjectAnchors.AccountInformation::.ctor(System.Guid,System.String,System.String)
extern void AccountInformation__ctor_mC1FDB22B3176A9776354BC020D95FF7939FC7EF1 (void);
// 0x00000070 System.Void Microsoft.Azure.ObjectAnchors.AccountInformation::Finalize()
extern void AccountInformation_Finalize_mCD5E33B124CF4DA9C02A17579CAA7DEC4E122877 (void);
// 0x00000071 System.UInt64 Microsoft.Azure.ObjectAnchors.AccountInformation::Microsoft.Azure.ObjectAnchors.ICachedObject.get_Cookie()
extern void AccountInformation_Microsoft_Azure_ObjectAnchors_ICachedObject_get_Cookie_m497F34B64FC70DE10966EADC86AC1F1E33A69799 (void);
// 0x00000072 System.Void Microsoft.Azure.ObjectAnchors.ObjectAnchorsSession::.ctor(Microsoft.Azure.ObjectAnchors.AccountInformation)
extern void ObjectAnchorsSession__ctor_m0D6FE6A5194D2D4518638AE7CF12B9DCEAC9080D (void);
// 0x00000073 System.Void Microsoft.Azure.ObjectAnchors.ObjectAnchorsSession::Finalize()
extern void ObjectAnchorsSession_Finalize_m6B81B17546541DAAB2B730A92D6E84C6C7476037 (void);
// 0x00000074 Microsoft.Azure.ObjectAnchors.ObjectObserver Microsoft.Azure.ObjectAnchors.ObjectAnchorsSession::CreateObjectObserver()
extern void ObjectAnchorsSession_CreateObjectObserver_m210A3ADFA0A9285A082BB0B8597EC853FA365A83 (void);
// 0x00000075 System.UInt64 Microsoft.Azure.ObjectAnchors.ObjectAnchorsSession::Microsoft.Azure.ObjectAnchors.ICachedObject.get_Cookie()
extern void ObjectAnchorsSession_Microsoft_Azure_ObjectAnchors_ICachedObject_get_Cookie_m92EA0946A1CB9967FF16AA90B63BE1E948CED3E3 (void);
// 0x00000076 System.Void Microsoft.Azure.ObjectAnchors.ObjectInstanceChangedEventArgs::.ctor(System.IntPtr,System.Boolean)
extern void ObjectInstanceChangedEventArgs__ctor_mB85BEFF36CEFA84ED3A1C7DDB8AC40C59176238C (void);
// 0x00000077 System.Void Microsoft.Azure.ObjectAnchors.ObjectInstanceChangedEventArgs::Finalize()
extern void ObjectInstanceChangedEventArgs_Finalize_m25ABF60DAF2EFF925331E2A878308F0289F843BE (void);
// 0x00000078 System.UInt64 Microsoft.Azure.ObjectAnchors.ObjectInstanceChangedEventArgs::Microsoft.Azure.ObjectAnchors.ICachedObject.get_Cookie()
extern void ObjectInstanceChangedEventArgs_Microsoft_Azure_ObjectAnchors_ICachedObject_get_Cookie_mA44F74655AEEE272EDAAB9DAFE317EDA80927B4F (void);
// 0x00000079 Microsoft.Azure.ObjectAnchors.ObjectInstanceChangedEventArgs Microsoft.Azure.ObjectAnchors.ObjectInstanceChangedEventArgs::GetOrCreateInstance(System.IntPtr,System.Boolean)
extern void ObjectInstanceChangedEventArgs_GetOrCreateInstance_m72D6FAF407894866FE372DC69CB6A20B67A0D011 (void);
// 0x0000007A Microsoft.Azure.ObjectAnchors.ObjectInstanceChangedEventArgs Microsoft.Azure.ObjectAnchors.ObjectInstanceChangedEventArgs::GetOrCreateInstance(System.UInt64,System.Boolean)
extern void ObjectInstanceChangedEventArgs_GetOrCreateInstance_m238ACC6AC385106A963EA4A4E6EFC9706136AF58 (void);
// 0x0000007B System.Void Microsoft.Azure.ObjectAnchors.ObjectInstanceChangedEventArgs/<>c__DisplayClass6_0::.ctor()
extern void U3CU3Ec__DisplayClass6_0__ctor_m66D19AC81CA76C807989137E3609BA522A999159 (void);
// 0x0000007C Microsoft.Azure.ObjectAnchors.ObjectInstanceChangedEventArgs Microsoft.Azure.ObjectAnchors.ObjectInstanceChangedEventArgs/<>c__DisplayClass6_0::<GetOrCreateInstance>b__0(System.UInt64)
extern void U3CU3Ec__DisplayClass6_0_U3CGetOrCreateInstanceU3Eb__0_m4A1BF5D6A4B3CC4C48BAF483275C8492BCE22BAC (void);
// 0x0000007D System.Void Microsoft.Azure.ObjectAnchors.ObjectInstance::.ctor(System.IntPtr,System.Boolean)
extern void ObjectInstance__ctor_mC2C8005F9EFC698F6FF9A568B60406148CE362CA (void);
// 0x0000007E System.Void Microsoft.Azure.ObjectAnchors.ObjectInstance::Finalize()
extern void ObjectInstance_Finalize_m1669F82EAD80DEC86D3FD9F0CAA323D02D511D91 (void);
// 0x0000007F System.Void Microsoft.Azure.ObjectAnchors.ObjectInstance::Dispose()
extern void ObjectInstance_Dispose_m04E7446118B54FF9C0A6BE49AFB410878032EA0E (void);
// 0x00000080 System.Guid Microsoft.Azure.ObjectAnchors.ObjectInstance::get_ModelId()
extern void ObjectInstance_get_ModelId_m21DE7774020CB31FD7B62C9A50042A8F48EBE8CD (void);
// 0x00000081 Microsoft.Azure.ObjectAnchors.ObjectInstanceTrackingMode Microsoft.Azure.ObjectAnchors.ObjectInstance::get_Mode()
extern void ObjectInstance_get_Mode_mCA224372FEAEB91B167B6ED551EE7C095D1F49B4 (void);
// 0x00000082 System.Void Microsoft.Azure.ObjectAnchors.ObjectInstance::set_Mode(Microsoft.Azure.ObjectAnchors.ObjectInstanceTrackingMode)
extern void ObjectInstance_set_Mode_mF1FF7AC2D8256B392879578E2DA42F9EBDC7CF63 (void);
// 0x00000083 System.Void Microsoft.Azure.ObjectAnchors.ObjectInstance::ChangedStaticHandler(System.UInt64,System.IntPtr)
extern void ObjectInstance_ChangedStaticHandler_mEB88F54081FFA44FB88974C35BDC5E0FCDF26659 (void);
// 0x00000084 System.Void Microsoft.Azure.ObjectAnchors.ObjectInstance::add_Changed(Microsoft.Azure.ObjectAnchors.ObjectInstanceChangedHandler)
extern void ObjectInstance_add_Changed_mADB4521E72F1BE8069747E605726E539E961B075 (void);
// 0x00000085 System.Void Microsoft.Azure.ObjectAnchors.ObjectInstance::remove_Changed(Microsoft.Azure.ObjectAnchors.ObjectInstanceChangedHandler)
extern void ObjectInstance_remove_Changed_m229D635D6B4AD4D58E986070F45D9E73D58CF4A3 (void);
// 0x00000086 Microsoft.Azure.ObjectAnchors.ObjectInstancePlacement Microsoft.Azure.ObjectAnchors.ObjectInstance::TryGetCurrentPlacement(Microsoft.Azure.ObjectAnchors.SpatialGraph.SpatialGraphCoordinateSystem)
extern void ObjectInstance_TryGetCurrentPlacement_m09B98C2E698050EB84738A016553E1C9FD7366F4 (void);
// 0x00000087 System.UInt64 Microsoft.Azure.ObjectAnchors.ObjectInstance::Microsoft.Azure.ObjectAnchors.ICachedObject.get_Cookie()
extern void ObjectInstance_Microsoft_Azure_ObjectAnchors_ICachedObject_get_Cookie_m357551ECFBD9CE04DF575C3E1E18B75268B7A431 (void);
// 0x00000088 Microsoft.Azure.ObjectAnchors.ObjectInstance Microsoft.Azure.ObjectAnchors.ObjectInstance::GetOrCreateInstance(System.IntPtr,System.Boolean)
extern void ObjectInstance_GetOrCreateInstance_m15CA9C42DB36EBDA67197795715CA16CFC8A9FB1 (void);
// 0x00000089 Microsoft.Azure.ObjectAnchors.ObjectInstance Microsoft.Azure.ObjectAnchors.ObjectInstance::GetOrCreateInstance(System.UInt64,System.Boolean)
extern void ObjectInstance_GetOrCreateInstance_m9B4B3BE9DF31FFCF7EA51FF466419D97A219E948 (void);
// 0x0000008A System.Void Microsoft.Azure.ObjectAnchors.ObjectInstance::.cctor()
extern void ObjectInstance__cctor_mC3E3226A0D23FB3375C3758AD003FD0F3D58DB14 (void);
// 0x0000008B System.Void Microsoft.Azure.ObjectAnchors.ObjectInstance/<>c__DisplayClass19_0::.ctor()
extern void U3CU3Ec__DisplayClass19_0__ctor_m559ACA8C2120C6E95155B2CC965B5CE8223C7073 (void);
// 0x0000008C Microsoft.Azure.ObjectAnchors.ObjectInstance Microsoft.Azure.ObjectAnchors.ObjectInstance/<>c__DisplayClass19_0::<GetOrCreateInstance>b__0(System.UInt64)
extern void U3CU3Ec__DisplayClass19_0_U3CGetOrCreateInstanceU3Eb__0_mA6FB30C447094ABF65C20447B8163C912FB7DB10 (void);
// 0x0000008D System.Void Microsoft.Azure.ObjectAnchors.ObjectInstancePlacement::.ctor(System.IntPtr,System.Boolean)
extern void ObjectInstancePlacement__ctor_m9EEDE02BC1A13E29C5666D6CB34608E4CF4FA522 (void);
// 0x0000008E System.Void Microsoft.Azure.ObjectAnchors.ObjectInstancePlacement::Finalize()
extern void ObjectInstancePlacement_Finalize_mA8F1985ADDC2D687A503211ABDC77CE48578F23C (void);
// 0x0000008F Microsoft.Azure.ObjectAnchors.ObjectInstanceState Microsoft.Azure.ObjectAnchors.ObjectInstancePlacement::get_State()
extern void ObjectInstancePlacement_get_State_mEAF86903B11AA2D4C7965F2311B694AE0CEFF2B9 (void);
// 0x00000090 Microsoft.Azure.ObjectAnchors.SpatialGraph.SpatialPose Microsoft.Azure.ObjectAnchors.ObjectInstancePlacement::ComputeModelPoseForView(Microsoft.Azure.ObjectAnchors.SpatialGraph.SpatialPose,System.Numerics.Matrix4x4)
extern void ObjectInstancePlacement_ComputeModelPoseForView_m2715948FAB01FC14C4D180E87690CEC0EB6AA640 (void);
// 0x00000091 System.UInt64 Microsoft.Azure.ObjectAnchors.ObjectInstancePlacement::Microsoft.Azure.ObjectAnchors.ICachedObject.get_Cookie()
extern void ObjectInstancePlacement_Microsoft_Azure_ObjectAnchors_ICachedObject_get_Cookie_mA9F92DF3B67A3EEF1B6DBDB11FB4BE6E77B29796 (void);
// 0x00000092 Microsoft.Azure.ObjectAnchors.ObjectInstancePlacement Microsoft.Azure.ObjectAnchors.ObjectInstancePlacement::GetOrCreateInstance(System.IntPtr,System.Boolean)
extern void ObjectInstancePlacement_GetOrCreateInstance_m918CE7A607381FA6DE73D4E4B296498421C4BB8F (void);
// 0x00000093 Microsoft.Azure.ObjectAnchors.ObjectInstancePlacement Microsoft.Azure.ObjectAnchors.ObjectInstancePlacement::GetOrCreateInstance(System.UInt64,System.Boolean)
extern void ObjectInstancePlacement_GetOrCreateInstance_mEBE665CF1D75EAD76FCAFA8F12A2B66E5CD8B51A (void);
// 0x00000094 System.Void Microsoft.Azure.ObjectAnchors.ObjectInstancePlacement/<>c__DisplayClass9_0::.ctor()
extern void U3CU3Ec__DisplayClass9_0__ctor_mF8C98D417878EA666942DDB57BC8F011672EB704 (void);
// 0x00000095 Microsoft.Azure.ObjectAnchors.ObjectInstancePlacement Microsoft.Azure.ObjectAnchors.ObjectInstancePlacement/<>c__DisplayClass9_0::<GetOrCreateInstance>b__0(System.UInt64)
extern void U3CU3Ec__DisplayClass9_0_U3CGetOrCreateInstanceU3Eb__0_m73D9F7D6ECD63B15802024A42F944581529E6450 (void);
// 0x00000096 System.Void Microsoft.Azure.ObjectAnchors.ObjectModel::.ctor(System.IntPtr,System.Boolean)
extern void ObjectModel__ctor_m706AC7BEA8ACDC8A92F5B70B88AD0A88E5FCCE89 (void);
// 0x00000097 System.Void Microsoft.Azure.ObjectAnchors.ObjectModel::Finalize()
extern void ObjectModel_Finalize_mDAEF0512DB5CC1889618FB165F7C7A734DF71D38 (void);
// 0x00000098 System.Void Microsoft.Azure.ObjectAnchors.ObjectModel::Dispose()
extern void ObjectModel_Dispose_m3DFBF40096AFC0C7081ED8E3A0CD2B1824AFCB4E (void);
// 0x00000099 System.Guid Microsoft.Azure.ObjectAnchors.ObjectModel::get_Id()
extern void ObjectModel_get_Id_m58D77C3BA7E326A87C85E66C75907E6E1831893D (void);
// 0x0000009A Microsoft.Azure.ObjectAnchors.SpatialGraph.SpatialOrientedBox Microsoft.Azure.ObjectAnchors.ObjectModel::get_BoundingBox()
extern void ObjectModel_get_BoundingBox_mC47761AFC2F308669B57938DD077EA13173150CC (void);
// 0x0000009B System.Numerics.Matrix4x4 Microsoft.Azure.ObjectAnchors.ObjectModel::get_OriginToCenterTransform()
extern void ObjectModel_get_OriginToCenterTransform_mA92EC2753545E8572CCB5D2CBC0A4D9F96AAE8B3 (void);
// 0x0000009C System.UInt32 Microsoft.Azure.ObjectAnchors.ObjectModel::get_VertexCount()
extern void ObjectModel_get_VertexCount_m32F50C71FF2DBA61CFDB8513AA4F103C61A6050C (void);
// 0x0000009D System.UInt32 Microsoft.Azure.ObjectAnchors.ObjectModel::get_TriangleIndexCount()
extern void ObjectModel_get_TriangleIndexCount_mB04437325D39DC89AD42F55195D4B2015BC7BA0B (void);
// 0x0000009E System.Void Microsoft.Azure.ObjectAnchors.ObjectModel::GetVertexPositions(System.Numerics.Vector3[])
extern void ObjectModel_GetVertexPositions_mCB922A61F60B8EBB7DB0D69F0F5F5CE1E22E5CFE (void);
// 0x0000009F System.Void Microsoft.Azure.ObjectAnchors.ObjectModel::GetVertexNormals(System.Numerics.Vector3[])
extern void ObjectModel_GetVertexNormals_mC7B5D9AEE3AC860EF16EABC5FBA35835D401253E (void);
// 0x000000A0 System.Void Microsoft.Azure.ObjectAnchors.ObjectModel::GetTriangleIndices(System.UInt32[])
extern void ObjectModel_GetTriangleIndices_mE059CF5DE7E98624507A44FB5BBB03E99E96786C (void);
// 0x000000A1 System.UInt64 Microsoft.Azure.ObjectAnchors.ObjectModel::Microsoft.Azure.ObjectAnchors.ICachedObject.get_Cookie()
extern void ObjectModel_Microsoft_Azure_ObjectAnchors_ICachedObject_get_Cookie_mC45AE4BAF52AAE6AD74D2800C02B3DE5D9A70FD9 (void);
// 0x000000A2 Microsoft.Azure.ObjectAnchors.ObjectModel Microsoft.Azure.ObjectAnchors.ObjectModel::GetOrCreateInstance(System.IntPtr,System.Boolean)
extern void ObjectModel_GetOrCreateInstance_m0861B73CC587123D62E9849D85824D6BB15A5418 (void);
// 0x000000A3 Microsoft.Azure.ObjectAnchors.ObjectModel Microsoft.Azure.ObjectAnchors.ObjectModel::GetOrCreateInstance(System.UInt64,System.Boolean)
extern void ObjectModel_GetOrCreateInstance_m20347F8335AFC8474A2E90F03F0F5CEAD5628CD2 (void);
// 0x000000A4 System.Void Microsoft.Azure.ObjectAnchors.ObjectModel/<>c__DisplayClass20_0::.ctor()
extern void U3CU3Ec__DisplayClass20_0__ctor_m591358FDFB91EC8A9CB65F55DBA735DAA1343645 (void);
// 0x000000A5 Microsoft.Azure.ObjectAnchors.ObjectModel Microsoft.Azure.ObjectAnchors.ObjectModel/<>c__DisplayClass20_0::<GetOrCreateInstance>b__0(System.UInt64)
extern void U3CU3Ec__DisplayClass20_0_U3CGetOrCreateInstanceU3Eb__0_mD851487319A7602ADE40B7DC0F0ED7FD4A3565ED (void);
// 0x000000A6 System.Void Microsoft.Azure.ObjectAnchors.ObjectObserver::.ctor(System.IntPtr,System.Boolean)
extern void ObjectObserver__ctor_mE4115D109952F8C98A48E736517E78ED2BC4DB0B (void);
// 0x000000A7 System.Void Microsoft.Azure.ObjectAnchors.ObjectObserver::Finalize()
extern void ObjectObserver_Finalize_m8831B556B444433F965F2B2992D4F232D01BF66D (void);
// 0x000000A8 System.Void Microsoft.Azure.ObjectAnchors.ObjectObserver::Dispose()
extern void ObjectObserver_Dispose_mD62D0BF2684BD5F77E5E1791087EEE410116A738 (void);
// 0x000000A9 System.Boolean Microsoft.Azure.ObjectAnchors.ObjectObserver::IsSupported()
extern void ObjectObserver_IsSupported_m5C7A7B163B097776E5BE2D38D00D7D6656F99EEB (void);
// 0x000000AA System.Threading.Tasks.Task`1<Microsoft.Azure.ObjectAnchors.ObjectObserverAccessStatus> Microsoft.Azure.ObjectAnchors.ObjectObserver::RequestAccessAsync()
extern void ObjectObserver_RequestAccessAsync_m420E3559ABE655EF8D651069A2B3AAE9471668A7 (void);
// 0x000000AB System.Threading.Tasks.Task`1<Microsoft.Azure.ObjectAnchors.ObjectModel> Microsoft.Azure.ObjectAnchors.ObjectObserver::LoadObjectModelAsync(System.Byte[])
extern void ObjectObserver_LoadObjectModelAsync_m84B035496A6E5AFA02FB818AACB05E6F943AB980 (void);
// 0x000000AC System.Threading.Tasks.Task`1<System.Collections.Generic.IList`1<Microsoft.Azure.ObjectAnchors.ObjectInstance>> Microsoft.Azure.ObjectAnchors.ObjectObserver::DetectAsync(Microsoft.Azure.ObjectAnchors.ObjectQuery[])
extern void ObjectObserver_DetectAsync_mF7F6E0A834054FFC6EAF4411ABCBDC1D49FC8C82 (void);
// 0x000000AD System.UInt64 Microsoft.Azure.ObjectAnchors.ObjectObserver::Microsoft.Azure.ObjectAnchors.ICachedObject.get_Cookie()
extern void ObjectObserver_Microsoft_Azure_ObjectAnchors_ICachedObject_get_Cookie_m1BA0E0E82752A057A4E62245B1B9EF7BEA97C78D (void);
// 0x000000AE Microsoft.Azure.ObjectAnchors.ObjectObserver Microsoft.Azure.ObjectAnchors.ObjectObserver::GetOrCreateInstance(System.IntPtr,System.Boolean)
extern void ObjectObserver_GetOrCreateInstance_m66B1E44FF182E026DF1B16B00858A57276AD98A2 (void);
// 0x000000AF Microsoft.Azure.ObjectAnchors.ObjectObserver Microsoft.Azure.ObjectAnchors.ObjectObserver::GetOrCreateInstance(System.UInt64,System.Boolean)
extern void ObjectObserver_GetOrCreateInstance_m0A17F6E3E07EF6BFCA8726205B85236F65C8C37C (void);
// 0x000000B0 System.Void Microsoft.Azure.ObjectAnchors.ObjectObserver/<>c::.cctor()
extern void U3CU3Ec__cctor_mC1CBC3C5BBA942973FD1F1209B228FE597C067DC (void);
// 0x000000B1 System.Void Microsoft.Azure.ObjectAnchors.ObjectObserver/<>c::.ctor()
extern void U3CU3Ec__ctor_mA603BF48A0AFDE03D139623F42A445CFBB117ED8 (void);
// 0x000000B2 Microsoft.Azure.ObjectAnchors.ObjectObserverAccessStatus Microsoft.Azure.ObjectAnchors.ObjectObserver/<>c::<RequestAccessAsync>b__5_0()
extern void U3CU3Ec_U3CRequestAccessAsyncU3Eb__5_0_m3E5AA654A139F9FABD4678800320C456E4A8E4F1 (void);
// 0x000000B3 System.IntPtr Microsoft.Azure.ObjectAnchors.ObjectObserver/<>c::<DetectAsync>b__8_1(Microsoft.Azure.ObjectAnchors.ObjectQuery)
extern void U3CU3Ec_U3CDetectAsyncU3Eb__8_1_m45B52B1518033051B297C761B4EC1E325242207A (void);
// 0x000000B4 System.Void Microsoft.Azure.ObjectAnchors.ObjectObserver/<RequestAccessAsync>d__5::MoveNext()
extern void U3CRequestAccessAsyncU3Ed__5_MoveNext_m9BE51DBB6A32E8A97DDC4A5882C290F766D975DA (void);
// 0x000000B5 System.Void Microsoft.Azure.ObjectAnchors.ObjectObserver/<RequestAccessAsync>d__5::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern void U3CRequestAccessAsyncU3Ed__5_SetStateMachine_m72753B59792EC85ED2521D9B728E0A8E9ECC8664 (void);
// 0x000000B6 System.Void Microsoft.Azure.ObjectAnchors.ObjectObserver/<>c__DisplayClass6_0::.ctor()
extern void U3CU3Ec__DisplayClass6_0__ctor_mEB6D499290488617DFEC71EF165CA8246DAFAC4C (void);
// 0x000000B7 Microsoft.Azure.ObjectAnchors.ObjectModel Microsoft.Azure.ObjectAnchors.ObjectObserver/<>c__DisplayClass6_0::<LoadObjectModelAsync>b__0()
extern void U3CU3Ec__DisplayClass6_0_U3CLoadObjectModelAsyncU3Eb__0_m732F990856140272DCCE7FE5874852D9979D2D4B (void);
// 0x000000B8 System.Void Microsoft.Azure.ObjectAnchors.ObjectObserver/<LoadObjectModelAsync>d__6::MoveNext()
extern void U3CLoadObjectModelAsyncU3Ed__6_MoveNext_mCE277BBD52F23AF5559FA42B23B597DA495738F8 (void);
// 0x000000B9 System.Void Microsoft.Azure.ObjectAnchors.ObjectObserver/<LoadObjectModelAsync>d__6::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern void U3CLoadObjectModelAsyncU3Ed__6_SetStateMachine_mCB845EC4540A88ECA68DE0AFC19DC2E5702AE760 (void);
// 0x000000BA System.Void Microsoft.Azure.ObjectAnchors.ObjectObserver/<>c__DisplayClass8_0::.ctor()
extern void U3CU3Ec__DisplayClass8_0__ctor_mC66FD890AFB7287312DDED2DBD46E6F9ADE69D66 (void);
// 0x000000BB Microsoft.Azure.ObjectAnchors.IList_ObjectInstance Microsoft.Azure.ObjectAnchors.ObjectObserver/<>c__DisplayClass8_0::<DetectAsync>b__0()
extern void U3CU3Ec__DisplayClass8_0_U3CDetectAsyncU3Eb__0_m110EFF35009AE823C28D0FDD2E850164BAD3F3A4 (void);
// 0x000000BC System.Void Microsoft.Azure.ObjectAnchors.ObjectObserver/<DetectAsync>d__8::MoveNext()
extern void U3CDetectAsyncU3Ed__8_MoveNext_mBBC79E3833D5E09701ABE25BCEB2D038058173FC (void);
// 0x000000BD System.Void Microsoft.Azure.ObjectAnchors.ObjectObserver/<DetectAsync>d__8::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern void U3CDetectAsyncU3Ed__8_SetStateMachine_mCA8E1D084D3FF014F6FFB25C240821751F29C240 (void);
// 0x000000BE System.Void Microsoft.Azure.ObjectAnchors.ObjectObserver/<>c__DisplayClass12_0::.ctor()
extern void U3CU3Ec__DisplayClass12_0__ctor_m63F7471FDBB4BDC9F4F0F511D3625C9BAFFE1926 (void);
// 0x000000BF Microsoft.Azure.ObjectAnchors.ObjectObserver Microsoft.Azure.ObjectAnchors.ObjectObserver/<>c__DisplayClass12_0::<GetOrCreateInstance>b__0(System.UInt64)
extern void U3CU3Ec__DisplayClass12_0_U3CGetOrCreateInstanceU3Eb__0_mDB2F5A372BEC26D742023460E471D796C53D2D80 (void);
// 0x000000C0 System.Void Microsoft.Azure.ObjectAnchors.ObjectQuery::.ctor(Microsoft.Azure.ObjectAnchors.ObjectModel)
extern void ObjectQuery__ctor_m1F305079373B11511610C84820212CAA37BA0CF2 (void);
// 0x000000C1 System.Void Microsoft.Azure.ObjectAnchors.ObjectQuery::.ctor(Microsoft.Azure.ObjectAnchors.ObjectModel,Microsoft.Azure.ObjectAnchors.ObjectObservationMode)
extern void ObjectQuery__ctor_mD94B91CD6346478EC9ADDA96CB5BA24E21E12815 (void);
// 0x000000C2 System.Void Microsoft.Azure.ObjectAnchors.ObjectQuery::Finalize()
extern void ObjectQuery_Finalize_m3222ED45E1E70F740F02E25913075B8B1228183B (void);
// 0x000000C3 System.Void Microsoft.Azure.ObjectAnchors.ObjectQuery::Dispose()
extern void ObjectQuery_Dispose_m37F84C70F04659A1CBBE5D520C87568E5F5BD7C5 (void);
// 0x000000C4 System.UInt64 Microsoft.Azure.ObjectAnchors.ObjectQuery::Microsoft.Azure.ObjectAnchors.ICachedObject.get_Cookie()
extern void ObjectQuery_Microsoft_Azure_ObjectAnchors_ICachedObject_get_Cookie_m02DD1B08F01136BC7D3A05DA464860220B58303F (void);
// 0x000000C5 Microsoft.Azure.ObjectAnchors.status Microsoft.Azure.ObjectAnchors.Diagnostics.NativeLibrary::aoa_object_diagnostics_session_close_async(System.IntPtr,System.String)
extern void NativeLibrary_aoa_object_diagnostics_session_close_async_mB29DE52645867F3292489E83B4E7CEF83BF7716F (void);
// 0x000000C6 Microsoft.Azure.ObjectAnchors.status Microsoft.Azure.ObjectAnchors.Diagnostics.NativeLibrary::aoa_object_diagnostics_session_create_object_observer_observer_uint32_max_session_size_in_mega_bytes(System.IntPtr,System.UInt32,System.IntPtr&)
extern void NativeLibrary_aoa_object_diagnostics_session_create_object_observer_observer_uint32_max_session_size_in_mega_bytes_m4BE56595472F29843EA82D90952D059AAFFE3E2B (void);
// 0x000000C7 Microsoft.Azure.ObjectAnchors.status Microsoft.Azure.ObjectAnchors.Diagnostics.NativeLibrary::aoa_object_diagnostics_session_release(System.IntPtr)
extern void NativeLibrary_aoa_object_diagnostics_session_release_m8F13144200E9731EB639A98A99F2D57216C590EF (void);
// 0x000000C8 Microsoft.Azure.ObjectAnchors.status Microsoft.Azure.ObjectAnchors.Diagnostics.NativeLibrary::aoa_object_diagnostics_session_upload_diagnostics_async(System.String,System.IntPtr,Microsoft.Azure.ObjectAnchors.Diagnostics.ObjectDiagnosticsUploadStatus&)
extern void NativeLibrary_aoa_object_diagnostics_session_upload_diagnostics_async_m7252E93F1836B78A818BAE3B44C93123DC828DEE (void);
// 0x000000C9 System.Void Microsoft.Azure.ObjectAnchors.Diagnostics.ObjectDiagnosticsSession::.ctor(Microsoft.Azure.ObjectAnchors.ObjectObserver,System.UInt32)
extern void ObjectDiagnosticsSession__ctor_mD9FBCEED93795329CAD41C669F08926AFF64A412 (void);
// 0x000000CA System.Void Microsoft.Azure.ObjectAnchors.Diagnostics.ObjectDiagnosticsSession::Finalize()
extern void ObjectDiagnosticsSession_Finalize_m3BFE02B751E62CBCA6FE583F6838324D8BF3EA3C (void);
// 0x000000CB System.Threading.Tasks.Task Microsoft.Azure.ObjectAnchors.Diagnostics.ObjectDiagnosticsSession::CloseAsync(System.String)
extern void ObjectDiagnosticsSession_CloseAsync_m68A79F1030F3F721D0D6AA8AEC8D5B58AE25467D (void);
// 0x000000CC System.Threading.Tasks.Task`1<Microsoft.Azure.ObjectAnchors.Diagnostics.ObjectDiagnosticsUploadStatus> Microsoft.Azure.ObjectAnchors.Diagnostics.ObjectDiagnosticsSession::UploadDiagnosticsAsync(System.String,Microsoft.Azure.ObjectAnchors.ObjectAnchorsSession)
extern void ObjectDiagnosticsSession_UploadDiagnosticsAsync_m4EE33F63FBCCB4562B1EC359730DC56BDB6259A1 (void);
// 0x000000CD System.UInt64 Microsoft.Azure.ObjectAnchors.Diagnostics.ObjectDiagnosticsSession::Microsoft.Azure.ObjectAnchors.ICachedObject.get_Cookie()
extern void ObjectDiagnosticsSession_Microsoft_Azure_ObjectAnchors_ICachedObject_get_Cookie_m98FB3C642088589376E6D8DF781983828ED7A3E5 (void);
// 0x000000CE System.Void Microsoft.Azure.ObjectAnchors.Diagnostics.ObjectDiagnosticsSession/<>c__DisplayClass5_0::.ctor()
extern void U3CU3Ec__DisplayClass5_0__ctor_m0869E05C16A7A3D74DC0B3A02A85747D3F44BEAA (void);
// 0x000000CF System.Void Microsoft.Azure.ObjectAnchors.Diagnostics.ObjectDiagnosticsSession/<>c__DisplayClass5_0::<CloseAsync>b__0()
extern void U3CU3Ec__DisplayClass5_0_U3CCloseAsyncU3Eb__0_m09D8E7243CAB8B97D0BA0B3B68599E91584B9402 (void);
// 0x000000D0 System.Void Microsoft.Azure.ObjectAnchors.Diagnostics.ObjectDiagnosticsSession/<CloseAsync>d__5::MoveNext()
extern void U3CCloseAsyncU3Ed__5_MoveNext_m408C204D0096DA9DDFC7553013E69972EEC33014 (void);
// 0x000000D1 System.Void Microsoft.Azure.ObjectAnchors.Diagnostics.ObjectDiagnosticsSession/<CloseAsync>d__5::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern void U3CCloseAsyncU3Ed__5_SetStateMachine_m849D4E5AB2998916E548B4FB184092AE4EC8D44D (void);
// 0x000000D2 System.Void Microsoft.Azure.ObjectAnchors.Diagnostics.ObjectDiagnosticsSession/<>c__DisplayClass6_0::.ctor()
extern void U3CU3Ec__DisplayClass6_0__ctor_m709778D2D01DA550AFBF7D81CF6D302B126ADF29 (void);
// 0x000000D3 Microsoft.Azure.ObjectAnchors.Diagnostics.ObjectDiagnosticsUploadStatus Microsoft.Azure.ObjectAnchors.Diagnostics.ObjectDiagnosticsSession/<>c__DisplayClass6_0::<UploadDiagnosticsAsync>b__0()
extern void U3CU3Ec__DisplayClass6_0_U3CUploadDiagnosticsAsyncU3Eb__0_m11247B60FEE631DD5D4170D3FA0D1B99C30EFF32 (void);
// 0x000000D4 System.Void Microsoft.Azure.ObjectAnchors.Diagnostics.ObjectDiagnosticsSession/<UploadDiagnosticsAsync>d__6::MoveNext()
extern void U3CUploadDiagnosticsAsyncU3Ed__6_MoveNext_m424C7765B3AB59BBBC1AB29A49CDC29A70416671 (void);
// 0x000000D5 System.Void Microsoft.Azure.ObjectAnchors.Diagnostics.ObjectDiagnosticsSession/<UploadDiagnosticsAsync>d__6::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern void U3CUploadDiagnosticsAsyncU3Ed__6_SetStateMachine_m9742F6A29A84D5E76B1461F3E451B9FF32056064 (void);
static Il2CppMethodPointer s_methodPointers[213] = 
{
	NativeLibraryHelpers_CheckStatus_mCD820C10B5FED975DFBCFF824F1866359E773A77,
	NativeLibraryHelpers_CheckStatus_mA436F67CFB77F73D68FF26F8B3F5CD70E9947AFB,
	ProjectedObjectHelpers_ConvertHandleToCookie_m9FC9FB94EDD1116804A014E7AFAD40DA1C68C123,
	ProjectedObjectHelpers_ConvertCookieToHandle_m3DA1BA2237A712AB2ECBBEFD257E1DC573D49551,
	NULL,
	NULL,
	NULL,
	NULL,
	ProjectedObjectEventHandlerCache_Clear_m060BD3A20B6FBA81148FC0339EF165CEB5184BA5,
	ProjectedObjectEventHandlerCache_GetOrInitializeEvents_mC420BAC6A5A78A15BBE0F159EC3741C41330A2D6,
	ProjectedObjectEventHandlerCache__cctor_mC768755428F06ECEF6CC37E803B7F24904FADAEA,
	ProjectedObjectCache__cctor_mBE02F96BE80FF20486EF568B031D8F71B179F7EF,
	ProjectedObjectCache_Add_m0926A926B7DFB10EDF216C881B51A88A2B5E3E8A,
	NULL,
	ProjectedObjectCache_Remove_mB1955A9D59990322834DC9C56DF67FB286BBC99F,
	ProjectedObjectCache_ProjectedObjectCleanupHandler_mFAB3B7F3ADB8A72C0459177CA9E96FEEFD11A20B,
	ObjectInstanceChangedHandlerNative__ctor_mCBDF90186A9DA49597A08DCEA847279DE0200C59,
	ObjectInstanceChangedHandlerNative_Invoke_mBA3942B85189A958856284A76F7A2861AD58AAFE,
	ProjectedObjectCleanupNative__ctor_m0C74DAC4ED07C9DC6A5196CCC2BF2DAE9841A8CC,
	ProjectedObjectCleanupNative_Invoke_m3354E24E969C5FDD77D8A6E2C5A94B7C9B47A664,
	NativeLibrary_aoa_account_information_create_guid_account_id_string_account_key_string_account_domain_mCEE363218EC4C887319DE66754BBD66FEE4DAE70,
	NativeLibrary_aoa_account_information_release_mC96CA8BBDB53C886C293839985E5183A00735A7F,
	NativeLibrary_aoa_get_error_details_m22D8E461DD43C7FA6A0755BE1ABF74C349DA7CA4,
	NativeLibrary_aoa_ilist_object_instance_addref_mB98BA56B0D8DC23369B9D7CF35E5820591FF28FA,
	NativeLibrary_aoa_ilist_object_instance_get_count_m719ED779D6EB500F062B7F40257FFC989293AEB0,
	NativeLibrary_aoa_ilist_object_instance_get_item_mC81FA995DBDDE9F528E01F7A84F44C4043379966,
	NativeLibrary_aoa_ilist_object_instance_release_m60C7A72597E9ABF4FB4C49FB2DF1596214C18A0F,
	NativeLibrary_aoa_ilist_object_instance_remove_item_mD1E0B9919CABBD051A435D79E6C11A23E6832DE4,
	NativeLibrary_aoa_ilist_object_instance_set_item_m41547EF771BC0D2981DABF7650D83959467341F7,
	NativeLibrary_aoa_object_anchors_session_create_account_information_account_information_m14998A47BABF92511C8A0F8F9A3812F3C3084B2C,
	NativeLibrary_aoa_object_anchors_session_create_object_observer_m59D2064BD75B91EDC4AF8DD4D6A2086296914C01,
	NativeLibrary_aoa_object_anchors_session_release_mF2F891B8C3730FF8B045A55391AC38DDC2C86F8D,
	NativeLibrary_aoa_object_instance_addref_m08F2CAF645E85D5941B41720AC281275AB9C323D,
	NativeLibrary_aoa_object_instance_changed_event_args_addref_m0D73C8327FA4230DAD480D34E67B3DA5D528E3E8,
	NativeLibrary_aoa_object_instance_changed_event_args_release_m90D0B57A13BEA56E4F0FB5075D733266C74C4DF7,
	NativeLibrary_aoa_object_instance_dispose_mA5D33C08A23DA635471A9589A6D2AFB6D1863FFF,
	NativeLibrary_aoa_object_instance_get_mode_mBF16F81D305A07262A960EE207BF88D540354037,
	NativeLibrary_aoa_object_instance_get_model_id_mDCF3BDFC9ECF4973BDE5F51E5DF2BEA943621AF5,
	NativeLibrary_aoa_object_instance_placement_addref_m566D9522FD374E17D3A8C35A3345F8A9882B8622,
	NativeLibrary_aoa_object_instance_placement_compute_model_pose_for_view_m2E43F617665C8DACA243324011557950B3A1E720,
	NativeLibrary_aoa_object_instance_placement_get_state_m8B9E2349546B291FFE91CAF1A711A5B5300888EC,
	NativeLibrary_aoa_object_instance_placement_release_mB04DA7ACE49AA87DBFFA15B02E49A8B52F23E662,
	NativeLibrary_aoa_object_instance_release_m9711006A16A58188D5D1565512200F1C57C78FB4,
	NativeLibrary_aoa_object_instance_set_changed_m02EF625B1034F88695B1A8A4DA19AEBBD20887A7,
	NativeLibrary_aoa_object_instance_set_mode_mE6879BBC6E68369B1CB052D1F8FCD27895D8ECD3,
	NativeLibrary_aoa_object_instance_try_get_current_placement_mC6180EC67035C0414FCF082EF7CE5733687A6B50,
	NativeLibrary_aoa_object_model_addref_m87A9CCA92D1B15211F2513F5FD5A05EBAB2FECD9,
	NativeLibrary_aoa_object_model_dispose_mB73C9B64E3C592ACCE38EF1E2F5E4EDD27A9759D,
	NativeLibrary_aoa_object_model_get_bounding_box_m45877AE3762D332A45285F9C498AA2E19C30083D,
	NativeLibrary_aoa_object_model_get_id_mBF006274146112F3D206FA6658A67D18703140F6,
	NativeLibrary_aoa_object_model_get_origin_to_center_transform_m5D557735182BFFF5E8024E75B8670841B9E96988,
	NativeLibrary_aoa_object_model_get_triangle_index_count_mBE802EDABD3B8B9160FF7E40DC6B127382709898,
	NativeLibrary_aoa_object_model_get_triangle_indices_m156B0606D0490F23C654647BE389BAF8AC7AD19E,
	NativeLibrary_aoa_object_model_get_vertex_count_mC1B3F22E718218E5410444CFFD343BA656989839,
	NativeLibrary_aoa_object_model_get_vertex_normals_mBE66DB92738424D3908FD4B2AE8890F6B6A6BF41,
	NativeLibrary_aoa_object_model_get_vertex_positions_m2BBD475029775596409415E48136E4AD93038D48,
	NativeLibrary_aoa_object_model_release_mD83F3B7281613B3E965B3C13DCECAE3971962DC9,
	NativeLibrary_aoa_object_observer_addref_mE359F199F967E6752EBB0631488FE8F6AD1E6BDD,
	NativeLibrary_aoa_object_observer_detect_async_queries_m32486523BD829751B6B210889F3ED9770B2DCFAC,
	NativeLibrary_aoa_object_observer_dispose_m5032321832411E82F05F1160D4953992C15479C1,
	NativeLibrary_aoa_object_observer_is_supported_mE1BC7B524BD51A824A8137468C8D1F0B2001641A,
	NativeLibrary_aoa_object_observer_load_object_model_async_mAC60626C1FC9366F59E886708607481BD1183106,
	NativeLibrary_aoa_object_observer_release_m7AF67C557974D455064642647E81B5F5AED580AA,
	NativeLibrary_aoa_object_observer_request_access_async_m23C8FEED89C15364833C24C1B64FD5FDB8F43977,
	NativeLibrary_aoa_object_query_create_object_model_model_m4C12CB6CC284AE1F97764F43062E1DA034B00685,
	NativeLibrary_aoa_object_query_create_object_model_model_object_observation_mode_observation_mode_mBFBC13FED236586E7C684BAD7FB78BABC1DAB1EB,
	NativeLibrary_aoa_object_query_dispose_m97B46870B2A0D2C75E0F767543B156964596E0FC,
	NativeLibrary_aoa_object_query_release_mC2D906282E18EC8D1E5FCAF5CF0A73CF6F7B5948,
	NativeLibrary_aoa_set_projected_object_cleanup_m2D9E612165EF1477AE96D257FCA5B3C8DBE0C324,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	IList_ObjectInstance__ctor_m30F424DA7B6668866EB71AB0335F7171B814DDEC,
	IList_ObjectInstance_Finalize_m80AFB06BC5407C1849A7C1AF68D1DE7EF54C01B2,
	IList_ObjectInstance_InternalGetCount_mB59DEE215A76B07E94CA92BBDE56095565A58BB8,
	IList_ObjectInstance_InternalGetItem_m217561A705A44458F0F2DA5B755CE0B6F6F208EC,
	IList_ObjectInstance_InternalSetItem_mE6F6E69C827690596C87A2D5A1540840E15DC2C3,
	IList_ObjectInstance_InternalRemoveItem_mA7F6704A39ECFF5FEECADBCBB1D7903939E203AB,
	ObjectInstanceStateAbi_Convert_mFF2544AB3B8ED1234C773C24A53200631AF92D9D,
	ObjectInstanceStateAbi_Convert_m0B8112EF736B31C6EAD63D072606F9871E1A3B14,
	ObjectInstanceChangedHandler__ctor_mD0BF7FA01667A271E68E345E99C36DB0CB0DEC0F,
	ObjectInstanceChangedHandler_Invoke_mD236E264042F702BDD18448503BA51440EE0F926,
	AccountInformation__ctor_mC1FDB22B3176A9776354BC020D95FF7939FC7EF1,
	AccountInformation_Finalize_mCD5E33B124CF4DA9C02A17579CAA7DEC4E122877,
	AccountInformation_Microsoft_Azure_ObjectAnchors_ICachedObject_get_Cookie_m497F34B64FC70DE10966EADC86AC1F1E33A69799,
	ObjectAnchorsSession__ctor_m0D6FE6A5194D2D4518638AE7CF12B9DCEAC9080D,
	ObjectAnchorsSession_Finalize_m6B81B17546541DAAB2B730A92D6E84C6C7476037,
	ObjectAnchorsSession_CreateObjectObserver_m210A3ADFA0A9285A082BB0B8597EC853FA365A83,
	ObjectAnchorsSession_Microsoft_Azure_ObjectAnchors_ICachedObject_get_Cookie_m92EA0946A1CB9967FF16AA90B63BE1E948CED3E3,
	ObjectInstanceChangedEventArgs__ctor_mB85BEFF36CEFA84ED3A1C7DDB8AC40C59176238C,
	ObjectInstanceChangedEventArgs_Finalize_m25ABF60DAF2EFF925331E2A878308F0289F843BE,
	ObjectInstanceChangedEventArgs_Microsoft_Azure_ObjectAnchors_ICachedObject_get_Cookie_mA44F74655AEEE272EDAAB9DAFE317EDA80927B4F,
	ObjectInstanceChangedEventArgs_GetOrCreateInstance_m72D6FAF407894866FE372DC69CB6A20B67A0D011,
	ObjectInstanceChangedEventArgs_GetOrCreateInstance_m238ACC6AC385106A963EA4A4E6EFC9706136AF58,
	U3CU3Ec__DisplayClass6_0__ctor_m66D19AC81CA76C807989137E3609BA522A999159,
	U3CU3Ec__DisplayClass6_0_U3CGetOrCreateInstanceU3Eb__0_m4A1BF5D6A4B3CC4C48BAF483275C8492BCE22BAC,
	ObjectInstance__ctor_mC2C8005F9EFC698F6FF9A568B60406148CE362CA,
	ObjectInstance_Finalize_m1669F82EAD80DEC86D3FD9F0CAA323D02D511D91,
	ObjectInstance_Dispose_m04E7446118B54FF9C0A6BE49AFB410878032EA0E,
	ObjectInstance_get_ModelId_m21DE7774020CB31FD7B62C9A50042A8F48EBE8CD,
	ObjectInstance_get_Mode_mCA224372FEAEB91B167B6ED551EE7C095D1F49B4,
	ObjectInstance_set_Mode_mF1FF7AC2D8256B392879578E2DA42F9EBDC7CF63,
	ObjectInstance_ChangedStaticHandler_mEB88F54081FFA44FB88974C35BDC5E0FCDF26659,
	ObjectInstance_add_Changed_mADB4521E72F1BE8069747E605726E539E961B075,
	ObjectInstance_remove_Changed_m229D635D6B4AD4D58E986070F45D9E73D58CF4A3,
	ObjectInstance_TryGetCurrentPlacement_m09B98C2E698050EB84738A016553E1C9FD7366F4,
	ObjectInstance_Microsoft_Azure_ObjectAnchors_ICachedObject_get_Cookie_m357551ECFBD9CE04DF575C3E1E18B75268B7A431,
	ObjectInstance_GetOrCreateInstance_m15CA9C42DB36EBDA67197795715CA16CFC8A9FB1,
	ObjectInstance_GetOrCreateInstance_m9B4B3BE9DF31FFCF7EA51FF466419D97A219E948,
	ObjectInstance__cctor_mC3E3226A0D23FB3375C3758AD003FD0F3D58DB14,
	U3CU3Ec__DisplayClass19_0__ctor_m559ACA8C2120C6E95155B2CC965B5CE8223C7073,
	U3CU3Ec__DisplayClass19_0_U3CGetOrCreateInstanceU3Eb__0_mA6FB30C447094ABF65C20447B8163C912FB7DB10,
	ObjectInstancePlacement__ctor_m9EEDE02BC1A13E29C5666D6CB34608E4CF4FA522,
	ObjectInstancePlacement_Finalize_mA8F1985ADDC2D687A503211ABDC77CE48578F23C,
	ObjectInstancePlacement_get_State_mEAF86903B11AA2D4C7965F2311B694AE0CEFF2B9,
	ObjectInstancePlacement_ComputeModelPoseForView_m2715948FAB01FC14C4D180E87690CEC0EB6AA640,
	ObjectInstancePlacement_Microsoft_Azure_ObjectAnchors_ICachedObject_get_Cookie_mA9F92DF3B67A3EEF1B6DBDB11FB4BE6E77B29796,
	ObjectInstancePlacement_GetOrCreateInstance_m918CE7A607381FA6DE73D4E4B296498421C4BB8F,
	ObjectInstancePlacement_GetOrCreateInstance_mEBE665CF1D75EAD76FCAFA8F12A2B66E5CD8B51A,
	U3CU3Ec__DisplayClass9_0__ctor_mF8C98D417878EA666942DDB57BC8F011672EB704,
	U3CU3Ec__DisplayClass9_0_U3CGetOrCreateInstanceU3Eb__0_m73D9F7D6ECD63B15802024A42F944581529E6450,
	ObjectModel__ctor_m706AC7BEA8ACDC8A92F5B70B88AD0A88E5FCCE89,
	ObjectModel_Finalize_mDAEF0512DB5CC1889618FB165F7C7A734DF71D38,
	ObjectModel_Dispose_m3DFBF40096AFC0C7081ED8E3A0CD2B1824AFCB4E,
	ObjectModel_get_Id_m58D77C3BA7E326A87C85E66C75907E6E1831893D,
	ObjectModel_get_BoundingBox_mC47761AFC2F308669B57938DD077EA13173150CC,
	ObjectModel_get_OriginToCenterTransform_mA92EC2753545E8572CCB5D2CBC0A4D9F96AAE8B3,
	ObjectModel_get_VertexCount_m32F50C71FF2DBA61CFDB8513AA4F103C61A6050C,
	ObjectModel_get_TriangleIndexCount_mB04437325D39DC89AD42F55195D4B2015BC7BA0B,
	ObjectModel_GetVertexPositions_mCB922A61F60B8EBB7DB0D69F0F5F5CE1E22E5CFE,
	ObjectModel_GetVertexNormals_mC7B5D9AEE3AC860EF16EABC5FBA35835D401253E,
	ObjectModel_GetTriangleIndices_mE059CF5DE7E98624507A44FB5BBB03E99E96786C,
	ObjectModel_Microsoft_Azure_ObjectAnchors_ICachedObject_get_Cookie_mC45AE4BAF52AAE6AD74D2800C02B3DE5D9A70FD9,
	ObjectModel_GetOrCreateInstance_m0861B73CC587123D62E9849D85824D6BB15A5418,
	ObjectModel_GetOrCreateInstance_m20347F8335AFC8474A2E90F03F0F5CEAD5628CD2,
	U3CU3Ec__DisplayClass20_0__ctor_m591358FDFB91EC8A9CB65F55DBA735DAA1343645,
	U3CU3Ec__DisplayClass20_0_U3CGetOrCreateInstanceU3Eb__0_mD851487319A7602ADE40B7DC0F0ED7FD4A3565ED,
	ObjectObserver__ctor_mE4115D109952F8C98A48E736517E78ED2BC4DB0B,
	ObjectObserver_Finalize_m8831B556B444433F965F2B2992D4F232D01BF66D,
	ObjectObserver_Dispose_mD62D0BF2684BD5F77E5E1791087EEE410116A738,
	ObjectObserver_IsSupported_m5C7A7B163B097776E5BE2D38D00D7D6656F99EEB,
	ObjectObserver_RequestAccessAsync_m420E3559ABE655EF8D651069A2B3AAE9471668A7,
	ObjectObserver_LoadObjectModelAsync_m84B035496A6E5AFA02FB818AACB05E6F943AB980,
	ObjectObserver_DetectAsync_mF7F6E0A834054FFC6EAF4411ABCBDC1D49FC8C82,
	ObjectObserver_Microsoft_Azure_ObjectAnchors_ICachedObject_get_Cookie_m1BA0E0E82752A057A4E62245B1B9EF7BEA97C78D,
	ObjectObserver_GetOrCreateInstance_m66B1E44FF182E026DF1B16B00858A57276AD98A2,
	ObjectObserver_GetOrCreateInstance_m0A17F6E3E07EF6BFCA8726205B85236F65C8C37C,
	U3CU3Ec__cctor_mC1CBC3C5BBA942973FD1F1209B228FE597C067DC,
	U3CU3Ec__ctor_mA603BF48A0AFDE03D139623F42A445CFBB117ED8,
	U3CU3Ec_U3CRequestAccessAsyncU3Eb__5_0_m3E5AA654A139F9FABD4678800320C456E4A8E4F1,
	U3CU3Ec_U3CDetectAsyncU3Eb__8_1_m45B52B1518033051B297C761B4EC1E325242207A,
	U3CRequestAccessAsyncU3Ed__5_MoveNext_m9BE51DBB6A32E8A97DDC4A5882C290F766D975DA,
	U3CRequestAccessAsyncU3Ed__5_SetStateMachine_m72753B59792EC85ED2521D9B728E0A8E9ECC8664,
	U3CU3Ec__DisplayClass6_0__ctor_mEB6D499290488617DFEC71EF165CA8246DAFAC4C,
	U3CU3Ec__DisplayClass6_0_U3CLoadObjectModelAsyncU3Eb__0_m732F990856140272DCCE7FE5874852D9979D2D4B,
	U3CLoadObjectModelAsyncU3Ed__6_MoveNext_mCE277BBD52F23AF5559FA42B23B597DA495738F8,
	U3CLoadObjectModelAsyncU3Ed__6_SetStateMachine_mCB845EC4540A88ECA68DE0AFC19DC2E5702AE760,
	U3CU3Ec__DisplayClass8_0__ctor_mC66FD890AFB7287312DDED2DBD46E6F9ADE69D66,
	U3CU3Ec__DisplayClass8_0_U3CDetectAsyncU3Eb__0_m110EFF35009AE823C28D0FDD2E850164BAD3F3A4,
	U3CDetectAsyncU3Ed__8_MoveNext_mBBC79E3833D5E09701ABE25BCEB2D038058173FC,
	U3CDetectAsyncU3Ed__8_SetStateMachine_mCA8E1D084D3FF014F6FFB25C240821751F29C240,
	U3CU3Ec__DisplayClass12_0__ctor_m63F7471FDBB4BDC9F4F0F511D3625C9BAFFE1926,
	U3CU3Ec__DisplayClass12_0_U3CGetOrCreateInstanceU3Eb__0_mDB2F5A372BEC26D742023460E471D796C53D2D80,
	ObjectQuery__ctor_m1F305079373B11511610C84820212CAA37BA0CF2,
	ObjectQuery__ctor_mD94B91CD6346478EC9ADDA96CB5BA24E21E12815,
	ObjectQuery_Finalize_m3222ED45E1E70F740F02E25913075B8B1228183B,
	ObjectQuery_Dispose_m37F84C70F04659A1CBBE5D520C87568E5F5BD7C5,
	ObjectQuery_Microsoft_Azure_ObjectAnchors_ICachedObject_get_Cookie_m02DD1B08F01136BC7D3A05DA464860220B58303F,
	NativeLibrary_aoa_object_diagnostics_session_close_async_mB29DE52645867F3292489E83B4E7CEF83BF7716F,
	NativeLibrary_aoa_object_diagnostics_session_create_object_observer_observer_uint32_max_session_size_in_mega_bytes_m4BE56595472F29843EA82D90952D059AAFFE3E2B,
	NativeLibrary_aoa_object_diagnostics_session_release_m8F13144200E9731EB639A98A99F2D57216C590EF,
	NativeLibrary_aoa_object_diagnostics_session_upload_diagnostics_async_m7252E93F1836B78A818BAE3B44C93123DC828DEE,
	ObjectDiagnosticsSession__ctor_mD9FBCEED93795329CAD41C669F08926AFF64A412,
	ObjectDiagnosticsSession_Finalize_m3BFE02B751E62CBCA6FE583F6838324D8BF3EA3C,
	ObjectDiagnosticsSession_CloseAsync_m68A79F1030F3F721D0D6AA8AEC8D5B58AE25467D,
	ObjectDiagnosticsSession_UploadDiagnosticsAsync_m4EE33F63FBCCB4562B1EC359730DC56BDB6259A1,
	ObjectDiagnosticsSession_Microsoft_Azure_ObjectAnchors_ICachedObject_get_Cookie_m98FB3C642088589376E6D8DF781983828ED7A3E5,
	U3CU3Ec__DisplayClass5_0__ctor_m0869E05C16A7A3D74DC0B3A02A85747D3F44BEAA,
	U3CU3Ec__DisplayClass5_0_U3CCloseAsyncU3Eb__0_m09D8E7243CAB8B97D0BA0B3B68599E91584B9402,
	U3CCloseAsyncU3Ed__5_MoveNext_m408C204D0096DA9DDFC7553013E69972EEC33014,
	U3CCloseAsyncU3Ed__5_SetStateMachine_m849D4E5AB2998916E548B4FB184092AE4EC8D44D,
	U3CU3Ec__DisplayClass6_0__ctor_m709778D2D01DA550AFBF7D81CF6D302B126ADF29,
	U3CU3Ec__DisplayClass6_0_U3CUploadDiagnosticsAsyncU3Eb__0_m11247B60FEE631DD5D4170D3FA0D1B99C30EFF32,
	U3CUploadDiagnosticsAsyncU3Ed__6_MoveNext_m424C7765B3AB59BBBC1AB29A49CDC29A70416671,
	U3CUploadDiagnosticsAsyncU3Ed__6_SetStateMachine_m9742F6A29A84D5E76B1461F3E451B9FF32056064,
};
extern void ObjectInstanceStateAbi_Convert_mFF2544AB3B8ED1234C773C24A53200631AF92D9D_AdjustorThunk (void);
extern void U3CRequestAccessAsyncU3Ed__5_MoveNext_m9BE51DBB6A32E8A97DDC4A5882C290F766D975DA_AdjustorThunk (void);
extern void U3CRequestAccessAsyncU3Ed__5_SetStateMachine_m72753B59792EC85ED2521D9B728E0A8E9ECC8664_AdjustorThunk (void);
extern void U3CLoadObjectModelAsyncU3Ed__6_MoveNext_mCE277BBD52F23AF5559FA42B23B597DA495738F8_AdjustorThunk (void);
extern void U3CLoadObjectModelAsyncU3Ed__6_SetStateMachine_mCB845EC4540A88ECA68DE0AFC19DC2E5702AE760_AdjustorThunk (void);
extern void U3CDetectAsyncU3Ed__8_MoveNext_mBBC79E3833D5E09701ABE25BCEB2D038058173FC_AdjustorThunk (void);
extern void U3CDetectAsyncU3Ed__8_SetStateMachine_mCA8E1D084D3FF014F6FFB25C240821751F29C240_AdjustorThunk (void);
extern void U3CCloseAsyncU3Ed__5_MoveNext_m408C204D0096DA9DDFC7553013E69972EEC33014_AdjustorThunk (void);
extern void U3CCloseAsyncU3Ed__5_SetStateMachine_m849D4E5AB2998916E548B4FB184092AE4EC8D44D_AdjustorThunk (void);
extern void U3CUploadDiagnosticsAsyncU3Ed__6_MoveNext_m424C7765B3AB59BBBC1AB29A49CDC29A70416671_AdjustorThunk (void);
extern void U3CUploadDiagnosticsAsyncU3Ed__6_SetStateMachine_m9742F6A29A84D5E76B1461F3E451B9FF32056064_AdjustorThunk (void);
static Il2CppTokenAdjustorThunkPair s_adjustorThunks[11] = 
{
	{ 0x0600006B, ObjectInstanceStateAbi_Convert_mFF2544AB3B8ED1234C773C24A53200631AF92D9D_AdjustorThunk },
	{ 0x060000B4, U3CRequestAccessAsyncU3Ed__5_MoveNext_m9BE51DBB6A32E8A97DDC4A5882C290F766D975DA_AdjustorThunk },
	{ 0x060000B5, U3CRequestAccessAsyncU3Ed__5_SetStateMachine_m72753B59792EC85ED2521D9B728E0A8E9ECC8664_AdjustorThunk },
	{ 0x060000B8, U3CLoadObjectModelAsyncU3Ed__6_MoveNext_mCE277BBD52F23AF5559FA42B23B597DA495738F8_AdjustorThunk },
	{ 0x060000B9, U3CLoadObjectModelAsyncU3Ed__6_SetStateMachine_mCB845EC4540A88ECA68DE0AFC19DC2E5702AE760_AdjustorThunk },
	{ 0x060000BC, U3CDetectAsyncU3Ed__8_MoveNext_mBBC79E3833D5E09701ABE25BCEB2D038058173FC_AdjustorThunk },
	{ 0x060000BD, U3CDetectAsyncU3Ed__8_SetStateMachine_mCA8E1D084D3FF014F6FFB25C240821751F29C240_AdjustorThunk },
	{ 0x060000D0, U3CCloseAsyncU3Ed__5_MoveNext_m408C204D0096DA9DDFC7553013E69972EEC33014_AdjustorThunk },
	{ 0x060000D1, U3CCloseAsyncU3Ed__5_SetStateMachine_m849D4E5AB2998916E548B4FB184092AE4EC8D44D_AdjustorThunk },
	{ 0x060000D4, U3CUploadDiagnosticsAsyncU3Ed__6_MoveNext_m424C7765B3AB59BBBC1AB29A49CDC29A70416671_AdjustorThunk },
	{ 0x060000D5, U3CUploadDiagnosticsAsyncU3Ed__6_SetStateMachine_m9742F6A29A84D5E76B1461F3E451B9FF32056064_AdjustorThunk },
};
static const int32_t s_InvokerIndices[213] = 
{
	14989,
	13982,
	14939,
	14564,
	0,
	0,
	0,
	0,
	15004,
	14697,
	15235,
	15235,
	14994,
	0,
	15004,
	14991,
	4632,
	4832,
	4632,
	8067,
	11695,
	14521,
	11700,
	14521,
	13520,
	12475,
	14521,
	13523,
	12477,
	13520,
	13520,
	14521,
	14521,
	14521,
	14521,
	14521,
	13520,
	13520,
	14521,
	11717,
	13520,
	14521,
	14521,
	12490,
	13523,
	12488,
	14521,
	14521,
	13520,
	13520,
	13520,
	13520,
	12485,
	13520,
	12485,
	12485,
	14521,
	14521,
	11712,
	14521,
	14509,
	11712,
	14521,
	14509,
	13520,
	12475,
	14521,
	14521,
	14525,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	4580,
	10008,
	9763,
	7192,
	4297,
	8065,
	9825,
	14745,
	4632,
	4640,
	2332,
	10008,
	9976,
	8120,
	10008,
	9822,
	9976,
	4580,
	10008,
	9976,
	13657,
	13715,
	10008,
	7222,
	4580,
	10008,
	10008,
	9729,
	9763,
	8065,
	14123,
	8120,
	8120,
	7207,
	9976,
	13657,
	13715,
	15235,
	10008,
	7222,
	4580,
	10008,
	9825,
	3773,
	9976,
	13657,
	13715,
	10008,
	7222,
	4580,
	10008,
	10008,
	9729,
	9908,
	9794,
	9975,
	9975,
	8120,
	8120,
	8120,
	9976,
	13657,
	13715,
	10008,
	7222,
	4580,
	10008,
	10008,
	15143,
	15184,
	7198,
	7198,
	9976,
	13657,
	13715,
	15235,
	10008,
	9763,
	7060,
	10008,
	8120,
	10008,
	9822,
	10008,
	8120,
	10008,
	9822,
	10008,
	8120,
	10008,
	7222,
	8120,
	4630,
	10008,
	10008,
	9976,
	13526,
	12489,
	14521,
	12505,
	4663,
	10008,
	7198,
	13681,
	9976,
	10008,
	10008,
	10008,
	8120,
	10008,
	9763,
	10008,
	8120,
};
static const Il2CppTokenIndexMethodTuple s_reversePInvokeIndices[2] = 
{
	{ 0x06000010, 25,  (void**)&ProjectedObjectCache_ProjectedObjectCleanupHandler_mFAB3B7F3ADB8A72C0459177CA9E96FEEFD11A20B_RuntimeMethod_var, 0 },
	{ 0x06000083, 23,  (void**)&ObjectInstance_ChangedStaticHandler_mEB88F54081FFA44FB88974C35BDC5E0FCDF26659_RuntimeMethod_var, 0 },
};
static const Il2CppTokenRangePair s_rgctxIndices[7] = 
{
	{ 0x0200000B, { 6, 16 } },
	{ 0x0200000C, { 22, 3 } },
	{ 0x0200000D, { 25, 3 } },
	{ 0x06000006, { 0, 1 } },
	{ 0x06000007, { 1, 1 } },
	{ 0x06000008, { 2, 1 } },
	{ 0x0600000E, { 3, 3 } },
};
extern const uint32_t g_rgctx_T_t1605DB5A9121A7050D00DC7AD33AC1C6E0459F9E;
extern const uint32_t g_rgctx_T_t8EA493BBF5BD3D14308F43DEDCB721B92484F905;
extern const uint32_t g_rgctx_T_tF806B7FCACCE842CA3B2791EB181E109A1CD0BEB;
extern const uint32_t g_rgctx_Func_2_t8198AE14D507341DD81A86B764473AE2A04E9E97;
extern const uint32_t g_rgctx_Func_2_Invoke_mA78C092DB2660B86F8DF7BDE4803C384E5AC2E6C;
extern const uint32_t g_rgctx_T_t24E52C300968B7E53D30141407F69166E7338E2B;
extern const uint32_t g_rgctx_BasePrivateList_1_t6876E22D8D38F199559CA41ABF582A45E86EF638;
extern const uint32_t g_rgctx_BasePrivateList_1_InternalGetCount_m37F9C62226C4A558AE96FB302B3D6A88AABF9164;
extern const uint32_t g_rgctx_BasePrivateList_1_InternalGetItem_m3E3A2284813B6BFFAB1BEC0E0D73786F11DFAAED;
extern const uint32_t g_rgctx_BasePrivateList_1_InternalSetItem_mA9FE3D9EC55CFB96E99ACE4427A27904C0F7ED60;
extern const uint32_t g_rgctx_Comparer_1_get_Default_m087743D56EB8E8146092F5B1CAB91F62619DCEE1;
extern const uint32_t g_rgctx_Comparer_1_tFAF224310814C4EE7090AE66DDA30B07DC6A95A5;
extern const uint32_t g_rgctx_Comparer_1_tFAF224310814C4EE7090AE66DDA30B07DC6A95A5;
extern const uint32_t g_rgctx_Comparer_1_Compare_m697F24A273C1E8C3013E38642E6DEFA871CAF6C2;
extern const uint32_t g_rgctx_BasePrivateList_1_InternalRemoveItem_mA124B077849238154AF606B7A47601535EED489D;
extern const uint32_t g_rgctx_BasePrivateList_1_IndexOf_m32BE4F535EC3AA6B77DA50B406F9E85C12765867;
extern const uint32_t g_rgctx_BasePrivateList_1_get_Item_mCE2886A308D74600014A2161C94A0ACD3312FA7D;
extern const uint32_t g_rgctx_BasePrivateList_1_get_Count_m57DDE1CA91A4437512D31476C10C8C8C6DBFE25F;
extern const uint32_t g_rgctx_U3CGetEnumeratorU3Ed__19_t28BF16C4E2D275C476F75664C72102722FD1C666;
extern const uint32_t g_rgctx_U3CGetEnumeratorU3Ed__19__ctor_m4CD3707666C05865AEF7C6068832ECD00CF0CD8C;
extern const uint32_t g_rgctx_U3CSystemU2DCollectionsU2DIEnumerableU2DGetEnumeratorU3Ed__20_tD2ADACC18F77638BB3CC0988AE9D00FADB404804;
extern const uint32_t g_rgctx_U3CSystemU2DCollectionsU2DIEnumerableU2DGetEnumeratorU3Ed__20__ctor_m14F8B4720E45CCB0DCBE57E3BC4A683C519D1BDF;
extern const uint32_t g_rgctx_BasePrivateList_1_get_Item_mB1C57448A52A6B0AB186A29EA7BFFAE28C206908;
extern const uint32_t g_rgctx_BasePrivateList_1_get_Count_m9ED3F06C5B67CFDD1D79408AB8D763B5E266F3D6;
extern const uint32_t g_rgctx_T_t10E8800A4D1136D1E19FB982ECF8A65A556F07F0;
extern const uint32_t g_rgctx_BasePrivateList_1_get_Item_m0A10DF39FCF5A03C91B276F77C59567220AE1B5E;
extern const uint32_t g_rgctx_T_t212DEFA43DE91A32A02895E3F7FF036FA0621199;
extern const uint32_t g_rgctx_BasePrivateList_1_get_Count_mC457C163D4CE3F889613176C17CFA1F325C3172A;
static const Il2CppRGCTXDefinition s_rgctxValues[28] = 
{
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_T_t1605DB5A9121A7050D00DC7AD33AC1C6E0459F9E },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_T_t8EA493BBF5BD3D14308F43DEDCB721B92484F905 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_T_tF806B7FCACCE842CA3B2791EB181E109A1CD0BEB },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_Func_2_t8198AE14D507341DD81A86B764473AE2A04E9E97 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Func_2_Invoke_mA78C092DB2660B86F8DF7BDE4803C384E5AC2E6C },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_T_t24E52C300968B7E53D30141407F69166E7338E2B },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_BasePrivateList_1_t6876E22D8D38F199559CA41ABF582A45E86EF638 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_BasePrivateList_1_InternalGetCount_m37F9C62226C4A558AE96FB302B3D6A88AABF9164 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_BasePrivateList_1_InternalGetItem_m3E3A2284813B6BFFAB1BEC0E0D73786F11DFAAED },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_BasePrivateList_1_InternalSetItem_mA9FE3D9EC55CFB96E99ACE4427A27904C0F7ED60 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Comparer_1_get_Default_m087743D56EB8E8146092F5B1CAB91F62619DCEE1 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_Comparer_1_tFAF224310814C4EE7090AE66DDA30B07DC6A95A5 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_Comparer_1_tFAF224310814C4EE7090AE66DDA30B07DC6A95A5 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Comparer_1_Compare_m697F24A273C1E8C3013E38642E6DEFA871CAF6C2 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_BasePrivateList_1_InternalRemoveItem_mA124B077849238154AF606B7A47601535EED489D },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_BasePrivateList_1_IndexOf_m32BE4F535EC3AA6B77DA50B406F9E85C12765867 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_BasePrivateList_1_get_Item_mCE2886A308D74600014A2161C94A0ACD3312FA7D },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_BasePrivateList_1_get_Count_m57DDE1CA91A4437512D31476C10C8C8C6DBFE25F },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_U3CGetEnumeratorU3Ed__19_t28BF16C4E2D275C476F75664C72102722FD1C666 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_U3CGetEnumeratorU3Ed__19__ctor_m4CD3707666C05865AEF7C6068832ECD00CF0CD8C },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_U3CSystemU2DCollectionsU2DIEnumerableU2DGetEnumeratorU3Ed__20_tD2ADACC18F77638BB3CC0988AE9D00FADB404804 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_U3CSystemU2DCollectionsU2DIEnumerableU2DGetEnumeratorU3Ed__20__ctor_m14F8B4720E45CCB0DCBE57E3BC4A683C519D1BDF },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_BasePrivateList_1_get_Item_mB1C57448A52A6B0AB186A29EA7BFFAE28C206908 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_BasePrivateList_1_get_Count_m9ED3F06C5B67CFDD1D79408AB8D763B5E266F3D6 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_T_t10E8800A4D1136D1E19FB982ECF8A65A556F07F0 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_BasePrivateList_1_get_Item_m0A10DF39FCF5A03C91B276F77C59567220AE1B5E },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_T_t212DEFA43DE91A32A02895E3F7FF036FA0621199 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_BasePrivateList_1_get_Count_mC457C163D4CE3F889613176C17CFA1F325C3172A },
};
IL2CPP_EXTERN_C const Il2CppCodeGenModule g_Microsoft_ObjectAnchors_Runtime_Api_WSA_CodeGenModule;
const Il2CppCodeGenModule g_Microsoft_ObjectAnchors_Runtime_Api_WSA_CodeGenModule = 
{
	"Microsoft.ObjectAnchors.Runtime.Api.WSA.dll",
	213,
	s_methodPointers,
	11,
	s_adjustorThunks,
	s_InvokerIndices,
	2,
	s_reversePInvokeIndices,
	7,
	s_rgctxIndices,
	28,
	s_rgctxValues,
	NULL,
	NULL, // module initializer,
	NULL,
	NULL,
	NULL,
};
