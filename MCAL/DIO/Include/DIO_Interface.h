/*
 * DIO_Interface.h

 *
 *  Created on: Apr 22, 2022
 *      Author: raya
 */

/*garden to define DIO interface if not define */
#ifndef MCAL_DIO_INCLUDE_DIO_INTERFACE_H_
#define MCAL_DIO_INCLUDE_DIO_INTERFACE_H_

#include "../../../LIB/STDTYPES.h"

#include"DIO_Configuration.h"
/*
###########################################################################
#Function Name : DIO_VoidSetPinDir                                        #
#Argument      : u8 Local_PORTName, u8 Local_PINNum, u8 Local_State       #
#Return        : void                                                     #
#Type          : Proto_Type                                               #
#Description   : set direction for any PIN in each PORT (INPUT,OUTPUT)    #
###########################################################################
 */
void DIO_VoidSetPinDir(u8 Local_PORTName, u8 Local_PINNum, u8 Local_State);

/*
###########################################################################
#Function Name : DIO_VoidSetPortDir                                       #
#Argument      : u8 Local_PORTName, u8 Local_State                        #
#Return        : void                                                     #
#Type          : Proto_Type                                               #
#Description   : set direction for any PORT (INPUT,OUTPUT)                #
###########################################################################
 */
void DIO_VoidSetPortDir(u8 Local_PORTName,u8 Local_State);

/*
###########################################################################
#Function Name : DIO_VoidSetPinValue                                      #
#Argument      : u8 Local_PORTName, u8 Local_PINNum,u8 Local_Value        #
#Return        : void                                                     #
#Type          : Proto_Type                                               #
#Description   : set direction for anyPIN in each PORT (HIGH,LOW)         #
###########################################################################
 */
void DIO_VoidSetPinValue(u8 Local_PORTName, u8 Local_PINNum, u8 Local_Value);

/*
###########################################################################
#Function Name : DIO_VoidSetPortDir                                       #
#Argument      : u8 Local_PORTName, u8 Local_State                        #
#Return        : void                                                     #
#Type          : Proto_Type                                               #
#Description   : set direction for any PORT (HIGH,LOW)                    #                                     #
###########################################################################
 */
void DIO_VoidSetPortValue(u8 Local_PORTName, u8 Local_Value);
/*
###########################################################################
#Function Name : DIO_VoidGetPinValue                                      #
#Argument      : u8 Local_PORTName, u8 Local_PINNum                       #
#Return        : u8                                                       #
#Type          : Proto_Type                                               #
#Description   : get pin value in any port                                #                                     #
###########################################################################
 */
u8 DIO_VoidGetPinValue(u8 Local_PORTName, u8 Local_PINNum);
#endif /* MCAL_DIO_INCLUDE_DIO_INTERFACE_H_ */
