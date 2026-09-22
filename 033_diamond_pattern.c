/*
 * Program: Diamond Pattern
 * Author: Darsh Nanavati
 *
 * Description:
 * A C program that prints a diamond-shaped star pattern using
 * nested for loops. The pattern is created using an increasing
 * upper half followed by a decreasing lower half.
 */

#include <stdio.h>

int main(void)
{
    int i, j;

    printf("Hello!!\n");
    printf("Below is the Diamond Pattern:\n\n");

    /* Upper half */
    for (i = 1; i <= 5; i++)
    {
        /* Print spaces */
        for (j = 1; j <= 5 - i; j++)
        {
            printf(" ");
        }

        /* Print stars */
        for (j = 1; j <= 2 * i - 1; j++)
        {
            printf("*");
        }

        printf("\n");
    }

    /* Lower half */
    for (i = 4; i >= 1; i--)
    {
        /* Print spaces */
        for (j = 1; j <= 5 - i; j++)
        {
            printf(" ");
        }

        /* Print stars */
        for (j = 1; j <= 2 * i - 1; j++)
        {
            printf("*");
        }

        printf("\n");
    }

    printf("\nThank You!!\n");

    return 0;
}
