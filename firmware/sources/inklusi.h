#ifndef INKLUSI_H
#define INKLUSI_H

#include "string.h"
#include "stdarg.h"
#include "stdint.h"
#include "stdlib.h"
#include "stdio.h"
#include "math.h"

#include "ch.h"
#include "hal.h"

#include "shell.h"
#include "chprintf.h"
#include "nullstreams.h"
#include "memstreams.h"
#include "evtimer.h"

#include "ublik_conf.h"

#include "pin.h"
#include "saver.h"
#include "comms.h"
#include "analog.h"
#include "ublik.h"

#define delay_s chThdSleepSeconds
#define delay_ms chThdSleepMilliseconds
#define delay_us chThdSleepMicroseconds

#endif // INKLUSI_H
