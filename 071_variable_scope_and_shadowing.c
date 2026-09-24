/*
 * Program: Variable Scope and Shadowing
 * Author: Darsh Nanavati
 *
 * Description:
 * A C program that demonstrates local variable scope and variable
 * shadowing by declaring two variables with the same name in
 * different scopes.
 */

#include <stdio.h>

int main(void)
{
    int a = 1;

    printf("a = %d\n", a);

    if (1)
    {
        char a = '2';

        printf("a = %c\n", a);
    }

    printf("a = %d\n", a);

    return 0;
}
