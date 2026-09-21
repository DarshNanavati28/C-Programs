/*
 * Program: Bank Service Simulator
 * Author: Darsh Nanavati
 * Date: 08/04/2025
 *
 * Description:
 * A menu-driven banking service simulator that allows users
 * to perform basic banking operations such as cash withdrawal,
 * balance inquiry, fund transfer, mini statement, PIN change,
 * cheque book requests, and card blocking.
 */

#include <stdio.h>

int main(void)
{
    int account_number;
    int service_choice;
    int pin;
    int amount;
    int receipt_choice;
    int transfer_account;
    int new_pin;
    int confirm_pin;
    int cheque_choice;
    int card_digits;

    printf("Hello!!\n");
    printf("Welcome to Ghotala Bank!!\n");

    printf("Please enter your Account Number (10-digit number): ");
    scanf("%d", &account_number);

    printf("\nWhat service would you like to use?\n");
    printf("1. Cash Withdrawal\n");
    printf("2. Balance Inquiry\n");
    printf("3. Fund Transfer\n");
    printf("4. Mini Statement\n");
    printf("5. PIN Change\n");
    printf("6. Request Cheque Book\n");
    printf("7. Card Block\n");

    printf("Please enter the number for the service you want: ");
    scanf("%d", &service_choice);

    switch (service_choice)
    {
        case 1:
            printf("\nYou have chosen Cash Withdrawal.\n");

            printf("Please enter your PIN (4-digit number): ");
            scanf("%d", &pin);

            printf("Please enter the amount you want to withdraw: Rs.");
            scanf("%d", &amount);

            printf("\nDo you want a receipt?\n");
            printf("1. Yes\n");
            printf("2. No (Recommended)\n");
            printf("Please enter your choice: ");
            scanf("%d", &receipt_choice);

            switch (receipt_choice)
            {
                case 1:
                    printf("Receipt selected.\n");
                    break;

                case 2:
                    printf("No receipt selected. Thank you for helping conserve paper.\n");
                    break;

                default:
                    printf("Invalid choice.\n");
                    return 1;
            }

            printf("Your transaction is being processed.\n");
            break;

        case 2:
            printf("\nYou have chosen Balance Inquiry.\n");

            printf("Please enter your PIN (4-digit number): ");
            scanf("%d", &pin);

            printf("Your Balance is: Rs.1,23,45,67,890/-\n");

            printf("\nDo you want a receipt?\n");
            printf("1. Yes\n");
            printf("2. No (Recommended)\n");
            printf("Please enter your choice: ");
            scanf("%d", &receipt_choice);

            switch (receipt_choice)
            {
                case 1:
                    printf("Receipt selected.\n");
                    break;

                case 2:
                    printf("No receipt selected. Thank you for helping conserve paper.\n");
                    break;

                default:
                    printf("Invalid choice.\n");
                    return 1;
            }

            break;

        case 3:
            printf("\nYou have chosen Fund Transfer.\n");

            printf("Please enter your PIN (4-digit number): ");
            scanf("%d", &pin);

            printf("Please enter the Account Number to which you want to transfer: ");
            scanf("%d", &transfer_account);

            printf("Please enter the amount you want to transfer: Rs.");
            scanf("%d", &amount);

            printf("\nDo you want a receipt?\n");
            printf("1. Yes\n");
            printf("2. No (Recommended)\n");
            printf("Please enter your choice: ");
            scanf("%d", &receipt_choice);

            switch (receipt_choice)
            {
                case 1:
                    printf("Receipt selected.\n");
                    break;

                case 2:
                    printf("No receipt selected. Thank you for helping conserve paper.\n");
                    break;

                default:
                    printf("Invalid choice.\n");
                    return 1;
            }

            printf("Your transaction is being processed.\n");
            break;

        case 4:
            printf("\nYou have chosen Mini Statement.\n");

            printf("Please enter your PIN (4-digit number): ");
            scanf("%d", &pin);

            printf("\n------ Mini Statement ------\n");
            printf("07/04/2025  6165  Withdrawal of Rs.1541/-\n");
            printf("20/03/2025  8425  Deposit of Rs.18558/-\n");
            printf("07/04/2025  6165  Withdrawal of Rs.45/-\n");
            printf("07/04/2025  6165  Withdrawal of Rs.153/-\n");
            printf("07/04/2025  6165  Deposit of Rs.2405/-\n");
            printf("----------------------------\n");

            printf("\nDo you want a receipt?\n");
            printf("1. Yes\n");
            printf("2. No (Recommended)\n");
            printf("Please enter your choice: ");
            scanf("%d", &receipt_choice);

            switch (receipt_choice)
            {
                case 1:
                    printf("Receipt selected.\n");
                    break;

                case 2:
                    printf("No receipt selected. Thank you for helping conserve paper.\n");
                    break;

                default:
                    printf("Invalid choice.\n");
                    return 1;
            }

            break;

        case 5:
            printf("\nYou have chosen PIN Change.\n");

            printf("Please enter your current PIN: ");
            scanf("%d", &pin);

            printf("Please enter your new PIN: ");
            scanf("%d", &new_pin);

            printf("Please confirm your new PIN: ");
            scanf("%d", &confirm_pin);

            if (new_pin == confirm_pin)
            {
                printf("Your PIN has been changed successfully.\n");
            }
            else
            {
                printf("New PIN does not match the confirmation PIN.\n");
                return 1;
            }

            printf("\nDo you want a receipt?\n");
            printf("1. Yes\n");
            printf("2. No (Recommended)\n");
            printf("Please enter your choice: ");
            scanf("%d", &receipt_choice);

            switch (receipt_choice)
            {
                case 1:
                    printf("Receipt selected.\n");
                    break;

                case 2:
                    printf("No receipt selected. Thank you for helping conserve paper.\n");
                    break;

                default:
                    printf("Invalid choice.\n");
                    return 1;
            }

            break;

        case 6:
            printf("\nYou have chosen Cheque Book Request.\n");

            printf("Please enter your PIN: ");
            scanf("%d", &pin);

            printf("How many pages would you like?\n");
            printf("1. 10 Pages\n");
            printf("2. 25 Pages\n");
            printf("3. 50 Pages\n");
            printf("4. 100 Pages\n");

            printf("Please enter your choice: ");
            scanf("%d", &cheque_choice);

            switch (cheque_choice)
            {
                case 1:
                    printf("A 10-page cheque book will be sent to your registered address.\n");
                    break;

                case 2:
                    printf("A 25-page cheque book will be sent to your registered address.\n");
                    break;

                case 3:
                    printf("A 50-page cheque book will be sent to your registered address.\n");
                    break;

                case 4:
                    printf("A 100-page cheque book will be sent to your registered address.\n");
                    break;

                default:
                    printf("Invalid choice.\n");
                    return 1;
            }

            break;

        case 7:
            printf("\nYou have chosen Card Block.\n");

            printf("Please enter your PIN: ");
            scanf("%d", &pin);

            printf("Please enter the last 4 digits of your card: ");
            scanf("%d", &card_digits);

            printf("Your card has been blocked successfully.\n");
            break;

        default:
            printf("Invalid service choice. Please try again.\n");
            return 1;
    }

    printf("\nThank You for using Ghotala Bank!!\n");

    return 0;
}
