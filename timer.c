volatile uint8_t timer_flag = 0;

void timer_init() {
    TCCR1B |= (1 << WGM12);  // CTC mode
    OCR1A = 15624;           // 100ms at 16MHz with prescaler 1024
    TIMSK1 |= (1 << OCIE1A); // Enable compare match interrupt
    TCCR1B |= (1 << CS12) | (1 << CS10); // Prescaler 1024
}

ISR(TIMER1_COMPA_vect) {
    timer_flag = 1;
}
