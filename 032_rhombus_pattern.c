/*
 * Program: Rhombus Pattern
 * Author: Darsh Nanavati
 *
 * Description:
 * A C program that prints a rhombus pattern using nested
 * for loops. Leading spaces are used to shift each row and
 * create the slanted shape.
 */

#include <stdio.h>

int main(void)
{
    int i, j;

    printf("Hello!!\n");
    printf("Below is the Rhombus Pattern:\n\n");

    for (i = 1; i <= 5; i++)
    {
        /* Print leading spaces */
        for (j = 1; j < i; j++)
        {
            printf(" ");
        }

        /* Print stars */
        for (j = 1; j <= 5; j++)
        {
            printf("*");
        }

        printf("\n");
    }

    printf("\nThank You!!\n");

    return 0;
}
