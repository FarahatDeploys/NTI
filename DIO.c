/*
 * CFile1.c
 *
 * Created: 7/21/2023 8:43:51 PM
 *  Author: Farahat
 */ 
#include "DIO.h"
#include "DIO_PinValus.h"

/*******										              ******/
// function : DIO_VOID_SetPinDirection
// sets a specific value for the DDRA for the pin either 1 or zero//
/*******									               	******/

void DIO_VOID_SetPinDirection      (u8 PortID, u8 Pin, u8 Direction){
	switch(PortID){
		case 0:
		Write_BIT(DDRA,Pin,Direction);
		break;
		
		case 1:
		Write_BIT(DDRB,Pin,Direction);
		break;
		
		case 2:
		Write_BIT(DDRC,Pin,Direction);
		break;
		
		case 3:
		Write_BIT(DDRD,Pin,Direction);
		break;
		
		default:
		break;
	}
}
/*******									               	******/






/*******										******/
// function : DIO_Set_PinValue
// sets a specific value for the pin either 1 or zero//
/*******										******/
void DIO_VOID_SetPinValue(u8 PortID, u8 Pin, u8 val){
		switch(PortID){
			case 0:
			Write_BIT(PORTA,Pin,val);
			break;
			
			case 1:
			Write_BIT(PORTB,Pin,val);
			break;
			
			case 2:
			Write_BIT(PORTC,Pin,val);
			break;
			
			case 3:
			Write_BIT(PORTD,Pin,val);
			break;
			
			default:
			break;
		}
	
}
/*******										******/



/*******	 DIO_u8GetPinValue					******/
// function : DIO_Get_PinValue
// gets value of the pin either 1 or zero             //
/*******										******/
u8 DIO_u8GetPinValue               (u8 PortID,u8 Pin){
	int pinValue ;
	switch(PortID){
		case 0:
		pinValue = READ_BIT(PORTA,Pin);
		break;
		
		case 1:
		pinValue = READ_BIT(PORTB,Pin);
		break;
		
		case 2:
		pinValue = READ_BIT(PORTC,Pin);
		break;
		
		case 3:
		pinValue = READ_BIT(PORTD,Pin);
		break;
		
		default:
		pinValue = -1;
		break;
	}
	return pinValue;
}
/*******										******/



/*******	 DIO_Void_GetPinValue					******/
// function : DIO_Get_PinValue
// gets value of the pin either 1 or zero             //
/*******										******/
void DIO_Void_GetPinValue          (u8 PortID,u8 Pin, u8* ptr){
	switch(PortID){
		case 0:
		* ptr = READ_BIT(PORTA,Pin);
		break;
		
		case 1:
		* ptr  = READ_BIT(PORTB,Pin);
		break;
		
		case 2:
		* ptr  = READ_BIT(PORTC,Pin);
		break;
		
		case 3:
		* ptr  = READ_BIT(PORTD,Pin);
		break;
		
		default:
		* ptr  = -1;
		break;
	}

}
/*******										******/



/*******	 DIO_VOID_SetPortDirection					******/
// function : DIO_Get_PinValue
// gets value of the pin either 1 or zero             //
/*******										******/

void DIO_VOID_SetPortDirection     (u8 PortID,u8 Direction){
	switch(PortID){
		case 0:
		DDRA = Direction;
		break;
		
		case 1:
		DDRB = Direction;
		break;
		
		case 2:
		DDRC = Direction;
		break;
		
		case 3:
		DDRD = Direction;
		break;
		
		default:
		break;
	}
	
}
/*******										******/


/*******	 DIO_VOID_SetPortValue					******/
// function : DIO_Get_PinValue
// gets value of the pin either 1 or zero             //
/*******										******/


void DIO_VOID_SetPortValue       (u8 PortID,u8 portVal){
	switch(PortID){
		case 0:
		PORTA = portVal;
		break;
		
		case 1:
		PORTB = portVal;
		break;
		
		case 2:
		PORTC = portVal;
		break;
		
		case 3:
		PORTD = portVal;
		break;
		
		default:
		break;
	}
}

