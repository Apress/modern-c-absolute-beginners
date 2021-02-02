#include <stdio.h>

struct MyStruct
{
	char c;
	int x;
	double d;
};

int main(void)
{
	struct MyStruct s = {'a', 123, 456.789};
	struct MyStruct *ps = &s;
	printf("Member c has a value of %c\n", (*ps).c);
	printf("Member x has a value of %d\n", (*ps).x);
	printf("Member d has a value of %f\n", (*ps).d);
}