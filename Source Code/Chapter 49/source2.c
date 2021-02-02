#include <stdio.h>
#include <time.h>
 
int main(void)
{
	time_t mytime;
	time(&mytime);
	printf("Obtained the current time to a mytime variable.\n");
}