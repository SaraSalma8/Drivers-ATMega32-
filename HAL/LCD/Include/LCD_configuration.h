/*
 * LCD_configuration.h
 *
 *  Created on: Apr 23, 2022
 *      Author: raya
 */

/*
 * ********************************************************************************
 * ********** Author     : Sara Salma                               ***************
 * ********** Date       : 04/21/2022                               ***************
 * ********** Version    : 1.0 V                                    ***************
 * ********** Description: LCD_CONFIGURATION.h                   ***************
 * **********                                                       ***************
 * ********************************************************************************
 */

/*garden to define LCD Configuration if not define */
#ifndef HAL_LCD_INCLUDE_LCD_CONFIGURATION_H_
#define HAL_LCD_INCLUDE_LCD_CONFIGURATION_H_

#include "LCD_private.h"

/* define PORTS LCD need 1-PORT Data 2- PORT Control */
#define LCD_PORT_Data          PORT_C
#define LCD_PORT_Control       PORT_D


/* define Control Pins */
#define LCD_PIN_RS             PIN_D0
#define LCD_PIN_RW             PIN_D1
#define LCD_PIN_E              PIN_D2


#endif /* HAL_LCD_INCLUDE_LCD_CONFIGURATION_H_ */
