#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Enter the number a:");
	scanf("%d",&a);
	printf("Enter the number b:");
	scanf("%d",&b);
	printf("Enter the number c:");
	scanf("%d",&c);
	
	if(a>b)
	{
		if(a>c)
		printf("%d is greater number",a);
	}
	else if(b>c)
	{
		if(b>a)
		printf("%d is greater number",b);
	}
	else if(c>a)
	{
		if(c>b)
		printf("%d is greater number",c);
	}
	else
	{
		printf("Number is invalid");
	}
	return 0;
}
