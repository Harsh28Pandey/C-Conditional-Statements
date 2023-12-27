#include<stdio.h>
int main()
{
	int yos,qual,salary;
	char gen;
	printf("Enter the Gender 'M' and 'F':");
	scanf("%c",&gen);
	printf("Enter the Year of service:");
	scanf("%d",&yos);
	printf("Enter the Qualification:");
	scanf("%d",&qual);
	//qualification of postgraduate is 0 both male and female
	//qualification of graduate is 1 both male and female
	if(gen=='M' && yos>=10 && qual==0)
	{
		printf("Salary of Employee=15000");
	}
	else if(gen=='M' && yos>=10 && qual==1)
	{
		printf("Salary of Employee=10000");
	}
	else if(gen=='M' && yos<10 && qual==0)
	{
		printf("Salary of Employee=10000");
	}
	else if(gen=='M' && yos<10 && qual==1)
	{
		printf("Salary of Employee=7000");
	}
	else if(gen=='F' && yos>=10 && qual==0)
	{
		printf("Salary of Employee=12000");
	}
	else if(gen=='F' && yos>=10 && qual==1)
	{
		printf("Salary of Employee=9000");
	}
	else if(gen='F' && yos<10 && qual==0)
	{
		printf("Salary of Employee=10000");
	}
	else if(gen='F' && yos<10 && qual==1)
	{
		printf("Salary of Employee=6000");
	}
	else
	{
		printf("Enter the valid data");
	}
	return 0;
}
