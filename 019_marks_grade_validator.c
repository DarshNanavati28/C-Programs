/*
 * Program: Marks Grade Validator
 * Author: Darsh Nanavati
 * Date: 08/04/2025
 *
 * Description:
 * A C program that repeatedly accepts marks until a valid value
 * between 0 and 100 is entered, then determines the corresponding
 * grade using an if-else-if ladder.
 */

#include <stdio.h>

int main(void)
{
    int marks;

    printf("Hello!!\n");

    do
    {
        printf("Enter your marks (0-100): ");
        scanf("%d", &marks);

        if (marks < 0 || marks > 100)
        {
            printf("Invalid marks! Please enter marks between 0 and 100.\n");
        }

    } while (marks < 0 || marks > 100);

    if (marks >= 90)
    {
        printf("A Grade\n");
        printf("Excellent\n");
    }
    else if (marks >= 80)
    {
        printf("B Grade\n");
        printf("Proficient\n");
    }
    else if (marks >= 70)
    {
        printf("C Grade\n");
        printf("Amateur\n");
    }
    else if (marks >= 50)
    {
        printf("D Grade\n");
        printf("Novice\n");
    }
    else if (marks >= 40)
    {
        printf("E Grade\n");
        printf("Beginner\n");
    }
    else
    {
        printf("Fail\n");
    }

    printf("Thank You!!\n");

    return 0;
}
