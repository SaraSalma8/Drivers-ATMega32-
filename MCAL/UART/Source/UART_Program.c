/*
 * UART_Program.c
 *
 *  Created on: Jun 1, 2022
 *      Author: raya
 */

/*
 * ********************************************************************************
 * ********** Author     : Sara Salma                               ***************
 * ********** Date       : 06/01/2022                               ***************
 * ********** Version    : 1.0 V (06/01/2022 )                      ***************
 * ********** Description: UART_Program.c                           ***************
 * **********              Implementation function                  ***************
 * ********************************************************************************
 */




/*include file have typedef variables */
#include "../../../LIB/STDTYPES.h"

/* include file have function like macro i need*/
#include"../../../LIB/Bit_Math.h"

#include"../Include/UART_Interface.h"


#if UART_Behavior == Polling
/*
###########################################################################
#Function Name : UART_VoidInit                                            #
#Argument      : void                                                     #
#Return        : void                                                     #
#Type          : Implementation                                           #
#Description   : initialzation UART Communication                         #
###########################################################################
 */

void UART_VoidInitpolling(void)
{
	/*Make Speed Normal*/
	CLR_BIT(UART_UCSRA,UART_U2X);
	/*Select Baud Rate*/
	UART_UBRRL = UART_BaudRate;
	/*Select UCSRC Register*/
	SET_BIT(UART_UCSRC,UART_URSEL);
	/*Select Mode (Asynchronous)*/
#if UART_SelectMode  == Asynchronous
	CLR_BIT(UART_UCSRC,UART_UMSEL);
	/*Select Baud Rate */
	UART_UBRRL = UART_BaudRate;
#elif UART_SelectMode  == Synchronous
	SET_BIT(UART_UCSRC,UART_UMSEL);
#endif
	/*Select Parity*/
#if UART_ParityMode == Disabled
	CLR_BIT(UART_UCSRC,UART_UPM0);
	CLR_BIT(UART_UCSRC,UART_UPM1);
#elif UART_ParityMode == Even_Parity
	CLR_BIT(UART_UCSRC,UART_UPM0);
	SET_BIT(UART_UCSRC,UART_UPM1);
#elif UART_ParityMode == Odd_Parity
	SET_BIT(UART_UCSRC,UART_UPM0);
	SET_BIT(UART_UCSRC,UART_UPM1);
#endif
	/*Select Numbers of Stop Bits */
#if UART_StopBit == OneBit
	CLR_BIT(UART_UCSRC,UART_USBS);
#elif UART_StopBit == TwoBits
	SET_BIT(UART_UCSRC,UART_USBS);
#endif
	/*Select Numbers 0f Data Bits */
	/*Select 8 Bits for Data */
	SET_BIT(UART_UCSRC,UART_UCSZ0);
	SET_BIT(UART_UCSRC,UART_UCSZ1);
	CLR_BIT(UART_UCSRB,UART_UCSZ2);


}

/*
###########################################################################
#Function Name : UART_VoidTransmitData                                    #
#Argument      : u8 Local_Data                                            #
#Return        : void                                                     #
#Type          : Implementation                                           #
#Description   : Transmission Data Using UART Communication               #
###########################################################################
 */

void UART_VoidSendDataPolling(u8 Local_Data)
{
	/*Put Data in TX Buffer*/
	UART_UDR = Local_Data;
	/*Enable Transmission*/
	SET_BIT(UART_UCSRB,UART_TXEN);
	/*waiting Tx Buffer Empty(Rise flag Data Register Empty)*/
	while(GET_BIT(UART_UCSRA,UART_UDRE) != 1)
	{

	}

}

/*
###########################################################################
#Function Name : UART_U8ReceiveData                                       #
#Argument      : void                                                     #
#Return        : u8                                                       #
#Type          : Implementation                                           #
#Description   : Receive Data Using UART Communication                    #
###########################################################################
 */

u8 UART_U8ReceiveDataPolling(void)
{
	/*Enable Receive*/
	SET_BIT(UART_UCSRB,UART_RXEN);
	/*Waiting flag Receive Complete*/
	while(GET_BIT(UART_UCSRA,UART_RXC) != 1)
	{
	}
	/*Return Received Data */
	return UART_UDR;

}

#elif UART_Behavior == Interrupt

#endif
