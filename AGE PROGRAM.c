#include<stdio.h>
int main()
{
	int age;
	printf("Enter any age:");
	scanf("%i",&age);
	
	if(age >= 18)
	{
		printf("Adult \n");
		printf("They can drive \n");
		printf("They can vote \n");
	}
	else
	{
		printf("Not an adult");
	}
	
}
