/*
 * led_interface.h
 *
 *  Created on: Apr 13, 2022
 *      Author: raya
 */
/*
 * ********************************************************************************
 * ********** Author     : Sara Salma                               ***************
 * ********** Date       : 04/13/2022                               ***************
 * ********** Version    : 2.0 V  (04/26/2020)                      ***************
 * ********** Description: LED_INTERFACINE.h                        ***************
 * **********               Content Proto_Type functions            ***************
 * ********************************************************************************
 */
/*garden to define led interface if not define */
#ifndef HAL_LED_INCLUDE_LED_INTERFACE_H_
#define HAL_LED_INCLUDE_LED_INTERFACE_H_


#include "../Include/led_configuration.h"

/*
###########################################################################
#Function Name : LED_VoidInit                                             #
#Argument      : u8 Local_Pin                                             #
#Return        : void                                                     #
#Type          : Proto_Type                                               #
#Description   : make pin which LED connect with it OUTPUT                #
###########################################################################
 */

void LED_VoidLedInit(u8 Local_Pin);


/*
###########################################################################
#Function Name : LED_VoidLedOn                                            #
#Argument      : u8 Local_Pin                                             #
#Return        : void                                                     #
#Type          : Proto_Type                                               #
#Description   : make LED on and pin->1                                   #
###########################################################################
 */

void LED_VoidLedOn(u8 Local_Pin);

/*
###########################################################################
#Function Name : LED_VoidLedOff                                           #
#Argument      : u8 Local_Pin                                             #
#Return        : void                                                     #
#Type          : Proto_Type                                               #
#Description   : make LED off and pin(output)->0                          #
###########################################################################
 */

void LED_VoidLedOff(u8 Local_Pin);

/*
###########################################################################
#Function Name : LED_VoidLedTog                                           #
#Argument      : u8 Local_Pin                                             #
#Return        : void                                                     #
#Type          : Proto_Type                                               #
#Description   : make LED toggle and pin(output)->toggle (if led off make #
#                led on and if led on make led off)                       #
###########################################################################
 */

void LED_VoidLedTog(u8 Local_Pin);

#endif /* HAL_LED_INCLUDE_LED_INTERFACE_H_ */
