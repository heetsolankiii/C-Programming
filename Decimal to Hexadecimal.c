#include<stdio.h>
void main()
{
int n,rem=0,sum=0,up=1,i;
printf("Enter a Decimal Number: ");
scanf("%d",&n);
i=n;
while(n!=0)
{
	rem=n%16;
	sum=(rem*up)+sum;
	up=up*10;
	n=n/16;
}
printf("Hexadecimal Conversion of %d is %d.",i,sum);
}
