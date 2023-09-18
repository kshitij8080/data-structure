#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node* create(struct node *list)
{
    struct node *temp,*newnode;
    int i,n;
    printf("enter limit:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        newnode=(struct node*)malloc(sizeof(struct node));
        printf("enter value:");
        scanf("%d",&newnode->data);
        if(list==NULL)
        {
            temp=list=newnode;
            temp->next=list;
        }
        else
        {
            temp->next=newnode;
            newnode->next=list;
            temp=newnode;
        }
    }
    return list;
}
void disp(struct node *list)
{
    struct node *temp;
    temp=list;
    do
    {
        printf("%d\t",temp->data);
        temp=temp->next;
    }while(temp!=list);
}
struct node* insertmid(struct node *list,int num,int pos)
{
    struct node *temp,*newnode;
    int i;
    newnode=(struct node *)malloc(sizeof(struct node));
    newnode->data=num;
    for(temp=list,i=1;i<(pos-1)&& temp->next!=list;i++,temp=temp->next);
    newnode->next=temp->next;
    temp->next=newnode;
    return list;
}
struct node* insertend(struct node *list,int num)
{
    struct node *newnode,*temp;
    newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=num;
    for(temp=list;temp->next!=list;temp=temp->next);
    temp->next=newnode;
    newnode->next=list;
    return list;
}
struct node* delbeg(struct node *list)
{
    struct node *temp,*temp1;
    for(temp=list;temp->next!=list;temp=temp->next);
    temp1=list;
    list=list->next;
    temp->next=list;
    free(temp1);
    return list;
}
struct node* delmid(struct node *list,int pos)
{
    int i;
    struct node *temp,*temp1;
    for(temp=list,i=1;i<(pos-1)&&temp->next!=list;i++,temp=temp->next);
    temp1=temp->next;
    temp->next=temp1->next;
    free(temp1);
    return list;
}

int main()
{
    struct node *list=NULL;
    int ch,num,pos;
    do
    {
        printf("\n 1-create \n 2-display \n 3-insert middle \n 4-inseret end \n 5-delete begining \n 6-delete middle \n");
        printf("Enter choice:");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:list=create(list);
                break;
            case 2:disp(list);
                break;
            case 3:printf("enter number to insert:");
                   scanf("%d",&num);
                   printf("Enter position:");
                   scanf("%d",&pos);
                   list=insertmid(list,num,pos);
                   break;
            case 4:printf("Enter number:");
                   scanf("%d",&num);
                   list=insertend(list,num);
                   break;
            case 5:list=delbeg(list);
                break;
            case 6:printf("Enter position:");
                   scanf("%d",&pos);
                   list=delmid(list,pos);
                   break;
        }
    }while(ch<7);
}

