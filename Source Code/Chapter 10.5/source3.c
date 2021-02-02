#include <stdio.h>

int main(void)
{
	char* mycharp = NULL;
	int* myintp = NULL;
	float* myfloatp = NULL;

	printf("The value of a char pointer: %p\n", (void *)mycharp);
	printf("The value of an int pointer: %p\n", (void *)myintp);
	printf("The value of a float pointer: %p\n", (void *)myfloatp);
}