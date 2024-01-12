#include <stdio.h>
#include <math.h>
void main()
{
  int a = 1, b = 5, c = 2;
  double roots1,roots2;
  roots1 = (-b + sqrt((b*b) - 4*a*c))/2*a;
  roots2 = (-b - sqrt((b*b) - 4*a*c))/2*a;
  printf("Roots are: %lf & %lf",roots1,roots2);
}
