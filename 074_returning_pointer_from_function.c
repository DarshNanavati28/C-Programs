/*
 * Program: Returning Pointers from Functions
 * Author: Darsh Nanavati
 *
 * Description:
 * A C program that demonstrates returning a pointer from a function
 * and the difference between pointers to static and automatic variables.
 *
 * A pointer to a static variable remains valid after the function
 * returns, while a pointer to an automatic local variable becomes
 * invalid after the function returns.
 */

#include <stdio.h>

int *f1(void)
{
    static int s = 12345;

    return &s;
}

int *f2(void)
{
    static int a = 12345;

    return &a;
}

void Demo(int *(*function)(void))
{
    int *p = function();

    printf("Address = %p, Contents = %d\n", (void *)p, *p);
    printf("Address = %p, Contents = %d\n", (void *)p, *p);

    printf("\n");
}

int main(void)
{
    printf("Demonstrating pointer to a static variable:\n");
    Demo(f1);

    printf("Demonstrating another valid static pointer:\n");
    Demo(f2);

    return 0;
}
