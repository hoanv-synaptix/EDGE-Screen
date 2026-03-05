/*
* Copyright 2026 NXP
* NXP Proprietary. This software is owned or controlled by NXP and may only be used strictly in
* accordance with the applicable license terms. By expressly accepting such terms or by downloading, installing,
* activating and/or otherwise using the software, you are agreeing that you have read, and that you agree to
* comply with and are bound by, such license terms.  If you do not agree to be bound by the applicable license
* terms, then you may not retain, install, activate or otherwise use the software.
*/

#include "events_init.h"
#include <stdio.h>
#include "lvgl.h"

#if LV_USE_GUIDER_SIMULATOR && LV_USE_FREEMASTER
#include "freemaster_client.h"
#endif


static void boot_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
    case LV_EVENT_SCREEN_LOADED:
    {
        ui_load_scr_animation(&guider_ui, &guider_ui.scr_dashboard, guider_ui.scr_dashboard_del, &guider_ui.boot_del, setup_scr_scr_dashboard, LV_SCR_LOAD_ANIM_NONE, 100, 2000, true, false);
        ui_animation(guider_ui.boot_bar_1, 100, 0, lv_bar_get_value(guider_ui.boot_bar_1), 100, &lv_anim_path_linear, 1, 0, 0, 0, (lv_anim_exec_xcb_t)lv_bar_set_value, NULL, NULL, NULL);
        break;
    }
    default:
        break;
    }
}

void events_init_boot (lv_ui *ui)
{
    lv_obj_add_event_cb(ui->boot, boot_event_handler, LV_EVENT_ALL, ui);
}

static void scr_dashboard_btn_stop_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
    case LV_EVENT_CLICKED:
    {
        ui_load_scr_animation(&guider_ui, &guider_ui.scr_downtime, guider_ui.scr_downtime_del, &guider_ui.scr_dashboard_del, setup_scr_scr_downtime, LV_SCR_LOAD_ANIM_NONE, 200, 200, false, true);
        break;
    }
    default:
        break;
    }
}

static void scr_dashboard_btn_error_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
    case LV_EVENT_CLICKED:
    {
        ui_load_scr_animation(&guider_ui, &guider_ui.scr_downtime, guider_ui.scr_downtime_del, &guider_ui.scr_dashboard_del, setup_scr_scr_downtime, LV_SCR_LOAD_ANIM_NONE, 200, 200, false, true);
        break;
    }
    default:
        break;
    }
}

static void scr_dashboard_btn_setup_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
    case LV_EVENT_CLICKED:
    {
        ui_load_scr_animation(&guider_ui, &guider_ui.scr_SetupHome, guider_ui.scr_SetupHome_del, &guider_ui.scr_dashboard_del, setup_scr_scr_SetupHome, LV_SCR_LOAD_ANIM_NONE, 200, 200, false, true);
        break;
    }
    default:
        break;
    }
}

static void scr_dashboard_btn_input_prod_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
    case LV_EVENT_CLICKED:
    {
        ui_load_scr_animation(&guider_ui, &guider_ui.scr_prod_entry, guider_ui.scr_prod_entry_del, &guider_ui.scr_dashboard_del, setup_scr_scr_prod_entry, LV_SCR_LOAD_ANIM_NONE, 200, 200, false, true);
        break;
    }
    default:
        break;
    }
}

void events_init_scr_dashboard (lv_ui *ui)
{
    lv_obj_add_event_cb(ui->scr_dashboard_btn_stop, scr_dashboard_btn_stop_event_handler, LV_EVENT_ALL, ui);
    lv_obj_add_event_cb(ui->scr_dashboard_btn_error, scr_dashboard_btn_error_event_handler, LV_EVENT_ALL, ui);
    lv_obj_add_event_cb(ui->scr_dashboard_btn_setup, scr_dashboard_btn_setup_event_handler, LV_EVENT_ALL, ui);
    lv_obj_add_event_cb(ui->scr_dashboard_btn_input_prod, scr_dashboard_btn_input_prod_event_handler, LV_EVENT_ALL, ui);
}

