#include "pch-c.h"
#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include "codegen/il2cpp-codegen-metadata.h"





// 0x00000001 System.Void Intel.RealSense.Context::.cctor()
extern void Context__cctor_m42FD19CCCCB600614606DE672D85054776AF4A6C (void);
// 0x00000002 System.Void Intel.RealSense.Context::.ctor()
extern void Context__ctor_m833D3312D73B2D956F3142714C1EB4CB7738A34A (void);
// 0x00000003 System.String Intel.RealSense.Context::get_Version()
extern void Context_get_Version_mE03FFAA5CCCF967EBBC469A090D9B47D433282BA (void);
// 0x00000004 System.IntPtr Intel.RealSense.Context::Create()
extern void Context_Create_mC3469D9CF1A77C7E74B12045EBAD34C4D3898ACC (void);
// 0x00000005 System.Void Intel.RealSense.Context::add_OnDevicesChangedEvent(Intel.RealSense.Context/OnDevicesChangedDelegate)
extern void Context_add_OnDevicesChangedEvent_mEA4D0DC321AD71B9E463B62DDF3581E07E9BD9D7 (void);
// 0x00000006 System.Void Intel.RealSense.Context::remove_OnDevicesChangedEvent(Intel.RealSense.Context/OnDevicesChangedDelegate)
extern void Context_remove_OnDevicesChangedEvent_m9367BFBAFD216048540C3B0CFAA6D7BC635981B5 (void);
// 0x00000007 System.Void Intel.RealSense.Context::add_OnDevicesChanged(Intel.RealSense.Context/OnDevicesChangedDelegate)
extern void Context_add_OnDevicesChanged_m409A40EEFB06AEA08ABD69A891EE9607AF8F55E3 (void);
// 0x00000008 System.Void Intel.RealSense.Context::remove_OnDevicesChanged(Intel.RealSense.Context/OnDevicesChangedDelegate)
extern void Context_remove_OnDevicesChanged_mBC2222D0FD29A52AA5AA085751067843A45018A0 (void);
// 0x00000009 Intel.RealSense.DeviceList Intel.RealSense.Context::QueryDevices(System.Boolean)
extern void Context_QueryDevices_m9D15427411FD9D414A84F6E7866C5E2FB0A664F1 (void);
// 0x0000000A Intel.RealSense.DeviceList Intel.RealSense.Context::get_Devices()
extern void Context_get_Devices_m7B85FF2D892954686D44D57192612EFA3861DC7F (void);
// 0x0000000B Intel.RealSense.PlaybackDevice Intel.RealSense.Context::AddDevice(System.String)
extern void Context_AddDevice_m09B49E056C8FF38720A281FD3324A90557859C96 (void);
// 0x0000000C System.Void Intel.RealSense.Context::RemoveDevice(System.String)
extern void Context_RemoveDevice_m74C30BD78427357D64B7A4FC3AFB3FB6BBDDCA92 (void);
// 0x0000000D System.Void Intel.RealSense.Context::OnDevicesChangedInternal(System.IntPtr,System.IntPtr,System.IntPtr)
extern void Context_OnDevicesChangedInternal_m13FD1F35326571A77CB41B2D4DA98479CF79E277 (void);
// 0x0000000E System.Void Intel.RealSense.Context/OnDevicesChangedDelegate::.ctor(System.Object,System.IntPtr)
extern void OnDevicesChangedDelegate__ctor_m4F10A9F2500370E61126A3811ECAF8DE4C9FFA99 (void);
// 0x0000000F System.Void Intel.RealSense.Context/OnDevicesChangedDelegate::Invoke(Intel.RealSense.DeviceList,Intel.RealSense.DeviceList)
extern void OnDevicesChangedDelegate_Invoke_mA28AECD814E3B7FDBAD5BF41D2A02BD229F13FBD (void);
// 0x00000010 System.IAsyncResult Intel.RealSense.Context/OnDevicesChangedDelegate::BeginInvoke(Intel.RealSense.DeviceList,Intel.RealSense.DeviceList,System.AsyncCallback,System.Object)
extern void OnDevicesChangedDelegate_BeginInvoke_mD0D926AE6C28ECF90289F0943967D5EAF8D960F1 (void);
// 0x00000011 System.Void Intel.RealSense.Context/OnDevicesChangedDelegate::EndInvoke(System.IAsyncResult)
extern void OnDevicesChangedDelegate_EndInvoke_m3CDA36584DC7ACAEBEBEE5DB42C5EEB06200AE4E (void);
// 0x00000012 System.IntPtr Intel.RealSense.NativeMethods::unix_memcpy(System.IntPtr,System.IntPtr,System.Int32)
extern void NativeMethods_unix_memcpy_mEB9B0406D3D2248103951D3306C994DAC44AA201 (void);
// 0x00000013 System.IntPtr Intel.RealSense.NativeMethods::win_memcpy(System.IntPtr,System.IntPtr,System.Int32)
extern void NativeMethods_win_memcpy_m4B9F1D85D6097C8E259FF081C07F15B36FE42B7E (void);
// 0x00000014 System.IntPtr Intel.RealSense.NativeMethods::rs2_create_record_device(System.IntPtr,System.String,System.Object&)
extern void NativeMethods_rs2_create_record_device_m38FDAE53C7C1E7F4274C9480A91E66514B7EB0F2 (void);
// 0x00000015 System.Void Intel.RealSense.NativeMethods::rs2_record_device_pause(System.IntPtr,System.Object&)
extern void NativeMethods_rs2_record_device_pause_m31238013107E760CBF348773A63A1140967CC39F (void);
// 0x00000016 System.Void Intel.RealSense.NativeMethods::rs2_record_device_resume(System.IntPtr,System.Object&)
extern void NativeMethods_rs2_record_device_resume_mF8411FFCD907A46C70FEEC755C0FE4343B5FD06F (void);
// 0x00000017 System.IntPtr Intel.RealSense.NativeMethods::rs2_record_device_filename(System.IntPtr,System.Object&)
extern void NativeMethods_rs2_record_device_filename_mF41AF58EAFD42806FAA9D33A920F7B68FD77C63C (void);
// 0x00000018 System.IntPtr Intel.RealSense.NativeMethods::rs2_create_playback_device(System.String,System.Object&)
extern void NativeMethods_rs2_create_playback_device_m7E93FAF2AB2D52C15D5592782538032118550491 (void);
// 0x00000019 System.IntPtr Intel.RealSense.NativeMethods::rs2_playback_device_get_file_path(System.IntPtr,System.Object&)
extern void NativeMethods_rs2_playback_device_get_file_path_mED423A94505BE96095520C8E94B053790CA12558 (void);
// 0x0000001A System.UInt64 Intel.RealSense.NativeMethods::rs2_playback_get_duration(System.IntPtr,System.Object&)
extern void NativeMethods_rs2_playback_get_duration_m14150264701C3092759BBD87538AD8482E2189DB (void);
// 0x0000001B System.Void Intel.RealSense.NativeMethods::rs2_playback_seek(System.IntPtr,System.Int64,System.Object&)
extern void NativeMethods_rs2_playback_seek_m8BA7B358A660B874F91E998238AD56ED232D4250 (void);
// 0x0000001C System.UInt64 Intel.RealSense.NativeMethods::rs2_playback_get_position(System.IntPtr,System.Object&)
extern void NativeMethods_rs2_playback_get_position_mF3DBCAE12D1B30073119E5C66BB08EE55121522E (void);
// 0x0000001D System.Void Intel.RealSense.NativeMethods::rs2_playback_device_resume(System.IntPtr,System.Object&)
extern void NativeMethods_rs2_playback_device_resume_mD2A866B7D6050C15784CDF3558FBCAEDFB8CDE0C (void);
// 0x0000001E System.Void Intel.RealSense.NativeMethods::rs2_playback_device_pause(System.IntPtr,System.Object&)
extern void NativeMethods_rs2_playback_device_pause_m59AE0CEEB277183C5DF428D83E9D9D434D896373 (void);
// 0x0000001F System.Void Intel.RealSense.NativeMethods::rs2_playback_device_set_real_time(System.IntPtr,System.Int32,System.Object&)
extern void NativeMethods_rs2_playback_device_set_real_time_m25DF1F3DE74C346C7B91B1A5F5CA8FB9EE267127 (void);
// 0x00000020 System.Int32 Intel.RealSense.NativeMethods::rs2_playback_device_is_real_time(System.IntPtr,System.Object&)
extern void NativeMethods_rs2_playback_device_is_real_time_mF915F141F57D5F99619A7726F14C262D9B3A5498 (void);
// 0x00000021 System.Void Intel.RealSense.NativeMethods::rs2_playback_device_set_status_changed_callback(System.IntPtr,System.IntPtr,System.Object&)
extern void NativeMethods_rs2_playback_device_set_status_changed_callback_m707275EA661C70A29BAFC4986DA4EEE42C2C59D2 (void);
// 0x00000022 Intel.RealSense.PlaybackStatus Intel.RealSense.NativeMethods::rs2_playback_device_get_current_status(System.IntPtr,System.Object&)
extern void NativeMethods_rs2_playback_device_get_current_status_m7F29ACEB7C576E2AB2AC44074A4525D5D149D0BB (void);
// 0x00000023 System.Void Intel.RealSense.NativeMethods::rs2_playback_device_set_playback_speed(System.IntPtr,System.Single,System.Object&)
extern void NativeMethods_rs2_playback_device_set_playback_speed_m19F93A829BB9736A24F6E3060F38625B7DB30DD4 (void);
// 0x00000024 System.Void Intel.RealSense.NativeMethods::rs2_playback_device_stop(System.IntPtr,System.Object&)
extern void NativeMethods_rs2_playback_device_stop_m149EECEACC1269C98D060787E49ED40B58D9A2A8 (void);
// 0x00000025 System.IntPtr Intel.RealSense.NativeMethods::rs2_create_colorizer(System.Object&)
extern void NativeMethods_rs2_create_colorizer_mF3BCA6617B44E0B8F5C6FE0260925BCD1DFE4AFA (void);
// 0x00000026 System.IntPtr Intel.RealSense.NativeMethods::rs2_create_sync_processing_block(System.Object&)
extern void NativeMethods_rs2_create_sync_processing_block_m663FB11F6748AA946740A70198818BB6D3A791D5 (void);
// 0x00000027 System.IntPtr Intel.RealSense.NativeMethods::rs2_create_pointcloud(System.Object&)
extern void NativeMethods_rs2_create_pointcloud_mA4E310CF03D0476C7F3DDDD066ED377304D4C3A5 (void);
// 0x00000028 System.IntPtr Intel.RealSense.NativeMethods::rs2_create_processing_block_fptr(Intel.RealSense.frame_processor_callback,System.IntPtr,System.Object&)
extern void NativeMethods_rs2_create_processing_block_fptr_m88B5EFAA2718A8ED70A48B0C09A9222D15E4EBB8 (void);
// 0x00000029 System.Void Intel.RealSense.NativeMethods::rs2_start_processing_fptr(System.IntPtr,Intel.RealSense.frame_callback,System.IntPtr,System.Object&)
extern void NativeMethods_rs2_start_processing_fptr_m39836E34BF4F1159B5CB7B28266DE19BFF3CDF78 (void);
// 0x0000002A System.Int32 Intel.RealSense.NativeMethods::rs2_processing_block_register_simple_option(System.IntPtr,Intel.RealSense.Option,System.Single,System.Single,System.Single,System.Single,System.Object&)
extern void NativeMethods_rs2_processing_block_register_simple_option_m868E95A9508FEF4A57FA8121D2A3E150E76B5779 (void);
// 0x0000002B System.IntPtr Intel.RealSense.NativeMethods::rs2_get_processing_block_info(System.IntPtr,Intel.RealSense.CameraInfo,System.Object&)
extern void NativeMethods_rs2_get_processing_block_info_mBA306ACF10F6A1F48EB30593978A08F9E201E001 (void);
// 0x0000002C System.Int32 Intel.RealSense.NativeMethods::rs2_supports_processing_block_info(System.IntPtr,Intel.RealSense.CameraInfo,System.Object&)
extern void NativeMethods_rs2_supports_processing_block_info_mC77F89A3DFB3DB4143BB3BBDFB203E6E745AF3B5 (void);
// 0x0000002D System.Void Intel.RealSense.NativeMethods::rs2_start_processing_queue(System.IntPtr,System.IntPtr,System.Object&)
extern void NativeMethods_rs2_start_processing_queue_mB2CEBC80044B7FED5EDE267B03CCFD471E98E4DF (void);
// 0x0000002E System.Void Intel.RealSense.NativeMethods::rs2_process_frame(System.IntPtr,System.IntPtr,System.Object&)
extern void NativeMethods_rs2_process_frame_m50D49B921FBDB99097150FCFCCFC5D8DE6F7D17E (void);
// 0x0000002F System.Void Intel.RealSense.NativeMethods::rs2_delete_processing_block(System.IntPtr)
extern void NativeMethods_rs2_delete_processing_block_mDBF9AB8ED78A548347074DF82D073B5BF754835B (void);
// 0x00000030 System.IntPtr Intel.RealSense.NativeMethods::rs2_create_frame_queue(System.Int32,System.Object&)
extern void NativeMethods_rs2_create_frame_queue_m53FE55B37535D1C7C378DC36720D68625DE77A33 (void);
// 0x00000031 System.Void Intel.RealSense.NativeMethods::rs2_delete_frame_queue(System.IntPtr)
extern void NativeMethods_rs2_delete_frame_queue_mE5C89610604F50F87547E7D53601B591C5FCE145 (void);
// 0x00000032 System.IntPtr Intel.RealSense.NativeMethods::rs2_wait_for_frame(System.IntPtr,System.UInt32,System.Object&)
extern void NativeMethods_rs2_wait_for_frame_m5F63CF52024B43CD0E1D56E16F61DA5E68EA9F5D (void);
// 0x00000033 System.Int32 Intel.RealSense.NativeMethods::rs2_try_wait_for_frame(System.IntPtr,System.UInt32,System.IntPtr&,System.Object&)
extern void NativeMethods_rs2_try_wait_for_frame_m4F1F2236C3D194EF7F21A7F0C962B6050FF21783 (void);
// 0x00000034 System.Int32 Intel.RealSense.NativeMethods::rs2_poll_for_frame(System.IntPtr,System.IntPtr&,System.Object&)
extern void NativeMethods_rs2_poll_for_frame_mBBB6E95800FA32ADCD6A97F4C8616654C0E6A613 (void);
// 0x00000035 System.Void Intel.RealSense.NativeMethods::rs2_enqueue_frame(System.IntPtr,System.IntPtr)
extern void NativeMethods_rs2_enqueue_frame_mF17FA600823429D2FF91CDE6BB3A5C892F36E644 (void);
// 0x00000036 System.IntPtr Intel.RealSense.NativeMethods::rs2_create_align(Intel.RealSense.Stream,System.Object&)
extern void NativeMethods_rs2_create_align_m52DAA6EF3D3528F66DA76BF23ED856C0A09CB0A1 (void);
// 0x00000037 System.IntPtr Intel.RealSense.NativeMethods::rs2_create_decimation_filter_block(System.Object&)
extern void NativeMethods_rs2_create_decimation_filter_block_mDE8CD80FA41B62D71206C87EB4D520257EF88BB5 (void);
// 0x00000038 System.IntPtr Intel.RealSense.NativeMethods::rs2_create_temporal_filter_block(System.Object&)
extern void NativeMethods_rs2_create_temporal_filter_block_m664D2536C44534F3388EB29A4949E462BEE7C7F1 (void);
// 0x00000039 System.IntPtr Intel.RealSense.NativeMethods::rs2_create_spatial_filter_block(System.Object&)
extern void NativeMethods_rs2_create_spatial_filter_block_m73BA9B15CA1A0E97F10E6C4D83331A76B8105014 (void);
// 0x0000003A System.IntPtr Intel.RealSense.NativeMethods::rs2_create_disparity_transform_block(System.Byte,System.Object&)
extern void NativeMethods_rs2_create_disparity_transform_block_mE18B68C680955721D38B55CF16C3FE382E37C460 (void);
// 0x0000003B System.IntPtr Intel.RealSense.NativeMethods::rs2_create_hole_filling_filter_block(System.Object&)
extern void NativeMethods_rs2_create_hole_filling_filter_block_m06792121B05468AF940A4FC4D22CCBAE5B7FF5CA (void);
// 0x0000003C System.IntPtr Intel.RealSense.NativeMethods::rs2_create_threshold(System.Object&)
extern void NativeMethods_rs2_create_threshold_m34BFE789BF7543A68D61ECC7D8458F9CADC10496 (void);
// 0x0000003D System.IntPtr Intel.RealSense.NativeMethods::rs2_create_units_transform(System.Object&)
extern void NativeMethods_rs2_create_units_transform_m0433EFDF78C3D5A2136DB02EB22C6F4D44ED2243 (void);
// 0x0000003E System.IntPtr Intel.RealSense.NativeMethods::rs2_create_zero_order_invalidation_block(System.Object&)
extern void NativeMethods_rs2_create_zero_order_invalidation_block_m349FFA56A1B9EAECA90CFE11D05F5C01666B47DB (void);
// 0x0000003F System.IntPtr Intel.RealSense.NativeMethods::rs2_create_huffman_depth_decompress_block(System.Object&)
extern void NativeMethods_rs2_create_huffman_depth_decompress_block_m716C48026F7E974D287179FC953A1C0B75B9D653 (void);
// 0x00000040 System.Int32 Intel.RealSense.NativeMethods::rs2_is_option_read_only(System.IntPtr,Intel.RealSense.Option,System.Object&)
extern void NativeMethods_rs2_is_option_read_only_m393E1FCEB7F7730A26D1EA1ED706ACF3D20D5180 (void);
// 0x00000041 System.Single Intel.RealSense.NativeMethods::rs2_get_option(System.IntPtr,Intel.RealSense.Option,System.Object&)
extern void NativeMethods_rs2_get_option_m11F0F195012E4A6A8EE0A525F7FA8B5C926AE969 (void);
// 0x00000042 System.Void Intel.RealSense.NativeMethods::rs2_set_option(System.IntPtr,Intel.RealSense.Option,System.Single,System.Object&)
extern void NativeMethods_rs2_set_option_mB3CF3C283912FB0F0F5021D8B2A10CB3983A66E7 (void);
// 0x00000043 System.IntPtr Intel.RealSense.NativeMethods::rs2_get_options_list(System.IntPtr,System.Object&)
extern void NativeMethods_rs2_get_options_list_mE481DBC5C59730FE68238184EE2929924E2300EF (void);
// 0x00000044 System.Int32 Intel.RealSense.NativeMethods::rs2_get_options_list_size(System.IntPtr,System.Object&)
extern void NativeMethods_rs2_get_options_list_size_m95F40B7C62F887BF266635D427863028A96AF5E6 (void);
// 0x00000045 Intel.RealSense.Option Intel.RealSense.NativeMethods::rs2_get_option_from_list(System.IntPtr,System.Int32,System.Object&)
extern void NativeMethods_rs2_get_option_from_list_m05E9CFF0C102380EC00842EBC1F6D2825BC4AA58 (void);
// 0x00000046 System.Void Intel.RealSense.NativeMethods::rs2_delete_options_list(System.IntPtr)
extern void NativeMethods_rs2_delete_options_list_mC5CF4E7AE5BD3F026029E1F5B58C102E975A85A3 (void);
// 0x00000047 System.Int32 Intel.RealSense.NativeMethods::rs2_supports_option(System.IntPtr,Intel.RealSense.Option,System.Object&)
extern void NativeMethods_rs2_supports_option_m309ECB1FAE77DA93CF224855BA7C5940C2AEE7CD (void);
// 0x00000048 System.Void Intel.RealSense.NativeMethods::rs2_get_option_range(System.IntPtr,Intel.RealSense.Option,System.Single&,System.Single&,System.Single&,System.Single&,System.Object&)
extern void NativeMethods_rs2_get_option_range_m85458F9D82EA80A55E6019AE89D5131587B47F55 (void);
// 0x00000049 System.IntPtr Intel.RealSense.NativeMethods::rs2_get_option_description(System.IntPtr,Intel.RealSense.Option,System.Object&)
extern void NativeMethods_rs2_get_option_description_mAA9EF1FD573810205A48839E21959B1A167B13E2 (void);
// 0x0000004A System.IntPtr Intel.RealSense.NativeMethods::rs2_get_option_value_description(System.IntPtr,Intel.RealSense.Option,System.Single,System.Object&)
extern void NativeMethods_rs2_get_option_value_description_m27AFB556B9B526D6ECDED3969876A54F5EC2D86D (void);
// 0x0000004B System.Int64 Intel.RealSense.NativeMethods::rs2_get_frame_metadata(System.IntPtr,Intel.RealSense.FrameMetadataValue,System.Object&)
extern void NativeMethods_rs2_get_frame_metadata_m6F46055D031AAF59DF032C91A28D0CDB74924FB5 (void);
// 0x0000004C System.Int32 Intel.RealSense.NativeMethods::rs2_supports_frame_metadata(System.IntPtr,Intel.RealSense.FrameMetadataValue,System.Object&)
extern void NativeMethods_rs2_supports_frame_metadata_mE5600E61A60BFCE2ABE3AB14419DBC75F930CE2E (void);
// 0x0000004D Intel.RealSense.TimestampDomain Intel.RealSense.NativeMethods::rs2_get_frame_timestamp_domain(System.IntPtr,System.Object&)
extern void NativeMethods_rs2_get_frame_timestamp_domain_m513DE5CC9C082D80613136925365DE84B373753B (void);
// 0x0000004E System.Double Intel.RealSense.NativeMethods::rs2_get_frame_timestamp(System.IntPtr,System.Object&)
extern void NativeMethods_rs2_get_frame_timestamp_m8E9F90C433534EFEEAE1477D4D6A67EDFD47608A (void);
// 0x0000004F System.IntPtr Intel.RealSense.NativeMethods::rs2_get_frame_sensor(System.IntPtr,System.Object&)
extern void NativeMethods_rs2_get_frame_sensor_mACC5190DE44C69A4A96D2EEE8719ACD29843FC7D (void);
// 0x00000050 System.UInt64 Intel.RealSense.NativeMethods::rs2_get_frame_number(System.IntPtr,System.Object&)
extern void NativeMethods_rs2_get_frame_number_m0291F97EF87E4CCDBA90FEAEED794AA0A54FDD58 (void);
// 0x00000051 System.Int32 Intel.RealSense.NativeMethods::rs2_get_frame_data_size(System.IntPtr,System.Object&)
extern void NativeMethods_rs2_get_frame_data_size_m1C7CCA4FB89EAE9EA26E014F42CEBEF14D5E168C (void);
// 0x00000052 System.IntPtr Intel.RealSense.NativeMethods::rs2_get_frame_data(System.IntPtr,System.Object&)
extern void NativeMethods_rs2_get_frame_data_mF98E16A4A959C6A005D874D00B927CA72016D50B (void);
// 0x00000053 System.Int32 Intel.RealSense.NativeMethods::rs2_get_frame_width(System.IntPtr,System.Object&)
extern void NativeMethods_rs2_get_frame_width_mFDB14EE8C125F9734E043BE4EC7A0D84EC05A339 (void);
// 0x00000054 System.Int32 Intel.RealSense.NativeMethods::rs2_get_frame_height(System.IntPtr,System.Object&)
extern void NativeMethods_rs2_get_frame_height_m379CD30337D90AFF6EA5F511B1D3F7DB62270FA8 (void);
// 0x00000055 System.Int32 Intel.RealSense.NativeMethods::rs2_get_frame_stride_in_bytes(System.IntPtr,System.Object&)
extern void NativeMethods_rs2_get_frame_stride_in_bytes_mC9CF53BDA8213C5999301A19CE032931A88E015E (void);
// 0x00000056 System.Int32 Intel.RealSense.NativeMethods::rs2_get_frame_bits_per_pixel(System.IntPtr,System.Object&)
extern void NativeMethods_rs2_get_frame_bits_per_pixel_m2EC3F3D85152F98989EFA1494B1DA8C5369FA556 (void);
// 0x00000057 System.Void Intel.RealSense.NativeMethods::rs2_frame_add_ref(System.IntPtr,System.Object&)
extern void NativeMethods_rs2_frame_add_ref_m9AAC75BD63451D30274140D7C7B9D4A02D7EAFAF (void);
// 0x00000058 System.Void Intel.RealSense.NativeMethods::rs2_release_frame(System.IntPtr)
extern void NativeMethods_rs2_release_frame_m78E4A362377F86727E5E0F09C405F5838B7DDB4E (void);
// 0x00000059 System.Void Intel.RealSense.NativeMethods::rs2_keep_frame(System.IntPtr)
extern void NativeMethods_rs2_keep_frame_mE4D49F17B4E1031FA31874CE999B822E5F79AD4B (void);
// 0x0000005A System.IntPtr Intel.RealSense.NativeMethods::rs2_get_frame_vertices(System.IntPtr,System.Object&)
extern void NativeMethods_rs2_get_frame_vertices_mA0F42626D6C71C3FDC2FB4EE0FB8DD8C5B85C05A (void);
// 0x0000005B System.IntPtr Intel.RealSense.NativeMethods::rs2_get_frame_texture_coordinates(System.IntPtr,System.Object&)
extern void NativeMethods_rs2_get_frame_texture_coordinates_m7ACFCCC0FA66404CDD5C08469C02A75011984079 (void);
// 0x0000005C System.Int32 Intel.RealSense.NativeMethods::rs2_get_frame_points_count(System.IntPtr,System.Object&)
extern void NativeMethods_rs2_get_frame_points_count_m0EFB11501B32938413993E68959C9D6ABAEBD130 (void);
// 0x0000005D System.Void Intel.RealSense.NativeMethods::rs2_export_to_ply(System.IntPtr,System.String,System.IntPtr,System.Object&)
extern void NativeMethods_rs2_export_to_ply_mBFC4E3A1FD44611FA8AC90FA769B2F78C2646A0B (void);
// 0x0000005E System.IntPtr Intel.RealSense.NativeMethods::rs2_get_frame_stream_profile(System.IntPtr,System.Object&)
extern void NativeMethods_rs2_get_frame_stream_profile_m4554C9A3F3AF1A0B9466011CC30DAB1062C1DDFC (void);
// 0x0000005F System.Int32 Intel.RealSense.NativeMethods::rs2_is_frame_extendable_to(System.IntPtr,Intel.RealSense.Extension,System.Object&)
extern void NativeMethods_rs2_is_frame_extendable_to_mA704D5F53B32BC0891F9A45B13D8B07ADE2AD0DA (void);
// 0x00000060 System.IntPtr Intel.RealSense.NativeMethods::rs2_allocate_synthetic_video_frame(System.IntPtr,System.IntPtr,System.IntPtr,System.Int32,System.Int32,System.Int32,System.Int32,Intel.RealSense.Extension,System.Object&)
extern void NativeMethods_rs2_allocate_synthetic_video_frame_m17940562F5997B04E293D3617E175BEBBC40F2D4 (void);
// 0x00000061 System.IntPtr Intel.RealSense.NativeMethods::rs2_allocate_synthetic_motion_frame(System.IntPtr,System.IntPtr,System.IntPtr,Intel.RealSense.Extension,System.Object&)
extern void NativeMethods_rs2_allocate_synthetic_motion_frame_m6959119EC9E55F2C16045821DCB768135893A301 (void);
// 0x00000062 System.IntPtr Intel.RealSense.NativeMethods::rs2_allocate_composite_frame(System.IntPtr,System.IntPtr[],System.Int32,System.Object&)
extern void NativeMethods_rs2_allocate_composite_frame_mA2616FE722D8CF41CB7EB78202171A22C5C00CBD (void);
// 0x00000063 System.IntPtr Intel.RealSense.NativeMethods::rs2_allocate_composite_frame(System.IntPtr,System.IntPtr,System.Int32,System.Object&)
extern void NativeMethods_rs2_allocate_composite_frame_mC9929F5C4E289F05A9E8832A66608074C4A86328 (void);
// 0x00000064 System.IntPtr Intel.RealSense.NativeMethods::rs2_extract_frame(System.IntPtr,System.Int32,System.Object&)
extern void NativeMethods_rs2_extract_frame_m15DF5AA593B47ACB08D7E1F103455E7D985EF821 (void);
// 0x00000065 System.Int32 Intel.RealSense.NativeMethods::rs2_embedded_frames_count(System.IntPtr,System.Object&)
extern void NativeMethods_rs2_embedded_frames_count_mA61FE024A26818989B224D933E46D081F8F08C6C (void);
// 0x00000066 System.Void Intel.RealSense.NativeMethods::rs2_synthetic_frame_ready(System.IntPtr,System.IntPtr,System.Object&)
extern void NativeMethods_rs2_synthetic_frame_ready_mC629C54844F239D01A18ADCDCA67440BDFCE9335 (void);
// 0x00000067 System.Void Intel.RealSense.NativeMethods::rs2_pose_frame_get_pose_data(System.IntPtr,Intel.RealSense.Pose,System.Object&)
extern void NativeMethods_rs2_pose_frame_get_pose_data_m64A2484417DDA757B3612DEBC4A0A372966FBD29 (void);
// 0x00000068 System.Void Intel.RealSense.NativeMethods::rs2_delete_sensor_list(System.IntPtr)
extern void NativeMethods_rs2_delete_sensor_list_m0FB4D085DA5FFDB0C84D52CB1109A1256403A65B (void);
// 0x00000069 System.Int32 Intel.RealSense.NativeMethods::rs2_get_sensors_count(System.IntPtr,System.Object&)
extern void NativeMethods_rs2_get_sensors_count_m94E0C7F7E5CA001098CB1B56BB77000AFDF73FAB (void);
// 0x0000006A System.Void Intel.RealSense.NativeMethods::rs2_delete_sensor(System.IntPtr)
extern void NativeMethods_rs2_delete_sensor_mF9CF2F7DA98E02A5F54D2F1B52A56E5A71B83C79 (void);
// 0x0000006B System.IntPtr Intel.RealSense.NativeMethods::rs2_create_sensor(System.IntPtr,System.Int32,System.Object&)
extern void NativeMethods_rs2_create_sensor_mE35B32B08405F023F4A4658D13A29C5C31EC5B43 (void);
// 0x0000006C System.IntPtr Intel.RealSense.NativeMethods::rs2_create_device_from_sensor(System.IntPtr,System.Object&)
extern void NativeMethods_rs2_create_device_from_sensor_mAFDBD7CA6F0217D2B9B1E32CDC7900097E92878E (void);
// 0x0000006D System.IntPtr Intel.RealSense.NativeMethods::rs2_get_sensor_info(System.IntPtr,Intel.RealSense.CameraInfo,System.Object&)
extern void NativeMethods_rs2_get_sensor_info_mC7EA50BE0875EF48B86A6A733FE66420EA0E0B43 (void);
// 0x0000006E System.Int32 Intel.RealSense.NativeMethods::rs2_supports_sensor_info(System.IntPtr,Intel.RealSense.CameraInfo,System.Object&)
extern void NativeMethods_rs2_supports_sensor_info_mC78D8FA98A1995E7B6993EB9D33A668FC3CC76BE (void);
// 0x0000006F System.Int32 Intel.RealSense.NativeMethods::rs2_is_sensor_extendable_to(System.IntPtr,Intel.RealSense.Extension,System.Object&)
extern void NativeMethods_rs2_is_sensor_extendable_to_m14087F50121FC9A577E45B52155FA98CD14A85B5 (void);
// 0x00000070 System.Single Intel.RealSense.NativeMethods::rs2_get_depth_scale(System.IntPtr,System.Object&)
extern void NativeMethods_rs2_get_depth_scale_m02222ADD006A122248ABF883B9AA3085DDBD65AE (void);
// 0x00000071 System.Void Intel.RealSense.NativeMethods::rs2_set_region_of_interest(System.IntPtr,System.Int32,System.Int32,System.Int32,System.Int32,System.Object&)
extern void NativeMethods_rs2_set_region_of_interest_m58CE90EB0444B3759E7AEB520E894860A805991B (void);
// 0x00000072 System.Void Intel.RealSense.NativeMethods::rs2_get_region_of_interest(System.IntPtr,System.Int32&,System.Int32&,System.Int32&,System.Int32&,System.Object&)
extern void NativeMethods_rs2_get_region_of_interest_mFB4ECF051BED87CE9A35FFB9E299035CB3DE5DD1 (void);
// 0x00000073 System.Void Intel.RealSense.NativeMethods::rs2_open(System.IntPtr,System.IntPtr,System.Object&)
extern void NativeMethods_rs2_open_m5FB4E7973113D717784356F28FB4487EE2024F4E (void);
// 0x00000074 System.Void Intel.RealSense.NativeMethods::rs2_open_multiple(System.IntPtr,System.IntPtr[],System.Int32,System.Object&)
extern void NativeMethods_rs2_open_multiple_mD3C8CE3146067C05E4F8D2B9093FE2517E9CEDDA (void);
// 0x00000075 System.Void Intel.RealSense.NativeMethods::rs2_close(System.IntPtr,System.Object&)
extern void NativeMethods_rs2_close_mCD8C9F7F32AC8DB96DA98C380B99961137AA696D (void);
// 0x00000076 System.Void Intel.RealSense.NativeMethods::rs2_start(System.IntPtr,Intel.RealSense.frame_callback,System.IntPtr,System.Object&)
extern void NativeMethods_rs2_start_m7B1834A401A7DE5946AA07D54D4C3A7ABC81EC54 (void);
// 0x00000077 System.Void Intel.RealSense.NativeMethods::rs2_start_queue(System.IntPtr,System.IntPtr,System.Object&)
extern void NativeMethods_rs2_start_queue_mB01C6ECB8D17BF10492230546C071A433CB0581B (void);
// 0x00000078 System.Void Intel.RealSense.NativeMethods::rs2_stop(System.IntPtr,System.Object&)
extern void NativeMethods_rs2_stop_m51E5F4A1384BAAF95A0B0CB45397399F0EBA6E60 (void);
// 0x00000079 System.Void Intel.RealSense.NativeMethods::rs2_set_notifications_callback(System.IntPtr,Intel.RealSense.frame_callback,System.IntPtr,System.Object&)
extern void NativeMethods_rs2_set_notifications_callback_m8172AC80D22F5A71D32A109D4C6CE32E60BC7AB8 (void);
// 0x0000007A System.IntPtr Intel.RealSense.NativeMethods::rs2_get_notification_description(System.IntPtr,System.Object&)
extern void NativeMethods_rs2_get_notification_description_m793C27DDB99EDBE1E00FCD7178437E8D60208D51 (void);
// 0x0000007B System.Double Intel.RealSense.NativeMethods::rs2_get_notification_timestamp(System.IntPtr,System.Object&)
extern void NativeMethods_rs2_get_notification_timestamp_m311DCCF07414B5E839B2D0E6CB6E42855012BE48 (void);
// 0x0000007C Intel.RealSense.LogSeverity Intel.RealSense.NativeMethods::rs2_get_notification_severity(System.IntPtr,System.Object&)
extern void NativeMethods_rs2_get_notification_severity_mBCC181DC8A2CF1CED9A805FAC5B7604150E2EA10 (void);
// 0x0000007D Intel.RealSense.NotificationCategory Intel.RealSense.NativeMethods::rs2_get_notification_category(System.IntPtr,System.Object&)
extern void NativeMethods_rs2_get_notification_category_m0F78E7DDCBA4CB8C3F642EC00BF793FAC78A631A (void);
// 0x0000007E System.IntPtr Intel.RealSense.NativeMethods::rs2_get_stream_profiles(System.IntPtr,System.Object&)
extern void NativeMethods_rs2_get_stream_profiles_m2402EF97700A3BAE91C553A172E7BD8CE6082333 (void);
// 0x0000007F System.IntPtr Intel.RealSense.NativeMethods::rs2_get_recommended_processing_blocks(System.IntPtr,System.Object&)
extern void NativeMethods_rs2_get_recommended_processing_blocks_mE0AD8AF27E53F42FDD4374DFC29DB3849C1B19A0 (void);
// 0x00000080 System.IntPtr Intel.RealSense.NativeMethods::rs2_get_processing_block(System.IntPtr,System.Object&)
extern void NativeMethods_rs2_get_processing_block_m2716B743818779D8B4D8682D00F1DC462614BC86 (void);
// 0x00000081 System.IntPtr Intel.RealSense.NativeMethods::rs2_get_stream_profile(System.IntPtr,System.Int32,System.Object&)
extern void NativeMethods_rs2_get_stream_profile_m4DA518C1DA11C9ADA20BAFDDE5665CC7A10E48E6 (void);
// 0x00000082 System.IntPtr Intel.RealSense.NativeMethods::rs2_get_processing_block(System.IntPtr,System.Int32,System.Object&)
extern void NativeMethods_rs2_get_processing_block_mF379063C0A2E4A3EB6EE53D12B3C6AE1782B23DD (void);
// 0x00000083 System.Void Intel.RealSense.NativeMethods::rs2_get_stream_profile_data(System.IntPtr,Intel.RealSense.Stream&,Intel.RealSense.Format&,System.Int32&,System.Int32&,System.Int32&,System.Object&)
extern void NativeMethods_rs2_get_stream_profile_data_mD311C82CB37E63E2D387A7EC172B9CFC9D0C6D9A (void);
// 0x00000084 System.Void Intel.RealSense.NativeMethods::rs2_set_stream_profile_data(System.IntPtr,Intel.RealSense.Stream,System.Int32,Intel.RealSense.Format,System.Object&)
extern void NativeMethods_rs2_set_stream_profile_data_mC8E2958ADDC0A521FA13EE753E5686FB69215C2A (void);
// 0x00000085 System.IntPtr Intel.RealSense.NativeMethods::rs2_clone_stream_profile(System.IntPtr,Intel.RealSense.Stream,System.Int32,Intel.RealSense.Format,System.Object&)
extern void NativeMethods_rs2_clone_stream_profile_m54D432B8838D55629583B0E9D2E7067A7AD62703 (void);
// 0x00000086 System.IntPtr Intel.RealSense.NativeMethods::rs2_clone_video_stream_profile(System.IntPtr,Intel.RealSense.Stream,System.Int32,Intel.RealSense.Format,System.Int32,System.Int32,Intel.RealSense.Intrinsics,System.Object&)
extern void NativeMethods_rs2_clone_video_stream_profile_mAA0C5A489C798320A92091983F20C2892B5BFE6B (void);
// 0x00000087 System.Void Intel.RealSense.NativeMethods::rs2_delete_stream_profile(System.IntPtr)
extern void NativeMethods_rs2_delete_stream_profile_mC9532ADD8CC75B8CC12EF98A36F257079B750451 (void);
// 0x00000088 System.Int32 Intel.RealSense.NativeMethods::rs2_stream_profile_is(System.IntPtr,Intel.RealSense.Extension,System.Object&)
extern void NativeMethods_rs2_stream_profile_is_mDFB86CA02112F3384BC3994F83961C798E246F02 (void);
// 0x00000089 System.Int32 Intel.RealSense.NativeMethods::rs2_is_processing_block_extendable_to(System.IntPtr,Intel.RealSense.Extension,System.Object&)
extern void NativeMethods_rs2_is_processing_block_extendable_to_m1FEB16685BCB91898AB8905B2E9EFD256F9FF70D (void);
// 0x0000008A System.Void Intel.RealSense.NativeMethods::rs2_get_video_stream_resolution(System.IntPtr,System.Int32&,System.Int32&,System.Object&)
extern void NativeMethods_rs2_get_video_stream_resolution_mCAB698A752E4314D5CD20FC3AD9515A4FFF9B9C7 (void);
// 0x0000008B System.Int32 Intel.RealSense.NativeMethods::rs2_is_stream_profile_default(System.IntPtr,System.Object&)
extern void NativeMethods_rs2_is_stream_profile_default_m642653D46C7C85E625479875EF6E16954F5689FB (void);
// 0x0000008C System.Int32 Intel.RealSense.NativeMethods::rs2_get_stream_profiles_count(System.IntPtr,System.Object&)
extern void NativeMethods_rs2_get_stream_profiles_count_mC91D1FA84CCBB9D9CB5022E209E1B7BAD2284F36 (void);
// 0x0000008D System.Void Intel.RealSense.NativeMethods::rs2_delete_stream_profiles_list(System.IntPtr)
extern void NativeMethods_rs2_delete_stream_profiles_list_mCF0F8D675AA54FD319F08DCAB5C20878B2221268 (void);
// 0x0000008E System.Int32 Intel.RealSense.NativeMethods::rs2_get_recommended_processing_blocks_count(System.IntPtr,System.Object&)
extern void NativeMethods_rs2_get_recommended_processing_blocks_count_mAE3C37B9E5BF884B7A2CF1DCCAA97AED109D0BD3 (void);
// 0x0000008F System.Void Intel.RealSense.NativeMethods::rs2_delete_recommended_processing_blocks(System.IntPtr)
extern void NativeMethods_rs2_delete_recommended_processing_blocks_m630BC2EDED0946A4DF832264B97FD81E733C75C3 (void);
// 0x00000090 System.Void Intel.RealSense.NativeMethods::rs2_get_extrinsics(System.IntPtr,System.IntPtr,Intel.RealSense.Extrinsics&,System.Object&)
extern void NativeMethods_rs2_get_extrinsics_mFEA87D371B58A65A20885A4FAEEC509C7DE4E00A (void);
// 0x00000091 System.Void Intel.RealSense.NativeMethods::rs2_register_extrinsics(System.IntPtr,System.IntPtr,Intel.RealSense.Extrinsics,System.Object&)
extern void NativeMethods_rs2_register_extrinsics_m2E679F5405E37152E5555FBB63572983E7F1C52E (void);
// 0x00000092 System.Void Intel.RealSense.NativeMethods::rs2_get_video_stream_intrinsics(System.IntPtr,Intel.RealSense.Intrinsics&,System.Object&)
extern void NativeMethods_rs2_get_video_stream_intrinsics_m8692D8C0A53B79ADE38D9B4C7DC696F5D04C1276 (void);
// 0x00000093 System.IntPtr Intel.RealSense.NativeMethods::rs2_export_localization_map(System.IntPtr,System.Object&)
extern void NativeMethods_rs2_export_localization_map_m23A4FB2722FED3D7532FD216FF512F45BC31CED1 (void);
// 0x00000094 System.Int32 Intel.RealSense.NativeMethods::rs2_import_localization_map(System.IntPtr,System.IntPtr,System.UInt32,System.Object&)
extern void NativeMethods_rs2_import_localization_map_mC5344F8226858FDBECAD68A0DAAD7C0A8A683DA5 (void);
// 0x00000095 System.Int32 Intel.RealSense.NativeMethods::rs2_set_static_node(System.IntPtr,System.String,Intel.RealSense.Math.Vector,Intel.RealSense.Math.Quaternion,System.Object&)
extern void NativeMethods_rs2_set_static_node_m97597AA8B0C665FB11B14B69C80E0BBF41AAB846 (void);
// 0x00000096 System.Int32 Intel.RealSense.NativeMethods::rs2_get_static_node(System.IntPtr,System.String,Intel.RealSense.Math.Vector&,Intel.RealSense.Math.Quaternion&,System.Object&)
extern void NativeMethods_rs2_get_static_node_m98947B0D47C378D439731557517F3141D106F25A (void);
// 0x00000097 System.Int32 Intel.RealSense.NativeMethods::rs2_remove_static_node(System.IntPtr,System.String,System.Object&)
extern void NativeMethods_rs2_remove_static_node_m2B917844C9336B1D660A7858AF2E2215E1FA1B6D (void);
// 0x00000098 System.Int32 Intel.RealSense.NativeMethods::rs2_load_wheel_odometry_config(System.IntPtr,System.IntPtr,System.UInt32,System.Object&)
extern void NativeMethods_rs2_load_wheel_odometry_config_m7665949E9BF93FA1CA36E8D1EEC8D8B547D91072 (void);
// 0x00000099 System.Int32 Intel.RealSense.NativeMethods::rs2_send_wheel_odometry(System.IntPtr,System.Byte,System.UInt32,Intel.RealSense.Math.Vector,System.Object&)
extern void NativeMethods_rs2_send_wheel_odometry_m5C5D301A2B13BD6E1683D2B0F34861221A5BE6F1 (void);
// 0x0000009A System.Void Intel.RealSense.NativeMethods::rs2_get_motion_intrinsics(System.IntPtr,Intel.RealSense.MotionDeviceIntrinsics&,System.Object&)
extern void NativeMethods_rs2_get_motion_intrinsics_m3427EF461D45DDE87C9FBD643B649CF12B487D11 (void);
// 0x0000009B System.Int32 Intel.RealSense.NativeMethods::rs2_get_device_count(System.IntPtr,System.Object&)
extern void NativeMethods_rs2_get_device_count_m8D919DBB8F5DC2B2706ECFD70D7120E55B569CED (void);
// 0x0000009C System.Void Intel.RealSense.NativeMethods::rs2_delete_device_list(System.IntPtr)
extern void NativeMethods_rs2_delete_device_list_m2143572F5A3A2BB9E8C98F2A2B8A1CCD7046AAA1 (void);
// 0x0000009D System.Int32 Intel.RealSense.NativeMethods::rs2_device_list_contains(System.IntPtr,System.IntPtr,System.Object&)
extern void NativeMethods_rs2_device_list_contains_mF1BC202C937B1FCBD437F847E7DD096AE72B82E0 (void);
// 0x0000009E System.IntPtr Intel.RealSense.NativeMethods::rs2_create_device(System.IntPtr,System.Int32,System.Object&)
extern void NativeMethods_rs2_create_device_m3BE9F2BA416AD879518842314C2969EAF14CC9D1 (void);
// 0x0000009F System.Void Intel.RealSense.NativeMethods::rs2_delete_device(System.IntPtr)
extern void NativeMethods_rs2_delete_device_m62432B9C465FF796C5E842883650DAA6E94D02CE (void);
// 0x000000A0 System.IntPtr Intel.RealSense.NativeMethods::rs2_get_device_info(System.IntPtr,Intel.RealSense.CameraInfo,System.Object&)
extern void NativeMethods_rs2_get_device_info_m7E756E9BCECC8AA1702777E503971AE94BEC3A6E (void);
// 0x000000A1 System.Int32 Intel.RealSense.NativeMethods::rs2_supports_device_info(System.IntPtr,Intel.RealSense.CameraInfo,System.Object&)
extern void NativeMethods_rs2_supports_device_info_m0F73DFDE4C702B1C486D1D8D5C41A567E6FF99A5 (void);
// 0x000000A2 System.Void Intel.RealSense.NativeMethods::rs2_hardware_reset(System.IntPtr,System.Object&)
extern void NativeMethods_rs2_hardware_reset_m0AC7B48F9B75F5596F1D3F671561C36F1BCC55DF (void);
// 0x000000A3 System.IntPtr Intel.RealSense.NativeMethods::rs2_send_and_receive_raw_data(System.IntPtr,System.IntPtr,System.UInt32,System.Object&)
extern void NativeMethods_rs2_send_and_receive_raw_data_m20EE6B04B9F9DD4E749C6678B8AE5EB045A0065C (void);
// 0x000000A4 System.Int32 Intel.RealSense.NativeMethods::rs2_is_device_extendable_to(System.IntPtr,Intel.RealSense.Extension,System.Object&)
extern void NativeMethods_rs2_is_device_extendable_to_m16D7E6F41F23DBE981359E499CDC46B489FC644F (void);
// 0x000000A5 System.IntPtr Intel.RealSense.NativeMethods::rs2_query_sensors(System.IntPtr,System.Object&)
extern void NativeMethods_rs2_query_sensors_m79502DDC076376CDA4CA5685EC49979125757C56 (void);
// 0x000000A6 System.Void Intel.RealSense.NativeMethods::rs2_enter_update_state(System.IntPtr,System.Object&)
extern void NativeMethods_rs2_enter_update_state_m0B9AF27594668F14358E7FEA93EBD9CB93AFABAB (void);
// 0x000000A7 System.Void Intel.RealSense.NativeMethods::rs2_update_firmware(System.IntPtr,System.IntPtr,System.Int32,Intel.RealSense.rs2_update_progress_callback,System.IntPtr,System.Object&)
extern void NativeMethods_rs2_update_firmware_mD077924F30E3DBA8B3ED2099CEC80FCF9E45BDD7 (void);
// 0x000000A8 System.IntPtr Intel.RealSense.NativeMethods::rs2_create_flash_backup(System.IntPtr,Intel.RealSense.rs2_update_progress_callback,System.IntPtr,System.Object&)
extern void NativeMethods_rs2_create_flash_backup_m3C31108CF230FC7553F59AF8BEEB7550F111AE91 (void);
// 0x000000A9 System.IntPtr Intel.RealSense.NativeMethods::rs2_create_context(System.Int32,System.Object&)
extern void NativeMethods_rs2_create_context_mD2EE9E5DABB49C518CD1877A85101D96E3689F9C (void);
// 0x000000AA System.Void Intel.RealSense.NativeMethods::rs2_delete_context(System.IntPtr)
extern void NativeMethods_rs2_delete_context_m77103A8457D10F06F2C0641D912289E1818FF2DB (void);
// 0x000000AB System.IntPtr Intel.RealSense.NativeMethods::rs2_context_add_device(System.IntPtr,System.String,System.Object&)
extern void NativeMethods_rs2_context_add_device_mFF7784C7F25422FD70B0EA769B5510D39C2C7BB3 (void);
// 0x000000AC System.Void Intel.RealSense.NativeMethods::rs2_context_remove_device(System.IntPtr,System.String,System.Object&)
extern void NativeMethods_rs2_context_remove_device_mD5293BBF9D200FC7BF589F83BEF40DF2FEEDD270 (void);
// 0x000000AD System.IntPtr Intel.RealSense.NativeMethods::rs2_query_devices(System.IntPtr,System.Object&)
extern void NativeMethods_rs2_query_devices_mB0C3DD78A88E57339B3671CC6D8546352ED1382C (void);
// 0x000000AE System.IntPtr Intel.RealSense.NativeMethods::rs2_query_devices_ex(System.IntPtr,System.Int32,System.Object&)
extern void NativeMethods_rs2_query_devices_ex_mD487261C20708C8728C81E2DF91B56BD02F91117 (void);
// 0x000000AF System.IntPtr Intel.RealSense.NativeMethods::rs2_create_device_hub(System.IntPtr,System.Object&)
extern void NativeMethods_rs2_create_device_hub_m43E63C5952292033E62163CAE70A36691EE7FAC5 (void);
// 0x000000B0 System.Void Intel.RealSense.NativeMethods::rs2_delete_device_hub(System.IntPtr)
extern void NativeMethods_rs2_delete_device_hub_m40773115D4C55570E1BB0BCD2D4ABA734A0A0318 (void);
// 0x000000B1 System.IntPtr Intel.RealSense.NativeMethods::rs2_device_hub_wait_for_device(System.IntPtr,System.IntPtr,System.Object&)
extern void NativeMethods_rs2_device_hub_wait_for_device_m0A1D361B22C48DF7770881C75F437C19991F4419 (void);
// 0x000000B2 System.Int32 Intel.RealSense.NativeMethods::rs2_device_hub_is_device_connected(System.IntPtr,System.IntPtr,System.Object&)
extern void NativeMethods_rs2_device_hub_is_device_connected_m2FF979BB781B26498065ED507A1ACB6C4D4491C6 (void);
// 0x000000B3 System.Void Intel.RealSense.NativeMethods::rs2_set_devices_changed_callback(System.IntPtr,Intel.RealSense.rs2_devices_changed_callback,System.IntPtr,System.Object&)
extern void NativeMethods_rs2_set_devices_changed_callback_m02A89FD24BD7D75CF3685528F2596444E848E341 (void);
// 0x000000B4 System.Void Intel.RealSense.NativeMethods::rs2_context_add_software_device(System.IntPtr,System.IntPtr,System.Object&)
extern void NativeMethods_rs2_context_add_software_device_m55A8B874DEF8BD167ED7032FFA71A5FC6C89CB0A (void);
// 0x000000B5 System.Int32 Intel.RealSense.NativeMethods::rs2_get_raw_data_size(System.IntPtr,System.Object&)
extern void NativeMethods_rs2_get_raw_data_size_m40D6C54F69DC14C2E0AAC25367E571EE316C9E97 (void);
// 0x000000B6 System.Void Intel.RealSense.NativeMethods::rs2_delete_raw_data(System.IntPtr)
extern void NativeMethods_rs2_delete_raw_data_m0EE83C5F491A2631CC96200A8E03C32DDC95680A (void);
// 0x000000B7 System.IntPtr Intel.RealSense.NativeMethods::rs2_get_raw_data(System.IntPtr,System.Object&)
extern void NativeMethods_rs2_get_raw_data_mEFC3A06458983FB44B8928576977067022B02F9A (void);
// 0x000000B8 System.Int32 Intel.RealSense.NativeMethods::rs2_get_api_version(System.Object&)
extern void NativeMethods_rs2_get_api_version_m23825F273DA138493678A23976132740D7593439 (void);
// 0x000000B9 System.Void Intel.RealSense.NativeMethods::rs2_log_to_console(Intel.RealSense.LogSeverity,System.Object&)
extern void NativeMethods_rs2_log_to_console_m6D76FB1BEF4A072FB9FFE4B9B07683C7B761A7B0 (void);
// 0x000000BA System.Void Intel.RealSense.NativeMethods::rs2_log_to_file(Intel.RealSense.LogSeverity,System.String,System.Object&)
extern void NativeMethods_rs2_log_to_file_m58FF4A347232F9BCCCC68760B6FA54B20C9B13CE (void);
// 0x000000BB System.Void Intel.RealSense.NativeMethods::rs2_log(Intel.RealSense.LogSeverity,System.String,System.Object&)
extern void NativeMethods_rs2_log_m207878ACCC8BD5873FFD5931D46DA76860506088 (void);
// 0x000000BC System.Single Intel.RealSense.NativeMethods::rs2_depth_frame_get_distance(System.IntPtr,System.Int32,System.Int32,System.Object&)
extern void NativeMethods_rs2_depth_frame_get_distance_m9C499F40232847F06F5F1CBF2E1BF81927883809 (void);
// 0x000000BD System.Single Intel.RealSense.NativeMethods::rs2_depth_frame_get_units(System.IntPtr,System.Object&)
extern void NativeMethods_rs2_depth_frame_get_units_m9674FF4B64BCEDA7E95AB0794BD38775681A6808 (void);
// 0x000000BE System.Single Intel.RealSense.NativeMethods::rs2_depth_stereo_frame_get_baseline(System.IntPtr,System.Object&)
extern void NativeMethods_rs2_depth_stereo_frame_get_baseline_m26D50A9C58AE4C1B242D778CE57955604B9D2605 (void);
// 0x000000BF System.Double Intel.RealSense.NativeMethods::rs2_get_time(System.Object&)
extern void NativeMethods_rs2_get_time_m797814329E03D08525C413AADCEE9BB57BACD9D9 (void);
// 0x000000C0 System.Void Intel.RealSense.NativeMethods::rs2_toggle_advanced_mode(System.IntPtr,System.Int32,System.Object&)
extern void NativeMethods_rs2_toggle_advanced_mode_mD7CF08B2C9E18E6F2BF02B13A3C155A68289662C (void);
// 0x000000C1 System.Void Intel.RealSense.NativeMethods::rs2_is_enabled(System.IntPtr,System.Int32&,System.Object&)
extern void NativeMethods_rs2_is_enabled_mBF1AD387F8C087ED0F03559AD7DD782C3E1612F4 (void);
// 0x000000C2 System.Void Intel.RealSense.NativeMethods::rs2_set_depth_control(System.IntPtr,System.IntPtr,System.Object&)
extern void NativeMethods_rs2_set_depth_control_mDB885C46C1A39E2794A1FC81B69804AEA2F1B21E (void);
// 0x000000C3 System.Void Intel.RealSense.NativeMethods::rs2_get_depth_control(System.IntPtr,System.IntPtr,System.Int32,System.Object&)
extern void NativeMethods_rs2_get_depth_control_m408078460BC86C452DD1D2535269C871FDB89EB1 (void);
// 0x000000C4 System.Void Intel.RealSense.NativeMethods::rs2_set_rsm(System.IntPtr,System.IntPtr,System.Object&)
extern void NativeMethods_rs2_set_rsm_mE5747D63B51C837159F370A367AE77E959FCBB86 (void);
// 0x000000C5 System.Void Intel.RealSense.NativeMethods::rs2_get_rsm(System.IntPtr,System.IntPtr,System.Int32,System.Object&)
extern void NativeMethods_rs2_get_rsm_m8F218BB7A2C83E5F94E4979D9780C31B93215F28 (void);
// 0x000000C6 System.Void Intel.RealSense.NativeMethods::rs2_set_rau_support_vector_control(System.IntPtr,System.IntPtr,System.Object&)
extern void NativeMethods_rs2_set_rau_support_vector_control_mA0FA2CE4D3F99D63BFE0563E77C94A5F39213CDD (void);
// 0x000000C7 System.Void Intel.RealSense.NativeMethods::rs2_get_rau_support_vector_control(System.IntPtr,System.IntPtr,System.Int32,System.Object&)
extern void NativeMethods_rs2_get_rau_support_vector_control_m0957E9B71F5DA2A95EAFAF1DA1CD3B5344B03DA5 (void);
// 0x000000C8 System.Void Intel.RealSense.NativeMethods::rs2_set_color_control(System.IntPtr,System.IntPtr,System.Object&)
extern void NativeMethods_rs2_set_color_control_m632D0DE40551595346818C838A88FC88EC0791C0 (void);
// 0x000000C9 System.Void Intel.RealSense.NativeMethods::rs2_get_color_control(System.IntPtr,System.IntPtr,System.Int32,System.Object&)
extern void NativeMethods_rs2_get_color_control_mD97A5DF4BE5CEF3C272534DD511CFDF611321675 (void);
// 0x000000CA System.Void Intel.RealSense.NativeMethods::rs2_set_rau_thresholds_control(System.IntPtr,System.IntPtr,System.Object&)
extern void NativeMethods_rs2_set_rau_thresholds_control_mB11CD0F226E47F24C0A2BE6800B4BF27B49C04A3 (void);
// 0x000000CB System.Void Intel.RealSense.NativeMethods::rs2_get_rau_thresholds_control(System.IntPtr,System.IntPtr,System.Int32,System.Object&)
extern void NativeMethods_rs2_get_rau_thresholds_control_m4010D9BD440264A05C942A4D314A385D1FF16A49 (void);
// 0x000000CC System.Void Intel.RealSense.NativeMethods::rs2_set_slo_color_thresholds_control(System.IntPtr,System.IntPtr,System.Object&)
extern void NativeMethods_rs2_set_slo_color_thresholds_control_m4FD1EEA30F567479F0591FFF0EE0D7AEF981A88D (void);
// 0x000000CD System.Void Intel.RealSense.NativeMethods::rs2_get_slo_color_thresholds_control(System.IntPtr,System.IntPtr,System.Int32,System.Object&)
extern void NativeMethods_rs2_get_slo_color_thresholds_control_m3F861AEED8C4B3A4932BDD8909A13316ED0A9215 (void);
// 0x000000CE System.Void Intel.RealSense.NativeMethods::rs2_set_slo_penalty_control(System.IntPtr,System.IntPtr,System.Object&)
extern void NativeMethods_rs2_set_slo_penalty_control_mE8CD8A053B2DE543ED07349EED7CCF7B89F4F5CE (void);
// 0x000000CF System.Void Intel.RealSense.NativeMethods::rs2_get_slo_penalty_control(System.IntPtr,System.IntPtr,System.Int32,System.Object&)
extern void NativeMethods_rs2_get_slo_penalty_control_m1B0E8D70FB3DE4901552B89E0E1963AC67041473 (void);
// 0x000000D0 System.Void Intel.RealSense.NativeMethods::rs2_set_hdad(System.IntPtr,System.IntPtr,System.Object&)
extern void NativeMethods_rs2_set_hdad_mAAF2F8579CEF918EAC52FFFEFD601178E9BF27BA (void);
// 0x000000D1 System.Void Intel.RealSense.NativeMethods::rs2_get_hdad(System.IntPtr,System.IntPtr,System.Int32,System.Object&)
extern void NativeMethods_rs2_get_hdad_mA73D413D57501E6A93C46D96F11AEE5ABC9697D1 (void);
// 0x000000D2 System.Void Intel.RealSense.NativeMethods::rs2_set_color_correction(System.IntPtr,System.IntPtr,System.Object&)
extern void NativeMethods_rs2_set_color_correction_m47B372E622621A654BCB6C921684C4E02C325E15 (void);
// 0x000000D3 System.Void Intel.RealSense.NativeMethods::rs2_get_color_correction(System.IntPtr,System.IntPtr,System.Int32,System.Object&)
extern void NativeMethods_rs2_get_color_correction_m665B38ED729773C696278C50ADF4CCBA34909063 (void);
// 0x000000D4 System.Void Intel.RealSense.NativeMethods::rs2_set_depth_table(System.IntPtr,System.IntPtr,System.Object&)
extern void NativeMethods_rs2_set_depth_table_m853F0D2E3D5A14089AF2AACC7446D9459B4601E8 (void);
// 0x000000D5 System.Void Intel.RealSense.NativeMethods::rs2_get_depth_table(System.IntPtr,System.IntPtr,System.Int32,System.Object&)
extern void NativeMethods_rs2_get_depth_table_m357DE451760530BD5C0B30813C8692E36DBC4778 (void);
// 0x000000D6 System.Void Intel.RealSense.NativeMethods::rs2_set_ae_control(System.IntPtr,System.IntPtr,System.Object&)
extern void NativeMethods_rs2_set_ae_control_m47E74D0C5B3841B027EEBDE8C1FDE095B0DD5095 (void);
// 0x000000D7 System.Void Intel.RealSense.NativeMethods::rs2_get_ae_control(System.IntPtr,System.IntPtr,System.Int32,System.Object&)
extern void NativeMethods_rs2_get_ae_control_mF3FE46838AEDEA494E56192773B81DDECF54F8B5 (void);
// 0x000000D8 System.Void Intel.RealSense.NativeMethods::rs2_set_census(System.IntPtr,System.IntPtr,System.Object&)
extern void NativeMethods_rs2_set_census_mF0E40B3A4D8A96AB134B8035315F425CABA1C9AC (void);
// 0x000000D9 System.Void Intel.RealSense.NativeMethods::rs2_get_census(System.IntPtr,System.IntPtr,System.Int32,System.Object&)
extern void NativeMethods_rs2_get_census_m2DAB6AF90DE2AE3473F1A24E1E1E898058EC9202 (void);
// 0x000000DA System.Void Intel.RealSense.NativeMethods::rs2_set_amp_factor(System.IntPtr,System.IntPtr,System.Object&)
extern void NativeMethods_rs2_set_amp_factor_m4D1ACB201DDEDC91E46A88C34111BADA319E6E4D (void);
// 0x000000DB System.Void Intel.RealSense.NativeMethods::rs2_get_amp_factor(System.IntPtr,System.IntPtr,System.Int32,System.Object&)
extern void NativeMethods_rs2_get_amp_factor_m4F84F7728A2F46804CFE64BB1CE0D04D3E8611CE (void);
// 0x000000DC System.Void Intel.RealSense.NativeMethods::rs2_load_json(System.IntPtr,System.String,System.UInt32,System.Object&)
extern void NativeMethods_rs2_load_json_m5E75C92EEF8858D3D87E5C7FEE15744DC4101AC8 (void);
// 0x000000DD System.IntPtr Intel.RealSense.NativeMethods::rs2_serialize_json(System.IntPtr,System.Object&)
extern void NativeMethods_rs2_serialize_json_mE6E053D5C639DBBE42570445BA48AD8A15C04A1F (void);
// 0x000000DE System.IntPtr Intel.RealSense.NativeMethods::rs2_create_recording_context(System.Int32,System.String,System.String,Intel.RealSense.RecordingMode,System.Object&)
extern void NativeMethods_rs2_create_recording_context_m2E612F79ECE012F44F29FBC54160A2DF1599F803 (void);
// 0x000000DF System.IntPtr Intel.RealSense.NativeMethods::rs2_create_mock_context(System.Int32,System.String,System.String,System.String,System.Object&)
extern void NativeMethods_rs2_create_mock_context_mA2790555D08BD6A5DB3C4E11B1C6BFA5B08C99D6 (void);
// 0x000000E0 System.IntPtr Intel.RealSense.NativeMethods::rs2_create_software_device(System.Object&)
extern void NativeMethods_rs2_create_software_device_m26C4DECEA354014D14CDC09D68DCB8A9628381B2 (void);
// 0x000000E1 System.IntPtr Intel.RealSense.NativeMethods::rs2_software_device_add_sensor(System.IntPtr,System.String,System.Object&)
extern void NativeMethods_rs2_software_device_add_sensor_mD06B4CA3F433F6B1BD6A7FFBE4E0FD8FC85B0251 (void);
// 0x000000E2 System.Void Intel.RealSense.NativeMethods::rs2_software_sensor_on_video_frame(System.IntPtr,Intel.RealSense.SoftwareVideoFrame,System.Object&)
extern void NativeMethods_rs2_software_sensor_on_video_frame_m397D2819B5B50BA5312AF35F539AD5F488AB079E (void);
// 0x000000E3 System.Void Intel.RealSense.NativeMethods::rs2_software_sensor_on_motion_frame(System.IntPtr,Intel.RealSense.SoftwareMotionFrame,System.Object&)
extern void NativeMethods_rs2_software_sensor_on_motion_frame_m9F71FAAD75134F9DC08C59AEE4DC0151AAD0BCFA (void);
// 0x000000E4 System.Void Intel.RealSense.NativeMethods::rs2_software_sensor_on_pose_frame(System.IntPtr,Intel.RealSense.SoftwarePoseFrame,System.Object&)
extern void NativeMethods_rs2_software_sensor_on_pose_frame_m669E80910F4510D42FB2DF0D12014B38A7053710 (void);
// 0x000000E5 System.Void Intel.RealSense.NativeMethods::rs2_software_sensor_set_metadata(System.IntPtr,System.Int64,Intel.RealSense.FrameMetadataValue,System.Object&)
extern void NativeMethods_rs2_software_sensor_set_metadata_m907934EC2305EFFE37EB2D21D1A77B3940A30AA0 (void);
// 0x000000E6 System.Void Intel.RealSense.NativeMethods::rs2_software_device_create_matcher(System.IntPtr,Intel.RealSense.Matchers,System.Object&)
extern void NativeMethods_rs2_software_device_create_matcher_mA294B8DF9E9ADDD92A01817425460F3D51F65AE9 (void);
// 0x000000E7 System.IntPtr Intel.RealSense.NativeMethods::rs2_software_sensor_add_video_stream(System.IntPtr,Intel.RealSense.SoftwareVideoStream,System.Object&)
extern void NativeMethods_rs2_software_sensor_add_video_stream_m47FCB7ACF452F33D8E40449486096D6F08C86C54 (void);
// 0x000000E8 System.IntPtr Intel.RealSense.NativeMethods::rs2_software_sensor_add_motion_stream(System.IntPtr,Intel.RealSense.SoftwareMotionStream,System.Object&)
extern void NativeMethods_rs2_software_sensor_add_motion_stream_mF9BFB9257CC7DBD89A14A8E0737A1565C0588D6B (void);
// 0x000000E9 System.IntPtr Intel.RealSense.NativeMethods::rs2_software_sensor_add_pose_stream(System.IntPtr,Intel.RealSense.SoftwarePoseStream,System.Object&)
extern void NativeMethods_rs2_software_sensor_add_pose_stream_mBEAD730970880061373854A59DFABDCD601DBD90 (void);
// 0x000000EA System.Void Intel.RealSense.NativeMethods::rs2_software_sensor_add_read_only_option(System.IntPtr,Intel.RealSense.Option,System.Single,System.Object&)
extern void NativeMethods_rs2_software_sensor_add_read_only_option_m06D9901203DD93EB152B616685C3D953E4128164 (void);
// 0x000000EB System.Void Intel.RealSense.NativeMethods::rs2_software_sensor_update_read_only_option(System.IntPtr,Intel.RealSense.Option,System.Single,System.Object&)
extern void NativeMethods_rs2_software_sensor_update_read_only_option_m872B8C47C78CDC07D491794BC7E6BE6B7EE415B2 (void);
// 0x000000EC System.IntPtr Intel.RealSense.NativeMethods::rs2_create_fw_log_message(System.IntPtr,System.Object&)
extern void NativeMethods_rs2_create_fw_log_message_m6DEE8AC1E0CB6A7B24AB4301A0A9AB3CE0954F1D (void);
// 0x000000ED System.Void Intel.RealSense.NativeMethods::rs2_delete_fw_log_message(System.IntPtr)
extern void NativeMethods_rs2_delete_fw_log_message_m935D7C13346F3696B103F3F14B93D3A026BBA5DF (void);
// 0x000000EE System.Int32 Intel.RealSense.NativeMethods::rs2_get_fw_log(System.IntPtr,System.IntPtr,System.Object&)
extern void NativeMethods_rs2_get_fw_log_m3D83F98CC2932997F68E02D5A4DCDF4A3C7C4F0B (void);
// 0x000000EF System.Int32 Intel.RealSense.NativeMethods::rs2_get_flash_log(System.IntPtr,System.IntPtr,System.Object&)
extern void NativeMethods_rs2_get_flash_log_m91BCE8A1CF99F27125A881EBD28A2731BB64BDAA (void);
// 0x000000F0 System.IntPtr Intel.RealSense.NativeMethods::rs2_fw_log_message_data(System.IntPtr,System.Object&)
extern void NativeMethods_rs2_fw_log_message_data_m0EE8F33D3759633FFD7A2180F7ED92CA026E690D (void);
// 0x000000F1 System.Int32 Intel.RealSense.NativeMethods::rs2_fw_log_message_size(System.IntPtr,System.Object&)
extern void NativeMethods_rs2_fw_log_message_size_mD358B81FC17E152F012B13CD54586C7930EC47B5 (void);
// 0x000000F2 System.UInt32 Intel.RealSense.NativeMethods::rs2_fw_log_message_timestamp(System.IntPtr,System.Object&)
extern void NativeMethods_rs2_fw_log_message_timestamp_mE4D2D067EB677A91C8987B02EEDB4D66355DECAA (void);
// 0x000000F3 System.Int32 Intel.RealSense.NativeMethods::rs2_fw_log_message_severity(System.IntPtr,System.Object&)
extern void NativeMethods_rs2_fw_log_message_severity_m98B10EF7C65829B8DE62FCC0CE1CC13EF455AF25 (void);
// 0x000000F4 System.Int32 Intel.RealSense.NativeMethods::rs2_init_fw_log_parser(System.IntPtr,System.String,System.Object&)
extern void NativeMethods_rs2_init_fw_log_parser_mB60873425F1E9963ECB022D94C2E8A9468E5B44D (void);
// 0x000000F5 System.IntPtr Intel.RealSense.NativeMethods::rs2_create_fw_log_parsed_message(System.IntPtr,System.Object&)
extern void NativeMethods_rs2_create_fw_log_parsed_message_mE71D4CE326466F951502E697CB85701B81B2E25F (void);
// 0x000000F6 System.Void Intel.RealSense.NativeMethods::rs2_delete_fw_log_parsed_message(System.IntPtr)
extern void NativeMethods_rs2_delete_fw_log_parsed_message_m68B6208C32300E64A2E7ABFB3E81AB8A7579C98C (void);
// 0x000000F7 System.Int32 Intel.RealSense.NativeMethods::rs2_parse_firmware_log(System.IntPtr,System.IntPtr,System.IntPtr,System.Object&)
extern void NativeMethods_rs2_parse_firmware_log_m4B4D191806003C5806D3A8EF686744C975358A8A (void);
// 0x000000F8 System.IntPtr Intel.RealSense.NativeMethods::rs2_get_fw_log_parsed_message(System.IntPtr,System.Object&)
extern void NativeMethods_rs2_get_fw_log_parsed_message_mD47C43036D64DFF33E639464B066968F7336E038 (void);
// 0x000000F9 System.IntPtr Intel.RealSense.NativeMethods::rs2_get_fw_log_parsed_file_name(System.IntPtr,System.Object&)
extern void NativeMethods_rs2_get_fw_log_parsed_file_name_mCE07C577994CD7A78E5E6EE8BA3382604E5D87AC (void);
// 0x000000FA System.IntPtr Intel.RealSense.NativeMethods::rs2_get_fw_log_parsed_thread_name(System.IntPtr,System.Object&)
extern void NativeMethods_rs2_get_fw_log_parsed_thread_name_mBB84EAEDC7B0BB985AE1F47BE49DEBD861A3C571 (void);
// 0x000000FB System.Int32 Intel.RealSense.NativeMethods::rs2_get_fw_log_parsed_severity(System.IntPtr,System.Object&)
extern void NativeMethods_rs2_get_fw_log_parsed_severity_m525763D47DE7AF391743862F08AB33E95F41EA37 (void);
// 0x000000FC System.UInt32 Intel.RealSense.NativeMethods::rs2_get_fw_log_parsed_line(System.IntPtr,System.Object&)
extern void NativeMethods_rs2_get_fw_log_parsed_line_mA57FA455712563009197F2956003811675A752A5 (void);
// 0x000000FD System.UInt32 Intel.RealSense.NativeMethods::rs2_get_fw_log_parsed_timestamp(System.IntPtr,System.Object&)
extern void NativeMethods_rs2_get_fw_log_parsed_timestamp_mB6741545985C8337AAA8084352BC55BC97625E32 (void);
// 0x000000FE System.IntPtr Intel.RealSense.NativeMethods::rs2_create_terminal_parser(System.String,System.Object&)
extern void NativeMethods_rs2_create_terminal_parser_mA1C2554F8C9DAF02232140F74205B1EA11E7021F (void);
// 0x000000FF System.Void Intel.RealSense.NativeMethods::rs2_delete_terminal_parser(System.IntPtr)
extern void NativeMethods_rs2_delete_terminal_parser_mF63F362E3737AA7EDA39ABE715FA499A2F8575AB (void);
// 0x00000100 System.IntPtr Intel.RealSense.NativeMethods::rs2_terminal_parse_command(System.IntPtr,System.String,System.UInt32,System.Object&)
extern void NativeMethods_rs2_terminal_parse_command_mDF086891874175060D4A20B3B4006B22258A9D16 (void);
// 0x00000101 System.IntPtr Intel.RealSense.NativeMethods::rs2_terminal_parse_response(System.IntPtr,System.String,System.UInt32,System.IntPtr,System.UInt32,System.Object&)
extern void NativeMethods_rs2_terminal_parse_response_m8FE89F1A726577BBD0829AD71CD115130579E72B (void);
// 0x00000102 System.IntPtr Intel.RealSense.NativeMethods::rs2_create_pipeline(System.IntPtr,System.Object&)
extern void NativeMethods_rs2_create_pipeline_mF2806114F47ED03DD1EDBA90FCC8294C650EBB88 (void);
// 0x00000103 System.Void Intel.RealSense.NativeMethods::rs2_pipeline_stop(System.IntPtr,System.Object&)
extern void NativeMethods_rs2_pipeline_stop_m7C6A0A596B09218038EF9552D7A950BA34B03146 (void);
// 0x00000104 System.IntPtr Intel.RealSense.NativeMethods::rs2_pipeline_wait_for_frames(System.IntPtr,System.UInt32,System.Object&)
extern void NativeMethods_rs2_pipeline_wait_for_frames_m479EE9DB5D82E1E401CA8B92BA8823DCC92687A3 (void);
// 0x00000105 System.Int32 Intel.RealSense.NativeMethods::rs2_pipeline_try_wait_for_frames(System.IntPtr,System.IntPtr&,System.UInt32,System.Object&)
extern void NativeMethods_rs2_pipeline_try_wait_for_frames_m13B1A612B0DC628CEC64D3A7F581F5CEDF350FBF (void);
// 0x00000106 System.Int32 Intel.RealSense.NativeMethods::rs2_pipeline_poll_for_frames(System.IntPtr,System.IntPtr&,System.Object&)
extern void NativeMethods_rs2_pipeline_poll_for_frames_m7B2BB23781ADE9E8DB7462F2B79FAFC287C96883 (void);
// 0x00000107 System.Void Intel.RealSense.NativeMethods::rs2_delete_pipeline(System.IntPtr)
extern void NativeMethods_rs2_delete_pipeline_m64051B6E7868E9F91AE7C2D39AF272A2B9D1539B (void);
// 0x00000108 System.IntPtr Intel.RealSense.NativeMethods::rs2_pipeline_start(System.IntPtr,System.Object&)
extern void NativeMethods_rs2_pipeline_start_m636269914EDAF346893B0C111F75973BCEA82BB9 (void);
// 0x00000109 System.IntPtr Intel.RealSense.NativeMethods::rs2_pipeline_start_with_config(System.IntPtr,System.IntPtr,System.Object&)
extern void NativeMethods_rs2_pipeline_start_with_config_mE5858CAB85F57FAD45206D5EE5A16101BDC7B485 (void);
// 0x0000010A System.IntPtr Intel.RealSense.NativeMethods::rs2_pipeline_start_with_callback(System.IntPtr,Intel.RealSense.frame_callback,System.IntPtr,System.Object&)
extern void NativeMethods_rs2_pipeline_start_with_callback_m2602A37F82AF05BF6A7390A7AB2F58902508F635 (void);
// 0x0000010B System.IntPtr Intel.RealSense.NativeMethods::rs2_pipeline_start_with_config_and_callback(System.IntPtr,System.IntPtr,Intel.RealSense.frame_callback,System.IntPtr,System.Object&)
extern void NativeMethods_rs2_pipeline_start_with_config_and_callback_m8046015888FC881CDFFD37B297731EF5AC0C0E5A (void);
// 0x0000010C System.IntPtr Intel.RealSense.NativeMethods::rs2_pipeline_get_active_profile(System.IntPtr,System.Object&)
extern void NativeMethods_rs2_pipeline_get_active_profile_mC5A6455A1AD2F179211E0B9681D3F55ED56C5129 (void);
// 0x0000010D System.IntPtr Intel.RealSense.NativeMethods::rs2_pipeline_profile_get_device(System.IntPtr,System.Object&)
extern void NativeMethods_rs2_pipeline_profile_get_device_mF9B82F4197F3D55505164A105D79BAE0CD933844 (void);
// 0x0000010E System.IntPtr Intel.RealSense.NativeMethods::rs2_pipeline_profile_get_streams(System.IntPtr,System.Object&)
extern void NativeMethods_rs2_pipeline_profile_get_streams_m0DF34266BF9AA82040003389EC6F552737345825 (void);
// 0x0000010F System.Void Intel.RealSense.NativeMethods::rs2_delete_pipeline_profile(System.IntPtr)
extern void NativeMethods_rs2_delete_pipeline_profile_mA14322EB7A0F80FFAB8639C0C92061CB46A0053E (void);
// 0x00000110 System.IntPtr Intel.RealSense.NativeMethods::rs2_create_config(System.Object&)
extern void NativeMethods_rs2_create_config_m44915B9206A60865AB3803E0BE2F956FF552149D (void);
// 0x00000111 System.Void Intel.RealSense.NativeMethods::rs2_delete_config(System.IntPtr)
extern void NativeMethods_rs2_delete_config_mE6A9DE561EB67872ADDEBA3FC1C9A2944353A569 (void);
// 0x00000112 System.Void Intel.RealSense.NativeMethods::rs2_config_enable_stream(System.IntPtr,Intel.RealSense.Stream,System.Int32,System.Int32,System.Int32,Intel.RealSense.Format,System.Int32,System.Object&)
extern void NativeMethods_rs2_config_enable_stream_mBAB32104F00D2CE0B2D54050497C7DAB8EC72884 (void);
// 0x00000113 System.Void Intel.RealSense.NativeMethods::rs2_config_enable_all_stream(System.IntPtr,System.Object&)
extern void NativeMethods_rs2_config_enable_all_stream_m49698428783088B26390666B0B5B71F5AC969886 (void);
// 0x00000114 System.Void Intel.RealSense.NativeMethods::rs2_config_enable_device(System.IntPtr,System.String,System.Object&)
extern void NativeMethods_rs2_config_enable_device_mC1C4D5944CBC9948638F6AF8BB8F222D4DD9DD86 (void);
// 0x00000115 System.Void Intel.RealSense.NativeMethods::rs2_config_enable_device_from_file(System.IntPtr,System.String,System.Object&)
extern void NativeMethods_rs2_config_enable_device_from_file_m3186F3CD4DEA512D51FF591538B21DA00530DEBC (void);
// 0x00000116 System.Void Intel.RealSense.NativeMethods::rs2_config_enable_device_from_file_repeat_option(System.IntPtr,System.String,System.Int32,System.Object&)
extern void NativeMethods_rs2_config_enable_device_from_file_repeat_option_mA777D2EC76E31CAA0281BBFABA11A4A548D58DDC (void);
// 0x00000117 System.Void Intel.RealSense.NativeMethods::rs2_config_enable_record_to_file(System.IntPtr,System.String,System.Object&)
extern void NativeMethods_rs2_config_enable_record_to_file_m936C41AD14DABC20F4CDE3D0AD9195BC2C7DCBCD (void);
// 0x00000118 System.Void Intel.RealSense.NativeMethods::rs2_config_disable_stream(System.IntPtr,System.Int32,System.Object&)
extern void NativeMethods_rs2_config_disable_stream_m571CEC7EA1BFFFE24AF10F839D4ED3B6782034F9 (void);
// 0x00000119 System.Void Intel.RealSense.NativeMethods::rs2_config_disable_indexed_stream(System.IntPtr,Intel.RealSense.Stream,System.Int32,System.Object&)
extern void NativeMethods_rs2_config_disable_indexed_stream_mAFA8D3B66E0A39C1F5636EABBE91F8050E9C4DDC (void);
// 0x0000011A System.Void Intel.RealSense.NativeMethods::rs2_config_disable_all_streams(System.IntPtr,System.Object&)
extern void NativeMethods_rs2_config_disable_all_streams_mA23FCF3B3E208817E59BE1FA0CA7A7A8BF1486A6 (void);
// 0x0000011B System.IntPtr Intel.RealSense.NativeMethods::rs2_config_resolve(System.IntPtr,System.IntPtr,System.Object&)
extern void NativeMethods_rs2_config_resolve_m304E6D496B116319A31855426ACBC9835281019B (void);
// 0x0000011C System.Int32 Intel.RealSense.NativeMethods::rs2_config_can_resolve(System.IntPtr,System.IntPtr,System.Object&)
extern void NativeMethods_rs2_config_can_resolve_mBF4333A19BD39894C8837955ED369820C6C68364 (void);
// 0x0000011D System.IntPtr Intel.RealSense.NativeMethods::rs2_get_failed_function(System.IntPtr)
extern void NativeMethods_rs2_get_failed_function_m7637A8C9AC876DBDFA9A1C55FE26307D5C9FCD66 (void);
// 0x0000011E System.IntPtr Intel.RealSense.NativeMethods::rs2_get_failed_args(System.IntPtr)
extern void NativeMethods_rs2_get_failed_args_m91ED540B42928D129E8AC29CEC405C0E6068B455 (void);
// 0x0000011F System.IntPtr Intel.RealSense.NativeMethods::rs2_get_error_message(System.IntPtr)
extern void NativeMethods_rs2_get_error_message_mF07E34024F831DD7966123A39939F8904066AD38 (void);
// 0x00000120 Intel.RealSense.ExceptionType Intel.RealSense.NativeMethods::rs2_get_librealsense_exception_type(System.IntPtr)
extern void NativeMethods_rs2_get_librealsense_exception_type_m841D77B9BFEE37C501EEE7FE3B79B4FC66F8EBE5 (void);
// 0x00000121 System.IntPtr Intel.RealSense.NativeMethods::rs2_free_error(System.IntPtr)
extern void NativeMethods_rs2_free_error_m8B5945B06BE5BB88CF57BC22E42F1566EA236750 (void);
// 0x00000122 System.Void Intel.RealSense.NativeMethods::.cctor()
extern void NativeMethods__cctor_m3ECBB465983E69BA2F229DCD01B27FB40DEE4BE3 (void);
// 0x00000123 System.Void Intel.RealSense.NativeMethods/MemCpyDelegate::.ctor(System.Object,System.IntPtr)
extern void MemCpyDelegate__ctor_m72E5B98D688D4F60DB97295A0D41E46B8786035D (void);
// 0x00000124 System.IntPtr Intel.RealSense.NativeMethods/MemCpyDelegate::Invoke(System.IntPtr,System.IntPtr,System.Int32)
extern void MemCpyDelegate_Invoke_m7B2CDF37BDEA32366C0A789E9EF76534B60DF87F (void);
// 0x00000125 System.IAsyncResult Intel.RealSense.NativeMethods/MemCpyDelegate::BeginInvoke(System.IntPtr,System.IntPtr,System.Int32,System.AsyncCallback,System.Object)
extern void MemCpyDelegate_BeginInvoke_m955807FE13A566543A9688B6FE13094261B5630A (void);
// 0x00000126 System.IntPtr Intel.RealSense.NativeMethods/MemCpyDelegate::EndInvoke(System.IAsyncResult)
extern void MemCpyDelegate_EndInvoke_m00EA97BC603AB0E39997DE9E451A6E321D05E531 (void);
// 0x00000127 Intel.RealSense.NativeMethods/MemCpyDelegate Intel.RealSense.NativeMethods/MemCpy::GetMethod()
extern void MemCpy_GetMethod_mD08E086413BC7276B213BF0D71BBB7D4221F337E (void);
// 0x00000128 System.Void Intel.RealSense.AdvancedDevice::.ctor(System.IntPtr)
extern void AdvancedDevice__ctor_mF37FA8C11660A0276F9565AD5AF4EDE056A9F1C4 (void);
// 0x00000129 Intel.RealSense.AdvancedDevice Intel.RealSense.AdvancedDevice::FromDevice(Intel.RealSense.Device)
extern void AdvancedDevice_FromDevice_m55A9177AF53EEE8071364A5B54812329F9B52452 (void);
// 0x0000012A System.Boolean Intel.RealSense.AdvancedDevice::get_AdvancedModeEnabled()
extern void AdvancedDevice_get_AdvancedModeEnabled_mB15FEBF5C21A34D7429CEDC4770E5033C8A2CC79 (void);
// 0x0000012B System.Void Intel.RealSense.AdvancedDevice::set_AdvancedModeEnabled(System.Boolean)
extern void AdvancedDevice_set_AdvancedModeEnabled_m34DD75F9EF36044A9588E8F3FAB89AA214B9068C (void);
// 0x0000012C System.String Intel.RealSense.AdvancedDevice::get_JsonConfiguration()
extern void AdvancedDevice_get_JsonConfiguration_mC6CD4F6D5D129FA391BD3451B3DDD77472CA7854 (void);
// 0x0000012D System.Void Intel.RealSense.AdvancedDevice::set_JsonConfiguration(System.String)
extern void AdvancedDevice_set_JsonConfiguration_mE4236F8DC3A62432A66CABEA6FB8DFA76F094D04 (void);
// 0x0000012E System.Void Intel.RealSense.DebugDevice::.ctor(System.IntPtr)
extern void DebugDevice__ctor_m9F3CA7331781BBD21B049E76977166488FAAD0BA (void);
// 0x0000012F Intel.RealSense.DebugDevice Intel.RealSense.DebugDevice::FromDevice(Intel.RealSense.Device)
extern void DebugDevice_FromDevice_m953D0B7D620DC4E42E82E4532876CB6D0C93A580 (void);
// 0x00000130 System.Byte[] Intel.RealSense.DebugDevice::SendReceiveRawData(System.Byte[])
extern void DebugDevice_SendReceiveRawData_m7F5248F0558B047D4C7305DDFC83D6C20A273C11 (void);
// 0x00000131 System.Void Intel.RealSense.Device::Initialize()
extern void Device_Initialize_m704F4BCD2AD2AEC35B91C182A87F956E1E82BABA (void);
// 0x00000132 System.Void Intel.RealSense.Device::Dispose(System.Boolean)
extern void Device_Dispose_m1F2E2915BA2976223C17BEBE85581FBF05066385 (void);
// 0x00000133 System.Void Intel.RealSense.Device::.ctor(System.IntPtr)
extern void Device__ctor_mB5BAC531CB1CE29FE2AE38215AD1BAF576283BD5 (void);
// 0x00000134 System.Void Intel.RealSense.Device::.ctor(System.IntPtr,Intel.RealSense.Base.Deleter)
extern void Device__ctor_mE601B51A6FF0EE87C5B9B8C1D2E53F29907C580D (void);
// 0x00000135 T Intel.RealSense.Device::Create(System.IntPtr)
// 0x00000136 T Intel.RealSense.Device::Create(System.IntPtr,Intel.RealSense.Base.Deleter)
// 0x00000137 Intel.RealSense.InfoCollection Intel.RealSense.Device::get_Info()
extern void Device_get_Info_m00D6466D210FCEA32987F7C9F59A7F90066B62D9 (void);
// 0x00000138 System.Void Intel.RealSense.Device::set_Info(Intel.RealSense.InfoCollection)
extern void Device_set_Info_mF28C86F1AE42A089D1F83090787694A8866A24F3 (void);
// 0x00000139 System.Collections.ObjectModel.ReadOnlyCollection`1<Intel.RealSense.Sensor> Intel.RealSense.Device::QuerySensors()
extern void Device_QuerySensors_m76B93648BB6BE863CA89AF77BFB85BC8D7B2EF91 (void);
// 0x0000013A System.Collections.ObjectModel.ReadOnlyCollection`1<Intel.RealSense.Sensor> Intel.RealSense.Device::get_Sensors()
extern void Device_get_Sensors_mDF41564EB34A4A45BDDE051C28D49F7FB84B3A43 (void);
// 0x0000013B System.Void Intel.RealSense.Device::HardwareReset()
extern void Device_HardwareReset_m2D98E50B155BB1202398E37BAEB23326CF41DF85 (void);
// 0x0000013C System.Boolean Intel.RealSense.Device::Is(Intel.RealSense.Extension)
extern void Device_Is_m2DD5B9A2CCC9A8728C724E1A63A88F1847433C10 (void);
// 0x0000013D T Intel.RealSense.Device::As()
// 0x0000013E System.Void Intel.RealSense.Device::.cctor()
extern void Device__cctor_mCB4DD3BAB6A3CBB7F73C4E2E98D09534F3F280A5 (void);
// 0x0000013F System.Void Intel.RealSense.DeviceList::.ctor(System.IntPtr)
extern void DeviceList__ctor_m0D6146D7E15CB2257F425421EC227ED2E38BD4F6 (void);
// 0x00000140 System.Collections.Generic.IEnumerator`1<Intel.RealSense.Device> Intel.RealSense.DeviceList::GetEnumerator()
extern void DeviceList_GetEnumerator_mF1C600676BDAAA61B53769E6B8536871BCA21177 (void);
// 0x00000141 System.Collections.IEnumerator Intel.RealSense.DeviceList::System.Collections.IEnumerable.GetEnumerator()
extern void DeviceList_System_Collections_IEnumerable_GetEnumerator_m5A0A51513426E9CEEADB9123D4105467D2D5420E (void);
// 0x00000142 System.Int32 Intel.RealSense.DeviceList::get_Count()
extern void DeviceList_get_Count_mD786F97BCFD463EE030CBD87C169FBE1F6FA674D (void);
// 0x00000143 Intel.RealSense.Device Intel.RealSense.DeviceList::get_Item(System.Int32)
extern void DeviceList_get_Item_m1A258A977AF6286515CD8BBBC2A842EE7BD2ECC1 (void);
// 0x00000144 System.Boolean Intel.RealSense.DeviceList::Contains(Intel.RealSense.Device)
extern void DeviceList_Contains_mC38BF50157E6379197530E190A1B4D6B70BEE8FB (void);
// 0x00000145 System.Void Intel.RealSense.DeviceList::.cctor()
extern void DeviceList__cctor_m66951CBA1F0553001981CADFD873231FE527DF29 (void);
// 0x00000146 Intel.RealSense.Device[] Intel.RealSense.DeviceList/DeviceListDebugView::get_Items()
extern void DeviceListDebugView_get_Items_mBDE77180F67F2CA525EA704C5A8613E1FB74DFE1 (void);
// 0x00000147 System.Void Intel.RealSense.DeviceList/DeviceListDebugView::.ctor(Intel.RealSense.DeviceList)
extern void DeviceListDebugView__ctor_m01883A69B3CFD68114F9582C18A60798E0BFA1C7 (void);
// 0x00000148 System.Void Intel.RealSense.DeviceList/<GetEnumerator>d__3::.ctor(System.Int32)
extern void U3CGetEnumeratorU3Ed__3__ctor_m16FF6E0BC9C85E243F3CF238D8DA07F1F4AB7792 (void);
// 0x00000149 System.Void Intel.RealSense.DeviceList/<GetEnumerator>d__3::System.IDisposable.Dispose()
extern void U3CGetEnumeratorU3Ed__3_System_IDisposable_Dispose_m516ED126705C021E7F5E953D77F6AAD109A07E7A (void);
// 0x0000014A System.Boolean Intel.RealSense.DeviceList/<GetEnumerator>d__3::MoveNext()
extern void U3CGetEnumeratorU3Ed__3_MoveNext_m727931AFCBACE906FFE76955C0CC85A79487E10D (void);
// 0x0000014B Intel.RealSense.Device Intel.RealSense.DeviceList/<GetEnumerator>d__3::System.Collections.Generic.IEnumerator<Intel.RealSense.Device>.get_Current()
extern void U3CGetEnumeratorU3Ed__3_System_Collections_Generic_IEnumeratorU3CIntel_RealSense_DeviceU3E_get_Current_m7C8DFB85BCBEF9F30B94C88E1978F7E6FF894F88 (void);
// 0x0000014C System.Void Intel.RealSense.DeviceList/<GetEnumerator>d__3::System.Collections.IEnumerator.Reset()
extern void U3CGetEnumeratorU3Ed__3_System_Collections_IEnumerator_Reset_m017CE480F6AE8AC7462375EE233D560CBDAA0F00 (void);
// 0x0000014D System.Object Intel.RealSense.DeviceList/<GetEnumerator>d__3::System.Collections.IEnumerator.get_Current()
extern void U3CGetEnumeratorU3Ed__3_System_Collections_IEnumerator_get_Current_m8D861BFA7CF51375CFBF4505FDB635F7B4DFB52D (void);
// 0x0000014E System.Void Intel.RealSense.PlaybackDevice::.ctor(System.IntPtr)
extern void PlaybackDevice__ctor_m263397325CCEB8901707E3766A9000429EF3E227 (void);
// 0x0000014F Intel.RealSense.PlaybackDevice Intel.RealSense.PlaybackDevice::FromDevice(Intel.RealSense.Device)
extern void PlaybackDevice_FromDevice_mBBC90F3810D86AE645392771CC005816ED56D5AA (void);
// 0x00000150 System.String Intel.RealSense.PlaybackDevice::get_FileName()
extern void PlaybackDevice_get_FileName_mFB0063573BE832327A693D437EB656A323F9DAE2 (void);
// 0x00000151 System.Void Intel.RealSense.PlaybackDevice::set_FileName(System.String)
extern void PlaybackDevice_set_FileName_mD8E562F9DC4BE1721784D44AFED8065240B673B8 (void);
// 0x00000152 System.Void Intel.RealSense.PlaybackDevice::Pause()
extern void PlaybackDevice_Pause_m17654D56D8C5B9D44356EC23DF0443D5A9960439 (void);
// 0x00000153 System.Void Intel.RealSense.PlaybackDevice::Resume()
extern void PlaybackDevice_Resume_mC7174472C0EDCBCE5A88AEE2D453A759FC21A5EF (void);
// 0x00000154 System.Void Intel.RealSense.PlaybackDevice::Stop()
extern void PlaybackDevice_Stop_mA2CC6F1A3574FBBB2BEF14909FC130D43FCB91F2 (void);
// 0x00000155 Intel.RealSense.PlaybackStatus Intel.RealSense.PlaybackDevice::get_Status()
extern void PlaybackDevice_get_Status_m42D53B1A05AB31E9F6F1A207C702A02F0E9EBB43 (void);
// 0x00000156 System.UInt64 Intel.RealSense.PlaybackDevice::get_Duration()
extern void PlaybackDevice_get_Duration_m6B3B9CF306238D81B123BC98D618788367838D3D (void);
// 0x00000157 System.UInt64 Intel.RealSense.PlaybackDevice::get_Position()
extern void PlaybackDevice_get_Position_m0C05C94ECA246086C3155E864F667BC8FA7A25A4 (void);
// 0x00000158 System.Void Intel.RealSense.PlaybackDevice::set_Position(System.UInt64)
extern void PlaybackDevice_set_Position_m8651C9A703FC6A36CE6A560A6FC07EC74380F3E5 (void);
// 0x00000159 System.Void Intel.RealSense.PlaybackDevice::Seek(System.Int64)
extern void PlaybackDevice_Seek_m5FF2B50FEB656D4172F153773BF889687B8C7440 (void);
// 0x0000015A System.Boolean Intel.RealSense.PlaybackDevice::get_Realtime()
extern void PlaybackDevice_get_Realtime_mF3D71F1FB89022207D4EE1E424DD202DE67C82E8 (void);
// 0x0000015B System.Void Intel.RealSense.PlaybackDevice::set_Realtime(System.Boolean)
extern void PlaybackDevice_set_Realtime_m633F6C9C15556718E6BD9439022ED09E73898657 (void);
// 0x0000015C System.Void Intel.RealSense.PlaybackDevice::SetSpeed(System.Single)
extern void PlaybackDevice_SetSpeed_mC6CCA3DD48CD06FAF3CAA91DB6D0199DA6C932FF (void);
// 0x0000015D System.Void Intel.RealSense.RecordDevice::.ctor(System.IntPtr)
extern void RecordDevice__ctor_mC215956B8F1AEEA6F80BA1DB961E6690E3508004 (void);
// 0x0000015E System.IntPtr Intel.RealSense.RecordDevice::Create(Intel.RealSense.Device,System.String)
extern void RecordDevice_Create_m7989DF6FA2A7503AADDB19DF82F2E71262FC2A02 (void);
// 0x0000015F System.Void Intel.RealSense.RecordDevice::.ctor(Intel.RealSense.Device,System.String)
extern void RecordDevice__ctor_m792AD82750D2BD51AECBD0F23C90B9F2B9F7E78C (void);
// 0x00000160 Intel.RealSense.RecordDevice Intel.RealSense.RecordDevice::FromDevice(Intel.RealSense.Device)
extern void RecordDevice_FromDevice_m2FB49BEB0F51C45FD97741D5E349AEC425D27C7E (void);
// 0x00000161 System.Void Intel.RealSense.RecordDevice::Pause()
extern void RecordDevice_Pause_mF50FD389564E5F9A1057509BEF63019514AA9537 (void);
// 0x00000162 System.Void Intel.RealSense.RecordDevice::Resume()
extern void RecordDevice_Resume_m2361AF0DDCBE49958ECE4350ED6B01C948CF8B28 (void);
// 0x00000163 System.String Intel.RealSense.RecordDevice::get_FileName()
extern void RecordDevice_get_FileName_mC9D78696835F27CACFE12C65FD1E1E46E6FA315F (void);
// 0x00000164 System.IntPtr Intel.RealSense.SoftwareDevice::CreateSoftwareDevice()
extern void SoftwareDevice_CreateSoftwareDevice_m4BBEB8C23580C33FF9A444C40EA9F4591C58EBFD (void);
// 0x00000165 System.Void Intel.RealSense.SoftwareDevice::.ctor()
extern void SoftwareDevice__ctor_mF6AD88E490BC26DA60BB414482C6406C180F4DAE (void);
// 0x00000166 Intel.RealSense.SoftwareSensor Intel.RealSense.SoftwareDevice::AddSensor(System.String)
extern void SoftwareDevice_AddSensor_m6EC45E73C338A442F289B8156EED0A3713C9E15D (void);
// 0x00000167 System.Void Intel.RealSense.SoftwareDevice::AddTo(Intel.RealSense.Context)
extern void SoftwareDevice_AddTo_m98A529AA76EE772A013BBBA2EA053CEC53834A60 (void);
// 0x00000168 System.Void Intel.RealSense.SoftwareDevice::SetMatcher(Intel.RealSense.Matchers)
extern void SoftwareDevice_SetMatcher_m81D92CDED174CB5A99374045014BA360C2D2CBCB (void);
// 0x00000169 System.IntPtr Intel.RealSense.SoftwareDevice::AddSoftwareSensor(System.String)
extern void SoftwareDevice_AddSoftwareSensor_m918A443A8F39856507D0A62F71D3DF94A0A2E265 (void);
// 0x0000016A System.Void Intel.RealSense.UpdatableDevice::.ctor(System.IntPtr)
extern void UpdatableDevice__ctor_m0CA135160BE26408D0A03AD568649B61D8AD799E (void);
// 0x0000016B Intel.RealSense.UpdatableDevice Intel.RealSense.UpdatableDevice::FromDevice(Intel.RealSense.Device)
extern void UpdatableDevice_FromDevice_mEE85EC0F3BA5871A8DA84DFFFD78B90EF522E3CD (void);
// 0x0000016C System.Void Intel.RealSense.UpdatableDevice::EnterUpdateState()
extern void UpdatableDevice_EnterUpdateState_m329ECC2FAC1636512DA67E5947316299DC35DD85 (void);
// 0x0000016D System.Byte[] Intel.RealSense.UpdatableDevice::CreateFlashBackup()
extern void UpdatableDevice_CreateFlashBackup_mDBF8F4BFEA15EFC96D7C9287086F3B5C440E8C25 (void);
// 0x0000016E System.Void Intel.RealSense.UpdatableDevice::add_OnFlashBackupProgress(Intel.RealSense.UpdatableDevice/OnFlashBackupProgressDelegate)
extern void UpdatableDevice_add_OnFlashBackupProgress_mAE098253DA984BC99474F6F0369E82F42CCA5D6A (void);
// 0x0000016F System.Void Intel.RealSense.UpdatableDevice::remove_OnFlashBackupProgress(Intel.RealSense.UpdatableDevice/OnFlashBackupProgressDelegate)
extern void UpdatableDevice_remove_OnFlashBackupProgress_m89679A302055B3C7CD699256B4870C5CD9C1E131 (void);
// 0x00000170 System.Void Intel.RealSense.UpdatableDevice::OnFlashBackupProgressInternal(System.Single,System.IntPtr)
extern void UpdatableDevice_OnFlashBackupProgressInternal_m3D801930A7F2F71A263AA7E138C7364AF50D2973 (void);
// 0x00000171 System.Void Intel.RealSense.UpdatableDevice/OnFlashBackupProgressDelegate::.ctor(System.Object,System.IntPtr)
extern void OnFlashBackupProgressDelegate__ctor_mCC3BBB368BC92DF5BEC56FAC96571F950D2ED770 (void);
// 0x00000172 System.Void Intel.RealSense.UpdatableDevice/OnFlashBackupProgressDelegate::Invoke(System.Single)
extern void OnFlashBackupProgressDelegate_Invoke_mFEE7A556649A27E3F628C3245C953DF08359180D (void);
// 0x00000173 System.IAsyncResult Intel.RealSense.UpdatableDevice/OnFlashBackupProgressDelegate::BeginInvoke(System.Single,System.AsyncCallback,System.Object)
extern void OnFlashBackupProgressDelegate_BeginInvoke_m209435A12EF2D22E847F13362B3C266500D641FD (void);
// 0x00000174 System.Void Intel.RealSense.UpdatableDevice/OnFlashBackupProgressDelegate::EndInvoke(System.IAsyncResult)
extern void OnFlashBackupProgressDelegate_EndInvoke_mA9A994BCA4308CA4397F797556AE29249A3BBBD4 (void);
// 0x00000175 System.Void Intel.RealSense.UpdateDevice::.ctor(System.IntPtr)
extern void UpdateDevice__ctor_mD2BA25A9C661465FCC81FF8E01C79ADD0CB71D8E (void);
// 0x00000176 Intel.RealSense.UpdateDevice Intel.RealSense.UpdateDevice::FromDevice(Intel.RealSense.Device)
extern void UpdateDevice_FromDevice_mE5B142DE28F323DA045C920479278758F83B81AB (void);
// 0x00000177 System.Void Intel.RealSense.UpdateDevice::Update(System.Byte[])
extern void UpdateDevice_Update_mDDCF88702305D1076435498EE77E2922C30C07BC (void);
// 0x00000178 System.Void Intel.RealSense.UpdateDevice::add_OnUpdateProgress(Intel.RealSense.UpdateDevice/OnUpdateProgressDelegate)
extern void UpdateDevice_add_OnUpdateProgress_m6699218939DE9DDB1D274A67D752787268F5E345 (void);
// 0x00000179 System.Void Intel.RealSense.UpdateDevice::remove_OnUpdateProgress(Intel.RealSense.UpdateDevice/OnUpdateProgressDelegate)
extern void UpdateDevice_remove_OnUpdateProgress_m99B439BB5D3058B790EA09A879B98A9189975C81 (void);
// 0x0000017A System.Void Intel.RealSense.UpdateDevice::OnUpdateProgressInternal(System.Single,System.IntPtr)
extern void UpdateDevice_OnUpdateProgressInternal_mFEA507B42632EEB2425B56A989F8BCC850B6DA44 (void);
// 0x0000017B System.Void Intel.RealSense.UpdateDevice/OnUpdateProgressDelegate::.ctor(System.Object,System.IntPtr)
extern void OnUpdateProgressDelegate__ctor_m2C894C7018BAD9B77D8C449049089E3BF455BE1F (void);
// 0x0000017C System.Void Intel.RealSense.UpdateDevice/OnUpdateProgressDelegate::Invoke(System.Single)
extern void OnUpdateProgressDelegate_Invoke_m0E06A4D392B0DF46567CA6DE74AC5FA49328C68D (void);
// 0x0000017D System.IAsyncResult Intel.RealSense.UpdateDevice/OnUpdateProgressDelegate::BeginInvoke(System.Single,System.AsyncCallback,System.Object)
extern void OnUpdateProgressDelegate_BeginInvoke_m90471DFCB69EA0B490AB3EB26FC8F4237DCD0BDA (void);
// 0x0000017E System.Void Intel.RealSense.UpdateDevice/OnUpdateProgressDelegate::EndInvoke(System.IAsyncResult)
extern void OnUpdateProgressDelegate_EndInvoke_mFD46959FE5D23EF555E271FB058A7A1DF88E0344 (void);
// 0x0000017F System.Void Intel.RealSense.FirmwareLogsDevice::.ctor(System.IntPtr)
extern void FirmwareLogsDevice__ctor_m7A54F879EB7320D7C147D4CC6C1156AE51F08BEE (void);
// 0x00000180 Intel.RealSense.FirmwareLogsDevice Intel.RealSense.FirmwareLogsDevice::FromDevice(Intel.RealSense.Device)
extern void FirmwareLogsDevice_FromDevice_m7967CDF26888A98364F6E99BA78C0F02FA66AD0B (void);
// 0x00000181 Intel.RealSense.FwLog Intel.RealSense.FirmwareLogsDevice::CreateFwLog()
extern void FirmwareLogsDevice_CreateFwLog_m323B1DE5EF0E5F02627390F79D679AB69AE38579 (void);
// 0x00000182 Intel.RealSense.FwParsedLog Intel.RealSense.FirmwareLogsDevice::CreateFwParsedLog()
extern void FirmwareLogsDevice_CreateFwParsedLog_m406E6B439ED6B7D28D5D651538F65748C520195D (void);
// 0x00000183 System.Boolean Intel.RealSense.FirmwareLogsDevice::GetFwLog(Intel.RealSense.FwLog&)
extern void FirmwareLogsDevice_GetFwLog_mF6828678377154C339D922E5EF0D7E08BFDC7E61 (void);
// 0x00000184 System.Boolean Intel.RealSense.FirmwareLogsDevice::GetFlashLog(Intel.RealSense.FwLog&)
extern void FirmwareLogsDevice_GetFlashLog_m4925C6B7BC15396AD1BB9EA9AE68BB60013B13FD (void);
// 0x00000185 System.Boolean Intel.RealSense.FirmwareLogsDevice::InitParser(System.String)
extern void FirmwareLogsDevice_InitParser_m3F0CE921E505EFFE8EEB7FF40838286A43ADC7AB (void);
// 0x00000186 System.Boolean Intel.RealSense.FirmwareLogsDevice::ParseFwLog(Intel.RealSense.FwLog,Intel.RealSense.FwParsedLog&)
extern void FirmwareLogsDevice_ParseFwLog_mA9009331D28C9D2CDA41A170EB2EECF25D31AEDC (void);
// 0x00000187 System.Void Intel.RealSense.DepthFrame::.ctor(System.IntPtr)
extern void DepthFrame__ctor_m7D7EDF8F28152998F95E2A24FBDB54F2B9154543 (void);
// 0x00000188 System.Single Intel.RealSense.DepthFrame::GetDistance(System.Int32,System.Int32)
extern void DepthFrame_GetDistance_m825158CE01CC20EB56B68C8998F2519CAA4D1988 (void);
// 0x00000189 System.Single Intel.RealSense.DepthFrame::GetUnits()
extern void DepthFrame_GetUnits_m1124CD209CCD6641ED639D2EB68960D0E2776B80 (void);
// 0x0000018A System.Void Intel.RealSense.Frame::Initialize()
extern void Frame_Initialize_m9E603330A0254F20639F995C11AFA2BA9A2E51F2 (void);
// 0x0000018B System.Void Intel.RealSense.Frame::.ctor(System.IntPtr)
extern void Frame__ctor_m7EC7D543E371F11B9F3210B3DB7B34646EEDDE4C (void);
// 0x0000018C Intel.RealSense.Frame Intel.RealSense.Frame::Create(System.IntPtr)
extern void Frame_Create_m8ABEC0E4B40D217A25B9EF5E365613A482364F38 (void);
// 0x0000018D T Intel.RealSense.Frame::Create(System.IntPtr)
// 0x0000018E T Intel.RealSense.Frame::Create(Intel.RealSense.Frame)
// 0x0000018F System.Boolean Intel.RealSense.Frame::Is(Intel.RealSense.Extension)
extern void Frame_Is_mA9198A531E7208F6252C5518D087B3A84A6791B5 (void);
// 0x00000190 T Intel.RealSense.Frame::As()
// 0x00000191 T Intel.RealSense.Frame::Cast()
// 0x00000192 Intel.RealSense.Frame Intel.RealSense.Frame::Clone()
extern void Frame_Clone_mF83058E72A3E9821744A3036BB8381FAC9C4E314 (void);
// 0x00000193 System.Void Intel.RealSense.Frame::Keep()
extern void Frame_Keep_m1FD46C819F406B19F92A57A2A43DB452CA152767 (void);
// 0x00000194 System.Boolean Intel.RealSense.Frame::get_IsComposite()
extern void Frame_get_IsComposite_m648C8E9938F4DB3573D36DAA99804E79677F656E (void);
// 0x00000195 System.Int32 Intel.RealSense.Frame::get_DataSize()
extern void Frame_get_DataSize_mAA1E18F42CD4C814DA51BE35895617AD46E70A7B (void);
// 0x00000196 System.IntPtr Intel.RealSense.Frame::get_Data()
extern void Frame_get_Data_m389421824EE87DA80C90E7FB114E661CD517C31B (void);
// 0x00000197 T Intel.RealSense.Frame::GetProfile()
// 0x00000198 Intel.RealSense.StreamProfile Intel.RealSense.Frame::get_Profile()
extern void Frame_get_Profile_m8F043F19E1A21F9B7CF8F4F7320AD490AEFFA07A (void);
// 0x00000199 System.UInt64 Intel.RealSense.Frame::get_Number()
extern void Frame_get_Number_mD1FD25DE73D0A80143DA0DD821721270114AC239 (void);
// 0x0000019A System.Double Intel.RealSense.Frame::get_Timestamp()
extern void Frame_get_Timestamp_mAF87441277560E5072750CF5811082D5580D2995 (void);
// 0x0000019B Intel.RealSense.Sensor Intel.RealSense.Frame::get_Sensor()
extern void Frame_get_Sensor_m63C61D6D61BF41ACE2B17ED5B5924E3E2BC63B43 (void);
// 0x0000019C Intel.RealSense.TimestampDomain Intel.RealSense.Frame::get_TimestampDomain()
extern void Frame_get_TimestampDomain_mB8BF2A9AB6AF441DB536E6D65AE46684F5CE54BF (void);
// 0x0000019D System.Int64 Intel.RealSense.Frame::get_Item(Intel.RealSense.FrameMetadataValue)
extern void Frame_get_Item_m56BF9AF44D8D68FA776B60EF7B6BBACC3D1F0E9E (void);
// 0x0000019E System.Int64 Intel.RealSense.Frame::GetFrameMetadata(Intel.RealSense.FrameMetadataValue)
extern void Frame_GetFrameMetadata_mB0DD97BB4CEF19B5E14235C763427524916E400B (void);
// 0x0000019F System.Boolean Intel.RealSense.Frame::SupportsFrameMetaData(Intel.RealSense.FrameMetadataValue)
extern void Frame_SupportsFrameMetaData_m43EBC3D2929E609E2462F542CCC4FC7E272D6D35 (void);
// 0x000001A0 System.Void Intel.RealSense.Frame::.cctor()
extern void Frame__cctor_mC44E8022F5742295A84831929EFFD4E332DD25D4 (void);
// 0x000001A1 System.Void Intel.RealSense.FrameQueue::.ctor(System.Int32)
extern void FrameQueue__ctor_m477645F5D4625D6724530C9B38E444FC1973DFC6 (void);
// 0x000001A2 System.Int32 Intel.RealSense.FrameQueue::get_Capacity()
extern void FrameQueue_get_Capacity_mFFFEDB439282B1CD98CBB10BD131736C7B4AD143 (void);
// 0x000001A3 System.Void Intel.RealSense.FrameQueue::set_Capacity(System.Int32)
extern void FrameQueue_set_Capacity_m398AF4F857410EDABD1AD08A48580494C7DB90B8 (void);
// 0x000001A4 System.Boolean Intel.RealSense.FrameQueue::PollForFrame(T&)
// 0x000001A5 Intel.RealSense.Frame Intel.RealSense.FrameQueue::WaitForFrame(System.UInt32)
extern void FrameQueue_WaitForFrame_mC2C5406889EFFB8568BFB15A3BBFEE374E6338A3 (void);
// 0x000001A6 T Intel.RealSense.FrameQueue::WaitForFrame(System.UInt32)
// 0x000001A7 System.Boolean Intel.RealSense.FrameQueue::TryWaitForFrame(T&,System.UInt32)
// 0x000001A8 Intel.RealSense.FrameSet Intel.RealSense.FrameQueue::WaitForFrames(System.UInt32)
extern void FrameQueue_WaitForFrames_mA78800DDFBDAF5DB64639C21F5E4AC01A711914A (void);
// 0x000001A9 System.Void Intel.RealSense.FrameQueue::Enqueue(Intel.RealSense.Frame)
extern void FrameQueue_Enqueue_mF4EC82B1FD7C8CD68092809093D1ED92455BB969 (void);
// 0x000001AA System.IntPtr Intel.RealSense.FrameQueue::Create(System.Int32)
extern void FrameQueue_Create_m74973CDD97AC810DCF2F15F41C4A739270616BB4 (void);
// 0x000001AB Intel.RealSense.FrameSet Intel.RealSense.FrameSet::FromFrame(Intel.RealSense.Frame)
extern void FrameSet_FromFrame_mF24628801201C5B5556018F0BBF356E97ACE532E (void);
// 0x000001AC Intel.RealSense.FrameSet Intel.RealSense.FrameSet::FromFrame(Intel.RealSense.Frame,Intel.RealSense.FramesReleaser)
extern void FrameSet_FromFrame_mC1619EDCDF2E4F12DA047CE6419B3F3AB86CADEC (void);
// 0x000001AD System.Void Intel.RealSense.FrameSet::Initialize()
extern void FrameSet_Initialize_m0861739B7347DE375FBF5432C4428E0CD75E155B (void);
// 0x000001AE System.Void Intel.RealSense.FrameSet::.ctor(System.IntPtr)
extern void FrameSet__ctor_mEFB45B62B1E09E1E7FE8C4CA2FBC7A9D928B6E42 (void);
// 0x000001AF System.Boolean Intel.RealSense.FrameSet::get_IsComposite()
extern void FrameSet_get_IsComposite_m1B2003D595D88401F51A2A78289AB827F9680229 (void);
// 0x000001B0 Intel.RealSense.Frame Intel.RealSense.FrameSet::AsFrame()
extern void FrameSet_AsFrame_m5CB3564BB0AA874F5ABF5A5C7ECC559881CFFDAA (void);
// 0x000001B1 System.Void Intel.RealSense.FrameSet::ForEach(System.Action`1<Intel.RealSense.Frame>)
extern void FrameSet_ForEach_mE35096BFCD425ADFA806DE4BD888C59C25551FEB (void);
// 0x000001B2 T Intel.RealSense.FrameSet::FirstOrDefault(Intel.RealSense.Stream,Intel.RealSense.Format)
// 0x000001B3 Intel.RealSense.Frame Intel.RealSense.FrameSet::FirstOrDefault(Intel.RealSense.Stream,Intel.RealSense.Format)
extern void FrameSet_FirstOrDefault_m05098D277897D852E3957E431373CB10ABC82542 (void);
// 0x000001B4 T Intel.RealSense.FrameSet::FirstOrDefault(System.Predicate`1<T>)
// 0x000001B5 T Intel.RealSense.FrameSet::First(Intel.RealSense.Stream,Intel.RealSense.Format)
// 0x000001B6 Intel.RealSense.Frame Intel.RealSense.FrameSet::First(Intel.RealSense.Stream,Intel.RealSense.Format)
extern void FrameSet_First_mA554E6FE80EAFB3FD9464B06269C6DC12D5B1EDA (void);
// 0x000001B7 Intel.RealSense.DepthFrame Intel.RealSense.FrameSet::get_DepthFrame()
extern void FrameSet_get_DepthFrame_m12E45B244B4CB2D57ABE2201D21F17F833FAD377 (void);
// 0x000001B8 Intel.RealSense.VideoFrame Intel.RealSense.FrameSet::get_ColorFrame()
extern void FrameSet_get_ColorFrame_m01326230E137DCDDD8D22BA27756290A5661903D (void);
// 0x000001B9 Intel.RealSense.VideoFrame Intel.RealSense.FrameSet::get_InfraredFrame()
extern void FrameSet_get_InfraredFrame_mB55523FF3B3D51A0A0B980AA5F829AE887DBA63D (void);
// 0x000001BA Intel.RealSense.VideoFrame Intel.RealSense.FrameSet::get_FishEyeFrame()
extern void FrameSet_get_FishEyeFrame_m62E2BED022E97281F44644A8D01D5B8416D87BC0 (void);
// 0x000001BB Intel.RealSense.PoseFrame Intel.RealSense.FrameSet::get_PoseFrame()
extern void FrameSet_get_PoseFrame_m41AF437B8B1DCB5906929434FA8913EFA9D574EB (void);
// 0x000001BC System.Collections.Generic.IEnumerator`1<Intel.RealSense.Frame> Intel.RealSense.FrameSet::GetEnumerator()
extern void FrameSet_GetEnumerator_mFAA8F1E47A721FB5DFA558F03EDD07C5E8134982 (void);
// 0x000001BD System.Collections.IEnumerator Intel.RealSense.FrameSet::System.Collections.IEnumerable.GetEnumerator()
extern void FrameSet_System_Collections_IEnumerable_GetEnumerator_m1924C92F96C3CADB51FCFFCAE0E9A04AC86984C9 (void);
// 0x000001BE System.Int32 Intel.RealSense.FrameSet::get_Count()
extern void FrameSet_get_Count_mC01C9A4D4FFEB2F08BAA41DC7E03D09EB11DAF1D (void);
// 0x000001BF Intel.RealSense.Frame Intel.RealSense.FrameSet::get_Item(System.Int32)
extern void FrameSet_get_Item_mB4B5CFB225EB97A71D1ADCE2D7EA48DA75D38223 (void);
// 0x000001C0 Intel.RealSense.Frame Intel.RealSense.FrameSet::get_Item(Intel.RealSense.Stream,System.Int32)
extern void FrameSet_get_Item_m3DBF27AF34A951104B36499557D8588B119D67F9 (void);
// 0x000001C1 Intel.RealSense.Frame Intel.RealSense.FrameSet::get_Item(Intel.RealSense.Stream,Intel.RealSense.Format,System.Int32)
extern void FrameSet_get_Item_mF65495A453CF768F234582D0BFE81E286198BE79 (void);
// 0x000001C2 Intel.RealSense.FrameSet Intel.RealSense.FrameSet::Create(System.IntPtr)
extern void FrameSet_Create_m6237605DA167029B54366EFB6E62A52F6C2E5D38 (void);
// 0x000001C3 System.Void Intel.RealSense.FrameSet::Dispose(System.Boolean)
extern void FrameSet_Dispose_mDC694706686B799F6828B565514A47830C597954 (void);
// 0x000001C4 System.Void Intel.RealSense.FrameSet::AddDisposable(System.IDisposable)
extern void FrameSet_AddDisposable_mC3E10585D9D436801150A5B2FFF4465DD073682B (void);
// 0x000001C5 System.Void Intel.RealSense.FrameSet/Enumerator::.ctor(Intel.RealSense.FrameSet)
extern void Enumerator__ctor_m23AB5DC802E77937A14F266BBC048E7963E2CCDC (void);
// 0x000001C6 Intel.RealSense.Frame Intel.RealSense.FrameSet/Enumerator::get_Current()
extern void Enumerator_get_Current_m818F5B94FF36A570824FD32F3F98D604DFFCEAF2 (void);
// 0x000001C7 System.Object Intel.RealSense.FrameSet/Enumerator::System.Collections.IEnumerator.get_Current()
extern void Enumerator_System_Collections_IEnumerator_get_Current_m0480922637C3AC23AA88886A6A0C85253DD50D8A (void);
// 0x000001C8 System.Void Intel.RealSense.FrameSet/Enumerator::Dispose()
extern void Enumerator_Dispose_m2BF15DCBA7149637F7C0F696FD445E1F9DF7DED0 (void);
// 0x000001C9 System.Boolean Intel.RealSense.FrameSet/Enumerator::MoveNext()
extern void Enumerator_MoveNext_m3BE07BB85C18FF6F221927261DA42EB1005FA306 (void);
// 0x000001CA System.Void Intel.RealSense.FrameSet/Enumerator::Reset()
extern void Enumerator_Reset_m47A51CDD4D243303CD3E2FB2841EF1C99D5564E4 (void);
// 0x000001CB System.Void Intel.RealSense.FrameSet/<>c__DisplayClass33_0::.ctor()
extern void U3CU3Ec__DisplayClass33_0__ctor_mDFC43F5E9FCF4867AEB955D0A3F793E86904C08B (void);
// 0x000001CC System.Boolean Intel.RealSense.FrameSet/<>c__DisplayClass33_0::<get_Item>b__0(Intel.RealSense.Frame)
extern void U3CU3Ec__DisplayClass33_0_U3Cget_ItemU3Eb__0_m5C4CF67B4ABA104B84C82BF38D2B53929B7736A0 (void);
// 0x000001CD System.Void Intel.RealSense.FrameSet/<>c__DisplayClass35_0::.ctor()
extern void U3CU3Ec__DisplayClass35_0__ctor_m83CE77B7AB69A84BC3913407D97BAF8E2E0322AC (void);
// 0x000001CE System.Boolean Intel.RealSense.FrameSet/<>c__DisplayClass35_0::<get_Item>b__0(Intel.RealSense.Frame)
extern void U3CU3Ec__DisplayClass35_0_U3Cget_ItemU3Eb__0_m444D9C2E3C673436C91C5F093A20A87A424456F3 (void);
// 0x000001CF System.Void Intel.RealSense.FrameSet/<>c::.cctor()
extern void U3CU3Ec__cctor_m779147C2D24F31EFB9EA39A27D39D084532F265F (void);
// 0x000001D0 System.Void Intel.RealSense.FrameSet/<>c::.ctor()
extern void U3CU3Ec__ctor_m1C77F8414FDB1E5D498D2EF80E7C2AC362BFC8C5 (void);
// 0x000001D1 System.Void Intel.RealSense.FrameSet/<>c::<Dispose>b__37_0(System.IDisposable)
extern void U3CU3Ec_U3CDisposeU3Eb__37_0_m56E6336C0281AEDF95A3470265815260121708D4 (void);
// 0x000001D2 Intel.RealSense.FrameSet Intel.RealSense.FrameSetExtensions::AsFrameSet(Intel.RealSense.Frame)
extern void FrameSetExtensions_AsFrameSet_mA31949FD159058BE404EFB1A8A4CA8AABDB6505F (void);
// 0x000001D3 T Intel.RealSense.FramesReleaser::ScopedReturn(Intel.RealSense.FramesReleaser,T)
// 0x000001D4 System.Void Intel.RealSense.FramesReleaser::AddDisposable(System.IDisposable)
extern void FramesReleaser_AddDisposable_mFA2A5CE23F6DF78AD64D0B54AE56521D4EBA528F (void);
// 0x000001D5 System.Void Intel.RealSense.FramesReleaser::Dispose(System.Boolean)
extern void FramesReleaser_Dispose_m5B3C4C9189B507B26DC44D302EB4FE051DA17AEF (void);
// 0x000001D6 System.Void Intel.RealSense.FramesReleaser::Finalize()
extern void FramesReleaser_Finalize_mBBEC3F8E1A7967183C6C2DF807A94FBA5022D4D7 (void);
// 0x000001D7 System.Void Intel.RealSense.FramesReleaser::Dispose()
extern void FramesReleaser_Dispose_m24C733FB11C1B588283B4DC1F1F1CAFFE585BAC1 (void);
// 0x000001D8 System.Void Intel.RealSense.FramesReleaser::.ctor()
extern void FramesReleaser__ctor_m06792F439AC8E28255405A9AE9E0F4222FC551DB (void);
// 0x000001D9 System.Void Intel.RealSense.FramesReleaser/<>c::.cctor()
extern void U3CU3Ec__cctor_m2FE385F9F84352B3993B466D057A5C95D834B76F (void);
// 0x000001DA System.Void Intel.RealSense.FramesReleaser/<>c::.ctor()
extern void U3CU3Ec__ctor_mF2A3E9980568AFFACAC2B6FF12CEC3EF01852F55 (void);
// 0x000001DB System.Void Intel.RealSense.FramesReleaser/<>c::<Dispose>b__4_0(System.IDisposable)
extern void U3CU3Ec_U3CDisposeU3Eb__4_0_m32C74F3133FA935EAC07F41AC169DED0A2DFB456 (void);
// 0x000001DC System.Void Intel.RealSense.Points::.ctor(System.IntPtr)
extern void Points__ctor_mF4A0450532CE6B985DA6B21A9159F1B53FAF065C (void);
// 0x000001DD System.Void Intel.RealSense.Points::Initialize()
extern void Points_Initialize_m07303241AF2253D943DFCF5D477A4B3D3AD595BE (void);
// 0x000001DE System.Int32 Intel.RealSense.Points::get_Count()
extern void Points_get_Count_m7550BD795EABB0B1BDABD721E7B64DC21C2E813D (void);
// 0x000001DF System.Void Intel.RealSense.Points::set_Count(System.Int32)
extern void Points_set_Count_m1A4C788DE39B6AF8435271D270C7BAF3932C1D16 (void);
// 0x000001E0 System.IntPtr Intel.RealSense.Points::get_VertexData()
extern void Points_get_VertexData_m4AD8749BEF06C7F6279259D48D9F86F7AF31BC91 (void);
// 0x000001E1 System.Void Intel.RealSense.Points::Copy(System.IntPtr,System.IntPtr,System.Int32)
// 0x000001E2 System.Void Intel.RealSense.Points::CopyVertices(T[])
// 0x000001E3 System.IntPtr Intel.RealSense.Points::get_TextureData()
extern void Points_get_TextureData_mA75F755AC9A888252CF4FD726503D5047F9A3B67 (void);
// 0x000001E4 System.Void Intel.RealSense.Points::CopyTextureCoords(T[])
// 0x000001E5 System.Void Intel.RealSense.Points::ExportToPLY(System.String,Intel.RealSense.Frame)
extern void Points_ExportToPLY_mCC582ED93437E1CB1508BC3703EB08ED6F2DA281 (void);
// 0x000001E6 System.Void Intel.RealSense.VideoFrame::.ctor(System.IntPtr)
extern void VideoFrame__ctor_m10909C88DC824D7BF97407AC731203C491E400FF (void);
// 0x000001E7 System.Int32 Intel.RealSense.VideoFrame::get_Width()
extern void VideoFrame_get_Width_m01912E71FEE2712DA83872C49C33009D30064268 (void);
// 0x000001E8 System.Int32 Intel.RealSense.VideoFrame::get_Height()
extern void VideoFrame_get_Height_mA5E7858FD1B8C5A131C644774576A268C3B354F8 (void);
// 0x000001E9 System.Int32 Intel.RealSense.VideoFrame::get_Stride()
extern void VideoFrame_get_Stride_m99437F231B6912F126497A2170A91B77058DFBA8 (void);
// 0x000001EA System.Int32 Intel.RealSense.VideoFrame::get_BitsPerPixel()
extern void VideoFrame_get_BitsPerPixel_m9A0A9B21F092D46504FA2752942486AD6EE2DFCE (void);
// 0x000001EB System.Void Intel.RealSense.VideoFrame::CopyTo(T[])
// 0x000001EC System.Void Intel.RealSense.VideoFrame::CopyTo(System.IntPtr)
extern void VideoFrame_CopyTo_m292A4842651205CDCEE1C8BBFCFF9060327083F5 (void);
// 0x000001ED System.Void Intel.RealSense.VideoFrame::CopyFrom(T[])
// 0x000001EE System.Void Intel.RealSense.VideoFrame::CopyFrom(System.IntPtr)
extern void VideoFrame_CopyFrom_m546BABFFE6138A4060D4B90F256505EAC6C999F4 (void);
// 0x000001EF System.Void Intel.RealSense.DisparityFrame::.ctor(System.IntPtr)
extern void DisparityFrame__ctor_m07129C0B418425F645F6512AA59C132FC13DE4B3 (void);
// 0x000001F0 System.Single Intel.RealSense.DisparityFrame::get_Baseline()
extern void DisparityFrame_get_Baseline_m6555F64B181374CCE7A23AB1593C2E9180E5F8C4 (void);
// 0x000001F1 System.Void Intel.RealSense.MotionFrame::.ctor(System.IntPtr)
extern void MotionFrame__ctor_m2BC08CAEFFED538A8211ACE09320058A1F19707F (void);
// 0x000001F2 Intel.RealSense.Math.Vector Intel.RealSense.MotionFrame::get_MotionData()
extern void MotionFrame_get_MotionData_m544519D1C4A1BC88BEF63779964425D3E670B0BA (void);
// 0x000001F3 System.Void Intel.RealSense.MotionFrame::CopyTo(System.Single[])
extern void MotionFrame_CopyTo_m44984B253947C2F0D1A1625D4731820363CEC027 (void);
// 0x000001F4 System.Void Intel.RealSense.MotionFrame::CopyTo(T&)
// 0x000001F5 System.Void Intel.RealSense.MotionFrame::CopyTo(T)
// 0x000001F6 System.Void Intel.RealSense.PoseFrame::.ctor(System.IntPtr)
extern void PoseFrame__ctor_m96F23D9802A65B9F270AD2E78CAAB57FA9C759A9 (void);
// 0x000001F7 Intel.RealSense.Pose Intel.RealSense.PoseFrame::get_PoseData()
extern void PoseFrame_get_PoseData_m358899D89BEB7FBCC81B15DB6745CBE16D35B05F (void);
// 0x000001F8 System.Void Intel.RealSense.PoseFrame::CopyTo(T&)
// 0x000001F9 System.Void Intel.RealSense.PoseFrame::CopyTo(T)
// 0x000001FA System.IntPtr Intel.RealSense.Config::Create()
extern void Config_Create_m7FE42E2561BB8EBED5972D596D5520887101C32B (void);
// 0x000001FB System.Void Intel.RealSense.Config::.ctor()
extern void Config__ctor_m3F246BE25D516D7FF7B80636D35826DE46DFF423 (void);
// 0x000001FC System.Void Intel.RealSense.Config::EnableStream(Intel.RealSense.Stream,System.Int32)
extern void Config_EnableStream_m320EE87B0F2C417B701790B10EFCD1907C33DB50 (void);
// 0x000001FD System.Void Intel.RealSense.Config::EnableStream(Intel.RealSense.Stream,System.Int32,System.Int32,System.Int32,Intel.RealSense.Format,System.Int32)
extern void Config_EnableStream_m324BFB969D9DD3B932EEA96FACFC5BAAFC3443D3 (void);
// 0x000001FE System.Void Intel.RealSense.Config::EnableStream(Intel.RealSense.Stream,System.Int32,System.Int32,Intel.RealSense.Format,System.Int32)
extern void Config_EnableStream_mC259D059519AE7D276D640B3BFCEB302DCE9A910 (void);
// 0x000001FF System.Void Intel.RealSense.Config::EnableStream(Intel.RealSense.Stream,Intel.RealSense.Format,System.Int32)
extern void Config_EnableStream_m18E6C7740460E8D8D8B884E0C676D267E9F2515F (void);
// 0x00000200 System.Void Intel.RealSense.Config::EnableStream(Intel.RealSense.Stream,System.Int32,Intel.RealSense.Format,System.Int32)
extern void Config_EnableStream_mF36B75D07BBC3514EB64ECE74B34D47645AC3885 (void);
// 0x00000201 System.Void Intel.RealSense.Config::EnableAllStreams()
extern void Config_EnableAllStreams_m1FAC992F7B91E34CB1904C0AD5E359CA386CE944 (void);
// 0x00000202 System.Void Intel.RealSense.Config::EnableDevice(System.String)
extern void Config_EnableDevice_m443031EF609180AACC13419B4E4B7492F32A32F2 (void);
// 0x00000203 System.Void Intel.RealSense.Config::EnableDeviceFromFile(System.String)
extern void Config_EnableDeviceFromFile_mE80F9C8AB39A7D18A4803C7F971B02372E6BF8ED (void);
// 0x00000204 System.Void Intel.RealSense.Config::EnableDeviceFromFile(System.String,System.Boolean)
extern void Config_EnableDeviceFromFile_m469595B0A8B7DA906326FA289CEA67A016CA2356 (void);
// 0x00000205 System.Void Intel.RealSense.Config::EnableRecordToFile(System.String)
extern void Config_EnableRecordToFile_m932DC43A2DACCE52B49A1D34B63F0DC26F833516 (void);
// 0x00000206 System.Void Intel.RealSense.Config::DisableStream(Intel.RealSense.Stream,System.Int32)
extern void Config_DisableStream_mD3B618D987C9C9F1340FF579E5D4AF3B9577496A (void);
// 0x00000207 System.Void Intel.RealSense.Config::DisableAllStreams()
extern void Config_DisableAllStreams_m8F9C1BBB35AF2D9630B3D38A543C854A94CE8ED7 (void);
// 0x00000208 System.Boolean Intel.RealSense.Config::CanResolve(Intel.RealSense.Pipeline)
extern void Config_CanResolve_m4CF60E49D64C5049945B01E30AFD6979AFC79053 (void);
// 0x00000209 Intel.RealSense.PipelineProfile Intel.RealSense.Config::Resolve(Intel.RealSense.Pipeline)
extern void Config_Resolve_mEBF4570843321D1DD507F7B537F47BDA8D284C64 (void);
// 0x0000020A System.IntPtr Intel.RealSense.Pipeline::Create(Intel.RealSense.Context)
extern void Pipeline_Create_mE2A30635D542E4337F67F3603F62D19F64C7EADF (void);
// 0x0000020B System.IntPtr Intel.RealSense.Pipeline::Create()
extern void Pipeline_Create_mE2A209D65236C311D5A23C244909585C1C284852 (void);
// 0x0000020C System.Void Intel.RealSense.Pipeline::.ctor(Intel.RealSense.Context)
extern void Pipeline__ctor_m97EC9E399A7C7532907D51F25E3D6E71895DF9E5 (void);
// 0x0000020D System.Void Intel.RealSense.Pipeline::.ctor()
extern void Pipeline__ctor_mB26D36AA95DBE8030DF7695B3A21EB946648B794 (void);
// 0x0000020E Intel.RealSense.PipelineProfile Intel.RealSense.Pipeline::Start()
extern void Pipeline_Start_mEB081628F88C07B01662C7EC074B4049E318F000 (void);
// 0x0000020F Intel.RealSense.PipelineProfile Intel.RealSense.Pipeline::Start(Intel.RealSense.Config)
extern void Pipeline_Start_m70465DE73DAB473A322B4279D1C31115E5C2C5CE (void);
// 0x00000210 Intel.RealSense.PipelineProfile Intel.RealSense.Pipeline::Start(Intel.RealSense.FrameCallback)
extern void Pipeline_Start_m6355F1AF0632929FFA49EFC011C8643987673FEF (void);
// 0x00000211 Intel.RealSense.PipelineProfile Intel.RealSense.Pipeline::Start(Intel.RealSense.Config,Intel.RealSense.FrameCallback)
extern void Pipeline_Start_m7F1576FA13C18DC8EF9251F2E3562C9E48EF7055 (void);
// 0x00000212 System.Void Intel.RealSense.Pipeline::Stop()
extern void Pipeline_Stop_m39FC7E91A96BA526BC9911169417C7A2C5D1BE6F (void);
// 0x00000213 Intel.RealSense.FrameSet Intel.RealSense.Pipeline::WaitForFrames(System.UInt32)
extern void Pipeline_WaitForFrames_m9E9963C638C8AD3E35AE45BC5ECB28D2CC1543E8 (void);
// 0x00000214 System.Boolean Intel.RealSense.Pipeline::TryWaitForFrames(Intel.RealSense.FrameSet&,System.UInt32)
extern void Pipeline_TryWaitForFrames_m2A224A0DBBD313A71E4D17BBEB52363F308CAE3D (void);
// 0x00000215 System.Boolean Intel.RealSense.Pipeline::PollForFrames(Intel.RealSense.FrameSet&)
extern void Pipeline_PollForFrames_mE28FEEA7977C600AB625B47B303DEC7534D06529 (void);
// 0x00000216 Intel.RealSense.PipelineProfile Intel.RealSense.Pipeline::get_ActiveProfile()
extern void Pipeline_get_ActiveProfile_mC99DB95E780EBE71B067BA76873586E7D4E37C2D (void);
// 0x00000217 System.Void Intel.RealSense.Pipeline/<>c__DisplayClass7_0::.ctor()
extern void U3CU3Ec__DisplayClass7_0__ctor_m49703CF4DE1D508261935D9023409830A403816C (void);
// 0x00000218 System.Void Intel.RealSense.Pipeline/<>c__DisplayClass7_0::<Start>b__0(System.IntPtr,System.IntPtr)
extern void U3CU3Ec__DisplayClass7_0_U3CStartU3Eb__0_m833F367E42B185F117DE020437561ED804C6380D (void);
// 0x00000219 System.Void Intel.RealSense.Pipeline/<>c__DisplayClass8_0::.ctor()
extern void U3CU3Ec__DisplayClass8_0__ctor_mBC20DE3D0483D595C43A0D411D87A78827C7EB5D (void);
// 0x0000021A System.Void Intel.RealSense.Pipeline/<>c__DisplayClass8_0::<Start>b__0(System.IntPtr,System.IntPtr)
extern void U3CU3Ec__DisplayClass8_0_U3CStartU3Eb__0_mA10BA2BC12848857AD13180A8038ECD4668E9A73 (void);
// 0x0000021B System.Void Intel.RealSense.PipelineProfile::.ctor(System.IntPtr)
extern void PipelineProfile__ctor_m17794CC56B28A9ADEC3D2FC0BEDF7C3EEEEA5E18 (void);
// 0x0000021C Intel.RealSense.Device Intel.RealSense.PipelineProfile::get_Device()
extern void PipelineProfile_get_Device_m6F894CF699D4DD81124E8EA1B79BFFD3DA287AA3 (void);
// 0x0000021D System.Collections.ObjectModel.ReadOnlyCollection`1<Intel.RealSense.StreamProfile> Intel.RealSense.PipelineProfile::get_Streams()
extern void PipelineProfile_get_Streams_m4AB79670A85865858270FD144921D9E73D8FFEE6 (void);
// 0x0000021E Intel.RealSense.StreamProfile Intel.RealSense.PipelineProfile::GetStream(Intel.RealSense.Stream,System.Int32)
extern void PipelineProfile_GetStream_m2C78EA621B282F35FD1552B34E51F9D37B224029 (void);
// 0x0000021F T Intel.RealSense.PipelineProfile::GetStream(Intel.RealSense.Stream,System.Int32)
// 0x00000220 System.IntPtr Intel.RealSense.Align::Create(Intel.RealSense.Stream)
extern void Align_Create_mAC5278D29DF1328A3DDE2022DA600AE583347846 (void);
// 0x00000221 System.Void Intel.RealSense.Align::.ctor(Intel.RealSense.Stream)
extern void Align__ctor_m36AB1104A49AAA766D674C651C0152B0F22DD78A (void);
// 0x00000222 Intel.RealSense.FrameSet Intel.RealSense.Align::Process(Intel.RealSense.FrameSet,Intel.RealSense.FramesReleaser)
extern void Align_Process_mA91C9463FF791185AE28A769DE19E14DC5BB2FD0 (void);
// 0x00000223 System.IntPtr Intel.RealSense.Colorizer::Create()
extern void Colorizer_Create_mA0736FB00364B9BBC4578CEA2AAD17E2F628A8CF (void);
// 0x00000224 System.Void Intel.RealSense.Colorizer::.ctor(System.IntPtr)
extern void Colorizer__ctor_m33DB2E49442E511A51A03B85BE613DBF5694B9C0 (void);
// 0x00000225 System.Void Intel.RealSense.Colorizer::.ctor()
extern void Colorizer__ctor_mA446F9E539CEDC82221A49AC58BC777759FE521C (void);
// 0x00000226 Intel.RealSense.VideoFrame Intel.RealSense.Colorizer::Colorize(Intel.RealSense.Frame,Intel.RealSense.FramesReleaser)
extern void Colorizer_Colorize_m4FAFAD28185727799B5334DDC4C722C5C03721AB (void);
// 0x00000227 System.Void Intel.RealSense.CustomProcessingBlock::.ctor(Intel.RealSense.CustomProcessingBlock/FrameProcessorCallback)
extern void CustomProcessingBlock__ctor_mC714660C572ACD814B6B05755CD6A09C872BC171 (void);
// 0x00000228 System.Void Intel.RealSense.CustomProcessingBlock::Finalize()
extern void CustomProcessingBlock_Finalize_m99AECC503080E3AC9C662F31ED53803D5EBAA325 (void);
// 0x00000229 System.Void Intel.RealSense.CustomProcessingBlock::ProcessingBlockCallback(System.IntPtr,System.IntPtr,System.IntPtr)
extern void CustomProcessingBlock_ProcessingBlockCallback_mBCA1AD42941BA813E5418272B5612800CFF8CD89 (void);
// 0x0000022A Intel.RealSense.IOptionsContainer Intel.RealSense.CustomProcessingBlock::get_Options()
extern void CustomProcessingBlock_get_Options_m0EB34B76C20D7A8551B297064B34956ADCF2550C (void);
// 0x0000022B System.Void Intel.RealSense.CustomProcessingBlock::set_Options(Intel.RealSense.IOptionsContainer)
extern void CustomProcessingBlock_set_Options_mB26C452A921440E9D714AE4C0DF3F771FB97940F (void);
// 0x0000022C Intel.RealSense.FrameQueue Intel.RealSense.CustomProcessingBlock::get_Queue()
extern void CustomProcessingBlock_get_Queue_m3D57961F5EF765441576D17B049D8E7997A7ADC4 (void);
// 0x0000022D System.Void Intel.RealSense.CustomProcessingBlock::Process(T)
// 0x0000022E System.Void Intel.RealSense.CustomProcessingBlock::Start(Intel.RealSense.FrameQueue)
extern void CustomProcessingBlock_Start_m768D899DE9D5E2493F567141E2278CB20A907FCB (void);
// 0x0000022F System.Void Intel.RealSense.CustomProcessingBlock::Start()
extern void CustomProcessingBlock_Start_m03387AE81FCB6F51F91B55AC66397322F2A28973 (void);
// 0x00000230 System.Void Intel.RealSense.CustomProcessingBlock::Start(Intel.RealSense.FrameCallback)
extern void CustomProcessingBlock_Start_m9E061EA79E953981E2E7D8F385907E7F9C7B7C6E (void);
// 0x00000231 System.Boolean Intel.RealSense.CustomProcessingBlock::RegisterOption(Intel.RealSense.Option,System.Single,System.Single,System.Single,System.Single)
extern void CustomProcessingBlock_RegisterOption_m594284E5FAA70850E7634AC40ACC757DC005FD63 (void);
// 0x00000232 System.Void Intel.RealSense.CustomProcessingBlock::ProcessingBlockFrameCallback(System.IntPtr,System.IntPtr)
extern void CustomProcessingBlock_ProcessingBlockFrameCallback_m60D5EBFACC247AD068BAC76F816041E7B05E5057 (void);
// 0x00000233 System.Void Intel.RealSense.CustomProcessingBlock::Dispose(System.Boolean)
extern void CustomProcessingBlock_Dispose_mC391F89D080A86E072DF135D47CCF1828891F70D (void);
// 0x00000234 System.Void Intel.RealSense.CustomProcessingBlock::Dispose()
extern void CustomProcessingBlock_Dispose_m30E965BD3AC43C2FB75BBDD92DE87C9B95284EFC (void);
// 0x00000235 System.Void Intel.RealSense.CustomProcessingBlock::.cctor()
extern void CustomProcessingBlock__cctor_mEDE8CC67B06D8251FB2CFA9DA07ABBD341EEF91D (void);
// 0x00000236 System.Void Intel.RealSense.CustomProcessingBlock/FrameProcessorCallback::.ctor(System.Object,System.IntPtr)
extern void FrameProcessorCallback__ctor_m18CFDC8C584A68B62A4557F5D76C615D7E298459 (void);
// 0x00000237 System.Void Intel.RealSense.CustomProcessingBlock/FrameProcessorCallback::Invoke(Intel.RealSense.Frame,Intel.RealSense.FrameSource)
extern void FrameProcessorCallback_Invoke_mFBC84C817A26B143FD45E96C7BCB0CD7AE273B38 (void);
// 0x00000238 System.IAsyncResult Intel.RealSense.CustomProcessingBlock/FrameProcessorCallback::BeginInvoke(Intel.RealSense.Frame,Intel.RealSense.FrameSource,System.AsyncCallback,System.Object)
extern void FrameProcessorCallback_BeginInvoke_m828C064E8282B23EC0F23814BAC6254BADB8ECFD (void);
// 0x00000239 System.Void Intel.RealSense.CustomProcessingBlock/FrameProcessorCallback::EndInvoke(System.IAsyncResult)
extern void FrameProcessorCallback_EndInvoke_mAAA1D95F2A4931EE1D4D54505C74CB785CE306B5 (void);
// 0x0000023A System.IntPtr Intel.RealSense.DecimationFilter::Create()
extern void DecimationFilter_Create_mF7EB4871BF7926E470BACBC552D269036AE53D86 (void);
// 0x0000023B System.Void Intel.RealSense.DecimationFilter::.ctor(System.IntPtr)
extern void DecimationFilter__ctor_m116187C994780C6F4936C091F2FFE1EF1E6EE2E8 (void);
// 0x0000023C System.Void Intel.RealSense.DecimationFilter::.ctor()
extern void DecimationFilter__ctor_m3300FAFCAD003C1C709D90010098EC2680B4AA36 (void);
// 0x0000023D Intel.RealSense.VideoFrame Intel.RealSense.DecimationFilter::ApplyFilter(Intel.RealSense.Frame,Intel.RealSense.FramesReleaser)
extern void DecimationFilter_ApplyFilter_m6EDC9A8B3318C15845BB16DF22B36C4BB32834A2 (void);
// 0x0000023E System.IntPtr Intel.RealSense.DisparityTransform::Create(System.Boolean)
extern void DisparityTransform_Create_mC884F0D357726027C4BDB2D9DB99108CB8BF87B8 (void);
// 0x0000023F System.Void Intel.RealSense.DisparityTransform::.ctor(System.IntPtr)
extern void DisparityTransform__ctor_mB0C1A94E3D847D263CC342D96D27FBCC7DA5DC60 (void);
// 0x00000240 System.Void Intel.RealSense.DisparityTransform::.ctor(System.Boolean)
extern void DisparityTransform__ctor_m0AFE6883C9919FB4F5430DA2373688D5F18304ED (void);
// 0x00000241 Intel.RealSense.VideoFrame Intel.RealSense.DisparityTransform::ApplyFilter(Intel.RealSense.Frame,Intel.RealSense.FramesReleaser)
extern void DisparityTransform_ApplyFilter_m2CC5D8FA2D33DE6A5A52C9D194CDAC5BB389DE12 (void);
// 0x00000242 System.Void Intel.RealSense.FrameSource::.ctor(System.Runtime.InteropServices.HandleRef)
extern void FrameSource__ctor_mA8668D31C394FA6FCA1A41475AC15A3E0215FEB5 (void);
// 0x00000243 T Intel.RealSense.FrameSource::AllocateVideoFrame(Intel.RealSense.StreamProfile,Intel.RealSense.Frame,System.Int32,System.Int32,System.Int32,System.Int32,Intel.RealSense.Extension)
// 0x00000244 T Intel.RealSense.FrameSource::AllocateMotionFrame(Intel.RealSense.StreamProfile,Intel.RealSense.Frame,Intel.RealSense.Extension)
// 0x00000245 Intel.RealSense.FrameSet Intel.RealSense.FrameSource::AllocateCompositeFrame(Intel.RealSense.FramesReleaser,Intel.RealSense.Frame[])
extern void FrameSource_AllocateCompositeFrame_mFDB68FA935AE9FE7B306A8EE6D5EDBF5706CC89D (void);
// 0x00000246 Intel.RealSense.FrameSet Intel.RealSense.FrameSource::AllocateCompositeFrame(Intel.RealSense.Frame[])
extern void FrameSource_AllocateCompositeFrame_m9D3D367D2CC39F835EE6D42CC87671BDF22F62E7 (void);
// 0x00000247 Intel.RealSense.FrameSet Intel.RealSense.FrameSource::AllocateCompositeFrame(System.Collections.Generic.IList`1<Intel.RealSense.Frame>)
extern void FrameSource_AllocateCompositeFrame_m9E5D289E12132C8ACBB9E815F2DDE8B347F8F045 (void);
// 0x00000248 System.Void Intel.RealSense.FrameSource::FrameReady(Intel.RealSense.Frame)
extern void FrameSource_FrameReady_m00EABCFDF9B7EB76D5462FCFBCA4C4905B079932 (void);
// 0x00000249 System.IntPtr Intel.RealSense.HoleFillingFilter::Create()
extern void HoleFillingFilter_Create_mFE125D52C0F10878B0C6496879689182BDEBFF54 (void);
// 0x0000024A System.Void Intel.RealSense.HoleFillingFilter::.ctor(System.IntPtr)
extern void HoleFillingFilter__ctor_mFF3AED5BEDD38F1BA84B84812CF4085675A64F92 (void);
// 0x0000024B System.Void Intel.RealSense.HoleFillingFilter::.ctor()
extern void HoleFillingFilter__ctor_mAEE464D5D59725587EE4EE1ACF7227BA97A9DF37 (void);
// 0x0000024C Intel.RealSense.VideoFrame Intel.RealSense.HoleFillingFilter::ApplyFilter(Intel.RealSense.Frame,Intel.RealSense.FramesReleaser)
extern void HoleFillingFilter_ApplyFilter_m4E7938AB38A59A46A3A284906D405192374BC45F (void);
// 0x0000024D System.IntPtr Intel.RealSense.PointCloud::Create()
extern void PointCloud_Create_m1E23211B533CAE419C74C50491E41AC62037FE2C (void);
// 0x0000024E System.Void Intel.RealSense.PointCloud::.ctor(System.IntPtr)
extern void PointCloud__ctor_mAB7CBF07CDC4D4CCA9D7171FEE3B3DA5DA3AF43A (void);
// 0x0000024F System.Void Intel.RealSense.PointCloud::.ctor()
extern void PointCloud__ctor_mDA364BEC240D836185E6F03BC8981B902652BB87 (void);
// 0x00000250 Intel.RealSense.Points Intel.RealSense.PointCloud::Calculate(Intel.RealSense.Frame,Intel.RealSense.FramesReleaser)
extern void PointCloud_Calculate_m9201042DB8174DDFC691E964B05F1A8E725204EB (void);
// 0x00000251 System.Void Intel.RealSense.PointCloud::MapTexture(Intel.RealSense.VideoFrame)
extern void PointCloud_MapTexture_m4161393896F9576783597101F5A36B716A8DBBE1 (void);
// 0x00000252 Intel.RealSense.Frame Intel.RealSense.IProcessingBlock::Process(Intel.RealSense.Frame)
// 0x00000253 Intel.RealSense.IOptionsContainer Intel.RealSense.ProcessingBlock::get_Options()
extern void ProcessingBlock_get_Options_m579A427FF3957C5D16C7AC2651FAD8E39CAF1354 (void);
// 0x00000254 System.Void Intel.RealSense.ProcessingBlock::set_Options(Intel.RealSense.IOptionsContainer)
extern void ProcessingBlock_set_Options_mAEB856618F3860B607DCDCBAABD2AEB5D9CB6AB9 (void);
// 0x00000255 Intel.RealSense.InfoCollection Intel.RealSense.ProcessingBlock::get_Info()
extern void ProcessingBlock_get_Info_m12C672B3F2CDBDF3379560906D123601D09AD145 (void);
// 0x00000256 System.Void Intel.RealSense.ProcessingBlock::set_Info(Intel.RealSense.InfoCollection)
extern void ProcessingBlock_set_Info_m39CA86A4EDC2359FBA71C3C596AF2C916CBA0EDA (void);
// 0x00000257 Intel.RealSense.FrameQueue Intel.RealSense.ProcessingBlock::get_Queue()
extern void ProcessingBlock_get_Queue_m1FDE72B050649E336AE40F477CFC567DEA31A1AA (void);
// 0x00000258 System.Void Intel.RealSense.ProcessingBlock::.ctor(System.IntPtr)
extern void ProcessingBlock__ctor_mBB81F4D8294B2AF5B2BE5307FDB941FDE2701935 (void);
// 0x00000259 Intel.RealSense.Frame Intel.RealSense.ProcessingBlock::Process(Intel.RealSense.Frame)
extern void ProcessingBlock_Process_mE99AA39FCBC3F1FF9490FEDF52D45722714F2CE9 (void);
// 0x0000025A T Intel.RealSense.ProcessingBlock::Process(Intel.RealSense.Frame)
// 0x0000025B System.Void Intel.RealSense.ProcessingBlock::Dispose(System.Boolean)
extern void ProcessingBlock_Dispose_m7D2F83DD0D827B618A4C74AA7F8719BC227CE7E4 (void);
// 0x0000025C System.Boolean Intel.RealSense.ProcessingBlock::Is(Intel.RealSense.Extension)
extern void ProcessingBlock_Is_m536B178EFD37EB403BE17586B4FFD231560D5849 (void);
// 0x0000025D T Intel.RealSense.ProcessingBlock::As()
// 0x0000025E Intel.RealSense.Frame Intel.RealSense.IProcessingBlockExtensions::ApplyFilter(Intel.RealSense.Frame,Intel.RealSense.IProcessingBlock)
extern void IProcessingBlockExtensions_ApplyFilter_m321B683C224CCC61BB7D09387BD628266D9A8A1E (void);
// 0x0000025F System.IntPtr Intel.RealSense.SpatialFilter::Create()
extern void SpatialFilter_Create_mAE5E207EED76514FABBAF745BB725BA1E94B03E2 (void);
// 0x00000260 System.Void Intel.RealSense.SpatialFilter::.ctor(System.IntPtr)
extern void SpatialFilter__ctor_m80EAC4869BCBD549E65E12AC397093913158D43E (void);
// 0x00000261 System.Void Intel.RealSense.SpatialFilter::.ctor()
extern void SpatialFilter__ctor_mE9DEC7D0DA5EF1DDBD93697E0F8415019A03F2EB (void);
// 0x00000262 Intel.RealSense.VideoFrame Intel.RealSense.SpatialFilter::ApplyFilter(Intel.RealSense.Frame,Intel.RealSense.FramesReleaser)
extern void SpatialFilter_ApplyFilter_m8BC8A38EEB916CC453698C6F8D51E184F35295F9 (void);
// 0x00000263 System.IntPtr Intel.RealSense.Syncer::Create()
extern void Syncer_Create_mD019EB5603CEDDF21B3548ECCF64409DFD5B6A18 (void);
// 0x00000264 System.Void Intel.RealSense.Syncer::.ctor(System.IntPtr)
extern void Syncer__ctor_m42DD0EAAB06541E566971781F857E9C68EF3C95E (void);
// 0x00000265 System.Void Intel.RealSense.Syncer::.ctor()
extern void Syncer__ctor_m33869E1A0033BC779326CEB70456DA7770864290 (void);
// 0x00000266 System.Void Intel.RealSense.Syncer::SubmitFrame(Intel.RealSense.Frame)
extern void Syncer_SubmitFrame_mB60E5C88FE70725889109E77DF15FF5B434342A5 (void);
// 0x00000267 Intel.RealSense.FrameSet Intel.RealSense.Syncer::WaitForFrames(System.UInt32)
extern void Syncer_WaitForFrames_m2C7C7AEAF94C93D9F1FCE45396521C0319D027C4 (void);
// 0x00000268 System.Boolean Intel.RealSense.Syncer::PollForFrames(Intel.RealSense.FrameSet&)
extern void Syncer_PollForFrames_m46146BF662A19C653163CFC66BCB48AB2CDD3F17 (void);
// 0x00000269 System.IntPtr Intel.RealSense.TemporalFilter::Create()
extern void TemporalFilter_Create_m77C699C107ED69719CFAFCC792C8FF12ECAED2DD (void);
// 0x0000026A System.Void Intel.RealSense.TemporalFilter::.ctor(System.IntPtr)
extern void TemporalFilter__ctor_m81A821EB2001211AFC2160641967874B837E7706 (void);
// 0x0000026B System.Void Intel.RealSense.TemporalFilter::.ctor()
extern void TemporalFilter__ctor_m4A5D5D5C7FE7329505A69977C7461FFEDD4C9C90 (void);
// 0x0000026C Intel.RealSense.VideoFrame Intel.RealSense.TemporalFilter::ApplyFilter(Intel.RealSense.Frame,Intel.RealSense.FramesReleaser)
extern void TemporalFilter_ApplyFilter_m1EF69B9B84923F4655C538C200E0F5E81354EF30 (void);
// 0x0000026D System.IntPtr Intel.RealSense.ZeroOrderInvalidationFilter::Create()
extern void ZeroOrderInvalidationFilter_Create_m8FF5E615C609A83BA25E060CE1A8DA83A99C69E9 (void);
// 0x0000026E System.Void Intel.RealSense.ZeroOrderInvalidationFilter::.ctor(System.IntPtr)
extern void ZeroOrderInvalidationFilter__ctor_mF6EAD2E4AAE3A9F80D3CD4C9404E819B3EA14E54 (void);
// 0x0000026F System.Void Intel.RealSense.ZeroOrderInvalidationFilter::.ctor()
extern void ZeroOrderInvalidationFilter__ctor_mA253B75219433632803774F8F7700252C2D99ED0 (void);
// 0x00000270 Intel.RealSense.VideoFrame Intel.RealSense.ZeroOrderInvalidationFilter::ApplyFilter(Intel.RealSense.Frame,Intel.RealSense.FramesReleaser)
extern void ZeroOrderInvalidationFilter_ApplyFilter_mCBB08FFBDF25E26FA0DD327DC46864ED0E6D31EE (void);
// 0x00000271 System.Void Intel.RealSense.ProcessingBlockList::.ctor(System.IntPtr)
extern void ProcessingBlockList__ctor_m60CDF0EDFEEBC2F404547D64BB5CB28A2E1D307B (void);
// 0x00000272 System.Collections.Generic.IEnumerator`1<Intel.RealSense.ProcessingBlock> Intel.RealSense.ProcessingBlockList::GetEnumerator()
extern void ProcessingBlockList_GetEnumerator_mDC1354306E9545929F4DDE8A678460A1FAC446A9 (void);
// 0x00000273 System.Collections.IEnumerator Intel.RealSense.ProcessingBlockList::System.Collections.IEnumerable.GetEnumerator()
extern void ProcessingBlockList_System_Collections_IEnumerable_GetEnumerator_m7DCF1AC9ECFA0C6FA547FC582D81587C1CC14616 (void);
// 0x00000274 System.Int32 Intel.RealSense.ProcessingBlockList::get_Count()
extern void ProcessingBlockList_get_Count_mD7C57A2791458FA2D4DA513D58739A468BD66BD8 (void);
// 0x00000275 System.Object Intel.RealSense.ProcessingBlockList::get_SyncRoot()
extern void ProcessingBlockList_get_SyncRoot_m1100401609E1B2C49B9F6325164E369A555D5149 (void);
// 0x00000276 System.Boolean Intel.RealSense.ProcessingBlockList::get_IsSynchronized()
extern void ProcessingBlockList_get_IsSynchronized_mEE05B1CFCC75145722FDD2C180D8A4100E0A6B8D (void);
// 0x00000277 T Intel.RealSense.ProcessingBlockList::GetProcessingBlock(System.Int32)
// 0x00000278 System.Void Intel.RealSense.ProcessingBlockList::CopyTo(System.Array,System.Int32)
extern void ProcessingBlockList_CopyTo_mCBADE5A270C99A3D247213E30AC2BC8A722F7AC0 (void);
// 0x00000279 Intel.RealSense.ProcessingBlock Intel.RealSense.ProcessingBlockList::get_Item(System.Int32)
extern void ProcessingBlockList_get_Item_mD44E8A2EFFA1E77054FAC664A91AB9AC0A8C0767 (void);
// 0x0000027A System.Void Intel.RealSense.ProcessingBlockList/<GetEnumerator>d__1::.ctor(System.Int32)
extern void U3CGetEnumeratorU3Ed__1__ctor_m266D07C1A341838E3A5C97B468BBD1D6BA0775C0 (void);
// 0x0000027B System.Void Intel.RealSense.ProcessingBlockList/<GetEnumerator>d__1::System.IDisposable.Dispose()
extern void U3CGetEnumeratorU3Ed__1_System_IDisposable_Dispose_mD8D86B7A71E1C59B467D781C0163FDC88FCA24F6 (void);
// 0x0000027C System.Boolean Intel.RealSense.ProcessingBlockList/<GetEnumerator>d__1::MoveNext()
extern void U3CGetEnumeratorU3Ed__1_MoveNext_mA041164DFF36AD28BAF5AFD87C33C9FD9D1EBF8D (void);
// 0x0000027D Intel.RealSense.ProcessingBlock Intel.RealSense.ProcessingBlockList/<GetEnumerator>d__1::System.Collections.Generic.IEnumerator<Intel.RealSense.ProcessingBlock>.get_Current()
extern void U3CGetEnumeratorU3Ed__1_System_Collections_Generic_IEnumeratorU3CIntel_RealSense_ProcessingBlockU3E_get_Current_m8726C310338C11FB863FE82F14ECA36649840CBF (void);
// 0x0000027E System.Void Intel.RealSense.ProcessingBlockList/<GetEnumerator>d__1::System.Collections.IEnumerator.Reset()
extern void U3CGetEnumeratorU3Ed__1_System_Collections_IEnumerator_Reset_m5091A10841728405B60242565912507EA7EFF33A (void);
// 0x0000027F System.Object Intel.RealSense.ProcessingBlockList/<GetEnumerator>d__1::System.Collections.IEnumerator.get_Current()
extern void U3CGetEnumeratorU3Ed__1_System_Collections_IEnumerator_get_Current_mE5296A5BFD50D202F5658998554FDE3FB3DE738C (void);
// 0x00000280 System.IntPtr Intel.RealSense.ThresholdFilter::Create()
extern void ThresholdFilter_Create_mBD5E30E34B5ADDCB248A5B9060785EB8B49A3324 (void);
// 0x00000281 System.Void Intel.RealSense.ThresholdFilter::.ctor(System.IntPtr)
extern void ThresholdFilter__ctor_m8CB914E1BB38DFE2E721326C2B2F4834B7BBF375 (void);
// 0x00000282 System.Void Intel.RealSense.ThresholdFilter::.ctor()
extern void ThresholdFilter__ctor_m7829CC83A469F6DF4F2683E3A310759AA86009F0 (void);
// 0x00000283 Intel.RealSense.VideoFrame Intel.RealSense.ThresholdFilter::ApplyFilter(Intel.RealSense.Frame,Intel.RealSense.FramesReleaser)
extern void ThresholdFilter_ApplyFilter_m911981CD6D89A8F35C293B15A56A883A6424E001 (void);
// 0x00000284 System.IntPtr Intel.RealSense.UnitsTransform::Create()
extern void UnitsTransform_Create_m591C21DDD4EAC0CF2BEAA96154A01BB17DA8AB74 (void);
// 0x00000285 System.Void Intel.RealSense.UnitsTransform::.ctor(System.IntPtr)
extern void UnitsTransform__ctor_mCF3480472D06FFDF36DE0B4AFAA639208CC6EE90 (void);
// 0x00000286 System.Void Intel.RealSense.UnitsTransform::.ctor()
extern void UnitsTransform__ctor_mB8BB06672D306D7A11F93CDD85EEE65A1BABD1D2 (void);
// 0x00000287 Intel.RealSense.VideoFrame Intel.RealSense.UnitsTransform::ApplyFilter(Intel.RealSense.Frame,Intel.RealSense.FramesReleaser)
extern void UnitsTransform_ApplyFilter_m55CB08DA85B48AFA2D17F812DB94FC96545B1F8D (void);
// 0x00000288 System.IntPtr Intel.RealSense.DepthHuffmanDecoder::Create()
extern void DepthHuffmanDecoder_Create_mFAFDE39071A781B2481934506160B72F3D220BF8 (void);
// 0x00000289 System.Void Intel.RealSense.DepthHuffmanDecoder::.ctor(System.IntPtr)
extern void DepthHuffmanDecoder__ctor_mA3ED32DE8D3C0F4E965115E783DCDBF2AEAEA0B3 (void);
// 0x0000028A System.Void Intel.RealSense.DepthHuffmanDecoder::.ctor()
extern void DepthHuffmanDecoder__ctor_m364643A05210440FBDEA1BB3DAC1B26D450A0D7C (void);
// 0x0000028B Intel.RealSense.VideoFrame Intel.RealSense.DepthHuffmanDecoder::ApplyFilter(Intel.RealSense.Frame,Intel.RealSense.FramesReleaser)
extern void DepthHuffmanDecoder_ApplyFilter_mA229310A21326974569B3041C1E7B9132BAA2AB7 (void);
// 0x0000028C System.Void Intel.RealSense.StreamProfile::Initialize()
extern void StreamProfile_Initialize_m5D1F4FBD1B6245A101D10C5A04986AE496ACB466 (void);
// 0x0000028D System.Void Intel.RealSense.StreamProfile::.ctor(System.IntPtr)
extern void StreamProfile__ctor_m2F13BEC60F1D1D5BD4E855C8EB4E6B66FD789C73 (void);
// 0x0000028E System.Void Intel.RealSense.StreamProfile::Dispose(System.Boolean)
extern void StreamProfile_Dispose_m4B075D2793E7ECFF16FE3848DAB0972F4D475BAF (void);
// 0x0000028F Intel.RealSense.Stream Intel.RealSense.StreamProfile::get_Stream()
extern void StreamProfile_get_Stream_mD0DDF21548F9306FE5D0E9482DED169A151D4324 (void);
// 0x00000290 Intel.RealSense.Format Intel.RealSense.StreamProfile::get_Format()
extern void StreamProfile_get_Format_m41C77E43AF55637FA711947D0E1942DE9D0853B4 (void);
// 0x00000291 System.Int32 Intel.RealSense.StreamProfile::get_Framerate()
extern void StreamProfile_get_Framerate_m7BB20A16ED0E6C2938C70097AE08C8A00C80FEDB (void);
// 0x00000292 System.Int32 Intel.RealSense.StreamProfile::get_Index()
extern void StreamProfile_get_Index_mF3AF6675BC5BBBDA20F92BC444AF38138FE8799A (void);
// 0x00000293 System.Int32 Intel.RealSense.StreamProfile::get_UniqueID()
extern void StreamProfile_get_UniqueID_mC731218BAA96C3EF140D6FB3912EC1B9E1E5640B (void);
// 0x00000294 System.Boolean Intel.RealSense.StreamProfile::get_IsDefault()
extern void StreamProfile_get_IsDefault_m9F0B9C4A9C5A7BBA01A5AE933EBD975C85DE5A5A (void);
// 0x00000295 System.Void Intel.RealSense.StreamProfile::set_IsDefault(System.Boolean)
extern void StreamProfile_set_IsDefault_m3DE3C8911B4F82FE804C00E129160E0259549AA1 (void);
// 0x00000296 System.Boolean Intel.RealSense.StreamProfile::get_IsCloned()
extern void StreamProfile_get_IsCloned_m19D5B4D4813FE1975DC10185B0114745B0DE4355 (void);
// 0x00000297 Intel.RealSense.Extrinsics Intel.RealSense.StreamProfile::GetExtrinsicsTo(Intel.RealSense.StreamProfile)
extern void StreamProfile_GetExtrinsicsTo_mBB4EDBF0DD49E06C15911861FAE9D17EE14D3780 (void);
// 0x00000298 System.Void Intel.RealSense.StreamProfile::RegisterExtrinsicsTo(Intel.RealSense.StreamProfile,Intel.RealSense.Extrinsics)
extern void StreamProfile_RegisterExtrinsicsTo_mCDE5835E1D13C4A760096007FF06AA8CC9A44109 (void);
// 0x00000299 Intel.RealSense.StreamProfile Intel.RealSense.StreamProfile::Clone(Intel.RealSense.Stream,System.Int32,Intel.RealSense.Format)
extern void StreamProfile_Clone_mF7F116C27D1059AE8E978C8E9644EAC43643D50C (void);
// 0x0000029A System.Boolean Intel.RealSense.StreamProfile::Is(Intel.RealSense.Extension)
extern void StreamProfile_Is_m9384D565153B7D1781A4271A0995B33C9BEE005E (void);
// 0x0000029B T Intel.RealSense.StreamProfile::As()
// 0x0000029C T Intel.RealSense.StreamProfile::Cast()
// 0x0000029D T Intel.RealSense.StreamProfile::Create(System.IntPtr)
// 0x0000029E Intel.RealSense.StreamProfile Intel.RealSense.StreamProfile::Create(System.IntPtr)
extern void StreamProfile_Create_m8E7D9ED445BBED9D3CE370C2C2C47948D08D28D9 (void);
// 0x0000029F System.Void Intel.RealSense.StreamProfile::.cctor()
extern void StreamProfile__cctor_m0DDECEA616727728ED2BE89B8E15F9CA90E96E95 (void);
// 0x000002A0 System.Void Intel.RealSense.StreamProfileList::.ctor(System.IntPtr)
extern void StreamProfileList__ctor_m35CFBE709157E012AC4347EEC1EDD33F3F075F6D (void);
// 0x000002A1 System.Collections.Generic.IEnumerator`1<Intel.RealSense.StreamProfile> Intel.RealSense.StreamProfileList::GetEnumerator()
extern void StreamProfileList_GetEnumerator_m22C29E074EF07C598AA87E3F6F261938BFA45740 (void);
// 0x000002A2 System.Collections.IEnumerator Intel.RealSense.StreamProfileList::System.Collections.IEnumerable.GetEnumerator()
extern void StreamProfileList_System_Collections_IEnumerable_GetEnumerator_mF5BC80FEF8B3814FB8C314D74BA008D7D8632579 (void);
// 0x000002A3 System.Int32 Intel.RealSense.StreamProfileList::get_Count()
extern void StreamProfileList_get_Count_m7E209405799AE1262D3350418C8A0F746CDEB868 (void);
// 0x000002A4 System.Object Intel.RealSense.StreamProfileList::get_SyncRoot()
extern void StreamProfileList_get_SyncRoot_mF2D209569A6BA3921D458ACC34DCA29ECA599714 (void);
// 0x000002A5 System.Boolean Intel.RealSense.StreamProfileList::get_IsSynchronized()
extern void StreamProfileList_get_IsSynchronized_m95E3BEC1201E0528FB3FDA8A5A8FF0D9D1164252 (void);
// 0x000002A6 Intel.RealSense.StreamProfile Intel.RealSense.StreamProfileList::get_Item(System.Int32)
extern void StreamProfileList_get_Item_mBD2A7EE6648608A0F5110D6C65345DBEEDFFC144 (void);
// 0x000002A7 T Intel.RealSense.StreamProfileList::GetProfile(System.Int32)
// 0x000002A8 System.Void Intel.RealSense.StreamProfileList::CopyTo(System.Array,System.Int32)
extern void StreamProfileList_CopyTo_m0068191481ECBF8FE4BB71C99F34D9682E976D36 (void);
// 0x000002A9 System.Void Intel.RealSense.StreamProfileList/<GetEnumerator>d__1::.ctor(System.Int32)
extern void U3CGetEnumeratorU3Ed__1__ctor_m105A99820051D984F4C1D1DCAE4D47EB95DC41B6 (void);
// 0x000002AA System.Void Intel.RealSense.StreamProfileList/<GetEnumerator>d__1::System.IDisposable.Dispose()
extern void U3CGetEnumeratorU3Ed__1_System_IDisposable_Dispose_m854A8BD349B6624BEDC7BCBF3684D063D50E47B3 (void);
// 0x000002AB System.Boolean Intel.RealSense.StreamProfileList/<GetEnumerator>d__1::MoveNext()
extern void U3CGetEnumeratorU3Ed__1_MoveNext_mF4E5648DED22907D21255D95FA8E2962A5F40CC9 (void);
// 0x000002AC Intel.RealSense.StreamProfile Intel.RealSense.StreamProfileList/<GetEnumerator>d__1::System.Collections.Generic.IEnumerator<Intel.RealSense.StreamProfile>.get_Current()
extern void U3CGetEnumeratorU3Ed__1_System_Collections_Generic_IEnumeratorU3CIntel_RealSense_StreamProfileU3E_get_Current_mB0AB532222E8AD49F6BFB215CFBAC6EF3710CCFD (void);
// 0x000002AD System.Void Intel.RealSense.StreamProfileList/<GetEnumerator>d__1::System.Collections.IEnumerator.Reset()
extern void U3CGetEnumeratorU3Ed__1_System_Collections_IEnumerator_Reset_m2ACA60A0A5BDE6A7E069F94A9807A99B28F872CA (void);
// 0x000002AE System.Object Intel.RealSense.StreamProfileList/<GetEnumerator>d__1::System.Collections.IEnumerator.get_Current()
extern void U3CGetEnumeratorU3Ed__1_System_Collections_IEnumerator_get_Current_m0B3E837D1617C05057C3B7B6C0643CD8F6E70301 (void);
// 0x000002AF System.Void Intel.RealSense.VideoStreamProfile::Initialize()
extern void VideoStreamProfile_Initialize_m8DEE5FE6FC8C1525A2294043C5E8BABB42BB3530 (void);
// 0x000002B0 System.Void Intel.RealSense.VideoStreamProfile::.ctor(System.IntPtr)
extern void VideoStreamProfile__ctor_mF7CF11989EE9C7CA67202574A40BBC89B297E53C (void);
// 0x000002B1 Intel.RealSense.Intrinsics Intel.RealSense.VideoStreamProfile::GetIntrinsics()
extern void VideoStreamProfile_GetIntrinsics_m6ED053473B83EF4FC3AD6C2ED583888D84E1C7FC (void);
// 0x000002B2 Intel.RealSense.StreamProfile Intel.RealSense.VideoStreamProfile::Clone(Intel.RealSense.Stream,System.Int32,Intel.RealSense.Format,System.Int32,System.Int32,Intel.RealSense.Intrinsics)
extern void VideoStreamProfile_Clone_mF514B94F4EFE1CD929EAA51611AEF8651711A58E (void);
// 0x000002B3 System.Int32 Intel.RealSense.VideoStreamProfile::get_Width()
extern void VideoStreamProfile_get_Width_mA5C68D5575183BCDBF046393274514E44A8BCAFA (void);
// 0x000002B4 System.Int32 Intel.RealSense.VideoStreamProfile::get_Height()
extern void VideoStreamProfile_get_Height_mD3165342ABE9DD67613D4BFA7B673A68D6AB919A (void);
// 0x000002B5 System.Void Intel.RealSense.MotionStreamProfile::.ctor(System.IntPtr)
extern void MotionStreamProfile__ctor_m600B4A58AF540780048FE12E12FB3A80B087AB7A (void);
// 0x000002B6 Intel.RealSense.MotionDeviceIntrinsics Intel.RealSense.MotionStreamProfile::GetIntrinsics()
extern void MotionStreamProfile_GetIntrinsics_mAE38DCD126B218FAC50B7B6C3EF43EA5B27A004D (void);
// 0x000002B7 System.Void Intel.RealSense.PoseStreamProfile::.ctor(System.IntPtr)
extern void PoseStreamProfile__ctor_m7225E89D4B6DE2374B390528D67085927A339746 (void);
// 0x000002B8 System.Void Intel.RealSense.Sensor::Initialize()
extern void Sensor_Initialize_m61AEA740EC6CCF8A9EF813D7DFD301A0759E5457 (void);
// 0x000002B9 T Intel.RealSense.Sensor::Create(System.IntPtr)
// 0x000002BA T Intel.RealSense.Sensor::Create(Intel.RealSense.Sensor)
// 0x000002BB System.Void Intel.RealSense.Sensor::.ctor(System.IntPtr)
extern void Sensor__ctor_m83D9E2F39D350BEF301C73673BC2AB08BA49825D (void);
// 0x000002BC System.Void Intel.RealSense.Sensor::Dispose(System.Boolean)
extern void Sensor_Dispose_m35E848822BD54426BD89186631FED11B0BE9FD2F (void);
// 0x000002BD Intel.RealSense.InfoCollection Intel.RealSense.Sensor::get_Info()
extern void Sensor_get_Info_mE1FE6534D3EBC8F06730360221A87AD467800869 (void);
// 0x000002BE System.Void Intel.RealSense.Sensor::set_Info(Intel.RealSense.InfoCollection)
extern void Sensor_set_Info_mDB5DB36200823B0444450A7409A576E044EBBA96 (void);
// 0x000002BF Intel.RealSense.IOptionsContainer Intel.RealSense.Sensor::get_Options()
extern void Sensor_get_Options_mB0F538BC407CE943D8A28DC448A30F2BF3847A7F (void);
// 0x000002C0 System.Void Intel.RealSense.Sensor::set_Options(Intel.RealSense.IOptionsContainer)
extern void Sensor_set_Options_m9EBE6D8DE4D54227582F984106A080991CEEAB10 (void);
// 0x000002C1 System.Void Intel.RealSense.Sensor::Open(Intel.RealSense.StreamProfile)
extern void Sensor_Open_m58148D11C85338026DDF09DC4125B40039D43988 (void);
// 0x000002C2 System.Void Intel.RealSense.Sensor::Open(Intel.RealSense.StreamProfile[])
extern void Sensor_Open_m601E3AE7AF9E8C26EC699677D192DD900E50BB92 (void);
// 0x000002C3 System.Void Intel.RealSense.Sensor::Start(Intel.RealSense.FrameQueue)
extern void Sensor_Start_m3AF58A5491941E19AAA93DF02DB990E8E49213AC (void);
// 0x000002C4 System.Void Intel.RealSense.Sensor::Start(Intel.RealSense.FrameCallback)
extern void Sensor_Start_mDFC722BBFF7EA4BBFAEFD9A19770FB24E0DD2F5C (void);
// 0x000002C5 System.Void Intel.RealSense.Sensor::Stop()
extern void Sensor_Stop_mD459FF73605C5E3BB964AC1E26CF7640C30DCCA6 (void);
// 0x000002C6 System.Void Intel.RealSense.Sensor::Close()
extern void Sensor_Close_mC8F58B024215E566860AA68F034E19DA2960564C (void);
// 0x000002C7 System.Boolean Intel.RealSense.Sensor::Is(Intel.RealSense.Extension)
extern void Sensor_Is_mDC62202E43050DE23E1FDD4B06222310FD59DA85 (void);
// 0x000002C8 T Intel.RealSense.Sensor::As()
// 0x000002C9 System.Single Intel.RealSense.Sensor::get_DepthScale()
extern void Sensor_get_DepthScale_mD3D761CF297DFAA67DF0CEAB7310B241999F7E03 (void);
// 0x000002CA Intel.RealSense.AutoExposureROI Intel.RealSense.Sensor::get_AutoExposureSettings()
extern void Sensor_get_AutoExposureSettings_mA65A3D1B87A45F1AA36CC87458C3A030AE835A6C (void);
// 0x000002CB System.Collections.ObjectModel.ReadOnlyCollection`1<Intel.RealSense.StreamProfile> Intel.RealSense.Sensor::get_StreamProfiles()
extern void Sensor_get_StreamProfiles_m2495C684F23B82E6B15B82DD931BB18221154FA3 (void);
// 0x000002CC System.Collections.ObjectModel.ReadOnlyCollection`1<Intel.RealSense.ProcessingBlock> Intel.RealSense.Sensor::get_ProcessingBlocks()
extern void Sensor_get_ProcessingBlocks_m0D7B2F2FD08072DEB5454067C57D0136FFE1DBD3 (void);
// 0x000002CD System.Void Intel.RealSense.Sensor::.cctor()
extern void Sensor__cctor_m8FEF4DDCA3F96B8ABDAE090CDA310A2A657D9C14 (void);
// 0x000002CE System.Void Intel.RealSense.Sensor/CameraInfos::.ctor(System.IntPtr)
extern void CameraInfos__ctor_m1A40507493C7B0AAD5B8715070BEA7C2DCADE916 (void);
// 0x000002CF System.String Intel.RealSense.Sensor/CameraInfos::get_Item(Intel.RealSense.CameraInfo)
extern void CameraInfos_get_Item_m20B76CBFFBA81412FDE3B79BCB261A7F492EBDF1 (void);
// 0x000002D0 System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<Intel.RealSense.CameraInfo,System.String>> Intel.RealSense.Sensor/CameraInfos::GetEnumerator()
extern void CameraInfos_GetEnumerator_m5811EA6CCF7579565D3551E38C1C9457B23E848B (void);
// 0x000002D1 System.Collections.IEnumerator Intel.RealSense.Sensor/CameraInfos::System.Collections.IEnumerable.GetEnumerator()
extern void CameraInfos_System_Collections_IEnumerable_GetEnumerator_m0D6A93D9EC40A220299CC83F67D68E6BBD7F070A (void);
// 0x000002D2 System.Void Intel.RealSense.Sensor/CameraInfos::.cctor()
extern void CameraInfos__cctor_m670ACC95ACBEC4C714798C3B9264F9901FC5798D (void);
// 0x000002D3 System.Void Intel.RealSense.Sensor/CameraInfos/<GetEnumerator>d__5::.ctor(System.Int32)
extern void U3CGetEnumeratorU3Ed__5__ctor_m6DCE0B340B8FB362E04AD6169BC127A06B64E1FA (void);
// 0x000002D4 System.Void Intel.RealSense.Sensor/CameraInfos/<GetEnumerator>d__5::System.IDisposable.Dispose()
extern void U3CGetEnumeratorU3Ed__5_System_IDisposable_Dispose_m5223E8E16C4BF4F059DBB2358FFC00692EC2C472 (void);
// 0x000002D5 System.Boolean Intel.RealSense.Sensor/CameraInfos/<GetEnumerator>d__5::MoveNext()
extern void U3CGetEnumeratorU3Ed__5_MoveNext_mB6E4B90679E75AFCB630E4AF1AAE9461F23E4060 (void);
// 0x000002D6 System.Collections.Generic.KeyValuePair`2<Intel.RealSense.CameraInfo,System.String> Intel.RealSense.Sensor/CameraInfos/<GetEnumerator>d__5::System.Collections.Generic.IEnumerator<System.Collections.Generic.KeyValuePair<Intel.RealSense.CameraInfo,System.String>>.get_Current()
extern void U3CGetEnumeratorU3Ed__5_System_Collections_Generic_IEnumeratorU3CSystem_Collections_Generic_KeyValuePairU3CIntel_RealSense_CameraInfoU2CSystem_StringU3EU3E_get_Current_m104CE4DFB83FD7B14A91CC319468A952F62C1355 (void);
// 0x000002D7 System.Void Intel.RealSense.Sensor/CameraInfos/<GetEnumerator>d__5::System.Collections.IEnumerator.Reset()
extern void U3CGetEnumeratorU3Ed__5_System_Collections_IEnumerator_Reset_mD5DC123A862E063B11EC07C17C3CED3677A7ADCA (void);
// 0x000002D8 System.Object Intel.RealSense.Sensor/CameraInfos/<GetEnumerator>d__5::System.Collections.IEnumerator.get_Current()
extern void U3CGetEnumeratorU3Ed__5_System_Collections_IEnumerator_get_Current_m6289A62168BE276D900F06FE9FDA632BF5F308C2 (void);
// 0x000002D9 System.Void Intel.RealSense.Sensor/<>c__DisplayClass21_0::.ctor()
extern void U3CU3Ec__DisplayClass21_0__ctor_m0A564D155C9F7D6EEBA26C0AC7B3C9E4A4ED3A72 (void);
// 0x000002DA System.Void Intel.RealSense.Sensor/<>c__DisplayClass21_0::<Start>b__0(System.IntPtr,System.IntPtr)
extern void U3CU3Ec__DisplayClass21_0_U3CStartU3Eb__0_m899BFA7019110866D7B608676F4E0B11E564E875 (void);
// 0x000002DB System.Void Intel.RealSense.SensorList::.ctor(System.IntPtr)
extern void SensorList__ctor_m9350F20CA413C985934E5F4E1DB3F841B87562CD (void);
// 0x000002DC System.Collections.Generic.IEnumerator`1<Intel.RealSense.Sensor> Intel.RealSense.SensorList::GetEnumerator()
extern void SensorList_GetEnumerator_mD6B02A8E893610B50B571DA877F40EFF0B262907 (void);
// 0x000002DD System.Collections.IEnumerator Intel.RealSense.SensorList::System.Collections.IEnumerable.GetEnumerator()
extern void SensorList_System_Collections_IEnumerable_GetEnumerator_m3508581FCFEED3456317A4C92D5AA9DB73E28422 (void);
// 0x000002DE System.Void Intel.RealSense.SensorList::CopyTo(System.Array,System.Int32)
extern void SensorList_CopyTo_mF63876E72983647D1499E32BBA0F4B5D4ACACE78 (void);
// 0x000002DF System.Int32 Intel.RealSense.SensorList::get_Count()
extern void SensorList_get_Count_m33B8195A3FCC38CDD27D29F414CA7D7BEC7FACFE (void);
// 0x000002E0 System.Object Intel.RealSense.SensorList::get_SyncRoot()
extern void SensorList_get_SyncRoot_mD41F16F82FA7D25F21F0D2E37A65AE7CD972E842 (void);
// 0x000002E1 System.Boolean Intel.RealSense.SensorList::get_IsSynchronized()
extern void SensorList_get_IsSynchronized_m3D7D527328E63FA2E58E2B5CBC24E3F41F626812 (void);
// 0x000002E2 Intel.RealSense.Sensor Intel.RealSense.SensorList::get_Item(System.Int32)
extern void SensorList_get_Item_m0B4F9DD244FA171604E0F99F032726DE4D7C9567 (void);
// 0x000002E3 System.Void Intel.RealSense.SensorList/<GetEnumerator>d__1::.ctor(System.Int32)
extern void U3CGetEnumeratorU3Ed__1__ctor_m00F0A220891E04B6C33164F8E5F03140C2041177 (void);
// 0x000002E4 System.Void Intel.RealSense.SensorList/<GetEnumerator>d__1::System.IDisposable.Dispose()
extern void U3CGetEnumeratorU3Ed__1_System_IDisposable_Dispose_m1C7ECF8476B3236CAA4467CE42B73F6807DE9C93 (void);
// 0x000002E5 System.Boolean Intel.RealSense.SensorList/<GetEnumerator>d__1::MoveNext()
extern void U3CGetEnumeratorU3Ed__1_MoveNext_m8B6F5D9E4DD8662B43034443716AC4B1415A6F7E (void);
// 0x000002E6 Intel.RealSense.Sensor Intel.RealSense.SensorList/<GetEnumerator>d__1::System.Collections.Generic.IEnumerator<Intel.RealSense.Sensor>.get_Current()
extern void U3CGetEnumeratorU3Ed__1_System_Collections_Generic_IEnumeratorU3CIntel_RealSense_SensorU3E_get_Current_m34CF4DB190F450E993F089126DC3AAC108A1E9A7 (void);
// 0x000002E7 System.Void Intel.RealSense.SensorList/<GetEnumerator>d__1::System.Collections.IEnumerator.Reset()
extern void U3CGetEnumeratorU3Ed__1_System_Collections_IEnumerator_Reset_mE8456A19B3EC6BAB815FBD0FFB7A8804E356C9F8 (void);
// 0x000002E8 System.Object Intel.RealSense.SensorList/<GetEnumerator>d__1::System.Collections.IEnumerator.get_Current()
extern void U3CGetEnumeratorU3Ed__1_System_Collections_IEnumerator_get_Current_mC4E3AEDBF04F0DA8ED2D2666DAAFBA235F3A2B40 (void);
// 0x000002E9 System.Void Intel.RealSense.SoftwareSensor::.ctor(System.IntPtr)
extern void SoftwareSensor__ctor_mAE910AF5A53761F5E7A0475A3BA12D83A6AF3A4F (void);
// 0x000002EA System.Void Intel.RealSense.SoftwareSensor::AddVideoFrame(Intel.RealSense.SoftwareVideoFrame)
extern void SoftwareSensor_AddVideoFrame_mFF0905C2D171BF4C0BA690F0FCDAB50D06F8E4F9 (void);
// 0x000002EB System.Void Intel.RealSense.SoftwareSensor::AddVideoFrame(T[],System.Int32,System.Int32,System.Double,Intel.RealSense.TimestampDomain,System.Int32,Intel.RealSense.VideoStreamProfile)
// 0x000002EC System.Void Intel.RealSense.SoftwareSensor::AddMotionFrame(Intel.RealSense.SoftwareMotionFrame)
extern void SoftwareSensor_AddMotionFrame_m71BDA677BC48DA1F3F08122307BDC497C1AF30B8 (void);
// 0x000002ED System.Void Intel.RealSense.SoftwareSensor::AddPoseFrame(Intel.RealSense.SoftwarePoseFrame)
extern void SoftwareSensor_AddPoseFrame_m4ACAF7ED910B6368FDDF24CD3EAFBC166B497BD8 (void);
// 0x000002EE Intel.RealSense.VideoStreamProfile Intel.RealSense.SoftwareSensor::AddVideoStream(Intel.RealSense.SoftwareVideoStream)
extern void SoftwareSensor_AddVideoStream_mEEA13AF0B87BCC0FF420C78006D3978AA6F889F8 (void);
// 0x000002EF Intel.RealSense.MotionStreamProfile Intel.RealSense.SoftwareSensor::AddMotionStream(Intel.RealSense.SoftwareMotionStream)
extern void SoftwareSensor_AddMotionStream_m054226F42624E200797F2328C86A4E58CD9EABF3 (void);
// 0x000002F0 Intel.RealSense.PoseStreamProfile Intel.RealSense.SoftwareSensor::AddPoseStream(Intel.RealSense.SoftwarePoseStream)
extern void SoftwareSensor_AddPoseStream_m9E352E4983D3D28CE3ABC22CE6730E927CF70C01 (void);
// 0x000002F1 System.Void Intel.RealSense.SoftwareSensor::SetMetadata(Intel.RealSense.FrameMetadataValue,System.Int64)
extern void SoftwareSensor_SetMetadata_mE007471C92A1447277894D8795410614E80552EA (void);
// 0x000002F2 System.Void Intel.RealSense.SoftwareSensor::AddReadOnlyOption(Intel.RealSense.Option,System.Single)
extern void SoftwareSensor_AddReadOnlyOption_m091F1CA9998424B567B5F859856B4FAC98A533FF (void);
// 0x000002F3 System.Void Intel.RealSense.SoftwareSensor::UpdateReadOnlyOption(Intel.RealSense.Option,System.Single)
extern void SoftwareSensor_UpdateReadOnlyOption_mE2625615DC2BD72B102C52CE70BF9C85BC351EC0 (void);
// 0x000002F4 System.Void Intel.RealSense.SoftwareSensor/<>c__2`1::.cctor()
// 0x000002F5 System.Void Intel.RealSense.SoftwareSensor/<>c__2`1::.ctor()
// 0x000002F6 System.Void Intel.RealSense.SoftwareSensor/<>c__2`1::<AddVideoFrame>b__2_0(System.IntPtr)
// 0x000002F7 System.Void Intel.RealSense.PoseSensor::.ctor(System.IntPtr)
extern void PoseSensor__ctor_mA62C564E1DED6125EC8B71491E174D8AAFE5E5A9 (void);
// 0x000002F8 Intel.RealSense.PoseSensor Intel.RealSense.PoseSensor::FromSensor(Intel.RealSense.Sensor)
extern void PoseSensor_FromSensor_mC4924A836C8D8A8EC440BA1167A5278ECA93CB53 (void);
// 0x000002F9 System.Byte[] Intel.RealSense.PoseSensor::ExportLocalizationMap()
extern void PoseSensor_ExportLocalizationMap_mB93754439F973C2EE9449147B0A0DE393F9540F3 (void);
// 0x000002FA System.Boolean Intel.RealSense.PoseSensor::ImportLocalizationMap(System.Byte[])
extern void PoseSensor_ImportLocalizationMap_m2A2107DEBBBAA901AA170AD59E62B18BFDA873EF (void);
// 0x000002FB System.Boolean Intel.RealSense.PoseSensor::SetStaticNode(System.String,Intel.RealSense.Math.Vector,Intel.RealSense.Math.Quaternion)
extern void PoseSensor_SetStaticNode_m3B01C072B5E096A5C6643225F33C4B9CD43CCF5F (void);
// 0x000002FC System.Boolean Intel.RealSense.PoseSensor::GetStaticNode(System.String,Intel.RealSense.Math.Vector&,Intel.RealSense.Math.Quaternion&)
extern void PoseSensor_GetStaticNode_m8D6A6EBED24EE77B1713D145A3EED018E8DFAD92 (void);
// 0x000002FD Intel.RealSense.ROI Intel.RealSense.AutoExposureROI::GetRegionOfInterest()
extern void AutoExposureROI_GetRegionOfInterest_m5FBB4F9CBA27233E672F45DE15F1185ACB656DBA (void);
// 0x000002FE System.Void Intel.RealSense.AutoExposureROI::SetRegionOfInterest(Intel.RealSense.ROI)
extern void AutoExposureROI_SetRegionOfInterest_mFB1924CC42FD335650D0DF5020B1211925C6BAD4 (void);
// 0x000002FF System.Void Intel.RealSense.AutoExposureROI::.ctor()
extern void AutoExposureROI__ctor_mB3D6930A23FDDD2A3C9E41C6F6C0E406D9BF8C85 (void);
// 0x00000300 System.Void Intel.RealSense.FrameCallback::.ctor(System.Object,System.IntPtr)
extern void FrameCallback__ctor_m354B1E847C20129E9151A191DCDA77F9B2CEFB46 (void);
// 0x00000301 System.Void Intel.RealSense.FrameCallback::Invoke(Intel.RealSense.Frame)
extern void FrameCallback_Invoke_m960F646C59099FC30777D80B8F8494929B9ACFD2 (void);
// 0x00000302 System.IAsyncResult Intel.RealSense.FrameCallback::BeginInvoke(Intel.RealSense.Frame,System.AsyncCallback,System.Object)
extern void FrameCallback_BeginInvoke_m26F2EF3C34391D2CB96354EC4F05A7347C459263 (void);
// 0x00000303 System.Void Intel.RealSense.FrameCallback::EndInvoke(System.IAsyncResult)
extern void FrameCallback_EndInvoke_mD7F48892748E545185953171D2C869E6D4A9FC56 (void);
// 0x00000304 System.Void Intel.RealSense.frame_callback::.ctor(System.Object,System.IntPtr)
extern void frame_callback__ctor_m617FAC0C1B0F1BA3DB8B09E66A9AF20972AACF60 (void);
// 0x00000305 System.Void Intel.RealSense.frame_callback::Invoke(System.IntPtr,System.IntPtr)
extern void frame_callback_Invoke_m5EEBA6EFD272540A4EA8B81CCA30F25DB7FF30F2 (void);
// 0x00000306 System.IAsyncResult Intel.RealSense.frame_callback::BeginInvoke(System.IntPtr,System.IntPtr,System.AsyncCallback,System.Object)
extern void frame_callback_BeginInvoke_m5F56063EA0ED66B5983B9F7F201884C8ABC1A077 (void);
// 0x00000307 System.Void Intel.RealSense.frame_callback::EndInvoke(System.IAsyncResult)
extern void frame_callback_EndInvoke_mFD47334E72DE3D3E44321381EE6269F0F13A2893 (void);
// 0x00000308 System.Void Intel.RealSense.frame_processor_callback::.ctor(System.Object,System.IntPtr)
extern void frame_processor_callback__ctor_m438A19B40B879F633681F1928F53BAB3B794B60B (void);
// 0x00000309 System.Void Intel.RealSense.frame_processor_callback::Invoke(System.IntPtr,System.IntPtr,System.IntPtr)
extern void frame_processor_callback_Invoke_m546EBAE06E068D08B861EBB6C088A72BC982FD33 (void);
// 0x0000030A System.IAsyncResult Intel.RealSense.frame_processor_callback::BeginInvoke(System.IntPtr,System.IntPtr,System.IntPtr,System.AsyncCallback,System.Object)
extern void frame_processor_callback_BeginInvoke_mC2E9278C54E366E9CAAE14C324B43E455D716A65 (void);
// 0x0000030B System.Void Intel.RealSense.frame_processor_callback::EndInvoke(System.IAsyncResult)
extern void frame_processor_callback_EndInvoke_m65012EA8D4A5C109ED79BB00828B1472B170DB70 (void);
// 0x0000030C System.Void Intel.RealSense.frame_deleter::.ctor(System.Object,System.IntPtr)
extern void frame_deleter__ctor_m6B7222FF0DD26BE60F353A584D3F4D33D1674678 (void);
// 0x0000030D System.Void Intel.RealSense.frame_deleter::Invoke(System.IntPtr)
extern void frame_deleter_Invoke_m7561652636F0D1E3B70DA57691624454C26959D4 (void);
// 0x0000030E System.IAsyncResult Intel.RealSense.frame_deleter::BeginInvoke(System.IntPtr,System.AsyncCallback,System.Object)
extern void frame_deleter_BeginInvoke_m06BEB228DEE381AE4A75504B21870FE574D1B7C7 (void);
// 0x0000030F System.Void Intel.RealSense.frame_deleter::EndInvoke(System.IAsyncResult)
extern void frame_deleter_EndInvoke_m34008B2EFC547F6ED9BEA39543EB1E9B7B121114 (void);
// 0x00000310 System.Void Intel.RealSense.rs2_devices_changed_callback::.ctor(System.Object,System.IntPtr)
extern void rs2_devices_changed_callback__ctor_m365B2C1EFB242BD1727B6F4377D02C3B7A6E0A3B (void);
// 0x00000311 System.Void Intel.RealSense.rs2_devices_changed_callback::Invoke(System.IntPtr,System.IntPtr,System.IntPtr)
extern void rs2_devices_changed_callback_Invoke_m18FCB0AF9FFBB40D57B741FE2EF95DF4EFFBC22B (void);
// 0x00000312 System.IAsyncResult Intel.RealSense.rs2_devices_changed_callback::BeginInvoke(System.IntPtr,System.IntPtr,System.IntPtr,System.AsyncCallback,System.Object)
extern void rs2_devices_changed_callback_BeginInvoke_m42049D26441860036AE2375D59BAB597B224345E (void);
// 0x00000313 System.Void Intel.RealSense.rs2_devices_changed_callback::EndInvoke(System.IAsyncResult)
extern void rs2_devices_changed_callback_EndInvoke_m2D671B7DD473C926CD3F1958608A7B04ED95B6E6 (void);
// 0x00000314 System.Void Intel.RealSense.rs2_update_progress_callback::.ctor(System.Object,System.IntPtr)
extern void rs2_update_progress_callback__ctor_m4177FBDF045840F22F20E45C625385B7EC0AC18B (void);
// 0x00000315 System.Void Intel.RealSense.rs2_update_progress_callback::Invoke(System.Single,System.IntPtr)
extern void rs2_update_progress_callback_Invoke_mEB4F43AA000AF5C68C61D1C8408A54E0333188A9 (void);
// 0x00000316 System.IAsyncResult Intel.RealSense.rs2_update_progress_callback::BeginInvoke(System.Single,System.IntPtr,System.AsyncCallback,System.Object)
extern void rs2_update_progress_callback_BeginInvoke_m958DEDFB7260C8E2857A6F533624960F6F7CE87A (void);
// 0x00000317 System.Void Intel.RealSense.rs2_update_progress_callback::EndInvoke(System.IAsyncResult)
extern void rs2_update_progress_callback_EndInvoke_m50FB7051B8857E05F5F00A8A7F71473B6519F693 (void);
// 0x00000318 System.String Intel.RealSense.Intrinsics::ToString()
extern void Intrinsics_ToString_m1EC19569E3A28C1E87695007C535124C2612454F (void);
// 0x00000319 System.Single[] Intel.RealSense.Intrinsics::get_FOV()
extern void Intrinsics_get_FOV_mCD5633FD7EA2692854593F3D726F4F523DA417DB (void);
// 0x0000031A System.Void Intel.RealSense.SoftwareVideoFrame::.ctor()
extern void SoftwareVideoFrame__ctor_mE348DBD924376C236983F6F3348DCE679BD9E56B (void);
// 0x0000031B System.Void Intel.RealSense.SoftwareVideoFrame/<>c::.cctor()
extern void U3CU3Ec__cctor_mDE20E6B41EFB2BBE338464D8CF777828C446D44B (void);
// 0x0000031C System.Void Intel.RealSense.SoftwareVideoFrame/<>c::.ctor()
extern void U3CU3Ec__ctor_m03BA5A377312A9051CBFDFC2CB505C4258B5846A (void);
// 0x0000031D System.Void Intel.RealSense.SoftwareVideoFrame/<>c::<.ctor>b__8_0(System.IntPtr)
extern void U3CU3Ec_U3C_ctorU3Eb__8_0_m3EA1C499678CE1BBFB113F9CC2AF179C4CB81CC6 (void);
// 0x0000031E System.Void Intel.RealSense.SoftwarePoseFrame::.ctor()
extern void SoftwarePoseFrame__ctor_m46B4AA59F8BA69418C35215F3BDE870D72494A6C (void);
// 0x0000031F System.Void Intel.RealSense.SoftwarePoseFrame/PoseFrameInfo::.ctor()
extern void PoseFrameInfo__ctor_mBBEE6585B1060658A9E5EFCDDE2967E7BA780021 (void);
// 0x00000320 System.Void Intel.RealSense.SoftwarePoseFrame/<>c::.cctor()
extern void U3CU3Ec__cctor_mC375E0C6DC1014573061384805B2D59CC085ED36 (void);
// 0x00000321 System.Void Intel.RealSense.SoftwarePoseFrame/<>c::.ctor()
extern void U3CU3Ec__ctor_mD3658EE5C04AABC796710ED15251916DDC7E220E (void);
// 0x00000322 System.Void Intel.RealSense.SoftwarePoseFrame/<>c::<.ctor>b__8_0(System.IntPtr)
extern void U3CU3Ec_U3C_ctorU3Eb__8_0_mA68D18E0A12FB12E4B57EC6C024E35816DFD958C (void);
// 0x00000323 System.Void Intel.RealSense.SoftwareMotionFrame::.ctor()
extern void SoftwareMotionFrame__ctor_m5B700BF4766D849BAE2994093C28D7305E906D77 (void);
// 0x00000324 System.Void Intel.RealSense.SoftwareMotionFrame/<>c::.cctor()
extern void U3CU3Ec__cctor_mD6D48DE66926F39274E43884C618395694325709 (void);
// 0x00000325 System.Void Intel.RealSense.SoftwareMotionFrame/<>c::.ctor()
extern void U3CU3Ec__ctor_m501B7F74797A73F8693BD06FBCE19D668353FC87 (void);
// 0x00000326 System.Void Intel.RealSense.SoftwareMotionFrame/<>c::<.ctor>b__6_0(System.IntPtr)
extern void U3CU3Ec_U3C_ctorU3Eb__6_0_mF6660287FEA3850596CF18B1E938B83BBE8CE580 (void);
// 0x00000327 System.Void Intel.RealSense.Pose::.ctor()
extern void Pose__ctor_m1443039F19C19D730623BF387027CFB52D03D829 (void);
// 0x00000328 System.Int32 Intel.RealSense.InfoCollection::get_Count()
extern void InfoCollection_get_Count_m6529120B6D1CFE243DEE995706ED95164F5E0899 (void);
// 0x00000329 System.Void Intel.RealSense.InfoCollection::.ctor(Intel.RealSense.InfoCollection/SupportsDelegate,Intel.RealSense.InfoCollection/GetInfoDelegate,System.IntPtr)
extern void InfoCollection__ctor_m2862CD4104A5477E5A9D94AB51C94F58978923E0 (void);
// 0x0000032A System.String Intel.RealSense.InfoCollection::GetInfo(Intel.RealSense.CameraInfo)
extern void InfoCollection_GetInfo_m018400A298BA4BFB6266691E028579BA09412D6F (void);
// 0x0000032B System.Boolean Intel.RealSense.InfoCollection::Supports(Intel.RealSense.CameraInfo)
extern void InfoCollection_Supports_m3C5D898A1C74C0ECF06A4DDC2A310A80799214B1 (void);
// 0x0000032C System.String Intel.RealSense.InfoCollection::get_Item(Intel.RealSense.CameraInfo)
extern void InfoCollection_get_Item_m4B597199E8D463605288739DC5CF4D93B8C98D71 (void);
// 0x0000032D System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<Intel.RealSense.CameraInfo,System.String>> Intel.RealSense.InfoCollection::GetEnumerator()
extern void InfoCollection_GetEnumerator_m83AE5D867C8A6CA373AE7A36C7BD30C20B8CD161 (void);
// 0x0000032E System.Collections.IEnumerator Intel.RealSense.InfoCollection::System.Collections.IEnumerable.GetEnumerator()
extern void InfoCollection_System_Collections_IEnumerable_GetEnumerator_m54523B48BD924F8E373DDF04C9CD76C05677CE43 (void);
// 0x0000032F System.Void Intel.RealSense.InfoCollection::.cctor()
extern void InfoCollection__cctor_mB481E62BA11BEE3DF82BB3D430D7020C74EC065B (void);
// 0x00000330 System.Collections.Generic.KeyValuePair`2<Intel.RealSense.CameraInfo,System.String>[] Intel.RealSense.InfoCollection/InfoCollectionDebugView::get_Items()
extern void InfoCollectionDebugView_get_Items_m9138BDD53B0FCEF6EF342E9913F74C892DBA3D33 (void);
// 0x00000331 System.Void Intel.RealSense.InfoCollection/InfoCollectionDebugView::.ctor(Intel.RealSense.InfoCollection)
extern void InfoCollectionDebugView__ctor_m2746D22D27B4840950A2AD5DFEBB78CE1D514AB2 (void);
// 0x00000332 System.Void Intel.RealSense.InfoCollection/GetInfoDelegate::.ctor(System.Object,System.IntPtr)
extern void GetInfoDelegate__ctor_m856290BEF7E827FFD7467F3E306EA49BCF754F2B (void);
// 0x00000333 System.IntPtr Intel.RealSense.InfoCollection/GetInfoDelegate::Invoke(System.IntPtr,Intel.RealSense.CameraInfo,System.Object&)
extern void GetInfoDelegate_Invoke_m1D4DE6A5220A9015C8C024A6073A6B97D42E24EC (void);
// 0x00000334 System.IAsyncResult Intel.RealSense.InfoCollection/GetInfoDelegate::BeginInvoke(System.IntPtr,Intel.RealSense.CameraInfo,System.Object&,System.AsyncCallback,System.Object)
extern void GetInfoDelegate_BeginInvoke_m735A28944864D5551E6ACBE7294A7BFF07EA8281 (void);
// 0x00000335 System.IntPtr Intel.RealSense.InfoCollection/GetInfoDelegate::EndInvoke(System.Object&,System.IAsyncResult)
extern void GetInfoDelegate_EndInvoke_m5957DE72C994D8F44132F9BB6E17199E24BD958D (void);
// 0x00000336 System.Void Intel.RealSense.InfoCollection/SupportsDelegate::.ctor(System.Object,System.IntPtr)
extern void SupportsDelegate__ctor_m5CE97BE47446D4E5A8D002D80F5B4E9C0F78E8C0 (void);
// 0x00000337 System.Int32 Intel.RealSense.InfoCollection/SupportsDelegate::Invoke(System.IntPtr,Intel.RealSense.CameraInfo,System.Object&)
extern void SupportsDelegate_Invoke_mC92658F95B0BC5818216A38776E158B54632AF3B (void);
// 0x00000338 System.IAsyncResult Intel.RealSense.InfoCollection/SupportsDelegate::BeginInvoke(System.IntPtr,Intel.RealSense.CameraInfo,System.Object&,System.AsyncCallback,System.Object)
extern void SupportsDelegate_BeginInvoke_m2926AB3763CEF8A0105629AF7279F89E1BB69821 (void);
// 0x00000339 System.Int32 Intel.RealSense.InfoCollection/SupportsDelegate::EndInvoke(System.Object&,System.IAsyncResult)
extern void SupportsDelegate_EndInvoke_m5935A74574791D9F743ECF6AF7345387B151BF95 (void);
// 0x0000033A System.Void Intel.RealSense.InfoCollection/<GetEnumerator>d__14::.ctor(System.Int32)
extern void U3CGetEnumeratorU3Ed__14__ctor_mF0A124B44054BB8EFA9B9F510B34876C9F280B8D (void);
// 0x0000033B System.Void Intel.RealSense.InfoCollection/<GetEnumerator>d__14::System.IDisposable.Dispose()
extern void U3CGetEnumeratorU3Ed__14_System_IDisposable_Dispose_mE679D458BA134456E8AB5DA0D38891F968D6A13C (void);
// 0x0000033C System.Boolean Intel.RealSense.InfoCollection/<GetEnumerator>d__14::MoveNext()
extern void U3CGetEnumeratorU3Ed__14_MoveNext_m8D5A6EABCB8C77EF21B499B166CE5CC6D338B450 (void);
// 0x0000033D System.Collections.Generic.KeyValuePair`2<Intel.RealSense.CameraInfo,System.String> Intel.RealSense.InfoCollection/<GetEnumerator>d__14::System.Collections.Generic.IEnumerator<System.Collections.Generic.KeyValuePair<Intel.RealSense.CameraInfo,System.String>>.get_Current()
extern void U3CGetEnumeratorU3Ed__14_System_Collections_Generic_IEnumeratorU3CSystem_Collections_Generic_KeyValuePairU3CIntel_RealSense_CameraInfoU2CSystem_StringU3EU3E_get_Current_mF743FD979535545A8523F9055F9EB4F6B60783A1 (void);
// 0x0000033E System.Void Intel.RealSense.InfoCollection/<GetEnumerator>d__14::System.Collections.IEnumerator.Reset()
extern void U3CGetEnumeratorU3Ed__14_System_Collections_IEnumerator_Reset_m8A7F6B1A8E72AFE1E153298A60678E207B3F0646 (void);
// 0x0000033F System.Object Intel.RealSense.InfoCollection/<GetEnumerator>d__14::System.Collections.IEnumerator.get_Current()
extern void U3CGetEnumeratorU3Ed__14_System_Collections_IEnumerator_get_Current_m46DFAF5ACD6893BDDC194D6E11B9D96A8A0357AF (void);
// 0x00000340 System.Void Intel.RealSense.FwLog::.ctor(System.IntPtr)
extern void FwLog__ctor_m3E224F95A9241D5D1B19CE1407A8E7DA9BA4657D (void);
// 0x00000341 Intel.RealSense.FwLog Intel.RealSense.FwLog::Create(System.IntPtr)
extern void FwLog_Create_m2AE3B767626C1895A3759C27755B19548280D834 (void);
// 0x00000342 System.Byte[] Intel.RealSense.FwLog::GetData()
extern void FwLog_GetData_m0433172D8357A77EDB6F47569AF5D5D0019B0DEA (void);
// 0x00000343 System.Int32 Intel.RealSense.FwLog::GetSize()
extern void FwLog_GetSize_mF0FD8CE6C008ED3107471AC36275EC76E15DAAA8 (void);
// 0x00000344 System.UInt32 Intel.RealSense.FwLog::GetTimestamp()
extern void FwLog_GetTimestamp_m2469348154BF011A9BE54DD8F90ECE1DCD86BC1E (void);
// 0x00000345 Intel.RealSense.LogSeverity Intel.RealSense.FwLog::GetSeverity()
extern void FwLog_GetSeverity_m241A61910969C34BD76E5746EE694C9CA906C3D4 (void);
// 0x00000346 System.Void Intel.RealSense.FwParsedLog::.ctor(System.IntPtr)
extern void FwParsedLog__ctor_m1D6AC49AE14AC96488ACD1651AFFAF7D63A78D9A (void);
// 0x00000347 Intel.RealSense.FwParsedLog Intel.RealSense.FwParsedLog::Create(System.IntPtr)
extern void FwParsedLog_Create_m0BA9F27B6160E22E8A737E393FE6C306EE07445E (void);
// 0x00000348 System.String Intel.RealSense.FwParsedLog::GetMessage()
extern void FwParsedLog_GetMessage_m07DBB1158704C5015DFCC7E24C8080D0634EB2A7 (void);
// 0x00000349 System.String Intel.RealSense.FwParsedLog::GetFileName()
extern void FwParsedLog_GetFileName_m75FE3FEC01B6B7016CB64158ED40A0689503DC8F (void);
// 0x0000034A System.String Intel.RealSense.FwParsedLog::GetThreadName()
extern void FwParsedLog_GetThreadName_m2FD3E85DB844BB98F03D88D2433DF618A61710DC (void);
// 0x0000034B Intel.RealSense.LogSeverity Intel.RealSense.FwParsedLog::GetSeverity()
extern void FwParsedLog_GetSeverity_m15CE52DD3813B3B88F9315B1DC4F127B0C99F073 (void);
// 0x0000034C System.UInt32 Intel.RealSense.FwParsedLog::GetLine()
extern void FwParsedLog_GetLine_m30B4917004F9835D28B0D62223ABAB4EDFA0BB18 (void);
// 0x0000034D System.UInt32 Intel.RealSense.FwParsedLog::GetTimestamp()
extern void FwParsedLog_GetTimestamp_m0BACF4BBD4D60F239076A7CABD9E7A8081715D31 (void);
// 0x0000034E System.Void Intel.RealSense.TerminalParser::.ctor(System.String)
extern void TerminalParser__ctor_m9DAF9C1291BD3101462E601275A1464689B3A6DB (void);
// 0x0000034F System.IntPtr Intel.RealSense.TerminalParser::Create(System.String)
extern void TerminalParser_Create_mFF67326CFD518AC3EAF758DDFB054FF5A3311E7C (void);
// 0x00000350 System.Byte[] Intel.RealSense.TerminalParser::ParseCommand(System.String)
extern void TerminalParser_ParseCommand_m65E43713C7323382DA906D1EF2CB3D472F375E1C (void);
// 0x00000351 System.String Intel.RealSense.TerminalParser::ParseResponse(System.String,System.Byte[])
extern void TerminalParser_ParseResponse_mE4D355349E3937728DDB1D497E1D45DFC553438F (void);
// 0x00000352 System.Runtime.InteropServices.ICustomMarshaler Intel.RealSense.ErrorMarshaler::GetInstance(System.String)
extern void ErrorMarshaler_GetInstance_m71B76E54BFF3C6F2A671A8D6BFE12D41855AA824 (void);
// 0x00000353 System.Void Intel.RealSense.ErrorMarshaler::CleanUpManagedData(System.Object)
extern void ErrorMarshaler_CleanUpManagedData_mC7CB3712CA81F9E5EFD23702FE15AA5C7D7C3E20 (void);
// 0x00000354 System.Void Intel.RealSense.ErrorMarshaler::CleanUpNativeData(System.IntPtr)
extern void ErrorMarshaler_CleanUpNativeData_m396E99B68592F5A7F082D39BDA51762E6AFBD14D (void);
// 0x00000355 System.Int32 Intel.RealSense.ErrorMarshaler::GetNativeDataSize()
extern void ErrorMarshaler_GetNativeDataSize_mC8D48CA4726912A8A21206FAD539763B73425F11 (void);
// 0x00000356 System.IntPtr Intel.RealSense.ErrorMarshaler::MarshalManagedToNative(System.Object)
extern void ErrorMarshaler_MarshalManagedToNative_mBC4FD4DDA2D68F54E4879FCC1D12F3DA5FC5D3D3 (void);
// 0x00000357 System.Object Intel.RealSense.ErrorMarshaler::MarshalNativeToManaged(System.IntPtr)
extern void ErrorMarshaler_MarshalNativeToManaged_m5F0249135E448E34537B2858041C8C9F7FCD2196 (void);
// 0x00000358 System.Void Intel.RealSense.ErrorMarshaler::.ctor()
extern void ErrorMarshaler__ctor_m3813EA5C7E717E2FF3A221CC56496EA50C628CC3 (void);
// 0x00000359 System.Collections.Generic.Stack`1<Intel.RealSense.Base.PooledObject> Intel.RealSense.ObjectPool::GetPool(System.Type)
extern void ObjectPool_GetPool_m5E014F548B4940CA5464112AA50168280BA4D888 (void);
// 0x0000035A System.Object Intel.RealSense.ObjectPool::CreateInstance(System.Type,System.IntPtr)
extern void ObjectPool_CreateInstance_m18D87CC1FFB00BDFEBA8AE2917368C2D255DDC38 (void);
// 0x0000035B System.Object Intel.RealSense.ObjectPool::Get(System.Type,System.IntPtr)
extern void ObjectPool_Get_mCDB62BABAA7AE74119060EDAFEE74CCC5044E836 (void);
// 0x0000035C T Intel.RealSense.ObjectPool::Get(System.IntPtr)
// 0x0000035D System.Void Intel.RealSense.ObjectPool::Release(T)
// 0x0000035E System.Void Intel.RealSense.ObjectPool::.cctor()
extern void ObjectPool__cctor_m87FBB77BD52F97B3286EF9C9DA6549B369B1D387 (void);
// 0x0000035F System.Boolean Intel.RealSense.ObjectPool/TypeComparer::Equals(System.Type,System.Type)
extern void TypeComparer_Equals_mDE77B516A1C6A911A492C8705176CC4850B71263 (void);
// 0x00000360 System.Int32 Intel.RealSense.ObjectPool/TypeComparer::GetHashCode(System.Type)
extern void TypeComparer_GetHashCode_mEEA4F98A4E7467BFB07DD525B1774051C00D2DAF (void);
// 0x00000361 System.Void Intel.RealSense.ObjectPool/TypeComparer::.ctor()
extern void TypeComparer__ctor_mA08306E3D74D5BE8A41E9183CA280A28A297C223 (void);
// 0x00000362 System.Void Intel.RealSense.ObjectPool/TypeComparer::.cctor()
extern void TypeComparer__cctor_m01E4232CC1839A711E402172BD293FBDA8269810 (void);
// 0x00000363 System.Void Intel.RealSense.Log::ToConsole(Intel.RealSense.LogSeverity)
extern void Log_ToConsole_m85F7A7F2DB32C5E589232F8CE333E4D15EE1E225 (void);
// 0x00000364 System.Void Intel.RealSense.Log::ToFile(Intel.RealSense.LogSeverity,System.String)
extern void Log_ToFile_m6DC3356997504B0D9195C51EAD0B31F4F923F521 (void);
// 0x00000365 System.Void Intel.RealSense.Log::LogMessage(Intel.RealSense.LogSeverity,System.String)
extern void Log_LogMessage_mC03DC3B86ABF9EA02CE6197490B2598E60A22A44 (void);
// 0x00000366 System.Void Intel.RealSense.ICompositeDisposable::AddDisposable(System.IDisposable)
// 0x00000367 T Intel.RealSense.DisposableExtensions::DisposeWith(T,Intel.RealSense.ICompositeDisposable)
// 0x00000368 Intel.RealSense.Option Intel.RealSense.IOption::get_Key()
// 0x00000369 System.Single Intel.RealSense.IOption::get_Value()
// 0x0000036A System.Void Intel.RealSense.IOption::set_Value(System.Single)
// 0x0000036B System.Single Intel.RealSense.IOption::get_Min()
// 0x0000036C System.Single Intel.RealSense.IOption::get_Max()
// 0x0000036D System.Single Intel.RealSense.IOption::get_Step()
// 0x0000036E System.Single Intel.RealSense.IOption::get_Default()
// 0x0000036F System.Boolean Intel.RealSense.IOption::get_ReadOnly()
// 0x00000370 System.String Intel.RealSense.IOption::get_Description()
// 0x00000371 System.String Intel.RealSense.IOption::get_ValueDescription()
// 0x00000372 Intel.RealSense.IOptionsContainer Intel.RealSense.IOptions::get_Options()
// 0x00000373 Intel.RealSense.IOption Intel.RealSense.IOptionsContainer::get_Item(Intel.RealSense.Option)
// 0x00000374 System.Boolean Intel.RealSense.IOptionsContainer::Supports(Intel.RealSense.Option)
// 0x00000375 System.String Intel.RealSense.IOptionsContainer::OptionValueDescription(Intel.RealSense.Option,System.Single)
// 0x00000376 System.Int32 Intel.RealSense.OptionsList::get_Count()
extern void OptionsList_get_Count_mC206026C322760D9C08CB7342F5810F8E8869824 (void);
// 0x00000377 System.Object Intel.RealSense.OptionsList::get_SyncRoot()
extern void OptionsList_get_SyncRoot_m925EDA0386DC4C0A07CBD6246DA09BCBD69A0F38 (void);
// 0x00000378 System.Boolean Intel.RealSense.OptionsList::get_IsSynchronized()
extern void OptionsList_get_IsSynchronized_mB491913DB8E7D4756AB496AADFA70877E0BCFA6A (void);
// 0x00000379 System.IntPtr Intel.RealSense.OptionsList::Create(System.IntPtr)
extern void OptionsList_Create_m9537E3EA3F6D72C804670B9E8B7C66CE04841A91 (void);
// 0x0000037A System.Void Intel.RealSense.OptionsList::.ctor(System.IntPtr)
extern void OptionsList__ctor_m13F0A742D7E01D280C56C1CF6C25B07E4AA07F47 (void);
// 0x0000037B Intel.RealSense.IOption Intel.RealSense.OptionsList::get_Item(Intel.RealSense.Option)
extern void OptionsList_get_Item_mA7F5C432AD276A572B10EE1D1D5BED4FE3D7893F (void);
// 0x0000037C System.Boolean Intel.RealSense.OptionsList::Supports(Intel.RealSense.Option)
extern void OptionsList_Supports_mC341A149D1146AA0BC6B18BA6C78C1D65EFAEF74 (void);
// 0x0000037D System.String Intel.RealSense.OptionsList::OptionValueDescription(Intel.RealSense.Option,System.Single)
extern void OptionsList_OptionValueDescription_m52D2494A442429CCB02C9FA271147664D7C573F0 (void);
// 0x0000037E System.Collections.Generic.IEnumerator`1<Intel.RealSense.IOption> Intel.RealSense.OptionsList::GetEnumerator()
extern void OptionsList_GetEnumerator_m8E22C4434DF2ED8B39AD467547E716F9F50FAE77 (void);
// 0x0000037F System.Collections.IEnumerator Intel.RealSense.OptionsList::System.Collections.IEnumerable.GetEnumerator()
extern void OptionsList_System_Collections_IEnumerable_GetEnumerator_mD411AFAFF93E4E14765567AEA7BF9B4235B5F84E (void);
// 0x00000380 System.Void Intel.RealSense.OptionsList::CopyTo(System.Array,System.Int32)
extern void OptionsList_CopyTo_mC2C08118B26A45BDD31A8F31270A25A3298B9112 (void);
// 0x00000381 Intel.RealSense.IOption[] Intel.RealSense.OptionsList/OptionsListDebugView::get_Items()
extern void OptionsListDebugView_get_Items_mFA775D80AA311365749E60D271F6A1DF3D8A74B7 (void);
// 0x00000382 System.Void Intel.RealSense.OptionsList/OptionsListDebugView::.ctor(Intel.RealSense.OptionsList)
extern void OptionsListDebugView__ctor_m3E62B61EC361D62553E937C8A348172112E0780F (void);
// 0x00000383 System.Void Intel.RealSense.OptionsList/<GetEnumerator>d__14::.ctor(System.Int32)
extern void U3CGetEnumeratorU3Ed__14__ctor_m22A827DAF7C4DC41545BA18862F39BA70FBAE68E (void);
// 0x00000384 System.Void Intel.RealSense.OptionsList/<GetEnumerator>d__14::System.IDisposable.Dispose()
extern void U3CGetEnumeratorU3Ed__14_System_IDisposable_Dispose_mE7FEB0486BBCBFFDA06A6B0CE03DDBD6EBA49BC3 (void);
// 0x00000385 System.Boolean Intel.RealSense.OptionsList/<GetEnumerator>d__14::MoveNext()
extern void U3CGetEnumeratorU3Ed__14_MoveNext_m08E5D45198916DCF0F46DD97CC2F2F222ED3BA5C (void);
// 0x00000386 Intel.RealSense.IOption Intel.RealSense.OptionsList/<GetEnumerator>d__14::System.Collections.Generic.IEnumerator<Intel.RealSense.IOption>.get_Current()
extern void U3CGetEnumeratorU3Ed__14_System_Collections_Generic_IEnumeratorU3CIntel_RealSense_IOptionU3E_get_Current_m43B786BD219FC4EA8CFAFCC8E9D1B3B1BE8071FD (void);
// 0x00000387 System.Void Intel.RealSense.OptionsList/<GetEnumerator>d__14::System.Collections.IEnumerator.Reset()
extern void U3CGetEnumeratorU3Ed__14_System_Collections_IEnumerator_Reset_m431915313DC202404742CD1B7A14E2B159124D6F (void);
// 0x00000388 System.Object Intel.RealSense.OptionsList/<GetEnumerator>d__14::System.Collections.IEnumerator.get_Current()
extern void U3CGetEnumeratorU3Ed__14_System_Collections_IEnumerator_get_Current_m434103F141A42096830BC2486DDEF98732B64AB2 (void);
// 0x00000389 System.Void Intel.RealSense.OptionInternal::.ctor(System.IntPtr,Intel.RealSense.Option)
extern void OptionInternal__ctor_m0E08310B0247757B9BBDB07BEC1D0FB1277AA7A9 (void);
// 0x0000038A System.String Intel.RealSense.OptionInternal::get_Description()
extern void OptionInternal_get_Description_m2AE4AC80AB8B24B384BA957BFBFF13081AB41D68 (void);
// 0x0000038B System.Single Intel.RealSense.OptionInternal::get_Value()
extern void OptionInternal_get_Value_m071FB97659CD8FA38B08FA4FCDEF7107E43D0EAC (void);
// 0x0000038C System.Void Intel.RealSense.OptionInternal::set_Value(System.Single)
extern void OptionInternal_set_Value_m55146946396657E09A4ED1CDF10940C99FF27599 (void);
// 0x0000038D System.String Intel.RealSense.OptionInternal::GetValueDescription(System.Single)
extern void OptionInternal_GetValueDescription_m309395029D6FDF192E34A69ABFEEE46DB757DB1E (void);
// 0x0000038E Intel.RealSense.Option Intel.RealSense.OptionInternal::get_Key()
extern void OptionInternal_get_Key_m5C88F38792F6FF8CA053935268071DBE184A75AA (void);
// 0x0000038F System.Single Intel.RealSense.OptionInternal::get_Min()
extern void OptionInternal_get_Min_m8F000E071C2782E45585D268E0DB96132DAEBEB3 (void);
// 0x00000390 System.Single Intel.RealSense.OptionInternal::get_Max()
extern void OptionInternal_get_Max_mD169BA520876157EB25BD39F0CE9F6D8516C8890 (void);
// 0x00000391 System.Single Intel.RealSense.OptionInternal::get_Step()
extern void OptionInternal_get_Step_mAD7B167B84AA43003E4ECBC07AC80D76C7DF0C8D (void);
// 0x00000392 System.Single Intel.RealSense.OptionInternal::get_Default()
extern void OptionInternal_get_Default_m770ADBC74AEBAF7961FEFADD2F06DD9D5963963D (void);
// 0x00000393 System.String Intel.RealSense.OptionInternal::get_ValueDescription()
extern void OptionInternal_get_ValueDescription_m7873A85314048DEFEA1C1779AEFD4A97FDE05EE2 (void);
// 0x00000394 System.Boolean Intel.RealSense.OptionInternal::get_ReadOnly()
extern void OptionInternal_get_ReadOnly_m536A3B94D3028598A959654118A2A57016EAF08E (void);
// 0x00000395 System.Void Intel.RealSense.Base.Deleter::.ctor(System.Object,System.IntPtr)
extern void Deleter__ctor_mABCF8707A24D88DBE18C71276BE7FC9D119689E0 (void);
// 0x00000396 System.Void Intel.RealSense.Base.Deleter::Invoke(System.IntPtr)
extern void Deleter_Invoke_mA8A03EB1902848639734C12700F4D7A3863461F9 (void);
// 0x00000397 System.IAsyncResult Intel.RealSense.Base.Deleter::BeginInvoke(System.IntPtr,System.AsyncCallback,System.Object)
extern void Deleter_BeginInvoke_m32FABC2737A1266A870A231071697F3DC9C22ED8 (void);
// 0x00000398 System.Void Intel.RealSense.Base.Deleter::EndInvoke(System.IAsyncResult)
extern void Deleter_EndInvoke_m6BE3A185CCC34048A4FBCFCD0F169104275D665B (void);
// 0x00000399 System.IntPtr Intel.RealSense.Base.DeleterHandle::get_Handle()
extern void DeleterHandle_get_Handle_mEFA023D4C0FCEDD5DA1FFC2C169E0AEE09296DE5 (void);
// 0x0000039A System.Boolean Intel.RealSense.Base.DeleterHandle::get_IsInvalid()
extern void DeleterHandle_get_IsInvalid_m5C9C1AC778079EFCEFCCCEEB1960D0DA6578D7AA (void);
// 0x0000039B System.Void Intel.RealSense.Base.DeleterHandle::.ctor(System.IntPtr,Intel.RealSense.Base.Deleter)
extern void DeleterHandle__ctor_mB4FDBAF55535905DB8B44DC1DB62A2F7B59B6AC9 (void);
// 0x0000039C System.Void Intel.RealSense.Base.DeleterHandle::SetHandleAsInvalid()
extern void DeleterHandle_SetHandleAsInvalid_mEA1B0CBC00948AEEA9480443109FE94CC2BA96DF (void);
// 0x0000039D System.Void Intel.RealSense.Base.DeleterHandle::Dispose()
extern void DeleterHandle_Dispose_mD4F4C5C3E5A65AABBCBBE7A5822CEBA139EA083D (void);
// 0x0000039E System.Void Intel.RealSense.Base.DeleterHandle::Dispose(System.Boolean)
extern void DeleterHandle_Dispose_mD3A0D35A7E37D2E56FD8761EE23983C377BC9D3C (void);
// 0x0000039F System.Void Intel.RealSense.Base.DeleterHandle::Reset(System.IntPtr)
extern void DeleterHandle_Reset_mE2ECBF662DA2146EFC3092268537B77DCD6C662D (void);
// 0x000003A0 System.Void Intel.RealSense.Base.DeleterHandle::Reset(System.IntPtr,Intel.RealSense.Base.Deleter)
extern void DeleterHandle_Reset_m3B27FA65845C9E31E18329B210307AA86F84D857 (void);
// 0x000003A1 System.Void Intel.RealSense.Base.DeleterHandle::Finalize()
extern void DeleterHandle_Finalize_mEE60A5C1911696117EB9994859C2E89E42CFDE8C (void);
// 0x000003A2 System.Void Intel.RealSense.Base.Object::.ctor(System.IntPtr,Intel.RealSense.Base.Deleter)
extern void Object__ctor_m6DF77A0CE068F1F3C037D14E2030DA468540E6E5 (void);
// 0x000003A3 System.IntPtr Intel.RealSense.Base.Object::get_Handle()
extern void Object_get_Handle_m96B34CD2853888B951499B2A690361475521027B (void);
// 0x000003A4 System.Void Intel.RealSense.Base.Object::Dispose()
extern void Object_Dispose_mF9CEF11582FACFF8209F0A1E82D4020309608293 (void);
// 0x000003A5 System.Void Intel.RealSense.Base.Object::Dispose(System.Boolean)
extern void Object_Dispose_m8EBCE4AF365CE2393E4B76B0764E8ECDD58852CF (void);
// 0x000003A6 System.Void Intel.RealSense.Base.Object::Reset(System.IntPtr,Intel.RealSense.Base.Deleter)
extern void Object_Reset_m7B418F064874B5B375C31A08F4FFCEDF379F27B3 (void);
// 0x000003A7 System.Void Intel.RealSense.Base.PooledObject::.ctor(System.IntPtr,Intel.RealSense.Base.Deleter)
extern void PooledObject__ctor_mE8AD5B256DAC557698B67C3E1C6061B8B1FB6E8E (void);
// 0x000003A8 System.Void Intel.RealSense.Base.PooledObject::Initialize()
// 0x000003A9 System.Void Intel.RealSense.Base.PooledObject::Dispose(System.Boolean)
extern void PooledObject_Dispose_m0250FF8608B96A963C6CF3C0ABD2973ACB839EE5 (void);
// 0x000003AA System.Void Intel.RealSense.Base.RefCountedPooledObject::.ctor(System.IntPtr,Intel.RealSense.Base.Deleter)
extern void RefCountedPooledObject__ctor_m937F87C5F16602B33F222C90E9F1B4582E6F3EA9 (void);
// 0x000003AB System.Void Intel.RealSense.Base.RefCountedPooledObject::Retain()
extern void RefCountedPooledObject_Retain_m16DB04E55B7F2F0CC28645F7942AEBF9452399BE (void);
// 0x000003AC System.Void Intel.RealSense.Base.RefCountedPooledObject::Dispose(System.Boolean)
extern void RefCountedPooledObject_Dispose_mD4826D5E95AC491FC8BBAB42509CCA4380F2CA67 (void);
// 0x000003AD System.Boolean Intel.RealSense.Base.RefCountedPooledObject::Release(System.Boolean)
extern void RefCountedPooledObject_Release_m2912A7DEC6C283D2BCA3896A3792B86D48843A74 (void);
// 0x000003AE System.Void Intel.RealSense.Base.RefCountedPooledObject::Initialize()
extern void RefCountedPooledObject_Initialize_m63CC31435A1F2C655080E84ABF5D80111D9E9DBE (void);
// 0x000003AF System.Void Intel.RealSense.Base.RefCount::.ctor()
extern void RefCount__ctor_mC2688B4E2EB0E183DD7B62EDEE4984A1CB7D598D (void);
static Il2CppMethodPointer s_methodPointers[943] = 
{
	Context__cctor_m42FD19CCCCB600614606DE672D85054776AF4A6C,
	Context__ctor_m833D3312D73B2D956F3142714C1EB4CB7738A34A,
	Context_get_Version_mE03FFAA5CCCF967EBBC469A090D9B47D433282BA,
	Context_Create_mC3469D9CF1A77C7E74B12045EBAD34C4D3898ACC,
	Context_add_OnDevicesChangedEvent_mEA4D0DC321AD71B9E463B62DDF3581E07E9BD9D7,
	Context_remove_OnDevicesChangedEvent_m9367BFBAFD216048540C3B0CFAA6D7BC635981B5,
	Context_add_OnDevicesChanged_m409A40EEFB06AEA08ABD69A891EE9607AF8F55E3,
	Context_remove_OnDevicesChanged_mBC2222D0FD29A52AA5AA085751067843A45018A0,
	Context_QueryDevices_m9D15427411FD9D414A84F6E7866C5E2FB0A664F1,
	Context_get_Devices_m7B85FF2D892954686D44D57192612EFA3861DC7F,
	Context_AddDevice_m09B49E056C8FF38720A281FD3324A90557859C96,
	Context_RemoveDevice_m74C30BD78427357D64B7A4FC3AFB3FB6BBDDCA92,
	Context_OnDevicesChangedInternal_m13FD1F35326571A77CB41B2D4DA98479CF79E277,
	OnDevicesChangedDelegate__ctor_m4F10A9F2500370E61126A3811ECAF8DE4C9FFA99,
	OnDevicesChangedDelegate_Invoke_mA28AECD814E3B7FDBAD5BF41D2A02BD229F13FBD,
	OnDevicesChangedDelegate_BeginInvoke_mD0D926AE6C28ECF90289F0943967D5EAF8D960F1,
	OnDevicesChangedDelegate_EndInvoke_m3CDA36584DC7ACAEBEBEE5DB42C5EEB06200AE4E,
	NativeMethods_unix_memcpy_mEB9B0406D3D2248103951D3306C994DAC44AA201,
	NativeMethods_win_memcpy_m4B9F1D85D6097C8E259FF081C07F15B36FE42B7E,
	NativeMethods_rs2_create_record_device_m38FDAE53C7C1E7F4274C9480A91E66514B7EB0F2,
	NativeMethods_rs2_record_device_pause_m31238013107E760CBF348773A63A1140967CC39F,
	NativeMethods_rs2_record_device_resume_mF8411FFCD907A46C70FEEC755C0FE4343B5FD06F,
	NativeMethods_rs2_record_device_filename_mF41AF58EAFD42806FAA9D33A920F7B68FD77C63C,
	NativeMethods_rs2_create_playback_device_m7E93FAF2AB2D52C15D5592782538032118550491,
	NativeMethods_rs2_playback_device_get_file_path_mED423A94505BE96095520C8E94B053790CA12558,
	NativeMethods_rs2_playback_get_duration_m14150264701C3092759BBD87538AD8482E2189DB,
	NativeMethods_rs2_playback_seek_m8BA7B358A660B874F91E998238AD56ED232D4250,
	NativeMethods_rs2_playback_get_position_mF3DBCAE12D1B30073119E5C66BB08EE55121522E,
	NativeMethods_rs2_playback_device_resume_mD2A866B7D6050C15784CDF3558FBCAEDFB8CDE0C,
	NativeMethods_rs2_playback_device_pause_m59AE0CEEB277183C5DF428D83E9D9D434D896373,
	NativeMethods_rs2_playback_device_set_real_time_m25DF1F3DE74C346C7B91B1A5F5CA8FB9EE267127,
	NativeMethods_rs2_playback_device_is_real_time_mF915F141F57D5F99619A7726F14C262D9B3A5498,
	NativeMethods_rs2_playback_device_set_status_changed_callback_m707275EA661C70A29BAFC4986DA4EEE42C2C59D2,
	NativeMethods_rs2_playback_device_get_current_status_m7F29ACEB7C576E2AB2AC44074A4525D5D149D0BB,
	NativeMethods_rs2_playback_device_set_playback_speed_m19F93A829BB9736A24F6E3060F38625B7DB30DD4,
	NativeMethods_rs2_playback_device_stop_m149EECEACC1269C98D060787E49ED40B58D9A2A8,
	NativeMethods_rs2_create_colorizer_mF3BCA6617B44E0B8F5C6FE0260925BCD1DFE4AFA,
	NativeMethods_rs2_create_sync_processing_block_m663FB11F6748AA946740A70198818BB6D3A791D5,
	NativeMethods_rs2_create_pointcloud_mA4E310CF03D0476C7F3DDDD066ED377304D4C3A5,
	NativeMethods_rs2_create_processing_block_fptr_m88B5EFAA2718A8ED70A48B0C09A9222D15E4EBB8,
	NativeMethods_rs2_start_processing_fptr_m39836E34BF4F1159B5CB7B28266DE19BFF3CDF78,
	NativeMethods_rs2_processing_block_register_simple_option_m868E95A9508FEF4A57FA8121D2A3E150E76B5779,
	NativeMethods_rs2_get_processing_block_info_mBA306ACF10F6A1F48EB30593978A08F9E201E001,
	NativeMethods_rs2_supports_processing_block_info_mC77F89A3DFB3DB4143BB3BBDFB203E6E745AF3B5,
	NativeMethods_rs2_start_processing_queue_mB2CEBC80044B7FED5EDE267B03CCFD471E98E4DF,
	NativeMethods_rs2_process_frame_m50D49B921FBDB99097150FCFCCFC5D8DE6F7D17E,
	NativeMethods_rs2_delete_processing_block_mDBF9AB8ED78A548347074DF82D073B5BF754835B,
	NativeMethods_rs2_create_frame_queue_m53FE55B37535D1C7C378DC36720D68625DE77A33,
	NativeMethods_rs2_delete_frame_queue_mE5C89610604F50F87547E7D53601B591C5FCE145,
	NativeMethods_rs2_wait_for_frame_m5F63CF52024B43CD0E1D56E16F61DA5E68EA9F5D,
	NativeMethods_rs2_try_wait_for_frame_m4F1F2236C3D194EF7F21A7F0C962B6050FF21783,
	NativeMethods_rs2_poll_for_frame_mBBB6E95800FA32ADCD6A97F4C8616654C0E6A613,
	NativeMethods_rs2_enqueue_frame_mF17FA600823429D2FF91CDE6BB3A5C892F36E644,
	NativeMethods_rs2_create_align_m52DAA6EF3D3528F66DA76BF23ED856C0A09CB0A1,
	NativeMethods_rs2_create_decimation_filter_block_mDE8CD80FA41B62D71206C87EB4D520257EF88BB5,
	NativeMethods_rs2_create_temporal_filter_block_m664D2536C44534F3388EB29A4949E462BEE7C7F1,
	NativeMethods_rs2_create_spatial_filter_block_m73BA9B15CA1A0E97F10E6C4D83331A76B8105014,
	NativeMethods_rs2_create_disparity_transform_block_mE18B68C680955721D38B55CF16C3FE382E37C460,
	NativeMethods_rs2_create_hole_filling_filter_block_m06792121B05468AF940A4FC4D22CCBAE5B7FF5CA,
	NativeMethods_rs2_create_threshold_m34BFE789BF7543A68D61ECC7D8458F9CADC10496,
	NativeMethods_rs2_create_units_transform_m0433EFDF78C3D5A2136DB02EB22C6F4D44ED2243,
	NativeMethods_rs2_create_zero_order_invalidation_block_m349FFA56A1B9EAECA90CFE11D05F5C01666B47DB,
	NativeMethods_rs2_create_huffman_depth_decompress_block_m716C48026F7E974D287179FC953A1C0B75B9D653,
	NativeMethods_rs2_is_option_read_only_m393E1FCEB7F7730A26D1EA1ED706ACF3D20D5180,
	NativeMethods_rs2_get_option_m11F0F195012E4A6A8EE0A525F7FA8B5C926AE969,
	NativeMethods_rs2_set_option_mB3CF3C283912FB0F0F5021D8B2A10CB3983A66E7,
	NativeMethods_rs2_get_options_list_mE481DBC5C59730FE68238184EE2929924E2300EF,
	NativeMethods_rs2_get_options_list_size_m95F40B7C62F887BF266635D427863028A96AF5E6,
	NativeMethods_rs2_get_option_from_list_m05E9CFF0C102380EC00842EBC1F6D2825BC4AA58,
	NativeMethods_rs2_delete_options_list_mC5CF4E7AE5BD3F026029E1F5B58C102E975A85A3,
	NativeMethods_rs2_supports_option_m309ECB1FAE77DA93CF224855BA7C5940C2AEE7CD,
	NativeMethods_rs2_get_option_range_m85458F9D82EA80A55E6019AE89D5131587B47F55,
	NativeMethods_rs2_get_option_description_mAA9EF1FD573810205A48839E21959B1A167B13E2,
	NativeMethods_rs2_get_option_value_description_m27AFB556B9B526D6ECDED3969876A54F5EC2D86D,
	NativeMethods_rs2_get_frame_metadata_m6F46055D031AAF59DF032C91A28D0CDB74924FB5,
	NativeMethods_rs2_supports_frame_metadata_mE5600E61A60BFCE2ABE3AB14419DBC75F930CE2E,
	NativeMethods_rs2_get_frame_timestamp_domain_m513DE5CC9C082D80613136925365DE84B373753B,
	NativeMethods_rs2_get_frame_timestamp_m8E9F90C433534EFEEAE1477D4D6A67EDFD47608A,
	NativeMethods_rs2_get_frame_sensor_mACC5190DE44C69A4A96D2EEE8719ACD29843FC7D,
	NativeMethods_rs2_get_frame_number_m0291F97EF87E4CCDBA90FEAEED794AA0A54FDD58,
	NativeMethods_rs2_get_frame_data_size_m1C7CCA4FB89EAE9EA26E014F42CEBEF14D5E168C,
	NativeMethods_rs2_get_frame_data_mF98E16A4A959C6A005D874D00B927CA72016D50B,
	NativeMethods_rs2_get_frame_width_mFDB14EE8C125F9734E043BE4EC7A0D84EC05A339,
	NativeMethods_rs2_get_frame_height_m379CD30337D90AFF6EA5F511B1D3F7DB62270FA8,
	NativeMethods_rs2_get_frame_stride_in_bytes_mC9CF53BDA8213C5999301A19CE032931A88E015E,
	NativeMethods_rs2_get_frame_bits_per_pixel_m2EC3F3D85152F98989EFA1494B1DA8C5369FA556,
	NativeMethods_rs2_frame_add_ref_m9AAC75BD63451D30274140D7C7B9D4A02D7EAFAF,
	NativeMethods_rs2_release_frame_m78E4A362377F86727E5E0F09C405F5838B7DDB4E,
	NativeMethods_rs2_keep_frame_mE4D49F17B4E1031FA31874CE999B822E5F79AD4B,
	NativeMethods_rs2_get_frame_vertices_mA0F42626D6C71C3FDC2FB4EE0FB8DD8C5B85C05A,
	NativeMethods_rs2_get_frame_texture_coordinates_m7ACFCCC0FA66404CDD5C08469C02A75011984079,
	NativeMethods_rs2_get_frame_points_count_m0EFB11501B32938413993E68959C9D6ABAEBD130,
	NativeMethods_rs2_export_to_ply_mBFC4E3A1FD44611FA8AC90FA769B2F78C2646A0B,
	NativeMethods_rs2_get_frame_stream_profile_m4554C9A3F3AF1A0B9466011CC30DAB1062C1DDFC,
	NativeMethods_rs2_is_frame_extendable_to_mA704D5F53B32BC0891F9A45B13D8B07ADE2AD0DA,
	NativeMethods_rs2_allocate_synthetic_video_frame_m17940562F5997B04E293D3617E175BEBBC40F2D4,
	NativeMethods_rs2_allocate_synthetic_motion_frame_m6959119EC9E55F2C16045821DCB768135893A301,
	NativeMethods_rs2_allocate_composite_frame_mA2616FE722D8CF41CB7EB78202171A22C5C00CBD,
	NativeMethods_rs2_allocate_composite_frame_mC9929F5C4E289F05A9E8832A66608074C4A86328,
	NativeMethods_rs2_extract_frame_m15DF5AA593B47ACB08D7E1F103455E7D985EF821,
	NativeMethods_rs2_embedded_frames_count_mA61FE024A26818989B224D933E46D081F8F08C6C,
	NativeMethods_rs2_synthetic_frame_ready_mC629C54844F239D01A18ADCDCA67440BDFCE9335,
	NativeMethods_rs2_pose_frame_get_pose_data_m64A2484417DDA757B3612DEBC4A0A372966FBD29,
	NativeMethods_rs2_delete_sensor_list_m0FB4D085DA5FFDB0C84D52CB1109A1256403A65B,
	NativeMethods_rs2_get_sensors_count_m94E0C7F7E5CA001098CB1B56BB77000AFDF73FAB,
	NativeMethods_rs2_delete_sensor_mF9CF2F7DA98E02A5F54D2F1B52A56E5A71B83C79,
	NativeMethods_rs2_create_sensor_mE35B32B08405F023F4A4658D13A29C5C31EC5B43,
	NativeMethods_rs2_create_device_from_sensor_mAFDBD7CA6F0217D2B9B1E32CDC7900097E92878E,
	NativeMethods_rs2_get_sensor_info_mC7EA50BE0875EF48B86A6A733FE66420EA0E0B43,
	NativeMethods_rs2_supports_sensor_info_mC78D8FA98A1995E7B6993EB9D33A668FC3CC76BE,
	NativeMethods_rs2_is_sensor_extendable_to_m14087F50121FC9A577E45B52155FA98CD14A85B5,
	NativeMethods_rs2_get_depth_scale_m02222ADD006A122248ABF883B9AA3085DDBD65AE,
	NativeMethods_rs2_set_region_of_interest_m58CE90EB0444B3759E7AEB520E894860A805991B,
	NativeMethods_rs2_get_region_of_interest_mFB4ECF051BED87CE9A35FFB9E299035CB3DE5DD1,
	NativeMethods_rs2_open_m5FB4E7973113D717784356F28FB4487EE2024F4E,
	NativeMethods_rs2_open_multiple_mD3C8CE3146067C05E4F8D2B9093FE2517E9CEDDA,
	NativeMethods_rs2_close_mCD8C9F7F32AC8DB96DA98C380B99961137AA696D,
	NativeMethods_rs2_start_m7B1834A401A7DE5946AA07D54D4C3A7ABC81EC54,
	NativeMethods_rs2_start_queue_mB01C6ECB8D17BF10492230546C071A433CB0581B,
	NativeMethods_rs2_stop_m51E5F4A1384BAAF95A0B0CB45397399F0EBA6E60,
	NativeMethods_rs2_set_notifications_callback_m8172AC80D22F5A71D32A109D4C6CE32E60BC7AB8,
	NativeMethods_rs2_get_notification_description_m793C27DDB99EDBE1E00FCD7178437E8D60208D51,
	NativeMethods_rs2_get_notification_timestamp_m311DCCF07414B5E839B2D0E6CB6E42855012BE48,
	NativeMethods_rs2_get_notification_severity_mBCC181DC8A2CF1CED9A805FAC5B7604150E2EA10,
	NativeMethods_rs2_get_notification_category_m0F78E7DDCBA4CB8C3F642EC00BF793FAC78A631A,
	NativeMethods_rs2_get_stream_profiles_m2402EF97700A3BAE91C553A172E7BD8CE6082333,
	NativeMethods_rs2_get_recommended_processing_blocks_mE0AD8AF27E53F42FDD4374DFC29DB3849C1B19A0,
	NativeMethods_rs2_get_processing_block_m2716B743818779D8B4D8682D00F1DC462614BC86,
	NativeMethods_rs2_get_stream_profile_m4DA518C1DA11C9ADA20BAFDDE5665CC7A10E48E6,
	NativeMethods_rs2_get_processing_block_mF379063C0A2E4A3EB6EE53D12B3C6AE1782B23DD,
	NativeMethods_rs2_get_stream_profile_data_mD311C82CB37E63E2D387A7EC172B9CFC9D0C6D9A,
	NativeMethods_rs2_set_stream_profile_data_mC8E2958ADDC0A521FA13EE753E5686FB69215C2A,
	NativeMethods_rs2_clone_stream_profile_m54D432B8838D55629583B0E9D2E7067A7AD62703,
	NativeMethods_rs2_clone_video_stream_profile_mAA0C5A489C798320A92091983F20C2892B5BFE6B,
	NativeMethods_rs2_delete_stream_profile_mC9532ADD8CC75B8CC12EF98A36F257079B750451,
	NativeMethods_rs2_stream_profile_is_mDFB86CA02112F3384BC3994F83961C798E246F02,
	NativeMethods_rs2_is_processing_block_extendable_to_m1FEB16685BCB91898AB8905B2E9EFD256F9FF70D,
	NativeMethods_rs2_get_video_stream_resolution_mCAB698A752E4314D5CD20FC3AD9515A4FFF9B9C7,
	NativeMethods_rs2_is_stream_profile_default_m642653D46C7C85E625479875EF6E16954F5689FB,
	NativeMethods_rs2_get_stream_profiles_count_mC91D1FA84CCBB9D9CB5022E209E1B7BAD2284F36,
	NativeMethods_rs2_delete_stream_profiles_list_mCF0F8D675AA54FD319F08DCAB5C20878B2221268,
	NativeMethods_rs2_get_recommended_processing_blocks_count_mAE3C37B9E5BF884B7A2CF1DCCAA97AED109D0BD3,
	NativeMethods_rs2_delete_recommended_processing_blocks_m630BC2EDED0946A4DF832264B97FD81E733C75C3,
	NativeMethods_rs2_get_extrinsics_mFEA87D371B58A65A20885A4FAEEC509C7DE4E00A,
	NativeMethods_rs2_register_extrinsics_m2E679F5405E37152E5555FBB63572983E7F1C52E,
	NativeMethods_rs2_get_video_stream_intrinsics_m8692D8C0A53B79ADE38D9B4C7DC696F5D04C1276,
	NativeMethods_rs2_export_localization_map_m23A4FB2722FED3D7532FD216FF512F45BC31CED1,
	NativeMethods_rs2_import_localization_map_mC5344F8226858FDBECAD68A0DAAD7C0A8A683DA5,
	NativeMethods_rs2_set_static_node_m97597AA8B0C665FB11B14B69C80E0BBF41AAB846,
	NativeMethods_rs2_get_static_node_m98947B0D47C378D439731557517F3141D106F25A,
	NativeMethods_rs2_remove_static_node_m2B917844C9336B1D660A7858AF2E2215E1FA1B6D,
	NativeMethods_rs2_load_wheel_odometry_config_m7665949E9BF93FA1CA36E8D1EEC8D8B547D91072,
	NativeMethods_rs2_send_wheel_odometry_m5C5D301A2B13BD6E1683D2B0F34861221A5BE6F1,
	NativeMethods_rs2_get_motion_intrinsics_m3427EF461D45DDE87C9FBD643B649CF12B487D11,
	NativeMethods_rs2_get_device_count_m8D919DBB8F5DC2B2706ECFD70D7120E55B569CED,
	NativeMethods_rs2_delete_device_list_m2143572F5A3A2BB9E8C98F2A2B8A1CCD7046AAA1,
	NativeMethods_rs2_device_list_contains_mF1BC202C937B1FCBD437F847E7DD096AE72B82E0,
	NativeMethods_rs2_create_device_m3BE9F2BA416AD879518842314C2969EAF14CC9D1,
	NativeMethods_rs2_delete_device_m62432B9C465FF796C5E842883650DAA6E94D02CE,
	NativeMethods_rs2_get_device_info_m7E756E9BCECC8AA1702777E503971AE94BEC3A6E,
	NativeMethods_rs2_supports_device_info_m0F73DFDE4C702B1C486D1D8D5C41A567E6FF99A5,
	NativeMethods_rs2_hardware_reset_m0AC7B48F9B75F5596F1D3F671561C36F1BCC55DF,
	NativeMethods_rs2_send_and_receive_raw_data_m20EE6B04B9F9DD4E749C6678B8AE5EB045A0065C,
	NativeMethods_rs2_is_device_extendable_to_m16D7E6F41F23DBE981359E499CDC46B489FC644F,
	NativeMethods_rs2_query_sensors_m79502DDC076376CDA4CA5685EC49979125757C56,
	NativeMethods_rs2_enter_update_state_m0B9AF27594668F14358E7FEA93EBD9CB93AFABAB,
	NativeMethods_rs2_update_firmware_mD077924F30E3DBA8B3ED2099CEC80FCF9E45BDD7,
	NativeMethods_rs2_create_flash_backup_m3C31108CF230FC7553F59AF8BEEB7550F111AE91,
	NativeMethods_rs2_create_context_mD2EE9E5DABB49C518CD1877A85101D96E3689F9C,
	NativeMethods_rs2_delete_context_m77103A8457D10F06F2C0641D912289E1818FF2DB,
	NativeMethods_rs2_context_add_device_mFF7784C7F25422FD70B0EA769B5510D39C2C7BB3,
	NativeMethods_rs2_context_remove_device_mD5293BBF9D200FC7BF589F83BEF40DF2FEEDD270,
	NativeMethods_rs2_query_devices_mB0C3DD78A88E57339B3671CC6D8546352ED1382C,
	NativeMethods_rs2_query_devices_ex_mD487261C20708C8728C81E2DF91B56BD02F91117,
	NativeMethods_rs2_create_device_hub_m43E63C5952292033E62163CAE70A36691EE7FAC5,
	NativeMethods_rs2_delete_device_hub_m40773115D4C55570E1BB0BCD2D4ABA734A0A0318,
	NativeMethods_rs2_device_hub_wait_for_device_m0A1D361B22C48DF7770881C75F437C19991F4419,
	NativeMethods_rs2_device_hub_is_device_connected_m2FF979BB781B26498065ED507A1ACB6C4D4491C6,
	NativeMethods_rs2_set_devices_changed_callback_m02A89FD24BD7D75CF3685528F2596444E848E341,
	NativeMethods_rs2_context_add_software_device_m55A8B874DEF8BD167ED7032FFA71A5FC6C89CB0A,
	NativeMethods_rs2_get_raw_data_size_m40D6C54F69DC14C2E0AAC25367E571EE316C9E97,
	NativeMethods_rs2_delete_raw_data_m0EE83C5F491A2631CC96200A8E03C32DDC95680A,
	NativeMethods_rs2_get_raw_data_mEFC3A06458983FB44B8928576977067022B02F9A,
	NativeMethods_rs2_get_api_version_m23825F273DA138493678A23976132740D7593439,
	NativeMethods_rs2_log_to_console_m6D76FB1BEF4A072FB9FFE4B9B07683C7B761A7B0,
	NativeMethods_rs2_log_to_file_m58FF4A347232F9BCCCC68760B6FA54B20C9B13CE,
	NativeMethods_rs2_log_m207878ACCC8BD5873FFD5931D46DA76860506088,
	NativeMethods_rs2_depth_frame_get_distance_m9C499F40232847F06F5F1CBF2E1BF81927883809,
	NativeMethods_rs2_depth_frame_get_units_m9674FF4B64BCEDA7E95AB0794BD38775681A6808,
	NativeMethods_rs2_depth_stereo_frame_get_baseline_m26D50A9C58AE4C1B242D778CE57955604B9D2605,
	NativeMethods_rs2_get_time_m797814329E03D08525C413AADCEE9BB57BACD9D9,
	NativeMethods_rs2_toggle_advanced_mode_mD7CF08B2C9E18E6F2BF02B13A3C155A68289662C,
	NativeMethods_rs2_is_enabled_mBF1AD387F8C087ED0F03559AD7DD782C3E1612F4,
	NativeMethods_rs2_set_depth_control_mDB885C46C1A39E2794A1FC81B69804AEA2F1B21E,
	NativeMethods_rs2_get_depth_control_m408078460BC86C452DD1D2535269C871FDB89EB1,
	NativeMethods_rs2_set_rsm_mE5747D63B51C837159F370A367AE77E959FCBB86,
	NativeMethods_rs2_get_rsm_m8F218BB7A2C83E5F94E4979D9780C31B93215F28,
	NativeMethods_rs2_set_rau_support_vector_control_mA0FA2CE4D3F99D63BFE0563E77C94A5F39213CDD,
	NativeMethods_rs2_get_rau_support_vector_control_m0957E9B71F5DA2A95EAFAF1DA1CD3B5344B03DA5,
	NativeMethods_rs2_set_color_control_m632D0DE40551595346818C838A88FC88EC0791C0,
	NativeMethods_rs2_get_color_control_mD97A5DF4BE5CEF3C272534DD511CFDF611321675,
	NativeMethods_rs2_set_rau_thresholds_control_mB11CD0F226E47F24C0A2BE6800B4BF27B49C04A3,
	NativeMethods_rs2_get_rau_thresholds_control_m4010D9BD440264A05C942A4D314A385D1FF16A49,
	NativeMethods_rs2_set_slo_color_thresholds_control_m4FD1EEA30F567479F0591FFF0EE0D7AEF981A88D,
	NativeMethods_rs2_get_slo_color_thresholds_control_m3F861AEED8C4B3A4932BDD8909A13316ED0A9215,
	NativeMethods_rs2_set_slo_penalty_control_mE8CD8A053B2DE543ED07349EED7CCF7B89F4F5CE,
	NativeMethods_rs2_get_slo_penalty_control_m1B0E8D70FB3DE4901552B89E0E1963AC67041473,
	NativeMethods_rs2_set_hdad_mAAF2F8579CEF918EAC52FFFEFD601178E9BF27BA,
	NativeMethods_rs2_get_hdad_mA73D413D57501E6A93C46D96F11AEE5ABC9697D1,
	NativeMethods_rs2_set_color_correction_m47B372E622621A654BCB6C921684C4E02C325E15,
	NativeMethods_rs2_get_color_correction_m665B38ED729773C696278C50ADF4CCBA34909063,
	NativeMethods_rs2_set_depth_table_m853F0D2E3D5A14089AF2AACC7446D9459B4601E8,
	NativeMethods_rs2_get_depth_table_m357DE451760530BD5C0B30813C8692E36DBC4778,
	NativeMethods_rs2_set_ae_control_m47E74D0C5B3841B027EEBDE8C1FDE095B0DD5095,
	NativeMethods_rs2_get_ae_control_mF3FE46838AEDEA494E56192773B81DDECF54F8B5,
	NativeMethods_rs2_set_census_mF0E40B3A4D8A96AB134B8035315F425CABA1C9AC,
	NativeMethods_rs2_get_census_m2DAB6AF90DE2AE3473F1A24E1E1E898058EC9202,
	NativeMethods_rs2_set_amp_factor_m4D1ACB201DDEDC91E46A88C34111BADA319E6E4D,
	NativeMethods_rs2_get_amp_factor_m4F84F7728A2F46804CFE64BB1CE0D04D3E8611CE,
	NativeMethods_rs2_load_json_m5E75C92EEF8858D3D87E5C7FEE15744DC4101AC8,
	NativeMethods_rs2_serialize_json_mE6E053D5C639DBBE42570445BA48AD8A15C04A1F,
	NativeMethods_rs2_create_recording_context_m2E612F79ECE012F44F29FBC54160A2DF1599F803,
	NativeMethods_rs2_create_mock_context_mA2790555D08BD6A5DB3C4E11B1C6BFA5B08C99D6,
	NativeMethods_rs2_create_software_device_m26C4DECEA354014D14CDC09D68DCB8A9628381B2,
	NativeMethods_rs2_software_device_add_sensor_mD06B4CA3F433F6B1BD6A7FFBE4E0FD8FC85B0251,
	NativeMethods_rs2_software_sensor_on_video_frame_m397D2819B5B50BA5312AF35F539AD5F488AB079E,
	NativeMethods_rs2_software_sensor_on_motion_frame_m9F71FAAD75134F9DC08C59AEE4DC0151AAD0BCFA,
	NativeMethods_rs2_software_sensor_on_pose_frame_m669E80910F4510D42FB2DF0D12014B38A7053710,
	NativeMethods_rs2_software_sensor_set_metadata_m907934EC2305EFFE37EB2D21D1A77B3940A30AA0,
	NativeMethods_rs2_software_device_create_matcher_mA294B8DF9E9ADDD92A01817425460F3D51F65AE9,
	NativeMethods_rs2_software_sensor_add_video_stream_m47FCB7ACF452F33D8E40449486096D6F08C86C54,
	NativeMethods_rs2_software_sensor_add_motion_stream_mF9BFB9257CC7DBD89A14A8E0737A1565C0588D6B,
	NativeMethods_rs2_software_sensor_add_pose_stream_mBEAD730970880061373854A59DFABDCD601DBD90,
	NativeMethods_rs2_software_sensor_add_read_only_option_m06D9901203DD93EB152B616685C3D953E4128164,
	NativeMethods_rs2_software_sensor_update_read_only_option_m872B8C47C78CDC07D491794BC7E6BE6B7EE415B2,
	NativeMethods_rs2_create_fw_log_message_m6DEE8AC1E0CB6A7B24AB4301A0A9AB3CE0954F1D,
	NativeMethods_rs2_delete_fw_log_message_m935D7C13346F3696B103F3F14B93D3A026BBA5DF,
	NativeMethods_rs2_get_fw_log_m3D83F98CC2932997F68E02D5A4DCDF4A3C7C4F0B,
	NativeMethods_rs2_get_flash_log_m91BCE8A1CF99F27125A881EBD28A2731BB64BDAA,
	NativeMethods_rs2_fw_log_message_data_m0EE8F33D3759633FFD7A2180F7ED92CA026E690D,
	NativeMethods_rs2_fw_log_message_size_mD358B81FC17E152F012B13CD54586C7930EC47B5,
	NativeMethods_rs2_fw_log_message_timestamp_mE4D2D067EB677A91C8987B02EEDB4D66355DECAA,
	NativeMethods_rs2_fw_log_message_severity_m98B10EF7C65829B8DE62FCC0CE1CC13EF455AF25,
	NativeMethods_rs2_init_fw_log_parser_mB60873425F1E9963ECB022D94C2E8A9468E5B44D,
	NativeMethods_rs2_create_fw_log_parsed_message_mE71D4CE326466F951502E697CB85701B81B2E25F,
	NativeMethods_rs2_delete_fw_log_parsed_message_m68B6208C32300E64A2E7ABFB3E81AB8A7579C98C,
	NativeMethods_rs2_parse_firmware_log_m4B4D191806003C5806D3A8EF686744C975358A8A,
	NativeMethods_rs2_get_fw_log_parsed_message_mD47C43036D64DFF33E639464B066968F7336E038,
	NativeMethods_rs2_get_fw_log_parsed_file_name_mCE07C577994CD7A78E5E6EE8BA3382604E5D87AC,
	NativeMethods_rs2_get_fw_log_parsed_thread_name_mBB84EAEDC7B0BB985AE1F47BE49DEBD861A3C571,
	NativeMethods_rs2_get_fw_log_parsed_severity_m525763D47DE7AF391743862F08AB33E95F41EA37,
	NativeMethods_rs2_get_fw_log_parsed_line_mA57FA455712563009197F2956003811675A752A5,
	NativeMethods_rs2_get_fw_log_parsed_timestamp_mB6741545985C8337AAA8084352BC55BC97625E32,
	NativeMethods_rs2_create_terminal_parser_mA1C2554F8C9DAF02232140F74205B1EA11E7021F,
	NativeMethods_rs2_delete_terminal_parser_mF63F362E3737AA7EDA39ABE715FA499A2F8575AB,
	NativeMethods_rs2_terminal_parse_command_mDF086891874175060D4A20B3B4006B22258A9D16,
	NativeMethods_rs2_terminal_parse_response_m8FE89F1A726577BBD0829AD71CD115130579E72B,
	NativeMethods_rs2_create_pipeline_mF2806114F47ED03DD1EDBA90FCC8294C650EBB88,
	NativeMethods_rs2_pipeline_stop_m7C6A0A596B09218038EF9552D7A950BA34B03146,
	NativeMethods_rs2_pipeline_wait_for_frames_m479EE9DB5D82E1E401CA8B92BA8823DCC92687A3,
	NativeMethods_rs2_pipeline_try_wait_for_frames_m13B1A612B0DC628CEC64D3A7F581F5CEDF350FBF,
	NativeMethods_rs2_pipeline_poll_for_frames_m7B2BB23781ADE9E8DB7462F2B79FAFC287C96883,
	NativeMethods_rs2_delete_pipeline_m64051B6E7868E9F91AE7C2D39AF272A2B9D1539B,
	NativeMethods_rs2_pipeline_start_m636269914EDAF346893B0C111F75973BCEA82BB9,
	NativeMethods_rs2_pipeline_start_with_config_mE5858CAB85F57FAD45206D5EE5A16101BDC7B485,
	NativeMethods_rs2_pipeline_start_with_callback_m2602A37F82AF05BF6A7390A7AB2F58902508F635,
	NativeMethods_rs2_pipeline_start_with_config_and_callback_m8046015888FC881CDFFD37B297731EF5AC0C0E5A,
	NativeMethods_rs2_pipeline_get_active_profile_mC5A6455A1AD2F179211E0B9681D3F55ED56C5129,
	NativeMethods_rs2_pipeline_profile_get_device_mF9B82F4197F3D55505164A105D79BAE0CD933844,
	NativeMethods_rs2_pipeline_profile_get_streams_m0DF34266BF9AA82040003389EC6F552737345825,
	NativeMethods_rs2_delete_pipeline_profile_mA14322EB7A0F80FFAB8639C0C92061CB46A0053E,
	NativeMethods_rs2_create_config_m44915B9206A60865AB3803E0BE2F956FF552149D,
	NativeMethods_rs2_delete_config_mE6A9DE561EB67872ADDEBA3FC1C9A2944353A569,
	NativeMethods_rs2_config_enable_stream_mBAB32104F00D2CE0B2D54050497C7DAB8EC72884,
	NativeMethods_rs2_config_enable_all_stream_m49698428783088B26390666B0B5B71F5AC969886,
	NativeMethods_rs2_config_enable_device_mC1C4D5944CBC9948638F6AF8BB8F222D4DD9DD86,
	NativeMethods_rs2_config_enable_device_from_file_m3186F3CD4DEA512D51FF591538B21DA00530DEBC,
	NativeMethods_rs2_config_enable_device_from_file_repeat_option_mA777D2EC76E31CAA0281BBFABA11A4A548D58DDC,
	NativeMethods_rs2_config_enable_record_to_file_m936C41AD14DABC20F4CDE3D0AD9195BC2C7DCBCD,
	NativeMethods_rs2_config_disable_stream_m571CEC7EA1BFFFE24AF10F839D4ED3B6782034F9,
	NativeMethods_rs2_config_disable_indexed_stream_mAFA8D3B66E0A39C1F5636EABBE91F8050E9C4DDC,
	NativeMethods_rs2_config_disable_all_streams_mA23FCF3B3E208817E59BE1FA0CA7A7A8BF1486A6,
	NativeMethods_rs2_config_resolve_m304E6D496B116319A31855426ACBC9835281019B,
	NativeMethods_rs2_config_can_resolve_mBF4333A19BD39894C8837955ED369820C6C68364,
	NativeMethods_rs2_get_failed_function_m7637A8C9AC876DBDFA9A1C55FE26307D5C9FCD66,
	NativeMethods_rs2_get_failed_args_m91ED540B42928D129E8AC29CEC405C0E6068B455,
	NativeMethods_rs2_get_error_message_mF07E34024F831DD7966123A39939F8904066AD38,
	NativeMethods_rs2_get_librealsense_exception_type_m841D77B9BFEE37C501EEE7FE3B79B4FC66F8EBE5,
	NativeMethods_rs2_free_error_m8B5945B06BE5BB88CF57BC22E42F1566EA236750,
	NativeMethods__cctor_m3ECBB465983E69BA2F229DCD01B27FB40DEE4BE3,
	MemCpyDelegate__ctor_m72E5B98D688D4F60DB97295A0D41E46B8786035D,
	MemCpyDelegate_Invoke_m7B2CDF37BDEA32366C0A789E9EF76534B60DF87F,
	MemCpyDelegate_BeginInvoke_m955807FE13A566543A9688B6FE13094261B5630A,
	MemCpyDelegate_EndInvoke_m00EA97BC603AB0E39997DE9E451A6E321D05E531,
	MemCpy_GetMethod_mD08E086413BC7276B213BF0D71BBB7D4221F337E,
	AdvancedDevice__ctor_mF37FA8C11660A0276F9565AD5AF4EDE056A9F1C4,
	AdvancedDevice_FromDevice_m55A9177AF53EEE8071364A5B54812329F9B52452,
	AdvancedDevice_get_AdvancedModeEnabled_mB15FEBF5C21A34D7429CEDC4770E5033C8A2CC79,
	AdvancedDevice_set_AdvancedModeEnabled_m34DD75F9EF36044A9588E8F3FAB89AA214B9068C,
	AdvancedDevice_get_JsonConfiguration_mC6CD4F6D5D129FA391BD3451B3DDD77472CA7854,
	AdvancedDevice_set_JsonConfiguration_mE4236F8DC3A62432A66CABEA6FB8DFA76F094D04,
	DebugDevice__ctor_m9F3CA7331781BBD21B049E76977166488FAAD0BA,
	DebugDevice_FromDevice_m953D0B7D620DC4E42E82E4532876CB6D0C93A580,
	DebugDevice_SendReceiveRawData_m7F5248F0558B047D4C7305DDFC83D6C20A273C11,
	Device_Initialize_m704F4BCD2AD2AEC35B91C182A87F956E1E82BABA,
	Device_Dispose_m1F2E2915BA2976223C17BEBE85581FBF05066385,
	Device__ctor_mB5BAC531CB1CE29FE2AE38215AD1BAF576283BD5,
	Device__ctor_mE601B51A6FF0EE87C5B9B8C1D2E53F29907C580D,
	NULL,
	NULL,
	Device_get_Info_m00D6466D210FCEA32987F7C9F59A7F90066B62D9,
	Device_set_Info_mF28C86F1AE42A089D1F83090787694A8866A24F3,
	Device_QuerySensors_m76B93648BB6BE863CA89AF77BFB85BC8D7B2EF91,
	Device_get_Sensors_mDF41564EB34A4A45BDDE051C28D49F7FB84B3A43,
	Device_HardwareReset_m2D98E50B155BB1202398E37BAEB23326CF41DF85,
	Device_Is_m2DD5B9A2CCC9A8728C724E1A63A88F1847433C10,
	NULL,
	Device__cctor_mCB4DD3BAB6A3CBB7F73C4E2E98D09534F3F280A5,
	DeviceList__ctor_m0D6146D7E15CB2257F425421EC227ED2E38BD4F6,
	DeviceList_GetEnumerator_mF1C600676BDAAA61B53769E6B8536871BCA21177,
	DeviceList_System_Collections_IEnumerable_GetEnumerator_m5A0A51513426E9CEEADB9123D4105467D2D5420E,
	DeviceList_get_Count_mD786F97BCFD463EE030CBD87C169FBE1F6FA674D,
	DeviceList_get_Item_m1A258A977AF6286515CD8BBBC2A842EE7BD2ECC1,
	DeviceList_Contains_mC38BF50157E6379197530E190A1B4D6B70BEE8FB,
	DeviceList__cctor_m66951CBA1F0553001981CADFD873231FE527DF29,
	DeviceListDebugView_get_Items_mBDE77180F67F2CA525EA704C5A8613E1FB74DFE1,
	DeviceListDebugView__ctor_m01883A69B3CFD68114F9582C18A60798E0BFA1C7,
	U3CGetEnumeratorU3Ed__3__ctor_m16FF6E0BC9C85E243F3CF238D8DA07F1F4AB7792,
	U3CGetEnumeratorU3Ed__3_System_IDisposable_Dispose_m516ED126705C021E7F5E953D77F6AAD109A07E7A,
	U3CGetEnumeratorU3Ed__3_MoveNext_m727931AFCBACE906FFE76955C0CC85A79487E10D,
	U3CGetEnumeratorU3Ed__3_System_Collections_Generic_IEnumeratorU3CIntel_RealSense_DeviceU3E_get_Current_m7C8DFB85BCBEF9F30B94C88E1978F7E6FF894F88,
	U3CGetEnumeratorU3Ed__3_System_Collections_IEnumerator_Reset_m017CE480F6AE8AC7462375EE233D560CBDAA0F00,
	U3CGetEnumeratorU3Ed__3_System_Collections_IEnumerator_get_Current_m8D861BFA7CF51375CFBF4505FDB635F7B4DFB52D,
	PlaybackDevice__ctor_m263397325CCEB8901707E3766A9000429EF3E227,
	PlaybackDevice_FromDevice_mBBC90F3810D86AE645392771CC005816ED56D5AA,
	PlaybackDevice_get_FileName_mFB0063573BE832327A693D437EB656A323F9DAE2,
	PlaybackDevice_set_FileName_mD8E562F9DC4BE1721784D44AFED8065240B673B8,
	PlaybackDevice_Pause_m17654D56D8C5B9D44356EC23DF0443D5A9960439,
	PlaybackDevice_Resume_mC7174472C0EDCBCE5A88AEE2D453A759FC21A5EF,
	PlaybackDevice_Stop_mA2CC6F1A3574FBBB2BEF14909FC130D43FCB91F2,
	PlaybackDevice_get_Status_m42D53B1A05AB31E9F6F1A207C702A02F0E9EBB43,
	PlaybackDevice_get_Duration_m6B3B9CF306238D81B123BC98D618788367838D3D,
	PlaybackDevice_get_Position_m0C05C94ECA246086C3155E864F667BC8FA7A25A4,
	PlaybackDevice_set_Position_m8651C9A703FC6A36CE6A560A6FC07EC74380F3E5,
	PlaybackDevice_Seek_m5FF2B50FEB656D4172F153773BF889687B8C7440,
	PlaybackDevice_get_Realtime_mF3D71F1FB89022207D4EE1E424DD202DE67C82E8,
	PlaybackDevice_set_Realtime_m633F6C9C15556718E6BD9439022ED09E73898657,
	PlaybackDevice_SetSpeed_mC6CCA3DD48CD06FAF3CAA91DB6D0199DA6C932FF,
	RecordDevice__ctor_mC215956B8F1AEEA6F80BA1DB961E6690E3508004,
	RecordDevice_Create_m7989DF6FA2A7503AADDB19DF82F2E71262FC2A02,
	RecordDevice__ctor_m792AD82750D2BD51AECBD0F23C90B9F2B9F7E78C,
	RecordDevice_FromDevice_m2FB49BEB0F51C45FD97741D5E349AEC425D27C7E,
	RecordDevice_Pause_mF50FD389564E5F9A1057509BEF63019514AA9537,
	RecordDevice_Resume_m2361AF0DDCBE49958ECE4350ED6B01C948CF8B28,
	RecordDevice_get_FileName_mC9D78696835F27CACFE12C65FD1E1E46E6FA315F,
	SoftwareDevice_CreateSoftwareDevice_m4BBEB8C23580C33FF9A444C40EA9F4591C58EBFD,
	SoftwareDevice__ctor_mF6AD88E490BC26DA60BB414482C6406C180F4DAE,
	SoftwareDevice_AddSensor_m6EC45E73C338A442F289B8156EED0A3713C9E15D,
	SoftwareDevice_AddTo_m98A529AA76EE772A013BBBA2EA053CEC53834A60,
	SoftwareDevice_SetMatcher_m81D92CDED174CB5A99374045014BA360C2D2CBCB,
	SoftwareDevice_AddSoftwareSensor_m918A443A8F39856507D0A62F71D3DF94A0A2E265,
	UpdatableDevice__ctor_m0CA135160BE26408D0A03AD568649B61D8AD799E,
	UpdatableDevice_FromDevice_mEE85EC0F3BA5871A8DA84DFFFD78B90EF522E3CD,
	UpdatableDevice_EnterUpdateState_m329ECC2FAC1636512DA67E5947316299DC35DD85,
	UpdatableDevice_CreateFlashBackup_mDBF8F4BFEA15EFC96D7C9287086F3B5C440E8C25,
	UpdatableDevice_add_OnFlashBackupProgress_mAE098253DA984BC99474F6F0369E82F42CCA5D6A,
	UpdatableDevice_remove_OnFlashBackupProgress_m89679A302055B3C7CD699256B4870C5CD9C1E131,
	UpdatableDevice_OnFlashBackupProgressInternal_m3D801930A7F2F71A263AA7E138C7364AF50D2973,
	OnFlashBackupProgressDelegate__ctor_mCC3BBB368BC92DF5BEC56FAC96571F950D2ED770,
	OnFlashBackupProgressDelegate_Invoke_mFEE7A556649A27E3F628C3245C953DF08359180D,
	OnFlashBackupProgressDelegate_BeginInvoke_m209435A12EF2D22E847F13362B3C266500D641FD,
	OnFlashBackupProgressDelegate_EndInvoke_mA9A994BCA4308CA4397F797556AE29249A3BBBD4,
	UpdateDevice__ctor_mD2BA25A9C661465FCC81FF8E01C79ADD0CB71D8E,
	UpdateDevice_FromDevice_mE5B142DE28F323DA045C920479278758F83B81AB,
	UpdateDevice_Update_mDDCF88702305D1076435498EE77E2922C30C07BC,
	UpdateDevice_add_OnUpdateProgress_m6699218939DE9DDB1D274A67D752787268F5E345,
	UpdateDevice_remove_OnUpdateProgress_m99B439BB5D3058B790EA09A879B98A9189975C81,
	UpdateDevice_OnUpdateProgressInternal_mFEA507B42632EEB2425B56A989F8BCC850B6DA44,
	OnUpdateProgressDelegate__ctor_m2C894C7018BAD9B77D8C449049089E3BF455BE1F,
	OnUpdateProgressDelegate_Invoke_m0E06A4D392B0DF46567CA6DE74AC5FA49328C68D,
	OnUpdateProgressDelegate_BeginInvoke_m90471DFCB69EA0B490AB3EB26FC8F4237DCD0BDA,
	OnUpdateProgressDelegate_EndInvoke_mFD46959FE5D23EF555E271FB058A7A1DF88E0344,
	FirmwareLogsDevice__ctor_m7A54F879EB7320D7C147D4CC6C1156AE51F08BEE,
	FirmwareLogsDevice_FromDevice_m7967CDF26888A98364F6E99BA78C0F02FA66AD0B,
	FirmwareLogsDevice_CreateFwLog_m323B1DE5EF0E5F02627390F79D679AB69AE38579,
	FirmwareLogsDevice_CreateFwParsedLog_m406E6B439ED6B7D28D5D651538F65748C520195D,
	FirmwareLogsDevice_GetFwLog_mF6828678377154C339D922E5EF0D7E08BFDC7E61,
	FirmwareLogsDevice_GetFlashLog_m4925C6B7BC15396AD1BB9EA9AE68BB60013B13FD,
	FirmwareLogsDevice_InitParser_m3F0CE921E505EFFE8EEB7FF40838286A43ADC7AB,
	FirmwareLogsDevice_ParseFwLog_mA9009331D28C9D2CDA41A170EB2EECF25D31AEDC,
	DepthFrame__ctor_m7D7EDF8F28152998F95E2A24FBDB54F2B9154543,
	DepthFrame_GetDistance_m825158CE01CC20EB56B68C8998F2519CAA4D1988,
	DepthFrame_GetUnits_m1124CD209CCD6641ED639D2EB68960D0E2776B80,
	Frame_Initialize_m9E603330A0254F20639F995C11AFA2BA9A2E51F2,
	Frame__ctor_m7EC7D543E371F11B9F3210B3DB7B34646EEDDE4C,
	Frame_Create_m8ABEC0E4B40D217A25B9EF5E365613A482364F38,
	NULL,
	NULL,
	Frame_Is_mA9198A531E7208F6252C5518D087B3A84A6791B5,
	NULL,
	NULL,
	Frame_Clone_mF83058E72A3E9821744A3036BB8381FAC9C4E314,
	Frame_Keep_m1FD46C819F406B19F92A57A2A43DB452CA152767,
	Frame_get_IsComposite_m648C8E9938F4DB3573D36DAA99804E79677F656E,
	Frame_get_DataSize_mAA1E18F42CD4C814DA51BE35895617AD46E70A7B,
	Frame_get_Data_m389421824EE87DA80C90E7FB114E661CD517C31B,
	NULL,
	Frame_get_Profile_m8F043F19E1A21F9B7CF8F4F7320AD490AEFFA07A,
	Frame_get_Number_mD1FD25DE73D0A80143DA0DD821721270114AC239,
	Frame_get_Timestamp_mAF87441277560E5072750CF5811082D5580D2995,
	Frame_get_Sensor_m63C61D6D61BF41ACE2B17ED5B5924E3E2BC63B43,
	Frame_get_TimestampDomain_mB8BF2A9AB6AF441DB536E6D65AE46684F5CE54BF,
	Frame_get_Item_m56BF9AF44D8D68FA776B60EF7B6BBACC3D1F0E9E,
	Frame_GetFrameMetadata_mB0DD97BB4CEF19B5E14235C763427524916E400B,
	Frame_SupportsFrameMetaData_m43EBC3D2929E609E2462F542CCC4FC7E272D6D35,
	Frame__cctor_mC44E8022F5742295A84831929EFFD4E332DD25D4,
	FrameQueue__ctor_m477645F5D4625D6724530C9B38E444FC1973DFC6,
	FrameQueue_get_Capacity_mFFFEDB439282B1CD98CBB10BD131736C7B4AD143,
	FrameQueue_set_Capacity_m398AF4F857410EDABD1AD08A48580494C7DB90B8,
	NULL,
	FrameQueue_WaitForFrame_mC2C5406889EFFB8568BFB15A3BBFEE374E6338A3,
	NULL,
	NULL,
	FrameQueue_WaitForFrames_mA78800DDFBDAF5DB64639C21F5E4AC01A711914A,
	FrameQueue_Enqueue_mF4EC82B1FD7C8CD68092809093D1ED92455BB969,
	FrameQueue_Create_m74973CDD97AC810DCF2F15F41C4A739270616BB4,
	FrameSet_FromFrame_mF24628801201C5B5556018F0BBF356E97ACE532E,
	FrameSet_FromFrame_mC1619EDCDF2E4F12DA047CE6419B3F3AB86CADEC,
	FrameSet_Initialize_m0861739B7347DE375FBF5432C4428E0CD75E155B,
	FrameSet__ctor_mEFB45B62B1E09E1E7FE8C4CA2FBC7A9D928B6E42,
	FrameSet_get_IsComposite_m1B2003D595D88401F51A2A78289AB827F9680229,
	FrameSet_AsFrame_m5CB3564BB0AA874F5ABF5A5C7ECC559881CFFDAA,
	FrameSet_ForEach_mE35096BFCD425ADFA806DE4BD888C59C25551FEB,
	NULL,
	FrameSet_FirstOrDefault_m05098D277897D852E3957E431373CB10ABC82542,
	NULL,
	NULL,
	FrameSet_First_mA554E6FE80EAFB3FD9464B06269C6DC12D5B1EDA,
	FrameSet_get_DepthFrame_m12E45B244B4CB2D57ABE2201D21F17F833FAD377,
	FrameSet_get_ColorFrame_m01326230E137DCDDD8D22BA27756290A5661903D,
	FrameSet_get_InfraredFrame_mB55523FF3B3D51A0A0B980AA5F829AE887DBA63D,
	FrameSet_get_FishEyeFrame_m62E2BED022E97281F44644A8D01D5B8416D87BC0,
	FrameSet_get_PoseFrame_m41AF437B8B1DCB5906929434FA8913EFA9D574EB,
	FrameSet_GetEnumerator_mFAA8F1E47A721FB5DFA558F03EDD07C5E8134982,
	FrameSet_System_Collections_IEnumerable_GetEnumerator_m1924C92F96C3CADB51FCFFCAE0E9A04AC86984C9,
	FrameSet_get_Count_mC01C9A4D4FFEB2F08BAA41DC7E03D09EB11DAF1D,
	FrameSet_get_Item_mB4B5CFB225EB97A71D1ADCE2D7EA48DA75D38223,
	FrameSet_get_Item_m3DBF27AF34A951104B36499557D8588B119D67F9,
	FrameSet_get_Item_mF65495A453CF768F234582D0BFE81E286198BE79,
	FrameSet_Create_m6237605DA167029B54366EFB6E62A52F6C2E5D38,
	FrameSet_Dispose_mDC694706686B799F6828B565514A47830C597954,
	FrameSet_AddDisposable_mC3E10585D9D436801150A5B2FFF4465DD073682B,
	Enumerator__ctor_m23AB5DC802E77937A14F266BBC048E7963E2CCDC,
	Enumerator_get_Current_m818F5B94FF36A570824FD32F3F98D604DFFCEAF2,
	Enumerator_System_Collections_IEnumerator_get_Current_m0480922637C3AC23AA88886A6A0C85253DD50D8A,
	Enumerator_Dispose_m2BF15DCBA7149637F7C0F696FD445E1F9DF7DED0,
	Enumerator_MoveNext_m3BE07BB85C18FF6F221927261DA42EB1005FA306,
	Enumerator_Reset_m47A51CDD4D243303CD3E2FB2841EF1C99D5564E4,
	U3CU3Ec__DisplayClass33_0__ctor_mDFC43F5E9FCF4867AEB955D0A3F793E86904C08B,
	U3CU3Ec__DisplayClass33_0_U3Cget_ItemU3Eb__0_m5C4CF67B4ABA104B84C82BF38D2B53929B7736A0,
	U3CU3Ec__DisplayClass35_0__ctor_m83CE77B7AB69A84BC3913407D97BAF8E2E0322AC,
	U3CU3Ec__DisplayClass35_0_U3Cget_ItemU3Eb__0_m444D9C2E3C673436C91C5F093A20A87A424456F3,
	U3CU3Ec__cctor_m779147C2D24F31EFB9EA39A27D39D084532F265F,
	U3CU3Ec__ctor_m1C77F8414FDB1E5D498D2EF80E7C2AC362BFC8C5,
	U3CU3Ec_U3CDisposeU3Eb__37_0_m56E6336C0281AEDF95A3470265815260121708D4,
	FrameSetExtensions_AsFrameSet_mA31949FD159058BE404EFB1A8A4CA8AABDB6505F,
	NULL,
	FramesReleaser_AddDisposable_mFA2A5CE23F6DF78AD64D0B54AE56521D4EBA528F,
	FramesReleaser_Dispose_m5B3C4C9189B507B26DC44D302EB4FE051DA17AEF,
	FramesReleaser_Finalize_mBBEC3F8E1A7967183C6C2DF807A94FBA5022D4D7,
	FramesReleaser_Dispose_m24C733FB11C1B588283B4DC1F1F1CAFFE585BAC1,
	FramesReleaser__ctor_m06792F439AC8E28255405A9AE9E0F4222FC551DB,
	U3CU3Ec__cctor_m2FE385F9F84352B3993B466D057A5C95D834B76F,
	U3CU3Ec__ctor_mF2A3E9980568AFFACAC2B6FF12CEC3EF01852F55,
	U3CU3Ec_U3CDisposeU3Eb__4_0_m32C74F3133FA935EAC07F41AC169DED0A2DFB456,
	Points__ctor_mF4A0450532CE6B985DA6B21A9159F1B53FAF065C,
	Points_Initialize_m07303241AF2253D943DFCF5D477A4B3D3AD595BE,
	Points_get_Count_m7550BD795EABB0B1BDABD721E7B64DC21C2E813D,
	Points_set_Count_m1A4C788DE39B6AF8435271D270C7BAF3932C1D16,
	Points_get_VertexData_m4AD8749BEF06C7F6279259D48D9F86F7AF31BC91,
	NULL,
	NULL,
	Points_get_TextureData_mA75F755AC9A888252CF4FD726503D5047F9A3B67,
	NULL,
	Points_ExportToPLY_mCC582ED93437E1CB1508BC3703EB08ED6F2DA281,
	VideoFrame__ctor_m10909C88DC824D7BF97407AC731203C491E400FF,
	VideoFrame_get_Width_m01912E71FEE2712DA83872C49C33009D30064268,
	VideoFrame_get_Height_mA5E7858FD1B8C5A131C644774576A268C3B354F8,
	VideoFrame_get_Stride_m99437F231B6912F126497A2170A91B77058DFBA8,
	VideoFrame_get_BitsPerPixel_m9A0A9B21F092D46504FA2752942486AD6EE2DFCE,
	NULL,
	VideoFrame_CopyTo_m292A4842651205CDCEE1C8BBFCFF9060327083F5,
	NULL,
	VideoFrame_CopyFrom_m546BABFFE6138A4060D4B90F256505EAC6C999F4,
	DisparityFrame__ctor_m07129C0B418425F645F6512AA59C132FC13DE4B3,
	DisparityFrame_get_Baseline_m6555F64B181374CCE7A23AB1593C2E9180E5F8C4,
	MotionFrame__ctor_m2BC08CAEFFED538A8211ACE09320058A1F19707F,
	MotionFrame_get_MotionData_m544519D1C4A1BC88BEF63779964425D3E670B0BA,
	MotionFrame_CopyTo_m44984B253947C2F0D1A1625D4731820363CEC027,
	NULL,
	NULL,
	PoseFrame__ctor_m96F23D9802A65B9F270AD2E78CAAB57FA9C759A9,
	PoseFrame_get_PoseData_m358899D89BEB7FBCC81B15DB6745CBE16D35B05F,
	NULL,
	NULL,
	Config_Create_m7FE42E2561BB8EBED5972D596D5520887101C32B,
	Config__ctor_m3F246BE25D516D7FF7B80636D35826DE46DFF423,
	Config_EnableStream_m320EE87B0F2C417B701790B10EFCD1907C33DB50,
	Config_EnableStream_m324BFB969D9DD3B932EEA96FACFC5BAAFC3443D3,
	Config_EnableStream_mC259D059519AE7D276D640B3BFCEB302DCE9A910,
	Config_EnableStream_m18E6C7740460E8D8D8B884E0C676D267E9F2515F,
	Config_EnableStream_mF36B75D07BBC3514EB64ECE74B34D47645AC3885,
	Config_EnableAllStreams_m1FAC992F7B91E34CB1904C0AD5E359CA386CE944,
	Config_EnableDevice_m443031EF609180AACC13419B4E4B7492F32A32F2,
	Config_EnableDeviceFromFile_mE80F9C8AB39A7D18A4803C7F971B02372E6BF8ED,
	Config_EnableDeviceFromFile_m469595B0A8B7DA906326FA289CEA67A016CA2356,
	Config_EnableRecordToFile_m932DC43A2DACCE52B49A1D34B63F0DC26F833516,
	Config_DisableStream_mD3B618D987C9C9F1340FF579E5D4AF3B9577496A,
	Config_DisableAllStreams_m8F9C1BBB35AF2D9630B3D38A543C854A94CE8ED7,
	Config_CanResolve_m4CF60E49D64C5049945B01E30AFD6979AFC79053,
	Config_Resolve_mEBF4570843321D1DD507F7B537F47BDA8D284C64,
	Pipeline_Create_mE2A30635D542E4337F67F3603F62D19F64C7EADF,
	Pipeline_Create_mE2A209D65236C311D5A23C244909585C1C284852,
	Pipeline__ctor_m97EC9E399A7C7532907D51F25E3D6E71895DF9E5,
	Pipeline__ctor_mB26D36AA95DBE8030DF7695B3A21EB946648B794,
	Pipeline_Start_mEB081628F88C07B01662C7EC074B4049E318F000,
	Pipeline_Start_m70465DE73DAB473A322B4279D1C31115E5C2C5CE,
	Pipeline_Start_m6355F1AF0632929FFA49EFC011C8643987673FEF,
	Pipeline_Start_m7F1576FA13C18DC8EF9251F2E3562C9E48EF7055,
	Pipeline_Stop_m39FC7E91A96BA526BC9911169417C7A2C5D1BE6F,
	Pipeline_WaitForFrames_m9E9963C638C8AD3E35AE45BC5ECB28D2CC1543E8,
	Pipeline_TryWaitForFrames_m2A224A0DBBD313A71E4D17BBEB52363F308CAE3D,
	Pipeline_PollForFrames_mE28FEEA7977C600AB625B47B303DEC7534D06529,
	Pipeline_get_ActiveProfile_mC99DB95E780EBE71B067BA76873586E7D4E37C2D,
	U3CU3Ec__DisplayClass7_0__ctor_m49703CF4DE1D508261935D9023409830A403816C,
	U3CU3Ec__DisplayClass7_0_U3CStartU3Eb__0_m833F367E42B185F117DE020437561ED804C6380D,
	U3CU3Ec__DisplayClass8_0__ctor_mBC20DE3D0483D595C43A0D411D87A78827C7EB5D,
	U3CU3Ec__DisplayClass8_0_U3CStartU3Eb__0_mA10BA2BC12848857AD13180A8038ECD4668E9A73,
	PipelineProfile__ctor_m17794CC56B28A9ADEC3D2FC0BEDF7C3EEEEA5E18,
	PipelineProfile_get_Device_m6F894CF699D4DD81124E8EA1B79BFFD3DA287AA3,
	PipelineProfile_get_Streams_m4AB79670A85865858270FD144921D9E73D8FFEE6,
	PipelineProfile_GetStream_m2C78EA621B282F35FD1552B34E51F9D37B224029,
	NULL,
	Align_Create_mAC5278D29DF1328A3DDE2022DA600AE583347846,
	Align__ctor_m36AB1104A49AAA766D674C651C0152B0F22DD78A,
	Align_Process_mA91C9463FF791185AE28A769DE19E14DC5BB2FD0,
	Colorizer_Create_mA0736FB00364B9BBC4578CEA2AAD17E2F628A8CF,
	Colorizer__ctor_m33DB2E49442E511A51A03B85BE613DBF5694B9C0,
	Colorizer__ctor_mA446F9E539CEDC82221A49AC58BC777759FE521C,
	Colorizer_Colorize_m4FAFAD28185727799B5334DDC4C722C5C03721AB,
	CustomProcessingBlock__ctor_mC714660C572ACD814B6B05755CD6A09C872BC171,
	CustomProcessingBlock_Finalize_m99AECC503080E3AC9C662F31ED53803D5EBAA325,
	CustomProcessingBlock_ProcessingBlockCallback_mBCA1AD42941BA813E5418272B5612800CFF8CD89,
	CustomProcessingBlock_get_Options_m0EB34B76C20D7A8551B297064B34956ADCF2550C,
	CustomProcessingBlock_set_Options_mB26C452A921440E9D714AE4C0DF3F771FB97940F,
	CustomProcessingBlock_get_Queue_m3D57961F5EF765441576D17B049D8E7997A7ADC4,
	NULL,
	CustomProcessingBlock_Start_m768D899DE9D5E2493F567141E2278CB20A907FCB,
	CustomProcessingBlock_Start_m03387AE81FCB6F51F91B55AC66397322F2A28973,
	CustomProcessingBlock_Start_m9E061EA79E953981E2E7D8F385907E7F9C7B7C6E,
	CustomProcessingBlock_RegisterOption_m594284E5FAA70850E7634AC40ACC757DC005FD63,
	CustomProcessingBlock_ProcessingBlockFrameCallback_m60D5EBFACC247AD068BAC76F816041E7B05E5057,
	CustomProcessingBlock_Dispose_mC391F89D080A86E072DF135D47CCF1828891F70D,
	CustomProcessingBlock_Dispose_m30E965BD3AC43C2FB75BBDD92DE87C9B95284EFC,
	CustomProcessingBlock__cctor_mEDE8CC67B06D8251FB2CFA9DA07ABBD341EEF91D,
	FrameProcessorCallback__ctor_m18CFDC8C584A68B62A4557F5D76C615D7E298459,
	FrameProcessorCallback_Invoke_mFBC84C817A26B143FD45E96C7BCB0CD7AE273B38,
	FrameProcessorCallback_BeginInvoke_m828C064E8282B23EC0F23814BAC6254BADB8ECFD,
	FrameProcessorCallback_EndInvoke_mAAA1D95F2A4931EE1D4D54505C74CB785CE306B5,
	DecimationFilter_Create_mF7EB4871BF7926E470BACBC552D269036AE53D86,
	DecimationFilter__ctor_m116187C994780C6F4936C091F2FFE1EF1E6EE2E8,
	DecimationFilter__ctor_m3300FAFCAD003C1C709D90010098EC2680B4AA36,
	DecimationFilter_ApplyFilter_m6EDC9A8B3318C15845BB16DF22B36C4BB32834A2,
	DisparityTransform_Create_mC884F0D357726027C4BDB2D9DB99108CB8BF87B8,
	DisparityTransform__ctor_mB0C1A94E3D847D263CC342D96D27FBCC7DA5DC60,
	DisparityTransform__ctor_m0AFE6883C9919FB4F5430DA2373688D5F18304ED,
	DisparityTransform_ApplyFilter_m2CC5D8FA2D33DE6A5A52C9D194CDAC5BB389DE12,
	FrameSource__ctor_mA8668D31C394FA6FCA1A41475AC15A3E0215FEB5,
	NULL,
	NULL,
	FrameSource_AllocateCompositeFrame_mFDB68FA935AE9FE7B306A8EE6D5EDBF5706CC89D,
	FrameSource_AllocateCompositeFrame_m9D3D367D2CC39F835EE6D42CC87671BDF22F62E7,
	FrameSource_AllocateCompositeFrame_m9E5D289E12132C8ACBB9E815F2DDE8B347F8F045,
	FrameSource_FrameReady_m00EABCFDF9B7EB76D5462FCFBCA4C4905B079932,
	HoleFillingFilter_Create_mFE125D52C0F10878B0C6496879689182BDEBFF54,
	HoleFillingFilter__ctor_mFF3AED5BEDD38F1BA84B84812CF4085675A64F92,
	HoleFillingFilter__ctor_mAEE464D5D59725587EE4EE1ACF7227BA97A9DF37,
	HoleFillingFilter_ApplyFilter_m4E7938AB38A59A46A3A284906D405192374BC45F,
	PointCloud_Create_m1E23211B533CAE419C74C50491E41AC62037FE2C,
	PointCloud__ctor_mAB7CBF07CDC4D4CCA9D7171FEE3B3DA5DA3AF43A,
	PointCloud__ctor_mDA364BEC240D836185E6F03BC8981B902652BB87,
	PointCloud_Calculate_m9201042DB8174DDFC691E964B05F1A8E725204EB,
	PointCloud_MapTexture_m4161393896F9576783597101F5A36B716A8DBBE1,
	NULL,
	ProcessingBlock_get_Options_m579A427FF3957C5D16C7AC2651FAD8E39CAF1354,
	ProcessingBlock_set_Options_mAEB856618F3860B607DCDCBAABD2AEB5D9CB6AB9,
	ProcessingBlock_get_Info_m12C672B3F2CDBDF3379560906D123601D09AD145,
	ProcessingBlock_set_Info_m39CA86A4EDC2359FBA71C3C596AF2C916CBA0EDA,
	ProcessingBlock_get_Queue_m1FDE72B050649E336AE40F477CFC567DEA31A1AA,
	ProcessingBlock__ctor_mBB81F4D8294B2AF5B2BE5307FDB941FDE2701935,
	ProcessingBlock_Process_mE99AA39FCBC3F1FF9490FEDF52D45722714F2CE9,
	NULL,
	ProcessingBlock_Dispose_m7D2F83DD0D827B618A4C74AA7F8719BC227CE7E4,
	ProcessingBlock_Is_m536B178EFD37EB403BE17586B4FFD231560D5849,
	NULL,
	IProcessingBlockExtensions_ApplyFilter_m321B683C224CCC61BB7D09387BD628266D9A8A1E,
	SpatialFilter_Create_mAE5E207EED76514FABBAF745BB725BA1E94B03E2,
	SpatialFilter__ctor_m80EAC4869BCBD549E65E12AC397093913158D43E,
	SpatialFilter__ctor_mE9DEC7D0DA5EF1DDBD93697E0F8415019A03F2EB,
	SpatialFilter_ApplyFilter_m8BC8A38EEB916CC453698C6F8D51E184F35295F9,
	Syncer_Create_mD019EB5603CEDDF21B3548ECCF64409DFD5B6A18,
	Syncer__ctor_m42DD0EAAB06541E566971781F857E9C68EF3C95E,
	Syncer__ctor_m33869E1A0033BC779326CEB70456DA7770864290,
	Syncer_SubmitFrame_mB60E5C88FE70725889109E77DF15FF5B434342A5,
	Syncer_WaitForFrames_m2C7C7AEAF94C93D9F1FCE45396521C0319D027C4,
	Syncer_PollForFrames_m46146BF662A19C653163CFC66BCB48AB2CDD3F17,
	TemporalFilter_Create_m77C699C107ED69719CFAFCC792C8FF12ECAED2DD,
	TemporalFilter__ctor_m81A821EB2001211AFC2160641967874B837E7706,
	TemporalFilter__ctor_m4A5D5D5C7FE7329505A69977C7461FFEDD4C9C90,
	TemporalFilter_ApplyFilter_m1EF69B9B84923F4655C538C200E0F5E81354EF30,
	ZeroOrderInvalidationFilter_Create_m8FF5E615C609A83BA25E060CE1A8DA83A99C69E9,
	ZeroOrderInvalidationFilter__ctor_mF6EAD2E4AAE3A9F80D3CD4C9404E819B3EA14E54,
	ZeroOrderInvalidationFilter__ctor_mA253B75219433632803774F8F7700252C2D99ED0,
	ZeroOrderInvalidationFilter_ApplyFilter_mCBB08FFBDF25E26FA0DD327DC46864ED0E6D31EE,
	ProcessingBlockList__ctor_m60CDF0EDFEEBC2F404547D64BB5CB28A2E1D307B,
	ProcessingBlockList_GetEnumerator_mDC1354306E9545929F4DDE8A678460A1FAC446A9,
	ProcessingBlockList_System_Collections_IEnumerable_GetEnumerator_m7DCF1AC9ECFA0C6FA547FC582D81587C1CC14616,
	ProcessingBlockList_get_Count_mD7C57A2791458FA2D4DA513D58739A468BD66BD8,
	ProcessingBlockList_get_SyncRoot_m1100401609E1B2C49B9F6325164E369A555D5149,
	ProcessingBlockList_get_IsSynchronized_mEE05B1CFCC75145722FDD2C180D8A4100E0A6B8D,
	NULL,
	ProcessingBlockList_CopyTo_mCBADE5A270C99A3D247213E30AC2BC8A722F7AC0,
	ProcessingBlockList_get_Item_mD44E8A2EFFA1E77054FAC664A91AB9AC0A8C0767,
	U3CGetEnumeratorU3Ed__1__ctor_m266D07C1A341838E3A5C97B468BBD1D6BA0775C0,
	U3CGetEnumeratorU3Ed__1_System_IDisposable_Dispose_mD8D86B7A71E1C59B467D781C0163FDC88FCA24F6,
	U3CGetEnumeratorU3Ed__1_MoveNext_mA041164DFF36AD28BAF5AFD87C33C9FD9D1EBF8D,
	U3CGetEnumeratorU3Ed__1_System_Collections_Generic_IEnumeratorU3CIntel_RealSense_ProcessingBlockU3E_get_Current_m8726C310338C11FB863FE82F14ECA36649840CBF,
	U3CGetEnumeratorU3Ed__1_System_Collections_IEnumerator_Reset_m5091A10841728405B60242565912507EA7EFF33A,
	U3CGetEnumeratorU3Ed__1_System_Collections_IEnumerator_get_Current_mE5296A5BFD50D202F5658998554FDE3FB3DE738C,
	ThresholdFilter_Create_mBD5E30E34B5ADDCB248A5B9060785EB8B49A3324,
	ThresholdFilter__ctor_m8CB914E1BB38DFE2E721326C2B2F4834B7BBF375,
	ThresholdFilter__ctor_m7829CC83A469F6DF4F2683E3A310759AA86009F0,
	ThresholdFilter_ApplyFilter_m911981CD6D89A8F35C293B15A56A883A6424E001,
	UnitsTransform_Create_m591C21DDD4EAC0CF2BEAA96154A01BB17DA8AB74,
	UnitsTransform__ctor_mCF3480472D06FFDF36DE0B4AFAA639208CC6EE90,
	UnitsTransform__ctor_mB8BB06672D306D7A11F93CDD85EEE65A1BABD1D2,
	UnitsTransform_ApplyFilter_m55CB08DA85B48AFA2D17F812DB94FC96545B1F8D,
	DepthHuffmanDecoder_Create_mFAFDE39071A781B2481934506160B72F3D220BF8,
	DepthHuffmanDecoder__ctor_mA3ED32DE8D3C0F4E965115E783DCDBF2AEAEA0B3,
	DepthHuffmanDecoder__ctor_m364643A05210440FBDEA1BB3DAC1B26D450A0D7C,
	DepthHuffmanDecoder_ApplyFilter_mA229310A21326974569B3041C1E7B9132BAA2AB7,
	StreamProfile_Initialize_m5D1F4FBD1B6245A101D10C5A04986AE496ACB466,
	StreamProfile__ctor_m2F13BEC60F1D1D5BD4E855C8EB4E6B66FD789C73,
	StreamProfile_Dispose_m4B075D2793E7ECFF16FE3848DAB0972F4D475BAF,
	StreamProfile_get_Stream_mD0DDF21548F9306FE5D0E9482DED169A151D4324,
	StreamProfile_get_Format_m41C77E43AF55637FA711947D0E1942DE9D0853B4,
	StreamProfile_get_Framerate_m7BB20A16ED0E6C2938C70097AE08C8A00C80FEDB,
	StreamProfile_get_Index_mF3AF6675BC5BBBDA20F92BC444AF38138FE8799A,
	StreamProfile_get_UniqueID_mC731218BAA96C3EF140D6FB3912EC1B9E1E5640B,
	StreamProfile_get_IsDefault_m9F0B9C4A9C5A7BBA01A5AE933EBD975C85DE5A5A,
	StreamProfile_set_IsDefault_m3DE3C8911B4F82FE804C00E129160E0259549AA1,
	StreamProfile_get_IsCloned_m19D5B4D4813FE1975DC10185B0114745B0DE4355,
	StreamProfile_GetExtrinsicsTo_mBB4EDBF0DD49E06C15911861FAE9D17EE14D3780,
	StreamProfile_RegisterExtrinsicsTo_mCDE5835E1D13C4A760096007FF06AA8CC9A44109,
	StreamProfile_Clone_mF7F116C27D1059AE8E978C8E9644EAC43643D50C,
	StreamProfile_Is_m9384D565153B7D1781A4271A0995B33C9BEE005E,
	NULL,
	NULL,
	NULL,
	StreamProfile_Create_m8E7D9ED445BBED9D3CE370C2C2C47948D08D28D9,
	StreamProfile__cctor_m0DDECEA616727728ED2BE89B8E15F9CA90E96E95,
	StreamProfileList__ctor_m35CFBE709157E012AC4347EEC1EDD33F3F075F6D,
	StreamProfileList_GetEnumerator_m22C29E074EF07C598AA87E3F6F261938BFA45740,
	StreamProfileList_System_Collections_IEnumerable_GetEnumerator_mF5BC80FEF8B3814FB8C314D74BA008D7D8632579,
	StreamProfileList_get_Count_m7E209405799AE1262D3350418C8A0F746CDEB868,
	StreamProfileList_get_SyncRoot_mF2D209569A6BA3921D458ACC34DCA29ECA599714,
	StreamProfileList_get_IsSynchronized_m95E3BEC1201E0528FB3FDA8A5A8FF0D9D1164252,
	StreamProfileList_get_Item_mBD2A7EE6648608A0F5110D6C65345DBEEDFFC144,
	NULL,
	StreamProfileList_CopyTo_m0068191481ECBF8FE4BB71C99F34D9682E976D36,
	U3CGetEnumeratorU3Ed__1__ctor_m105A99820051D984F4C1D1DCAE4D47EB95DC41B6,
	U3CGetEnumeratorU3Ed__1_System_IDisposable_Dispose_m854A8BD349B6624BEDC7BCBF3684D063D50E47B3,
	U3CGetEnumeratorU3Ed__1_MoveNext_mF4E5648DED22907D21255D95FA8E2962A5F40CC9,
	U3CGetEnumeratorU3Ed__1_System_Collections_Generic_IEnumeratorU3CIntel_RealSense_StreamProfileU3E_get_Current_mB0AB532222E8AD49F6BFB215CFBAC6EF3710CCFD,
	U3CGetEnumeratorU3Ed__1_System_Collections_IEnumerator_Reset_m2ACA60A0A5BDE6A7E069F94A9807A99B28F872CA,
	U3CGetEnumeratorU3Ed__1_System_Collections_IEnumerator_get_Current_m0B3E837D1617C05057C3B7B6C0643CD8F6E70301,
	VideoStreamProfile_Initialize_m8DEE5FE6FC8C1525A2294043C5E8BABB42BB3530,
	VideoStreamProfile__ctor_mF7CF11989EE9C7CA67202574A40BBC89B297E53C,
	VideoStreamProfile_GetIntrinsics_m6ED053473B83EF4FC3AD6C2ED583888D84E1C7FC,
	VideoStreamProfile_Clone_mF514B94F4EFE1CD929EAA51611AEF8651711A58E,
	VideoStreamProfile_get_Width_mA5C68D5575183BCDBF046393274514E44A8BCAFA,
	VideoStreamProfile_get_Height_mD3165342ABE9DD67613D4BFA7B673A68D6AB919A,
	MotionStreamProfile__ctor_m600B4A58AF540780048FE12E12FB3A80B087AB7A,
	MotionStreamProfile_GetIntrinsics_mAE38DCD126B218FAC50B7B6C3EF43EA5B27A004D,
	PoseStreamProfile__ctor_m7225E89D4B6DE2374B390528D67085927A339746,
	Sensor_Initialize_m61AEA740EC6CCF8A9EF813D7DFD301A0759E5457,
	NULL,
	NULL,
	Sensor__ctor_m83D9E2F39D350BEF301C73673BC2AB08BA49825D,
	Sensor_Dispose_m35E848822BD54426BD89186631FED11B0BE9FD2F,
	Sensor_get_Info_mE1FE6534D3EBC8F06730360221A87AD467800869,
	Sensor_set_Info_mDB5DB36200823B0444450A7409A576E044EBBA96,
	Sensor_get_Options_mB0F538BC407CE943D8A28DC448A30F2BF3847A7F,
	Sensor_set_Options_m9EBE6D8DE4D54227582F984106A080991CEEAB10,
	Sensor_Open_m58148D11C85338026DDF09DC4125B40039D43988,
	Sensor_Open_m601E3AE7AF9E8C26EC699677D192DD900E50BB92,
	Sensor_Start_m3AF58A5491941E19AAA93DF02DB990E8E49213AC,
	Sensor_Start_mDFC722BBFF7EA4BBFAEFD9A19770FB24E0DD2F5C,
	Sensor_Stop_mD459FF73605C5E3BB964AC1E26CF7640C30DCCA6,
	Sensor_Close_mC8F58B024215E566860AA68F034E19DA2960564C,
	Sensor_Is_mDC62202E43050DE23E1FDD4B06222310FD59DA85,
	NULL,
	Sensor_get_DepthScale_mD3D761CF297DFAA67DF0CEAB7310B241999F7E03,
	Sensor_get_AutoExposureSettings_mA65A3D1B87A45F1AA36CC87458C3A030AE835A6C,
	Sensor_get_StreamProfiles_m2495C684F23B82E6B15B82DD931BB18221154FA3,
	Sensor_get_ProcessingBlocks_m0D7B2F2FD08072DEB5454067C57D0136FFE1DBD3,
	Sensor__cctor_m8FEF4DDCA3F96B8ABDAE090CDA310A2A657D9C14,
	CameraInfos__ctor_m1A40507493C7B0AAD5B8715070BEA7C2DCADE916,
	CameraInfos_get_Item_m20B76CBFFBA81412FDE3B79BCB261A7F492EBDF1,
	CameraInfos_GetEnumerator_m5811EA6CCF7579565D3551E38C1C9457B23E848B,
	CameraInfos_System_Collections_IEnumerable_GetEnumerator_m0D6A93D9EC40A220299CC83F67D68E6BBD7F070A,
	CameraInfos__cctor_m670ACC95ACBEC4C714798C3B9264F9901FC5798D,
	U3CGetEnumeratorU3Ed__5__ctor_m6DCE0B340B8FB362E04AD6169BC127A06B64E1FA,
	U3CGetEnumeratorU3Ed__5_System_IDisposable_Dispose_m5223E8E16C4BF4F059DBB2358FFC00692EC2C472,
	U3CGetEnumeratorU3Ed__5_MoveNext_mB6E4B90679E75AFCB630E4AF1AAE9461F23E4060,
	U3CGetEnumeratorU3Ed__5_System_Collections_Generic_IEnumeratorU3CSystem_Collections_Generic_KeyValuePairU3CIntel_RealSense_CameraInfoU2CSystem_StringU3EU3E_get_Current_m104CE4DFB83FD7B14A91CC319468A952F62C1355,
	U3CGetEnumeratorU3Ed__5_System_Collections_IEnumerator_Reset_mD5DC123A862E063B11EC07C17C3CED3677A7ADCA,
	U3CGetEnumeratorU3Ed__5_System_Collections_IEnumerator_get_Current_m6289A62168BE276D900F06FE9FDA632BF5F308C2,
	U3CU3Ec__DisplayClass21_0__ctor_m0A564D155C9F7D6EEBA26C0AC7B3C9E4A4ED3A72,
	U3CU3Ec__DisplayClass21_0_U3CStartU3Eb__0_m899BFA7019110866D7B608676F4E0B11E564E875,
	SensorList__ctor_m9350F20CA413C985934E5F4E1DB3F841B87562CD,
	SensorList_GetEnumerator_mD6B02A8E893610B50B571DA877F40EFF0B262907,
	SensorList_System_Collections_IEnumerable_GetEnumerator_m3508581FCFEED3456317A4C92D5AA9DB73E28422,
	SensorList_CopyTo_mF63876E72983647D1499E32BBA0F4B5D4ACACE78,
	SensorList_get_Count_m33B8195A3FCC38CDD27D29F414CA7D7BEC7FACFE,
	SensorList_get_SyncRoot_mD41F16F82FA7D25F21F0D2E37A65AE7CD972E842,
	SensorList_get_IsSynchronized_m3D7D527328E63FA2E58E2B5CBC24E3F41F626812,
	SensorList_get_Item_m0B4F9DD244FA171604E0F99F032726DE4D7C9567,
	U3CGetEnumeratorU3Ed__1__ctor_m00F0A220891E04B6C33164F8E5F03140C2041177,
	U3CGetEnumeratorU3Ed__1_System_IDisposable_Dispose_m1C7ECF8476B3236CAA4467CE42B73F6807DE9C93,
	U3CGetEnumeratorU3Ed__1_MoveNext_m8B6F5D9E4DD8662B43034443716AC4B1415A6F7E,
	U3CGetEnumeratorU3Ed__1_System_Collections_Generic_IEnumeratorU3CIntel_RealSense_SensorU3E_get_Current_m34CF4DB190F450E993F089126DC3AAC108A1E9A7,
	U3CGetEnumeratorU3Ed__1_System_Collections_IEnumerator_Reset_mE8456A19B3EC6BAB815FBD0FFB7A8804E356C9F8,
	U3CGetEnumeratorU3Ed__1_System_Collections_IEnumerator_get_Current_mC4E3AEDBF04F0DA8ED2D2666DAAFBA235F3A2B40,
	SoftwareSensor__ctor_mAE910AF5A53761F5E7A0475A3BA12D83A6AF3A4F,
	SoftwareSensor_AddVideoFrame_mFF0905C2D171BF4C0BA690F0FCDAB50D06F8E4F9,
	NULL,
	SoftwareSensor_AddMotionFrame_m71BDA677BC48DA1F3F08122307BDC497C1AF30B8,
	SoftwareSensor_AddPoseFrame_m4ACAF7ED910B6368FDDF24CD3EAFBC166B497BD8,
	SoftwareSensor_AddVideoStream_mEEA13AF0B87BCC0FF420C78006D3978AA6F889F8,
	SoftwareSensor_AddMotionStream_m054226F42624E200797F2328C86A4E58CD9EABF3,
	SoftwareSensor_AddPoseStream_m9E352E4983D3D28CE3ABC22CE6730E927CF70C01,
	SoftwareSensor_SetMetadata_mE007471C92A1447277894D8795410614E80552EA,
	SoftwareSensor_AddReadOnlyOption_m091F1CA9998424B567B5F859856B4FAC98A533FF,
	SoftwareSensor_UpdateReadOnlyOption_mE2625615DC2BD72B102C52CE70BF9C85BC351EC0,
	NULL,
	NULL,
	NULL,
	PoseSensor__ctor_mA62C564E1DED6125EC8B71491E174D8AAFE5E5A9,
	PoseSensor_FromSensor_mC4924A836C8D8A8EC440BA1167A5278ECA93CB53,
	PoseSensor_ExportLocalizationMap_mB93754439F973C2EE9449147B0A0DE393F9540F3,
	PoseSensor_ImportLocalizationMap_m2A2107DEBBBAA901AA170AD59E62B18BFDA873EF,
	PoseSensor_SetStaticNode_m3B01C072B5E096A5C6643225F33C4B9CD43CCF5F,
	PoseSensor_GetStaticNode_m8D6A6EBED24EE77B1713D145A3EED018E8DFAD92,
	AutoExposureROI_GetRegionOfInterest_m5FBB4F9CBA27233E672F45DE15F1185ACB656DBA,
	AutoExposureROI_SetRegionOfInterest_mFB1924CC42FD335650D0DF5020B1211925C6BAD4,
	AutoExposureROI__ctor_mB3D6930A23FDDD2A3C9E41C6F6C0E406D9BF8C85,
	FrameCallback__ctor_m354B1E847C20129E9151A191DCDA77F9B2CEFB46,
	FrameCallback_Invoke_m960F646C59099FC30777D80B8F8494929B9ACFD2,
	FrameCallback_BeginInvoke_m26F2EF3C34391D2CB96354EC4F05A7347C459263,
	FrameCallback_EndInvoke_mD7F48892748E545185953171D2C869E6D4A9FC56,
	frame_callback__ctor_m617FAC0C1B0F1BA3DB8B09E66A9AF20972AACF60,
	frame_callback_Invoke_m5EEBA6EFD272540A4EA8B81CCA30F25DB7FF30F2,
	frame_callback_BeginInvoke_m5F56063EA0ED66B5983B9F7F201884C8ABC1A077,
	frame_callback_EndInvoke_mFD47334E72DE3D3E44321381EE6269F0F13A2893,
	frame_processor_callback__ctor_m438A19B40B879F633681F1928F53BAB3B794B60B,
	frame_processor_callback_Invoke_m546EBAE06E068D08B861EBB6C088A72BC982FD33,
	frame_processor_callback_BeginInvoke_mC2E9278C54E366E9CAAE14C324B43E455D716A65,
	frame_processor_callback_EndInvoke_m65012EA8D4A5C109ED79BB00828B1472B170DB70,
	frame_deleter__ctor_m6B7222FF0DD26BE60F353A584D3F4D33D1674678,
	frame_deleter_Invoke_m7561652636F0D1E3B70DA57691624454C26959D4,
	frame_deleter_BeginInvoke_m06BEB228DEE381AE4A75504B21870FE574D1B7C7,
	frame_deleter_EndInvoke_m34008B2EFC547F6ED9BEA39543EB1E9B7B121114,
	rs2_devices_changed_callback__ctor_m365B2C1EFB242BD1727B6F4377D02C3B7A6E0A3B,
	rs2_devices_changed_callback_Invoke_m18FCB0AF9FFBB40D57B741FE2EF95DF4EFFBC22B,
	rs2_devices_changed_callback_BeginInvoke_m42049D26441860036AE2375D59BAB597B224345E,
	rs2_devices_changed_callback_EndInvoke_m2D671B7DD473C926CD3F1958608A7B04ED95B6E6,
	rs2_update_progress_callback__ctor_m4177FBDF045840F22F20E45C625385B7EC0AC18B,
	rs2_update_progress_callback_Invoke_mEB4F43AA000AF5C68C61D1C8408A54E0333188A9,
	rs2_update_progress_callback_BeginInvoke_m958DEDFB7260C8E2857A6F533624960F6F7CE87A,
	rs2_update_progress_callback_EndInvoke_m50FB7051B8857E05F5F00A8A7F71473B6519F693,
	Intrinsics_ToString_m1EC19569E3A28C1E87695007C535124C2612454F,
	Intrinsics_get_FOV_mCD5633FD7EA2692854593F3D726F4F523DA417DB,
	SoftwareVideoFrame__ctor_mE348DBD924376C236983F6F3348DCE679BD9E56B,
	U3CU3Ec__cctor_mDE20E6B41EFB2BBE338464D8CF777828C446D44B,
	U3CU3Ec__ctor_m03BA5A377312A9051CBFDFC2CB505C4258B5846A,
	U3CU3Ec_U3C_ctorU3Eb__8_0_m3EA1C499678CE1BBFB113F9CC2AF179C4CB81CC6,
	SoftwarePoseFrame__ctor_m46B4AA59F8BA69418C35215F3BDE870D72494A6C,
	PoseFrameInfo__ctor_mBBEE6585B1060658A9E5EFCDDE2967E7BA780021,
	U3CU3Ec__cctor_mC375E0C6DC1014573061384805B2D59CC085ED36,
	U3CU3Ec__ctor_mD3658EE5C04AABC796710ED15251916DDC7E220E,
	U3CU3Ec_U3C_ctorU3Eb__8_0_mA68D18E0A12FB12E4B57EC6C024E35816DFD958C,
	SoftwareMotionFrame__ctor_m5B700BF4766D849BAE2994093C28D7305E906D77,
	U3CU3Ec__cctor_mD6D48DE66926F39274E43884C618395694325709,
	U3CU3Ec__ctor_m501B7F74797A73F8693BD06FBCE19D668353FC87,
	U3CU3Ec_U3C_ctorU3Eb__6_0_mF6660287FEA3850596CF18B1E938B83BBE8CE580,
	Pose__ctor_m1443039F19C19D730623BF387027CFB52D03D829,
	InfoCollection_get_Count_m6529120B6D1CFE243DEE995706ED95164F5E0899,
	InfoCollection__ctor_m2862CD4104A5477E5A9D94AB51C94F58978923E0,
	InfoCollection_GetInfo_m018400A298BA4BFB6266691E028579BA09412D6F,
	InfoCollection_Supports_m3C5D898A1C74C0ECF06A4DDC2A310A80799214B1,
	InfoCollection_get_Item_m4B597199E8D463605288739DC5CF4D93B8C98D71,
	InfoCollection_GetEnumerator_m83AE5D867C8A6CA373AE7A36C7BD30C20B8CD161,
	InfoCollection_System_Collections_IEnumerable_GetEnumerator_m54523B48BD924F8E373DDF04C9CD76C05677CE43,
	InfoCollection__cctor_mB481E62BA11BEE3DF82BB3D430D7020C74EC065B,
	InfoCollectionDebugView_get_Items_m9138BDD53B0FCEF6EF342E9913F74C892DBA3D33,
	InfoCollectionDebugView__ctor_m2746D22D27B4840950A2AD5DFEBB78CE1D514AB2,
	GetInfoDelegate__ctor_m856290BEF7E827FFD7467F3E306EA49BCF754F2B,
	GetInfoDelegate_Invoke_m1D4DE6A5220A9015C8C024A6073A6B97D42E24EC,
	GetInfoDelegate_BeginInvoke_m735A28944864D5551E6ACBE7294A7BFF07EA8281,
	GetInfoDelegate_EndInvoke_m5957DE72C994D8F44132F9BB6E17199E24BD958D,
	SupportsDelegate__ctor_m5CE97BE47446D4E5A8D002D80F5B4E9C0F78E8C0,
	SupportsDelegate_Invoke_mC92658F95B0BC5818216A38776E158B54632AF3B,
	SupportsDelegate_BeginInvoke_m2926AB3763CEF8A0105629AF7279F89E1BB69821,
	SupportsDelegate_EndInvoke_m5935A74574791D9F743ECF6AF7345387B151BF95,
	U3CGetEnumeratorU3Ed__14__ctor_mF0A124B44054BB8EFA9B9F510B34876C9F280B8D,
	U3CGetEnumeratorU3Ed__14_System_IDisposable_Dispose_mE679D458BA134456E8AB5DA0D38891F968D6A13C,
	U3CGetEnumeratorU3Ed__14_MoveNext_m8D5A6EABCB8C77EF21B499B166CE5CC6D338B450,
	U3CGetEnumeratorU3Ed__14_System_Collections_Generic_IEnumeratorU3CSystem_Collections_Generic_KeyValuePairU3CIntel_RealSense_CameraInfoU2CSystem_StringU3EU3E_get_Current_mF743FD979535545A8523F9055F9EB4F6B60783A1,
	U3CGetEnumeratorU3Ed__14_System_Collections_IEnumerator_Reset_m8A7F6B1A8E72AFE1E153298A60678E207B3F0646,
	U3CGetEnumeratorU3Ed__14_System_Collections_IEnumerator_get_Current_m46DFAF5ACD6893BDDC194D6E11B9D96A8A0357AF,
	FwLog__ctor_m3E224F95A9241D5D1B19CE1407A8E7DA9BA4657D,
	FwLog_Create_m2AE3B767626C1895A3759C27755B19548280D834,
	FwLog_GetData_m0433172D8357A77EDB6F47569AF5D5D0019B0DEA,
	FwLog_GetSize_mF0FD8CE6C008ED3107471AC36275EC76E15DAAA8,
	FwLog_GetTimestamp_m2469348154BF011A9BE54DD8F90ECE1DCD86BC1E,
	FwLog_GetSeverity_m241A61910969C34BD76E5746EE694C9CA906C3D4,
	FwParsedLog__ctor_m1D6AC49AE14AC96488ACD1651AFFAF7D63A78D9A,
	FwParsedLog_Create_m0BA9F27B6160E22E8A737E393FE6C306EE07445E,
	FwParsedLog_GetMessage_m07DBB1158704C5015DFCC7E24C8080D0634EB2A7,
	FwParsedLog_GetFileName_m75FE3FEC01B6B7016CB64158ED40A0689503DC8F,
	FwParsedLog_GetThreadName_m2FD3E85DB844BB98F03D88D2433DF618A61710DC,
	FwParsedLog_GetSeverity_m15CE52DD3813B3B88F9315B1DC4F127B0C99F073,
	FwParsedLog_GetLine_m30B4917004F9835D28B0D62223ABAB4EDFA0BB18,
	FwParsedLog_GetTimestamp_m0BACF4BBD4D60F239076A7CABD9E7A8081715D31,
	TerminalParser__ctor_m9DAF9C1291BD3101462E601275A1464689B3A6DB,
	TerminalParser_Create_mFF67326CFD518AC3EAF758DDFB054FF5A3311E7C,
	TerminalParser_ParseCommand_m65E43713C7323382DA906D1EF2CB3D472F375E1C,
	TerminalParser_ParseResponse_mE4D355349E3937728DDB1D497E1D45DFC553438F,
	ErrorMarshaler_GetInstance_m71B76E54BFF3C6F2A671A8D6BFE12D41855AA824,
	ErrorMarshaler_CleanUpManagedData_mC7CB3712CA81F9E5EFD23702FE15AA5C7D7C3E20,
	ErrorMarshaler_CleanUpNativeData_m396E99B68592F5A7F082D39BDA51762E6AFBD14D,
	ErrorMarshaler_GetNativeDataSize_mC8D48CA4726912A8A21206FAD539763B73425F11,
	ErrorMarshaler_MarshalManagedToNative_mBC4FD4DDA2D68F54E4879FCC1D12F3DA5FC5D3D3,
	ErrorMarshaler_MarshalNativeToManaged_m5F0249135E448E34537B2858041C8C9F7FCD2196,
	ErrorMarshaler__ctor_m3813EA5C7E717E2FF3A221CC56496EA50C628CC3,
	ObjectPool_GetPool_m5E014F548B4940CA5464112AA50168280BA4D888,
	ObjectPool_CreateInstance_m18D87CC1FFB00BDFEBA8AE2917368C2D255DDC38,
	ObjectPool_Get_mCDB62BABAA7AE74119060EDAFEE74CCC5044E836,
	NULL,
	NULL,
	ObjectPool__cctor_m87FBB77BD52F97B3286EF9C9DA6549B369B1D387,
	TypeComparer_Equals_mDE77B516A1C6A911A492C8705176CC4850B71263,
	TypeComparer_GetHashCode_mEEA4F98A4E7467BFB07DD525B1774051C00D2DAF,
	TypeComparer__ctor_mA08306E3D74D5BE8A41E9183CA280A28A297C223,
	TypeComparer__cctor_m01E4232CC1839A711E402172BD293FBDA8269810,
	Log_ToConsole_m85F7A7F2DB32C5E589232F8CE333E4D15EE1E225,
	Log_ToFile_m6DC3356997504B0D9195C51EAD0B31F4F923F521,
	Log_LogMessage_mC03DC3B86ABF9EA02CE6197490B2598E60A22A44,
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
	OptionsList_get_Count_mC206026C322760D9C08CB7342F5810F8E8869824,
	OptionsList_get_SyncRoot_m925EDA0386DC4C0A07CBD6246DA09BCBD69A0F38,
	OptionsList_get_IsSynchronized_mB491913DB8E7D4756AB496AADFA70877E0BCFA6A,
	OptionsList_Create_m9537E3EA3F6D72C804670B9E8B7C66CE04841A91,
	OptionsList__ctor_m13F0A742D7E01D280C56C1CF6C25B07E4AA07F47,
	OptionsList_get_Item_mA7F5C432AD276A572B10EE1D1D5BED4FE3D7893F,
	OptionsList_Supports_mC341A149D1146AA0BC6B18BA6C78C1D65EFAEF74,
	OptionsList_OptionValueDescription_m52D2494A442429CCB02C9FA271147664D7C573F0,
	OptionsList_GetEnumerator_m8E22C4434DF2ED8B39AD467547E716F9F50FAE77,
	OptionsList_System_Collections_IEnumerable_GetEnumerator_mD411AFAFF93E4E14765567AEA7BF9B4235B5F84E,
	OptionsList_CopyTo_mC2C08118B26A45BDD31A8F31270A25A3298B9112,
	OptionsListDebugView_get_Items_mFA775D80AA311365749E60D271F6A1DF3D8A74B7,
	OptionsListDebugView__ctor_m3E62B61EC361D62553E937C8A348172112E0780F,
	U3CGetEnumeratorU3Ed__14__ctor_m22A827DAF7C4DC41545BA18862F39BA70FBAE68E,
	U3CGetEnumeratorU3Ed__14_System_IDisposable_Dispose_mE7FEB0486BBCBFFDA06A6B0CE03DDBD6EBA49BC3,
	U3CGetEnumeratorU3Ed__14_MoveNext_m08E5D45198916DCF0F46DD97CC2F2F222ED3BA5C,
	U3CGetEnumeratorU3Ed__14_System_Collections_Generic_IEnumeratorU3CIntel_RealSense_IOptionU3E_get_Current_m43B786BD219FC4EA8CFAFCC8E9D1B3B1BE8071FD,
	U3CGetEnumeratorU3Ed__14_System_Collections_IEnumerator_Reset_m431915313DC202404742CD1B7A14E2B159124D6F,
	U3CGetEnumeratorU3Ed__14_System_Collections_IEnumerator_get_Current_m434103F141A42096830BC2486DDEF98732B64AB2,
	OptionInternal__ctor_m0E08310B0247757B9BBDB07BEC1D0FB1277AA7A9,
	OptionInternal_get_Description_m2AE4AC80AB8B24B384BA957BFBFF13081AB41D68,
	OptionInternal_get_Value_m071FB97659CD8FA38B08FA4FCDEF7107E43D0EAC,
	OptionInternal_set_Value_m55146946396657E09A4ED1CDF10940C99FF27599,
	OptionInternal_GetValueDescription_m309395029D6FDF192E34A69ABFEEE46DB757DB1E,
	OptionInternal_get_Key_m5C88F38792F6FF8CA053935268071DBE184A75AA,
	OptionInternal_get_Min_m8F000E071C2782E45585D268E0DB96132DAEBEB3,
	OptionInternal_get_Max_mD169BA520876157EB25BD39F0CE9F6D8516C8890,
	OptionInternal_get_Step_mAD7B167B84AA43003E4ECBC07AC80D76C7DF0C8D,
	OptionInternal_get_Default_m770ADBC74AEBAF7961FEFADD2F06DD9D5963963D,
	OptionInternal_get_ValueDescription_m7873A85314048DEFEA1C1779AEFD4A97FDE05EE2,
	OptionInternal_get_ReadOnly_m536A3B94D3028598A959654118A2A57016EAF08E,
	Deleter__ctor_mABCF8707A24D88DBE18C71276BE7FC9D119689E0,
	Deleter_Invoke_mA8A03EB1902848639734C12700F4D7A3863461F9,
	Deleter_BeginInvoke_m32FABC2737A1266A870A231071697F3DC9C22ED8,
	Deleter_EndInvoke_m6BE3A185CCC34048A4FBCFCD0F169104275D665B,
	DeleterHandle_get_Handle_mEFA023D4C0FCEDD5DA1FFC2C169E0AEE09296DE5,
	DeleterHandle_get_IsInvalid_m5C9C1AC778079EFCEFCCCEEB1960D0DA6578D7AA,
	DeleterHandle__ctor_mB4FDBAF55535905DB8B44DC1DB62A2F7B59B6AC9,
	DeleterHandle_SetHandleAsInvalid_mEA1B0CBC00948AEEA9480443109FE94CC2BA96DF,
	DeleterHandle_Dispose_mD4F4C5C3E5A65AABBCBBE7A5822CEBA139EA083D,
	DeleterHandle_Dispose_mD3A0D35A7E37D2E56FD8761EE23983C377BC9D3C,
	DeleterHandle_Reset_mE2ECBF662DA2146EFC3092268537B77DCD6C662D,
	DeleterHandle_Reset_m3B27FA65845C9E31E18329B210307AA86F84D857,
	DeleterHandle_Finalize_mEE60A5C1911696117EB9994859C2E89E42CFDE8C,
	Object__ctor_m6DF77A0CE068F1F3C037D14E2030DA468540E6E5,
	Object_get_Handle_m96B34CD2853888B951499B2A690361475521027B,
	Object_Dispose_mF9CEF11582FACFF8209F0A1E82D4020309608293,
	Object_Dispose_m8EBCE4AF365CE2393E4B76B0764E8ECDD58852CF,
	Object_Reset_m7B418F064874B5B375C31A08F4FFCEDF379F27B3,
	PooledObject__ctor_mE8AD5B256DAC557698B67C3E1C6061B8B1FB6E8E,
	NULL,
	PooledObject_Dispose_m0250FF8608B96A963C6CF3C0ABD2973ACB839EE5,
	RefCountedPooledObject__ctor_m937F87C5F16602B33F222C90E9F1B4582E6F3EA9,
	RefCountedPooledObject_Retain_m16DB04E55B7F2F0CC28645F7942AEBF9452399BE,
	RefCountedPooledObject_Dispose_mD4826D5E95AC491FC8BBAB42509CCA4380F2CA67,
	RefCountedPooledObject_Release_m2912A7DEC6C283D2BCA3896A3792B86D48843A74,
	RefCountedPooledObject_Initialize_m63CC31435A1F2C655080E84ABF5D80111D9E9DBE,
	RefCount__ctor_mC2688B4E2EB0E183DD7B62EDEE4984A1CB7D598D,
};
extern void FrameSource__ctor_mA8668D31C394FA6FCA1A41475AC15A3E0215FEB5_AdjustorThunk (void);
extern void FrameSource_AllocateCompositeFrame_mFDB68FA935AE9FE7B306A8EE6D5EDBF5706CC89D_AdjustorThunk (void);
extern void FrameSource_AllocateCompositeFrame_m9D3D367D2CC39F835EE6D42CC87671BDF22F62E7_AdjustorThunk (void);
extern void FrameSource_AllocateCompositeFrame_m9E5D289E12132C8ACBB9E815F2DDE8B347F8F045_AdjustorThunk (void);
extern void FrameSource_FrameReady_m00EABCFDF9B7EB76D5462FCFBCA4C4905B079932_AdjustorThunk (void);
extern void Intrinsics_ToString_m1EC19569E3A28C1E87695007C535124C2612454F_AdjustorThunk (void);
extern void Intrinsics_get_FOV_mCD5633FD7EA2692854593F3D726F4F523DA417DB_AdjustorThunk (void);
static Il2CppTokenAdjustorThunkPair s_adjustorThunks[7] = 
{
	{ 0x06000242, FrameSource__ctor_mA8668D31C394FA6FCA1A41475AC15A3E0215FEB5_AdjustorThunk },
	{ 0x06000245, FrameSource_AllocateCompositeFrame_mFDB68FA935AE9FE7B306A8EE6D5EDBF5706CC89D_AdjustorThunk },
	{ 0x06000246, FrameSource_AllocateCompositeFrame_m9D3D367D2CC39F835EE6D42CC87671BDF22F62E7_AdjustorThunk },
	{ 0x06000247, FrameSource_AllocateCompositeFrame_m9E5D289E12132C8ACBB9E815F2DDE8B347F8F045_AdjustorThunk },
	{ 0x06000248, FrameSource_FrameReady_m00EABCFDF9B7EB76D5462FCFBCA4C4905B079932_AdjustorThunk },
	{ 0x06000318, Intrinsics_ToString_m1EC19569E3A28C1E87695007C535124C2612454F_AdjustorThunk },
	{ 0x06000319, Intrinsics_get_FOV_mCD5633FD7EA2692854593F3D726F4F523DA417DB_AdjustorThunk },
};
static const int32_t s_InvokerIndices[943] = 
{
	14947,
	9911,
	9732,
	14884,
	7996,
	7996,
	7996,
	7996,
	6200,
	9732,
	6193,
	7996,
	2406,
	4653,
	4660,
	1487,
	7996,
	12371,
	12371,
	12374,
	13832,
	13832,
	13193,
	13202,
	13193,
	13179,
	12877,
	13179,
	13832,
	13832,
	12868,
	13134,
	12878,
	13134,
	12893,
	13832,
	14319,
	14319,
	14319,
	12385,
	12060,
	10364,
	12366,
	12285,
	12878,
	12878,
	14714,
	13189,
	14714,
	12366,
	11520,
	12282,
	13837,
	13189,
	14319,
	14319,
	14319,
	13206,
	14319,
	14319,
	14319,
	14319,
	14319,
	12285,
	12632,
	12040,
	13193,
	13134,
	12285,
	14714,
	12285,
	10433,
	12366,
	11752,
	12346,
	12285,
	13134,
	13065,
	13193,
	13179,
	13134,
	13193,
	13134,
	13134,
	13134,
	13134,
	13832,
	14714,
	14714,
	13193,
	13193,
	13134,
	12060,
	13193,
	12285,
	10220,
	11037,
	11756,
	11753,
	12366,
	13134,
	12878,
	12884,
	14714,
	13134,
	14714,
	12366,
	13193,
	12366,
	12285,
	12285,
	13662,
	10652,
	10647,
	12878,
	12057,
	13832,
	12060,
	12878,
	13832,
	12060,
	13193,
	13065,
	13134,
	13134,
	13193,
	13193,
	13193,
	12366,
	12366,
	10431,
	11295,
	11033,
	10271,
	14714,
	12285,
	12285,
	12031,
	13134,
	13134,
	14714,
	13134,
	14714,
	12043,
	12047,
	12862,
	13193,
	11525,
	10760,
	10758,
	12294,
	11525,
	10761,
	12862,
	13134,
	14714,
	12289,
	12366,
	14714,
	12366,
	12285,
	13832,
	11753,
	12285,
	13193,
	13832,
	10658,
	11758,
	13189,
	14714,
	12374,
	12884,
	13193,
	12366,
	13193,
	14714,
	12369,
	12289,
	12060,
	12878,
	13134,
	14714,
	13193,
	14280,
	13819,
	12856,
	12856,
	11942,
	13662,
	13662,
	14233,
	12868,
	12862,
	12878,
	12048,
	12878,
	12048,
	12878,
	12048,
	12878,
	12048,
	12878,
	12048,
	12878,
	12048,
	12878,
	12048,
	12878,
	12048,
	12878,
	12048,
	12878,
	12048,
	12878,
	12048,
	12878,
	12048,
	12878,
	12048,
	12057,
	13193,
	11031,
	11032,
	14319,
	12374,
	12884,
	12884,
	12884,
	12041,
	12868,
	12381,
	12379,
	12380,
	12040,
	12040,
	13193,
	14714,
	12289,
	12289,
	13193,
	13134,
	13134,
	13134,
	12294,
	13193,
	14714,
	11528,
	13193,
	13193,
	13193,
	13134,
	13134,
	13134,
	13202,
	14714,
	11756,
	10548,
	13193,
	13832,
	12366,
	11517,
	12282,
	14714,
	13193,
	12369,
	11758,
	11038,
	13193,
	13193,
	13193,
	14714,
	14319,
	14714,
	10310,
	13832,
	12884,
	12884,
	12057,
	12884,
	12868,
	12035,
	13832,
	12369,
	12289,
	14325,
	14325,
	14325,
	14293,
	14325,
	14947,
	4653,
	1964,
	700,
	6076,
	14895,
	7943,
	14456,
	9800,
	8056,
	9732,
	7996,
	7943,
	14456,
	6193,
	9911,
	8056,
	7943,
	4605,
	0,
	0,
	9732,
	7996,
	9732,
	9732,
	9911,
	6825,
	0,
	14947,
	7943,
	9732,
	9732,
	9672,
	6186,
	6879,
	14947,
	9732,
	7996,
	7940,
	9911,
	9800,
	9732,
	9911,
	9732,
	7943,
	14456,
	9732,
	7996,
	9911,
	9911,
	9911,
	9672,
	9673,
	9673,
	7941,
	7941,
	9800,
	8056,
	8066,
	7943,
	13205,
	4660,
	14456,
	9911,
	9911,
	9732,
	14884,
	9911,
	6193,
	7996,
	7940,
	6076,
	7943,
	14456,
	9911,
	9732,
	7996,
	7996,
	4758,
	4653,
	8066,
	2028,
	7996,
	7943,
	14456,
	7996,
	7996,
	7996,
	4758,
	4653,
	8066,
	2028,
	7996,
	7943,
	14456,
	9732,
	9732,
	6686,
	6686,
	6879,
	3517,
	7943,
	3752,
	9811,
	9911,
	7943,
	14453,
	0,
	0,
	6825,
	0,
	0,
	9732,
	9911,
	9800,
	9672,
	9675,
	0,
	9732,
	9673,
	9597,
	9732,
	9672,
	6066,
	6066,
	6825,
	14947,
	7940,
	9672,
	7940,
	0,
	6186,
	0,
	0,
	6186,
	7996,
	14323,
	14456,
	13279,
	9911,
	7943,
	9800,
	9732,
	7996,
	0,
	3165,
	0,
	0,
	3165,
	9732,
	9732,
	9732,
	9732,
	9732,
	9732,
	9732,
	9672,
	6186,
	3165,
	1984,
	14453,
	8056,
	7996,
	7996,
	9732,
	9732,
	9911,
	9800,
	9911,
	9911,
	6879,
	9911,
	6879,
	14947,
	9911,
	7996,
	14456,
	0,
	7996,
	8056,
	9911,
	9911,
	9911,
	14947,
	9911,
	7996,
	7943,
	9911,
	9672,
	7940,
	9675,
	0,
	0,
	9675,
	0,
	4660,
	7943,
	9672,
	9672,
	9672,
	9672,
	0,
	7943,
	0,
	7943,
	7943,
	9811,
	7943,
	9893,
	7996,
	0,
	0,
	7943,
	9732,
	0,
	0,
	14884,
	9911,
	4246,
	336,
	811,
	2354,
	1660,
	9911,
	7996,
	7996,
	4674,
	7996,
	4246,
	9911,
	6879,
	6193,
	14326,
	14884,
	7996,
	9911,
	9732,
	6193,
	6193,
	3187,
	9911,
	6186,
	3392,
	6686,
	9732,
	9911,
	4604,
	9911,
	4604,
	7943,
	9732,
	9732,
	3165,
	0,
	14323,
	7940,
	3187,
	14884,
	7943,
	9911,
	3187,
	7996,
	9911,
	12880,
	9732,
	7996,
	9732,
	0,
	7996,
	9911,
	7996,
	748,
	13837,
	8056,
	9911,
	14947,
	4653,
	4644,
	1465,
	7996,
	14884,
	7943,
	9911,
	3187,
	14328,
	7943,
	8056,
	3187,
	7910,
	0,
	0,
	3187,
	6193,
	6193,
	7996,
	14884,
	7943,
	9911,
	3187,
	14884,
	7943,
	9911,
	3187,
	7996,
	0,
	9732,
	7996,
	9732,
	7996,
	9732,
	7943,
	6193,
	0,
	8056,
	6825,
	0,
	13279,
	14884,
	7943,
	9911,
	3187,
	14884,
	7943,
	9911,
	7996,
	6186,
	6686,
	14884,
	7943,
	9911,
	3187,
	14884,
	7943,
	9911,
	3187,
	7943,
	9732,
	9732,
	9672,
	9732,
	9800,
	0,
	4650,
	6186,
	7940,
	9911,
	9800,
	9732,
	9911,
	9732,
	14884,
	7943,
	9911,
	3187,
	14884,
	7943,
	9911,
	3187,
	14884,
	7943,
	9911,
	3187,
	9911,
	7943,
	8056,
	9672,
	9672,
	9672,
	9672,
	9672,
	9800,
	8056,
	9800,
	5319,
	4643,
	1984,
	6825,
	0,
	0,
	0,
	14453,
	14947,
	7943,
	9732,
	9732,
	9672,
	9732,
	9800,
	6186,
	0,
	4650,
	7940,
	9911,
	9800,
	9732,
	9911,
	9732,
	9911,
	7943,
	9683,
	267,
	9672,
	9672,
	7943,
	9726,
	7943,
	9911,
	0,
	0,
	7943,
	8056,
	9732,
	7996,
	9732,
	7996,
	7996,
	7996,
	7996,
	7996,
	9911,
	9911,
	6825,
	0,
	9811,
	9732,
	9732,
	9732,
	14947,
	7943,
	6186,
	9732,
	9732,
	14947,
	7940,
	9911,
	9800,
	9296,
	9911,
	9732,
	9911,
	4604,
	7943,
	9732,
	9732,
	4650,
	9672,
	9732,
	9800,
	6186,
	7940,
	9911,
	9800,
	9732,
	9911,
	9732,
	7943,
	7996,
	0,
	7996,
	7996,
	6204,
	6202,
	6203,
	4247,
	4346,
	4346,
	0,
	0,
	0,
	7943,
	14456,
	9732,
	6879,
	2151,
	2123,
	9765,
	8027,
	9911,
	4653,
	7996,
	2010,
	7996,
	4653,
	4604,
	1459,
	7996,
	4653,
	2406,
	701,
	7996,
	4653,
	7943,
	1995,
	7996,
	4653,
	2406,
	701,
	7996,
	4653,
	4758,
	1505,
	7996,
	9732,
	9732,
	9911,
	14947,
	9911,
	7943,
	9911,
	9911,
	14947,
	9911,
	7943,
	9911,
	14947,
	9911,
	7943,
	9911,
	9672,
	2480,
	6186,
	6825,
	6186,
	9732,
	9732,
	14947,
	9732,
	7996,
	4653,
	1962,
	699,
	3121,
	4653,
	1934,
	699,
	2755,
	7940,
	9911,
	9800,
	9296,
	9911,
	9732,
	7943,
	14453,
	9732,
	9672,
	9672,
	9672,
	7943,
	14453,
	9732,
	9732,
	9732,
	9672,
	9672,
	9672,
	7996,
	14326,
	6193,
	3187,
	14456,
	7996,
	7943,
	9672,
	6076,
	6188,
	9911,
	14456,
	13276,
	13276,
	0,
	0,
	14947,
	3527,
	5761,
	9911,
	14947,
	14712,
	13823,
	13823,
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
	9672,
	9732,
	9800,
	14325,
	7943,
	6186,
	6825,
	3168,
	9732,
	9732,
	4650,
	9732,
	7996,
	7940,
	9911,
	9800,
	9732,
	9911,
	9732,
	4603,
	9732,
	9811,
	8066,
	6201,
	9672,
	9811,
	9811,
	9811,
	9811,
	9732,
	9800,
	4653,
	7943,
	1995,
	7996,
	9675,
	9800,
	4605,
	9911,
	9911,
	8056,
	7943,
	4605,
	9911,
	4605,
	9675,
	9911,
	8056,
	4605,
	4605,
	0,
	8056,
	4605,
	9911,
	8056,
	6936,
	9911,
	9911,
};
static const Il2CppTokenRangePair s_rgctxIndices[40] = 
{
	{ 0x0200004C, { 46, 3 } },
	{ 0x06000135, { 0, 1 } },
	{ 0x06000136, { 1, 2 } },
	{ 0x0600013D, { 3, 1 } },
	{ 0x0600018D, { 4, 1 } },
	{ 0x0600018E, { 5, 1 } },
	{ 0x06000190, { 6, 1 } },
	{ 0x06000191, { 7, 1 } },
	{ 0x06000197, { 8, 1 } },
	{ 0x060001A4, { 9, 1 } },
	{ 0x060001A6, { 10, 1 } },
	{ 0x060001A7, { 11, 1 } },
	{ 0x060001B2, { 12, 1 } },
	{ 0x060001B4, { 13, 4 } },
	{ 0x060001B5, { 17, 2 } },
	{ 0x060001D3, { 19, 1 } },
	{ 0x060001E2, { 20, 1 } },
	{ 0x060001E4, { 21, 1 } },
	{ 0x060001F4, { 22, 2 } },
	{ 0x060001F5, { 24, 1 } },
	{ 0x060001F8, { 25, 2 } },
	{ 0x060001F9, { 27, 1 } },
	{ 0x0600021F, { 28, 2 } },
	{ 0x0600022D, { 30, 1 } },
	{ 0x06000243, { 31, 1 } },
	{ 0x06000244, { 32, 1 } },
	{ 0x0600025A, { 33, 1 } },
	{ 0x0600025D, { 34, 2 } },
	{ 0x06000277, { 36, 1 } },
	{ 0x0600029B, { 37, 1 } },
	{ 0x0600029C, { 38, 1 } },
	{ 0x0600029D, { 39, 1 } },
	{ 0x060002A7, { 40, 1 } },
	{ 0x060002B9, { 41, 1 } },
	{ 0x060002BA, { 42, 1 } },
	{ 0x060002C8, { 43, 1 } },
	{ 0x060002EB, { 44, 2 } },
	{ 0x0600035C, { 49, 2 } },
	{ 0x0600035D, { 51, 1 } },
	{ 0x06000367, { 52, 1 } },
};
extern const uint32_t g_rgctx_ObjectPool_Get_TisT_tE6D9ABBCBFEA58823961C1F4ECCBC80B5ECFF4AF_m1262A39F1F0ADE8E7C2DC523302C614847786869;
extern const uint32_t g_rgctx_ObjectPool_Get_TisT_t155EDA8D4955014E71797C9025F44A79E31AF782_m89AAFFB70B26A793FBBC33A10624DA75F7750DF9;
extern const uint32_t g_rgctx_T_t155EDA8D4955014E71797C9025F44A79E31AF782;
extern const uint32_t g_rgctx_Device_Create_TisT_tB4BB826993797453A4AEEF08A097B85293637785_mA792297C407FDCDF148FF71BBE14E4068DA5C83B;
extern const uint32_t g_rgctx_ObjectPool_Get_TisT_tD62594DA67470E8118B56FEBB50B552E6FB28D57_m08EEA227D3EB234EB71D884C7DDC345AD242741D;
extern const uint32_t g_rgctx_ObjectPool_Get_TisT_t6103704B06DD8DAB614B9AC4FFB8A8D68A8BB3C0_mD16246FD475D488D679DEC198F975CE5E2338289;
extern const uint32_t g_rgctx_Frame_Create_TisT_tD52A0F44CEDBD0B4FCFFFA81A9EB912A1A16C904_m0BF3EC569996639754B6E971F083D058EA403696;
extern const uint32_t g_rgctx_Frame_Create_TisT_t7B3992C77A4C7D0589E273B9E3E8A36D5926101E_m271264E7703FE6AED64BC091039EB5A822D79DDB;
extern const uint32_t g_rgctx_StreamProfile_Create_TisT_t54654F500652A224E3CD3678286E26BBEB8EB785_m2F1A37653A31953346B3062E67CE7FF43B4F903E;
extern const uint32_t g_rgctx_Frame_Create_TisT_t2B56510408CA63A8AA74D2FD4BB7DF40B8B0B82D_mAF24A9D834FB410CE4BF693EF3A3736C784BDBF1;
extern const uint32_t g_rgctx_Frame_Create_TisT_t1654C505B1BEADE797CB02D6FCD495BF9E986E62_mAFD49193DB5C021F151A6D8BB63C8E3FBB20E19D;
extern const uint32_t g_rgctx_Frame_Create_TisT_tFC6E3AA1519D1383E34BCAB97CCF916B90081795_m80A94E3C1F6A2669F4A72BBF7B6530A0B7949348;
extern const uint32_t g_rgctx_Frame_Cast_TisT_t220200C37A536FC21A9CB84CE85AE9B385D8C8B7_mC1795E0C38466E4943ABDCE6C929A23F957C6799;
extern const uint32_t g_rgctx_Frame_Create_TisT_tFB17C7D8F12B3520B415F8CA064B5340D083270C_m05F5226DA9E76BA8E668F5286AAB42A14EC63407;
extern const uint32_t g_rgctx_Predicate_1_t8711E3E8C8CC3A3C2496754F5D78679E1796AD1F;
extern const uint32_t g_rgctx_Predicate_1_Invoke_m3043BBA22536A972E2F78F3A577DC30798442786;
extern const uint32_t g_rgctx_T_tFB17C7D8F12B3520B415F8CA064B5340D083270C;
extern const uint32_t g_rgctx_FrameSet_FirstOrDefault_TisT_t829658C0BA1BB999024FC5EEBC09449E8A49E34E_mC4AB9463CF78F4F98A763539E16614354DEF0574;
extern const uint32_t g_rgctx_T_t829658C0BA1BB999024FC5EEBC09449E8A49E34E;
extern const uint32_t g_rgctx_T_tA65F800BCF6249857B20AA5B7720F9466A4094F3;
extern const uint32_t g_rgctx_Points_Copy_TisT_tCD93B00144799E46EC92768C11DC8C50DD55E08E_m81CA054668334AA830567492270C1CDDA23C2C36;
extern const uint32_t g_rgctx_Points_Copy_TisT_t4A0860335DCA52F133AE0AD5AF1AD1F92BB7D83C_m4819F56216E49A1E283DB3A893E40E297989C798;
extern const uint32_t g_rgctx_T_t1BBCCAFC5C0E584082AC29D1072E2DD02AAA99C5;
extern const uint32_t g_rgctx_T_t1BBCCAFC5C0E584082AC29D1072E2DD02AAA99C5;
extern const uint32_t g_rgctx_T_t4A047FBED14F98F1EE60F45BC6885C2885C09BF2;
extern const uint32_t g_rgctx_T_tB2F0EAD3A30EB462053B1FFFAB8F37FF6405DC3E;
extern const uint32_t g_rgctx_T_tB2F0EAD3A30EB462053B1FFFAB8F37FF6405DC3E;
extern const uint32_t g_rgctx_T_tDC8B511FE6710260DC08BE29C9C482FD5379B417;
extern const uint32_t g_rgctx_StreamProfile_Create_TisT_t1AB749AC4CFFD20FA5219FEDD458BED451249DA3_mA3E66D1A42AE08106894B4E6EBB9E8A5760DA470;
extern const uint32_t g_rgctx_T_t1AB749AC4CFFD20FA5219FEDD458BED451249DA3;
extern const uint32_t g_rgctx_T_t584B7485DC5996CAE0F0B3B1D96561F1C55AE7AF;
extern const uint32_t g_rgctx_Frame_Create_TisT_t458CE7AE0B5AC3D3E612D1E0C85FC5C6A8F46F9B_mB1410AF0A6D542637474423A2BA6223E108EB1B9;
extern const uint32_t g_rgctx_Frame_Create_TisT_t45E71820F912BB300353A64FEEE365DE87547518_mED72057201D6EACC04D6AAEE3A33571AB2FB7B3C;
extern const uint32_t g_rgctx_FrameQueue_PollForFrame_TisT_tA99BB79D7ABDF18BA47626EA8E53CF11A9FAEF76_mA7EAE3F90891E1871D60D92F26A6EBB152321B15;
extern const uint32_t g_rgctx_T_t8561197A70D031AA41000D87EAA09B76A8673F2E;
extern const uint32_t g_rgctx_T_t8561197A70D031AA41000D87EAA09B76A8673F2E;
extern const uint32_t g_rgctx_T_t87CD210131951BE640D4D13910DE57C2C7218301;
extern const uint32_t g_rgctx_StreamProfile_Create_TisT_t77CEB2DFDA6A39B59A6797E37A96F7AF199012FC_m810870628EFF7DDCA1E14A2038BB709B9360E00A;
extern const uint32_t g_rgctx_StreamProfile_Create_TisT_t52B091743EF529DF87D83A5A4F449207B3EC013D_m26CCA07D6CFBCE8B72406B907435CB0D6C155D5D;
extern const uint32_t g_rgctx_ObjectPool_Get_TisT_t876EEDA8526B070D99C6EEAB7A8197A4822CA8B3_mBCF99F9BB799F84873E465A6B9219C7060C78B4F;
extern const uint32_t g_rgctx_StreamProfile_Create_TisT_t8E9F6DE113F56BA5139442F901B2B1D79C686156_mC381EDE7D179D35F56434D945EB4A4A6B3768F97;
extern const uint32_t g_rgctx_ObjectPool_Get_TisT_tD61457E35C8C573EEBC0C01F066ABA12A93C69BE_m033C8E5F1856291833E187EE96678A0902633DA5;
extern const uint32_t g_rgctx_ObjectPool_Get_TisT_t6A715632BBAEFCC8C64B081B72A95186EA5EE344_mB82722E7687D68C71B541212D4E6AE84FE2130C1;
extern const uint32_t g_rgctx_Sensor_Create_TisT_t9FCE98E31741B3F364BB62235ABB0722B4C871A9_m259E2885C993D912F2BA8B367D28DB979ED62E0D;
extern const uint32_t g_rgctx_U3CU3Ec__2_1_t6A193759873B3D3470B209D7B4DD75705EC6D31C;
extern const uint32_t g_rgctx_U3CU3Ec__2_1_U3CAddVideoFrameU3Eb__2_0_m3D5C6AD98DFA87061BBC5757BD8412E63138A484;
extern const uint32_t g_rgctx_U3CU3Ec__2_1_t7DA30531CD2573BCC04185E49A2BA3691CD33F96;
extern const uint32_t g_rgctx_U3CU3Ec__2_1__ctor_m07E511C1AD0707AAFCA45202AD13E84B59D2939C;
extern const uint32_t g_rgctx_U3CU3Ec__2_1_t7DA30531CD2573BCC04185E49A2BA3691CD33F96;
extern const uint32_t g_rgctx_T_tF5E1C282CDC97F1DB353B1AF584320A5FC1F85A2;
extern const uint32_t g_rgctx_T_tF5E1C282CDC97F1DB353B1AF584320A5FC1F85A2;
extern const uint32_t g_rgctx_T_tEEC138676C0ED66708A624C82D3E268C25737A03;
extern const uint32_t g_rgctx_T_tC16566BBCB61C0AE672BFAF33F56E9EBDA4843C0;
static const Il2CppRGCTXDefinition s_rgctxValues[53] = 
{
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_ObjectPool_Get_TisT_tE6D9ABBCBFEA58823961C1F4ECCBC80B5ECFF4AF_m1262A39F1F0ADE8E7C2DC523302C614847786869 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_ObjectPool_Get_TisT_t155EDA8D4955014E71797C9025F44A79E31AF782_m89AAFFB70B26A793FBBC33A10624DA75F7750DF9 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_T_t155EDA8D4955014E71797C9025F44A79E31AF782 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Device_Create_TisT_tB4BB826993797453A4AEEF08A097B85293637785_mA792297C407FDCDF148FF71BBE14E4068DA5C83B },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_ObjectPool_Get_TisT_tD62594DA67470E8118B56FEBB50B552E6FB28D57_m08EEA227D3EB234EB71D884C7DDC345AD242741D },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_ObjectPool_Get_TisT_t6103704B06DD8DAB614B9AC4FFB8A8D68A8BB3C0_mD16246FD475D488D679DEC198F975CE5E2338289 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Frame_Create_TisT_tD52A0F44CEDBD0B4FCFFFA81A9EB912A1A16C904_m0BF3EC569996639754B6E971F083D058EA403696 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Frame_Create_TisT_t7B3992C77A4C7D0589E273B9E3E8A36D5926101E_m271264E7703FE6AED64BC091039EB5A822D79DDB },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_StreamProfile_Create_TisT_t54654F500652A224E3CD3678286E26BBEB8EB785_m2F1A37653A31953346B3062E67CE7FF43B4F903E },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Frame_Create_TisT_t2B56510408CA63A8AA74D2FD4BB7DF40B8B0B82D_mAF24A9D834FB410CE4BF693EF3A3736C784BDBF1 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Frame_Create_TisT_t1654C505B1BEADE797CB02D6FCD495BF9E986E62_mAFD49193DB5C021F151A6D8BB63C8E3FBB20E19D },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Frame_Create_TisT_tFC6E3AA1519D1383E34BCAB97CCF916B90081795_m80A94E3C1F6A2669F4A72BBF7B6530A0B7949348 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Frame_Cast_TisT_t220200C37A536FC21A9CB84CE85AE9B385D8C8B7_mC1795E0C38466E4943ABDCE6C929A23F957C6799 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Frame_Create_TisT_tFB17C7D8F12B3520B415F8CA064B5340D083270C_m05F5226DA9E76BA8E668F5286AAB42A14EC63407 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_Predicate_1_t8711E3E8C8CC3A3C2496754F5D78679E1796AD1F },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Predicate_1_Invoke_m3043BBA22536A972E2F78F3A577DC30798442786 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_T_tFB17C7D8F12B3520B415F8CA064B5340D083270C },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_FrameSet_FirstOrDefault_TisT_t829658C0BA1BB999024FC5EEBC09449E8A49E34E_mC4AB9463CF78F4F98A763539E16614354DEF0574 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_T_t829658C0BA1BB999024FC5EEBC09449E8A49E34E },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_T_tA65F800BCF6249857B20AA5B7720F9466A4094F3 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Points_Copy_TisT_tCD93B00144799E46EC92768C11DC8C50DD55E08E_m81CA054668334AA830567492270C1CDDA23C2C36 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Points_Copy_TisT_t4A0860335DCA52F133AE0AD5AF1AD1F92BB7D83C_m4819F56216E49A1E283DB3A893E40E297989C798 },
	{ (Il2CppRGCTXDataType)1, (const void *)&g_rgctx_T_t1BBCCAFC5C0E584082AC29D1072E2DD02AAA99C5 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_T_t1BBCCAFC5C0E584082AC29D1072E2DD02AAA99C5 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_T_t4A047FBED14F98F1EE60F45BC6885C2885C09BF2 },
	{ (Il2CppRGCTXDataType)1, (const void *)&g_rgctx_T_tB2F0EAD3A30EB462053B1FFFAB8F37FF6405DC3E },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_T_tB2F0EAD3A30EB462053B1FFFAB8F37FF6405DC3E },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_T_tDC8B511FE6710260DC08BE29C9C482FD5379B417 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_StreamProfile_Create_TisT_t1AB749AC4CFFD20FA5219FEDD458BED451249DA3_mA3E66D1A42AE08106894B4E6EBB9E8A5760DA470 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_T_t1AB749AC4CFFD20FA5219FEDD458BED451249DA3 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_T_t584B7485DC5996CAE0F0B3B1D96561F1C55AE7AF },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Frame_Create_TisT_t458CE7AE0B5AC3D3E612D1E0C85FC5C6A8F46F9B_mB1410AF0A6D542637474423A2BA6223E108EB1B9 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Frame_Create_TisT_t45E71820F912BB300353A64FEEE365DE87547518_mED72057201D6EACC04D6AAEE3A33571AB2FB7B3C },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_FrameQueue_PollForFrame_TisT_tA99BB79D7ABDF18BA47626EA8E53CF11A9FAEF76_mA7EAE3F90891E1871D60D92F26A6EBB152321B15 },
	{ (Il2CppRGCTXDataType)1, (const void *)&g_rgctx_T_t8561197A70D031AA41000D87EAA09B76A8673F2E },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_T_t8561197A70D031AA41000D87EAA09B76A8673F2E },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_T_t87CD210131951BE640D4D13910DE57C2C7218301 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_StreamProfile_Create_TisT_t77CEB2DFDA6A39B59A6797E37A96F7AF199012FC_m810870628EFF7DDCA1E14A2038BB709B9360E00A },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_StreamProfile_Create_TisT_t52B091743EF529DF87D83A5A4F449207B3EC013D_m26CCA07D6CFBCE8B72406B907435CB0D6C155D5D },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_ObjectPool_Get_TisT_t876EEDA8526B070D99C6EEAB7A8197A4822CA8B3_mBCF99F9BB799F84873E465A6B9219C7060C78B4F },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_StreamProfile_Create_TisT_t8E9F6DE113F56BA5139442F901B2B1D79C686156_mC381EDE7D179D35F56434D945EB4A4A6B3768F97 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_ObjectPool_Get_TisT_tD61457E35C8C573EEBC0C01F066ABA12A93C69BE_m033C8E5F1856291833E187EE96678A0902633DA5 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_ObjectPool_Get_TisT_t6A715632BBAEFCC8C64B081B72A95186EA5EE344_mB82722E7687D68C71B541212D4E6AE84FE2130C1 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Sensor_Create_TisT_t9FCE98E31741B3F364BB62235ABB0722B4C871A9_m259E2885C993D912F2BA8B367D28DB979ED62E0D },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_U3CU3Ec__2_1_t6A193759873B3D3470B209D7B4DD75705EC6D31C },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_U3CU3Ec__2_1_U3CAddVideoFrameU3Eb__2_0_m3D5C6AD98DFA87061BBC5757BD8412E63138A484 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_U3CU3Ec__2_1_t7DA30531CD2573BCC04185E49A2BA3691CD33F96 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_U3CU3Ec__2_1__ctor_m07E511C1AD0707AAFCA45202AD13E84B59D2939C },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_U3CU3Ec__2_1_t7DA30531CD2573BCC04185E49A2BA3691CD33F96 },
	{ (Il2CppRGCTXDataType)1, (const void *)&g_rgctx_T_tF5E1C282CDC97F1DB353B1AF584320A5FC1F85A2 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_T_tF5E1C282CDC97F1DB353B1AF584320A5FC1F85A2 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_T_tEEC138676C0ED66708A624C82D3E268C25737A03 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_T_tC16566BBCB61C0AE672BFAF33F56E9EBDA4843C0 },
};
IL2CPP_EXTERN_C const Il2CppCodeGenModule g_Intel_RealSense_CodeGenModule;
const Il2CppCodeGenModule g_Intel_RealSense_CodeGenModule = 
{
	"Intel.RealSense.dll",
	943,
	s_methodPointers,
	7,
	s_adjustorThunks,
	s_InvokerIndices,
	0,
	NULL,
	40,
	s_rgctxIndices,
	53,
	s_rgctxValues,
	NULL,
	NULL, // module initializer,
	NULL,
	NULL,
	NULL,
};
