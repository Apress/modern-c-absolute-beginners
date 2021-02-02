#include <stdio.h>

int main(void)
{
	int x = 123;
	int y = 456;
	int islessthan = x < y;
	int isgreaterthan = x > y;
	printf("The value of \"is less than\" expression is: %d\n", islessthan);
	printf("The value of \"is greater than\" expression is: %d\n", isgreaterthan);
}