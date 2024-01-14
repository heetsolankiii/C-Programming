#include <stdio.h>
void main()
{
  int outerValue, innerValue, spaces, num;
  for(outerValue=0; outerValue<5; outerValue++)     //Used to print the outer values
    {
      for(spaces=5; spaces>outerValue; spaces--)
        {
          printf(" ");        //Used to print spaces before outer values
        }
      num = 1;
      for(innerValue=0; innerValue<=outerValue; innerValue++)
        {
          printf("%d ",num);      //Used to print inner values
          num = (num * (outerValue-innerValue)/(innerValue+1));     //Used to increment inner values
        }
      printf("\n");   //Used for next line
    }
}
