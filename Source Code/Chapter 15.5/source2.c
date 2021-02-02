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
	MyStruct *ps = &s;
	printf("Member c has a value of %c\n", ps->c);
	printf("Member x has a value of %d\n", ps->x);
	printf("Member d has a value of %f\n", ps->d);
}