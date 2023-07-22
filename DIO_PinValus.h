/*
 * IncFile1.h
 *
 * Created: 7/22/2023 10:29:39 AM
 *  Author: Farahat
 */ 

#include "DIO.h"


#ifndef DIO_PinValus_H
#define DIO_PinValus_H


#define  NUMB_PINS 32
u8 pinsValus[NUMB_PINS][2] = {
	// PORT    A Values 
	// if pin is input & port is high --> pin is pull up 
	// if pin is input & port is low --> pin is nomral input
	{DIO_u8_INPUT,DIO_u8_LOW},   // Pin 0 Port A
	{DIO_u8_INPUT,DIO_u8_LOW},   // Pin 1 Port A
	{DIO_u8_INPUT,DIO_u8_LOW},   // Pin 2 Port A
	{DIO_u8_INPUT,DIO_u8_LOW},   // Pin 3 Port A
	{DIO_u8_INPUT,DIO_u8_LOW},   // Pin 4 Port A  // LED Green 
	{DIO_u8_INPUT,DIO_u8_LOW},   // Pin 5 Port A  // LED Blue
	{DIO_u8_INPUT,DIO_u8_LOW},   // Pin 6 Port A  // LED Yellow
	{DIO_u8_INPUT,DIO_u8_LOW},   // Pin 7 Port A
	
	// PORT    B Values 
	{DIO_u8_INPUT,DIO_u8_LOW},   // Pin 0 Port B
	{DIO_u8_INPUT,DIO_u8_LOW},   // Pin 1 Port B
	{DIO_u8_INPUT,DIO_u8_LOW},   // Pin 2 Port B
	{DIO_u8_INPUT,DIO_u8_LOW},   // Pin 3 Port B
	{DIO_u8_INPUT,DIO_u8_LOW},   // Pin 4 Port B
	{DIO_u8_INPUT,DIO_u8_LOW},   // Pin 5 Port B
	{DIO_u8_INPUT,DIO_u8_LOW},   // Pin 6 Port B
	{DIO_u8_INPUT,DIO_u8_LOW},   // Pin 7 Port B
	
	// PORT    C Values
	{DIO_u8_INPUT,DIO_u8_LOW},   // Pin 0 Port C
	{DIO_u8_INPUT,DIO_u8_LOW},   // Pin 1 Port C
	{DIO_u8_INPUT,DIO_u8_LOW},   // Pin 2 Port C
	{DIO_u8_INPUT,DIO_u8_LOW},   // Pin 3 Port C
	{DIO_u8_INPUT,DIO_u8_LOW},   // Pin 4 Port C
	{DIO_u8_INPUT,DIO_u8_LOW},   // Pin 5 Port C
	{DIO_u8_INPUT,DIO_u8_LOW},   // Pin 6 Port C
	{DIO_u8_INPUT,DIO_u8_LOW},   // Pin 7 Port C
	
	// PORT    D Values
	{DIO_u8_INPUT,DIO_u8_LOW},   // Pin 0 Port D
	{DIO_u8_INPUT,DIO_u8_LOW},   // Pin 1 Port D
	{DIO_u8_INPUT,DIO_u8_LOW},   // Pin 2 Port D
	{DIO_u8_INPUT,DIO_u8_LOW},   // Pin 3 Port D
	{DIO_u8_INPUT,DIO_u8_LOW},   // Pin 4 Port D
	{DIO_u8_INPUT,DIO_u8_LOW},   // Pin 5 Port D
	{DIO_u8_INPUT,DIO_u8_LOW},   // Pin 6 Port D
	{DIO_u8_INPUT,DIO_u8_LOW}	 // Pin 7 Port D
	
	
};
//////////////////// PORT A //////////////////////
// PORT  A  PIN VALUES :

// DIO_u8_INPUT
// DIO_u8_OUTPUT

#define DIO_PIN_A_0_DIR DIO_u8_INPUT
#define DIO_PIN_A_1_DIR DIO_u8_INPUT
#define DIO_PIN_A_2_DIR DIO_u8_INPUT
#define DIO_PIN_A_3_DIR DIO_u8_INPUT
#define DIO_PIN_A_4_DIR DIO_u8_INPUT
#define DIO_PIN_A_5_DIR DIO_u8_INPUT
#define DIO_PIN_A_6_DIR DIO_u8_INPUT
#define DIO_PIN_A_7_DIR DIO_u8_INPUT

// DIO_u8_HIGH
// DIO_u8_LOW

