#include<stdio.h>
#include<malloc.h>
#include<stdlib.h>
struct node{
	int data;
	struct node* next;
};
int main()
{
	int i,n;
	struct node* temp1;
	struct node*temp2;
	struct node*list1=NULL;
	struct node*list2=NULL;
	struct node*newnode;
	printf("\n Enter A Limit :");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		newnode=(struct node*)malloc(sizeof(struct node));
		printf("\n Enter A value :");
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
    printf("\n Positive Number List :");
    for(temp1=list1;temp1!=NULL;temp1=temp1->next)
    printf("%d\t",temp1->data);
    
	printf("\n Negative Number List :");
    for(temp2=list2;temp2!=NULL;temp2=temp2->next)
    printf("%d\t",temp2->data);
}
