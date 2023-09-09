#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
	int data;
	struct node *next,*prev;
}NODE;
struct node *create(struct node *list)
{
 int i,n;
 struct node *newnode,*temp;
 printf("Enter limit:");
 scanf("%d",&n);
 for(i=0;i<n;i++)
 {
 	newnode=(struct node*)malloc(sizeof(struct node));
 	printf("Enter value:");
 	scanf("%d",&newnode->data);
 	newnode->next=NULL;
 	if(list==NULL)
 	{
 	  list=newnode;
	   temp=newnode;	
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
void disp(struct node *list)
{
  struct node *temp;
  for(temp=list;temp!=NULL;temp=temp->next)
  {
    printf("%d\t",temp->data);	
  }	
}
struct node* insertbeg(struct node *list,int num)
{
	struct node *newnode;
	newnode=(struct node*)malloc(sizeof(struct node));
	newnode->data=num;
	newnode->next=list;
	list->prev=newnode;
	list=newnode;
	return list;
}
