;*H***************************************************************************
; NAME: at89s8253.inc           
;----------------------------------------------------------------------------
; PURPOSE: SFR Description file for AT89S8252/8253 products on C51ASM assembler
;*****************************************************************************

$SAVE    
$NOLIST 
$NOMOD51

;  PORT Registers  
P0    DATA 080H        

P0_7  BIT  087H
P0_6  BIT  086H
P0_5  BIT  085H
P0_4  BIT  084H
P0_3  BIT  083H
P0_2  BIT  082H
P0_1  BIT  081H
P0_0  BIT  080H

P1    DATA 090H   
     
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
T2EX  BIT  091H
T2    BIT  090H

P2    DATA 0A0H 
  
P2_7  BIT  0A7H
P2_6  BIT  0A6H
P2_5  BIT  0A5H
P2_4  BIT  0A4H
P2_3  BIT  0A3H
P2_2  BIT  0A2H
P2_1  BIT  0A1H
P2_0  BIT  0A0H

P3    DATA 0B0H        

P3_7  BIT  0B7H
P3_6  BIT  0B6H
P3_5  BIT  0B5H
P3_4  BIT  0B4H
P3_3  BIT  0B3H
P3_2  BIT  0B2H
P3_1  BIT  0B1H
P3_0  BIT  0B0H
RD    BIT  0B7H
WR    BIT  0B6H
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
DP0L DATA  082H       
DP0H DATA  083H       
DP1L DATA  084H       
DP1H DATA  085H       
AUXR DATA  08EH

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

T2CON  DATA 0C8H
TF2    BIT  0CFH
EXF2   BIT  0CEH
RCLK   BIT  0CDH
TCLK   BIT  0CCH
EXEN2  BIT  0CBH
TR2    BIT  0CAH
C_T2   BIT  0C9H
CP_RL2 BIT  0C8H
       
T2MOD  DATA 0C9H     
TL0  DATA 08AH       
TL1  DATA 08BH       
TL2  DATA 0CCH       
TH0  DATA 08CH       
TH1  DATA 08DH       
TH2  DATA 0CDH       
RCAP2L  DATA 0CAH    
RCAP2H  DATA 0CBH    
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
ET2  BIT 0ADH
ES   BIT 0ACH
ET1  BIT 0ABH
EX1  BIT 0AAH
ET0  BIT 0A9H
EX0  BIT 0A8H

;  IP  
PT2  BIT 0BDH
PS   BIT 0BCH
PT1  BIT 0BBH
PX1  BIT 0BAH
PT0  BIT 0B9H
PX0  BIT 0B8H

;-------------------- OSC control registers ----------------------
PCON  DATA 087H      
CLKREG  DATA 08FH

;-------------------- EEPROM Data registers-----------------------
EECON  DATA 096H

;-------------------- SPI registers ------------------------------
SPDR  DATA 086H
SPSR  DATA 0AAH
SPCR  DATA 0D5H

$RESTORE
