

#ifndef _STC8H_H_
#define _STC8H_H_
#define _nop_() __asm nop __endasm
#define code __code
#define  bit __bit
#define interrupt __interrupt
#define xdata __xdata
#define idata __idata
#define using __using
#define at __at
#define  asm __asm
#define endasm  __endasm

 /*  BYTE Register  */
__sfr __at(0x80) P0;
/*  BIT Register  */
/* P0 */
__sbit __at(0x80) P0_0;
__sbit __at(0x81) P0_1;
__sbit __at(0x82) P0_2;
__sbit __at(0x83) P0_3;
__sbit __at(0x84) P0_4;
__sbit __at(0x85) P0_5;
__sbit __at(0x86) P0_6;
__sbit __at(0x87) P0_7;

__sfr __at(0x81) SP;
__sfr __at(0x82) DPL;
__sfr __at(0x83) DPH;
__sfr __at(0x84) S4CON;
__sfr __at(0x85) S4BUF;

__sfr __at(0x87) PCON;
__sfr __at(0x88) TCON;
/*  TCON  */
__sbit __at(0x88) IT0;
__sbit __at(0x89) IE0;
__sbit __at(0x8A) IT1;
__sbit __at(0x8B) IE1;
__sbit __at(0x8C) TR0;
__sbit __at(0x8D) TF0;
__sbit __at(0x8E) TR1;
__sbit __at(0x8F) TF1;


__sfr __at(0x89) TMOD;
__sfr __at(0x8A) TL0;
__sfr __at(0x8B) TL1;
__sfr __at(0x8C) TH0;
__sfr __at(0x8D) TH1;
__sfr __at(0x8E) AUXR;
__sfr __at(0x8F) INTCLKO;

__sfr __at(0x90) P1;
/* P1 */
__sbit __at(0x90) P1_0;
__sbit __at(0x91) P1_1;
__sbit __at(0x92) P1_2;
__sbit __at(0x93) P1_3;
__sbit __at(0x94) P1_4;
__sbit __at(0x95) P1_5;
__sbit __at(0x96) P1_6;
__sbit __at(0x97) P1_7;

__sfr __at(0x91) P1M1;
__sfr __at(0x92) P1M0;
__sfr __at(0x93) P0M1;
__sfr __at(0x94) P0M0;
__sfr __at(0x95) P2M1;
__sfr __at(0x96) P2M0;

__sfr __at(0x98) SCON;
/*  SCON  */
__sbit __at(0x98) RI;
__sbit __at(0x99) TI;
__sbit __at(0x9A) RB8;
__sbit __at(0x9B) TB8;
__sbit __at(0x9C) REN;
__sbit __at(0x9D) SM2;
__sbit __at(0x9E) SM1;
__sbit __at(0x9F) SM0;

__sfr __at(0x99) SBUF;
__sfr __at(0x9a) S2CON;
__sfr __at(0x9b) S2BUF;
__sfr __at(0x9d) IRCBAND;
__sfr __at(0x9e) LIRTRIM;
__sfr __at(0x9f) IRTRIM;

__sfr __at(0xA0) P2;
/* P2 */
__sbit __at(0xA0) P2_0;
__sbit __at(0xA1) P2_1;
__sbit __at(0xA2) P2_2;
__sbit __at(0xA3) P2_3;
__sbit __at(0xA4) P2_4;
__sbit __at(0xA5) P2_5;
__sbit __at(0xA6) P2_6;
__sbit __at(0xA7) P2_7;

__sfr __at(0xA2) P_SW1;
__sfr __at(0xA8) IE;
/*  IE   */
__sbit __at(0xA8) EX0;
__sbit __at(0xA9) ET0;
__sbit __at(0xAA) EX1;
__sbit __at(0xAB) ET1;
__sbit __at(0xAC) ES;
__sbit __at(0xAD) EADC;
__sbit __at(0xAE) ELVD;
__sbit __at(0xAF) EA;


__sfr __at(0xA9) SADDR;
__sfr __at(0xAA) WKTCL;
__sfr __at(0xAB) WKTCH;
__sfr __at(0xAC) S3CON;
__sfr __at(0xAD) S3BUF;
__sfr __at(0xAE) TA;
__sfr __at(0xAF) IE2;

