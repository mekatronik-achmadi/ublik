#include "inklusi.h"

int main(void) {

/*
 * Initializing system
 */
  ublik_init();

/*
 * Perform Checking and Indicating
 */
  ublik_chk_ind();

/*
 * Battere level control
 */
  ublik_batt();

  while (true){

/*
 * Sending some data
 */
#if USE_COMMS
      data_print();
      delay_ms(data_tunda);
#endif

/*
 * Saver activated
 */
#if USE_SAVER
       ublik_saver();
#endif

/*
 * Waking up from Sleep
 */
#if USE_COMMS
    chprintf(CHP,"WakeUp from Sleep.\n\r");
    delay_ms(ind_tunda);
#endif

/*
 * Perform Checking and Indicating
 */
    ublik_chk_ind();

/*
 * Battere level control
 */
     ublik_batt();

/*
 * Continue To next Loop
 */
     delay_ms(proc_tunda);

  }

  return 0;
}
