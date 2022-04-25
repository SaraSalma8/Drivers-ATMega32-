/*
 * led_configuration.h
 *
 *  Created on: Apr 13, 2022
 *      Author: raya
 */

/*
 * ********************************************************************************
 * ********** Author     : Sara Salma                               ***************
 * ********** Date       : 04/13/2022                               ***************
 * ********** Version    : 1.0 V                                    ***************
 * ********** Description: LED_CONFIGURATION.h                      ***************
 * **********                                                       ***************
 * ********************************************************************************
 */
/*garden to define led configuration if not define */
#ifndef HAL_LED_INCLUDE_LED_CONFIGURATION_H_
#define HAL_LED_INCLUDE_LED_CONFIGURATION_H_

/*include led private to know which port used*/
#include "../Include/led_privte.h"

/*define group*/
#define LED_Group    GROUP_2
#define RED_LED      PIN_TWO
#define GREEN_LED    PIN_ONE
#define YELLOW_LED   PIN_THREE


#endif /* HAL_LED_INCLUDE_LED_CONFIGURATION_H_ */
