/*
 * Program: Array First, Last and Middle Values
 * Author: Darsh Nanavati
 *
 * Description:
 * A C program that accepts the length and elements of an array,
 * then displays the first, last, and middle values. The middle
 * value is displayed only when the array contains an odd number
 * of elements.
 */

#include <stdio.h>

int main(void)
{
    int length;
    int i;

    printf("Hello!!\n");

    printf("Enter the length of the array: ");
    scanf("%d", &length);

    if (length <= 0)
    {
        printf("Invalid array length.\n");
        return 1;
    }

    int array[length];

    printf("Enter %d elements:\n", length);

    for (i = 0; i < length; i++)
    {
        scanf("%d", &array[i]);
    }

    printf("\nFirst value: %d\n", array[0]);
    printf("Last value: %d\n", array[length - 1]);

    if (length % 2 == 0)
    {
        printf("The array length is even, so there is no single middle value.\n");
    }
    else
    {
        printf("Middle value: %d\n", array[length / 2]);
    }

    printf("\nThank You!!\n");

    return 0;
}
