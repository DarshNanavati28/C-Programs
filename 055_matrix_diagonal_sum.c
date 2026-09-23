#include <stdio.h>
int main ()
{
	int a[3][3], i, j, sum;
	printf("Hello!!\n");
	for(i=0;i<3;i++) 
	{
		for(j=0;j<3;j++) 
		{
			printf("Please Enter the Number: ");
			scanf("%d",&a[i][j]);
		}
	}
	printf("\n");
	for(i=0;i<3;i++) 
	{
		for(j=0;j<3;j++) 
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n\n");
	}
	printf("Diagonals Added now: \n");
	for(i=0;i<3;i++) 
	{
		sum+=a[i][i];
		sum+=a[i][3-1-i];
	}
	a[1][1]=sum;
	printf("\n");
	for(i=0;i<3;i++) 
	{
		for(j=0;j<3;j++) 
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n\n\n");
	}
}
