/*
 * sev_segment_configuration.h
 *
 *  Created on: Apr 12, 2022
 *      Author: raya
 */

/*
 * ********************************************************************************
 * ********** Author     : Sara Salma                               ***************
 * ********** Date       : 04/12/2022                               ***************
 * ********** Version    : 2.0 V (04/27/2020)                       ***************
 * ********** Description: SEVSEGMENT_Configuration.h               ***************
 * ********************************************************************************
 */

/*garden to define Seven segment configuration if not define */
#ifndef HAL_SEVEN_SEGMENT_INCLUDE_SEVESEGMENT_CONFIGURATION_H_
#define HAL_SEVEN_SEGMENT_INCLUDE_SEVESEGMENT_CONFIGURATION_H_

#include "SEVSEGMENT_Private.h"
/*define PORT connect with seven segment*/
#define SEV_SEGMENT_PORT    PORT_A



/*define time waiting use in function SEVSEGMENT_VoidCountToMax() */
#define TIME_WAIT           1000

#endif /* HAL_SEVEN_SEGMENT_INCLUDE_SEVESEGMENT_CONFIGURATION_H_ */
