#include <stdio.h>

#include <conio.h>

#include <stdlib.h>

#include <string.h>

 

typedef struct node

{

    int data;

    struct node *next;

} Node;

 

Node *createList(Node *list);

void displayList(Node *list);

 

int main()

{

    Node *head = NULL;

    head = createList(head);

    displayList(head);

    getch();

    return 0;

}

 

Node *createList(Node *list)

{

    int n, value;

    Node *newNode, *temp;

 

    printf("Enter the Size of Node : ");

    scanf("%d", &n);

 

    for (int i = 0; i < n; i++)

    {

        newNode = (Node *)malloc(sizeof(Node));

 

        printf("\nEnter the data for %d node : ", i + 1);

        scanf("%d", &value);

 

        newNode->data = value;

        newNode->next = NULL;

 

        if (list == NULL)

        {

            list = temp = newNode;

        }

        else

        {

            temp->next = newNode;

            temp = newNode;

        }

    }

 

    temp->next = list;

 

    return list;

}

 

void displayList(Node *list)

{

    Node *temp = list;

 

    printf("Linked list is : \n");

 

    do

    {

        printf("%d\t", temp->data);

        temp = temp->next;

 

    } while (temp != list);

}