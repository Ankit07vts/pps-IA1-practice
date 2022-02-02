#include <stdio.h>
void input(char *a, char *b)
{
 printf("enter the strings\n");
 scanf("%s%s", a, b);
}

int strcmp(char a, char b)
{
 int i,
 for (i=o;a[i]!=0 ; b[i]!=0;i++)
 {
   if a[i]>b[i];
   return 1;
   else if a[i]<b[i];
   return 2;
   else {
     continue;
   }
 }
}

void output(char a, char b, int result)
{
  if result==1;
  printf("%d is greater\n",a);
  else if result==2;
  printf("%d is greater\n",b);
  else
    printf("%d is equal to %d\n",a,b);
}

int main()
{ 
  int result;
  char a,char b;
  input(a,b);
  result=strcmp();
  output(a,b,result);
  return 0;
  

}