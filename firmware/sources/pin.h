#ifndef PIN_H
#define PIN_H

#include "io_map.h"

#define led_ind_lamp() palSetPad(led_con_gpio,led_lamp_pin)
#define led_ind_usb() palSetPad(led_con_gpio,led_usb_pin)
#define led_ind_pv() palSetPad(led_con_gpio,led_pv_pin)

#define con_pv_off() palSetPad(con_gpio, con_pv_pin)
#define con_pv_on() palClearPad(con_gpio, con_pv_pin)

#define con_lamp_off() palClearPad(con_gpio, con_lamp_pin)
#define con_lamp_on() palSetPad(con_gpio, con_lamp_pin)

#define con_usb_off() palSetPad(con_gpio, con_usb_pin)
#define con_usb_on() palClearPad(con_gpio, con_usb_pin)

void led_pin_init(void);
void con_pin_init(void);
void chk_pv_pin_init(void);

void pin_init(void);
void pin_deinit(void);

void led_ind_off_all(systime_t time);
void led_ind_batt(void);

uint8_t chk_pv(void);

#endif // PIN_H
