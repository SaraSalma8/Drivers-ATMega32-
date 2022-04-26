/*
 * DIO_Program.c
 *
 *  Created on: Apr 22, 2022
 *      Author: raya
 */

/*
 * ********************************************************************************
 * ********** Author     : Sara Salma                               ***************
 * ********** Date       : 04/22/2022                               ***************
 * ********** Version    : 2.0 V (04/26/2020 )                      ***************
 * ********** Description: DIO_Program.c                            ***************
 * **********              Implementation function                  ***************
 * ********************************************************************************
 */

/*include file have typedef variables */
#include "../../../LIB/STDTYPES.h"
/* include file have function like macro i need*/
#include"../../../LIB/Bit_Math.h"
/* include file have some values i need */
#include"../../../LIB/DEFINE.h"


#include"../Include/DIO_Register.h"
#include"../Include/DIO_Interface.h"

/*
###########################################################################
#Function Name : DIO_VoidSetPinDir                                        #
#Argument      : u8 Local_PORTName, u8 Local_PINNum, u8 Local_State       #
#Return        : void                                                     #
#Type          : Implementation                                           #
#Description   : set direction for any PIN in each PORT (INPUT,OUTPUT)    #
###########################################################################
 */
void  DIO_VoidSetPinDir(u8 Local_PORTName, u8 Local_PINNum, u8 Local_State)
{
	/* check PORTName & Local_PINNum are correct or not */
	if(Local_PORTName<=PORT_D && Local_PINNum <= PIN_D7  )
	{
		/* check Direction you need if OUTPUT*/
		if (Local_State== DIO_OUTPUT)
		{
			/* switch PORT*/
			switch (Local_PORTName)
			{
			/* Group Name              Register name-Baremetal*/
			/*make PIN in PORT OUTPUT */
			case PORT_A :  SET_BIT(DIO_DDRA_REG,      Local_PINNum);break;
			case PORT_B :  SET_BIT(DIO_DDRB_REG,      Local_PINNum);break;
			case PORT_C :  SET_BIT(DIO_DDRC_REG,      Local_PINNum);break;
			case PORT_D :  SET_BIT(DIO_DDRD_REG,      Local_PINNum);break;
			}


		}
		/* check Direction you need if INPUT*/
		else if (Local_State== DIO_INPUT)
		{
			/* switch PORT*/
			switch (Local_PORTName)
			{
			/*make PIN in PORT INPUT */
			case PORT_A :  CLR_BIT(DIO_DDRA_REG,       Local_PINNum);break;
			case PORT_B :  CLR_BIT(DIO_DDRB_REG,       Local_PINNum);break;
			case PORT_C :  CLR_BIT(DIO_DDRC_REG,       Local_PINNum);break;
			case PORT_D :  CLR_BIT(DIO_DDRD_REG,       Local_PINNum);break;
			}
		}

	}
}


/*
###########################################################################
#Function Name : DIO_VoidSetPortDir                                       #
#Argument      : u8 Local_PORTName, u8 Local_State                        #
#Return        : void                                                     #
#Type          : Implementation                                           #
#Description   : set direction for any PORT (INPUT,OUTPUT)                #
###########################################################################
 */
void DIO_VoidSetPortDir(u8 Local_PORTName,u8 Local_State)
{
	/* check PORTName is correct or not */
	if(Local_PORTName<=PORT_D )
	{
		/* switch PORT*/
		switch(Local_PORTName)
		{
		/* Group Name              Register name-Baremetal*/
		/* set PORT Direction by state entered */
		case PORT_A :  DIO_DDRA_REG = Local_State;break;
		case PORT_B :  DIO_DDRB_REG = Local_State;break;
		case PORT_C :  DIO_DDRC_REG = Local_State;break;
		case PORT_D :  DIO_DDRD_REG = Local_State;break;

		}
	}

}

/*
###########################################################################
#Function Name : DIO_VoidSetPinValue                                      #
#Argument      : u8 Local_PORTName, u8 Local_PINNum,u8 Local_Value        #
#Return        : void                                                     #
#Type          : Implementation                                           #
#Description   : set direction for anyPIN in each PORT (HIGH,LOW)         #
###########################################################################
 */
