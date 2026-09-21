/*
 * Program: Square Fill Pattern
 * Author: Darsh Nanavati
 *
 * Description:
 * A C program that prints a filled square pattern using
 * nested for loops.
 */

#include <stdio.h>

int main(void)
{
    int i, j;

    printf("Hello!!\n");
    printf("Below is the Square Fill Pattern:\n\n");

    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 6; j++)
        {
            printf("* ");
        }

        printf("\n");
    }

    printf("\nThank You!!\n");

    return 0;
}
