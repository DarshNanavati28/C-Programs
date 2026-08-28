/*
 * Program: Odd Even Detector
 * Author: Darsh Nanavati
 * Date: 01/04/2025
 *
 * Description:
 * A simple C program that determines whether a user-entered
 * integer is odd or even using the modulus (%) operator.
 */

#include <stdio.h>

int main(void)
{
    int num;

    printf("Hello!!\n");
    printf("Please enter a number: ");
    scanf("%d", &num);

    if (num % 2 == 0)
    {
        printf("%d is Even.\n", num);
    }
    else
    {
        printf("%d is Odd.\n", num);
    }

    printf("Thank you!!\n");

    return 0;
}
