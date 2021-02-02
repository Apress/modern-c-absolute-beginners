#include <threads.h>
#include <stdio.h>

int dowork(void *arg)
{
	thrd_t mythreadid = thrd_current();
	for (int i = 0; i < 5; i++)
	{
		printf("Thread id: %lu, counter: %d, code: %s\n", mythreadid, i, (char *)arg);
	}
	return 0;
}
int main(void)
{
	thrd_t mythread;
	// create a thread that executes a function code
	if (thrd_success != thrd_create(&mythread, dowork, "Hello from a thread!"))
	{
		printf("Could not create a thread.\n");
		return 1;
	}
	// join a thread to the main thread
	thrd_join(mythread, NULL);
}