#include <stdio.h>

#define MY_SUM(x, y) ((x) + (y))

int main(void)
{
	int mysum = MY_SUM(10, 20);
	printf("The result is: %d\n", mysum);
}