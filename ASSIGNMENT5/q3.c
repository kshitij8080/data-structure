#include <stdio.h>

#include <conio.h>

#include <stdlib.h>

#include <string.h>

 

typedef struct node

{

    int data;

    struct node *next, *prev;

} D_NODE;

 

D_NODE *createList(D_NODE *list);

void display(D_NODE *list);

 

int main()

{

    D_NODE *head = NULL;

    head = createList(head);

    display(head);

 

    getch();

    return 0;

}

 

D_NODE *createList(D_NODE *list)

{

    D_NODE *newNode, *temp;

    int n, i;

 

    printf("Enter how many node \n");

    scanf("%d", &n);

 

    for (i = 1; i <= n; i++)

    {

        newNode = (D_NODE *)malloc(sizeof(D_NODE));

        newNode->next = NULL;

        newNode->prev = NULL;

 

        printf("Enter the data for %d node : ", i);

        scanf("%d", &newNode->data);

 

        if (list == NULL)

        {

            list = temp = newNode;

            list->prev = NULL;

        }

        else

        {

            temp->next = newNode;

            newNode->prev = temp;

            temp = newNode;

        }

    }

 

    return list;

}

 

void display(D_NODE *list)

{

    D_NODE *temp = list;

 

    do

    {

        printf("%d \t", temp->data);

        temp = temp->next;

    } while (temp != NULL);

}