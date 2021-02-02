#include <stdio.h>

int main(void)
{
	unsigned x = 256;
	printf("The value before the bit shifting is: %d\n", x);
	x = x >> 4;
	printf("The value after the bit shifting is: %d\n", x);
}