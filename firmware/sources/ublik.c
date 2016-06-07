#include "inklusi.h"

void ublik_init(void){
    halInit();
    chSysInit();

    pin_init();
    analog_init();

    comms_init();
    chprintf(CHP,"System Initiated.\n\r");

}

void ublik_out(void){
    if(chk_batt()>1){
        con_pin_set(con_gpio, con_lamp_pin, CON_ENABLE);
        con_pin_set(con_gpio, con_usb_pin, CON_ENABLE);
        delay_ms(con_tunda);
    }
}

void ublik_ind(void){
    led_ind_batt();

    if(chk_lamp()==1){
        led_ind_lamp();
    }

    if(chk_usb()==1){
        led_ind_usb();
    }

    if(chk_pv()==1){
        led_ind_pv();
    }

    led_ind_off_all(ind_tunda);
}

void ublik_batt(void){
    if((chk_pv()==1) && (chk_batt()==4)){
        con_pv_off();
    }

    if((chk_usb()!=1) || (chk_batt()<=1)){
        con_pin_set(con_gpio, con_usb_pin, CON_DISABLE);
    }

    if((chk_lamp()!=1) || (chk_batt()<=1)){
        con_pin_set(con_gpio, con_lamp_pin, CON_DISABLE);
    }
}

void ublik_data(void){
    data_print();
}

void ublik_sleep(void){
    chprintf(CHP,"Going to Sleep.\n\r");
    sleep_start(SAVER_PERIOD);
}

void ublik_wkup(void){
    chprintf(CHP,"Waking Up.\n\r");
}
