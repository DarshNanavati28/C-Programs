/*
 * Program: Change Value Using Pointer
 * Author: Darsh Nanavati
 *
 * Description:
 * A C program that demonstrates passing the address of a variable
 * to a function using a pointer, allowing the function to modify
 * the original variable.
 */

#include <stdio.h>

void changeValue(int *x)
{
    *x = 100;
}

int main(void)
{
    int num = 10;

    printf("Before: %d\n", num);

    changeValue(&num);

    printf("After: %d\n", num);

    return 0;
}
