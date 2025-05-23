#ifndef PWM_H
#define PWM_H

#include <avr/io.h>

void pwm_init(void);
void pwm_set_left(uint8_t duty);  // PWM for left LED
void pwm_set_right(uint8_t duty); // PWM for right LED

#endif
