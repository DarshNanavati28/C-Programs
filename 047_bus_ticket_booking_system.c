/*
 * Program: Bus Ticket Booking System
 * Author: Darsh Nanavati
 *
 * Description:
 * A console-based bus ticket booking simulator that allows the
 * user to select a destination, choose a bus, enter the number
 * of seats, calculate the ticket price with GST, and select
 * a payment method.
 *
 * Note:
 * This is a simulated booking system and is not affiliated with
 * or endorsed by redBus or any of the listed travel companies.
 */

#include <stdio.h>

int main(void)
{
    int dropping_point;
    int bus_selection;
    int seats;
    int payment_choice;

    int price_per_seat;
    int total_price;
    int gst;
    int final_price;

    printf("========================================\n");
    printf("       BUS TICKET BOOKING SYSTEM\n");
    printf("========================================\n\n");

    printf("RED HOT SUMMER SALE\n");
    printf("24th APRIL - 5th MAY\n");
    printf("SALE IS LIVE\n\n");

    printf("Current Location: Bangalore\n\n");

    printf("Bus Tickets\n");
    printf("To:\n");
    printf("1. Thiruvananthapuram\n");
    printf("2. Hyderabad\n");
    printf("3. Coimbatore\n");
    printf("4. Tirupati\n");
    printf("5. Madurai\n");

    printf("Select Dropping Point: ");
    scanf("%d", &dropping_point);

    if (dropping_point < 1 || dropping_point > 5)
    {
        printf("Invalid dropping point.\n");
        return 1;
    }

    printf("\nAvailable Buses:\n\n");

    printf("1. 15:50----------21:20  VRL Travels       Sleeper(2+1)  56 seats  Rs.510/-  5.0 stars\n");
    printf("2. 10:50----------15:50  Mahasagar Travels  Seater(3+1)   65 seats  Rs.120/-  1.5 stars\n");
    printf("3. 21:50--+1 day--21:20  Devraj Travels     Sleeper(2+1)  13 seats  Rs.210/-  2.1 stars\n");
    printf("4. 12:20--+1 day---5:15  Krishna Travels    Seater(2+1)   15 seats  Rs.520/-  2.5 stars\n");
    printf("5. 5:50-----------15:25  Star Travels       Seater(3+1)   31 seats  Rs.510/-  1.5 stars\n");

    printf("\nPlease Select: ");
    scanf("%d", &bus_selection);

    switch (bus_selection)
    {
        case 1:
            printf("\nYou have selected VRL Travels.\n");
            price_per_seat = 510;
            break;

        case 2:
            printf("\nYou have selected Mahasagar Travels.\n");
            price_per_seat = 120;
            break;

        case 3:
            printf("\nYou have selected Devraj Travels.\n");
            price_per_seat = 210;
            break;

        case 4:
            printf("\nYou have selected Krishna Travels.\n");
            price_per_seat = 520;
            break;

        case 5:
            printf("\nYou have selected Star Travels.\n");
            price_per_seat = 510;
            break;

        default:
            printf("Invalid bus choice.\n");
            return 1;
    }

    printf("Please select the number of seats (1-9): ");
    scanf("%d", &seats);

    if (seats < 1 || seats > 9)
    {
        printf("Invalid number of seats.\n");
        printf("For bulk booking, please use the bulk booking option.\n");
        return 1;
    }

    total_price = seats * price_per_seat;
    gst = total_price * 18 / 100;
    final_price = total_price + gst;

    printf("\n========== BOOKING SUMMARY ==========\n");
    printf("Number of Seats: %d\n", seats);
    printf("Price Per Seat: Rs.%d/-\n", price_per_seat);
    printf("Total Seat Price: Rs.%d/-\n", total_price);
    printf("GST (18%%): Rs.%d/-\n", gst);
    printf("Final Price: Rs.%d/-\n", final_price);
    printf("=====================================\n");

    printf("\nYou have Four Options for payment:\n");
    printf("1. Cash\n");
    printf("2. Credit Card\n");
    printf("3. Debit Card\n");
    printf("4. UPI\n");

    printf("Please Enter the Choice number for payment method: ");
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

    printf("\nThank You for using the Bus Ticket Booking System!!\n");

    return 0;
}
