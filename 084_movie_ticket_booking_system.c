#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

#define ROWS 10
#define COLS 10
#define PRICE_PER_SEAT 150

char seats[ROWS][COLS];
int num;
int ticketID = 0;
char filename[30];

void bookTicket(void);
void cancelTicket(void);
void viewSeats(void);
void showTicket(void);
void loadSeats(void);
void saveSeats(void);

int main(void)
{
    int choice;

    loadSeats();

    printf("\n------------ Movie Ticket Booking System ------------\n");

    while (1)
    {
        printf("------------------------ MENU ------------------------\n");
        printf("1. Book Ticket\n");
        printf("2. Cancel Ticket\n");
        printf("3. View Seats\n");
        printf("4. Show Ticket\n");
        printf("5. Exit\n");
        printf("Enter your choice (1-5): ");

        if (scanf("%d", &choice) != 1)
        {
            int ch;
            while ((ch = getchar()) != '\n' && ch != EOF)
            {
                /* Clear invalid input */
            }

            printf("Invalid input.\n\n");
            continue;
        }

        switch (choice)
        {
            case 1:
                bookTicket();
                break;

            case 2:
                if (ticketID == 0)
                {
                    printf("No ticket booked yet.\n\n");
                }
                else
                {
                    cancelTicket();
                }
                break;

            case 3:
                viewSeats();
                break;

            case 4:
                if (ticketID == 0)
                {
                    printf("No ticket booked yet.\n\n");
                }
                else
                {
                    showTicket();
                }
                break;

            case 5:
                printf("Thank you for using the Movie Ticket Booking System!\n");
                return 0;

            default:
                printf("Invalid choice.\n\n");
        }
    }
}

void loadSeats(void)
{
    FILE *file = fopen("seats.txt", "r");

    if (file == NULL)
    {
        /* Create an empty cinema if seats.txt doesn't exist. */
        for (int i = 0; i < ROWS; i++)
        {
            for (int j = 0; j < COLS; j++)
            {
                seats[i][j] = 'O';
            }
        }

        saveSeats();
        return;
    }

    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLS; j++)
        {
            if (fscanf(file, " %c", &seats[i][j]) != 1)
            {
                seats[i][j] = 'O';
            }
        }
    }

    fclose(file);
}

void bookTicket(void)
{
    char movieName[30];
    char seatRow[ROWS * COLS];
    int seatCol[ROWS * COLS];

    char rowChar;
    int column;
    int row;
    int total;

    printf("Enter a ticket ID (e.g. 87): ");
    scanf("%d", &ticketID);

    snprintf(filename, sizeof(filename), "ticket_%d.txt", ticketID);

    FILE *check = fopen(filename, "r");

    if (check != NULL)
    {
        printf("Ticket ID already exists.\n\n");
        fclose(check);
        ticketID = 0;
        return;
    }

    FILE *file = fopen(filename, "w");

    if (file == NULL)
    {
        printf("Could not create ticket file.\n");
        ticketID = 0;
        return;
    }

    getchar();

    printf("Enter movie name: ");
    fgets(movieName, sizeof(movieName), stdin);
    movieName[strcspn(movieName, "\n")] = '\0';

    viewSeats();

    printf("Enter number of seats to book (Rs.%d per seat): ",
           PRICE_PER_SEAT);

    if (scanf("%d", &num) != 1 || num <= 0 || num > ROWS * COLS)
    {
        printf("Invalid number of seats.\n");
        fclose(file);
        remove(filename);
        ticketID = 0;
        return;
    }

    for (int i = 0; i < num; i++)
    {
        printf("Enter seat (e.g. A1): ");

        if (scanf(" %c%d", &rowChar, &column) != 2)
        {
            printf("Invalid seat format.\n");
            i--;
            continue;
        }

        rowChar = (char)toupper((unsigned char)rowChar);

        row = rowChar - 'A';
        column--;

        if (row < 0 || row >= ROWS || column < 0 || column >= COLS)
        {
            printf("Invalid seat.\n");
            i--;
            continue;
        }

        if (seats[row][column] == 'O')
        {
            seats[row][column] = 'X';

            seatRow[i] = rowChar;
            seatCol[i] = column + 1;
        }
        else
        {
            printf("Seat not available.\n");
            i--;
        }
    }

    total = PRICE_PER_SEAT * num;

    saveSeats();

    fprintf(file, "\n----------- TICKET -----------\n");
    fprintf(file, "Ticket ID     : %d\n", ticketID);
    fprintf(file, "Movie         : %s\n", movieName);

    fprintf(file, "Seats         : ");

    for (int i = 0; i < num; i++)
    {
        fprintf(file, "%c%d ", seatRow[i], seatCol[i]);
    }

    fprintf(file, "\nTotal Seats   : %d\n", num);
    fprintf(file, "Total Price   : Rs.%d\n", total);
    fprintf(file, "----------- ENJOY YOUR MOVIE -----------\n");

    fclose(file);

    printf("\nTicket booked successfully!\n");
    printf("Ticket ID: %d\n", ticketID);
    printf("Total Price: Rs.%d\n\n", total);
}

void cancelTicket(void)
{
    int testID;
    int count;
    char rowChar;
    int column;
    int row;

    printf("Enter ticket ID: ");
    scanf("%d", &testID);

    if (testID != ticketID)
    {
        printf("Invalid ticket ID.\n");
        return;
    }

    printf("Out of %d seats, how many do you want to cancel? : ", num);
    scanf("%d", &count);

    if (count <= 0 || count > num)
    {
        printf("Invalid number of seats.\n");
        return;
    }

    for (int i = 0; i < count; i++)
    {
        printf("Enter seat: ");

        if (scanf(" %c%d", &rowChar, &column) != 2)
        {
            printf("Invalid seat format.\n");
            i--;
            continue;
        }

        rowChar = (char)toupper((unsigned char)rowChar);

        row = rowChar - 'A';
        column--;

        if (row < 0 || row >= ROWS || column < 0 || column >= COLS)
        {
            printf("Invalid seat.\n");
            i--;
            continue;
        }

        if (seats[row][column] == 'X')
        {
            seats[row][column] = 'O';
        }
        else
        {
            printf("Seat is not booked.\n");
            i--;
        }
    }

    saveSeats();

    printf("Seat cancellation completed.\n");
}

void viewSeats(void)
{
    printf("\n    1 2 3 4 5 6 7 8 9 10\n");

    for (int i = 0; i < ROWS; i++)
    {
        printf("%c  ", 'A' + i);

        for (int j = 0; j < COLS; j++)
        {
            printf("%c ", seats[i][j]);
        }

        printf("\n");
    }

    printf("\nO = Available   X = Booked\n\n");
}

void showTicket(void)
{
    FILE *file = fopen(filename, "r");
    char line[150];

    if (file == NULL)
    {
        printf("Ticket file not found.\n");
        return;
    }

    while (fgets(line, sizeof(line), file) != NULL)
    {
        printf("%s", line);
    }

    fclose(file);
}

void saveSeats(void)
{
    FILE *file = fopen("seats.txt", "w");

    if (file == NULL)
    {
        printf("Could not save seat information.\n");
        return;
    }

    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLS; j++)
        {
            fprintf(file, "%c ", seats[i][j]);
        }

        fprintf(file, "\n");
    }

    fclose(file);
}
