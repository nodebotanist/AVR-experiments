;*H***************************************************************************
; NAME: at89lp6440.inc           
;----------------------------------------------------------------------------
; PURPOSE: SFR Description file for AT89LP6440 products on C51ASM assembler
;*****************************************************************************

$SAVE    
$NOLIST 
$NOMOD51

;  PORT Registers  
P0    DATA 080H        
P0M0  DATA 0BAH        
P0M1  DATA 0BBH        
P0_7  BIT  087H
P0_6  BIT  086H
P0_5  BIT  085H
P0_4  BIT  084H
P0_3  BIT  083H
P0_2  BIT  082H
P0_1  BIT  081H
P0_0  BIT  080H

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
SCL   BIT  093H
SDA   BIT  092H
T2EX  BIT  091H
T2    BIT  090H

P2    DATA 0A0H 
P2M0  DATA 0C4H        
P2M1  DATA 0C5H        
P2_7  BIT  0A7H
P2_6  BIT  0A6H
P2_5  BIT  0A5H
P2_4  BIT  0A4H
P2_3  BIT  0A3H
P2_2  BIT  0A2H
P2_1  BIT  0A1H
P2_0  BIT  0A0H
CCD   BIT  0A3H
CCC   BIT  0A2H
CCB   BIT  0A1H
CCA   BIT  0A0H

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
RD    BIT  0B7H
WR    BIT  0B6H
T1    BIT  0B5H
T0    BIT  0B4H
INT1  BIT  0B3H
INT0  BIT  0B2H
TXD   BIT  0B1H
RXD   BIT  0B0H

P4    DATA 0C0H        
P4M0  DATA 0BEH        
P4M1  DATA 0BFH        
P4_7  BIT  0C7H
P4_6  BIT  0C6H
P4_5  BIT  0C5H
P4_4  BIT  0C4H
P4_3  BIT  0C3H
P4_2  BIT  0C2H
P4_1  BIT  0C1H
P4_0  BIT  0C0H
ALE   BIT  0C4H
XTAL2 BIT  0C1H
XTAL1 BIT  0C0H

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
AX   DATA 0E1H       
B    DATA 0F0H 
BX   DATA 0F7H 
SP   DATA 081H        
SPX  DATA 09EH        
DPL  DATA 082H       
DPH  DATA 083H       
DP0L DATA  082H       
DP0H DATA  083H       
DP1L DATA  084H       
DP1H DATA  085H       
AUXR DATA  08EH
AUXR1 DATA 0A2H
DPCF DATA 0A2H
DSPR DATA 0E2H
FIRD DATA 0E3H
MACL DATA 0E4H
MACH DATA 0E5H
PAGE DATA 086H

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
TCONB DATA 091H
RL0  DATA 092H
RL1  DATA 093H
RH0  DATA 094H
RH1  DATA 095H
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
IE2  DATA  0B4H      
IP2  DATA  0B5H      
IPH2 DATA  0B6H      

;  IE  
EA   BIT 0AFH
EC   BIT 0AEH
ET2  BIT 0ADH
ES   BIT 0ACH
ET1  BIT 0ABH
EX1  BIT 0AAH
ET0  BIT 0A9H
EX0  BIT 0A8H

;  IP  
PCMP BIT 0BEH
PT2  BIT 0BDH
PS   BIT 0BCH
PT1  BIT 0BBH
PX1  BIT 0BAH
PT0  BIT 0B9H
PX0  BIT 0B8H

;--------------------- CCA registers -----------------------------
T2CCA  DATA 0D1H      
T2CCL  DATA 0D2H      
T2CCH  DATA 0D3H        
T2CCC  DATA 0D4H        
T2CCF  DATA 0D5H        

;------------------ T W I registers ------------------------------
TWCR  DATA 0AAH
TWSR  DATA 0ABH
TWAR  DATA 0ACH
TWDR  DATA 0ADH
TWBR  DATA 0AEH

;-------------------- OSC control registers ----------------------
PCON  DATA 087H      
CLKREG  DATA 08FH

;-------------------- Keyboard control registers -----------------
GPMOD  DATA 09AH
GPLS  DATA 09BH
GPIEN  DATA 09CH
GPIF  DATA 09DH

;-------------------- SPI registers ------------------------------
SPSR DATA 0E8H
SPCR DATA 0E9H
SPDR DATA 0EAH

SPIF  BIT 0EFH
WCOL  BIT 0EEH
MODF  BIT 0EDH
TXE   BIT 0ECH
SSIG  BIT 0EAH
DISSO BIT 0E9H
ENH   BIT 0E8H

;-------------------- Flash Data registers-----------------------
MEMCON  DATA 096H

;-------------------- Comparator registers-----------------------
ACSRA  DATA 097H
ACSRB  DATA 09FH
AREF  DATA 0AFH

;-------------------- ADC / DAC  registers-----------------------
DADC  DATA 0D9H
DADI  DATA 0DAH
DADL  DATA 0DCH
DADH  DATA 0DDH




$RESTORE
