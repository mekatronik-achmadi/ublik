#include "inklusi.h"

void delay(__IO uint32_t nCount){
  for(; nCount != 0; nCount--);
}

void led_pin_init(void){
    palSetPadMode(GPIOB, led_pv_pin, PAL_MODE_OUTPUT_PUSHPULL);
    palSetPadMode(GPIOB, led_lamp_pin, PAL_MODE_OUTPUT_PUSHPULL);
    palSetPadMode(GPIOB, led_ind_pin, PAL_MODE_OUTPUT_PUSHPULL);
    palSetPadMode(GPIOB, led_batt4_pin, PAL_MODE_OUTPUT_PUSHPULL);
    palSetPadMode(GPIOB, led_batt3_pin, PAL_MODE_OUTPUT_PUSHPULL);
    palSetPadMode(GPIOB, led_batt2_pin, PAL_MODE_OUTPUT_PUSHPULL);
    palSetPadMode(GPIOB, led_batt1_pin, PAL_MODE_OUTPUT_PUSHPULL);
}

void con_pin_init(void){
    palSetPadMode(GPIOB, con_lamp_pin, PAL_MODE_OUTPUT_PUSHPULL);
    palSetPadMode(GPIOB, con_pv_pin, PAL_MODE_OUTPUT_PUSHPULL);
}

void chk_pv_pin_init(void){
    palSetPadMode(GPIOA, wkup_pin, PAL_MODE_INPUT_PULLDOWN);
}

void pin_init(void){
    AFIO->MAPR |= AFIO_MAPR_SWJ_CFG_DISABLE;

    led_pin_init();
    con_pin_init();
    chk_pv_pin_init();
}

void pin_deinit(void){
    palSetPadMode(GPIOB, led_pv_pin, PAL_MODE_RESET);
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

    if(!palReadPad(GPIOA, wkup_pin)){
        result=0;
    }
    else{
        result=1;
    }

    return result;
}
