#include <stdio.h>

int main(void)
{
	int x = 123;
	int y = 456;
	int isequalto = x == y;
	int isnotequalto = x != y;
	printf("The value of \"is equal to\" expression is: %d\n", isequalto);
	printf("The value of \"is not equal\" to expression is: %d\n", isnotequalto);
}