__sfr __at(0xB0) P3;
/*  P3  */
__sbit __at(0xB0) P3_0;
__sbit __at(0xB1) P3_1;
__sbit __at(0xB2) P3_2;
__sbit __at(0xB3) P3_3;
__sbit __at(0xB4) P3_4;
__sbit __at(0xB5) P3_5;
__sbit __at(0xB6) P3_6;
__sbit __at(0xB7) P3_7;

__sfr __at(0xB1) P3M1;
__sfr __at(0xB2) P3M0;
__sfr __at(0xB3) P4M1;
__sfr __at(0xB4) P4M0;
__sfr __at(0xB5) IP2;
__sfr __at(0xB6) IP2H;
__sfr __at(0xB7) IPH;
__sfr __at(0xB8) IP;
/*  IP   */
__sbit __at(0xB8) PX0;
__sbit __at(0xB9) PT0;
__sbit __at(0xBA) PX1;
__sbit __at(0xBB) PT1;
__sbit __at(0xBC) PS;
__sbit __at(0xBD) PADC;
__sbit __at(0xBE) PLVD;
__sbit __at(0xBF) PPCA;

__sfr __at(0xB9) SADEN;
__sfr __at(0xBA) P_SW2;
__sfr __at(0xBC) ADC_CONTR;
__sfr __at(0xBD) ADC_RES;
__sfr __at(0xBE) ADC_RESL;

__sfr __at(0xC0) P4;
/*  P3  */
__sbit __at(0xC0) P4_0;
__sbit __at(0xC1) P4_1;
__sbit __at(0xC2) P4_2;
__sbit __at(0xC3) P4_3;
__sbit __at(0xC4) P4_4;
__sbit __at(0xC5) P4_5;
__sbit __at(0xC6) P4_6;
__sbit __at(0xC7) P4_7;

__sfr __at(0xC1) WDT_CONTR;
__sfr __at(0xC2) IAP_DATA;
__sfr __at(0xC3) IAP_ADDRH;
__sfr __at(0xC4) IAP_ADDRL;
__sfr __at(0xC5) IAP_CMD;
__sfr __at(0xC6) IAP_TRIG;
__sfr __at(0xC7) IAP_CONTR;
__sfr __at(0xC8) P5;
__sbit __at(0xC8) P5_0;
__sbit __at(0xC9) P5_1;
__sbit __at(0xCA) P5_2;
__sbit __at(0xCB) P5_3;
__sbit __at(0xCC) P5_4;
__sbit __at(0xCD) P5_5;
__sbit __at(0xCE) P5_6;
__sbit __at(0xCF) P5_7;

__sfr __at(0xC9) P5M1;
__sfr __at(0xCA) P5M0;
__sfr __at(0xCB) P6M1;
__sfr __at(0xCC) P6M0;
__sfr __at(0xCD) SPSTAT;
__sfr __at(0xCE) SPCTL;
__sfr __at(0xCF) SPDAT;



__sfr __at(0xD0) PSW;
/*  PSW   */
__sbit __at(0xD0) P;
__sbit __at(0xD1) F1;
__sbit __at(0xD2) OV;
__sbit __at(0xD3) RS0;
__sbit __at(0xD4) RS1;
__sbit __at(0xD5) F0;
__sbit __at(0xD6) AC;
__sbit __at(0xD7) CY;

__sfr __at(0xD1) T4T3M;
__sfr __at(0xD2) T4H;
__sfr __at(0xD3) T4L;
__sfr __at(0xD4) T3H;
__sfr __at(0xD5) T3L;
__sfr __at(0xD6) T2H;
__sfr __at(0xD7) T2L;

__sfr __at(0xDC) USBCLK;
__sfr __at(0xDE) ADCCFG;
__sfr __at(0xDF) IP3;

