#include <stdio.h>

#include <conio.h>

#include <stdlib.h>

#include <string.h>

 

typedef struct node

{

    int data;

    struct node *next;

} Node;

 

int n;

 

Node *createList(Node *list);

void displayList(Node *list);

Node *bubbleSort(Node *list, int size);

 

int main()

{

    Node *head = NULL;

 

    head = createList(head);

    head = bubbleSort(head, n);

    displayList(head);

 

    getch();

    return 0;

}

 

Node *createList(Node *list)

{

    int value;

    Node *newNode, *temp;

 

    printf("Enter the Size of Node : \n");

    scanf("%d", &n);

 

    for (int i = 0; i < n; i++)

    {

        newNode = (Node *)malloc(sizeof(Node));

 

        printf("Enter the data for %d node : \n", i + 1);

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

 

    return list;

}

 

void displayList(Node *list)

{

    Node *temp = list;

 

    printf("Linked list is : \n");

 

    while (temp != NULL)

    {

        printf("%d\t", temp->data);

        temp = temp->next;

    }

 

    printf("\n");

}

 

Node *bubbleSort(Node *list, int size)

{

    Node *temp = list, *temp2 = NULL;

    int data;

 

    if (list == NULL)

    {

        return list;

    }

    else

    {

        while (temp != NULL)

        {

            temp2 = temp->next;

 

            while (temp2 != NULL)

            {

                if (temp->data > temp2->data)

                {

                    data = temp->data;

                    temp->data = temp2->data;

                    temp2->data = data;

                }

 

                temp2 = temp2->next;

            }

 

            temp = temp->next;

        }

    }

 

    return list;

}

