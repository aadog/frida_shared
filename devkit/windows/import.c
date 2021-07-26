#include "library.h"
#include <stdio.h>
#define IMPORT(fn) printf("%p",&fn)
void ____Imp____(){
    IMPORT(g_error_free);
    IMPORT(g_bytes_new);
    IMPORT(g_bytes_new_take);
    IMPORT(g_bytes_new_static);
    IMPORT(g_bytes_new_with_free_func);
    IMPORT(g_bytes_new_from_bytes);
    IMPORT(g_bytes_get_data);
    IMPORT(g_bytes_get_size);
    IMPORT(g_bytes_ref);
    IMPORT(g_bytes_unref);
    IMPORT(g_bytes_unref_to_data);
    IMPORT(g_bytes_unref_to_array);
    IMPORT(g_bytes_hash);
    IMPORT(g_bytes_equal);
    IMPORT(g_bytes_compare);
    IMPORT(g_free);
    IMPORT(g_hash_table_iter_init);
    IMPORT(g_hash_table_iter_next);
    IMPORT(g_hash_table_ref);
    IMPORT(g_hash_table_unref);
    IMPORT(g_main_loop_new);
    IMPORT(g_main_loop_run);
    IMPORT(g_main_loop_is_running);
    IMPORT(g_utf8_strlen);
    IMPORT(g_variant_type_free);
    IMPORT(g_variant_type_new);
    IMPORT(g_variant_type_new_array);
    IMPORT(g_variant_type_new_maybe);
    IMPORT(g_variant_type_new_tuple);
    IMPORT(g_variant_type_new_dict_entry);
    IMPORT(g_variant_unref);
    IMPORT(g_variant_get_type_string);
    IMPORT(g_variant_is_of_type);
    IMPORT(g_variant_get_boolean);
    IMPORT(g_variant_get_int64);
    IMPORT(g_variant_get_variant);
    IMPORT(g_variant_get_string);
    IMPORT(g_variant_get_child_value);
    IMPORT(g_variant_get_fixed_array);
    IMPORT(g_variant_iter_new);
    IMPORT(g_variant_iter_init);
    IMPORT(g_variant_iter_free);
    IMPORT(g_variant_iter_next_value);
    IMPORT(g_ref_string_release);
    IMPORT(g_ref_string_length);
    IMPORT(g_signal_connect_data);
    IMPORT(g_signal_handler_disconnect);
    IMPORT(g_bytes_get_type);
    IMPORT(g_object_ref_sink);
    IMPORT(g_object_ref);
    IMPORT(g_object_unref);
    IMPORT(g_clear_object);
    IMPORT(g_input_stream_read_all);
    IMPORT(g_input_stream_read_bytes);
    IMPORT(g_input_stream_close);
    IMPORT(g_input_stream_read_all_async);
    IMPORT(g_input_stream_read_all_finish);
    IMPORT(g_input_stream_read_bytes_async);
    IMPORT(g_input_stream_read_bytes_finish);
    IMPORT(g_input_stream_close_async);
    IMPORT(g_input_stream_close_finish);
    IMPORT(g_output_stream_write_all);
    IMPORT(g_output_stream_write_bytes);
    IMPORT(g_output_stream_close);
    IMPORT(g_output_stream_write_all_async);
    IMPORT(g_output_stream_write_all_finish);
    IMPORT(g_output_stream_write_bytes_async);
    IMPORT(g_output_stream_write_bytes_finish);
    IMPORT(g_output_stream_close_async);
    IMPORT(g_output_stream_close_finish);
    IMPORT(g_bytes_icon_get_type);
    IMPORT(g_bytes_icon_new);
    IMPORT(g_bytes_icon_get_bytes);
    IMPORT(g_io_stream_get_input_stream);
    IMPORT(g_io_stream_get_output_stream);
    IMPORT(g_io_stream_close);
    IMPORT(g_io_stream_close_async);
    IMPORT(g_io_stream_close_finish);
    IMPORT(g_io_stream_is_closed);
    IMPORT(g_io_stream_has_pending);
    IMPORT(g_io_stream_clear_pending);
    IMPORT(frida_init);
    IMPORT(frida_shutdown);
    IMPORT(frida_deinit);
    IMPORT(frida_get_main_context);
    IMPORT(frida_unref);
    IMPORT(frida_version);
    IMPORT(frida_version_string);
    IMPORT(frida_device_manager_new);
    IMPORT(frida_device_manager_close);
    IMPORT(frida_device_manager_close_finish);
    IMPORT(frida_device_manager_close_sync);
    IMPORT(frida_device_manager_get_device_by_id);
    IMPORT(frida_device_manager_get_device_by_id_finish);
    IMPORT(frida_device_manager_get_device_by_id_sync);
    IMPORT(frida_device_manager_get_device_by_type);
    IMPORT(frida_device_manager_get_device_by_type_finish);
    IMPORT(frida_device_manager_get_device_by_type_sync);
    IMPORT(frida_device_manager_get_device);
    IMPORT(frida_device_manager_get_device_finish);
    IMPORT(frida_device_manager_get_device_sync);
    IMPORT(frida_device_manager_find_device_by_id);
    IMPORT(frida_device_manager_find_device_by_id_finish);
    IMPORT(frida_device_manager_find_device_by_id_sync);
    IMPORT(frida_device_manager_find_device_by_type);
    IMPORT(frida_device_manager_find_device_by_type_finish);
    IMPORT(frida_device_manager_find_device_by_type_sync);
    IMPORT(frida_device_manager_find_device);
    IMPORT(frida_device_manager_find_device_finish);
    IMPORT(frida_device_manager_find_device_sync);
    IMPORT(frida_device_manager_enumerate_devices);
    IMPORT(frida_device_manager_enumerate_devices_finish);
    IMPORT(frida_device_manager_enumerate_devices_sync);
    IMPORT(frida_device_manager_add_remote_device);
    IMPORT(frida_device_manager_add_remote_device_finish);
    IMPORT(frida_device_manager_add_remote_device_sync);
    IMPORT(frida_device_manager_remove_remote_device);
    IMPORT(frida_device_manager_remove_remote_device_finish);
    IMPORT(frida_device_manager_remove_remote_device_sync);
    IMPORT(frida_device_list_size);
    IMPORT(frida_device_list_get);
    IMPORT(frida_device_get_id);
    IMPORT(frida_device_get_name);
    IMPORT(frida_device_get_icon);
    IMPORT(frida_device_get_dtype);
    IMPORT(frida_device_get_bus);
    IMPORT(frida_device_get_manager);
    IMPORT(frida_device_is_lost);
    IMPORT(frida_device_query_system_parameters);
    IMPORT(frida_device_query_system_parameters_finish);
    IMPORT(frida_device_query_system_parameters_sync);
    IMPORT(frida_device_get_frontmost_application);
    IMPORT(frida_device_get_frontmost_application_finish);
    IMPORT(frida_device_get_frontmost_application_sync);
    IMPORT(frida_device_enumerate_applications);
    IMPORT(frida_device_enumerate_applications_finish);
    IMPORT(frida_device_enumerate_applications_sync);
    IMPORT(frida_device_get_process_by_pid);
    IMPORT(frida_device_get_process_by_pid_finish);
    IMPORT(frida_device_get_process_by_pid_sync);
    IMPORT(frida_device_get_process_by_name);
    IMPORT(frida_device_get_process_by_name_finish);
    IMPORT(frida_device_get_process_by_name_sync);
    IMPORT(frida_device_get_process);
    IMPORT(frida_device_get_process_finish);
    IMPORT(frida_device_get_process_sync);
    IMPORT(frida_device_find_process_by_pid);
    IMPORT(frida_device_find_process_by_pid_finish);
    IMPORT(frida_device_find_process_by_pid_sync);
    IMPORT(frida_device_find_process_by_name);
    IMPORT(frida_device_find_process_by_name_finish);
    IMPORT(frida_device_find_process_by_name_sync);
    IMPORT(frida_device_find_process);
    IMPORT(frida_device_find_process_finish);
    IMPORT(frida_device_find_process_sync);
    IMPORT(frida_device_enumerate_processes);
    IMPORT(frida_device_enumerate_processes_finish);
    IMPORT(frida_device_enumerate_processes_sync);
    IMPORT(frida_device_enable_spawn_gating);
    IMPORT(frida_device_enable_spawn_gating_finish);
    IMPORT(frida_device_enable_spawn_gating_sync);
    IMPORT(frida_device_disable_spawn_gating);
    IMPORT(frida_device_disable_spawn_gating_finish);
    IMPORT(frida_device_disable_spawn_gating_sync);
    IMPORT(frida_device_enumerate_pending_spawn);
    IMPORT(frida_device_enumerate_pending_spawn_finish);
    IMPORT(frida_device_enumerate_pending_spawn_sync);
    IMPORT(frida_device_enumerate_pending_children);
    IMPORT(frida_device_enumerate_pending_children_finish);
    IMPORT(frida_device_enumerate_pending_children_sync);
    IMPORT(frida_device_spawn);
    IMPORT(frida_device_spawn_finish);
    IMPORT(frida_device_spawn_sync);
    IMPORT(frida_device_input);
    IMPORT(frida_device_input_finish);
    IMPORT(frida_device_input_sync);
    IMPORT(frida_device_resume);
    IMPORT(frida_device_resume_finish);
    IMPORT(frida_device_resume_sync);
    IMPORT(frida_device_kill);
    IMPORT(frida_device_kill_finish);
    IMPORT(frida_device_kill_sync);
    IMPORT(frida_device_attach);
    IMPORT(frida_device_attach_finish);
    IMPORT(frida_device_attach_sync);
    IMPORT(frida_device_inject_library_file);
    IMPORT(frida_device_inject_library_file_finish);
    IMPORT(frida_device_inject_library_file_sync);
    IMPORT(frida_device_inject_library_blob);
    IMPORT(frida_device_inject_library_blob_finish);
    IMPORT(frida_device_inject_library_blob_sync);
    IMPORT(frida_device_open_channel);
    IMPORT(frida_device_open_channel_finish);
    IMPORT(frida_device_open_channel_sync);
    IMPORT(frida_device_get_host_session);
    IMPORT(frida_device_get_host_session_finish);
    IMPORT(frida_device_get_host_session_sync);
    IMPORT(frida_remote_device_options_new);
    IMPORT(frida_remote_device_options_get_certificate);
    IMPORT(frida_remote_device_options_get_origin);
    IMPORT(frida_remote_device_options_get_token);
    IMPORT(frida_remote_device_options_get_keepalive_interval);
    IMPORT(frida_remote_device_options_set_certificate);
    IMPORT(frida_remote_device_options_set_origin);
    IMPORT(frida_remote_device_options_set_token);
    IMPORT(frida_remote_device_options_set_keepalive_interval);
    IMPORT(frida_application_list_size);
    IMPORT(frida_application_list_get);
    IMPORT(frida_application_get_identifier);
    IMPORT(frida_application_get_name);
    IMPORT(frida_application_get_pid);
    IMPORT(frida_application_get_parameters);
    IMPORT(frida_process_list_size);
    IMPORT(frida_process_list_get);
    IMPORT(frida_process_get_pid);
    IMPORT(frida_process_get_name);
    IMPORT(frida_process_get_parameters);
    IMPORT(frida_process_match_options_new);
    IMPORT(frida_process_match_options_get_timeout);
    IMPORT(frida_process_match_options_get_scope);
    IMPORT(frida_process_match_options_set_timeout);
    IMPORT(frida_process_match_options_set_scope);
    IMPORT(frida_spawn_options_new);
    IMPORT(frida_spawn_options_get_argv);
    IMPORT(frida_spawn_options_get_envp);
    IMPORT(frida_spawn_options_get_env);
    IMPORT(frida_spawn_options_get_cwd);
    IMPORT(frida_spawn_options_get_stdio);
    IMPORT(frida_spawn_options_get_aux);
    IMPORT(frida_spawn_options_set_argv);
    IMPORT(frida_spawn_options_set_envp);
    IMPORT(frida_spawn_options_set_env);
    IMPORT(frida_spawn_options_set_cwd);
    IMPORT(frida_spawn_options_set_stdio);
    IMPORT(frida_spawn_options_set_aux);
    IMPORT(frida_frontmost_query_options_new);
    IMPORT(frida_frontmost_query_options_get_scope);
    IMPORT(frida_frontmost_query_options_set_scope);
    IMPORT(frida_application_query_options_new);
    IMPORT(frida_application_query_options_get_scope);
    IMPORT(frida_application_query_options_select_identifier);
    IMPORT(frida_application_query_options_has_selected_identifiers);
    IMPORT(frida_application_query_options_enumerate_selected_identifiers);
    IMPORT(frida_application_query_options_set_scope);
    IMPORT(frida_process_query_options_new);
    IMPORT(frida_process_query_options_get_scope);
    IMPORT(frida_process_query_options_select_pid);
    IMPORT(frida_process_query_options_has_selected_pids);
    IMPORT(frida_process_query_options_enumerate_selected_pids);
    IMPORT(frida_process_query_options_set_scope);
    IMPORT(frida_session_options_new);
    IMPORT(frida_session_options_get_realm);
    IMPORT(frida_session_options_get_persist_timeout);
    IMPORT(frida_session_options_set_realm);
    IMPORT(frida_session_options_set_persist_timeout);
    IMPORT(frida_spawn_list_size);
    IMPORT(frida_spawn_list_get);
    IMPORT(frida_spawn_get_pid);
    IMPORT(frida_spawn_get_identifier);
    IMPORT(frida_child_list_size);
    IMPORT(frida_child_list_get);
    IMPORT(frida_child_get_pid);
    IMPORT(frida_child_get_parent_pid);
    IMPORT(frida_child_get_origin);
    IMPORT(frida_child_get_identifier);
    IMPORT(frida_child_get_path);
    IMPORT(frida_child_get_argv);
    IMPORT(frida_child_get_envp);
    IMPORT(frida_crash_get_pid);
    IMPORT(frida_crash_get_process_name);
    IMPORT(frida_crash_get_summary);
    IMPORT(frida_crash_get_report);
    IMPORT(frida_crash_get_parameters);
    IMPORT(frida_bus_get_device);
    IMPORT(frida_bus_is_detached);
    IMPORT(frida_bus_attach);
    IMPORT(frida_bus_attach_finish);
    IMPORT(frida_bus_attach_sync);
    IMPORT(frida_bus_post);
    IMPORT(frida_session_get_pid);
    IMPORT(frida_session_get_persist_timeout);
    IMPORT(frida_session_get_device);
    IMPORT(frida_session_is_detached);
    IMPORT(frida_session_detach);
    IMPORT(frida_session_detach_finish);
    IMPORT(frida_session_detach_sync);
    IMPORT(frida_session_resume);
    IMPORT(frida_session_resume_finish);
    IMPORT(frida_session_resume_sync);
    IMPORT(frida_session_enable_child_gating);
    IMPORT(frida_session_enable_child_gating_finish);
    IMPORT(frida_session_enable_child_gating_sync);
    IMPORT(frida_session_disable_child_gating);
    IMPORT(frida_session_disable_child_gating_finish);
    IMPORT(frida_session_disable_child_gating_sync);
    IMPORT(frida_session_create_script);
    IMPORT(frida_session_create_script_finish);
    IMPORT(frida_session_create_script_sync);
    IMPORT(frida_session_create_script_from_bytes);
    IMPORT(frida_session_create_script_from_bytes_finish);
    IMPORT(frida_session_create_script_from_bytes_sync);
    IMPORT(frida_session_compile_script);
    IMPORT(frida_session_compile_script_finish);
    IMPORT(frida_session_compile_script_sync);
    IMPORT(frida_session_enable_debugger);
    IMPORT(frida_session_enable_debugger_finish);
    IMPORT(frida_session_enable_debugger_sync);
    IMPORT(frida_session_disable_debugger);
    IMPORT(frida_session_disable_debugger_finish);
    IMPORT(frida_session_disable_debugger_sync);
    IMPORT(frida_session_setup_peer_connection);
    IMPORT(frida_session_setup_peer_connection_finish);
    IMPORT(frida_session_setup_peer_connection_sync);
    IMPORT(frida_session_join_portal);
    IMPORT(frida_session_join_portal_finish);
    IMPORT(frida_session_join_portal_sync);
    IMPORT(frida_script_is_destroyed);
    IMPORT(frida_script_load);
    IMPORT(frida_script_load_finish);
    IMPORT(frida_script_load_sync);
    IMPORT(frida_script_unload);
    IMPORT(frida_script_unload_finish);
    IMPORT(frida_script_unload_sync);
    IMPORT(frida_script_eternalize);
    IMPORT(frida_script_eternalize_finish);
    IMPORT(frida_script_eternalize_sync);
    IMPORT(frida_script_post);
    IMPORT(frida_script_options_new);
    IMPORT(frida_script_options_get_name);
    IMPORT(frida_script_options_get_runtime);
    IMPORT(frida_script_options_set_name);
    IMPORT(frida_script_options_set_runtime);
    IMPORT(frida_peer_options_new);
    IMPORT(frida_peer_options_get_stun_server);
    IMPORT(frida_peer_options_clear_relays);
    IMPORT(frida_peer_options_add_relay);
    IMPORT(frida_peer_options_enumerate_relays);
    IMPORT(frida_peer_options_set_stun_server);
    IMPORT(frida_relay_new);
    IMPORT(frida_relay_get_address);
    IMPORT(frida_relay_get_username);
    IMPORT(frida_relay_get_password);
    IMPORT(frida_relay_get_kind);
    IMPORT(frida_portal_options_new);
    IMPORT(frida_portal_options_get_certificate);
    IMPORT(frida_portal_options_get_token);
    IMPORT(frida_portal_options_get_acl);
    IMPORT(frida_portal_options_set_certificate);
    IMPORT(frida_portal_options_set_token);
    IMPORT(frida_portal_options_set_acl);
    IMPORT(frida_portal_membership_get_id);
    IMPORT(frida_portal_membership_terminate);
    IMPORT(frida_portal_membership_terminate_finish);
    IMPORT(frida_portal_membership_terminate_sync);
    IMPORT(frida_rpc_client_new);
    IMPORT(frida_rpc_client_get_peer);
    IMPORT(frida_rpc_client_call);
    IMPORT(frida_rpc_client_call_finish);
    IMPORT(frida_rpc_client_try_handle_message);
    IMPORT(frida_rpc_peer_post_rpc_message);
    IMPORT(frida_rpc_peer_post_rpc_message_finish);
    IMPORT(frida_injector_new);
    IMPORT(frida_injector_new_inprocess);
    IMPORT(frida_injector_close);
    IMPORT(frida_injector_close_finish);
    IMPORT(frida_injector_close_sync);
    IMPORT(frida_injector_inject_library_file);
    IMPORT(frida_injector_inject_library_file_finish);
    IMPORT(frida_injector_inject_library_file_sync);
    IMPORT(frida_injector_inject_library_blob);
    IMPORT(frida_injector_inject_library_blob_finish);
    IMPORT(frida_injector_inject_library_blob_sync);
    IMPORT(frida_injector_demonitor);
    IMPORT(frida_injector_demonitor_finish);
    IMPORT(frida_injector_demonitor_sync);
    IMPORT(frida_injector_demonitor_and_clone_state);
    IMPORT(frida_injector_demonitor_and_clone_state_finish);
    IMPORT(frida_injector_demonitor_and_clone_state_sync);
    IMPORT(frida_injector_recreate_thread);
    IMPORT(frida_injector_recreate_thread_finish);
    IMPORT(frida_injector_recreate_thread_sync);
    IMPORT(frida_control_service_new);
    IMPORT(frida_control_service_new_with_host_session);
    IMPORT(frida_control_service_get_host_session);
    IMPORT(frida_control_service_get_endpoint_params);
    IMPORT(frida_control_service_get_options);
    IMPORT(frida_control_service_start);
    IMPORT(frida_control_service_start_finish);
    IMPORT(frida_control_service_start_sync);
    IMPORT(frida_control_service_stop);
    IMPORT(frida_control_service_stop_finish);
    IMPORT(frida_control_service_stop_sync);
    IMPORT(frida_control_service_options_new);
    IMPORT(frida_control_service_options_get_enable_preload);
    IMPORT(frida_control_service_options_get_report_crashes);
    IMPORT(frida_control_service_options_set_enable_preload);
    IMPORT(frida_control_service_options_set_report_crashes);
    IMPORT(frida_portal_service_new);
    IMPORT(frida_portal_service_get_device);
    IMPORT(frida_portal_service_get_cluster_params);
    IMPORT(frida_portal_service_get_control_params);
    IMPORT(frida_portal_service_start);
    IMPORT(frida_portal_service_start_finish);
    IMPORT(frida_portal_service_start_sync);
    IMPORT(frida_portal_service_stop);
    IMPORT(frida_portal_service_stop_finish);
    IMPORT(frida_portal_service_stop_sync);
    IMPORT(frida_portal_service_kick);
    IMPORT(frida_portal_service_post);
    IMPORT(frida_portal_service_narrowcast);
    IMPORT(frida_portal_service_broadcast);
    IMPORT(frida_portal_service_enumerate_tags);
    IMPORT(frida_portal_service_tag);
    IMPORT(frida_portal_service_untag);
    IMPORT(frida_endpoint_parameters_new);
    IMPORT(frida_endpoint_parameters_get_address);
    IMPORT(frida_endpoint_parameters_get_port);
    IMPORT(frida_endpoint_parameters_get_certificate);
    IMPORT(frida_endpoint_parameters_get_origin);
    IMPORT(frida_endpoint_parameters_get_auth_service);
    IMPORT(frida_endpoint_parameters_get_asset_root);
    IMPORT(frida_endpoint_parameters_set_asset_root);
    IMPORT(frida_authentication_service_authenticate);
    IMPORT(frida_authentication_service_authenticate_finish);
    IMPORT(frida_static_authentication_service_new);
    IMPORT(frida_static_authentication_service_get_token_hash);
    IMPORT(frida_file_monitor_new);
    IMPORT(frida_file_monitor_get_path);
    IMPORT(frida_file_monitor_enable);
    IMPORT(frida_file_monitor_enable_finish);
    IMPORT(frida_file_monitor_enable_sync);
    IMPORT(frida_file_monitor_disable);
    IMPORT(frida_file_monitor_disable_finish);
    IMPORT(frida_file_monitor_disable_sync);
    IMPORT(frida_error_quark);
    IMPORT(frida_runtime_get_type);
    IMPORT(frida_device_type_get_type);
    IMPORT(frida_agent_message_kind_get_type);
    IMPORT(frida_child_origin_get_type);
    IMPORT(frida_peer_setup_get_type);
    IMPORT(frida_port_conflict_behavior_get_type);
    IMPORT(frida_realm_get_type);
    IMPORT(frida_relay_kind_get_type);
    IMPORT(frida_scope_get_type);
    IMPORT(frida_script_runtime_get_type);
    IMPORT(frida_session_detach_reason_get_type);
    IMPORT(frida_stdio_get_type);
    IMPORT(frida_unload_policy_get_type);
    IMPORT(frida_web_service_flavor_get_type);
    IMPORT(frida_web_service_transport_get_type);
    IMPORT(frida_device_manager_get_type);
    IMPORT(frida_device_list_get_type);
    IMPORT(frida_device_get_type);
    IMPORT(frida_remote_device_options_get_type);
    IMPORT(frida_application_list_get_type);
    IMPORT(frida_application_get_type);
    IMPORT(frida_process_list_get_type);
    IMPORT(frida_process_get_type);
    IMPORT(frida_process_match_options_get_type);
    IMPORT(frida_spawn_options_get_type);
    IMPORT(frida_frontmost_query_options_get_type);
    IMPORT(frida_application_query_options_get_type);
    IMPORT(frida_process_query_options_get_type);
    IMPORT(frida_session_options_get_type);
    IMPORT(frida_spawn_list_get_type);
    IMPORT(frida_spawn_get_type);
    IMPORT(frida_child_list_get_type);
    IMPORT(frida_child_get_type);
    IMPORT(frida_crash_get_type);
    IMPORT(frida_bus_get_type);
    IMPORT(frida_session_get_type);
    IMPORT(frida_script_get_type);
    IMPORT(frida_script_options_get_type);
    IMPORT(frida_peer_options_get_type);
    IMPORT(frida_relay_get_type);
    IMPORT(frida_portal_options_get_type);
    IMPORT(frida_portal_membership_get_type);
    IMPORT(frida_rpc_client_get_type);
    IMPORT(frida_rpc_peer_get_type);
    IMPORT(frida_injector_get_type);
    IMPORT(frida_control_service_get_type);
    IMPORT(frida_control_service_options_get_type);
    IMPORT(frida_portal_service_get_type);
    IMPORT(frida_endpoint_parameters_get_type);
    IMPORT(frida_authentication_service_get_type);
    IMPORT(frida_static_authentication_service_get_type);
    IMPORT(frida_file_monitor_get_type);
}
