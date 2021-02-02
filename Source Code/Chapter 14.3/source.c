#include <stdio.h>

void byValue(int arg)
{
	arg++;
}

int main(void)
{
	int x = 123;
	printf("The value before the function call: %d\n", x);
	byValue(x);
	printf("The value after the function call: %d\n", x);
}