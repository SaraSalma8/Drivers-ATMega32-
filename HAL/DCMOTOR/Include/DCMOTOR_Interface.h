/*
 * DCMOTOR_Interface.h
 *
 *  Created on: Apr 30, 2022
 *      Author: raya
 */

/*
 * ********************************************************************************
 * ********** Author     : Sara Salma                               ***************
 * ********** Date       : 04/30/2022                               ***************
 * ********** Version    : 1.0 V (04/30/2020 )                      ***************
 * ********** Description: DCMOTOR_Interface.h                      ***************
 * **********              ProtoTypes function                      ***************
 * ********************************************************************************
 */

/*garden to define DCMOTOR Interface if not define */
#ifndef HAL_DCMOTOR_INCLUDE_DCMOTOR_INTERFACE_H_
#define HAL_DCMOTOR_INCLUDE_DCMOTOR_INTERFACE_H_


#include"DCMOTOR_Configuration.h"

/*
###########################################################################
#Function Name : DCMOTOR_VoidInit                                         #
#Argument      : void                                                     #
#Return        : void                                                     #
#Type          : ProtoType                                                #
#Description   : initialization DCMOTOR                                   #
###########################################################################
 */
void DCMOTOR_VoidDcMotorInit(void);

/*
###########################################################################
#Function Name : DCMOTOR_VoidDcMotorHOn                                   #
#Argument      : void                                                     #
#Return        : void                                                     #
#Type          : ProtoType                                                #
#Description   : Turn on  DCMOTOR                                         #
###########################################################################
 */
void DCMOTOR_VoidDcMotorOn(u8 Local_Direction);

/*
###########################################################################
#Function Name : DCMOTOR_VoidDcMotorHOff                                  #
#Argument      : void                                                     #
#Return        : void                                                     #
#Type          : Implementation                                           #
#Description   : Turn off DCMOTOR                                         #
###########################################################################
 */
void DCMOTOR_VoidDcMotorOff(void);

#endif /* HAL_DCMOTOR_INCLUDE_DCMOTOR_INTERFACE_H_ */
