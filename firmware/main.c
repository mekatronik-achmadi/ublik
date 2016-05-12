#include "inklusi.h"

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
 * Perform IO Control
 */
    ublik_con();

/*
 * Battere level control
 */
    ublik_batt();

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
 * Continue To next Loop
 */
     delay_ms(proc_tunda);

  }

  return 0;
}
