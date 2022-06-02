/*
 * GIE_Program.c
 *
 *  Created on: May 6, 2022
 *      Author: raya
 */

/*
 * ********************************************************************************
 * ********** Author     : Sara Salma                               ***************
 * ********** Date       : 05/08/2022                               ***************
 * ********** Version    : 1.0 V (045/08/2022)                      ***************
 * ********** Description: GIE_Program.c                            ***************
 * **********              Implementation function                  ***************
 * ********************************************************************************
 */

/* include file have function like macro i need*/
#include "../../../LIB/Bit_Math.h"


#include"../Include/GIE_Register.h"
#include"../Include/GIE_Interface.h"


/*
###########################################################################
#Function Name : GIE_VoidEnable                                           #
#Argument      : void                                                     #
#Return        : void                                                     #
#Type          : Implementation                                           #
#Description   : Set pin I to Enable Global Interrupt                     #
###########################################################################
 */
void GIE_VoidEnable(void)
{
	/*Set pin I to Enable Global Interrupt in Register SREG*/
	SET_BIT(SREG , I);
}
/*
###########################################################################
#Function Name : GIE_VoidDisable                                          #
#Argument      : void                                                     #
#Return        : void                                                     #
#Type          : Implementation                                           #
#Description   : Clear pin I to Disable Global Interrupt                  #
###########################################################################
 */
void GIE_VoidDisable(void)
{
	/*Clear pin I to Disable Global Interrupt in Register SREG */
	CLR_BIT(SREG , I);
}

