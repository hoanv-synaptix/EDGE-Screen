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



void setup_scr_scr_input_config(lv_ui *ui)
{
    //Write codes scr_input_config
    ui->scr_input_config = lv_obj_create(NULL);
    lv_obj_set_size(ui->scr_input_config, 1280, 720);
    lv_obj_set_scrollbar_mode(ui->scr_input_config, LV_SCROLLBAR_MODE_OFF);

    //Write style for scr_input_config, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->scr_input_config, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scr_input_config, lv_color_hex(0x121212), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scr_input_config, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scr_input_config_cont_root
    ui->scr_input_config_cont_root = lv_obj_create(ui->scr_input_config);
    lv_obj_set_pos(ui->scr_input_config_cont_root, 0, 0);
    lv_obj_set_size(ui->scr_input_config_cont_root, 1280, 720);
    lv_obj_set_scrollbar_mode(ui->scr_input_config_cont_root, LV_SCROLLBAR_MODE_OFF);

    //Write style for scr_input_config_cont_root, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scr_input_config_cont_root, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_input_config_cont_root, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scr_input_config_cont_root, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scr_input_config_cont_root, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scr_input_config_cont_root, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scr_input_config_cont_root, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scr_input_config_cont_root, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_input_config_cont_root, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scr_input_config_cont_1
    ui->scr_input_config_cont_1 = lv_obj_create(ui->scr_input_config_cont_root);
    lv_obj_set_pos(ui->scr_input_config_cont_1, 0, 0);
    lv_obj_set_size(ui->scr_input_config_cont_1, 1280, 90);
    lv_obj_set_scrollbar_mode(ui->scr_input_config_cont_1, LV_SCROLLBAR_MODE_OFF);

    //Write style for scr_input_config_cont_1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scr_input_config_cont_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_input_config_cont_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scr_input_config_cont_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scr_input_config_cont_1, lv_color_hex(0x2B2B2B), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scr_input_config_cont_1, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scr_input_config_cont_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scr_input_config_cont_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scr_input_config_cont_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scr_input_config_cont_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_input_config_cont_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scr_input_config_lbl_tiltle
    ui->scr_input_config_lbl_tiltle = lv_label_create(ui->scr_input_config_cont_1);
    lv_obj_set_pos(ui->scr_input_config_lbl_tiltle, 382, 20);
    lv_obj_set_size(ui->scr_input_config_lbl_tiltle, 516, 59);
    lv_label_set_text(ui->scr_input_config_lbl_tiltle, "INPUT CONFIG");
    lv_label_set_long_mode(ui->scr_input_config_lbl_tiltle, LV_LABEL_LONG_WRAP);

    //Write style for scr_input_config_lbl_tiltle, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scr_input_config_lbl_tiltle, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_input_config_lbl_tiltle, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scr_input_config_lbl_tiltle, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scr_input_config_lbl_tiltle, &lv_font_NotoSans_Bold_50, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scr_input_config_lbl_tiltle, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->scr_input_config_lbl_tiltle, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->scr_input_config_lbl_tiltle, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scr_input_config_lbl_tiltle, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scr_input_config_lbl_tiltle, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scr_input_config_lbl_tiltle, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scr_input_config_lbl_tiltle, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scr_input_config_lbl_tiltle, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scr_input_config_lbl_tiltle, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_input_config_lbl_tiltle, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scr_input_config_lbl_value
    ui->scr_input_config_lbl_value = lv_label_create(ui->scr_input_config_cont_1);
    lv_obj_set_pos(ui->scr_input_config_lbl_value, 940, 39);
    lv_obj_set_size(ui->scr_input_config_lbl_value, 132, 32);
    lv_label_set_text(ui->scr_input_config_lbl_value, "EDGE-01");
    lv_label_set_long_mode(ui->scr_input_config_lbl_value, LV_LABEL_LONG_WRAP);

    //Write style for scr_input_config_lbl_value, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scr_input_config_lbl_value, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_input_config_lbl_value, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scr_input_config_lbl_value, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scr_input_config_lbl_value, &lv_font_NotoSans_Bold_30, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scr_input_config_lbl_value, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->scr_input_config_lbl_value, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->scr_input_config_lbl_value, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scr_input_config_lbl_value, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scr_input_config_lbl_value, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scr_input_config_lbl_value, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scr_input_config_lbl_value, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scr_input_config_lbl_value, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scr_input_config_lbl_value, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_input_config_lbl_value, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scr_input_config_btn_online
    ui->scr_input_config_btn_online = lv_button_create(ui->scr_input_config_cont_1);
    lv_obj_set_pos(ui->scr_input_config_btn_online, 1080, 30);
    lv_obj_set_size(ui->scr_input_config_btn_online, 160, 50);
    ui->scr_input_config_btn_online_label = lv_label_create(ui->scr_input_config_btn_online);
    lv_label_set_text(ui->scr_input_config_btn_online_label, "ONLINE");
    lv_label_set_long_mode(ui->scr_input_config_btn_online_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->scr_input_config_btn_online_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->scr_input_config_btn_online, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->scr_input_config_btn_online_label, LV_PCT(100));

    //Write style for scr_input_config_btn_online, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->scr_input_config_btn_online, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scr_input_config_btn_online, lv_color_hex(0x2ecc71), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scr_input_config_btn_online, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->scr_input_config_btn_online, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_input_config_btn_online, 18, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_input_config_btn_online, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scr_input_config_btn_online, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scr_input_config_btn_online, &lv_font_NotoSans_Bold_25, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scr_input_config_btn_online, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scr_input_config_btn_online, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scr_input_config_imgbtn_back
    ui->scr_input_config_imgbtn_back = lv_imagebutton_create(ui->scr_input_config_cont_root);
    lv_obj_set_pos(ui->scr_input_config_imgbtn_back, 39, 14);
    lv_obj_set_size(ui->scr_input_config_imgbtn_back, 64, 64);
    lv_imagebutton_set_src(ui->scr_input_config_imgbtn_back, LV_IMAGEBUTTON_STATE_RELEASED, &_leftarrow_RGB565A8_64x64, NULL, NULL);
    ui->scr_input_config_imgbtn_back_label = lv_label_create(ui->scr_input_config_imgbtn_back);
    lv_label_set_text(ui->scr_input_config_imgbtn_back_label, "");
    lv_label_set_long_mode(ui->scr_input_config_imgbtn_back_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->scr_input_config_imgbtn_back_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->scr_input_config_imgbtn_back, 0, LV_STATE_DEFAULT);

    //Write style for scr_input_config_imgbtn_back, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_text_color(ui->scr_input_config_imgbtn_back, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scr_input_config_imgbtn_back, &lv_font_montserratMedium_12, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scr_input_config_imgbtn_back, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scr_input_config_imgbtn_back, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_input_config_imgbtn_back, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style for scr_input_config_imgbtn_back, Part: LV_PART_MAIN, State: LV_STATE_PRESSED.
    lv_obj_set_style_image_recolor_opa(ui->scr_input_config_imgbtn_back, 0, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_image_opa(ui->scr_input_config_imgbtn_back, 255, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_text_color(ui->scr_input_config_imgbtn_back, lv_color_hex(0xFF33FF), LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_text_font(ui->scr_input_config_imgbtn_back, &lv_font_montserratMedium_12, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_text_opa(ui->scr_input_config_imgbtn_back, 255, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_shadow_width(ui->scr_input_config_imgbtn_back, 0, LV_PART_MAIN|LV_STATE_PRESSED);

    //Write style for scr_input_config_imgbtn_back, Part: LV_PART_MAIN, State: LV_STATE_CHECKED.
    lv_obj_set_style_image_recolor_opa(ui->scr_input_config_imgbtn_back, 0, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_image_opa(ui->scr_input_config_imgbtn_back, 255, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_text_color(ui->scr_input_config_imgbtn_back, lv_color_hex(0xFF33FF), LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_text_font(ui->scr_input_config_imgbtn_back, &lv_font_montserratMedium_12, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_text_opa(ui->scr_input_config_imgbtn_back, 255, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_shadow_width(ui->scr_input_config_imgbtn_back, 0, LV_PART_MAIN|LV_STATE_CHECKED);

    //Write style for scr_input_config_imgbtn_back, Part: LV_PART_MAIN, State: LV_IMAGEBUTTON_STATE_RELEASED.
    lv_obj_set_style_image_recolor_opa(ui->scr_input_config_imgbtn_back, 0, LV_PART_MAIN|LV_IMAGEBUTTON_STATE_RELEASED);
    lv_obj_set_style_image_opa(ui->scr_input_config_imgbtn_back, 255, LV_PART_MAIN|LV_IMAGEBUTTON_STATE_RELEASED);

    //Write codes scr_input_config_btn_test
    ui->scr_input_config_btn_test = lv_button_create(ui->scr_input_config_cont_root);
    lv_obj_set_pos(ui->scr_input_config_btn_test, 41, 640);
    lv_obj_set_size(ui->scr_input_config_btn_test, 565, 60);
    ui->scr_input_config_btn_test_label = lv_label_create(ui->scr_input_config_btn_test);
    lv_label_set_text(ui->scr_input_config_btn_test_label, "TEST CONNECTION");
    lv_label_set_long_mode(ui->scr_input_config_btn_test_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->scr_input_config_btn_test_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->scr_input_config_btn_test, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->scr_input_config_btn_test_label, LV_PCT(100));

    //Write style for scr_input_config_btn_test, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->scr_input_config_btn_test, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scr_input_config_btn_test, lv_color_hex(0x1c4567), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scr_input_config_btn_test, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->scr_input_config_btn_test, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_input_config_btn_test, 10, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_input_config_btn_test, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scr_input_config_btn_test, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scr_input_config_btn_test, &lv_font_NotoSans_Bold_30, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scr_input_config_btn_test, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scr_input_config_btn_test, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scr_input_config_btn_save
    ui->scr_input_config_btn_save = lv_button_create(ui->scr_input_config_cont_root);
    lv_obj_set_pos(ui->scr_input_config_btn_save, 639, 640);
    lv_obj_set_size(ui->scr_input_config_btn_save, 601, 60);
    ui->scr_input_config_btn_save_label = lv_label_create(ui->scr_input_config_btn_save);
    lv_label_set_text(ui->scr_input_config_btn_save_label, "SAVE");
    lv_label_set_long_mode(ui->scr_input_config_btn_save_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->scr_input_config_btn_save_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->scr_input_config_btn_save, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->scr_input_config_btn_save_label, LV_PCT(100));

    //Write style for scr_input_config_btn_save, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->scr_input_config_btn_save, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scr_input_config_btn_save, lv_color_hex(0x2ECC71), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scr_input_config_btn_save, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->scr_input_config_btn_save, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_input_config_btn_save, 10, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_input_config_btn_save, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scr_input_config_btn_save, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scr_input_config_btn_save, &lv_font_NotoSans_Bold_30, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scr_input_config_btn_save, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scr_input_config_btn_save, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scr_input_config_tabview_intput
    ui->scr_input_config_tabview_intput = lv_tabview_create(ui->scr_input_config_cont_root);
    lv_obj_set_pos(ui->scr_input_config_tabview_intput, 40, 100);
    lv_obj_set_size(ui->scr_input_config_tabview_intput, 1200, 530);
    lv_obj_set_scrollbar_mode(ui->scr_input_config_tabview_intput, LV_SCROLLBAR_MODE_OFF);
    lv_tabview_set_tab_bar_position(ui->scr_input_config_tabview_intput, LV_DIR_TOP);
    lv_tabview_set_tab_bar_size(ui->scr_input_config_tabview_intput, 50);
    ui->scr_input_config_tabview_intput_tab_1 = lv_tabview_add_tab(ui->scr_input_config_tabview_intput, "INPUT 1");
    ui->scr_input_config_tabview_intput_tab_2 = lv_tabview_add_tab(ui->scr_input_config_tabview_intput, "INPUT 2");
    ui->scr_input_config_tabview_intput_tab_3 = lv_tabview_add_tab(ui->scr_input_config_tabview_intput, "INPUT 3");
    ui->scr_input_config_tabview_intput_tab_4 = lv_tabview_add_tab(ui->scr_input_config_tabview_intput, "INPUT 4");

    //Write style for scr_input_config_tabview_intput, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->scr_input_config_tabview_intput, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scr_input_config_tabview_intput, lv_color_hex(0x2B2F3A), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scr_input_config_tabview_intput, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scr_input_config_tabview_intput, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scr_input_config_tabview_intput, &lv_font_NotoSans_Bold_35, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scr_input_config_tabview_intput, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->scr_input_config_tabview_intput, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->scr_input_config_tabview_intput, 16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->scr_input_config_tabview_intput, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_input_config_tabview_intput, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_input_config_tabview_intput, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style state: LV_STATE_DEFAULT for &style_scr_input_config_tabview_intput_extra_btnm_main_default
    static lv_style_t style_scr_input_config_tabview_intput_extra_btnm_main_default;
    ui_init_style(&style_scr_input_config_tabview_intput_extra_btnm_main_default);

    lv_style_set_bg_opa(&style_scr_input_config_tabview_intput_extra_btnm_main_default, 255);
    lv_style_set_bg_color(&style_scr_input_config_tabview_intput_extra_btnm_main_default, lv_color_hex(0x454545));
    lv_style_set_bg_grad_dir(&style_scr_input_config_tabview_intput_extra_btnm_main_default, LV_GRAD_DIR_NONE);
    lv_style_set_border_width(&style_scr_input_config_tabview_intput_extra_btnm_main_default, 0);
    lv_style_set_radius(&style_scr_input_config_tabview_intput_extra_btnm_main_default, 0);
    for(uint32_t i = 0; i < lv_tabview_get_tab_count(ui->scr_input_config_tabview_intput); i++)
    {
        lv_obj_add_style(lv_obj_get_child(lv_tabview_get_tab_bar(ui->scr_input_config_tabview_intput), i), &style_scr_input_config_tabview_intput_extra_btnm_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);
    }

    //Write style state: LV_STATE_DEFAULT for &style_scr_input_config_tabview_intput_extra_btnm_items_default
    static lv_style_t style_scr_input_config_tabview_intput_extra_btnm_items_default;
    ui_init_style(&style_scr_input_config_tabview_intput_extra_btnm_items_default);

    lv_style_set_text_color(&style_scr_input_config_tabview_intput_extra_btnm_items_default, lv_color_hex(0xffffff));
    lv_style_set_text_font(&style_scr_input_config_tabview_intput_extra_btnm_items_default, &lv_font_NotoSans_Bold_35);
    lv_style_set_text_opa(&style_scr_input_config_tabview_intput_extra_btnm_items_default, 255);
    for(uint32_t i = 0; i < lv_tabview_get_tab_count(ui->scr_input_config_tabview_intput); i++)
    {
        lv_obj_add_style(lv_obj_get_child(lv_tabview_get_tab_bar(ui->scr_input_config_tabview_intput), i), &style_scr_input_config_tabview_intput_extra_btnm_items_default, LV_PART_MAIN|LV_STATE_DEFAULT);
    }

    //Write style state: LV_STATE_CHECKED for &style_scr_input_config_tabview_intput_extra_btnm_items_checked
    static lv_style_t style_scr_input_config_tabview_intput_extra_btnm_items_checked;
    ui_init_style(&style_scr_input_config_tabview_intput_extra_btnm_items_checked);

    lv_style_set_text_color(&style_scr_input_config_tabview_intput_extra_btnm_items_checked, lv_color_hex(0xffffff));
    lv_style_set_text_font(&style_scr_input_config_tabview_intput_extra_btnm_items_checked, &lv_font_NotoSans_Bold_35);
    lv_style_set_text_opa(&style_scr_input_config_tabview_intput_extra_btnm_items_checked, 255);
    lv_style_set_border_width(&style_scr_input_config_tabview_intput_extra_btnm_items_checked, 4);
    lv_style_set_border_opa(&style_scr_input_config_tabview_intput_extra_btnm_items_checked, 255);
    lv_style_set_border_color(&style_scr_input_config_tabview_intput_extra_btnm_items_checked, lv_color_hex(0x2F92DA));
    lv_style_set_border_side(&style_scr_input_config_tabview_intput_extra_btnm_items_checked, LV_BORDER_SIDE_BOTTOM);
    lv_style_set_radius(&style_scr_input_config_tabview_intput_extra_btnm_items_checked, 0);
    lv_style_set_bg_opa(&style_scr_input_config_tabview_intput_extra_btnm_items_checked, 60);
    lv_style_set_bg_color(&style_scr_input_config_tabview_intput_extra_btnm_items_checked, lv_color_hex(0x2195f6));
    lv_style_set_bg_grad_dir(&style_scr_input_config_tabview_intput_extra_btnm_items_checked, LV_GRAD_DIR_NONE);
    for(uint32_t i = 0; i < lv_tabview_get_tab_count(ui->scr_input_config_tabview_intput); i++)
    {
        lv_obj_add_style(lv_obj_get_child(lv_tabview_get_tab_bar(ui->scr_input_config_tabview_intput), i), &style_scr_input_config_tabview_intput_extra_btnm_items_checked, LV_PART_MAIN|LV_STATE_CHECKED);
    }

    //Write codes INPUT 1
    lv_obj_t * scr_input_config_tabview_intput_tab_1_label = lv_label_create(ui->scr_input_config_tabview_intput_tab_1);
    lv_label_set_text(scr_input_config_tabview_intput_tab_1_label, "");

    //Write codes scr_input_config_cont_intput1
    ui->scr_input_config_cont_intput1 = lv_obj_create(ui->scr_input_config_tabview_intput_tab_1);
    lv_obj_set_pos(ui->scr_input_config_cont_intput1, 30, 0);
    lv_obj_set_size(ui->scr_input_config_cont_intput1, 1100, 450);
    lv_obj_set_scrollbar_mode(ui->scr_input_config_cont_intput1, LV_SCROLLBAR_MODE_OFF);

    //Write style for scr_input_config_cont_intput1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scr_input_config_cont_intput1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_input_config_cont_intput1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scr_input_config_cont_intput1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scr_input_config_cont_intput1, lv_color_hex(0x2b2f3a), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scr_input_config_cont_intput1, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scr_input_config_cont_intput1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scr_input_config_cont_intput1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scr_input_config_cont_intput1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scr_input_config_cont_intput1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_input_config_cont_intput1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scr_input_config_line_1
    ui->scr_input_config_line_1 = lv_line_create(ui->scr_input_config_cont_intput1);
    lv_obj_set_pos(ui->scr_input_config_line_1, 0, 40);
    lv_obj_set_size(ui->scr_input_config_line_1, 1100, 2);
    static lv_point_precise_t scr_input_config_line_1[] = {{0, 0},{1100, 0}};
    lv_line_set_points(ui->scr_input_config_line_1, scr_input_config_line_1, 2);

    //Write style for scr_input_config_line_1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_line_width(ui->scr_input_config_line_1, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_color(ui->scr_input_config_line_1, lv_color_hex(0x757575), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_opa(ui->scr_input_config_line_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_rounded(ui->scr_input_config_line_1, true, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scr_input_config_lbl_ip1_trigger
    ui->scr_input_config_lbl_ip1_trigger = lv_label_create(ui->scr_input_config_cont_intput1);
    lv_obj_set_pos(ui->scr_input_config_lbl_ip1_trigger, 143, 247);
    lv_obj_set_size(ui->scr_input_config_lbl_ip1_trigger, 209, 39);
    lv_label_set_text(ui->scr_input_config_lbl_ip1_trigger, "Trigger Type");
    lv_label_set_long_mode(ui->scr_input_config_lbl_ip1_trigger, LV_LABEL_LONG_WRAP);

    //Write style for scr_input_config_lbl_ip1_trigger, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scr_input_config_lbl_ip1_trigger, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_input_config_lbl_ip1_trigger, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scr_input_config_lbl_ip1_trigger, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scr_input_config_lbl_ip1_trigger, &lv_font_NotoSans_Bold_30, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scr_input_config_lbl_ip1_trigger, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->scr_input_config_lbl_ip1_trigger, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->scr_input_config_lbl_ip1_trigger, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scr_input_config_lbl_ip1_trigger, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scr_input_config_lbl_ip1_trigger, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scr_input_config_lbl_ip1_trigger, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scr_input_config_lbl_ip1_trigger, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scr_input_config_lbl_ip1_trigger, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scr_input_config_lbl_ip1_trigger, 10, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_input_config_lbl_ip1_trigger, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scr_input_config_ddlist_ip1_trigger
    ui->scr_input_config_ddlist_ip1_trigger = lv_dropdown_create(ui->scr_input_config_cont_intput1);
    lv_obj_set_pos(ui->scr_input_config_ddlist_ip1_trigger, 448, 238);
    lv_obj_set_size(ui->scr_input_config_ddlist_ip1_trigger, 450, 50);
    lv_dropdown_set_options(ui->scr_input_config_ddlist_ip1_trigger, "Rising Edge\nFalling Edge\nLevel High\nLevel Low");

    //Write style for scr_input_config_ddlist_ip1_trigger, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_text_color(ui->scr_input_config_ddlist_ip1_trigger, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scr_input_config_ddlist_ip1_trigger, &lv_font_NotoSans_Regular_30, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scr_input_config_ddlist_ip1_trigger, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->scr_input_config_ddlist_ip1_trigger, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scr_input_config_ddlist_ip1_trigger, 8, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scr_input_config_ddlist_ip1_trigger, 20, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scr_input_config_ddlist_ip1_trigger, 20, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_input_config_ddlist_ip1_trigger, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scr_input_config_ddlist_ip1_trigger, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scr_input_config_ddlist_ip1_trigger, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scr_input_config_ddlist_ip1_trigger, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_input_config_ddlist_ip1_trigger, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style for scr_input_config_ddlist_ip1_trigger, Part: LV_PART_MAIN, State: LV_STATE_CHECKED.
    lv_obj_set_style_text_color(ui->scr_input_config_ddlist_ip1_trigger, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_text_font(ui->scr_input_config_ddlist_ip1_trigger, &lv_font_NotoSans_Regular_30, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_text_opa(ui->scr_input_config_ddlist_ip1_trigger, 255, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_border_width(ui->scr_input_config_ddlist_ip1_trigger, 0, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_pad_top(ui->scr_input_config_ddlist_ip1_trigger, 8, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_pad_left(ui->scr_input_config_ddlist_ip1_trigger, 20, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_pad_right(ui->scr_input_config_ddlist_ip1_trigger, 20, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_radius(ui->scr_input_config_ddlist_ip1_trigger, 5, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_bg_opa(ui->scr_input_config_ddlist_ip1_trigger, 255, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_bg_color(ui->scr_input_config_ddlist_ip1_trigger, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_bg_grad_dir(ui->scr_input_config_ddlist_ip1_trigger, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_shadow_width(ui->scr_input_config_ddlist_ip1_trigger, 0, LV_PART_MAIN|LV_STATE_CHECKED);

    //Write style for scr_input_config_ddlist_ip1_trigger, Part: LV_PART_MAIN, State: LV_STATE_FOCUSED.
    lv_obj_set_style_text_color(ui->scr_input_config_ddlist_ip1_trigger, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_text_font(ui->scr_input_config_ddlist_ip1_trigger, &lv_font_NotoSans_Regular_30, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_text_opa(ui->scr_input_config_ddlist_ip1_trigger, 255, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_border_width(ui->scr_input_config_ddlist_ip1_trigger, 0, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_pad_top(ui->scr_input_config_ddlist_ip1_trigger, 8, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_pad_left(ui->scr_input_config_ddlist_ip1_trigger, 20, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_pad_right(ui->scr_input_config_ddlist_ip1_trigger, 20, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_radius(ui->scr_input_config_ddlist_ip1_trigger, 5, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_bg_opa(ui->scr_input_config_ddlist_ip1_trigger, 255, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_bg_color(ui->scr_input_config_ddlist_ip1_trigger, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_bg_grad_dir(ui->scr_input_config_ddlist_ip1_trigger, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_shadow_width(ui->scr_input_config_ddlist_ip1_trigger, 0, LV_PART_MAIN|LV_STATE_FOCUSED);

    //Write style state: LV_STATE_CHECKED for &style_scr_input_config_ddlist_ip1_trigger_extra_list_selected_checked
    static lv_style_t style_scr_input_config_ddlist_ip1_trigger_extra_list_selected_checked;
    ui_init_style(&style_scr_input_config_ddlist_ip1_trigger_extra_list_selected_checked);

    lv_style_set_border_width(&style_scr_input_config_ddlist_ip1_trigger_extra_list_selected_checked, 0);
    lv_style_set_radius(&style_scr_input_config_ddlist_ip1_trigger_extra_list_selected_checked, 5);
    lv_style_set_bg_opa(&style_scr_input_config_ddlist_ip1_trigger_extra_list_selected_checked, 255);
    lv_style_set_bg_color(&style_scr_input_config_ddlist_ip1_trigger_extra_list_selected_checked, lv_color_hex(0x00a1b5));
    lv_style_set_bg_grad_dir(&style_scr_input_config_ddlist_ip1_trigger_extra_list_selected_checked, LV_GRAD_DIR_NONE);
    lv_obj_add_style(lv_dropdown_get_list(ui->scr_input_config_ddlist_ip1_trigger), &style_scr_input_config_ddlist_ip1_trigger_extra_list_selected_checked, LV_PART_SELECTED|LV_STATE_CHECKED);

    //Write style state: LV_STATE_DEFAULT for &style_scr_input_config_ddlist_ip1_trigger_extra_list_main_default
    static lv_style_t style_scr_input_config_ddlist_ip1_trigger_extra_list_main_default;
    ui_init_style(&style_scr_input_config_ddlist_ip1_trigger_extra_list_main_default);

    lv_style_set_max_height(&style_scr_input_config_ddlist_ip1_trigger_extra_list_main_default, 90);
    lv_style_set_text_color(&style_scr_input_config_ddlist_ip1_trigger_extra_list_main_default, lv_color_hex(0x000000));
    lv_style_set_text_font(&style_scr_input_config_ddlist_ip1_trigger_extra_list_main_default, &lv_font_NotoSans_Regular_30);
    lv_style_set_text_opa(&style_scr_input_config_ddlist_ip1_trigger_extra_list_main_default, 255);
    lv_style_set_border_width(&style_scr_input_config_ddlist_ip1_trigger_extra_list_main_default, 0);
    lv_style_set_radius(&style_scr_input_config_ddlist_ip1_trigger_extra_list_main_default, 5);
    lv_style_set_bg_opa(&style_scr_input_config_ddlist_ip1_trigger_extra_list_main_default, 255);
    lv_style_set_bg_color(&style_scr_input_config_ddlist_ip1_trigger_extra_list_main_default, lv_color_hex(0xffffff));
    lv_style_set_bg_grad_dir(&style_scr_input_config_ddlist_ip1_trigger_extra_list_main_default, LV_GRAD_DIR_NONE);
    lv_obj_add_style(lv_dropdown_get_list(ui->scr_input_config_ddlist_ip1_trigger), &style_scr_input_config_ddlist_ip1_trigger_extra_list_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style state: LV_STATE_DEFAULT for &style_scr_input_config_ddlist_ip1_trigger_extra_list_scrollbar_default
    static lv_style_t style_scr_input_config_ddlist_ip1_trigger_extra_list_scrollbar_default;
    ui_init_style(&style_scr_input_config_ddlist_ip1_trigger_extra_list_scrollbar_default);

    lv_style_set_radius(&style_scr_input_config_ddlist_ip1_trigger_extra_list_scrollbar_default, 3);
    lv_style_set_bg_opa(&style_scr_input_config_ddlist_ip1_trigger_extra_list_scrollbar_default, 255);
    lv_style_set_bg_color(&style_scr_input_config_ddlist_ip1_trigger_extra_list_scrollbar_default, lv_color_hex(0x00ff00));
    lv_style_set_bg_grad_dir(&style_scr_input_config_ddlist_ip1_trigger_extra_list_scrollbar_default, LV_GRAD_DIR_NONE);
    lv_obj_add_style(lv_dropdown_get_list(ui->scr_input_config_ddlist_ip1_trigger), &style_scr_input_config_ddlist_ip1_trigger_extra_list_scrollbar_default, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);

    //Write codes scr_input_config_lbl_ip1_function
    ui->scr_input_config_lbl_ip1_function = lv_label_create(ui->scr_input_config_cont_intput1);
    lv_obj_set_pos(ui->scr_input_config_lbl_ip1_function, 143, 68);
    lv_obj_set_size(ui->scr_input_config_lbl_ip1_function, 157, 32);
    lv_label_set_text(ui->scr_input_config_lbl_ip1_function, "Function");
    lv_label_set_long_mode(ui->scr_input_config_lbl_ip1_function, LV_LABEL_LONG_WRAP);

    //Write style for scr_input_config_lbl_ip1_function, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scr_input_config_lbl_ip1_function, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_input_config_lbl_ip1_function, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scr_input_config_lbl_ip1_function, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scr_input_config_lbl_ip1_function, &lv_font_NotoSans_Bold_30, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scr_input_config_lbl_ip1_function, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->scr_input_config_lbl_ip1_function, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->scr_input_config_lbl_ip1_function, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scr_input_config_lbl_ip1_function, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scr_input_config_lbl_ip1_function, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scr_input_config_lbl_ip1_function, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scr_input_config_lbl_ip1_function, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scr_input_config_lbl_ip1_function, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scr_input_config_lbl_ip1_function, 10, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_input_config_lbl_ip1_function, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scr_input_config_lbl_ip1
    ui->scr_input_config_lbl_ip1 = lv_label_create(ui->scr_input_config_cont_intput1);
    lv_obj_set_pos(ui->scr_input_config_lbl_ip1, 0, 0);
    lv_obj_set_size(ui->scr_input_config_lbl_ip1, 381, 35);
    lv_label_set_text_static(ui->scr_input_config_lbl_ip1, "Selected Input: INPUT 1");
    lv_label_set_long_mode(ui->scr_input_config_lbl_ip1, LV_LABEL_LONG_WRAP);

    //Write style for scr_input_config_lbl_ip1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scr_input_config_lbl_ip1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_input_config_lbl_ip1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scr_input_config_lbl_ip1, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scr_input_config_lbl_ip1, &lv_font_NotoSans_Bold_30, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scr_input_config_lbl_ip1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->scr_input_config_lbl_ip1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->scr_input_config_lbl_ip1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scr_input_config_lbl_ip1, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scr_input_config_lbl_ip1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scr_input_config_lbl_ip1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scr_input_config_lbl_ip1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scr_input_config_lbl_ip1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scr_input_config_lbl_ip1, 10, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_input_config_lbl_ip1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scr_input_config_lbl_ip1_livestatus
    ui->scr_input_config_lbl_ip1_livestatus = lv_label_create(ui->scr_input_config_cont_intput1);
    lv_obj_set_pos(ui->scr_input_config_lbl_ip1_livestatus, 143, 335);
    lv_obj_set_size(ui->scr_input_config_lbl_ip1_livestatus, 220, 32);
    lv_label_set_text(ui->scr_input_config_lbl_ip1_livestatus, "Live Status");
    lv_label_set_long_mode(ui->scr_input_config_lbl_ip1_livestatus, LV_LABEL_LONG_WRAP);

    //Write style for scr_input_config_lbl_ip1_livestatus, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scr_input_config_lbl_ip1_livestatus, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_input_config_lbl_ip1_livestatus, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scr_input_config_lbl_ip1_livestatus, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scr_input_config_lbl_ip1_livestatus, &lv_font_NotoSans_Bold_30, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scr_input_config_lbl_ip1_livestatus, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->scr_input_config_lbl_ip1_livestatus, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->scr_input_config_lbl_ip1_livestatus, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scr_input_config_lbl_ip1_livestatus, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scr_input_config_lbl_ip1_livestatus, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scr_input_config_lbl_ip1_livestatus, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scr_input_config_lbl_ip1_livestatus, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scr_input_config_lbl_ip1_livestatus, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scr_input_config_lbl_ip1_livestatus, 10, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_input_config_lbl_ip1_livestatus, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scr_input_config_lbl_ip1_status
    ui->scr_input_config_lbl_ip1_status = lv_label_create(ui->scr_input_config_cont_intput1);
    lv_obj_set_pos(ui->scr_input_config_lbl_ip1_status, 478, 335);
    lv_obj_set_size(ui->scr_input_config_lbl_ip1_status, 114, 32);
    lv_label_set_text(ui->scr_input_config_lbl_ip1_status, "LOW");
    lv_label_set_long_mode(ui->scr_input_config_lbl_ip1_status, LV_LABEL_LONG_WRAP);

    //Write style for scr_input_config_lbl_ip1_status, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scr_input_config_lbl_ip1_status, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_input_config_lbl_ip1_status, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scr_input_config_lbl_ip1_status, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scr_input_config_lbl_ip1_status, &lv_font_NotoSans_Bold_30, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scr_input_config_lbl_ip1_status, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->scr_input_config_lbl_ip1_status, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->scr_input_config_lbl_ip1_status, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scr_input_config_lbl_ip1_status, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scr_input_config_lbl_ip1_status, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scr_input_config_lbl_ip1_status, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scr_input_config_lbl_ip1_status, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scr_input_config_lbl_ip1_status, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scr_input_config_lbl_ip1_status, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_input_config_lbl_ip1_status, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scr_input_config_led_ip1_status
    ui->scr_input_config_led_ip1_status = lv_led_create(ui->scr_input_config_cont_intput1);
    lv_obj_set_pos(ui->scr_input_config_led_ip1_status, 448, 341);
    lv_obj_set_size(ui->scr_input_config_led_ip1_status, 20, 20);
    lv_led_set_brightness(ui->scr_input_config_led_ip1_status, 255);
    lv_led_set_color(ui->scr_input_config_led_ip1_status, lv_color_hex(0xfd0026));

    //Write codes scr_input_config_line_2
    ui->scr_input_config_line_2 = lv_line_create(ui->scr_input_config_cont_intput1);
    lv_obj_set_pos(ui->scr_input_config_line_2, 143, 126);
    lv_obj_set_size(ui->scr_input_config_line_2, 850, 2);
    static lv_point_precise_t scr_input_config_line_2[] = {{0, 0},{1100, 0}};
    lv_line_set_points(ui->scr_input_config_line_2, scr_input_config_line_2, 2);

    //Write style for scr_input_config_line_2, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_line_width(ui->scr_input_config_line_2, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_color(ui->scr_input_config_line_2, lv_color_hex(0x757575), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_opa(ui->scr_input_config_line_2, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_rounded(ui->scr_input_config_line_2, true, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scr_input_config_line_3
    ui->scr_input_config_line_3 = lv_line_create(ui->scr_input_config_cont_intput1);
    lv_obj_set_pos(ui->scr_input_config_line_3, 143, 306);
    lv_obj_set_size(ui->scr_input_config_line_3, 850, 2);
    static lv_point_precise_t scr_input_config_line_3[] = {{0, 0},{1100, 0}};
    lv_line_set_points(ui->scr_input_config_line_3, scr_input_config_line_3, 2);

    //Write style for scr_input_config_line_3, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_line_width(ui->scr_input_config_line_3, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_color(ui->scr_input_config_line_3, lv_color_hex(0x757575), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_opa(ui->scr_input_config_line_3, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_rounded(ui->scr_input_config_line_3, true, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scr_input_config_ddlist_ip1_enable
    ui->scr_input_config_ddlist_ip1_enable = lv_dropdown_create(ui->scr_input_config_cont_intput1);
    lv_obj_set_pos(ui->scr_input_config_ddlist_ip1_enable, 447, 145);
    lv_obj_set_size(ui->scr_input_config_ddlist_ip1_enable, 450, 50);
    lv_dropdown_set_options(ui->scr_input_config_ddlist_ip1_enable, "No\nYes");

    //Write style for scr_input_config_ddlist_ip1_enable, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_text_color(ui->scr_input_config_ddlist_ip1_enable, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scr_input_config_ddlist_ip1_enable, &lv_font_NotoSans_Regular_30, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scr_input_config_ddlist_ip1_enable, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->scr_input_config_ddlist_ip1_enable, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scr_input_config_ddlist_ip1_enable, 8, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scr_input_config_ddlist_ip1_enable, 20, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scr_input_config_ddlist_ip1_enable, 20, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_input_config_ddlist_ip1_enable, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scr_input_config_ddlist_ip1_enable, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scr_input_config_ddlist_ip1_enable, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scr_input_config_ddlist_ip1_enable, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_input_config_ddlist_ip1_enable, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style for scr_input_config_ddlist_ip1_enable, Part: LV_PART_MAIN, State: LV_STATE_CHECKED.
    lv_obj_set_style_text_color(ui->scr_input_config_ddlist_ip1_enable, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_text_font(ui->scr_input_config_ddlist_ip1_enable, &lv_font_NotoSans_Regular_30, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_text_opa(ui->scr_input_config_ddlist_ip1_enable, 255, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_border_width(ui->scr_input_config_ddlist_ip1_enable, 0, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_pad_top(ui->scr_input_config_ddlist_ip1_enable, 8, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_pad_left(ui->scr_input_config_ddlist_ip1_enable, 6, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_pad_right(ui->scr_input_config_ddlist_ip1_enable, 6, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_radius(ui->scr_input_config_ddlist_ip1_enable, 5, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_bg_opa(ui->scr_input_config_ddlist_ip1_enable, 255, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_bg_color(ui->scr_input_config_ddlist_ip1_enable, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_bg_grad_dir(ui->scr_input_config_ddlist_ip1_enable, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_shadow_width(ui->scr_input_config_ddlist_ip1_enable, 0, LV_PART_MAIN|LV_STATE_CHECKED);

    //Write style for scr_input_config_ddlist_ip1_enable, Part: LV_PART_MAIN, State: LV_STATE_FOCUSED.
    lv_obj_set_style_text_color(ui->scr_input_config_ddlist_ip1_enable, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_text_font(ui->scr_input_config_ddlist_ip1_enable, &lv_font_NotoSans_Regular_30, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_text_opa(ui->scr_input_config_ddlist_ip1_enable, 255, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_border_width(ui->scr_input_config_ddlist_ip1_enable, 0, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_pad_top(ui->scr_input_config_ddlist_ip1_enable, 8, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_pad_left(ui->scr_input_config_ddlist_ip1_enable, 20, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_pad_right(ui->scr_input_config_ddlist_ip1_enable, 20, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_radius(ui->scr_input_config_ddlist_ip1_enable, 5, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_bg_opa(ui->scr_input_config_ddlist_ip1_enable, 255, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_bg_color(ui->scr_input_config_ddlist_ip1_enable, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_bg_grad_dir(ui->scr_input_config_ddlist_ip1_enable, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_shadow_width(ui->scr_input_config_ddlist_ip1_enable, 0, LV_PART_MAIN|LV_STATE_FOCUSED);

    //Write style state: LV_STATE_CHECKED for &style_scr_input_config_ddlist_ip1_enable_extra_list_selected_checked
    static lv_style_t style_scr_input_config_ddlist_ip1_enable_extra_list_selected_checked;
    ui_init_style(&style_scr_input_config_ddlist_ip1_enable_extra_list_selected_checked);

    lv_style_set_border_width(&style_scr_input_config_ddlist_ip1_enable_extra_list_selected_checked, 0);
    lv_style_set_radius(&style_scr_input_config_ddlist_ip1_enable_extra_list_selected_checked, 5);
    lv_style_set_bg_opa(&style_scr_input_config_ddlist_ip1_enable_extra_list_selected_checked, 255);
    lv_style_set_bg_color(&style_scr_input_config_ddlist_ip1_enable_extra_list_selected_checked, lv_color_hex(0x00a1b5));
    lv_style_set_bg_grad_dir(&style_scr_input_config_ddlist_ip1_enable_extra_list_selected_checked, LV_GRAD_DIR_NONE);
    lv_obj_add_style(lv_dropdown_get_list(ui->scr_input_config_ddlist_ip1_enable), &style_scr_input_config_ddlist_ip1_enable_extra_list_selected_checked, LV_PART_SELECTED|LV_STATE_CHECKED);

    //Write style state: LV_STATE_DEFAULT for &style_scr_input_config_ddlist_ip1_enable_extra_list_main_default
    static lv_style_t style_scr_input_config_ddlist_ip1_enable_extra_list_main_default;
    ui_init_style(&style_scr_input_config_ddlist_ip1_enable_extra_list_main_default);

    lv_style_set_max_height(&style_scr_input_config_ddlist_ip1_enable_extra_list_main_default, 90);
    lv_style_set_text_color(&style_scr_input_config_ddlist_ip1_enable_extra_list_main_default, lv_color_hex(0x0D3055));
    lv_style_set_text_font(&style_scr_input_config_ddlist_ip1_enable_extra_list_main_default, &lv_font_NotoSans_Regular_30);
    lv_style_set_text_opa(&style_scr_input_config_ddlist_ip1_enable_extra_list_main_default, 255);
    lv_style_set_border_width(&style_scr_input_config_ddlist_ip1_enable_extra_list_main_default, 0);
    lv_style_set_radius(&style_scr_input_config_ddlist_ip1_enable_extra_list_main_default, 5);
    lv_style_set_bg_opa(&style_scr_input_config_ddlist_ip1_enable_extra_list_main_default, 255);
    lv_style_set_bg_color(&style_scr_input_config_ddlist_ip1_enable_extra_list_main_default, lv_color_hex(0xffffff));
    lv_style_set_bg_grad_dir(&style_scr_input_config_ddlist_ip1_enable_extra_list_main_default, LV_GRAD_DIR_NONE);
    lv_obj_add_style(lv_dropdown_get_list(ui->scr_input_config_ddlist_ip1_enable), &style_scr_input_config_ddlist_ip1_enable_extra_list_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style state: LV_STATE_DEFAULT for &style_scr_input_config_ddlist_ip1_enable_extra_list_scrollbar_default
    static lv_style_t style_scr_input_config_ddlist_ip1_enable_extra_list_scrollbar_default;
    ui_init_style(&style_scr_input_config_ddlist_ip1_enable_extra_list_scrollbar_default);

    lv_style_set_radius(&style_scr_input_config_ddlist_ip1_enable_extra_list_scrollbar_default, 3);
    lv_style_set_bg_opa(&style_scr_input_config_ddlist_ip1_enable_extra_list_scrollbar_default, 255);
    lv_style_set_bg_color(&style_scr_input_config_ddlist_ip1_enable_extra_list_scrollbar_default, lv_color_hex(0x414141));
    lv_style_set_bg_grad_dir(&style_scr_input_config_ddlist_ip1_enable_extra_list_scrollbar_default, LV_GRAD_DIR_NONE);
    lv_obj_add_style(lv_dropdown_get_list(ui->scr_input_config_ddlist_ip1_enable), &style_scr_input_config_ddlist_ip1_enable_extra_list_scrollbar_default, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);

    //Write codes scr_input_config_lbl_ip1_enable
    ui->scr_input_config_lbl_ip1_enable = lv_label_create(ui->scr_input_config_cont_intput1);
    lv_obj_set_pos(ui->scr_input_config_lbl_ip1_enable, 143, 156);
    lv_obj_set_size(ui->scr_input_config_lbl_ip1_enable, 146, 32);
    lv_label_set_text(ui->scr_input_config_lbl_ip1_enable, "Enable");
    lv_label_set_long_mode(ui->scr_input_config_lbl_ip1_enable, LV_LABEL_LONG_WRAP);

    //Write style for scr_input_config_lbl_ip1_enable, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scr_input_config_lbl_ip1_enable, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_input_config_lbl_ip1_enable, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scr_input_config_lbl_ip1_enable, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scr_input_config_lbl_ip1_enable, &lv_font_NotoSans_Bold_30, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scr_input_config_lbl_ip1_enable, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->scr_input_config_lbl_ip1_enable, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->scr_input_config_lbl_ip1_enable, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scr_input_config_lbl_ip1_enable, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scr_input_config_lbl_ip1_enable, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scr_input_config_lbl_ip1_enable, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scr_input_config_lbl_ip1_enable, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scr_input_config_lbl_ip1_enable, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scr_input_config_lbl_ip1_enable, 10, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_input_config_lbl_ip1_enable, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scr_input_config_line_17
    ui->scr_input_config_line_17 = lv_line_create(ui->scr_input_config_cont_intput1);
    lv_obj_set_pos(ui->scr_input_config_line_17, 143, 216);
    lv_obj_set_size(ui->scr_input_config_line_17, 850, 2);
    static lv_point_precise_t scr_input_config_line_17[] = {{0, 0},{1100, 0}};
    lv_line_set_points(ui->scr_input_config_line_17, scr_input_config_line_17, 2);

    //Write style for scr_input_config_line_17, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_line_width(ui->scr_input_config_line_17, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_color(ui->scr_input_config_line_17, lv_color_hex(0x757575), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_opa(ui->scr_input_config_line_17, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_rounded(ui->scr_input_config_line_17, true, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scr_input_config_line_33
    ui->scr_input_config_line_33 = lv_line_create(ui->scr_input_config_cont_intput1);
    lv_obj_set_pos(ui->scr_input_config_line_33, 143, 380);
    lv_obj_set_size(ui->scr_input_config_line_33, 850, 2);
    static lv_point_precise_t scr_input_config_line_33[] = {{0, 0},{1100, 0}};
    lv_line_set_points(ui->scr_input_config_line_33, scr_input_config_line_33, 2);

    //Write style for scr_input_config_line_33, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_line_width(ui->scr_input_config_line_33, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_color(ui->scr_input_config_line_33, lv_color_hex(0x757575), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_opa(ui->scr_input_config_line_33, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_rounded(ui->scr_input_config_line_33, true, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scr_input_config_ddlist_ip1_function
    ui->scr_input_config_ddlist_ip1_function = lv_dropdown_create(ui->scr_input_config_cont_intput1);
    lv_obj_set_pos(ui->scr_input_config_ddlist_ip1_function, 447, 59);
    lv_obj_set_size(ui->scr_input_config_ddlist_ip1_function, 450, 50);
    lv_dropdown_set_options(ui->scr_input_config_ddlist_ip1_function, "Start\nStop\nError\nCount Product\nNone");

    //Write style for scr_input_config_ddlist_ip1_function, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_text_color(ui->scr_input_config_ddlist_ip1_function, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scr_input_config_ddlist_ip1_function, &lv_font_NotoSans_Regular_30, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scr_input_config_ddlist_ip1_function, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->scr_input_config_ddlist_ip1_function, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scr_input_config_ddlist_ip1_function, 8, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scr_input_config_ddlist_ip1_function, 20, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scr_input_config_ddlist_ip1_function, 20, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_input_config_ddlist_ip1_function, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scr_input_config_ddlist_ip1_function, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scr_input_config_ddlist_ip1_function, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scr_input_config_ddlist_ip1_function, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_input_config_ddlist_ip1_function, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style for scr_input_config_ddlist_ip1_function, Part: LV_PART_MAIN, State: LV_STATE_CHECKED.
    lv_obj_set_style_text_color(ui->scr_input_config_ddlist_ip1_function, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_text_font(ui->scr_input_config_ddlist_ip1_function, &lv_font_NotoSans_Regular_30, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_text_opa(ui->scr_input_config_ddlist_ip1_function, 255, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_border_width(ui->scr_input_config_ddlist_ip1_function, 0, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_pad_top(ui->scr_input_config_ddlist_ip1_function, 8, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_pad_left(ui->scr_input_config_ddlist_ip1_function, 6, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_pad_right(ui->scr_input_config_ddlist_ip1_function, 6, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_radius(ui->scr_input_config_ddlist_ip1_function, 5, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_bg_opa(ui->scr_input_config_ddlist_ip1_function, 255, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_bg_color(ui->scr_input_config_ddlist_ip1_function, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_bg_grad_dir(ui->scr_input_config_ddlist_ip1_function, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_shadow_width(ui->scr_input_config_ddlist_ip1_function, 0, LV_PART_MAIN|LV_STATE_CHECKED);

    //Write style for scr_input_config_ddlist_ip1_function, Part: LV_PART_MAIN, State: LV_STATE_FOCUSED.
    lv_obj_set_style_text_color(ui->scr_input_config_ddlist_ip1_function, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_text_font(ui->scr_input_config_ddlist_ip1_function, &lv_font_NotoSans_Regular_30, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_text_opa(ui->scr_input_config_ddlist_ip1_function, 255, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_border_width(ui->scr_input_config_ddlist_ip1_function, 0, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_pad_top(ui->scr_input_config_ddlist_ip1_function, 8, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_pad_left(ui->scr_input_config_ddlist_ip1_function, 20, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_pad_right(ui->scr_input_config_ddlist_ip1_function, 20, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_radius(ui->scr_input_config_ddlist_ip1_function, 5, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_bg_opa(ui->scr_input_config_ddlist_ip1_function, 255, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_bg_color(ui->scr_input_config_ddlist_ip1_function, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_bg_grad_dir(ui->scr_input_config_ddlist_ip1_function, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_shadow_width(ui->scr_input_config_ddlist_ip1_function, 0, LV_PART_MAIN|LV_STATE_FOCUSED);

    //Write style state: LV_STATE_CHECKED for &style_scr_input_config_ddlist_ip1_function_extra_list_selected_checked
    static lv_style_t style_scr_input_config_ddlist_ip1_function_extra_list_selected_checked;
    ui_init_style(&style_scr_input_config_ddlist_ip1_function_extra_list_selected_checked);

    lv_style_set_border_width(&style_scr_input_config_ddlist_ip1_function_extra_list_selected_checked, 0);
    lv_style_set_radius(&style_scr_input_config_ddlist_ip1_function_extra_list_selected_checked, 5);
    lv_style_set_bg_opa(&style_scr_input_config_ddlist_ip1_function_extra_list_selected_checked, 255);
    lv_style_set_bg_color(&style_scr_input_config_ddlist_ip1_function_extra_list_selected_checked, lv_color_hex(0x00a1b5));
    lv_style_set_bg_grad_dir(&style_scr_input_config_ddlist_ip1_function_extra_list_selected_checked, LV_GRAD_DIR_NONE);
    lv_obj_add_style(lv_dropdown_get_list(ui->scr_input_config_ddlist_ip1_function), &style_scr_input_config_ddlist_ip1_function_extra_list_selected_checked, LV_PART_SELECTED|LV_STATE_CHECKED);

    //Write style state: LV_STATE_DEFAULT for &style_scr_input_config_ddlist_ip1_function_extra_list_main_default
    static lv_style_t style_scr_input_config_ddlist_ip1_function_extra_list_main_default;
    ui_init_style(&style_scr_input_config_ddlist_ip1_function_extra_list_main_default);

    lv_style_set_max_height(&style_scr_input_config_ddlist_ip1_function_extra_list_main_default, 90);
    lv_style_set_text_color(&style_scr_input_config_ddlist_ip1_function_extra_list_main_default, lv_color_hex(0x0D3055));
    lv_style_set_text_font(&style_scr_input_config_ddlist_ip1_function_extra_list_main_default, &lv_font_NotoSans_Regular_30);
    lv_style_set_text_opa(&style_scr_input_config_ddlist_ip1_function_extra_list_main_default, 255);
    lv_style_set_border_width(&style_scr_input_config_ddlist_ip1_function_extra_list_main_default, 0);
    lv_style_set_radius(&style_scr_input_config_ddlist_ip1_function_extra_list_main_default, 5);
    lv_style_set_bg_opa(&style_scr_input_config_ddlist_ip1_function_extra_list_main_default, 255);
    lv_style_set_bg_color(&style_scr_input_config_ddlist_ip1_function_extra_list_main_default, lv_color_hex(0xffffff));
    lv_style_set_bg_grad_dir(&style_scr_input_config_ddlist_ip1_function_extra_list_main_default, LV_GRAD_DIR_NONE);
    lv_obj_add_style(lv_dropdown_get_list(ui->scr_input_config_ddlist_ip1_function), &style_scr_input_config_ddlist_ip1_function_extra_list_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style state: LV_STATE_DEFAULT for &style_scr_input_config_ddlist_ip1_function_extra_list_scrollbar_default
    static lv_style_t style_scr_input_config_ddlist_ip1_function_extra_list_scrollbar_default;
    ui_init_style(&style_scr_input_config_ddlist_ip1_function_extra_list_scrollbar_default);

    lv_style_set_radius(&style_scr_input_config_ddlist_ip1_function_extra_list_scrollbar_default, 3);
    lv_style_set_bg_opa(&style_scr_input_config_ddlist_ip1_function_extra_list_scrollbar_default, 255);
    lv_style_set_bg_color(&style_scr_input_config_ddlist_ip1_function_extra_list_scrollbar_default, lv_color_hex(0x414141));
    lv_style_set_bg_grad_dir(&style_scr_input_config_ddlist_ip1_function_extra_list_scrollbar_default, LV_GRAD_DIR_NONE);
    lv_obj_add_style(lv_dropdown_get_list(ui->scr_input_config_ddlist_ip1_function), &style_scr_input_config_ddlist_ip1_function_extra_list_scrollbar_default, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);

    //Write codes INPUT 2
    lv_obj_t * scr_input_config_tabview_intput_tab_2_label = lv_label_create(ui->scr_input_config_tabview_intput_tab_2);
    lv_label_set_text(scr_input_config_tabview_intput_tab_2_label, "");

    //Write codes scr_input_config_cont_input2
    ui->scr_input_config_cont_input2 = lv_obj_create(ui->scr_input_config_tabview_intput_tab_2);
    lv_obj_set_pos(ui->scr_input_config_cont_input2, 30, 0);
    lv_obj_set_size(ui->scr_input_config_cont_input2, 1100, 450);
    lv_obj_set_scrollbar_mode(ui->scr_input_config_cont_input2, LV_SCROLLBAR_MODE_OFF);

    //Write style for scr_input_config_cont_input2, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scr_input_config_cont_input2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_input_config_cont_input2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scr_input_config_cont_input2, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scr_input_config_cont_input2, lv_color_hex(0x2b2f3a), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scr_input_config_cont_input2, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scr_input_config_cont_input2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scr_input_config_cont_input2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scr_input_config_cont_input2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scr_input_config_cont_input2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_input_config_cont_input2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scr_input_config_line_38
    ui->scr_input_config_line_38 = lv_line_create(ui->scr_input_config_cont_input2);
    lv_obj_set_pos(ui->scr_input_config_line_38, 0, 40);
    lv_obj_set_size(ui->scr_input_config_line_38, 1100, 2);
    static lv_point_precise_t scr_input_config_line_38[] = {{0, 0},{1100, 0}};
    lv_line_set_points(ui->scr_input_config_line_38, scr_input_config_line_38, 2);

    //Write style for scr_input_config_line_38, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_line_width(ui->scr_input_config_line_38, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_color(ui->scr_input_config_line_38, lv_color_hex(0x757575), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_opa(ui->scr_input_config_line_38, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_rounded(ui->scr_input_config_line_38, true, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scr_input_config_label_ip2_trigger
    ui->scr_input_config_label_ip2_trigger = lv_label_create(ui->scr_input_config_cont_input2);
    lv_obj_set_pos(ui->scr_input_config_label_ip2_trigger, 143, 247);
    lv_obj_set_size(ui->scr_input_config_label_ip2_trigger, 209, 39);
    lv_label_set_text(ui->scr_input_config_label_ip2_trigger, "Trigger Type");
    lv_label_set_long_mode(ui->scr_input_config_label_ip2_trigger, LV_LABEL_LONG_WRAP);

    //Write style for scr_input_config_label_ip2_trigger, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scr_input_config_label_ip2_trigger, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_input_config_label_ip2_trigger, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scr_input_config_label_ip2_trigger, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scr_input_config_label_ip2_trigger, &lv_font_NotoSans_Bold_30, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scr_input_config_label_ip2_trigger, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->scr_input_config_label_ip2_trigger, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->scr_input_config_label_ip2_trigger, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scr_input_config_label_ip2_trigger, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scr_input_config_label_ip2_trigger, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scr_input_config_label_ip2_trigger, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scr_input_config_label_ip2_trigger, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scr_input_config_label_ip2_trigger, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scr_input_config_label_ip2_trigger, 10, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_input_config_label_ip2_trigger, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scr_input_config_ddlist_ip2_trigger
    ui->scr_input_config_ddlist_ip2_trigger = lv_dropdown_create(ui->scr_input_config_cont_input2);
    lv_obj_set_pos(ui->scr_input_config_ddlist_ip2_trigger, 448, 238);
    lv_obj_set_size(ui->scr_input_config_ddlist_ip2_trigger, 450, 50);
    lv_dropdown_set_options(ui->scr_input_config_ddlist_ip2_trigger, "Rising Edge\nFalling Edge\nLevel High\nLevel Low");

    //Write style for scr_input_config_ddlist_ip2_trigger, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_text_color(ui->scr_input_config_ddlist_ip2_trigger, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scr_input_config_ddlist_ip2_trigger, &lv_font_NotoSans_Regular_30, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scr_input_config_ddlist_ip2_trigger, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->scr_input_config_ddlist_ip2_trigger, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scr_input_config_ddlist_ip2_trigger, 8, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scr_input_config_ddlist_ip2_trigger, 20, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scr_input_config_ddlist_ip2_trigger, 20, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_input_config_ddlist_ip2_trigger, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scr_input_config_ddlist_ip2_trigger, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scr_input_config_ddlist_ip2_trigger, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scr_input_config_ddlist_ip2_trigger, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_input_config_ddlist_ip2_trigger, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style for scr_input_config_ddlist_ip2_trigger, Part: LV_PART_MAIN, State: LV_STATE_CHECKED.
    lv_obj_set_style_text_color(ui->scr_input_config_ddlist_ip2_trigger, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_text_font(ui->scr_input_config_ddlist_ip2_trigger, &lv_font_NotoSans_Regular_30, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_text_opa(ui->scr_input_config_ddlist_ip2_trigger, 255, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_border_width(ui->scr_input_config_ddlist_ip2_trigger, 0, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_pad_top(ui->scr_input_config_ddlist_ip2_trigger, 8, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_pad_left(ui->scr_input_config_ddlist_ip2_trigger, 20, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_pad_right(ui->scr_input_config_ddlist_ip2_trigger, 20, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_radius(ui->scr_input_config_ddlist_ip2_trigger, 5, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_bg_opa(ui->scr_input_config_ddlist_ip2_trigger, 255, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_bg_color(ui->scr_input_config_ddlist_ip2_trigger, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_bg_grad_dir(ui->scr_input_config_ddlist_ip2_trigger, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_shadow_width(ui->scr_input_config_ddlist_ip2_trigger, 0, LV_PART_MAIN|LV_STATE_CHECKED);

    //Write style for scr_input_config_ddlist_ip2_trigger, Part: LV_PART_MAIN, State: LV_STATE_FOCUSED.
    lv_obj_set_style_text_color(ui->scr_input_config_ddlist_ip2_trigger, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_text_font(ui->scr_input_config_ddlist_ip2_trigger, &lv_font_NotoSans_Regular_30, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_text_opa(ui->scr_input_config_ddlist_ip2_trigger, 255, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_border_width(ui->scr_input_config_ddlist_ip2_trigger, 0, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_pad_top(ui->scr_input_config_ddlist_ip2_trigger, 8, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_pad_left(ui->scr_input_config_ddlist_ip2_trigger, 20, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_pad_right(ui->scr_input_config_ddlist_ip2_trigger, 20, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_radius(ui->scr_input_config_ddlist_ip2_trigger, 5, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_bg_opa(ui->scr_input_config_ddlist_ip2_trigger, 255, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_bg_color(ui->scr_input_config_ddlist_ip2_trigger, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_bg_grad_dir(ui->scr_input_config_ddlist_ip2_trigger, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_shadow_width(ui->scr_input_config_ddlist_ip2_trigger, 0, LV_PART_MAIN|LV_STATE_FOCUSED);

    //Write style state: LV_STATE_CHECKED for &style_scr_input_config_ddlist_ip2_trigger_extra_list_selected_checked
    static lv_style_t style_scr_input_config_ddlist_ip2_trigger_extra_list_selected_checked;
    ui_init_style(&style_scr_input_config_ddlist_ip2_trigger_extra_list_selected_checked);

    lv_style_set_border_width(&style_scr_input_config_ddlist_ip2_trigger_extra_list_selected_checked, 0);
    lv_style_set_radius(&style_scr_input_config_ddlist_ip2_trigger_extra_list_selected_checked, 5);
    lv_style_set_bg_opa(&style_scr_input_config_ddlist_ip2_trigger_extra_list_selected_checked, 255);
    lv_style_set_bg_color(&style_scr_input_config_ddlist_ip2_trigger_extra_list_selected_checked, lv_color_hex(0x00a1b5));
    lv_style_set_bg_grad_dir(&style_scr_input_config_ddlist_ip2_trigger_extra_list_selected_checked, LV_GRAD_DIR_NONE);
    lv_obj_add_style(lv_dropdown_get_list(ui->scr_input_config_ddlist_ip2_trigger), &style_scr_input_config_ddlist_ip2_trigger_extra_list_selected_checked, LV_PART_SELECTED|LV_STATE_CHECKED);

    //Write style state: LV_STATE_DEFAULT for &style_scr_input_config_ddlist_ip2_trigger_extra_list_main_default
    static lv_style_t style_scr_input_config_ddlist_ip2_trigger_extra_list_main_default;
    ui_init_style(&style_scr_input_config_ddlist_ip2_trigger_extra_list_main_default);

    lv_style_set_max_height(&style_scr_input_config_ddlist_ip2_trigger_extra_list_main_default, 90);
    lv_style_set_text_color(&style_scr_input_config_ddlist_ip2_trigger_extra_list_main_default, lv_color_hex(0x000000));
    lv_style_set_text_font(&style_scr_input_config_ddlist_ip2_trigger_extra_list_main_default, &lv_font_NotoSans_Regular_30);
    lv_style_set_text_opa(&style_scr_input_config_ddlist_ip2_trigger_extra_list_main_default, 255);
    lv_style_set_border_width(&style_scr_input_config_ddlist_ip2_trigger_extra_list_main_default, 0);
    lv_style_set_radius(&style_scr_input_config_ddlist_ip2_trigger_extra_list_main_default, 5);
    lv_style_set_bg_opa(&style_scr_input_config_ddlist_ip2_trigger_extra_list_main_default, 255);
    lv_style_set_bg_color(&style_scr_input_config_ddlist_ip2_trigger_extra_list_main_default, lv_color_hex(0xffffff));
    lv_style_set_bg_grad_dir(&style_scr_input_config_ddlist_ip2_trigger_extra_list_main_default, LV_GRAD_DIR_NONE);
    lv_obj_add_style(lv_dropdown_get_list(ui->scr_input_config_ddlist_ip2_trigger), &style_scr_input_config_ddlist_ip2_trigger_extra_list_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style state: LV_STATE_DEFAULT for &style_scr_input_config_ddlist_ip2_trigger_extra_list_scrollbar_default
    static lv_style_t style_scr_input_config_ddlist_ip2_trigger_extra_list_scrollbar_default;
    ui_init_style(&style_scr_input_config_ddlist_ip2_trigger_extra_list_scrollbar_default);

    lv_style_set_radius(&style_scr_input_config_ddlist_ip2_trigger_extra_list_scrollbar_default, 3);
    lv_style_set_bg_opa(&style_scr_input_config_ddlist_ip2_trigger_extra_list_scrollbar_default, 255);
    lv_style_set_bg_color(&style_scr_input_config_ddlist_ip2_trigger_extra_list_scrollbar_default, lv_color_hex(0x00ff00));
    lv_style_set_bg_grad_dir(&style_scr_input_config_ddlist_ip2_trigger_extra_list_scrollbar_default, LV_GRAD_DIR_NONE);
    lv_obj_add_style(lv_dropdown_get_list(ui->scr_input_config_ddlist_ip2_trigger), &style_scr_input_config_ddlist_ip2_trigger_extra_list_scrollbar_default, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);

    //Write codes scr_input_config_lbl_ip2_function
    ui->scr_input_config_lbl_ip2_function = lv_label_create(ui->scr_input_config_cont_input2);
    lv_obj_set_pos(ui->scr_input_config_lbl_ip2_function, 143, 68);
    lv_obj_set_size(ui->scr_input_config_lbl_ip2_function, 157, 32);
    lv_label_set_text(ui->scr_input_config_lbl_ip2_function, "Function");
    lv_label_set_long_mode(ui->scr_input_config_lbl_ip2_function, LV_LABEL_LONG_WRAP);

    //Write style for scr_input_config_lbl_ip2_function, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scr_input_config_lbl_ip2_function, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_input_config_lbl_ip2_function, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scr_input_config_lbl_ip2_function, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scr_input_config_lbl_ip2_function, &lv_font_NotoSans_Bold_30, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scr_input_config_lbl_ip2_function, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->scr_input_config_lbl_ip2_function, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->scr_input_config_lbl_ip2_function, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scr_input_config_lbl_ip2_function, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scr_input_config_lbl_ip2_function, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scr_input_config_lbl_ip2_function, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scr_input_config_lbl_ip2_function, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scr_input_config_lbl_ip2_function, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scr_input_config_lbl_ip2_function, 10, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_input_config_lbl_ip2_function, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scr_input_config_lbl_ip2
    ui->scr_input_config_lbl_ip2 = lv_label_create(ui->scr_input_config_cont_input2);
    lv_obj_set_pos(ui->scr_input_config_lbl_ip2, 0, 0);
    lv_obj_set_size(ui->scr_input_config_lbl_ip2, 381, 35);
    lv_label_set_text_static(ui->scr_input_config_lbl_ip2, "Selected Input: INPUT 2");
    lv_label_set_long_mode(ui->scr_input_config_lbl_ip2, LV_LABEL_LONG_WRAP);

    //Write style for scr_input_config_lbl_ip2, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scr_input_config_lbl_ip2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_input_config_lbl_ip2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scr_input_config_lbl_ip2, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scr_input_config_lbl_ip2, &lv_font_NotoSans_Bold_30, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scr_input_config_lbl_ip2, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->scr_input_config_lbl_ip2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->scr_input_config_lbl_ip2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scr_input_config_lbl_ip2, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scr_input_config_lbl_ip2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scr_input_config_lbl_ip2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scr_input_config_lbl_ip2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scr_input_config_lbl_ip2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scr_input_config_lbl_ip2, 10, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_input_config_lbl_ip2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scr_input_config_lbl_ip2_livestatus
    ui->scr_input_config_lbl_ip2_livestatus = lv_label_create(ui->scr_input_config_cont_input2);
    lv_obj_set_pos(ui->scr_input_config_lbl_ip2_livestatus, 143, 335);
    lv_obj_set_size(ui->scr_input_config_lbl_ip2_livestatus, 220, 32);
    lv_label_set_text(ui->scr_input_config_lbl_ip2_livestatus, "Live Status");
    lv_label_set_long_mode(ui->scr_input_config_lbl_ip2_livestatus, LV_LABEL_LONG_WRAP);

    //Write style for scr_input_config_lbl_ip2_livestatus, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scr_input_config_lbl_ip2_livestatus, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_input_config_lbl_ip2_livestatus, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scr_input_config_lbl_ip2_livestatus, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scr_input_config_lbl_ip2_livestatus, &lv_font_NotoSans_Bold_30, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scr_input_config_lbl_ip2_livestatus, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->scr_input_config_lbl_ip2_livestatus, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->scr_input_config_lbl_ip2_livestatus, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scr_input_config_lbl_ip2_livestatus, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scr_input_config_lbl_ip2_livestatus, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scr_input_config_lbl_ip2_livestatus, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scr_input_config_lbl_ip2_livestatus, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scr_input_config_lbl_ip2_livestatus, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scr_input_config_lbl_ip2_livestatus, 10, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_input_config_lbl_ip2_livestatus, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scr_input_config_lbl_ip2_status
    ui->scr_input_config_lbl_ip2_status = lv_label_create(ui->scr_input_config_cont_input2);
    lv_obj_set_pos(ui->scr_input_config_lbl_ip2_status, 478, 335);
    lv_obj_set_size(ui->scr_input_config_lbl_ip2_status, 114, 32);
    lv_label_set_text(ui->scr_input_config_lbl_ip2_status, "LOW");
    lv_label_set_long_mode(ui->scr_input_config_lbl_ip2_status, LV_LABEL_LONG_WRAP);

    //Write style for scr_input_config_lbl_ip2_status, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scr_input_config_lbl_ip2_status, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_input_config_lbl_ip2_status, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scr_input_config_lbl_ip2_status, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scr_input_config_lbl_ip2_status, &lv_font_NotoSans_Bold_30, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scr_input_config_lbl_ip2_status, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->scr_input_config_lbl_ip2_status, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->scr_input_config_lbl_ip2_status, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scr_input_config_lbl_ip2_status, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scr_input_config_lbl_ip2_status, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scr_input_config_lbl_ip2_status, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scr_input_config_lbl_ip2_status, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scr_input_config_lbl_ip2_status, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scr_input_config_lbl_ip2_status, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_input_config_lbl_ip2_status, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scr_input_config_led_ip2_status
    ui->scr_input_config_led_ip2_status = lv_led_create(ui->scr_input_config_cont_input2);
    lv_obj_set_pos(ui->scr_input_config_led_ip2_status, 448, 341);
    lv_obj_set_size(ui->scr_input_config_led_ip2_status, 20, 20);
    lv_led_set_brightness(ui->scr_input_config_led_ip2_status, 255);
    lv_led_set_color(ui->scr_input_config_led_ip2_status, lv_color_hex(0xfd0026));

    //Write codes scr_input_config_line_37
    ui->scr_input_config_line_37 = lv_line_create(ui->scr_input_config_cont_input2);
    lv_obj_set_pos(ui->scr_input_config_line_37, 143, 126);
    lv_obj_set_size(ui->scr_input_config_line_37, 850, 2);
    static lv_point_precise_t scr_input_config_line_37[] = {{0, 0},{1100, 0}};
    lv_line_set_points(ui->scr_input_config_line_37, scr_input_config_line_37, 2);

    //Write style for scr_input_config_line_37, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_line_width(ui->scr_input_config_line_37, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_color(ui->scr_input_config_line_37, lv_color_hex(0x757575), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_opa(ui->scr_input_config_line_37, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_rounded(ui->scr_input_config_line_37, true, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scr_input_config_line_36
    ui->scr_input_config_line_36 = lv_line_create(ui->scr_input_config_cont_input2);
    lv_obj_set_pos(ui->scr_input_config_line_36, 143, 306);
    lv_obj_set_size(ui->scr_input_config_line_36, 850, 2);
    static lv_point_precise_t scr_input_config_line_36[] = {{0, 0},{1100, 0}};
    lv_line_set_points(ui->scr_input_config_line_36, scr_input_config_line_36, 2);

    //Write style for scr_input_config_line_36, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_line_width(ui->scr_input_config_line_36, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_color(ui->scr_input_config_line_36, lv_color_hex(0x757575), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_opa(ui->scr_input_config_line_36, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_rounded(ui->scr_input_config_line_36, true, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scr_input_config_ddlist_ip2_enable
    ui->scr_input_config_ddlist_ip2_enable = lv_dropdown_create(ui->scr_input_config_cont_input2);
    lv_obj_set_pos(ui->scr_input_config_ddlist_ip2_enable, 447, 145);
    lv_obj_set_size(ui->scr_input_config_ddlist_ip2_enable, 450, 50);
    lv_dropdown_set_options(ui->scr_input_config_ddlist_ip2_enable, "No\nYes");

    //Write style for scr_input_config_ddlist_ip2_enable, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_text_color(ui->scr_input_config_ddlist_ip2_enable, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scr_input_config_ddlist_ip2_enable, &lv_font_NotoSans_Regular_30, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scr_input_config_ddlist_ip2_enable, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->scr_input_config_ddlist_ip2_enable, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scr_input_config_ddlist_ip2_enable, 8, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scr_input_config_ddlist_ip2_enable, 20, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scr_input_config_ddlist_ip2_enable, 20, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_input_config_ddlist_ip2_enable, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scr_input_config_ddlist_ip2_enable, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scr_input_config_ddlist_ip2_enable, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scr_input_config_ddlist_ip2_enable, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_input_config_ddlist_ip2_enable, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style for scr_input_config_ddlist_ip2_enable, Part: LV_PART_MAIN, State: LV_STATE_CHECKED.
    lv_obj_set_style_text_color(ui->scr_input_config_ddlist_ip2_enable, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_text_font(ui->scr_input_config_ddlist_ip2_enable, &lv_font_NotoSans_Regular_30, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_text_opa(ui->scr_input_config_ddlist_ip2_enable, 255, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_border_width(ui->scr_input_config_ddlist_ip2_enable, 0, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_pad_top(ui->scr_input_config_ddlist_ip2_enable, 8, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_pad_left(ui->scr_input_config_ddlist_ip2_enable, 6, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_pad_right(ui->scr_input_config_ddlist_ip2_enable, 6, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_radius(ui->scr_input_config_ddlist_ip2_enable, 5, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_bg_opa(ui->scr_input_config_ddlist_ip2_enable, 255, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_bg_color(ui->scr_input_config_ddlist_ip2_enable, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_bg_grad_dir(ui->scr_input_config_ddlist_ip2_enable, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_shadow_width(ui->scr_input_config_ddlist_ip2_enable, 0, LV_PART_MAIN|LV_STATE_CHECKED);

    //Write style for scr_input_config_ddlist_ip2_enable, Part: LV_PART_MAIN, State: LV_STATE_FOCUSED.
    lv_obj_set_style_text_color(ui->scr_input_config_ddlist_ip2_enable, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_text_font(ui->scr_input_config_ddlist_ip2_enable, &lv_font_NotoSans_Regular_30, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_text_opa(ui->scr_input_config_ddlist_ip2_enable, 255, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_border_width(ui->scr_input_config_ddlist_ip2_enable, 0, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_pad_top(ui->scr_input_config_ddlist_ip2_enable, 8, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_pad_left(ui->scr_input_config_ddlist_ip2_enable, 20, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_pad_right(ui->scr_input_config_ddlist_ip2_enable, 20, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_radius(ui->scr_input_config_ddlist_ip2_enable, 5, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_bg_opa(ui->scr_input_config_ddlist_ip2_enable, 255, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_bg_color(ui->scr_input_config_ddlist_ip2_enable, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_bg_grad_dir(ui->scr_input_config_ddlist_ip2_enable, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_shadow_width(ui->scr_input_config_ddlist_ip2_enable, 0, LV_PART_MAIN|LV_STATE_FOCUSED);

    //Write style state: LV_STATE_CHECKED for &style_scr_input_config_ddlist_ip2_enable_extra_list_selected_checked
    static lv_style_t style_scr_input_config_ddlist_ip2_enable_extra_list_selected_checked;
    ui_init_style(&style_scr_input_config_ddlist_ip2_enable_extra_list_selected_checked);

    lv_style_set_border_width(&style_scr_input_config_ddlist_ip2_enable_extra_list_selected_checked, 0);
    lv_style_set_radius(&style_scr_input_config_ddlist_ip2_enable_extra_list_selected_checked, 5);
    lv_style_set_bg_opa(&style_scr_input_config_ddlist_ip2_enable_extra_list_selected_checked, 255);
    lv_style_set_bg_color(&style_scr_input_config_ddlist_ip2_enable_extra_list_selected_checked, lv_color_hex(0x00a1b5));
    lv_style_set_bg_grad_dir(&style_scr_input_config_ddlist_ip2_enable_extra_list_selected_checked, LV_GRAD_DIR_NONE);
    lv_obj_add_style(lv_dropdown_get_list(ui->scr_input_config_ddlist_ip2_enable), &style_scr_input_config_ddlist_ip2_enable_extra_list_selected_checked, LV_PART_SELECTED|LV_STATE_CHECKED);

    //Write style state: LV_STATE_DEFAULT for &style_scr_input_config_ddlist_ip2_enable_extra_list_main_default
    static lv_style_t style_scr_input_config_ddlist_ip2_enable_extra_list_main_default;
    ui_init_style(&style_scr_input_config_ddlist_ip2_enable_extra_list_main_default);

    lv_style_set_max_height(&style_scr_input_config_ddlist_ip2_enable_extra_list_main_default, 90);
    lv_style_set_text_color(&style_scr_input_config_ddlist_ip2_enable_extra_list_main_default, lv_color_hex(0x0D3055));
    lv_style_set_text_font(&style_scr_input_config_ddlist_ip2_enable_extra_list_main_default, &lv_font_NotoSans_Regular_30);
    lv_style_set_text_opa(&style_scr_input_config_ddlist_ip2_enable_extra_list_main_default, 255);
    lv_style_set_border_width(&style_scr_input_config_ddlist_ip2_enable_extra_list_main_default, 0);
    lv_style_set_radius(&style_scr_input_config_ddlist_ip2_enable_extra_list_main_default, 5);
    lv_style_set_bg_opa(&style_scr_input_config_ddlist_ip2_enable_extra_list_main_default, 255);
    lv_style_set_bg_color(&style_scr_input_config_ddlist_ip2_enable_extra_list_main_default, lv_color_hex(0xffffff));
    lv_style_set_bg_grad_dir(&style_scr_input_config_ddlist_ip2_enable_extra_list_main_default, LV_GRAD_DIR_NONE);
    lv_obj_add_style(lv_dropdown_get_list(ui->scr_input_config_ddlist_ip2_enable), &style_scr_input_config_ddlist_ip2_enable_extra_list_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style state: LV_STATE_DEFAULT for &style_scr_input_config_ddlist_ip2_enable_extra_list_scrollbar_default
    static lv_style_t style_scr_input_config_ddlist_ip2_enable_extra_list_scrollbar_default;
    ui_init_style(&style_scr_input_config_ddlist_ip2_enable_extra_list_scrollbar_default);

    lv_style_set_radius(&style_scr_input_config_ddlist_ip2_enable_extra_list_scrollbar_default, 3);
    lv_style_set_bg_opa(&style_scr_input_config_ddlist_ip2_enable_extra_list_scrollbar_default, 255);
    lv_style_set_bg_color(&style_scr_input_config_ddlist_ip2_enable_extra_list_scrollbar_default, lv_color_hex(0x414141));
    lv_style_set_bg_grad_dir(&style_scr_input_config_ddlist_ip2_enable_extra_list_scrollbar_default, LV_GRAD_DIR_NONE);
    lv_obj_add_style(lv_dropdown_get_list(ui->scr_input_config_ddlist_ip2_enable), &style_scr_input_config_ddlist_ip2_enable_extra_list_scrollbar_default, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);

    //Write codes scr_input_config_label_ip2_enable
    ui->scr_input_config_label_ip2_enable = lv_label_create(ui->scr_input_config_cont_input2);
    lv_obj_set_pos(ui->scr_input_config_label_ip2_enable, 143, 156);
    lv_obj_set_size(ui->scr_input_config_label_ip2_enable, 146, 32);
    lv_label_set_text(ui->scr_input_config_label_ip2_enable, "Enable");
    lv_label_set_long_mode(ui->scr_input_config_label_ip2_enable, LV_LABEL_LONG_WRAP);

    //Write style for scr_input_config_label_ip2_enable, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scr_input_config_label_ip2_enable, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_input_config_label_ip2_enable, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scr_input_config_label_ip2_enable, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scr_input_config_label_ip2_enable, &lv_font_NotoSans_Bold_30, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scr_input_config_label_ip2_enable, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->scr_input_config_label_ip2_enable, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->scr_input_config_label_ip2_enable, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scr_input_config_label_ip2_enable, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scr_input_config_label_ip2_enable, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scr_input_config_label_ip2_enable, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scr_input_config_label_ip2_enable, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scr_input_config_label_ip2_enable, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scr_input_config_label_ip2_enable, 10, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_input_config_label_ip2_enable, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scr_input_config_line_35
    ui->scr_input_config_line_35 = lv_line_create(ui->scr_input_config_cont_input2);
    lv_obj_set_pos(ui->scr_input_config_line_35, 143, 216);
    lv_obj_set_size(ui->scr_input_config_line_35, 850, 2);
    static lv_point_precise_t scr_input_config_line_35[] = {{0, 0},{1100, 0}};
    lv_line_set_points(ui->scr_input_config_line_35, scr_input_config_line_35, 2);

    //Write style for scr_input_config_line_35, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_line_width(ui->scr_input_config_line_35, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_color(ui->scr_input_config_line_35, lv_color_hex(0x757575), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_opa(ui->scr_input_config_line_35, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_rounded(ui->scr_input_config_line_35, true, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scr_input_config_line_34
    ui->scr_input_config_line_34 = lv_line_create(ui->scr_input_config_cont_input2);
    lv_obj_set_pos(ui->scr_input_config_line_34, 143, 380);
    lv_obj_set_size(ui->scr_input_config_line_34, 850, 2);
    static lv_point_precise_t scr_input_config_line_34[] = {{0, 0},{1100, 0}};
    lv_line_set_points(ui->scr_input_config_line_34, scr_input_config_line_34, 2);

    //Write style for scr_input_config_line_34, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_line_width(ui->scr_input_config_line_34, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_color(ui->scr_input_config_line_34, lv_color_hex(0x757575), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_opa(ui->scr_input_config_line_34, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_rounded(ui->scr_input_config_line_34, true, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scr_input_config_ddlist_ip2_function
    ui->scr_input_config_ddlist_ip2_function = lv_dropdown_create(ui->scr_input_config_cont_input2);
    lv_obj_set_pos(ui->scr_input_config_ddlist_ip2_function, 447, 59);
    lv_obj_set_size(ui->scr_input_config_ddlist_ip2_function, 450, 50);
    lv_dropdown_set_options(ui->scr_input_config_ddlist_ip2_function, "Start\nStop\nError\nCount Product\nNone");

    //Write style for scr_input_config_ddlist_ip2_function, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_text_color(ui->scr_input_config_ddlist_ip2_function, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scr_input_config_ddlist_ip2_function, &lv_font_NotoSans_Regular_30, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scr_input_config_ddlist_ip2_function, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->scr_input_config_ddlist_ip2_function, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scr_input_config_ddlist_ip2_function, 8, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scr_input_config_ddlist_ip2_function, 20, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scr_input_config_ddlist_ip2_function, 20, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_input_config_ddlist_ip2_function, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scr_input_config_ddlist_ip2_function, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scr_input_config_ddlist_ip2_function, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scr_input_config_ddlist_ip2_function, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_input_config_ddlist_ip2_function, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style for scr_input_config_ddlist_ip2_function, Part: LV_PART_MAIN, State: LV_STATE_CHECKED.
    lv_obj_set_style_text_color(ui->scr_input_config_ddlist_ip2_function, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_text_font(ui->scr_input_config_ddlist_ip2_function, &lv_font_NotoSans_Regular_30, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_text_opa(ui->scr_input_config_ddlist_ip2_function, 255, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_border_width(ui->scr_input_config_ddlist_ip2_function, 0, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_pad_top(ui->scr_input_config_ddlist_ip2_function, 8, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_pad_left(ui->scr_input_config_ddlist_ip2_function, 6, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_pad_right(ui->scr_input_config_ddlist_ip2_function, 6, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_radius(ui->scr_input_config_ddlist_ip2_function, 5, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_bg_opa(ui->scr_input_config_ddlist_ip2_function, 255, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_bg_color(ui->scr_input_config_ddlist_ip2_function, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_bg_grad_dir(ui->scr_input_config_ddlist_ip2_function, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_shadow_width(ui->scr_input_config_ddlist_ip2_function, 0, LV_PART_MAIN|LV_STATE_CHECKED);

    //Write style for scr_input_config_ddlist_ip2_function, Part: LV_PART_MAIN, State: LV_STATE_FOCUSED.
    lv_obj_set_style_text_color(ui->scr_input_config_ddlist_ip2_function, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_text_font(ui->scr_input_config_ddlist_ip2_function, &lv_font_NotoSans_Regular_30, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_text_opa(ui->scr_input_config_ddlist_ip2_function, 255, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_border_width(ui->scr_input_config_ddlist_ip2_function, 0, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_pad_top(ui->scr_input_config_ddlist_ip2_function, 8, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_pad_left(ui->scr_input_config_ddlist_ip2_function, 20, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_pad_right(ui->scr_input_config_ddlist_ip2_function, 20, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_radius(ui->scr_input_config_ddlist_ip2_function, 5, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_bg_opa(ui->scr_input_config_ddlist_ip2_function, 255, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_bg_color(ui->scr_input_config_ddlist_ip2_function, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_bg_grad_dir(ui->scr_input_config_ddlist_ip2_function, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_shadow_width(ui->scr_input_config_ddlist_ip2_function, 0, LV_PART_MAIN|LV_STATE_FOCUSED);

    //Write style state: LV_STATE_CHECKED for &style_scr_input_config_ddlist_ip2_function_extra_list_selected_checked
    static lv_style_t style_scr_input_config_ddlist_ip2_function_extra_list_selected_checked;
    ui_init_style(&style_scr_input_config_ddlist_ip2_function_extra_list_selected_checked);

    lv_style_set_border_width(&style_scr_input_config_ddlist_ip2_function_extra_list_selected_checked, 0);
    lv_style_set_radius(&style_scr_input_config_ddlist_ip2_function_extra_list_selected_checked, 5);
    lv_style_set_bg_opa(&style_scr_input_config_ddlist_ip2_function_extra_list_selected_checked, 255);
    lv_style_set_bg_color(&style_scr_input_config_ddlist_ip2_function_extra_list_selected_checked, lv_color_hex(0x00a1b5));
    lv_style_set_bg_grad_dir(&style_scr_input_config_ddlist_ip2_function_extra_list_selected_checked, LV_GRAD_DIR_NONE);
    lv_obj_add_style(lv_dropdown_get_list(ui->scr_input_config_ddlist_ip2_function), &style_scr_input_config_ddlist_ip2_function_extra_list_selected_checked, LV_PART_SELECTED|LV_STATE_CHECKED);

    //Write style state: LV_STATE_DEFAULT for &style_scr_input_config_ddlist_ip2_function_extra_list_main_default
    static lv_style_t style_scr_input_config_ddlist_ip2_function_extra_list_main_default;
    ui_init_style(&style_scr_input_config_ddlist_ip2_function_extra_list_main_default);

    lv_style_set_max_height(&style_scr_input_config_ddlist_ip2_function_extra_list_main_default, 90);
    lv_style_set_text_color(&style_scr_input_config_ddlist_ip2_function_extra_list_main_default, lv_color_hex(0x0D3055));
    lv_style_set_text_font(&style_scr_input_config_ddlist_ip2_function_extra_list_main_default, &lv_font_NotoSans_Regular_30);
    lv_style_set_text_opa(&style_scr_input_config_ddlist_ip2_function_extra_list_main_default, 255);
    lv_style_set_border_width(&style_scr_input_config_ddlist_ip2_function_extra_list_main_default, 0);
    lv_style_set_radius(&style_scr_input_config_ddlist_ip2_function_extra_list_main_default, 5);
    lv_style_set_bg_opa(&style_scr_input_config_ddlist_ip2_function_extra_list_main_default, 255);
    lv_style_set_bg_color(&style_scr_input_config_ddlist_ip2_function_extra_list_main_default, lv_color_hex(0xffffff));
    lv_style_set_bg_grad_dir(&style_scr_input_config_ddlist_ip2_function_extra_list_main_default, LV_GRAD_DIR_NONE);
    lv_obj_add_style(lv_dropdown_get_list(ui->scr_input_config_ddlist_ip2_function), &style_scr_input_config_ddlist_ip2_function_extra_list_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style state: LV_STATE_DEFAULT for &style_scr_input_config_ddlist_ip2_function_extra_list_scrollbar_default
    static lv_style_t style_scr_input_config_ddlist_ip2_function_extra_list_scrollbar_default;
    ui_init_style(&style_scr_input_config_ddlist_ip2_function_extra_list_scrollbar_default);

    lv_style_set_radius(&style_scr_input_config_ddlist_ip2_function_extra_list_scrollbar_default, 3);
    lv_style_set_bg_opa(&style_scr_input_config_ddlist_ip2_function_extra_list_scrollbar_default, 255);
    lv_style_set_bg_color(&style_scr_input_config_ddlist_ip2_function_extra_list_scrollbar_default, lv_color_hex(0x414141));
    lv_style_set_bg_grad_dir(&style_scr_input_config_ddlist_ip2_function_extra_list_scrollbar_default, LV_GRAD_DIR_NONE);
    lv_obj_add_style(lv_dropdown_get_list(ui->scr_input_config_ddlist_ip2_function), &style_scr_input_config_ddlist_ip2_function_extra_list_scrollbar_default, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);

    //Write codes INPUT 3
    lv_obj_t * scr_input_config_tabview_intput_tab_3_label = lv_label_create(ui->scr_input_config_tabview_intput_tab_3);
    lv_label_set_text(scr_input_config_tabview_intput_tab_3_label, "");

    //Write codes scr_input_config_cont_input3
    ui->scr_input_config_cont_input3 = lv_obj_create(ui->scr_input_config_tabview_intput_tab_3);
    lv_obj_set_pos(ui->scr_input_config_cont_input3, 30, 0);
    lv_obj_set_size(ui->scr_input_config_cont_input3, 1100, 450);
    lv_obj_set_scrollbar_mode(ui->scr_input_config_cont_input3, LV_SCROLLBAR_MODE_OFF);

    //Write style for scr_input_config_cont_input3, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scr_input_config_cont_input3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_input_config_cont_input3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scr_input_config_cont_input3, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scr_input_config_cont_input3, lv_color_hex(0x2b2f3a), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scr_input_config_cont_input3, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scr_input_config_cont_input3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scr_input_config_cont_input3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scr_input_config_cont_input3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scr_input_config_cont_input3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_input_config_cont_input3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scr_input_config_line_43
    ui->scr_input_config_line_43 = lv_line_create(ui->scr_input_config_cont_input3);
    lv_obj_set_pos(ui->scr_input_config_line_43, 0, 40);
    lv_obj_set_size(ui->scr_input_config_line_43, 1100, 2);
    static lv_point_precise_t scr_input_config_line_43[] = {{0, 0},{1100, 0}};
    lv_line_set_points(ui->scr_input_config_line_43, scr_input_config_line_43, 2);

    //Write style for scr_input_config_line_43, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_line_width(ui->scr_input_config_line_43, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_color(ui->scr_input_config_line_43, lv_color_hex(0x757575), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_opa(ui->scr_input_config_line_43, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_rounded(ui->scr_input_config_line_43, true, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scr_input_config_lbl_ip3_trgger
    ui->scr_input_config_lbl_ip3_trgger = lv_label_create(ui->scr_input_config_cont_input3);
    lv_obj_set_pos(ui->scr_input_config_lbl_ip3_trgger, 143, 247);
    lv_obj_set_size(ui->scr_input_config_lbl_ip3_trgger, 209, 39);
    lv_label_set_text(ui->scr_input_config_lbl_ip3_trgger, "Trigger Type");
    lv_label_set_long_mode(ui->scr_input_config_lbl_ip3_trgger, LV_LABEL_LONG_WRAP);

    //Write style for scr_input_config_lbl_ip3_trgger, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scr_input_config_lbl_ip3_trgger, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_input_config_lbl_ip3_trgger, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scr_input_config_lbl_ip3_trgger, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scr_input_config_lbl_ip3_trgger, &lv_font_NotoSans_Bold_30, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scr_input_config_lbl_ip3_trgger, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->scr_input_config_lbl_ip3_trgger, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->scr_input_config_lbl_ip3_trgger, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scr_input_config_lbl_ip3_trgger, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scr_input_config_lbl_ip3_trgger, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scr_input_config_lbl_ip3_trgger, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scr_input_config_lbl_ip3_trgger, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scr_input_config_lbl_ip3_trgger, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scr_input_config_lbl_ip3_trgger, 10, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_input_config_lbl_ip3_trgger, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scr_input_config_ddlist_ip3_trigger
    ui->scr_input_config_ddlist_ip3_trigger = lv_dropdown_create(ui->scr_input_config_cont_input3);
    lv_obj_set_pos(ui->scr_input_config_ddlist_ip3_trigger, 448, 238);
    lv_obj_set_size(ui->scr_input_config_ddlist_ip3_trigger, 450, 50);
    lv_dropdown_set_options(ui->scr_input_config_ddlist_ip3_trigger, "Rising Edge\nFalling Edge\nLevel High\nLevel Low");

    //Write style for scr_input_config_ddlist_ip3_trigger, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_text_color(ui->scr_input_config_ddlist_ip3_trigger, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scr_input_config_ddlist_ip3_trigger, &lv_font_NotoSans_Regular_30, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scr_input_config_ddlist_ip3_trigger, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->scr_input_config_ddlist_ip3_trigger, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scr_input_config_ddlist_ip3_trigger, 8, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scr_input_config_ddlist_ip3_trigger, 20, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scr_input_config_ddlist_ip3_trigger, 20, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_input_config_ddlist_ip3_trigger, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scr_input_config_ddlist_ip3_trigger, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scr_input_config_ddlist_ip3_trigger, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scr_input_config_ddlist_ip3_trigger, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_input_config_ddlist_ip3_trigger, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style for scr_input_config_ddlist_ip3_trigger, Part: LV_PART_MAIN, State: LV_STATE_CHECKED.
    lv_obj_set_style_text_color(ui->scr_input_config_ddlist_ip3_trigger, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_text_font(ui->scr_input_config_ddlist_ip3_trigger, &lv_font_NotoSans_Regular_30, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_text_opa(ui->scr_input_config_ddlist_ip3_trigger, 255, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_border_width(ui->scr_input_config_ddlist_ip3_trigger, 0, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_pad_top(ui->scr_input_config_ddlist_ip3_trigger, 8, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_pad_left(ui->scr_input_config_ddlist_ip3_trigger, 20, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_pad_right(ui->scr_input_config_ddlist_ip3_trigger, 20, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_radius(ui->scr_input_config_ddlist_ip3_trigger, 5, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_bg_opa(ui->scr_input_config_ddlist_ip3_trigger, 255, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_bg_color(ui->scr_input_config_ddlist_ip3_trigger, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_bg_grad_dir(ui->scr_input_config_ddlist_ip3_trigger, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_shadow_width(ui->scr_input_config_ddlist_ip3_trigger, 0, LV_PART_MAIN|LV_STATE_CHECKED);

    //Write style for scr_input_config_ddlist_ip3_trigger, Part: LV_PART_MAIN, State: LV_STATE_FOCUSED.
    lv_obj_set_style_text_color(ui->scr_input_config_ddlist_ip3_trigger, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_text_font(ui->scr_input_config_ddlist_ip3_trigger, &lv_font_NotoSans_Regular_30, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_text_opa(ui->scr_input_config_ddlist_ip3_trigger, 255, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_border_width(ui->scr_input_config_ddlist_ip3_trigger, 0, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_pad_top(ui->scr_input_config_ddlist_ip3_trigger, 8, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_pad_left(ui->scr_input_config_ddlist_ip3_trigger, 20, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_pad_right(ui->scr_input_config_ddlist_ip3_trigger, 20, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_radius(ui->scr_input_config_ddlist_ip3_trigger, 5, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_bg_opa(ui->scr_input_config_ddlist_ip3_trigger, 255, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_bg_color(ui->scr_input_config_ddlist_ip3_trigger, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_bg_grad_dir(ui->scr_input_config_ddlist_ip3_trigger, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_shadow_width(ui->scr_input_config_ddlist_ip3_trigger, 0, LV_PART_MAIN|LV_STATE_FOCUSED);

    //Write style state: LV_STATE_CHECKED for &style_scr_input_config_ddlist_ip3_trigger_extra_list_selected_checked
    static lv_style_t style_scr_input_config_ddlist_ip3_trigger_extra_list_selected_checked;
    ui_init_style(&style_scr_input_config_ddlist_ip3_trigger_extra_list_selected_checked);

    lv_style_set_border_width(&style_scr_input_config_ddlist_ip3_trigger_extra_list_selected_checked, 0);
    lv_style_set_radius(&style_scr_input_config_ddlist_ip3_trigger_extra_list_selected_checked, 5);
    lv_style_set_bg_opa(&style_scr_input_config_ddlist_ip3_trigger_extra_list_selected_checked, 255);
    lv_style_set_bg_color(&style_scr_input_config_ddlist_ip3_trigger_extra_list_selected_checked, lv_color_hex(0x00a1b5));
    lv_style_set_bg_grad_dir(&style_scr_input_config_ddlist_ip3_trigger_extra_list_selected_checked, LV_GRAD_DIR_NONE);
    lv_obj_add_style(lv_dropdown_get_list(ui->scr_input_config_ddlist_ip3_trigger), &style_scr_input_config_ddlist_ip3_trigger_extra_list_selected_checked, LV_PART_SELECTED|LV_STATE_CHECKED);

    //Write style state: LV_STATE_DEFAULT for &style_scr_input_config_ddlist_ip3_trigger_extra_list_main_default
    static lv_style_t style_scr_input_config_ddlist_ip3_trigger_extra_list_main_default;
    ui_init_style(&style_scr_input_config_ddlist_ip3_trigger_extra_list_main_default);

    lv_style_set_max_height(&style_scr_input_config_ddlist_ip3_trigger_extra_list_main_default, 90);
    lv_style_set_text_color(&style_scr_input_config_ddlist_ip3_trigger_extra_list_main_default, lv_color_hex(0x000000));
    lv_style_set_text_font(&style_scr_input_config_ddlist_ip3_trigger_extra_list_main_default, &lv_font_NotoSans_Regular_30);
    lv_style_set_text_opa(&style_scr_input_config_ddlist_ip3_trigger_extra_list_main_default, 255);
    lv_style_set_border_width(&style_scr_input_config_ddlist_ip3_trigger_extra_list_main_default, 0);
    lv_style_set_radius(&style_scr_input_config_ddlist_ip3_trigger_extra_list_main_default, 5);
    lv_style_set_bg_opa(&style_scr_input_config_ddlist_ip3_trigger_extra_list_main_default, 255);
    lv_style_set_bg_color(&style_scr_input_config_ddlist_ip3_trigger_extra_list_main_default, lv_color_hex(0xffffff));
    lv_style_set_bg_grad_dir(&style_scr_input_config_ddlist_ip3_trigger_extra_list_main_default, LV_GRAD_DIR_NONE);
    lv_obj_add_style(lv_dropdown_get_list(ui->scr_input_config_ddlist_ip3_trigger), &style_scr_input_config_ddlist_ip3_trigger_extra_list_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style state: LV_STATE_DEFAULT for &style_scr_input_config_ddlist_ip3_trigger_extra_list_scrollbar_default
    static lv_style_t style_scr_input_config_ddlist_ip3_trigger_extra_list_scrollbar_default;
    ui_init_style(&style_scr_input_config_ddlist_ip3_trigger_extra_list_scrollbar_default);

    lv_style_set_radius(&style_scr_input_config_ddlist_ip3_trigger_extra_list_scrollbar_default, 3);
    lv_style_set_bg_opa(&style_scr_input_config_ddlist_ip3_trigger_extra_list_scrollbar_default, 255);
    lv_style_set_bg_color(&style_scr_input_config_ddlist_ip3_trigger_extra_list_scrollbar_default, lv_color_hex(0x00ff00));
    lv_style_set_bg_grad_dir(&style_scr_input_config_ddlist_ip3_trigger_extra_list_scrollbar_default, LV_GRAD_DIR_NONE);
    lv_obj_add_style(lv_dropdown_get_list(ui->scr_input_config_ddlist_ip3_trigger), &style_scr_input_config_ddlist_ip3_trigger_extra_list_scrollbar_default, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);

    //Write codes scr_input_config_lbl_ip3_function
    ui->scr_input_config_lbl_ip3_function = lv_label_create(ui->scr_input_config_cont_input3);
    lv_obj_set_pos(ui->scr_input_config_lbl_ip3_function, 143, 68);
    lv_obj_set_size(ui->scr_input_config_lbl_ip3_function, 157, 32);
    lv_label_set_text(ui->scr_input_config_lbl_ip3_function, "Function");
    lv_label_set_long_mode(ui->scr_input_config_lbl_ip3_function, LV_LABEL_LONG_WRAP);

    //Write style for scr_input_config_lbl_ip3_function, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scr_input_config_lbl_ip3_function, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_input_config_lbl_ip3_function, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scr_input_config_lbl_ip3_function, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scr_input_config_lbl_ip3_function, &lv_font_NotoSans_Bold_30, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scr_input_config_lbl_ip3_function, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->scr_input_config_lbl_ip3_function, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->scr_input_config_lbl_ip3_function, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scr_input_config_lbl_ip3_function, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scr_input_config_lbl_ip3_function, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scr_input_config_lbl_ip3_function, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scr_input_config_lbl_ip3_function, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scr_input_config_lbl_ip3_function, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scr_input_config_lbl_ip3_function, 10, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_input_config_lbl_ip3_function, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scr_input_config_lbl_ip3
    ui->scr_input_config_lbl_ip3 = lv_label_create(ui->scr_input_config_cont_input3);
    lv_obj_set_pos(ui->scr_input_config_lbl_ip3, 0, 0);
    lv_obj_set_size(ui->scr_input_config_lbl_ip3, 381, 35);
    lv_label_set_text_static(ui->scr_input_config_lbl_ip3, "Selected Input: INPUT 3");
    lv_label_set_long_mode(ui->scr_input_config_lbl_ip3, LV_LABEL_LONG_WRAP);

    //Write style for scr_input_config_lbl_ip3, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scr_input_config_lbl_ip3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_input_config_lbl_ip3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scr_input_config_lbl_ip3, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scr_input_config_lbl_ip3, &lv_font_NotoSans_Bold_30, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scr_input_config_lbl_ip3, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->scr_input_config_lbl_ip3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->scr_input_config_lbl_ip3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scr_input_config_lbl_ip3, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scr_input_config_lbl_ip3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scr_input_config_lbl_ip3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scr_input_config_lbl_ip3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scr_input_config_lbl_ip3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scr_input_config_lbl_ip3, 10, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_input_config_lbl_ip3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scr_input_config_lbl_ip3_livestatus
    ui->scr_input_config_lbl_ip3_livestatus = lv_label_create(ui->scr_input_config_cont_input3);
    lv_obj_set_pos(ui->scr_input_config_lbl_ip3_livestatus, 143, 335);
    lv_obj_set_size(ui->scr_input_config_lbl_ip3_livestatus, 220, 32);
    lv_label_set_text(ui->scr_input_config_lbl_ip3_livestatus, "Live Status");
    lv_label_set_long_mode(ui->scr_input_config_lbl_ip3_livestatus, LV_LABEL_LONG_WRAP);

    //Write style for scr_input_config_lbl_ip3_livestatus, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scr_input_config_lbl_ip3_livestatus, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_input_config_lbl_ip3_livestatus, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scr_input_config_lbl_ip3_livestatus, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scr_input_config_lbl_ip3_livestatus, &lv_font_NotoSans_Bold_30, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scr_input_config_lbl_ip3_livestatus, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->scr_input_config_lbl_ip3_livestatus, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->scr_input_config_lbl_ip3_livestatus, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scr_input_config_lbl_ip3_livestatus, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scr_input_config_lbl_ip3_livestatus, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scr_input_config_lbl_ip3_livestatus, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scr_input_config_lbl_ip3_livestatus, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scr_input_config_lbl_ip3_livestatus, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scr_input_config_lbl_ip3_livestatus, 10, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_input_config_lbl_ip3_livestatus, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scr_input_config_lbl_ip3_status
    ui->scr_input_config_lbl_ip3_status = lv_label_create(ui->scr_input_config_cont_input3);
    lv_obj_set_pos(ui->scr_input_config_lbl_ip3_status, 478, 335);
    lv_obj_set_size(ui->scr_input_config_lbl_ip3_status, 114, 32);
    lv_label_set_text(ui->scr_input_config_lbl_ip3_status, "LOW");
    lv_label_set_long_mode(ui->scr_input_config_lbl_ip3_status, LV_LABEL_LONG_WRAP);

    //Write style for scr_input_config_lbl_ip3_status, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scr_input_config_lbl_ip3_status, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_input_config_lbl_ip3_status, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scr_input_config_lbl_ip3_status, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scr_input_config_lbl_ip3_status, &lv_font_NotoSans_Bold_30, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scr_input_config_lbl_ip3_status, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->scr_input_config_lbl_ip3_status, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->scr_input_config_lbl_ip3_status, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scr_input_config_lbl_ip3_status, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scr_input_config_lbl_ip3_status, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scr_input_config_lbl_ip3_status, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scr_input_config_lbl_ip3_status, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scr_input_config_lbl_ip3_status, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scr_input_config_lbl_ip3_status, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_input_config_lbl_ip3_status, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scr_input_config_led_ip3_status
    ui->scr_input_config_led_ip3_status = lv_led_create(ui->scr_input_config_cont_input3);
    lv_obj_set_pos(ui->scr_input_config_led_ip3_status, 448, 341);
    lv_obj_set_size(ui->scr_input_config_led_ip3_status, 20, 20);
    lv_led_set_brightness(ui->scr_input_config_led_ip3_status, 255);
    lv_led_set_color(ui->scr_input_config_led_ip3_status, lv_color_hex(0xfd0026));

    //Write codes scr_input_config_line_42
    ui->scr_input_config_line_42 = lv_line_create(ui->scr_input_config_cont_input3);
    lv_obj_set_pos(ui->scr_input_config_line_42, 143, 126);
    lv_obj_set_size(ui->scr_input_config_line_42, 850, 2);
    static lv_point_precise_t scr_input_config_line_42[] = {{0, 0},{1100, 0}};
    lv_line_set_points(ui->scr_input_config_line_42, scr_input_config_line_42, 2);

    //Write style for scr_input_config_line_42, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_line_width(ui->scr_input_config_line_42, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_color(ui->scr_input_config_line_42, lv_color_hex(0x757575), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_opa(ui->scr_input_config_line_42, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_rounded(ui->scr_input_config_line_42, true, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scr_input_config_line_41
    ui->scr_input_config_line_41 = lv_line_create(ui->scr_input_config_cont_input3);
    lv_obj_set_pos(ui->scr_input_config_line_41, 143, 306);
    lv_obj_set_size(ui->scr_input_config_line_41, 850, 2);
    static lv_point_precise_t scr_input_config_line_41[] = {{0, 0},{1100, 0}};
    lv_line_set_points(ui->scr_input_config_line_41, scr_input_config_line_41, 2);

    //Write style for scr_input_config_line_41, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_line_width(ui->scr_input_config_line_41, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_color(ui->scr_input_config_line_41, lv_color_hex(0x757575), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_opa(ui->scr_input_config_line_41, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_rounded(ui->scr_input_config_line_41, true, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scr_input_config_ddlist_ip3_enable
    ui->scr_input_config_ddlist_ip3_enable = lv_dropdown_create(ui->scr_input_config_cont_input3);
    lv_obj_set_pos(ui->scr_input_config_ddlist_ip3_enable, 447, 145);
    lv_obj_set_size(ui->scr_input_config_ddlist_ip3_enable, 450, 50);
    lv_dropdown_set_options(ui->scr_input_config_ddlist_ip3_enable, "No\nYes");

    //Write style for scr_input_config_ddlist_ip3_enable, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_text_color(ui->scr_input_config_ddlist_ip3_enable, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scr_input_config_ddlist_ip3_enable, &lv_font_NotoSans_Regular_30, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scr_input_config_ddlist_ip3_enable, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->scr_input_config_ddlist_ip3_enable, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scr_input_config_ddlist_ip3_enable, 8, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scr_input_config_ddlist_ip3_enable, 20, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scr_input_config_ddlist_ip3_enable, 20, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_input_config_ddlist_ip3_enable, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scr_input_config_ddlist_ip3_enable, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scr_input_config_ddlist_ip3_enable, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scr_input_config_ddlist_ip3_enable, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_input_config_ddlist_ip3_enable, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style for scr_input_config_ddlist_ip3_enable, Part: LV_PART_MAIN, State: LV_STATE_CHECKED.
    lv_obj_set_style_text_color(ui->scr_input_config_ddlist_ip3_enable, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_text_font(ui->scr_input_config_ddlist_ip3_enable, &lv_font_NotoSans_Regular_30, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_text_opa(ui->scr_input_config_ddlist_ip3_enable, 255, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_border_width(ui->scr_input_config_ddlist_ip3_enable, 0, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_pad_top(ui->scr_input_config_ddlist_ip3_enable, 8, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_pad_left(ui->scr_input_config_ddlist_ip3_enable, 6, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_pad_right(ui->scr_input_config_ddlist_ip3_enable, 6, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_radius(ui->scr_input_config_ddlist_ip3_enable, 5, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_bg_opa(ui->scr_input_config_ddlist_ip3_enable, 255, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_bg_color(ui->scr_input_config_ddlist_ip3_enable, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_bg_grad_dir(ui->scr_input_config_ddlist_ip3_enable, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_shadow_width(ui->scr_input_config_ddlist_ip3_enable, 0, LV_PART_MAIN|LV_STATE_CHECKED);

    //Write style for scr_input_config_ddlist_ip3_enable, Part: LV_PART_MAIN, State: LV_STATE_FOCUSED.
    lv_obj_set_style_text_color(ui->scr_input_config_ddlist_ip3_enable, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_text_font(ui->scr_input_config_ddlist_ip3_enable, &lv_font_NotoSans_Regular_30, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_text_opa(ui->scr_input_config_ddlist_ip3_enable, 255, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_border_width(ui->scr_input_config_ddlist_ip3_enable, 0, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_pad_top(ui->scr_input_config_ddlist_ip3_enable, 8, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_pad_left(ui->scr_input_config_ddlist_ip3_enable, 20, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_pad_right(ui->scr_input_config_ddlist_ip3_enable, 20, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_radius(ui->scr_input_config_ddlist_ip3_enable, 5, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_bg_opa(ui->scr_input_config_ddlist_ip3_enable, 255, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_bg_color(ui->scr_input_config_ddlist_ip3_enable, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_bg_grad_dir(ui->scr_input_config_ddlist_ip3_enable, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_shadow_width(ui->scr_input_config_ddlist_ip3_enable, 0, LV_PART_MAIN|LV_STATE_FOCUSED);

    //Write style state: LV_STATE_CHECKED for &style_scr_input_config_ddlist_ip3_enable_extra_list_selected_checked
    static lv_style_t style_scr_input_config_ddlist_ip3_enable_extra_list_selected_checked;
    ui_init_style(&style_scr_input_config_ddlist_ip3_enable_extra_list_selected_checked);

    lv_style_set_border_width(&style_scr_input_config_ddlist_ip3_enable_extra_list_selected_checked, 0);
    lv_style_set_radius(&style_scr_input_config_ddlist_ip3_enable_extra_list_selected_checked, 5);
    lv_style_set_bg_opa(&style_scr_input_config_ddlist_ip3_enable_extra_list_selected_checked, 255);
    lv_style_set_bg_color(&style_scr_input_config_ddlist_ip3_enable_extra_list_selected_checked, lv_color_hex(0x00a1b5));
    lv_style_set_bg_grad_dir(&style_scr_input_config_ddlist_ip3_enable_extra_list_selected_checked, LV_GRAD_DIR_NONE);
    lv_obj_add_style(lv_dropdown_get_list(ui->scr_input_config_ddlist_ip3_enable), &style_scr_input_config_ddlist_ip3_enable_extra_list_selected_checked, LV_PART_SELECTED|LV_STATE_CHECKED);

    //Write style state: LV_STATE_DEFAULT for &style_scr_input_config_ddlist_ip3_enable_extra_list_main_default
    static lv_style_t style_scr_input_config_ddlist_ip3_enable_extra_list_main_default;
    ui_init_style(&style_scr_input_config_ddlist_ip3_enable_extra_list_main_default);

    lv_style_set_max_height(&style_scr_input_config_ddlist_ip3_enable_extra_list_main_default, 90);
    lv_style_set_text_color(&style_scr_input_config_ddlist_ip3_enable_extra_list_main_default, lv_color_hex(0x0D3055));
    lv_style_set_text_font(&style_scr_input_config_ddlist_ip3_enable_extra_list_main_default, &lv_font_NotoSans_Regular_30);
    lv_style_set_text_opa(&style_scr_input_config_ddlist_ip3_enable_extra_list_main_default, 255);
    lv_style_set_border_width(&style_scr_input_config_ddlist_ip3_enable_extra_list_main_default, 0);
    lv_style_set_radius(&style_scr_input_config_ddlist_ip3_enable_extra_list_main_default, 5);
    lv_style_set_bg_opa(&style_scr_input_config_ddlist_ip3_enable_extra_list_main_default, 255);
    lv_style_set_bg_color(&style_scr_input_config_ddlist_ip3_enable_extra_list_main_default, lv_color_hex(0xffffff));
    lv_style_set_bg_grad_dir(&style_scr_input_config_ddlist_ip3_enable_extra_list_main_default, LV_GRAD_DIR_NONE);
    lv_obj_add_style(lv_dropdown_get_list(ui->scr_input_config_ddlist_ip3_enable), &style_scr_input_config_ddlist_ip3_enable_extra_list_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style state: LV_STATE_DEFAULT for &style_scr_input_config_ddlist_ip3_enable_extra_list_scrollbar_default
    static lv_style_t style_scr_input_config_ddlist_ip3_enable_extra_list_scrollbar_default;
    ui_init_style(&style_scr_input_config_ddlist_ip3_enable_extra_list_scrollbar_default);

    lv_style_set_radius(&style_scr_input_config_ddlist_ip3_enable_extra_list_scrollbar_default, 3);
    lv_style_set_bg_opa(&style_scr_input_config_ddlist_ip3_enable_extra_list_scrollbar_default, 255);
    lv_style_set_bg_color(&style_scr_input_config_ddlist_ip3_enable_extra_list_scrollbar_default, lv_color_hex(0x414141));
    lv_style_set_bg_grad_dir(&style_scr_input_config_ddlist_ip3_enable_extra_list_scrollbar_default, LV_GRAD_DIR_NONE);
    lv_obj_add_style(lv_dropdown_get_list(ui->scr_input_config_ddlist_ip3_enable), &style_scr_input_config_ddlist_ip3_enable_extra_list_scrollbar_default, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);

    //Write codes scr_input_config_lbl_ip3_enable
    ui->scr_input_config_lbl_ip3_enable = lv_label_create(ui->scr_input_config_cont_input3);
    lv_obj_set_pos(ui->scr_input_config_lbl_ip3_enable, 143, 156);
    lv_obj_set_size(ui->scr_input_config_lbl_ip3_enable, 146, 32);
    lv_label_set_text(ui->scr_input_config_lbl_ip3_enable, "Enable");
    lv_label_set_long_mode(ui->scr_input_config_lbl_ip3_enable, LV_LABEL_LONG_WRAP);

    //Write style for scr_input_config_lbl_ip3_enable, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scr_input_config_lbl_ip3_enable, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_input_config_lbl_ip3_enable, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scr_input_config_lbl_ip3_enable, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scr_input_config_lbl_ip3_enable, &lv_font_NotoSans_Bold_30, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scr_input_config_lbl_ip3_enable, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->scr_input_config_lbl_ip3_enable, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->scr_input_config_lbl_ip3_enable, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scr_input_config_lbl_ip3_enable, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scr_input_config_lbl_ip3_enable, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scr_input_config_lbl_ip3_enable, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scr_input_config_lbl_ip3_enable, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scr_input_config_lbl_ip3_enable, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scr_input_config_lbl_ip3_enable, 10, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_input_config_lbl_ip3_enable, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scr_input_config_line_40
    ui->scr_input_config_line_40 = lv_line_create(ui->scr_input_config_cont_input3);
    lv_obj_set_pos(ui->scr_input_config_line_40, 143, 216);
    lv_obj_set_size(ui->scr_input_config_line_40, 850, 2);
    static lv_point_precise_t scr_input_config_line_40[] = {{0, 0},{1100, 0}};
    lv_line_set_points(ui->scr_input_config_line_40, scr_input_config_line_40, 2);

    //Write style for scr_input_config_line_40, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_line_width(ui->scr_input_config_line_40, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_color(ui->scr_input_config_line_40, lv_color_hex(0x757575), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_opa(ui->scr_input_config_line_40, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_rounded(ui->scr_input_config_line_40, true, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scr_input_config_line_39
    ui->scr_input_config_line_39 = lv_line_create(ui->scr_input_config_cont_input3);
    lv_obj_set_pos(ui->scr_input_config_line_39, 143, 380);
    lv_obj_set_size(ui->scr_input_config_line_39, 850, 2);
    static lv_point_precise_t scr_input_config_line_39[] = {{0, 0},{1100, 0}};
    lv_line_set_points(ui->scr_input_config_line_39, scr_input_config_line_39, 2);

    //Write style for scr_input_config_line_39, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_line_width(ui->scr_input_config_line_39, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_color(ui->scr_input_config_line_39, lv_color_hex(0x757575), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_opa(ui->scr_input_config_line_39, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_rounded(ui->scr_input_config_line_39, true, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scr_input_config_ddlist_ip3_function
    ui->scr_input_config_ddlist_ip3_function = lv_dropdown_create(ui->scr_input_config_cont_input3);
    lv_obj_set_pos(ui->scr_input_config_ddlist_ip3_function, 447, 59);
    lv_obj_set_size(ui->scr_input_config_ddlist_ip3_function, 450, 50);
    lv_dropdown_set_options(ui->scr_input_config_ddlist_ip3_function, "Start\nStop\nError\nCount Product\nNone");

    //Write style for scr_input_config_ddlist_ip3_function, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_text_color(ui->scr_input_config_ddlist_ip3_function, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scr_input_config_ddlist_ip3_function, &lv_font_NotoSans_Regular_30, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scr_input_config_ddlist_ip3_function, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->scr_input_config_ddlist_ip3_function, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scr_input_config_ddlist_ip3_function, 8, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scr_input_config_ddlist_ip3_function, 20, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scr_input_config_ddlist_ip3_function, 20, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_input_config_ddlist_ip3_function, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scr_input_config_ddlist_ip3_function, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scr_input_config_ddlist_ip3_function, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scr_input_config_ddlist_ip3_function, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_input_config_ddlist_ip3_function, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style for scr_input_config_ddlist_ip3_function, Part: LV_PART_MAIN, State: LV_STATE_CHECKED.
    lv_obj_set_style_text_color(ui->scr_input_config_ddlist_ip3_function, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_text_font(ui->scr_input_config_ddlist_ip3_function, &lv_font_NotoSans_Regular_30, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_text_opa(ui->scr_input_config_ddlist_ip3_function, 255, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_border_width(ui->scr_input_config_ddlist_ip3_function, 0, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_pad_top(ui->scr_input_config_ddlist_ip3_function, 8, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_pad_left(ui->scr_input_config_ddlist_ip3_function, 6, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_pad_right(ui->scr_input_config_ddlist_ip3_function, 6, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_radius(ui->scr_input_config_ddlist_ip3_function, 5, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_bg_opa(ui->scr_input_config_ddlist_ip3_function, 255, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_bg_color(ui->scr_input_config_ddlist_ip3_function, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_bg_grad_dir(ui->scr_input_config_ddlist_ip3_function, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_shadow_width(ui->scr_input_config_ddlist_ip3_function, 0, LV_PART_MAIN|LV_STATE_CHECKED);

    //Write style for scr_input_config_ddlist_ip3_function, Part: LV_PART_MAIN, State: LV_STATE_FOCUSED.
    lv_obj_set_style_text_color(ui->scr_input_config_ddlist_ip3_function, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_text_font(ui->scr_input_config_ddlist_ip3_function, &lv_font_NotoSans_Regular_30, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_text_opa(ui->scr_input_config_ddlist_ip3_function, 255, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_border_width(ui->scr_input_config_ddlist_ip3_function, 0, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_pad_top(ui->scr_input_config_ddlist_ip3_function, 8, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_pad_left(ui->scr_input_config_ddlist_ip3_function, 20, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_pad_right(ui->scr_input_config_ddlist_ip3_function, 20, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_radius(ui->scr_input_config_ddlist_ip3_function, 5, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_bg_opa(ui->scr_input_config_ddlist_ip3_function, 255, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_bg_color(ui->scr_input_config_ddlist_ip3_function, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_bg_grad_dir(ui->scr_input_config_ddlist_ip3_function, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_shadow_width(ui->scr_input_config_ddlist_ip3_function, 0, LV_PART_MAIN|LV_STATE_FOCUSED);

    //Write style state: LV_STATE_CHECKED for &style_scr_input_config_ddlist_ip3_function_extra_list_selected_checked
    static lv_style_t style_scr_input_config_ddlist_ip3_function_extra_list_selected_checked;
    ui_init_style(&style_scr_input_config_ddlist_ip3_function_extra_list_selected_checked);

    lv_style_set_border_width(&style_scr_input_config_ddlist_ip3_function_extra_list_selected_checked, 0);
    lv_style_set_radius(&style_scr_input_config_ddlist_ip3_function_extra_list_selected_checked, 5);
    lv_style_set_bg_opa(&style_scr_input_config_ddlist_ip3_function_extra_list_selected_checked, 255);
    lv_style_set_bg_color(&style_scr_input_config_ddlist_ip3_function_extra_list_selected_checked, lv_color_hex(0x00a1b5));
    lv_style_set_bg_grad_dir(&style_scr_input_config_ddlist_ip3_function_extra_list_selected_checked, LV_GRAD_DIR_NONE);
    lv_obj_add_style(lv_dropdown_get_list(ui->scr_input_config_ddlist_ip3_function), &style_scr_input_config_ddlist_ip3_function_extra_list_selected_checked, LV_PART_SELECTED|LV_STATE_CHECKED);

    //Write style state: LV_STATE_DEFAULT for &style_scr_input_config_ddlist_ip3_function_extra_list_main_default
    static lv_style_t style_scr_input_config_ddlist_ip3_function_extra_list_main_default;
    ui_init_style(&style_scr_input_config_ddlist_ip3_function_extra_list_main_default);

    lv_style_set_max_height(&style_scr_input_config_ddlist_ip3_function_extra_list_main_default, 90);
    lv_style_set_text_color(&style_scr_input_config_ddlist_ip3_function_extra_list_main_default, lv_color_hex(0x0D3055));
    lv_style_set_text_font(&style_scr_input_config_ddlist_ip3_function_extra_list_main_default, &lv_font_NotoSans_Regular_30);
    lv_style_set_text_opa(&style_scr_input_config_ddlist_ip3_function_extra_list_main_default, 255);
    lv_style_set_border_width(&style_scr_input_config_ddlist_ip3_function_extra_list_main_default, 0);
    lv_style_set_radius(&style_scr_input_config_ddlist_ip3_function_extra_list_main_default, 5);
    lv_style_set_bg_opa(&style_scr_input_config_ddlist_ip3_function_extra_list_main_default, 255);
    lv_style_set_bg_color(&style_scr_input_config_ddlist_ip3_function_extra_list_main_default, lv_color_hex(0xffffff));
    lv_style_set_bg_grad_dir(&style_scr_input_config_ddlist_ip3_function_extra_list_main_default, LV_GRAD_DIR_NONE);
    lv_obj_add_style(lv_dropdown_get_list(ui->scr_input_config_ddlist_ip3_function), &style_scr_input_config_ddlist_ip3_function_extra_list_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style state: LV_STATE_DEFAULT for &style_scr_input_config_ddlist_ip3_function_extra_list_scrollbar_default
    static lv_style_t style_scr_input_config_ddlist_ip3_function_extra_list_scrollbar_default;
    ui_init_style(&style_scr_input_config_ddlist_ip3_function_extra_list_scrollbar_default);

    lv_style_set_radius(&style_scr_input_config_ddlist_ip3_function_extra_list_scrollbar_default, 3);
    lv_style_set_bg_opa(&style_scr_input_config_ddlist_ip3_function_extra_list_scrollbar_default, 255);
    lv_style_set_bg_color(&style_scr_input_config_ddlist_ip3_function_extra_list_scrollbar_default, lv_color_hex(0x414141));
    lv_style_set_bg_grad_dir(&style_scr_input_config_ddlist_ip3_function_extra_list_scrollbar_default, LV_GRAD_DIR_NONE);
    lv_obj_add_style(lv_dropdown_get_list(ui->scr_input_config_ddlist_ip3_function), &style_scr_input_config_ddlist_ip3_function_extra_list_scrollbar_default, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);

    //Write codes INPUT 4
    lv_obj_t * scr_input_config_tabview_intput_tab_4_label = lv_label_create(ui->scr_input_config_tabview_intput_tab_4);
    lv_label_set_text(scr_input_config_tabview_intput_tab_4_label, "");

    //Write codes scr_input_config_cont_input4
    ui->scr_input_config_cont_input4 = lv_obj_create(ui->scr_input_config_tabview_intput_tab_4);
    lv_obj_set_pos(ui->scr_input_config_cont_input4, 30, 0);
    lv_obj_set_size(ui->scr_input_config_cont_input4, 1100, 450);
    lv_obj_set_scrollbar_mode(ui->scr_input_config_cont_input4, LV_SCROLLBAR_MODE_OFF);

    //Write style for scr_input_config_cont_input4, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scr_input_config_cont_input4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_input_config_cont_input4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scr_input_config_cont_input4, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scr_input_config_cont_input4, lv_color_hex(0x2b2f3a), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scr_input_config_cont_input4, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scr_input_config_cont_input4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scr_input_config_cont_input4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scr_input_config_cont_input4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scr_input_config_cont_input4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_input_config_cont_input4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scr_input_config_line_48
    ui->scr_input_config_line_48 = lv_line_create(ui->scr_input_config_cont_input4);
    lv_obj_set_pos(ui->scr_input_config_line_48, 0, 40);
    lv_obj_set_size(ui->scr_input_config_line_48, 1100, 2);
    static lv_point_precise_t scr_input_config_line_48[] = {{0, 0},{1100, 0}};
    lv_line_set_points(ui->scr_input_config_line_48, scr_input_config_line_48, 2);

    //Write style for scr_input_config_line_48, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_line_width(ui->scr_input_config_line_48, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_color(ui->scr_input_config_line_48, lv_color_hex(0x757575), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_opa(ui->scr_input_config_line_48, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_rounded(ui->scr_input_config_line_48, true, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scr_input_config_lbl_ip4_trigger
    ui->scr_input_config_lbl_ip4_trigger = lv_label_create(ui->scr_input_config_cont_input4);
    lv_obj_set_pos(ui->scr_input_config_lbl_ip4_trigger, 143, 247);
    lv_obj_set_size(ui->scr_input_config_lbl_ip4_trigger, 209, 39);
    lv_label_set_text(ui->scr_input_config_lbl_ip4_trigger, "Trigger Type");
    lv_label_set_long_mode(ui->scr_input_config_lbl_ip4_trigger, LV_LABEL_LONG_WRAP);

    //Write style for scr_input_config_lbl_ip4_trigger, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scr_input_config_lbl_ip4_trigger, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_input_config_lbl_ip4_trigger, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scr_input_config_lbl_ip4_trigger, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scr_input_config_lbl_ip4_trigger, &lv_font_NotoSans_Bold_30, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scr_input_config_lbl_ip4_trigger, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->scr_input_config_lbl_ip4_trigger, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->scr_input_config_lbl_ip4_trigger, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scr_input_config_lbl_ip4_trigger, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scr_input_config_lbl_ip4_trigger, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scr_input_config_lbl_ip4_trigger, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scr_input_config_lbl_ip4_trigger, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scr_input_config_lbl_ip4_trigger, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scr_input_config_lbl_ip4_trigger, 10, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_input_config_lbl_ip4_trigger, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scr_input_config_ddlist_ip4_trigger
    ui->scr_input_config_ddlist_ip4_trigger = lv_dropdown_create(ui->scr_input_config_cont_input4);
    lv_obj_set_pos(ui->scr_input_config_ddlist_ip4_trigger, 448, 238);
    lv_obj_set_size(ui->scr_input_config_ddlist_ip4_trigger, 450, 50);
    lv_dropdown_set_options(ui->scr_input_config_ddlist_ip4_trigger, "Rising Edge\nFalling Edge\nLevel High\nLevel Low");

    //Write style for scr_input_config_ddlist_ip4_trigger, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_text_color(ui->scr_input_config_ddlist_ip4_trigger, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scr_input_config_ddlist_ip4_trigger, &lv_font_NotoSans_Regular_30, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scr_input_config_ddlist_ip4_trigger, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->scr_input_config_ddlist_ip4_trigger, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scr_input_config_ddlist_ip4_trigger, 8, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scr_input_config_ddlist_ip4_trigger, 20, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scr_input_config_ddlist_ip4_trigger, 20, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_input_config_ddlist_ip4_trigger, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scr_input_config_ddlist_ip4_trigger, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scr_input_config_ddlist_ip4_trigger, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scr_input_config_ddlist_ip4_trigger, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_input_config_ddlist_ip4_trigger, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style for scr_input_config_ddlist_ip4_trigger, Part: LV_PART_MAIN, State: LV_STATE_CHECKED.
    lv_obj_set_style_text_color(ui->scr_input_config_ddlist_ip4_trigger, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_text_font(ui->scr_input_config_ddlist_ip4_trigger, &lv_font_NotoSans_Regular_30, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_text_opa(ui->scr_input_config_ddlist_ip4_trigger, 255, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_border_width(ui->scr_input_config_ddlist_ip4_trigger, 0, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_pad_top(ui->scr_input_config_ddlist_ip4_trigger, 8, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_pad_left(ui->scr_input_config_ddlist_ip4_trigger, 20, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_pad_right(ui->scr_input_config_ddlist_ip4_trigger, 20, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_radius(ui->scr_input_config_ddlist_ip4_trigger, 5, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_bg_opa(ui->scr_input_config_ddlist_ip4_trigger, 255, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_bg_color(ui->scr_input_config_ddlist_ip4_trigger, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_bg_grad_dir(ui->scr_input_config_ddlist_ip4_trigger, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_shadow_width(ui->scr_input_config_ddlist_ip4_trigger, 0, LV_PART_MAIN|LV_STATE_CHECKED);

    //Write style for scr_input_config_ddlist_ip4_trigger, Part: LV_PART_MAIN, State: LV_STATE_FOCUSED.
    lv_obj_set_style_text_color(ui->scr_input_config_ddlist_ip4_trigger, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_text_font(ui->scr_input_config_ddlist_ip4_trigger, &lv_font_NotoSans_Regular_30, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_text_opa(ui->scr_input_config_ddlist_ip4_trigger, 255, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_border_width(ui->scr_input_config_ddlist_ip4_trigger, 0, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_pad_top(ui->scr_input_config_ddlist_ip4_trigger, 8, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_pad_left(ui->scr_input_config_ddlist_ip4_trigger, 20, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_pad_right(ui->scr_input_config_ddlist_ip4_trigger, 20, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_radius(ui->scr_input_config_ddlist_ip4_trigger, 5, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_bg_opa(ui->scr_input_config_ddlist_ip4_trigger, 255, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_bg_color(ui->scr_input_config_ddlist_ip4_trigger, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_bg_grad_dir(ui->scr_input_config_ddlist_ip4_trigger, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_shadow_width(ui->scr_input_config_ddlist_ip4_trigger, 0, LV_PART_MAIN|LV_STATE_FOCUSED);

    //Write style state: LV_STATE_CHECKED for &style_scr_input_config_ddlist_ip4_trigger_extra_list_selected_checked
    static lv_style_t style_scr_input_config_ddlist_ip4_trigger_extra_list_selected_checked;
    ui_init_style(&style_scr_input_config_ddlist_ip4_trigger_extra_list_selected_checked);

    lv_style_set_border_width(&style_scr_input_config_ddlist_ip4_trigger_extra_list_selected_checked, 0);
    lv_style_set_radius(&style_scr_input_config_ddlist_ip4_trigger_extra_list_selected_checked, 5);
    lv_style_set_bg_opa(&style_scr_input_config_ddlist_ip4_trigger_extra_list_selected_checked, 255);
    lv_style_set_bg_color(&style_scr_input_config_ddlist_ip4_trigger_extra_list_selected_checked, lv_color_hex(0x00a1b5));
    lv_style_set_bg_grad_dir(&style_scr_input_config_ddlist_ip4_trigger_extra_list_selected_checked, LV_GRAD_DIR_NONE);
    lv_obj_add_style(lv_dropdown_get_list(ui->scr_input_config_ddlist_ip4_trigger), &style_scr_input_config_ddlist_ip4_trigger_extra_list_selected_checked, LV_PART_SELECTED|LV_STATE_CHECKED);

    //Write style state: LV_STATE_DEFAULT for &style_scr_input_config_ddlist_ip4_trigger_extra_list_main_default
    static lv_style_t style_scr_input_config_ddlist_ip4_trigger_extra_list_main_default;
    ui_init_style(&style_scr_input_config_ddlist_ip4_trigger_extra_list_main_default);

    lv_style_set_max_height(&style_scr_input_config_ddlist_ip4_trigger_extra_list_main_default, 90);
    lv_style_set_text_color(&style_scr_input_config_ddlist_ip4_trigger_extra_list_main_default, lv_color_hex(0x000000));
    lv_style_set_text_font(&style_scr_input_config_ddlist_ip4_trigger_extra_list_main_default, &lv_font_NotoSans_Regular_30);
    lv_style_set_text_opa(&style_scr_input_config_ddlist_ip4_trigger_extra_list_main_default, 255);
    lv_style_set_border_width(&style_scr_input_config_ddlist_ip4_trigger_extra_list_main_default, 0);
    lv_style_set_radius(&style_scr_input_config_ddlist_ip4_trigger_extra_list_main_default, 5);
    lv_style_set_bg_opa(&style_scr_input_config_ddlist_ip4_trigger_extra_list_main_default, 255);
    lv_style_set_bg_color(&style_scr_input_config_ddlist_ip4_trigger_extra_list_main_default, lv_color_hex(0xffffff));
    lv_style_set_bg_grad_dir(&style_scr_input_config_ddlist_ip4_trigger_extra_list_main_default, LV_GRAD_DIR_NONE);
    lv_obj_add_style(lv_dropdown_get_list(ui->scr_input_config_ddlist_ip4_trigger), &style_scr_input_config_ddlist_ip4_trigger_extra_list_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style state: LV_STATE_DEFAULT for &style_scr_input_config_ddlist_ip4_trigger_extra_list_scrollbar_default
    static lv_style_t style_scr_input_config_ddlist_ip4_trigger_extra_list_scrollbar_default;
    ui_init_style(&style_scr_input_config_ddlist_ip4_trigger_extra_list_scrollbar_default);

    lv_style_set_radius(&style_scr_input_config_ddlist_ip4_trigger_extra_list_scrollbar_default, 3);
    lv_style_set_bg_opa(&style_scr_input_config_ddlist_ip4_trigger_extra_list_scrollbar_default, 255);
    lv_style_set_bg_color(&style_scr_input_config_ddlist_ip4_trigger_extra_list_scrollbar_default, lv_color_hex(0x00ff00));
    lv_style_set_bg_grad_dir(&style_scr_input_config_ddlist_ip4_trigger_extra_list_scrollbar_default, LV_GRAD_DIR_NONE);
    lv_obj_add_style(lv_dropdown_get_list(ui->scr_input_config_ddlist_ip4_trigger), &style_scr_input_config_ddlist_ip4_trigger_extra_list_scrollbar_default, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);

    //Write codes scr_input_config_lbl_ip4_function
    ui->scr_input_config_lbl_ip4_function = lv_label_create(ui->scr_input_config_cont_input4);
    lv_obj_set_pos(ui->scr_input_config_lbl_ip4_function, 143, 68);
    lv_obj_set_size(ui->scr_input_config_lbl_ip4_function, 157, 32);
    lv_label_set_text(ui->scr_input_config_lbl_ip4_function, "Function");
    lv_label_set_long_mode(ui->scr_input_config_lbl_ip4_function, LV_LABEL_LONG_WRAP);

    //Write style for scr_input_config_lbl_ip4_function, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scr_input_config_lbl_ip4_function, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_input_config_lbl_ip4_function, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scr_input_config_lbl_ip4_function, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scr_input_config_lbl_ip4_function, &lv_font_NotoSans_Bold_30, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scr_input_config_lbl_ip4_function, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->scr_input_config_lbl_ip4_function, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->scr_input_config_lbl_ip4_function, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scr_input_config_lbl_ip4_function, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scr_input_config_lbl_ip4_function, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scr_input_config_lbl_ip4_function, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scr_input_config_lbl_ip4_function, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scr_input_config_lbl_ip4_function, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scr_input_config_lbl_ip4_function, 10, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_input_config_lbl_ip4_function, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scr_input_config_lbl_ip4
    ui->scr_input_config_lbl_ip4 = lv_label_create(ui->scr_input_config_cont_input4);
    lv_obj_set_pos(ui->scr_input_config_lbl_ip4, 0, 0);
    lv_obj_set_size(ui->scr_input_config_lbl_ip4, 433, 35);
    lv_label_set_text_static(ui->scr_input_config_lbl_ip4, "Selected Input: INPUT 4");
    lv_label_set_long_mode(ui->scr_input_config_lbl_ip4, LV_LABEL_LONG_WRAP);

    //Write style for scr_input_config_lbl_ip4, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scr_input_config_lbl_ip4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_input_config_lbl_ip4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scr_input_config_lbl_ip4, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scr_input_config_lbl_ip4, &lv_font_NotoSans_Bold_30, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scr_input_config_lbl_ip4, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->scr_input_config_lbl_ip4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->scr_input_config_lbl_ip4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scr_input_config_lbl_ip4, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scr_input_config_lbl_ip4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scr_input_config_lbl_ip4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scr_input_config_lbl_ip4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scr_input_config_lbl_ip4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scr_input_config_lbl_ip4, 10, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_input_config_lbl_ip4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scr_input_config_lbl_ip4_livestatus
    ui->scr_input_config_lbl_ip4_livestatus = lv_label_create(ui->scr_input_config_cont_input4);
    lv_obj_set_pos(ui->scr_input_config_lbl_ip4_livestatus, 143, 335);
    lv_obj_set_size(ui->scr_input_config_lbl_ip4_livestatus, 220, 32);
    lv_label_set_text(ui->scr_input_config_lbl_ip4_livestatus, "Live Status");
    lv_label_set_long_mode(ui->scr_input_config_lbl_ip4_livestatus, LV_LABEL_LONG_WRAP);

    //Write style for scr_input_config_lbl_ip4_livestatus, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scr_input_config_lbl_ip4_livestatus, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_input_config_lbl_ip4_livestatus, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scr_input_config_lbl_ip4_livestatus, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scr_input_config_lbl_ip4_livestatus, &lv_font_NotoSans_Bold_30, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scr_input_config_lbl_ip4_livestatus, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->scr_input_config_lbl_ip4_livestatus, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->scr_input_config_lbl_ip4_livestatus, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scr_input_config_lbl_ip4_livestatus, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scr_input_config_lbl_ip4_livestatus, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scr_input_config_lbl_ip4_livestatus, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scr_input_config_lbl_ip4_livestatus, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scr_input_config_lbl_ip4_livestatus, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scr_input_config_lbl_ip4_livestatus, 10, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_input_config_lbl_ip4_livestatus, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scr_input_config_lbl_ip4_status
    ui->scr_input_config_lbl_ip4_status = lv_label_create(ui->scr_input_config_cont_input4);
    lv_obj_set_pos(ui->scr_input_config_lbl_ip4_status, 478, 335);
    lv_obj_set_size(ui->scr_input_config_lbl_ip4_status, 114, 32);
    lv_label_set_text(ui->scr_input_config_lbl_ip4_status, "LOW");
    lv_label_set_long_mode(ui->scr_input_config_lbl_ip4_status, LV_LABEL_LONG_WRAP);

    //Write style for scr_input_config_lbl_ip4_status, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scr_input_config_lbl_ip4_status, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_input_config_lbl_ip4_status, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scr_input_config_lbl_ip4_status, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scr_input_config_lbl_ip4_status, &lv_font_NotoSans_Bold_30, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scr_input_config_lbl_ip4_status, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->scr_input_config_lbl_ip4_status, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->scr_input_config_lbl_ip4_status, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scr_input_config_lbl_ip4_status, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scr_input_config_lbl_ip4_status, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scr_input_config_lbl_ip4_status, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scr_input_config_lbl_ip4_status, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scr_input_config_lbl_ip4_status, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scr_input_config_lbl_ip4_status, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_input_config_lbl_ip4_status, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scr_input_config_led_ip4_status
    ui->scr_input_config_led_ip4_status = lv_led_create(ui->scr_input_config_cont_input4);
    lv_obj_set_pos(ui->scr_input_config_led_ip4_status, 448, 341);
    lv_obj_set_size(ui->scr_input_config_led_ip4_status, 20, 20);
    lv_led_set_brightness(ui->scr_input_config_led_ip4_status, 255);
    lv_led_set_color(ui->scr_input_config_led_ip4_status, lv_color_hex(0xfd0026));

    //Write codes scr_input_config_line_47
    ui->scr_input_config_line_47 = lv_line_create(ui->scr_input_config_cont_input4);
    lv_obj_set_pos(ui->scr_input_config_line_47, 143, 126);
    lv_obj_set_size(ui->scr_input_config_line_47, 850, 2);
    static lv_point_precise_t scr_input_config_line_47[] = {{0, 0},{1100, 0}};
    lv_line_set_points(ui->scr_input_config_line_47, scr_input_config_line_47, 2);

    //Write style for scr_input_config_line_47, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_line_width(ui->scr_input_config_line_47, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_color(ui->scr_input_config_line_47, lv_color_hex(0x757575), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_opa(ui->scr_input_config_line_47, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_rounded(ui->scr_input_config_line_47, true, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scr_input_config_line_46
    ui->scr_input_config_line_46 = lv_line_create(ui->scr_input_config_cont_input4);
    lv_obj_set_pos(ui->scr_input_config_line_46, 143, 306);
    lv_obj_set_size(ui->scr_input_config_line_46, 850, 2);
    static lv_point_precise_t scr_input_config_line_46[] = {{0, 0},{1100, 0}};
    lv_line_set_points(ui->scr_input_config_line_46, scr_input_config_line_46, 2);

    //Write style for scr_input_config_line_46, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_line_width(ui->scr_input_config_line_46, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_color(ui->scr_input_config_line_46, lv_color_hex(0x757575), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_opa(ui->scr_input_config_line_46, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_rounded(ui->scr_input_config_line_46, true, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scr_input_config_ddlist_ip4_enable
    ui->scr_input_config_ddlist_ip4_enable = lv_dropdown_create(ui->scr_input_config_cont_input4);
    lv_obj_set_pos(ui->scr_input_config_ddlist_ip4_enable, 447, 145);
    lv_obj_set_size(ui->scr_input_config_ddlist_ip4_enable, 450, 50);
    lv_dropdown_set_options(ui->scr_input_config_ddlist_ip4_enable, "No\nYes");

    //Write style for scr_input_config_ddlist_ip4_enable, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_text_color(ui->scr_input_config_ddlist_ip4_enable, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scr_input_config_ddlist_ip4_enable, &lv_font_NotoSans_Regular_30, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scr_input_config_ddlist_ip4_enable, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->scr_input_config_ddlist_ip4_enable, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scr_input_config_ddlist_ip4_enable, 8, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scr_input_config_ddlist_ip4_enable, 20, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scr_input_config_ddlist_ip4_enable, 20, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_input_config_ddlist_ip4_enable, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scr_input_config_ddlist_ip4_enable, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scr_input_config_ddlist_ip4_enable, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scr_input_config_ddlist_ip4_enable, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_input_config_ddlist_ip4_enable, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style for scr_input_config_ddlist_ip4_enable, Part: LV_PART_MAIN, State: LV_STATE_CHECKED.
    lv_obj_set_style_text_color(ui->scr_input_config_ddlist_ip4_enable, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_text_font(ui->scr_input_config_ddlist_ip4_enable, &lv_font_NotoSans_Regular_30, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_text_opa(ui->scr_input_config_ddlist_ip4_enable, 255, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_border_width(ui->scr_input_config_ddlist_ip4_enable, 0, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_pad_top(ui->scr_input_config_ddlist_ip4_enable, 8, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_pad_left(ui->scr_input_config_ddlist_ip4_enable, 6, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_pad_right(ui->scr_input_config_ddlist_ip4_enable, 6, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_radius(ui->scr_input_config_ddlist_ip4_enable, 5, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_bg_opa(ui->scr_input_config_ddlist_ip4_enable, 255, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_bg_color(ui->scr_input_config_ddlist_ip4_enable, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_bg_grad_dir(ui->scr_input_config_ddlist_ip4_enable, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_shadow_width(ui->scr_input_config_ddlist_ip4_enable, 0, LV_PART_MAIN|LV_STATE_CHECKED);

    //Write style for scr_input_config_ddlist_ip4_enable, Part: LV_PART_MAIN, State: LV_STATE_FOCUSED.
    lv_obj_set_style_text_color(ui->scr_input_config_ddlist_ip4_enable, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_text_font(ui->scr_input_config_ddlist_ip4_enable, &lv_font_NotoSans_Regular_30, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_text_opa(ui->scr_input_config_ddlist_ip4_enable, 255, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_border_width(ui->scr_input_config_ddlist_ip4_enable, 0, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_pad_top(ui->scr_input_config_ddlist_ip4_enable, 8, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_pad_left(ui->scr_input_config_ddlist_ip4_enable, 20, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_pad_right(ui->scr_input_config_ddlist_ip4_enable, 20, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_radius(ui->scr_input_config_ddlist_ip4_enable, 5, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_bg_opa(ui->scr_input_config_ddlist_ip4_enable, 255, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_bg_color(ui->scr_input_config_ddlist_ip4_enable, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_bg_grad_dir(ui->scr_input_config_ddlist_ip4_enable, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_shadow_width(ui->scr_input_config_ddlist_ip4_enable, 0, LV_PART_MAIN|LV_STATE_FOCUSED);

    //Write style state: LV_STATE_CHECKED for &style_scr_input_config_ddlist_ip4_enable_extra_list_selected_checked
    static lv_style_t style_scr_input_config_ddlist_ip4_enable_extra_list_selected_checked;
    ui_init_style(&style_scr_input_config_ddlist_ip4_enable_extra_list_selected_checked);

    lv_style_set_border_width(&style_scr_input_config_ddlist_ip4_enable_extra_list_selected_checked, 0);
    lv_style_set_radius(&style_scr_input_config_ddlist_ip4_enable_extra_list_selected_checked, 5);
    lv_style_set_bg_opa(&style_scr_input_config_ddlist_ip4_enable_extra_list_selected_checked, 255);
    lv_style_set_bg_color(&style_scr_input_config_ddlist_ip4_enable_extra_list_selected_checked, lv_color_hex(0x00a1b5));
    lv_style_set_bg_grad_dir(&style_scr_input_config_ddlist_ip4_enable_extra_list_selected_checked, LV_GRAD_DIR_NONE);
    lv_obj_add_style(lv_dropdown_get_list(ui->scr_input_config_ddlist_ip4_enable), &style_scr_input_config_ddlist_ip4_enable_extra_list_selected_checked, LV_PART_SELECTED|LV_STATE_CHECKED);

    //Write style state: LV_STATE_DEFAULT for &style_scr_input_config_ddlist_ip4_enable_extra_list_main_default
    static lv_style_t style_scr_input_config_ddlist_ip4_enable_extra_list_main_default;
    ui_init_style(&style_scr_input_config_ddlist_ip4_enable_extra_list_main_default);

    lv_style_set_max_height(&style_scr_input_config_ddlist_ip4_enable_extra_list_main_default, 90);
    lv_style_set_text_color(&style_scr_input_config_ddlist_ip4_enable_extra_list_main_default, lv_color_hex(0x0D3055));
    lv_style_set_text_font(&style_scr_input_config_ddlist_ip4_enable_extra_list_main_default, &lv_font_NotoSans_Regular_30);
    lv_style_set_text_opa(&style_scr_input_config_ddlist_ip4_enable_extra_list_main_default, 255);
    lv_style_set_border_width(&style_scr_input_config_ddlist_ip4_enable_extra_list_main_default, 0);
    lv_style_set_radius(&style_scr_input_config_ddlist_ip4_enable_extra_list_main_default, 5);
    lv_style_set_bg_opa(&style_scr_input_config_ddlist_ip4_enable_extra_list_main_default, 255);
    lv_style_set_bg_color(&style_scr_input_config_ddlist_ip4_enable_extra_list_main_default, lv_color_hex(0xffffff));
    lv_style_set_bg_grad_dir(&style_scr_input_config_ddlist_ip4_enable_extra_list_main_default, LV_GRAD_DIR_NONE);
    lv_obj_add_style(lv_dropdown_get_list(ui->scr_input_config_ddlist_ip4_enable), &style_scr_input_config_ddlist_ip4_enable_extra_list_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style state: LV_STATE_DEFAULT for &style_scr_input_config_ddlist_ip4_enable_extra_list_scrollbar_default
    static lv_style_t style_scr_input_config_ddlist_ip4_enable_extra_list_scrollbar_default;
    ui_init_style(&style_scr_input_config_ddlist_ip4_enable_extra_list_scrollbar_default);

    lv_style_set_radius(&style_scr_input_config_ddlist_ip4_enable_extra_list_scrollbar_default, 3);
    lv_style_set_bg_opa(&style_scr_input_config_ddlist_ip4_enable_extra_list_scrollbar_default, 255);
    lv_style_set_bg_color(&style_scr_input_config_ddlist_ip4_enable_extra_list_scrollbar_default, lv_color_hex(0x414141));
    lv_style_set_bg_grad_dir(&style_scr_input_config_ddlist_ip4_enable_extra_list_scrollbar_default, LV_GRAD_DIR_NONE);
    lv_obj_add_style(lv_dropdown_get_list(ui->scr_input_config_ddlist_ip4_enable), &style_scr_input_config_ddlist_ip4_enable_extra_list_scrollbar_default, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);

    //Write codes scr_input_config_lbl_ip4_enable
    ui->scr_input_config_lbl_ip4_enable = lv_label_create(ui->scr_input_config_cont_input4);
    lv_obj_set_pos(ui->scr_input_config_lbl_ip4_enable, 143, 156);
    lv_obj_set_size(ui->scr_input_config_lbl_ip4_enable, 146, 32);
    lv_label_set_text(ui->scr_input_config_lbl_ip4_enable, "Enable");
    lv_label_set_long_mode(ui->scr_input_config_lbl_ip4_enable, LV_LABEL_LONG_WRAP);

    //Write style for scr_input_config_lbl_ip4_enable, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scr_input_config_lbl_ip4_enable, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_input_config_lbl_ip4_enable, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scr_input_config_lbl_ip4_enable, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scr_input_config_lbl_ip4_enable, &lv_font_NotoSans_Bold_30, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scr_input_config_lbl_ip4_enable, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->scr_input_config_lbl_ip4_enable, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->scr_input_config_lbl_ip4_enable, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scr_input_config_lbl_ip4_enable, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scr_input_config_lbl_ip4_enable, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scr_input_config_lbl_ip4_enable, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scr_input_config_lbl_ip4_enable, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scr_input_config_lbl_ip4_enable, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scr_input_config_lbl_ip4_enable, 10, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_input_config_lbl_ip4_enable, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scr_input_config_line_45
    ui->scr_input_config_line_45 = lv_line_create(ui->scr_input_config_cont_input4);
    lv_obj_set_pos(ui->scr_input_config_line_45, 143, 216);
    lv_obj_set_size(ui->scr_input_config_line_45, 850, 2);
    static lv_point_precise_t scr_input_config_line_45[] = {{0, 0},{1100, 0}};
    lv_line_set_points(ui->scr_input_config_line_45, scr_input_config_line_45, 2);

    //Write style for scr_input_config_line_45, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_line_width(ui->scr_input_config_line_45, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_color(ui->scr_input_config_line_45, lv_color_hex(0x757575), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_opa(ui->scr_input_config_line_45, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_rounded(ui->scr_input_config_line_45, true, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scr_input_config_line_44
    ui->scr_input_config_line_44 = lv_line_create(ui->scr_input_config_cont_input4);
    lv_obj_set_pos(ui->scr_input_config_line_44, 143, 380);
    lv_obj_set_size(ui->scr_input_config_line_44, 850, 2);
    static lv_point_precise_t scr_input_config_line_44[] = {{0, 0},{1100, 0}};
    lv_line_set_points(ui->scr_input_config_line_44, scr_input_config_line_44, 2);

    //Write style for scr_input_config_line_44, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_line_width(ui->scr_input_config_line_44, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_color(ui->scr_input_config_line_44, lv_color_hex(0x757575), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_opa(ui->scr_input_config_line_44, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_rounded(ui->scr_input_config_line_44, true, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scr_input_config_ddlist_ip4_function
    ui->scr_input_config_ddlist_ip4_function = lv_dropdown_create(ui->scr_input_config_cont_input4);
    lv_obj_set_pos(ui->scr_input_config_ddlist_ip4_function, 447, 59);
    lv_obj_set_size(ui->scr_input_config_ddlist_ip4_function, 450, 50);
    lv_dropdown_set_options(ui->scr_input_config_ddlist_ip4_function, "Start\nStop\nError\nCount Product\nNone");

    //Write style for scr_input_config_ddlist_ip4_function, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_text_color(ui->scr_input_config_ddlist_ip4_function, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scr_input_config_ddlist_ip4_function, &lv_font_NotoSans_Regular_30, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scr_input_config_ddlist_ip4_function, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->scr_input_config_ddlist_ip4_function, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scr_input_config_ddlist_ip4_function, 8, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scr_input_config_ddlist_ip4_function, 20, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scr_input_config_ddlist_ip4_function, 20, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_input_config_ddlist_ip4_function, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scr_input_config_ddlist_ip4_function, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scr_input_config_ddlist_ip4_function, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scr_input_config_ddlist_ip4_function, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_input_config_ddlist_ip4_function, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style for scr_input_config_ddlist_ip4_function, Part: LV_PART_MAIN, State: LV_STATE_CHECKED.
    lv_obj_set_style_text_color(ui->scr_input_config_ddlist_ip4_function, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_text_font(ui->scr_input_config_ddlist_ip4_function, &lv_font_NotoSans_Regular_30, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_text_opa(ui->scr_input_config_ddlist_ip4_function, 255, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_border_width(ui->scr_input_config_ddlist_ip4_function, 0, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_pad_top(ui->scr_input_config_ddlist_ip4_function, 8, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_pad_left(ui->scr_input_config_ddlist_ip4_function, 6, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_pad_right(ui->scr_input_config_ddlist_ip4_function, 6, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_radius(ui->scr_input_config_ddlist_ip4_function, 5, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_bg_opa(ui->scr_input_config_ddlist_ip4_function, 255, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_bg_color(ui->scr_input_config_ddlist_ip4_function, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_bg_grad_dir(ui->scr_input_config_ddlist_ip4_function, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_shadow_width(ui->scr_input_config_ddlist_ip4_function, 0, LV_PART_MAIN|LV_STATE_CHECKED);

    //Write style for scr_input_config_ddlist_ip4_function, Part: LV_PART_MAIN, State: LV_STATE_FOCUSED.
    lv_obj_set_style_text_color(ui->scr_input_config_ddlist_ip4_function, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_text_font(ui->scr_input_config_ddlist_ip4_function, &lv_font_NotoSans_Regular_30, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_text_opa(ui->scr_input_config_ddlist_ip4_function, 255, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_border_width(ui->scr_input_config_ddlist_ip4_function, 0, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_pad_top(ui->scr_input_config_ddlist_ip4_function, 8, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_pad_left(ui->scr_input_config_ddlist_ip4_function, 20, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_pad_right(ui->scr_input_config_ddlist_ip4_function, 20, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_radius(ui->scr_input_config_ddlist_ip4_function, 5, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_bg_opa(ui->scr_input_config_ddlist_ip4_function, 255, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_bg_color(ui->scr_input_config_ddlist_ip4_function, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_bg_grad_dir(ui->scr_input_config_ddlist_ip4_function, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_shadow_width(ui->scr_input_config_ddlist_ip4_function, 0, LV_PART_MAIN|LV_STATE_FOCUSED);

    //Write style state: LV_STATE_CHECKED for &style_scr_input_config_ddlist_ip4_function_extra_list_selected_checked
    static lv_style_t style_scr_input_config_ddlist_ip4_function_extra_list_selected_checked;
    ui_init_style(&style_scr_input_config_ddlist_ip4_function_extra_list_selected_checked);

    lv_style_set_border_width(&style_scr_input_config_ddlist_ip4_function_extra_list_selected_checked, 0);
    lv_style_set_radius(&style_scr_input_config_ddlist_ip4_function_extra_list_selected_checked, 5);
    lv_style_set_bg_opa(&style_scr_input_config_ddlist_ip4_function_extra_list_selected_checked, 255);
    lv_style_set_bg_color(&style_scr_input_config_ddlist_ip4_function_extra_list_selected_checked, lv_color_hex(0x00a1b5));
    lv_style_set_bg_grad_dir(&style_scr_input_config_ddlist_ip4_function_extra_list_selected_checked, LV_GRAD_DIR_NONE);
    lv_obj_add_style(lv_dropdown_get_list(ui->scr_input_config_ddlist_ip4_function), &style_scr_input_config_ddlist_ip4_function_extra_list_selected_checked, LV_PART_SELECTED|LV_STATE_CHECKED);

    //Write style state: LV_STATE_DEFAULT for &style_scr_input_config_ddlist_ip4_function_extra_list_main_default
    static lv_style_t style_scr_input_config_ddlist_ip4_function_extra_list_main_default;
    ui_init_style(&style_scr_input_config_ddlist_ip4_function_extra_list_main_default);

    lv_style_set_max_height(&style_scr_input_config_ddlist_ip4_function_extra_list_main_default, 90);
    lv_style_set_text_color(&style_scr_input_config_ddlist_ip4_function_extra_list_main_default, lv_color_hex(0x0D3055));
    lv_style_set_text_font(&style_scr_input_config_ddlist_ip4_function_extra_list_main_default, &lv_font_NotoSans_Regular_30);
    lv_style_set_text_opa(&style_scr_input_config_ddlist_ip4_function_extra_list_main_default, 255);
    lv_style_set_border_width(&style_scr_input_config_ddlist_ip4_function_extra_list_main_default, 0);
    lv_style_set_radius(&style_scr_input_config_ddlist_ip4_function_extra_list_main_default, 5);
    lv_style_set_bg_opa(&style_scr_input_config_ddlist_ip4_function_extra_list_main_default, 255);
    lv_style_set_bg_color(&style_scr_input_config_ddlist_ip4_function_extra_list_main_default, lv_color_hex(0xffffff));
    lv_style_set_bg_grad_dir(&style_scr_input_config_ddlist_ip4_function_extra_list_main_default, LV_GRAD_DIR_NONE);
    lv_obj_add_style(lv_dropdown_get_list(ui->scr_input_config_ddlist_ip4_function), &style_scr_input_config_ddlist_ip4_function_extra_list_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style state: LV_STATE_DEFAULT for &style_scr_input_config_ddlist_ip4_function_extra_list_scrollbar_default
    static lv_style_t style_scr_input_config_ddlist_ip4_function_extra_list_scrollbar_default;
    ui_init_style(&style_scr_input_config_ddlist_ip4_function_extra_list_scrollbar_default);

    lv_style_set_radius(&style_scr_input_config_ddlist_ip4_function_extra_list_scrollbar_default, 3);
    lv_style_set_bg_opa(&style_scr_input_config_ddlist_ip4_function_extra_list_scrollbar_default, 255);
    lv_style_set_bg_color(&style_scr_input_config_ddlist_ip4_function_extra_list_scrollbar_default, lv_color_hex(0x414141));
    lv_style_set_bg_grad_dir(&style_scr_input_config_ddlist_ip4_function_extra_list_scrollbar_default, LV_GRAD_DIR_NONE);
    lv_obj_add_style(lv_dropdown_get_list(ui->scr_input_config_ddlist_ip4_function), &style_scr_input_config_ddlist_ip4_function_extra_list_scrollbar_default, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);

    //The custom code of scr_input_config.


    //Update current screen layout.
    lv_obj_update_layout(ui->scr_input_config);

    //Init events for screen.
    events_init_scr_input_config(ui);
}
