#include <stdio.h>

#define MY_SUM(x, y) ((x) + (y))

int main(void)
{
	double mysum = MY_SUM(123.456, 789.101);
	printf("The result is: %.3lf\n", mysum);
}