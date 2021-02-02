#include <stdio.h>
#include <stdlib.h>

void myfunction(int *arg)
{
	*arg = 456;
}

int main(void)
{
	int x = 123;
	int *p = &x;
	printf("The pointed-to value before the function call: %d\n", *p);
	myfunction(p);
	printf("The pointed-to value after the function call: %d\n", *p);
}