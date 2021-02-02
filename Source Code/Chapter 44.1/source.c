#include <stdio.h>

int main(void)
{
	char mychar = 'A';
	char *p = &mychar;
	printf("The pointed-to value is: %c\n", *p);
}