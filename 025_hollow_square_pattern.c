/*
 * Program: Hollow Square Pattern
 * Author: Darsh Nanavati
 *
 * Description:
 * A C program that prints a hollow square pattern using
 * nested for loops and conditional statements.
 */

#include <stdio.h>

int main(void)
{
    int i, j;

    printf("Hello!!\n");
    printf("Below is the Hollow Square Pattern:\n\n");

    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            if (i == 0 || i == 4 || j == 0 || j == 4)
            {
                printf("* ");
            }
            else
            {
                printf("  ");
            }
        }

        printf("\n");
    }

    printf("\nThank You!!\n");

    return 0;
}
