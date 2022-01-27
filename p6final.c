#include<stdio.h>
int input()
{
  int x;
  scanf("%d",&x);
  return x;
}
int sum_n(int n)
{
  int r=0;
  r=(n*(n+1))/2;
  return r;
}
void output(int n,int sum)
{
  printf("0");
  for(int i=1;i<n;i=i+1)
  {
    printf("+%d",i);
  }
  printf("+%d is %d\n",n,sum);
}
int main()
{
  int n,sm;
  n=input();
  sm=sum_n(n);
  output(n,sm);
  return 0;
}