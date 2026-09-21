/*
 * Program: Even Number Validator
 * Author: Darsh Nanavati
 * Date: 2025
 *
 * Description:
 * A simple C program that repeatedly asks the user to enter
 * a number until an even number is provided.
 */

#include <stdio.h>

int main(void)
{
    int num;

    printf("Hello!!\n");

    do
    {
        printf("Enter a number: ");
        scanf("%d", &num);

        if (num % 2 != 0)
        {
            printf("%d is an odd number. Please enter an EVEN number.\n", num);
        }

    } while (num % 2 != 0);

    printf("%d is an even number.\n", num);
    printf("Thank You!!\n");

    return 0;
}
