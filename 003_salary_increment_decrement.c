/*
 * Program: Salary Increment or Decrement
 * Author: Darsh Nanavati
 * Date: 01/04/2025
 *
 * Description:
 * A simple C program that determines whether a salary should be
 * increased or decreased based on a given salary threshold.
 */

#include <stdio.h>

int main(void)
{
    int salary;

    printf("Hello!!\n");

    printf("Please enter your monthly salary: Rs.");
    scanf("%d", &salary);

    if (salary >= 5000)
    {
        printf("Congratulations! You will receive a monthly increment of Rs.100/-.\n");
        printf("Your new salary will be: Rs.%d/-\n", salary + 100);
    }
    else
    {
        printf("Sorry! Your monthly salary will be decreased by Rs.50/-.\n");
        printf("Your new salary will be: Rs.%d/-\n", salary - 50);
    }

    printf("Thank you!!\n");

    return 0;
}
