#include <stdio.h>
#include <time.h>
 
int main(void)
{
	time_t mytime = time(NULL);
	struct tm *now;
	now = localtime(&mytime);
	printf("Obtained and stored the current time.\n");
}