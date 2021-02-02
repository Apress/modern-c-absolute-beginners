#include <stdio.h>

int myFunction(int x, int y)
{
	return x + y;
}

int main(void)
{
	int myresult;
	myresult = myFunction(10, 20);
	printf("Two parameters function result: %d\n", myresult);
}