void DIO_VoidSetPinValue(u8 Local_PORTName, u8 Local_PINNum, u8 Local_Value)
{
	/* check PORTName & Local_PINNum are correct or not */
	if(Local_PORTName<=PORT_D && Local_PINNum <= PIN_D7  )
	{
		/* check Value you need if High*/
		if (Local_Value== DIO_HIGH)
		{
			/* switch PORT*/
			switch (Local_PORTName)
			{
			/* Group Name              Register name-Baremetal*/
			/*make PIN on PORT HIGH*/
			case PORT_A :  SET_BIT(DIO_PORTA_REG,    Local_PINNum);break;
			case PORT_B :  SET_BIT(DIO_PORTB_REG,    Local_PINNum);break;
			case PORT_C :  SET_BIT(DIO_PORTC_REG,    Local_PINNum);break;
			case PORT_D :  SET_BIT(DIO_PORTD_REG,    Local_PINNum);break;
			}


		}
		/* check Value you need if LOW*/
		else if (Local_Value== DIO_LOW)
		{
			/* switch PORT*/
			switch (Local_PORTName)
			{
			/*make PIN on PORT LOW*/
			case PORT_A :  CLR_BIT(DIO_PORTA_REG,      Local_PINNum);break;
			case PORT_B :  CLR_BIT(DIO_PORTB_REG,      Local_PINNum);break;
			case PORT_C :  CLR_BIT(DIO_PORTC_REG,      Local_PINNum);break;
			case PORT_D :  CLR_BIT(DIO_PORTD_REG,      Local_PINNum);break;
			}
		}


	}
}

/*
###########################################################################
#Function Name : DIO_VoidSetPortVaue                                      #
#Argument      : u8 Local_PORTName, u8 Local_State                        #
#Return        : void                                                     #
#Type          : Implementation                                           #
#Description   : set direction for any PORT (HIGH,LOW)                    #                                     #
###########################################################################
 */
void DIO_VoidSetPortValue(u8 Local_PORTName, u8 Local_Value)
{
	/* check PORTName is correct or not */
	if(Local_PORTName<= PORT_D )
	{
		/* switch PORT*/
		switch(Local_PORTName)
		{
		/* Group Name              Register name-Baremetal*/
		/* value PORT is value entered*/
		case PORT_A :  DIO_PORTA_REG = Local_Value;break;
		case PORT_B :  DIO_PORTB_REG = Local_Value;break;
		case PORT_C :  DIO_PORTC_REG = Local_Value;break;
		case PORT_D :  DIO_PORTD_REG = Local_Value;break;

		}
	}
}
/*
###########################################################################
#Function Name : DIO_VoidGetPinValue                                      #
#Argument      : u8 Local_PORTName, u8 Local_PINNum                       #
#Return        : u8                                                       #
#Type          : Implementation                                           #
#Description   : get pin value in any port                                #                                     #
###########################################################################
 */
u8 DIO_U8GetPinValue(u8 Local_PORTName, u8 Local_PINNum)
{
	/*variable to store value PIN */
	u8 Local_Return = ZERO;
	/* check PORTName & Local_PINNum are correct or not */
	if(Local_PORTName<=PORT_D && Local_PINNum <= PIN_D7  )
	{
		/* switch PORT*/
		switch (Local_PORTName)
		{
		/*store PIN value in Local_Return*/
		case PORT_A :Local_Return=GET_BIT(DIO_PINA_REG,      Local_PINNum); break;
		case PORT_B :Local_Return=GET_BIT(DIO_PINB_REG,      Local_PINNum); break;
		case PORT_C :Local_Return=GET_BIT(DIO_PINC_REG,      Local_PINNum); break;
		case PORT_D :Local_Return=GET_BIT(DIO_PIND_REG,      Local_PINNum); break;
		}

	}
	/*return PIN value */
	return Local_Return;
}
/*
###########################################################################
#Function Name : DIO_VoidTogPinValue                                      #
#Argument      : u8 Local_PORTName, u8 Local_PINNum                       #
#Return        : void                                                     #
#Type          : Implementation                                           #
#Description   : if Pin High make it Low and if Pin Low make it High      #
###########################################################################
 */

void DIO_VoidTogPinValue(u8 Local_PORTName, u8 Local_PINNum)
{
	/*variable to store value of Pin*/
	u8 Local_State = ONE_HUNDRED;
	/*store value of pin*/
	Local_State = DIO_U8GetPinValue(Local_PORTName,Local_PINNum);
	/*check value if high or no */
	if (Local_State==DIO_HIGH)
	{
		/*make pin Low*/
		DIO_VoidSetPinValue(Local_PORTName,Local_PINNum,DIO_LOW);
	}
	else
	{
		/*make pin High*/
		DIO_VoidSetPinValue(Local_PORTName,Local_PINNum,DIO_HIGH);
	}
}


