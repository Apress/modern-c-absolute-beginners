#include <stdio.h>

void myFunction(void)
{
	int x = 10; // x is a local variable, local to myFunction
	printf("Local scope variable x value: %d\n", x);
}

int main(void)
{
	myFunction();
	int y = 20; // y is a local variable, local to main
	printf("Local scope variable y value: %d\n", y);
}