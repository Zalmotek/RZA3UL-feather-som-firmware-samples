#ifndef _TIMER_
#define _TIMER_

#include "hal_data.h"
#include "SerialCompatibility.h"

bool started_timer = false;

volatile uint64_t tick = 0;

void start_timer();
uint64_t get_sys_tick();
uint64_t millis();
uint64_t micros();
void delayMicroseconds(uint32_t tx_delay);

void start_timer() {
    started_timer = true;
    fsp_err_t err = FSP_SUCCESS;
    /* Initializes the module. */
    err = R_GTM_Open(&g_timer0_ctrl, &g_timer0_cfg);
    if (err != FSP_SUCCESS) {
        Serial.print((uint8_t*)"** Error at initialising timer **\n");
    }
    /* Start the timer. */
    (void) R_GTM_Start(&g_timer0_ctrl);
}

void tick_callback (timer_callback_args_t * p_args) {
    if (TIMER_EVENT_CYCLE_END == p_args->event)
    {
        tick += 0xFFFFFFFF / 1000;
    }
}

uint64_t get_sys_tick() {
    if (started_timer == false) {
        start_timer();
    }
    timer_status_t status;
    (void) R_GTM_StatusGet(&g_timer0_ctrl, &status);
    //APP_PRINT("Timer value: %d\n", status.counter);
    //return tick + (0xFFFFFFFF - status.counter) / 1000;
    return tick + (0xFFFFFFFF - status.counter) / 1000;
}
uint64_t millis() {
    return get_sys_tick() / 100;
}

uint64_t micros() {
    return get_sys_tick() * 10;
}


void delayMicroseconds(uint32_t tx_delay) {
    R_BSP_SoftwareDelay(tx_delay, BSP_DELAY_UNITS_MICROSECONDS);
}

#endif // _TIMER_
