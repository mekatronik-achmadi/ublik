#include "inklusi.h"

#define coba_tunda 0xAFFF

extern adcsample_t adc_lamp;

void all_init(void){
    halInit();
    chSysInit();

    pin_init();
//    comms_init();
//    analog_init();
//    saver_init();

}

void led_blink(uint8_t led_pin){
    palSetPad(GPIOB, led_pin);
    delay(coba_tunda);
    palClearPad(GPIOB, led_pin);
    delay(coba_tunda);
}

int main(void) {

    all_init();

    while (true){
        led_blink(led_pv_pin);
        led_blink(led_lamp_pin);
        led_blink(led_ind_pin);
        led_blink(led_batt4_pin);
        led_blink(led_batt3_pin);
        led_blink(led_batt2_pin);
        led_blink(led_batt1_pin);
        delay(coba_tunda);

    }
    return 0;
}
