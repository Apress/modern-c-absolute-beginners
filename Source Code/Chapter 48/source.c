#include <stdio.h>

// global scope

static int x = 123; // internal linkage
static void myfunction() // internal linkage
{
	printf("The value is: %d\n", x);
}

int main(void)
{
	printf("Calling a global function with internal linkage.\n");
	myfunction();
}