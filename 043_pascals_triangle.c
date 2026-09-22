/*
 * Program: Pascal's Triangle
 * Author: Darsh Nanavati
 *
 * Description:
 * A C program that generates and prints Pascal's Triangle
 * using nested for loops. Each value is calculated from the
 * previous value in the same row using a mathematical formula.
 */

#include <stdio.h>

int main(void)
{
    int i, j, spaces;
    int value;
    int n = 5;

    printf("Hello!!\n");
    printf("Below is Pascal's Triangle:\n\n");

    for (i = 0; i < n; i++)
    {
        value = 1;

        /* Print leading spaces for alignment */
        for (spaces = 0; spaces < n - i - 1; spaces++)
        {
            printf("  ");
        }

        /* Calculate and print each value */
        for (j = 0; j <= i; j++)
        {
            printf("%4d", value);
            value = value * (i - j) / (j + 1);
        }

        printf("\n");
    }

    printf("\nThank You!!\n");

    return 0;
}
