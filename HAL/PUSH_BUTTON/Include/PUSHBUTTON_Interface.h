/*
 * push_button_interface.h
 *
 *  Created on: Apr 13, 2022
 *      Author: raya
 */


/*
 * ********************************************************************************
 * ********** Author     : Sara Salma                               ***************
 * ********** Date       : 04/12/2022                               ***************
 * ********** Version    : 1.0 V                                    ***************
 * ********** Description: PUSH_BUTTON_INTERFACINE.h                ***************
 * **********               Content Proto_Type functions            ***************
 * ********************************************************************************
 */

/*garden to define push button interface if not define */
#ifndef HAL_PUSH_BUTTON_INCLUDE_PUSHBUTTON_INTERFACE_H_
#define HAL_PUSH_BUTTON_INCLUDE_PUSHBUTTON_INTERFACE_H_


#include"PUSHBUTTON_Configuration.h"




/*
###########################################################################
#Function Name : PUSHBUTTON_VoidPushButtonInit                            #
#Argument      : u8 Local_PIN                                             #
#Return        : void                                                     #
#Type          : Proto-Type                                               #
#Description   : make pin push button connect with it INPUT               #
###########################################################################
 */

void PUSHBUTTON_VoidPushButtonInit(u8 Local_PIN);

/*
###########################################################################
#Function Name : PUSHBUTTON_U8GetPushButtonValue                          #
#Argument      : u8 Local_PIN                                             #
#Return        : u8                                                       #
#Type          : Proto-Type                                               #
#Description   : make pin push button connect with it INPUT               #
###########################################################################
 */

u8 PUSHBUTTON_U8GetPushButtonValue(u8 Local_PIN);





#endif /* HAL_PUSH_BUTTON_INCLUDE_PUSHBUTTON_INTERFACE_H_ */