void DIO_VOID_InitPins_ByArray(){
	int pinIndex1_8;
	int portIndex1_4;
	for (int i =0;i<NUMB_PINS;i++)
	{
		pinIndex1_8 = i%8;
		portIndex1_4 = i/8;
		switch(portIndex1_4){
			case 0:
			Write_BIT(DDRA,pinIndex1_8,pinsValus[i][0]);
			Write_BIT(PORTA,pinIndex1_8,pinsValus[i][1]);
			break;
			
			case 1:
			Write_BIT(DDRB,pinIndex1_8,pinsValus[i][0]);
			Write_BIT(PORTB,pinIndex1_8,pinsValus[i][1]);
			break;
			
			case 2:
			Write_BIT(DDRC,pinIndex1_8,pinsValus[i][0]);
			Write_BIT(PORTC,pinIndex1_8,pinsValus[i][1]);
			break;
			
			case 3:
			Write_BIT(DDRD,pinIndex1_8,pinsValus[i][0]);
			Write_BIT(PORTD,pinIndex1_8,pinsValus[i][1]);
			break;
		}
	}
}

void DIO_VOID_InitPins_ByConc(){
	// set direction and value for portA
	DDRA  = CONC_BIT(DIO_PIN_A_7_DIR,DIO_PIN_A_6_DIR,DIO_PIN_A_5_DIR,DIO_PIN_A_4_DIR,DIO_PIN_A_3_DIR,DIO_PIN_A_2_DIR,DIO_PIN_A_1_DIR,DIO_PIN_A_0_DIR);
	PORTA = CONC_BIT(DIO_PIN_A_7_Val,DIO_PIN_A_6_Val,DIO_PIN_A_5_Val,DIO_PIN_A_4_Val,DIO_PIN_A_3_Val,DIO_PIN_A_2_Val,DIO_PIN_A_1_Val,DIO_PIN_A_0_Val);
	
	// set direction and value for portB
	DDRB  = CONC_BIT(DIO_PIN_B_7_DIR,DIO_PIN_B_6_DIR,DIO_PIN_B_5_DIR,DIO_PIN_B_4_DIR,DIO_PIN_B_3_DIR,DIO_PIN_B_2_DIR,DIO_PIN_B_1_DIR,DIO_PIN_B_0_DIR);
	PORTB = CONC_BIT(DIO_PIN_B_7_Val,DIO_PIN_B_6_Val,DIO_PIN_B_5_Val,DIO_PIN_B_4_Val,DIO_PIN_B_3_Val,DIO_PIN_B_2_Val,DIO_PIN_B_1_Val,DIO_PIN_B_0_Val);
	
	// set direction and value for portC
	DDRC  = CONC_BIT(DIO_PIN_C_7_DIR,DIO_PIN_C_6_DIR,DIO_PIN_C_5_DIR,DIO_PIN_C_4_DIR,DIO_PIN_C_3_DIR,DIO_PIN_C_2_DIR,DIO_PIN_C_1_DIR,DIO_PIN_C_0_DIR);
	PORTC = CONC_BIT(DIO_PIN_C_7_Val,DIO_PIN_C_6_Val,DIO_PIN_C_5_Val,DIO_PIN_C_4_Val,DIO_PIN_C_3_Val,DIO_PIN_C_2_Val,DIO_PIN_C_1_Val,DIO_PIN_C_0_Val);

	// set direction and value for portD
	DDRD  = CONC_BIT(DIO_PIN_D_7_DIR,DIO_PIN_D_6_DIR,DIO_PIN_D_5_DIR,DIO_PIN_D_4_DIR,DIO_PIN_D_3_DIR,DIO_PIN_D_2_DIR,DIO_PIN_D_1_DIR,DIO_PIN_D_0_DIR);
	PORTD = CONC_BIT(DIO_PIN_D_7_Val,DIO_PIN_D_6_Val,DIO_PIN_D_5_Val,DIO_PIN_D_4_Val,DIO_PIN_D_3_Val,DIO_PIN_D_2_Val,DIO_PIN_D_1_Val,DIO_PIN_D_0_Val);
	
}