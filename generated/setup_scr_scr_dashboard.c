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



int scr_dashboard_digital_clock_1_min_value = 25;
int scr_dashboard_digital_clock_1_hour_value = 11;
int scr_dashboard_digital_clock_1_sec_value = 50;
void setup_scr_scr_dashboard(lv_ui *ui)
{
    //Write codes scr_dashboard
    ui->scr_dashboard = lv_obj_create(NULL);
    lv_obj_set_size(ui->scr_dashboard, 1280, 720);
    lv_obj_set_scrollbar_mode(ui->scr_dashboard, LV_SCROLLBAR_MODE_OFF);

    //Write style for scr_dashboard, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->scr_dashboard, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scr_dashboard, lv_color_hex(0x0f0f0f), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scr_dashboard, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scr_dashboard_cont_dash_bg
    ui->scr_dashboard_cont_dash_bg = lv_obj_create(ui->scr_dashboard);
    lv_obj_set_pos(ui->scr_dashboard_cont_dash_bg, 25, 0);
    lv_obj_set_size(ui->scr_dashboard_cont_dash_bg, 1232, 720);
    lv_obj_set_scrollbar_mode(ui->scr_dashboard_cont_dash_bg, LV_SCROLLBAR_MODE_OFF);

    //Write style for scr_dashboard_cont_dash_bg, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scr_dashboard_cont_dash_bg, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_dashboard_cont_dash_bg, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scr_dashboard_cont_dash_bg, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scr_dashboard_cont_dash_bg, lv_color_hex(0x151515), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scr_dashboard_cont_dash_bg, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scr_dashboard_cont_dash_bg, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scr_dashboard_cont_dash_bg, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scr_dashboard_cont_dash_bg, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scr_dashboard_cont_dash_bg, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_dashboard_cont_dash_bg, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scr_dashboard_cont_topbar
    ui->scr_dashboard_cont_topbar = lv_obj_create(ui->scr_dashboard_cont_dash_bg);
    lv_obj_set_pos(ui->scr_dashboard_cont_topbar, 0, 50);
    lv_obj_set_size(ui->scr_dashboard_cont_topbar, 1232, 120);
    lv_obj_set_scrollbar_mode(ui->scr_dashboard_cont_topbar, LV_SCROLLBAR_MODE_OFF);

    //Write style for scr_dashboard_cont_topbar, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scr_dashboard_cont_topbar, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_dashboard_cont_topbar, 20, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scr_dashboard_cont_topbar, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scr_dashboard_cont_topbar, lv_color_hex(0x22c55e), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scr_dashboard_cont_topbar, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scr_dashboard_cont_topbar, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scr_dashboard_cont_topbar, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scr_dashboard_cont_topbar, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scr_dashboard_cont_topbar, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_dashboard_cont_topbar, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scr_dashboard_lbl_running
    ui->scr_dashboard_lbl_running = lv_label_create(ui->scr_dashboard_cont_topbar);
    lv_obj_set_pos(ui->scr_dashboard_lbl_running, 0, 20);
    lv_obj_set_size(ui->scr_dashboard_lbl_running, 640, 37);
    lv_label_set_text(ui->scr_dashboard_lbl_running, "WO#2024-001: RUNNING");
    lv_label_set_long_mode(ui->scr_dashboard_lbl_running, LV_LABEL_LONG_WRAP);

    //Write style for scr_dashboard_lbl_running, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scr_dashboard_lbl_running, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_dashboard_lbl_running, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scr_dashboard_lbl_running, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scr_dashboard_lbl_running, &lv_font_Acme_Regular_34, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scr_dashboard_lbl_running, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->scr_dashboard_lbl_running, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->scr_dashboard_lbl_running, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scr_dashboard_lbl_running, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scr_dashboard_lbl_running, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scr_dashboard_lbl_running, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scr_dashboard_lbl_running, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scr_dashboard_lbl_running, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scr_dashboard_lbl_running, 20, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_dashboard_lbl_running, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scr_dashboard_lbl_op
    ui->scr_dashboard_lbl_op = lv_label_create(ui->scr_dashboard_cont_topbar);
    lv_obj_set_pos(ui->scr_dashboard_lbl_op, 815, 70);
    lv_obj_set_size(ui->scr_dashboard_lbl_op, 418, 36);
    lv_label_set_text(ui->scr_dashboard_lbl_op, "NGUYEN VAN A");
    lv_label_set_long_mode(ui->scr_dashboard_lbl_op, LV_LABEL_LONG_WRAP);

    //Write style for scr_dashboard_lbl_op, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scr_dashboard_lbl_op, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_dashboard_lbl_op, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scr_dashboard_lbl_op, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scr_dashboard_lbl_op, &lv_font_Acme_Regular_26, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scr_dashboard_lbl_op, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->scr_dashboard_lbl_op, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->scr_dashboard_lbl_op, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scr_dashboard_lbl_op, LV_TEXT_ALIGN_RIGHT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scr_dashboard_lbl_op, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scr_dashboard_lbl_op, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scr_dashboard_lbl_op, 20, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scr_dashboard_lbl_op, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scr_dashboard_lbl_op, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_dashboard_lbl_op, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scr_dashboard_lbl_product_name
    ui->scr_dashboard_lbl_product_name = lv_label_create(ui->scr_dashboard_cont_topbar);
    lv_obj_set_pos(ui->scr_dashboard_lbl_product_name, 0, 70);
    lv_obj_set_size(ui->scr_dashboard_lbl_product_name, 634, 31);
    lv_label_set_text(ui->scr_dashboard_lbl_product_name, "PRODUCT NAME: XYZ ");
    lv_label_set_long_mode(ui->scr_dashboard_lbl_product_name, LV_LABEL_LONG_WRAP);

    //Write style for scr_dashboard_lbl_product_name, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scr_dashboard_lbl_product_name, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_dashboard_lbl_product_name, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scr_dashboard_lbl_product_name, lv_color_hex(0x1e5984), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scr_dashboard_lbl_product_name, &lv_font_Acme_Regular_26, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scr_dashboard_lbl_product_name, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->scr_dashboard_lbl_product_name, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->scr_dashboard_lbl_product_name, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scr_dashboard_lbl_product_name, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scr_dashboard_lbl_product_name, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scr_dashboard_lbl_product_name, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scr_dashboard_lbl_product_name, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scr_dashboard_lbl_product_name, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scr_dashboard_lbl_product_name, 20, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_dashboard_lbl_product_name, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scr_dashboard_lbl_name_device
    ui->scr_dashboard_lbl_name_device = lv_label_create(ui->scr_dashboard_cont_topbar);
    lv_obj_set_pos(ui->scr_dashboard_lbl_name_device, 976, 20);
    lv_obj_set_size(ui->scr_dashboard_lbl_name_device, 257, 38);
    lv_label_set_text(ui->scr_dashboard_lbl_name_device, "CNC-001");
    lv_label_set_long_mode(ui->scr_dashboard_lbl_name_device, LV_LABEL_LONG_WRAP);

    //Write style for scr_dashboard_lbl_name_device, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scr_dashboard_lbl_name_device, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_dashboard_lbl_name_device, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scr_dashboard_lbl_name_device, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scr_dashboard_lbl_name_device, &lv_font_Acme_Regular_34, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scr_dashboard_lbl_name_device, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->scr_dashboard_lbl_name_device, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->scr_dashboard_lbl_name_device, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scr_dashboard_lbl_name_device, LV_TEXT_ALIGN_RIGHT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scr_dashboard_lbl_name_device, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scr_dashboard_lbl_name_device, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scr_dashboard_lbl_name_device, 20, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scr_dashboard_lbl_name_device, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scr_dashboard_lbl_name_device, 20, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_dashboard_lbl_name_device, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scr_dashboard_cont_okng_row
    ui->scr_dashboard_cont_okng_row = lv_obj_create(ui->scr_dashboard_cont_dash_bg);
    lv_obj_set_pos(ui->scr_dashboard_cont_okng_row, -1, 370);
    lv_obj_set_size(ui->scr_dashboard_cont_okng_row, 1232, 100);
    lv_obj_set_scrollbar_mode(ui->scr_dashboard_cont_okng_row, LV_SCROLLBAR_MODE_OFF);

    //Write style for scr_dashboard_cont_okng_row, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scr_dashboard_cont_okng_row, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_dashboard_cont_okng_row, 20, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scr_dashboard_cont_okng_row, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scr_dashboard_cont_okng_row, lv_color_hex(0x1c1c1c), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scr_dashboard_cont_okng_row, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scr_dashboard_cont_okng_row, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scr_dashboard_cont_okng_row, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scr_dashboard_cont_okng_row, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scr_dashboard_cont_okng_row, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_dashboard_cont_okng_row, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scr_dashboard_lbl_ok
    ui->scr_dashboard_lbl_ok = lv_label_create(ui->scr_dashboard_cont_okng_row);
    lv_obj_set_pos(ui->scr_dashboard_lbl_ok, 129, 0);
    lv_obj_set_size(ui->scr_dashboard_lbl_ok, 138, 100);
    lv_label_set_text(ui->scr_dashboard_lbl_ok, "OK: 440");
    lv_label_set_long_mode(ui->scr_dashboard_lbl_ok, LV_LABEL_LONG_WRAP);

    //Write style for scr_dashboard_lbl_ok, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scr_dashboard_lbl_ok, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_dashboard_lbl_ok, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scr_dashboard_lbl_ok, lv_color_hex(0x2FDA64), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scr_dashboard_lbl_ok, &lv_font_Acme_Regular_40, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scr_dashboard_lbl_ok, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->scr_dashboard_lbl_ok, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->scr_dashboard_lbl_ok, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scr_dashboard_lbl_ok, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scr_dashboard_lbl_ok, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scr_dashboard_lbl_ok, 30, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scr_dashboard_lbl_ok, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scr_dashboard_lbl_ok, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scr_dashboard_lbl_ok, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_dashboard_lbl_ok, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scr_dashboard_lbl_ng
    ui->scr_dashboard_lbl_ng = lv_label_create(ui->scr_dashboard_cont_okng_row);
    lv_obj_set_pos(ui->scr_dashboard_lbl_ng, 524, 0);
    lv_obj_set_size(ui->scr_dashboard_lbl_ng, 138, 100);
    lv_label_set_text(ui->scr_dashboard_lbl_ng, "NG: 2");
    lv_label_set_long_mode(ui->scr_dashboard_lbl_ng, LV_LABEL_LONG_WRAP);

    //Write style for scr_dashboard_lbl_ng, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scr_dashboard_lbl_ng, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_dashboard_lbl_ng, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scr_dashboard_lbl_ng, lv_color_hex(0xb10000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scr_dashboard_lbl_ng, &lv_font_Acme_Regular_40, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scr_dashboard_lbl_ng, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->scr_dashboard_lbl_ng, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->scr_dashboard_lbl_ng, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scr_dashboard_lbl_ng, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scr_dashboard_lbl_ng, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scr_dashboard_lbl_ng, 30, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scr_dashboard_lbl_ng, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scr_dashboard_lbl_ng, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scr_dashboard_lbl_ng, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_dashboard_lbl_ng, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scr_dashboard_lbl_perf
    ui->scr_dashboard_lbl_perf = lv_label_create(ui->scr_dashboard_cont_okng_row);
    lv_obj_set_pos(ui->scr_dashboard_lbl_perf, 899, 0);
    lv_obj_set_size(ui->scr_dashboard_lbl_perf, 261, 100);
    lv_label_set_text(ui->scr_dashboard_lbl_perf, "PERF: 98.2%");
    lv_label_set_long_mode(ui->scr_dashboard_lbl_perf, LV_LABEL_LONG_WRAP);

    //Write style for scr_dashboard_lbl_perf, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scr_dashboard_lbl_perf, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_dashboard_lbl_perf, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scr_dashboard_lbl_perf, lv_color_hex(0x2F92DA), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scr_dashboard_lbl_perf, &lv_font_Acme_Regular_40, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scr_dashboard_lbl_perf, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->scr_dashboard_lbl_perf, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->scr_dashboard_lbl_perf, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scr_dashboard_lbl_perf, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scr_dashboard_lbl_perf, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scr_dashboard_lbl_perf, 30, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scr_dashboard_lbl_perf, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scr_dashboard_lbl_perf, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scr_dashboard_lbl_perf, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_dashboard_lbl_perf, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scr_dashboard_cont_kip_row
    ui->scr_dashboard_cont_kip_row = lv_obj_create(ui->scr_dashboard_cont_dash_bg);
    lv_obj_set_pos(ui->scr_dashboard_cont_kip_row, 1, 190);
    lv_obj_set_size(ui->scr_dashboard_cont_kip_row, 1232, 160);
    lv_obj_set_scrollbar_mode(ui->scr_dashboard_cont_kip_row, LV_SCROLLBAR_MODE_OFF);

    //Write style for scr_dashboard_cont_kip_row, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scr_dashboard_cont_kip_row, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_dashboard_cont_kip_row, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scr_dashboard_cont_kip_row, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scr_dashboard_cont_kip_row, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scr_dashboard_cont_kip_row, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scr_dashboard_cont_kip_row, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scr_dashboard_cont_kip_row, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_dashboard_cont_kip_row, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scr_dashboard_cont_kpi_plan
    ui->scr_dashboard_cont_kpi_plan = lv_obj_create(ui->scr_dashboard_cont_kip_row);
    lv_obj_set_pos(ui->scr_dashboard_cont_kpi_plan, -1, 0);
    lv_obj_set_size(ui->scr_dashboard_cont_kpi_plan, 398, 160);
    lv_obj_set_scrollbar_mode(ui->scr_dashboard_cont_kpi_plan, LV_SCROLLBAR_MODE_OFF);

    //Write style for scr_dashboard_cont_kpi_plan, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scr_dashboard_cont_kpi_plan, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_dashboard_cont_kpi_plan, 20, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scr_dashboard_cont_kpi_plan, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scr_dashboard_cont_kpi_plan, lv_color_hex(0x1c1c1c), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scr_dashboard_cont_kpi_plan, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scr_dashboard_cont_kpi_plan, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scr_dashboard_cont_kpi_plan, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scr_dashboard_cont_kpi_plan, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scr_dashboard_cont_kpi_plan, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_dashboard_cont_kpi_plan, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scr_dashboard_lbl_plan_tiltle
    ui->scr_dashboard_lbl_plan_tiltle = lv_label_create(ui->scr_dashboard_cont_kpi_plan);
    lv_obj_set_pos(ui->scr_dashboard_lbl_plan_tiltle, 151, 29);
    lv_obj_set_size(ui->scr_dashboard_lbl_plan_tiltle, 84, 32);
    lv_label_set_text(ui->scr_dashboard_lbl_plan_tiltle, "PLAN");
    lv_label_set_long_mode(ui->scr_dashboard_lbl_plan_tiltle, LV_LABEL_LONG_WRAP);

    //Write style for scr_dashboard_lbl_plan_tiltle, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scr_dashboard_lbl_plan_tiltle, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_dashboard_lbl_plan_tiltle, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scr_dashboard_lbl_plan_tiltle, lv_color_hex(0xbcbcbc), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scr_dashboard_lbl_plan_tiltle, &lv_font_Acme_Regular_30, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scr_dashboard_lbl_plan_tiltle, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->scr_dashboard_lbl_plan_tiltle, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->scr_dashboard_lbl_plan_tiltle, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scr_dashboard_lbl_plan_tiltle, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scr_dashboard_lbl_plan_tiltle, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scr_dashboard_lbl_plan_tiltle, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scr_dashboard_lbl_plan_tiltle, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scr_dashboard_lbl_plan_tiltle, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scr_dashboard_lbl_plan_tiltle, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_dashboard_lbl_plan_tiltle, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scr_dashboard_lbl_plan_value
    ui->scr_dashboard_lbl_plan_value = lv_label_create(ui->scr_dashboard_cont_kpi_plan);
    lv_obj_set_pos(ui->scr_dashboard_lbl_plan_value, 50, 68);
    lv_obj_set_size(ui->scr_dashboard_lbl_plan_value, 306, 60);
    lv_label_set_text(ui->scr_dashboard_lbl_plan_value, "1 000");
    lv_label_set_long_mode(ui->scr_dashboard_lbl_plan_value, LV_LABEL_LONG_WRAP);

    //Write style for scr_dashboard_lbl_plan_value, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scr_dashboard_lbl_plan_value, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_dashboard_lbl_plan_value, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scr_dashboard_lbl_plan_value, lv_color_hex(0xbcbcbc), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scr_dashboard_lbl_plan_value, &lv_font_Acme_Regular_60, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scr_dashboard_lbl_plan_value, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->scr_dashboard_lbl_plan_value, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->scr_dashboard_lbl_plan_value, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scr_dashboard_lbl_plan_value, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scr_dashboard_lbl_plan_value, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scr_dashboard_lbl_plan_value, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scr_dashboard_lbl_plan_value, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scr_dashboard_lbl_plan_value, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scr_dashboard_lbl_plan_value, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_dashboard_lbl_plan_value, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scr_dashboard_cont_kpi_target
    ui->scr_dashboard_cont_kpi_target = lv_obj_create(ui->scr_dashboard_cont_kip_row);
    lv_obj_set_pos(ui->scr_dashboard_cont_kpi_target, 415, 0);
    lv_obj_set_size(ui->scr_dashboard_cont_kpi_target, 398, 160);
    lv_obj_set_scrollbar_mode(ui->scr_dashboard_cont_kpi_target, LV_SCROLLBAR_MODE_OFF);

    //Write style for scr_dashboard_cont_kpi_target, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scr_dashboard_cont_kpi_target, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_dashboard_cont_kpi_target, 20, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scr_dashboard_cont_kpi_target, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scr_dashboard_cont_kpi_target, lv_color_hex(0x1c1c1c), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scr_dashboard_cont_kpi_target, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scr_dashboard_cont_kpi_target, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scr_dashboard_cont_kpi_target, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scr_dashboard_cont_kpi_target, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scr_dashboard_cont_kpi_target, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_dashboard_cont_kpi_target, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scr_dashboard_lbl_target_tiltle
    ui->scr_dashboard_lbl_target_tiltle = lv_label_create(ui->scr_dashboard_cont_kpi_target);
    lv_obj_set_pos(ui->scr_dashboard_lbl_target_tiltle, 137, 27);
    lv_obj_set_size(ui->scr_dashboard_lbl_target_tiltle, 115, 32);
    lv_label_set_text(ui->scr_dashboard_lbl_target_tiltle, "TARGET");
    lv_label_set_long_mode(ui->scr_dashboard_lbl_target_tiltle, LV_LABEL_LONG_WRAP);

    //Write style for scr_dashboard_lbl_target_tiltle, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scr_dashboard_lbl_target_tiltle, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_dashboard_lbl_target_tiltle, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scr_dashboard_lbl_target_tiltle, lv_color_hex(0xbcbcbc), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scr_dashboard_lbl_target_tiltle, &lv_font_Acme_Regular_30, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scr_dashboard_lbl_target_tiltle, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->scr_dashboard_lbl_target_tiltle, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->scr_dashboard_lbl_target_tiltle, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scr_dashboard_lbl_target_tiltle, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scr_dashboard_lbl_target_tiltle, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scr_dashboard_lbl_target_tiltle, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scr_dashboard_lbl_target_tiltle, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scr_dashboard_lbl_target_tiltle, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scr_dashboard_lbl_target_tiltle, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_dashboard_lbl_target_tiltle, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scr_dashboard_lbl_target_value
    ui->scr_dashboard_lbl_target_value = lv_label_create(ui->scr_dashboard_cont_kpi_target);
    lv_obj_set_pos(ui->scr_dashboard_lbl_target_value, 93, 67);
    lv_obj_set_size(ui->scr_dashboard_lbl_target_value, 203, 60);
    lv_label_set_text(ui->scr_dashboard_lbl_target_value, "450");
    lv_label_set_long_mode(ui->scr_dashboard_lbl_target_value, LV_LABEL_LONG_WRAP);

    //Write style for scr_dashboard_lbl_target_value, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scr_dashboard_lbl_target_value, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_dashboard_lbl_target_value, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scr_dashboard_lbl_target_value, lv_color_hex(0xbcbcbc), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scr_dashboard_lbl_target_value, &lv_font_Acme_Regular_60, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scr_dashboard_lbl_target_value, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->scr_dashboard_lbl_target_value, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->scr_dashboard_lbl_target_value, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scr_dashboard_lbl_target_value, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scr_dashboard_lbl_target_value, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scr_dashboard_lbl_target_value, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scr_dashboard_lbl_target_value, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scr_dashboard_lbl_target_value, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scr_dashboard_lbl_target_value, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_dashboard_lbl_target_value, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scr_dashboard_cont_kpi_actual
    ui->scr_dashboard_cont_kpi_actual = lv_obj_create(ui->scr_dashboard_cont_kip_row);
    lv_obj_set_pos(ui->scr_dashboard_cont_kpi_actual, 831, 0);
    lv_obj_set_size(ui->scr_dashboard_cont_kpi_actual, 398, 160);
    lv_obj_set_scrollbar_mode(ui->scr_dashboard_cont_kpi_actual, LV_SCROLLBAR_MODE_OFF);

    //Write style for scr_dashboard_cont_kpi_actual, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scr_dashboard_cont_kpi_actual, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_dashboard_cont_kpi_actual, 20, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scr_dashboard_cont_kpi_actual, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scr_dashboard_cont_kpi_actual, lv_color_hex(0x1c1c1c), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scr_dashboard_cont_kpi_actual, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scr_dashboard_cont_kpi_actual, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scr_dashboard_cont_kpi_actual, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scr_dashboard_cont_kpi_actual, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scr_dashboard_cont_kpi_actual, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_dashboard_cont_kpi_actual, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scr_dashboard_lbl_actual_tiltle
    ui->scr_dashboard_lbl_actual_tiltle = lv_label_create(ui->scr_dashboard_cont_kpi_actual);
    lv_obj_set_pos(ui->scr_dashboard_lbl_actual_tiltle, 134, 30);
    lv_obj_set_size(ui->scr_dashboard_lbl_actual_tiltle, 119, 32);
    lv_label_set_text(ui->scr_dashboard_lbl_actual_tiltle, "ACTUAL");
    lv_label_set_long_mode(ui->scr_dashboard_lbl_actual_tiltle, LV_LABEL_LONG_WRAP);

    //Write style for scr_dashboard_lbl_actual_tiltle, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scr_dashboard_lbl_actual_tiltle, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_dashboard_lbl_actual_tiltle, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scr_dashboard_lbl_actual_tiltle, lv_color_hex(0xbcbcbc), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scr_dashboard_lbl_actual_tiltle, &lv_font_Acme_Regular_30, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scr_dashboard_lbl_actual_tiltle, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->scr_dashboard_lbl_actual_tiltle, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->scr_dashboard_lbl_actual_tiltle, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scr_dashboard_lbl_actual_tiltle, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scr_dashboard_lbl_actual_tiltle, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scr_dashboard_lbl_actual_tiltle, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scr_dashboard_lbl_actual_tiltle, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scr_dashboard_lbl_actual_tiltle, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scr_dashboard_lbl_actual_tiltle, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_dashboard_lbl_actual_tiltle, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scr_dashboard_lbl_actual_value
    ui->scr_dashboard_lbl_actual_value = lv_label_create(ui->scr_dashboard_cont_kpi_actual);
    lv_obj_set_pos(ui->scr_dashboard_lbl_actual_value, 92, 70);
    lv_obj_set_size(ui->scr_dashboard_lbl_actual_value, 203, 60);
    lv_label_set_text(ui->scr_dashboard_lbl_actual_value, "442");
    lv_label_set_long_mode(ui->scr_dashboard_lbl_actual_value, LV_LABEL_LONG_WRAP);

    //Write style for scr_dashboard_lbl_actual_value, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scr_dashboard_lbl_actual_value, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_dashboard_lbl_actual_value, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scr_dashboard_lbl_actual_value, lv_color_hex(0xbcbcbc), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scr_dashboard_lbl_actual_value, &lv_font_Acme_Regular_60, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scr_dashboard_lbl_actual_value, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->scr_dashboard_lbl_actual_value, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->scr_dashboard_lbl_actual_value, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scr_dashboard_lbl_actual_value, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scr_dashboard_lbl_actual_value, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scr_dashboard_lbl_actual_value, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scr_dashboard_lbl_actual_value, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scr_dashboard_lbl_actual_value, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scr_dashboard_lbl_actual_value, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_dashboard_lbl_actual_value, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scr_dashboard_cont_btn_row
    ui->scr_dashboard_cont_btn_row = lv_obj_create(ui->scr_dashboard_cont_dash_bg);
    lv_obj_set_pos(ui->scr_dashboard_cont_btn_row, 0, 490);
    lv_obj_set_size(ui->scr_dashboard_cont_btn_row, 1232, 90);
    lv_obj_set_scrollbar_mode(ui->scr_dashboard_cont_btn_row, LV_SCROLLBAR_MODE_AUTO);

    //Write style for scr_dashboard_cont_btn_row, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scr_dashboard_cont_btn_row, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_dashboard_cont_btn_row, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scr_dashboard_cont_btn_row, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scr_dashboard_cont_btn_row, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scr_dashboard_cont_btn_row, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scr_dashboard_cont_btn_row, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scr_dashboard_cont_btn_row, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_dashboard_cont_btn_row, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scr_dashboard_btn_stop
    ui->scr_dashboard_btn_stop = lv_button_create(ui->scr_dashboard_cont_btn_row);
    lv_obj_set_pos(ui->scr_dashboard_btn_stop, 6, 0);
    lv_obj_set_size(ui->scr_dashboard_btn_stop, 290, 90);
    ui->scr_dashboard_btn_stop_label = lv_label_create(ui->scr_dashboard_btn_stop);
    lv_label_set_text(ui->scr_dashboard_btn_stop_label, "STOP");
    lv_label_set_long_mode(ui->scr_dashboard_btn_stop_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->scr_dashboard_btn_stop_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->scr_dashboard_btn_stop, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->scr_dashboard_btn_stop_label, LV_PCT(100));

    //Write style for scr_dashboard_btn_stop, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->scr_dashboard_btn_stop, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scr_dashboard_btn_stop, lv_color_hex(0xd32f2f), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scr_dashboard_btn_stop, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->scr_dashboard_btn_stop, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_dashboard_btn_stop, 20, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_dashboard_btn_stop, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scr_dashboard_btn_stop, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scr_dashboard_btn_stop, &lv_font_Acme_Regular_30, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scr_dashboard_btn_stop, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scr_dashboard_btn_stop, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scr_dashboard_btn_setup
    ui->scr_dashboard_btn_setup = lv_button_create(ui->scr_dashboard_cont_btn_row);
    lv_obj_set_pos(ui->scr_dashboard_btn_setup, 317, 0);
    lv_obj_set_size(ui->scr_dashboard_btn_setup, 290, 90);
    ui->scr_dashboard_btn_setup_label = lv_label_create(ui->scr_dashboard_btn_setup);
    lv_label_set_text(ui->scr_dashboard_btn_setup_label, "SETUP");
    lv_label_set_long_mode(ui->scr_dashboard_btn_setup_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->scr_dashboard_btn_setup_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->scr_dashboard_btn_setup, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->scr_dashboard_btn_setup_label, LV_PCT(100));

    //Write style for scr_dashboard_btn_setup, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->scr_dashboard_btn_setup, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scr_dashboard_btn_setup, lv_color_hex(0x7E22CE), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scr_dashboard_btn_setup, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->scr_dashboard_btn_setup, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_dashboard_btn_setup, 20, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_dashboard_btn_setup, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scr_dashboard_btn_setup, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scr_dashboard_btn_setup, &lv_font_Acme_Regular_30, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scr_dashboard_btn_setup, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scr_dashboard_btn_setup, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scr_dashboard_btn_brea
    ui->scr_dashboard_btn_brea = lv_button_create(ui->scr_dashboard_cont_btn_row);
    lv_obj_set_pos(ui->scr_dashboard_btn_brea, 629, 0);
    lv_obj_set_size(ui->scr_dashboard_btn_brea, 290, 90);
    ui->scr_dashboard_btn_brea_label = lv_label_create(ui->scr_dashboard_btn_brea);
    lv_label_set_text(ui->scr_dashboard_btn_brea_label, "BREAK");
    lv_label_set_long_mode(ui->scr_dashboard_btn_brea_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->scr_dashboard_btn_brea_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->scr_dashboard_btn_brea, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->scr_dashboard_btn_brea_label, LV_PCT(100));

    //Write style for scr_dashboard_btn_brea, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->scr_dashboard_btn_brea, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scr_dashboard_btn_brea, lv_color_hex(0xc3a98a), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scr_dashboard_btn_brea, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->scr_dashboard_btn_brea, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_dashboard_btn_brea, 20, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_dashboard_btn_brea, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scr_dashboard_btn_brea, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scr_dashboard_btn_brea, &lv_font_Acme_Regular_30, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scr_dashboard_btn_brea, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scr_dashboard_btn_brea, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scr_dashboard_btn_complete
    ui->scr_dashboard_btn_complete = lv_button_create(ui->scr_dashboard_cont_btn_row);
    lv_obj_set_pos(ui->scr_dashboard_btn_complete, 942, 0);
    lv_obj_set_size(ui->scr_dashboard_btn_complete, 290, 90);
    ui->scr_dashboard_btn_complete_label = lv_label_create(ui->scr_dashboard_btn_complete);
    lv_label_set_text(ui->scr_dashboard_btn_complete_label, "COMPLETE");
    lv_label_set_long_mode(ui->scr_dashboard_btn_complete_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->scr_dashboard_btn_complete_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->scr_dashboard_btn_complete, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->scr_dashboard_btn_complete_label, LV_PCT(100));

    //Write style for scr_dashboard_btn_complete, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->scr_dashboard_btn_complete, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scr_dashboard_btn_complete, lv_color_hex(0x2F92DA), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scr_dashboard_btn_complete, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->scr_dashboard_btn_complete, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_dashboard_btn_complete, 20, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_dashboard_btn_complete, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scr_dashboard_btn_complete, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scr_dashboard_btn_complete, &lv_font_Acme_Regular_30, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scr_dashboard_btn_complete, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scr_dashboard_btn_complete, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scr_dashboard_btn_setting
    ui->scr_dashboard_btn_setting = lv_button_create(ui->scr_dashboard_cont_btn_row);
    lv_obj_set_pos(ui->scr_dashboard_btn_setting, 1258, 0);
    lv_obj_set_size(ui->scr_dashboard_btn_setting, 290, 90);
    ui->scr_dashboard_btn_setting_label = lv_label_create(ui->scr_dashboard_btn_setting);
    lv_label_set_text(ui->scr_dashboard_btn_setting_label, "SETTING");
    lv_label_set_long_mode(ui->scr_dashboard_btn_setting_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->scr_dashboard_btn_setting_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->scr_dashboard_btn_setting, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->scr_dashboard_btn_setting_label, LV_PCT(100));

    //Write style for scr_dashboard_btn_setting, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->scr_dashboard_btn_setting, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scr_dashboard_btn_setting, lv_color_hex(0x7d7d7d), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scr_dashboard_btn_setting, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->scr_dashboard_btn_setting, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_dashboard_btn_setting, 20, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_dashboard_btn_setting, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scr_dashboard_btn_setting, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scr_dashboard_btn_setting, &lv_font_Acme_Regular_30, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scr_dashboard_btn_setting, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scr_dashboard_btn_setting, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scr_dashboard_btn_input_prod
    ui->scr_dashboard_btn_input_prod = lv_button_create(ui->scr_dashboard_cont_dash_bg);
    lv_obj_set_pos(ui->scr_dashboard_btn_input_prod, 0, 600);
    lv_obj_set_size(ui->scr_dashboard_btn_input_prod, 1232, 100);
    ui->scr_dashboard_btn_input_prod_label = lv_label_create(ui->scr_dashboard_btn_input_prod);
    lv_label_set_text(ui->scr_dashboard_btn_input_prod_label, "              INPUT PRODUCTION / DEFECT");
    lv_label_set_long_mode(ui->scr_dashboard_btn_input_prod_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->scr_dashboard_btn_input_prod_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->scr_dashboard_btn_input_prod, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->scr_dashboard_btn_input_prod_label, LV_PCT(100));

    //Write style for scr_dashboard_btn_input_prod, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->scr_dashboard_btn_input_prod, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scr_dashboard_btn_input_prod, lv_color_hex(0x6abac3), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scr_dashboard_btn_input_prod, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->scr_dashboard_btn_input_prod, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_dashboard_btn_input_prod, 20, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_dashboard_btn_input_prod, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scr_dashboard_btn_input_prod, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scr_dashboard_btn_input_prod, &lv_font_Acme_Regular_40, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scr_dashboard_btn_input_prod, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scr_dashboard_btn_input_prod, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scr_dashboard_img_input
    ui->scr_dashboard_img_input = lv_image_create(ui->scr_dashboard_cont_dash_bg);
    lv_obj_set_pos(ui->scr_dashboard_img_input, 336, 616);
    lv_obj_set_size(ui->scr_dashboard_img_input, 64, 64);
    lv_obj_add_flag(ui->scr_dashboard_img_input, LV_OBJ_FLAG_CLICKABLE);
    lv_image_set_src(ui->scr_dashboard_img_input, &_input_RGB565A8_64x64);
    lv_image_set_pivot(ui->scr_dashboard_img_input, 50,50);
    lv_image_set_rotation(ui->scr_dashboard_img_input, 0);

    //Write style for scr_dashboard_img_input, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_image_recolor_opa(ui->scr_dashboard_img_input, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_image_opa(ui->scr_dashboard_img_input, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scr_dashboard_cont_dash_status
    ui->scr_dashboard_cont_dash_status = lv_obj_create(ui->scr_dashboard_cont_dash_bg);
    lv_obj_set_pos(ui->scr_dashboard_cont_dash_status, 0, 5);
    lv_obj_set_size(ui->scr_dashboard_cont_dash_status, 1232, 40);
    lv_obj_set_scrollbar_mode(ui->scr_dashboard_cont_dash_status, LV_SCROLLBAR_MODE_OFF);

    //Write style for scr_dashboard_cont_dash_status, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scr_dashboard_cont_dash_status, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_dashboard_cont_dash_status, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scr_dashboard_cont_dash_status, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scr_dashboard_cont_dash_status, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scr_dashboard_cont_dash_status, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scr_dashboard_cont_dash_status, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scr_dashboard_cont_dash_status, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_dashboard_cont_dash_status, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scr_dashboard_digital_clock_1
    static bool scr_dashboard_digital_clock_1_timer_enabled = false;
    ui->scr_dashboard_digital_clock_1 = lv_label_create(ui->scr_dashboard_cont_dash_status);
    lv_obj_set_pos(ui->scr_dashboard_digital_clock_1, 1142, 0);
    lv_obj_set_size(ui->scr_dashboard_digital_clock_1, 80, 40);
    lv_label_set_text(ui->scr_dashboard_digital_clock_1, "11:25");
    if (!scr_dashboard_digital_clock_1_timer_enabled) {
        lv_timer_create(scr_dashboard_digital_clock_1_timer, 1000, NULL);
        scr_dashboard_digital_clock_1_timer_enabled = true;
    }

    //Write style for scr_dashboard_digital_clock_1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_radius(ui->scr_dashboard_digital_clock_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scr_dashboard_digital_clock_1, lv_color_hex(0xababab), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scr_dashboard_digital_clock_1, &lv_font_arial_28, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scr_dashboard_digital_clock_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->scr_dashboard_digital_clock_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scr_dashboard_digital_clock_1, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scr_dashboard_digital_clock_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scr_dashboard_digital_clock_1, 10, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scr_dashboard_digital_clock_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scr_dashboard_digital_clock_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scr_dashboard_digital_clock_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_dashboard_digital_clock_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scr_dashboard_img_status_wifi_yes
    ui->scr_dashboard_img_status_wifi_yes = lv_image_create(ui->scr_dashboard_cont_dash_status);
    lv_obj_set_pos(ui->scr_dashboard_img_status_wifi_yes, 1101, 4);
    lv_obj_set_size(ui->scr_dashboard_img_status_wifi_yes, 32, 32);
    lv_obj_add_flag(ui->scr_dashboard_img_status_wifi_yes, LV_OBJ_FLAG_CLICKABLE);
    lv_image_set_src(ui->scr_dashboard_img_status_wifi_yes, &_yeswifi_RGB565A8_32x32);
    lv_image_set_pivot(ui->scr_dashboard_img_status_wifi_yes, 50,50);
    lv_image_set_rotation(ui->scr_dashboard_img_status_wifi_yes, 0);

    //Write style for scr_dashboard_img_status_wifi_yes, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_image_recolor_opa(ui->scr_dashboard_img_status_wifi_yes, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_image_recolor(ui->scr_dashboard_img_status_wifi_yes, lv_color_hex(0xababab), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_image_opa(ui->scr_dashboard_img_status_wifi_yes, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scr_dashboard_img_status_wifi_no
    ui->scr_dashboard_img_status_wifi_no = lv_image_create(ui->scr_dashboard_cont_dash_status);
    lv_obj_set_pos(ui->scr_dashboard_img_status_wifi_no, 1101, 4);
    lv_obj_set_size(ui->scr_dashboard_img_status_wifi_no, 32, 32);
    lv_obj_add_flag(ui->scr_dashboard_img_status_wifi_no, LV_OBJ_FLAG_HIDDEN);
    lv_obj_add_flag(ui->scr_dashboard_img_status_wifi_no, LV_OBJ_FLAG_CLICKABLE);
    lv_image_set_src(ui->scr_dashboard_img_status_wifi_no, &_nowifi_RGB565A8_32x32);
    lv_image_set_pivot(ui->scr_dashboard_img_status_wifi_no, 50,50);
    lv_image_set_rotation(ui->scr_dashboard_img_status_wifi_no, 0);

    //Write style for scr_dashboard_img_status_wifi_no, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_image_recolor_opa(ui->scr_dashboard_img_status_wifi_no, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_image_recolor(ui->scr_dashboard_img_status_wifi_no, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_image_opa(ui->scr_dashboard_img_status_wifi_no, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scr_dashboard_img_status_mqtt_no
    ui->scr_dashboard_img_status_mqtt_no = lv_image_create(ui->scr_dashboard_cont_dash_status);
    lv_obj_set_pos(ui->scr_dashboard_img_status_mqtt_no, 1048, 4);
    lv_obj_set_size(ui->scr_dashboard_img_status_mqtt_no, 32, 32);
    lv_obj_add_flag(ui->scr_dashboard_img_status_mqtt_no, LV_OBJ_FLAG_HIDDEN);
    lv_obj_add_flag(ui->scr_dashboard_img_status_mqtt_no, LV_OBJ_FLAG_CLICKABLE);
    lv_image_set_src(ui->scr_dashboard_img_status_mqtt_no, &_no_mqtt_RGB565A8_32x32);
    lv_image_set_pivot(ui->scr_dashboard_img_status_mqtt_no, 50,50);
    lv_image_set_rotation(ui->scr_dashboard_img_status_mqtt_no, 0);

    //Write style for scr_dashboard_img_status_mqtt_no, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_image_recolor_opa(ui->scr_dashboard_img_status_mqtt_no, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_image_recolor(ui->scr_dashboard_img_status_mqtt_no, lv_color_hex(0xababab), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_image_opa(ui->scr_dashboard_img_status_mqtt_no, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scr_dashboard_img_status_mqtt_yes
    ui->scr_dashboard_img_status_mqtt_yes = lv_image_create(ui->scr_dashboard_cont_dash_status);
    lv_obj_set_pos(ui->scr_dashboard_img_status_mqtt_yes, 1048, 4);
    lv_obj_set_size(ui->scr_dashboard_img_status_mqtt_yes, 32, 32);
    lv_obj_add_flag(ui->scr_dashboard_img_status_mqtt_yes, LV_OBJ_FLAG_CLICKABLE);
    lv_image_set_src(ui->scr_dashboard_img_status_mqtt_yes, &_yes_mqtt_RGB565A8_32x32);
    lv_image_set_pivot(ui->scr_dashboard_img_status_mqtt_yes, 50,50);
    lv_image_set_rotation(ui->scr_dashboard_img_status_mqtt_yes, 0);

    //Write style for scr_dashboard_img_status_mqtt_yes, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_image_recolor_opa(ui->scr_dashboard_img_status_mqtt_yes, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_image_recolor(ui->scr_dashboard_img_status_mqtt_yes, lv_color_hex(0xababab), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_image_opa(ui->scr_dashboard_img_status_mqtt_yes, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scr_dashboard_btn_back
    ui->scr_dashboard_btn_back = lv_imagebutton_create(ui->scr_dashboard_cont_dash_status);
    lv_obj_set_pos(ui->scr_dashboard_btn_back, 6, 4);
    lv_obj_set_size(ui->scr_dashboard_btn_back, 50, 40);
    lv_imagebutton_set_src(ui->scr_dashboard_btn_back, LV_IMAGEBUTTON_STATE_RELEASED, &_leftarrow_RGB565A8_50x40, NULL, NULL);
    ui->scr_dashboard_btn_back_label = lv_label_create(ui->scr_dashboard_btn_back);
    lv_label_set_text(ui->scr_dashboard_btn_back_label, "");
    lv_label_set_long_mode(ui->scr_dashboard_btn_back_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->scr_dashboard_btn_back_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->scr_dashboard_btn_back, 0, LV_STATE_DEFAULT);

    //Write style for scr_dashboard_btn_back, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_text_color(ui->scr_dashboard_btn_back, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scr_dashboard_btn_back, &lv_font_montserratMedium_12, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scr_dashboard_btn_back, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scr_dashboard_btn_back, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_dashboard_btn_back, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style for scr_dashboard_btn_back, Part: LV_PART_MAIN, State: LV_STATE_PRESSED.
    lv_obj_set_style_image_recolor_opa(ui->scr_dashboard_btn_back, 0, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_image_opa(ui->scr_dashboard_btn_back, 255, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_text_color(ui->scr_dashboard_btn_back, lv_color_hex(0xFF33FF), LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_text_font(ui->scr_dashboard_btn_back, &lv_font_montserratMedium_12, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_text_opa(ui->scr_dashboard_btn_back, 255, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_shadow_width(ui->scr_dashboard_btn_back, 0, LV_PART_MAIN|LV_STATE_PRESSED);

    //Write style for scr_dashboard_btn_back, Part: LV_PART_MAIN, State: LV_STATE_CHECKED.
    lv_obj_set_style_image_recolor_opa(ui->scr_dashboard_btn_back, 0, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_image_opa(ui->scr_dashboard_btn_back, 255, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_text_color(ui->scr_dashboard_btn_back, lv_color_hex(0xFF33FF), LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_text_font(ui->scr_dashboard_btn_back, &lv_font_montserratMedium_12, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_text_opa(ui->scr_dashboard_btn_back, 255, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_shadow_width(ui->scr_dashboard_btn_back, 0, LV_PART_MAIN|LV_STATE_CHECKED);

    //Write style for scr_dashboard_btn_back, Part: LV_PART_MAIN, State: LV_IMAGEBUTTON_STATE_RELEASED.
    lv_obj_set_style_image_recolor_opa(ui->scr_dashboard_btn_back, 0, LV_PART_MAIN|LV_IMAGEBUTTON_STATE_RELEASED);
    lv_obj_set_style_image_opa(ui->scr_dashboard_btn_back, 255, LV_PART_MAIN|LV_IMAGEBUTTON_STATE_RELEASED);

    //The custom code of scr_dashboard.


    //Update current screen layout.
    lv_obj_update_layout(ui->scr_dashboard);

    //Init events for screen.
    events_init_scr_dashboard(ui);
}
