#include<stdio.h>
void main()
{
int n,rem=0,temp,sum=0,f=1;
printf("Enter a number - ");
scanf("%d",&n);
temp=n;
while(n!=0)
{
	rem=n%10;
	for(int i=1;i<=rem;i++)
	{
		f=f*i;
	}
	sum=sum+f;
	f=1;
	n=n/10;
}
if(temp==sum)
{
	printf("%d is a Krishnamurthy number.",temp);
}
else
{
	printf("%d is not a Krishnamurthy number.",temp);
}
}
