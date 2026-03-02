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
    lv_obj_set_pos(ui->scr_downtime_cont_dt, 24, 31);
    lv_obj_set_size(ui->scr_downtime_cont_dt, 1232, 672);
    lv_obj_set_scrollbar_mode(ui->scr_downtime_cont_dt, LV_SCROLLBAR_MODE_OFF);

    //Write style for scr_downtime_cont_dt, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scr_downtime_cont_dt, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_downtime_cont_dt, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scr_downtime_cont_dt, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scr_downtime_cont_dt, lv_color_hex(0x151515), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scr_downtime_cont_dt, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scr_downtime_cont_dt, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scr_downtime_cont_dt, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scr_downtime_cont_dt, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scr_downtime_cont_dt, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_downtime_cont_dt, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scr_downtime_cont_dt_topbar
    ui->scr_downtime_cont_dt_topbar = lv_obj_create(ui->scr_downtime_cont_dt);
    lv_obj_set_pos(ui->scr_downtime_cont_dt_topbar, 0, 0);
    lv_obj_set_size(ui->scr_downtime_cont_dt_topbar, 1232, 80);
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
    lv_obj_set_pos(ui->scr_downtime_lbl_machine_status, 4, 24);
    lv_obj_set_size(ui->scr_downtime_lbl_machine_status, 323, 32);
    lv_label_set_text(ui->scr_downtime_lbl_machine_status, "MACHINE STOPPED");
    lv_label_set_long_mode(ui->scr_downtime_lbl_machine_status, LV_LABEL_LONG_WRAP);

    //Write style for scr_downtime_lbl_machine_status, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scr_downtime_lbl_machine_status, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_downtime_lbl_machine_status, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scr_downtime_lbl_machine_status, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scr_downtime_lbl_machine_status, &lv_font_Acme_Regular_34, LV_PART_MAIN|LV_STATE_DEFAULT);
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

    //Write codes scr_downtime_lbl_timer
    ui->scr_downtime_lbl_timer = lv_label_create(ui->scr_downtime_cont_dt_topbar);
    lv_obj_set_pos(ui->scr_downtime_lbl_timer, 968, 24);
    lv_obj_set_size(ui->scr_downtime_lbl_timer, 258, 32);
    lv_label_set_text(ui->scr_downtime_lbl_timer, "TIME: 00:00:01");
    lv_label_set_long_mode(ui->scr_downtime_lbl_timer, LV_LABEL_LONG_WRAP);

    //Write style for scr_downtime_lbl_timer, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scr_downtime_lbl_timer, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_downtime_lbl_timer, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scr_downtime_lbl_timer, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scr_downtime_lbl_timer, &lv_font_Acme_Regular_34, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scr_downtime_lbl_timer, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->scr_downtime_lbl_timer, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->scr_downtime_lbl_timer, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scr_downtime_lbl_timer, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scr_downtime_lbl_timer, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scr_downtime_lbl_timer, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scr_downtime_lbl_timer, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scr_downtime_lbl_timer, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scr_downtime_lbl_timer, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_downtime_lbl_timer, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scr_downtime_cont_dt_center
    ui->scr_downtime_cont_dt_center = lv_obj_create(ui->scr_downtime_cont_dt);
    lv_obj_set_pos(ui->scr_downtime_cont_dt_center, 0, 100);
    lv_obj_set_size(ui->scr_downtime_cont_dt_center, 1232, 574);
    lv_obj_set_scrollbar_mode(ui->scr_downtime_cont_dt_center, LV_SCROLLBAR_MODE_OFF);

    //Write style for scr_downtime_cont_dt_center, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scr_downtime_cont_dt_center, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_downtime_cont_dt_center, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scr_downtime_cont_dt_center, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scr_downtime_cont_dt_center, lv_color_hex(0x1f1f1f), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scr_downtime_cont_dt_center, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scr_downtime_cont_dt_center, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scr_downtime_cont_dt_center, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scr_downtime_cont_dt_center, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scr_downtime_cont_dt_center, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_downtime_cont_dt_center, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scr_downtime_cont_dt_left
    ui->scr_downtime_cont_dt_left = lv_obj_create(ui->scr_downtime_cont_dt_center);
    lv_obj_set_pos(ui->scr_downtime_cont_dt_left, 0, 0);
    lv_obj_set_size(ui->scr_downtime_cont_dt_left, 360, 574);
    lv_obj_set_scrollbar_mode(ui->scr_downtime_cont_dt_left, LV_SCROLLBAR_MODE_OFF);

    //Write style for scr_downtime_cont_dt_left, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scr_downtime_cont_dt_left, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_downtime_cont_dt_left, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scr_downtime_cont_dt_left, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scr_downtime_cont_dt_left, lv_color_hex(0x1e1e1e), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scr_downtime_cont_dt_left, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scr_downtime_cont_dt_left, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scr_downtime_cont_dt_left, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scr_downtime_cont_dt_left, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scr_downtime_cont_dt_left, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_downtime_cont_dt_left, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scr_downtime_btn_g_machine
    ui->scr_downtime_btn_g_machine = lv_button_create(ui->scr_downtime_cont_dt_left);
    lv_obj_set_pos(ui->scr_downtime_btn_g_machine, 0, 0);
    lv_obj_set_size(ui->scr_downtime_btn_g_machine, 360, 90);
    ui->scr_downtime_btn_g_machine_label = lv_label_create(ui->scr_downtime_btn_g_machine);
    lv_label_set_text(ui->scr_downtime_btn_g_machine_label, "     MACHINE");
    lv_label_set_long_mode(ui->scr_downtime_btn_g_machine_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->scr_downtime_btn_g_machine_label, LV_ALIGN_LEFT_MID, 0, 0);
    lv_obj_set_style_pad_all(ui->scr_downtime_btn_g_machine, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->scr_downtime_btn_g_machine_label, LV_PCT(100));

    //Write style for scr_downtime_btn_g_machine, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->scr_downtime_btn_g_machine, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scr_downtime_btn_g_machine, lv_color_hex(0x242424), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scr_downtime_btn_g_machine, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->scr_downtime_btn_g_machine, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_downtime_btn_g_machine, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_downtime_btn_g_machine, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scr_downtime_btn_g_machine, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scr_downtime_btn_g_machine, &lv_font_Acme_Regular_30, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scr_downtime_btn_g_machine, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scr_downtime_btn_g_machine, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scr_downtime_btn_g_material
    ui->scr_downtime_btn_g_material = lv_button_create(ui->scr_downtime_cont_dt_left);
    lv_obj_set_pos(ui->scr_downtime_btn_g_material, 0, 92);
    lv_obj_set_size(ui->scr_downtime_btn_g_material, 360, 90);
    ui->scr_downtime_btn_g_material_label = lv_label_create(ui->scr_downtime_btn_g_material);
    lv_label_set_text(ui->scr_downtime_btn_g_material_label, "     MATERIAL");
    lv_label_set_long_mode(ui->scr_downtime_btn_g_material_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->scr_downtime_btn_g_material_label, LV_ALIGN_LEFT_MID, 0, 0);
    lv_obj_set_style_pad_all(ui->scr_downtime_btn_g_material, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->scr_downtime_btn_g_material_label, LV_PCT(100));

    //Write style for scr_downtime_btn_g_material, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->scr_downtime_btn_g_material, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scr_downtime_btn_g_material, lv_color_hex(0x242424), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scr_downtime_btn_g_material, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->scr_downtime_btn_g_material, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_downtime_btn_g_material, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_downtime_btn_g_material, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scr_downtime_btn_g_material, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scr_downtime_btn_g_material, &lv_font_Acme_Regular_30, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scr_downtime_btn_g_material, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scr_downtime_btn_g_material, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scr_downtime_btn_g_man
    ui->scr_downtime_btn_g_man = lv_button_create(ui->scr_downtime_cont_dt_left);
    lv_obj_set_pos(ui->scr_downtime_btn_g_man, 0, 184);
    lv_obj_set_size(ui->scr_downtime_btn_g_man, 360, 90);
    ui->scr_downtime_btn_g_man_label = lv_label_create(ui->scr_downtime_btn_g_man);
    lv_label_set_text(ui->scr_downtime_btn_g_man_label, "     MAN");
    lv_label_set_long_mode(ui->scr_downtime_btn_g_man_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->scr_downtime_btn_g_man_label, LV_ALIGN_LEFT_MID, 0, 0);
    lv_obj_set_style_pad_all(ui->scr_downtime_btn_g_man, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->scr_downtime_btn_g_man_label, LV_PCT(100));

    //Write style for scr_downtime_btn_g_man, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->scr_downtime_btn_g_man, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scr_downtime_btn_g_man, lv_color_hex(0x242424), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scr_downtime_btn_g_man, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->scr_downtime_btn_g_man, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_downtime_btn_g_man, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_downtime_btn_g_man, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scr_downtime_btn_g_man, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scr_downtime_btn_g_man, &lv_font_Acme_Regular_30, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scr_downtime_btn_g_man, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scr_downtime_btn_g_man, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scr_downtime_btn_g_method
    ui->scr_downtime_btn_g_method = lv_button_create(ui->scr_downtime_cont_dt_left);
    lv_obj_set_pos(ui->scr_downtime_btn_g_method, 2, 276);
    lv_obj_set_size(ui->scr_downtime_btn_g_method, 360, 90);
    ui->scr_downtime_btn_g_method_label = lv_label_create(ui->scr_downtime_btn_g_method);
    lv_label_set_text(ui->scr_downtime_btn_g_method_label, "     METHOD");
    lv_label_set_long_mode(ui->scr_downtime_btn_g_method_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->scr_downtime_btn_g_method_label, LV_ALIGN_LEFT_MID, 0, 0);
    lv_obj_set_style_pad_all(ui->scr_downtime_btn_g_method, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->scr_downtime_btn_g_method_label, LV_PCT(100));

    //Write style for scr_downtime_btn_g_method, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->scr_downtime_btn_g_method, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scr_downtime_btn_g_method, lv_color_hex(0x242424), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scr_downtime_btn_g_method, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->scr_downtime_btn_g_method, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_downtime_btn_g_method, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_downtime_btn_g_method, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scr_downtime_btn_g_method, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scr_downtime_btn_g_method, &lv_font_Acme_Regular_30, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scr_downtime_btn_g_method, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scr_downtime_btn_g_method, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scr_downtime_btn_g_other
    ui->scr_downtime_btn_g_other = lv_button_create(ui->scr_downtime_cont_dt_left);
    lv_obj_set_pos(ui->scr_downtime_btn_g_other, 0, 368);
    lv_obj_set_size(ui->scr_downtime_btn_g_other, 360, 90);
    ui->scr_downtime_btn_g_other_label = lv_label_create(ui->scr_downtime_btn_g_other);
    lv_label_set_text(ui->scr_downtime_btn_g_other_label, "     OTHER");
    lv_label_set_long_mode(ui->scr_downtime_btn_g_other_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->scr_downtime_btn_g_other_label, LV_ALIGN_LEFT_MID, 0, 0);
    lv_obj_set_style_pad_all(ui->scr_downtime_btn_g_other, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->scr_downtime_btn_g_other_label, LV_PCT(100));

    //Write style for scr_downtime_btn_g_other, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->scr_downtime_btn_g_other, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scr_downtime_btn_g_other, lv_color_hex(0x242424), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scr_downtime_btn_g_other, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->scr_downtime_btn_g_other, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_downtime_btn_g_other, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_downtime_btn_g_other, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scr_downtime_btn_g_other, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scr_downtime_btn_g_other, &lv_font_Acme_Regular_30, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scr_downtime_btn_g_other, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scr_downtime_btn_g_other, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scr_downtime_cont_dt_right
    ui->scr_downtime_cont_dt_right = lv_obj_create(ui->scr_downtime_cont_dt_center);
    lv_obj_set_pos(ui->scr_downtime_cont_dt_right, 370, 1);
    lv_obj_set_size(ui->scr_downtime_cont_dt_right, 854, 574);
    lv_obj_set_scrollbar_mode(ui->scr_downtime_cont_dt_right, LV_SCROLLBAR_MODE_OFF);

    //Write style for scr_downtime_cont_dt_right, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scr_downtime_cont_dt_right, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_downtime_cont_dt_right, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scr_downtime_cont_dt_right, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scr_downtime_cont_dt_right, lv_color_hex(0x1e1e1e), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scr_downtime_cont_dt_right, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scr_downtime_cont_dt_right, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scr_downtime_cont_dt_right, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scr_downtime_cont_dt_right, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scr_downtime_cont_dt_right, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_downtime_cont_dt_right, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scr_downtime_cont_dt_reason_box
    ui->scr_downtime_cont_dt_reason_box = lv_obj_create(ui->scr_downtime_cont_dt_right);
    lv_obj_set_pos(ui->scr_downtime_cont_dt_reason_box, 0, 0);
    lv_obj_set_size(ui->scr_downtime_cont_dt_reason_box, 854, 300);
    lv_obj_set_scrollbar_mode(ui->scr_downtime_cont_dt_reason_box, LV_SCROLLBAR_MODE_OFF);

    //Write style for scr_downtime_cont_dt_reason_box, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scr_downtime_cont_dt_reason_box, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_downtime_cont_dt_reason_box, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scr_downtime_cont_dt_reason_box, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scr_downtime_cont_dt_reason_box, lv_color_hex(0x1e1e1e), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scr_downtime_cont_dt_reason_box, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scr_downtime_cont_dt_reason_box, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scr_downtime_cont_dt_reason_box, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scr_downtime_cont_dt_reason_box, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scr_downtime_cont_dt_reason_box, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_downtime_cont_dt_reason_box, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scr_downtime_btn_2
    ui->scr_downtime_btn_2 = lv_button_create(ui->scr_downtime_cont_dt_reason_box);
    lv_obj_set_pos(ui->scr_downtime_btn_2, 27, 184);
    lv_obj_set_size(ui->scr_downtime_btn_2, 800, 90);
    ui->scr_downtime_btn_2_label = lv_label_create(ui->scr_downtime_btn_2);
    lv_label_set_text(ui->scr_downtime_btn_2_label, "     Power Loss");
    lv_label_set_long_mode(ui->scr_downtime_btn_2_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->scr_downtime_btn_2_label, LV_ALIGN_LEFT_MID, 0, 0);
    lv_obj_set_style_pad_all(ui->scr_downtime_btn_2, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->scr_downtime_btn_2_label, LV_PCT(100));

    //Write style for scr_downtime_btn_2, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->scr_downtime_btn_2, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scr_downtime_btn_2, lv_color_hex(0x242424), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scr_downtime_btn_2, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->scr_downtime_btn_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_downtime_btn_2, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_downtime_btn_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scr_downtime_btn_2, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scr_downtime_btn_2, &lv_font_Acme_Regular_30, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scr_downtime_btn_2, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scr_downtime_btn_2, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scr_downtime_btn_1
    ui->scr_downtime_btn_1 = lv_button_create(ui->scr_downtime_cont_dt_reason_box);
    lv_obj_set_pos(ui->scr_downtime_btn_1, 27, 92);
    lv_obj_set_size(ui->scr_downtime_btn_1, 800, 90);
    ui->scr_downtime_btn_1_label = lv_label_create(ui->scr_downtime_btn_1);
    lv_label_set_text(ui->scr_downtime_btn_1_label, "     Motor Overheat");
    lv_label_set_long_mode(ui->scr_downtime_btn_1_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->scr_downtime_btn_1_label, LV_ALIGN_LEFT_MID, 0, 0);
    lv_obj_set_style_pad_all(ui->scr_downtime_btn_1, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->scr_downtime_btn_1_label, LV_PCT(100));

    //Write style for scr_downtime_btn_1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->scr_downtime_btn_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scr_downtime_btn_1, lv_color_hex(0x242424), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scr_downtime_btn_1, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->scr_downtime_btn_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_downtime_btn_1, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_downtime_btn_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scr_downtime_btn_1, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scr_downtime_btn_1, &lv_font_Acme_Regular_30, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scr_downtime_btn_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scr_downtime_btn_1, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scr_downtime_btn_machine_1
    ui->scr_downtime_btn_machine_1 = lv_button_create(ui->scr_downtime_cont_dt_reason_box);
    lv_obj_set_pos(ui->scr_downtime_btn_machine_1, 27, 0);
    lv_obj_set_size(ui->scr_downtime_btn_machine_1, 800, 90);
    ui->scr_downtime_btn_machine_1_label = lv_label_create(ui->scr_downtime_btn_machine_1);
    lv_label_set_text(ui->scr_downtime_btn_machine_1_label, "      Mechanical Failure");
    lv_label_set_long_mode(ui->scr_downtime_btn_machine_1_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->scr_downtime_btn_machine_1_label, LV_ALIGN_LEFT_MID, 0, 0);
    lv_obj_set_style_pad_all(ui->scr_downtime_btn_machine_1, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->scr_downtime_btn_machine_1_label, LV_PCT(100));

    //Write style for scr_downtime_btn_machine_1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->scr_downtime_btn_machine_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scr_downtime_btn_machine_1, lv_color_hex(0x242424), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scr_downtime_btn_machine_1, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->scr_downtime_btn_machine_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_downtime_btn_machine_1, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_downtime_btn_machine_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scr_downtime_btn_machine_1, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scr_downtime_btn_machine_1, &lv_font_Acme_Regular_30, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scr_downtime_btn_machine_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scr_downtime_btn_machine_1, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scr_downtime_ta_dt_note
    ui->scr_downtime_ta_dt_note = lv_textarea_create(ui->scr_downtime_cont_dt_right);
    lv_obj_set_pos(ui->scr_downtime_ta_dt_note, 27, 297);
    lv_obj_set_size(ui->scr_downtime_ta_dt_note, 800, 80);
    lv_textarea_set_text(ui->scr_downtime_ta_dt_note, "Note here...");
    lv_textarea_set_placeholder_text(ui->scr_downtime_ta_dt_note, "");
    lv_textarea_set_password_bullet(ui->scr_downtime_ta_dt_note, "*");
    lv_textarea_set_password_mode(ui->scr_downtime_ta_dt_note, false);
    lv_textarea_set_one_line(ui->scr_downtime_ta_dt_note, false);
    lv_textarea_set_accepted_chars(ui->scr_downtime_ta_dt_note, "");
    lv_textarea_set_max_length(ui->scr_downtime_ta_dt_note, 32);