__sfr __at(0xE0) ACC;
__sfr __at(0xE1) P7M1;
__sfr __at(0xE2) P7M0;
__sfr __at(0xE3) DPS;
__sfr __at(0xE4) DPL1;
__sfr __at(0xE5) DPH1;
__sfr __at(0xE6) CMPCR1;
__sfr __at(0xE7) CMPCR2;
__sfr __at(0xE8) P6;
__sbit __at(0xE8) P6_0;
__sbit __at(0xE9) P6_1;
__sbit __at(0xEa) P6_2;
__sbit __at(0xEb) P6_3;
__sbit __at(0xEc) P6_4;
__sbit __at(0xEd) P6_5;
__sbit __at(0xEe) P6_6;
__sbit __at(0xEf) P6_7;

__sfr __at(0xEC) USBDAT;
__sfr __at(0xEE) IP3H;
__sfr __at(0xEF) AUXINTIF;


__sfr __at(0xF0) B;
__sfr __at(0xF4) USBCON;
__sfr __at(0xF5) IAP_TPS;
__sfr __at(0xF8) P7;
__sbit __at(0xF8) P7_0;
__sbit __at(0xF9) P7_1;
__sbit __at(0xFa) P7_2;
__sbit __at(0xFb) P7_3;
__sbit __at(0xFc) P7_4;
__sbit __at(0xFd) P7_5;
__sbit __at(0xFe) P7_6;
__sbit __at(0xFf) P7_7;
__sfr __at(0xFC) USBADR;
__sfr __at(0xFF) RSTCFG;














/* BIT definitions for bits that are not directly accessible */
/* PCON bits */
#define IDL             0x01
#define PD              0x02
#define GF0             0x04
#define GF1             0x08
#define SMOD            0x80

/* TMOD bits */
#define T0_M0           0x01
#define T0_M1           0x02
#define T0_CT           0x04
#define T0_GATE         0x08
#define T1_M0           0x10
#define T1_M1           0x20
#define T1_CT           0x40
#define T1_GATE         0x80

#define T0_MASK         0x0F
#define T1_MASK         0xF0

/* Interrupt numbers: address = (number * 8) + 3 */
#define IE0_VECTOR      0       /* 0x03 external interrupt 0 */
#define TF0_VECTOR      1       /* 0x0b timer 0 */
#define IE1_VECTOR      2       /* 0x13 external interrupt 1 */
#define TF1_VECTOR      3       /* 0x1b timer 1 */
#define SI0_VECTOR      4       /* 0x23 serial port 0 */


//�������⹦�ܼĴ���λ����չRAM����
//������Щ�Ĵ���,���Ƚ�P_SW2��BIT7����Ϊ1,�ſ�������д
#define     CKSEL       (*(unsigned char        volatile    xdata       *)0xfe00)
#define     CLKDIV      (*(unsigned char        volatile    xdata       *)0xfe01)
#define     HIRCCR      (*(unsigned char        volatile    xdata       *)0xfe02)
#define     XOSCCR      (*(unsigned char        volatile    xdata       *)0xfe03)
#define     IRC32KCR    (*(unsigned char        volatile    xdata       *)0xfe04)
#define     MCLKOCR     (*(unsigned char        volatile    xdata       *)0xfe05)

