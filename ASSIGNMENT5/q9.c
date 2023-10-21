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

Node *divideList(Node *list);

int countNode(Node *list);

 

int main()

{

    Node *head = NULL, *head2 = NULL;

 

    head = createList(head);

    displayList(head);

 

    head2 = divideList(head);

    printf("Divide List is : \n");

    displayList(head);

    displayList(head2);

 

    getch();

    return 0;

}

 

Node *createList(Node *list)

{

    int n, value;

    Node *newNode, *temp;

 

    printf("Enter the Size of Node : \n");

    scanf("%d", &n);

 

    for (int i = 0; i < n; i++)

    {

        newNode = (Node *)malloc(sizeof(Node));

 

        printf("Enter the data for %d node : ", i + 1);

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

 

    if (list == NULL)

    {

        printf("The list is Empty : \n");

    }

    else

    {

        while (temp != NULL)

        {

            printf("%d\t", temp->data);

            temp = temp->next;

        }

    }

 

    printf("\n");

}

 

Node *divideList(Node *list)

{

    int cnt = countNode(list);

    Node *temp = list, *list2 = NULL;

    int div = cnt / 2;

 

    for (int i = 1; i < div; i++)

    {

        temp = temp->next;

    }

 

    list2 = temp->next;

    temp->next = NULL;

    return list2;

}

 

int countNode(Node *list)

{

    int cnt = 0;

    Node *temp = list;

    while (temp != NULL)

    {

        temp = temp->next;

        cnt++;

    }

 

    return cnt;

}