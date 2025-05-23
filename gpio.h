#ifndef GPIO_H
#define GPIO_H

#include <avr/io.h>

#define BUTTON_LEFT_PIN   PD2
#define BUTTON_RIGHT_PIN  PD3
#define LED_LEFT_PIN      PB0
#define LED_RIGHT_PIN     PB1

void gpio_init(void);
uint8_t read_button_left(void);
uint8_t read_button_right(void);
void set_led_left(uint8_t state);
void set_led_right(uint8_t state);

#endif
