#include <stdio.h>
int main ()
{
	int cho, marks, a, b, c, d, e, f, g, pay;
	printf("Hello!!\n");
	printf("Welcome to Disha Institute!!\n");
	printf("\n");
	printf("We have the following courses:\n");
	printf("1. C and C++ Programming\n");
	printf("2. Python Programming\n");
	printf("3. Java Programming\n");
	printf("4. Graphics Designing\n");
	printf("5. Microsoft Office (Word, Excel, Powerpoint)\n");
	printf("Which Course would you like to choose??\n");
	printf("Please Enter your choice number here: ");
	scanf("%d",&cho);
	switch (cho)
	{
		case 1:
			printf("You have chosen C and C++ programming Language.\n");
			break;
		case 2:
			printf("You have chosen Python Programming Language.\n");
			break;
		case 3:
			printf("You have chosen Java Programming Language.\n");
			break;
		case 4:
			printf("You have chosen Graphics Designing Course.\n");
			break;
		case 5:
			printf("You have chosen Microsoft Office Course.\n");
			break;
		default:
			printf("Invalid Choice.\n");
			break;
	}
	printf("\n");
	printf("Please Enter your DSAT (Disha Scholarship CUM Admission Test) Marks here: ");
	scanf("%d",&marks);
	if (marks>100)
	{
		printf("Invalid Marks\n");
	}
	else if (marks>=90)
	{
		printf("You will get a discount of 80%% on the course selected.\n");
		printf("Original Price of Course: Rs.5000/-\n");
		a=5000*80/100;
		g=a;
		printf("Discounted Price: Rs.%d/-\n",5000-a);
		printf("Your Course Duration will be 4 Months.\n");
	}
	else if (marks>=80)
	{
		printf("You will get a discount of 60%% on the course selected.\n");
		printf("Original Price of Course: Rs.5000/-\n");
		b=5000*60/100;
		g=b;
		printf("Discounted Price: Rs.%d/-\n",5000-b);
		printf("Your Course Duration will be 3.5 Months.\n");
	}
	else if (marks>=70)
	{
		printf("You will get a discount of 40%% on the course selected.\n");
		printf("Original Price of Course: Rs.5000/-\n");
		c=5000*40/100;
		g=c;
		printf("Discounted Price: Rs.%d/-\n",5000-c);
		printf("Your Course Duration will be 3 Months.\n");
	}
	else if (marks>=50)
	{
		printf("You will get a discount of 20%% on the course selected.\n");
		printf("Original Price of Course: Rs.5000/-\n");
		d=5000*20/100;
		g=d;
		printf("Discounted Price: Rs.%d/-\n",5000-d);
		printf("Your Course Duration will be 2.5 Months.\n");
	}
	else if (marks>=40)
	{
		printf("You will get a discount of 10%% on the course selected.\n");
		printf("Original Price of Course: Rs.5000/-\n");
		e=5000*10/100;
		g=e;
		printf("Discounted Price: Rs.%d/-\n",5000-e);
		printf("Your Course Duration will be 2 Months.\n");
	}
	else if (marks<40 && marks>0)
	{
		printf("You will get a discount of 5%% on the course selected.\n");
		printf("Original Price of Course: Rs.5000/-\n");
		f=5000*5/100;
		g=f;
		printf("Discounted Price: Rs.%d/-\n",5000-f);
		printf("Your Course Duration will be 2 Months.\n");
	}
	else
	{
		printf("Invalid Marks.\n");
	}
	printf("\n");
	printf("You have Four Options for payment:\n");
	printf("1.Cash\n");
	printf("2.Credit Card\n");
	printf("3.Debit Card\n");
	printf("4.UPI\n");
	printf("Please Enter the Choice number for payment method: ");
	scanf("%d", &pay);
	switch(pay) 
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
	        printf("Payment Unsuccessful as the the payment mode is not selected as mentioned.\n");
			break;
	}
	printf("\n");
	printf("Thank You!!");
}
