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
    lv_obj_set_pos(ui->scr_downtime_cont_dt, 24, 0);
    lv_obj_set_size(ui->scr_downtime_cont_dt, 1232, 690);
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
    lv_obj_set_pos(ui->scr_downtime_lbl_machine_status, 478, 29);
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

    //Write codes scr_downtime_lbl_stop_timer
    ui->scr_downtime_lbl_stop_timer = lv_label_create(ui->scr_downtime_cont_dt_topbar);
    lv_obj_set_pos(ui->scr_downtime_lbl_stop_timer, 968, 29);
    lv_obj_set_size(ui->scr_downtime_lbl_stop_timer, 258, 32);
    lv_label_set_text(ui->scr_downtime_lbl_stop_timer, "TIME: 00:00:01");
    lv_label_set_long_mode(ui->scr_downtime_lbl_stop_timer, LV_LABEL_LONG_WRAP);

    //Write style for scr_downtime_lbl_stop_timer, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scr_downtime_lbl_stop_timer, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_downtime_lbl_stop_timer, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scr_downtime_lbl_stop_timer, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scr_downtime_lbl_stop_timer, &lv_font_Acme_Regular_34, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scr_downtime_lbl_stop_timer, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->scr_downtime_lbl_stop_timer, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->scr_downtime_lbl_stop_timer, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scr_downtime_lbl_stop_timer, LV_TEXT_ALIGN_RIGHT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scr_downtime_lbl_stop_timer, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scr_downtime_lbl_stop_timer, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scr_downtime_lbl_stop_timer, 20, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scr_downtime_lbl_stop_timer, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scr_downtime_lbl_stop_timer, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_downtime_lbl_stop_timer, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scr_downtime_imgbtn_back
    ui->scr_downtime_imgbtn_back = lv_imagebutton_create(ui->scr_downtime_cont_dt_topbar);
    lv_obj_set_pos(ui->scr_downtime_imgbtn_back, 20, 13);
    lv_obj_set_size(ui->scr_downtime_imgbtn_back, 64, 64);
    lv_imagebutton_set_src(ui->scr_downtime_imgbtn_back, LV_IMAGEBUTTON_STATE_RELEASED, &_leftarrow_RGB565A8_64x64, NULL, NULL);
    ui->scr_downtime_imgbtn_back_label = lv_label_create(ui->scr_downtime_imgbtn_back);
    lv_label_set_text(ui->scr_downtime_imgbtn_back_label, "");
    lv_label_set_long_mode(ui->scr_downtime_imgbtn_back_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->scr_downtime_imgbtn_back_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->scr_downtime_imgbtn_back, 0, LV_STATE_DEFAULT);

    //Write style for scr_downtime_imgbtn_back, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_text_color(ui->scr_downtime_imgbtn_back, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scr_downtime_imgbtn_back, &lv_font_montserratMedium_12, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scr_downtime_imgbtn_back, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scr_downtime_imgbtn_back, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_downtime_imgbtn_back, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style for scr_downtime_imgbtn_back, Part: LV_PART_MAIN, State: LV_STATE_PRESSED.
    lv_obj_set_style_image_recolor_opa(ui->scr_downtime_imgbtn_back, 0, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_image_opa(ui->scr_downtime_imgbtn_back, 255, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_text_color(ui->scr_downtime_imgbtn_back, lv_color_hex(0xFF33FF), LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_text_font(ui->scr_downtime_imgbtn_back, &lv_font_montserratMedium_12, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_text_opa(ui->scr_downtime_imgbtn_back, 255, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_shadow_width(ui->scr_downtime_imgbtn_back, 0, LV_PART_MAIN|LV_STATE_PRESSED);

    //Write style for scr_downtime_imgbtn_back, Part: LV_PART_MAIN, State: LV_STATE_CHECKED.
    lv_obj_set_style_image_recolor_opa(ui->scr_downtime_imgbtn_back, 0, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_image_opa(ui->scr_downtime_imgbtn_back, 255, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_text_color(ui->scr_downtime_imgbtn_back, lv_color_hex(0xFF33FF), LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_text_font(ui->scr_downtime_imgbtn_back, &lv_font_montserratMedium_12, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_text_opa(ui->scr_downtime_imgbtn_back, 255, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_shadow_width(ui->scr_downtime_imgbtn_back, 0, LV_PART_MAIN|LV_STATE_CHECKED);

    //Write style for scr_downtime_imgbtn_back, Part: LV_PART_MAIN, State: LV_IMAGEBUTTON_STATE_RELEASED.
    lv_obj_set_style_image_recolor_opa(ui->scr_downtime_imgbtn_back, 0, LV_PART_MAIN|LV_IMAGEBUTTON_STATE_RELEASED);
    lv_obj_set_style_image_opa(ui->scr_downtime_imgbtn_back, 255, LV_PART_MAIN|LV_IMAGEBUTTON_STATE_RELEASED);

    //Write codes scr_downtime_cont_dt_center
    ui->scr_downtime_cont_dt_center = lv_obj_create(ui->scr_downtime_cont_dt);
    lv_obj_set_pos(ui->scr_downtime_cont_dt_center, 0, 100);
    lv_obj_set_size(ui->scr_downtime_cont_dt_center, 1232, 600);
    lv_obj_set_scrollbar_mode(ui->scr_downtime_cont_dt_center, LV_SCROLLBAR_MODE_OFF);

    //Write style for scr_downtime_cont_dt_center, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scr_downtime_cont_dt_center, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_downtime_cont_dt_center, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scr_downtime_cont_dt_center, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scr_downtime_cont_dt_center, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scr_downtime_cont_dt_center, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scr_downtime_cont_dt_center, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scr_downtime_cont_dt_center, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_downtime_cont_dt_center, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scr_downtime_cont_dt_group
    ui->scr_downtime_cont_dt_group = lv_obj_create(ui->scr_downtime_cont_dt_center);
    lv_obj_set_pos(ui->scr_downtime_cont_dt_group, 1, 6);
    lv_obj_set_size(ui->scr_downtime_cont_dt_group, 500, 450);
    lv_obj_set_scrollbar_mode(ui->scr_downtime_cont_dt_group, LV_SCROLLBAR_MODE_OFF);

    //Write style for scr_downtime_cont_dt_group, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scr_downtime_cont_dt_group, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_downtime_cont_dt_group, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scr_downtime_cont_dt_group, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scr_downtime_cont_dt_group, lv_color_hex(0x151515), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scr_downtime_cont_dt_group, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scr_downtime_cont_dt_group, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scr_downtime_cont_dt_group, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scr_downtime_cont_dt_group, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scr_downtime_cont_dt_group, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_downtime_cont_dt_group, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scr_downtime_lbl_group
    ui->scr_downtime_lbl_group = lv_label_create(ui->scr_downtime_cont_dt_group);
    lv_obj_set_pos(ui->scr_downtime_lbl_group, 0, 5);
    lv_obj_set_size(ui->scr_downtime_lbl_group, 500, 80);
    lv_label_set_text(ui->scr_downtime_lbl_group, "GROUP");
    lv_label_set_long_mode(ui->scr_downtime_lbl_group, LV_LABEL_LONG_WRAP);

    //Write style for scr_downtime_lbl_group, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scr_downtime_lbl_group, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_downtime_lbl_group, 10, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scr_downtime_lbl_group, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scr_downtime_lbl_group, &lv_font_Acme_Regular_30, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scr_downtime_lbl_group, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->scr_downtime_lbl_group, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->scr_downtime_lbl_group, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scr_downtime_lbl_group, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scr_downtime_lbl_group, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scr_downtime_lbl_group, lv_color_hex(0x232323), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scr_downtime_lbl_group, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scr_downtime_lbl_group, 25, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scr_downtime_lbl_group, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scr_downtime_lbl_group, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scr_downtime_lbl_group, 20, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_downtime_lbl_group, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scr_downtime_btn_group_material
    ui->scr_downtime_btn_group_material = lv_button_create(ui->scr_downtime_cont_dt_group);
    lv_obj_set_pos(ui->scr_downtime_btn_group_material, 0, 158);
    lv_obj_set_size(ui->scr_downtime_btn_group_material, 500, 70);
    ui->scr_downtime_btn_group_material_label = lv_label_create(ui->scr_downtime_btn_group_material);
    lv_label_set_text(ui->scr_downtime_btn_group_material_label, "     MATERIAL");
    lv_label_set_long_mode(ui->scr_downtime_btn_group_material_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->scr_downtime_btn_group_material_label, LV_ALIGN_LEFT_MID, 0, 0);
    lv_obj_set_style_pad_all(ui->scr_downtime_btn_group_material, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->scr_downtime_btn_group_material_label, LV_PCT(100));

    //Write style for scr_downtime_btn_group_material, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->scr_downtime_btn_group_material, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scr_downtime_btn_group_material, lv_color_hex(0x404040), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scr_downtime_btn_group_material, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->scr_downtime_btn_group_material, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_downtime_btn_group_material, 10, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_downtime_btn_group_material, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scr_downtime_btn_group_material, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scr_downtime_btn_group_material, &lv_font_Acme_Regular_30, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scr_downtime_btn_group_material, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scr_downtime_btn_group_material, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style for scr_downtime_btn_group_material, Part: LV_PART_MAIN, State: LV_STATE_PRESSED.
    lv_obj_set_style_bg_opa(ui->scr_downtime_btn_group_material, 255, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_bg_color(ui->scr_downtime_btn_group_material, lv_color_hex(0x2195f6), LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_bg_grad_dir(ui->scr_downtime_btn_group_material, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_border_width(ui->scr_downtime_btn_group_material, 0, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_radius(ui->scr_downtime_btn_group_material, 5, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_shadow_width(ui->scr_downtime_btn_group_material, 0, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_text_color(ui->scr_downtime_btn_group_material, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_text_font(ui->scr_downtime_btn_group_material, &lv_font_montserratMedium_16, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_text_opa(ui->scr_downtime_btn_group_material, 255, LV_PART_MAIN|LV_STATE_PRESSED);

    //Write style for scr_downtime_btn_group_material, Part: LV_PART_MAIN, State: LV_STATE_CHECKED.
    lv_obj_set_style_bg_opa(ui->scr_downtime_btn_group_material, 255, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_bg_color(ui->scr_downtime_btn_group_material, lv_color_hex(0xababab), LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_bg_grad_dir(ui->scr_downtime_btn_group_material, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_border_width(ui->scr_downtime_btn_group_material, 0, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_radius(ui->scr_downtime_btn_group_material, 5, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_shadow_width(ui->scr_downtime_btn_group_material, 0, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_text_color(ui->scr_downtime_btn_group_material, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_text_font(ui->scr_downtime_btn_group_material, &lv_font_Acme_Regular_26, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_text_opa(ui->scr_downtime_btn_group_material, 255, LV_PART_MAIN|LV_STATE_CHECKED);

    //Write codes scr_downtime_btn_group_machine
    ui->scr_downtime_btn_group_machine = lv_button_create(ui->scr_downtime_cont_dt_group);
    lv_obj_set_pos(ui->scr_downtime_btn_group_machine, 0, 86);
    lv_obj_set_size(ui->scr_downtime_btn_group_machine, 500, 70);
    ui->scr_downtime_btn_group_machine_label = lv_label_create(ui->scr_downtime_btn_group_machine);
    lv_label_set_text(ui->scr_downtime_btn_group_machine_label, "     MACHINE");
    lv_label_set_long_mode(ui->scr_downtime_btn_group_machine_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->scr_downtime_btn_group_machine_label, LV_ALIGN_LEFT_MID, 0, 0);
    lv_obj_set_style_pad_all(ui->scr_downtime_btn_group_machine, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->scr_downtime_btn_group_machine_label, LV_PCT(100));

    //Write style for scr_downtime_btn_group_machine, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->scr_downtime_btn_group_machine, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scr_downtime_btn_group_machine, lv_color_hex(0x404040), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scr_downtime_btn_group_machine, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->scr_downtime_btn_group_machine, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_downtime_btn_group_machine, 10, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_downtime_btn_group_machine, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scr_downtime_btn_group_machine, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scr_downtime_btn_group_machine, &lv_font_Acme_Regular_30, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scr_downtime_btn_group_machine, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scr_downtime_btn_group_machine, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style for scr_downtime_btn_group_machine, Part: LV_PART_MAIN, State: LV_STATE_CHECKED.
    lv_obj_set_style_bg_opa(ui->scr_downtime_btn_group_machine, 255, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_bg_color(ui->scr_downtime_btn_group_machine, lv_color_hex(0xababab), LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_bg_grad_dir(ui->scr_downtime_btn_group_machine, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_border_width(ui->scr_downtime_btn_group_machine, 0, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_radius(ui->scr_downtime_btn_group_machine, 5, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_shadow_width(ui->scr_downtime_btn_group_machine, 0, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_text_color(ui->scr_downtime_btn_group_machine, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_text_font(ui->scr_downtime_btn_group_machine, &lv_font_Acme_Regular_26, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_text_opa(ui->scr_downtime_btn_group_machine, 255, LV_PART_MAIN|LV_STATE_CHECKED);

    //Write codes scr_downtime_btn_group_man
    ui->scr_downtime_btn_group_man = lv_button_create(ui->scr_downtime_cont_dt_group);
    lv_obj_set_pos(ui->scr_downtime_btn_group_man, 0, 230);
    lv_obj_set_size(ui->scr_downtime_btn_group_man, 500, 70);
    ui->scr_downtime_btn_group_man_label = lv_label_create(ui->scr_downtime_btn_group_man);
    lv_label_set_text(ui->scr_downtime_btn_group_man_label, "     MAN");
    lv_label_set_long_mode(ui->scr_downtime_btn_group_man_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->scr_downtime_btn_group_man_label, LV_ALIGN_LEFT_MID, 0, 0);
    lv_obj_set_style_pad_all(ui->scr_downtime_btn_group_man, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->scr_downtime_btn_group_man_label, LV_PCT(100));

    //Write style for scr_downtime_btn_group_man, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->scr_downtime_btn_group_man, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scr_downtime_btn_group_man, lv_color_hex(0x404040), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scr_downtime_btn_group_man, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->scr_downtime_btn_group_man, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_downtime_btn_group_man, 10, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_downtime_btn_group_man, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scr_downtime_btn_group_man, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scr_downtime_btn_group_man, &lv_font_Acme_Regular_30, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scr_downtime_btn_group_man, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scr_downtime_btn_group_man, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style for scr_downtime_btn_group_man, Part: LV_PART_MAIN, State: LV_STATE_CHECKED.
    lv_obj_set_style_bg_opa(ui->scr_downtime_btn_group_man, 255, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_bg_color(ui->scr_downtime_btn_group_man, lv_color_hex(0xababab), LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_bg_grad_dir(ui->scr_downtime_btn_group_man, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_border_width(ui->scr_downtime_btn_group_man, 0, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_radius(ui->scr_downtime_btn_group_man, 5, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_shadow_width(ui->scr_downtime_btn_group_man, 0, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_text_color(ui->scr_downtime_btn_group_man, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_text_font(ui->scr_downtime_btn_group_man, &lv_font_Acme_Regular_26, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_text_opa(ui->scr_downtime_btn_group_man, 255, LV_PART_MAIN|LV_STATE_CHECKED);

    //Write codes scr_downtime_btn_group_method
    ui->scr_downtime_btn_group_method = lv_button_create(ui->scr_downtime_cont_dt_group);
    lv_obj_set_pos(ui->scr_downtime_btn_group_method, 0, 302);
    lv_obj_set_size(ui->scr_downtime_btn_group_method, 500, 70);
    ui->scr_downtime_btn_group_method_label = lv_label_create(ui->scr_downtime_btn_group_method);
    lv_label_set_text(ui->scr_downtime_btn_group_method_label, "     METHOD");
    lv_label_set_long_mode(ui->scr_downtime_btn_group_method_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->scr_downtime_btn_group_method_label, LV_ALIGN_LEFT_MID, 0, 0);
    lv_obj_set_style_pad_all(ui->scr_downtime_btn_group_method, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->scr_downtime_btn_group_method_label, LV_PCT(100));

    //Write style for scr_downtime_btn_group_method, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->scr_downtime_btn_group_method, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scr_downtime_btn_group_method, lv_color_hex(0x404040), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scr_downtime_btn_group_method, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->scr_downtime_btn_group_method, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_downtime_btn_group_method, 10, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_downtime_btn_group_method, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scr_downtime_btn_group_method, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scr_downtime_btn_group_method, &lv_font_Acme_Regular_30, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scr_downtime_btn_group_method, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scr_downtime_btn_group_method, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style for scr_downtime_btn_group_method, Part: LV_PART_MAIN, State: LV_STATE_CHECKED.
    lv_obj_set_style_bg_opa(ui->scr_downtime_btn_group_method, 255, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_bg_color(ui->scr_downtime_btn_group_method, lv_color_hex(0xababab), LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_bg_grad_dir(ui->scr_downtime_btn_group_method, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_border_width(ui->scr_downtime_btn_group_method, 0, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_radius(ui->scr_downtime_btn_group_method, 5, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_shadow_width(ui->scr_downtime_btn_group_method, 0, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_text_color(ui->scr_downtime_btn_group_method, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_text_font(ui->scr_downtime_btn_group_method, &lv_font_Acme_Regular_26, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_text_opa(ui->scr_downtime_btn_group_method, 255, LV_PART_MAIN|LV_STATE_CHECKED);

    //Write codes scr_downtime_btn_group_measurement
    ui->scr_downtime_btn_group_measurement = lv_button_create(ui->scr_downtime_cont_dt_group);
    lv_obj_set_pos(ui->scr_downtime_btn_group_measurement, 0, 374);
    lv_obj_set_size(ui->scr_downtime_btn_group_measurement, 500, 70);
    ui->scr_downtime_btn_group_measurement_label = lv_label_create(ui->scr_downtime_btn_group_measurement);
    lv_label_set_text(ui->scr_downtime_btn_group_measurement_label, "     MEASUREMENT");
    lv_label_set_long_mode(ui->scr_downtime_btn_group_measurement_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->scr_downtime_btn_group_measurement_label, LV_ALIGN_LEFT_MID, 0, 0);
    lv_obj_set_style_pad_all(ui->scr_downtime_btn_group_measurement, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->scr_downtime_btn_group_measurement_label, LV_PCT(100));

    //Write style for scr_downtime_btn_group_measurement, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->scr_downtime_btn_group_measurement, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scr_downtime_btn_group_measurement, lv_color_hex(0x404040), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scr_downtime_btn_group_measurement, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->scr_downtime_btn_group_measurement, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_downtime_btn_group_measurement, 10, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_downtime_btn_group_measurement, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scr_downtime_btn_group_measurement, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scr_downtime_btn_group_measurement, &lv_font_Acme_Regular_30, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scr_downtime_btn_group_measurement, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scr_downtime_btn_group_measurement, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style for scr_downtime_btn_group_measurement, Part: LV_PART_MAIN, State: LV_STATE_CHECKED.
    lv_obj_set_style_bg_opa(ui->scr_downtime_btn_group_measurement, 255, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_bg_color(ui->scr_downtime_btn_group_measurement, lv_color_hex(0xababab), LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_bg_grad_dir(ui->scr_downtime_btn_group_measurement, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_border_width(ui->scr_downtime_btn_group_measurement, 0, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_radius(ui->scr_downtime_btn_group_measurement, 5, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_shadow_width(ui->scr_downtime_btn_group_measurement, 0, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_text_color(ui->scr_downtime_btn_group_measurement, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_text_font(ui->scr_downtime_btn_group_measurement, &lv_font_Acme_Regular_26, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_text_opa(ui->scr_downtime_btn_group_measurement, 255, LV_PART_MAIN|LV_STATE_CHECKED);

    //Write codes scr_downtime_cont_dt_detail
    ui->scr_downtime_cont_dt_detail = lv_obj_create(ui->scr_downtime_cont_dt_center);
    lv_obj_set_pos(ui->scr_downtime_cont_dt_detail, 513, 6);
    lv_obj_set_size(ui->scr_downtime_cont_dt_detail, 720, 450);
    lv_obj_set_scrollbar_mode(ui->scr_downtime_cont_dt_detail, LV_SCROLLBAR_MODE_OFF);

    //Write style for scr_downtime_cont_dt_detail, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scr_downtime_cont_dt_detail, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_downtime_cont_dt_detail, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scr_downtime_cont_dt_detail, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scr_downtime_cont_dt_detail, lv_color_hex(0x151515), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scr_downtime_cont_dt_detail, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scr_downtime_cont_dt_detail, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scr_downtime_cont_dt_detail, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scr_downtime_cont_dt_detail, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scr_downtime_cont_dt_detail, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_downtime_cont_dt_detail, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scr_downtime_lbl_detail
    ui->scr_downtime_lbl_detail = lv_label_create(ui->scr_downtime_cont_dt_detail);
    lv_obj_set_pos(ui->scr_downtime_lbl_detail, 0, 5);
    lv_obj_set_size(ui->scr_downtime_lbl_detail, 720, 80);
    lv_label_set_text(ui->scr_downtime_lbl_detail, "DEFECT DETAIL");
    lv_label_set_long_mode(ui->scr_downtime_lbl_detail, LV_LABEL_LONG_WRAP);

    //Write style for scr_downtime_lbl_detail, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scr_downtime_lbl_detail, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_downtime_lbl_detail, 10, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scr_downtime_lbl_detail, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scr_downtime_lbl_detail, &lv_font_Acme_Regular_30, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scr_downtime_lbl_detail, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->scr_downtime_lbl_detail, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->scr_downtime_lbl_detail, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scr_downtime_lbl_detail, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scr_downtime_lbl_detail, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scr_downtime_lbl_detail, lv_color_hex(0x232323), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scr_downtime_lbl_detail, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scr_downtime_lbl_detail, 25, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scr_downtime_lbl_detail, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scr_downtime_lbl_detail, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scr_downtime_lbl_detail, 20, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_downtime_lbl_detail, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scr_downtime_ddlist_detail_machine
    ui->scr_downtime_ddlist_detail_machine = lv_dropdown_create(ui->scr_downtime_cont_dt_detail);
    lv_obj_set_pos(ui->scr_downtime_ddlist_detail_machine, 0, 85);
    lv_obj_set_size(ui->scr_downtime_ddlist_detail_machine, 720, 70);
    lv_dropdown_set_options(ui->scr_downtime_ddlist_detail_machine, "None\nSensor Failure\nBelt Broken\nPower leak");

    //Write style for scr_downtime_ddlist_detail_machine, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_text_color(ui->scr_downtime_ddlist_detail_machine, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scr_downtime_ddlist_detail_machine, &lv_font_arial_30, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scr_downtime_ddlist_detail_machine, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->scr_downtime_ddlist_detail_machine, 1, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->scr_downtime_ddlist_detail_machine, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->scr_downtime_ddlist_detail_machine, lv_color_hex(0x454545), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->scr_downtime_ddlist_detail_machine, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scr_downtime_ddlist_detail_machine, 18, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scr_downtime_ddlist_detail_machine, 20, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scr_downtime_ddlist_detail_machine, 20, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_downtime_ddlist_detail_machine, 10, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scr_downtime_ddlist_detail_machine, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scr_downtime_ddlist_detail_machine, lv_color_hex(0x404040), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scr_downtime_ddlist_detail_machine, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_downtime_ddlist_detail_machine, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style state: LV_STATE_CHECKED for &style_scr_downtime_ddlist_detail_machine_extra_list_selected_checked
    static lv_style_t style_scr_downtime_ddlist_detail_machine_extra_list_selected_checked;
    ui_init_style(&style_scr_downtime_ddlist_detail_machine_extra_list_selected_checked);

    lv_style_set_border_width(&style_scr_downtime_ddlist_detail_machine_extra_list_selected_checked, 1);
    lv_style_set_border_opa(&style_scr_downtime_ddlist_detail_machine_extra_list_selected_checked, 255);
    lv_style_set_border_color(&style_scr_downtime_ddlist_detail_machine_extra_list_selected_checked, lv_color_hex(0xe1e6ee));
    lv_style_set_border_side(&style_scr_downtime_ddlist_detail_machine_extra_list_selected_checked, LV_BORDER_SIDE_FULL);
    lv_style_set_radius(&style_scr_downtime_ddlist_detail_machine_extra_list_selected_checked, 3);
    lv_style_set_bg_opa(&style_scr_downtime_ddlist_detail_machine_extra_list_selected_checked, 255);
    lv_style_set_bg_color(&style_scr_downtime_ddlist_detail_machine_extra_list_selected_checked, lv_color_hex(0x00a1b5));
    lv_style_set_bg_grad_dir(&style_scr_downtime_ddlist_detail_machine_extra_list_selected_checked, LV_GRAD_DIR_NONE);
    lv_obj_add_style(lv_dropdown_get_list(ui->scr_downtime_ddlist_detail_machine), &style_scr_downtime_ddlist_detail_machine_extra_list_selected_checked, LV_PART_SELECTED|LV_STATE_CHECKED);

    //Write style state: LV_STATE_DEFAULT for &style_scr_downtime_ddlist_detail_machine_extra_list_main_default
    static lv_style_t style_scr_downtime_ddlist_detail_machine_extra_list_main_default;
    ui_init_style(&style_scr_downtime_ddlist_detail_machine_extra_list_main_default);

    lv_style_set_max_height(&style_scr_downtime_ddlist_detail_machine_extra_list_main_default, 90);
    lv_style_set_text_color(&style_scr_downtime_ddlist_detail_machine_extra_list_main_default, lv_color_hex(0x0D3055));
    lv_style_set_text_font(&style_scr_downtime_ddlist_detail_machine_extra_list_main_default, &lv_font_arial_26);
    lv_style_set_text_opa(&style_scr_downtime_ddlist_detail_machine_extra_list_main_default, 255);
    lv_style_set_border_width(&style_scr_downtime_ddlist_detail_machine_extra_list_main_default, 1);
    lv_style_set_border_opa(&style_scr_downtime_ddlist_detail_machine_extra_list_main_default, 255);
    lv_style_set_border_color(&style_scr_downtime_ddlist_detail_machine_extra_list_main_default, lv_color_hex(0xe1e6ee));
    lv_style_set_border_side(&style_scr_downtime_ddlist_detail_machine_extra_list_main_default, LV_BORDER_SIDE_FULL);
    lv_style_set_radius(&style_scr_downtime_ddlist_detail_machine_extra_list_main_default, 3);
    lv_style_set_bg_opa(&style_scr_downtime_ddlist_detail_machine_extra_list_main_default, 255);
    lv_style_set_bg_color(&style_scr_downtime_ddlist_detail_machine_extra_list_main_default, lv_color_hex(0xffffff));
    lv_style_set_bg_grad_dir(&style_scr_downtime_ddlist_detail_machine_extra_list_main_default, LV_GRAD_DIR_NONE);
    lv_obj_add_style(lv_dropdown_get_list(ui->scr_downtime_ddlist_detail_machine), &style_scr_downtime_ddlist_detail_machine_extra_list_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style state: LV_STATE_DEFAULT for &style_scr_downtime_ddlist_detail_machine_extra_list_scrollbar_default
    static lv_style_t style_scr_downtime_ddlist_detail_machine_extra_list_scrollbar_default;
    ui_init_style(&style_scr_downtime_ddlist_detail_machine_extra_list_scrollbar_default);

    lv_style_set_radius(&style_scr_downtime_ddlist_detail_machine_extra_list_scrollbar_default, 3);
    lv_style_set_bg_opa(&style_scr_downtime_ddlist_detail_machine_extra_list_scrollbar_default, 255);
    lv_style_set_bg_color(&style_scr_downtime_ddlist_detail_machine_extra_list_scrollbar_default, lv_color_hex(0x494949));
    lv_style_set_bg_grad_dir(&style_scr_downtime_ddlist_detail_machine_extra_list_scrollbar_default, LV_GRAD_DIR_NONE);
    lv_obj_add_style(lv_dropdown_get_list(ui->scr_downtime_ddlist_detail_machine), &style_scr_downtime_ddlist_detail_machine_extra_list_scrollbar_default, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);

    //Write codes scr_downtime_ddlist_detail_material
    ui->scr_downtime_ddlist_detail_material = lv_dropdown_create(ui->scr_downtime_cont_dt_detail);
    lv_obj_set_pos(ui->scr_downtime_ddlist_detail_material, 0, 157);
    lv_obj_set_size(ui->scr_downtime_ddlist_detail_material, 720, 70);
    lv_dropdown_set_options(ui->scr_downtime_ddlist_detail_material, "None\nSensor Failure\nBelt Broken\nPower leak");

    //Write style for scr_downtime_ddlist_detail_material, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_text_color(ui->scr_downtime_ddlist_detail_material, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scr_downtime_ddlist_detail_material, &lv_font_arial_30, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scr_downtime_ddlist_detail_material, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->scr_downtime_ddlist_detail_material, 1, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->scr_downtime_ddlist_detail_material, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->scr_downtime_ddlist_detail_material, lv_color_hex(0x454545), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->scr_downtime_ddlist_detail_material, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scr_downtime_ddlist_detail_material, 18, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scr_downtime_ddlist_detail_material, 20, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scr_downtime_ddlist_detail_material, 20, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_downtime_ddlist_detail_material, 10, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scr_downtime_ddlist_detail_material, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scr_downtime_ddlist_detail_material, lv_color_hex(0x404040), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scr_downtime_ddlist_detail_material, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_downtime_ddlist_detail_material, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style state: LV_STATE_CHECKED for &style_scr_downtime_ddlist_detail_material_extra_list_selected_checked
    static lv_style_t style_scr_downtime_ddlist_detail_material_extra_list_selected_checked;
    ui_init_style(&style_scr_downtime_ddlist_detail_material_extra_list_selected_checked);

    lv_style_set_border_width(&style_scr_downtime_ddlist_detail_material_extra_list_selected_checked, 1);
    lv_style_set_border_opa(&style_scr_downtime_ddlist_detail_material_extra_list_selected_checked, 255);
    lv_style_set_border_color(&style_scr_downtime_ddlist_detail_material_extra_list_selected_checked, lv_color_hex(0xe1e6ee));
    lv_style_set_border_side(&style_scr_downtime_ddlist_detail_material_extra_list_selected_checked, LV_BORDER_SIDE_FULL);
    lv_style_set_radius(&style_scr_downtime_ddlist_detail_material_extra_list_selected_checked, 3);
    lv_style_set_bg_opa(&style_scr_downtime_ddlist_detail_material_extra_list_selected_checked, 255);
    lv_style_set_bg_color(&style_scr_downtime_ddlist_detail_material_extra_list_selected_checked, lv_color_hex(0x00a1b5));
    lv_style_set_bg_grad_dir(&style_scr_downtime_ddlist_detail_material_extra_list_selected_checked, LV_GRAD_DIR_NONE);
    lv_obj_add_style(lv_dropdown_get_list(ui->scr_downtime_ddlist_detail_material), &style_scr_downtime_ddlist_detail_material_extra_list_selected_checked, LV_PART_SELECTED|LV_STATE_CHECKED);

    //Write style state: LV_STATE_DEFAULT for &style_scr_downtime_ddlist_detail_material_extra_list_main_default
    static lv_style_t style_scr_downtime_ddlist_detail_material_extra_list_main_default;
    ui_init_style(&style_scr_downtime_ddlist_detail_material_extra_list_main_default);

    lv_style_set_max_height(&style_scr_downtime_ddlist_detail_material_extra_list_main_default, 90);
    lv_style_set_text_color(&style_scr_downtime_ddlist_detail_material_extra_list_main_default, lv_color_hex(0x0D3055));
    lv_style_set_text_font(&style_scr_downtime_ddlist_detail_material_extra_list_main_default, &lv_font_arial_26);
    lv_style_set_text_opa(&style_scr_downtime_ddlist_detail_material_extra_list_main_default, 255);
    lv_style_set_border_width(&style_scr_downtime_ddlist_detail_material_extra_list_main_default, 1);
    lv_style_set_border_opa(&style_scr_downtime_ddlist_detail_material_extra_list_main_default, 255);
    lv_style_set_border_color(&style_scr_downtime_ddlist_detail_material_extra_list_main_default, lv_color_hex(0xe1e6ee));
    lv_style_set_border_side(&style_scr_downtime_ddlist_detail_material_extra_list_main_default, LV_BORDER_SIDE_FULL);
    lv_style_set_radius(&style_scr_downtime_ddlist_detail_material_extra_list_main_default, 3);
    lv_style_set_bg_opa(&style_scr_downtime_ddlist_detail_material_extra_list_main_default, 255);
    lv_style_set_bg_color(&style_scr_downtime_ddlist_detail_material_extra_list_main_default, lv_color_hex(0xffffff));
    lv_style_set_bg_grad_dir(&style_scr_downtime_ddlist_detail_material_extra_list_main_default, LV_GRAD_DIR_NONE);
    lv_obj_add_style(lv_dropdown_get_list(ui->scr_downtime_ddlist_detail_material), &style_scr_downtime_ddlist_detail_material_extra_list_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style state: LV_STATE_DEFAULT for &style_scr_downtime_ddlist_detail_material_extra_list_scrollbar_default
    static lv_style_t style_scr_downtime_ddlist_detail_material_extra_list_scrollbar_default;
    ui_init_style(&style_scr_downtime_ddlist_detail_material_extra_list_scrollbar_default);

    lv_style_set_radius(&style_scr_downtime_ddlist_detail_material_extra_list_scrollbar_default, 3);
    lv_style_set_bg_opa(&style_scr_downtime_ddlist_detail_material_extra_list_scrollbar_default, 255);
    lv_style_set_bg_color(&style_scr_downtime_ddlist_detail_material_extra_list_scrollbar_default, lv_color_hex(0x494949));
    lv_style_set_bg_grad_dir(&style_scr_downtime_ddlist_detail_material_extra_list_scrollbar_default, LV_GRAD_DIR_NONE);
    lv_obj_add_style(lv_dropdown_get_list(ui->scr_downtime_ddlist_detail_material), &style_scr_downtime_ddlist_detail_material_extra_list_scrollbar_default, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);

    //Write codes scr_downtime_ddlist_detail_man
    ui->scr_downtime_ddlist_detail_man = lv_dropdown_create(ui->scr_downtime_cont_dt_detail);
    lv_obj_set_pos(ui->scr_downtime_ddlist_detail_man, 0, 229);
    lv_obj_set_size(ui->scr_downtime_ddlist_detail_man, 720, 70);
    lv_dropdown_set_options(ui->scr_downtime_ddlist_detail_man, "None\nSensor Failure\nBelt Broken\nPower leak");

    //Write style for scr_downtime_ddlist_detail_man, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_text_color(ui->scr_downtime_ddlist_detail_man, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scr_downtime_ddlist_detail_man, &lv_font_arial_30, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scr_downtime_ddlist_detail_man, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->scr_downtime_ddlist_detail_man, 1, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->scr_downtime_ddlist_detail_man, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->scr_downtime_ddlist_detail_man, lv_color_hex(0x454545), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->scr_downtime_ddlist_detail_man, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scr_downtime_ddlist_detail_man, 18, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scr_downtime_ddlist_detail_man, 20, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scr_downtime_ddlist_detail_man, 20, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_downtime_ddlist_detail_man, 10, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scr_downtime_ddlist_detail_man, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scr_downtime_ddlist_detail_man, lv_color_hex(0x404040), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scr_downtime_ddlist_detail_man, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_downtime_ddlist_detail_man, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style state: LV_STATE_CHECKED for &style_scr_downtime_ddlist_detail_man_extra_list_selected_checked
    static lv_style_t style_scr_downtime_ddlist_detail_man_extra_list_selected_checked;
    ui_init_style(&style_scr_downtime_ddlist_detail_man_extra_list_selected_checked);

    lv_style_set_border_width(&style_scr_downtime_ddlist_detail_man_extra_list_selected_checked, 1);
    lv_style_set_border_opa(&style_scr_downtime_ddlist_detail_man_extra_list_selected_checked, 255);
    lv_style_set_border_color(&style_scr_downtime_ddlist_detail_man_extra_list_selected_checked, lv_color_hex(0xe1e6ee));
    lv_style_set_border_side(&style_scr_downtime_ddlist_detail_man_extra_list_selected_checked, LV_BORDER_SIDE_FULL);
    lv_style_set_radius(&style_scr_downtime_ddlist_detail_man_extra_list_selected_checked, 3);
    lv_style_set_bg_opa(&style_scr_downtime_ddlist_detail_man_extra_list_selected_checked, 255);
    lv_style_set_bg_color(&style_scr_downtime_ddlist_detail_man_extra_list_selected_checked, lv_color_hex(0x00a1b5));
    lv_style_set_bg_grad_dir(&style_scr_downtime_ddlist_detail_man_extra_list_selected_checked, LV_GRAD_DIR_NONE);
    lv_obj_add_style(lv_dropdown_get_list(ui->scr_downtime_ddlist_detail_man), &style_scr_downtime_ddlist_detail_man_extra_list_selected_checked, LV_PART_SELECTED|LV_STATE_CHECKED);

    //Write style state: LV_STATE_DEFAULT for &style_scr_downtime_ddlist_detail_man_extra_list_main_default
    static lv_style_t style_scr_downtime_ddlist_detail_man_extra_list_main_default;
    ui_init_style(&style_scr_downtime_ddlist_detail_man_extra_list_main_default);

    lv_style_set_max_height(&style_scr_downtime_ddlist_detail_man_extra_list_main_default, 90);
    lv_style_set_text_color(&style_scr_downtime_ddlist_detail_man_extra_list_main_default, lv_color_hex(0x0D3055));
    lv_style_set_text_font(&style_scr_downtime_ddlist_detail_man_extra_list_main_default, &lv_font_arial_26);
    lv_style_set_text_opa(&style_scr_downtime_ddlist_detail_man_extra_list_main_default, 255);
    lv_style_set_border_width(&style_scr_downtime_ddlist_detail_man_extra_list_main_default, 1);
    lv_style_set_border_opa(&style_scr_downtime_ddlist_detail_man_extra_list_main_default, 255);
    lv_style_set_border_color(&style_scr_downtime_ddlist_detail_man_extra_list_main_default, lv_color_hex(0xe1e6ee));
    lv_style_set_border_side(&style_scr_downtime_ddlist_detail_man_extra_list_main_default, LV_BORDER_SIDE_FULL);
    lv_style_set_radius(&style_scr_downtime_ddlist_detail_man_extra_list_main_default, 3);
    lv_style_set_bg_opa(&style_scr_downtime_ddlist_detail_man_extra_list_main_default, 255);
    lv_style_set_bg_color(&style_scr_downtime_ddlist_detail_man_extra_list_main_default, lv_color_hex(0xffffff));
    lv_style_set_bg_grad_dir(&style_scr_downtime_ddlist_detail_man_extra_list_main_default, LV_GRAD_DIR_NONE);
    lv_obj_add_style(lv_dropdown_get_list(ui->scr_downtime_ddlist_detail_man), &style_scr_downtime_ddlist_detail_man_extra_list_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style state: LV_STATE_DEFAULT for &style_scr_downtime_ddlist_detail_man_extra_list_scrollbar_default
    static lv_style_t style_scr_downtime_ddlist_detail_man_extra_list_scrollbar_default;
    ui_init_style(&style_scr_downtime_ddlist_detail_man_extra_list_scrollbar_default);

    lv_style_set_radius(&style_scr_downtime_ddlist_detail_man_extra_list_scrollbar_default, 3);
    lv_style_set_bg_opa(&style_scr_downtime_ddlist_detail_man_extra_list_scrollbar_default, 255);
    lv_style_set_bg_color(&style_scr_downtime_ddlist_detail_man_extra_list_scrollbar_default, lv_color_hex(0x494949));
    lv_style_set_bg_grad_dir(&style_scr_downtime_ddlist_detail_man_extra_list_scrollbar_default, LV_GRAD_DIR_NONE);
    lv_obj_add_style(lv_dropdown_get_list(ui->scr_downtime_ddlist_detail_man), &style_scr_downtime_ddlist_detail_man_extra_list_scrollbar_default, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);

    //Write codes scr_downtime_ddlist_detail_method
    ui->scr_downtime_ddlist_detail_method = lv_dropdown_create(ui->scr_downtime_cont_dt_detail);
    lv_obj_set_pos(ui->scr_downtime_ddlist_detail_method, 0, 301);
    lv_obj_set_size(ui->scr_downtime_ddlist_detail_method, 720, 70);
    lv_dropdown_set_options(ui->scr_downtime_ddlist_detail_method, "None\nSensor Failure\nBelt Broken\nPower leak");

    //Write style for scr_downtime_ddlist_detail_method, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_text_color(ui->scr_downtime_ddlist_detail_method, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scr_downtime_ddlist_detail_method, &lv_font_arial_30, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scr_downtime_ddlist_detail_method, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->scr_downtime_ddlist_detail_method, 1, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->scr_downtime_ddlist_detail_method, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->scr_downtime_ddlist_detail_method, lv_color_hex(0x454545), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->scr_downtime_ddlist_detail_method, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scr_downtime_ddlist_detail_method, 18, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scr_downtime_ddlist_detail_method, 20, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scr_downtime_ddlist_detail_method, 20, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_downtime_ddlist_detail_method, 10, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scr_downtime_ddlist_detail_method, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scr_downtime_ddlist_detail_method, lv_color_hex(0x404040), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scr_downtime_ddlist_detail_method, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_downtime_ddlist_detail_method, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style state: LV_STATE_CHECKED for &style_scr_downtime_ddlist_detail_method_extra_list_selected_checked
    static lv_style_t style_scr_downtime_ddlist_detail_method_extra_list_selected_checked;
    ui_init_style(&style_scr_downtime_ddlist_detail_method_extra_list_selected_checked);

    lv_style_set_border_width(&style_scr_downtime_ddlist_detail_method_extra_list_selected_checked, 1);
    lv_style_set_border_opa(&style_scr_downtime_ddlist_detail_method_extra_list_selected_checked, 255);
    lv_style_set_border_color(&style_scr_downtime_ddlist_detail_method_extra_list_selected_checked, lv_color_hex(0xe1e6ee));
    lv_style_set_border_side(&style_scr_downtime_ddlist_detail_method_extra_list_selected_checked, LV_BORDER_SIDE_FULL);
    lv_style_set_radius(&style_scr_downtime_ddlist_detail_method_extra_list_selected_checked, 3);
    lv_style_set_bg_opa(&style_scr_downtime_ddlist_detail_method_extra_list_selected_checked, 255);
    lv_style_set_bg_color(&style_scr_downtime_ddlist_detail_method_extra_list_selected_checked, lv_color_hex(0x00a1b5));
    lv_style_set_bg_grad_dir(&style_scr_downtime_ddlist_detail_method_extra_list_selected_checked, LV_GRAD_DIR_NONE);
    lv_obj_add_style(lv_dropdown_get_list(ui->scr_downtime_ddlist_detail_method), &style_scr_downtime_ddlist_detail_method_extra_list_selected_checked, LV_PART_SELECTED|LV_STATE_CHECKED);

    //Write style state: LV_STATE_DEFAULT for &style_scr_downtime_ddlist_detail_method_extra_list_main_default
    static lv_style_t style_scr_downtime_ddlist_detail_method_extra_list_main_default;
    ui_init_style(&style_scr_downtime_ddlist_detail_method_extra_list_main_default);

    lv_style_set_max_height(&style_scr_downtime_ddlist_detail_method_extra_list_main_default, 90);
    lv_style_set_text_color(&style_scr_downtime_ddlist_detail_method_extra_list_main_default, lv_color_hex(0x0D3055));
    lv_style_set_text_font(&style_scr_downtime_ddlist_detail_method_extra_list_main_default, &lv_font_arial_26);
    lv_style_set_text_opa(&style_scr_downtime_ddlist_detail_method_extra_list_main_default, 255);
    lv_style_set_border_width(&style_scr_downtime_ddlist_detail_method_extra_list_main_default, 1);
    lv_style_set_border_opa(&style_scr_downtime_ddlist_detail_method_extra_list_main_default, 255);
    lv_style_set_border_color(&style_scr_downtime_ddlist_detail_method_extra_list_main_default, lv_color_hex(0xe1e6ee));
    lv_style_set_border_side(&style_scr_downtime_ddlist_detail_method_extra_list_main_default, LV_BORDER_SIDE_FULL);
    lv_style_set_radius(&style_scr_downtime_ddlist_detail_method_extra_list_main_default, 3);
    lv_style_set_bg_opa(&style_scr_downtime_ddlist_detail_method_extra_list_main_default, 255);
    lv_style_set_bg_color(&style_scr_downtime_ddlist_detail_method_extra_list_main_default, lv_color_hex(0xffffff));
    lv_style_set_bg_grad_dir(&style_scr_downtime_ddlist_detail_method_extra_list_main_default, LV_GRAD_DIR_NONE);
    lv_obj_add_style(lv_dropdown_get_list(ui->scr_downtime_ddlist_detail_method), &style_scr_downtime_ddlist_detail_method_extra_list_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style state: LV_STATE_DEFAULT for &style_scr_downtime_ddlist_detail_method_extra_list_scrollbar_default
    static lv_style_t style_scr_downtime_ddlist_detail_method_extra_list_scrollbar_default;
    ui_init_style(&style_scr_downtime_ddlist_detail_method_extra_list_scrollbar_default);

    lv_style_set_radius(&style_scr_downtime_ddlist_detail_method_extra_list_scrollbar_default, 3);
    lv_style_set_bg_opa(&style_scr_downtime_ddlist_detail_method_extra_list_scrollbar_default, 255);
    lv_style_set_bg_color(&style_scr_downtime_ddlist_detail_method_extra_list_scrollbar_default, lv_color_hex(0x494949));
    lv_style_set_bg_grad_dir(&style_scr_downtime_ddlist_detail_method_extra_list_scrollbar_default, LV_GRAD_DIR_NONE);
    lv_obj_add_style(lv_dropdown_get_list(ui->scr_downtime_ddlist_detail_method), &style_scr_downtime_ddlist_detail_method_extra_list_scrollbar_default, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);

    //Write codes scr_downtime_ddlist_detail_measurement
    ui->scr_downtime_ddlist_detail_measurement = lv_dropdown_create(ui->scr_downtime_cont_dt_detail);
    lv_obj_set_pos(ui->scr_downtime_ddlist_detail_measurement, 0, 373);
    lv_obj_set_size(ui->scr_downtime_ddlist_detail_measurement, 720, 70);
    lv_dropdown_set_options(ui->scr_downtime_ddlist_detail_measurement, "None\nSensor Failure\nBelt Broken\nPower leak");

    //Write style for scr_downtime_ddlist_detail_measurement, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_text_color(ui->scr_downtime_ddlist_detail_measurement, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scr_downtime_ddlist_detail_measurement, &lv_font_arial_30, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scr_downtime_ddlist_detail_measurement, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->scr_downtime_ddlist_detail_measurement, 1, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->scr_downtime_ddlist_detail_measurement, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->scr_downtime_ddlist_detail_measurement, lv_color_hex(0x454545), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->scr_downtime_ddlist_detail_measurement, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scr_downtime_ddlist_detail_measurement, 18, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scr_downtime_ddlist_detail_measurement, 20, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scr_downtime_ddlist_detail_measurement, 20, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_downtime_ddlist_detail_measurement, 10, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scr_downtime_ddlist_detail_measurement, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scr_downtime_ddlist_detail_measurement, lv_color_hex(0x404040), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scr_downtime_ddlist_detail_measurement, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_downtime_ddlist_detail_measurement, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style state: LV_STATE_CHECKED for &style_scr_downtime_ddlist_detail_measurement_extra_list_selected_checked
    static lv_style_t style_scr_downtime_ddlist_detail_measurement_extra_list_selected_checked;
    ui_init_style(&style_scr_downtime_ddlist_detail_measurement_extra_list_selected_checked);

    lv_style_set_border_width(&style_scr_downtime_ddlist_detail_measurement_extra_list_selected_checked, 1);
    lv_style_set_border_opa(&style_scr_downtime_ddlist_detail_measurement_extra_list_selected_checked, 255);
    lv_style_set_border_color(&style_scr_downtime_ddlist_detail_measurement_extra_list_selected_checked, lv_color_hex(0xe1e6ee));
    lv_style_set_border_side(&style_scr_downtime_ddlist_detail_measurement_extra_list_selected_checked, LV_BORDER_SIDE_FULL);
    lv_style_set_radius(&style_scr_downtime_ddlist_detail_measurement_extra_list_selected_checked, 3);
    lv_style_set_bg_opa(&style_scr_downtime_ddlist_detail_measurement_extra_list_selected_checked, 255);
    lv_style_set_bg_color(&style_scr_downtime_ddlist_detail_measurement_extra_list_selected_checked, lv_color_hex(0x00a1b5));
    lv_style_set_bg_grad_dir(&style_scr_downtime_ddlist_detail_measurement_extra_list_selected_checked, LV_GRAD_DIR_NONE);
    lv_obj_add_style(lv_dropdown_get_list(ui->scr_downtime_ddlist_detail_measurement), &style_scr_downtime_ddlist_detail_measurement_extra_list_selected_checked, LV_PART_SELECTED|LV_STATE_CHECKED);

    //Write style state: LV_STATE_DEFAULT for &style_scr_downtime_ddlist_detail_measurement_extra_list_main_default
    static lv_style_t style_scr_downtime_ddlist_detail_measurement_extra_list_main_default;
    ui_init_style(&style_scr_downtime_ddlist_detail_measurement_extra_list_main_default);

    lv_style_set_max_height(&style_scr_downtime_ddlist_detail_measurement_extra_list_main_default, 90);
    lv_style_set_text_color(&style_scr_downtime_ddlist_detail_measurement_extra_list_main_default, lv_color_hex(0x0D3055));
    lv_style_set_text_font(&style_scr_downtime_ddlist_detail_measurement_extra_list_main_default, &lv_font_arial_26);
    lv_style_set_text_opa(&style_scr_downtime_ddlist_detail_measurement_extra_list_main_default, 255);
    lv_style_set_border_width(&style_scr_downtime_ddlist_detail_measurement_extra_list_main_default, 1);
    lv_style_set_border_opa(&style_scr_downtime_ddlist_detail_measurement_extra_list_main_default, 255);
    lv_style_set_border_color(&style_scr_downtime_ddlist_detail_measurement_extra_list_main_default, lv_color_hex(0xe1e6ee));
    lv_style_set_border_side(&style_scr_downtime_ddlist_detail_measurement_extra_list_main_default, LV_BORDER_SIDE_FULL);
    lv_style_set_radius(&style_scr_downtime_ddlist_detail_measurement_extra_list_main_default, 3);
    lv_style_set_bg_opa(&style_scr_downtime_ddlist_detail_measurement_extra_list_main_default, 255);
    lv_style_set_bg_color(&style_scr_downtime_ddlist_detail_measurement_extra_list_main_default, lv_color_hex(0xffffff));
    lv_style_set_bg_grad_dir(&style_scr_downtime_ddlist_detail_measurement_extra_list_main_default, LV_GRAD_DIR_NONE);
    lv_obj_add_style(lv_dropdown_get_list(ui->scr_downtime_ddlist_detail_measurement), &style_scr_downtime_ddlist_detail_measurement_extra_list_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style state: LV_STATE_DEFAULT for &style_scr_downtime_ddlist_detail_measurement_extra_list_scrollbar_default
    static lv_style_t style_scr_downtime_ddlist_detail_measurement_extra_list_scrollbar_default;
    ui_init_style(&style_scr_downtime_ddlist_detail_measurement_extra_list_scrollbar_default);

    lv_style_set_radius(&style_scr_downtime_ddlist_detail_measurement_extra_list_scrollbar_default, 3);
    lv_style_set_bg_opa(&style_scr_downtime_ddlist_detail_measurement_extra_list_scrollbar_default, 255);
    lv_style_set_bg_color(&style_scr_downtime_ddlist_detail_measurement_extra_list_scrollbar_default, lv_color_hex(0x494949));
    lv_style_set_bg_grad_dir(&style_scr_downtime_ddlist_detail_measurement_extra_list_scrollbar_default, LV_GRAD_DIR_NONE);
    lv_obj_add_style(lv_dropdown_get_list(ui->scr_downtime_ddlist_detail_measurement), &style_scr_downtime_ddlist_detail_measurement_extra_list_scrollbar_default, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);

    //Write codes scr_downtime_btn_dt_submit_start
    ui->scr_downtime_btn_dt_submit_start = lv_button_create(ui->scr_downtime_cont_dt_center);
    lv_obj_set_pos(ui->scr_downtime_btn_dt_submit_start, 926, 468);
    lv_obj_set_size(ui->scr_downtime_btn_dt_submit_start, 306, 100);
    ui->scr_downtime_btn_dt_submit_start_label = lv_label_create(ui->scr_downtime_btn_dt_submit_start);
    lv_label_set_text(ui->scr_downtime_btn_dt_submit_start_label, "SUBMIT & START");
    lv_label_set_long_mode(ui->scr_downtime_btn_dt_submit_start_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->scr_downtime_btn_dt_submit_start_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->scr_downtime_btn_dt_submit_start, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->scr_downtime_btn_dt_submit_start_label, LV_PCT(100));

    //Write style for scr_downtime_btn_dt_submit_start, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->scr_downtime_btn_dt_submit_start, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scr_downtime_btn_dt_submit_start, lv_color_hex(0x22c55e), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scr_downtime_btn_dt_submit_start, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->scr_downtime_btn_dt_submit_start, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_downtime_btn_dt_submit_start, 10, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_downtime_btn_dt_submit_start, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scr_downtime_btn_dt_submit_start, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scr_downtime_btn_dt_submit_start, &lv_font_Acme_Regular_30, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scr_downtime_btn_dt_submit_start, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scr_downtime_btn_dt_submit_start, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scr_downtime_ta_dt_note_reason_stop
    ui->scr_downtime_ta_dt_note_reason_stop = lv_textarea_create(ui->scr_downtime_cont_dt_center);
    lv_obj_set_pos(ui->scr_downtime_ta_dt_note_reason_stop, 0, 468);
    lv_obj_set_size(ui->scr_downtime_ta_dt_note_reason_stop, 911, 100);
    lv_textarea_set_text(ui->scr_downtime_ta_dt_note_reason_stop, "Add defect note here...");
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
    lv_obj_set_style_text_color(ui->scr_downtime_ta_dt_note_reason_stop, lv_color_hex(0xc1c1c1), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scr_downtime_ta_dt_note_reason_stop, &lv_font_Abel_regular_26, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scr_downtime_ta_dt_note_reason_stop, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->scr_downtime_ta_dt_note_reason_stop, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scr_downtime_ta_dt_note_reason_stop, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scr_downtime_ta_dt_note_reason_stop, 238, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scr_downtime_ta_dt_note_reason_stop, lv_color_hex(0x404040), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scr_downtime_ta_dt_note_reason_stop, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->scr_downtime_ta_dt_note_reason_stop, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_downtime_ta_dt_note_reason_stop, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scr_downtime_ta_dt_note_reason_stop, 10, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scr_downtime_ta_dt_note_reason_stop, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scr_downtime_ta_dt_note_reason_stop, 20, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_downtime_ta_dt_note_reason_stop, 10, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style for scr_downtime_ta_dt_note_reason_stop, Part: LV_PART_SCROLLBAR, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->scr_downtime_ta_dt_note_reason_stop, 255, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scr_downtime_ta_dt_note_reason_stop, lv_color_hex(0x2195f6), LV_PART_SCROLLBAR|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scr_downtime_ta_dt_note_reason_stop, LV_GRAD_DIR_NONE, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_downtime_ta_dt_note_reason_stop, 0, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);

    //The custom code of scr_downtime.


    //Update current screen layout.
    lv_obj_update_layout(ui->scr_downtime);

    //Init events for screen.
    events_init_scr_downtime(ui);
}
