/*
 * Program: Number Increasing Pyramid
 * Author: Darsh Nanavati
 *
 * Description:
 * A C program that prints an increasing number pyramid using
 * nested for loops. Each row starts from 1 and increases up to
 * the current row number.
 */

#include <stdio.h>

int main(void)
{
    int i, j;

    printf("Hello!!\n");
    printf("Below is the Number Increasing Pyramid Pattern:\n\n");

    for (i = 1; i <= 4; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("%d ", j);
        }

        printf("\n");
    }

    printf("\nThank You!!\n");

    return 0;
}
