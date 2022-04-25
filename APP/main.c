/*
 * main.c
 *
 *  Created on: Apr 13, 2022
 *      Author: raya
 */


#include<avr/io.h>
#include <util/delay.h>

#include "../LIB/STDTYPES.h"
#include "../LIB/DEFINE.h"
#include"../LIB/Bit_Math.h"

#include"../MCAL/DIO/Include/DIO_Interface.h"

#include "../HAL/SEVEN_SEGMENT/Include/sev_segment_interface.h"
#include "../HAL/BIZZER/Include/buzzer_interface.h"
#include "../HAL/LED/Include/led_interface.h"

#define ROW  4
#define COLUM 4

void main (void)
{

	LED_INIT(RED_LED);
	LED_INIT(GREEN_LED);
	LED_INIT(YELLOW_LED);
	SEV_SEGMENT_INIT();




	 /*BUZZER_INIT();
	SEV_SEGMENT_INIT();
	while (1){
		SEV_SEGMENT_DISPLAY_NUM(5);
		_delay_ms(1000);
		SEV_SEGMENT_COUNT_TOMAX();
		_delay_ms(1000);
		SEV_SEGMENT_COUNT_TONUM(3);

*/


}

}
