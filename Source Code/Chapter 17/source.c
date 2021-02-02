#include <stdio.h>

int main(void)
{
	int x = 123;
	int result;
	
	if (x > 10)
	{
		result = 456;
	}
	else
	{
		result = 789;
	}
	printf("The result is: %d\n", result);
}