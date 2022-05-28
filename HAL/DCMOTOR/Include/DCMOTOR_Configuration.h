/*
 * DCMOTOR_Configuration.h
 *
 *  Created on: Apr 30, 2022
 *      Author: raya
 */

/*
 * ********************************************************************************
 * ********** Author     : Sara Salma                               ***************
 * ********** Date       : 04/30/2022                               ***************
 * ********** Version    : 1.0 V (04/30/2020 )                      ***************
 * ********** Description: DCMOTOR_Configuration.h                  ***************
 * ********************************************************************************
 */


/*garden to define DCMOTOR Configuration if not define */
#ifndef HAL_DCMOTOR_INCLUDE_DCMOTOR_CONFIGURATION_H_
#define HAL_DCMOTOR_INCLUDE_DCMOTOR_CONFIGURATION_H_

#include"DCMOTOR_Private.h"
/*define Port DCMOTOR */
#define DCMOTOR_PORT            PORT_B



/* define type connection (HBridge  or Transistor)*/
#define DCMOTOR_CONNECTION      Transistor

/*define PIN Transistor*/
#define DCMOTOR_TRAS_PIN        PIN_B3


/*define pins H bridge */
/*PIN1 connect with transistor 1,3 PIN2 connect with transistor 2,4 */
#define DCMOTOR_H_PIN1          PIN_A0
#define DCMOTOR_H_PIN2          PIN_A1


/* DC MOTOR Direction (ClockWise or AntiClockWise)*/
#define Direction              ClockWise


#endif /* HAL_DCMOTOR_INCLUDE_DCMOTOR_CONFIGURATION_H_ */
