#include <avr/io.h>
#include <util/delay.h>
#include "pins.h"
#include "serial.h"

int main(void){
  char serialInput;

  initSerial();
  printString("Hello, Kas!");

  while(1){
    serialInput = receiveByte();
    transmitByte(serialInput);
  }

  return(0);
}