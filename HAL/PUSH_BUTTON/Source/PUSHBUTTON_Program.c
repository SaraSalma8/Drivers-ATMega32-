/*
 * push_button_program.c
 *
 *  Created on: Apr 13, 2022
 *      Author: raya
 */

/*
 * ********************************************************************************
 * ********** Author     : Sara Salma                               ***************
 * ********** Date       : 04/13/2022                               ***************
 * ********** Version    : 1.0 V                                    ***************
 * ********** Description: push_button_program.c                    ***************
 * **********              Implementation function                  ***************
 * ********************************************************************************
 */

/*include lib to use delay*/
#include<util/delay.h>


/*include file have typedef variables */
#include "../../../LIB/STDTYPES.h"
/*include file have some value i need*/
#include "../../../LIB/DEFINE.h"
/*include peripheral DIO */
#include"../../../MCAL/DIO/Include/DIO_Interface.h"




#include "../Include/PUSHBUTTON_Interface.h"





/*
###########################################################################
#Function Name : PUSHBUTTON_VoidPushButtonInit                            #
#Argument      : u8 Local_PIN                                             #
#Return        : void                                                     #
#Type          : Implementation                                           #
#Description   : make pin push button connect with it INPUT               #
###########################################################################
 */

void PUSHBUTTON_VoidPushButtonInit(u8 Local_PIN)
{
	/* set direction of  pin connect with push button input */
	DIO_VoidSetPinDir(PUSH_BUUTON_PORT, Local_PIN , DIO_INPUT);
	/*turn on pull up on pin connect with push button*/
	DIO_VoidSetPinValue(PUSH_BUUTON_PORT, Local_PIN , DIO_HIGH);
}

/*
###########################################################################
#Function Name : PUSHBUTTON_U8GetPushButtonValue                          #
#Argument      : u8 Local_PIN                                             #
#Return        : u8                                                       #
#Type          : Implementation                                           #
#Description   : make pin push button connect with it INPUT               #
###########################################################################
 */

u8 PUSHBUTTON_U8GetPushButtonValue(u8 Local_PIN)
{
	/*variable to store pin value connect with push button*/
	u8 Local_value = ONE_HUNDRED;
	/*store pin value connect with push button in Local_value*/
	Local_value = DIO_U8GetPinValue(PUSH_BUUTON_PORT,Local_PIN);
	/* return value Push Button */
	return Local_value;
}





