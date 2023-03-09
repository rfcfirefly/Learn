#include <stdio.h>

void swap(int* a, int* b)
{
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

int main(void)
{
    // Final Values: x:10, y:90
    int x = 10;
    int y = 90;

    printf("x is: %i\n", x);
    printf("y is: %i\n", y);

    // swapping
    swap(x, y);

    printf("x is now: %i\n", x);_VA_LIST
    printf("y is now: %i\n", y);

    return 0;
}