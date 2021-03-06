;*H***************************************************************************
; NAME: at89lp51rc2.inc           
;----------------------------------------------------------------------------
; PURPOSE: SFR Description file for AT89LP51RC2 product on C51ASM assembler
;*****************************************************************************

$SAVE    
$NOLIST 
$NOMOD51

P0      DATA    80H
;---  P0 Bits ---
P0_0	BIT	80H
P0_1	BIT	81H
P0_2	BIT	82H
P0_3	BIT	83H
P0_4	BIT	84H
P0_5	BIT	85H
P0_6	BIT	86H
P0_7	BIT	87H

TCON	DATA	88H
;---  TCON Bits ---
TF1     BIT     8FH
TR1     BIT     8EH
TF0     BIT     8DH
TR0     BIT     8CH
IE1     BIT     8BH
IT1     BIT     8AH
IE0     BIT     89H
IT0     BIT     88H

P1      DATA    90H
;---  P1 Bits ---
T2	BIT	90H
T2EX	BIT	91H
ECI	BIT	92H
CEX0	BIT	93H
CEX1	BIT	94H
CEX2	BIT	95H
CEX3	BIT	96H
CEX4	BIT	97H
SSB	BIT	91H
MISO	BIT	95H
SCK	BIT	96H
MOSI	BIT	97H
;---  P1 Bits ---
P1_0	BIT	90H
P1_1	BIT	91H
P1_2	BIT	92H
P1_3	BIT	93H
P1_4	BIT	94H
P1_5	BIT	95H
P1_6	BIT	96H
P1_7	BIT	97H

SCON    DATA    98H
;--- SCON Bits ----
SM0     BIT     9FH
SM1     BIT     9EH
SM2     BIT     9DH
REN     BIT     9CH
TB8     BIT     9BH
RB8     BIT     9AH
TI      BIT     99H
RI      BIT     98H

P2      DATA    0A0H
;---  P2 Bits ---
P2_0	BIT	0A0H
P2_1	BIT	0A1H
P2_2	BIT	0A2H
P2_3	BIT	0A3H
P2_4	BIT	0A4H
P2_5	BIT	0A5H
P2_6	BIT	0A6H
P2_7	BIT	0A7H

IEN0    DATA    0A8H
;--- IEN0 Bits -----
EA   	BIT	0AFH
EC   	BIT	0AEH
ET2  	BIT	0ADH
ES  	BIT	0ACH
ET1 	BIT	0ABH
EX1  	BIT	0AAH
ET0 	BIT	0A9H
EX0	BIT	0A8H

P3      DATA    0B0H
;--- P3 Bits -------
RXD     BIT     0B0H
TXD     BIT     0B1H
INT0    BIT     0B2H
INT1    BIT     0B3H
T0      BIT     0B4H
T1      BIT     0B5H
WR      BIT     0B6H
RD      BIT     0B7H
;---  P3 Bits ---
P3_0	BIT	0B0H
P3_1	BIT	0B1H
P3_2	BIT	0B2H
P3_3	BIT	0B3H
P3_4	BIT	0B4H
P3_5	BIT	0B5H
P3_6	BIT	0B6H
P3_7	BIT	0B7H

IPL0	DATA	0B8H
;--- IPL0 Bits -----
PPCL   	BIT	0BEH
PT2L  	BIT	0BDH
PSL  	BIT	0BCH
PT1L 	BIT	0BBH
PX1L  	BIT	0BAH
PT0L 	BIT	0B9H
PX0L	BIT	0B8H

P4      DATA    0C0H
;---  P4 Bits ---
SCL	BIT	0C0H
SDA	BIT	0C1H
ALE	BIT	0C4H
PSENB	BIT	0C5H
;---  P4 Bits ---
P4_0	BIT	0C0H
P4_1	BIT	0C1H
P4_2	BIT	0C2H
P4_3	BIT	0C3H
P4_4	BIT	0C4H
P4_5	BIT	0C5H
P4_6	BIT	0C6H
P4_7	BIT	0C7H

T2CON   DATA    0C8H
;--- T2CON bits ----
TF2     BIT     0CFH
EXF2    BIT     0CEH
RCLK    BIT     0CDH
TCLK    BIT     0CCH
EXEN2   BIT     0CBH
TR2     BIT     0CAH
C_T2    BIT     0C9H
CP_RL2  BIT     0C8H

