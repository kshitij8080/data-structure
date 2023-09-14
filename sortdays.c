#include<stdio.h>
#include<string.h>
int main()
{
    char day[20][20]={"monday","tuesday","wednesday","thursday","friday","saturday","sunday"};
    int i,j;
    char key[20],t[20];
    for(i=1;i<7;i++)
    {
        strcpy(key,day[i]);
        for(j=i-1;j>=0&&strcmp(key,day[j])<0;j--)
        {
            strcpy(t,day[j+1]);
            strcpy(day[j+1],day[j]);
            strcpy(day[j],t);
        }
    }
    printf("sorted days=");
    for(i=0;i<7;i++)
    printf("%s\t",day[i]);
}
