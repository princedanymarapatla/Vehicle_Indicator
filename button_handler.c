#define BUTTON_LEFT PD2
#define BUTTON_RIGHT PD3

void button_handler_update() {
    static uint8_t last_state_left = 1, last_state_right = 1;
    static uint8_t counter_left = 0, counter_right = 0;

    uint8_t current_left = PIND & (1 << BUTTON_LEFT);
    uint8_t current_right = PIND & (1 << BUTTON_RIGHT);

    if (!current_left && last_state_left) counter_left++;
    else counter_left = 0;

    if (!current_right && last_state_right) counter_right++;
    else counter_right = 0;

    if (counter_left >= 10) {
        indicator_event_left();
        counter_left = 0;
    }

    if (counter_right >= 10) {
        indicator_event_right();
        counter_right = 0;
    }

    last_state_left = current_left;
    last_state_right = current_right;
}
