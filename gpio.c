void gpio_init() {
    DDRD &= ~((1 << PD2) | (1 << PD3)); // PD2, PD3 as input (buttons)
    PORTD |= (1 << PD2) | (1 << PD3);   // Pull-ups enabled

    DDRB |= (1 << PB0) | (1 << PB1);    // PB0, PB1 as output (LEDs)
}
