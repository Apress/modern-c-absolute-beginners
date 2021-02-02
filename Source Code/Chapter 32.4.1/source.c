#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	const char * str = "123 to a number.";
	long result = strtol(str, NULL, 10);
	printf("The result is: %ld\n", result);
}