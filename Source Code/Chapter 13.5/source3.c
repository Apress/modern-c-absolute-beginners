#include <stdio.h>

int myFunction(int a)
{
	if (a > 0)
	{
		return 1;
	}
	if (a < 0)
	{
		return -1;
	}
	return 0;
}

int main(void)
{
	int x;
	x = myFunction(10);
	printf("The function returned a value of: %d\n", x);
}