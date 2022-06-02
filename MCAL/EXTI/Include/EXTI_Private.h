/*
 * EXTI_Private.h
 *
 *  Created on: May 6, 2022
 *      Author: raya
 */

/*
 * ********************************************************************************
 * ********** Author     : Sara Salma                               ***************
 * ********** Date       : 05/06/2022                               ***************
 * ********** Version    : 1.0 V (05/06/2022 )                      ***************
 * ********** Description: EXTI_Private.h                           ***************
 * ********************************************************************************
 */
/*garden to define EXTI Private if not define */
#ifndef MCAL_EXTI_INCLUDE_EXTI_PRIVATE_H_
#define MCAL_EXTI_INCLUDE_EXTI_PRIVATE_H_

/* External Interrupt ZERO*/
#define EXTI0_PORT           PORT_D
#define EXTI0_PIN            PIN_D2
/* External Interrupt ONE*/
#define EXTI1_PORT           PORT_D
#define EXTI1_PIN            PIN_D3
/* External Interrupt TWO*/
#define EXTI2_PORT           PORT_B
#define EXTI2_PIN            PIN_B2


/*Options for Triggering Mode*/
#define EXTI_FallingEdge    0
#define EXTI_RisingEdge     1
#define EXTI_OnChangeEdge   2
#define EXTI_LowLevel       3



#endif /* MCAL_EXTI_INCLUDE_EXTI_PRIVATE_H_ */
