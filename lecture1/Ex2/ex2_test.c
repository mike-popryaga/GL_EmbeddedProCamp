#include <stdio.h>
#include <stdint.h>
#include "convert.h"
// Ex2: Write function that converts RGB 888 to RGB 565.

int main(int argc, char **argv) {
	uint32_t data = 0;
	printf("\n input 6 hex digits(red green blue) and press enter ");
	scanf("%x", &data);
	printf(" 0x%x convert_888to565 0x%x\n",\
 (uint16_t) data,
			convert_888to565(data));

	return 0;
}
