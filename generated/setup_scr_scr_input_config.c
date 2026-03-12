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
    lv_obj_set_pos(ui->scr_input_config_lbl_tiltle, 450, 20);
    lv_obj_set_size(ui->scr_input_config_lbl_tiltle, 380, 59);
    lv_label_set_text(ui->scr_input_config_lbl_tiltle, "INPUT CONFIG");
    lv_label_set_long_mode(ui->scr_input_config_lbl_tiltle, LV_LABEL_LONG_WRAP);

    //Write style for scr_input_config_lbl_tiltle, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scr_input_config_lbl_tiltle, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_input_config_lbl_tiltle, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scr_input_config_lbl_tiltle, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scr_input_config_lbl_tiltle, &lv_font_Acme_Regular_50, LV_PART_MAIN|LV_STATE_DEFAULT);
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
    lv_obj_set_pos(ui->scr_input_config_lbl_value, 950, 39);
    lv_obj_set_size(ui->scr_input_config_lbl_value, 132, 32);
    lv_label_set_text(ui->scr_input_config_lbl_value, "EDGE-01");
    lv_label_set_long_mode(ui->scr_input_config_lbl_value, LV_LABEL_LONG_WRAP);

    //Write style for scr_input_config_lbl_value, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scr_input_config_lbl_value, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_input_config_lbl_value, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scr_input_config_lbl_value, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scr_input_config_lbl_value, &lv_font_Acme_Regular_30, LV_PART_MAIN|LV_STATE_DEFAULT);
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
    lv_obj_set_style_text_font(ui->scr_input_config_btn_online, &lv_font_arial_25, LV_PART_MAIN|LV_STATE_DEFAULT);
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
    lv_obj_set_pos(ui->scr_input_config_btn_test, 39, 640);
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
    lv_obj_set_style_text_font(ui->scr_input_config_btn_test, &lv_font_arial_30, LV_PART_MAIN|LV_STATE_DEFAULT);
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
    lv_obj_set_style_text_font(ui->scr_input_config_btn_save, &lv_font_arial_30, LV_PART_MAIN|LV_STATE_DEFAULT);
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
    lv_obj_set_style_text_font(ui->scr_input_config_tabview_intput, &lv_font_arial_25, LV_PART_MAIN|LV_STATE_DEFAULT);
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
    lv_style_set_text_font(&style_scr_input_config_tabview_intput_extra_btnm_items_default, &lv_font_arial_30);
    lv_style_set_text_opa(&style_scr_input_config_tabview_intput_extra_btnm_items_default, 255);
    for(uint32_t i = 0; i < lv_tabview_get_tab_count(ui->scr_input_config_tabview_intput); i++)
    {
        lv_obj_add_style(lv_obj_get_child(lv_tabview_get_tab_bar(ui->scr_input_config_tabview_intput), i), &style_scr_input_config_tabview_intput_extra_btnm_items_default, LV_PART_MAIN|LV_STATE_DEFAULT);
    }

    //Write style state: LV_STATE_CHECKED for &style_scr_input_config_tabview_intput_extra_btnm_items_checked
    static lv_style_t style_scr_input_config_tabview_intput_extra_btnm_items_checked;
    ui_init_style(&style_scr_input_config_tabview_intput_extra_btnm_items_checked);

    lv_style_set_text_color(&style_scr_input_config_tabview_intput_extra_btnm_items_checked, lv_color_hex(0x2195f6));
    lv_style_set_text_font(&style_scr_input_config_tabview_intput_extra_btnm_items_checked, &lv_font_montserratMedium_12);
    lv_style_set_text_opa(&style_scr_input_config_tabview_intput_extra_btnm_items_checked, 255);
    lv_style_set_border_width(&style_scr_input_config_tabview_intput_extra_btnm_items_checked, 4);
    lv_style_set_border_opa(&style_scr_input_config_tabview_intput_extra_btnm_items_checked, 255);
    lv_style_set_border_color(&style_scr_input_config_tabview_intput_extra_btnm_items_checked, lv_color_hex(0x2195f6));
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

    //Write codes scr_input_config_ddlist_ip1_debounce
    ui->scr_input_config_ddlist_ip1_debounce = lv_dropdown_create(ui->scr_input_config_cont_intput1);
    lv_obj_set_pos(ui->scr_input_config_ddlist_ip1_debounce, 447, 327);
    lv_obj_set_size(ui->scr_input_config_ddlist_ip1_debounce, 450, 50);
    lv_dropdown_set_options(ui->scr_input_config_ddlist_ip1_debounce, "20\n50\n100\n200");

    //Write style for scr_input_config_ddlist_ip1_debounce, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_text_color(ui->scr_input_config_ddlist_ip1_debounce, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scr_input_config_ddlist_ip1_debounce, &lv_font_arial_30, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scr_input_config_ddlist_ip1_debounce, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->scr_input_config_ddlist_ip1_debounce, 1, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->scr_input_config_ddlist_ip1_debounce, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->scr_input_config_ddlist_ip1_debounce, lv_color_hex(0xe1e6ee), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->scr_input_config_ddlist_ip1_debounce, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scr_input_config_ddlist_ip1_debounce, 8, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scr_input_config_ddlist_ip1_debounce, 6, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scr_input_config_ddlist_ip1_debounce, 6, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_input_config_ddlist_ip1_debounce, 1, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scr_input_config_ddlist_ip1_debounce, 78, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scr_input_config_ddlist_ip1_debounce, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scr_input_config_ddlist_ip1_debounce, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_input_config_ddlist_ip1_debounce, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style state: LV_STATE_CHECKED for &style_scr_input_config_ddlist_ip1_debounce_extra_list_selected_checked
    static lv_style_t style_scr_input_config_ddlist_ip1_debounce_extra_list_selected_checked;
    ui_init_style(&style_scr_input_config_ddlist_ip1_debounce_extra_list_selected_checked);

    lv_style_set_border_width(&style_scr_input_config_ddlist_ip1_debounce_extra_list_selected_checked, 1);
    lv_style_set_border_opa(&style_scr_input_config_ddlist_ip1_debounce_extra_list_selected_checked, 255);
    lv_style_set_border_color(&style_scr_input_config_ddlist_ip1_debounce_extra_list_selected_checked, lv_color_hex(0xe1e6ee));
    lv_style_set_border_side(&style_scr_input_config_ddlist_ip1_debounce_extra_list_selected_checked, LV_BORDER_SIDE_FULL);
    lv_style_set_radius(&style_scr_input_config_ddlist_ip1_debounce_extra_list_selected_checked, 3);
    lv_style_set_bg_opa(&style_scr_input_config_ddlist_ip1_debounce_extra_list_selected_checked, 255);
    lv_style_set_bg_color(&style_scr_input_config_ddlist_ip1_debounce_extra_list_selected_checked, lv_color_hex(0x00a1b5));
    lv_style_set_bg_grad_dir(&style_scr_input_config_ddlist_ip1_debounce_extra_list_selected_checked, LV_GRAD_DIR_NONE);
    lv_obj_add_style(lv_dropdown_get_list(ui->scr_input_config_ddlist_ip1_debounce), &style_scr_input_config_ddlist_ip1_debounce_extra_list_selected_checked, LV_PART_SELECTED|LV_STATE_CHECKED);

    //Write style state: LV_STATE_DEFAULT for &style_scr_input_config_ddlist_ip1_debounce_extra_list_main_default
    static lv_style_t style_scr_input_config_ddlist_ip1_debounce_extra_list_main_default;
    ui_init_style(&style_scr_input_config_ddlist_ip1_debounce_extra_list_main_default);

    lv_style_set_max_height(&style_scr_input_config_ddlist_ip1_debounce_extra_list_main_default, 90);
    lv_style_set_text_color(&style_scr_input_config_ddlist_ip1_debounce_extra_list_main_default, lv_color_hex(0x0D3055));
    lv_style_set_text_font(&style_scr_input_config_ddlist_ip1_debounce_extra_list_main_default, &lv_font_montserratMedium_12);
    lv_style_set_text_opa(&style_scr_input_config_ddlist_ip1_debounce_extra_list_main_default, 255);
    lv_style_set_border_width(&style_scr_input_config_ddlist_ip1_debounce_extra_list_main_default, 1);
    lv_style_set_border_opa(&style_scr_input_config_ddlist_ip1_debounce_extra_list_main_default, 255);
    lv_style_set_border_color(&style_scr_input_config_ddlist_ip1_debounce_extra_list_main_default, lv_color_hex(0xe1e6ee));
    lv_style_set_border_side(&style_scr_input_config_ddlist_ip1_debounce_extra_list_main_default, LV_BORDER_SIDE_FULL);
    lv_style_set_radius(&style_scr_input_config_ddlist_ip1_debounce_extra_list_main_default, 3);
    lv_style_set_bg_opa(&style_scr_input_config_ddlist_ip1_debounce_extra_list_main_default, 255);
    lv_style_set_bg_color(&style_scr_input_config_ddlist_ip1_debounce_extra_list_main_default, lv_color_hex(0xffffff));
    lv_style_set_bg_grad_dir(&style_scr_input_config_ddlist_ip1_debounce_extra_list_main_default, LV_GRAD_DIR_NONE);
    lv_obj_add_style(lv_dropdown_get_list(ui->scr_input_config_ddlist_ip1_debounce), &style_scr_input_config_ddlist_ip1_debounce_extra_list_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style state: LV_STATE_DEFAULT for &style_scr_input_config_ddlist_ip1_debounce_extra_list_scrollbar_default
    static lv_style_t style_scr_input_config_ddlist_ip1_debounce_extra_list_scrollbar_default;
    ui_init_style(&style_scr_input_config_ddlist_ip1_debounce_extra_list_scrollbar_default);

    lv_style_set_radius(&style_scr_input_config_ddlist_ip1_debounce_extra_list_scrollbar_default, 3);
    lv_style_set_bg_opa(&style_scr_input_config_ddlist_ip1_debounce_extra_list_scrollbar_default, 255);
    lv_style_set_bg_color(&style_scr_input_config_ddlist_ip1_debounce_extra_list_scrollbar_default, lv_color_hex(0x00ff00));
    lv_style_set_bg_grad_dir(&style_scr_input_config_ddlist_ip1_debounce_extra_list_scrollbar_default, LV_GRAD_DIR_NONE);
    lv_obj_add_style(lv_dropdown_get_list(ui->scr_input_config_ddlist_ip1_debounce), &style_scr_input_config_ddlist_ip1_debounce_extra_list_scrollbar_default, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);

    //Write codes scr_input_config_ddlist_ip1_function
    ui->scr_input_config_ddlist_ip1_function = lv_dropdown_create(ui->scr_input_config_cont_intput1);
    lv_obj_set_pos(ui->scr_input_config_ddlist_ip1_function, 447, 59);
    lv_obj_set_size(ui->scr_input_config_ddlist_ip1_function, 450, 50);
    lv_dropdown_set_options(ui->scr_input_config_ddlist_ip1_function, "Start\nStop\nError\nCount Product\nNone");

    //Write style for scr_input_config_ddlist_ip1_function, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_text_color(ui->scr_input_config_ddlist_ip1_function, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scr_input_config_ddlist_ip1_function, &lv_font_arial_30, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scr_input_config_ddlist_ip1_function, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->scr_input_config_ddlist_ip1_function, 1, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->scr_input_config_ddlist_ip1_function, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->scr_input_config_ddlist_ip1_function, lv_color_hex(0xe1e6ee), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->scr_input_config_ddlist_ip1_function, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scr_input_config_ddlist_ip1_function, 8, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scr_input_config_ddlist_ip1_function, 6, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scr_input_config_ddlist_ip1_function, 6, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_input_config_ddlist_ip1_function, 1, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scr_input_config_ddlist_ip1_function, 78, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scr_input_config_ddlist_ip1_function, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scr_input_config_ddlist_ip1_function, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_input_config_ddlist_ip1_function, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style state: LV_STATE_CHECKED for &style_scr_input_config_ddlist_ip1_function_extra_list_selected_checked
    static lv_style_t style_scr_input_config_ddlist_ip1_function_extra_list_selected_checked;
    ui_init_style(&style_scr_input_config_ddlist_ip1_function_extra_list_selected_checked);

    lv_style_set_border_width(&style_scr_input_config_ddlist_ip1_function_extra_list_selected_checked, 1);
    lv_style_set_border_opa(&style_scr_input_config_ddlist_ip1_function_extra_list_selected_checked, 255);
    lv_style_set_border_color(&style_scr_input_config_ddlist_ip1_function_extra_list_selected_checked, lv_color_hex(0xe1e6ee));
    lv_style_set_border_side(&style_scr_input_config_ddlist_ip1_function_extra_list_selected_checked, LV_BORDER_SIDE_FULL);
    lv_style_set_radius(&style_scr_input_config_ddlist_ip1_function_extra_list_selected_checked, 3);
    lv_style_set_bg_opa(&style_scr_input_config_ddlist_ip1_function_extra_list_selected_checked, 255);
    lv_style_set_bg_color(&style_scr_input_config_ddlist_ip1_function_extra_list_selected_checked, lv_color_hex(0x00a1b5));
    lv_style_set_bg_grad_dir(&style_scr_input_config_ddlist_ip1_function_extra_list_selected_checked, LV_GRAD_DIR_NONE);
    lv_obj_add_style(lv_dropdown_get_list(ui->scr_input_config_ddlist_ip1_function), &style_scr_input_config_ddlist_ip1_function_extra_list_selected_checked, LV_PART_SELECTED|LV_STATE_CHECKED);

    //Write style state: LV_STATE_DEFAULT for &style_scr_input_config_ddlist_ip1_function_extra_list_main_default
    static lv_style_t style_scr_input_config_ddlist_ip1_function_extra_list_main_default;
    ui_init_style(&style_scr_input_config_ddlist_ip1_function_extra_list_main_default);

    lv_style_set_max_height(&style_scr_input_config_ddlist_ip1_function_extra_list_main_default, 90);
    lv_style_set_text_color(&style_scr_input_config_ddlist_ip1_function_extra_list_main_default, lv_color_hex(0x0D3055));
    lv_style_set_text_font(&style_scr_input_config_ddlist_ip1_function_extra_list_main_default, &lv_font_montserratMedium_12);
    lv_style_set_text_opa(&style_scr_input_config_ddlist_ip1_function_extra_list_main_default, 255);
    lv_style_set_border_width(&style_scr_input_config_ddlist_ip1_function_extra_list_main_default, 1);
    lv_style_set_border_opa(&style_scr_input_config_ddlist_ip1_function_extra_list_main_default, 255);
    lv_style_set_border_color(&style_scr_input_config_ddlist_ip1_function_extra_list_main_default, lv_color_hex(0xe1e6ee));
    lv_style_set_border_side(&style_scr_input_config_ddlist_ip1_function_extra_list_main_default, LV_BORDER_SIDE_FULL);
    lv_style_set_radius(&style_scr_input_config_ddlist_ip1_function_extra_list_main_default, 3);
    lv_style_set_bg_opa(&style_scr_input_config_ddlist_ip1_function_extra_list_main_default, 255);
    lv_style_set_bg_color(&style_scr_input_config_ddlist_ip1_function_extra_list_main_default, lv_color_hex(0xffffff));
    lv_style_set_bg_grad_dir(&style_scr_input_config_ddlist_ip1_function_extra_list_main_default, LV_GRAD_DIR_NONE);
    lv_obj_add_style(lv_dropdown_get_list(ui->scr_input_config_ddlist_ip1_function), &style_scr_input_config_ddlist_ip1_function_extra_list_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style state: LV_STATE_DEFAULT for &style_scr_input_config_ddlist_ip1_function_extra_list_scrollbar_default
    static lv_style_t style_scr_input_config_ddlist_ip1_function_extra_list_scrollbar_default;
    ui_init_style(&style_scr_input_config_ddlist_ip1_function_extra_list_scrollbar_default);

    lv_style_set_radius(&style_scr_input_config_ddlist_ip1_function_extra_list_scrollbar_default, 3);
    lv_style_set_bg_opa(&style_scr_input_config_ddlist_ip1_function_extra_list_scrollbar_default, 255);
    lv_style_set_bg_color(&style_scr_input_config_ddlist_ip1_function_extra_list_scrollbar_default, lv_color_hex(0x00ff00));
    lv_style_set_bg_grad_dir(&style_scr_input_config_ddlist_ip1_function_extra_list_scrollbar_default, LV_GRAD_DIR_NONE);
    lv_obj_add_style(lv_dropdown_get_list(ui->scr_input_config_ddlist_ip1_function), &style_scr_input_config_ddlist_ip1_function_extra_list_scrollbar_default, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);

    //Write codes scr_input_config_lbl_ip1_debounce
    ui->scr_input_config_lbl_ip1_debounce = lv_label_create(ui->scr_input_config_cont_intput1);
    lv_obj_set_pos(ui->scr_input_config_lbl_ip1_debounce, 138, 336);
    lv_obj_set_size(ui->scr_input_config_lbl_ip1_debounce, 221, 32);
    lv_label_set_text(ui->scr_input_config_lbl_ip1_debounce, "Debounce (ms)");
    lv_label_set_long_mode(ui->scr_input_config_lbl_ip1_debounce, LV_LABEL_LONG_WRAP);

    //Write style for scr_input_config_lbl_ip1_debounce, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scr_input_config_lbl_ip1_debounce, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_input_config_lbl_ip1_debounce, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scr_input_config_lbl_ip1_debounce, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scr_input_config_lbl_ip1_debounce, &lv_font_arial_30, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scr_input_config_lbl_ip1_debounce, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->scr_input_config_lbl_ip1_debounce, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->scr_input_config_lbl_ip1_debounce, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scr_input_config_lbl_ip1_debounce, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scr_input_config_lbl_ip1_debounce, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scr_input_config_lbl_ip1_debounce, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scr_input_config_lbl_ip1_debounce, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scr_input_config_lbl_ip1_debounce, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scr_input_config_lbl_ip1_debounce, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_input_config_lbl_ip1_debounce, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scr_input_config_lbl_ip1_trigger
    ui->scr_input_config_lbl_ip1_trigger = lv_label_create(ui->scr_input_config_cont_intput1);
    lv_obj_set_pos(ui->scr_input_config_lbl_ip1_trigger, 138, 247);
    lv_obj_set_size(ui->scr_input_config_lbl_ip1_trigger, 187, 32);
    lv_label_set_text(ui->scr_input_config_lbl_ip1_trigger, "Trigger Type");
    lv_label_set_long_mode(ui->scr_input_config_lbl_ip1_trigger, LV_LABEL_LONG_WRAP);

    //Write style for scr_input_config_lbl_ip1_trigger, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scr_input_config_lbl_ip1_trigger, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_input_config_lbl_ip1_trigger, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scr_input_config_lbl_ip1_trigger, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scr_input_config_lbl_ip1_trigger, &lv_font_arial_30, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scr_input_config_lbl_ip1_trigger, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->scr_input_config_lbl_ip1_trigger, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->scr_input_config_lbl_ip1_trigger, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scr_input_config_lbl_ip1_trigger, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scr_input_config_lbl_ip1_trigger, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scr_input_config_lbl_ip1_trigger, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scr_input_config_lbl_ip1_trigger, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scr_input_config_lbl_ip1_trigger, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scr_input_config_lbl_ip1_trigger, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_input_config_lbl_ip1_trigger, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scr_input_config_ddlist_ip1_trigger
    ui->scr_input_config_ddlist_ip1_trigger = lv_dropdown_create(ui->scr_input_config_cont_intput1);
    lv_obj_set_pos(ui->scr_input_config_ddlist_ip1_trigger, 447, 238);
    lv_obj_set_size(ui->scr_input_config_ddlist_ip1_trigger, 450, 50);
    lv_dropdown_set_options(ui->scr_input_config_ddlist_ip1_trigger, "Rising Edge\nFalling Edge\nLevel High\nLevel Low");

    //Write style for scr_input_config_ddlist_ip1_trigger, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_text_color(ui->scr_input_config_ddlist_ip1_trigger, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scr_input_config_ddlist_ip1_trigger, &lv_font_arial_30, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scr_input_config_ddlist_ip1_trigger, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->scr_input_config_ddlist_ip1_trigger, 1, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->scr_input_config_ddlist_ip1_trigger, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->scr_input_config_ddlist_ip1_trigger, lv_color_hex(0xe1e6ee), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->scr_input_config_ddlist_ip1_trigger, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scr_input_config_ddlist_ip1_trigger, 8, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scr_input_config_ddlist_ip1_trigger, 6, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scr_input_config_ddlist_ip1_trigger, 6, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_input_config_ddlist_ip1_trigger, 1, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scr_input_config_ddlist_ip1_trigger, 79, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scr_input_config_ddlist_ip1_trigger, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scr_input_config_ddlist_ip1_trigger, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_input_config_ddlist_ip1_trigger, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style state: LV_STATE_CHECKED for &style_scr_input_config_ddlist_ip1_trigger_extra_list_selected_checked
    static lv_style_t style_scr_input_config_ddlist_ip1_trigger_extra_list_selected_checked;
    ui_init_style(&style_scr_input_config_ddlist_ip1_trigger_extra_list_selected_checked);

    lv_style_set_border_width(&style_scr_input_config_ddlist_ip1_trigger_extra_list_selected_checked, 1);
    lv_style_set_border_opa(&style_scr_input_config_ddlist_ip1_trigger_extra_list_selected_checked, 255);
    lv_style_set_border_color(&style_scr_input_config_ddlist_ip1_trigger_extra_list_selected_checked, lv_color_hex(0xe1e6ee));
    lv_style_set_border_side(&style_scr_input_config_ddlist_ip1_trigger_extra_list_selected_checked, LV_BORDER_SIDE_FULL);
    lv_style_set_radius(&style_scr_input_config_ddlist_ip1_trigger_extra_list_selected_checked, 3);
    lv_style_set_bg_opa(&style_scr_input_config_ddlist_ip1_trigger_extra_list_selected_checked, 255);
    lv_style_set_bg_color(&style_scr_input_config_ddlist_ip1_trigger_extra_list_selected_checked, lv_color_hex(0x00a1b5));
    lv_style_set_bg_grad_dir(&style_scr_input_config_ddlist_ip1_trigger_extra_list_selected_checked, LV_GRAD_DIR_NONE);
    lv_obj_add_style(lv_dropdown_get_list(ui->scr_input_config_ddlist_ip1_trigger), &style_scr_input_config_ddlist_ip1_trigger_extra_list_selected_checked, LV_PART_SELECTED|LV_STATE_CHECKED);

    //Write style state: LV_STATE_DEFAULT for &style_scr_input_config_ddlist_ip1_trigger_extra_list_main_default
    static lv_style_t style_scr_input_config_ddlist_ip1_trigger_extra_list_main_default;
    ui_init_style(&style_scr_input_config_ddlist_ip1_trigger_extra_list_main_default);

    lv_style_set_max_height(&style_scr_input_config_ddlist_ip1_trigger_extra_list_main_default, 90);
    lv_style_set_text_color(&style_scr_input_config_ddlist_ip1_trigger_extra_list_main_default, lv_color_hex(0x0D3055));
    lv_style_set_text_font(&style_scr_input_config_ddlist_ip1_trigger_extra_list_main_default, &lv_font_montserratMedium_12);
    lv_style_set_text_opa(&style_scr_input_config_ddlist_ip1_trigger_extra_list_main_default, 255);
    lv_style_set_border_width(&style_scr_input_config_ddlist_ip1_trigger_extra_list_main_default, 1);
    lv_style_set_border_opa(&style_scr_input_config_ddlist_ip1_trigger_extra_list_main_default, 255);
    lv_style_set_border_color(&style_scr_input_config_ddlist_ip1_trigger_extra_list_main_default, lv_color_hex(0xe1e6ee));
    lv_style_set_border_side(&style_scr_input_config_ddlist_ip1_trigger_extra_list_main_default, LV_BORDER_SIDE_FULL);
    lv_style_set_radius(&style_scr_input_config_ddlist_ip1_trigger_extra_list_main_default, 3);
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
    lv_obj_set_pos(ui->scr_input_config_lbl_ip1_function, 138, 68);
    lv_obj_set_size(ui->scr_input_config_lbl_ip1_function, 143, 32);
    lv_label_set_text(ui->scr_input_config_lbl_ip1_function, "Function");
    lv_label_set_long_mode(ui->scr_input_config_lbl_ip1_function, LV_LABEL_LONG_WRAP);

    //Write style for scr_input_config_lbl_ip1_function, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scr_input_config_lbl_ip1_function, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_input_config_lbl_ip1_function, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scr_input_config_lbl_ip1_function, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scr_input_config_lbl_ip1_function, &lv_font_arial_30, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scr_input_config_lbl_ip1_function, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->scr_input_config_lbl_ip1_function, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->scr_input_config_lbl_ip1_function, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scr_input_config_lbl_ip1_function, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scr_input_config_lbl_ip1_function, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scr_input_config_lbl_ip1_function, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scr_input_config_lbl_ip1_function, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scr_input_config_lbl_ip1_function, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scr_input_config_lbl_ip1_function, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_input_config_lbl_ip1_function, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scr_input_config_lbl_ip1
    ui->scr_input_config_lbl_ip1 = lv_label_create(ui->scr_input_config_cont_intput1);
    lv_obj_set_pos(ui->scr_input_config_lbl_ip1, 0, 0);
    lv_obj_set_size(ui->scr_input_config_lbl_ip1, 381, 32);
    lv_label_set_text_static(ui->scr_input_config_lbl_ip1, "Selected Input: INPUT 1");
    lv_label_set_long_mode(ui->scr_input_config_lbl_ip1, LV_LABEL_LONG_WRAP);

    //Write style for scr_input_config_lbl_ip1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scr_input_config_lbl_ip1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_input_config_lbl_ip1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scr_input_config_lbl_ip1, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scr_input_config_lbl_ip1, &lv_font_arial_30, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scr_input_config_lbl_ip1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->scr_input_config_lbl_ip1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->scr_input_config_lbl_ip1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scr_input_config_lbl_ip1, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scr_input_config_lbl_ip1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scr_input_config_lbl_ip1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scr_input_config_lbl_ip1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scr_input_config_lbl_ip1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scr_input_config_lbl_ip1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_input_config_lbl_ip1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scr_input_config_lbl_ip1_livestatus
    ui->scr_input_config_lbl_ip1_livestatus = lv_label_create(ui->scr_input_config_cont_intput1);
    lv_obj_set_pos(ui->scr_input_config_lbl_ip1_livestatus, 138, 412);
    lv_obj_set_size(ui->scr_input_config_lbl_ip1_livestatus, 174, 32);
    lv_label_set_text(ui->scr_input_config_lbl_ip1_livestatus, "Live Status");
    lv_label_set_long_mode(ui->scr_input_config_lbl_ip1_livestatus, LV_LABEL_LONG_WRAP);

    //Write style for scr_input_config_lbl_ip1_livestatus, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scr_input_config_lbl_ip1_livestatus, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_input_config_lbl_ip1_livestatus, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scr_input_config_lbl_ip1_livestatus, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scr_input_config_lbl_ip1_livestatus, &lv_font_arial_30, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scr_input_config_lbl_ip1_livestatus, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->scr_input_config_lbl_ip1_livestatus, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->scr_input_config_lbl_ip1_livestatus, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scr_input_config_lbl_ip1_livestatus, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scr_input_config_lbl_ip1_livestatus, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scr_input_config_lbl_ip1_livestatus, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scr_input_config_lbl_ip1_livestatus, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scr_input_config_lbl_ip1_livestatus, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scr_input_config_lbl_ip1_livestatus, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_input_config_lbl_ip1_livestatus, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scr_input_config_lbl_ip1_status
    ui->scr_input_config_lbl_ip1_status = lv_label_create(ui->scr_input_config_cont_intput1);
    lv_obj_set_pos(ui->scr_input_config_lbl_ip1_status, 477, 414);
    lv_obj_set_size(ui->scr_input_config_lbl_ip1_status, 114, 32);
    lv_label_set_text(ui->scr_input_config_lbl_ip1_status, "LOW");
    lv_label_set_long_mode(ui->scr_input_config_lbl_ip1_status, LV_LABEL_LONG_WRAP);

    //Write style for scr_input_config_lbl_ip1_status, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scr_input_config_lbl_ip1_status, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_input_config_lbl_ip1_status, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scr_input_config_lbl_ip1_status, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scr_input_config_lbl_ip1_status, &lv_font_arial_30, LV_PART_MAIN|LV_STATE_DEFAULT);
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
    lv_obj_set_pos(ui->scr_input_config_led_ip1_status, 447, 420);
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

    //Write codes scr_input_config_line_4
    ui->scr_input_config_line_4 = lv_line_create(ui->scr_input_config_cont_intput1);
    lv_obj_set_pos(ui->scr_input_config_line_4, 143, 394);
    lv_obj_set_size(ui->scr_input_config_line_4, 850, 2);
    static lv_point_precise_t scr_input_config_line_4[] = {{0, 0},{1100, 0}};
    lv_line_set_points(ui->scr_input_config_line_4, scr_input_config_line_4, 2);

    //Write style for scr_input_config_line_4, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_line_width(ui->scr_input_config_line_4, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_color(ui->scr_input_config_line_4, lv_color_hex(0x757575), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_opa(ui->scr_input_config_line_4, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_rounded(ui->scr_input_config_line_4, true, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scr_input_config_ddlist_ip1_press
    ui->scr_input_config_ddlist_ip1_press = lv_dropdown_create(ui->scr_input_config_cont_intput1);
    lv_obj_set_pos(ui->scr_input_config_ddlist_ip1_press, 447, 147);
    lv_obj_set_size(ui->scr_input_config_ddlist_ip1_press, 450, 50);
    lv_dropdown_set_options(ui->scr_input_config_ddlist_ip1_press, "Click\nHold\nPulse\nLevel");

    //Write style for scr_input_config_ddlist_ip1_press, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_text_color(ui->scr_input_config_ddlist_ip1_press, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scr_input_config_ddlist_ip1_press, &lv_font_arial_30, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scr_input_config_ddlist_ip1_press, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->scr_input_config_ddlist_ip1_press, 1, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->scr_input_config_ddlist_ip1_press, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->scr_input_config_ddlist_ip1_press, lv_color_hex(0xe1e6ee), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->scr_input_config_ddlist_ip1_press, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scr_input_config_ddlist_ip1_press, 8, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scr_input_config_ddlist_ip1_press, 6, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scr_input_config_ddlist_ip1_press, 6, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_input_config_ddlist_ip1_press, 1, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scr_input_config_ddlist_ip1_press, 78, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scr_input_config_ddlist_ip1_press, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scr_input_config_ddlist_ip1_press, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_input_config_ddlist_ip1_press, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style state: LV_STATE_CHECKED for &style_scr_input_config_ddlist_ip1_press_extra_list_selected_checked
    static lv_style_t style_scr_input_config_ddlist_ip1_press_extra_list_selected_checked;
    ui_init_style(&style_scr_input_config_ddlist_ip1_press_extra_list_selected_checked);

    lv_style_set_border_width(&style_scr_input_config_ddlist_ip1_press_extra_list_selected_checked, 1);
    lv_style_set_border_opa(&style_scr_input_config_ddlist_ip1_press_extra_list_selected_checked, 255);
    lv_style_set_border_color(&style_scr_input_config_ddlist_ip1_press_extra_list_selected_checked, lv_color_hex(0xe1e6ee));
    lv_style_set_border_side(&style_scr_input_config_ddlist_ip1_press_extra_list_selected_checked, LV_BORDER_SIDE_FULL);
    lv_style_set_radius(&style_scr_input_config_ddlist_ip1_press_extra_list_selected_checked, 3);
    lv_style_set_bg_opa(&style_scr_input_config_ddlist_ip1_press_extra_list_selected_checked, 255);
    lv_style_set_bg_color(&style_scr_input_config_ddlist_ip1_press_extra_list_selected_checked, lv_color_hex(0x00a1b5));
    lv_style_set_bg_grad_dir(&style_scr_input_config_ddlist_ip1_press_extra_list_selected_checked, LV_GRAD_DIR_NONE);
    lv_obj_add_style(lv_dropdown_get_list(ui->scr_input_config_ddlist_ip1_press), &style_scr_input_config_ddlist_ip1_press_extra_list_selected_checked, LV_PART_SELECTED|LV_STATE_CHECKED);

    //Write style state: LV_STATE_DEFAULT for &style_scr_input_config_ddlist_ip1_press_extra_list_main_default
    static lv_style_t style_scr_input_config_ddlist_ip1_press_extra_list_main_default;
    ui_init_style(&style_scr_input_config_ddlist_ip1_press_extra_list_main_default);

    lv_style_set_max_height(&style_scr_input_config_ddlist_ip1_press_extra_list_main_default, 90);
    lv_style_set_text_color(&style_scr_input_config_ddlist_ip1_press_extra_list_main_default, lv_color_hex(0x0D3055));
    lv_style_set_text_font(&style_scr_input_config_ddlist_ip1_press_extra_list_main_default, &lv_font_montserratMedium_12);
    lv_style_set_text_opa(&style_scr_input_config_ddlist_ip1_press_extra_list_main_default, 255);
    lv_style_set_border_width(&style_scr_input_config_ddlist_ip1_press_extra_list_main_default, 1);
    lv_style_set_border_opa(&style_scr_input_config_ddlist_ip1_press_extra_list_main_default, 255);
    lv_style_set_border_color(&style_scr_input_config_ddlist_ip1_press_extra_list_main_default, lv_color_hex(0xe1e6ee));
    lv_style_set_border_side(&style_scr_input_config_ddlist_ip1_press_extra_list_main_default, LV_BORDER_SIDE_FULL);
    lv_style_set_radius(&style_scr_input_config_ddlist_ip1_press_extra_list_main_default, 3);
    lv_style_set_bg_opa(&style_scr_input_config_ddlist_ip1_press_extra_list_main_default, 255);
    lv_style_set_bg_color(&style_scr_input_config_ddlist_ip1_press_extra_list_main_default, lv_color_hex(0xffffff));
    lv_style_set_bg_grad_dir(&style_scr_input_config_ddlist_ip1_press_extra_list_main_default, LV_GRAD_DIR_NONE);
    lv_obj_add_style(lv_dropdown_get_list(ui->scr_input_config_ddlist_ip1_press), &style_scr_input_config_ddlist_ip1_press_extra_list_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style state: LV_STATE_DEFAULT for &style_scr_input_config_ddlist_ip1_press_extra_list_scrollbar_default
    static lv_style_t style_scr_input_config_ddlist_ip1_press_extra_list_scrollbar_default;
    ui_init_style(&style_scr_input_config_ddlist_ip1_press_extra_list_scrollbar_default);

    lv_style_set_radius(&style_scr_input_config_ddlist_ip1_press_extra_list_scrollbar_default, 3);
    lv_style_set_bg_opa(&style_scr_input_config_ddlist_ip1_press_extra_list_scrollbar_default, 255);
    lv_style_set_bg_color(&style_scr_input_config_ddlist_ip1_press_extra_list_scrollbar_default, lv_color_hex(0x00ff00));
    lv_style_set_bg_grad_dir(&style_scr_input_config_ddlist_ip1_press_extra_list_scrollbar_default, LV_GRAD_DIR_NONE);
    lv_obj_add_style(lv_dropdown_get_list(ui->scr_input_config_ddlist_ip1_press), &style_scr_input_config_ddlist_ip1_press_extra_list_scrollbar_default, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);

    //Write codes scr_input_config_lbl_ip1_press
    ui->scr_input_config_lbl_ip1_press = lv_label_create(ui->scr_input_config_cont_intput1);
    lv_obj_set_pos(ui->scr_input_config_lbl_ip1_press, 132, 156);
    lv_obj_set_size(ui->scr_input_config_lbl_ip1_press, 189, 32);
    lv_label_set_text(ui->scr_input_config_lbl_ip1_press, "Press Type");
    lv_label_set_long_mode(ui->scr_input_config_lbl_ip1_press, LV_LABEL_LONG_WRAP);

    //Write style for scr_input_config_lbl_ip1_press, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scr_input_config_lbl_ip1_press, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_input_config_lbl_ip1_press, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scr_input_config_lbl_ip1_press, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scr_input_config_lbl_ip1_press, &lv_font_arial_30, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scr_input_config_lbl_ip1_press, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->scr_input_config_lbl_ip1_press, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->scr_input_config_lbl_ip1_press, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scr_input_config_lbl_ip1_press, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scr_input_config_lbl_ip1_press, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scr_input_config_lbl_ip1_press, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scr_input_config_lbl_ip1_press, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scr_input_config_lbl_ip1_press, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scr_input_config_lbl_ip1_press, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_input_config_lbl_ip1_press, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

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

    //Write codes scr_input_config_line_22
    ui->scr_input_config_line_22 = lv_line_create(ui->scr_input_config_cont_input2);
    lv_obj_set_pos(ui->scr_input_config_line_22, 0, 40);
    lv_obj_set_size(ui->scr_input_config_line_22, 1100, 2);
    static lv_point_precise_t scr_input_config_line_22[] = {{0, 0},{1100, 0}};
    lv_line_set_points(ui->scr_input_config_line_22, scr_input_config_line_22, 2);

    //Write style for scr_input_config_line_22, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_line_width(ui->scr_input_config_line_22, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_color(ui->scr_input_config_line_22, lv_color_hex(0x757575), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_opa(ui->scr_input_config_line_22, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_rounded(ui->scr_input_config_line_22, true, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scr_input_config_ddlist_ip2_debounce
    ui->scr_input_config_ddlist_ip2_debounce = lv_dropdown_create(ui->scr_input_config_cont_input2);
    lv_obj_set_pos(ui->scr_input_config_ddlist_ip2_debounce, 447, 327);
    lv_obj_set_size(ui->scr_input_config_ddlist_ip2_debounce, 450, 50);
    lv_dropdown_set_options(ui->scr_input_config_ddlist_ip2_debounce, "20\n50\n100\n200");

    //Write style for scr_input_config_ddlist_ip2_debounce, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_text_color(ui->scr_input_config_ddlist_ip2_debounce, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scr_input_config_ddlist_ip2_debounce, &lv_font_arial_30, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scr_input_config_ddlist_ip2_debounce, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->scr_input_config_ddlist_ip2_debounce, 1, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->scr_input_config_ddlist_ip2_debounce, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->scr_input_config_ddlist_ip2_debounce, lv_color_hex(0xe1e6ee), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->scr_input_config_ddlist_ip2_debounce, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scr_input_config_ddlist_ip2_debounce, 8, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scr_input_config_ddlist_ip2_debounce, 6, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scr_input_config_ddlist_ip2_debounce, 6, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_input_config_ddlist_ip2_debounce, 1, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scr_input_config_ddlist_ip2_debounce, 78, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scr_input_config_ddlist_ip2_debounce, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scr_input_config_ddlist_ip2_debounce, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_input_config_ddlist_ip2_debounce, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style state: LV_STATE_CHECKED for &style_scr_input_config_ddlist_ip2_debounce_extra_list_selected_checked
    static lv_style_t style_scr_input_config_ddlist_ip2_debounce_extra_list_selected_checked;
    ui_init_style(&style_scr_input_config_ddlist_ip2_debounce_extra_list_selected_checked);

    lv_style_set_border_width(&style_scr_input_config_ddlist_ip2_debounce_extra_list_selected_checked, 1);
    lv_style_set_border_opa(&style_scr_input_config_ddlist_ip2_debounce_extra_list_selected_checked, 255);
    lv_style_set_border_color(&style_scr_input_config_ddlist_ip2_debounce_extra_list_selected_checked, lv_color_hex(0xe1e6ee));
    lv_style_set_border_side(&style_scr_input_config_ddlist_ip2_debounce_extra_list_selected_checked, LV_BORDER_SIDE_FULL);
    lv_style_set_radius(&style_scr_input_config_ddlist_ip2_debounce_extra_list_selected_checked, 3);
    lv_style_set_bg_opa(&style_scr_input_config_ddlist_ip2_debounce_extra_list_selected_checked, 255);
    lv_style_set_bg_color(&style_scr_input_config_ddlist_ip2_debounce_extra_list_selected_checked, lv_color_hex(0x00a1b5));
    lv_style_set_bg_grad_dir(&style_scr_input_config_ddlist_ip2_debounce_extra_list_selected_checked, LV_GRAD_DIR_NONE);
    lv_obj_add_style(lv_dropdown_get_list(ui->scr_input_config_ddlist_ip2_debounce), &style_scr_input_config_ddlist_ip2_debounce_extra_list_selected_checked, LV_PART_SELECTED|LV_STATE_CHECKED);

    //Write style state: LV_STATE_DEFAULT for &style_scr_input_config_ddlist_ip2_debounce_extra_list_main_default
    static lv_style_t style_scr_input_config_ddlist_ip2_debounce_extra_list_main_default;
    ui_init_style(&style_scr_input_config_ddlist_ip2_debounce_extra_list_main_default);

    lv_style_set_max_height(&style_scr_input_config_ddlist_ip2_debounce_extra_list_main_default, 90);
    lv_style_set_text_color(&style_scr_input_config_ddlist_ip2_debounce_extra_list_main_default, lv_color_hex(0x0D3055));
    lv_style_set_text_font(&style_scr_input_config_ddlist_ip2_debounce_extra_list_main_default, &lv_font_montserratMedium_12);
    lv_style_set_text_opa(&style_scr_input_config_ddlist_ip2_debounce_extra_list_main_default, 255);
    lv_style_set_border_width(&style_scr_input_config_ddlist_ip2_debounce_extra_list_main_default, 1);
    lv_style_set_border_opa(&style_scr_input_config_ddlist_ip2_debounce_extra_list_main_default, 255);
    lv_style_set_border_color(&style_scr_input_config_ddlist_ip2_debounce_extra_list_main_default, lv_color_hex(0xe1e6ee));
    lv_style_set_border_side(&style_scr_input_config_ddlist_ip2_debounce_extra_list_main_default, LV_BORDER_SIDE_FULL);
    lv_style_set_radius(&style_scr_input_config_ddlist_ip2_debounce_extra_list_main_default, 3);
    lv_style_set_bg_opa(&style_scr_input_config_ddlist_ip2_debounce_extra_list_main_default, 255);
    lv_style_set_bg_color(&style_scr_input_config_ddlist_ip2_debounce_extra_list_main_default, lv_color_hex(0xffffff));
    lv_style_set_bg_grad_dir(&style_scr_input_config_ddlist_ip2_debounce_extra_list_main_default, LV_GRAD_DIR_NONE);
    lv_obj_add_style(lv_dropdown_get_list(ui->scr_input_config_ddlist_ip2_debounce), &style_scr_input_config_ddlist_ip2_debounce_extra_list_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style state: LV_STATE_DEFAULT for &style_scr_input_config_ddlist_ip2_debounce_extra_list_scrollbar_default
    static lv_style_t style_scr_input_config_ddlist_ip2_debounce_extra_list_scrollbar_default;
    ui_init_style(&style_scr_input_config_ddlist_ip2_debounce_extra_list_scrollbar_default);

    lv_style_set_radius(&style_scr_input_config_ddlist_ip2_debounce_extra_list_scrollbar_default, 3);
    lv_style_set_bg_opa(&style_scr_input_config_ddlist_ip2_debounce_extra_list_scrollbar_default, 255);
    lv_style_set_bg_color(&style_scr_input_config_ddlist_ip2_debounce_extra_list_scrollbar_default, lv_color_hex(0x00ff00));
    lv_style_set_bg_grad_dir(&style_scr_input_config_ddlist_ip2_debounce_extra_list_scrollbar_default, LV_GRAD_DIR_NONE);
    lv_obj_add_style(lv_dropdown_get_list(ui->scr_input_config_ddlist_ip2_debounce), &style_scr_input_config_ddlist_ip2_debounce_extra_list_scrollbar_default, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);

    //Write codes scr_input_config_ddlist_ip2_function
    ui->scr_input_config_ddlist_ip2_function = lv_dropdown_create(ui->scr_input_config_cont_input2);
    lv_obj_set_pos(ui->scr_input_config_ddlist_ip2_function, 447, 59);
    lv_obj_set_size(ui->scr_input_config_ddlist_ip2_function, 450, 50);
    lv_dropdown_set_options(ui->scr_input_config_ddlist_ip2_function, "Start\nStop\nError\nCount Product\nNone");

    //Write style for scr_input_config_ddlist_ip2_function, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_text_color(ui->scr_input_config_ddlist_ip2_function, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scr_input_config_ddlist_ip2_function, &lv_font_arial_30, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scr_input_config_ddlist_ip2_function, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->scr_input_config_ddlist_ip2_function, 1, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->scr_input_config_ddlist_ip2_function, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->scr_input_config_ddlist_ip2_function, lv_color_hex(0xe1e6ee), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->scr_input_config_ddlist_ip2_function, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scr_input_config_ddlist_ip2_function, 8, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scr_input_config_ddlist_ip2_function, 6, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scr_input_config_ddlist_ip2_function, 6, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_input_config_ddlist_ip2_function, 1, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scr_input_config_ddlist_ip2_function, 78, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scr_input_config_ddlist_ip2_function, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scr_input_config_ddlist_ip2_function, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_input_config_ddlist_ip2_function, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style state: LV_STATE_CHECKED for &style_scr_input_config_ddlist_ip2_function_extra_list_selected_checked
    static lv_style_t style_scr_input_config_ddlist_ip2_function_extra_list_selected_checked;
    ui_init_style(&style_scr_input_config_ddlist_ip2_function_extra_list_selected_checked);

    lv_style_set_border_width(&style_scr_input_config_ddlist_ip2_function_extra_list_selected_checked, 1);
    lv_style_set_border_opa(&style_scr_input_config_ddlist_ip2_function_extra_list_selected_checked, 255);
    lv_style_set_border_color(&style_scr_input_config_ddlist_ip2_function_extra_list_selected_checked, lv_color_hex(0xe1e6ee));
    lv_style_set_border_side(&style_scr_input_config_ddlist_ip2_function_extra_list_selected_checked, LV_BORDER_SIDE_FULL);
    lv_style_set_radius(&style_scr_input_config_ddlist_ip2_function_extra_list_selected_checked, 3);
    lv_style_set_bg_opa(&style_scr_input_config_ddlist_ip2_function_extra_list_selected_checked, 255);
    lv_style_set_bg_color(&style_scr_input_config_ddlist_ip2_function_extra_list_selected_checked, lv_color_hex(0x00a1b5));
    lv_style_set_bg_grad_dir(&style_scr_input_config_ddlist_ip2_function_extra_list_selected_checked, LV_GRAD_DIR_NONE);
    lv_obj_add_style(lv_dropdown_get_list(ui->scr_input_config_ddlist_ip2_function), &style_scr_input_config_ddlist_ip2_function_extra_list_selected_checked, LV_PART_SELECTED|LV_STATE_CHECKED);

    //Write style state: LV_STATE_DEFAULT for &style_scr_input_config_ddlist_ip2_function_extra_list_main_default
    static lv_style_t style_scr_input_config_ddlist_ip2_function_extra_list_main_default;
    ui_init_style(&style_scr_input_config_ddlist_ip2_function_extra_list_main_default);

    lv_style_set_max_height(&style_scr_input_config_ddlist_ip2_function_extra_list_main_default, 90);
    lv_style_set_text_color(&style_scr_input_config_ddlist_ip2_function_extra_list_main_default, lv_color_hex(0x0D3055));
    lv_style_set_text_font(&style_scr_input_config_ddlist_ip2_function_extra_list_main_default, &lv_font_montserratMedium_12);
    lv_style_set_text_opa(&style_scr_input_config_ddlist_ip2_function_extra_list_main_default, 255);
    lv_style_set_border_width(&style_scr_input_config_ddlist_ip2_function_extra_list_main_default, 1);
    lv_style_set_border_opa(&style_scr_input_config_ddlist_ip2_function_extra_list_main_default, 255);
    lv_style_set_border_color(&style_scr_input_config_ddlist_ip2_function_extra_list_main_default, lv_color_hex(0xe1e6ee));
    lv_style_set_border_side(&style_scr_input_config_ddlist_ip2_function_extra_list_main_default, LV_BORDER_SIDE_FULL);
    lv_style_set_radius(&style_scr_input_config_ddlist_ip2_function_extra_list_main_default, 3);
    lv_style_set_bg_opa(&style_scr_input_config_ddlist_ip2_function_extra_list_main_default, 255);
    lv_style_set_bg_color(&style_scr_input_config_ddlist_ip2_function_extra_list_main_default, lv_color_hex(0xffffff));
    lv_style_set_bg_grad_dir(&style_scr_input_config_ddlist_ip2_function_extra_list_main_default, LV_GRAD_DIR_NONE);
    lv_obj_add_style(lv_dropdown_get_list(ui->scr_input_config_ddlist_ip2_function), &style_scr_input_config_ddlist_ip2_function_extra_list_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style state: LV_STATE_DEFAULT for &style_scr_input_config_ddlist_ip2_function_extra_list_scrollbar_default
    static lv_style_t style_scr_input_config_ddlist_ip2_function_extra_list_scrollbar_default;
    ui_init_style(&style_scr_input_config_ddlist_ip2_function_extra_list_scrollbar_default);

    lv_style_set_radius(&style_scr_input_config_ddlist_ip2_function_extra_list_scrollbar_default, 3);
    lv_style_set_bg_opa(&style_scr_input_config_ddlist_ip2_function_extra_list_scrollbar_default, 255);
    lv_style_set_bg_color(&style_scr_input_config_ddlist_ip2_function_extra_list_scrollbar_default, lv_color_hex(0x00ff00));
    lv_style_set_bg_grad_dir(&style_scr_input_config_ddlist_ip2_function_extra_list_scrollbar_default, LV_GRAD_DIR_NONE);
    lv_obj_add_style(lv_dropdown_get_list(ui->scr_input_config_ddlist_ip2_function), &style_scr_input_config_ddlist_ip2_function_extra_list_scrollbar_default, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);

    //Write codes scr_input_config_lbl_ip2_debounce
    ui->scr_input_config_lbl_ip2_debounce = lv_label_create(ui->scr_input_config_cont_input2);
    lv_obj_set_pos(ui->scr_input_config_lbl_ip2_debounce, 138, 336);
    lv_obj_set_size(ui->scr_input_config_lbl_ip2_debounce, 221, 32);
    lv_label_set_text(ui->scr_input_config_lbl_ip2_debounce, "Debounce (ms)");
    lv_label_set_long_mode(ui->scr_input_config_lbl_ip2_debounce, LV_LABEL_LONG_WRAP);

    //Write style for scr_input_config_lbl_ip2_debounce, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scr_input_config_lbl_ip2_debounce, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_input_config_lbl_ip2_debounce, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scr_input_config_lbl_ip2_debounce, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scr_input_config_lbl_ip2_debounce, &lv_font_arial_30, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scr_input_config_lbl_ip2_debounce, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->scr_input_config_lbl_ip2_debounce, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->scr_input_config_lbl_ip2_debounce, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scr_input_config_lbl_ip2_debounce, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scr_input_config_lbl_ip2_debounce, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scr_input_config_lbl_ip2_debounce, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scr_input_config_lbl_ip2_debounce, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scr_input_config_lbl_ip2_debounce, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scr_input_config_lbl_ip2_debounce, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_input_config_lbl_ip2_debounce, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scr_input_config_label_ip2_trigger
    ui->scr_input_config_label_ip2_trigger = lv_label_create(ui->scr_input_config_cont_input2);
    lv_obj_set_pos(ui->scr_input_config_label_ip2_trigger, 138, 247);
    lv_obj_set_size(ui->scr_input_config_label_ip2_trigger, 187, 32);
    lv_label_set_text(ui->scr_input_config_label_ip2_trigger, "Trigger Type");
    lv_label_set_long_mode(ui->scr_input_config_label_ip2_trigger, LV_LABEL_LONG_WRAP);

    //Write style for scr_input_config_label_ip2_trigger, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scr_input_config_label_ip2_trigger, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_input_config_label_ip2_trigger, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scr_input_config_label_ip2_trigger, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scr_input_config_label_ip2_trigger, &lv_font_arial_30, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scr_input_config_label_ip2_trigger, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->scr_input_config_label_ip2_trigger, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->scr_input_config_label_ip2_trigger, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scr_input_config_label_ip2_trigger, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scr_input_config_label_ip2_trigger, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scr_input_config_label_ip2_trigger, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scr_input_config_label_ip2_trigger, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scr_input_config_label_ip2_trigger, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scr_input_config_label_ip2_trigger, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_input_config_label_ip2_trigger, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scr_input_config_ddlist_ip2_trigger
    ui->scr_input_config_ddlist_ip2_trigger = lv_dropdown_create(ui->scr_input_config_cont_input2);
    lv_obj_set_pos(ui->scr_input_config_ddlist_ip2_trigger, 447, 238);
    lv_obj_set_size(ui->scr_input_config_ddlist_ip2_trigger, 450, 50);
    lv_dropdown_set_options(ui->scr_input_config_ddlist_ip2_trigger, "Rising Edge\nFalling Edge\nLevel High\nLevel Low");

    //Write style for scr_input_config_ddlist_ip2_trigger, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_text_color(ui->scr_input_config_ddlist_ip2_trigger, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scr_input_config_ddlist_ip2_trigger, &lv_font_arial_30, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scr_input_config_ddlist_ip2_trigger, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->scr_input_config_ddlist_ip2_trigger, 1, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->scr_input_config_ddlist_ip2_trigger, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->scr_input_config_ddlist_ip2_trigger, lv_color_hex(0xe1e6ee), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->scr_input_config_ddlist_ip2_trigger, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scr_input_config_ddlist_ip2_trigger, 8, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scr_input_config_ddlist_ip2_trigger, 6, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scr_input_config_ddlist_ip2_trigger, 6, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_input_config_ddlist_ip2_trigger, 1, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scr_input_config_ddlist_ip2_trigger, 79, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scr_input_config_ddlist_ip2_trigger, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scr_input_config_ddlist_ip2_trigger, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_input_config_ddlist_ip2_trigger, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style state: LV_STATE_CHECKED for &style_scr_input_config_ddlist_ip2_trigger_extra_list_selected_checked
    static lv_style_t style_scr_input_config_ddlist_ip2_trigger_extra_list_selected_checked;
    ui_init_style(&style_scr_input_config_ddlist_ip2_trigger_extra_list_selected_checked);

    lv_style_set_border_width(&style_scr_input_config_ddlist_ip2_trigger_extra_list_selected_checked, 1);
    lv_style_set_border_opa(&style_scr_input_config_ddlist_ip2_trigger_extra_list_selected_checked, 255);
    lv_style_set_border_color(&style_scr_input_config_ddlist_ip2_trigger_extra_list_selected_checked, lv_color_hex(0xe1e6ee));
    lv_style_set_border_side(&style_scr_input_config_ddlist_ip2_trigger_extra_list_selected_checked, LV_BORDER_SIDE_FULL);
    lv_style_set_radius(&style_scr_input_config_ddlist_ip2_trigger_extra_list_selected_checked, 3);
    lv_style_set_bg_opa(&style_scr_input_config_ddlist_ip2_trigger_extra_list_selected_checked, 255);
    lv_style_set_bg_color(&style_scr_input_config_ddlist_ip2_trigger_extra_list_selected_checked, lv_color_hex(0x00a1b5));
    lv_style_set_bg_grad_dir(&style_scr_input_config_ddlist_ip2_trigger_extra_list_selected_checked, LV_GRAD_DIR_NONE);
    lv_obj_add_style(lv_dropdown_get_list(ui->scr_input_config_ddlist_ip2_trigger), &style_scr_input_config_ddlist_ip2_trigger_extra_list_selected_checked, LV_PART_SELECTED|LV_STATE_CHECKED);

    //Write style state: LV_STATE_DEFAULT for &style_scr_input_config_ddlist_ip2_trigger_extra_list_main_default
    static lv_style_t style_scr_input_config_ddlist_ip2_trigger_extra_list_main_default;
    ui_init_style(&style_scr_input_config_ddlist_ip2_trigger_extra_list_main_default);

    lv_style_set_max_height(&style_scr_input_config_ddlist_ip2_trigger_extra_list_main_default, 90);
    lv_style_set_text_color(&style_scr_input_config_ddlist_ip2_trigger_extra_list_main_default, lv_color_hex(0x0D3055));
    lv_style_set_text_font(&style_scr_input_config_ddlist_ip2_trigger_extra_list_main_default, &lv_font_montserratMedium_12);
    lv_style_set_text_opa(&style_scr_input_config_ddlist_ip2_trigger_extra_list_main_default, 255);
    lv_style_set_border_width(&style_scr_input_config_ddlist_ip2_trigger_extra_list_main_default, 1);
    lv_style_set_border_opa(&style_scr_input_config_ddlist_ip2_trigger_extra_list_main_default, 255);
    lv_style_set_border_color(&style_scr_input_config_ddlist_ip2_trigger_extra_list_main_default, lv_color_hex(0xe1e6ee));
    lv_style_set_border_side(&style_scr_input_config_ddlist_ip2_trigger_extra_list_main_default, LV_BORDER_SIDE_FULL);
    lv_style_set_radius(&style_scr_input_config_ddlist_ip2_trigger_extra_list_main_default, 3);
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
    lv_obj_set_pos(ui->scr_input_config_lbl_ip2_function, 138, 68);
    lv_obj_set_size(ui->scr_input_config_lbl_ip2_function, 143, 32);
    lv_label_set_text(ui->scr_input_config_lbl_ip2_function, "Function");
    lv_label_set_long_mode(ui->scr_input_config_lbl_ip2_function, LV_LABEL_LONG_WRAP);

    //Write style for scr_input_config_lbl_ip2_function, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scr_input_config_lbl_ip2_function, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_input_config_lbl_ip2_function, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scr_input_config_lbl_ip2_function, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scr_input_config_lbl_ip2_function, &lv_font_arial_30, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scr_input_config_lbl_ip2_function, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->scr_input_config_lbl_ip2_function, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->scr_input_config_lbl_ip2_function, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scr_input_config_lbl_ip2_function, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scr_input_config_lbl_ip2_function, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scr_input_config_lbl_ip2_function, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scr_input_config_lbl_ip2_function, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scr_input_config_lbl_ip2_function, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scr_input_config_lbl_ip2_function, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_input_config_lbl_ip2_function, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scr_input_config_lbl_input2
    ui->scr_input_config_lbl_input2 = lv_label_create(ui->scr_input_config_cont_input2);
    lv_obj_set_pos(ui->scr_input_config_lbl_input2, 0, 0);
    lv_obj_set_size(ui->scr_input_config_lbl_input2, 381, 32);
    lv_label_set_text_static(ui->scr_input_config_lbl_input2, "Selected Input: INPUT 2");
    lv_label_set_long_mode(ui->scr_input_config_lbl_input2, LV_LABEL_LONG_WRAP);

    //Write style for scr_input_config_lbl_input2, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scr_input_config_lbl_input2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_input_config_lbl_input2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scr_input_config_lbl_input2, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scr_input_config_lbl_input2, &lv_font_arial_30, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scr_input_config_lbl_input2, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->scr_input_config_lbl_input2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->scr_input_config_lbl_input2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scr_input_config_lbl_input2, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scr_input_config_lbl_input2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scr_input_config_lbl_input2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scr_input_config_lbl_input2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scr_input_config_lbl_input2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scr_input_config_lbl_input2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_input_config_lbl_input2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scr_input_config_lbl_ip2_livestatus
    ui->scr_input_config_lbl_ip2_livestatus = lv_label_create(ui->scr_input_config_cont_input2);
    lv_obj_set_pos(ui->scr_input_config_lbl_ip2_livestatus, 138, 412);
    lv_obj_set_size(ui->scr_input_config_lbl_ip2_livestatus, 174, 32);
    lv_label_set_text(ui->scr_input_config_lbl_ip2_livestatus, "Live Status");
    lv_label_set_long_mode(ui->scr_input_config_lbl_ip2_livestatus, LV_LABEL_LONG_WRAP);

    //Write style for scr_input_config_lbl_ip2_livestatus, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scr_input_config_lbl_ip2_livestatus, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_input_config_lbl_ip2_livestatus, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scr_input_config_lbl_ip2_livestatus, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scr_input_config_lbl_ip2_livestatus, &lv_font_arial_30, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scr_input_config_lbl_ip2_livestatus, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->scr_input_config_lbl_ip2_livestatus, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->scr_input_config_lbl_ip2_livestatus, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scr_input_config_lbl_ip2_livestatus, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scr_input_config_lbl_ip2_livestatus, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scr_input_config_lbl_ip2_livestatus, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scr_input_config_lbl_ip2_livestatus, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scr_input_config_lbl_ip2_livestatus, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scr_input_config_lbl_ip2_livestatus, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_input_config_lbl_ip2_livestatus, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scr_input_config_lbl_ip2_status
    ui->scr_input_config_lbl_ip2_status = lv_label_create(ui->scr_input_config_cont_input2);
    lv_obj_set_pos(ui->scr_input_config_lbl_ip2_status, 477, 414);
    lv_obj_set_size(ui->scr_input_config_lbl_ip2_status, 114, 32);
    lv_label_set_text(ui->scr_input_config_lbl_ip2_status, "LOW");
    lv_label_set_long_mode(ui->scr_input_config_lbl_ip2_status, LV_LABEL_LONG_WRAP);

    //Write style for scr_input_config_lbl_ip2_status, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scr_input_config_lbl_ip2_status, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_input_config_lbl_ip2_status, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scr_input_config_lbl_ip2_status, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scr_input_config_lbl_ip2_status, &lv_font_arial_30, LV_PART_MAIN|LV_STATE_DEFAULT);
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
    lv_obj_set_pos(ui->scr_input_config_led_ip2_status, 447, 420);
    lv_obj_set_size(ui->scr_input_config_led_ip2_status, 20, 20);
    lv_led_set_brightness(ui->scr_input_config_led_ip2_status, 255);
    lv_led_set_color(ui->scr_input_config_led_ip2_status, lv_color_hex(0xfd0026));

    //Write codes scr_input_config_line_21
    ui->scr_input_config_line_21 = lv_line_create(ui->scr_input_config_cont_input2);
    lv_obj_set_pos(ui->scr_input_config_line_21, 143, 126);
    lv_obj_set_size(ui->scr_input_config_line_21, 850, 2);
    static lv_point_precise_t scr_input_config_line_21[] = {{0, 0},{1100, 0}};
    lv_line_set_points(ui->scr_input_config_line_21, scr_input_config_line_21, 2);

    //Write style for scr_input_config_line_21, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_line_width(ui->scr_input_config_line_21, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_color(ui->scr_input_config_line_21, lv_color_hex(0x757575), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_opa(ui->scr_input_config_line_21, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_rounded(ui->scr_input_config_line_21, true, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scr_input_config_line_20
    ui->scr_input_config_line_20 = lv_line_create(ui->scr_input_config_cont_input2);
    lv_obj_set_pos(ui->scr_input_config_line_20, 143, 306);
    lv_obj_set_size(ui->scr_input_config_line_20, 850, 2);
    static lv_point_precise_t scr_input_config_line_20[] = {{0, 0},{1100, 0}};
    lv_line_set_points(ui->scr_input_config_line_20, scr_input_config_line_20, 2);

    //Write style for scr_input_config_line_20, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_line_width(ui->scr_input_config_line_20, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_color(ui->scr_input_config_line_20, lv_color_hex(0x757575), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_opa(ui->scr_input_config_line_20, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_rounded(ui->scr_input_config_line_20, true, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scr_input_config_line_19
    ui->scr_input_config_line_19 = lv_line_create(ui->scr_input_config_cont_input2);
    lv_obj_set_pos(ui->scr_input_config_line_19, 143, 394);
    lv_obj_set_size(ui->scr_input_config_line_19, 850, 2);
    static lv_point_precise_t scr_input_config_line_19[] = {{0, 0},{1100, 0}};
    lv_line_set_points(ui->scr_input_config_line_19, scr_input_config_line_19, 2);

    //Write style for scr_input_config_line_19, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_line_width(ui->scr_input_config_line_19, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_color(ui->scr_input_config_line_19, lv_color_hex(0x757575), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_opa(ui->scr_input_config_line_19, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_rounded(ui->scr_input_config_line_19, true, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scr_input_config_ddlist_ip2_press
    ui->scr_input_config_ddlist_ip2_press = lv_dropdown_create(ui->scr_input_config_cont_input2);
    lv_obj_set_pos(ui->scr_input_config_ddlist_ip2_press, 447, 147);
    lv_obj_set_size(ui->scr_input_config_ddlist_ip2_press, 450, 50);
    lv_dropdown_set_options(ui->scr_input_config_ddlist_ip2_press, "Click\nHold\nPulse\nLevel");

    //Write style for scr_input_config_ddlist_ip2_press, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_text_color(ui->scr_input_config_ddlist_ip2_press, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scr_input_config_ddlist_ip2_press, &lv_font_arial_30, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scr_input_config_ddlist_ip2_press, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->scr_input_config_ddlist_ip2_press, 1, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->scr_input_config_ddlist_ip2_press, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->scr_input_config_ddlist_ip2_press, lv_color_hex(0xe1e6ee), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->scr_input_config_ddlist_ip2_press, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scr_input_config_ddlist_ip2_press, 8, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scr_input_config_ddlist_ip2_press, 6, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scr_input_config_ddlist_ip2_press, 6, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_input_config_ddlist_ip2_press, 1, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scr_input_config_ddlist_ip2_press, 78, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scr_input_config_ddlist_ip2_press, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scr_input_config_ddlist_ip2_press, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_input_config_ddlist_ip2_press, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style state: LV_STATE_CHECKED for &style_scr_input_config_ddlist_ip2_press_extra_list_selected_checked
    static lv_style_t style_scr_input_config_ddlist_ip2_press_extra_list_selected_checked;
    ui_init_style(&style_scr_input_config_ddlist_ip2_press_extra_list_selected_checked);

    lv_style_set_border_width(&style_scr_input_config_ddlist_ip2_press_extra_list_selected_checked, 1);
    lv_style_set_border_opa(&style_scr_input_config_ddlist_ip2_press_extra_list_selected_checked, 255);
    lv_style_set_border_color(&style_scr_input_config_ddlist_ip2_press_extra_list_selected_checked, lv_color_hex(0xe1e6ee));
    lv_style_set_border_side(&style_scr_input_config_ddlist_ip2_press_extra_list_selected_checked, LV_BORDER_SIDE_FULL);
    lv_style_set_radius(&style_scr_input_config_ddlist_ip2_press_extra_list_selected_checked, 3);
    lv_style_set_bg_opa(&style_scr_input_config_ddlist_ip2_press_extra_list_selected_checked, 255);
    lv_style_set_bg_color(&style_scr_input_config_ddlist_ip2_press_extra_list_selected_checked, lv_color_hex(0x00a1b5));
    lv_style_set_bg_grad_dir(&style_scr_input_config_ddlist_ip2_press_extra_list_selected_checked, LV_GRAD_DIR_NONE);
    lv_obj_add_style(lv_dropdown_get_list(ui->scr_input_config_ddlist_ip2_press), &style_scr_input_config_ddlist_ip2_press_extra_list_selected_checked, LV_PART_SELECTED|LV_STATE_CHECKED);

    //Write style state: LV_STATE_DEFAULT for &style_scr_input_config_ddlist_ip2_press_extra_list_main_default
    static lv_style_t style_scr_input_config_ddlist_ip2_press_extra_list_main_default;
    ui_init_style(&style_scr_input_config_ddlist_ip2_press_extra_list_main_default);

    lv_style_set_max_height(&style_scr_input_config_ddlist_ip2_press_extra_list_main_default, 90);
    lv_style_set_text_color(&style_scr_input_config_ddlist_ip2_press_extra_list_main_default, lv_color_hex(0x0D3055));
    lv_style_set_text_font(&style_scr_input_config_ddlist_ip2_press_extra_list_main_default, &lv_font_montserratMedium_12);
    lv_style_set_text_opa(&style_scr_input_config_ddlist_ip2_press_extra_list_main_default, 255);
    lv_style_set_border_width(&style_scr_input_config_ddlist_ip2_press_extra_list_main_default, 1);
    lv_style_set_border_opa(&style_scr_input_config_ddlist_ip2_press_extra_list_main_default, 255);
    lv_style_set_border_color(&style_scr_input_config_ddlist_ip2_press_extra_list_main_default, lv_color_hex(0xe1e6ee));
    lv_style_set_border_side(&style_scr_input_config_ddlist_ip2_press_extra_list_main_default, LV_BORDER_SIDE_FULL);
    lv_style_set_radius(&style_scr_input_config_ddlist_ip2_press_extra_list_main_default, 3);
    lv_style_set_bg_opa(&style_scr_input_config_ddlist_ip2_press_extra_list_main_default, 255);
    lv_style_set_bg_color(&style_scr_input_config_ddlist_ip2_press_extra_list_main_default, lv_color_hex(0xffffff));
    lv_style_set_bg_grad_dir(&style_scr_input_config_ddlist_ip2_press_extra_list_main_default, LV_GRAD_DIR_NONE);
    lv_obj_add_style(lv_dropdown_get_list(ui->scr_input_config_ddlist_ip2_press), &style_scr_input_config_ddlist_ip2_press_extra_list_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style state: LV_STATE_DEFAULT for &style_scr_input_config_ddlist_ip2_press_extra_list_scrollbar_default
    static lv_style_t style_scr_input_config_ddlist_ip2_press_extra_list_scrollbar_default;
    ui_init_style(&style_scr_input_config_ddlist_ip2_press_extra_list_scrollbar_default);

    lv_style_set_radius(&style_scr_input_config_ddlist_ip2_press_extra_list_scrollbar_default, 3);
    lv_style_set_bg_opa(&style_scr_input_config_ddlist_ip2_press_extra_list_scrollbar_default, 255);
    lv_style_set_bg_color(&style_scr_input_config_ddlist_ip2_press_extra_list_scrollbar_default, lv_color_hex(0x00ff00));
    lv_style_set_bg_grad_dir(&style_scr_input_config_ddlist_ip2_press_extra_list_scrollbar_default, LV_GRAD_DIR_NONE);
    lv_obj_add_style(lv_dropdown_get_list(ui->scr_input_config_ddlist_ip2_press), &style_scr_input_config_ddlist_ip2_press_extra_list_scrollbar_default, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);

    //Write codes scr_input_config_lbl_ip2_press
    ui->scr_input_config_lbl_ip2_press = lv_label_create(ui->scr_input_config_cont_input2);
    lv_obj_set_pos(ui->scr_input_config_lbl_ip2_press, 132, 156);
    lv_obj_set_size(ui->scr_input_config_lbl_ip2_press, 189, 32);
    lv_label_set_text(ui->scr_input_config_lbl_ip2_press, "Press Type");
    lv_label_set_long_mode(ui->scr_input_config_lbl_ip2_press, LV_LABEL_LONG_WRAP);

    //Write style for scr_input_config_lbl_ip2_press, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scr_input_config_lbl_ip2_press, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_input_config_lbl_ip2_press, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scr_input_config_lbl_ip2_press, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scr_input_config_lbl_ip2_press, &lv_font_arial_30, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scr_input_config_lbl_ip2_press, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->scr_input_config_lbl_ip2_press, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->scr_input_config_lbl_ip2_press, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scr_input_config_lbl_ip2_press, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scr_input_config_lbl_ip2_press, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scr_input_config_lbl_ip2_press, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scr_input_config_lbl_ip2_press, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scr_input_config_lbl_ip2_press, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scr_input_config_lbl_ip2_press, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_input_config_lbl_ip2_press, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scr_input_config_line_18
    ui->scr_input_config_line_18 = lv_line_create(ui->scr_input_config_cont_input2);
    lv_obj_set_pos(ui->scr_input_config_line_18, 143, 216);
    lv_obj_set_size(ui->scr_input_config_line_18, 850, 2);
    static lv_point_precise_t scr_input_config_line_18[] = {{0, 0},{1100, 0}};
    lv_line_set_points(ui->scr_input_config_line_18, scr_input_config_line_18, 2);

    //Write style for scr_input_config_line_18, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_line_width(ui->scr_input_config_line_18, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_color(ui->scr_input_config_line_18, lv_color_hex(0x757575), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_opa(ui->scr_input_config_line_18, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_rounded(ui->scr_input_config_line_18, true, LV_PART_MAIN|LV_STATE_DEFAULT);

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

    //Write codes scr_input_config_line_27
    ui->scr_input_config_line_27 = lv_line_create(ui->scr_input_config_cont_input3);
    lv_obj_set_pos(ui->scr_input_config_line_27, 0, 40);
    lv_obj_set_size(ui->scr_input_config_line_27, 1100, 2);
    static lv_point_precise_t scr_input_config_line_27[] = {{0, 0},{1100, 0}};
    lv_line_set_points(ui->scr_input_config_line_27, scr_input_config_line_27, 2);

    //Write style for scr_input_config_line_27, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_line_width(ui->scr_input_config_line_27, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_color(ui->scr_input_config_line_27, lv_color_hex(0x757575), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_opa(ui->scr_input_config_line_27, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_rounded(ui->scr_input_config_line_27, true, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scr_input_config_ddlist_ip3_debounce
    ui->scr_input_config_ddlist_ip3_debounce = lv_dropdown_create(ui->scr_input_config_cont_input3);
    lv_obj_set_pos(ui->scr_input_config_ddlist_ip3_debounce, 447, 327);
    lv_obj_set_size(ui->scr_input_config_ddlist_ip3_debounce, 450, 50);
    lv_dropdown_set_options(ui->scr_input_config_ddlist_ip3_debounce, "20\n50\n100\n200");

    //Write style for scr_input_config_ddlist_ip3_debounce, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_text_color(ui->scr_input_config_ddlist_ip3_debounce, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scr_input_config_ddlist_ip3_debounce, &lv_font_arial_30, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scr_input_config_ddlist_ip3_debounce, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->scr_input_config_ddlist_ip3_debounce, 1, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->scr_input_config_ddlist_ip3_debounce, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->scr_input_config_ddlist_ip3_debounce, lv_color_hex(0xe1e6ee), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->scr_input_config_ddlist_ip3_debounce, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scr_input_config_ddlist_ip3_debounce, 8, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scr_input_config_ddlist_ip3_debounce, 6, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scr_input_config_ddlist_ip3_debounce, 6, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_input_config_ddlist_ip3_debounce, 1, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scr_input_config_ddlist_ip3_debounce, 78, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scr_input_config_ddlist_ip3_debounce, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scr_input_config_ddlist_ip3_debounce, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_input_config_ddlist_ip3_debounce, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style state: LV_STATE_CHECKED for &style_scr_input_config_ddlist_ip3_debounce_extra_list_selected_checked
    static lv_style_t style_scr_input_config_ddlist_ip3_debounce_extra_list_selected_checked;
    ui_init_style(&style_scr_input_config_ddlist_ip3_debounce_extra_list_selected_checked);

    lv_style_set_border_width(&style_scr_input_config_ddlist_ip3_debounce_extra_list_selected_checked, 1);
    lv_style_set_border_opa(&style_scr_input_config_ddlist_ip3_debounce_extra_list_selected_checked, 255);
    lv_style_set_border_color(&style_scr_input_config_ddlist_ip3_debounce_extra_list_selected_checked, lv_color_hex(0xe1e6ee));
    lv_style_set_border_side(&style_scr_input_config_ddlist_ip3_debounce_extra_list_selected_checked, LV_BORDER_SIDE_FULL);
    lv_style_set_radius(&style_scr_input_config_ddlist_ip3_debounce_extra_list_selected_checked, 3);
    lv_style_set_bg_opa(&style_scr_input_config_ddlist_ip3_debounce_extra_list_selected_checked, 255);
    lv_style_set_bg_color(&style_scr_input_config_ddlist_ip3_debounce_extra_list_selected_checked, lv_color_hex(0x00a1b5));
    lv_style_set_bg_grad_dir(&style_scr_input_config_ddlist_ip3_debounce_extra_list_selected_checked, LV_GRAD_DIR_NONE);
    lv_obj_add_style(lv_dropdown_get_list(ui->scr_input_config_ddlist_ip3_debounce), &style_scr_input_config_ddlist_ip3_debounce_extra_list_selected_checked, LV_PART_SELECTED|LV_STATE_CHECKED);

    //Write style state: LV_STATE_DEFAULT for &style_scr_input_config_ddlist_ip3_debounce_extra_list_main_default
    static lv_style_t style_scr_input_config_ddlist_ip3_debounce_extra_list_main_default;
    ui_init_style(&style_scr_input_config_ddlist_ip3_debounce_extra_list_main_default);

    lv_style_set_max_height(&style_scr_input_config_ddlist_ip3_debounce_extra_list_main_default, 90);
    lv_style_set_text_color(&style_scr_input_config_ddlist_ip3_debounce_extra_list_main_default, lv_color_hex(0x0D3055));
    lv_style_set_text_font(&style_scr_input_config_ddlist_ip3_debounce_extra_list_main_default, &lv_font_montserratMedium_12);
    lv_style_set_text_opa(&style_scr_input_config_ddlist_ip3_debounce_extra_list_main_default, 255);
    lv_style_set_border_width(&style_scr_input_config_ddlist_ip3_debounce_extra_list_main_default, 1);
    lv_style_set_border_opa(&style_scr_input_config_ddlist_ip3_debounce_extra_list_main_default, 255);
    lv_style_set_border_color(&style_scr_input_config_ddlist_ip3_debounce_extra_list_main_default, lv_color_hex(0xe1e6ee));
    lv_style_set_border_side(&style_scr_input_config_ddlist_ip3_debounce_extra_list_main_default, LV_BORDER_SIDE_FULL);
    lv_style_set_radius(&style_scr_input_config_ddlist_ip3_debounce_extra_list_main_default, 3);
    lv_style_set_bg_opa(&style_scr_input_config_ddlist_ip3_debounce_extra_list_main_default, 255);
    lv_style_set_bg_color(&style_scr_input_config_ddlist_ip3_debounce_extra_list_main_default, lv_color_hex(0xffffff));
    lv_style_set_bg_grad_dir(&style_scr_input_config_ddlist_ip3_debounce_extra_list_main_default, LV_GRAD_DIR_NONE);
    lv_obj_add_style(lv_dropdown_get_list(ui->scr_input_config_ddlist_ip3_debounce), &style_scr_input_config_ddlist_ip3_debounce_extra_list_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style state: LV_STATE_DEFAULT for &style_scr_input_config_ddlist_ip3_debounce_extra_list_scrollbar_default
    static lv_style_t style_scr_input_config_ddlist_ip3_debounce_extra_list_scrollbar_default;
    ui_init_style(&style_scr_input_config_ddlist_ip3_debounce_extra_list_scrollbar_default);

    lv_style_set_radius(&style_scr_input_config_ddlist_ip3_debounce_extra_list_scrollbar_default, 3);
    lv_style_set_bg_opa(&style_scr_input_config_ddlist_ip3_debounce_extra_list_scrollbar_default, 255);
    lv_style_set_bg_color(&style_scr_input_config_ddlist_ip3_debounce_extra_list_scrollbar_default, lv_color_hex(0x00ff00));
    lv_style_set_bg_grad_dir(&style_scr_input_config_ddlist_ip3_debounce_extra_list_scrollbar_default, LV_GRAD_DIR_NONE);
    lv_obj_add_style(lv_dropdown_get_list(ui->scr_input_config_ddlist_ip3_debounce), &style_scr_input_config_ddlist_ip3_debounce_extra_list_scrollbar_default, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);

    //Write codes scr_input_config_ddlist_ip3_function
    ui->scr_input_config_ddlist_ip3_function = lv_dropdown_create(ui->scr_input_config_cont_input3);
    lv_obj_set_pos(ui->scr_input_config_ddlist_ip3_function, 447, 59);
    lv_obj_set_size(ui->scr_input_config_ddlist_ip3_function, 450, 50);
    lv_dropdown_set_options(ui->scr_input_config_ddlist_ip3_function, "Start\nStop\nError\nCount Product\nNone");

    //Write style for scr_input_config_ddlist_ip3_function, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_text_color(ui->scr_input_config_ddlist_ip3_function, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scr_input_config_ddlist_ip3_function, &lv_font_arial_30, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scr_input_config_ddlist_ip3_function, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->scr_input_config_ddlist_ip3_function, 1, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->scr_input_config_ddlist_ip3_function, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->scr_input_config_ddlist_ip3_function, lv_color_hex(0xe1e6ee), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->scr_input_config_ddlist_ip3_function, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scr_input_config_ddlist_ip3_function, 8, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scr_input_config_ddlist_ip3_function, 6, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scr_input_config_ddlist_ip3_function, 6, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_input_config_ddlist_ip3_function, 1, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scr_input_config_ddlist_ip3_function, 78, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scr_input_config_ddlist_ip3_function, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scr_input_config_ddlist_ip3_function, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_input_config_ddlist_ip3_function, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style state: LV_STATE_CHECKED for &style_scr_input_config_ddlist_ip3_function_extra_list_selected_checked
    static lv_style_t style_scr_input_config_ddlist_ip3_function_extra_list_selected_checked;
    ui_init_style(&style_scr_input_config_ddlist_ip3_function_extra_list_selected_checked);

    lv_style_set_border_width(&style_scr_input_config_ddlist_ip3_function_extra_list_selected_checked, 1);
    lv_style_set_border_opa(&style_scr_input_config_ddlist_ip3_function_extra_list_selected_checked, 255);
    lv_style_set_border_color(&style_scr_input_config_ddlist_ip3_function_extra_list_selected_checked, lv_color_hex(0xe1e6ee));
    lv_style_set_border_side(&style_scr_input_config_ddlist_ip3_function_extra_list_selected_checked, LV_BORDER_SIDE_FULL);
    lv_style_set_radius(&style_scr_input_config_ddlist_ip3_function_extra_list_selected_checked, 3);
    lv_style_set_bg_opa(&style_scr_input_config_ddlist_ip3_function_extra_list_selected_checked, 255);
    lv_style_set_bg_color(&style_scr_input_config_ddlist_ip3_function_extra_list_selected_checked, lv_color_hex(0x00a1b5));
    lv_style_set_bg_grad_dir(&style_scr_input_config_ddlist_ip3_function_extra_list_selected_checked, LV_GRAD_DIR_NONE);
    lv_obj_add_style(lv_dropdown_get_list(ui->scr_input_config_ddlist_ip3_function), &style_scr_input_config_ddlist_ip3_function_extra_list_selected_checked, LV_PART_SELECTED|LV_STATE_CHECKED);

    //Write style state: LV_STATE_DEFAULT for &style_scr_input_config_ddlist_ip3_function_extra_list_main_default
    static lv_style_t style_scr_input_config_ddlist_ip3_function_extra_list_main_default;
    ui_init_style(&style_scr_input_config_ddlist_ip3_function_extra_list_main_default);

    lv_style_set_max_height(&style_scr_input_config_ddlist_ip3_function_extra_list_main_default, 90);
    lv_style_set_text_color(&style_scr_input_config_ddlist_ip3_function_extra_list_main_default, lv_color_hex(0x0D3055));
    lv_style_set_text_font(&style_scr_input_config_ddlist_ip3_function_extra_list_main_default, &lv_font_montserratMedium_12);
    lv_style_set_text_opa(&style_scr_input_config_ddlist_ip3_function_extra_list_main_default, 255);
    lv_style_set_border_width(&style_scr_input_config_ddlist_ip3_function_extra_list_main_default, 1);
    lv_style_set_border_opa(&style_scr_input_config_ddlist_ip3_function_extra_list_main_default, 255);
    lv_style_set_border_color(&style_scr_input_config_ddlist_ip3_function_extra_list_main_default, lv_color_hex(0xe1e6ee));
    lv_style_set_border_side(&style_scr_input_config_ddlist_ip3_function_extra_list_main_default, LV_BORDER_SIDE_FULL);
    lv_style_set_radius(&style_scr_input_config_ddlist_ip3_function_extra_list_main_default, 3);
    lv_style_set_bg_opa(&style_scr_input_config_ddlist_ip3_function_extra_list_main_default, 255);
    lv_style_set_bg_color(&style_scr_input_config_ddlist_ip3_function_extra_list_main_default, lv_color_hex(0xffffff));
    lv_style_set_bg_grad_dir(&style_scr_input_config_ddlist_ip3_function_extra_list_main_default, LV_GRAD_DIR_NONE);
    lv_obj_add_style(lv_dropdown_get_list(ui->scr_input_config_ddlist_ip3_function), &style_scr_input_config_ddlist_ip3_function_extra_list_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style state: LV_STATE_DEFAULT for &style_scr_input_config_ddlist_ip3_function_extra_list_scrollbar_default
    static lv_style_t style_scr_input_config_ddlist_ip3_function_extra_list_scrollbar_default;
    ui_init_style(&style_scr_input_config_ddlist_ip3_function_extra_list_scrollbar_default);

    lv_style_set_radius(&style_scr_input_config_ddlist_ip3_function_extra_list_scrollbar_default, 3);
    lv_style_set_bg_opa(&style_scr_input_config_ddlist_ip3_function_extra_list_scrollbar_default, 255);
    lv_style_set_bg_color(&style_scr_input_config_ddlist_ip3_function_extra_list_scrollbar_default, lv_color_hex(0x00ff00));
    lv_style_set_bg_grad_dir(&style_scr_input_config_ddlist_ip3_function_extra_list_scrollbar_default, LV_GRAD_DIR_NONE);
    lv_obj_add_style(lv_dropdown_get_list(ui->scr_input_config_ddlist_ip3_function), &style_scr_input_config_ddlist_ip3_function_extra_list_scrollbar_default, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);

    //Write codes scr_input_config_lbl_ip3_debounce
    ui->scr_input_config_lbl_ip3_debounce = lv_label_create(ui->scr_input_config_cont_input3);
    lv_obj_set_pos(ui->scr_input_config_lbl_ip3_debounce, 138, 336);
    lv_obj_set_size(ui->scr_input_config_lbl_ip3_debounce, 221, 32);
    lv_label_set_text(ui->scr_input_config_lbl_ip3_debounce, "Debounce (ms)");
    lv_label_set_long_mode(ui->scr_input_config_lbl_ip3_debounce, LV_LABEL_LONG_WRAP);

    //Write style for scr_input_config_lbl_ip3_debounce, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scr_input_config_lbl_ip3_debounce, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_input_config_lbl_ip3_debounce, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scr_input_config_lbl_ip3_debounce, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scr_input_config_lbl_ip3_debounce, &lv_font_arial_30, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scr_input_config_lbl_ip3_debounce, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->scr_input_config_lbl_ip3_debounce, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->scr_input_config_lbl_ip3_debounce, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scr_input_config_lbl_ip3_debounce, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scr_input_config_lbl_ip3_debounce, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scr_input_config_lbl_ip3_debounce, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scr_input_config_lbl_ip3_debounce, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scr_input_config_lbl_ip3_debounce, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scr_input_config_lbl_ip3_debounce, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_input_config_lbl_ip3_debounce, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scr_input_config_lbl_ip3_trigger
    ui->scr_input_config_lbl_ip3_trigger = lv_label_create(ui->scr_input_config_cont_input3);
    lv_obj_set_pos(ui->scr_input_config_lbl_ip3_trigger, 138, 247);
    lv_obj_set_size(ui->scr_input_config_lbl_ip3_trigger, 187, 32);
    lv_label_set_text(ui->scr_input_config_lbl_ip3_trigger, "Trigger Type");
    lv_label_set_long_mode(ui->scr_input_config_lbl_ip3_trigger, LV_LABEL_LONG_WRAP);

    //Write style for scr_input_config_lbl_ip3_trigger, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scr_input_config_lbl_ip3_trigger, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_input_config_lbl_ip3_trigger, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scr_input_config_lbl_ip3_trigger, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scr_input_config_lbl_ip3_trigger, &lv_font_arial_30, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scr_input_config_lbl_ip3_trigger, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->scr_input_config_lbl_ip3_trigger, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->scr_input_config_lbl_ip3_trigger, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scr_input_config_lbl_ip3_trigger, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scr_input_config_lbl_ip3_trigger, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scr_input_config_lbl_ip3_trigger, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scr_input_config_lbl_ip3_trigger, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scr_input_config_lbl_ip3_trigger, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scr_input_config_lbl_ip3_trigger, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_input_config_lbl_ip3_trigger, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scr_input_config_ddlist_ip3_trigger
    ui->scr_input_config_ddlist_ip3_trigger = lv_dropdown_create(ui->scr_input_config_cont_input3);
    lv_obj_set_pos(ui->scr_input_config_ddlist_ip3_trigger, 447, 238);
    lv_obj_set_size(ui->scr_input_config_ddlist_ip3_trigger, 450, 50);
    lv_dropdown_set_options(ui->scr_input_config_ddlist_ip3_trigger, "Rising Edge\nFalling Edge\nLevel High\nLevel Low");

    //Write style for scr_input_config_ddlist_ip3_trigger, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_text_color(ui->scr_input_config_ddlist_ip3_trigger, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scr_input_config_ddlist_ip3_trigger, &lv_font_arial_30, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scr_input_config_ddlist_ip3_trigger, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->scr_input_config_ddlist_ip3_trigger, 1, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->scr_input_config_ddlist_ip3_trigger, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->scr_input_config_ddlist_ip3_trigger, lv_color_hex(0xe1e6ee), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->scr_input_config_ddlist_ip3_trigger, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scr_input_config_ddlist_ip3_trigger, 8, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scr_input_config_ddlist_ip3_trigger, 6, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scr_input_config_ddlist_ip3_trigger, 6, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_input_config_ddlist_ip3_trigger, 1, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scr_input_config_ddlist_ip3_trigger, 79, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scr_input_config_ddlist_ip3_trigger, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scr_input_config_ddlist_ip3_trigger, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_input_config_ddlist_ip3_trigger, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style state: LV_STATE_CHECKED for &style_scr_input_config_ddlist_ip3_trigger_extra_list_selected_checked
    static lv_style_t style_scr_input_config_ddlist_ip3_trigger_extra_list_selected_checked;
    ui_init_style(&style_scr_input_config_ddlist_ip3_trigger_extra_list_selected_checked);

    lv_style_set_border_width(&style_scr_input_config_ddlist_ip3_trigger_extra_list_selected_checked, 1);
    lv_style_set_border_opa(&style_scr_input_config_ddlist_ip3_trigger_extra_list_selected_checked, 255);
    lv_style_set_border_color(&style_scr_input_config_ddlist_ip3_trigger_extra_list_selected_checked, lv_color_hex(0xe1e6ee));
    lv_style_set_border_side(&style_scr_input_config_ddlist_ip3_trigger_extra_list_selected_checked, LV_BORDER_SIDE_FULL);
    lv_style_set_radius(&style_scr_input_config_ddlist_ip3_trigger_extra_list_selected_checked, 3);
    lv_style_set_bg_opa(&style_scr_input_config_ddlist_ip3_trigger_extra_list_selected_checked, 255);
    lv_style_set_bg_color(&style_scr_input_config_ddlist_ip3_trigger_extra_list_selected_checked, lv_color_hex(0x00a1b5));
    lv_style_set_bg_grad_dir(&style_scr_input_config_ddlist_ip3_trigger_extra_list_selected_checked, LV_GRAD_DIR_NONE);
    lv_obj_add_style(lv_dropdown_get_list(ui->scr_input_config_ddlist_ip3_trigger), &style_scr_input_config_ddlist_ip3_trigger_extra_list_selected_checked, LV_PART_SELECTED|LV_STATE_CHECKED);

    //Write style state: LV_STATE_DEFAULT for &style_scr_input_config_ddlist_ip3_trigger_extra_list_main_default
    static lv_style_t style_scr_input_config_ddlist_ip3_trigger_extra_list_main_default;
    ui_init_style(&style_scr_input_config_ddlist_ip3_trigger_extra_list_main_default);

    lv_style_set_max_height(&style_scr_input_config_ddlist_ip3_trigger_extra_list_main_default, 90);
    lv_style_set_text_color(&style_scr_input_config_ddlist_ip3_trigger_extra_list_main_default, lv_color_hex(0x0D3055));
    lv_style_set_text_font(&style_scr_input_config_ddlist_ip3_trigger_extra_list_main_default, &lv_font_montserratMedium_12);
    lv_style_set_text_opa(&style_scr_input_config_ddlist_ip3_trigger_extra_list_main_default, 255);
    lv_style_set_border_width(&style_scr_input_config_ddlist_ip3_trigger_extra_list_main_default, 1);
    lv_style_set_border_opa(&style_scr_input_config_ddlist_ip3_trigger_extra_list_main_default, 255);
    lv_style_set_border_color(&style_scr_input_config_ddlist_ip3_trigger_extra_list_main_default, lv_color_hex(0xe1e6ee));
    lv_style_set_border_side(&style_scr_input_config_ddlist_ip3_trigger_extra_list_main_default, LV_BORDER_SIDE_FULL);
    lv_style_set_radius(&style_scr_input_config_ddlist_ip3_trigger_extra_list_main_default, 3);
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
    lv_obj_set_pos(ui->scr_input_config_lbl_ip3_function, 138, 68);
    lv_obj_set_size(ui->scr_input_config_lbl_ip3_function, 143, 32);
    lv_label_set_text(ui->scr_input_config_lbl_ip3_function, "Function");
    lv_label_set_long_mode(ui->scr_input_config_lbl_ip3_function, LV_LABEL_LONG_WRAP);

    //Write style for scr_input_config_lbl_ip3_function, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scr_input_config_lbl_ip3_function, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_input_config_lbl_ip3_function, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scr_input_config_lbl_ip3_function, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scr_input_config_lbl_ip3_function, &lv_font_arial_30, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scr_input_config_lbl_ip3_function, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->scr_input_config_lbl_ip3_function, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->scr_input_config_lbl_ip3_function, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scr_input_config_lbl_ip3_function, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scr_input_config_lbl_ip3_function, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scr_input_config_lbl_ip3_function, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scr_input_config_lbl_ip3_function, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scr_input_config_lbl_ip3_function, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scr_input_config_lbl_ip3_function, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_input_config_lbl_ip3_function, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scr_input_config_lbl_ip3
    ui->scr_input_config_lbl_ip3 = lv_label_create(ui->scr_input_config_cont_input3);
    lv_obj_set_pos(ui->scr_input_config_lbl_ip3, 0, 0);
    lv_obj_set_size(ui->scr_input_config_lbl_ip3, 381, 32);
    lv_label_set_text_static(ui->scr_input_config_lbl_ip3, "Selected Input: INPUT 3");
    lv_label_set_long_mode(ui->scr_input_config_lbl_ip3, LV_LABEL_LONG_WRAP);

    //Write style for scr_input_config_lbl_ip3, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scr_input_config_lbl_ip3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_input_config_lbl_ip3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scr_input_config_lbl_ip3, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scr_input_config_lbl_ip3, &lv_font_arial_30, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scr_input_config_lbl_ip3, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->scr_input_config_lbl_ip3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->scr_input_config_lbl_ip3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scr_input_config_lbl_ip3, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scr_input_config_lbl_ip3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scr_input_config_lbl_ip3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scr_input_config_lbl_ip3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scr_input_config_lbl_ip3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scr_input_config_lbl_ip3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_input_config_lbl_ip3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scr_input_config_lbl_ip3_livestatus
    ui->scr_input_config_lbl_ip3_livestatus = lv_label_create(ui->scr_input_config_cont_input3);
    lv_obj_set_pos(ui->scr_input_config_lbl_ip3_livestatus, 138, 412);
    lv_obj_set_size(ui->scr_input_config_lbl_ip3_livestatus, 174, 32);
    lv_label_set_text(ui->scr_input_config_lbl_ip3_livestatus, "Live Status");
    lv_label_set_long_mode(ui->scr_input_config_lbl_ip3_livestatus, LV_LABEL_LONG_WRAP);

    //Write style for scr_input_config_lbl_ip3_livestatus, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scr_input_config_lbl_ip3_livestatus, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_input_config_lbl_ip3_livestatus, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scr_input_config_lbl_ip3_livestatus, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scr_input_config_lbl_ip3_livestatus, &lv_font_arial_30, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scr_input_config_lbl_ip3_livestatus, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->scr_input_config_lbl_ip3_livestatus, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->scr_input_config_lbl_ip3_livestatus, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scr_input_config_lbl_ip3_livestatus, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scr_input_config_lbl_ip3_livestatus, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scr_input_config_lbl_ip3_livestatus, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scr_input_config_lbl_ip3_livestatus, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scr_input_config_lbl_ip3_livestatus, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scr_input_config_lbl_ip3_livestatus, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_input_config_lbl_ip3_livestatus, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scr_input_config_lbl_ip3_status
    ui->scr_input_config_lbl_ip3_status = lv_label_create(ui->scr_input_config_cont_input3);
    lv_obj_set_pos(ui->scr_input_config_lbl_ip3_status, 477, 414);
    lv_obj_set_size(ui->scr_input_config_lbl_ip3_status, 114, 32);
    lv_label_set_text(ui->scr_input_config_lbl_ip3_status, "LOW");
    lv_label_set_long_mode(ui->scr_input_config_lbl_ip3_status, LV_LABEL_LONG_WRAP);

    //Write style for scr_input_config_lbl_ip3_status, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scr_input_config_lbl_ip3_status, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_input_config_lbl_ip3_status, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scr_input_config_lbl_ip3_status, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scr_input_config_lbl_ip3_status, &lv_font_arial_30, LV_PART_MAIN|LV_STATE_DEFAULT);
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
    lv_obj_set_pos(ui->scr_input_config_led_ip3_status, 447, 420);
    lv_obj_set_size(ui->scr_input_config_led_ip3_status, 20, 20);
    lv_led_set_brightness(ui->scr_input_config_led_ip3_status, 255);
    lv_led_set_color(ui->scr_input_config_led_ip3_status, lv_color_hex(0xfd0026));

    //Write codes scr_input_config_line_26
    ui->scr_input_config_line_26 = lv_line_create(ui->scr_input_config_cont_input3);
    lv_obj_set_pos(ui->scr_input_config_line_26, 145, 125);
    lv_obj_set_size(ui->scr_input_config_line_26, 850, 2);
    static lv_point_precise_t scr_input_config_line_26[] = {{0, 0},{1100, 0}};
    lv_line_set_points(ui->scr_input_config_line_26, scr_input_config_line_26, 2);

    //Write style for scr_input_config_line_26, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_line_width(ui->scr_input_config_line_26, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_color(ui->scr_input_config_line_26, lv_color_hex(0x757575), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_opa(ui->scr_input_config_line_26, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_rounded(ui->scr_input_config_line_26, true, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scr_input_config_line_25
    ui->scr_input_config_line_25 = lv_line_create(ui->scr_input_config_cont_input3);
    lv_obj_set_pos(ui->scr_input_config_line_25, 143, 306);
    lv_obj_set_size(ui->scr_input_config_line_25, 850, 2);
    static lv_point_precise_t scr_input_config_line_25[] = {{0, 0},{1100, 0}};
    lv_line_set_points(ui->scr_input_config_line_25, scr_input_config_line_25, 2);

    //Write style for scr_input_config_line_25, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_line_width(ui->scr_input_config_line_25, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_color(ui->scr_input_config_line_25, lv_color_hex(0x757575), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_opa(ui->scr_input_config_line_25, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_rounded(ui->scr_input_config_line_25, true, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scr_input_config_line_24
    ui->scr_input_config_line_24 = lv_line_create(ui->scr_input_config_cont_input3);
    lv_obj_set_pos(ui->scr_input_config_line_24, 143, 394);
    lv_obj_set_size(ui->scr_input_config_line_24, 850, 2);
    static lv_point_precise_t scr_input_config_line_24[] = {{0, 0},{1100, 0}};
    lv_line_set_points(ui->scr_input_config_line_24, scr_input_config_line_24, 2);

    //Write style for scr_input_config_line_24, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_line_width(ui->scr_input_config_line_24, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_color(ui->scr_input_config_line_24, lv_color_hex(0x757575), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_opa(ui->scr_input_config_line_24, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_rounded(ui->scr_input_config_line_24, true, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scr_input_config_ddlist_ip3_press
    ui->scr_input_config_ddlist_ip3_press = lv_dropdown_create(ui->scr_input_config_cont_input3);
    lv_obj_set_pos(ui->scr_input_config_ddlist_ip3_press, 447, 147);
    lv_obj_set_size(ui->scr_input_config_ddlist_ip3_press, 450, 50);
    lv_dropdown_set_options(ui->scr_input_config_ddlist_ip3_press, "Click\nHold\nPulse\nLevel");

    //Write style for scr_input_config_ddlist_ip3_press, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_text_color(ui->scr_input_config_ddlist_ip3_press, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scr_input_config_ddlist_ip3_press, &lv_font_arial_30, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scr_input_config_ddlist_ip3_press, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->scr_input_config_ddlist_ip3_press, 1, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->scr_input_config_ddlist_ip3_press, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->scr_input_config_ddlist_ip3_press, lv_color_hex(0xe1e6ee), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->scr_input_config_ddlist_ip3_press, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scr_input_config_ddlist_ip3_press, 8, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scr_input_config_ddlist_ip3_press, 6, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scr_input_config_ddlist_ip3_press, 6, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_input_config_ddlist_ip3_press, 1, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scr_input_config_ddlist_ip3_press, 78, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scr_input_config_ddlist_ip3_press, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scr_input_config_ddlist_ip3_press, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_input_config_ddlist_ip3_press, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style state: LV_STATE_CHECKED for &style_scr_input_config_ddlist_ip3_press_extra_list_selected_checked
    static lv_style_t style_scr_input_config_ddlist_ip3_press_extra_list_selected_checked;
    ui_init_style(&style_scr_input_config_ddlist_ip3_press_extra_list_selected_checked);

    lv_style_set_border_width(&style_scr_input_config_ddlist_ip3_press_extra_list_selected_checked, 1);
    lv_style_set_border_opa(&style_scr_input_config_ddlist_ip3_press_extra_list_selected_checked, 255);
    lv_style_set_border_color(&style_scr_input_config_ddlist_ip3_press_extra_list_selected_checked, lv_color_hex(0xe1e6ee));
    lv_style_set_border_side(&style_scr_input_config_ddlist_ip3_press_extra_list_selected_checked, LV_BORDER_SIDE_FULL);
    lv_style_set_radius(&style_scr_input_config_ddlist_ip3_press_extra_list_selected_checked, 3);
    lv_style_set_bg_opa(&style_scr_input_config_ddlist_ip3_press_extra_list_selected_checked, 255);
    lv_style_set_bg_color(&style_scr_input_config_ddlist_ip3_press_extra_list_selected_checked, lv_color_hex(0x00a1b5));
    lv_style_set_bg_grad_dir(&style_scr_input_config_ddlist_ip3_press_extra_list_selected_checked, LV_GRAD_DIR_NONE);
    lv_obj_add_style(lv_dropdown_get_list(ui->scr_input_config_ddlist_ip3_press), &style_scr_input_config_ddlist_ip3_press_extra_list_selected_checked, LV_PART_SELECTED|LV_STATE_CHECKED);

    //Write style state: LV_STATE_DEFAULT for &style_scr_input_config_ddlist_ip3_press_extra_list_main_default
    static lv_style_t style_scr_input_config_ddlist_ip3_press_extra_list_main_default;
    ui_init_style(&style_scr_input_config_ddlist_ip3_press_extra_list_main_default);

    lv_style_set_max_height(&style_scr_input_config_ddlist_ip3_press_extra_list_main_default, 90);
    lv_style_set_text_color(&style_scr_input_config_ddlist_ip3_press_extra_list_main_default, lv_color_hex(0x0D3055));
    lv_style_set_text_font(&style_scr_input_config_ddlist_ip3_press_extra_list_main_default, &lv_font_montserratMedium_12);
    lv_style_set_text_opa(&style_scr_input_config_ddlist_ip3_press_extra_list_main_default, 255);
    lv_style_set_border_width(&style_scr_input_config_ddlist_ip3_press_extra_list_main_default, 1);
    lv_style_set_border_opa(&style_scr_input_config_ddlist_ip3_press_extra_list_main_default, 255);
    lv_style_set_border_color(&style_scr_input_config_ddlist_ip3_press_extra_list_main_default, lv_color_hex(0xe1e6ee));
    lv_style_set_border_side(&style_scr_input_config_ddlist_ip3_press_extra_list_main_default, LV_BORDER_SIDE_FULL);
    lv_style_set_radius(&style_scr_input_config_ddlist_ip3_press_extra_list_main_default, 3);
    lv_style_set_bg_opa(&style_scr_input_config_ddlist_ip3_press_extra_list_main_default, 255);
    lv_style_set_bg_color(&style_scr_input_config_ddlist_ip3_press_extra_list_main_default, lv_color_hex(0xffffff));
    lv_style_set_bg_grad_dir(&style_scr_input_config_ddlist_ip3_press_extra_list_main_default, LV_GRAD_DIR_NONE);
    lv_obj_add_style(lv_dropdown_get_list(ui->scr_input_config_ddlist_ip3_press), &style_scr_input_config_ddlist_ip3_press_extra_list_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style state: LV_STATE_DEFAULT for &style_scr_input_config_ddlist_ip3_press_extra_list_scrollbar_default
    static lv_style_t style_scr_input_config_ddlist_ip3_press_extra_list_scrollbar_default;
    ui_init_style(&style_scr_input_config_ddlist_ip3_press_extra_list_scrollbar_default);

    lv_style_set_radius(&style_scr_input_config_ddlist_ip3_press_extra_list_scrollbar_default, 3);
    lv_style_set_bg_opa(&style_scr_input_config_ddlist_ip3_press_extra_list_scrollbar_default, 255);
    lv_style_set_bg_color(&style_scr_input_config_ddlist_ip3_press_extra_list_scrollbar_default, lv_color_hex(0x00ff00));
    lv_style_set_bg_grad_dir(&style_scr_input_config_ddlist_ip3_press_extra_list_scrollbar_default, LV_GRAD_DIR_NONE);
    lv_obj_add_style(lv_dropdown_get_list(ui->scr_input_config_ddlist_ip3_press), &style_scr_input_config_ddlist_ip3_press_extra_list_scrollbar_default, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);

    //Write codes scr_input_config_lbl_ip3_press
    ui->scr_input_config_lbl_ip3_press = lv_label_create(ui->scr_input_config_cont_input3);
    lv_obj_set_pos(ui->scr_input_config_lbl_ip3_press, 132, 156);
    lv_obj_set_size(ui->scr_input_config_lbl_ip3_press, 189, 32);
    lv_label_set_text(ui->scr_input_config_lbl_ip3_press, "Press Type");
    lv_label_set_long_mode(ui->scr_input_config_lbl_ip3_press, LV_LABEL_LONG_WRAP);

    //Write style for scr_input_config_lbl_ip3_press, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scr_input_config_lbl_ip3_press, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_input_config_lbl_ip3_press, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scr_input_config_lbl_ip3_press, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scr_input_config_lbl_ip3_press, &lv_font_arial_30, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scr_input_config_lbl_ip3_press, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->scr_input_config_lbl_ip3_press, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->scr_input_config_lbl_ip3_press, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scr_input_config_lbl_ip3_press, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scr_input_config_lbl_ip3_press, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scr_input_config_lbl_ip3_press, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scr_input_config_lbl_ip3_press, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scr_input_config_lbl_ip3_press, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scr_input_config_lbl_ip3_press, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_input_config_lbl_ip3_press, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scr_input_config_line_23
    ui->scr_input_config_line_23 = lv_line_create(ui->scr_input_config_cont_input3);
    lv_obj_set_pos(ui->scr_input_config_line_23, 143, 216);
    lv_obj_set_size(ui->scr_input_config_line_23, 850, 2);
    static lv_point_precise_t scr_input_config_line_23[] = {{0, 0},{1100, 0}};
    lv_line_set_points(ui->scr_input_config_line_23, scr_input_config_line_23, 2);

    //Write style for scr_input_config_line_23, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_line_width(ui->scr_input_config_line_23, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_color(ui->scr_input_config_line_23, lv_color_hex(0x757575), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_opa(ui->scr_input_config_line_23, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_rounded(ui->scr_input_config_line_23, true, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes INPUT 4
    lv_obj_t * scr_input_config_tabview_intput_tab_4_label = lv_label_create(ui->scr_input_config_tabview_intput_tab_4);
    lv_label_set_text(scr_input_config_tabview_intput_tab_4_label, "");

    //Write codes scr_input_config_cont_input4
    ui->scr_input_config_cont_input4 = lv_obj_create(ui->scr_input_config_tabview_intput_tab_4);
    lv_obj_set_pos(ui->scr_input_config_cont_input4, 29, 0);
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

    //Write codes scr_input_config_line_32
    ui->scr_input_config_line_32 = lv_line_create(ui->scr_input_config_cont_input4);
    lv_obj_set_pos(ui->scr_input_config_line_32, 0, 40);
    lv_obj_set_size(ui->scr_input_config_line_32, 1100, 2);
    static lv_point_precise_t scr_input_config_line_32[] = {{0, 0},{1100, 0}};
    lv_line_set_points(ui->scr_input_config_line_32, scr_input_config_line_32, 2);

    //Write style for scr_input_config_line_32, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_line_width(ui->scr_input_config_line_32, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_color(ui->scr_input_config_line_32, lv_color_hex(0x757575), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_opa(ui->scr_input_config_line_32, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_rounded(ui->scr_input_config_line_32, true, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scr_input_config_ddlist_ip4_debounce
    ui->scr_input_config_ddlist_ip4_debounce = lv_dropdown_create(ui->scr_input_config_cont_input4);
    lv_obj_set_pos(ui->scr_input_config_ddlist_ip4_debounce, 447, 327);
    lv_obj_set_size(ui->scr_input_config_ddlist_ip4_debounce, 450, 50);
    lv_dropdown_set_options(ui->scr_input_config_ddlist_ip4_debounce, "20\n50\n100\n200");

    //Write style for scr_input_config_ddlist_ip4_debounce, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_text_color(ui->scr_input_config_ddlist_ip4_debounce, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scr_input_config_ddlist_ip4_debounce, &lv_font_arial_30, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scr_input_config_ddlist_ip4_debounce, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->scr_input_config_ddlist_ip4_debounce, 1, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->scr_input_config_ddlist_ip4_debounce, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->scr_input_config_ddlist_ip4_debounce, lv_color_hex(0xe1e6ee), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->scr_input_config_ddlist_ip4_debounce, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scr_input_config_ddlist_ip4_debounce, 8, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scr_input_config_ddlist_ip4_debounce, 6, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scr_input_config_ddlist_ip4_debounce, 6, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_input_config_ddlist_ip4_debounce, 1, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scr_input_config_ddlist_ip4_debounce, 78, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scr_input_config_ddlist_ip4_debounce, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scr_input_config_ddlist_ip4_debounce, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_input_config_ddlist_ip4_debounce, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style state: LV_STATE_CHECKED for &style_scr_input_config_ddlist_ip4_debounce_extra_list_selected_checked
    static lv_style_t style_scr_input_config_ddlist_ip4_debounce_extra_list_selected_checked;
    ui_init_style(&style_scr_input_config_ddlist_ip4_debounce_extra_list_selected_checked);

    lv_style_set_border_width(&style_scr_input_config_ddlist_ip4_debounce_extra_list_selected_checked, 1);
    lv_style_set_border_opa(&style_scr_input_config_ddlist_ip4_debounce_extra_list_selected_checked, 255);
    lv_style_set_border_color(&style_scr_input_config_ddlist_ip4_debounce_extra_list_selected_checked, lv_color_hex(0xe1e6ee));
    lv_style_set_border_side(&style_scr_input_config_ddlist_ip4_debounce_extra_list_selected_checked, LV_BORDER_SIDE_FULL);
    lv_style_set_radius(&style_scr_input_config_ddlist_ip4_debounce_extra_list_selected_checked, 3);
    lv_style_set_bg_opa(&style_scr_input_config_ddlist_ip4_debounce_extra_list_selected_checked, 255);
    lv_style_set_bg_color(&style_scr_input_config_ddlist_ip4_debounce_extra_list_selected_checked, lv_color_hex(0x00a1b5));
    lv_style_set_bg_grad_dir(&style_scr_input_config_ddlist_ip4_debounce_extra_list_selected_checked, LV_GRAD_DIR_NONE);
    lv_obj_add_style(lv_dropdown_get_list(ui->scr_input_config_ddlist_ip4_debounce), &style_scr_input_config_ddlist_ip4_debounce_extra_list_selected_checked, LV_PART_SELECTED|LV_STATE_CHECKED);

    //Write style state: LV_STATE_DEFAULT for &style_scr_input_config_ddlist_ip4_debounce_extra_list_main_default
    static lv_style_t style_scr_input_config_ddlist_ip4_debounce_extra_list_main_default;
    ui_init_style(&style_scr_input_config_ddlist_ip4_debounce_extra_list_main_default);

    lv_style_set_max_height(&style_scr_input_config_ddlist_ip4_debounce_extra_list_main_default, 90);
    lv_style_set_text_color(&style_scr_input_config_ddlist_ip4_debounce_extra_list_main_default, lv_color_hex(0x0D3055));
    lv_style_set_text_font(&style_scr_input_config_ddlist_ip4_debounce_extra_list_main_default, &lv_font_montserratMedium_12);
    lv_style_set_text_opa(&style_scr_input_config_ddlist_ip4_debounce_extra_list_main_default, 255);
    lv_style_set_border_width(&style_scr_input_config_ddlist_ip4_debounce_extra_list_main_default, 1);
    lv_style_set_border_opa(&style_scr_input_config_ddlist_ip4_debounce_extra_list_main_default, 255);
    lv_style_set_border_color(&style_scr_input_config_ddlist_ip4_debounce_extra_list_main_default, lv_color_hex(0xe1e6ee));
    lv_style_set_border_side(&style_scr_input_config_ddlist_ip4_debounce_extra_list_main_default, LV_BORDER_SIDE_FULL);
    lv_style_set_radius(&style_scr_input_config_ddlist_ip4_debounce_extra_list_main_default, 3);
    lv_style_set_bg_opa(&style_scr_input_config_ddlist_ip4_debounce_extra_list_main_default, 255);
    lv_style_set_bg_color(&style_scr_input_config_ddlist_ip4_debounce_extra_list_main_default, lv_color_hex(0xffffff));
    lv_style_set_bg_grad_dir(&style_scr_input_config_ddlist_ip4_debounce_extra_list_main_default, LV_GRAD_DIR_NONE);
    lv_obj_add_style(lv_dropdown_get_list(ui->scr_input_config_ddlist_ip4_debounce), &style_scr_input_config_ddlist_ip4_debounce_extra_list_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style state: LV_STATE_DEFAULT for &style_scr_input_config_ddlist_ip4_debounce_extra_list_scrollbar_default
    static lv_style_t style_scr_input_config_ddlist_ip4_debounce_extra_list_scrollbar_default;
    ui_init_style(&style_scr_input_config_ddlist_ip4_debounce_extra_list_scrollbar_default);

    lv_style_set_radius(&style_scr_input_config_ddlist_ip4_debounce_extra_list_scrollbar_default, 3);
    lv_style_set_bg_opa(&style_scr_input_config_ddlist_ip4_debounce_extra_list_scrollbar_default, 255);
    lv_style_set_bg_color(&style_scr_input_config_ddlist_ip4_debounce_extra_list_scrollbar_default, lv_color_hex(0x00ff00));
    lv_style_set_bg_grad_dir(&style_scr_input_config_ddlist_ip4_debounce_extra_list_scrollbar_default, LV_GRAD_DIR_NONE);
    lv_obj_add_style(lv_dropdown_get_list(ui->scr_input_config_ddlist_ip4_debounce), &style_scr_input_config_ddlist_ip4_debounce_extra_list_scrollbar_default, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);

    //Write codes scr_input_config_ddlist_ip4_function
    ui->scr_input_config_ddlist_ip4_function = lv_dropdown_create(ui->scr_input_config_cont_input4);
    lv_obj_set_pos(ui->scr_input_config_ddlist_ip4_function, 447, 59);
    lv_obj_set_size(ui->scr_input_config_ddlist_ip4_function, 450, 50);
    lv_dropdown_set_options(ui->scr_input_config_ddlist_ip4_function, "Start\nStop\nError\nCount Product\nNone");

    //Write style for scr_input_config_ddlist_ip4_function, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_text_color(ui->scr_input_config_ddlist_ip4_function, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scr_input_config_ddlist_ip4_function, &lv_font_arial_30, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scr_input_config_ddlist_ip4_function, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->scr_input_config_ddlist_ip4_function, 1, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->scr_input_config_ddlist_ip4_function, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->scr_input_config_ddlist_ip4_function, lv_color_hex(0xe1e6ee), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->scr_input_config_ddlist_ip4_function, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scr_input_config_ddlist_ip4_function, 8, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scr_input_config_ddlist_ip4_function, 6, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scr_input_config_ddlist_ip4_function, 6, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_input_config_ddlist_ip4_function, 1, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scr_input_config_ddlist_ip4_function, 78, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scr_input_config_ddlist_ip4_function, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scr_input_config_ddlist_ip4_function, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_input_config_ddlist_ip4_function, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style state: LV_STATE_CHECKED for &style_scr_input_config_ddlist_ip4_function_extra_list_selected_checked
    static lv_style_t style_scr_input_config_ddlist_ip4_function_extra_list_selected_checked;
    ui_init_style(&style_scr_input_config_ddlist_ip4_function_extra_list_selected_checked);

    lv_style_set_border_width(&style_scr_input_config_ddlist_ip4_function_extra_list_selected_checked, 1);
    lv_style_set_border_opa(&style_scr_input_config_ddlist_ip4_function_extra_list_selected_checked, 255);
    lv_style_set_border_color(&style_scr_input_config_ddlist_ip4_function_extra_list_selected_checked, lv_color_hex(0xe1e6ee));
    lv_style_set_border_side(&style_scr_input_config_ddlist_ip4_function_extra_list_selected_checked, LV_BORDER_SIDE_FULL);
    lv_style_set_radius(&style_scr_input_config_ddlist_ip4_function_extra_list_selected_checked, 3);
    lv_style_set_bg_opa(&style_scr_input_config_ddlist_ip4_function_extra_list_selected_checked, 255);
    lv_style_set_bg_color(&style_scr_input_config_ddlist_ip4_function_extra_list_selected_checked, lv_color_hex(0x00a1b5));
    lv_style_set_bg_grad_dir(&style_scr_input_config_ddlist_ip4_function_extra_list_selected_checked, LV_GRAD_DIR_NONE);
    lv_obj_add_style(lv_dropdown_get_list(ui->scr_input_config_ddlist_ip4_function), &style_scr_input_config_ddlist_ip4_function_extra_list_selected_checked, LV_PART_SELECTED|LV_STATE_CHECKED);

    //Write style state: LV_STATE_DEFAULT for &style_scr_input_config_ddlist_ip4_function_extra_list_main_default
    static lv_style_t style_scr_input_config_ddlist_ip4_function_extra_list_main_default;
    ui_init_style(&style_scr_input_config_ddlist_ip4_function_extra_list_main_default);

    lv_style_set_max_height(&style_scr_input_config_ddlist_ip4_function_extra_list_main_default, 90);
    lv_style_set_text_color(&style_scr_input_config_ddlist_ip4_function_extra_list_main_default, lv_color_hex(0x0D3055));
    lv_style_set_text_font(&style_scr_input_config_ddlist_ip4_function_extra_list_main_default, &lv_font_montserratMedium_12);
    lv_style_set_text_opa(&style_scr_input_config_ddlist_ip4_function_extra_list_main_default, 255);
    lv_style_set_border_width(&style_scr_input_config_ddlist_ip4_function_extra_list_main_default, 1);
    lv_style_set_border_opa(&style_scr_input_config_ddlist_ip4_function_extra_list_main_default, 255);
    lv_style_set_border_color(&style_scr_input_config_ddlist_ip4_function_extra_list_main_default, lv_color_hex(0xe1e6ee));
    lv_style_set_border_side(&style_scr_input_config_ddlist_ip4_function_extra_list_main_default, LV_BORDER_SIDE_FULL);
    lv_style_set_radius(&style_scr_input_config_ddlist_ip4_function_extra_list_main_default, 3);
    lv_style_set_bg_opa(&style_scr_input_config_ddlist_ip4_function_extra_list_main_default, 255);
    lv_style_set_bg_color(&style_scr_input_config_ddlist_ip4_function_extra_list_main_default, lv_color_hex(0xffffff));
    lv_style_set_bg_grad_dir(&style_scr_input_config_ddlist_ip4_function_extra_list_main_default, LV_GRAD_DIR_NONE);
    lv_obj_add_style(lv_dropdown_get_list(ui->scr_input_config_ddlist_ip4_function), &style_scr_input_config_ddlist_ip4_function_extra_list_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style state: LV_STATE_DEFAULT for &style_scr_input_config_ddlist_ip4_function_extra_list_scrollbar_default
    static lv_style_t style_scr_input_config_ddlist_ip4_function_extra_list_scrollbar_default;
    ui_init_style(&style_scr_input_config_ddlist_ip4_function_extra_list_scrollbar_default);

    lv_style_set_radius(&style_scr_input_config_ddlist_ip4_function_extra_list_scrollbar_default, 3);
    lv_style_set_bg_opa(&style_scr_input_config_ddlist_ip4_function_extra_list_scrollbar_default, 255);
    lv_style_set_bg_color(&style_scr_input_config_ddlist_ip4_function_extra_list_scrollbar_default, lv_color_hex(0x00ff00));
    lv_style_set_bg_grad_dir(&style_scr_input_config_ddlist_ip4_function_extra_list_scrollbar_default, LV_GRAD_DIR_NONE);
    lv_obj_add_style(lv_dropdown_get_list(ui->scr_input_config_ddlist_ip4_function), &style_scr_input_config_ddlist_ip4_function_extra_list_scrollbar_default, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);

    //Write codes scr_input_config_lbl_ip4_debounce
    ui->scr_input_config_lbl_ip4_debounce = lv_label_create(ui->scr_input_config_cont_input4);
    lv_obj_set_pos(ui->scr_input_config_lbl_ip4_debounce, 138, 336);
    lv_obj_set_size(ui->scr_input_config_lbl_ip4_debounce, 221, 32);
    lv_label_set_text(ui->scr_input_config_lbl_ip4_debounce, "Debounce (ms)");
    lv_label_set_long_mode(ui->scr_input_config_lbl_ip4_debounce, LV_LABEL_LONG_WRAP);

    //Write style for scr_input_config_lbl_ip4_debounce, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scr_input_config_lbl_ip4_debounce, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_input_config_lbl_ip4_debounce, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scr_input_config_lbl_ip4_debounce, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scr_input_config_lbl_ip4_debounce, &lv_font_arial_30, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scr_input_config_lbl_ip4_debounce, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->scr_input_config_lbl_ip4_debounce, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->scr_input_config_lbl_ip4_debounce, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scr_input_config_lbl_ip4_debounce, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scr_input_config_lbl_ip4_debounce, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scr_input_config_lbl_ip4_debounce, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scr_input_config_lbl_ip4_debounce, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scr_input_config_lbl_ip4_debounce, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scr_input_config_lbl_ip4_debounce, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_input_config_lbl_ip4_debounce, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scr_input_config_lbl_ip4_trigger
    ui->scr_input_config_lbl_ip4_trigger = lv_label_create(ui->scr_input_config_cont_input4);
    lv_obj_set_pos(ui->scr_input_config_lbl_ip4_trigger, 138, 247);
    lv_obj_set_size(ui->scr_input_config_lbl_ip4_trigger, 187, 32);
    lv_label_set_text(ui->scr_input_config_lbl_ip4_trigger, "Trigger Type");
    lv_label_set_long_mode(ui->scr_input_config_lbl_ip4_trigger, LV_LABEL_LONG_WRAP);

    //Write style for scr_input_config_lbl_ip4_trigger, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scr_input_config_lbl_ip4_trigger, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_input_config_lbl_ip4_trigger, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scr_input_config_lbl_ip4_trigger, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scr_input_config_lbl_ip4_trigger, &lv_font_arial_30, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scr_input_config_lbl_ip4_trigger, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->scr_input_config_lbl_ip4_trigger, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->scr_input_config_lbl_ip4_trigger, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scr_input_config_lbl_ip4_trigger, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scr_input_config_lbl_ip4_trigger, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scr_input_config_lbl_ip4_trigger, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scr_input_config_lbl_ip4_trigger, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scr_input_config_lbl_ip4_trigger, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scr_input_config_lbl_ip4_trigger, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_input_config_lbl_ip4_trigger, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scr_input_config_ddlist_ip4_trigger
    ui->scr_input_config_ddlist_ip4_trigger = lv_dropdown_create(ui->scr_input_config_cont_input4);
    lv_obj_set_pos(ui->scr_input_config_ddlist_ip4_trigger, 447, 238);
    lv_obj_set_size(ui->scr_input_config_ddlist_ip4_trigger, 450, 50);
    lv_dropdown_set_options(ui->scr_input_config_ddlist_ip4_trigger, "Rising Edge\nFalling Edge\nLevel High\nLevel Low");

    //Write style for scr_input_config_ddlist_ip4_trigger, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_text_color(ui->scr_input_config_ddlist_ip4_trigger, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scr_input_config_ddlist_ip4_trigger, &lv_font_arial_30, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scr_input_config_ddlist_ip4_trigger, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->scr_input_config_ddlist_ip4_trigger, 1, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->scr_input_config_ddlist_ip4_trigger, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->scr_input_config_ddlist_ip4_trigger, lv_color_hex(0xe1e6ee), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->scr_input_config_ddlist_ip4_trigger, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scr_input_config_ddlist_ip4_trigger, 8, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scr_input_config_ddlist_ip4_trigger, 6, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scr_input_config_ddlist_ip4_trigger, 6, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_input_config_ddlist_ip4_trigger, 1, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scr_input_config_ddlist_ip4_trigger, 79, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scr_input_config_ddlist_ip4_trigger, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scr_input_config_ddlist_ip4_trigger, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_input_config_ddlist_ip4_trigger, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style state: LV_STATE_CHECKED for &style_scr_input_config_ddlist_ip4_trigger_extra_list_selected_checked
    static lv_style_t style_scr_input_config_ddlist_ip4_trigger_extra_list_selected_checked;
    ui_init_style(&style_scr_input_config_ddlist_ip4_trigger_extra_list_selected_checked);

    lv_style_set_border_width(&style_scr_input_config_ddlist_ip4_trigger_extra_list_selected_checked, 1);
    lv_style_set_border_opa(&style_scr_input_config_ddlist_ip4_trigger_extra_list_selected_checked, 255);
    lv_style_set_border_color(&style_scr_input_config_ddlist_ip4_trigger_extra_list_selected_checked, lv_color_hex(0xe1e6ee));
    lv_style_set_border_side(&style_scr_input_config_ddlist_ip4_trigger_extra_list_selected_checked, LV_BORDER_SIDE_FULL);
    lv_style_set_radius(&style_scr_input_config_ddlist_ip4_trigger_extra_list_selected_checked, 3);
    lv_style_set_bg_opa(&style_scr_input_config_ddlist_ip4_trigger_extra_list_selected_checked, 255);
    lv_style_set_bg_color(&style_scr_input_config_ddlist_ip4_trigger_extra_list_selected_checked, lv_color_hex(0x00a1b5));
    lv_style_set_bg_grad_dir(&style_scr_input_config_ddlist_ip4_trigger_extra_list_selected_checked, LV_GRAD_DIR_NONE);
    lv_obj_add_style(lv_dropdown_get_list(ui->scr_input_config_ddlist_ip4_trigger), &style_scr_input_config_ddlist_ip4_trigger_extra_list_selected_checked, LV_PART_SELECTED|LV_STATE_CHECKED);

    //Write style state: LV_STATE_DEFAULT for &style_scr_input_config_ddlist_ip4_trigger_extra_list_main_default
    static lv_style_t style_scr_input_config_ddlist_ip4_trigger_extra_list_main_default;
    ui_init_style(&style_scr_input_config_ddlist_ip4_trigger_extra_list_main_default);

    lv_style_set_max_height(&style_scr_input_config_ddlist_ip4_trigger_extra_list_main_default, 90);
    lv_style_set_text_color(&style_scr_input_config_ddlist_ip4_trigger_extra_list_main_default, lv_color_hex(0x0D3055));
    lv_style_set_text_font(&style_scr_input_config_ddlist_ip4_trigger_extra_list_main_default, &lv_font_montserratMedium_12);
    lv_style_set_text_opa(&style_scr_input_config_ddlist_ip4_trigger_extra_list_main_default, 255);
    lv_style_set_border_width(&style_scr_input_config_ddlist_ip4_trigger_extra_list_main_default, 1);
    lv_style_set_border_opa(&style_scr_input_config_ddlist_ip4_trigger_extra_list_main_default, 255);
    lv_style_set_border_color(&style_scr_input_config_ddlist_ip4_trigger_extra_list_main_default, lv_color_hex(0xe1e6ee));
    lv_style_set_border_side(&style_scr_input_config_ddlist_ip4_trigger_extra_list_main_default, LV_BORDER_SIDE_FULL);
    lv_style_set_radius(&style_scr_input_config_ddlist_ip4_trigger_extra_list_main_default, 3);
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
    lv_obj_set_pos(ui->scr_input_config_lbl_ip4_function, 138, 68);
    lv_obj_set_size(ui->scr_input_config_lbl_ip4_function, 143, 32);
    lv_label_set_text(ui->scr_input_config_lbl_ip4_function, "Function");
    lv_label_set_long_mode(ui->scr_input_config_lbl_ip4_function, LV_LABEL_LONG_WRAP);

    //Write style for scr_input_config_lbl_ip4_function, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scr_input_config_lbl_ip4_function, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_input_config_lbl_ip4_function, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scr_input_config_lbl_ip4_function, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scr_input_config_lbl_ip4_function, &lv_font_arial_30, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scr_input_config_lbl_ip4_function, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->scr_input_config_lbl_ip4_function, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->scr_input_config_lbl_ip4_function, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scr_input_config_lbl_ip4_function, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scr_input_config_lbl_ip4_function, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scr_input_config_lbl_ip4_function, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scr_input_config_lbl_ip4_function, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scr_input_config_lbl_ip4_function, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scr_input_config_lbl_ip4_function, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_input_config_lbl_ip4_function, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scr_input_config_lbl_ip4
    ui->scr_input_config_lbl_ip4 = lv_label_create(ui->scr_input_config_cont_input4);
    lv_obj_set_pos(ui->scr_input_config_lbl_ip4, 0, 0);
    lv_obj_set_size(ui->scr_input_config_lbl_ip4, 381, 32);
    lv_label_set_text_static(ui->scr_input_config_lbl_ip4, "Selected Input: INPUT 4");
    lv_label_set_long_mode(ui->scr_input_config_lbl_ip4, LV_LABEL_LONG_WRAP);

    //Write style for scr_input_config_lbl_ip4, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scr_input_config_lbl_ip4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_input_config_lbl_ip4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scr_input_config_lbl_ip4, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scr_input_config_lbl_ip4, &lv_font_arial_30, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scr_input_config_lbl_ip4, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->scr_input_config_lbl_ip4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->scr_input_config_lbl_ip4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scr_input_config_lbl_ip4, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scr_input_config_lbl_ip4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scr_input_config_lbl_ip4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scr_input_config_lbl_ip4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scr_input_config_lbl_ip4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scr_input_config_lbl_ip4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_input_config_lbl_ip4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scr_input_config_lbl_ip4_livestatus
    ui->scr_input_config_lbl_ip4_livestatus = lv_label_create(ui->scr_input_config_cont_input4);
    lv_obj_set_pos(ui->scr_input_config_lbl_ip4_livestatus, 138, 412);
    lv_obj_set_size(ui->scr_input_config_lbl_ip4_livestatus, 174, 32);
    lv_label_set_text(ui->scr_input_config_lbl_ip4_livestatus, "Live Status");
    lv_label_set_long_mode(ui->scr_input_config_lbl_ip4_livestatus, LV_LABEL_LONG_WRAP);

    //Write style for scr_input_config_lbl_ip4_livestatus, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scr_input_config_lbl_ip4_livestatus, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_input_config_lbl_ip4_livestatus, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scr_input_config_lbl_ip4_livestatus, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scr_input_config_lbl_ip4_livestatus, &lv_font_arial_30, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scr_input_config_lbl_ip4_livestatus, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->scr_input_config_lbl_ip4_livestatus, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->scr_input_config_lbl_ip4_livestatus, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scr_input_config_lbl_ip4_livestatus, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scr_input_config_lbl_ip4_livestatus, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scr_input_config_lbl_ip4_livestatus, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scr_input_config_lbl_ip4_livestatus, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scr_input_config_lbl_ip4_livestatus, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scr_input_config_lbl_ip4_livestatus, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_input_config_lbl_ip4_livestatus, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scr_input_config_lbl_ip4_status
    ui->scr_input_config_lbl_ip4_status = lv_label_create(ui->scr_input_config_cont_input4);
    lv_obj_set_pos(ui->scr_input_config_lbl_ip4_status, 477, 414);
    lv_obj_set_size(ui->scr_input_config_lbl_ip4_status, 114, 32);
    lv_label_set_text(ui->scr_input_config_lbl_ip4_status, "LOW");
    lv_label_set_long_mode(ui->scr_input_config_lbl_ip4_status, LV_LABEL_LONG_WRAP);

    //Write style for scr_input_config_lbl_ip4_status, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scr_input_config_lbl_ip4_status, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_input_config_lbl_ip4_status, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scr_input_config_lbl_ip4_status, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scr_input_config_lbl_ip4_status, &lv_font_arial_30, LV_PART_MAIN|LV_STATE_DEFAULT);
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
    lv_obj_set_pos(ui->scr_input_config_led_ip4_status, 447, 420);
    lv_obj_set_size(ui->scr_input_config_led_ip4_status, 20, 20);
    lv_led_set_brightness(ui->scr_input_config_led_ip4_status, 255);
    lv_led_set_color(ui->scr_input_config_led_ip4_status, lv_color_hex(0xfd0026));

    //Write codes scr_input_config_line_31
    ui->scr_input_config_line_31 = lv_line_create(ui->scr_input_config_cont_input4);
    lv_obj_set_pos(ui->scr_input_config_line_31, 145, 125);
    lv_obj_set_size(ui->scr_input_config_line_31, 850, 2);
    static lv_point_precise_t scr_input_config_line_31[] = {{0, 0},{1100, 0}};
    lv_line_set_points(ui->scr_input_config_line_31, scr_input_config_line_31, 2);

    //Write style for scr_input_config_line_31, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_line_width(ui->scr_input_config_line_31, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_color(ui->scr_input_config_line_31, lv_color_hex(0x757575), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_opa(ui->scr_input_config_line_31, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_rounded(ui->scr_input_config_line_31, true, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scr_input_config_line_30
    ui->scr_input_config_line_30 = lv_line_create(ui->scr_input_config_cont_input4);
    lv_obj_set_pos(ui->scr_input_config_line_30, 143, 306);
    lv_obj_set_size(ui->scr_input_config_line_30, 850, 2);
    static lv_point_precise_t scr_input_config_line_30[] = {{0, 0},{1100, 0}};
    lv_line_set_points(ui->scr_input_config_line_30, scr_input_config_line_30, 2);

    //Write style for scr_input_config_line_30, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_line_width(ui->scr_input_config_line_30, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_color(ui->scr_input_config_line_30, lv_color_hex(0x757575), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_opa(ui->scr_input_config_line_30, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_rounded(ui->scr_input_config_line_30, true, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scr_input_config_line_29
    ui->scr_input_config_line_29 = lv_line_create(ui->scr_input_config_cont_input4);
    lv_obj_set_pos(ui->scr_input_config_line_29, 143, 394);
    lv_obj_set_size(ui->scr_input_config_line_29, 850, 2);
    static lv_point_precise_t scr_input_config_line_29[] = {{0, 0},{1100, 0}};
    lv_line_set_points(ui->scr_input_config_line_29, scr_input_config_line_29, 2);

    //Write style for scr_input_config_line_29, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_line_width(ui->scr_input_config_line_29, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_color(ui->scr_input_config_line_29, lv_color_hex(0x757575), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_opa(ui->scr_input_config_line_29, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_rounded(ui->scr_input_config_line_29, true, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scr_input_config_ddlist_ip4_press
    ui->scr_input_config_ddlist_ip4_press = lv_dropdown_create(ui->scr_input_config_cont_input4);
    lv_obj_set_pos(ui->scr_input_config_ddlist_ip4_press, 447, 146);
    lv_obj_set_size(ui->scr_input_config_ddlist_ip4_press, 450, 50);
    lv_dropdown_set_options(ui->scr_input_config_ddlist_ip4_press, "Click\nHold\nPulse\nLevel");

    //Write style for scr_input_config_ddlist_ip4_press, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_text_color(ui->scr_input_config_ddlist_ip4_press, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scr_input_config_ddlist_ip4_press, &lv_font_arial_30, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scr_input_config_ddlist_ip4_press, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->scr_input_config_ddlist_ip4_press, 1, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->scr_input_config_ddlist_ip4_press, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->scr_input_config_ddlist_ip4_press, lv_color_hex(0xe1e6ee), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->scr_input_config_ddlist_ip4_press, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scr_input_config_ddlist_ip4_press, 8, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scr_input_config_ddlist_ip4_press, 6, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scr_input_config_ddlist_ip4_press, 6, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_input_config_ddlist_ip4_press, 1, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scr_input_config_ddlist_ip4_press, 78, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scr_input_config_ddlist_ip4_press, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scr_input_config_ddlist_ip4_press, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_input_config_ddlist_ip4_press, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style state: LV_STATE_CHECKED for &style_scr_input_config_ddlist_ip4_press_extra_list_selected_checked
    static lv_style_t style_scr_input_config_ddlist_ip4_press_extra_list_selected_checked;
    ui_init_style(&style_scr_input_config_ddlist_ip4_press_extra_list_selected_checked);

    lv_style_set_border_width(&style_scr_input_config_ddlist_ip4_press_extra_list_selected_checked, 1);
    lv_style_set_border_opa(&style_scr_input_config_ddlist_ip4_press_extra_list_selected_checked, 255);
    lv_style_set_border_color(&style_scr_input_config_ddlist_ip4_press_extra_list_selected_checked, lv_color_hex(0xe1e6ee));
    lv_style_set_border_side(&style_scr_input_config_ddlist_ip4_press_extra_list_selected_checked, LV_BORDER_SIDE_FULL);
    lv_style_set_radius(&style_scr_input_config_ddlist_ip4_press_extra_list_selected_checked, 3);
    lv_style_set_bg_opa(&style_scr_input_config_ddlist_ip4_press_extra_list_selected_checked, 255);
    lv_style_set_bg_color(&style_scr_input_config_ddlist_ip4_press_extra_list_selected_checked, lv_color_hex(0x00a1b5));
    lv_style_set_bg_grad_dir(&style_scr_input_config_ddlist_ip4_press_extra_list_selected_checked, LV_GRAD_DIR_NONE);
    lv_obj_add_style(lv_dropdown_get_list(ui->scr_input_config_ddlist_ip4_press), &style_scr_input_config_ddlist_ip4_press_extra_list_selected_checked, LV_PART_SELECTED|LV_STATE_CHECKED);

    //Write style state: LV_STATE_DEFAULT for &style_scr_input_config_ddlist_ip4_press_extra_list_main_default
    static lv_style_t style_scr_input_config_ddlist_ip4_press_extra_list_main_default;
    ui_init_style(&style_scr_input_config_ddlist_ip4_press_extra_list_main_default);

    lv_style_set_max_height(&style_scr_input_config_ddlist_ip4_press_extra_list_main_default, 90);
    lv_style_set_text_color(&style_scr_input_config_ddlist_ip4_press_extra_list_main_default, lv_color_hex(0x0D3055));
    lv_style_set_text_font(&style_scr_input_config_ddlist_ip4_press_extra_list_main_default, &lv_font_montserratMedium_12);
    lv_style_set_text_opa(&style_scr_input_config_ddlist_ip4_press_extra_list_main_default, 255);
    lv_style_set_border_width(&style_scr_input_config_ddlist_ip4_press_extra_list_main_default, 1);
    lv_style_set_border_opa(&style_scr_input_config_ddlist_ip4_press_extra_list_main_default, 255);
    lv_style_set_border_color(&style_scr_input_config_ddlist_ip4_press_extra_list_main_default, lv_color_hex(0xe1e6ee));
    lv_style_set_border_side(&style_scr_input_config_ddlist_ip4_press_extra_list_main_default, LV_BORDER_SIDE_FULL);
    lv_style_set_radius(&style_scr_input_config_ddlist_ip4_press_extra_list_main_default, 3);
    lv_style_set_bg_opa(&style_scr_input_config_ddlist_ip4_press_extra_list_main_default, 255);
    lv_style_set_bg_color(&style_scr_input_config_ddlist_ip4_press_extra_list_main_default, lv_color_hex(0xffffff));
    lv_style_set_bg_grad_dir(&style_scr_input_config_ddlist_ip4_press_extra_list_main_default, LV_GRAD_DIR_NONE);
    lv_obj_add_style(lv_dropdown_get_list(ui->scr_input_config_ddlist_ip4_press), &style_scr_input_config_ddlist_ip4_press_extra_list_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style state: LV_STATE_DEFAULT for &style_scr_input_config_ddlist_ip4_press_extra_list_scrollbar_default
    static lv_style_t style_scr_input_config_ddlist_ip4_press_extra_list_scrollbar_default;
    ui_init_style(&style_scr_input_config_ddlist_ip4_press_extra_list_scrollbar_default);

    lv_style_set_radius(&style_scr_input_config_ddlist_ip4_press_extra_list_scrollbar_default, 3);
    lv_style_set_bg_opa(&style_scr_input_config_ddlist_ip4_press_extra_list_scrollbar_default, 255);
    lv_style_set_bg_color(&style_scr_input_config_ddlist_ip4_press_extra_list_scrollbar_default, lv_color_hex(0x00ff00));
    lv_style_set_bg_grad_dir(&style_scr_input_config_ddlist_ip4_press_extra_list_scrollbar_default, LV_GRAD_DIR_NONE);
    lv_obj_add_style(lv_dropdown_get_list(ui->scr_input_config_ddlist_ip4_press), &style_scr_input_config_ddlist_ip4_press_extra_list_scrollbar_default, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);

    //Write codes scr_input_config_lbl_ip4_press
    ui->scr_input_config_lbl_ip4_press = lv_label_create(ui->scr_input_config_cont_input4);
    lv_obj_set_pos(ui->scr_input_config_lbl_ip4_press, 132, 155);
    lv_obj_set_size(ui->scr_input_config_lbl_ip4_press, 189, 32);
    lv_label_set_text(ui->scr_input_config_lbl_ip4_press, "Press Type");
    lv_label_set_long_mode(ui->scr_input_config_lbl_ip4_press, LV_LABEL_LONG_WRAP);

    //Write style for scr_input_config_lbl_ip4_press, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scr_input_config_lbl_ip4_press, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_input_config_lbl_ip4_press, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scr_input_config_lbl_ip4_press, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scr_input_config_lbl_ip4_press, &lv_font_arial_30, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scr_input_config_lbl_ip4_press, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->scr_input_config_lbl_ip4_press, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->scr_input_config_lbl_ip4_press, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scr_input_config_lbl_ip4_press, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scr_input_config_lbl_ip4_press, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scr_input_config_lbl_ip4_press, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scr_input_config_lbl_ip4_press, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scr_input_config_lbl_ip4_press, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scr_input_config_lbl_ip4_press, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_input_config_lbl_ip4_press, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scr_input_config_line_28
    ui->scr_input_config_line_28 = lv_line_create(ui->scr_input_config_cont_input4);
    lv_obj_set_pos(ui->scr_input_config_line_28, 143, 216);
    lv_obj_set_size(ui->scr_input_config_line_28, 850, 2);
    static lv_point_precise_t scr_input_config_line_28[] = {{0, 0},{1100, 0}};
    lv_line_set_points(ui->scr_input_config_line_28, scr_input_config_line_28, 2);

    //Write style for scr_input_config_line_28, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_line_width(ui->scr_input_config_line_28, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_color(ui->scr_input_config_line_28, lv_color_hex(0x757575), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_opa(ui->scr_input_config_line_28, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_rounded(ui->scr_input_config_line_28, true, LV_PART_MAIN|LV_STATE_DEFAULT);

    //The custom code of scr_input_config.


    //Update current screen layout.
    lv_obj_update_layout(ui->scr_input_config);

    //Init events for screen.
    events_init_scr_input_config(ui);
}
