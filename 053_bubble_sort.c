/*
 * Program: Bubble Sort
 * Author: Darsh Nanavati
 *
 * Description:
 * A C program that accepts a user-defined number of array
 * elements and sorts them in ascending order using the
 * Bubble Sort algorithm.
 */

#include <stdio.h>

int main(void)
{
    int n;
    int i, j;
    
    printf("Hello!!\n");
    printf("Please Enter the Number of Array Elements: ");
    scanf("%d", &n);

    if (n <= 0)
    {
        printf("Invalid number of elements.\n");
        return 1;
    }

    int arr[n];

    /* Input array elements */
    for (i = 0; i < n; i++)
    {
        printf("Please Enter Array Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    /* Bubble Sort */
    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];

                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    /* Display sorted array */
    printf("\nSorted Array in Ascending Order:\n");

    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    printf("\n\nThank You!!\n");

    return 0;
}
