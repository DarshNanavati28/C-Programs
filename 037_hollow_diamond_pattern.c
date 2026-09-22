/*
 * Program: Hollow Diamond Pattern
 * Author: Darsh Nanavati
 *
 * Description:
 * A C program that prints a hollow diamond pattern using nested
 * for loops and conditional statements. The diamond is created
 * using an increasing upper half and a decreasing lower half.
 */

#include <stdio.h>

int main(void)
{
    int n = 5;
    int i, j, s;

    printf("Hello!!\n");
    printf("Below is the Hollow Diamond Pattern:\n\n");

    /* Upper half */
    for (i = 1; i <= n; i++)
    {
        /* Print leading spaces */
        for (s = 1; s <= n - i; s++)
        {
            printf(" ");
        }

        /* Print boundary stars */
        for (j = 1; j <= 2 * i - 1; j++)
        {
            if (j == 1 || j == 2 * i - 1)
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
    for (i = n - 1; i >= 1; i--)
    {
        /* Print leading spaces */
        for (s = 1; s <= n - i; s++)
        {
            printf(" ");
        }

        /* Print boundary stars */
        for (j = 1; j <= 2 * i - 1; j++)
        {
            if (j == 1 || j == 2 * i - 1)
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
