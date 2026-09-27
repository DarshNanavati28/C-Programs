/*
 * Program: Tic-Tac-Toe Game
 * Author: Darsh Nanavati
 *
 * Description:
 * A two-player console-based Tic-Tac-Toe game.
 * Players X and O take turns selecting cells from 1 to 9.
 * The program checks for winning combinations and draws.
 */

#include <stdio.h>
#include <string.h>

char board[3][3];

void initializeBoard(void)
{
    int i, j;

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            board[i][j] = '1' + i * 3 + j;
        }
    }
}

void printBoard(void)
{
    int i;

    for (i = 0; i < 3; i++)
    {
        printf(" %c | %c | %c \n",
               board[i][0],
               board[i][1],
               board[i][2]);

        if (i < 2)
            printf("---|---|---\n");
    }
}

char checkWinner(void)
{
    int i;

    for (i = 0; i < 3; i++)
    {
        if (board[i][0] == board[i][1] &&
            board[i][1] == board[i][2])
        {
            return board[i][0];
        }

        if (board[0][i] == board[1][i] &&
            board[1][i] == board[2][i])
        {
            return board[0][i];
        }
    }

    if (board[0][0] == board[1][1] &&
        board[1][1] == board[2][2])
    {
        return board[0][0];
    }

    if (board[0][2] == board[1][1] &&
        board[1][1] == board[2][0])
    {
        return board[0][2];
    }

    return ' ';
}

int isDraw(void)
{
    int i, j;

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            if (board[i][j] != 'X' &&
                board[i][j] != 'O')
            {
                return 0;
            }
        }
    }

    return 1;
}

int makeMove(char player, int cell)
{
    int row;
    int col;

    if (cell < 1 || cell > 9)
        return 0;

    row = (cell - 1) / 3;
    col = (cell - 1) % 3;

    if (board[row][col] == 'X' ||
        board[row][col] == 'O')
    {
        return 0;
    }

    board[row][col] = player;

    return 1;
}

int main(void)
{
    char player = 'X';
    int cell;

    initializeBoard();

    while (1)
    {
        printBoard();

        printf("\nPlayer %c, enter cell number (1-9): ", player);

        if (scanf("%d", &cell) != 1)
        {
            printf("Invalid input. Please enter a number.\n");

            while (getchar() != '\n')
                ;

            continue;
        }

        if (!makeMove(player, cell))
        {
            printf("Invalid move. Try again.\n");
            continue;
        }

        if (checkWinner() != ' ')
        {
            printBoard();
            printf("\nPlayer %c wins!\n", player);
            break;
        }

        if (isDraw())
        {
            printBoard();
            printf("\nIt's a draw!\n");
            break;
        }

        player = (player == 'X') ? 'O' : 'X';
    }

    return 0;
}
