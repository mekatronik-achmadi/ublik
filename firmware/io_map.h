#ifndef IO_MAP_H
#define IO_MAP_H

#define ADC_GRP1_NUM_CHANNELS   3

#define ADC_USB_N 3
#define ADC_USB_CHANNEL ADC_CHANNEL_IN3
#define ADC_USB_SMPR ADC_SMPR2_SMP_AN3

#define ADC_LAMP_N 2
#define ADC_LAMP_CHANNEL ADC_CHANNEL_IN2
#define ADC_LAMP_SMPR ADC_SMPR2_SMP_AN2

#define ADC_BATT_N 1
#define ADC_BATT_CHANNEL ADC_CHANNEL_IN1
#define ADC_BATT_SMPR ADC_SMPR2_SMP_AN1

#define analog_gpio GPIOA


#define chk_pv_pin 0 //A
#define chk_lamp_pin ADC_LAMP_N //A
#define chk_usb_pin ADC_USB_N //A
#define chk_gpio GPIOA

#define con_pv_pin 12 //B
#define con_lamp_pin 13 //B
#define con_usb_pin 14 //B
#define con_gpio GPIOB

#define led_lamp_pin 8 //B
#define led_usb_pin 9 //B
#define led_pv_pin 3 //B
#define led_con_gpio GPIOB

#define led_ind_pin 15 //A
#define led_ind_gpio GPIOA

#define led_batt4_pin 7 //B
#define led_batt3_pin 6 //B
#define led_batt2_pin 5 //B
#define led_batt1_pin 4 //B
#define led_batt_gpio GPIOB

#endif // IO_MAP_H
