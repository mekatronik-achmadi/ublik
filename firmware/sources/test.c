#include "inklusi.h"

void test_init(){
    halInit();
    chSysInit();

    pin_init();
    test_led_blink_init();
}

void test_led_blink_init(){
    palSetPadMode(led_ind_gpio,led_ind_pin, PAL_MODE_OUTPUT_PUSHPULL);
}

void test_led_blink(GPIO_TypeDef *port, uint8_t led_pin, systime_t time){
    palSetPad(port,led_pin);
    chThdSleepMilliseconds(time);
    palClearPad(port,led_pin);
    chThdSleepMilliseconds(time);
}

void test_led_show(){
    test_led_blink(led_con_gpio, led_usb_pin, led_test_delay);
    test_led_blink(led_con_gpio, led_lamp_pin, led_test_delay);

    test_led_blink(led_batt_gpio, led_batt4_pin, led_test_delay);
    test_led_blink(led_batt_gpio, led_batt3_pin, led_test_delay);
    test_led_blink(led_batt_gpio, led_batt2_pin, led_test_delay);
    test_led_blink(led_batt_gpio, led_batt1_pin, led_test_delay);

    test_led_blink(led_con_gpio, led_pv_pin, led_test_delay);

    test_led_blink(led_ind_gpio, led_ind_pin, led_test_delay);
}
