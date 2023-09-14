#include <stdio.h>
#include <stdlib.h>
struct node {
    int data;
    struct node* next;
};
struct node* create(struct node* head) 
{
    int i, n;
    struct node* newnode, *temp;
    printf("\n Enter Limit : ");
    scanf("%d", &n);
    for (i=0;i<n;i++)
	 {
        newnode = (struct node*)malloc(sizeof(struct node));
        printf("\n Enter N Number : ");
        scanf("%d", &(newnode->data));
        newnode->next = NULL;
        if (head == NULL)
		 {
            head = newnode;
            temp = newnode;
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
    for (temp = head; temp != NULL; temp = temp->next) 
	{
        printf("%d\t", temp->data);
    }
}

struct node* concat(struct node* s1, struct node* s2)
 {
    struct node* temp;
    if (s1 == NULL) 
	return s2;
    if (s2 == NULL)
	return s1;
    for (temp = s1; temp->next != NULL; temp = temp->next);
    temp->next = s2;
    return s1;
}
int main() 
{
    struct node* head = NULL;
    head = create(head);
    dis(head);
    struct node* secondList = NULL;
    secondList = create(secondList);
    printf("\n Concatenate List : ");
    head = concat(head, secondList);
    dis(head);
}
