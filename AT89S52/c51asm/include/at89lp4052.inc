;*H***************************************************************************
; NAME: at89lp4052.inc           
;----------------------------------------------------------------------------
; PURPOSE: SFR Description file for AT89LP4052 products on C51ASM assembler
;*****************************************************************************

$SAVE    
$NOLIST 
$NOMOD51

;  PORT Registers  
P1    DATA 090H        
P1M0  DATA 0C2H        
P1M1  DATA 0C3H        
P1_7  BIT  097H
P1_6  BIT  096H
P1_5  BIT  095H
P1_4  BIT  094H
P1_3  BIT  093H
P1_2  BIT  092H
P1_1  BIT  091H
P1_0  BIT  090H
SCK   BIT  097H
MISO  BIT  096H
MOSI  BIT  095H
SSB   BIT  094H

P3    DATA 0B0H        
P3M0  DATA 0C6H        
P3M1  DATA 0C7H        
P3_7  BIT  0B7H
P3_6  BIT  0B6H
P3_5  BIT  0B5H
P3_4  BIT  0B4H
P3_3  BIT  0B3H
P3_2  BIT  0B2H
P3_1  BIT  0B1H
P3_0  BIT  0B0H
T1    BIT  0B5H
T0    BIT  0B4H
INT1  BIT  0B3H
INT0  BIT  0B2H
TXD   BIT  0B1H
RXD   BIT  0B0H

;------------------ Status register ---------------------
PSW  DATA 0D0H       

CY   BIT  0D7H
AC   BIT  0D6H
F0   BIT  0D5H
RS1  BIT  0D4H
RS0  BIT  0D3H
OV   BIT  0D2H
UD   BIT  0D1H
P    BIT  0D0H

;------------------ CPU registers ---------------------
ACC  DATA 0E0H       
B    DATA 0F0H 
SP   DATA 081H        
DPL  DATA 082H       
DPH  DATA 083H       

;------------------ TIMERS registers ---------------------
TCON DATA 088H
TF1  BIT  08FH
TR1  BIT  08EH
TF0  BIT  08DH
TR0  BIT  08CH
IE1  BIT  08BH
IT1  BIT  08AH
IE0  BIT  089H
IT0  BIT  088H
       
TMOD DATA 089H      

TL0  DATA 08AH       
TL1  DATA 08BH       
TH0  DATA 08CH       
TH1  DATA 08DH       
TCONB DATA 091H
RL0  DATA 092H
RL1  DATA 093H
RH0  DATA 094H
RH1  DATA 095H
WDTRST  DATA 0A6H    
WDTCON  DATA 0A7H    


;------------------- UART registers ------------------------
SCON  DATA 098H      
SM0   BIT  09FH
FE    BIT  09FH
SM1   BIT  09EH
SM2   BIT  09DH
REN   BIT  09CH
TB8   BIT  09BH
RB8   BIT  09AH
TI    BIT  099H
RI    BIT  098H

SBUF  DATA 099H      
SADEN DATA  0B9H     
SADDR DATA  0A9H     

;-------------------- IT registers -----------------------
IE   DATA  0A8H      
IP   DATA  0B8H      
IPH  DATA  0B7H      

;  IE  
EA   BIT 0AFH
EC   BIT 0AEH
ES   BIT 0ACH
ET1  BIT 0ABH
EX1  BIT 0AAH
ET0  BIT 0A9H
EX0  BIT 0A8H

;  IP  
PCMP BIT 0BEH
PS   BIT 0BCH
PT1  BIT 0BBH
PX1  BIT 0BAH
PT0  BIT 0B9H
PX0  BIT 0B8H

;-------------------- OSC control registers ----------------------
PCON  DATA 087H      

;-------------------- SPI registers ------------------------------
SPSR DATA 0AAH
SPCR DATA 0D5H
SPDR DATA 085H

;-------------------- Comparator registers-----------------------
ACSR  DATA 097H

$RESTORE
