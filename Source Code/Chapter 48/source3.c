#include <stdio.h>

// global scope

int main(void)
{
	// local scope

	int x = 123; // no linkage
	printf("The value of a variable with no linkage is: %d\n", x);
}