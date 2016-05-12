#ifndef PIN_H
#define PIN_H

#define CON_ENABLE 1
#define CON_DISABLE 0

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
#define led_batt2_pin 4 //B
#define led_batt1_pin 3 //B

#define led_ind_test() palSetPad(GPIOB,led_ind_pin)

#define led_ind_lamp() palSetPad(GPIOB,led_lamp_pin)
#define led_ind_usb() palSetPad(GPIOB,led_usb_pin)
#define led_ind_pv() palSetPad(GPIOB,led_pv_pin)

#define con_pv_off() palSetPad(GPIOB, con_pv_pin)

void led_pin_init(void);
void con_pin_init(void);
void chk_pv_pin_init(void);

void pin_init(void);
void pin_deinit(void);

void led_ind_off_all(systime_t time);
void led_ind_batt(void);

void con_pin_set(GPIO_TypeDef * port, uint16_t pin, uint8_t status);

uint8_t chk_pv(void);

#endif // PIN_H
