/*
 * Program: First Ten Even Numbers
 * Author: Darsh Nanavati
 *
 * Description:
 * A C program that prints the first ten even numbers using
 * a for loop and a mathematical expression.
 */

#include <stdio.h>

int main(void)
{
    int i;

    printf("Hello!!\n");
    printf("First Ten Even Numbers are as Follows:\n\n");

    for (i = 0; i < 10; i++)
    {
        printf("%d\n", 2 * i);
    }

    printf("\nThank You!!\n");

    return 0;
}
