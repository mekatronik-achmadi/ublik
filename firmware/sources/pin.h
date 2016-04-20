#ifndef PIN_H
#define PIN_H

#define __IO volatile

#define ind_sleep 0xAFFF
#define ind_tunda 0xAFFFF

#define chk_pv_pin 0 //A
#define chk_lamp_pin 3 //A

#define con_lamp_pin 12 //B
#define con_pv_pin 14 //B

#define wkup_pin chk_pv_pin

#define led_pv_pin 9 //B
#define led_lamp_pin 8 //B
#define led_ind_pin 7 //B
#define led_batt4_pin 6 //B
#define led_batt3_pin 5 //B
#define led_batt2_pin 4 //B
#define led_batt1_pin 3 //B

#define Ind_ON() palSetPad(GPIOB, led_ind_pin)
#define Ind_OFF() palClearPad(GPIOB, led_ind_pin)

#define Lamp_ON() palSetPad(GPIOB, con_lamp_pin)
#define Lamp_OFF() palClearPad(GPIOB, con_lamp_pin);

void delay(__IO uint32_t nCount);

void led_pin_init(void);
void con_pin_init(void);
void chk_pv_pin_init(void);

void pin_init(void);
void pin_deinit(void);

void led_ind_lamp(void);
void led_ind_pv(void);

uint8_t chk_pv(void);

#endif // PIN_H
