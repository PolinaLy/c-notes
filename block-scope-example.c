#include <stdio.h>

int triple(int x)
{
    return x *=3;
}

int main(void)
{
    int foo = 4;
    foo = triple(foo);
    printf("%i\n", foo);
}
