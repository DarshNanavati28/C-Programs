/*
 * Program: Vowel or Consonant
 * Author: Darsh Nanavati
 * Date: 01/04/2025
 *
 * Description:
 * A C program that determines whether an entered alphabet is
 * a vowel or consonant. It supports both uppercase and
 * lowercase letters and validates the input.
 */

#include <stdio.h>

int main(void)
{
    char letter;

    printf("Hello!!\n");
    printf("Please enter an alphabet: ");
    scanf(" %c", &letter);

    if ((letter >= 'a' && letter <= 'z') ||
        (letter >= 'A' && letter <= 'Z'))
    {
        if (letter == 'a' || letter == 'e' || letter == 'i' ||
            letter == 'o' || letter == 'u' ||
            letter == 'A' || letter == 'E' || letter == 'I' ||
            letter == 'O' || letter == 'U')
        {
            printf("The alphabet is a Vowel.\n");
        }
        else
        {
            printf("The alphabet is a Consonant.\n");
        }
    }
    else
    {
        printf("Invalid input. Please enter an alphabet.\n");
    }

    printf("Thank You!!\n");

    return 0;
}
