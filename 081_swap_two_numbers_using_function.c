/*
 * Program: Swap Two Numbers Using Function
 * Author: Darsh Nanavati
 *
 * Description:
 * A C program that swaps two integer values using a user-defined
 * function and pointer parameters.
 */

#include <stdio.h>

void swap(int *a, int *b)
{
    int temp = *a;

    *a = *b;
    *b = temp;
}

int main(void)
{
    int x = 5;
    int y = 10;

    printf("Before Swap: x = %d, y = %d\n", x, y);

    swap(&x, &y);

    printf("After Swap: x = %d, y = %d\n", x, y);

    return 0;
}
