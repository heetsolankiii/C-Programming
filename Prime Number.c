#include<stdio.h>
void main()
{
    int number,i,count;
    printf("Enter a number: ");
    scanf("%d",&number);
    for(i=1;i<=number;i++)
    {
        if(number%i==0)
        {
            count++;
        }
        else 
        {
            continue;
        }
    }
    if(count==2)
    {
        printf("%d is a PRIME NUMBER.",number);
    }
    else
    {
        printf("%d is not a PRIME NUMBER.",number);
    }
    return 0;
}
