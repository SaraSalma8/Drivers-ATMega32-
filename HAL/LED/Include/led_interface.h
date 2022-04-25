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
 * ********** Version    : 1.0 V                                    ***************
 * ********** Description: LED_INTERFACINE.h                        ***************
 * **********               Content Proto_Type functions            ***************
 * ********************************************************************************
 */
/*garden to define led interface if not define */
#ifndef HAL_LED_INCLUDE_LED_INTERFACE_H_
#define HAL_LED_INCLUDE_LED_INTERFACE_H_


#include "../Include/led_configuration.h"

/*
function name => LED_INIT
 Argument=> u8
 Return=>void
 Description=> make pin which LED connect with it OUTPUT
 Type=>Proto_Type
 */
void LED_INIT(u8 pin);


/*
function name => LRD_ON
 Argument=> u8 PIN
 Return=>void
 Description=> make LED on and pin->1
 Type=>Proto_Type
 */
void LED_ON(u8 PIN);

/*
function name => LED_OFF
 Argument=> u8 PIN
 Return=>void
 Description=> make LED off and pin(output)->0
 Type=>Proto_Type
 */
void LED_OFF(u8 PIN);

/*
function name => LED_TOG
 Argument=> u8 PIN
 Return=>void
 Description=> make LED toggle and pin(output)->toggle
 Type=>Proto_Type
 */
void LED_TOG(u8 PIN);

#endif /* HAL_LED_INCLUDE_LED_INTERFACE_H_ */
