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
        con_lamp_on();
        con_usb_on();
        delay_ms(con_tunda);
    }
}

void ublik_ind(void){
	
    led_ind_batt();

    if(chk_pv()==1){
        led_ind_pv();
    }

    if(chk_lamp()==1){
        led_ind_lamp();
    }

    if(chk_usb()==1){
        led_ind_usb();
    }

    led_ind_off_all(ind_tunda);
}

void ublik_batt(void){
    
    uint8_t lvl_batt=chk_batt();

    if(chk_pv()==1){
        con_lamp_off();
    }
    
    if((chk_pv()==1) && (lvl_batt==4)){
        con_pv_off();
    }
    else{
        con_pv_on();
    }

    if((chk_lamp()!=1) || (lvl_batt<=1)){
        con_lamp_off();
    }
    else{
        con_lamp_on();
    }

    if((chk_usb()!=1) || (lvl_batt<=1)){
        con_usb_off();
    }
    else{
        con_usb_on();
    }

}

void ublik_data(void){
    data_print();
    delay_ms(200);
}

void ublik_sleep(void){
    chprintf(CHP,"Going to Sleep.\n\r");
    delay_ms(200);
    sleep_start(SAVER_PERIOD);
}

void ublik_wkup(void){
    chprintf(CHP,"Waking Up.\n\r");
}
