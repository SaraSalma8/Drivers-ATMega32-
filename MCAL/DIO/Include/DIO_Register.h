/*
 * DIO_Register.h
 *
 *  Created on: Apr 22, 2022
 *      Author: raya
 */
/*garden to define DIO Register if not define */
#ifndef MCAL_DIO_INCLUDE_DIO_REGISTER_H_
#define MCAL_DIO_INCLUDE_DIO_REGISTER_H_

/*Address from data sheet of Avr (Atmega32)*/

/********************************************Group-A************************************************/
#define DIO_DDRA_REG       (*(volatile u8*)0x3A)
#define DIO_PINA_REG       (*(volatile u8*)0x39)
#define DIO_PORTA_REG      (*(volatile u8*)0x3B)
/********************************************Group-B************************************************/
#define DIO_DDRB_REG       (*(volatile u8*)0x37)
#define DIO_PINB_REG       (*(volatile u8*)0x36)
#define DIO_PORTB_REG      (*(volatile u8*)0x38)
/********************************************Group-C************************************************/
#define DIO_DDRC_REG       (*(volatile u8*)0x34)
#define DIO_PINC_REG       (*(volatile u8*)0x33)
#define DIO_PORTC_REG      (*(volatile u8*)0x35)
/********************************************Group-D************************************************/
#define DIO_DDRD_REG       (*(volatile u8*)0x31)
#define DIO_PIND_REG       (*(volatile u8*)0x30)
#define DIO_PORTD_REG      (*(volatile u8*)0x32)


#endif /* MCAL_DIO_INCLUDE_DIO_REGISTER_H_ */
