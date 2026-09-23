/*
 * Program: Greatest Number in an Array
 * Author: Darsh Nanavati
 *
 * Description:
 * A C program that accepts three integers into an array and
 * determines the greatest number by traversing the array
 * and comparing each element.
 */

#include <stdio.h>

int main(void)
{
    int numbers[3];
    int i;
    int greatest;

    printf("Hello!!\n");
    printf("Enter three numbers:\n");

    /* Input array elements */
    for (i = 0; i < 3; i++)
    {
        scanf("%d", &numbers[i]);
    }

    /* Assume the first element is the greatest */
    greatest = numbers[0];

    /* Compare remaining elements */
    for (i = 1; i < 3; i++)
    {
        if (numbers[i] > greatest)
        {
            greatest = numbers[i];
        }
    }

    printf("The greatest number is: %d\n", greatest);

    printf("Thank You!!\n");

    return 0;
}
