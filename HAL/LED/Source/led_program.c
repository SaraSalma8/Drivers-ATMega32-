/*
 * led_program.c
 *
 *  Created on: Apr 13, 2022
 *      Author: raya
 */

/*
 * ********************************************************************************
 * ********** Author     : Sara Salma                               ***************
 * ********** Date       : 04/13/2022                               ***************
 * ********** Version    : 1.0 V                                    ***************
 * ********** Description: LED_program.c                            ***************
 * **********              Implementation function                  ***************
 * ********************************************************************************
 */



/*include lib to know address for ports */
#include<avr/io.h>
/*include lib to use delay*/
#include<util/delay.h>


/*include file have typedef variables */
#include "../../../LIB/STDTYPES.h"
/*include file have some value i need*/
#include "../../../LIB/DEFINE.h"




#include "../Include/led_interface.h"


/*
function name => LED_INIT
 Argument=> u8
 Return=>void
 Description=> make pin which LED connect with it OUTPUT
 Type=>Proto_Type
 */
void LED_INIT(u8 pin){

	#if   LED_Group  ==  GROUP_1
		DDRA|=(ONE<<pin);
	#elif LED_Group  ==  GROUP_2
		DDRB|=(ONE<<pin);
	#elif LED_Group  ==  GROUP_3
		DDRC|=(ONE<<pin);
	#elif LED_Group  ==  GROUP_4
		DDRD|=(ONE<<pin);
	#endif
}


/*
function name => LED_ON
 Argument=> u8 PIN
 Return=>void
 Description=> make LED on and pin->1
 Type=>Implementation
 */
void LED_ON(u8 PIN)
{
#if   LED_Group  ==  GROUP_1
	PORTA|=(ONE<<PIN);
#elif LED_Group  ==  GROUP_2
	PORTB|=(ONE<<PIN);
#elif LED_Group  ==  GROUP_3
	DDRC|=(ONE<<PIN);
#elif LED_Group  ==  GROUP_4
	PORTD|=(ONE<<PIN);
#endif
}

/*
function name => LED_OFF
 Argument=> u8 PIN
 Return=>void
 Description=> make LED off and pin(output)->0
 Type=>Implementation
 */
void LED_OFF(u8 PIN)
{
#if   LED_Group  ==  GROUP_1
	PORTA &=~(ONE<<PIN);
#elif LED_Group  ==  GROUP_2
	PORTB &=~(ONE<<PIN);
#elif LED_Group  ==  GROUP_3
	DDRC &=~(ONE<<PIN);
#elif LED_Group  ==  GROUP_4
	PORTD &=~(ONE<<PIN);
#endif
}

/*
function name => LED_TOG
 Argument=> u8 PIN
 Return=>void
 Description=> make LED toggle and pin(output)->toggle
 Type=>Implementation
 */
void LED_TOG(u8 PIN)
{

#if   LED_Group  ==  GROUP_1
	PORTA ^=(ONE<<PIN);

#elif LED_Group  ==  GROUP_2
	PORTB ^=(ONE<<PIN);

#elif LED_Group  ==  GROUP_3
	PORTC ^=(ONE<<PIN);

#elif LED_Group  ==  GROUP_4
	PORTD ^=(ONE<<PIN);
#endif
}
