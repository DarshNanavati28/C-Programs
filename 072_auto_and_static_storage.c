/*
 * Program: Auto and Static Storage
 * Author: Darsh Nanavati
 *
 * Description:
 * A C program that demonstrates the difference between automatic
 * and static local variables by displaying their memory addresses.
 */

#include <stdio.h>

void f1(void)
{
    auto int a;
    static int s;

    printf("Address of auto   = %p\n", (void *)&a);
    printf("Address of static = %p\n", (void *)&s);
}

void f2(void)
{
    auto int x;

    (void)x;

    f1();
}

int main(void)
{
    f1();
    f2();
    f1();

    return 0;
}
