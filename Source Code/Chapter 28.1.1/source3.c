#include <stdio.h>

int main(void)
{
	printf("Enter an integer and a double: ");
	int x;
	double d;
	scanf("%d %lf", &x, &d);
	printf("You entered: %d and %lf\n", x, d);
}