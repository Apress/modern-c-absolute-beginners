#include <stdio.h>

int main(void)
{
	int x = 75;
	if (x > 50 && x < 100)
	{
		printf("The value is greater than 50 and less than 100.\n");
	}
	else
	{
		printf("The value is not within the (50..100) range.\n");
	}
}