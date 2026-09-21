/*
 * Program: K Pattern
 * Author: Darsh Nanavati
 *
 * Description:
 * A C program that prints a K-shaped pattern using nested
 * for loops.
 */

#include <stdio.h>

int main(void)
{
    int i, j;

    printf("Hello!!\n");
    printf("Below is the K Pattern:\n\n");

    /* Upper half */
    for (i = 4; i > 1; i--)
    {
        for (j = 0; j < i; j++)
        {
            printf("* ");
        }

        printf("\n");
    }

    /* Lower half */
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < i + 1; j++)
        {
            printf("* ");
        }

        printf("\n");
    }

    printf("\nThank You!!\n");

    return 0;
}
