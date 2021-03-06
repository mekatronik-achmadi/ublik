#include "inklusi.h"

void led_pin_init(void){
    palSetPadMode(led_con_gpio, led_pv_pin, PAL_MODE_OUTPUT_PUSHPULL);
    palSetPadMode(led_con_gpio, led_usb_pin, PAL_MODE_OUTPUT_PUSHPULL);
    palSetPadMode(led_con_gpio, led_lamp_pin, PAL_MODE_OUTPUT_PUSHPULL);
    
    palSetPadMode(led_batt_gpio, led_batt4_pin, PAL_MODE_OUTPUT_PUSHPULL);
    palSetPadMode(led_batt_gpio, led_batt3_pin, PAL_MODE_OUTPUT_PUSHPULL);
    palSetPadMode(led_batt_gpio, led_batt2_pin, PAL_MODE_OUTPUT_PUSHPULL);
    palSetPadMode(led_batt_gpio, led_batt1_pin, PAL_MODE_OUTPUT_PUSHPULL);
}

void con_pin_init(void){
    palSetPadMode(con_gpio, con_lamp_pin, PAL_MODE_OUTPUT_PUSHPULL);
    palSetPadMode(con_gpio, con_usb_pin, PAL_MODE_OUTPUT_PUSHPULL);
    palSetPadMode(con_gpio, con_pv_pin, PAL_MODE_OUTPUT_PUSHPULL);
}

void chk_pv_pin_init(void){
    palSetPadMode(GPIOA, chk_pv_pin, PAL_MODE_INPUT_PULLDOWN);
}

void pin_init(void){
    AFIO->MAPR |= AFIO_MAPR_SWJ_CFG_DISABLE;

    led_pin_init();
    con_pin_init();
    chk_pv_pin_init();
}

void pin_deinit(void){
    palSetPadMode(led_con_gpio, led_pv_pin, PAL_MODE_RESET);
    palSetPadMode(led_con_gpio, led_usb_pin, PAL_MODE_RESET);
    palSetPadMode(led_con_gpio, led_lamp_pin, PAL_MODE_RESET);
    
    palSetPadMode(led_batt_gpio, led_batt4_pin, PAL_MODE_RESET);
    palSetPadMode(led_batt_gpio, led_batt3_pin, PAL_MODE_RESET);
    palSetPadMode(led_batt_gpio, led_batt2_pin, PAL_MODE_RESET);
    palSetPadMode(led_batt_gpio, led_batt1_pin, PAL_MODE_RESET);

    palSetPadMode(con_gpio, con_usb_pin, PAL_MODE_RESET);
    palSetPadMode(con_gpio, con_lamp_pin, PAL_MODE_RESET);
    palSetPadMode(con_gpio, con_pv_pin, PAL_MODE_RESET);
}

uint8_t chk_pv(void){
    uint8_t result;

    if(palReadPad(chk_gpio, chk_pv_pin)==PAL_HIGH){
        result=1;
    }
    else{
        result=0;
    }

    return result;
}

void led_ind_batt(void){
    uint8_t stt;

    stt=chk_batt();

    if(stt==0){
        palSetPad(led_batt_gpio, led_batt1_pin);
    }
    else if(stt==1){
        palSetPad(led_batt_gpio, led_batt1_pin);
    }
    else if(stt==2){
        palSetPad(led_batt_gpio, led_batt2_pin);
    }
    else if(stt==3){
        palSetPad(led_batt_gpio, led_batt3_pin);
    }
    else if(stt==4){
        palSetPad(led_batt_gpio, led_batt4_pin);
    }

}

void led_ind_off_all(systime_t time){
    delay_ms(time);

    palClearPad(led_con_gpio, led_pv_pin);
    palClearPad(led_con_gpio, led_usb_pin);
    palClearPad(led_con_gpio, led_lamp_pin);
    
    palClearPad(led_batt_gpio, led_batt4_pin);
    palClearPad(led_batt_gpio, led_batt3_pin);
    palClearPad(led_batt_gpio, led_batt2_pin);
    palClearPad(led_batt_gpio, led_batt1_pin);
}
