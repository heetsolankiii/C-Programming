#include<stdio.h>
void main()
{
float num1,num2,sum;
char operation;
printf("==x==SIMPLE CALCULATOR==x==\n");
printf("--x-- RULES --x--\n");
printf("1. To STOP enter '-1'\n");
printf("2. First enter number then enter the operation to be performed.\n\n");
printf("--STARTING HERE--\n");
printf("Enter 0 to START: ");
scanf("%f",&num1);
sum=num1;
while(num1>=0 || num2>=0)
{
	printf("Enter a number: ");
	scanf("%f",&num2);
	if(num2>=0)
	{
		printf("Enter operation: ");
		scanf("%s",&operation);
		switch(operation)
		{
		case '+':
		sum=sum+num2;
		break;
		case '-':
		sum=sum-num2;
		break;
		case '*':
		sum=sum*num2;
		break;
		case '/':
		if(num2>0)
		{
		sum=sum/num2;
		}
		else if(num2==0)
		{
		printf("Number cannot be divided.\n");
		}
		break;
		default:
		printf("Wrong Input");
		break;
		}
		printf("Answer is %0.2f\n",sum);
	}
	else if(num2==-1)
	{
		printf("Final answer is %0.2f\n",sum);
		printf("Thank you for using our calculator.");
		break;
	}
}
}