#define     P0PU        (*(unsigned char        volatile    xdata       *)0xfe10)
#define     P1PU        (*(unsigned char        volatile    xdata       *)0xfe11)
#define     P2PU        (*(unsigned char        volatile    xdata       *)0xfe12)
#define     P3PU        (*(unsigned char        volatile    xdata       *)0xfe13)
#define     P4PU        (*(unsigned char        volatile    xdata       *)0xfe14)
#define     P5PU        (*(unsigned char        volatile    xdata       *)0xfe15)
#define     P6PU        (*(unsigned char        volatile    xdata       *)0xfe16)
#define     P7PU        (*(unsigned char        volatile    xdata       *)0xfe17)
#define     P0NCS       (*(unsigned char        volatile    xdata       *)0xfe18)
#define     P1NCS       (*(unsigned char        volatile    xdata       *)0xfe19)
#define     P2NCS       (*(unsigned char        volatile    xdata       *)0xfe1a)
#define     P3NCS       (*(unsigned char        volatile    xdata       *)0xfe1b)
#define     P4NCS       (*(unsigned char        volatile    xdata       *)0xfe1c)
#define     P5NCS       (*(unsigned char        volatile    xdata       *)0xfe1d)
#define     P6NCS       (*(unsigned char        volatile    xdata       *)0xfe1e)
#define     P7NCS       (*(unsigned char        volatile    xdata       *)0xfe1f)
#define     P0SR        (*(unsigned char        volatile    xdata       *)0xfe20)
#define     P1SR        (*(unsigned char        volatile    xdata       *)0xfe21)
#define     P2SR        (*(unsigned char        volatile    xdata       *)0xfe22)
#define     P3SR        (*(unsigned char        volatile    xdata       *)0xfe23)
#define     P4SR        (*(unsigned char        volatile    xdata       *)0xfe24)
#define     P5SR        (*(unsigned char        volatile    xdata       *)0xfe25)
#define     P6SR        (*(unsigned char        volatile    xdata       *)0xfe26)
#define     P7SR        (*(unsigned char        volatile    xdata       *)0xfe27)
#define     P0DR        (*(unsigned char        volatile    xdata       *)0xfe28)
#define     P1DR        (*(unsigned char        volatile    xdata       *)0xfe29)
#define     P2DR        (*(unsigned char        volatile    xdata       *)0xfe2a)
#define     P3DR        (*(unsigned char        volatile    xdata       *)0xfe2b)
#define     P4DR        (*(unsigned char        volatile    xdata       *)0xfe2c)
#define     P5DR        (*(unsigned char        volatile    xdata       *)0xfe2d)
#define     P6DR        (*(unsigned char        volatile    xdata       *)0xfe2e)
#define     P7DR        (*(unsigned char        volatile    xdata       *)0xfe2f)
#define     P0IE        (*(unsigned char        volatile    xdata       *)0xfe30)
#define     P1IE        (*(unsigned char        volatile    xdata       *)0xfe31)
#define     P3IE        (*(unsigned char        volatile    xdata       *)0xfe33)
#define     I2CCFG      (*(unsigned char        volatile    xdata       *)0xfe80)
#define     I2CMSCR     (*(unsigned char        volatile    xdata       *)0xfe81)
#define     I2CMSST     (*(unsigned char        volatile    xdata       *)0xfe82)
#define     I2CSLCR     (*(unsigned char        volatile    xdata       *)0xfe83)
#define     I2CSLST     (*(unsigned char        volatile    xdata       *)0xfe84)
#define     I2CSLADR    (*(unsigned char        volatile    xdata       *)0xfe85)
#define     I2CTXD      (*(unsigned char        volatile    xdata       *)0xfe86)
#define     I2CRXD      (*(unsigned char        volatile    xdata       *)0xfe87)
#define     I2CMSAUX    (*(unsigned char        volatile    xdata       *)0xfe88)
#define     TM2PS       (*(unsigned char        volatile    xdata       *)0xfea2)
#define     TM3PS       (*(unsigned char        volatile    xdata       *)0xfea3)
#define     TM4PS       (*(unsigned char        volatile    xdata       *)0xfea4)
#define     ADCTIM      (*(unsigned char        volatile    xdata       *)0xfea8)

