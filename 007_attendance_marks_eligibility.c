/*
 * Program: Attendance and Marks Eligibility
 * Author: Darsh Nanavati
 * Date: 31/03/2025
 *
 * Description:
 * A C program that accepts attendance percentage and marks,
 * validates both inputs, and determines whether the student
 * is eligible to receive a grade based on attendance.
 */

#include <stdio.h>

int main(void)
{
    int att, marks;

    printf("Hello!!\n");

    printf("Please enter your attendance rate (0-100): ");
    scanf("%d", &att);

    printf("Please enter your marks (0-100): ");
    scanf("%d", &marks);

    /* Validate both inputs */
    if ((att < 0 || att > 100) && (marks < 0 || marks > 100))
    {
        printf("Invalid attendance rate and invalid marks!\n");
        printf("Please enter values between 0 and 100.\n");
    }
    else if (att < 0 || att > 100)
    {
        printf("Invalid attendance rate. Please enter a value between 0 and 100.\n");
    }
    else if (marks < 0 || marks > 100)
    {
        printf("Invalid marks. Please enter a value between 0 and 100.\n");
    }
    else if (att < 75)
    {
        printf("Sorry, your attendance is below the required 75%%.\n");
        printf("Your grades cannot be displayed.\n");
    }
    else if (marks > 80)
    {
        printf("A Grade\n");
        printf("Excellent!!\n");
    }
    else if (marks > 60)
    {
        printf("B Grade\n");
        printf("Proficient!!\n");
    }
    else if (marks > 40)
    {
        printf("C Grade\n");
        printf("Very Good!!\n");
    }
    else if (marks > 20)
    {
        printf("D Grade\n");
        printf("Good!!\n");
    }
    else
    {
        printf("Fail!!\n");
    }

    printf("Thank You!!\n");

    return 0;
}
