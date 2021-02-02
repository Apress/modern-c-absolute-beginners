#include <stdio.h>

void myfunction()
{
	printf("Hello World from a function.\n");
}

int main(void)
{
	void (*fp)();
	fp = myfunction;
	fp();
}