#define     PWMA_ETRPS  (*(unsigned char volatile xdata *)0xfeb0)
#define     PWMA_ENO    (*(unsigned char volatile xdata *)0xfeb1)
#define     PWMA_PS     (*(unsigned char volatile xdata *)0xfeb2)
#define     PWMA_IOAUX  (*(unsigned char volatile xdata *)0xfeb3)
#define     PWMB_ETRPS  (*(unsigned char volatile xdata *)0xfeb4)
#define     PWMB_ENO    (*(unsigned char volatile xdata *)0xfeb5)
#define     PWMB_PS     (*(unsigned char volatile xdata *)0xfeb6)
#define     PWMB_IOAUX  (*(unsigned char volatile xdata *)0xfeb7)
#define     PWMA_CR1    (*(unsigned char volatile xdata *)0xfec0)
#define     PWMA_CR2    (*(unsigned char volatile xdata *)0xfec1)
#define     PWMA_SMCR   (*(unsigned char volatile xdata *)0xfec2)
#define     PWMA_ETR    (*(unsigned char volatile xdata *)0xfec3)
#define     PWMA_IER    (*(unsigned char volatile xdata *)0xfec4)
#define     PWMA_SR1    (*(unsigned char volatile xdata *)0xfec5)
#define     PWMA_SR2    (*(unsigned char volatile xdata *)0xfec6)
#define     PWMA_EGR    (*(unsigned char volatile xdata *)0xfec7)
#define     PWMA_CCMR1  (*(unsigned char volatile xdata *)0xfec8)
#define     PWMA_CCMR2  (*(unsigned char volatile xdata *)0xfec9)
#define     PWMA_CCMR3  (*(unsigned char volatile xdata *)0xfeca)
#define     PWMA_CCMR4  (*(unsigned char volatile xdata *)0xfecb)
#define     PWMA_CCER1  (*(unsigned char volatile xdata *)0xfecc)
#define     PWMA_CCER2  (*(unsigned char volatile xdata *)0xfecd)
#define     PWMA_CNTR   (*(unsigned int volatile xdata *)0xfece)
#define     PWMA_CNTRH  (*(unsigned char volatile xdata *)0xfece)
#define     PWMA_CNTRL  (*(unsigned char volatile xdata *)0xfecf)
#define     PWMA_PSCR   (*(unsigned int volatile xdata *)0xfed0)
#define     PWMA_PSCRH  (*(unsigned char volatile xdata *)0xfed0)
#define     PWMA_PSCRL  (*(unsigned char volatile xdata *)0xfed1)
#define     PWMA_ARR    (*(unsigned int volatile xdata *)0xfed2)
#define     PWMA_ARRH   (*(unsigned char volatile xdata *)0xfed2)
#define     PWMA_ARRL   (*(unsigned char volatile xdata *)0xfed3)
#define     PWMA_RCR    (*(unsigned char volatile xdata *)0xfed4)
#define     PWMA_CCR1   (*(unsigned int volatile xdata *)0xfed5)
#define     PWMA_CCR1H  (*(unsigned char volatile xdata *)0xfed5)
#define     PWMA_CCR1L  (*(unsigned char volatile xdata *)0xfed6)
#define     PWMA_CCR2   (*(unsigned int volatile xdata *)0xfed7)
#define     PWMA_CCR2H  (*(unsigned char volatile xdata *)0xfed7)
#define     PWMA_CCR2L  (*(unsigned char volatile xdata *)0xfed8)
#define     PWMA_CCR3   (*(unsigned int volatile xdata *)0xfed9)
#define     PWMA_CCR3H  (*(unsigned char volatile xdata *)0xfed9)
#define     PWMA_CCR3L  (*(unsigned char volatile xdata *)0xfeda)
#define     PWMA_CCR4   (*(unsigned int volatile xdata *)0xfedb)
#define     PWMA_CCR4H  (*(unsigned char volatile xdata *)0xfedb)
#define     PWMA_CCR4L  (*(unsigned char volatile xdata *)0xfedc)
#define     PWMA_BKR    (*(unsigned char volatile xdata *)0xfedd)
#define     PWMA_DTR    (*(unsigned char volatile xdata *)0xfede)
#define     PWMA_OISR   (*(unsigned char volatile xdata *)0xfedf)
#define     PWMB_CR1    (*(unsigned char volatile xdata *)0xfee0)
#define     PWMB_CR2    (*(unsigned char volatile xdata *)0xfee1)
#define     PWMB_SMCR   (*(unsigned char volatile xdata *)0xfee2)
#define     PWMB_ETR    (*(unsigned char volatile xdata *)0xfee3)
#define     PWMB_IER    (*(unsigned char volatile xdata *)0xfee4)
#define     PWMB_SR1    (*(unsigned char volatile xdata *)0xfee5)
#define     PWMB_SR2    (*(unsigned char volatile xdata *)0xfee6)
#define     PWMB_EGR    (*(unsigned char volatile xdata *)0xfee7)
#define     PWMB_CCMR1  (*(unsigned char volatile xdata *)0xfee8)
#define     PWMB_CCMR2  (*(unsigned char volatile xdata *)0xfee9)
#define     PWMB_CCMR3  (*(unsigned char volatile xdata *)0xfeea)
#define     PWMB_CCMR4  (*(unsigned char volatile xdata *)0xfeeb)
#define     PWMB_CCER1  (*(unsigned char volatile xdata *)0xfeec)
#define     PWMB_CCER2  (*(unsigned char volatile xdata *)0xfeed)
#define     PWMB_CNTR   (*(unsigned int volatile xdata *)0xfeee)
#define     PWMB_CNTRH  (*(unsigned char volatile xdata *)0xfeee)
#define     PWMB_CNTRL  (*(unsigned char volatile xdata *)0xfeef)
#define     PWMB_PSCR   (*(unsigned int volatile xdata *)0xfef0)
#define     PWMB_PSCRH  (*(unsigned char volatile xdata *)0xfef0)
#define     PWMB_PSCRL  (*(unsigned char volatile xdata *)0xfef1)
#define     PWMB_ARR    (*(unsigned int volatile xdata *)0xfef2)
#define     PWMB_ARRH   (*(unsigned char volatile xdata *)0xfef2)
#define     PWMB_ARRL   (*(unsigned char volatile xdata *)0xfef3)
#define     PWMB_RCR    (*(unsigned char volatile xdata *)0xfef4)
#define     PWMB_CCR1   (*(unsigned int volatile xdata *)0xfef5)
#define     PWMB_CCR1H  (*(unsigned char volatile xdata *)0xfef5)
#define     PWMB_CCR1L  (*(unsigned char volatile xdata *)0xfef6)
#define     PWMB_CCR2   (*(unsigned int volatile xdata *)0xfef7)
#define     PWMB_CCR2H  (*(unsigned char volatile xdata *)0xfef7)
#define     PWMB_CCR2L  (*(unsigned char volatile xdata *)0xfef8)
#define     PWMB_CCR3   (*(unsigned int volatile xdata *)0xfef9)
#define     PWMB_CCR3H  (*(unsigned char volatile xdata *)0xfef9)
#define     PWMB_CCR3L  (*(unsigned char volatile xdata *)0xfefa)
#define     PWMB_CCR4   (*(unsigned int volatile xdata *)0xfefb)
#define     PWMB_CCR4H  (*(unsigned char volatile xdata *)0xfefb)
#define     PWMB_CCR4L  (*(unsigned char volatile xdata *)0xfefc)
#define     PWMB_BKR    (*(unsigned char volatile xdata *)0xfefd)
#define     PWMB_DTR    (*(unsigned char volatile xdata *)0xfefe)
#define     PWMB_OISR   (*(unsigned char volatile xdata *)0xfeff)

