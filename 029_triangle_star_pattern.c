/*
 * Program: Triangle Star Pattern
 * Author: Darsh Nanavati
 *
 * Description:
 * A C program that prints a centered triangle star pattern
 * using nested for loops.
 */

#include <stdio.h>

int main(void)
{
    int i, j, k;

    printf("Hello!!\n");
    printf("Below is the Triangle Star Pattern:\n\n");

    for (i = 1; i <= 5; i++)
    {
        /* Print spaces */
        for (k = 1; k <= 5 - i; k++)
        {
            printf(" ");
        }

        /* Print stars */
        for (j = 1; j <= i; j++)
        {
            printf("* ");
        }

        printf("\n");
    }

    printf("\nThank You!!\n");

    return 0;
}
