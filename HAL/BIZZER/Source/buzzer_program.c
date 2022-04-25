/*
 * buzzer_program.c
 *
 *  Created on: Apr 12, 2022
 *      Author: raya
 */

/*
 * ********************************************************************************
 * ********** Author     : Sara Salma                               ***************
 * ********** Date       : 04/13/2022                               ***************
 * ********** Version    : 1.0 V                                    ***************
 * ********** Description: buzzer_program.c                            ***************
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



#include "../Include/buzzer_interface.h"

/*
function name => BUZZER_INIT
 Argument=> void
 Return=>void
 Description=> make pin which buzzer connect with it OUTPUT
 Type=>Implementation
 */
void BUZZER_INIT(void)
{
  #if Buzzer_Group == GROUP_1
       #if BUZZER_PIN ==   PIN_ONE
	      DDRA|=(ONE<<PIN_ONE);
       #elif BUZZER_PIN ==   PIN_TWO
	      DDRA|=(ONE<<PIN_TWO);
       #elif BUZZER_PIN ==   PIN_THREE
	      DDRA|=(ONE<<PIN_THREE);
       #elif BUZZER_PIN ==   PIN_FOUR
	      DDRA|=(ONE<<PIN_FOUR);
       #elif BUZZER_PIN ==   PIN_FIVE
	      DDRA|=(ONE<<PIN_FIVE);
       #elif BUZZER_PIN ==   PIN_SIX
	      DDRA|=(ONE<<PIN_SIX);
       #elif BUZZER_PIN ==   PIN_SEVEN
	      DDRA|=(ONE<<PIN_SEVEN);
       #elif BUZZER_PIN ==   PIN_EIGHT
	      DDRA|=(ONE<<PIN_EIGHT);
       #endif

  #elif Buzzer_Group == GROUP_2
       #if BUZZER_PIN ==   PIN_ONE
	      DDRB|=(ONE<<PIN_ONE);
       #elif BUZZER_PIN ==   PIN_TWO
	      DDRB|=(ONE<<PIN_TWO);
       #elif BUZZER_PIN ==   PIN_THREE
	      DDRB|=(ONE<<PIN_THREE);
       #elif BUZZER_PIN ==   PIN_FOUR
	      DDRB|=(ONE<<PIN_FOUR);
       #elif BUZZER_PIN ==   PIN_FIVE
	      DDRB|=(ONE<<PIN_FIVE);
       #elif BUZZER_PIN ==   PIN_SIX
	      DDRB|=(ONE<<PIN_SIX);
       #elif BUZZER_PIN ==   PIN_SEVEN
	      DDRB|=(ONE<<PIN_SEVEN);
       #elif BUZZER_PIN ==   PIN_EIGHT
	      DDRB|=(ONE<<PIN_EIGHT);
       #endif

  #elif Buzzer_Group == GROUP_3
       #if BUZZER_PIN ==   PIN_ONE
	      DDRC|=(ONE<<PIN_ONE);
       #elif BUZZER_PIN ==   PIN_TWO
	      DDRC|=(ONE<<PIN_TWO);
       #elif BUZZER_PIN ==   PIN_THREE
	      DDRC|=(ONE<<PIN_THREE);
       #elif BUZZER_PIN ==   PIN_FOUR
	      DDRC|=(ONE<<PIN_FOUR);
       #elif BUZZER_PIN ==   PIN_FIVE
	      DDRC|=(ONE<<PIN_FIVE);
       #elif BUZZER_PIN ==   PIN_SIX
	      DDRC|=(ONE<<PIN_SIX);
       #elif BUZZER_PIN ==   PIN_SEVEN
	      DDRC|=(ONE<<PIN_SEVEN);
       #elif BUZZER_PIN ==   PIN_EIGHT
	      DDRC|=(ONE<<PIN_EIGHT);
       #endif

  #elif Buzzer_Group == GROUP_4
       #if BUZZER_PIN ==   PIN_ONE
	      DDRD|=(ONE<<PIN_ONE);
       #elif BUZZER_PIN ==   PIN_TWO
	      DDRD|=(ONE<<PIN_TWO);
       #elif BUZZER_PIN ==   PIN_THREE
	      DDRD|=(ONE<<PIN_THREE);
       #elif BUZZER_PIN ==   PIN_FOUR
	      DDRD|=(ONE<<PIN_FOUR);
       #elif BUZZER_PIN ==   PIN_FIVE
	      DDRD|=(ONE<<PIN_FIVE);
       #elif BUZZER_PIN ==   PIN_SIX
	      DDRD|=(ONE<<PIN_SIX);
       #elif BUZZER_PIN ==   PIN_SEVEN
	      DDRD|=(ONE<<PIN_SEVEN);
       #elif BUZZER_PIN ==   PIN_EIGHT
	      DDRD|=(ONE<<PIN_EIGHT);
       #endif

 #endif
}

