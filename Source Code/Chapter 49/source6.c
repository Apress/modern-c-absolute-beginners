#include <stdio.h>
#include <time.h>

int main(void)
{
	time_t mytime = time(NULL);
	struct tm *nowtm;
	nowtm = localtime(&mytime);
	printf("Minutes and seconds are: %d:%d\n", nowtm->tm_min, nowtm->tm_sec);
}