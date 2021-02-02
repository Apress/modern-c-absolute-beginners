#include <stdio.h>

int main(void)
{
	char c = 'a';
	int x = 123;
	float f = 456.789f;

	char *mycharp = &c;
	int *myintp = &x;
	float *myfloatp = &f;

	printf("The value of a pointed-to char: %c\n", *mycharp);
	printf("The value of a pointed-to int: %d\n", *myintp);
	printf("The value of a pointed-to float: %.3f\n", *myfloatp);
}