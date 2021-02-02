#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int x = 123;
	char strbuffer [100];
  	int nc = snprintf(strbuffer, sizeof strbuffer, "%d", x);
	printf("The result is: %s\n", strbuffer);
	printf("The number of characters written is: %d\n", nc);
}