/*
 * Program: Centered Hollow Triangle
 * Author: Darsh Nanavati
 *
 * Description:
 * A C program that prints a centered hollow triangle pattern
 * using nested for loops and conditional statements.
 */

#include <stdio.h>

int main(void)
{
    int n = 5;
    int i, j, k;

    printf("Hello!!\n");
    printf("Below is the Centered Hollow Triangle Pattern:\n\n");

    for (i = 1; i <= n; i++)
    {
        /* Print leading spaces */
        for (j = 1; j <= n - i; j++)
        {
            printf(" ");
        }

        /* Print triangle */
        for (k = 1; k <= 2 * i - 1; k++)
        {
            if (k == 1 || k == 2 * i - 1 || i == n)
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
