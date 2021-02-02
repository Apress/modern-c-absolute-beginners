#include <stdio.h>

int main(void)
{
	printf("Trying to divide with zero...\n");
	int x = 123;
	int y = x / 0; // undefined behavior
	printf("The result is: %d\n", y);
}