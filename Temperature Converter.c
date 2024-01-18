#include<stdio.h>
void Celsius(float temperature);    // Declared Function Celsius
void Farenheit(float temperature);    // Declared Function Farenheit
void Kelvin(float temperature);    // Declared Function Kelvin
void main()
{
    float temperature;
    char unitFrom;
    char c,C,f,F,k,K;
    int start;
    printf("--x--Welcome to TEMPERATURE CONVERTER!--x--\n\n");  //Start of program
    printf("To START enter '1': ");
    scanf("%d",&start);
    while(start==1)
    {
        printf("Enter temperature: ");  //Accepting temperature
        scanf("%f",&temperature);
        printf("C for Celsius\n");
        printf("F for Farenheit\n");
        printf("K for Kelvin\n");
        printf("Enter conversion units\n");
        printf("From which unit: ");    //From which unit it should be converted
        scanf("%s",&unitFrom);
        if(unitFrom=='c' || unitFrom=='C')  //It converts from Celsius to other units
        {
            Celsius(temperature);    //Calling Celsius Function
        }
        else if(unitFrom=='f' || unitFrom=='F')  //It converts from Farenheit to other units
        {
            Farenheit(temperature);    //Calling Farenheit Function
        }
        else if(unitFrom=='k' || unitFrom=='K')  //It converts from Kelvin to other units
        {
            Kelvin(temperature);    //Calling Kelvin Function
        }
        else 
        {
            printf("Wrong unit entered.\n");    //If the unit entered is other than mentioned above
        }
        printf("To continue enter '1' to STOP enter '0': ");    //To continue or stop the loop
        scanf("%d",&start);
    }
    if(start==0)
    {
        printf("\n\n--x--Thanks for using our TEMPERATURE CONVERTER!--x--");    //End of program
    }
}

// Function Celsius
void Celsius(float temperature)
{
    int answer=0;
    char unitTo;
    printf("To which unit: ");
    scanf("%s",&unitTo);
    if(unitTo=='f' || unitTo=='F')  //It converts to Farenheit
            {
                answer=(temperature*1.8)+32;    //Formula to convert into Farenheit
                printf("%0.2f C = %0.2f F\n",temperature,answer);
            }
            else if(unitTo=='k' || unitTo=='K') //It converts to Kelvin
            {
                answer=temperature+273.15;  //Formula to convert into Kelvin
                printf("%0.2f C = %0.2f K\n",temperature,answer);
            }
            else 
            {
                printf("Wrong unit entered.\n");    //If the unit entered is other than mentioned above
            }
}

// Function Farenheit
void Farenheit(float temperature)
{
    int answer=0;
    char unitTo;
    printf("To which unit: ");
    scanf("%s",&unitTo);
    if(unitTo=='c' || unitTo=='C') //It converts to Celsius
            {
                answer=(temperature-32)*0.55;  //Formula to convert into Celsius
                printf("%0.2f F = %0.2f C\n",temperature,answer);
            }
            else if(unitTo=='k' || unitTo=='K') //It converts to Kelvin
            {
                answer=(temperature-32)*0.55+273.15;  //Formula to convert into Kelvin
                printf("%0.2f F = %0.2f K\n",temperature,answer);
            }
            else 
            {
                printf("Wrong unit entered.\n");    //If the unit entered is other than mentioned above
            }
}

// Function Kelvin
void Kelvin(float temperature)
{
    int answer=0;
    char unitTo;
    printf("To which unit: ");
    scanf("%s",&unitTo);
    if(unitTo=='c' || unitTo=='C') //It converts to Celsius
            {
                answer=temperature-273.15;  //Formula to convert into Celsius
                printf("%0.2f K = %0.2f C\n",temperature,answer);
            }
            else if(unitTo=='f' || unitTo=='F') //It converts to Farenheit
            {
                answer=(temperature-273.15)*1.8+32;  //Formula to convert into Farenheit
                printf("%0.2f K = %0.2f F\n",temperature,answer);
            }
            else 
            {
                printf("Wrong unit entered.\n");    //If the unit entered is other than mentioned above
            }
}
