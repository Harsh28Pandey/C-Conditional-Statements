#include<stdio.h>
int main()
{
	int y;
	printf("Enter the year:");
	scanf("%d",&y);
	
	if(y%4==0&&y%100!=0)
	{
		printf("Enter the year is leap year:");
	}
	else
	{
		printf("Enter the year is not a leap year:");
	}
	return 0;
}
