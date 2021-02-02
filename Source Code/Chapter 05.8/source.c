#include <stdio.h>

int main(void)
{
	int x = 10;
	int y = 10;
	int myprefix = ++x;
	int mypostfix = y++;
	printf("The prefix result: %d, the postfix result: %d\n", myprefix, mypostfix);
}