#include<stdio.h>
void main()
{
int temp,rem=0,sum=0,n;
printf("Enter a number - ");
scanf("%d",&n);
temp=n;
while(n!=0)
{
	rem=n%10;
	sum=sum+(rem*rem*rem);
	n=n/10;
}
if(sum==temp)
{
	printf("%d is an Armstrong Number.",temp);
}
else
{
	printf("%d is not an Armstrong Number.",temp);
}
}
