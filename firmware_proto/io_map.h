#ifndef IO_MAP_H
#define IO_MAP_H

#define chk_pv_pin 0 //A
#define chk_lamp_pin 3 //A
#define chk_usb_pin 4 //A

#define con_lamp_pin 12 //B
#define con_usb_pin 13 //B
#define con_pv_pin 14 //B

#define wkup_pin chk_pv_pin

#define led_lamp_pin 8 //B
#define led_usb_pin 7 //B
#define led_pv_pin 9 //B

#define led_ind_pin 7 //B

#define led_batt4_pin 6 //B
#define led_batt3_pin 5 //B
#define led_batt3_pin 6 //B
#define led_batt2_pin 4 //B
#define led_batt1_pin 3 //B



#define ADC_GRP1_NUM_CHANNELS   3

#define ADC_USB_N 4
#define ADC_USB_CHANNEL ADC_CHANNEL_IN4
#define ADC_USB_SMPR ADC_SMPR2_SMP_AN4

#define ADC_LAMP_N 3
#define ADC_LAMP_CHANNEL ADC_CHANNEL_IN3
#define ADC_LAMP_SMPR ADC_SMPR2_SMP_AN3

#define ADC_BATT_N 1
#define ADC_BATT_CHANNEL ADC_CHANNEL_IN1
#define ADC_BATT_SMPR ADC_SMPR2_SMP_AN1

#endif // IO_MAP_H
