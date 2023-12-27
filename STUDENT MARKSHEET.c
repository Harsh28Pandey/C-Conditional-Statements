#include<stdio.h>
int main()
{
	float m,p,c,e,h,per;
	printf("Enter the marks in maths:");
	scanf("%f",&m);
	printf("Enter the marks in physics:");
	scanf("%f",&p);
	printf("Enter the marks in chemistry:");
	scanf("%f",&c);
	printf("Enter the marks in english:");
	scanf("%f",&e);
	printf("Enter the marks in hindi:");
	scanf("%f",&h);
	per=(m+p+c+e+h)*100/500;
	printf("Percentage=%.2f \n",per);
	
	if(per>=90)
	{
		printf("Grade:A");}
	else if(per>=80){
		printf("Grade:B");}
	else if(per>=60){
		printf("Grade:C");}
	else if(per<60){
		printf("Grade:D");}
	else{
		printf("Grade:E");
	}
	return 0;
}
