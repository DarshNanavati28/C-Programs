/*
 * Program: Number Changing Pyramid
 * Author: Darsh Nanavati
 *
 * Description:
 * A C program that prints a number-changing pyramid pattern.
 * The numbers continuously increase from one row to the next
 * using a separate counter variable.
 */

#include <stdio.h>

int main(void)
{
    int i, j;
    int num = 1;

    printf("Hello!!\n");
    printf("Below is the Number Changing Pyramid Pattern:\n\n");

    for (i = 1; i <= 4; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("%d ", num);
            num++;
        }

        printf("\n");
    }

    printf("\nThank You!!\n");

    return 0;
}