static void scr_downtime_imgbtn_back_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
    case LV_EVENT_CLICKED:
    {
        ui_load_scr_animation(&guider_ui, &guider_ui.scr_dashboard, guider_ui.scr_dashboard_del, &guider_ui.scr_downtime_del, setup_scr_scr_dashboard, LV_SCR_LOAD_ANIM_NONE, 200, 200, false, true);
        break;
    }
    default:
        break;
    }
}

static void scr_downtime_btn_g_machine_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
    case LV_EVENT_CLICKED:
    {
        break;
    }
    default:
        break;
    }
}

static void scr_downtime_btn_dt__event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
    case LV_EVENT_CLICKED:
    {
        ui_load_scr_animation(&guider_ui, &guider_ui.scr_dashboard, guider_ui.scr_dashboard_del, &guider_ui.scr_downtime_del, setup_scr_scr_dashboard, LV_SCR_LOAD_ANIM_NONE, 200, 200, false, true);
        break;
    }
    default:
        break;
    }
}

void events_init_scr_downtime (lv_ui *ui)
{
    lv_obj_add_event_cb(ui->scr_downtime_imgbtn_back, scr_downtime_imgbtn_back_event_handler, LV_EVENT_ALL, ui);
    lv_obj_add_event_cb(ui->scr_downtime_btn_g_machine, scr_downtime_btn_g_machine_event_handler, LV_EVENT_ALL, ui);
    lv_obj_add_event_cb(ui->scr_downtime_btn_dt_, scr_downtime_btn_dt__event_handler, LV_EVENT_ALL, ui);
}

static void scr_prod_entry_imgbtn_back_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
    case LV_EVENT_CLICKED:
    {
        ui_load_scr_animation(&guider_ui, &guider_ui.scr_dashboard, guider_ui.scr_dashboard_del, &guider_ui.scr_prod_entry_del, setup_scr_scr_dashboard, LV_SCR_LOAD_ANIM_NONE, 200, 200, false, true);
        break;
    }
    default:
        break;
    }
}

static void scr_prod_entry_btn_grp_material_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
    case LV_EVENT_CLICKED:
    {
        break;
    }
    default:
        break;
    }
}

static void scr_prod_entry_btn_pe_submit_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
    case LV_EVENT_CLICKED:
    {
        ui_load_scr_animation(&guider_ui, &guider_ui.scr_dashboard, guider_ui.scr_dashboard_del, &guider_ui.scr_prod_entry_del, setup_scr_scr_dashboard, LV_SCR_LOAD_ANIM_NONE, 200, 200, false, true);
        break;
    }
    default:
        break;
    }
}

void events_init_scr_prod_entry (lv_ui *ui)
{
    lv_obj_add_event_cb(ui->scr_prod_entry_imgbtn_back, scr_prod_entry_imgbtn_back_event_handler, LV_EVENT_ALL, ui);
    lv_obj_add_event_cb(ui->scr_prod_entry_btn_grp_material, scr_prod_entry_btn_grp_material_event_handler, LV_EVENT_ALL, ui);
    lv_obj_add_event_cb(ui->scr_prod_entry_btn_pe_submit, scr_prod_entry_btn_pe_submit_event_handler, LV_EVENT_ALL, ui);
}

static void scr_SetupHome_card_network_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
    case LV_EVENT_CLICKED:
    {
        ui_load_scr_animation(&guider_ui, &guider_ui.scr_setup_network, guider_ui.scr_setup_network_del, &guider_ui.scr_SetupHome_del, setup_scr_scr_setup_network, LV_SCR_LOAD_ANIM_NONE, 200, 200, false, true);
        break;
    }
    default:
        break;
    }
}

