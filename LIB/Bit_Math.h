/* 
****************************   Author : Sara Salma      *****************************
****************************   BIT_MATH.H               *****************************
****************************   Date   :11/3/2022        *****************************
****************************   Version-1 (11/3/2022)    *****************************
*/

#ifndef _BIT_MATH_H
#define _BIT_MATH_H

#define  SET_BIT(REG,BIT)       REG|=(1<<BIT)
#define  CLR_BIT(REG,BIT)       REG&=~(1<<BIT)
#define  TOGGLE_BIT(REG,BIT)    REG^=(1<<BIT)
#define  GET_BIT(REG,BIT)       (REG>>BIT)&1       //0b00000001 = 0x01 = 1

#endif
