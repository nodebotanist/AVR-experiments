#include <avr/io.h>
#include "serial.h"
#include <util/setbaud.h>

void initSerial(void) {
  UBRR0H = UBRRH_VALUE;
  UBRR0L = UBRRL_VALUE;
#if USE_2X
  UCSR0A |= (1 << U2X0);
#else
  UCSR0A &= ~(1 << U2X0);
#endif
  UCSR0B = (1 << TXEN0) | (1 << RXEN0);
  UCSR0C = (1 << UCSZ01) | (1 << UCSZ00);
}

void transmitByte(uint8_t data) {
  loop_until_bit_is_set(UCSR0A, UDRE0);
  UDR0 = data;
}

uint8_t receiveByte(void) {
  loop_until_bit_is_set(UCSR0A, RXC0);
  return UDR0;
}

void printString(const char string[]) {
  uint8_t i = 0;
  while (string[i]) {
    transmitByte(string[i]);
    i++;
  }
}

void readString(char string[], uint8_t maxLength) {
  char response;
  uint8_t i;
  i = 0;
  while (i < (maxLength - 1)) {
    response = receiveByte();
    transmitByte(response);
    if (response == '\r') {
      break;
    }
    else {
      string[i] = response;
      i++;
    }
  }
  string[i] = 0;
}

void printByte(uint8_t byte) {
  transmitByte('0' + (byte / 100));
  transmitByte('0' + ((byte / 10) % 10));
  transmitByte('0' + (byte % 10));
}

void printWord(uint16_t word) {
  transmitByte('0' + (word / 10000));
  transmitByte('0' + ((word / 1000) % 10));
  transmitByte('0' + ((word / 100) % 10));
  transmitByte('0' + ((word / 10) % 10));
  transmitByte('0' + (word % 10));
}

void printBinaryByte(uint8_t byte) {
  uint8_t bit;
  for (bit = 7; bit < 255; bit--) {
    if (bit_is_set(byte, bit))
      transmitByte('1');
    else
      transmitByte('0');
  }
}

void printHexByte(uint8_t byte) {
  uint8_t nibble;
  nibble = (byte & 0b11110000) >> 4;
  transmitByte(nibbleToHexCharacter(nibble));
  nibble = byte & 0b00001111;
  transmitByte(nibbleToHexCharacter(nibble));
}
