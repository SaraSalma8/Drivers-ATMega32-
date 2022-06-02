/*
 * UART_Interface.h
 *
 *  Created on: Jun 1, 2022
 *      Author: raya
 */
/*
 * ********************************************************************************
 * ********** Author     : Sara Salma                               ***************
 * ********** Date       : 06/01/2022                               ***************
 * ********** Version    : 1.0 V (06/01/2022)                       ***************
 * ********** Description: UART_Interface.h                         ***************
 * **********              Proto_Type function                      ***************
 * ********************************************************************************
 */

/*garden to define UART interface if not define */
#ifndef MCAL_UART_INCLUDE_UART_INTERFACE_H_
#define MCAL_UART_INCLUDE_UART_INTERFACE_H_


/*include file have typedef variables */
#include "../../../LIB/STDTYPES.h"


#include"UART_Register.h"
#include"UART_Configuration.h"

#if UART_Behavior == Polling
/*
###########################################################################
#Function Name : UART_VoidInit                                            #
#Argument      : void                                                     #
#Return        : void                                                     #
#Type          : Proto_Type                                               #
#Description   : initialzation UART Communication                         #
###########################################################################
 */

void UART_VoidInitPolling(void);

/*
###########################################################################
#Function Name : UART_VoidTransmitData                                    #
#Argument      : u8 Local_Data                                            #
#Return        : void                                                     #
#Type          : Proto_Type                                               #
#Description   : Transmission Data Using UART Communication               #
###########################################################################
 */

void UART_VoidSendDataPolling(u8 Local_Data);

/*
###########################################################################
#Function Name : UART_U8ReceiveData                                       #
#Argument      : void                                                     #
#Return        : u8                                                       #
#Type          : Proto_Type                                               #
#Description   : Receive Data Using UART Communication                    #
###########################################################################
 */

u8 UART_U8ReceiveDataPolling(void);

#elif UART_Behavior == Interrupt

#endif

#endif /* MCAL_UART_INCLUDE_UART_INTERFACE_H_ */
