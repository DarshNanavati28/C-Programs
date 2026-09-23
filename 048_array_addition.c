#include <stdio.h>
int main ()
{
    printf("Hello!!\n");
    int i, a_1[10], a_2[10], a_3[10];
    for (i = 0; i < 10; i++)
    {
        printf("Please Enter First Array Element %d: ", i + 1);
        scanf("%d", &a_1[i]);
    }
    printf("\n\n");
    for (i = 0; i < 10; i++)
    {
        printf("Please Enter Second Array Element %d: ", i + 1);
        scanf("%d", &a_2[i]);
    }
    printf("\n\n");

    for (i = 0; i < 10; i++)
    {
    	a_3[i]=a_1[i]+a_2[10-1-i];
        printf("Addition of First and Second Element is: %d\n", a_3[i]);
    }
}

