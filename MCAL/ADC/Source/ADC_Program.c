/*
 * ADC_Program.c
 *
 *  Created on: May 6, 2022
 *      Author: raya
 */
/*
 * ********************************************************************************
 * ********** Author     : Sara Salma                               ***************
 * ********** Date       : 05/08/2022                               ***************
 * ********** Version    : 1.0 V (05/08/2022 )                      ***************
 * ********** Description: ADC_Program.c                            ***************
 * **********              Implementation function                  ***************
 * ********************************************************************************
 */
/* include file have some values i need */
#include"../../../LIB/DEFINE.h"
/*include file have typedef variables */
#include "../../../LIB/STDTYPES.h"
/* include file have function like macro i need*/
#include"../../../LIB/Bit_Math.h"

/* include DIO prephrail */
#include"../../../MCAL/DIO/Include/DIO_Interface.h"


#include"../Include/ADC_Interface.h"
#include"../Include/ADC_Register.h"



/*
###########################################################################
#Function Name : ADC_VoidInit                                             #
#Argument      : void                                                     #
#Return        : void                                                     #
#Type          : Implementation                                           #
#Description   : initialzation ADC                                        #
###########################################################################
 */

void ADC_VoidInit(void)
{
	/*-------------------------------ADMUX REGISTER--------------------------------- */
	/* To Select Vref */
	SET_BIT(ADC_ADMUX, ADC_REFS0);
	CLR_BIT(ADC_ADMUX, ADC_REFS0);
	/* To Select ADCH ADCL*/
	CLR_BIT(ADC_ADMUX, ADC_ADLAR);
	/*-------------------------------ADCSRA REGISTER--------------------------------- */
	/*
	SET_BIT(ADC_ADCSRA, ADC_ADEN);

	SET_BIT(ADC_ADCSRA, ADC_ADSC);

	SET_BIT(ADC_ADCSRA, ADC_ADIE);
	 */
	/* To Select Precaler Mode */
	ADC_ADCSRA |= ADC_PrecsalerMode;
	/* To Enable ADC and Enable ADC Interrupt */
	ADC_ADCSRA |= (1<<ADC_ADEN)| (1<<ADC_ADIE);

	//ADC_ADMUX = (1<<ADC_REFS0);
	//ADC_ADCSRA = (1<<ADC_ADEN)|(1<<ADC_ADSP1)|(1<<ADC_ADSP2);
}
/*
###########################################################################
#Function Name : ADC_U16ReadData                                          #
#Argument      : u8 ADC_Chanal                                            #
#Return        : u16                                                      #
#Type          : Implementation                                           #
#Description   : get read from ADC From any Chanal (0:8)                  #
###########################################################################
 */
u16 ADC_U16ReadData(u8 ADC_Chanal)
{
	/* variable to store ADC read */
	u16 Local_Read = ZERO;
	/* to avoid if chanal not exist, Register is false */
	ADC_Chanal = ADC_Chanal & 0x1F;
	/* Select Chanal in Register*/
	ADC_ADMUX |= ADC_Chanal;
	/*Start Conversion*/
	SET_BIT(ADC_ADCSRA , ADC_ADSC);

	/*Waiting Conversion End*/

	while (GET_BIT( ADC_ADCSRA , ADC_ADIF) == ZERO)
	{

	}

	/*store ADC read*/
	Local_Read = ADC_DATA;
	/*return ADC read*/
	return Local_Read;
/*
	DIO_VoidSetPinDir(PORT_A,ADC_Chanal,DIO_INPUT);

	ADC_Chanal=ADC_Chanal & 0x07;

	ADC_ADMUX |=ADC_Chanal;
	ADC_ADCSRA |=(1<<ADC_ADSC);
	while(ADC_ADCSRA & (1<<ADC_ADSC))
	{

	}

	return ADC_DATA;
	*/
}
