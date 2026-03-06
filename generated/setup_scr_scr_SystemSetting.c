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



void setup_scr_scr_SystemSetting(lv_ui *ui)
{
    //Write codes scr_SystemSetting
    ui->scr_SystemSetting = lv_obj_create(NULL);
    lv_obj_set_size(ui->scr_SystemSetting, 1280, 720);
    lv_obj_set_scrollbar_mode(ui->scr_SystemSetting, LV_SCROLLBAR_MODE_OFF);

    //Write style for scr_SystemSetting, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->scr_SystemSetting, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scr_SystemSetting, lv_color_hex(0x121212), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scr_SystemSetting, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scr_SystemSetting_cont_root
    ui->scr_SystemSetting_cont_root = lv_obj_create(ui->scr_SystemSetting);
    lv_obj_set_pos(ui->scr_SystemSetting_cont_root, 0, 0);
    lv_obj_set_size(ui->scr_SystemSetting_cont_root, 1280, 720);
    lv_obj_set_scrollbar_mode(ui->scr_SystemSetting_cont_root, LV_SCROLLBAR_MODE_OFF);

    //Write style for scr_SystemSetting_cont_root, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scr_SystemSetting_cont_root, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_SystemSetting_cont_root, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scr_SystemSetting_cont_root, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scr_SystemSetting_cont_root, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scr_SystemSetting_cont_root, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scr_SystemSetting_cont_root, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scr_SystemSetting_cont_root, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_SystemSetting_cont_root, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scr_SystemSetting_cont_topbar
    ui->scr_SystemSetting_cont_topbar = lv_obj_create(ui->scr_SystemSetting_cont_root);
    lv_obj_set_pos(ui->scr_SystemSetting_cont_topbar, 0, 0);
    lv_obj_set_size(ui->scr_SystemSetting_cont_topbar, 1280, 90);
    lv_obj_set_scrollbar_mode(ui->scr_SystemSetting_cont_topbar, LV_SCROLLBAR_MODE_OFF);

    //Write style for scr_SystemSetting_cont_topbar, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scr_SystemSetting_cont_topbar, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_SystemSetting_cont_topbar, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scr_SystemSetting_cont_topbar, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scr_SystemSetting_cont_topbar, lv_color_hex(0x2B2B2B), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scr_SystemSetting_cont_topbar, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scr_SystemSetting_cont_topbar, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scr_SystemSetting_cont_topbar, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scr_SystemSetting_cont_topbar, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scr_SystemSetting_cont_topbar, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_SystemSetting_cont_topbar, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scr_SystemSetting_lbl_tiltle
    ui->scr_SystemSetting_lbl_tiltle = lv_label_create(ui->scr_SystemSetting_cont_topbar);
    lv_obj_set_pos(ui->scr_SystemSetting_lbl_tiltle, 448, 20);
    lv_obj_set_size(ui->scr_SystemSetting_lbl_tiltle, 384, 59);
    lv_label_set_text(ui->scr_SystemSetting_lbl_tiltle, "SYSTEM SETTINGS");
    lv_label_set_long_mode(ui->scr_SystemSetting_lbl_tiltle, LV_LABEL_LONG_WRAP);

    //Write style for scr_SystemSetting_lbl_tiltle, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scr_SystemSetting_lbl_tiltle, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_SystemSetting_lbl_tiltle, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scr_SystemSetting_lbl_tiltle, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scr_SystemSetting_lbl_tiltle, &lv_font_Acme_Regular_50, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scr_SystemSetting_lbl_tiltle, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->scr_SystemSetting_lbl_tiltle, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->scr_SystemSetting_lbl_tiltle, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scr_SystemSetting_lbl_tiltle, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scr_SystemSetting_lbl_tiltle, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scr_SystemSetting_lbl_tiltle, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scr_SystemSetting_lbl_tiltle, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scr_SystemSetting_lbl_tiltle, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scr_SystemSetting_lbl_tiltle, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_SystemSetting_lbl_tiltle, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scr_SystemSetting_cont_top_right
    ui->scr_SystemSetting_cont_top_right = lv_obj_create(ui->scr_SystemSetting_cont_topbar);
    lv_obj_set_pos(ui->scr_SystemSetting_cont_top_right, 990, 0);
    lv_obj_set_size(ui->scr_SystemSetting_cont_top_right, 270, 90);
    lv_obj_set_scrollbar_mode(ui->scr_SystemSetting_cont_top_right, LV_SCROLLBAR_MODE_OFF);

    //Write style for scr_SystemSetting_cont_top_right, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scr_SystemSetting_cont_top_right, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_SystemSetting_cont_top_right, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scr_SystemSetting_cont_top_right, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scr_SystemSetting_cont_top_right, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scr_SystemSetting_cont_top_right, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scr_SystemSetting_cont_top_right, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scr_SystemSetting_cont_top_right, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_SystemSetting_cont_top_right, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scr_SystemSetting_label_device
    ui->scr_SystemSetting_label_device = lv_label_create(ui->scr_SystemSetting_cont_top_right);
    lv_obj_set_pos(ui->scr_SystemSetting_label_device, 1, 39);
    lv_obj_set_size(ui->scr_SystemSetting_label_device, 132, 32);
    lv_label_set_text(ui->scr_SystemSetting_label_device, "EDGE-01");
    lv_label_set_long_mode(ui->scr_SystemSetting_label_device, LV_LABEL_LONG_WRAP);

    //Write style for scr_SystemSetting_label_device, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scr_SystemSetting_label_device, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_SystemSetting_label_device, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scr_SystemSetting_label_device, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scr_SystemSetting_label_device, &lv_font_Acme_Regular_30, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scr_SystemSetting_label_device, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->scr_SystemSetting_label_device, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->scr_SystemSetting_label_device, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scr_SystemSetting_label_device, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scr_SystemSetting_label_device, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scr_SystemSetting_label_device, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scr_SystemSetting_label_device, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scr_SystemSetting_label_device, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scr_SystemSetting_label_device, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_SystemSetting_label_device, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scr_SystemSetting_btn_online
    ui->scr_SystemSetting_btn_online = lv_button_create(ui->scr_SystemSetting_cont_top_right);
    lv_obj_set_pos(ui->scr_SystemSetting_btn_online, 128, 30);
    lv_obj_set_size(ui->scr_SystemSetting_btn_online, 130, 50);
    ui->scr_SystemSetting_btn_online_label = lv_label_create(ui->scr_SystemSetting_btn_online);
    lv_label_set_text(ui->scr_SystemSetting_btn_online_label, "ONLINE");
    lv_label_set_long_mode(ui->scr_SystemSetting_btn_online_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->scr_SystemSetting_btn_online_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->scr_SystemSetting_btn_online, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->scr_SystemSetting_btn_online_label, LV_PCT(100));

    //Write style for scr_SystemSetting_btn_online, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->scr_SystemSetting_btn_online, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scr_SystemSetting_btn_online, lv_color_hex(0x2ecc71), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scr_SystemSetting_btn_online, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->scr_SystemSetting_btn_online, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_SystemSetting_btn_online, 18, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_SystemSetting_btn_online, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scr_SystemSetting_btn_online, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scr_SystemSetting_btn_online, &lv_font_arial_25, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scr_SystemSetting_btn_online, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scr_SystemSetting_btn_online, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scr_SystemSetting_cont_1
    ui->scr_SystemSetting_cont_1 = lv_obj_create(ui->scr_SystemSetting_cont_root);
    lv_obj_set_pos(ui->scr_SystemSetting_cont_1, 0, 90);
    lv_obj_set_size(ui->scr_SystemSetting_cont_1, 1280, 630);
    lv_obj_set_scrollbar_mode(ui->scr_SystemSetting_cont_1, LV_SCROLLBAR_MODE_OFF);

    //Write style for scr_SystemSetting_cont_1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scr_SystemSetting_cont_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_SystemSetting_cont_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scr_SystemSetting_cont_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scr_SystemSetting_cont_1, lv_color_hex(0x1a1a1a), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scr_SystemSetting_cont_1, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scr_SystemSetting_cont_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scr_SystemSetting_cont_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scr_SystemSetting_cont_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scr_SystemSetting_cont_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_SystemSetting_cont_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scr_SystemSetting_cont_2
    ui->scr_SystemSetting_cont_2 = lv_obj_create(ui->scr_SystemSetting_cont_1);
    lv_obj_set_pos(ui->scr_SystemSetting_cont_2, 90, 0);
    lv_obj_set_size(ui->scr_SystemSetting_cont_2, 1100, 630);
    lv_obj_set_scrollbar_mode(ui->scr_SystemSetting_cont_2, LV_SCROLLBAR_MODE_OFF);

    //Write style for scr_SystemSetting_cont_2, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scr_SystemSetting_cont_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_SystemSetting_cont_2, 20, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scr_SystemSetting_cont_2, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scr_SystemSetting_cont_2, lv_color_hex(0x1a1a1a), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scr_SystemSetting_cont_2, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scr_SystemSetting_cont_2, 24, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scr_SystemSetting_cont_2, 24, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scr_SystemSetting_cont_2, 24, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scr_SystemSetting_cont_2, 24, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_SystemSetting_cont_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scr_SystemSetting_cont_8
    ui->scr_SystemSetting_cont_8 = lv_obj_create(ui->scr_SystemSetting_cont_2);
    lv_obj_set_pos(ui->scr_SystemSetting_cont_8, 0, -7);
    lv_obj_set_size(ui->scr_SystemSetting_cont_8, 1050, 220);
    lv_obj_set_scrollbar_mode(ui->scr_SystemSetting_cont_8, LV_SCROLLBAR_MODE_OFF);

    //Write style for scr_SystemSetting_cont_8, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scr_SystemSetting_cont_8, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_SystemSetting_cont_8, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scr_SystemSetting_cont_8, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scr_SystemSetting_cont_8, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scr_SystemSetting_cont_8, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scr_SystemSetting_cont_8, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scr_SystemSetting_cont_8, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_SystemSetting_cont_8, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scr_SystemSetting_label_6
    ui->scr_SystemSetting_label_6 = lv_label_create(ui->scr_SystemSetting_cont_8);
    lv_obj_set_pos(ui->scr_SystemSetting_label_6, 77, 15);
    lv_obj_set_size(ui->scr_SystemSetting_label_6, 147, 32);
    lv_label_set_text(ui->scr_SystemSetting_label_6, "Display");
    lv_label_set_long_mode(ui->scr_SystemSetting_label_6, LV_LABEL_LONG_WRAP);

    //Write style for scr_SystemSetting_label_6, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scr_SystemSetting_label_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_SystemSetting_label_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scr_SystemSetting_label_6, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scr_SystemSetting_label_6, &lv_font_arial_32, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scr_SystemSetting_label_6, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->scr_SystemSetting_label_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->scr_SystemSetting_label_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scr_SystemSetting_label_6, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scr_SystemSetting_label_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scr_SystemSetting_label_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scr_SystemSetting_label_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scr_SystemSetting_label_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scr_SystemSetting_label_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_SystemSetting_label_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scr_SystemSetting_img_1
    ui->scr_SystemSetting_img_1 = lv_image_create(ui->scr_SystemSetting_cont_8);
    lv_obj_set_pos(ui->scr_SystemSetting_img_1, 10, 0);
    lv_obj_set_size(ui->scr_SystemSetting_img_1, 64, 64);
    lv_obj_add_flag(ui->scr_SystemSetting_img_1, LV_OBJ_FLAG_CLICKABLE);
    lv_image_set_src(ui->scr_SystemSetting_img_1, &_brightness_RGB565A8_64x64);
    lv_image_set_pivot(ui->scr_SystemSetting_img_1, 50,50);
    lv_image_set_rotation(ui->scr_SystemSetting_img_1, 0);

    //Write style for scr_SystemSetting_img_1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_image_recolor_opa(ui->scr_SystemSetting_img_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_image_opa(ui->scr_SystemSetting_img_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scr_SystemSetting_cont_7
    ui->scr_SystemSetting_cont_7 = lv_obj_create(ui->scr_SystemSetting_cont_8);
    lv_obj_set_pos(ui->scr_SystemSetting_cont_7, 0, 74);
    lv_obj_set_size(ui->scr_SystemSetting_cont_7, 1050, 130);
    lv_obj_set_scrollbar_mode(ui->scr_SystemSetting_cont_7, LV_SCROLLBAR_MODE_OFF);

    //Write style for scr_SystemSetting_cont_7, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scr_SystemSetting_cont_7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_SystemSetting_cont_7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scr_SystemSetting_cont_7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scr_SystemSetting_cont_7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scr_SystemSetting_cont_7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scr_SystemSetting_cont_7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scr_SystemSetting_cont_7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_SystemSetting_cont_7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scr_SystemSetting_label_5
    ui->scr_SystemSetting_label_5 = lv_label_create(ui->scr_SystemSetting_cont_7);
    lv_obj_set_pos(ui->scr_SystemSetting_label_5, 10, 30);
    lv_obj_set_size(ui->scr_SystemSetting_label_5, 197, 32);
    lv_label_set_text(ui->scr_SystemSetting_label_5, "Brightness");
    lv_label_set_long_mode(ui->scr_SystemSetting_label_5, LV_LABEL_LONG_WRAP);

    //Write style for scr_SystemSetting_label_5, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scr_SystemSetting_label_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_SystemSetting_label_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scr_SystemSetting_label_5, lv_color_hex(0xbdbdbd), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scr_SystemSetting_label_5, &lv_font_montserratMedium_25, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scr_SystemSetting_label_5, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->scr_SystemSetting_label_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->scr_SystemSetting_label_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scr_SystemSetting_label_5, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scr_SystemSetting_label_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scr_SystemSetting_label_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scr_SystemSetting_label_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scr_SystemSetting_label_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scr_SystemSetting_label_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_SystemSetting_label_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scr_SystemSetting_slider_1
    ui->scr_SystemSetting_slider_1 = lv_slider_create(ui->scr_SystemSetting_cont_7);
    lv_obj_set_pos(ui->scr_SystemSetting_slider_1, 208, 30);
    lv_obj_set_size(ui->scr_SystemSetting_slider_1, 830, 20);
    lv_slider_set_range(ui->scr_SystemSetting_slider_1, 0, 100);
    lv_slider_set_mode(ui->scr_SystemSetting_slider_1, LV_SLIDER_MODE_NORMAL);
    lv_slider_set_value(ui->scr_SystemSetting_slider_1, 50, LV_ANIM_OFF);

    //Write style for scr_SystemSetting_slider_1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->scr_SystemSetting_slider_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scr_SystemSetting_slider_1, lv_color_hex(0x3a3b3c), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scr_SystemSetting_slider_1, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_SystemSetting_slider_1, 8, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_outline_width(ui->scr_SystemSetting_slider_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_SystemSetting_slider_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style for scr_SystemSetting_slider_1, Part: LV_PART_INDICATOR, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->scr_SystemSetting_slider_1, 255, LV_PART_INDICATOR|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scr_SystemSetting_slider_1, lv_color_hex(0x2195f6), LV_PART_INDICATOR|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scr_SystemSetting_slider_1, LV_GRAD_DIR_NONE, LV_PART_INDICATOR|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_SystemSetting_slider_1, 8, LV_PART_INDICATOR|LV_STATE_DEFAULT);

    //Write style for scr_SystemSetting_slider_1, Part: LV_PART_KNOB, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->scr_SystemSetting_slider_1, 255, LV_PART_KNOB|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scr_SystemSetting_slider_1, lv_color_hex(0x2195f6), LV_PART_KNOB|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scr_SystemSetting_slider_1, LV_GRAD_DIR_NONE, LV_PART_KNOB|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_SystemSetting_slider_1, 8, LV_PART_KNOB|LV_STATE_DEFAULT);

    //Write codes scr_SystemSetting_label_4
    ui->scr_SystemSetting_label_4 = lv_label_create(ui->scr_SystemSetting_cont_7);
    lv_obj_set_pos(ui->scr_SystemSetting_label_4, 39, 91);
    lv_obj_set_size(ui->scr_SystemSetting_label_4, 145, 32);
    lv_label_set_text(ui->scr_SystemSetting_label_4, "Auto Sleep");
    lv_label_set_long_mode(ui->scr_SystemSetting_label_4, LV_LABEL_LONG_WRAP);

    //Write style for scr_SystemSetting_label_4, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scr_SystemSetting_label_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_SystemSetting_label_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scr_SystemSetting_label_4, lv_color_hex(0xbdbdbd), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scr_SystemSetting_label_4, &lv_font_montserratMedium_25, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scr_SystemSetting_label_4, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->scr_SystemSetting_label_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->scr_SystemSetting_label_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scr_SystemSetting_label_4, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scr_SystemSetting_label_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scr_SystemSetting_label_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scr_SystemSetting_label_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scr_SystemSetting_label_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scr_SystemSetting_label_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_SystemSetting_label_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scr_SystemSetting_ddlist_1
    ui->scr_SystemSetting_ddlist_1 = lv_dropdown_create(ui->scr_SystemSetting_cont_7);
    lv_obj_set_pos(ui->scr_SystemSetting_ddlist_1, 208, 74);
    lv_obj_set_size(ui->scr_SystemSetting_ddlist_1, 303, 49);
    lv_dropdown_set_options(ui->scr_SystemSetting_ddlist_1, "5 min.\n10 min.\n30 min.");

    //Write style for scr_SystemSetting_ddlist_1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_text_color(ui->scr_SystemSetting_ddlist_1, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scr_SystemSetting_ddlist_1, &lv_font_arial_30, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scr_SystemSetting_ddlist_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->scr_SystemSetting_ddlist_1, 1, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->scr_SystemSetting_ddlist_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->scr_SystemSetting_ddlist_1, lv_color_hex(0xe1e6ee), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->scr_SystemSetting_ddlist_1, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scr_SystemSetting_ddlist_1, 8, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scr_SystemSetting_ddlist_1, 6, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scr_SystemSetting_ddlist_1, 6, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_SystemSetting_ddlist_1, 1, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scr_SystemSetting_ddlist_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scr_SystemSetting_ddlist_1, lv_color_hex(0x414040), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scr_SystemSetting_ddlist_1, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_SystemSetting_ddlist_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style state: LV_STATE_CHECKED for &style_scr_SystemSetting_ddlist_1_extra_list_selected_checked
    static lv_style_t style_scr_SystemSetting_ddlist_1_extra_list_selected_checked;
    ui_init_style(&style_scr_SystemSetting_ddlist_1_extra_list_selected_checked);

    lv_style_set_border_width(&style_scr_SystemSetting_ddlist_1_extra_list_selected_checked, 1);
    lv_style_set_border_opa(&style_scr_SystemSetting_ddlist_1_extra_list_selected_checked, 255);
    lv_style_set_border_color(&style_scr_SystemSetting_ddlist_1_extra_list_selected_checked, lv_color_hex(0xe1e6ee));
    lv_style_set_border_side(&style_scr_SystemSetting_ddlist_1_extra_list_selected_checked, LV_BORDER_SIDE_FULL);
    lv_style_set_radius(&style_scr_SystemSetting_ddlist_1_extra_list_selected_checked, 3);
    lv_style_set_bg_opa(&style_scr_SystemSetting_ddlist_1_extra_list_selected_checked, 255);
    lv_style_set_bg_color(&style_scr_SystemSetting_ddlist_1_extra_list_selected_checked, lv_color_hex(0x00a1b5));
    lv_style_set_bg_grad_dir(&style_scr_SystemSetting_ddlist_1_extra_list_selected_checked, LV_GRAD_DIR_NONE);
    lv_obj_add_style(lv_dropdown_get_list(ui->scr_SystemSetting_ddlist_1), &style_scr_SystemSetting_ddlist_1_extra_list_selected_checked, LV_PART_SELECTED|LV_STATE_CHECKED);

    //Write style state: LV_STATE_DEFAULT for &style_scr_SystemSetting_ddlist_1_extra_list_main_default
    static lv_style_t style_scr_SystemSetting_ddlist_1_extra_list_main_default;
    ui_init_style(&style_scr_SystemSetting_ddlist_1_extra_list_main_default);

    lv_style_set_max_height(&style_scr_SystemSetting_ddlist_1_extra_list_main_default, 90);
    lv_style_set_text_color(&style_scr_SystemSetting_ddlist_1_extra_list_main_default, lv_color_hex(0x0D3055));
    lv_style_set_text_font(&style_scr_SystemSetting_ddlist_1_extra_list_main_default, &lv_font_montserratMedium_12);
    lv_style_set_text_opa(&style_scr_SystemSetting_ddlist_1_extra_list_main_default, 255);
    lv_style_set_border_width(&style_scr_SystemSetting_ddlist_1_extra_list_main_default, 1);
    lv_style_set_border_opa(&style_scr_SystemSetting_ddlist_1_extra_list_main_default, 255);
    lv_style_set_border_color(&style_scr_SystemSetting_ddlist_1_extra_list_main_default, lv_color_hex(0xe1e6ee));
    lv_style_set_border_side(&style_scr_SystemSetting_ddlist_1_extra_list_main_default, LV_BORDER_SIDE_FULL);
    lv_style_set_radius(&style_scr_SystemSetting_ddlist_1_extra_list_main_default, 3);
    lv_style_set_bg_opa(&style_scr_SystemSetting_ddlist_1_extra_list_main_default, 255);
    lv_style_set_bg_color(&style_scr_SystemSetting_ddlist_1_extra_list_main_default, lv_color_hex(0xffffff));
    lv_style_set_bg_grad_dir(&style_scr_SystemSetting_ddlist_1_extra_list_main_default, LV_GRAD_DIR_NONE);
    lv_obj_add_style(lv_dropdown_get_list(ui->scr_SystemSetting_ddlist_1), &style_scr_SystemSetting_ddlist_1_extra_list_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style state: LV_STATE_DEFAULT for &style_scr_SystemSetting_ddlist_1_extra_list_scrollbar_default
    static lv_style_t style_scr_SystemSetting_ddlist_1_extra_list_scrollbar_default;
    ui_init_style(&style_scr_SystemSetting_ddlist_1_extra_list_scrollbar_default);

    lv_style_set_radius(&style_scr_SystemSetting_ddlist_1_extra_list_scrollbar_default, 3);
    lv_style_set_bg_opa(&style_scr_SystemSetting_ddlist_1_extra_list_scrollbar_default, 255);
    lv_style_set_bg_color(&style_scr_SystemSetting_ddlist_1_extra_list_scrollbar_default, lv_color_hex(0x00ff00));
    lv_style_set_bg_grad_dir(&style_scr_SystemSetting_ddlist_1_extra_list_scrollbar_default, LV_GRAD_DIR_NONE);
    lv_obj_add_style(lv_dropdown_get_list(ui->scr_SystemSetting_ddlist_1), &style_scr_SystemSetting_ddlist_1_extra_list_scrollbar_default, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);

    //Write codes scr_SystemSetting_line_4
    ui->scr_SystemSetting_line_4 = lv_line_create(ui->scr_SystemSetting_cont_2);
    lv_obj_set_pos(ui->scr_SystemSetting_line_4, 0, 75);
    lv_obj_set_size(ui->scr_SystemSetting_line_4, 1050, 2);
    static lv_point_precise_t scr_SystemSetting_line_4[] = {{0, 0},{1050, 0}};
    lv_line_set_points(ui->scr_SystemSetting_line_4, scr_SystemSetting_line_4, 2);

    //Write style for scr_SystemSetting_line_4, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_line_width(ui->scr_SystemSetting_line_4, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_color(ui->scr_SystemSetting_line_4, lv_color_hex(0x2b2b2b), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_opa(ui->scr_SystemSetting_line_4, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_rounded(ui->scr_SystemSetting_line_4, true, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scr_SystemSetting_line_2
    ui->scr_SystemSetting_line_2 = lv_line_create(ui->scr_SystemSetting_cont_2);
    lv_obj_set_pos(ui->scr_SystemSetting_line_2, 0, 217);
    lv_obj_set_size(ui->scr_SystemSetting_line_2, 1050, 2);
    static lv_point_precise_t scr_SystemSetting_line_2[] = {{0, 0},{1050, 0}};
    lv_line_set_points(ui->scr_SystemSetting_line_2, scr_SystemSetting_line_2, 2);

    //Write style for scr_SystemSetting_line_2, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_line_width(ui->scr_SystemSetting_line_2, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_color(ui->scr_SystemSetting_line_2, lv_color_hex(0x2b2b2b), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_opa(ui->scr_SystemSetting_line_2, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_rounded(ui->scr_SystemSetting_line_2, true, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scr_SystemSetting_line_1
    ui->scr_SystemSetting_line_1 = lv_line_create(ui->scr_SystemSetting_cont_2);
    lv_obj_set_pos(ui->scr_SystemSetting_line_1, 0, 462);
    lv_obj_set_size(ui->scr_SystemSetting_line_1, 1050, 2);
    static lv_point_precise_t scr_SystemSetting_line_1[] = {{0, 0},{1050, 0}};
    lv_line_set_points(ui->scr_SystemSetting_line_1, scr_SystemSetting_line_1, 2);

    //Write style for scr_SystemSetting_line_1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_line_width(ui->scr_SystemSetting_line_1, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_color(ui->scr_SystemSetting_line_1, lv_color_hex(0x2b2b2b), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_opa(ui->scr_SystemSetting_line_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_rounded(ui->scr_SystemSetting_line_1, true, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scr_SystemSetting_cont_3
    ui->scr_SystemSetting_cont_3 = lv_obj_create(ui->scr_SystemSetting_cont_2);
    lv_obj_set_pos(ui->scr_SystemSetting_cont_3, 0, 480);
    lv_obj_set_size(ui->scr_SystemSetting_cont_3, 1050, 90);
    lv_obj_set_scrollbar_mode(ui->scr_SystemSetting_cont_3, LV_SCROLLBAR_MODE_OFF);

    //Write style for scr_SystemSetting_cont_3, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scr_SystemSetting_cont_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_SystemSetting_cont_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scr_SystemSetting_cont_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scr_SystemSetting_cont_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scr_SystemSetting_cont_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scr_SystemSetting_cont_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scr_SystemSetting_cont_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_SystemSetting_cont_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scr_SystemSetting_btn_2
    ui->scr_SystemSetting_btn_2 = lv_button_create(ui->scr_SystemSetting_cont_3);
    lv_obj_set_pos(ui->scr_SystemSetting_btn_2, 14, 2);
    lv_obj_set_size(ui->scr_SystemSetting_btn_2, 480, 80);
    ui->scr_SystemSetting_btn_2_label = lv_label_create(ui->scr_SystemSetting_btn_2);
    lv_label_set_text(ui->scr_SystemSetting_btn_2_label, "REBOOT");
    lv_label_set_long_mode(ui->scr_SystemSetting_btn_2_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->scr_SystemSetting_btn_2_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->scr_SystemSetting_btn_2, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->scr_SystemSetting_btn_2_label, LV_PCT(100));

    //Write style for scr_SystemSetting_btn_2, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->scr_SystemSetting_btn_2, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scr_SystemSetting_btn_2, lv_color_hex(0x2B2B2B), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scr_SystemSetting_btn_2, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->scr_SystemSetting_btn_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_SystemSetting_btn_2, 14, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_SystemSetting_btn_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scr_SystemSetting_btn_2, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scr_SystemSetting_btn_2, &lv_font_Acme_Regular_30, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scr_SystemSetting_btn_2, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scr_SystemSetting_btn_2, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scr_SystemSetting_btn_1
    ui->scr_SystemSetting_btn_1 = lv_button_create(ui->scr_SystemSetting_cont_3);
    lv_obj_set_pos(ui->scr_SystemSetting_btn_1, 553, 2);
    lv_obj_set_size(ui->scr_SystemSetting_btn_1, 480, 80);
    ui->scr_SystemSetting_btn_1_label = lv_label_create(ui->scr_SystemSetting_btn_1);
    lv_label_set_text(ui->scr_SystemSetting_btn_1_label, "RESET");
    lv_label_set_long_mode(ui->scr_SystemSetting_btn_1_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->scr_SystemSetting_btn_1_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->scr_SystemSetting_btn_1, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->scr_SystemSetting_btn_1_label, LV_PCT(100));

    //Write style for scr_SystemSetting_btn_1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->scr_SystemSetting_btn_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scr_SystemSetting_btn_1, lv_color_hex(0x2B2B2B), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scr_SystemSetting_btn_1, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->scr_SystemSetting_btn_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_SystemSetting_btn_1, 14, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_SystemSetting_btn_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scr_SystemSetting_btn_1, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scr_SystemSetting_btn_1, &lv_font_Acme_Regular_30, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scr_SystemSetting_btn_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scr_SystemSetting_btn_1, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scr_SystemSetting_cont_9
    ui->scr_SystemSetting_cont_9 = lv_obj_create(ui->scr_SystemSetting_cont_2);
    lv_obj_set_pos(ui->scr_SystemSetting_cont_9, 0, 223);
    lv_obj_set_size(ui->scr_SystemSetting_cont_9, 1050, 214);
    lv_obj_set_scrollbar_mode(ui->scr_SystemSetting_cont_9, LV_SCROLLBAR_MODE_OFF);

    //Write style for scr_SystemSetting_cont_9, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scr_SystemSetting_cont_9, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_SystemSetting_cont_9, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scr_SystemSetting_cont_9, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scr_SystemSetting_cont_9, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scr_SystemSetting_cont_9, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scr_SystemSetting_cont_9, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scr_SystemSetting_cont_9, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_SystemSetting_cont_9, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scr_SystemSetting_label_9
    ui->scr_SystemSetting_label_9 = lv_label_create(ui->scr_SystemSetting_cont_9);
    lv_obj_set_pos(ui->scr_SystemSetting_label_9, 77, 15);
    lv_obj_set_size(ui->scr_SystemSetting_label_9, 147, 32);
    lv_label_set_text(ui->scr_SystemSetting_label_9, "Device");
    lv_label_set_long_mode(ui->scr_SystemSetting_label_9, LV_LABEL_LONG_WRAP);

    //Write style for scr_SystemSetting_label_9, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scr_SystemSetting_label_9, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_SystemSetting_label_9, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scr_SystemSetting_label_9, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scr_SystemSetting_label_9, &lv_font_arial_32, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scr_SystemSetting_label_9, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->scr_SystemSetting_label_9, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->scr_SystemSetting_label_9, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scr_SystemSetting_label_9, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scr_SystemSetting_label_9, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scr_SystemSetting_label_9, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scr_SystemSetting_label_9, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scr_SystemSetting_label_9, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scr_SystemSetting_label_9, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_SystemSetting_label_9, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scr_SystemSetting_img_2
    ui->scr_SystemSetting_img_2 = lv_image_create(ui->scr_SystemSetting_cont_9);
    lv_obj_set_pos(ui->scr_SystemSetting_img_2, 10, 1);
    lv_obj_set_size(ui->scr_SystemSetting_img_2, 64, 64);
    lv_obj_add_flag(ui->scr_SystemSetting_img_2, LV_OBJ_FLAG_CLICKABLE);
    lv_image_set_src(ui->scr_SystemSetting_img_2, &_system_RGB565A8_64x64);
    lv_image_set_pivot(ui->scr_SystemSetting_img_2, 50,50);
    lv_image_set_rotation(ui->scr_SystemSetting_img_2, 0);

    //Write style for scr_SystemSetting_img_2, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_image_recolor_opa(ui->scr_SystemSetting_img_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_image_opa(ui->scr_SystemSetting_img_2, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scr_SystemSetting_cont_10
    ui->scr_SystemSetting_cont_10 = lv_obj_create(ui->scr_SystemSetting_cont_9);
    lv_obj_set_pos(ui->scr_SystemSetting_cont_10, 11, 90);
    lv_obj_set_size(ui->scr_SystemSetting_cont_10, 1050, 137);
    lv_obj_set_scrollbar_mode(ui->scr_SystemSetting_cont_10, LV_SCROLLBAR_MODE_OFF);

    //Write style for scr_SystemSetting_cont_10, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scr_SystemSetting_cont_10, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_SystemSetting_cont_10, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scr_SystemSetting_cont_10, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scr_SystemSetting_cont_10, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scr_SystemSetting_cont_10, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scr_SystemSetting_cont_10, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scr_SystemSetting_cont_10, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_SystemSetting_cont_10, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scr_SystemSetting_label_8
    ui->scr_SystemSetting_label_8 = lv_label_create(ui->scr_SystemSetting_cont_10);
    lv_obj_set_pos(ui->scr_SystemSetting_label_8, 11, 10);
    lv_obj_set_size(ui->scr_SystemSetting_label_8, 200, 32);
    lv_label_set_text(ui->scr_SystemSetting_label_8, "Device Name:");
    lv_label_set_long_mode(ui->scr_SystemSetting_label_8, LV_LABEL_LONG_WRAP);

    //Write style for scr_SystemSetting_label_8, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scr_SystemSetting_label_8, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_SystemSetting_label_8, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scr_SystemSetting_label_8, lv_color_hex(0xbdbdbd), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scr_SystemSetting_label_8, &lv_font_montserratMedium_25, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scr_SystemSetting_label_8, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->scr_SystemSetting_label_8, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->scr_SystemSetting_label_8, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scr_SystemSetting_label_8, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scr_SystemSetting_label_8, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scr_SystemSetting_label_8, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scr_SystemSetting_label_8, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scr_SystemSetting_label_8, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scr_SystemSetting_label_8, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_SystemSetting_label_8, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scr_SystemSetting_label_7
    ui->scr_SystemSetting_label_7 = lv_label_create(ui->scr_SystemSetting_cont_10);
    lv_obj_set_pos(ui->scr_SystemSetting_label_7, 11, 57);
    lv_obj_set_size(ui->scr_SystemSetting_label_7, 254, 32);
    lv_label_set_text(ui->scr_SystemSetting_label_7, "Firmware Version:");
    lv_label_set_long_mode(ui->scr_SystemSetting_label_7, LV_LABEL_LONG_WRAP);

    //Write style for scr_SystemSetting_label_7, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scr_SystemSetting_label_7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_SystemSetting_label_7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scr_SystemSetting_label_7, lv_color_hex(0xbdbdbd), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scr_SystemSetting_label_7, &lv_font_montserratMedium_25, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scr_SystemSetting_label_7, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->scr_SystemSetting_label_7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->scr_SystemSetting_label_7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scr_SystemSetting_label_7, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scr_SystemSetting_label_7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scr_SystemSetting_label_7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scr_SystemSetting_label_7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scr_SystemSetting_label_7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scr_SystemSetting_label_7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_SystemSetting_label_7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scr_SystemSetting_label_10
    ui->scr_SystemSetting_label_10 = lv_label_create(ui->scr_SystemSetting_cont_10);
    lv_obj_set_pos(ui->scr_SystemSetting_label_10, 11, 104);
    lv_obj_set_size(ui->scr_SystemSetting_label_10, 222, 32);
    lv_label_set_text(ui->scr_SystemSetting_label_10, "Serial Number:");
    lv_label_set_long_mode(ui->scr_SystemSetting_label_10, LV_LABEL_LONG_WRAP);

    //Write style for scr_SystemSetting_label_10, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scr_SystemSetting_label_10, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_SystemSetting_label_10, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scr_SystemSetting_label_10, lv_color_hex(0xbdbdbd), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scr_SystemSetting_label_10, &lv_font_montserratMedium_25, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scr_SystemSetting_label_10, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->scr_SystemSetting_label_10, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->scr_SystemSetting_label_10, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scr_SystemSetting_label_10, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scr_SystemSetting_label_10, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scr_SystemSetting_label_10, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scr_SystemSetting_label_10, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scr_SystemSetting_label_10, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scr_SystemSetting_label_10, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_SystemSetting_label_10, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scr_SystemSetting_label_11
    ui->scr_SystemSetting_label_11 = lv_label_create(ui->scr_SystemSetting_cont_10);
    lv_obj_set_pos(ui->scr_SystemSetting_label_11, 453, 10);
    lv_obj_set_size(ui->scr_SystemSetting_label_11, 293, 32);
    lv_label_set_text(ui->scr_SystemSetting_label_11, "EDGE - GATEWAY - 01");
    lv_label_set_long_mode(ui->scr_SystemSetting_label_11, LV_LABEL_LONG_WRAP);

    //Write style for scr_SystemSetting_label_11, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scr_SystemSetting_label_11, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_SystemSetting_label_11, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scr_SystemSetting_label_11, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scr_SystemSetting_label_11, &lv_font_montserratMedium_25, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scr_SystemSetting_label_11, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->scr_SystemSetting_label_11, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->scr_SystemSetting_label_11, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scr_SystemSetting_label_11, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scr_SystemSetting_label_11, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scr_SystemSetting_label_11, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scr_SystemSetting_label_11, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scr_SystemSetting_label_11, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scr_SystemSetting_label_11, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_SystemSetting_label_11, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scr_SystemSetting_label_12
    ui->scr_SystemSetting_label_12 = lv_label_create(ui->scr_SystemSetting_cont_10);
    lv_obj_set_pos(ui->scr_SystemSetting_label_12, 453, 57);
    lv_obj_set_size(ui->scr_SystemSetting_label_12, 90, 32);
    lv_label_set_text(ui->scr_SystemSetting_label_12, "v1.0.0");
    lv_label_set_long_mode(ui->scr_SystemSetting_label_12, LV_LABEL_LONG_WRAP);

    //Write style for scr_SystemSetting_label_12, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scr_SystemSetting_label_12, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_SystemSetting_label_12, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scr_SystemSetting_label_12, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scr_SystemSetting_label_12, &lv_font_montserratMedium_25, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scr_SystemSetting_label_12, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->scr_SystemSetting_label_12, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->scr_SystemSetting_label_12, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scr_SystemSetting_label_12, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scr_SystemSetting_label_12, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scr_SystemSetting_label_12, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scr_SystemSetting_label_12, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scr_SystemSetting_label_12, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scr_SystemSetting_label_12, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_SystemSetting_label_12, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scr_SystemSetting_label_13
    ui->scr_SystemSetting_label_13 = lv_label_create(ui->scr_SystemSetting_cont_10);
    lv_obj_set_pos(ui->scr_SystemSetting_label_13, 453, 104);
    lv_obj_set_size(ui->scr_SystemSetting_label_13, 155, 32);
    lv_label_set_text(ui->scr_SystemSetting_label_13, "SN-123456");
    lv_label_set_long_mode(ui->scr_SystemSetting_label_13, LV_LABEL_LONG_WRAP);

    //Write style for scr_SystemSetting_label_13, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scr_SystemSetting_label_13, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_SystemSetting_label_13, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scr_SystemSetting_label_13, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scr_SystemSetting_label_13, &lv_font_montserratMedium_25, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scr_SystemSetting_label_13, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->scr_SystemSetting_label_13, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->scr_SystemSetting_label_13, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scr_SystemSetting_label_13, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scr_SystemSetting_label_13, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scr_SystemSetting_label_13, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scr_SystemSetting_label_13, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scr_SystemSetting_label_13, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scr_SystemSetting_label_13, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_SystemSetting_label_13, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scr_SystemSetting_line_5
    ui->scr_SystemSetting_line_5 = lv_line_create(ui->scr_SystemSetting_cont_9);
    lv_obj_set_pos(ui->scr_SystemSetting_line_5, 0, 80);
    lv_obj_set_size(ui->scr_SystemSetting_line_5, 1050, 2);
    static lv_point_precise_t scr_SystemSetting_line_5[] = {{0, 0},{1050, 0}};
    lv_line_set_points(ui->scr_SystemSetting_line_5, scr_SystemSetting_line_5, 2);

    //Write style for scr_SystemSetting_line_5, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_line_width(ui->scr_SystemSetting_line_5, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_color(ui->scr_SystemSetting_line_5, lv_color_hex(0x2b2b2b), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_opa(ui->scr_SystemSetting_line_5, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_rounded(ui->scr_SystemSetting_line_5, true, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scr_SystemSetting_imgbtn_back
    ui->scr_SystemSetting_imgbtn_back = lv_imagebutton_create(ui->scr_SystemSetting);
    lv_obj_set_pos(ui->scr_SystemSetting_imgbtn_back, 40, 14);
    lv_obj_set_size(ui->scr_SystemSetting_imgbtn_back, 64, 64);
    lv_imagebutton_set_src(ui->scr_SystemSetting_imgbtn_back, LV_IMAGEBUTTON_STATE_RELEASED, &_leftarrow_RGB565A8_64x64, NULL, NULL);
    ui->scr_SystemSetting_imgbtn_back_label = lv_label_create(ui->scr_SystemSetting_imgbtn_back);
    lv_label_set_text(ui->scr_SystemSetting_imgbtn_back_label, "");
    lv_label_set_long_mode(ui->scr_SystemSetting_imgbtn_back_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->scr_SystemSetting_imgbtn_back_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->scr_SystemSetting_imgbtn_back, 0, LV_STATE_DEFAULT);

    //Write style for scr_SystemSetting_imgbtn_back, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_text_color(ui->scr_SystemSetting_imgbtn_back, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scr_SystemSetting_imgbtn_back, &lv_font_montserratMedium_12, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scr_SystemSetting_imgbtn_back, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scr_SystemSetting_imgbtn_back, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_SystemSetting_imgbtn_back, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style for scr_SystemSetting_imgbtn_back, Part: LV_PART_MAIN, State: LV_STATE_PRESSED.
    lv_obj_set_style_image_recolor_opa(ui->scr_SystemSetting_imgbtn_back, 0, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_image_opa(ui->scr_SystemSetting_imgbtn_back, 255, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_text_color(ui->scr_SystemSetting_imgbtn_back, lv_color_hex(0xFF33FF), LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_text_font(ui->scr_SystemSetting_imgbtn_back, &lv_font_montserratMedium_12, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_text_opa(ui->scr_SystemSetting_imgbtn_back, 255, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_shadow_width(ui->scr_SystemSetting_imgbtn_back, 0, LV_PART_MAIN|LV_STATE_PRESSED);

    //Write style for scr_SystemSetting_imgbtn_back, Part: LV_PART_MAIN, State: LV_STATE_CHECKED.
    lv_obj_set_style_image_recolor_opa(ui->scr_SystemSetting_imgbtn_back, 0, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_image_opa(ui->scr_SystemSetting_imgbtn_back, 255, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_text_color(ui->scr_SystemSetting_imgbtn_back, lv_color_hex(0xFF33FF), LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_text_font(ui->scr_SystemSetting_imgbtn_back, &lv_font_montserratMedium_12, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_text_opa(ui->scr_SystemSetting_imgbtn_back, 255, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_shadow_width(ui->scr_SystemSetting_imgbtn_back, 0, LV_PART_MAIN|LV_STATE_CHECKED);

    //Write style for scr_SystemSetting_imgbtn_back, Part: LV_PART_MAIN, State: LV_IMAGEBUTTON_STATE_RELEASED.
    lv_obj_set_style_image_recolor_opa(ui->scr_SystemSetting_imgbtn_back, 0, LV_PART_MAIN|LV_IMAGEBUTTON_STATE_RELEASED);
    lv_obj_set_style_image_opa(ui->scr_SystemSetting_imgbtn_back, 255, LV_PART_MAIN|LV_IMAGEBUTTON_STATE_RELEASED);

    //The custom code of scr_SystemSetting.


    //Update current screen layout.
    lv_obj_update_layout(ui->scr_SystemSetting);

    //Init events for screen.
    events_init_scr_SystemSetting(ui);
}
