#include <stdio.h>

void myfunction()
{
	printf("The name of the function called is: %s\n", __func__);
}

int main(void)
{
	printf("This statement is on line: %d\n", __LINE__);
	printf("The name of the source file is: %s\n", __FILE__);
	printf("The file was created on: %s\n", __DATE__);
	myfunction();
	printf("The C standard used is: %ld\n", __STDC_VERSION__);
}