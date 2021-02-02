#include <stdio.h>

typedef struct
{
	char c;
	int x;
	double d;
} MyStruct;

int main(void)
{
	MyStruct s1 = {'a', 123, 456.789};
	MyStruct s2;
	s2 = s1; /* copies member values */
	printf("Values from s1 copied to s2.\n");
	printf("Member s2.c has a value of %c\n", s2.c);
	printf("Member s2.x has a value of %d\n", s2.x);
	printf("Member s2.d has a value of %f\n", s2.d);
}