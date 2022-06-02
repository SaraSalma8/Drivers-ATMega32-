/*
 * EXTI_Configuration.h
 *
 *  Created on: May 6, 2022
 *      Author: raya
 */

/*
 * ********************************************************************************
 * ********** Author     : Sara Salma                               ***************
 * ********** Date       : 05/06/2022                               ***************
 * ********** Version    : 1.0 V (05/06/2022 )                      ***************
 * ********** Description: EXTI_Configuration.h                     ***************
 * ********************************************************************************
 */

/*garden to define EXTI Configuration if not define */
#ifndef MCAL_EXTI_INCLUDE_EXTI_CONFIGURATION_H_
#define MCAL_EXTI_INCLUDE_EXTI_CONFIGURATION_H_



#include"EXTI_Private.h"
/*Select the TriggerMode*/
/*Must Choose between this Options*/
/*
 * 1-EXTI_FallingEdge
 * 2-EXTI_RisingEdge
 * 3-EXTI_OnChangeEdge
 * 4-EXTI_LowLevel
 */
#define EXTI0_TriggerMode    OnChangeEdge
/*Select the TriggerMode*/
/*Must Choose between this Options*/
/*
 * 1-EXTI_FallingEdge
 * 2-EXTI_RisingEdge
 * 3-EXTI_OnChangeEdge
 * 4-EXTI_LowLevel
 */
#define EXTI1_TriggerMode   EXTI_RisingEdge
/*Select the TriggerMode*/
/*Must Choose between this Options*/
/*
 * 1-EXTI_FallingEdge
 * 2-EXTI_RisingEdge
 */
#define EXTI2_TriggerMode    EXTI_RisingEdge




#endif /* MCAL_EXTI_INCLUDE_EXTI_CONFIGURATION_H_ */
