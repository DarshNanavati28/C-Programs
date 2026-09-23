/*
 * Program: Greatest, Lowest and Difference in Array
 * Author: Darsh Nanavati
 *
 * Description:
 * A C program that accepts three integers into an array,
 * finds the greatest and lowest values, and calculates the
 * difference between them.
 */

#include <stdio.h>

int main(void)
{
    int numbers[3];
    int i;
    int greatest;
    int lowest;
    int difference;

    printf("Hello!!\n");
    printf("Enter three numbers:\n");

    /* Input array elements */
    for (i = 0; i < 3; i++)
    {
        scanf("%d", &numbers[i]);
    }

    /* Assume the first element is both greatest and lowest */
    greatest = numbers[0];
    lowest = numbers[0];

    /* Find greatest and lowest values */
    for (i = 1; i < 3; i++)
    {
        if (numbers[i] > greatest)
        {
            greatest = numbers[i];
        }

        if (numbers[i] < lowest)
        {
            lowest = numbers[i];
        }
    }

    /* Calculate the difference */
    difference = greatest - lowest;

    printf("The greatest number is: %d\n", greatest);
    printf("The lowest number is: %d\n", lowest);
    printf("The difference between greatest and lowest is: %d\n",
           difference);

    printf("Thank You!!\n");

    return 0;
}
