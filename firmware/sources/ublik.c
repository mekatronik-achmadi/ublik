#include "inklusi.h"

void ublik_init(void){
    halInit();
    chSysInit();

    pin_init();
    analog_init();

#if USE_SAVER
    saver_init();
#endif

#if USE_COMMS
    comms_init();
    chprintf(CHP,"System Initiated.\n\r");
    delay_ms(ind_tunda);
#endif

    led_ind_test();
}

void ublik_chk_ind(void){
    led_ind_batt();

    con_pin_set(GPIOB, con_lamp_pin, CON_ENABLE);
    delay_ms(con_tunda);
    if(chk_lamp()==1){
        con_pin_set(GPIOB, con_lamp_pin, CON_ENABLE);
        led_ind_lamp();
    }
    else{
        con_pin_set(GPIOB, con_lamp_pin, CON_DISABLE);
    }

    con_pin_set(GPIOB, con_usb_pin, CON_ENABLE);
    delay_ms(con_tunda);
    if(chk_usb()==1){
        con_pin_set(GPIOB, con_usb_pin, CON_ENABLE);
        led_ind_usb();
    }
    else{
        con_pin_set(GPIOB, con_usb_pin, CON_DISABLE);
    }

    if(chk_pv()==1){
        led_ind_pv();
    }

    led_ind_off_all(ind_tunda);
}

void ublik_batt(void){
    if((chk_pv()==1)&&(chk_batt()==4)){
        con_pv_off();
    }

    if((chk_usb()==1)&&(chk_batt()==1)){
        con_pin_set(GPIOB, con_usb_pin, DISABLE);
    }

    if((chk_lamp()==1)&&(chk_batt()==1)){
        con_pin_set(GPIOB, con_lamp_pin, DISABLE);
    }
}

void ublik_saver(void){
    if(HIBERNATE_CONDITION){
            pin_deinit();
            analog_deinit();
    #if USE_COMMS
            chprintf(CHP,"Going to Hibernate.\n\r ");
            delay_ms(ind_tunda);
            comms_deinit();
    #endif
            hibernate_start(HIBERNATE_PERIOD);
    }
    else{
      #if USE_COMMS
          chprintf(CHP,"Going to Sleep.\n\r");
          delay_ms(ind_tunda);
      #endif
          sleep_start(SLEEP_PERIOD);
    }

}
