#include <stdio.h>

int main(void)
{
	char c = 'a';
	switch (c)
	{
	case 'a':
		printf("The value of c is 'a'.\n");
		break;
	case 'b':
		printf("The value of c is 'b'.\n");
		break;
	case 'c':
		printf("The value of x is 'c'.\n");
		break;

	default:
		printf("None of the above values matches the value of c.\n");
		break;
	}
}