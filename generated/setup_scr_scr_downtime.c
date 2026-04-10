/*
* Copyright 2026 NXP
* NXP Proprietary. This software is owned or controlled by NXP and may only be used strictly in
* accordance with the applicable license terms. By expressly accepting such terms or by downloading, installing,
* activating and/or otherwise using the software, you are agreeing that you have read, and that you agree to
* comply with and are bound by, such license terms.  If you do not agree to be bound by the applicable license
* terms, then you may not retain, install, activate or otherwise use the software.
*/

#include "lvgl.h"
#include <stdio.h>
#include "gui_guider.h"
#include "events_init.h"
#include "widgets_init.h"
#include "custom.h"



void setup_scr_scr_downtime(lv_ui *ui)
{
    //Write codes scr_downtime
    ui->scr_downtime = lv_obj_create(NULL);
    lv_obj_set_size(ui->scr_downtime, 1280, 720);
    lv_obj_set_scrollbar_mode(ui->scr_downtime, LV_SCROLLBAR_MODE_OFF);

    //Write style for scr_downtime, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->scr_downtime, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scr_downtime, lv_color_hex(0x0f0f0f), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scr_downtime, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scr_downtime_cont_dt
    ui->scr_downtime_cont_dt = lv_obj_create(ui->scr_downtime);
    lv_obj_set_pos(ui->scr_downtime_cont_dt, 23, 0);
    lv_obj_set_size(ui->scr_downtime_cont_dt, 1232, 699);
    lv_obj_set_scrollbar_mode(ui->scr_downtime_cont_dt, LV_SCROLLBAR_MODE_OFF);

    //Write style for scr_downtime_cont_dt, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_radius(ui->scr_downtime_cont_dt, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scr_downtime_cont_dt, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_downtime_cont_dt, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->scr_downtime_cont_dt, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scr_downtime_cont_dt, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scr_downtime_cont_dt, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scr_downtime_cont_dt, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scr_downtime_cont_dt, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scr_downtime_cont_dt_topbar
    ui->scr_downtime_cont_dt_topbar = lv_obj_create(ui->scr_downtime_cont_dt);
    lv_obj_set_pos(ui->scr_downtime_cont_dt_topbar, 0, 0);
    lv_obj_set_size(ui->scr_downtime_cont_dt_topbar, 1232, 90);
    lv_obj_set_scrollbar_mode(ui->scr_downtime_cont_dt_topbar, LV_SCROLLBAR_MODE_OFF);

    //Write style for scr_downtime_cont_dt_topbar, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scr_downtime_cont_dt_topbar, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_downtime_cont_dt_topbar, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scr_downtime_cont_dt_topbar, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scr_downtime_cont_dt_topbar, lv_color_hex(0xd32f2f), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scr_downtime_cont_dt_topbar, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scr_downtime_cont_dt_topbar, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scr_downtime_cont_dt_topbar, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scr_downtime_cont_dt_topbar, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scr_downtime_cont_dt_topbar, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_downtime_cont_dt_topbar, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scr_downtime_lbl_machine_status
    ui->scr_downtime_lbl_machine_status = lv_label_create(ui->scr_downtime_cont_dt_topbar);
    lv_obj_set_pos(ui->scr_downtime_lbl_machine_status, 349, 20);
    lv_obj_set_size(ui->scr_downtime_lbl_machine_status, 529, 61);
    lv_label_set_text(ui->scr_downtime_lbl_machine_status, "MACHINE STOPPED");
    lv_label_set_long_mode(ui->scr_downtime_lbl_machine_status, LV_LABEL_LONG_WRAP);

    //Write style for scr_downtime_lbl_machine_status, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scr_downtime_lbl_machine_status, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_downtime_lbl_machine_status, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scr_downtime_lbl_machine_status, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scr_downtime_lbl_machine_status, &lv_font_Acme_Regular_50, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scr_downtime_lbl_machine_status, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->scr_downtime_lbl_machine_status, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->scr_downtime_lbl_machine_status, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scr_downtime_lbl_machine_status, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scr_downtime_lbl_machine_status, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scr_downtime_lbl_machine_status, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scr_downtime_lbl_machine_status, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scr_downtime_lbl_machine_status, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scr_downtime_lbl_machine_status, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_downtime_lbl_machine_status, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scr_downtime_lbl_stop_timer
    ui->scr_downtime_lbl_stop_timer = lv_label_create(ui->scr_downtime_cont_dt_topbar);
    lv_obj_set_pos(ui->scr_downtime_lbl_stop_timer, 968, 29);
    lv_obj_set_size(ui->scr_downtime_lbl_stop_timer, 258, 32);
    lv_label_set_text(ui->scr_downtime_lbl_stop_timer, "TIME: 00:00:01");
    lv_label_set_long_mode(ui->scr_downtime_lbl_stop_timer, LV_LABEL_LONG_WRAP);

    //Write style for scr_downtime_lbl_stop_timer, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->scr_downtime_lbl_stop_timer, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_downtime_lbl_stop_timer, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_downtime_lbl_stop_timer, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->scr_downtime_lbl_stop_timer, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scr_downtime_lbl_stop_timer, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scr_downtime_lbl_stop_timer, &lv_font_Acme_Regular_34, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scr_downtime_lbl_stop_timer, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->scr_downtime_lbl_stop_timer, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->scr_downtime_lbl_stop_timer, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scr_downtime_lbl_stop_timer, LV_TEXT_ALIGN_RIGHT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scr_downtime_lbl_stop_timer, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scr_downtime_lbl_stop_timer, 20, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scr_downtime_lbl_stop_timer, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scr_downtime_lbl_stop_timer, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scr_downtime_cont_dt_center
    ui->scr_downtime_cont_dt_center = lv_obj_create(ui->scr_downtime_cont_dt);
    lv_obj_set_pos(ui->scr_downtime_cont_dt_center, 0, 100);
    lv_obj_set_size(ui->scr_downtime_cont_dt_center, 1232, 573);
    lv_obj_set_scrollbar_mode(ui->scr_downtime_cont_dt_center, LV_SCROLLBAR_MODE_OFF);

    //Write style for scr_downtime_cont_dt_center, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->scr_downtime_cont_dt_center, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scr_downtime_cont_dt_center, lv_color_hex(0x404040), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scr_downtime_cont_dt_center, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->scr_downtime_cont_dt_center, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_downtime_cont_dt_center, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_downtime_cont_dt_center, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scr_downtime_cont_dt_center, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scr_downtime_cont_dt_center, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scr_downtime_cont_dt_center, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scr_downtime_cont_dt_center, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scr_downtime_menu_detail_reason
    ui->scr_downtime_menu_detail_reason = lv_menu_create(ui->scr_downtime_cont_dt_center);
    lv_obj_set_pos(ui->scr_downtime_menu_detail_reason, 0, 0);
    lv_obj_set_size(ui->scr_downtime_menu_detail_reason, 1232, 546);
    lv_obj_set_scrollbar_mode(ui->scr_downtime_menu_detail_reason, LV_SCROLLBAR_MODE_OFF);

    //Create sidebar page for menu scr_downtime_menu_detail_reason
    ui->scr_downtime_menu_detail_reason_sidebar_page = lv_menu_page_create(ui->scr_downtime_menu_detail_reason, "GROUP");
    lv_menu_set_sidebar_page(ui->scr_downtime_menu_detail_reason, ui->scr_downtime_menu_detail_reason_sidebar_page);
    lv_obj_set_scrollbar_mode(ui->scr_downtime_menu_detail_reason_sidebar_page, LV_SCROLLBAR_MODE_OFF);

    //Create subpage for scr_downtime_menu_detail_reason
    lv_obj_t * scr_downtime_menu_detail_reason_subpage_1 = lv_menu_page_create(ui->scr_downtime_menu_detail_reason, NULL);
    ui->scr_downtime_menu_detail_reason_subpage_1_cont = lv_menu_cont_create(scr_downtime_menu_detail_reason_subpage_1);
    lv_obj_set_layout(ui->scr_downtime_menu_detail_reason_subpage_1_cont, LV_LAYOUT_NONE);
    ui->scr_downtime_menu_detail_reason_cont_1 = lv_menu_cont_create(ui->scr_downtime_menu_detail_reason_sidebar_page);
    ui->scr_downtime_menu_detail_reason_label_1 = lv_label_create(ui->scr_downtime_menu_detail_reason_cont_1);
    lv_label_set_text(ui->scr_downtime_menu_detail_reason_label_1, "MACHINE");
    lv_obj_set_size(ui->scr_downtime_menu_detail_reason_label_1, LV_PCT(100), LV_SIZE_CONTENT);
    lv_label_set_long_mode(ui->scr_downtime_menu_detail_reason_label_1, LV_LABEL_LONG_CLIP);
    lv_obj_set_scrollbar_mode(scr_downtime_menu_detail_reason_subpage_1, LV_SCROLLBAR_MODE_OFF);
    lv_menu_set_load_page_event(ui->scr_downtime_menu_detail_reason, ui->scr_downtime_menu_detail_reason_cont_1, scr_downtime_menu_detail_reason_subpage_1);

    //Create subpage for scr_downtime_menu_detail_reason
    lv_obj_t * scr_downtime_menu_detail_reason_subpage_2 = lv_menu_page_create(ui->scr_downtime_menu_detail_reason, NULL);
    ui->scr_downtime_menu_detail_reason_subpage_2_cont = lv_menu_cont_create(scr_downtime_menu_detail_reason_subpage_2);
    lv_obj_set_layout(ui->scr_downtime_menu_detail_reason_subpage_2_cont, LV_LAYOUT_NONE);
    ui->scr_downtime_menu_detail_reason_cont_2 = lv_menu_cont_create(ui->scr_downtime_menu_detail_reason_sidebar_page);
    ui->scr_downtime_menu_detail_reason_label_2 = lv_label_create(ui->scr_downtime_menu_detail_reason_cont_2);
    lv_label_set_text(ui->scr_downtime_menu_detail_reason_label_2, "MATERIAL");
    lv_obj_set_size(ui->scr_downtime_menu_detail_reason_label_2, LV_PCT(100), LV_SIZE_CONTENT);
    lv_label_set_long_mode(ui->scr_downtime_menu_detail_reason_label_2, LV_LABEL_LONG_CLIP);
    lv_obj_set_scrollbar_mode(scr_downtime_menu_detail_reason_subpage_2, LV_SCROLLBAR_MODE_OFF);
    lv_menu_set_load_page_event(ui->scr_downtime_menu_detail_reason, ui->scr_downtime_menu_detail_reason_cont_2, scr_downtime_menu_detail_reason_subpage_2);

    //Create subpage for scr_downtime_menu_detail_reason
    lv_obj_t * scr_downtime_menu_detail_reason_subpage_3 = lv_menu_page_create(ui->scr_downtime_menu_detail_reason, NULL);
    ui->scr_downtime_menu_detail_reason_subpage_3_cont = lv_menu_cont_create(scr_downtime_menu_detail_reason_subpage_3);
    lv_obj_set_layout(ui->scr_downtime_menu_detail_reason_subpage_3_cont, LV_LAYOUT_NONE);
    ui->scr_downtime_menu_detail_reason_cont_3 = lv_menu_cont_create(ui->scr_downtime_menu_detail_reason_sidebar_page);
    ui->scr_downtime_menu_detail_reason_label_3 = lv_label_create(ui->scr_downtime_menu_detail_reason_cont_3);
    lv_label_set_text(ui->scr_downtime_menu_detail_reason_label_3, "MAN");
    lv_obj_set_size(ui->scr_downtime_menu_detail_reason_label_3, LV_PCT(100), LV_SIZE_CONTENT);
    lv_label_set_long_mode(ui->scr_downtime_menu_detail_reason_label_3, LV_LABEL_LONG_CLIP);
    lv_obj_set_scrollbar_mode(scr_downtime_menu_detail_reason_subpage_3, LV_SCROLLBAR_MODE_OFF);
    lv_menu_set_load_page_event(ui->scr_downtime_menu_detail_reason, ui->scr_downtime_menu_detail_reason_cont_3, scr_downtime_menu_detail_reason_subpage_3);

    //Create subpage for scr_downtime_menu_detail_reason
    lv_obj_t * scr_downtime_menu_detail_reason_subpage_4 = lv_menu_page_create(ui->scr_downtime_menu_detail_reason, NULL);
    ui->scr_downtime_menu_detail_reason_subpage_4_cont = lv_menu_cont_create(scr_downtime_menu_detail_reason_subpage_4);
    lv_obj_set_layout(ui->scr_downtime_menu_detail_reason_subpage_4_cont, LV_LAYOUT_NONE);
    ui->scr_downtime_menu_detail_reason_cont_4 = lv_menu_cont_create(ui->scr_downtime_menu_detail_reason_sidebar_page);
    ui->scr_downtime_menu_detail_reason_label_4 = lv_label_create(ui->scr_downtime_menu_detail_reason_cont_4);
    lv_label_set_text(ui->scr_downtime_menu_detail_reason_label_4, "METHOD");
    lv_obj_set_size(ui->scr_downtime_menu_detail_reason_label_4, LV_PCT(100), LV_SIZE_CONTENT);
    lv_label_set_long_mode(ui->scr_downtime_menu_detail_reason_label_4, LV_LABEL_LONG_CLIP);
    lv_obj_set_scrollbar_mode(scr_downtime_menu_detail_reason_subpage_4, LV_SCROLLBAR_MODE_OFF);
    lv_menu_set_load_page_event(ui->scr_downtime_menu_detail_reason, ui->scr_downtime_menu_detail_reason_cont_4, scr_downtime_menu_detail_reason_subpage_4);

    //Create subpage for scr_downtime_menu_detail_reason
    lv_obj_t * scr_downtime_menu_detail_reason_subpage_5 = lv_menu_page_create(ui->scr_downtime_menu_detail_reason, NULL);
    ui->scr_downtime_menu_detail_reason_subpage_5_cont = lv_menu_cont_create(scr_downtime_menu_detail_reason_subpage_5);
    lv_obj_set_layout(ui->scr_downtime_menu_detail_reason_subpage_5_cont, LV_LAYOUT_NONE);
    ui->scr_downtime_menu_detail_reason_cont_5 = lv_menu_cont_create(ui->scr_downtime_menu_detail_reason_sidebar_page);
    ui->scr_downtime_menu_detail_reason_label_5 = lv_label_create(ui->scr_downtime_menu_detail_reason_cont_5);
    lv_label_set_text(ui->scr_downtime_menu_detail_reason_label_5, "MEASUREMENT");
    lv_obj_set_size(ui->scr_downtime_menu_detail_reason_label_5, LV_PCT(100), LV_SIZE_CONTENT);
    lv_label_set_long_mode(ui->scr_downtime_menu_detail_reason_label_5, LV_LABEL_LONG_CLIP);
    lv_obj_set_scrollbar_mode(scr_downtime_menu_detail_reason_subpage_5, LV_SCROLLBAR_MODE_OFF);
    lv_menu_set_load_page_event(ui->scr_downtime_menu_detail_reason, ui->scr_downtime_menu_detail_reason_cont_5, scr_downtime_menu_detail_reason_subpage_5);

    //Write style for scr_downtime_menu_detail_reason, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->scr_downtime_menu_detail_reason, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scr_downtime_menu_detail_reason, lv_color_hex(0x404040), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scr_downtime_menu_detail_reason, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_downtime_menu_detail_reason, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_downtime_menu_detail_reason, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style for scr_downtime_menu_detail_reason, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_margin_ver(ui->scr_downtime_menu_detail_reason_sidebar_page, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->scr_downtime_menu_detail_reason_sidebar_page, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_downtime_menu_detail_reason_sidebar_page, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scr_downtime_menu_detail_reason_sidebar_page, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scr_downtime_menu_detail_reason_sidebar_page, lv_color_hex(0x2F92DA), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scr_downtime_menu_detail_reason_sidebar_page, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style state: LV_STATE_DEFAULT for &style_scr_downtime_menu_detail_reason_extra_option_btns_main_default
    static lv_style_t style_scr_downtime_menu_detail_reason_extra_option_btns_main_default;
    ui_init_style(&style_scr_downtime_menu_detail_reason_extra_option_btns_main_default);

    lv_style_set_text_color(&style_scr_downtime_menu_detail_reason_extra_option_btns_main_default, lv_color_hex(0xffffff));
    lv_style_set_text_font(&style_scr_downtime_menu_detail_reason_extra_option_btns_main_default, &lv_font_Acme_Regular_40);
    lv_style_set_text_opa(&style_scr_downtime_menu_detail_reason_extra_option_btns_main_default, 255);
    lv_style_set_text_align(&style_scr_downtime_menu_detail_reason_extra_option_btns_main_default, LV_TEXT_ALIGN_CENTER);
    lv_style_set_pad_top(&style_scr_downtime_menu_detail_reason_extra_option_btns_main_default, 10);
    lv_style_set_pad_bottom(&style_scr_downtime_menu_detail_reason_extra_option_btns_main_default, 10);
    lv_obj_add_style(ui->scr_downtime_menu_detail_reason_cont_5, &style_scr_downtime_menu_detail_reason_extra_option_btns_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_add_style(ui->scr_downtime_menu_detail_reason_cont_4, &style_scr_downtime_menu_detail_reason_extra_option_btns_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_add_style(ui->scr_downtime_menu_detail_reason_cont_3, &style_scr_downtime_menu_detail_reason_extra_option_btns_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_add_style(ui->scr_downtime_menu_detail_reason_cont_2, &style_scr_downtime_menu_detail_reason_extra_option_btns_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_add_style(ui->scr_downtime_menu_detail_reason_cont_1, &style_scr_downtime_menu_detail_reason_extra_option_btns_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style state: LV_STATE_CHECKED for &style_scr_downtime_menu_detail_reason_extra_option_btns_main_checked
    static lv_style_t style_scr_downtime_menu_detail_reason_extra_option_btns_main_checked;
    ui_init_style(&style_scr_downtime_menu_detail_reason_extra_option_btns_main_checked);

    lv_style_set_text_color(&style_scr_downtime_menu_detail_reason_extra_option_btns_main_checked, lv_color_hex(0x000000));
    lv_style_set_text_font(&style_scr_downtime_menu_detail_reason_extra_option_btns_main_checked, &lv_font_Acme_Regular_40);
    lv_style_set_text_opa(&style_scr_downtime_menu_detail_reason_extra_option_btns_main_checked, 255);
    lv_style_set_text_align(&style_scr_downtime_menu_detail_reason_extra_option_btns_main_checked, LV_TEXT_ALIGN_CENTER);
    lv_style_set_border_width(&style_scr_downtime_menu_detail_reason_extra_option_btns_main_checked, 0);
    lv_style_set_radius(&style_scr_downtime_menu_detail_reason_extra_option_btns_main_checked, 5);
    lv_style_set_bg_opa(&style_scr_downtime_menu_detail_reason_extra_option_btns_main_checked, 60);
    lv_style_set_bg_color(&style_scr_downtime_menu_detail_reason_extra_option_btns_main_checked, lv_color_hex(0xeb5791));
    lv_style_set_bg_grad_dir(&style_scr_downtime_menu_detail_reason_extra_option_btns_main_checked, LV_GRAD_DIR_NONE);
    lv_obj_add_style(ui->scr_downtime_menu_detail_reason_cont_5, &style_scr_downtime_menu_detail_reason_extra_option_btns_main_checked, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_add_style(ui->scr_downtime_menu_detail_reason_cont_4, &style_scr_downtime_menu_detail_reason_extra_option_btns_main_checked, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_add_style(ui->scr_downtime_menu_detail_reason_cont_3, &style_scr_downtime_menu_detail_reason_extra_option_btns_main_checked, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_add_style(ui->scr_downtime_menu_detail_reason_cont_2, &style_scr_downtime_menu_detail_reason_extra_option_btns_main_checked, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_add_style(ui->scr_downtime_menu_detail_reason_cont_1, &style_scr_downtime_menu_detail_reason_extra_option_btns_main_checked, LV_PART_MAIN|LV_STATE_CHECKED);

    //Write style state: LV_STATE_DEFAULT for &style_scr_downtime_menu_detail_reason_extra_main_title_main_default
    static lv_style_t style_scr_downtime_menu_detail_reason_extra_main_title_main_default;
    ui_init_style(&style_scr_downtime_menu_detail_reason_extra_main_title_main_default);

    lv_style_set_text_color(&style_scr_downtime_menu_detail_reason_extra_main_title_main_default, lv_color_hex(0xffffff));
    lv_style_set_text_font(&style_scr_downtime_menu_detail_reason_extra_main_title_main_default, &lv_font_Acme_Regular_50);
    lv_style_set_text_opa(&style_scr_downtime_menu_detail_reason_extra_main_title_main_default, 255);
    lv_style_set_text_align(&style_scr_downtime_menu_detail_reason_extra_main_title_main_default, LV_TEXT_ALIGN_CENTER);
    lv_style_set_bg_opa(&style_scr_downtime_menu_detail_reason_extra_main_title_main_default, 255);
    lv_style_set_bg_color(&style_scr_downtime_menu_detail_reason_extra_main_title_main_default, lv_color_hex(0x2F92DA));
    lv_style_set_bg_grad_dir(&style_scr_downtime_menu_detail_reason_extra_main_title_main_default, LV_GRAD_DIR_NONE);
    lv_style_set_pad_hor(&style_scr_downtime_menu_detail_reason_extra_main_title_main_default, 10);
    lv_style_set_pad_ver(&style_scr_downtime_menu_detail_reason_extra_main_title_main_default, 10);
    lv_menu_t * scr_downtime_menu_detail_reason_menu= (lv_menu_t *)ui->scr_downtime_menu_detail_reason;
    lv_obj_t * scr_downtime_menu_detail_reason_title = scr_downtime_menu_detail_reason_menu->sidebar_header_title;
    lv_obj_set_size(scr_downtime_menu_detail_reason_title, LV_PCT(100), LV_SIZE_CONTENT);
    lv_obj_add_style(lv_menu_get_sidebar_header(ui->scr_downtime_menu_detail_reason), &style_scr_downtime_menu_detail_reason_extra_main_title_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);



    //Write codes scr_downtime_cont_dt_reason_0
    ui->scr_downtime_cont_dt_reason_0 = lv_obj_create(ui->scr_downtime_menu_detail_reason_subpage_1_cont);
    lv_obj_set_pos(ui->scr_downtime_cont_dt_reason_0, 20, 0);
    lv_obj_set_size(ui->scr_downtime_cont_dt_reason_0, 822, 564);
    lv_obj_set_scrollbar_mode(ui->scr_downtime_cont_dt_reason_0, LV_SCROLLBAR_MODE_OFF);

    //Write style for scr_downtime_cont_dt_reason_0, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scr_downtime_cont_dt_reason_0, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_downtime_cont_dt_reason_0, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scr_downtime_cont_dt_reason_0, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scr_downtime_cont_dt_reason_0, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scr_downtime_cont_dt_reason_0, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scr_downtime_cont_dt_reason_0, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scr_downtime_cont_dt_reason_0, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_downtime_cont_dt_reason_0, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scr_downtime_lbl_dt_reason_0
    ui->scr_downtime_lbl_dt_reason_0 = lv_label_create(ui->scr_downtime_cont_dt_reason_0);
    lv_obj_set_pos(ui->scr_downtime_lbl_dt_reason_0, 4, -18);
    lv_obj_set_size(ui->scr_downtime_lbl_dt_reason_0, 230, 66);
    lv_label_set_text(ui->scr_downtime_lbl_dt_reason_0, "Detailed Reason");
    lv_label_set_long_mode(ui->scr_downtime_lbl_dt_reason_0, LV_LABEL_LONG_WRAP);

    //Write style for scr_downtime_lbl_dt_reason_0, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scr_downtime_lbl_dt_reason_0, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_downtime_lbl_dt_reason_0, 10, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scr_downtime_lbl_dt_reason_0, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scr_downtime_lbl_dt_reason_0, 30, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scr_downtime_lbl_dt_reason_0, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scr_downtime_lbl_dt_reason_0, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_downtime_lbl_dt_reason_0, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scr_downtime_lbl_dt_reason_0, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scr_downtime_lbl_dt_reason_0, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scr_downtime_lbl_dt_reason_0, &lv_font_Acme_Regular_30, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scr_downtime_lbl_dt_reason_0, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->scr_downtime_lbl_dt_reason_0, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->scr_downtime_lbl_dt_reason_0, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scr_downtime_lbl_dt_reason_0, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scr_downtime_ddlist_dt_reason_0
    ui->scr_downtime_ddlist_dt_reason_0 = lv_dropdown_create(ui->scr_downtime_cont_dt_reason_0);
    lv_obj_set_pos(ui->scr_downtime_ddlist_dt_reason_0, 22, 59);
    lv_obj_set_size(ui->scr_downtime_ddlist_dt_reason_0, 776, 90);
    lv_dropdown_set_options(ui->scr_downtime_ddlist_dt_reason_0, "None\nSensor Failure\nBelt Broken\nPower leak");

    //Write style for scr_downtime_ddlist_dt_reason_0, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scr_downtime_ddlist_dt_reason_0, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->scr_downtime_ddlist_dt_reason_0, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->scr_downtime_ddlist_dt_reason_0, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->scr_downtime_ddlist_dt_reason_0, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_downtime_ddlist_dt_reason_0, 10, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scr_downtime_ddlist_dt_reason_0, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scr_downtime_ddlist_dt_reason_0, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scr_downtime_ddlist_dt_reason_0, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scr_downtime_ddlist_dt_reason_0, 18, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scr_downtime_ddlist_dt_reason_0, 20, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scr_downtime_ddlist_dt_reason_0, 20, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_downtime_ddlist_dt_reason_0, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scr_downtime_ddlist_dt_reason_0, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scr_downtime_ddlist_dt_reason_0, &lv_font_arial_30, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scr_downtime_ddlist_dt_reason_0, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style for scr_downtime_ddlist_dt_reason_0, Part: LV_PART_MAIN, State: LV_STATE_CHECKED.
    lv_obj_set_style_text_color(ui->scr_downtime_ddlist_dt_reason_0, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_text_font(ui->scr_downtime_ddlist_dt_reason_0, &lv_font_arial_30, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_text_opa(ui->scr_downtime_ddlist_dt_reason_0, 255, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_border_width(ui->scr_downtime_ddlist_dt_reason_0, 1, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_border_opa(ui->scr_downtime_ddlist_dt_reason_0, 255, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_border_color(ui->scr_downtime_ddlist_dt_reason_0, lv_color_hex(0xe1e6ee), LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_border_side(ui->scr_downtime_ddlist_dt_reason_0, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_pad_top(ui->scr_downtime_ddlist_dt_reason_0, 18, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_pad_left(ui->scr_downtime_ddlist_dt_reason_0, 6, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_pad_right(ui->scr_downtime_ddlist_dt_reason_0, 6, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_radius(ui->scr_downtime_ddlist_dt_reason_0, 3, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_bg_opa(ui->scr_downtime_ddlist_dt_reason_0, 255, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_bg_color(ui->scr_downtime_ddlist_dt_reason_0, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_bg_grad_dir(ui->scr_downtime_ddlist_dt_reason_0, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_shadow_width(ui->scr_downtime_ddlist_dt_reason_0, 0, LV_PART_MAIN|LV_STATE_CHECKED);

    //Write style for scr_downtime_ddlist_dt_reason_0, Part: LV_PART_MAIN, State: LV_STATE_FOCUSED.
    lv_obj_set_style_text_color(ui->scr_downtime_ddlist_dt_reason_0, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_text_font(ui->scr_downtime_ddlist_dt_reason_0, &lv_font_arial_30, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_text_opa(ui->scr_downtime_ddlist_dt_reason_0, 255, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_border_width(ui->scr_downtime_ddlist_dt_reason_0, 1, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_border_opa(ui->scr_downtime_ddlist_dt_reason_0, 255, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_border_color(ui->scr_downtime_ddlist_dt_reason_0, lv_color_hex(0xe1e6ee), LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_border_side(ui->scr_downtime_ddlist_dt_reason_0, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_pad_top(ui->scr_downtime_ddlist_dt_reason_0, 18, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_pad_left(ui->scr_downtime_ddlist_dt_reason_0, 6, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_pad_right(ui->scr_downtime_ddlist_dt_reason_0, 6, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_radius(ui->scr_downtime_ddlist_dt_reason_0, 3, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_bg_opa(ui->scr_downtime_ddlist_dt_reason_0, 255, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_bg_color(ui->scr_downtime_ddlist_dt_reason_0, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_bg_grad_dir(ui->scr_downtime_ddlist_dt_reason_0, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_shadow_width(ui->scr_downtime_ddlist_dt_reason_0, 0, LV_PART_MAIN|LV_STATE_FOCUSED);

    //Write style state: LV_STATE_CHECKED for &style_scr_downtime_ddlist_dt_reason_0_extra_list_selected_checked
    static lv_style_t style_scr_downtime_ddlist_dt_reason_0_extra_list_selected_checked;
    ui_init_style(&style_scr_downtime_ddlist_dt_reason_0_extra_list_selected_checked);

    lv_style_set_border_width(&style_scr_downtime_ddlist_dt_reason_0_extra_list_selected_checked, 1);
    lv_style_set_border_opa(&style_scr_downtime_ddlist_dt_reason_0_extra_list_selected_checked, 255);
    lv_style_set_border_color(&style_scr_downtime_ddlist_dt_reason_0_extra_list_selected_checked, lv_color_hex(0xe1e6ee));
    lv_style_set_border_side(&style_scr_downtime_ddlist_dt_reason_0_extra_list_selected_checked, LV_BORDER_SIDE_FULL);
    lv_style_set_radius(&style_scr_downtime_ddlist_dt_reason_0_extra_list_selected_checked, 3);
    lv_style_set_bg_opa(&style_scr_downtime_ddlist_dt_reason_0_extra_list_selected_checked, 255);
    lv_style_set_bg_color(&style_scr_downtime_ddlist_dt_reason_0_extra_list_selected_checked, lv_color_hex(0x00a1b5));
    lv_style_set_bg_grad_dir(&style_scr_downtime_ddlist_dt_reason_0_extra_list_selected_checked, LV_GRAD_DIR_NONE);
    lv_obj_add_style(lv_dropdown_get_list(ui->scr_downtime_ddlist_dt_reason_0), &style_scr_downtime_ddlist_dt_reason_0_extra_list_selected_checked, LV_PART_SELECTED|LV_STATE_CHECKED);

    //Write style state: LV_STATE_DEFAULT for &style_scr_downtime_ddlist_dt_reason_0_extra_list_main_default
    static lv_style_t style_scr_downtime_ddlist_dt_reason_0_extra_list_main_default;
    ui_init_style(&style_scr_downtime_ddlist_dt_reason_0_extra_list_main_default);

    lv_style_set_max_height(&style_scr_downtime_ddlist_dt_reason_0_extra_list_main_default, 90);
    lv_style_set_text_color(&style_scr_downtime_ddlist_dt_reason_0_extra_list_main_default, lv_color_hex(0x000000));
    lv_style_set_text_font(&style_scr_downtime_ddlist_dt_reason_0_extra_list_main_default, &lv_font_arial_30);
    lv_style_set_text_opa(&style_scr_downtime_ddlist_dt_reason_0_extra_list_main_default, 255);
    lv_style_set_border_width(&style_scr_downtime_ddlist_dt_reason_0_extra_list_main_default, 1);
    lv_style_set_border_opa(&style_scr_downtime_ddlist_dt_reason_0_extra_list_main_default, 255);
    lv_style_set_border_color(&style_scr_downtime_ddlist_dt_reason_0_extra_list_main_default, lv_color_hex(0xe1e6ee));
    lv_style_set_border_side(&style_scr_downtime_ddlist_dt_reason_0_extra_list_main_default, LV_BORDER_SIDE_FULL);
    lv_style_set_radius(&style_scr_downtime_ddlist_dt_reason_0_extra_list_main_default, 3);
    lv_style_set_bg_opa(&style_scr_downtime_ddlist_dt_reason_0_extra_list_main_default, 255);
    lv_style_set_bg_color(&style_scr_downtime_ddlist_dt_reason_0_extra_list_main_default, lv_color_hex(0xffffff));
    lv_style_set_bg_grad_dir(&style_scr_downtime_ddlist_dt_reason_0_extra_list_main_default, LV_GRAD_DIR_NONE);
    lv_obj_add_style(lv_dropdown_get_list(ui->scr_downtime_ddlist_dt_reason_0), &style_scr_downtime_ddlist_dt_reason_0_extra_list_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style state: LV_STATE_DEFAULT for &style_scr_downtime_ddlist_dt_reason_0_extra_list_scrollbar_default
    static lv_style_t style_scr_downtime_ddlist_dt_reason_0_extra_list_scrollbar_default;
    ui_init_style(&style_scr_downtime_ddlist_dt_reason_0_extra_list_scrollbar_default);

    lv_style_set_radius(&style_scr_downtime_ddlist_dt_reason_0_extra_list_scrollbar_default, 3);
    lv_style_set_bg_opa(&style_scr_downtime_ddlist_dt_reason_0_extra_list_scrollbar_default, 255);
    lv_style_set_bg_color(&style_scr_downtime_ddlist_dt_reason_0_extra_list_scrollbar_default, lv_color_hex(0x494949));
    lv_style_set_bg_grad_dir(&style_scr_downtime_ddlist_dt_reason_0_extra_list_scrollbar_default, LV_GRAD_DIR_NONE);
    lv_obj_add_style(lv_dropdown_get_list(ui->scr_downtime_ddlist_dt_reason_0), &style_scr_downtime_ddlist_dt_reason_0_extra_list_scrollbar_default, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);

    //Write codes scr_downtime_lbl_dt_add_description_0
    ui->scr_downtime_lbl_dt_add_description_0 = lv_label_create(ui->scr_downtime_cont_dt_reason_0);
    lv_obj_set_pos(ui->scr_downtime_lbl_dt_add_description_0, 4, 193);
    lv_obj_set_size(ui->scr_downtime_lbl_dt_add_description_0, 465, 42);
    lv_label_set_text(ui->scr_downtime_lbl_dt_add_description_0, "Additional Description (Optional)");
    lv_label_set_long_mode(ui->scr_downtime_lbl_dt_add_description_0, LV_LABEL_LONG_WRAP);

    //Write style for scr_downtime_lbl_dt_add_description_0, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scr_downtime_lbl_dt_add_description_0, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_downtime_lbl_dt_add_description_0, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scr_downtime_lbl_dt_add_description_0, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scr_downtime_lbl_dt_add_description_0, &lv_font_Acme_Regular_30, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scr_downtime_lbl_dt_add_description_0, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->scr_downtime_lbl_dt_add_description_0, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->scr_downtime_lbl_dt_add_description_0, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scr_downtime_lbl_dt_add_description_0, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scr_downtime_lbl_dt_add_description_0, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scr_downtime_lbl_dt_add_description_0, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scr_downtime_lbl_dt_add_description_0, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scr_downtime_lbl_dt_add_description_0, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scr_downtime_lbl_dt_add_description_0, 20, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_downtime_lbl_dt_add_description_0, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scr_downtime_ta_dt_note_reason_stop_0
    ui->scr_downtime_ta_dt_note_reason_stop_0 = lv_textarea_create(ui->scr_downtime_cont_dt_reason_0);
    lv_obj_set_pos(ui->scr_downtime_ta_dt_note_reason_stop_0, 21, 241);
    lv_obj_set_size(ui->scr_downtime_ta_dt_note_reason_stop_0, 779, 90);
    lv_textarea_set_text(ui->scr_downtime_ta_dt_note_reason_stop_0, "Describe the issue in detail...");
    lv_textarea_set_placeholder_text(ui->scr_downtime_ta_dt_note_reason_stop_0, "");
    lv_textarea_set_password_bullet(ui->scr_downtime_ta_dt_note_reason_stop_0, "*");
    lv_textarea_set_password_mode(ui->scr_downtime_ta_dt_note_reason_stop_0, false);
    lv_textarea_set_one_line(ui->scr_downtime_ta_dt_note_reason_stop_0, true);
    lv_textarea_set_accepted_chars(ui->scr_downtime_ta_dt_note_reason_stop_0, "");
    lv_textarea_set_max_length(ui->scr_downtime_ta_dt_note_reason_stop_0, 32);
#if LV_USE_KEYBOARD
    lv_obj_add_event_cb(ui->scr_downtime_ta_dt_note_reason_stop_0, ta_event_cb, LV_EVENT_ALL, ui->g_kb_top_layer);
#endif

    //Write style for scr_downtime_ta_dt_note_reason_stop_0, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_text_color(ui->scr_downtime_ta_dt_note_reason_stop_0, lv_color_hex(0xABABAB), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scr_downtime_ta_dt_note_reason_stop_0, &lv_font_arial_30, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scr_downtime_ta_dt_note_reason_stop_0, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->scr_downtime_ta_dt_note_reason_stop_0, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scr_downtime_ta_dt_note_reason_stop_0, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scr_downtime_ta_dt_note_reason_stop_0, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scr_downtime_ta_dt_note_reason_stop_0, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scr_downtime_ta_dt_note_reason_stop_0, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->scr_downtime_ta_dt_note_reason_stop_0, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->scr_downtime_ta_dt_note_reason_stop_0, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->scr_downtime_ta_dt_note_reason_stop_0, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->scr_downtime_ta_dt_note_reason_stop_0, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_downtime_ta_dt_note_reason_stop_0, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scr_downtime_ta_dt_note_reason_stop_0, 25, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scr_downtime_ta_dt_note_reason_stop_0, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scr_downtime_ta_dt_note_reason_stop_0, 20, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_downtime_ta_dt_note_reason_stop_0, 10, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style for scr_downtime_ta_dt_note_reason_stop_0, Part: LV_PART_MAIN, State: LV_STATE_FOCUSED.
    lv_obj_set_style_text_color(ui->scr_downtime_ta_dt_note_reason_stop_0, lv_color_hex(0xABABAB), LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_text_font(ui->scr_downtime_ta_dt_note_reason_stop_0, &lv_font_arial_30, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_text_opa(ui->scr_downtime_ta_dt_note_reason_stop_0, 255, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_bg_opa(ui->scr_downtime_ta_dt_note_reason_stop_0, 255, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_bg_color(ui->scr_downtime_ta_dt_note_reason_stop_0, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_bg_grad_dir(ui->scr_downtime_ta_dt_note_reason_stop_0, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_border_width(ui->scr_downtime_ta_dt_note_reason_stop_0, 2, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_border_opa(ui->scr_downtime_ta_dt_note_reason_stop_0, 255, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_border_color(ui->scr_downtime_ta_dt_note_reason_stop_0, lv_color_hex(0xe6e6e6), LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_border_side(ui->scr_downtime_ta_dt_note_reason_stop_0, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_shadow_width(ui->scr_downtime_ta_dt_note_reason_stop_0, 0, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_pad_top(ui->scr_downtime_ta_dt_note_reason_stop_0, 4, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_pad_right(ui->scr_downtime_ta_dt_note_reason_stop_0, 4, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_pad_left(ui->scr_downtime_ta_dt_note_reason_stop_0, 4, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_radius(ui->scr_downtime_ta_dt_note_reason_stop_0, 4, LV_PART_MAIN|LV_STATE_FOCUSED);

    //Write style for scr_downtime_ta_dt_note_reason_stop_0, Part: LV_PART_SCROLLBAR, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->scr_downtime_ta_dt_note_reason_stop_0, 0, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_downtime_ta_dt_note_reason_stop_0, 0, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);

    //Write style for scr_downtime_ta_dt_note_reason_stop_0, Part: LV_PART_SCROLLBAR, State: LV_STATE_FOCUSED.
    lv_obj_set_style_bg_opa(ui->scr_downtime_ta_dt_note_reason_stop_0, 0, LV_PART_SCROLLBAR|LV_STATE_FOCUSED);
    lv_obj_set_style_radius(ui->scr_downtime_ta_dt_note_reason_stop_0, 0, LV_PART_SCROLLBAR|LV_STATE_FOCUSED);

    //Write codes scr_downtime_btn_dt_cancel_0
    ui->scr_downtime_btn_dt_cancel_0 = lv_button_create(ui->scr_downtime_cont_dt_reason_0);
    lv_obj_set_pos(ui->scr_downtime_btn_dt_cancel_0, 180, 458);
    lv_obj_set_size(ui->scr_downtime_btn_dt_cancel_0, 300, 70);
    ui->scr_downtime_btn_dt_cancel_0_label = lv_label_create(ui->scr_downtime_btn_dt_cancel_0);
    lv_label_set_text(ui->scr_downtime_btn_dt_cancel_0_label, "CANCEL");
    lv_label_set_long_mode(ui->scr_downtime_btn_dt_cancel_0_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->scr_downtime_btn_dt_cancel_0_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->scr_downtime_btn_dt_cancel_0, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->scr_downtime_btn_dt_cancel_0_label, LV_PCT(100));

    //Write style for scr_downtime_btn_dt_cancel_0, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->scr_downtime_btn_dt_cancel_0, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scr_downtime_btn_dt_cancel_0, lv_color_hex(0x717171), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scr_downtime_btn_dt_cancel_0, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->scr_downtime_btn_dt_cancel_0, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_downtime_btn_dt_cancel_0, 10, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_downtime_btn_dt_cancel_0, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scr_downtime_btn_dt_cancel_0, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scr_downtime_btn_dt_cancel_0, &lv_font_Acme_Regular_30, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scr_downtime_btn_dt_cancel_0, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scr_downtime_btn_dt_cancel_0, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scr_downtime_btn_dt_submit_0
    ui->scr_downtime_btn_dt_submit_0 = lv_button_create(ui->scr_downtime_cont_dt_reason_0);
    lv_obj_set_pos(ui->scr_downtime_btn_dt_submit_0, 500, 458);
    lv_obj_set_size(ui->scr_downtime_btn_dt_submit_0, 300, 70);
    ui->scr_downtime_btn_dt_submit_0_label = lv_label_create(ui->scr_downtime_btn_dt_submit_0);
    lv_label_set_text(ui->scr_downtime_btn_dt_submit_0_label, "CONFIRM");
    lv_label_set_long_mode(ui->scr_downtime_btn_dt_submit_0_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->scr_downtime_btn_dt_submit_0_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->scr_downtime_btn_dt_submit_0, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->scr_downtime_btn_dt_submit_0_label, LV_PCT(100));

    //Write style for scr_downtime_btn_dt_submit_0, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->scr_downtime_btn_dt_submit_0, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scr_downtime_btn_dt_submit_0, lv_color_hex(0x1c4567), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scr_downtime_btn_dt_submit_0, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->scr_downtime_btn_dt_submit_0, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_downtime_btn_dt_submit_0, 10, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_downtime_btn_dt_submit_0, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scr_downtime_btn_dt_submit_0, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scr_downtime_btn_dt_submit_0, &lv_font_Acme_Regular_30, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scr_downtime_btn_dt_submit_0, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scr_downtime_btn_dt_submit_0, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);



    //Write codes scr_downtime_cont_dt_reason_1
    ui->scr_downtime_cont_dt_reason_1 = lv_obj_create(ui->scr_downtime_menu_detail_reason_subpage_2_cont);
    lv_obj_set_pos(ui->scr_downtime_cont_dt_reason_1, 20, 0);
    lv_obj_set_size(ui->scr_downtime_cont_dt_reason_1, 822, 564);
    lv_obj_set_scrollbar_mode(ui->scr_downtime_cont_dt_reason_1, LV_SCROLLBAR_MODE_OFF);

    //Write style for scr_downtime_cont_dt_reason_1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scr_downtime_cont_dt_reason_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_downtime_cont_dt_reason_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scr_downtime_cont_dt_reason_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scr_downtime_cont_dt_reason_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scr_downtime_cont_dt_reason_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scr_downtime_cont_dt_reason_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scr_downtime_cont_dt_reason_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_downtime_cont_dt_reason_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scr_downtime_lbl_dt_reason_1
    ui->scr_downtime_lbl_dt_reason_1 = lv_label_create(ui->scr_downtime_cont_dt_reason_1);
    lv_obj_set_pos(ui->scr_downtime_lbl_dt_reason_1, 4, -18);
    lv_obj_set_size(ui->scr_downtime_lbl_dt_reason_1, 230, 66);
    lv_label_set_text(ui->scr_downtime_lbl_dt_reason_1, "Detailed Reason");
    lv_label_set_long_mode(ui->scr_downtime_lbl_dt_reason_1, LV_LABEL_LONG_WRAP);

    //Write style for scr_downtime_lbl_dt_reason_1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scr_downtime_lbl_dt_reason_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_downtime_lbl_dt_reason_1, 10, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scr_downtime_lbl_dt_reason_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scr_downtime_lbl_dt_reason_1, 30, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scr_downtime_lbl_dt_reason_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scr_downtime_lbl_dt_reason_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_downtime_lbl_dt_reason_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scr_downtime_lbl_dt_reason_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scr_downtime_lbl_dt_reason_1, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scr_downtime_lbl_dt_reason_1, &lv_font_Acme_Regular_30, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scr_downtime_lbl_dt_reason_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->scr_downtime_lbl_dt_reason_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->scr_downtime_lbl_dt_reason_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scr_downtime_lbl_dt_reason_1, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scr_downtime_ddlist_dt_reason_1
    ui->scr_downtime_ddlist_dt_reason_1 = lv_dropdown_create(ui->scr_downtime_cont_dt_reason_1);
    lv_obj_set_pos(ui->scr_downtime_ddlist_dt_reason_1, 22, 59);
    lv_obj_set_size(ui->scr_downtime_ddlist_dt_reason_1, 776, 90);
    lv_dropdown_set_options(ui->scr_downtime_ddlist_dt_reason_1, "None\nSensor Failure\nBelt Broken\nPower leak");

    //Write style for scr_downtime_ddlist_dt_reason_1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scr_downtime_ddlist_dt_reason_1, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->scr_downtime_ddlist_dt_reason_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->scr_downtime_ddlist_dt_reason_1, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->scr_downtime_ddlist_dt_reason_1, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_downtime_ddlist_dt_reason_1, 10, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scr_downtime_ddlist_dt_reason_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scr_downtime_ddlist_dt_reason_1, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scr_downtime_ddlist_dt_reason_1, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scr_downtime_ddlist_dt_reason_1, 18, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scr_downtime_ddlist_dt_reason_1, 20, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scr_downtime_ddlist_dt_reason_1, 20, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_downtime_ddlist_dt_reason_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scr_downtime_ddlist_dt_reason_1, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scr_downtime_ddlist_dt_reason_1, &lv_font_arial_30, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scr_downtime_ddlist_dt_reason_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style for scr_downtime_ddlist_dt_reason_1, Part: LV_PART_MAIN, State: LV_STATE_CHECKED.
    lv_obj_set_style_text_color(ui->scr_downtime_ddlist_dt_reason_1, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_text_font(ui->scr_downtime_ddlist_dt_reason_1, &lv_font_arial_30, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_text_opa(ui->scr_downtime_ddlist_dt_reason_1, 255, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_border_width(ui->scr_downtime_ddlist_dt_reason_1, 1, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_border_opa(ui->scr_downtime_ddlist_dt_reason_1, 255, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_border_color(ui->scr_downtime_ddlist_dt_reason_1, lv_color_hex(0xe1e6ee), LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_border_side(ui->scr_downtime_ddlist_dt_reason_1, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_pad_top(ui->scr_downtime_ddlist_dt_reason_1, 18, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_pad_left(ui->scr_downtime_ddlist_dt_reason_1, 6, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_pad_right(ui->scr_downtime_ddlist_dt_reason_1, 6, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_radius(ui->scr_downtime_ddlist_dt_reason_1, 3, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_bg_opa(ui->scr_downtime_ddlist_dt_reason_1, 255, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_bg_color(ui->scr_downtime_ddlist_dt_reason_1, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_bg_grad_dir(ui->scr_downtime_ddlist_dt_reason_1, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_shadow_width(ui->scr_downtime_ddlist_dt_reason_1, 0, LV_PART_MAIN|LV_STATE_CHECKED);

    //Write style for scr_downtime_ddlist_dt_reason_1, Part: LV_PART_MAIN, State: LV_STATE_FOCUSED.
    lv_obj_set_style_text_color(ui->scr_downtime_ddlist_dt_reason_1, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_text_font(ui->scr_downtime_ddlist_dt_reason_1, &lv_font_arial_30, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_text_opa(ui->scr_downtime_ddlist_dt_reason_1, 255, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_border_width(ui->scr_downtime_ddlist_dt_reason_1, 1, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_border_opa(ui->scr_downtime_ddlist_dt_reason_1, 255, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_border_color(ui->scr_downtime_ddlist_dt_reason_1, lv_color_hex(0xe1e6ee), LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_border_side(ui->scr_downtime_ddlist_dt_reason_1, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_pad_top(ui->scr_downtime_ddlist_dt_reason_1, 18, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_pad_left(ui->scr_downtime_ddlist_dt_reason_1, 6, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_pad_right(ui->scr_downtime_ddlist_dt_reason_1, 6, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_radius(ui->scr_downtime_ddlist_dt_reason_1, 3, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_bg_opa(ui->scr_downtime_ddlist_dt_reason_1, 255, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_bg_color(ui->scr_downtime_ddlist_dt_reason_1, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_bg_grad_dir(ui->scr_downtime_ddlist_dt_reason_1, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_shadow_width(ui->scr_downtime_ddlist_dt_reason_1, 0, LV_PART_MAIN|LV_STATE_FOCUSED);

    //Write style state: LV_STATE_CHECKED for &style_scr_downtime_ddlist_dt_reason_1_extra_list_selected_checked
    static lv_style_t style_scr_downtime_ddlist_dt_reason_1_extra_list_selected_checked;
    ui_init_style(&style_scr_downtime_ddlist_dt_reason_1_extra_list_selected_checked);

    lv_style_set_border_width(&style_scr_downtime_ddlist_dt_reason_1_extra_list_selected_checked, 1);
    lv_style_set_border_opa(&style_scr_downtime_ddlist_dt_reason_1_extra_list_selected_checked, 255);
    lv_style_set_border_color(&style_scr_downtime_ddlist_dt_reason_1_extra_list_selected_checked, lv_color_hex(0xe1e6ee));
    lv_style_set_border_side(&style_scr_downtime_ddlist_dt_reason_1_extra_list_selected_checked, LV_BORDER_SIDE_FULL);
    lv_style_set_radius(&style_scr_downtime_ddlist_dt_reason_1_extra_list_selected_checked, 3);
    lv_style_set_bg_opa(&style_scr_downtime_ddlist_dt_reason_1_extra_list_selected_checked, 255);
    lv_style_set_bg_color(&style_scr_downtime_ddlist_dt_reason_1_extra_list_selected_checked, lv_color_hex(0x00a1b5));
    lv_style_set_bg_grad_dir(&style_scr_downtime_ddlist_dt_reason_1_extra_list_selected_checked, LV_GRAD_DIR_NONE);
    lv_obj_add_style(lv_dropdown_get_list(ui->scr_downtime_ddlist_dt_reason_1), &style_scr_downtime_ddlist_dt_reason_1_extra_list_selected_checked, LV_PART_SELECTED|LV_STATE_CHECKED);

    //Write style state: LV_STATE_DEFAULT for &style_scr_downtime_ddlist_dt_reason_1_extra_list_main_default
    static lv_style_t style_scr_downtime_ddlist_dt_reason_1_extra_list_main_default;
    ui_init_style(&style_scr_downtime_ddlist_dt_reason_1_extra_list_main_default);

    lv_style_set_max_height(&style_scr_downtime_ddlist_dt_reason_1_extra_list_main_default, 90);
    lv_style_set_text_color(&style_scr_downtime_ddlist_dt_reason_1_extra_list_main_default, lv_color_hex(0x000000));
    lv_style_set_text_font(&style_scr_downtime_ddlist_dt_reason_1_extra_list_main_default, &lv_font_arial_30);
    lv_style_set_text_opa(&style_scr_downtime_ddlist_dt_reason_1_extra_list_main_default, 255);
    lv_style_set_border_width(&style_scr_downtime_ddlist_dt_reason_1_extra_list_main_default, 1);
    lv_style_set_border_opa(&style_scr_downtime_ddlist_dt_reason_1_extra_list_main_default, 255);
    lv_style_set_border_color(&style_scr_downtime_ddlist_dt_reason_1_extra_list_main_default, lv_color_hex(0xe1e6ee));
    lv_style_set_border_side(&style_scr_downtime_ddlist_dt_reason_1_extra_list_main_default, LV_BORDER_SIDE_FULL);
    lv_style_set_radius(&style_scr_downtime_ddlist_dt_reason_1_extra_list_main_default, 3);
    lv_style_set_bg_opa(&style_scr_downtime_ddlist_dt_reason_1_extra_list_main_default, 255);
    lv_style_set_bg_color(&style_scr_downtime_ddlist_dt_reason_1_extra_list_main_default, lv_color_hex(0xffffff));
    lv_style_set_bg_grad_dir(&style_scr_downtime_ddlist_dt_reason_1_extra_list_main_default, LV_GRAD_DIR_NONE);
    lv_obj_add_style(lv_dropdown_get_list(ui->scr_downtime_ddlist_dt_reason_1), &style_scr_downtime_ddlist_dt_reason_1_extra_list_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style state: LV_STATE_DEFAULT for &style_scr_downtime_ddlist_dt_reason_1_extra_list_scrollbar_default
    static lv_style_t style_scr_downtime_ddlist_dt_reason_1_extra_list_scrollbar_default;
    ui_init_style(&style_scr_downtime_ddlist_dt_reason_1_extra_list_scrollbar_default);

    lv_style_set_radius(&style_scr_downtime_ddlist_dt_reason_1_extra_list_scrollbar_default, 3);
    lv_style_set_bg_opa(&style_scr_downtime_ddlist_dt_reason_1_extra_list_scrollbar_default, 255);
    lv_style_set_bg_color(&style_scr_downtime_ddlist_dt_reason_1_extra_list_scrollbar_default, lv_color_hex(0x494949));
    lv_style_set_bg_grad_dir(&style_scr_downtime_ddlist_dt_reason_1_extra_list_scrollbar_default, LV_GRAD_DIR_NONE);
    lv_obj_add_style(lv_dropdown_get_list(ui->scr_downtime_ddlist_dt_reason_1), &style_scr_downtime_ddlist_dt_reason_1_extra_list_scrollbar_default, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);

    //Write codes scr_downtime_lbl_dt_description_1
    ui->scr_downtime_lbl_dt_description_1 = lv_label_create(ui->scr_downtime_cont_dt_reason_1);
    lv_obj_set_pos(ui->scr_downtime_lbl_dt_description_1, 4, 193);
    lv_obj_set_size(ui->scr_downtime_lbl_dt_description_1, 465, 42);
    lv_label_set_text(ui->scr_downtime_lbl_dt_description_1, "Additional Description (Optional)");
    lv_label_set_long_mode(ui->scr_downtime_lbl_dt_description_1, LV_LABEL_LONG_WRAP);

    //Write style for scr_downtime_lbl_dt_description_1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scr_downtime_lbl_dt_description_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_downtime_lbl_dt_description_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scr_downtime_lbl_dt_description_1, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scr_downtime_lbl_dt_description_1, &lv_font_Acme_Regular_30, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scr_downtime_lbl_dt_description_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->scr_downtime_lbl_dt_description_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->scr_downtime_lbl_dt_description_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scr_downtime_lbl_dt_description_1, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scr_downtime_lbl_dt_description_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scr_downtime_lbl_dt_description_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scr_downtime_lbl_dt_description_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scr_downtime_lbl_dt_description_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scr_downtime_lbl_dt_description_1, 20, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_downtime_lbl_dt_description_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scr_downtime_ta_dt_note_reason_stop_1
    ui->scr_downtime_ta_dt_note_reason_stop_1 = lv_textarea_create(ui->scr_downtime_cont_dt_reason_1);
    lv_obj_set_pos(ui->scr_downtime_ta_dt_note_reason_stop_1, 21, 241);
    lv_obj_set_size(ui->scr_downtime_ta_dt_note_reason_stop_1, 779, 90);
    lv_textarea_set_text(ui->scr_downtime_ta_dt_note_reason_stop_1, "Describe the issue in detail...");
    lv_textarea_set_placeholder_text(ui->scr_downtime_ta_dt_note_reason_stop_1, "");
    lv_textarea_set_password_bullet(ui->scr_downtime_ta_dt_note_reason_stop_1, "*");
    lv_textarea_set_password_mode(ui->scr_downtime_ta_dt_note_reason_stop_1, false);
    lv_textarea_set_one_line(ui->scr_downtime_ta_dt_note_reason_stop_1, true);
    lv_textarea_set_accepted_chars(ui->scr_downtime_ta_dt_note_reason_stop_1, "");
    lv_textarea_set_max_length(ui->scr_downtime_ta_dt_note_reason_stop_1, 32);
#if LV_USE_KEYBOARD
    lv_obj_add_event_cb(ui->scr_downtime_ta_dt_note_reason_stop_1, ta_event_cb, LV_EVENT_ALL, ui->g_kb_top_layer);
#endif

    //Write style for scr_downtime_ta_dt_note_reason_stop_1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_text_color(ui->scr_downtime_ta_dt_note_reason_stop_1, lv_color_hex(0xABABAB), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scr_downtime_ta_dt_note_reason_stop_1, &lv_font_arial_30, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scr_downtime_ta_dt_note_reason_stop_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->scr_downtime_ta_dt_note_reason_stop_1, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scr_downtime_ta_dt_note_reason_stop_1, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scr_downtime_ta_dt_note_reason_stop_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scr_downtime_ta_dt_note_reason_stop_1, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scr_downtime_ta_dt_note_reason_stop_1, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->scr_downtime_ta_dt_note_reason_stop_1, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->scr_downtime_ta_dt_note_reason_stop_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->scr_downtime_ta_dt_note_reason_stop_1, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->scr_downtime_ta_dt_note_reason_stop_1, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_downtime_ta_dt_note_reason_stop_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scr_downtime_ta_dt_note_reason_stop_1, 25, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scr_downtime_ta_dt_note_reason_stop_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scr_downtime_ta_dt_note_reason_stop_1, 20, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_downtime_ta_dt_note_reason_stop_1, 10, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style for scr_downtime_ta_dt_note_reason_stop_1, Part: LV_PART_MAIN, State: LV_STATE_FOCUSED.
    lv_obj_set_style_text_color(ui->scr_downtime_ta_dt_note_reason_stop_1, lv_color_hex(0xABABAB), LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_text_font(ui->scr_downtime_ta_dt_note_reason_stop_1, &lv_font_arial_30, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_text_opa(ui->scr_downtime_ta_dt_note_reason_stop_1, 255, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_bg_opa(ui->scr_downtime_ta_dt_note_reason_stop_1, 255, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_bg_color(ui->scr_downtime_ta_dt_note_reason_stop_1, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_bg_grad_dir(ui->scr_downtime_ta_dt_note_reason_stop_1, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_border_width(ui->scr_downtime_ta_dt_note_reason_stop_1, 2, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_border_opa(ui->scr_downtime_ta_dt_note_reason_stop_1, 255, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_border_color(ui->scr_downtime_ta_dt_note_reason_stop_1, lv_color_hex(0xe6e6e6), LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_border_side(ui->scr_downtime_ta_dt_note_reason_stop_1, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_shadow_width(ui->scr_downtime_ta_dt_note_reason_stop_1, 0, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_pad_top(ui->scr_downtime_ta_dt_note_reason_stop_1, 4, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_pad_right(ui->scr_downtime_ta_dt_note_reason_stop_1, 4, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_pad_left(ui->scr_downtime_ta_dt_note_reason_stop_1, 4, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_radius(ui->scr_downtime_ta_dt_note_reason_stop_1, 4, LV_PART_MAIN|LV_STATE_FOCUSED);

    //Write style for scr_downtime_ta_dt_note_reason_stop_1, Part: LV_PART_SCROLLBAR, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->scr_downtime_ta_dt_note_reason_stop_1, 0, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_downtime_ta_dt_note_reason_stop_1, 0, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);

    //Write style for scr_downtime_ta_dt_note_reason_stop_1, Part: LV_PART_SCROLLBAR, State: LV_STATE_FOCUSED.
    lv_obj_set_style_bg_opa(ui->scr_downtime_ta_dt_note_reason_stop_1, 0, LV_PART_SCROLLBAR|LV_STATE_FOCUSED);
    lv_obj_set_style_radius(ui->scr_downtime_ta_dt_note_reason_stop_1, 0, LV_PART_SCROLLBAR|LV_STATE_FOCUSED);

    //Write codes scr_downtime_btn_dt_cancel_1
    ui->scr_downtime_btn_dt_cancel_1 = lv_button_create(ui->scr_downtime_cont_dt_reason_1);
    lv_obj_set_pos(ui->scr_downtime_btn_dt_cancel_1, 180, 458);
    lv_obj_set_size(ui->scr_downtime_btn_dt_cancel_1, 300, 70);
    ui->scr_downtime_btn_dt_cancel_1_label = lv_label_create(ui->scr_downtime_btn_dt_cancel_1);
    lv_label_set_text(ui->scr_downtime_btn_dt_cancel_1_label, "CANCEL");
    lv_label_set_long_mode(ui->scr_downtime_btn_dt_cancel_1_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->scr_downtime_btn_dt_cancel_1_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->scr_downtime_btn_dt_cancel_1, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->scr_downtime_btn_dt_cancel_1_label, LV_PCT(100));

    //Write style for scr_downtime_btn_dt_cancel_1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->scr_downtime_btn_dt_cancel_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scr_downtime_btn_dt_cancel_1, lv_color_hex(0x717171), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scr_downtime_btn_dt_cancel_1, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->scr_downtime_btn_dt_cancel_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_downtime_btn_dt_cancel_1, 10, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_downtime_btn_dt_cancel_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scr_downtime_btn_dt_cancel_1, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scr_downtime_btn_dt_cancel_1, &lv_font_Acme_Regular_30, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scr_downtime_btn_dt_cancel_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scr_downtime_btn_dt_cancel_1, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scr_downtime_btn_dt_reason_1
    ui->scr_downtime_btn_dt_reason_1 = lv_button_create(ui->scr_downtime_cont_dt_reason_1);
    lv_obj_set_pos(ui->scr_downtime_btn_dt_reason_1, 500, 458);
    lv_obj_set_size(ui->scr_downtime_btn_dt_reason_1, 300, 70);
    ui->scr_downtime_btn_dt_reason_1_label = lv_label_create(ui->scr_downtime_btn_dt_reason_1);
    lv_label_set_text(ui->scr_downtime_btn_dt_reason_1_label, "CONFIRM");
    lv_label_set_long_mode(ui->scr_downtime_btn_dt_reason_1_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->scr_downtime_btn_dt_reason_1_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->scr_downtime_btn_dt_reason_1, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->scr_downtime_btn_dt_reason_1_label, LV_PCT(100));

    //Write style for scr_downtime_btn_dt_reason_1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->scr_downtime_btn_dt_reason_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scr_downtime_btn_dt_reason_1, lv_color_hex(0x1c4567), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scr_downtime_btn_dt_reason_1, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->scr_downtime_btn_dt_reason_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_downtime_btn_dt_reason_1, 10, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_downtime_btn_dt_reason_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scr_downtime_btn_dt_reason_1, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scr_downtime_btn_dt_reason_1, &lv_font_Acme_Regular_30, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scr_downtime_btn_dt_reason_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scr_downtime_btn_dt_reason_1, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);



    //Write codes scr_downtime_cont_dt_reason_2
    ui->scr_downtime_cont_dt_reason_2 = lv_obj_create(ui->scr_downtime_menu_detail_reason_subpage_3_cont);
    lv_obj_set_pos(ui->scr_downtime_cont_dt_reason_2, 20, 0);
    lv_obj_set_size(ui->scr_downtime_cont_dt_reason_2, 822, 564);
    lv_obj_set_scrollbar_mode(ui->scr_downtime_cont_dt_reason_2, LV_SCROLLBAR_MODE_OFF);

    //Write style for scr_downtime_cont_dt_reason_2, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scr_downtime_cont_dt_reason_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_downtime_cont_dt_reason_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scr_downtime_cont_dt_reason_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scr_downtime_cont_dt_reason_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scr_downtime_cont_dt_reason_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scr_downtime_cont_dt_reason_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scr_downtime_cont_dt_reason_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_downtime_cont_dt_reason_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scr_downtime_lbl_dt_reason_2
    ui->scr_downtime_lbl_dt_reason_2 = lv_label_create(ui->scr_downtime_cont_dt_reason_2);
    lv_obj_set_pos(ui->scr_downtime_lbl_dt_reason_2, 4, -18);
    lv_obj_set_size(ui->scr_downtime_lbl_dt_reason_2, 230, 66);
    lv_label_set_text(ui->scr_downtime_lbl_dt_reason_2, "Detailed Reason");
    lv_label_set_long_mode(ui->scr_downtime_lbl_dt_reason_2, LV_LABEL_LONG_WRAP);

    //Write style for scr_downtime_lbl_dt_reason_2, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scr_downtime_lbl_dt_reason_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_downtime_lbl_dt_reason_2, 10, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scr_downtime_lbl_dt_reason_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scr_downtime_lbl_dt_reason_2, 30, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scr_downtime_lbl_dt_reason_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scr_downtime_lbl_dt_reason_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_downtime_lbl_dt_reason_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scr_downtime_lbl_dt_reason_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scr_downtime_lbl_dt_reason_2, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scr_downtime_lbl_dt_reason_2, &lv_font_Acme_Regular_30, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scr_downtime_lbl_dt_reason_2, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->scr_downtime_lbl_dt_reason_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->scr_downtime_lbl_dt_reason_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scr_downtime_lbl_dt_reason_2, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scr_downtime_ddlist_dt_reason_2
    ui->scr_downtime_ddlist_dt_reason_2 = lv_dropdown_create(ui->scr_downtime_cont_dt_reason_2);
    lv_obj_set_pos(ui->scr_downtime_ddlist_dt_reason_2, 22, 59);
    lv_obj_set_size(ui->scr_downtime_ddlist_dt_reason_2, 776, 90);
    lv_dropdown_set_options(ui->scr_downtime_ddlist_dt_reason_2, "None\nSensor Failure\nBelt Broken\nPower leak");

    //Write style for scr_downtime_ddlist_dt_reason_2, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scr_downtime_ddlist_dt_reason_2, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->scr_downtime_ddlist_dt_reason_2, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->scr_downtime_ddlist_dt_reason_2, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->scr_downtime_ddlist_dt_reason_2, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_downtime_ddlist_dt_reason_2, 10, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scr_downtime_ddlist_dt_reason_2, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scr_downtime_ddlist_dt_reason_2, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scr_downtime_ddlist_dt_reason_2, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scr_downtime_ddlist_dt_reason_2, 18, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scr_downtime_ddlist_dt_reason_2, 20, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scr_downtime_ddlist_dt_reason_2, 20, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_downtime_ddlist_dt_reason_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scr_downtime_ddlist_dt_reason_2, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scr_downtime_ddlist_dt_reason_2, &lv_font_arial_30, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scr_downtime_ddlist_dt_reason_2, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style for scr_downtime_ddlist_dt_reason_2, Part: LV_PART_MAIN, State: LV_STATE_CHECKED.
    lv_obj_set_style_text_color(ui->scr_downtime_ddlist_dt_reason_2, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_text_font(ui->scr_downtime_ddlist_dt_reason_2, &lv_font_arial_30, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_text_opa(ui->scr_downtime_ddlist_dt_reason_2, 255, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_border_width(ui->scr_downtime_ddlist_dt_reason_2, 1, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_border_opa(ui->scr_downtime_ddlist_dt_reason_2, 255, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_border_color(ui->scr_downtime_ddlist_dt_reason_2, lv_color_hex(0xe1e6ee), LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_border_side(ui->scr_downtime_ddlist_dt_reason_2, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_pad_top(ui->scr_downtime_ddlist_dt_reason_2, 18, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_pad_left(ui->scr_downtime_ddlist_dt_reason_2, 6, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_pad_right(ui->scr_downtime_ddlist_dt_reason_2, 6, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_radius(ui->scr_downtime_ddlist_dt_reason_2, 3, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_bg_opa(ui->scr_downtime_ddlist_dt_reason_2, 255, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_bg_color(ui->scr_downtime_ddlist_dt_reason_2, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_bg_grad_dir(ui->scr_downtime_ddlist_dt_reason_2, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_shadow_width(ui->scr_downtime_ddlist_dt_reason_2, 0, LV_PART_MAIN|LV_STATE_CHECKED);

    //Write style for scr_downtime_ddlist_dt_reason_2, Part: LV_PART_MAIN, State: LV_STATE_FOCUSED.
    lv_obj_set_style_text_color(ui->scr_downtime_ddlist_dt_reason_2, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_text_font(ui->scr_downtime_ddlist_dt_reason_2, &lv_font_arial_30, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_text_opa(ui->scr_downtime_ddlist_dt_reason_2, 255, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_border_width(ui->scr_downtime_ddlist_dt_reason_2, 1, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_border_opa(ui->scr_downtime_ddlist_dt_reason_2, 255, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_border_color(ui->scr_downtime_ddlist_dt_reason_2, lv_color_hex(0xe1e6ee), LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_border_side(ui->scr_downtime_ddlist_dt_reason_2, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_pad_top(ui->scr_downtime_ddlist_dt_reason_2, 18, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_pad_left(ui->scr_downtime_ddlist_dt_reason_2, 6, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_pad_right(ui->scr_downtime_ddlist_dt_reason_2, 6, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_radius(ui->scr_downtime_ddlist_dt_reason_2, 3, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_bg_opa(ui->scr_downtime_ddlist_dt_reason_2, 255, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_bg_color(ui->scr_downtime_ddlist_dt_reason_2, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_bg_grad_dir(ui->scr_downtime_ddlist_dt_reason_2, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_shadow_width(ui->scr_downtime_ddlist_dt_reason_2, 0, LV_PART_MAIN|LV_STATE_FOCUSED);

    //Write style state: LV_STATE_CHECKED for &style_scr_downtime_ddlist_dt_reason_2_extra_list_selected_checked
    static lv_style_t style_scr_downtime_ddlist_dt_reason_2_extra_list_selected_checked;
    ui_init_style(&style_scr_downtime_ddlist_dt_reason_2_extra_list_selected_checked);

    lv_style_set_border_width(&style_scr_downtime_ddlist_dt_reason_2_extra_list_selected_checked, 1);
    lv_style_set_border_opa(&style_scr_downtime_ddlist_dt_reason_2_extra_list_selected_checked, 255);
    lv_style_set_border_color(&style_scr_downtime_ddlist_dt_reason_2_extra_list_selected_checked, lv_color_hex(0xe1e6ee));
    lv_style_set_border_side(&style_scr_downtime_ddlist_dt_reason_2_extra_list_selected_checked, LV_BORDER_SIDE_FULL);
    lv_style_set_radius(&style_scr_downtime_ddlist_dt_reason_2_extra_list_selected_checked, 3);
    lv_style_set_bg_opa(&style_scr_downtime_ddlist_dt_reason_2_extra_list_selected_checked, 255);
    lv_style_set_bg_color(&style_scr_downtime_ddlist_dt_reason_2_extra_list_selected_checked, lv_color_hex(0x00a1b5));
    lv_style_set_bg_grad_dir(&style_scr_downtime_ddlist_dt_reason_2_extra_list_selected_checked, LV_GRAD_DIR_NONE);
    lv_obj_add_style(lv_dropdown_get_list(ui->scr_downtime_ddlist_dt_reason_2), &style_scr_downtime_ddlist_dt_reason_2_extra_list_selected_checked, LV_PART_SELECTED|LV_STATE_CHECKED);

    //Write style state: LV_STATE_DEFAULT for &style_scr_downtime_ddlist_dt_reason_2_extra_list_main_default
    static lv_style_t style_scr_downtime_ddlist_dt_reason_2_extra_list_main_default;
    ui_init_style(&style_scr_downtime_ddlist_dt_reason_2_extra_list_main_default);

    lv_style_set_max_height(&style_scr_downtime_ddlist_dt_reason_2_extra_list_main_default, 90);
    lv_style_set_text_color(&style_scr_downtime_ddlist_dt_reason_2_extra_list_main_default, lv_color_hex(0x000000));
    lv_style_set_text_font(&style_scr_downtime_ddlist_dt_reason_2_extra_list_main_default, &lv_font_arial_30);
    lv_style_set_text_opa(&style_scr_downtime_ddlist_dt_reason_2_extra_list_main_default, 255);
    lv_style_set_border_width(&style_scr_downtime_ddlist_dt_reason_2_extra_list_main_default, 1);
    lv_style_set_border_opa(&style_scr_downtime_ddlist_dt_reason_2_extra_list_main_default, 255);
    lv_style_set_border_color(&style_scr_downtime_ddlist_dt_reason_2_extra_list_main_default, lv_color_hex(0xe1e6ee));
    lv_style_set_border_side(&style_scr_downtime_ddlist_dt_reason_2_extra_list_main_default, LV_BORDER_SIDE_FULL);
    lv_style_set_radius(&style_scr_downtime_ddlist_dt_reason_2_extra_list_main_default, 3);
    lv_style_set_bg_opa(&style_scr_downtime_ddlist_dt_reason_2_extra_list_main_default, 255);
    lv_style_set_bg_color(&style_scr_downtime_ddlist_dt_reason_2_extra_list_main_default, lv_color_hex(0xffffff));
    lv_style_set_bg_grad_dir(&style_scr_downtime_ddlist_dt_reason_2_extra_list_main_default, LV_GRAD_DIR_NONE);
    lv_obj_add_style(lv_dropdown_get_list(ui->scr_downtime_ddlist_dt_reason_2), &style_scr_downtime_ddlist_dt_reason_2_extra_list_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style state: LV_STATE_DEFAULT for &style_scr_downtime_ddlist_dt_reason_2_extra_list_scrollbar_default
    static lv_style_t style_scr_downtime_ddlist_dt_reason_2_extra_list_scrollbar_default;
    ui_init_style(&style_scr_downtime_ddlist_dt_reason_2_extra_list_scrollbar_default);

    lv_style_set_radius(&style_scr_downtime_ddlist_dt_reason_2_extra_list_scrollbar_default, 3);
    lv_style_set_bg_opa(&style_scr_downtime_ddlist_dt_reason_2_extra_list_scrollbar_default, 255);
    lv_style_set_bg_color(&style_scr_downtime_ddlist_dt_reason_2_extra_list_scrollbar_default, lv_color_hex(0x494949));
    lv_style_set_bg_grad_dir(&style_scr_downtime_ddlist_dt_reason_2_extra_list_scrollbar_default, LV_GRAD_DIR_NONE);
    lv_obj_add_style(lv_dropdown_get_list(ui->scr_downtime_ddlist_dt_reason_2), &style_scr_downtime_ddlist_dt_reason_2_extra_list_scrollbar_default, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);

    //Write codes scr_downtime_lbl_dt_description_2
    ui->scr_downtime_lbl_dt_description_2 = lv_label_create(ui->scr_downtime_cont_dt_reason_2);
    lv_obj_set_pos(ui->scr_downtime_lbl_dt_description_2, 4, 193);
    lv_obj_set_size(ui->scr_downtime_lbl_dt_description_2, 465, 42);
    lv_label_set_text(ui->scr_downtime_lbl_dt_description_2, "Additional Description (Optional)");
    lv_label_set_long_mode(ui->scr_downtime_lbl_dt_description_2, LV_LABEL_LONG_WRAP);

    //Write style for scr_downtime_lbl_dt_description_2, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scr_downtime_lbl_dt_description_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_downtime_lbl_dt_description_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scr_downtime_lbl_dt_description_2, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scr_downtime_lbl_dt_description_2, &lv_font_Acme_Regular_30, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scr_downtime_lbl_dt_description_2, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->scr_downtime_lbl_dt_description_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->scr_downtime_lbl_dt_description_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scr_downtime_lbl_dt_description_2, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scr_downtime_lbl_dt_description_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scr_downtime_lbl_dt_description_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scr_downtime_lbl_dt_description_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scr_downtime_lbl_dt_description_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scr_downtime_lbl_dt_description_2, 20, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_downtime_lbl_dt_description_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scr_downtime_ta_dt_note_reason_stop_2
    ui->scr_downtime_ta_dt_note_reason_stop_2 = lv_textarea_create(ui->scr_downtime_cont_dt_reason_2);
    lv_obj_set_pos(ui->scr_downtime_ta_dt_note_reason_stop_2, 21, 241);
    lv_obj_set_size(ui->scr_downtime_ta_dt_note_reason_stop_2, 779, 90);
    lv_textarea_set_text(ui->scr_downtime_ta_dt_note_reason_stop_2, "Describe the issue in detail...");
    lv_textarea_set_placeholder_text(ui->scr_downtime_ta_dt_note_reason_stop_2, "");
    lv_textarea_set_password_bullet(ui->scr_downtime_ta_dt_note_reason_stop_2, "*");
    lv_textarea_set_password_mode(ui->scr_downtime_ta_dt_note_reason_stop_2, false);
    lv_textarea_set_one_line(ui->scr_downtime_ta_dt_note_reason_stop_2, true);
    lv_textarea_set_accepted_chars(ui->scr_downtime_ta_dt_note_reason_stop_2, "");
    lv_textarea_set_max_length(ui->scr_downtime_ta_dt_note_reason_stop_2, 32);
#if LV_USE_KEYBOARD
    lv_obj_add_event_cb(ui->scr_downtime_ta_dt_note_reason_stop_2, ta_event_cb, LV_EVENT_ALL, ui->g_kb_top_layer);
#endif

    //Write style for scr_downtime_ta_dt_note_reason_stop_2, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_text_color(ui->scr_downtime_ta_dt_note_reason_stop_2, lv_color_hex(0xABABAB), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scr_downtime_ta_dt_note_reason_stop_2, &lv_font_arial_30, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scr_downtime_ta_dt_note_reason_stop_2, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->scr_downtime_ta_dt_note_reason_stop_2, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scr_downtime_ta_dt_note_reason_stop_2, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scr_downtime_ta_dt_note_reason_stop_2, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scr_downtime_ta_dt_note_reason_stop_2, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scr_downtime_ta_dt_note_reason_stop_2, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->scr_downtime_ta_dt_note_reason_stop_2, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->scr_downtime_ta_dt_note_reason_stop_2, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->scr_downtime_ta_dt_note_reason_stop_2, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->scr_downtime_ta_dt_note_reason_stop_2, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_downtime_ta_dt_note_reason_stop_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scr_downtime_ta_dt_note_reason_stop_2, 25, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scr_downtime_ta_dt_note_reason_stop_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scr_downtime_ta_dt_note_reason_stop_2, 20, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_downtime_ta_dt_note_reason_stop_2, 10, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style for scr_downtime_ta_dt_note_reason_stop_2, Part: LV_PART_MAIN, State: LV_STATE_FOCUSED.
    lv_obj_set_style_text_color(ui->scr_downtime_ta_dt_note_reason_stop_2, lv_color_hex(0xABABAB), LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_text_font(ui->scr_downtime_ta_dt_note_reason_stop_2, &lv_font_arial_30, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_text_opa(ui->scr_downtime_ta_dt_note_reason_stop_2, 255, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_bg_opa(ui->scr_downtime_ta_dt_note_reason_stop_2, 255, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_bg_color(ui->scr_downtime_ta_dt_note_reason_stop_2, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_bg_grad_dir(ui->scr_downtime_ta_dt_note_reason_stop_2, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_border_width(ui->scr_downtime_ta_dt_note_reason_stop_2, 2, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_border_opa(ui->scr_downtime_ta_dt_note_reason_stop_2, 255, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_border_color(ui->scr_downtime_ta_dt_note_reason_stop_2, lv_color_hex(0xe6e6e6), LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_border_side(ui->scr_downtime_ta_dt_note_reason_stop_2, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_shadow_width(ui->scr_downtime_ta_dt_note_reason_stop_2, 0, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_pad_top(ui->scr_downtime_ta_dt_note_reason_stop_2, 4, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_pad_right(ui->scr_downtime_ta_dt_note_reason_stop_2, 4, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_pad_left(ui->scr_downtime_ta_dt_note_reason_stop_2, 4, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_radius(ui->scr_downtime_ta_dt_note_reason_stop_2, 4, LV_PART_MAIN|LV_STATE_FOCUSED);

    //Write style for scr_downtime_ta_dt_note_reason_stop_2, Part: LV_PART_SCROLLBAR, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->scr_downtime_ta_dt_note_reason_stop_2, 0, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_downtime_ta_dt_note_reason_stop_2, 0, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);

    //Write style for scr_downtime_ta_dt_note_reason_stop_2, Part: LV_PART_SCROLLBAR, State: LV_STATE_FOCUSED.
    lv_obj_set_style_bg_opa(ui->scr_downtime_ta_dt_note_reason_stop_2, 0, LV_PART_SCROLLBAR|LV_STATE_FOCUSED);
    lv_obj_set_style_radius(ui->scr_downtime_ta_dt_note_reason_stop_2, 0, LV_PART_SCROLLBAR|LV_STATE_FOCUSED);

    //Write codes scr_downtime_btn_dt_cancel_2
    ui->scr_downtime_btn_dt_cancel_2 = lv_button_create(ui->scr_downtime_cont_dt_reason_2);
    lv_obj_set_pos(ui->scr_downtime_btn_dt_cancel_2, 180, 458);
    lv_obj_set_size(ui->scr_downtime_btn_dt_cancel_2, 300, 70);
    ui->scr_downtime_btn_dt_cancel_2_label = lv_label_create(ui->scr_downtime_btn_dt_cancel_2);
    lv_label_set_text(ui->scr_downtime_btn_dt_cancel_2_label, "CANCEL");
    lv_label_set_long_mode(ui->scr_downtime_btn_dt_cancel_2_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->scr_downtime_btn_dt_cancel_2_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->scr_downtime_btn_dt_cancel_2, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->scr_downtime_btn_dt_cancel_2_label, LV_PCT(100));

    //Write style for scr_downtime_btn_dt_cancel_2, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->scr_downtime_btn_dt_cancel_2, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scr_downtime_btn_dt_cancel_2, lv_color_hex(0x717171), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scr_downtime_btn_dt_cancel_2, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->scr_downtime_btn_dt_cancel_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_downtime_btn_dt_cancel_2, 10, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_downtime_btn_dt_cancel_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scr_downtime_btn_dt_cancel_2, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scr_downtime_btn_dt_cancel_2, &lv_font_Acme_Regular_30, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scr_downtime_btn_dt_cancel_2, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scr_downtime_btn_dt_cancel_2, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scr_downtime_btn_dt_submit_2
    ui->scr_downtime_btn_dt_submit_2 = lv_button_create(ui->scr_downtime_cont_dt_reason_2);
    lv_obj_set_pos(ui->scr_downtime_btn_dt_submit_2, 500, 458);
    lv_obj_set_size(ui->scr_downtime_btn_dt_submit_2, 300, 70);
    ui->scr_downtime_btn_dt_submit_2_label = lv_label_create(ui->scr_downtime_btn_dt_submit_2);
    lv_label_set_text(ui->scr_downtime_btn_dt_submit_2_label, "CONFIRM");
    lv_label_set_long_mode(ui->scr_downtime_btn_dt_submit_2_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->scr_downtime_btn_dt_submit_2_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->scr_downtime_btn_dt_submit_2, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->scr_downtime_btn_dt_submit_2_label, LV_PCT(100));

    //Write style for scr_downtime_btn_dt_submit_2, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->scr_downtime_btn_dt_submit_2, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scr_downtime_btn_dt_submit_2, lv_color_hex(0x1c4567), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scr_downtime_btn_dt_submit_2, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->scr_downtime_btn_dt_submit_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_downtime_btn_dt_submit_2, 10, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_downtime_btn_dt_submit_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scr_downtime_btn_dt_submit_2, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scr_downtime_btn_dt_submit_2, &lv_font_Acme_Regular_30, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scr_downtime_btn_dt_submit_2, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scr_downtime_btn_dt_submit_2, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);



    //Write codes scr_downtime_cont_dt_reason_3
    ui->scr_downtime_cont_dt_reason_3 = lv_obj_create(ui->scr_downtime_menu_detail_reason_subpage_4_cont);
    lv_obj_set_pos(ui->scr_downtime_cont_dt_reason_3, 20, 0);
    lv_obj_set_size(ui->scr_downtime_cont_dt_reason_3, 822, 564);
    lv_obj_set_scrollbar_mode(ui->scr_downtime_cont_dt_reason_3, LV_SCROLLBAR_MODE_OFF);

    //Write style for scr_downtime_cont_dt_reason_3, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scr_downtime_cont_dt_reason_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_downtime_cont_dt_reason_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scr_downtime_cont_dt_reason_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scr_downtime_cont_dt_reason_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scr_downtime_cont_dt_reason_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scr_downtime_cont_dt_reason_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scr_downtime_cont_dt_reason_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_downtime_cont_dt_reason_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scr_downtime_lbl_dt_reason_3
    ui->scr_downtime_lbl_dt_reason_3 = lv_label_create(ui->scr_downtime_cont_dt_reason_3);
    lv_obj_set_pos(ui->scr_downtime_lbl_dt_reason_3, 4, -18);
    lv_obj_set_size(ui->scr_downtime_lbl_dt_reason_3, 230, 66);
    lv_label_set_text(ui->scr_downtime_lbl_dt_reason_3, "Detailed Reason");
    lv_label_set_long_mode(ui->scr_downtime_lbl_dt_reason_3, LV_LABEL_LONG_WRAP);

    //Write style for scr_downtime_lbl_dt_reason_3, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scr_downtime_lbl_dt_reason_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_downtime_lbl_dt_reason_3, 10, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scr_downtime_lbl_dt_reason_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scr_downtime_lbl_dt_reason_3, 30, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scr_downtime_lbl_dt_reason_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scr_downtime_lbl_dt_reason_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_downtime_lbl_dt_reason_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scr_downtime_lbl_dt_reason_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scr_downtime_lbl_dt_reason_3, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scr_downtime_lbl_dt_reason_3, &lv_font_Acme_Regular_30, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scr_downtime_lbl_dt_reason_3, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->scr_downtime_lbl_dt_reason_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->scr_downtime_lbl_dt_reason_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scr_downtime_lbl_dt_reason_3, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scr_downtime_ddlist_dt_reason_3
    ui->scr_downtime_ddlist_dt_reason_3 = lv_dropdown_create(ui->scr_downtime_cont_dt_reason_3);
    lv_obj_set_pos(ui->scr_downtime_ddlist_dt_reason_3, 22, 59);
    lv_obj_set_size(ui->scr_downtime_ddlist_dt_reason_3, 776, 90);
    lv_dropdown_set_options(ui->scr_downtime_ddlist_dt_reason_3, "None\nSensor Failure\nBelt Broken\nPower leak");

    //Write style for scr_downtime_ddlist_dt_reason_3, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scr_downtime_ddlist_dt_reason_3, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->scr_downtime_ddlist_dt_reason_3, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->scr_downtime_ddlist_dt_reason_3, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->scr_downtime_ddlist_dt_reason_3, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_downtime_ddlist_dt_reason_3, 10, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scr_downtime_ddlist_dt_reason_3, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scr_downtime_ddlist_dt_reason_3, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scr_downtime_ddlist_dt_reason_3, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scr_downtime_ddlist_dt_reason_3, 18, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scr_downtime_ddlist_dt_reason_3, 20, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scr_downtime_ddlist_dt_reason_3, 20, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_downtime_ddlist_dt_reason_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scr_downtime_ddlist_dt_reason_3, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scr_downtime_ddlist_dt_reason_3, &lv_font_arial_30, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scr_downtime_ddlist_dt_reason_3, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style for scr_downtime_ddlist_dt_reason_3, Part: LV_PART_MAIN, State: LV_STATE_CHECKED.
    lv_obj_set_style_text_color(ui->scr_downtime_ddlist_dt_reason_3, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_text_font(ui->scr_downtime_ddlist_dt_reason_3, &lv_font_arial_30, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_text_opa(ui->scr_downtime_ddlist_dt_reason_3, 255, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_border_width(ui->scr_downtime_ddlist_dt_reason_3, 1, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_border_opa(ui->scr_downtime_ddlist_dt_reason_3, 255, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_border_color(ui->scr_downtime_ddlist_dt_reason_3, lv_color_hex(0xe1e6ee), LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_border_side(ui->scr_downtime_ddlist_dt_reason_3, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_pad_top(ui->scr_downtime_ddlist_dt_reason_3, 18, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_pad_left(ui->scr_downtime_ddlist_dt_reason_3, 6, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_pad_right(ui->scr_downtime_ddlist_dt_reason_3, 6, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_radius(ui->scr_downtime_ddlist_dt_reason_3, 3, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_bg_opa(ui->scr_downtime_ddlist_dt_reason_3, 255, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_bg_color(ui->scr_downtime_ddlist_dt_reason_3, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_bg_grad_dir(ui->scr_downtime_ddlist_dt_reason_3, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_shadow_width(ui->scr_downtime_ddlist_dt_reason_3, 0, LV_PART_MAIN|LV_STATE_CHECKED);

    //Write style for scr_downtime_ddlist_dt_reason_3, Part: LV_PART_MAIN, State: LV_STATE_FOCUSED.
    lv_obj_set_style_text_color(ui->scr_downtime_ddlist_dt_reason_3, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_text_font(ui->scr_downtime_ddlist_dt_reason_3, &lv_font_arial_30, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_text_opa(ui->scr_downtime_ddlist_dt_reason_3, 255, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_border_width(ui->scr_downtime_ddlist_dt_reason_3, 1, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_border_opa(ui->scr_downtime_ddlist_dt_reason_3, 255, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_border_color(ui->scr_downtime_ddlist_dt_reason_3, lv_color_hex(0xe1e6ee), LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_border_side(ui->scr_downtime_ddlist_dt_reason_3, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_pad_top(ui->scr_downtime_ddlist_dt_reason_3, 18, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_pad_left(ui->scr_downtime_ddlist_dt_reason_3, 6, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_pad_right(ui->scr_downtime_ddlist_dt_reason_3, 6, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_radius(ui->scr_downtime_ddlist_dt_reason_3, 3, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_bg_opa(ui->scr_downtime_ddlist_dt_reason_3, 255, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_bg_color(ui->scr_downtime_ddlist_dt_reason_3, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_bg_grad_dir(ui->scr_downtime_ddlist_dt_reason_3, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_shadow_width(ui->scr_downtime_ddlist_dt_reason_3, 0, LV_PART_MAIN|LV_STATE_FOCUSED);

    //Write style state: LV_STATE_CHECKED for &style_scr_downtime_ddlist_dt_reason_3_extra_list_selected_checked
    static lv_style_t style_scr_downtime_ddlist_dt_reason_3_extra_list_selected_checked;
    ui_init_style(&style_scr_downtime_ddlist_dt_reason_3_extra_list_selected_checked);

    lv_style_set_border_width(&style_scr_downtime_ddlist_dt_reason_3_extra_list_selected_checked, 1);
    lv_style_set_border_opa(&style_scr_downtime_ddlist_dt_reason_3_extra_list_selected_checked, 255);
    lv_style_set_border_color(&style_scr_downtime_ddlist_dt_reason_3_extra_list_selected_checked, lv_color_hex(0xe1e6ee));
    lv_style_set_border_side(&style_scr_downtime_ddlist_dt_reason_3_extra_list_selected_checked, LV_BORDER_SIDE_FULL);
    lv_style_set_radius(&style_scr_downtime_ddlist_dt_reason_3_extra_list_selected_checked, 3);
    lv_style_set_bg_opa(&style_scr_downtime_ddlist_dt_reason_3_extra_list_selected_checked, 255);
    lv_style_set_bg_color(&style_scr_downtime_ddlist_dt_reason_3_extra_list_selected_checked, lv_color_hex(0x00a1b5));
    lv_style_set_bg_grad_dir(&style_scr_downtime_ddlist_dt_reason_3_extra_list_selected_checked, LV_GRAD_DIR_NONE);
    lv_obj_add_style(lv_dropdown_get_list(ui->scr_downtime_ddlist_dt_reason_3), &style_scr_downtime_ddlist_dt_reason_3_extra_list_selected_checked, LV_PART_SELECTED|LV_STATE_CHECKED);

    //Write style state: LV_STATE_DEFAULT for &style_scr_downtime_ddlist_dt_reason_3_extra_list_main_default
    static lv_style_t style_scr_downtime_ddlist_dt_reason_3_extra_list_main_default;
    ui_init_style(&style_scr_downtime_ddlist_dt_reason_3_extra_list_main_default);

    lv_style_set_max_height(&style_scr_downtime_ddlist_dt_reason_3_extra_list_main_default, 90);
    lv_style_set_text_color(&style_scr_downtime_ddlist_dt_reason_3_extra_list_main_default, lv_color_hex(0x000000));
    lv_style_set_text_font(&style_scr_downtime_ddlist_dt_reason_3_extra_list_main_default, &lv_font_arial_30);
    lv_style_set_text_opa(&style_scr_downtime_ddlist_dt_reason_3_extra_list_main_default, 255);
    lv_style_set_border_width(&style_scr_downtime_ddlist_dt_reason_3_extra_list_main_default, 1);
    lv_style_set_border_opa(&style_scr_downtime_ddlist_dt_reason_3_extra_list_main_default, 255);
    lv_style_set_border_color(&style_scr_downtime_ddlist_dt_reason_3_extra_list_main_default, lv_color_hex(0xe1e6ee));
    lv_style_set_border_side(&style_scr_downtime_ddlist_dt_reason_3_extra_list_main_default, LV_BORDER_SIDE_FULL);
    lv_style_set_radius(&style_scr_downtime_ddlist_dt_reason_3_extra_list_main_default, 3);
    lv_style_set_bg_opa(&style_scr_downtime_ddlist_dt_reason_3_extra_list_main_default, 255);
    lv_style_set_bg_color(&style_scr_downtime_ddlist_dt_reason_3_extra_list_main_default, lv_color_hex(0xffffff));
    lv_style_set_bg_grad_dir(&style_scr_downtime_ddlist_dt_reason_3_extra_list_main_default, LV_GRAD_DIR_NONE);
    lv_obj_add_style(lv_dropdown_get_list(ui->scr_downtime_ddlist_dt_reason_3), &style_scr_downtime_ddlist_dt_reason_3_extra_list_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style state: LV_STATE_DEFAULT for &style_scr_downtime_ddlist_dt_reason_3_extra_list_scrollbar_default
    static lv_style_t style_scr_downtime_ddlist_dt_reason_3_extra_list_scrollbar_default;
    ui_init_style(&style_scr_downtime_ddlist_dt_reason_3_extra_list_scrollbar_default);

    lv_style_set_radius(&style_scr_downtime_ddlist_dt_reason_3_extra_list_scrollbar_default, 3);
    lv_style_set_bg_opa(&style_scr_downtime_ddlist_dt_reason_3_extra_list_scrollbar_default, 255);
    lv_style_set_bg_color(&style_scr_downtime_ddlist_dt_reason_3_extra_list_scrollbar_default, lv_color_hex(0x494949));
    lv_style_set_bg_grad_dir(&style_scr_downtime_ddlist_dt_reason_3_extra_list_scrollbar_default, LV_GRAD_DIR_NONE);
    lv_obj_add_style(lv_dropdown_get_list(ui->scr_downtime_ddlist_dt_reason_3), &style_scr_downtime_ddlist_dt_reason_3_extra_list_scrollbar_default, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);

    //Write codes scr_downtime_lbl_dt_description_3
    ui->scr_downtime_lbl_dt_description_3 = lv_label_create(ui->scr_downtime_cont_dt_reason_3);
    lv_obj_set_pos(ui->scr_downtime_lbl_dt_description_3, 4, 193);
    lv_obj_set_size(ui->scr_downtime_lbl_dt_description_3, 465, 42);
    lv_label_set_text(ui->scr_downtime_lbl_dt_description_3, "Additional Description (Optional)");
    lv_label_set_long_mode(ui->scr_downtime_lbl_dt_description_3, LV_LABEL_LONG_WRAP);

    //Write style for scr_downtime_lbl_dt_description_3, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scr_downtime_lbl_dt_description_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_downtime_lbl_dt_description_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scr_downtime_lbl_dt_description_3, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scr_downtime_lbl_dt_description_3, &lv_font_Acme_Regular_30, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scr_downtime_lbl_dt_description_3, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->scr_downtime_lbl_dt_description_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->scr_downtime_lbl_dt_description_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scr_downtime_lbl_dt_description_3, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scr_downtime_lbl_dt_description_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scr_downtime_lbl_dt_description_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scr_downtime_lbl_dt_description_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scr_downtime_lbl_dt_description_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scr_downtime_lbl_dt_description_3, 20, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_downtime_lbl_dt_description_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scr_downtime_ta_dt_note_reason_stop_3
    ui->scr_downtime_ta_dt_note_reason_stop_3 = lv_textarea_create(ui->scr_downtime_cont_dt_reason_3);
    lv_obj_set_pos(ui->scr_downtime_ta_dt_note_reason_stop_3, 21, 241);
    lv_obj_set_size(ui->scr_downtime_ta_dt_note_reason_stop_3, 779, 90);
    lv_textarea_set_text(ui->scr_downtime_ta_dt_note_reason_stop_3, "Describe the issue in detail...");
    lv_textarea_set_placeholder_text(ui->scr_downtime_ta_dt_note_reason_stop_3, "");
    lv_textarea_set_password_bullet(ui->scr_downtime_ta_dt_note_reason_stop_3, "*");
    lv_textarea_set_password_mode(ui->scr_downtime_ta_dt_note_reason_stop_3, false);
    lv_textarea_set_one_line(ui->scr_downtime_ta_dt_note_reason_stop_3, true);
    lv_textarea_set_accepted_chars(ui->scr_downtime_ta_dt_note_reason_stop_3, "");
    lv_textarea_set_max_length(ui->scr_downtime_ta_dt_note_reason_stop_3, 32);
#if LV_USE_KEYBOARD
    lv_obj_add_event_cb(ui->scr_downtime_ta_dt_note_reason_stop_3, ta_event_cb, LV_EVENT_ALL, ui->g_kb_top_layer);
#endif

    //Write style for scr_downtime_ta_dt_note_reason_stop_3, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_text_color(ui->scr_downtime_ta_dt_note_reason_stop_3, lv_color_hex(0xABABAB), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scr_downtime_ta_dt_note_reason_stop_3, &lv_font_arial_30, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scr_downtime_ta_dt_note_reason_stop_3, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->scr_downtime_ta_dt_note_reason_stop_3, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scr_downtime_ta_dt_note_reason_stop_3, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scr_downtime_ta_dt_note_reason_stop_3, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scr_downtime_ta_dt_note_reason_stop_3, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scr_downtime_ta_dt_note_reason_stop_3, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->scr_downtime_ta_dt_note_reason_stop_3, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->scr_downtime_ta_dt_note_reason_stop_3, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->scr_downtime_ta_dt_note_reason_stop_3, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->scr_downtime_ta_dt_note_reason_stop_3, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_downtime_ta_dt_note_reason_stop_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scr_downtime_ta_dt_note_reason_stop_3, 25, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scr_downtime_ta_dt_note_reason_stop_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scr_downtime_ta_dt_note_reason_stop_3, 20, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_downtime_ta_dt_note_reason_stop_3, 10, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style for scr_downtime_ta_dt_note_reason_stop_3, Part: LV_PART_MAIN, State: LV_STATE_FOCUSED.
    lv_obj_set_style_text_color(ui->scr_downtime_ta_dt_note_reason_stop_3, lv_color_hex(0xABABAB), LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_text_font(ui->scr_downtime_ta_dt_note_reason_stop_3, &lv_font_arial_30, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_text_opa(ui->scr_downtime_ta_dt_note_reason_stop_3, 255, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_bg_opa(ui->scr_downtime_ta_dt_note_reason_stop_3, 255, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_bg_color(ui->scr_downtime_ta_dt_note_reason_stop_3, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_bg_grad_dir(ui->scr_downtime_ta_dt_note_reason_stop_3, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_border_width(ui->scr_downtime_ta_dt_note_reason_stop_3, 2, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_border_opa(ui->scr_downtime_ta_dt_note_reason_stop_3, 255, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_border_color(ui->scr_downtime_ta_dt_note_reason_stop_3, lv_color_hex(0xe6e6e6), LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_border_side(ui->scr_downtime_ta_dt_note_reason_stop_3, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_shadow_width(ui->scr_downtime_ta_dt_note_reason_stop_3, 0, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_pad_top(ui->scr_downtime_ta_dt_note_reason_stop_3, 4, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_pad_right(ui->scr_downtime_ta_dt_note_reason_stop_3, 4, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_pad_left(ui->scr_downtime_ta_dt_note_reason_stop_3, 4, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_radius(ui->scr_downtime_ta_dt_note_reason_stop_3, 4, LV_PART_MAIN|LV_STATE_FOCUSED);

    //Write style for scr_downtime_ta_dt_note_reason_stop_3, Part: LV_PART_SCROLLBAR, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->scr_downtime_ta_dt_note_reason_stop_3, 0, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_downtime_ta_dt_note_reason_stop_3, 0, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);

    //Write style for scr_downtime_ta_dt_note_reason_stop_3, Part: LV_PART_SCROLLBAR, State: LV_STATE_FOCUSED.
    lv_obj_set_style_bg_opa(ui->scr_downtime_ta_dt_note_reason_stop_3, 0, LV_PART_SCROLLBAR|LV_STATE_FOCUSED);
    lv_obj_set_style_radius(ui->scr_downtime_ta_dt_note_reason_stop_3, 0, LV_PART_SCROLLBAR|LV_STATE_FOCUSED);

    //Write codes scr_downtime_btn_dt_cancel_3
    ui->scr_downtime_btn_dt_cancel_3 = lv_button_create(ui->scr_downtime_cont_dt_reason_3);
    lv_obj_set_pos(ui->scr_downtime_btn_dt_cancel_3, 180, 458);
    lv_obj_set_size(ui->scr_downtime_btn_dt_cancel_3, 300, 70);
    ui->scr_downtime_btn_dt_cancel_3_label = lv_label_create(ui->scr_downtime_btn_dt_cancel_3);
    lv_label_set_text(ui->scr_downtime_btn_dt_cancel_3_label, "CANCEL");
    lv_label_set_long_mode(ui->scr_downtime_btn_dt_cancel_3_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->scr_downtime_btn_dt_cancel_3_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->scr_downtime_btn_dt_cancel_3, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->scr_downtime_btn_dt_cancel_3_label, LV_PCT(100));

    //Write style for scr_downtime_btn_dt_cancel_3, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->scr_downtime_btn_dt_cancel_3, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scr_downtime_btn_dt_cancel_3, lv_color_hex(0x717171), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scr_downtime_btn_dt_cancel_3, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->scr_downtime_btn_dt_cancel_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_downtime_btn_dt_cancel_3, 10, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_downtime_btn_dt_cancel_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scr_downtime_btn_dt_cancel_3, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scr_downtime_btn_dt_cancel_3, &lv_font_Acme_Regular_30, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scr_downtime_btn_dt_cancel_3, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scr_downtime_btn_dt_cancel_3, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scr_downtime_btn_dt_submit_3
    ui->scr_downtime_btn_dt_submit_3 = lv_button_create(ui->scr_downtime_cont_dt_reason_3);
    lv_obj_set_pos(ui->scr_downtime_btn_dt_submit_3, 500, 458);
    lv_obj_set_size(ui->scr_downtime_btn_dt_submit_3, 300, 70);
    ui->scr_downtime_btn_dt_submit_3_label = lv_label_create(ui->scr_downtime_btn_dt_submit_3);
    lv_label_set_text(ui->scr_downtime_btn_dt_submit_3_label, "CONFIRM");
    lv_label_set_long_mode(ui->scr_downtime_btn_dt_submit_3_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->scr_downtime_btn_dt_submit_3_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->scr_downtime_btn_dt_submit_3, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->scr_downtime_btn_dt_submit_3_label, LV_PCT(100));

    //Write style for scr_downtime_btn_dt_submit_3, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->scr_downtime_btn_dt_submit_3, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scr_downtime_btn_dt_submit_3, lv_color_hex(0x1c4567), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scr_downtime_btn_dt_submit_3, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->scr_downtime_btn_dt_submit_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_downtime_btn_dt_submit_3, 10, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_downtime_btn_dt_submit_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scr_downtime_btn_dt_submit_3, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scr_downtime_btn_dt_submit_3, &lv_font_Acme_Regular_30, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scr_downtime_btn_dt_submit_3, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scr_downtime_btn_dt_submit_3, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);



    //Write codes scr_downtime_cont_dt_reason_4
    ui->scr_downtime_cont_dt_reason_4 = lv_obj_create(ui->scr_downtime_menu_detail_reason_subpage_5_cont);
    lv_obj_set_pos(ui->scr_downtime_cont_dt_reason_4, 20, 0);
    lv_obj_set_size(ui->scr_downtime_cont_dt_reason_4, 822, 564);
    lv_obj_set_scrollbar_mode(ui->scr_downtime_cont_dt_reason_4, LV_SCROLLBAR_MODE_OFF);

    //Write style for scr_downtime_cont_dt_reason_4, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scr_downtime_cont_dt_reason_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_downtime_cont_dt_reason_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scr_downtime_cont_dt_reason_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scr_downtime_cont_dt_reason_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scr_downtime_cont_dt_reason_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scr_downtime_cont_dt_reason_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scr_downtime_cont_dt_reason_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_downtime_cont_dt_reason_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scr_downtime_lbl_dt_reason_4
    ui->scr_downtime_lbl_dt_reason_4 = lv_label_create(ui->scr_downtime_cont_dt_reason_4);
    lv_obj_set_pos(ui->scr_downtime_lbl_dt_reason_4, 4, -18);
    lv_obj_set_size(ui->scr_downtime_lbl_dt_reason_4, 230, 66);
    lv_label_set_text(ui->scr_downtime_lbl_dt_reason_4, "Detailed Reason");
    lv_label_set_long_mode(ui->scr_downtime_lbl_dt_reason_4, LV_LABEL_LONG_WRAP);

    //Write style for scr_downtime_lbl_dt_reason_4, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scr_downtime_lbl_dt_reason_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_downtime_lbl_dt_reason_4, 10, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scr_downtime_lbl_dt_reason_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scr_downtime_lbl_dt_reason_4, 30, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scr_downtime_lbl_dt_reason_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scr_downtime_lbl_dt_reason_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_downtime_lbl_dt_reason_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scr_downtime_lbl_dt_reason_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scr_downtime_lbl_dt_reason_4, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scr_downtime_lbl_dt_reason_4, &lv_font_Acme_Regular_30, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scr_downtime_lbl_dt_reason_4, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->scr_downtime_lbl_dt_reason_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->scr_downtime_lbl_dt_reason_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scr_downtime_lbl_dt_reason_4, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scr_downtime_ddlist_dt_reason_4
    ui->scr_downtime_ddlist_dt_reason_4 = lv_dropdown_create(ui->scr_downtime_cont_dt_reason_4);
    lv_obj_set_pos(ui->scr_downtime_ddlist_dt_reason_4, 22, 59);
    lv_obj_set_size(ui->scr_downtime_ddlist_dt_reason_4, 776, 90);
    lv_dropdown_set_options(ui->scr_downtime_ddlist_dt_reason_4, "None\nSensor Failure\nBelt Broken\nPower leak");

    //Write style for scr_downtime_ddlist_dt_reason_4, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scr_downtime_ddlist_dt_reason_4, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->scr_downtime_ddlist_dt_reason_4, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->scr_downtime_ddlist_dt_reason_4, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->scr_downtime_ddlist_dt_reason_4, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_downtime_ddlist_dt_reason_4, 10, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scr_downtime_ddlist_dt_reason_4, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scr_downtime_ddlist_dt_reason_4, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scr_downtime_ddlist_dt_reason_4, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scr_downtime_ddlist_dt_reason_4, 18, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scr_downtime_ddlist_dt_reason_4, 20, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scr_downtime_ddlist_dt_reason_4, 20, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_downtime_ddlist_dt_reason_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scr_downtime_ddlist_dt_reason_4, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scr_downtime_ddlist_dt_reason_4, &lv_font_arial_30, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scr_downtime_ddlist_dt_reason_4, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style for scr_downtime_ddlist_dt_reason_4, Part: LV_PART_MAIN, State: LV_STATE_CHECKED.
    lv_obj_set_style_text_color(ui->scr_downtime_ddlist_dt_reason_4, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_text_font(ui->scr_downtime_ddlist_dt_reason_4, &lv_font_arial_30, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_text_opa(ui->scr_downtime_ddlist_dt_reason_4, 255, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_border_width(ui->scr_downtime_ddlist_dt_reason_4, 1, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_border_opa(ui->scr_downtime_ddlist_dt_reason_4, 255, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_border_color(ui->scr_downtime_ddlist_dt_reason_4, lv_color_hex(0xe1e6ee), LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_border_side(ui->scr_downtime_ddlist_dt_reason_4, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_pad_top(ui->scr_downtime_ddlist_dt_reason_4, 18, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_pad_left(ui->scr_downtime_ddlist_dt_reason_4, 6, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_pad_right(ui->scr_downtime_ddlist_dt_reason_4, 6, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_radius(ui->scr_downtime_ddlist_dt_reason_4, 3, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_bg_opa(ui->scr_downtime_ddlist_dt_reason_4, 255, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_bg_color(ui->scr_downtime_ddlist_dt_reason_4, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_bg_grad_dir(ui->scr_downtime_ddlist_dt_reason_4, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_shadow_width(ui->scr_downtime_ddlist_dt_reason_4, 0, LV_PART_MAIN|LV_STATE_CHECKED);

    //Write style for scr_downtime_ddlist_dt_reason_4, Part: LV_PART_MAIN, State: LV_STATE_FOCUSED.
    lv_obj_set_style_text_color(ui->scr_downtime_ddlist_dt_reason_4, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_text_font(ui->scr_downtime_ddlist_dt_reason_4, &lv_font_arial_30, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_text_opa(ui->scr_downtime_ddlist_dt_reason_4, 255, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_border_width(ui->scr_downtime_ddlist_dt_reason_4, 1, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_border_opa(ui->scr_downtime_ddlist_dt_reason_4, 255, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_border_color(ui->scr_downtime_ddlist_dt_reason_4, lv_color_hex(0xe1e6ee), LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_border_side(ui->scr_downtime_ddlist_dt_reason_4, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_pad_top(ui->scr_downtime_ddlist_dt_reason_4, 18, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_pad_left(ui->scr_downtime_ddlist_dt_reason_4, 6, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_pad_right(ui->scr_downtime_ddlist_dt_reason_4, 6, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_radius(ui->scr_downtime_ddlist_dt_reason_4, 3, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_bg_opa(ui->scr_downtime_ddlist_dt_reason_4, 255, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_bg_color(ui->scr_downtime_ddlist_dt_reason_4, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_bg_grad_dir(ui->scr_downtime_ddlist_dt_reason_4, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_shadow_width(ui->scr_downtime_ddlist_dt_reason_4, 0, LV_PART_MAIN|LV_STATE_FOCUSED);

    //Write style state: LV_STATE_CHECKED for &style_scr_downtime_ddlist_dt_reason_4_extra_list_selected_checked
    static lv_style_t style_scr_downtime_ddlist_dt_reason_4_extra_list_selected_checked;
    ui_init_style(&style_scr_downtime_ddlist_dt_reason_4_extra_list_selected_checked);

    lv_style_set_border_width(&style_scr_downtime_ddlist_dt_reason_4_extra_list_selected_checked, 1);
    lv_style_set_border_opa(&style_scr_downtime_ddlist_dt_reason_4_extra_list_selected_checked, 255);
    lv_style_set_border_color(&style_scr_downtime_ddlist_dt_reason_4_extra_list_selected_checked, lv_color_hex(0xe1e6ee));
    lv_style_set_border_side(&style_scr_downtime_ddlist_dt_reason_4_extra_list_selected_checked, LV_BORDER_SIDE_FULL);
    lv_style_set_radius(&style_scr_downtime_ddlist_dt_reason_4_extra_list_selected_checked, 3);
    lv_style_set_bg_opa(&style_scr_downtime_ddlist_dt_reason_4_extra_list_selected_checked, 255);
    lv_style_set_bg_color(&style_scr_downtime_ddlist_dt_reason_4_extra_list_selected_checked, lv_color_hex(0x00a1b5));
    lv_style_set_bg_grad_dir(&style_scr_downtime_ddlist_dt_reason_4_extra_list_selected_checked, LV_GRAD_DIR_NONE);
    lv_obj_add_style(lv_dropdown_get_list(ui->scr_downtime_ddlist_dt_reason_4), &style_scr_downtime_ddlist_dt_reason_4_extra_list_selected_checked, LV_PART_SELECTED|LV_STATE_CHECKED);

    //Write style state: LV_STATE_DEFAULT for &style_scr_downtime_ddlist_dt_reason_4_extra_list_main_default
    static lv_style_t style_scr_downtime_ddlist_dt_reason_4_extra_list_main_default;
    ui_init_style(&style_scr_downtime_ddlist_dt_reason_4_extra_list_main_default);

    lv_style_set_max_height(&style_scr_downtime_ddlist_dt_reason_4_extra_list_main_default, 90);
    lv_style_set_text_color(&style_scr_downtime_ddlist_dt_reason_4_extra_list_main_default, lv_color_hex(0x000000));
    lv_style_set_text_font(&style_scr_downtime_ddlist_dt_reason_4_extra_list_main_default, &lv_font_arial_30);
    lv_style_set_text_opa(&style_scr_downtime_ddlist_dt_reason_4_extra_list_main_default, 255);
    lv_style_set_border_width(&style_scr_downtime_ddlist_dt_reason_4_extra_list_main_default, 1);
    lv_style_set_border_opa(&style_scr_downtime_ddlist_dt_reason_4_extra_list_main_default, 255);
    lv_style_set_border_color(&style_scr_downtime_ddlist_dt_reason_4_extra_list_main_default, lv_color_hex(0xe1e6ee));
    lv_style_set_border_side(&style_scr_downtime_ddlist_dt_reason_4_extra_list_main_default, LV_BORDER_SIDE_FULL);
    lv_style_set_radius(&style_scr_downtime_ddlist_dt_reason_4_extra_list_main_default, 3);
    lv_style_set_bg_opa(&style_scr_downtime_ddlist_dt_reason_4_extra_list_main_default, 255);
    lv_style_set_bg_color(&style_scr_downtime_ddlist_dt_reason_4_extra_list_main_default, lv_color_hex(0xffffff));
    lv_style_set_bg_grad_dir(&style_scr_downtime_ddlist_dt_reason_4_extra_list_main_default, LV_GRAD_DIR_NONE);
    lv_obj_add_style(lv_dropdown_get_list(ui->scr_downtime_ddlist_dt_reason_4), &style_scr_downtime_ddlist_dt_reason_4_extra_list_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style state: LV_STATE_DEFAULT for &style_scr_downtime_ddlist_dt_reason_4_extra_list_scrollbar_default
    static lv_style_t style_scr_downtime_ddlist_dt_reason_4_extra_list_scrollbar_default;
    ui_init_style(&style_scr_downtime_ddlist_dt_reason_4_extra_list_scrollbar_default);

    lv_style_set_radius(&style_scr_downtime_ddlist_dt_reason_4_extra_list_scrollbar_default, 3);
    lv_style_set_bg_opa(&style_scr_downtime_ddlist_dt_reason_4_extra_list_scrollbar_default, 255);
    lv_style_set_bg_color(&style_scr_downtime_ddlist_dt_reason_4_extra_list_scrollbar_default, lv_color_hex(0x494949));
    lv_style_set_bg_grad_dir(&style_scr_downtime_ddlist_dt_reason_4_extra_list_scrollbar_default, LV_GRAD_DIR_NONE);
    lv_obj_add_style(lv_dropdown_get_list(ui->scr_downtime_ddlist_dt_reason_4), &style_scr_downtime_ddlist_dt_reason_4_extra_list_scrollbar_default, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);

    //Write codes scr_downtime_lbl_dt_description_4
    ui->scr_downtime_lbl_dt_description_4 = lv_label_create(ui->scr_downtime_cont_dt_reason_4);
    lv_obj_set_pos(ui->scr_downtime_lbl_dt_description_4, 4, 193);
    lv_obj_set_size(ui->scr_downtime_lbl_dt_description_4, 465, 42);
    lv_label_set_text(ui->scr_downtime_lbl_dt_description_4, "Additional Description (Optional)");
    lv_label_set_long_mode(ui->scr_downtime_lbl_dt_description_4, LV_LABEL_LONG_WRAP);

    //Write style for scr_downtime_lbl_dt_description_4, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scr_downtime_lbl_dt_description_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_downtime_lbl_dt_description_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scr_downtime_lbl_dt_description_4, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scr_downtime_lbl_dt_description_4, &lv_font_Acme_Regular_30, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scr_downtime_lbl_dt_description_4, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->scr_downtime_lbl_dt_description_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->scr_downtime_lbl_dt_description_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scr_downtime_lbl_dt_description_4, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scr_downtime_lbl_dt_description_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scr_downtime_lbl_dt_description_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scr_downtime_lbl_dt_description_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scr_downtime_lbl_dt_description_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scr_downtime_lbl_dt_description_4, 20, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_downtime_lbl_dt_description_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scr_downtime_ta_dt_note_reason_stop_4
    ui->scr_downtime_ta_dt_note_reason_stop_4 = lv_textarea_create(ui->scr_downtime_cont_dt_reason_4);
    lv_obj_set_pos(ui->scr_downtime_ta_dt_note_reason_stop_4, 21, 241);
    lv_obj_set_size(ui->scr_downtime_ta_dt_note_reason_stop_4, 779, 90);
    lv_textarea_set_text(ui->scr_downtime_ta_dt_note_reason_stop_4, "Describe the issue in detail...");
    lv_textarea_set_placeholder_text(ui->scr_downtime_ta_dt_note_reason_stop_4, "");
    lv_textarea_set_password_bullet(ui->scr_downtime_ta_dt_note_reason_stop_4, "*");
    lv_textarea_set_password_mode(ui->scr_downtime_ta_dt_note_reason_stop_4, false);
    lv_textarea_set_one_line(ui->scr_downtime_ta_dt_note_reason_stop_4, true);
    lv_textarea_set_accepted_chars(ui->scr_downtime_ta_dt_note_reason_stop_4, "");
    lv_textarea_set_max_length(ui->scr_downtime_ta_dt_note_reason_stop_4, 32);
#if LV_USE_KEYBOARD
    lv_obj_add_event_cb(ui->scr_downtime_ta_dt_note_reason_stop_4, ta_event_cb, LV_EVENT_ALL, ui->g_kb_top_layer);
#endif

    //Write style for scr_downtime_ta_dt_note_reason_stop_4, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_text_color(ui->scr_downtime_ta_dt_note_reason_stop_4, lv_color_hex(0xABABAB), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scr_downtime_ta_dt_note_reason_stop_4, &lv_font_arial_30, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scr_downtime_ta_dt_note_reason_stop_4, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->scr_downtime_ta_dt_note_reason_stop_4, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scr_downtime_ta_dt_note_reason_stop_4, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scr_downtime_ta_dt_note_reason_stop_4, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scr_downtime_ta_dt_note_reason_stop_4, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scr_downtime_ta_dt_note_reason_stop_4, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->scr_downtime_ta_dt_note_reason_stop_4, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->scr_downtime_ta_dt_note_reason_stop_4, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->scr_downtime_ta_dt_note_reason_stop_4, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->scr_downtime_ta_dt_note_reason_stop_4, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_downtime_ta_dt_note_reason_stop_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scr_downtime_ta_dt_note_reason_stop_4, 25, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scr_downtime_ta_dt_note_reason_stop_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scr_downtime_ta_dt_note_reason_stop_4, 20, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_downtime_ta_dt_note_reason_stop_4, 10, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style for scr_downtime_ta_dt_note_reason_stop_4, Part: LV_PART_MAIN, State: LV_STATE_FOCUSED.
    lv_obj_set_style_text_color(ui->scr_downtime_ta_dt_note_reason_stop_4, lv_color_hex(0xABABAB), LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_text_font(ui->scr_downtime_ta_dt_note_reason_stop_4, &lv_font_arial_30, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_text_opa(ui->scr_downtime_ta_dt_note_reason_stop_4, 255, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_bg_opa(ui->scr_downtime_ta_dt_note_reason_stop_4, 255, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_bg_color(ui->scr_downtime_ta_dt_note_reason_stop_4, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_bg_grad_dir(ui->scr_downtime_ta_dt_note_reason_stop_4, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_border_width(ui->scr_downtime_ta_dt_note_reason_stop_4, 2, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_border_opa(ui->scr_downtime_ta_dt_note_reason_stop_4, 255, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_border_color(ui->scr_downtime_ta_dt_note_reason_stop_4, lv_color_hex(0xe6e6e6), LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_border_side(ui->scr_downtime_ta_dt_note_reason_stop_4, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_shadow_width(ui->scr_downtime_ta_dt_note_reason_stop_4, 0, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_pad_top(ui->scr_downtime_ta_dt_note_reason_stop_4, 4, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_pad_right(ui->scr_downtime_ta_dt_note_reason_stop_4, 4, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_pad_left(ui->scr_downtime_ta_dt_note_reason_stop_4, 4, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_radius(ui->scr_downtime_ta_dt_note_reason_stop_4, 4, LV_PART_MAIN|LV_STATE_FOCUSED);

    //Write style for scr_downtime_ta_dt_note_reason_stop_4, Part: LV_PART_SCROLLBAR, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->scr_downtime_ta_dt_note_reason_stop_4, 0, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_downtime_ta_dt_note_reason_stop_4, 0, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);

    //Write style for scr_downtime_ta_dt_note_reason_stop_4, Part: LV_PART_SCROLLBAR, State: LV_STATE_FOCUSED.
    lv_obj_set_style_bg_opa(ui->scr_downtime_ta_dt_note_reason_stop_4, 0, LV_PART_SCROLLBAR|LV_STATE_FOCUSED);
    lv_obj_set_style_radius(ui->scr_downtime_ta_dt_note_reason_stop_4, 0, LV_PART_SCROLLBAR|LV_STATE_FOCUSED);

    //Write codes scr_downtime_btn_dt_cancel_4
    ui->scr_downtime_btn_dt_cancel_4 = lv_button_create(ui->scr_downtime_cont_dt_reason_4);
    lv_obj_set_pos(ui->scr_downtime_btn_dt_cancel_4, 180, 458);
    lv_obj_set_size(ui->scr_downtime_btn_dt_cancel_4, 300, 70);
    ui->scr_downtime_btn_dt_cancel_4_label = lv_label_create(ui->scr_downtime_btn_dt_cancel_4);
    lv_label_set_text(ui->scr_downtime_btn_dt_cancel_4_label, "CANCEL");
    lv_label_set_long_mode(ui->scr_downtime_btn_dt_cancel_4_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->scr_downtime_btn_dt_cancel_4_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->scr_downtime_btn_dt_cancel_4, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->scr_downtime_btn_dt_cancel_4_label, LV_PCT(100));

    //Write style for scr_downtime_btn_dt_cancel_4, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->scr_downtime_btn_dt_cancel_4, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scr_downtime_btn_dt_cancel_4, lv_color_hex(0x717171), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scr_downtime_btn_dt_cancel_4, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->scr_downtime_btn_dt_cancel_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_downtime_btn_dt_cancel_4, 10, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_downtime_btn_dt_cancel_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scr_downtime_btn_dt_cancel_4, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scr_downtime_btn_dt_cancel_4, &lv_font_Acme_Regular_30, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scr_downtime_btn_dt_cancel_4, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scr_downtime_btn_dt_cancel_4, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scr_downtime_btn_dt_submit_4
    ui->scr_downtime_btn_dt_submit_4 = lv_button_create(ui->scr_downtime_cont_dt_reason_4);
    lv_obj_set_pos(ui->scr_downtime_btn_dt_submit_4, 500, 458);
    lv_obj_set_size(ui->scr_downtime_btn_dt_submit_4, 300, 70);
    ui->scr_downtime_btn_dt_submit_4_label = lv_label_create(ui->scr_downtime_btn_dt_submit_4);
    lv_label_set_text(ui->scr_downtime_btn_dt_submit_4_label, "CONFIRM");
    lv_label_set_long_mode(ui->scr_downtime_btn_dt_submit_4_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->scr_downtime_btn_dt_submit_4_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->scr_downtime_btn_dt_submit_4, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->scr_downtime_btn_dt_submit_4_label, LV_PCT(100));

    //Write style for scr_downtime_btn_dt_submit_4, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->scr_downtime_btn_dt_submit_4, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scr_downtime_btn_dt_submit_4, lv_color_hex(0x1c4567), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scr_downtime_btn_dt_submit_4, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->scr_downtime_btn_dt_submit_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_downtime_btn_dt_submit_4, 10, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_downtime_btn_dt_submit_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scr_downtime_btn_dt_submit_4, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scr_downtime_btn_dt_submit_4, &lv_font_Acme_Regular_30, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scr_downtime_btn_dt_submit_4, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scr_downtime_btn_dt_submit_4, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //The custom code of scr_downtime.


    //Update current screen layout.
    lv_obj_update_layout(ui->scr_downtime);

    //Init events for screen.
    events_init_scr_downtime(ui);
}
