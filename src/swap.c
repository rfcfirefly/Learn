#include <stdio.h>

int main(void)
{
    // Final Values: x:10, y:90
    int x = 10;
    int y = 90;

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