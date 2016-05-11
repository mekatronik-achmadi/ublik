#include "inklusi.h"

int main(void) {

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
  delay(ind_tunda);
#endif

  led_ind_test();

  alarm_init(1);

  while (true){
    chThdSleepSeconds(1);

    /* going to anabiosis*/
    chSysLock();
    wkup_pin_set(ENABLE);
    PWR->CR |= PWR_CR_CWUF | PWR_CR_CSBF;
    PWR->CR |= PWR_CR_PDDS | PWR_CR_LPDS;
    SCB->SCR |= SCB_SCR_SLEEPDEEP_Msk;
    __WFI();
  }
  return 0;
}
