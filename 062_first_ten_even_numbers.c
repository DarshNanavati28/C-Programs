/*
 * Program: First Ten Even Numbers
 * Author: Darsh Nanavati
 *
 * Description:
 * A C program that prints the first ten positive even numbers
 * using a for loop and an arithmetic expression.
 */

#include <stdio.h>

int main(void)
{
    int i, even;

    printf("Hello!!\n");
    printf("First Ten Even Numbers are as Follows:\n\n");

    for (i = 0; i < 10; i++)
    {
        even = 2 + (2 * i);
        printf("%d\n", even);
    }

    printf("\nThank You!!\n");

    return 0;
}
