#include <stdio.h>
#include <string.h>

int main(void)
{
	char destination_str[30] = "Hello ";
	char source_str[30] = "World!";
	strcat(destination_str, source_str);
	printf("The concatenated string is: %s\n", destination_str);
}