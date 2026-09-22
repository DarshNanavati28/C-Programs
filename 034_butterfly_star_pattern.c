/*
 * Program: Butterfly Star Pattern
 * Author: Darsh Nanavati
 *
 * Description:
 * A C program that prints a butterfly-shaped star pattern using
 * nested for loops. The pattern consists of two symmetrical
 * sections with stars on both sides and spaces in the middle.
 */

#include <stdio.h>

int main(void)
{
    int i, j;

    printf("Hello!!\n");
    printf("Below is the Butterfly Star Pattern:\n\n");

    /* Upper half */
    for (i = 1; i <= 5; i++)
    {
        /* Left stars */
        for (j = 1; j <= i; j++)
        {
            printf("*");
        }

        /* Middle spaces */
        for (j = 1; j <= 2 * (5 - i); j++)
        {
            printf(" ");
        }

        /* Right stars */
        for (j = 1; j <= i; j++)
        {
            printf("*");
        }

        printf("\n");
    }

    /* Lower half */
    for (i = 5; i >= 1; i--)
    {
        /* Left stars */
        for (j = 1; j <= i; j++)
        {
            printf("*");
        }

        /* Middle spaces */
        for (j = 1; j <= 2 * (5 - i); j++)
        {
            printf(" ");
        }

        /* Right stars */
        for (j = 1; j <= i; j++)
        {
            printf("*");
        }

        printf("\n");
    }

    printf("\nThank You!!\n");

    return 0;
}
