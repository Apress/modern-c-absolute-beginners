#include <stdio.h>

int main(void)
{
	char buff[50] = "A 123 456.789";
	char c;
	int x;
	double d;
	sscanf(buff, "%c %d %lf", &c, &x, &d);
	printf("The values are: %c, %d and %f\n", c, x, d);
}