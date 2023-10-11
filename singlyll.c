#include <stdio.h>
#include <stdlib.h>

struct node 
{
    int num;                        
    struct node *next;           
}*node;
 

void createNodeList(int n)
{
    struct node *newnode, *temp;
    int num, i;
    node = (struct node *)malloc(sizeof(struct node));

    if(node == NULL) 
    {
        printf(" Memory can not be allocated.");
    }
    else
    {


        printf(" Input data for node  : ");
        scanf("%d", &num);
        node->num = num;      
        node->next = NULL; 
        temp = node;

        for(i=2; i<=n; i++)
        {
            newnode = (struct node *)malloc(sizeof(struct node));
            if(newnode == NULL)
            {
                printf(" Memory can not be allocated.");
                break;
            }
            else
            {
                printf(" Input data for node ");
                scanf(" %d", &num);
 
                newnode->num = num;      
                newnode->next = NULL; 
 
                temp->next = newnode; 
                temp = temp->next; 
            }
        }
    }
}
void displayList()
{
    struct node *temp;
    if(node == NULL)
    {
        printf(" List is empty.");
    }
    else
    {
        temp = node;
        while(temp != NULL)
        {
            printf(" Data = %d\n", temp->num); 
            temp = temp->next;               
        }
    }
} 

int main()
{
    int n;
		printf("\n\n Linked List : To create and display Singly Linked List :\n");
		printf("-------------------------------------------------------------\n");
		
    printf(" Input the number of nodes : ");
    scanf("%d", &n);
    createNodeList(n);
    printf("\n Data entered in the list : \n");
    displayList();
    return 0;
}