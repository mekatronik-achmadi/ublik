#include "inklusi.h"

int main(void) {

    /*
     * Init All peripheral
     */

    halInit();
    chSysInit();

    pin_init();
    analog_init();

#if USE_SAVER
    saver_init();
#endif

#if USE_COMMS
    comms_init();
#endif

    led_ind_test();

    /*
     * Check batt
     */
    led_ind_batt();

    /*
     * Check lamp
     */
    Lamp_ON();
    delay(con_tunda);
    if(chk_lamp()==1){
        Lamp_ON();
        led_ind_lamp();
    }
    else{
        Lamp_OFF();
    }

    /*
     * Check usb
     */
    Usb_ON();
    delay(con_tunda);
    if(chk_usb()==1){
        Usb_ON();
        led_ind_usb();
    }
    else{
        Usb_OFF();
    }

    /*
     *Check pv
     */
    if(chk_pv()==1){
        led_ind_pv();
    }

#if USE_COMMS
        chprintf(CHP,"System Initiated.\n\r");
        delay(analog_tunda);
#endif

    while (true){

#if USE_COMMS
        data_print();
        led_ind_test();
#endif
        if((chk_usb()==1)&&(chk_batt()==1)){
            Usb_OFF();
        }

        if((chk_lamp()==1)&&(chk_batt()==1)){
            Lamp_OFF();
        }

        PV_ON();
        delay(con_tunda);

        if((chk_pv()==1)&&(chk_batt()==4)){
            PV_OFF();
        }

        if( (chk_lamp() == 0) && (chk_pv() !=1) && (chk_usb() !=1) ){
#if USE_SAVER
            pin_deinit();
            analog_deinit();
    #if USE_COMMS
            chprintf(CHP,"Going to Die. Bye.\n\r ");
            delay(analog_tunda);
            comms_deinit();
    #endif
            alarm_deinit();
            standby_init();
#endif
        }
        else{
#if USE_SAVER
    #if USE_COMMS
            chprintf(CHP,"Going to Sleep. See you.\n\r");
            delay(analog_tunda);
    #endif
            alarm_init();
            sleep_init();
#endif
        }

#if USE_COMMS
        chprintf(CHP,"Waking up from sleep.\n\r");
        delay(analog_tunda);
#endif

        if(chk_usb()==1){
            Usb_ON();
            led_ind_usb();
        }
        else{
            Usb_OFF();
        }


        if(chk_lamp()==1){
            Lamp_ON();
            led_ind_lamp();
        }
        else{
            Lamp_OFF();
        }


        if(chk_pv()==1){
            led_ind_pv();
        }


        delay(process_tunda);
    }
    return 0;
}
