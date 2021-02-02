#include <stdio.h>

void byAddress(int *arg)
{
	(*arg)++;
}

int main(void)
{
	int x = 123;
	printf("The value before the function call: %d\n", x);
	byAddress(&x);
	printf("The value after the function call: %d\n", x);
}