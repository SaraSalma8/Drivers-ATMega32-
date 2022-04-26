/*
 * KEYPAD_interface.h
 *
 *  Created on: Apr 24, 2022
 *      Author: raya
 */


/*
 * ********************************************************************************
 * ********** Author     : Sara Salma                               ***************
 * ********** Date       : 04/20/2022                               ***************
 * ********** Version    : 1.0 V (04/20/2020 )                      ***************
 * ********** Description: KEYPAD_Interface.h                       ***************
 * **********              ProtoType function                       ***************
 * ********************************************************************************
 */


/*garden to define KEYPAD interface if not define */
#ifndef HAL_KEYPAD_INCLUDE_KEYPAD_INTERFACE_H_
#define HAL_KEYPAD_INCLUDE_KEYPAD_INTERFACE_H_

/*include file have typedef variables */
#include "../../../LIB/STDTYPES.h"



/*
###########################################################################
#Function Name : KEYPAD_VoidInit                                          #
#Argument      : void                                                     #
#Return        : void                                                     #
#Type          : ProtoType                                                #
#Description   : initilazation KEYPad set PORT which connect with Keypad  #
#                OUTPUT                                                   #
###########################################################################
 */
void KEYPAD_VoidInit(void);

/*
###########################################################################
#Function Name : KEYPAD_U8PressedNum                                      #
#Argument      : u8 * Keypad_value                                        #
#Return        : void                                                       #
#Type          : ProtoType                                                #
#Description   : return button value which pressed in KEYPAD              #
###########################################################################
 */
void KEYPAD_VoidPressedNum(u8 * Keypad_value);



#endif /* HAL_KEYPAD_INCLUDE_KEYPAD_INTERFACE_H_ */
