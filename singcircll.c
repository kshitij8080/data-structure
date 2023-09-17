#include<stdio.h>
# define MEMORY (NODE *)malloc(sizeof(NODE));
# include <stdlib.h>

struct node
{
          int data;
          struct node *next;
};

typedef struct node NODE;

NODE *create(NODE *list)
{
          NODE *newnode,*temp;
          int i,n;
          printf("\n Enter Limit :: ");
          scanf("%d",&n);
          
          for(i=0;i<n;i++)
          {
                  newnode=MEMORY;
                  printf("Enter Value :: ");
                  scanf("%d",&newnode->data);
                  
                  if (list==NULL)
                  {
                            list=temp=newnode;
                            newnode->next=list;
                  }
                  else
                  {
                            temp->next=newnode;
                            temp=newnode;
                             newnode->next=list;
                  }
          }
          return list;
}

void Display(NODE *list)
{
        NODE *temp=list;
        
        do
        {
              printf("%d\t",temp->data);
              temp=temp->next;
        }while(temp!=list);
}

NODE *insertbeg(NODE *list,int num)
{
       NODE *newnode,*temp;
       newnode=MEMORY;
       newnode->data=num;
       for(temp=list;temp->next!=list;temp=temp->next);
       newnode->next=list;
       list=newnode;
       temp->next=list;

       return list; 
}

NODE *insertmid(NODE *list ,int num,int pos)
{
        NODE *newnode,*temp;
        int i;
        newnode=MEMORY;
        newnode->data=num;
        for(i=1,temp=list;temp->next!=NULL && i<pos-1;i++,temp=temp->next);
        newnode->next=temp->next;
        temp->next=newnode;
        return list;
}

NODE *insertend(NODE *list ,int num)
{
     NODE *newnode,*temp;   
     newnode=MEMORY;
     newnode->data=num;
     for(temp=list;temp->next!=list;temp=temp->next);
     newnode->next=list;
     temp->next=newnode;
     return list;
}

int main()
{
        NODE *list=NULL;
        int ch,num,pos;
        do{
                printf("\n 1 = Create \n 2 = display \n 3 = insertbeg \n 4 = intertmid \n 5 = insertend ");
                printf("\n Enter choice :: ");
                scanf("%d",&ch);

                switch (ch)
                {
                case 1 : list=create(list);
                        break;
                case 2 : Display(list);
                        break;
                case 3 : printf("\n Enter Number to Insert :: ");
                         scanf("%d",&num);
                         list=insertbeg(list,num);
                         break;
                case 4 : printf("\n Enter Number to Insert :: ");
                         scanf("%d",&num);
                         printf("\n Enter Position to Insert :: ");
                         scanf("%d",&pos);
                         list=insertmid(list,num,pos);
                         break;
                case 5 : printf("\n Enter Number to Insert :: ");
                         scanf("%d",&num);
                         list=insertend(list,num);
                         break;
                default: printf("\n Invalid choice");
                        break;
                }
        }while(ch<6);
}
