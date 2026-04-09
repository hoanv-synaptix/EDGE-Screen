/*
* Copyright 2026 NXP
* NXP Proprietary. This software is owned or controlled by NXP and may only be used strictly in
* accordance with the applicable license terms. By expressly accepting such terms or by downloading, installing,
* activating and/or otherwise using the software, you are agreeing that you have read, and that you agree to
* comply with and are bound by, such license terms.  If you do not agree to be bound by the applicable license
* terms, then you may not retain, install, activate or otherwise use the software.
*/


#ifndef EVENTS_INIT_H_
#define EVENTS_INIT_H_
#ifdef __cplusplus
extern "C" {
#endif

#include "gui_guider.h"

void events_init(lv_ui *ui);

void events_init_boot(lv_ui *ui);
void events_init_scr_login(lv_ui *ui);
void events_init_scr_operator_authentication(lv_ui *ui);
void events_init_scr_dashboard(lv_ui *ui);
void events_init_scr_downtime(lv_ui *ui);
void events_init_scr_prod_entry(lv_ui *ui);
void events_init_scr_SetupHome(lv_ui *ui);
void events_init_scr_setup_network(lv_ui *ui);
void events_init_scr_SetupMQTT(lv_ui *ui);
void events_init_scr_SetupDataSync(lv_ui *ui);
void events_init_scr_SystemSetting(lv_ui *ui);
void events_init_scr_input_config(lv_ui *ui);
void events_init_scr_config_modbus(lv_ui *ui);
void events_init_scr_secure_setup_access(lv_ui *ui);

#ifdef __cplusplus
}
#endif
#endif /* EVENT_CB_H_ */
