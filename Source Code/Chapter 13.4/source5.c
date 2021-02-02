#include <stdio.h>

int myFunction(int x, int y)
{
	return x + y;
}

int main(void)
{
	int a = 10;
	int b = 20;
	int myresult;
	myresult = myFunction(a, b);
	printf("Two parameters function result: %d\n", myresult);
}