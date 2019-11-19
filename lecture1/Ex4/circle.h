/**
 ******************************************************************************
 * @file    circle.h
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

#ifndef __CIRCLE_H
#define __CIRCLE_H

#ifdef __cplusplus
extern "C" {
#endif

#include <stdint.h>

//struct circle
//{
//   float width_in_meter;
//   float height_in_meter;
//   float perimeter_in_inch;
//   float area_in_inch;
// };

#define PI = 3.14159265359

static inline float perimeter(float const radius) {
return radius * 2.0 * PI;
}

static inline float area(float const radius) {
return radius * radius * PI;
}

#ifdef __cplusplus
}
#endif

#endif /* __RECTANGLE_H */

