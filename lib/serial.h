#ifndef BAUD
#define BAUD 9600
#endif

#define   USART_HAS_DATA   bit_is_set(UCSR0A, RXC0)
#define   USART_READY      bit_is_set(UCSR0A, UDRE0)

void initSerial(void);

void transmitByte(uint8_t data);
uint8_t receiveByte(void);