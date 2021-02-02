#include <stdio.h>
#include <string.h>

typedef struct
{
	char c;
	int x;
	double d;
} MyStruct;

int main(void)
{
	MyStruct source, destination;
	source.c = 'a';
	source.x = 123;
	source.d = 456.789;
	memcpy(&destination, &source, sizeof(destination));
	printf("The result after copying bytes from source to destination:\n");
	printf("Member destination.c has a value of: %c\n", destination.c);
	printf("Member destination.x has a value of: %d\n", destination.x);
	printf("Member destination.d has a value of: %f\n", destination.d);
}