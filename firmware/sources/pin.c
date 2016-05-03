#include "inklusi.h"

void delay(__IO uint32_t nCount){
  for(; nCount != 0; nCount--);
}

void led_pin_init(void){
    palSetPadMode(GPIOB, led_pv_pin, PAL_MODE_OUTPUT_PUSHPULL);
    palSetPadMode(GPIOB, led_usb_pin, PAL_MODE_OUTPUT_PUSHPULL);
    palSetPadMode(GPIOB, led_lamp_pin, PAL_MODE_OUTPUT_PUSHPULL);
    palSetPadMode(GPIOB, led_ind_pin, PAL_MODE_OUTPUT_PUSHPULL);
    palSetPadMode(GPIOB, led_batt4_pin, PAL_MODE_OUTPUT_PUSHPULL);
    palSetPadMode(GPIOB, led_batt3_pin, PAL_MODE_OUTPUT_PUSHPULL);
    palSetPadMode(GPIOB, led_batt2_pin, PAL_MODE_OUTPUT_PUSHPULL);
    palSetPadMode(GPIOB, led_batt1_pin, PAL_MODE_OUTPUT_PUSHPULL);
}

void con_pin_init(void){
    palSetPadMode(GPIOB, con_lamp_pin, PAL_MODE_OUTPUT_PUSHPULL);
    palSetPadMode(GPIOB, con_usb_pin, PAL_MODE_OUTPUT_PUSHPULL);
    palSetPadMode(GPIOB, con_pv_pin, PAL_MODE_OUTPUT_PUSHPULL);
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
    palSetPadMode(GPIOB, led_pv_pin, PAL_MODE_RESET);
    palSetPadMode(GPIOB, led_usb_pin, PAL_MODE_RESET);
    palSetPadMode(GPIOB, led_lamp_pin, PAL_MODE_RESET);
    palSetPadMode(GPIOB, led_ind_pin, PAL_MODE_RESET);
    palSetPadMode(GPIOB, led_batt4_pin, PAL_MODE_RESET);
    palSetPadMode(GPIOB, led_batt3_pin, PAL_MODE_RESET);
    palSetPadMode(GPIOB, led_batt2_pin, PAL_MODE_RESET);
    palSetPadMode(GPIOB, led_batt1_pin, PAL_MODE_RESET);

    palSetPadMode(GPIOB, con_lamp_pin, PAL_MODE_RESET);
    palSetPadMode(GPIOB, con_pv_pin, PAL_MODE_RESET);

    palSetPadMode(GPIOA, wkup_pin, PAL_MODE_RESET);
}

uint8_t chk_pv(void){
    uint8_t result;

    if(palReadPad(GPIOA, wkup_pin)==PAL_HIGH){
        result=1;
    }
    else{
        result=0;
    }

    return result;
}

void led_ind_test(void){
    Ind_ON();
    delay(ind_tunda);
    Ind_OFF();
    delay(ind_tunda);
}

void led_ind_wkupslp(void){
    Ind_ON();
    delay(ind_sleep);
    Ind_OFF();
    delay(ind_sleep);
}

void led_ind_lamp(void){
    palSetPad(GPIOB,led_lamp_pin);
    delay(ind_tunda);
    palClearPad(GPIOB,led_lamp_pin);
    delay(ind_tunda);
}

void led_ind_usb(void){
    palSetPad(GPIOB,led_usb_pin);
    delay(ind_tunda);
    palClearPad(GPIOB,led_usb_pin);
    delay(ind_tunda);
}

void led_ind_pv(void){
    palSetPad(GPIOB,led_pv_pin);
    delay(ind_tunda);
    palClearPad(GPIOB,led_pv_pin);
    delay(ind_tunda);
}

void led_ind_batt(void){
    uint8_t stt;

//    stt=chk_batt();
    stt=4;

    if(stt==0){
        palSetPad(GPIOB, led_batt1_pin);
    }
    else if(stt==1){
        palSetPad(GPIOB, led_batt1_pin);
    }
    else if(stt==2){
        palSetPad(GPIOB, led_batt2_pin);
    }
    else if(stt==3){
        palClearPad(GPIOB, led_batt3_pin);
    }
    else if(stt==4){
        palSetPad(GPIOB, led_batt4_pin);
    }

    delay(ind_tunda);
    palClearPad(GPIOB, led_batt4_pin);
    palClearPad(GPIOB, led_batt3_pin);
    palClearPad(GPIOB, led_batt2_pin);
    palClearPad(GPIOB, led_batt1_pin);
}