typedef unsigned char   uint8;	//  8 bits 
typedef unsigned int  	uint16;	// 16 bits 
typedef unsigned long   uint32;	// 32 bits 


typedef signed char     int8;	//  8 bits 
typedef signed int      int16;	// 16 bits 

typedef signed long     int32;	// 32 bits 


typedef volatile int8   vint8;	//  8 bits 
typedef volatile int16  vint16;	// 16 bits 
typedef volatile int32  vint32;	// 32 bits 


typedef volatile uint8  vuint8;	//  8 bits 
typedef volatile uint16 vuint16;	// 16 bits 
typedef volatile uint32 vuint32;	// 32 bits 
typedef unsigned char BYTE;
typedef unsigned int WORD;
typedef unsigned long DWORD;
typedef unsigned char uint8_t;
typedef unsigned long UINT32;

typedef struct
{
    BYTE bmRequestType;
    BYTE bRequest;
    BYTE wValueL;
    BYTE wValueH;
    BYTE wIndexL;
    BYTE wIndexH;
    BYTE wLengthL;
    BYTE wLengthH;
} SETUP;
typedef struct
{
    BYTE bStage;
    WORD wResidue;
    BYTE* pData;
} EP0STAGE;
#define IRC48MCR (*(unsigned char volatile xdata *)0xfe07)
#define FADDR 0
#define POWER 1
#define INTRIN1 2
#define EP5INIF 0x20
#define EP4INIF 0x10
#define EP3INIF 0x08
#define EP2INIF 0x04
#define EP1INIF 0x02
#define EP0IF 0x01
#define INTROUT1 4
#define EP5OUTIF 0x20
#define EP4OUTIF 0x10
#define EP3OUTIF 0x08
#define EP2OUTIF 0x04
#define EP1OUTIF 0x02
#define INTRUSB 6
#define SOFIF 0x08
#define RSTIF 0x04
#define RSUIF 0x02
#define SUSIF 0x01
#define INTRIN1E 7
#define EP5INIE 0x20
#define EP4INIE 0x10
#define EP3INIE 0x08
#define EP2INIE 0x04
#define EP1INIE 0x02
#define EP0IE 0x01
#define INTROUT1E 9
#define EP5OUTIE 0x20
#define EP4OUTIE 0x10
#define EP3OUTIE 0x08
#define EP2OUTIE 0x04
#define EP1OUTIE 0x02
#define INTRUSBE 11
#define SOFIE 0x08
#define RSTIE 0x04
#define RSUIE 0x02
#define SUSIE 0x01
#define FRAME1 12
#define FRAME2 13
#define INDEX 14
#define INMAXP 16
#define CSR0 17
#define SSUEND 0x80
#define SOPRDY 0x40
#define SDSTL 0x20
#define SUEND 0x10
#define DATEND 0x08
#define STSTL 0x04
#define IPRDY 0x02
#define OPRDY 0x01
#define INCSR1 17
#define INCLRDT 0x40
#define INSTSTL 0x20
#define INSDSTL 0x10
#define INFLUSH 0x08
#define INUNDRUN 0x04
#define INFIFONE 0x02
#define INIPRDY 0x01
#define INCSR2 18
#define INAUTOSET 0x80
#define INISO 0x40
#define INMODEIN 0x20
#define INMODEOUT 0x00
#define INENDMA 0x10
#define INFCDT 0x08
#define OUTMAXP 19
#define OUTCSR1 20
#define OUTCLRDT 0x80
#define OUTSTSTL 0x40
#define OUTSDSTL 0x20
#define OUTFLUSH 0x10
#define OUTDATERR 0x08
#define OUTOVRRUN 0x04
#define OUTFIFOFUL 0x02
#define OUTOPRDY 0x01
#define OUTCSR2 21
#define OUTAUTOCLR 0x80
#define OUTISO 0x40
#define OUTENDMA 0x20
#define OUTDMAMD 0x10
#define COUNT0 22
#define OUTCOUNT1 22
#define OUTCOUNT2 23
#define FIFO0 32
#define FIFO1 33
#define FIFO2 34
#define FIFO3 35
#define FIFO4 36
#define FIFO5 37
#define UTRKCTL 48
#define UTRKSTS 49
#define EPIDLE 0
#define EPSTATUS 1
#define EPDATAIN 2
#define EPDATAOUT 3
#define EPSTALL -1
#define GET_STATUS 0x00
#define CLEAR_FEATURE 0x01
#define SET_FEATURE 0x03
#define SET_ADDRESS 0x05
#define GET_DESCRIPTOR 0x06
#define SET_DESCRIPTOR 0x07
#define GET_CONFIG 0x08
#define SET_CONFIG 0x09
#define GET_INTERFACE 0x0A
#define SET_INTERFACE 0x0B
#define SYNCH_FRAME 0x0C
#define GET_REPORT 0x01
#define GET_IDLE 0x02
#define GET_PROTOCOL 0x03
#define SET_REPORT 0x09
#define SET_IDLE 0x0A
#define SET_PROTOCOL 0x0B
#define DESC_DEVICE 0x01
#define DESC_CONFIG 0x02
#define DESC_STRING 0x03
#define DESC_HIDREPORT 0x22
#define STANDARD_REQUEST 0x00
#define CLASS_REQUEST 0x20
#define VENDOR_REQUEST 0x40
#define REQUEST_MASK 0x60

#define USB_REQ_RECIP_MASK      0x1F            /* bit mask of request recipient */
#define USB_REQ_RECIP_DEVICE    0x00
#define USB_REQ_RECIP_INTERF    0x01
#define USB_REQ_RECIP_ENDP      0x02



#endif /* _STC12_H_ */

