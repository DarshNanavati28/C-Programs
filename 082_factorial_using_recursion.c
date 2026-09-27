/*
 * Program: Factorial Using Recursion
 * Author: Darsh Nanavati
 *
 * Description:
 * A C program that calculates the factorial of a number using
 * a recursive function.
 */

#include <stdio.h>

int factorial(int n)
{
    if (n == 0)
        return 1;

    return n * factorial(n - 1);
}

int main(void)
{
    printf("Factorial of 5 = %d\n", factorial(5));

    return 0;
}
