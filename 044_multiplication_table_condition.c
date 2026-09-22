/*
 * Program: Multiplication Table with Condition
 * Author: Darsh Nanavati
 *
 * Description:
 * A C program that prints the multiplication table of a user-
 * entered number from 1 to 10. After the table is generated,
 * the final value is checked using a modulus-based condition.
 */

#include <stdio.h>

int main(void)
{
    int num;
    int i;
    int table_value;

    printf("Hello!!\n");
    printf("Please Enter a Number: ");
    scanf("%d", &num);

    for (i = 1; i <= 10; i++)
    {
        table_value = num * i;
        printf("%d\n", table_value);
    }

    if (table_value % (num + 1) == 1)
    {
        printf("%d", table_value);
    }

    return 0;
}
