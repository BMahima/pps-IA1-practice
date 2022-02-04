#include <stdio.h>
int input_n()
{
  int a;
  printf("enter a number: \n");
  scanf("%d",&a);
  return a;
}
int sum_n(int n)
{
  int sum;
  sum=0;
  for(int i=0;i<=n;i++)
  {
    sum=sum+i;
  }
  return sum;
}

void output(int n, int sum)
{
  printf("the sum of %d numbers is %d \n",n,sum);
}
int main()
{
  int x,y;
  x=input_n();
  y=sum_n(x);
  output(x,y);
  return 0;
}