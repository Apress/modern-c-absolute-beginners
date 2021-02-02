#include <stdio.h>

int main(void)
{
	double d = 123.456;
	double* p = &d;
	
	printf("The value before the change is: %f\n", *p);
	*p = 789.101;
	printf("The value after the change is: %f\n", *p);
}