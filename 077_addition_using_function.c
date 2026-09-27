/*
 * Program: Addition Using Function
 * Author: Darsh Nanavati
 *
 * Description:
 * A C program that demonstrates a user-defined function with
 * parameters and a return value to calculate the sum of two numbers.
 */

#include <stdio.h>

int add(int a, int b)
{
    return a + b;
}

int main(void)
{
    int result = add(4, 5);

    printf("Sum = %d\n", result);

    return 0;
}
