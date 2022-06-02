/*
 * UART_Register.h
 *
 *  Created on: Jun 1, 2022
 *      Author: raya
 */


/*
 * ********************************************************************************
 * ********** Author     : Sara Salma                               ***************
 * ********** Date       : 06/01/2022                               ***************
 * ********** Version    : 1.0 V (06/01/2022)                       ***************
 * ********** Description: UART_Register.h                          ***************
 * **********              Address of Registers                     ***************
 * ********************************************************************************
 */

/*garden to define UART Register if not define */
#ifndef MCAL_UART_INCLUDE_UART_REGISTER_H_
#define MCAL_UART_INCLUDE_UART_REGISTER_H_



/*-------------------------------UDR REGISTER--------------------------------- */
#define UART_UDR       (*(volatile u8*)0x2C) /*Store Data*/
/*-------------------------------UCSRA REGISTER--------------------------------- */
#define UART_UCSRA     (*(volatile u8*)0x2B)
#define UART_RXC       7   /*flag Receive Complete*/
#define UART_TXC       6   /*flag Transmit Complete*/
#define UART_UDRE      5   /*flag Data Register Empty*/
#define UART_U2X       1   /*to choose speed UART*/
/*-------------------------------UCSRB REGISTER--------------------------------- */
#define UART_UCSRB     (*(volatile u8*)0x2A)
#define UART_RXCIE     7   /*RX Complete Interrupt Enable*/
#define UART_TXCIE     6   /*TX Complete Interrupt Enable*/
#define UART_UDRIE     5   /*Data Register Empty Interrupt Enable*/
#define UART_RXEN      4   /*Receiver Enable*/
#define UART_TXEN      3   /*Transmission Enable*/
#define UART_UCSZ2     2   /*Pin2 Data Size*/
#define UART_RXB8      1
#define UART_TXB8      0

/*-------------------------------UCSRC REGISTER--------------------------------- */
#define UART_UCSRC     (*(volatile u8*)0x40)
#define UART_URSEL     7  /*Register Select (UCSRC[1] or UBRRH[0])*/
#define UART_UMSEL     6  /*UART Mode Select(Asynchronous-Synchronous)*/
#define UART_UPM1      5  /*Pin1 Parity Mode*/
#define UART_UPM0      4  /*Pin0 Parity Mode*/
#define UART_USBS      3  /*Stop Bit Select*/
#define UART_UCSZ1     2  /*Pin1 Data Size*/
#define UART_UCSZ0     1  /*Pin0 Data Size*/
#define UART_UCPOL     0  /*Clock Polarity*/
/*-------------------------------UBRRL REGISTER--------------------------------- */
#define UART_UBRRL     (*(volatile u8*)0x29)  /* Select Baud Rate */
/*-------------------------------UBRRH REGISTER--------------------------------- */
#define UART_UBRRH     (*(volatile u8*)0x40)
#define UART_URSEL     7  /*Register Select (UCSRC[1] or UBRRH[0])*/



#endif /* MCAL_UART_INCLUDE_UART_REGISTER_H_ */
