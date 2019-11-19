#include <stdio.h>
#include <stdint.h>
#include "swap.h"

// Ex4: Write a C program to compute the perimeter and area 
// of a circle with a radius of 6 meters;

int main(int argc, char **argv) {
	float radius = 6;

	printf(
			"  radius=  %f meter  \n perimeter= %f meter, area= %f square meter \n",
\
			radius, perimeter(radius), area(radius));

	return 0;
}
