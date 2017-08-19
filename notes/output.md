# Output

## Digital Output

#### Steps

* Set correct Data Direction Register (DDRx) bit to 1
* Set PORTx register bit to 1 for on, 0 for off

#### Example:

```c
#include <avr/io.h>
#include <util/delay.h>

int main(void) {
  DDRB |= (1 << PB0); // sets PB0 to output

  while(1) {
    PORTB |= (1 << PB0); // turn PB0 on
    _delay_ms(1000);
    PORTB &= ~(1 << PB0); // turn PB0 off
    _delay_ms(1000);
  }
}
```