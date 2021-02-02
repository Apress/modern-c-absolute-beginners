#include <stdio.h>
#include <time.h>

int main(void)
{
	time_t mytime = time(NULL);
	struct tm *nowtm;
	char str[70];
	nowtm = localtime(&mytime);
	strftime(str, sizeof str, "%D", nowtm);
	printf("The date is: %s\n", str);
}