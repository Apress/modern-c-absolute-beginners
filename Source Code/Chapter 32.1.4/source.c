#include <stdio.h>
#include <string.h>

int main(void)
{
	char destination_str[30];
	char source_str[30] = "Hello World!";
	strcpy(destination_str, source_str);
	printf("The copied string is: %s\n", destination_str);
}