/*
function name => BUZZER_INITT
 Argument=> u8 BUZZER_PIN
 Return=>void
 Description=> make pin which buzzer connect with it OUTPUT
 Type=>Implementation
 */
void BUZZER_INITT(u8 PIN)
{
#if   Buzzer_Group  ==  GROUP_1
	DDRA|=(ONE<<PIN);
#elif Buzzer_Group  ==  GROUP_2
	DDRB|=(ONE<<PIN);
#elif Buzzer_Group  ==  GROUP_3
	DDRC|=(ONE<<PIN);
#elif Buzzer_Group  ==  GROUP_4
	DDRD|=(ONE<<PIN);
#endif
}

/*
function name => BUZZER_ON
 Argument=> u8 PIN
 Return=>void
 Description=> make buzzer on and pin->1
 Type=>Implementation
 */
void BUZZER_ON(u8 PIN)
{
#if   Buzzer_Group  ==  GROUP_1
	PORTA|=(ONE<<PIN);
#elif Buzzer_Group  ==  GROUP_2
	PORTB|=(ONE<<PIN);
#elif Buzzer_Group  ==  GROUP_3
	DDRC|=(ONE<<PIN);
#elif Buzzer_Group  ==  GROUP_4
	PORTD|=(ONE<<PIN);
#endif
}

/*
function name => BUZZER_OFF
 Argument=> u8 PIN
 Return=>void
 Description=> make buzzer off and pin(output)->0
 Type=>Implementation
 */
void BUZZER_OFF(u8 PIN)
{
#if   Buzzer_Group  ==  GROUP_1
	PORTA &=~(ONE<<PIN);
#elif Buzzer_Group  ==  GROUP_2
	PORTB &=~(ONE<<PIN);
#elif Buzzer_Group  ==  GROUP_3
	DDRC &=~(ONE<<PIN);
#elif Buzzer_Group  ==  GROUP_4
	PORTD &=~(ONE<<PIN);
#endif
}

/*
function name => BUZZER_TOG
 Argument=> u8 PIN
 Return=>void
 Description=> make buzzer toggle and pin(output)->toggle
 Type=>Implementation
 */
void BUZZER_TOG(u8 PIN)
{
	u8 counter = ZERO;
#if   Buzzer_Group  ==  GROUP_1
	for(counter= START_COUNT ; counter < MAX_TIME ; counter++)
		{
	PORTA ^=(ONE<<PIN);
	_delay_ms(1000);
	PORTA ^=(ONE<<PIN);
		}
#elif Buzzer_Group  ==  GROUP_2
	for(counter= START_COUNT ; counter < MAX_TIME ; counter++)
		{
	PORTB ^=(ONE<<PIN);
	_delay_ms(1000);
	PORTB ^=(ONE<<PIN);
		}
#elif Buzzer_Group  ==  GROUP_3
	for(counter= START_COUNT ; counter < MAX_TIME ; counter++)
		{
	PORTC ^=(ONE<<PIN);
	_delay_ms(1000);
	PORTC ^=(ONE<<PIN);
		}
#elif Buzzer_Group  ==  GROUP_4
	for(counter= START_COUNT ; counter < MAX_TIME ; counter++)
	{
	PORTD ^=(ONE<<PIN);
	_delay_ms(1000);
	PORTD ^=(ONE<<PIN);
}
#endif


}
