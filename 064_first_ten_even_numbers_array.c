/*
 * Program: First Ten Even Numbers Using Array
 * Author: Darsh Nanavati
 *
 * Description:
 * A C program that stores the first ten even numbers in an array
 * and displays them using a for loop.
 */

#include <stdio.h>

int main(void)
{
    int evens[10] = {0, 2, 4, 6, 8, 10, 12, 14, 16, 18};
    int i;

    printf("Hello!!\n");
    printf("First Ten Even Numbers are as Follows:\n\n");

    for (i = 0; i < 10; i++)
    {
        printf("%d\n", evens[i]);
    }

    printf("\nThank You!!\n");

    return 0;
}
