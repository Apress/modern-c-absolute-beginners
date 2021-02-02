#include <stdio.h>

int main(void)
{
	int x = 2;
	switch (x)
	{
	case 1:
		printf("The value is equal to 1.\n");
		break;
	case 2:
		printf("The value is equal to 2.\n");
		break;
	case 3:
		printf("The value is equal to 3.\n");
		break;
	default:
		printf("The value is not inside the [1..3] range.\n");
		break;
	}
}