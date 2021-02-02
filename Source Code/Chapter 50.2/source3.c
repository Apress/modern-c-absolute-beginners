#include <stdio.h>

int main(void)
{
	char c = -10;
	printf("The value before the bit shifting is: %d\n", c);
	c = c >> 4;
	printf("The value after the bit shifting is: %d\n", c);
}