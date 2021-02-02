#include <stdio.h>

#define SQR(a) ((a) * (a))

int sqr(int a)
{
	return a * a;
}

int main(void)
{
	int x = 1;
	int result = SQR(++x);
	printf("With the macro: %d\n", result);

	int y = 1;
	result = sqr(++y);
	printf("With the function: %d\n", result);
}