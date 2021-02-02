#include <stdio.h>

#define SQR(a) ((a) * (a))
int main(void)
{
	int x = 1;
	int result = SQR(++x);
	printf("With the macro: %d\n", result);
}