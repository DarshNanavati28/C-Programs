/*
 * Program: Hollow Hourglass Pattern
 * Author: Darsh Nanavati
 *
 * Description:
 * A C program that prints a hollow hourglass pattern using nested
 * for loops and conditional statements. The pattern is created
 * using a decreasing upper half followed by an increasing lower half.
 */

#include <stdio.h>

int main(void)
{
    int n = 5;
    int i, j, s;

    printf("Hello!!\n");
    printf("Below is the Hollow Hourglass Pattern:\n\n");

    /* Upper half */
    for (i = n; i >= 1; i--)
    {
        /* Print leading spaces */
        for (s = 0; s < n - i; s++)
        {
            printf(" ");
        }

        /* Print boundary stars */
        for (j = 1; j <= 2 * i - 1; j++)
        {
            if (i == n || j == 1 || j == 2 * i - 1)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }

        printf("\n");
    }

    /* Lower half */
    for (i = 2; i <= n; i++)
    {
        /* Print leading spaces */
        for (s = 0; s < n - i; s++)
        {
            printf(" ");
        }

        /* Print boundary stars */
        for (j = 1; j <= 2 * i - 1; j++)
        {
            if (i == n || j == 1 || j == 2 * i - 1)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }

        printf("\n");
    }

    printf("\nThank You!!\n");

    return 0;
}
