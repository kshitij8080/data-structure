#include<stdio.h>
#include<string.h>
int main()
{
          int i,pass,n;
          char name[20][20],t[20];
          
          printf("\n Enter Limit :: ");
          scanf("%d",&n);
          printf("\n Enter n Names ::");
          for(i=0;i<n;i++)
          scanf("%s",name[i]);
          
          for(pass=1;pass<n;pass++)
          {
              for(i=0;i<n-pass;i++)
              {
                    if((strcmp(name[i],name[i+1]))>0)
                       {
                              strcpy(t,name[i]);
                              strcpy(name[i],name[i+1]);
                              strcpy(name[i+1],t);
                       }
              }
          }
          printf("\n Names in Sorted Order :: \n ");
          for(i=0;i<n;i++)
          printf("%s \t",name[i]);
}
