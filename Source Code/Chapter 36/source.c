#include <stdio.h>

int main(void)
{
	char buff[100];
	printf("Please enter a string:\n");
	fgets(buff, 100, stdin);
	printf("The result is: %s\n", buff);
}