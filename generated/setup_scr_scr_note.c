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



void setup_scr_scr_note(lv_ui *ui)
{
    //Write codes scr_note
    ui->scr_note = lv_obj_create(NULL);
    lv_obj_set_size(ui->scr_note, 1280, 720);
    lv_obj_set_scrollbar_mode(ui->scr_note, LV_SCROLLBAR_MODE_OFF);

    //Write style for scr_note, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->scr_note, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scr_note, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scr_note, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scr_note_cont_wo
    ui->scr_note_cont_wo = lv_obj_create(ui->scr_note);
    lv_obj_set_pos(ui->scr_note_cont_wo, 240, 160);
    lv_obj_set_size(ui->scr_note_cont_wo, 800, 400);
    lv_obj_set_scrollbar_mode(ui->scr_note_cont_wo, LV_SCROLLBAR_MODE_OFF);

    //Write style for scr_note_cont_wo, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scr_note_cont_wo, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_note_cont_wo, 20, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scr_note_cont_wo, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scr_note_cont_wo, lv_color_hex(0x2b2f3a), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scr_note_cont_wo, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scr_note_cont_wo, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scr_note_cont_wo, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scr_note_cont_wo, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scr_note_cont_wo, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_note_cont_wo, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_color(ui->scr_note_cont_wo, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_opa(ui->scr_note_cont_wo, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_spread(ui->scr_note_cont_wo, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_offset_x(ui->scr_note_cont_wo, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_offset_y(ui->scr_note_cont_wo, 2, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scr_note_lbl_wo
    ui->scr_note_lbl_wo = lv_label_create(ui->scr_note_cont_wo);
    lv_obj_set_pos(ui->scr_note_lbl_wo, 0, 10);
    lv_obj_set_size(ui->scr_note_lbl_wo, 800, 60);
    lv_label_set_text(ui->scr_note_lbl_wo, "WO-001");
    lv_label_set_long_mode(ui->scr_note_lbl_wo, LV_LABEL_LONG_WRAP);

    //Write style for scr_note_lbl_wo, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scr_note_lbl_wo, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_note_lbl_wo, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scr_note_lbl_wo, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scr_note_lbl_wo, &lv_font_Acme_Regular_50, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scr_note_lbl_wo, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->scr_note_lbl_wo, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->scr_note_lbl_wo, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scr_note_lbl_wo, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scr_note_lbl_wo, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scr_note_lbl_wo, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scr_note_lbl_wo, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scr_note_lbl_wo, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scr_note_lbl_wo, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_note_lbl_wo, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scr_note_line_4
    ui->scr_note_line_4 = lv_line_create(ui->scr_note_cont_wo);
    lv_obj_set_pos(ui->scr_note_line_4, 50, 80);
    lv_obj_set_size(ui->scr_note_line_4, 700, 2);
    static lv_point_precise_t scr_note_line_4[] = {{0, 0},{700, 0}};
    lv_line_set_points(ui->scr_note_line_4, scr_note_line_4, 2);

    //Write style for scr_note_line_4, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_line_width(ui->scr_note_line_4, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_color(ui->scr_note_line_4, lv_color_hex(0x757575), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_opa(ui->scr_note_line_4, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_rounded(ui->scr_note_line_4, true, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scr_note_lbl_note
    ui->scr_note_lbl_note = lv_label_create(ui->scr_note_cont_wo);
    lv_obj_set_pos(ui->scr_note_lbl_note, 50, 126);
    lv_obj_set_size(ui->scr_note_lbl_note, 332, 32);
    lv_label_set_text(ui->scr_note_lbl_note, "Note");
    lv_label_set_long_mode(ui->scr_note_lbl_note, LV_LABEL_LONG_WRAP);

    //Write style for scr_note_lbl_note, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->scr_note_lbl_note, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_note_lbl_note, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scr_note_lbl_note, lv_color_hex(0xababab), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scr_note_lbl_note, &lv_font_Acme_Regular_35, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scr_note_lbl_note, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->scr_note_lbl_note, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->scr_note_lbl_note, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scr_note_lbl_note, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scr_note_lbl_note, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scr_note_lbl_note, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scr_note_lbl_note, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->scr_note_lbl_note, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scr_note_lbl_note, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_note_lbl_note, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scr_note_ta_note
    ui->scr_note_ta_note = lv_textarea_create(ui->scr_note_cont_wo);
    lv_obj_set_pos(ui->scr_note_ta_note, 50, 186);
    lv_obj_set_size(ui->scr_note_ta_note, 700, 73);
    lv_textarea_set_text(ui->scr_note_ta_note, "Add defect note here...");
    lv_textarea_set_placeholder_text(ui->scr_note_ta_note, "");
    lv_textarea_set_password_bullet(ui->scr_note_ta_note, "*");
    lv_textarea_set_password_mode(ui->scr_note_ta_note, false);
    lv_textarea_set_one_line(ui->scr_note_ta_note, true);
    lv_textarea_set_accepted_chars(ui->scr_note_ta_note, "");
    lv_textarea_set_max_length(ui->scr_note_ta_note, 32);
#if LV_USE_KEYBOARD
    lv_obj_add_event_cb(ui->scr_note_ta_note, ta_event_cb, LV_EVENT_ALL, ui->g_kb_top_layer);
#endif

    //Write style for scr_note_ta_note, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_text_color(ui->scr_note_ta_note, lv_color_hex(0xABABAB), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scr_note_ta_note, &lv_font_arial_30, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scr_note_ta_note, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->scr_note_ta_note, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scr_note_ta_note, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->scr_note_ta_note, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scr_note_ta_note, lv_color_hex(0x2b2f36), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scr_note_ta_note, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->scr_note_ta_note, 1, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->scr_note_ta_note, 201, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->scr_note_ta_note, lv_color_hex(0x575757), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->scr_note_ta_note, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_note_ta_note, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->scr_note_ta_note, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->scr_note_ta_note, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->scr_note_ta_note, 20, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_note_ta_note, 10, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style for scr_note_ta_note, Part: LV_PART_MAIN, State: LV_STATE_FOCUSED.
    lv_obj_set_style_text_color(ui->scr_note_ta_note, lv_color_hex(0xababab), LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_text_font(ui->scr_note_ta_note, &lv_font_arial_30, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_text_opa(ui->scr_note_ta_note, 255, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_bg_opa(ui->scr_note_ta_note, 255, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_bg_color(ui->scr_note_ta_note, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_bg_grad_dir(ui->scr_note_ta_note, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_border_width(ui->scr_note_ta_note, 2, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_border_opa(ui->scr_note_ta_note, 255, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_border_color(ui->scr_note_ta_note, lv_color_hex(0xe6e6e6), LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_border_side(ui->scr_note_ta_note, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_shadow_width(ui->scr_note_ta_note, 0, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_pad_top(ui->scr_note_ta_note, 4, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_pad_right(ui->scr_note_ta_note, 4, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_pad_left(ui->scr_note_ta_note, 4, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_radius(ui->scr_note_ta_note, 4, LV_PART_MAIN|LV_STATE_FOCUSED);

    //Write style for scr_note_ta_note, Part: LV_PART_SCROLLBAR, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->scr_note_ta_note, 255, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scr_note_ta_note, lv_color_hex(0x2195f6), LV_PART_SCROLLBAR|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scr_note_ta_note, LV_GRAD_DIR_NONE, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_note_ta_note, 0, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);

    //Write codes scr_note_line_3
    ui->scr_note_line_3 = lv_line_create(ui->scr_note_cont_wo);
    lv_obj_set_pos(ui->scr_note_line_3, 50, 299);
    lv_obj_set_size(ui->scr_note_line_3, 700, 1);
    static lv_point_precise_t scr_note_line_3[] = {{0, 0},{700, 0}};
    lv_line_set_points(ui->scr_note_line_3, scr_note_line_3, 2);

    //Write style for scr_note_line_3, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_line_width(ui->scr_note_line_3, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_color(ui->scr_note_line_3, lv_color_hex(0x757575), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_opa(ui->scr_note_line_3, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_rounded(ui->scr_note_line_3, true, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scr_note_btn_confirm
    ui->scr_note_btn_confirm = lv_button_create(ui->scr_note_cont_wo);
    lv_obj_set_pos(ui->scr_note_btn_confirm, 420, 321);
    lv_obj_set_size(ui->scr_note_btn_confirm, 300, 55);
    ui->scr_note_btn_confirm_label = lv_label_create(ui->scr_note_btn_confirm);
    lv_label_set_text(ui->scr_note_btn_confirm_label, "CONFIRM");
    lv_label_set_long_mode(ui->scr_note_btn_confirm_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->scr_note_btn_confirm_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->scr_note_btn_confirm, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->scr_note_btn_confirm_label, LV_PCT(100));

    //Write style for scr_note_btn_confirm, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->scr_note_btn_confirm, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scr_note_btn_confirm, lv_color_hex(0x1c4567), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scr_note_btn_confirm, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->scr_note_btn_confirm, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_note_btn_confirm, 10, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_note_btn_confirm, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scr_note_btn_confirm, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scr_note_btn_confirm, &lv_font_Acme_Regular_30, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scr_note_btn_confirm, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scr_note_btn_confirm, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes scr_note_btn_cancel
    ui->scr_note_btn_cancel = lv_button_create(ui->scr_note_cont_wo);
    lv_obj_set_pos(ui->scr_note_btn_cancel, 78, 322);
    lv_obj_set_size(ui->scr_note_btn_cancel, 300, 55);
    ui->scr_note_btn_cancel_label = lv_label_create(ui->scr_note_btn_cancel);
    lv_label_set_text(ui->scr_note_btn_cancel_label, "CANCEL");
    lv_label_set_long_mode(ui->scr_note_btn_cancel_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->scr_note_btn_cancel_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->scr_note_btn_cancel, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->scr_note_btn_cancel_label, LV_PCT(100));

    //Write style for scr_note_btn_cancel, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->scr_note_btn_cancel, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->scr_note_btn_cancel, lv_color_hex(0x717171), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->scr_note_btn_cancel, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->scr_note_btn_cancel, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->scr_note_btn_cancel, 10, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->scr_note_btn_cancel, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->scr_note_btn_cancel, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->scr_note_btn_cancel, &lv_font_Acme_Regular_30, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->scr_note_btn_cancel, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->scr_note_btn_cancel, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //The custom code of scr_note.


    //Update current screen layout.
    lv_obj_update_layout(ui->scr_note);

    //Init events for screen.
    events_init_scr_note(ui);
}
