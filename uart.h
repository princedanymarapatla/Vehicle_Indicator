#ifndef UART_H
#define UART_H

#include <avr/io.h>

void uart_init(uint16_t baud);
void uart_send_char(char c);
void uart_send_string(const char *str);
void uart_log_status(uint8_t left, uint8_t right, uint8_t hazard);

#endif
