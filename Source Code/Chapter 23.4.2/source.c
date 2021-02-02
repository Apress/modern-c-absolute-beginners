#include <stdio.h>

#define MY_MACRO

int main(void)
{
#ifdef MY_MACRO
	printf("This portion of the code (A)\n");
	printf("will get compiled.\n");
#endif

#ifdef NON_EXISTING_MACRO
	printf("This portion of the code (B)\n");
	printf("will not get compiled.\n");
#endif
}