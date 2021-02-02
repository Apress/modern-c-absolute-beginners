#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int x = 123;
	char strbuffer [100];
  	snprintf(strbuffer, sizeof strbuffer, "%d", x);
	printf("The result is: %s\n", strbuffer);
}