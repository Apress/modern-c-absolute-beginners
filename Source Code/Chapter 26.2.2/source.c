#include <stdio.h>

void myCounter(void)
{
	static int x = 10; // initialized only once
	x++;
	printf("Static variable value: %d\n", x);
}

int main(void)
{
	myCounter(); // x == 11
	myCounter(); // x == 12
	myCounter(); // x == 13
}