#include "inklusi.h"

int main(void) {

/*
 * Initializing system
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
  chprintf(CHP,"System Initiated.\n\r");
  delay_ms(ind_tunda);
#endif

  led_ind_test();

/*
* Perform Led Indicating
*/

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

/*
* Battere level control
*/

  if((chk_pv()==1)&&(chk_batt()==4)){
      con_pv_off();
  }

  if((chk_usb()==1)&&(chk_batt()==1)){
      con_pin_set(GPIOB, con_usb_pin, DISABLE);
  }

  if((chk_lamp()==1)&&(chk_batt()==1)){
      con_pin_set(GPIOB, con_lamp_pin, DISABLE);
  }

/*
* Saver routine
*/
  analog_deinit();

  if( (chk_lamp()==0) && (chk_pv()==0 ) && (chk_usb()==0 ) ){
#if USE_SAVER
          pin_deinit();
  #if USE_COMMS
          chprintf(CHP,"Going to long Sleep.\n\r ");
          delay_ms(ind_tunda);
          comms_deinit();
  #endif
          alarm_init(SAVER_LONG_PERIOD);
#endif
  }
  else{
#if USE_SAVER
    #if USE_COMMS
        chprintf(CHP,"Going to short Sleep.\n\r");
        delay_ms(ind_tunda);
        comms_deinit();
    #endif
        alarm_init(SAVER_SHORT_PERIOD);
#endif
  }

  while (true){
    standby_start();
  }

  return 0;
}
