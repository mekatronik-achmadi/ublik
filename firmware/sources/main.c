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

    Ind_ON();
    delay(ind_tunda);
    Ind_OFF();
    delay(ind_tunda);

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

    }
    return 0;
}
