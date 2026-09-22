/*
 * Program: Reverse Hollow Triangle Pattern
 * Author: Darsh Nanavati
 *
 * Description:
 * A C program that prints a reverse hollow triangular star pattern
 * using nested for loops and conditional statements.
 */

#include <stdio.h>

int main(void)
{
    int n = 5;
    int i, j, s;

    printf("Hello!!\n");
    printf("Below is the Reverse Hollow Triangle Pattern:\n\n");

    for (i = n; i >= 1; i--)
    {
        /* Print leading spaces */
        for (s = 0; s < n - i; s++)
        {
            printf(" ");
        }

        /* Print stars and inner spaces */
        for (j = 1; j <= 2 * i - 1; j++)
        {
            if (j == 1 || j == 2 * i - 1 || i == n)
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
