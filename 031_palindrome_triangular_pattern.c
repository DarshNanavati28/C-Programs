/*
 * Program: Palindrome Triangular Pattern
 * Author: Darsh Nanavati
 *
 * Description:
 * A C program that prints a symmetrical palindrome number
 * triangle using nested for loops.
 */

#include <stdio.h>

int main(void)
{
    int i, j, k;

    printf("Hello!!\n");
    printf("Below is the Palindrome Triangular Pattern:\n\n");

    for (i = 1; i <= 4; i++)
    {
        /* Print spaces for alignment */
        for (k = 1; k <= 5 - i; k++)
        {
            printf("  ");
        }

        /* Print increasing numbers */
        for (j = 1; j <= i; j++)
        {
            printf("%d ", j);
        }

        /* Print decreasing numbers */
        for (j = i - 1; j >= 1; j--)
        {
            printf("%d ", j);
        }

        printf("\n");
    }

    printf("\nThank You!!\n");

    return 0;
}
