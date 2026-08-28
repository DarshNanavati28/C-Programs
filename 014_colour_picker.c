/*
 * Program: Colour Picker
 * Author: Darsh Nanavati
 * Date: 04/04/2025
 *
 * Description:
 * A simple menu-driven C program that allows the user to select
 * a colour from the VIBGYOR spectrum using a number from 1 to 7.
 * It demonstrates the use of switch-case statements.
 */

#include <stdio.h>

int main(void)
{
    int choice;

    printf("Hello!!\n");
    printf("Welcome to the Colour Picker!!\n");

    printf("\nVIBGYOR Colour Options:\n");
    printf("1. Violet\n");
    printf("2. Indigo\n");
    printf("3. Blue\n");
    printf("4. Green\n");
    printf("5. Yellow\n");
    printf("6. Orange\n");
    printf("7. Red\n");

    printf("Please enter a number: ");
    scanf("%d", &choice);

    switch (choice)
    {
        case 1:
            printf("Violet Colour is Picked.\n");
            break;

        case 2:
            printf("Indigo Colour is Picked.\n");
            break;

        case 3:
            printf("Blue Colour is Picked.\n");
            break;

        case 4:
            printf("Green Colour is Picked.\n");
            break;

        case 5:
            printf("Yellow Colour is Picked.\n");
            break;

        case 6:
            printf("Orange Colour is Picked.\n");
            break;

        case 7:
            printf("Red Colour is Picked.\n");
            break;

        default:
            printf("Invalid choice. Please enter a number between 1 and 7.\n");
            break;
    }

    printf("Thank You!!\n");

    return 0;
}
