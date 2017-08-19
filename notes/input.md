# Input

## Digital Input

### Steps

* DDRx &= ~(1 << pin) to set pin direction to 0 (input)
* For pullup resistors: PORTx != (1 << pin) (eqivalent to setting input to HIGH)
* PINx register contains input pin states
  * handy macros: bit_is_clear(byte, bit), bit_is_set(byte, bit)

### Examples

```c
#include <avr/io.h>
#include <util/delay.h>

int main(void) {
  DDRD &= ~(1 << PD2); // PD2 is now in input direction
  PORTD |= (1 << PD2); // enable pullup resistor

  while(1) {
    if(bit_is_clear(PIND, PD2)) {
      // ...PD2 has been pulled down (active)
    } else {
      // ...PD2 is inactive
    }
  }

  return(0)
}
```