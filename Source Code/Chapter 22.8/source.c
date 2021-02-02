#include <stdio.h>

enum MyEnum
{
	Red,
	Yellow,
	Green
};

int main(void)
{
	enum MyEnum myenum;
	myenum = Green;
	switch (myenum)
	{
	case Red:
		printf("The color is Red.\n");
		break;
	case Yellow:
		printf("The color is Yellow.\n");
		break;
	case Green:
		printf("The color is Green.\n");
		break;
	default:
		break;
	}
}