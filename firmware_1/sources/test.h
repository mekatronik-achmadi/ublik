#ifndef TEST_H
#define TEST_H

#define led_test_delay 250

void test_init(void);
void test_led_blink_init(void);
void test_led_blink(GPIO_TypeDef * port,uint8_t led_pin, systime_t time);
void test_led_show(void);

#endif // TEST_H
