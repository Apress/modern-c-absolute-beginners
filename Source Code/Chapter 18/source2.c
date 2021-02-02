#include <stdio.h>

typedef char* MyString;

int main(void)
{
	MyString s = "Hello World!";
	printf("The value is: %s\n", s);
}