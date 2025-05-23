#ifndef BUTTON_HANDLER_H
#define BUTTON_HANDLER_H

#include <stdint.h>

void button_handler_update(void); // Call every 100ms

extern uint8_t button_event_left;
extern uint8_t button_event_right;
extern uint8_t button_event_hazard;

#endif
