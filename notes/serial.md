# Serial Comms Notes

## How serial works

### Initialization

* set baud rate to UBRR0H, UBRROL
* set U2X0 bit in USCR0A register, if necessary
* enable TXEN0 and RXEN0 bits in USCR0B register
* set UCSZ01 and UCSZ00 bits in USCR0C register for 8 data bits, 1 stop bit

### Transmitting a byte

* set to loop until bit UDRE0 in register UCSR0A is set
* place outgoing byte into register UDR0

### Recieving a byte

* set to loop until bit RXC0 in register UCSR0A is set
* UDR0 register contains recieved byte