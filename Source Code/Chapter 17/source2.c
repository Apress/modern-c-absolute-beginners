#include <stdio.h>

int main(void)
{
	int x = 123;
	int result;

	result = (x > 10) ? 456 : 789;
	printf("The result is: %d\n", result);
}