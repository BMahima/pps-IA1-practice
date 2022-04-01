#include <stdio.h>
#include <math.h>
float input()
{
  float x;
  printf("enter the valur of n: \n");
  scanf("%f",&x);
  return x;
}
float my_sqrt(float x)
{
  float guess=x/2;
  float next =x/guess;
  while(fabs(guess-next)>0.000001)
  {
    guess=(guess+next)/2;
    next=x/guess;
  }
  return next;
}
void output(float x, float next)
{
  printf("the sqrt of %f is %f",x,next);
}
int main()
{
  float n,next;
  n=input();
  next=my_sqrt(n);
  output(n,next);
  return 0;
}