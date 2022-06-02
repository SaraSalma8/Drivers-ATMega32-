/*
 * TEMPSENSOR_Configuration.h
 *
 *  Created on: May 18, 2022
 *      Author: raya
 */
/*
 * ********************************************************************************
 * ********** Author     : Sara Salma                               ***************
 * ********** Date       : 05/18/2022                               ***************
 * ********** Version    : 1.0 V (05/18/2022 )                      ***************
 * ********** Description: TEMPSENSOR_Configuration.h               ***************
 * ********************************************************************************
 */


/*garden to define TEMP Sensor Configuration if not define */
#ifndef HAL_TEMP_SENSOR_INCLUDE_TEMPSENSOR_CONFIGURATION_H_
#define HAL_TEMP_SENSOR_INCLUDE_TEMPSENSOR_CONFIGURATION_H_


#include"TEMPSENSOR_Pravite.h"
/*You must choose one of this opinions
 * 1- Chanal_One
 * 2- Chanal_Two
 * 3- Chanal_Three
 * 4- Chanal_Four
 * 5- Chanal_Five
 * 6- Chanal_Six
 * 7- Chanal_Seven
 * 8- Chanal_Eight
 */
#define TempSensor_Chanal        Chanal_One

#endif /* HAL_TEMP_SENSOR_INCLUDE_TEMPSENSOR_CONFIGURATION_H_ */
