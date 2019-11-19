#include <stdio.h>
#include <stdint.h>

// Ex5: Write a C program to compute factorial of 10
uint64_t factorial(uint8_t data) {
	uint64_t temp = 1;
	if (data == 0) {
		return 1;
	}
	if (data > 20) {
		return 0;
	}
	for (uint8_t i = 1; i <= data; i++) {
		temp *= i;
	}
	return temp;
}

int main(int argc, char **argv) {
	uint8_t data = 10;

	printf("%d!= %lu \n", (uint32_t)data, factorial(data));

	return 0;
}
