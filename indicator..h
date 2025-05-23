#ifndef INDICATOR_H
#define INDICATOR_H

#include <stdint.h>

void indicator_update(void);      // To be called every 100ms
void indicator_event_left(void);  // Called on left button press
void indicator_event_right(void); // Called on right button press

#endif
