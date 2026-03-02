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



void setup_scr_src_status(lv_ui *ui)
{
    //Write codes src_status
    ui->src_status = lv_obj_create(NULL);
    lv_obj_set_size(ui->src_status, 1280, 720);
    lv_obj_set_scrollbar_mode(ui->src_status, LV_SCROLLBAR_MODE_OFF);

    //Write style for src_status, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->src_status, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->src_status, lv_color_hex(0x0f0f0f), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->src_status, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes src_status_cont_
    ui->src_status_cont_ = lv_obj_create(ui->src_status);
    lv_obj_set_pos(ui->src_status_cont_, 0, 0);
    lv_obj_set_size(ui->src_status_cont_, 1280, 72);
    lv_obj_set_scrollbar_mode(ui->src_status_cont_, LV_SCROLLBAR_MODE_OFF);

    //Write style for src_status_cont_, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->src_status_cont_, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->src_status_cont_, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->src_status_cont_, lv_color_hex(0x2195f6), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->src_status_cont_, LV_BORDER_SIDE_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->src_status_cont_, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->src_status_cont_, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->src_status_cont_, lv_color_hex(0x1c1c1c), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->src_status_cont_, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->src_status_cont_, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->src_status_cont_, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->src_status_cont_, 24, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->src_status_cont_, 24, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->src_status_cont_, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes src_status_cont_net_
    ui->src_status_cont_net_ = lv_obj_create(ui->src_status_cont_);
    lv_obj_set_pos(ui->src_status_cont_net_, 838, 0);
    lv_obj_set_size(ui->src_status_cont_net_, 217, 72);
    lv_obj_set_scrollbar_mode(ui->src_status_cont_net_, LV_SCROLLBAR_MODE_OFF);

    //Write style for src_status_cont_net_, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->src_status_cont_net_, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->src_status_cont_net_, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->src_status_cont_net_, lv_color_hex(0x2195f6), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->src_status_cont_net_, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->src_status_cont_net_, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->src_status_cont_net_, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->src_status_cont_net_, lv_color_hex(0x1c1c1c), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->src_status_cont_net_, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->src_status_cont_net_, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->src_status_cont_net_, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->src_status_cont_net_, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->src_status_cont_net_, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->src_status_cont_net_, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes src_status_lbl_online
    ui->src_status_lbl_online = lv_label_create(ui->src_status_cont_net_);
    lv_obj_set_pos(ui->src_status_lbl_online, 60, 20);
    lv_obj_set_size(ui->src_status_lbl_online, 135, 32);
    lv_label_set_text(ui->src_status_lbl_online, "ONLINE");
    lv_label_set_long_mode(ui->src_status_lbl_online, LV_LABEL_LONG_WRAP);

    //Write style for src_status_lbl_online, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->src_status_lbl_online, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->src_status_lbl_online, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->src_status_lbl_online, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->src_status_lbl_online, &lv_font_montserratMedium_30, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->src_status_lbl_online, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->src_status_lbl_online, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->src_status_lbl_online, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->src_status_lbl_online, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->src_status_lbl_online, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->src_status_lbl_online, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->src_status_lbl_online, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->src_status_lbl_online, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->src_status_lbl_online, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->src_status_lbl_online, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes src_status_img_
    ui->src_status_img_ = lv_image_create(ui->src_status_cont_net_);
    lv_obj_set_pos(ui->src_status_img_, 30, 26);
    lv_obj_set_size(ui->src_status_img_, 20, 20);
    lv_obj_add_flag(ui->src_status_img_, LV_OBJ_FLAG_CLICKABLE);
    lv_image_set_src(ui->src_status_img_, &_icon_online_RGB565A8_20x20);
    lv_image_set_pivot(ui->src_status_img_, 50,50);
    lv_image_set_rotation(ui->src_status_img_, 0);

    //Write style for src_status_img_, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_image_recolor_opa(ui->src_status_img_, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_image_recolor(ui->src_status_img_, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_image_opa(ui->src_status_img_, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes src_status_lbl_
    ui->src_status_lbl_ = lv_label_create(ui->src_status_cont_);
    lv_obj_set_pos(ui->src_status_lbl_, 559, 19);
    lv_obj_set_size(ui->src_status_lbl_, 265, 32);
    lv_label_set_text(ui->src_status_lbl_, "Machine: M01");
    lv_label_set_long_mode(ui->src_status_lbl_, LV_LABEL_LONG_WRAP);

    //Write style for src_status_lbl_, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->src_status_lbl_, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->src_status_lbl_, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->src_status_lbl_, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->src_status_lbl_, &lv_font_montserratMedium_30, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->src_status_lbl_, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->src_status_lbl_, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->src_status_lbl_, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->src_status_lbl_, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->src_status_lbl_, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->src_status_lbl_, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->src_status_lbl_, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->src_status_lbl_, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->src_status_lbl_, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->src_status_lbl_, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes src_status_lbl_edge_
    ui->src_status_lbl_edge_ = lv_label_create(ui->src_status_cont_);
    lv_obj_set_pos(ui->src_status_lbl_edge_, 280, 19);
    lv_obj_set_size(ui->src_status_lbl_edge_, 265, 32);
    lv_label_set_text(ui->src_status_lbl_edge_, "EdgeID: E-0001");
    lv_label_set_long_mode(ui->src_status_lbl_edge_, LV_LABEL_LONG_WRAP);

    //Write style for src_status_lbl_edge_, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->src_status_lbl_edge_, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->src_status_lbl_edge_, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->src_status_lbl_edge_, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->src_status_lbl_edge_, &lv_font_montserratMedium_30, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->src_status_lbl_edge_, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->src_status_lbl_edge_, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->src_status_lbl_edge_, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->src_status_lbl_edge_, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->src_status_lbl_edge_, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->src_status_lbl_edge_, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->src_status_lbl_edge_, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->src_status_lbl_edge_, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->src_status_lbl_edge_, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->src_status_lbl_edge_, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes src_status_lbl_app_
    ui->src_status_lbl_app_ = lv_label_create(ui->src_status_cont_);
    lv_obj_set_pos(ui->src_status_lbl_app_, 1, 19);
    lv_obj_set_size(ui->src_status_lbl_app_, 265, 32);
    lv_label_set_text(ui->src_status_lbl_app_, "EDGE MONITOR");
    lv_label_set_long_mode(ui->src_status_lbl_app_, LV_LABEL_LONG_WRAP);

    //Write style for src_status_lbl_app_, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->src_status_lbl_app_, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->src_status_lbl_app_, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->src_status_lbl_app_, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->src_status_lbl_app_, &lv_font_montserratMedium_30, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->src_status_lbl_app_, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->src_status_lbl_app_, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->src_status_lbl_app_, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->src_status_lbl_app_, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->src_status_lbl_app_, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->src_status_lbl_app_, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->src_status_lbl_app_, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->src_status_lbl_app_, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->src_status_lbl_app_, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->src_status_lbl_app_, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes src_status_btn_
    ui->src_status_btn_ = lv_button_create(ui->src_status_cont_);
    lv_obj_set_pos(ui->src_status_btn_, 1183, 14);
    lv_obj_set_size(ui->src_status_btn_, 61, 44);
    ui->src_status_btn__label = lv_label_create(ui->src_status_btn_);
    lv_label_set_text(ui->src_status_btn__label, "" LV_SYMBOL_SETTINGS " ");
    lv_label_set_long_mode(ui->src_status_btn__label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->src_status_btn__label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->src_status_btn_, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->src_status_btn__label, LV_PCT(100));

    //Write style for src_status_btn_, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->src_status_btn_, 21, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->src_status_btn_, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->src_status_btn_, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->src_status_btn_, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->src_status_btn_, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->src_status_btn_, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->src_status_btn_, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->src_status_btn_, &lv_font_montserratMedium_30, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->src_status_btn_, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->src_status_btn_, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes src_status_btn_lang
    ui->src_status_btn_lang = lv_button_create(ui->src_status_cont_);
    lv_obj_set_pos(ui->src_status_btn_lang, 1069, 11);
    lv_obj_set_size(ui->src_status_btn_lang, 100, 50);
    ui->src_status_btn_lang_label = lv_label_create(ui->src_status_btn_lang);
    lv_label_set_text(ui->src_status_btn_lang_label, "VN ");
    lv_label_set_long_mode(ui->src_status_btn_lang_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->src_status_btn_lang_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->src_status_btn_lang, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->src_status_btn_lang_label, LV_PCT(100));

    //Write style for src_status_btn_lang, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->src_status_btn_lang, 25, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->src_status_btn_lang, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->src_status_btn_lang, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->src_status_btn_lang, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->src_status_btn_lang, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->src_status_btn_lang, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->src_status_btn_lang, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->src_status_btn_lang, &lv_font_montserratMedium_30, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->src_status_btn_lang, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->src_status_btn_lang, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes src_status_cont_body
    ui->src_status_cont_body = lv_obj_create(ui->src_status);
    lv_obj_set_pos(ui->src_status_cont_body, 0, 72);
    lv_obj_set_size(ui->src_status_cont_body, 1280, 528);
    lv_obj_set_scrollbar_mode(ui->src_status_cont_body, LV_SCROLLBAR_MODE_OFF);

    //Write style for src_status_cont_body, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->src_status_cont_body, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->src_status_cont_body, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->src_status_cont_body, lv_color_hex(0x2195f6), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->src_status_cont_body, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->src_status_cont_body, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->src_status_cont_body, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->src_status_cont_body, lv_color_hex(0x1c1c1c), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->src_status_cont_body, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->src_status_cont_body, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->src_status_cont_body, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->src_status_cont_body, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->src_status_cont_body, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->src_status_cont_body, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes src_status_cont_card_net
    ui->src_status_cont_card_net = lv_obj_create(ui->src_status_cont_body);
    lv_obj_set_pos(ui->src_status_cont_card_net, 15, 60);
    lv_obj_set_size(ui->src_status_cont_card_net, 565, 216);
    lv_obj_set_scrollbar_mode(ui->src_status_cont_card_net, LV_SCROLLBAR_MODE_OFF);

    //Write style for src_status_cont_card_net, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->src_status_cont_card_net, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->src_status_cont_card_net, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->src_status_cont_card_net, lv_color_hex(0x2195f6), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->src_status_cont_card_net, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->src_status_cont_card_net, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->src_status_cont_card_net, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->src_status_cont_card_net, lv_color_hex(0x1c1c1c), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->src_status_cont_card_net, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->src_status_cont_card_net, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->src_status_cont_card_net, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->src_status_cont_card_net, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->src_status_cont_card_net, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->src_status_cont_card_net, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes src_status_lbl_net_tiltle
    ui->src_status_lbl_net_tiltle = lv_label_create(ui->src_status_cont_card_net);
    lv_obj_set_pos(ui->src_status_lbl_net_tiltle, 232, 6);
    lv_obj_set_size(ui->src_status_lbl_net_tiltle, 139, 32);
    lv_label_set_text(ui->src_status_lbl_net_tiltle, "Network");
    lv_label_set_long_mode(ui->src_status_lbl_net_tiltle, LV_LABEL_LONG_WRAP);

    //Write style for src_status_lbl_net_tiltle, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->src_status_lbl_net_tiltle, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->src_status_lbl_net_tiltle, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->src_status_lbl_net_tiltle, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->src_status_lbl_net_tiltle, &lv_font_montserratMedium_30, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->src_status_lbl_net_tiltle, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->src_status_lbl_net_tiltle, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->src_status_lbl_net_tiltle, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->src_status_lbl_net_tiltle, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->src_status_lbl_net_tiltle, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->src_status_lbl_net_tiltle, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->src_status_lbl_net_tiltle, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->src_status_lbl_net_tiltle, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->src_status_lbl_net_tiltle, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->src_status_lbl_net_tiltle, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes src_status_lbl_ssid
    ui->src_status_lbl_ssid = lv_label_create(ui->src_status_cont_card_net);
    lv_obj_set_pos(ui->src_status_lbl_ssid, 282, 157);
    lv_obj_set_size(ui->src_status_lbl_ssid, 281, 32);
    lv_label_set_text(ui->src_status_lbl_ssid, "SSID: Factory_AP");
    lv_label_set_long_mode(ui->src_status_lbl_ssid, LV_LABEL_LONG_WRAP);

    //Write style for src_status_lbl_ssid, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->src_status_lbl_ssid, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->src_status_lbl_ssid, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->src_status_lbl_ssid, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->src_status_lbl_ssid, &lv_font_montserratMedium_30, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->src_status_lbl_ssid, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->src_status_lbl_ssid, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->src_status_lbl_ssid, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->src_status_lbl_ssid, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->src_status_lbl_ssid, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->src_status_lbl_ssid, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->src_status_lbl_ssid, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->src_status_lbl_ssid, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->src_status_lbl_ssid, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->src_status_lbl_ssid, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes src_status_lbl_ip
    ui->src_status_lbl_ip = lv_label_create(ui->src_status_cont_card_net);
    lv_obj_set_pos(ui->src_status_lbl_ip, 294, 78);
    lv_obj_set_size(ui->src_status_lbl_ip, 224, 32);
    lv_label_set_text(ui->src_status_lbl_ip, "IP: 192.168.1.10");
    lv_label_set_long_mode(ui->src_status_lbl_ip, LV_LABEL_LONG_WRAP);

    //Write style for src_status_lbl_ip, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->src_status_lbl_ip, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->src_status_lbl_ip, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->src_status_lbl_ip, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->src_status_lbl_ip, &lv_font_montserratMedium_30, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->src_status_lbl_ip, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->src_status_lbl_ip, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->src_status_lbl_ip, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->src_status_lbl_ip, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->src_status_lbl_ip, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->src_status_lbl_ip, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->src_status_lbl_ip, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->src_status_lbl_ip, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->src_status_lbl_ip, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->src_status_lbl_ip, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes src_status_lbl_lan
    ui->src_status_lbl_lan = lv_label_create(ui->src_status_cont_card_net);
    lv_obj_set_pos(ui->src_status_lbl_lan, 18, 77);
    lv_obj_set_size(ui->src_status_lbl_lan, 251, 32);
    lv_label_set_text(ui->src_status_lbl_lan, "LAN: Connected");
    lv_label_set_long_mode(ui->src_status_lbl_lan, LV_LABEL_LONG_WRAP);

    //Write style for src_status_lbl_lan, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->src_status_lbl_lan, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->src_status_lbl_lan, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->src_status_lbl_lan, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->src_status_lbl_lan, &lv_font_montserratMedium_30, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->src_status_lbl_lan, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->src_status_lbl_lan, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->src_status_lbl_lan, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->src_status_lbl_lan, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->src_status_lbl_lan, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->src_status_lbl_lan, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->src_status_lbl_lan, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->src_status_lbl_lan, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->src_status_lbl_lan, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->src_status_lbl_lan, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes src_status_lbl_wifi
    ui->src_status_lbl_wifi = lv_label_create(ui->src_status_cont_card_net);
    lv_obj_set_pos(ui->src_status_lbl_wifi, 25, 156);
    lv_obj_set_size(ui->src_status_lbl_wifi, 253, 32);
    lv_label_set_text(ui->src_status_lbl_wifi, "Wifi: Connected");
    lv_label_set_long_mode(ui->src_status_lbl_wifi, LV_LABEL_LONG_WRAP);

    //Write style for src_status_lbl_wifi, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->src_status_lbl_wifi, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->src_status_lbl_wifi, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->src_status_lbl_wifi, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->src_status_lbl_wifi, &lv_font_montserratMedium_30, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->src_status_lbl_wifi, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->src_status_lbl_wifi, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->src_status_lbl_wifi, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->src_status_lbl_wifi, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->src_status_lbl_wifi, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->src_status_lbl_wifi, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->src_status_lbl_wifi, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->src_status_lbl_wifi, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->src_status_lbl_wifi, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->src_status_lbl_wifi, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes src_status_cont_card_mqtt
    ui->src_status_cont_card_mqtt = lv_obj_create(ui->src_status_cont_body);
    lv_obj_set_pos(ui->src_status_cont_card_mqtt, 585, 61);
    lv_obj_set_size(ui->src_status_cont_card_mqtt, 683, 214);
    lv_obj_set_scrollbar_mode(ui->src_status_cont_card_mqtt, LV_SCROLLBAR_MODE_OFF);

    //Write style for src_status_cont_card_mqtt, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->src_status_cont_card_mqtt, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->src_status_cont_card_mqtt, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->src_status_cont_card_mqtt, lv_color_hex(0x2195f6), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->src_status_cont_card_mqtt, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->src_status_cont_card_mqtt, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->src_status_cont_card_mqtt, 225, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->src_status_cont_card_mqtt, lv_color_hex(0x1c1c1c), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->src_status_cont_card_mqtt, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->src_status_cont_card_mqtt, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->src_status_cont_card_mqtt, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->src_status_cont_card_mqtt, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->src_status_cont_card_mqtt, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->src_status_cont_card_mqtt, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes src_status_lbl_pub_topic
    ui->src_status_lbl_pub_topic = lv_label_create(ui->src_status_cont_card_mqtt);
    lv_obj_set_pos(ui->src_status_lbl_pub_topic, -3, 147);
    lv_obj_set_size(ui->src_status_lbl_pub_topic, 367, 62);
    lv_label_set_text(ui->src_status_lbl_pub_topic, "Pub: edge/E-0001/event");
    lv_label_set_long_mode(ui->src_status_lbl_pub_topic, LV_LABEL_LONG_WRAP);

    //Write style for src_status_lbl_pub_topic, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->src_status_lbl_pub_topic, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->src_status_lbl_pub_topic, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->src_status_lbl_pub_topic, lv_color_hex(0xfafafa), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->src_status_lbl_pub_topic, &lv_font_montserratMedium_30, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->src_status_lbl_pub_topic, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->src_status_lbl_pub_topic, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->src_status_lbl_pub_topic, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->src_status_lbl_pub_topic, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->src_status_lbl_pub_topic, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->src_status_lbl_pub_topic, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->src_status_lbl_pub_topic, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->src_status_lbl_pub_topic, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->src_status_lbl_pub_topic, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->src_status_lbl_pub_topic, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes src_status_lbl_mqtt_tiltle
    ui->src_status_lbl_mqtt_tiltle = lv_label_create(ui->src_status_cont_card_mqtt);
    lv_obj_set_pos(ui->src_status_lbl_mqtt_tiltle, 265, 0);
    lv_obj_set_size(ui->src_status_lbl_mqtt_tiltle, 100, 32);
    lv_label_set_text(ui->src_status_lbl_mqtt_tiltle, "MQTT");
    lv_label_set_long_mode(ui->src_status_lbl_mqtt_tiltle, LV_LABEL_LONG_WRAP);

    //Write style for src_status_lbl_mqtt_tiltle, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->src_status_lbl_mqtt_tiltle, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->src_status_lbl_mqtt_tiltle, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->src_status_lbl_mqtt_tiltle, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->src_status_lbl_mqtt_tiltle, &lv_font_montserratMedium_30, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->src_status_lbl_mqtt_tiltle, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->src_status_lbl_mqtt_tiltle, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->src_status_lbl_mqtt_tiltle, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->src_status_lbl_mqtt_tiltle, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->src_status_lbl_mqtt_tiltle, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->src_status_lbl_mqtt_tiltle, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->src_status_lbl_mqtt_tiltle, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->src_status_lbl_mqtt_tiltle, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->src_status_lbl_mqtt_tiltle, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->src_status_lbl_mqtt_tiltle, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes src_status_lbl_broker
    ui->src_status_lbl_broker = lv_label_create(ui->src_status_cont_card_mqtt);
    lv_obj_set_pos(ui->src_status_lbl_broker, 365, 147);
    lv_obj_set_size(ui->src_status_lbl_broker, 319, 32);
    lv_label_set_text(ui->src_status_lbl_broker, "Broker: 10.0.0.5:1882");
    lv_label_set_long_mode(ui->src_status_lbl_broker, LV_LABEL_LONG_WRAP);

    //Write style for src_status_lbl_broker, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->src_status_lbl_broker, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->src_status_lbl_broker, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->src_status_lbl_broker, lv_color_hex(0xfbfbfb), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->src_status_lbl_broker, &lv_font_montserratMedium_30, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->src_status_lbl_broker, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->src_status_lbl_broker, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->src_status_lbl_broker, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->src_status_lbl_broker, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->src_status_lbl_broker, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->src_status_lbl_broker, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->src_status_lbl_broker, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->src_status_lbl_broker, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->src_status_lbl_broker, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->src_status_lbl_broker, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes src_status_lbl_sub_topic
    ui->src_status_lbl_sub_topic = lv_label_create(ui->src_status_cont_card_mqtt);
    lv_obj_set_pos(ui->src_status_lbl_sub_topic, 350, 84);
    lv_obj_set_size(ui->src_status_lbl_sub_topic, 309, 32);
    lv_label_set_text(ui->src_status_lbl_sub_topic, "Edge: E-0001/cmd");
    lv_label_set_long_mode(ui->src_status_lbl_sub_topic, LV_LABEL_LONG_WRAP);

    //Write style for src_status_lbl_sub_topic, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->src_status_lbl_sub_topic, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->src_status_lbl_sub_topic, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->src_status_lbl_sub_topic, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->src_status_lbl_sub_topic, &lv_font_montserratMedium_30, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->src_status_lbl_sub_topic, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->src_status_lbl_sub_topic, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->src_status_lbl_sub_topic, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->src_status_lbl_sub_topic, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->src_status_lbl_sub_topic, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->src_status_lbl_sub_topic, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->src_status_lbl_sub_topic, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->src_status_lbl_sub_topic, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->src_status_lbl_sub_topic, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->src_status_lbl_sub_topic, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes src_status_lbl_mqtt_status
    ui->src_status_lbl_mqtt_status = lv_label_create(ui->src_status_cont_card_mqtt);
    lv_obj_set_pos(ui->src_status_lbl_mqtt_status, 3, 80);
    lv_obj_set_size(ui->src_status_lbl_mqtt_status, 289, 32);
    lv_label_set_text(ui->src_status_lbl_mqtt_status, "Status: Connected");
    lv_label_set_long_mode(ui->src_status_lbl_mqtt_status, LV_LABEL_LONG_WRAP);

    //Write style for src_status_lbl_mqtt_status, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->src_status_lbl_mqtt_status, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->src_status_lbl_mqtt_status, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->src_status_lbl_mqtt_status, lv_color_hex(0xefefef), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->src_status_lbl_mqtt_status, &lv_font_montserratMedium_30, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->src_status_lbl_mqtt_status, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->src_status_lbl_mqtt_status, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->src_status_lbl_mqtt_status, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->src_status_lbl_mqtt_status, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->src_status_lbl_mqtt_status, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->src_status_lbl_mqtt_status, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->src_status_lbl_mqtt_status, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->src_status_lbl_mqtt_status, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->src_status_lbl_mqtt_status, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->src_status_lbl_mqtt_status, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes src_status_cont_card_sysc
    ui->src_status_cont_card_sysc = lv_obj_create(ui->src_status_cont_body);
    lv_obj_set_pos(ui->src_status_cont_card_sysc, 24, 339);
    lv_obj_set_size(ui->src_status_cont_card_sysc, 1232, 185);
    lv_obj_set_scrollbar_mode(ui->src_status_cont_card_sysc, LV_SCROLLBAR_MODE_OFF);

    //Write style for src_status_cont_card_sysc, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->src_status_cont_card_sysc, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->src_status_cont_card_sysc, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->src_status_cont_card_sysc, lv_color_hex(0x2195f6), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->src_status_cont_card_sysc, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->src_status_cont_card_sysc, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->src_status_cont_card_sysc, 171, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->src_status_cont_card_sysc, lv_color_hex(0x1c1c1c), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->src_status_cont_card_sysc, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->src_status_cont_card_sysc, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->src_status_cont_card_sysc, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->src_status_cont_card_sysc, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->src_status_cont_card_sysc, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->src_status_cont_card_sysc, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes src_status_lbl_sync_tiltle
    ui->src_status_lbl_sync_tiltle = lv_label_create(ui->src_status_cont_card_sysc);
    lv_obj_set_pos(ui->src_status_lbl_sync_tiltle, 448, -40);
    lv_obj_set_size(ui->src_status_lbl_sync_tiltle, 236, 32);
    lv_label_set_text(ui->src_status_lbl_sync_tiltle, "Sync/Buffer");
    lv_label_set_long_mode(ui->src_status_lbl_sync_tiltle, LV_LABEL_LONG_WRAP);

    //Write style for src_status_lbl_sync_tiltle, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->src_status_lbl_sync_tiltle, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->src_status_lbl_sync_tiltle, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->src_status_lbl_sync_tiltle, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->src_status_lbl_sync_tiltle, &lv_font_montserratMedium_30, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->src_status_lbl_sync_tiltle, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->src_status_lbl_sync_tiltle, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->src_status_lbl_sync_tiltle, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->src_status_lbl_sync_tiltle, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->src_status_lbl_sync_tiltle, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->src_status_lbl_sync_tiltle, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->src_status_lbl_sync_tiltle, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->src_status_lbl_sync_tiltle, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->src_status_lbl_sync_tiltle, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->src_status_lbl_sync_tiltle, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes src_status_lbl_spending
    ui->src_status_lbl_spending = lv_label_create(ui->src_status_cont_card_sysc);
    lv_obj_set_pos(ui->src_status_lbl_spending, 36, 21);
    lv_obj_set_size(ui->src_status_lbl_spending, 312, 32);
    lv_label_set_text(ui->src_status_lbl_spending, "Pending events: 0");
    lv_label_set_long_mode(ui->src_status_lbl_spending, LV_LABEL_LONG_WRAP);

    //Write style for src_status_lbl_spending, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->src_status_lbl_spending, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->src_status_lbl_spending, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->src_status_lbl_spending, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->src_status_lbl_spending, &lv_font_montserratMedium_30, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->src_status_lbl_spending, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->src_status_lbl_spending, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->src_status_lbl_spending, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->src_status_lbl_spending, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->src_status_lbl_spending, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->src_status_lbl_spending, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->src_status_lbl_spending, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->src_status_lbl_spending, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->src_status_lbl_spending, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->src_status_lbl_spending, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes src_status_lbl_note
    ui->src_status_lbl_note = lv_label_create(ui->src_status_cont_card_sysc);
    lv_obj_set_pos(ui->src_status_lbl_note, 36, 141);
    lv_obj_set_size(ui->src_status_lbl_note, 947, 32);
    lv_label_set_text(ui->src_status_lbl_note, "Note: Office vẫn ghi nhận dữ liệu và tự đồng bộ khi có mạng");
    lv_label_set_long_mode(ui->src_status_lbl_note, LV_LABEL_LONG_WRAP);

    //Write style for src_status_lbl_note, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->src_status_lbl_note, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->src_status_lbl_note, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->src_status_lbl_note, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->src_status_lbl_note, &lv_font_montserratMedium_30, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->src_status_lbl_note, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->src_status_lbl_note, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->src_status_lbl_note, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->src_status_lbl_note, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->src_status_lbl_note, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->src_status_lbl_note, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->src_status_lbl_note, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->src_status_lbl_note, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->src_status_lbl_note, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->src_status_lbl_note, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes src_status_lbl_oldest
    ui->src_status_lbl_oldest = lv_label_create(ui->src_status_cont_card_sysc);
    lv_obj_set_pos(ui->src_status_lbl_oldest, 694, 26);
    lv_obj_set_size(ui->src_status_lbl_oldest, 526, 32);
    lv_label_set_text(ui->src_status_lbl_oldest, "Oldest: 08:21:00    28/02/2026");
    lv_label_set_long_mode(ui->src_status_lbl_oldest, LV_LABEL_LONG_WRAP);

    //Write style for src_status_lbl_oldest, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->src_status_lbl_oldest, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->src_status_lbl_oldest, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->src_status_lbl_oldest, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->src_status_lbl_oldest, &lv_font_montserratMedium_30, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->src_status_lbl_oldest, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->src_status_lbl_oldest, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->src_status_lbl_oldest, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->src_status_lbl_oldest, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->src_status_lbl_oldest, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->src_status_lbl_oldest, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->src_status_lbl_oldest, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->src_status_lbl_oldest, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->src_status_lbl_oldest, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->src_status_lbl_oldest, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes src_status_lbl_last_sync
    ui->src_status_lbl_last_sync = lv_label_create(ui->src_status_cont_card_sysc);
    lv_obj_set_pos(ui->src_status_lbl_last_sync, 36, 81);
    lv_obj_set_size(ui->src_status_lbl_last_sync, 509, 32);
    lv_label_set_text(ui->src_status_lbl_last_sync, "Last sync: 08:35:00    02/03/2026");
    lv_label_set_long_mode(ui->src_status_lbl_last_sync, LV_LABEL_LONG_WRAP);

    //Write style for src_status_lbl_last_sync, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->src_status_lbl_last_sync, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->src_status_lbl_last_sync, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->src_status_lbl_last_sync, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->src_status_lbl_last_sync, &lv_font_montserratMedium_30, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->src_status_lbl_last_sync, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->src_status_lbl_last_sync, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->src_status_lbl_last_sync, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->src_status_lbl_last_sync, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->src_status_lbl_last_sync, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->src_status_lbl_last_sync, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->src_status_lbl_last_sync, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->src_status_lbl_last_sync, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->src_status_lbl_last_sync, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->src_status_lbl_last_sync, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes src_status_lbl_retry_policy
    ui->src_status_lbl_retry_policy = lv_label_create(ui->src_status_cont_card_sysc);
    lv_obj_set_pos(ui->src_status_lbl_retry_policy, 694, 81);
    lv_obj_set_size(ui->src_status_lbl_retry_policy, 291, 32);
    lv_label_set_text(ui->src_status_lbl_retry_policy, "Retry: every 5s");
    lv_label_set_long_mode(ui->src_status_lbl_retry_policy, LV_LABEL_LONG_WRAP);

    //Write style for src_status_lbl_retry_policy, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->src_status_lbl_retry_policy, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->src_status_lbl_retry_policy, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->src_status_lbl_retry_policy, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->src_status_lbl_retry_policy, &lv_font_montserratMedium_30, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->src_status_lbl_retry_policy, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->src_status_lbl_retry_policy, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->src_status_lbl_retry_policy, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->src_status_lbl_retry_policy, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->src_status_lbl_retry_policy, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->src_status_lbl_retry_policy, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->src_status_lbl_retry_policy, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->src_status_lbl_retry_policy, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->src_status_lbl_retry_policy, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->src_status_lbl_retry_policy, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes src_status_cont_bottom
    ui->src_status_cont_bottom = lv_obj_create(ui->src_status);
    lv_obj_set_pos(ui->src_status_cont_bottom, 0, 601);
    lv_obj_set_size(ui->src_status_cont_bottom, 1280, 119);
    lv_obj_set_scrollbar_mode(ui->src_status_cont_bottom, LV_SCROLLBAR_MODE_OFF);

    //Write style for src_status_cont_bottom, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->src_status_cont_bottom, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->src_status_cont_bottom, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->src_status_cont_bottom, lv_color_hex(0x2195f6), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->src_status_cont_bottom, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->src_status_cont_bottom, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->src_status_cont_bottom, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->src_status_cont_bottom, lv_color_hex(0x1c1c1c), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->src_status_cont_bottom, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->src_status_cont_bottom, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->src_status_cont_bottom, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->src_status_cont_bottom, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->src_status_cont_bottom, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->src_status_cont_bottom, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes src_status_btn_settings
    ui->src_status_btn_settings = lv_button_create(ui->src_status_cont_bottom);
    lv_obj_set_pos(ui->src_status_btn_settings, 775, 24);
    lv_obj_set_size(ui->src_status_btn_settings, 260, 72);
    ui->src_status_btn_settings_label = lv_label_create(ui->src_status_btn_settings);
    lv_label_set_text(ui->src_status_btn_settings_label, "Settings");
    lv_label_set_long_mode(ui->src_status_btn_settings_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->src_status_btn_settings_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->src_status_btn_settings, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->src_status_btn_settings_label, LV_PCT(100));

    //Write style for src_status_btn_settings, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->src_status_btn_settings, 192, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->src_status_btn_settings, lv_color_hex(0x5b5b5c), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->src_status_btn_settings, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->src_status_btn_settings, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->src_status_btn_settings, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->src_status_btn_settings, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->src_status_btn_settings, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->src_status_btn_settings, &lv_font_montserratMedium_30, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->src_status_btn_settings, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->src_status_btn_settings, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes src_status_btn_continue
    ui->src_status_btn_continue = lv_button_create(ui->src_status_cont_bottom);
    lv_obj_set_pos(ui->src_status_btn_continue, 214, 24);
    lv_obj_set_size(ui->src_status_btn_continue, 260, 72);
    ui->src_status_btn_continue_label = lv_label_create(ui->src_status_btn_continue);
    lv_label_set_text(ui->src_status_btn_continue_label, "Continue");
    lv_label_set_long_mode(ui->src_status_btn_continue_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->src_status_btn_continue_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->src_status_btn_continue, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->src_status_btn_continue_label, LV_PCT(100));

    //Write style for src_status_btn_continue, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->src_status_btn_continue, 201, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->src_status_btn_continue, lv_color_hex(0x068b19), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->src_status_btn_continue, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->src_status_btn_continue, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->src_status_btn_continue, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->src_status_btn_continue, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->src_status_btn_continue, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->src_status_btn_continue, &lv_font_montserratMedium_30, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->src_status_btn_continue, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->src_status_btn_continue, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //The custom code of src_status.


    //Update current screen layout.
    lv_obj_update_layout(ui->src_status);

}
