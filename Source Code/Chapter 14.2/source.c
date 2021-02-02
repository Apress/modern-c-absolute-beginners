#include <stdio.h>

void printMessage(); // function declaration

int main(void)
{
	printMessage(); // function call
}

void printMessage() // function definition
{
	printf("Hello World! from a function.\n");
}