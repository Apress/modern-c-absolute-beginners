#include <stdio.h>

int main(void)
{
	int x = 123;
	if (x < 150)
	{
		printf("The condition is true. X is less than 150.\n");
		printf("This is the second statement in the if-block\n");
	}
	else
	{
		printf("The condition is false. X is not less than 150.\n");
		printf("This is the second statement in the else-block\n");
	}
}