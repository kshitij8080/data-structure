#include<stdio.h>
int sum(int n)
{
    if(n==0)
    return 0;
    else
    return (n%10) + sum (n/10);
}
int main()
{
  int n,a;
  printf("Enter Nos:");
  scanf("%d",&n);
  a=sum(n);
  printf("sum of digits=%d",a);
}