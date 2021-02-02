#include <stdio.h>

int myFunction(int x)
{
	return x;
}

int main(void)
{
	int myint = 5;
	int myresult;
	myresult = myFunction(myint);
	printf("One parameter function result: %d\n", myresult);
}