#include <stdio.h>

int myFunction(int x, int y)
{
	return x + y;
}

int main(void)
{
	int myresult = myFunction(10, 20);
	printf("The result is: %d\n", myresult);
}