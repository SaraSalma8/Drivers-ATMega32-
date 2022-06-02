/*
 * ADC_Interface.h
 *
 *  Created on: May 6, 2022
 *      Author: raya
 */

/*
 * ********************************************************************************
 * ********** Author     : Sara Salma                               ***************
 * ********** Date       : 05/08/2022                               ***************
 * ********** Version    : 1.0 V (05/08/2022 )                      ***************
 * ********** Description: ADC_Interface.h                          ***************
 * **********              Proto_Type function                      ***************
 * ********************************************************************************
 */

/*garden to define DIO interface if not define */
#ifndef MCAL_ADC_INCLUDE_ADC_INTERFACE_H_
#define MCAL_ADC_INCLUDE_ADC_INTERFACE_H_


/*include file have typedef variables */
#include "../../../LIB/STDTYPES.h"


#include"ADC_Configuration.h"


/*
###########################################################################
#Function Name : ADC_VoidInit                                             #
#Argument      : void                                                     #
#Return        : void                                                     #
#Type          : Proto_Type                                               #
#Description   : initialzation ADC                                        #
###########################################################################
 */
void ADC_VoidInit(void);
/*
###########################################################################
#Function Name : ADC_U16ReadData                                          #
#Argument      : u8 ADC_Chanal                                            #
#Return        : u16                                                      #
#Type          : Proto_Type                                               #
#Description   : get read from ADC From any Chanal (0:8)                  #
###########################################################################
 */
u16 ADC_U16ReadData(u8 ADC_Chanal);

#endif /* MCAL_ADC_INCLUDE_ADC_INTERFACE_H_ */
