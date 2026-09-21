/*
 * Program: Number Triangular Pattern
 * Author: Darsh Nanavati
 *
 * Description:
 * A C program that prints a triangular number pattern using
 * nested for loops. The pattern uses spaces for alignment and
 * prints the row number multiple times on each row.
 */

#include <stdio.h>

int main(void)
{
    int i, j, k;

    printf("Hello!!\n");
    printf("Below is the Number Triangular Pattern:\n\n");

    for (i = 1; i <= 4; i++)
    {
        /* Print spaces for alignment */
        for (k = 1; k <= 5 - i; k++)
        {
            printf(" ");
        }

        /* Print the row number */
        for (j = 1; j <= i; j++)
        {
            printf("%d ", i);
        }

        printf("\n");
    }

    printf("\nThank You!!\n");

    return 0;
}
