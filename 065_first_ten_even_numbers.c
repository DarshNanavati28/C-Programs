/*
 * Program: First Ten Even Numbers
 * Author: Darsh Nanavati
 *
 * Description:
 * A C program that generates and displays the first ten even numbers
 * using a for loop and a mathematical formula.
 */

#include <stdio.h>

int main(void)
{
    int i, even;

    printf("Hello!!\n");
    printf("First Ten Even Numbers are as Follows:\n\n");

    for (i = 0; i < 10; i++)
    {
        even = 2 * i;
        printf("%d\n", even);
    }

    printf("\nThank You!!\n");

    return 0;
}
