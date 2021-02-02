#include <stdio.h>

int main(void)
{
	printf("Enter a string: ");
	char str[10];
	if (fgets(str, 10, stdin) != NULL)
	{
		printf("You entered: %s\n", str);
	}
	else
	{
		printf("Failure. No characters are read.\n");
	}
}