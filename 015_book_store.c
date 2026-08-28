/*
 * Program: Book Store
 * Author: Darsh Nanavati
 * Date: 04/04/2025
 *
 * Description:
 * A menu-driven C program that allows the user to select a book,
 * receive a 10% discount, choose an optional book cover, and
 * select a payment method.
 */

#include <stdio.h>

int main(void)
{
    int book, cover, payment;
    int price, discount, final_price;

    printf("Hello!!\n");
    printf("Welcome to the Book Store!!\n\n");

    printf("We have the following books:\n");
    printf("1. Holes by Louis Sachar\n");
    printf("2. Success Through a Positive Mental Attitude by Napoleon Hill\n");
    printf("3. Tell Me the Answer\n");
    printf("4. The Six Bad Boys by Enid Blyton\n");
    printf("5. The Test of Time by Geronimo Stilton\n");

    printf("\nWhich book would you like to buy?\n");
    printf("Please enter your choice: ");
    scanf("%d", &book);

    switch (book)
    {
        case 1:
            printf("You have selected Holes by Louis Sachar.\n");
            price = 600;
            break;

        case 2:
            printf("You have selected Success Through a Positive Mental Attitude by Napoleon Hill.\n");
            price = 600;
            break;

        case 3:
            printf("You have selected Tell Me the Answer.\n");
            price = 100;
            break;

        case 4:
            printf("You have selected The Six Bad Boys by Enid Blyton.\n");
            price = 200;
            break;

        case 5:
            printf("You have selected The Test of Time by Geronimo Stilton.\n");
            price = 600;
            break;

        default:
            printf("Invalid choice. Please try again.\n");
            return 1;
    }

    discount = price * 10 / 100;
    final_price = price - discount;

    printf("Original Price: Rs.%d/-\n", price);
    printf("10%% Discount: Rs.%d/-\n", discount);
    printf("Discounted Price: Rs.%d/-\n", final_price);

    printf("\nDo you want a book cover?\n");
    printf("It will cost an extra Rs.60/-\n");
    printf("1. Certainly, I would like one.\n");
    printf("2. No, I won't need one.\n");
    printf("Please enter the choice number: ");
    scanf("%d", &cover);

    switch (cover)
    {
        case 1:
            printf("You have opted for the book cover.\n");
            final_price += 60;
            printf("Rs.60/- has been added to your bill.\n");
            break;

        case 2:
            printf("You have not opted for the book cover.\n");
            break;

        default:
            printf("Invalid choice. Please try again.\n");
            return 1;
    }

    printf("\nFinal Amount: Rs.%d/-\n", final_price);

    printf("\nYou have four options for payment:\n");
    printf("1. Cash\n");
    printf("2. Credit Card\n");
    printf("3. Debit Card\n");
    printf("4. UPI\n");

    printf("Please enter the choice number for your payment method: ");
    scanf("%d", &payment);

    switch (payment)
    {
        case 1:
            printf("Payment Successful with Cash.\n");
            break;

        case 2:
            printf("Payment Successful with Credit Card.\n");
            break;

        case 3:
            printf("Payment Successful with Debit Card.\n");
            break;

        case 4:
            printf("Payment Successful with UPI.\n");
            break;

        default:
            printf("Payment Unsuccessful. Invalid payment method.\n");
            return 1;
    }

    printf("\nThank You for shopping with us!!\n");

    return 0;
}
