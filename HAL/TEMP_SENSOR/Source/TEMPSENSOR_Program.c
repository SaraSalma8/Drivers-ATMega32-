/*
 * TEMPSENSOR_Program.c
 *
 *  Created on: May 18, 2022
 *      Author: raya
 */
/*
 * ********************************************************************************
 * ********** Author     : Sara Salma                               ***************
 * ********** Date       : 05/18/2022                               ***************
 * ********** Version    : 1.0 V (05/18/2022 )                      ***************
 * ********** Description: TEMPSENSOR_Program.c                     ***************
 * **********              Implementation function                  ***************
 * ********************************************************************************
 */
/* include file have some values i need */
#include"../../../LIB/DEFINE.h"
/*include file have typedef variables */
#include "../../../LIB/STDTYPES.h"

/* include ADC prephrail */
#include"../../../MCAL/ADC/Include/ADC_Interface.h"

#include"../Include/TEMPSENSOR_Interface.h"
/*
###########################################################################
#Function Name : TEMPSENSOR_Voidinit                                      #
#Argument      : void                                                     #
#Return        : void                                                     #
#Type          : Implementation                                           #
#Description   : initialzation Temprture Sensor                           #
###########################################################################
 */
void TEMPSENSOR_VoidInit(Void)
{
	ADC_VoidInit();
}

/*
###########################################################################
#Function Name : ADC_U16ReadData                                          #
#Argument      : void                                                     #
#Return        : void                                                     #
#Type          : Implementation                                           #
#Description   : get Temprture                                            #
###########################################################################
 */
u16 TEMPSENSOR_U16ReadTemp(void)
{
	u16 Local_Temp = ZERO;
	Local_Temp = ADC_U16ReadData(TempSensor_Chanal);
}
