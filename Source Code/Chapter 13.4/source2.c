#include <stdio.h>

int myFunction(int x)
{
	return x;
}

int main(void)
{
	int myresult;
	myresult = myFunction(5);
	printf("One parameter function result: %d\n", myresult);
}