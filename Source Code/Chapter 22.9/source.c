#include <stdio.h>

void printmessage(const char *arg)
{
	printf("%s\n", arg);
}

double division(int a, double b)
{
	return a / b;
}

int main(void)
{
	void (*fp1)(const char *);
	double (*fp2)(int, double);
	fp1 = printmessage;
	fp2 = division;

	fp1("This is the function call through a function pointer.");
	double result = fp2(123, 456.789);
	printf("The result obtained through a function pointer is: %f\n", result);
}