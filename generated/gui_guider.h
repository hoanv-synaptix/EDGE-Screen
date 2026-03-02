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
	lv_obj_t *scr_prod_entry_btn_pe_back;
	lv_obj_t *scr_prod_entry_btn_pe_back_label;
	lv_obj_t *scr_prod_entry_btn_pe_submit;
	lv_obj_t *scr_prod_entry_btn_pe_submit_label;
	lv_obj_t *scr_prod_entry_ta_pe_note;
	lv_obj_t *boot;
	bool boot_del;
	lv_obj_t *boot_cont_center;
	lv_obj_t *boot_img_logo;
	lv_obj_t *boot_lbl_title;
	lv_obj_t *boot_lbl_status;
	lv_obj_t *boot_bar_progress;
	lv_obj_t *boot_lbl_loanding_detail;
	lv_obj_t *boot_cont_footer;
	lv_obj_t *boot_lbl_version;
	lv_obj_t *boot_lbl_edgeid;
	lv_obj_t *boot_lbl_date;
	lv_obj_t *src_status;
	bool src_status_del;
	lv_obj_t *src_status_cont_;
	lv_obj_t *src_status_cont_net_;
	lv_obj_t *src_status_lbl_online;
	lv_obj_t *src_status_img_;
	lv_obj_t *src_status_lbl_;
	lv_obj_t *src_status_lbl_edge_;
	lv_obj_t *src_status_lbl_app_;
	lv_obj_t *src_status_btn_;
	lv_obj_t *src_status_btn__label;
	lv_obj_t *src_status_btn_lang;
	lv_obj_t *src_status_btn_lang_label;
	lv_obj_t *src_status_cont_body;
	lv_obj_t *src_status_cont_card_net;
	lv_obj_t *src_status_lbl_net_tiltle;
	lv_obj_t *src_status_lbl_ssid;
	lv_obj_t *src_status_lbl_ip;
	lv_obj_t *src_status_lbl_lan;
	lv_obj_t *src_status_lbl_wifi;
	lv_obj_t *src_status_cont_card_mqtt;
	lv_obj_t *src_status_lbl_pub_topic;
	lv_obj_t *src_status_lbl_mqtt_tiltle;
	lv_obj_t *src_status_lbl_broker;
	lv_obj_t *src_status_lbl_sub_topic;
	lv_obj_t *src_status_lbl_mqtt_status;
	lv_obj_t *src_status_cont_card_sysc;
	lv_obj_t *src_status_lbl_sync_tiltle;
	lv_obj_t *src_status_lbl_spending;
	lv_obj_t *src_status_lbl_note;
	lv_obj_t *src_status_lbl_oldest;
	lv_obj_t *src_status_lbl_last_sync;
	lv_obj_t *src_status_lbl_retry_policy;
	lv_obj_t *src_status_cont_bottom;
	lv_obj_t *src_status_btn_settings;
	lv_obj_t *src_status_btn_settings_label;
	lv_obj_t *src_status_btn_continue;
	lv_obj_t *src_status_btn_continue_label;
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


void setup_scr_scr_dashboard(lv_ui *ui);
void setup_scr_scr_downtime(lv_ui *ui);
void setup_scr_scr_prod_entry(lv_ui *ui);
void setup_scr_boot(lv_ui *ui);
void setup_scr_src_status(lv_ui *ui);
LV_IMAGE_DECLARE(_logo_input_RGB565A8_40x40);
LV_IMAGE_DECLARE(_logo1_I1_220x220);
LV_IMAGE_DECLARE(_icon_online_RGB565A8_20x20);

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
LV_FONT_DECLARE(lv_font_montserratMedium_40)
LV_FONT_DECLARE(lv_font_montserratMedium_26)
LV_FONT_DECLARE(lv_font_montserratMedium_22)


#ifdef __cplusplus
}
#endif
#endif
