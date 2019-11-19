#include <stdio.h>
#include <stdint.h>

// Ex6: Write a C program to print all numbers 
// between 1 to 500 which divided by a number specified by user

int main(int argc, char **argv) {
	int32_t data = 0;
	printf("\n input  number between 1 to 500 and press enter ");
	scanf("%d", &data);
	if ((data > 500) || (data < 1)) {
		printf("\n input  correct number \n ");
	} else {
		int32_t result = data, count = 0;
		do {
			printf("%d,", result);
			result += data;
			count++;
			if (count == 10) {
				count = 0;
				printf(" \n ");
			}

		}

		while (result <= 500);
	}
	printf(" \n ");
	return 0;
}
