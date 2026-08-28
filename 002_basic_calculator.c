/*
 * Program: Basic Calculator
 * Author: Darsh Nanavati
 * Date: 31/03/2025
 *
 * Description:
 * A basic calculator program that performs addition, subtraction,
 * multiplication, and division using two user-provided values.
 */

#include <stdio.h>

int main(void)
{
    float a, b;
    
    printf("Welcome to the Calculator!!\n");

    printf("Enter the value of a: ");
    scanf("%f", &a);

    printf("Enter the value of b: ");
    scanf("%f", &b);

    printf("The Addition of a and b is: %.2f\n", a + b);
    printf("The Subtraction of b and a is: %.2f\n", b - a);
    printf("The Multiplication of a and b is: %.2f\n", a * b);

    if (a != 0)
        printf("The Division of b and a is: %.2f\n", b / a);
    else
        printf("Division by zero is not possible.\n");

    printf("Thank you for using the Calculator!!\n");

    return 0;
}
