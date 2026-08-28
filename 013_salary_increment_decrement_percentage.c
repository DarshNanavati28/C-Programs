/*
 * Program: Salary Increment or Decrement - Percentage
 * Author: Darsh Nanavati
 * Date: 02/04/2025
 *
 * Description:
 * A C program that calculates a salary increment or decrement
 * based on the employee's monthly salary. Salaries of Rs.5000
 * or more receive a 10% increment, while lower salaries receive
 * a 5% decrement.
 */

#include <stdio.h>

int main(void)
{
    float salary, new_salary;

    printf("Hello!!\n");

    printf("Please enter your monthly salary: Rs.");
    scanf("%f", &salary);

    if (salary >= 5000)
    {
        new_salary = salary + (salary * 0.10f);

        printf("Congratulations! You will receive a 10%% increment.\n");
        printf("Your new salary will be: Rs.%.2f/-\n", new_salary);
    }
    else
    {
        new_salary = salary - (salary * 0.05f);

        printf("Sorry! Your salary will receive a 5%% decrement.\n");
        printf("Your new salary will be: Rs.%.2f/-\n", new_salary);
    }

    printf("Thank You!!\n");

    return 0;
}
