/*
 * URAT_Private.h
 *
 *  Created on: Jun 1, 2022
 *      Author: raya
 */
/*
 * ********************************************************************************
 * ********** Author     : Sara Salma                               ***************
 * ********** Date       : 06/01/2022                               ***************
 * ********** Version    : 1.0 V (06/01/2022)                       ***************
 * ********** Description: UART_Private.h                           ***************
 * ********************************************************************************
 */
/*garden to define UART Private if not define */
#ifndef MCAL_UART_INCLUDE_UART_PRIVATE_H_
#define MCAL_UART_INCLUDE_UART_PRIVATE_H_

/*---------------------------UART Behavior-------------------------*/
#define Polling           0
#define Interrupt         1

/*-----------------UART Mode----------------*/
#define Asynchronous      0
#define Synchronous       1
/*-----------------Stop Bits----------------*/
#define OneBit            0
#define TwoBits           1

/*-----------------Parity Mode----------------*/
#define  Disabled         0
#define  Even_Parity      1
#define  Odd_Parity       2


#endif /* MCAL_UART_INCLUDE_UART_PRIVATE_H_ */
