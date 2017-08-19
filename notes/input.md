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

### Debouncing

```c
#include <utils/delay.h>

//...

uint8_t debounce(void){
  if(bit_is_clear(PINx, Pxx)) {
    _delay_us(1000); // 1 ms
    if(bit_is_clear(PINx, Pxx)) {
      return (1); // pressed and debounced
    }
  }
  return (0); // bounce
}
 
// ...
```

TODO: util function?

## ADC

* Analeg to Digital Converter
* Requires external power to AVCC pin (within ~0.6V of VCC)
* You can apply different reference voltages to get different resolutions
* ADC needs slower clock-- AVR has prescaler built in, be aware when overclocking!
  * Max speed for guaranteed 10-bit resolution is 200 kHz

### Steps

* Set reference voltage to AVCC w/ `ADMUX |= (1 << REFS0)`
* Set ADC clock prescaler to 8 w/ `ADCSRA |= (1 << ADPS1) | (1 << ADPS0)`
* Enable ADC w/ `ADCSRA |= (1 << ADEN)`
  * For free-running mode add:
    * `ADCSRA |= (1 << ADATE);`
    * `ADCSRA |= (1 << ADSC);`
* In event loop:
  * Start ADC conversion w/ `ADSCRA |= ADSC`
  * loop_until_bit_is_clear(ADSCRA, ADSC)
  * value is in register ADC (uint16_t -- 10 bits!) 0 to 1023
    * can scale down `uint8_t value = ADC_value >> 2 0 to 255

TODO: ADC utils

### Multiplexing the ADC pins

* ADC has 5 channels, but 1 converter-- must switch channels to use multiple devices
* to change:
  * `ADMUX &= 0b11110000;` to clear out channel bits
  * `ADMUX |= PCx;` to select the new needed channel
