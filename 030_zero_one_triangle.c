/*
 * Program: Zero-One Triangle Pattern
 * Author: Darsh Nanavati
 *
 * Description:
 * A C program that prints a zero-one triangle pattern using
 * nested for loops and the modulus operator.
 */

#include <stdio.h>

int main(void)
{
    int i, j;

    printf("Hello!!\n");
    printf("Below is the Zero-One Triangle Pattern:\n\n");

    for (i = 1; i <= 4; i++)
    {
        for (j = 1; j <= i; j++)
        {
            if ((i + j) % 2 == 0)
            {
                printf("1 ");
            }
            else
            {
                printf("0 ");
            }
        }

        printf("\n");
    }

    printf("\nThank You!!\n");

    return 0;
}
