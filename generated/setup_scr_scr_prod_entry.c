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
    lv_obj_set_pos(ui->scr_prod_entry_cont_pe_bg, 26, 0);
    lv_obj_set_size(ui->scr_prod_entry_cont_pe_bg, 1232, 720);
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
    lv_obj_set_size(ui->scr_prod_entry_cont_pe_header, 1232, 90);
    lv_obj_set_scrollbar_mode(ui->scr_prod_entry_cont_pe_header, LV_SCROLLBAR_MODE_OFF);

    //Write style for scr_prod_entry_cont_pe_header, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scr_prod_entry_cont_pe_header, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_prod_entry_cont_pe_header, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scr_prod_entry_cont_pe_header, 94, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scr_prod_entry_cont_pe_header, lv_color_hex(0x2b2b2b), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scr_prod_entry_cont_pe_header, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scr_prod_entry_cont_pe_header, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scr_prod_entry_cont_pe_header, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scr_prod_entry_cont_pe_header, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scr_prod_entry_cont_pe_header, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_prod_entry_cont_pe_header, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scr_prod_entry_lbl_pe_tiltle
    ui->scr_prod_entry_lbl_pe_tiltle = lv_label_create(ui->scr_prod_entry_cont_pe_header);
    lv_obj_set_pos(ui->scr_prod_entry_lbl_pe_tiltle, 466, 30);
    lv_obj_set_size(ui->scr_prod_entry_lbl_pe_tiltle, 348, 30);
    lv_label_set_text(ui->scr_prod_entry_lbl_pe_tiltle, "PRODUCTION ENTRY");
    lv_label_set_long_mode(ui->scr_prod_entry_lbl_pe_tiltle, LV_LABEL_LONG_WRAP);

    //Write style for scr_prod_entry_lbl_pe_tiltle, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scr_prod_entry_lbl_pe_tiltle, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_prod_entry_lbl_pe_tiltle, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scr_prod_entry_lbl_pe_tiltle, lv_color_hex(0x2F93D1), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scr_prod_entry_lbl_pe_tiltle, &lv_font_Acme_Regular_34, LV_PART_MAIN|LV_STATE_DEFAULT);
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
    lv_obj_set_pos(ui->scr_prod_entry_label_pe_wo, 912, 30);
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
    lv_obj_set_style_text_align(ui->scr_prod_entry_label_pe_wo, LV_TEXT_ALIGN_RIGHT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scr_prod_entry_label_pe_wo, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scr_prod_entry_label_pe_wo, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scr_prod_entry_label_pe_wo, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scr_prod_entry_label_pe_wo, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scr_prod_entry_label_pe_wo, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_prod_entry_label_pe_wo, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scr_prod_entry_cont_pe_kpi_row
    ui->scr_prod_entry_cont_pe_kpi_row = lv_obj_create(ui->scr_prod_entry_cont_pe_bg);
    lv_obj_set_pos(ui->scr_prod_entry_cont_pe_kpi_row, 0, 95);
    lv_obj_set_size(ui->scr_prod_entry_cont_pe_kpi_row, 1232, 367);
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
    lv_obj_set_pos(ui->scr_prod_entry_cont_total_finished, 166, 44);
    lv_obj_set_size(ui->scr_prod_entry_cont_total_finished, 400, 300);
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
    lv_obj_set_pos(ui->scr_prod_entry_lbl_total_title, 37, 37);
    lv_obj_set_size(ui->scr_prod_entry_lbl_total_title, 308, 43);
    lv_label_set_text(ui->scr_prod_entry_lbl_total_title, "TOTAL FINISHED");
    lv_label_set_long_mode(ui->scr_prod_entry_lbl_total_title, LV_LABEL_LONG_WRAP);

    //Write style for scr_prod_entry_lbl_total_title, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scr_prod_entry_lbl_total_title, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_prod_entry_lbl_total_title, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scr_prod_entry_lbl_total_title, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scr_prod_entry_lbl_total_title, &lv_font_Acme_Regular_40, LV_PART_MAIN|LV_STATE_DEFAULT);
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

    //Write codes scr_prod_entry_ta_total_finished
    ui->scr_prod_entry_ta_total_finished = lv_textarea_create(ui->scr_prod_entry_cont_total_finished);
    lv_obj_set_pos(ui->scr_prod_entry_ta_total_finished, 83, 79);
    lv_obj_set_size(ui->scr_prod_entry_ta_total_finished, 215, 70);
    lv_textarea_set_text(ui->scr_prod_entry_ta_total_finished, "100");
    lv_textarea_set_placeholder_text(ui->scr_prod_entry_ta_total_finished, "");
    lv_textarea_set_password_bullet(ui->scr_prod_entry_ta_total_finished, "*");
    lv_textarea_set_password_mode(ui->scr_prod_entry_ta_total_finished, false);
    lv_textarea_set_one_line(ui->scr_prod_entry_ta_total_finished, true);
    lv_textarea_set_accepted_chars(ui->scr_prod_entry_ta_total_finished, "");
    lv_textarea_set_max_length(ui->scr_prod_entry_ta_total_finished, 32);
#if LV_USE_KEYBOARD
    lv_obj_add_event_cb(ui->scr_prod_entry_ta_total_finished, ta_event_cb, LV_EVENT_ALL, ui->g_kb_top_layer);
#endif

    //Write style for scr_prod_entry_ta_total_finished, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_text_color(ui->scr_prod_entry_ta_total_finished, lv_color_hex(0x22c55e), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scr_prod_entry_ta_total_finished, &lv_font_Acme_Regular_70, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scr_prod_entry_ta_total_finished, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->scr_prod_entry_ta_total_finished, 1, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scr_prod_entry_ta_total_finished, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scr_prod_entry_ta_total_finished, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->scr_prod_entry_ta_total_finished, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_prod_entry_ta_total_finished, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scr_prod_entry_ta_total_finished, 55, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scr_prod_entry_ta_total_finished, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scr_prod_entry_ta_total_finished, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_prod_entry_ta_total_finished, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style for scr_prod_entry_ta_total_finished, Part: LV_PART_SCROLLBAR, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->scr_prod_entry_ta_total_finished, 255, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scr_prod_entry_ta_total_finished, lv_color_hex(0x2195f6), LV_PART_SCROLLBAR|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scr_prod_entry_ta_total_finished, LV_GRAD_DIR_NONE, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_prod_entry_ta_total_finished, 0, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);

    //Write codes scr_prod_entry_cont_ng_qly
    ui->scr_prod_entry_cont_ng_qly = lv_obj_create(ui->scr_prod_entry_cont_pe_kpi_row);
    lv_obj_set_pos(ui->scr_prod_entry_cont_ng_qly, 632, 44);
    lv_obj_set_size(ui->scr_prod_entry_cont_ng_qly, 400, 300);
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
    lv_obj_set_pos(ui->scr_prod_entry_lbl_ng_title, 67, 37);
    lv_obj_set_size(ui->scr_prod_entry_lbl_ng_title, 273, 48);
    lv_label_set_text(ui->scr_prod_entry_lbl_ng_title, "NG QUANTITY");
    lv_label_set_long_mode(ui->scr_prod_entry_lbl_ng_title, LV_LABEL_LONG_WRAP);

    //Write style for scr_prod_entry_lbl_ng_title, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scr_prod_entry_lbl_ng_title, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_prod_entry_lbl_ng_title, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scr_prod_entry_lbl_ng_title, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scr_prod_entry_lbl_ng_title, &lv_font_Acme_Regular_40, LV_PART_MAIN|LV_STATE_DEFAULT);
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

    //Write codes scr_prod_entry_ta_ng_quantity
    ui->scr_prod_entry_ta_ng_quantity = lv_textarea_create(ui->scr_prod_entry_cont_ng_qly);
    lv_obj_set_pos(ui->scr_prod_entry_ta_ng_quantity, 105, 79);
    lv_obj_set_size(ui->scr_prod_entry_ta_ng_quantity, 196, 70);
    lv_textarea_set_text(ui->scr_prod_entry_ta_ng_quantity, "2");
    lv_textarea_set_placeholder_text(ui->scr_prod_entry_ta_ng_quantity, "");
    lv_textarea_set_password_bullet(ui->scr_prod_entry_ta_ng_quantity, "*");
    lv_textarea_set_password_mode(ui->scr_prod_entry_ta_ng_quantity, false);
    lv_textarea_set_one_line(ui->scr_prod_entry_ta_ng_quantity, true);
    lv_textarea_set_accepted_chars(ui->scr_prod_entry_ta_ng_quantity, "");
    lv_textarea_set_max_length(ui->scr_prod_entry_ta_ng_quantity, 32);
#if LV_USE_KEYBOARD
    lv_obj_add_event_cb(ui->scr_prod_entry_ta_ng_quantity, ta_event_cb, LV_EVENT_ALL, ui->g_kb_top_layer);
#endif

    //Write style for scr_prod_entry_ta_ng_quantity, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_text_color(ui->scr_prod_entry_ta_ng_quantity, lv_color_hex(0xf00000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scr_prod_entry_ta_ng_quantity, &lv_font_Acme_Regular_70, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scr_prod_entry_ta_ng_quantity, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->scr_prod_entry_ta_ng_quantity, 1, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scr_prod_entry_ta_ng_quantity, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scr_prod_entry_ta_ng_quantity, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->scr_prod_entry_ta_ng_quantity, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_prod_entry_ta_ng_quantity, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scr_prod_entry_ta_ng_quantity, 55, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scr_prod_entry_ta_ng_quantity, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scr_prod_entry_ta_ng_quantity, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_prod_entry_ta_ng_quantity, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style for scr_prod_entry_ta_ng_quantity, Part: LV_PART_SCROLLBAR, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->scr_prod_entry_ta_ng_quantity, 255, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scr_prod_entry_ta_ng_quantity, lv_color_hex(0x2195f6), LV_PART_SCROLLBAR|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scr_prod_entry_ta_ng_quantity, LV_GRAD_DIR_NONE, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_prod_entry_ta_ng_quantity, 0, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);

    //Write codes scr_prod_entry_cont_pe_bottom
    ui->scr_prod_entry_cont_pe_bottom = lv_obj_create(ui->scr_prod_entry_cont_pe_bg);
    lv_obj_set_pos(ui->scr_prod_entry_cont_pe_bottom, 0, 459);
    lv_obj_set_size(ui->scr_prod_entry_cont_pe_bottom, 1232, 250);
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

    //Write codes scr_prod_entry_btn_pe_submit
    ui->scr_prod_entry_btn_pe_submit = lv_button_create(ui->scr_prod_entry_cont_pe_bottom);
    lv_obj_set_pos(ui->scr_prod_entry_btn_pe_submit, 632, 138);
    lv_obj_set_size(ui->scr_prod_entry_btn_pe_submit, 400, 70);
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
    lv_obj_set_style_radius(ui->scr_prod_entry_btn_pe_submit, 10, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_prod_entry_btn_pe_submit, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scr_prod_entry_btn_pe_submit, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scr_prod_entry_btn_pe_submit, &lv_font_Acme_Regular_26, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scr_prod_entry_btn_pe_submit, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scr_prod_entry_btn_pe_submit, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scr_prod_entry_ta_pe_note
    ui->scr_prod_entry_ta_pe_note = lv_textarea_create(ui->scr_prod_entry_cont_pe_bottom);
    lv_obj_set_pos(ui->scr_prod_entry_ta_pe_note, 167, 15);
    lv_obj_set_size(ui->scr_prod_entry_ta_pe_note, 866, 90);
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
    lv_obj_set_style_text_font(ui->scr_prod_entry_ta_pe_note, &lv_font_Abel_regular_28, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scr_prod_entry_ta_pe_note, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->scr_prod_entry_ta_pe_note, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scr_prod_entry_ta_pe_note, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scr_prod_entry_ta_pe_note, 238, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scr_prod_entry_ta_pe_note, lv_color_hex(0x404040), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scr_prod_entry_ta_pe_note, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->scr_prod_entry_ta_pe_note, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_prod_entry_ta_pe_note, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scr_prod_entry_ta_pe_note, 20, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scr_prod_entry_ta_pe_note, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scr_prod_entry_ta_pe_note, 20, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_prod_entry_ta_pe_note, 10, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style for scr_prod_entry_ta_pe_note, Part: LV_PART_SCROLLBAR, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->scr_prod_entry_ta_pe_note, 255, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scr_prod_entry_ta_pe_note, lv_color_hex(0x2195f6), LV_PART_SCROLLBAR|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scr_prod_entry_ta_pe_note, LV_GRAD_DIR_NONE, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_prod_entry_ta_pe_note, 0, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);

    //Write codes scr_prod_entry_btn_cancel
    ui->scr_prod_entry_btn_cancel = lv_button_create(ui->scr_prod_entry_cont_pe_bottom);
    lv_obj_set_pos(ui->scr_prod_entry_btn_cancel, 165, 138);
    lv_obj_set_size(ui->scr_prod_entry_btn_cancel, 400, 70);
    ui->scr_prod_entry_btn_cancel_label = lv_label_create(ui->scr_prod_entry_btn_cancel);
    lv_label_set_text(ui->scr_prod_entry_btn_cancel_label, "CANCEL");
    lv_label_set_long_mode(ui->scr_prod_entry_btn_cancel_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->scr_prod_entry_btn_cancel_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->scr_prod_entry_btn_cancel, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->scr_prod_entry_btn_cancel_label, LV_PCT(100));

    //Write style for scr_prod_entry_btn_cancel, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->scr_prod_entry_btn_cancel, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scr_prod_entry_btn_cancel, lv_color_hex(0x717171), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scr_prod_entry_btn_cancel, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->scr_prod_entry_btn_cancel, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_prod_entry_btn_cancel, 10, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_prod_entry_btn_cancel, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scr_prod_entry_btn_cancel, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scr_prod_entry_btn_cancel, &lv_font_Acme_Regular_30, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scr_prod_entry_btn_cancel, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scr_prod_entry_btn_cancel, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //The custom code of scr_prod_entry.


    //Update current screen layout.
    lv_obj_update_layout(ui->scr_prod_entry);

    //Init events for screen.
    events_init_scr_prod_entry(ui);
}
