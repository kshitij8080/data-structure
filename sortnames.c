#include<stdio.h>
#include<string.h>
int main()
{
    int i,n,pass;
    char s1[20][20],t[20];
    printf("Enter limit:");
    scanf("%d",&n);
    printf("Enter n names in array:");
    for(i=0;i<n;i++)
    scanf("%d",&s1[i]);
    for(pass=1;pass<n;pass++)
    {
       for(i=0;i<n-pass;i++)
       {
        if(strcmp(s1[i],s1[i+1])>0)
       }
    }
}