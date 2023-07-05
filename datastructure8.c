#include<stdio.h>
struct employee
{
           int eid;
           char ename[20];
           float sal;
}e1[20];
     int search_by_id(struct employee e1[20],int empid,int n);
int main()
{
        int i,n,empid,flag=0;
   
      
        printf("enter limit:");
        scanf("%d",&n);
 
        printf("Enter n Records to shorted order:");
          for(i=0;i<n;i++)
        {
              scanf("%d%s%f",&e1[i].eid,e1[i].ename,&e1[i].sal);
        }
        
         printf("Enter Employee id to search:");
         scanf("%d",&empid);
   
        flag=search_by_id(e1,empid,n);
          if (flag==1)
               printf("Record is found");
        else
               printf("Record is not found");
}

int search_by_id(struct employee e1[20],int empid,int n)
{
    int top=0,bott=n-1, mid,flag=0;
    
    while(top<=bott)
    {
               mid=(top+bott)/2;
                 if(e1[mid].eid==empid)
                 {
                           flag=1;
                               break;
                }
                 if(empid>e1[mid].eid) 
                  top=mid+1;
                  else
                   bott=mid-1;
    }
                  return flag; 
}
