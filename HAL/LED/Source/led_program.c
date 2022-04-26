/*
 * led_program.c
 *
 *  Created on: Apr 13, 2022
 *      Author: raya
 */

/*
 * ********************************************************************************
 * ********** Author     : Sara Salma                               ***************
 * ********** Date       : 04/13/2022                               ***************
 * ********** Version    : 2.0 V (04/26/2020)                       ***************
 * ********** Description: LED_program.c                            ***************
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

#include "../Include/led_interface.h"


/*
###########################################################################
#Function Name : LED_VoidInit                                             #
#Argument      : u8 Local_Pin                                             #
#Return        : void                                                     #
#Type          : Implementation                                           #
#Description   : make pin which LED connect with it OUTPUT                #
###########################################################################
 */

void LED_VoidLedInit(u8 Local_Pin)
{
	/*set Pin Connect with led is OUTPUT */
	DIO_VoidSetPinDir(LED_Group, Local_Pin, DIO_OUTPUT);
}


/*
###########################################################################
#Function Name : LED_VoidLedOn                                            #
#Argument      : u8 Local_Pin                                             #
#Return        : void                                                     #
#Type          : Implementation                                           #
#Description   : make LED on and pin->1                                   #
###########################################################################
 */

void LED_VoidLedOn(u8 Local_Pin)
{
	/*make pin connect with led is HIGH */
	DIO_VoidSetPinValue(LED_Group,Local_Pin,DIO_HIGH);
}

/*
###########################################################################
#Function Name : LED_VoidLedOff                                           #
#Argument      : u8 Local_Pin                                             #
#Return        : void                                                     #
#Type          : Implementation                                           #
#Description   : make LED off and pin(output)->0                          #
###########################################################################
 */

void LED_VoidLedOff(u8 Local_Pin)
{
	/*make pin connect with Buzzer is LOW */
	DIO_VoidSetPinValue(LED_Group,Local_Pin,DIO_LOW);
}
/*
###########################################################################
#Function Name : LED_VoidLedTog                                           #
#Argument      : u8 Local_Pin                                             #
#Return        : void                                                     #
#Type          : Implementation                                           #
#Description   : make LED toggle and pin(output)->toggle (if led off make #
#                led on and if led on make led off)                       #
###########################################################################
 */

void LED_VoidLedTog(u8 Local_Pin)
{
	/*variable to store value of lied PIN*/
	u8 Local_State = ONE_HUNDRED;
	/*store value of led PIN in Local_State*/
	Local_State= DIO_U8GetPinValue(LED_Group,Local_Pin);
	/*check if led off or not*/
	if(Local_State == DIO_LOW)
	{
		/*make led on */
		DIO_VoidSetPinValue(LED_Group,Local_Pin,DIO_HIGH);
	}
	else
	{
		/*make led off */
		DIO_VoidSetPinValue(LED_Group,Local_Pin,DIO_LOW);
	}
}
