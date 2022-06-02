/*
 * EXTI_Program.c
 *
 *  Created on: May 6, 2022
 *      Author: raya
 */

/*
 * ********************************************************************************
 * ********** Author     : Sara Salma                               ***************
 * ********** Date       : 05/06/2022                               ***************
 * ********** Version    : 1.0 V (05/06/2022 )                      ***************
 * ********** Description: EXTI_Program.c                           ***************
 * **********             Implementation function                   ***************
 * ********************************************************************************
 */

/* include file have function like macro i need*/
#include"../../../LIB/Bit_Math.h"
/*include file have typedef variables */
#include "../../../LIB/STDTYPES.h"


#include "../../DIO/Include/DIO_Interface.h"
#include"../../DIO/Include/DIO_Private.h"

#include"../Include/EXTI_Register.h"
#include "../Include/EXTI_Interface.h"


/*
###########################################################################
#Function Name : EXTI0_VoidInit                                           #
#Argument      : void                                                     #
#Return        : void                                                     #
#Type          : Implementation                                           #
#Description   : initilaztion External Interrupt Zero                     #
###########################################################################
 */
void EXTI0_VoidInit(void)
{
	/*Select the pin is input and Enable the PULL UP */
	DIO_VoidSetPinDir(EXTI0_PORT , EXTI0_PIN , DIO_INPUT); /* set pin input */
	DIO_VoidSetPinValue(EXTI0_PORT , EXTI0_PIN ,DIO_HIGH); /* turn on pull up */
	/*Enable PIE*/
	SET_BIT(EXTI_GICR , EXTI_INT0);
	/* Check about Option */
#if   EXTI0_TriggerMode == EXTI_LowLevel
	CLR_BIT(EXTI_MCUCR , EXTI_ISC00);
	CLR_BIT(EXTI_MCUCR , EXTI_ISC01);

#elif EXTI0_TriggerMode == EXTI_OnChangeEdge
	SET_BIT(EXTI_MCUCR , EXTI_ISC00);
	CLR_BIT(EXTI_MCUCR , EXTI_ISC01);

#elif EXTI0_TriggerMode == EXTI_FallingEdge
	CLR_BIT(EXTI_MCUCR , EXTI_ISC00);
	SET_BIT(EXTI_MCUCR , EXTI_ISC01);

#elif EXTI0_TriggerMode == EXTI_RisingEdge
	SET_BIT(EXTI_MCUCR , EXTI_ISC00);
	SET_BIT(EXTI_MCUCR , EXTI_ISC01);
#endif
}
/*
###########################################################################
#Function Name : EXTI1_VoidInit                                           #
#Argument      : void                                                     #
#Return        : void                                                     #
#Type          : Implementation                                           #
#Description   : initilaztion External Interrupt ONE                      #
###########################################################################
 */
void EXTI1_VoidInit(void)
{
	/*Select the pin is input and Enable the PULL UP */
	DIO_VoidSetPinDir(EXTI1_PORT , EXTI1_PIN , DIO_INPUT); /* set pin input */
	DIO_VoidSetPinValue(EXTI1_PORT , EXTI1_PIN ,DIO_HIGH); /* turn on pull up */
	/*Enable PIE*/
	SET_BIT(EXTI_GICR , EXTI_INT1);
	/* Check about Option */
#if   EXTI1_TriggerMode == EXTI_LowLevel
	CLR_BIT(EXTI_MCUCR , EXTI_ISC10);
	CLR_BIT(EXTI_MCUCR , EXTI_ISC11);

#elif EXTI1_TriggerMode == EXTI_OnChangeEdge
	SET_BIT(EXTI_MCUCR , EXTI_ISC10);
	CLR_BIT(EXTI_MCUCR , EXTI_ISC11);

#elif EXTI1_TriggerMode == EXTI_FallingEdge
	CLR_BIT(EXTI_MCUCR , EXTI_ISC10);
	SET_BIT(EXTI_MCUCR , EXTI_ISC11);

#elif EXTI1_TriggerMode == EXTI_RisingEdge
	SET_BIT(EXTI_MCUCR , EXTI_ISC10);
	SET_BIT(EXTI_MCUCR , EXTI_ISC11);

#endif
}

/*
###########################################################################
#Function Name : EXTI2_VoidEnit                                           #
#Argument      : void                                                     #
#Return        : void                                                     #
#Type          : Implementation                                           #
#Description   : initilaztion External Interrupt ONE                      #
###########################################################################
 */
void EXTI2_VoidInit(void)
{
	/*Select the pin is input and Enable the PULL UP */
	DIO_VoidSetPinDir(EXTI2_PORT , EXTI2_PIN , DIO_INPUT); /* set pin input */
	DIO_VoidSetPinValue(EXTI2_PORT , EXTI2_PIN ,DIO_HIGH); /* turn on pull up */
	/*Enable PIE*/
	SET_BIT(EXTI_GICR , EXTI_INT2);
	/* Check about Option */
#if EXTI2_TriggerMode == EXTI_FallingEdge
	CLR_BIT(EXTI_MCUCSR , EXTI_ISC2);

#elif EXTI2_TriggerMode == EXTI_RisingEdge
	SET_BIT(EXTI_MCUCSR , EXTI_ISC2);

#endif
}
