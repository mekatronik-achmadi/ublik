#ifndef PIN_H
#define PIN_H

#define __IO volatile

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

void delay(__IO uint32_t nCount);

void led_pin_init(void);
void con_pin_init(void);
void chk_pv_pin_init(void);

void pin_init(void);
void pin_deinit(void);

uint8_t chk_pv(void);

#endif // PIN_H
