/*
 * Program: Fruit Seller
 * Author: Darsh Nanavati
 * Date: 24/05/2025
 *
 * Description:
 * A console-based fruit shopping program that allows the user
 * to select a fruit, choose a quantity, calculate the price,
 * receive a discount based on quantity, choose a paper bag,
 * and select a payment method.
 */

#include <stdio.h>

int main(void)
{
    int fruit_choice;
    int kg;
    int bag_choice;
    int payment_choice;
    int price_per_kg = 200;
    int original_price;
    int discount;
    int final_price;

    printf("Hello!!\n");
    printf("Welcome to the Fruit Seller!!\n");
    printf("Fixed Price, No Bargaining!!\n");
    printf("All prices include GST and other taxes.\n\n");

    /* Fruit Selection */
    printf("Today we have Five Fruits:\n");
    printf("1. Apples\n");
    printf("2. Bananas\n");
    printf("3. Oranges\n");
    printf("4. Mangoes\n");
    printf("5. Strawberries\n");

    printf("\nWhich fruit would you like to buy?\n");
    printf("(Only one fruit at a time is allowed.)\n");
    printf("Please enter the choice number: ");
    scanf("%d", &fruit_choice);

    switch (fruit_choice)
    {
        case 1:
            printf("You have selected Apples.\n");
            break;

        case 2:
            printf("You have selected Bananas.\n");
            break;

        case 3:
            printf("You have selected Oranges.\n");
            break;

        case 4:
            printf("You have selected Mangoes.\n");
            break;

        case 5:
            printf("You have selected Strawberries.\n");
            break;

        default:
            printf("Invalid choice. Please try again.\n");
            return 1;
    }

    /* Quantity Selection */
    printf("\nPlease enter the weight you want to buy (kg): ");
    scanf("%d", &kg);

    if (kg <= 0)
    {
        printf("Invalid quantity. Please enter a positive value.\n");
        return 1;
    }

    original_price = kg * price_per_kg;

    printf("You have selected %d kg.\n", kg);
    printf("Original Price: Rs.%d/-\n", original_price);

    /* Discount Calculation */
    if (kg > 5)
    {
        discount = original_price * 10 / 100;
        final_price = original_price - discount;

        printf("10%% Discount: Rs.%d/-\n", discount);
        printf("Discounted Price: Rs.%d/-\n", final_price);
    }
    else
    {
        discount = original_price * 2 / 100;
        final_price = original_price - discount;

        printf("2%% Discount: Rs.%d/-\n", discount);
        printf("Discounted Price: Rs.%d/-\n", final_price);
    }

    /* Paper Bag Selection */
    printf("\nDo you want a paper bag?\n");
    printf("1. Certainly, I would like one.\n");
    printf("2. No, I won't need one.\n");
    printf("Please enter the choice number: ");
    scanf("%d", &bag_choice);

    switch (bag_choice)
    {
        case 1:
            printf("You have opted for the paper bag.\n");
            printf("Adding it to your bill.\n");
            break;

        case 2:
            printf("You have not opted for the paper bag.\n");
            printf("No problem.\n");
            break;

        default:
            printf("Invalid choice. Please try again.\n");
            return 1;
    }

    /* Payment Selection */
    printf("\nYou have Four Options for Payment:\n");
    printf("1. Cash\n");
    printf("2. Credit Card\n");
    printf("3. Debit Card\n");
    printf("4. UPI\n");

    printf("Please enter the choice number for payment method: ");
    scanf("%d", &payment_choice);

    switch (payment_choice)
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
