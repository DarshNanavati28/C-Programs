/*
 * Program: Reverse Right Half Triangle Pattern
 * Author: Darsh Nanavati
 *
 * Description:
 * A C program that prints a reverse right half triangle pattern
 * using nested for loops.
 */

#include <stdio.h>

int main(void)
{
    int i, j;

    printf("Hello!!\n");
    printf("Below is the Reverse Right Half Triangle Pattern:\n\n");

    for (i = 5; i > 0; i--)
    {
        for (j = 0; j < i; j++)
        {
            printf("* ");
        }

        printf("\n");
    }

    printf("\nThank You!!\n");

    return 0;
}
