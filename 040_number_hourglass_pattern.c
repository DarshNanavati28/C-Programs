/*
 * Program: Number Hourglass Pattern
 * Author: Darsh Nanavati
 *
 * Description:
 * A C program that prints a symmetrical number hourglass pattern
 * using nested for loops. Each row contains decreasing numbers
 * from 2*i-1 down to 1, with spaces used to create the shape.
 */

#include <stdio.h>

int main(void)
{
    int n = 5;
    int i, s, j;

    printf("Hello!!\n");
    printf("Below is the Number Hourglass Pattern:\n\n");

    /* Upper half */
    for (i = n; i >= 1; i--)
    {
        for (s = 0; s < n - i; s++)
        {
            printf(" ");
        }

        for (j = 2 * i - 1; j >= 1; j--)
        {
            printf("%d", j);
        }

        printf("\n");
    }

    /* Lower half */
    for (i = 2; i <= n; i++)
    {
        for (s = 0; s < n - i; s++)
        {
            printf(" ");
        }

        for (j = 2 * i - 1; j >= 1; j--)
        {
            printf("%d", j);
        }

        printf("\n");
    }

    printf("\nThank You!!\n");

    return 0;
}
