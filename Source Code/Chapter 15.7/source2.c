#include <stdio.h>

typedef struct
{
	char c;
	int x;
	double d;
} MyStruct;

void myfunction(MyStruct myparameter)
{
	printf("Member c has a value of %c\n", myparameter.c);
	printf("Member x has a value of %d\n", myparameter.x);
	printf("Member d has a value of %f\n", myparameter.d);
}

int main(void)
{
	MyStruct s = {'a', 123, 456.789};
	myfunction(s);
}