#include <stdio.h>

typedef struct 
{
	char c;
	int x;
	double d;
} MyStruct;

int main(void)
{
	MyStruct s = {'a', 123, 456.789};
	printf("Variable s of type MyStruct initialized.\n");
	printf("Member c has a value of %c\n", s.c);
	printf("Member x has a value of %d\n", s.x);
	printf("Member d has a value of %f\n", s.d);
}