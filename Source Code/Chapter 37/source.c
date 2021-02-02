#include <stdio.h>

int main(void)
{
	char c;
	int x;
	double d;

	printf("Accessing uninitialized variables...\n");
	printf("%c, %d, %f\n", c, x, d); // undefined behavior
}