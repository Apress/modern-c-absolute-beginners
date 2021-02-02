#include <stdio.h>

//function declaration
int myFunction(int x, int y);

int main(void)
{
	int myresult = myFunction(10, 20);
	printf("The result is: %d\n", myresult);
}

// function definition
int myFunction(int x, int y)
{
	return x + y;
}