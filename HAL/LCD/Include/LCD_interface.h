/*
 * LCD_interface.h
 *
 *  Created on: Apr 23, 2022
 *      Author: raya
 */

#ifndef HAL_LCD_INCLUDE_LCD_INTERFACE_H_
#define HAL_LCD_INCLUDE_LCD_INTERFACE_H_

#include"LCD_configuration.h"

/*send command*/
void LCD_VoidSendCom(u8 Local_Command);

/*send char*/

void LCD_VoidSendChar(u8 Local_Char);
/*LCD INIT*/

void LCD_Void_Init(void);
#endif /* HAL_LCD_INCLUDE_LCD_INTERFACE_H_ */
