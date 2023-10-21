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

int countNode(Node *list);

Node *insertBeg(Node *list, int value);

Node *reverseList(Node *list);

 

int main()

{

    Node *head = NULL, *list2 = NULL;

    int node_cnt, value;

    head = createList(head);

 

    node_cnt = countNode(head);

    printf("Total node is = %d \n", node_cnt);

 

    printf("Enter the insert value : \n");

    scanf("%d", &value);

 

    head = insertBeg(head, value);

    displayList(head);

 

    printf("Before Reverse Linked List is : \n");

    displayList(head);

 

    list2 = reverseList(head);

 

    printf("After Reverse Linked List is : \n");

    displayList(list2);

 

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

 

int countNode(Node *list)

{

    Node *temp = list;

    int node_cnt = 0;

 

    while (temp != NULL)

    {

        node_cnt++;

        temp = temp->next;

    }

 

    return node_cnt;

}

 

Node *insertBeg(Node *list, int value)

{

    Node *temp = list, *new_node;

 

    new_node = (Node *)malloc(sizeof(Node));

 

    new_node->data = value;

 

    new_node->next = list;

    list = new_node;

 

    return list;

}

 

Node *reverseList(Node *list)

{

    Node *temp, *newNode, *list2 = NULL;

 

    for (temp = list; temp != NULL; temp = temp->next)

    {

        newNode = (Node *)malloc(sizeof(Node));

 

        newNode->data = temp->data;

        newNode->next = NULL;

 

        if (list2 == NULL)

        {

            list2 = newNode;

        }

        else

        {

            newNode->next = list2;

            list2 = newNode;

        }

    }

 

    return list2;

}