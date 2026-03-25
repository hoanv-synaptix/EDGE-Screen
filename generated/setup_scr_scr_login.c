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



void setup_scr_scr_login(lv_ui *ui)
{
    //Write codes scr_login
    ui->scr_login = lv_obj_create(NULL);
    lv_obj_set_size(ui->scr_login, 1280, 720);
    lv_obj_set_scrollbar_mode(ui->scr_login, LV_SCROLLBAR_MODE_OFF);

    //Write style for scr_login, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->scr_login, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scr_login, lv_color_hex(0x121212), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scr_login, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scr_login_cont_root
    ui->scr_login_cont_root = lv_obj_create(ui->scr_login);
    lv_obj_set_pos(ui->scr_login_cont_root, 0, 0);
    lv_obj_set_size(ui->scr_login_cont_root, 1280, 720);
    lv_obj_set_scrollbar_mode(ui->scr_login_cont_root, LV_SCROLLBAR_MODE_OFF);

    //Write style for scr_login_cont_root, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scr_login_cont_root, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_login_cont_root, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scr_login_cont_root, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scr_login_cont_root, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scr_login_cont_root, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scr_login_cont_root, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scr_login_cont_root, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_login_cont_root, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scr_login_cont_body
    ui->scr_login_cont_body = lv_obj_create(ui->scr_login_cont_root);
    lv_obj_set_pos(ui->scr_login_cont_body, 43, 100);
    lv_obj_set_size(ui->scr_login_cont_body, 1200, 600);
    lv_obj_set_scrollbar_mode(ui->scr_login_cont_body, LV_SCROLLBAR_MODE_OFF);

    //Write style for scr_login_cont_body, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scr_login_cont_body, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_login_cont_body, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scr_login_cont_body, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scr_login_cont_body, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scr_login_cont_body, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scr_login_cont_body, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scr_login_cont_body, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_login_cont_body, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scr_login_cont_nfc
    ui->scr_login_cont_nfc = lv_obj_create(ui->scr_login_cont_body);
    lv_obj_set_pos(ui->scr_login_cont_nfc, 0, 2);
    lv_obj_set_size(ui->scr_login_cont_nfc, 580, 600);
    lv_obj_set_scrollbar_mode(ui->scr_login_cont_nfc, LV_SCROLLBAR_MODE_OFF);

    //Write style for scr_login_cont_nfc, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scr_login_cont_nfc, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_login_cont_nfc, 12, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scr_login_cont_nfc, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scr_login_cont_nfc, lv_color_hex(0x2b2f3a), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scr_login_cont_nfc, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scr_login_cont_nfc, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scr_login_cont_nfc, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scr_login_cont_nfc, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scr_login_cont_nfc, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_login_cont_nfc, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scr_login_lbl_nfc_tiltle
    ui->scr_login_lbl_nfc_tiltle = lv_label_create(ui->scr_login_cont_nfc);
    lv_obj_set_pos(ui->scr_login_lbl_nfc_tiltle, 85, 30);
    lv_obj_set_size(ui->scr_login_lbl_nfc_tiltle, 400, 40);
    lv_label_set_text(ui->scr_login_lbl_nfc_tiltle, "NFC");
    lv_label_set_long_mode(ui->scr_login_lbl_nfc_tiltle, LV_LABEL_LONG_WRAP);

    //Write style for scr_login_lbl_nfc_tiltle, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scr_login_lbl_nfc_tiltle, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_login_lbl_nfc_tiltle, 10, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scr_login_lbl_nfc_tiltle, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scr_login_lbl_nfc_tiltle, &lv_font_arial_40, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scr_login_lbl_nfc_tiltle, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->scr_login_lbl_nfc_tiltle, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->scr_login_lbl_nfc_tiltle, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scr_login_lbl_nfc_tiltle, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scr_login_lbl_nfc_tiltle, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scr_login_lbl_nfc_tiltle, lv_color_hex(0x476b89), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scr_login_lbl_nfc_tiltle, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scr_login_lbl_nfc_tiltle, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scr_login_lbl_nfc_tiltle, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scr_login_lbl_nfc_tiltle, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scr_login_lbl_nfc_tiltle, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_login_lbl_nfc_tiltle, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scr_login_img_nfc
    ui->scr_login_img_nfc = lv_image_create(ui->scr_login_cont_nfc);
    lv_obj_set_pos(ui->scr_login_img_nfc, 185, 120);
    lv_obj_set_size(ui->scr_login_img_nfc, 200, 200);
    lv_obj_add_flag(ui->scr_login_img_nfc, LV_OBJ_FLAG_CLICKABLE);
    lv_image_set_src(ui->scr_login_img_nfc, &_nfc_RGB565A8_200x200);
    lv_image_set_pivot(ui->scr_login_img_nfc, 50,50);
    lv_image_set_rotation(ui->scr_login_img_nfc, 0);

    //Write style for scr_login_img_nfc, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_image_recolor_opa(ui->scr_login_img_nfc, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_image_opa(ui->scr_login_img_nfc, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scr_login_lbl_nfc_hint
    ui->scr_login_lbl_nfc_hint = lv_label_create(ui->scr_login_cont_nfc);
    lv_obj_set_pos(ui->scr_login_lbl_nfc_hint, 163, 370);
    lv_obj_set_size(ui->scr_login_lbl_nfc_hint, 243, 32);
    lv_label_set_text(ui->scr_login_lbl_nfc_hint, "Tap card to login");
    lv_label_set_long_mode(ui->scr_login_lbl_nfc_hint, LV_LABEL_LONG_WRAP);

    //Write style for scr_login_lbl_nfc_hint, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scr_login_lbl_nfc_hint, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_login_lbl_nfc_hint, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scr_login_lbl_nfc_hint, lv_color_hex(0xbcbcbc), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scr_login_lbl_nfc_hint, &lv_font_arial_30, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scr_login_lbl_nfc_hint, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->scr_login_lbl_nfc_hint, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->scr_login_lbl_nfc_hint, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scr_login_lbl_nfc_hint, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scr_login_lbl_nfc_hint, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scr_login_lbl_nfc_hint, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scr_login_lbl_nfc_hint, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scr_login_lbl_nfc_hint, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scr_login_lbl_nfc_hint, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_login_lbl_nfc_hint, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scr_login_label_nfc_status
    ui->scr_login_label_nfc_status = lv_label_create(ui->scr_login_cont_nfc);
    lv_obj_set_pos(ui->scr_login_label_nfc_status, 97, 460);
    lv_obj_set_size(ui->scr_login_label_nfc_status, 375, 32);
    lv_label_set_text(ui->scr_login_label_nfc_status, "Status: Waiting for card...");
    lv_label_set_long_mode(ui->scr_login_label_nfc_status, LV_LABEL_LONG_WRAP);

    //Write style for scr_login_label_nfc_status, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scr_login_label_nfc_status, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_login_label_nfc_status, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scr_login_label_nfc_status, lv_color_hex(0xbcbcbc), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scr_login_label_nfc_status, &lv_font_arial_20, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scr_login_label_nfc_status, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->scr_login_label_nfc_status, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->scr_login_label_nfc_status, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scr_login_label_nfc_status, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scr_login_label_nfc_status, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scr_login_label_nfc_status, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scr_login_label_nfc_status, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scr_login_label_nfc_status, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scr_login_label_nfc_status, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_login_label_nfc_status, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scr_login_line_1
    ui->scr_login_line_1 = lv_line_create(ui->scr_login_cont_nfc);
    lv_obj_set_pos(ui->scr_login_line_1, 35, 430);
    lv_obj_set_size(ui->scr_login_line_1, 500, 1);
    static lv_point_precise_t scr_login_line_1[] = {{0, 0},{1050, 0}};
    lv_line_set_points(ui->scr_login_line_1, scr_login_line_1, 2);

    //Write style for scr_login_line_1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_line_width(ui->scr_login_line_1, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_color(ui->scr_login_line_1, lv_color_hex(0x959595), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_opa(ui->scr_login_line_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_rounded(ui->scr_login_line_1, true, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scr_login_btn_confirm
    ui->scr_login_btn_confirm = lv_button_create(ui->scr_login_cont_nfc);
    lv_obj_set_pos(ui->scr_login_btn_confirm, 85, 515);
    lv_obj_set_size(ui->scr_login_btn_confirm, 400, 60);
    ui->scr_login_btn_confirm_label = lv_label_create(ui->scr_login_btn_confirm);
    lv_label_set_text(ui->scr_login_btn_confirm_label, "CONFIRM");
    lv_label_set_long_mode(ui->scr_login_btn_confirm_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->scr_login_btn_confirm_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->scr_login_btn_confirm, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->scr_login_btn_confirm_label, LV_PCT(100));

    //Write style for scr_login_btn_confirm, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->scr_login_btn_confirm, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scr_login_btn_confirm, lv_color_hex(0x1c4567), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scr_login_btn_confirm, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->scr_login_btn_confirm, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_login_btn_confirm, 10, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_login_btn_confirm, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scr_login_btn_confirm, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scr_login_btn_confirm, &lv_font_arial_30, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scr_login_btn_confirm, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scr_login_btn_confirm, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scr_login_cont_account
    ui->scr_login_cont_account = lv_obj_create(ui->scr_login_cont_body);
    lv_obj_set_pos(ui->scr_login_cont_account, 606, 3);
    lv_obj_set_size(ui->scr_login_cont_account, 580, 600);
    lv_obj_set_scrollbar_mode(ui->scr_login_cont_account, LV_SCROLLBAR_MODE_OFF);

    //Write style for scr_login_cont_account, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scr_login_cont_account, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_login_cont_account, 12, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scr_login_cont_account, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scr_login_cont_account, lv_color_hex(0x2b2f3a), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scr_login_cont_account, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scr_login_cont_account, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scr_login_cont_account, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scr_login_cont_account, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scr_login_cont_account, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_login_cont_account, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scr_login_lbl_acc_tiltle
    ui->scr_login_lbl_acc_tiltle = lv_label_create(ui->scr_login_cont_account);
    lv_obj_set_pos(ui->scr_login_lbl_acc_tiltle, 90, 30);
    lv_obj_set_size(ui->scr_login_lbl_acc_tiltle, 400, 40);
    lv_label_set_text(ui->scr_login_lbl_acc_tiltle, "ACCOUNT");
    lv_label_set_long_mode(ui->scr_login_lbl_acc_tiltle, LV_LABEL_LONG_WRAP);

    //Write style for scr_login_lbl_acc_tiltle, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scr_login_lbl_acc_tiltle, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_login_lbl_acc_tiltle, 10, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scr_login_lbl_acc_tiltle, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scr_login_lbl_acc_tiltle, &lv_font_arial_40, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scr_login_lbl_acc_tiltle, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->scr_login_lbl_acc_tiltle, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->scr_login_lbl_acc_tiltle, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scr_login_lbl_acc_tiltle, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scr_login_lbl_acc_tiltle, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scr_login_lbl_acc_tiltle, lv_color_hex(0x476B89), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scr_login_lbl_acc_tiltle, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scr_login_lbl_acc_tiltle, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scr_login_lbl_acc_tiltle, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scr_login_lbl_acc_tiltle, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scr_login_lbl_acc_tiltle, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_login_lbl_acc_tiltle, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scr_login_lbl_acc_user
    ui->scr_login_lbl_acc_user = lv_label_create(ui->scr_login_cont_account);
    lv_obj_set_pos(ui->scr_login_lbl_acc_user, 0, 125);
    lv_obj_set_size(ui->scr_login_lbl_acc_user, 189, 32);
    lv_label_set_text(ui->scr_login_lbl_acc_user, "Username");
    lv_label_set_long_mode(ui->scr_login_lbl_acc_user, LV_LABEL_LONG_WRAP);

    //Write style for scr_login_lbl_acc_user, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scr_login_lbl_acc_user, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_login_lbl_acc_user, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scr_login_lbl_acc_user, lv_color_hex(0xbcbcbc), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scr_login_lbl_acc_user, &lv_font_arial_30, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scr_login_lbl_acc_user, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->scr_login_lbl_acc_user, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->scr_login_lbl_acc_user, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scr_login_lbl_acc_user, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scr_login_lbl_acc_user, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scr_login_lbl_acc_user, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scr_login_lbl_acc_user, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scr_login_lbl_acc_user, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scr_login_lbl_acc_user, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_login_lbl_acc_user, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scr_login_lbl_acc_password
    ui->scr_login_lbl_acc_password = lv_label_create(ui->scr_login_cont_account);
    lv_obj_set_pos(ui->scr_login_lbl_acc_password, 0, 271);
    lv_obj_set_size(ui->scr_login_lbl_acc_password, 184, 32);
    lv_label_set_text(ui->scr_login_lbl_acc_password, "Password");
    lv_label_set_long_mode(ui->scr_login_lbl_acc_password, LV_LABEL_LONG_WRAP);

    //Write style for scr_login_lbl_acc_password, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scr_login_lbl_acc_password, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_login_lbl_acc_password, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scr_login_lbl_acc_password, lv_color_hex(0xbcbcbc), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scr_login_lbl_acc_password, &lv_font_arial_30, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scr_login_lbl_acc_password, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->scr_login_lbl_acc_password, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->scr_login_lbl_acc_password, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scr_login_lbl_acc_password, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scr_login_lbl_acc_password, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scr_login_lbl_acc_password, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scr_login_lbl_acc_password, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scr_login_lbl_acc_password, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scr_login_lbl_acc_password, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_login_lbl_acc_password, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scr_login_ta_acc_user
    ui->scr_login_ta_acc_user = lv_textarea_create(ui->scr_login_cont_account);
    lv_obj_set_pos(ui->scr_login_ta_acc_user, 39, 179);
    lv_obj_set_size(ui->scr_login_ta_acc_user, 500, 44);
    lv_textarea_set_text(ui->scr_login_ta_acc_user, "admin");
    lv_textarea_set_placeholder_text(ui->scr_login_ta_acc_user, "");
    lv_textarea_set_password_bullet(ui->scr_login_ta_acc_user, "*");
    lv_textarea_set_password_mode(ui->scr_login_ta_acc_user, false);
    lv_textarea_set_one_line(ui->scr_login_ta_acc_user, true);
    lv_textarea_set_accepted_chars(ui->scr_login_ta_acc_user, "");
    lv_textarea_set_max_length(ui->scr_login_ta_acc_user, 32);
#if LV_USE_KEYBOARD
    lv_obj_add_event_cb(ui->scr_login_ta_acc_user, ta_event_cb, LV_EVENT_ALL, ui->g_kb_top_layer);
#endif

    //Write style for scr_login_ta_acc_user, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_text_color(ui->scr_login_ta_acc_user, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scr_login_ta_acc_user, &lv_font_arial_30, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scr_login_ta_acc_user, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->scr_login_ta_acc_user, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scr_login_ta_acc_user, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scr_login_ta_acc_user, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scr_login_ta_acc_user, lv_color_hex(0x2b2f36), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scr_login_ta_acc_user, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->scr_login_ta_acc_user, 1, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->scr_login_ta_acc_user, 201, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->scr_login_ta_acc_user, lv_color_hex(0x575757), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->scr_login_ta_acc_user, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_login_ta_acc_user, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scr_login_ta_acc_user, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scr_login_ta_acc_user, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scr_login_ta_acc_user, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_login_ta_acc_user, 5, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style for scr_login_ta_acc_user, Part: LV_PART_SCROLLBAR, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->scr_login_ta_acc_user, 255, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scr_login_ta_acc_user, lv_color_hex(0x2195f6), LV_PART_SCROLLBAR|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scr_login_ta_acc_user, LV_GRAD_DIR_NONE, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_login_ta_acc_user, 0, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);

    //Write codes scr_login_ta_acc_password
    ui->scr_login_ta_acc_password = lv_textarea_create(ui->scr_login_cont_account);
    lv_obj_set_pos(ui->scr_login_ta_acc_password, 39, 324);
    lv_obj_set_size(ui->scr_login_ta_acc_password, 500, 44);
    lv_textarea_set_text(ui->scr_login_ta_acc_password, "admin");
    lv_textarea_set_placeholder_text(ui->scr_login_ta_acc_password, "");
    lv_textarea_set_password_bullet(ui->scr_login_ta_acc_password, "*");
    lv_textarea_set_password_mode(ui->scr_login_ta_acc_password, true);
    lv_textarea_set_one_line(ui->scr_login_ta_acc_password, true);
    lv_textarea_set_accepted_chars(ui->scr_login_ta_acc_password, "");
    lv_textarea_set_max_length(ui->scr_login_ta_acc_password, 32);
#if LV_USE_KEYBOARD
    lv_obj_add_event_cb(ui->scr_login_ta_acc_password, ta_event_cb, LV_EVENT_ALL, ui->g_kb_top_layer);
#endif

    //Write style for scr_login_ta_acc_password, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_text_color(ui->scr_login_ta_acc_password, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scr_login_ta_acc_password, &lv_font_arial_30, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scr_login_ta_acc_password, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->scr_login_ta_acc_password, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scr_login_ta_acc_password, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scr_login_ta_acc_password, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scr_login_ta_acc_password, lv_color_hex(0x2b2f36), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scr_login_ta_acc_password, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->scr_login_ta_acc_password, 1, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->scr_login_ta_acc_password, 201, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->scr_login_ta_acc_password, lv_color_hex(0x575757), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->scr_login_ta_acc_password, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_login_ta_acc_password, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scr_login_ta_acc_password, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scr_login_ta_acc_password, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scr_login_ta_acc_password, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_login_ta_acc_password, 5, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style for scr_login_ta_acc_password, Part: LV_PART_SCROLLBAR, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->scr_login_ta_acc_password, 255, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scr_login_ta_acc_password, lv_color_hex(0x2195f6), LV_PART_SCROLLBAR|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scr_login_ta_acc_password, LV_GRAD_DIR_NONE, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_login_ta_acc_password, 0, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);

    //Write codes scr_login_btn_login
    ui->scr_login_btn_login = lv_button_create(ui->scr_login_cont_account);
    lv_obj_set_pos(ui->scr_login_btn_login, 90, 515);
    lv_obj_set_size(ui->scr_login_btn_login, 400, 60);
    ui->scr_login_btn_login_label = lv_label_create(ui->scr_login_btn_login);
    lv_label_set_text(ui->scr_login_btn_login_label, "LOGIN");
    lv_label_set_long_mode(ui->scr_login_btn_login_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->scr_login_btn_login_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->scr_login_btn_login, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->scr_login_btn_login_label, LV_PCT(100));

    //Write style for scr_login_btn_login, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->scr_login_btn_login, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scr_login_btn_login, lv_color_hex(0x2ECC71), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scr_login_btn_login, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->scr_login_btn_login, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_login_btn_login, 10, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_login_btn_login, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scr_login_btn_login, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scr_login_btn_login, &lv_font_arial_30, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scr_login_btn_login, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scr_login_btn_login, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scr_login_line_2
    ui->scr_login_line_2 = lv_line_create(ui->scr_login_cont_account);
    lv_obj_set_pos(ui->scr_login_line_2, 40, 430);
    lv_obj_set_size(ui->scr_login_line_2, 500, 1);
    static lv_point_precise_t scr_login_line_2[] = {{0, 0},{1050, 0}};
    lv_line_set_points(ui->scr_login_line_2, scr_login_line_2, 2);

    //Write style for scr_login_line_2, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_line_width(ui->scr_login_line_2, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_color(ui->scr_login_line_2, lv_color_hex(0x959595), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_opa(ui->scr_login_line_2, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_rounded(ui->scr_login_line_2, true, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scr_login_lbl_acc_status
    ui->scr_login_lbl_acc_status = lv_label_create(ui->scr_login_cont_account);
    lv_obj_set_pos(ui->scr_login_lbl_acc_status, 102, 460);
    lv_obj_set_size(ui->scr_login_lbl_acc_status, 375, 32);
    lv_label_set_text(ui->scr_login_lbl_acc_status, "Status: Waiting for login...");
    lv_label_set_long_mode(ui->scr_login_lbl_acc_status, LV_LABEL_LONG_WRAP);

    //Write style for scr_login_lbl_acc_status, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scr_login_lbl_acc_status, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_login_lbl_acc_status, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scr_login_lbl_acc_status, lv_color_hex(0xbcbcbc), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scr_login_lbl_acc_status, &lv_font_arial_20, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scr_login_lbl_acc_status, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->scr_login_lbl_acc_status, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->scr_login_lbl_acc_status, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scr_login_lbl_acc_status, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scr_login_lbl_acc_status, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scr_login_lbl_acc_status, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scr_login_lbl_acc_status, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scr_login_lbl_acc_status, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scr_login_lbl_acc_status, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_login_lbl_acc_status, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scr_login_cont_topbar
    ui->scr_login_cont_topbar = lv_obj_create(ui->scr_login_cont_root);
    lv_obj_set_pos(ui->scr_login_cont_topbar, 0, 0);
    lv_obj_set_size(ui->scr_login_cont_topbar, 1280, 90);
    lv_obj_set_scrollbar_mode(ui->scr_login_cont_topbar, LV_SCROLLBAR_MODE_OFF);

    //Write style for scr_login_cont_topbar, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scr_login_cont_topbar, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_login_cont_topbar, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scr_login_cont_topbar, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scr_login_cont_topbar, lv_color_hex(0x2B2B2B), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scr_login_cont_topbar, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scr_login_cont_topbar, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scr_login_cont_topbar, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scr_login_cont_topbar, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scr_login_cont_topbar, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_login_cont_topbar, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scr_login_lbl_tiltle
    ui->scr_login_lbl_tiltle = lv_label_create(ui->scr_login_cont_topbar);
    lv_obj_set_pos(ui->scr_login_lbl_tiltle, 450, 20);
    lv_obj_set_size(ui->scr_login_lbl_tiltle, 380, 59);
    lv_label_set_text(ui->scr_login_lbl_tiltle, "LOGIN");
    lv_label_set_long_mode(ui->scr_login_lbl_tiltle, LV_LABEL_LONG_WRAP);

    //Write style for scr_login_lbl_tiltle, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scr_login_lbl_tiltle, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_login_lbl_tiltle, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scr_login_lbl_tiltle, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scr_login_lbl_tiltle, &lv_font_Acme_Regular_50, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scr_login_lbl_tiltle, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->scr_login_lbl_tiltle, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->scr_login_lbl_tiltle, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scr_login_lbl_tiltle, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scr_login_lbl_tiltle, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scr_login_lbl_tiltle, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scr_login_lbl_tiltle, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scr_login_lbl_tiltle, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scr_login_lbl_tiltle, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_login_lbl_tiltle, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scr_login_cont_top_right
    ui->scr_login_cont_top_right = lv_obj_create(ui->scr_login_cont_topbar);
    lv_obj_set_pos(ui->scr_login_cont_top_right, 990, 0);
    lv_obj_set_size(ui->scr_login_cont_top_right, 270, 90);
    lv_obj_set_scrollbar_mode(ui->scr_login_cont_top_right, LV_SCROLLBAR_MODE_OFF);

    //Write style for scr_login_cont_top_right, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scr_login_cont_top_right, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_login_cont_top_right, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scr_login_cont_top_right, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scr_login_cont_top_right, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scr_login_cont_top_right, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scr_login_cont_top_right, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scr_login_cont_top_right, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_login_cont_top_right, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scr_login_imgbtn_back
    ui->scr_login_imgbtn_back = lv_imagebutton_create(ui->scr_login_cont_root);
    lv_obj_set_pos(ui->scr_login_imgbtn_back, 40, 14);
    lv_obj_set_size(ui->scr_login_imgbtn_back, 64, 64);
    lv_imagebutton_set_src(ui->scr_login_imgbtn_back, LV_IMAGEBUTTON_STATE_RELEASED, &_leftarrow_RGB565A8_64x64, NULL, NULL);
    ui->scr_login_imgbtn_back_label = lv_label_create(ui->scr_login_imgbtn_back);
    lv_label_set_text(ui->scr_login_imgbtn_back_label, "");
    lv_label_set_long_mode(ui->scr_login_imgbtn_back_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->scr_login_imgbtn_back_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->scr_login_imgbtn_back, 0, LV_STATE_DEFAULT);

    //Write style for scr_login_imgbtn_back, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_text_color(ui->scr_login_imgbtn_back, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scr_login_imgbtn_back, &lv_font_montserratMedium_12, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scr_login_imgbtn_back, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scr_login_imgbtn_back, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_login_imgbtn_back, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style for scr_login_imgbtn_back, Part: LV_PART_MAIN, State: LV_STATE_PRESSED.
    lv_obj_set_style_image_recolor_opa(ui->scr_login_imgbtn_back, 0, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_image_opa(ui->scr_login_imgbtn_back, 255, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_text_color(ui->scr_login_imgbtn_back, lv_color_hex(0xFF33FF), LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_text_font(ui->scr_login_imgbtn_back, &lv_font_montserratMedium_12, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_text_opa(ui->scr_login_imgbtn_back, 255, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_shadow_width(ui->scr_login_imgbtn_back, 0, LV_PART_MAIN|LV_STATE_PRESSED);

    //Write style for scr_login_imgbtn_back, Part: LV_PART_MAIN, State: LV_STATE_CHECKED.
    lv_obj_set_style_image_recolor_opa(ui->scr_login_imgbtn_back, 0, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_image_opa(ui->scr_login_imgbtn_back, 255, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_text_color(ui->scr_login_imgbtn_back, lv_color_hex(0xFF33FF), LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_text_font(ui->scr_login_imgbtn_back, &lv_font_montserratMedium_12, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_text_opa(ui->scr_login_imgbtn_back, 255, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_shadow_width(ui->scr_login_imgbtn_back, 0, LV_PART_MAIN|LV_STATE_CHECKED);

    //Write style for scr_login_imgbtn_back, Part: LV_PART_MAIN, State: LV_IMAGEBUTTON_STATE_RELEASED.
    lv_obj_set_style_image_recolor_opa(ui->scr_login_imgbtn_back, 0, LV_PART_MAIN|LV_IMAGEBUTTON_STATE_RELEASED);
    lv_obj_set_style_image_opa(ui->scr_login_imgbtn_back, 255, LV_PART_MAIN|LV_IMAGEBUTTON_STATE_RELEASED);

    //The custom code of scr_login.


    //Update current screen layout.
    lv_obj_update_layout(ui->scr_login);

}
