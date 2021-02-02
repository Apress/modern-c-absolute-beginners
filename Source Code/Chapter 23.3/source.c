#include <stdio.h>

#define MY_MAX 123

int main(void)
{
	int x = MY_MAX;
	printf("The value is: %d\n", x);
#undef MY_MAX
	printf("Macro undefined. The name MY_MAX no longer exists.\n");
}