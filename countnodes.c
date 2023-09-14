#include<stdio.h>
#include<malloc.h>
struct node{
	int data;
	struct node* next;
};
struct node* create(struct node* head)
{
	int i,n;
	struct node* newnode,*temp;
	printf("\n Enter Limit :");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		newnode=(struct node*)malloc(sizeof(struct node));
		printf("\n Enter Value :");
		scanf("%d",&(newnode->data));
		newnode->next=NULL;
		if(head==NULL)
		{
			head=newnode;
			temp=newnode;
		}
		else
		{
			temp->next=newnode;
			temp=newnode;
		}
	}
	return head;
}

void dis(struct node* head)
{
	struct node* temp;
	for(temp=head;temp!=NULL;temp=temp->next)
	{
		printf("%d\t",temp->data);
	}
}

int count_node(struct node* head) 
{
    int cnt=0;
    struct node* temp;
    for (temp=head;temp!=NULL;temp=temp->next) 
	{
        cnt++;
    }
    return cnt;
}
int main()
{
	int cnt=0;
    struct node* head =NULL;
    head=create(head);
    dis(head);
    cnt=count_node(head);
    printf("\n Total Node Count: %d",cnt);
}
