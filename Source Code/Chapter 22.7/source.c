#include <stdio.h>

double myfunction(const int a, const double b)
{
	return a / b;
}

int main(void)
{
	int x = 123;
	double y = 456.789;
	double result = myfunction(x, y);
	printf("The function call result is: %f\n", result);
}