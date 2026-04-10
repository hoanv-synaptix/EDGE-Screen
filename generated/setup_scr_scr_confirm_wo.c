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



void setup_scr_scr_confirm_wo(lv_ui *ui)
{
    //Write codes scr_confirm_wo
    ui->scr_confirm_wo = lv_obj_create(NULL);
    lv_obj_set_size(ui->scr_confirm_wo, 1280, 720);
    lv_obj_set_scrollbar_mode(ui->scr_confirm_wo, LV_SCROLLBAR_MODE_OFF);

    //Write style for scr_confirm_wo, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->scr_confirm_wo, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scr_confirm_wo, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scr_confirm_wo, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scr_confirm_wo_cont_confirm_wo
    ui->scr_confirm_wo_cont_confirm_wo = lv_obj_create(ui->scr_confirm_wo);
    lv_obj_set_pos(ui->scr_confirm_wo_cont_confirm_wo, 237, 149);
    lv_obj_set_size(ui->scr_confirm_wo_cont_confirm_wo, 800, 400);
    lv_obj_set_scrollbar_mode(ui->scr_confirm_wo_cont_confirm_wo, LV_SCROLLBAR_MODE_OFF);

    //Write style for scr_confirm_wo_cont_confirm_wo, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scr_confirm_wo_cont_confirm_wo, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_confirm_wo_cont_confirm_wo, 20, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scr_confirm_wo_cont_confirm_wo, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scr_confirm_wo_cont_confirm_wo, lv_color_hex(0x2b2f3a), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scr_confirm_wo_cont_confirm_wo, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scr_confirm_wo_cont_confirm_wo, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scr_confirm_wo_cont_confirm_wo, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scr_confirm_wo_cont_confirm_wo, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scr_confirm_wo_cont_confirm_wo, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_confirm_wo_cont_confirm_wo, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_color(ui->scr_confirm_wo_cont_confirm_wo, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_opa(ui->scr_confirm_wo_cont_confirm_wo, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_spread(ui->scr_confirm_wo_cont_confirm_wo, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_offset_x(ui->scr_confirm_wo_cont_confirm_wo, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_offset_y(ui->scr_confirm_wo_cont_confirm_wo, 2, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scr_confirm_wo_lbl_confirm_wo
    ui->scr_confirm_wo_lbl_confirm_wo = lv_label_create(ui->scr_confirm_wo_cont_confirm_wo);
    lv_obj_set_pos(ui->scr_confirm_wo_lbl_confirm_wo, 0, 10);
    lv_obj_set_size(ui->scr_confirm_wo_lbl_confirm_wo, 800, 60);
    lv_label_set_text(ui->scr_confirm_wo_lbl_confirm_wo, "CONFIRM WORK ORDER");
    lv_label_set_long_mode(ui->scr_confirm_wo_lbl_confirm_wo, LV_LABEL_LONG_WRAP);

    //Write style for scr_confirm_wo_lbl_confirm_wo, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scr_confirm_wo_lbl_confirm_wo, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_confirm_wo_lbl_confirm_wo, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scr_confirm_wo_lbl_confirm_wo, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scr_confirm_wo_lbl_confirm_wo, &lv_font_Acme_Regular_50, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scr_confirm_wo_lbl_confirm_wo, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->scr_confirm_wo_lbl_confirm_wo, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->scr_confirm_wo_lbl_confirm_wo, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scr_confirm_wo_lbl_confirm_wo, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scr_confirm_wo_lbl_confirm_wo, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scr_confirm_wo_lbl_confirm_wo, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scr_confirm_wo_lbl_confirm_wo, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scr_confirm_wo_lbl_confirm_wo, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scr_confirm_wo_lbl_confirm_wo, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_confirm_wo_lbl_confirm_wo, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scr_confirm_wo_line_8
    ui->scr_confirm_wo_line_8 = lv_line_create(ui->scr_confirm_wo_cont_confirm_wo);
    lv_obj_set_pos(ui->scr_confirm_wo_line_8, 50, 80);
    lv_obj_set_size(ui->scr_confirm_wo_line_8, 700, 2);
    static lv_point_precise_t scr_confirm_wo_line_8[] = {{0, 0},{700, 0}};
    lv_line_set_points(ui->scr_confirm_wo_line_8, scr_confirm_wo_line_8, 2);

    //Write style for scr_confirm_wo_line_8, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_line_width(ui->scr_confirm_wo_line_8, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_color(ui->scr_confirm_wo_line_8, lv_color_hex(0x757575), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_opa(ui->scr_confirm_wo_line_8, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_rounded(ui->scr_confirm_wo_line_8, true, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scr_confirm_wo_line_7
    ui->scr_confirm_wo_line_7 = lv_line_create(ui->scr_confirm_wo_cont_confirm_wo);
    lv_obj_set_pos(ui->scr_confirm_wo_line_7, 50, 299);
    lv_obj_set_size(ui->scr_confirm_wo_line_7, 700, 1);
    static lv_point_precise_t scr_confirm_wo_line_7[] = {{0, 0},{700, 0}};
    lv_line_set_points(ui->scr_confirm_wo_line_7, scr_confirm_wo_line_7, 2);

    //Write style for scr_confirm_wo_line_7, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_line_width(ui->scr_confirm_wo_line_7, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_color(ui->scr_confirm_wo_line_7, lv_color_hex(0x757575), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_opa(ui->scr_confirm_wo_line_7, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_rounded(ui->scr_confirm_wo_line_7, true, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scr_confirm_wo_btn_start
    ui->scr_confirm_wo_btn_start = lv_button_create(ui->scr_confirm_wo_cont_confirm_wo);
    lv_obj_set_pos(ui->scr_confirm_wo_btn_start, 420, 321);
    lv_obj_set_size(ui->scr_confirm_wo_btn_start, 300, 55);
    ui->scr_confirm_wo_btn_start_label = lv_label_create(ui->scr_confirm_wo_btn_start);
    lv_label_set_text(ui->scr_confirm_wo_btn_start_label, "START");
    lv_label_set_long_mode(ui->scr_confirm_wo_btn_start_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->scr_confirm_wo_btn_start_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->scr_confirm_wo_btn_start, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->scr_confirm_wo_btn_start_label, LV_PCT(100));

    //Write style for scr_confirm_wo_btn_start, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->scr_confirm_wo_btn_start, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scr_confirm_wo_btn_start, lv_color_hex(0x1c4567), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scr_confirm_wo_btn_start, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->scr_confirm_wo_btn_start, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_confirm_wo_btn_start, 10, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_confirm_wo_btn_start, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scr_confirm_wo_btn_start, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scr_confirm_wo_btn_start, &lv_font_Acme_Regular_30, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scr_confirm_wo_btn_start, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scr_confirm_wo_btn_start, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scr_confirm_wo_btn_setup
    ui->scr_confirm_wo_btn_setup = lv_button_create(ui->scr_confirm_wo_cont_confirm_wo);
    lv_obj_set_pos(ui->scr_confirm_wo_btn_setup, 82, 321);
    lv_obj_set_size(ui->scr_confirm_wo_btn_setup, 300, 55);
    ui->scr_confirm_wo_btn_setup_label = lv_label_create(ui->scr_confirm_wo_btn_setup);
    lv_label_set_text(ui->scr_confirm_wo_btn_setup_label, "SETUP");
    lv_label_set_long_mode(ui->scr_confirm_wo_btn_setup_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->scr_confirm_wo_btn_setup_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->scr_confirm_wo_btn_setup, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->scr_confirm_wo_btn_setup_label, LV_PCT(100));

    //Write style for scr_confirm_wo_btn_setup, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->scr_confirm_wo_btn_setup, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scr_confirm_wo_btn_setup, lv_color_hex(0x7E22CE), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scr_confirm_wo_btn_setup, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->scr_confirm_wo_btn_setup, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_confirm_wo_btn_setup, 10, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_confirm_wo_btn_setup, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scr_confirm_wo_btn_setup, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scr_confirm_wo_btn_setup, &lv_font_Acme_Regular_30, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scr_confirm_wo_btn_setup, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scr_confirm_wo_btn_setup, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scr_confirm_wo_lbl_status
    ui->scr_confirm_wo_lbl_status = lv_label_create(ui->scr_confirm_wo_cont_confirm_wo);
    lv_obj_set_pos(ui->scr_confirm_wo_lbl_status, 210, 258);
    lv_obj_set_size(ui->scr_confirm_wo_lbl_status, 380, 32);
    lv_label_set_text(ui->scr_confirm_wo_lbl_status, "Confirm this work order?");
    lv_label_set_long_mode(ui->scr_confirm_wo_lbl_status, LV_LABEL_LONG_WRAP);

    //Write style for scr_confirm_wo_lbl_status, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scr_confirm_wo_lbl_status, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_confirm_wo_lbl_status, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scr_confirm_wo_lbl_status, lv_color_hex(0xABABAB), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scr_confirm_wo_lbl_status, &lv_font_arial_25, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scr_confirm_wo_lbl_status, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->scr_confirm_wo_lbl_status, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->scr_confirm_wo_lbl_status, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scr_confirm_wo_lbl_status, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scr_confirm_wo_lbl_status, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scr_confirm_wo_lbl_status, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scr_confirm_wo_lbl_status, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scr_confirm_wo_lbl_status, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scr_confirm_wo_lbl_status, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_confirm_wo_lbl_status, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scr_confirm_wo_cont_wo_detail
    ui->scr_confirm_wo_cont_wo_detail = lv_obj_create(ui->scr_confirm_wo_cont_confirm_wo);
    lv_obj_set_pos(ui->scr_confirm_wo_cont_wo_detail, 113, 95);
    lv_obj_set_size(ui->scr_confirm_wo_cont_wo_detail, 573, 146);
    lv_obj_set_scrollbar_mode(ui->scr_confirm_wo_cont_wo_detail, LV_SCROLLBAR_MODE_OFF);

    //Write style for scr_confirm_wo_cont_wo_detail, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scr_confirm_wo_cont_wo_detail, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_confirm_wo_cont_wo_detail, 20, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scr_confirm_wo_cont_wo_detail, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scr_confirm_wo_cont_wo_detail, lv_color_hex(0x8a70aa), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scr_confirm_wo_cont_wo_detail, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scr_confirm_wo_cont_wo_detail, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scr_confirm_wo_cont_wo_detail, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scr_confirm_wo_cont_wo_detail, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scr_confirm_wo_cont_wo_detail, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_confirm_wo_cont_wo_detail, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scr_confirm_wo_lbl_wo
    ui->scr_confirm_wo_lbl_wo = lv_label_create(ui->scr_confirm_wo_cont_wo_detail);
    lv_obj_set_pos(ui->scr_confirm_wo_lbl_wo, 85, 27);
    lv_obj_set_size(ui->scr_confirm_wo_lbl_wo, 83, 32);
    lv_label_set_text(ui->scr_confirm_wo_lbl_wo, "WO:");
    lv_label_set_long_mode(ui->scr_confirm_wo_lbl_wo, LV_LABEL_LONG_WRAP);

    //Write style for scr_confirm_wo_lbl_wo, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scr_confirm_wo_lbl_wo, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_confirm_wo_lbl_wo, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scr_confirm_wo_lbl_wo, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scr_confirm_wo_lbl_wo, &lv_font_Acme_Regular_30, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scr_confirm_wo_lbl_wo, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->scr_confirm_wo_lbl_wo, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->scr_confirm_wo_lbl_wo, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scr_confirm_wo_lbl_wo, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scr_confirm_wo_lbl_wo, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scr_confirm_wo_lbl_wo, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scr_confirm_wo_lbl_wo, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scr_confirm_wo_lbl_wo, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scr_confirm_wo_lbl_wo, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_confirm_wo_lbl_wo, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scr_confirm_wo_lbl_wo_value
    ui->scr_confirm_wo_lbl_wo_value = lv_label_create(ui->scr_confirm_wo_cont_wo_detail);
    lv_obj_set_pos(ui->scr_confirm_wo_lbl_wo_value, 276, 27);
    lv_obj_set_size(ui->scr_confirm_wo_lbl_wo_value, 298, 32);
    lv_label_set_text(ui->scr_confirm_wo_lbl_wo_value, "WO-001");
    lv_label_set_long_mode(ui->scr_confirm_wo_lbl_wo_value, LV_LABEL_LONG_WRAP);

    //Write style for scr_confirm_wo_lbl_wo_value, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scr_confirm_wo_lbl_wo_value, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_confirm_wo_lbl_wo_value, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scr_confirm_wo_lbl_wo_value, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scr_confirm_wo_lbl_wo_value, &lv_font_Acme_Regular_30, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scr_confirm_wo_lbl_wo_value, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->scr_confirm_wo_lbl_wo_value, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->scr_confirm_wo_lbl_wo_value, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scr_confirm_wo_lbl_wo_value, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scr_confirm_wo_lbl_wo_value, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scr_confirm_wo_lbl_wo_value, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scr_confirm_wo_lbl_wo_value, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scr_confirm_wo_lbl_wo_value, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scr_confirm_wo_lbl_wo_value, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_confirm_wo_lbl_wo_value, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scr_confirm_wo_lbl_product_name
    ui->scr_confirm_wo_lbl_product_name = lv_label_create(ui->scr_confirm_wo_cont_wo_detail);
    lv_obj_set_pos(ui->scr_confirm_wo_lbl_product_name, 85, 89);
    lv_obj_set_size(ui->scr_confirm_wo_lbl_product_name, 177, 32);
    lv_label_set_text(ui->scr_confirm_wo_lbl_product_name, "PRODUCT:");
    lv_label_set_long_mode(ui->scr_confirm_wo_lbl_product_name, LV_LABEL_LONG_WRAP);

    //Write style for scr_confirm_wo_lbl_product_name, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scr_confirm_wo_lbl_product_name, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_confirm_wo_lbl_product_name, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scr_confirm_wo_lbl_product_name, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scr_confirm_wo_lbl_product_name, &lv_font_Acme_Regular_30, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scr_confirm_wo_lbl_product_name, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->scr_confirm_wo_lbl_product_name, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->scr_confirm_wo_lbl_product_name, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scr_confirm_wo_lbl_product_name, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scr_confirm_wo_lbl_product_name, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scr_confirm_wo_lbl_product_name, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scr_confirm_wo_lbl_product_name, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scr_confirm_wo_lbl_product_name, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scr_confirm_wo_lbl_product_name, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_confirm_wo_lbl_product_name, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scr_confirm_wo_lbl_product_name_value
    ui->scr_confirm_wo_lbl_product_name_value = lv_label_create(ui->scr_confirm_wo_cont_wo_detail);
    lv_obj_set_pos(ui->scr_confirm_wo_lbl_product_name_value, 276, 89);
    lv_obj_set_size(ui->scr_confirm_wo_lbl_product_name_value, 302, 32);
    lv_label_set_text(ui->scr_confirm_wo_lbl_product_name_value, "PRODUCT A");
    lv_label_set_long_mode(ui->scr_confirm_wo_lbl_product_name_value, LV_LABEL_LONG_WRAP);

    //Write style for scr_confirm_wo_lbl_product_name_value, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scr_confirm_wo_lbl_product_name_value, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_confirm_wo_lbl_product_name_value, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scr_confirm_wo_lbl_product_name_value, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scr_confirm_wo_lbl_product_name_value, &lv_font_Acme_Regular_30, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scr_confirm_wo_lbl_product_name_value, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->scr_confirm_wo_lbl_product_name_value, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->scr_confirm_wo_lbl_product_name_value, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scr_confirm_wo_lbl_product_name_value, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scr_confirm_wo_lbl_product_name_value, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scr_confirm_wo_lbl_product_name_value, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scr_confirm_wo_lbl_product_name_value, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scr_confirm_wo_lbl_product_name_value, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scr_confirm_wo_lbl_product_name_value, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_confirm_wo_lbl_product_name_value, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //The custom code of scr_confirm_wo.


    //Update current screen layout.
    lv_obj_update_layout(ui->scr_confirm_wo);

    //Init events for screen.
    events_init_scr_confirm_wo(ui);
}
