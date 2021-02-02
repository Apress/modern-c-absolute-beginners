#include <stdio.h>

#define MY_FLAG 123

int main(void)
{
#if MY_FLAG < 123
	printf("This portion of the code (A)\n");
	printf("will not get compiled.\n");
#elif MY_FLAG == 123
	printf("This portion of the code (B)\n");
	printf("will get compiled.\n");
#else
	printf("This portion of the code (C)\n");
	printf("will also be skipped.\n");
#endif
}