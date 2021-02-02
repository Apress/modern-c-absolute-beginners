#include <stdio.h>

int main(void)
{
	// error checking omitted
	printf("Enter a string: ");
	char str[10];
	fgets(str, 10, stdin);
	printf("You entered: %s\n", str);
}