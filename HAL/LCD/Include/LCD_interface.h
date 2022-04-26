/*
 * LCD_interface.h
 *
 *  Created on: Apr 23, 2022
 *      Author: raya
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
#endif /* HAL_LCD_INCLUDE_LCD_INTERFACE_H_ */
