/*
 * GIE_Register.h
 *
 *  Created on: May 6, 2022
 *      Author: raya
 */
/*
 * ********************************************************************************
 * ********** Author     : Sara Salma                               ***************
 * ********** Date       : 05/08/2022                               ***************
 * ********** Version    : 1.0 V (045/08/2022)                      ***************
 * ********** Description: GIE_Register.h                           ***************
 * **********              Address of Registers                     ***************
 * ********************************************************************************
 */

/*garden to define GIE Register if not define */
#ifndef MCAL_GIE_INCLUDE_GIE_REGISTER_H_
#define MCAL_GIE_INCLUDE_GIE_REGISTER_H_




/*include file have typedef variables */
#include"../../../LIB/STDTYPES.h"



/*Status Register Definition */
#define SREG   *((volatile u8 *)0x5F)

#define  I     7 /* Global Interrupt Enable*/
#define  T     6 /* Bit Copy Storage */
#define  H     5 /* Half Carry Flag */
#define  S     4 /* SIGN FLAG*/
#define  V     3/* two's complement over flow flag*/
#define  N     2/* negative flag*/
#define  Z     1/* zero flag*/
#define  C     0 /* carry flag*/

#endif /* MCAL_GIE_INCLUDE_GIE_REGISTER_H_ */
