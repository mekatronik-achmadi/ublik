#include "inklusi.h"

#if RUN_TEST

RTCAlarm alarmspec;

int main(void){
/*
 * Initializing system
 */
    uint32_t tv_sec;

    halInit();
    chSysInit();

    palSetPadMode(led_con_gpio, led_pv_pin, PAL_MODE_OUTPUT_PUSHPULL);
    palSetPadMode(led_con_gpio, led_usb_pin, PAL_MODE_OUTPUT_PUSHPULL);
    palSetPadMode(led_con_gpio, led_lamp_pin, PAL_MODE_OUTPUT_PUSHPULL);

    palSetPadMode(led_batt_gpio, led_batt4_pin, PAL_MODE_OUTPUT_PUSHPULL);
    palSetPadMode(led_batt_gpio, led_batt3_pin, PAL_MODE_OUTPUT_PUSHPULL);
    palSetPadMode(led_batt_gpio, led_batt2_pin, PAL_MODE_OUTPUT_PUSHPULL);
    palSetPadMode(led_batt_gpio, led_batt1_pin, PAL_MODE_OUTPUT_PUSHPULL);

    palSetPadMode(led_ind_gpio,led_ind_pin, PAL_MODE_OUTPUT_PUSHPULL);

  /* set alarm in near future */
  rtcSTM32GetSecMsec(&RTCD1, &tv_sec, NULL);
  alarmspec.tv_sec = tv_sec + 20;
  rtcSetAlarm(&RTCD1, 0, &alarmspec);

    while(1){
        test_led_show();


    }

}

#endif
