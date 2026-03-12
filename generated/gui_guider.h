/*
* Copyright 2026 NXP
* NXP Proprietary. This software is owned or controlled by NXP and may only be used strictly in
* accordance with the applicable license terms. By expressly accepting such terms or by downloading, installing,
* activating and/or otherwise using the software, you are agreeing that you have read, and that you agree to
* comply with and are bound by, such license terms.  If you do not agree to be bound by the applicable license
* terms, then you may not retain, install, activate or otherwise use the software.
*/

#ifndef GUI_GUIDER_H
#define GUI_GUIDER_H
#ifdef __cplusplus
extern "C" {
#endif

#include "lvgl.h"


typedef struct
{
  
	lv_obj_t *boot;
	bool boot_del;
	lv_obj_t *boot_cont_center;
	lv_obj_t *boot_img_logo;
	lv_obj_t *boot_lbl_title;
	lv_obj_t *boot_lbl_status;
	lv_obj_t *boot_cont_footer;
	lv_obj_t *boot_lbl_version;
	lv_obj_t *boot_lbl_edgeid;
	lv_obj_t *boot_lbl_date;
	lv_obj_t *boot_bar_1;
	lv_obj_t *scr_login;
	bool scr_login_del;
	lv_obj_t *scr_login_cont_root;
	lv_obj_t *scr_login_cont_body;
	lv_obj_t *scr_login_cont_nfc;
	lv_obj_t *scr_login_lbl_nfc_tiltle;
	lv_obj_t *scr_login_img_nfc;
	lv_obj_t *scr_login_lbl_nfc_hint;
	lv_obj_t *scr_login_label_nfc_status;
	lv_obj_t *scr_login_line_1;
	lv_obj_t *scr_login_btn_confirm;
	lv_obj_t *scr_login_btn_confirm_label;
	lv_obj_t *scr_login_cont_account;
	lv_obj_t *scr_login_lbl_acc_tiltle;
	lv_obj_t *scr_login_lbl_acc_user;
	lv_obj_t *scr_login_lbl_acc_password;
	lv_obj_t *scr_login_ta_acc_user;
	lv_obj_t *scr_login_ta_acc_password;
	lv_obj_t *scr_login_btn_login;
	lv_obj_t *scr_login_btn_login_label;
	lv_obj_t *scr_login_line_2;
	lv_obj_t *scr_login_lbl_acc_status;
	lv_obj_t *scr_login_cont_topbar;
	lv_obj_t *scr_login_lbl_tiltle;
	lv_obj_t *scr_login_cont_top_right;
	lv_obj_t *scr_login_imgbtn_back;
	lv_obj_t *scr_login_imgbtn_back_label;
	lv_obj_t *scr_dashboard;
	bool scr_dashboard_del;
	lv_obj_t *scr_dashboard_cont_dash_bg;
	lv_obj_t *scr_dashboard_cont_topbar;
	lv_obj_t *scr_dashboard_lbl_running;
	lv_obj_t *scr_dashboard_lbl_op;
	lv_obj_t *scr_dashboard_cont_okng_row;
	lv_obj_t *scr_dashboard_lbl_ok;
	lv_obj_t *scr_dashboard_lbl_ng;
	lv_obj_t *scr_dashboard_lbl_perf;
	lv_obj_t *scr_dashboard_cont_kip_row;
	lv_obj_t *scr_dashboard_cont_kpi_plan;
	lv_obj_t *scr_dashboard_lbl_plan_tiltle;
	lv_obj_t *scr_dashboard_lbl_plan_value;
	lv_obj_t *scr_dashboard_cont_kpi_target;
	lv_obj_t *scr_dashboard_lbl_target_tiltle;
	lv_obj_t *scr_dashboard_lbl_target_value;
	lv_obj_t *scr_dashboard_cont_kpi_actual;
	lv_obj_t *scr_dashboard_lbl_actual_tiltle;
	lv_obj_t *scr_dashboard_lbl_actual_value;
	lv_obj_t *scr_dashboard_cont_btn_row;
	lv_obj_t *scr_dashboard_btn_stop;
	lv_obj_t *scr_dashboard_btn_stop_label;
	lv_obj_t *scr_dashboard_btn_error;
	lv_obj_t *scr_dashboard_btn_error_label;
	lv_obj_t *scr_dashboard_btn_setup;
	lv_obj_t *scr_dashboard_btn_setup_label;
	lv_obj_t *scr_dashboard_btn_break;
	lv_obj_t *scr_dashboard_btn_break_label;
	lv_obj_t *scr_dashboard_btn_input_prod;
	lv_obj_t *scr_dashboard_btn_input_prod_label;
	lv_obj_t *scr_dashboard_img_1;
	lv_obj_t *scr_downtime;
	bool scr_downtime_del;
	lv_obj_t *scr_downtime_cont_dt;
	lv_obj_t *scr_downtime_cont_dt_topbar;
	lv_obj_t *scr_downtime_lbl_machine_status;
	lv_obj_t *scr_downtime_lbl_timer;
	lv_obj_t *scr_downtime_imgbtn_back;
	lv_obj_t *scr_downtime_imgbtn_back_label;
	lv_obj_t *scr_downtime_cont_dt_center;
	lv_obj_t *scr_downtime_cont_dt_left;
	lv_obj_t *scr_downtime_btn_g_machine;
	lv_obj_t *scr_downtime_btn_g_machine_label;
	lv_obj_t *scr_downtime_btn_g_material;
	lv_obj_t *scr_downtime_btn_g_material_label;
	lv_obj_t *scr_downtime_btn_g_man;
	lv_obj_t *scr_downtime_btn_g_man_label;
	lv_obj_t *scr_downtime_btn_g_method;
	lv_obj_t *scr_downtime_btn_g_method_label;
	lv_obj_t *scr_downtime_btn_g_other;
	lv_obj_t *scr_downtime_btn_g_other_label;
	lv_obj_t *scr_downtime_cont_dt_right;
	lv_obj_t *scr_downtime_cont_dt_reason_box;
	lv_obj_t *scr_downtime_btn_2;
	lv_obj_t *scr_downtime_btn_2_label;
	lv_obj_t *scr_downtime_btn_1;
	lv_obj_t *scr_downtime_btn_1_label;
	lv_obj_t *scr_downtime_btn_machine_1;
	lv_obj_t *scr_downtime_btn_machine_1_label;
	lv_obj_t *scr_downtime_ta_dt_note;
	lv_obj_t *scr_downtime_btn_dt_;
	lv_obj_t *scr_downtime_btn_dt__label;
	lv_obj_t *scr_prod_entry;
	bool scr_prod_entry_del;
	lv_obj_t *scr_prod_entry_cont_pe_bg;
	lv_obj_t *scr_prod_entry_cont_pe_header;
	lv_obj_t *scr_prod_entry_lbl_pe_tiltle;
	lv_obj_t *scr_prod_entry_label_pe_wo;
	lv_obj_t *scr_prod_entry_imgbtn_back;
	lv_obj_t *scr_prod_entry_imgbtn_back_label;
	lv_obj_t *scr_prod_entry_cont_pe_kpi_row;
	lv_obj_t *scr_prod_entry_cont_total_finished;
	lv_obj_t *scr_prod_entry_lbl_total_title;
	lv_obj_t *scr_prod_entry_lbl_total_value;
	lv_obj_t *scr_prod_entry_cont_ng_qly;
	lv_obj_t *scr_prod_entry_lbl_ng_title;
	lv_obj_t *scr_prod_entry_lbl_ng_value;
	lv_obj_t *scr_prod_entry_btn_ng_up;
	lv_obj_t *scr_prod_entry_btn_ng_up_label;
	lv_obj_t *scr_prod_entry_btn_ng_down;
	lv_obj_t *scr_prod_entry_btn_ng_down_label;
	lv_obj_t *scr_prod_entry_cont_pe_mid_row;
	lv_obj_t *scr_prod_entry_cont_pe_group;
	lv_obj_t *scr_prod_entry_lbl_group_tiltle;
	lv_obj_t *scr_prod_entry_btn_grp_material;
	lv_obj_t *scr_prod_entry_btn_grp_material_label;
	lv_obj_t *scr_prod_entry_btn_grp_machine;
	lv_obj_t *scr_prod_entry_btn_grp_machine_label;
	lv_obj_t *scr_prod_entry_btn_grp_man;
	lv_obj_t *scr_prod_entry_btn_grp_man_label;
	lv_obj_t *scr_prod_entry_btn_grp_method;
	lv_obj_t *scr_prod_entry_btn_grp_method_label;
	lv_obj_t *scr_prod_entry_cont_pe_defect;
	lv_obj_t *scr_prod_entry_lbl_defect_tiltle;
	lv_obj_t *scr_prod_entry_btn_def_1;
	lv_obj_t *scr_prod_entry_btn_def_1_label;
	lv_obj_t *scr_prod_entry_btn_def_4;
	lv_obj_t *scr_prod_entry_btn_def_4_label;
	lv_obj_t *scr_prod_entry_btn_def_3;
	lv_obj_t *scr_prod_entry_btn_def_3_label;
	lv_obj_t *scr_prod_entry_btn_def_2;
	lv_obj_t *scr_prod_entry_btn_def_2_label;
	lv_obj_t *scr_prod_entry_cont_pe_bottom;
	lv_obj_t *scr_prod_entry_btn_pe_submit;
	lv_obj_t *scr_prod_entry_btn_pe_submit_label;
	lv_obj_t *scr_prod_entry_ta_pe_note;
	lv_obj_t *scr_SetupHome;
	bool scr_SetupHome_del;
	lv_obj_t *scr_SetupHome_cont_root;
	lv_obj_t *scr_SetupHome_cont_topbar;
	lv_obj_t *scr_SetupHome_label_2;
	lv_obj_t *scr_SetupHome_btn_1;
	lv_obj_t *scr_SetupHome_btn_1_label;
	lv_obj_t *scr_SetupHome_label_1;
	lv_obj_t *scr_SetupHome_cont_list;
	lv_obj_t *scr_SetupHome_card_network;
	lv_obj_t *scr_SetupHome_img_wifi;
	lv_obj_t *scr_SetupHome_lbl_net_tiltle;
	lv_obj_t *scr_SetupHome_lbl_net_status;
	lv_obj_t *scr_SetupHome_btn_net;
	lv_obj_t *scr_SetupHome_btn_net_label;
	lv_obj_t *scr_SetupHome_card_server;
	lv_obj_t *scr_SetupHome_img_server;
	lv_obj_t *scr_SetupHome_lbl_server_tiltle;
	lv_obj_t *scr_SetupHome_lbl_server_status;
	lv_obj_t *scr_SetupHome_btn_server;
	lv_obj_t *scr_SetupHome_btn_server_label;
	lv_obj_t *scr_SetupHome_card_sync;
	lv_obj_t *scr_SetupHome_img_sync;
	lv_obj_t *scr_SetupHome_lbl_sync_tiltle;
	lv_obj_t *scr_SetupHome_lbl_sync_status;
	lv_obj_t *scr_SetupHome_btn_sync;
	lv_obj_t *scr_SetupHome_btn_sync_label;
	lv_obj_t *scr_SetupHome_card_system;
	lv_obj_t *scr_SetupHome_img_sys;
	lv_obj_t *scr_SetupHome_lbl_sys_tiltle;
	lv_obj_t *scr_SetupHome_lbl_sys_info;
	lv_obj_t *scr_SetupHome_btn_sys;
	lv_obj_t *scr_SetupHome_btn_sys_label;
	lv_obj_t *scr_SetupHome_cont_modbus;
	lv_obj_t *scr_SetupHome_img_modbus;
	lv_obj_t *scr_SetupHome_lbl_Modbus;
	lv_obj_t *scr_SetupHome_label_modbus_infor;
	lv_obj_t *scr_SetupHome_btn_modbus;
	lv_obj_t *scr_SetupHome_btn_modbus_label;
	lv_obj_t *scr_SetupHome_cont_input_config;
	lv_obj_t *scr_SetupHome_img_inputconfig;
	lv_obj_t *scr_SetupHome_lbl_input_config;
	lv_obj_t *scr_SetupHome_label_3;
	lv_obj_t *scr_SetupHome_btn_2;
	lv_obj_t *scr_SetupHome_btn_2_label;
	lv_obj_t *scr_SetupHome_imgbtn_back;
	lv_obj_t *scr_SetupHome_imgbtn_back_label;
	lv_obj_t *scr_setup_network;
	bool scr_setup_network_del;
	lv_obj_t *scr_setup_network_cont_root;
	lv_obj_t *scr_setup_network_cont_topbar;
	lv_obj_t *scr_setup_network_lbl_top_tiltle;
	lv_obj_t *scr_setup_network_lbl_value;
	lv_obj_t *scr_setup_network_btn_online;
	lv_obj_t *scr_setup_network_btn_online_label;
	lv_obj_t *scr_setup_network_cont_body;
	lv_obj_t *scr_setup_network_cont_net;
	lv_obj_t *scr_setup_network_cont_header;
	lv_obj_t *scr_setup_network_lbl_header;
	lv_obj_t *scr_setup_network_img_wifi;
	lv_obj_t *scr_setup_network_line_1;
	lv_obj_t *scr_setup_network_cont_wifi_row;
	lv_obj_t *scr_setup_network_lbl_wifi;
	lv_obj_t *scr_setup_network_ta_wifi;
	lv_obj_t *scr_setup_network_line_2;
	lv_obj_t *scr_setup_network_cont_pass_row;
	lv_obj_t *scr_setup_network_lbl_pass;
	lv_obj_t *scr_setup_network_ta_pass;
	lv_obj_t *scr_setup_network_cont_auto_row;
	lv_obj_t *scr_setup_network_lbl_auto;
	lv_obj_t *scr_setup_network_sw_auto;
	lv_obj_t *scr_setup_network_line_3;
	lv_obj_t *scr_setup_network_cont_row_status;
	lv_obj_t *scr_setup_network_led_status;
	lv_obj_t *scr_setup_network_lbl_status;
	lv_obj_t *scr_setup_network_lbl_ip_value;
	lv_obj_t *scr_setup_network_line_4;
	lv_obj_t *scr_setup_network_cont_btn_row;
	lv_obj_t *scr_setup_network_btn_connect;
	lv_obj_t *scr_setup_network_btn_connect_label;
	lv_obj_t *scr_setup_network_btn_save;
	lv_obj_t *scr_setup_network_btn_save_label;
	lv_obj_t *scr_setup_network_imgbtn_back;
	lv_obj_t *scr_setup_network_imgbtn_back_label;
	lv_obj_t *scr_SetupMQTT;
	bool scr_SetupMQTT_del;
	lv_obj_t *scr_SetupMQTT_cont_root;
	lv_obj_t *scr_SetupMQTT_cont_topbar;
	lv_obj_t *scr_SetupMQTT_lbl_tiltle;
	lv_obj_t *scr_SetupMQTT_lbl_device;
	lv_obj_t *scr_SetupMQTT_btn_online;
	lv_obj_t *scr_SetupMQTT_btn_online_label;
	lv_obj_t *scr_SetupMQTT_imgbtn_back;
	lv_obj_t *scr_SetupMQTT_imgbtn_back_label;
	lv_obj_t *scr_SetupMQTT_cont_body;
	lv_obj_t *scr_SetupMQTT_cont_mqtt;
	lv_obj_t *scr_SetupMQTT_cont_header;
	lv_obj_t *scr_SetupMQTT_label_header;
	lv_obj_t *scr_SetupMQTT_img_cload;
	lv_obj_t *scr_SetupMQTT_cont_broker_scan;
	lv_obj_t *scr_SetupMQTT_lbl_broker;
	lv_obj_t *scr_SetupMQTT_ta_broker;
	lv_obj_t *scr_SetupMQTT_cont_port_row;
	lv_obj_t *scr_SetupMQTT_lbl_port;
	lv_obj_t *scr_SetupMQTT_ta_port;
	lv_obj_t *scr_SetupMQTT_cont_btn_row;
	lv_obj_t *scr_SetupMQTT_btn_conncect;
	lv_obj_t *scr_SetupMQTT_btn_conncect_label;
	lv_obj_t *scr_SetupMQTT_btn_save;
	lv_obj_t *scr_SetupMQTT_btn_save_label;
	lv_obj_t *scr_SetupMQTT_lbl_status;
	lv_obj_t *scr_SetupMQTT_led_status;
	lv_obj_t *scr_SetupMQTT_line_11;
	lv_obj_t *scr_SetupMQTT_cont_user;
	lv_obj_t *scr_SetupMQTT_lbl_user;
	lv_obj_t *scr_SetupMQTT_ta_user;
	lv_obj_t *scr_SetupMQTT_cont_password;
	lv_obj_t *scr_SetupMQTT_lbl_password;
	lv_obj_t *scr_SetupMQTT_ta_password;
	lv_obj_t *scr_SetupMQTT_line_8;
	lv_obj_t *scr_SetupMQTT_line_6;
	lv_obj_t *scr_SetupDataSync;
	bool scr_SetupDataSync_del;
	lv_obj_t *scr_SetupDataSync_cont_root;
	lv_obj_t *scr_SetupDataSync_cont_topbar;
	lv_obj_t *scr_SetupDataSync_lbl_tiltle;
	lv_obj_t *scr_SetupDataSync_lbl_device;
	lv_obj_t *scr_SetupDataSync_btn_online;
	lv_obj_t *scr_SetupDataSync_btn_online_label;
	lv_obj_t *scr_SetupDataSync_cont_body;
	lv_obj_t *scr_SetupDataSync_cont_sync;
	lv_obj_t *scr_SetupDataSync_cont_header;
	lv_obj_t *scr_SetupDataSync_lbl_header;
	lv_obj_t *scr_SetupDataSync_img_sync;
	lv_obj_t *scr_SetupDataSync_cont_last_row;
	lv_obj_t *scr_SetupDataSync_lbl_last_tiltle;
	lv_obj_t *scr_SetupDataSync_lbl_last_value;
	lv_obj_t *scr_SetupDataSync_img_lastsync;
	lv_obj_t *scr_SetupDataSync_btn_last;
	lv_obj_t *scr_SetupDataSync_btn_last_label;
	lv_obj_t *scr_SetupDataSync_line_8;
	lv_obj_t *scr_SetupDataSync_line_7;
	lv_obj_t *scr_SetupDataSync_line_6;
	lv_obj_t *scr_SetupDataSync_line_5;
	lv_obj_t *scr_SetupDataSync_line_9;
	lv_obj_t *scr_SetupDataSync_cont_btn_row;
	lv_obj_t *scr_SetupDataSync_btn_sync;
	lv_obj_t *scr_SetupDataSync_btn_sync_label;
	lv_obj_t *scr_SetupDataSync_btn_save;
	lv_obj_t *scr_SetupDataSync_btn_save_label;
	lv_obj_t *scr_SetupDataSync_cont_ver_row;
	lv_obj_t *scr_SetupDataSync_lbl_ver_tiltle;
	lv_obj_t *scr_SetupDataSync_lbl_ver_value;
	lv_obj_t *scr_SetupDataSync_img_ver;
	lv_obj_t *scr_SetupDataSync_btn_ver;
	lv_obj_t *scr_SetupDataSync_btn_ver_label;
	lv_obj_t *scr_SetupDataSync_cont_auto_row;
	lv_obj_t *scr_SetupDataSync_lbl_auto_tiltle;
	lv_obj_t *scr_SetupDataSync_lbl_auto_value;
	lv_obj_t *scr_SetupDataSync_img_auto;
	lv_obj_t *scr_SetupDataSync_btn_auto;
	lv_obj_t *scr_SetupDataSync_btn_auto_label;
	lv_obj_t *scr_SetupDataSync_cont_status_row;
	lv_obj_t *scr_SetupDataSync_lbl_status_tiltle;
	lv_obj_t *scr_SetupDataSync_lbl_status_msg;
	lv_obj_t *scr_SetupDataSync_img_status;
	lv_obj_t *scr_SetupDataSync_btn_status;
	lv_obj_t *scr_SetupDataSync_btn_status_label;
	lv_obj_t *scr_SetupDataSync_led_status;
	lv_obj_t *scr_SetupDataSync_lbl_status;
	lv_obj_t *scr_SetupDataSync_imgbtn_back;
	lv_obj_t *scr_SetupDataSync_imgbtn_back_label;
	lv_obj_t *scr_setupModbusMaster;
	bool scr_setupModbusMaster_del;
	lv_obj_t *scr_setupModbusMaster_cont_root;
	lv_obj_t *scr_setupModbusMaster_cont_modbus_main;
	lv_obj_t *scr_setupModbusMaster_cont_rs485;
	lv_obj_t *scr_setupModbusMaster_dropdown_poll_Interval;
	lv_obj_t *scr_setupModbusMaster_lbl_rs485_tiltle;
	lv_obj_t *scr_setupModbusMaster_lbl_mode;
	lv_obj_t *scr_setupModbusMaster_dropdown_baudrate;
	lv_obj_t *scr_setupModbusMaster_lbl_Baudrate;
	lv_obj_t *scr_setupModbusMaster_dropdown_parity;
	lv_obj_t *scr_setupModbusMaster_lbl_parity;
	lv_obj_t *scr_setupModbusMaster_dropdown_bitstop;
	lv_obj_t *scr_setupModbusMaster_lbl_stopbit;
	lv_obj_t *scr_setupModbusMaster_dropdown_timeout;
	lv_obj_t *scr_setupModbusMaster_lbl_timeout;
	lv_obj_t *scr_setupModbusMaster_lbl_poll_Interval;
	lv_obj_t *scr_setupModbusMaster_dropdown_mode;
	lv_obj_t *scr_setupModbusMaster_cont_device_list;
	lv_obj_t *scr_setupModbusMaster_lbl_device_list;
	lv_obj_t *scr_setupModbusMaster_tab_device;
	lv_obj_t *scr_setupModbusMaster_btn_add_device;
	lv_obj_t *scr_setupModbusMaster_btn_add_device_label;
	lv_obj_t *scr_setupModbusMaster_cont_topbar;
	lv_obj_t *scr_setupModbusMaster_lbl_modbus;
	lv_obj_t *scr_setupModbusMaster_lbl_device;
	lv_obj_t *scr_setupModbusMaster_btn_online;
	lv_obj_t *scr_setupModbusMaster_btn_online_label;
	lv_obj_t *scr_setupModbusMaster_imgbtn_1;
	lv_obj_t *scr_setupModbusMaster_imgbtn_1_label;
	lv_obj_t *scr_setupModbusMaster_btn_test_connection;
	lv_obj_t *scr_setupModbusMaster_btn_test_connection_label;
	lv_obj_t *scr_setupModbusMaster_btn_save;
	lv_obj_t *scr_setupModbusMaster_btn_save_label;
	lv_obj_t *scr_SystemSetting;
	bool scr_SystemSetting_del;
	lv_obj_t *scr_SystemSetting_cont_root;
	lv_obj_t *scr_SystemSetting_cont_topbar;
	lv_obj_t *scr_SystemSetting_lbl_tiltle;
	lv_obj_t *scr_SystemSetting_btn_online;
	lv_obj_t *scr_SystemSetting_btn_online_label;
	lv_obj_t *scr_SystemSetting_label_device;
	lv_obj_t *scr_SystemSetting_cont_1;
	lv_obj_t *scr_SystemSetting_cont_body;
	lv_obj_t *scr_SystemSetting_cont_display;
	lv_obj_t *scr_SystemSetting_label_display;
	lv_obj_t *scr_SystemSetting_img_display;
	lv_obj_t *scr_SystemSetting_cont_display_detail;
	lv_obj_t *scr_SystemSetting_lbl_display_brightness;
	lv_obj_t *scr_SystemSetting_slider_display_brightness;
	lv_obj_t *scr_SystemSetting_lbl_display_sleep;
	lv_obj_t *scr_SystemSetting_ddlist_display_sleep;
	lv_obj_t *scr_SystemSetting_line_4;
	lv_obj_t *scr_SystemSetting_line_2;
	lv_obj_t *scr_SystemSetting_line_1;
	lv_obj_t *scr_SystemSetting_cont_button;
	lv_obj_t *scr_SystemSetting_btn_reboot;
	lv_obj_t *scr_SystemSetting_btn_reboot_label;
	lv_obj_t *scr_SystemSetting_btn_reset;
	lv_obj_t *scr_SystemSetting_btn_reset_label;
	lv_obj_t *scr_SystemSetting_cont_device;
	lv_obj_t *scr_SystemSetting_lbl_device_tiltle;
	lv_obj_t *scr_SystemSetting_img_device;
	lv_obj_t *scr_SystemSetting_cont_device_detail;
	lv_obj_t *scr_SystemSetting_lbl_device_name;
	lv_obj_t *scr_SystemSetting_lbl_device_fw;
	lv_obj_t *scr_SystemSetting_lbl_device_serinumber;
	lv_obj_t *scr_SystemSetting_lbl_device_name_value;
	lv_obj_t *scr_SystemSetting_lbl_device_fw_value;
	lv_obj_t *scr_SystemSetting_lbl_device_serinumber_value;
	lv_obj_t *scr_SystemSetting_line_5;
	lv_obj_t *scr_SystemSetting_imgbtn_back;
	lv_obj_t *scr_SystemSetting_imgbtn_back_label;
	lv_obj_t *scr_input_config;
	bool scr_input_config_del;
	lv_obj_t *scr_input_config_cont_root;
	lv_obj_t *scr_input_config_cont_1;
	lv_obj_t *scr_input_config_lbl_tiltle;
	lv_obj_t *scr_input_config_lbl_value;
	lv_obj_t *scr_input_config_btn_online;
	lv_obj_t *scr_input_config_btn_online_label;
	lv_obj_t *scr_input_config_imgbtn_back;
	lv_obj_t *scr_input_config_imgbtn_back_label;
	lv_obj_t *scr_input_config_btn_test;
	lv_obj_t *scr_input_config_btn_test_label;
	lv_obj_t *scr_input_config_btn_save;
	lv_obj_t *scr_input_config_btn_save_label;
	lv_obj_t *scr_input_config_tabview_intput;
	lv_obj_t *scr_input_config_tabview_intput_tab_1;
	lv_obj_t *scr_input_config_tabview_intput_tab_2;
	lv_obj_t *scr_input_config_tabview_intput_tab_3;
	lv_obj_t *scr_input_config_tabview_intput_tab_4;
	lv_obj_t *scr_input_config_cont_intput1;
	lv_obj_t *scr_input_config_line_1;
	lv_obj_t *scr_input_config_ddlist_ip1_debounce;
	lv_obj_t *scr_input_config_ddlist_ip1_function;
	lv_obj_t *scr_input_config_lbl_ip1_debounce;
	lv_obj_t *scr_input_config_lbl_ip1_trigger;
	lv_obj_t *scr_input_config_ddlist_ip1_trigger;
	lv_obj_t *scr_input_config_lbl_ip1_function;
	lv_obj_t *scr_input_config_lbl_ip1;
	lv_obj_t *scr_input_config_lbl_ip1_livestatus;
	lv_obj_t *scr_input_config_lbl_ip1_status;
	lv_obj_t *scr_input_config_led_ip1_status;
	lv_obj_t *scr_input_config_line_2;
	lv_obj_t *scr_input_config_line_3;
	lv_obj_t *scr_input_config_line_4;
	lv_obj_t *scr_input_config_ddlist_ip1_press;
	lv_obj_t *scr_input_config_lbl_ip1_press;
	lv_obj_t *scr_input_config_line_17;
	lv_obj_t *scr_input_config_cont_input2;
	lv_obj_t *scr_input_config_line_22;
	lv_obj_t *scr_input_config_ddlist_ip2_debounce;
	lv_obj_t *scr_input_config_ddlist_ip2_function;
	lv_obj_t *scr_input_config_lbl_ip2_debounce;
	lv_obj_t *scr_input_config_label_ip2_trigger;
	lv_obj_t *scr_input_config_ddlist_ip2_trigger;
	lv_obj_t *scr_input_config_lbl_ip2_function;
	lv_obj_t *scr_input_config_lbl_input2;
	lv_obj_t *scr_input_config_lbl_ip2_livestatus;
	lv_obj_t *scr_input_config_lbl_ip2_status;
	lv_obj_t *scr_input_config_led_ip2_status;
	lv_obj_t *scr_input_config_line_21;
	lv_obj_t *scr_input_config_line_20;
	lv_obj_t *scr_input_config_line_19;
	lv_obj_t *scr_input_config_ddlist_ip2_press;
	lv_obj_t *scr_input_config_lbl_ip2_press;
	lv_obj_t *scr_input_config_line_18;
	lv_obj_t *scr_input_config_cont_input3;
	lv_obj_t *scr_input_config_line_27;
	lv_obj_t *scr_input_config_ddlist_ip3_debounce;
	lv_obj_t *scr_input_config_ddlist_ip3_function;
	lv_obj_t *scr_input_config_lbl_ip3_debounce;
	lv_obj_t *scr_input_config_lbl_ip3_trigger;
	lv_obj_t *scr_input_config_ddlist_ip3_trigger;
	lv_obj_t *scr_input_config_lbl_ip3_function;
	lv_obj_t *scr_input_config_lbl_ip3;
	lv_obj_t *scr_input_config_lbl_ip3_livestatus;
	lv_obj_t *scr_input_config_lbl_ip3_status;
	lv_obj_t *scr_input_config_led_ip3_status;
	lv_obj_t *scr_input_config_line_26;
	lv_obj_t *scr_input_config_line_25;
	lv_obj_t *scr_input_config_line_24;
	lv_obj_t *scr_input_config_ddlist_ip3_press;
	lv_obj_t *scr_input_config_lbl_ip3_press;
	lv_obj_t *scr_input_config_line_23;
	lv_obj_t *scr_input_config_cont_input4;
	lv_obj_t *scr_input_config_line_32;
	lv_obj_t *scr_input_config_ddlist_ip4_debounce;
	lv_obj_t *scr_input_config_ddlist_ip4_function;
	lv_obj_t *scr_input_config_lbl_ip4_debounce;
	lv_obj_t *scr_input_config_lbl_ip4_trigger;
	lv_obj_t *scr_input_config_ddlist_ip4_trigger;
	lv_obj_t *scr_input_config_lbl_ip4_function;
	lv_obj_t *scr_input_config_lbl_ip4;
	lv_obj_t *scr_input_config_lbl_ip4_livestatus;
	lv_obj_t *scr_input_config_lbl_ip4_status;
	lv_obj_t *scr_input_config_led_ip4_status;
	lv_obj_t *scr_input_config_line_31;
	lv_obj_t *scr_input_config_line_30;
	lv_obj_t *scr_input_config_line_29;
	lv_obj_t *scr_input_config_ddlist_ip4_press;
	lv_obj_t *scr_input_config_lbl_ip4_press;
	lv_obj_t *scr_input_config_line_28;
	lv_obj_t *g_kb_top_layer;
}lv_ui;

typedef void (*ui_setup_scr_t)(lv_ui * ui);

void ui_init_style(lv_style_t * style);

void ui_load_scr_animation(lv_ui *ui, lv_obj_t ** new_scr, bool new_scr_del, bool * old_scr_del, ui_setup_scr_t setup_scr,
                           lv_screen_load_anim_t anim_type, uint32_t time, uint32_t delay, bool is_clean, bool auto_del);

void ui_animation(void * var, uint32_t duration, int32_t delay, int32_t start_value, int32_t end_value, lv_anim_path_cb_t path_cb,
                  uint32_t repeat_cnt, uint32_t repeat_delay, uint32_t playback_time, uint32_t playback_delay,
                  lv_anim_exec_xcb_t exec_cb, lv_anim_start_cb_t start_cb, lv_anim_completed_cb_t ready_cb, lv_anim_deleted_cb_t deleted_cb);


void init_scr_del_flag(lv_ui *ui);

void setup_bottom_layer(void);

void setup_ui(lv_ui *ui);

void video_play(lv_ui *ui);

void init_keyboard(lv_ui *ui);

extern lv_ui guider_ui;


void setup_scr_boot(lv_ui *ui);
void setup_scr_scr_login(lv_ui *ui);
void setup_scr_scr_dashboard(lv_ui *ui);
void setup_scr_scr_downtime(lv_ui *ui);
void setup_scr_scr_prod_entry(lv_ui *ui);
void setup_scr_scr_SetupHome(lv_ui *ui);
void setup_scr_scr_setup_network(lv_ui *ui);
void setup_scr_scr_SetupMQTT(lv_ui *ui);
void setup_scr_scr_SetupDataSync(lv_ui *ui);
void setup_scr_scr_setupModbusMaster(lv_ui *ui);
void setup_scr_scr_SystemSetting(lv_ui *ui);
void setup_scr_scr_input_config(lv_ui *ui);
LV_IMAGE_DECLARE(_logoSynaptiX_RGB565A8_200x200);
LV_IMAGE_DECLARE(_nfc_RGB565A8_200x200);
LV_IMAGE_DECLARE(_leftarrow_RGB565A8_64x64);
LV_IMAGE_DECLARE(_input_RGB565A8_64x64);
LV_IMAGE_DECLARE(_wifi_RGB565A8_64x64);
LV_IMAGE_DECLARE(_server3_RGB565A8_64x64);
LV_IMAGE_DECLARE(_sync_RGB565A8_64x64);
LV_IMAGE_DECLARE(_system_RGB565A8_64x64);
LV_IMAGE_DECLARE(_modbus_RGB565A8_64x64);
LV_IMAGE_DECLARE(_inputconfig_RGB565A8_64x64);
LV_IMAGE_DECLARE(_lasttime_RGB565A8_48x48);
LV_IMAGE_DECLARE(_configuration_RGB565A8_48x48);
LV_IMAGE_DECLARE(_clock_RGB565A8_48x48);
LV_IMAGE_DECLARE(_status_RGB565A8_48x48);
LV_IMAGE_DECLARE(_brightness_RGB565A8_64x64);

LV_FONT_DECLARE(lv_font_montserratMedium_40)
LV_FONT_DECLARE(lv_font_montserratMedium_26)
LV_FONT_DECLARE(lv_font_montserratMedium_22)
LV_FONT_DECLARE(lv_font_arial_40)
LV_FONT_DECLARE(lv_font_arial_30)
LV_FONT_DECLARE(lv_font_arial_20)
LV_FONT_DECLARE(lv_font_Acme_Regular_50)
LV_FONT_DECLARE(lv_font_montserratMedium_12)
LV_FONT_DECLARE(lv_font_Acme_Regular_34)
LV_FONT_DECLARE(lv_font_Acme_Regular_30)
LV_FONT_DECLARE(lv_font_Acme_Regular_60)
LV_FONT_DECLARE(lv_font_Acme_Regular_40)
LV_FONT_DECLARE(lv_font_Adventpro_regular_26)
LV_FONT_DECLARE(lv_font_Acme_Regular_24)
LV_FONT_DECLARE(lv_font_Acme_Regular_64)
LV_FONT_DECLARE(lv_font_montserratMedium_30)
LV_FONT_DECLARE(lv_font_Acme_Regular_25)
LV_FONT_DECLARE(lv_font_Acme_Regular_26)
LV_FONT_DECLARE(lv_font_Abel_regular_24)
LV_FONT_DECLARE(lv_font_arial_25)
LV_FONT_DECLARE(lv_font_arial_32)
LV_FONT_DECLARE(lv_font_montserratMedium_25)
LV_FONT_DECLARE(lv_font_arial_28)
LV_FONT_DECLARE(lv_font_arial_18)


#ifdef __cplusplus
}
#endif
#endif
