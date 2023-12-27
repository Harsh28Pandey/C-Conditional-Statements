#include<stdio.h>
#include<math.h>
int main()
{
	float w,h,BMI;
	printf("Enter the Body Weight in kilogram:");
	scanf("%f",&w);
	printf("Enter the Body Height in meters:");
	scanf("%f",&h);
	BMI=(w/pow(h,2));
	printf("Body Mass Index is=%f \n",BMI);
	
	if(BMI<=15)
	{
		printf("BMI is Starvation");
	}
	else if(BMI<=17.5)
	{
		printf("BMI is Anorexic");
	}
	else if(BMI<=18.5)
	{
		printf("BMI is Underweight");
	}
	else if(BMI<=24.9)
	{
		printf("BMI is Ideal");
	}
	else if(BMI<=25.9)
	{
		printf("BMI is Overweight");
	}
	else if(BMI<=30.9,BMI<=39.9)
	{
		printf("BMI is Obese");
	}
	else if(BMI>=40)
	{
		printf("BMI is Morbdly Obese");
	}
	else
	{
		printf("In BMI Weight is not Kilogram and Height in Meters");
	}
	return 0;
}
