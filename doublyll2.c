#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
	int data;
	struct node *next,*prev;
}NODE;
NODE *create(NODE *list)
{
   int i,n;
   struct node *newnode,*temp;
   printf("Enter the limit:");
   scanf("%d",&n);
   for(i=0;i<n;i++)
   {
     newnode=(struct node *)malloc(sizeof(struct node));
     printf("Enter the value:");
     scanf("%d",&newnode->data);
     newnode->next=NULL;
     if(list==NULL)
     {
	    list=temp=newnode;
     }
     else
     {
	   temp->next=newnode;
       newnode->prev=temp;
	   temp=newnode;
     }
   }
   return list;
}
void disp(NODE *list)
{
	NODE *temp;
	for(temp=list;temp!=NULL;temp=temp->next)
	  printf("%d\t",temp->data);
}
NODE* insert(NODE *list,int num,int pos)
{
	NODE *temp,*newnode;
	int i;
	newnode=(NODE*)malloc(sizeof(NODE));
	newnode->data=num;
	if(pos==1)
	{
	  newnode->next=list;
	  list->prev=newnode;
	  list=newnode;
	}
	else
	{
	 for(i=1,temp=list;i<pos-1&&temp!=NULL;temp=temp->next,i++);
	 newnode->next=temp->next;
	 temp->next->prev=newnode;
	 temp->next=newnode;
	 newnode->prev=temp;
	}
	return list;
}
int main()
{
	NODE *list=NULL;
	int num,pos;
	list=create(list);
	disp(list);
	printf("Enter number:");
	scanf("%d",&num);
	printf("Enter pos:");
	scanf("%d",&pos);
	list=insert(list,num,pos);
	disp(list);
}