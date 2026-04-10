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



void setup_scr_scr_select_wo(lv_ui *ui)
{
    //Write codes scr_select_wo
    ui->scr_select_wo = lv_obj_create(NULL);
    lv_obj_set_size(ui->scr_select_wo, 1280, 720);
    lv_obj_set_scrollbar_mode(ui->scr_select_wo, LV_SCROLLBAR_MODE_OFF);

    //Write style for scr_select_wo, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->scr_select_wo, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scr_select_wo, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scr_select_wo, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scr_select_wo_cont_secure_access
    ui->scr_select_wo_cont_secure_access = lv_obj_create(ui->scr_select_wo);
    lv_obj_set_pos(ui->scr_select_wo_cont_secure_access, 24, 0);
    lv_obj_set_size(ui->scr_select_wo_cont_secure_access, 1232, 700);
    lv_obj_set_scrollbar_mode(ui->scr_select_wo_cont_secure_access, LV_SCROLLBAR_MODE_OFF);

    //Write style for scr_select_wo_cont_secure_access, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scr_select_wo_cont_secure_access, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_select_wo_cont_secure_access, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scr_select_wo_cont_secure_access, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scr_select_wo_cont_secure_access, lv_color_hex(0x2b2f3a), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scr_select_wo_cont_secure_access, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scr_select_wo_cont_secure_access, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scr_select_wo_cont_secure_access, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scr_select_wo_cont_secure_access, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scr_select_wo_cont_secure_access, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_select_wo_cont_secure_access, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_color(ui->scr_select_wo_cont_secure_access, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_opa(ui->scr_select_wo_cont_secure_access, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_spread(ui->scr_select_wo_cont_secure_access, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_offset_x(ui->scr_select_wo_cont_secure_access, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_offset_y(ui->scr_select_wo_cont_secure_access, 2, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scr_select_wo_cont_tiltle_row
    ui->scr_select_wo_cont_tiltle_row = lv_obj_create(ui->scr_select_wo_cont_secure_access);
    lv_obj_set_pos(ui->scr_select_wo_cont_tiltle_row, 89, 99);
    lv_obj_set_size(ui->scr_select_wo_cont_tiltle_row, 1100, 80);
    lv_obj_set_scrollbar_mode(ui->scr_select_wo_cont_tiltle_row, LV_SCROLLBAR_MODE_OFF);

    //Write style for scr_select_wo_cont_tiltle_row, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scr_select_wo_cont_tiltle_row, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_select_wo_cont_tiltle_row, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scr_select_wo_cont_tiltle_row, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scr_select_wo_cont_tiltle_row, lv_color_hex(0x4678c4), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scr_select_wo_cont_tiltle_row, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scr_select_wo_cont_tiltle_row, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scr_select_wo_cont_tiltle_row, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scr_select_wo_cont_tiltle_row, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scr_select_wo_cont_tiltle_row, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_select_wo_cont_tiltle_row, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scr_select_wo_lbl_wo_id
    ui->scr_select_wo_lbl_wo_id = lv_label_create(ui->scr_select_wo_cont_tiltle_row);
    lv_obj_set_pos(ui->scr_select_wo_lbl_wo_id, 0, 0);
    lv_obj_set_size(ui->scr_select_wo_lbl_wo_id, 87, 80);
    lv_label_set_text(ui->scr_select_wo_lbl_wo_id, "ID");
    lv_label_set_long_mode(ui->scr_select_wo_lbl_wo_id, LV_LABEL_LONG_WRAP);

    //Write style for scr_select_wo_lbl_wo_id, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scr_select_wo_lbl_wo_id, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_select_wo_lbl_wo_id, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scr_select_wo_lbl_wo_id, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scr_select_wo_lbl_wo_id, &lv_font_Acme_Regular_30, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scr_select_wo_lbl_wo_id, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->scr_select_wo_lbl_wo_id, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->scr_select_wo_lbl_wo_id, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scr_select_wo_lbl_wo_id, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scr_select_wo_lbl_wo_id, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scr_select_wo_lbl_wo_id, 20, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scr_select_wo_lbl_wo_id, 20, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scr_select_wo_lbl_wo_id, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scr_select_wo_lbl_wo_id, 20, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_select_wo_lbl_wo_id, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scr_select_wo_lbl_product_name
    ui->scr_select_wo_lbl_product_name = lv_label_create(ui->scr_select_wo_cont_tiltle_row);
    lv_obj_set_pos(ui->scr_select_wo_lbl_product_name, 150, 0);
    lv_obj_set_size(ui->scr_select_wo_lbl_product_name, 251, 80);
    lv_label_set_text(ui->scr_select_wo_lbl_product_name, "Product Name");
    lv_label_set_long_mode(ui->scr_select_wo_lbl_product_name, LV_LABEL_LONG_WRAP);

    //Write style for scr_select_wo_lbl_product_name, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scr_select_wo_lbl_product_name, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_select_wo_lbl_product_name, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scr_select_wo_lbl_product_name, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scr_select_wo_lbl_product_name, &lv_font_Acme_Regular_30, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scr_select_wo_lbl_product_name, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->scr_select_wo_lbl_product_name, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->scr_select_wo_lbl_product_name, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scr_select_wo_lbl_product_name, LV_TEXT_ALIGN_RIGHT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scr_select_wo_lbl_product_name, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scr_select_wo_lbl_product_name, 20, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scr_select_wo_lbl_product_name, 20, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scr_select_wo_lbl_product_name, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scr_select_wo_lbl_product_name, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_select_wo_lbl_product_name, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scr_select_wo_lbl_plan_quantity
    ui->scr_select_wo_lbl_plan_quantity = lv_label_create(ui->scr_select_wo_cont_tiltle_row);
    lv_obj_set_pos(ui->scr_select_wo_lbl_plan_quantity, 591, 0);
    lv_obj_set_size(ui->scr_select_wo_lbl_plan_quantity, 204, 80);
    lv_label_set_text(ui->scr_select_wo_lbl_plan_quantity, "Plan Quantity");
    lv_label_set_long_mode(ui->scr_select_wo_lbl_plan_quantity, LV_LABEL_LONG_WRAP);

    //Write style for scr_select_wo_lbl_plan_quantity, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scr_select_wo_lbl_plan_quantity, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_select_wo_lbl_plan_quantity, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scr_select_wo_lbl_plan_quantity, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scr_select_wo_lbl_plan_quantity, &lv_font_Acme_Regular_30, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scr_select_wo_lbl_plan_quantity, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->scr_select_wo_lbl_plan_quantity, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->scr_select_wo_lbl_plan_quantity, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scr_select_wo_lbl_plan_quantity, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scr_select_wo_lbl_plan_quantity, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scr_select_wo_lbl_plan_quantity, 20, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scr_select_wo_lbl_plan_quantity, 20, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scr_select_wo_lbl_plan_quantity, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scr_select_wo_lbl_plan_quantity, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_select_wo_lbl_plan_quantity, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scr_select_wo_lbl_status
    ui->scr_select_wo_lbl_status = lv_label_create(ui->scr_select_wo_cont_tiltle_row);
    lv_obj_set_pos(ui->scr_select_wo_lbl_status, 868, 0);
    lv_obj_set_size(ui->scr_select_wo_lbl_status, 122, 80);
    lv_label_set_text(ui->scr_select_wo_lbl_status, "Status");
    lv_label_set_long_mode(ui->scr_select_wo_lbl_status, LV_LABEL_LONG_WRAP);

    //Write style for scr_select_wo_lbl_status, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scr_select_wo_lbl_status, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_select_wo_lbl_status, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scr_select_wo_lbl_status, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scr_select_wo_lbl_status, &lv_font_Acme_Regular_30, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scr_select_wo_lbl_status, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->scr_select_wo_lbl_status, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->scr_select_wo_lbl_status, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scr_select_wo_lbl_status, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scr_select_wo_lbl_status, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scr_select_wo_lbl_status, 20, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scr_select_wo_lbl_status, 20, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scr_select_wo_lbl_status, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scr_select_wo_lbl_status, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_select_wo_lbl_status, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scr_select_wo_cont_list_wo
    ui->scr_select_wo_cont_list_wo = lv_obj_create(ui->scr_select_wo_cont_secure_access);
    lv_obj_set_pos(ui->scr_select_wo_cont_list_wo, 88, 189);
    lv_obj_set_size(ui->scr_select_wo_cont_list_wo, 1100, 473);
    lv_obj_set_scrollbar_mode(ui->scr_select_wo_cont_list_wo, LV_SCROLLBAR_MODE_AUTO);

    //Write style for scr_select_wo_cont_list_wo, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scr_select_wo_cont_list_wo, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_select_wo_cont_list_wo, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scr_select_wo_cont_list_wo, 47, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scr_select_wo_cont_list_wo, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scr_select_wo_cont_list_wo, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scr_select_wo_cont_list_wo, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scr_select_wo_cont_list_wo, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scr_select_wo_cont_list_wo, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scr_select_wo_cont_list_wo, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_select_wo_cont_list_wo, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scr_select_wo_cont_wo_deatail_1
    ui->scr_select_wo_cont_wo_deatail_1 = lv_obj_create(ui->scr_select_wo_cont_list_wo);
    lv_obj_set_pos(ui->scr_select_wo_cont_wo_deatail_1, 0, 0);
    lv_obj_set_size(ui->scr_select_wo_cont_wo_deatail_1, 1100, 70);
    lv_obj_set_scrollbar_mode(ui->scr_select_wo_cont_wo_deatail_1, LV_SCROLLBAR_MODE_OFF);

    //Write style for scr_select_wo_cont_wo_deatail_1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scr_select_wo_cont_wo_deatail_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_select_wo_cont_wo_deatail_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scr_select_wo_cont_wo_deatail_1, 101, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scr_select_wo_cont_wo_deatail_1, lv_color_hex(0xababab), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scr_select_wo_cont_wo_deatail_1, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scr_select_wo_cont_wo_deatail_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scr_select_wo_cont_wo_deatail_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scr_select_wo_cont_wo_deatail_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scr_select_wo_cont_wo_deatail_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_select_wo_cont_wo_deatail_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scr_select_wo_lbl_wo_id_value
    ui->scr_select_wo_lbl_wo_id_value = lv_label_create(ui->scr_select_wo_cont_wo_deatail_1);
    lv_obj_set_pos(ui->scr_select_wo_lbl_wo_id_value, 0, 0);
    lv_obj_set_size(ui->scr_select_wo_lbl_wo_id_value, 144, 70);
    lv_label_set_text(ui->scr_select_wo_lbl_wo_id_value, "WO_001");
    lv_label_set_long_mode(ui->scr_select_wo_lbl_wo_id_value, LV_LABEL_LONG_WRAP);

    //Write style for scr_select_wo_lbl_wo_id_value, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scr_select_wo_lbl_wo_id_value, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_select_wo_lbl_wo_id_value, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scr_select_wo_lbl_wo_id_value, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scr_select_wo_lbl_wo_id_value, &lv_font_Acme_Regular_25, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scr_select_wo_lbl_wo_id_value, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->scr_select_wo_lbl_wo_id_value, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->scr_select_wo_lbl_wo_id_value, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scr_select_wo_lbl_wo_id_value, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scr_select_wo_lbl_wo_id_value, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scr_select_wo_lbl_wo_id_value, 20, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scr_select_wo_lbl_wo_id_value, 20, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scr_select_wo_lbl_wo_id_value, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scr_select_wo_lbl_wo_id_value, 20, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_select_wo_lbl_wo_id_value, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scr_select_wo_lbl_product_name_value
    ui->scr_select_wo_lbl_product_name_value = lv_label_create(ui->scr_select_wo_cont_wo_deatail_1);
    lv_obj_set_pos(ui->scr_select_wo_lbl_product_name_value, 212, 0);
    lv_obj_set_size(ui->scr_select_wo_lbl_product_name_value, 251, 70);
    lv_label_set_text(ui->scr_select_wo_lbl_product_name_value, "Product A");
    lv_label_set_long_mode(ui->scr_select_wo_lbl_product_name_value, LV_LABEL_LONG_WRAP);

    //Write style for scr_select_wo_lbl_product_name_value, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scr_select_wo_lbl_product_name_value, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_select_wo_lbl_product_name_value, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scr_select_wo_lbl_product_name_value, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scr_select_wo_lbl_product_name_value, &lv_font_Acme_Regular_25, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scr_select_wo_lbl_product_name_value, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->scr_select_wo_lbl_product_name_value, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->scr_select_wo_lbl_product_name_value, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scr_select_wo_lbl_product_name_value, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scr_select_wo_lbl_product_name_value, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scr_select_wo_lbl_product_name_value, 20, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scr_select_wo_lbl_product_name_value, 20, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scr_select_wo_lbl_product_name_value, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scr_select_wo_lbl_product_name_value, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_select_wo_lbl_product_name_value, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scr_select_wo_lbl_plan_quantity_value
    ui->scr_select_wo_lbl_plan_quantity_value = lv_label_create(ui->scr_select_wo_cont_wo_deatail_1);
    lv_obj_set_pos(ui->scr_select_wo_lbl_plan_quantity_value, 591, 0);
    lv_obj_set_size(ui->scr_select_wo_lbl_plan_quantity_value, 184, 70);
    lv_label_set_text(ui->scr_select_wo_lbl_plan_quantity_value, "1000");
    lv_label_set_long_mode(ui->scr_select_wo_lbl_plan_quantity_value, LV_LABEL_LONG_WRAP);

    //Write style for scr_select_wo_lbl_plan_quantity_value, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scr_select_wo_lbl_plan_quantity_value, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_select_wo_lbl_plan_quantity_value, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scr_select_wo_lbl_plan_quantity_value, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scr_select_wo_lbl_plan_quantity_value, &lv_font_Acme_Regular_25, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scr_select_wo_lbl_plan_quantity_value, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->scr_select_wo_lbl_plan_quantity_value, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->scr_select_wo_lbl_plan_quantity_value, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scr_select_wo_lbl_plan_quantity_value, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scr_select_wo_lbl_plan_quantity_value, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scr_select_wo_lbl_plan_quantity_value, 20, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scr_select_wo_lbl_plan_quantity_value, 20, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scr_select_wo_lbl_plan_quantity_value, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scr_select_wo_lbl_plan_quantity_value, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_select_wo_lbl_plan_quantity_value, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scr_select_wo_lbl_status_value
    ui->scr_select_wo_lbl_status_value = lv_label_create(ui->scr_select_wo_cont_wo_deatail_1);
    lv_obj_set_pos(ui->scr_select_wo_lbl_status_value, 868, 0);
    lv_obj_set_size(ui->scr_select_wo_lbl_status_value, 209, 70);
    lv_label_set_text(ui->scr_select_wo_lbl_status_value, "Running");
    lv_label_set_long_mode(ui->scr_select_wo_lbl_status_value, LV_LABEL_LONG_WRAP);

    //Write style for scr_select_wo_lbl_status_value, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scr_select_wo_lbl_status_value, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_select_wo_lbl_status_value, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scr_select_wo_lbl_status_value, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scr_select_wo_lbl_status_value, &lv_font_Acme_Regular_25, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scr_select_wo_lbl_status_value, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->scr_select_wo_lbl_status_value, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->scr_select_wo_lbl_status_value, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scr_select_wo_lbl_status_value, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scr_select_wo_lbl_status_value, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scr_select_wo_lbl_status_value, 20, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scr_select_wo_lbl_status_value, 20, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scr_select_wo_lbl_status_value, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scr_select_wo_lbl_status_value, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_select_wo_lbl_status_value, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scr_select_wo_cont_topbar
    ui->scr_select_wo_cont_topbar = lv_obj_create(ui->scr_select_wo);
    lv_obj_set_pos(ui->scr_select_wo_cont_topbar, 24, 0);
    lv_obj_set_size(ui->scr_select_wo_cont_topbar, 1232, 90);
    lv_obj_set_scrollbar_mode(ui->scr_select_wo_cont_topbar, LV_SCROLLBAR_MODE_OFF);

    //Write style for scr_select_wo_cont_topbar, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scr_select_wo_cont_topbar, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_select_wo_cont_topbar, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scr_select_wo_cont_topbar, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scr_select_wo_cont_topbar, lv_color_hex(0x2b2b2b), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scr_select_wo_cont_topbar, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scr_select_wo_cont_topbar, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scr_select_wo_cont_topbar, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scr_select_wo_cont_topbar, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scr_select_wo_cont_topbar, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_select_wo_cont_topbar, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scr_select_wo_lbl_name_device
    ui->scr_select_wo_lbl_name_device = lv_label_create(ui->scr_select_wo_cont_topbar);
    lv_obj_set_pos(ui->scr_select_wo_lbl_name_device, 6, 0);
    lv_obj_set_size(ui->scr_select_wo_lbl_name_device, 184, 90);
    lv_label_set_text(ui->scr_select_wo_lbl_name_device, "CNC-001");
    lv_label_set_long_mode(ui->scr_select_wo_lbl_name_device, LV_LABEL_LONG_WRAP);

    //Write style for scr_select_wo_lbl_name_device, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scr_select_wo_lbl_name_device, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_select_wo_lbl_name_device, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scr_select_wo_lbl_name_device, lv_color_hex(0xababab), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scr_select_wo_lbl_name_device, &lv_font_Acme_Regular_25, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scr_select_wo_lbl_name_device, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->scr_select_wo_lbl_name_device, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->scr_select_wo_lbl_name_device, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scr_select_wo_lbl_name_device, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scr_select_wo_lbl_name_device, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scr_select_wo_lbl_name_device, 50, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scr_select_wo_lbl_name_device, 20, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scr_select_wo_lbl_name_device, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scr_select_wo_lbl_name_device, 20, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_select_wo_lbl_name_device, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scr_select_wo_lbl_op
    ui->scr_select_wo_lbl_op = lv_label_create(ui->scr_select_wo_cont_topbar);
    lv_obj_set_pos(ui->scr_select_wo_lbl_op, 1002, 0);
    lv_obj_set_size(ui->scr_select_wo_lbl_op, 222, 90);
    lv_label_set_text(ui->scr_select_wo_lbl_op, "NGUYEN VAN A");
    lv_label_set_long_mode(ui->scr_select_wo_lbl_op, LV_LABEL_LONG_WRAP);

    //Write style for scr_select_wo_lbl_op, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scr_select_wo_lbl_op, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_select_wo_lbl_op, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scr_select_wo_lbl_op, lv_color_hex(0xababab), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scr_select_wo_lbl_op, &lv_font_Acme_Regular_25, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scr_select_wo_lbl_op, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->scr_select_wo_lbl_op, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->scr_select_wo_lbl_op, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scr_select_wo_lbl_op, LV_TEXT_ALIGN_RIGHT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scr_select_wo_lbl_op, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scr_select_wo_lbl_op, 50, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scr_select_wo_lbl_op, 20, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scr_select_wo_lbl_op, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scr_select_wo_lbl_op, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_select_wo_lbl_op, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scr_select_wo_lbl_select_wo
    ui->scr_select_wo_lbl_select_wo = lv_label_create(ui->scr_select_wo_cont_topbar);
    lv_obj_set_pos(ui->scr_select_wo_lbl_select_wo, 333, 0);
    lv_obj_set_size(ui->scr_select_wo_lbl_select_wo, 613, 90);
    lv_label_set_text(ui->scr_select_wo_lbl_select_wo, "SELECT WORK ORDER");
    lv_label_set_long_mode(ui->scr_select_wo_lbl_select_wo, LV_LABEL_LONG_WRAP);

    //Write style for scr_select_wo_lbl_select_wo, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scr_select_wo_lbl_select_wo, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_select_wo_lbl_select_wo, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scr_select_wo_lbl_select_wo, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scr_select_wo_lbl_select_wo, &lv_font_Acme_Regular_50, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scr_select_wo_lbl_select_wo, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->scr_select_wo_lbl_select_wo, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->scr_select_wo_lbl_select_wo, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scr_select_wo_lbl_select_wo, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scr_select_wo_lbl_select_wo, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scr_select_wo_lbl_select_wo, 25, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scr_select_wo_lbl_select_wo, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scr_select_wo_lbl_select_wo, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scr_select_wo_lbl_select_wo, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_select_wo_lbl_select_wo, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //The custom code of scr_select_wo.


    //Update current screen layout.
    lv_obj_update_layout(ui->scr_select_wo);

    //Init events for screen.
    events_init_scr_select_wo(ui);
}
