/*
 * sev_segment_program.c
 *
 *  Created on: Apr 12, 2022
 *      Author: raya
 */


/*
 * ********************************************************************************
 * ********** Author     : Sara Salma                               ***************
 * ********** Date       : 04/12/2022                               ***************
 * ********** Version    : 2.0 V (04/27/2020)                       ***************
 * ********** Description: SEVSEGMENT_Program.c                     ***************
 * **********              Implementation function                  ***************
 * ********************************************************************************
 */

/*include LIB for use Delay */
#include <util/delay.h>

/*include file have typedef variables */
#include "../../../LIB/STDTYPES.h"
/* include file have some values i need */
#include "../../../LIB/DEFINE.h"

/*include peripheral DIO */
#include"../../../MCAL/DIO/Include/DIO_Interface.h"

#include "../Include/SEVSEGMENT_Interface.h"

/*array of numbers which seven segment can display */
u16 SEVEN_SEGMENT_NUMBERS[SEV_MAX_NUMS]={ZERO_Anode,ONE_Anode,TWO_Anode,THREE_Anode,FOUR_Anode,FIVE_Anode,SIX_Anode,SEVEN_Anode,EIGHT_Anode,NINE_Anode};


/*
###########################################################################
#Function Name : SEVSEGMENT_VoidSevsegmentInit                            #
#Argument      : void                                                     #
#Return        : void                                                     #
#Type          : Implementation                                           #
#Description   : make port which seven segment connect with it OUTPUT     #
###########################################################################
 */

void SEVSEGMENT_VoidSevsegmentInit(void)
{
	/*make port direction output*/
	DIO_VoidSetPortDir(SEV_SEGMENT_PORT,DIO_REG_OUTPUT);
}

/*
###########################################################################
#Function Name : SEVSEGMENT_VoidDisplayNum                                #
#Argument      : u8 Local_Number                                          #
#Return        : void                                                     #
#Type          : Implementation                                           #
#Description   : Display any number which entered                         #
###########################################################################
 */

void SEVSEGMENT_VoidDisplayNum(u8 Local_Number)
{
	/*switch Number*/
	switch(Local_Number)
	{
	/*make PORT value = ONE_Anode*/
	case ONE   :DIO_VoidSetPortValue(SEV_SEGMENT_PORT,ONE_Anode);     break;
	/*make PORT value = TWO_Anode*/
	case TWO   :DIO_VoidSetPortValue(SEV_SEGMENT_PORT,TWO_Anode);     break;
	/*make PORT value = THREE_Anode*/
	case THREE :DIO_VoidSetPortValue(SEV_SEGMENT_PORT,THREE_Anode);   break;
	/*make PORT value = FOUR_Anode*/
	case FOUR  :DIO_VoidSetPortValue(SEV_SEGMENT_PORT,FOUR_Anode);    break;
	/*make PORT value = FIVE_Anode*/
	case FIVE  :DIO_VoidSetPortValue(SEV_SEGMENT_PORT,FIVE_Anode);    break;
	/*make PORT value = SIX_Anode*/
	case SIX   :DIO_VoidSetPortValue(SEV_SEGMENT_PORT,SIX_Anode);     break;
	/*make PORT value = SEVEN_Anode*/
	case SEVEN :DIO_VoidSetPortValue(SEV_SEGMENT_PORT,SEVEN_Anode);   break;
	/*make PORT value = EIGHT_Anode*/
	case EIGHT :DIO_VoidSetPortValue(SEV_SEGMENT_PORT,EIGHT_Anode);   break;
	/*make PORT value = NINE_Anode*/
	case NINE  :DIO_VoidSetPortValue(SEV_SEGMENT_PORT,NINE_Anode);    break;

	}

}

/*
###########################################################################
#Function Name : SEVSEGMENT_VoidCountToMax                                #
#Argument      : void                                                     #
#Return        : void                                                     #
#Type          : Implementation                                           #
#Description   : Display number from 0 to 9 with delay one second         #
###########################################################################
 */

void SEVSEGMENT_VoidCountToMax(void)
{
	/*variable use in for loop*/
	u8 Local_Counter = ZERO;
	/*for loop to count elements in SEVEN_SEGMENT_NUMBERS array element by element until end of array*/
	for(Local_Counter = LOOP_START ; Local_Counter<SEV_MAX_NUMS ; Local_Counter++)
	{
		/*make PORT Value = Element in SEVEN_SEGMENT_NUMBERS array element by element */
		DIO_VoidSetPortValue( SEV_SEGMENT_PORT, SEVEN_SEGMENT_NUMBERS[Local_Counter] );
		/*waiting*/
		_delay_ms(TIME_WAIT);
	}
}

/*
###########################################################################
#Function Name : SEVSEGMENT_U8CountToNum                                  #
#Argument      : u8 Local_Number                                          #
#Return        : u8                                                       #
#Type          : Implementation                                           #
#Description   : Display number from 0 to number entered with delay one   #
#                Second                                                   #
###########################################################################
 */

u8 SEVSEGMENT_U8CountToNum(u8 Local_Number)
{
	/*variable use in for loop*/
	u8 Local_Counter = ZERO;
	/*variable to check function do its job correct */
	u8 Local_State = NOK;
	/*check if number entered is correct or not */
	if(Local_Number>=ZERO && Local_Number <= NINE)
	{
		/*for loop to count elements in SEVEN_SEGMENT_NUMBERS array element by element until number entered */
		for(Local_Counter = LOOP_START ; Local_Counter < Local_Number ; Local_Counter++)
		{
			/*make PORT Value = Element in SEVEN_SEGMENT_NUMBERS array element by element */

			DIO_VoidSetPortValue( SEV_SEGMENT_PORT, SEVEN_SEGMENT_NUMBERS[Local_Counter] );
			/*waiting*/
			_delay_ms(TIME_WAIT);

		}

		Local_State = OK;
	}
	return Local_State;
}
