/*
 * Program: Calculator Using Functions
 * Author: Darsh Nanavati
 *
 * Description:
 * A menu-free calculator that performs addition, subtraction,
 * multiplication, and division using separate user-defined functions.
 */

#include <stdio.h>

float add(float a, float b);
float subtract(float a, float b);
float multiply(float a, float b);
float divide(float a, float b);

int main(void)
{
    float num1, num2, result;
    char operator;

    printf("Enter first number: ");
    scanf("%f", &num1);

    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c", &operator);

    printf("Enter second number: ");
    scanf("%f", &num2);

    switch (operator)
    {
        case '+':
            result = add(num1, num2);
            break;

        case '-':
            result = subtract(num1, num2);
            break;

        case '*':
            result = multiply(num1, num2);
            break;

        case '/':
            if (num2 == 0)
            {
                printf("Error: Division by zero is not allowed.\n");
                return 1;
            }

            result = divide(num1, num2);
            break;

        default:
            printf("Error: Invalid operator.\n");
            return 1;
    }

    printf("Result: %.2f %c %.2f = %.2f\n",
           num1, operator, num2, result);

    return 0;
}

float add(float a, float b)
{
    return a + b;
}

float subtract(float a, float b)
{
    return a - b;
}

float multiply(float a, float b)
{
    return a * b;
}

float divide(float a, float b)
{
    return a / b;
}
