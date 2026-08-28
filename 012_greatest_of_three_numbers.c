/*
 * Program: Greatest of Three Numbers
 * Author: Darsh Nanavati
 * Date: 02/04/2025
 *
 * Description:
 * A C program that accepts three numbers from the user and
 * determines the greatest number. It also handles cases where
 * two or more numbers have the same greatest value.
 */

#include <stdio.h>

int main(void)
{
    int a, b, c;

    printf("Hello!!\n");

    printf("Please enter number 'a': ");
    scanf("%d", &a);

    printf("Please enter number 'b': ");
    scanf("%d", &b);

    printf("Please enter number 'c': ");
    scanf("%d", &c);

    if (a > b && a > c)
    {
        printf("a (%d) is the greatest.\n", a);
    }
    else if (b > a && b > c)
    {
        printf("b (%d) is the greatest.\n", b);
    }
    else if (c > a && c > b)
    {
        printf("c (%d) is the greatest.\n", c);
    }
    else if (a == b && b == c)
    {
        printf("All three numbers are equal.\n");
    }
    else if (a == b && a > c)
    {
        printf("a and b are equal and are the greatest.\n");
    }
    else if (a == c && a > b)
    {
        printf("a and c are equal and are the greatest.\n");
    }
    else
    {
        printf("b and c are equal and are the greatest.\n");
    }

    printf("Thank You!!\n");

    return 0;
}
