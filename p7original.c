#include <stdio.h>
 struct complex

{
  float real,imaginary;

};
typedef struct complex comp;

comp input()
{
  comp n;
  printf("enter the complex no\n");
  scanf("%f%f",&real,&imaginary);
  return n;
}

comp add(comp a, comp b)
{
  comp sum;
  sum.real=a.real+b.real;
  sum.imaginary=a.imaginary+b.imaginary;
  return sum;
}

void output(comp a, comp b , comp sum)
{
  printf("%f+%fi + %f+%fi is %f+%fi\n",a.real,a,imaginary,b,real,b.imaginary,sum.real,sum.imaginary);

}

int main()
{
  comp a, b ,sum;
  a=input();
  b=input();
  sum=add(a,b);
  output(a,b,sum);
  return 0;
  
}
