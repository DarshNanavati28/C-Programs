/*
 * Program: Greatest Number Odd Even Detector
 * Author: Darsh Nanavati
 * Date: 08/04/2025
 *
 * Description:
 * A C program that accepts three integers, determines the
 * greatest number, and checks whether the greatest number
 * is odd or even.
 */

#include <stdio.h>

int main(void)
{
    int a, b, c, greatest;

    printf("Hello!!\n");

    printf("Please enter number 'a': ");
    scanf("%d", &a);

    printf("Please enter number 'b': ");
    scanf("%d", &b);

    printf("Please enter number 'c': ");
    scanf("%d", &c);

    if (a >= b && a >= c)
    {
        greatest = a;
        printf("a (%d) is the greatest.\n", greatest);
    }
    else if (b >= a && b >= c)
    {
        greatest = b;
        printf("b (%d) is the greatest.\n", greatest);
    }
    else
    {
        greatest = c;
        printf("c (%d) is the greatest.\n", greatest);
    }

    if (greatest % 2 == 0)
    {
        printf("%d is Even.\n", greatest);
    }
    else
    {
        printf("%d is Odd.\n", greatest);
    }

    printf("Thank You!!\n");

    return 0;
}
