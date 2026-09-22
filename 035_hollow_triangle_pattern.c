/*
 * Program: Hollow Triangle Pattern
 * Author: Darsh Nanavati
 *
 * Description:
 * A C program that prints a hollow triangular star pattern using
 * nested for loops and conditional statements. Stars are printed
 * only along the two sides and the bottom of the triangle.
 */

#include <stdio.h>

int main(void)
{
    int i, j, k;

    printf("Hello!!\n");
    printf("Below is the Hollow Triangle Pattern:\n\n");

    for (i = 1; i <= 5; i++)
    {
        /* Print spaces for alignment */
        for (k = 1; k <= 5 - i; k++)
        {
            printf(" ");
        }

        /* Print stars and inner spaces */
        for (j = 1; j <= 2 * i - 1; j++)
        {
            if (j == 1 || j == 2 * i - 1 || i == 5)
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
