#include "REG52.h"    // it is the header file of AT89S52 µcontroller
#define LEDPORT P2   // define PORT P2
void Delay(void);    //Function prototype declaration

void main (void) {

while(1)           //End less while so that program never ends

{
LEDPORT = 0x55; //01010101 binary
Delay();

LEDPORT = 0xaa; //10101010 binary
Delay();
}
}

void Delay(void)
{
int j; int i;
for(i=0;i<10;i++) // for() loop
{
for(j=0;j<10000;j++); // delay loop
}
}
