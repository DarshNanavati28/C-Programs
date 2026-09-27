/*
 * Program: Square Using Function
 * Author: Darsh Nanavati
 *
 * Description:
 * A C program that demonstrates a user-defined function that
 * accepts a parameter but does not return a value.
 */

#include <stdio.h>

void square(int x)
{
    printf("Square = %d\n", x * x);
}

int main(void)
{
    square(6);

    return 0;
}
