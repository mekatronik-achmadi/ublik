#ifndef COMMS_H
#define COMMS_H

#define CHP (BaseSequentialStream *)&SD1

#define SHELL_WA_SIZE   THD_WA_SIZE(2048)

void comms_init(void);
void comms_deinit(void);

#endif // COMMS_H
