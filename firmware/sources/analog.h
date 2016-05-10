#ifndef ANALOG_H
#define ANALOG_H

#define analog_tunda 0xAFFFF

#define ADC_GRP1_NUM_CHANNELS   3
#define ADC_GRP1_BUF_DEPTH      100

#define ADC_USB_N 4
#define ADC_USB_CHANNEL ADC_CHANNEL_IN4
#define ADC_USB_SMPR ADC_SMPR2_SMP_AN4

#define ADC_LAMP_N 3
#define ADC_LAMP_CHANNEL ADC_CHANNEL_IN3
#define ADC_LAMP_SMPR ADC_SMPR2_SMP_AN3

#define ADC_BATT_N 1
#define ADC_BATT_CHANNEL ADC_CHANNEL_IN1
#define ADC_BATT_SMPR ADC_SMPR2_SMP_AN1

void analog_init(void);
void analog_deinit(void);

void data_print(void);

uint8_t chk_lamp(void);
uint8_t chk_usb(void);
uint8_t chk_batt(void);

#endif // ANALOG_H
