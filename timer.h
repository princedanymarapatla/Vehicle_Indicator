#ifndef TIMER_H
#define TIMER_H

#include <avr/io.h>
#include <avr/interrupt.h>

extern volatile uint8_t timer_flag;

void timer_init(void); // Initializes 100 ms scheduler

#endif
