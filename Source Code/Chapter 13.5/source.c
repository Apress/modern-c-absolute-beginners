#include <stdio.h>

int myFunction()
{
	return 10;
}

int main(void)
{
	int x;
	x = myFunction();
	printf("The function returned a value of: %d\n", x);
}