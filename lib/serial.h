#ifndef BAUD
#define BAUD 9600
#endif

#define   USART_HAS_DATA   bit_is_set(UCSR0A, RXC0)
#define   USART_READY      bit_is_set(UCSR0A, UDRE0)

void initSerial(void);

void transmitByte(uint8_t data);
uint8_t receiveByte(void);

void readString(char myString[], uint8_t maxLength);
uint8_t getNumber(void);

void printString(const char myString[]);
void printByte(uint8_t byte);
void printWord(uint16_t word);
void printBinaryByte(uint8_t byte);
void printHexByte(uint8_t byte);