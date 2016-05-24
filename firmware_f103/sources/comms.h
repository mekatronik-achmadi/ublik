#ifndef COMMS_H
#define COMMS_H

#define CHP (BaseSequentialStream *)&SD1

void comms_init(void);
void comms_deinit(void);

#endif // COMMS_H
