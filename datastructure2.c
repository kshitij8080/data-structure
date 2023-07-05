#include<stdio.h>
#include<string.h>
int main()
{
    char s1[20][20],name[20];
    int i,flag=1,n;
    printf("Enter limi:");
    scanf("%d",&n);
    printf("enter n students names:");
    for(i=0;i<n;i++)
    {
        scanf("%s",&s1[i]);
    }
    printf("enter student name to search:");
    scanf("%s",&name);
    for(i=0;i<n;i++)
    {
        if(strcmp(s1[i],name)==0)
        {
            flag=0;
            break;
        }
    }
    if(flag==0)
    printf("name foud...");
    else
    printf("name is not found....");
}