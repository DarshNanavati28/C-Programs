/*
 * Program: Function Returning a Value
 * Author: Darsh Nanavati
 *
 * Description:
 * A C program that demonstrates a user-defined function with
 * no parameters but a return value.
 */

#include <stdio.h>

int getNumber(void)
{
    return 10;
}

int main(void)
{
    int num = getNumber();

    printf("Returned Number = %d\n", num);

    return 0;
}
