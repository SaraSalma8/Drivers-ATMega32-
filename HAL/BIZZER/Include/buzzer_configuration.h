/*
 * buzzer_configuration.h
 *
 *  Created on: Apr 12, 2022
 *      Author: raya
 */


/*
 * ********************************************************************************
 * ********** Author     : Sara Salma                               ***************
 * ********** Date       : 04/12/2022                               ***************
 * ********** Version    : 1.0 V                                    ***************
 * ********** Description: BUZZER_CONFIGURATION.h                   ***************
 * **********                                                       ***************
 * ********************************************************************************
 */
/*garden to define BUZZER configuration if not define */

#ifndef HAL_BIZZER_INCLUDE_BUZZER_CONFIGURATION_H_
#define HAL_BIZZER_INCLUDE_BUZZER_CONFIGURATION_H_

#include "buzzer_privte.h"


/*define Buzzer PORT & PIN */
#define Buzzer_PORT     PORT_B
#define BUZZER_PIN      PIN_B7


/*waiting time use in function  BUZZER_VoidBuzzerTog() */
#define WAIT_TIME     1000


#define STARTLOOP     0
/*define number time i Want buzzer to toggle*/
#define TIMES_REAPT   10

#endif /* HAL_BIZZER_INCLUDE_BUZZER_CONFIGURATION_H_ */
