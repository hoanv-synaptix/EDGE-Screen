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



void setup_scr_scr_config_modbus(lv_ui *ui)
{
    //Write codes scr_config_modbus
    ui->scr_config_modbus = lv_obj_create(NULL);
    lv_obj_set_size(ui->scr_config_modbus, 1280, 720);
    lv_obj_set_scrollbar_mode(ui->scr_config_modbus, LV_SCROLLBAR_MODE_OFF);

    //Write style for scr_config_modbus, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->scr_config_modbus, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scr_config_modbus, lv_color_hex(0x121212), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scr_config_modbus, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scr_config_modbus_cont_root
    ui->scr_config_modbus_cont_root = lv_obj_create(ui->scr_config_modbus);
    lv_obj_set_pos(ui->scr_config_modbus_cont_root, 0, 0);
    lv_obj_set_size(ui->scr_config_modbus_cont_root, 1280, 720);
    lv_obj_set_scrollbar_mode(ui->scr_config_modbus_cont_root, LV_SCROLLBAR_MODE_OFF);

    //Write style for scr_config_modbus_cont_root, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scr_config_modbus_cont_root, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_config_modbus_cont_root, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scr_config_modbus_cont_root, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scr_config_modbus_cont_root, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scr_config_modbus_cont_root, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scr_config_modbus_cont_root, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scr_config_modbus_cont_root, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_config_modbus_cont_root, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scr_config_modbus_cont_5
    ui->scr_config_modbus_cont_5 = lv_obj_create(ui->scr_config_modbus_cont_root);
    lv_obj_set_pos(ui->scr_config_modbus_cont_5, 0, 0);
    lv_obj_set_size(ui->scr_config_modbus_cont_5, 1280, 90);
    lv_obj_set_scrollbar_mode(ui->scr_config_modbus_cont_5, LV_SCROLLBAR_MODE_OFF);

    //Write style for scr_config_modbus_cont_5, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scr_config_modbus_cont_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_config_modbus_cont_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scr_config_modbus_cont_5, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scr_config_modbus_cont_5, lv_color_hex(0x2B2B2B), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scr_config_modbus_cont_5, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scr_config_modbus_cont_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scr_config_modbus_cont_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scr_config_modbus_cont_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scr_config_modbus_cont_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_config_modbus_cont_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scr_config_modbus_lbl_tiltle
    ui->scr_config_modbus_lbl_tiltle = lv_label_create(ui->scr_config_modbus_cont_5);
    lv_obj_set_pos(ui->scr_config_modbus_lbl_tiltle, 450, 20);
    lv_obj_set_size(ui->scr_config_modbus_lbl_tiltle, 380, 59);
    lv_label_set_text(ui->scr_config_modbus_lbl_tiltle, "MODBUS CONFIG");
    lv_label_set_long_mode(ui->scr_config_modbus_lbl_tiltle, LV_LABEL_LONG_WRAP);

    //Write style for scr_config_modbus_lbl_tiltle, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scr_config_modbus_lbl_tiltle, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_config_modbus_lbl_tiltle, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scr_config_modbus_lbl_tiltle, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scr_config_modbus_lbl_tiltle, &lv_font_Acme_Regular_50, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scr_config_modbus_lbl_tiltle, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->scr_config_modbus_lbl_tiltle, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->scr_config_modbus_lbl_tiltle, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scr_config_modbus_lbl_tiltle, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scr_config_modbus_lbl_tiltle, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scr_config_modbus_lbl_tiltle, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scr_config_modbus_lbl_tiltle, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scr_config_modbus_lbl_tiltle, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scr_config_modbus_lbl_tiltle, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_config_modbus_lbl_tiltle, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scr_config_modbus_lbl_device
    ui->scr_config_modbus_lbl_device = lv_label_create(ui->scr_config_modbus_cont_5);
    lv_obj_set_pos(ui->scr_config_modbus_lbl_device, 950, 39);
    lv_obj_set_size(ui->scr_config_modbus_lbl_device, 132, 32);
    lv_label_set_text(ui->scr_config_modbus_lbl_device, "EDGE-01");
    lv_label_set_long_mode(ui->scr_config_modbus_lbl_device, LV_LABEL_LONG_WRAP);

    //Write style for scr_config_modbus_lbl_device, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scr_config_modbus_lbl_device, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_config_modbus_lbl_device, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scr_config_modbus_lbl_device, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scr_config_modbus_lbl_device, &lv_font_Acme_Regular_30, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scr_config_modbus_lbl_device, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->scr_config_modbus_lbl_device, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->scr_config_modbus_lbl_device, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scr_config_modbus_lbl_device, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scr_config_modbus_lbl_device, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scr_config_modbus_lbl_device, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scr_config_modbus_lbl_device, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scr_config_modbus_lbl_device, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scr_config_modbus_lbl_device, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_config_modbus_lbl_device, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scr_config_modbus_btn_online
    ui->scr_config_modbus_btn_online = lv_button_create(ui->scr_config_modbus_cont_5);
    lv_obj_set_pos(ui->scr_config_modbus_btn_online, 1080, 30);
    lv_obj_set_size(ui->scr_config_modbus_btn_online, 160, 50);
    ui->scr_config_modbus_btn_online_label = lv_label_create(ui->scr_config_modbus_btn_online);
    lv_label_set_text(ui->scr_config_modbus_btn_online_label, "ONLINE");
    lv_label_set_long_mode(ui->scr_config_modbus_btn_online_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->scr_config_modbus_btn_online_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->scr_config_modbus_btn_online, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->scr_config_modbus_btn_online_label, LV_PCT(100));

    //Write style for scr_config_modbus_btn_online, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->scr_config_modbus_btn_online, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scr_config_modbus_btn_online, lv_color_hex(0x2ecc71), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scr_config_modbus_btn_online, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->scr_config_modbus_btn_online, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_config_modbus_btn_online, 18, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_config_modbus_btn_online, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scr_config_modbus_btn_online, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scr_config_modbus_btn_online, &lv_font_arial_25, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scr_config_modbus_btn_online, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scr_config_modbus_btn_online, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scr_config_modbus_imgbtn_black
    ui->scr_config_modbus_imgbtn_black = lv_imagebutton_create(ui->scr_config_modbus_cont_root);
    lv_obj_set_pos(ui->scr_config_modbus_imgbtn_black, 39, 14);
    lv_obj_set_size(ui->scr_config_modbus_imgbtn_black, 64, 64);
    lv_imagebutton_set_src(ui->scr_config_modbus_imgbtn_black, LV_IMAGEBUTTON_STATE_RELEASED, &_leftarrow_RGB565A8_64x64, NULL, NULL);
    ui->scr_config_modbus_imgbtn_black_label = lv_label_create(ui->scr_config_modbus_imgbtn_black);
    lv_label_set_text(ui->scr_config_modbus_imgbtn_black_label, "");
    lv_label_set_long_mode(ui->scr_config_modbus_imgbtn_black_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->scr_config_modbus_imgbtn_black_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->scr_config_modbus_imgbtn_black, 0, LV_STATE_DEFAULT);

    //Write style for scr_config_modbus_imgbtn_black, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_shadow_width(ui->scr_config_modbus_imgbtn_black, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scr_config_modbus_imgbtn_black, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scr_config_modbus_imgbtn_black, &lv_font_montserratMedium_12, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scr_config_modbus_imgbtn_black, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scr_config_modbus_imgbtn_black, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style for scr_config_modbus_imgbtn_black, Part: LV_PART_MAIN, State: LV_STATE_PRESSED.
    lv_obj_set_style_image_recolor_opa(ui->scr_config_modbus_imgbtn_black, 0, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_image_opa(ui->scr_config_modbus_imgbtn_black, 255, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_text_color(ui->scr_config_modbus_imgbtn_black, lv_color_hex(0xFF33FF), LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_text_font(ui->scr_config_modbus_imgbtn_black, &lv_font_montserratMedium_12, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_text_opa(ui->scr_config_modbus_imgbtn_black, 255, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_shadow_width(ui->scr_config_modbus_imgbtn_black, 0, LV_PART_MAIN|LV_STATE_PRESSED);

    //Write style for scr_config_modbus_imgbtn_black, Part: LV_PART_MAIN, State: LV_STATE_CHECKED.
    lv_obj_set_style_image_recolor_opa(ui->scr_config_modbus_imgbtn_black, 0, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_image_opa(ui->scr_config_modbus_imgbtn_black, 255, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_text_color(ui->scr_config_modbus_imgbtn_black, lv_color_hex(0xFF33FF), LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_text_font(ui->scr_config_modbus_imgbtn_black, &lv_font_montserratMedium_12, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_text_opa(ui->scr_config_modbus_imgbtn_black, 255, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_shadow_width(ui->scr_config_modbus_imgbtn_black, 0, LV_PART_MAIN|LV_STATE_CHECKED);

    //Write style for scr_config_modbus_imgbtn_black, Part: LV_PART_MAIN, State: LV_IMAGEBUTTON_STATE_RELEASED.
    lv_obj_set_style_image_recolor_opa(ui->scr_config_modbus_imgbtn_black, 0, LV_PART_MAIN|LV_IMAGEBUTTON_STATE_RELEASED);
    lv_obj_set_style_image_opa(ui->scr_config_modbus_imgbtn_black, 255, LV_PART_MAIN|LV_IMAGEBUTTON_STATE_RELEASED);

    //Write codes scr_config_modbus_btn_test
    ui->scr_config_modbus_btn_test = lv_button_create(ui->scr_config_modbus_cont_root);
    lv_obj_set_pos(ui->scr_config_modbus_btn_test, 39, 640);
    lv_obj_set_size(ui->scr_config_modbus_btn_test, 565, 60);
    ui->scr_config_modbus_btn_test_label = lv_label_create(ui->scr_config_modbus_btn_test);
    lv_label_set_text(ui->scr_config_modbus_btn_test_label, "TEST CONNECTION");
    lv_label_set_long_mode(ui->scr_config_modbus_btn_test_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->scr_config_modbus_btn_test_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->scr_config_modbus_btn_test, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->scr_config_modbus_btn_test_label, LV_PCT(100));

    //Write style for scr_config_modbus_btn_test, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_text_color(ui->scr_config_modbus_btn_test, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scr_config_modbus_btn_test, &lv_font_arial_30, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scr_config_modbus_btn_test, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scr_config_modbus_btn_test, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_config_modbus_btn_test, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scr_config_modbus_btn_test, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scr_config_modbus_btn_test, lv_color_hex(0x1c4567), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scr_config_modbus_btn_test, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->scr_config_modbus_btn_test, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_config_modbus_btn_test, 10, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scr_config_modbus_btn_save
    ui->scr_config_modbus_btn_save = lv_button_create(ui->scr_config_modbus_cont_root);
    lv_obj_set_pos(ui->scr_config_modbus_btn_save, 639, 640);
    lv_obj_set_size(ui->scr_config_modbus_btn_save, 601, 60);
    ui->scr_config_modbus_btn_save_label = lv_label_create(ui->scr_config_modbus_btn_save);
    lv_label_set_text(ui->scr_config_modbus_btn_save_label, "SAVE");
    lv_label_set_long_mode(ui->scr_config_modbus_btn_save_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->scr_config_modbus_btn_save_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->scr_config_modbus_btn_save, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->scr_config_modbus_btn_save_label, LV_PCT(100));

    //Write style for scr_config_modbus_btn_save, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->scr_config_modbus_btn_save, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scr_config_modbus_btn_save, lv_color_hex(0x2ECC71), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scr_config_modbus_btn_save, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->scr_config_modbus_btn_save, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_config_modbus_btn_save, 10, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_config_modbus_btn_save, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scr_config_modbus_btn_save, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scr_config_modbus_btn_save, &lv_font_arial_30, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scr_config_modbus_btn_save, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scr_config_modbus_btn_save, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scr_config_modbus_tabview_modbus
    ui->scr_config_modbus_tabview_modbus = lv_tabview_create(ui->scr_config_modbus_cont_root);
    lv_obj_set_pos(ui->scr_config_modbus_tabview_modbus, 40, 100);
    lv_obj_set_size(ui->scr_config_modbus_tabview_modbus, 1200, 530);
    lv_obj_set_scrollbar_mode(ui->scr_config_modbus_tabview_modbus, LV_SCROLLBAR_MODE_OFF);
    lv_tabview_set_tab_bar_position(ui->scr_config_modbus_tabview_modbus, LV_DIR_TOP);
    lv_tabview_set_tab_bar_size(ui->scr_config_modbus_tabview_modbus, 50);
    ui->scr_config_modbus_tabview_modbus_tab_1 = lv_tabview_add_tab(ui->scr_config_modbus_tabview_modbus, "CONNECTION");
    ui->scr_config_modbus_tabview_modbus_tab_2 = lv_tabview_add_tab(ui->scr_config_modbus_tabview_modbus, "CONFIGURE DEVICE");
    ui->scr_config_modbus_tabview_modbus_tab_3 = lv_tabview_add_tab(ui->scr_config_modbus_tabview_modbus, "DEVICE LIST");

    //Write style for scr_config_modbus_tabview_modbus, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->scr_config_modbus_tabview_modbus, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scr_config_modbus_tabview_modbus, lv_color_hex(0x2B2F3A), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scr_config_modbus_tabview_modbus, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->scr_config_modbus_tabview_modbus, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_config_modbus_tabview_modbus, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_config_modbus_tabview_modbus, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scr_config_modbus_tabview_modbus, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scr_config_modbus_tabview_modbus, &lv_font_arial_25, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scr_config_modbus_tabview_modbus, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->scr_config_modbus_tabview_modbus, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->scr_config_modbus_tabview_modbus, 16, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style state: LV_STATE_DEFAULT for &style_scr_config_modbus_tabview_modbus_extra_btnm_main_default
    static lv_style_t style_scr_config_modbus_tabview_modbus_extra_btnm_main_default;
    ui_init_style(&style_scr_config_modbus_tabview_modbus_extra_btnm_main_default);

    lv_style_set_bg_opa(&style_scr_config_modbus_tabview_modbus_extra_btnm_main_default, 255);
    lv_style_set_bg_color(&style_scr_config_modbus_tabview_modbus_extra_btnm_main_default, lv_color_hex(0x454545));
    lv_style_set_bg_grad_dir(&style_scr_config_modbus_tabview_modbus_extra_btnm_main_default, LV_GRAD_DIR_NONE);
    lv_style_set_border_width(&style_scr_config_modbus_tabview_modbus_extra_btnm_main_default, 0);
    lv_style_set_radius(&style_scr_config_modbus_tabview_modbus_extra_btnm_main_default, 0);
    for(uint32_t i = 0; i < lv_tabview_get_tab_count(ui->scr_config_modbus_tabview_modbus); i++)
    {
        lv_obj_add_style(lv_obj_get_child(lv_tabview_get_tab_bar(ui->scr_config_modbus_tabview_modbus), i), &style_scr_config_modbus_tabview_modbus_extra_btnm_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);
    }

    //Write style state: LV_STATE_DEFAULT for &style_scr_config_modbus_tabview_modbus_extra_btnm_items_default
    static lv_style_t style_scr_config_modbus_tabview_modbus_extra_btnm_items_default;
    ui_init_style(&style_scr_config_modbus_tabview_modbus_extra_btnm_items_default);

    lv_style_set_text_color(&style_scr_config_modbus_tabview_modbus_extra_btnm_items_default, lv_color_hex(0xffffff));
    lv_style_set_text_font(&style_scr_config_modbus_tabview_modbus_extra_btnm_items_default, &lv_font_arial_30);
    lv_style_set_text_opa(&style_scr_config_modbus_tabview_modbus_extra_btnm_items_default, 255);
    for(uint32_t i = 0; i < lv_tabview_get_tab_count(ui->scr_config_modbus_tabview_modbus); i++)
    {
        lv_obj_add_style(lv_obj_get_child(lv_tabview_get_tab_bar(ui->scr_config_modbus_tabview_modbus), i), &style_scr_config_modbus_tabview_modbus_extra_btnm_items_default, LV_PART_MAIN|LV_STATE_DEFAULT);
    }

    //Write style state: LV_STATE_CHECKED for &style_scr_config_modbus_tabview_modbus_extra_btnm_items_checked
    static lv_style_t style_scr_config_modbus_tabview_modbus_extra_btnm_items_checked;
    ui_init_style(&style_scr_config_modbus_tabview_modbus_extra_btnm_items_checked);

    lv_style_set_bg_opa(&style_scr_config_modbus_tabview_modbus_extra_btnm_items_checked, 60);
    lv_style_set_bg_color(&style_scr_config_modbus_tabview_modbus_extra_btnm_items_checked, lv_color_hex(0x2195f6));
    lv_style_set_bg_grad_dir(&style_scr_config_modbus_tabview_modbus_extra_btnm_items_checked, LV_GRAD_DIR_NONE);
    lv_style_set_border_width(&style_scr_config_modbus_tabview_modbus_extra_btnm_items_checked, 4);
    lv_style_set_border_opa(&style_scr_config_modbus_tabview_modbus_extra_btnm_items_checked, 255);
    lv_style_set_border_color(&style_scr_config_modbus_tabview_modbus_extra_btnm_items_checked, lv_color_hex(0x2195f6));
    lv_style_set_border_side(&style_scr_config_modbus_tabview_modbus_extra_btnm_items_checked, LV_BORDER_SIDE_BOTTOM);
    lv_style_set_radius(&style_scr_config_modbus_tabview_modbus_extra_btnm_items_checked, 0);
    lv_style_set_text_color(&style_scr_config_modbus_tabview_modbus_extra_btnm_items_checked, lv_color_hex(0x2195f6));
    lv_style_set_text_font(&style_scr_config_modbus_tabview_modbus_extra_btnm_items_checked, &lv_font_montserratMedium_12);
    lv_style_set_text_opa(&style_scr_config_modbus_tabview_modbus_extra_btnm_items_checked, 255);
    for(uint32_t i = 0; i < lv_tabview_get_tab_count(ui->scr_config_modbus_tabview_modbus); i++)
    {
        lv_obj_add_style(lv_obj_get_child(lv_tabview_get_tab_bar(ui->scr_config_modbus_tabview_modbus), i), &style_scr_config_modbus_tabview_modbus_extra_btnm_items_checked, LV_PART_MAIN|LV_STATE_CHECKED);
    }

    //Write codes CONNECTION
    lv_obj_t * scr_config_modbus_tabview_modbus_tab_1_label = lv_label_create(ui->scr_config_modbus_tabview_modbus_tab_1);
    lv_label_set_text(scr_config_modbus_tabview_modbus_tab_1_label, "");

    //Write codes scr_config_modbus_cont_connection
    ui->scr_config_modbus_cont_connection = lv_obj_create(ui->scr_config_modbus_tabview_modbus_tab_1);
    lv_obj_set_pos(ui->scr_config_modbus_cont_connection, 29, 0);
    lv_obj_set_size(ui->scr_config_modbus_cont_connection, 1100, 450);
    lv_obj_set_scrollbar_mode(ui->scr_config_modbus_cont_connection, LV_SCROLLBAR_MODE_OFF);

    //Write style for scr_config_modbus_cont_connection, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scr_config_modbus_cont_connection, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_config_modbus_cont_connection, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scr_config_modbus_cont_connection, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scr_config_modbus_cont_connection, lv_color_hex(0x2b2f3a), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scr_config_modbus_cont_connection, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scr_config_modbus_cont_connection, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scr_config_modbus_cont_connection, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scr_config_modbus_cont_connection, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scr_config_modbus_cont_connection, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_config_modbus_cont_connection, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scr_config_modbus_line_5
    ui->scr_config_modbus_line_5 = lv_line_create(ui->scr_config_modbus_cont_connection);
    lv_obj_set_pos(ui->scr_config_modbus_line_5, 0, 40);
    lv_obj_set_size(ui->scr_config_modbus_line_5, 1100, 2);
    static lv_point_precise_t scr_config_modbus_line_5[] = {{0, 0},{1100, 0}};
    lv_line_set_points(ui->scr_config_modbus_line_5, scr_config_modbus_line_5, 2);

    //Write style for scr_config_modbus_line_5, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_line_width(ui->scr_config_modbus_line_5, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_color(ui->scr_config_modbus_line_5, lv_color_hex(0x757575), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_opa(ui->scr_config_modbus_line_5, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_rounded(ui->scr_config_modbus_line_5, true, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scr_config_modbus_ddlist_timeout
    ui->scr_config_modbus_ddlist_timeout = lv_dropdown_create(ui->scr_config_modbus_cont_connection);
    lv_obj_set_pos(ui->scr_config_modbus_ddlist_timeout, 443, 325);
    lv_obj_set_size(ui->scr_config_modbus_ddlist_timeout, 450, 50);
    lv_dropdown_set_options(ui->scr_config_modbus_ddlist_timeout, "500\n1000");

    //Write style for scr_config_modbus_ddlist_timeout, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_text_color(ui->scr_config_modbus_ddlist_timeout, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scr_config_modbus_ddlist_timeout, &lv_font_arial_30, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scr_config_modbus_ddlist_timeout, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->scr_config_modbus_ddlist_timeout, 1, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->scr_config_modbus_ddlist_timeout, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->scr_config_modbus_ddlist_timeout, lv_color_hex(0xe1e6ee), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->scr_config_modbus_ddlist_timeout, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scr_config_modbus_ddlist_timeout, 8, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scr_config_modbus_ddlist_timeout, 6, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scr_config_modbus_ddlist_timeout, 6, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_config_modbus_ddlist_timeout, 1, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scr_config_modbus_ddlist_timeout, 78, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scr_config_modbus_ddlist_timeout, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scr_config_modbus_ddlist_timeout, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_config_modbus_ddlist_timeout, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style state: LV_STATE_CHECKED for &style_scr_config_modbus_ddlist_timeout_extra_list_selected_checked
    static lv_style_t style_scr_config_modbus_ddlist_timeout_extra_list_selected_checked;
    ui_init_style(&style_scr_config_modbus_ddlist_timeout_extra_list_selected_checked);

    lv_style_set_border_width(&style_scr_config_modbus_ddlist_timeout_extra_list_selected_checked, 1);
    lv_style_set_border_opa(&style_scr_config_modbus_ddlist_timeout_extra_list_selected_checked, 255);
    lv_style_set_border_color(&style_scr_config_modbus_ddlist_timeout_extra_list_selected_checked, lv_color_hex(0xe1e6ee));
    lv_style_set_border_side(&style_scr_config_modbus_ddlist_timeout_extra_list_selected_checked, LV_BORDER_SIDE_FULL);
    lv_style_set_radius(&style_scr_config_modbus_ddlist_timeout_extra_list_selected_checked, 3);
    lv_style_set_bg_opa(&style_scr_config_modbus_ddlist_timeout_extra_list_selected_checked, 255);
    lv_style_set_bg_color(&style_scr_config_modbus_ddlist_timeout_extra_list_selected_checked, lv_color_hex(0x00a1b5));
    lv_style_set_bg_grad_dir(&style_scr_config_modbus_ddlist_timeout_extra_list_selected_checked, LV_GRAD_DIR_NONE);
    lv_obj_add_style(lv_dropdown_get_list(ui->scr_config_modbus_ddlist_timeout), &style_scr_config_modbus_ddlist_timeout_extra_list_selected_checked, LV_PART_SELECTED|LV_STATE_CHECKED);

    //Write style state: LV_STATE_DEFAULT for &style_scr_config_modbus_ddlist_timeout_extra_list_main_default
    static lv_style_t style_scr_config_modbus_ddlist_timeout_extra_list_main_default;
    ui_init_style(&style_scr_config_modbus_ddlist_timeout_extra_list_main_default);

    lv_style_set_max_height(&style_scr_config_modbus_ddlist_timeout_extra_list_main_default, 90);
    lv_style_set_text_color(&style_scr_config_modbus_ddlist_timeout_extra_list_main_default, lv_color_hex(0x0D3055));
    lv_style_set_text_font(&style_scr_config_modbus_ddlist_timeout_extra_list_main_default, &lv_font_montserratMedium_12);
    lv_style_set_text_opa(&style_scr_config_modbus_ddlist_timeout_extra_list_main_default, 255);
    lv_style_set_border_width(&style_scr_config_modbus_ddlist_timeout_extra_list_main_default, 1);
    lv_style_set_border_opa(&style_scr_config_modbus_ddlist_timeout_extra_list_main_default, 255);
    lv_style_set_border_color(&style_scr_config_modbus_ddlist_timeout_extra_list_main_default, lv_color_hex(0xe1e6ee));
    lv_style_set_border_side(&style_scr_config_modbus_ddlist_timeout_extra_list_main_default, LV_BORDER_SIDE_FULL);
    lv_style_set_radius(&style_scr_config_modbus_ddlist_timeout_extra_list_main_default, 3);
    lv_style_set_bg_opa(&style_scr_config_modbus_ddlist_timeout_extra_list_main_default, 255);
    lv_style_set_bg_color(&style_scr_config_modbus_ddlist_timeout_extra_list_main_default, lv_color_hex(0xffffff));
    lv_style_set_bg_grad_dir(&style_scr_config_modbus_ddlist_timeout_extra_list_main_default, LV_GRAD_DIR_NONE);
    lv_obj_add_style(lv_dropdown_get_list(ui->scr_config_modbus_ddlist_timeout), &style_scr_config_modbus_ddlist_timeout_extra_list_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style state: LV_STATE_DEFAULT for &style_scr_config_modbus_ddlist_timeout_extra_list_scrollbar_default
    static lv_style_t style_scr_config_modbus_ddlist_timeout_extra_list_scrollbar_default;
    ui_init_style(&style_scr_config_modbus_ddlist_timeout_extra_list_scrollbar_default);

    lv_style_set_radius(&style_scr_config_modbus_ddlist_timeout_extra_list_scrollbar_default, 3);
    lv_style_set_bg_opa(&style_scr_config_modbus_ddlist_timeout_extra_list_scrollbar_default, 255);
    lv_style_set_bg_color(&style_scr_config_modbus_ddlist_timeout_extra_list_scrollbar_default, lv_color_hex(0x00ff00));
    lv_style_set_bg_grad_dir(&style_scr_config_modbus_ddlist_timeout_extra_list_scrollbar_default, LV_GRAD_DIR_NONE);
    lv_obj_add_style(lv_dropdown_get_list(ui->scr_config_modbus_ddlist_timeout), &style_scr_config_modbus_ddlist_timeout_extra_list_scrollbar_default, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);

    //Write codes scr_config_modbus_ddlist_baudrate
    ui->scr_config_modbus_ddlist_baudrate = lv_dropdown_create(ui->scr_config_modbus_cont_connection);
    lv_obj_set_pos(ui->scr_config_modbus_ddlist_baudrate, 443, 59);
    lv_obj_set_size(ui->scr_config_modbus_ddlist_baudrate, 450, 50);
    lv_dropdown_set_options(ui->scr_config_modbus_ddlist_baudrate, "9600\n11400\n19200\n115200");

    //Write style for scr_config_modbus_ddlist_baudrate, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_text_color(ui->scr_config_modbus_ddlist_baudrate, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scr_config_modbus_ddlist_baudrate, &lv_font_arial_30, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scr_config_modbus_ddlist_baudrate, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->scr_config_modbus_ddlist_baudrate, 1, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->scr_config_modbus_ddlist_baudrate, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->scr_config_modbus_ddlist_baudrate, lv_color_hex(0xe1e6ee), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->scr_config_modbus_ddlist_baudrate, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scr_config_modbus_ddlist_baudrate, 8, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scr_config_modbus_ddlist_baudrate, 6, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scr_config_modbus_ddlist_baudrate, 6, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_config_modbus_ddlist_baudrate, 1, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scr_config_modbus_ddlist_baudrate, 78, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scr_config_modbus_ddlist_baudrate, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scr_config_modbus_ddlist_baudrate, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_config_modbus_ddlist_baudrate, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style state: LV_STATE_CHECKED for &style_scr_config_modbus_ddlist_baudrate_extra_list_selected_checked
    static lv_style_t style_scr_config_modbus_ddlist_baudrate_extra_list_selected_checked;
    ui_init_style(&style_scr_config_modbus_ddlist_baudrate_extra_list_selected_checked);

    lv_style_set_border_width(&style_scr_config_modbus_ddlist_baudrate_extra_list_selected_checked, 1);
    lv_style_set_border_opa(&style_scr_config_modbus_ddlist_baudrate_extra_list_selected_checked, 255);
    lv_style_set_border_color(&style_scr_config_modbus_ddlist_baudrate_extra_list_selected_checked, lv_color_hex(0xe1e6ee));
    lv_style_set_border_side(&style_scr_config_modbus_ddlist_baudrate_extra_list_selected_checked, LV_BORDER_SIDE_FULL);
    lv_style_set_radius(&style_scr_config_modbus_ddlist_baudrate_extra_list_selected_checked, 3);
    lv_style_set_bg_opa(&style_scr_config_modbus_ddlist_baudrate_extra_list_selected_checked, 255);
    lv_style_set_bg_color(&style_scr_config_modbus_ddlist_baudrate_extra_list_selected_checked, lv_color_hex(0x00a1b5));
    lv_style_set_bg_grad_dir(&style_scr_config_modbus_ddlist_baudrate_extra_list_selected_checked, LV_GRAD_DIR_NONE);
    lv_obj_add_style(lv_dropdown_get_list(ui->scr_config_modbus_ddlist_baudrate), &style_scr_config_modbus_ddlist_baudrate_extra_list_selected_checked, LV_PART_SELECTED|LV_STATE_CHECKED);

    //Write style state: LV_STATE_DEFAULT for &style_scr_config_modbus_ddlist_baudrate_extra_list_main_default
    static lv_style_t style_scr_config_modbus_ddlist_baudrate_extra_list_main_default;
    ui_init_style(&style_scr_config_modbus_ddlist_baudrate_extra_list_main_default);

    lv_style_set_max_height(&style_scr_config_modbus_ddlist_baudrate_extra_list_main_default, 90);
    lv_style_set_text_color(&style_scr_config_modbus_ddlist_baudrate_extra_list_main_default, lv_color_hex(0x0D3055));
    lv_style_set_text_font(&style_scr_config_modbus_ddlist_baudrate_extra_list_main_default, &lv_font_montserratMedium_12);
    lv_style_set_text_opa(&style_scr_config_modbus_ddlist_baudrate_extra_list_main_default, 255);
    lv_style_set_border_width(&style_scr_config_modbus_ddlist_baudrate_extra_list_main_default, 1);
    lv_style_set_border_opa(&style_scr_config_modbus_ddlist_baudrate_extra_list_main_default, 255);
    lv_style_set_border_color(&style_scr_config_modbus_ddlist_baudrate_extra_list_main_default, lv_color_hex(0xe1e6ee));
    lv_style_set_border_side(&style_scr_config_modbus_ddlist_baudrate_extra_list_main_default, LV_BORDER_SIDE_FULL);
    lv_style_set_radius(&style_scr_config_modbus_ddlist_baudrate_extra_list_main_default, 3);
    lv_style_set_bg_opa(&style_scr_config_modbus_ddlist_baudrate_extra_list_main_default, 255);
    lv_style_set_bg_color(&style_scr_config_modbus_ddlist_baudrate_extra_list_main_default, lv_color_hex(0xffffff));
    lv_style_set_bg_grad_dir(&style_scr_config_modbus_ddlist_baudrate_extra_list_main_default, LV_GRAD_DIR_NONE);
    lv_obj_add_style(lv_dropdown_get_list(ui->scr_config_modbus_ddlist_baudrate), &style_scr_config_modbus_ddlist_baudrate_extra_list_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style state: LV_STATE_DEFAULT for &style_scr_config_modbus_ddlist_baudrate_extra_list_scrollbar_default
    static lv_style_t style_scr_config_modbus_ddlist_baudrate_extra_list_scrollbar_default;
    ui_init_style(&style_scr_config_modbus_ddlist_baudrate_extra_list_scrollbar_default);

    lv_style_set_radius(&style_scr_config_modbus_ddlist_baudrate_extra_list_scrollbar_default, 3);
    lv_style_set_bg_opa(&style_scr_config_modbus_ddlist_baudrate_extra_list_scrollbar_default, 255);
    lv_style_set_bg_color(&style_scr_config_modbus_ddlist_baudrate_extra_list_scrollbar_default, lv_color_hex(0x00ff00));
    lv_style_set_bg_grad_dir(&style_scr_config_modbus_ddlist_baudrate_extra_list_scrollbar_default, LV_GRAD_DIR_NONE);
    lv_obj_add_style(lv_dropdown_get_list(ui->scr_config_modbus_ddlist_baudrate), &style_scr_config_modbus_ddlist_baudrate_extra_list_scrollbar_default, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);

    //Write codes scr_config_modbus_lbl_timeout
    ui->scr_config_modbus_lbl_timeout = lv_label_create(ui->scr_config_modbus_cont_connection);
    lv_obj_set_pos(ui->scr_config_modbus_lbl_timeout, 143, 334);
    lv_obj_set_size(ui->scr_config_modbus_lbl_timeout, 193, 32);
    lv_label_set_text(ui->scr_config_modbus_lbl_timeout, "Timeout (ms)");
    lv_label_set_long_mode(ui->scr_config_modbus_lbl_timeout, LV_LABEL_LONG_WRAP);

    //Write style for scr_config_modbus_lbl_timeout, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scr_config_modbus_lbl_timeout, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_config_modbus_lbl_timeout, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scr_config_modbus_lbl_timeout, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scr_config_modbus_lbl_timeout, &lv_font_arial_30, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scr_config_modbus_lbl_timeout, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->scr_config_modbus_lbl_timeout, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->scr_config_modbus_lbl_timeout, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scr_config_modbus_lbl_timeout, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scr_config_modbus_lbl_timeout, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scr_config_modbus_lbl_timeout, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scr_config_modbus_lbl_timeout, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scr_config_modbus_lbl_timeout, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scr_config_modbus_lbl_timeout, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_config_modbus_lbl_timeout, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scr_config_modbus_lbl_stopbit
    ui->scr_config_modbus_lbl_stopbit = lv_label_create(ui->scr_config_modbus_cont_connection);
    lv_obj_set_pos(ui->scr_config_modbus_lbl_stopbit, 143, 244);
    lv_obj_set_size(ui->scr_config_modbus_lbl_stopbit, 121, 32);
    lv_label_set_text(ui->scr_config_modbus_lbl_stopbit, "Stop bits");
    lv_label_set_long_mode(ui->scr_config_modbus_lbl_stopbit, LV_LABEL_LONG_WRAP);

    //Write style for scr_config_modbus_lbl_stopbit, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scr_config_modbus_lbl_stopbit, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_config_modbus_lbl_stopbit, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scr_config_modbus_lbl_stopbit, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scr_config_modbus_lbl_stopbit, &lv_font_arial_30, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scr_config_modbus_lbl_stopbit, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->scr_config_modbus_lbl_stopbit, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->scr_config_modbus_lbl_stopbit, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scr_config_modbus_lbl_stopbit, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scr_config_modbus_lbl_stopbit, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scr_config_modbus_lbl_stopbit, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scr_config_modbus_lbl_stopbit, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scr_config_modbus_lbl_stopbit, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scr_config_modbus_lbl_stopbit, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_config_modbus_lbl_stopbit, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scr_config_modbus_ddlist_stopbit
    ui->scr_config_modbus_ddlist_stopbit = lv_dropdown_create(ui->scr_config_modbus_cont_connection);
    lv_obj_set_pos(ui->scr_config_modbus_ddlist_stopbit, 443, 235);
    lv_obj_set_size(ui->scr_config_modbus_ddlist_stopbit, 450, 50);
    lv_dropdown_set_options(ui->scr_config_modbus_ddlist_stopbit, "1\n2");

    //Write style for scr_config_modbus_ddlist_stopbit, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_text_color(ui->scr_config_modbus_ddlist_stopbit, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scr_config_modbus_ddlist_stopbit, &lv_font_arial_30, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scr_config_modbus_ddlist_stopbit, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->scr_config_modbus_ddlist_stopbit, 1, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->scr_config_modbus_ddlist_stopbit, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->scr_config_modbus_ddlist_stopbit, lv_color_hex(0xe1e6ee), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->scr_config_modbus_ddlist_stopbit, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scr_config_modbus_ddlist_stopbit, 8, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scr_config_modbus_ddlist_stopbit, 6, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scr_config_modbus_ddlist_stopbit, 6, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_config_modbus_ddlist_stopbit, 1, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scr_config_modbus_ddlist_stopbit, 79, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scr_config_modbus_ddlist_stopbit, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scr_config_modbus_ddlist_stopbit, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_config_modbus_ddlist_stopbit, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style state: LV_STATE_CHECKED for &style_scr_config_modbus_ddlist_stopbit_extra_list_selected_checked
    static lv_style_t style_scr_config_modbus_ddlist_stopbit_extra_list_selected_checked;
    ui_init_style(&style_scr_config_modbus_ddlist_stopbit_extra_list_selected_checked);

    lv_style_set_border_width(&style_scr_config_modbus_ddlist_stopbit_extra_list_selected_checked, 1);
    lv_style_set_border_opa(&style_scr_config_modbus_ddlist_stopbit_extra_list_selected_checked, 255);
    lv_style_set_border_color(&style_scr_config_modbus_ddlist_stopbit_extra_list_selected_checked, lv_color_hex(0xe1e6ee));
    lv_style_set_border_side(&style_scr_config_modbus_ddlist_stopbit_extra_list_selected_checked, LV_BORDER_SIDE_FULL);
    lv_style_set_radius(&style_scr_config_modbus_ddlist_stopbit_extra_list_selected_checked, 3);
    lv_style_set_bg_opa(&style_scr_config_modbus_ddlist_stopbit_extra_list_selected_checked, 255);
    lv_style_set_bg_color(&style_scr_config_modbus_ddlist_stopbit_extra_list_selected_checked, lv_color_hex(0x00a1b5));
    lv_style_set_bg_grad_dir(&style_scr_config_modbus_ddlist_stopbit_extra_list_selected_checked, LV_GRAD_DIR_NONE);
    lv_obj_add_style(lv_dropdown_get_list(ui->scr_config_modbus_ddlist_stopbit), &style_scr_config_modbus_ddlist_stopbit_extra_list_selected_checked, LV_PART_SELECTED|LV_STATE_CHECKED);

    //Write style state: LV_STATE_DEFAULT for &style_scr_config_modbus_ddlist_stopbit_extra_list_main_default
    static lv_style_t style_scr_config_modbus_ddlist_stopbit_extra_list_main_default;
    ui_init_style(&style_scr_config_modbus_ddlist_stopbit_extra_list_main_default);

    lv_style_set_max_height(&style_scr_config_modbus_ddlist_stopbit_extra_list_main_default, 90);
    lv_style_set_text_color(&style_scr_config_modbus_ddlist_stopbit_extra_list_main_default, lv_color_hex(0x0D3055));
    lv_style_set_text_font(&style_scr_config_modbus_ddlist_stopbit_extra_list_main_default, &lv_font_montserratMedium_12);
    lv_style_set_text_opa(&style_scr_config_modbus_ddlist_stopbit_extra_list_main_default, 255);
    lv_style_set_border_width(&style_scr_config_modbus_ddlist_stopbit_extra_list_main_default, 1);
    lv_style_set_border_opa(&style_scr_config_modbus_ddlist_stopbit_extra_list_main_default, 255);
    lv_style_set_border_color(&style_scr_config_modbus_ddlist_stopbit_extra_list_main_default, lv_color_hex(0xe1e6ee));
    lv_style_set_border_side(&style_scr_config_modbus_ddlist_stopbit_extra_list_main_default, LV_BORDER_SIDE_FULL);
    lv_style_set_radius(&style_scr_config_modbus_ddlist_stopbit_extra_list_main_default, 3);
    lv_style_set_bg_opa(&style_scr_config_modbus_ddlist_stopbit_extra_list_main_default, 255);
    lv_style_set_bg_color(&style_scr_config_modbus_ddlist_stopbit_extra_list_main_default, lv_color_hex(0xffffff));
    lv_style_set_bg_grad_dir(&style_scr_config_modbus_ddlist_stopbit_extra_list_main_default, LV_GRAD_DIR_NONE);
    lv_obj_add_style(lv_dropdown_get_list(ui->scr_config_modbus_ddlist_stopbit), &style_scr_config_modbus_ddlist_stopbit_extra_list_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style state: LV_STATE_DEFAULT for &style_scr_config_modbus_ddlist_stopbit_extra_list_scrollbar_default
    static lv_style_t style_scr_config_modbus_ddlist_stopbit_extra_list_scrollbar_default;
    ui_init_style(&style_scr_config_modbus_ddlist_stopbit_extra_list_scrollbar_default);

    lv_style_set_radius(&style_scr_config_modbus_ddlist_stopbit_extra_list_scrollbar_default, 3);
    lv_style_set_bg_opa(&style_scr_config_modbus_ddlist_stopbit_extra_list_scrollbar_default, 255);
    lv_style_set_bg_color(&style_scr_config_modbus_ddlist_stopbit_extra_list_scrollbar_default, lv_color_hex(0x00ff00));
    lv_style_set_bg_grad_dir(&style_scr_config_modbus_ddlist_stopbit_extra_list_scrollbar_default, LV_GRAD_DIR_NONE);
    lv_obj_add_style(lv_dropdown_get_list(ui->scr_config_modbus_ddlist_stopbit), &style_scr_config_modbus_ddlist_stopbit_extra_list_scrollbar_default, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);

    //Write codes scr_config_modbus_lbl_baudrate
    ui->scr_config_modbus_lbl_baudrate = lv_label_create(ui->scr_config_modbus_cont_connection);
    lv_obj_set_pos(ui->scr_config_modbus_lbl_baudrate, 143, 67);
    lv_obj_set_size(ui->scr_config_modbus_lbl_baudrate, 143, 32);
    lv_label_set_text(ui->scr_config_modbus_lbl_baudrate, "Baud Rate");
    lv_label_set_long_mode(ui->scr_config_modbus_lbl_baudrate, LV_LABEL_LONG_WRAP);

    //Write style for scr_config_modbus_lbl_baudrate, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scr_config_modbus_lbl_baudrate, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_config_modbus_lbl_baudrate, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scr_config_modbus_lbl_baudrate, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scr_config_modbus_lbl_baudrate, &lv_font_arial_30, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scr_config_modbus_lbl_baudrate, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->scr_config_modbus_lbl_baudrate, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->scr_config_modbus_lbl_baudrate, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scr_config_modbus_lbl_baudrate, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scr_config_modbus_lbl_baudrate, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scr_config_modbus_lbl_baudrate, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scr_config_modbus_lbl_baudrate, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scr_config_modbus_lbl_baudrate, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scr_config_modbus_lbl_baudrate, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_config_modbus_lbl_baudrate, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scr_config_modbus_lbl_conncetion
    ui->scr_config_modbus_lbl_conncetion = lv_label_create(ui->scr_config_modbus_cont_connection);
    lv_obj_set_pos(ui->scr_config_modbus_lbl_conncetion, 0, 0);
    lv_obj_set_size(ui->scr_config_modbus_lbl_conncetion, 381, 32);
    lv_label_set_text_static(ui->scr_config_modbus_lbl_conncetion, "Selected Input: Connection");
    lv_label_set_long_mode(ui->scr_config_modbus_lbl_conncetion, LV_LABEL_LONG_WRAP);

    //Write style for scr_config_modbus_lbl_conncetion, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scr_config_modbus_lbl_conncetion, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_config_modbus_lbl_conncetion, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scr_config_modbus_lbl_conncetion, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scr_config_modbus_lbl_conncetion, &lv_font_arial_30, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scr_config_modbus_lbl_conncetion, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->scr_config_modbus_lbl_conncetion, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->scr_config_modbus_lbl_conncetion, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scr_config_modbus_lbl_conncetion, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scr_config_modbus_lbl_conncetion, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scr_config_modbus_lbl_conncetion, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scr_config_modbus_lbl_conncetion, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scr_config_modbus_lbl_conncetion, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scr_config_modbus_lbl_conncetion, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_config_modbus_lbl_conncetion, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scr_config_modbus_lbl_retry_count
    ui->scr_config_modbus_lbl_retry_count = lv_label_create(ui->scr_config_modbus_cont_connection);
    lv_obj_set_pos(ui->scr_config_modbus_lbl_retry_count, 143, 417);
    lv_obj_set_size(ui->scr_config_modbus_lbl_retry_count, 172, 32);
    lv_label_set_text(ui->scr_config_modbus_lbl_retry_count, "Retry Count");
    lv_label_set_long_mode(ui->scr_config_modbus_lbl_retry_count, LV_LABEL_LONG_WRAP);

    //Write style for scr_config_modbus_lbl_retry_count, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scr_config_modbus_lbl_retry_count, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_config_modbus_lbl_retry_count, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scr_config_modbus_lbl_retry_count, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scr_config_modbus_lbl_retry_count, &lv_font_arial_30, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scr_config_modbus_lbl_retry_count, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->scr_config_modbus_lbl_retry_count, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->scr_config_modbus_lbl_retry_count, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scr_config_modbus_lbl_retry_count, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scr_config_modbus_lbl_retry_count, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scr_config_modbus_lbl_retry_count, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scr_config_modbus_lbl_retry_count, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scr_config_modbus_lbl_retry_count, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scr_config_modbus_lbl_retry_count, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_config_modbus_lbl_retry_count, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scr_config_modbus_line_4
    ui->scr_config_modbus_line_4 = lv_line_create(ui->scr_config_modbus_cont_connection);
    lv_obj_set_pos(ui->scr_config_modbus_line_4, 143, 126);
    lv_obj_set_size(ui->scr_config_modbus_line_4, 850, 2);
    static lv_point_precise_t scr_config_modbus_line_4[] = {{0, 0},{1100, 0}};
    lv_line_set_points(ui->scr_config_modbus_line_4, scr_config_modbus_line_4, 2);

    //Write style for scr_config_modbus_line_4, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_line_width(ui->scr_config_modbus_line_4, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_color(ui->scr_config_modbus_line_4, lv_color_hex(0x757575), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_opa(ui->scr_config_modbus_line_4, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_rounded(ui->scr_config_modbus_line_4, true, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scr_config_modbus_line_3
    ui->scr_config_modbus_line_3 = lv_line_create(ui->scr_config_modbus_cont_connection);
    lv_obj_set_pos(ui->scr_config_modbus_line_3, 143, 306);
    lv_obj_set_size(ui->scr_config_modbus_line_3, 850, 2);
    static lv_point_precise_t scr_config_modbus_line_3[] = {{0, 0},{1100, 0}};
    lv_line_set_points(ui->scr_config_modbus_line_3, scr_config_modbus_line_3, 2);

    //Write style for scr_config_modbus_line_3, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_line_width(ui->scr_config_modbus_line_3, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_color(ui->scr_config_modbus_line_3, lv_color_hex(0x757575), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_opa(ui->scr_config_modbus_line_3, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_rounded(ui->scr_config_modbus_line_3, true, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scr_config_modbus_line_2
    ui->scr_config_modbus_line_2 = lv_line_create(ui->scr_config_modbus_cont_connection);
    lv_obj_set_pos(ui->scr_config_modbus_line_2, 143, 394);
    lv_obj_set_size(ui->scr_config_modbus_line_2, 850, 2);
    static lv_point_precise_t scr_config_modbus_line_2[] = {{0, 0},{1100, 0}};
    lv_line_set_points(ui->scr_config_modbus_line_2, scr_config_modbus_line_2, 2);

    //Write style for scr_config_modbus_line_2, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_line_width(ui->scr_config_modbus_line_2, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_color(ui->scr_config_modbus_line_2, lv_color_hex(0x757575), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_opa(ui->scr_config_modbus_line_2, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_rounded(ui->scr_config_modbus_line_2, true, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scr_config_modbus_ddlist_parity
    ui->scr_config_modbus_ddlist_parity = lv_dropdown_create(ui->scr_config_modbus_cont_connection);
    lv_obj_set_pos(ui->scr_config_modbus_ddlist_parity, 443, 146);
    lv_obj_set_size(ui->scr_config_modbus_ddlist_parity, 450, 50);
    lv_dropdown_set_options(ui->scr_config_modbus_ddlist_parity, "None\nEven\nOdd");

    //Write style for scr_config_modbus_ddlist_parity, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_text_color(ui->scr_config_modbus_ddlist_parity, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scr_config_modbus_ddlist_parity, &lv_font_arial_30, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scr_config_modbus_ddlist_parity, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->scr_config_modbus_ddlist_parity, 1, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->scr_config_modbus_ddlist_parity, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->scr_config_modbus_ddlist_parity, lv_color_hex(0xe1e6ee), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->scr_config_modbus_ddlist_parity, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scr_config_modbus_ddlist_parity, 8, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scr_config_modbus_ddlist_parity, 6, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scr_config_modbus_ddlist_parity, 6, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_config_modbus_ddlist_parity, 1, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scr_config_modbus_ddlist_parity, 78, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scr_config_modbus_ddlist_parity, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scr_config_modbus_ddlist_parity, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_config_modbus_ddlist_parity, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style state: LV_STATE_CHECKED for &style_scr_config_modbus_ddlist_parity_extra_list_selected_checked
    static lv_style_t style_scr_config_modbus_ddlist_parity_extra_list_selected_checked;
    ui_init_style(&style_scr_config_modbus_ddlist_parity_extra_list_selected_checked);

    lv_style_set_border_width(&style_scr_config_modbus_ddlist_parity_extra_list_selected_checked, 1);
    lv_style_set_border_opa(&style_scr_config_modbus_ddlist_parity_extra_list_selected_checked, 255);
    lv_style_set_border_color(&style_scr_config_modbus_ddlist_parity_extra_list_selected_checked, lv_color_hex(0xe1e6ee));
    lv_style_set_border_side(&style_scr_config_modbus_ddlist_parity_extra_list_selected_checked, LV_BORDER_SIDE_FULL);
    lv_style_set_radius(&style_scr_config_modbus_ddlist_parity_extra_list_selected_checked, 3);
    lv_style_set_bg_opa(&style_scr_config_modbus_ddlist_parity_extra_list_selected_checked, 255);
    lv_style_set_bg_color(&style_scr_config_modbus_ddlist_parity_extra_list_selected_checked, lv_color_hex(0x00a1b5));
    lv_style_set_bg_grad_dir(&style_scr_config_modbus_ddlist_parity_extra_list_selected_checked, LV_GRAD_DIR_NONE);
    lv_obj_add_style(lv_dropdown_get_list(ui->scr_config_modbus_ddlist_parity), &style_scr_config_modbus_ddlist_parity_extra_list_selected_checked, LV_PART_SELECTED|LV_STATE_CHECKED);

    //Write style state: LV_STATE_DEFAULT for &style_scr_config_modbus_ddlist_parity_extra_list_main_default
    static lv_style_t style_scr_config_modbus_ddlist_parity_extra_list_main_default;
    ui_init_style(&style_scr_config_modbus_ddlist_parity_extra_list_main_default);

    lv_style_set_max_height(&style_scr_config_modbus_ddlist_parity_extra_list_main_default, 90);
    lv_style_set_text_color(&style_scr_config_modbus_ddlist_parity_extra_list_main_default, lv_color_hex(0x0D3055));
    lv_style_set_text_font(&style_scr_config_modbus_ddlist_parity_extra_list_main_default, &lv_font_montserratMedium_12);
    lv_style_set_text_opa(&style_scr_config_modbus_ddlist_parity_extra_list_main_default, 255);
    lv_style_set_border_width(&style_scr_config_modbus_ddlist_parity_extra_list_main_default, 1);
    lv_style_set_border_opa(&style_scr_config_modbus_ddlist_parity_extra_list_main_default, 255);
    lv_style_set_border_color(&style_scr_config_modbus_ddlist_parity_extra_list_main_default, lv_color_hex(0xe1e6ee));
    lv_style_set_border_side(&style_scr_config_modbus_ddlist_parity_extra_list_main_default, LV_BORDER_SIDE_FULL);
    lv_style_set_radius(&style_scr_config_modbus_ddlist_parity_extra_list_main_default, 3);
    lv_style_set_bg_opa(&style_scr_config_modbus_ddlist_parity_extra_list_main_default, 255);
    lv_style_set_bg_color(&style_scr_config_modbus_ddlist_parity_extra_list_main_default, lv_color_hex(0xffffff));
    lv_style_set_bg_grad_dir(&style_scr_config_modbus_ddlist_parity_extra_list_main_default, LV_GRAD_DIR_NONE);
    lv_obj_add_style(lv_dropdown_get_list(ui->scr_config_modbus_ddlist_parity), &style_scr_config_modbus_ddlist_parity_extra_list_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style state: LV_STATE_DEFAULT for &style_scr_config_modbus_ddlist_parity_extra_list_scrollbar_default
    static lv_style_t style_scr_config_modbus_ddlist_parity_extra_list_scrollbar_default;
    ui_init_style(&style_scr_config_modbus_ddlist_parity_extra_list_scrollbar_default);

    lv_style_set_radius(&style_scr_config_modbus_ddlist_parity_extra_list_scrollbar_default, 3);
    lv_style_set_bg_opa(&style_scr_config_modbus_ddlist_parity_extra_list_scrollbar_default, 255);
    lv_style_set_bg_color(&style_scr_config_modbus_ddlist_parity_extra_list_scrollbar_default, lv_color_hex(0x00ff00));
    lv_style_set_bg_grad_dir(&style_scr_config_modbus_ddlist_parity_extra_list_scrollbar_default, LV_GRAD_DIR_NONE);
    lv_obj_add_style(lv_dropdown_get_list(ui->scr_config_modbus_ddlist_parity), &style_scr_config_modbus_ddlist_parity_extra_list_scrollbar_default, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);

    //Write codes scr_config_modbus_lbl_parity
    ui->scr_config_modbus_lbl_parity = lv_label_create(ui->scr_config_modbus_cont_connection);
    lv_obj_set_pos(ui->scr_config_modbus_lbl_parity, 143, 151);
    lv_obj_set_size(ui->scr_config_modbus_lbl_parity, 82, 32);
    lv_label_set_text(ui->scr_config_modbus_lbl_parity, "Parity");
    lv_label_set_long_mode(ui->scr_config_modbus_lbl_parity, LV_LABEL_LONG_WRAP);

    //Write style for scr_config_modbus_lbl_parity, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scr_config_modbus_lbl_parity, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_config_modbus_lbl_parity, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scr_config_modbus_lbl_parity, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scr_config_modbus_lbl_parity, &lv_font_arial_30, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scr_config_modbus_lbl_parity, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->scr_config_modbus_lbl_parity, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->scr_config_modbus_lbl_parity, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scr_config_modbus_lbl_parity, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scr_config_modbus_lbl_parity, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scr_config_modbus_lbl_parity, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scr_config_modbus_lbl_parity, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scr_config_modbus_lbl_parity, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scr_config_modbus_lbl_parity, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_config_modbus_lbl_parity, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scr_config_modbus_line_1
    ui->scr_config_modbus_line_1 = lv_line_create(ui->scr_config_modbus_cont_connection);
    lv_obj_set_pos(ui->scr_config_modbus_line_1, 143, 216);
    lv_obj_set_size(ui->scr_config_modbus_line_1, 850, 2);
    static lv_point_precise_t scr_config_modbus_line_1[] = {{0, 0},{1100, 0}};
    lv_line_set_points(ui->scr_config_modbus_line_1, scr_config_modbus_line_1, 2);

    //Write style for scr_config_modbus_line_1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_line_width(ui->scr_config_modbus_line_1, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_color(ui->scr_config_modbus_line_1, lv_color_hex(0x757575), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_opa(ui->scr_config_modbus_line_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_rounded(ui->scr_config_modbus_line_1, true, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scr_config_modbus_ddlist_retry_count
    ui->scr_config_modbus_ddlist_retry_count = lv_dropdown_create(ui->scr_config_modbus_cont_connection);
    lv_obj_set_pos(ui->scr_config_modbus_ddlist_retry_count, 443, 408);
    lv_obj_set_size(ui->scr_config_modbus_ddlist_retry_count, 450, 50);
    lv_dropdown_set_options(ui->scr_config_modbus_ddlist_retry_count, "3\n5");

    //Write style for scr_config_modbus_ddlist_retry_count, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_text_color(ui->scr_config_modbus_ddlist_retry_count, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scr_config_modbus_ddlist_retry_count, &lv_font_arial_30, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scr_config_modbus_ddlist_retry_count, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->scr_config_modbus_ddlist_retry_count, 1, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->scr_config_modbus_ddlist_retry_count, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->scr_config_modbus_ddlist_retry_count, lv_color_hex(0xe1e6ee), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->scr_config_modbus_ddlist_retry_count, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scr_config_modbus_ddlist_retry_count, 8, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scr_config_modbus_ddlist_retry_count, 6, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scr_config_modbus_ddlist_retry_count, 6, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_config_modbus_ddlist_retry_count, 1, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scr_config_modbus_ddlist_retry_count, 78, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scr_config_modbus_ddlist_retry_count, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scr_config_modbus_ddlist_retry_count, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_config_modbus_ddlist_retry_count, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style state: LV_STATE_CHECKED for &style_scr_config_modbus_ddlist_retry_count_extra_list_selected_checked
    static lv_style_t style_scr_config_modbus_ddlist_retry_count_extra_list_selected_checked;
    ui_init_style(&style_scr_config_modbus_ddlist_retry_count_extra_list_selected_checked);

    lv_style_set_border_width(&style_scr_config_modbus_ddlist_retry_count_extra_list_selected_checked, 1);
    lv_style_set_border_opa(&style_scr_config_modbus_ddlist_retry_count_extra_list_selected_checked, 255);
    lv_style_set_border_color(&style_scr_config_modbus_ddlist_retry_count_extra_list_selected_checked, lv_color_hex(0xe1e6ee));
    lv_style_set_border_side(&style_scr_config_modbus_ddlist_retry_count_extra_list_selected_checked, LV_BORDER_SIDE_FULL);
    lv_style_set_radius(&style_scr_config_modbus_ddlist_retry_count_extra_list_selected_checked, 3);
    lv_style_set_bg_opa(&style_scr_config_modbus_ddlist_retry_count_extra_list_selected_checked, 255);
    lv_style_set_bg_color(&style_scr_config_modbus_ddlist_retry_count_extra_list_selected_checked, lv_color_hex(0x00a1b5));
    lv_style_set_bg_grad_dir(&style_scr_config_modbus_ddlist_retry_count_extra_list_selected_checked, LV_GRAD_DIR_NONE);
    lv_obj_add_style(lv_dropdown_get_list(ui->scr_config_modbus_ddlist_retry_count), &style_scr_config_modbus_ddlist_retry_count_extra_list_selected_checked, LV_PART_SELECTED|LV_STATE_CHECKED);

    //Write style state: LV_STATE_DEFAULT for &style_scr_config_modbus_ddlist_retry_count_extra_list_main_default
    static lv_style_t style_scr_config_modbus_ddlist_retry_count_extra_list_main_default;
    ui_init_style(&style_scr_config_modbus_ddlist_retry_count_extra_list_main_default);

    lv_style_set_max_height(&style_scr_config_modbus_ddlist_retry_count_extra_list_main_default, 90);
    lv_style_set_text_color(&style_scr_config_modbus_ddlist_retry_count_extra_list_main_default, lv_color_hex(0x0D3055));
    lv_style_set_text_font(&style_scr_config_modbus_ddlist_retry_count_extra_list_main_default, &lv_font_montserratMedium_12);
    lv_style_set_text_opa(&style_scr_config_modbus_ddlist_retry_count_extra_list_main_default, 255);
    lv_style_set_border_width(&style_scr_config_modbus_ddlist_retry_count_extra_list_main_default, 1);
    lv_style_set_border_opa(&style_scr_config_modbus_ddlist_retry_count_extra_list_main_default, 255);
    lv_style_set_border_color(&style_scr_config_modbus_ddlist_retry_count_extra_list_main_default, lv_color_hex(0xe1e6ee));
    lv_style_set_border_side(&style_scr_config_modbus_ddlist_retry_count_extra_list_main_default, LV_BORDER_SIDE_FULL);
    lv_style_set_radius(&style_scr_config_modbus_ddlist_retry_count_extra_list_main_default, 3);
    lv_style_set_bg_opa(&style_scr_config_modbus_ddlist_retry_count_extra_list_main_default, 255);
    lv_style_set_bg_color(&style_scr_config_modbus_ddlist_retry_count_extra_list_main_default, lv_color_hex(0xffffff));
    lv_style_set_bg_grad_dir(&style_scr_config_modbus_ddlist_retry_count_extra_list_main_default, LV_GRAD_DIR_NONE);
    lv_obj_add_style(lv_dropdown_get_list(ui->scr_config_modbus_ddlist_retry_count), &style_scr_config_modbus_ddlist_retry_count_extra_list_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style state: LV_STATE_DEFAULT for &style_scr_config_modbus_ddlist_retry_count_extra_list_scrollbar_default
    static lv_style_t style_scr_config_modbus_ddlist_retry_count_extra_list_scrollbar_default;
    ui_init_style(&style_scr_config_modbus_ddlist_retry_count_extra_list_scrollbar_default);

    lv_style_set_radius(&style_scr_config_modbus_ddlist_retry_count_extra_list_scrollbar_default, 3);
    lv_style_set_bg_opa(&style_scr_config_modbus_ddlist_retry_count_extra_list_scrollbar_default, 255);
    lv_style_set_bg_color(&style_scr_config_modbus_ddlist_retry_count_extra_list_scrollbar_default, lv_color_hex(0x00ff00));
    lv_style_set_bg_grad_dir(&style_scr_config_modbus_ddlist_retry_count_extra_list_scrollbar_default, LV_GRAD_DIR_NONE);
    lv_obj_add_style(lv_dropdown_get_list(ui->scr_config_modbus_ddlist_retry_count), &style_scr_config_modbus_ddlist_retry_count_extra_list_scrollbar_default, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);

    //Write codes scr_config_modbus_ddlist_poll_interval
    ui->scr_config_modbus_ddlist_poll_interval = lv_dropdown_create(ui->scr_config_modbus_cont_connection);
    lv_obj_set_pos(ui->scr_config_modbus_ddlist_poll_interval, 443, 501);
    lv_obj_set_size(ui->scr_config_modbus_ddlist_poll_interval, 450, 50);
    lv_dropdown_set_options(ui->scr_config_modbus_ddlist_poll_interval, "500\n1000\n2000");

    //Write style for scr_config_modbus_ddlist_poll_interval, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_text_color(ui->scr_config_modbus_ddlist_poll_interval, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scr_config_modbus_ddlist_poll_interval, &lv_font_arial_30, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scr_config_modbus_ddlist_poll_interval, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->scr_config_modbus_ddlist_poll_interval, 1, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->scr_config_modbus_ddlist_poll_interval, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->scr_config_modbus_ddlist_poll_interval, lv_color_hex(0xe1e6ee), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->scr_config_modbus_ddlist_poll_interval, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scr_config_modbus_ddlist_poll_interval, 8, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scr_config_modbus_ddlist_poll_interval, 6, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scr_config_modbus_ddlist_poll_interval, 6, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_config_modbus_ddlist_poll_interval, 1, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scr_config_modbus_ddlist_poll_interval, 78, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scr_config_modbus_ddlist_poll_interval, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scr_config_modbus_ddlist_poll_interval, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_config_modbus_ddlist_poll_interval, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style state: LV_STATE_CHECKED for &style_scr_config_modbus_ddlist_poll_interval_extra_list_selected_checked
    static lv_style_t style_scr_config_modbus_ddlist_poll_interval_extra_list_selected_checked;
    ui_init_style(&style_scr_config_modbus_ddlist_poll_interval_extra_list_selected_checked);

    lv_style_set_border_width(&style_scr_config_modbus_ddlist_poll_interval_extra_list_selected_checked, 1);
    lv_style_set_border_opa(&style_scr_config_modbus_ddlist_poll_interval_extra_list_selected_checked, 255);
    lv_style_set_border_color(&style_scr_config_modbus_ddlist_poll_interval_extra_list_selected_checked, lv_color_hex(0xe1e6ee));
    lv_style_set_border_side(&style_scr_config_modbus_ddlist_poll_interval_extra_list_selected_checked, LV_BORDER_SIDE_FULL);
    lv_style_set_radius(&style_scr_config_modbus_ddlist_poll_interval_extra_list_selected_checked, 3);
    lv_style_set_bg_opa(&style_scr_config_modbus_ddlist_poll_interval_extra_list_selected_checked, 255);
    lv_style_set_bg_color(&style_scr_config_modbus_ddlist_poll_interval_extra_list_selected_checked, lv_color_hex(0x00a1b5));
    lv_style_set_bg_grad_dir(&style_scr_config_modbus_ddlist_poll_interval_extra_list_selected_checked, LV_GRAD_DIR_NONE);
    lv_obj_add_style(lv_dropdown_get_list(ui->scr_config_modbus_ddlist_poll_interval), &style_scr_config_modbus_ddlist_poll_interval_extra_list_selected_checked, LV_PART_SELECTED|LV_STATE_CHECKED);

    //Write style state: LV_STATE_DEFAULT for &style_scr_config_modbus_ddlist_poll_interval_extra_list_main_default
    static lv_style_t style_scr_config_modbus_ddlist_poll_interval_extra_list_main_default;
    ui_init_style(&style_scr_config_modbus_ddlist_poll_interval_extra_list_main_default);

    lv_style_set_max_height(&style_scr_config_modbus_ddlist_poll_interval_extra_list_main_default, 90);
    lv_style_set_text_color(&style_scr_config_modbus_ddlist_poll_interval_extra_list_main_default, lv_color_hex(0x0D3055));
    lv_style_set_text_font(&style_scr_config_modbus_ddlist_poll_interval_extra_list_main_default, &lv_font_montserratMedium_12);
    lv_style_set_text_opa(&style_scr_config_modbus_ddlist_poll_interval_extra_list_main_default, 255);
    lv_style_set_border_width(&style_scr_config_modbus_ddlist_poll_interval_extra_list_main_default, 1);
    lv_style_set_border_opa(&style_scr_config_modbus_ddlist_poll_interval_extra_list_main_default, 255);
    lv_style_set_border_color(&style_scr_config_modbus_ddlist_poll_interval_extra_list_main_default, lv_color_hex(0xe1e6ee));
    lv_style_set_border_side(&style_scr_config_modbus_ddlist_poll_interval_extra_list_main_default, LV_BORDER_SIDE_FULL);
    lv_style_set_radius(&style_scr_config_modbus_ddlist_poll_interval_extra_list_main_default, 3);
    lv_style_set_bg_opa(&style_scr_config_modbus_ddlist_poll_interval_extra_list_main_default, 255);
    lv_style_set_bg_color(&style_scr_config_modbus_ddlist_poll_interval_extra_list_main_default, lv_color_hex(0xffffff));
    lv_style_set_bg_grad_dir(&style_scr_config_modbus_ddlist_poll_interval_extra_list_main_default, LV_GRAD_DIR_NONE);
    lv_obj_add_style(lv_dropdown_get_list(ui->scr_config_modbus_ddlist_poll_interval), &style_scr_config_modbus_ddlist_poll_interval_extra_list_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style state: LV_STATE_DEFAULT for &style_scr_config_modbus_ddlist_poll_interval_extra_list_scrollbar_default
    static lv_style_t style_scr_config_modbus_ddlist_poll_interval_extra_list_scrollbar_default;
    ui_init_style(&style_scr_config_modbus_ddlist_poll_interval_extra_list_scrollbar_default);

    lv_style_set_radius(&style_scr_config_modbus_ddlist_poll_interval_extra_list_scrollbar_default, 3);
    lv_style_set_bg_opa(&style_scr_config_modbus_ddlist_poll_interval_extra_list_scrollbar_default, 255);
    lv_style_set_bg_color(&style_scr_config_modbus_ddlist_poll_interval_extra_list_scrollbar_default, lv_color_hex(0x00ff00));
    lv_style_set_bg_grad_dir(&style_scr_config_modbus_ddlist_poll_interval_extra_list_scrollbar_default, LV_GRAD_DIR_NONE);
    lv_obj_add_style(lv_dropdown_get_list(ui->scr_config_modbus_ddlist_poll_interval), &style_scr_config_modbus_ddlist_poll_interval_extra_list_scrollbar_default, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);

    //Write codes scr_config_modbus_label_poll_interval
    ui->scr_config_modbus_label_poll_interval = lv_label_create(ui->scr_config_modbus_cont_connection);
    lv_obj_set_pos(ui->scr_config_modbus_label_poll_interval, 143, 510);
    lv_obj_set_size(ui->scr_config_modbus_label_poll_interval, 166, 32);
    lv_label_set_text(ui->scr_config_modbus_label_poll_interval, "Poll Interval");
    lv_label_set_long_mode(ui->scr_config_modbus_label_poll_interval, LV_LABEL_LONG_WRAP);

    //Write style for scr_config_modbus_label_poll_interval, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scr_config_modbus_label_poll_interval, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_config_modbus_label_poll_interval, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scr_config_modbus_label_poll_interval, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scr_config_modbus_label_poll_interval, &lv_font_arial_30, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scr_config_modbus_label_poll_interval, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->scr_config_modbus_label_poll_interval, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->scr_config_modbus_label_poll_interval, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scr_config_modbus_label_poll_interval, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scr_config_modbus_label_poll_interval, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scr_config_modbus_label_poll_interval, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scr_config_modbus_label_poll_interval, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scr_config_modbus_label_poll_interval, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scr_config_modbus_label_poll_interval, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_config_modbus_label_poll_interval, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scr_config_modbus_line_21
    ui->scr_config_modbus_line_21 = lv_line_create(ui->scr_config_modbus_cont_connection);
    lv_obj_set_pos(ui->scr_config_modbus_line_21, 143, 480);
    lv_obj_set_size(ui->scr_config_modbus_line_21, 850, 2);
    static lv_point_precise_t scr_config_modbus_line_21[] = {{0, 0},{1100, 0}};
    lv_line_set_points(ui->scr_config_modbus_line_21, scr_config_modbus_line_21, 2);

    //Write style for scr_config_modbus_line_21, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_line_width(ui->scr_config_modbus_line_21, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_color(ui->scr_config_modbus_line_21, lv_color_hex(0x757575), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_opa(ui->scr_config_modbus_line_21, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_rounded(ui->scr_config_modbus_line_21, true, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes CONFIGURE DEVICE
    lv_obj_t * scr_config_modbus_tabview_modbus_tab_2_label = lv_label_create(ui->scr_config_modbus_tabview_modbus_tab_2);
    lv_label_set_text(scr_config_modbus_tabview_modbus_tab_2_label, "");

    //Write codes scr_config_modbus_cont_configuredevice
    ui->scr_config_modbus_cont_configuredevice = lv_obj_create(ui->scr_config_modbus_tabview_modbus_tab_2);
    lv_obj_set_pos(ui->scr_config_modbus_cont_configuredevice, 30, 0);
    lv_obj_set_size(ui->scr_config_modbus_cont_configuredevice, 1100, 450);
    lv_obj_set_scrollbar_mode(ui->scr_config_modbus_cont_configuredevice, LV_SCROLLBAR_MODE_AUTO);

    //Write style for scr_config_modbus_cont_configuredevice, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scr_config_modbus_cont_configuredevice, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_config_modbus_cont_configuredevice, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scr_config_modbus_cont_configuredevice, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scr_config_modbus_cont_configuredevice, lv_color_hex(0x2b2f3a), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scr_config_modbus_cont_configuredevice, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scr_config_modbus_cont_configuredevice, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scr_config_modbus_cont_configuredevice, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scr_config_modbus_cont_configuredevice, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scr_config_modbus_cont_configuredevice, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_config_modbus_cont_configuredevice, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scr_config_modbus_line_27
    ui->scr_config_modbus_line_27 = lv_line_create(ui->scr_config_modbus_cont_configuredevice);
    lv_obj_set_pos(ui->scr_config_modbus_line_27, 0, 40);
    lv_obj_set_size(ui->scr_config_modbus_line_27, 1100, 2);
    static lv_point_precise_t scr_config_modbus_line_27[] = {{0, 0},{1100, 0}};
    lv_line_set_points(ui->scr_config_modbus_line_27, scr_config_modbus_line_27, 2);

    //Write style for scr_config_modbus_line_27, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_line_width(ui->scr_config_modbus_line_27, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_color(ui->scr_config_modbus_line_27, lv_color_hex(0x757575), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_opa(ui->scr_config_modbus_line_27, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_rounded(ui->scr_config_modbus_line_27, true, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scr_config_modbus_lbl_address
    ui->scr_config_modbus_lbl_address = lv_label_create(ui->scr_config_modbus_cont_configuredevice);
    lv_obj_set_pos(ui->scr_config_modbus_lbl_address, 143, 334);
    lv_obj_set_size(ui->scr_config_modbus_lbl_address, 118, 32);
    lv_label_set_text(ui->scr_config_modbus_lbl_address, "Address");
    lv_label_set_long_mode(ui->scr_config_modbus_lbl_address, LV_LABEL_LONG_WRAP);

    //Write style for scr_config_modbus_lbl_address, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scr_config_modbus_lbl_address, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_config_modbus_lbl_address, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scr_config_modbus_lbl_address, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scr_config_modbus_lbl_address, &lv_font_arial_30, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scr_config_modbus_lbl_address, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->scr_config_modbus_lbl_address, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->scr_config_modbus_lbl_address, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scr_config_modbus_lbl_address, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scr_config_modbus_lbl_address, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scr_config_modbus_lbl_address, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scr_config_modbus_lbl_address, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scr_config_modbus_lbl_address, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scr_config_modbus_lbl_address, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_config_modbus_lbl_address, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scr_config_modbus_lbl_registertype
    ui->scr_config_modbus_lbl_registertype = lv_label_create(ui->scr_config_modbus_cont_configuredevice);
    lv_obj_set_pos(ui->scr_config_modbus_lbl_registertype, 143, 244);
    lv_obj_set_size(ui->scr_config_modbus_lbl_registertype, 188, 32);
    lv_label_set_text(ui->scr_config_modbus_lbl_registertype, "Register Type");
    lv_label_set_long_mode(ui->scr_config_modbus_lbl_registertype, LV_LABEL_LONG_WRAP);

    //Write style for scr_config_modbus_lbl_registertype, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scr_config_modbus_lbl_registertype, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_config_modbus_lbl_registertype, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scr_config_modbus_lbl_registertype, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scr_config_modbus_lbl_registertype, &lv_font_arial_30, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scr_config_modbus_lbl_registertype, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->scr_config_modbus_lbl_registertype, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->scr_config_modbus_lbl_registertype, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scr_config_modbus_lbl_registertype, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scr_config_modbus_lbl_registertype, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scr_config_modbus_lbl_registertype, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scr_config_modbus_lbl_registertype, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scr_config_modbus_lbl_registertype, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scr_config_modbus_lbl_registertype, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_config_modbus_lbl_registertype, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scr_config_modbus_ddlist_registertype
    ui->scr_config_modbus_ddlist_registertype = lv_dropdown_create(ui->scr_config_modbus_cont_configuredevice);
    lv_obj_set_pos(ui->scr_config_modbus_ddlist_registertype, 443, 235);
    lv_obj_set_size(ui->scr_config_modbus_ddlist_registertype, 450, 50);
    lv_dropdown_set_options(ui->scr_config_modbus_ddlist_registertype, "Coil\nDiscrete Input\nInput Register\nHolding Register");

    //Write style for scr_config_modbus_ddlist_registertype, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_text_color(ui->scr_config_modbus_ddlist_registertype, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scr_config_modbus_ddlist_registertype, &lv_font_arial_30, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scr_config_modbus_ddlist_registertype, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->scr_config_modbus_ddlist_registertype, 1, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->scr_config_modbus_ddlist_registertype, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->scr_config_modbus_ddlist_registertype, lv_color_hex(0xe1e6ee), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->scr_config_modbus_ddlist_registertype, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scr_config_modbus_ddlist_registertype, 8, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scr_config_modbus_ddlist_registertype, 6, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scr_config_modbus_ddlist_registertype, 6, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_config_modbus_ddlist_registertype, 1, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scr_config_modbus_ddlist_registertype, 79, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scr_config_modbus_ddlist_registertype, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scr_config_modbus_ddlist_registertype, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_config_modbus_ddlist_registertype, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style state: LV_STATE_CHECKED for &style_scr_config_modbus_ddlist_registertype_extra_list_selected_checked
    static lv_style_t style_scr_config_modbus_ddlist_registertype_extra_list_selected_checked;
    ui_init_style(&style_scr_config_modbus_ddlist_registertype_extra_list_selected_checked);

    lv_style_set_border_width(&style_scr_config_modbus_ddlist_registertype_extra_list_selected_checked, 1);
    lv_style_set_border_opa(&style_scr_config_modbus_ddlist_registertype_extra_list_selected_checked, 255);
    lv_style_set_border_color(&style_scr_config_modbus_ddlist_registertype_extra_list_selected_checked, lv_color_hex(0xe1e6ee));
    lv_style_set_border_side(&style_scr_config_modbus_ddlist_registertype_extra_list_selected_checked, LV_BORDER_SIDE_FULL);
    lv_style_set_radius(&style_scr_config_modbus_ddlist_registertype_extra_list_selected_checked, 3);
    lv_style_set_bg_opa(&style_scr_config_modbus_ddlist_registertype_extra_list_selected_checked, 255);
    lv_style_set_bg_color(&style_scr_config_modbus_ddlist_registertype_extra_list_selected_checked, lv_color_hex(0x00a1b5));
    lv_style_set_bg_grad_dir(&style_scr_config_modbus_ddlist_registertype_extra_list_selected_checked, LV_GRAD_DIR_NONE);
    lv_obj_add_style(lv_dropdown_get_list(ui->scr_config_modbus_ddlist_registertype), &style_scr_config_modbus_ddlist_registertype_extra_list_selected_checked, LV_PART_SELECTED|LV_STATE_CHECKED);

    //Write style state: LV_STATE_DEFAULT for &style_scr_config_modbus_ddlist_registertype_extra_list_main_default
    static lv_style_t style_scr_config_modbus_ddlist_registertype_extra_list_main_default;
    ui_init_style(&style_scr_config_modbus_ddlist_registertype_extra_list_main_default);

    lv_style_set_max_height(&style_scr_config_modbus_ddlist_registertype_extra_list_main_default, 90);
    lv_style_set_text_color(&style_scr_config_modbus_ddlist_registertype_extra_list_main_default, lv_color_hex(0x0D3055));
    lv_style_set_text_font(&style_scr_config_modbus_ddlist_registertype_extra_list_main_default, &lv_font_montserratMedium_12);
    lv_style_set_text_opa(&style_scr_config_modbus_ddlist_registertype_extra_list_main_default, 255);
    lv_style_set_border_width(&style_scr_config_modbus_ddlist_registertype_extra_list_main_default, 1);
    lv_style_set_border_opa(&style_scr_config_modbus_ddlist_registertype_extra_list_main_default, 255);
    lv_style_set_border_color(&style_scr_config_modbus_ddlist_registertype_extra_list_main_default, lv_color_hex(0xe1e6ee));
    lv_style_set_border_side(&style_scr_config_modbus_ddlist_registertype_extra_list_main_default, LV_BORDER_SIDE_FULL);
    lv_style_set_radius(&style_scr_config_modbus_ddlist_registertype_extra_list_main_default, 3);
    lv_style_set_bg_opa(&style_scr_config_modbus_ddlist_registertype_extra_list_main_default, 255);
    lv_style_set_bg_color(&style_scr_config_modbus_ddlist_registertype_extra_list_main_default, lv_color_hex(0xffffff));
    lv_style_set_bg_grad_dir(&style_scr_config_modbus_ddlist_registertype_extra_list_main_default, LV_GRAD_DIR_NONE);
    lv_obj_add_style(lv_dropdown_get_list(ui->scr_config_modbus_ddlist_registertype), &style_scr_config_modbus_ddlist_registertype_extra_list_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style state: LV_STATE_DEFAULT for &style_scr_config_modbus_ddlist_registertype_extra_list_scrollbar_default
    static lv_style_t style_scr_config_modbus_ddlist_registertype_extra_list_scrollbar_default;
    ui_init_style(&style_scr_config_modbus_ddlist_registertype_extra_list_scrollbar_default);

    lv_style_set_radius(&style_scr_config_modbus_ddlist_registertype_extra_list_scrollbar_default, 3);
    lv_style_set_bg_opa(&style_scr_config_modbus_ddlist_registertype_extra_list_scrollbar_default, 255);
    lv_style_set_bg_color(&style_scr_config_modbus_ddlist_registertype_extra_list_scrollbar_default, lv_color_hex(0x00ff00));
    lv_style_set_bg_grad_dir(&style_scr_config_modbus_ddlist_registertype_extra_list_scrollbar_default, LV_GRAD_DIR_NONE);
    lv_obj_add_style(lv_dropdown_get_list(ui->scr_config_modbus_ddlist_registertype), &style_scr_config_modbus_ddlist_registertype_extra_list_scrollbar_default, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);

    //Write codes scr_config_modbus_lbl_name
    ui->scr_config_modbus_lbl_name = lv_label_create(ui->scr_config_modbus_cont_configuredevice);
    lv_obj_set_pos(ui->scr_config_modbus_lbl_name, 143, 67);
    lv_obj_set_size(ui->scr_config_modbus_lbl_name, 87, 32);
    lv_label_set_text(ui->scr_config_modbus_lbl_name, "Name");
    lv_label_set_long_mode(ui->scr_config_modbus_lbl_name, LV_LABEL_LONG_WRAP);

    //Write style for scr_config_modbus_lbl_name, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scr_config_modbus_lbl_name, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_config_modbus_lbl_name, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scr_config_modbus_lbl_name, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scr_config_modbus_lbl_name, &lv_font_arial_30, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scr_config_modbus_lbl_name, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->scr_config_modbus_lbl_name, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->scr_config_modbus_lbl_name, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scr_config_modbus_lbl_name, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scr_config_modbus_lbl_name, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scr_config_modbus_lbl_name, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scr_config_modbus_lbl_name, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scr_config_modbus_lbl_name, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scr_config_modbus_lbl_name, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_config_modbus_lbl_name, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scr_config_modbus_lbl_deviceconfigure
    ui->scr_config_modbus_lbl_deviceconfigure = lv_label_create(ui->scr_config_modbus_cont_configuredevice);
    lv_obj_set_pos(ui->scr_config_modbus_lbl_deviceconfigure, 0, 0);
    lv_obj_set_size(ui->scr_config_modbus_lbl_deviceconfigure, 442, 32);
    lv_label_set_text_static(ui->scr_config_modbus_lbl_deviceconfigure, "Selected Input: Configure Device");
    lv_label_set_long_mode(ui->scr_config_modbus_lbl_deviceconfigure, LV_LABEL_LONG_WRAP);

    //Write style for scr_config_modbus_lbl_deviceconfigure, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scr_config_modbus_lbl_deviceconfigure, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_config_modbus_lbl_deviceconfigure, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scr_config_modbus_lbl_deviceconfigure, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scr_config_modbus_lbl_deviceconfigure, &lv_font_arial_30, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scr_config_modbus_lbl_deviceconfigure, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->scr_config_modbus_lbl_deviceconfigure, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->scr_config_modbus_lbl_deviceconfigure, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scr_config_modbus_lbl_deviceconfigure, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scr_config_modbus_lbl_deviceconfigure, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scr_config_modbus_lbl_deviceconfigure, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scr_config_modbus_lbl_deviceconfigure, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scr_config_modbus_lbl_deviceconfigure, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scr_config_modbus_lbl_deviceconfigure, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_config_modbus_lbl_deviceconfigure, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scr_config_modbus_lbl_datatype
    ui->scr_config_modbus_lbl_datatype = lv_label_create(ui->scr_config_modbus_cont_configuredevice);
    lv_obj_set_pos(ui->scr_config_modbus_lbl_datatype, 143, 417);
    lv_obj_set_size(ui->scr_config_modbus_lbl_datatype, 137, 32);
    lv_label_set_text(ui->scr_config_modbus_lbl_datatype, "Data type");
    lv_label_set_long_mode(ui->scr_config_modbus_lbl_datatype, LV_LABEL_LONG_WRAP);

    //Write style for scr_config_modbus_lbl_datatype, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scr_config_modbus_lbl_datatype, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_config_modbus_lbl_datatype, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scr_config_modbus_lbl_datatype, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scr_config_modbus_lbl_datatype, &lv_font_arial_30, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scr_config_modbus_lbl_datatype, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->scr_config_modbus_lbl_datatype, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->scr_config_modbus_lbl_datatype, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scr_config_modbus_lbl_datatype, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scr_config_modbus_lbl_datatype, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scr_config_modbus_lbl_datatype, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scr_config_modbus_lbl_datatype, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scr_config_modbus_lbl_datatype, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scr_config_modbus_lbl_datatype, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_config_modbus_lbl_datatype, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scr_config_modbus_line_26
    ui->scr_config_modbus_line_26 = lv_line_create(ui->scr_config_modbus_cont_configuredevice);
    lv_obj_set_pos(ui->scr_config_modbus_line_26, 143, 126);
    lv_obj_set_size(ui->scr_config_modbus_line_26, 850, 2);
    static lv_point_precise_t scr_config_modbus_line_26[] = {{0, 0},{1100, 0}};
    lv_line_set_points(ui->scr_config_modbus_line_26, scr_config_modbus_line_26, 2);

    //Write style for scr_config_modbus_line_26, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_line_width(ui->scr_config_modbus_line_26, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_color(ui->scr_config_modbus_line_26, lv_color_hex(0x757575), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_opa(ui->scr_config_modbus_line_26, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_rounded(ui->scr_config_modbus_line_26, true, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scr_config_modbus_line_25
    ui->scr_config_modbus_line_25 = lv_line_create(ui->scr_config_modbus_cont_configuredevice);
    lv_obj_set_pos(ui->scr_config_modbus_line_25, 143, 306);
    lv_obj_set_size(ui->scr_config_modbus_line_25, 850, 2);
    static lv_point_precise_t scr_config_modbus_line_25[] = {{0, 0},{1100, 0}};
    lv_line_set_points(ui->scr_config_modbus_line_25, scr_config_modbus_line_25, 2);

    //Write style for scr_config_modbus_line_25, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_line_width(ui->scr_config_modbus_line_25, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_color(ui->scr_config_modbus_line_25, lv_color_hex(0x757575), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_opa(ui->scr_config_modbus_line_25, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_rounded(ui->scr_config_modbus_line_25, true, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scr_config_modbus_line_24
    ui->scr_config_modbus_line_24 = lv_line_create(ui->scr_config_modbus_cont_configuredevice);
    lv_obj_set_pos(ui->scr_config_modbus_line_24, 143, 394);
    lv_obj_set_size(ui->scr_config_modbus_line_24, 850, 2);
    static lv_point_precise_t scr_config_modbus_line_24[] = {{0, 0},{1100, 0}};
    lv_line_set_points(ui->scr_config_modbus_line_24, scr_config_modbus_line_24, 2);

    //Write style for scr_config_modbus_line_24, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_line_width(ui->scr_config_modbus_line_24, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_color(ui->scr_config_modbus_line_24, lv_color_hex(0x757575), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_opa(ui->scr_config_modbus_line_24, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_rounded(ui->scr_config_modbus_line_24, true, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scr_config_modbus_lbl_slaveid
    ui->scr_config_modbus_lbl_slaveid = lv_label_create(ui->scr_config_modbus_cont_configuredevice);
    lv_obj_set_pos(ui->scr_config_modbus_lbl_slaveid, 143, 151);
    lv_obj_set_size(ui->scr_config_modbus_lbl_slaveid, 120, 32);
    lv_label_set_text(ui->scr_config_modbus_lbl_slaveid, "Slave ID");
    lv_label_set_long_mode(ui->scr_config_modbus_lbl_slaveid, LV_LABEL_LONG_WRAP);

    //Write style for scr_config_modbus_lbl_slaveid, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scr_config_modbus_lbl_slaveid, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_config_modbus_lbl_slaveid, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scr_config_modbus_lbl_slaveid, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scr_config_modbus_lbl_slaveid, &lv_font_arial_30, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scr_config_modbus_lbl_slaveid, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->scr_config_modbus_lbl_slaveid, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->scr_config_modbus_lbl_slaveid, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scr_config_modbus_lbl_slaveid, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scr_config_modbus_lbl_slaveid, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scr_config_modbus_lbl_slaveid, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scr_config_modbus_lbl_slaveid, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scr_config_modbus_lbl_slaveid, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scr_config_modbus_lbl_slaveid, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_config_modbus_lbl_slaveid, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scr_config_modbus_line_23
    ui->scr_config_modbus_line_23 = lv_line_create(ui->scr_config_modbus_cont_configuredevice);
    lv_obj_set_pos(ui->scr_config_modbus_line_23, 143, 216);
    lv_obj_set_size(ui->scr_config_modbus_line_23, 850, 2);
    static lv_point_precise_t scr_config_modbus_line_23[] = {{0, 0},{1100, 0}};
    lv_line_set_points(ui->scr_config_modbus_line_23, scr_config_modbus_line_23, 2);

    //Write style for scr_config_modbus_line_23, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_line_width(ui->scr_config_modbus_line_23, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_color(ui->scr_config_modbus_line_23, lv_color_hex(0x757575), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_opa(ui->scr_config_modbus_line_23, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_rounded(ui->scr_config_modbus_line_23, true, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scr_config_modbus_ddlist_datatype
    ui->scr_config_modbus_ddlist_datatype = lv_dropdown_create(ui->scr_config_modbus_cont_configuredevice);
    lv_obj_set_pos(ui->scr_config_modbus_ddlist_datatype, 443, 408);
    lv_obj_set_size(ui->scr_config_modbus_ddlist_datatype, 450, 50);
    lv_dropdown_set_options(ui->scr_config_modbus_ddlist_datatype, "Bool\nInt16\nUInt16\nInt32\nUInt32\nFloat32");

    //Write style for scr_config_modbus_ddlist_datatype, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_text_color(ui->scr_config_modbus_ddlist_datatype, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scr_config_modbus_ddlist_datatype, &lv_font_arial_30, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scr_config_modbus_ddlist_datatype, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->scr_config_modbus_ddlist_datatype, 1, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->scr_config_modbus_ddlist_datatype, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->scr_config_modbus_ddlist_datatype, lv_color_hex(0xe1e6ee), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->scr_config_modbus_ddlist_datatype, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scr_config_modbus_ddlist_datatype, 8, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scr_config_modbus_ddlist_datatype, 6, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scr_config_modbus_ddlist_datatype, 6, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_config_modbus_ddlist_datatype, 1, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scr_config_modbus_ddlist_datatype, 78, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scr_config_modbus_ddlist_datatype, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scr_config_modbus_ddlist_datatype, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_config_modbus_ddlist_datatype, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style state: LV_STATE_CHECKED for &style_scr_config_modbus_ddlist_datatype_extra_list_selected_checked
    static lv_style_t style_scr_config_modbus_ddlist_datatype_extra_list_selected_checked;
    ui_init_style(&style_scr_config_modbus_ddlist_datatype_extra_list_selected_checked);

    lv_style_set_border_width(&style_scr_config_modbus_ddlist_datatype_extra_list_selected_checked, 1);
    lv_style_set_border_opa(&style_scr_config_modbus_ddlist_datatype_extra_list_selected_checked, 255);
    lv_style_set_border_color(&style_scr_config_modbus_ddlist_datatype_extra_list_selected_checked, lv_color_hex(0xe1e6ee));
    lv_style_set_border_side(&style_scr_config_modbus_ddlist_datatype_extra_list_selected_checked, LV_BORDER_SIDE_FULL);
    lv_style_set_radius(&style_scr_config_modbus_ddlist_datatype_extra_list_selected_checked, 3);
    lv_style_set_bg_opa(&style_scr_config_modbus_ddlist_datatype_extra_list_selected_checked, 255);
    lv_style_set_bg_color(&style_scr_config_modbus_ddlist_datatype_extra_list_selected_checked, lv_color_hex(0x00a1b5));
    lv_style_set_bg_grad_dir(&style_scr_config_modbus_ddlist_datatype_extra_list_selected_checked, LV_GRAD_DIR_NONE);
    lv_obj_add_style(lv_dropdown_get_list(ui->scr_config_modbus_ddlist_datatype), &style_scr_config_modbus_ddlist_datatype_extra_list_selected_checked, LV_PART_SELECTED|LV_STATE_CHECKED);

    //Write style state: LV_STATE_DEFAULT for &style_scr_config_modbus_ddlist_datatype_extra_list_main_default
    static lv_style_t style_scr_config_modbus_ddlist_datatype_extra_list_main_default;
    ui_init_style(&style_scr_config_modbus_ddlist_datatype_extra_list_main_default);

    lv_style_set_max_height(&style_scr_config_modbus_ddlist_datatype_extra_list_main_default, 90);
    lv_style_set_text_color(&style_scr_config_modbus_ddlist_datatype_extra_list_main_default, lv_color_hex(0x0D3055));
    lv_style_set_text_font(&style_scr_config_modbus_ddlist_datatype_extra_list_main_default, &lv_font_montserratMedium_12);
    lv_style_set_text_opa(&style_scr_config_modbus_ddlist_datatype_extra_list_main_default, 255);
    lv_style_set_border_width(&style_scr_config_modbus_ddlist_datatype_extra_list_main_default, 1);
    lv_style_set_border_opa(&style_scr_config_modbus_ddlist_datatype_extra_list_main_default, 255);
    lv_style_set_border_color(&style_scr_config_modbus_ddlist_datatype_extra_list_main_default, lv_color_hex(0xe1e6ee));
    lv_style_set_border_side(&style_scr_config_modbus_ddlist_datatype_extra_list_main_default, LV_BORDER_SIDE_FULL);
    lv_style_set_radius(&style_scr_config_modbus_ddlist_datatype_extra_list_main_default, 3);
    lv_style_set_bg_opa(&style_scr_config_modbus_ddlist_datatype_extra_list_main_default, 255);
    lv_style_set_bg_color(&style_scr_config_modbus_ddlist_datatype_extra_list_main_default, lv_color_hex(0xffffff));
    lv_style_set_bg_grad_dir(&style_scr_config_modbus_ddlist_datatype_extra_list_main_default, LV_GRAD_DIR_NONE);
    lv_obj_add_style(lv_dropdown_get_list(ui->scr_config_modbus_ddlist_datatype), &style_scr_config_modbus_ddlist_datatype_extra_list_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style state: LV_STATE_DEFAULT for &style_scr_config_modbus_ddlist_datatype_extra_list_scrollbar_default
    static lv_style_t style_scr_config_modbus_ddlist_datatype_extra_list_scrollbar_default;
    ui_init_style(&style_scr_config_modbus_ddlist_datatype_extra_list_scrollbar_default);

    lv_style_set_radius(&style_scr_config_modbus_ddlist_datatype_extra_list_scrollbar_default, 3);
    lv_style_set_bg_opa(&style_scr_config_modbus_ddlist_datatype_extra_list_scrollbar_default, 255);
    lv_style_set_bg_color(&style_scr_config_modbus_ddlist_datatype_extra_list_scrollbar_default, lv_color_hex(0x00ff00));
    lv_style_set_bg_grad_dir(&style_scr_config_modbus_ddlist_datatype_extra_list_scrollbar_default, LV_GRAD_DIR_NONE);
    lv_obj_add_style(lv_dropdown_get_list(ui->scr_config_modbus_ddlist_datatype), &style_scr_config_modbus_ddlist_datatype_extra_list_scrollbar_default, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);

    //Write codes scr_config_modbus_lbl_quantity
    ui->scr_config_modbus_lbl_quantity = lv_label_create(ui->scr_config_modbus_cont_configuredevice);
    lv_obj_set_pos(ui->scr_config_modbus_lbl_quantity, 143, 510);
    lv_obj_set_size(ui->scr_config_modbus_lbl_quantity, 117, 32);
    lv_label_set_text(ui->scr_config_modbus_lbl_quantity, "Quantity");
    lv_label_set_long_mode(ui->scr_config_modbus_lbl_quantity, LV_LABEL_LONG_WRAP);

    //Write style for scr_config_modbus_lbl_quantity, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scr_config_modbus_lbl_quantity, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_config_modbus_lbl_quantity, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scr_config_modbus_lbl_quantity, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scr_config_modbus_lbl_quantity, &lv_font_arial_30, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scr_config_modbus_lbl_quantity, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->scr_config_modbus_lbl_quantity, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->scr_config_modbus_lbl_quantity, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scr_config_modbus_lbl_quantity, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scr_config_modbus_lbl_quantity, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scr_config_modbus_lbl_quantity, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scr_config_modbus_lbl_quantity, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scr_config_modbus_lbl_quantity, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scr_config_modbus_lbl_quantity, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_config_modbus_lbl_quantity, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scr_config_modbus_line_22
    ui->scr_config_modbus_line_22 = lv_line_create(ui->scr_config_modbus_cont_configuredevice);
    lv_obj_set_pos(ui->scr_config_modbus_line_22, 143, 480);
    lv_obj_set_size(ui->scr_config_modbus_line_22, 850, 2);
    static lv_point_precise_t scr_config_modbus_line_22[] = {{0, 0},{1100, 0}};
    lv_line_set_points(ui->scr_config_modbus_line_22, scr_config_modbus_line_22, 2);

    //Write style for scr_config_modbus_line_22, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_line_width(ui->scr_config_modbus_line_22, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_color(ui->scr_config_modbus_line_22, lv_color_hex(0x757575), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_opa(ui->scr_config_modbus_line_22, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_rounded(ui->scr_config_modbus_line_22, true, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scr_config_modbus_ta_name
    ui->scr_config_modbus_ta_name = lv_textarea_create(ui->scr_config_modbus_cont_configuredevice);
    lv_obj_set_pos(ui->scr_config_modbus_ta_name, 443, 48);
    lv_obj_set_size(ui->scr_config_modbus_ta_name, 450, 50);
    lv_textarea_set_text(ui->scr_config_modbus_ta_name, "Sensor");
    lv_textarea_set_placeholder_text(ui->scr_config_modbus_ta_name, "");
    lv_textarea_set_password_bullet(ui->scr_config_modbus_ta_name, "*");
    lv_textarea_set_password_mode(ui->scr_config_modbus_ta_name, false);
    lv_textarea_set_one_line(ui->scr_config_modbus_ta_name, true);
    lv_textarea_set_accepted_chars(ui->scr_config_modbus_ta_name, "");
    lv_textarea_set_max_length(ui->scr_config_modbus_ta_name, 32);
#if LV_USE_KEYBOARD
    lv_obj_add_event_cb(ui->scr_config_modbus_ta_name, ta_event_cb, LV_EVENT_ALL, ui->g_kb_top_layer);
#endif

    //Write style for scr_config_modbus_ta_name, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_text_color(ui->scr_config_modbus_ta_name, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scr_config_modbus_ta_name, &lv_font_arial_30, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scr_config_modbus_ta_name, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->scr_config_modbus_ta_name, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scr_config_modbus_ta_name, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scr_config_modbus_ta_name, 78, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scr_config_modbus_ta_name, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scr_config_modbus_ta_name, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->scr_config_modbus_ta_name, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->scr_config_modbus_ta_name, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->scr_config_modbus_ta_name, lv_color_hex(0xe6e6e6), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->scr_config_modbus_ta_name, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_config_modbus_ta_name, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scr_config_modbus_ta_name, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scr_config_modbus_ta_name, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scr_config_modbus_ta_name, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_config_modbus_ta_name, 4, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style for scr_config_modbus_ta_name, Part: LV_PART_SCROLLBAR, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->scr_config_modbus_ta_name, 255, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scr_config_modbus_ta_name, lv_color_hex(0x2195f6), LV_PART_SCROLLBAR|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scr_config_modbus_ta_name, LV_GRAD_DIR_NONE, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_config_modbus_ta_name, 0, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);

    //Write codes scr_config_modbus_ta_slaveid
    ui->scr_config_modbus_ta_slaveid = lv_textarea_create(ui->scr_config_modbus_cont_configuredevice);
    lv_obj_set_pos(ui->scr_config_modbus_ta_slaveid, 443, 132);
    lv_obj_set_size(ui->scr_config_modbus_ta_slaveid, 450, 50);
    lv_textarea_set_text(ui->scr_config_modbus_ta_slaveid, "1");
    lv_textarea_set_placeholder_text(ui->scr_config_modbus_ta_slaveid, "");
    lv_textarea_set_password_bullet(ui->scr_config_modbus_ta_slaveid, "*");
    lv_textarea_set_password_mode(ui->scr_config_modbus_ta_slaveid, false);
    lv_textarea_set_one_line(ui->scr_config_modbus_ta_slaveid, true);
    lv_textarea_set_accepted_chars(ui->scr_config_modbus_ta_slaveid, "");
    lv_textarea_set_max_length(ui->scr_config_modbus_ta_slaveid, 32);
#if LV_USE_KEYBOARD
    lv_obj_add_event_cb(ui->scr_config_modbus_ta_slaveid, ta_event_cb, LV_EVENT_ALL, ui->g_kb_top_layer);
#endif

    //Write style for scr_config_modbus_ta_slaveid, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_text_color(ui->scr_config_modbus_ta_slaveid, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scr_config_modbus_ta_slaveid, &lv_font_arial_30, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scr_config_modbus_ta_slaveid, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->scr_config_modbus_ta_slaveid, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scr_config_modbus_ta_slaveid, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scr_config_modbus_ta_slaveid, 78, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scr_config_modbus_ta_slaveid, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scr_config_modbus_ta_slaveid, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->scr_config_modbus_ta_slaveid, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->scr_config_modbus_ta_slaveid, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->scr_config_modbus_ta_slaveid, lv_color_hex(0xe6e6e6), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->scr_config_modbus_ta_slaveid, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_config_modbus_ta_slaveid, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scr_config_modbus_ta_slaveid, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scr_config_modbus_ta_slaveid, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scr_config_modbus_ta_slaveid, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_config_modbus_ta_slaveid, 4, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style for scr_config_modbus_ta_slaveid, Part: LV_PART_SCROLLBAR, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->scr_config_modbus_ta_slaveid, 255, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scr_config_modbus_ta_slaveid, lv_color_hex(0x2195f6), LV_PART_SCROLLBAR|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scr_config_modbus_ta_slaveid, LV_GRAD_DIR_NONE, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_config_modbus_ta_slaveid, 0, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);

    //Write codes scr_config_modbus_ta_quantity
    ui->scr_config_modbus_ta_quantity = lv_textarea_create(ui->scr_config_modbus_cont_configuredevice);
    lv_obj_set_pos(ui->scr_config_modbus_ta_quantity, 443, 491);
    lv_obj_set_size(ui->scr_config_modbus_ta_quantity, 450, 50);
    lv_textarea_set_text(ui->scr_config_modbus_ta_quantity, "1");
    lv_textarea_set_placeholder_text(ui->scr_config_modbus_ta_quantity, "");
    lv_textarea_set_password_bullet(ui->scr_config_modbus_ta_quantity, "*");
    lv_textarea_set_password_mode(ui->scr_config_modbus_ta_quantity, false);
    lv_textarea_set_one_line(ui->scr_config_modbus_ta_quantity, true);
    lv_textarea_set_accepted_chars(ui->scr_config_modbus_ta_quantity, "");
    lv_textarea_set_max_length(ui->scr_config_modbus_ta_quantity, 32);
#if LV_USE_KEYBOARD
    lv_obj_add_event_cb(ui->scr_config_modbus_ta_quantity, ta_event_cb, LV_EVENT_ALL, ui->g_kb_top_layer);
#endif

    //Write style for scr_config_modbus_ta_quantity, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_text_color(ui->scr_config_modbus_ta_quantity, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scr_config_modbus_ta_quantity, &lv_font_arial_30, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scr_config_modbus_ta_quantity, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->scr_config_modbus_ta_quantity, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scr_config_modbus_ta_quantity, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scr_config_modbus_ta_quantity, 78, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scr_config_modbus_ta_quantity, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scr_config_modbus_ta_quantity, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->scr_config_modbus_ta_quantity, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->scr_config_modbus_ta_quantity, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->scr_config_modbus_ta_quantity, lv_color_hex(0xe6e6e6), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->scr_config_modbus_ta_quantity, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_config_modbus_ta_quantity, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scr_config_modbus_ta_quantity, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scr_config_modbus_ta_quantity, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scr_config_modbus_ta_quantity, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_config_modbus_ta_quantity, 4, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style for scr_config_modbus_ta_quantity, Part: LV_PART_SCROLLBAR, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->scr_config_modbus_ta_quantity, 255, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scr_config_modbus_ta_quantity, lv_color_hex(0x2195f6), LV_PART_SCROLLBAR|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scr_config_modbus_ta_quantity, LV_GRAD_DIR_NONE, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_config_modbus_ta_quantity, 0, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);

    //Write codes scr_config_modbus_ta_address
    ui->scr_config_modbus_ta_address = lv_textarea_create(ui->scr_config_modbus_cont_configuredevice);
    lv_obj_set_pos(ui->scr_config_modbus_ta_address, 443, 315);
    lv_obj_set_size(ui->scr_config_modbus_ta_address, 450, 50);
    lv_textarea_set_text(ui->scr_config_modbus_ta_address, "1");
    lv_textarea_set_placeholder_text(ui->scr_config_modbus_ta_address, "");
    lv_textarea_set_password_bullet(ui->scr_config_modbus_ta_address, "*");
    lv_textarea_set_password_mode(ui->scr_config_modbus_ta_address, false);
    lv_textarea_set_one_line(ui->scr_config_modbus_ta_address, true);
    lv_textarea_set_accepted_chars(ui->scr_config_modbus_ta_address, "");
    lv_textarea_set_max_length(ui->scr_config_modbus_ta_address, 32);
#if LV_USE_KEYBOARD
    lv_obj_add_event_cb(ui->scr_config_modbus_ta_address, ta_event_cb, LV_EVENT_ALL, ui->g_kb_top_layer);
#endif

    //Write style for scr_config_modbus_ta_address, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_text_color(ui->scr_config_modbus_ta_address, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scr_config_modbus_ta_address, &lv_font_arial_30, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scr_config_modbus_ta_address, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->scr_config_modbus_ta_address, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scr_config_modbus_ta_address, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scr_config_modbus_ta_address, 78, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scr_config_modbus_ta_address, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scr_config_modbus_ta_address, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->scr_config_modbus_ta_address, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->scr_config_modbus_ta_address, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->scr_config_modbus_ta_address, lv_color_hex(0xe6e6e6), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->scr_config_modbus_ta_address, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_config_modbus_ta_address, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scr_config_modbus_ta_address, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scr_config_modbus_ta_address, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scr_config_modbus_ta_address, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_config_modbus_ta_address, 4, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style for scr_config_modbus_ta_address, Part: LV_PART_SCROLLBAR, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->scr_config_modbus_ta_address, 255, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scr_config_modbus_ta_address, lv_color_hex(0x2195f6), LV_PART_SCROLLBAR|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scr_config_modbus_ta_address, LV_GRAD_DIR_NONE, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_config_modbus_ta_address, 0, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);

    //Write codes DEVICE LIST
    lv_obj_t * scr_config_modbus_tabview_modbus_tab_3_label = lv_label_create(ui->scr_config_modbus_tabview_modbus_tab_3);
    lv_label_set_text(scr_config_modbus_tabview_modbus_tab_3_label, "");

    //Write codes scr_config_modbus_cont_3
    ui->scr_config_modbus_cont_3 = lv_obj_create(ui->scr_config_modbus_tabview_modbus_tab_3);
    lv_obj_set_pos(ui->scr_config_modbus_cont_3, 30, 0);
    lv_obj_set_size(ui->scr_config_modbus_cont_3, 1100, 450);
    lv_obj_set_scrollbar_mode(ui->scr_config_modbus_cont_3, LV_SCROLLBAR_MODE_OFF);

    //Write style for scr_config_modbus_cont_3, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scr_config_modbus_cont_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_config_modbus_cont_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scr_config_modbus_cont_3, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scr_config_modbus_cont_3, lv_color_hex(0x2b2f3a), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scr_config_modbus_cont_3, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scr_config_modbus_cont_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scr_config_modbus_cont_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scr_config_modbus_cont_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scr_config_modbus_cont_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_config_modbus_cont_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scr_config_modbus_line_15
    ui->scr_config_modbus_line_15 = lv_line_create(ui->scr_config_modbus_cont_3);
    lv_obj_set_pos(ui->scr_config_modbus_line_15, 0, 40);
    lv_obj_set_size(ui->scr_config_modbus_line_15, 1100, 2);
    static lv_point_precise_t scr_config_modbus_line_15[] = {{0, 0},{1100, 0}};
    lv_line_set_points(ui->scr_config_modbus_line_15, scr_config_modbus_line_15, 2);

    //Write style for scr_config_modbus_line_15, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_line_width(ui->scr_config_modbus_line_15, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_color(ui->scr_config_modbus_line_15, lv_color_hex(0x757575), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_opa(ui->scr_config_modbus_line_15, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_rounded(ui->scr_config_modbus_line_15, true, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scr_config_modbus_lbl_devicelist
    ui->scr_config_modbus_lbl_devicelist = lv_label_create(ui->scr_config_modbus_cont_3);
    lv_obj_set_pos(ui->scr_config_modbus_lbl_devicelist, 0, 0);
    lv_obj_set_size(ui->scr_config_modbus_lbl_devicelist, 381, 32);
    lv_label_set_text_static(ui->scr_config_modbus_lbl_devicelist, "Selected Input: Device List");
    lv_label_set_long_mode(ui->scr_config_modbus_lbl_devicelist, LV_LABEL_LONG_WRAP);

    //Write style for scr_config_modbus_lbl_devicelist, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scr_config_modbus_lbl_devicelist, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_config_modbus_lbl_devicelist, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scr_config_modbus_lbl_devicelist, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scr_config_modbus_lbl_devicelist, &lv_font_arial_30, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scr_config_modbus_lbl_devicelist, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->scr_config_modbus_lbl_devicelist, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->scr_config_modbus_lbl_devicelist, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scr_config_modbus_lbl_devicelist, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scr_config_modbus_lbl_devicelist, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scr_config_modbus_lbl_devicelist, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scr_config_modbus_lbl_devicelist, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scr_config_modbus_lbl_devicelist, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scr_config_modbus_lbl_devicelist, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_config_modbus_lbl_devicelist, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scr_config_modbus_table_1
    ui->scr_config_modbus_table_1 = lv_table_create(ui->scr_config_modbus_tabview_modbus_tab_3);
    lv_obj_set_pos(ui->scr_config_modbus_table_1, 300, 65);
    lv_obj_set_scrollbar_mode(ui->scr_config_modbus_table_1, LV_SCROLLBAR_MODE_OFF);
    lv_table_set_column_count(ui->scr_config_modbus_table_1,4);
    lv_table_set_row_count(ui->scr_config_modbus_table_1,2);
    lv_table_set_cell_value(ui->scr_config_modbus_table_1,0,0,"Name");
    lv_table_set_cell_value(ui->scr_config_modbus_table_1,1,0,"Sensor");
    lv_table_set_cell_value(ui->scr_config_modbus_table_1,0,1,"Slave ID");
    lv_table_set_cell_value(ui->scr_config_modbus_table_1,1,1,"1");
    lv_table_set_cell_value(ui->scr_config_modbus_table_1,0,2,"Address");
    lv_table_set_cell_value(ui->scr_config_modbus_table_1,1,2,"30010");
    lv_table_set_cell_value(ui->scr_config_modbus_table_1,0,3,"Type");
    lv_table_set_cell_value(ui->scr_config_modbus_table_1,1,3,"Input");

    //Write style for scr_config_modbus_table_1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_pad_top(ui->scr_config_modbus_table_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scr_config_modbus_table_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scr_config_modbus_table_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scr_config_modbus_table_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scr_config_modbus_table_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->scr_config_modbus_table_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_config_modbus_table_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_config_modbus_table_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style for scr_config_modbus_table_1, Part: LV_PART_ITEMS, State: LV_STATE_DEFAULT.
    lv_obj_set_style_text_color(ui->scr_config_modbus_table_1, lv_color_hex(0xf9f9f9), LV_PART_ITEMS|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scr_config_modbus_table_1, &lv_font_arial_16, LV_PART_ITEMS|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scr_config_modbus_table_1, 255, LV_PART_ITEMS|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scr_config_modbus_table_1, LV_TEXT_ALIGN_CENTER, LV_PART_ITEMS|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scr_config_modbus_table_1, 0, LV_PART_ITEMS|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->scr_config_modbus_table_1, 0, LV_PART_ITEMS|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scr_config_modbus_table_1, 10, LV_PART_ITEMS|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scr_config_modbus_table_1, 10, LV_PART_ITEMS|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scr_config_modbus_table_1, 10, LV_PART_ITEMS|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scr_config_modbus_table_1, 10, LV_PART_ITEMS|LV_STATE_DEFAULT);

    //The custom code of scr_config_modbus.


    //Update current screen layout.
    lv_obj_update_layout(ui->scr_config_modbus);

    //Init events for screen.
    events_init_scr_config_modbus(ui);
}
