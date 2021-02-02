#include <stdio.h>

int main(void)
{
	char c = 10;
	printf("The value is: %d\n", c);
	printf("Applying the bitwise ~ operation...\n", c);
	c = ~10; // bitwise NOT
	printf("The value is: %d\n", c);
}