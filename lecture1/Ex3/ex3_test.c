#include <stdio.h>
#include <stdint.h>
#include "rectangle.h"
// Ex3: Write program that get from user height and 
// width of rectangle (in meters) and calculate perimeter and area (in inches);

int main(int argc, char **argv) {
	float width = 0, height = 0;
	printf("\n input width in meter(float)");
	scanf("%f", &width);
	printf("\n input height in meter(float)");
	scanf("%f", &height);
	printf(
			"  width  =  %f meter  height  =  %f meter \n perimeter=%f inches, area=%f square inches \n",
\
			width, height, perimeter_in_inch(width, height),
			area_in_inch(width, height));

	return 0;
}
