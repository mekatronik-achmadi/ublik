#ifndef PIN_H
#define PIN_H

#define CON_ENABLE 1
#define CON_DISABLE 0

#define led_ind_lamp() palSetPad(led_con_gpio,led_lamp_pin)
#define led_ind_usb() palSetPad(led_con_gpio,led_usb_pin)
#define led_ind_pv() palSetPad(led_con_gpio,led_pv_pin)

#define con_pv_off() palSetPad(con_gpio, con_pv_pin)

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
