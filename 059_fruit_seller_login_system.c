#include <stdio.h>
#include <string.h>
int main() 
{
    char username[100], email[100], password[100], confirm_password[100], fruit[20], payment_method[20];
    float quantity, price_per_kg, total_price, discount, final_price;
    printf("Hello!!\n");
    printf("Welcome to the Fruit Seller!!\n");
    printf("Fixed Price, No Bargaining!!\n");
    printf("All prices include GST and other taxes.\n\n");
    printf("Please Enter Email: ");
    scanf("%s", email);
    printf("Please Enter Username: ");
    scanf("%s", username);
    printf("Please Enter Your Password: ");
    scanf("%s", password);
    printf("Please Re-Enter Password: ");
    scanf("%s", confirm_password);
    if (strcmp(password, confirm_password) == 0) 
	{
        printf("Login Successful!!\n");
        printf("Welcome %s!!\n\n", username);
        printf("Today we have the following fruits:\n");
        printf("1. Apples - Rs. 300/kg\n");
        printf("2. Bananas - Rs. 150/kg\n");
        printf("3. Oranges - Rs. 250/kg\n");
        printf("4. Mangoes - Rs. 400/kg\n");
        printf("5. Strawberries - Rs. 500/kg\n");
        printf("Please type the fruit you want to buy: ");
        scanf("%s", fruit);
        if (strcasecmp(fruit, "apples") == 0) 
		{
            price_per_kg = 300;
        } 
		else if (strcasecmp(fruit, "bananas") == 0) 
		{
            price_per_kg = 150;
        } 
		else if (strcasecmp(fruit, "oranges") == 0) 
		{
            price_per_kg = 250;
        } 
		else if (strcasecmp(fruit, "mangoes") == 0) 
		{
            price_per_kg = 400;
        } 
		else if (strcasecmp(fruit, "strawberries") == 0) 
		{
            price_per_kg = 500;
        } 
		else 
		{
            printf("Sorry, we don't have that fruit.\n");
            return 0;
        }
        printf("You have selected %s.\n", fruit);
        printf("Please enter quantity in kilograms: ");
        scanf("%f", &quantity);
        total_price = quantity * price_per_kg;
        if (quantity > 5) 
		{
            discount = total_price * 0.10;
        } 
		else 
		{
            discount = total_price * 0.05;
        }
        final_price = total_price - discount;
        printf("Total Price: Rs. %.2f\n", total_price);
        printf("Discount Applied: Rs. %.2f\n", discount);
        printf("Final Price to Pay: Rs. %.2f\n\n", final_price);
        printf("Please enter payment method (Cash/Card/UPI): ");
        scanf("%s", payment_method);
        printf("Payment processing via %s...\n", payment_method);
        printf("Payment of Rs. %f is successful via %s\n", final_price, payment_method);
        printf("Thank You for shopping with us %s!!", username);
	}
	else
	{
		printf("Credentials incorrect, Please Re-Enter.\n");
		printf("Thank You!!");
	}
}
