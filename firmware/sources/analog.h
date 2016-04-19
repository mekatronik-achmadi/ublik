#ifndef ANALOG_H
#define ANALOG_H

#define ADC_GRP1_NUM_CHANNELS   1
#define ADC_GRP1_BUF_DEPTH      100

#define ADC_LAMP_N 3
#define ADC_LAMP_CHANNEL ADC_CHANNEL_IN3
#define ADC_LAMP_SMPR_ ADC_SMPR2_SMP_AN3

void analog_init(void);
void analog_deinit(void);
void analog_read(void);

uint8_t chk_lamp(void);

#endif // ANALOG_H
