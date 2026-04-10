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



void setup_scr_scr_complete_wo(lv_ui *ui)
{
    //Write codes scr_complete_wo
    ui->scr_complete_wo = lv_obj_create(NULL);
    lv_obj_set_size(ui->scr_complete_wo, 1280, 720);
    lv_obj_set_scrollbar_mode(ui->scr_complete_wo, LV_SCROLLBAR_MODE_OFF);

    //Write style for scr_complete_wo, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->scr_complete_wo, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scr_complete_wo, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scr_complete_wo, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scr_complete_wo_cont_complete_wo
    ui->scr_complete_wo_cont_complete_wo = lv_obj_create(ui->scr_complete_wo);
    lv_obj_set_pos(ui->scr_complete_wo_cont_complete_wo, 237, 149);
    lv_obj_set_size(ui->scr_complete_wo_cont_complete_wo, 800, 400);
    lv_obj_set_scrollbar_mode(ui->scr_complete_wo_cont_complete_wo, LV_SCROLLBAR_MODE_OFF);

    //Write style for scr_complete_wo_cont_complete_wo, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scr_complete_wo_cont_complete_wo, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_complete_wo_cont_complete_wo, 20, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scr_complete_wo_cont_complete_wo, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scr_complete_wo_cont_complete_wo, lv_color_hex(0x2b2f3a), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scr_complete_wo_cont_complete_wo, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scr_complete_wo_cont_complete_wo, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scr_complete_wo_cont_complete_wo, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scr_complete_wo_cont_complete_wo, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scr_complete_wo_cont_complete_wo, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_complete_wo_cont_complete_wo, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_color(ui->scr_complete_wo_cont_complete_wo, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_opa(ui->scr_complete_wo_cont_complete_wo, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_spread(ui->scr_complete_wo_cont_complete_wo, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_offset_x(ui->scr_complete_wo_cont_complete_wo, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_offset_y(ui->scr_complete_wo_cont_complete_wo, 2, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scr_complete_wo_lbl_complete_wo
    ui->scr_complete_wo_lbl_complete_wo = lv_label_create(ui->scr_complete_wo_cont_complete_wo);
    lv_obj_set_pos(ui->scr_complete_wo_lbl_complete_wo, 0, 10);
    lv_obj_set_size(ui->scr_complete_wo_lbl_complete_wo, 800, 60);
    lv_label_set_text(ui->scr_complete_wo_lbl_complete_wo, "COMPLETE WORK ORDER");
    lv_label_set_long_mode(ui->scr_complete_wo_lbl_complete_wo, LV_LABEL_LONG_WRAP);

    //Write style for scr_complete_wo_lbl_complete_wo, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scr_complete_wo_lbl_complete_wo, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_complete_wo_lbl_complete_wo, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scr_complete_wo_lbl_complete_wo, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scr_complete_wo_lbl_complete_wo, &lv_font_Acme_Regular_50, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scr_complete_wo_lbl_complete_wo, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->scr_complete_wo_lbl_complete_wo, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->scr_complete_wo_lbl_complete_wo, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scr_complete_wo_lbl_complete_wo, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scr_complete_wo_lbl_complete_wo, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scr_complete_wo_lbl_complete_wo, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scr_complete_wo_lbl_complete_wo, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scr_complete_wo_lbl_complete_wo, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scr_complete_wo_lbl_complete_wo, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_complete_wo_lbl_complete_wo, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scr_complete_wo_line_6
    ui->scr_complete_wo_line_6 = lv_line_create(ui->scr_complete_wo_cont_complete_wo);
    lv_obj_set_pos(ui->scr_complete_wo_line_6, 50, 80);
    lv_obj_set_size(ui->scr_complete_wo_line_6, 700, 2);
    static lv_point_precise_t scr_complete_wo_line_6[] = {{0, 0},{700, 0}};
    lv_line_set_points(ui->scr_complete_wo_line_6, scr_complete_wo_line_6, 2);

    //Write style for scr_complete_wo_line_6, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_line_width(ui->scr_complete_wo_line_6, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_color(ui->scr_complete_wo_line_6, lv_color_hex(0x757575), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_opa(ui->scr_complete_wo_line_6, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_rounded(ui->scr_complete_wo_line_6, true, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scr_complete_wo_line_5
    ui->scr_complete_wo_line_5 = lv_line_create(ui->scr_complete_wo_cont_complete_wo);
    lv_obj_set_pos(ui->scr_complete_wo_line_5, 50, 299);
    lv_obj_set_size(ui->scr_complete_wo_line_5, 700, 1);
    static lv_point_precise_t scr_complete_wo_line_5[] = {{0, 0},{700, 0}};
    lv_line_set_points(ui->scr_complete_wo_line_5, scr_complete_wo_line_5, 2);

    //Write style for scr_complete_wo_line_5, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_line_width(ui->scr_complete_wo_line_5, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_color(ui->scr_complete_wo_line_5, lv_color_hex(0x757575), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_opa(ui->scr_complete_wo_line_5, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_rounded(ui->scr_complete_wo_line_5, true, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scr_complete_wo_btn_confirm
    ui->scr_complete_wo_btn_confirm = lv_button_create(ui->scr_complete_wo_cont_complete_wo);
    lv_obj_set_pos(ui->scr_complete_wo_btn_confirm, 420, 321);
    lv_obj_set_size(ui->scr_complete_wo_btn_confirm, 300, 55);
    ui->scr_complete_wo_btn_confirm_label = lv_label_create(ui->scr_complete_wo_btn_confirm);
    lv_label_set_text(ui->scr_complete_wo_btn_confirm_label, "CONFIRM");
    lv_label_set_long_mode(ui->scr_complete_wo_btn_confirm_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->scr_complete_wo_btn_confirm_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->scr_complete_wo_btn_confirm, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->scr_complete_wo_btn_confirm_label, LV_PCT(100));

    //Write style for scr_complete_wo_btn_confirm, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->scr_complete_wo_btn_confirm, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scr_complete_wo_btn_confirm, lv_color_hex(0x1c4567), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scr_complete_wo_btn_confirm, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->scr_complete_wo_btn_confirm, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_complete_wo_btn_confirm, 10, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_complete_wo_btn_confirm, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scr_complete_wo_btn_confirm, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scr_complete_wo_btn_confirm, &lv_font_Acme_Regular_30, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scr_complete_wo_btn_confirm, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scr_complete_wo_btn_confirm, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scr_complete_wo_btn_cancel
    ui->scr_complete_wo_btn_cancel = lv_button_create(ui->scr_complete_wo_cont_complete_wo);
    lv_obj_set_pos(ui->scr_complete_wo_btn_cancel, 80, 321);
    lv_obj_set_size(ui->scr_complete_wo_btn_cancel, 300, 55);
    ui->scr_complete_wo_btn_cancel_label = lv_label_create(ui->scr_complete_wo_btn_cancel);
    lv_label_set_text(ui->scr_complete_wo_btn_cancel_label, "CANCEL");
    lv_label_set_long_mode(ui->scr_complete_wo_btn_cancel_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->scr_complete_wo_btn_cancel_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->scr_complete_wo_btn_cancel, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->scr_complete_wo_btn_cancel_label, LV_PCT(100));

    //Write style for scr_complete_wo_btn_cancel, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->scr_complete_wo_btn_cancel, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scr_complete_wo_btn_cancel, lv_color_hex(0x717171), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scr_complete_wo_btn_cancel, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->scr_complete_wo_btn_cancel, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_complete_wo_btn_cancel, 10, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_complete_wo_btn_cancel, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scr_complete_wo_btn_cancel, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scr_complete_wo_btn_cancel, &lv_font_Acme_Regular_30, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scr_complete_wo_btn_cancel, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scr_complete_wo_btn_cancel, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scr_complete_wo_lbl_status
    ui->scr_complete_wo_lbl_status = lv_label_create(ui->scr_complete_wo_cont_complete_wo);
    lv_obj_set_pos(ui->scr_complete_wo_lbl_status, 210, 258);
    lv_obj_set_size(ui->scr_complete_wo_lbl_status, 380, 32);
    lv_label_set_text(ui->scr_complete_wo_lbl_status, "Complete this work order?");
    lv_label_set_long_mode(ui->scr_complete_wo_lbl_status, LV_LABEL_LONG_WRAP);

    //Write style for scr_complete_wo_lbl_status, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scr_complete_wo_lbl_status, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_complete_wo_lbl_status, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scr_complete_wo_lbl_status, lv_color_hex(0xABABAB), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scr_complete_wo_lbl_status, &lv_font_arial_25, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scr_complete_wo_lbl_status, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->scr_complete_wo_lbl_status, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->scr_complete_wo_lbl_status, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scr_complete_wo_lbl_status, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scr_complete_wo_lbl_status, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scr_complete_wo_lbl_status, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scr_complete_wo_lbl_status, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scr_complete_wo_lbl_status, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scr_complete_wo_lbl_status, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_complete_wo_lbl_status, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scr_complete_wo_cont_wo_detail
    ui->scr_complete_wo_cont_wo_detail = lv_obj_create(ui->scr_complete_wo_cont_complete_wo);
    lv_obj_set_pos(ui->scr_complete_wo_cont_wo_detail, 113, 95);
    lv_obj_set_size(ui->scr_complete_wo_cont_wo_detail, 573, 146);
    lv_obj_set_scrollbar_mode(ui->scr_complete_wo_cont_wo_detail, LV_SCROLLBAR_MODE_OFF);

    //Write style for scr_complete_wo_cont_wo_detail, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scr_complete_wo_cont_wo_detail, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_complete_wo_cont_wo_detail, 20, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scr_complete_wo_cont_wo_detail, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scr_complete_wo_cont_wo_detail, lv_color_hex(0x8a70aa), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scr_complete_wo_cont_wo_detail, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scr_complete_wo_cont_wo_detail, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scr_complete_wo_cont_wo_detail, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scr_complete_wo_cont_wo_detail, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scr_complete_wo_cont_wo_detail, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_complete_wo_cont_wo_detail, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scr_complete_wo_lbl_wo
    ui->scr_complete_wo_lbl_wo = lv_label_create(ui->scr_complete_wo_cont_wo_detail);
    lv_obj_set_pos(ui->scr_complete_wo_lbl_wo, 85, 12);
    lv_obj_set_size(ui->scr_complete_wo_lbl_wo, 83, 32);
    lv_label_set_text(ui->scr_complete_wo_lbl_wo, "WO:");
    lv_label_set_long_mode(ui->scr_complete_wo_lbl_wo, LV_LABEL_LONG_WRAP);

    //Write style for scr_complete_wo_lbl_wo, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scr_complete_wo_lbl_wo, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_complete_wo_lbl_wo, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scr_complete_wo_lbl_wo, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scr_complete_wo_lbl_wo, &lv_font_Acme_Regular_30, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scr_complete_wo_lbl_wo, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->scr_complete_wo_lbl_wo, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->scr_complete_wo_lbl_wo, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scr_complete_wo_lbl_wo, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scr_complete_wo_lbl_wo, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scr_complete_wo_lbl_wo, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scr_complete_wo_lbl_wo, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scr_complete_wo_lbl_wo, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scr_complete_wo_lbl_wo, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_complete_wo_lbl_wo, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scr_complete_wo_lbl_wo_value
    ui->scr_complete_wo_lbl_wo_value = lv_label_create(ui->scr_complete_wo_cont_wo_detail);
    lv_obj_set_pos(ui->scr_complete_wo_lbl_wo_value, 275, 12);
    lv_obj_set_size(ui->scr_complete_wo_lbl_wo_value, 298, 32);
    lv_label_set_text(ui->scr_complete_wo_lbl_wo_value, "WO-001");
    lv_label_set_long_mode(ui->scr_complete_wo_lbl_wo_value, LV_LABEL_LONG_WRAP);

    //Write style for scr_complete_wo_lbl_wo_value, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scr_complete_wo_lbl_wo_value, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_complete_wo_lbl_wo_value, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scr_complete_wo_lbl_wo_value, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scr_complete_wo_lbl_wo_value, &lv_font_Acme_Regular_30, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scr_complete_wo_lbl_wo_value, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->scr_complete_wo_lbl_wo_value, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->scr_complete_wo_lbl_wo_value, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scr_complete_wo_lbl_wo_value, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scr_complete_wo_lbl_wo_value, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scr_complete_wo_lbl_wo_value, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scr_complete_wo_lbl_wo_value, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scr_complete_wo_lbl_wo_value, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scr_complete_wo_lbl_wo_value, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_complete_wo_lbl_wo_value, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scr_complete_wo_lbl_product_name
    ui->scr_complete_wo_lbl_product_name = lv_label_create(ui->scr_complete_wo_cont_wo_detail);
    lv_obj_set_pos(ui->scr_complete_wo_lbl_product_name, 85, 102);
    lv_obj_set_size(ui->scr_complete_wo_lbl_product_name, 177, 32);
    lv_label_set_text(ui->scr_complete_wo_lbl_product_name, "ACTUAL:");
    lv_label_set_long_mode(ui->scr_complete_wo_lbl_product_name, LV_LABEL_LONG_WRAP);

    //Write style for scr_complete_wo_lbl_product_name, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scr_complete_wo_lbl_product_name, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_complete_wo_lbl_product_name, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scr_complete_wo_lbl_product_name, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scr_complete_wo_lbl_product_name, &lv_font_Acme_Regular_30, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scr_complete_wo_lbl_product_name, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->scr_complete_wo_lbl_product_name, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->scr_complete_wo_lbl_product_name, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scr_complete_wo_lbl_product_name, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scr_complete_wo_lbl_product_name, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scr_complete_wo_lbl_product_name, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scr_complete_wo_lbl_product_name, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scr_complete_wo_lbl_product_name, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scr_complete_wo_lbl_product_name, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_complete_wo_lbl_product_name, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scr_complete_wo_lbl_product_name_value
    ui->scr_complete_wo_lbl_product_name_value = lv_label_create(ui->scr_complete_wo_cont_wo_detail);
    lv_obj_set_pos(ui->scr_complete_wo_lbl_product_name_value, 275, 102);
    lv_obj_set_size(ui->scr_complete_wo_lbl_product_name_value, 302, 32);
    lv_label_set_text(ui->scr_complete_wo_lbl_product_name_value, "1000");
    lv_label_set_long_mode(ui->scr_complete_wo_lbl_product_name_value, LV_LABEL_LONG_WRAP);

    //Write style for scr_complete_wo_lbl_product_name_value, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scr_complete_wo_lbl_product_name_value, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_complete_wo_lbl_product_name_value, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scr_complete_wo_lbl_product_name_value, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scr_complete_wo_lbl_product_name_value, &lv_font_Acme_Regular_30, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scr_complete_wo_lbl_product_name_value, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->scr_complete_wo_lbl_product_name_value, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->scr_complete_wo_lbl_product_name_value, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scr_complete_wo_lbl_product_name_value, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scr_complete_wo_lbl_product_name_value, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scr_complete_wo_lbl_product_name_value, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scr_complete_wo_lbl_product_name_value, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scr_complete_wo_lbl_product_name_value, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scr_complete_wo_lbl_product_name_value, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_complete_wo_lbl_product_name_value, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scr_complete_wo_label_2
    ui->scr_complete_wo_label_2 = lv_label_create(ui->scr_complete_wo_cont_wo_detail);
    lv_obj_set_pos(ui->scr_complete_wo_label_2, 275, 57);
    lv_obj_set_size(ui->scr_complete_wo_label_2, 302, 32);
    lv_label_set_text(ui->scr_complete_wo_label_2, "PRODUCT A");
    lv_label_set_long_mode(ui->scr_complete_wo_label_2, LV_LABEL_LONG_WRAP);

    //Write style for scr_complete_wo_label_2, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scr_complete_wo_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_complete_wo_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scr_complete_wo_label_2, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scr_complete_wo_label_2, &lv_font_Acme_Regular_30, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scr_complete_wo_label_2, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->scr_complete_wo_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->scr_complete_wo_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scr_complete_wo_label_2, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scr_complete_wo_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scr_complete_wo_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scr_complete_wo_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scr_complete_wo_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scr_complete_wo_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_complete_wo_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scr_complete_wo_label_1
    ui->scr_complete_wo_label_1 = lv_label_create(ui->scr_complete_wo_cont_wo_detail);
    lv_obj_set_pos(ui->scr_complete_wo_label_1, 85, 57);
    lv_obj_set_size(ui->scr_complete_wo_label_1, 177, 32);
    lv_label_set_text(ui->scr_complete_wo_label_1, "PRODUCT:");
    lv_label_set_long_mode(ui->scr_complete_wo_label_1, LV_LABEL_LONG_WRAP);

    //Write style for scr_complete_wo_label_1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scr_complete_wo_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_complete_wo_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scr_complete_wo_label_1, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scr_complete_wo_label_1, &lv_font_Acme_Regular_30, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scr_complete_wo_label_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->scr_complete_wo_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->scr_complete_wo_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scr_complete_wo_label_1, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scr_complete_wo_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scr_complete_wo_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scr_complete_wo_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scr_complete_wo_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scr_complete_wo_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_complete_wo_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //The custom code of scr_complete_wo.


    //Update current screen layout.
    lv_obj_update_layout(ui->scr_complete_wo);

    //Init events for screen.
    events_init_scr_complete_wo(ui);
}
