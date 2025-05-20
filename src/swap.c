/*
 * Basic c program: showing functions and use of pointers.
 * Swapping 2 integer values via a function.
 *
*/
#include <stdio.h>

void swap(int*, int*);


int main(void)
{
    int x = 10;
    int y = 90;

    printf("x is: %i\n", x);
    printf("y is: %i\n", y);

    swap(&x, &y);

    printf("x is now: %i\n", x);
    printf("y is now: %i\n", y);


    return 0;
}


void swap(int* x, int* y)
/* Swap the values of 2 integers */
{
    printf("Swap: %i and %i\n", *x, *y);
    int tmp = *x;
    *x = *y;
    *y = tmp;
}
