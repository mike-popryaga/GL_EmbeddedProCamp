/**
 ******************************************************************************
 * @file    convert.h
 * @author  Mike Popryaga
 * @brief   
 ******************************************************************************
 * @attention
 *
 * You may obtain a copy of the License at:
 *                        opensource.org/licenses/BSD-3-Clause
 *
 ******************************************************************************
 */

#ifndef __CONVERT_H
#define __CONVERT_H

#ifdef __cplusplus
extern "C" {
#endif

#include <stdint.h>

static inline uint16_t convert_888to565(uint32_t const data) {
	return ((data >> 3) & 0b0000000000011111)
			| ((data >> 5) & 0b0000011111100000)
			| ((data >> 8) & 0b1111100000000000);
}

#ifdef __cplusplus
}
#endif

#endif /* __CONVERT_H */

