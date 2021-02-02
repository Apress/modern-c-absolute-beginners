#include <stdio.h>

struct MyStruct
{
  _Alignas(16) int x[4];
};

int main(void)
{
    printf("The alignment of MyStruct is: %zu bytes\n", _Alignof(struct MyStruct));
}