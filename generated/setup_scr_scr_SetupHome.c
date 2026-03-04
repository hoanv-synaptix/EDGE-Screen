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



void setup_scr_scr_SetupHome(lv_ui *ui)
{
    //Write codes scr_SetupHome
    ui->scr_SetupHome = lv_obj_create(NULL);
    lv_obj_set_size(ui->scr_SetupHome, 1280, 720);
    lv_obj_set_scrollbar_mode(ui->scr_SetupHome, LV_SCROLLBAR_MODE_OFF);

    //Write style for scr_SetupHome, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->scr_SetupHome, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scr_SetupHome, lv_color_hex(0x121212), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scr_SetupHome, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scr_SetupHome_cont_root
    ui->scr_SetupHome_cont_root = lv_obj_create(ui->scr_SetupHome);
    lv_obj_set_pos(ui->scr_SetupHome_cont_root, 0, 0);
    lv_obj_set_size(ui->scr_SetupHome_cont_root, 1280, 720);
    lv_obj_set_scrollbar_mode(ui->scr_SetupHome_cont_root, LV_SCROLLBAR_MODE_OFF);

    //Write style for scr_SetupHome_cont_root, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scr_SetupHome_cont_root, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_SetupHome_cont_root, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scr_SetupHome_cont_root, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scr_SetupHome_cont_root, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scr_SetupHome_cont_root, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scr_SetupHome_cont_root, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scr_SetupHome_cont_root, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_SetupHome_cont_root, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scr_SetupHome_cont_topbar
    ui->scr_SetupHome_cont_topbar = lv_obj_create(ui->scr_SetupHome_cont_root);
    lv_obj_set_pos(ui->scr_SetupHome_cont_topbar, 0, 0);
    lv_obj_set_size(ui->scr_SetupHome_cont_topbar, 1280, 90);
    lv_obj_set_scrollbar_mode(ui->scr_SetupHome_cont_topbar, LV_SCROLLBAR_MODE_OFF);

    //Write style for scr_SetupHome_cont_topbar, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scr_SetupHome_cont_topbar, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_SetupHome_cont_topbar, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scr_SetupHome_cont_topbar, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scr_SetupHome_cont_topbar, lv_color_hex(0x2B2B2B), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scr_SetupHome_cont_topbar, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scr_SetupHome_cont_topbar, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scr_SetupHome_cont_topbar, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scr_SetupHome_cont_topbar, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scr_SetupHome_cont_topbar, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_SetupHome_cont_topbar, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scr_SetupHome_lbl_tiltle
    ui->scr_SetupHome_lbl_tiltle = lv_label_create(ui->scr_SetupHome_cont_topbar);
    lv_obj_set_pos(ui->scr_SetupHome_lbl_tiltle, 532, 20);
    lv_obj_set_size(ui->scr_SetupHome_lbl_tiltle, 216, 59);
    lv_label_set_text(ui->scr_SetupHome_lbl_tiltle, "SETUP");
    lv_label_set_long_mode(ui->scr_SetupHome_lbl_tiltle, LV_LABEL_LONG_WRAP);

    //Write style for scr_SetupHome_lbl_tiltle, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scr_SetupHome_lbl_tiltle, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_SetupHome_lbl_tiltle, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scr_SetupHome_lbl_tiltle, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scr_SetupHome_lbl_tiltle, &lv_font_Acme_Regular_50, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scr_SetupHome_lbl_tiltle, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->scr_SetupHome_lbl_tiltle, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->scr_SetupHome_lbl_tiltle, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scr_SetupHome_lbl_tiltle, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scr_SetupHome_lbl_tiltle, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scr_SetupHome_lbl_tiltle, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scr_SetupHome_lbl_tiltle, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scr_SetupHome_lbl_tiltle, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scr_SetupHome_lbl_tiltle, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_SetupHome_lbl_tiltle, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scr_SetupHome_cont_top_right
    ui->scr_SetupHome_cont_top_right = lv_obj_create(ui->scr_SetupHome_cont_topbar);
    lv_obj_set_pos(ui->scr_SetupHome_cont_top_right, 990, 0);
    lv_obj_set_size(ui->scr_SetupHome_cont_top_right, 270, 90);
    lv_obj_set_scrollbar_mode(ui->scr_SetupHome_cont_top_right, LV_SCROLLBAR_MODE_OFF);

    //Write style for scr_SetupHome_cont_top_right, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scr_SetupHome_cont_top_right, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_SetupHome_cont_top_right, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scr_SetupHome_cont_top_right, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scr_SetupHome_cont_top_right, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scr_SetupHome_cont_top_right, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scr_SetupHome_cont_top_right, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scr_SetupHome_cont_top_right, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_SetupHome_cont_top_right, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scr_SetupHome_lbl_device
    ui->scr_SetupHome_lbl_device = lv_label_create(ui->scr_SetupHome_cont_top_right);
    lv_obj_set_pos(ui->scr_SetupHome_lbl_device, 1, 39);
    lv_obj_set_size(ui->scr_SetupHome_lbl_device, 132, 32);
    lv_label_set_text(ui->scr_SetupHome_lbl_device, "EDGE-01");
    lv_label_set_long_mode(ui->scr_SetupHome_lbl_device, LV_LABEL_LONG_WRAP);

    //Write style for scr_SetupHome_lbl_device, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scr_SetupHome_lbl_device, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_SetupHome_lbl_device, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scr_SetupHome_lbl_device, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scr_SetupHome_lbl_device, &lv_font_Acme_Regular_30, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scr_SetupHome_lbl_device, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->scr_SetupHome_lbl_device, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->scr_SetupHome_lbl_device, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scr_SetupHome_lbl_device, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scr_SetupHome_lbl_device, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scr_SetupHome_lbl_device, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scr_SetupHome_lbl_device, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scr_SetupHome_lbl_device, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scr_SetupHome_lbl_device, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_SetupHome_lbl_device, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scr_SetupHome_btn_online
    ui->scr_SetupHome_btn_online = lv_button_create(ui->scr_SetupHome_cont_top_right);
    lv_obj_set_pos(ui->scr_SetupHome_btn_online, 128, 30);
    lv_obj_set_size(ui->scr_SetupHome_btn_online, 130, 50);
    ui->scr_SetupHome_btn_online_label = lv_label_create(ui->scr_SetupHome_btn_online);
    lv_label_set_text(ui->scr_SetupHome_btn_online_label, "ONLINE");
    lv_label_set_long_mode(ui->scr_SetupHome_btn_online_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->scr_SetupHome_btn_online_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->scr_SetupHome_btn_online, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->scr_SetupHome_btn_online_label, LV_PCT(100));

    //Write style for scr_SetupHome_btn_online, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->scr_SetupHome_btn_online, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scr_SetupHome_btn_online, lv_color_hex(0x2ecc71), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scr_SetupHome_btn_online, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->scr_SetupHome_btn_online, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_SetupHome_btn_online, 18, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_SetupHome_btn_online, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scr_SetupHome_btn_online, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scr_SetupHome_btn_online, &lv_font_arial_25, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scr_SetupHome_btn_online, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scr_SetupHome_btn_online, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scr_SetupHome_cont_list
    ui->scr_SetupHome_cont_list = lv_obj_create(ui->scr_SetupHome_cont_root);
    lv_obj_set_pos(ui->scr_SetupHome_cont_list, 40, 100);
    lv_obj_set_size(ui->scr_SetupHome_cont_list, 1200, 560);
    lv_obj_set_scrollbar_mode(ui->scr_SetupHome_cont_list, LV_SCROLLBAR_MODE_OFF);

    //Write style for scr_SetupHome_cont_list, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scr_SetupHome_cont_list, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_SetupHome_cont_list, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scr_SetupHome_cont_list, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scr_SetupHome_cont_list, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scr_SetupHome_cont_list, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scr_SetupHome_cont_list, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scr_SetupHome_cont_list, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_SetupHome_cont_list, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scr_SetupHome_card_network
    ui->scr_SetupHome_card_network = lv_obj_create(ui->scr_SetupHome_cont_list);
    lv_obj_set_pos(ui->scr_SetupHome_card_network, -6, 19);
    lv_obj_set_size(ui->scr_SetupHome_card_network, 1200, 120);
    lv_obj_set_scrollbar_mode(ui->scr_SetupHome_card_network, LV_SCROLLBAR_MODE_OFF);

    //Write style for scr_SetupHome_card_network, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scr_SetupHome_card_network, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_SetupHome_card_network, 22, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scr_SetupHome_card_network, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scr_SetupHome_card_network, lv_color_hex(0x1a1a1a), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scr_SetupHome_card_network, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scr_SetupHome_card_network, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scr_SetupHome_card_network, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scr_SetupHome_card_network, 24, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scr_SetupHome_card_network, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_SetupHome_card_network, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_color(ui->scr_SetupHome_card_network, lv_color_hex(0x1a1a1a), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_opa(ui->scr_SetupHome_card_network, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_spread(ui->scr_SetupHome_card_network, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_offset_x(ui->scr_SetupHome_card_network, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_offset_y(ui->scr_SetupHome_card_network, 2, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scr_SetupHome_lbl_net_sub
    ui->scr_SetupHome_lbl_net_sub = lv_label_create(ui->scr_SetupHome_card_network);
    lv_obj_set_pos(ui->scr_SetupHome_lbl_net_sub, 93, 68);
    lv_obj_set_size(ui->scr_SetupHome_lbl_net_sub, 358, 36);
    lv_label_set_text(ui->scr_SetupHome_lbl_net_sub, "Wi-fi: HVC_Wifi6     IP: 192.168.1.1");
    lv_label_set_long_mode(ui->scr_SetupHome_lbl_net_sub, LV_LABEL_LONG_WRAP);

    //Write style for scr_SetupHome_lbl_net_sub, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scr_SetupHome_lbl_net_sub, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_SetupHome_lbl_net_sub, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scr_SetupHome_lbl_net_sub, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scr_SetupHome_lbl_net_sub, &lv_font_arial_22, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scr_SetupHome_lbl_net_sub, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->scr_SetupHome_lbl_net_sub, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->scr_SetupHome_lbl_net_sub, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scr_SetupHome_lbl_net_sub, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scr_SetupHome_lbl_net_sub, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scr_SetupHome_lbl_net_sub, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scr_SetupHome_lbl_net_sub, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scr_SetupHome_lbl_net_sub, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scr_SetupHome_lbl_net_sub, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_SetupHome_lbl_net_sub, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scr_SetupHome_img_wifi
    ui->scr_SetupHome_img_wifi = lv_image_create(ui->scr_SetupHome_card_network);
    lv_obj_set_pos(ui->scr_SetupHome_img_wifi, 8, 24);
    lv_obj_set_size(ui->scr_SetupHome_img_wifi, 64, 64);
    lv_obj_add_flag(ui->scr_SetupHome_img_wifi, LV_OBJ_FLAG_CLICKABLE);
    lv_image_set_src(ui->scr_SetupHome_img_wifi, &_wifi_RGB565A8_64x64);
    lv_image_set_pivot(ui->scr_SetupHome_img_wifi, 50,50);
    lv_image_set_rotation(ui->scr_SetupHome_img_wifi, 0);

    //Write style for scr_SetupHome_img_wifi, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_image_recolor_opa(ui->scr_SetupHome_img_wifi, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_image_opa(ui->scr_SetupHome_img_wifi, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scr_SetupHome_lbl_net_tiltle
    ui->scr_SetupHome_lbl_net_tiltle = lv_label_create(ui->scr_SetupHome_card_network);
    lv_obj_set_pos(ui->scr_SetupHome_lbl_net_tiltle, 78, 19);
    lv_obj_set_size(ui->scr_SetupHome_lbl_net_tiltle, 143, 44);
    lv_label_set_text(ui->scr_SetupHome_lbl_net_tiltle, "Network");
    lv_label_set_long_mode(ui->scr_SetupHome_lbl_net_tiltle, LV_LABEL_LONG_WRAP);

    //Write style for scr_SetupHome_lbl_net_tiltle, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scr_SetupHome_lbl_net_tiltle, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_SetupHome_lbl_net_tiltle, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scr_SetupHome_lbl_net_tiltle, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scr_SetupHome_lbl_net_tiltle, &lv_font_Acme_Regular_30, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scr_SetupHome_lbl_net_tiltle, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->scr_SetupHome_lbl_net_tiltle, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->scr_SetupHome_lbl_net_tiltle, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scr_SetupHome_lbl_net_tiltle, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scr_SetupHome_lbl_net_tiltle, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scr_SetupHome_lbl_net_tiltle, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scr_SetupHome_lbl_net_tiltle, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scr_SetupHome_lbl_net_tiltle, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scr_SetupHome_lbl_net_tiltle, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_SetupHome_lbl_net_tiltle, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scr_SetupHome_lbl_net_status
    ui->scr_SetupHome_lbl_net_status = lv_label_create(ui->scr_SetupHome_card_network);
    lv_obj_set_pos(ui->scr_SetupHome_lbl_net_status, 909, 41);
    lv_obj_set_size(ui->scr_SetupHome_lbl_net_status, 146, 28);
    lv_label_set_text(ui->scr_SetupHome_lbl_net_status, "Connected");
    lv_label_set_long_mode(ui->scr_SetupHome_lbl_net_status, LV_LABEL_LONG_WRAP);

    //Write style for scr_SetupHome_lbl_net_status, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scr_SetupHome_lbl_net_status, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_SetupHome_lbl_net_status, 10, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scr_SetupHome_lbl_net_status, lv_color_hex(0x2ecc71), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scr_SetupHome_lbl_net_status, &lv_font_arial_25, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scr_SetupHome_lbl_net_status, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->scr_SetupHome_lbl_net_status, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->scr_SetupHome_lbl_net_status, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scr_SetupHome_lbl_net_status, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scr_SetupHome_lbl_net_status, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scr_SetupHome_lbl_net_status, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scr_SetupHome_lbl_net_status, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scr_SetupHome_lbl_net_status, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scr_SetupHome_lbl_net_status, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_SetupHome_lbl_net_status, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scr_SetupHome_btn_net
    ui->scr_SetupHome_btn_net = lv_button_create(ui->scr_SetupHome_card_network);
    lv_obj_set_pos(ui->scr_SetupHome_btn_net, 1022, 30);
    lv_obj_set_size(ui->scr_SetupHome_btn_net, 100, 50);
    ui->scr_SetupHome_btn_net_label = lv_label_create(ui->scr_SetupHome_btn_net);
    lv_label_set_text(ui->scr_SetupHome_btn_net_label, "" LV_SYMBOL_RIGHT " ");
    lv_label_set_long_mode(ui->scr_SetupHome_btn_net_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->scr_SetupHome_btn_net_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->scr_SetupHome_btn_net, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->scr_SetupHome_btn_net_label, LV_PCT(100));

    //Write style for scr_SetupHome_btn_net, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->scr_SetupHome_btn_net, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->scr_SetupHome_btn_net, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_SetupHome_btn_net, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_SetupHome_btn_net, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scr_SetupHome_btn_net, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scr_SetupHome_btn_net, &lv_font_montserratMedium_30, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scr_SetupHome_btn_net, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scr_SetupHome_btn_net, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scr_SetupHome_card_server
    ui->scr_SetupHome_card_server = lv_obj_create(ui->scr_SetupHome_cont_list);
    lv_obj_set_pos(ui->scr_SetupHome_card_server, -6, 163);
    lv_obj_set_size(ui->scr_SetupHome_card_server, 1200, 120);
    lv_obj_set_scrollbar_mode(ui->scr_SetupHome_card_server, LV_SCROLLBAR_MODE_OFF);

    //Write style for scr_SetupHome_card_server, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scr_SetupHome_card_server, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_SetupHome_card_server, 22, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scr_SetupHome_card_server, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scr_SetupHome_card_server, lv_color_hex(0x1a1a1a), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scr_SetupHome_card_server, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scr_SetupHome_card_server, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scr_SetupHome_card_server, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scr_SetupHome_card_server, 24, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scr_SetupHome_card_server, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_SetupHome_card_server, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_color(ui->scr_SetupHome_card_server, lv_color_hex(0x1a1a1a), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_opa(ui->scr_SetupHome_card_server, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_spread(ui->scr_SetupHome_card_server, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_offset_x(ui->scr_SetupHome_card_server, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_offset_y(ui->scr_SetupHome_card_server, 2, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scr_SetupHome_lbl_server_broker
    ui->scr_SetupHome_lbl_server_broker = lv_label_create(ui->scr_SetupHome_card_server);
    lv_obj_set_pos(ui->scr_SetupHome_lbl_server_broker, 93, 68);
    lv_obj_set_size(ui->scr_SetupHome_lbl_server_broker, 404, 36);
    lv_label_set_text(ui->scr_SetupHome_lbl_server_broker, "Broker: mqtt.local    Pending envents: 3");
    lv_label_set_long_mode(ui->scr_SetupHome_lbl_server_broker, LV_LABEL_LONG_WRAP);

    //Write style for scr_SetupHome_lbl_server_broker, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scr_SetupHome_lbl_server_broker, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_SetupHome_lbl_server_broker, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scr_SetupHome_lbl_server_broker, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scr_SetupHome_lbl_server_broker, &lv_font_arial_22, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scr_SetupHome_lbl_server_broker, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->scr_SetupHome_lbl_server_broker, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->scr_SetupHome_lbl_server_broker, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scr_SetupHome_lbl_server_broker, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scr_SetupHome_lbl_server_broker, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scr_SetupHome_lbl_server_broker, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scr_SetupHome_lbl_server_broker, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scr_SetupHome_lbl_server_broker, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scr_SetupHome_lbl_server_broker, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_SetupHome_lbl_server_broker, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scr_SetupHome_img_server
    ui->scr_SetupHome_img_server = lv_image_create(ui->scr_SetupHome_card_server);
    lv_obj_set_pos(ui->scr_SetupHome_img_server, 8, 24);
    lv_obj_set_size(ui->scr_SetupHome_img_server, 64, 64);
    lv_obj_add_flag(ui->scr_SetupHome_img_server, LV_OBJ_FLAG_CLICKABLE);
    lv_image_set_src(ui->scr_SetupHome_img_server, &_server3_RGB565A8_64x64);
    lv_image_set_pivot(ui->scr_SetupHome_img_server, 50,50);
    lv_image_set_rotation(ui->scr_SetupHome_img_server, 0);

    //Write style for scr_SetupHome_img_server, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_image_recolor_opa(ui->scr_SetupHome_img_server, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_image_opa(ui->scr_SetupHome_img_server, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scr_SetupHome_lbl_server_tiltle
    ui->scr_SetupHome_lbl_server_tiltle = lv_label_create(ui->scr_SetupHome_card_server);
    lv_obj_set_pos(ui->scr_SetupHome_lbl_server_tiltle, 78, 19);
    lv_obj_set_size(ui->scr_SetupHome_lbl_server_tiltle, 217, 44);
    lv_label_set_text(ui->scr_SetupHome_lbl_server_tiltle, "Server (MQTT)");
    lv_label_set_long_mode(ui->scr_SetupHome_lbl_server_tiltle, LV_LABEL_LONG_WRAP);

    //Write style for scr_SetupHome_lbl_server_tiltle, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scr_SetupHome_lbl_server_tiltle, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_SetupHome_lbl_server_tiltle, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scr_SetupHome_lbl_server_tiltle, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scr_SetupHome_lbl_server_tiltle, &lv_font_Acme_Regular_30, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scr_SetupHome_lbl_server_tiltle, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->scr_SetupHome_lbl_server_tiltle, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->scr_SetupHome_lbl_server_tiltle, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scr_SetupHome_lbl_server_tiltle, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scr_SetupHome_lbl_server_tiltle, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scr_SetupHome_lbl_server_tiltle, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scr_SetupHome_lbl_server_tiltle, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scr_SetupHome_lbl_server_tiltle, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scr_SetupHome_lbl_server_tiltle, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_SetupHome_lbl_server_tiltle, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scr_SetupHome_lbl_server_status
    ui->scr_SetupHome_lbl_server_status = lv_label_create(ui->scr_SetupHome_card_server);
    lv_obj_set_pos(ui->scr_SetupHome_lbl_server_status, 909, 42);
    lv_obj_set_size(ui->scr_SetupHome_lbl_server_status, 146, 28);
    lv_label_set_text(ui->scr_SetupHome_lbl_server_status, "Connected");
    lv_label_set_long_mode(ui->scr_SetupHome_lbl_server_status, LV_LABEL_LONG_WRAP);

    //Write style for scr_SetupHome_lbl_server_status, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scr_SetupHome_lbl_server_status, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_SetupHome_lbl_server_status, 10, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scr_SetupHome_lbl_server_status, lv_color_hex(0x2ecc71), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scr_SetupHome_lbl_server_status, &lv_font_arial_25, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scr_SetupHome_lbl_server_status, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->scr_SetupHome_lbl_server_status, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->scr_SetupHome_lbl_server_status, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scr_SetupHome_lbl_server_status, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scr_SetupHome_lbl_server_status, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scr_SetupHome_lbl_server_status, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scr_SetupHome_lbl_server_status, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scr_SetupHome_lbl_server_status, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scr_SetupHome_lbl_server_status, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_SetupHome_lbl_server_status, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scr_SetupHome_btn_server
    ui->scr_SetupHome_btn_server = lv_button_create(ui->scr_SetupHome_card_server);
    lv_obj_set_pos(ui->scr_SetupHome_btn_server, 1022, 30);
    lv_obj_set_size(ui->scr_SetupHome_btn_server, 100, 50);
    ui->scr_SetupHome_btn_server_label = lv_label_create(ui->scr_SetupHome_btn_server);
    lv_label_set_text(ui->scr_SetupHome_btn_server_label, "" LV_SYMBOL_RIGHT " ");
    lv_label_set_long_mode(ui->scr_SetupHome_btn_server_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->scr_SetupHome_btn_server_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->scr_SetupHome_btn_server, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->scr_SetupHome_btn_server_label, LV_PCT(100));

    //Write style for scr_SetupHome_btn_server, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->scr_SetupHome_btn_server, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->scr_SetupHome_btn_server, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_SetupHome_btn_server, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_SetupHome_btn_server, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scr_SetupHome_btn_server, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scr_SetupHome_btn_server, &lv_font_montserratMedium_30, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scr_SetupHome_btn_server, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scr_SetupHome_btn_server, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scr_SetupHome_card_sync
    ui->scr_SetupHome_card_sync = lv_obj_create(ui->scr_SetupHome_cont_list);
    lv_obj_set_pos(ui->scr_SetupHome_card_sync, -6, 307);
    lv_obj_set_size(ui->scr_SetupHome_card_sync, 1200, 120);
    lv_obj_set_scrollbar_mode(ui->scr_SetupHome_card_sync, LV_SCROLLBAR_MODE_OFF);

    //Write style for scr_SetupHome_card_sync, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scr_SetupHome_card_sync, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_SetupHome_card_sync, 22, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scr_SetupHome_card_sync, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scr_SetupHome_card_sync, lv_color_hex(0x1a1a1a), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scr_SetupHome_card_sync, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scr_SetupHome_card_sync, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scr_SetupHome_card_sync, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scr_SetupHome_card_sync, 24, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scr_SetupHome_card_sync, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_SetupHome_card_sync, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_color(ui->scr_SetupHome_card_sync, lv_color_hex(0x1a1a1a), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_opa(ui->scr_SetupHome_card_sync, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_spread(ui->scr_SetupHome_card_sync, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_offset_x(ui->scr_SetupHome_card_sync, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_offset_y(ui->scr_SetupHome_card_sync, 2, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scr_SetupHome_lbl_sync_time
    ui->scr_SetupHome_lbl_sync_time = lv_label_create(ui->scr_SetupHome_card_sync);
    lv_obj_set_pos(ui->scr_SetupHome_lbl_sync_time, 100, 66);
    lv_obj_set_size(ui->scr_SetupHome_lbl_sync_time, 360, 36);
    lv_label_set_text(ui->scr_SetupHome_lbl_sync_time, "Last: 10:15     Config version: v1.00");
    lv_label_set_long_mode(ui->scr_SetupHome_lbl_sync_time, LV_LABEL_LONG_WRAP);

    //Write style for scr_SetupHome_lbl_sync_time, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scr_SetupHome_lbl_sync_time, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_SetupHome_lbl_sync_time, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scr_SetupHome_lbl_sync_time, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scr_SetupHome_lbl_sync_time, &lv_font_arial_22, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scr_SetupHome_lbl_sync_time, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->scr_SetupHome_lbl_sync_time, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->scr_SetupHome_lbl_sync_time, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scr_SetupHome_lbl_sync_time, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scr_SetupHome_lbl_sync_time, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scr_SetupHome_lbl_sync_time, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scr_SetupHome_lbl_sync_time, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scr_SetupHome_lbl_sync_time, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scr_SetupHome_lbl_sync_time, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_SetupHome_lbl_sync_time, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scr_SetupHome_img_sync
    ui->scr_SetupHome_img_sync = lv_image_create(ui->scr_SetupHome_card_sync);
    lv_obj_set_pos(ui->scr_SetupHome_img_sync, 8, 23);
    lv_obj_set_size(ui->scr_SetupHome_img_sync, 64, 64);
    lv_obj_add_flag(ui->scr_SetupHome_img_sync, LV_OBJ_FLAG_CLICKABLE);
    lv_image_set_src(ui->scr_SetupHome_img_sync, &_sync_RGB565A8_64x64);
    lv_image_set_pivot(ui->scr_SetupHome_img_sync, 50,50);
    lv_image_set_rotation(ui->scr_SetupHome_img_sync, 0);

    //Write style for scr_SetupHome_img_sync, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_image_recolor_opa(ui->scr_SetupHome_img_sync, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_image_opa(ui->scr_SetupHome_img_sync, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scr_SetupHome_lbl_sync_tiltle
    ui->scr_SetupHome_lbl_sync_tiltle = lv_label_create(ui->scr_SetupHome_card_sync);
    lv_obj_set_pos(ui->scr_SetupHome_lbl_sync_tiltle, 98, 18);
    lv_obj_set_size(ui->scr_SetupHome_lbl_sync_tiltle, 133, 44);
    lv_label_set_text(ui->scr_SetupHome_lbl_sync_tiltle, "Data Sync");
    lv_label_set_long_mode(ui->scr_SetupHome_lbl_sync_tiltle, LV_LABEL_LONG_WRAP);

    //Write style for scr_SetupHome_lbl_sync_tiltle, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scr_SetupHome_lbl_sync_tiltle, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_SetupHome_lbl_sync_tiltle, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scr_SetupHome_lbl_sync_tiltle, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scr_SetupHome_lbl_sync_tiltle, &lv_font_Acme_Regular_30, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scr_SetupHome_lbl_sync_tiltle, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->scr_SetupHome_lbl_sync_tiltle, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->scr_SetupHome_lbl_sync_tiltle, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scr_SetupHome_lbl_sync_tiltle, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scr_SetupHome_lbl_sync_tiltle, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scr_SetupHome_lbl_sync_tiltle, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scr_SetupHome_lbl_sync_tiltle, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scr_SetupHome_lbl_sync_tiltle, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scr_SetupHome_lbl_sync_tiltle, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_SetupHome_lbl_sync_tiltle, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scr_SetupHome_lbl_sync_status
    ui->scr_SetupHome_lbl_sync_status = lv_label_create(ui->scr_SetupHome_card_sync);
    lv_obj_set_pos(ui->scr_SetupHome_lbl_sync_status, 913, 42);
    lv_obj_set_size(ui->scr_SetupHome_lbl_sync_status, 146, 28);
    lv_label_set_text(ui->scr_SetupHome_lbl_sync_status, "Sync Now");
    lv_label_set_long_mode(ui->scr_SetupHome_lbl_sync_status, LV_LABEL_LONG_WRAP);

    //Write style for scr_SetupHome_lbl_sync_status, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scr_SetupHome_lbl_sync_status, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_SetupHome_lbl_sync_status, 10, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scr_SetupHome_lbl_sync_status, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scr_SetupHome_lbl_sync_status, &lv_font_arial_25, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scr_SetupHome_lbl_sync_status, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->scr_SetupHome_lbl_sync_status, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->scr_SetupHome_lbl_sync_status, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scr_SetupHome_lbl_sync_status, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scr_SetupHome_lbl_sync_status, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scr_SetupHome_lbl_sync_status, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scr_SetupHome_lbl_sync_status, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scr_SetupHome_lbl_sync_status, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scr_SetupHome_lbl_sync_status, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_SetupHome_lbl_sync_status, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scr_SetupHome_btn_sync
    ui->scr_SetupHome_btn_sync = lv_button_create(ui->scr_SetupHome_card_sync);
    lv_obj_set_pos(ui->scr_SetupHome_btn_sync, 1022, 30);
    lv_obj_set_size(ui->scr_SetupHome_btn_sync, 100, 50);
    ui->scr_SetupHome_btn_sync_label = lv_label_create(ui->scr_SetupHome_btn_sync);
    lv_label_set_text(ui->scr_SetupHome_btn_sync_label, "" LV_SYMBOL_RIGHT " ");
    lv_label_set_long_mode(ui->scr_SetupHome_btn_sync_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->scr_SetupHome_btn_sync_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->scr_SetupHome_btn_sync, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->scr_SetupHome_btn_sync_label, LV_PCT(100));

    //Write style for scr_SetupHome_btn_sync, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->scr_SetupHome_btn_sync, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->scr_SetupHome_btn_sync, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_SetupHome_btn_sync, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_SetupHome_btn_sync, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scr_SetupHome_btn_sync, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scr_SetupHome_btn_sync, &lv_font_montserratMedium_30, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scr_SetupHome_btn_sync, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scr_SetupHome_btn_sync, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scr_SetupHome_card_system
    ui->scr_SetupHome_card_system = lv_obj_create(ui->scr_SetupHome_cont_list);
    lv_obj_set_pos(ui->scr_SetupHome_card_system, -6, 451);
    lv_obj_set_size(ui->scr_SetupHome_card_system, 1200, 120);
    lv_obj_set_scrollbar_mode(ui->scr_SetupHome_card_system, LV_SCROLLBAR_MODE_OFF);

    //Write style for scr_SetupHome_card_system, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scr_SetupHome_card_system, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_SetupHome_card_system, 22, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scr_SetupHome_card_system, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scr_SetupHome_card_system, lv_color_hex(0x1a1a1a), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scr_SetupHome_card_system, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scr_SetupHome_card_system, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scr_SetupHome_card_system, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scr_SetupHome_card_system, 24, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scr_SetupHome_card_system, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_SetupHome_card_system, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_color(ui->scr_SetupHome_card_system, lv_color_hex(0x1a1a1a), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_opa(ui->scr_SetupHome_card_system, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_spread(ui->scr_SetupHome_card_system, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_offset_x(ui->scr_SetupHome_card_system, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_offset_y(ui->scr_SetupHome_card_system, 2, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scr_SetupHome_lbl_sys_fw
    ui->scr_SetupHome_lbl_sys_fw = lv_label_create(ui->scr_SetupHome_card_system);
    lv_obj_set_pos(ui->scr_SetupHome_lbl_sys_fw, 93, 68);
    lv_obj_set_size(ui->scr_SetupHome_lbl_sys_fw, 318, 36);
    lv_label_set_text(ui->scr_SetupHome_lbl_sys_fw, "FW: 1.0.0     Uptime: 10h 10m");
    lv_label_set_long_mode(ui->scr_SetupHome_lbl_sys_fw, LV_LABEL_LONG_WRAP);

    //Write style for scr_SetupHome_lbl_sys_fw, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scr_SetupHome_lbl_sys_fw, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_SetupHome_lbl_sys_fw, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scr_SetupHome_lbl_sys_fw, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scr_SetupHome_lbl_sys_fw, &lv_font_arial_22, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scr_SetupHome_lbl_sys_fw, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->scr_SetupHome_lbl_sys_fw, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->scr_SetupHome_lbl_sys_fw, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scr_SetupHome_lbl_sys_fw, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scr_SetupHome_lbl_sys_fw, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scr_SetupHome_lbl_sys_fw, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scr_SetupHome_lbl_sys_fw, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scr_SetupHome_lbl_sys_fw, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scr_SetupHome_lbl_sys_fw, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_SetupHome_lbl_sys_fw, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scr_SetupHome_img_sys
    ui->scr_SetupHome_img_sys = lv_image_create(ui->scr_SetupHome_card_system);
    lv_obj_set_pos(ui->scr_SetupHome_img_sys, 8, 24);
    lv_obj_set_size(ui->scr_SetupHome_img_sys, 64, 64);
    lv_obj_add_flag(ui->scr_SetupHome_img_sys, LV_OBJ_FLAG_CLICKABLE);
    lv_image_set_src(ui->scr_SetupHome_img_sys, &_system_RGB565A8_64x64);
    lv_image_set_pivot(ui->scr_SetupHome_img_sys, 50,50);
    lv_image_set_rotation(ui->scr_SetupHome_img_sys, 0);

    //Write style for scr_SetupHome_img_sys, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_image_recolor_opa(ui->scr_SetupHome_img_sys, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_image_opa(ui->scr_SetupHome_img_sys, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scr_SetupHome_lbl_sys_tiltle
    ui->scr_SetupHome_lbl_sys_tiltle = lv_label_create(ui->scr_SetupHome_card_system);
    lv_obj_set_pos(ui->scr_SetupHome_lbl_sys_tiltle, 78, 19);
    lv_obj_set_size(ui->scr_SetupHome_lbl_sys_tiltle, 143, 44);
    lv_label_set_text(ui->scr_SetupHome_lbl_sys_tiltle, "System");
    lv_label_set_long_mode(ui->scr_SetupHome_lbl_sys_tiltle, LV_LABEL_LONG_WRAP);

    //Write style for scr_SetupHome_lbl_sys_tiltle, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scr_SetupHome_lbl_sys_tiltle, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_SetupHome_lbl_sys_tiltle, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scr_SetupHome_lbl_sys_tiltle, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scr_SetupHome_lbl_sys_tiltle, &lv_font_Acme_Regular_30, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scr_SetupHome_lbl_sys_tiltle, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->scr_SetupHome_lbl_sys_tiltle, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->scr_SetupHome_lbl_sys_tiltle, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scr_SetupHome_lbl_sys_tiltle, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scr_SetupHome_lbl_sys_tiltle, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scr_SetupHome_lbl_sys_tiltle, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scr_SetupHome_lbl_sys_tiltle, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scr_SetupHome_lbl_sys_tiltle, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scr_SetupHome_lbl_sys_tiltle, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_SetupHome_lbl_sys_tiltle, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scr_SetupHome_lbl_sys_info
    ui->scr_SetupHome_lbl_sys_info = lv_label_create(ui->scr_SetupHome_card_system);
    lv_obj_set_pos(ui->scr_SetupHome_lbl_sys_info, 991, 41);
    lv_obj_set_size(ui->scr_SetupHome_lbl_sys_info, 64, 28);
    lv_label_set_text(ui->scr_SetupHome_lbl_sys_info, "Info");
    lv_label_set_long_mode(ui->scr_SetupHome_lbl_sys_info, LV_LABEL_LONG_WRAP);

    //Write style for scr_SetupHome_lbl_sys_info, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scr_SetupHome_lbl_sys_info, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_SetupHome_lbl_sys_info, 10, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scr_SetupHome_lbl_sys_info, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scr_SetupHome_lbl_sys_info, &lv_font_arial_25, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scr_SetupHome_lbl_sys_info, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->scr_SetupHome_lbl_sys_info, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->scr_SetupHome_lbl_sys_info, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scr_SetupHome_lbl_sys_info, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scr_SetupHome_lbl_sys_info, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scr_SetupHome_lbl_sys_info, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scr_SetupHome_lbl_sys_info, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scr_SetupHome_lbl_sys_info, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scr_SetupHome_lbl_sys_info, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_SetupHome_lbl_sys_info, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scr_SetupHome_btn_sys
    ui->scr_SetupHome_btn_sys = lv_button_create(ui->scr_SetupHome_card_system);
    lv_obj_set_pos(ui->scr_SetupHome_btn_sys, 1022, 30);
    lv_obj_set_size(ui->scr_SetupHome_btn_sys, 100, 50);
    ui->scr_SetupHome_btn_sys_label = lv_label_create(ui->scr_SetupHome_btn_sys);
    lv_label_set_text(ui->scr_SetupHome_btn_sys_label, "" LV_SYMBOL_RIGHT " ");
    lv_label_set_long_mode(ui->scr_SetupHome_btn_sys_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->scr_SetupHome_btn_sys_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->scr_SetupHome_btn_sys, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->scr_SetupHome_btn_sys_label, LV_PCT(100));

    //Write style for scr_SetupHome_btn_sys, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->scr_SetupHome_btn_sys, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->scr_SetupHome_btn_sys, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_SetupHome_btn_sys, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_SetupHome_btn_sys, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scr_SetupHome_btn_sys, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scr_SetupHome_btn_sys, &lv_font_montserratMedium_30, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scr_SetupHome_btn_sys, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scr_SetupHome_btn_sys, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scr_SetupHome_imgbtn_back
    ui->scr_SetupHome_imgbtn_back = lv_imagebutton_create(ui->scr_SetupHome_cont_root);
    lv_obj_set_pos(ui->scr_SetupHome_imgbtn_back, 40, 14);
    lv_obj_set_size(ui->scr_SetupHome_imgbtn_back, 64, 64);
    lv_imagebutton_set_src(ui->scr_SetupHome_imgbtn_back, LV_IMAGEBUTTON_STATE_RELEASED, &_leftarrow_RGB565A8_64x64, NULL, NULL);
    ui->scr_SetupHome_imgbtn_back_label = lv_label_create(ui->scr_SetupHome_imgbtn_back);
    lv_label_set_text(ui->scr_SetupHome_imgbtn_back_label, "");
    lv_label_set_long_mode(ui->scr_SetupHome_imgbtn_back_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->scr_SetupHome_imgbtn_back_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->scr_SetupHome_imgbtn_back, 0, LV_STATE_DEFAULT);

    //Write style for scr_SetupHome_imgbtn_back, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_text_color(ui->scr_SetupHome_imgbtn_back, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scr_SetupHome_imgbtn_back, &lv_font_montserratMedium_12, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scr_SetupHome_imgbtn_back, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scr_SetupHome_imgbtn_back, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_SetupHome_imgbtn_back, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style for scr_SetupHome_imgbtn_back, Part: LV_PART_MAIN, State: LV_STATE_PRESSED.
    lv_obj_set_style_image_recolor_opa(ui->scr_SetupHome_imgbtn_back, 0, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_image_opa(ui->scr_SetupHome_imgbtn_back, 255, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_text_color(ui->scr_SetupHome_imgbtn_back, lv_color_hex(0xFF33FF), LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_text_font(ui->scr_SetupHome_imgbtn_back, &lv_font_montserratMedium_12, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_text_opa(ui->scr_SetupHome_imgbtn_back, 255, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_shadow_width(ui->scr_SetupHome_imgbtn_back, 0, LV_PART_MAIN|LV_STATE_PRESSED);

    //Write style for scr_SetupHome_imgbtn_back, Part: LV_PART_MAIN, State: LV_STATE_CHECKED.
    lv_obj_set_style_image_recolor_opa(ui->scr_SetupHome_imgbtn_back, 0, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_image_opa(ui->scr_SetupHome_imgbtn_back, 255, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_text_color(ui->scr_SetupHome_imgbtn_back, lv_color_hex(0xFF33FF), LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_text_font(ui->scr_SetupHome_imgbtn_back, &lv_font_montserratMedium_12, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_text_opa(ui->scr_SetupHome_imgbtn_back, 255, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_shadow_width(ui->scr_SetupHome_imgbtn_back, 0, LV_PART_MAIN|LV_STATE_CHECKED);

    //Write style for scr_SetupHome_imgbtn_back, Part: LV_PART_MAIN, State: LV_IMAGEBUTTON_STATE_RELEASED.
    lv_obj_set_style_image_recolor_opa(ui->scr_SetupHome_imgbtn_back, 0, LV_PART_MAIN|LV_IMAGEBUTTON_STATE_RELEASED);
    lv_obj_set_style_image_opa(ui->scr_SetupHome_imgbtn_back, 255, LV_PART_MAIN|LV_IMAGEBUTTON_STATE_RELEASED);

    //The custom code of scr_SetupHome.


    //Update current screen layout.
    lv_obj_update_layout(ui->scr_SetupHome);

    //Init events for screen.
    events_init_scr_SetupHome(ui);
}
