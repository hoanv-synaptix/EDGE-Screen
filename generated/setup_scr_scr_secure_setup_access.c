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



void setup_scr_scr_secure_setup_access(lv_ui *ui)
{
    //Write codes scr_secure_setup_access
    ui->scr_secure_setup_access = lv_obj_create(NULL);
    lv_obj_set_size(ui->scr_secure_setup_access, 1280, 720);
    lv_obj_set_scrollbar_mode(ui->scr_secure_setup_access, LV_SCROLLBAR_MODE_OFF);

    //Write style for scr_secure_setup_access, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->scr_secure_setup_access, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scr_secure_setup_access, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scr_secure_setup_access, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scr_secure_setup_access_cont_secure_access
    ui->scr_secure_setup_access_cont_secure_access = lv_obj_create(ui->scr_secure_setup_access);
    lv_obj_set_pos(ui->scr_secure_setup_access_cont_secure_access, 240, 160);
    lv_obj_set_size(ui->scr_secure_setup_access_cont_secure_access, 800, 400);
    lv_obj_set_scrollbar_mode(ui->scr_secure_setup_access_cont_secure_access, LV_SCROLLBAR_MODE_OFF);

    //Write style for scr_secure_setup_access_cont_secure_access, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scr_secure_setup_access_cont_secure_access, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_secure_setup_access_cont_secure_access, 20, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scr_secure_setup_access_cont_secure_access, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scr_secure_setup_access_cont_secure_access, lv_color_hex(0x2b2f3a), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scr_secure_setup_access_cont_secure_access, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scr_secure_setup_access_cont_secure_access, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scr_secure_setup_access_cont_secure_access, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scr_secure_setup_access_cont_secure_access, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scr_secure_setup_access_cont_secure_access, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_secure_setup_access_cont_secure_access, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_color(ui->scr_secure_setup_access_cont_secure_access, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_opa(ui->scr_secure_setup_access_cont_secure_access, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_spread(ui->scr_secure_setup_access_cont_secure_access, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_offset_x(ui->scr_secure_setup_access_cont_secure_access, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_offset_y(ui->scr_secure_setup_access_cont_secure_access, 2, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scr_secure_setup_access_lbl_secure_setup_access
    ui->scr_secure_setup_access_lbl_secure_setup_access = lv_label_create(ui->scr_secure_setup_access_cont_secure_access);
    lv_obj_set_pos(ui->scr_secure_setup_access_lbl_secure_setup_access, 0, 10);
    lv_obj_set_size(ui->scr_secure_setup_access_lbl_secure_setup_access, 800, 60);
    lv_label_set_text(ui->scr_secure_setup_access_lbl_secure_setup_access, "Secure Setup Access");
    lv_label_set_long_mode(ui->scr_secure_setup_access_lbl_secure_setup_access, LV_LABEL_LONG_WRAP);

    //Write style for scr_secure_setup_access_lbl_secure_setup_access, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scr_secure_setup_access_lbl_secure_setup_access, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_secure_setup_access_lbl_secure_setup_access, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scr_secure_setup_access_lbl_secure_setup_access, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scr_secure_setup_access_lbl_secure_setup_access, &lv_font_Acme_Regular_50, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scr_secure_setup_access_lbl_secure_setup_access, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->scr_secure_setup_access_lbl_secure_setup_access, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->scr_secure_setup_access_lbl_secure_setup_access, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scr_secure_setup_access_lbl_secure_setup_access, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scr_secure_setup_access_lbl_secure_setup_access, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scr_secure_setup_access_lbl_secure_setup_access, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scr_secure_setup_access_lbl_secure_setup_access, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scr_secure_setup_access_lbl_secure_setup_access, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scr_secure_setup_access_lbl_secure_setup_access, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_secure_setup_access_lbl_secure_setup_access, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scr_secure_setup_access_line_1
    ui->scr_secure_setup_access_line_1 = lv_line_create(ui->scr_secure_setup_access_cont_secure_access);
    lv_obj_set_pos(ui->scr_secure_setup_access_line_1, 50, 80);
    lv_obj_set_size(ui->scr_secure_setup_access_line_1, 700, 2);
    static lv_point_precise_t scr_secure_setup_access_line_1[] = {{0, 0},{700, 0}};
    lv_line_set_points(ui->scr_secure_setup_access_line_1, scr_secure_setup_access_line_1, 2);

    //Write style for scr_secure_setup_access_line_1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_line_width(ui->scr_secure_setup_access_line_1, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_color(ui->scr_secure_setup_access_line_1, lv_color_hex(0x757575), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_opa(ui->scr_secure_setup_access_line_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_rounded(ui->scr_secure_setup_access_line_1, true, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scr_secure_setup_access_lbl_status_secure_setup
    ui->scr_secure_setup_access_lbl_status_secure_setup = lv_label_create(ui->scr_secure_setup_access_cont_secure_access);
    lv_obj_set_pos(ui->scr_secure_setup_access_lbl_status_secure_setup, 50, 250);
    lv_obj_set_size(ui->scr_secure_setup_access_lbl_status_secure_setup, 685, 32);
    lv_label_set_text(ui->scr_secure_setup_access_lbl_status_secure_setup, "Please enter the admin password to access settings");
    lv_label_set_long_mode(ui->scr_secure_setup_access_lbl_status_secure_setup, LV_LABEL_LONG_WRAP);

    //Write style for scr_secure_setup_access_lbl_status_secure_setup, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scr_secure_setup_access_lbl_status_secure_setup, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_secure_setup_access_lbl_status_secure_setup, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scr_secure_setup_access_lbl_status_secure_setup, lv_color_hex(0xababab), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scr_secure_setup_access_lbl_status_secure_setup, &lv_font_arial_28, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scr_secure_setup_access_lbl_status_secure_setup, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->scr_secure_setup_access_lbl_status_secure_setup, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->scr_secure_setup_access_lbl_status_secure_setup, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scr_secure_setup_access_lbl_status_secure_setup, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scr_secure_setup_access_lbl_status_secure_setup, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scr_secure_setup_access_lbl_status_secure_setup, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scr_secure_setup_access_lbl_status_secure_setup, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scr_secure_setup_access_lbl_status_secure_setup, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scr_secure_setup_access_lbl_status_secure_setup, 20, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_secure_setup_access_lbl_status_secure_setup, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scr_secure_setup_access_lbl_admin_password
    ui->scr_secure_setup_access_lbl_admin_password = lv_label_create(ui->scr_secure_setup_access_cont_secure_access);
    lv_obj_set_pos(ui->scr_secure_setup_access_lbl_admin_password, 50, 117);
    lv_obj_set_size(ui->scr_secure_setup_access_lbl_admin_password, 248, 32);
    lv_label_set_text(ui->scr_secure_setup_access_lbl_admin_password, "Admin Password");
    lv_label_set_long_mode(ui->scr_secure_setup_access_lbl_admin_password, LV_LABEL_LONG_WRAP);

    //Write style for scr_secure_setup_access_lbl_admin_password, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scr_secure_setup_access_lbl_admin_password, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_secure_setup_access_lbl_admin_password, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scr_secure_setup_access_lbl_admin_password, lv_color_hex(0xababab), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scr_secure_setup_access_lbl_admin_password, &lv_font_arial_28, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scr_secure_setup_access_lbl_admin_password, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->scr_secure_setup_access_lbl_admin_password, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->scr_secure_setup_access_lbl_admin_password, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scr_secure_setup_access_lbl_admin_password, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scr_secure_setup_access_lbl_admin_password, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scr_secure_setup_access_lbl_admin_password, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scr_secure_setup_access_lbl_admin_password, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scr_secure_setup_access_lbl_admin_password, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scr_secure_setup_access_lbl_admin_password, 20, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_secure_setup_access_lbl_admin_password, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scr_secure_setup_access_ta_admin_password
    ui->scr_secure_setup_access_ta_admin_password = lv_textarea_create(ui->scr_secure_setup_access_cont_secure_access);
    lv_obj_set_pos(ui->scr_secure_setup_access_ta_admin_password, 126, 158);
    lv_obj_set_size(ui->scr_secure_setup_access_ta_admin_password, 550, 60);
    lv_textarea_set_text(ui->scr_secure_setup_access_ta_admin_password, "admin");
    lv_textarea_set_placeholder_text(ui->scr_secure_setup_access_ta_admin_password, "");
    lv_textarea_set_password_bullet(ui->scr_secure_setup_access_ta_admin_password, "*");
    lv_textarea_set_password_mode(ui->scr_secure_setup_access_ta_admin_password, true);
    lv_textarea_set_one_line(ui->scr_secure_setup_access_ta_admin_password, true);
    lv_textarea_set_accepted_chars(ui->scr_secure_setup_access_ta_admin_password, "");
    lv_textarea_set_max_length(ui->scr_secure_setup_access_ta_admin_password, 32);
#if LV_USE_KEYBOARD
    lv_obj_add_event_cb(ui->scr_secure_setup_access_ta_admin_password, ta_event_cb, LV_EVENT_ALL, ui->g_kb_top_layer);
#endif

    //Write style for scr_secure_setup_access_ta_admin_password, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_text_color(ui->scr_secure_setup_access_ta_admin_password, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scr_secure_setup_access_ta_admin_password, &lv_font_arial_30, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scr_secure_setup_access_ta_admin_password, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->scr_secure_setup_access_ta_admin_password, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scr_secure_setup_access_ta_admin_password, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scr_secure_setup_access_ta_admin_password, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scr_secure_setup_access_ta_admin_password, lv_color_hex(0x2b2f36), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scr_secure_setup_access_ta_admin_password, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->scr_secure_setup_access_ta_admin_password, 1, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->scr_secure_setup_access_ta_admin_password, 201, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->scr_secure_setup_access_ta_admin_password, lv_color_hex(0x575757), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->scr_secure_setup_access_ta_admin_password, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_secure_setup_access_ta_admin_password, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scr_secure_setup_access_ta_admin_password, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scr_secure_setup_access_ta_admin_password, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scr_secure_setup_access_ta_admin_password, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_secure_setup_access_ta_admin_password, 5, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style for scr_secure_setup_access_ta_admin_password, Part: LV_PART_SCROLLBAR, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->scr_secure_setup_access_ta_admin_password, 255, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scr_secure_setup_access_ta_admin_password, lv_color_hex(0x2195f6), LV_PART_SCROLLBAR|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scr_secure_setup_access_ta_admin_password, LV_GRAD_DIR_NONE, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_secure_setup_access_ta_admin_password, 0, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);

    //Write codes scr_secure_setup_access_line_2
    ui->scr_secure_setup_access_line_2 = lv_line_create(ui->scr_secure_setup_access_cont_secure_access);
    lv_obj_set_pos(ui->scr_secure_setup_access_line_2, 50, 300);
    lv_obj_set_size(ui->scr_secure_setup_access_line_2, 700, 1);
    static lv_point_precise_t scr_secure_setup_access_line_2[] = {{0, 0},{700, 0}};
    lv_line_set_points(ui->scr_secure_setup_access_line_2, scr_secure_setup_access_line_2, 2);

    //Write style for scr_secure_setup_access_line_2, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_line_width(ui->scr_secure_setup_access_line_2, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_color(ui->scr_secure_setup_access_line_2, lv_color_hex(0x757575), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_opa(ui->scr_secure_setup_access_line_2, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_rounded(ui->scr_secure_setup_access_line_2, true, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scr_secure_setup_access_btn_confirm
    ui->scr_secure_setup_access_btn_confirm = lv_button_create(ui->scr_secure_setup_access_cont_secure_access);
    lv_obj_set_pos(ui->scr_secure_setup_access_btn_confirm, 420, 321);
    lv_obj_set_size(ui->scr_secure_setup_access_btn_confirm, 300, 55);
    ui->scr_secure_setup_access_btn_confirm_label = lv_label_create(ui->scr_secure_setup_access_btn_confirm);
    lv_label_set_text(ui->scr_secure_setup_access_btn_confirm_label, "CONFIRM");
    lv_label_set_long_mode(ui->scr_secure_setup_access_btn_confirm_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->scr_secure_setup_access_btn_confirm_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->scr_secure_setup_access_btn_confirm, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->scr_secure_setup_access_btn_confirm_label, LV_PCT(100));

    //Write style for scr_secure_setup_access_btn_confirm, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->scr_secure_setup_access_btn_confirm, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scr_secure_setup_access_btn_confirm, lv_color_hex(0x1c4567), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scr_secure_setup_access_btn_confirm, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->scr_secure_setup_access_btn_confirm, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_secure_setup_access_btn_confirm, 10, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_secure_setup_access_btn_confirm, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scr_secure_setup_access_btn_confirm, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scr_secure_setup_access_btn_confirm, &lv_font_arial_30, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scr_secure_setup_access_btn_confirm, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scr_secure_setup_access_btn_confirm, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scr_secure_setup_access_btn_cancel
    ui->scr_secure_setup_access_btn_cancel = lv_button_create(ui->scr_secure_setup_access_cont_secure_access);
    lv_obj_set_pos(ui->scr_secure_setup_access_btn_cancel, 80, 322);
    lv_obj_set_size(ui->scr_secure_setup_access_btn_cancel, 300, 55);
    ui->scr_secure_setup_access_btn_cancel_label = lv_label_create(ui->scr_secure_setup_access_btn_cancel);
    lv_label_set_text(ui->scr_secure_setup_access_btn_cancel_label, "CANCEL");
    lv_label_set_long_mode(ui->scr_secure_setup_access_btn_cancel_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->scr_secure_setup_access_btn_cancel_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->scr_secure_setup_access_btn_cancel, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->scr_secure_setup_access_btn_cancel_label, LV_PCT(100));

    //Write style for scr_secure_setup_access_btn_cancel, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->scr_secure_setup_access_btn_cancel, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scr_secure_setup_access_btn_cancel, lv_color_hex(0x717171), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scr_secure_setup_access_btn_cancel, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->scr_secure_setup_access_btn_cancel, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_secure_setup_access_btn_cancel, 10, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_secure_setup_access_btn_cancel, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scr_secure_setup_access_btn_cancel, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scr_secure_setup_access_btn_cancel, &lv_font_arial_30, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scr_secure_setup_access_btn_cancel, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scr_secure_setup_access_btn_cancel, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scr_secure_setup_access_img_password
    ui->scr_secure_setup_access_img_password = lv_image_create(ui->scr_secure_setup_access_cont_secure_access);
    lv_obj_set_pos(ui->scr_secure_setup_access_img_password, 62, 162);
    lv_obj_set_size(ui->scr_secure_setup_access_img_password, 64, 64);
    lv_obj_add_flag(ui->scr_secure_setup_access_img_password, LV_OBJ_FLAG_CLICKABLE);
#if LV_USE_GUIDER_SIMULATOR
    lv_image_set_src(ui->scr_secure_setup_access_img_password, "D:\\Synaptix\\Project-CNC\\EDGE-Screen\\import\\image\\padlock.png");
#else
    lv_image_set_src(ui->scr_secure_setup_access_img_password, "F:/padlock.bin");
#endif
    lv_image_set_pivot(ui->scr_secure_setup_access_img_password, 50,50);
    lv_image_set_rotation(ui->scr_secure_setup_access_img_password, 0);

    //Write style for scr_secure_setup_access_img_password, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_image_recolor_opa(ui->scr_secure_setup_access_img_password, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_image_opa(ui->scr_secure_setup_access_img_password, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

    //The custom code of scr_secure_setup_access.


    //Update current screen layout.
    lv_obj_update_layout(ui->scr_secure_setup_access);

    //Init events for screen.
    events_init_scr_secure_setup_access(ui);
}
