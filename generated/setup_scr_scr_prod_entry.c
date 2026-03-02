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



void setup_scr_scr_prod_entry(lv_ui *ui)
{
    //Write codes scr_prod_entry
    ui->scr_prod_entry = lv_obj_create(NULL);
    lv_obj_set_size(ui->scr_prod_entry, 1280, 720);
    lv_obj_set_scrollbar_mode(ui->scr_prod_entry, LV_SCROLLBAR_MODE_OFF);

    //Write style for scr_prod_entry, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->scr_prod_entry, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scr_prod_entry, lv_color_hex(0x0f0f0f), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scr_prod_entry, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scr_prod_entry_cont_pe_bg
    ui->scr_prod_entry_cont_pe_bg = lv_obj_create(ui->scr_prod_entry);
    lv_obj_set_pos(ui->scr_prod_entry_cont_pe_bg, 24, 24);
    lv_obj_set_size(ui->scr_prod_entry_cont_pe_bg, 1232, 672);
    lv_obj_set_scrollbar_mode(ui->scr_prod_entry_cont_pe_bg, LV_SCROLLBAR_MODE_OFF);

    //Write style for scr_prod_entry_cont_pe_bg, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scr_prod_entry_cont_pe_bg, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_prod_entry_cont_pe_bg, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scr_prod_entry_cont_pe_bg, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scr_prod_entry_cont_pe_bg, lv_color_hex(0x151515), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scr_prod_entry_cont_pe_bg, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scr_prod_entry_cont_pe_bg, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scr_prod_entry_cont_pe_bg, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scr_prod_entry_cont_pe_bg, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scr_prod_entry_cont_pe_bg, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_prod_entry_cont_pe_bg, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scr_prod_entry_cont_pe_header
    ui->scr_prod_entry_cont_pe_header = lv_obj_create(ui->scr_prod_entry_cont_pe_bg);
    lv_obj_set_pos(ui->scr_prod_entry_cont_pe_header, 0, 0);
    lv_obj_set_size(ui->scr_prod_entry_cont_pe_header, 1232, 60);
    lv_obj_set_scrollbar_mode(ui->scr_prod_entry_cont_pe_header, LV_SCROLLBAR_MODE_OFF);

    //Write style for scr_prod_entry_cont_pe_header, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scr_prod_entry_cont_pe_header, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_prod_entry_cont_pe_header, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scr_prod_entry_cont_pe_header, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scr_prod_entry_cont_pe_header, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scr_prod_entry_cont_pe_header, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scr_prod_entry_cont_pe_header, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scr_prod_entry_cont_pe_header, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_prod_entry_cont_pe_header, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scr_prod_entry_lbl_pe_tiltle
    ui->scr_prod_entry_lbl_pe_tiltle = lv_label_create(ui->scr_prod_entry_cont_pe_header);
    lv_obj_set_pos(ui->scr_prod_entry_lbl_pe_tiltle, 0, 15);
    lv_obj_set_size(ui->scr_prod_entry_lbl_pe_tiltle, 348, 30);
    lv_label_set_text(ui->scr_prod_entry_lbl_pe_tiltle, ". PRODUCTION ENTRY");
    lv_label_set_long_mode(ui->scr_prod_entry_lbl_pe_tiltle, LV_LABEL_LONG_WRAP);

    //Write style for scr_prod_entry_lbl_pe_tiltle, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scr_prod_entry_lbl_pe_tiltle, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_prod_entry_lbl_pe_tiltle, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scr_prod_entry_lbl_pe_tiltle, lv_color_hex(0x2F93D1), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scr_prod_entry_lbl_pe_tiltle, &lv_font_Acme_Regular_30, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scr_prod_entry_lbl_pe_tiltle, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->scr_prod_entry_lbl_pe_tiltle, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->scr_prod_entry_lbl_pe_tiltle, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scr_prod_entry_lbl_pe_tiltle, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scr_prod_entry_lbl_pe_tiltle, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scr_prod_entry_lbl_pe_tiltle, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scr_prod_entry_lbl_pe_tiltle, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scr_prod_entry_lbl_pe_tiltle, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scr_prod_entry_lbl_pe_tiltle, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_prod_entry_lbl_pe_tiltle, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scr_prod_entry_label_pe_wo
    ui->scr_prod_entry_label_pe_wo = lv_label_create(ui->scr_prod_entry_cont_pe_header);
    lv_obj_set_pos(ui->scr_prod_entry_label_pe_wo, 912, 15);
    lv_obj_set_size(ui->scr_prod_entry_label_pe_wo, 316, 30);
    lv_label_set_text(ui->scr_prod_entry_label_pe_wo, "WO: #2024-08-01");
    lv_label_set_long_mode(ui->scr_prod_entry_label_pe_wo, LV_LABEL_LONG_WRAP);

    //Write style for scr_prod_entry_label_pe_wo, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scr_prod_entry_label_pe_wo, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_prod_entry_label_pe_wo, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scr_prod_entry_label_pe_wo, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scr_prod_entry_label_pe_wo, &lv_font_Acme_Regular_30, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scr_prod_entry_label_pe_wo, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->scr_prod_entry_label_pe_wo, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->scr_prod_entry_label_pe_wo, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scr_prod_entry_label_pe_wo, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scr_prod_entry_label_pe_wo, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scr_prod_entry_label_pe_wo, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scr_prod_entry_label_pe_wo, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scr_prod_entry_label_pe_wo, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scr_prod_entry_label_pe_wo, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_prod_entry_label_pe_wo, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scr_prod_entry_cont_pe_kpi_row
    ui->scr_prod_entry_cont_pe_kpi_row = lv_obj_create(ui->scr_prod_entry_cont_pe_bg);
    lv_obj_set_pos(ui->scr_prod_entry_cont_pe_kpi_row, 0, 70);
    lv_obj_set_size(ui->scr_prod_entry_cont_pe_kpi_row, 1232, 150);
    lv_obj_set_scrollbar_mode(ui->scr_prod_entry_cont_pe_kpi_row, LV_SCROLLBAR_MODE_OFF);

    //Write style for scr_prod_entry_cont_pe_kpi_row, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scr_prod_entry_cont_pe_kpi_row, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_prod_entry_cont_pe_kpi_row, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scr_prod_entry_cont_pe_kpi_row, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scr_prod_entry_cont_pe_kpi_row, lv_color_hex(0x151515), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scr_prod_entry_cont_pe_kpi_row, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scr_prod_entry_cont_pe_kpi_row, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scr_prod_entry_cont_pe_kpi_row, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scr_prod_entry_cont_pe_kpi_row, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scr_prod_entry_cont_pe_kpi_row, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_prod_entry_cont_pe_kpi_row, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scr_prod_entry_cont_total_finished
    ui->scr_prod_entry_cont_total_finished = lv_obj_create(ui->scr_prod_entry_cont_pe_kpi_row);
    lv_obj_set_pos(ui->scr_prod_entry_cont_total_finished, 0, 0);
    lv_obj_set_size(ui->scr_prod_entry_cont_total_finished, 600, 150);
    lv_obj_set_scrollbar_mode(ui->scr_prod_entry_cont_total_finished, LV_SCROLLBAR_MODE_OFF);

    //Write style for scr_prod_entry_cont_total_finished, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scr_prod_entry_cont_total_finished, 8, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->scr_prod_entry_cont_total_finished, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->scr_prod_entry_cont_total_finished, lv_color_hex(0x22c55e), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->scr_prod_entry_cont_total_finished, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_prod_entry_cont_total_finished, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scr_prod_entry_cont_total_finished, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scr_prod_entry_cont_total_finished, lv_color_hex(0xf5f5f5), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scr_prod_entry_cont_total_finished, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scr_prod_entry_cont_total_finished, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scr_prod_entry_cont_total_finished, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scr_prod_entry_cont_total_finished, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scr_prod_entry_cont_total_finished, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_prod_entry_cont_total_finished, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scr_prod_entry_lbl_total_title
    ui->scr_prod_entry_lbl_total_title = lv_label_create(ui->scr_prod_entry_cont_total_finished);
    lv_obj_set_pos(ui->scr_prod_entry_lbl_total_title, 174, 24);
    lv_obj_set_size(ui->scr_prod_entry_lbl_total_title, 239, 32);
    lv_label_set_text(ui->scr_prod_entry_lbl_total_title, "TOTAL FINISHED");
    lv_label_set_long_mode(ui->scr_prod_entry_lbl_total_title, LV_LABEL_LONG_WRAP);

    //Write style for scr_prod_entry_lbl_total_title, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scr_prod_entry_lbl_total_title, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_prod_entry_lbl_total_title, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scr_prod_entry_lbl_total_title, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scr_prod_entry_lbl_total_title, &lv_font_Acme_Regular_24, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scr_prod_entry_lbl_total_title, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->scr_prod_entry_lbl_total_title, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->scr_prod_entry_lbl_total_title, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scr_prod_entry_lbl_total_title, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scr_prod_entry_lbl_total_title, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scr_prod_entry_lbl_total_title, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scr_prod_entry_lbl_total_title, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scr_prod_entry_lbl_total_title, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scr_prod_entry_lbl_total_title, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_prod_entry_lbl_total_title, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scr_prod_entry_lbl_total_value
    ui->scr_prod_entry_lbl_total_value = lv_label_create(ui->scr_prod_entry_cont_total_finished);
    lv_obj_set_pos(ui->scr_prod_entry_lbl_total_value, 199, 52);
    lv_obj_set_size(ui->scr_prod_entry_lbl_total_value, 188, 62);
    lv_label_set_text(ui->scr_prod_entry_lbl_total_value, "100");
    lv_label_set_long_mode(ui->scr_prod_entry_lbl_total_value, LV_LABEL_LONG_WRAP);

    //Write style for scr_prod_entry_lbl_total_value, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scr_prod_entry_lbl_total_value, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_prod_entry_lbl_total_value, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scr_prod_entry_lbl_total_value, lv_color_hex(0x22c55e), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scr_prod_entry_lbl_total_value, &lv_font_Acme_Regular_64, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scr_prod_entry_lbl_total_value, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->scr_prod_entry_lbl_total_value, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->scr_prod_entry_lbl_total_value, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scr_prod_entry_lbl_total_value, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scr_prod_entry_lbl_total_value, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scr_prod_entry_lbl_total_value, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scr_prod_entry_lbl_total_value, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scr_prod_entry_lbl_total_value, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scr_prod_entry_lbl_total_value, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_prod_entry_lbl_total_value, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scr_prod_entry_cont_ng_qly
    ui->scr_prod_entry_cont_ng_qly = lv_obj_create(ui->scr_prod_entry_cont_pe_kpi_row);
    lv_obj_set_pos(ui->scr_prod_entry_cont_ng_qly, 632, 0);
    lv_obj_set_size(ui->scr_prod_entry_cont_ng_qly, 600, 150);
    lv_obj_set_scrollbar_mode(ui->scr_prod_entry_cont_ng_qly, LV_SCROLLBAR_MODE_OFF);

    //Write style for scr_prod_entry_cont_ng_qly, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scr_prod_entry_cont_ng_qly, 8, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->scr_prod_entry_cont_ng_qly, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->scr_prod_entry_cont_ng_qly, lv_color_hex(0xEF4444), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->scr_prod_entry_cont_ng_qly, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_prod_entry_cont_ng_qly, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scr_prod_entry_cont_ng_qly, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scr_prod_entry_cont_ng_qly, lv_color_hex(0xf5f5f5), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scr_prod_entry_cont_ng_qly, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scr_prod_entry_cont_ng_qly, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scr_prod_entry_cont_ng_qly, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scr_prod_entry_cont_ng_qly, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scr_prod_entry_cont_ng_qly, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_prod_entry_cont_ng_qly, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scr_prod_entry_lbl_ng_title
    ui->scr_prod_entry_lbl_ng_title = lv_label_create(ui->scr_prod_entry_cont_ng_qly);
    lv_obj_set_pos(ui->scr_prod_entry_lbl_ng_title, 174, 24);
    lv_obj_set_size(ui->scr_prod_entry_lbl_ng_title, 239, 32);
    lv_label_set_text(ui->scr_prod_entry_lbl_ng_title, "NG QUANTITY");
    lv_label_set_long_mode(ui->scr_prod_entry_lbl_ng_title, LV_LABEL_LONG_WRAP);

    //Write style for scr_prod_entry_lbl_ng_title, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scr_prod_entry_lbl_ng_title, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_prod_entry_lbl_ng_title, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scr_prod_entry_lbl_ng_title, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scr_prod_entry_lbl_ng_title, &lv_font_Acme_Regular_24, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scr_prod_entry_lbl_ng_title, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->scr_prod_entry_lbl_ng_title, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->scr_prod_entry_lbl_ng_title, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scr_prod_entry_lbl_ng_title, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scr_prod_entry_lbl_ng_title, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scr_prod_entry_lbl_ng_title, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scr_prod_entry_lbl_ng_title, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scr_prod_entry_lbl_ng_title, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scr_prod_entry_lbl_ng_title, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_prod_entry_lbl_ng_title, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scr_prod_entry_lbl_ng_value
    ui->scr_prod_entry_lbl_ng_value = lv_label_create(ui->scr_prod_entry_cont_ng_qly);
    lv_obj_set_pos(ui->scr_prod_entry_lbl_ng_value, 199, 52);
    lv_obj_set_size(ui->scr_prod_entry_lbl_ng_value, 188, 62);
    lv_label_set_text(ui->scr_prod_entry_lbl_ng_value, "2");
    lv_label_set_long_mode(ui->scr_prod_entry_lbl_ng_value, LV_LABEL_LONG_WRAP);

    //Write style for scr_prod_entry_lbl_ng_value, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scr_prod_entry_lbl_ng_value, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_prod_entry_lbl_ng_value, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scr_prod_entry_lbl_ng_value, lv_color_hex(0xEF4444), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scr_prod_entry_lbl_ng_value, &lv_font_Acme_Regular_64, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scr_prod_entry_lbl_ng_value, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->scr_prod_entry_lbl_ng_value, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->scr_prod_entry_lbl_ng_value, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scr_prod_entry_lbl_ng_value, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scr_prod_entry_lbl_ng_value, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scr_prod_entry_lbl_ng_value, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scr_prod_entry_lbl_ng_value, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scr_prod_entry_lbl_ng_value, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scr_prod_entry_lbl_ng_value, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_prod_entry_lbl_ng_value, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scr_prod_entry_btn_ng_up
    ui->scr_prod_entry_btn_ng_up = lv_button_create(ui->scr_prod_entry_cont_ng_qly);
    lv_obj_set_pos(ui->scr_prod_entry_btn_ng_up, 532, 43);
    lv_obj_set_size(ui->scr_prod_entry_btn_ng_up, 30, 30);
    ui->scr_prod_entry_btn_ng_up_label = lv_label_create(ui->scr_prod_entry_btn_ng_up);
    lv_label_set_text(ui->scr_prod_entry_btn_ng_up_label, " " LV_SYMBOL_UP " ");
    lv_label_set_long_mode(ui->scr_prod_entry_btn_ng_up_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->scr_prod_entry_btn_ng_up_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->scr_prod_entry_btn_ng_up, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->scr_prod_entry_btn_ng_up_label, LV_PCT(100));

    //Write style for scr_prod_entry_btn_ng_up, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->scr_prod_entry_btn_ng_up, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scr_prod_entry_btn_ng_up, lv_color_hex(0x7f7f7f), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scr_prod_entry_btn_ng_up, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->scr_prod_entry_btn_ng_up, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_prod_entry_btn_ng_up, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_prod_entry_btn_ng_up, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scr_prod_entry_btn_ng_up, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scr_prod_entry_btn_ng_up, &lv_font_montserratMedium_30, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scr_prod_entry_btn_ng_up, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scr_prod_entry_btn_ng_up, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scr_prod_entry_btn_ng_down
    ui->scr_prod_entry_btn_ng_down = lv_button_create(ui->scr_prod_entry_cont_ng_qly);
    lv_obj_set_pos(ui->scr_prod_entry_btn_ng_down, 532, 89);
    lv_obj_set_size(ui->scr_prod_entry_btn_ng_down, 30, 30);
    ui->scr_prod_entry_btn_ng_down_label = lv_label_create(ui->scr_prod_entry_btn_ng_down);
    lv_label_set_text(ui->scr_prod_entry_btn_ng_down_label, " " LV_SYMBOL_DOWN " ");
    lv_label_set_long_mode(ui->scr_prod_entry_btn_ng_down_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->scr_prod_entry_btn_ng_down_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->scr_prod_entry_btn_ng_down, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->scr_prod_entry_btn_ng_down_label, LV_PCT(100));

    //Write style for scr_prod_entry_btn_ng_down, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->scr_prod_entry_btn_ng_down, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scr_prod_entry_btn_ng_down, lv_color_hex(0x7f7f7f), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scr_prod_entry_btn_ng_down, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->scr_prod_entry_btn_ng_down, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_prod_entry_btn_ng_down, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_prod_entry_btn_ng_down, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scr_prod_entry_btn_ng_down, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scr_prod_entry_btn_ng_down, &lv_font_montserratMedium_30, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scr_prod_entry_btn_ng_down, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scr_prod_entry_btn_ng_down, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scr_prod_entry_cont_pe_mid_row
    ui->scr_prod_entry_cont_pe_mid_row = lv_obj_create(ui->scr_prod_entry_cont_pe_bg);
    lv_obj_set_pos(ui->scr_prod_entry_cont_pe_mid_row, 0, 240);
    lv_obj_set_size(ui->scr_prod_entry_cont_pe_mid_row, 1232, 320);
    lv_obj_set_scrollbar_mode(ui->scr_prod_entry_cont_pe_mid_row, LV_SCROLLBAR_MODE_OFF);

    //Write style for scr_prod_entry_cont_pe_mid_row, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scr_prod_entry_cont_pe_mid_row, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_prod_entry_cont_pe_mid_row, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scr_prod_entry_cont_pe_mid_row, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scr_prod_entry_cont_pe_mid_row, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scr_prod_entry_cont_pe_mid_row, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scr_prod_entry_cont_pe_mid_row, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scr_prod_entry_cont_pe_mid_row, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_prod_entry_cont_pe_mid_row, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scr_prod_entry_cont_pe_group
    ui->scr_prod_entry_cont_pe_group = lv_obj_create(ui->scr_prod_entry_cont_pe_mid_row);
    lv_obj_set_pos(ui->scr_prod_entry_cont_pe_group, 0, 0);
    lv_obj_set_size(ui->scr_prod_entry_cont_pe_group, 420, 320);
    lv_obj_set_scrollbar_mode(ui->scr_prod_entry_cont_pe_group, LV_SCROLLBAR_MODE_OFF);

    //Write style for scr_prod_entry_cont_pe_group, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scr_prod_entry_cont_pe_group, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_prod_entry_cont_pe_group, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scr_prod_entry_cont_pe_group, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scr_prod_entry_cont_pe_group, lv_color_hex(0x1e1e1e), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scr_prod_entry_cont_pe_group, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scr_prod_entry_cont_pe_group, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scr_prod_entry_cont_pe_group, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scr_prod_entry_cont_pe_group, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scr_prod_entry_cont_pe_group, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_prod_entry_cont_pe_group, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scr_prod_entry_lbl_group_tiltle
    ui->scr_prod_entry_lbl_group_tiltle = lv_label_create(ui->scr_prod_entry_cont_pe_group);
    lv_obj_set_pos(ui->scr_prod_entry_lbl_group_tiltle, 0, 0);
    lv_obj_set_size(ui->scr_prod_entry_lbl_group_tiltle, 420, 40);
    lv_label_set_text(ui->scr_prod_entry_lbl_group_tiltle, "     GROUP");
    lv_label_set_long_mode(ui->scr_prod_entry_lbl_group_tiltle, LV_LABEL_LONG_WRAP);

    //Write style for scr_prod_entry_lbl_group_tiltle, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scr_prod_entry_lbl_group_tiltle, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_prod_entry_lbl_group_tiltle, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scr_prod_entry_lbl_group_tiltle, lv_color_hex(0x919191), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scr_prod_entry_lbl_group_tiltle, &lv_font_Acme_Regular_25, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scr_prod_entry_lbl_group_tiltle, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->scr_prod_entry_lbl_group_tiltle, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->scr_prod_entry_lbl_group_tiltle, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scr_prod_entry_lbl_group_tiltle, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scr_prod_entry_lbl_group_tiltle, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scr_prod_entry_lbl_group_tiltle, lv_color_hex(0x232323), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scr_prod_entry_lbl_group_tiltle, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scr_prod_entry_lbl_group_tiltle, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scr_prod_entry_lbl_group_tiltle, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scr_prod_entry_lbl_group_tiltle, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scr_prod_entry_lbl_group_tiltle, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_prod_entry_lbl_group_tiltle, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scr_prod_entry_btn_grp_material
    ui->scr_prod_entry_btn_grp_material = lv_button_create(ui->scr_prod_entry_cont_pe_group);
    lv_obj_set_pos(ui->scr_prod_entry_btn_grp_material, 0, 42);
    lv_obj_set_size(ui->scr_prod_entry_btn_grp_material, 420, 70);
    ui->scr_prod_entry_btn_grp_material_label = lv_label_create(ui->scr_prod_entry_btn_grp_material);
    lv_label_set_text(ui->scr_prod_entry_btn_grp_material_label, "     MATERIAL");
    lv_label_set_long_mode(ui->scr_prod_entry_btn_grp_material_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->scr_prod_entry_btn_grp_material_label, LV_ALIGN_LEFT_MID, 0, 0);
    lv_obj_set_style_pad_all(ui->scr_prod_entry_btn_grp_material, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->scr_prod_entry_btn_grp_material_label, LV_PCT(100));

    //Write style for scr_prod_entry_btn_grp_material, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->scr_prod_entry_btn_grp_material, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->scr_prod_entry_btn_grp_material, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_prod_entry_btn_grp_material, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_prod_entry_btn_grp_material, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scr_prod_entry_btn_grp_material, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scr_prod_entry_btn_grp_material, &lv_font_Acme_Regular_26, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scr_prod_entry_btn_grp_material, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scr_prod_entry_btn_grp_material, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scr_prod_entry_btn_grp_machine
    ui->scr_prod_entry_btn_grp_machine = lv_button_create(ui->scr_prod_entry_cont_pe_group);
    lv_obj_set_pos(ui->scr_prod_entry_btn_grp_machine, 0, 258);
    lv_obj_set_size(ui->scr_prod_entry_btn_grp_machine, 420, 70);
    ui->scr_prod_entry_btn_grp_machine_label = lv_label_create(ui->scr_prod_entry_btn_grp_machine);
    lv_label_set_text(ui->scr_prod_entry_btn_grp_machine_label, "     MACHINE");
    lv_label_set_long_mode(ui->scr_prod_entry_btn_grp_machine_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->scr_prod_entry_btn_grp_machine_label, LV_ALIGN_LEFT_MID, 0, 0);
    lv_obj_set_style_pad_all(ui->scr_prod_entry_btn_grp_machine, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->scr_prod_entry_btn_grp_machine_label, LV_PCT(100));

    //Write style for scr_prod_entry_btn_grp_machine, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->scr_prod_entry_btn_grp_machine, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->scr_prod_entry_btn_grp_machine, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_prod_entry_btn_grp_machine, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_prod_entry_btn_grp_machine, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scr_prod_entry_btn_grp_machine, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scr_prod_entry_btn_grp_machine, &lv_font_Acme_Regular_26, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scr_prod_entry_btn_grp_machine, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scr_prod_entry_btn_grp_machine, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scr_prod_entry_btn_grp_man
    ui->scr_prod_entry_btn_grp_man = lv_button_create(ui->scr_prod_entry_cont_pe_group);
    lv_obj_set_pos(ui->scr_prod_entry_btn_grp_man, 0, 186);
    lv_obj_set_size(ui->scr_prod_entry_btn_grp_man, 420, 70);
    ui->scr_prod_entry_btn_grp_man_label = lv_label_create(ui->scr_prod_entry_btn_grp_man);
    lv_label_set_text(ui->scr_prod_entry_btn_grp_man_label, "     MAN");
    lv_label_set_long_mode(ui->scr_prod_entry_btn_grp_man_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->scr_prod_entry_btn_grp_man_label, LV_ALIGN_LEFT_MID, 0, 0);
    lv_obj_set_style_pad_all(ui->scr_prod_entry_btn_grp_man, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->scr_prod_entry_btn_grp_man_label, LV_PCT(100));

    //Write style for scr_prod_entry_btn_grp_man, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->scr_prod_entry_btn_grp_man, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->scr_prod_entry_btn_grp_man, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_prod_entry_btn_grp_man, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_prod_entry_btn_grp_man, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scr_prod_entry_btn_grp_man, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scr_prod_entry_btn_grp_man, &lv_font_Acme_Regular_26, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scr_prod_entry_btn_grp_man, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scr_prod_entry_btn_grp_man, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scr_prod_entry_btn_grp_method
    ui->scr_prod_entry_btn_grp_method = lv_button_create(ui->scr_prod_entry_cont_pe_group);
    lv_obj_set_pos(ui->scr_prod_entry_btn_grp_method, 0, 114);
    lv_obj_set_size(ui->scr_prod_entry_btn_grp_method, 420, 70);
    ui->scr_prod_entry_btn_grp_method_label = lv_label_create(ui->scr_prod_entry_btn_grp_method);
    lv_label_set_text(ui->scr_prod_entry_btn_grp_method_label, "     METHOD");
    lv_label_set_long_mode(ui->scr_prod_entry_btn_grp_method_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->scr_prod_entry_btn_grp_method_label, LV_ALIGN_LEFT_MID, 0, 0);
    lv_obj_set_style_pad_all(ui->scr_prod_entry_btn_grp_method, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->scr_prod_entry_btn_grp_method_label, LV_PCT(100));

    //Write style for scr_prod_entry_btn_grp_method, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->scr_prod_entry_btn_grp_method, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->scr_prod_entry_btn_grp_method, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_prod_entry_btn_grp_method, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_prod_entry_btn_grp_method, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scr_prod_entry_btn_grp_method, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scr_prod_entry_btn_grp_method, &lv_font_Acme_Regular_26, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scr_prod_entry_btn_grp_method, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scr_prod_entry_btn_grp_method, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scr_prod_entry_cont_pe_defect
    ui->scr_prod_entry_cont_pe_defect = lv_obj_create(ui->scr_prod_entry_cont_pe_mid_row);
    lv_obj_set_pos(ui->scr_prod_entry_cont_pe_defect, 438, 0);
    lv_obj_set_size(ui->scr_prod_entry_cont_pe_defect, 794, 320);
    lv_obj_set_scrollbar_mode(ui->scr_prod_entry_cont_pe_defect, LV_SCROLLBAR_MODE_OFF);

    //Write style for scr_prod_entry_cont_pe_defect, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scr_prod_entry_cont_pe_defect, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_prod_entry_cont_pe_defect, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scr_prod_entry_cont_pe_defect, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scr_prod_entry_cont_pe_defect, lv_color_hex(0x1e1e1e), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scr_prod_entry_cont_pe_defect, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scr_prod_entry_cont_pe_defect, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scr_prod_entry_cont_pe_defect, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scr_prod_entry_cont_pe_defect, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scr_prod_entry_cont_pe_defect, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_prod_entry_cont_pe_defect, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scr_prod_entry_lbl_defect_tiltle
    ui->scr_prod_entry_lbl_defect_tiltle = lv_label_create(ui->scr_prod_entry_cont_pe_defect);
    lv_obj_set_pos(ui->scr_prod_entry_lbl_defect_tiltle, 0, 0);
    lv_obj_set_size(ui->scr_prod_entry_lbl_defect_tiltle, 794, 40);
    lv_label_set_text(ui->scr_prod_entry_lbl_defect_tiltle, "     DEFECT DETAIL");
    lv_label_set_long_mode(ui->scr_prod_entry_lbl_defect_tiltle, LV_LABEL_LONG_WRAP);

    //Write style for scr_prod_entry_lbl_defect_tiltle, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scr_prod_entry_lbl_defect_tiltle, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_prod_entry_lbl_defect_tiltle, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scr_prod_entry_lbl_defect_tiltle, lv_color_hex(0x919191), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scr_prod_entry_lbl_defect_tiltle, &lv_font_Acme_Regular_25, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scr_prod_entry_lbl_defect_tiltle, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->scr_prod_entry_lbl_defect_tiltle, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->scr_prod_entry_lbl_defect_tiltle, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scr_prod_entry_lbl_defect_tiltle, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scr_prod_entry_lbl_defect_tiltle, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scr_prod_entry_lbl_defect_tiltle, lv_color_hex(0x232323), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scr_prod_entry_lbl_defect_tiltle, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scr_prod_entry_lbl_defect_tiltle, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scr_prod_entry_lbl_defect_tiltle, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scr_prod_entry_lbl_defect_tiltle, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scr_prod_entry_lbl_defect_tiltle, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_prod_entry_lbl_defect_tiltle, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scr_prod_entry_btn_def_1
    ui->scr_prod_entry_btn_def_1 = lv_button_create(ui->scr_prod_entry_cont_pe_defect);
    lv_obj_set_pos(ui->scr_prod_entry_btn_def_1, 0, 42);
    lv_obj_set_size(ui->scr_prod_entry_btn_def_1, 794, 70);
    ui->scr_prod_entry_btn_def_1_label = lv_label_create(ui->scr_prod_entry_btn_def_1);
    lv_label_set_text(ui->scr_prod_entry_btn_def_1_label, "     Motor Overheat");
    lv_label_set_long_mode(ui->scr_prod_entry_btn_def_1_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->scr_prod_entry_btn_def_1_label, LV_ALIGN_LEFT_MID, 0, 0);
    lv_obj_set_style_pad_all(ui->scr_prod_entry_btn_def_1, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->scr_prod_entry_btn_def_1_label, LV_PCT(100));

    //Write style for scr_prod_entry_btn_def_1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->scr_prod_entry_btn_def_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->scr_prod_entry_btn_def_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_prod_entry_btn_def_1, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_prod_entry_btn_def_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scr_prod_entry_btn_def_1, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scr_prod_entry_btn_def_1, &lv_font_Acme_Regular_26, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scr_prod_entry_btn_def_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scr_prod_entry_btn_def_1, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scr_prod_entry_btn_def_4
    ui->scr_prod_entry_btn_def_4 = lv_button_create(ui->scr_prod_entry_cont_pe_defect);
    lv_obj_set_pos(ui->scr_prod_entry_btn_def_4, 0, 258);
    lv_obj_set_size(ui->scr_prod_entry_btn_def_4, 794, 70);
    ui->scr_prod_entry_btn_def_4_label = lv_label_create(ui->scr_prod_entry_btn_def_4);
    lv_label_set_text(ui->scr_prod_entry_btn_def_4_label, "     Power leak");
    lv_label_set_long_mode(ui->scr_prod_entry_btn_def_4_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->scr_prod_entry_btn_def_4_label, LV_ALIGN_LEFT_MID, 0, 0);
    lv_obj_set_style_pad_all(ui->scr_prod_entry_btn_def_4, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->scr_prod_entry_btn_def_4_label, LV_PCT(100));

    //Write style for scr_prod_entry_btn_def_4, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->scr_prod_entry_btn_def_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->scr_prod_entry_btn_def_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_prod_entry_btn_def_4, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_prod_entry_btn_def_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scr_prod_entry_btn_def_4, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scr_prod_entry_btn_def_4, &lv_font_Acme_Regular_26, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scr_prod_entry_btn_def_4, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scr_prod_entry_btn_def_4, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scr_prod_entry_btn_def_3
    ui->scr_prod_entry_btn_def_3 = lv_button_create(ui->scr_prod_entry_cont_pe_defect);
    lv_obj_set_pos(ui->scr_prod_entry_btn_def_3, 0, 186);
    lv_obj_set_size(ui->scr_prod_entry_btn_def_3, 794, 70);
    ui->scr_prod_entry_btn_def_3_label = lv_label_create(ui->scr_prod_entry_btn_def_3);
    lv_label_set_text(ui->scr_prod_entry_btn_def_3_label, "     Belt Broken");
    lv_label_set_long_mode(ui->scr_prod_entry_btn_def_3_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->scr_prod_entry_btn_def_3_label, LV_ALIGN_LEFT_MID, 0, 0);
    lv_obj_set_style_pad_all(ui->scr_prod_entry_btn_def_3, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->scr_prod_entry_btn_def_3_label, LV_PCT(100));

    //Write style for scr_prod_entry_btn_def_3, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->scr_prod_entry_btn_def_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->scr_prod_entry_btn_def_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_prod_entry_btn_def_3, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_prod_entry_btn_def_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scr_prod_entry_btn_def_3, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scr_prod_entry_btn_def_3, &lv_font_Acme_Regular_26, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scr_prod_entry_btn_def_3, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scr_prod_entry_btn_def_3, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scr_prod_entry_btn_def_2
    ui->scr_prod_entry_btn_def_2 = lv_button_create(ui->scr_prod_entry_cont_pe_defect);
    lv_obj_set_pos(ui->scr_prod_entry_btn_def_2, 0, 114);
    lv_obj_set_size(ui->scr_prod_entry_btn_def_2, 794, 70);
    ui->scr_prod_entry_btn_def_2_label = lv_label_create(ui->scr_prod_entry_btn_def_2);
    lv_label_set_text(ui->scr_prod_entry_btn_def_2_label, "     Sensor Failure");
    lv_label_set_long_mode(ui->scr_prod_entry_btn_def_2_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->scr_prod_entry_btn_def_2_label, LV_ALIGN_LEFT_MID, 0, 0);
    lv_obj_set_style_pad_all(ui->scr_prod_entry_btn_def_2, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->scr_prod_entry_btn_def_2_label, LV_PCT(100));

    //Write style for scr_prod_entry_btn_def_2, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->scr_prod_entry_btn_def_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->scr_prod_entry_btn_def_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_prod_entry_btn_def_2, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_prod_entry_btn_def_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scr_prod_entry_btn_def_2, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scr_prod_entry_btn_def_2, &lv_font_Acme_Regular_26, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scr_prod_entry_btn_def_2, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scr_prod_entry_btn_def_2, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scr_prod_entry_cont_pe_bottom
    ui->scr_prod_entry_cont_pe_bottom = lv_obj_create(ui->scr_prod_entry_cont_pe_bg);
    lv_obj_set_pos(ui->scr_prod_entry_cont_pe_bottom, 0, 570);
    lv_obj_set_size(ui->scr_prod_entry_cont_pe_bottom, 1232, 90);
    lv_obj_set_scrollbar_mode(ui->scr_prod_entry_cont_pe_bottom, LV_SCROLLBAR_MODE_OFF);

    //Write style for scr_prod_entry_cont_pe_bottom, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scr_prod_entry_cont_pe_bottom, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_prod_entry_cont_pe_bottom, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scr_prod_entry_cont_pe_bottom, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scr_prod_entry_cont_pe_bottom, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scr_prod_entry_cont_pe_bottom, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scr_prod_entry_cont_pe_bottom, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scr_prod_entry_cont_pe_bottom, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_prod_entry_cont_pe_bottom, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scr_prod_entry_btn_pe_back
    ui->scr_prod_entry_btn_pe_back = lv_button_create(ui->scr_prod_entry_cont_pe_bottom);
    lv_obj_set_pos(ui->scr_prod_entry_btn_pe_back, 10, 10);
    lv_obj_set_size(ui->scr_prod_entry_btn_pe_back, 140, 70);
    ui->scr_prod_entry_btn_pe_back_label = lv_label_create(ui->scr_prod_entry_btn_pe_back);
    lv_label_set_text(ui->scr_prod_entry_btn_pe_back_label, "BACK");
    lv_label_set_long_mode(ui->scr_prod_entry_btn_pe_back_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->scr_prod_entry_btn_pe_back_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->scr_prod_entry_btn_pe_back, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->scr_prod_entry_btn_pe_back_label, LV_PCT(100));

    //Write style for scr_prod_entry_btn_pe_back, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->scr_prod_entry_btn_pe_back, 212, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scr_prod_entry_btn_pe_back, lv_color_hex(0x2A2A2A), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scr_prod_entry_btn_pe_back, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->scr_prod_entry_btn_pe_back, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_prod_entry_btn_pe_back, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_prod_entry_btn_pe_back, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scr_prod_entry_btn_pe_back, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scr_prod_entry_btn_pe_back, &lv_font_Acme_Regular_26, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scr_prod_entry_btn_pe_back, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scr_prod_entry_btn_pe_back, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scr_prod_entry_btn_pe_submit
    ui->scr_prod_entry_btn_pe_submit = lv_button_create(ui->scr_prod_entry_cont_pe_bottom);
    lv_obj_set_pos(ui->scr_prod_entry_btn_pe_submit, 1042, 10);
    lv_obj_set_size(ui->scr_prod_entry_btn_pe_submit, 180, 70);
    ui->scr_prod_entry_btn_pe_submit_label = lv_label_create(ui->scr_prod_entry_btn_pe_submit);
    lv_label_set_text(ui->scr_prod_entry_btn_pe_submit_label, "SUBMIT");
    lv_label_set_long_mode(ui->scr_prod_entry_btn_pe_submit_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->scr_prod_entry_btn_pe_submit_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->scr_prod_entry_btn_pe_submit, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->scr_prod_entry_btn_pe_submit_label, LV_PCT(100));

    //Write style for scr_prod_entry_btn_pe_submit, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->scr_prod_entry_btn_pe_submit, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scr_prod_entry_btn_pe_submit, lv_color_hex(0x22c55e), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scr_prod_entry_btn_pe_submit, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->scr_prod_entry_btn_pe_submit, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_prod_entry_btn_pe_submit, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_prod_entry_btn_pe_submit, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scr_prod_entry_btn_pe_submit, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scr_prod_entry_btn_pe_submit, &lv_font_Acme_Regular_26, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scr_prod_entry_btn_pe_submit, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scr_prod_entry_btn_pe_submit, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scr_prod_entry_ta_pe_note
    ui->scr_prod_entry_ta_pe_note = lv_textarea_create(ui->scr_prod_entry_cont_pe_bottom);
    lv_obj_set_pos(ui->scr_prod_entry_ta_pe_note, 171, 10);
    lv_obj_set_size(ui->scr_prod_entry_ta_pe_note, 850, 70);
    lv_textarea_set_text(ui->scr_prod_entry_ta_pe_note, "Add defect note here...");
    lv_textarea_set_placeholder_text(ui->scr_prod_entry_ta_pe_note, "");
    lv_textarea_set_password_bullet(ui->scr_prod_entry_ta_pe_note, "*");
    lv_textarea_set_password_mode(ui->scr_prod_entry_ta_pe_note, false);
    lv_textarea_set_one_line(ui->scr_prod_entry_ta_pe_note, false);
    lv_textarea_set_accepted_chars(ui->scr_prod_entry_ta_pe_note, "");
    lv_textarea_set_max_length(ui->scr_prod_entry_ta_pe_note, 32);
#if LV_USE_KEYBOARD
    lv_obj_add_event_cb(ui->scr_prod_entry_ta_pe_note, ta_event_cb, LV_EVENT_ALL, ui->g_kb_top_layer);
#endif

    //Write style for scr_prod_entry_ta_pe_note, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_text_color(ui->scr_prod_entry_ta_pe_note, lv_color_hex(0xc1c1c1), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scr_prod_entry_ta_pe_note, &lv_font_Abel_regular_24, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scr_prod_entry_ta_pe_note, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->scr_prod_entry_ta_pe_note, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scr_prod_entry_ta_pe_note, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scr_prod_entry_ta_pe_note, 238, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scr_prod_entry_ta_pe_note, lv_color_hex(0x101010), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scr_prod_entry_ta_pe_note, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->scr_prod_entry_ta_pe_note, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_prod_entry_ta_pe_note, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scr_prod_entry_ta_pe_note, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scr_prod_entry_ta_pe_note, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scr_prod_entry_ta_pe_note, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_prod_entry_ta_pe_note, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style for scr_prod_entry_ta_pe_note, Part: LV_PART_SCROLLBAR, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->scr_prod_entry_ta_pe_note, 255, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scr_prod_entry_ta_pe_note, lv_color_hex(0x2195f6), LV_PART_SCROLLBAR|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scr_prod_entry_ta_pe_note, LV_GRAD_DIR_NONE, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_prod_entry_ta_pe_note, 0, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);

    //The custom code of scr_prod_entry.


    //Update current screen layout.
    lv_obj_update_layout(ui->scr_prod_entry);

    //Init events for screen.
    events_init_scr_prod_entry(ui);
}
