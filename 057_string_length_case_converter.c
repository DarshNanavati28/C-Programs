/*
 * Program: String Length Case Converter
 * Author: Darsh Nanavati
 *
 * Description:
 * A C program that accepts two names and compares their lengths.
 * If both names have the same length, they are converted to
 * uppercase. Otherwise, they are converted to lowercase.
 */

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
    char name1[100];
    char name2[100];
    int i;

    printf("Hello!!\n");

    printf("Please Enter a Name: ");
    scanf("%99s", name1);

    printf("Please Enter another Name: ");
    scanf("%99s", name2);

    if (strlen(name1) == strlen(name2))
    {
        for (i = 0; name1[i] != '\0'; i++)
        {
            name1[i] = toupper((unsigned char)name1[i]);
        }

        for (i = 0; name2[i] != '\0'; i++)
        {
            name2[i] = toupper((unsigned char)name2[i]);
        }
    }
    else
    {
        for (i = 0; name1[i] != '\0'; i++)
        {
            name1[i] = tolower((unsigned char)name1[i]);
        }

        for (i = 0; name2[i] != '\0'; i++)
        {
            name2[i] = tolower((unsigned char)name2[i]);
        }
    }

    printf("%s\n", name1);
    printf("%s\n", name2);

    printf("Thank You!!\n");

    return 0;
}
