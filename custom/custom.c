/*
* Copyright 2024 NXP
* NXP Proprietary. This software is owned or controlled by NXP and may only be used strictly in
* accordance with the applicable license terms. By expressly accepting such terms or by downloading, installing,
* activating and/or otherwise using the software, you are agreeing that you have read, and that you agree to
* comply with and are bound by, such license terms.  If you do not agree to be bound by the applicable license
* terms, then you may not retain, install, activate or otherwise use the software.
*/

/*********************
 *      INCLUDES
 *********************/
#include <stdio.h>
#include "lvgl.h"
#include "custom.h"
#include "gui_guider.h"

/**********************
 *  STATIC VARIABLES
 **********************/
static lv_obj_t *g_kb = NULL;
static lv_obj_t *g_active_ta = NULL;

/**********************
 *  STATIC FUNCTIONS
 **********************/
static void hide_keyboard(void)
{
    if (g_kb) {
        lv_obj_add_flag(g_kb, LV_OBJ_FLAG_HIDDEN);
        lv_keyboard_set_textarea(g_kb, NULL);
    }

    if (g_active_ta) {
        lv_obj_clear_state(g_active_ta, LV_STATE_FOCUSED);
        g_active_ta = NULL;
    }
}

static void ta_event_cb(lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    lv_obj_t *ta = lv_event_get_target(e);

    if (code == LV_EVENT_FOCUSED || code == LV_EVENT_CLICKED) {
        g_active_ta = ta;
        lv_keyboard_set_textarea(g_kb, ta);
        lv_obj_clear_flag(g_kb, LV_OBJ_FLAG_HIDDEN);
    }
}

static void kb_event_cb(lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);

    if (code == LV_EVENT_READY || code == LV_EVENT_CANCEL) {
        hide_keyboard();
    }
}

static void screen_touch_cb(lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    lv_obj_t *target = lv_event_get_target(e);

    if (code != LV_EVENT_CLICKED) return;

    if (lv_obj_check_type(target, &lv_textarea_class)) {
        return;
    }

    if (target == g_kb) {
        return;
    }

    hide_keyboard();
}

/**********************
 *  GLOBAL FUNCTIONS
 **********************/
void add_kb_event_all_ta(lv_obj_t *parent)
{
    uint32_t i;
    uint32_t cnt = lv_obj_get_child_cnt(parent);

    for (i = 0; i < cnt; i++) {
        lv_obj_t *child = lv_obj_get_child(parent, i);

        if (lv_obj_check_type(child, &lv_textarea_class)) {
            lv_obj_add_event_cb(child, ta_event_cb, LV_EVENT_ALL, NULL);
        }

        add_kb_event_all_ta(child);
    }
}

void keyboard_init_for_screen(lv_ui *ui)
{
    LV_UNUSED(ui);

    lv_obj_t *scr = lv_scr_act();

    if (g_kb == NULL) {
        g_kb = lv_keyboard_create(scr);
        lv_obj_set_size(g_kb, 800, 300);
        lv_obj_align(g_kb, LV_ALIGN_BOTTOM_MID, 0, 0);
        lv_obj_add_flag(g_kb, LV_OBJ_FLAG_HIDDEN);
        lv_obj_add_event_cb(g_kb, kb_event_cb, LV_EVENT_ALL, NULL);
    }

    add_kb_event_all_ta(scr);
    lv_obj_add_event_cb(scr, screen_touch_cb, LV_EVENT_CLICKED, NULL);
}

void custom_init(lv_ui *ui)
{
    keyboard_init_for_screen(ui);
}