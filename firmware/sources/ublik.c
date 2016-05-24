#include "inklusi.h"

void ublik_init(void){
    halInit();
    chSysInit();

    pin_init();
    analog_init();

#if USE_COMMS
    comms_init();
    chprintf(CHP,"System Initiated.\n\r");
    delay_ms(ind_tunda);
#endif

}

void ublik_ind(void){
    led_ind_batt();

    con_pin_set(GPIOB, con_lamp_pin, CON_ENABLE);
    delay_ms(con_tunda);
    if((chk_lamp()==1) && (chk_batt()>1)){
        con_pin_set(GPIOB, con_lamp_pin, CON_ENABLE);
        led_ind_lamp();
    }
    else{
        con_pin_set(GPIOB, con_lamp_pin, CON_DISABLE);
    }

    con_pin_set(GPIOB, con_usb_pin, CON_ENABLE);
    delay_ms(con_tunda);
    if((chk_usb()==1) && (chk_batt()>1)){
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

    if((chk_usb()==1)&&(chk_batt()<=1)){
        con_pin_set(GPIOB, con_usb_pin, CON_DISABLE);
    }

    if((chk_lamp()==1)&&(chk_batt()<=1)){
        con_pin_set(GPIOB, con_lamp_pin, CON_DISABLE);
    }
}

void ublik_data(void){

#if USE_COMMS
    data_print();
    delay_ms(data_tunda);
#endif

}

void ublik_sleep(void){
#if USE_SAVER

    #if USE_COMMS
      chprintf(CHP,"Going to Sleep.\n\r");
      delay_ms(ind_tunda);
    #endif

      sleep_start(SAVER_PERIOD);
#endif
}

void ublik_wkup(void){
#if USE_SAVER

    #if USE_COMMS
      chprintf(CHP,"Waking Up.\n\r");
      delay_ms(ind_tunda);
    #endif

#endif
}
