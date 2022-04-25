/*
 * KEYPAD_program.c
 *
 *  Created on: Apr 24, 2022
 *      Author: raya
 */

/*include file have typedef variables */
#include "../../../LIB/STDTYPES.h"
/* include file have some values i need */
#include"../../../LIB/DEFINE.h"

/*include DIO driver*/
#include"../../../MCAL/DIO/Include/DIO_Interface.h"

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
/*make Colum OUTPUT and ROW INPUT */
	DIO_VoidSetPortDir(KEYPAD_PORT,KEYPAD_INIT_DIR);

	/* turn Pull up for rows and make COLUM High*/
	DIO_VoidSetPortValue(KEYPAD_PORT,DIO_REG_HIGH);

}


/*
###########################################################################
#Function Name : KEYPAD_U8PressedNum                                      #
#Argument      : void                                                     #
#Return        : u8                                                       #
#Type          : Implementation                                           #
#Description   : return button value which pressed in KEYPAD              #
###########################################################################
 */
u8 KEYPAD_U8PressedNum(void){

	u8 Local_ColumnCounter=ZERO ;
	u8 Local_RowCounter=ZERO ;
	u8 value =ONE_HUNDRED;
	u8 KEY_Number=ZERO;

	 for (Local_ColumnCounter = START_LOOP ; Local_ColumnCounter <COlUMN_NUM ; Local_ColumnCounter ++){
		  CLR_BIT(KEYPAD_PORT,Local_ColumnCounter);
		  for( Local_RowCounter = ZERO ; Local_RowCounter < ROW_NUM; Local_RowCounter ++){
			  value = GET_BIT(KEYPAD_PORT,Local_RowCounter+FOUR);
			  if(value == ZERO){
				  KEY_Number= KEYPAD4X4[Local_RowCounter][Local_ColumnCounter] ;
	         break;
			  }

		  }
		  SET_BIT(KEYPAD_PORT,Local_ColumnCounter);


	  }

	 return KEY_Number;


}
