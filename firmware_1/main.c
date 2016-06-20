#include "inklusi.h"

#if RUN_WORK

int main(void) {

/*
 * Initializing system
 */
  ublik_init();

/*
 * Output starting
 */
  ublik_out();

/*
 * Perform Indicating
 */
  ublik_ind();

  while (true){
/*
 * Sending some data
 */
    ublik_data();

/*
 * Battere level control
 */
    ublik_batt();

/*
 * Going Sleep
 */
    ublik_sleep();

/*
 * Waking up from Sleep
 */
    ublik_wkup();

/*
 * Continue To next Loop
 */
     delay_ms(proc_tunda);

  }

  return 0;
}

#endif
