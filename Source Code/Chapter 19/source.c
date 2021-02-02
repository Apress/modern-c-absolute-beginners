#include <stdio.h>

int main(void)
{
	const char c = 'a';
	const int x = 123;
	const double d = 456.789;
	printf("We have defined three constants.\n");
	printf("Their values are: %c, %d, %.3f.\n", c, x, d);
}