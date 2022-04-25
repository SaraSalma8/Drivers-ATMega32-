/*
 * buzzer_interface.h
 *
 *  Created on: Apr 12, 2022
 *      Author: raya
 */

/*
 * ********************************************************************************
 * ********** Author     : Sara Salma                               ***************
 * ********** Date       : 04/12/2022                               ***************
 * ********** Version    : 1.0 V                                    ***************
 * ********** Description: BUZZER_INTERFACINE.h                        ***************
 * **********               Content Proto_Type functions            ***************
 * ********************************************************************************
 */
/*garden to define buzzer interface if not define */

#ifndef HAL_BIZZER_INCLUDE_BUZZER_INTERFACE_H_
#define HAL_BIZZER_INCLUDE_BUZZER_INTERFACE_H_

#include "buzzer_configuration.h"


/*
function name => BUZZER_INIT
 Argument=> void
 Return=>void
 Description=> make pin which buzzer connect with it OUTPUT
 Type=>Proto_Type
 */
void BUZZER_INIT(void);

/*
function name => BUZZER_INIT
 Argument=> u8 PIN
 Return=>void
 Description=> make pin which buzzer connect with it OUTPUT
 Type=>Proto_Type
 */
void BUZZER_INITT(u8 PIN);

/*
function name => BUZZER_ON
 Argument=> u8 PIN
 Return=>void
 Description=> make buzzer on and pin->1
 Type=>Proto_Type
 */
void BUZZER_ON(u8 PIN);

/*
function name => BUZZER_OFF
 Argument=> u8 PIN
 Return=>void
 Description=> make buzzer off and pin(output)->0
 Type=>Proto_Type
 */
void BUZZER_OFF(u8 PIN);

/*
function name => BUZZER_TOG
 Argument=> u8 PIN
 Return=>void
 Description=> make buzzer toggle and pin(output)->toggle
 Type=>Proto_Type
 */
void BUZZER_TOG(u8 PIN);

#endif /* HAL_BIZZER_INCLUDE_BUZZER_INTERFACE_H_ */
