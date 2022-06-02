/*
 * TEMPSENSOR_Interface.h
 *
 *  Created on: May 18, 2022
 *      Author: raya
 */
/*
 * ********************************************************************************
 * ********** Author     : Sara Salma                               ***************
 * ********** Date       : 05/18/2022                               ***************
 * ********** Version    : 1.0 V (05/18/2022 )                      ***************
 * ********** Description: TEMPSENSOR_Interface.h                   ***************
 * **********              Proto_Type function                      ***************
 * ********************************************************************************
 */


/*garden to define TEMP Sensor Interface if not define */
#ifndef HAL_TEMP_SENSOR_INCLUDE_TEMPSENSOR_INTERFACE_H_
#define HAL_TEMP_SENSOR_INCLUDE_TEMPSENSOR_INTERFACE_H_

/*include file have typedef variables */
#include "../../../LIB/STDTYPES.h"


#include"TEMPSENSOR_Configuration.h"


/*
###########################################################################
#Function Name : TEMPSENSOR_Voidinit                                      #
#Argument      : void                                                     #
#Return        : void                                                     #
#Type          : Proto_Type                                               #
#Description   : initialzation Temprture Sensor                           #
###########################################################################
 */
void TEMPSENSOR_VoidInit(Void);

/*
###########################################################################
#Function Name : ADC_U16ReadData                                          #
#Argument      : void                                                     #
#Return        : void                                                     #
#Type          : Proto_Type                                               #
#Description   : get Temprture                                            #
###########################################################################
 */
u16 TEMPSENSOR_U16ReadTemp(void);

#endif /* HAL_TEMP_SENSOR_INCLUDE_TEMPSENSOR_INTERFACE_H_ */
