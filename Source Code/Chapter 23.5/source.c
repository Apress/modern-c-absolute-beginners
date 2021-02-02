#include <stdio.h>

int main(void)
{
	printf("The current source code line is: %d\n", __LINE__);
	printf("This statement is on line: %d\n", __LINE__);
}