PSW     DATA    0D0H
;--- PSW bits ------
CY      BIT     0D7H
AC      BIT     0D6H
F0      BIT     0D5H
RS1     BIT     0D4H
RS0     BIT     0D3H
OV      BIT     0D2H
P       BIT     0D0H

CCON	DATA	0D8H
;--- CCON bits -----
CF   	BIT     0DFH
CR   	BIT     0DEH
CCF4  	BIT     0DCH
CCF3  	BIT     0DBH
CCF2  	BIT     0DAH
CCF1  	BIT     0D9H
CCF0  	BIT     0D8H

ACC     DATA    0E0H
B       DATA    0F0H

SP      DATA    081H
DPL     DATA    082H
DPH     DATA    083H
DP0L    DATA    082H
DP0H    DATA    083H
;CKSEL	DATA	085H
;OSCCON	DATA	086H
PCON    DATA    087H

TMOD    DATA    089H
TL0     DATA    08AH
TL1     DATA    08BH
TH0     DATA    08CH
TH1     DATA    08DH
AUXR	DATA	08EH
CKCON0	DATA	08Fh

TCONB	DATA	091H
BMSEL	DATA	092H
SSCON	DATA	093H
SSCS	DATA	094H
SSDAT	DATA	095H
SSADR	DATA	096H
CKRL	DATA	097H

SBUF    DATA    099H
BRL  	DATA	09AH
BDRCON  DATA 	09BH
KBLS	DATA	09CH
KBE	DATA	09DH
KBF	DATA	09EH
KBMO	DATA	09FH

DPCF	DATA	0A1H
AUXR1	DATA	0A2H
ACSRA	DATA	0A3H
DADC	DATA	0A4H
DADI	DATA	0A5H
WDTRST	DATA	0A6H
WDTPRG 	DATA	0A7H 

SADDR	DATA	0A9H
ACSRB	DATA	0ABH
DADL	DATA	0ACH
DADH	DATA	0ADH
CLKEG	DATA	0AEH
CKCON1	DATA	0AFH

IEN1	DATA	0B1H
IPL1	DATA	0B2H
IPH1	DATA	0B3H
IPH0	DATA	0B7H

SADEN	DATA	0B9H
AREF	DATA	0BDH
P4M0	DATA	0BEH
P4M1	DATA	0BFH

SPCON	DATA    0C3H
SPSTA	DATA    0C4H
SPDAT	DATA    0C5H
P3M0	DATA    0C6H
P3M1	DATA    0C7H

T2MOD	DATA    0C9h
RCAP2L  DATA    0CAH
RCAP2H  DATA    0CBH
TL2     DATA    0CCH
TH2     DATA    0CDH
P2M0	DATA    0CEH
P2M1	DATA    0CFH
	
FCON   	DATA    0D1H
EECON	DATA	0D2H
DPLB   	DATA    0D4H
DPHB	DATA	0D5H
DP1L   	DATA    0D4H
DP1H	DATA	0D5H
P1M0	DATA    0D6H
P1M1	DATA    0D7H

CMOD	DATA	0D9H
CCAPM0	DATA	0DAH
CCAPM1	DATA	0DBH
CCAPM2	DATA	0DCH
CCAPM3	DATA	0DDH
CCAPM4	DATA	0DEH

AX	DATA	0E1H
DSPR	DATA	0E2H
FIRD	DATA	0E3H
MACL	DATA	0E4H
MACH	DATA	0E5H
P0M0	DATA	0E6H
P0M1	DATA	0E7H

CL	DATA	0E9H
CCAP0L	DATA	0EAH
CCAP1L	DATA	0EBH
CCAP2L	DATA	0ECH
CCAP3L	DATA	0EDH
CCAP4L	DATA	0EEH
SPX	DATA	0EFH

RL0	DATA	0F2H
RL1	DATA	0F3H
RH0	DATA	0F4H
RH1	DATA	0F5H
PAGE	DATA	0F6H
BX	DATA	0F7H

CH	DATA	0F9H
CCAP0H	DATA	0FAH
CCAP1H	DATA	0FBH
CCAP2H	DATA	0FCH
CCAP3H	DATA	0FDH
CCAP4H	DATA	0FEH


$RESTORE
