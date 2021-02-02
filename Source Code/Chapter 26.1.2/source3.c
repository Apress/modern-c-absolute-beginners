#include <stdio.h>

void myFunction(void)
{
	int x = 123; // x has a local scope
	// and is only visible in this block
}

// x is not visible here because it has a local scope

int main(void)
{
	// x is not visible here because it has a local scope
}