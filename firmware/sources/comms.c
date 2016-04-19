#include "inklusi.h"

void comms_init(void){
  palSetPadMode(GPIOA,9,16);
  palSetPadMode(GPIOA,10,2);
  sdStart(&SD1,NULL);
}

void comms_deinit(void){
   sdStop(&SD1);
   palSetPadMode(GPIOA, 9, PAL_MODE_RESET);
   palSetPadMode(GPIOA, 10, PAL_MODE_RESET);
}
