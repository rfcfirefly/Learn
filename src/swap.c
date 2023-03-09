#include <stdio.h>

int main(void)
{
    int x = 30;
    int y = 70;

    printf("x is: %i\n", x);
    printf("y is: %i\n", y);

    // swapping
    int tmp = x;
    x = y;
    y = tmp;

    printf("x is now: %i\n", x);
    printf("y is now: %i\n", y);

    return 0;
}