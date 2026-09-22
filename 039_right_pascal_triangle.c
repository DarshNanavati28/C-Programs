/*
 * Program: Right Pascal's Triangle Pattern
 * Author: Darsh Nanavati
 *
 * Description:
 * A C program that prints a right Pascal's triangle pattern
 * using nested for loops. The pattern is formed by increasing
 * the number of stars and then decreasing it.
 */

#include <stdio.h>

int main(void)
{
    int n = 5;
    int i, j;

    printf("Hello!!\n");
    printf("Below is the Right Pascal's Triangle Pattern:\n\n");

    /* Upper half */
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("* ");
        }

        printf("\n");
    }

    /* Lower half */
    for (i = n - 1; i >= 1; i--)
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
