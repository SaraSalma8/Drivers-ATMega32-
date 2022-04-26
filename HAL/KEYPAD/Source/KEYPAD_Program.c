/*
 * KEYPAD_program.c
 *
 *  Created on: Apr 24, 2022
 *      Author: raya
 */

/*
 * ********************************************************************************
 * ********** Author     : Sara Salma                               ***************
 * ********** Date       : 04/20/2022                               ***************
 * ********** Version    : 1.0 V (04/20/2020 )                      ***************
 * ********** Description: KEYPAD_Program.c                         ***************
 * **********              Implementation function                  ***************
 * ********************************************************************************
 */

/*include file have typedef variables */
#include "../../../LIB/STDTYPES.h"
/* include file have some values i need */
#include"../../../LIB/DEFINE.h"


/*include DIO driver*/
#include"../../../MCAL/DIO/Include/DIO_Interface.h"


#include"../Include/KEYPAD_Configuration.h"
#include"../Include/KEYPAD_Interface.h"


/*
###########################################################################
#Function Name : KEYPAD_VoidInit                                          #
#Argument      : void                                                     #
#Return        : void                                                     #
#Type          : Implementation                                           #
#Description   : initilazation KEYPad set PORT which connect with Keypad  #
#                OUTPUT                                                   #
###########################################################################
 */
void KEYPAD_VoidInit(void){
	/*make Column OUTPUT and ROW INPUT */
	DIO_VoidSetPortDir(KEYPAD_PORT,KEYPAD_INIT_DIR);

	/* turn Pull up for rows and make COLUM High*/
	DIO_VoidSetPortValue(KEYPAD_PORT,DIO_REG_HIGH);

}


/*
###########################################################################
#Function Name : KEYPAD_U8PressedNum                                      #
#Argument      : u8 * Keypad_value                                        #
#Return        : void                                                     #
#Type          : Implementation                                           #
#Description   : return button value which pressed in KEYPAD              #
###########################################################################
 */
void KEYPAD_VoidPressedNum(u8 * Keypad_value){
	/* variable  to count Column by Column */
	u8 Local_ColumnCounter=ZERO ;
	/* variable  to Row by Row */
	u8 Local_RowCounter=ZERO ;
	/* variable to check any button pressed or no */
	u8 value =ONE_HUNDRED;

	if(Keypad_value != NULL)
	{
		/* two for loop to get which button pressed */
		for (Local_ColumnCounter = START_LOOP ; Local_ColumnCounter <COlUMN_NUM ; Local_ColumnCounter ++)
		{
			/* make Column low Column by Column */
			DIO_VoidSetPinValue(KEYPAD_PORT,Local_ColumnCounter,DIO_LOW);
			for( Local_RowCounter = ZERO ; Local_RowCounter < ROW_NUM; Local_RowCounter ++)
			{
				/*value of button store in variable value */
				value= DIO_U8GetPinValue(KEYPAD_PORT,Local_RowCounter+FOUR);
				/*check if value = ZERO it mean button in Keypad Pressed */
				if(value == ZERO)
				{
					/*store value Pressed Button in Keypad with the corresponding value in array KEYPAD4X4*/
					*Keypad_value= KEYPAD4X4[Local_RowCounter][Local_ColumnCounter] ;
					break;
				}

			}
			/*return Column high*/
			DIO_VoidSetPinValue(KEYPAD_PORT,Local_ColumnCounter,DIO_HIGH);


		}
	}


}
