/*
 * Program: Right Half Pyramid Pattern
 * Author: Darsh Nanavati
 *
 * Description:
 * A C program that prints a right half pyramid pattern using
 * nested for loops.
 */

#include <stdio.h>

int main(void)
{
    int i, j;

    printf("Hello!!\n");
    printf("Below is the Right Half Pyramid Pattern:\n\n");

    for (i = 0; i < 5; i++)
    {
        for (j = 0; j <= i; j++)
        {
            printf("* ");
        }

        printf("\n");
    }

    printf("\nThank You!!\n");

    return 0;
}
