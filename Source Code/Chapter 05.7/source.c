#include <stdio.h>

int main(void)
{
	int x = 1;
	int y = 0;
	int myand = x && y;
	int myor = x || y;
	int mynegation = !x;
	printf("The value of an AND expression is: %d\n", myand);
	printf("The value of an OR expression is: %d\n", myor);
	printf("The value of a NEGATION expression is: %d\n", mynegation);
}