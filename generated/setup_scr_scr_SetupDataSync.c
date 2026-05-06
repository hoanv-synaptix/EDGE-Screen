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



void setup_scr_scr_SetupDataSync(lv_ui *ui)
{
    //Write codes scr_SetupDataSync
    ui->scr_SetupDataSync = lv_obj_create(NULL);
    lv_obj_set_size(ui->scr_SetupDataSync, 1280, 720);
    lv_obj_set_scrollbar_mode(ui->scr_SetupDataSync, LV_SCROLLBAR_MODE_OFF);

    //Write style for scr_SetupDataSync, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->scr_SetupDataSync, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scr_SetupDataSync, lv_color_hex(0x121212), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scr_SetupDataSync, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scr_SetupDataSync_cont_root
    ui->scr_SetupDataSync_cont_root = lv_obj_create(ui->scr_SetupDataSync);
    lv_obj_set_pos(ui->scr_SetupDataSync_cont_root, 0, 0);
    lv_obj_set_size(ui->scr_SetupDataSync_cont_root, 1280, 720);
    lv_obj_set_scrollbar_mode(ui->scr_SetupDataSync_cont_root, LV_SCROLLBAR_MODE_OFF);

    //Write style for scr_SetupDataSync_cont_root, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scr_SetupDataSync_cont_root, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_SetupDataSync_cont_root, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scr_SetupDataSync_cont_root, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scr_SetupDataSync_cont_root, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scr_SetupDataSync_cont_root, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scr_SetupDataSync_cont_root, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scr_SetupDataSync_cont_root, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_SetupDataSync_cont_root, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scr_SetupDataSync_cont_topbar
    ui->scr_SetupDataSync_cont_topbar = lv_obj_create(ui->scr_SetupDataSync_cont_root);
    lv_obj_set_pos(ui->scr_SetupDataSync_cont_topbar, 0, 0);
    lv_obj_set_size(ui->scr_SetupDataSync_cont_topbar, 1280, 90);
    lv_obj_set_scrollbar_mode(ui->scr_SetupDataSync_cont_topbar, LV_SCROLLBAR_MODE_OFF);

    //Write style for scr_SetupDataSync_cont_topbar, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scr_SetupDataSync_cont_topbar, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_SetupDataSync_cont_topbar, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scr_SetupDataSync_cont_topbar, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scr_SetupDataSync_cont_topbar, lv_color_hex(0x2B2B2B), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scr_SetupDataSync_cont_topbar, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scr_SetupDataSync_cont_topbar, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scr_SetupDataSync_cont_topbar, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scr_SetupDataSync_cont_topbar, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scr_SetupDataSync_cont_topbar, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_SetupDataSync_cont_topbar, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scr_SetupDataSync_lbl_tiltle
    ui->scr_SetupDataSync_lbl_tiltle = lv_label_create(ui->scr_SetupDataSync_cont_topbar);
    lv_obj_set_pos(ui->scr_SetupDataSync_lbl_tiltle, 472, 20);
    lv_obj_set_size(ui->scr_SetupDataSync_lbl_tiltle, 336, 59);
    lv_label_set_text(ui->scr_SetupDataSync_lbl_tiltle, "DATA SYNC");
    lv_label_set_long_mode(ui->scr_SetupDataSync_lbl_tiltle, LV_LABEL_LONG_WRAP);

    //Write style for scr_SetupDataSync_lbl_tiltle, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scr_SetupDataSync_lbl_tiltle, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_SetupDataSync_lbl_tiltle, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scr_SetupDataSync_lbl_tiltle, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scr_SetupDataSync_lbl_tiltle, &lv_font_NotoSans_Bold_50, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scr_SetupDataSync_lbl_tiltle, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->scr_SetupDataSync_lbl_tiltle, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->scr_SetupDataSync_lbl_tiltle, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scr_SetupDataSync_lbl_tiltle, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scr_SetupDataSync_lbl_tiltle, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scr_SetupDataSync_lbl_tiltle, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scr_SetupDataSync_lbl_tiltle, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scr_SetupDataSync_lbl_tiltle, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scr_SetupDataSync_lbl_tiltle, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_SetupDataSync_lbl_tiltle, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scr_SetupDataSync_lbl_device
    ui->scr_SetupDataSync_lbl_device = lv_label_create(ui->scr_SetupDataSync_cont_topbar);
    lv_obj_set_pos(ui->scr_SetupDataSync_lbl_device, 940, 39);
    lv_obj_set_size(ui->scr_SetupDataSync_lbl_device, 132, 32);
    lv_label_set_text(ui->scr_SetupDataSync_lbl_device, "EDGE-01");
    lv_label_set_long_mode(ui->scr_SetupDataSync_lbl_device, LV_LABEL_LONG_WRAP);

    //Write style for scr_SetupDataSync_lbl_device, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scr_SetupDataSync_lbl_device, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_SetupDataSync_lbl_device, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scr_SetupDataSync_lbl_device, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scr_SetupDataSync_lbl_device, &lv_font_NotoSans_Bold_30, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scr_SetupDataSync_lbl_device, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->scr_SetupDataSync_lbl_device, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->scr_SetupDataSync_lbl_device, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scr_SetupDataSync_lbl_device, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scr_SetupDataSync_lbl_device, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scr_SetupDataSync_lbl_device, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scr_SetupDataSync_lbl_device, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scr_SetupDataSync_lbl_device, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scr_SetupDataSync_lbl_device, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_SetupDataSync_lbl_device, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scr_SetupDataSync_btn_online
    ui->scr_SetupDataSync_btn_online = lv_button_create(ui->scr_SetupDataSync_cont_topbar);
    lv_obj_set_pos(ui->scr_SetupDataSync_btn_online, 1080, 30);
    lv_obj_set_size(ui->scr_SetupDataSync_btn_online, 160, 50);
    ui->scr_SetupDataSync_btn_online_label = lv_label_create(ui->scr_SetupDataSync_btn_online);
    lv_label_set_text(ui->scr_SetupDataSync_btn_online_label, "ONLINE");
    lv_label_set_long_mode(ui->scr_SetupDataSync_btn_online_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->scr_SetupDataSync_btn_online_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->scr_SetupDataSync_btn_online, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->scr_SetupDataSync_btn_online_label, LV_PCT(100));

    //Write style for scr_SetupDataSync_btn_online, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->scr_SetupDataSync_btn_online, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scr_SetupDataSync_btn_online, lv_color_hex(0x2ecc71), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scr_SetupDataSync_btn_online, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->scr_SetupDataSync_btn_online, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_SetupDataSync_btn_online, 18, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_SetupDataSync_btn_online, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scr_SetupDataSync_btn_online, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scr_SetupDataSync_btn_online, &lv_font_NotoSans_Bold_25, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scr_SetupDataSync_btn_online, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scr_SetupDataSync_btn_online, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scr_SetupDataSync_cont_body
    ui->scr_SetupDataSync_cont_body = lv_obj_create(ui->scr_SetupDataSync_cont_root);
    lv_obj_set_pos(ui->scr_SetupDataSync_cont_body, 0, 90);
    lv_obj_set_size(ui->scr_SetupDataSync_cont_body, 1280, 630);
    lv_obj_set_scrollbar_mode(ui->scr_SetupDataSync_cont_body, LV_SCROLLBAR_MODE_OFF);

    //Write style for scr_SetupDataSync_cont_body, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scr_SetupDataSync_cont_body, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_SetupDataSync_cont_body, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scr_SetupDataSync_cont_body, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scr_SetupDataSync_cont_body, lv_color_hex(0x1a1a1a), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scr_SetupDataSync_cont_body, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scr_SetupDataSync_cont_body, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scr_SetupDataSync_cont_body, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scr_SetupDataSync_cont_body, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scr_SetupDataSync_cont_body, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_SetupDataSync_cont_body, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scr_SetupDataSync_cont_sync
    ui->scr_SetupDataSync_cont_sync = lv_obj_create(ui->scr_SetupDataSync_cont_body);
    lv_obj_set_pos(ui->scr_SetupDataSync_cont_sync, 90, 0);
    lv_obj_set_size(ui->scr_SetupDataSync_cont_sync, 1100, 630);
    lv_obj_set_scrollbar_mode(ui->scr_SetupDataSync_cont_sync, LV_SCROLLBAR_MODE_OFF);

    //Write style for scr_SetupDataSync_cont_sync, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scr_SetupDataSync_cont_sync, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_SetupDataSync_cont_sync, 20, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scr_SetupDataSync_cont_sync, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scr_SetupDataSync_cont_sync, lv_color_hex(0x1a1a1a), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scr_SetupDataSync_cont_sync, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scr_SetupDataSync_cont_sync, 24, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scr_SetupDataSync_cont_sync, 24, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scr_SetupDataSync_cont_sync, 24, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scr_SetupDataSync_cont_sync, 24, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_SetupDataSync_cont_sync, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scr_SetupDataSync_cont_header
    ui->scr_SetupDataSync_cont_header = lv_obj_create(ui->scr_SetupDataSync_cont_sync);
    lv_obj_set_pos(ui->scr_SetupDataSync_cont_header, 0, 0);
    lv_obj_set_size(ui->scr_SetupDataSync_cont_header, 1050, 80);
    lv_obj_set_scrollbar_mode(ui->scr_SetupDataSync_cont_header, LV_SCROLLBAR_MODE_OFF);

    //Write style for scr_SetupDataSync_cont_header, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scr_SetupDataSync_cont_header, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_SetupDataSync_cont_header, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scr_SetupDataSync_cont_header, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scr_SetupDataSync_cont_header, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scr_SetupDataSync_cont_header, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scr_SetupDataSync_cont_header, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scr_SetupDataSync_cont_header, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_SetupDataSync_cont_header, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scr_SetupDataSync_lbl_header
    ui->scr_SetupDataSync_lbl_header = lv_label_create(ui->scr_SetupDataSync_cont_header);
    lv_obj_set_pos(ui->scr_SetupDataSync_lbl_header, 76, 14);
    lv_obj_set_size(ui->scr_SetupDataSync_lbl_header, 461, 42);
    lv_label_set_text(ui->scr_SetupDataSync_lbl_header, "Data Sync");
    lv_label_set_long_mode(ui->scr_SetupDataSync_lbl_header, LV_LABEL_LONG_WRAP);

    //Write style for scr_SetupDataSync_lbl_header, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scr_SetupDataSync_lbl_header, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_SetupDataSync_lbl_header, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scr_SetupDataSync_lbl_header, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scr_SetupDataSync_lbl_header, &lv_font_NotoSans_Bold_32, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scr_SetupDataSync_lbl_header, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->scr_SetupDataSync_lbl_header, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->scr_SetupDataSync_lbl_header, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scr_SetupDataSync_lbl_header, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scr_SetupDataSync_lbl_header, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scr_SetupDataSync_lbl_header, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scr_SetupDataSync_lbl_header, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scr_SetupDataSync_lbl_header, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scr_SetupDataSync_lbl_header, 30, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_SetupDataSync_lbl_header, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scr_SetupDataSync_img_sync
    ui->scr_SetupDataSync_img_sync = lv_image_create(ui->scr_SetupDataSync_cont_header);
    lv_obj_set_pos(ui->scr_SetupDataSync_img_sync, 13, 0);
    lv_obj_set_size(ui->scr_SetupDataSync_img_sync, 64, 64);
    lv_obj_add_flag(ui->scr_SetupDataSync_img_sync, LV_OBJ_FLAG_CLICKABLE);
    lv_image_set_src(ui->scr_SetupDataSync_img_sync, &_sync_RGB565A8_64x64);
    lv_image_set_pivot(ui->scr_SetupDataSync_img_sync, 50,50);
    lv_image_set_rotation(ui->scr_SetupDataSync_img_sync, 0);

    //Write style for scr_SetupDataSync_img_sync, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_image_recolor_opa(ui->scr_SetupDataSync_img_sync, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_image_opa(ui->scr_SetupDataSync_img_sync, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scr_SetupDataSync_cont_last_row
    ui->scr_SetupDataSync_cont_last_row = lv_obj_create(ui->scr_SetupDataSync_cont_sync);
    lv_obj_set_pos(ui->scr_SetupDataSync_cont_last_row, 0, 77);
    lv_obj_set_size(ui->scr_SetupDataSync_cont_last_row, 1050, 90);
    lv_obj_set_scrollbar_mode(ui->scr_SetupDataSync_cont_last_row, LV_SCROLLBAR_MODE_OFF);

    //Write style for scr_SetupDataSync_cont_last_row, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scr_SetupDataSync_cont_last_row, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_SetupDataSync_cont_last_row, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scr_SetupDataSync_cont_last_row, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scr_SetupDataSync_cont_last_row, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scr_SetupDataSync_cont_last_row, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scr_SetupDataSync_cont_last_row, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scr_SetupDataSync_cont_last_row, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_SetupDataSync_cont_last_row, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scr_SetupDataSync_lbl_last_tiltle
    ui->scr_SetupDataSync_lbl_last_tiltle = lv_label_create(ui->scr_SetupDataSync_cont_last_row);
    lv_obj_set_pos(ui->scr_SetupDataSync_lbl_last_tiltle, 130, 28);
    lv_obj_set_size(ui->scr_SetupDataSync_lbl_last_tiltle, 229, 43);
    lv_label_set_text(ui->scr_SetupDataSync_lbl_last_tiltle, "Last sync:");
    lv_label_set_long_mode(ui->scr_SetupDataSync_lbl_last_tiltle, LV_LABEL_LONG_WRAP);

    //Write style for scr_SetupDataSync_lbl_last_tiltle, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scr_SetupDataSync_lbl_last_tiltle, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_SetupDataSync_lbl_last_tiltle, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scr_SetupDataSync_lbl_last_tiltle, lv_color_hex(0xbdbdbd), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scr_SetupDataSync_lbl_last_tiltle, &lv_font_NotoSans_Bold_28, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scr_SetupDataSync_lbl_last_tiltle, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->scr_SetupDataSync_lbl_last_tiltle, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->scr_SetupDataSync_lbl_last_tiltle, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scr_SetupDataSync_lbl_last_tiltle, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scr_SetupDataSync_lbl_last_tiltle, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scr_SetupDataSync_lbl_last_tiltle, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scr_SetupDataSync_lbl_last_tiltle, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scr_SetupDataSync_lbl_last_tiltle, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scr_SetupDataSync_lbl_last_tiltle, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_SetupDataSync_lbl_last_tiltle, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scr_SetupDataSync_lbl_last_value
    ui->scr_SetupDataSync_lbl_last_value = lv_label_create(ui->scr_SetupDataSync_cont_last_row);
    lv_obj_set_pos(ui->scr_SetupDataSync_lbl_last_value, 694, 27);
    lv_obj_set_size(ui->scr_SetupDataSync_lbl_last_value, 295, 32);
    lv_label_set_text(ui->scr_SetupDataSync_lbl_last_value, "10:15     03/03/2026");
    lv_label_set_long_mode(ui->scr_SetupDataSync_lbl_last_value, LV_LABEL_LONG_WRAP);

    //Write style for scr_SetupDataSync_lbl_last_value, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scr_SetupDataSync_lbl_last_value, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_SetupDataSync_lbl_last_value, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scr_SetupDataSync_lbl_last_value, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scr_SetupDataSync_lbl_last_value, &lv_font_NotoSans_Regular_30, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scr_SetupDataSync_lbl_last_value, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->scr_SetupDataSync_lbl_last_value, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->scr_SetupDataSync_lbl_last_value, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scr_SetupDataSync_lbl_last_value, LV_TEXT_ALIGN_RIGHT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scr_SetupDataSync_lbl_last_value, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scr_SetupDataSync_lbl_last_value, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scr_SetupDataSync_lbl_last_value, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scr_SetupDataSync_lbl_last_value, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scr_SetupDataSync_lbl_last_value, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_SetupDataSync_lbl_last_value, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scr_SetupDataSync_img_lastsync
    ui->scr_SetupDataSync_img_lastsync = lv_image_create(ui->scr_SetupDataSync_cont_last_row);
    lv_obj_set_pos(ui->scr_SetupDataSync_img_lastsync, 41, 20);
    lv_obj_set_size(ui->scr_SetupDataSync_img_lastsync, 48, 48);
    lv_obj_add_flag(ui->scr_SetupDataSync_img_lastsync, LV_OBJ_FLAG_CLICKABLE);
    lv_image_set_src(ui->scr_SetupDataSync_img_lastsync, &_lasttime_RGB565A8_48x48);
    lv_image_set_pivot(ui->scr_SetupDataSync_img_lastsync, 50,50);
    lv_image_set_rotation(ui->scr_SetupDataSync_img_lastsync, 0);

    //Write style for scr_SetupDataSync_img_lastsync, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_image_recolor_opa(ui->scr_SetupDataSync_img_lastsync, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_image_opa(ui->scr_SetupDataSync_img_lastsync, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scr_SetupDataSync_line_8
    ui->scr_SetupDataSync_line_8 = lv_line_create(ui->scr_SetupDataSync_cont_sync);
    lv_obj_set_pos(ui->scr_SetupDataSync_line_8, 0, 80);
    lv_obj_set_size(ui->scr_SetupDataSync_line_8, 1050, 2);
    static lv_point_precise_t scr_SetupDataSync_line_8[] = {{0, 0},{1050, 0}};
    lv_line_set_points(ui->scr_SetupDataSync_line_8, scr_SetupDataSync_line_8, 2);

    //Write style for scr_SetupDataSync_line_8, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_line_width(ui->scr_SetupDataSync_line_8, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_color(ui->scr_SetupDataSync_line_8, lv_color_hex(0x2b2b2b), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_opa(ui->scr_SetupDataSync_line_8, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_rounded(ui->scr_SetupDataSync_line_8, true, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scr_SetupDataSync_line_7
    ui->scr_SetupDataSync_line_7 = lv_line_create(ui->scr_SetupDataSync_cont_sync);
    lv_obj_set_pos(ui->scr_SetupDataSync_line_7, 0, 270);
    lv_obj_set_size(ui->scr_SetupDataSync_line_7, 1050, 2);
    static lv_point_precise_t scr_SetupDataSync_line_7[] = {{0, 0},{1050, 0}};
    lv_line_set_points(ui->scr_SetupDataSync_line_7, scr_SetupDataSync_line_7, 2);

    //Write style for scr_SetupDataSync_line_7, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_line_width(ui->scr_SetupDataSync_line_7, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_color(ui->scr_SetupDataSync_line_7, lv_color_hex(0x2b2b2b), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_opa(ui->scr_SetupDataSync_line_7, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_rounded(ui->scr_SetupDataSync_line_7, true, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scr_SetupDataSync_line_6
    ui->scr_SetupDataSync_line_6 = lv_line_create(ui->scr_SetupDataSync_cont_sync);
    lv_obj_set_pos(ui->scr_SetupDataSync_line_6, 0, 365);
    lv_obj_set_size(ui->scr_SetupDataSync_line_6, 1050, 2);
    static lv_point_precise_t scr_SetupDataSync_line_6[] = {{0, 0},{1050, 0}};
    lv_line_set_points(ui->scr_SetupDataSync_line_6, scr_SetupDataSync_line_6, 2);

    //Write style for scr_SetupDataSync_line_6, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_line_width(ui->scr_SetupDataSync_line_6, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_color(ui->scr_SetupDataSync_line_6, lv_color_hex(0x2b2b2b), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_opa(ui->scr_SetupDataSync_line_6, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_rounded(ui->scr_SetupDataSync_line_6, true, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scr_SetupDataSync_line_5
    ui->scr_SetupDataSync_line_5 = lv_line_create(ui->scr_SetupDataSync_cont_sync);
    lv_obj_set_pos(ui->scr_SetupDataSync_line_5, 0, 460);
    lv_obj_set_size(ui->scr_SetupDataSync_line_5, 1050, 2);
    static lv_point_precise_t scr_SetupDataSync_line_5[] = {{0, 0},{1050, 0}};
    lv_line_set_points(ui->scr_SetupDataSync_line_5, scr_SetupDataSync_line_5, 2);

    //Write style for scr_SetupDataSync_line_5, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_line_width(ui->scr_SetupDataSync_line_5, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_color(ui->scr_SetupDataSync_line_5, lv_color_hex(0x2b2b2b), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_opa(ui->scr_SetupDataSync_line_5, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_rounded(ui->scr_SetupDataSync_line_5, true, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scr_SetupDataSync_line_9
    ui->scr_SetupDataSync_line_9 = lv_line_create(ui->scr_SetupDataSync_cont_sync);
    lv_obj_set_pos(ui->scr_SetupDataSync_line_9, 0, 175);
    lv_obj_set_size(ui->scr_SetupDataSync_line_9, 1050, 2);
    static lv_point_precise_t scr_SetupDataSync_line_9[] = {{0, 0},{1050, 0}};
    lv_line_set_points(ui->scr_SetupDataSync_line_9, scr_SetupDataSync_line_9, 2);

    //Write style for scr_SetupDataSync_line_9, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_line_width(ui->scr_SetupDataSync_line_9, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_color(ui->scr_SetupDataSync_line_9, lv_color_hex(0x2b2b2b), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_opa(ui->scr_SetupDataSync_line_9, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_rounded(ui->scr_SetupDataSync_line_9, true, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scr_SetupDataSync_cont_btn_row
    ui->scr_SetupDataSync_cont_btn_row = lv_obj_create(ui->scr_SetupDataSync_cont_sync);
    lv_obj_set_pos(ui->scr_SetupDataSync_cont_btn_row, 0, 490);
    lv_obj_set_size(ui->scr_SetupDataSync_cont_btn_row, 1050, 90);
    lv_obj_set_scrollbar_mode(ui->scr_SetupDataSync_cont_btn_row, LV_SCROLLBAR_MODE_OFF);

    //Write style for scr_SetupDataSync_cont_btn_row, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scr_SetupDataSync_cont_btn_row, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_SetupDataSync_cont_btn_row, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scr_SetupDataSync_cont_btn_row, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scr_SetupDataSync_cont_btn_row, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scr_SetupDataSync_cont_btn_row, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scr_SetupDataSync_cont_btn_row, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scr_SetupDataSync_cont_btn_row, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_SetupDataSync_cont_btn_row, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scr_SetupDataSync_btn_sync
    ui->scr_SetupDataSync_btn_sync = lv_button_create(ui->scr_SetupDataSync_cont_btn_row);
    lv_obj_set_pos(ui->scr_SetupDataSync_btn_sync, 14, 2);
    lv_obj_set_size(ui->scr_SetupDataSync_btn_sync, 480, 80);
    ui->scr_SetupDataSync_btn_sync_label = lv_label_create(ui->scr_SetupDataSync_btn_sync);
    lv_label_set_text(ui->scr_SetupDataSync_btn_sync_label, "SYNC NOW");
    lv_label_set_long_mode(ui->scr_SetupDataSync_btn_sync_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->scr_SetupDataSync_btn_sync_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->scr_SetupDataSync_btn_sync, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->scr_SetupDataSync_btn_sync_label, LV_PCT(100));

    //Write style for scr_SetupDataSync_btn_sync, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->scr_SetupDataSync_btn_sync, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scr_SetupDataSync_btn_sync, lv_color_hex(0x2D9CDB), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scr_SetupDataSync_btn_sync, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->scr_SetupDataSync_btn_sync, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_SetupDataSync_btn_sync, 14, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_SetupDataSync_btn_sync, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scr_SetupDataSync_btn_sync, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scr_SetupDataSync_btn_sync, &lv_font_NotoSans_Bold_30, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scr_SetupDataSync_btn_sync, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scr_SetupDataSync_btn_sync, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scr_SetupDataSync_btn_save
    ui->scr_SetupDataSync_btn_save = lv_button_create(ui->scr_SetupDataSync_cont_btn_row);
    lv_obj_set_pos(ui->scr_SetupDataSync_btn_save, 553, 2);
    lv_obj_set_size(ui->scr_SetupDataSync_btn_save, 480, 80);
    ui->scr_SetupDataSync_btn_save_label = lv_label_create(ui->scr_SetupDataSync_btn_save);
    lv_label_set_text(ui->scr_SetupDataSync_btn_save_label, "SAVE");
    lv_label_set_long_mode(ui->scr_SetupDataSync_btn_save_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->scr_SetupDataSync_btn_save_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->scr_SetupDataSync_btn_save, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->scr_SetupDataSync_btn_save_label, LV_PCT(100));

    //Write style for scr_SetupDataSync_btn_save, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->scr_SetupDataSync_btn_save, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scr_SetupDataSync_btn_save, lv_color_hex(0x2B2B2B), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scr_SetupDataSync_btn_save, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->scr_SetupDataSync_btn_save, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_SetupDataSync_btn_save, 14, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_SetupDataSync_btn_save, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scr_SetupDataSync_btn_save, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scr_SetupDataSync_btn_save, &lv_font_NotoSans_Bold_30, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scr_SetupDataSync_btn_save, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scr_SetupDataSync_btn_save, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scr_SetupDataSync_cont_ver_row
    ui->scr_SetupDataSync_cont_ver_row = lv_obj_create(ui->scr_SetupDataSync_cont_sync);
    lv_obj_set_pos(ui->scr_SetupDataSync_cont_ver_row, 0, 177);
    lv_obj_set_size(ui->scr_SetupDataSync_cont_ver_row, 1050, 90);
    lv_obj_set_scrollbar_mode(ui->scr_SetupDataSync_cont_ver_row, LV_SCROLLBAR_MODE_OFF);

    //Write style for scr_SetupDataSync_cont_ver_row, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scr_SetupDataSync_cont_ver_row, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_SetupDataSync_cont_ver_row, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scr_SetupDataSync_cont_ver_row, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scr_SetupDataSync_cont_ver_row, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scr_SetupDataSync_cont_ver_row, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scr_SetupDataSync_cont_ver_row, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scr_SetupDataSync_cont_ver_row, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_SetupDataSync_cont_ver_row, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scr_SetupDataSync_lbl_ver_tiltle
    ui->scr_SetupDataSync_lbl_ver_tiltle = lv_label_create(ui->scr_SetupDataSync_cont_ver_row);
    lv_obj_set_pos(ui->scr_SetupDataSync_lbl_ver_tiltle, 130, 28);
    lv_obj_set_size(ui->scr_SetupDataSync_lbl_ver_tiltle, 373, 32);
    lv_label_set_text(ui->scr_SetupDataSync_lbl_ver_tiltle, "Config version:");
    lv_label_set_long_mode(ui->scr_SetupDataSync_lbl_ver_tiltle, LV_LABEL_LONG_WRAP);

    //Write style for scr_SetupDataSync_lbl_ver_tiltle, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scr_SetupDataSync_lbl_ver_tiltle, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_SetupDataSync_lbl_ver_tiltle, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scr_SetupDataSync_lbl_ver_tiltle, lv_color_hex(0xbdbdbd), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scr_SetupDataSync_lbl_ver_tiltle, &lv_font_NotoSans_Bold_28, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scr_SetupDataSync_lbl_ver_tiltle, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->scr_SetupDataSync_lbl_ver_tiltle, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->scr_SetupDataSync_lbl_ver_tiltle, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scr_SetupDataSync_lbl_ver_tiltle, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scr_SetupDataSync_lbl_ver_tiltle, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scr_SetupDataSync_lbl_ver_tiltle, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scr_SetupDataSync_lbl_ver_tiltle, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scr_SetupDataSync_lbl_ver_tiltle, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scr_SetupDataSync_lbl_ver_tiltle, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_SetupDataSync_lbl_ver_tiltle, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scr_SetupDataSync_lbl_ver_value
    ui->scr_SetupDataSync_lbl_ver_value = lv_label_create(ui->scr_SetupDataSync_cont_ver_row);
    lv_obj_set_pos(ui->scr_SetupDataSync_lbl_ver_value, 876, 28);
    lv_obj_set_size(ui->scr_SetupDataSync_lbl_ver_value, 114, 32);
    lv_label_set_text(ui->scr_SetupDataSync_lbl_ver_value, "v1.00");
    lv_label_set_long_mode(ui->scr_SetupDataSync_lbl_ver_value, LV_LABEL_LONG_WRAP);

    //Write style for scr_SetupDataSync_lbl_ver_value, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scr_SetupDataSync_lbl_ver_value, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_SetupDataSync_lbl_ver_value, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scr_SetupDataSync_lbl_ver_value, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scr_SetupDataSync_lbl_ver_value, &lv_font_NotoSans_Regular_30, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scr_SetupDataSync_lbl_ver_value, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->scr_SetupDataSync_lbl_ver_value, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->scr_SetupDataSync_lbl_ver_value, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scr_SetupDataSync_lbl_ver_value, LV_TEXT_ALIGN_RIGHT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scr_SetupDataSync_lbl_ver_value, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scr_SetupDataSync_lbl_ver_value, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scr_SetupDataSync_lbl_ver_value, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scr_SetupDataSync_lbl_ver_value, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scr_SetupDataSync_lbl_ver_value, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_SetupDataSync_lbl_ver_value, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scr_SetupDataSync_img_ver
    ui->scr_SetupDataSync_img_ver = lv_image_create(ui->scr_SetupDataSync_cont_ver_row);
    lv_obj_set_pos(ui->scr_SetupDataSync_img_ver, 41, 20);
    lv_obj_set_size(ui->scr_SetupDataSync_img_ver, 48, 48);
    lv_obj_add_flag(ui->scr_SetupDataSync_img_ver, LV_OBJ_FLAG_CLICKABLE);
    lv_image_set_src(ui->scr_SetupDataSync_img_ver, &_configuration_RGB565A8_48x48);
    lv_image_set_pivot(ui->scr_SetupDataSync_img_ver, 50,50);
    lv_image_set_rotation(ui->scr_SetupDataSync_img_ver, 0);

    //Write style for scr_SetupDataSync_img_ver, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_image_recolor_opa(ui->scr_SetupDataSync_img_ver, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_image_opa(ui->scr_SetupDataSync_img_ver, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scr_SetupDataSync_cont_auto_row
    ui->scr_SetupDataSync_cont_auto_row = lv_obj_create(ui->scr_SetupDataSync_cont_sync);
    lv_obj_set_pos(ui->scr_SetupDataSync_cont_auto_row, 0, 277);
    lv_obj_set_size(ui->scr_SetupDataSync_cont_auto_row, 1050, 90);
    lv_obj_set_scrollbar_mode(ui->scr_SetupDataSync_cont_auto_row, LV_SCROLLBAR_MODE_OFF);

    //Write style for scr_SetupDataSync_cont_auto_row, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scr_SetupDataSync_cont_auto_row, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_SetupDataSync_cont_auto_row, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scr_SetupDataSync_cont_auto_row, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scr_SetupDataSync_cont_auto_row, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scr_SetupDataSync_cont_auto_row, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scr_SetupDataSync_cont_auto_row, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scr_SetupDataSync_cont_auto_row, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_SetupDataSync_cont_auto_row, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scr_SetupDataSync_lbl_time_auto_tiltle
    ui->scr_SetupDataSync_lbl_time_auto_tiltle = lv_label_create(ui->scr_SetupDataSync_cont_auto_row);
    lv_obj_set_pos(ui->scr_SetupDataSync_lbl_time_auto_tiltle, 131, 25);
    lv_obj_set_size(ui->scr_SetupDataSync_lbl_time_auto_tiltle, 404, 37);
    lv_label_set_text(ui->scr_SetupDataSync_lbl_time_auto_tiltle, "Time auto sync:");
    lv_label_set_long_mode(ui->scr_SetupDataSync_lbl_time_auto_tiltle, LV_LABEL_LONG_WRAP);

    //Write style for scr_SetupDataSync_lbl_time_auto_tiltle, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scr_SetupDataSync_lbl_time_auto_tiltle, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_SetupDataSync_lbl_time_auto_tiltle, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scr_SetupDataSync_lbl_time_auto_tiltle, lv_color_hex(0xbdbdbd), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scr_SetupDataSync_lbl_time_auto_tiltle, &lv_font_NotoSans_Bold_28, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scr_SetupDataSync_lbl_time_auto_tiltle, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->scr_SetupDataSync_lbl_time_auto_tiltle, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->scr_SetupDataSync_lbl_time_auto_tiltle, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scr_SetupDataSync_lbl_time_auto_tiltle, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scr_SetupDataSync_lbl_time_auto_tiltle, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scr_SetupDataSync_lbl_time_auto_tiltle, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scr_SetupDataSync_lbl_time_auto_tiltle, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scr_SetupDataSync_lbl_time_auto_tiltle, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scr_SetupDataSync_lbl_time_auto_tiltle, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_SetupDataSync_lbl_time_auto_tiltle, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scr_SetupDataSync_img_auto
    ui->scr_SetupDataSync_img_auto = lv_image_create(ui->scr_SetupDataSync_cont_auto_row);
    lv_obj_set_pos(ui->scr_SetupDataSync_img_auto, 40, 17);
    lv_obj_set_size(ui->scr_SetupDataSync_img_auto, 48, 48);
    lv_obj_add_flag(ui->scr_SetupDataSync_img_auto, LV_OBJ_FLAG_CLICKABLE);
    lv_image_set_src(ui->scr_SetupDataSync_img_auto, &_clock_RGB565A8_48x48);
    lv_image_set_pivot(ui->scr_SetupDataSync_img_auto, 50,50);
    lv_image_set_rotation(ui->scr_SetupDataSync_img_auto, 0);

    //Write style for scr_SetupDataSync_img_auto, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_image_recolor_opa(ui->scr_SetupDataSync_img_auto, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_image_opa(ui->scr_SetupDataSync_img_auto, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scr_SetupDataSync_ddlist_time_auto_value
    ui->scr_SetupDataSync_ddlist_time_auto_value = lv_dropdown_create(ui->scr_SetupDataSync_cont_auto_row);
    lv_obj_set_pos(ui->scr_SetupDataSync_ddlist_time_auto_value, 688, 16);
    lv_obj_set_size(ui->scr_SetupDataSync_ddlist_time_auto_value, 303, 50);
    lv_dropdown_set_options(ui->scr_SetupDataSync_ddlist_time_auto_value, "30 sec.\n60 sec.\n90 sec.\n120 sec.");

    //Write style for scr_SetupDataSync_ddlist_time_auto_value, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_text_color(ui->scr_SetupDataSync_ddlist_time_auto_value, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scr_SetupDataSync_ddlist_time_auto_value, &lv_font_NotoSans_Regular_30, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scr_SetupDataSync_ddlist_time_auto_value, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->scr_SetupDataSync_ddlist_time_auto_value, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scr_SetupDataSync_ddlist_time_auto_value, 8, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scr_SetupDataSync_ddlist_time_auto_value, 20, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scr_SetupDataSync_ddlist_time_auto_value, 20, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_SetupDataSync_ddlist_time_auto_value, 10, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scr_SetupDataSync_ddlist_time_auto_value, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scr_SetupDataSync_ddlist_time_auto_value, lv_color_hex(0x414040), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scr_SetupDataSync_ddlist_time_auto_value, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_SetupDataSync_ddlist_time_auto_value, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style for scr_SetupDataSync_ddlist_time_auto_value, Part: LV_PART_MAIN, State: LV_STATE_CHECKED.
    lv_obj_set_style_text_color(ui->scr_SetupDataSync_ddlist_time_auto_value, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_text_font(ui->scr_SetupDataSync_ddlist_time_auto_value, &lv_font_NotoSans_Regular_30, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_text_opa(ui->scr_SetupDataSync_ddlist_time_auto_value, 255, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_border_width(ui->scr_SetupDataSync_ddlist_time_auto_value, 1, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_border_opa(ui->scr_SetupDataSync_ddlist_time_auto_value, 255, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_border_color(ui->scr_SetupDataSync_ddlist_time_auto_value, lv_color_hex(0xe1e6ee), LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_border_side(ui->scr_SetupDataSync_ddlist_time_auto_value, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_pad_top(ui->scr_SetupDataSync_ddlist_time_auto_value, 8, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_pad_left(ui->scr_SetupDataSync_ddlist_time_auto_value, 20, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_pad_right(ui->scr_SetupDataSync_ddlist_time_auto_value, 6, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_radius(ui->scr_SetupDataSync_ddlist_time_auto_value, 3, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_bg_opa(ui->scr_SetupDataSync_ddlist_time_auto_value, 255, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_bg_color(ui->scr_SetupDataSync_ddlist_time_auto_value, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_bg_grad_dir(ui->scr_SetupDataSync_ddlist_time_auto_value, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_shadow_width(ui->scr_SetupDataSync_ddlist_time_auto_value, 0, LV_PART_MAIN|LV_STATE_CHECKED);

    //Write style for scr_SetupDataSync_ddlist_time_auto_value, Part: LV_PART_MAIN, State: LV_STATE_FOCUSED.
    lv_obj_set_style_text_color(ui->scr_SetupDataSync_ddlist_time_auto_value, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_text_font(ui->scr_SetupDataSync_ddlist_time_auto_value, &lv_font_NotoSans_Regular_30, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_text_opa(ui->scr_SetupDataSync_ddlist_time_auto_value, 255, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_border_width(ui->scr_SetupDataSync_ddlist_time_auto_value, 1, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_border_opa(ui->scr_SetupDataSync_ddlist_time_auto_value, 255, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_border_color(ui->scr_SetupDataSync_ddlist_time_auto_value, lv_color_hex(0xe1e6ee), LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_border_side(ui->scr_SetupDataSync_ddlist_time_auto_value, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_pad_top(ui->scr_SetupDataSync_ddlist_time_auto_value, 8, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_pad_left(ui->scr_SetupDataSync_ddlist_time_auto_value, 20, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_pad_right(ui->scr_SetupDataSync_ddlist_time_auto_value, 6, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_radius(ui->scr_SetupDataSync_ddlist_time_auto_value, 3, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_bg_opa(ui->scr_SetupDataSync_ddlist_time_auto_value, 255, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_bg_color(ui->scr_SetupDataSync_ddlist_time_auto_value, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_bg_grad_dir(ui->scr_SetupDataSync_ddlist_time_auto_value, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_shadow_width(ui->scr_SetupDataSync_ddlist_time_auto_value, 0, LV_PART_MAIN|LV_STATE_FOCUSED);

    //Write style for scr_SetupDataSync_ddlist_time_auto_value, Part: LV_PART_MAIN, State: LV_STATE_DISABLED.
    lv_obj_set_style_text_color(ui->scr_SetupDataSync_ddlist_time_auto_value, lv_color_hex(0x0D3055), LV_PART_MAIN|LV_STATE_DISABLED);
    lv_obj_set_style_text_font(ui->scr_SetupDataSync_ddlist_time_auto_value, &lv_font_NotoSans_Regular_30, LV_PART_MAIN|LV_STATE_DISABLED);
    lv_obj_set_style_text_opa(ui->scr_SetupDataSync_ddlist_time_auto_value, 255, LV_PART_MAIN|LV_STATE_DISABLED);
    lv_obj_set_style_border_width(ui->scr_SetupDataSync_ddlist_time_auto_value, 1, LV_PART_MAIN|LV_STATE_DISABLED);
    lv_obj_set_style_border_opa(ui->scr_SetupDataSync_ddlist_time_auto_value, 255, LV_PART_MAIN|LV_STATE_DISABLED);
    lv_obj_set_style_border_color(ui->scr_SetupDataSync_ddlist_time_auto_value, lv_color_hex(0xe1e6ee), LV_PART_MAIN|LV_STATE_DISABLED);
    lv_obj_set_style_border_side(ui->scr_SetupDataSync_ddlist_time_auto_value, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DISABLED);
    lv_obj_set_style_pad_top(ui->scr_SetupDataSync_ddlist_time_auto_value, 8, LV_PART_MAIN|LV_STATE_DISABLED);
    lv_obj_set_style_pad_left(ui->scr_SetupDataSync_ddlist_time_auto_value, 20, LV_PART_MAIN|LV_STATE_DISABLED);
    lv_obj_set_style_pad_right(ui->scr_SetupDataSync_ddlist_time_auto_value, 20, LV_PART_MAIN|LV_STATE_DISABLED);
    lv_obj_set_style_radius(ui->scr_SetupDataSync_ddlist_time_auto_value, 3, LV_PART_MAIN|LV_STATE_DISABLED);
    lv_obj_set_style_bg_opa(ui->scr_SetupDataSync_ddlist_time_auto_value, 255, LV_PART_MAIN|LV_STATE_DISABLED);
    lv_obj_set_style_bg_color(ui->scr_SetupDataSync_ddlist_time_auto_value, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DISABLED);
    lv_obj_set_style_bg_grad_dir(ui->scr_SetupDataSync_ddlist_time_auto_value, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DISABLED);
    lv_obj_set_style_shadow_width(ui->scr_SetupDataSync_ddlist_time_auto_value, 0, LV_PART_MAIN|LV_STATE_DISABLED);

    //Write style state: LV_STATE_CHECKED for &style_scr_SetupDataSync_ddlist_time_auto_value_extra_list_selected_checked
    static lv_style_t style_scr_SetupDataSync_ddlist_time_auto_value_extra_list_selected_checked;
    ui_init_style(&style_scr_SetupDataSync_ddlist_time_auto_value_extra_list_selected_checked);

    lv_style_set_border_width(&style_scr_SetupDataSync_ddlist_time_auto_value_extra_list_selected_checked, 0);
    lv_style_set_radius(&style_scr_SetupDataSync_ddlist_time_auto_value_extra_list_selected_checked, 5);
    lv_style_set_bg_opa(&style_scr_SetupDataSync_ddlist_time_auto_value_extra_list_selected_checked, 255);
    lv_style_set_bg_color(&style_scr_SetupDataSync_ddlist_time_auto_value_extra_list_selected_checked, lv_color_hex(0x00a1b5));
    lv_style_set_bg_grad_dir(&style_scr_SetupDataSync_ddlist_time_auto_value_extra_list_selected_checked, LV_GRAD_DIR_NONE);
    lv_obj_add_style(lv_dropdown_get_list(ui->scr_SetupDataSync_ddlist_time_auto_value), &style_scr_SetupDataSync_ddlist_time_auto_value_extra_list_selected_checked, LV_PART_SELECTED|LV_STATE_CHECKED);

    //Write style state: LV_STATE_DEFAULT for &style_scr_SetupDataSync_ddlist_time_auto_value_extra_list_main_default
    static lv_style_t style_scr_SetupDataSync_ddlist_time_auto_value_extra_list_main_default;
    ui_init_style(&style_scr_SetupDataSync_ddlist_time_auto_value_extra_list_main_default);

    lv_style_set_max_height(&style_scr_SetupDataSync_ddlist_time_auto_value_extra_list_main_default, 90);
    lv_style_set_text_color(&style_scr_SetupDataSync_ddlist_time_auto_value_extra_list_main_default, lv_color_hex(0x0D3055));
    lv_style_set_text_font(&style_scr_SetupDataSync_ddlist_time_auto_value_extra_list_main_default, &lv_font_NotoSans_Regular_30);
    lv_style_set_text_opa(&style_scr_SetupDataSync_ddlist_time_auto_value_extra_list_main_default, 255);
    lv_style_set_border_width(&style_scr_SetupDataSync_ddlist_time_auto_value_extra_list_main_default, 1);
    lv_style_set_border_opa(&style_scr_SetupDataSync_ddlist_time_auto_value_extra_list_main_default, 255);
    lv_style_set_border_color(&style_scr_SetupDataSync_ddlist_time_auto_value_extra_list_main_default, lv_color_hex(0xe1e6ee));
    lv_style_set_border_side(&style_scr_SetupDataSync_ddlist_time_auto_value_extra_list_main_default, LV_BORDER_SIDE_FULL);
    lv_style_set_radius(&style_scr_SetupDataSync_ddlist_time_auto_value_extra_list_main_default, 5);
    lv_style_set_bg_opa(&style_scr_SetupDataSync_ddlist_time_auto_value_extra_list_main_default, 255);
    lv_style_set_bg_color(&style_scr_SetupDataSync_ddlist_time_auto_value_extra_list_main_default, lv_color_hex(0xffffff));
    lv_style_set_bg_grad_dir(&style_scr_SetupDataSync_ddlist_time_auto_value_extra_list_main_default, LV_GRAD_DIR_NONE);
    lv_obj_add_style(lv_dropdown_get_list(ui->scr_SetupDataSync_ddlist_time_auto_value), &style_scr_SetupDataSync_ddlist_time_auto_value_extra_list_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style state: LV_STATE_DEFAULT for &style_scr_SetupDataSync_ddlist_time_auto_value_extra_list_scrollbar_default
    static lv_style_t style_scr_SetupDataSync_ddlist_time_auto_value_extra_list_scrollbar_default;
    ui_init_style(&style_scr_SetupDataSync_ddlist_time_auto_value_extra_list_scrollbar_default);

    lv_style_set_radius(&style_scr_SetupDataSync_ddlist_time_auto_value_extra_list_scrollbar_default, 5);
    lv_style_set_bg_opa(&style_scr_SetupDataSync_ddlist_time_auto_value_extra_list_scrollbar_default, 255);
    lv_style_set_bg_color(&style_scr_SetupDataSync_ddlist_time_auto_value_extra_list_scrollbar_default, lv_color_hex(0x00ff00));
    lv_style_set_bg_grad_dir(&style_scr_SetupDataSync_ddlist_time_auto_value_extra_list_scrollbar_default, LV_GRAD_DIR_NONE);
    lv_obj_add_style(lv_dropdown_get_list(ui->scr_SetupDataSync_ddlist_time_auto_value), &style_scr_SetupDataSync_ddlist_time_auto_value_extra_list_scrollbar_default, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);

    //Write codes scr_SetupDataSync_cont_status_row
    ui->scr_SetupDataSync_cont_status_row = lv_obj_create(ui->scr_SetupDataSync_cont_sync);
    lv_obj_set_pos(ui->scr_SetupDataSync_cont_status_row, 0, 377);
    lv_obj_set_size(ui->scr_SetupDataSync_cont_status_row, 1050, 90);
    lv_obj_set_scrollbar_mode(ui->scr_SetupDataSync_cont_status_row, LV_SCROLLBAR_MODE_OFF);

    //Write style for scr_SetupDataSync_cont_status_row, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scr_SetupDataSync_cont_status_row, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_SetupDataSync_cont_status_row, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scr_SetupDataSync_cont_status_row, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scr_SetupDataSync_cont_status_row, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scr_SetupDataSync_cont_status_row, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scr_SetupDataSync_cont_status_row, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scr_SetupDataSync_cont_status_row, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_SetupDataSync_cont_status_row, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scr_SetupDataSync_lbl_status_tiltle
    ui->scr_SetupDataSync_lbl_status_tiltle = lv_label_create(ui->scr_SetupDataSync_cont_status_row);
    lv_obj_set_pos(ui->scr_SetupDataSync_lbl_status_tiltle, 130, 20);
    lv_obj_set_size(ui->scr_SetupDataSync_lbl_status_tiltle, 121, 32);
    lv_label_set_text(ui->scr_SetupDataSync_lbl_status_tiltle, "Status:");
    lv_label_set_long_mode(ui->scr_SetupDataSync_lbl_status_tiltle, LV_LABEL_LONG_WRAP);

    //Write style for scr_SetupDataSync_lbl_status_tiltle, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scr_SetupDataSync_lbl_status_tiltle, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_SetupDataSync_lbl_status_tiltle, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scr_SetupDataSync_lbl_status_tiltle, lv_color_hex(0xbdbdbd), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scr_SetupDataSync_lbl_status_tiltle, &lv_font_NotoSans_Bold_28, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scr_SetupDataSync_lbl_status_tiltle, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->scr_SetupDataSync_lbl_status_tiltle, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->scr_SetupDataSync_lbl_status_tiltle, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scr_SetupDataSync_lbl_status_tiltle, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scr_SetupDataSync_lbl_status_tiltle, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scr_SetupDataSync_lbl_status_tiltle, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scr_SetupDataSync_lbl_status_tiltle, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scr_SetupDataSync_lbl_status_tiltle, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scr_SetupDataSync_lbl_status_tiltle, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_SetupDataSync_lbl_status_tiltle, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scr_SetupDataSync_lbl_status_msg
    ui->scr_SetupDataSync_lbl_status_msg = lv_label_create(ui->scr_SetupDataSync_cont_status_row);
    lv_obj_set_pos(ui->scr_SetupDataSync_lbl_status_msg, 424, 20);
    lv_obj_set_size(ui->scr_SetupDataSync_lbl_status_msg, 567, 42);
    lv_label_set_text(ui->scr_SetupDataSync_lbl_status_msg, "Synced successfully");
    lv_label_set_long_mode(ui->scr_SetupDataSync_lbl_status_msg, LV_LABEL_LONG_WRAP);

    //Write style for scr_SetupDataSync_lbl_status_msg, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scr_SetupDataSync_lbl_status_msg, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_SetupDataSync_lbl_status_msg, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scr_SetupDataSync_lbl_status_msg, lv_color_hex(0xbdbdbd), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scr_SetupDataSync_lbl_status_msg, &lv_font_NotoSans_Regular_30, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scr_SetupDataSync_lbl_status_msg, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->scr_SetupDataSync_lbl_status_msg, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->scr_SetupDataSync_lbl_status_msg, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scr_SetupDataSync_lbl_status_msg, LV_TEXT_ALIGN_RIGHT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scr_SetupDataSync_lbl_status_msg, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scr_SetupDataSync_lbl_status_msg, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scr_SetupDataSync_lbl_status_msg, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scr_SetupDataSync_lbl_status_msg, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scr_SetupDataSync_lbl_status_msg, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_SetupDataSync_lbl_status_msg, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scr_SetupDataSync_img_status
    ui->scr_SetupDataSync_img_status = lv_image_create(ui->scr_SetupDataSync_cont_status_row);
    lv_obj_set_pos(ui->scr_SetupDataSync_img_status, 41, 12);
    lv_obj_set_size(ui->scr_SetupDataSync_img_status, 48, 48);
    lv_obj_add_flag(ui->scr_SetupDataSync_img_status, LV_OBJ_FLAG_CLICKABLE);
    lv_image_set_src(ui->scr_SetupDataSync_img_status, &_status_RGB565A8_48x48);
    lv_image_set_pivot(ui->scr_SetupDataSync_img_status, 50,50);
    lv_image_set_rotation(ui->scr_SetupDataSync_img_status, 0);

    //Write style for scr_SetupDataSync_img_status, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_image_recolor_opa(ui->scr_SetupDataSync_img_status, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_image_opa(ui->scr_SetupDataSync_img_status, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scr_SetupDataSync_imgbtn_back
    ui->scr_SetupDataSync_imgbtn_back = lv_imagebutton_create(ui->scr_SetupDataSync);
    lv_obj_set_pos(ui->scr_SetupDataSync_imgbtn_back, 40, 14);
    lv_obj_set_size(ui->scr_SetupDataSync_imgbtn_back, 64, 64);
    lv_imagebutton_set_src(ui->scr_SetupDataSync_imgbtn_back, LV_IMAGEBUTTON_STATE_RELEASED, &_leftarrow_RGB565A8_64x64, NULL, NULL);
    ui->scr_SetupDataSync_imgbtn_back_label = lv_label_create(ui->scr_SetupDataSync_imgbtn_back);
    lv_label_set_text(ui->scr_SetupDataSync_imgbtn_back_label, "");
    lv_label_set_long_mode(ui->scr_SetupDataSync_imgbtn_back_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->scr_SetupDataSync_imgbtn_back_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->scr_SetupDataSync_imgbtn_back, 0, LV_STATE_DEFAULT);

    //Write style for scr_SetupDataSync_imgbtn_back, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_text_color(ui->scr_SetupDataSync_imgbtn_back, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scr_SetupDataSync_imgbtn_back, &lv_font_montserratMedium_12, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scr_SetupDataSync_imgbtn_back, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scr_SetupDataSync_imgbtn_back, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_SetupDataSync_imgbtn_back, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style for scr_SetupDataSync_imgbtn_back, Part: LV_PART_MAIN, State: LV_STATE_PRESSED.
    lv_obj_set_style_image_recolor_opa(ui->scr_SetupDataSync_imgbtn_back, 0, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_image_opa(ui->scr_SetupDataSync_imgbtn_back, 255, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_text_color(ui->scr_SetupDataSync_imgbtn_back, lv_color_hex(0xFF33FF), LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_text_font(ui->scr_SetupDataSync_imgbtn_back, &lv_font_montserratMedium_12, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_text_opa(ui->scr_SetupDataSync_imgbtn_back, 255, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_shadow_width(ui->scr_SetupDataSync_imgbtn_back, 0, LV_PART_MAIN|LV_STATE_PRESSED);

    //Write style for scr_SetupDataSync_imgbtn_back, Part: LV_PART_MAIN, State: LV_STATE_CHECKED.
    lv_obj_set_style_image_recolor_opa(ui->scr_SetupDataSync_imgbtn_back, 0, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_image_opa(ui->scr_SetupDataSync_imgbtn_back, 255, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_text_color(ui->scr_SetupDataSync_imgbtn_back, lv_color_hex(0xFF33FF), LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_text_font(ui->scr_SetupDataSync_imgbtn_back, &lv_font_montserratMedium_12, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_text_opa(ui->scr_SetupDataSync_imgbtn_back, 255, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_shadow_width(ui->scr_SetupDataSync_imgbtn_back, 0, LV_PART_MAIN|LV_STATE_CHECKED);

    //Write style for scr_SetupDataSync_imgbtn_back, Part: LV_PART_MAIN, State: LV_IMAGEBUTTON_STATE_RELEASED.
    lv_obj_set_style_image_recolor_opa(ui->scr_SetupDataSync_imgbtn_back, 0, LV_PART_MAIN|LV_IMAGEBUTTON_STATE_RELEASED);
    lv_obj_set_style_image_opa(ui->scr_SetupDataSync_imgbtn_back, 255, LV_PART_MAIN|LV_IMAGEBUTTON_STATE_RELEASED);

    //The custom code of scr_SetupDataSync.


    //Update current screen layout.
    lv_obj_update_layout(ui->scr_SetupDataSync);

    //Init events for screen.
    events_init_scr_SetupDataSync(ui);
}
