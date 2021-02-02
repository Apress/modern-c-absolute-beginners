#include <stdio.h>

int main(void)
{
	char c = 'a';
	int x = 123;
	float f = 456.789f;

	char *mycharp = &c;
	int *myintp = &x;
	float *myfloatp = &f;

	printf("The value of a char pointer: %p\n", (void *)mycharp);
	printf("The value of an int pointer: %p\n", (void *)myintp);
	printf("The value of a float pointer: %p\n", (void *)myfloatp);
}