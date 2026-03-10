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



void setup_scr_scr_setupModbusMaster(lv_ui *ui)
{
    //Write codes scr_setupModbusMaster
    ui->scr_setupModbusMaster = lv_obj_create(NULL);
    lv_obj_set_size(ui->scr_setupModbusMaster, 1280, 720);
    lv_obj_set_scrollbar_mode(ui->scr_setupModbusMaster, LV_SCROLLBAR_MODE_OFF);

    //Write style for scr_setupModbusMaster, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->scr_setupModbusMaster, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scr_setupModbusMaster, lv_color_hex(0x121212), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scr_setupModbusMaster, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scr_setupModbusMaster_cont_root
    ui->scr_setupModbusMaster_cont_root = lv_obj_create(ui->scr_setupModbusMaster);
    lv_obj_set_pos(ui->scr_setupModbusMaster_cont_root, 0, 0);
    lv_obj_set_size(ui->scr_setupModbusMaster_cont_root, 1280, 720);
    lv_obj_set_scrollbar_mode(ui->scr_setupModbusMaster_cont_root, LV_SCROLLBAR_MODE_OFF);

    //Write style for scr_setupModbusMaster_cont_root, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scr_setupModbusMaster_cont_root, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_setupModbusMaster_cont_root, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scr_setupModbusMaster_cont_root, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scr_setupModbusMaster_cont_root, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scr_setupModbusMaster_cont_root, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scr_setupModbusMaster_cont_root, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scr_setupModbusMaster_cont_root, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_setupModbusMaster_cont_root, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scr_setupModbusMaster_cont_modbus_main
    ui->scr_setupModbusMaster_cont_modbus_main = lv_obj_create(ui->scr_setupModbusMaster_cont_root);
    lv_obj_set_pos(ui->scr_setupModbusMaster_cont_modbus_main, 43, 100);
    lv_obj_set_size(ui->scr_setupModbusMaster_cont_modbus_main, 1200, 600);
    lv_obj_set_scrollbar_mode(ui->scr_setupModbusMaster_cont_modbus_main, LV_SCROLLBAR_MODE_OFF);

    //Write style for scr_setupModbusMaster_cont_modbus_main, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scr_setupModbusMaster_cont_modbus_main, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_setupModbusMaster_cont_modbus_main, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scr_setupModbusMaster_cont_modbus_main, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scr_setupModbusMaster_cont_modbus_main, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scr_setupModbusMaster_cont_modbus_main, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scr_setupModbusMaster_cont_modbus_main, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scr_setupModbusMaster_cont_modbus_main, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_setupModbusMaster_cont_modbus_main, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scr_setupModbusMaster_cont_rs485
    ui->scr_setupModbusMaster_cont_rs485 = lv_obj_create(ui->scr_setupModbusMaster_cont_modbus_main);
    lv_obj_set_pos(ui->scr_setupModbusMaster_cont_rs485, 0, 2);
    lv_obj_set_size(ui->scr_setupModbusMaster_cont_rs485, 565, 522);
    lv_obj_set_scrollbar_mode(ui->scr_setupModbusMaster_cont_rs485, LV_SCROLLBAR_MODE_OFF);

    //Write style for scr_setupModbusMaster_cont_rs485, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scr_setupModbusMaster_cont_rs485, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_setupModbusMaster_cont_rs485, 12, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scr_setupModbusMaster_cont_rs485, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scr_setupModbusMaster_cont_rs485, lv_color_hex(0x2b2f3a), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scr_setupModbusMaster_cont_rs485, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scr_setupModbusMaster_cont_rs485, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scr_setupModbusMaster_cont_rs485, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scr_setupModbusMaster_cont_rs485, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scr_setupModbusMaster_cont_rs485, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_setupModbusMaster_cont_rs485, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scr_setupModbusMaster_dropdown_poll_Interval
    ui->scr_setupModbusMaster_dropdown_poll_Interval = lv_dropdown_create(ui->scr_setupModbusMaster_cont_rs485);
    lv_obj_set_pos(ui->scr_setupModbusMaster_dropdown_poll_Interval, 316, 447);
    lv_obj_set_size(ui->scr_setupModbusMaster_dropdown_poll_Interval, 200, 50);
    lv_dropdown_set_options(ui->scr_setupModbusMaster_dropdown_poll_Interval, "500\n1000\n2000");

    //Write style for scr_setupModbusMaster_dropdown_poll_Interval, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_text_color(ui->scr_setupModbusMaster_dropdown_poll_Interval, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scr_setupModbusMaster_dropdown_poll_Interval, &lv_font_montserratMedium_30, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scr_setupModbusMaster_dropdown_poll_Interval, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->scr_setupModbusMaster_dropdown_poll_Interval, 1, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->scr_setupModbusMaster_dropdown_poll_Interval, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->scr_setupModbusMaster_dropdown_poll_Interval, lv_color_hex(0xe1e6ee), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->scr_setupModbusMaster_dropdown_poll_Interval, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scr_setupModbusMaster_dropdown_poll_Interval, 8, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scr_setupModbusMaster_dropdown_poll_Interval, 6, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scr_setupModbusMaster_dropdown_poll_Interval, 6, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_setupModbusMaster_dropdown_poll_Interval, 1, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scr_setupModbusMaster_dropdown_poll_Interval, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scr_setupModbusMaster_dropdown_poll_Interval, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scr_setupModbusMaster_dropdown_poll_Interval, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_setupModbusMaster_dropdown_poll_Interval, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style state: LV_STATE_CHECKED for &style_scr_setupModbusMaster_dropdown_poll_Interval_extra_list_selected_checked
    static lv_style_t style_scr_setupModbusMaster_dropdown_poll_Interval_extra_list_selected_checked;
    ui_init_style(&style_scr_setupModbusMaster_dropdown_poll_Interval_extra_list_selected_checked);

    lv_style_set_border_width(&style_scr_setupModbusMaster_dropdown_poll_Interval_extra_list_selected_checked, 1);
    lv_style_set_border_opa(&style_scr_setupModbusMaster_dropdown_poll_Interval_extra_list_selected_checked, 255);
    lv_style_set_border_color(&style_scr_setupModbusMaster_dropdown_poll_Interval_extra_list_selected_checked, lv_color_hex(0xe1e6ee));
    lv_style_set_border_side(&style_scr_setupModbusMaster_dropdown_poll_Interval_extra_list_selected_checked, LV_BORDER_SIDE_FULL);
    lv_style_set_radius(&style_scr_setupModbusMaster_dropdown_poll_Interval_extra_list_selected_checked, 3);
    lv_style_set_bg_opa(&style_scr_setupModbusMaster_dropdown_poll_Interval_extra_list_selected_checked, 255);
    lv_style_set_bg_color(&style_scr_setupModbusMaster_dropdown_poll_Interval_extra_list_selected_checked, lv_color_hex(0x00a1b5));
    lv_style_set_bg_grad_dir(&style_scr_setupModbusMaster_dropdown_poll_Interval_extra_list_selected_checked, LV_GRAD_DIR_NONE);
    lv_obj_add_style(lv_dropdown_get_list(ui->scr_setupModbusMaster_dropdown_poll_Interval), &style_scr_setupModbusMaster_dropdown_poll_Interval_extra_list_selected_checked, LV_PART_SELECTED|LV_STATE_CHECKED);

    //Write style state: LV_STATE_DEFAULT for &style_scr_setupModbusMaster_dropdown_poll_Interval_extra_list_main_default
    static lv_style_t style_scr_setupModbusMaster_dropdown_poll_Interval_extra_list_main_default;
    ui_init_style(&style_scr_setupModbusMaster_dropdown_poll_Interval_extra_list_main_default);

    lv_style_set_max_height(&style_scr_setupModbusMaster_dropdown_poll_Interval_extra_list_main_default, 90);
    lv_style_set_text_color(&style_scr_setupModbusMaster_dropdown_poll_Interval_extra_list_main_default, lv_color_hex(0x0D3055));
    lv_style_set_text_font(&style_scr_setupModbusMaster_dropdown_poll_Interval_extra_list_main_default, &lv_font_montserratMedium_12);
    lv_style_set_text_opa(&style_scr_setupModbusMaster_dropdown_poll_Interval_extra_list_main_default, 255);
    lv_style_set_border_width(&style_scr_setupModbusMaster_dropdown_poll_Interval_extra_list_main_default, 1);
    lv_style_set_border_opa(&style_scr_setupModbusMaster_dropdown_poll_Interval_extra_list_main_default, 255);
    lv_style_set_border_color(&style_scr_setupModbusMaster_dropdown_poll_Interval_extra_list_main_default, lv_color_hex(0xe1e6ee));
    lv_style_set_border_side(&style_scr_setupModbusMaster_dropdown_poll_Interval_extra_list_main_default, LV_BORDER_SIDE_FULL);
    lv_style_set_radius(&style_scr_setupModbusMaster_dropdown_poll_Interval_extra_list_main_default, 3);
    lv_style_set_bg_opa(&style_scr_setupModbusMaster_dropdown_poll_Interval_extra_list_main_default, 255);
    lv_style_set_bg_color(&style_scr_setupModbusMaster_dropdown_poll_Interval_extra_list_main_default, lv_color_hex(0xffffff));
    lv_style_set_bg_grad_dir(&style_scr_setupModbusMaster_dropdown_poll_Interval_extra_list_main_default, LV_GRAD_DIR_NONE);
    lv_obj_add_style(lv_dropdown_get_list(ui->scr_setupModbusMaster_dropdown_poll_Interval), &style_scr_setupModbusMaster_dropdown_poll_Interval_extra_list_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style state: LV_STATE_DEFAULT for &style_scr_setupModbusMaster_dropdown_poll_Interval_extra_list_scrollbar_default
    static lv_style_t style_scr_setupModbusMaster_dropdown_poll_Interval_extra_list_scrollbar_default;
    ui_init_style(&style_scr_setupModbusMaster_dropdown_poll_Interval_extra_list_scrollbar_default);

    lv_style_set_radius(&style_scr_setupModbusMaster_dropdown_poll_Interval_extra_list_scrollbar_default, 3);
    lv_style_set_bg_opa(&style_scr_setupModbusMaster_dropdown_poll_Interval_extra_list_scrollbar_default, 255);
    lv_style_set_bg_color(&style_scr_setupModbusMaster_dropdown_poll_Interval_extra_list_scrollbar_default, lv_color_hex(0x00ff00));
    lv_style_set_bg_grad_dir(&style_scr_setupModbusMaster_dropdown_poll_Interval_extra_list_scrollbar_default, LV_GRAD_DIR_NONE);
    lv_obj_add_style(lv_dropdown_get_list(ui->scr_setupModbusMaster_dropdown_poll_Interval), &style_scr_setupModbusMaster_dropdown_poll_Interval_extra_list_scrollbar_default, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);

    //Write codes scr_setupModbusMaster_lbl_rs485_tiltle
    ui->scr_setupModbusMaster_lbl_rs485_tiltle = lv_label_create(ui->scr_setupModbusMaster_cont_rs485);
    lv_obj_set_pos(ui->scr_setupModbusMaster_lbl_rs485_tiltle, 113, 23);
    lv_obj_set_size(ui->scr_setupModbusMaster_lbl_rs485_tiltle, 326, 42);
    lv_label_set_text(ui->scr_setupModbusMaster_lbl_rs485_tiltle, "RS485 CONFIG");
    lv_label_set_long_mode(ui->scr_setupModbusMaster_lbl_rs485_tiltle, LV_LABEL_LONG_WRAP);

    //Write style for scr_setupModbusMaster_lbl_rs485_tiltle, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scr_setupModbusMaster_lbl_rs485_tiltle, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_setupModbusMaster_lbl_rs485_tiltle, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scr_setupModbusMaster_lbl_rs485_tiltle, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scr_setupModbusMaster_lbl_rs485_tiltle, &lv_font_arial_40, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scr_setupModbusMaster_lbl_rs485_tiltle, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->scr_setupModbusMaster_lbl_rs485_tiltle, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->scr_setupModbusMaster_lbl_rs485_tiltle, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scr_setupModbusMaster_lbl_rs485_tiltle, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scr_setupModbusMaster_lbl_rs485_tiltle, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scr_setupModbusMaster_lbl_rs485_tiltle, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scr_setupModbusMaster_lbl_rs485_tiltle, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scr_setupModbusMaster_lbl_rs485_tiltle, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scr_setupModbusMaster_lbl_rs485_tiltle, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_setupModbusMaster_lbl_rs485_tiltle, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scr_setupModbusMaster_lbl_mode
    ui->scr_setupModbusMaster_lbl_mode = lv_label_create(ui->scr_setupModbusMaster_cont_rs485);
    lv_obj_set_pos(ui->scr_setupModbusMaster_lbl_mode, 30, 98);
    lv_obj_set_size(ui->scr_setupModbusMaster_lbl_mode, 100, 32);
    lv_label_set_text(ui->scr_setupModbusMaster_lbl_mode, "Mode");
    lv_label_set_long_mode(ui->scr_setupModbusMaster_lbl_mode, LV_LABEL_LONG_WRAP);

    //Write style for scr_setupModbusMaster_lbl_mode, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scr_setupModbusMaster_lbl_mode, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_setupModbusMaster_lbl_mode, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scr_setupModbusMaster_lbl_mode, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scr_setupModbusMaster_lbl_mode, &lv_font_arial_30, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scr_setupModbusMaster_lbl_mode, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->scr_setupModbusMaster_lbl_mode, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->scr_setupModbusMaster_lbl_mode, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scr_setupModbusMaster_lbl_mode, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scr_setupModbusMaster_lbl_mode, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scr_setupModbusMaster_lbl_mode, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scr_setupModbusMaster_lbl_mode, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scr_setupModbusMaster_lbl_mode, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scr_setupModbusMaster_lbl_mode, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_setupModbusMaster_lbl_mode, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scr_setupModbusMaster_dropdown_baudrate
    ui->scr_setupModbusMaster_dropdown_baudrate = lv_dropdown_create(ui->scr_setupModbusMaster_cont_rs485);
    lv_obj_set_pos(ui->scr_setupModbusMaster_dropdown_baudrate, 318, 161);
    lv_obj_set_size(ui->scr_setupModbusMaster_dropdown_baudrate, 200, 50);
    lv_dropdown_set_options(ui->scr_setupModbusMaster_dropdown_baudrate, "9600\n11400\n19200\n115200");

    //Write style for scr_setupModbusMaster_dropdown_baudrate, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_text_color(ui->scr_setupModbusMaster_dropdown_baudrate, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scr_setupModbusMaster_dropdown_baudrate, &lv_font_montserratMedium_30, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scr_setupModbusMaster_dropdown_baudrate, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->scr_setupModbusMaster_dropdown_baudrate, 1, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->scr_setupModbusMaster_dropdown_baudrate, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->scr_setupModbusMaster_dropdown_baudrate, lv_color_hex(0xe1e6ee), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->scr_setupModbusMaster_dropdown_baudrate, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scr_setupModbusMaster_dropdown_baudrate, 8, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scr_setupModbusMaster_dropdown_baudrate, 6, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scr_setupModbusMaster_dropdown_baudrate, 6, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_setupModbusMaster_dropdown_baudrate, 1, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scr_setupModbusMaster_dropdown_baudrate, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scr_setupModbusMaster_dropdown_baudrate, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scr_setupModbusMaster_dropdown_baudrate, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_setupModbusMaster_dropdown_baudrate, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style state: LV_STATE_CHECKED for &style_scr_setupModbusMaster_dropdown_baudrate_extra_list_selected_checked
    static lv_style_t style_scr_setupModbusMaster_dropdown_baudrate_extra_list_selected_checked;
    ui_init_style(&style_scr_setupModbusMaster_dropdown_baudrate_extra_list_selected_checked);

    lv_style_set_border_width(&style_scr_setupModbusMaster_dropdown_baudrate_extra_list_selected_checked, 1);
    lv_style_set_border_opa(&style_scr_setupModbusMaster_dropdown_baudrate_extra_list_selected_checked, 255);
    lv_style_set_border_color(&style_scr_setupModbusMaster_dropdown_baudrate_extra_list_selected_checked, lv_color_hex(0xe1e6ee));
    lv_style_set_border_side(&style_scr_setupModbusMaster_dropdown_baudrate_extra_list_selected_checked, LV_BORDER_SIDE_FULL);
    lv_style_set_radius(&style_scr_setupModbusMaster_dropdown_baudrate_extra_list_selected_checked, 3);
    lv_style_set_bg_opa(&style_scr_setupModbusMaster_dropdown_baudrate_extra_list_selected_checked, 255);
    lv_style_set_bg_color(&style_scr_setupModbusMaster_dropdown_baudrate_extra_list_selected_checked, lv_color_hex(0x00a1b5));
    lv_style_set_bg_grad_dir(&style_scr_setupModbusMaster_dropdown_baudrate_extra_list_selected_checked, LV_GRAD_DIR_NONE);
    lv_obj_add_style(lv_dropdown_get_list(ui->scr_setupModbusMaster_dropdown_baudrate), &style_scr_setupModbusMaster_dropdown_baudrate_extra_list_selected_checked, LV_PART_SELECTED|LV_STATE_CHECKED);

    //Write style state: LV_STATE_DEFAULT for &style_scr_setupModbusMaster_dropdown_baudrate_extra_list_main_default
    static lv_style_t style_scr_setupModbusMaster_dropdown_baudrate_extra_list_main_default;
    ui_init_style(&style_scr_setupModbusMaster_dropdown_baudrate_extra_list_main_default);

    lv_style_set_max_height(&style_scr_setupModbusMaster_dropdown_baudrate_extra_list_main_default, 90);
    lv_style_set_text_color(&style_scr_setupModbusMaster_dropdown_baudrate_extra_list_main_default, lv_color_hex(0x0D3055));
    lv_style_set_text_font(&style_scr_setupModbusMaster_dropdown_baudrate_extra_list_main_default, &lv_font_montserratMedium_12);
    lv_style_set_text_opa(&style_scr_setupModbusMaster_dropdown_baudrate_extra_list_main_default, 255);
    lv_style_set_border_width(&style_scr_setupModbusMaster_dropdown_baudrate_extra_list_main_default, 1);
    lv_style_set_border_opa(&style_scr_setupModbusMaster_dropdown_baudrate_extra_list_main_default, 255);
    lv_style_set_border_color(&style_scr_setupModbusMaster_dropdown_baudrate_extra_list_main_default, lv_color_hex(0xe1e6ee));
    lv_style_set_border_side(&style_scr_setupModbusMaster_dropdown_baudrate_extra_list_main_default, LV_BORDER_SIDE_FULL);
    lv_style_set_radius(&style_scr_setupModbusMaster_dropdown_baudrate_extra_list_main_default, 3);
    lv_style_set_bg_opa(&style_scr_setupModbusMaster_dropdown_baudrate_extra_list_main_default, 255);
    lv_style_set_bg_color(&style_scr_setupModbusMaster_dropdown_baudrate_extra_list_main_default, lv_color_hex(0xffffff));
    lv_style_set_bg_grad_dir(&style_scr_setupModbusMaster_dropdown_baudrate_extra_list_main_default, LV_GRAD_DIR_NONE);
    lv_obj_add_style(lv_dropdown_get_list(ui->scr_setupModbusMaster_dropdown_baudrate), &style_scr_setupModbusMaster_dropdown_baudrate_extra_list_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style state: LV_STATE_DEFAULT for &style_scr_setupModbusMaster_dropdown_baudrate_extra_list_scrollbar_default
    static lv_style_t style_scr_setupModbusMaster_dropdown_baudrate_extra_list_scrollbar_default;
    ui_init_style(&style_scr_setupModbusMaster_dropdown_baudrate_extra_list_scrollbar_default);

    lv_style_set_radius(&style_scr_setupModbusMaster_dropdown_baudrate_extra_list_scrollbar_default, 3);
    lv_style_set_bg_opa(&style_scr_setupModbusMaster_dropdown_baudrate_extra_list_scrollbar_default, 255);
    lv_style_set_bg_color(&style_scr_setupModbusMaster_dropdown_baudrate_extra_list_scrollbar_default, lv_color_hex(0x00ff00));
    lv_style_set_bg_grad_dir(&style_scr_setupModbusMaster_dropdown_baudrate_extra_list_scrollbar_default, LV_GRAD_DIR_NONE);
    lv_obj_add_style(lv_dropdown_get_list(ui->scr_setupModbusMaster_dropdown_baudrate), &style_scr_setupModbusMaster_dropdown_baudrate_extra_list_scrollbar_default, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);

    //Write codes scr_setupModbusMaster_lbl_Baudrate
    ui->scr_setupModbusMaster_lbl_Baudrate = lv_label_create(ui->scr_setupModbusMaster_cont_rs485);
    lv_obj_set_pos(ui->scr_setupModbusMaster_lbl_Baudrate, 30, 169);
    lv_obj_set_size(ui->scr_setupModbusMaster_lbl_Baudrate, 154, 32);
    lv_label_set_text(ui->scr_setupModbusMaster_lbl_Baudrate, "Baudrate");
    lv_label_set_long_mode(ui->scr_setupModbusMaster_lbl_Baudrate, LV_LABEL_LONG_WRAP);

    //Write style for scr_setupModbusMaster_lbl_Baudrate, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scr_setupModbusMaster_lbl_Baudrate, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_setupModbusMaster_lbl_Baudrate, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scr_setupModbusMaster_lbl_Baudrate, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scr_setupModbusMaster_lbl_Baudrate, &lv_font_arial_30, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scr_setupModbusMaster_lbl_Baudrate, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->scr_setupModbusMaster_lbl_Baudrate, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->scr_setupModbusMaster_lbl_Baudrate, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scr_setupModbusMaster_lbl_Baudrate, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scr_setupModbusMaster_lbl_Baudrate, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scr_setupModbusMaster_lbl_Baudrate, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scr_setupModbusMaster_lbl_Baudrate, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scr_setupModbusMaster_lbl_Baudrate, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scr_setupModbusMaster_lbl_Baudrate, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_setupModbusMaster_lbl_Baudrate, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scr_setupModbusMaster_dropdown_parity
    ui->scr_setupModbusMaster_dropdown_parity = lv_dropdown_create(ui->scr_setupModbusMaster_cont_rs485);
    lv_obj_set_pos(ui->scr_setupModbusMaster_dropdown_parity, 317, 233);
    lv_obj_set_size(ui->scr_setupModbusMaster_dropdown_parity, 200, 50);
    lv_dropdown_set_options(ui->scr_setupModbusMaster_dropdown_parity, "None\nEven\nOdd");

    //Write style for scr_setupModbusMaster_dropdown_parity, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_text_color(ui->scr_setupModbusMaster_dropdown_parity, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scr_setupModbusMaster_dropdown_parity, &lv_font_montserratMedium_30, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scr_setupModbusMaster_dropdown_parity, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->scr_setupModbusMaster_dropdown_parity, 1, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->scr_setupModbusMaster_dropdown_parity, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->scr_setupModbusMaster_dropdown_parity, lv_color_hex(0xe1e6ee), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->scr_setupModbusMaster_dropdown_parity, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scr_setupModbusMaster_dropdown_parity, 8, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scr_setupModbusMaster_dropdown_parity, 6, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scr_setupModbusMaster_dropdown_parity, 6, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_setupModbusMaster_dropdown_parity, 1, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scr_setupModbusMaster_dropdown_parity, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scr_setupModbusMaster_dropdown_parity, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scr_setupModbusMaster_dropdown_parity, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_setupModbusMaster_dropdown_parity, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style state: LV_STATE_CHECKED for &style_scr_setupModbusMaster_dropdown_parity_extra_list_selected_checked
    static lv_style_t style_scr_setupModbusMaster_dropdown_parity_extra_list_selected_checked;
    ui_init_style(&style_scr_setupModbusMaster_dropdown_parity_extra_list_selected_checked);

    lv_style_set_border_width(&style_scr_setupModbusMaster_dropdown_parity_extra_list_selected_checked, 1);
    lv_style_set_border_opa(&style_scr_setupModbusMaster_dropdown_parity_extra_list_selected_checked, 255);
    lv_style_set_border_color(&style_scr_setupModbusMaster_dropdown_parity_extra_list_selected_checked, lv_color_hex(0xe1e6ee));
    lv_style_set_border_side(&style_scr_setupModbusMaster_dropdown_parity_extra_list_selected_checked, LV_BORDER_SIDE_FULL);
    lv_style_set_radius(&style_scr_setupModbusMaster_dropdown_parity_extra_list_selected_checked, 3);
    lv_style_set_bg_opa(&style_scr_setupModbusMaster_dropdown_parity_extra_list_selected_checked, 255);
    lv_style_set_bg_color(&style_scr_setupModbusMaster_dropdown_parity_extra_list_selected_checked, lv_color_hex(0x00a1b5));
    lv_style_set_bg_grad_dir(&style_scr_setupModbusMaster_dropdown_parity_extra_list_selected_checked, LV_GRAD_DIR_NONE);
    lv_obj_add_style(lv_dropdown_get_list(ui->scr_setupModbusMaster_dropdown_parity), &style_scr_setupModbusMaster_dropdown_parity_extra_list_selected_checked, LV_PART_SELECTED|LV_STATE_CHECKED);

    //Write style state: LV_STATE_DEFAULT for &style_scr_setupModbusMaster_dropdown_parity_extra_list_main_default
    static lv_style_t style_scr_setupModbusMaster_dropdown_parity_extra_list_main_default;
    ui_init_style(&style_scr_setupModbusMaster_dropdown_parity_extra_list_main_default);

    lv_style_set_max_height(&style_scr_setupModbusMaster_dropdown_parity_extra_list_main_default, 90);
    lv_style_set_text_color(&style_scr_setupModbusMaster_dropdown_parity_extra_list_main_default, lv_color_hex(0x0D3055));
    lv_style_set_text_font(&style_scr_setupModbusMaster_dropdown_parity_extra_list_main_default, &lv_font_montserratMedium_12);
    lv_style_set_text_opa(&style_scr_setupModbusMaster_dropdown_parity_extra_list_main_default, 255);
    lv_style_set_border_width(&style_scr_setupModbusMaster_dropdown_parity_extra_list_main_default, 1);
    lv_style_set_border_opa(&style_scr_setupModbusMaster_dropdown_parity_extra_list_main_default, 255);
    lv_style_set_border_color(&style_scr_setupModbusMaster_dropdown_parity_extra_list_main_default, lv_color_hex(0xe1e6ee));
    lv_style_set_border_side(&style_scr_setupModbusMaster_dropdown_parity_extra_list_main_default, LV_BORDER_SIDE_FULL);
    lv_style_set_radius(&style_scr_setupModbusMaster_dropdown_parity_extra_list_main_default, 3);
    lv_style_set_bg_opa(&style_scr_setupModbusMaster_dropdown_parity_extra_list_main_default, 255);
    lv_style_set_bg_color(&style_scr_setupModbusMaster_dropdown_parity_extra_list_main_default, lv_color_hex(0xffffff));
    lv_style_set_bg_grad_dir(&style_scr_setupModbusMaster_dropdown_parity_extra_list_main_default, LV_GRAD_DIR_NONE);
    lv_obj_add_style(lv_dropdown_get_list(ui->scr_setupModbusMaster_dropdown_parity), &style_scr_setupModbusMaster_dropdown_parity_extra_list_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style state: LV_STATE_DEFAULT for &style_scr_setupModbusMaster_dropdown_parity_extra_list_scrollbar_default
    static lv_style_t style_scr_setupModbusMaster_dropdown_parity_extra_list_scrollbar_default;
    ui_init_style(&style_scr_setupModbusMaster_dropdown_parity_extra_list_scrollbar_default);

    lv_style_set_radius(&style_scr_setupModbusMaster_dropdown_parity_extra_list_scrollbar_default, 3);
    lv_style_set_bg_opa(&style_scr_setupModbusMaster_dropdown_parity_extra_list_scrollbar_default, 255);
    lv_style_set_bg_color(&style_scr_setupModbusMaster_dropdown_parity_extra_list_scrollbar_default, lv_color_hex(0x00ff00));
    lv_style_set_bg_grad_dir(&style_scr_setupModbusMaster_dropdown_parity_extra_list_scrollbar_default, LV_GRAD_DIR_NONE);
    lv_obj_add_style(lv_dropdown_get_list(ui->scr_setupModbusMaster_dropdown_parity), &style_scr_setupModbusMaster_dropdown_parity_extra_list_scrollbar_default, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);

    //Write codes scr_setupModbusMaster_lbl_parity
    ui->scr_setupModbusMaster_lbl_parity = lv_label_create(ui->scr_setupModbusMaster_cont_rs485);
    lv_obj_set_pos(ui->scr_setupModbusMaster_lbl_parity, 29, 241);
    lv_obj_set_size(ui->scr_setupModbusMaster_lbl_parity, 116, 32);
    lv_label_set_text(ui->scr_setupModbusMaster_lbl_parity, "Parity");
    lv_label_set_long_mode(ui->scr_setupModbusMaster_lbl_parity, LV_LABEL_LONG_WRAP);

    //Write style for scr_setupModbusMaster_lbl_parity, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scr_setupModbusMaster_lbl_parity, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_setupModbusMaster_lbl_parity, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scr_setupModbusMaster_lbl_parity, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scr_setupModbusMaster_lbl_parity, &lv_font_arial_30, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scr_setupModbusMaster_lbl_parity, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->scr_setupModbusMaster_lbl_parity, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->scr_setupModbusMaster_lbl_parity, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scr_setupModbusMaster_lbl_parity, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scr_setupModbusMaster_lbl_parity, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scr_setupModbusMaster_lbl_parity, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scr_setupModbusMaster_lbl_parity, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scr_setupModbusMaster_lbl_parity, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scr_setupModbusMaster_lbl_parity, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_setupModbusMaster_lbl_parity, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scr_setupModbusMaster_dropdown_bitstop
    ui->scr_setupModbusMaster_dropdown_bitstop = lv_dropdown_create(ui->scr_setupModbusMaster_cont_rs485);
    lv_obj_set_pos(ui->scr_setupModbusMaster_dropdown_bitstop, 317, 304);
    lv_obj_set_size(ui->scr_setupModbusMaster_dropdown_bitstop, 200, 50);
    lv_dropdown_set_options(ui->scr_setupModbusMaster_dropdown_bitstop, "1\n2");

    //Write style for scr_setupModbusMaster_dropdown_bitstop, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_text_color(ui->scr_setupModbusMaster_dropdown_bitstop, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scr_setupModbusMaster_dropdown_bitstop, &lv_font_montserratMedium_30, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scr_setupModbusMaster_dropdown_bitstop, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->scr_setupModbusMaster_dropdown_bitstop, 1, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->scr_setupModbusMaster_dropdown_bitstop, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->scr_setupModbusMaster_dropdown_bitstop, lv_color_hex(0xe1e6ee), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->scr_setupModbusMaster_dropdown_bitstop, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scr_setupModbusMaster_dropdown_bitstop, 8, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scr_setupModbusMaster_dropdown_bitstop, 6, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scr_setupModbusMaster_dropdown_bitstop, 6, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_setupModbusMaster_dropdown_bitstop, 1, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scr_setupModbusMaster_dropdown_bitstop, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scr_setupModbusMaster_dropdown_bitstop, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scr_setupModbusMaster_dropdown_bitstop, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_setupModbusMaster_dropdown_bitstop, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style state: LV_STATE_CHECKED for &style_scr_setupModbusMaster_dropdown_bitstop_extra_list_selected_checked
    static lv_style_t style_scr_setupModbusMaster_dropdown_bitstop_extra_list_selected_checked;
    ui_init_style(&style_scr_setupModbusMaster_dropdown_bitstop_extra_list_selected_checked);

    lv_style_set_border_width(&style_scr_setupModbusMaster_dropdown_bitstop_extra_list_selected_checked, 1);
    lv_style_set_border_opa(&style_scr_setupModbusMaster_dropdown_bitstop_extra_list_selected_checked, 255);
    lv_style_set_border_color(&style_scr_setupModbusMaster_dropdown_bitstop_extra_list_selected_checked, lv_color_hex(0xe1e6ee));
    lv_style_set_border_side(&style_scr_setupModbusMaster_dropdown_bitstop_extra_list_selected_checked, LV_BORDER_SIDE_FULL);
    lv_style_set_radius(&style_scr_setupModbusMaster_dropdown_bitstop_extra_list_selected_checked, 3);
    lv_style_set_bg_opa(&style_scr_setupModbusMaster_dropdown_bitstop_extra_list_selected_checked, 255);
    lv_style_set_bg_color(&style_scr_setupModbusMaster_dropdown_bitstop_extra_list_selected_checked, lv_color_hex(0x00a1b5));
    lv_style_set_bg_grad_dir(&style_scr_setupModbusMaster_dropdown_bitstop_extra_list_selected_checked, LV_GRAD_DIR_NONE);
    lv_obj_add_style(lv_dropdown_get_list(ui->scr_setupModbusMaster_dropdown_bitstop), &style_scr_setupModbusMaster_dropdown_bitstop_extra_list_selected_checked, LV_PART_SELECTED|LV_STATE_CHECKED);

    //Write style state: LV_STATE_DEFAULT for &style_scr_setupModbusMaster_dropdown_bitstop_extra_list_main_default
    static lv_style_t style_scr_setupModbusMaster_dropdown_bitstop_extra_list_main_default;
    ui_init_style(&style_scr_setupModbusMaster_dropdown_bitstop_extra_list_main_default);

    lv_style_set_max_height(&style_scr_setupModbusMaster_dropdown_bitstop_extra_list_main_default, 90);
    lv_style_set_text_color(&style_scr_setupModbusMaster_dropdown_bitstop_extra_list_main_default, lv_color_hex(0x0D3055));
    lv_style_set_text_font(&style_scr_setupModbusMaster_dropdown_bitstop_extra_list_main_default, &lv_font_montserratMedium_12);
    lv_style_set_text_opa(&style_scr_setupModbusMaster_dropdown_bitstop_extra_list_main_default, 255);
    lv_style_set_border_width(&style_scr_setupModbusMaster_dropdown_bitstop_extra_list_main_default, 1);
    lv_style_set_border_opa(&style_scr_setupModbusMaster_dropdown_bitstop_extra_list_main_default, 255);
    lv_style_set_border_color(&style_scr_setupModbusMaster_dropdown_bitstop_extra_list_main_default, lv_color_hex(0xe1e6ee));
    lv_style_set_border_side(&style_scr_setupModbusMaster_dropdown_bitstop_extra_list_main_default, LV_BORDER_SIDE_FULL);
    lv_style_set_radius(&style_scr_setupModbusMaster_dropdown_bitstop_extra_list_main_default, 3);
    lv_style_set_bg_opa(&style_scr_setupModbusMaster_dropdown_bitstop_extra_list_main_default, 255);
    lv_style_set_bg_color(&style_scr_setupModbusMaster_dropdown_bitstop_extra_list_main_default, lv_color_hex(0xffffff));
    lv_style_set_bg_grad_dir(&style_scr_setupModbusMaster_dropdown_bitstop_extra_list_main_default, LV_GRAD_DIR_NONE);
    lv_obj_add_style(lv_dropdown_get_list(ui->scr_setupModbusMaster_dropdown_bitstop), &style_scr_setupModbusMaster_dropdown_bitstop_extra_list_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style state: LV_STATE_DEFAULT for &style_scr_setupModbusMaster_dropdown_bitstop_extra_list_scrollbar_default
    static lv_style_t style_scr_setupModbusMaster_dropdown_bitstop_extra_list_scrollbar_default;
    ui_init_style(&style_scr_setupModbusMaster_dropdown_bitstop_extra_list_scrollbar_default);

    lv_style_set_radius(&style_scr_setupModbusMaster_dropdown_bitstop_extra_list_scrollbar_default, 3);
    lv_style_set_bg_opa(&style_scr_setupModbusMaster_dropdown_bitstop_extra_list_scrollbar_default, 255);
    lv_style_set_bg_color(&style_scr_setupModbusMaster_dropdown_bitstop_extra_list_scrollbar_default, lv_color_hex(0x00ff00));
    lv_style_set_bg_grad_dir(&style_scr_setupModbusMaster_dropdown_bitstop_extra_list_scrollbar_default, LV_GRAD_DIR_NONE);
    lv_obj_add_style(lv_dropdown_get_list(ui->scr_setupModbusMaster_dropdown_bitstop), &style_scr_setupModbusMaster_dropdown_bitstop_extra_list_scrollbar_default, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);

    //Write codes scr_setupModbusMaster_lbl_stopbit
    ui->scr_setupModbusMaster_lbl_stopbit = lv_label_create(ui->scr_setupModbusMaster_cont_rs485);
    lv_obj_set_pos(ui->scr_setupModbusMaster_lbl_stopbit, 29, 312);
    lv_obj_set_size(ui->scr_setupModbusMaster_lbl_stopbit, 159, 32);
    lv_label_set_text(ui->scr_setupModbusMaster_lbl_stopbit, "Stop Bits");
    lv_label_set_long_mode(ui->scr_setupModbusMaster_lbl_stopbit, LV_LABEL_LONG_WRAP);

    //Write style for scr_setupModbusMaster_lbl_stopbit, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scr_setupModbusMaster_lbl_stopbit, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_setupModbusMaster_lbl_stopbit, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scr_setupModbusMaster_lbl_stopbit, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scr_setupModbusMaster_lbl_stopbit, &lv_font_arial_30, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scr_setupModbusMaster_lbl_stopbit, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->scr_setupModbusMaster_lbl_stopbit, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->scr_setupModbusMaster_lbl_stopbit, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scr_setupModbusMaster_lbl_stopbit, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scr_setupModbusMaster_lbl_stopbit, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scr_setupModbusMaster_lbl_stopbit, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scr_setupModbusMaster_lbl_stopbit, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scr_setupModbusMaster_lbl_stopbit, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scr_setupModbusMaster_lbl_stopbit, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_setupModbusMaster_lbl_stopbit, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scr_setupModbusMaster_dropdown_timeout
    ui->scr_setupModbusMaster_dropdown_timeout = lv_dropdown_create(ui->scr_setupModbusMaster_cont_rs485);
    lv_obj_set_pos(ui->scr_setupModbusMaster_dropdown_timeout, 317, 375);
    lv_obj_set_size(ui->scr_setupModbusMaster_dropdown_timeout, 200, 50);
    lv_dropdown_set_options(ui->scr_setupModbusMaster_dropdown_timeout, "500\n1000");

    //Write style for scr_setupModbusMaster_dropdown_timeout, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_text_color(ui->scr_setupModbusMaster_dropdown_timeout, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scr_setupModbusMaster_dropdown_timeout, &lv_font_montserratMedium_30, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scr_setupModbusMaster_dropdown_timeout, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->scr_setupModbusMaster_dropdown_timeout, 1, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->scr_setupModbusMaster_dropdown_timeout, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->scr_setupModbusMaster_dropdown_timeout, lv_color_hex(0xe1e6ee), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->scr_setupModbusMaster_dropdown_timeout, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scr_setupModbusMaster_dropdown_timeout, 8, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scr_setupModbusMaster_dropdown_timeout, 6, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scr_setupModbusMaster_dropdown_timeout, 6, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_setupModbusMaster_dropdown_timeout, 1, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scr_setupModbusMaster_dropdown_timeout, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scr_setupModbusMaster_dropdown_timeout, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scr_setupModbusMaster_dropdown_timeout, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_setupModbusMaster_dropdown_timeout, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style state: LV_STATE_CHECKED for &style_scr_setupModbusMaster_dropdown_timeout_extra_list_selected_checked
    static lv_style_t style_scr_setupModbusMaster_dropdown_timeout_extra_list_selected_checked;
    ui_init_style(&style_scr_setupModbusMaster_dropdown_timeout_extra_list_selected_checked);

    lv_style_set_border_width(&style_scr_setupModbusMaster_dropdown_timeout_extra_list_selected_checked, 1);
    lv_style_set_border_opa(&style_scr_setupModbusMaster_dropdown_timeout_extra_list_selected_checked, 255);
    lv_style_set_border_color(&style_scr_setupModbusMaster_dropdown_timeout_extra_list_selected_checked, lv_color_hex(0xe1e6ee));
    lv_style_set_border_side(&style_scr_setupModbusMaster_dropdown_timeout_extra_list_selected_checked, LV_BORDER_SIDE_FULL);
    lv_style_set_radius(&style_scr_setupModbusMaster_dropdown_timeout_extra_list_selected_checked, 3);
    lv_style_set_bg_opa(&style_scr_setupModbusMaster_dropdown_timeout_extra_list_selected_checked, 255);
    lv_style_set_bg_color(&style_scr_setupModbusMaster_dropdown_timeout_extra_list_selected_checked, lv_color_hex(0x00a1b5));
    lv_style_set_bg_grad_dir(&style_scr_setupModbusMaster_dropdown_timeout_extra_list_selected_checked, LV_GRAD_DIR_NONE);
    lv_obj_add_style(lv_dropdown_get_list(ui->scr_setupModbusMaster_dropdown_timeout), &style_scr_setupModbusMaster_dropdown_timeout_extra_list_selected_checked, LV_PART_SELECTED|LV_STATE_CHECKED);

    //Write style state: LV_STATE_DEFAULT for &style_scr_setupModbusMaster_dropdown_timeout_extra_list_main_default
    static lv_style_t style_scr_setupModbusMaster_dropdown_timeout_extra_list_main_default;
    ui_init_style(&style_scr_setupModbusMaster_dropdown_timeout_extra_list_main_default);

    lv_style_set_max_height(&style_scr_setupModbusMaster_dropdown_timeout_extra_list_main_default, 90);
    lv_style_set_text_color(&style_scr_setupModbusMaster_dropdown_timeout_extra_list_main_default, lv_color_hex(0x0D3055));
    lv_style_set_text_font(&style_scr_setupModbusMaster_dropdown_timeout_extra_list_main_default, &lv_font_montserratMedium_12);
    lv_style_set_text_opa(&style_scr_setupModbusMaster_dropdown_timeout_extra_list_main_default, 255);
    lv_style_set_border_width(&style_scr_setupModbusMaster_dropdown_timeout_extra_list_main_default, 1);
    lv_style_set_border_opa(&style_scr_setupModbusMaster_dropdown_timeout_extra_list_main_default, 255);
    lv_style_set_border_color(&style_scr_setupModbusMaster_dropdown_timeout_extra_list_main_default, lv_color_hex(0xe1e6ee));
    lv_style_set_border_side(&style_scr_setupModbusMaster_dropdown_timeout_extra_list_main_default, LV_BORDER_SIDE_FULL);
    lv_style_set_radius(&style_scr_setupModbusMaster_dropdown_timeout_extra_list_main_default, 3);
    lv_style_set_bg_opa(&style_scr_setupModbusMaster_dropdown_timeout_extra_list_main_default, 255);
    lv_style_set_bg_color(&style_scr_setupModbusMaster_dropdown_timeout_extra_list_main_default, lv_color_hex(0xffffff));
    lv_style_set_bg_grad_dir(&style_scr_setupModbusMaster_dropdown_timeout_extra_list_main_default, LV_GRAD_DIR_NONE);
    lv_obj_add_style(lv_dropdown_get_list(ui->scr_setupModbusMaster_dropdown_timeout), &style_scr_setupModbusMaster_dropdown_timeout_extra_list_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style state: LV_STATE_DEFAULT for &style_scr_setupModbusMaster_dropdown_timeout_extra_list_scrollbar_default
    static lv_style_t style_scr_setupModbusMaster_dropdown_timeout_extra_list_scrollbar_default;
    ui_init_style(&style_scr_setupModbusMaster_dropdown_timeout_extra_list_scrollbar_default);

    lv_style_set_radius(&style_scr_setupModbusMaster_dropdown_timeout_extra_list_scrollbar_default, 3);
    lv_style_set_bg_opa(&style_scr_setupModbusMaster_dropdown_timeout_extra_list_scrollbar_default, 255);
    lv_style_set_bg_color(&style_scr_setupModbusMaster_dropdown_timeout_extra_list_scrollbar_default, lv_color_hex(0x00ff00));
    lv_style_set_bg_grad_dir(&style_scr_setupModbusMaster_dropdown_timeout_extra_list_scrollbar_default, LV_GRAD_DIR_NONE);
    lv_obj_add_style(lv_dropdown_get_list(ui->scr_setupModbusMaster_dropdown_timeout), &style_scr_setupModbusMaster_dropdown_timeout_extra_list_scrollbar_default, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);

    //Write codes scr_setupModbusMaster_lbl_timeout
    ui->scr_setupModbusMaster_lbl_timeout = lv_label_create(ui->scr_setupModbusMaster_cont_rs485);
    lv_obj_set_pos(ui->scr_setupModbusMaster_lbl_timeout, 29, 383);
    lv_obj_set_size(ui->scr_setupModbusMaster_lbl_timeout, 218, 32);
    lv_label_set_text(ui->scr_setupModbusMaster_lbl_timeout, "Timeout (ms)");
    lv_label_set_long_mode(ui->scr_setupModbusMaster_lbl_timeout, LV_LABEL_LONG_WRAP);

    //Write style for scr_setupModbusMaster_lbl_timeout, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scr_setupModbusMaster_lbl_timeout, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_setupModbusMaster_lbl_timeout, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scr_setupModbusMaster_lbl_timeout, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scr_setupModbusMaster_lbl_timeout, &lv_font_arial_30, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scr_setupModbusMaster_lbl_timeout, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->scr_setupModbusMaster_lbl_timeout, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->scr_setupModbusMaster_lbl_timeout, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scr_setupModbusMaster_lbl_timeout, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scr_setupModbusMaster_lbl_timeout, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scr_setupModbusMaster_lbl_timeout, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scr_setupModbusMaster_lbl_timeout, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scr_setupModbusMaster_lbl_timeout, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scr_setupModbusMaster_lbl_timeout, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_setupModbusMaster_lbl_timeout, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scr_setupModbusMaster_lbl_poll_Interval
    ui->scr_setupModbusMaster_lbl_poll_Interval = lv_label_create(ui->scr_setupModbusMaster_cont_rs485);
    lv_obj_set_pos(ui->scr_setupModbusMaster_lbl_poll_Interval, 28, 455);
    lv_obj_set_size(ui->scr_setupModbusMaster_lbl_poll_Interval, 274, 32);
    lv_label_set_text(ui->scr_setupModbusMaster_lbl_poll_Interval, "Poll Interval (ms)");
    lv_label_set_long_mode(ui->scr_setupModbusMaster_lbl_poll_Interval, LV_LABEL_LONG_WRAP);

    //Write style for scr_setupModbusMaster_lbl_poll_Interval, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scr_setupModbusMaster_lbl_poll_Interval, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_setupModbusMaster_lbl_poll_Interval, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scr_setupModbusMaster_lbl_poll_Interval, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scr_setupModbusMaster_lbl_poll_Interval, &lv_font_arial_30, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scr_setupModbusMaster_lbl_poll_Interval, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->scr_setupModbusMaster_lbl_poll_Interval, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->scr_setupModbusMaster_lbl_poll_Interval, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scr_setupModbusMaster_lbl_poll_Interval, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scr_setupModbusMaster_lbl_poll_Interval, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scr_setupModbusMaster_lbl_poll_Interval, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scr_setupModbusMaster_lbl_poll_Interval, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scr_setupModbusMaster_lbl_poll_Interval, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scr_setupModbusMaster_lbl_poll_Interval, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_setupModbusMaster_lbl_poll_Interval, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scr_setupModbusMaster_dropdown_mode
    ui->scr_setupModbusMaster_dropdown_mode = lv_dropdown_create(ui->scr_setupModbusMaster_cont_rs485);
    lv_obj_set_pos(ui->scr_setupModbusMaster_dropdown_mode, 318, 89);
    lv_obj_set_size(ui->scr_setupModbusMaster_dropdown_mode, 200, 50);
    lv_dropdown_set_options(ui->scr_setupModbusMaster_dropdown_mode, "RTU");

    //Write style for scr_setupModbusMaster_dropdown_mode, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_text_color(ui->scr_setupModbusMaster_dropdown_mode, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scr_setupModbusMaster_dropdown_mode, &lv_font_montserratMedium_30, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scr_setupModbusMaster_dropdown_mode, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->scr_setupModbusMaster_dropdown_mode, 1, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->scr_setupModbusMaster_dropdown_mode, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->scr_setupModbusMaster_dropdown_mode, lv_color_hex(0xe1e6ee), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->scr_setupModbusMaster_dropdown_mode, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scr_setupModbusMaster_dropdown_mode, 8, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scr_setupModbusMaster_dropdown_mode, 6, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scr_setupModbusMaster_dropdown_mode, 6, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_setupModbusMaster_dropdown_mode, 1, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scr_setupModbusMaster_dropdown_mode, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scr_setupModbusMaster_dropdown_mode, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scr_setupModbusMaster_dropdown_mode, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_setupModbusMaster_dropdown_mode, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style state: LV_STATE_CHECKED for &style_scr_setupModbusMaster_dropdown_mode_extra_list_selected_checked
    static lv_style_t style_scr_setupModbusMaster_dropdown_mode_extra_list_selected_checked;
    ui_init_style(&style_scr_setupModbusMaster_dropdown_mode_extra_list_selected_checked);

    lv_style_set_border_width(&style_scr_setupModbusMaster_dropdown_mode_extra_list_selected_checked, 1);
    lv_style_set_border_opa(&style_scr_setupModbusMaster_dropdown_mode_extra_list_selected_checked, 255);
    lv_style_set_border_color(&style_scr_setupModbusMaster_dropdown_mode_extra_list_selected_checked, lv_color_hex(0xe1e6ee));
    lv_style_set_border_side(&style_scr_setupModbusMaster_dropdown_mode_extra_list_selected_checked, LV_BORDER_SIDE_FULL);
    lv_style_set_radius(&style_scr_setupModbusMaster_dropdown_mode_extra_list_selected_checked, 3);
    lv_style_set_bg_opa(&style_scr_setupModbusMaster_dropdown_mode_extra_list_selected_checked, 255);
    lv_style_set_bg_color(&style_scr_setupModbusMaster_dropdown_mode_extra_list_selected_checked, lv_color_hex(0x00a1b5));
    lv_style_set_bg_grad_dir(&style_scr_setupModbusMaster_dropdown_mode_extra_list_selected_checked, LV_GRAD_DIR_NONE);
    lv_obj_add_style(lv_dropdown_get_list(ui->scr_setupModbusMaster_dropdown_mode), &style_scr_setupModbusMaster_dropdown_mode_extra_list_selected_checked, LV_PART_SELECTED|LV_STATE_CHECKED);

    //Write style state: LV_STATE_DEFAULT for &style_scr_setupModbusMaster_dropdown_mode_extra_list_main_default
    static lv_style_t style_scr_setupModbusMaster_dropdown_mode_extra_list_main_default;
    ui_init_style(&style_scr_setupModbusMaster_dropdown_mode_extra_list_main_default);

    lv_style_set_max_height(&style_scr_setupModbusMaster_dropdown_mode_extra_list_main_default, 90);
    lv_style_set_text_color(&style_scr_setupModbusMaster_dropdown_mode_extra_list_main_default, lv_color_hex(0x0D3055));
    lv_style_set_text_font(&style_scr_setupModbusMaster_dropdown_mode_extra_list_main_default, &lv_font_montserratMedium_12);
    lv_style_set_text_opa(&style_scr_setupModbusMaster_dropdown_mode_extra_list_main_default, 255);
    lv_style_set_border_width(&style_scr_setupModbusMaster_dropdown_mode_extra_list_main_default, 1);
    lv_style_set_border_opa(&style_scr_setupModbusMaster_dropdown_mode_extra_list_main_default, 255);
    lv_style_set_border_color(&style_scr_setupModbusMaster_dropdown_mode_extra_list_main_default, lv_color_hex(0xe1e6ee));
    lv_style_set_border_side(&style_scr_setupModbusMaster_dropdown_mode_extra_list_main_default, LV_BORDER_SIDE_FULL);
    lv_style_set_radius(&style_scr_setupModbusMaster_dropdown_mode_extra_list_main_default, 3);
    lv_style_set_bg_opa(&style_scr_setupModbusMaster_dropdown_mode_extra_list_main_default, 255);
    lv_style_set_bg_color(&style_scr_setupModbusMaster_dropdown_mode_extra_list_main_default, lv_color_hex(0xffffff));
    lv_style_set_bg_grad_dir(&style_scr_setupModbusMaster_dropdown_mode_extra_list_main_default, LV_GRAD_DIR_NONE);
    lv_obj_add_style(lv_dropdown_get_list(ui->scr_setupModbusMaster_dropdown_mode), &style_scr_setupModbusMaster_dropdown_mode_extra_list_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style state: LV_STATE_DEFAULT for &style_scr_setupModbusMaster_dropdown_mode_extra_list_scrollbar_default
    static lv_style_t style_scr_setupModbusMaster_dropdown_mode_extra_list_scrollbar_default;
    ui_init_style(&style_scr_setupModbusMaster_dropdown_mode_extra_list_scrollbar_default);

    lv_style_set_radius(&style_scr_setupModbusMaster_dropdown_mode_extra_list_scrollbar_default, 3);
    lv_style_set_bg_opa(&style_scr_setupModbusMaster_dropdown_mode_extra_list_scrollbar_default, 255);
    lv_style_set_bg_color(&style_scr_setupModbusMaster_dropdown_mode_extra_list_scrollbar_default, lv_color_hex(0x00ff00));
    lv_style_set_bg_grad_dir(&style_scr_setupModbusMaster_dropdown_mode_extra_list_scrollbar_default, LV_GRAD_DIR_NONE);
    lv_obj_add_style(lv_dropdown_get_list(ui->scr_setupModbusMaster_dropdown_mode), &style_scr_setupModbusMaster_dropdown_mode_extra_list_scrollbar_default, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);

    //Write codes scr_setupModbusMaster_cont_device_list
    ui->scr_setupModbusMaster_cont_device_list = lv_obj_create(ui->scr_setupModbusMaster_cont_modbus_main);
    lv_obj_set_pos(ui->scr_setupModbusMaster_cont_device_list, 600, 2);
    lv_obj_set_size(ui->scr_setupModbusMaster_cont_device_list, 601, 522);
    lv_obj_set_scrollbar_mode(ui->scr_setupModbusMaster_cont_device_list, LV_SCROLLBAR_MODE_OFF);

    //Write style for scr_setupModbusMaster_cont_device_list, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scr_setupModbusMaster_cont_device_list, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_setupModbusMaster_cont_device_list, 12, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scr_setupModbusMaster_cont_device_list, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scr_setupModbusMaster_cont_device_list, lv_color_hex(0x2b2f3a), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scr_setupModbusMaster_cont_device_list, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scr_setupModbusMaster_cont_device_list, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scr_setupModbusMaster_cont_device_list, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scr_setupModbusMaster_cont_device_list, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scr_setupModbusMaster_cont_device_list, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_setupModbusMaster_cont_device_list, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scr_setupModbusMaster_lbl_device_list
    ui->scr_setupModbusMaster_lbl_device_list = lv_label_create(ui->scr_setupModbusMaster_cont_device_list);
    lv_obj_set_pos(ui->scr_setupModbusMaster_lbl_device_list, 135, 23);
    lv_obj_set_size(ui->scr_setupModbusMaster_lbl_device_list, 326, 42);
    lv_label_set_text(ui->scr_setupModbusMaster_lbl_device_list, "DEVICE LIST");
    lv_label_set_long_mode(ui->scr_setupModbusMaster_lbl_device_list, LV_LABEL_LONG_WRAP);

    //Write style for scr_setupModbusMaster_lbl_device_list, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scr_setupModbusMaster_lbl_device_list, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_setupModbusMaster_lbl_device_list, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scr_setupModbusMaster_lbl_device_list, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scr_setupModbusMaster_lbl_device_list, &lv_font_arial_40, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scr_setupModbusMaster_lbl_device_list, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->scr_setupModbusMaster_lbl_device_list, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->scr_setupModbusMaster_lbl_device_list, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scr_setupModbusMaster_lbl_device_list, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scr_setupModbusMaster_lbl_device_list, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scr_setupModbusMaster_lbl_device_list, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scr_setupModbusMaster_lbl_device_list, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scr_setupModbusMaster_lbl_device_list, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scr_setupModbusMaster_lbl_device_list, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_setupModbusMaster_lbl_device_list, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scr_setupModbusMaster_tab_device
    ui->scr_setupModbusMaster_tab_device = lv_table_create(ui->scr_setupModbusMaster_cont_device_list);
    lv_obj_set_pos(ui->scr_setupModbusMaster_tab_device, 103, 117);
    lv_obj_set_scrollbar_mode(ui->scr_setupModbusMaster_tab_device, LV_SCROLLBAR_MODE_OFF);
    lv_table_set_column_count(ui->scr_setupModbusMaster_tab_device,3);
    lv_table_set_row_count(ui->scr_setupModbusMaster_tab_device,5);
    lv_table_set_cell_value(ui->scr_setupModbusMaster_tab_device,0,0,"ID");
    lv_table_set_cell_value(ui->scr_setupModbusMaster_tab_device,1,0,"1");
    lv_table_set_cell_value(ui->scr_setupModbusMaster_tab_device,2,0,"2");
    lv_table_set_cell_value(ui->scr_setupModbusMaster_tab_device,3,0,"3");
    lv_table_set_cell_value(ui->scr_setupModbusMaster_tab_device,4,0,"4");
    lv_table_set_cell_value(ui->scr_setupModbusMaster_tab_device,0,1,"Name");
    lv_table_set_cell_value(ui->scr_setupModbusMaster_tab_device,1,1,"PLC");
    lv_table_set_cell_value(ui->scr_setupModbusMaster_tab_device,2,1,"");
    lv_table_set_cell_value(ui->scr_setupModbusMaster_tab_device,3,1,"");
    lv_table_set_cell_value(ui->scr_setupModbusMaster_tab_device,4,1,"");
    lv_table_set_cell_value(ui->scr_setupModbusMaster_tab_device,0,2,"Status");
    lv_table_set_cell_value(ui->scr_setupModbusMaster_tab_device,1,2,"Online");
    lv_table_set_cell_value(ui->scr_setupModbusMaster_tab_device,2,2,"");
    lv_table_set_cell_value(ui->scr_setupModbusMaster_tab_device,3,2,"");
    lv_table_set_cell_value(ui->scr_setupModbusMaster_tab_device,4,2,"");

    //Write style for scr_setupModbusMaster_tab_device, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_pad_top(ui->scr_setupModbusMaster_tab_device, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scr_setupModbusMaster_tab_device, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scr_setupModbusMaster_tab_device, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scr_setupModbusMaster_tab_device, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scr_setupModbusMaster_tab_device, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->scr_setupModbusMaster_tab_device, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_setupModbusMaster_tab_device, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_setupModbusMaster_tab_device, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style for scr_setupModbusMaster_tab_device, Part: LV_PART_ITEMS, State: LV_STATE_DEFAULT.
    lv_obj_set_style_text_color(ui->scr_setupModbusMaster_tab_device, lv_color_hex(0xffffff), LV_PART_ITEMS|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scr_setupModbusMaster_tab_device, &lv_font_arial_30, LV_PART_ITEMS|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scr_setupModbusMaster_tab_device, 255, LV_PART_ITEMS|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scr_setupModbusMaster_tab_device, LV_TEXT_ALIGN_CENTER, LV_PART_ITEMS|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scr_setupModbusMaster_tab_device, 15, LV_PART_ITEMS|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scr_setupModbusMaster_tab_device, lv_color_hex(0xffffff), LV_PART_ITEMS|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scr_setupModbusMaster_tab_device, LV_GRAD_DIR_NONE, LV_PART_ITEMS|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->scr_setupModbusMaster_tab_device, 0, LV_PART_ITEMS|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scr_setupModbusMaster_tab_device, 10, LV_PART_ITEMS|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scr_setupModbusMaster_tab_device, 10, LV_PART_ITEMS|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scr_setupModbusMaster_tab_device, 10, LV_PART_ITEMS|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scr_setupModbusMaster_tab_device, 10, LV_PART_ITEMS|LV_STATE_DEFAULT);

    //Write codes scr_setupModbusMaster_btn_add_device
    ui->scr_setupModbusMaster_btn_add_device = lv_button_create(ui->scr_setupModbusMaster_cont_device_list);
    lv_obj_set_pos(ui->scr_setupModbusMaster_btn_add_device, 338, 435);
    lv_obj_set_size(ui->scr_setupModbusMaster_btn_add_device, 239, 60);
    ui->scr_setupModbusMaster_btn_add_device_label = lv_label_create(ui->scr_setupModbusMaster_btn_add_device);
    lv_label_set_text(ui->scr_setupModbusMaster_btn_add_device_label, "ADD DEVICE");
    lv_label_set_long_mode(ui->scr_setupModbusMaster_btn_add_device_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->scr_setupModbusMaster_btn_add_device_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->scr_setupModbusMaster_btn_add_device, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->scr_setupModbusMaster_btn_add_device_label, LV_PCT(100));

    //Write style for scr_setupModbusMaster_btn_add_device, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->scr_setupModbusMaster_btn_add_device, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scr_setupModbusMaster_btn_add_device, lv_color_hex(0x1c4567), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scr_setupModbusMaster_btn_add_device, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->scr_setupModbusMaster_btn_add_device, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_setupModbusMaster_btn_add_device, 10, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_setupModbusMaster_btn_add_device, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scr_setupModbusMaster_btn_add_device, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scr_setupModbusMaster_btn_add_device, &lv_font_arial_30, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scr_setupModbusMaster_btn_add_device, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scr_setupModbusMaster_btn_add_device, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scr_setupModbusMaster_cont_topbar
    ui->scr_setupModbusMaster_cont_topbar = lv_obj_create(ui->scr_setupModbusMaster_cont_root);
    lv_obj_set_pos(ui->scr_setupModbusMaster_cont_topbar, 0, 0);
    lv_obj_set_size(ui->scr_setupModbusMaster_cont_topbar, 1280, 90);
    lv_obj_set_scrollbar_mode(ui->scr_setupModbusMaster_cont_topbar, LV_SCROLLBAR_MODE_OFF);

    //Write style for scr_setupModbusMaster_cont_topbar, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scr_setupModbusMaster_cont_topbar, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_setupModbusMaster_cont_topbar, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scr_setupModbusMaster_cont_topbar, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scr_setupModbusMaster_cont_topbar, lv_color_hex(0x2B2B2B), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scr_setupModbusMaster_cont_topbar, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scr_setupModbusMaster_cont_topbar, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scr_setupModbusMaster_cont_topbar, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scr_setupModbusMaster_cont_topbar, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scr_setupModbusMaster_cont_topbar, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_setupModbusMaster_cont_topbar, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scr_setupModbusMaster_lbl_modbus
    ui->scr_setupModbusMaster_lbl_modbus = lv_label_create(ui->scr_setupModbusMaster_cont_topbar);
    lv_obj_set_pos(ui->scr_setupModbusMaster_lbl_modbus, 450, 20);
    lv_obj_set_size(ui->scr_setupModbusMaster_lbl_modbus, 380, 59);
    lv_label_set_text(ui->scr_setupModbusMaster_lbl_modbus, "MODBUS MASTER");
    lv_label_set_long_mode(ui->scr_setupModbusMaster_lbl_modbus, LV_LABEL_LONG_WRAP);

    //Write style for scr_setupModbusMaster_lbl_modbus, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scr_setupModbusMaster_lbl_modbus, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_setupModbusMaster_lbl_modbus, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scr_setupModbusMaster_lbl_modbus, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scr_setupModbusMaster_lbl_modbus, &lv_font_Acme_Regular_50, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scr_setupModbusMaster_lbl_modbus, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->scr_setupModbusMaster_lbl_modbus, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->scr_setupModbusMaster_lbl_modbus, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scr_setupModbusMaster_lbl_modbus, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scr_setupModbusMaster_lbl_modbus, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scr_setupModbusMaster_lbl_modbus, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scr_setupModbusMaster_lbl_modbus, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scr_setupModbusMaster_lbl_modbus, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scr_setupModbusMaster_lbl_modbus, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_setupModbusMaster_lbl_modbus, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scr_setupModbusMaster_cont_topbar_right
    ui->scr_setupModbusMaster_cont_topbar_right = lv_obj_create(ui->scr_setupModbusMaster_cont_topbar);
    lv_obj_set_pos(ui->scr_setupModbusMaster_cont_topbar_right, 990, 0);
    lv_obj_set_size(ui->scr_setupModbusMaster_cont_topbar_right, 270, 90);
    lv_obj_set_scrollbar_mode(ui->scr_setupModbusMaster_cont_topbar_right, LV_SCROLLBAR_MODE_OFF);

    //Write style for scr_setupModbusMaster_cont_topbar_right, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scr_setupModbusMaster_cont_topbar_right, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_setupModbusMaster_cont_topbar_right, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scr_setupModbusMaster_cont_topbar_right, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scr_setupModbusMaster_cont_topbar_right, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scr_setupModbusMaster_cont_topbar_right, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scr_setupModbusMaster_cont_topbar_right, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scr_setupModbusMaster_cont_topbar_right, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_setupModbusMaster_cont_topbar_right, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scr_setupModbusMaster_lbl_device
    ui->scr_setupModbusMaster_lbl_device = lv_label_create(ui->scr_setupModbusMaster_cont_topbar_right);
    lv_obj_set_pos(ui->scr_setupModbusMaster_lbl_device, 1, 39);
    lv_obj_set_size(ui->scr_setupModbusMaster_lbl_device, 132, 32);
    lv_label_set_text(ui->scr_setupModbusMaster_lbl_device, "EDGE-01");
    lv_label_set_long_mode(ui->scr_setupModbusMaster_lbl_device, LV_LABEL_LONG_WRAP);

    //Write style for scr_setupModbusMaster_lbl_device, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scr_setupModbusMaster_lbl_device, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_setupModbusMaster_lbl_device, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scr_setupModbusMaster_lbl_device, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scr_setupModbusMaster_lbl_device, &lv_font_Acme_Regular_30, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scr_setupModbusMaster_lbl_device, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->scr_setupModbusMaster_lbl_device, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->scr_setupModbusMaster_lbl_device, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scr_setupModbusMaster_lbl_device, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scr_setupModbusMaster_lbl_device, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scr_setupModbusMaster_lbl_device, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scr_setupModbusMaster_lbl_device, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scr_setupModbusMaster_lbl_device, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scr_setupModbusMaster_lbl_device, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_setupModbusMaster_lbl_device, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scr_setupModbusMaster_btn_online
    ui->scr_setupModbusMaster_btn_online = lv_button_create(ui->scr_setupModbusMaster_cont_topbar_right);
    lv_obj_set_pos(ui->scr_setupModbusMaster_btn_online, 128, 30);
    lv_obj_set_size(ui->scr_setupModbusMaster_btn_online, 130, 50);
    ui->scr_setupModbusMaster_btn_online_label = lv_label_create(ui->scr_setupModbusMaster_btn_online);
    lv_label_set_text(ui->scr_setupModbusMaster_btn_online_label, "ONLINE");
    lv_label_set_long_mode(ui->scr_setupModbusMaster_btn_online_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->scr_setupModbusMaster_btn_online_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->scr_setupModbusMaster_btn_online, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->scr_setupModbusMaster_btn_online_label, LV_PCT(100));

    //Write style for scr_setupModbusMaster_btn_online, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->scr_setupModbusMaster_btn_online, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scr_setupModbusMaster_btn_online, lv_color_hex(0x2ecc71), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scr_setupModbusMaster_btn_online, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->scr_setupModbusMaster_btn_online, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_setupModbusMaster_btn_online, 18, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_setupModbusMaster_btn_online, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scr_setupModbusMaster_btn_online, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scr_setupModbusMaster_btn_online, &lv_font_arial_25, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scr_setupModbusMaster_btn_online, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scr_setupModbusMaster_btn_online, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scr_setupModbusMaster_imgbtn_1
    ui->scr_setupModbusMaster_imgbtn_1 = lv_imagebutton_create(ui->scr_setupModbusMaster_cont_root);
    lv_obj_set_pos(ui->scr_setupModbusMaster_imgbtn_1, 40, 14);
    lv_obj_set_size(ui->scr_setupModbusMaster_imgbtn_1, 64, 64);
    lv_imagebutton_set_src(ui->scr_setupModbusMaster_imgbtn_1, LV_IMAGEBUTTON_STATE_RELEASED, &_leftarrow_RGB565A8_64x64, NULL, NULL);
    ui->scr_setupModbusMaster_imgbtn_1_label = lv_label_create(ui->scr_setupModbusMaster_imgbtn_1);
    lv_label_set_text(ui->scr_setupModbusMaster_imgbtn_1_label, "");
    lv_label_set_long_mode(ui->scr_setupModbusMaster_imgbtn_1_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->scr_setupModbusMaster_imgbtn_1_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->scr_setupModbusMaster_imgbtn_1, 0, LV_STATE_DEFAULT);

    //Write style for scr_setupModbusMaster_imgbtn_1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_text_color(ui->scr_setupModbusMaster_imgbtn_1, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scr_setupModbusMaster_imgbtn_1, &lv_font_montserratMedium_12, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scr_setupModbusMaster_imgbtn_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scr_setupModbusMaster_imgbtn_1, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_setupModbusMaster_imgbtn_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style for scr_setupModbusMaster_imgbtn_1, Part: LV_PART_MAIN, State: LV_STATE_PRESSED.
    lv_obj_set_style_image_recolor_opa(ui->scr_setupModbusMaster_imgbtn_1, 0, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_image_opa(ui->scr_setupModbusMaster_imgbtn_1, 255, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_text_color(ui->scr_setupModbusMaster_imgbtn_1, lv_color_hex(0xFF33FF), LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_text_font(ui->scr_setupModbusMaster_imgbtn_1, &lv_font_montserratMedium_12, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_text_opa(ui->scr_setupModbusMaster_imgbtn_1, 255, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_shadow_width(ui->scr_setupModbusMaster_imgbtn_1, 0, LV_PART_MAIN|LV_STATE_PRESSED);

    //Write style for scr_setupModbusMaster_imgbtn_1, Part: LV_PART_MAIN, State: LV_STATE_CHECKED.
    lv_obj_set_style_image_recolor_opa(ui->scr_setupModbusMaster_imgbtn_1, 0, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_image_opa(ui->scr_setupModbusMaster_imgbtn_1, 255, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_text_color(ui->scr_setupModbusMaster_imgbtn_1, lv_color_hex(0xFF33FF), LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_text_font(ui->scr_setupModbusMaster_imgbtn_1, &lv_font_montserratMedium_12, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_text_opa(ui->scr_setupModbusMaster_imgbtn_1, 255, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_shadow_width(ui->scr_setupModbusMaster_imgbtn_1, 0, LV_PART_MAIN|LV_STATE_CHECKED);

    //Write style for scr_setupModbusMaster_imgbtn_1, Part: LV_PART_MAIN, State: LV_IMAGEBUTTON_STATE_RELEASED.
    lv_obj_set_style_image_recolor_opa(ui->scr_setupModbusMaster_imgbtn_1, 0, LV_PART_MAIN|LV_IMAGEBUTTON_STATE_RELEASED);
    lv_obj_set_style_image_opa(ui->scr_setupModbusMaster_imgbtn_1, 255, LV_PART_MAIN|LV_IMAGEBUTTON_STATE_RELEASED);

    //Write codes scr_setupModbusMaster_btn_test_connection
    ui->scr_setupModbusMaster_btn_test_connection = lv_button_create(ui->scr_setupModbusMaster_cont_root);
    lv_obj_set_pos(ui->scr_setupModbusMaster_btn_test_connection, 42, 637);
    lv_obj_set_size(ui->scr_setupModbusMaster_btn_test_connection, 565, 60);
    ui->scr_setupModbusMaster_btn_test_connection_label = lv_label_create(ui->scr_setupModbusMaster_btn_test_connection);
    lv_label_set_text(ui->scr_setupModbusMaster_btn_test_connection_label, "TEST CONNECTION");
    lv_label_set_long_mode(ui->scr_setupModbusMaster_btn_test_connection_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->scr_setupModbusMaster_btn_test_connection_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->scr_setupModbusMaster_btn_test_connection, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->scr_setupModbusMaster_btn_test_connection_label, LV_PCT(100));

    //Write style for scr_setupModbusMaster_btn_test_connection, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->scr_setupModbusMaster_btn_test_connection, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scr_setupModbusMaster_btn_test_connection, lv_color_hex(0x1c4567), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scr_setupModbusMaster_btn_test_connection, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->scr_setupModbusMaster_btn_test_connection, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_setupModbusMaster_btn_test_connection, 10, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_setupModbusMaster_btn_test_connection, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scr_setupModbusMaster_btn_test_connection, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scr_setupModbusMaster_btn_test_connection, &lv_font_arial_30, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scr_setupModbusMaster_btn_test_connection, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scr_setupModbusMaster_btn_test_connection, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scr_setupModbusMaster_btn_save
    ui->scr_setupModbusMaster_btn_save = lv_button_create(ui->scr_setupModbusMaster_cont_root);
    lv_obj_set_pos(ui->scr_setupModbusMaster_btn_save, 647, 637);
    lv_obj_set_size(ui->scr_setupModbusMaster_btn_save, 601, 60);
    ui->scr_setupModbusMaster_btn_save_label = lv_label_create(ui->scr_setupModbusMaster_btn_save);
    lv_label_set_text(ui->scr_setupModbusMaster_btn_save_label, "SAVE");
    lv_label_set_long_mode(ui->scr_setupModbusMaster_btn_save_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->scr_setupModbusMaster_btn_save_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->scr_setupModbusMaster_btn_save, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->scr_setupModbusMaster_btn_save_label, LV_PCT(100));

    //Write style for scr_setupModbusMaster_btn_save, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->scr_setupModbusMaster_btn_save, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scr_setupModbusMaster_btn_save, lv_color_hex(0x2ECC71), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scr_setupModbusMaster_btn_save, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->scr_setupModbusMaster_btn_save, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_setupModbusMaster_btn_save, 10, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_setupModbusMaster_btn_save, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scr_setupModbusMaster_btn_save, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scr_setupModbusMaster_btn_save, &lv_font_arial_30, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scr_setupModbusMaster_btn_save, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scr_setupModbusMaster_btn_save, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //The custom code of scr_setupModbusMaster.


    //Update current screen layout.
    lv_obj_update_layout(ui->scr_setupModbusMaster);

    //Init events for screen.
    events_init_scr_setupModbusMaster(ui);
}
