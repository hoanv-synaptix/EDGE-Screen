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



void setup_scr_scr_setup_network(lv_ui *ui)
{
    //Write codes scr_setup_network
    ui->scr_setup_network = lv_obj_create(NULL);
    lv_obj_set_size(ui->scr_setup_network, 1280, 720);
    lv_obj_set_scrollbar_mode(ui->scr_setup_network, LV_SCROLLBAR_MODE_OFF);

    //Write style for scr_setup_network, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->scr_setup_network, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scr_setup_network, lv_color_hex(0x121212), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scr_setup_network, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scr_setup_network_cont_root
    ui->scr_setup_network_cont_root = lv_obj_create(ui->scr_setup_network);
    lv_obj_set_pos(ui->scr_setup_network_cont_root, 0, 0);
    lv_obj_set_size(ui->scr_setup_network_cont_root, 1280, 720);
    lv_obj_set_scrollbar_mode(ui->scr_setup_network_cont_root, LV_SCROLLBAR_MODE_OFF);

    //Write style for scr_setup_network_cont_root, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scr_setup_network_cont_root, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_setup_network_cont_root, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scr_setup_network_cont_root, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scr_setup_network_cont_root, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scr_setup_network_cont_root, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scr_setup_network_cont_root, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scr_setup_network_cont_root, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_setup_network_cont_root, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scr_setup_network_cont_topbar
    ui->scr_setup_network_cont_topbar = lv_obj_create(ui->scr_setup_network_cont_root);
    lv_obj_set_pos(ui->scr_setup_network_cont_topbar, 0, 0);
    lv_obj_set_size(ui->scr_setup_network_cont_topbar, 1280, 90);
    lv_obj_set_scrollbar_mode(ui->scr_setup_network_cont_topbar, LV_SCROLLBAR_MODE_OFF);

    //Write style for scr_setup_network_cont_topbar, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scr_setup_network_cont_topbar, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_setup_network_cont_topbar, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scr_setup_network_cont_topbar, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scr_setup_network_cont_topbar, lv_color_hex(0x2B2B2B), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scr_setup_network_cont_topbar, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scr_setup_network_cont_topbar, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scr_setup_network_cont_topbar, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scr_setup_network_cont_topbar, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scr_setup_network_cont_topbar, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_setup_network_cont_topbar, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scr_setup_network_lbl_top_tiltle
    ui->scr_setup_network_lbl_top_tiltle = lv_label_create(ui->scr_setup_network_cont_topbar);
    lv_obj_set_pos(ui->scr_setup_network_lbl_top_tiltle, 532, 20);
    lv_obj_set_size(ui->scr_setup_network_lbl_top_tiltle, 230, 59);
    lv_label_set_text(ui->scr_setup_network_lbl_top_tiltle, "NETWORK");
    lv_label_set_long_mode(ui->scr_setup_network_lbl_top_tiltle, LV_LABEL_LONG_WRAP);

    //Write style for scr_setup_network_lbl_top_tiltle, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scr_setup_network_lbl_top_tiltle, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_setup_network_lbl_top_tiltle, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scr_setup_network_lbl_top_tiltle, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scr_setup_network_lbl_top_tiltle, &lv_font_Acme_Regular_50, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scr_setup_network_lbl_top_tiltle, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->scr_setup_network_lbl_top_tiltle, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->scr_setup_network_lbl_top_tiltle, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scr_setup_network_lbl_top_tiltle, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scr_setup_network_lbl_top_tiltle, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scr_setup_network_lbl_top_tiltle, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scr_setup_network_lbl_top_tiltle, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scr_setup_network_lbl_top_tiltle, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scr_setup_network_lbl_top_tiltle, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_setup_network_lbl_top_tiltle, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scr_setup_network_lbl_value
    ui->scr_setup_network_lbl_value = lv_label_create(ui->scr_setup_network_cont_topbar);
    lv_obj_set_pos(ui->scr_setup_network_lbl_value, 950, 39);
    lv_obj_set_size(ui->scr_setup_network_lbl_value, 132, 32);
    lv_label_set_text(ui->scr_setup_network_lbl_value, "EDGE-01");
    lv_label_set_long_mode(ui->scr_setup_network_lbl_value, LV_LABEL_LONG_WRAP);

    //Write style for scr_setup_network_lbl_value, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scr_setup_network_lbl_value, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_setup_network_lbl_value, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scr_setup_network_lbl_value, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scr_setup_network_lbl_value, &lv_font_Acme_Regular_30, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scr_setup_network_lbl_value, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->scr_setup_network_lbl_value, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->scr_setup_network_lbl_value, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scr_setup_network_lbl_value, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scr_setup_network_lbl_value, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scr_setup_network_lbl_value, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scr_setup_network_lbl_value, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scr_setup_network_lbl_value, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scr_setup_network_lbl_value, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_setup_network_lbl_value, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scr_setup_network_btn_online
    ui->scr_setup_network_btn_online = lv_button_create(ui->scr_setup_network_cont_topbar);
    lv_obj_set_pos(ui->scr_setup_network_btn_online, 1080, 30);
    lv_obj_set_size(ui->scr_setup_network_btn_online, 160, 50);
    ui->scr_setup_network_btn_online_label = lv_label_create(ui->scr_setup_network_btn_online);
    lv_label_set_text(ui->scr_setup_network_btn_online_label, "ONLINE");
    lv_label_set_long_mode(ui->scr_setup_network_btn_online_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->scr_setup_network_btn_online_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->scr_setup_network_btn_online, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->scr_setup_network_btn_online_label, LV_PCT(100));

    //Write style for scr_setup_network_btn_online, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->scr_setup_network_btn_online, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scr_setup_network_btn_online, lv_color_hex(0x2ecc71), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scr_setup_network_btn_online, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->scr_setup_network_btn_online, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_setup_network_btn_online, 18, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_setup_network_btn_online, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scr_setup_network_btn_online, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scr_setup_network_btn_online, &lv_font_arial_25, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scr_setup_network_btn_online, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scr_setup_network_btn_online, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scr_setup_network_cont_body
    ui->scr_setup_network_cont_body = lv_obj_create(ui->scr_setup_network_cont_root);
    lv_obj_set_pos(ui->scr_setup_network_cont_body, 0, 90);
    lv_obj_set_size(ui->scr_setup_network_cont_body, 1280, 630);
    lv_obj_set_scrollbar_mode(ui->scr_setup_network_cont_body, LV_SCROLLBAR_MODE_OFF);

    //Write style for scr_setup_network_cont_body, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scr_setup_network_cont_body, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_setup_network_cont_body, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scr_setup_network_cont_body, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scr_setup_network_cont_body, lv_color_hex(0x1a1a1a), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scr_setup_network_cont_body, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scr_setup_network_cont_body, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scr_setup_network_cont_body, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scr_setup_network_cont_body, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scr_setup_network_cont_body, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_setup_network_cont_body, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scr_setup_network_cont_net
    ui->scr_setup_network_cont_net = lv_obj_create(ui->scr_setup_network_cont_body);
    lv_obj_set_pos(ui->scr_setup_network_cont_net, 90, 0);
    lv_obj_set_size(ui->scr_setup_network_cont_net, 1100, 630);
    lv_obj_set_scrollbar_mode(ui->scr_setup_network_cont_net, LV_SCROLLBAR_MODE_OFF);

    //Write style for scr_setup_network_cont_net, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scr_setup_network_cont_net, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_setup_network_cont_net, 20, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scr_setup_network_cont_net, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scr_setup_network_cont_net, lv_color_hex(0x1a1a1a), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scr_setup_network_cont_net, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scr_setup_network_cont_net, 24, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scr_setup_network_cont_net, 24, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scr_setup_network_cont_net, 24, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scr_setup_network_cont_net, 24, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_setup_network_cont_net, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scr_setup_network_cont_header
    ui->scr_setup_network_cont_header = lv_obj_create(ui->scr_setup_network_cont_net);
    lv_obj_set_pos(ui->scr_setup_network_cont_header, 0, 0);
    lv_obj_set_size(ui->scr_setup_network_cont_header, 1050, 80);
    lv_obj_set_scrollbar_mode(ui->scr_setup_network_cont_header, LV_SCROLLBAR_MODE_OFF);

    //Write style for scr_setup_network_cont_header, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scr_setup_network_cont_header, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_setup_network_cont_header, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scr_setup_network_cont_header, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scr_setup_network_cont_header, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scr_setup_network_cont_header, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scr_setup_network_cont_header, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scr_setup_network_cont_header, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_setup_network_cont_header, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scr_setup_network_lbl_header
    ui->scr_setup_network_lbl_header = lv_label_create(ui->scr_setup_network_cont_header);
    lv_obj_set_pos(ui->scr_setup_network_lbl_header, 77, 15);
    lv_obj_set_size(ui->scr_setup_network_lbl_header, 147, 32);
    lv_label_set_text(ui->scr_setup_network_lbl_header, "Network");
    lv_label_set_long_mode(ui->scr_setup_network_lbl_header, LV_LABEL_LONG_WRAP);

    //Write style for scr_setup_network_lbl_header, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scr_setup_network_lbl_header, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_setup_network_lbl_header, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scr_setup_network_lbl_header, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scr_setup_network_lbl_header, &lv_font_arial_32, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scr_setup_network_lbl_header, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->scr_setup_network_lbl_header, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->scr_setup_network_lbl_header, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scr_setup_network_lbl_header, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scr_setup_network_lbl_header, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scr_setup_network_lbl_header, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scr_setup_network_lbl_header, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scr_setup_network_lbl_header, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scr_setup_network_lbl_header, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_setup_network_lbl_header, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scr_setup_network_img_wifi
    ui->scr_setup_network_img_wifi = lv_image_create(ui->scr_setup_network_cont_header);
    lv_obj_set_pos(ui->scr_setup_network_img_wifi, 13, 0);
    lv_obj_set_size(ui->scr_setup_network_img_wifi, 64, 64);
    lv_obj_add_flag(ui->scr_setup_network_img_wifi, LV_OBJ_FLAG_CLICKABLE);
    lv_image_set_src(ui->scr_setup_network_img_wifi, &_wifi_RGB565A8_64x64);
    lv_image_set_pivot(ui->scr_setup_network_img_wifi, 50,50);
    lv_image_set_rotation(ui->scr_setup_network_img_wifi, 0);

    //Write style for scr_setup_network_img_wifi, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_image_recolor_opa(ui->scr_setup_network_img_wifi, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_image_opa(ui->scr_setup_network_img_wifi, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scr_setup_network_line_1
    ui->scr_setup_network_line_1 = lv_line_create(ui->scr_setup_network_cont_net);
    lv_obj_set_pos(ui->scr_setup_network_line_1, 0, 80);
    lv_obj_set_size(ui->scr_setup_network_line_1, 1050, 2);
    static lv_point_precise_t scr_setup_network_line_1[] = {{0, 0},{1050, 0}};
    lv_line_set_points(ui->scr_setup_network_line_1, scr_setup_network_line_1, 2);

    //Write style for scr_setup_network_line_1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_line_width(ui->scr_setup_network_line_1, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_color(ui->scr_setup_network_line_1, lv_color_hex(0x2b2b2b), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_opa(ui->scr_setup_network_line_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_rounded(ui->scr_setup_network_line_1, true, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scr_setup_network_cont_wifi_row
    ui->scr_setup_network_cont_wifi_row = lv_obj_create(ui->scr_setup_network_cont_net);
    lv_obj_set_pos(ui->scr_setup_network_cont_wifi_row, 0, 78);
    lv_obj_set_size(ui->scr_setup_network_cont_wifi_row, 1050, 90);
    lv_obj_set_scrollbar_mode(ui->scr_setup_network_cont_wifi_row, LV_SCROLLBAR_MODE_OFF);

    //Write style for scr_setup_network_cont_wifi_row, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scr_setup_network_cont_wifi_row, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_setup_network_cont_wifi_row, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scr_setup_network_cont_wifi_row, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scr_setup_network_cont_wifi_row, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scr_setup_network_cont_wifi_row, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scr_setup_network_cont_wifi_row, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scr_setup_network_cont_wifi_row, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_setup_network_cont_wifi_row, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scr_setup_network_lbl_wifi
    ui->scr_setup_network_lbl_wifi = lv_label_create(ui->scr_setup_network_cont_wifi_row);
    lv_obj_set_pos(ui->scr_setup_network_lbl_wifi, 14, 41);
    lv_obj_set_size(ui->scr_setup_network_lbl_wifi, 92, 32);
    lv_label_set_text(ui->scr_setup_network_lbl_wifi, "Wi-Fi:");
    lv_label_set_long_mode(ui->scr_setup_network_lbl_wifi, LV_LABEL_LONG_WRAP);

    //Write style for scr_setup_network_lbl_wifi, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scr_setup_network_lbl_wifi, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_setup_network_lbl_wifi, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scr_setup_network_lbl_wifi, lv_color_hex(0xbdbdbd), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scr_setup_network_lbl_wifi, &lv_font_montserratMedium_25, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scr_setup_network_lbl_wifi, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->scr_setup_network_lbl_wifi, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->scr_setup_network_lbl_wifi, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scr_setup_network_lbl_wifi, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scr_setup_network_lbl_wifi, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scr_setup_network_lbl_wifi, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scr_setup_network_lbl_wifi, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scr_setup_network_lbl_wifi, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scr_setup_network_lbl_wifi, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_setup_network_lbl_wifi, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scr_setup_network_ta_wifi
    ui->scr_setup_network_ta_wifi = lv_textarea_create(ui->scr_setup_network_cont_wifi_row);
    lv_obj_set_pos(ui->scr_setup_network_ta_wifi, 173, 27);
    lv_obj_set_size(ui->scr_setup_network_ta_wifi, 860, 60);
    lv_textarea_set_text(ui->scr_setup_network_ta_wifi, "HVC_wifi6");
    lv_textarea_set_placeholder_text(ui->scr_setup_network_ta_wifi, "");
    lv_textarea_set_password_bullet(ui->scr_setup_network_ta_wifi, "*");
    lv_textarea_set_password_mode(ui->scr_setup_network_ta_wifi, false);
    lv_textarea_set_one_line(ui->scr_setup_network_ta_wifi, true);
    lv_textarea_set_accepted_chars(ui->scr_setup_network_ta_wifi, "");
    lv_textarea_set_max_length(ui->scr_setup_network_ta_wifi, 32);
#if LV_USE_KEYBOARD
    lv_obj_add_event_cb(ui->scr_setup_network_ta_wifi, ta_event_cb, LV_EVENT_ALL, ui->g_kb_top_layer);
#endif

    //Write style for scr_setup_network_ta_wifi, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_text_color(ui->scr_setup_network_ta_wifi, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scr_setup_network_ta_wifi, &lv_font_arial_30, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scr_setup_network_ta_wifi, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->scr_setup_network_ta_wifi, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scr_setup_network_ta_wifi, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scr_setup_network_ta_wifi, 166, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scr_setup_network_ta_wifi, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scr_setup_network_ta_wifi, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->scr_setup_network_ta_wifi, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_setup_network_ta_wifi, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scr_setup_network_ta_wifi, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scr_setup_network_ta_wifi, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scr_setup_network_ta_wifi, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_setup_network_ta_wifi, 5, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style for scr_setup_network_ta_wifi, Part: LV_PART_SCROLLBAR, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->scr_setup_network_ta_wifi, 255, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scr_setup_network_ta_wifi, lv_color_hex(0x2195f6), LV_PART_SCROLLBAR|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scr_setup_network_ta_wifi, LV_GRAD_DIR_NONE, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_setup_network_ta_wifi, 0, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);

    //Write codes scr_setup_network_line_2
    ui->scr_setup_network_line_2 = lv_line_create(ui->scr_setup_network_cont_net);
    lv_obj_set_pos(ui->scr_setup_network_line_2, 0, 270);
    lv_obj_set_size(ui->scr_setup_network_line_2, 1050, 2);
    static lv_point_precise_t scr_setup_network_line_2[] = {{0, 0},{1050, 0}};
    lv_line_set_points(ui->scr_setup_network_line_2, scr_setup_network_line_2, 2);

    //Write style for scr_setup_network_line_2, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_line_width(ui->scr_setup_network_line_2, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_color(ui->scr_setup_network_line_2, lv_color_hex(0x2b2b2b), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_opa(ui->scr_setup_network_line_2, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_rounded(ui->scr_setup_network_line_2, true, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scr_setup_network_cont_pass_row
    ui->scr_setup_network_cont_pass_row = lv_obj_create(ui->scr_setup_network_cont_net);
    lv_obj_set_pos(ui->scr_setup_network_cont_pass_row, 0, 188);
    lv_obj_set_size(ui->scr_setup_network_cont_pass_row, 1050, 90);
    lv_obj_set_scrollbar_mode(ui->scr_setup_network_cont_pass_row, LV_SCROLLBAR_MODE_OFF);

    //Write style for scr_setup_network_cont_pass_row, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scr_setup_network_cont_pass_row, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_setup_network_cont_pass_row, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scr_setup_network_cont_pass_row, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scr_setup_network_cont_pass_row, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scr_setup_network_cont_pass_row, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scr_setup_network_cont_pass_row, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scr_setup_network_cont_pass_row, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_setup_network_cont_pass_row, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scr_setup_network_lbl_pass
    ui->scr_setup_network_lbl_pass = lv_label_create(ui->scr_setup_network_cont_pass_row);
    lv_obj_set_pos(ui->scr_setup_network_lbl_pass, 14, 14);
    lv_obj_set_size(ui->scr_setup_network_lbl_pass, 145, 32);
    lv_label_set_text(ui->scr_setup_network_lbl_pass, "Password");
    lv_label_set_long_mode(ui->scr_setup_network_lbl_pass, LV_LABEL_LONG_WRAP);

    //Write style for scr_setup_network_lbl_pass, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scr_setup_network_lbl_pass, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_setup_network_lbl_pass, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scr_setup_network_lbl_pass, lv_color_hex(0xbdbdbd), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scr_setup_network_lbl_pass, &lv_font_montserratMedium_25, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scr_setup_network_lbl_pass, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->scr_setup_network_lbl_pass, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->scr_setup_network_lbl_pass, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scr_setup_network_lbl_pass, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scr_setup_network_lbl_pass, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scr_setup_network_lbl_pass, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scr_setup_network_lbl_pass, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scr_setup_network_lbl_pass, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scr_setup_network_lbl_pass, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_setup_network_lbl_pass, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scr_setup_network_ta_pass
    ui->scr_setup_network_ta_pass = lv_textarea_create(ui->scr_setup_network_cont_pass_row);
    lv_obj_set_pos(ui->scr_setup_network_ta_pass, 173, 0);
    lv_obj_set_size(ui->scr_setup_network_ta_pass, 860, 60);
    lv_textarea_set_text(ui->scr_setup_network_ta_pass, "havicom2025");
    lv_textarea_set_placeholder_text(ui->scr_setup_network_ta_pass, "");
    lv_textarea_set_password_bullet(ui->scr_setup_network_ta_pass, "*");
    lv_textarea_set_password_mode(ui->scr_setup_network_ta_pass, true);
    lv_textarea_set_one_line(ui->scr_setup_network_ta_pass, true);
    lv_textarea_set_accepted_chars(ui->scr_setup_network_ta_pass, "");
    lv_textarea_set_max_length(ui->scr_setup_network_ta_pass, 32);
#if LV_USE_KEYBOARD
    lv_obj_add_event_cb(ui->scr_setup_network_ta_pass, ta_event_cb, LV_EVENT_ALL, ui->g_kb_top_layer);
#endif

    //Write style for scr_setup_network_ta_pass, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_text_color(ui->scr_setup_network_ta_pass, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scr_setup_network_ta_pass, &lv_font_arial_30, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scr_setup_network_ta_pass, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->scr_setup_network_ta_pass, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scr_setup_network_ta_pass, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scr_setup_network_ta_pass, 166, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scr_setup_network_ta_pass, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scr_setup_network_ta_pass, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->scr_setup_network_ta_pass, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_setup_network_ta_pass, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scr_setup_network_ta_pass, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scr_setup_network_ta_pass, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scr_setup_network_ta_pass, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_setup_network_ta_pass, 5, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style for scr_setup_network_ta_pass, Part: LV_PART_SCROLLBAR, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->scr_setup_network_ta_pass, 255, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scr_setup_network_ta_pass, lv_color_hex(0x2195f6), LV_PART_SCROLLBAR|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scr_setup_network_ta_pass, LV_GRAD_DIR_NONE, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_setup_network_ta_pass, 0, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);

    //Write codes scr_setup_network_cont_auto_row
    ui->scr_setup_network_cont_auto_row = lv_obj_create(ui->scr_setup_network_cont_net);
    lv_obj_set_pos(ui->scr_setup_network_cont_auto_row, 0, 290);
    lv_obj_set_size(ui->scr_setup_network_cont_auto_row, 1050, 80);
    lv_obj_set_scrollbar_mode(ui->scr_setup_network_cont_auto_row, LV_SCROLLBAR_MODE_OFF);

    //Write style for scr_setup_network_cont_auto_row, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scr_setup_network_cont_auto_row, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_setup_network_cont_auto_row, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scr_setup_network_cont_auto_row, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scr_setup_network_cont_auto_row, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scr_setup_network_cont_auto_row, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scr_setup_network_cont_auto_row, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scr_setup_network_cont_auto_row, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_setup_network_cont_auto_row, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scr_setup_network_lbl_auto
    ui->scr_setup_network_lbl_auto = lv_label_create(ui->scr_setup_network_cont_auto_row);
    lv_obj_set_pos(ui->scr_setup_network_lbl_auto, 14, 5);
    lv_obj_set_size(ui->scr_setup_network_lbl_auto, 209, 32);
    lv_label_set_text(ui->scr_setup_network_lbl_auto, "Auto reconnect");
    lv_label_set_long_mode(ui->scr_setup_network_lbl_auto, LV_LABEL_LONG_WRAP);

    //Write style for scr_setup_network_lbl_auto, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scr_setup_network_lbl_auto, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_setup_network_lbl_auto, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scr_setup_network_lbl_auto, lv_color_hex(0xbdbdbd), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scr_setup_network_lbl_auto, &lv_font_montserratMedium_25, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scr_setup_network_lbl_auto, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->scr_setup_network_lbl_auto, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->scr_setup_network_lbl_auto, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scr_setup_network_lbl_auto, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scr_setup_network_lbl_auto, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scr_setup_network_lbl_auto, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scr_setup_network_lbl_auto, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scr_setup_network_lbl_auto, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scr_setup_network_lbl_auto, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_setup_network_lbl_auto, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scr_setup_network_sw_auto
    ui->scr_setup_network_sw_auto = lv_switch_create(ui->scr_setup_network_cont_auto_row);
    lv_obj_set_pos(ui->scr_setup_network_sw_auto, 236, 5);
    lv_obj_set_size(ui->scr_setup_network_sw_auto, 70, 30);

    //Write style for scr_setup_network_sw_auto, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->scr_setup_network_sw_auto, 230, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scr_setup_network_sw_auto, lv_color_hex(0x626262), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scr_setup_network_sw_auto, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->scr_setup_network_sw_auto, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_setup_network_sw_auto, 20, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_setup_network_sw_auto, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style for scr_setup_network_sw_auto, Part: LV_PART_INDICATOR, State: LV_STATE_CHECKED.
    lv_obj_set_style_bg_opa(ui->scr_setup_network_sw_auto, 255, LV_PART_INDICATOR|LV_STATE_CHECKED);
    lv_obj_set_style_bg_color(ui->scr_setup_network_sw_auto, lv_color_hex(0x2195f6), LV_PART_INDICATOR|LV_STATE_CHECKED);
    lv_obj_set_style_bg_grad_dir(ui->scr_setup_network_sw_auto, LV_GRAD_DIR_NONE, LV_PART_INDICATOR|LV_STATE_CHECKED);
    lv_obj_set_style_border_width(ui->scr_setup_network_sw_auto, 0, LV_PART_INDICATOR|LV_STATE_CHECKED);

    //Write style for scr_setup_network_sw_auto, Part: LV_PART_KNOB, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->scr_setup_network_sw_auto, 255, LV_PART_KNOB|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scr_setup_network_sw_auto, lv_color_hex(0xffffff), LV_PART_KNOB|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scr_setup_network_sw_auto, LV_GRAD_DIR_NONE, LV_PART_KNOB|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->scr_setup_network_sw_auto, 0, LV_PART_KNOB|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_setup_network_sw_auto, 10, LV_PART_KNOB|LV_STATE_DEFAULT);

    //Write codes scr_setup_network_line_3
    ui->scr_setup_network_line_3 = lv_line_create(ui->scr_setup_network_cont_net);
    lv_obj_set_pos(ui->scr_setup_network_line_3, 0, 350);
    lv_obj_set_size(ui->scr_setup_network_line_3, 1050, 2);
    static lv_point_precise_t scr_setup_network_line_3[] = {{0, 0},{1050, 0}};
    lv_line_set_points(ui->scr_setup_network_line_3, scr_setup_network_line_3, 2);

    //Write style for scr_setup_network_line_3, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_line_width(ui->scr_setup_network_line_3, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_color(ui->scr_setup_network_line_3, lv_color_hex(0x2b2b2b), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_opa(ui->scr_setup_network_line_3, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_rounded(ui->scr_setup_network_line_3, true, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scr_setup_network_cont_row_status
    ui->scr_setup_network_cont_row_status = lv_obj_create(ui->scr_setup_network_cont_net);
    lv_obj_set_pos(ui->scr_setup_network_cont_row_status, 0, 370);
    lv_obj_set_size(ui->scr_setup_network_cont_row_status, 1050, 90);
    lv_obj_set_scrollbar_mode(ui->scr_setup_network_cont_row_status, LV_SCROLLBAR_MODE_OFF);

    //Write style for scr_setup_network_cont_row_status, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scr_setup_network_cont_row_status, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_setup_network_cont_row_status, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scr_setup_network_cont_row_status, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scr_setup_network_cont_row_status, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scr_setup_network_cont_row_status, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scr_setup_network_cont_row_status, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scr_setup_network_cont_row_status, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_setup_network_cont_row_status, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scr_setup_network_led_status
    ui->scr_setup_network_led_status = lv_led_create(ui->scr_setup_network_cont_row_status);
    lv_obj_set_pos(ui->scr_setup_network_led_status, 33, 6);
    lv_obj_set_size(ui->scr_setup_network_led_status, 16, 16);
    lv_led_set_brightness(ui->scr_setup_network_led_status, 255);
    lv_led_set_color(ui->scr_setup_network_led_status, lv_color_hex(0x00FF39));

    //Write codes scr_setup_network_lbl_status
    ui->scr_setup_network_lbl_status = lv_label_create(ui->scr_setup_network_cont_row_status);
    lv_obj_set_pos(ui->scr_setup_network_lbl_status, 60, 2);
    lv_obj_set_size(ui->scr_setup_network_lbl_status, 154, 24);
    lv_label_set_text(ui->scr_setup_network_lbl_status, "Connected");
    lv_label_set_long_mode(ui->scr_setup_network_lbl_status, LV_LABEL_LONG_WRAP);

    //Write style for scr_setup_network_lbl_status, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scr_setup_network_lbl_status, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_setup_network_lbl_status, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scr_setup_network_lbl_status, lv_color_hex(0x00FF39), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scr_setup_network_lbl_status, &lv_font_arial_25, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scr_setup_network_lbl_status, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->scr_setup_network_lbl_status, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->scr_setup_network_lbl_status, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scr_setup_network_lbl_status, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scr_setup_network_lbl_status, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scr_setup_network_lbl_status, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scr_setup_network_lbl_status, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scr_setup_network_lbl_status, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scr_setup_network_lbl_status, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_setup_network_lbl_status, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scr_setup_network_lbl_ip_value
    ui->scr_setup_network_lbl_ip_value = lv_label_create(ui->scr_setup_network_cont_row_status);
    lv_obj_set_pos(ui->scr_setup_network_lbl_ip_value, 60, 40);
    lv_obj_set_size(ui->scr_setup_network_lbl_ip_value, 201, 24);
    lv_label_set_text(ui->scr_setup_network_lbl_ip_value, "IP: 192.168.1.1");
    lv_label_set_long_mode(ui->scr_setup_network_lbl_ip_value, LV_LABEL_LONG_WRAP);

    //Write style for scr_setup_network_lbl_ip_value, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scr_setup_network_lbl_ip_value, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_setup_network_lbl_ip_value, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scr_setup_network_lbl_ip_value, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scr_setup_network_lbl_ip_value, &lv_font_arial_25, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scr_setup_network_lbl_ip_value, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->scr_setup_network_lbl_ip_value, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->scr_setup_network_lbl_ip_value, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scr_setup_network_lbl_ip_value, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scr_setup_network_lbl_ip_value, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scr_setup_network_lbl_ip_value, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scr_setup_network_lbl_ip_value, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scr_setup_network_lbl_ip_value, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scr_setup_network_lbl_ip_value, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_setup_network_lbl_ip_value, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scr_setup_network_line_4
    ui->scr_setup_network_line_4 = lv_line_create(ui->scr_setup_network_cont_net);
    lv_obj_set_pos(ui->scr_setup_network_line_4, 0, 460);
    lv_obj_set_size(ui->scr_setup_network_line_4, 1050, 2);
    static lv_point_precise_t scr_setup_network_line_4[] = {{0, 0},{1050, 0}};
    lv_line_set_points(ui->scr_setup_network_line_4, scr_setup_network_line_4, 2);

    //Write style for scr_setup_network_line_4, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_line_width(ui->scr_setup_network_line_4, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_color(ui->scr_setup_network_line_4, lv_color_hex(0x2b2b2b), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_opa(ui->scr_setup_network_line_4, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_rounded(ui->scr_setup_network_line_4, true, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scr_setup_network_cont_btn_row
    ui->scr_setup_network_cont_btn_row = lv_obj_create(ui->scr_setup_network_cont_net);
    lv_obj_set_pos(ui->scr_setup_network_cont_btn_row, 0, 480);
    lv_obj_set_size(ui->scr_setup_network_cont_btn_row, 1050, 90);
    lv_obj_set_scrollbar_mode(ui->scr_setup_network_cont_btn_row, LV_SCROLLBAR_MODE_OFF);

    //Write style for scr_setup_network_cont_btn_row, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scr_setup_network_cont_btn_row, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_setup_network_cont_btn_row, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scr_setup_network_cont_btn_row, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scr_setup_network_cont_btn_row, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scr_setup_network_cont_btn_row, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scr_setup_network_cont_btn_row, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scr_setup_network_cont_btn_row, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_setup_network_cont_btn_row, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scr_setup_network_btn_connect
    ui->scr_setup_network_btn_connect = lv_button_create(ui->scr_setup_network_cont_btn_row);
    lv_obj_set_pos(ui->scr_setup_network_btn_connect, 14, 2);
    lv_obj_set_size(ui->scr_setup_network_btn_connect, 480, 80);
    ui->scr_setup_network_btn_connect_label = lv_label_create(ui->scr_setup_network_btn_connect);
    lv_label_set_text(ui->scr_setup_network_btn_connect_label, "CONNECT");
    lv_label_set_long_mode(ui->scr_setup_network_btn_connect_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->scr_setup_network_btn_connect_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->scr_setup_network_btn_connect, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->scr_setup_network_btn_connect_label, LV_PCT(100));

    //Write style for scr_setup_network_btn_connect, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->scr_setup_network_btn_connect, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scr_setup_network_btn_connect, lv_color_hex(0x2D9CDB), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scr_setup_network_btn_connect, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->scr_setup_network_btn_connect, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_setup_network_btn_connect, 14, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_setup_network_btn_connect, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scr_setup_network_btn_connect, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scr_setup_network_btn_connect, &lv_font_Acme_Regular_30, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scr_setup_network_btn_connect, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scr_setup_network_btn_connect, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scr_setup_network_btn_save
    ui->scr_setup_network_btn_save = lv_button_create(ui->scr_setup_network_cont_btn_row);
    lv_obj_set_pos(ui->scr_setup_network_btn_save, 553, 2);
    lv_obj_set_size(ui->scr_setup_network_btn_save, 480, 80);
    ui->scr_setup_network_btn_save_label = lv_label_create(ui->scr_setup_network_btn_save);
    lv_label_set_text(ui->scr_setup_network_btn_save_label, "SAVE");
    lv_label_set_long_mode(ui->scr_setup_network_btn_save_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->scr_setup_network_btn_save_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->scr_setup_network_btn_save, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->scr_setup_network_btn_save_label, LV_PCT(100));

    //Write style for scr_setup_network_btn_save, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->scr_setup_network_btn_save, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scr_setup_network_btn_save, lv_color_hex(0x2B2B2B), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scr_setup_network_btn_save, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->scr_setup_network_btn_save, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_setup_network_btn_save, 14, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_setup_network_btn_save, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scr_setup_network_btn_save, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scr_setup_network_btn_save, &lv_font_Acme_Regular_30, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scr_setup_network_btn_save, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scr_setup_network_btn_save, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scr_setup_network_imgbtn_back
    ui->scr_setup_network_imgbtn_back = lv_imagebutton_create(ui->scr_setup_network);
    lv_obj_set_pos(ui->scr_setup_network_imgbtn_back, 40, 14);
    lv_obj_set_size(ui->scr_setup_network_imgbtn_back, 64, 64);
    lv_imagebutton_set_src(ui->scr_setup_network_imgbtn_back, LV_IMAGEBUTTON_STATE_RELEASED, &_leftarrow_RGB565A8_64x64, NULL, NULL);
    ui->scr_setup_network_imgbtn_back_label = lv_label_create(ui->scr_setup_network_imgbtn_back);
    lv_label_set_text(ui->scr_setup_network_imgbtn_back_label, "");
    lv_label_set_long_mode(ui->scr_setup_network_imgbtn_back_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->scr_setup_network_imgbtn_back_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->scr_setup_network_imgbtn_back, 0, LV_STATE_DEFAULT);

    //Write style for scr_setup_network_imgbtn_back, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_text_color(ui->scr_setup_network_imgbtn_back, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scr_setup_network_imgbtn_back, &lv_font_montserratMedium_12, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scr_setup_network_imgbtn_back, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scr_setup_network_imgbtn_back, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_setup_network_imgbtn_back, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style for scr_setup_network_imgbtn_back, Part: LV_PART_MAIN, State: LV_STATE_PRESSED.
    lv_obj_set_style_image_recolor_opa(ui->scr_setup_network_imgbtn_back, 0, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_image_opa(ui->scr_setup_network_imgbtn_back, 255, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_text_color(ui->scr_setup_network_imgbtn_back, lv_color_hex(0xFF33FF), LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_text_font(ui->scr_setup_network_imgbtn_back, &lv_font_montserratMedium_12, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_text_opa(ui->scr_setup_network_imgbtn_back, 255, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_shadow_width(ui->scr_setup_network_imgbtn_back, 0, LV_PART_MAIN|LV_STATE_PRESSED);

    //Write style for scr_setup_network_imgbtn_back, Part: LV_PART_MAIN, State: LV_STATE_CHECKED.
    lv_obj_set_style_image_recolor_opa(ui->scr_setup_network_imgbtn_back, 0, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_image_opa(ui->scr_setup_network_imgbtn_back, 255, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_text_color(ui->scr_setup_network_imgbtn_back, lv_color_hex(0xFF33FF), LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_text_font(ui->scr_setup_network_imgbtn_back, &lv_font_montserratMedium_12, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_text_opa(ui->scr_setup_network_imgbtn_back, 255, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_shadow_width(ui->scr_setup_network_imgbtn_back, 0, LV_PART_MAIN|LV_STATE_CHECKED);

    //Write style for scr_setup_network_imgbtn_back, Part: LV_PART_MAIN, State: LV_IMAGEBUTTON_STATE_RELEASED.
    lv_obj_set_style_image_recolor_opa(ui->scr_setup_network_imgbtn_back, 0, LV_PART_MAIN|LV_IMAGEBUTTON_STATE_RELEASED);
    lv_obj_set_style_image_opa(ui->scr_setup_network_imgbtn_back, 255, LV_PART_MAIN|LV_IMAGEBUTTON_STATE_RELEASED);

    //The custom code of scr_setup_network.


    //Update current screen layout.
    lv_obj_update_layout(ui->scr_setup_network);

    //Init events for screen.
    events_init_scr_setup_network(ui);
}