static void scr_SetupHome_btn_net_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
    case LV_EVENT_CLICKED:
    {
        ui_load_scr_animation(&guider_ui, &guider_ui.scr_setup_network, guider_ui.scr_setup_network_del, &guider_ui.scr_SetupHome_del, setup_scr_scr_setup_network, LV_SCR_LOAD_ANIM_NONE, 200, 200, false, true);
        break;
    }
    default:
        break;
    }
}

static void scr_SetupHome_card_server_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
    case LV_EVENT_CLICKED:
    {
        ui_load_scr_animation(&guider_ui, &guider_ui.scr_SetupMQTT, guider_ui.scr_SetupMQTT_del, &guider_ui.scr_SetupHome_del, setup_scr_scr_SetupMQTT, LV_SCR_LOAD_ANIM_NONE, 200, 200, false, true);
        break;
    }
    default:
        break;
    }
}

static void scr_SetupHome_btn_server_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
    case LV_EVENT_CLICKED:
    {
        ui_load_scr_animation(&guider_ui, &guider_ui.scr_SetupMQTT, guider_ui.scr_SetupMQTT_del, &guider_ui.scr_SetupHome_del, setup_scr_scr_SetupMQTT, LV_SCR_LOAD_ANIM_NONE, 200, 200, false, true);
        break;
    }
    default:
        break;
    }
}

static void scr_SetupHome_card_sync_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
    case LV_EVENT_CLICKED:
    {
        ui_load_scr_animation(&guider_ui, &guider_ui.scr_SetupDataSync, guider_ui.scr_SetupDataSync_del, &guider_ui.scr_SetupHome_del, setup_scr_scr_SetupDataSync, LV_SCR_LOAD_ANIM_NONE, 200, 200, false, true);
        break;
    }
    default:
        break;
    }
}

static void scr_SetupHome_btn_sync_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
    case LV_EVENT_CLICKED:
    {
        ui_load_scr_animation(&guider_ui, &guider_ui.scr_SetupDataSync, guider_ui.scr_SetupDataSync_del, &guider_ui.scr_SetupHome_del, setup_scr_scr_SetupDataSync, LV_SCR_LOAD_ANIM_NONE, 200, 200, false, true);
        break;
    }
    default:
        break;
    }
}

static void scr_SetupHome_imgbtn_back_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
    case LV_EVENT_CLICKED:
    {
        ui_load_scr_animation(&guider_ui, &guider_ui.scr_dashboard, guider_ui.scr_dashboard_del, &guider_ui.scr_SetupHome_del, setup_scr_scr_dashboard, LV_SCR_LOAD_ANIM_NONE, 200, 200, false, true);
        break;
    }
    default:
        break;
    }
}

void events_init_scr_SetupHome (lv_ui *ui)
{
    lv_obj_add_event_cb(ui->scr_SetupHome_card_network, scr_SetupHome_card_network_event_handler, LV_EVENT_ALL, ui);
    lv_obj_add_event_cb(ui->scr_SetupHome_btn_net, scr_SetupHome_btn_net_event_handler, LV_EVENT_ALL, ui);
    lv_obj_add_event_cb(ui->scr_SetupHome_card_server, scr_SetupHome_card_server_event_handler, LV_EVENT_ALL, ui);
    lv_obj_add_event_cb(ui->scr_SetupHome_btn_server, scr_SetupHome_btn_server_event_handler, LV_EVENT_ALL, ui);
    lv_obj_add_event_cb(ui->scr_SetupHome_card_sync, scr_SetupHome_card_sync_event_handler, LV_EVENT_ALL, ui);
    lv_obj_add_event_cb(ui->scr_SetupHome_btn_sync, scr_SetupHome_btn_sync_event_handler, LV_EVENT_ALL, ui);
    lv_obj_add_event_cb(ui->scr_SetupHome_imgbtn_back, scr_SetupHome_imgbtn_back_event_handler, LV_EVENT_ALL, ui);
}

