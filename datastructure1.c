#include<stdio.h>
struct student
{
    int rno;
    char name[20];
    float per;
}s1[100];

int main()
{
    int i,n,flag=0,rnum;
    printf("Enter limit");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Enter rollno name per:");
        scanf("%d%s%f",&s1[i].rno,&s1[i].name,&s1[i].per);
    }
    printf("Enter roll no to search record:");
    scanf("%d",&rnum);
    for(i=0;i<n;i++)
    {
        if(s1[i].rno==rnum)
        {
            flag=1; break;
        }
    }
    if(flag==1)
    {
        printf("\n name==%s",s1[i].name);
        printf(" \n per==%f",s1[i].per);
    }
    else
    printf("Record not found");
}