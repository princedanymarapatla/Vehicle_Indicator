#include "gpio.h"
#include "uart.h"
#include "pwm.h"
#include "timer.h"
#include "button_handler.h"
#include "indicator.h"

int main(void) {
    gpio_init();
    uart_init(9600);
    pwm_init();
    timer_init(); // 100ms tick

    sei(); // Enable global interrupts

    while (1) {
        if (timer_flag) {
            timer_flag = 0;
            button_handler_update();
            indicator_update(); // Application logic
        }
    }
}
