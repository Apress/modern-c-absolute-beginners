#include <stdio.h>

int main(void)
{
	long double mylongdouble;
	mylongdouble = 123456.789l;
	printf("The value of a long double variable is: %.3Lf", mylongdouble);
}