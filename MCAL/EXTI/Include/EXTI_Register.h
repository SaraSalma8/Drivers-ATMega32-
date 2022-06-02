/*
 * EXTI_Register.h
 *
 *  Created on: May 6, 2022
 *      Author: raya
 */


/*
 * ********************************************************************************
 * ********** Author     : Sara Salma                               ***************
 * ********** Date       : 05/06/2022                               ***************
 * ********** Version    : 1.0 V (05/06/2022 )                      ***************
 * ********** Description: EXTI_Register.h                          ***************
 * **********              Address of Registers                     ***************
 * ********************************************************************************
 */

/*garden to define EXTI Register if not define */
#ifndef MCAL_EXTI_INCLUDE_EXTI_REGISTER_H_
#define MCAL_EXTI_INCLUDE_EXTI_REGISTER_H_



/*---------------------------------Register----------------------------------------*/
/*to Enable Peripheral (Interrupt Sense Control)  */
#define EXTI_MCUCR    (*(volatile u8 *)0x55)/* (ENTI0,ENTI1)*/
#define EXTI_MCUCSR   (*(volatile u8 *)0x54)/* (ENTI2)*/
/*--------------------------------BIT Name-----------------------------------------*/
/*EXTI-0   (EXTI_MCUCR)  */
#define EXTI_ISC00    0
#define EXTI_ISC01    1
/*EXTI-1   (EXTI_MCUCR)  */
#define EXTI_ISC10    2
#define EXTI_ISC11    3
/*EXTI-2   (EXTI_MCUCSR) */
#define EXTI_ISC2     6
/*---------------------------------Register----------------------------------------*/
/*Enable Interrupt*/
#define EXTI_GICR     (*(volatile u8 *)0x5B)
/*--------------------------------BIT Name-----------------------------------------*/
/*Interrupt Enable*/
#define EXTI_INT0     6
#define EXTI_INT1     7
#define EXTI_INT2     5
/*---------------------------------Register----------------------------------------*/
/*to Enable Flag (flag is rising always)*/
#define EXTI_GIFR     (*(volatile u8 *)0x5A)
/*--------------------------------BIT Name-----------------------------------------*/
/*Interrupt Flag*/
#define EXTI_INTF0     6
#define EXTI_INTF1     7
#define EXTI_INTF2     5

#endif /* MCAL_EXTI_INCLUDE_EXTI_REGISTER_H_ */
