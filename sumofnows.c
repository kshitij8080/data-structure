#include<stdio.h>
int sum(int n)
{
    if(n==0)
    return 0;
    else
    return n+sum(n-1);
}
int main()
{
  int n,a;
  printf("Enter Nos:");
  scanf("%d",&n);
  a=sum(n);
  printf("sum of nos=%d",a);
}