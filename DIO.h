/**************************************************/
/*   AUTHOR      : Hady Ahmed Farahat             */
/*   Description : DIO DRIVER Header File         */
/*   DATE        : 22 July 2023                   */
/*   VERSION     : V01                            */
/**************************************************/



#ifndef DIO_H_
#define DIO_H_
#include "../Utils.h"

/**************************************************/
/* Description : Definitions for DIO HIGH and LOW */

#define DIO_u8_HIGH            1
#define DIO_u8_LOW             0
#define DIO_u8_Tristate        2

/**************************************************/
/* Description : Definitions for DIO PORTS */

#define DIO_u8_PORTA            0
#define DIO_u8_PORTB            1
#define DIO_u8_PORTC            2
#define DIO_u8_PORTD            3


/******************************************************/
/* Description : Definitions for DIO OUTPUT and INPUT */

#define DIO_u8_OUTPUT          1
#define DIO_u8_INPUT           0


/**************************************************/
/* Description : PINS Definitions                 */
/*               PORT A PINS                      */

#define DIO_u8_PIN_0           0
#define DIO_u8_PIN_1           1
#define DIO_u8_PIN_2           2
#define DIO_u8_PIN_3           3
#define DIO_u8_PIN_4           4
#define DIO_u8_PIN_5           5
#define DIO_u8_PIN_6           6
#define DIO_u8_PIN_7           7

/*               PORT B PINS                      */

#define DIO_u8_PIN_8           8
#define DIO_u8_PIN_9           9
#define DIO_u8_PIN_10          10
#define DIO_u8_PIN_11          11
#define DIO_u8_PIN_12          12
#define DIO_u8_PIN_13          13
#define DIO_u8_PIN_14          14
#define DIO_u8_PIN_15          15

/*               PORT C PINS                      */

#define DIO_u8_PIN_16         16
#define DIO_u8_PIN_17         17
#define DIO_u8_PIN_18         18
#define DIO_u8_PIN_19         19
#define DIO_u8_PIN_20         20
#define DIO_u8_PIN_21         21
#define DIO_u8_PIN_22         22
#define DIO_u8_PIN_23         23

/*               PORT D PINS                      */

#define DIO_u8_PIN_24         24
#define DIO_u8_PIN_25         25
#define DIO_u8_PIN_26         26
#define DIO_u8_PIN_27         27
#define DIO_u8_PIN_28         28
#define DIO_u8_PIN_29         29
#define DIO_u8_PIN_30         30
#define DIO_u8_PIN_31         31

/**************************************************/

typedef unsigned char u8;
// PORT A
// these addresses were found in register summary page  327
// PORTA 3B
// DDRA  3A
// PINA  39
#define PORTA  (*(volatile unsigned char *)0x3B)
#define DDRA   (*(volatile unsigned char *)0x3A)
#define PINA   (*(volatile unsigned char *)0x39)
// PORT B
// PortB 0x38
// DDRB  0x37
// PINB  0x36
#define PORTB (*(volatile unsigned char *)0x38)
#define DDRB  (*(volatile unsigned char *)0x37)
#define PINB  (*(volatile unsigned char *)0x36)

// PORTC
// PORTC 0x35
// DDRC  0x34
// PINC  0x33
#define PORTC (*(volatile unsigned char *)0x35)
#define DDRC  (*(volatile unsigned char*)0x34)
#define PINC  (*(volatile unsigned char *)0x33)


//PORTD
//PORTD 0x32
//DDRD  0x31
//PIND  0x30
#define  PORTD (*(volatile unsigned char *)0x32)
#define  DDRD  (*(volatile unsigned char *)0x31)
#define  PIND  (*(volatile unsigned char *)0x30)

#define  PORTA_Add   ((volatile unsigned char *)0x3B)
#define  PORTB_Add   ((volatile unsigned char *)0x38)
#define  PORTC_Add   ((volatile unsigned char *)0x35)
#define  PORTD_Add   ((volatile unsigned char *)0x32)


//set pin directions 
void DIO_VOID_SetPinDirection      (u8 PortID, u8 Pin, u8 Direction);
//set pin value
void DIO_VOID_SetPinValue          (u8 PortID, u8 Pin, u8 val);



// get pin value 
u8 DIO_u8GetPinValue               (u8 PortID,u8 Pin);
// get pin value with void return
void DIO_Void_GetPinValue          (u8 PortID,u8 Pin, u8* ptr);

//set port direction
void DIO_VOID_SetPortDirection     (u8 PortID,u8 Direction);
// get port value
void DIO_VOID_SetPortValue         (u8 PortID,u8 portVal);

// initialize by iterating over array
void DIO_VOID_InitPins_ByArray();

// initialize pins by bit concatanation Method;
void DIO_VOID_InitPins_ByConc();


#endif /* DIO_H_ */