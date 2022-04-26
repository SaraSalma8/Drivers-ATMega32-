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
###########################################################################
#Function Name : BUZZER_VoidBuzzerInit                                    #
#Argument      : u8 Local_Pin                                             #
#Return        : void                                                     #
#Type          : ProtoType                                                #
#Description   : make pin which buzzer connect with it OUTPUT             #
###########################################################################
 */

void BUZZER_VoidBuzzerInit(u8 Local_Pin);

/*
###########################################################################
#Function Name : BUZZER_VoidBuzzerOn                                      #
#Argument      : u8 Local_Pin                                             #
#Return        : void                                                     #
#Type          : ProtoType                                                #
#Description   : make buzzer On and pin(output)->1                        #
###########################################################################
 */
void BUZZER_VoidBuzzerOn(u8 Local_Pin);
/*
###########################################################################
#Function Name : BUZZER_VoidBuzzerOff                                     #
#Argument      : u8 Local_Pin                                             #
#Return        : void                                                     #
#Type          : ProtoType                                                #
#Description   : make buzzer off and pin(output)->0                       #
###########################################################################
 */
void BUZZER_VoidBuzzerOff(u8 Local_Pin);
/*
###########################################################################
#Function Name : BUZZER_VoidBuzzerTog                                     #
#Argument      : u8 Local_Pin                                             #
#Return        : void                                                     #
#Type          :  ProtoType                                               #
#Description   : make buzzer toggle and pin(output)->toggle               #
###########################################################################
 */

void BUZZER_VoidBuzzerTog(u8 Local_Pin);

#endif /* HAL_BIZZER_INCLUDE_BUZZER_INTERFACE_H_ */
