void indicator_event_left() {
    uart_log("Left button pressed");
    // Handle toggle and switching logic
}

void indicator_event_right() {
    uart_log("Right button pressed");
    // Handle toggle and switching logic
}

void indicator_update() {
    // Called every 100ms to handle LED toggle
}
