#ifndef ANALOG_H
#define ANALOG_H

#define ADC_GRP1_BUF_DEPTH      100

void analog_init(void);
void analog_deinit(void);

void data_print(void);

uint8_t chk_lamp(void);
uint8_t chk_usb(void);
uint8_t chk_batt(void);

#endif // ANALOG_H
