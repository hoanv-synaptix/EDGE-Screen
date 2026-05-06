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
    lv_obj_set_style_border_width(ui->scr_downtime_cont_dt, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_downtime_cont_dt, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scr_downtime_cont_dt, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scr_downtime_cont_dt, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scr_downtime_cont_dt, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scr_downtime_cont_dt, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scr_downtime_cont_dt, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_downtime_cont_dt, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

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
    lv_obj_set_style_text_font(ui->scr_downtime_lbl_machine_status, &lv_font_NotoSans_Bold_50, LV_PART_MAIN|LV_STATE_DEFAULT);
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

    //Write codes scr_downtime_cont_dt_center
    ui->scr_downtime_cont_dt_center = lv_obj_create(ui->scr_downtime_cont_dt);
    lv_obj_set_pos(ui->scr_downtime_cont_dt_center, 0, 102);
    lv_obj_set_size(ui->scr_downtime_cont_dt_center, 1232, 573);
    lv_obj_set_scrollbar_mode(ui->scr_downtime_cont_dt_center, LV_SCROLLBAR_MODE_OFF);

    //Write style for scr_downtime_cont_dt_center, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scr_downtime_cont_dt_center, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_downtime_cont_dt_center, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scr_downtime_cont_dt_center, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scr_downtime_cont_dt_center, lv_color_hex(0x404040), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scr_downtime_cont_dt_center, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scr_downtime_cont_dt_center, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scr_downtime_cont_dt_center, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scr_downtime_cont_dt_center, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scr_downtime_cont_dt_center, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_downtime_cont_dt_center, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scr_downtime_btn_reason_1
    ui->scr_downtime_btn_reason_1 = lv_button_create(ui->scr_downtime_cont_dt_center);
    lv_obj_set_pos(ui->scr_downtime_btn_reason_1, 11, 12);
    lv_obj_set_size(ui->scr_downtime_btn_reason_1, 400, 80);
    ui->scr_downtime_btn_reason_1_label = lv_label_create(ui->scr_downtime_btn_reason_1);
    lv_label_set_text(ui->scr_downtime_btn_reason_1_label, "MACHINE");
    lv_label_set_long_mode(ui->scr_downtime_btn_reason_1_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->scr_downtime_btn_reason_1_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->scr_downtime_btn_reason_1, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->scr_downtime_btn_reason_1_label, LV_PCT(100));

    //Write style for scr_downtime_btn_reason_1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->scr_downtime_btn_reason_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scr_downtime_btn_reason_1, lv_color_hex(0x586caa), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scr_downtime_btn_reason_1, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->scr_downtime_btn_reason_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_downtime_btn_reason_1, 8, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_downtime_btn_reason_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scr_downtime_btn_reason_1, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scr_downtime_btn_reason_1, &lv_font_NotoSans_Bold_40, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scr_downtime_btn_reason_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scr_downtime_btn_reason_1, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style for scr_downtime_btn_reason_1, Part: LV_PART_MAIN, State: LV_STATE_FOCUSED.
    lv_obj_set_style_bg_opa(ui->scr_downtime_btn_reason_1, 255, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_bg_color(ui->scr_downtime_btn_reason_1, lv_color_hex(0x2195f6), LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_bg_grad_dir(ui->scr_downtime_btn_reason_1, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_border_width(ui->scr_downtime_btn_reason_1, 0, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_radius(ui->scr_downtime_btn_reason_1, 5, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_shadow_width(ui->scr_downtime_btn_reason_1, 0, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_text_color(ui->scr_downtime_btn_reason_1, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_text_font(ui->scr_downtime_btn_reason_1, &lv_font_NotoSans_Bold_40, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_text_opa(ui->scr_downtime_btn_reason_1, 255, LV_PART_MAIN|LV_STATE_FOCUSED);

    //Write codes scr_downtime_btn_reaason_2
    ui->scr_downtime_btn_reaason_2 = lv_button_create(ui->scr_downtime_cont_dt_center);
    lv_obj_set_pos(ui->scr_downtime_btn_reaason_2, 11, 103);
    lv_obj_set_size(ui->scr_downtime_btn_reaason_2, 400, 80);
    ui->scr_downtime_btn_reaason_2_label = lv_label_create(ui->scr_downtime_btn_reaason_2);
    lv_label_set_text(ui->scr_downtime_btn_reaason_2_label, "MATERIAL");
    lv_label_set_long_mode(ui->scr_downtime_btn_reaason_2_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->scr_downtime_btn_reaason_2_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->scr_downtime_btn_reaason_2, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->scr_downtime_btn_reaason_2_label, LV_PCT(100));

    //Write style for scr_downtime_btn_reaason_2, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->scr_downtime_btn_reaason_2, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scr_downtime_btn_reaason_2, lv_color_hex(0x586caa), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scr_downtime_btn_reaason_2, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->scr_downtime_btn_reaason_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_downtime_btn_reaason_2, 8, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_downtime_btn_reaason_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scr_downtime_btn_reaason_2, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scr_downtime_btn_reaason_2, &lv_font_NotoSans_Bold_40, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scr_downtime_btn_reaason_2, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scr_downtime_btn_reaason_2, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style for scr_downtime_btn_reaason_2, Part: LV_PART_MAIN, State: LV_STATE_FOCUSED.
    lv_obj_set_style_bg_opa(ui->scr_downtime_btn_reaason_2, 255, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_bg_color(ui->scr_downtime_btn_reaason_2, lv_color_hex(0x2195f6), LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_bg_grad_dir(ui->scr_downtime_btn_reaason_2, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_border_width(ui->scr_downtime_btn_reaason_2, 0, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_radius(ui->scr_downtime_btn_reaason_2, 5, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_shadow_width(ui->scr_downtime_btn_reaason_2, 0, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_text_color(ui->scr_downtime_btn_reaason_2, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_text_font(ui->scr_downtime_btn_reaason_2, &lv_font_NotoSans_Bold_40, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_text_opa(ui->scr_downtime_btn_reaason_2, 255, LV_PART_MAIN|LV_STATE_FOCUSED);

    //Write codes scr_downtime_btn_reason_3
    ui->scr_downtime_btn_reason_3 = lv_button_create(ui->scr_downtime_cont_dt_center);
    lv_obj_set_pos(ui->scr_downtime_btn_reason_3, 11, 194);
    lv_obj_set_size(ui->scr_downtime_btn_reason_3, 400, 80);
    ui->scr_downtime_btn_reason_3_label = lv_label_create(ui->scr_downtime_btn_reason_3);
    lv_label_set_text(ui->scr_downtime_btn_reason_3_label, "METHOD");
    lv_label_set_long_mode(ui->scr_downtime_btn_reason_3_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->scr_downtime_btn_reason_3_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->scr_downtime_btn_reason_3, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->scr_downtime_btn_reason_3_label, LV_PCT(100));

    //Write style for scr_downtime_btn_reason_3, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->scr_downtime_btn_reason_3, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scr_downtime_btn_reason_3, lv_color_hex(0x586caa), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scr_downtime_btn_reason_3, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->scr_downtime_btn_reason_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_downtime_btn_reason_3, 8, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_downtime_btn_reason_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scr_downtime_btn_reason_3, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scr_downtime_btn_reason_3, &lv_font_NotoSans_Bold_40, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scr_downtime_btn_reason_3, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scr_downtime_btn_reason_3, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style for scr_downtime_btn_reason_3, Part: LV_PART_MAIN, State: LV_STATE_FOCUSED.
    lv_obj_set_style_bg_opa(ui->scr_downtime_btn_reason_3, 255, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_bg_color(ui->scr_downtime_btn_reason_3, lv_color_hex(0x2195f6), LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_bg_grad_dir(ui->scr_downtime_btn_reason_3, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_border_width(ui->scr_downtime_btn_reason_3, 0, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_radius(ui->scr_downtime_btn_reason_3, 5, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_shadow_width(ui->scr_downtime_btn_reason_3, 0, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_text_color(ui->scr_downtime_btn_reason_3, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_text_font(ui->scr_downtime_btn_reason_3, &lv_font_NotoSans_Bold_40, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_text_opa(ui->scr_downtime_btn_reason_3, 255, LV_PART_MAIN|LV_STATE_FOCUSED);

    //Write codes scr_downtime_btn_reason_4
    ui->scr_downtime_btn_reason_4 = lv_button_create(ui->scr_downtime_cont_dt_center);
    lv_obj_set_pos(ui->scr_downtime_btn_reason_4, 11, 285);
    lv_obj_set_size(ui->scr_downtime_btn_reason_4, 400, 80);
    ui->scr_downtime_btn_reason_4_label = lv_label_create(ui->scr_downtime_btn_reason_4);
    lv_label_set_text(ui->scr_downtime_btn_reason_4_label, "MAN");
    lv_label_set_long_mode(ui->scr_downtime_btn_reason_4_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->scr_downtime_btn_reason_4_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->scr_downtime_btn_reason_4, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->scr_downtime_btn_reason_4_label, LV_PCT(100));

    //Write style for scr_downtime_btn_reason_4, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->scr_downtime_btn_reason_4, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scr_downtime_btn_reason_4, lv_color_hex(0x586caa), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scr_downtime_btn_reason_4, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->scr_downtime_btn_reason_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_downtime_btn_reason_4, 8, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_downtime_btn_reason_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scr_downtime_btn_reason_4, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scr_downtime_btn_reason_4, &lv_font_NotoSans_Bold_40, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scr_downtime_btn_reason_4, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scr_downtime_btn_reason_4, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style for scr_downtime_btn_reason_4, Part: LV_PART_MAIN, State: LV_STATE_FOCUSED.
    lv_obj_set_style_bg_opa(ui->scr_downtime_btn_reason_4, 255, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_bg_color(ui->scr_downtime_btn_reason_4, lv_color_hex(0x2195f6), LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_bg_grad_dir(ui->scr_downtime_btn_reason_4, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_border_width(ui->scr_downtime_btn_reason_4, 0, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_radius(ui->scr_downtime_btn_reason_4, 5, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_shadow_width(ui->scr_downtime_btn_reason_4, 0, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_text_color(ui->scr_downtime_btn_reason_4, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_text_font(ui->scr_downtime_btn_reason_4, &lv_font_NotoSans_Bold_40, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_text_opa(ui->scr_downtime_btn_reason_4, 255, LV_PART_MAIN|LV_STATE_FOCUSED);

    //Write codes scr_downtime_btn_reason_5
    ui->scr_downtime_btn_reason_5 = lv_button_create(ui->scr_downtime_cont_dt_center);
    lv_obj_set_pos(ui->scr_downtime_btn_reason_5, 11, 376);
    lv_obj_set_size(ui->scr_downtime_btn_reason_5, 400, 80);
    ui->scr_downtime_btn_reason_5_label = lv_label_create(ui->scr_downtime_btn_reason_5);
    lv_label_set_text(ui->scr_downtime_btn_reason_5_label, "MEASUREMENT");
    lv_label_set_long_mode(ui->scr_downtime_btn_reason_5_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->scr_downtime_btn_reason_5_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->scr_downtime_btn_reason_5, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->scr_downtime_btn_reason_5_label, LV_PCT(100));

    //Write style for scr_downtime_btn_reason_5, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->scr_downtime_btn_reason_5, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scr_downtime_btn_reason_5, lv_color_hex(0x586caa), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scr_downtime_btn_reason_5, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->scr_downtime_btn_reason_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_downtime_btn_reason_5, 8, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_downtime_btn_reason_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scr_downtime_btn_reason_5, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scr_downtime_btn_reason_5, &lv_font_NotoSans_Bold_40, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scr_downtime_btn_reason_5, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scr_downtime_btn_reason_5, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style for scr_downtime_btn_reason_5, Part: LV_PART_MAIN, State: LV_STATE_FOCUSED.
    lv_obj_set_style_bg_opa(ui->scr_downtime_btn_reason_5, 255, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_bg_color(ui->scr_downtime_btn_reason_5, lv_color_hex(0x2195f6), LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_bg_grad_dir(ui->scr_downtime_btn_reason_5, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_border_width(ui->scr_downtime_btn_reason_5, 0, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_radius(ui->scr_downtime_btn_reason_5, 5, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_shadow_width(ui->scr_downtime_btn_reason_5, 0, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_text_color(ui->scr_downtime_btn_reason_5, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_text_font(ui->scr_downtime_btn_reason_5, &lv_font_NotoSans_Bold_40, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_text_opa(ui->scr_downtime_btn_reason_5, 255, LV_PART_MAIN|LV_STATE_FOCUSED);

    //Write codes scr_downtime_cont_dt_reason_detial
    ui->scr_downtime_cont_dt_reason_detial = lv_obj_create(ui->scr_downtime_cont_dt_center);
    lv_obj_set_pos(ui->scr_downtime_cont_dt_reason_detial, 422, 0);
    lv_obj_set_size(ui->scr_downtime_cont_dt_reason_detial, 805, 564);
    lv_obj_set_scrollbar_mode(ui->scr_downtime_cont_dt_reason_detial, LV_SCROLLBAR_MODE_OFF);

    //Write style for scr_downtime_cont_dt_reason_detial, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scr_downtime_cont_dt_reason_detial, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_downtime_cont_dt_reason_detial, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scr_downtime_cont_dt_reason_detial, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scr_downtime_cont_dt_reason_detial, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scr_downtime_cont_dt_reason_detial, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scr_downtime_cont_dt_reason_detial, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scr_downtime_cont_dt_reason_detial, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_downtime_cont_dt_reason_detial, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scr_downtime_lbl_dt_reason
    ui->scr_downtime_lbl_dt_reason = lv_label_create(ui->scr_downtime_cont_dt_reason_detial);
    lv_obj_set_pos(ui->scr_downtime_lbl_dt_reason, 4, 0);
    lv_obj_set_size(ui->scr_downtime_lbl_dt_reason, 439, 49);
    lv_label_set_text(ui->scr_downtime_lbl_dt_reason, "Detailed Reason");
    lv_label_set_long_mode(ui->scr_downtime_lbl_dt_reason, LV_LABEL_LONG_WRAP);

    //Write style for scr_downtime_lbl_dt_reason, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scr_downtime_lbl_dt_reason, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_downtime_lbl_dt_reason, 10, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scr_downtime_lbl_dt_reason, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scr_downtime_lbl_dt_reason, &lv_font_NotoSans_Bold_30, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scr_downtime_lbl_dt_reason, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->scr_downtime_lbl_dt_reason, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->scr_downtime_lbl_dt_reason, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scr_downtime_lbl_dt_reason, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scr_downtime_lbl_dt_reason, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scr_downtime_lbl_dt_reason, 10, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scr_downtime_lbl_dt_reason, 20, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scr_downtime_lbl_dt_reason, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scr_downtime_lbl_dt_reason, 20, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_downtime_lbl_dt_reason, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scr_downtime_ddlist_dt_reason
    ui->scr_downtime_ddlist_dt_reason = lv_dropdown_create(ui->scr_downtime_cont_dt_reason_detial);
    lv_obj_set_pos(ui->scr_downtime_ddlist_dt_reason, 22, 59);
    lv_obj_set_size(ui->scr_downtime_ddlist_dt_reason, 776, 90);
    lv_dropdown_set_options(ui->scr_downtime_ddlist_dt_reason, "None\nSensor Failure\nBelt Broken\nPower leak");

    //Write style for scr_downtime_ddlist_dt_reason, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_text_color(ui->scr_downtime_ddlist_dt_reason, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scr_downtime_ddlist_dt_reason, &lv_font_NotoSans_Regular_30, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scr_downtime_ddlist_dt_reason, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->scr_downtime_ddlist_dt_reason, 1, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->scr_downtime_ddlist_dt_reason, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->scr_downtime_ddlist_dt_reason, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->scr_downtime_ddlist_dt_reason, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scr_downtime_ddlist_dt_reason, 18, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scr_downtime_ddlist_dt_reason, 20, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scr_downtime_ddlist_dt_reason, 20, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_downtime_ddlist_dt_reason, 15, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scr_downtime_ddlist_dt_reason, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scr_downtime_ddlist_dt_reason, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scr_downtime_ddlist_dt_reason, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_downtime_ddlist_dt_reason, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style for scr_downtime_ddlist_dt_reason, Part: LV_PART_MAIN, State: LV_STATE_CHECKED.
    lv_obj_set_style_text_color(ui->scr_downtime_ddlist_dt_reason, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_text_font(ui->scr_downtime_ddlist_dt_reason, &lv_font_NotoSans_Regular_30, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_text_opa(ui->scr_downtime_ddlist_dt_reason, 255, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_border_width(ui->scr_downtime_ddlist_dt_reason, 1, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_border_opa(ui->scr_downtime_ddlist_dt_reason, 255, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_border_color(ui->scr_downtime_ddlist_dt_reason, lv_color_hex(0xe1e6ee), LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_border_side(ui->scr_downtime_ddlist_dt_reason, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_pad_top(ui->scr_downtime_ddlist_dt_reason, 18, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_pad_left(ui->scr_downtime_ddlist_dt_reason, 20, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_pad_right(ui->scr_downtime_ddlist_dt_reason, 6, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_radius(ui->scr_downtime_ddlist_dt_reason, 10, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_bg_opa(ui->scr_downtime_ddlist_dt_reason, 255, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_bg_color(ui->scr_downtime_ddlist_dt_reason, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_bg_grad_dir(ui->scr_downtime_ddlist_dt_reason, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_shadow_width(ui->scr_downtime_ddlist_dt_reason, 0, LV_PART_MAIN|LV_STATE_CHECKED);

    //Write style for scr_downtime_ddlist_dt_reason, Part: LV_PART_MAIN, State: LV_STATE_FOCUSED.
    lv_obj_set_style_text_color(ui->scr_downtime_ddlist_dt_reason, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_text_font(ui->scr_downtime_ddlist_dt_reason, &lv_font_NotoSans_Regular_30, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_text_opa(ui->scr_downtime_ddlist_dt_reason, 255, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_border_width(ui->scr_downtime_ddlist_dt_reason, 1, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_border_opa(ui->scr_downtime_ddlist_dt_reason, 255, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_border_color(ui->scr_downtime_ddlist_dt_reason, lv_color_hex(0xe1e6ee), LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_border_side(ui->scr_downtime_ddlist_dt_reason, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_pad_top(ui->scr_downtime_ddlist_dt_reason, 18, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_pad_left(ui->scr_downtime_ddlist_dt_reason, 20, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_pad_right(ui->scr_downtime_ddlist_dt_reason, 6, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_radius(ui->scr_downtime_ddlist_dt_reason, 10, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_bg_opa(ui->scr_downtime_ddlist_dt_reason, 255, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_bg_color(ui->scr_downtime_ddlist_dt_reason, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_bg_grad_dir(ui->scr_downtime_ddlist_dt_reason, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_shadow_width(ui->scr_downtime_ddlist_dt_reason, 0, LV_PART_MAIN|LV_STATE_FOCUSED);

    //Write style for scr_downtime_ddlist_dt_reason, Part: LV_PART_MAIN, State: LV_STATE_DISABLED.
    lv_obj_set_style_text_color(ui->scr_downtime_ddlist_dt_reason, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DISABLED);
    lv_obj_set_style_text_font(ui->scr_downtime_ddlist_dt_reason, &lv_font_NotoSans_Regular_30, LV_PART_MAIN|LV_STATE_DISABLED);
    lv_obj_set_style_text_opa(ui->scr_downtime_ddlist_dt_reason, 255, LV_PART_MAIN|LV_STATE_DISABLED);
    lv_obj_set_style_border_width(ui->scr_downtime_ddlist_dt_reason, 1, LV_PART_MAIN|LV_STATE_DISABLED);
    lv_obj_set_style_border_opa(ui->scr_downtime_ddlist_dt_reason, 255, LV_PART_MAIN|LV_STATE_DISABLED);
    lv_obj_set_style_border_color(ui->scr_downtime_ddlist_dt_reason, lv_color_hex(0xe1e6ee), LV_PART_MAIN|LV_STATE_DISABLED);
    lv_obj_set_style_border_side(ui->scr_downtime_ddlist_dt_reason, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DISABLED);
    lv_obj_set_style_pad_top(ui->scr_downtime_ddlist_dt_reason, 8, LV_PART_MAIN|LV_STATE_DISABLED);
    lv_obj_set_style_pad_left(ui->scr_downtime_ddlist_dt_reason, 20, LV_PART_MAIN|LV_STATE_DISABLED);
    lv_obj_set_style_pad_right(ui->scr_downtime_ddlist_dt_reason, 6, LV_PART_MAIN|LV_STATE_DISABLED);
    lv_obj_set_style_radius(ui->scr_downtime_ddlist_dt_reason, 10, LV_PART_MAIN|LV_STATE_DISABLED);
    lv_obj_set_style_bg_opa(ui->scr_downtime_ddlist_dt_reason, 255, LV_PART_MAIN|LV_STATE_DISABLED);
    lv_obj_set_style_bg_color(ui->scr_downtime_ddlist_dt_reason, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DISABLED);
    lv_obj_set_style_bg_grad_dir(ui->scr_downtime_ddlist_dt_reason, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DISABLED);
    lv_obj_set_style_shadow_width(ui->scr_downtime_ddlist_dt_reason, 0, LV_PART_MAIN|LV_STATE_DISABLED);

    //Write style state: LV_STATE_CHECKED for &style_scr_downtime_ddlist_dt_reason_extra_list_selected_checked
    static lv_style_t style_scr_downtime_ddlist_dt_reason_extra_list_selected_checked;
    ui_init_style(&style_scr_downtime_ddlist_dt_reason_extra_list_selected_checked);

    lv_style_set_border_width(&style_scr_downtime_ddlist_dt_reason_extra_list_selected_checked, 1);
    lv_style_set_border_opa(&style_scr_downtime_ddlist_dt_reason_extra_list_selected_checked, 255);
    lv_style_set_border_color(&style_scr_downtime_ddlist_dt_reason_extra_list_selected_checked, lv_color_hex(0xe1e6ee));
    lv_style_set_border_side(&style_scr_downtime_ddlist_dt_reason_extra_list_selected_checked, LV_BORDER_SIDE_FULL);
    lv_style_set_radius(&style_scr_downtime_ddlist_dt_reason_extra_list_selected_checked, 5);
    lv_style_set_bg_opa(&style_scr_downtime_ddlist_dt_reason_extra_list_selected_checked, 255);
    lv_style_set_bg_color(&style_scr_downtime_ddlist_dt_reason_extra_list_selected_checked, lv_color_hex(0x00a1b5));
    lv_style_set_bg_grad_dir(&style_scr_downtime_ddlist_dt_reason_extra_list_selected_checked, LV_GRAD_DIR_NONE);
    lv_obj_add_style(lv_dropdown_get_list(ui->scr_downtime_ddlist_dt_reason), &style_scr_downtime_ddlist_dt_reason_extra_list_selected_checked, LV_PART_SELECTED|LV_STATE_CHECKED);

    //Write style state: LV_STATE_DEFAULT for &style_scr_downtime_ddlist_dt_reason_extra_list_main_default
    static lv_style_t style_scr_downtime_ddlist_dt_reason_extra_list_main_default;
    ui_init_style(&style_scr_downtime_ddlist_dt_reason_extra_list_main_default);

    lv_style_set_max_height(&style_scr_downtime_ddlist_dt_reason_extra_list_main_default, 90);
    lv_style_set_text_color(&style_scr_downtime_ddlist_dt_reason_extra_list_main_default, lv_color_hex(0x000000));
    lv_style_set_text_font(&style_scr_downtime_ddlist_dt_reason_extra_list_main_default, &lv_font_arial_30);
    lv_style_set_text_opa(&style_scr_downtime_ddlist_dt_reason_extra_list_main_default, 255);
    lv_style_set_border_width(&style_scr_downtime_ddlist_dt_reason_extra_list_main_default, 1);
    lv_style_set_border_opa(&style_scr_downtime_ddlist_dt_reason_extra_list_main_default, 255);
    lv_style_set_border_color(&style_scr_downtime_ddlist_dt_reason_extra_list_main_default, lv_color_hex(0xe1e6ee));
    lv_style_set_border_side(&style_scr_downtime_ddlist_dt_reason_extra_list_main_default, LV_BORDER_SIDE_FULL);
    lv_style_set_radius(&style_scr_downtime_ddlist_dt_reason_extra_list_main_default, 3);
    lv_style_set_bg_opa(&style_scr_downtime_ddlist_dt_reason_extra_list_main_default, 255);
    lv_style_set_bg_color(&style_scr_downtime_ddlist_dt_reason_extra_list_main_default, lv_color_hex(0xffffff));
    lv_style_set_bg_grad_dir(&style_scr_downtime_ddlist_dt_reason_extra_list_main_default, LV_GRAD_DIR_NONE);
    lv_obj_add_style(lv_dropdown_get_list(ui->scr_downtime_ddlist_dt_reason), &style_scr_downtime_ddlist_dt_reason_extra_list_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style state: LV_STATE_DEFAULT for &style_scr_downtime_ddlist_dt_reason_extra_list_scrollbar_default
    static lv_style_t style_scr_downtime_ddlist_dt_reason_extra_list_scrollbar_default;
    ui_init_style(&style_scr_downtime_ddlist_dt_reason_extra_list_scrollbar_default);

    lv_style_set_radius(&style_scr_downtime_ddlist_dt_reason_extra_list_scrollbar_default, 5);
    lv_style_set_bg_opa(&style_scr_downtime_ddlist_dt_reason_extra_list_scrollbar_default, 255);
    lv_style_set_bg_color(&style_scr_downtime_ddlist_dt_reason_extra_list_scrollbar_default, lv_color_hex(0x494949));
    lv_style_set_bg_grad_dir(&style_scr_downtime_ddlist_dt_reason_extra_list_scrollbar_default, LV_GRAD_DIR_NONE);
    lv_obj_add_style(lv_dropdown_get_list(ui->scr_downtime_ddlist_dt_reason), &style_scr_downtime_ddlist_dt_reason_extra_list_scrollbar_default, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);

    //Write codes scr_downtime_lbl_dt_add_description
    ui->scr_downtime_lbl_dt_add_description = lv_label_create(ui->scr_downtime_cont_dt_reason_detial);
    lv_obj_set_pos(ui->scr_downtime_lbl_dt_add_description, 6, 193);
    lv_obj_set_size(ui->scr_downtime_lbl_dt_add_description, 691, 42);
    lv_label_set_text(ui->scr_downtime_lbl_dt_add_description, "Additional Description (Optional)");
    lv_label_set_long_mode(ui->scr_downtime_lbl_dt_add_description, LV_LABEL_LONG_WRAP);

    //Write style for scr_downtime_lbl_dt_add_description, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scr_downtime_lbl_dt_add_description, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_downtime_lbl_dt_add_description, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scr_downtime_lbl_dt_add_description, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scr_downtime_lbl_dt_add_description, &lv_font_NotoSans_Bold_30, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scr_downtime_lbl_dt_add_description, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->scr_downtime_lbl_dt_add_description, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->scr_downtime_lbl_dt_add_description, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scr_downtime_lbl_dt_add_description, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scr_downtime_lbl_dt_add_description, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scr_downtime_lbl_dt_add_description, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scr_downtime_lbl_dt_add_description, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scr_downtime_lbl_dt_add_description, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scr_downtime_lbl_dt_add_description, 20, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_downtime_lbl_dt_add_description, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scr_downtime_ta_dt_note_reason_stop
    ui->scr_downtime_ta_dt_note_reason_stop = lv_textarea_create(ui->scr_downtime_cont_dt_reason_detial);
    lv_obj_set_pos(ui->scr_downtime_ta_dt_note_reason_stop, 21, 241);
    lv_obj_set_size(ui->scr_downtime_ta_dt_note_reason_stop, 779, 90);
    lv_textarea_set_text(ui->scr_downtime_ta_dt_note_reason_stop, "Describe the issue in detail...");
    lv_textarea_set_placeholder_text(ui->scr_downtime_ta_dt_note_reason_stop, "");
    lv_textarea_set_password_bullet(ui->scr_downtime_ta_dt_note_reason_stop, "*");
    lv_textarea_set_password_mode(ui->scr_downtime_ta_dt_note_reason_stop, false);
    lv_textarea_set_one_line(ui->scr_downtime_ta_dt_note_reason_stop, false);
    lv_textarea_set_accepted_chars(ui->scr_downtime_ta_dt_note_reason_stop, "");
    lv_textarea_set_max_length(ui->scr_downtime_ta_dt_note_reason_stop, 32);
#if LV_USE_KEYBOARD
    lv_obj_add_event_cb(ui->scr_downtime_ta_dt_note_reason_stop, ta_event_cb, LV_EVENT_ALL, ui->g_kb_top_layer);
#endif

    //Write style for scr_downtime_ta_dt_note_reason_stop, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_text_color(ui->scr_downtime_ta_dt_note_reason_stop, lv_color_hex(0xABABAB), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scr_downtime_ta_dt_note_reason_stop, &lv_font_NotoSans_Regular_30, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scr_downtime_ta_dt_note_reason_stop, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->scr_downtime_ta_dt_note_reason_stop, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scr_downtime_ta_dt_note_reason_stop, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scr_downtime_ta_dt_note_reason_stop, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scr_downtime_ta_dt_note_reason_stop, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scr_downtime_ta_dt_note_reason_stop, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->scr_downtime_ta_dt_note_reason_stop, 1, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->scr_downtime_ta_dt_note_reason_stop, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->scr_downtime_ta_dt_note_reason_stop, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->scr_downtime_ta_dt_note_reason_stop, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_downtime_ta_dt_note_reason_stop, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scr_downtime_ta_dt_note_reason_stop, 25, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scr_downtime_ta_dt_note_reason_stop, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scr_downtime_ta_dt_note_reason_stop, 20, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_downtime_ta_dt_note_reason_stop, 15, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style for scr_downtime_ta_dt_note_reason_stop, Part: LV_PART_MAIN, State: LV_STATE_FOCUSED.
    lv_obj_set_style_text_color(ui->scr_downtime_ta_dt_note_reason_stop, lv_color_hex(0xABABAB), LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_text_font(ui->scr_downtime_ta_dt_note_reason_stop, &lv_font_NotoSans_Regular_30, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_text_opa(ui->scr_downtime_ta_dt_note_reason_stop, 255, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_bg_opa(ui->scr_downtime_ta_dt_note_reason_stop, 255, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_bg_color(ui->scr_downtime_ta_dt_note_reason_stop, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_bg_grad_dir(ui->scr_downtime_ta_dt_note_reason_stop, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_border_width(ui->scr_downtime_ta_dt_note_reason_stop, 2, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_border_opa(ui->scr_downtime_ta_dt_note_reason_stop, 255, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_border_color(ui->scr_downtime_ta_dt_note_reason_stop, lv_color_hex(0xe6e6e6), LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_border_side(ui->scr_downtime_ta_dt_note_reason_stop, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_shadow_width(ui->scr_downtime_ta_dt_note_reason_stop, 0, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_pad_top(ui->scr_downtime_ta_dt_note_reason_stop, 4, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_pad_right(ui->scr_downtime_ta_dt_note_reason_stop, 4, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_pad_left(ui->scr_downtime_ta_dt_note_reason_stop, 4, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_radius(ui->scr_downtime_ta_dt_note_reason_stop, 4, LV_PART_MAIN|LV_STATE_FOCUSED);

    //Write style for scr_downtime_ta_dt_note_reason_stop, Part: LV_PART_SCROLLBAR, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->scr_downtime_ta_dt_note_reason_stop, 0, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_downtime_ta_dt_note_reason_stop, 0, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);

    //Write style for scr_downtime_ta_dt_note_reason_stop, Part: LV_PART_SCROLLBAR, State: LV_STATE_FOCUSED.
    lv_obj_set_style_bg_opa(ui->scr_downtime_ta_dt_note_reason_stop, 0, LV_PART_SCROLLBAR|LV_STATE_FOCUSED);
    lv_obj_set_style_radius(ui->scr_downtime_ta_dt_note_reason_stop, 0, LV_PART_SCROLLBAR|LV_STATE_FOCUSED);

    //Write codes scr_downtime_btn_dt_cancel
    ui->scr_downtime_btn_dt_cancel = lv_button_create(ui->scr_downtime_cont_dt_reason_detial);
    lv_obj_set_pos(ui->scr_downtime_btn_dt_cancel, 184, 458);
    lv_obj_set_size(ui->scr_downtime_btn_dt_cancel, 300, 70);
    ui->scr_downtime_btn_dt_cancel_label = lv_label_create(ui->scr_downtime_btn_dt_cancel);
    lv_label_set_text(ui->scr_downtime_btn_dt_cancel_label, "CANCEL");
    lv_label_set_long_mode(ui->scr_downtime_btn_dt_cancel_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->scr_downtime_btn_dt_cancel_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->scr_downtime_btn_dt_cancel, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->scr_downtime_btn_dt_cancel_label, LV_PCT(100));

    //Write style for scr_downtime_btn_dt_cancel, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->scr_downtime_btn_dt_cancel, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scr_downtime_btn_dt_cancel, lv_color_hex(0x717171), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scr_downtime_btn_dt_cancel, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->scr_downtime_btn_dt_cancel, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_downtime_btn_dt_cancel, 10, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_downtime_btn_dt_cancel, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scr_downtime_btn_dt_cancel, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scr_downtime_btn_dt_cancel, &lv_font_NotoSans_Bold_30, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scr_downtime_btn_dt_cancel, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scr_downtime_btn_dt_cancel, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scr_downtime_btn_dt_submit
    ui->scr_downtime_btn_dt_submit = lv_button_create(ui->scr_downtime_cont_dt_reason_detial);
    lv_obj_set_pos(ui->scr_downtime_btn_dt_submit, 500, 458);
    lv_obj_set_size(ui->scr_downtime_btn_dt_submit, 300, 70);
    ui->scr_downtime_btn_dt_submit_label = lv_label_create(ui->scr_downtime_btn_dt_submit);
    lv_label_set_text(ui->scr_downtime_btn_dt_submit_label, "CONFIRM");
    lv_label_set_long_mode(ui->scr_downtime_btn_dt_submit_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->scr_downtime_btn_dt_submit_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->scr_downtime_btn_dt_submit, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->scr_downtime_btn_dt_submit_label, LV_PCT(100));

    //Write style for scr_downtime_btn_dt_submit, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->scr_downtime_btn_dt_submit, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scr_downtime_btn_dt_submit, lv_color_hex(0x1c4567), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scr_downtime_btn_dt_submit, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->scr_downtime_btn_dt_submit, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_downtime_btn_dt_submit, 10, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_downtime_btn_dt_submit, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scr_downtime_btn_dt_submit, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scr_downtime_btn_dt_submit, &lv_font_NotoSans_Bold_30, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scr_downtime_btn_dt_submit, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scr_downtime_btn_dt_submit, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //The custom code of scr_downtime.


    //Update current screen layout.
    lv_obj_update_layout(ui->scr_downtime);

    //Init events for screen.
    events_init_scr_downtime(ui);
}
