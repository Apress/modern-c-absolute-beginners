#include <assert.h>

int main(void)
{
	static_assert(sizeof(int) == 8, "The size of int is not 8.\n");
}