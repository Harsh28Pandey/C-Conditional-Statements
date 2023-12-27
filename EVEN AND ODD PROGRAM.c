#include<stdio.h>
int main()
{
	int a;
	printf("Enter the number a:");
	scanf("%d",&a);
	
	if(a%2==0)
	{
		printf("Number is even");
	}
	else
	{
		printf("Number is odd");
	}
	return 0;
}
