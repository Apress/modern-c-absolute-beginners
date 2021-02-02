#include <stdio.h>

typedef struct
{
	char arr[50];
	int x;
	double d;
} TMyStruct;

int main(void)
{
	TMyStruct o = {"Hello World from a struct!", 123, 456.789};
	TMyStruct *p = &o;

	printf("Array field: %s\n", p->arr);
	printf("Integer field: %d\n", p->x);
	printf("Double field: %f\n", p->d);
}