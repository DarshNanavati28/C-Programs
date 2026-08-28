/*
 * Program: Marks Grade Calculator
 * Author: Darsh Nanavati
 * Date: 08/04/2025
 *
 * Description:
 * A C program that accepts marks from 0 to 100 and determines
 * the corresponding grade using an if-else-if ladder.
 */

#include <stdio.h>

int main(void)
{
    int marks;

    printf("Hello!!\n");
    printf("Please enter your marks: ");
    scanf("%d", &marks);

    if (marks < 0 || marks > 100)
    {
        printf("Invalid Marks\n");
    }
    else if (marks >= 90)
    {
        printf("A Grade\n");
        printf("Excellent!\n");
    }
    else if (marks >= 80)
    {
        printf("B Grade\n");
        printf("Excellent!\n");
    }
    else if (marks >= 70)
    {
        printf("C Grade\n");
        printf("Good!\n");
    }
    else if (marks >= 50)
    {
        printf("D Grade\n");
        printf("Good!\n");
    }
    else if (marks >= 40)
    {
        printf("E Grade\n");
        printf("Pass\n");
    }
    else
    {
        printf("Fail\n");
    }

    printf("Thank You!!\n");

    return 0;
}
