#include "inklusi.h"

#if RUN_TEST

int main(void){
/*
 * Initializing system
 */
  ublik_init();


}

#endif

#if RUN_WORK

int main(void) {

/*
 * Initializing system
 */
  ublik_init();

/*
 * Perform Indicating
 */
  ublik_ind();

/*
 * Battere level control
 */
  ublik_batt();

  while (true){
/*
 * Sending some data
 */
    ublik_data();

/*
 * Going Sleep
 */
    ublik_sleep();

/*
 * Waking up from Sleep
 */
    ublik_wkup();

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

#endif
