#include <stdio.h>
#include <limits.h>

int main(void)
{
	int x = INT_MAX;
	printf("The maximum integer value is: %d\n", x);
	printf("Trying to store a value higher than the maximum...\n");
	x = INT_MAX + 1; // undefined behavior
	printf("The variable value is now: %d\n", x);
}