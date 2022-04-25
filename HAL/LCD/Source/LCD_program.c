/*
 * LCD_program.c
 *
 *  Created on: Apr 23, 2022
 *      Author: raya
 */


#include<util/delay.h>

#include"../../../LIB/STDTYPES.h"
#include"../../../LIB/Bit_Math.h"


#include"../../../MCAL/DIO/Include/DIO_Interface.h"

#include"../Include/LCD_interface.h"



void LCD_VoidSendCom(u8 Local_Command){
/*select RS -> 0 to send command */
	DIO_VoidSetPinValue(LCD_PORT_Control,LCD_PIN_RS,DIO_LOW);
/*select RW ->0 to write */
	DIO_VoidSetPinValue(LCD_PORT_Control,LCD_PIN_RW,DIO_LOW);
/*set Enable */
	DIO_VoidSetPinValue(LCD_PORT_Control,LCD_PIN_E,DIO_HIGH);
/*send data*/
	DIO_VoidSetPortValue(LCD_PORT_Data,Local_Command);
/*clear Enable */
	DIO_VoidSetPinValue(LCD_PORT_Control,LCD_PIN_E,DIO_LOW);


}


void LCD_VoidSendChar(u8 Local_Char){


	/*select RS -> 0 to send data */
		DIO_VoidSetPinValue(LCD_PORT_Control,LCD_PIN_RS,DIO_HIGH);
	/*select RW ->0 to write */
		DIO_VoidSetPinValue(LCD_PORT_Control,LCD_PIN_RW,DIO_LOW);
	/*set Enable */
		DIO_VoidSetPinValue(LCD_PORT_Control,LCD_PIN_E,DIO_HIGH);
	/*send data*/
		DIO_VoidSetPortValue(LCD_PORT_Data,Local_Char);
	/*clear Enable */
		DIO_VoidSetPinValue(LCD_PORT_Control,LCD_PIN_E,DIO_LOW);


}


void LCD_Void_Init(void){
	DIO_VoidSetPortDir(LCD_PORT_Data,DIO_REG_OUTPUT);
	DIO_VoidSetPinDir(LCD_PORT_Control,LCD_PIN_RS,DIO_HIGH);
	DIO_VoidSetPinDir(LCD_PORT_Control,LCD_PIN_RW,DIO_HIGH);
	DIO_VoidSetPinDir(LCD_PORT_Control,LCD_PIN_E,DIO_HIGH);

	_delay_ms(30);
	LCD_VoidSendCom(Function_Set);
	_delay_ms(1);
	LCD_VoidSendCom(Display_Control);
	_delay_ms(1);
	LCD_VoidSendCom(CLEAR_MODE);
	_delay_ms(2);
}

