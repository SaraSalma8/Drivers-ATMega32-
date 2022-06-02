/*
 * UART_Configuration.h
 *
 *  Created on: Jun 1, 2022
 *      Author: raya
 */


/*
 * ********************************************************************************
 * ********** Author     : Sara Salma                               ***************
 * ********** Date       : 06/01/2022                               ***************
 * ********** Version    : 1.0 V (06/01/2022)                       ***************
 * ********** Description: UART_Configuration.h                     ***************
 * ********************************************************************************
 */
/*garden to define UART Configuration if not define */
#ifndef MCAL_UART_INCLUDE_UART_CONFIGURATION_H_
#define MCAL_UART_INCLUDE_UART_CONFIGURATION_H_

#include "UART_Private.h"

/*---------------------------UART Behavior-------------------------*/
/*You Must choose(Interrupt or Polling)*/
#define UART_Behavior    Polling



/*-----------------Stop Bits----------------*/
/* You must choose (TwoBits or OneBit) */
#define UART_StopBit        TwoBits

/*-----------------UART Mode----------------*/
/* You must choose (Asynchronous-Synchronous) */
#define UART_SelectMode    Asynchronous

/*-----------------Parity Mode----------------*/
/*You must choose(Disabled or Even_Parity or  Odd_Parity)*/
#define UART_ParityMode     Disabled

/*-----------------Baud Rate----------------*/
#define UART_BaudRate         51

#endif /* MCAL_UART_INCLUDE_UART_CONFIGURATION_H_ */
