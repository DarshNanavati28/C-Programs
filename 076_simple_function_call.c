/*
 * Program: Simple Function Call
 * Author: Darsh Nanavati
 *
 * Description:
 * A simple C program that demonstrates how to define and call
 * a user-defined function with no parameters and no return value.
 */

#include <stdio.h>

void greet(void)
{
    printf("Hello, Darsh!\n");
}

int main(void)
{
    greet();

    return 0;
}