#define DIO_PIN_A_0_Val DIO_u8_LOW
#define DIO_PIN_A_1_Val DIO_u8_LOW
#define DIO_PIN_A_2_Val DIO_u8_LOW
#define DIO_PIN_A_3_Val DIO_u8_LOW
#define DIO_PIN_A_4_Val DIO_u8_LOW
#define DIO_PIN_A_5_Val DIO_u8_LOW
#define DIO_PIN_A_6_Val DIO_u8_LOW
#define DIO_PIN_A_7_Val DIO_u8_LOW
///////////////////////////////////////////////////

//////////////////// PORT B //////////////////////
// PORT  B  PIN VALUES :
#define DIO_PIN_B_0_DIR DIO_u8_INPUT
#define DIO_PIN_B_1_DIR DIO_u8_INPUT
#define DIO_PIN_B_2_DIR DIO_u8_INPUT
#define DIO_PIN_B_3_DIR DIO_u8_INPUT
#define DIO_PIN_B_4_DIR DIO_u8_INPUT
#define DIO_PIN_B_5_DIR DIO_u8_INPUT
#define DIO_PIN_B_6_DIR DIO_u8_INPUT
#define DIO_PIN_B_7_DIR DIO_u8_INPUT

// DIO_u8_HIGH
// DIO_u8_LOW
#define DIO_PIN_B_0_Val DIO_u8_LOW
#define DIO_PIN_B_1_Val DIO_u8_LOW
#define DIO_PIN_B_2_Val DIO_u8_LOW
#define DIO_PIN_B_3_Val DIO_u8_LOW
#define DIO_PIN_B_4_Val DIO_u8_LOW
#define DIO_PIN_B_5_Val DIO_u8_LOW
#define DIO_PIN_B_6_Val DIO_u8_LOW
#define DIO_PIN_B_7_Val DIO_u8_LOW
///////////////////////////////////////////////////


//////////////////// PORT C //////////////////////
// PORT  C  PIN VALUES :
// DIO_u8_INPUT
// DIO_u8_OUTPUT
#define DIO_PIN_C_0_DIR DIO_u8_INPUT
#define DIO_PIN_C_1_DIR DIO_u8_INPUT
#define DIO_PIN_C_2_DIR DIO_u8_INPUT
#define DIO_PIN_C_3_DIR DIO_u8_INPUT
#define DIO_PIN_C_4_DIR DIO_u8_INPUT
#define DIO_PIN_C_5_DIR DIO_u8_INPUT
#define DIO_PIN_C_6_DIR DIO_u8_INPUT
#define DIO_PIN_C_7_DIR DIO_u8_INPUT

// DIO_u8_HIGH
// DIO_u8_LOW

#define DIO_PIN_C_0_Val DIO_u8_LOW
#define DIO_PIN_C_1_Val DIO_u8_LOW
#define DIO_PIN_C_2_Val DIO_u8_LOW
#define DIO_PIN_C_3_Val DIO_u8_LOW
#define DIO_PIN_C_4_Val DIO_u8_LOW
#define DIO_PIN_C_5_Val DIO_u8_LOW
#define DIO_PIN_C_6_Val DIO_u8_LOW
#define DIO_PIN_C_7_Val DIO_u8_LOW
///////////////////////////////////////////////////



//////////////////// PORT D //////////////////////
// PORT D   PIN VALUES :

// DIO_u8_INPUT
// DIO_u8_OUTPUT
#define DIO_PIN_D_0_DIR DIO_u8_INPUT
#define DIO_PIN_D_1_DIR DIO_u8_INPUT
#define DIO_PIN_D_2_DIR DIO_u8_INPUT
#define DIO_PIN_D_3_DIR DIO_u8_INPUT
#define DIO_PIN_D_4_DIR DIO_u8_INPUT
#define DIO_PIN_D_5_DIR DIO_u8_INPUT
#define DIO_PIN_D_6_DIR DIO_u8_INPUT
#define DIO_PIN_D_7_DIR DIO_u8_INPUT


// DIO_u8_HIGH
// DIO_u8_LOW

#define DIO_PIN_D_0_Val DIO_u8_LOW
#define DIO_PIN_D_1_Val DIO_u8_LOW
#define DIO_PIN_D_2_Val DIO_u8_LOW
#define DIO_PIN_D_3_Val DIO_u8_LOW
#define DIO_PIN_D_4_Val DIO_u8_LOW
#define DIO_PIN_D_5_Val DIO_u8_LOW
#define DIO_PIN_D_6_Val DIO_u8_LOW
#define DIO_PIN_D_7_Val DIO_u8_LOW
///////////////////////////////////////////////////




#endif /* DIO_PinValus_H */