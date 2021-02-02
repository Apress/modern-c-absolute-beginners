#include <stdio.h>

int multiply(int a, int b)
{
	return a * b;
}

int main(void)
{
	int x = 123;
	int y = 456;
	int z = multiply(x, y);
	printf("The result is: %d\n", z);
}