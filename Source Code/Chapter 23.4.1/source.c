#include <stdio.h>

#define MY_FLAG 123

int main(void)
{
#if MY_FLAG < 123
	printf("This portion of the code (A)\n");
	printf("will not get compiled.\n");
#endif
	printf("This portion of the code (B)\n");
	printf("Will get compiled.\n");
}