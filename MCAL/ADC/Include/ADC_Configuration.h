/*
 * ADC_Configuration.h
 *
 *  Created on: May 6, 2022
 *      Author: raya
 */

/*
 * ********************************************************************************
 * ********** Author     : Sara Salma                               ***************
 * ********** Date       : 05/08/2022                               ***************
 * ********** Version    : 1.0 V (05/08/2022 )                      ***************
 * ********** Description: ADC_Configuration.h                      ***************
 * ********************************************************************************
 */

/*garden to define ADC configuration if not define */
#ifndef MCAL_ADC_INCLUDE_ADC_CONFIGURATION_H_
#define MCAL_ADC_INCLUDE_ADC_CONFIGURATION_H_

#include"ADC_Private.h"
/*Must choose one of this Options
1- ADC_PRESCALER2
2- ADC_PRESCALER4
3- ADC_PRESCALER8
4- ADC_PRESCALER16
5- ADC_PRESCALER32
6- ADC_PRESCALER64
7- ADC_PRESCALER128
*/
#define ADC_PrecsalerMode          ADC_PRESCALER8

#endif /* MCAL_ADC_INCLUDE_ADC_CONFIGURATION_H_ */
