#include<stdio.h>
int main()
{
                int s[20],i,t,n,pass;
              printf("Enter Limit :: ");
              scanf("%d",&n);
              
              printf("\n Enter n  Numbers :: ");
              for(i=0;i<n;i++)
              scanf("%d",&s[i]);
              
              for(pass=1;pass<n;pass++)
              {
                            for(i=0;i<n-pass;i++)
                            {
                                            if(s[i]>s[i+1])
                                            {
                                                    t=s[i];
                                                    s[i]=s[i+1];
                                                    s[i+1]=t;
                                            }
                            }
              }
              printf("\n Number in Sorted Order :: \n");
              for(i=1;i<n;i++)
              printf("%d \t",s[i]);
}
