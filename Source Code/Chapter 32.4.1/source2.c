#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	const char * str = "123 to a number.";
	char* str_end;
	long result = strtol(str, &str_end, 10);
	printf("The result is: %ld\n", result);
	printf("The remainder of the string is: %s\n", str_end);
}