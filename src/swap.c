#include <stdio.h>

void swap(int* x, int* y)
{
    printf("Swap: %i and %i\n", *x, *y);
    int tmp = *x;
    *x = *y;
    *y = tmp;
}

int main(void)
{
    // Final Values: x:10, y:90
    int x = 10;
    int y = 90;

    printf("x is: %i\n", x);
    printf("y is: %i\n", y);

    // swapping
    swap(&x, &y);

    printf("x is now: %i\n", x);
    printf("y is now: %i\n", y);

    return 0;
}
