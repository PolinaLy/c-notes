#include <stdio.h>

float global = 0.5050;

void triple(void)
{
    global *=3;
}

int main(void)
{
    triple();
    printf("%f\n", global);
}
