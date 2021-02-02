#include <stdio.h>

int main(void)
{
	enum MyEnum
	{
		FIRST,
		SECOND,
		THIRD
	};
	enum MyEnum myEnumVar;
	myEnumVar = SECOND;
	printf("Declared an enum. Setting the value to: %d\n", myEnumVar);
}