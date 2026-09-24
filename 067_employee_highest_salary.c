/*
 * Program: Employee with Highest Salary
 * Author: Darsh Nanavati
 *
 * Description:
 * A C program that uses structures to store the ID, name, and salary
 * of five employees and finds the employee with the highest salary.
 */

#include <stdio.h>

struct Employee
{
    int id;
    char name[50];
    float salary;
};

int main(void)
{
    struct Employee e1, e2, e3, e4, e5;
    struct Employee highest;

    printf("Hello!!\n");
    printf("Please Enter Employee Details:\n\n");

    printf("Enter details for Employee 1:\n");
    printf("ID: ");
    scanf("%d", &e1.id);
    printf("Name: ");
    scanf(" %49[^\n]", e1.name);
    printf("Salary: ");
    scanf("%f", &e1.salary);

    printf("\nEnter details for Employee 2:\n");
    printf("ID: ");
    scanf("%d", &e2.id);
    printf("Name: ");
    scanf(" %49[^\n]", e2.name);
    printf("Salary: ");
    scanf("%f", &e2.salary);

    printf("\nEnter details for Employee 3:\n");
    printf("ID: ");
    scanf("%d", &e3.id);
    printf("Name: ");
    scanf(" %49[^\n]", e3.name);
    printf("Salary: ");
    scanf("%f", &e3.salary);

    printf("\nEnter details for Employee 4:\n");
    printf("ID: ");
    scanf("%d", &e4.id);
    printf("Name: ");
    scanf(" %49[^\n]", e4.name);
    printf("Salary: ");
    scanf("%f", &e4.salary);

    printf("\nEnter details for Employee 5:\n");
    printf("ID: ");
    scanf("%d", &e5.id);
    printf("Name: ");
    scanf(" %49[^\n]", e5.name);
    printf("Salary: ");
    scanf("%f", &e5.salary);

    highest = e1;

    if (e2.salary > highest.salary)
        highest = e2;

    if (e3.salary > highest.salary)
        highest = e3;

    if (e4.salary > highest.salary)
        highest = e4;

    if (e5.salary > highest.salary)
        highest = e5;

    printf("\nEmployee with the Highest Salary:\n");
    printf("ID: %d\n", highest.id);
    printf("Name: %s\n", highest.name);
    printf("Salary: %.2f\n", highest.salary);

    printf("\nThank You!!\n");

    return 0;
}
