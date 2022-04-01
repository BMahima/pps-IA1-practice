#include<stdio.h>
 void input_two_string(char *a, char *b)
 {
   printf("Enter the first string to compare: \n");
   scanf("%s",a);
   printf("Enter the second string to compare: \n");
   scanf("%s",b);
 }

int str_cmp(char *a, char *b,int *result)
{
 int i=0;
 while(a[i]!='\0' && b[i]!='\0' && a[i]==b[i])
 {
   i++;
 }

 *result=a[i]-b[i];
 return *result;

}
void output(char *a, char *b, int result)
{
  if (result>0)
  {
    printf("The string %s is greater than %s\n",a,b);
  }
  else if(result<0)
  {
    printf("The string %s is greater than %s\n",b,a);
    }
  else
  {
   printf("Both the strings are equal\n");
  }
}

int main()
{
  char a[20],b[20];
  int result;
  input_two_string(a,b);
  str_cmp(a,b,&result);
  output(a,b,result);
  return 0;
}