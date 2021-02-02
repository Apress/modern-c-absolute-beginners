#include <stdio.h>

// define the macro
#define MAX 999

int main(void)
{
	printf("Macro defined. The name MAX exists.\n");
	int x = MAX;
	printf("The variable assigned to macro has a value: %d\n", x);
// undefine the macro
#undef MAX
	printf("Macro undefined. The name MAX no longer exists.\n");
}