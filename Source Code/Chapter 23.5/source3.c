#include <stdio.h>

void myfunction()
{
	printf("This function's name is: %s\n", __func__);
}

int main(void)
{
	myfunction();
}