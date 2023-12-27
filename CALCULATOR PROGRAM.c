#include<stdio.h>
#include<math.h>
int main()
{
	int a,b,option;
	printf("Enter the first number:");
	scanf("%d",&a);
	printf("Enter the second number:");
	scanf("%d",&b);
	printf("Press 1 for Addition \n");
	printf("Press 2 for Subtraction \n");
	printf("Press 3 for Multiplication \n");
	printf("Press 4 for Division \n");
	printf("Choose your option:");
	scanf("%d",&option);
	
	switch(option)
	{
	case 1:
		printf("Addition=%d",a+b);
		break;
	case 2:
		printf("Subtraction=%d",a-b);
		break;
	case 3:
		printf("Multiplication=%d",a*b);
		break;
	case 4:
		printf("Division=%d",a/b);
		break;
	default:
		printf("Enter the valid value");
}
	return 0;
}
