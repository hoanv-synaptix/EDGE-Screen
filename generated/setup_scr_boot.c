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



void setup_scr_boot(lv_ui *ui)
{
    //Write codes boot
    ui->boot = lv_obj_create(NULL);
    lv_obj_set_size(ui->boot, 1280, 720);
    lv_obj_set_scrollbar_mode(ui->boot, LV_SCROLLBAR_MODE_OFF);

    //Write style for boot, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->boot, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->boot, lv_color_hex(0x030303), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->boot, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes boot_cont_center
    ui->boot_cont_center = lv_obj_create(ui->boot);
    lv_obj_set_pos(ui->boot_cont_center, 190, 80);
    lv_obj_set_size(ui->boot_cont_center, 900, 420);
    lv_obj_set_scrollbar_mode(ui->boot_cont_center, LV_SCROLLBAR_MODE_OFF);

    //Write style for boot_cont_center, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->boot_cont_center, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->boot_cont_center, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->boot_cont_center, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->boot_cont_center, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->boot_cont_center, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->boot_cont_center, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->boot_cont_center, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->boot_cont_center, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->boot_cont_center, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->boot_cont_center, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->boot_cont_center, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->boot_cont_center, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->boot_cont_center, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes boot_img_logo
    ui->boot_img_logo = lv_image_create(ui->boot_cont_center);
    lv_obj_set_pos(ui->boot_img_logo, 338, 50);
    lv_obj_set_size(ui->boot_img_logo, 220, 220);
    lv_obj_add_flag(ui->boot_img_logo, LV_OBJ_FLAG_CLICKABLE);
    lv_image_set_src(ui->boot_img_logo, &_logo1_I1_220x220);
    lv_image_set_pivot(ui->boot_img_logo, 0,0);
    lv_image_set_rotation(ui->boot_img_logo, 0);

    //Write style for boot_img_logo, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_image_recolor_opa(ui->boot_img_logo, 229, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_image_recolor(ui->boot_img_logo, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_image_opa(ui->boot_img_logo, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes boot_lbl_title
    ui->boot_lbl_title = lv_label_create(ui->boot_cont_center);
    lv_obj_set_pos(ui->boot_lbl_title, 280, 300);
    lv_obj_set_size(ui->boot_lbl_title, 336, 42);
    lv_label_set_text(ui->boot_lbl_title, "EDGE Device");
    lv_label_set_long_mode(ui->boot_lbl_title, LV_LABEL_LONG_WRAP);

    //Write style for boot_lbl_title, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->boot_lbl_title, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->boot_lbl_title, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->boot_lbl_title, lv_color_hex(0xd8d8d8), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->boot_lbl_title, &lv_font_montserratMedium_40, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->boot_lbl_title, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->boot_lbl_title, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->boot_lbl_title, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->boot_lbl_title, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->boot_lbl_title, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->boot_lbl_title, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->boot_lbl_title, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->boot_lbl_title, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->boot_lbl_title, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->boot_lbl_title, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes boot_lbl_status
    ui->boot_lbl_status = lv_label_create(ui->boot_cont_center);
    lv_obj_set_pos(ui->boot_lbl_status, 293, 382);
    lv_obj_set_size(ui->boot_lbl_status, 309, 40);
    lv_label_set_text(ui->boot_lbl_status, "Starting system...");
    lv_label_set_long_mode(ui->boot_lbl_status, LV_LABEL_LONG_WRAP);

    //Write style for boot_lbl_status, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->boot_lbl_status, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->boot_lbl_status, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->boot_lbl_status, lv_color_hex(0xcccccc), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->boot_lbl_status, &lv_font_montserratMedium_26, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->boot_lbl_status, 201, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->boot_lbl_status, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->boot_lbl_status, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->boot_lbl_status, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->boot_lbl_status, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->boot_lbl_status, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->boot_lbl_status, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->boot_lbl_status, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->boot_lbl_status, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->boot_lbl_status, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes boot_bar_progress
    ui->boot_bar_progress = lv_bar_create(ui->boot_cont_center);
    lv_obj_set_pos(ui->boot_bar_progress, 37, 440);
    lv_obj_set_size(ui->boot_bar_progress, 820, 28);
    lv_obj_set_style_anim_duration(ui->boot_bar_progress, 1000, 0);
    lv_bar_set_mode(ui->boot_bar_progress, LV_BAR_MODE_NORMAL);
    lv_bar_set_range(ui->boot_bar_progress, 0, 100);
    lv_bar_set_value(ui->boot_bar_progress, 0, LV_ANIM_ON);

    //Write style for boot_bar_progress, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->boot_bar_progress, 192, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->boot_bar_progress, lv_color_hex(0x7d7878), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->boot_bar_progress, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->boot_bar_progress, 10, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->boot_bar_progress, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style for boot_bar_progress, Part: LV_PART_INDICATOR, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->boot_bar_progress, 255, LV_PART_INDICATOR|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->boot_bar_progress, lv_color_hex(0x292929), LV_PART_INDICATOR|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->boot_bar_progress, LV_GRAD_DIR_NONE, LV_PART_INDICATOR|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->boot_bar_progress, 10, LV_PART_INDICATOR|LV_STATE_DEFAULT);

    //Write codes boot_lbl_loanding_detail
    ui->boot_lbl_loanding_detail = lv_label_create(ui->boot_cont_center);
    lv_obj_set_pos(ui->boot_lbl_loanding_detail, 214, 480);
    lv_obj_set_size(ui->boot_lbl_loanding_detail, 466, 29);
    lv_label_set_text(ui->boot_lbl_loanding_detail, "Loading: UI / IO / Network / MQTT");
    lv_label_set_long_mode(ui->boot_lbl_loanding_detail, LV_LABEL_LONG_WRAP);

    //Write style for boot_lbl_loanding_detail, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->boot_lbl_loanding_detail, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->boot_lbl_loanding_detail, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->boot_lbl_loanding_detail, lv_color_hex(0xb3b3b3), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->boot_lbl_loanding_detail, &lv_font_montserratMedium_26, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->boot_lbl_loanding_detail, 145, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->boot_lbl_loanding_detail, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->boot_lbl_loanding_detail, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->boot_lbl_loanding_detail, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->boot_lbl_loanding_detail, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->boot_lbl_loanding_detail, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->boot_lbl_loanding_detail, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->boot_lbl_loanding_detail, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->boot_lbl_loanding_detail, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->boot_lbl_loanding_detail, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes boot_cont_footer
    ui->boot_cont_footer = lv_obj_create(ui->boot);
    lv_obj_set_pos(ui->boot_cont_footer, 0, 660);
    lv_obj_set_size(ui->boot_cont_footer, 1280, 60);
    lv_obj_set_scrollbar_mode(ui->boot_cont_footer, LV_SCROLLBAR_MODE_OFF);

    //Write style for boot_cont_footer, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->boot_cont_footer, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->boot_cont_footer, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->boot_cont_footer, lv_color_hex(0x2195f6), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->boot_cont_footer, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->boot_cont_footer, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->boot_cont_footer, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->boot_cont_footer, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->boot_cont_footer, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->boot_cont_footer, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->boot_cont_footer, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->boot_cont_footer, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes boot_lbl_version
    ui->boot_lbl_version = lv_label_create(ui->boot_cont_footer);
    lv_obj_set_pos(ui->boot_lbl_version, 0, 13);
    lv_obj_set_size(ui->boot_lbl_version, 200, 30);
    lv_label_set_text(ui->boot_lbl_version, "v1.0.0");
    lv_label_set_long_mode(ui->boot_lbl_version, LV_LABEL_LONG_WRAP);

    //Write style for boot_lbl_version, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->boot_lbl_version, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->boot_lbl_version, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->boot_lbl_version, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->boot_lbl_version, &lv_font_montserratMedium_22, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->boot_lbl_version, 153, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->boot_lbl_version, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->boot_lbl_version, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->boot_lbl_version, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->boot_lbl_version, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->boot_lbl_version, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->boot_lbl_version, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->boot_lbl_version, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->boot_lbl_version, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->boot_lbl_version, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes boot_lbl_edgeid
    ui->boot_lbl_edgeid = lv_label_create(ui->boot_cont_footer);
    lv_obj_set_pos(ui->boot_lbl_edgeid, 535, 13);
    lv_obj_set_size(ui->boot_lbl_edgeid, 200, 30);
    lv_label_set_text(ui->boot_lbl_edgeid, "EdgeID: E-0001");
    lv_label_set_long_mode(ui->boot_lbl_edgeid, LV_LABEL_LONG_WRAP);

    //Write style for boot_lbl_edgeid, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->boot_lbl_edgeid, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->boot_lbl_edgeid, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->boot_lbl_edgeid, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->boot_lbl_edgeid, &lv_font_montserratMedium_22, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->boot_lbl_edgeid, 149, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->boot_lbl_edgeid, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->boot_lbl_edgeid, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->boot_lbl_edgeid, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->boot_lbl_edgeid, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->boot_lbl_edgeid, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->boot_lbl_edgeid, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->boot_lbl_edgeid, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->boot_lbl_edgeid, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->boot_lbl_edgeid, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes boot_lbl_date
    ui->boot_lbl_date = lv_label_create(ui->boot_cont_footer);
    lv_obj_set_pos(ui->boot_lbl_date, 1070, 13);
    lv_obj_set_size(ui->boot_lbl_date, 200, 30);
    lv_label_set_text(ui->boot_lbl_date, "28-02-2026");
    lv_label_set_long_mode(ui->boot_lbl_date, LV_LABEL_LONG_WRAP);

    //Write style for boot_lbl_date, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->boot_lbl_date, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->boot_lbl_date, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->boot_lbl_date, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->boot_lbl_date, &lv_font_montserratMedium_22, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->boot_lbl_date, 142, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->boot_lbl_date, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->boot_lbl_date, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->boot_lbl_date, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->boot_lbl_date, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->boot_lbl_date, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->boot_lbl_date, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->boot_lbl_date, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->boot_lbl_date, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->boot_lbl_date, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //The custom code of boot.


    //Update current screen layout.
    lv_obj_update_layout(ui->boot);

}
