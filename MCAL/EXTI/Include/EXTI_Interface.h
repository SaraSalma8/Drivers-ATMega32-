/*
 * EXTI_Interface.h
 *
 *  Created on: May 6, 2022
 *      Author: raya
 */

/*
 * ********************************************************************************
 * ********** Author     : Sara Salma                               ***************
 * ********** Date       : 05/06/2022                               ***************
 * ********** Version    : 1.0 V (05/06/2022 )                      ***************
 * ********** Description: EXTI_Interface.h                         ***************
 * **********              Proto_Type function                      ***************
 * ********************************************************************************
 */

/*garden to define EXTI interface if not define */
#ifndef MCAL_EXTI_INCLUDE_EXTI_INTERFACE_H_
#define MCAL_EXTI_INCLUDE_EXTI_INTERFACE_H_

#include"EXTI_Configuration.h"

/*
###########################################################################
#Function Name : EXRI0_VoidInit                                           #
#Argument      : void                                                     #
#Return        : void                                                     #
#Type          : Proto_Type                                               #
#Description   : initilaztion External Interrupt Zero                     #
###########################################################################
 */
void EXTI0_VoidInit(void);
/*
###########################################################################
#Function Name : EXRI1_VoidInit                                           #
#Argument      : void                                                     #
#Return        : void                                                     #
#Type          : Proto_Type                                               #
#Description   : initilazation External Interrupt ONE                      #
###########################################################################
 */
void EXTI1_VoidInit(void);
/*
###########################################################################
#Function Name : EXRI2_VoidInit                                           #
#Argument      : void                                                     #
#Return        : void                                                     #
#Type          : Proto_Type                                               #
#Description   : initilaztion External Interrupt TWO                      #
###########################################################################
 */
void EXTI2_VoidInit(void);



#endif /* MCAL_EXTI_INCLUDE_EXTI_INTERFACE_H_ */
