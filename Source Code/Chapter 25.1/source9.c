#include <stdio.h>
#include <stdlib.h>

typedef struct
{
	char c;
	int x;
	double d;
} MyStruct;

int main(void)
{
	MyStruct *p = malloc(sizeof(MyStruct));
	if (p)
	{
		p->c = 'A';
		p->x = 123;
		p->d = 456.789;
		printf("The value is: %c\n", p->c);
		printf("The value is: %d\n", p->x);
		printf("The value is: %f\n", p->d);
	}
	free(p);
}