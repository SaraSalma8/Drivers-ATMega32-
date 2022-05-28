/*
 * DCMOTOR_Program.c
 *
 *  Created on: Apr 30, 2022
 *      Author: raya
 */


/*
 * ********************************************************************************
 * ********** Author     : Sara Salma                               ***************
 * ********** Date       : 04/30/2022                               ***************
 * ********** Version    : 1.0 V (04/30/2020 )                      ***************
 * ********** Description: DCMOTOR_Program.c                        ***************
 * **********              Implementation function                  ***************
 * ********************************************************************************
 */



/*include file have typedef variables */
#include"../../../LIB/STDTYPES.h"
/* include file have some values i need */
#include"../../../LIB/DEFINE.h"

/*include peripheral DIO */
#include"../../../MCAL/DIO/Include/DIO_Interface.h"
#include"../../../MCAL/TIMER0/Include/TIMER0_Interface.h"

#include"../Include/DCMOTOR_Interface.h"


/*
###########################################################################
#Function Name : DCMOTOR_VoidInit                                         #
#Argument      : void                                                     #
#Return        : void                                                     #
#Type          : Implementation                                           #
#Description   : initialization DCMOTOR                                   #
###########################################################################
 */
void DCMOTOR_VoidDcMotorInit(void)
{
	/*check DCMOTOR_CONNECTION connect with H bridge or transistor */
#if DCMOTOR_CONNECTION == HBridge

	/* make pin direction output which connect with transistor 1,3 */
	DIO_VoidSetPinDir(DCMOTOR_PORT , DCMOTOR_H_PIN1 , DIO_OUTPUT);
	/* make pin direction output which connect with transistor 2,4 */
	DIO_VoidSetPinDir(DCMOTOR_PORT , DCMOTOR_H_PIN2 , DIO_OUTPUT);

#elif DCMOTOR_CONNECTION == Transistor
	/* Transistor connection*/
	/* make pin direction output which connect with base transistor */
	DIO_VoidSetPinDir(DCMOTOR_PORT , DCMOTOR_TRAS_PIN , DIO_OUTPUT);
#endif
}
/*
###########################################################################
#Function Name : DCMOTOR_VoidDcMotorHOn                                   #
#Argument      : u8 Local_Direction                                       #
#Return        : void                                                     #
#Type          : Implementation                                           #
#Description   : Turn on  DCMOTOR                                         #
#Note          : Argument must be ( ClockWise , AntiClockWise)            #
###########################################################################
 */
void DCMOTOR_VoidDcMotorOn(u8 Local_Direction)
{
	/*check DCMOTOR_CONNECTION connect with H bridge or transistor */
#if DCMOTOR_CONNECTION == HBridge

	/* H bridge connection check Rotation Direction (ClockWise or AntiClockWise) */
	if (Local_Direction == ClockWise)
	{
		/* make pin value high which connect with transistor 1,3 */
		DIO_VoidSetPinValue(DCMOTOR_PORT, DCMOTOR_H_PIN1 , DIO_HIGH);
		/* make pin value low which connect with transistor 2,4 */
		DIO_VoidSetPinValue(DCMOTOR_PORT,DCMOTOR_H_PIN2,DIO_LOW);
	}
	else if (Local_Direction == AntiClockWise)
	{
		/* make pin value low which connect with transistor 1,3 */
		DIO_VoidSetPinValue(DCMOTOR_PORT,DCMOTOR_H_PIN1,DIO_LOW);
		/* make pin value high which connect with transistor 2,4 */
		DIO_VoidSetPinValue(DCMOTOR_PORT, DCMOTOR_H_PIN2 , DIO_HIGH);
	}
#elif DCMOTOR_CONNECTION == Transistor
	/* Transistor connection*/
	/* make pin value high which connect with base transistor */
	DIO_VoidSetPinValue(DCMOTOR_PORT, DCMOTOR_TRAS_PIN , DIO_HIGH);

#endif
}
/*
###########################################################################
#Function Name : DCMOTOR_VoidDcMotorHOff                                  #
#Argument      : void                                                     #
#Return        : void                                                     #
#Type          : Implementation                                           #
#Description   : Turn off DCMOTOR                                         #
###########################################################################
 */
void DCMOTOR_VoidDcMotorOff(void)
{
	/*check DCMOTOR_CONNECTION connect with H bridge or transistor */
#if DCMOTOR_CONNECTION == HBridge
	/* H bridge connection check Rotation Direction (ClockWise or AntiClockWise) */
#if Direction == ClockWise
	/* make pin value low which connect with transistor 1,3 */
	DIO_VoidSetPinValue(DCMOTOR_PORT,DCMOTOR_H_PIN1,DIO_LOW);
#elif Direction == AntiClockWise
	/* make pin value low which connect with transistor 2,4 */
	DIO_VoidSetPinValue(DCMOTOR_PORT,DCMOTOR_H_PIN2,DIO_LOW);
#endif
#elif DCMOTOR_CONNECTION == Transistor
	/* Transistor connection*/
	/* make pin value low which connect with base transistor */
	DIO_VoidSetPinValue(DCMOTOR_PORT, DCMOTOR_TRAS_PIN , DIO_LOW);
#endif
}

void DCMOTOR_Speed(u8 Local_Speed)
{
	TIMER0_VoidPWMInit();
	TIMER0_SpeedPWM( Local_Speed);

}
