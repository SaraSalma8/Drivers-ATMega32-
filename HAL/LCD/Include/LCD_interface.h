/*
 * LCD_interface.h
 *
 *  Created on: Apr 23, 2022
 *      Author: raya
 */

/*
 * ********************************************************************************
 * ********** Author     : Sara Salma                               ***************
 * ********** Date       : 04/21/2022                               ***************
 * ********** Version    : 1.0 V                                    ***************
 * ********** Description: LCD_interface.h                          ***************
 * **********              ProtoType Function                       ***************
 * ********************************************************************************
 */

/*garden to define LCD Interface if not define */
#ifndef HAL_LCD_INCLUDE_LCD_INTERFACE_H_
#define HAL_LCD_INCLUDE_LCD_INTERFACE_H_

#include"LCD_configuration.h"

/*
###########################################################################
#Function Name : LCD_VoidSendCom                                          #
#Argument      : u8 Local_Command                                         #
#Return        : void                                                     #
#Type          : Proto_Type                                               #
#Description   : send command to LCD                                      #
###########################################################################
 */
void LCD_VoidSendCom(u8 Local_Command);

/*
###########################################################################
#Function Name : LCD_VoidSendChar                                         #
#Argument      : u8 Local_Char                                            #
#Return        : void                                                     #
#Type          : Proto_Type                                               #
#Description   : send char to LCD                                         #
###########################################################################
 */
void LCD_VoidSendChar(u8 Local_Char);
/*
###########################################################################
#Function Name : LCD_Void_Init                                            #
#Argument      : void                                                     #
#Return        : void                                                     #
#Type          : Proto_Type                                               #
#Description   : initialization                                           #
###########################################################################
 */
void LCD_Void_Init(void);

/*
###########################################################################
#Function Name : LCD_VoidSendString                                       #
#Argument      : pointer to char                                          #
#Return        : void                                                     #
#Type          : Proto_Type                                               #
#Description   : Display String                                           #
###########################################################################
 */

void LCD_VoidSendString(u8* Ptr_String);


void LCD_VoidGoToXY(u8 Local_XPosition, u8 Local_YPosition);


void LCD_voidsendmorenumber(u32 copy_u32number);

#endif /* HAL_LCD_INCLUDE_LCD_INTERFACE_H_ */
