#include <stdio.h>

#define MY_CONDITIONAL_MACRO

int main(void)
{
#ifdef MY_CONDITIONAL_MACRO
	printf("This code will get compiled.\n");
#endif

#ifdef NON_EXISTING_MACRO
	printf("This code will not get compiled.\n");
#endif
}