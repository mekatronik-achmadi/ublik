#include "inklusi.h"

static binary_semaphore_t alarm_sem;
static RTCDateTime timespec;
static RTCAlarm alarmspec;
static uint32_t tv_sec;

static void extcbwkup(EXTDriver *extp, expchannel_t channel) {
    (void)extp;
    (void)channel;
}

static const EXTConfig extcfg = {
  {
    {EXT_CH_MODE_RISING_EDGE | EXT_CH_MODE_AUTOSTART, extcbwkup},
    {EXT_CH_MODE_DISABLED, NULL},
    {EXT_CH_MODE_DISABLED, NULL},
    {EXT_CH_MODE_DISABLED, NULL},
    {EXT_CH_MODE_DISABLED, NULL},
    {EXT_CH_MODE_DISABLED, NULL},
    {EXT_CH_MODE_DISABLED, NULL},
    {EXT_CH_MODE_DISABLED, NULL},
    {EXT_CH_MODE_DISABLED, NULL},
    {EXT_CH_MODE_DISABLED, NULL},
    {EXT_CH_MODE_DISABLED, NULL},
    {EXT_CH_MODE_DISABLED, NULL},
    {EXT_CH_MODE_DISABLED, NULL},
    {EXT_CH_MODE_DISABLED, NULL},
    {EXT_CH_MODE_DISABLED, NULL},
    {EXT_CH_MODE_DISABLED, NULL},
    {EXT_CH_MODE_DISABLED, NULL},
    {EXT_CH_MODE_RISING_EDGE | EXT_CH_MODE_AUTOSTART, extcbwkup}
  }
};

static void rtc_cb(RTCDriver *rtcp, rtcevent_t event) {

  (void)rtcp;

  switch (event) {
  case RTC_EVENT_OVERFLOW:
    break;
  case RTC_EVENT_SECOND:
    break;
  case RTC_EVENT_ALARM:

    pwr_flag_clear(PWR_FLAG_WU);

    osalSysLockFromISR();
    stm32_clock_init();
    osalSysUnlockFromISR();

    extStop(&EXTD1);
    rtcSTM32SetSec(&RTCD1,0);
    rtcSetCallback(&RTCD1, NULL);

    /* your handler routine here */

    osalSysLockFromISR();
    chBSemSignalI(&alarm_sem);
    osalSysUnlockFromISR();

    break;
  }
}

void wkup_pin_set(FunctionalState NewState)
{
  *(__IO uint32_t *) CSR_EWUP_BB = (uint32_t)NewState;
}

void pwr_flag_clear(uint32_t PWR_FLAG)
{
    PWR->CR |=  PWR_FLAG << 2;
}

void saver_init(void){
    chBSemObjectInit(&alarm_sem, TRUE);
    rtcSTM32SetSec(&RTCD1,0);
    rtcGetTime(&RTCD1, &timespec);
}

void saver_start(uint32_t alarm_time){

    chBSemWaitTimeout(&alarm_sem, S2ST(alarm_time + 1));

    rtcSTM32GetSecMsec(&RTCD1, &tv_sec, NULL);
    alarmspec.tv_sec = tv_sec + alarm_time;
    rtcSetAlarm(&RTCD1, 0, &alarmspec);

    rtcSetCallback(&RTCD1, rtc_cb);
    extStart(&EXTD1, &extcfg);

    PWR->CR |= PWR_CR_CWUF;
    PWR->CR |= PWR_CR_CSBF;
    PWR->CR |= PWR_CR_LPDS;
    PWR->CR &= ~PWR_CR_PDDS;

    SCB->SCR |= SCB_SCR_SLEEPDEEP_Msk;

    __WFI();
}

