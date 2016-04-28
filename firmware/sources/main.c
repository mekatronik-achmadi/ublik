#include "inklusi.h"

int main(void) {

    /*
     * Init All peripheral
     */

    halInit();
    chSysInit();

    pin_init();
    analog_init();


#if USE_SLEEP
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

        if( (chk_lamp() != 1) && (chk_pv() !=1) && (chk_usb() !=1) ){
#if USE_STANDBY
            pin_deinit();
            analog_deinit();

#if USE_COMMS
            comms_deinit();
#endif

            standby_init();
#endif
        }
        else{
#if USE_SLEEP
            alarm_init();
            sleep_init();
#endif
        }


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
