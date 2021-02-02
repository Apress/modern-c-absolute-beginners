#include <stdio.h>

// global scope
static int globalx = 123;
static void globalfn(void)
{
	printf("The value of a global var is: %d\n", globalx);
}

int main(void)
{
	// local scope
	int localx = 456;
	globalfn();
	printf("The value of a local var is: %d\n", localx);
}