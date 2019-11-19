/**
 ******************************************************************************
 * @file    rectangle.h
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

#ifndef __RECTANGLE_H
#define __RECTANGLE_H

#ifdef __cplusplus
extern "C" {
#endif

#include <stdint.h>

//struct rectangle
//{
//   float width_in_meter;
//   float height_in_meter;
//   float perimeter_in_inch;
//   float area_in_inch;
// };

#define METR2INCH 100.0/2.54

static inline float metr2inch(float const data) {
	return data * METR2INCH;
}

static inline float perimeter_in_inch(float const width_in_meter,
		float const height_in_meter) {
	return metr2inch(width_in_meter + height_in_meter) * 2.0;
}

static inline float area_in_inch(float const width_in_meter,
		float const height_in_meter) {
	return metr2inch(width_in_meter) * metr2inch(height_in_meter);
}

#ifdef __cplusplus
}
#endif

#endif /* __RECTANGLE_H */

