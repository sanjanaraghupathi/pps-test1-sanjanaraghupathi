#include <stdio.h>
int cmp(int a,int b,int c)
{
if(a>b)
{
  if(a>c)
  {
  return a;
}
else
{
return c;
}
}
else 
{
  if(b>c)
  {
    return b;
  }
  else
  {
  return c;
}
}
}
int input()
{
  int x;
  scanf("%d",&x);
  return x;
}
int main()
{
  int a,b,c,large;
  printf("enter the three numbers\n");
  a=input();
  b=input();
  c=input();
  large=cmp(a,b,c);
  printf("%d is the largest of the three\n",large);
}