static void scr_setup_network_btn_save_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
    case LV_EVENT_PRESSED:
    {
        ui_load_scr_animation(&guider_ui, &guider_ui.scr_SetupHome, guider_ui.scr_SetupHome_del, &guider_ui.scr_setup_network_del, setup_scr_scr_SetupHome, LV_SCR_LOAD_ANIM_NONE, 200, 200, false, true);
        break;
    }
    default:
        break;
    }
}

static void scr_setup_network_imgbtn_back_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
    case LV_EVENT_CLICKED:
    {
        ui_load_scr_animation(&guider_ui, &guider_ui.scr_SetupHome, guider_ui.scr_SetupHome_del, &guider_ui.scr_setup_network_del, setup_scr_scr_SetupHome, LV_SCR_LOAD_ANIM_NONE, 200, 200, false, true);
        break;
    }
    default:
        break;
    }
}

void events_init_scr_setup_network (lv_ui *ui)
{
    lv_obj_add_event_cb(ui->scr_setup_network_btn_save, scr_setup_network_btn_save_event_handler, LV_EVENT_ALL, ui);
    lv_obj_add_event_cb(ui->scr_setup_network_imgbtn_back, scr_setup_network_imgbtn_back_event_handler, LV_EVENT_ALL, ui);
}

static void scr_SetupMQTT_imgbtn_back_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
    case LV_EVENT_CLICKED:
    {
        ui_load_scr_animation(&guider_ui, &guider_ui.scr_SetupHome, guider_ui.scr_SetupHome_del, &guider_ui.scr_SetupMQTT_del, setup_scr_scr_SetupHome, LV_SCR_LOAD_ANIM_NONE, 200, 200, false, true);
        break;
    }
    default:
        break;
    }
}

static void scr_SetupMQTT_btn_save_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
    case LV_EVENT_CLICKED:
    {
        ui_load_scr_animation(&guider_ui, &guider_ui.scr_SetupHome, guider_ui.scr_SetupHome_del, &guider_ui.scr_SetupMQTT_del, setup_scr_scr_SetupHome, LV_SCR_LOAD_ANIM_NONE, 200, 200, false, true);
        break;
    }
    default:
        break;
    }
}

void events_init_scr_SetupMQTT (lv_ui *ui)
{
    lv_obj_add_event_cb(ui->scr_SetupMQTT_imgbtn_back, scr_SetupMQTT_imgbtn_back_event_handler, LV_EVENT_ALL, ui);
    lv_obj_add_event_cb(ui->scr_SetupMQTT_btn_save, scr_SetupMQTT_btn_save_event_handler, LV_EVENT_ALL, ui);
}

static void scr_SetupDataSync_btn_save_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
    case LV_EVENT_CLICKED:
    {
        ui_load_scr_animation(&guider_ui, &guider_ui.scr_SetupHome, guider_ui.scr_SetupHome_del, &guider_ui.scr_SetupDataSync_del, setup_scr_scr_SetupHome, LV_SCR_LOAD_ANIM_NONE, 200, 200, false, true);
        break;
    }
    default:
        break;
    }
}

static void scr_SetupDataSync_imgbtn_back_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
    case LV_EVENT_CLICKED:
    {
        ui_load_scr_animation(&guider_ui, &guider_ui.scr_SetupHome, guider_ui.scr_SetupHome_del, &guider_ui.scr_SetupDataSync_del, setup_scr_scr_SetupHome, LV_SCR_LOAD_ANIM_NONE, 200, 200, false, true);
        break;
    }
    default:
        break;
    }
}

void events_init_scr_SetupDataSync (lv_ui *ui)
{
    lv_obj_add_event_cb(ui->scr_SetupDataSync_btn_save, scr_SetupDataSync_btn_save_event_handler, LV_EVENT_ALL, ui);
    lv_obj_add_event_cb(ui->scr_SetupDataSync_imgbtn_back, scr_SetupDataSync_imgbtn_back_event_handler, LV_EVENT_ALL, ui);
}


void events_init(lv_ui *ui)
{

}
