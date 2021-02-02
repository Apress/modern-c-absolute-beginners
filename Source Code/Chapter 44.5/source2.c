#include <stdio.h>
#include <stdlib.h>

void myfunction(int *arg)
{
	*arg = 456;
}

int main(void)
{
	int x = 123;
	printf("The value before the function call: %d\n", x);
	myfunction(&x); // pass in the address of x
	printf("The value after the function call: %d\n", x);
}