#include <stdio.h>

#define MY_MIN(a, b) ((a) < (b)) ? (a) : (b)
#define MY_MAX(a, b) ((a) > (b)) ? (a) : (b)

int main(void)
{
	int x = 123;
	int y = 456;
	printf("The MY_MIN macro expands to: %d.\n", MY_MIN(x, y));
	printf("The MY_MAX macro expands to: %d.\n", MY_MAX(x, y));
}