#include <stdio.h>

int main(void)
{
	char c = 'a';
	int x = 0;
	double d = 0.0;

	printf("Accessing initialized variables...\n");
	printf("%c, %d, %f\n", c, x, d); // OK
}