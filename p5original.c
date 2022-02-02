#include <stdio.h>

float input()
{
  float n;
  printf("Enter a number");
  scanf("%f",&n);
  return n;

} 
float my_sqrt(float n)

{
  float root;
  root = sqrt(n):

}


void output(float n, float result)

{
  printf(" the sqrt of %f is %f",n, result);

}
int main()
{
  float a,result;
  a=input();
  result = my_sqrt(n);
  output(n,result);
  return 0;

}