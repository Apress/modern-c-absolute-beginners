#include <stdio.h>

void myfunction(char *arg1, int arg2)
{
	printf("%s %d\n", arg1, arg2);
}

int main(void)
{
	void (*fp)(char *, int);
	fp = myfunction;
	fp("The value of an int argument is:", 123);
}