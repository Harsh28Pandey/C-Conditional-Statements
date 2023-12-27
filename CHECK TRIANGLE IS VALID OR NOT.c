#include<stdio.h>
int main()
{
	int a,b,c,d;
	printf("Enter the first side of triangle a:");
	scanf("%d",&a);
	printf("Enter the second side of triangle b:");
	scanf("%d",&b);
	printf("Enter the third side of triangle c:");
	scanf("%d",&c);
	d=a+b+c;
	printf("Sum of sides of triangle=%d \n",d);
	
	if(d==180)
	{
		printf("Triangle is valid \n");
		if((a+b)>c)
		{
		printf("Sum of two sides of triengle is greater than third side");
		}
		else
		{
			printf("Sum of two sides of triangle is not greater than third side");
		}
	}
	else
	{
		printf("Triangle is not valid");
	}
	return 0;
}
