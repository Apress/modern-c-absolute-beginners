#include <stdio.h>
#include <math.h>

int main(void)
{
	double d = 64.;
	printf("The square root of %f is: %f\n", d, sqrt(d));
	d = 256.00;
	printf("The square root of %f is: %f\n", d, sqrt(d));
}