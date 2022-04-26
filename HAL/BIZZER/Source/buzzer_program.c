/*
 * buzzer_program.c
 *
 *  Created on: Apr 12, 2022
 *      Author: raya
 */

/*
 * ********************************************************************************
 * ********** Author     : Sara Salma                               ***************
 * ********** Date       : 04/13/2022                               ***************
 * ********** Version    : 1.0 V                                    ***************
 * ********** Description: buzzer_program.c                            ***************
 * **********              Implementation function                  ***************
 * ********************************************************************************
 */

/*include lib to use delay*/
#include<util/delay.h>


/*include file have typedef variables */
#include "../../../LIB/STDTYPES.h"
/*include file have some value i need*/
#include "../../../LIB/DEFINE.h"

/* include peripheral DIO*/
#include"../../../MCAL/DIO/Include/DIO_Interface.h"

#include "../Include/buzzer_interface.h"


/*
###########################################################################
#Function Name : BUZZER_VoidBuzzerInit                                    #
#Argument      : u8 Local_Pin                                             #
#Return        : void                                                     #
#Type          : Implementation                                           #
#Description   : make pin which buzzer connect with it OUTPUT             #
###########################################################################
 */

void BUZZER_VoidBuzzerInit(u8 Local_Pin)
{
	/*set Pin Connect with buzzer is OUTPUT */
	DIO_VoidSetPinDir(Buzzer_PORT,Local_Pin,DIO_OUTPUT);
}

/*
###########################################################################
#Function Name : BUZZER_VoidBuzzerOn                                      #
#Argument      : u8 Local_Pin                                             #
#Return        : void                                                     #
#Type          : Implementation                                           #
#Description   : make buzzer On and pin(output)->1                        #
###########################################################################
 */
void BUZZER_VoidBuzzerOn(u8 Local_Pin)
{
	/*make pin connect with Buzzer is HIGH */
	DIO_VoidSetPinValue(Buzzer_PORT,Local_Pin,DIO_HIGH);
}
/*
###########################################################################
#Function Name : BUZZER_VoidBuzzerOff                                     #
#Argument      : u8 Local_Pin                                             #
#Return        : void                                                     #
#Type          : Implementation                                           #
#Description   : make buzzer off and pin(output)->0                       #
###########################################################################
 */
void BUZZER_VoidBuzzerOff(u8 Local_Pin)
{
	/*make pin connect with Buzzer is LOW */
	DIO_VoidSetPinValue(Buzzer_PORT,Local_Pin,DIO_LOW);
}
/*
###########################################################################
#Function Name : BUZZER_VoidBuzzerTog                                     #
#Argument      : u8 Local_Pin                                             #
#Return        : void                                                     #
#Type          : Implementation                                           #
#Description   : make buzzer toggle and pin(output)->toggle               #
###########################################################################
 */

void BUZZER_VoidBuzzerTog(u8 Local_Pin)
{
	/*variable use in for Loop */
	u8 Local_Counter = ZERO;
	/*loop for toggle buzzer so once */
	for (Local_Counter= STARTLOOP ; Local_Counter <TIMES_REAPT ; Local_Counter ++)
	{
		/*Toggle Buzzer Pin */
		DIO_VoidTogPinValue(Buzzer_PORT,Local_Pin);
		/*waiting*/
		_delay_ms(WAIT_TIME);


	}
}
