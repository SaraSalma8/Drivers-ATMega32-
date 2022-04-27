/*
 * sev_segment_interface.h
 *
 *  Created on: Apr 12, 2022
 *      Author: raya
 */


/*
 * ********************************************************************************
 * ********** Author     : Sara Salma                               ***************
 * ********** Date       : 04/12/2022                               ***************
 * ********** Version    : 2.0 V (04/27/2020)                       ***************
 * ********** Description: SEVSEGMENT_Interface.h                   ***************
 * ********************************************************************************
 */

/*garden to define seven segment interface if not define */
#ifndef HAL_SEVEN_SEGMENT_INCLUDE_SEVSEGMENT_INTERFACE_H_
#define HAL_SEVEN_SEGMENT_INCLUDE_SEVSEGMENT_INTERFACE_H_

#include "SEVESEGMENT_Configuration.h"

/*
###########################################################################
#Function Name : SEVSEGMENT_VoidSevsegmentInit                            #
#Argument      : void                                                     #
#Return        : void                                                     #
#Type          : Proto_Type                                               #
#Description   : make port which seven segment connect with it OUTPUT     #
###########################################################################
 */

void SEVSEGMENT_VoidSevsegmentInit(void);

/*
###########################################################################
#Function Name : SEVSEGMENT_VoidDisplayNum                                #
#Argument      : u8 Local_Number                                          #
#Return        : void                                                     #
#Type          : Proto_Type                                               #
#Description   : Display any number which entered                         #
###########################################################################
 */

void SEVSEGMENT_VoidDisplayNum(u8 Local_Number);


/*
###########################################################################
#Function Name : SEVSEGMENT_VoidCountToMax                                #
#Argument      : void                                                     #
#Return        : void                                                     #
#Type          : Proto_Type                                               #
#Description   : Display number from 0 to 9 with delay one second         #
###########################################################################
 */

void SEVSEGMENT_VoidCountToMax(void);

/*
###########################################################################
#Function Name : SEVSEGMENT_U8CountToNum                                  #
#Argument      : u8 Local_Number                                          #
#Return        : u8                                                       #
#Type          : Proto_Type                                               #
#Description   : Display number from 0 to number entered with delay one   #
#                Second                                                   #
###########################################################################
 */

u8 SEVSEGMENT_U8CountToNum(u8 Local_Number);


#endif /* HAL_SEVEN_SEGMENT_INCLUDE_SEVSEGMENT_INTERFACE_H_ */
