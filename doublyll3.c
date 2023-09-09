#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
	int data;
	struct node *next;
}NODE;
int main()
{
	int i,n;
	NODE *list1=NULL,*list2=NULL,*temp1,*temp2,*newnode;
	printf("Enter limit:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
	  newnode=(NODE*)malloc(sizeof(NODE));
	  printf("Enter value:");
	  scanf("%d",&newnode->data);
	  newnode->next=NULL;
	  if(newnode->data>0)
	  {
	    if(list1==NULL)
	      list1=temp1=newnode;
	    else
	    {
	    	temp1->next=newnode;
	    	temp1=newnode;
		}
	  }
	  else
	  {
	    if(list2==NULL)
	      list2=temp2=newnode;
	    else
	     {
	     	temp2->next=newnode;
	     	temp2=newnode;
		 }
	  }	
	}
	printf("\n +ve List=");
	for(temp1=list1;temp1!=NULL;temp1=temp1->next)
	   printf("%d\t",temp1->data);
	printf("\n -ve List=");
	for(temp2=list2;temp2!=NULL;temp2=temp2->next)
	   printf("%d\t",temp2->data);	   
}