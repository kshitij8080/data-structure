#include<stdio.h>
#include<string.h>
struct employee
{
           int eid;
           char ename[20];
           float sal;
}e1[20];
     int search_by_id(struct employee e1[20],char name[20],int n);
int main()
{
        int i,n,flag=0;
       char name[20];
      
        printf("enter limit:");
        scanf("%d",&n);
 
        printf("\n Enter n Records to shorted order:\n ");
          for(i=0;i<n;i++)
        {
              scanf("%d%s%f",&e1[i].eid,e1[i].ename,&e1[i].sal);
        }
        
         printf("\n Enter Employee name to search: ");
         scanf("%s",name);
   
        flag=search_by_id(e1,name,n);
          if (flag==1)
               printf("Record is found");
        else
               printf("Record is not found");
}

int search_by_id(struct employee e1[20],char name[20],int n)
{
    int top=0,bottom=n-1, mid,flag=0;
    
         while(top<=bottom)
        {
          mid=(top+bottom)/2;
          if((strcmp(e1[mid].ename,name))==0)
          {
                      flag=1;
                         break;
          }
          if((strcmp(name,e1[mid].ename))>0)
           top=mid+1;
          else
           bottom=mid-1;
          }
                  return flag; 
}
