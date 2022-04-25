/*
 * sev_segment_program.c
 *
 *  Created on: Apr 12, 2022
 *      Author: raya
 */

#include <avr/io.h>
#include <util/delay.h>

#include "../../../LIB/STDTYPES.h"
#include "../../../LIB/DEFINE.h"


#include "../Include/sev_segment_configuration.h"
#include "../Include/sev_segment_privte.h"
#include "../Include/sev_segment_interface.h"

u16 SEVEN_SEGMENT_NUMBERS[SEV_MAX_NUMS]={ZERO_Anode,ONE_Anode,TWO_Anode,THREE_Anode,FOUR_Anode,FIVE_Anode,SIX_Anode,SEVEN_Anode,EIGHT_Anode,NINE_Anode};

/*
function name => SEV_SEGMENT_INIT
 Argument=> void
 Return=>void
 Description=> make port which seven segment connect with it OUTPUT
 Type=>Implementation
 */
void SEV_SEGMENT_INIT(void)
{
#if SEV_SEGMENT_GROUP  ==  GROUP_1
	DDRA=OUTPUT;
#elif SEV_SEGMENT_GROUP  ==  GROUP_2
	DDRB=OUTPUT;
#elif SEV_SEGMENT_GROUP  ==  GROUP_3
	DDRC=OUTPUT;
#elif SEV_SEGMENT_GROUP  ==  GROUP_4
	DDRD=OUTPUT;
#endif
}


/*
function name => SEV_SEGMENT_DISPLAY_NUM
 Argument=> u8 number
 Return=>void
 Description=> Display number which enter by user
 Type=>Implementation
 */
void SEV_SEGMENT_DISPLAY_NUM(u8 number)
{

#if  SEV_SEGMENT_GROUP  ==  GROUP_1
	switch(number){
	case ONE :
		PORTA=ONE_Anode;
		break;
	case TWO :
	    PORTA=TWO_Anode;
		break;
	case THREE :
		PORTA=THREE_Anode;
		break;
	case FOUR :
		PORTA=FOUR_Anode;
		break;
	case FIVE :
		PORTA=FIVE_Anode;
		break;
	case SIX :
		PORTA=SIX_Anode;
		break;
	case EIGHT :
		PORTA=EIGHT_Anode;
		break;
	case NINE :
		PORTA=NINE_Anode;
		break;
	default:
		PORTA=ZERO_Anode;
		break;
	}
#elif SEV_SEGMENT_GROUP  ==  GROUP_2
	switch(number){
	case ONE :
		PORTB=ONE_Anode;
		break;
	case TWO :
	    PORTB=TWO_Anode;
		break;
	case THREE :
		PORTB=THREE_Anode;
		break;
	case FOUR :
		PORTB=FOUR_Anode;
		break;
	case FIVE :
		PORTB=FIVE_Anode;
		break;
	case SIX :
		PORTB=SIX_Anode;
		break;
	case EIGHT :
		PORTB=EIGHT_Anode;
		break;
	case NINE :
		PORTB=NINE_Anode;
		break;
	default:
		PORTB=ZERO_Anode;
		break;
	}
#elif SEV_SEGMENT_GROUP  ==  GROUP_3
	switch(number){
	case ONE :
		PORTC=ONE_Anode;
		break;
	case TWO :
	    PORTC=TWO_Anode;
		break;
	case THREE :
		PORTC=THREE_Anode;
		break;
	case FOUR :
		PORTC=FOUR_Anode;
		break;
	case FIVE :
		PORTC=FIVE_Anode;
		break;
	case SIX :
		PORTC=SIX_Anode;
		break;
	case SEVEN :
		PORTC= SEVEN_Anode;
		break;
	case EIGHT :
		PORTC=EIGHT_Anode;
		break;
	case NINE :
		PORTC=NINE_Anode;
		break;
	default:
		PORTC=ZERO_Anode;
		break;
	}
#elif SEV_SEGMENT_GROUP  ==  GROUP_4
	switch(number){
	case ONE :
		PORTD=ONE_Anode;
		break;
	case TWO :
	    PORTD=TWO_Anode;
		break;
	case THREE :
		PORTD=THREE_Anode;
		break;
	case FOUR :
		PORTD=FOUR_Anode;
		break;
	case FIVE :
		PORTD=FIVE_Anode;
		break;
	case SIX :
		PORTD=SIX_Anode;
		break;

	case EIGHT :

		PORTD=EIGHT_Anode;
		break;
	case NINE :
		PORTD=NINE_Anode;
		break;
	default:
		PORTD=ZERO_Anode;
		break;
	}
#endif
}



/*
function name => SEV_SEGMENT_COUNT_TOMAX
 Argument=> void
 Return=>void
 Description=> Display number from 0 to 9 with delay one second
 Type=>Implementation
 */
void SEV_SEGMENT_COUNT_TOMAX(void){
u8 counter = ZERO;
#if SEV_SEGMENT_GROUP  ==  GROUP_1
for(counter = LOOP_START ;counter<SEV_MAX_NUMS;counter++)
{
			PORTA=SEVEN_SEGMENT_NUMBERS[counter];
			_delay_ms(1000);
}
#elif SEV_SEGMENT_GROUP  ==  GROUP_2
for(counter = LOOP_START ;counter<SEV_MAX_NUMS;counter++)
{
			PORTB=SEVEN_SEGMENT_NUMBERS[counter];
			_delay_ms(1000);
}
#elif SEV_SEGMENT_GROUP  ==  GROUP_3
for(counter = LOOP_START ;counter<SEV_MAX_NUMS;counter++)
{
			PORTC=SEVEN_SEGMENT_NUMBERS[counter];
			_delay_ms(1000);
}
#elif SEV_SEGMENT_GROUP  ==  GROUP_4
for(counter = LOOP_START ;counter<SEV_MAX_NUMS;counter++)
{
			PORTD=SEVEN_SEGMENT_NUMBERS[counter];
			_delay_ms(1000);
}
#endif
}


/*
function name => SEV_SEGMENT_COUNT_TONUM
 Argument=> u8 number
 Return=>void
 Description=> Display number from 0 to number enter by user with delay one second
 Type=>Implementation
 */
u8 SEV_SEGMENT_COUNT_TONUM(u8 number)
{
	u8 counter = ZERO;
	u8 Local_state = NOK;
	if(number>=ZERO && number <= NINE)
	{
	#if SEV_SEGMENT_GROUP  ==  GROUP_1
	for(counter = LOOP_START ;counter<number;counter++)
	{
				PORTA=SEVEN_SEGMENT_NUMBERS[counter];
				_delay_ms(1000);
	}
	#elif SEV_SEGMENT_GROUP  ==  GROUP_2
	for(counter = LOOP_START ;counter<number;counter++)
	{
				PORTB=SEVEN_SEGMENT_NUMBERS[counter];
				_delay_ms(1000);
	}
	#elif SEV_SEGMENT_GROUP  ==  GROUP_3
	for(counter = LOOP_START ;counter<number;counter++)
	{
				PORTC=SEVEN_SEGMENT_NUMBERS[counter];
				_delay_ms(1000);
	}
	#elif SEV_SEGMENT_GROUP  ==  GROUP_4
	for(counter = LOOP_START ;counter<number;counter++)
	{
				PORTD=SEVEN_SEGMENT_NUMBERS[counter];
				_delay_ms(1000);
	}
	#endif
	Local_state = OK;
}
	return Local_state;
}
