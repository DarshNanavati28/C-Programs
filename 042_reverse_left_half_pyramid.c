/*
 * Program: Reverse Left Half Pyramid
 * Author: Darsh Nanavati
 *
 * Description:
 * A C program that prints a reverse left half pyramid pattern
 * using nested for loops.
 */

#include <stdio.h>

int main(void)
{
    int n = 5;
    int i, j;

    printf("Hello!!\n");
    printf("Below is the Reverse Left Half Pyramid Pattern:\n\n");

    for (i = n; i >= 1; i--)
    {
        for (j = 1; j <= i; j++)
        {
            printf("* ");
        }

        printf("\n");
    }

    printf("\nThank You!!\n");

    return 0;
}
