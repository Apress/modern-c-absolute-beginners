#include <stdio.h>

int mySum(int x, int y)
{
	return x + y;
}

int main(void)
{
	int myresult = mySum(10, 20);
	printf("The result is: %d\n", myresult);
}