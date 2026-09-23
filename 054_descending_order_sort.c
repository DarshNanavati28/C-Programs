/*
 * Program: Descending Order Sort
 * Author: Darsh Nanavati
 *
 * Description:
 * A C program that accepts five integers and arranges them
 * in descending order by comparing each element with the
 * elements that follow it and swapping when necessary.
 */

#include <stdio.h>

int main(void)
{
    int numbers[5];
    int i, j;
    int temp;

    printf("Hello!!\n");
    printf("Enter five numbers:\n");

    /* Input array elements */
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &numbers[i]);
    }

    /* Sort in descending order */
    for (i = 0; i < 4; i++)
    {
        for (j = i + 1; j < 5; j++)
        {
            if (numbers[i] < numbers[j])
            {
                temp = numbers[i];
                numbers[i] = numbers[j];
                numbers[j] = temp;
            }
        }
    }

    /* Display sorted array */
    printf("\nNumbers in Descending Order:\n");

    for (i = 0; i < 5; i++)
    {
        printf("%d ", numbers[i]);
    }

    printf("\n\nThank You!!\n");

    return 0;
}
