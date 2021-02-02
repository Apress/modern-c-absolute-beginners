#include <stdio.h>
#include <string.h>

int main(void)
{
	const char *str1 = "Hello World!";
	const char *str2 = "Hello World!";
	if (strcmp(str1, str2) == 0)
	{
		printf("The strings are equal.\n");
	}
	else
	{
		printf("The strings are not equal.\n");
	}
}