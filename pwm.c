void pwm_init() {
    // Fast PWM mode, non-inverting, prescaler 64
    TCCR0A = (1 << COM0A1) | (1 << WGM01) | (1 << WGM00);
    TCCR0B = (1 << CS01) | (1 << CS00);
    DDRD |= (1 << PD6); // PWM output (OC0A)
}

void pwm_set_duty(uint8_t duty) {
    OCR0A = duty;
}
