/*
 * LCD_program.c
 *
 *  Created on: Apr 23, 2022
 *      Author: raya
 */

/*
 * ********************************************************************************
 * ********** Author     : Sara Salma                               ***************
 * ********** Date       : 04/21/2022                               ***************
 * ********** Version    : 1.0 V (04/21/2020 )                      ***************
 * ********** Description: LCD_Program.c                            ***************
 * **********              Implementation function                  ***************
 * ********************************************************************************
 */


/*include LIB for use Delay */
#include <util/delay.h>

/*include file have typedef variables */
#include"../../../LIB/STDTYPES.h"
/* include file have some values i need */
#include"../../../LIB/DEFINE.h"

/*include peripheral DIO */
#include"../../../MCAL/DIO/Include/DIO_Interface.h"

#include"../Include/LCD_interface.h"

/*
###########################################################################
#Function Name : LCD_VoidSendCom                                          #
#Argument      : u8 Local_Command                                         #
#Return        : void                                                     #
#Type          : Implementation                                           #
#Description   : send command to LCD                                      #
###########################################################################
 */

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

/*
###########################################################################
#Function Name : LCD_VoidSendChar                                         #
#Argument      : u8 Local_Char                                            #
#Return        : void                                                     #
#Type          : Implementation                                           #
#Description   : send char to LCD                                         #
###########################################################################
 */
void LCD_VoidSendChar(u8 Local_Char)
{
	/*select RS -> 1 to send data */
	DIO_VoidSetPinValue(LCD_PORT_Control,LCD_PIN_RS,DIO_HIGH);

	/*select RW ->0 to write */
	DIO_VoidSetPinValue(LCD_PORT_Control,LCD_PIN_RW,DIO_LOW);
	/*first set data on port after that make pulse with Enable */
	/*send data*/
	DIO_VoidSetPortValue(LCD_PORT_Data,Local_Char);
	/*set Enable */
	DIO_VoidSetPinValue(LCD_PORT_Control,LCD_PIN_E,DIO_HIGH);
	_delay_ms(2);
	/*clear Enable */
	DIO_VoidSetPinValue(LCD_PORT_Control,LCD_PIN_E,DIO_LOW);
	_delay_ms(1);

}
/*
###########################################################################
#Function Name : LCD_Void_Init                                            #
#Argument      : void                                                     #
#Return        : void                                                     #
#Type          : Implementation                                           #
#Description   : initialization                                           #
###########################################################################
 */

void LCD_Void_Init(void)
{
	/* make LCD_PORT_Data OUTPUT */
	DIO_VoidSetPortDir(LCD_PORT_Data,DIO_REG_OUTPUT);
	/* make Control PINs OUTPUT*/
	DIO_VoidSetPinDir(LCD_PORT_Control,LCD_PIN_RS,DIO_OUTPUT);
	DIO_VoidSetPinDir(LCD_PORT_Control,LCD_PIN_RW,DIO_OUTPUT);
	DIO_VoidSetPinDir(LCD_PORT_Control,LCD_PIN_E,DIO_OUTPUT);

	/*wait 30 ms*/
	_delay_ms(30);
	/*send command Function_Set*/
	LCD_VoidSendCom(Function_Set);
	/*wait 2 ms*/
	_delay_ms(2);
	/*send command Display_Control*/
	LCD_VoidSendCom(Display_Control);
	/*wait 2 ms*/
	_delay_ms(2);
	/*send command CLEAR_MODE*/
	LCD_VoidSendCom(CLEAR_MODE);
	/*wait 2 ms*/
	_delay_ms(2);
}



/*
###########################################################################
#Function Name : LCD_VoidSendString                                       #
#Argument      : pointer to char                                          #
#Return        : void                                                     #
#Type          : Implementation                                           #
#Description   : Display String                                           #
###########################################################################
 */

void LCD_VoidSendString(u8* Ptr_String)
{
	/*variable to count in string Array */
	u8 Local_Counter = ZERO;
	/*loop from start Array and End Array (End element in Array = NULL(as string)) */
	while(Ptr_String[Local_Counter] != '\0'){
		/* Display char by char in Array on LCD*/
		LCD_VoidSendChar(Ptr_String[Local_Counter]);
		/*Increment Counter */
		Local_Counter++;

	}
}






void LCD_VoidGoToXY(u8 Local_XPosition, u8 Local_YPosition)
{
	u8 Local_Address = ZERO;
	if(Local_XPosition == ZERO)
	{
		Local_Address = Local_YPosition;

	}
	else if (Local_XPosition == ONE)
	{
		Local_Address = Local_YPosition + 0x40;
	}
	LCD_VoidSendCom(Local_Address + 128);
}


void LCD_VoidCGRAM(u8 Local_Position, u8 *pattern)
{
	u8 Local_Address = ZERO;
	u8 Local_Counter = ZERO;
	Local_Address= Local_Position*8;
	for (Local_Counter = 0 ; Local_Counter< 8 ; Local_Counter ++){
		LCD_VoidSendCom(Local_Position + 64 + (Local_Counter*2));
		LCD_VoidSendChar(pattern[Local_Counter]);
	}
	LCD_VoidGoToXY(0,0);

	//LCD_VoidSendChar(pattern)


}


void LCD_voidsendmorenumber(u32 copy_u32number)
{
	u32 Reversenum =1;

	if (copy_u32number==0){
		LCD_VoidSendChar('0');
	}
	else {
	while (copy_u32number !=0){
		Reversenum = (Reversenum * 10 )+ ( copy_u32number % 10);
		copy_u32number /= 10 ;
	}
	while (Reversenum != 1){
		LCD_VoidSendChar((Reversenum % 10) +48);
		Reversenum /= 10;
	}


	}
}

