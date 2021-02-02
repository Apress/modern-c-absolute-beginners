#include <stdio.h>

struct MyStruct
{
	char c;
	int x;
	double d;
};

void myfunction(struct MyStruct myparameter)
{
	printf("Member c has a value of %c\n", myparameter.c);
	printf("Member x has a value of %d\n", myparameter.x);
	printf("Member d has a value of %f\n", myparameter.d);
}

int main(void)
{
	struct MyStruct s = {'a', 123, 456.789};
	myfunction(s);
}