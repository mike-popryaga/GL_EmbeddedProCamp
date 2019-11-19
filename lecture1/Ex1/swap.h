/**
 ******************************************************************************
 * @file    swap.h
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

#ifndef __SWAP_H
#define __SWAP_H

#ifdef __cplusplus
extern "C" {
#endif

#include <stdint.h>

static inline uint16_t swap16(uint16_t const data) {
	return (data >> 8) | (data << 8);
}

static inline uint32_t swap32(uint32_t const data) {
	return ((data >> 24) & 0xff) | // move byte 3 to byte 0
			((data << 8) & 0xff0000) | // move byte 1 to byte 2
			((data >> 8) & 0xff00) | // move byte 2 to byte 1
			((data << 24) & 0xff000000); // byte 0 to byte 3; 
}

static inline uint64_t swap64(uint64_t const data) {
	return ((uint64_t) swap32((uint32_t) data)) << 32
			| swap32((uint32_t)(data >> 32));
}

#ifdef __cplusplus
}
#endif

#endif /* __SWAP_H */

