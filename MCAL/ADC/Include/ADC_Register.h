/*
 * ADC_Register.h
 *
 *  Created on: May 6, 2022
 *      Author: raya
 */

/*
 * ********************************************************************************
 * ********** Author     : Sara Salma                               ***************
 * ********** Date       : 05/08/2022                               ***************
 * ********** Version    : 1.0 V (05/08/2022 )                      ***************
 * ********** Description: ADC_Register.h                           ***************
 * **********              Address of Registers                     ***************
 * ********************************************************************************
 */



/*garden to define ADC Register if not define */
#ifndef MCAL_ADC_INCLUDE_ADC_REGISTER_H_
#define MCAL_ADC_INCLUDE_ADC_REGISTER_H_



/*-------------------------------ADMUX REGISTER--------------------------------- */
#define ADC_ADMUX       (*(volatile u8*)0x27)
#define ADC_REFS1            7
#define ADC_REFS0            6
#define ADC_ADLAR            5
#define ADC_MUX4             4
#define ADC_MUX3             3
#define ADC_MUX2             2
#define ADC_MUX1             1
#define ADC_MUX0             0

/*-------------------------------ADCSRA REGISTER--------------------------------- */
#define ADC_ADCSRA      (*(volatile u8*)0x26)
#define ADC_ADEN             7
#define ADC_ADSC             6
#define ADC_ADATE            5
#define ADC_ADIF             4
#define ADC_ADIE             3
#define ADC_ADSP2            2
#define ADC_ADSP1            1
#define ADC_ADSP0            0



/*--------------------------------DATA REGISTER----------------------------------*/
#define ADC_ADCH        (*(volatile u8*)0x25)
#define ADC_ADCL        (*(volatile u8*)0x24)

#define ADC_DATA        (*(volatile u16*)0x24)

#endif /* MCAL_ADC_INCLUDE_ADC_REGISTER_H_ */
