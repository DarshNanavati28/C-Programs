/*
 * Program: Auto vs Static Variables
 * Author: Darsh Nanavati
 *
 * Description:
 * A C program that demonstrates the difference between automatic
 * and static local variables by calling functions multiple times.
 */

#include <stdio.h>

int f1(void)
{
    auto int a;

    a = 0;

    return ++a;
}

int f2(void)
{
    static int s;

    s = 0;

    return ++s;
}

int f3(void)
{
    auto int a = 0;

    return ++a;
}

int f4(void)
{
    static int s = 0;

    return ++s;
}

int main(void)
{
    printf("f1(): %d %d %d\n", f1(), f1(), f1());

    printf("f2(): ");
    printf("%d ", f2());
    printf("%d ", f2());
    printf("%d\n", f2());

    printf("f3(): %d %d %d\n", f3(), f3(), f3());

    printf("f4(): ");
    printf("%d ", f4());
    printf("%d ", f4());
    printf("%d\n", f4());

    return 0;
}
