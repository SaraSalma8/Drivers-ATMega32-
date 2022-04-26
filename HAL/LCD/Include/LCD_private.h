/*
 * LCD_private.h
 *
 *  Created on: Apr 23, 2022
 *      Author: raya
 */







/*garden to define LCD Private if not define */
#ifndef HAL_LCD_INCLUDE_LCD_PRIVATE_H_
#define HAL_LCD_INCLUDE_LCD_PRIVATE_H_

/* define some LCD commends */
#define CLEAR_MODE           0b00000001   /* ->clear                                       */
#define Function_Set         0b00111000   /* ->8-bit ->2Line ->5*8                         */
#define Entry_MODE           0b00000100   /* ->no screen shifting                          */
#define Display_Control      0b00001111   /* ->cursor on ->cursor blinking on ->display on */



#endif /* HAL_LCD_INCLUDE_LCD_PRIVATE_H_ */