#if LV_USE_KEYBOARD
    lv_obj_add_event_cb(ui->scr_downtime_ta_dt_note, ta_event_cb, LV_EVENT_ALL, ui->g_kb_top_layer);
#endif

    //Write style for scr_downtime_ta_dt_note, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_text_color(ui->scr_downtime_ta_dt_note, lv_color_hex(0xa9a9a9), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scr_downtime_ta_dt_note, &lv_font_Adventpro_regular_26, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scr_downtime_ta_dt_note, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->scr_downtime_ta_dt_note, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scr_downtime_ta_dt_note, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scr_downtime_ta_dt_note, 202, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scr_downtime_ta_dt_note, lv_color_hex(0x101010), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scr_downtime_ta_dt_note, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->scr_downtime_ta_dt_note, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->scr_downtime_ta_dt_note, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->scr_downtime_ta_dt_note, lv_color_hex(0xe6e6e6), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->scr_downtime_ta_dt_note, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_downtime_ta_dt_note, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scr_downtime_ta_dt_note, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scr_downtime_ta_dt_note, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scr_downtime_ta_dt_note, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_downtime_ta_dt_note, 4, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style for scr_downtime_ta_dt_note, Part: LV_PART_SCROLLBAR, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->scr_downtime_ta_dt_note, 255, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scr_downtime_ta_dt_note, lv_color_hex(0x2195f6), LV_PART_SCROLLBAR|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scr_downtime_ta_dt_note, LV_GRAD_DIR_NONE, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_downtime_ta_dt_note, 0, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);

    //Write codes scr_downtime_btn_dt_
    ui->scr_downtime_btn_dt_ = lv_button_create(ui->scr_downtime_cont_dt_right);
    lv_obj_set_pos(ui->scr_downtime_btn_dt_, 26, 400);
    lv_obj_set_size(ui->scr_downtime_btn_dt_, 800, 90);
    ui->scr_downtime_btn_dt__label = lv_label_create(ui->scr_downtime_btn_dt_);
    lv_label_set_text(ui->scr_downtime_btn_dt__label, "SUBMIT & START");
    lv_label_set_long_mode(ui->scr_downtime_btn_dt__label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->scr_downtime_btn_dt__label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->scr_downtime_btn_dt_, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->scr_downtime_btn_dt__label, LV_PCT(100));

    //Write style for scr_downtime_btn_dt_, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->scr_downtime_btn_dt_, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scr_downtime_btn_dt_, lv_color_hex(0x2FDA64), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scr_downtime_btn_dt_, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->scr_downtime_btn_dt_, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_downtime_btn_dt_, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_downtime_btn_dt_, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scr_downtime_btn_dt_, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scr_downtime_btn_dt_, &lv_font_Acme_Regular_30, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scr_downtime_btn_dt_, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scr_downtime_btn_dt_, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //The custom code of scr_downtime.


    //Update current screen layout.
    lv_obj_update_layout(ui->scr_downtime);

    //Init events for screen.
    events_init_scr_downtime(ui);
}
