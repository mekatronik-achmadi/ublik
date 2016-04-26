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
    if(chk_lamp()==1){
        Lamp_ON();
        led_ind_lamp();
    }
    else{
        Lamp_OFF();
    }

    /*
     *Check pv
     */
    if(chk_pv()==1){
        led_ind_pv();
    }

    while (true){

#if USE_COMMS
        analog_print();
        led_ind_test();
#endif
        if((chk_lamp()==1)&&(chk_batt()==1)){
            Lamp_OFF();
        }

        PV_ON();
        delay(ind_tunda);

        if((chk_pv()==1)&&(chk_batt()==4)){
            PV_OFF();
        }

        if( (chk_lamp() != 1) && (chk_pv() !=1) ){
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
            alarm_init();
            sleep_init();
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
