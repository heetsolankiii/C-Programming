#include<stdio.h>
void main()
{
    float temperature,answer=0;
    char unit;
    char c,C,f,F;
    int start;
    printf("--x--Welcome to TEMPERATURE CONVERTER!--x--\n\n");
    printf("To START enter '1': ");
    scanf("%d",&start);
    while(start==1)
    {
        printf("Enter temperature: ");
        scanf("%f",&temperature);
        printf("C for Celsius\n");
        printf("F for Farenheit\n");
        printf("Enter conversion unit: ");
        scanf("%s",&unit);
        if(unit=='c' || unit=='C')
        {
            answer=(temperature*1.8)+32;
            printf("%0.2f C = %0.2f F\n",temperature,answer);
        }
        else if(unit=='f' || unit=='F')
        {
            answer=(temperature-32)*0.56;
            printf("%0.2f F = %0.2f C\n",temperature,answer);
        }
        else 
        {
            printf("Wrong unit entered.\n");
        }
        printf("To continue enter '1' to STOP enter '0': ");
        scanf("%d",&start);
    }
    if(start==0)
    {
        printf("\n\n--x--Thanks for using our TEMPERATURE CONVERTER!--x--");
    }
    return 0;
}
