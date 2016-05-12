#include "inklusi.h"

static RTCAlarm alarmspec;
static uint32_t tv_sec;

static void extcbwkup(EXTDriver *extp, expchannel_t channel) {
    (void)extp;
    (void)channel;

    osalSysLockFromISR();
    stm32_clock_init();
    osalSysUnlockFromISR();
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
    break;
  }
}

void sleep_start(uint32_t alarm_time){

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

