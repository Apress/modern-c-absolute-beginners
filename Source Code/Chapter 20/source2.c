#include <stdio.h>

int main(void)
{
	enum Days
	{
		WEDNESDAY = 3,
		THURSDAY,
		FRIDAY
	};
	enum Days myDays;
	myDays = FRIDAY;
	printf("Declared an enum. Setting the value to: %d\n", myDays);
}