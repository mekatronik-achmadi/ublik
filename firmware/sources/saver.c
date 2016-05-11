#include "inklusi.h"

static RTCDateTime timespec;
static RTCAlarm alarmspec;
static uint32_t tv_sec;

void wkup_pin_set(FunctionalState NewState)
{
  *(__IO uint32_t *) CSR_EWUP_BB = (uint32_t)NewState;
}

void saver_init(void){
    rtcSTM32SetSec(&RTCD1,0);
    rtcGetTime(&RTCD1, &timespec);
}

void alarm_init(uint32_t alarm_time){
    rtcSTM32GetSecMsec(&RTCD1, &tv_sec, NULL);
    alarmspec.tv_sec = tv_sec + alarm_time;
    rtcSetAlarm(&RTCD1, 0, &alarmspec);
}

void standby_start(void){

    delay_ms(proc_tunda);

    chSysLock();

    wkup_pin_set(ENABLE);
    PWR->CR |= PWR_CR_CWUF;
    PWR->CR |= PWR_CR_CSBF;
    PWR->CR |= PWR_CR_LPDS;
    PWR->CR |= PWR_CR_PDDS;

    SCB->SCR |= SCB_SCR_SLEEPDEEP;
//    SCB->SCR |= SCB_SCR_SLEEPDEEP_Msk;

    __WFI();

    chSysUnlock();
}

