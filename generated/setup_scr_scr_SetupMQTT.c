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



void setup_scr_scr_SetupMQTT(lv_ui *ui)
{
    //Write codes scr_SetupMQTT
    ui->scr_SetupMQTT = lv_obj_create(NULL);
    lv_obj_set_size(ui->scr_SetupMQTT, 1280, 720);
    lv_obj_set_scrollbar_mode(ui->scr_SetupMQTT, LV_SCROLLBAR_MODE_OFF);

    //Write style for scr_SetupMQTT, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->scr_SetupMQTT, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scr_SetupMQTT, lv_color_hex(0x121212), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scr_SetupMQTT, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scr_SetupMQTT_cont_root
    ui->scr_SetupMQTT_cont_root = lv_obj_create(ui->scr_SetupMQTT);
    lv_obj_set_pos(ui->scr_SetupMQTT_cont_root, 0, 0);
    lv_obj_set_size(ui->scr_SetupMQTT_cont_root, 1280, 720);
    lv_obj_set_scrollbar_mode(ui->scr_SetupMQTT_cont_root, LV_SCROLLBAR_MODE_OFF);

    //Write style for scr_SetupMQTT_cont_root, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scr_SetupMQTT_cont_root, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_SetupMQTT_cont_root, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scr_SetupMQTT_cont_root, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scr_SetupMQTT_cont_root, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scr_SetupMQTT_cont_root, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scr_SetupMQTT_cont_root, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scr_SetupMQTT_cont_root, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_SetupMQTT_cont_root, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scr_SetupMQTT_cont_topbar
    ui->scr_SetupMQTT_cont_topbar = lv_obj_create(ui->scr_SetupMQTT_cont_root);
    lv_obj_set_pos(ui->scr_SetupMQTT_cont_topbar, 0, 0);
    lv_obj_set_size(ui->scr_SetupMQTT_cont_topbar, 1280, 90);
    lv_obj_set_scrollbar_mode(ui->scr_SetupMQTT_cont_topbar, LV_SCROLLBAR_MODE_OFF);

    //Write style for scr_SetupMQTT_cont_topbar, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scr_SetupMQTT_cont_topbar, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_SetupMQTT_cont_topbar, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scr_SetupMQTT_cont_topbar, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scr_SetupMQTT_cont_topbar, lv_color_hex(0x2B2B2B), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scr_SetupMQTT_cont_topbar, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scr_SetupMQTT_cont_topbar, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scr_SetupMQTT_cont_topbar, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scr_SetupMQTT_cont_topbar, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scr_SetupMQTT_cont_topbar, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_SetupMQTT_cont_topbar, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scr_SetupMQTT_lbl_tiltle
    ui->scr_SetupMQTT_lbl_tiltle = lv_label_create(ui->scr_SetupMQTT_cont_topbar);
    lv_obj_set_pos(ui->scr_SetupMQTT_lbl_tiltle, 470, 20);
    lv_obj_set_size(ui->scr_SetupMQTT_lbl_tiltle, 339, 59);
    lv_label_set_text(ui->scr_SetupMQTT_lbl_tiltle, "SERVER (MQTT)");
    lv_label_set_long_mode(ui->scr_SetupMQTT_lbl_tiltle, LV_LABEL_LONG_WRAP);

    //Write style for scr_SetupMQTT_lbl_tiltle, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scr_SetupMQTT_lbl_tiltle, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_SetupMQTT_lbl_tiltle, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scr_SetupMQTT_lbl_tiltle, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scr_SetupMQTT_lbl_tiltle, &lv_font_Acme_Regular_50, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scr_SetupMQTT_lbl_tiltle, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->scr_SetupMQTT_lbl_tiltle, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->scr_SetupMQTT_lbl_tiltle, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scr_SetupMQTT_lbl_tiltle, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scr_SetupMQTT_lbl_tiltle, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scr_SetupMQTT_lbl_tiltle, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scr_SetupMQTT_lbl_tiltle, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scr_SetupMQTT_lbl_tiltle, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scr_SetupMQTT_lbl_tiltle, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_SetupMQTT_lbl_tiltle, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scr_SetupMQTT_cont_top_right
    ui->scr_SetupMQTT_cont_top_right = lv_obj_create(ui->scr_SetupMQTT_cont_topbar);
    lv_obj_set_pos(ui->scr_SetupMQTT_cont_top_right, 990, 0);
    lv_obj_set_size(ui->scr_SetupMQTT_cont_top_right, 270, 90);
    lv_obj_set_scrollbar_mode(ui->scr_SetupMQTT_cont_top_right, LV_SCROLLBAR_MODE_OFF);

    //Write style for scr_SetupMQTT_cont_top_right, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scr_SetupMQTT_cont_top_right, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_SetupMQTT_cont_top_right, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scr_SetupMQTT_cont_top_right, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scr_SetupMQTT_cont_top_right, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scr_SetupMQTT_cont_top_right, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scr_SetupMQTT_cont_top_right, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scr_SetupMQTT_cont_top_right, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_SetupMQTT_cont_top_right, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scr_SetupMQTT_lbl_device
    ui->scr_SetupMQTT_lbl_device = lv_label_create(ui->scr_SetupMQTT_cont_top_right);
    lv_obj_set_pos(ui->scr_SetupMQTT_lbl_device, 1, 39);
    lv_obj_set_size(ui->scr_SetupMQTT_lbl_device, 132, 32);
    lv_label_set_text(ui->scr_SetupMQTT_lbl_device, "EDGE-01");
    lv_label_set_long_mode(ui->scr_SetupMQTT_lbl_device, LV_LABEL_LONG_WRAP);

    //Write style for scr_SetupMQTT_lbl_device, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scr_SetupMQTT_lbl_device, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_SetupMQTT_lbl_device, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scr_SetupMQTT_lbl_device, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scr_SetupMQTT_lbl_device, &lv_font_Acme_Regular_30, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scr_SetupMQTT_lbl_device, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->scr_SetupMQTT_lbl_device, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->scr_SetupMQTT_lbl_device, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scr_SetupMQTT_lbl_device, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scr_SetupMQTT_lbl_device, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scr_SetupMQTT_lbl_device, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scr_SetupMQTT_lbl_device, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scr_SetupMQTT_lbl_device, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scr_SetupMQTT_lbl_device, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_SetupMQTT_lbl_device, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scr_SetupMQTT_btn_online
    ui->scr_SetupMQTT_btn_online = lv_button_create(ui->scr_SetupMQTT_cont_top_right);
    lv_obj_set_pos(ui->scr_SetupMQTT_btn_online, 128, 30);
    lv_obj_set_size(ui->scr_SetupMQTT_btn_online, 130, 50);
    ui->scr_SetupMQTT_btn_online_label = lv_label_create(ui->scr_SetupMQTT_btn_online);
    lv_label_set_text(ui->scr_SetupMQTT_btn_online_label, "ONLINE");
    lv_label_set_long_mode(ui->scr_SetupMQTT_btn_online_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->scr_SetupMQTT_btn_online_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->scr_SetupMQTT_btn_online, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->scr_SetupMQTT_btn_online_label, LV_PCT(100));

    //Write style for scr_SetupMQTT_btn_online, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->scr_SetupMQTT_btn_online, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scr_SetupMQTT_btn_online, lv_color_hex(0x2ecc71), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scr_SetupMQTT_btn_online, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->scr_SetupMQTT_btn_online, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_SetupMQTT_btn_online, 18, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_SetupMQTT_btn_online, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scr_SetupMQTT_btn_online, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scr_SetupMQTT_btn_online, &lv_font_arial_25, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scr_SetupMQTT_btn_online, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scr_SetupMQTT_btn_online, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scr_SetupMQTT_imgbtn_back
    ui->scr_SetupMQTT_imgbtn_back = lv_imagebutton_create(ui->scr_SetupMQTT_cont_topbar);
    lv_obj_set_pos(ui->scr_SetupMQTT_imgbtn_back, 40, 14);
    lv_obj_set_size(ui->scr_SetupMQTT_imgbtn_back, 64, 64);
    lv_imagebutton_set_src(ui->scr_SetupMQTT_imgbtn_back, LV_IMAGEBUTTON_STATE_RELEASED, &_leftarrow_RGB565A8_64x64, NULL, NULL);
    ui->scr_SetupMQTT_imgbtn_back_label = lv_label_create(ui->scr_SetupMQTT_imgbtn_back);
    lv_label_set_text(ui->scr_SetupMQTT_imgbtn_back_label, "");
    lv_label_set_long_mode(ui->scr_SetupMQTT_imgbtn_back_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->scr_SetupMQTT_imgbtn_back_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->scr_SetupMQTT_imgbtn_back, 0, LV_STATE_DEFAULT);

    //Write style for scr_SetupMQTT_imgbtn_back, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_text_color(ui->scr_SetupMQTT_imgbtn_back, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scr_SetupMQTT_imgbtn_back, &lv_font_montserratMedium_12, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scr_SetupMQTT_imgbtn_back, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scr_SetupMQTT_imgbtn_back, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_SetupMQTT_imgbtn_back, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style for scr_SetupMQTT_imgbtn_back, Part: LV_PART_MAIN, State: LV_STATE_PRESSED.
    lv_obj_set_style_image_recolor_opa(ui->scr_SetupMQTT_imgbtn_back, 0, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_image_opa(ui->scr_SetupMQTT_imgbtn_back, 255, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_text_color(ui->scr_SetupMQTT_imgbtn_back, lv_color_hex(0xFF33FF), LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_text_font(ui->scr_SetupMQTT_imgbtn_back, &lv_font_montserratMedium_12, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_text_opa(ui->scr_SetupMQTT_imgbtn_back, 255, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_shadow_width(ui->scr_SetupMQTT_imgbtn_back, 0, LV_PART_MAIN|LV_STATE_PRESSED);

    //Write style for scr_SetupMQTT_imgbtn_back, Part: LV_PART_MAIN, State: LV_STATE_CHECKED.
    lv_obj_set_style_image_recolor_opa(ui->scr_SetupMQTT_imgbtn_back, 0, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_image_opa(ui->scr_SetupMQTT_imgbtn_back, 255, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_text_color(ui->scr_SetupMQTT_imgbtn_back, lv_color_hex(0xFF33FF), LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_text_font(ui->scr_SetupMQTT_imgbtn_back, &lv_font_montserratMedium_12, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_text_opa(ui->scr_SetupMQTT_imgbtn_back, 255, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_shadow_width(ui->scr_SetupMQTT_imgbtn_back, 0, LV_PART_MAIN|LV_STATE_CHECKED);

    //Write style for scr_SetupMQTT_imgbtn_back, Part: LV_PART_MAIN, State: LV_IMAGEBUTTON_STATE_RELEASED.
    lv_obj_set_style_image_recolor_opa(ui->scr_SetupMQTT_imgbtn_back, 0, LV_PART_MAIN|LV_IMAGEBUTTON_STATE_RELEASED);
    lv_obj_set_style_image_opa(ui->scr_SetupMQTT_imgbtn_back, 255, LV_PART_MAIN|LV_IMAGEBUTTON_STATE_RELEASED);

    //Write codes scr_SetupMQTT_cont_body
    ui->scr_SetupMQTT_cont_body = lv_obj_create(ui->scr_SetupMQTT_cont_root);
    lv_obj_set_pos(ui->scr_SetupMQTT_cont_body, 0, 90);
    lv_obj_set_size(ui->scr_SetupMQTT_cont_body, 1280, 630);
    lv_obj_set_scrollbar_mode(ui->scr_SetupMQTT_cont_body, LV_SCROLLBAR_MODE_OFF);

    //Write style for scr_SetupMQTT_cont_body, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scr_SetupMQTT_cont_body, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_SetupMQTT_cont_body, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scr_SetupMQTT_cont_body, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scr_SetupMQTT_cont_body, lv_color_hex(0x1a1a1a), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scr_SetupMQTT_cont_body, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scr_SetupMQTT_cont_body, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scr_SetupMQTT_cont_body, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scr_SetupMQTT_cont_body, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scr_SetupMQTT_cont_body, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_SetupMQTT_cont_body, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scr_SetupMQTT_cont_mqtt
    ui->scr_SetupMQTT_cont_mqtt = lv_obj_create(ui->scr_SetupMQTT_cont_body);
    lv_obj_set_pos(ui->scr_SetupMQTT_cont_mqtt, 90, 0);
    lv_obj_set_size(ui->scr_SetupMQTT_cont_mqtt, 1100, 630);
    lv_obj_set_scrollbar_mode(ui->scr_SetupMQTT_cont_mqtt, LV_SCROLLBAR_MODE_OFF);

    //Write style for scr_SetupMQTT_cont_mqtt, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scr_SetupMQTT_cont_mqtt, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_SetupMQTT_cont_mqtt, 20, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scr_SetupMQTT_cont_mqtt, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scr_SetupMQTT_cont_mqtt, lv_color_hex(0x1a1a1a), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scr_SetupMQTT_cont_mqtt, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scr_SetupMQTT_cont_mqtt, 24, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scr_SetupMQTT_cont_mqtt, 24, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scr_SetupMQTT_cont_mqtt, 24, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scr_SetupMQTT_cont_mqtt, 24, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_SetupMQTT_cont_mqtt, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scr_SetupMQTT_cont_header
    ui->scr_SetupMQTT_cont_header = lv_obj_create(ui->scr_SetupMQTT_cont_mqtt);
    lv_obj_set_pos(ui->scr_SetupMQTT_cont_header, 0, -9);
    lv_obj_set_size(ui->scr_SetupMQTT_cont_header, 1050, 80);
    lv_obj_set_scrollbar_mode(ui->scr_SetupMQTT_cont_header, LV_SCROLLBAR_MODE_OFF);

    //Write style for scr_SetupMQTT_cont_header, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scr_SetupMQTT_cont_header, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_SetupMQTT_cont_header, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scr_SetupMQTT_cont_header, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scr_SetupMQTT_cont_header, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scr_SetupMQTT_cont_header, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scr_SetupMQTT_cont_header, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scr_SetupMQTT_cont_header, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_SetupMQTT_cont_header, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scr_SetupMQTT_label_header
    ui->scr_SetupMQTT_label_header = lv_label_create(ui->scr_SetupMQTT_cont_header);
    lv_obj_set_pos(ui->scr_SetupMQTT_label_header, 77, 15);
    lv_obj_set_size(ui->scr_SetupMQTT_label_header, 229, 32);
    lv_label_set_text(ui->scr_SetupMQTT_label_header, "Server (MQTT)");
    lv_label_set_long_mode(ui->scr_SetupMQTT_label_header, LV_LABEL_LONG_WRAP);

    //Write style for scr_SetupMQTT_label_header, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scr_SetupMQTT_label_header, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_SetupMQTT_label_header, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scr_SetupMQTT_label_header, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scr_SetupMQTT_label_header, &lv_font_arial_32, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scr_SetupMQTT_label_header, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->scr_SetupMQTT_label_header, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->scr_SetupMQTT_label_header, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scr_SetupMQTT_label_header, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scr_SetupMQTT_label_header, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scr_SetupMQTT_label_header, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scr_SetupMQTT_label_header, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scr_SetupMQTT_label_header, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scr_SetupMQTT_label_header, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_SetupMQTT_label_header, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scr_SetupMQTT_img_cload
    ui->scr_SetupMQTT_img_cload = lv_image_create(ui->scr_SetupMQTT_cont_header);
    lv_obj_set_pos(ui->scr_SetupMQTT_img_cload, 13, 0);
    lv_obj_set_size(ui->scr_SetupMQTT_img_cload, 64, 64);
    lv_obj_add_flag(ui->scr_SetupMQTT_img_cload, LV_OBJ_FLAG_CLICKABLE);
    lv_image_set_src(ui->scr_SetupMQTT_img_cload, &_server3_RGB565A8_64x64);
    lv_image_set_pivot(ui->scr_SetupMQTT_img_cload, 50,50);
    lv_image_set_rotation(ui->scr_SetupMQTT_img_cload, 0);

    //Write style for scr_SetupMQTT_img_cload, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_image_recolor_opa(ui->scr_SetupMQTT_img_cload, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_image_opa(ui->scr_SetupMQTT_img_cload, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scr_SetupMQTT_cont_broker_scan
    ui->scr_SetupMQTT_cont_broker_scan = lv_obj_create(ui->scr_SetupMQTT_cont_mqtt);
    lv_obj_set_pos(ui->scr_SetupMQTT_cont_broker_scan, 0, 80);
    lv_obj_set_size(ui->scr_SetupMQTT_cont_broker_scan, 1050, 60);
    lv_obj_set_scrollbar_mode(ui->scr_SetupMQTT_cont_broker_scan, LV_SCROLLBAR_MODE_OFF);

    //Write style for scr_SetupMQTT_cont_broker_scan, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scr_SetupMQTT_cont_broker_scan, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_SetupMQTT_cont_broker_scan, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scr_SetupMQTT_cont_broker_scan, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scr_SetupMQTT_cont_broker_scan, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scr_SetupMQTT_cont_broker_scan, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scr_SetupMQTT_cont_broker_scan, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scr_SetupMQTT_cont_broker_scan, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_SetupMQTT_cont_broker_scan, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scr_SetupMQTT_lbl_broker
    ui->scr_SetupMQTT_lbl_broker = lv_label_create(ui->scr_SetupMQTT_cont_broker_scan);
    lv_obj_set_pos(ui->scr_SetupMQTT_lbl_broker, 13, 14);
    lv_obj_set_size(ui->scr_SetupMQTT_lbl_broker, 100, 32);
    lv_label_set_text(ui->scr_SetupMQTT_lbl_broker, "Broker:");
    lv_label_set_long_mode(ui->scr_SetupMQTT_lbl_broker, LV_LABEL_LONG_WRAP);

    //Write style for scr_SetupMQTT_lbl_broker, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scr_SetupMQTT_lbl_broker, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_SetupMQTT_lbl_broker, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scr_SetupMQTT_lbl_broker, lv_color_hex(0xbdbdbd), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scr_SetupMQTT_lbl_broker, &lv_font_montserratMedium_25, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scr_SetupMQTT_lbl_broker, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->scr_SetupMQTT_lbl_broker, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->scr_SetupMQTT_lbl_broker, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scr_SetupMQTT_lbl_broker, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scr_SetupMQTT_lbl_broker, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scr_SetupMQTT_lbl_broker, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scr_SetupMQTT_lbl_broker, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scr_SetupMQTT_lbl_broker, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scr_SetupMQTT_lbl_broker, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_SetupMQTT_lbl_broker, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scr_SetupMQTT_btn_scan
    ui->scr_SetupMQTT_btn_scan = lv_button_create(ui->scr_SetupMQTT_cont_broker_scan);
    lv_obj_set_pos(ui->scr_SetupMQTT_btn_scan, 883, 0);
    lv_obj_set_size(ui->scr_SetupMQTT_btn_scan, 150, 60);
    ui->scr_SetupMQTT_btn_scan_label = lv_label_create(ui->scr_SetupMQTT_btn_scan);
    lv_label_set_text(ui->scr_SetupMQTT_btn_scan_label, "SCAN");
    lv_label_set_long_mode(ui->scr_SetupMQTT_btn_scan_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->scr_SetupMQTT_btn_scan_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->scr_SetupMQTT_btn_scan, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->scr_SetupMQTT_btn_scan_label, LV_PCT(100));

    //Write style for scr_SetupMQTT_btn_scan, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->scr_SetupMQTT_btn_scan, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scr_SetupMQTT_btn_scan, lv_color_hex(0x2D9CDB), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scr_SetupMQTT_btn_scan, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->scr_SetupMQTT_btn_scan, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_SetupMQTT_btn_scan, 14, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_SetupMQTT_btn_scan, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scr_SetupMQTT_btn_scan, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scr_SetupMQTT_btn_scan, &lv_font_Acme_Regular_30, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scr_SetupMQTT_btn_scan, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scr_SetupMQTT_btn_scan, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scr_SetupMQTT_ta_broker
    ui->scr_SetupMQTT_ta_broker = lv_textarea_create(ui->scr_SetupMQTT_cont_broker_scan);
    lv_obj_set_pos(ui->scr_SetupMQTT_ta_broker, 173, 0);
    lv_obj_set_size(ui->scr_SetupMQTT_ta_broker, 689, 60);
    lv_textarea_set_text(ui->scr_SetupMQTT_ta_broker, "mqtt.local");
    lv_textarea_set_placeholder_text(ui->scr_SetupMQTT_ta_broker, "");
    lv_textarea_set_password_bullet(ui->scr_SetupMQTT_ta_broker, "*");
    lv_textarea_set_password_mode(ui->scr_SetupMQTT_ta_broker, false);
    lv_textarea_set_one_line(ui->scr_SetupMQTT_ta_broker, true);
    lv_textarea_set_accepted_chars(ui->scr_SetupMQTT_ta_broker, "");
    lv_textarea_set_max_length(ui->scr_SetupMQTT_ta_broker, 32);
#if LV_USE_KEYBOARD
    lv_obj_add_event_cb(ui->scr_SetupMQTT_ta_broker, ta_event_cb, LV_EVENT_ALL, ui->g_kb_top_layer);
#endif

    //Write style for scr_SetupMQTT_ta_broker, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_text_color(ui->scr_SetupMQTT_ta_broker, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scr_SetupMQTT_ta_broker, &lv_font_arial_30, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scr_SetupMQTT_ta_broker, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->scr_SetupMQTT_ta_broker, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scr_SetupMQTT_ta_broker, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scr_SetupMQTT_ta_broker, 166, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scr_SetupMQTT_ta_broker, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scr_SetupMQTT_ta_broker, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->scr_SetupMQTT_ta_broker, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_SetupMQTT_ta_broker, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scr_SetupMQTT_ta_broker, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scr_SetupMQTT_ta_broker, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scr_SetupMQTT_ta_broker, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_SetupMQTT_ta_broker, 5, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style for scr_SetupMQTT_ta_broker, Part: LV_PART_SCROLLBAR, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->scr_SetupMQTT_ta_broker, 255, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scr_SetupMQTT_ta_broker, lv_color_hex(0x2195f6), LV_PART_SCROLLBAR|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scr_SetupMQTT_ta_broker, LV_GRAD_DIR_NONE, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_SetupMQTT_ta_broker, 0, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);

    //Write codes scr_SetupMQTT_cont_port_row
    ui->scr_SetupMQTT_cont_port_row = lv_obj_create(ui->scr_SetupMQTT_cont_mqtt);
    lv_obj_set_pos(ui->scr_SetupMQTT_cont_port_row, 0, 150);
    lv_obj_set_size(ui->scr_SetupMQTT_cont_port_row, 1050, 60);
    lv_obj_set_scrollbar_mode(ui->scr_SetupMQTT_cont_port_row, LV_SCROLLBAR_MODE_OFF);

    //Write style for scr_SetupMQTT_cont_port_row, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scr_SetupMQTT_cont_port_row, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_SetupMQTT_cont_port_row, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scr_SetupMQTT_cont_port_row, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scr_SetupMQTT_cont_port_row, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scr_SetupMQTT_cont_port_row, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scr_SetupMQTT_cont_port_row, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scr_SetupMQTT_cont_port_row, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_SetupMQTT_cont_port_row, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scr_SetupMQTT_lbl_port
    ui->scr_SetupMQTT_lbl_port = lv_label_create(ui->scr_SetupMQTT_cont_port_row);
    lv_obj_set_pos(ui->scr_SetupMQTT_lbl_port, 13, 14);
    lv_obj_set_size(ui->scr_SetupMQTT_lbl_port, 66, 32);
    lv_label_set_text(ui->scr_SetupMQTT_lbl_port, "Port");
    lv_label_set_long_mode(ui->scr_SetupMQTT_lbl_port, LV_LABEL_LONG_WRAP);

    //Write style for scr_SetupMQTT_lbl_port, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scr_SetupMQTT_lbl_port, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_SetupMQTT_lbl_port, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scr_SetupMQTT_lbl_port, lv_color_hex(0xbdbdbd), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scr_SetupMQTT_lbl_port, &lv_font_montserratMedium_25, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scr_SetupMQTT_lbl_port, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->scr_SetupMQTT_lbl_port, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->scr_SetupMQTT_lbl_port, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scr_SetupMQTT_lbl_port, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scr_SetupMQTT_lbl_port, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scr_SetupMQTT_lbl_port, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scr_SetupMQTT_lbl_port, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scr_SetupMQTT_lbl_port, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scr_SetupMQTT_lbl_port, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_SetupMQTT_lbl_port, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scr_SetupMQTT_ta_port
    ui->scr_SetupMQTT_ta_port = lv_textarea_create(ui->scr_SetupMQTT_cont_port_row);
    lv_obj_set_pos(ui->scr_SetupMQTT_ta_port, 173, 0);
    lv_obj_set_size(ui->scr_SetupMQTT_ta_port, 860, 60);
    lv_textarea_set_text(ui->scr_SetupMQTT_ta_port, "1883");
    lv_textarea_set_placeholder_text(ui->scr_SetupMQTT_ta_port, "");
    lv_textarea_set_password_bullet(ui->scr_SetupMQTT_ta_port, "*");
    lv_textarea_set_password_mode(ui->scr_SetupMQTT_ta_port, false);
    lv_textarea_set_one_line(ui->scr_SetupMQTT_ta_port, true);
    lv_textarea_set_accepted_chars(ui->scr_SetupMQTT_ta_port, "");
    lv_textarea_set_max_length(ui->scr_SetupMQTT_ta_port, 32);
#if LV_USE_KEYBOARD
    lv_obj_add_event_cb(ui->scr_SetupMQTT_ta_port, ta_event_cb, LV_EVENT_ALL, ui->g_kb_top_layer);
#endif

    //Write style for scr_SetupMQTT_ta_port, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_text_color(ui->scr_SetupMQTT_ta_port, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scr_SetupMQTT_ta_port, &lv_font_arial_30, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scr_SetupMQTT_ta_port, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->scr_SetupMQTT_ta_port, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scr_SetupMQTT_ta_port, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scr_SetupMQTT_ta_port, 166, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scr_SetupMQTT_ta_port, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scr_SetupMQTT_ta_port, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->scr_SetupMQTT_ta_port, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_SetupMQTT_ta_port, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scr_SetupMQTT_ta_port, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scr_SetupMQTT_ta_port, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scr_SetupMQTT_ta_port, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_SetupMQTT_ta_port, 5, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style for scr_SetupMQTT_ta_port, Part: LV_PART_SCROLLBAR, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->scr_SetupMQTT_ta_port, 255, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scr_SetupMQTT_ta_port, lv_color_hex(0x2195f6), LV_PART_SCROLLBAR|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scr_SetupMQTT_ta_port, LV_GRAD_DIR_NONE, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_SetupMQTT_ta_port, 0, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);

    //Write codes scr_SetupMQTT_cont_tls_row
    ui->scr_SetupMQTT_cont_tls_row = lv_obj_create(ui->scr_SetupMQTT_cont_mqtt);
    lv_obj_set_pos(ui->scr_SetupMQTT_cont_tls_row, 0, 371);
    lv_obj_set_size(ui->scr_SetupMQTT_cont_tls_row, 1050, 40);
    lv_obj_set_scrollbar_mode(ui->scr_SetupMQTT_cont_tls_row, LV_SCROLLBAR_MODE_OFF);

    //Write style for scr_SetupMQTT_cont_tls_row, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scr_SetupMQTT_cont_tls_row, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_SetupMQTT_cont_tls_row, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scr_SetupMQTT_cont_tls_row, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scr_SetupMQTT_cont_tls_row, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scr_SetupMQTT_cont_tls_row, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scr_SetupMQTT_cont_tls_row, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scr_SetupMQTT_cont_tls_row, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_SetupMQTT_cont_tls_row, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scr_SetupMQTT_lbl_tls
    ui->scr_SetupMQTT_lbl_tls = lv_label_create(ui->scr_SetupMQTT_cont_tls_row);
    lv_obj_set_pos(ui->scr_SetupMQTT_lbl_tls, 13, 5);
    lv_obj_set_size(ui->scr_SetupMQTT_lbl_tls, 162, 32);
    lv_label_set_text(ui->scr_SetupMQTT_lbl_tls, "Enable TLS");
    lv_label_set_long_mode(ui->scr_SetupMQTT_lbl_tls, LV_LABEL_LONG_WRAP);

    //Write style for scr_SetupMQTT_lbl_tls, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scr_SetupMQTT_lbl_tls, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_SetupMQTT_lbl_tls, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scr_SetupMQTT_lbl_tls, lv_color_hex(0xbdbdbd), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scr_SetupMQTT_lbl_tls, &lv_font_montserratMedium_25, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scr_SetupMQTT_lbl_tls, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->scr_SetupMQTT_lbl_tls, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->scr_SetupMQTT_lbl_tls, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scr_SetupMQTT_lbl_tls, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scr_SetupMQTT_lbl_tls, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scr_SetupMQTT_lbl_tls, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scr_SetupMQTT_lbl_tls, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scr_SetupMQTT_lbl_tls, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scr_SetupMQTT_lbl_tls, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_SetupMQTT_lbl_tls, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scr_SetupMQTT_sw_tls
    ui->scr_SetupMQTT_sw_tls = lv_switch_create(ui->scr_SetupMQTT_cont_tls_row);
    lv_obj_set_pos(ui->scr_SetupMQTT_sw_tls, 179, 4);
    lv_obj_set_size(ui->scr_SetupMQTT_sw_tls, 70, 30);

    //Write style for scr_SetupMQTT_sw_tls, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->scr_SetupMQTT_sw_tls, 230, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scr_SetupMQTT_sw_tls, lv_color_hex(0x626262), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scr_SetupMQTT_sw_tls, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->scr_SetupMQTT_sw_tls, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_SetupMQTT_sw_tls, 20, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_SetupMQTT_sw_tls, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style for scr_SetupMQTT_sw_tls, Part: LV_PART_INDICATOR, State: LV_STATE_CHECKED.
    lv_obj_set_style_bg_opa(ui->scr_SetupMQTT_sw_tls, 255, LV_PART_INDICATOR|LV_STATE_CHECKED);
    lv_obj_set_style_bg_color(ui->scr_SetupMQTT_sw_tls, lv_color_hex(0x2195f6), LV_PART_INDICATOR|LV_STATE_CHECKED);
    lv_obj_set_style_bg_grad_dir(ui->scr_SetupMQTT_sw_tls, LV_GRAD_DIR_NONE, LV_PART_INDICATOR|LV_STATE_CHECKED);
    lv_obj_set_style_border_width(ui->scr_SetupMQTT_sw_tls, 0, LV_PART_INDICATOR|LV_STATE_CHECKED);

    //Write style for scr_SetupMQTT_sw_tls, Part: LV_PART_KNOB, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->scr_SetupMQTT_sw_tls, 255, LV_PART_KNOB|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scr_SetupMQTT_sw_tls, lv_color_hex(0xffffff), LV_PART_KNOB|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scr_SetupMQTT_sw_tls, LV_GRAD_DIR_NONE, LV_PART_KNOB|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->scr_SetupMQTT_sw_tls, 0, LV_PART_KNOB|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_SetupMQTT_sw_tls, 10, LV_PART_KNOB|LV_STATE_DEFAULT);

    //Write codes scr_SetupMQTT_cont_status_row
    ui->scr_SetupMQTT_cont_status_row = lv_obj_create(ui->scr_SetupMQTT_cont_mqtt);
    lv_obj_set_pos(ui->scr_SetupMQTT_cont_status_row, 0, 429);
    lv_obj_set_size(ui->scr_SetupMQTT_cont_status_row, 1050, 70);
    lv_obj_set_scrollbar_mode(ui->scr_SetupMQTT_cont_status_row, LV_SCROLLBAR_MODE_OFF);

    //Write style for scr_SetupMQTT_cont_status_row, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scr_SetupMQTT_cont_status_row, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_SetupMQTT_cont_status_row, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scr_SetupMQTT_cont_status_row, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scr_SetupMQTT_cont_status_row, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scr_SetupMQTT_cont_status_row, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scr_SetupMQTT_cont_status_row, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scr_SetupMQTT_cont_status_row, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_SetupMQTT_cont_status_row, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scr_SetupMQTT_led_status
    ui->scr_SetupMQTT_led_status = lv_led_create(ui->scr_SetupMQTT_cont_status_row);
    lv_obj_set_pos(ui->scr_SetupMQTT_led_status, 30, 6);
    lv_obj_set_size(ui->scr_SetupMQTT_led_status, 16, 16);
    lv_led_set_brightness(ui->scr_SetupMQTT_led_status, 255);
    lv_led_set_color(ui->scr_SetupMQTT_led_status, lv_color_hex(0x00FF39));

    //Write codes scr_SetupMQTT_lbl_status
    ui->scr_SetupMQTT_lbl_status = lv_label_create(ui->scr_SetupMQTT_cont_status_row);
    lv_obj_set_pos(ui->scr_SetupMQTT_lbl_status, 50, 2);
    lv_obj_set_size(ui->scr_SetupMQTT_lbl_status, 154, 24);
    lv_label_set_text(ui->scr_SetupMQTT_lbl_status, "Connected");
    lv_label_set_long_mode(ui->scr_SetupMQTT_lbl_status, LV_LABEL_LONG_WRAP);

    //Write style for scr_SetupMQTT_lbl_status, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scr_SetupMQTT_lbl_status, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_SetupMQTT_lbl_status, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scr_SetupMQTT_lbl_status, lv_color_hex(0x00FF39), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scr_SetupMQTT_lbl_status, &lv_font_arial_25, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scr_SetupMQTT_lbl_status, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->scr_SetupMQTT_lbl_status, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->scr_SetupMQTT_lbl_status, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scr_SetupMQTT_lbl_status, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scr_SetupMQTT_lbl_status, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scr_SetupMQTT_lbl_status, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scr_SetupMQTT_lbl_status, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scr_SetupMQTT_lbl_status, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scr_SetupMQTT_lbl_status, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_SetupMQTT_lbl_status, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scr_SetupMQTT_lbl_pending
    ui->scr_SetupMQTT_lbl_pending = lv_label_create(ui->scr_SetupMQTT_cont_status_row);
    lv_obj_set_pos(ui->scr_SetupMQTT_lbl_pending, 50, 40);
    lv_obj_set_size(ui->scr_SetupMQTT_lbl_pending, 234, 32);
    lv_label_set_text(ui->scr_SetupMQTT_lbl_pending, "Pending events: 3");
    lv_label_set_long_mode(ui->scr_SetupMQTT_lbl_pending, LV_LABEL_LONG_WRAP);

    //Write style for scr_SetupMQTT_lbl_pending, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scr_SetupMQTT_lbl_pending, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_SetupMQTT_lbl_pending, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scr_SetupMQTT_lbl_pending, lv_color_hex(0xbdbdbd), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scr_SetupMQTT_lbl_pending, &lv_font_arial_25, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scr_SetupMQTT_lbl_pending, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->scr_SetupMQTT_lbl_pending, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->scr_SetupMQTT_lbl_pending, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scr_SetupMQTT_lbl_pending, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scr_SetupMQTT_lbl_pending, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scr_SetupMQTT_lbl_pending, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scr_SetupMQTT_lbl_pending, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scr_SetupMQTT_lbl_pending, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scr_SetupMQTT_lbl_pending, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_SetupMQTT_lbl_pending, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scr_SetupMQTT_cont_btn_row
    ui->scr_SetupMQTT_cont_btn_row = lv_obj_create(ui->scr_SetupMQTT_cont_mqtt);
    lv_obj_set_pos(ui->scr_SetupMQTT_cont_btn_row, 0, 513);
    lv_obj_set_size(ui->scr_SetupMQTT_cont_btn_row, 1050, 90);
    lv_obj_set_scrollbar_mode(ui->scr_SetupMQTT_cont_btn_row, LV_SCROLLBAR_MODE_OFF);

    //Write style for scr_SetupMQTT_cont_btn_row, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scr_SetupMQTT_cont_btn_row, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_SetupMQTT_cont_btn_row, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scr_SetupMQTT_cont_btn_row, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scr_SetupMQTT_cont_btn_row, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scr_SetupMQTT_cont_btn_row, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scr_SetupMQTT_cont_btn_row, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scr_SetupMQTT_cont_btn_row, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_SetupMQTT_cont_btn_row, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scr_SetupMQTT_btn_conncect
    ui->scr_SetupMQTT_btn_conncect = lv_button_create(ui->scr_SetupMQTT_cont_btn_row);
    lv_obj_set_pos(ui->scr_SetupMQTT_btn_conncect, 14, 2);
    lv_obj_set_size(ui->scr_SetupMQTT_btn_conncect, 480, 80);
    ui->scr_SetupMQTT_btn_conncect_label = lv_label_create(ui->scr_SetupMQTT_btn_conncect);
    lv_label_set_text(ui->scr_SetupMQTT_btn_conncect_label, "CONNECT");
    lv_label_set_long_mode(ui->scr_SetupMQTT_btn_conncect_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->scr_SetupMQTT_btn_conncect_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->scr_SetupMQTT_btn_conncect, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->scr_SetupMQTT_btn_conncect_label, LV_PCT(100));

    //Write style for scr_SetupMQTT_btn_conncect, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->scr_SetupMQTT_btn_conncect, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scr_SetupMQTT_btn_conncect, lv_color_hex(0x2D9CDB), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scr_SetupMQTT_btn_conncect, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->scr_SetupMQTT_btn_conncect, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_SetupMQTT_btn_conncect, 14, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_SetupMQTT_btn_conncect, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scr_SetupMQTT_btn_conncect, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scr_SetupMQTT_btn_conncect, &lv_font_Acme_Regular_30, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scr_SetupMQTT_btn_conncect, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scr_SetupMQTT_btn_conncect, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scr_SetupMQTT_btn_save
    ui->scr_SetupMQTT_btn_save = lv_button_create(ui->scr_SetupMQTT_cont_btn_row);
    lv_obj_set_pos(ui->scr_SetupMQTT_btn_save, 553, 2);
    lv_obj_set_size(ui->scr_SetupMQTT_btn_save, 480, 80);
    ui->scr_SetupMQTT_btn_save_label = lv_label_create(ui->scr_SetupMQTT_btn_save);
    lv_label_set_text(ui->scr_SetupMQTT_btn_save_label, "SAVE");
    lv_label_set_long_mode(ui->scr_SetupMQTT_btn_save_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->scr_SetupMQTT_btn_save_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->scr_SetupMQTT_btn_save, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->scr_SetupMQTT_btn_save_label, LV_PCT(100));

    //Write style for scr_SetupMQTT_btn_save, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->scr_SetupMQTT_btn_save, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scr_SetupMQTT_btn_save, lv_color_hex(0x2B2B2B), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scr_SetupMQTT_btn_save, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->scr_SetupMQTT_btn_save, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_SetupMQTT_btn_save, 14, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_SetupMQTT_btn_save, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scr_SetupMQTT_btn_save, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scr_SetupMQTT_btn_save, &lv_font_Acme_Regular_30, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scr_SetupMQTT_btn_save, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scr_SetupMQTT_btn_save, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scr_SetupMQTT_cont_user
    ui->scr_SetupMQTT_cont_user = lv_obj_create(ui->scr_SetupMQTT_cont_mqtt);
    lv_obj_set_pos(ui->scr_SetupMQTT_cont_user, 0, 220);
    lv_obj_set_size(ui->scr_SetupMQTT_cont_user, 1050, 60);
    lv_obj_set_scrollbar_mode(ui->scr_SetupMQTT_cont_user, LV_SCROLLBAR_MODE_OFF);

    //Write style for scr_SetupMQTT_cont_user, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scr_SetupMQTT_cont_user, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_SetupMQTT_cont_user, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scr_SetupMQTT_cont_user, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scr_SetupMQTT_cont_user, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scr_SetupMQTT_cont_user, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scr_SetupMQTT_cont_user, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scr_SetupMQTT_cont_user, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_SetupMQTT_cont_user, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scr_SetupMQTT_lbl_user
    ui->scr_SetupMQTT_lbl_user = lv_label_create(ui->scr_SetupMQTT_cont_user);
    lv_obj_set_pos(ui->scr_SetupMQTT_lbl_user, 13, 14);
    lv_obj_set_size(ui->scr_SetupMQTT_lbl_user, 77, 32);
    lv_label_set_text(ui->scr_SetupMQTT_lbl_user, "User:");
    lv_label_set_long_mode(ui->scr_SetupMQTT_lbl_user, LV_LABEL_LONG_WRAP);

    //Write style for scr_SetupMQTT_lbl_user, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scr_SetupMQTT_lbl_user, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_SetupMQTT_lbl_user, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scr_SetupMQTT_lbl_user, lv_color_hex(0xbdbdbd), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scr_SetupMQTT_lbl_user, &lv_font_montserratMedium_25, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scr_SetupMQTT_lbl_user, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->scr_SetupMQTT_lbl_user, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->scr_SetupMQTT_lbl_user, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scr_SetupMQTT_lbl_user, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scr_SetupMQTT_lbl_user, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scr_SetupMQTT_lbl_user, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scr_SetupMQTT_lbl_user, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scr_SetupMQTT_lbl_user, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scr_SetupMQTT_lbl_user, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_SetupMQTT_lbl_user, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scr_SetupMQTT_ta_user
    ui->scr_SetupMQTT_ta_user = lv_textarea_create(ui->scr_SetupMQTT_cont_user);
    lv_obj_set_pos(ui->scr_SetupMQTT_ta_user, 173, 0);
    lv_obj_set_size(ui->scr_SetupMQTT_ta_user, 860, 60);
    lv_textarea_set_text(ui->scr_SetupMQTT_ta_user, "SynaptiX");
    lv_textarea_set_placeholder_text(ui->scr_SetupMQTT_ta_user, "");
    lv_textarea_set_password_bullet(ui->scr_SetupMQTT_ta_user, "*");
    lv_textarea_set_password_mode(ui->scr_SetupMQTT_ta_user, false);
    lv_textarea_set_one_line(ui->scr_SetupMQTT_ta_user, true);
    lv_textarea_set_accepted_chars(ui->scr_SetupMQTT_ta_user, "");
    lv_textarea_set_max_length(ui->scr_SetupMQTT_ta_user, 32);
#if LV_USE_KEYBOARD
    lv_obj_add_event_cb(ui->scr_SetupMQTT_ta_user, ta_event_cb, LV_EVENT_ALL, ui->g_kb_top_layer);
#endif

    //Write style for scr_SetupMQTT_ta_user, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_text_color(ui->scr_SetupMQTT_ta_user, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scr_SetupMQTT_ta_user, &lv_font_arial_30, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scr_SetupMQTT_ta_user, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->scr_SetupMQTT_ta_user, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scr_SetupMQTT_ta_user, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scr_SetupMQTT_ta_user, 166, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scr_SetupMQTT_ta_user, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scr_SetupMQTT_ta_user, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->scr_SetupMQTT_ta_user, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_SetupMQTT_ta_user, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scr_SetupMQTT_ta_user, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scr_SetupMQTT_ta_user, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scr_SetupMQTT_ta_user, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_SetupMQTT_ta_user, 5, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style for scr_SetupMQTT_ta_user, Part: LV_PART_SCROLLBAR, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->scr_SetupMQTT_ta_user, 255, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scr_SetupMQTT_ta_user, lv_color_hex(0x2195f6), LV_PART_SCROLLBAR|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scr_SetupMQTT_ta_user, LV_GRAD_DIR_NONE, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_SetupMQTT_ta_user, 0, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);

    //Write codes scr_SetupMQTT_cont_password
    ui->scr_SetupMQTT_cont_password = lv_obj_create(ui->scr_SetupMQTT_cont_mqtt);
    lv_obj_set_pos(ui->scr_SetupMQTT_cont_password, 0, 289);
    lv_obj_set_size(ui->scr_SetupMQTT_cont_password, 1050, 60);
    lv_obj_set_scrollbar_mode(ui->scr_SetupMQTT_cont_password, LV_SCROLLBAR_MODE_OFF);

    //Write style for scr_SetupMQTT_cont_password, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scr_SetupMQTT_cont_password, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_SetupMQTT_cont_password, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scr_SetupMQTT_cont_password, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scr_SetupMQTT_cont_password, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scr_SetupMQTT_cont_password, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scr_SetupMQTT_cont_password, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scr_SetupMQTT_cont_password, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_SetupMQTT_cont_password, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scr_SetupMQTT_lbl_password
    ui->scr_SetupMQTT_lbl_password = lv_label_create(ui->scr_SetupMQTT_cont_password);
    lv_obj_set_pos(ui->scr_SetupMQTT_lbl_password, 13, 14);
    lv_obj_set_size(ui->scr_SetupMQTT_lbl_password, 139, 32);
    lv_label_set_text(ui->scr_SetupMQTT_lbl_password, "Password");
    lv_label_set_long_mode(ui->scr_SetupMQTT_lbl_password, LV_LABEL_LONG_WRAP);

    //Write style for scr_SetupMQTT_lbl_password, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scr_SetupMQTT_lbl_password, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_SetupMQTT_lbl_password, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scr_SetupMQTT_lbl_password, lv_color_hex(0xbdbdbd), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scr_SetupMQTT_lbl_password, &lv_font_montserratMedium_25, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scr_SetupMQTT_lbl_password, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->scr_SetupMQTT_lbl_password, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->scr_SetupMQTT_lbl_password, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scr_SetupMQTT_lbl_password, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scr_SetupMQTT_lbl_password, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scr_SetupMQTT_lbl_password, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scr_SetupMQTT_lbl_password, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scr_SetupMQTT_lbl_password, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scr_SetupMQTT_lbl_password, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_SetupMQTT_lbl_password, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scr_SetupMQTT_ta_password
    ui->scr_SetupMQTT_ta_password = lv_textarea_create(ui->scr_SetupMQTT_cont_password);
    lv_obj_set_pos(ui->scr_SetupMQTT_ta_password, 173, 0);
    lv_obj_set_size(ui->scr_SetupMQTT_ta_password, 860, 60);
    lv_textarea_set_text(ui->scr_SetupMQTT_ta_password, "******");
    lv_textarea_set_placeholder_text(ui->scr_SetupMQTT_ta_password, "");
    lv_textarea_set_password_bullet(ui->scr_SetupMQTT_ta_password, "*");
    lv_textarea_set_password_mode(ui->scr_SetupMQTT_ta_password, true);
    lv_textarea_set_one_line(ui->scr_SetupMQTT_ta_password, true);
    lv_textarea_set_accepted_chars(ui->scr_SetupMQTT_ta_password, "");
    lv_textarea_set_max_length(ui->scr_SetupMQTT_ta_password, 32);
#if LV_USE_KEYBOARD
    lv_obj_add_event_cb(ui->scr_SetupMQTT_ta_password, ta_event_cb, LV_EVENT_ALL, ui->g_kb_top_layer);
#endif

    //Write style for scr_SetupMQTT_ta_password, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_text_color(ui->scr_SetupMQTT_ta_password, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scr_SetupMQTT_ta_password, &lv_font_arial_30, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scr_SetupMQTT_ta_password, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->scr_SetupMQTT_ta_password, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scr_SetupMQTT_ta_password, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scr_SetupMQTT_ta_password, 166, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scr_SetupMQTT_ta_password, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scr_SetupMQTT_ta_password, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->scr_SetupMQTT_ta_password, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_SetupMQTT_ta_password, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scr_SetupMQTT_ta_password, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scr_SetupMQTT_ta_password, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scr_SetupMQTT_ta_password, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_SetupMQTT_ta_password, 5, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style for scr_SetupMQTT_ta_password, Part: LV_PART_SCROLLBAR, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->scr_SetupMQTT_ta_password, 255, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scr_SetupMQTT_ta_password, lv_color_hex(0x2195f6), LV_PART_SCROLLBAR|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scr_SetupMQTT_ta_password, LV_GRAD_DIR_NONE, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_SetupMQTT_ta_password, 0, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);

    //Write codes scr_SetupMQTT_line_8
    ui->scr_SetupMQTT_line_8 = lv_line_create(ui->scr_SetupMQTT_cont_body);
    lv_obj_set_pos(ui->scr_SetupMQTT_line_8, 115, 90);
    lv_obj_set_size(ui->scr_SetupMQTT_line_8, 1050, 2);
    static lv_point_precise_t scr_SetupMQTT_line_8[] = {{0, 0},{1050, 0}};
    lv_line_set_points(ui->scr_SetupMQTT_line_8, scr_SetupMQTT_line_8, 2);

    //Write style for scr_SetupMQTT_line_8, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_line_width(ui->scr_SetupMQTT_line_8, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_color(ui->scr_SetupMQTT_line_8, lv_color_hex(0x2b2b2b), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_opa(ui->scr_SetupMQTT_line_8, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_rounded(ui->scr_SetupMQTT_line_8, true, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scr_SetupMQTT_line_6
    ui->scr_SetupMQTT_line_6 = lv_line_create(ui->scr_SetupMQTT_cont_body);
    lv_obj_set_pos(ui->scr_SetupMQTT_line_6, 115, 390);
    lv_obj_set_size(ui->scr_SetupMQTT_line_6, 1050, 2);
    static lv_point_precise_t scr_SetupMQTT_line_6[] = {{0, 0},{1050, 0}};
    lv_line_set_points(ui->scr_SetupMQTT_line_6, scr_SetupMQTT_line_6, 2);

    //Write style for scr_SetupMQTT_line_6, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_line_width(ui->scr_SetupMQTT_line_6, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_color(ui->scr_SetupMQTT_line_6, lv_color_hex(0x2b2b2b), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_opa(ui->scr_SetupMQTT_line_6, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_rounded(ui->scr_SetupMQTT_line_6, true, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scr_SetupMQTT_line_5
    ui->scr_SetupMQTT_line_5 = lv_line_create(ui->scr_SetupMQTT_cont_body);
    lv_obj_set_pos(ui->scr_SetupMQTT_line_5, 115, 440);
    lv_obj_set_size(ui->scr_SetupMQTT_line_5, 1050, 2);
    static lv_point_precise_t scr_SetupMQTT_line_5[] = {{0, 0},{1050, 0}};
    lv_line_set_points(ui->scr_SetupMQTT_line_5, scr_SetupMQTT_line_5, 2);

    //Write style for scr_SetupMQTT_line_5, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_line_width(ui->scr_SetupMQTT_line_5, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_color(ui->scr_SetupMQTT_line_5, lv_color_hex(0x2b2b2b), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_opa(ui->scr_SetupMQTT_line_5, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_rounded(ui->scr_SetupMQTT_line_5, true, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scr_SetupMQTT_line_9
    ui->scr_SetupMQTT_line_9 = lv_line_create(ui->scr_SetupMQTT_cont_body);
    lv_obj_set_pos(ui->scr_SetupMQTT_line_9, 115, 530);
    lv_obj_set_size(ui->scr_SetupMQTT_line_9, 1050, 2);
    static lv_point_precise_t scr_SetupMQTT_line_9[] = {{0, 0},{1050, 0}};
    lv_line_set_points(ui->scr_SetupMQTT_line_9, scr_SetupMQTT_line_9, 2);

    //Write style for scr_SetupMQTT_line_9, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_line_width(ui->scr_SetupMQTT_line_9, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_color(ui->scr_SetupMQTT_line_9, lv_color_hex(0x2b2b2b), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_opa(ui->scr_SetupMQTT_line_9, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_rounded(ui->scr_SetupMQTT_line_9, true, LV_PART_MAIN|LV_STATE_DEFAULT);

    //The custom code of scr_SetupMQTT.


    //Update current screen layout.
    lv_obj_update_layout(ui->scr_SetupMQTT);

    //Init events for screen.
    events_init_scr_SetupMQTT(ui);
}
