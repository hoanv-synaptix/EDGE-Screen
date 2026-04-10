#include <stdio.h>
#include <string.h>
#include "lvgl.h"
#include "custom.h"
#include "gui_guider.h"

/**********************
 *  STATIC VARIABLES
 **********************/
static lv_obj_t *g_kb = NULL;
static lv_obj_t *g_active_ta = NULL;

/* Dữ liệu lưu khi bấm Save */
typedef struct {
    char wifi[64];
    char wifi_pass[64];

    char mqtt_broker[128];
    char mqtt_port[16];
    char mqtt_user[64];
    char mqtt_password[64];

    char downtime_note[128];
    char prod_note[128];
} app_saved_data_t;

static app_saved_data_t g_saved = {0};

/**********************
 *  KEYBOARD
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

static void bg_touch_cb(lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    lv_obj_t *target = lv_event_get_target(e);

    if (code != LV_EVENT_CLICKED) return;
    if (target == NULL) return;

    if (lv_obj_check_type(target, &lv_textarea_class)) return;
    if (target == g_kb) return;

    hide_keyboard();
}

static void add_kb_event_all_ta(lv_obj_t *parent)
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

static void add_hide_event_all_obj(lv_obj_t *parent)
{
    uint32_t i;
    uint32_t cnt = lv_obj_get_child_cnt(parent);

    for (i = 0; i < cnt; i++) {
        lv_obj_t *child = lv_obj_get_child(parent, i);

        if (!lv_obj_check_type(child, &lv_textarea_class)) {
            lv_obj_add_event_cb(child, bg_touch_cb, LV_EVENT_CLICKED, NULL);
        }

        add_hide_event_all_obj(child);
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
    } else {
        lv_obj_set_parent(g_kb, scr);
        lv_obj_align(g_kb, LV_ALIGN_BOTTOM_MID, 0, 0);
        lv_obj_add_flag(g_kb, LV_OBJ_FLAG_HIDDEN);
    }

    add_kb_event_all_ta(scr);
    lv_obj_add_event_cb(scr, bg_touch_cb, LV_EVENT_CLICKED, NULL);
    add_hide_event_all_obj(scr);
}

/**********************
 *  SAVE / RESTORE
 **********************/
static void save_text_from_ta(char *dst, uint32_t dst_size, lv_obj_t *ta)
{
    if (dst == NULL || dst_size == 0 || ta == NULL) return;

    const char *txt = lv_textarea_get_text(ta);
    if (txt == NULL) txt = "";

    strncpy(dst, txt, dst_size - 1);
    dst[dst_size - 1] = '\0';
}

static void restore_text_to_ta(lv_obj_t *ta, const char *src)
{
    if (ta == NULL || src == NULL) return;
    lv_textarea_set_text(ta, src);
}

static void save_network_cb(lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    lv_obj_t *btn = lv_event_get_target(e);
    lv_ui *ui = (lv_ui *)lv_event_get_user_data(e);

    if (code != LV_EVENT_CLICKED || btn == NULL || ui == NULL) return;

    save_text_from_ta(g_saved.wifi, sizeof(g_saved.wifi), ui->scr_setup_network_ta_wifi);
    save_text_from_ta(g_saved.wifi_pass, sizeof(g_saved.wifi_pass), ui->scr_setup_network_ta_pass);

    hide_keyboard();

    if (ui->scr_setup_network_lbl_status) {
        lv_label_set_text(ui->scr_setup_network_lbl_status, "Saved");
    }
}

static void save_mqtt_cb(lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    lv_obj_t *btn = lv_event_get_target(e);
    lv_ui *ui = (lv_ui *)lv_event_get_user_data(e);

    if (code != LV_EVENT_CLICKED || btn == NULL || ui == NULL) return;

    save_text_from_ta(g_saved.mqtt_broker, sizeof(g_saved.mqtt_broker), ui->scr_SetupMQTT_ta_broker);
    save_text_from_ta(g_saved.mqtt_port, sizeof(g_saved.mqtt_port), ui->scr_SetupMQTT_ta_port);
    save_text_from_ta(g_saved.mqtt_user, sizeof(g_saved.mqtt_user), ui->scr_SetupMQTT_ta_user);
    save_text_from_ta(g_saved.mqtt_password, sizeof(g_saved.mqtt_password), ui->scr_SetupMQTT_ta_password);

    hide_keyboard();

    if (ui->scr_SetupMQTT_lbl_status) {
        lv_label_set_text(ui->scr_SetupMQTT_lbl_status, "Saved");
    }
}

static void save_downtime_cb(lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    lv_ui *ui = (lv_ui *)lv_event_get_user_data(e);

    if (code != LV_EVENT_CLICKED || ui == NULL) return;

    save_text_from_ta(g_saved.downtime_note, sizeof(g_saved.downtime_note), ui->scr_downtime_ta_dt_note_reason_stop_0);
    hide_keyboard();
}

static void save_prod_entry_cb(lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    lv_ui *ui = (lv_ui *)lv_event_get_user_data(e);

    if (code != LV_EVENT_CLICKED || ui == NULL) return;

    save_text_from_ta(g_saved.prod_note, sizeof(g_saved.prod_note), ui->scr_prod_entry_ta_pe_note);
    hide_keyboard();
}

void restore_saved_form_data(lv_ui *ui)
{
    if (ui == NULL) return;

    /* Network */
    restore_text_to_ta(ui->scr_setup_network_ta_wifi, g_saved.wifi);
    restore_text_to_ta(ui->scr_setup_network_ta_pass, g_saved.wifi_pass);

    /* MQTT */
    restore_text_to_ta(ui->scr_SetupMQTT_ta_broker, g_saved.mqtt_broker);
    restore_text_to_ta(ui->scr_SetupMQTT_ta_port, g_saved.mqtt_port);
    restore_text_to_ta(ui->scr_SetupMQTT_ta_user, g_saved.mqtt_user);
    restore_text_to_ta(ui->scr_SetupMQTT_ta_password, g_saved.mqtt_password);

    /* Notes */
    restore_text_to_ta(ui->scr_downtime_ta_dt_note_reason_stop_0, g_saved.downtime_note);
    restore_text_to_ta(ui->scr_prod_entry_ta_pe_note, g_saved.prod_note);
}

static void bind_save_events(lv_ui *ui)
{
    if (ui == NULL) return;

    if (ui->scr_setup_network_btn_save) {
        lv_obj_add_event_cb(ui->scr_setup_network_btn_save, save_network_cb, LV_EVENT_CLICKED, ui);
    }

    if (ui->scr_SetupMQTT_btn_save) {
        lv_obj_add_event_cb(ui->scr_SetupMQTT_btn_save, save_mqtt_cb, LV_EVENT_CLICKED, ui);
    }

    if (ui->scr_downtime_cont_dt_center) {
        lv_obj_add_event_cb(ui->scr_downtime_btn_dt_submit_0, save_downtime_cb, LV_EVENT_CLICKED, ui);
    }

    if (ui->scr_prod_entry_btn_pe_submit) {
        lv_obj_add_event_cb(ui->scr_prod_entry_btn_pe_submit, save_prod_entry_cb, LV_EVENT_CLICKED, ui);
    }
}


void custom_init(lv_ui *ui)
{

    bind_save_events(ui);
    restore_saved_form_data(ui);
    keyboard_init_for_screen(ui);
}