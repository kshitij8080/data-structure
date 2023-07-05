#include<stdio.h>
int main()
{
    int n,a[100],i,num;
    
    printf("Enter Limit:");
    scanf("%d",&n);

    for(i=0;i<n;i++)
     printf("%d\t",a[i]);

    printf("\n enter number to search:");
    scanf("%d",&num);
    for(i=0;i<n;i++)
    {
        if(a[i]==num)
        break;
    }
    if(i==n)
     printf("number is not found...");
    else
     printf("number is found...");
}