#include <stdio.h>

void myfunction(char *arg)
{
	printf("%s\n", arg);
}

int main(void)
{
	void (*fp)(char *);
	fp = myfunction;
	fp("This is a function argument.");
}