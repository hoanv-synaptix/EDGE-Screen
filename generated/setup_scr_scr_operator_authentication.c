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



void setup_scr_scr_operator_authentication(lv_ui *ui)
{
    //Write codes scr_operator_authentication
    ui->scr_operator_authentication = lv_obj_create(NULL);
    lv_obj_set_size(ui->scr_operator_authentication, 1280, 720);
    lv_obj_set_scrollbar_mode(ui->scr_operator_authentication, LV_SCROLLBAR_MODE_OFF);

    //Write style for scr_operator_authentication, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->scr_operator_authentication, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scr_operator_authentication, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scr_operator_authentication, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scr_operator_authentication_cont_secure_access
    ui->scr_operator_authentication_cont_secure_access = lv_obj_create(ui->scr_operator_authentication);
    lv_obj_set_pos(ui->scr_operator_authentication_cont_secure_access, 240, 160);
    lv_obj_set_size(ui->scr_operator_authentication_cont_secure_access, 800, 400);
    lv_obj_set_scrollbar_mode(ui->scr_operator_authentication_cont_secure_access, LV_SCROLLBAR_MODE_OFF);

    //Write style for scr_operator_authentication_cont_secure_access, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scr_operator_authentication_cont_secure_access, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_operator_authentication_cont_secure_access, 20, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scr_operator_authentication_cont_secure_access, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scr_operator_authentication_cont_secure_access, lv_color_hex(0x2b2f3a), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scr_operator_authentication_cont_secure_access, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scr_operator_authentication_cont_secure_access, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scr_operator_authentication_cont_secure_access, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scr_operator_authentication_cont_secure_access, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scr_operator_authentication_cont_secure_access, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_operator_authentication_cont_secure_access, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_color(ui->scr_operator_authentication_cont_secure_access, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_opa(ui->scr_operator_authentication_cont_secure_access, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_spread(ui->scr_operator_authentication_cont_secure_access, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_offset_x(ui->scr_operator_authentication_cont_secure_access, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_offset_y(ui->scr_operator_authentication_cont_secure_access, 2, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scr_operator_authentication_label_3
    ui->scr_operator_authentication_label_3 = lv_label_create(ui->scr_operator_authentication_cont_secure_access);
    lv_obj_set_pos(ui->scr_operator_authentication_label_3, 0, 20);
    lv_obj_set_size(ui->scr_operator_authentication_label_3, 800, 60);
    lv_label_set_text(ui->scr_operator_authentication_label_3, "OPERATOR AUTHENTICATION");
    lv_label_set_long_mode(ui->scr_operator_authentication_label_3, LV_LABEL_LONG_WRAP);

    //Write style for scr_operator_authentication_label_3, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scr_operator_authentication_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_operator_authentication_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scr_operator_authentication_label_3, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scr_operator_authentication_label_3, &lv_font_Acme_Regular_45, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scr_operator_authentication_label_3, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->scr_operator_authentication_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->scr_operator_authentication_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scr_operator_authentication_label_3, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scr_operator_authentication_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scr_operator_authentication_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scr_operator_authentication_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scr_operator_authentication_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scr_operator_authentication_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_operator_authentication_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scr_operator_authentication_line_4
    ui->scr_operator_authentication_line_4 = lv_line_create(ui->scr_operator_authentication_cont_secure_access);
    lv_obj_set_pos(ui->scr_operator_authentication_line_4, 50, 80);
    lv_obj_set_size(ui->scr_operator_authentication_line_4, 700, 2);
    static lv_point_precise_t scr_operator_authentication_line_4[] = {{0, 0},{700, 0}};
    lv_line_set_points(ui->scr_operator_authentication_line_4, scr_operator_authentication_line_4, 2);

    //Write style for scr_operator_authentication_line_4, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_line_width(ui->scr_operator_authentication_line_4, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_color(ui->scr_operator_authentication_line_4, lv_color_hex(0x757575), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_opa(ui->scr_operator_authentication_line_4, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_rounded(ui->scr_operator_authentication_line_4, true, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scr_operator_authentication_lbl_operator
    ui->scr_operator_authentication_lbl_operator = lv_label_create(ui->scr_operator_authentication_cont_secure_access);
    lv_obj_set_pos(ui->scr_operator_authentication_lbl_operator, 200, 117);
    lv_obj_set_size(ui->scr_operator_authentication_lbl_operator, 150, 32);
    lv_label_set_text(ui->scr_operator_authentication_lbl_operator, "Operator: ");
    lv_label_set_long_mode(ui->scr_operator_authentication_lbl_operator, LV_LABEL_LONG_WRAP);

    //Write style for scr_operator_authentication_lbl_operator, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scr_operator_authentication_lbl_operator, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_operator_authentication_lbl_operator, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scr_operator_authentication_lbl_operator, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scr_operator_authentication_lbl_operator, &lv_font_arial_28, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scr_operator_authentication_lbl_operator, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->scr_operator_authentication_lbl_operator, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->scr_operator_authentication_lbl_operator, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scr_operator_authentication_lbl_operator, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scr_operator_authentication_lbl_operator, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scr_operator_authentication_lbl_operator, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scr_operator_authentication_lbl_operator, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scr_operator_authentication_lbl_operator, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scr_operator_authentication_lbl_operator, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_operator_authentication_lbl_operator, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scr_operator_authentication_line_3
    ui->scr_operator_authentication_line_3 = lv_line_create(ui->scr_operator_authentication_cont_secure_access);
    lv_obj_set_pos(ui->scr_operator_authentication_line_3, 50, 300);
    lv_obj_set_size(ui->scr_operator_authentication_line_3, 700, 1);
    static lv_point_precise_t scr_operator_authentication_line_3[] = {{0, 0},{700, 0}};
    lv_line_set_points(ui->scr_operator_authentication_line_3, scr_operator_authentication_line_3, 2);

    //Write style for scr_operator_authentication_line_3, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_line_width(ui->scr_operator_authentication_line_3, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_color(ui->scr_operator_authentication_line_3, lv_color_hex(0x757575), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_opa(ui->scr_operator_authentication_line_3, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_rounded(ui->scr_operator_authentication_line_3, true, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scr_operator_authentication_btn_confirm
    ui->scr_operator_authentication_btn_confirm = lv_button_create(ui->scr_operator_authentication_cont_secure_access);
    lv_obj_set_pos(ui->scr_operator_authentication_btn_confirm, 420, 321);
    lv_obj_set_size(ui->scr_operator_authentication_btn_confirm, 300, 55);
    ui->scr_operator_authentication_btn_confirm_label = lv_label_create(ui->scr_operator_authentication_btn_confirm);
    lv_label_set_text(ui->scr_operator_authentication_btn_confirm_label, "CONFIRM");
    lv_label_set_long_mode(ui->scr_operator_authentication_btn_confirm_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->scr_operator_authentication_btn_confirm_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->scr_operator_authentication_btn_confirm, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->scr_operator_authentication_btn_confirm_label, LV_PCT(100));

    //Write style for scr_operator_authentication_btn_confirm, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->scr_operator_authentication_btn_confirm, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scr_operator_authentication_btn_confirm, lv_color_hex(0x1c4567), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scr_operator_authentication_btn_confirm, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->scr_operator_authentication_btn_confirm, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_operator_authentication_btn_confirm, 10, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_operator_authentication_btn_confirm, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scr_operator_authentication_btn_confirm, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scr_operator_authentication_btn_confirm, &lv_font_arial_30, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scr_operator_authentication_btn_confirm, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scr_operator_authentication_btn_confirm, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scr_operator_authentication_btn_cancel
    ui->scr_operator_authentication_btn_cancel = lv_button_create(ui->scr_operator_authentication_cont_secure_access);
    lv_obj_set_pos(ui->scr_operator_authentication_btn_cancel, 80, 322);
    lv_obj_set_size(ui->scr_operator_authentication_btn_cancel, 300, 55);
    ui->scr_operator_authentication_btn_cancel_label = lv_label_create(ui->scr_operator_authentication_btn_cancel);
    lv_label_set_text(ui->scr_operator_authentication_btn_cancel_label, "CANCEL");
    lv_label_set_long_mode(ui->scr_operator_authentication_btn_cancel_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->scr_operator_authentication_btn_cancel_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->scr_operator_authentication_btn_cancel, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->scr_operator_authentication_btn_cancel_label, LV_PCT(100));

    //Write style for scr_operator_authentication_btn_cancel, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->scr_operator_authentication_btn_cancel, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scr_operator_authentication_btn_cancel, lv_color_hex(0x717171), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scr_operator_authentication_btn_cancel, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->scr_operator_authentication_btn_cancel, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_operator_authentication_btn_cancel, 10, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_operator_authentication_btn_cancel, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scr_operator_authentication_btn_cancel, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scr_operator_authentication_btn_cancel, &lv_font_arial_30, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scr_operator_authentication_btn_cancel, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scr_operator_authentication_btn_cancel, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scr_operator_authentication_lbl_action
    ui->scr_operator_authentication_lbl_action = lv_label_create(ui->scr_operator_authentication_cont_secure_access);
    lv_obj_set_pos(ui->scr_operator_authentication_lbl_action, 200, 175);
    lv_obj_set_size(ui->scr_operator_authentication_lbl_action, 150, 32);
    lv_label_set_text(ui->scr_operator_authentication_lbl_action, "Action:");
    lv_label_set_long_mode(ui->scr_operator_authentication_lbl_action, LV_LABEL_LONG_WRAP);

    //Write style for scr_operator_authentication_lbl_action, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scr_operator_authentication_lbl_action, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_operator_authentication_lbl_action, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scr_operator_authentication_lbl_action, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scr_operator_authentication_lbl_action, &lv_font_arial_28, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scr_operator_authentication_lbl_action, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->scr_operator_authentication_lbl_action, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->scr_operator_authentication_lbl_action, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scr_operator_authentication_lbl_action, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scr_operator_authentication_lbl_action, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scr_operator_authentication_lbl_action, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scr_operator_authentication_lbl_action, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scr_operator_authentication_lbl_action, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scr_operator_authentication_lbl_action, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_operator_authentication_lbl_action, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scr_operator_authentication_lbl_status
    ui->scr_operator_authentication_lbl_status = lv_label_create(ui->scr_operator_authentication_cont_secure_access);
    lv_obj_set_pos(ui->scr_operator_authentication_lbl_status, 200, 233);
    lv_obj_set_size(ui->scr_operator_authentication_lbl_status, 150, 32);
    lv_label_set_text(ui->scr_operator_authentication_lbl_status, "Status:");
    lv_label_set_long_mode(ui->scr_operator_authentication_lbl_status, LV_LABEL_LONG_WRAP);

    //Write style for scr_operator_authentication_lbl_status, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scr_operator_authentication_lbl_status, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_operator_authentication_lbl_status, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scr_operator_authentication_lbl_status, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scr_operator_authentication_lbl_status, &lv_font_arial_28, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scr_operator_authentication_lbl_status, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->scr_operator_authentication_lbl_status, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->scr_operator_authentication_lbl_status, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scr_operator_authentication_lbl_status, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scr_operator_authentication_lbl_status, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scr_operator_authentication_lbl_status, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scr_operator_authentication_lbl_status, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scr_operator_authentication_lbl_status, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scr_operator_authentication_lbl_status, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_operator_authentication_lbl_status, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scr_operator_authentication_lbl_operator_value
    ui->scr_operator_authentication_lbl_operator_value = lv_label_create(ui->scr_operator_authentication_cont_secure_access);
    lv_obj_set_pos(ui->scr_operator_authentication_lbl_operator_value, 350, 117);
    lv_obj_set_size(ui->scr_operator_authentication_lbl_operator_value, 300, 32);
    lv_label_set_text(ui->scr_operator_authentication_lbl_operator_value, "NGUYEN VAN A");
    lv_label_set_long_mode(ui->scr_operator_authentication_lbl_operator_value, LV_LABEL_LONG_WRAP);

    //Write style for scr_operator_authentication_lbl_operator_value, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scr_operator_authentication_lbl_operator_value, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_operator_authentication_lbl_operator_value, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scr_operator_authentication_lbl_operator_value, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scr_operator_authentication_lbl_operator_value, &lv_font_arial_28, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scr_operator_authentication_lbl_operator_value, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->scr_operator_authentication_lbl_operator_value, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->scr_operator_authentication_lbl_operator_value, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scr_operator_authentication_lbl_operator_value, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scr_operator_authentication_lbl_operator_value, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scr_operator_authentication_lbl_operator_value, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scr_operator_authentication_lbl_operator_value, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scr_operator_authentication_lbl_operator_value, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scr_operator_authentication_lbl_operator_value, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_operator_authentication_lbl_operator_value, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scr_operator_authentication_lbl_action_value
    ui->scr_operator_authentication_lbl_action_value = lv_label_create(ui->scr_operator_authentication_cont_secure_access);
    lv_obj_set_pos(ui->scr_operator_authentication_lbl_action_value, 350, 174);
    lv_obj_set_size(ui->scr_operator_authentication_lbl_action_value, 244, 32);
    lv_label_set_text(ui->scr_operator_authentication_lbl_action_value, "LOGIN");
    lv_label_set_long_mode(ui->scr_operator_authentication_lbl_action_value, LV_LABEL_LONG_WRAP);

    //Write style for scr_operator_authentication_lbl_action_value, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scr_operator_authentication_lbl_action_value, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_operator_authentication_lbl_action_value, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scr_operator_authentication_lbl_action_value, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scr_operator_authentication_lbl_action_value, &lv_font_arial_28, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scr_operator_authentication_lbl_action_value, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->scr_operator_authentication_lbl_action_value, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->scr_operator_authentication_lbl_action_value, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scr_operator_authentication_lbl_action_value, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scr_operator_authentication_lbl_action_value, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scr_operator_authentication_lbl_action_value, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scr_operator_authentication_lbl_action_value, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scr_operator_authentication_lbl_action_value, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scr_operator_authentication_lbl_action_value, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_operator_authentication_lbl_action_value, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scr_operator_authentication_lbl_status_value
    ui->scr_operator_authentication_lbl_status_value = lv_label_create(ui->scr_operator_authentication_cont_secure_access);
    lv_obj_set_pos(ui->scr_operator_authentication_lbl_status_value, 350, 233);
    lv_obj_set_size(ui->scr_operator_authentication_lbl_status_value, 244, 32);
    lv_label_set_text(ui->scr_operator_authentication_lbl_status_value, "Verified");
    lv_label_set_long_mode(ui->scr_operator_authentication_lbl_status_value, LV_LABEL_LONG_WRAP);

    //Write style for scr_operator_authentication_lbl_status_value, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scr_operator_authentication_lbl_status_value, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_operator_authentication_lbl_status_value, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scr_operator_authentication_lbl_status_value, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scr_operator_authentication_lbl_status_value, &lv_font_arial_28, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scr_operator_authentication_lbl_status_value, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->scr_operator_authentication_lbl_status_value, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->scr_operator_authentication_lbl_status_value, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scr_operator_authentication_lbl_status_value, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scr_operator_authentication_lbl_status_value, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scr_operator_authentication_lbl_status_value, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scr_operator_authentication_lbl_status_value, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scr_operator_authentication_lbl_status_value, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scr_operator_authentication_lbl_status_value, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_operator_authentication_lbl_status_value, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //The custom code of scr_operator_authentication.


    //Update current screen layout.
    lv_obj_update_layout(ui->scr_operator_authentication);

    //Init events for screen.
    events_init_scr_operator_authentication(ui);
}
