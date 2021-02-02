#include <stdlib.h>
#include <stdio.h>

_Noreturn void justExit()
{
	printf("This function does not return. Exiting...\n");
	exit(0);
}

int main(void)
{
	justExit();
}