/*
 * DIO_Program.c
 *
 *  Created on: Apr 22, 2022
 *      Author: raya
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
 if(Local_PORTName<=PORT_D && Local_PINNum <= PIN_D7  )
 {
	if (Local_State== DIO_OUTPUT)
	{
		switch (Local_PORTName)
		{ /* Group Name              Register name-Baremetal*/
		case PORT_A :  SET_BIT(DIO_DDRA_REG,      Local_PINNum);break;
		case PORT_B :  SET_BIT(DIO_DDRB_REG,      Local_PINNum);break;
		case PORT_C :  SET_BIT(DIO_DDRC_REG,      Local_PINNum);break;
		case PORT_D :  SET_BIT(DIO_DDRD_REG,      Local_PINNum);break;
		}


	}
	else if (Local_State== DIO_INPUT)
	{
		switch (Local_PORTName)
		{
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
	 if(Local_PORTName<=PORT_D )
	 {
if(Local_State==DIO_OUTPUT)
{
	switch(Local_PORTName)
	{
	 /* Group Name              Register name-Baremetal*/
			case PORT_A :  DIO_DDRA_REG = DIO_REG_OUTPUT;break;
			case PORT_B :  DIO_DDRB_REG = DIO_REG_OUTPUT;break;
			case PORT_C :  DIO_DDRC_REG = DIO_REG_OUTPUT;break;
			case PORT_D :  DIO_DDRD_REG = DIO_REG_OUTPUT;break;

     }
  }
if(Local_State==DIO_INPUT)
{
	switch(Local_PORTName)
	{
	 /* Group Name              Register name-Baremetal*/
			case PORT_A : DIO_DDRA_REG = DIO_REG_INPUT;break;
			case PORT_B : DIO_DDRB_REG = DIO_REG_INPUT;break;
			case PORT_C : DIO_DDRC_REG = DIO_REG_INPUT;break;
			case PORT_D : DIO_DDRD_REG = DIO_REG_INPUT;break;

     }
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
	 if(Local_PORTName<=PORT_D && Local_PINNum <= PIN_D7  )
	 {
	if (Local_Value== DIO_HIGH)
		{
			switch (Local_PORTName)
			{ /* Group Name              Register name-Baremetal*/
			case PORT_A :  SET_BIT(DIO_PORTA_REG,    Local_PINNum);break;
			case PORT_B :  SET_BIT(DIO_PORTB_REG,    Local_PINNum);break;
			case PORT_C :  SET_BIT(DIO_PORTC_REG,    Local_PINNum);break;
			case PORT_D :  SET_BIT(DIO_PORTD_REG,    Local_PINNum);break;
			}


		}
		else if (Local_Value== DIO_LOW)
		{
			switch (Local_PORTName)
			{
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
#Function Name :DIO_VoidSetPortDir                                        #
#Argument      : u8 Local_PORTName, u8 Local_State                        #
#Return        :void                                                      #
#Type          :Implementation                                            #
#Description   :set direction for any PORT (HIGH,LOW)                     #                                     #
###########################################################################
 */
void DIO_VoidSetPortValue(u8 Local_PORTName, u8 Local_Value){
	 if(Local_PORTName<= PORT_D )
	 {
	if(Local_Value==DIO_HIGH)
	{
		switch(Local_PORTName)
		{
		 /* Group Name              Register name-Baremetal*/
				case PORT_A :  DIO_PORTA_REG = DIO_REG_HIGH;break;
				case PORT_B :  DIO_PORTB_REG = DIO_REG_HIGH;break;
				case PORT_C :  DIO_PORTC_REG = DIO_REG_HIGH;break;
				case PORT_D :  DIO_PORTD_REG = DIO_REG_HIGH;break;

	     }
	  }
	if(Local_Value==DIO_LOW)
	{
		switch(Local_PORTName)
		{
		 /* Group Name              Register name-Baremetal*/
				case PORT_A :  DIO_PORTA_REG = DIO_REG_LOW;break;
				case PORT_B :  DIO_PORTB_REG = DIO_REG_LOW;break;
				case PORT_C :  DIO_PORTC_REG = DIO_REG_LOW;break;
				case PORT_D :  DIO_PORTD_REG = DIO_REG_LOW;break;

	     }
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
u8 DIO_VoidGetPinValue(u8 Local_PORTName, u8 Local_PINNum)
{
	u8 Local_Return = ZERO;
	 if(Local_PORTName<=PORT_D && Local_PINNum <= PIN_D7  )
	 {
	switch (Local_PORTName)
	{
	case PORT_A :Local_Return=GET_BIT(DIO_PINA_REG,      Local_PINNum); break;
	case PORT_B :Local_Return=GET_BIT(DIO_PINB_REG,      Local_PINNum); break;
	case PORT_C :Local_Return=GET_BIT(DIO_PINC_REG,      Local_PINNum); break;
	case PORT_D :Local_Return=GET_BIT(DIO_PIND_REG,      Local_PINNum); break;
	}

	 }
	 return Local_Return;
}


