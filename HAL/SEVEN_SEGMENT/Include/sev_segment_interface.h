/*
 * sev_segment_interface.h
 *
 *  Created on: Apr 12, 2022
 *      Author: raya
 */

#ifndef HAL_SEVEN_SEGMENT_INCLUDE_SEV_SEGMENT_INTERFACE_H_
#define HAL_SEVEN_SEGMENT_INCLUDE_SEV_SEGMENT_INTERFACE_H_

#include "sev_segment_configuration.h"

/*
function name => SEV_SEGMENT_INIT
 Argument=> void
 Return=>void
 Description=> make port which seven segment connect with it OUTPUT
 Type=>Proto_Type
 */
void SEV_SEGMENT_INIT(void);

/*
function name => SEV_SEGMENT_DISPLAY_NUM
 Argument=> u8 number
 Return=>void
 Description=> Display number which enter by user
 Type=>Proto_Type
 */
void SEV_SEGMENT_DISPLAY_NUM(u8 number);


/*
function name => SEV_SEGMENT_COUNT_TOMAX
 Argument=> void
 Return=>void
 Description=> Display number from 0 to 9 with delay one second
 Type=>Proto_Type
 */
void SEV_SEGMENT_COUNT_TOMAX(void);

/*
function name => SEV_SEGMENT_COUNT_TONUM
 Argument=> u8 number
 Return=>void
 Description=> Display number from 0 to number enter by user with delay one second
 Type=>Proto_Type
 */
u8 SEV_SEGMENT_COUNT_TONUM(u8 number);


#endif /* HAL_SEVEN_SEGMENT_INCLUDE_SEV_SEGMENT_INTERFACE_H_ */
