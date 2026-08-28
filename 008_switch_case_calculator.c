/*
 * Program: Switch-Case Calculator
 * Author: Darsh Nanavati
 * Date: 31/03/2025
 *
 * Description:
 * A simple calculator that uses a switch-case statement to
 * perform addition, subtraction, multiplication, or division
 * based on the user's selected operation.
 */

#include <stdio.h>

int main(void)
{
    float a, b, result;
    int choice;

    printf("Hello!!\n");

    printf("Please enter the value of a: ");
    scanf("%f", &a);

    printf("Please enter the value of b: ");
    scanf("%f", &b);

    printf("\nYou have four choices:\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");

    printf("Please enter the choice number for the operation: ");
    scanf("%d", &choice);

    switch (choice)
    {
        case 1:
            result = a + b;
            printf("Result of Addition: %.2f\n", result);
            break;

        case 2:
            result = b - a;
            printf("Result of Subtraction: %.2f\n", result);
            break;

        case 3:
            result = a * b;
            printf("Result of Multiplication: %.2f\n", result);
            break;

        case 4:
            if (b != 0)
            {
                result = a / b;
                printf("Result of Division: %.2f\n", result);
            }
            else
            {
                printf("Error: Division by zero is not allowed.\n");
            }
            break;

        default:
            printf("Invalid choice. Please select an option from 1 to 4.\n");
            break;
    }

    printf("Thank You!!\n");

    return 0;
}
