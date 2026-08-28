/*
 * Program: Number Checker
 * Author: Darsh Nanavati
 * Date: 01/04/2025
 *
 * Description:
 * A simple C program that determines whether a user-entered
 * integer is positive, negative, or equal to zero.
 */

#include <stdio.h>

int main(void)
{
    int num;

    printf("Hello!!\n");
    printf("Please enter a number: ");
    scanf("%d", &num);

    if (num > 0)
    {
        printf("The number is Positive.\n");
    }
    else if (num == 0)
    {
        printf("The number is equal to Zero.\n");
    }
    else
    {
        printf("The number is Negative.\n");
    }

    printf("Thank You!!\n");

    return 0;
}
