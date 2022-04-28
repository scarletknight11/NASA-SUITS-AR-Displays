#include "pch-c.h"
#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include "codegen/il2cpp-codegen-metadata.h"


extern const RuntimeMethod* ObjectInstance_ChangedStaticHandler_m1CE2D590919456EBD79555886BAD9E1358DFEEC1_RuntimeMethod_var;
extern const RuntimeMethod* ProjectedObjectCache_ProjectedObjectCleanupHandler_m809EC3C10B1B19187BDF04FF5B5C1EDE6C1066E0_RuntimeMethod_var;



// 0x00000001 System.Void Microsoft.Azure.ObjectAnchors.NativeLibraryHelpers::CheckStatus(Microsoft.Azure.ObjectAnchors.status)
extern void NativeLibraryHelpers_CheckStatus_m7F824A2F95224D52BD57ADF3A844D26FC326EE87 (void);
// 0x00000002 System.Void Microsoft.Azure.ObjectAnchors.NativeLibraryHelpers::CheckStatus(System.IntPtr,Microsoft.Azure.ObjectAnchors.status)
extern void NativeLibraryHelpers_CheckStatus_m64F514827140BB7843C18DFFCAA14328C96CC5A8 (void);
// 0x00000003 System.UInt64 Microsoft.Azure.ObjectAnchors.ProjectedObjectHelpers::ConvertHandleToCookie(System.IntPtr)
extern void ProjectedObjectHelpers_ConvertHandleToCookie_m2D53AA7BA42874C9EF5463D1AC738657436037C0 (void);
// 0x00000004 System.IntPtr Microsoft.Azure.ObjectAnchors.ProjectedObjectHelpers::ConvertCookieToHandle(System.UInt64)
extern void ProjectedObjectHelpers_ConvertCookieToHandle_mBAF321C316F030F1E7DC6F72552D0A3D9B173AB6 (void);
// 0x00000005 System.UInt64 Microsoft.Azure.ObjectAnchors.ICachedObject::get_Cookie()
// 0x00000006 System.Void Microsoft.Azure.ObjectAnchors.ProjectedObjectEventHandlerCache::AddEventHandler(Microsoft.Azure.ObjectAnchors.ICachedObject,System.String,T)
// 0x00000007 System.Void Microsoft.Azure.ObjectAnchors.ProjectedObjectEventHandlerCache::RemoveEventHandler(Microsoft.Azure.ObjectAnchors.ICachedObject,System.String,T)
// 0x00000008 T Microsoft.Azure.ObjectAnchors.ProjectedObjectEventHandlerCache::GetEventHandler(Microsoft.Azure.ObjectAnchors.ICachedObject,System.String)
// 0x00000009 System.Void Microsoft.Azure.ObjectAnchors.ProjectedObjectEventHandlerCache::Clear(System.UInt64)
extern void ProjectedObjectEventHandlerCache_Clear_m2046A5B8970E4222A9EBD102E85E93B8023D8F72 (void);
// 0x0000000A System.Collections.Generic.IDictionary`2<System.String,System.Delegate> Microsoft.Azure.ObjectAnchors.ProjectedObjectEventHandlerCache::GetOrInitializeEvents(Microsoft.Azure.ObjectAnchors.ICachedObject)
extern void ProjectedObjectEventHandlerCache_GetOrInitializeEvents_mB587933DC2F01FB2BE91E3BA80A0177B408C9894 (void);
// 0x0000000B System.Void Microsoft.Azure.ObjectAnchors.ProjectedObjectEventHandlerCache::.cctor()
extern void ProjectedObjectEventHandlerCache__cctor_m8B533905B20295DD050987A1775475206CA41EC5 (void);
// 0x0000000C System.Void Microsoft.Azure.ObjectAnchors.ProjectedObjectCache::.cctor()
extern void ProjectedObjectCache__cctor_m23A0B5C3FEE39BD8E97DD76B1DA2BEEE5C77254D (void);
// 0x0000000D System.Void Microsoft.Azure.ObjectAnchors.ProjectedObjectCache::Add(Microsoft.Azure.ObjectAnchors.ICachedObject)
extern void ProjectedObjectCache_Add_mC489037FD794053E877648F1689AC9CE0FB47C4F (void);
// 0x0000000E T Microsoft.Azure.ObjectAnchors.ProjectedObjectCache::GetOrCreate(System.UInt64,System.Func`2<System.UInt64,T>)
// 0x0000000F System.Void Microsoft.Azure.ObjectAnchors.ProjectedObjectCache::Remove(System.UInt64)
extern void ProjectedObjectCache_Remove_mE7437B508380613DCF47FA3248B4771025DF9A07 (void);
// 0x00000010 System.Void Microsoft.Azure.ObjectAnchors.ProjectedObjectCache::ProjectedObjectCleanupHandler(System.IntPtr)
extern void ProjectedObjectCache_ProjectedObjectCleanupHandler_m809EC3C10B1B19187BDF04FF5B5C1EDE6C1066E0 (void);
// 0x00000011 System.Void Microsoft.Azure.ObjectAnchors.ObjectInstanceChangedHandlerNative::.ctor(System.Object,System.IntPtr)
extern void ObjectInstanceChangedHandlerNative__ctor_m3632527EAC6BF85311BE3FD3BAB5850BC2CA2E39 (void);
// 0x00000012 System.Void Microsoft.Azure.ObjectAnchors.ObjectInstanceChangedHandlerNative::Invoke(System.UInt64,System.IntPtr)
extern void ObjectInstanceChangedHandlerNative_Invoke_m793108B7BA5FD663866FB661136DB6EAC3629891 (void);
// 0x00000013 System.IAsyncResult Microsoft.Azure.ObjectAnchors.ObjectInstanceChangedHandlerNative::BeginInvoke(System.UInt64,System.IntPtr,System.AsyncCallback,System.Object)
extern void ObjectInstanceChangedHandlerNative_BeginInvoke_m7E5DB475322270167984D67D2C2CD84B4D77A5CB (void);
// 0x00000014 System.Void Microsoft.Azure.ObjectAnchors.ObjectInstanceChangedHandlerNative::EndInvoke(System.IAsyncResult)
extern void ObjectInstanceChangedHandlerNative_EndInvoke_m6EAB5E5EDC50C80A6EE6E5E8EC2CA3574C19FF29 (void);
// 0x00000015 System.Void Microsoft.Azure.ObjectAnchors.ProjectedObjectCleanupNative::.ctor(System.Object,System.IntPtr)
extern void ProjectedObjectCleanupNative__ctor_m219DFBC33526DF92FE4F377F6813AFE151FFA14E (void);
// 0x00000016 System.Void Microsoft.Azure.ObjectAnchors.ProjectedObjectCleanupNative::Invoke(System.IntPtr)
extern void ProjectedObjectCleanupNative_Invoke_mC933BF65414D06DB28735B5C3B7ACD06ABC712AF (void);
// 0x00000017 System.IAsyncResult Microsoft.Azure.ObjectAnchors.ProjectedObjectCleanupNative::BeginInvoke(System.IntPtr,System.AsyncCallback,System.Object)
extern void ProjectedObjectCleanupNative_BeginInvoke_m7A340E178258C79072BDFA91078303D02DA4D3D8 (void);
// 0x00000018 System.Void Microsoft.Azure.ObjectAnchors.ProjectedObjectCleanupNative::EndInvoke(System.IAsyncResult)
extern void ProjectedObjectCleanupNative_EndInvoke_mA18995F824EC375AEB2CDFE9CF22D39AE807B510 (void);
// 0x00000019 Microsoft.Azure.ObjectAnchors.status Microsoft.Azure.ObjectAnchors.NativeLibrary::aoa_account_information_create_guid_account_id_string_account_key_string_account_domain(System.Guid,System.String,System.String,System.IntPtr&)
extern void NativeLibrary_aoa_account_information_create_guid_account_id_string_account_key_string_account_domain_m5C4FE9E1BE600D6174CAEFB4B910867DF67BF30E (void);
// 0x0000001A Microsoft.Azure.ObjectAnchors.status Microsoft.Azure.ObjectAnchors.NativeLibrary::aoa_account_information_release(System.IntPtr)
extern void NativeLibrary_aoa_account_information_release_m7F86EACFD7B582D48EE301FCEE6442B06C564B98 (void);
// 0x0000001B Microsoft.Azure.ObjectAnchors.status Microsoft.Azure.ObjectAnchors.NativeLibrary::aoa_get_error_details(System.IntPtr,System.String&,System.String&,System.String&)
extern void NativeLibrary_aoa_get_error_details_m16388D7B0D0F77B60C9B2FC425741026F7E2FD44 (void);
// 0x0000001C Microsoft.Azure.ObjectAnchors.status Microsoft.Azure.ObjectAnchors.NativeLibrary::aoa_ilist_object_instance_addref(System.IntPtr)
extern void NativeLibrary_aoa_ilist_object_instance_addref_m100ACA1D8D21AEA79735D4FB5D2375443AAAA4BC (void);
// 0x0000001D Microsoft.Azure.ObjectAnchors.status Microsoft.Azure.ObjectAnchors.NativeLibrary::aoa_ilist_object_instance_get_count(System.IntPtr,System.Int32&)
extern void NativeLibrary_aoa_ilist_object_instance_get_count_mC6CE6A80CF9FA2763461D2B4939F535B1EA73FA9 (void);
// 0x0000001E Microsoft.Azure.ObjectAnchors.status Microsoft.Azure.ObjectAnchors.NativeLibrary::aoa_ilist_object_instance_get_item(System.IntPtr,System.Int32,System.IntPtr&)
extern void NativeLibrary_aoa_ilist_object_instance_get_item_m7003F0FC4054F782BC46C49580F5F006B8C9F54B (void);
// 0x0000001F Microsoft.Azure.ObjectAnchors.status Microsoft.Azure.ObjectAnchors.NativeLibrary::aoa_ilist_object_instance_release(System.IntPtr)
extern void NativeLibrary_aoa_ilist_object_instance_release_mA05D79ADC5256096A9C037251B5264E76D837A14 (void);
// 0x00000020 Microsoft.Azure.ObjectAnchors.status Microsoft.Azure.ObjectAnchors.NativeLibrary::aoa_ilist_object_instance_remove_item(System.IntPtr,System.Int32)
extern void NativeLibrary_aoa_ilist_object_instance_remove_item_mC189C8C066DE63023A08801AB674A2DA811186FE (void);
// 0x00000021 Microsoft.Azure.ObjectAnchors.status Microsoft.Azure.ObjectAnchors.NativeLibrary::aoa_ilist_object_instance_set_item(System.IntPtr,System.Int32,System.IntPtr)
extern void NativeLibrary_aoa_ilist_object_instance_set_item_m39E739A63996CACB3EDBD2044046892E3246CE97 (void);
// 0x00000022 Microsoft.Azure.ObjectAnchors.status Microsoft.Azure.ObjectAnchors.NativeLibrary::aoa_object_anchors_session_create_account_information_account_information(System.IntPtr,System.IntPtr&)
extern void NativeLibrary_aoa_object_anchors_session_create_account_information_account_information_mA37ADC5C1F61BED4BE6C79E69F1D7E6C540CC427 (void);
// 0x00000023 Microsoft.Azure.ObjectAnchors.status Microsoft.Azure.ObjectAnchors.NativeLibrary::aoa_object_anchors_session_create_object_observer(System.IntPtr,System.IntPtr&)
extern void NativeLibrary_aoa_object_anchors_session_create_object_observer_m4E80AC16EBC7BAA684D9B987247BE6B503E17158 (void);
// 0x00000024 Microsoft.Azure.ObjectAnchors.status Microsoft.Azure.ObjectAnchors.NativeLibrary::aoa_object_anchors_session_release(System.IntPtr)
extern void NativeLibrary_aoa_object_anchors_session_release_mACB2C8EE318D53B89AD6B52F2F9E52D5B9D6E950 (void);
// 0x00000025 Microsoft.Azure.ObjectAnchors.status Microsoft.Azure.ObjectAnchors.NativeLibrary::aoa_object_instance_addref(System.IntPtr)
extern void NativeLibrary_aoa_object_instance_addref_mDEE0A3BD838F7B3C80376717C1582992DDDDB9D1 (void);
// 0x00000026 Microsoft.Azure.ObjectAnchors.status Microsoft.Azure.ObjectAnchors.NativeLibrary::aoa_object_instance_changed_event_args_addref(System.IntPtr)
extern void NativeLibrary_aoa_object_instance_changed_event_args_addref_mB31FB95A49DB4C56F7F0DDDC1596AF3442FF254D (void);
// 0x00000027 Microsoft.Azure.ObjectAnchors.status Microsoft.Azure.ObjectAnchors.NativeLibrary::aoa_object_instance_changed_event_args_release(System.IntPtr)
extern void NativeLibrary_aoa_object_instance_changed_event_args_release_mC233F3498A1069EFF39E0497FA2DC9FF64BC5D43 (void);
// 0x00000028 Microsoft.Azure.ObjectAnchors.status Microsoft.Azure.ObjectAnchors.NativeLibrary::aoa_object_instance_dispose(System.IntPtr)
extern void NativeLibrary_aoa_object_instance_dispose_m317CABC3571B0E9CB84E82731C3ACA1D02C05BAD (void);
// 0x00000029 Microsoft.Azure.ObjectAnchors.status Microsoft.Azure.ObjectAnchors.NativeLibrary::aoa_object_instance_get_mode(System.IntPtr,Microsoft.Azure.ObjectAnchors.ObjectInstanceTrackingMode&)
extern void NativeLibrary_aoa_object_instance_get_mode_m7EB922C31036824C09B8AD086F8DA80C3ABDD522 (void);
// 0x0000002A Microsoft.Azure.ObjectAnchors.status Microsoft.Azure.ObjectAnchors.NativeLibrary::aoa_object_instance_get_model_id(System.IntPtr,System.Guid&)
extern void NativeLibrary_aoa_object_instance_get_model_id_m72511B724574E0D09E64C1EAF9CCE623B1804D55 (void);
// 0x0000002B Microsoft.Azure.ObjectAnchors.status Microsoft.Azure.ObjectAnchors.NativeLibrary::aoa_object_instance_placement_addref(System.IntPtr)
extern void NativeLibrary_aoa_object_instance_placement_addref_mD2BBD9D4BAB44071737E46DFED9D0F99F87B49A8 (void);
// 0x0000002C Microsoft.Azure.ObjectAnchors.status Microsoft.Azure.ObjectAnchors.NativeLibrary::aoa_object_instance_placement_compute_model_pose_for_view(System.IntPtr,Microsoft.Azure.ObjectAnchors.SpatialGraph.SpatialPose,System.Numerics.Matrix4x4,Microsoft.Azure.ObjectAnchors.SpatialGraph.SpatialPose&)
extern void NativeLibrary_aoa_object_instance_placement_compute_model_pose_for_view_m25C8FE1C3746716D9AF4134DCB833054C854A8A9 (void);
// 0x0000002D Microsoft.Azure.ObjectAnchors.status Microsoft.Azure.ObjectAnchors.NativeLibrary::aoa_object_instance_placement_get_state(System.IntPtr,Microsoft.Azure.ObjectAnchors.ObjectInstanceStateAbi&)
extern void NativeLibrary_aoa_object_instance_placement_get_state_m346824CCCEDB0702E470F88E2303E84B6BC0CB94 (void);
// 0x0000002E Microsoft.Azure.ObjectAnchors.status Microsoft.Azure.ObjectAnchors.NativeLibrary::aoa_object_instance_placement_release(System.IntPtr)
extern void NativeLibrary_aoa_object_instance_placement_release_mC59E20E2AC10DCD9FD3B57283160240E0EEB158D (void);
// 0x0000002F Microsoft.Azure.ObjectAnchors.status Microsoft.Azure.ObjectAnchors.NativeLibrary::aoa_object_instance_release(System.IntPtr)
extern void NativeLibrary_aoa_object_instance_release_m356BC5C2B5B7F2A01533964FA4E61DB82517DA3F (void);
// 0x00000030 Microsoft.Azure.ObjectAnchors.status Microsoft.Azure.ObjectAnchors.NativeLibrary::aoa_object_instance_set_changed(System.IntPtr,System.UInt64,Microsoft.Azure.ObjectAnchors.ObjectInstanceChangedHandlerNative)
extern void NativeLibrary_aoa_object_instance_set_changed_m3FAB19D14FA99B1E7E7D6566E9CF6A8A49EAB2BA (void);
// 0x00000031 Microsoft.Azure.ObjectAnchors.status Microsoft.Azure.ObjectAnchors.NativeLibrary::aoa_object_instance_set_mode(System.IntPtr,Microsoft.Azure.ObjectAnchors.ObjectInstanceTrackingMode)
extern void NativeLibrary_aoa_object_instance_set_mode_mDF2A05D837D329B5EAB50BDDF396D103CE4AD934 (void);
// 0x00000032 Microsoft.Azure.ObjectAnchors.status Microsoft.Azure.ObjectAnchors.NativeLibrary::aoa_object_instance_try_get_current_placement(System.IntPtr,Microsoft.Azure.ObjectAnchors.SpatialGraph.SpatialGraphCoordinateSystem,System.IntPtr&)
extern void NativeLibrary_aoa_object_instance_try_get_current_placement_m6A475744D2BC6B5B715B07EFF307F6C291717ACA (void);
// 0x00000033 Microsoft.Azure.ObjectAnchors.status Microsoft.Azure.ObjectAnchors.NativeLibrary::aoa_object_model_addref(System.IntPtr)
extern void NativeLibrary_aoa_object_model_addref_m48923F589CB7459455CF655B22CF5173517E2ECE (void);
// 0x00000034 Microsoft.Azure.ObjectAnchors.status Microsoft.Azure.ObjectAnchors.NativeLibrary::aoa_object_model_dispose(System.IntPtr)
extern void NativeLibrary_aoa_object_model_dispose_m37B996D44E233759D13E28DC8EA2486EAF756847 (void);
// 0x00000035 Microsoft.Azure.ObjectAnchors.status Microsoft.Azure.ObjectAnchors.NativeLibrary::aoa_object_model_get_bounding_box(System.IntPtr,Microsoft.Azure.ObjectAnchors.SpatialGraph.SpatialOrientedBox&)
extern void NativeLibrary_aoa_object_model_get_bounding_box_m35EBE5A97E4CFAAD76FF148157E71CEE103787E1 (void);
// 0x00000036 Microsoft.Azure.ObjectAnchors.status Microsoft.Azure.ObjectAnchors.NativeLibrary::aoa_object_model_get_id(System.IntPtr,System.Guid&)
extern void NativeLibrary_aoa_object_model_get_id_m17483961114BBF10E466E9312228FA974EE3FA17 (void);
// 0x00000037 Microsoft.Azure.ObjectAnchors.status Microsoft.Azure.ObjectAnchors.NativeLibrary::aoa_object_model_get_origin_to_center_transform(System.IntPtr,System.Numerics.Matrix4x4&)
extern void NativeLibrary_aoa_object_model_get_origin_to_center_transform_m8BD9DF9C8481993051DE5A85DA8F56F66750AEBD (void);
// 0x00000038 Microsoft.Azure.ObjectAnchors.status Microsoft.Azure.ObjectAnchors.NativeLibrary::aoa_object_model_get_triangle_index_count(System.IntPtr,System.UInt32&)
extern void NativeLibrary_aoa_object_model_get_triangle_index_count_m90F74C10AD8823EC43998B4FDAFCC2EFD620516F (void);
// 0x00000039 Microsoft.Azure.ObjectAnchors.status Microsoft.Azure.ObjectAnchors.NativeLibrary::aoa_object_model_get_triangle_indices(System.IntPtr,System.UInt32[],System.Int32)
extern void NativeLibrary_aoa_object_model_get_triangle_indices_m458E39FDD0A8BEB6AC78497C9315DA379A79EB0D (void);
// 0x0000003A Microsoft.Azure.ObjectAnchors.status Microsoft.Azure.ObjectAnchors.NativeLibrary::aoa_object_model_get_vertex_count(System.IntPtr,System.UInt32&)
extern void NativeLibrary_aoa_object_model_get_vertex_count_m4011B87647135796F1E0981DB28107C5354C0874 (void);
// 0x0000003B Microsoft.Azure.ObjectAnchors.status Microsoft.Azure.ObjectAnchors.NativeLibrary::aoa_object_model_get_vertex_normals(System.IntPtr,System.Numerics.Vector3[],System.Int32)
extern void NativeLibrary_aoa_object_model_get_vertex_normals_m39E1243DC19CDD68017DEE87243B3F2C44616415 (void);
// 0x0000003C Microsoft.Azure.ObjectAnchors.status Microsoft.Azure.ObjectAnchors.NativeLibrary::aoa_object_model_get_vertex_positions(System.IntPtr,System.Numerics.Vector3[],System.Int32)
extern void NativeLibrary_aoa_object_model_get_vertex_positions_m8BE635D546C3CB70FC090FAC08160DF2B50E77AB (void);
// 0x0000003D Microsoft.Azure.ObjectAnchors.status Microsoft.Azure.ObjectAnchors.NativeLibrary::aoa_object_model_release(System.IntPtr)
extern void NativeLibrary_aoa_object_model_release_m3CFB6DEF3F84A5969825522C684FD15E11A67F48 (void);
// 0x0000003E Microsoft.Azure.ObjectAnchors.status Microsoft.Azure.ObjectAnchors.NativeLibrary::aoa_object_observer_addref(System.IntPtr)
extern void NativeLibrary_aoa_object_observer_addref_mCA2B923C2B6D19458CD3FD488103E8DA2C7FCE37 (void);
// 0x0000003F Microsoft.Azure.ObjectAnchors.status Microsoft.Azure.ObjectAnchors.NativeLibrary::aoa_object_observer_detect_async_queries(System.IntPtr,System.IntPtr[],System.Int32,System.IntPtr&)
extern void NativeLibrary_aoa_object_observer_detect_async_queries_m494E649A2B26C984EF4A10BA377B300697AC2C7C (void);
// 0x00000040 Microsoft.Azure.ObjectAnchors.status Microsoft.Azure.ObjectAnchors.NativeLibrary::aoa_object_observer_dispose(System.IntPtr)
extern void NativeLibrary_aoa_object_observer_dispose_m20422AF577BBDA50AB2C3BE38BD34753EE889B96 (void);
// 0x00000041 Microsoft.Azure.ObjectAnchors.status Microsoft.Azure.ObjectAnchors.NativeLibrary::aoa_object_observer_is_supported(System.Boolean&)
extern void NativeLibrary_aoa_object_observer_is_supported_m23A891D2D9E70404F2D50D9B4C56ADCCF77B632B (void);
// 0x00000042 Microsoft.Azure.ObjectAnchors.status Microsoft.Azure.ObjectAnchors.NativeLibrary::aoa_object_observer_load_object_model_async(System.IntPtr,System.Byte[],System.Int32,System.IntPtr&)
extern void NativeLibrary_aoa_object_observer_load_object_model_async_m86C7DAF65BDA588610187A702356DE3C5E86E54E (void);
// 0x00000043 Microsoft.Azure.ObjectAnchors.status Microsoft.Azure.ObjectAnchors.NativeLibrary::aoa_object_observer_release(System.IntPtr)
extern void NativeLibrary_aoa_object_observer_release_mEE764AB167B3C47EAFC3A3CE2B92AF643F1CD671 (void);
// 0x00000044 Microsoft.Azure.ObjectAnchors.status Microsoft.Azure.ObjectAnchors.NativeLibrary::aoa_object_observer_request_access_async(Microsoft.Azure.ObjectAnchors.ObjectObserverAccessStatus&)
extern void NativeLibrary_aoa_object_observer_request_access_async_m13B6D3CDFF0BE2CF60062BB9532AEAFFFB2CA4A4 (void);
// 0x00000045 Microsoft.Azure.ObjectAnchors.status Microsoft.Azure.ObjectAnchors.NativeLibrary::aoa_object_query_create_object_model_model(System.IntPtr,System.IntPtr&)
extern void NativeLibrary_aoa_object_query_create_object_model_model_m4BE4B2D15FE744057DD33CA818470B46B3068AED (void);
// 0x00000046 Microsoft.Azure.ObjectAnchors.status Microsoft.Azure.ObjectAnchors.NativeLibrary::aoa_object_query_create_object_model_model_object_observation_mode_observation_mode(System.IntPtr,Microsoft.Azure.ObjectAnchors.ObjectObservationMode,System.IntPtr&)
extern void NativeLibrary_aoa_object_query_create_object_model_model_object_observation_mode_observation_mode_m4FB23DBA6258926729A6ADA534826BF46DA2C991 (void);
// 0x00000047 Microsoft.Azure.ObjectAnchors.status Microsoft.Azure.ObjectAnchors.NativeLibrary::aoa_object_query_dispose(System.IntPtr)
extern void NativeLibrary_aoa_object_query_dispose_mBB1F957EA34DDC0F5E03C0DDA2E742F90DD40327 (void);
// 0x00000048 Microsoft.Azure.ObjectAnchors.status Microsoft.Azure.ObjectAnchors.NativeLibrary::aoa_object_query_release(System.IntPtr)
extern void NativeLibrary_aoa_object_query_release_mC7C5E8A1E768FF0B2D6A6D1510359F03AED73E86 (void);
// 0x00000049 Microsoft.Azure.ObjectAnchors.status Microsoft.Azure.ObjectAnchors.NativeLibrary::aoa_set_projected_object_cleanup(Microsoft.Azure.ObjectAnchors.ProjectedObjectCleanupNative)
extern void NativeLibrary_aoa_set_projected_object_cleanup_m52481F94951F5E183140142B0B921903188D7046 (void);
// 0x0000004A System.Int32 Microsoft.Azure.ObjectAnchors.BasePrivateList`1::InternalGetCount()
// 0x0000004B T Microsoft.Azure.ObjectAnchors.BasePrivateList`1::InternalGetItem(System.Int32)
// 0x0000004C System.Void Microsoft.Azure.ObjectAnchors.BasePrivateList`1::InternalSetItem(System.Int32,T)
// 0x0000004D System.Void Microsoft.Azure.ObjectAnchors.BasePrivateList`1::InternalRemoveItem(System.Int32)
// 0x0000004E System.Int32 Microsoft.Azure.ObjectAnchors.BasePrivateList`1::get_Count()
// 0x0000004F System.Boolean Microsoft.Azure.ObjectAnchors.BasePrivateList`1::get_IsReadOnly()
// 0x00000050 T Microsoft.Azure.ObjectAnchors.BasePrivateList`1::get_Item(System.Int32)
// 0x00000051 System.Void Microsoft.Azure.ObjectAnchors.BasePrivateList`1::set_Item(System.Int32,T)
// 0x00000052 System.Int32 Microsoft.Azure.ObjectAnchors.BasePrivateList`1::IndexOf(T)
// 0x00000053 System.Void Microsoft.Azure.ObjectAnchors.BasePrivateList`1::Insert(System.Int32,T)
// 0x00000054 System.Void Microsoft.Azure.ObjectAnchors.BasePrivateList`1::RemoveAt(System.Int32)
// 0x00000055 System.Void Microsoft.Azure.ObjectAnchors.BasePrivateList`1::Add(T)
// 0x00000056 System.Void Microsoft.Azure.ObjectAnchors.BasePrivateList`1::Clear()
// 0x00000057 System.Boolean Microsoft.Azure.ObjectAnchors.BasePrivateList`1::Contains(T)
// 0x00000058 System.Void Microsoft.Azure.ObjectAnchors.BasePrivateList`1::CopyTo(T[],System.Int32)
// 0x00000059 System.Boolean Microsoft.Azure.ObjectAnchors.BasePrivateList`1::Remove(T)
// 0x0000005A System.Collections.Generic.IEnumerator`1<T> Microsoft.Azure.ObjectAnchors.BasePrivateList`1::GetEnumerator()
// 0x0000005B System.Collections.IEnumerator Microsoft.Azure.ObjectAnchors.BasePrivateList`1::System.Collections.IEnumerable.GetEnumerator()
// 0x0000005C System.Void Microsoft.Azure.ObjectAnchors.BasePrivateList`1::.ctor()
// 0x0000005D System.Void Microsoft.Azure.ObjectAnchors.BasePrivateList`1/<GetEnumerator>d__19::.ctor(System.Int32)
// 0x0000005E System.Void Microsoft.Azure.ObjectAnchors.BasePrivateList`1/<GetEnumerator>d__19::System.IDisposable.Dispose()
// 0x0000005F System.Boolean Microsoft.Azure.ObjectAnchors.BasePrivateList`1/<GetEnumerator>d__19::MoveNext()
// 0x00000060 T Microsoft.Azure.ObjectAnchors.BasePrivateList`1/<GetEnumerator>d__19::System.Collections.Generic.IEnumerator<T>.get_Current()
// 0x00000061 System.Void Microsoft.Azure.ObjectAnchors.BasePrivateList`1/<GetEnumerator>d__19::System.Collections.IEnumerator.Reset()
// 0x00000062 System.Object Microsoft.Azure.ObjectAnchors.BasePrivateList`1/<GetEnumerator>d__19::System.Collections.IEnumerator.get_Current()
// 0x00000063 System.Void Microsoft.Azure.ObjectAnchors.BasePrivateList`1/<System-Collections-IEnumerable-GetEnumerator>d__20::.ctor(System.Int32)
// 0x00000064 System.Void Microsoft.Azure.ObjectAnchors.BasePrivateList`1/<System-Collections-IEnumerable-GetEnumerator>d__20::System.IDisposable.Dispose()
// 0x00000065 System.Boolean Microsoft.Azure.ObjectAnchors.BasePrivateList`1/<System-Collections-IEnumerable-GetEnumerator>d__20::MoveNext()
// 0x00000066 System.Object Microsoft.Azure.ObjectAnchors.BasePrivateList`1/<System-Collections-IEnumerable-GetEnumerator>d__20::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
// 0x00000067 System.Void Microsoft.Azure.ObjectAnchors.BasePrivateList`1/<System-Collections-IEnumerable-GetEnumerator>d__20::System.Collections.IEnumerator.Reset()
// 0x00000068 System.Object Microsoft.Azure.ObjectAnchors.BasePrivateList`1/<System-Collections-IEnumerable-GetEnumerator>d__20::System.Collections.IEnumerator.get_Current()
// 0x00000069 System.Void Microsoft.Azure.ObjectAnchors.IList_ObjectInstance::.ctor(System.IntPtr,System.Boolean)
extern void IList_ObjectInstance__ctor_m508CFC5932E64D10B6D7972AB51AC048BA71C3F7 (void);
// 0x0000006A System.Void Microsoft.Azure.ObjectAnchors.IList_ObjectInstance::Finalize()
extern void IList_ObjectInstance_Finalize_mAEDF70A3F6BF9351A5192019AA8AE6F8CB338A72 (void);
// 0x0000006B System.Int32 Microsoft.Azure.ObjectAnchors.IList_ObjectInstance::InternalGetCount()
extern void IList_ObjectInstance_InternalGetCount_m8A5F491661051E915A9FCD6D5E9BD04111E46009 (void);
// 0x0000006C Microsoft.Azure.ObjectAnchors.ObjectInstance Microsoft.Azure.ObjectAnchors.IList_ObjectInstance::InternalGetItem(System.Int32)
extern void IList_ObjectInstance_InternalGetItem_m2CDAEFF8C45A4AC1D751A3793878A65310DB8577 (void);
// 0x0000006D System.Void Microsoft.Azure.ObjectAnchors.IList_ObjectInstance::InternalSetItem(System.Int32,Microsoft.Azure.ObjectAnchors.ObjectInstance)
extern void IList_ObjectInstance_InternalSetItem_m38951F6927311E36081CBE9FB8C6B64DD8C42037 (void);
// 0x0000006E System.Void Microsoft.Azure.ObjectAnchors.IList_ObjectInstance::InternalRemoveItem(System.Int32)
extern void IList_ObjectInstance_InternalRemoveItem_m765F58CCDB1A999F1E521BA7EF8F3498CD0AF53F (void);
// 0x0000006F Microsoft.Azure.ObjectAnchors.ObjectInstanceState Microsoft.Azure.ObjectAnchors.ObjectInstanceStateAbi::Convert()
extern void ObjectInstanceStateAbi_Convert_mA9A2902D14016AD2B94D6ABEA99D3B5C1B50696D (void);
// 0x00000070 Microsoft.Azure.ObjectAnchors.ObjectInstanceState Microsoft.Azure.ObjectAnchors.ObjectInstanceStateAbi::Convert(Microsoft.Azure.ObjectAnchors.ObjectInstanceStateAbi)
extern void ObjectInstanceStateAbi_Convert_mAC3DB0C1EE584D28D659E0B0AF5CFF3617A08AC1 (void);
// 0x00000071 System.Void Microsoft.Azure.ObjectAnchors.ObjectInstanceChangedHandler::.ctor(System.Object,System.IntPtr)
extern void ObjectInstanceChangedHandler__ctor_m3C1780DFB91CEA9CAAA2C969CF43EDF9C1A9ADE3 (void);
// 0x00000072 System.Void Microsoft.Azure.ObjectAnchors.ObjectInstanceChangedHandler::Invoke(System.Object,Microsoft.Azure.ObjectAnchors.ObjectInstanceChangedEventArgs)
extern void ObjectInstanceChangedHandler_Invoke_mA5416F33C54FACD36D74494DCFEEDF7F6254000F (void);
// 0x00000073 System.IAsyncResult Microsoft.Azure.ObjectAnchors.ObjectInstanceChangedHandler::BeginInvoke(System.Object,Microsoft.Azure.ObjectAnchors.ObjectInstanceChangedEventArgs,System.AsyncCallback,System.Object)
extern void ObjectInstanceChangedHandler_BeginInvoke_mCC6BC123A42BB82D37F5FCDEBFD2D7AAF43132B3 (void);
// 0x00000074 System.Void Microsoft.Azure.ObjectAnchors.ObjectInstanceChangedHandler::EndInvoke(System.IAsyncResult)
extern void ObjectInstanceChangedHandler_EndInvoke_m833588B6383B67B35F23D02035B100A5E4CBF824 (void);
// 0x00000075 System.Void Microsoft.Azure.ObjectAnchors.AccountInformation::.ctor(System.Guid,System.String,System.String)
extern void AccountInformation__ctor_m5AAAD6704F44E886627F257E6EAD0F85F4ABA7BD (void);
// 0x00000076 System.Void Microsoft.Azure.ObjectAnchors.AccountInformation::Finalize()
extern void AccountInformation_Finalize_mE10A5417E9678CDE766BE80F5684ED2D1AEBF5C0 (void);
// 0x00000077 System.UInt64 Microsoft.Azure.ObjectAnchors.AccountInformation::Microsoft.Azure.ObjectAnchors.ICachedObject.get_Cookie()
extern void AccountInformation_Microsoft_Azure_ObjectAnchors_ICachedObject_get_Cookie_mC10DDA555DB4ECE32FD39D09625A3D190D191181 (void);
// 0x00000078 System.Void Microsoft.Azure.ObjectAnchors.ObjectAnchorsSession::.ctor(Microsoft.Azure.ObjectAnchors.AccountInformation)
extern void ObjectAnchorsSession__ctor_m4217B1AD96CC0B62C8D760285F9B05E2AA0C6A80 (void);
// 0x00000079 System.Void Microsoft.Azure.ObjectAnchors.ObjectAnchorsSession::Finalize()
extern void ObjectAnchorsSession_Finalize_m7272E8D52B3673E6E636294AF84830F0B37C62A3 (void);
// 0x0000007A Microsoft.Azure.ObjectAnchors.ObjectObserver Microsoft.Azure.ObjectAnchors.ObjectAnchorsSession::CreateObjectObserver()
extern void ObjectAnchorsSession_CreateObjectObserver_m9D78A7E9641245BBEC46844B48F5F6753F747805 (void);
// 0x0000007B System.UInt64 Microsoft.Azure.ObjectAnchors.ObjectAnchorsSession::Microsoft.Azure.ObjectAnchors.ICachedObject.get_Cookie()
extern void ObjectAnchorsSession_Microsoft_Azure_ObjectAnchors_ICachedObject_get_Cookie_mDC3BF30BF72AA2BEA33E4BB5DA09925DEC5CD530 (void);
// 0x0000007C System.Void Microsoft.Azure.ObjectAnchors.ObjectInstanceChangedEventArgs::.ctor(System.IntPtr,System.Boolean)
extern void ObjectInstanceChangedEventArgs__ctor_m749E8F2B1D2FCD3DC0D561FBF22765EE63C5B6D2 (void);
// 0x0000007D System.Void Microsoft.Azure.ObjectAnchors.ObjectInstanceChangedEventArgs::Finalize()
extern void ObjectInstanceChangedEventArgs_Finalize_m6D618A6E402ECF16983B6DD7A66657E1196DD768 (void);
// 0x0000007E System.UInt64 Microsoft.Azure.ObjectAnchors.ObjectInstanceChangedEventArgs::Microsoft.Azure.ObjectAnchors.ICachedObject.get_Cookie()
extern void ObjectInstanceChangedEventArgs_Microsoft_Azure_ObjectAnchors_ICachedObject_get_Cookie_mD1F6DB6E667974FDC15829B7CF0BFCDA6ED6A080 (void);
// 0x0000007F Microsoft.Azure.ObjectAnchors.ObjectInstanceChangedEventArgs Microsoft.Azure.ObjectAnchors.ObjectInstanceChangedEventArgs::GetOrCreateInstance(System.IntPtr,System.Boolean)
extern void ObjectInstanceChangedEventArgs_GetOrCreateInstance_mFFA3D6C12D23A4D7F728F5BBF35DF941BA9CFB3F (void);
// 0x00000080 Microsoft.Azure.ObjectAnchors.ObjectInstanceChangedEventArgs Microsoft.Azure.ObjectAnchors.ObjectInstanceChangedEventArgs::GetOrCreateInstance(System.UInt64,System.Boolean)
extern void ObjectInstanceChangedEventArgs_GetOrCreateInstance_m86D0E6F2983D7FCA8357F3EDD5FC06C50FBDB07D (void);
// 0x00000081 System.Void Microsoft.Azure.ObjectAnchors.ObjectInstanceChangedEventArgs/<>c__DisplayClass6_0::.ctor()
extern void U3CU3Ec__DisplayClass6_0__ctor_mF64551237FCD1FE8B727F64BB74288EDBA0C9731 (void);
// 0x00000082 Microsoft.Azure.ObjectAnchors.ObjectInstanceChangedEventArgs Microsoft.Azure.ObjectAnchors.ObjectInstanceChangedEventArgs/<>c__DisplayClass6_0::<GetOrCreateInstance>b__0(System.UInt64)
extern void U3CU3Ec__DisplayClass6_0_U3CGetOrCreateInstanceU3Eb__0_m28F04B6D99037CE664158D33B3D87282851DCBD8 (void);
// 0x00000083 System.Void Microsoft.Azure.ObjectAnchors.ObjectInstance::.ctor(System.IntPtr,System.Boolean)
extern void ObjectInstance__ctor_m2AE8571F16DCE1CC29BE93DA49D2C0D85C8F7949 (void);
// 0x00000084 System.Void Microsoft.Azure.ObjectAnchors.ObjectInstance::Finalize()
extern void ObjectInstance_Finalize_m7AB475FFEB64A6BBB0C9BE0665E979D4CD53761E (void);
// 0x00000085 System.Void Microsoft.Azure.ObjectAnchors.ObjectInstance::Dispose()
extern void ObjectInstance_Dispose_mAFA6818FE3DDBD68F7B9D7D53977A852BCFF7FAA (void);
// 0x00000086 System.Guid Microsoft.Azure.ObjectAnchors.ObjectInstance::get_ModelId()
extern void ObjectInstance_get_ModelId_mFEB1F05495E9AE6769DBD00DC2AF7A32D583E792 (void);
// 0x00000087 Microsoft.Azure.ObjectAnchors.ObjectInstanceTrackingMode Microsoft.Azure.ObjectAnchors.ObjectInstance::get_Mode()
extern void ObjectInstance_get_Mode_mE8989801753E77EC93CFEECFC7D92D05E2AD64BC (void);
// 0x00000088 System.Void Microsoft.Azure.ObjectAnchors.ObjectInstance::set_Mode(Microsoft.Azure.ObjectAnchors.ObjectInstanceTrackingMode)
extern void ObjectInstance_set_Mode_mC9F1104333F78AFCCCBBFC5CEA9D7987A27AB247 (void);
// 0x00000089 System.Void Microsoft.Azure.ObjectAnchors.ObjectInstance::ChangedStaticHandler(System.UInt64,System.IntPtr)
extern void ObjectInstance_ChangedStaticHandler_m1CE2D590919456EBD79555886BAD9E1358DFEEC1 (void);
// 0x0000008A System.Void Microsoft.Azure.ObjectAnchors.ObjectInstance::add_Changed(Microsoft.Azure.ObjectAnchors.ObjectInstanceChangedHandler)
extern void ObjectInstance_add_Changed_mFDB978B36A60CF54D90156E4F78B48D90B6C387B (void);
// 0x0000008B System.Void Microsoft.Azure.ObjectAnchors.ObjectInstance::remove_Changed(Microsoft.Azure.ObjectAnchors.ObjectInstanceChangedHandler)
extern void ObjectInstance_remove_Changed_m348FDDF50B337D08DFFBCB4BAC165BBE85A55866 (void);
// 0x0000008C Microsoft.Azure.ObjectAnchors.ObjectInstancePlacement Microsoft.Azure.ObjectAnchors.ObjectInstance::TryGetCurrentPlacement(Microsoft.Azure.ObjectAnchors.SpatialGraph.SpatialGraphCoordinateSystem)
extern void ObjectInstance_TryGetCurrentPlacement_mD7BE0321CD90A2FA83F5B42E1F2FD9FEC3886E7D (void);
// 0x0000008D System.UInt64 Microsoft.Azure.ObjectAnchors.ObjectInstance::Microsoft.Azure.ObjectAnchors.ICachedObject.get_Cookie()
extern void ObjectInstance_Microsoft_Azure_ObjectAnchors_ICachedObject_get_Cookie_m15DF8A06ACD97FCF9370AA42E7AF579723A7ED13 (void);
// 0x0000008E Microsoft.Azure.ObjectAnchors.ObjectInstance Microsoft.Azure.ObjectAnchors.ObjectInstance::GetOrCreateInstance(System.IntPtr,System.Boolean)
extern void ObjectInstance_GetOrCreateInstance_m308AFC8C6669673DF618895DBD7FADA82B9B9F2A (void);
// 0x0000008F Microsoft.Azure.ObjectAnchors.ObjectInstance Microsoft.Azure.ObjectAnchors.ObjectInstance::GetOrCreateInstance(System.UInt64,System.Boolean)
extern void ObjectInstance_GetOrCreateInstance_mEFDC4F8A4500A4178EF4387FFEFB2B9500B80EB7 (void);
// 0x00000090 System.Void Microsoft.Azure.ObjectAnchors.ObjectInstance::.cctor()
extern void ObjectInstance__cctor_m0E7D4203701F856458B3387F6381A3A3B351961C (void);
// 0x00000091 System.Void Microsoft.Azure.ObjectAnchors.ObjectInstance/<>c__DisplayClass19_0::.ctor()
extern void U3CU3Ec__DisplayClass19_0__ctor_m9FDE6F81AE80E2C12430B25BDD50C5005308C6DC (void);
// 0x00000092 Microsoft.Azure.ObjectAnchors.ObjectInstance Microsoft.Azure.ObjectAnchors.ObjectInstance/<>c__DisplayClass19_0::<GetOrCreateInstance>b__0(System.UInt64)
extern void U3CU3Ec__DisplayClass19_0_U3CGetOrCreateInstanceU3Eb__0_m8926781749C62110AA93ABBF6CB3AAE14808347A (void);
// 0x00000093 System.Void Microsoft.Azure.ObjectAnchors.ObjectInstancePlacement::.ctor(System.IntPtr,System.Boolean)
extern void ObjectInstancePlacement__ctor_mC5FD2B4AD389A45E30AA1B3BE721E6A97D2EACC6 (void);
// 0x00000094 System.Void Microsoft.Azure.ObjectAnchors.ObjectInstancePlacement::Finalize()
extern void ObjectInstancePlacement_Finalize_mD4D2BF72B74BBA14A64D77F1EF51FCA4F8A6170B (void);
// 0x00000095 Microsoft.Azure.ObjectAnchors.ObjectInstanceState Microsoft.Azure.ObjectAnchors.ObjectInstancePlacement::get_State()
extern void ObjectInstancePlacement_get_State_m555B7F815F0A8C71B1E7452B4242B965B933737D (void);
// 0x00000096 Microsoft.Azure.ObjectAnchors.SpatialGraph.SpatialPose Microsoft.Azure.ObjectAnchors.ObjectInstancePlacement::ComputeModelPoseForView(Microsoft.Azure.ObjectAnchors.SpatialGraph.SpatialPose,System.Numerics.Matrix4x4)
extern void ObjectInstancePlacement_ComputeModelPoseForView_mA476575277C4C5A244AE4BF59FB4E796933D3732 (void);
// 0x00000097 System.UInt64 Microsoft.Azure.ObjectAnchors.ObjectInstancePlacement::Microsoft.Azure.ObjectAnchors.ICachedObject.get_Cookie()
extern void ObjectInstancePlacement_Microsoft_Azure_ObjectAnchors_ICachedObject_get_Cookie_m82B7A141207157F173B4845D2E5EBB1134E416DA (void);
// 0x00000098 Microsoft.Azure.ObjectAnchors.ObjectInstancePlacement Microsoft.Azure.ObjectAnchors.ObjectInstancePlacement::GetOrCreateInstance(System.IntPtr,System.Boolean)
extern void ObjectInstancePlacement_GetOrCreateInstance_m23DE017410AF8F074C48D371ED29876CB421FCA4 (void);
// 0x00000099 Microsoft.Azure.ObjectAnchors.ObjectInstancePlacement Microsoft.Azure.ObjectAnchors.ObjectInstancePlacement::GetOrCreateInstance(System.UInt64,System.Boolean)
extern void ObjectInstancePlacement_GetOrCreateInstance_m94FC4476434A2ED9C4C0661EA9CA8883BD56F893 (void);
// 0x0000009A System.Void Microsoft.Azure.ObjectAnchors.ObjectInstancePlacement/<>c__DisplayClass9_0::.ctor()
extern void U3CU3Ec__DisplayClass9_0__ctor_mDA00A7BDC7433675E1329F1DB80D7941658DE976 (void);
// 0x0000009B Microsoft.Azure.ObjectAnchors.ObjectInstancePlacement Microsoft.Azure.ObjectAnchors.ObjectInstancePlacement/<>c__DisplayClass9_0::<GetOrCreateInstance>b__0(System.UInt64)
extern void U3CU3Ec__DisplayClass9_0_U3CGetOrCreateInstanceU3Eb__0_m456EDDE198FA558AD599A354C79115FCE3BDB0CB (void);
// 0x0000009C System.Void Microsoft.Azure.ObjectAnchors.ObjectModel::.ctor(System.IntPtr,System.Boolean)
extern void ObjectModel__ctor_m32CFC5641458D37F8D730A880588EFC26DA1FC65 (void);
// 0x0000009D System.Void Microsoft.Azure.ObjectAnchors.ObjectModel::Finalize()
extern void ObjectModel_Finalize_m6CF470D43192C22DFBE06EA976F0F155B8B45627 (void);
// 0x0000009E System.Void Microsoft.Azure.ObjectAnchors.ObjectModel::Dispose()
extern void ObjectModel_Dispose_m4CE824386A5CE65D743112AB83596FA231290551 (void);
// 0x0000009F System.Guid Microsoft.Azure.ObjectAnchors.ObjectModel::get_Id()
extern void ObjectModel_get_Id_m85F19AF2E0854BE1BBB4BA97396FE6CC8882E8F4 (void);
// 0x000000A0 Microsoft.Azure.ObjectAnchors.SpatialGraph.SpatialOrientedBox Microsoft.Azure.ObjectAnchors.ObjectModel::get_BoundingBox()
extern void ObjectModel_get_BoundingBox_m92734DA796E4E11A30252376A532B0855F911246 (void);
// 0x000000A1 System.Numerics.Matrix4x4 Microsoft.Azure.ObjectAnchors.ObjectModel::get_OriginToCenterTransform()
extern void ObjectModel_get_OriginToCenterTransform_m93132C3B7309042D8900672B86FD9BAAFED7C64F (void);
// 0x000000A2 System.UInt32 Microsoft.Azure.ObjectAnchors.ObjectModel::get_VertexCount()
extern void ObjectModel_get_VertexCount_m7219196A650F9F06840A50B209E422C7A28D985F (void);
// 0x000000A3 System.UInt32 Microsoft.Azure.ObjectAnchors.ObjectModel::get_TriangleIndexCount()
extern void ObjectModel_get_TriangleIndexCount_mF5A11D11C24D489396733D3EF12F6749CB78738E (void);
// 0x000000A4 System.Void Microsoft.Azure.ObjectAnchors.ObjectModel::GetVertexPositions(System.Numerics.Vector3[])
extern void ObjectModel_GetVertexPositions_m609DDA8DFD1A3894C2CDFC6050D21CF19238394E (void);
// 0x000000A5 System.Void Microsoft.Azure.ObjectAnchors.ObjectModel::GetVertexNormals(System.Numerics.Vector3[])
extern void ObjectModel_GetVertexNormals_mF9E7D24C43ED4ED70CA9BE924F6E835DB7E6A62C (void);
// 0x000000A6 System.Void Microsoft.Azure.ObjectAnchors.ObjectModel::GetTriangleIndices(System.UInt32[])
extern void ObjectModel_GetTriangleIndices_m850D9132235DF4F398B1ECA127414C4ACA18E85C (void);
// 0x000000A7 System.UInt64 Microsoft.Azure.ObjectAnchors.ObjectModel::Microsoft.Azure.ObjectAnchors.ICachedObject.get_Cookie()
extern void ObjectModel_Microsoft_Azure_ObjectAnchors_ICachedObject_get_Cookie_mC5B27886120717C74C4A22BBA52A5FB29FC1E7C0 (void);
// 0x000000A8 Microsoft.Azure.ObjectAnchors.ObjectModel Microsoft.Azure.ObjectAnchors.ObjectModel::GetOrCreateInstance(System.IntPtr,System.Boolean)
extern void ObjectModel_GetOrCreateInstance_m038FC92249DE1ABD88C351A287EF2D301F6A1BBB (void);
// 0x000000A9 Microsoft.Azure.ObjectAnchors.ObjectModel Microsoft.Azure.ObjectAnchors.ObjectModel::GetOrCreateInstance(System.UInt64,System.Boolean)
extern void ObjectModel_GetOrCreateInstance_m3B694144C4AF36CC3286AC17A7C9E12F802E1CB9 (void);
// 0x000000AA System.Void Microsoft.Azure.ObjectAnchors.ObjectModel/<>c__DisplayClass20_0::.ctor()
extern void U3CU3Ec__DisplayClass20_0__ctor_mE0AA9774F0B2902665D52E3DA2DD4FDA4ABC002E (void);
// 0x000000AB Microsoft.Azure.ObjectAnchors.ObjectModel Microsoft.Azure.ObjectAnchors.ObjectModel/<>c__DisplayClass20_0::<GetOrCreateInstance>b__0(System.UInt64)
extern void U3CU3Ec__DisplayClass20_0_U3CGetOrCreateInstanceU3Eb__0_m1DC8BA877957A09B58F0FAFF3CBBA2A3B82C2853 (void);
// 0x000000AC System.Void Microsoft.Azure.ObjectAnchors.ObjectObserver::.ctor(System.IntPtr,System.Boolean)
extern void ObjectObserver__ctor_mCDF2CC2DE301D20F38B2A45AB29FC29D4D888D80 (void);
// 0x000000AD System.Void Microsoft.Azure.ObjectAnchors.ObjectObserver::Finalize()
extern void ObjectObserver_Finalize_mDD2E39202EB126F5E21636DB727957DC7B6F05E8 (void);
// 0x000000AE System.Void Microsoft.Azure.ObjectAnchors.ObjectObserver::Dispose()
extern void ObjectObserver_Dispose_mE1E859583BA79AFC428397EA61EC18822ACC6293 (void);
// 0x000000AF System.Boolean Microsoft.Azure.ObjectAnchors.ObjectObserver::IsSupported()
extern void ObjectObserver_IsSupported_mFCFC7F8904F653BB8304E595E2AB97A085F4F377 (void);
// 0x000000B0 System.Threading.Tasks.Task`1<Microsoft.Azure.ObjectAnchors.ObjectObserverAccessStatus> Microsoft.Azure.ObjectAnchors.ObjectObserver::RequestAccessAsync()
extern void ObjectObserver_RequestAccessAsync_m704572D44DB6CEFAEB567224EFB5742D1EC8BC52 (void);
// 0x000000B1 System.Threading.Tasks.Task`1<Microsoft.Azure.ObjectAnchors.ObjectModel> Microsoft.Azure.ObjectAnchors.ObjectObserver::LoadObjectModelAsync(System.Byte[])
extern void ObjectObserver_LoadObjectModelAsync_mE3E3F679BC2C99997D2A7E28CF18676317E20CCA (void);
// 0x000000B2 System.Threading.Tasks.Task`1<System.Collections.Generic.IList`1<Microsoft.Azure.ObjectAnchors.ObjectInstance>> Microsoft.Azure.ObjectAnchors.ObjectObserver::DetectAsync(Microsoft.Azure.ObjectAnchors.ObjectQuery[])
extern void ObjectObserver_DetectAsync_m28426C87758123C3A21F971E18A5E673171536B4 (void);
// 0x000000B3 System.UInt64 Microsoft.Azure.ObjectAnchors.ObjectObserver::Microsoft.Azure.ObjectAnchors.ICachedObject.get_Cookie()
extern void ObjectObserver_Microsoft_Azure_ObjectAnchors_ICachedObject_get_Cookie_m29E5E2A650CC15C56FEEA07E1FEEDD44CCF013A2 (void);
// 0x000000B4 Microsoft.Azure.ObjectAnchors.ObjectObserver Microsoft.Azure.ObjectAnchors.ObjectObserver::GetOrCreateInstance(System.IntPtr,System.Boolean)
extern void ObjectObserver_GetOrCreateInstance_mBF0535D5A2C49A6E73A7E624D0BFF032FFB88DA3 (void);
// 0x000000B5 Microsoft.Azure.ObjectAnchors.ObjectObserver Microsoft.Azure.ObjectAnchors.ObjectObserver::GetOrCreateInstance(System.UInt64,System.Boolean)
extern void ObjectObserver_GetOrCreateInstance_mB82EE0DFC043D973E8E529B154B18ED782DC5B5E (void);
// 0x000000B6 System.Void Microsoft.Azure.ObjectAnchors.ObjectObserver/<>c::.cctor()
extern void U3CU3Ec__cctor_mB0D38184D142CA66DFE61AA91FE0136315ADC251 (void);
// 0x000000B7 System.Void Microsoft.Azure.ObjectAnchors.ObjectObserver/<>c::.ctor()
extern void U3CU3Ec__ctor_mF21C7A9CEE63E53AAFC87EFB6CAAD8FC377790E9 (void);
// 0x000000B8 Microsoft.Azure.ObjectAnchors.ObjectObserverAccessStatus Microsoft.Azure.ObjectAnchors.ObjectObserver/<>c::<RequestAccessAsync>b__5_0()
extern void U3CU3Ec_U3CRequestAccessAsyncU3Eb__5_0_mA220D444C85E3C129007A146E1329A87C49E4D78 (void);
// 0x000000B9 System.IntPtr Microsoft.Azure.ObjectAnchors.ObjectObserver/<>c::<DetectAsync>b__8_1(Microsoft.Azure.ObjectAnchors.ObjectQuery)
extern void U3CU3Ec_U3CDetectAsyncU3Eb__8_1_mB7C80810D7E67B2CFCBC371457A7A43072B3E19C (void);
// 0x000000BA System.Void Microsoft.Azure.ObjectAnchors.ObjectObserver/<RequestAccessAsync>d__5::.ctor()
extern void U3CRequestAccessAsyncU3Ed__5__ctor_mCEF5317AF43B3B719456653D095BA2EE9B07B059 (void);
// 0x000000BB System.Void Microsoft.Azure.ObjectAnchors.ObjectObserver/<RequestAccessAsync>d__5::MoveNext()
extern void U3CRequestAccessAsyncU3Ed__5_MoveNext_m75409AC0FD3CEBD8A296C19BD8645959FB3A49DD (void);
// 0x000000BC System.Void Microsoft.Azure.ObjectAnchors.ObjectObserver/<RequestAccessAsync>d__5::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern void U3CRequestAccessAsyncU3Ed__5_SetStateMachine_m7EDA3228966F76E3EDD221C6390AB3EE451D5A81 (void);
// 0x000000BD System.Void Microsoft.Azure.ObjectAnchors.ObjectObserver/<>c__DisplayClass6_0::.ctor()
extern void U3CU3Ec__DisplayClass6_0__ctor_m6EAA34F097E9868EC97C439D229BB1B1FC517D5C (void);
// 0x000000BE Microsoft.Azure.ObjectAnchors.ObjectModel Microsoft.Azure.ObjectAnchors.ObjectObserver/<>c__DisplayClass6_0::<LoadObjectModelAsync>b__0()
extern void U3CU3Ec__DisplayClass6_0_U3CLoadObjectModelAsyncU3Eb__0_m5DFC11B723438767B04BD1D6FF3E0B2D49447876 (void);
// 0x000000BF System.Void Microsoft.Azure.ObjectAnchors.ObjectObserver/<LoadObjectModelAsync>d__6::.ctor()
extern void U3CLoadObjectModelAsyncU3Ed__6__ctor_m3769991579F3F3C5BA025941AD3E5D5E4C99D657 (void);
// 0x000000C0 System.Void Microsoft.Azure.ObjectAnchors.ObjectObserver/<LoadObjectModelAsync>d__6::MoveNext()
extern void U3CLoadObjectModelAsyncU3Ed__6_MoveNext_mC4B44C3A630EF2E2EF02FB2B8D1A69D51973E6AC (void);
// 0x000000C1 System.Void Microsoft.Azure.ObjectAnchors.ObjectObserver/<LoadObjectModelAsync>d__6::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern void U3CLoadObjectModelAsyncU3Ed__6_SetStateMachine_mEFED77671108A78E66FD7529EE8A2F62EAB84B6F (void);
// 0x000000C2 System.Void Microsoft.Azure.ObjectAnchors.ObjectObserver/<>c__DisplayClass8_0::.ctor()
extern void U3CU3Ec__DisplayClass8_0__ctor_m8B5C0006E4308C152201E0956A170C434EDDB287 (void);
// 0x000000C3 Microsoft.Azure.ObjectAnchors.IList_ObjectInstance Microsoft.Azure.ObjectAnchors.ObjectObserver/<>c__DisplayClass8_0::<DetectAsync>b__0()
extern void U3CU3Ec__DisplayClass8_0_U3CDetectAsyncU3Eb__0_mA6FBCDEAFF867003C157ECE0A97F92BF8A296E69 (void);
// 0x000000C4 System.Void Microsoft.Azure.ObjectAnchors.ObjectObserver/<DetectAsync>d__8::.ctor()
extern void U3CDetectAsyncU3Ed__8__ctor_m625A58B680CE2C9E38CDA80DB3752ACDE0CC5B1B (void);
// 0x000000C5 System.Void Microsoft.Azure.ObjectAnchors.ObjectObserver/<DetectAsync>d__8::MoveNext()
extern void U3CDetectAsyncU3Ed__8_MoveNext_mD04A40169E1C56DEA960F33116F610100A5B2390 (void);
// 0x000000C6 System.Void Microsoft.Azure.ObjectAnchors.ObjectObserver/<DetectAsync>d__8::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern void U3CDetectAsyncU3Ed__8_SetStateMachine_m44656A1609FCC50285193B20DFC46027A7494BA4 (void);
// 0x000000C7 System.Void Microsoft.Azure.ObjectAnchors.ObjectObserver/<>c__DisplayClass12_0::.ctor()
extern void U3CU3Ec__DisplayClass12_0__ctor_m7C4497D0F3488A54E5F85C995B1657A2D150D879 (void);
// 0x000000C8 Microsoft.Azure.ObjectAnchors.ObjectObserver Microsoft.Azure.ObjectAnchors.ObjectObserver/<>c__DisplayClass12_0::<GetOrCreateInstance>b__0(System.UInt64)
extern void U3CU3Ec__DisplayClass12_0_U3CGetOrCreateInstanceU3Eb__0_mCE942B0D767F4FA019FC774C6C3348ADA667ACAC (void);
// 0x000000C9 System.Void Microsoft.Azure.ObjectAnchors.ObjectQuery::.ctor(Microsoft.Azure.ObjectAnchors.ObjectModel)
extern void ObjectQuery__ctor_mE5F096ABB64DD9203A1B53963955B589731A8970 (void);
// 0x000000CA System.Void Microsoft.Azure.ObjectAnchors.ObjectQuery::.ctor(Microsoft.Azure.ObjectAnchors.ObjectModel,Microsoft.Azure.ObjectAnchors.ObjectObservationMode)
extern void ObjectQuery__ctor_m9CDF383D81F4FB4DD191F2AAC10139209E96E610 (void);
// 0x000000CB System.Void Microsoft.Azure.ObjectAnchors.ObjectQuery::Finalize()
extern void ObjectQuery_Finalize_m4873F08A31676004416F228A4F02AB2DC1B65232 (void);
// 0x000000CC System.Void Microsoft.Azure.ObjectAnchors.ObjectQuery::Dispose()
extern void ObjectQuery_Dispose_m50679F4A2B7544D44F4327EB8542F4B830DFA376 (void);
// 0x000000CD System.UInt64 Microsoft.Azure.ObjectAnchors.ObjectQuery::Microsoft.Azure.ObjectAnchors.ICachedObject.get_Cookie()
extern void ObjectQuery_Microsoft_Azure_ObjectAnchors_ICachedObject_get_Cookie_mFF318415069EAFEE2B45E94910314AE4AFA28B1C (void);
// 0x000000CE Microsoft.Azure.ObjectAnchors.status Microsoft.Azure.ObjectAnchors.Diagnostics.NativeLibrary::aoa_object_diagnostics_session_close_async(System.IntPtr,System.String)
extern void NativeLibrary_aoa_object_diagnostics_session_close_async_m82A511F3621B9F11061E04CECE4BDDA3769BF9C0 (void);
// 0x000000CF Microsoft.Azure.ObjectAnchors.status Microsoft.Azure.ObjectAnchors.Diagnostics.NativeLibrary::aoa_object_diagnostics_session_create_object_observer_observer_uint32_max_session_size_in_mega_bytes(System.IntPtr,System.UInt32,System.IntPtr&)
extern void NativeLibrary_aoa_object_diagnostics_session_create_object_observer_observer_uint32_max_session_size_in_mega_bytes_mD160B0FA404908574EFBC6B62925F70B2CFA102F (void);
// 0x000000D0 Microsoft.Azure.ObjectAnchors.status Microsoft.Azure.ObjectAnchors.Diagnostics.NativeLibrary::aoa_object_diagnostics_session_release(System.IntPtr)
extern void NativeLibrary_aoa_object_diagnostics_session_release_m34FDBC829B32BD96186D4EE4926E21E0FB98E978 (void);
// 0x000000D1 Microsoft.Azure.ObjectAnchors.status Microsoft.Azure.ObjectAnchors.Diagnostics.NativeLibrary::aoa_object_diagnostics_session_upload_diagnostics_async(System.String,System.IntPtr,Microsoft.Azure.ObjectAnchors.Diagnostics.ObjectDiagnosticsUploadStatus&)
extern void NativeLibrary_aoa_object_diagnostics_session_upload_diagnostics_async_m38893C09FFADB96943990C38593DBF872F0119FB (void);
// 0x000000D2 System.Void Microsoft.Azure.ObjectAnchors.Diagnostics.ObjectDiagnosticsSession::.ctor(Microsoft.Azure.ObjectAnchors.ObjectObserver,System.UInt32)
extern void ObjectDiagnosticsSession__ctor_mE5B7A9F432B0B09673EC4057043AB559B5B08758 (void);
// 0x000000D3 System.Void Microsoft.Azure.ObjectAnchors.Diagnostics.ObjectDiagnosticsSession::Finalize()
extern void ObjectDiagnosticsSession_Finalize_m90FC37736304663A1D8AF98BB4AB7D3A0DA25B4A (void);
// 0x000000D4 System.Threading.Tasks.Task Microsoft.Azure.ObjectAnchors.Diagnostics.ObjectDiagnosticsSession::CloseAsync(System.String)
extern void ObjectDiagnosticsSession_CloseAsync_mCA9F4E1EC2472DF1045C5E4E6975838CE505636D (void);
// 0x000000D5 System.Threading.Tasks.Task`1<Microsoft.Azure.ObjectAnchors.Diagnostics.ObjectDiagnosticsUploadStatus> Microsoft.Azure.ObjectAnchors.Diagnostics.ObjectDiagnosticsSession::UploadDiagnosticsAsync(System.String,Microsoft.Azure.ObjectAnchors.ObjectAnchorsSession)
extern void ObjectDiagnosticsSession_UploadDiagnosticsAsync_mE9B6C43277C743B2E9481E92225A188CE4009482 (void);
// 0x000000D6 System.UInt64 Microsoft.Azure.ObjectAnchors.Diagnostics.ObjectDiagnosticsSession::Microsoft.Azure.ObjectAnchors.ICachedObject.get_Cookie()
extern void ObjectDiagnosticsSession_Microsoft_Azure_ObjectAnchors_ICachedObject_get_Cookie_m8491E20EE14AAA4959178F04C0A9EDDDEC613D26 (void);
// 0x000000D7 System.Void Microsoft.Azure.ObjectAnchors.Diagnostics.ObjectDiagnosticsSession/<>c__DisplayClass5_0::.ctor()
extern void U3CU3Ec__DisplayClass5_0__ctor_mCF8FF782727BEFA86D65E2D3665C0C90EAEECDC3 (void);
// 0x000000D8 System.Void Microsoft.Azure.ObjectAnchors.Diagnostics.ObjectDiagnosticsSession/<>c__DisplayClass5_0::<CloseAsync>b__0()
extern void U3CU3Ec__DisplayClass5_0_U3CCloseAsyncU3Eb__0_mC3A356B0A2DBF0FE8849FD719F42F042CE0B5743 (void);
// 0x000000D9 System.Void Microsoft.Azure.ObjectAnchors.Diagnostics.ObjectDiagnosticsSession/<CloseAsync>d__5::.ctor()
extern void U3CCloseAsyncU3Ed__5__ctor_m41B46CDBEADC00F173FF3A093199735DB99B60E8 (void);
// 0x000000DA System.Void Microsoft.Azure.ObjectAnchors.Diagnostics.ObjectDiagnosticsSession/<CloseAsync>d__5::MoveNext()
extern void U3CCloseAsyncU3Ed__5_MoveNext_mF280DD5B0B1E0CD51AC5626CA4FA894DD3F8A113 (void);
// 0x000000DB System.Void Microsoft.Azure.ObjectAnchors.Diagnostics.ObjectDiagnosticsSession/<CloseAsync>d__5::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern void U3CCloseAsyncU3Ed__5_SetStateMachine_m12A92CC6FD5C0BE3658B1A55E8ADB4E1579F53E9 (void);
// 0x000000DC System.Void Microsoft.Azure.ObjectAnchors.Diagnostics.ObjectDiagnosticsSession/<>c__DisplayClass6_0::.ctor()
extern void U3CU3Ec__DisplayClass6_0__ctor_m88C8FEF5CA1AA19A1A640AAE2BB3242AC17BFF17 (void);
// 0x000000DD Microsoft.Azure.ObjectAnchors.Diagnostics.ObjectDiagnosticsUploadStatus Microsoft.Azure.ObjectAnchors.Diagnostics.ObjectDiagnosticsSession/<>c__DisplayClass6_0::<UploadDiagnosticsAsync>b__0()
extern void U3CU3Ec__DisplayClass6_0_U3CUploadDiagnosticsAsyncU3Eb__0_mE7F38B2CEDBFFD3C7CD49ADB6F888E21E7E4E0F7 (void);
// 0x000000DE System.Void Microsoft.Azure.ObjectAnchors.Diagnostics.ObjectDiagnosticsSession/<UploadDiagnosticsAsync>d__6::.ctor()
extern void U3CUploadDiagnosticsAsyncU3Ed__6__ctor_mFBBCCDE80A8215CE52DEAAD1142ED32DA2357F89 (void);
// 0x000000DF System.Void Microsoft.Azure.ObjectAnchors.Diagnostics.ObjectDiagnosticsSession/<UploadDiagnosticsAsync>d__6::MoveNext()
extern void U3CUploadDiagnosticsAsyncU3Ed__6_MoveNext_m5292974D4FD9DCD23E5A95D78FC734251A4F94A6 (void);
// 0x000000E0 System.Void Microsoft.Azure.ObjectAnchors.Diagnostics.ObjectDiagnosticsSession/<UploadDiagnosticsAsync>d__6::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern void U3CUploadDiagnosticsAsyncU3Ed__6_SetStateMachine_m6E23BAE6366C90383ECED06A7EF03FC3F13C82D1 (void);
static Il2CppMethodPointer s_methodPointers[224] = 
{
	NativeLibraryHelpers_CheckStatus_m7F824A2F95224D52BD57ADF3A844D26FC326EE87,
	NativeLibraryHelpers_CheckStatus_m64F514827140BB7843C18DFFCAA14328C96CC5A8,
	ProjectedObjectHelpers_ConvertHandleToCookie_m2D53AA7BA42874C9EF5463D1AC738657436037C0,
	ProjectedObjectHelpers_ConvertCookieToHandle_mBAF321C316F030F1E7DC6F72552D0A3D9B173AB6,
	NULL,
	NULL,
	NULL,
	NULL,
	ProjectedObjectEventHandlerCache_Clear_m2046A5B8970E4222A9EBD102E85E93B8023D8F72,
	ProjectedObjectEventHandlerCache_GetOrInitializeEvents_mB587933DC2F01FB2BE91E3BA80A0177B408C9894,
	ProjectedObjectEventHandlerCache__cctor_m8B533905B20295DD050987A1775475206CA41EC5,
	ProjectedObjectCache__cctor_m23A0B5C3FEE39BD8E97DD76B1DA2BEEE5C77254D,
	ProjectedObjectCache_Add_mC489037FD794053E877648F1689AC9CE0FB47C4F,
	NULL,
	ProjectedObjectCache_Remove_mE7437B508380613DCF47FA3248B4771025DF9A07,
	ProjectedObjectCache_ProjectedObjectCleanupHandler_m809EC3C10B1B19187BDF04FF5B5C1EDE6C1066E0,
	ObjectInstanceChangedHandlerNative__ctor_m3632527EAC6BF85311BE3FD3BAB5850BC2CA2E39,
	ObjectInstanceChangedHandlerNative_Invoke_m793108B7BA5FD663866FB661136DB6EAC3629891,
	ObjectInstanceChangedHandlerNative_BeginInvoke_m7E5DB475322270167984D67D2C2CD84B4D77A5CB,
	ObjectInstanceChangedHandlerNative_EndInvoke_m6EAB5E5EDC50C80A6EE6E5E8EC2CA3574C19FF29,
	ProjectedObjectCleanupNative__ctor_m219DFBC33526DF92FE4F377F6813AFE151FFA14E,
	ProjectedObjectCleanupNative_Invoke_mC933BF65414D06DB28735B5C3B7ACD06ABC712AF,
	ProjectedObjectCleanupNative_BeginInvoke_m7A340E178258C79072BDFA91078303D02DA4D3D8,
	ProjectedObjectCleanupNative_EndInvoke_mA18995F824EC375AEB2CDFE9CF22D39AE807B510,
	NativeLibrary_aoa_account_information_create_guid_account_id_string_account_key_string_account_domain_m5C4FE9E1BE600D6174CAEFB4B910867DF67BF30E,
	NativeLibrary_aoa_account_information_release_m7F86EACFD7B582D48EE301FCEE6442B06C564B98,
	NativeLibrary_aoa_get_error_details_m16388D7B0D0F77B60C9B2FC425741026F7E2FD44,
	NativeLibrary_aoa_ilist_object_instance_addref_m100ACA1D8D21AEA79735D4FB5D2375443AAAA4BC,
	NativeLibrary_aoa_ilist_object_instance_get_count_mC6CE6A80CF9FA2763461D2B4939F535B1EA73FA9,
	NativeLibrary_aoa_ilist_object_instance_get_item_m7003F0FC4054F782BC46C49580F5F006B8C9F54B,
	NativeLibrary_aoa_ilist_object_instance_release_mA05D79ADC5256096A9C037251B5264E76D837A14,
	NativeLibrary_aoa_ilist_object_instance_remove_item_mC189C8C066DE63023A08801AB674A2DA811186FE,
	NativeLibrary_aoa_ilist_object_instance_set_item_m39E739A63996CACB3EDBD2044046892E3246CE97,
	NativeLibrary_aoa_object_anchors_session_create_account_information_account_information_mA37ADC5C1F61BED4BE6C79E69F1D7E6C540CC427,
	NativeLibrary_aoa_object_anchors_session_create_object_observer_m4E80AC16EBC7BAA684D9B987247BE6B503E17158,
	NativeLibrary_aoa_object_anchors_session_release_mACB2C8EE318D53B89AD6B52F2F9E52D5B9D6E950,
	NativeLibrary_aoa_object_instance_addref_mDEE0A3BD838F7B3C80376717C1582992DDDDB9D1,
	NativeLibrary_aoa_object_instance_changed_event_args_addref_mB31FB95A49DB4C56F7F0DDDC1596AF3442FF254D,
	NativeLibrary_aoa_object_instance_changed_event_args_release_mC233F3498A1069EFF39E0497FA2DC9FF64BC5D43,
	NativeLibrary_aoa_object_instance_dispose_m317CABC3571B0E9CB84E82731C3ACA1D02C05BAD,
	NativeLibrary_aoa_object_instance_get_mode_m7EB922C31036824C09B8AD086F8DA80C3ABDD522,
	NativeLibrary_aoa_object_instance_get_model_id_m72511B724574E0D09E64C1EAF9CCE623B1804D55,
	NativeLibrary_aoa_object_instance_placement_addref_mD2BBD9D4BAB44071737E46DFED9D0F99F87B49A8,
	NativeLibrary_aoa_object_instance_placement_compute_model_pose_for_view_m25C8FE1C3746716D9AF4134DCB833054C854A8A9,
	NativeLibrary_aoa_object_instance_placement_get_state_m346824CCCEDB0702E470F88E2303E84B6BC0CB94,
	NativeLibrary_aoa_object_instance_placement_release_mC59E20E2AC10DCD9FD3B57283160240E0EEB158D,
	NativeLibrary_aoa_object_instance_release_m356BC5C2B5B7F2A01533964FA4E61DB82517DA3F,
	NativeLibrary_aoa_object_instance_set_changed_m3FAB19D14FA99B1E7E7D6566E9CF6A8A49EAB2BA,
	NativeLibrary_aoa_object_instance_set_mode_mDF2A05D837D329B5EAB50BDDF396D103CE4AD934,
	NativeLibrary_aoa_object_instance_try_get_current_placement_m6A475744D2BC6B5B715B07EFF307F6C291717ACA,
	NativeLibrary_aoa_object_model_addref_m48923F589CB7459455CF655B22CF5173517E2ECE,
	NativeLibrary_aoa_object_model_dispose_m37B996D44E233759D13E28DC8EA2486EAF756847,
	NativeLibrary_aoa_object_model_get_bounding_box_m35EBE5A97E4CFAAD76FF148157E71CEE103787E1,
	NativeLibrary_aoa_object_model_get_id_m17483961114BBF10E466E9312228FA974EE3FA17,
	NativeLibrary_aoa_object_model_get_origin_to_center_transform_m8BD9DF9C8481993051DE5A85DA8F56F66750AEBD,
	NativeLibrary_aoa_object_model_get_triangle_index_count_m90F74C10AD8823EC43998B4FDAFCC2EFD620516F,
	NativeLibrary_aoa_object_model_get_triangle_indices_m458E39FDD0A8BEB6AC78497C9315DA379A79EB0D,
	NativeLibrary_aoa_object_model_get_vertex_count_m4011B87647135796F1E0981DB28107C5354C0874,
	NativeLibrary_aoa_object_model_get_vertex_normals_m39E1243DC19CDD68017DEE87243B3F2C44616415,
	NativeLibrary_aoa_object_model_get_vertex_positions_m8BE635D546C3CB70FC090FAC08160DF2B50E77AB,
	NativeLibrary_aoa_object_model_release_m3CFB6DEF3F84A5969825522C684FD15E11A67F48,
	NativeLibrary_aoa_object_observer_addref_mCA2B923C2B6D19458CD3FD488103E8DA2C7FCE37,
	NativeLibrary_aoa_object_observer_detect_async_queries_m494E649A2B26C984EF4A10BA377B300697AC2C7C,
	NativeLibrary_aoa_object_observer_dispose_m20422AF577BBDA50AB2C3BE38BD34753EE889B96,
	NativeLibrary_aoa_object_observer_is_supported_m23A891D2D9E70404F2D50D9B4C56ADCCF77B632B,
	NativeLibrary_aoa_object_observer_load_object_model_async_m86C7DAF65BDA588610187A702356DE3C5E86E54E,
	NativeLibrary_aoa_object_observer_release_mEE764AB167B3C47EAFC3A3CE2B92AF643F1CD671,
	NativeLibrary_aoa_object_observer_request_access_async_m13B6D3CDFF0BE2CF60062BB9532AEAFFFB2CA4A4,
	NativeLibrary_aoa_object_query_create_object_model_model_m4BE4B2D15FE744057DD33CA818470B46B3068AED,
	NativeLibrary_aoa_object_query_create_object_model_model_object_observation_mode_observation_mode_m4FB23DBA6258926729A6ADA534826BF46DA2C991,
	NativeLibrary_aoa_object_query_dispose_mBB1F957EA34DDC0F5E03C0DDA2E742F90DD40327,
	NativeLibrary_aoa_object_query_release_mC7C5E8A1E768FF0B2D6A6D1510359F03AED73E86,
	NativeLibrary_aoa_set_projected_object_cleanup_m52481F94951F5E183140142B0B921903188D7046,
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
	IList_ObjectInstance__ctor_m508CFC5932E64D10B6D7972AB51AC048BA71C3F7,
	IList_ObjectInstance_Finalize_mAEDF70A3F6BF9351A5192019AA8AE6F8CB338A72,
	IList_ObjectInstance_InternalGetCount_m8A5F491661051E915A9FCD6D5E9BD04111E46009,
	IList_ObjectInstance_InternalGetItem_m2CDAEFF8C45A4AC1D751A3793878A65310DB8577,
	IList_ObjectInstance_InternalSetItem_m38951F6927311E36081CBE9FB8C6B64DD8C42037,
	IList_ObjectInstance_InternalRemoveItem_m765F58CCDB1A999F1E521BA7EF8F3498CD0AF53F,
	ObjectInstanceStateAbi_Convert_mA9A2902D14016AD2B94D6ABEA99D3B5C1B50696D,
	ObjectInstanceStateAbi_Convert_mAC3DB0C1EE584D28D659E0B0AF5CFF3617A08AC1,
	ObjectInstanceChangedHandler__ctor_m3C1780DFB91CEA9CAAA2C969CF43EDF9C1A9ADE3,
	ObjectInstanceChangedHandler_Invoke_mA5416F33C54FACD36D74494DCFEEDF7F6254000F,
	ObjectInstanceChangedHandler_BeginInvoke_mCC6BC123A42BB82D37F5FCDEBFD2D7AAF43132B3,
	ObjectInstanceChangedHandler_EndInvoke_m833588B6383B67B35F23D02035B100A5E4CBF824,
	AccountInformation__ctor_m5AAAD6704F44E886627F257E6EAD0F85F4ABA7BD,
	AccountInformation_Finalize_mE10A5417E9678CDE766BE80F5684ED2D1AEBF5C0,
	AccountInformation_Microsoft_Azure_ObjectAnchors_ICachedObject_get_Cookie_mC10DDA555DB4ECE32FD39D09625A3D190D191181,
	ObjectAnchorsSession__ctor_m4217B1AD96CC0B62C8D760285F9B05E2AA0C6A80,
	ObjectAnchorsSession_Finalize_m7272E8D52B3673E6E636294AF84830F0B37C62A3,
	ObjectAnchorsSession_CreateObjectObserver_m9D78A7E9641245BBEC46844B48F5F6753F747805,
	ObjectAnchorsSession_Microsoft_Azure_ObjectAnchors_ICachedObject_get_Cookie_mDC3BF30BF72AA2BEA33E4BB5DA09925DEC5CD530,
	ObjectInstanceChangedEventArgs__ctor_m749E8F2B1D2FCD3DC0D561FBF22765EE63C5B6D2,
	ObjectInstanceChangedEventArgs_Finalize_m6D618A6E402ECF16983B6DD7A66657E1196DD768,
	ObjectInstanceChangedEventArgs_Microsoft_Azure_ObjectAnchors_ICachedObject_get_Cookie_mD1F6DB6E667974FDC15829B7CF0BFCDA6ED6A080,
	ObjectInstanceChangedEventArgs_GetOrCreateInstance_mFFA3D6C12D23A4D7F728F5BBF35DF941BA9CFB3F,
	ObjectInstanceChangedEventArgs_GetOrCreateInstance_m86D0E6F2983D7FCA8357F3EDD5FC06C50FBDB07D,
	U3CU3Ec__DisplayClass6_0__ctor_mF64551237FCD1FE8B727F64BB74288EDBA0C9731,
	U3CU3Ec__DisplayClass6_0_U3CGetOrCreateInstanceU3Eb__0_m28F04B6D99037CE664158D33B3D87282851DCBD8,
	ObjectInstance__ctor_m2AE8571F16DCE1CC29BE93DA49D2C0D85C8F7949,
	ObjectInstance_Finalize_m7AB475FFEB64A6BBB0C9BE0665E979D4CD53761E,
	ObjectInstance_Dispose_mAFA6818FE3DDBD68F7B9D7D53977A852BCFF7FAA,
	ObjectInstance_get_ModelId_mFEB1F05495E9AE6769DBD00DC2AF7A32D583E792,
	ObjectInstance_get_Mode_mE8989801753E77EC93CFEECFC7D92D05E2AD64BC,
	ObjectInstance_set_Mode_mC9F1104333F78AFCCCBBFC5CEA9D7987A27AB247,
	ObjectInstance_ChangedStaticHandler_m1CE2D590919456EBD79555886BAD9E1358DFEEC1,
	ObjectInstance_add_Changed_mFDB978B36A60CF54D90156E4F78B48D90B6C387B,
	ObjectInstance_remove_Changed_m348FDDF50B337D08DFFBCB4BAC165BBE85A55866,
	ObjectInstance_TryGetCurrentPlacement_mD7BE0321CD90A2FA83F5B42E1F2FD9FEC3886E7D,
	ObjectInstance_Microsoft_Azure_ObjectAnchors_ICachedObject_get_Cookie_m15DF8A06ACD97FCF9370AA42E7AF579723A7ED13,
	ObjectInstance_GetOrCreateInstance_m308AFC8C6669673DF618895DBD7FADA82B9B9F2A,
	ObjectInstance_GetOrCreateInstance_mEFDC4F8A4500A4178EF4387FFEFB2B9500B80EB7,
	ObjectInstance__cctor_m0E7D4203701F856458B3387F6381A3A3B351961C,
	U3CU3Ec__DisplayClass19_0__ctor_m9FDE6F81AE80E2C12430B25BDD50C5005308C6DC,
	U3CU3Ec__DisplayClass19_0_U3CGetOrCreateInstanceU3Eb__0_m8926781749C62110AA93ABBF6CB3AAE14808347A,
	ObjectInstancePlacement__ctor_mC5FD2B4AD389A45E30AA1B3BE721E6A97D2EACC6,
	ObjectInstancePlacement_Finalize_mD4D2BF72B74BBA14A64D77F1EF51FCA4F8A6170B,
	ObjectInstancePlacement_get_State_m555B7F815F0A8C71B1E7452B4242B965B933737D,
	ObjectInstancePlacement_ComputeModelPoseForView_mA476575277C4C5A244AE4BF59FB4E796933D3732,
	ObjectInstancePlacement_Microsoft_Azure_ObjectAnchors_ICachedObject_get_Cookie_m82B7A141207157F173B4845D2E5EBB1134E416DA,
	ObjectInstancePlacement_GetOrCreateInstance_m23DE017410AF8F074C48D371ED29876CB421FCA4,
	ObjectInstancePlacement_GetOrCreateInstance_m94FC4476434A2ED9C4C0661EA9CA8883BD56F893,
	U3CU3Ec__DisplayClass9_0__ctor_mDA00A7BDC7433675E1329F1DB80D7941658DE976,
	U3CU3Ec__DisplayClass9_0_U3CGetOrCreateInstanceU3Eb__0_m456EDDE198FA558AD599A354C79115FCE3BDB0CB,
	ObjectModel__ctor_m32CFC5641458D37F8D730A880588EFC26DA1FC65,
	ObjectModel_Finalize_m6CF470D43192C22DFBE06EA976F0F155B8B45627,
	ObjectModel_Dispose_m4CE824386A5CE65D743112AB83596FA231290551,
	ObjectModel_get_Id_m85F19AF2E0854BE1BBB4BA97396FE6CC8882E8F4,
	ObjectModel_get_BoundingBox_m92734DA796E4E11A30252376A532B0855F911246,
	ObjectModel_get_OriginToCenterTransform_m93132C3B7309042D8900672B86FD9BAAFED7C64F,
	ObjectModel_get_VertexCount_m7219196A650F9F06840A50B209E422C7A28D985F,
	ObjectModel_get_TriangleIndexCount_mF5A11D11C24D489396733D3EF12F6749CB78738E,
	ObjectModel_GetVertexPositions_m609DDA8DFD1A3894C2CDFC6050D21CF19238394E,
	ObjectModel_GetVertexNormals_mF9E7D24C43ED4ED70CA9BE924F6E835DB7E6A62C,
	ObjectModel_GetTriangleIndices_m850D9132235DF4F398B1ECA127414C4ACA18E85C,
	ObjectModel_Microsoft_Azure_ObjectAnchors_ICachedObject_get_Cookie_mC5B27886120717C74C4A22BBA52A5FB29FC1E7C0,
	ObjectModel_GetOrCreateInstance_m038FC92249DE1ABD88C351A287EF2D301F6A1BBB,
	ObjectModel_GetOrCreateInstance_m3B694144C4AF36CC3286AC17A7C9E12F802E1CB9,
	U3CU3Ec__DisplayClass20_0__ctor_mE0AA9774F0B2902665D52E3DA2DD4FDA4ABC002E,
	U3CU3Ec__DisplayClass20_0_U3CGetOrCreateInstanceU3Eb__0_m1DC8BA877957A09B58F0FAFF3CBBA2A3B82C2853,
	ObjectObserver__ctor_mCDF2CC2DE301D20F38B2A45AB29FC29D4D888D80,
	ObjectObserver_Finalize_mDD2E39202EB126F5E21636DB727957DC7B6F05E8,
	ObjectObserver_Dispose_mE1E859583BA79AFC428397EA61EC18822ACC6293,
	ObjectObserver_IsSupported_mFCFC7F8904F653BB8304E595E2AB97A085F4F377,
	ObjectObserver_RequestAccessAsync_m704572D44DB6CEFAEB567224EFB5742D1EC8BC52,
	ObjectObserver_LoadObjectModelAsync_mE3E3F679BC2C99997D2A7E28CF18676317E20CCA,
	ObjectObserver_DetectAsync_m28426C87758123C3A21F971E18A5E673171536B4,
	ObjectObserver_Microsoft_Azure_ObjectAnchors_ICachedObject_get_Cookie_m29E5E2A650CC15C56FEEA07E1FEEDD44CCF013A2,
	ObjectObserver_GetOrCreateInstance_mBF0535D5A2C49A6E73A7E624D0BFF032FFB88DA3,
	ObjectObserver_GetOrCreateInstance_mB82EE0DFC043D973E8E529B154B18ED782DC5B5E,
	U3CU3Ec__cctor_mB0D38184D142CA66DFE61AA91FE0136315ADC251,
	U3CU3Ec__ctor_mF21C7A9CEE63E53AAFC87EFB6CAAD8FC377790E9,
	U3CU3Ec_U3CRequestAccessAsyncU3Eb__5_0_mA220D444C85E3C129007A146E1329A87C49E4D78,
	U3CU3Ec_U3CDetectAsyncU3Eb__8_1_mB7C80810D7E67B2CFCBC371457A7A43072B3E19C,
	U3CRequestAccessAsyncU3Ed__5__ctor_mCEF5317AF43B3B719456653D095BA2EE9B07B059,
	U3CRequestAccessAsyncU3Ed__5_MoveNext_m75409AC0FD3CEBD8A296C19BD8645959FB3A49DD,
	U3CRequestAccessAsyncU3Ed__5_SetStateMachine_m7EDA3228966F76E3EDD221C6390AB3EE451D5A81,
	U3CU3Ec__DisplayClass6_0__ctor_m6EAA34F097E9868EC97C439D229BB1B1FC517D5C,
	U3CU3Ec__DisplayClass6_0_U3CLoadObjectModelAsyncU3Eb__0_m5DFC11B723438767B04BD1D6FF3E0B2D49447876,
	U3CLoadObjectModelAsyncU3Ed__6__ctor_m3769991579F3F3C5BA025941AD3E5D5E4C99D657,
	U3CLoadObjectModelAsyncU3Ed__6_MoveNext_mC4B44C3A630EF2E2EF02FB2B8D1A69D51973E6AC,
	U3CLoadObjectModelAsyncU3Ed__6_SetStateMachine_mEFED77671108A78E66FD7529EE8A2F62EAB84B6F,
	U3CU3Ec__DisplayClass8_0__ctor_m8B5C0006E4308C152201E0956A170C434EDDB287,
	U3CU3Ec__DisplayClass8_0_U3CDetectAsyncU3Eb__0_mA6FBCDEAFF867003C157ECE0A97F92BF8A296E69,
	U3CDetectAsyncU3Ed__8__ctor_m625A58B680CE2C9E38CDA80DB3752ACDE0CC5B1B,
	U3CDetectAsyncU3Ed__8_MoveNext_mD04A40169E1C56DEA960F33116F610100A5B2390,
	U3CDetectAsyncU3Ed__8_SetStateMachine_m44656A1609FCC50285193B20DFC46027A7494BA4,
	U3CU3Ec__DisplayClass12_0__ctor_m7C4497D0F3488A54E5F85C995B1657A2D150D879,
	U3CU3Ec__DisplayClass12_0_U3CGetOrCreateInstanceU3Eb__0_mCE942B0D767F4FA019FC774C6C3348ADA667ACAC,
	ObjectQuery__ctor_mE5F096ABB64DD9203A1B53963955B589731A8970,
	ObjectQuery__ctor_m9CDF383D81F4FB4DD191F2AAC10139209E96E610,
	ObjectQuery_Finalize_m4873F08A31676004416F228A4F02AB2DC1B65232,
	ObjectQuery_Dispose_m50679F4A2B7544D44F4327EB8542F4B830DFA376,
	ObjectQuery_Microsoft_Azure_ObjectAnchors_ICachedObject_get_Cookie_mFF318415069EAFEE2B45E94910314AE4AFA28B1C,
	NativeLibrary_aoa_object_diagnostics_session_close_async_m82A511F3621B9F11061E04CECE4BDDA3769BF9C0,
	NativeLibrary_aoa_object_diagnostics_session_create_object_observer_observer_uint32_max_session_size_in_mega_bytes_mD160B0FA404908574EFBC6B62925F70B2CFA102F,
	NativeLibrary_aoa_object_diagnostics_session_release_m34FDBC829B32BD96186D4EE4926E21E0FB98E978,
	NativeLibrary_aoa_object_diagnostics_session_upload_diagnostics_async_m38893C09FFADB96943990C38593DBF872F0119FB,
	ObjectDiagnosticsSession__ctor_mE5B7A9F432B0B09673EC4057043AB559B5B08758,
	ObjectDiagnosticsSession_Finalize_m90FC37736304663A1D8AF98BB4AB7D3A0DA25B4A,
	ObjectDiagnosticsSession_CloseAsync_mCA9F4E1EC2472DF1045C5E4E6975838CE505636D,
	ObjectDiagnosticsSession_UploadDiagnosticsAsync_mE9B6C43277C743B2E9481E92225A188CE4009482,
	ObjectDiagnosticsSession_Microsoft_Azure_ObjectAnchors_ICachedObject_get_Cookie_m8491E20EE14AAA4959178F04C0A9EDDDEC613D26,
	U3CU3Ec__DisplayClass5_0__ctor_mCF8FF782727BEFA86D65E2D3665C0C90EAEECDC3,
	U3CU3Ec__DisplayClass5_0_U3CCloseAsyncU3Eb__0_mC3A356B0A2DBF0FE8849FD719F42F042CE0B5743,
	U3CCloseAsyncU3Ed__5__ctor_m41B46CDBEADC00F173FF3A093199735DB99B60E8,
	U3CCloseAsyncU3Ed__5_MoveNext_mF280DD5B0B1E0CD51AC5626CA4FA894DD3F8A113,
	U3CCloseAsyncU3Ed__5_SetStateMachine_m12A92CC6FD5C0BE3658B1A55E8ADB4E1579F53E9,
	U3CU3Ec__DisplayClass6_0__ctor_m88C8FEF5CA1AA19A1A640AAE2BB3242AC17BFF17,
	U3CU3Ec__DisplayClass6_0_U3CUploadDiagnosticsAsyncU3Eb__0_mE7F38B2CEDBFFD3C7CD49ADB6F888E21E7E4E0F7,
	U3CUploadDiagnosticsAsyncU3Ed__6__ctor_mFBBCCDE80A8215CE52DEAAD1142ED32DA2357F89,
	U3CUploadDiagnosticsAsyncU3Ed__6_MoveNext_m5292974D4FD9DCD23E5A95D78FC734251A4F94A6,
	U3CUploadDiagnosticsAsyncU3Ed__6_SetStateMachine_m6E23BAE6366C90383ECED06A7EF03FC3F13C82D1,
};
extern void ObjectInstanceStateAbi_Convert_mA9A2902D14016AD2B94D6ABEA99D3B5C1B50696D_AdjustorThunk (void);
static Il2CppTokenAdjustorThunkPair s_adjustorThunks[1] = 
{
	{ 0x0600006F, ObjectInstanceStateAbi_Convert_mA9A2902D14016AD2B94D6ABEA99D3B5C1B50696D_AdjustorThunk },
};
static const int32_t s_InvokerIndices[224] = 
{
	13147,
	12374,
	12775,
	12786,
	7955,
	-1,
	-1,
	-1,
	13148,
	12913,
	13326,
	13326,
	13152,
	-1,
	13148,
	13149,
	4134,
	4083,
	1326,
	6711,
	4134,
	6665,
	1992,
	6711,
	10352,
	12749,
	10358,
	12749,
	11823,
	11069,
	12749,
	11825,
	11071,
	11823,
	11823,
	12749,
	12749,
	12749,
	12749,
	12749,
	11823,
	11823,
	12749,
	10372,
	11823,
	12749,
	12749,
	11073,
	11825,
	11082,
	12749,
	12749,
	11823,
	11823,
	11823,
	11823,
	11080,
	11823,
	11080,
	11080,
	12749,
	12749,
	10367,
	12749,
	12733,
	10367,
	12749,
	12733,
	11823,
	11069,
	12749,
	12749,
	12753,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	4091,
	8140,
	7954,
	5358,
	3860,
	6662,
	8007,
	12948,
	4134,
	4141,
	1386,
	6711,
	2345,
	8140,
	7955,
	6711,
	8140,
	8004,
	7955,
	4091,
	8140,
	7955,
	11972,
	11968,
	8140,
	5359,
	4091,
	8140,
	8140,
	7919,
	7954,
	6662,
	12367,
	6711,
	6711,
	5376,
	7955,
	11972,
	11968,
	13326,
	8140,
	5359,
	4091,
	8140,
	8007,
	3513,
	7955,
	11972,
	11968,
	8140,
	5359,
	4091,
	8140,
	8140,
	7919,
	8081,
	7980,
	7954,
	7954,
	6711,
	6711,
	6711,
	7955,
	11972,
	11968,
	8140,
	5359,
	4091,
	8140,
	8140,
	13308,
	13285,
	5365,
	5365,
	7955,
	11972,
	11968,
	13326,
	8140,
	7954,
	5234,
	8140,
	8140,
	6711,
	8140,
	8004,
	8140,
	8140,
	6711,
	8140,
	8004,
	8140,
	8140,
	6711,
	8140,
	5359,
	6711,
	4131,
	8140,
	8140,
	7955,
	11828,
	11069,
	12749,
	11095,
	4131,
	8140,
	5365,
	11990,
	7955,
	8140,
	8140,
	8140,
	8140,
	6711,
	8140,
	7954,
	8140,
	8140,
	6711,
};
static const Il2CppTokenIndexMethodTuple s_reversePInvokeIndices[2] = 
{
	{ 0x06000010, 16,  (void**)&ProjectedObjectCache_ProjectedObjectCleanupHandler_m809EC3C10B1B19187BDF04FF5B5C1EDE6C1066E0_RuntimeMethod_var, 0 },
	{ 0x06000089, 14,  (void**)&ObjectInstance_ChangedStaticHandler_m1CE2D590919456EBD79555886BAD9E1358DFEEC1_RuntimeMethod_var, 0 },
};
static const Il2CppTokenRangePair s_rgctxIndices[7] = 
{
	{ 0x0200000B, { 5, 14 } },
	{ 0x0200000C, { 19, 3 } },
	{ 0x0200000D, { 22, 3 } },
	{ 0x06000006, { 0, 1 } },
	{ 0x06000007, { 1, 1 } },
	{ 0x06000008, { 2, 1 } },
	{ 0x0600000E, { 3, 2 } },
};
static const Il2CppRGCTXDefinition s_rgctxValues[25] = 
{
	{ (Il2CppRGCTXDataType)2, 1015 },
	{ (Il2CppRGCTXDataType)2, 1016 },
	{ (Il2CppRGCTXDataType)2, 1017 },
	{ (Il2CppRGCTXDataType)3, 31466 },
	{ (Il2CppRGCTXDataType)2, 1013 },
	{ (Il2CppRGCTXDataType)3, 8169 },
	{ (Il2CppRGCTXDataType)3, 8170 },
	{ (Il2CppRGCTXDataType)3, 8172 },
	{ (Il2CppRGCTXDataType)3, 9486 },
	{ (Il2CppRGCTXDataType)2, 6226 },
	{ (Il2CppRGCTXDataType)3, 9485 },
	{ (Il2CppRGCTXDataType)3, 8171 },
	{ (Il2CppRGCTXDataType)3, 8168 },
	{ (Il2CppRGCTXDataType)3, 8174 },
	{ (Il2CppRGCTXDataType)3, 8173 },
	{ (Il2CppRGCTXDataType)2, 4828 },
	{ (Il2CppRGCTXDataType)3, 1616 },
	{ (Il2CppRGCTXDataType)2, 4943 },
	{ (Il2CppRGCTXDataType)3, 2033 },
	{ (Il2CppRGCTXDataType)3, 8176 },
	{ (Il2CppRGCTXDataType)3, 8175 },
	{ (Il2CppRGCTXDataType)2, 2218 },
	{ (Il2CppRGCTXDataType)3, 8178 },
	{ (Il2CppRGCTXDataType)2, 2220 },
	{ (Il2CppRGCTXDataType)3, 8177 },
};
extern const CustomAttributesCacheGenerator g_Microsoft_ObjectAnchors_Runtime_Api_WSA_AttributeGenerators[];
IL2CPP_EXTERN_C const Il2CppCodeGenModule g_Microsoft_ObjectAnchors_Runtime_Api_WSA_CodeGenModule;
const Il2CppCodeGenModule g_Microsoft_ObjectAnchors_Runtime_Api_WSA_CodeGenModule = 
{
	"Microsoft.ObjectAnchors.Runtime.Api.WSA.dll",
	224,
	s_methodPointers,
	1,
	s_adjustorThunks,
	s_InvokerIndices,
	2,
	s_reversePInvokeIndices,
	7,
	s_rgctxIndices,
	25,
	s_rgctxValues,
	NULL,
	g_Microsoft_ObjectAnchors_Runtime_Api_WSA_AttributeGenerators,
	NULL, // module initializer,
	NULL,
	NULL,
	NULL,
};
