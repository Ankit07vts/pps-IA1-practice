#include <stdio.h>

 int input()
{
  int n;
  printf("enter the numbers\n");
  scanf("%d",&n);
  return n;

}

int cmp(int a,int b,int c)
{
  if 
  (a>b && a>c)
  return a;
  else if
  (b>a && b>c)
  return b;
  else 
  return c; 
}
 void output(int largest)
 {
   printf("the largest no. is .%2d \n",largest);

 }

 int main()
 {
   int a,b,c,largest;
   a=input();
   b=input();
   c=input();
   largest=cmp(a,b,c);
   output(largest);
   return 0;

 }