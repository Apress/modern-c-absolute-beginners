#include <stdio.h>

void myFunction(int *x)
{
	*x = 456;
}

int main(void)
{
	int a = 123;
	printf("The value before the function call: %d\n", a);
	myFunction(&a);
	printf("The value after the function call: %d\n", a);
}