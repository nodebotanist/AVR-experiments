#ifndef DEBOUNCE_TIME
#define DEBOUNCE_TIME 1000
#endif

uint8_t read_debounce(uint8_t pin, uint8_t port);
uint8_t read_debounce(uint8_t pin, uint8_t port, uint16_t custom_debounce);