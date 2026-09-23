/*
 * Program: Matrix Diamond Addition
 * Author: Darsh Nanavati
 *
 * Description:
 * A C program that accepts a 3x3 matrix, calculates the sum of
 * the four elements surrounding the center element in a diamond
 * shape, and stores the result in the center of the matrix.
 */

#include <stdio.h>

int main(void)
{
    int matrix[3][3];
    int i, j;
    int sum = 0;

    printf("Hello!!\n");

    /* Input matrix elements */
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("Please enter number: ");
            scanf("%d", &matrix[i][j]);
        }
    }

    /* Display original matrix */
    printf("\nOriginal Matrix:\n");

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d\t", matrix[i][j]);
        }

        printf("\n");
    }

    /*
     * Add the four elements surrounding the center:
     *
     *       [0][1]
     * [1][0] [1][1] [1][2]
     *       [2][1]
     *
     * The center element itself is excluded.
     */
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            if ((i == 1 && j != 1) || (j == 1 && i != 1))
            {
                sum += matrix[i][j];
            }
        }
    }

    matrix[1][1] = sum;

    /* Display modified matrix */
    printf("\nDiamond Addition:\n\n");

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d\t", matrix[i][j]);
        }

        printf("\n");
    }

    printf("\nThank You!!\n");

    return 0;
}
