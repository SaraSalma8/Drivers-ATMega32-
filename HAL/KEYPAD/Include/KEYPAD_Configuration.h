/*
 * KEYPAD_configuration.h
 *
 *  Created on: Apr 24, 2022
 *      Author: raya
 */
/*garden to define KEYPAD Configuration if not define */
#ifndef HAL_KEYPAD_INCLUDE_KEYPAD_CONFIGURATION_H_
#define HAL_KEYPAD_INCLUDE_KEYPAD_CONFIGURATION_H_

#include"KEYPAD_Private.h"
/*design must be in the same port first 4 bits for columns */
#define KEYPAD_PORT        PORT_B


#define COlUMN_NUM           4
#define ROW_NUM              4

/* you can the value only please don't change any thing*/
u8 KEYPAD4X4[ROW_NUM][COlUMN_NUM]={
	{'7','8','9','+'},
	{'4','5','6','-'},
	{'1','2','3','*'},
	{'=','0','c','/'}

};

#endif /* HAL_KEYPAD_INCLUDE_KEYPAD_CONFIGURATION_H_ */
