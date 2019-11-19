#include <stdio.h>
#include <stdint.h>
#include "swap.h"
// Ex1: Write swap16,  swap32, swap64 functions that swap, 
// bytes in uint16_t, unit32_t, and uint64_t functions.

// Ex2: Write function that converts RGB 888 to RGB 565.

// Ex3: Write program that get from user height and 
// weight of rectangle (in meters) and calculate perimeter and area (in inches);

// Ex4: Write a C program to compute the perimeter and area 
// of a circle with a radius of 6 meters;

// Ex5: Write a C program to compute factorial of 10

// Ex6: Write a C program to print all numbers 
// between 1 to 500 which divided by a number specified by user

int main(int argc, char **argv) {
	uint64_t data = 0;
	printf("\n input 64 bit number(in hex digits) and press enter ");
	scanf("%lx", &data);
	printf(" 0x%x swap16 0x%x \n 0x%x swap32 0x%x \n 0x%lx swap64 0x%lx \n",
\
			(uint16_t) data, swap16((uint16_t) data), (uint32_t) data,
			swap32((uint32_t) data), (uint64_t) data, swap64((uint64_t) data));

	return 0;
}
