/*
 * GIE_Interface.h
 *
 *  Created on: May 6, 2022
 *      Author: raya
 */



/*
 * ********************************************************************************
 * ********** Author     : Sara Salma                               ***************
 * ********** Date       : 05/08/2022                               ***************
 * ********** Version    : 1.0 V (045/08/2022)                      ***************
 * ********** Description: GIE_Iterface.h                           ***************
 * **********              Proto_Type function                      ***************
 * ********************************************************************************
 */

/*garden to define GIE interface if not define */
#ifndef MCAL_GIE_INCLUDE_GIE_INTERFACE_H_
#define MCAL_GIE_INCLUDE_GIE_INTERFACE_H_
/*
###########################################################################
#Function Name : GIE_VoidEnable                                           #
#Argument      : void                                                     #
#Return        : void                                                     #
#Type          : Proto_Type                                               #
#Description   : Set pin I to Enable Global Interrupt                     #
###########################################################################
 */
void GIE_VoidEnable(void);

/*
###########################################################################
#Function Name : GIE_VoidDisable                                          #
#Argument      : void                                                     #
#Return        : void                                                     #
#Type          : Proto_Type                                               #
#Description   : Clear pin I to Disable Global Interrupt                  #
###########################################################################
 */

void GIE_VoidDisable(void);

#endif /* MCAL_GIE_INCLUDE_GIE_INTERFACE_H_ */
