/*
 * KEYPAD_interface.h
 *
 *  Created on: Apr 24, 2022
 *      Author: raya
 */
/*garden to define KEYPAD interface if not define */
#ifndef HAL_KEYPAD_INCLUDE_KEYPAD_INTERFACE_H_
#define HAL_KEYPAD_INCLUDE_KEYPAD_INTERFACE_H_

/*include file have typedef variables */
#include "../../../LIB/STDTYPES.h"

#include"KEYPAD_Configuration.h"

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
#Argument      : void                                                     #
#Return        : u8                                                       #
#Type          : ProtoType                                                #
#Description   : return button value which pressed in KEYPAD              #
###########################################################################
 */
u8 KEYPAD_U8PressedNum(void);



#endif /* HAL_KEYPAD_INCLUDE_KEYPAD_INTERFACE_H_ */
