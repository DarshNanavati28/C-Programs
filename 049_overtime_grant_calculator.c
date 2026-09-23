/*
 * Program: Overtime Grant Calculator
 * Author: Darsh Nanavati
 *
 * Description:
 * A C program that calculates an employee's hourly wage from
 * their monthly basic salary and regular working hours. It then
 * validates an overtime multiplier and calculates the overtime
 * grant when the employee completes at least 4 overtime hours.
 */

#include <stdio.h>

int main(void)
{
    int basic_salary;
    int regular_hours;
    int overtime_hours;
    float overtime_multiplier;
    float hourly_wage;
    float overtime_grant;

    printf("Hello!!\n");

    printf("Please Enter your Monthly Basic Salary: ");
    scanf("%d", &basic_salary);

    printf("Please Enter the number of hours of your Regular Work: ");
    scanf("%d", &regular_hours);

    if (basic_salary <= 0 || regular_hours <= 0)
    {
        printf("Invalid salary or working hours.\n");
        return 1;
    }

    /*
     * Assuming 20 working days in a month.
     */
    hourly_wage = (float)basic_salary / (20 * regular_hours);

    printf("Please Enter Times: ");
    scanf("%f", &overtime_multiplier);

    if (overtime_multiplier < 0 || overtime_multiplier > 2)
    {
        printf("Invalid time multiplier.\n");
        return 1;
    }

    printf("Please Enter Overtime Work Hours: ");
    scanf("%d", &overtime_hours);

    if (overtime_hours < 0)
    {
        printf("Invalid overtime hours.\n");
        return 1;
    }

    if (overtime_hours >= 4)
    {
        overtime_grant =
            hourly_wage * overtime_hours * overtime_multiplier;

        printf("Hourly Wage: Rs.%.2f\n", hourly_wage);
        printf("Overtime Grant: Rs.%.2f\n", overtime_grant);
    }
    else
    {
        printf("Overtime not granted.\n");
    }

    printf("Thank You!!\n");

    return 0;
}
