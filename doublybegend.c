#include<stdio.h>
#include<stdlib.h>
struct node
{
  int data;
  struct node *next,*prev;
};
int num;
struct node* create(struct node *list)
{
 struct node *temp,*newnode;
 int n,i;
 printf("enter limit:");
 scanf("%d",&n);
 for(i=0; i<n; i++)
  {
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("enter value:");
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
  for(temp=list; temp!=NULL; temp=temp->next)
  {
     printf("%d\t",temp->data);

  }
}
struct node* insertbig(struct node *list,int num)
{
   struct node *temp,*newnode;
    newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=num;
    temp=list;
    newnode->next=temp;
    temp->prev=newnode;
    list=newnode;
 return list;
}
struct node *insertend(struct node *list,int num)
{
  struct node *newnode,*temp;
  newnode=(struct node*)malloc(sizeof(struct node));
  newnode->data=num;
  newnode->next=NULL;
  for(temp=list; temp->next!=NULL; temp=temp->next);

     temp->next=newnode;
     newnode->prev=temp;

     return list;
}
int main()
{
  struct node *list=NULL;
  int ch;
  do
  {
  printf("\n 1-create \n 2-display \n 3-insert begining \n 4-insert end \n");
  printf("\n enter choice:\n ");
  scanf("%d",&ch);
  switch(ch)
  {
    case 1:list=create(list);
	    break;
    case 2:disp(list);
	   break;
    case 3:printf("enter number:");
	   scanf("%d",&num);
	   list=insertbig(list,num);
	   break;
    case 4:printf("enter number:");
	  scanf("%d",&num);
	  list=insertend(list,num);
	  break;
  }
   }while(ch<5);

}