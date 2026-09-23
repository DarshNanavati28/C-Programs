/*
 * Program: Username and Password Validator
 * Author: Darsh Nanavati
 *
 * Description:
 * A simple C program that accepts a username, password, and
 * password confirmation. It compares the two passwords using
 * strcmp() and displays whether the credentials are valid.
 *
 * Note:
 * This is an educational simulation and does not implement
 * secure password storage or authentication.
 */

#include <stdio.h>
#include <string.h>

int main(void)
{
    char username[100];
    char password[100];
    char confirm_password[100];

    printf("Hello!!\n");

    printf("Please Enter Your Username: ");
    scanf("%99s", username);

    printf("Please Enter Your Password: ");
    scanf("%99s", password);

    printf("Please Re-Enter Password: ");
    scanf("%99s", confirm_password);

    if (strcmp(password, confirm_password) == 0)
    {
        printf("Login Successful!!\n");
        printf("Welcome %s!!\n", username);
    }
    else
    {
        printf("Credentials are not correct!!\n");
        printf("Please re-enter your details.\n");
    }

    printf("Thank You!!\n");

    return 0;
}
