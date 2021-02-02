#include <stdio.h>

int main(void)
{
	char mychar;
	mychar = 'a';
	printf("The size of a character object is %zi byte(s).", sizeof(mychar));
}