/*
 * Program: Odd Number Validator
 * Author: Darsh Nanavati
 * Date: 31/03/2025
 *
 * Description:
 * A simple C program that checks whether the number entered
 * by the user is odd. If an even number is entered, the
 * program informs the user and asks them to enter an odd number.
 */

#include <stdio.h>

int main(void)
{
    int num;

    printf("Hello!!\n");
    printf("Please enter an ODD number: ");
    scanf("%d", &num);

    if (num % 2 == 0)
    {
        printf("%d is an even number. Please enter an ODD number.\n", num);
    }
    else
    {
        printf("%d is odd.\n", num);
    }

    printf("Thank you!!\n");

    return 0;
}
