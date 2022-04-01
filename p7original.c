#include<stdio.h>
struct _complex
{
  float real,imaginary;
};
typedef struct _complex Complex;

Complex input_chellox()
{
  Complex c;
  printf("Enter the real and imaginary parts of a complex number: \n");
  scanf("%f""%f",&c.real,&c.imaginary);
  return c;
}


Complex add(Complex a,Complex b)
{
  Complex c;
  c.real=a.real+b.real;
  c.imaginary=a.imaginary+b.imaginary;
  return c;
}

void output(Complex a, Complex b, Complex c)
{
  printf("(%f +i %f) +(%f + i%f)=(%f +i%f)\n",a.real,a.imaginary,b.real,b.imaginary,c.real,c.imaginary);
}

int main()
{
  struct _complex a,b,c;
  typedef struct complex Complex;
  a=input_chellox();
  b=input_chellox();
  c=add(a,b);
  output(a,b,c);
  return 0;
}