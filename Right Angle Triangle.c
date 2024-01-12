#include <stdio.h>
void main()
{
    int hypotenuse, side1, side2;
    printf("Enter value for hypotenuse: ");     //Accepting hypotenuse
    scanf("%d", &hypotenuse);
    printf("Enter value for side1: ");      //Accepting side1
    scanf("%d", &side1);
    printf("Enter value for side2: ");      //Accepting side2
    scanf("%d", &side2);
    if((hypotenuse*hypotenuse) == (side1*side1) + (side2*side2))
    {
    printf("This is a right angled triangle");
    }
    else
    {
    printf("This is not a right angled triangle");
    }
}
