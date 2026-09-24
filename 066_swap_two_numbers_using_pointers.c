/*
 * Program: Swap Two Numbers Using Pointers
 * Author: Darsh Nanavati
 *
 * Description:
 * A C program that swaps two numbers using pointers.
 * The addresses of the two variables are stored in pointer variables,
 * allowing their values to be exchanged indirectly.
 */

#include <stdio.h>

int main(void)
{
    int a, b, temp;
    int *ptr_a, *ptr_b;

    printf("Please Enter First Number: ");
    scanf("%d", &a);

    printf("Please Enter Second Number: ");
    scanf("%d", &b);

    printf("\nNumbers Swapped: ");

    ptr_a = &a;
    ptr_b = &b;

    temp = *ptr_a;
    *ptr_a = *ptr_b;
    *ptr_b = temp;

    printf("%d %d\n", a, b);

    printf("Thank You!!\n");

    return 0;
}
